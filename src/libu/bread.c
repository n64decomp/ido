#include "common.h"
#include "libu.h"

__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.data
D_10011900:
    # 00487F54 ubytetobit
    .byte 0x00,0x00,0x00,0x18,0x04,0x03,0x8c,0xb0,0x02,0x40,0x00,0x84,0x00,0x00,0x60,0x00,0x00,0x20,0x00,0x00

D_10011914:
    # 00487F54 ubytetobit
    .byte 0x00,0x00,0x20,0x00,0x01,0x00,0x00,0x00,0x00,0x04,0x80,0x00

D_10011920:
    # 00487F54 ubytetobit
    .byte 0x00,0x00,0x12,0x01,0x80,0x00,0x00,0x00,0x00,0x08,0x00,0x00

D_1001192C:
    # 00487F54 ubytetobit
    .byte 0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x00,0x00,0x20,0x20,0x0e,0x91,0x00,0x10,0x00,0x10,0x00,0x00

.bss
    .balign 8
# 1001CAF8
glabel opchashtab
    .space 264
    .size opchashtab, 264
    .type opchashtab, @object


.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
)"");

/*
00487E48 initur
*/
int memorychars;

/*
00487E48 initur
*/
int datachars;

/*
00487E48 initur
*/
long long int setconstantchars;

/*
00487E48 initur
*/
unsigned char dtytype[26];

/*
00487E48 initur
*/
unsigned char mtytype[26];

// unused
void resetur(void) {
    ugetclose();
}

/*
00487B7C readuinstr
*/
static void func_00487994(char *str, int *len) {
    if (*len == 8) {
        if (str[0] == 'I' && 'n' == str[1] && 'f' == str[2] && 'i' == str[3] && 'n' == str[4] && 'i' == str[5] && str[6] == 't' && str[7] == 'y') {
            str[0] = '9';
            str[1] = '9';
            str[2] = '.';
            str[3] = '9';
            str[4] = 'e';
            str[5] = '9';
            str[6] = '9';
            str[7] = '9';
            *len = 8;
            return;
        }
    }
    if (*len == 3) {
        if ('i' == str[0] && 'n' == str[1] && 'f' == str[2]) {
            str[0] = '9';
            str[1] = '9';
            str[2] = '.';
            str[3] = '9';
            str[4] = 'e';
            str[5] = '9';
            str[6] = '9';
            str[7] = '9';
            *len = 8;
            return;
        }
    }
    if ((*len == 9 && str[0] == '-' && str[1] == 'I' && str[2] == 'n' && str[3] == 'f' && str[4] == 'i' && str[5] == 'n' && str[6] == 'i' && str[7] == 't' && str[8] == 'y') || (*len == 4 && str[0] == '-' && str[1] == 'i' && str[2] == 'n' && str[3] == 'f')) {
        str[1] = '9';
        str[2] = '9';
        str[3] = '.';
        str[4] = '9';
        str[5] = 'e';
        str[6] = '9';
        str[7] = '9';
        str[8] = '9';
        *len = 9;
    }
}

/*
00439C40 getop
0045806C main
0045B508 oneprocprepass
0045C150 prepass
0047FF7C skipproc
*/
void readuinstr(union Bcode *bcode, char *ustr) {
    struct Bcrec *uinstr = &bcode->Ucode;
    struct utabrec urec;
    int instlength;
    int i;
    int strlength;

    if (ugeteof() == true) {
        uinstr->Opc = Ueof;
        return;
    }

    bcode->intarray[0] = ugetint();
    bcode->intarray[1] = ugetint();
    urec = utab[uinstr->Opc];
    instlength = urec.instlength;
    for (i = 2; i < instlength; i += 2) {
        bcode->intarray[i] = ugetint();
        bcode->intarray[i + 1] = ugetint();
    }
    if (urec.hasconst) {
        bcode->intarray[instlength] = ugetint();
        bcode->intarray[instlength + 1] = ugetint();
        if (((1 << uinstr->Dtype) & ((1 << Mdt) | (1 << Qdt) | (1 << Rdt) | (1 << Sdt) | (1 << Xdt))) || uinstr->Opc == Ucomm) {
            strlength = (bcode->intarray[instlength] + 3) / 4;
            if (strlength & 1) {
                strlength++;
            }
            for (i = 0; i < strlength; i += 2) {
                ((int *)ustr)[i] = ugetint();
                ((int *)ustr)[i + 1] = ugetint();
            }
            if ((1 << uinstr->Dtype) & ((1 << Qdt) | (1 << Rdt))) {
                if (uinstr->Opc != Uinit) {
                    func_00487994(ustr, &uinstr->Uopcde.uiequ1.uop2.Constval.swpart.Ival);
                } else {
                    func_00487994(ustr, &uinstr->Uopcde.uiequ1.uop2.uinit.initval.swpart.Ival);
                }
            }
            if (uinstr->Opc != Uinit) {
                uinstr->Uopcde.uiequ1.uop2.Constval.swpart.Chars = ustr;
            } else {
                uinstr->Uopcde.uiequ1.uop2.uinit.initval.swpart.Chars = ustr;
            }
        }
    }
}


/*
00434720 processargs
0045C150 prepass
0047FF7C skipproc
*/
void initur(const char *path) {
    ugetinit(path);

#define M(ch) (1U << (~(ch) & 0x1f))
    //datachars = 0x53FEF1A0;
    datachars = M('A') | M('C') | M('F') | M('G') | M('H') | M('I') | M('J') | M('K') | M('L') |
                M('M') | M('N') | M('P') | M('Q') | M('R') | M('S') | M('W') | M('X') | M('Z');

    //memorychars = 0x4004B020;
    memorychars = M('Z') | M('M') | M('P') | M('R') | M('S') | M('A');

    setconstantchars = 0x0000FFC07E000000;

#undef M

    dtytype['A' - 'A'] = Adt;
    dtytype['C' - 'A'] = Cdt;
    dtytype['F' - 'A'] = Fdt;
    dtytype['G' - 'A'] = Gdt;
    dtytype['H' - 'A'] = Hdt;
    dtytype['I' - 'A'] = Idt;
    dtytype['J' - 'A'] = Jdt;
    dtytype['K' - 'A'] = Kdt;
    dtytype['L' - 'A'] = Ldt;
    dtytype['M' - 'A'] = Mdt;
    dtytype['N' - 'A'] = Ndt;
    dtytype['P' - 'A'] = Pdt;
    dtytype['Q' - 'A'] = Qdt;
    dtytype['R' - 'A'] = Rdt;
    dtytype['S' - 'A'] = Sdt;
    dtytype['W' - 'A'] = Wdt;
    dtytype['X' - 'A'] = Xdt;

    mtytype['Z' - 'A'] = Zmt;
    mtytype['M' - 'A'] = Mmt;
    mtytype['P' - 'A'] = Pmt;
    mtytype['R' - 'A'] = Rmt;
    mtytype['S' - 'A'] = Smt;
    mtytype['A' - 'A'] = Amt;
}

__asm__(R""(
.text
.set noreorder
.set noat

glabel ubytetobit
    .ent ubytetobit
/* 00487F54 90820000 */  lbu   $v0, ($a0)
/* 00487F58 2C4E00A0 */  sltiu $t6, $v0, 0xa0
/* 00487F5C 11C00009 */  beqz  $t6, .L00487F84
/* 00487F60 2443FFE0 */   addiu $v1, $v0, -0x20
/* 00487F64 8F998044 */  lw    $t9, %got(D_1001192C)($gp)
/* 00487F68 00027943 */  sra   $t7, $v0, 5
/* 00487F6C 000FC080 */  sll   $t8, $t7, 2
/* 00487F70 2739192C */  addiu $t9, %lo(D_1001192C) # addiu $t9, $t9, 0x192c
/* 00487F74 03384021 */  addu  $t0, $t9, $t8
/* 00487F78 8D090000 */  lw    $t1, ($t0)
/* 00487F7C 00495004 */  sllv  $t2, $t1, $v0
/* 00487F80 294E0000 */  slti  $t6, $t2, 0
.L00487F84:
/* 00487F84 11C00008 */  beqz  $t6, .L00487FA8
/* 00487F88 2C780060 */   sltiu $t8, $v1, 0x60
/* 00487F8C 8C8C000C */  lw    $t4, 0xc($a0)
/* 00487F90 8C8F0008 */  lw    $t7, 8($a0)
/* 00487F94 000C68C0 */  sll   $t5, $t4, 3
/* 00487F98 000FC8C0 */  sll   $t9, $t7, 3
/* 00487F9C AC8D000C */  sw    $t5, 0xc($a0)
/* 00487FA0 03E00008 */  jr    $ra
/* 00487FA4 AC990008 */   sw    $t9, 8($a0)

.L00487FA8:
/* 00487FA8 13000009 */  beqz  $t8, .L00487FD0
/* 00487FAC 00000000 */   nop   
/* 00487FB0 8F8A8044 */  lw    $t2, %got(D_10011920)($gp)
/* 00487FB4 00034143 */  sra   $t0, $v1, 5
/* 00487FB8 00084880 */  sll   $t1, $t0, 2
/* 00487FBC 254A1920 */  addiu $t2, %lo(D_10011920) # addiu $t2, $t2, 0x1920
/* 00487FC0 01495821 */  addu  $t3, $t2, $t1
/* 00487FC4 8D6E0000 */  lw    $t6, ($t3)
/* 00487FC8 006E6004 */  sllv  $t4, $t6, $v1
/* 00487FCC 29980000 */  slti  $t8, $t4, 0
.L00487FD0:
/* 00487FD0 13000008 */  beqz  $t8, .L00487FF4
/* 00487FD4 2C690060 */   sltiu $t1, $v1, 0x60
/* 00487FD8 8C8F0004 */  lw    $t7, 4($a0)
/* 00487FDC 8C880008 */  lw    $t0, 8($a0)
/* 00487FE0 000FC8C0 */  sll   $t9, $t7, 3
/* 00487FE4 000850C0 */  sll   $t2, $t0, 3
/* 00487FE8 AC990004 */  sw    $t9, 4($a0)
/* 00487FEC 03E00008 */  jr    $ra
/* 00487FF0 AC8A0008 */   sw    $t2, 8($a0)

.L00487FF4:
/* 00487FF4 1120000A */  beqz  $t1, .L00488020
/* 00487FF8 24010041 */   li    $at, 65
/* 00487FFC 8F8C8044 */  lw    $t4, %got(D_10011914)($gp)
/* 00488000 00035943 */  sra   $t3, $v1, 5
/* 00488004 000B7080 */  sll   $t6, $t3, 2
/* 00488008 258C1914 */  addiu $t4, %lo(D_10011914) # addiu $t4, $t4, 0x1914
/* 0048800C 018E6821 */  addu  $t5, $t4, $t6
/* 00488010 8DB80000 */  lw    $t8, ($t5)
/* 00488014 00787804 */  sllv  $t7, $t8, $v1
/* 00488018 29F90000 */  slti  $t9, $t7, 0
/* 0048801C 03204825 */  move  $t1, $t9
.L00488020:
/* 00488020 1120000B */  beqz  $t1, .L00488050
/* 00488024 00000000 */   nop   
/* 00488028 8C88000C */  lw    $t0, 0xc($a0)
/* 0048802C 8C8B0008 */  lw    $t3, 8($a0)
/* 00488030 8C8E0010 */  lw    $t6, 0x10($a0)
/* 00488034 000850C0 */  sll   $t2, $t0, 3
/* 00488038 000B60C0 */  sll   $t4, $t3, 3
/* 0048803C 000E68C0 */  sll   $t5, $t6, 3
/* 00488040 AC8A000C */  sw    $t2, 0xc($a0)
/* 00488044 AC8C0008 */  sw    $t4, 8($a0)
/* 00488048 03E00008 */  jr    $ra
/* 0048804C AC8D0010 */   sw    $t5, 0x10($a0)

.L00488050:
/* 00488050 54410006 */  bnel  $v0, $at, .L0048806C
/* 00488054 2C5900A0 */   sltiu $t9, $v0, 0xa0
/* 00488058 8C980004 */  lw    $t8, 4($a0)
/* 0048805C 001878C0 */  sll   $t7, $t8, 3
/* 00488060 03E00008 */  jr    $ra
/* 00488064 AC8F0004 */   sw    $t7, 4($a0)

/* 00488068 2C5900A0 */  sltiu $t9, $v0, 0xa0
.L0048806C:
/* 0048806C 13200009 */  beqz  $t9, .L00488094
/* 00488070 24010039 */   li    $at, 57
/* 00488074 8F8A8044 */  lw    $t2, %got(D_10011900)($gp)
/* 00488078 00024943 */  sra   $t1, $v0, 5
/* 0048807C 00094080 */  sll   $t0, $t1, 2
/* 00488080 254A1900 */  addiu $t2, %lo(D_10011900) # addiu $t2, $t2, 0x1900
/* 00488084 01485821 */  addu  $t3, $t2, $t0
/* 00488088 8D6C0000 */  lw    $t4, ($t3)
/* 0048808C 004C7004 */  sllv  $t6, $t4, $v0
/* 00488090 29D90000 */  slti  $t9, $t6, 0
.L00488094:
/* 00488094 13200005 */  beqz  $t9, .L004880AC
/* 00488098 00000000 */   nop   
/* 0048809C 8C980008 */  lw    $t8, 8($a0)
/* 004880A0 001878C0 */  sll   $t7, $t8, 3
/* 004880A4 03E00008 */  jr    $ra
/* 004880A8 AC8F0008 */   sw    $t7, 8($a0)

.L004880AC:
/* 004880AC 5441000F */  bnel  $v0, $at, .L004880EC
/* 004880B0 24010063 */   li    $at, 99
/* 004880B4 8C89000C */  lw    $t1, 0xc($a0)
/* 004880B8 8C880008 */  lw    $t0, 8($a0)
/* 004880BC 8C8C0010 */  lw    $t4, 0x10($a0)
/* 004880C0 8C8D0014 */  lw    $t5, 0x14($a0)
/* 004880C4 000950C0 */  sll   $t2, $t1, 3
/* 004880C8 000858C0 */  sll   $t3, $t0, 3
/* 004880CC 000C70C0 */  sll   $t6, $t4, 3
/* 004880D0 000DC8C0 */  sll   $t9, $t5, 3
/* 004880D4 AC8A000C */  sw    $t2, 0xc($a0)
/* 004880D8 AC8B0008 */  sw    $t3, 8($a0)
/* 004880DC AC8E0010 */  sw    $t6, 0x10($a0)
/* 004880E0 03E00008 */  jr    $ra
/* 004880E4 AC990014 */   sw    $t9, 0x14($a0)

/* 004880E8 24010063 */  li    $at, 99
.L004880EC:
/* 004880EC 14410008 */  bne   $v0, $at, .L00488110
/* 004880F0 00000000 */   nop   
/* 004880F4 8C980004 */  lw    $t8, 4($a0)
/* 004880F8 24010001 */  li    $at, 1
/* 004880FC 17010004 */  bne   $t8, $at, .L00488110
/* 00488100 00000000 */   nop   
/* 00488104 8C8F0008 */  lw    $t7, 8($a0)
/* 00488108 000F48C0 */  sll   $t1, $t7, 3
/* 0048810C AC890008 */  sw    $t1, 8($a0)
.L00488110:
/* 00488110 03E00008 */  jr    $ra
/* 00488114 00000000 */   nop   
    .type ubytetobit, @function
    .size ubytetobit, .-ubytetobit
    .end ubytetobit
)"");
