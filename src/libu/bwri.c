#include "common.h"
#include "ucode.h"
#include "libu.h"

#include "debug.h"

#if 0
__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.data
D_100118A0:
    # 00486E88 ubittobyte
    .byte 0x00,0x00,0x00,0x18,0x04,0x03,0x8c,0xb0,0x02,0x40,0x00,0x84,0x00,0x00,0x60,0x00,0x00,0x20,0x00,0x00

D_100118B4:
    # 00486E88 ubittobyte
    .byte 0x00,0x04,0x00,0x00,0x40,0x00,0x00,0x00

D_100118BC:
    # 00486E88 ubittobyte
    .byte 0x00,0x00,0x20,0x00,0x01,0x00,0x00,0x00,0x00,0x04,0x80,0x00

D_100118C8:
    # 00486E88 ubittobyte
    .byte 0x00,0x00,0x12,0x01,0x80,0x00,0x00,0x00,0x00,0x08,0x00,0x00

D_100118D4:
    # 00486E88 ubittobyte
    .byte 0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x00,0x00,0x20,0x20,0x0e,0x91,0x00,0x10,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00

.text
)"");
#endif

/*
00486690 inituwrite
00486880 uwrite
00486E88 ubittobyte
*/
bool noerrorsyet;

/*
00486690 inituwrite
*/
int u_indent;

/*
00486690 inituwrite
00486AD4 getmtyname
*/
char mtyname[8];

/*
00486690 inituwrite
00486AB4 getdtyname
*/
char dtyname[18];

/*
004808D0 func_004808D0
00480920 func_00480920
00480964 uini
00486608 getutabrec
00486880 uwrite
00487B7C readuinstr
*/
struct utabrec utab[0x9C];

/*
00434720 processargs
*/
void inituwrite(const char *path) {
    noerrorsyet = true;

    uputinit(path);

    dtyname[Cdt] = 'C';
    dtyname[Fdt] = 'F';
    dtyname[Gdt] = 'G';
    dtyname[Hdt] = 'H';

    dtyname[Cdt] = 'C';
    dtyname[Fdt] = 'F';
    dtyname[Gdt] = 'G';
    dtyname[Hdt] = 'H';
    dtyname[Zdt] = 'Z';
    dtyname[Adt] = 'A';
    dtyname[Jdt] = 'J';
    dtyname[Ldt] = 'L';
    dtyname[Mdt] = 'M';
    dtyname[Ndt] = 'N';
    dtyname[Pdt] = 'P';
    dtyname[Qdt] = 'Q';
    dtyname[Rdt] = 'R';
    dtyname[Sdt] = 'S';
    dtyname[Xdt] = 'X';
    dtyname[Idt] = 'I';
    dtyname[Kdt] = 'K';
    dtyname[Wdt] = 'W';

    mtyname[Zmt] = 'Z';
    mtyname[Mmt] = 'M';
    mtyname[Rmt] = 'R';
    mtyname[Smt] = 'S';
    mtyname[Pmt] = 'P';
    mtyname[Amt] = 'A';

    u_indent = 0;
}

// unused
int idlen(const char id[32]) {
    int len = 32;
    while (len != 0 && id[len - 1] == ' ') {
        len--;
    }
    return len;
}

#if 0
__asm__(R""(

.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text

glabel fnamelen
    .ent fnamelen
    # 00486C78 ucofname
/* 004867F8 AFA40000 */  sw    $a0, ($sp)
/* 004867FC AFA50004 */  sw    $a1, 4($sp)
/* 00486800 AFA60008 */  sw    $a2, 8($sp)
/* 00486804 AFA7000C */  sw    $a3, 0xc($sp)
/* 00486808 00001825 */  move  $v1, $zero
/* 0048680C 24050400 */  li    $a1, 1024
/* 00486810 24040020 */  li    $a0, 32
/* 00486814 27A2FFFF */  addiu $v0, $sp, -1
.L00486818:
/* 00486818 904E0001 */  lbu   $t6, 1($v0)
/* 0048681C 548E0004 */  bnel  $a0, $t6, .L00486830
/* 00486820 904F0002 */   lbu   $t7, 2($v0)
/* 00486824 03E00008 */  jr    $ra
/* 00486828 00601025 */   move  $v0, $v1

/* 0048682C 904F0002 */  lbu   $t7, 2($v0)
.L00486830:
/* 00486830 548F0004 */  bnel  $a0, $t7, .L00486844
/* 00486834 90580003 */   lbu   $t8, 3($v0)
/* 00486838 03E00008 */  jr    $ra
/* 0048683C 24620001 */   addiu $v0, $v1, 1

/* 00486840 90580003 */  lbu   $t8, 3($v0)
.L00486844:
/* 00486844 54980004 */  bnel  $a0, $t8, .L00486858
/* 00486848 90590004 */   lbu   $t9, 4($v0)
/* 0048684C 03E00008 */  jr    $ra
/* 00486850 24620002 */   addiu $v0, $v1, 2

/* 00486854 90590004 */  lbu   $t9, 4($v0)
.L00486858:
/* 00486858 54990004 */  bnel  $a0, $t9, .L0048686C
/* 0048685C 24630004 */   addiu $v1, $v1, 4
/* 00486860 03E00008 */  jr    $ra
/* 00486864 24620003 */   addiu $v0, $v1, 3

/* 00486868 24630004 */  addiu $v1, $v1, 4
.L0048686C:
/* 0048686C 1465FFEA */  bne   $v1, $a1, .L00486818
/* 00486870 24420004 */   addiu $v0, $v0, 4
/* 00486874 24020400 */  li    $v0, 1024
/* 00486878 03E00008 */  jr    $ra
/* 0048687C 00000000 */   nop   
    .type fnamelen, @function
    .size fnamelen, .-fnamelen
    .end fnamelen

)"");
#endif

/*
0041EC10 igen3
0041EE30 outparlod
0041EF64 gen_cvtl
0041EFD4 gen_cvt
0041F048 genrop
0041F6F0 base_in_reg
0041FB20 spilltemplodstr
0041FC80 genloadaddr
0041FD3C genloadnum
0042018C genloadrnum
0042020C gen_static_link
004205F8 genrlodrstr
00420A3C prolog
00421C00 epilog
00422AF0 func_00422AF0
00422D04 func_00422D04
004230F0 emit_expr
00426FA4 func_00426FA4
0042933C func_0042933C
0042A1C8 func_0042A1C8
0042A4CC func_0042A4CC
0042A7D0 func_0042A7D0
0042AADC func_0042AADC
0042B2C0 func_0042B2C0
0042B890 func_0042B890
0042BB4C func_0042BB4C
0042BF08 reemit
0043A0CC copyline
00456A2C oneproc
0045806C main
004584D0 init_mtagtab
0045877C searchmtag_parm
0045889C func_0045889C
00458998 func_00458998
00458B88 assign_mtag
0047FF7C skipproc
00486AF4 ucoid
00486C78 ucofname
*/
void uwrite(union Bcode *bcode) {
    struct Bcrec *uinstr = &bcode->Ucode;
    int i;
    int strlength;
    char *str;

    if (!noerrorsyet) {
        return;
    }

    push_output(bcode);

    struct utabrec urec = utab[uinstr->Opc];
    for (i = 0; i < urec.instlength; i += 2) {
        uputint(bcode->intarray[i], true);
        uputint(bcode->intarray[i + 1], true);
    }
    if (urec.hasconst) {
        uputint(bcode->intarray[urec.instlength], true);
        uputint(bcode->intarray[urec.instlength + 1], true);
        if (((1 << uinstr->Dtype) & ((1 << Mdt) | (1 << Qdt) | (1 << Rdt) | (1 << Sdt) | (1 << Xdt))) || uinstr->Opc == Ucomm) {
            if (uinstr->Opc == Uinit) {
                strlength = (uinstr->Uopcde.uiequ1.uop2.uinit.initval.swpart.Ival + 3) / 4;
            } else {
                strlength = (uinstr->Uopcde.uiequ1.uop2.Constval.swpart.Ival + 3) / 4;
            }
            if (strlength & 1) {
                strlength++;
            }
            if (uinstr->Opc == Uinit) {
                str = uinstr->Uopcde.uiequ1.uop2.uinit.initval.swpart.Chars;
            } else {
                str = uinstr->Uopcde.uiequ1.uop2.Constval.swpart.Chars;
            }
            for (i = 0; i < strlength; i += 2) {
                uputint(((int *)str)[i], false);
                uputint(((int *)str)[i + 1], false);
            }
        }
    }
}

// unused
char getdtyname(enum Datatype type) {
    return dtyname[type];
}

// unused
char getmtyname(enum Memtype type) {
    return mtyname[type];
}

#if 0
__asm__(R""(
.text
.set noat
.set noreorder

glabel ucoid
    .ent ucoid
/* 00486AF4 3C1C0FB9 */  .cpload $t9
/* 00486AF8 279C379C */  
/* 00486AFC 0399E021 */  
/* 00486B00 27BDFFA0 */  addiu $sp, $sp, -0x60
/* 00486B04 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00486B08 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00486B0C AFA40060 */  sw    $a0, 0x60($sp)
/* 00486B10 AFA50064 */  sw    $a1, 0x64($sp)
/* 00486B14 AFA60068 */  sw    $a2, 0x68($sp)
/* 00486B18 AFA7006C */  sw    $a3, 0x6c($sp)
/* 00486B1C AFA00038 */  sw    $zero, 0x38($sp)
/* 00486B20 AFA0003C */  sw    $zero, 0x3c($sp)
/* 00486B24 AFA00040 */  sw    $zero, 0x40($sp)
/* 00486B28 AFA00044 */  sw    $zero, 0x44($sp)
/* 00486B2C AFA00050 */  sw    $zero, 0x50($sp)
/* 00486B30 AFA00054 */  sw    $zero, 0x54($sp)
/* 00486B34 27A20038 */  addiu $v0, $sp, 0x38
/* 00486B38 27A30058 */  addiu $v1, $sp, 0x58
.L00486B3C:
/* 00486B3C 24420010 */  addiu $v0, $v0, 0x10
/* 00486B40 AC40FFF0 */  sw    $zero, -0x10($v0)
/* 00486B44 AC40FFF4 */  sw    $zero, -0xc($v0)
/* 00486B48 AC40FFF8 */  sw    $zero, -8($v0)
/* 00486B4C 1443FFFB */  bne   $v0, $v1, .L00486B3C
/* 00486B50 AC40FFFC */   sw    $zero, -4($v0)
/* 00486B54 8F998884 */  lw    $t9, %call16(new)($gp)
/* 00486B58 24040400 */  li    $a0, 1024
/* 00486B5C 00002825 */  move  $a1, $zero
/* 00486B60 0320F809 */  jalr  $t9
/* 00486B64 00000000 */   nop   
/* 00486B68 93AE007F */  lbu   $t6, 0x7f($sp)
/* 00486B6C 24040020 */  li    $a0, 32
/* 00486B70 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00486B74 AFA2004C */  sw    $v0, 0x4c($sp)
/* 00486B78 148E0008 */  bne   $a0, $t6, .L00486B9C
/* 00486B7C 24030020 */   li    $v1, 32
/* 00486B80 27A5005F */  addiu $a1, $sp, 0x5f
/* 00486B84 2463FFFF */  addiu $v1, $v1, -1
.L00486B88:
/* 00486B88 18600004 */  blez  $v1, .L00486B9C
/* 00486B8C 00A37821 */   addu  $t7, $a1, $v1
/* 00486B90 91F80000 */  lbu   $t8, ($t7)
/* 00486B94 5098FFFC */  beql  $a0, $t8, .L00486B88
/* 00486B98 2463FFFF */   addiu $v1, $v1, -1
.L00486B9C:
/* 00486B9C 18600021 */  blez  $v1, .L00486C24
/* 00486BA0 AFA30048 */   sw    $v1, 0x48($sp)
/* 00486BA4 24670001 */  addiu $a3, $v1, 1
/* 00486BA8 24E8FFFF */  addiu $t0, $a3, -1
/* 00486BAC 31080003 */  andi  $t0, $t0, 3
/* 00486BB0 24050001 */  li    $a1, 1
/* 00486BB4 1100000C */  beqz  $t0, .L00486BE8
/* 00486BB8 AFA30048 */   sw    $v1, 0x48($sp)
/* 00486BBC 27B9005F */  addiu $t9, $sp, 0x5f
/* 00486BC0 00B92021 */  addu  $a0, $a1, $t9
/* 00486BC4 25060001 */  addiu $a2, $t0, 1
/* 00486BC8 00451821 */  addu  $v1, $v0, $a1
.L00486BCC:
/* 00486BCC 90890000 */  lbu   $t1, ($a0)
/* 00486BD0 24A50001 */  addiu $a1, $a1, 1
/* 00486BD4 24840001 */  addiu $a0, $a0, 1
/* 00486BD8 24630001 */  addiu $v1, $v1, 1
/* 00486BDC 14C5FFFB */  bne   $a2, $a1, .L00486BCC
/* 00486BE0 A069FFFE */   sb    $t1, -2($v1)
/* 00486BE4 10A7000F */  beq   $a1, $a3, .L00486C24
.L00486BE8:
/* 00486BE8 27AA005F */   addiu $t2, $sp, 0x5f
/* 00486BEC 00AA2021 */  addu  $a0, $a1, $t2
/* 00486BF0 00E23021 */  addu  $a2, $a3, $v0
/* 00486BF4 00451821 */  addu  $v1, $v0, $a1
.L00486BF8:
/* 00486BF8 908B0000 */  lbu   $t3, ($a0)
/* 00486BFC 908C0001 */  lbu   $t4, 1($a0)
/* 00486C00 908D0002 */  lbu   $t5, 2($a0)
/* 00486C04 908E0003 */  lbu   $t6, 3($a0)
/* 00486C08 24630004 */  addiu $v1, $v1, 4
/* 00486C0C 24840004 */  addiu $a0, $a0, 4
/* 00486C10 A06BFFFB */  sb    $t3, -5($v1)
/* 00486C14 A06CFFFC */  sb    $t4, -4($v1)
/* 00486C18 A06DFFFD */  sb    $t5, -3($v1)
/* 00486C1C 1466FFF6 */  bne   $v1, $a2, .L00486BF8
/* 00486C20 A06EFFFE */   sb    $t6, -2($v1)
.L00486C24:
/* 00486C24 93B80039 */  lbu   $t8, 0x39($sp)
/* 00486C28 240F0013 */  li    $t7, 19
/* 00486C2C A3AF0038 */  sb    $t7, 0x38($sp)
/* 00486C30 3319FFE0 */  andi  $t9, $t8, 0xffe0
/* 00486C34 37290009 */  ori   $t1, $t9, 9
/* 00486C38 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 00486C3C A3A90039 */  sb    $t1, 0x39($sp)
/* 00486C40 27A40038 */  addiu $a0, $sp, 0x38
/* 00486C44 0320F809 */  jalr  $t9
/* 00486C48 00000000 */   nop   
/* 00486C4C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00486C50 8FA4004C */  lw    $a0, 0x4c($sp)
/* 00486C54 24050400 */  li    $a1, 1024
/* 00486C58 8F998888 */  lw    $t9, %call16(dispose)($gp)
/* 00486C5C 0320F809 */  jalr  $t9
/* 00486C60 00000000 */   nop   
/* 00486C64 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00486C68 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00486C6C 27BD0060 */  addiu $sp, $sp, 0x60
/* 00486C70 03E00008 */  jr    $ra
/* 00486C74 00000000 */   nop   
    .type ucoid, @function
    .size ucoid, .-ucoid
    .end ucoid

glabel ucofname
    .ent ucofname
/* 00486C78 3C1C0FB9 */  .cpload $t9
/* 00486C7C 279C3618 */  
/* 00486C80 0399E021 */  
/* 00486C84 27BDFBB0 */  addiu $sp, $sp, -0x450
/* 00486C88 AFBF040C */  sw    $ra, 0x40c($sp)
/* 00486C8C AFBC0408 */  sw    $gp, 0x408($sp)
/* 00486C90 AFA40450 */  sw    $a0, 0x450($sp)
/* 00486C94 AFA50454 */  sw    $a1, 0x454($sp)
/* 00486C98 AFA60458 */  sw    $a2, 0x458($sp)
/* 00486C9C AFA7045C */  sw    $a3, 0x45c($sp)
/* 00486CA0 AFA00428 */  sw    $zero, 0x428($sp)
/* 00486CA4 AFA0042C */  sw    $zero, 0x42c($sp)
/* 00486CA8 AFA00430 */  sw    $zero, 0x430($sp)
/* 00486CAC AFA00434 */  sw    $zero, 0x434($sp)
/* 00486CB0 AFA00440 */  sw    $zero, 0x440($sp)
/* 00486CB4 AFA00444 */  sw    $zero, 0x444($sp)
/* 00486CB8 27A20428 */  addiu $v0, $sp, 0x428
/* 00486CBC 27A30448 */  addiu $v1, $sp, 0x448
.L00486CC0:
/* 00486CC0 24420004 */  addiu $v0, $v0, 4
/* 00486CC4 1443FFFE */  bne   $v0, $v1, .L00486CC0
/* 00486CC8 AC40FFFC */   sw    $zero, -4($v0)
/* 00486CCC 8F998884 */  lw    $t9, %call16(new)($gp)
/* 00486CD0 24040400 */  li    $a0, 1024
/* 00486CD4 00002825 */  move  $a1, $zero
/* 00486CD8 0320F809 */  jalr  $t9
/* 00486CDC 00000000 */   nop   
/* 00486CE0 27AE0450 */  addiu $t6, $sp, 0x450
/* 00486CE4 8FBC0408 */  lw    $gp, 0x408($sp)
/* 00486CE8 AFA2043C */  sw    $v0, 0x43c($sp)
/* 00486CEC 25C803FC */  addiu $t0, $t6, 0x3fc
/* 00486CF0 03A0C825 */  move  $t9, $sp
.L00486CF4:
/* 00486CF4 89D80000 */  lwl   $t8, ($t6)
/* 00486CF8 99D80003 */  lwr   $t8, 3($t6)
/* 00486CFC 25CE000C */  addiu $t6, $t6, 0xc
/* 00486D00 2739000C */  addiu $t9, $t9, 0xc
/* 00486D04 AB38FFF4 */  swl   $t8, -0xc($t9)
/* 00486D08 BB38FFF7 */  swr   $t8, -9($t9)
/* 00486D0C 89CFFFF8 */  lwl   $t7, -8($t6)
/* 00486D10 99CFFFFB */  lwr   $t7, -5($t6)
/* 00486D14 AB2FFFF8 */  swl   $t7, -8($t9)
/* 00486D18 BB2FFFFB */  swr   $t7, -5($t9)
/* 00486D1C 89D8FFFC */  lwl   $t8, -4($t6)
/* 00486D20 99D8FFFF */  lwr   $t8, -1($t6)
/* 00486D24 AB38FFFC */  swl   $t8, -4($t9)
/* 00486D28 15C8FFF2 */  bne   $t6, $t0, .L00486CF4
/* 00486D2C BB38FFFF */   swr   $t8, -1($t9)
/* 00486D30 89D80000 */  lwl   $t8, ($t6)
/* 00486D34 99D80003 */  lwr   $t8, 3($t6)
/* 00486D38 AB380000 */  swl   $t8, ($t9)
/* 00486D3C BB380003 */  swr   $t8, 3($t9)
/* 00486D40 8F99873C */  lw    $t9, %call16(fnamelen)($gp)
/* 00486D44 8FA7000C */  lw    $a3, 0xc($sp)
/* 00486D48 8FA60008 */  lw    $a2, 8($sp)
/* 00486D4C 8FA50004 */  lw    $a1, 4($sp)
/* 00486D50 0320F809 */  jalr  $t9
/* 00486D54 8FA40000 */   lw    $a0, ($sp)
/* 00486D58 28410401 */  slti  $at, $v0, 0x401
/* 00486D5C 8FBC0408 */  lw    $gp, 0x408($sp)
/* 00486D60 14200002 */  bnez  $at, .L00486D6C
/* 00486D64 00401825 */   move  $v1, $v0
/* 00486D68 24030400 */  li    $v1, 1024
.L00486D6C:
/* 00486D6C 18600024 */  blez  $v1, .L00486E00
/* 00486D70 AFA30438 */   sw    $v1, 0x438($sp)
/* 00486D74 24660001 */  addiu $a2, $v1, 1
/* 00486D78 24C7FFFF */  addiu $a3, $a2, -1
/* 00486D7C 30E70003 */  andi  $a3, $a3, 3
/* 00486D80 24040001 */  li    $a0, 1
/* 00486D84 10E0000E */  beqz  $a3, .L00486DC0
/* 00486D88 AFA30438 */   sw    $v1, 0x438($sp)
/* 00486D8C 8FA9043C */  lw    $t1, 0x43c($sp)
/* 00486D90 27AA044F */  addiu $t2, $sp, 0x44f
/* 00486D94 008A1021 */  addu  $v0, $a0, $t2
/* 00486D98 24E50001 */  addiu $a1, $a3, 1
/* 00486D9C 01241821 */  addu  $v1, $t1, $a0
.L00486DA0:
/* 00486DA0 904B0000 */  lbu   $t3, ($v0)
/* 00486DA4 24840001 */  addiu $a0, $a0, 1
/* 00486DA8 24630001 */  addiu $v1, $v1, 1
/* 00486DAC 24420001 */  addiu $v0, $v0, 1
/* 00486DB0 14A4FFFB */  bne   $a1, $a0, .L00486DA0
/* 00486DB4 A06BFFFE */   sb    $t3, -2($v1)
/* 00486DB8 50860012 */  beql  $a0, $a2, .L00486E04
/* 00486DBC 93A90429 */   lbu   $t1, 0x429($sp)
.L00486DC0:
/* 00486DC0 8FAC043C */  lw    $t4, 0x43c($sp)
/* 00486DC4 27AD044F */  addiu $t5, $sp, 0x44f
/* 00486DC8 008D1021 */  addu  $v0, $a0, $t5
/* 00486DCC 00CD2821 */  addu  $a1, $a2, $t5
/* 00486DD0 01841821 */  addu  $v1, $t4, $a0
.L00486DD4:
/* 00486DD4 90480000 */  lbu   $t0, ($v0)
/* 00486DD8 904E0001 */  lbu   $t6, 1($v0)
/* 00486DDC 90590002 */  lbu   $t9, 2($v0)
/* 00486DE0 904F0003 */  lbu   $t7, 3($v0)
/* 00486DE4 24420004 */  addiu $v0, $v0, 4
/* 00486DE8 24630004 */  addiu $v1, $v1, 4
/* 00486DEC A068FFFB */  sb    $t0, -5($v1)
/* 00486DF0 A06EFFFC */  sb    $t6, -4($v1)
/* 00486DF4 A079FFFD */  sb    $t9, -3($v1)
/* 00486DF8 1445FFF6 */  bne   $v0, $a1, .L00486DD4
/* 00486DFC A06FFFFE */   sb    $t7, -2($v1)
.L00486E00:
/* 00486E00 93A90429 */  lbu   $t1, 0x429($sp)
.L00486E04:
/* 00486E04 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 00486E08 24180013 */  li    $t8, 19
/* 00486E0C 312AFFE0 */  andi  $t2, $t1, 0xffe0
/* 00486E10 354B0009 */  ori   $t3, $t2, 9
/* 00486E14 A3B80428 */  sb    $t8, 0x428($sp)
/* 00486E18 A3AB0429 */  sb    $t3, 0x429($sp)
/* 00486E1C 0320F809 */  jalr  $t9
/* 00486E20 27A40428 */   addiu $a0, $sp, 0x428
/* 00486E24 8FBC0408 */  lw    $gp, 0x408($sp)
/* 00486E28 8FA4043C */  lw    $a0, 0x43c($sp)
/* 00486E2C 24050400 */  li    $a1, 1024
/* 00486E30 8F998888 */  lw    $t9, %call16(dispose)($gp)
/* 00486E34 0320F809 */  jalr  $t9
/* 00486E38 00000000 */   nop   
/* 00486E3C 8FBF040C */  lw    $ra, 0x40c($sp)
/* 00486E40 8FBC0408 */  lw    $gp, 0x408($sp)
/* 00486E44 27BD0450 */  addiu $sp, $sp, 0x450
/* 00486E48 03E00008 */  jr    $ra
/* 00486E4C 00000000 */   nop   
    .type ucofname, @function
    .size ucofname, .-ucofname
    .end ucofname
)"");
#endif

// unused
void stopucode(void) {
    uputkill();
    noerrorsyet = false;
}

#if 0
__asm__(R""(
.set noat
.set noreorder
glabel ubittobyte
    .ent ubittobyte
/* 00486E88 90820000 */  lbu   $v0, ($a0)
/* 00486E8C 2C4E00A0 */  sltiu $t6, $v0, 0xa0
/* 00486E90 11C00009 */  beqz  $t6, .L00486EB8
/* 00486E94 2443FFE0 */   addiu $v1, $v0, -0x20
/* 00486E98 8F998044 */  lw    $t9, %got(D_100118D4)($gp)
/* 00486E9C 00027943 */  sra   $t7, $v0, 5
/* 00486EA0 000FC080 */  sll   $t8, $t7, 2
/* 00486EA4 273918D4 */  addiu $t9, %lo(D_100118D4) # addiu $t9, $t9, 0x18d4
/* 00486EA8 03384021 */  addu  $t0, $t9, $t8
/* 00486EAC 8D090000 */  lw    $t1, ($t0)
/* 00486EB0 00495004 */  sllv  $t2, $t1, $v0
/* 00486EB4 294E0000 */  slti  $t6, $t2, 0
.L00486EB8:
/* 00486EB8 11C0000E */  beqz  $t6, .L00486EF4
/* 00486EBC 2C780060 */   sltiu $t8, $v1, 0x60
/* 00486EC0 8C8C000C */  lw    $t4, 0xc($a0)
/* 00486EC4 8C8F0008 */  lw    $t7, 8($a0)
/* 00486EC8 05810003 */  bgez  $t4, .L00486ED8
/* 00486ECC 000C68C3 */   sra   $t5, $t4, 3
/* 00486ED0 25810007 */  addiu $at, $t4, 7
/* 00486ED4 000168C3 */  sra   $t5, $at, 3
.L00486ED8:
/* 00486ED8 AC8D000C */  sw    $t5, 0xc($a0)
/* 00486EDC 05E10003 */  bgez  $t7, .L00486EEC
/* 00486EE0 000FC8C3 */   sra   $t9, $t7, 3
/* 00486EE4 25E10007 */  addiu $at, $t7, 7
/* 00486EE8 0001C8C3 */  sra   $t9, $at, 3
.L00486EEC:
/* 00486EEC 03E00008 */  jr    $ra
/* 00486EF0 AC990008 */   sw    $t9, 8($a0)

.L00486EF4:
/* 00486EF4 13000009 */  beqz  $t8, .L00486F1C
/* 00486EF8 00000000 */   nop   
/* 00486EFC 8F8A8044 */  lw    $t2, %got(D_100118C8)($gp)
/* 00486F00 00034143 */  sra   $t0, $v1, 5
/* 00486F04 00084880 */  sll   $t1, $t0, 2
/* 00486F08 254A18C8 */  addiu $t2, %lo(D_100118C8) # addiu $t2, $t2, 0x18c8
/* 00486F0C 01495821 */  addu  $t3, $t2, $t1
/* 00486F10 8D6E0000 */  lw    $t6, ($t3)
/* 00486F14 006E6004 */  sllv  $t4, $t6, $v1
/* 00486F18 29980000 */  slti  $t8, $t4, 0
.L00486F1C:
/* 00486F1C 1300000E */  beqz  $t8, .L00486F58
/* 00486F20 2C690060 */   sltiu $t1, $v1, 0x60
/* 00486F24 8C8F0004 */  lw    $t7, 4($a0)
/* 00486F28 8C880008 */  lw    $t0, 8($a0)
/* 00486F2C 05E10003 */  bgez  $t7, .L00486F3C
/* 00486F30 000FC8C3 */   sra   $t9, $t7, 3
/* 00486F34 25E10007 */  addiu $at, $t7, 7
/* 00486F38 0001C8C3 */  sra   $t9, $at, 3
.L00486F3C:
/* 00486F3C AC990004 */  sw    $t9, 4($a0)
/* 00486F40 05010003 */  bgez  $t0, .L00486F50
/* 00486F44 000850C3 */   sra   $t2, $t0, 3
/* 00486F48 25010007 */  addiu $at, $t0, 7
/* 00486F4C 000150C3 */  sra   $t2, $at, 3
.L00486F50:
/* 00486F50 03E00008 */  jr    $ra
/* 00486F54 AC8A0008 */   sw    $t2, 8($a0)

.L00486F58:
/* 00486F58 1120000A */  beqz  $t1, .L00486F84
/* 00486F5C 00000000 */   nop   
/* 00486F60 8F8C8044 */  lw    $t4, %got(D_100118BC)($gp)
/* 00486F64 00035943 */  sra   $t3, $v1, 5
/* 00486F68 000B7080 */  sll   $t6, $t3, 2
/* 00486F6C 258C18BC */  addiu $t4, %lo(D_100118BC) # addiu $t4, $t4, 0x18bc
/* 00486F70 018E6821 */  addu  $t5, $t4, $t6
/* 00486F74 8DB80000 */  lw    $t8, ($t5)
/* 00486F78 00787804 */  sllv  $t7, $t8, $v1
/* 00486F7C 29F90000 */  slti  $t9, $t7, 0
/* 00486F80 03204825 */  move  $t1, $t9
.L00486F84:
/* 00486F84 11200014 */  beqz  $t1, .L00486FD8
/* 00486F88 2C780040 */   sltiu $t8, $v1, 0x40
/* 00486F8C 8C88000C */  lw    $t0, 0xc($a0)
/* 00486F90 8C8B0008 */  lw    $t3, 8($a0)
/* 00486F94 8C8E0010 */  lw    $t6, 0x10($a0)
/* 00486F98 05010003 */  bgez  $t0, .L00486FA8
/* 00486F9C 000850C3 */   sra   $t2, $t0, 3
/* 00486FA0 25010007 */  addiu $at, $t0, 7
/* 00486FA4 000150C3 */  sra   $t2, $at, 3
.L00486FA8:
/* 00486FA8 AC8A000C */  sw    $t2, 0xc($a0)
/* 00486FAC 05610003 */  bgez  $t3, .L00486FBC
/* 00486FB0 000B60C3 */   sra   $t4, $t3, 3
/* 00486FB4 25610007 */  addiu $at, $t3, 7
/* 00486FB8 000160C3 */  sra   $t4, $at, 3
.L00486FBC:
/* 00486FBC AC8C0008 */  sw    $t4, 8($a0)
/* 00486FC0 05C10003 */  bgez  $t6, .L00486FD0
/* 00486FC4 000E68C3 */   sra   $t5, $t6, 3
/* 00486FC8 25C10007 */  addiu $at, $t6, 7
/* 00486FCC 000168C3 */  sra   $t5, $at, 3
.L00486FD0:
/* 00486FD0 03E00008 */  jr    $ra
/* 00486FD4 AC8D0010 */   sw    $t5, 0x10($a0)

.L00486FD8:
/* 00486FD8 13000009 */  beqz  $t8, .L00487000
/* 00486FDC 00000000 */   nop   
/* 00486FE0 8F898044 */  lw    $t1, %got(D_100118B4)($gp)
/* 00486FE4 00037943 */  sra   $t7, $v1, 5
/* 00486FE8 000FC880 */  sll   $t9, $t7, 2
/* 00486FEC 252918B4 */  addiu $t1, %lo(D_100118B4) # addiu $t1, $t1, 0x18b4
/* 00486FF0 01394021 */  addu  $t0, $t1, $t9
/* 00486FF4 8D0A0000 */  lw    $t2, ($t0)
/* 00486FF8 006A5804 */  sllv  $t3, $t2, $v1
/* 00486FFC 29780000 */  slti  $t8, $t3, 0
.L00487000:
/* 00487000 13000008 */  beqz  $t8, .L00487024
/* 00487004 2C4F00A0 */   sltiu $t7, $v0, 0xa0
/* 00487008 8C8E0004 */  lw    $t6, 4($a0)
/* 0048700C 05C10003 */  bgez  $t6, .L0048701C
/* 00487010 000E68C3 */   sra   $t5, $t6, 3
/* 00487014 25C10007 */  addiu $at, $t6, 7
/* 00487018 000168C3 */  sra   $t5, $at, 3
.L0048701C:
/* 0048701C 03E00008 */  jr    $ra
/* 00487020 AC8D0004 */   sw    $t5, 4($a0)

.L00487024:
/* 00487024 11E00009 */  beqz  $t7, .L0048704C
/* 00487028 24010039 */   li    $at, 57
/* 0048702C 8F888044 */  lw    $t0, %got(D_100118A0)($gp)
/* 00487030 00024943 */  sra   $t1, $v0, 5
/* 00487034 0009C880 */  sll   $t9, $t1, 2
/* 00487038 250818A0 */  addiu $t0, %lo(D_100118A0) # addiu $t0, $t0, 0x18a0
/* 0048703C 01195021 */  addu  $t2, $t0, $t9
/* 00487040 8D4B0000 */  lw    $t3, ($t2)
/* 00487044 004B6004 */  sllv  $t4, $t3, $v0
/* 00487048 298F0000 */  slti  $t7, $t4, 0
.L0048704C:
/* 0048704C 11E00008 */  beqz  $t7, .L00487070
/* 00487050 00000000 */   nop   
/* 00487054 8C8E0008 */  lw    $t6, 8($a0)
/* 00487058 05C10003 */  bgez  $t6, .L00487068
/* 0048705C 000E68C3 */   sra   $t5, $t6, 3
/* 00487060 25C10007 */  addiu $at, $t6, 7
/* 00487064 000168C3 */  sra   $t5, $at, 3
.L00487068:
/* 00487068 03E00008 */  jr    $ra
/* 0048706C AC8D0008 */   sw    $t5, 8($a0)

.L00487070:
/* 00487070 5441001B */  bnel  $v0, $at, .L004870E0
/* 00487074 24010063 */   li    $at, 99
/* 00487078 8C89000C */  lw    $t1, 0xc($a0)
/* 0048707C 8C990008 */  lw    $t9, 8($a0)
/* 00487080 8C8B0010 */  lw    $t3, 0x10($a0)
/* 00487084 05210003 */  bgez  $t1, .L00487094
/* 00487088 000940C3 */   sra   $t0, $t1, 3
/* 0048708C 25210007 */  addiu $at, $t1, 7
/* 00487090 000140C3 */  sra   $t0, $at, 3
.L00487094:
/* 00487094 8C980014 */  lw    $t8, 0x14($a0)
/* 00487098 AC88000C */  sw    $t0, 0xc($a0)
/* 0048709C 07210003 */  bgez  $t9, .L004870AC
/* 004870A0 001950C3 */   sra   $t2, $t9, 3
/* 004870A4 27210007 */  addiu $at, $t9, 7
/* 004870A8 000150C3 */  sra   $t2, $at, 3
.L004870AC:
/* 004870AC AC8A0008 */  sw    $t2, 8($a0)
/* 004870B0 05610003 */  bgez  $t3, .L004870C0
/* 004870B4 000B60C3 */   sra   $t4, $t3, 3
/* 004870B8 25610007 */  addiu $at, $t3, 7
/* 004870BC 000160C3 */  sra   $t4, $at, 3
.L004870C0:
/* 004870C0 AC8C0010 */  sw    $t4, 0x10($a0)
/* 004870C4 07010003 */  bgez  $t8, .L004870D4
/* 004870C8 001878C3 */   sra   $t7, $t8, 3
/* 004870CC 27010007 */  addiu $at, $t8, 7
/* 004870D0 000178C3 */  sra   $t7, $at, 3
.L004870D4:
/* 004870D4 03E00008 */  jr    $ra
/* 004870D8 AC8F0014 */   sw    $t7, 0x14($a0)

/* 004870DC 24010063 */  li    $at, 99
.L004870E0:
/* 004870E0 1441000B */  bne   $v0, $at, .L00487110
/* 004870E4 00000000 */   nop   
/* 004870E8 8C8E0004 */  lw    $t6, 4($a0)
/* 004870EC 24010001 */  li    $at, 1
/* 004870F0 15C10007 */  bne   $t6, $at, .L00487110
/* 004870F4 00000000 */   nop   
/* 004870F8 8C8D0008 */  lw    $t5, 8($a0)
/* 004870FC 05A10003 */  bgez  $t5, .L0048710C
/* 00487100 000D48C3 */   sra   $t1, $t5, 3
/* 00487104 25A10007 */  addiu $at, $t5, 7
/* 00487108 000148C3 */  sra   $t1, $at, 3
.L0048710C:
/* 0048710C AC890008 */  sw    $t1, 8($a0)
.L00487110:
/* 00487110 03E00008 */  jr    $ra
/* 00487114 00000000 */   nop   
    .type ubittobyte, @function
    .size ubittobyte, .-ubittobyte
    .end ubittobyte

glabel set_u_indent
    .ent set_u_indent
/* 00487118 03E00008 */  jr    $ra
/* 0048711C AFA40000 */   sw    $a0, ($sp)
    .type set_u_indent, @function
    .size set_u_indent, .-set_u_indent
    .end set_u_indent
)"");
#endif
