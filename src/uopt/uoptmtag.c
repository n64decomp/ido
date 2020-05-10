#include "libu/libu.h"
#include "ucode.h"
#include "uoptdata.h"

__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
RO_1000D1DB:
    # 00458B88 assign_mtag
    .asciz "uoptmtag.p"

    .balign 4
jtbl_1000D1E8:
    # 00458B88 assign_mtag
    .gpword .L00458D74
    .gpword .L00458DC4
    .gpword .L00458D74
    .gpword .L00458D74
    .gpword .L00458D74
    .gpword .L00458D80
    .gpword .L00458D74

.set noat
.set noreorder
.text
)"");

/*
004584D0 init_mtagtab
00458B88 assign_mtag
*/
void *mtagtab[419];

/*
004584D0 init_mtagtab
00458B88 assign_mtag
*/
int mtagno_anything;

/*
004584D0 init_mtagtab
00458B88 assign_mtag
*/
int mtagno_heap;

/*
004584D0 init_mtagtab
00458B88 assign_mtag
*/
int mtagno_readonly;

/*
004584D0 init_mtagtab
00458B88 assign_mtag
*/
int mtagno_non_local;

/*
004584D0 init_mtagtab
0045877C searchmtag_parm
00458998 func_00458998
00458B88 assign_mtag
*/
int next_mtagno;

/*
004584D0 init_mtagtab
0045877C searchmtag_parm
*/
void *f77_parm_mtag_head;

/*
004584D0 init_mtagtab
0045877C searchmtag_parm
0045889C func_0045889C
00458998 func_00458998
00458B88 assign_mtag
*/
struct Bcrec uu;

/*
00456A2C oneproc
*/
void init_mtagtab(void) {
    int i;
    int tagno;

    if (!domtag) {
        return;
    }

    for (i = 0; i < sizeof(mtagtab) / sizeof(mtagtab[0]); i++) {
        mtagtab[i] = NULL;
    }

    f77_parm_mtag_head = NULL;

    uu.Opc = Umtag;
    tagno = curproc->unk38 + 1;
    uu.I1 = tagno;
    uu.Lexlev = 0;
    mtagno_anything = tagno;
    uwrite(&uu);

    uu.Lexlev = 1;
    tagno = curproc->unk38 + 2;
    uu.I1 = tagno;
    mtagno_heap = tagno;
    uwrite(&uu);

    uu.Lexlev = 2;
    tagno = curproc->unk38 + 3;
    uu.I1 = tagno;
    mtagno_readonly = tagno;
    uwrite(&uu);

    uu.Lexlev = 3;
    tagno = curproc->unk38 + 4;
    uu.I1 = tagno;
    mtagno_non_local = tagno;
    uwrite(&uu);

    next_mtagno = curproc->unk38 + 5;
}

/*
0045877C searchmtag_parm
*/
void mtagwarning(void) {
    if (warn_flag != 1) {
        warned = true;
        writeln(err.c_file);
        write_string(err.c_file, "uopt: Warning: used up all ", 27, 27);
        write_integer(err.c_file, 0x3FFF, 0, 10); // was this a macro/define?
        write_string(err.c_file, " memory tags in ", 16, 16);
        write_string(err.c_file, entnam0, 1024, entnam0len);
        writeln(err.c_file);
        fflush(err.c_file);
    }
}

__asm__(R""(
.set noat
.set noreorder
.text

glabel searchmtag_parm
    .ent searchmtag_parm
    # 00458B88 assign_mtag
/* 0045877C 3C1C0FBC */  .cpload $t9
/* 00458780 279C1B14 */  
/* 00458784 0399E021 */  
/* 00458788 8F878930 */  lw     $a3, %got(f77_parm_mtag_head)($gp)
/* 0045878C 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 00458790 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00458794 8CE30000 */  lw    $v1, ($a3)
/* 00458798 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0045879C 00803025 */  move  $a2, $a0
/* 004587A0 1060000B */  beqz  $v1, .L004587D0
/* 004587A4 00000000 */   nop   
/* 004587A8 8C820028 */  lw    $v0, 0x28($a0)
/* 004587AC 8C6E0004 */  lw    $t6, 4($v1)
/* 004587B0 104E0007 */  beq   $v0, $t6, .L004587D0
/* 004587B4 00000000 */   nop   
/* 004587B8 8C63000C */  lw    $v1, 0xc($v1)
.L004587BC:
/* 004587BC 10600004 */  beqz  $v1, .L004587D0
/* 004587C0 00000000 */   nop   
/* 004587C4 8C6F0004 */  lw    $t7, 4($v1)
/* 004587C8 544FFFFC */  bnel  $v0, $t7, .L004587BC
/* 004587CC 8C63000C */   lw    $v1, 0xc($v1)
.L004587D0:
/* 004587D0 10600003 */  beqz  $v1, .L004587E0
/* 004587D4 00000000 */   nop   
/* 004587D8 1000002C */  b     .L0045888C
/* 004587DC 00601025 */   move  $v0, $v1
.L004587E0:
/* 004587E0 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 004587E4 24040014 */  li    $a0, 20
/* 004587E8 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 004587EC 0320F809 */  jalr  $t9
/* 004587F0 AFA60028 */   sw    $a2, 0x28($sp)
/* 004587F4 8FA60028 */  lw    $a2, 0x28($sp)
/* 004587F8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004587FC 24080008 */  li    $t0, 8
/* 00458800 8CD80028 */  lw    $t8, 0x28($a2)
/* 00458804 8F878930 */  lw     $a3, %got(f77_parm_mtag_head)($gp)
/* 00458808 8F85892C */  lw     $a1, %got(next_mtagno)($gp)
/* 0045880C AC580004 */  sw    $t8, 4($v0)
/* 00458810 8CF90000 */  lw    $t9, ($a3)
/* 00458814 A048000A */  sb    $t0, 0xa($v0)
/* 00458818 24013FFF */  li    $at, 16383
/* 0045881C AC59000C */  sw    $t9, 0xc($v0)
/* 00458820 8CA40000 */  lw    $a0, ($a1)
/* 00458824 ACE20000 */  sw    $v0, ($a3)
/* 00458828 00401825 */  move  $v1, $v0
/* 0045882C A4440008 */  sh    $a0, 8($v0)
/* 00458830 24890001 */  addiu $t1, $a0, 1
/* 00458834 15210008 */  bne   $t1, $at, .L00458858
/* 00458838 ACA90000 */   sw    $t1, ($a1)
/* 0045883C 8F998420 */  lw    $t9, %call16(mtagwarning)($gp)
/* 00458840 8F818ACC */  lw     $at, %got(domtag)($gp)
/* 00458844 AFA20020 */  sw    $v0, 0x20($sp)
/* 00458848 0320F809 */  jalr  $t9
/* 0045884C A0200000 */   sb    $zero, ($at)
/* 00458850 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00458854 8FA30020 */  lw    $v1, 0x20($sp)
.L00458858:
/* 00458858 8F848934 */  lw     $a0, %got(uu)($gp)
/* 0045885C 946C0008 */  lhu   $t4, 8($v1)
/* 00458860 240B008F */  li    $t3, 143
/* 00458864 240D0008 */  li    $t5, 8
/* 00458868 A08B0000 */  sb    $t3, ($a0)
/* 0045886C A48D0002 */  sh    $t5, 2($a0)
/* 00458870 AC8C0004 */  sw    $t4, 4($a0)
/* 00458874 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 00458878 AFA30020 */  sw    $v1, 0x20($sp)
/* 0045887C 0320F809 */  jalr  $t9
/* 00458880 00000000 */   nop   
/* 00458884 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00458888 8FA20020 */  lw    $v0, 0x20($sp)
.L0045888C:
/* 0045888C 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00458890 27BD0028 */  addiu $sp, $sp, 0x28
/* 00458894 03E00008 */  jr    $ra
/* 00458898 00000000 */   nop   
    .type searchmtag_parm, @function
    .size searchmtag_parm, .-searchmtag_parm
    .end searchmtag_parm

    .type func_0045889C, @function
func_0045889C:
    # 0045889C func_0045889C
    # 00458998 func_00458998
/* 0045889C 3C1C0FBC */  .cpload $t9
/* 004588A0 279C19F4 */  
/* 004588A4 0399E021 */  
/* 004588A8 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 004588AC AFB40024 */  sw    $s4, 0x24($sp)
/* 004588B0 AFB30020 */  sw    $s3, 0x20($sp)
/* 004588B4 AFB2001C */  sw    $s2, 0x1c($sp)
/* 004588B8 AFB10018 */  sw    $s1, 0x18($sp)
/* 004588BC AFB00014 */  sw    $s0, 0x14($sp)
/* 004588C0 00A08025 */  move  $s0, $a1
/* 004588C4 00808825 */  move  $s1, $a0
/* 004588C8 8F928934 */  lw     $s2, %got(uu)($gp)
/* 004588CC 00409825 */  move  $s3, $v0
/* 004588D0 24140090 */  li    $s4, 144
/* 004588D4 AFBF002C */  sw    $ra, 0x2c($sp)
/* 004588D8 AFBC0028 */  sw    $gp, 0x28($sp)
/* 004588DC 52000027 */  beql  $s0, $zero, .L0045897C
/* 004588E0 8FBF002C */   lw    $ra, 0x2c($sp)
.L004588E4:
/* 004588E4 8F99802C */  lw    $t9, %got(func_0045889C)($gp)
/* 004588E8 02202025 */  move  $a0, $s1
/* 004588EC 8E05000C */  lw    $a1, 0xc($s0)
/* 004588F0 2739889C */  addiu $t9, %lo(func_0045889C) # addiu $t9, $t9, -0x7764
/* 004588F4 0320F809 */  jalr  $t9
/* 004588F8 02601025 */   move  $v0, $s3
/* 004588FC 8E220004 */  lw    $v0, 4($s1)
/* 00458900 8E030004 */  lw    $v1, 4($s0)
/* 00458904 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00458908 0043082A */  slt   $at, $v0, $v1
/* 0045890C 54200006 */  bnezl $at, .L00458928
/* 00458910 0062082A */   slt   $at, $v1, $v0
/* 00458914 8E0F0000 */  lw    $t7, ($s0)
/* 00458918 00437023 */  subu  $t6, $v0, $v1
/* 0045891C 01CF082A */  slt   $at, $t6, $t7
/* 00458920 14200008 */  bnez  $at, .L00458944
/* 00458924 0062082A */   slt   $at, $v1, $v0
.L00458928:
/* 00458928 54200011 */  bnezl $at, .L00458970
/* 0045892C 8E100010 */   lw    $s0, 0x10($s0)
/* 00458930 8E390000 */  lw    $t9, ($s1)
/* 00458934 0062C023 */  subu  $t8, $v1, $v0
/* 00458938 0319082A */  slt   $at, $t8, $t9
/* 0045893C 5020000C */  beql  $at, $zero, .L00458970
/* 00458940 8E100010 */   lw    $s0, 0x10($s0)
.L00458944:
/* 00458944 96280008 */  lhu   $t0, 8($s1)
/* 00458948 96090008 */  lhu   $t1, 8($s0)
/* 0045894C A2540000 */  sb    $s4, ($s2)
/* 00458950 AE480004 */  sw    $t0, 4($s2)
/* 00458954 A6490002 */  sh    $t1, 2($s2)
/* 00458958 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0045895C 02402025 */  move  $a0, $s2
/* 00458960 0320F809 */  jalr  $t9
/* 00458964 00000000 */   nop   
/* 00458968 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045896C 8E100010 */  lw    $s0, 0x10($s0)
.L00458970:
/* 00458970 1600FFDC */  bnez  $s0, .L004588E4
/* 00458974 00000000 */   nop   
/* 00458978 8FBF002C */  lw    $ra, 0x2c($sp)
.L0045897C:
/* 0045897C 8FB00014 */  lw    $s0, 0x14($sp)
/* 00458980 8FB10018 */  lw    $s1, 0x18($sp)
/* 00458984 8FB2001C */  lw    $s2, 0x1c($sp)
/* 00458988 8FB30020 */  lw    $s3, 0x20($sp)
/* 0045898C 8FB40024 */  lw    $s4, 0x24($sp)
/* 00458990 03E00008 */  jr    $ra
/* 00458994 27BD0030 */   addiu $sp, $sp, 0x30

    .type func_00458998, @function
func_00458998:
    # 00458B88 assign_mtag
/* 00458998 3C1C0FBC */  .cpload $t9
/* 0045899C 279C18F8 */  
/* 004589A0 0399E021 */  
/* 004589A4 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 004589A8 AFBF001C */  sw    $ra, 0x1c($sp)
/* 004589AC AFBC0018 */  sw    $gp, 0x18($sp)
/* 004589B0 AFA2002C */  sw    $v0, 0x2c($sp)
/* 004589B4 00803025 */  move  $a2, $a0
/* 004589B8 00A03825 */  move  $a3, $a1
.L004589BC:
/* 004589BC 8CE20000 */  lw    $v0, ($a3)
/* 004589C0 54400054 */  bnezl $v0, .L00458B14
/* 004589C4 8CC3002C */   lw    $v1, 0x2c($a2)
/* 004589C8 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 004589CC 24040014 */  li    $a0, 20
/* 004589D0 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 004589D4 AFA60030 */  sw    $a2, 0x30($sp)
/* 004589D8 0320F809 */  jalr  $t9
/* 004589DC AFA70034 */   sw    $a3, 0x34($sp)
/* 004589E0 8FA60030 */  lw    $a2, 0x30($sp)
/* 004589E4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004589E8 8FA70034 */  lw    $a3, 0x34($sp)
/* 004589EC 8CCE0024 */  lw    $t6, 0x24($a2)
/* 004589F0 AFA20024 */  sw    $v0, 0x24($sp)
/* 004589F4 24010001 */  li    $at, 1
/* 004589F8 AC4E0000 */  sw    $t6, ($v0)
/* 004589FC 8CCF002C */  lw    $t7, 0x2c($a2)
/* 00458A00 00401825 */  move  $v1, $v0
/* 00458A04 AC4F0004 */  sw    $t7, 4($v0)
/* 00458A08 90C40032 */  lbu   $a0, 0x32($a2)
/* 00458A0C 30840007 */  andi  $a0, $a0, 7
/* 00458A10 10810003 */  beq   $a0, $at, .L00458A20
/* 00458A14 24010002 */   li    $at, 2
/* 00458A18 1481000D */  bne   $a0, $at, .L00458A50
/* 00458A1C 00000000 */   nop   
.L00458A20:
/* 00458A20 8F988980 */  lw     $t8, %got(curblk)($gp)
/* 00458A24 8CD90030 */  lw    $t9, 0x30($a2)
/* 00458A28 24090004 */  li    $t1, 4
/* 00458A2C 8F180000 */  lw    $t8, ($t8)
/* 00458A30 001942C2 */  srl   $t0, $t9, 0xb
/* 00458A34 240A0005 */  li    $t2, 5
/* 00458A38 17080003 */  bne   $t8, $t0, .L00458A48
/* 00458A3C 00000000 */   nop   
/* 00458A40 10000012 */  b     .L00458A8C
/* 00458A44 A049000A */   sb    $t1, 0xa($v0)
.L00458A48:
/* 00458A48 10000010 */  b     .L00458A8C
/* 00458A4C A04A000A */   sb    $t2, 0xa($v0)
.L00458A50:
/* 00458A50 8F998494 */  lw    $t9, %call16(in_fsym)($gp)
/* 00458A54 8CC40030 */  lw    $a0, 0x30($a2)
/* 00458A58 AFA30020 */  sw    $v1, 0x20($sp)
/* 00458A5C AFA70034 */  sw    $a3, 0x34($sp)
/* 00458A60 0320F809 */  jalr  $t9
/* 00458A64 000422C2 */   srl   $a0, $a0, 0xb
/* 00458A68 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00458A6C 8FA30020 */  lw    $v1, 0x20($sp)
/* 00458A70 10400004 */  beqz  $v0, .L00458A84
/* 00458A74 8FA70034 */   lw    $a3, 0x34($sp)
/* 00458A78 240B0006 */  li    $t3, 6
/* 00458A7C 10000003 */  b     .L00458A8C
/* 00458A80 A06B000A */   sb    $t3, 0xa($v1)
.L00458A84:
/* 00458A84 240C0007 */  li    $t4, 7
/* 00458A88 A06C000A */  sb    $t4, 0xa($v1)
.L00458A8C:
/* 00458A8C 8F85892C */  lw     $a1, %got(next_mtagno)($gp)
/* 00458A90 8F848934 */  lw     $a0, %got(uu)($gp)
/* 00458A94 9079000A */  lbu   $t9, 0xa($v1)
/* 00458A98 8CA20000 */  lw    $v0, ($a1)
/* 00458A9C 240E008F */  li    $t6, 143
/* 00458AA0 A08E0000 */  sb    $t6, ($a0)
/* 00458AA4 244D0001 */  addiu $t5, $v0, 1
/* 00458AA8 304FFFFF */  andi  $t7, $v0, 0xffff
/* 00458AAC ACAD0000 */  sw    $t5, ($a1)
/* 00458AB0 AC8F0004 */  sw    $t7, 4($a0)
/* 00458AB4 A4990002 */  sh    $t9, 2($a0)
/* 00458AB8 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 00458ABC AFA30020 */  sw    $v1, 0x20($sp)
/* 00458AC0 AFA70034 */  sw    $a3, 0x34($sp)
/* 00458AC4 0320F809 */  jalr  $t9
/* 00458AC8 A4620008 */   sh    $v0, 8($v1)
/* 00458ACC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00458AD0 8FA30020 */  lw    $v1, 0x20($sp)
/* 00458AD4 8FA2002C */  lw    $v0, 0x2c($sp)
/* 00458AD8 8F99802C */  lw    $t9, %got(func_0045889C)($gp)
/* 00458ADC AC60000C */  sw    $zero, 0xc($v1)
/* 00458AE0 AC600010 */  sw    $zero, 0x10($v1)
/* 00458AE4 8C58FFF4 */  lw    $t8, -0xc($v0)
/* 00458AE8 2739889C */  addiu $t9, %lo(func_0045889C) # addiu $t9, $t9, -0x7764
/* 00458AEC 8FA40024 */  lw    $a0, 0x24($sp)
/* 00458AF0 0320F809 */  jalr  $t9
/* 00458AF4 8F050004 */   lw    $a1, 4($t8)
/* 00458AF8 8FA70034 */  lw    $a3, 0x34($sp)
/* 00458AFC 8FA80024 */  lw    $t0, 0x24($sp)
/* 00458B00 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00458B04 ACE80000 */  sw    $t0, ($a3)
/* 00458B08 1000001A */  b     .L00458B74
/* 00458B0C 8FA30024 */   lw    $v1, 0x24($sp)
/* 00458B10 8CC3002C */  lw    $v1, 0x2c($a2)
.L00458B14:
/* 00458B14 8C440004 */  lw    $a0, 4($v0)
/* 00458B18 0064082A */  slt   $at, $v1, $a0
/* 00458B1C 50200004 */  beql  $at, $zero, .L00458B30
/* 00458B20 0083082A */   slt   $at, $a0, $v1
/* 00458B24 1000FFA5 */  b     .L004589BC
/* 00458B28 2447000C */   addiu $a3, $v0, 0xc
/* 00458B2C 0083082A */  slt   $at, $a0, $v1
.L00458B30:
/* 00458B30 50200004 */  beql  $at, $zero, .L00458B44
/* 00458B34 8CC30024 */   lw    $v1, 0x24($a2)
/* 00458B38 1000FFA0 */  b     .L004589BC
/* 00458B3C 24470010 */   addiu $a3, $v0, 0x10
/* 00458B40 8CC30024 */  lw    $v1, 0x24($a2)
.L00458B44:
/* 00458B44 8C440000 */  lw    $a0, ($v0)
/* 00458B48 0064082A */  slt   $at, $v1, $a0
/* 00458B4C 50200004 */  beql  $at, $zero, .L00458B60
/* 00458B50 0083082A */   slt   $at, $a0, $v1
/* 00458B54 1000FF99 */  b     .L004589BC
/* 00458B58 2447000C */   addiu $a3, $v0, 0xc
/* 00458B5C 0083082A */  slt   $at, $a0, $v1
.L00458B60:
/* 00458B60 50200004 */  beql  $at, $zero, .L00458B74
/* 00458B64 00401825 */   move  $v1, $v0
/* 00458B68 1000FF94 */  b     .L004589BC
/* 00458B6C 24470010 */   addiu $a3, $v0, 0x10
/* 00458B70 00401825 */  move  $v1, $v0
.L00458B74:
/* 00458B74 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00458B78 27BD0030 */  addiu $sp, $sp, 0x30
/* 00458B7C 00601025 */  move  $v0, $v1
/* 00458B80 03E00008 */  jr    $ra
/* 00458B84 00000000 */   nop   

glabel assign_mtag
    .ent assign_mtag
    # 00445E44 exprimage
    # 004471AC codeimage
/* 00458B88 3C1C0FBC */  .cpload $t9
/* 00458B8C 279C1708 */  
/* 00458B90 0399E021 */  
/* 00458B94 8F8E8ACC */  lw     $t6, %got(domtag)($gp)
/* 00458B98 27BDFFC0 */  addiu $sp, $sp, -0x40
/* 00458B9C AFBF001C */  sw    $ra, 0x1c($sp)
/* 00458BA0 91CE0000 */  lbu   $t6, ($t6)
/* 00458BA4 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00458BA8 00803025 */  move  $a2, $a0
/* 00458BAC 55C00004 */  bnezl $t6, .L00458BC0
/* 00458BB0 90C20000 */   lbu   $v0, ($a2)
/* 00458BB4 100000C2 */  b     .L00458EC0
/* 00458BB8 00001025 */   move  $v0, $zero
/* 00458BBC 90C20000 */  lbu   $v0, ($a2)
.L00458BC0:
/* 00458BC0 24010007 */  li    $at, 7
/* 00458BC4 5441000C */  bnel  $v0, $at, .L00458BF8
/* 00458BC8 24010001 */   li    $at, 1
/* 00458BCC 8CC20014 */  lw    $v0, 0x14($a2)
/* 00458BD0 10400004 */  beqz  $v0, .L00458BE4
/* 00458BD4 00000000 */   nop   
/* 00458BD8 8C430008 */  lw    $v1, 8($v0)
/* 00458BDC 14600004 */  bnez  $v1, .L00458BF0
/* 00458BE0 00603025 */   move  $a2, $v1
.L00458BE4:
/* 00458BE4 8F82891C */  lw     $v0, %got(mtagno_anything)($gp)
/* 00458BE8 100000B5 */  b     .L00458EC0
/* 00458BEC 8C420000 */   lw    $v0, ($v0)
.L00458BF0:
/* 00458BF0 90620000 */  lbu   $v0, ($v1)
/* 00458BF4 24010001 */  li    $at, 1
.L00458BF8:
/* 00458BF8 10410003 */  beq   $v0, $at, .L00458C08
/* 00458BFC 24010005 */   li    $at, 5
/* 00458C00 14410035 */  bne   $v0, $at, .L00458CD8
/* 00458C04 00000000 */   nop   
.L00458C08:
/* 00458C08 8CC20030 */  lw    $v0, 0x30($a2)
/* 00458C0C 240101A3 */  li    $at, 419
/* 00458C10 000212C2 */  srl   $v0, $v0, 0xb
/* 00458C14 0041001A */  div   $zero, $v0, $at
/* 00458C18 00002010 */  mfhi  $a0
/* 00458C1C 04810002 */  bgez  $a0, .L00458C28
/* 00458C20 00000000 */   nop   
/* 00458C24 208401A3 */  addi  $a0, $a0, 0x1a3
.L00458C28:
/* 00458C28 8F988918 */  lw     $t8, %got(mtagtab)($gp)
/* 00458C2C 00047880 */  sll   $t7, $a0, 2
/* 00458C30 2404000C */  li    $a0, 12
/* 00458C34 01F83821 */  addu  $a3, $t7, $t8
/* 00458C38 8CE30000 */  lw    $v1, ($a3)
/* 00458C3C 1060000A */  beqz  $v1, .L00458C68
/* 00458C40 00000000 */   nop   
/* 00458C44 94790000 */  lhu   $t9, ($v1)
/* 00458C48 10590007 */  beq   $v0, $t9, .L00458C68
/* 00458C4C 00000000 */   nop   
/* 00458C50 8C630008 */  lw    $v1, 8($v1)
.L00458C54:
/* 00458C54 10600004 */  beqz  $v1, .L00458C68
/* 00458C58 00000000 */   nop   
/* 00458C5C 94680000 */  lhu   $t0, ($v1)
/* 00458C60 5448FFFC */  bnel  $v0, $t0, .L00458C54
/* 00458C64 8C630008 */   lw    $v1, 8($v1)
.L00458C68:
/* 00458C68 14600011 */  bnez  $v1, .L00458CB0
/* 00458C6C 00000000 */   nop   
/* 00458C70 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 00458C74 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 00458C78 AFA60040 */  sw    $a2, 0x40($sp)
/* 00458C7C 0320F809 */  jalr  $t9
/* 00458C80 AFA70024 */   sw    $a3, 0x24($sp)
/* 00458C84 8FA60040 */  lw    $a2, 0x40($sp)
/* 00458C88 8FA70024 */  lw    $a3, 0x24($sp)
/* 00458C8C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00458C90 8CC90030 */  lw    $t1, 0x30($a2)
/* 00458C94 AC400004 */  sw    $zero, 4($v0)
/* 00458C98 00401825 */  move  $v1, $v0
/* 00458C9C 000952C2 */  srl   $t2, $t1, 0xb
/* 00458CA0 A44A0000 */  sh    $t2, ($v0)
/* 00458CA4 8CEB0000 */  lw    $t3, ($a3)
/* 00458CA8 AC4B0008 */  sw    $t3, 8($v0)
/* 00458CAC ACE20000 */  sw    $v0, ($a3)
.L00458CB0:
/* 00458CB0 8F99802C */  lw    $t9, %got(func_00458998)($gp)
/* 00458CB4 00C02025 */  move  $a0, $a2
/* 00458CB8 24650004 */  addiu $a1, $v1, 4
/* 00458CBC 27398998 */  addiu $t9, %lo(func_00458998) # addiu $t9, $t9, -0x7668
/* 00458CC0 27A20040 */  addiu $v0, $sp, 0x40
/* 00458CC4 0320F809 */  jalr  $t9
/* 00458CC8 AFA30034 */   sw    $v1, 0x34($sp)
/* 00458CCC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00458CD0 1000007B */  b     .L00458EC0
/* 00458CD4 94420008 */   lhu   $v0, 8($v0)
.L00458CD8:
/* 00458CD8 8F8C8A5C */  lw     $t4, %got(lang)($gp)
/* 00458CDC 24010002 */  li    $at, 2
/* 00458CE0 2C4D0020 */  sltiu $t5, $v0, 0x20
/* 00458CE4 918C0000 */  lbu   $t4, ($t4)
/* 00458CE8 000D7023 */  negu  $t6, $t5
/* 00458CEC 11810008 */  beq   $t4, $at, .L00458D10
/* 00458CF0 3C011B00 */   lui   $at, 0x1b00
/* 00458CF4 01C17824 */  and   $t7, $t6, $at
/* 00458CF8 004FC004 */  sllv  $t8, $t7, $v0
/* 00458CFC 07000004 */  bltz  $t8, .L00458D10
/* 00458D00 00000000 */   nop   
/* 00458D04 8F828924 */  lw     $v0, %got(mtagno_readonly)($gp)
/* 00458D08 1000006D */  b     .L00458EC0
/* 00458D0C 8C420000 */   lw    $v0, ($v0)
.L00458D10:
/* 00458D10 8F998388 */  lw    $t9, %call16(pointtoheap)($gp)
/* 00458D14 00C02025 */  move  $a0, $a2
/* 00458D18 AFA60040 */  sw    $a2, 0x40($sp)
/* 00458D1C 0320F809 */  jalr  $t9
/* 00458D20 00000000 */   nop   
/* 00458D24 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00458D28 10400004 */  beqz  $v0, .L00458D3C
/* 00458D2C 8FA60040 */   lw    $a2, 0x40($sp)
/* 00458D30 8F828920 */  lw     $v0, %got(mtagno_heap)($gp)
/* 00458D34 10000062 */  b     .L00458EC0
/* 00458D38 8C420000 */   lw    $v0, ($v0)
.L00458D3C:
/* 00458D3C 8F828A5C */  lw     $v0, %got(lang)($gp)
/* 00458D40 24040001 */  li    $a0, 1
/* 00458D44 24050100 */  li    $a1, 256
/* 00458D48 90420000 */  lbu   $v0, ($v0)
/* 00458D4C 2C410007 */  sltiu $at, $v0, 7
/* 00458D50 10200054 */  beqz  $at, .L00458EA4
/* 00458D54 00000000 */   nop   
/* 00458D58 8F818044 */  lw    $at, %got(jtbl_1000D1E8)($gp)
/* 00458D5C 0002C880 */  sll   $t9, $v0, 2
/* 00458D60 00390821 */  addu  $at, $at, $t9
/* 00458D64 8C39D1E8 */  lw    $t9, %lo(jtbl_1000D1E8)($at)
/* 00458D68 033CC821 */  addu  $t9, $t9, $gp
/* 00458D6C 03200008 */  jr    $t9
/* 00458D70 00000000 */   nop   
.L00458D74:
/* 00458D74 8F82891C */  lw     $v0, %got(mtagno_anything)($gp)
/* 00458D78 10000051 */  b     .L00458EC0
/* 00458D7C 8C420000 */   lw    $v0, ($v0)
.L00458D80:
/* 00458D80 8F848934 */  lw     $a0, %got(uu)($gp)
/* 00458D84 8F89892C */  lw     $t1, %got(next_mtagno)($gp)
/* 00458D88 2408008F */  li    $t0, 143
/* 00458D8C A0880000 */  sb    $t0, ($a0)
/* 00458D90 8D290000 */  lw    $t1, ($t1)
/* 00458D94 240A0008 */  li    $t2, 8
/* 00458D98 A48A0002 */  sh    $t2, 2($a0)
/* 00458D9C AC890004 */  sw    $t1, 4($a0)
/* 00458DA0 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 00458DA4 0320F809 */  jalr  $t9
/* 00458DA8 00000000 */   nop   
/* 00458DAC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00458DB0 8F82892C */  lw     $v0, %got(next_mtagno)($gp)
/* 00458DB4 8C4B0000 */  lw    $t3, ($v0)
/* 00458DB8 256C0001 */  addiu $t4, $t3, 1
/* 00458DBC 1000003F */  b     .L00458EBC
/* 00458DC0 AC4C0000 */   sw    $t4, ($v0)
.L00458DC4:
/* 00458DC4 8F8D8B44 */  lw     $t5, %got(use_c_semantics)($gp)
/* 00458DC8 91AD0000 */  lbu   $t5, ($t5)
/* 00458DCC 51A00005 */  beql  $t5, $zero, .L00458DE4
/* 00458DD0 90C20000 */   lbu   $v0, ($a2)
/* 00458DD4 8F82891C */  lw     $v0, %got(mtagno_anything)($gp)
/* 00458DD8 10000039 */  b     .L00458EC0
/* 00458DDC 8C420000 */   lw    $v0, ($v0)
/* 00458DE0 90C20000 */  lbu   $v0, ($a2)
.L00458DE4:
/* 00458DE4 24010003 */  li    $at, 3
/* 00458DE8 14410009 */  bne   $v0, $at, .L00458E10
/* 00458DEC 00000000 */   nop   
/* 00458DF0 90CE002E */  lbu   $t6, 0x2e($a2)
/* 00458DF4 24010001 */  li    $at, 1
/* 00458DF8 31CF0007 */  andi  $t7, $t6, 7
/* 00458DFC 15E10004 */  bne   $t7, $at, .L00458E10
/* 00458E00 00000000 */   nop   
/* 00458E04 8F82891C */  lw     $v0, %got(mtagno_anything)($gp)
/* 00458E08 1000002D */  b     .L00458EC0
/* 00458E0C 8C420000 */   lw    $v0, ($v0)
.L00458E10:
/* 00458E10 8F988AE0 */  lw     $t8, %got(nof77alias)($gp)
/* 00458E14 3C011200 */  lui   $at, 0x1200
/* 00458E18 93180000 */  lbu   $t8, ($t8)
/* 00458E1C 57000005 */  bnezl $t8, .L00458E34
/* 00458E20 2C590020 */   sltiu $t9, $v0, 0x20
/* 00458E24 8F828928 */  lw     $v0, %got(mtagno_non_local)($gp)
/* 00458E28 10000025 */  b     .L00458EC0
/* 00458E2C 8C420000 */   lw    $v0, ($v0)
/* 00458E30 2C590020 */  sltiu $t9, $v0, 0x20
.L00458E34:
/* 00458E34 00194023 */  negu  $t0, $t9
/* 00458E38 01014824 */  and   $t1, $t0, $at
/* 00458E3C 00495004 */  sllv  $t2, $t1, $v0
/* 00458E40 05400011 */  bltz  $t2, .L00458E88
/* 00458E44 240B008F */   li    $t3, 143
/* 00458E48 8F82892C */  lw     $v0, %got(next_mtagno)($gp)
/* 00458E4C 8F848934 */  lw     $a0, %got(uu)($gp)
/* 00458E50 240D0008 */  li    $t5, 8
/* 00458E54 8C4C0000 */  lw    $t4, ($v0)
/* 00458E58 A08B0000 */  sb    $t3, ($a0)
/* 00458E5C A48D0002 */  sh    $t5, 2($a0)
/* 00458E60 AC8C0004 */  sw    $t4, 4($a0)
/* 00458E64 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 00458E68 0320F809 */  jalr  $t9
/* 00458E6C 00000000 */   nop   
/* 00458E70 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00458E74 8F82892C */  lw     $v0, %got(next_mtagno)($gp)
/* 00458E78 8C4E0000 */  lw    $t6, ($v0)
/* 00458E7C 25CF0001 */  addiu $t7, $t6, 1
/* 00458E80 1000000E */  b     .L00458EBC
/* 00458E84 AC4F0000 */   sw    $t7, ($v0)
.L00458E88:
/* 00458E88 8F998424 */  lw    $t9, %call16(searchmtag_parm)($gp)
/* 00458E8C 00C02025 */  move  $a0, $a2
/* 00458E90 0320F809 */  jalr  $t9
/* 00458E94 00000000 */   nop   
/* 00458E98 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00458E9C 10000008 */  b     .L00458EC0
/* 00458EA0 94420008 */   lhu   $v0, 8($v0)
.L00458EA4:
/* 00458EA4 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 00458EA8 8F868044 */  lw    $a2, %got(RO_1000D1DB)($gp)
/* 00458EAC 2407000A */  li    $a3, 10
/* 00458EB0 0320F809 */  jalr  $t9
/* 00458EB4 24C6D1DB */   addiu $a2, %lo(RO_1000D1DB) # addiu $a2, $a2, -0x2e25
/* 00458EB8 8FBC0018 */  lw    $gp, 0x18($sp)
.L00458EBC:
/* 00458EBC 8FA2003C */  lw    $v0, 0x3c($sp)
.L00458EC0:
/* 00458EC0 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00458EC4 27BD0040 */  addiu $sp, $sp, 0x40
/* 00458EC8 03E00008 */  jr    $ra
/* 00458ECC 00000000 */   nop   
    .type assign_mtag, @function
    .size assign_mtag, .-assign_mtag
    .end assign_mtag
)"");
