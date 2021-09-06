#include "common.h"
#include "libu.h"

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

    bcode->intarray[0] = ugetint(true);
    bcode->intarray[1] = ugetint(true);
    urec = utab[uinstr->Opc];
    instlength = urec.instlength;
    for (i = 2; i < instlength; i += 2) {
        bcode->intarray[i] = ugetint(true);
        bcode->intarray[i + 1] = ugetint(true);
    }
    if (urec.hasconst) {
        bcode->intarray[instlength] = ugetint(true);
        bcode->intarray[instlength + 1] = ugetint(true);
        if (((1 << uinstr->Dtype) & ((1 << Mdt) | (1 << Qdt) | (1 << Rdt) | (1 << Sdt) | (1 << Xdt))) || uinstr->Opc == Ucomm) {
            strlength = (bcode->intarray[instlength] + 3) / 4;
            if (strlength & 1) {
                strlength++;
            }
            for (i = 0; i < strlength; i += 2) {
                ((int *)ustr)[i] = ugetint(false);
                ((int *)ustr)[i + 1] = ugetint(false);
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
