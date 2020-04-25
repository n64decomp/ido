__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
RO_1000E650:
    # 00480964 uini
    .ascii "OSYM"

RO_1000E654:
    # 00480964 uini
    .ascii "KSYM"

RO_1000E658:
    # 00480964 uini
    .ascii "MSYM"

RO_1000E65C:
    # 00480964 uini
    .ascii "RCUF"

RO_1000E660:
    # 00480964 uini
    .ascii "LDRC"

RO_1000E664:
    # 00480964 uini
    .ascii "IRST"

RO_1000E668:
    # 00480964 uini
    .ascii "IRLD"

RO_1000E66C:
    # 00480964 uini
    .ascii "ISTI"

RO_1000E670:
    # 00480964 uini
    .ascii "ILDI"

RO_1000E674:
    # 00480964 uini
    .ascii "SIGN"

RO_1000E678:
    # 00480964 uini
    .ascii "SSYM"

RO_1000E67C:
    # 00480964 uini
    .ascii "LEND"

RO_1000E680:
    # 00480964 uini
    .ascii "LTRM"

RO_1000E684:
    # 00480964 uini
    .ascii "LBDY"

RO_1000E688:
    # 00480964 uini
    .ascii "LBGN"

RO_1000E68C:
    # 00480964 uini
    .ascii "UBD "

RO_1000E690:
    # 00480964 uini
    .ascii "TPLE"

RO_1000E694:
    # 00480964 uini
    .ascii "TPGE"

RO_1000E698:
    # 00480964 uini
    .ascii "TPGT"

RO_1000E69C:
    # 00480964 uini
    .ascii "TPLT"

RO_1000E6A0:
    # 00480964 uini
    .ascii "TPNE"

RO_1000E6A4:
    # 00480964 uini
    .ascii "TPEQ"

RO_1000E6A8:
    # 00480964 uini
    .ascii "CG2 "

RO_1000E6AC:
    # 00480964 uini
    .ascii "CG1 "

RO_1000E6B0:
    # 00480964 uini
    .ascii "IJP "

RO_1000E6B4:
    # 00480964 uini
    .ascii "VREG"

RO_1000E6B8:
    # 00480964 uini
    .ascii "UNAL"

RO_1000E6BC:
    # 00480964 uini
    .ascii "MPMV"

RO_1000E6C0:
    # 00480964 uini
    .ascii "PMOV"

RO_1000E6C4:
    # 00480964 uini
    .ascii "ISST"

RO_1000E6C8:
    # 00480964 uini
    .ascii "ISLD"

RO_1000E6CC:
    # 00480964 uini
    .ascii "ICUF"

RO_1000E6D0:
    # 00480964 uini
    .ascii "LNOT"

RO_1000E6D4:
    # 00480964 uini
    .ascii "SHR "

RO_1000E6D8:
    # 00480964 uini
    .ascii "SHL "

RO_1000E6DC:
    # 00480964 uini
    .ascii "LSYM"

RO_1000E6E0:
    # 00480964 uini
    .ascii "GSYM"

RO_1000E6E4:
    # 00480964 uini
    .ascii "FSYM"

RO_1000E6E8:
    # 00480964 uini
    .ascii "ESYM"

RO_1000E6EC:
    # 00480964 uini
    .ascii "CSYM"

RO_1000E6F0:
    # 00480964 uini
    .ascii "XOR "

RO_1000E6F4:
    # 00480964 uini
    .ascii "XJP "

RO_1000E6F8:
    # 00480964 uini
    .ascii "UNI "

RO_1000E6FC:
    # 00480964 uini
    .ascii "UJP "

RO_1000E700:
    # 00480964 uini
    .ascii "TYP "

RO_1000E704:
    # 00480964 uini
    .ascii "TJP "

RO_1000E708:
    # 00480964 uini
    .ascii "SWP "

RO_1000E70C:
    # 00480964 uini
    .ascii "SUB "

RO_1000E710:
    # 00480964 uini
    .ascii "STSP"

RO_1000E714:
    # 00480964 uini
    .ascii "STR "

RO_1000E718:
    # 00480964 uini
    .ascii "STP "

RO_1000E71C:
    # 00480964 uini
    .ascii "STEP"

RO_1000E720:
    # 00480964 uini
    .ascii "SQRT"

RO_1000E724:
    # 00480964 uini
    .ascii "SQR "

RO_1000E728:
    # 00480964 uini
    .ascii "SGS "

RO_1000E72C:
    # 00480964 uini
    .ascii "HSYM"

RO_1000E730:
    # 00480964 uini
    .ascii "ASYM"

RO_1000E734:
    # 00480964 uini
    .ascii "SDEF"

RO_1000E738:
    # 00480964 uini
    .ascii "RSTR"

RO_1000E73C:
    # 00480964 uini
    .ascii "RPAR"

RO_1000E740:
    # 00480964 uini
    .ascii "RND "

RO_1000E744:
    # 00480964 uini
    .ascii "RLOD"

RO_1000E748:
    # 00480964 uini
    .ascii "RLDC"

RO_1000E74C:
    # 00480964 uini
    .ascii "RLDA"

RO_1000E750:
    # 00480964 uini
    .ascii "RET "

RO_1000E754:
    # 00480964 uini
    .ascii "REGS"

RO_1000E758:
    # 00480964 uini
    .ascii "POP "

RO_1000E75C:
    # 00480964 uini
    .ascii "PDEF"

RO_1000E760:
    # 00480964 uini
    .ascii "PAR "

RO_1000E764:
    # 00480964 uini
    .ascii "OPTN"

RO_1000E768:
    # 00480964 uini
    .ascii "XPAR"

RO_1000E76C:
    # 00480964 uini
    .ascii "ODD "

RO_1000E770:
    # 00480964 uini
    .ascii "NOT "

RO_1000E774:
    # 00480964 uini
    .ascii "NOP "

RO_1000E778:
    # 00480964 uini
    .ascii "NEQ "

RO_1000E77C:
    # 00480964 uini
    .ascii "NEG "

RO_1000E780:
    # 00480964 uini
    .ascii "MUS "

RO_1000E784:
    # 00480964 uini
    .ascii "MTAG"

RO_1000E788:
    # 00480964 uini
    .ascii "MST "

RO_1000E78C:
    # 00480964 uini
    .ascii "MPY "

RO_1000E790:
    # 00480964 uini
    .ascii "MOV "

RO_1000E794:
    # 00480964 uini
    .ascii "REM "

RO_1000E798:
    # 00480964 uini
    .ascii "MOD "

RO_1000E79C:
    # 00480964 uini
    .ascii "MAX "

RO_1000E7A0:
    # 00480964 uini
    .ascii "MIN "

RO_1000E7A4:
    # 00480964 uini
    .ascii "LOD "

RO_1000E7A8:
    # 00480964 uini
    .ascii "LOC "

RO_1000E7AC:
    # 00480964 uini
    .ascii "LEX "

RO_1000E7B0:
    # 00480964 uini
    .ascii "LES "

RO_1000E7B4:
    # 00480964 uini
    .ascii "LEQ "

RO_1000E7B8:
    # 00480964 uini
    .ascii "LDAP"

RO_1000E7BC:
    # 00480964 uini
    .ascii "LDSP"

RO_1000E7C0:
    # 00480964 uini
    .ascii "LDC "

RO_1000E7C4:
    # 00480964 uini
    .ascii "LDA "

RO_1000E7C8:
    # 00480964 uini
    .ascii "ILDA"

RO_1000E7CC:
    # 00480964 uini
    .ascii "LCA "

RO_1000E7D0:
    # 00480964 uini
    .ascii "LBD "

RO_1000E7D4:
    # 00480964 uini
    .ascii "LDEF"

RO_1000E7D8:
    # 00480964 uini
    .ascii "LAB "

RO_1000E7DC:
    # 00480964 uini
    .ascii "IXA "

RO_1000E7E0:
    # 00480964 uini
    .ascii "ISTR"

RO_1000E7E4:
    # 00480964 uini
    .ascii "IOR "

RO_1000E7E8:
    # 00480964 uini
    .ascii "INT "

RO_1000E7EC:
    # 00480964 uini
    .ascii "INN "

RO_1000E7F0:
    # 00480964 uini
    .ascii "INIT"

RO_1000E7F4:
    # 00480964 uini
    .ascii "INC "

RO_1000E7F8:
    # 00480964 uini
    .ascii "INEQ"

RO_1000E7FC:
    # 00480964 uini
    .ascii "ILOD"

RO_1000E800:
    # 00480964 uini
    .ascii "ILES"

RO_1000E804:
    # 00480964 uini
    .ascii "ILEQ"

RO_1000E808:
    # 00480964 uini
    .ascii "IGRT"

RO_1000E80C:
    # 00480964 uini
    .ascii "IGEQ"

RO_1000E810:
    # 00480964 uini
    .ascii "IEQU"

RO_1000E814:
    # 00480964 uini
    .ascii "IDX "

RO_1000E818:
    # 00480964 uini
    .ascii "FILL"

RO_1000E81C:
    # 00480964 uini
    .ascii "GRT "

RO_1000E820:
    # 00480964 uini
    .ascii "GEQ "

RO_1000E824:
    # 00480964 uini
    .ascii "FJP "

RO_1000E828:
    # 00480964 uini
    .ascii "EQU "

RO_1000E82C:
    # 00480964 uini
    .ascii "AENT"

RO_1000E830:
    # 00480964 uini
    .ascii "ENT "

RO_1000E834:
    # 00480964 uini
    .ascii "ENDB"

RO_1000E838:
    # 00480964 uini
    .ascii "END "

RO_1000E83C:
    # 00480964 uini
    .ascii "DUP "

RO_1000E840:
    # 00480964 uini
    .ascii "DIV "

RO_1000E844:
    # 00480964 uini
    .ascii "DIF "

RO_1000E848:
    # 00480964 uini
    .ascii "DEF "

RO_1000E84C:
    # 00480964 uini
    .ascii "DEC "

RO_1000E850:
    # 00480964 uini
    .ascii "CVTL"

RO_1000E854:
    # 00480964 uini
    .ascii "CVT "

RO_1000E858:
    # 00480964 uini
    .ascii "CUP "

RO_1000E85C:
    # 00480964 uini
    .ascii "COMM"

RO_1000E860:
    # 00480964 uini
    .ascii "CTRL"

RO_1000E864:
    # 00480964 uini
    .ascii "CUBD"

RO_1000E868:
    # 00480964 uini
    .ascii "CLBD"

RO_1000E86C:
    # 00480964 uini
    .ascii "CLAB"

RO_1000E870:
    # 00480964 uini
    .ascii "CIA "

RO_1000E874:
    # 00480964 uini
    .ascii "CHKN"

RO_1000E878:
    # 00480964 uini
    .ascii "CHKL"

RO_1000E87C:
    # 00480964 uini
    .ascii "CHKH"

RO_1000E880:
    # 00480964 uini
    .ascii "CHKT"

RO_1000E884:
    # 00480964 uini
    .ascii "BSUB"

RO_1000E888:
    # 00480964 uini
    .ascii "BGNB"

RO_1000E88C:
    # 00480964 uini
    .ascii "BGN "

RO_1000E890:
    # 00480964 uini
    .ascii "AOS "

RO_1000E894:
    # 00480964 uini
    .ascii "AND "

RO_1000E898:
    # 00480964 uini
    .ascii "ALIA"

RO_1000E89C:
    # 00480964 uini
    .ascii "ADJ "

RO_1000E8A0:
    # 00480964 uini
    .ascii "ADD "

RO_1000E8A4:
    # 00480964 uini
    .asciz "ABS "




.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
    .type func_004808D0, @function
func_004808D0:
    # 00480964 uini
/* 004808D0 3C1C0FBA */  .cpload $t9
/* 004808D4 279C99C0 */  
/* 004808D8 0399E021 */  
/* 004808DC 00047080 */  sll   $t6, $a0, 2
/* 004808E0 AFA40000 */  sw    $a0, ($sp)
/* 004808E4 AFA50004 */  sw    $a1, 4($sp)
/* 004808E8 01C47021 */  addu  $t6, $t6, $a0
/* 004808EC 27A80004 */  addiu $t0, $sp, 4
/* 004808F0 8F988DEC */  lw     $t8, %got(utab)($gp)
/* 004808F4 890A0000 */  lwl   $t2, ($t0)
/* 004808F8 000E7080 */  sll   $t6, $t6, 2
/* 004808FC 990A0003 */  lwr   $t2, 3($t0)
/* 00480900 01C47023 */  subu  $t6, $t6, $a0
/* 00480904 25CF000A */  addiu $t7, $t6, 0xa
/* 00480908 01F8C821 */  addu  $t9, $t7, $t8
/* 0048090C AB2A0000 */  swl   $t2, ($t9)
/* 00480910 BB2A0003 */  swr   $t2, 3($t9)
/* 00480914 AC40FFFC */  sw    $zero, -4($v0)
/* 00480918 03E00008 */  jr    $ra
/* 0048091C A044FFFB */   sb    $a0, -5($v0)

    .type func_00480920, @function
func_00480920:
    # 00480964 uini
/* 00480920 3C1C0FBA */  .cpload $t9
/* 00480924 279C9970 */  
/* 00480928 0399E021 */  
/* 0048092C AFA40000 */  sw    $a0, ($sp)
/* 00480930 9058FFFB */  lbu   $t8, -5($v0)
/* 00480934 8C4EFFFC */  lw    $t6, -4($v0)
/* 00480938 8F898DEC */  lw     $t1, %got(utab)($gp)
/* 0048093C 0018C880 */  sll   $t9, $t8, 2
/* 00480940 0338C821 */  addu  $t9, $t9, $t8
/* 00480944 0019C880 */  sll   $t9, $t9, 2
/* 00480948 0338C823 */  subu  $t9, $t9, $t8
/* 0048094C 25CF0001 */  addiu $t7, $t6, 1
/* 00480950 032F4021 */  addu  $t0, $t9, $t7
/* 00480954 AC4FFFFC */  sw    $t7, -4($v0)
/* 00480958 01095021 */  addu  $t2, $t0, $t1
/* 0048095C 03E00008 */  jr    $ra
/* 00480960 A144FFFF */   sb    $a0, -1($t2)

glabel uini
    .ent uini
    # 00434720 processargs
/* 00480964 3C1C0FBA */  .cpload $t9
/* 00480968 279C992C */  
/* 0048096C 0399E021 */  
/* 00480970 8F8E8044 */  lw    $t6, %got(RO_1000E8A4)($gp)
/* 00480974 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 00480978 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0048097C AFBC0018 */  sw    $gp, 0x18($sp)
/* 00480980 AFB00014 */  sw    $s0, 0x14($sp)
/* 00480984 25CEE8A4 */  addiu $t6, %lo(RO_1000E8A4) # addiu $t6, $t6, -0x175c
/* 00480988 89D80000 */  lwl   $t8, ($t6)
/* 0048098C 99D80003 */  lwr   $t8, 3($t6)
/* 00480990 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00480994 27B00030 */  addiu $s0, $sp, 0x30
/* 00480998 ABB80004 */  swl   $t8, 4($sp)
/* 0048099C BBB80007 */  swr   $t8, 7($sp)
/* 004809A0 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 004809A4 8FA50004 */  lw    $a1, 4($sp)
/* 004809A8 02001025 */  move  $v0, $s0
/* 004809AC 0320F809 */  jalr  $t9
/* 004809B0 00002025 */   move  $a0, $zero
/* 004809B4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004809B8 00002025 */  move  $a0, $zero
/* 004809BC 02001025 */  move  $v0, $s0
/* 004809C0 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004809C4 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004809C8 0320F809 */  jalr  $t9
/* 004809CC 00000000 */   nop   
/* 004809D0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004809D4 24040016 */  li    $a0, 22
/* 004809D8 02001025 */  move  $v0, $s0
/* 004809DC 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004809E0 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004809E4 0320F809 */  jalr  $t9
/* 004809E8 00000000 */   nop   
/* 004809EC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004809F0 24040001 */  li    $a0, 1
/* 004809F4 02001025 */  move  $v0, $s0
/* 004809F8 8F998044 */  lw    $t9, %got(RO_1000E8A0)($gp)
/* 004809FC 2739E8A0 */  addiu $t9, %lo(RO_1000E8A0) # addiu $t9, $t9, -0x1760
/* 00480A00 8B290000 */  lwl   $t1, ($t9)
/* 00480A04 9B290003 */  lwr   $t1, 3($t9)
/* 00480A08 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00480A0C ABA90004 */  swl   $t1, 4($sp)
/* 00480A10 BBA90007 */  swr   $t1, 7($sp)
/* 00480A14 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00480A18 0320F809 */  jalr  $t9
/* 00480A1C 8FA50004 */   lw    $a1, 4($sp)
/* 00480A20 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00480A24 00002025 */  move  $a0, $zero
/* 00480A28 02001025 */  move  $v0, $s0
/* 00480A2C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00480A30 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00480A34 0320F809 */  jalr  $t9
/* 00480A38 00000000 */   nop   
/* 00480A3C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00480A40 24040016 */  li    $a0, 22
/* 00480A44 02001025 */  move  $v0, $s0
/* 00480A48 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00480A4C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00480A50 0320F809 */  jalr  $t9
/* 00480A54 00000000 */   nop   
/* 00480A58 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00480A5C 24040002 */  li    $a0, 2
/* 00480A60 02001025 */  move  $v0, $s0
/* 00480A64 8F8A8044 */  lw    $t2, %got(RO_1000E89C)($gp)
/* 00480A68 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00480A6C 254AE89C */  addiu $t2, %lo(RO_1000E89C) # addiu $t2, $t2, -0x1764
/* 00480A70 894C0000 */  lwl   $t4, ($t2)
/* 00480A74 994C0003 */  lwr   $t4, 3($t2)
/* 00480A78 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00480A7C ABAC0004 */  swl   $t4, 4($sp)
/* 00480A80 BBAC0007 */  swr   $t4, 7($sp)
/* 00480A84 0320F809 */  jalr  $t9
/* 00480A88 8FA50004 */   lw    $a1, 4($sp)
/* 00480A8C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00480A90 00002025 */  move  $a0, $zero
/* 00480A94 02001025 */  move  $v0, $s0
/* 00480A98 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00480A9C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00480AA0 0320F809 */  jalr  $t9
/* 00480AA4 00000000 */   nop   
/* 00480AA8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00480AAC 2404000D */  li    $a0, 13
/* 00480AB0 02001025 */  move  $v0, $s0
/* 00480AB4 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00480AB8 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00480ABC 0320F809 */  jalr  $t9
/* 00480AC0 00000000 */   nop   
/* 00480AC4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00480AC8 2404000A */  li    $a0, 10
/* 00480ACC 02001025 */  move  $v0, $s0
/* 00480AD0 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00480AD4 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00480AD8 0320F809 */  jalr  $t9
/* 00480ADC 00000000 */   nop   
/* 00480AE0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00480AE4 24040016 */  li    $a0, 22
/* 00480AE8 02001025 */  move  $v0, $s0
/* 00480AEC 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00480AF0 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00480AF4 0320F809 */  jalr  $t9
/* 00480AF8 00000000 */   nop   
/* 00480AFC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00480B00 24040090 */  li    $a0, 144
/* 00480B04 02001025 */  move  $v0, $s0
/* 00480B08 8F8D8044 */  lw    $t5, %got(RO_1000E898)($gp)
/* 00480B0C 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00480B10 25ADE898 */  addiu $t5, %lo(RO_1000E898) # addiu $t5, $t5, -0x1768
/* 00480B14 89AF0000 */  lwl   $t7, ($t5)
/* 00480B18 99AF0003 */  lwr   $t7, 3($t5)
/* 00480B1C 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00480B20 ABAF0004 */  swl   $t7, 4($sp)
/* 00480B24 BBAF0007 */  swr   $t7, 7($sp)
/* 00480B28 0320F809 */  jalr  $t9
/* 00480B2C 8FA50004 */   lw    $a1, 4($sp)
/* 00480B30 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00480B34 2404000E */  li    $a0, 14
/* 00480B38 02001025 */  move  $v0, $s0
/* 00480B3C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00480B40 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00480B44 0320F809 */  jalr  $t9
/* 00480B48 00000000 */   nop   
/* 00480B4C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00480B50 24040002 */  li    $a0, 2
/* 00480B54 02001025 */  move  $v0, $s0
/* 00480B58 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00480B5C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00480B60 0320F809 */  jalr  $t9
/* 00480B64 00000000 */   nop   
/* 00480B68 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00480B6C 24040016 */  li    $a0, 22
/* 00480B70 02001025 */  move  $v0, $s0
/* 00480B74 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00480B78 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00480B7C 0320F809 */  jalr  $t9
/* 00480B80 00000000 */   nop   
/* 00480B84 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00480B88 24040004 */  li    $a0, 4
/* 00480B8C 02001025 */  move  $v0, $s0
/* 00480B90 8F988044 */  lw    $t8, %got(RO_1000E894)($gp)
/* 00480B94 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00480B98 2718E894 */  addiu $t8, %lo(RO_1000E894) # addiu $t8, $t8, -0x176c
/* 00480B9C 8B080000 */  lwl   $t0, ($t8)
/* 00480BA0 9B080003 */  lwr   $t0, 3($t8)
/* 00480BA4 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00480BA8 ABA80004 */  swl   $t0, 4($sp)
/* 00480BAC BBA80007 */  swr   $t0, 7($sp)
/* 00480BB0 0320F809 */  jalr  $t9
/* 00480BB4 8FA50004 */   lw    $a1, 4($sp)
/* 00480BB8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00480BBC 00002025 */  move  $a0, $zero
/* 00480BC0 02001025 */  move  $v0, $s0
/* 00480BC4 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00480BC8 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00480BCC 0320F809 */  jalr  $t9
/* 00480BD0 00000000 */   nop   
/* 00480BD4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00480BD8 24040016 */  li    $a0, 22
/* 00480BDC 02001025 */  move  $v0, $s0
/* 00480BE0 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00480BE4 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00480BE8 0320F809 */  jalr  $t9
/* 00480BEC 00000000 */   nop   
/* 00480BF0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00480BF4 24040005 */  li    $a0, 5
/* 00480BF8 02001025 */  move  $v0, $s0
/* 00480BFC 8F898044 */  lw    $t1, %got(RO_1000E890)($gp)
/* 00480C00 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00480C04 2529E890 */  addiu $t1, %lo(RO_1000E890) # addiu $t1, $t1, -0x1770
/* 00480C08 892B0000 */  lwl   $t3, ($t1)
/* 00480C0C 992B0003 */  lwr   $t3, 3($t1)
/* 00480C10 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00480C14 ABAB0004 */  swl   $t3, 4($sp)
/* 00480C18 BBAB0007 */  swr   $t3, 7($sp)
/* 00480C1C 0320F809 */  jalr  $t9
/* 00480C20 8FA50004 */   lw    $a1, 4($sp)
/* 00480C24 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00480C28 24040016 */  li    $a0, 22
/* 00480C2C 02001025 */  move  $v0, $s0
/* 00480C30 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00480C34 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00480C38 0320F809 */  jalr  $t9
/* 00480C3C 00000000 */   nop   
/* 00480C40 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00480C44 24040007 */  li    $a0, 7
/* 00480C48 02001025 */  move  $v0, $s0
/* 00480C4C 8F8C8044 */  lw    $t4, %got(RO_1000E88C)($gp)
/* 00480C50 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00480C54 258CE88C */  addiu $t4, %lo(RO_1000E88C) # addiu $t4, $t4, -0x1774
/* 00480C58 898E0000 */  lwl   $t6, ($t4)
/* 00480C5C 998E0003 */  lwr   $t6, 3($t4)
/* 00480C60 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00480C64 ABAE0004 */  swl   $t6, 4($sp)
/* 00480C68 BBAE0007 */  swr   $t6, 7($sp)
/* 00480C6C 0320F809 */  jalr  $t9
/* 00480C70 8FA50004 */   lw    $a1, 4($sp)
/* 00480C74 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00480C78 24040005 */  li    $a0, 5
/* 00480C7C 02001025 */  move  $v0, $s0
/* 00480C80 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00480C84 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00480C88 0320F809 */  jalr  $t9
/* 00480C8C 00000000 */   nop   
/* 00480C90 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00480C94 2404000A */  li    $a0, 10
/* 00480C98 02001025 */  move  $v0, $s0
/* 00480C9C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00480CA0 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00480CA4 0320F809 */  jalr  $t9
/* 00480CA8 00000000 */   nop   
/* 00480CAC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00480CB0 2404000D */  li    $a0, 13
/* 00480CB4 02001025 */  move  $v0, $s0
/* 00480CB8 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00480CBC 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00480CC0 0320F809 */  jalr  $t9
/* 00480CC4 00000000 */   nop   
/* 00480CC8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00480CCC 24040016 */  li    $a0, 22
/* 00480CD0 02001025 */  move  $v0, $s0
/* 00480CD4 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00480CD8 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00480CDC 0320F809 */  jalr  $t9
/* 00480CE0 00000000 */   nop   
/* 00480CE4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00480CE8 24040008 */  li    $a0, 8
/* 00480CEC 02001025 */  move  $v0, $s0
/* 00480CF0 8F8F8044 */  lw    $t7, %got(RO_1000E888)($gp)
/* 00480CF4 25EFE888 */  addiu $t7, %lo(RO_1000E888) # addiu $t7, $t7, -0x1778
/* 00480CF8 89F90000 */  lwl   $t9, ($t7)
/* 00480CFC 99F90003 */  lwr   $t9, 3($t7)
/* 00480D00 ABB90004 */  swl   $t9, 4($sp)
/* 00480D04 BBB90007 */  swr   $t9, 7($sp)
/* 00480D08 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00480D0C 8FA50004 */  lw    $a1, 4($sp)
/* 00480D10 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00480D14 0320F809 */  jalr  $t9
/* 00480D18 00000000 */   nop   
/* 00480D1C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00480D20 24040005 */  li    $a0, 5
/* 00480D24 02001025 */  move  $v0, $s0
/* 00480D28 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00480D2C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00480D30 0320F809 */  jalr  $t9
/* 00480D34 00000000 */   nop   
/* 00480D38 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00480D3C 24040016 */  li    $a0, 22
/* 00480D40 02001025 */  move  $v0, $s0
/* 00480D44 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00480D48 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00480D4C 0320F809 */  jalr  $t9
/* 00480D50 00000000 */   nop   
/* 00480D54 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00480D58 24040009 */  li    $a0, 9
/* 00480D5C 02001025 */  move  $v0, $s0
/* 00480D60 8F888044 */  lw    $t0, %got(RO_1000E884)($gp)
/* 00480D64 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00480D68 2508E884 */  addiu $t0, %lo(RO_1000E884) # addiu $t0, $t0, -0x177c
/* 00480D6C 890A0000 */  lwl   $t2, ($t0)
/* 00480D70 990A0003 */  lwr   $t2, 3($t0)
/* 00480D74 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00480D78 ABAA0004 */  swl   $t2, 4($sp)
/* 00480D7C BBAA0007 */  swr   $t2, 7($sp)
/* 00480D80 0320F809 */  jalr  $t9
/* 00480D84 8FA50004 */   lw    $a1, 4($sp)
/* 00480D88 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00480D8C 00002025 */  move  $a0, $zero
/* 00480D90 02001025 */  move  $v0, $s0
/* 00480D94 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00480D98 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00480D9C 0320F809 */  jalr  $t9
/* 00480DA0 00000000 */   nop   
/* 00480DA4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00480DA8 24040016 */  li    $a0, 22
/* 00480DAC 02001025 */  move  $v0, $s0
/* 00480DB0 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00480DB4 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00480DB8 0320F809 */  jalr  $t9
/* 00480DBC 00000000 */   nop   
/* 00480DC0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00480DC4 2404000F */  li    $a0, 15
/* 00480DC8 02001025 */  move  $v0, $s0
/* 00480DCC 8F8B8044 */  lw    $t3, %got(RO_1000E880)($gp)
/* 00480DD0 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00480DD4 256BE880 */  addiu $t3, %lo(RO_1000E880) # addiu $t3, $t3, -0x1780
/* 00480DD8 896D0000 */  lwl   $t5, ($t3)
/* 00480DDC 996D0003 */  lwr   $t5, 3($t3)
/* 00480DE0 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00480DE4 ABAD0004 */  swl   $t5, 4($sp)
/* 00480DE8 BBAD0007 */  swr   $t5, 7($sp)
/* 00480DEC 0320F809 */  jalr  $t9
/* 00480DF0 8FA50004 */   lw    $a1, 4($sp)
/* 00480DF4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00480DF8 24040016 */  li    $a0, 22
/* 00480DFC 02001025 */  move  $v0, $s0
/* 00480E00 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00480E04 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00480E08 0320F809 */  jalr  $t9
/* 00480E0C 00000000 */   nop   
/* 00480E10 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00480E14 2404000C */  li    $a0, 12
/* 00480E18 02001025 */  move  $v0, $s0
/* 00480E1C 8F8E8044 */  lw    $t6, %got(RO_1000E87C)($gp)
/* 00480E20 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00480E24 25CEE87C */  addiu $t6, %lo(RO_1000E87C) # addiu $t6, $t6, -0x1784
/* 00480E28 89D80000 */  lwl   $t8, ($t6)
/* 00480E2C 99D80003 */  lwr   $t8, 3($t6)
/* 00480E30 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00480E34 ABB80004 */  swl   $t8, 4($sp)
/* 00480E38 BBB80007 */  swr   $t8, 7($sp)
/* 00480E3C 0320F809 */  jalr  $t9
/* 00480E40 8FA50004 */   lw    $a1, 4($sp)
/* 00480E44 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00480E48 00002025 */  move  $a0, $zero
/* 00480E4C 02001025 */  move  $v0, $s0
/* 00480E50 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00480E54 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00480E58 0320F809 */  jalr  $t9
/* 00480E5C 00000000 */   nop   
/* 00480E60 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00480E64 2404000E */  li    $a0, 14
/* 00480E68 02001025 */  move  $v0, $s0
/* 00480E6C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00480E70 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00480E74 0320F809 */  jalr  $t9
/* 00480E78 00000000 */   nop   
/* 00480E7C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00480E80 24040016 */  li    $a0, 22
/* 00480E84 02001025 */  move  $v0, $s0
/* 00480E88 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00480E8C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00480E90 0320F809 */  jalr  $t9
/* 00480E94 00000000 */   nop   
/* 00480E98 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00480E9C 2404000D */  li    $a0, 13
/* 00480EA0 02001025 */  move  $v0, $s0
/* 00480EA4 8F998044 */  lw    $t9, %got(RO_1000E878)($gp)
/* 00480EA8 2739E878 */  addiu $t9, %lo(RO_1000E878) # addiu $t9, $t9, -0x1788
/* 00480EAC 8B290000 */  lwl   $t1, ($t9)
/* 00480EB0 9B290003 */  lwr   $t1, 3($t9)
/* 00480EB4 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00480EB8 ABA90004 */  swl   $t1, 4($sp)
/* 00480EBC BBA90007 */  swr   $t1, 7($sp)
/* 00480EC0 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00480EC4 0320F809 */  jalr  $t9
/* 00480EC8 8FA50004 */   lw    $a1, 4($sp)
/* 00480ECC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00480ED0 00002025 */  move  $a0, $zero
/* 00480ED4 02001025 */  move  $v0, $s0
/* 00480ED8 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00480EDC 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00480EE0 0320F809 */  jalr  $t9
/* 00480EE4 00000000 */   nop   
/* 00480EE8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00480EEC 2404000E */  li    $a0, 14
/* 00480EF0 02001025 */  move  $v0, $s0
/* 00480EF4 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00480EF8 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00480EFC 0320F809 */  jalr  $t9
/* 00480F00 00000000 */   nop   
/* 00480F04 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00480F08 24040016 */  li    $a0, 22
/* 00480F0C 02001025 */  move  $v0, $s0
/* 00480F10 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00480F14 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00480F18 0320F809 */  jalr  $t9
/* 00480F1C 00000000 */   nop   
/* 00480F20 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00480F24 2404000E */  li    $a0, 14
/* 00480F28 02001025 */  move  $v0, $s0
/* 00480F2C 8F8A8044 */  lw    $t2, %got(RO_1000E874)($gp)
/* 00480F30 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00480F34 254AE874 */  addiu $t2, %lo(RO_1000E874) # addiu $t2, $t2, -0x178c
/* 00480F38 894C0000 */  lwl   $t4, ($t2)
/* 00480F3C 994C0003 */  lwr   $t4, 3($t2)
/* 00480F40 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00480F44 ABAC0004 */  swl   $t4, 4($sp)
/* 00480F48 BBAC0007 */  swr   $t4, 7($sp)
/* 00480F4C 0320F809 */  jalr  $t9
/* 00480F50 8FA50004 */   lw    $a1, 4($sp)
/* 00480F54 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00480F58 24040016 */  li    $a0, 22
/* 00480F5C 02001025 */  move  $v0, $s0
/* 00480F60 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00480F64 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00480F68 0320F809 */  jalr  $t9
/* 00480F6C 00000000 */   nop   
/* 00480F70 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00480F74 24040010 */  li    $a0, 16
/* 00480F78 02001025 */  move  $v0, $s0
/* 00480F7C 8F8D8044 */  lw    $t5, %got(RO_1000E870)($gp)
/* 00480F80 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00480F84 25ADE870 */  addiu $t5, %lo(RO_1000E870) # addiu $t5, $t5, -0x1790
/* 00480F88 89AF0000 */  lwl   $t7, ($t5)
/* 00480F8C 99AF0003 */  lwr   $t7, 3($t5)
/* 00480F90 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00480F94 ABAF0004 */  swl   $t7, 4($sp)
/* 00480F98 BBAF0007 */  swr   $t7, 7($sp)
/* 00480F9C 0320F809 */  jalr  $t9
/* 00480FA0 8FA50004 */   lw    $a1, 4($sp)
/* 00480FA4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00480FA8 00002025 */  move  $a0, $zero
/* 00480FAC 02001025 */  move  $v0, $s0
/* 00480FB0 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00480FB4 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00480FB8 0320F809 */  jalr  $t9
/* 00480FBC 00000000 */   nop   
/* 00480FC0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00480FC4 2404000A */  li    $a0, 10
/* 00480FC8 02001025 */  move  $v0, $s0
/* 00480FCC 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00480FD0 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00480FD4 0320F809 */  jalr  $t9
/* 00480FD8 00000000 */   nop   
/* 00480FDC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00480FE0 24040002 */  li    $a0, 2
/* 00480FE4 02001025 */  move  $v0, $s0
/* 00480FE8 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00480FEC 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00480FF0 0320F809 */  jalr  $t9
/* 00480FF4 00000000 */   nop   
/* 00480FF8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00480FFC 2404000D */  li    $a0, 13
/* 00481000 02001025 */  move  $v0, $s0
/* 00481004 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00481008 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 0048100C 0320F809 */  jalr  $t9
/* 00481010 00000000 */   nop   
/* 00481014 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481018 2404000E */  li    $a0, 14
/* 0048101C 02001025 */  move  $v0, $s0
/* 00481020 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00481024 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00481028 0320F809 */  jalr  $t9
/* 0048102C 00000000 */   nop   
/* 00481030 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481034 2404000B */  li    $a0, 11
/* 00481038 02001025 */  move  $v0, $s0
/* 0048103C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00481040 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00481044 0320F809 */  jalr  $t9
/* 00481048 00000000 */   nop   
/* 0048104C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481050 24040016 */  li    $a0, 22
/* 00481054 02001025 */  move  $v0, $s0
/* 00481058 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 0048105C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00481060 0320F809 */  jalr  $t9
/* 00481064 00000000 */   nop   
/* 00481068 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048106C 24040011 */  li    $a0, 17
/* 00481070 02001025 */  move  $v0, $s0
/* 00481074 8F988044 */  lw    $t8, %got(RO_1000E86C)($gp)
/* 00481078 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 0048107C 2718E86C */  addiu $t8, %lo(RO_1000E86C) # addiu $t8, $t8, -0x1794
/* 00481080 8B080000 */  lwl   $t0, ($t8)
/* 00481084 9B080003 */  lwr   $t0, 3($t8)
/* 00481088 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 0048108C ABA80004 */  swl   $t0, 4($sp)
/* 00481090 BBA80007 */  swr   $t0, 7($sp)
/* 00481094 0320F809 */  jalr  $t9
/* 00481098 8FA50004 */   lw    $a1, 4($sp)
/* 0048109C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004810A0 24040003 */  li    $a0, 3
/* 004810A4 02001025 */  move  $v0, $s0
/* 004810A8 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004810AC 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004810B0 0320F809 */  jalr  $t9
/* 004810B4 00000000 */   nop   
/* 004810B8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004810BC 2404000A */  li    $a0, 10
/* 004810C0 02001025 */  move  $v0, $s0
/* 004810C4 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004810C8 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004810CC 0320F809 */  jalr  $t9
/* 004810D0 00000000 */   nop   
/* 004810D4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004810D8 24040016 */  li    $a0, 22
/* 004810DC 02001025 */  move  $v0, $s0
/* 004810E0 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004810E4 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004810E8 0320F809 */  jalr  $t9
/* 004810EC 00000000 */   nop   
/* 004810F0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004810F4 24040012 */  li    $a0, 18
/* 004810F8 02001025 */  move  $v0, $s0
/* 004810FC 8F898044 */  lw    $t1, %got(RO_1000E868)($gp)
/* 00481100 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00481104 2529E868 */  addiu $t1, %lo(RO_1000E868) # addiu $t1, $t1, -0x1798
/* 00481108 892B0000 */  lwl   $t3, ($t1)
/* 0048110C 992B0003 */  lwr   $t3, 3($t1)
/* 00481110 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00481114 ABAB0004 */  swl   $t3, 4($sp)
/* 00481118 BBAB0007 */  swr   $t3, 7($sp)
/* 0048111C 0320F809 */  jalr  $t9
/* 00481120 8FA50004 */   lw    $a1, 4($sp)
/* 00481124 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481128 00002025 */  move  $a0, $zero
/* 0048112C 02001025 */  move  $v0, $s0
/* 00481130 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00481134 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00481138 0320F809 */  jalr  $t9
/* 0048113C 00000000 */   nop   
/* 00481140 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481144 2404000E */  li    $a0, 14
/* 00481148 02001025 */  move  $v0, $s0
/* 0048114C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00481150 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00481154 0320F809 */  jalr  $t9
/* 00481158 00000000 */   nop   
/* 0048115C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481160 24040016 */  li    $a0, 22
/* 00481164 02001025 */  move  $v0, $s0
/* 00481168 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 0048116C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00481170 0320F809 */  jalr  $t9
/* 00481174 00000000 */   nop   
/* 00481178 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048117C 24040016 */  li    $a0, 22
/* 00481180 02001025 */  move  $v0, $s0
/* 00481184 8F8C8044 */  lw    $t4, %got(RO_1000E864)($gp)
/* 00481188 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 0048118C 258CE864 */  addiu $t4, %lo(RO_1000E864) # addiu $t4, $t4, -0x179c
/* 00481190 898E0000 */  lwl   $t6, ($t4)
/* 00481194 998E0003 */  lwr   $t6, 3($t4)
/* 00481198 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 0048119C ABAE0004 */  swl   $t6, 4($sp)
/* 004811A0 BBAE0007 */  swr   $t6, 7($sp)
/* 004811A4 0320F809 */  jalr  $t9
/* 004811A8 8FA50004 */   lw    $a1, 4($sp)
/* 004811AC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004811B0 00002025 */  move  $a0, $zero
/* 004811B4 02001025 */  move  $v0, $s0
/* 004811B8 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004811BC 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004811C0 0320F809 */  jalr  $t9
/* 004811C4 00000000 */   nop   
/* 004811C8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004811CC 2404000E */  li    $a0, 14
/* 004811D0 02001025 */  move  $v0, $s0
/* 004811D4 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004811D8 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004811DC 0320F809 */  jalr  $t9
/* 004811E0 00000000 */   nop   
/* 004811E4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004811E8 24040016 */  li    $a0, 22
/* 004811EC 02001025 */  move  $v0, $s0
/* 004811F0 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004811F4 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004811F8 0320F809 */  jalr  $t9
/* 004811FC 00000000 */   nop   
/* 00481200 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481204 24040015 */  li    $a0, 21
/* 00481208 02001025 */  move  $v0, $s0
/* 0048120C 8F8F8044 */  lw    $t7, %got(RO_1000E860)($gp)
/* 00481210 25EFE860 */  addiu $t7, %lo(RO_1000E860) # addiu $t7, $t7, -0x17a0
/* 00481214 89F90000 */  lwl   $t9, ($t7)
/* 00481218 99F90003 */  lwr   $t9, 3($t7)
/* 0048121C ABB90004 */  swl   $t9, 4($sp)
/* 00481220 BBB90007 */  swr   $t9, 7($sp)
/* 00481224 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00481228 8FA50004 */  lw    $a1, 4($sp)
/* 0048122C 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00481230 0320F809 */  jalr  $t9
/* 00481234 00000000 */   nop   
/* 00481238 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048123C 00002025 */  move  $a0, $zero
/* 00481240 02001025 */  move  $v0, $s0
/* 00481244 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00481248 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 0048124C 0320F809 */  jalr  $t9
/* 00481250 00000000 */   nop   
/* 00481254 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481258 24040001 */  li    $a0, 1
/* 0048125C 02001025 */  move  $v0, $s0
/* 00481260 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00481264 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00481268 0320F809 */  jalr  $t9
/* 0048126C 00000000 */   nop   
/* 00481270 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481274 24040005 */  li    $a0, 5
/* 00481278 02001025 */  move  $v0, $s0
/* 0048127C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00481280 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00481284 0320F809 */  jalr  $t9
/* 00481288 00000000 */   nop   
/* 0048128C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481290 2404000D */  li    $a0, 13
/* 00481294 02001025 */  move  $v0, $s0
/* 00481298 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 0048129C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004812A0 0320F809 */  jalr  $t9
/* 004812A4 00000000 */   nop   
/* 004812A8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004812AC 2404000A */  li    $a0, 10
/* 004812B0 02001025 */  move  $v0, $s0
/* 004812B4 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004812B8 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004812BC 0320F809 */  jalr  $t9
/* 004812C0 00000000 */   nop   
/* 004812C4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004812C8 24040016 */  li    $a0, 22
/* 004812CC 02001025 */  move  $v0, $s0
/* 004812D0 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004812D4 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004812D8 0320F809 */  jalr  $t9
/* 004812DC 00000000 */   nop   
/* 004812E0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004812E4 24040013 */  li    $a0, 19
/* 004812E8 02001025 */  move  $v0, $s0
/* 004812EC 8F888044 */  lw    $t0, %got(RO_1000E85C)($gp)
/* 004812F0 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 004812F4 2508E85C */  addiu $t0, %lo(RO_1000E85C) # addiu $t0, $t0, -0x17a4
/* 004812F8 890A0000 */  lwl   $t2, ($t0)
/* 004812FC 990A0003 */  lwr   $t2, 3($t0)
/* 00481300 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00481304 ABAA0004 */  swl   $t2, 4($sp)
/* 00481308 BBAA0007 */  swr   $t2, 7($sp)
/* 0048130C 0320F809 */  jalr  $t9
/* 00481310 8FA50004 */   lw    $a1, 4($sp)
/* 00481314 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481318 2404000C */  li    $a0, 12
/* 0048131C 02001025 */  move  $v0, $s0
/* 00481320 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00481324 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00481328 0320F809 */  jalr  $t9
/* 0048132C 00000000 */   nop   
/* 00481330 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481334 24040016 */  li    $a0, 22
/* 00481338 02001025 */  move  $v0, $s0
/* 0048133C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00481340 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00481344 0320F809 */  jalr  $t9
/* 00481348 00000000 */   nop   
/* 0048134C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481350 24040017 */  li    $a0, 23
/* 00481354 02001025 */  move  $v0, $s0
/* 00481358 8F8B8044 */  lw    $t3, %got(RO_1000E858)($gp)
/* 0048135C 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00481360 256BE858 */  addiu $t3, %lo(RO_1000E858) # addiu $t3, $t3, -0x17a8
/* 00481364 896D0000 */  lwl   $t5, ($t3)
/* 00481368 996D0003 */  lwr   $t5, 3($t3)
/* 0048136C 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00481370 ABAD0004 */  swl   $t5, 4($sp)
/* 00481374 BBAD0007 */  swr   $t5, 7($sp)
/* 00481378 0320F809 */  jalr  $t9
/* 0048137C 8FA50004 */   lw    $a1, 4($sp)
/* 00481380 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481384 00002025 */  move  $a0, $zero
/* 00481388 02001025 */  move  $v0, $s0
/* 0048138C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00481390 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00481394 0320F809 */  jalr  $t9
/* 00481398 00000000 */   nop   
/* 0048139C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004813A0 24040002 */  li    $a0, 2
/* 004813A4 02001025 */  move  $v0, $s0
/* 004813A8 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004813AC 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004813B0 0320F809 */  jalr  $t9
/* 004813B4 00000000 */   nop   
/* 004813B8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004813BC 24040005 */  li    $a0, 5
/* 004813C0 02001025 */  move  $v0, $s0
/* 004813C4 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004813C8 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004813CC 0320F809 */  jalr  $t9
/* 004813D0 00000000 */   nop   
/* 004813D4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004813D8 24040007 */  li    $a0, 7
/* 004813DC 02001025 */  move  $v0, $s0
/* 004813E0 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004813E4 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004813E8 0320F809 */  jalr  $t9
/* 004813EC 00000000 */   nop   
/* 004813F0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004813F4 24040008 */  li    $a0, 8
/* 004813F8 02001025 */  move  $v0, $s0
/* 004813FC 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00481400 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00481404 0320F809 */  jalr  $t9
/* 00481408 00000000 */   nop   
/* 0048140C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481410 24040009 */  li    $a0, 9
/* 00481414 02001025 */  move  $v0, $s0
/* 00481418 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 0048141C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00481420 0320F809 */  jalr  $t9
/* 00481424 00000000 */   nop   
/* 00481428 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048142C 24040016 */  li    $a0, 22
/* 00481430 02001025 */  move  $v0, $s0
/* 00481434 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00481438 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 0048143C 0320F809 */  jalr  $t9
/* 00481440 00000000 */   nop   
/* 00481444 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481448 24040018 */  li    $a0, 24
/* 0048144C 02001025 */  move  $v0, $s0
/* 00481450 8F8E8044 */  lw    $t6, %got(RO_1000E854)($gp)
/* 00481454 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00481458 25CEE854 */  addiu $t6, %lo(RO_1000E854) # addiu $t6, $t6, -0x17ac
/* 0048145C 89D80000 */  lwl   $t8, ($t6)
/* 00481460 99D80003 */  lwr   $t8, 3($t6)
/* 00481464 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00481468 ABB80004 */  swl   $t8, 4($sp)
/* 0048146C BBB80007 */  swr   $t8, 7($sp)
/* 00481470 0320F809 */  jalr  $t9
/* 00481474 8FA50004 */   lw    $a1, 4($sp)
/* 00481478 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048147C 00002025 */  move  $a0, $zero
/* 00481480 02001025 */  move  $v0, $s0
/* 00481484 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00481488 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 0048148C 0320F809 */  jalr  $t9
/* 00481490 00000000 */   nop   
/* 00481494 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481498 24040006 */  li    $a0, 6
/* 0048149C 02001025 */  move  $v0, $s0
/* 004814A0 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004814A4 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004814A8 0320F809 */  jalr  $t9
/* 004814AC 00000000 */   nop   
/* 004814B0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004814B4 24040016 */  li    $a0, 22
/* 004814B8 02001025 */  move  $v0, $s0
/* 004814BC 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004814C0 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004814C4 0320F809 */  jalr  $t9
/* 004814C8 00000000 */   nop   
/* 004814CC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004814D0 24040019 */  li    $a0, 25
/* 004814D4 02001025 */  move  $v0, $s0
/* 004814D8 8F998044 */  lw    $t9, %got(RO_1000E850)($gp)
/* 004814DC 2739E850 */  addiu $t9, %lo(RO_1000E850) # addiu $t9, $t9, -0x17b0
/* 004814E0 8B290000 */  lwl   $t1, ($t9)
/* 004814E4 9B290003 */  lwr   $t1, 3($t9)
/* 004814E8 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 004814EC ABA90004 */  swl   $t1, 4($sp)
/* 004814F0 BBA90007 */  swr   $t1, 7($sp)
/* 004814F4 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 004814F8 0320F809 */  jalr  $t9
/* 004814FC 8FA50004 */   lw    $a1, 4($sp)
/* 00481500 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481504 00002025 */  move  $a0, $zero
/* 00481508 02001025 */  move  $v0, $s0
/* 0048150C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00481510 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00481514 0320F809 */  jalr  $t9
/* 00481518 00000000 */   nop   
/* 0048151C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481520 2404000E */  li    $a0, 14
/* 00481524 02001025 */  move  $v0, $s0
/* 00481528 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 0048152C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00481530 0320F809 */  jalr  $t9
/* 00481534 00000000 */   nop   
/* 00481538 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048153C 24040016 */  li    $a0, 22
/* 00481540 02001025 */  move  $v0, $s0
/* 00481544 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00481548 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 0048154C 0320F809 */  jalr  $t9
/* 00481550 00000000 */   nop   
/* 00481554 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481558 2404001A */  li    $a0, 26
/* 0048155C 02001025 */  move  $v0, $s0
/* 00481560 8F8A8044 */  lw    $t2, %got(RO_1000E84C)($gp)
/* 00481564 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00481568 254AE84C */  addiu $t2, %lo(RO_1000E84C) # addiu $t2, $t2, -0x17b4
/* 0048156C 894C0000 */  lwl   $t4, ($t2)
/* 00481570 994C0003 */  lwr   $t4, 3($t2)
/* 00481574 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00481578 ABAC0004 */  swl   $t4, 4($sp)
/* 0048157C BBAC0007 */  swr   $t4, 7($sp)
/* 00481580 0320F809 */  jalr  $t9
/* 00481584 8FA50004 */   lw    $a1, 4($sp)
/* 00481588 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048158C 00002025 */  move  $a0, $zero
/* 00481590 02001025 */  move  $v0, $s0
/* 00481594 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00481598 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 0048159C 0320F809 */  jalr  $t9
/* 004815A0 00000000 */   nop   
/* 004815A4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004815A8 2404000E */  li    $a0, 14
/* 004815AC 02001025 */  move  $v0, $s0
/* 004815B0 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004815B4 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004815B8 0320F809 */  jalr  $t9
/* 004815BC 00000000 */   nop   
/* 004815C0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004815C4 24040016 */  li    $a0, 22
/* 004815C8 02001025 */  move  $v0, $s0
/* 004815CC 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004815D0 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004815D4 0320F809 */  jalr  $t9
/* 004815D8 00000000 */   nop   
/* 004815DC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004815E0 2404001B */  li    $a0, 27
/* 004815E4 02001025 */  move  $v0, $s0
/* 004815E8 8F8D8044 */  lw    $t5, %got(RO_1000E848)($gp)
/* 004815EC 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 004815F0 25ADE848 */  addiu $t5, %lo(RO_1000E848) # addiu $t5, $t5, -0x17b8
/* 004815F4 89AF0000 */  lwl   $t7, ($t5)
/* 004815F8 99AF0003 */  lwr   $t7, 3($t5)
/* 004815FC 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00481600 ABAF0004 */  swl   $t7, 4($sp)
/* 00481604 BBAF0007 */  swr   $t7, 7($sp)
/* 00481608 0320F809 */  jalr  $t9
/* 0048160C 8FA50004 */   lw    $a1, 4($sp)
/* 00481610 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481614 24040001 */  li    $a0, 1
/* 00481618 02001025 */  move  $v0, $s0
/* 0048161C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00481620 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00481624 0320F809 */  jalr  $t9
/* 00481628 00000000 */   nop   
/* 0048162C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481630 2404000A */  li    $a0, 10
/* 00481634 02001025 */  move  $v0, $s0
/* 00481638 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 0048163C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00481640 0320F809 */  jalr  $t9
/* 00481644 00000000 */   nop   
/* 00481648 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048164C 24040016 */  li    $a0, 22
/* 00481650 02001025 */  move  $v0, $s0
/* 00481654 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00481658 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 0048165C 0320F809 */  jalr  $t9
/* 00481660 00000000 */   nop   
/* 00481664 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481668 2404001C */  li    $a0, 28
/* 0048166C 02001025 */  move  $v0, $s0
/* 00481670 8F988044 */  lw    $t8, %got(RO_1000E844)($gp)
/* 00481674 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00481678 2718E844 */  addiu $t8, %lo(RO_1000E844) # addiu $t8, $t8, -0x17bc
/* 0048167C 8B080000 */  lwl   $t0, ($t8)
/* 00481680 9B080003 */  lwr   $t0, 3($t8)
/* 00481684 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00481688 ABA80004 */  swl   $t0, 4($sp)
/* 0048168C BBA80007 */  swr   $t0, 7($sp)
/* 00481690 0320F809 */  jalr  $t9
/* 00481694 8FA50004 */   lw    $a1, 4($sp)
/* 00481698 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048169C 00002025 */  move  $a0, $zero
/* 004816A0 02001025 */  move  $v0, $s0
/* 004816A4 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004816A8 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004816AC 0320F809 */  jalr  $t9
/* 004816B0 00000000 */   nop   
/* 004816B4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004816B8 2404000A */  li    $a0, 10
/* 004816BC 02001025 */  move  $v0, $s0
/* 004816C0 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004816C4 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004816C8 0320F809 */  jalr  $t9
/* 004816CC 00000000 */   nop   
/* 004816D0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004816D4 24040016 */  li    $a0, 22
/* 004816D8 02001025 */  move  $v0, $s0
/* 004816DC 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004816E0 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004816E4 0320F809 */  jalr  $t9
/* 004816E8 00000000 */   nop   
/* 004816EC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004816F0 2404001D */  li    $a0, 29
/* 004816F4 02001025 */  move  $v0, $s0
/* 004816F8 8F898044 */  lw    $t1, %got(RO_1000E840)($gp)
/* 004816FC 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00481700 2529E840 */  addiu $t1, %lo(RO_1000E840) # addiu $t1, $t1, -0x17c0
/* 00481704 892B0000 */  lwl   $t3, ($t1)
/* 00481708 992B0003 */  lwr   $t3, 3($t1)
/* 0048170C 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00481710 ABAB0004 */  swl   $t3, 4($sp)
/* 00481714 BBAB0007 */  swr   $t3, 7($sp)
/* 00481718 0320F809 */  jalr  $t9
/* 0048171C 8FA50004 */   lw    $a1, 4($sp)
/* 00481720 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481724 00002025 */  move  $a0, $zero
/* 00481728 02001025 */  move  $v0, $s0
/* 0048172C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00481730 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00481734 0320F809 */  jalr  $t9
/* 00481738 00000000 */   nop   
/* 0048173C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481740 24040016 */  li    $a0, 22
/* 00481744 02001025 */  move  $v0, $s0
/* 00481748 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 0048174C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00481750 0320F809 */  jalr  $t9
/* 00481754 00000000 */   nop   
/* 00481758 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048175C 2404001E */  li    $a0, 30
/* 00481760 02001025 */  move  $v0, $s0
/* 00481764 8F8C8044 */  lw    $t4, %got(RO_1000E83C)($gp)
/* 00481768 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 0048176C 258CE83C */  addiu $t4, %lo(RO_1000E83C) # addiu $t4, $t4, -0x17c4
/* 00481770 898E0000 */  lwl   $t6, ($t4)
/* 00481774 998E0003 */  lwr   $t6, 3($t4)
/* 00481778 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 0048177C ABAE0004 */  swl   $t6, 4($sp)
/* 00481780 BBAE0007 */  swr   $t6, 7($sp)
/* 00481784 0320F809 */  jalr  $t9
/* 00481788 8FA50004 */   lw    $a1, 4($sp)
/* 0048178C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481790 00002025 */  move  $a0, $zero
/* 00481794 02001025 */  move  $v0, $s0
/* 00481798 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 0048179C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004817A0 0320F809 */  jalr  $t9
/* 004817A4 00000000 */   nop   
/* 004817A8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004817AC 24040016 */  li    $a0, 22
/* 004817B0 02001025 */  move  $v0, $s0
/* 004817B4 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004817B8 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004817BC 0320F809 */  jalr  $t9
/* 004817C0 00000000 */   nop   
/* 004817C4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004817C8 2404001F */  li    $a0, 31
/* 004817CC 02001025 */  move  $v0, $s0
/* 004817D0 8F8F8044 */  lw    $t7, %got(RO_1000E838)($gp)
/* 004817D4 25EFE838 */  addiu $t7, %lo(RO_1000E838) # addiu $t7, $t7, -0x17c8
/* 004817D8 89F90000 */  lwl   $t9, ($t7)
/* 004817DC 99F90003 */  lwr   $t9, 3($t7)
/* 004817E0 ABB90004 */  swl   $t9, 4($sp)
/* 004817E4 BBB90007 */  swr   $t9, 7($sp)
/* 004817E8 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 004817EC 8FA50004 */  lw    $a1, 4($sp)
/* 004817F0 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 004817F4 0320F809 */  jalr  $t9
/* 004817F8 00000000 */   nop   
/* 004817FC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481800 24040005 */  li    $a0, 5
/* 00481804 02001025 */  move  $v0, $s0
/* 00481808 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 0048180C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00481810 0320F809 */  jalr  $t9
/* 00481814 00000000 */   nop   
/* 00481818 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048181C 24040016 */  li    $a0, 22
/* 00481820 02001025 */  move  $v0, $s0
/* 00481824 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00481828 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 0048182C 0320F809 */  jalr  $t9
/* 00481830 00000000 */   nop   
/* 00481834 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481838 24040020 */  li    $a0, 32
/* 0048183C 02001025 */  move  $v0, $s0
/* 00481840 8F888044 */  lw    $t0, %got(RO_1000E834)($gp)
/* 00481844 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00481848 2508E834 */  addiu $t0, %lo(RO_1000E834) # addiu $t0, $t0, -0x17cc
/* 0048184C 890A0000 */  lwl   $t2, ($t0)
/* 00481850 990A0003 */  lwr   $t2, 3($t0)
/* 00481854 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00481858 ABAA0004 */  swl   $t2, 4($sp)
/* 0048185C BBAA0007 */  swr   $t2, 7($sp)
/* 00481860 0320F809 */  jalr  $t9
/* 00481864 8FA50004 */   lw    $a1, 4($sp)
/* 00481868 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048186C 24040005 */  li    $a0, 5
/* 00481870 02001025 */  move  $v0, $s0
/* 00481874 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00481878 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 0048187C 0320F809 */  jalr  $t9
/* 00481880 00000000 */   nop   
/* 00481884 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481888 24040016 */  li    $a0, 22
/* 0048188C 02001025 */  move  $v0, $s0
/* 00481890 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00481894 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00481898 0320F809 */  jalr  $t9
/* 0048189C 00000000 */   nop   
/* 004818A0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004818A4 24040021 */  li    $a0, 33
/* 004818A8 02001025 */  move  $v0, $s0
/* 004818AC 8F8B8044 */  lw    $t3, %got(RO_1000E830)($gp)
/* 004818B0 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 004818B4 256BE830 */  addiu $t3, %lo(RO_1000E830) # addiu $t3, $t3, -0x17d0
/* 004818B8 896D0000 */  lwl   $t5, ($t3)
/* 004818BC 996D0003 */  lwr   $t5, 3($t3)
/* 004818C0 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 004818C4 ABAD0004 */  swl   $t5, 4($sp)
/* 004818C8 BBAD0007 */  swr   $t5, 7($sp)
/* 004818CC 0320F809 */  jalr  $t9
/* 004818D0 8FA50004 */   lw    $a1, 4($sp)
/* 004818D4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004818D8 00002025 */  move  $a0, $zero
/* 004818DC 02001025 */  move  $v0, $s0
/* 004818E0 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004818E4 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004818E8 0320F809 */  jalr  $t9
/* 004818EC 00000000 */   nop   
/* 004818F0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004818F4 24040002 */  li    $a0, 2
/* 004818F8 02001025 */  move  $v0, $s0
/* 004818FC 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00481900 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00481904 0320F809 */  jalr  $t9
/* 00481908 00000000 */   nop   
/* 0048190C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481910 24040005 */  li    $a0, 5
/* 00481914 02001025 */  move  $v0, $s0
/* 00481918 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 0048191C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00481920 0320F809 */  jalr  $t9
/* 00481924 00000000 */   nop   
/* 00481928 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048192C 24040007 */  li    $a0, 7
/* 00481930 02001025 */  move  $v0, $s0
/* 00481934 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00481938 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 0048193C 0320F809 */  jalr  $t9
/* 00481940 00000000 */   nop   
/* 00481944 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481948 24040008 */  li    $a0, 8
/* 0048194C 02001025 */  move  $v0, $s0
/* 00481950 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00481954 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00481958 0320F809 */  jalr  $t9
/* 0048195C 00000000 */   nop   
/* 00481960 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481964 24040009 */  li    $a0, 9
/* 00481968 02001025 */  move  $v0, $s0
/* 0048196C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00481970 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00481974 0320F809 */  jalr  $t9
/* 00481978 00000000 */   nop   
/* 0048197C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481980 24040016 */  li    $a0, 22
/* 00481984 02001025 */  move  $v0, $s0
/* 00481988 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 0048198C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00481990 0320F809 */  jalr  $t9
/* 00481994 00000000 */   nop   
/* 00481998 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048199C 24040003 */  li    $a0, 3
/* 004819A0 02001025 */  move  $v0, $s0
/* 004819A4 8F8E8044 */  lw    $t6, %got(RO_1000E82C)($gp)
/* 004819A8 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 004819AC 25CEE82C */  addiu $t6, %lo(RO_1000E82C) # addiu $t6, $t6, -0x17d4
/* 004819B0 89D80000 */  lwl   $t8, ($t6)
/* 004819B4 99D80003 */  lwr   $t8, 3($t6)
/* 004819B8 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 004819BC ABB80004 */  swl   $t8, 4($sp)
/* 004819C0 BBB80007 */  swr   $t8, 7($sp)
/* 004819C4 0320F809 */  jalr  $t9
/* 004819C8 8FA50004 */   lw    $a1, 4($sp)
/* 004819CC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004819D0 00002025 */  move  $a0, $zero
/* 004819D4 02001025 */  move  $v0, $s0
/* 004819D8 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004819DC 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004819E0 0320F809 */  jalr  $t9
/* 004819E4 00000000 */   nop   
/* 004819E8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004819EC 24040002 */  li    $a0, 2
/* 004819F0 02001025 */  move  $v0, $s0
/* 004819F4 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004819F8 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004819FC 0320F809 */  jalr  $t9
/* 00481A00 00000000 */   nop   
/* 00481A04 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481A08 24040005 */  li    $a0, 5
/* 00481A0C 02001025 */  move  $v0, $s0
/* 00481A10 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00481A14 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00481A18 0320F809 */  jalr  $t9
/* 00481A1C 00000000 */   nop   
/* 00481A20 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481A24 24040007 */  li    $a0, 7
/* 00481A28 02001025 */  move  $v0, $s0
/* 00481A2C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00481A30 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00481A34 0320F809 */  jalr  $t9
/* 00481A38 00000000 */   nop   
/* 00481A3C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481A40 24040008 */  li    $a0, 8
/* 00481A44 02001025 */  move  $v0, $s0
/* 00481A48 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00481A4C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00481A50 0320F809 */  jalr  $t9
/* 00481A54 00000000 */   nop   
/* 00481A58 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481A5C 24040009 */  li    $a0, 9
/* 00481A60 02001025 */  move  $v0, $s0
/* 00481A64 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00481A68 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00481A6C 0320F809 */  jalr  $t9
/* 00481A70 00000000 */   nop   
/* 00481A74 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481A78 24040016 */  li    $a0, 22
/* 00481A7C 02001025 */  move  $v0, $s0
/* 00481A80 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00481A84 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00481A88 0320F809 */  jalr  $t9
/* 00481A8C 00000000 */   nop   
/* 00481A90 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481A94 24040023 */  li    $a0, 35
/* 00481A98 02001025 */  move  $v0, $s0
/* 00481A9C 8F998044 */  lw    $t9, %got(RO_1000E828)($gp)
/* 00481AA0 2739E828 */  addiu $t9, %lo(RO_1000E828) # addiu $t9, $t9, -0x17d8
/* 00481AA4 8B290000 */  lwl   $t1, ($t9)
/* 00481AA8 9B290003 */  lwr   $t1, 3($t9)
/* 00481AAC 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00481AB0 ABA90004 */  swl   $t1, 4($sp)
/* 00481AB4 BBA90007 */  swr   $t1, 7($sp)
/* 00481AB8 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00481ABC 0320F809 */  jalr  $t9
/* 00481AC0 8FA50004 */   lw    $a1, 4($sp)
/* 00481AC4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481AC8 00002025 */  move  $a0, $zero
/* 00481ACC 02001025 */  move  $v0, $s0
/* 00481AD0 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00481AD4 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00481AD8 0320F809 */  jalr  $t9
/* 00481ADC 00000000 */   nop   
/* 00481AE0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481AE4 24040016 */  li    $a0, 22
/* 00481AE8 02001025 */  move  $v0, $s0
/* 00481AEC 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00481AF0 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00481AF4 0320F809 */  jalr  $t9
/* 00481AF8 00000000 */   nop   
/* 00481AFC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481B00 24040026 */  li    $a0, 38
/* 00481B04 02001025 */  move  $v0, $s0
/* 00481B08 8F8A8044 */  lw    $t2, %got(RO_1000E824)($gp)
/* 00481B0C 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00481B10 254AE824 */  addiu $t2, %lo(RO_1000E824) # addiu $t2, $t2, -0x17dc
/* 00481B14 894C0000 */  lwl   $t4, ($t2)
/* 00481B18 994C0003 */  lwr   $t4, 3($t2)
/* 00481B1C 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00481B20 ABAC0004 */  swl   $t4, 4($sp)
/* 00481B24 BBAC0007 */  swr   $t4, 7($sp)
/* 00481B28 0320F809 */  jalr  $t9
/* 00481B2C 8FA50004 */   lw    $a1, 4($sp)
/* 00481B30 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481B34 24040004 */  li    $a0, 4
/* 00481B38 02001025 */  move  $v0, $s0
/* 00481B3C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00481B40 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00481B44 0320F809 */  jalr  $t9
/* 00481B48 00000000 */   nop   
/* 00481B4C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481B50 24040002 */  li    $a0, 2
/* 00481B54 02001025 */  move  $v0, $s0
/* 00481B58 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00481B5C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00481B60 0320F809 */  jalr  $t9
/* 00481B64 00000000 */   nop   
/* 00481B68 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481B6C 24040016 */  li    $a0, 22
/* 00481B70 02001025 */  move  $v0, $s0
/* 00481B74 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00481B78 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00481B7C 0320F809 */  jalr  $t9
/* 00481B80 00000000 */   nop   
/* 00481B84 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481B88 24040028 */  li    $a0, 40
/* 00481B8C 02001025 */  move  $v0, $s0
/* 00481B90 8F8D8044 */  lw    $t5, %got(RO_1000E820)($gp)
/* 00481B94 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00481B98 25ADE820 */  addiu $t5, %lo(RO_1000E820) # addiu $t5, $t5, -0x17e0
/* 00481B9C 89AF0000 */  lwl   $t7, ($t5)
/* 00481BA0 99AF0003 */  lwr   $t7, 3($t5)
/* 00481BA4 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00481BA8 ABAF0004 */  swl   $t7, 4($sp)
/* 00481BAC BBAF0007 */  swr   $t7, 7($sp)
/* 00481BB0 0320F809 */  jalr  $t9
/* 00481BB4 8FA50004 */   lw    $a1, 4($sp)
/* 00481BB8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481BBC 00002025 */  move  $a0, $zero
/* 00481BC0 02001025 */  move  $v0, $s0
/* 00481BC4 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00481BC8 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00481BCC 0320F809 */  jalr  $t9
/* 00481BD0 00000000 */   nop   
/* 00481BD4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481BD8 24040016 */  li    $a0, 22
/* 00481BDC 02001025 */  move  $v0, $s0
/* 00481BE0 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00481BE4 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00481BE8 0320F809 */  jalr  $t9
/* 00481BEC 00000000 */   nop   
/* 00481BF0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481BF4 24040029 */  li    $a0, 41
/* 00481BF8 02001025 */  move  $v0, $s0
/* 00481BFC 8F988044 */  lw    $t8, %got(RO_1000E81C)($gp)
/* 00481C00 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00481C04 2718E81C */  addiu $t8, %lo(RO_1000E81C) # addiu $t8, $t8, -0x17e4
/* 00481C08 8B080000 */  lwl   $t0, ($t8)
/* 00481C0C 9B080003 */  lwr   $t0, 3($t8)
/* 00481C10 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00481C14 ABA80004 */  swl   $t0, 4($sp)
/* 00481C18 BBA80007 */  swr   $t0, 7($sp)
/* 00481C1C 0320F809 */  jalr  $t9
/* 00481C20 8FA50004 */   lw    $a1, 4($sp)
/* 00481C24 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481C28 00002025 */  move  $a0, $zero
/* 00481C2C 02001025 */  move  $v0, $s0
/* 00481C30 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00481C34 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00481C38 0320F809 */  jalr  $t9
/* 00481C3C 00000000 */   nop   
/* 00481C40 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481C44 24040016 */  li    $a0, 22
/* 00481C48 02001025 */  move  $v0, $s0
/* 00481C4C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00481C50 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00481C54 0320F809 */  jalr  $t9
/* 00481C58 00000000 */   nop   
/* 00481C5C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481C60 24040025 */  li    $a0, 37
/* 00481C64 02001025 */  move  $v0, $s0
/* 00481C68 8F898044 */  lw    $t1, %got(RO_1000E818)($gp)
/* 00481C6C 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00481C70 2529E818 */  addiu $t1, %lo(RO_1000E818) # addiu $t1, $t1, -0x17e8
/* 00481C74 892B0000 */  lwl   $t3, ($t1)
/* 00481C78 992B0003 */  lwr   $t3, 3($t1)
/* 00481C7C 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00481C80 ABAB0004 */  swl   $t3, 4($sp)
/* 00481C84 BBAB0007 */  swr   $t3, 7($sp)
/* 00481C88 0320F809 */  jalr  $t9
/* 00481C8C 8FA50004 */   lw    $a1, 4($sp)
/* 00481C90 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481C94 00002025 */  move  $a0, $zero
/* 00481C98 02001025 */  move  $v0, $s0
/* 00481C9C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00481CA0 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00481CA4 0320F809 */  jalr  $t9
/* 00481CA8 00000000 */   nop   
/* 00481CAC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481CB0 2404000E */  li    $a0, 14
/* 00481CB4 02001025 */  move  $v0, $s0
/* 00481CB8 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00481CBC 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00481CC0 0320F809 */  jalr  $t9
/* 00481CC4 00000000 */   nop   
/* 00481CC8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481CCC 2404000A */  li    $a0, 10
/* 00481CD0 02001025 */  move  $v0, $s0
/* 00481CD4 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00481CD8 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00481CDC 0320F809 */  jalr  $t9
/* 00481CE0 00000000 */   nop   
/* 00481CE4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481CE8 24040016 */  li    $a0, 22
/* 00481CEC 02001025 */  move  $v0, $s0
/* 00481CF0 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00481CF4 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00481CF8 0320F809 */  jalr  $t9
/* 00481CFC 00000000 */   nop   
/* 00481D00 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481D04 2404002D */  li    $a0, 45
/* 00481D08 02001025 */  move  $v0, $s0
/* 00481D0C 8F8C8044 */  lw    $t4, %got(RO_1000E814)($gp)
/* 00481D10 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00481D14 258CE814 */  addiu $t4, %lo(RO_1000E814) # addiu $t4, $t4, -0x17ec
/* 00481D18 898E0000 */  lwl   $t6, ($t4)
/* 00481D1C 998E0003 */  lwr   $t6, 3($t4)
/* 00481D20 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00481D24 ABAE0004 */  swl   $t6, 4($sp)
/* 00481D28 BBAE0007 */  swr   $t6, 7($sp)
/* 00481D2C 0320F809 */  jalr  $t9
/* 00481D30 8FA50004 */   lw    $a1, 4($sp)
/* 00481D34 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481D38 00002025 */  move  $a0, $zero
/* 00481D3C 02001025 */  move  $v0, $s0
/* 00481D40 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00481D44 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00481D48 0320F809 */  jalr  $t9
/* 00481D4C 00000000 */   nop   
/* 00481D50 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481D54 24040016 */  li    $a0, 22
/* 00481D58 02001025 */  move  $v0, $s0
/* 00481D5C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00481D60 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00481D64 0320F809 */  jalr  $t9
/* 00481D68 00000000 */   nop   
/* 00481D6C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481D70 2404002E */  li    $a0, 46
/* 00481D74 02001025 */  move  $v0, $s0
/* 00481D78 8F8F8044 */  lw    $t7, %got(RO_1000E810)($gp)
/* 00481D7C 25EFE810 */  addiu $t7, %lo(RO_1000E810) # addiu $t7, $t7, -0x17f0
/* 00481D80 89F90000 */  lwl   $t9, ($t7)
/* 00481D84 99F90003 */  lwr   $t9, 3($t7)
/* 00481D88 ABB90004 */  swl   $t9, 4($sp)
/* 00481D8C BBB90007 */  swr   $t9, 7($sp)
/* 00481D90 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00481D94 8FA50004 */  lw    $a1, 4($sp)
/* 00481D98 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00481D9C 0320F809 */  jalr  $t9
/* 00481DA0 00000000 */   nop   
/* 00481DA4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481DA8 00002025 */  move  $a0, $zero
/* 00481DAC 02001025 */  move  $v0, $s0
/* 00481DB0 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00481DB4 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00481DB8 0320F809 */  jalr  $t9
/* 00481DBC 00000000 */   nop   
/* 00481DC0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481DC4 2404000E */  li    $a0, 14
/* 00481DC8 02001025 */  move  $v0, $s0
/* 00481DCC 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00481DD0 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00481DD4 0320F809 */  jalr  $t9
/* 00481DD8 00000000 */   nop   
/* 00481DDC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481DE0 2404000A */  li    $a0, 10
/* 00481DE4 02001025 */  move  $v0, $s0
/* 00481DE8 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00481DEC 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00481DF0 0320F809 */  jalr  $t9
/* 00481DF4 00000000 */   nop   
/* 00481DF8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481DFC 24040016 */  li    $a0, 22
/* 00481E00 02001025 */  move  $v0, $s0
/* 00481E04 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00481E08 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00481E0C 0320F809 */  jalr  $t9
/* 00481E10 00000000 */   nop   
/* 00481E14 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481E18 2404002F */  li    $a0, 47
/* 00481E1C 02001025 */  move  $v0, $s0
/* 00481E20 8F888044 */  lw    $t0, %got(RO_1000E80C)($gp)
/* 00481E24 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00481E28 2508E80C */  addiu $t0, %lo(RO_1000E80C) # addiu $t0, $t0, -0x17f4
/* 00481E2C 890A0000 */  lwl   $t2, ($t0)
/* 00481E30 990A0003 */  lwr   $t2, 3($t0)
/* 00481E34 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00481E38 ABAA0004 */  swl   $t2, 4($sp)
/* 00481E3C BBAA0007 */  swr   $t2, 7($sp)
/* 00481E40 0320F809 */  jalr  $t9
/* 00481E44 8FA50004 */   lw    $a1, 4($sp)
/* 00481E48 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481E4C 00002025 */  move  $a0, $zero
/* 00481E50 02001025 */  move  $v0, $s0
/* 00481E54 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00481E58 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00481E5C 0320F809 */  jalr  $t9
/* 00481E60 00000000 */   nop   
/* 00481E64 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481E68 2404000E */  li    $a0, 14
/* 00481E6C 02001025 */  move  $v0, $s0
/* 00481E70 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00481E74 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00481E78 0320F809 */  jalr  $t9
/* 00481E7C 00000000 */   nop   
/* 00481E80 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481E84 2404000A */  li    $a0, 10
/* 00481E88 02001025 */  move  $v0, $s0
/* 00481E8C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00481E90 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00481E94 0320F809 */  jalr  $t9
/* 00481E98 00000000 */   nop   
/* 00481E9C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481EA0 24040016 */  li    $a0, 22
/* 00481EA4 02001025 */  move  $v0, $s0
/* 00481EA8 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00481EAC 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00481EB0 0320F809 */  jalr  $t9
/* 00481EB4 00000000 */   nop   
/* 00481EB8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481EBC 24040030 */  li    $a0, 48
/* 00481EC0 02001025 */  move  $v0, $s0
/* 00481EC4 8F8B8044 */  lw    $t3, %got(RO_1000E808)($gp)
/* 00481EC8 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00481ECC 256BE808 */  addiu $t3, %lo(RO_1000E808) # addiu $t3, $t3, -0x17f8
/* 00481ED0 896D0000 */  lwl   $t5, ($t3)
/* 00481ED4 996D0003 */  lwr   $t5, 3($t3)
/* 00481ED8 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00481EDC ABAD0004 */  swl   $t5, 4($sp)
/* 00481EE0 BBAD0007 */  swr   $t5, 7($sp)
/* 00481EE4 0320F809 */  jalr  $t9
/* 00481EE8 8FA50004 */   lw    $a1, 4($sp)
/* 00481EEC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481EF0 00002025 */  move  $a0, $zero
/* 00481EF4 02001025 */  move  $v0, $s0
/* 00481EF8 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00481EFC 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00481F00 0320F809 */  jalr  $t9
/* 00481F04 00000000 */   nop   
/* 00481F08 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481F0C 2404000E */  li    $a0, 14
/* 00481F10 02001025 */  move  $v0, $s0
/* 00481F14 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00481F18 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00481F1C 0320F809 */  jalr  $t9
/* 00481F20 00000000 */   nop   
/* 00481F24 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481F28 2404000A */  li    $a0, 10
/* 00481F2C 02001025 */  move  $v0, $s0
/* 00481F30 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00481F34 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00481F38 0320F809 */  jalr  $t9
/* 00481F3C 00000000 */   nop   
/* 00481F40 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481F44 24040016 */  li    $a0, 22
/* 00481F48 02001025 */  move  $v0, $s0
/* 00481F4C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00481F50 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00481F54 0320F809 */  jalr  $t9
/* 00481F58 00000000 */   nop   
/* 00481F5C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481F60 24040034 */  li    $a0, 52
/* 00481F64 02001025 */  move  $v0, $s0
/* 00481F68 8F8E8044 */  lw    $t6, %got(RO_1000E804)($gp)
/* 00481F6C 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00481F70 25CEE804 */  addiu $t6, %lo(RO_1000E804) # addiu $t6, $t6, -0x17fc
/* 00481F74 89D80000 */  lwl   $t8, ($t6)
/* 00481F78 99D80003 */  lwr   $t8, 3($t6)
/* 00481F7C 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00481F80 ABB80004 */  swl   $t8, 4($sp)
/* 00481F84 BBB80007 */  swr   $t8, 7($sp)
/* 00481F88 0320F809 */  jalr  $t9
/* 00481F8C 8FA50004 */   lw    $a1, 4($sp)
/* 00481F90 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481F94 00002025 */  move  $a0, $zero
/* 00481F98 02001025 */  move  $v0, $s0
/* 00481F9C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00481FA0 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00481FA4 0320F809 */  jalr  $t9
/* 00481FA8 00000000 */   nop   
/* 00481FAC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481FB0 2404000E */  li    $a0, 14
/* 00481FB4 02001025 */  move  $v0, $s0
/* 00481FB8 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00481FBC 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00481FC0 0320F809 */  jalr  $t9
/* 00481FC4 00000000 */   nop   
/* 00481FC8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481FCC 2404000A */  li    $a0, 10
/* 00481FD0 02001025 */  move  $v0, $s0
/* 00481FD4 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00481FD8 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00481FDC 0320F809 */  jalr  $t9
/* 00481FE0 00000000 */   nop   
/* 00481FE4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00481FE8 24040016 */  li    $a0, 22
/* 00481FEC 02001025 */  move  $v0, $s0
/* 00481FF0 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00481FF4 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00481FF8 0320F809 */  jalr  $t9
/* 00481FFC 00000000 */   nop   
/* 00482000 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482004 24040035 */  li    $a0, 53
/* 00482008 02001025 */  move  $v0, $s0
/* 0048200C 8F998044 */  lw    $t9, %got(RO_1000E800)($gp)
/* 00482010 2739E800 */  addiu $t9, %lo(RO_1000E800) # addiu $t9, $t9, -0x1800
/* 00482014 8B290000 */  lwl   $t1, ($t9)
/* 00482018 9B290003 */  lwr   $t1, 3($t9)
/* 0048201C 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00482020 ABA90004 */  swl   $t1, 4($sp)
/* 00482024 BBA90007 */  swr   $t1, 7($sp)
/* 00482028 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 0048202C 0320F809 */  jalr  $t9
/* 00482030 8FA50004 */   lw    $a1, 4($sp)
/* 00482034 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482038 00002025 */  move  $a0, $zero
/* 0048203C 02001025 */  move  $v0, $s0
/* 00482040 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00482044 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00482048 0320F809 */  jalr  $t9
/* 0048204C 00000000 */   nop   
/* 00482050 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482054 2404000E */  li    $a0, 14
/* 00482058 02001025 */  move  $v0, $s0
/* 0048205C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00482060 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00482064 0320F809 */  jalr  $t9
/* 00482068 00000000 */   nop   
/* 0048206C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482070 2404000A */  li    $a0, 10
/* 00482074 02001025 */  move  $v0, $s0
/* 00482078 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 0048207C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00482080 0320F809 */  jalr  $t9
/* 00482084 00000000 */   nop   
/* 00482088 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048208C 24040016 */  li    $a0, 22
/* 00482090 02001025 */  move  $v0, $s0
/* 00482094 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00482098 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 0048209C 0320F809 */  jalr  $t9
/* 004820A0 00000000 */   nop   
/* 004820A4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004820A8 24040036 */  li    $a0, 54
/* 004820AC 02001025 */  move  $v0, $s0
/* 004820B0 8F8A8044 */  lw    $t2, %got(RO_1000E7FC)($gp)
/* 004820B4 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 004820B8 254AE7FC */  addiu $t2, %lo(RO_1000E7FC) # addiu $t2, $t2, -0x1804
/* 004820BC 894C0000 */  lwl   $t4, ($t2)
/* 004820C0 994C0003 */  lwr   $t4, 3($t2)
/* 004820C4 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 004820C8 ABAC0004 */  swl   $t4, 4($sp)
/* 004820CC BBAC0007 */  swr   $t4, 7($sp)
/* 004820D0 0320F809 */  jalr  $t9
/* 004820D4 8FA50004 */   lw    $a1, 4($sp)
/* 004820D8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004820DC 00002025 */  move  $a0, $zero
/* 004820E0 02001025 */  move  $v0, $s0
/* 004820E4 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004820E8 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004820EC 0320F809 */  jalr  $t9
/* 004820F0 00000000 */   nop   
/* 004820F4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004820F8 2404000E */  li    $a0, 14
/* 004820FC 02001025 */  move  $v0, $s0
/* 00482100 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00482104 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00482108 0320F809 */  jalr  $t9
/* 0048210C 00000000 */   nop   
/* 00482110 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482114 24040002 */  li    $a0, 2
/* 00482118 02001025 */  move  $v0, $s0
/* 0048211C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00482120 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00482124 0320F809 */  jalr  $t9
/* 00482128 00000000 */   nop   
/* 0048212C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482130 2404000A */  li    $a0, 10
/* 00482134 02001025 */  move  $v0, $s0
/* 00482138 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 0048213C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00482140 0320F809 */  jalr  $t9
/* 00482144 00000000 */   nop   
/* 00482148 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048214C 2404000D */  li    $a0, 13
/* 00482150 02001025 */  move  $v0, $s0
/* 00482154 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00482158 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 0048215C 0320F809 */  jalr  $t9
/* 00482160 00000000 */   nop   
/* 00482164 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482168 24040016 */  li    $a0, 22
/* 0048216C 02001025 */  move  $v0, $s0
/* 00482170 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00482174 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00482178 0320F809 */  jalr  $t9
/* 0048217C 00000000 */   nop   
/* 00482180 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482184 24040038 */  li    $a0, 56
/* 00482188 02001025 */  move  $v0, $s0
/* 0048218C 8F8D8044 */  lw    $t5, %got(RO_1000E7F8)($gp)
/* 00482190 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00482194 25ADE7F8 */  addiu $t5, %lo(RO_1000E7F8) # addiu $t5, $t5, -0x1808
/* 00482198 89AF0000 */  lwl   $t7, ($t5)
/* 0048219C 99AF0003 */  lwr   $t7, 3($t5)
/* 004821A0 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 004821A4 ABAF0004 */  swl   $t7, 4($sp)
/* 004821A8 BBAF0007 */  swr   $t7, 7($sp)
/* 004821AC 0320F809 */  jalr  $t9
/* 004821B0 8FA50004 */   lw    $a1, 4($sp)
/* 004821B4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004821B8 00002025 */  move  $a0, $zero
/* 004821BC 02001025 */  move  $v0, $s0
/* 004821C0 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004821C4 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004821C8 0320F809 */  jalr  $t9
/* 004821CC 00000000 */   nop   
/* 004821D0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004821D4 2404000A */  li    $a0, 10
/* 004821D8 02001025 */  move  $v0, $s0
/* 004821DC 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004821E0 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004821E4 0320F809 */  jalr  $t9
/* 004821E8 00000000 */   nop   
/* 004821EC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004821F0 24040016 */  li    $a0, 22
/* 004821F4 02001025 */  move  $v0, $s0
/* 004821F8 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004821FC 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00482200 0320F809 */  jalr  $t9
/* 00482204 00000000 */   nop   
/* 00482208 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048220C 24040037 */  li    $a0, 55
/* 00482210 02001025 */  move  $v0, $s0
/* 00482214 8F988044 */  lw    $t8, %got(RO_1000E7F4)($gp)
/* 00482218 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 0048221C 2718E7F4 */  addiu $t8, %lo(RO_1000E7F4) # addiu $t8, $t8, -0x180c
/* 00482220 8B080000 */  lwl   $t0, ($t8)
/* 00482224 9B080003 */  lwr   $t0, 3($t8)
/* 00482228 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 0048222C ABA80004 */  swl   $t0, 4($sp)
/* 00482230 BBA80007 */  swr   $t0, 7($sp)
/* 00482234 0320F809 */  jalr  $t9
/* 00482238 8FA50004 */   lw    $a1, 4($sp)
/* 0048223C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482240 00002025 */  move  $a0, $zero
/* 00482244 02001025 */  move  $v0, $s0
/* 00482248 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 0048224C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00482250 0320F809 */  jalr  $t9
/* 00482254 00000000 */   nop   
/* 00482258 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048225C 2404000E */  li    $a0, 14
/* 00482260 02001025 */  move  $v0, $s0
/* 00482264 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00482268 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 0048226C 0320F809 */  jalr  $t9
/* 00482270 00000000 */   nop   
/* 00482274 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482278 24040016 */  li    $a0, 22
/* 0048227C 02001025 */  move  $v0, $s0
/* 00482280 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00482284 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00482288 0320F809 */  jalr  $t9
/* 0048228C 00000000 */   nop   
/* 00482290 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482294 24040039 */  li    $a0, 57
/* 00482298 02001025 */  move  $v0, $s0
/* 0048229C 8F898044 */  lw    $t1, %got(RO_1000E7F0)($gp)
/* 004822A0 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 004822A4 2529E7F0 */  addiu $t1, %lo(RO_1000E7F0) # addiu $t1, $t1, -0x1810
/* 004822A8 892B0000 */  lwl   $t3, ($t1)
/* 004822AC 992B0003 */  lwr   $t3, 3($t1)
/* 004822B0 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 004822B4 ABAB0004 */  swl   $t3, 4($sp)
/* 004822B8 BBAB0007 */  swr   $t3, 7($sp)
/* 004822BC 0320F809 */  jalr  $t9
/* 004822C0 8FA50004 */   lw    $a1, 4($sp)
/* 004822C4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004822C8 00002025 */  move  $a0, $zero
/* 004822CC 02001025 */  move  $v0, $s0
/* 004822D0 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004822D4 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004822D8 0320F809 */  jalr  $t9
/* 004822DC 00000000 */   nop   
/* 004822E0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004822E4 24040001 */  li    $a0, 1
/* 004822E8 02001025 */  move  $v0, $s0
/* 004822EC 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004822F0 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004822F4 0320F809 */  jalr  $t9
/* 004822F8 00000000 */   nop   
/* 004822FC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482300 24040005 */  li    $a0, 5
/* 00482304 02001025 */  move  $v0, $s0
/* 00482308 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 0048230C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00482310 0320F809 */  jalr  $t9
/* 00482314 00000000 */   nop   
/* 00482318 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048231C 2404000D */  li    $a0, 13
/* 00482320 02001025 */  move  $v0, $s0
/* 00482324 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00482328 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 0048232C 0320F809 */  jalr  $t9
/* 00482330 00000000 */   nop   
/* 00482334 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482338 2404000F */  li    $a0, 15
/* 0048233C 02001025 */  move  $v0, $s0
/* 00482340 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00482344 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00482348 0320F809 */  jalr  $t9
/* 0048234C 00000000 */   nop   
/* 00482350 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482354 2404000A */  li    $a0, 10
/* 00482358 02001025 */  move  $v0, $s0
/* 0048235C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00482360 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00482364 0320F809 */  jalr  $t9
/* 00482368 00000000 */   nop   
/* 0048236C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482370 24040012 */  li    $a0, 18
/* 00482374 02001025 */  move  $v0, $s0
/* 00482378 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 0048237C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00482380 0320F809 */  jalr  $t9
/* 00482384 00000000 */   nop   
/* 00482388 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048238C 24040002 */  li    $a0, 2
/* 00482390 02001025 */  move  $v0, $s0
/* 00482394 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00482398 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 0048239C 0320F809 */  jalr  $t9
/* 004823A0 00000000 */   nop   
/* 004823A4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004823A8 24040010 */  li    $a0, 16
/* 004823AC 02001025 */  move  $v0, $s0
/* 004823B0 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004823B4 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004823B8 0320F809 */  jalr  $t9
/* 004823BC 00000000 */   nop   
/* 004823C0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004823C4 24040016 */  li    $a0, 22
/* 004823C8 02001025 */  move  $v0, $s0
/* 004823CC 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004823D0 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004823D4 0320F809 */  jalr  $t9
/* 004823D8 00000000 */   nop   
/* 004823DC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004823E0 2404003A */  li    $a0, 58
/* 004823E4 02001025 */  move  $v0, $s0
/* 004823E8 8F8C8044 */  lw    $t4, %got(RO_1000E7EC)($gp)
/* 004823EC 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 004823F0 258CE7EC */  addiu $t4, %lo(RO_1000E7EC) # addiu $t4, $t4, -0x1814
/* 004823F4 898E0000 */  lwl   $t6, ($t4)
/* 004823F8 998E0003 */  lwr   $t6, 3($t4)
/* 004823FC 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00482400 ABAE0004 */  swl   $t6, 4($sp)
/* 00482404 BBAE0007 */  swr   $t6, 7($sp)
/* 00482408 0320F809 */  jalr  $t9
/* 0048240C 8FA50004 */   lw    $a1, 4($sp)
/* 00482410 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482414 00002025 */  move  $a0, $zero
/* 00482418 02001025 */  move  $v0, $s0
/* 0048241C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00482420 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00482424 0320F809 */  jalr  $t9
/* 00482428 00000000 */   nop   
/* 0048242C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482430 2404000A */  li    $a0, 10
/* 00482434 02001025 */  move  $v0, $s0
/* 00482438 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 0048243C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00482440 0320F809 */  jalr  $t9
/* 00482444 00000000 */   nop   
/* 00482448 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048244C 2404000E */  li    $a0, 14
/* 00482450 02001025 */  move  $v0, $s0
/* 00482454 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00482458 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 0048245C 0320F809 */  jalr  $t9
/* 00482460 00000000 */   nop   
/* 00482464 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482468 24040016 */  li    $a0, 22
/* 0048246C 02001025 */  move  $v0, $s0
/* 00482470 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00482474 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00482478 0320F809 */  jalr  $t9
/* 0048247C 00000000 */   nop   
/* 00482480 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482484 2404003B */  li    $a0, 59
/* 00482488 02001025 */  move  $v0, $s0
/* 0048248C 8F8F8044 */  lw    $t7, %got(RO_1000E7E8)($gp)
/* 00482490 25EFE7E8 */  addiu $t7, %lo(RO_1000E7E8) # addiu $t7, $t7, -0x1818
/* 00482494 89F90000 */  lwl   $t9, ($t7)
/* 00482498 99F90003 */  lwr   $t9, 3($t7)
/* 0048249C ABB90004 */  swl   $t9, 4($sp)
/* 004824A0 BBB90007 */  swr   $t9, 7($sp)
/* 004824A4 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 004824A8 8FA50004 */  lw    $a1, 4($sp)
/* 004824AC 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 004824B0 0320F809 */  jalr  $t9
/* 004824B4 00000000 */   nop   
/* 004824B8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004824BC 00002025 */  move  $a0, $zero
/* 004824C0 02001025 */  move  $v0, $s0
/* 004824C4 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004824C8 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004824CC 0320F809 */  jalr  $t9
/* 004824D0 00000000 */   nop   
/* 004824D4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004824D8 2404000A */  li    $a0, 10
/* 004824DC 02001025 */  move  $v0, $s0
/* 004824E0 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004824E4 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004824E8 0320F809 */  jalr  $t9
/* 004824EC 00000000 */   nop   
/* 004824F0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004824F4 24040016 */  li    $a0, 22
/* 004824F8 02001025 */  move  $v0, $s0
/* 004824FC 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00482500 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00482504 0320F809 */  jalr  $t9
/* 00482508 00000000 */   nop   
/* 0048250C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482510 2404003C */  li    $a0, 60
/* 00482514 02001025 */  move  $v0, $s0
/* 00482518 8F888044 */  lw    $t0, %got(RO_1000E7E4)($gp)
/* 0048251C 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00482520 2508E7E4 */  addiu $t0, %lo(RO_1000E7E4) # addiu $t0, $t0, -0x181c
/* 00482524 890A0000 */  lwl   $t2, ($t0)
/* 00482528 990A0003 */  lwr   $t2, 3($t0)
/* 0048252C 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00482530 ABAA0004 */  swl   $t2, 4($sp)
/* 00482534 BBAA0007 */  swr   $t2, 7($sp)
/* 00482538 0320F809 */  jalr  $t9
/* 0048253C 8FA50004 */   lw    $a1, 4($sp)
/* 00482540 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482544 00002025 */  move  $a0, $zero
/* 00482548 02001025 */  move  $v0, $s0
/* 0048254C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00482550 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00482554 0320F809 */  jalr  $t9
/* 00482558 00000000 */   nop   
/* 0048255C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482560 24040016 */  li    $a0, 22
/* 00482564 02001025 */  move  $v0, $s0
/* 00482568 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 0048256C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00482570 0320F809 */  jalr  $t9
/* 00482574 00000000 */   nop   
/* 00482578 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048257C 2404003F */  li    $a0, 63
/* 00482580 02001025 */  move  $v0, $s0
/* 00482584 8F8B8044 */  lw    $t3, %got(RO_1000E7E0)($gp)
/* 00482588 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 0048258C 256BE7E0 */  addiu $t3, %lo(RO_1000E7E0) # addiu $t3, $t3, -0x1820
/* 00482590 896D0000 */  lwl   $t5, ($t3)
/* 00482594 996D0003 */  lwr   $t5, 3($t3)
/* 00482598 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 0048259C ABAD0004 */  swl   $t5, 4($sp)
/* 004825A0 BBAD0007 */  swr   $t5, 7($sp)
/* 004825A4 0320F809 */  jalr  $t9
/* 004825A8 8FA50004 */   lw    $a1, 4($sp)
/* 004825AC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004825B0 00002025 */  move  $a0, $zero
/* 004825B4 02001025 */  move  $v0, $s0
/* 004825B8 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004825BC 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004825C0 0320F809 */  jalr  $t9
/* 004825C4 00000000 */   nop   
/* 004825C8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004825CC 2404000E */  li    $a0, 14
/* 004825D0 02001025 */  move  $v0, $s0
/* 004825D4 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004825D8 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004825DC 0320F809 */  jalr  $t9
/* 004825E0 00000000 */   nop   
/* 004825E4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004825E8 24040002 */  li    $a0, 2
/* 004825EC 02001025 */  move  $v0, $s0
/* 004825F0 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004825F4 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004825F8 0320F809 */  jalr  $t9
/* 004825FC 00000000 */   nop   
/* 00482600 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482604 2404000A */  li    $a0, 10
/* 00482608 02001025 */  move  $v0, $s0
/* 0048260C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00482610 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00482614 0320F809 */  jalr  $t9
/* 00482618 00000000 */   nop   
/* 0048261C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482620 2404000D */  li    $a0, 13
/* 00482624 02001025 */  move  $v0, $s0
/* 00482628 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 0048262C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00482630 0320F809 */  jalr  $t9
/* 00482634 00000000 */   nop   
/* 00482638 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048263C 24040016 */  li    $a0, 22
/* 00482640 02001025 */  move  $v0, $s0
/* 00482644 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00482648 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 0048264C 0320F809 */  jalr  $t9
/* 00482650 00000000 */   nop   
/* 00482654 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482658 24040041 */  li    $a0, 65
/* 0048265C 02001025 */  move  $v0, $s0
/* 00482660 8F8E8044 */  lw    $t6, %got(RO_1000E7DC)($gp)
/* 00482664 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00482668 25CEE7DC */  addiu $t6, %lo(RO_1000E7DC) # addiu $t6, $t6, -0x1824
/* 0048266C 89D80000 */  lwl   $t8, ($t6)
/* 00482670 99D80003 */  lwr   $t8, 3($t6)
/* 00482674 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00482678 ABB80004 */  swl   $t8, 4($sp)
/* 0048267C BBB80007 */  swr   $t8, 7($sp)
/* 00482680 0320F809 */  jalr  $t9
/* 00482684 8FA50004 */   lw    $a1, 4($sp)
/* 00482688 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048268C 00002025 */  move  $a0, $zero
/* 00482690 02001025 */  move  $v0, $s0
/* 00482694 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00482698 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 0048269C 0320F809 */  jalr  $t9
/* 004826A0 00000000 */   nop   
/* 004826A4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004826A8 2404000E */  li    $a0, 14
/* 004826AC 02001025 */  move  $v0, $s0
/* 004826B0 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004826B4 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004826B8 0320F809 */  jalr  $t9
/* 004826BC 00000000 */   nop   
/* 004826C0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004826C4 24040016 */  li    $a0, 22
/* 004826C8 02001025 */  move  $v0, $s0
/* 004826CC 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004826D0 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004826D4 0320F809 */  jalr  $t9
/* 004826D8 00000000 */   nop   
/* 004826DC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004826E0 24040042 */  li    $a0, 66
/* 004826E4 02001025 */  move  $v0, $s0
/* 004826E8 8F998044 */  lw    $t9, %got(RO_1000E7D8)($gp)
/* 004826EC 2739E7D8 */  addiu $t9, %lo(RO_1000E7D8) # addiu $t9, $t9, -0x1828
/* 004826F0 8B290000 */  lwl   $t1, ($t9)
/* 004826F4 9B290003 */  lwr   $t1, 3($t9)
/* 004826F8 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 004826FC ABA90004 */  swl   $t1, 4($sp)
/* 00482700 BBA90007 */  swr   $t1, 7($sp)
/* 00482704 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00482708 0320F809 */  jalr  $t9
/* 0048270C 8FA50004 */   lw    $a1, 4($sp)
/* 00482710 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482714 24040003 */  li    $a0, 3
/* 00482718 02001025 */  move  $v0, $s0
/* 0048271C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00482720 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00482724 0320F809 */  jalr  $t9
/* 00482728 00000000 */   nop   
/* 0048272C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482730 24040002 */  li    $a0, 2
/* 00482734 02001025 */  move  $v0, $s0
/* 00482738 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 0048273C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00482740 0320F809 */  jalr  $t9
/* 00482744 00000000 */   nop   
/* 00482748 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048274C 2404000A */  li    $a0, 10
/* 00482750 02001025 */  move  $v0, $s0
/* 00482754 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00482758 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 0048275C 0320F809 */  jalr  $t9
/* 00482760 00000000 */   nop   
/* 00482764 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482768 24040016 */  li    $a0, 22
/* 0048276C 02001025 */  move  $v0, $s0
/* 00482770 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00482774 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00482778 0320F809 */  jalr  $t9
/* 0048277C 00000000 */   nop   
/* 00482780 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482784 2404004A */  li    $a0, 74
/* 00482788 02001025 */  move  $v0, $s0
/* 0048278C 8F8A8044 */  lw    $t2, %got(RO_1000E7D4)($gp)
/* 00482790 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00482794 254AE7D4 */  addiu $t2, %lo(RO_1000E7D4) # addiu $t2, $t2, -0x182c
/* 00482798 894C0000 */  lwl   $t4, ($t2)
/* 0048279C 994C0003 */  lwr   $t4, 3($t2)
/* 004827A0 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 004827A4 ABAC0004 */  swl   $t4, 4($sp)
/* 004827A8 BBAC0007 */  swr   $t4, 7($sp)
/* 004827AC 0320F809 */  jalr  $t9
/* 004827B0 8FA50004 */   lw    $a1, 4($sp)
/* 004827B4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004827B8 24040003 */  li    $a0, 3
/* 004827BC 02001025 */  move  $v0, $s0
/* 004827C0 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004827C4 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004827C8 0320F809 */  jalr  $t9
/* 004827CC 00000000 */   nop   
/* 004827D0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004827D4 24040002 */  li    $a0, 2
/* 004827D8 02001025 */  move  $v0, $s0
/* 004827DC 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004827E0 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004827E4 0320F809 */  jalr  $t9
/* 004827E8 00000000 */   nop   
/* 004827EC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004827F0 2404000A */  li    $a0, 10
/* 004827F4 02001025 */  move  $v0, $s0
/* 004827F8 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004827FC 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00482800 0320F809 */  jalr  $t9
/* 00482804 00000000 */   nop   
/* 00482808 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048280C 24040016 */  li    $a0, 22
/* 00482810 02001025 */  move  $v0, $s0
/* 00482814 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00482818 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 0048281C 0320F809 */  jalr  $t9
/* 00482820 00000000 */   nop   
/* 00482824 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482828 24040043 */  li    $a0, 67
/* 0048282C 02001025 */  move  $v0, $s0
/* 00482830 8F8D8044 */  lw    $t5, %got(RO_1000E7D0)($gp)
/* 00482834 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00482838 25ADE7D0 */  addiu $t5, %lo(RO_1000E7D0) # addiu $t5, $t5, -0x1830
/* 0048283C 89AF0000 */  lwl   $t7, ($t5)
/* 00482840 99AF0003 */  lwr   $t7, 3($t5)
/* 00482844 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00482848 ABAF0004 */  swl   $t7, 4($sp)
/* 0048284C BBAF0007 */  swr   $t7, 7($sp)
/* 00482850 0320F809 */  jalr  $t9
/* 00482854 8FA50004 */   lw    $a1, 4($sp)
/* 00482858 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048285C 24040016 */  li    $a0, 22
/* 00482860 02001025 */  move  $v0, $s0
/* 00482864 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00482868 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 0048286C 0320F809 */  jalr  $t9
/* 00482870 00000000 */   nop   
/* 00482874 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482878 24040046 */  li    $a0, 70
/* 0048287C 02001025 */  move  $v0, $s0
/* 00482880 8F988044 */  lw    $t8, %got(RO_1000E7CC)($gp)
/* 00482884 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00482888 2718E7CC */  addiu $t8, %lo(RO_1000E7CC) # addiu $t8, $t8, -0x1834
/* 0048288C 8B080000 */  lwl   $t0, ($t8)
/* 00482890 9B080003 */  lwr   $t0, 3($t8)
/* 00482894 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00482898 ABA80004 */  swl   $t0, 4($sp)
/* 0048289C BBA80007 */  swr   $t0, 7($sp)
/* 004828A0 0320F809 */  jalr  $t9
/* 004828A4 8FA50004 */   lw    $a1, 4($sp)
/* 004828A8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004828AC 00002025 */  move  $a0, $zero
/* 004828B0 02001025 */  move  $v0, $s0
/* 004828B4 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004828B8 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004828BC 0320F809 */  jalr  $t9
/* 004828C0 00000000 */   nop   
/* 004828C4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004828C8 2404000A */  li    $a0, 10
/* 004828CC 02001025 */  move  $v0, $s0
/* 004828D0 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004828D4 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004828D8 0320F809 */  jalr  $t9
/* 004828DC 00000000 */   nop   
/* 004828E0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004828E4 2404000E */  li    $a0, 14
/* 004828E8 02001025 */  move  $v0, $s0
/* 004828EC 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004828F0 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004828F4 0320F809 */  jalr  $t9
/* 004828F8 00000000 */   nop   
/* 004828FC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482900 2404000B */  li    $a0, 11
/* 00482904 02001025 */  move  $v0, $s0
/* 00482908 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 0048290C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00482910 0320F809 */  jalr  $t9
/* 00482914 00000000 */   nop   
/* 00482918 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048291C 24040016 */  li    $a0, 22
/* 00482920 02001025 */  move  $v0, $s0
/* 00482924 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00482928 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 0048292C 0320F809 */  jalr  $t9
/* 00482930 00000000 */   nop   
/* 00482934 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482938 24040032 */  li    $a0, 50
/* 0048293C 02001025 */  move  $v0, $s0
/* 00482940 8F898044 */  lw    $t1, %got(RO_1000E7C8)($gp)
/* 00482944 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00482948 2529E7C8 */  addiu $t1, %lo(RO_1000E7C8) # addiu $t1, $t1, -0x1838
/* 0048294C 892B0000 */  lwl   $t3, ($t1)
/* 00482950 992B0003 */  lwr   $t3, 3($t1)
/* 00482954 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00482958 ABAB0004 */  swl   $t3, 4($sp)
/* 0048295C BBAB0007 */  swr   $t3, 7($sp)
/* 00482960 0320F809 */  jalr  $t9
/* 00482964 8FA50004 */   lw    $a1, 4($sp)
/* 00482968 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048296C 24040001 */  li    $a0, 1
/* 00482970 02001025 */  move  $v0, $s0
/* 00482974 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00482978 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 0048297C 0320F809 */  jalr  $t9
/* 00482980 00000000 */   nop   
/* 00482984 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482988 24040005 */  li    $a0, 5
/* 0048298C 02001025 */  move  $v0, $s0
/* 00482990 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00482994 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00482998 0320F809 */  jalr  $t9
/* 0048299C 00000000 */   nop   
/* 004829A0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004829A4 2404000D */  li    $a0, 13
/* 004829A8 02001025 */  move  $v0, $s0
/* 004829AC 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004829B0 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004829B4 0320F809 */  jalr  $t9
/* 004829B8 00000000 */   nop   
/* 004829BC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004829C0 2404000A */  li    $a0, 10
/* 004829C4 02001025 */  move  $v0, $s0
/* 004829C8 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004829CC 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004829D0 0320F809 */  jalr  $t9
/* 004829D4 00000000 */   nop   
/* 004829D8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004829DC 2404000F */  li    $a0, 15
/* 004829E0 02001025 */  move  $v0, $s0
/* 004829E4 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004829E8 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004829EC 0320F809 */  jalr  $t9
/* 004829F0 00000000 */   nop   
/* 004829F4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004829F8 24040016 */  li    $a0, 22
/* 004829FC 02001025 */  move  $v0, $s0
/* 00482A00 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00482A04 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00482A08 0320F809 */  jalr  $t9
/* 00482A0C 00000000 */   nop   
/* 00482A10 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482A14 24040047 */  li    $a0, 71
/* 00482A18 02001025 */  move  $v0, $s0
/* 00482A1C 8F8C8044 */  lw    $t4, %got(RO_1000E7C4)($gp)
/* 00482A20 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00482A24 258CE7C4 */  addiu $t4, %lo(RO_1000E7C4) # addiu $t4, $t4, -0x183c
/* 00482A28 898E0000 */  lwl   $t6, ($t4)
/* 00482A2C 998E0003 */  lwr   $t6, 3($t4)
/* 00482A30 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00482A34 ABAE0004 */  swl   $t6, 4($sp)
/* 00482A38 BBAE0007 */  swr   $t6, 7($sp)
/* 00482A3C 0320F809 */  jalr  $t9
/* 00482A40 8FA50004 */   lw    $a1, 4($sp)
/* 00482A44 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482A48 24040001 */  li    $a0, 1
/* 00482A4C 02001025 */  move  $v0, $s0
/* 00482A50 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00482A54 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00482A58 0320F809 */  jalr  $t9
/* 00482A5C 00000000 */   nop   
/* 00482A60 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482A64 24040005 */  li    $a0, 5
/* 00482A68 02001025 */  move  $v0, $s0
/* 00482A6C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00482A70 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00482A74 0320F809 */  jalr  $t9
/* 00482A78 00000000 */   nop   
/* 00482A7C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482A80 2404000D */  li    $a0, 13
/* 00482A84 02001025 */  move  $v0, $s0
/* 00482A88 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00482A8C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00482A90 0320F809 */  jalr  $t9
/* 00482A94 00000000 */   nop   
/* 00482A98 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482A9C 2404000A */  li    $a0, 10
/* 00482AA0 02001025 */  move  $v0, $s0
/* 00482AA4 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00482AA8 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00482AAC 0320F809 */  jalr  $t9
/* 00482AB0 00000000 */   nop   
/* 00482AB4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482AB8 2404000F */  li    $a0, 15
/* 00482ABC 02001025 */  move  $v0, $s0
/* 00482AC0 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00482AC4 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00482AC8 0320F809 */  jalr  $t9
/* 00482ACC 00000000 */   nop   
/* 00482AD0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482AD4 24040016 */  li    $a0, 22
/* 00482AD8 02001025 */  move  $v0, $s0
/* 00482ADC 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00482AE0 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00482AE4 0320F809 */  jalr  $t9
/* 00482AE8 00000000 */   nop   
/* 00482AEC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482AF0 24040049 */  li    $a0, 73
/* 00482AF4 02001025 */  move  $v0, $s0
/* 00482AF8 8F8F8044 */  lw    $t7, %got(RO_1000E7C0)($gp)
/* 00482AFC 25EFE7C0 */  addiu $t7, %lo(RO_1000E7C0) # addiu $t7, $t7, -0x1840
/* 00482B00 89F90000 */  lwl   $t9, ($t7)
/* 00482B04 99F90003 */  lwr   $t9, 3($t7)
/* 00482B08 ABB90004 */  swl   $t9, 4($sp)
/* 00482B0C BBB90007 */  swr   $t9, 7($sp)
/* 00482B10 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00482B14 8FA50004 */  lw    $a1, 4($sp)
/* 00482B18 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00482B1C 0320F809 */  jalr  $t9
/* 00482B20 00000000 */   nop   
/* 00482B24 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482B28 00002025 */  move  $a0, $zero
/* 00482B2C 02001025 */  move  $v0, $s0
/* 00482B30 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00482B34 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00482B38 0320F809 */  jalr  $t9
/* 00482B3C 00000000 */   nop   
/* 00482B40 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482B44 2404000A */  li    $a0, 10
/* 00482B48 02001025 */  move  $v0, $s0
/* 00482B4C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00482B50 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00482B54 0320F809 */  jalr  $t9
/* 00482B58 00000000 */   nop   
/* 00482B5C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482B60 2404000B */  li    $a0, 11
/* 00482B64 02001025 */  move  $v0, $s0
/* 00482B68 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00482B6C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00482B70 0320F809 */  jalr  $t9
/* 00482B74 00000000 */   nop   
/* 00482B78 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482B7C 24040016 */  li    $a0, 22
/* 00482B80 02001025 */  move  $v0, $s0
/* 00482B84 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00482B88 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00482B8C 0320F809 */  jalr  $t9
/* 00482B90 00000000 */   nop   
/* 00482B94 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482B98 2404004B */  li    $a0, 75
/* 00482B9C 02001025 */  move  $v0, $s0
/* 00482BA0 8F888044 */  lw    $t0, %got(RO_1000E7BC)($gp)
/* 00482BA4 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00482BA8 2508E7BC */  addiu $t0, %lo(RO_1000E7BC) # addiu $t0, $t0, -0x1844
/* 00482BAC 890A0000 */  lwl   $t2, ($t0)
/* 00482BB0 990A0003 */  lwr   $t2, 3($t0)
/* 00482BB4 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00482BB8 ABAA0004 */  swl   $t2, 4($sp)
/* 00482BBC BBAA0007 */  swr   $t2, 7($sp)
/* 00482BC0 0320F809 */  jalr  $t9
/* 00482BC4 8FA50004 */   lw    $a1, 4($sp)
/* 00482BC8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482BCC 24040016 */  li    $a0, 22
/* 00482BD0 02001025 */  move  $v0, $s0
/* 00482BD4 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00482BD8 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00482BDC 0320F809 */  jalr  $t9
/* 00482BE0 00000000 */   nop   
/* 00482BE4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482BE8 24040048 */  li    $a0, 72
/* 00482BEC 02001025 */  move  $v0, $s0
/* 00482BF0 8F8B8044 */  lw    $t3, %got(RO_1000E7B8)($gp)
/* 00482BF4 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00482BF8 256BE7B8 */  addiu $t3, %lo(RO_1000E7B8) # addiu $t3, $t3, -0x1848
/* 00482BFC 896D0000 */  lwl   $t5, ($t3)
/* 00482C00 996D0003 */  lwr   $t5, 3($t3)
/* 00482C04 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00482C08 ABAD0004 */  swl   $t5, 4($sp)
/* 00482C0C BBAD0007 */  swr   $t5, 7($sp)
/* 00482C10 0320F809 */  jalr  $t9
/* 00482C14 8FA50004 */   lw    $a1, 4($sp)
/* 00482C18 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482C1C 24040016 */  li    $a0, 22
/* 00482C20 02001025 */  move  $v0, $s0
/* 00482C24 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00482C28 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00482C2C 0320F809 */  jalr  $t9
/* 00482C30 00000000 */   nop   
/* 00482C34 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482C38 2404004D */  li    $a0, 77
/* 00482C3C 02001025 */  move  $v0, $s0
/* 00482C40 8F8E8044 */  lw    $t6, %got(RO_1000E7B4)($gp)
/* 00482C44 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00482C48 25CEE7B4 */  addiu $t6, %lo(RO_1000E7B4) # addiu $t6, $t6, -0x184c
/* 00482C4C 89D80000 */  lwl   $t8, ($t6)
/* 00482C50 99D80003 */  lwr   $t8, 3($t6)
/* 00482C54 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00482C58 ABB80004 */  swl   $t8, 4($sp)
/* 00482C5C BBB80007 */  swr   $t8, 7($sp)
/* 00482C60 0320F809 */  jalr  $t9
/* 00482C64 8FA50004 */   lw    $a1, 4($sp)
/* 00482C68 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482C6C 00002025 */  move  $a0, $zero
/* 00482C70 02001025 */  move  $v0, $s0
/* 00482C74 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00482C78 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00482C7C 0320F809 */  jalr  $t9
/* 00482C80 00000000 */   nop   
/* 00482C84 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482C88 24040016 */  li    $a0, 22
/* 00482C8C 02001025 */  move  $v0, $s0
/* 00482C90 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00482C94 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00482C98 0320F809 */  jalr  $t9
/* 00482C9C 00000000 */   nop   
/* 00482CA0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482CA4 2404004E */  li    $a0, 78
/* 00482CA8 02001025 */  move  $v0, $s0
/* 00482CAC 8F998044 */  lw    $t9, %got(RO_1000E7B0)($gp)
/* 00482CB0 2739E7B0 */  addiu $t9, %lo(RO_1000E7B0) # addiu $t9, $t9, -0x1850
/* 00482CB4 8B290000 */  lwl   $t1, ($t9)
/* 00482CB8 9B290003 */  lwr   $t1, 3($t9)
/* 00482CBC 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00482CC0 ABA90004 */  swl   $t1, 4($sp)
/* 00482CC4 BBA90007 */  swr   $t1, 7($sp)
/* 00482CC8 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00482CCC 0320F809 */  jalr  $t9
/* 00482CD0 8FA50004 */   lw    $a1, 4($sp)
/* 00482CD4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482CD8 00002025 */  move  $a0, $zero
/* 00482CDC 02001025 */  move  $v0, $s0
/* 00482CE0 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00482CE4 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00482CE8 0320F809 */  jalr  $t9
/* 00482CEC 00000000 */   nop   
/* 00482CF0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482CF4 24040016 */  li    $a0, 22
/* 00482CF8 02001025 */  move  $v0, $s0
/* 00482CFC 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00482D00 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00482D04 0320F809 */  jalr  $t9
/* 00482D08 00000000 */   nop   
/* 00482D0C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482D10 2404004F */  li    $a0, 79
/* 00482D14 02001025 */  move  $v0, $s0
/* 00482D18 8F8A8044 */  lw    $t2, %got(RO_1000E7AC)($gp)
/* 00482D1C 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00482D20 254AE7AC */  addiu $t2, %lo(RO_1000E7AC) # addiu $t2, $t2, -0x1854
/* 00482D24 894C0000 */  lwl   $t4, ($t2)
/* 00482D28 994C0003 */  lwr   $t4, 3($t2)
/* 00482D2C 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00482D30 ABAC0004 */  swl   $t4, 4($sp)
/* 00482D34 BBAC0007 */  swr   $t4, 7($sp)
/* 00482D38 0320F809 */  jalr  $t9
/* 00482D3C 8FA50004 */   lw    $a1, 4($sp)
/* 00482D40 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482D44 24040002 */  li    $a0, 2
/* 00482D48 02001025 */  move  $v0, $s0
/* 00482D4C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00482D50 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00482D54 0320F809 */  jalr  $t9
/* 00482D58 00000000 */   nop   
/* 00482D5C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482D60 24040005 */  li    $a0, 5
/* 00482D64 02001025 */  move  $v0, $s0
/* 00482D68 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00482D6C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00482D70 0320F809 */  jalr  $t9
/* 00482D74 00000000 */   nop   
/* 00482D78 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482D7C 24040016 */  li    $a0, 22
/* 00482D80 02001025 */  move  $v0, $s0
/* 00482D84 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00482D88 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00482D8C 0320F809 */  jalr  $t9
/* 00482D90 00000000 */   nop   
/* 00482D94 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482D98 24040051 */  li    $a0, 81
/* 00482D9C 02001025 */  move  $v0, $s0
/* 00482DA0 8F8D8044 */  lw    $t5, %got(RO_1000E7A8)($gp)
/* 00482DA4 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00482DA8 25ADE7A8 */  addiu $t5, %lo(RO_1000E7A8) # addiu $t5, $t5, -0x1858
/* 00482DAC 89AF0000 */  lwl   $t7, ($t5)
/* 00482DB0 99AF0003 */  lwr   $t7, 3($t5)
/* 00482DB4 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00482DB8 ABAF0004 */  swl   $t7, 4($sp)
/* 00482DBC BBAF0007 */  swr   $t7, 7($sp)
/* 00482DC0 0320F809 */  jalr  $t9
/* 00482DC4 8FA50004 */   lw    $a1, 4($sp)
/* 00482DC8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482DCC 24040002 */  li    $a0, 2
/* 00482DD0 02001025 */  move  $v0, $s0
/* 00482DD4 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00482DD8 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00482DDC 0320F809 */  jalr  $t9
/* 00482DE0 00000000 */   nop   
/* 00482DE4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482DE8 2404000E */  li    $a0, 14
/* 00482DEC 02001025 */  move  $v0, $s0
/* 00482DF0 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00482DF4 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00482DF8 0320F809 */  jalr  $t9
/* 00482DFC 00000000 */   nop   
/* 00482E00 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482E04 24040016 */  li    $a0, 22
/* 00482E08 02001025 */  move  $v0, $s0
/* 00482E0C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00482E10 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00482E14 0320F809 */  jalr  $t9
/* 00482E18 00000000 */   nop   
/* 00482E1C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482E20 24040052 */  li    $a0, 82
/* 00482E24 02001025 */  move  $v0, $s0
/* 00482E28 8F988044 */  lw    $t8, %got(RO_1000E7A4)($gp)
/* 00482E2C 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00482E30 2718E7A4 */  addiu $t8, %lo(RO_1000E7A4) # addiu $t8, $t8, -0x185c
/* 00482E34 8B080000 */  lwl   $t0, ($t8)
/* 00482E38 9B080003 */  lwr   $t0, 3($t8)
/* 00482E3C 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00482E40 ABA80004 */  swl   $t0, 4($sp)
/* 00482E44 BBA80007 */  swr   $t0, 7($sp)
/* 00482E48 0320F809 */  jalr  $t9
/* 00482E4C 8FA50004 */   lw    $a1, 4($sp)
/* 00482E50 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482E54 00002025 */  move  $a0, $zero
/* 00482E58 02001025 */  move  $v0, $s0
/* 00482E5C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00482E60 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00482E64 0320F809 */  jalr  $t9
/* 00482E68 00000000 */   nop   
/* 00482E6C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482E70 24040001 */  li    $a0, 1
/* 00482E74 02001025 */  move  $v0, $s0
/* 00482E78 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00482E7C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00482E80 0320F809 */  jalr  $t9
/* 00482E84 00000000 */   nop   
/* 00482E88 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482E8C 24040005 */  li    $a0, 5
/* 00482E90 02001025 */  move  $v0, $s0
/* 00482E94 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00482E98 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00482E9C 0320F809 */  jalr  $t9
/* 00482EA0 00000000 */   nop   
/* 00482EA4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482EA8 2404000D */  li    $a0, 13
/* 00482EAC 02001025 */  move  $v0, $s0
/* 00482EB0 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00482EB4 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00482EB8 0320F809 */  jalr  $t9
/* 00482EBC 00000000 */   nop   
/* 00482EC0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482EC4 2404000A */  li    $a0, 10
/* 00482EC8 02001025 */  move  $v0, $s0
/* 00482ECC 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00482ED0 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00482ED4 0320F809 */  jalr  $t9
/* 00482ED8 00000000 */   nop   
/* 00482EDC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482EE0 24040016 */  li    $a0, 22
/* 00482EE4 02001025 */  move  $v0, $s0
/* 00482EE8 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00482EEC 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00482EF0 0320F809 */  jalr  $t9
/* 00482EF4 00000000 */   nop   
/* 00482EF8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482EFC 24040056 */  li    $a0, 86
/* 00482F00 02001025 */  move  $v0, $s0
/* 00482F04 8F898044 */  lw    $t1, %got(RO_1000E7A0)($gp)
/* 00482F08 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00482F0C 2529E7A0 */  addiu $t1, %lo(RO_1000E7A0) # addiu $t1, $t1, -0x1860
/* 00482F10 892B0000 */  lwl   $t3, ($t1)
/* 00482F14 992B0003 */  lwr   $t3, 3($t1)
/* 00482F18 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00482F1C ABAB0004 */  swl   $t3, 4($sp)
/* 00482F20 BBAB0007 */  swr   $t3, 7($sp)
/* 00482F24 0320F809 */  jalr  $t9
/* 00482F28 8FA50004 */   lw    $a1, 4($sp)
/* 00482F2C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482F30 00002025 */  move  $a0, $zero
/* 00482F34 02001025 */  move  $v0, $s0
/* 00482F38 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00482F3C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00482F40 0320F809 */  jalr  $t9
/* 00482F44 00000000 */   nop   
/* 00482F48 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482F4C 24040016 */  li    $a0, 22
/* 00482F50 02001025 */  move  $v0, $s0
/* 00482F54 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00482F58 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00482F5C 0320F809 */  jalr  $t9
/* 00482F60 00000000 */   nop   
/* 00482F64 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482F68 24040055 */  li    $a0, 85
/* 00482F6C 02001025 */  move  $v0, $s0
/* 00482F70 8F8C8044 */  lw    $t4, %got(RO_1000E79C)($gp)
/* 00482F74 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00482F78 258CE79C */  addiu $t4, %lo(RO_1000E79C) # addiu $t4, $t4, -0x1864
/* 00482F7C 898E0000 */  lwl   $t6, ($t4)
/* 00482F80 998E0003 */  lwr   $t6, 3($t4)
/* 00482F84 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00482F88 ABAE0004 */  swl   $t6, 4($sp)
/* 00482F8C BBAE0007 */  swr   $t6, 7($sp)
/* 00482F90 0320F809 */  jalr  $t9
/* 00482F94 8FA50004 */   lw    $a1, 4($sp)
/* 00482F98 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482F9C 00002025 */  move  $a0, $zero
/* 00482FA0 02001025 */  move  $v0, $s0
/* 00482FA4 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00482FA8 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00482FAC 0320F809 */  jalr  $t9
/* 00482FB0 00000000 */   nop   
/* 00482FB4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482FB8 24040016 */  li    $a0, 22
/* 00482FBC 02001025 */  move  $v0, $s0
/* 00482FC0 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00482FC4 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00482FC8 0320F809 */  jalr  $t9
/* 00482FCC 00000000 */   nop   
/* 00482FD0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00482FD4 24040057 */  li    $a0, 87
/* 00482FD8 02001025 */  move  $v0, $s0
/* 00482FDC 8F8F8044 */  lw    $t7, %got(RO_1000E798)($gp)
/* 00482FE0 25EFE798 */  addiu $t7, %lo(RO_1000E798) # addiu $t7, $t7, -0x1868
/* 00482FE4 89F90000 */  lwl   $t9, ($t7)
/* 00482FE8 99F90003 */  lwr   $t9, 3($t7)
/* 00482FEC ABB90004 */  swl   $t9, 4($sp)
/* 00482FF0 BBB90007 */  swr   $t9, 7($sp)
/* 00482FF4 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00482FF8 8FA50004 */  lw    $a1, 4($sp)
/* 00482FFC 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00483000 0320F809 */  jalr  $t9
/* 00483004 00000000 */   nop   
/* 00483008 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048300C 00002025 */  move  $a0, $zero
/* 00483010 02001025 */  move  $v0, $s0
/* 00483014 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00483018 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 0048301C 0320F809 */  jalr  $t9
/* 00483020 00000000 */   nop   
/* 00483024 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483028 24040016 */  li    $a0, 22
/* 0048302C 02001025 */  move  $v0, $s0
/* 00483030 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00483034 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00483038 0320F809 */  jalr  $t9
/* 0048303C 00000000 */   nop   
/* 00483040 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483044 24040069 */  li    $a0, 105
/* 00483048 02001025 */  move  $v0, $s0
/* 0048304C 8F888044 */  lw    $t0, %got(RO_1000E794)($gp)
/* 00483050 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00483054 2508E794 */  addiu $t0, %lo(RO_1000E794) # addiu $t0, $t0, -0x186c
/* 00483058 890A0000 */  lwl   $t2, ($t0)
/* 0048305C 990A0003 */  lwr   $t2, 3($t0)
/* 00483060 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00483064 ABAA0004 */  swl   $t2, 4($sp)
/* 00483068 BBAA0007 */  swr   $t2, 7($sp)
/* 0048306C 0320F809 */  jalr  $t9
/* 00483070 8FA50004 */   lw    $a1, 4($sp)
/* 00483074 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483078 00002025 */  move  $a0, $zero
/* 0048307C 02001025 */  move  $v0, $s0
/* 00483080 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00483084 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00483088 0320F809 */  jalr  $t9
/* 0048308C 00000000 */   nop   
/* 00483090 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483094 24040016 */  li    $a0, 22
/* 00483098 02001025 */  move  $v0, $s0
/* 0048309C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004830A0 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004830A4 0320F809 */  jalr  $t9
/* 004830A8 00000000 */   nop   
/* 004830AC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004830B0 24040058 */  li    $a0, 88
/* 004830B4 02001025 */  move  $v0, $s0
/* 004830B8 8F8B8044 */  lw    $t3, %got(RO_1000E790)($gp)
/* 004830BC 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 004830C0 256BE790 */  addiu $t3, %lo(RO_1000E790) # addiu $t3, $t3, -0x1870
/* 004830C4 896D0000 */  lwl   $t5, ($t3)
/* 004830C8 996D0003 */  lwr   $t5, 3($t3)
/* 004830CC 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 004830D0 ABAD0004 */  swl   $t5, 4($sp)
/* 004830D4 BBAD0007 */  swr   $t5, 7($sp)
/* 004830D8 0320F809 */  jalr  $t9
/* 004830DC 8FA50004 */   lw    $a1, 4($sp)
/* 004830E0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004830E4 00002025 */  move  $a0, $zero
/* 004830E8 02001025 */  move  $v0, $s0
/* 004830EC 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004830F0 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004830F4 0320F809 */  jalr  $t9
/* 004830F8 00000000 */   nop   
/* 004830FC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483100 24040002 */  li    $a0, 2
/* 00483104 02001025 */  move  $v0, $s0
/* 00483108 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 0048310C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00483110 0320F809 */  jalr  $t9
/* 00483114 00000000 */   nop   
/* 00483118 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048311C 2404000E */  li    $a0, 14
/* 00483120 02001025 */  move  $v0, $s0
/* 00483124 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00483128 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 0048312C 0320F809 */  jalr  $t9
/* 00483130 00000000 */   nop   
/* 00483134 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483138 2404000A */  li    $a0, 10
/* 0048313C 02001025 */  move  $v0, $s0
/* 00483140 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00483144 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00483148 0320F809 */  jalr  $t9
/* 0048314C 00000000 */   nop   
/* 00483150 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483154 24040016 */  li    $a0, 22
/* 00483158 02001025 */  move  $v0, $s0
/* 0048315C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00483160 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00483164 0320F809 */  jalr  $t9
/* 00483168 00000000 */   nop   
/* 0048316C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483170 2404005B */  li    $a0, 91
/* 00483174 02001025 */  move  $v0, $s0
/* 00483178 8F8E8044 */  lw    $t6, %got(RO_1000E78C)($gp)
/* 0048317C 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00483180 25CEE78C */  addiu $t6, %lo(RO_1000E78C) # addiu $t6, $t6, -0x1874
/* 00483184 89D80000 */  lwl   $t8, ($t6)
/* 00483188 99D80003 */  lwr   $t8, 3($t6)
/* 0048318C 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00483190 ABB80004 */  swl   $t8, 4($sp)
/* 00483194 BBB80007 */  swr   $t8, 7($sp)
/* 00483198 0320F809 */  jalr  $t9
/* 0048319C 8FA50004 */   lw    $a1, 4($sp)
/* 004831A0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004831A4 00002025 */  move  $a0, $zero
/* 004831A8 02001025 */  move  $v0, $s0
/* 004831AC 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004831B0 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004831B4 0320F809 */  jalr  $t9
/* 004831B8 00000000 */   nop   
/* 004831BC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004831C0 24040016 */  li    $a0, 22
/* 004831C4 02001025 */  move  $v0, $s0
/* 004831C8 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004831CC 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004831D0 0320F809 */  jalr  $t9
/* 004831D4 00000000 */   nop   
/* 004831D8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004831DC 2404005C */  li    $a0, 92
/* 004831E0 02001025 */  move  $v0, $s0
/* 004831E4 8F998044 */  lw    $t9, %got(RO_1000E788)($gp)
/* 004831E8 2739E788 */  addiu $t9, %lo(RO_1000E788) # addiu $t9, $t9, -0x1878
/* 004831EC 8B290000 */  lwl   $t1, ($t9)
/* 004831F0 9B290003 */  lwr   $t1, 3($t9)
/* 004831F4 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 004831F8 ABA90004 */  swl   $t1, 4($sp)
/* 004831FC BBA90007 */  swr   $t1, 7($sp)
/* 00483200 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00483204 0320F809 */  jalr  $t9
/* 00483208 8FA50004 */   lw    $a1, 4($sp)
/* 0048320C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483210 24040002 */  li    $a0, 2
/* 00483214 02001025 */  move  $v0, $s0
/* 00483218 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 0048321C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00483220 0320F809 */  jalr  $t9
/* 00483224 00000000 */   nop   
/* 00483228 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048322C 24040016 */  li    $a0, 22
/* 00483230 02001025 */  move  $v0, $s0
/* 00483234 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00483238 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 0048323C 0320F809 */  jalr  $t9
/* 00483240 00000000 */   nop   
/* 00483244 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483248 2404008F */  li    $a0, 143
/* 0048324C 02001025 */  move  $v0, $s0
/* 00483250 8F8A8044 */  lw    $t2, %got(RO_1000E784)($gp)
/* 00483254 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00483258 254AE784 */  addiu $t2, %lo(RO_1000E784) # addiu $t2, $t2, -0x187c
/* 0048325C 894C0000 */  lwl   $t4, ($t2)
/* 00483260 994C0003 */  lwr   $t4, 3($t2)
/* 00483264 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00483268 ABAC0004 */  swl   $t4, 4($sp)
/* 0048326C BBAC0007 */  swr   $t4, 7($sp)
/* 00483270 0320F809 */  jalr  $t9
/* 00483274 8FA50004 */   lw    $a1, 4($sp)
/* 00483278 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048327C 2404000E */  li    $a0, 14
/* 00483280 02001025 */  move  $v0, $s0
/* 00483284 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00483288 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 0048328C 0320F809 */  jalr  $t9
/* 00483290 00000000 */   nop   
/* 00483294 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483298 24040002 */  li    $a0, 2
/* 0048329C 02001025 */  move  $v0, $s0
/* 004832A0 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004832A4 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004832A8 0320F809 */  jalr  $t9
/* 004832AC 00000000 */   nop   
/* 004832B0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004832B4 24040016 */  li    $a0, 22
/* 004832B8 02001025 */  move  $v0, $s0
/* 004832BC 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004832C0 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004832C4 0320F809 */  jalr  $t9
/* 004832C8 00000000 */   nop   
/* 004832CC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004832D0 2404005D */  li    $a0, 93
/* 004832D4 02001025 */  move  $v0, $s0
/* 004832D8 8F8D8044 */  lw    $t5, %got(RO_1000E780)($gp)
/* 004832DC 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 004832E0 25ADE780 */  addiu $t5, %lo(RO_1000E780) # addiu $t5, $t5, -0x1880
/* 004832E4 89AF0000 */  lwl   $t7, ($t5)
/* 004832E8 99AF0003 */  lwr   $t7, 3($t5)
/* 004832EC 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 004832F0 ABAF0004 */  swl   $t7, 4($sp)
/* 004832F4 BBAF0007 */  swr   $t7, 7($sp)
/* 004832F8 0320F809 */  jalr  $t9
/* 004832FC 8FA50004 */   lw    $a1, 4($sp)
/* 00483300 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483304 00002025 */  move  $a0, $zero
/* 00483308 02001025 */  move  $v0, $s0
/* 0048330C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00483310 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00483314 0320F809 */  jalr  $t9
/* 00483318 00000000 */   nop   
/* 0048331C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483320 2404000A */  li    $a0, 10
/* 00483324 02001025 */  move  $v0, $s0
/* 00483328 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 0048332C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00483330 0320F809 */  jalr  $t9
/* 00483334 00000000 */   nop   
/* 00483338 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048333C 24040016 */  li    $a0, 22
/* 00483340 02001025 */  move  $v0, $s0
/* 00483344 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00483348 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 0048334C 0320F809 */  jalr  $t9
/* 00483350 00000000 */   nop   
/* 00483354 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483358 2404005E */  li    $a0, 94
/* 0048335C 02001025 */  move  $v0, $s0
/* 00483360 8F988044 */  lw    $t8, %got(RO_1000E77C)($gp)
/* 00483364 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00483368 2718E77C */  addiu $t8, %lo(RO_1000E77C) # addiu $t8, $t8, -0x1884
/* 0048336C 8B080000 */  lwl   $t0, ($t8)
/* 00483370 9B080003 */  lwr   $t0, 3($t8)
/* 00483374 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00483378 ABA80004 */  swl   $t0, 4($sp)
/* 0048337C BBA80007 */  swr   $t0, 7($sp)
/* 00483380 0320F809 */  jalr  $t9
/* 00483384 8FA50004 */   lw    $a1, 4($sp)
/* 00483388 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048338C 00002025 */  move  $a0, $zero
/* 00483390 02001025 */  move  $v0, $s0
/* 00483394 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00483398 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 0048339C 0320F809 */  jalr  $t9
/* 004833A0 00000000 */   nop   
/* 004833A4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004833A8 24040016 */  li    $a0, 22
/* 004833AC 02001025 */  move  $v0, $s0
/* 004833B0 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004833B4 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004833B8 0320F809 */  jalr  $t9
/* 004833BC 00000000 */   nop   
/* 004833C0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004833C4 2404005F */  li    $a0, 95
/* 004833C8 02001025 */  move  $v0, $s0
/* 004833CC 8F898044 */  lw    $t1, %got(RO_1000E778)($gp)
/* 004833D0 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 004833D4 2529E778 */  addiu $t1, %lo(RO_1000E778) # addiu $t1, $t1, -0x1888
/* 004833D8 892B0000 */  lwl   $t3, ($t1)
/* 004833DC 992B0003 */  lwr   $t3, 3($t1)
/* 004833E0 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 004833E4 ABAB0004 */  swl   $t3, 4($sp)
/* 004833E8 BBAB0007 */  swr   $t3, 7($sp)
/* 004833EC 0320F809 */  jalr  $t9
/* 004833F0 8FA50004 */   lw    $a1, 4($sp)
/* 004833F4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004833F8 00002025 */  move  $a0, $zero
/* 004833FC 02001025 */  move  $v0, $s0
/* 00483400 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00483404 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00483408 0320F809 */  jalr  $t9
/* 0048340C 00000000 */   nop   
/* 00483410 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483414 24040016 */  li    $a0, 22
/* 00483418 02001025 */  move  $v0, $s0
/* 0048341C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00483420 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00483424 0320F809 */  jalr  $t9
/* 00483428 00000000 */   nop   
/* 0048342C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483430 24040060 */  li    $a0, 96
/* 00483434 02001025 */  move  $v0, $s0
/* 00483438 8F8C8044 */  lw    $t4, %got(RO_1000E774)($gp)
/* 0048343C 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00483440 258CE774 */  addiu $t4, %lo(RO_1000E774) # addiu $t4, $t4, -0x188c
/* 00483444 898E0000 */  lwl   $t6, ($t4)
/* 00483448 998E0003 */  lwr   $t6, 3($t4)
/* 0048344C 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00483450 ABAE0004 */  swl   $t6, 4($sp)
/* 00483454 BBAE0007 */  swr   $t6, 7($sp)
/* 00483458 0320F809 */  jalr  $t9
/* 0048345C 8FA50004 */   lw    $a1, 4($sp)
/* 00483460 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483464 24040016 */  li    $a0, 22
/* 00483468 02001025 */  move  $v0, $s0
/* 0048346C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00483470 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00483474 0320F809 */  jalr  $t9
/* 00483478 00000000 */   nop   
/* 0048347C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483480 24040061 */  li    $a0, 97
/* 00483484 02001025 */  move  $v0, $s0
/* 00483488 8F8F8044 */  lw    $t7, %got(RO_1000E770)($gp)
/* 0048348C 25EFE770 */  addiu $t7, %lo(RO_1000E770) # addiu $t7, $t7, -0x1890
/* 00483490 89F90000 */  lwl   $t9, ($t7)
/* 00483494 99F90003 */  lwr   $t9, 3($t7)
/* 00483498 ABB90004 */  swl   $t9, 4($sp)
/* 0048349C BBB90007 */  swr   $t9, 7($sp)
/* 004834A0 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 004834A4 8FA50004 */  lw    $a1, 4($sp)
/* 004834A8 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 004834AC 0320F809 */  jalr  $t9
/* 004834B0 00000000 */   nop   
/* 004834B4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004834B8 00002025 */  move  $a0, $zero
/* 004834BC 02001025 */  move  $v0, $s0
/* 004834C0 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004834C4 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004834C8 0320F809 */  jalr  $t9
/* 004834CC 00000000 */   nop   
/* 004834D0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004834D4 24040016 */  li    $a0, 22
/* 004834D8 02001025 */  move  $v0, $s0
/* 004834DC 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004834E0 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004834E4 0320F809 */  jalr  $t9
/* 004834E8 00000000 */   nop   
/* 004834EC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004834F0 24040062 */  li    $a0, 98
/* 004834F4 02001025 */  move  $v0, $s0
/* 004834F8 8F888044 */  lw    $t0, %got(RO_1000E76C)($gp)
/* 004834FC 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00483500 2508E76C */  addiu $t0, %lo(RO_1000E76C) # addiu $t0, $t0, -0x1894
/* 00483504 890A0000 */  lwl   $t2, ($t0)
/* 00483508 990A0003 */  lwr   $t2, 3($t0)
/* 0048350C 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00483510 ABAA0004 */  swl   $t2, 4($sp)
/* 00483514 BBAA0007 */  swr   $t2, 7($sp)
/* 00483518 0320F809 */  jalr  $t9
/* 0048351C 8FA50004 */   lw    $a1, 4($sp)
/* 00483520 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483524 00002025 */  move  $a0, $zero
/* 00483528 02001025 */  move  $v0, $s0
/* 0048352C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00483530 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00483534 0320F809 */  jalr  $t9
/* 00483538 00000000 */   nop   
/* 0048353C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483540 24040016 */  li    $a0, 22
/* 00483544 02001025 */  move  $v0, $s0
/* 00483548 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 0048354C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00483550 0320F809 */  jalr  $t9
/* 00483554 00000000 */   nop   
/* 00483558 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048355C 2404008E */  li    $a0, 142
/* 00483560 02001025 */  move  $v0, $s0
/* 00483564 8F8B8044 */  lw    $t3, %got(RO_1000E768)($gp)
/* 00483568 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 0048356C 256BE768 */  addiu $t3, %lo(RO_1000E768) # addiu $t3, $t3, -0x1898
/* 00483570 896D0000 */  lwl   $t5, ($t3)
/* 00483574 996D0003 */  lwr   $t5, 3($t3)
/* 00483578 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 0048357C ABAD0004 */  swl   $t5, 4($sp)
/* 00483580 BBAD0007 */  swr   $t5, 7($sp)
/* 00483584 0320F809 */  jalr  $t9
/* 00483588 8FA50004 */   lw    $a1, 4($sp)
/* 0048358C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483590 00002025 */  move  $a0, $zero
/* 00483594 02001025 */  move  $v0, $s0
/* 00483598 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 0048359C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004835A0 0320F809 */  jalr  $t9
/* 004835A4 00000000 */   nop   
/* 004835A8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004835AC 24040016 */  li    $a0, 22
/* 004835B0 02001025 */  move  $v0, $s0
/* 004835B4 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004835B8 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004835BC 0320F809 */  jalr  $t9
/* 004835C0 00000000 */   nop   
/* 004835C4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004835C8 24040063 */  li    $a0, 99
/* 004835CC 02001025 */  move  $v0, $s0
/* 004835D0 8F8E8044 */  lw    $t6, %got(RO_1000E764)($gp)
/* 004835D4 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 004835D8 25CEE764 */  addiu $t6, %lo(RO_1000E764) # addiu $t6, $t6, -0x189c
/* 004835DC 89D80000 */  lwl   $t8, ($t6)
/* 004835E0 99D80003 */  lwr   $t8, 3($t6)
/* 004835E4 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 004835E8 ABB80004 */  swl   $t8, 4($sp)
/* 004835EC BBB80007 */  swr   $t8, 7($sp)
/* 004835F0 0320F809 */  jalr  $t9
/* 004835F4 8FA50004 */   lw    $a1, 4($sp)
/* 004835F8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004835FC 2404000E */  li    $a0, 14
/* 00483600 02001025 */  move  $v0, $s0
/* 00483604 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00483608 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 0048360C 0320F809 */  jalr  $t9
/* 00483610 00000000 */   nop   
/* 00483614 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483618 2404000A */  li    $a0, 10
/* 0048361C 02001025 */  move  $v0, $s0
/* 00483620 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00483624 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00483628 0320F809 */  jalr  $t9
/* 0048362C 00000000 */   nop   
/* 00483630 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483634 24040016 */  li    $a0, 22
/* 00483638 02001025 */  move  $v0, $s0
/* 0048363C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00483640 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00483644 0320F809 */  jalr  $t9
/* 00483648 00000000 */   nop   
/* 0048364C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483650 24040064 */  li    $a0, 100
/* 00483654 02001025 */  move  $v0, $s0
/* 00483658 8F998044 */  lw    $t9, %got(RO_1000E760)($gp)
/* 0048365C 2739E760 */  addiu $t9, %lo(RO_1000E760) # addiu $t9, $t9, -0x18a0
/* 00483660 8B290000 */  lwl   $t1, ($t9)
/* 00483664 9B290003 */  lwr   $t1, 3($t9)
/* 00483668 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 0048366C ABA90004 */  swl   $t1, 4($sp)
/* 00483670 BBA90007 */  swr   $t1, 7($sp)
/* 00483674 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00483678 0320F809 */  jalr  $t9
/* 0048367C 8FA50004 */   lw    $a1, 4($sp)
/* 00483680 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483684 00002025 */  move  $a0, $zero
/* 00483688 02001025 */  move  $v0, $s0
/* 0048368C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00483690 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00483694 0320F809 */  jalr  $t9
/* 00483698 00000000 */   nop   
/* 0048369C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004836A0 24040001 */  li    $a0, 1
/* 004836A4 02001025 */  move  $v0, $s0
/* 004836A8 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004836AC 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004836B0 0320F809 */  jalr  $t9
/* 004836B4 00000000 */   nop   
/* 004836B8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004836BC 24040005 */  li    $a0, 5
/* 004836C0 02001025 */  move  $v0, $s0
/* 004836C4 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004836C8 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004836CC 0320F809 */  jalr  $t9
/* 004836D0 00000000 */   nop   
/* 004836D4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004836D8 2404000D */  li    $a0, 13
/* 004836DC 02001025 */  move  $v0, $s0
/* 004836E0 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004836E4 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004836E8 0320F809 */  jalr  $t9
/* 004836EC 00000000 */   nop   
/* 004836F0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004836F4 2404000A */  li    $a0, 10
/* 004836F8 02001025 */  move  $v0, $s0
/* 004836FC 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00483700 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00483704 0320F809 */  jalr  $t9
/* 00483708 00000000 */   nop   
/* 0048370C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483710 24040016 */  li    $a0, 22
/* 00483714 02001025 */  move  $v0, $s0
/* 00483718 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 0048371C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00483720 0320F809 */  jalr  $t9
/* 00483724 00000000 */   nop   
/* 00483728 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048372C 24040065 */  li    $a0, 101
/* 00483730 02001025 */  move  $v0, $s0
/* 00483734 8F8A8044 */  lw    $t2, %got(RO_1000E75C)($gp)
/* 00483738 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 0048373C 254AE75C */  addiu $t2, %lo(RO_1000E75C) # addiu $t2, $t2, -0x18a4
/* 00483740 894C0000 */  lwl   $t4, ($t2)
/* 00483744 994C0003 */  lwr   $t4, 3($t2)
/* 00483748 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 0048374C ABAC0004 */  swl   $t4, 4($sp)
/* 00483750 BBAC0007 */  swr   $t4, 7($sp)
/* 00483754 0320F809 */  jalr  $t9
/* 00483758 8FA50004 */   lw    $a1, 4($sp)
/* 0048375C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483760 00002025 */  move  $a0, $zero
/* 00483764 02001025 */  move  $v0, $s0
/* 00483768 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 0048376C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00483770 0320F809 */  jalr  $t9
/* 00483774 00000000 */   nop   
/* 00483778 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048377C 24040001 */  li    $a0, 1
/* 00483780 02001025 */  move  $v0, $s0
/* 00483784 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00483788 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 0048378C 0320F809 */  jalr  $t9
/* 00483790 00000000 */   nop   
/* 00483794 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483798 24040005 */  li    $a0, 5
/* 0048379C 02001025 */  move  $v0, $s0
/* 004837A0 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004837A4 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004837A8 0320F809 */  jalr  $t9
/* 004837AC 00000000 */   nop   
/* 004837B0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004837B4 2404000D */  li    $a0, 13
/* 004837B8 02001025 */  move  $v0, $s0
/* 004837BC 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004837C0 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004837C4 0320F809 */  jalr  $t9
/* 004837C8 00000000 */   nop   
/* 004837CC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004837D0 2404000A */  li    $a0, 10
/* 004837D4 02001025 */  move  $v0, $s0
/* 004837D8 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004837DC 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004837E0 0320F809 */  jalr  $t9
/* 004837E4 00000000 */   nop   
/* 004837E8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004837EC 24040002 */  li    $a0, 2
/* 004837F0 02001025 */  move  $v0, $s0
/* 004837F4 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004837F8 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004837FC 0320F809 */  jalr  $t9
/* 00483800 00000000 */   nop   
/* 00483804 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483808 24040016 */  li    $a0, 22
/* 0048380C 02001025 */  move  $v0, $s0
/* 00483810 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00483814 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00483818 0320F809 */  jalr  $t9
/* 0048381C 00000000 */   nop   
/* 00483820 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483824 24040067 */  li    $a0, 103
/* 00483828 02001025 */  move  $v0, $s0
/* 0048382C 8F8D8044 */  lw    $t5, %got(RO_1000E758)($gp)
/* 00483830 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00483834 25ADE758 */  addiu $t5, %lo(RO_1000E758) # addiu $t5, $t5, -0x18a8
/* 00483838 89AF0000 */  lwl   $t7, ($t5)
/* 0048383C 99AF0003 */  lwr   $t7, 3($t5)
/* 00483840 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00483844 ABAF0004 */  swl   $t7, 4($sp)
/* 00483848 BBAF0007 */  swr   $t7, 7($sp)
/* 0048384C 0320F809 */  jalr  $t9
/* 00483850 8FA50004 */   lw    $a1, 4($sp)
/* 00483854 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483858 00002025 */  move  $a0, $zero
/* 0048385C 02001025 */  move  $v0, $s0
/* 00483860 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00483864 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00483868 0320F809 */  jalr  $t9
/* 0048386C 00000000 */   nop   
/* 00483870 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483874 24040016 */  li    $a0, 22
/* 00483878 02001025 */  move  $v0, $s0
/* 0048387C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00483880 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00483884 0320F809 */  jalr  $t9
/* 00483888 00000000 */   nop   
/* 0048388C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483890 24040068 */  li    $a0, 104
/* 00483894 02001025 */  move  $v0, $s0
/* 00483898 8F988044 */  lw    $t8, %got(RO_1000E754)($gp)
/* 0048389C 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 004838A0 2718E754 */  addiu $t8, %lo(RO_1000E754) # addiu $t8, $t8, -0x18ac
/* 004838A4 8B080000 */  lwl   $t0, ($t8)
/* 004838A8 9B080003 */  lwr   $t0, 3($t8)
/* 004838AC 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 004838B0 ABA80004 */  swl   $t0, 4($sp)
/* 004838B4 BBA80007 */  swr   $t0, 7($sp)
/* 004838B8 0320F809 */  jalr  $t9
/* 004838BC 8FA50004 */   lw    $a1, 4($sp)
/* 004838C0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004838C4 24040002 */  li    $a0, 2
/* 004838C8 02001025 */  move  $v0, $s0
/* 004838CC 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004838D0 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004838D4 0320F809 */  jalr  $t9
/* 004838D8 00000000 */   nop   
/* 004838DC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004838E0 2404000E */  li    $a0, 14
/* 004838E4 02001025 */  move  $v0, $s0
/* 004838E8 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004838EC 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004838F0 0320F809 */  jalr  $t9
/* 004838F4 00000000 */   nop   
/* 004838F8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004838FC 2404000D */  li    $a0, 13
/* 00483900 02001025 */  move  $v0, $s0
/* 00483904 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00483908 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 0048390C 0320F809 */  jalr  $t9
/* 00483910 00000000 */   nop   
/* 00483914 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483918 2404000A */  li    $a0, 10
/* 0048391C 02001025 */  move  $v0, $s0
/* 00483920 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00483924 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00483928 0320F809 */  jalr  $t9
/* 0048392C 00000000 */   nop   
/* 00483930 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483934 24040016 */  li    $a0, 22
/* 00483938 02001025 */  move  $v0, $s0
/* 0048393C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00483940 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00483944 0320F809 */  jalr  $t9
/* 00483948 00000000 */   nop   
/* 0048394C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483950 2404006A */  li    $a0, 106
/* 00483954 02001025 */  move  $v0, $s0
/* 00483958 8F898044 */  lw    $t1, %got(RO_1000E750)($gp)
/* 0048395C 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00483960 2529E750 */  addiu $t1, %lo(RO_1000E750) # addiu $t1, $t1, -0x18b0
/* 00483964 892B0000 */  lwl   $t3, ($t1)
/* 00483968 992B0003 */  lwr   $t3, 3($t1)
/* 0048396C 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00483970 ABAB0004 */  swl   $t3, 4($sp)
/* 00483974 BBAB0007 */  swr   $t3, 7($sp)
/* 00483978 0320F809 */  jalr  $t9
/* 0048397C 8FA50004 */   lw    $a1, 4($sp)
/* 00483980 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483984 24040016 */  li    $a0, 22
/* 00483988 02001025 */  move  $v0, $s0
/* 0048398C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00483990 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00483994 0320F809 */  jalr  $t9
/* 00483998 00000000 */   nop   
/* 0048399C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004839A0 2404006B */  li    $a0, 107
/* 004839A4 02001025 */  move  $v0, $s0
/* 004839A8 8F8C8044 */  lw    $t4, %got(RO_1000E74C)($gp)
/* 004839AC 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 004839B0 258CE74C */  addiu $t4, %lo(RO_1000E74C) # addiu $t4, $t4, -0x18b4
/* 004839B4 898E0000 */  lwl   $t6, ($t4)
/* 004839B8 998E0003 */  lwr   $t6, 3($t4)
/* 004839BC 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 004839C0 ABAE0004 */  swl   $t6, 4($sp)
/* 004839C4 BBAE0007 */  swr   $t6, 7($sp)
/* 004839C8 0320F809 */  jalr  $t9
/* 004839CC 8FA50004 */   lw    $a1, 4($sp)
/* 004839D0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004839D4 24040001 */  li    $a0, 1
/* 004839D8 02001025 */  move  $v0, $s0
/* 004839DC 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004839E0 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004839E4 0320F809 */  jalr  $t9
/* 004839E8 00000000 */   nop   
/* 004839EC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004839F0 24040005 */  li    $a0, 5
/* 004839F4 02001025 */  move  $v0, $s0
/* 004839F8 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004839FC 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00483A00 0320F809 */  jalr  $t9
/* 00483A04 00000000 */   nop   
/* 00483A08 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483A0C 2404000D */  li    $a0, 13
/* 00483A10 02001025 */  move  $v0, $s0
/* 00483A14 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00483A18 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00483A1C 0320F809 */  jalr  $t9
/* 00483A20 00000000 */   nop   
/* 00483A24 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483A28 2404000A */  li    $a0, 10
/* 00483A2C 02001025 */  move  $v0, $s0
/* 00483A30 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00483A34 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00483A38 0320F809 */  jalr  $t9
/* 00483A3C 00000000 */   nop   
/* 00483A40 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483A44 24040016 */  li    $a0, 22
/* 00483A48 02001025 */  move  $v0, $s0
/* 00483A4C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00483A50 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00483A54 0320F809 */  jalr  $t9
/* 00483A58 00000000 */   nop   
/* 00483A5C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483A60 2404006C */  li    $a0, 108
/* 00483A64 02001025 */  move  $v0, $s0
/* 00483A68 8F8F8044 */  lw    $t7, %got(RO_1000E748)($gp)
/* 00483A6C 25EFE748 */  addiu $t7, %lo(RO_1000E748) # addiu $t7, $t7, -0x18b8
/* 00483A70 89F90000 */  lwl   $t9, ($t7)
/* 00483A74 99F90003 */  lwr   $t9, 3($t7)
/* 00483A78 ABB90004 */  swl   $t9, 4($sp)
/* 00483A7C BBB90007 */  swr   $t9, 7($sp)
/* 00483A80 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00483A84 8FA50004 */  lw    $a1, 4($sp)
/* 00483A88 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00483A8C 0320F809 */  jalr  $t9
/* 00483A90 00000000 */   nop   
/* 00483A94 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483A98 00002025 */  move  $a0, $zero
/* 00483A9C 02001025 */  move  $v0, $s0
/* 00483AA0 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00483AA4 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00483AA8 0320F809 */  jalr  $t9
/* 00483AAC 00000000 */   nop   
/* 00483AB0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483AB4 2404000A */  li    $a0, 10
/* 00483AB8 02001025 */  move  $v0, $s0
/* 00483ABC 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00483AC0 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00483AC4 0320F809 */  jalr  $t9
/* 00483AC8 00000000 */   nop   
/* 00483ACC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483AD0 2404000E */  li    $a0, 14
/* 00483AD4 02001025 */  move  $v0, $s0
/* 00483AD8 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00483ADC 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00483AE0 0320F809 */  jalr  $t9
/* 00483AE4 00000000 */   nop   
/* 00483AE8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483AEC 2404000B */  li    $a0, 11
/* 00483AF0 02001025 */  move  $v0, $s0
/* 00483AF4 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00483AF8 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00483AFC 0320F809 */  jalr  $t9
/* 00483B00 00000000 */   nop   
/* 00483B04 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483B08 24040016 */  li    $a0, 22
/* 00483B0C 02001025 */  move  $v0, $s0
/* 00483B10 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00483B14 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00483B18 0320F809 */  jalr  $t9
/* 00483B1C 00000000 */   nop   
/* 00483B20 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483B24 2404006D */  li    $a0, 109
/* 00483B28 02001025 */  move  $v0, $s0
/* 00483B2C 8F888044 */  lw    $t0, %got(RO_1000E744)($gp)
/* 00483B30 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00483B34 2508E744 */  addiu $t0, %lo(RO_1000E744) # addiu $t0, $t0, -0x18bc
/* 00483B38 890A0000 */  lwl   $t2, ($t0)
/* 00483B3C 990A0003 */  lwr   $t2, 3($t0)
/* 00483B40 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00483B44 ABAA0004 */  swl   $t2, 4($sp)
/* 00483B48 BBAA0007 */  swr   $t2, 7($sp)
/* 00483B4C 0320F809 */  jalr  $t9
/* 00483B50 8FA50004 */   lw    $a1, 4($sp)
/* 00483B54 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483B58 00002025 */  move  $a0, $zero
/* 00483B5C 02001025 */  move  $v0, $s0
/* 00483B60 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00483B64 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00483B68 0320F809 */  jalr  $t9
/* 00483B6C 00000000 */   nop   
/* 00483B70 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483B74 24040001 */  li    $a0, 1
/* 00483B78 02001025 */  move  $v0, $s0
/* 00483B7C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00483B80 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00483B84 0320F809 */  jalr  $t9
/* 00483B88 00000000 */   nop   
/* 00483B8C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483B90 24040005 */  li    $a0, 5
/* 00483B94 02001025 */  move  $v0, $s0
/* 00483B98 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00483B9C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00483BA0 0320F809 */  jalr  $t9
/* 00483BA4 00000000 */   nop   
/* 00483BA8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483BAC 2404000D */  li    $a0, 13
/* 00483BB0 02001025 */  move  $v0, $s0
/* 00483BB4 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00483BB8 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00483BBC 0320F809 */  jalr  $t9
/* 00483BC0 00000000 */   nop   
/* 00483BC4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483BC8 2404000A */  li    $a0, 10
/* 00483BCC 02001025 */  move  $v0, $s0
/* 00483BD0 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00483BD4 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00483BD8 0320F809 */  jalr  $t9
/* 00483BDC 00000000 */   nop   
/* 00483BE0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483BE4 24040002 */  li    $a0, 2
/* 00483BE8 02001025 */  move  $v0, $s0
/* 00483BEC 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00483BF0 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00483BF4 0320F809 */  jalr  $t9
/* 00483BF8 00000000 */   nop   
/* 00483BFC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483C00 24040016 */  li    $a0, 22
/* 00483C04 02001025 */  move  $v0, $s0
/* 00483C08 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00483C0C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00483C10 0320F809 */  jalr  $t9
/* 00483C14 00000000 */   nop   
/* 00483C18 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483C1C 2404006E */  li    $a0, 110
/* 00483C20 02001025 */  move  $v0, $s0
/* 00483C24 8F8B8044 */  lw    $t3, %got(RO_1000E740)($gp)
/* 00483C28 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00483C2C 256BE740 */  addiu $t3, %lo(RO_1000E740) # addiu $t3, $t3, -0x18c0
/* 00483C30 896D0000 */  lwl   $t5, ($t3)
/* 00483C34 996D0003 */  lwr   $t5, 3($t3)
/* 00483C38 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00483C3C ABAD0004 */  swl   $t5, 4($sp)
/* 00483C40 BBAD0007 */  swr   $t5, 7($sp)
/* 00483C44 0320F809 */  jalr  $t9
/* 00483C48 8FA50004 */   lw    $a1, 4($sp)
/* 00483C4C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483C50 00002025 */  move  $a0, $zero
/* 00483C54 02001025 */  move  $v0, $s0
/* 00483C58 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00483C5C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00483C60 0320F809 */  jalr  $t9
/* 00483C64 00000000 */   nop   
/* 00483C68 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483C6C 24040006 */  li    $a0, 6
/* 00483C70 02001025 */  move  $v0, $s0
/* 00483C74 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00483C78 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00483C7C 0320F809 */  jalr  $t9
/* 00483C80 00000000 */   nop   
/* 00483C84 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483C88 24040016 */  li    $a0, 22
/* 00483C8C 02001025 */  move  $v0, $s0
/* 00483C90 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00483C94 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00483C98 0320F809 */  jalr  $t9
/* 00483C9C 00000000 */   nop   
/* 00483CA0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483CA4 2404006F */  li    $a0, 111
/* 00483CA8 02001025 */  move  $v0, $s0
/* 00483CAC 8F8E8044 */  lw    $t6, %got(RO_1000E73C)($gp)
/* 00483CB0 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00483CB4 25CEE73C */  addiu $t6, %lo(RO_1000E73C) # addiu $t6, $t6, -0x18c4
/* 00483CB8 89D80000 */  lwl   $t8, ($t6)
/* 00483CBC 99D80003 */  lwr   $t8, 3($t6)
/* 00483CC0 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00483CC4 ABB80004 */  swl   $t8, 4($sp)
/* 00483CC8 BBB80007 */  swr   $t8, 7($sp)
/* 00483CCC 0320F809 */  jalr  $t9
/* 00483CD0 8FA50004 */   lw    $a1, 4($sp)
/* 00483CD4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483CD8 00002025 */  move  $a0, $zero
/* 00483CDC 02001025 */  move  $v0, $s0
/* 00483CE0 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00483CE4 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00483CE8 0320F809 */  jalr  $t9
/* 00483CEC 00000000 */   nop   
/* 00483CF0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483CF4 24040001 */  li    $a0, 1
/* 00483CF8 02001025 */  move  $v0, $s0
/* 00483CFC 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00483D00 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00483D04 0320F809 */  jalr  $t9
/* 00483D08 00000000 */   nop   
/* 00483D0C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483D10 24040005 */  li    $a0, 5
/* 00483D14 02001025 */  move  $v0, $s0
/* 00483D18 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00483D1C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00483D20 0320F809 */  jalr  $t9
/* 00483D24 00000000 */   nop   
/* 00483D28 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483D2C 2404000D */  li    $a0, 13
/* 00483D30 02001025 */  move  $v0, $s0
/* 00483D34 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00483D38 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00483D3C 0320F809 */  jalr  $t9
/* 00483D40 00000000 */   nop   
/* 00483D44 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483D48 2404000A */  li    $a0, 10
/* 00483D4C 02001025 */  move  $v0, $s0
/* 00483D50 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00483D54 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00483D58 0320F809 */  jalr  $t9
/* 00483D5C 00000000 */   nop   
/* 00483D60 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483D64 24040002 */  li    $a0, 2
/* 00483D68 02001025 */  move  $v0, $s0
/* 00483D6C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00483D70 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00483D74 0320F809 */  jalr  $t9
/* 00483D78 00000000 */   nop   
/* 00483D7C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483D80 24040016 */  li    $a0, 22
/* 00483D84 02001025 */  move  $v0, $s0
/* 00483D88 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00483D8C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00483D90 0320F809 */  jalr  $t9
/* 00483D94 00000000 */   nop   
/* 00483D98 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483D9C 24040070 */  li    $a0, 112
/* 00483DA0 02001025 */  move  $v0, $s0
/* 00483DA4 8F998044 */  lw    $t9, %got(RO_1000E738)($gp)
/* 00483DA8 2739E738 */  addiu $t9, %lo(RO_1000E738) # addiu $t9, $t9, -0x18c8
/* 00483DAC 8B290000 */  lwl   $t1, ($t9)
/* 00483DB0 9B290003 */  lwr   $t1, 3($t9)
/* 00483DB4 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00483DB8 ABA90004 */  swl   $t1, 4($sp)
/* 00483DBC BBA90007 */  swr   $t1, 7($sp)
/* 00483DC0 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00483DC4 0320F809 */  jalr  $t9
/* 00483DC8 8FA50004 */   lw    $a1, 4($sp)
/* 00483DCC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483DD0 00002025 */  move  $a0, $zero
/* 00483DD4 02001025 */  move  $v0, $s0
/* 00483DD8 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00483DDC 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00483DE0 0320F809 */  jalr  $t9
/* 00483DE4 00000000 */   nop   
/* 00483DE8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483DEC 24040001 */  li    $a0, 1
/* 00483DF0 02001025 */  move  $v0, $s0
/* 00483DF4 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00483DF8 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00483DFC 0320F809 */  jalr  $t9
/* 00483E00 00000000 */   nop   
/* 00483E04 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483E08 24040005 */  li    $a0, 5
/* 00483E0C 02001025 */  move  $v0, $s0
/* 00483E10 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00483E14 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00483E18 0320F809 */  jalr  $t9
/* 00483E1C 00000000 */   nop   
/* 00483E20 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483E24 2404000D */  li    $a0, 13
/* 00483E28 02001025 */  move  $v0, $s0
/* 00483E2C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00483E30 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00483E34 0320F809 */  jalr  $t9
/* 00483E38 00000000 */   nop   
/* 00483E3C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483E40 2404000A */  li    $a0, 10
/* 00483E44 02001025 */  move  $v0, $s0
/* 00483E48 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00483E4C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00483E50 0320F809 */  jalr  $t9
/* 00483E54 00000000 */   nop   
/* 00483E58 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483E5C 24040002 */  li    $a0, 2
/* 00483E60 02001025 */  move  $v0, $s0
/* 00483E64 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00483E68 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00483E6C 0320F809 */  jalr  $t9
/* 00483E70 00000000 */   nop   
/* 00483E74 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483E78 24040016 */  li    $a0, 22
/* 00483E7C 02001025 */  move  $v0, $s0
/* 00483E80 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00483E84 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00483E88 0320F809 */  jalr  $t9
/* 00483E8C 00000000 */   nop   
/* 00483E90 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483E94 24040071 */  li    $a0, 113
/* 00483E98 02001025 */  move  $v0, $s0
/* 00483E9C 8F8A8044 */  lw    $t2, %got(RO_1000E734)($gp)
/* 00483EA0 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00483EA4 254AE734 */  addiu $t2, %lo(RO_1000E734) # addiu $t2, $t2, -0x18cc
/* 00483EA8 894C0000 */  lwl   $t4, ($t2)
/* 00483EAC 994C0003 */  lwr   $t4, 3($t2)
/* 00483EB0 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00483EB4 ABAC0004 */  swl   $t4, 4($sp)
/* 00483EB8 BBAC0007 */  swr   $t4, 7($sp)
/* 00483EBC 0320F809 */  jalr  $t9
/* 00483EC0 8FA50004 */   lw    $a1, 4($sp)
/* 00483EC4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483EC8 24040005 */  li    $a0, 5
/* 00483ECC 02001025 */  move  $v0, $s0
/* 00483ED0 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00483ED4 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00483ED8 0320F809 */  jalr  $t9
/* 00483EDC 00000000 */   nop   
/* 00483EE0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483EE4 2404000A */  li    $a0, 10
/* 00483EE8 02001025 */  move  $v0, $s0
/* 00483EEC 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00483EF0 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00483EF4 0320F809 */  jalr  $t9
/* 00483EF8 00000000 */   nop   
/* 00483EFC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483F00 24040016 */  li    $a0, 22
/* 00483F04 02001025 */  move  $v0, $s0
/* 00483F08 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00483F0C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00483F10 0320F809 */  jalr  $t9
/* 00483F14 00000000 */   nop   
/* 00483F18 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483F1C 24040006 */  li    $a0, 6
/* 00483F20 02001025 */  move  $v0, $s0
/* 00483F24 8F8D8044 */  lw    $t5, %got(RO_1000E730)($gp)
/* 00483F28 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00483F2C 25ADE730 */  addiu $t5, %lo(RO_1000E730) # addiu $t5, $t5, -0x18d0
/* 00483F30 89AF0000 */  lwl   $t7, ($t5)
/* 00483F34 99AF0003 */  lwr   $t7, 3($t5)
/* 00483F38 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00483F3C ABAF0004 */  swl   $t7, 4($sp)
/* 00483F40 BBAF0007 */  swr   $t7, 7($sp)
/* 00483F44 0320F809 */  jalr  $t9
/* 00483F48 8FA50004 */   lw    $a1, 4($sp)
/* 00483F4C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483F50 24040005 */  li    $a0, 5
/* 00483F54 02001025 */  move  $v0, $s0
/* 00483F58 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00483F5C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00483F60 0320F809 */  jalr  $t9
/* 00483F64 00000000 */   nop   
/* 00483F68 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483F6C 2404000A */  li    $a0, 10
/* 00483F70 02001025 */  move  $v0, $s0
/* 00483F74 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00483F78 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00483F7C 0320F809 */  jalr  $t9
/* 00483F80 00000000 */   nop   
/* 00483F84 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483F88 24040002 */  li    $a0, 2
/* 00483F8C 02001025 */  move  $v0, $s0
/* 00483F90 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00483F94 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00483F98 0320F809 */  jalr  $t9
/* 00483F9C 00000000 */   nop   
/* 00483FA0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483FA4 24040016 */  li    $a0, 22
/* 00483FA8 02001025 */  move  $v0, $s0
/* 00483FAC 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00483FB0 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00483FB4 0320F809 */  jalr  $t9
/* 00483FB8 00000000 */   nop   
/* 00483FBC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483FC0 2404002B */  li    $a0, 43
/* 00483FC4 02001025 */  move  $v0, $s0
/* 00483FC8 8F988044 */  lw    $t8, %got(RO_1000E72C)($gp)
/* 00483FCC 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00483FD0 2718E72C */  addiu $t8, %lo(RO_1000E72C) # addiu $t8, $t8, -0x18d4
/* 00483FD4 8B080000 */  lwl   $t0, ($t8)
/* 00483FD8 9B080003 */  lwr   $t0, 3($t8)
/* 00483FDC 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00483FE0 ABA80004 */  swl   $t0, 4($sp)
/* 00483FE4 BBA80007 */  swr   $t0, 7($sp)
/* 00483FE8 0320F809 */  jalr  $t9
/* 00483FEC 8FA50004 */   lw    $a1, 4($sp)
/* 00483FF0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00483FF4 24040005 */  li    $a0, 5
/* 00483FF8 02001025 */  move  $v0, $s0
/* 00483FFC 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484000 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00484004 0320F809 */  jalr  $t9
/* 00484008 00000000 */   nop   
/* 0048400C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484010 2404000A */  li    $a0, 10
/* 00484014 02001025 */  move  $v0, $s0
/* 00484018 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 0048401C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00484020 0320F809 */  jalr  $t9
/* 00484024 00000000 */   nop   
/* 00484028 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048402C 24040016 */  li    $a0, 22
/* 00484030 02001025 */  move  $v0, $s0
/* 00484034 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484038 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 0048403C 0320F809 */  jalr  $t9
/* 00484040 00000000 */   nop   
/* 00484044 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484048 24040072 */  li    $a0, 114
/* 0048404C 02001025 */  move  $v0, $s0
/* 00484050 8F898044 */  lw    $t1, %got(RO_1000E728)($gp)
/* 00484054 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00484058 2529E728 */  addiu $t1, %lo(RO_1000E728) # addiu $t1, $t1, -0x18d8
/* 0048405C 892B0000 */  lwl   $t3, ($t1)
/* 00484060 992B0003 */  lwr   $t3, 3($t1)
/* 00484064 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00484068 ABAB0004 */  swl   $t3, 4($sp)
/* 0048406C BBAB0007 */  swr   $t3, 7($sp)
/* 00484070 0320F809 */  jalr  $t9
/* 00484074 8FA50004 */   lw    $a1, 4($sp)
/* 00484078 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048407C 00002025 */  move  $a0, $zero
/* 00484080 02001025 */  move  $v0, $s0
/* 00484084 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484088 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 0048408C 0320F809 */  jalr  $t9
/* 00484090 00000000 */   nop   
/* 00484094 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484098 2404000A */  li    $a0, 10
/* 0048409C 02001025 */  move  $v0, $s0
/* 004840A0 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004840A4 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004840A8 0320F809 */  jalr  $t9
/* 004840AC 00000000 */   nop   
/* 004840B0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004840B4 24040016 */  li    $a0, 22
/* 004840B8 02001025 */  move  $v0, $s0
/* 004840BC 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004840C0 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004840C4 0320F809 */  jalr  $t9
/* 004840C8 00000000 */   nop   
/* 004840CC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004840D0 24040076 */  li    $a0, 118
/* 004840D4 02001025 */  move  $v0, $s0
/* 004840D8 8F8C8044 */  lw    $t4, %got(RO_1000E724)($gp)
/* 004840DC 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 004840E0 258CE724 */  addiu $t4, %lo(RO_1000E724) # addiu $t4, $t4, -0x18dc
/* 004840E4 898E0000 */  lwl   $t6, ($t4)
/* 004840E8 998E0003 */  lwr   $t6, 3($t4)
/* 004840EC 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 004840F0 ABAE0004 */  swl   $t6, 4($sp)
/* 004840F4 BBAE0007 */  swr   $t6, 7($sp)
/* 004840F8 0320F809 */  jalr  $t9
/* 004840FC 8FA50004 */   lw    $a1, 4($sp)
/* 00484100 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484104 00002025 */  move  $a0, $zero
/* 00484108 02001025 */  move  $v0, $s0
/* 0048410C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484110 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00484114 0320F809 */  jalr  $t9
/* 00484118 00000000 */   nop   
/* 0048411C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484120 24040016 */  li    $a0, 22
/* 00484124 02001025 */  move  $v0, $s0
/* 00484128 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 0048412C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00484130 0320F809 */  jalr  $t9
/* 00484134 00000000 */   nop   
/* 00484138 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048413C 24040077 */  li    $a0, 119
/* 00484140 02001025 */  move  $v0, $s0
/* 00484144 8F8F8044 */  lw    $t7, %got(RO_1000E720)($gp)
/* 00484148 25EFE720 */  addiu $t7, %lo(RO_1000E720) # addiu $t7, $t7, -0x18e0
/* 0048414C 89F90000 */  lwl   $t9, ($t7)
/* 00484150 99F90003 */  lwr   $t9, 3($t7)
/* 00484154 ABB90004 */  swl   $t9, 4($sp)
/* 00484158 BBB90007 */  swr   $t9, 7($sp)
/* 0048415C 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00484160 8FA50004 */  lw    $a1, 4($sp)
/* 00484164 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00484168 0320F809 */  jalr  $t9
/* 0048416C 00000000 */   nop   
/* 00484170 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484174 00002025 */  move  $a0, $zero
/* 00484178 02001025 */  move  $v0, $s0
/* 0048417C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484180 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00484184 0320F809 */  jalr  $t9
/* 00484188 00000000 */   nop   
/* 0048418C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484190 24040016 */  li    $a0, 22
/* 00484194 02001025 */  move  $v0, $s0
/* 00484198 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 0048419C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004841A0 0320F809 */  jalr  $t9
/* 004841A4 00000000 */   nop   
/* 004841A8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004841AC 24040079 */  li    $a0, 121
/* 004841B0 02001025 */  move  $v0, $s0
/* 004841B4 8F888044 */  lw    $t0, %got(RO_1000E71C)($gp)
/* 004841B8 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 004841BC 2508E71C */  addiu $t0, %lo(RO_1000E71C) # addiu $t0, $t0, -0x18e4
/* 004841C0 890A0000 */  lwl   $t2, ($t0)
/* 004841C4 990A0003 */  lwr   $t2, 3($t0)
/* 004841C8 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 004841CC ABAA0004 */  swl   $t2, 4($sp)
/* 004841D0 BBAA0007 */  swr   $t2, 7($sp)
/* 004841D4 0320F809 */  jalr  $t9
/* 004841D8 8FA50004 */   lw    $a1, 4($sp)
/* 004841DC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004841E0 00002025 */  move  $a0, $zero
/* 004841E4 02001025 */  move  $v0, $s0
/* 004841E8 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004841EC 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004841F0 0320F809 */  jalr  $t9
/* 004841F4 00000000 */   nop   
/* 004841F8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004841FC 2404000E */  li    $a0, 14
/* 00484200 02001025 */  move  $v0, $s0
/* 00484204 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484208 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 0048420C 0320F809 */  jalr  $t9
/* 00484210 00000000 */   nop   
/* 00484214 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484218 24040016 */  li    $a0, 22
/* 0048421C 02001025 */  move  $v0, $s0
/* 00484220 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484224 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00484228 0320F809 */  jalr  $t9
/* 0048422C 00000000 */   nop   
/* 00484230 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484234 2404007A */  li    $a0, 122
/* 00484238 02001025 */  move  $v0, $s0
/* 0048423C 8F8B8044 */  lw    $t3, %got(RO_1000E718)($gp)
/* 00484240 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00484244 256BE718 */  addiu $t3, %lo(RO_1000E718) # addiu $t3, $t3, -0x18e8
/* 00484248 896D0000 */  lwl   $t5, ($t3)
/* 0048424C 996D0003 */  lwr   $t5, 3($t3)
/* 00484250 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00484254 ABAD0004 */  swl   $t5, 4($sp)
/* 00484258 BBAD0007 */  swr   $t5, 7($sp)
/* 0048425C 0320F809 */  jalr  $t9
/* 00484260 8FA50004 */   lw    $a1, 4($sp)
/* 00484264 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484268 24040005 */  li    $a0, 5
/* 0048426C 02001025 */  move  $v0, $s0
/* 00484270 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484274 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00484278 0320F809 */  jalr  $t9
/* 0048427C 00000000 */   nop   
/* 00484280 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484284 24040016 */  li    $a0, 22
/* 00484288 02001025 */  move  $v0, $s0
/* 0048428C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484290 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00484294 0320F809 */  jalr  $t9
/* 00484298 00000000 */   nop   
/* 0048429C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004842A0 2404007B */  li    $a0, 123
/* 004842A4 02001025 */  move  $v0, $s0
/* 004842A8 8F8E8044 */  lw    $t6, %got(RO_1000E714)($gp)
/* 004842AC 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 004842B0 25CEE714 */  addiu $t6, %lo(RO_1000E714) # addiu $t6, $t6, -0x18ec
/* 004842B4 89D80000 */  lwl   $t8, ($t6)
/* 004842B8 99D80003 */  lwr   $t8, 3($t6)
/* 004842BC 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 004842C0 ABB80004 */  swl   $t8, 4($sp)
/* 004842C4 BBB80007 */  swr   $t8, 7($sp)
/* 004842C8 0320F809 */  jalr  $t9
/* 004842CC 8FA50004 */   lw    $a1, 4($sp)
/* 004842D0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004842D4 00002025 */  move  $a0, $zero
/* 004842D8 02001025 */  move  $v0, $s0
/* 004842DC 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004842E0 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004842E4 0320F809 */  jalr  $t9
/* 004842E8 00000000 */   nop   
/* 004842EC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004842F0 24040001 */  li    $a0, 1
/* 004842F4 02001025 */  move  $v0, $s0
/* 004842F8 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004842FC 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00484300 0320F809 */  jalr  $t9
/* 00484304 00000000 */   nop   
/* 00484308 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048430C 24040005 */  li    $a0, 5
/* 00484310 02001025 */  move  $v0, $s0
/* 00484314 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484318 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 0048431C 0320F809 */  jalr  $t9
/* 00484320 00000000 */   nop   
/* 00484324 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484328 2404000D */  li    $a0, 13
/* 0048432C 02001025 */  move  $v0, $s0
/* 00484330 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484334 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00484338 0320F809 */  jalr  $t9
/* 0048433C 00000000 */   nop   
/* 00484340 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484344 2404000A */  li    $a0, 10
/* 00484348 02001025 */  move  $v0, $s0
/* 0048434C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484350 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00484354 0320F809 */  jalr  $t9
/* 00484358 00000000 */   nop   
/* 0048435C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484360 24040016 */  li    $a0, 22
/* 00484364 02001025 */  move  $v0, $s0
/* 00484368 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 0048436C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00484370 0320F809 */  jalr  $t9
/* 00484374 00000000 */   nop   
/* 00484378 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048437C 2404007C */  li    $a0, 124
/* 00484380 02001025 */  move  $v0, $s0
/* 00484384 8F998044 */  lw    $t9, %got(RO_1000E710)($gp)
/* 00484388 2739E710 */  addiu $t9, %lo(RO_1000E710) # addiu $t9, $t9, -0x18f0
/* 0048438C 8B290000 */  lwl   $t1, ($t9)
/* 00484390 9B290003 */  lwr   $t1, 3($t9)
/* 00484394 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00484398 ABA90004 */  swl   $t1, 4($sp)
/* 0048439C BBA90007 */  swr   $t1, 7($sp)
/* 004843A0 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 004843A4 0320F809 */  jalr  $t9
/* 004843A8 8FA50004 */   lw    $a1, 4($sp)
/* 004843AC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004843B0 24040016 */  li    $a0, 22
/* 004843B4 02001025 */  move  $v0, $s0
/* 004843B8 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004843BC 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004843C0 0320F809 */  jalr  $t9
/* 004843C4 00000000 */   nop   
/* 004843C8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004843CC 2404007D */  li    $a0, 125
/* 004843D0 02001025 */  move  $v0, $s0
/* 004843D4 8F8A8044 */  lw    $t2, %got(RO_1000E70C)($gp)
/* 004843D8 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 004843DC 254AE70C */  addiu $t2, %lo(RO_1000E70C) # addiu $t2, $t2, -0x18f4
/* 004843E0 894C0000 */  lwl   $t4, ($t2)
/* 004843E4 994C0003 */  lwr   $t4, 3($t2)
/* 004843E8 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 004843EC ABAC0004 */  swl   $t4, 4($sp)
/* 004843F0 BBAC0007 */  swr   $t4, 7($sp)
/* 004843F4 0320F809 */  jalr  $t9
/* 004843F8 8FA50004 */   lw    $a1, 4($sp)
/* 004843FC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484400 00002025 */  move  $a0, $zero
/* 00484404 02001025 */  move  $v0, $s0
/* 00484408 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 0048440C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00484410 0320F809 */  jalr  $t9
/* 00484414 00000000 */   nop   
/* 00484418 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048441C 24040016 */  li    $a0, 22
/* 00484420 02001025 */  move  $v0, $s0
/* 00484424 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484428 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 0048442C 0320F809 */  jalr  $t9
/* 00484430 00000000 */   nop   
/* 00484434 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484438 2404007E */  li    $a0, 126
/* 0048443C 02001025 */  move  $v0, $s0
/* 00484440 8F8D8044 */  lw    $t5, %got(RO_1000E708)($gp)
/* 00484444 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00484448 25ADE708 */  addiu $t5, %lo(RO_1000E708) # addiu $t5, $t5, -0x18f8
/* 0048444C 89AF0000 */  lwl   $t7, ($t5)
/* 00484450 99AF0003 */  lwr   $t7, 3($t5)
/* 00484454 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00484458 ABAF0004 */  swl   $t7, 4($sp)
/* 0048445C BBAF0007 */  swr   $t7, 7($sp)
/* 00484460 0320F809 */  jalr  $t9
/* 00484464 8FA50004 */   lw    $a1, 4($sp)
/* 00484468 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048446C 00002025 */  move  $a0, $zero
/* 00484470 02001025 */  move  $v0, $s0
/* 00484474 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484478 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 0048447C 0320F809 */  jalr  $t9
/* 00484480 00000000 */   nop   
/* 00484484 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484488 24040006 */  li    $a0, 6
/* 0048448C 02001025 */  move  $v0, $s0
/* 00484490 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484494 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00484498 0320F809 */  jalr  $t9
/* 0048449C 00000000 */   nop   
/* 004844A0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004844A4 24040016 */  li    $a0, 22
/* 004844A8 02001025 */  move  $v0, $s0
/* 004844AC 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004844B0 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004844B4 0320F809 */  jalr  $t9
/* 004844B8 00000000 */   nop   
/* 004844BC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004844C0 2404007F */  li    $a0, 127
/* 004844C4 02001025 */  move  $v0, $s0
/* 004844C8 8F988044 */  lw    $t8, %got(RO_1000E704)($gp)
/* 004844CC 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 004844D0 2718E704 */  addiu $t8, %lo(RO_1000E704) # addiu $t8, $t8, -0x18fc
/* 004844D4 8B080000 */  lwl   $t0, ($t8)
/* 004844D8 9B080003 */  lwr   $t0, 3($t8)
/* 004844DC 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 004844E0 ABA80004 */  swl   $t0, 4($sp)
/* 004844E4 BBA80007 */  swr   $t0, 7($sp)
/* 004844E8 0320F809 */  jalr  $t9
/* 004844EC 8FA50004 */   lw    $a1, 4($sp)
/* 004844F0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004844F4 24040004 */  li    $a0, 4
/* 004844F8 02001025 */  move  $v0, $s0
/* 004844FC 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484500 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00484504 0320F809 */  jalr  $t9
/* 00484508 00000000 */   nop   
/* 0048450C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484510 24040002 */  li    $a0, 2
/* 00484514 02001025 */  move  $v0, $s0
/* 00484518 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 0048451C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00484520 0320F809 */  jalr  $t9
/* 00484524 00000000 */   nop   
/* 00484528 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048452C 24040016 */  li    $a0, 22
/* 00484530 02001025 */  move  $v0, $s0
/* 00484534 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484538 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 0048453C 0320F809 */  jalr  $t9
/* 00484540 00000000 */   nop   
/* 00484544 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484548 24040086 */  li    $a0, 134
/* 0048454C 02001025 */  move  $v0, $s0
/* 00484550 8F898044 */  lw    $t1, %got(RO_1000E700)($gp)
/* 00484554 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00484558 2529E700 */  addiu $t1, %lo(RO_1000E700) # addiu $t1, $t1, -0x1900
/* 0048455C 892B0000 */  lwl   $t3, ($t1)
/* 00484560 992B0003 */  lwr   $t3, 3($t1)
/* 00484564 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00484568 ABAB0004 */  swl   $t3, 4($sp)
/* 0048456C BBAB0007 */  swr   $t3, 7($sp)
/* 00484570 0320F809 */  jalr  $t9
/* 00484574 8FA50004 */   lw    $a1, 4($sp)
/* 00484578 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048457C 00002025 */  move  $a0, $zero
/* 00484580 02001025 */  move  $v0, $s0
/* 00484584 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484588 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 0048458C 0320F809 */  jalr  $t9
/* 00484590 00000000 */   nop   
/* 00484594 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484598 24040006 */  li    $a0, 6
/* 0048459C 02001025 */  move  $v0, $s0
/* 004845A0 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004845A4 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004845A8 0320F809 */  jalr  $t9
/* 004845AC 00000000 */   nop   
/* 004845B0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004845B4 24040016 */  li    $a0, 22
/* 004845B8 02001025 */  move  $v0, $s0
/* 004845BC 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004845C0 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004845C4 0320F809 */  jalr  $t9
/* 004845C8 00000000 */   nop   
/* 004845CC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004845D0 24040088 */  li    $a0, 136
/* 004845D4 02001025 */  move  $v0, $s0
/* 004845D8 8F8C8044 */  lw    $t4, %got(RO_1000E6FC)($gp)
/* 004845DC 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 004845E0 258CE6FC */  addiu $t4, %lo(RO_1000E6FC) # addiu $t4, $t4, -0x1904
/* 004845E4 898E0000 */  lwl   $t6, ($t4)
/* 004845E8 998E0003 */  lwr   $t6, 3($t4)
/* 004845EC 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 004845F0 ABAE0004 */  swl   $t6, 4($sp)
/* 004845F4 BBAE0007 */  swr   $t6, 7($sp)
/* 004845F8 0320F809 */  jalr  $t9
/* 004845FC 8FA50004 */   lw    $a1, 4($sp)
/* 00484600 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484604 24040004 */  li    $a0, 4
/* 00484608 02001025 */  move  $v0, $s0
/* 0048460C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484610 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00484614 0320F809 */  jalr  $t9
/* 00484618 00000000 */   nop   
/* 0048461C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484620 24040016 */  li    $a0, 22
/* 00484624 02001025 */  move  $v0, $s0
/* 00484628 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 0048462C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00484630 0320F809 */  jalr  $t9
/* 00484634 00000000 */   nop   
/* 00484638 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048463C 2404008A */  li    $a0, 138
/* 00484640 02001025 */  move  $v0, $s0
/* 00484644 8F8F8044 */  lw    $t7, %got(RO_1000E6F8)($gp)
/* 00484648 25EFE6F8 */  addiu $t7, %lo(RO_1000E6F8) # addiu $t7, $t7, -0x1908
/* 0048464C 89F90000 */  lwl   $t9, ($t7)
/* 00484650 99F90003 */  lwr   $t9, 3($t7)
/* 00484654 ABB90004 */  swl   $t9, 4($sp)
/* 00484658 BBB90007 */  swr   $t9, 7($sp)
/* 0048465C 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00484660 8FA50004 */  lw    $a1, 4($sp)
/* 00484664 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00484668 0320F809 */  jalr  $t9
/* 0048466C 00000000 */   nop   
/* 00484670 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484674 00002025 */  move  $a0, $zero
/* 00484678 02001025 */  move  $v0, $s0
/* 0048467C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484680 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00484684 0320F809 */  jalr  $t9
/* 00484688 00000000 */   nop   
/* 0048468C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484690 2404000A */  li    $a0, 10
/* 00484694 02001025 */  move  $v0, $s0
/* 00484698 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 0048469C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004846A0 0320F809 */  jalr  $t9
/* 004846A4 00000000 */   nop   
/* 004846A8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004846AC 24040016 */  li    $a0, 22
/* 004846B0 02001025 */  move  $v0, $s0
/* 004846B4 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004846B8 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004846BC 0320F809 */  jalr  $t9
/* 004846C0 00000000 */   nop   
/* 004846C4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004846C8 2404008C */  li    $a0, 140
/* 004846CC 02001025 */  move  $v0, $s0
/* 004846D0 8F888044 */  lw    $t0, %got(RO_1000E6F4)($gp)
/* 004846D4 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 004846D8 2508E6F4 */  addiu $t0, %lo(RO_1000E6F4) # addiu $t0, $t0, -0x190c
/* 004846DC 890A0000 */  lwl   $t2, ($t0)
/* 004846E0 990A0003 */  lwr   $t2, 3($t0)
/* 004846E4 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 004846E8 ABAA0004 */  swl   $t2, 4($sp)
/* 004846EC BBAA0007 */  swr   $t2, 7($sp)
/* 004846F0 0320F809 */  jalr  $t9
/* 004846F4 8FA50004 */   lw    $a1, 4($sp)
/* 004846F8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004846FC 00002025 */  move  $a0, $zero
/* 00484700 02001025 */  move  $v0, $s0
/* 00484704 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484708 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 0048470C 0320F809 */  jalr  $t9
/* 00484710 00000000 */   nop   
/* 00484714 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484718 24040004 */  li    $a0, 4
/* 0048471C 02001025 */  move  $v0, $s0
/* 00484720 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484724 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00484728 0320F809 */  jalr  $t9
/* 0048472C 00000000 */   nop   
/* 00484730 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484734 24040011 */  li    $a0, 17
/* 00484738 02001025 */  move  $v0, $s0
/* 0048473C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484740 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00484744 0320F809 */  jalr  $t9
/* 00484748 00000000 */   nop   
/* 0048474C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484750 24040014 */  li    $a0, 20
/* 00484754 02001025 */  move  $v0, $s0
/* 00484758 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 0048475C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00484760 0320F809 */  jalr  $t9
/* 00484764 00000000 */   nop   
/* 00484768 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048476C 24040015 */  li    $a0, 21
/* 00484770 02001025 */  move  $v0, $s0
/* 00484774 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484778 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 0048477C 0320F809 */  jalr  $t9
/* 00484780 00000000 */   nop   
/* 00484784 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484788 24040016 */  li    $a0, 22
/* 0048478C 02001025 */  move  $v0, $s0
/* 00484790 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484794 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00484798 0320F809 */  jalr  $t9
/* 0048479C 00000000 */   nop   
/* 004847A0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004847A4 2404008D */  li    $a0, 141
/* 004847A8 02001025 */  move  $v0, $s0
/* 004847AC 8F8B8044 */  lw    $t3, %got(RO_1000E6F0)($gp)
/* 004847B0 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 004847B4 256BE6F0 */  addiu $t3, %lo(RO_1000E6F0) # addiu $t3, $t3, -0x1910
/* 004847B8 896D0000 */  lwl   $t5, ($t3)
/* 004847BC 996D0003 */  lwr   $t5, 3($t3)
/* 004847C0 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 004847C4 ABAD0004 */  swl   $t5, 4($sp)
/* 004847C8 BBAD0007 */  swr   $t5, 7($sp)
/* 004847CC 0320F809 */  jalr  $t9
/* 004847D0 8FA50004 */   lw    $a1, 4($sp)
/* 004847D4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004847D8 00002025 */  move  $a0, $zero
/* 004847DC 02001025 */  move  $v0, $s0
/* 004847E0 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004847E4 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004847E8 0320F809 */  jalr  $t9
/* 004847EC 00000000 */   nop   
/* 004847F0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004847F4 24040016 */  li    $a0, 22
/* 004847F8 02001025 */  move  $v0, $s0
/* 004847FC 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484800 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00484804 0320F809 */  jalr  $t9
/* 00484808 00000000 */   nop   
/* 0048480C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484810 24040014 */  li    $a0, 20
/* 00484814 02001025 */  move  $v0, $s0
/* 00484818 8F8E8044 */  lw    $t6, %got(RO_1000E6EC)($gp)
/* 0048481C 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00484820 25CEE6EC */  addiu $t6, %lo(RO_1000E6EC) # addiu $t6, $t6, -0x1914
/* 00484824 89D80000 */  lwl   $t8, ($t6)
/* 00484828 99D80003 */  lwr   $t8, 3($t6)
/* 0048482C 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00484830 ABB80004 */  swl   $t8, 4($sp)
/* 00484834 BBB80007 */  swr   $t8, 7($sp)
/* 00484838 0320F809 */  jalr  $t9
/* 0048483C 8FA50004 */   lw    $a1, 4($sp)
/* 00484840 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484844 24040005 */  li    $a0, 5
/* 00484848 02001025 */  move  $v0, $s0
/* 0048484C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484850 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00484854 0320F809 */  jalr  $t9
/* 00484858 00000000 */   nop   
/* 0048485C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484860 24040002 */  li    $a0, 2
/* 00484864 02001025 */  move  $v0, $s0
/* 00484868 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 0048486C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00484870 0320F809 */  jalr  $t9
/* 00484874 00000000 */   nop   
/* 00484878 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048487C 2404000A */  li    $a0, 10
/* 00484880 02001025 */  move  $v0, $s0
/* 00484884 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484888 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 0048488C 0320F809 */  jalr  $t9
/* 00484890 00000000 */   nop   
/* 00484894 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484898 24040016 */  li    $a0, 22
/* 0048489C 02001025 */  move  $v0, $s0
/* 004848A0 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004848A4 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004848A8 0320F809 */  jalr  $t9
/* 004848AC 00000000 */   nop   
/* 004848B0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004848B4 24040024 */  li    $a0, 36
/* 004848B8 02001025 */  move  $v0, $s0
/* 004848BC 8F998044 */  lw    $t9, %got(RO_1000E6E8)($gp)
/* 004848C0 2739E6E8 */  addiu $t9, %lo(RO_1000E6E8) # addiu $t9, $t9, -0x1918
/* 004848C4 8B290000 */  lwl   $t1, ($t9)
/* 004848C8 9B290003 */  lwr   $t1, 3($t9)
/* 004848CC 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 004848D0 ABA90004 */  swl   $t1, 4($sp)
/* 004848D4 BBA90007 */  swr   $t1, 7($sp)
/* 004848D8 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 004848DC 0320F809 */  jalr  $t9
/* 004848E0 8FA50004 */   lw    $a1, 4($sp)
/* 004848E4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004848E8 24040005 */  li    $a0, 5
/* 004848EC 02001025 */  move  $v0, $s0
/* 004848F0 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004848F4 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004848F8 0320F809 */  jalr  $t9
/* 004848FC 00000000 */   nop   
/* 00484900 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484904 24040002 */  li    $a0, 2
/* 00484908 02001025 */  move  $v0, $s0
/* 0048490C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484910 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00484914 0320F809 */  jalr  $t9
/* 00484918 00000000 */   nop   
/* 0048491C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484920 2404000A */  li    $a0, 10
/* 00484924 02001025 */  move  $v0, $s0
/* 00484928 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 0048492C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00484930 0320F809 */  jalr  $t9
/* 00484934 00000000 */   nop   
/* 00484938 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048493C 24040016 */  li    $a0, 22
/* 00484940 02001025 */  move  $v0, $s0
/* 00484944 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484948 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 0048494C 0320F809 */  jalr  $t9
/* 00484950 00000000 */   nop   
/* 00484954 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484958 24040027 */  li    $a0, 39
/* 0048495C 02001025 */  move  $v0, $s0
/* 00484960 8F8A8044 */  lw    $t2, %got(RO_1000E6E4)($gp)
/* 00484964 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00484968 254AE6E4 */  addiu $t2, %lo(RO_1000E6E4) # addiu $t2, $t2, -0x191c
/* 0048496C 894C0000 */  lwl   $t4, ($t2)
/* 00484970 994C0003 */  lwr   $t4, 3($t2)
/* 00484974 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00484978 ABAC0004 */  swl   $t4, 4($sp)
/* 0048497C BBAC0007 */  swr   $t4, 7($sp)
/* 00484980 0320F809 */  jalr  $t9
/* 00484984 8FA50004 */   lw    $a1, 4($sp)
/* 00484988 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048498C 24040005 */  li    $a0, 5
/* 00484990 02001025 */  move  $v0, $s0
/* 00484994 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484998 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 0048499C 0320F809 */  jalr  $t9
/* 004849A0 00000000 */   nop   
/* 004849A4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004849A8 24040002 */  li    $a0, 2
/* 004849AC 02001025 */  move  $v0, $s0
/* 004849B0 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004849B4 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004849B8 0320F809 */  jalr  $t9
/* 004849BC 00000000 */   nop   
/* 004849C0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004849C4 2404000A */  li    $a0, 10
/* 004849C8 02001025 */  move  $v0, $s0
/* 004849CC 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004849D0 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004849D4 0320F809 */  jalr  $t9
/* 004849D8 00000000 */   nop   
/* 004849DC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004849E0 24040016 */  li    $a0, 22
/* 004849E4 02001025 */  move  $v0, $s0
/* 004849E8 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004849EC 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004849F0 0320F809 */  jalr  $t9
/* 004849F4 00000000 */   nop   
/* 004849F8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004849FC 2404002A */  li    $a0, 42
/* 00484A00 02001025 */  move  $v0, $s0
/* 00484A04 8F8D8044 */  lw    $t5, %got(RO_1000E6E0)($gp)
/* 00484A08 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00484A0C 25ADE6E0 */  addiu $t5, %lo(RO_1000E6E0) # addiu $t5, $t5, -0x1920
/* 00484A10 89AF0000 */  lwl   $t7, ($t5)
/* 00484A14 99AF0003 */  lwr   $t7, 3($t5)
/* 00484A18 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00484A1C ABAF0004 */  swl   $t7, 4($sp)
/* 00484A20 BBAF0007 */  swr   $t7, 7($sp)
/* 00484A24 0320F809 */  jalr  $t9
/* 00484A28 8FA50004 */   lw    $a1, 4($sp)
/* 00484A2C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484A30 24040005 */  li    $a0, 5
/* 00484A34 02001025 */  move  $v0, $s0
/* 00484A38 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484A3C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00484A40 0320F809 */  jalr  $t9
/* 00484A44 00000000 */   nop   
/* 00484A48 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484A4C 24040002 */  li    $a0, 2
/* 00484A50 02001025 */  move  $v0, $s0
/* 00484A54 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484A58 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00484A5C 0320F809 */  jalr  $t9
/* 00484A60 00000000 */   nop   
/* 00484A64 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484A68 2404000A */  li    $a0, 10
/* 00484A6C 02001025 */  move  $v0, $s0
/* 00484A70 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484A74 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00484A78 0320F809 */  jalr  $t9
/* 00484A7C 00000000 */   nop   
/* 00484A80 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484A84 24040016 */  li    $a0, 22
/* 00484A88 02001025 */  move  $v0, $s0
/* 00484A8C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484A90 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00484A94 0320F809 */  jalr  $t9
/* 00484A98 00000000 */   nop   
/* 00484A9C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484AA0 24040053 */  li    $a0, 83
/* 00484AA4 02001025 */  move  $v0, $s0
/* 00484AA8 8F988044 */  lw    $t8, %got(RO_1000E6DC)($gp)
/* 00484AAC 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00484AB0 2718E6DC */  addiu $t8, %lo(RO_1000E6DC) # addiu $t8, $t8, -0x1924
/* 00484AB4 8B080000 */  lwl   $t0, ($t8)
/* 00484AB8 9B080003 */  lwr   $t0, 3($t8)
/* 00484ABC 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00484AC0 ABA80004 */  swl   $t0, 4($sp)
/* 00484AC4 BBA80007 */  swr   $t0, 7($sp)
/* 00484AC8 0320F809 */  jalr  $t9
/* 00484ACC 8FA50004 */   lw    $a1, 4($sp)
/* 00484AD0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484AD4 24040005 */  li    $a0, 5
/* 00484AD8 02001025 */  move  $v0, $s0
/* 00484ADC 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484AE0 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00484AE4 0320F809 */  jalr  $t9
/* 00484AE8 00000000 */   nop   
/* 00484AEC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484AF0 24040002 */  li    $a0, 2
/* 00484AF4 02001025 */  move  $v0, $s0
/* 00484AF8 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484AFC 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00484B00 0320F809 */  jalr  $t9
/* 00484B04 00000000 */   nop   
/* 00484B08 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484B0C 2404000A */  li    $a0, 10
/* 00484B10 02001025 */  move  $v0, $s0
/* 00484B14 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484B18 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00484B1C 0320F809 */  jalr  $t9
/* 00484B20 00000000 */   nop   
/* 00484B24 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484B28 24040016 */  li    $a0, 22
/* 00484B2C 02001025 */  move  $v0, $s0
/* 00484B30 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484B34 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00484B38 0320F809 */  jalr  $t9
/* 00484B3C 00000000 */   nop   
/* 00484B40 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484B44 24040073 */  li    $a0, 115
/* 00484B48 02001025 */  move  $v0, $s0
/* 00484B4C 8F898044 */  lw    $t1, %got(RO_1000E6D8)($gp)
/* 00484B50 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00484B54 2529E6D8 */  addiu $t1, %lo(RO_1000E6D8) # addiu $t1, $t1, -0x1928
/* 00484B58 892B0000 */  lwl   $t3, ($t1)
/* 00484B5C 992B0003 */  lwr   $t3, 3($t1)
/* 00484B60 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00484B64 ABAB0004 */  swl   $t3, 4($sp)
/* 00484B68 BBAB0007 */  swr   $t3, 7($sp)
/* 00484B6C 0320F809 */  jalr  $t9
/* 00484B70 8FA50004 */   lw    $a1, 4($sp)
/* 00484B74 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484B78 00002025 */  move  $a0, $zero
/* 00484B7C 02001025 */  move  $v0, $s0
/* 00484B80 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484B84 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00484B88 0320F809 */  jalr  $t9
/* 00484B8C 00000000 */   nop   
/* 00484B90 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484B94 24040016 */  li    $a0, 22
/* 00484B98 02001025 */  move  $v0, $s0
/* 00484B9C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484BA0 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00484BA4 0320F809 */  jalr  $t9
/* 00484BA8 00000000 */   nop   
/* 00484BAC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484BB0 24040074 */  li    $a0, 116
/* 00484BB4 02001025 */  move  $v0, $s0
/* 00484BB8 8F8C8044 */  lw    $t4, %got(RO_1000E6D4)($gp)
/* 00484BBC 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00484BC0 258CE6D4 */  addiu $t4, %lo(RO_1000E6D4) # addiu $t4, $t4, -0x192c
/* 00484BC4 898E0000 */  lwl   $t6, ($t4)
/* 00484BC8 998E0003 */  lwr   $t6, 3($t4)
/* 00484BCC 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00484BD0 ABAE0004 */  swl   $t6, 4($sp)
/* 00484BD4 BBAE0007 */  swr   $t6, 7($sp)
/* 00484BD8 0320F809 */  jalr  $t9
/* 00484BDC 8FA50004 */   lw    $a1, 4($sp)
/* 00484BE0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484BE4 00002025 */  move  $a0, $zero
/* 00484BE8 02001025 */  move  $v0, $s0
/* 00484BEC 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484BF0 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00484BF4 0320F809 */  jalr  $t9
/* 00484BF8 00000000 */   nop   
/* 00484BFC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484C00 24040016 */  li    $a0, 22
/* 00484C04 02001025 */  move  $v0, $s0
/* 00484C08 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484C0C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00484C10 0320F809 */  jalr  $t9
/* 00484C14 00000000 */   nop   
/* 00484C18 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484C1C 24040050 */  li    $a0, 80
/* 00484C20 02001025 */  move  $v0, $s0
/* 00484C24 8F8F8044 */  lw    $t7, %got(RO_1000E6D0)($gp)
/* 00484C28 25EFE6D0 */  addiu $t7, %lo(RO_1000E6D0) # addiu $t7, $t7, -0x1930
/* 00484C2C 89F90000 */  lwl   $t9, ($t7)
/* 00484C30 99F90003 */  lwr   $t9, 3($t7)
/* 00484C34 ABB90004 */  swl   $t9, 4($sp)
/* 00484C38 BBB90007 */  swr   $t9, 7($sp)
/* 00484C3C 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00484C40 8FA50004 */  lw    $a1, 4($sp)
/* 00484C44 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00484C48 0320F809 */  jalr  $t9
/* 00484C4C 00000000 */   nop   
/* 00484C50 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484C54 00002025 */  move  $a0, $zero
/* 00484C58 02001025 */  move  $v0, $s0
/* 00484C5C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484C60 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00484C64 0320F809 */  jalr  $t9
/* 00484C68 00000000 */   nop   
/* 00484C6C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484C70 24040016 */  li    $a0, 22
/* 00484C74 02001025 */  move  $v0, $s0
/* 00484C78 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484C7C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00484C80 0320F809 */  jalr  $t9
/* 00484C84 00000000 */   nop   
/* 00484C88 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484C8C 2404002C */  li    $a0, 44
/* 00484C90 02001025 */  move  $v0, $s0
/* 00484C94 8F888044 */  lw    $t0, %got(RO_1000E6CC)($gp)
/* 00484C98 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00484C9C 2508E6CC */  addiu $t0, %lo(RO_1000E6CC) # addiu $t0, $t0, -0x1934
/* 00484CA0 890A0000 */  lwl   $t2, ($t0)
/* 00484CA4 990A0003 */  lwr   $t2, 3($t0)
/* 00484CA8 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00484CAC ABAA0004 */  swl   $t2, 4($sp)
/* 00484CB0 BBAA0007 */  swr   $t2, 7($sp)
/* 00484CB4 0320F809 */  jalr  $t9
/* 00484CB8 8FA50004 */   lw    $a1, 4($sp)
/* 00484CBC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484CC0 00002025 */  move  $a0, $zero
/* 00484CC4 02001025 */  move  $v0, $s0
/* 00484CC8 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484CCC 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00484CD0 0320F809 */  jalr  $t9
/* 00484CD4 00000000 */   nop   
/* 00484CD8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484CDC 24040007 */  li    $a0, 7
/* 00484CE0 02001025 */  move  $v0, $s0
/* 00484CE4 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484CE8 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00484CEC 0320F809 */  jalr  $t9
/* 00484CF0 00000000 */   nop   
/* 00484CF4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484CF8 24040008 */  li    $a0, 8
/* 00484CFC 02001025 */  move  $v0, $s0
/* 00484D00 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484D04 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00484D08 0320F809 */  jalr  $t9
/* 00484D0C 00000000 */   nop   
/* 00484D10 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484D14 24040009 */  li    $a0, 9
/* 00484D18 02001025 */  move  $v0, $s0
/* 00484D1C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484D20 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00484D24 0320F809 */  jalr  $t9
/* 00484D28 00000000 */   nop   
/* 00484D2C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484D30 24040016 */  li    $a0, 22
/* 00484D34 02001025 */  move  $v0, $s0
/* 00484D38 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484D3C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00484D40 0320F809 */  jalr  $t9
/* 00484D44 00000000 */   nop   
/* 00484D48 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484D4C 2404003D */  li    $a0, 61
/* 00484D50 02001025 */  move  $v0, $s0
/* 00484D54 8F8B8044 */  lw    $t3, %got(RO_1000E6C8)($gp)
/* 00484D58 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00484D5C 256BE6C8 */  addiu $t3, %lo(RO_1000E6C8) # addiu $t3, $t3, -0x1938
/* 00484D60 896D0000 */  lwl   $t5, ($t3)
/* 00484D64 996D0003 */  lwr   $t5, 3($t3)
/* 00484D68 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00484D6C ABAD0004 */  swl   $t5, 4($sp)
/* 00484D70 BBAD0007 */  swr   $t5, 7($sp)
/* 00484D74 0320F809 */  jalr  $t9
/* 00484D78 8FA50004 */   lw    $a1, 4($sp)
/* 00484D7C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484D80 00002025 */  move  $a0, $zero
/* 00484D84 02001025 */  move  $v0, $s0
/* 00484D88 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484D8C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00484D90 0320F809 */  jalr  $t9
/* 00484D94 00000000 */   nop   
/* 00484D98 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484D9C 24040001 */  li    $a0, 1
/* 00484DA0 02001025 */  move  $v0, $s0
/* 00484DA4 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484DA8 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00484DAC 0320F809 */  jalr  $t9
/* 00484DB0 00000000 */   nop   
/* 00484DB4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484DB8 24040005 */  li    $a0, 5
/* 00484DBC 02001025 */  move  $v0, $s0
/* 00484DC0 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484DC4 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00484DC8 0320F809 */  jalr  $t9
/* 00484DCC 00000000 */   nop   
/* 00484DD0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484DD4 2404000D */  li    $a0, 13
/* 00484DD8 02001025 */  move  $v0, $s0
/* 00484DDC 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484DE0 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00484DE4 0320F809 */  jalr  $t9
/* 00484DE8 00000000 */   nop   
/* 00484DEC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484DF0 2404000A */  li    $a0, 10
/* 00484DF4 02001025 */  move  $v0, $s0
/* 00484DF8 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484DFC 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00484E00 0320F809 */  jalr  $t9
/* 00484E04 00000000 */   nop   
/* 00484E08 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484E0C 24040002 */  li    $a0, 2
/* 00484E10 02001025 */  move  $v0, $s0
/* 00484E14 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484E18 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00484E1C 0320F809 */  jalr  $t9
/* 00484E20 00000000 */   nop   
/* 00484E24 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484E28 24040016 */  li    $a0, 22
/* 00484E2C 02001025 */  move  $v0, $s0
/* 00484E30 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484E34 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00484E38 0320F809 */  jalr  $t9
/* 00484E3C 00000000 */   nop   
/* 00484E40 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484E44 2404003E */  li    $a0, 62
/* 00484E48 02001025 */  move  $v0, $s0
/* 00484E4C 8F8E8044 */  lw    $t6, %got(RO_1000E6C4)($gp)
/* 00484E50 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00484E54 25CEE6C4 */  addiu $t6, %lo(RO_1000E6C4) # addiu $t6, $t6, -0x193c
/* 00484E58 89D80000 */  lwl   $t8, ($t6)
/* 00484E5C 99D80003 */  lwr   $t8, 3($t6)
/* 00484E60 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00484E64 ABB80004 */  swl   $t8, 4($sp)
/* 00484E68 BBB80007 */  swr   $t8, 7($sp)
/* 00484E6C 0320F809 */  jalr  $t9
/* 00484E70 8FA50004 */   lw    $a1, 4($sp)
/* 00484E74 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484E78 00002025 */  move  $a0, $zero
/* 00484E7C 02001025 */  move  $v0, $s0
/* 00484E80 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484E84 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00484E88 0320F809 */  jalr  $t9
/* 00484E8C 00000000 */   nop   
/* 00484E90 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484E94 24040001 */  li    $a0, 1
/* 00484E98 02001025 */  move  $v0, $s0
/* 00484E9C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484EA0 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00484EA4 0320F809 */  jalr  $t9
/* 00484EA8 00000000 */   nop   
/* 00484EAC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484EB0 24040005 */  li    $a0, 5
/* 00484EB4 02001025 */  move  $v0, $s0
/* 00484EB8 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484EBC 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00484EC0 0320F809 */  jalr  $t9
/* 00484EC4 00000000 */   nop   
/* 00484EC8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484ECC 2404000D */  li    $a0, 13
/* 00484ED0 02001025 */  move  $v0, $s0
/* 00484ED4 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484ED8 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00484EDC 0320F809 */  jalr  $t9
/* 00484EE0 00000000 */   nop   
/* 00484EE4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484EE8 2404000A */  li    $a0, 10
/* 00484EEC 02001025 */  move  $v0, $s0
/* 00484EF0 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484EF4 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00484EF8 0320F809 */  jalr  $t9
/* 00484EFC 00000000 */   nop   
/* 00484F00 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484F04 24040002 */  li    $a0, 2
/* 00484F08 02001025 */  move  $v0, $s0
/* 00484F0C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484F10 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00484F14 0320F809 */  jalr  $t9
/* 00484F18 00000000 */   nop   
/* 00484F1C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484F20 24040016 */  li    $a0, 22
/* 00484F24 02001025 */  move  $v0, $s0
/* 00484F28 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484F2C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00484F30 0320F809 */  jalr  $t9
/* 00484F34 00000000 */   nop   
/* 00484F38 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484F3C 24040066 */  li    $a0, 102
/* 00484F40 02001025 */  move  $v0, $s0
/* 00484F44 8F998044 */  lw    $t9, %got(RO_1000E6C0)($gp)
/* 00484F48 2739E6C0 */  addiu $t9, %lo(RO_1000E6C0) # addiu $t9, $t9, -0x1940
/* 00484F4C 8B290000 */  lwl   $t1, ($t9)
/* 00484F50 9B290003 */  lwr   $t1, 3($t9)
/* 00484F54 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00484F58 ABA90004 */  swl   $t1, 4($sp)
/* 00484F5C BBA90007 */  swr   $t1, 7($sp)
/* 00484F60 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00484F64 0320F809 */  jalr  $t9
/* 00484F68 8FA50004 */   lw    $a1, 4($sp)
/* 00484F6C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484F70 00002025 */  move  $a0, $zero
/* 00484F74 02001025 */  move  $v0, $s0
/* 00484F78 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484F7C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00484F80 0320F809 */  jalr  $t9
/* 00484F84 00000000 */   nop   
/* 00484F88 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484F8C 24040001 */  li    $a0, 1
/* 00484F90 02001025 */  move  $v0, $s0
/* 00484F94 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484F98 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00484F9C 0320F809 */  jalr  $t9
/* 00484FA0 00000000 */   nop   
/* 00484FA4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484FA8 24040005 */  li    $a0, 5
/* 00484FAC 02001025 */  move  $v0, $s0
/* 00484FB0 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484FB4 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00484FB8 0320F809 */  jalr  $t9
/* 00484FBC 00000000 */   nop   
/* 00484FC0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484FC4 2404000D */  li    $a0, 13
/* 00484FC8 02001025 */  move  $v0, $s0
/* 00484FCC 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484FD0 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00484FD4 0320F809 */  jalr  $t9
/* 00484FD8 00000000 */   nop   
/* 00484FDC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484FE0 2404000A */  li    $a0, 10
/* 00484FE4 02001025 */  move  $v0, $s0
/* 00484FE8 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00484FEC 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00484FF0 0320F809 */  jalr  $t9
/* 00484FF4 00000000 */   nop   
/* 00484FF8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00484FFC 24040002 */  li    $a0, 2
/* 00485000 02001025 */  move  $v0, $s0
/* 00485004 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00485008 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 0048500C 0320F809 */  jalr  $t9
/* 00485010 00000000 */   nop   
/* 00485014 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485018 24040016 */  li    $a0, 22
/* 0048501C 02001025 */  move  $v0, $s0
/* 00485020 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00485024 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00485028 0320F809 */  jalr  $t9
/* 0048502C 00000000 */   nop   
/* 00485030 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485034 2404005A */  li    $a0, 90
/* 00485038 02001025 */  move  $v0, $s0
/* 0048503C 8F8A8044 */  lw    $t2, %got(RO_1000E6BC)($gp)
/* 00485040 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00485044 254AE6BC */  addiu $t2, %lo(RO_1000E6BC) # addiu $t2, $t2, -0x1944
/* 00485048 894C0000 */  lwl   $t4, ($t2)
/* 0048504C 994C0003 */  lwr   $t4, 3($t2)
/* 00485050 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00485054 ABAC0004 */  swl   $t4, 4($sp)
/* 00485058 BBAC0007 */  swr   $t4, 7($sp)
/* 0048505C 0320F809 */  jalr  $t9
/* 00485060 8FA50004 */   lw    $a1, 4($sp)
/* 00485064 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485068 00002025 */  move  $a0, $zero
/* 0048506C 02001025 */  move  $v0, $s0
/* 00485070 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00485074 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00485078 0320F809 */  jalr  $t9
/* 0048507C 00000000 */   nop   
/* 00485080 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485084 24040001 */  li    $a0, 1
/* 00485088 02001025 */  move  $v0, $s0
/* 0048508C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00485090 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00485094 0320F809 */  jalr  $t9
/* 00485098 00000000 */   nop   
/* 0048509C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004850A0 24040005 */  li    $a0, 5
/* 004850A4 02001025 */  move  $v0, $s0
/* 004850A8 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004850AC 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004850B0 0320F809 */  jalr  $t9
/* 004850B4 00000000 */   nop   
/* 004850B8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004850BC 2404000D */  li    $a0, 13
/* 004850C0 02001025 */  move  $v0, $s0
/* 004850C4 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004850C8 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004850CC 0320F809 */  jalr  $t9
/* 004850D0 00000000 */   nop   
/* 004850D4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004850D8 2404000A */  li    $a0, 10
/* 004850DC 02001025 */  move  $v0, $s0
/* 004850E0 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004850E4 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004850E8 0320F809 */  jalr  $t9
/* 004850EC 00000000 */   nop   
/* 004850F0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004850F4 24040002 */  li    $a0, 2
/* 004850F8 02001025 */  move  $v0, $s0
/* 004850FC 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00485100 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00485104 0320F809 */  jalr  $t9
/* 00485108 00000000 */   nop   
/* 0048510C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485110 24040016 */  li    $a0, 22
/* 00485114 02001025 */  move  $v0, $s0
/* 00485118 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 0048511C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00485120 0320F809 */  jalr  $t9
/* 00485124 00000000 */   nop   
/* 00485128 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048512C 24040089 */  li    $a0, 137
/* 00485130 02001025 */  move  $v0, $s0
/* 00485134 8F8D8044 */  lw    $t5, %got(RO_1000E6B8)($gp)
/* 00485138 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 0048513C 25ADE6B8 */  addiu $t5, %lo(RO_1000E6B8) # addiu $t5, $t5, -0x1948
/* 00485140 89AF0000 */  lwl   $t7, ($t5)
/* 00485144 99AF0003 */  lwr   $t7, 3($t5)
/* 00485148 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 0048514C ABAF0004 */  swl   $t7, 4($sp)
/* 00485150 BBAF0007 */  swr   $t7, 7($sp)
/* 00485154 0320F809 */  jalr  $t9
/* 00485158 8FA50004 */   lw    $a1, 4($sp)
/* 0048515C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485160 24040002 */  li    $a0, 2
/* 00485164 02001025 */  move  $v0, $s0
/* 00485168 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 0048516C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00485170 0320F809 */  jalr  $t9
/* 00485174 00000000 */   nop   
/* 00485178 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048517C 2404000E */  li    $a0, 14
/* 00485180 02001025 */  move  $v0, $s0
/* 00485184 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00485188 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 0048518C 0320F809 */  jalr  $t9
/* 00485190 00000000 */   nop   
/* 00485194 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485198 24040013 */  li    $a0, 19
/* 0048519C 02001025 */  move  $v0, $s0
/* 004851A0 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004851A4 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004851A8 0320F809 */  jalr  $t9
/* 004851AC 00000000 */   nop   
/* 004851B0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004851B4 24040016 */  li    $a0, 22
/* 004851B8 02001025 */  move  $v0, $s0
/* 004851BC 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004851C0 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004851C4 0320F809 */  jalr  $t9
/* 004851C8 00000000 */   nop   
/* 004851CC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004851D0 2404008B */  li    $a0, 139
/* 004851D4 02001025 */  move  $v0, $s0
/* 004851D8 8F988044 */  lw    $t8, %got(RO_1000E6B4)($gp)
/* 004851DC 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 004851E0 2718E6B4 */  addiu $t8, %lo(RO_1000E6B4) # addiu $t8, $t8, -0x194c
/* 004851E4 8B080000 */  lwl   $t0, ($t8)
/* 004851E8 9B080003 */  lwr   $t0, 3($t8)
/* 004851EC 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 004851F0 ABA80004 */  swl   $t0, 4($sp)
/* 004851F4 BBA80007 */  swr   $t0, 7($sp)
/* 004851F8 0320F809 */  jalr  $t9
/* 004851FC 8FA50004 */   lw    $a1, 4($sp)
/* 00485200 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485204 00002025 */  move  $a0, $zero
/* 00485208 02001025 */  move  $v0, $s0
/* 0048520C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00485210 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00485214 0320F809 */  jalr  $t9
/* 00485218 00000000 */   nop   
/* 0048521C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485220 24040001 */  li    $a0, 1
/* 00485224 02001025 */  move  $v0, $s0
/* 00485228 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 0048522C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00485230 0320F809 */  jalr  $t9
/* 00485234 00000000 */   nop   
/* 00485238 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048523C 24040005 */  li    $a0, 5
/* 00485240 02001025 */  move  $v0, $s0
/* 00485244 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00485248 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 0048524C 0320F809 */  jalr  $t9
/* 00485250 00000000 */   nop   
/* 00485254 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485258 2404000D */  li    $a0, 13
/* 0048525C 02001025 */  move  $v0, $s0
/* 00485260 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00485264 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00485268 0320F809 */  jalr  $t9
/* 0048526C 00000000 */   nop   
/* 00485270 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485274 2404000A */  li    $a0, 10
/* 00485278 02001025 */  move  $v0, $s0
/* 0048527C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00485280 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00485284 0320F809 */  jalr  $t9
/* 00485288 00000000 */   nop   
/* 0048528C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485290 24040002 */  li    $a0, 2
/* 00485294 02001025 */  move  $v0, $s0
/* 00485298 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 0048529C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004852A0 0320F809 */  jalr  $t9
/* 004852A4 00000000 */   nop   
/* 004852A8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004852AC 24040016 */  li    $a0, 22
/* 004852B0 02001025 */  move  $v0, $s0
/* 004852B4 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004852B8 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004852BC 0320F809 */  jalr  $t9
/* 004852C0 00000000 */   nop   
/* 004852C4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004852C8 24040031 */  li    $a0, 49
/* 004852CC 02001025 */  move  $v0, $s0
/* 004852D0 8F898044 */  lw    $t1, %got(RO_1000E6B0)($gp)
/* 004852D4 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 004852D8 2529E6B0 */  addiu $t1, %lo(RO_1000E6B0) # addiu $t1, $t1, -0x1950
/* 004852DC 892B0000 */  lwl   $t3, ($t1)
/* 004852E0 992B0003 */  lwr   $t3, 3($t1)
/* 004852E4 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 004852E8 ABAB0004 */  swl   $t3, 4($sp)
/* 004852EC BBAB0007 */  swr   $t3, 7($sp)
/* 004852F0 0320F809 */  jalr  $t9
/* 004852F4 8FA50004 */   lw    $a1, 4($sp)
/* 004852F8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004852FC 24040016 */  li    $a0, 22
/* 00485300 02001025 */  move  $v0, $s0
/* 00485304 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00485308 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 0048530C 0320F809 */  jalr  $t9
/* 00485310 00000000 */   nop   
/* 00485314 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485318 2404000A */  li    $a0, 10
/* 0048531C 02001025 */  move  $v0, $s0
/* 00485320 8F8C8044 */  lw    $t4, %got(RO_1000E6AC)($gp)
/* 00485324 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00485328 258CE6AC */  addiu $t4, %lo(RO_1000E6AC) # addiu $t4, $t4, -0x1954
/* 0048532C 898E0000 */  lwl   $t6, ($t4)
/* 00485330 998E0003 */  lwr   $t6, 3($t4)
/* 00485334 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00485338 ABAE0004 */  swl   $t6, 4($sp)
/* 0048533C BBAE0007 */  swr   $t6, 7($sp)
/* 00485340 0320F809 */  jalr  $t9
/* 00485344 8FA50004 */   lw    $a1, 4($sp)
/* 00485348 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048534C 24040016 */  li    $a0, 22
/* 00485350 02001025 */  move  $v0, $s0
/* 00485354 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00485358 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 0048535C 0320F809 */  jalr  $t9
/* 00485360 00000000 */   nop   
/* 00485364 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485368 2404000B */  li    $a0, 11
/* 0048536C 02001025 */  move  $v0, $s0
/* 00485370 8F8F8044 */  lw    $t7, %got(RO_1000E6A8)($gp)
/* 00485374 25EFE6A8 */  addiu $t7, %lo(RO_1000E6A8) # addiu $t7, $t7, -0x1958
/* 00485378 89F90000 */  lwl   $t9, ($t7)
/* 0048537C 99F90003 */  lwr   $t9, 3($t7)
/* 00485380 ABB90004 */  swl   $t9, 4($sp)
/* 00485384 BBB90007 */  swr   $t9, 7($sp)
/* 00485388 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 0048538C 8FA50004 */  lw    $a1, 4($sp)
/* 00485390 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00485394 0320F809 */  jalr  $t9
/* 00485398 00000000 */   nop   
/* 0048539C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004853A0 24040016 */  li    $a0, 22
/* 004853A4 02001025 */  move  $v0, $s0
/* 004853A8 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004853AC 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004853B0 0320F809 */  jalr  $t9
/* 004853B4 00000000 */   nop   
/* 004853B8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004853BC 24040080 */  li    $a0, 128
/* 004853C0 02001025 */  move  $v0, $s0
/* 004853C4 8F888044 */  lw    $t0, %got(RO_1000E6A4)($gp)
/* 004853C8 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 004853CC 2508E6A4 */  addiu $t0, %lo(RO_1000E6A4) # addiu $t0, $t0, -0x195c
/* 004853D0 890A0000 */  lwl   $t2, ($t0)
/* 004853D4 990A0003 */  lwr   $t2, 3($t0)
/* 004853D8 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 004853DC ABAA0004 */  swl   $t2, 4($sp)
/* 004853E0 BBAA0007 */  swr   $t2, 7($sp)
/* 004853E4 0320F809 */  jalr  $t9
/* 004853E8 8FA50004 */   lw    $a1, 4($sp)
/* 004853EC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004853F0 00002025 */  move  $a0, $zero
/* 004853F4 02001025 */  move  $v0, $s0
/* 004853F8 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004853FC 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00485400 0320F809 */  jalr  $t9
/* 00485404 00000000 */   nop   
/* 00485408 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048540C 2404000E */  li    $a0, 14
/* 00485410 02001025 */  move  $v0, $s0
/* 00485414 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00485418 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 0048541C 0320F809 */  jalr  $t9
/* 00485420 00000000 */   nop   
/* 00485424 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485428 24040016 */  li    $a0, 22
/* 0048542C 02001025 */  move  $v0, $s0
/* 00485430 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00485434 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00485438 0320F809 */  jalr  $t9
/* 0048543C 00000000 */   nop   
/* 00485440 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485444 24040085 */  li    $a0, 133
/* 00485448 02001025 */  move  $v0, $s0
/* 0048544C 8F8B8044 */  lw    $t3, %got(RO_1000E6A0)($gp)
/* 00485450 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00485454 256BE6A0 */  addiu $t3, %lo(RO_1000E6A0) # addiu $t3, $t3, -0x1960
/* 00485458 896D0000 */  lwl   $t5, ($t3)
/* 0048545C 996D0003 */  lwr   $t5, 3($t3)
/* 00485460 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00485464 ABAD0004 */  swl   $t5, 4($sp)
/* 00485468 BBAD0007 */  swr   $t5, 7($sp)
/* 0048546C 0320F809 */  jalr  $t9
/* 00485470 8FA50004 */   lw    $a1, 4($sp)
/* 00485474 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485478 00002025 */  move  $a0, $zero
/* 0048547C 02001025 */  move  $v0, $s0
/* 00485480 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00485484 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00485488 0320F809 */  jalr  $t9
/* 0048548C 00000000 */   nop   
/* 00485490 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485494 2404000E */  li    $a0, 14
/* 00485498 02001025 */  move  $v0, $s0
/* 0048549C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004854A0 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004854A4 0320F809 */  jalr  $t9
/* 004854A8 00000000 */   nop   
/* 004854AC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004854B0 24040016 */  li    $a0, 22
/* 004854B4 02001025 */  move  $v0, $s0
/* 004854B8 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004854BC 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004854C0 0320F809 */  jalr  $t9
/* 004854C4 00000000 */   nop   
/* 004854C8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004854CC 24040084 */  li    $a0, 132
/* 004854D0 02001025 */  move  $v0, $s0
/* 004854D4 8F8E8044 */  lw    $t6, %got(RO_1000E69C)($gp)
/* 004854D8 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 004854DC 25CEE69C */  addiu $t6, %lo(RO_1000E69C) # addiu $t6, $t6, -0x1964
/* 004854E0 89D80000 */  lwl   $t8, ($t6)
/* 004854E4 99D80003 */  lwr   $t8, 3($t6)
/* 004854E8 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 004854EC ABB80004 */  swl   $t8, 4($sp)
/* 004854F0 BBB80007 */  swr   $t8, 7($sp)
/* 004854F4 0320F809 */  jalr  $t9
/* 004854F8 8FA50004 */   lw    $a1, 4($sp)
/* 004854FC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485500 00002025 */  move  $a0, $zero
/* 00485504 02001025 */  move  $v0, $s0
/* 00485508 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 0048550C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00485510 0320F809 */  jalr  $t9
/* 00485514 00000000 */   nop   
/* 00485518 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048551C 2404000E */  li    $a0, 14
/* 00485520 02001025 */  move  $v0, $s0
/* 00485524 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00485528 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 0048552C 0320F809 */  jalr  $t9
/* 00485530 00000000 */   nop   
/* 00485534 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485538 24040016 */  li    $a0, 22
/* 0048553C 02001025 */  move  $v0, $s0
/* 00485540 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00485544 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00485548 0320F809 */  jalr  $t9
/* 0048554C 00000000 */   nop   
/* 00485550 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485554 24040082 */  li    $a0, 130
/* 00485558 02001025 */  move  $v0, $s0
/* 0048555C 8F998044 */  lw    $t9, %got(RO_1000E698)($gp)
/* 00485560 2739E698 */  addiu $t9, %lo(RO_1000E698) # addiu $t9, $t9, -0x1968
/* 00485564 8B290000 */  lwl   $t1, ($t9)
/* 00485568 9B290003 */  lwr   $t1, 3($t9)
/* 0048556C 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00485570 ABA90004 */  swl   $t1, 4($sp)
/* 00485574 BBA90007 */  swr   $t1, 7($sp)
/* 00485578 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 0048557C 0320F809 */  jalr  $t9
/* 00485580 8FA50004 */   lw    $a1, 4($sp)
/* 00485584 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485588 00002025 */  move  $a0, $zero
/* 0048558C 02001025 */  move  $v0, $s0
/* 00485590 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00485594 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00485598 0320F809 */  jalr  $t9
/* 0048559C 00000000 */   nop   
/* 004855A0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004855A4 2404000E */  li    $a0, 14
/* 004855A8 02001025 */  move  $v0, $s0
/* 004855AC 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004855B0 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004855B4 0320F809 */  jalr  $t9
/* 004855B8 00000000 */   nop   
/* 004855BC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004855C0 24040016 */  li    $a0, 22
/* 004855C4 02001025 */  move  $v0, $s0
/* 004855C8 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004855CC 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004855D0 0320F809 */  jalr  $t9
/* 004855D4 00000000 */   nop   
/* 004855D8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004855DC 24040081 */  li    $a0, 129
/* 004855E0 02001025 */  move  $v0, $s0
/* 004855E4 8F8A8044 */  lw    $t2, %got(RO_1000E694)($gp)
/* 004855E8 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 004855EC 254AE694 */  addiu $t2, %lo(RO_1000E694) # addiu $t2, $t2, -0x196c
/* 004855F0 894C0000 */  lwl   $t4, ($t2)
/* 004855F4 994C0003 */  lwr   $t4, 3($t2)
/* 004855F8 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 004855FC ABAC0004 */  swl   $t4, 4($sp)
/* 00485600 BBAC0007 */  swr   $t4, 7($sp)
/* 00485604 0320F809 */  jalr  $t9
/* 00485608 8FA50004 */   lw    $a1, 4($sp)
/* 0048560C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485610 00002025 */  move  $a0, $zero
/* 00485614 02001025 */  move  $v0, $s0
/* 00485618 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 0048561C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00485620 0320F809 */  jalr  $t9
/* 00485624 00000000 */   nop   
/* 00485628 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048562C 2404000E */  li    $a0, 14
/* 00485630 02001025 */  move  $v0, $s0
/* 00485634 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00485638 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 0048563C 0320F809 */  jalr  $t9
/* 00485640 00000000 */   nop   
/* 00485644 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485648 24040016 */  li    $a0, 22
/* 0048564C 02001025 */  move  $v0, $s0
/* 00485650 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00485654 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00485658 0320F809 */  jalr  $t9
/* 0048565C 00000000 */   nop   
/* 00485660 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485664 24040083 */  li    $a0, 131
/* 00485668 02001025 */  move  $v0, $s0
/* 0048566C 8F8D8044 */  lw    $t5, %got(RO_1000E690)($gp)
/* 00485670 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00485674 25ADE690 */  addiu $t5, %lo(RO_1000E690) # addiu $t5, $t5, -0x1970
/* 00485678 89AF0000 */  lwl   $t7, ($t5)
/* 0048567C 99AF0003 */  lwr   $t7, 3($t5)
/* 00485680 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00485684 ABAF0004 */  swl   $t7, 4($sp)
/* 00485688 BBAF0007 */  swr   $t7, 7($sp)
/* 0048568C 0320F809 */  jalr  $t9
/* 00485690 8FA50004 */   lw    $a1, 4($sp)
/* 00485694 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485698 00002025 */  move  $a0, $zero
/* 0048569C 02001025 */  move  $v0, $s0
/* 004856A0 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004856A4 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004856A8 0320F809 */  jalr  $t9
/* 004856AC 00000000 */   nop   
/* 004856B0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004856B4 2404000E */  li    $a0, 14
/* 004856B8 02001025 */  move  $v0, $s0
/* 004856BC 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004856C0 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004856C4 0320F809 */  jalr  $t9
/* 004856C8 00000000 */   nop   
/* 004856CC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004856D0 24040016 */  li    $a0, 22
/* 004856D4 02001025 */  move  $v0, $s0
/* 004856D8 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004856DC 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004856E0 0320F809 */  jalr  $t9
/* 004856E4 00000000 */   nop   
/* 004856E8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004856EC 24040087 */  li    $a0, 135
/* 004856F0 02001025 */  move  $v0, $s0
/* 004856F4 8F988044 */  lw    $t8, %got(RO_1000E68C)($gp)
/* 004856F8 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 004856FC 2718E68C */  addiu $t8, %lo(RO_1000E68C) # addiu $t8, $t8, -0x1974
/* 00485700 8B080000 */  lwl   $t0, ($t8)
/* 00485704 9B080003 */  lwr   $t0, 3($t8)
/* 00485708 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 0048570C ABA80004 */  swl   $t0, 4($sp)
/* 00485710 BBA80007 */  swr   $t0, 7($sp)
/* 00485714 0320F809 */  jalr  $t9
/* 00485718 8FA50004 */   lw    $a1, 4($sp)
/* 0048571C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485720 24040016 */  li    $a0, 22
/* 00485724 02001025 */  move  $v0, $s0
/* 00485728 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 0048572C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00485730 0320F809 */  jalr  $t9
/* 00485734 00000000 */   nop   
/* 00485738 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048573C 24040045 */  li    $a0, 69
/* 00485740 02001025 */  move  $v0, $s0
/* 00485744 8F898044 */  lw    $t1, %got(RO_1000E688)($gp)
/* 00485748 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 0048574C 2529E688 */  addiu $t1, %lo(RO_1000E688) # addiu $t1, $t1, -0x1978
/* 00485750 892B0000 */  lwl   $t3, ($t1)
/* 00485754 992B0003 */  lwr   $t3, 3($t1)
/* 00485758 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 0048575C ABAB0004 */  swl   $t3, 4($sp)
/* 00485760 BBAB0007 */  swr   $t3, 7($sp)
/* 00485764 0320F809 */  jalr  $t9
/* 00485768 8FA50004 */   lw    $a1, 4($sp)
/* 0048576C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485770 2404000E */  li    $a0, 14
/* 00485774 02001025 */  move  $v0, $s0
/* 00485778 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 0048577C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00485780 0320F809 */  jalr  $t9
/* 00485784 00000000 */   nop   
/* 00485788 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048578C 24040016 */  li    $a0, 22
/* 00485790 02001025 */  move  $v0, $s0
/* 00485794 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00485798 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 0048579C 0320F809 */  jalr  $t9
/* 004857A0 00000000 */   nop   
/* 004857A4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004857A8 24040044 */  li    $a0, 68
/* 004857AC 02001025 */  move  $v0, $s0
/* 004857B0 8F8C8044 */  lw    $t4, %got(RO_1000E684)($gp)
/* 004857B4 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 004857B8 258CE684 */  addiu $t4, %lo(RO_1000E684) # addiu $t4, $t4, -0x197c
/* 004857BC 898E0000 */  lwl   $t6, ($t4)
/* 004857C0 998E0003 */  lwr   $t6, 3($t4)
/* 004857C4 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 004857C8 ABAE0004 */  swl   $t6, 4($sp)
/* 004857CC BBAE0007 */  swr   $t6, 7($sp)
/* 004857D0 0320F809 */  jalr  $t9
/* 004857D4 8FA50004 */   lw    $a1, 4($sp)
/* 004857D8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004857DC 24040002 */  li    $a0, 2
/* 004857E0 02001025 */  move  $v0, $s0
/* 004857E4 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004857E8 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004857EC 0320F809 */  jalr  $t9
/* 004857F0 00000000 */   nop   
/* 004857F4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004857F8 24040016 */  li    $a0, 22
/* 004857FC 02001025 */  move  $v0, $s0
/* 00485800 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00485804 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00485808 0320F809 */  jalr  $t9
/* 0048580C 00000000 */   nop   
/* 00485810 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485814 24040054 */  li    $a0, 84
/* 00485818 02001025 */  move  $v0, $s0
/* 0048581C 8F8F8044 */  lw    $t7, %got(RO_1000E680)($gp)
/* 00485820 25EFE680 */  addiu $t7, %lo(RO_1000E680) # addiu $t7, $t7, -0x1980
/* 00485824 89F90000 */  lwl   $t9, ($t7)
/* 00485828 99F90003 */  lwr   $t9, 3($t7)
/* 0048582C ABB90004 */  swl   $t9, 4($sp)
/* 00485830 BBB90007 */  swr   $t9, 7($sp)
/* 00485834 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00485838 8FA50004 */  lw    $a1, 4($sp)
/* 0048583C 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00485840 0320F809 */  jalr  $t9
/* 00485844 00000000 */   nop   
/* 00485848 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048584C 24040016 */  li    $a0, 22
/* 00485850 02001025 */  move  $v0, $s0
/* 00485854 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00485858 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 0048585C 0320F809 */  jalr  $t9
/* 00485860 00000000 */   nop   
/* 00485864 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485868 2404004C */  li    $a0, 76
/* 0048586C 02001025 */  move  $v0, $s0
/* 00485870 8F888044 */  lw    $t0, %got(RO_1000E67C)($gp)
/* 00485874 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00485878 2508E67C */  addiu $t0, %lo(RO_1000E67C) # addiu $t0, $t0, -0x1984
/* 0048587C 890A0000 */  lwl   $t2, ($t0)
/* 00485880 990A0003 */  lwr   $t2, 3($t0)
/* 00485884 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00485888 ABAA0004 */  swl   $t2, 4($sp)
/* 0048588C BBAA0007 */  swr   $t2, 7($sp)
/* 00485890 0320F809 */  jalr  $t9
/* 00485894 8FA50004 */   lw    $a1, 4($sp)
/* 00485898 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048589C 24040016 */  li    $a0, 22
/* 004858A0 02001025 */  move  $v0, $s0
/* 004858A4 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004858A8 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004858AC 0320F809 */  jalr  $t9
/* 004858B0 00000000 */   nop   
/* 004858B4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004858B8 24040078 */  li    $a0, 120
/* 004858BC 02001025 */  move  $v0, $s0
/* 004858C0 8F8B8044 */  lw    $t3, %got(RO_1000E678)($gp)
/* 004858C4 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 004858C8 256BE678 */  addiu $t3, %lo(RO_1000E678) # addiu $t3, $t3, -0x1988
/* 004858CC 896D0000 */  lwl   $t5, ($t3)
/* 004858D0 996D0003 */  lwr   $t5, 3($t3)
/* 004858D4 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 004858D8 ABAD0004 */  swl   $t5, 4($sp)
/* 004858DC BBAD0007 */  swr   $t5, 7($sp)
/* 004858E0 0320F809 */  jalr  $t9
/* 004858E4 8FA50004 */   lw    $a1, 4($sp)
/* 004858E8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004858EC 00002025 */  move  $a0, $zero
/* 004858F0 02001025 */  move  $v0, $s0
/* 004858F4 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004858F8 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004858FC 0320F809 */  jalr  $t9
/* 00485900 00000000 */   nop   
/* 00485904 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485908 24040005 */  li    $a0, 5
/* 0048590C 02001025 */  move  $v0, $s0
/* 00485910 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00485914 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00485918 0320F809 */  jalr  $t9
/* 0048591C 00000000 */   nop   
/* 00485920 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485924 24040002 */  li    $a0, 2
/* 00485928 02001025 */  move  $v0, $s0
/* 0048592C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00485930 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00485934 0320F809 */  jalr  $t9
/* 00485938 00000000 */   nop   
/* 0048593C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485940 2404000B */  li    $a0, 11
/* 00485944 02001025 */  move  $v0, $s0
/* 00485948 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 0048594C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00485950 0320F809 */  jalr  $t9
/* 00485954 00000000 */   nop   
/* 00485958 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048595C 24040016 */  li    $a0, 22
/* 00485960 02001025 */  move  $v0, $s0
/* 00485964 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00485968 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 0048596C 0320F809 */  jalr  $t9
/* 00485970 00000000 */   nop   
/* 00485974 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485978 24040075 */  li    $a0, 117
/* 0048597C 02001025 */  move  $v0, $s0
/* 00485980 8F8E8044 */  lw    $t6, %got(RO_1000E674)($gp)
/* 00485984 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00485988 25CEE674 */  addiu $t6, %lo(RO_1000E674) # addiu $t6, $t6, -0x198c
/* 0048598C 89D80000 */  lwl   $t8, ($t6)
/* 00485990 99D80003 */  lwr   $t8, 3($t6)
/* 00485994 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00485998 ABB80004 */  swl   $t8, 4($sp)
/* 0048599C BBB80007 */  swr   $t8, 7($sp)
/* 004859A0 0320F809 */  jalr  $t9
/* 004859A4 8FA50004 */   lw    $a1, 4($sp)
/* 004859A8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004859AC 00002025 */  move  $a0, $zero
/* 004859B0 02001025 */  move  $v0, $s0
/* 004859B4 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004859B8 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004859BC 0320F809 */  jalr  $t9
/* 004859C0 00000000 */   nop   
/* 004859C4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004859C8 24040016 */  li    $a0, 22
/* 004859CC 02001025 */  move  $v0, $s0
/* 004859D0 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 004859D4 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 004859D8 0320F809 */  jalr  $t9
/* 004859DC 00000000 */   nop   
/* 004859E0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004859E4 24040091 */  li    $a0, 145
/* 004859E8 02001025 */  move  $v0, $s0
/* 004859EC 8F998044 */  lw    $t9, %got(RO_1000E670)($gp)
/* 004859F0 2739E670 */  addiu $t9, %lo(RO_1000E670) # addiu $t9, $t9, -0x1990
/* 004859F4 8B290000 */  lwl   $t1, ($t9)
/* 004859F8 9B290003 */  lwr   $t1, 3($t9)
/* 004859FC 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00485A00 ABA90004 */  swl   $t1, 4($sp)
/* 00485A04 BBA90007 */  swr   $t1, 7($sp)
/* 00485A08 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00485A0C 0320F809 */  jalr  $t9
/* 00485A10 8FA50004 */   lw    $a1, 4($sp)
/* 00485A14 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485A18 00002025 */  move  $a0, $zero
/* 00485A1C 02001025 */  move  $v0, $s0
/* 00485A20 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00485A24 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00485A28 0320F809 */  jalr  $t9
/* 00485A2C 00000000 */   nop   
/* 00485A30 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485A34 24040002 */  li    $a0, 2
/* 00485A38 02001025 */  move  $v0, $s0
/* 00485A3C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00485A40 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00485A44 0320F809 */  jalr  $t9
/* 00485A48 00000000 */   nop   
/* 00485A4C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485A50 2404000A */  li    $a0, 10
/* 00485A54 02001025 */  move  $v0, $s0
/* 00485A58 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00485A5C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00485A60 0320F809 */  jalr  $t9
/* 00485A64 00000000 */   nop   
/* 00485A68 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485A6C 2404000D */  li    $a0, 13
/* 00485A70 02001025 */  move  $v0, $s0
/* 00485A74 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00485A78 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00485A7C 0320F809 */  jalr  $t9
/* 00485A80 00000000 */   nop   
/* 00485A84 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485A88 24040016 */  li    $a0, 22
/* 00485A8C 02001025 */  move  $v0, $s0
/* 00485A90 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00485A94 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00485A98 0320F809 */  jalr  $t9
/* 00485A9C 00000000 */   nop   
/* 00485AA0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485AA4 24040092 */  li    $a0, 146
/* 00485AA8 02001025 */  move  $v0, $s0
/* 00485AAC 8F8A8044 */  lw    $t2, %got(RO_1000E66C)($gp)
/* 00485AB0 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00485AB4 254AE66C */  addiu $t2, %lo(RO_1000E66C) # addiu $t2, $t2, -0x1994
/* 00485AB8 894C0000 */  lwl   $t4, ($t2)
/* 00485ABC 994C0003 */  lwr   $t4, 3($t2)
/* 00485AC0 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00485AC4 ABAC0004 */  swl   $t4, 4($sp)
/* 00485AC8 BBAC0007 */  swr   $t4, 7($sp)
/* 00485ACC 0320F809 */  jalr  $t9
/* 00485AD0 8FA50004 */   lw    $a1, 4($sp)
/* 00485AD4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485AD8 00002025 */  move  $a0, $zero
/* 00485ADC 02001025 */  move  $v0, $s0
/* 00485AE0 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00485AE4 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00485AE8 0320F809 */  jalr  $t9
/* 00485AEC 00000000 */   nop   
/* 00485AF0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485AF4 24040002 */  li    $a0, 2
/* 00485AF8 02001025 */  move  $v0, $s0
/* 00485AFC 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00485B00 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00485B04 0320F809 */  jalr  $t9
/* 00485B08 00000000 */   nop   
/* 00485B0C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485B10 2404000A */  li    $a0, 10
/* 00485B14 02001025 */  move  $v0, $s0
/* 00485B18 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00485B1C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00485B20 0320F809 */  jalr  $t9
/* 00485B24 00000000 */   nop   
/* 00485B28 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485B2C 2404000D */  li    $a0, 13
/* 00485B30 02001025 */  move  $v0, $s0
/* 00485B34 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00485B38 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00485B3C 0320F809 */  jalr  $t9
/* 00485B40 00000000 */   nop   
/* 00485B44 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485B48 24040016 */  li    $a0, 22
/* 00485B4C 02001025 */  move  $v0, $s0
/* 00485B50 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00485B54 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00485B58 0320F809 */  jalr  $t9
/* 00485B5C 00000000 */   nop   
/* 00485B60 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485B64 24040093 */  li    $a0, 147
/* 00485B68 02001025 */  move  $v0, $s0
/* 00485B6C 8F8D8044 */  lw    $t5, %got(RO_1000E668)($gp)
/* 00485B70 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00485B74 25ADE668 */  addiu $t5, %lo(RO_1000E668) # addiu $t5, $t5, -0x1998
/* 00485B78 89AF0000 */  lwl   $t7, ($t5)
/* 00485B7C 99AF0003 */  lwr   $t7, 3($t5)
/* 00485B80 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00485B84 ABAF0004 */  swl   $t7, 4($sp)
/* 00485B88 BBAF0007 */  swr   $t7, 7($sp)
/* 00485B8C 0320F809 */  jalr  $t9
/* 00485B90 8FA50004 */   lw    $a1, 4($sp)
/* 00485B94 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485B98 00002025 */  move  $a0, $zero
/* 00485B9C 02001025 */  move  $v0, $s0
/* 00485BA0 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00485BA4 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00485BA8 0320F809 */  jalr  $t9
/* 00485BAC 00000000 */   nop   
/* 00485BB0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485BB4 24040005 */  li    $a0, 5
/* 00485BB8 02001025 */  move  $v0, $s0
/* 00485BBC 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00485BC0 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00485BC4 0320F809 */  jalr  $t9
/* 00485BC8 00000000 */   nop   
/* 00485BCC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485BD0 24040002 */  li    $a0, 2
/* 00485BD4 02001025 */  move  $v0, $s0
/* 00485BD8 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00485BDC 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00485BE0 0320F809 */  jalr  $t9
/* 00485BE4 00000000 */   nop   
/* 00485BE8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485BEC 2404000A */  li    $a0, 10
/* 00485BF0 02001025 */  move  $v0, $s0
/* 00485BF4 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00485BF8 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00485BFC 0320F809 */  jalr  $t9
/* 00485C00 00000000 */   nop   
/* 00485C04 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485C08 24040016 */  li    $a0, 22
/* 00485C0C 02001025 */  move  $v0, $s0
/* 00485C10 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00485C14 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00485C18 0320F809 */  jalr  $t9
/* 00485C1C 00000000 */   nop   
/* 00485C20 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485C24 24040094 */  li    $a0, 148
/* 00485C28 02001025 */  move  $v0, $s0
/* 00485C2C 8F988044 */  lw    $t8, %got(RO_1000E664)($gp)
/* 00485C30 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00485C34 2718E664 */  addiu $t8, %lo(RO_1000E664) # addiu $t8, $t8, -0x199c
/* 00485C38 8B080000 */  lwl   $t0, ($t8)
/* 00485C3C 9B080003 */  lwr   $t0, 3($t8)
/* 00485C40 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00485C44 ABA80004 */  swl   $t0, 4($sp)
/* 00485C48 BBA80007 */  swr   $t0, 7($sp)
/* 00485C4C 0320F809 */  jalr  $t9
/* 00485C50 8FA50004 */   lw    $a1, 4($sp)
/* 00485C54 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485C58 00002025 */  move  $a0, $zero
/* 00485C5C 02001025 */  move  $v0, $s0
/* 00485C60 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00485C64 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00485C68 0320F809 */  jalr  $t9
/* 00485C6C 00000000 */   nop   
/* 00485C70 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485C74 24040005 */  li    $a0, 5
/* 00485C78 02001025 */  move  $v0, $s0
/* 00485C7C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00485C80 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00485C84 0320F809 */  jalr  $t9
/* 00485C88 00000000 */   nop   
/* 00485C8C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485C90 24040002 */  li    $a0, 2
/* 00485C94 02001025 */  move  $v0, $s0
/* 00485C98 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00485C9C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00485CA0 0320F809 */  jalr  $t9
/* 00485CA4 00000000 */   nop   
/* 00485CA8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485CAC 2404000A */  li    $a0, 10
/* 00485CB0 02001025 */  move  $v0, $s0
/* 00485CB4 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00485CB8 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00485CBC 0320F809 */  jalr  $t9
/* 00485CC0 00000000 */   nop   
/* 00485CC4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485CC8 24040016 */  li    $a0, 22
/* 00485CCC 02001025 */  move  $v0, $s0
/* 00485CD0 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00485CD4 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00485CD8 0320F809 */  jalr  $t9
/* 00485CDC 00000000 */   nop   
/* 00485CE0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485CE4 24040095 */  li    $a0, 149
/* 00485CE8 02001025 */  move  $v0, $s0
/* 00485CEC 8F898044 */  lw    $t1, %got(RO_1000E660)($gp)
/* 00485CF0 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00485CF4 2529E660 */  addiu $t1, %lo(RO_1000E660) # addiu $t1, $t1, -0x19a0
/* 00485CF8 892B0000 */  lwl   $t3, ($t1)
/* 00485CFC 992B0003 */  lwr   $t3, 3($t1)
/* 00485D00 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00485D04 ABAB0004 */  swl   $t3, 4($sp)
/* 00485D08 BBAB0007 */  swr   $t3, 7($sp)
/* 00485D0C 0320F809 */  jalr  $t9
/* 00485D10 8FA50004 */   lw    $a1, 4($sp)
/* 00485D14 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485D18 00002025 */  move  $a0, $zero
/* 00485D1C 02001025 */  move  $v0, $s0
/* 00485D20 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00485D24 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00485D28 0320F809 */  jalr  $t9
/* 00485D2C 00000000 */   nop   
/* 00485D30 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485D34 2404000A */  li    $a0, 10
/* 00485D38 02001025 */  move  $v0, $s0
/* 00485D3C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00485D40 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00485D44 0320F809 */  jalr  $t9
/* 00485D48 00000000 */   nop   
/* 00485D4C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485D50 24040005 */  li    $a0, 5
/* 00485D54 02001025 */  move  $v0, $s0
/* 00485D58 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00485D5C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00485D60 0320F809 */  jalr  $t9
/* 00485D64 00000000 */   nop   
/* 00485D68 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485D6C 24040016 */  li    $a0, 22
/* 00485D70 02001025 */  move  $v0, $s0
/* 00485D74 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00485D78 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00485D7C 0320F809 */  jalr  $t9
/* 00485D80 00000000 */   nop   
/* 00485D84 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485D88 24040097 */  li    $a0, 151
/* 00485D8C 02001025 */  move  $v0, $s0
/* 00485D90 8F8C8044 */  lw    $t4, %got(RO_1000E65C)($gp)
/* 00485D94 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00485D98 258CE65C */  addiu $t4, %lo(RO_1000E65C) # addiu $t4, $t4, -0x19a4
/* 00485D9C 898E0000 */  lwl   $t6, ($t4)
/* 00485DA0 998E0003 */  lwr   $t6, 3($t4)
/* 00485DA4 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00485DA8 ABAE0004 */  swl   $t6, 4($sp)
/* 00485DAC BBAE0007 */  swr   $t6, 7($sp)
/* 00485DB0 0320F809 */  jalr  $t9
/* 00485DB4 8FA50004 */   lw    $a1, 4($sp)
/* 00485DB8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485DBC 00002025 */  move  $a0, $zero
/* 00485DC0 02001025 */  move  $v0, $s0
/* 00485DC4 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00485DC8 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00485DCC 0320F809 */  jalr  $t9
/* 00485DD0 00000000 */   nop   
/* 00485DD4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485DD8 24040005 */  li    $a0, 5
/* 00485DDC 02001025 */  move  $v0, $s0
/* 00485DE0 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00485DE4 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00485DE8 0320F809 */  jalr  $t9
/* 00485DEC 00000000 */   nop   
/* 00485DF0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485DF4 24040007 */  li    $a0, 7
/* 00485DF8 02001025 */  move  $v0, $s0
/* 00485DFC 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00485E00 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00485E04 0320F809 */  jalr  $t9
/* 00485E08 00000000 */   nop   
/* 00485E0C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485E10 24040008 */  li    $a0, 8
/* 00485E14 02001025 */  move  $v0, $s0
/* 00485E18 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00485E1C 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00485E20 0320F809 */  jalr  $t9
/* 00485E24 00000000 */   nop   
/* 00485E28 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485E2C 24040009 */  li    $a0, 9
/* 00485E30 02001025 */  move  $v0, $s0
/* 00485E34 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00485E38 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00485E3C 0320F809 */  jalr  $t9
/* 00485E40 00000000 */   nop   
/* 00485E44 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485E48 24040016 */  li    $a0, 22
/* 00485E4C 02001025 */  move  $v0, $s0
/* 00485E50 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00485E54 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00485E58 0320F809 */  jalr  $t9
/* 00485E5C 00000000 */   nop   
/* 00485E60 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485E64 24040096 */  li    $a0, 150
/* 00485E68 02001025 */  move  $v0, $s0
/* 00485E6C 8F8F8044 */  lw    $t7, %got(RO_1000E658)($gp)
/* 00485E70 25EFE658 */  addiu $t7, %lo(RO_1000E658) # addiu $t7, $t7, -0x19a8
/* 00485E74 89F90000 */  lwl   $t9, ($t7)
/* 00485E78 99F90003 */  lwr   $t9, 3($t7)
/* 00485E7C ABB90004 */  swl   $t9, 4($sp)
/* 00485E80 BBB90007 */  swr   $t9, 7($sp)
/* 00485E84 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00485E88 8FA50004 */  lw    $a1, 4($sp)
/* 00485E8C 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00485E90 0320F809 */  jalr  $t9
/* 00485E94 00000000 */   nop   
/* 00485E98 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485E9C 24040005 */  li    $a0, 5
/* 00485EA0 02001025 */  move  $v0, $s0
/* 00485EA4 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00485EA8 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00485EAC 0320F809 */  jalr  $t9
/* 00485EB0 00000000 */   nop   
/* 00485EB4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485EB8 2404000D */  li    $a0, 13
/* 00485EBC 02001025 */  move  $v0, $s0
/* 00485EC0 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00485EC4 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00485EC8 0320F809 */  jalr  $t9
/* 00485ECC 00000000 */   nop   
/* 00485ED0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485ED4 24040002 */  li    $a0, 2
/* 00485ED8 02001025 */  move  $v0, $s0
/* 00485EDC 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00485EE0 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00485EE4 0320F809 */  jalr  $t9
/* 00485EE8 00000000 */   nop   
/* 00485EEC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485EF0 2404000A */  li    $a0, 10
/* 00485EF4 02001025 */  move  $v0, $s0
/* 00485EF8 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00485EFC 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00485F00 0320F809 */  jalr  $t9
/* 00485F04 00000000 */   nop   
/* 00485F08 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485F0C 24040016 */  li    $a0, 22
/* 00485F10 02001025 */  move  $v0, $s0
/* 00485F14 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00485F18 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00485F1C 0320F809 */  jalr  $t9
/* 00485F20 00000000 */   nop   
/* 00485F24 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485F28 24040098 */  li    $a0, 152
/* 00485F2C 02001025 */  move  $v0, $s0
/* 00485F30 8F888044 */  lw    $t0, %got(RO_1000E654)($gp)
/* 00485F34 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00485F38 2508E654 */  addiu $t0, %lo(RO_1000E654) # addiu $t0, $t0, -0x19ac
/* 00485F3C 890A0000 */  lwl   $t2, ($t0)
/* 00485F40 990A0003 */  lwr   $t2, 3($t0)
/* 00485F44 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00485F48 ABAA0004 */  swl   $t2, 4($sp)
/* 00485F4C BBAA0007 */  swr   $t2, 7($sp)
/* 00485F50 0320F809 */  jalr  $t9
/* 00485F54 8FA50004 */   lw    $a1, 4($sp)
/* 00485F58 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485F5C 24040005 */  li    $a0, 5
/* 00485F60 02001025 */  move  $v0, $s0
/* 00485F64 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00485F68 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00485F6C 0320F809 */  jalr  $t9
/* 00485F70 00000000 */   nop   
/* 00485F74 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485F78 2404000D */  li    $a0, 13
/* 00485F7C 02001025 */  move  $v0, $s0
/* 00485F80 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00485F84 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00485F88 0320F809 */  jalr  $t9
/* 00485F8C 00000000 */   nop   
/* 00485F90 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485F94 24040002 */  li    $a0, 2
/* 00485F98 02001025 */  move  $v0, $s0
/* 00485F9C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00485FA0 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00485FA4 0320F809 */  jalr  $t9
/* 00485FA8 00000000 */   nop   
/* 00485FAC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485FB0 2404000A */  li    $a0, 10
/* 00485FB4 02001025 */  move  $v0, $s0
/* 00485FB8 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00485FBC 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00485FC0 0320F809 */  jalr  $t9
/* 00485FC4 00000000 */   nop   
/* 00485FC8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485FCC 24040016 */  li    $a0, 22
/* 00485FD0 02001025 */  move  $v0, $s0
/* 00485FD4 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00485FD8 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00485FDC 0320F809 */  jalr  $t9
/* 00485FE0 00000000 */   nop   
/* 00485FE4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00485FE8 24040099 */  li    $a0, 153
/* 00485FEC 02001025 */  move  $v0, $s0
/* 00485FF0 8F8B8044 */  lw    $t3, %got(RO_1000E650)($gp)
/* 00485FF4 8F998034 */  lw    $t9, %got(func_004808D0)($gp)
/* 00485FF8 256BE650 */  addiu $t3, %lo(RO_1000E650) # addiu $t3, $t3, -0x19b0
/* 00485FFC 896D0000 */  lwl   $t5, ($t3)
/* 00486000 996D0003 */  lwr   $t5, 3($t3)
/* 00486004 273908D0 */  addiu $t9, %lo(func_004808D0) # addiu $t9, $t9, 0x8d0
/* 00486008 ABAD0004 */  swl   $t5, 4($sp)
/* 0048600C BBAD0007 */  swr   $t5, 7($sp)
/* 00486010 0320F809 */  jalr  $t9
/* 00486014 8FA50004 */   lw    $a1, 4($sp)
/* 00486018 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048601C 24040005 */  li    $a0, 5
/* 00486020 02001025 */  move  $v0, $s0
/* 00486024 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00486028 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 0048602C 0320F809 */  jalr  $t9
/* 00486030 00000000 */   nop   
/* 00486034 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00486038 2404000D */  li    $a0, 13
/* 0048603C 02001025 */  move  $v0, $s0
/* 00486040 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00486044 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00486048 0320F809 */  jalr  $t9
/* 0048604C 00000000 */   nop   
/* 00486050 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00486054 24040016 */  li    $a0, 22
/* 00486058 02001025 */  move  $v0, $s0
/* 0048605C 8F998034 */  lw    $t9, %got(func_00480920)($gp)
/* 00486060 27390920 */  addiu $t9, %lo(func_00480920) # addiu $t9, $t9, 0x920
/* 00486064 0320F809 */  jalr  $t9
/* 00486068 00000000 */   nop   
/* 0048606C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00486070 24050002 */  li    $a1, 2
/* 00486074 8F828DEC */  lw     $v0, %got(utab)($gp)
/* 00486078 24430B94 */  addiu $v1, $v0, 0xb94
.L0048607C:
/* 0048607C 2442004C */  addiu $v0, $v0, 0x4c
/* 00486080 A040FFC2 */  sb    $zero, -0x3e($v0)
/* 00486084 A040FFC3 */  sb    $zero, -0x3d($v0)
/* 00486088 A045FFC4 */  sb    $a1, -0x3c($v0)
/* 0048608C A040FFC5 */  sb    $zero, -0x3b($v0)
/* 00486090 A040FFC6 */  sb    $zero, -0x3a($v0)
/* 00486094 A040FFD5 */  sb    $zero, -0x2b($v0)
/* 00486098 A040FFD6 */  sb    $zero, -0x2a($v0)
/* 0048609C A045FFD7 */  sb    $a1, -0x29($v0)
/* 004860A0 A040FFD8 */  sb    $zero, -0x28($v0)
/* 004860A4 A040FFD9 */  sb    $zero, -0x27($v0)
/* 004860A8 A040FFE8 */  sb    $zero, -0x18($v0)
/* 004860AC A040FFE9 */  sb    $zero, -0x17($v0)
/* 004860B0 A045FFEA */  sb    $a1, -0x16($v0)
/* 004860B4 A040FFEB */  sb    $zero, -0x15($v0)
/* 004860B8 A040FFEC */  sb    $zero, -0x14($v0)
/* 004860BC A040FFFB */  sb    $zero, -5($v0)
/* 004860C0 A040FFFC */  sb    $zero, -4($v0)
/* 004860C4 A045FFFD */  sb    $a1, -3($v0)
/* 004860C8 A040FFFE */  sb    $zero, -2($v0)
/* 004860CC 1443FFEB */  bne   $v0, $v1, .L0048607C
/* 004860D0 A040FFFF */   sb    $zero, -1($v0)
/* 004860D4 8F828DEC */  lw     $v0, %got(utab)($gp)
/* 004860D8 24030001 */  li    $v1, 1
/* 004860DC 24040004 */  li    $a0, 4
/* 004860E0 24060006 */  li    $a2, 6
/* 004860E4 24070003 */  li    $a3, 3
/* 004860E8 240E0008 */  li    $t6, 8
/* 004860EC A0430624 */  sb    $v1, 0x624($v0)
/* 004860F0 A043092F */  sb    $v1, 0x92f($v0)
/* 004860F4 A0430410 */  sb    $v1, 0x410($v0)
/* 004860F8 A04304BB */  sb    $v1, 0x4bb($v0)
/* 004860FC A0430AD1 */  sb    $v1, 0xad1($v0)
/* 00486100 A0430AE4 */  sb    $v1, 0xae4($v0)
/* 00486104 A0430AF7 */  sb    $v1, 0xaf7($v0)
/* 00486108 A0430B0A */  sb    $v1, 0xb0a($v0)
/* 0048610C A0430696 */  sb    $v1, 0x696($v0)
/* 00486110 A043000E */  sb    $v1, 0xe($v0)
/* 00486114 A0430708 */  sb    $v1, 0x708($v0)
/* 00486118 A04308D0 */  sb    $v1, 0x8d0($v0)
/* 0048611C A0430118 */  sb    $v1, 0x118($v0)
/* 00486120 A043012B */  sb    $v1, 0x12b($v0)
/* 00486124 A04305FE */  sb    $v1, 0x5fe($v0)
/* 00486128 A0430741 */  sb    $v1, 0x741($v0)
/* 0048612C A0430754 */  sb    $v1, 0x754($v0)
/* 00486130 A04308E3 */  sb    $v1, 0x8e3($v0)
/* 00486134 A04301E9 */  sb    $v1, 0x1e9($v0)
/* 00486138 A04301FC */  sb    $v1, 0x1fc($v0)
/* 0048613C A0430423 */  sb    $v1, 0x423($v0)
/* 00486140 A04300F2 */  sb    $v1, 0xf2($v0)
/* 00486144 A0430105 */  sb    $v1, 0x105($v0)
/* 00486148 A0430884 */  sb    $v1, 0x884($v0)
/* 0048614C A04301D6 */  sb    $v1, 0x1d6($v0)
/* 00486150 A0430838 */  sb    $v1, 0x838($v0)
/* 00486154 A0430034 */  sb    $v1, 0x34($v0)
/* 00486158 A0430021 */  sb    $v1, 0x21($v0)
/* 0048615C A0430235 */  sb    $v1, 0x235($v0)
/* 00486160 A0430683 */  sb    $v1, 0x683($v0)
/* 00486164 A04306CF */  sb    $v1, 0x6cf($v0)
/* 00486168 A0430955 */  sb    $v1, 0x955($v0)
/* 0048616C A04307D9 */  sb    $v1, 0x7d9($v0)
/* 00486170 A043005A */  sb    $v1, 0x5a($v0)
/* 00486174 A04302A7 */  sb    $v1, 0x2a7($v0)
/* 00486178 A0430306 */  sb    $v1, 0x306($v0)
/* 0048617C A0430319 */  sb    $v1, 0x319($v0)
/* 00486180 A0430482 */  sb    $v1, 0x482($v0)
/* 00486184 A04305C5 */  sb    $v1, 0x5c5($v0)
/* 00486188 A04305D8 */  sb    $v1, 0x5d8($v0)
/* 0048618C A043065D */  sb    $v1, 0x65d($v0)
/* 00486190 A0430670 */  sb    $v1, 0x670($v0)
/* 00486194 A043071B */  sb    $v1, 0x71b($v0)
/* 00486198 A0430897 */  sb    $v1, 0x897($v0)
/* 0048619C A04308AA */  sb    $v1, 0x8aa($v0)
/* 004861A0 A0430A85 */  sb    $v1, 0xa85($v0)
/* 004861A4 A04304E1 */  sb    $v1, 0x4e1($v0)
/* 004861A8 A043046F */  sb    $v1, 0x46f($v0)
/* 004861AC A0430222 */  sb    $v1, 0x222($v0)
/* 004861B0 A04306F5 */  sb    $v1, 0x6f5($v0)
/* 004861B4 A0430A4C */  sb    $v1, 0xa4c($v0)
/* 004861B8 A043045C */  sb    $v1, 0x45c($v0)
/* 004861BC A0430378 */  sb    $v1, 0x378($v0)
/* 004861C0 A043039E */  sb    $v1, 0x39e($v0)
/* 004861C4 A043038B */  sb    $v1, 0x38b($v0)
/* 004861C8 A04303EA */  sb    $v1, 0x3ea($v0)
/* 004861CC A04303FD */  sb    $v1, 0x3fd($v0)
/* 004861D0 A0430436 */  sb    $v1, 0x436($v0)
/* 004861D4 A04308BD */  sb    $v1, 0x8bd($v0)
/* 004861D8 A0430495 */  sb    $v1, 0x495($v0)
/* 004861DC A04304A8 */  sb    $v1, 0x4a8($v0)
/* 004861E0 A043013F */  sb    $v1, 0x13f($v0)
/* 004861E4 A0430178 */  sb    $v1, 0x178($v0)
/* 004861E8 A043044A */  sb    $v1, 0x44a($v0)
/* 004861EC A0430541 */  sb    $v1, 0x541($v0)
/* 004861F0 A043057A */  sb    $v1, 0x57a($v0)
/* 004861F4 A0430813 */  sb    $v1, 0x813($v0)
/* 004861F8 A04308F7 */  sb    $v1, 0x8f7($v0)
/* 004861FC A0440036 */  sb    $a0, 0x36($v0)
/* 00486200 A0440095 */  sb    $a0, 0x95($v0)
/* 00486204 A04500A8 */  sb    $a1, 0xa8($v0)
/* 00486208 A04500F4 */  sb    $a1, 0xf4($v0)
/* 0048620C A0450107 */  sb    $a1, 0x107($v0)
/* 00486210 A0440140 */  sb    $a0, 0x140($v0)
/* 00486214 A0440153 */  sb    $a0, 0x153($v0)
/* 00486218 A0450166 */  sb    $a1, 0x166($v0)
/* 0048621C A04501B2 */  sb    $a1, 0x1b2($v0)
/* 00486220 A044019F */  sb    $a0, 0x19f($v0)
/* 00486224 A0440179 */  sb    $a0, 0x179($v0)
/* 00486228 A04401C5 */  sb    $a0, 0x1c5($v0)
/* 0048622C A04401D8 */  sb    $a0, 0x1d8($v0)
/* 00486230 A04501EB */  sb    $a1, 0x1eb($v0)
/* 00486234 A04501FE */  sb    $a1, 0x1fe($v0)
/* 00486238 A0450425 */  sb    $a1, 0x425($v0)
/* 0048623C A0440211 */  sb    $a0, 0x211($v0)
/* 00486240 A0440224 */  sb    $a0, 0x224($v0)
/* 00486244 A0440471 */  sb    $a0, 0x471($v0)
/* 00486248 A0440A4E */  sb    $a0, 0xa4e($v0)
/* 0048624C A045025D */  sb    $a1, 0x25d($v0)
/* 00486250 A0450270 */  sb    $a1, 0x270($v0)
/* 00486254 A0440283 */  sb    $a0, 0x283($v0)
/* 00486258 A0440049 */  sb    $a0, 0x49($v0)
/* 0048625C A044037A */  sb    $a0, 0x37a($v0)
/* 00486260 A044038D */  sb    $a0, 0x38d($v0)
/* 00486264 A04403A0 */  sb    $a0, 0x3a0($v0)
/* 00486268 A04403EC */  sb    $a0, 0x3ec($v0)
/* 0048626C A04403FF */  sb    $a0, 0x3ff($v0)
/* 00486270 A0440438 */  sb    $a0, 0x438($v0)
/* 00486274 A04502E2 */  sb    $a1, 0x2e2($v0)
/* 00486278 A045097D */  sb    $a1, 0x97d($v0)
/* 0048627C A0450A28 */  sb    $a1, 0xa28($v0)
/* 00486280 A04402CF */  sb    $a0, 0x2cf($v0)
/* 00486284 A04403D9 */  sb    $a0, 0x3d9($v0)
/* 00486288 A0440412 */  sb    $a0, 0x412($v0)
/* 0048628C A046044B */  sb    $a2, 0x44b($v0)
/* 00486290 A044045E */  sb    $a0, 0x45e($v0)
/* 00486294 A04404D0 */  sb    $a0, 0x4d0($v0)
/* 00486298 A04404BD */  sb    $a0, 0x4bd($v0)
/* 0048629C A04504E3 */  sb    $a1, 0x4e3($v0)
/* 004862A0 A04404F6 */  sb    $a0, 0x4f6($v0)
/* 004862A4 A044058E */  sb    $a0, 0x58e($v0)
/* 004862A8 A0440542 */  sb    $a0, 0x542($v0)
/* 004862AC A04603C6 */  sb    $a2, 0x3c6($v0)
/* 004862B0 A045052F */  sb    $a1, 0x52f($v0)
/* 004862B4 A0460555 */  sb    $a2, 0x555($v0)
/* 004862B8 A044057B */  sb    $a0, 0x57b($v0)
/* 004862BC A04505ED */  sb    $a1, 0x5ed($v0)
/* 004862C0 A0450613 */  sb    $a1, 0x613($v0)
/* 004862C4 A0440626 */  sb    $a0, 0x626($v0)
/* 004862C8 A0440698 */  sb    $a0, 0x698($v0)
/* 004862CC A04406F7 */  sb    $a0, 0x6f7($v0)
/* 004862D0 A0440769 */  sb    $a0, 0x769($v0)
/* 004862D4 A044077C */  sb    $a0, 0x77c($v0)
/* 004862D8 A044078F */  sb    $a0, 0x78f($v0)
/* 004862DC A04407C8 */  sb    $a0, 0x7c8($v0)
/* 004862E0 A0440801 */  sb    $a0, 0x801($v0)
/* 004862E4 A0440814 */  sb    $a0, 0x814($v0)
/* 004862E8 A0440827 */  sb    $a0, 0x827($v0)
/* 004862EC A044083A */  sb    $a0, 0x83a($v0)
/* 004862F0 A044084D */  sb    $a0, 0x84d($v0)
/* 004862F4 A0440860 */  sb    $a0, 0x860($v0)
/* 004862F8 A0440873 */  sb    $a0, 0x873($v0)
/* 004862FC A0440082 */  sb    $a0, 0x82($v0)
/* 00486300 A0440341 */  sb    $a0, 0x341($v0)
/* 00486304 A0440886 */  sb    $a0, 0x886($v0)
/* 00486308 A045090B */  sb    $a1, 0x90b($v0)
/* 0048630C A045091E */  sb    $a1, 0x91e($v0)
/* 00486310 A0440931 */  sb    $a0, 0x931($v0)
/* 00486314 A044096A */  sb    $a0, 0x96a($v0)
/* 00486318 A04E0A74 */  sb    $t6, 0xa74($v0)
/* 0048631C A044018C */  sb    $a0, 0x18c($v0)
/* 00486320 A04402BC */  sb    $a0, 0x2bc($v0)
/* 00486324 A04402F5 */  sb    $a0, 0x2f5($v0)
/* 00486328 A044032E */  sb    $a0, 0x32e($v0)
/* 0048632C A0440639 */  sb    $a0, 0x639($v0)
/* 00486330 A0440354 */  sb    $a0, 0x354($v0)
/* 00486334 A0440497 */  sb    $a0, 0x497($v0)
/* 00486338 A04404AA */  sb    $a0, 0x4aa($v0)
/* 0048633C A04407A2 */  sb    $a0, 0x7a2($v0)
/* 00486340 A04406BE */  sb    $a0, 0x6be($v0)
/* 00486344 A0450A3B */  sb    $a1, 0xa3b($v0)
/* 00486348 A0440A61 */  sb    $a0, 0xa61($v0)
/* 0048634C A0450990 */  sb    $a1, 0x990($v0)
/* 00486350 A04509EF */  sb    $a1, 0x9ef($v0)
/* 00486354 A04509DC */  sb    $a1, 0x9dc($v0)
/* 00486358 A04509B6 */  sb    $a1, 0x9b6($v0)
/* 0048635C A04509A3 */  sb    $a1, 0x9a3($v0)
/* 00486360 A04509C9 */  sb    $a1, 0x9c9($v0)
/* 00486364 A0440A02 */  sb    $a0, 0xa02($v0)
/* 00486368 A04408F8 */  sb    $a0, 0x8f8($v0)
/* 0048636C A0440B45 */  sb    $a0, 0xb45($v0)
/* 00486370 A0440B1F */  sb    $a0, 0xb1f($v0)
/* 00486374 A0440B32 */  sb    $a0, 0xb32($v0)
/* 00486378 A0440B58 */  sb    $a0, 0xb58($v0)
/* 0048637C A0440B6B */  sb    $a0, 0xb6b($v0)
/* 00486380 A0440AD3 */  sb    $a0, 0xad3($v0)
/* 00486384 A0440AE6 */  sb    $a0, 0xae6($v0)
/* 00486388 A0440AF9 */  sb    $a0, 0xaf9($v0)
/* 0048638C A0440B0C */  sb    $a0, 0xb0c($v0)
/* 00486390 A0430932 */  sb    $v1, 0x932($v0)
/* 00486394 A043011B */  sb    $v1, 0x11b($v0)
/* 00486398 A043012E */  sb    $v1, 0x12e($v0)
/* 0048639C A0430011 */  sb    $v1, 0x11($v0)
/* 004863A0 A04500BC */  sb    $a1, 0xbc($v0)
/* 004863A4 A043070B */  sb    $v1, 0x70b($v0)
/* 004863A8 A04308D3 */  sb    $v1, 0x8d3($v0)
/* 004863AC A0430601 */  sb    $v1, 0x601($v0)
/* 004863B0 A0430744 */  sb    $v1, 0x744($v0)
/* 004863B4 A0430757 */  sb    $v1, 0x757($v0)
/* 004863B8 A04308E6 */  sb    $v1, 0x8e6($v0)
/* 004863BC A04301EC */  sb    $v1, 0x1ec($v0)
/* 004863C0 A04301FF */  sb    $v1, 0x1ff($v0)
/* 004863C4 A0430426 */  sb    $v1, 0x426($v0)
/* 004863C8 A04300F5 */  sb    $v1, 0xf5($v0)
/* 004863CC A0430108 */  sb    $v1, 0x108($v0)
/* 004863D0 A0430887 */  sb    $v1, 0x887($v0)
/* 004863D4 A04301D9 */  sb    $v1, 0x1d9($v0)
/* 004863D8 A0430A03 */  sb    $v1, 0xa03($v0)
/* 004863DC A043083B */  sb    $v1, 0x83b($v0)
/* 004863E0 A0430037 */  sb    $v1, 0x37($v0)
/* 004863E4 A04303C7 */  sb    $v1, 0x3c7($v0)
/* 004863E8 A043050A */  sb    $v1, 0x50a($v0)
/* 004863EC A0430A16 */  sb    $v1, 0xa16($v0)
/* 004863F0 A0450024 */  sb    $a1, 0x24($v0)
/* 004863F4 A0450238 */  sb    $a1, 0x238($v0)
/* 004863F8 A0450686 */  sb    $a1, 0x686($v0)
/* 004863FC A04506D2 */  sb    $a1, 0x6d2($v0)
/* 00486400 A0450958 */  sb    $a1, 0x958($v0)
/* 00486404 A04507DC */  sb    $a1, 0x7dc($v0)
/* 00486408 A045005D */  sb    $a1, 0x5d($v0)
/* 0048640C A04502AA */  sb    $a1, 0x2aa($v0)
/* 00486410 A0450309 */  sb    $a1, 0x309($v0)
/* 00486414 A045031C */  sb    $a1, 0x31c($v0)
/* 00486418 A0450485 */  sb    $a1, 0x485($v0)
/* 0048641C A04505C8 */  sb    $a1, 0x5c8($v0)
/* 00486420 A04505DB */  sb    $a1, 0x5db($v0)
/* 00486424 A0450660 */  sb    $a1, 0x660($v0)
/* 00486428 A0450673 */  sb    $a1, 0x673($v0)
/* 0048642C A045071E */  sb    $a1, 0x71e($v0)
/* 00486430 A045089A */  sb    $a1, 0x89a($v0)
/* 00486434 A04508AD */  sb    $a1, 0x8ad($v0)
/* 00486438 A0450A88 */  sb    $a1, 0xa88($v0)
/* 0048643C A04504E4 */  sb    $a1, 0x4e4($v0)
/* 00486440 A0470368 */  sb    $a3, 0x368($v0)
/* 00486444 A0450472 */  sb    $a1, 0x472($v0)
/* 00486448 A0450225 */  sb    $a1, 0x225($v0)
/* 0048644C A04506F8 */  sb    $a1, 0x6f8($v0)
/* 00486450 A0450A4F */  sb    $a1, 0xa4f($v0)
/* 00486454 A045045F */  sb    $a1, 0x45f($v0)
/* 00486458 A0430413 */  sb    $v1, 0x413($v0)
/* 0048645C A04504BE */  sb    $a1, 0x4be($v0)
/* 00486460 A0450AD4 */  sb    $a1, 0xad4($v0)
/* 00486464 A0470AE7 */  sb    $a3, 0xae7($v0)
/* 00486468 A0430AFA */  sb    $v1, 0xafa($v0)
/* 0048646C A0450B0D */  sb    $a1, 0xb0d($v0)
/* 00486470 A0430498 */  sb    $v1, 0x498($v0)
/* 00486474 A04504AB */  sb    $a1, 0x4ab($v0)
/* 00486478 A0450699 */  sb    $a1, 0x699($v0)
/* 0048647C A04502D0 */  sb    $a1, 0x2d0($v0)
/* 00486480 A045037B */  sb    $a1, 0x37b($v0)
/* 00486484 A045038E */  sb    $a1, 0x38e($v0)
/* 00486488 A04503A1 */  sb    $a1, 0x3a1($v0)
/* 0048648C A04503ED */  sb    $a1, 0x3ed($v0)
/* 00486490 A0450400 */  sb    $a1, 0x400($v0)
/* 00486494 A0450439 */  sb    $a1, 0x439($v0)
/* 00486498 A04302E3 */  sb    $v1, 0x2e3($v0)
/* 0048649C A043097E */  sb    $v1, 0x97e($v0)
/* 004864A0 A04303B4 */  sb    $v1, 0x3b4($v0)
/* 004864A4 A0430A75 */  sb    $v1, 0xa75($v0)
/* 004864A8 A0430355 */  sb    $v1, 0x355($v0)
/* 004864AC A043077D */  sb    $v1, 0x77d($v0)
/* 004864B0 A0430A9B */  sb    $v1, 0xa9b($v0)
/* 004864B4 A04307A3 */  sb    $v1, 0x7a3($v0)
/* 004864B8 A04306BF */  sb    $v1, 0x6bf($v0)
/* 004864BC A0450991 */  sb    $a1, 0x991($v0)
/* 004864C0 A04509A4 */  sb    $a1, 0x9a4($v0)
/* 004864C4 A04509B7 */  sb    $a1, 0x9b7($v0)
/* 004864C8 A04509CA */  sb    $a1, 0x9ca($v0)
/* 004864CC A04509DD */  sb    $a1, 0x9dd($v0)
/* 004864D0 A04509F0 */  sb    $a1, 0x9f0($v0)
/* 004864D4 A04307B6 */  sb    $v1, 0x7b6($v0)
/* 004864D8 A043096B */  sb    $v1, 0x96b($v0)
/* 004864DC A0430070 */  sb    $v1, 0x70($v0)
/* 004864E0 A0430945 */  sb    $v1, 0x945($v0)
/* 004864E4 A04508C0 */  sb    $a1, 0x8c0($v0)
/* 004864E8 A0430628 */  sb    $v1, 0x628($v0)
/* 004864EC A043057D */  sb    $v1, 0x57d($v0)
/* 004864F0 A0430B21 */  sb    $v1, 0xb21($v0)
/* 004864F4 A0430544 */  sb    $v1, 0x544($v0)
/* 004864F8 A0430557 */  sb    $v1, 0x557($v0)
/* 004864FC A043011C */  sb    $v1, 0x11c($v0)
/* 00486500 A0430012 */  sb    $v1, 0x12($v0)
/* 00486504 A04300BD */  sb    $v1, 0xbd($v0)
/* 00486508 A043070C */  sb    $v1, 0x70c($v0)
/* 0048650C A04308D4 */  sb    $v1, 0x8d4($v0)
/* 00486510 A0430602 */  sb    $v1, 0x602($v0)
/* 00486514 A0430745 */  sb    $v1, 0x745($v0)
/* 00486518 A0430758 */  sb    $v1, 0x758($v0)
/* 0048651C A04308E7 */  sb    $v1, 0x8e7($v0)
/* 00486520 A04301ED */  sb    $v1, 0x1ed($v0)
/* 00486524 A0430200 */  sb    $v1, 0x200($v0)
/* 00486528 A0430427 */  sb    $v1, 0x427($v0)
/* 0048652C A04300F6 */  sb    $v1, 0xf6($v0)
/* 00486530 A0430109 */  sb    $v1, 0x109($v0)
/* 00486534 A0430888 */  sb    $v1, 0x888($v0)
/* 00486538 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0048653C 8FB00014 */  lw    $s0, 0x14($sp)
/* 00486540 A04301DA */  sb    $v1, 0x1da($v0)
/* 00486544 A0430A04 */  sb    $v1, 0xa04($v0)
/* 00486548 A043083C */  sb    $v1, 0x83c($v0)
/* 0048654C A0430038 */  sb    $v1, 0x38($v0)
/* 00486550 A04303C8 */  sb    $v1, 0x3c8($v0)
/* 00486554 A043050B */  sb    $v1, 0x50b($v0)
/* 00486558 A0430A17 */  sb    $v1, 0xa17($v0)
/* 0048655C A0430025 */  sb    $v1, 0x25($v0)
/* 00486560 A0430239 */  sb    $v1, 0x239($v0)
/* 00486564 A0430687 */  sb    $v1, 0x687($v0)
/* 00486568 A04306D3 */  sb    $v1, 0x6d3($v0)
/* 0048656C A0430959 */  sb    $v1, 0x959($v0)
/* 00486570 A04307DD */  sb    $v1, 0x7dd($v0)
/* 00486574 A043005E */  sb    $v1, 0x5e($v0)
/* 00486578 A04302AB */  sb    $v1, 0x2ab($v0)
/* 0048657C A043030A */  sb    $v1, 0x30a($v0)
/* 00486580 A043031D */  sb    $v1, 0x31d($v0)
/* 00486584 A0430486 */  sb    $v1, 0x486($v0)
/* 00486588 A04305C9 */  sb    $v1, 0x5c9($v0)
/* 0048658C A04305DC */  sb    $v1, 0x5dc($v0)
/* 00486590 A0430661 */  sb    $v1, 0x661($v0)
/* 00486594 A0430674 */  sb    $v1, 0x674($v0)
/* 00486598 A043071F */  sb    $v1, 0x71f($v0)
/* 0048659C A043089B */  sb    $v1, 0x89b($v0)
/* 004865A0 A04308AE */  sb    $v1, 0x8ae($v0)
/* 004865A4 A0430A89 */  sb    $v1, 0xa89($v0)
/* 004865A8 A04304E5 */  sb    $v1, 0x4e5($v0)
/* 004865AC A0430369 */  sb    $v1, 0x369($v0)
/* 004865B0 A0430473 */  sb    $v1, 0x473($v0)
/* 004865B4 A0430226 */  sb    $v1, 0x226($v0)
/* 004865B8 A04306F9 */  sb    $v1, 0x6f9($v0)
/* 004865BC A0430A50 */  sb    $v1, 0xa50($v0)
/* 004865C0 A0430460 */  sb    $v1, 0x460($v0)
/* 004865C4 A0430414 */  sb    $v1, 0x414($v0)
/* 004865C8 A0430AD5 */  sb    $v1, 0xad5($v0)
/* 004865CC A0430AFB */  sb    $v1, 0xafb($v0)
/* 004865D0 A0430499 */  sb    $v1, 0x499($v0)
/* 004865D4 A043037C */  sb    $v1, 0x37c($v0)
/* 004865D8 A043038F */  sb    $v1, 0x38f($v0)
/* 004865DC A04303A2 */  sb    $v1, 0x3a2($v0)
/* 004865E0 A04303EE */  sb    $v1, 0x3ee($v0)
/* 004865E4 A0430401 */  sb    $v1, 0x401($v0)
/* 004865E8 A043043A */  sb    $v1, 0x43a($v0)
/* 004865EC A043024C */  sb    $v1, 0x24c($v0)
/* 004865F0 A043096C */  sb    $v1, 0x96c($v0)
/* 004865F4 A04305A3 */  sb    $v1, 0x5a3($v0)
/* 004865F8 A043056A */  sb    $v1, 0x56a($v0)
/* 004865FC A04308C1 */  sb    $v1, 0x8c1($v0)
/* 00486600 03E00008 */  jr    $ra
/* 00486604 27BD0030 */   addiu $sp, $sp, 0x30
    .type uini, @function
    .size uini, .-uini
    .end uini

glabel getutabrec
    .ent getutabrec
/* 00486608 3C1C0FB9 */  .cpload $t9
/* 0048660C 279C3C88 */  
/* 00486610 0399E021 */  
/* 00486614 00047080 */  sll   $t6, $a0, 2
/* 00486618 8F8F8DEC */  lw     $t7, %got(utab)($gp)
/* 0048661C 01C47021 */  addu  $t6, $t6, $a0
/* 00486620 000E7080 */  sll   $t6, $t6, 2
/* 00486624 01C47023 */  subu  $t6, $t6, $a0
/* 00486628 AFA40000 */  sw    $a0, ($sp)
/* 0048662C 01CFC021 */  addu  $t8, $t6, $t7
/* 00486630 8B080000 */  lwl   $t0, ($t8)
/* 00486634 9B080003 */  lwr   $t0, 3($t8)
/* 00486638 A8A80000 */  swl   $t0, ($a1)
/* 0048663C B8A80003 */  swr   $t0, 3($a1)
/* 00486640 8B190004 */  lwl   $t9, 4($t8)
/* 00486644 9B190007 */  lwr   $t9, 7($t8)
/* 00486648 A8B90004 */  swl   $t9, 4($a1)
/* 0048664C B8B90007 */  swr   $t9, 7($a1)
/* 00486650 8B080008 */  lwl   $t0, 8($t8)
/* 00486654 9B08000B */  lwr   $t0, 0xb($t8)
/* 00486658 A8A80008 */  swl   $t0, 8($a1)
/* 0048665C B8A8000B */  swr   $t0, 0xb($a1)
/* 00486660 8B19000C */  lwl   $t9, 0xc($t8)
/* 00486664 9B19000F */  lwr   $t9, 0xf($t8)
/* 00486668 A8B9000C */  swl   $t9, 0xc($a1)
/* 0048666C B8B9000F */  swr   $t9, 0xf($a1)
/* 00486670 93080010 */  lbu   $t0, 0x10($t8)
/* 00486674 A0A80010 */  sb    $t0, 0x10($a1)
/* 00486678 93190011 */  lbu   $t9, 0x11($t8)
/* 0048667C A0B90011 */  sb    $t9, 0x11($a1)
/* 00486680 93080012 */  lbu   $t0, 0x12($t8)
/* 00486684 03E00008 */  jr    $ra
/* 00486688 A0A80012 */   sb    $t0, 0x12($a1)
    .type getutabrec, @function
    .size getutabrec, .-getutabrec
    .end getutabrec
)"");
