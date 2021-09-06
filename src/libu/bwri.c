#include "common.h"
#include "ucode.h"
#include "libu.h"

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
004230F0 func_004230F0
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

    struct utabrec urec = utab[uinstr->Opc];
    for (i = 0; i < urec.instlength; i += 2) {
        uputint(bcode->intarray[i]);
        uputint(bcode->intarray[i + 1]);
    }
    if (urec.hasconst) {
        uputint(bcode->intarray[urec.instlength]);
        uputint(bcode->intarray[urec.instlength + 1]);
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
                uputint(((int *)str)[i]);
                uputint(((int *)str)[i + 1]);
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

// unused
void stopucode(void) {
    uputkill();
    noerrorsyet = false;
}
