#include <stdlib.h>
#include <string.h>
#include "libp/libp.h"
#include "libu/libu.h"
#include "uoptdata.h"
#include "uoptions.h"
#include "uoptdbg.h"
#include "uoptkill.h"
#include "uoptreg1.h"
#include "uoptutil.h"
#include "uoptfeedback.h"
#include "uopttemp.h"
#include "uoptppss.h"
#include "uoptitab.h"

/*
004230F0 func_004230F0
0042BF08 reemit
*/
bool use_ix;

/*
004230F0 func_004230F0
0042B890 func_0042B890
0042BF08 reemit
*/
static bool has_ix;

/*
004230F0 func_004230F0
0042B890 func_0042B890
0042BF08 reemit
*/
static int loopno;

/*
0041F6F0 base_in_reg
00422AF0 func_00422AF0
0042BF08 reemit
*/
static unsigned char gpunaltab[23];

/*
0041F6F0 base_in_reg
00422AF0 func_00422AF0
0042BF08 reemit
*/
static unsigned char spunaltab[23];

/*
0042A1C8 func_0042A1C8
0042A4CC func_0042A4CC
0042A7D0 func_0042A7D0
0042BF08 reemit
*/
static int eereg_saved_locs[22];

/*
0041F6F0 base_in_reg
00422AF0 func_00422AF0
0042BF08 reemit
*/
static struct IChain *baseregexpr[23];

/*
0041F6F0 base_in_reg
*/
static struct Expression *baseregbase[23];

/*
0041F6F0 base_in_reg
00422AF0 func_00422AF0
0042BF08 reemit
   what is this
*/
static unsigned char unaltab[23][23];

/*
00422D04 func_00422D04
004230F0 func_004230F0
00426FA4 func_00426FA4
0042BF08 reemit
*/
void igen3(Uopcode opc, struct IChain *ichain, bool is_volatile) {
    if (ichain->isvar_issvar.location.memtype == Rmt && ichain->isvar_issvar.location.addr == r_sp) {
        if (ichain->isvar_issvar.location.blockno == 0) {
            OPC = Uldsp;
        } else {
            OPC = Uldap;
        }
        uwrite(&u);
    } else {
        OPC = Uvreg;
        LEXLEV = 0;
        DTYPE = ichain->dtype;
        MTYPE = ichain->isvar_issvar.location.memtype;
        IONE = ichain->isvar_issvar.location.blockno;
        OFFSET = ichain->isvar_issvar.location.addr;
        LENGTH = ichain->isvar_issvar.size;
        if (ichain->isvar_issvar.unk19 && ichain->isvar_issvar.location.memtype != Rmt && ichain->dtype != Sdt) {
            if (dogenvreg && ichain->isvar_issvar.location.blockno == curblk ) {
                uwrite(&u);
            }
            ichain->isvar_issvar.unk19 = false;
        }

        if (lang != LANG_ADA && is_volatile) {
            SET_VOLATILE_ATTR(LEXLEV);
        }

        OPC = opc;
        uwrite(&u);

        if (MTYPE == Mmt && IONE == curblk) {
            if (!stack_reversed) {
                if (highestmdef < -OFFSET) {
                    highestmdef = -OFFSET;
                }
            } else {
                if (highestmdef < OFFSET) {
                    highestmdef = OFFSET;
                }
            }
        }
    }
}

/*
0042269C gen_outparcode
*/
void outparlod(Uopcode opc, struct Expression *expr) {
    OPC = opc;
    DTYPE = expr->datatype;
    MTYPE = expr->data.isvar_issvar.location.memtype;
    IONE = expr->data.isvar_issvar.location.blockno;
    LEXLEV = 0;
    OFFSET = expr->data.isvar_issvar.location.addr;
    LENGTH = expr->data.isvar_issvar.size;
    uwrite(&u);

    if (MTYPE == Mmt && IONE == curblk) {
        if (!stack_reversed) {
            if (highestmdef < -OFFSET) {
                highestmdef = -OFFSET;
            }
        } else {
            if (highestmdef < OFFSET) {
                highestmdef = OFFSET;
            }
        }
    }
}

/*
0041F048 genrop
*/
void gen_cvtl(unsigned char size, Datatype dtype) {
    OPC = Ucvtl;
    LEXLEV = 0;
    DTYPE = dtype;
    IONE = size * 8;
    uwrite(&u);
}

/*
004230F0 func_004230F0
*/
void gen_cvt(Datatype to, Datatype from) {
    OPC = Ucvt;
    DTYPE2 = from;
    DTYPE = to;
    LEXLEV = 0;
    uwrite(&u);
}

/*
0041FA68 varlodstr
0042020C gen_static_link
00420A3C prolog
00421C00 epilog
0042269C gen_outparcode
00422D04 func_00422D04
004230F0 func_004230F0
00426FA4 func_00426FA4
0042AADC func_0042AADC
0042B2C0 func_0042B2C0
0042B890 func_0042B890
0042BB4C func_0042BB4C
0042BF08 reemit
*/
void genrop(Uopcode opc, int reg, Datatype dtype, unsigned char size) {
    if (opc == Ustr && size < sizeoftyp(dtype)) {
        gen_cvtl(size, dtype);
    }

    OPC = opc;
    IONE = 0;
    DTYPE = dtype;
    MTYPE = Rmt;
    OFFSET = coloroffset(reg);
    LEXLEV = 0;
    LENGTH = size;
    uwrite(&u);
}

/*
0041FA68 varlodstr
0042269C gen_outparcode
00422D04 func_00422D04
004230F0 func_004230F0
00426FA4 func_00426FA4
0042AADC func_0042AADC
0042B2C0 func_0042B2C0
0042B890 func_0042B890
0042BB4C func_0042BB4C
0042BF08 reemit
*/
bool inreg(struct IChain *ichain, struct Graphnode *node, int *reg, /* unused */ bool load) {
    bool res = false;
    int regclass = regclassof(ichain);
    int maxReg;

    *reg = firsterreg[regclass - 1];

    if (allcallersave) {
        maxReg = lasteereg[regclass - 1];
    } else {
        maxReg = highesteereg[regclass - 1];
    }

    while (!res && *reg <= maxReg) {
        if (ichain == node->regdata.unk44[*reg - 1]) {
            res = true;
        } else {
            *reg += 1;
        }
    }

    return res;
}

/*
0041F6F0 base_in_reg
*/
bool base_noalias(struct Expression *baseaddr1, struct Expression *baseaddr2) {
    bool aliased;

    if (baseaddr1->type == islda || baseaddr1->type == isilda) {
        if (baseaddr2->type == islda || baseaddr2->type == isilda) {
            aliased = overlapping(baseaddr1->data.islda_isilda.address, baseaddr2->data.islda_isilda.address, baseaddr1->data.islda_isilda.size, baseaddr2->data.islda_isilda.size);
        } else if ((lang != LANG_C &&
                    (baseaddr2->type != isvar &&
                     baseaddr2->type != isop &&
                     baseaddr2->type != issvar &&
                     baseaddr2->type != dumped)) ||
                pointtoheap(baseaddr2)) {
            aliased = false;
        } else {
            aliased = aliaswithptr(&baseaddr1->data.islda_isilda.address);
        }
    } else if (lang != LANG_C &&
            (baseaddr1->type != isvar &&
             baseaddr1->type != isop &&
             baseaddr1->type != issvar &&
             baseaddr1->type != dumped)) {
        aliased = false;
    } else if (pointtoheap(baseaddr1)) {
        aliased = pointtoheap(baseaddr2);
    } else if (baseaddr2->type == islda || baseaddr2->type == isilda) {
        aliased = aliaswithptr(&baseaddr2->data.islda_isilda.address);
    } else if (lang != LANG_C &&
            (baseaddr2->type != isvar &&
             baseaddr2->type != isop &&
             baseaddr2->type != issvar &&
             baseaddr2->type != dumped)) {
        aliased = false;
    } else {
        // the mad lad really copied it again
        if (lang != LANG_FORTRAN && (lang != LANG_PASCAL || !nopalias)) aliased = true;
        else if (!nof77alias || use_c_semantics) aliased = true;
        else if (baseaddr1->type == dumped || baseaddr2->type == dumped) aliased = true;
        else if ((baseaddr1->type == isvar || baseaddr1->type == issvar) &&
                 (baseaddr2->type == isvar || baseaddr2->type == issvar) &&
                 addreq(baseaddr1->data.isvar_issvar.location, baseaddr2->data.isvar_issvar.location)) aliased = true;
        else aliased = false;
    }

    return !aliased;
}

/*
0041F6F0 base_in_reg
*/
bool base_gp_noalias(struct Expression *baseaddr) {
    bool aliased;

    if (baseaddr->type == islda || baseaddr->type == isilda) {
        aliased = baseaddr->data.islda_isilda.address.memtype == Smt;
    } else if (lang != LANG_C &&
            (baseaddr->type != isvar &&
             baseaddr->type != isop &&
             baseaddr->type != issvar &&
             baseaddr->type != dumped)) {
        aliased = false;
    } else if (pointtoheap(baseaddr)) {
        aliased = false;
    } else {
        aliased = true;
    }
    return !aliased;
}

/*
0041F6F0 base_in_reg
*/
bool base_sp_noalias(struct Expression *baseaddr) {
    bool aliased;

    if (baseaddr->type == islda || baseaddr->type == isilda) {
        aliased = baseaddr->data.islda_isilda.address.memtype != Smt;
    } else if (lang != LANG_C &&
            (baseaddr->type != isvar &&
             baseaddr->type != isop &&
             baseaddr->type != issvar &&
             baseaddr->type != dumped)) {
        aliased = false;
    } else if (pointtoheap(baseaddr)) {
        aliased = false;
    } else {
        if ((lang != LANG_FORTRAN || use_c_semantics) &&
                (lang != LANG_PASCAL || !nopalias || use_c_semantics) &&
                lang != LANG_COBOL) {
            aliased = true;
        } else {
            aliased = false;
        }
    }
    return !aliased;
}

/*
0041FA68 varlodstr
004230F0 func_004230F0
00426FA4 func_00426FA4
*/
void base_in_reg(int reg, struct IChain *ichain, struct Expression *baseaddr) {
    int reg2;

    // what if baseaddr is not lda...?
    if (baseregexpr[reg - 1] != NULL && (baseaddr->type != islda && baseaddr->type != isilda)) {
        return;
    }

    if (baseregexpr[reg - 1] != NULL) {
        baseaddr->data.islda_isilda.size =
            MAX(baseregbase[reg - 1]->data.islda_isilda.address.addr + baseregbase[reg - 1]->data.islda_isilda.size,
                baseaddr->data.islda_isilda.address.addr + baseaddr->data.islda_isilda.size)
          - MIN(baseregbase[reg - 1]->data.islda_isilda.address.addr,
                baseaddr->data.islda_isilda.address.addr);

        baseaddr->data.islda_isilda.address.addr = MIN(baseregbase[reg - 1]->data.islda_isilda.address.addr, baseaddr->data.islda_isilda.address.addr);
    }

    baseregexpr[reg - 1] = ichain;
    baseregbase[reg - 1] = baseaddr;
    OPC = Uunal;
    DTYPE = 1;
    LEXLEV = coloroffset(reg);

    for (reg2 = 1; reg2 <= 23; reg2++) {
        if (baseregexpr[reg2 - 1] != NULL && reg != reg2) {
            if (unaltab[reg - 1][reg2 - 1] != 1) {
                if (base_noalias(baseregbase[reg2 - 1], baseaddr)) {
                    if (unaltab[reg - 1][reg2 - 1] == 0) {
                        IONE = coloroffset(reg2);
                        uwrite(&u);
                        unaltab[reg - 1][reg2 - 1] = 2;
                        unaltab[reg2 - 1][reg - 1] = 2;
                    }
                } else {
                    if (unaltab[reg - 1][reg2 - 1] == 2) {
                        IONE = coloroffset(reg2);
                        DTYPE = 0;
                        uwrite(&u);
                        DTYPE = 1;
                    }
                    unaltab[reg - 1][reg2 - 1] = 1;
                    unaltab[reg2 - 1][reg - 1] = 1;
                }
            }
        }
    }

    if (gpunaltab[reg - 1] == 0) {
        if (base_gp_noalias(baseaddr)) {
            IONE = 28;
            uwrite(&u);
            gpunaltab[reg - 1] = 2;
        } else {
            gpunaltab[reg - 1] = 1;
        }
    }

    if (spunaltab[reg - 1] == 0) {
        if (base_sp_noalias(baseaddr)) {
            IONE = 29;
            uwrite(&u);
            spunaltab[reg - 1] = 2;
        } else {
            spunaltab[reg - 1] = 1;
        }
    }

}

/*
0042269C gen_outparcode
004230F0 func_004230F0
00426FA4 func_00426FA4
0042BF08 reemit
*/
bool varlodstr(Uopcode opc, struct IChain *ichain, struct Graphnode *node, struct Expression *baseaddr) {
    int reg;
    bool lodstr = false;

    if (inreg(ichain, node, &reg, opc == Ulod)) {
        if (baseaddr != NULL) {
            base_in_reg(reg, ichain, baseaddr);
        }
        genrop(opc, reg, ichain->dtype, ichain->isvar_issvar.size);
    } else {
        lodstr = true;
    }

    return lodstr;
}

/*
004230F0 func_004230F0
00426FA4 func_00426FA4
0042AADC func_0042AADC
0042BF08 reemit
*/
void spilltemplodstr(Uopcode opc, Datatype dtype, struct Temploc *temploc) {
    OPC = Uvreg;
    DTYPE = dtype;
    MTYPE = Mmt;
    LEXLEV = 0;
    OFFSET = temploc->disp;
    IONE = curblk;
    if (dtype != Sdt) {
        LENGTH = sizeoftyp(dtype);
        if (dogenvreg != 0) {
            uwrite(&u);
        }
    } else {
        LENGTH = temploc->size;
    }

    OPC = opc;
    uwrite(&u);
    if (!stack_reversed) {
        if (highestmdef < -temploc->disp) {
            highestmdef = -temploc->disp;
        }
    } else {
        if (highestmdef < temploc->disp) {
            highestmdef = temploc->disp;
        }
    }
}

/*
00422D04 func_00422D04
004230F0 func_004230F0
00426DE8 func_00426DE8
00426FA4 func_00426FA4
*/
void genloadaddr(Uopcode opc, Memtype memtype, int block, int offset, int addr, int size) {
    OPC = opc;
    MTYPE = memtype;
    IONE = block;
    OFFSET = offset;
    OFFSET2 = addr;
    LENGTH = size;
    uwrite(&u);

    if (block == curblk && memtype == Mmt) {
        highestmdef = tempdisp;
    }
}

/*
004205F8 genrlodrstr
00422D04 func_00422D04
004230F0 func_004230F0
00426DE8 func_00426DE8
00426FA4 func_00426FA4
0042B2C0 func_0042B2C0
*/
void genloadnum(Datatype dtype, int arg1, union Constant constval, int size, bool emit) {
    struct RealstoreData *real;
    int i;

    switch (dtype) {
        case Adt:
        case Fdt:
        case Gdt:
        case Hdt:
        case Jdt:
        case Ldt:
        case Ndt:
            OPC = Uldc;
            DTYPE = dtype;
            LENGTH = size;
            CONSTVAL.swpart.Ival = constval.intval;
            break;

        case Idt:
        case Kdt:
            OPC = Uldc;
            DTYPE = dtype;
            LENGTH = size;
            CONSTVAL.dwval = constval.longval;
            break;

        case Qdt:
        case Rdt:
        case Sdt:
            OPC = Uldc;
            DTYPE = dtype;
            LENGTH = size;
            CONSTVAL.swpart.Ival = constval.real.len;

            real = realstore;
            for (i = 0; i < (constval.real.disp >> 8); i++) {
                real = real->next;
            }
            memcpy(ustrptr, &real->c[constval.real.disp & 0xff], constval.real.len);
            CONSTVAL.swpart.Chars = ustrptr;
            break;

        case Mdt:
            OPC = Ulca;
            DTYPE = Mdt;
            LENGTH = size;
            CONSTVAL.swpart.Ival = constval.string.len;

            if (constval.string.disp < strpdisplace) {
                reset(&strp, " ", 0, 0);
                strpdisplace = 0;
            }

            while (strpdisplace < constval.string.disp) {
                next_char(strp.c_file);
                strpdisplace++;
            }

            IONE = peek_char(strp.c_file) - '0';
            next_char(strp.c_file);
            strpdisplace += 1;
            for (i = 0; i < constval.string.len; i++) {
                if (eoln(strp.c_file)) {
                    readln(strp.c_file);
                    ustrptr[i] = '\n';
                } else {
                    ustrptr[i] = read_char(strp.c_file);
                }
            }
            strpdisplace += constval.string.len;
            CONSTVAL.swpart.Chars = ustrptr;
            break;

        case Cdt:
        case Pdt:
        default:
            dbgerror(0x18B0);
            break;
    }

    if (emit) {
        uwrite(&u);
    }
}

/*
004230F0 func_004230F0
00426FA4 func_00426FA4
*/
void genloadrnum(Datatype dtype, unsigned short value, int length, bool emit) {
    OPC = Uldrc;
    DTYPE = dtype;
    LENGTH = length;
    IONE = value;
    if (emit) {
        uwrite(&u);
    }
}

/*
00420A3C prolog
0042BF08 reemit
*/
void gen_static_link(void) {
    int reg; // sp54
    struct VariableLocation loc; // sp4C
    bool found; // sp4B
    struct IChain *ichain;
    struct Expression *var;
    int phi_a1;

    phi_a1 = 1;
    if (graphhead->regdata.unk44[er_v0 - 1] != NULL &&
            graphhead->regdata.unk44[er_v0 - 1]->type == isvar &&
            graphhead->regdata.unk44[er_v0 - 1]->isvar_issvar.location.memtype == Mmt &&
            graphhead->regdata.unk44[er_v0 - 1]->isvar_issvar.location.blockno == curblk &&
            graphhead->regdata.unk44[er_v0 - 1]->isvar_issvar.location.addr == staticlinkloc) {
        phi_a1 = 0;
    }

    if (phi_a1 == 1) {
        reg = firsterreg[0];
        while (phi_a1 == 1 && reg <= lasteereg[0]) {
            if (graphhead->regdata.unk44[reg - 1] != NULL &&
                    graphhead->regdata.unk44[reg - 1]->type == isvar &&
                    graphhead->regdata.unk44[reg - 1]->isvar_issvar.location.memtype == Mmt &&
                    graphhead->regdata.unk44[reg - 1]->isvar_issvar.location.blockno == curblk &&
                    graphhead->regdata.unk44[reg - 1]->isvar_issvar.location.addr == staticlinkloc) {
                phi_a1 = 2;
            } else {
                reg++;
            }
        }
    }

    if (phi_a1 == 1) {
        loc.addr = staticlinkloc;
        loc.blockno = curblk;
        loc.memtype = Mmt;

        found = false;
        ichain = itable[isvarihash(loc)];

        while (!found && ichain != NULL) {
            if (ichain->type == isvar && addreq(ichain->isvar_issvar.location, loc)) {
                found = true;
            } else {
                ichain = ichain->next;
            }
        }

        if (!found) {
            var = alloc_new(sizeof (struct Expression), &perm_heap);
            var->type = isvar;
            var->data.isvar_issvar.location.memtype = Mmt;
            var->data.isvar_issvar.location.blockno = curblk;
            var->data.isvar_issvar.location.addr = staticlinkloc;
            var->data.isvar_issvar.location.level = curlevel;
            found = furthervarintree(var, curproc);
        }

        if (found) {
            OPC = Urstr;
            DTYPE = Adt;
            MTYPE = Mmt;
            LENGTH = 4;
            OFFSET = staticlinkloc;
            IONE = curblk;
            LEXLEV = coloroffset(er_v0);
            uwrite(&u);

            if (!stack_reversed) {
                if (highestmdef < -staticlinkloc) {
                    highestmdef = -staticlinkloc;
                }
            } else {
                if (highestmdef < staticlinkloc) {
                    highestmdef = staticlinkloc;
                }
            }
        }
    } else if (phi_a1 == 2) {
        genrop(Ulod, er_v0, 0, 4);
        genrop(Ustr, reg, 0, 4);
    }
}

/*
00420A3C prolog
00421C00 epilog
0042269C gen_outparcode
00425594 func_00425594
0042B09C func_0042B09C
0042B144 func_0042B144
0042B1A8 func_0042B1A8
*/
void genrlodrstr(Uopcode opc, int reg, struct IChain *ichain) {
    if (ichain->type == isconst) {
        genloadnum(ichain->dtype, 0, ichain->isconst.number, ichain->isconst.size, false);
        OPC = Urldc;
        IONE = coloroffset(reg);
    } else if (ichain->type == islda) {
        OPC = Urlda;
        MTYPE = ichain->islda_isilda.address.memtype;
        IONE = ichain->islda_isilda.address.blockno;
        OFFSET = ichain->islda_isilda.offset;
        LENGTH = coloroffset(reg);
        if (IONE == curblk && MTYPE == Mmt) {
            highestmdef = tempdisp;
        }
    } else {
        OPC = opc;
        if (ichain->type == isvar) {
            DTYPE = ichain->dtype;
            MTYPE = ichain->isvar_issvar.location.memtype;
            IONE = ichain->isvar_issvar.location.blockno;
            OFFSET = ichain->isvar_issvar.location.addr;
            LENGTH = ichain->isvar_issvar.size;

            if (opc == Urlod) {
                totvarrlods += 1;
            } else {
                totvarrstrs += 1;
            }
        } else {
            if (ichain->type == isop) {
                DTYPE = ichain->isop.datatype;
            } else {
                DTYPE = ichain->dtype;
            }

            MTYPE = Mmt;
            IONE = curblk;
            switch (ichain->type) {
                case dumped:
                    write_string(err.c_file, "Warning: kind dumped ignored.", 29, 29);
                    writeln(err.c_file);
                    break;

                case isilda:
                    OFFSET = ichain->islda_isilda.temploc->disp;
                    break;

                case issvar:
                    OFFSET = ichain->isvar_issvar.temploc->disp;
                    break;

                case isop:
                    OFFSET = ichain->isop.temploc->disp;
                    break;

                default:
                    caseerror(1, 640, "uoptemit.p", 10);
                    break;
            }

            LENGTH = sizeoftyp(DTYPE);
            if (opc == Urlod) {
                totexprlods += 1;
            } else {
                totexprstrs += 1;
            }
        }

        LEXLEV = coloroffset(reg);
        if (MTYPE == Mmt && IONE == curblk) {
            if (!stack_reversed) {
                if (highestmdef < -OFFSET) {
                    highestmdef = -OFFSET;
                }
            } else {
                if (highestmdef < OFFSET) {
                    highestmdef = OFFSET;
                }
            }
        }
    }

    uwrite(&u);
}

/*
0042BF08 reemit
*/
void prolog(void) {
    int reg; // sp6C
    int reg_s2; // sp68
    int pdef_index;
    int parmRegclass;
    int par; // s5
    int phi_s3;
    int regclass; // s4
    int i; // s0

    OPC = Uregs;
    LEXLEV = 0;
    IONE = 1;
    OFFSET = r_v0;
    if (allcallersave) {
        LENGTH = MIN(firsteereg[0] - 2, lasterreg[0]);
        uwrite(&u);

        if (propagate_ee_saves) {
            OFFSET = firsteereg[0] + 2;
            LENGTH = 22 - firsteereg[0];
            uwrite(&u);
        } else {
            LENGTH = 1;
            for (reg = firsteereg[0]; reg < 22; reg++) {
                if (SET32_IN(ugen_saved_eeregs, reg - 13) && curproc->regstaken_parregs->regstaken[reg - 1]) {
                    IONE = 2;
                } else {
                    IONE = 1;
                }
                OFFSET = reg + 2;
                uwrite(&u);
            }
        }

        if (lasteereg[0] >= firsteereg[0]) {
            OFFSET = r_fp;
            LENGTH = 1;

            // gotta love the unique indexing used for each variable...
            if (propagate_ee_saves) {
                IONE = 1;
                if (someusefp) {
                    if (SET32_IN(usedeeregs[0], 22)) {
                        if (SET32_IN(ugen_saved_eeregs, 22 - 13)) {
                            IONE = 2;
                        }
                        uwrite(&u);
                    }
                } else {
                    uwrite(&u);
                }
            } else {
                if (SET32_IN(ugen_saved_eeregs, 22 - 13) && curproc->regstaken_parregs->regstaken[22 - 1]) {
                    IONE = 2;
                } else {
                    IONE = 1;
                }
                uwrite(&u);
            }

            if (lasteereg[0] >= 23 && SET32_IN(usedeeregs[0], 23)) {
                OFFSET = r_ra;
                IONE = 2;
                uwrite(&u);
            }
        }
    } else {
        LENGTH = MIN(firsteereg[0] - 2, highesterreg[0]);
        uwrite(&u);
        LENGTH = 1;
        reg = firsteereg[0];
        while (reg <= MIN(highesteereg[0], 21)) {
            if (SET32_IN(ugen_saved_eeregs, reg - 13)) {
                IONE = 2;
            } else {
                IONE = 1;
            }

            OFFSET = reg + 2;
            uwrite(&u);
            reg++;
        }

        if (highesteereg[0] >= 22) {
            if (SET32_IN(ugen_saved_eeregs, 22 - 13)) {
                IONE = 2;
            } else {
                IONE = 1;
            }
            OFFSET = r_fp;
            uwrite(&u);
        }

        if (highesteereg[0] >= 23) {
            if (SET32_IN(ugen_saved_eeregs, 23 - 13)) {
                IONE = 2;
            } else {
                IONE = 1;
            }
            OFFSET = r_ra;
            uwrite(&u);
        }
    }

    // floating point registers
    IONE = 3;
    OFFSET = r_f12;
    if (allcallersave) {
        LENGTH = 2 + (lasterreg[1] - firstparmreg[1]) * 2;
        uwrite(&u);

        if (propagate_ee_saves) {
            OFFSET = r_f12 + (firsteereg[1] - firstparmreg[1]) * 2;
            LENGTH = 2 + (lasteereg[1] - firsteereg[1]) * 2;
            uwrite(&u);
        } else {
            LENGTH = 2;
            reg = firsteereg[1];
            while (reg <= lasteereg[1]) {
                if (SET32_IN(ugen_saved_eeregs, reg - 13) && curproc->regstaken_parregs->regstaken[reg - 1]) {
                    IONE = 4;
                } else {
                    IONE = 3;
                }

                OFFSET = r_f12 + (reg - firstparmreg[1]) * 2;
                uwrite(&u);
                reg++;
            }
        }
    } else {
        if (highesterreg[1] >= firstparmreg[1]) {
            LENGTH = ((highesterreg[1] - firstparmreg[1]) * 2) + 2;
            uwrite(&u);
        }

        LENGTH = 2;
        reg = firsteereg[1];
        while (reg <= highesteereg[1]) {
            if (SET32_IN(ugen_saved_eeregs, reg - 13)) {
                IONE = 4; // saved fp regs
            } else {
                IONE = 3; // temp fp regs
            }
            OFFSET = r_f12 + (reg - firstparmreg[1]) * 2;
            uwrite(&u);
            reg++;
        }
    }

    if (allcallersave) {
        for (reg = 1; reg <= 35; reg++) {
            if (graphhead->regdata.unk44[reg - 1] != NULL &&
                    graphhead->regdata.unk44[reg - 1]->type == isvar &&
                    graphhead->regdata.unk44[reg - 1]->isvar_issvar.location.memtype == Pmt &&
                    graphhead->regdata.unk44[reg - 1]->isvar_issvar.location.blockno == curblk) {
                pdef_index = graphhead->regdata.unk44[reg - 1]->isvar_issvar.location.addr / 4;
                if (pdeftab[pdef_index].opc != Unop && pdeftab[pdef_index].dtype != Mdt) {
                    if (propagate_ee_saves || (!SET64_IN(seteeregs[0], reg) && !SET64_IN(seteeregs[1], reg))) {
                        curproc->regstaken_parregs->parregs[reg - 1] = pdef_index * 4;
                        if (pdeftab[pdef_index].unk3) {
                            OPC = Urstr;
                            DTYPE = pdeftab[pdef_index].dtype;
                            MTYPE = Pmt;
                            IONE = curblk;
                            OFFSET = pdeftab[pdef_index].offset;
                            LENGTH = pdeftab[pdef_index].size;
                            LEXLEV = coloroffset(reg);
                            uwrite(&u);
                        }

                        if (lang == LANG_C && graphhead->regdata.unk44[reg - 1]->isvar_issvar.size < 4) {
                            genrop(Ulod, reg, pdeftab[pdef_index].dtype, 4);
                            genrop(Ustr, reg, pdeftab[pdef_index].dtype, graphhead->regdata.unk44[reg - 1]->isvar_issvar.size);
                        }
                    } else {
                        genrlodrstr(Urlod, reg, graphhead->regdata.unk44[reg - 1]);
                    }
                }
            }
        }
    } else {
        for (par = 0; par <= MIN(pdefmax, 3);) {
            if (pdeftab[par].opc != Updef) {
                par++;
            } else {
                parmRegclass = (par * 4 < offsetpassedbyint) + 1;

                reg = firstparmreg[parmRegclass - 1] + par;

                phi_s3 = 1;
                if (parmRegclass == 2 && par > 0) {
                    reg = firstparmreg[parmRegclass - 1] + 1;
                }

                if (pdeftab[par].dtype != Mdt && ((pdeftab[par].dtype != Idt && pdeftab[par].dtype != Kdt) || mips3_64data)) {
                    if (graphhead->regdata.unk44[reg - 1] != NULL &&
                            graphhead->regdata.unk44[reg - 1]->type == isvar &&
                            graphhead->regdata.unk44[reg - 1]->isvar_issvar.location.memtype == Pmt &&
                            graphhead->regdata.unk44[reg - 1]->isvar_issvar.location.blockno == curblk &&
                            graphhead->regdata.unk44[reg - 1]->isvar_issvar.location.addr / 4 == par &&
                            fitparmreg(graphhead->regdata.unk44[reg - 1]->isvar_issvar.location.addr,
                                       graphhead->regdata.unk44[reg - 1]->isvar_issvar.size,
                                       pdeftab[par].offset,
                                       pdeftab[par].size)) {
                        phi_s3 = 0;
                    }

                    if (phi_s3 == 1) {
                        for (regclass = 1; regclass < 3; regclass++) {
                            if (phi_s3 != 2) {
                                reg_s2 = firsterreg[regclass - 1];
                            }

                            while (phi_s3 == 1 && reg_s2 <= lasteereg[regclass - 1]) {
                                if (graphhead->regdata.unk44[reg_s2 - 1] != NULL &&
                                        graphhead->regdata.unk44[reg_s2 - 1]->type == isvar &&
                                        graphhead->regdata.unk44[reg_s2 - 1]->isvar_issvar.location.memtype == Pmt &&
                                        graphhead->regdata.unk44[reg_s2 - 1]->isvar_issvar.location.blockno == curblk  &&
                                        graphhead->regdata.unk44[reg_s2 - 1]->isvar_issvar.location.addr / 4 == par &&
                                        fitparmreg(graphhead->regdata.unk44[reg_s2 - 1]->isvar_issvar.location.addr,
                                                   graphhead->regdata.unk44[reg_s2 - 1]->isvar_issvar.size,
                                                   pdeftab[par].offset,
                                                   pdeftab[par].size)) {
                                    phi_s3 = 2;
                                } else {
                                    reg_s2++;
                                }
                            }
                        }

                        if (phi_s3 == 2) {
                            if (parmRegclass == 1) {
                                if (reg_s2 <= firstparmreg[0] + MIN((pdefmax + (pdeftab[pdefmax].size / 4)) - 1, 3)) {
                                    if (reg < reg_s2) {
                                        BITARR_SET(graphhead->unkD0, reg_s2 - 1, true);
                                        phi_s3 = 1;
                                    }
                                }
                            } else if ((reg_s2 == firstparmreg[1] + 1 &&
                                        ((offsetpassedbyint == 8 && pdeftab->dtype != Qdt) || offsetpassedbyint > 8)) ||
                                    reg_s2 < firstparmreg[0] + 4) {
                                BITARR_SET(graphhead->unkD0, reg_s2 - 1, true);
                                phi_s3 = 1;
                            }
                        }
                    }
                }

                if (phi_s3 == 1 || pdeftab[par].unk3) {
                    OPC = Urstr;
                    DTYPE = pdeftab[par].dtype;
                    MTYPE = Pmt;
                    OFFSET = pdeftab[par].offset;
                    LENGTH = pdeftab[par].size;
                    IONE = curblk;
                    LEXLEV = coloroffset(reg);

                    if (parmRegclass == 2 || pdeftab[par].size <= 4) {
                        uwrite(&u);
                    } else {
                        if (DTYPE == Qdt) {
                            DTYPE = Rdt;
                        } else if (DTYPE == Idt || DTYPE == Kdt) {
                            DTYPE = Ldt;
                        }
                        LENGTH = 4;
                        uwrite(&u);

                        i = par + 1;
                        while (i < 4 && ((i - par) * 4 < pdeftab[par].size)) {
                            OFFSET += 4;
                            LEXLEV += 1;
                            uwrite(&u);
                            i++;
                        }
                    }
                }

                if (phi_s3 == 2) {
                    if (reg <= 23 && pdeftab[par].size > 4) {
                        if (!bigendian) genrop(Ulod, reg,     8, 4);
                        else            genrop(Ulod, reg + 1, 8, 4);

                        genrop(Ustr, reg_s2, 8, 4);

                        if (!bigendian) genrop(Ulod, reg + 1, 8, 4);
                        else            genrop(Ulod, reg,     8, 4);

                        OPC = Ustr;
                        OFFSET = coloroffset(reg_s2) + 1;
                        uwrite(&u);
                    } else {
                        genrop(Ulod, reg, pdeftab[par].dtype, pdeftab[par].size);
                        genrop(Ustr, reg_s2, pdeftab[par].dtype, graphhead->regdata.unk44[reg_s2 - 1]->isvar_issvar.size);
                    }
                } else if (phi_s3 == 0 && lang == LANG_C && graphhead->regdata.unk44[reg - 1]->isvar_issvar.size < 4) {
                    genrop(Ulod, reg, pdeftab[par].dtype, 4);
                    genrop(Ustr, reg, pdeftab[par].dtype, graphhead->regdata.unk44[reg - 1]->isvar_issvar.size);
                }

                par += (pdeftab[par].size + 3) / 4;
            }
        }
    }

    if (staticlinkloc != 0) {
        gen_static_link();
    }
}

/*
0042BF08 reemit
*/
void epilog(struct Graphnode *node) {
    unsigned char sp65[36]; // could be sp64[37], and 1 indexed... idk
    int i; // sp58
    int regclass;
    int parmRegclass;
    bool found;
    int reg2; // s0
    int par; // s2
    int reg; // s4
    int parmReg;

    if (allcallersave) {
        for (reg = 1; reg <= 35; reg++) {
            if (curproc->regstaken_parregs->parregs[reg - 1] != -1 &&
                    pdeftab[graphhead->regdata.unk44[reg - 1]->isvar_issvar.location.addr / 4].outmode) {
                    sp65[reg - 1] = 2;
            } else {
                sp65[reg - 1] = 0;
            }
        }

        for (reg = 1; reg <= 35; reg++) {
            if (node->regdata.unk44[reg - 1] != NULL &&
                    node->regdata.unk44[reg - 1]->type == isvar &&
                    node->regdata.unk44[reg - 1]->isvar_issvar.location.memtype == Pmt &&
                    node->regdata.unk44[reg - 1]->isvar_issvar.location.blockno == curblk &&
                    pdeftab[node->regdata.unk44[reg - 1]->isvar_issvar.location.addr / 4].outmode) {
                if (propagate_ee_saves || (!SET64_IN(seteeregs[0], reg) && !SET64_IN(seteeregs[1], reg))) {
                    regclass = (reg >= 24) + 1;
                    if (node->regdata.unk44[reg - 1] != graphhead->regdata.unk44[reg - 1]) {
                        found = false;
                        reg2 = firsterreg[regclass - 1];
                        while (!found && reg2 <= lasteereg[regclass - 1]) {
                            if (node->regdata.unk44[reg - 1] == graphhead->regdata.unk44[reg2 - 1]) {
                                found = true;
                            } else {
                                reg2++;
                            }
                        }

                        if (found &&
                                (reg2 < reg ||
                                 !(node->regdata.unk44[reg2 - 1] != NULL &&
                                   node->regdata.unk44[reg2 - 1]->type == isvar &&
                                   node->regdata.unk44[reg2 - 1]->isvar_issvar.location.memtype == Pmt))) {
                            genrop(Ulod, reg, node->regdata.unk44[reg - 1]->dtype, node->regdata.unk44[reg - 1]->isvar_issvar.size);
                            genrop(Ustr, reg2, node->regdata.unk44[reg - 1]->dtype, node->regdata.unk44[reg - 1]->isvar_issvar.size);
                            TRAP_IF(sp65[reg2 - 1] != 2);
                            sp65[reg2 - 1] = 1;
                            if (IS_PRESERVE_STACK_ATTR(entflag)) {
                                genrlodrstr(Urstr, reg2, node->regdata.unk44[reg - 1]);
                            }
                        } else {
                            genrlodrstr(Urstr, reg, node->regdata.unk44[reg - 1]);
                        }
                    } else {
                        sp65[reg - 1] = 1;
                        if (IS_PRESERVE_STACK_ATTR(entflag)) {
                            genrlodrstr(Urstr, reg, node->regdata.unk44[reg - 1]);
                        }
                    }
                } else {
                    genrlodrstr(Urstr, reg, node->regdata.unk44[reg - 1]);
                }
            }
        }

        for (reg = 1; i <= 35; i++) {
            if (sp65[reg - 1] == 2) {
                genrlodrstr(Urlod, reg, graphhead->regdata.unk44[reg - 1]);
            }
        }
    } else {
        memset(sp65, 0, sizeof(sp65));

        while (par <= MIN(pdefmax, 3)) {
            if (pdeftab[par].opc != Updef || !pdeftab[par].outmode) {
                par++;
            } else {
                parmRegclass = (par * 4 < offsetpassedbyint) + 1;
                reg = firstparmreg[parmRegclass - 1] + par;
                if (parmRegclass == 2 && par != 0) {
                    reg = firstparmreg[parmRegclass - 1] + 1;
                }

                TRAP_IF(pdeftab[par].dtype == Mdt);
                if (node->regdata.unk44[reg - 1] == 0) {
                    sp65[reg - 1] = 2;
                } else if (node->regdata.unk44[reg - 1] != NULL &&
                           node->regdata.unk44[reg - 1]->type == isvar &&
                           node->regdata.unk44[reg - 1]->isvar_issvar.location.memtype == Pmt &&
                           node->regdata.unk44[reg - 1]->isvar_issvar.location.blockno == curblk &&
                           node->regdata.unk44[reg - 1]->isvar_issvar.location.addr / 4 == par &&
                           fitparmreg(node->regdata.unk44[reg - 1]->isvar_issvar.location.addr,
                                      node->regdata.unk44[reg - 1]->isvar_issvar.size,
                                      pdeftab[par].offset,
                                      pdeftab[par].size)) {
                    sp65[reg - 1] = 2;
                    if (IS_PRESERVE_STACK_ATTR(entflag)) {
                        genrlodrstr(Urstr, reg, node->regdata.unk44[reg - 1]);
                    }
                } else {
                    sp65[reg - 1] = 2;
                }
                par += (pdeftab[par].size + 3) / 4;
            }
        }

        for (reg = 1; reg <= 35; reg++) {
            if (node->regdata.unk44[reg - 1] != NULL &&
                    node->regdata.unk44[reg - 1]->type == isvar &&
                    node->regdata.unk44[reg - 1]->isvar_issvar.location.memtype == Pmt &&
                    node->regdata.unk44[reg - 1]->isvar_issvar.location.blockno == curblk) {
                par = node->regdata.unk44[reg - 1]->isvar_issvar.location.addr / 4;
                if (par <= MIN(pdefmax, 3) && pdeftab[par].outmode) {
                    parmRegclass = (par * 4 < offsetpassedbyint) + 1;
                    parmReg = firstparmreg[parmRegclass - 1] + par;
                    if (parmRegclass == 2 && par != 0) {
                        parmReg = firstparmreg[parmRegclass - 1] + 1;
                    }

                    if (reg != parmReg) {
                        if ((parmReg < reg ||
                                    !(node->regdata.unk44[reg - 1] != NULL &&
                                        node->regdata.unk44[reg - 1]->type == isvar &&
                                        node->regdata.unk44[reg - 1]->isvar_issvar.location.memtype == Pmt)) &&
                                (reg <= 23 || parmReg > 23)) {
                            genrop(Ulod, reg, node->regdata.unk44[reg - 1]->dtype, node->regdata.unk44[reg - 1]->isvar_issvar.size);
                            genrop(Ustr, parmReg, node->regdata.unk44[reg - 1]->dtype, node->regdata.unk44[reg - 1]->isvar_issvar.size);
                            TRAP_IF(sp65[parmReg - 1] != 2);
                            sp65[parmReg - 1] = 1;

                            if (IS_PRESERVE_STACK_ATTR(entflag)) {
                                genrlodrstr(Urstr, parmReg, node->regdata.unk44[reg - 1]);
                            }
                        } else {
                            genrlodrstr(Urstr, reg, node->regdata.unk44[reg - 1]);
                        }
                    }
                }
            }
        }

        par = 0;
        while (MIN(pdefmax, 3) >= 0) {
            if (pdeftab[par].opc != Updef || !pdeftab[par].outmode) {
                par++;
            } else {
                parmRegclass = (par * 4 < offsetpassedbyint) + 1;
                reg = firstparmreg[parmRegclass - 1] + par;

                if (parmRegclass == 2 && par != 0) {
                    reg = firstparmreg[parmRegclass - 1] + 1;
                }

                if (sp65[reg - 1] == 2) {
                    OPC = Urlod;
                    DTYPE = pdeftab[par].dtype;
                    MTYPE = Pmt;
                    OFFSET = pdeftab[par].offset;
                    LENGTH = pdeftab[par].size;
                    IONE = curblk;
                    LEXLEV = coloroffset(reg);

                    if (parmRegclass == 2 || pdeftab[par].size <= 4) {
                        uwrite(&u);
                    } else {
                        if (DTYPE == Qdt) {
                            DTYPE = Rdt;
                        }
                        LENGTH = 4;
                        uwrite(&u);

                        i = par + 1;
                        while (i < 4 && (i - par) * 4 < pdeftab[par].size) {
                            OFFSET += 4;
                            LEXLEV += 1;
                            uwrite(&u);
                            i++;
                        }
                    }
                }
                par += (pdeftab[par].size + 3) / 4;
            }
        }
    }
}

/*
0042BF08 reemit
   unused
*/
void gen_outparcode(struct Graphnode *node) {
    int parmReg; // sp6C, s4
    int reg; // sp68
    struct Statement *stat;
    struct Statement *outpar;
    int phi_s3;

    stat = node->stat_head->prev;
    do {
        stat = stat->next;
        if (stat->opc == Ustr && stat->outpar) {
            outpar = stat->u.store.u.outpar.par;
            if (!curmst->u.mst.proc->o3opt) {
                if (outpar->u.par.index <= 4) {
                    phi_s3 = 0;
                    if (outpar->u.par.loc < curmst->u.mst.fp_offset) {
                        parmReg = firstparmreg[1] + outpar->u.par.index;
                    } else {
                        parmReg = firstparmreg[0] + outpar->u.par.index;
                    }
                    parmReg -= 1;

                    if (!inreg(stat->expr->ichain, node, &reg, false)) {
                        phi_s3 = 1;
                    } else if (parmReg != reg) {
                        if (parmReg < 24) {
                            if (parmReg < reg &&
                            (reg - firstparmreg[0]) * 4 <= curmst->u.mst.loc) {
                                BITARR_SET(node->unkD0, reg - 1, true);
                                phi_s3 = 1;
                            } else {
                                genrop(Ulod, parmReg, stat->expr->datatype, stat->expr->data.isvar_issvar.location.addr);
                                genrop(Ustr, reg, stat->expr->datatype, stat->expr->data.isvar_issvar.location.addr);
                                phi_s3 = 2;
                            }
                        } else if ((reg == firstparmreg[1] + 1 && curmst->u.mst.fp_offset >= 8) || reg < firstparmreg[0] + 4) {
                            BITARR_SET(node->unkD0, reg - 1, true);
                            phi_s3 = 1;
                        } else {
                            genrop(Ulod, parmReg, stat->expr->datatype, stat->expr->data.isvar_issvar.location.addr);
                            genrop(Ustr, reg, stat->expr->datatype, stat->expr->data.isvar_issvar.location.addr);
                            phi_s3 = 2;
                        }
                    }

                    if (phi_s3 == 1) {
                        genrlodrstr(Urstr, parmReg, stat->expr->ichain);
                    }
                } else if ((stat->expr->data.isvar_issvar.location.memtype & 7) != 5) {
                    outparlod(Ulod, stat->expr->data.isvar_issvar.assigned_value);
                    if (varlodstr(Ustr, stat->expr->ichain, node, NULL)) {
                        outparlod(Ustr, stat->expr);
                    }
                }
            } else if (outpar->u.par.reg == 0) {
                if (stat->expr->data.isvar_issvar.location.memtype != Amt) {
                    outparlod(Ulod, stat->expr->data.isvar_issvar.assigned_value);
                    if (varlodstr(Ustr, stat->expr->ichain, node, NULL)) {
                        outparlod(Ustr, stat->expr);
                    }
                }
            } else if (!inreg(stat->expr->ichain, node, &parmReg, false)) {
                genrlodrstr(Urstr, outpar->u.par.reg, stat->expr->ichain);
            } else if (parmReg != outpar->u.par.reg) {
                genrop(Ulod, outpar->u.par.reg, stat->expr->datatype, stat->expr->data.isvar_issvar.location.addr);
                genrop(Ustr, parmReg, stat->expr->datatype, stat->expr->data.isvar_issvar.location.addr);
            }

        }
    } while (stat != node->stat_tail);
}

/*
0042BF08 reemit
*/
static void func_00422AF0(struct Graphnode *node) {
    RegisterColor reg;
    RegisterColor reg2;

    OPC = Uunal;
    DTYPE = Adt;
    for (reg = 1; reg <= 23; reg++) {
        if (baseregexpr[reg - 1] != NULL && baseregexpr[reg - 1] != node->regdata.unk44[reg - 1]) {
            LEXLEV = coloroffset(reg);
            for (reg2 = 1; reg2 <= 23; reg2++) {
                if (unaltab[reg - 1][reg2 - 1] != 0) {
                    if (unaltab[reg - 1][reg2 - 1] == 2) {
                        IONE = coloroffset(reg2);
                        uwrite(&u);
                    }

                    unaltab[reg  - 1][reg2 - 1] = 0;
                    unaltab[reg2 - 1][reg  - 1] = 0;
                }
            }

            if (gpunaltab[reg - 1] != 0) {
                if (gpunaltab[reg - 1] == 2) {
                    IONE = r_gp;
                    uwrite(&u);
                }
                gpunaltab[reg - 1] = 0;
            }

            if (spunaltab[reg - 1] != 0) {
                if (spunaltab[reg - 1] == 2) {
                    IONE = r_sp;
                    uwrite(&u);
                }
                spunaltab[reg - 1] = 0;
            }

            baseregexpr[reg - 1] = NULL;
        }
    }
}

/*
00422D04 func_00422D04
004230F0 func_004230F0
00426FA4 func_00426FA4
0042B2C0 func_0042B2C0
*/
static void func_00422D04(struct IChain *ichain, struct Graphnode *node) {
    int reg;

    switch (ichain->type) {
        case isconst:
            genloadnum(ichain->dtype, 0, ichain->isconst.number, ichain->isconst.size, 1);
            break;

        case islda:
            genloadaddr(Ulda, ichain->islda_isilda.address.memtype, ichain->islda_isilda.address.blockno, ichain->islda_isilda.offset, ichain->islda_isilda.address.addr, ichain->islda_isilda.size);
            break;

        case isilda:
            func_00422D04(ichain->islda_isilda.outer_stack_ichain, node);
            genloadaddr(Ulda, ichain->islda_isilda.address.memtype, ichain->islda_isilda.address.blockno, ichain->islda_isilda.offset, ichain->islda_isilda.address.addr, ichain->islda_isilda.size);
            break;

        case isvar:
            if (inreg(ichain, node, &reg, true)) {
                genrop(Ulod, reg, ichain->dtype, ichain->isvar_issvar.size);
            } else {
                igen3(Ulod, ichain, false);
            }
            break;

        case issvar:
            func_00422D04(ichain->isvar_issvar.outer_stack_ichain, node);
            igen3(Uisld, ichain, false);
            break;

        case isop:
            func_00422D04(ichain->isop.op1, node);
            if (optab[ichain->isop.opc].is_binary_op) {
                func_00422D04(ichain->isop.op2, node);
            }

            if (ichain->isop.opc == Udec ||
                    ichain->isop.opc == Uilod ||
                    ichain->isop.opc == Uinc ||
                    ichain->isop.opc == Uixa ||
                    ichain->isop.opc == Uirld) {
                IONE = ichain->isop.size;
            }

            if (ichain->isop.opc == Uilod || ichain->isop.opc == Uirld) {
                LENGTH = ichain->isop.unk24_u16;
                LEXLEV = ichain->isop.unk13;
                OFFSET = ichain->isop.s.mtagno;
            }

            OPC = ichain->isop.opc;

            if ((ichain->isop.opc == Uabs ||
                        ichain->isop.opc == Uadd ||
                        ichain->isop.opc == Ucvt ||
                        ichain->isop.opc == Ucvtl ||
                        ichain->isop.opc == Udec ||
                        ichain->isop.opc == Udiv ||
                        ichain->isop.opc == Uinc ||
                        ichain->isop.opc == Umod ||
                        ichain->isop.opc == Umpy ||
                        ichain->isop.opc == Uneg ||
                        ichain->isop.opc == Urem ||
                        ichain->isop.opc == Usqr ||
                        ichain->isop.opc == Usub) &&
                    ichain->isop.overflow_attr) {
                LEXLEV = OVERFLOW_ATTR;
            } else {
                LEXLEV = 0;
            }

            DTYPE = ichain->dtype;
            uwrite(&u);
            break;

        default:
            caseerror(1, 1274, "uoptemit.p", 10);
            break;
    }
}

/*
004230F0 func_004230F0
   change variable datatype
*/
static void func_0042305C(struct Expression *expr, Datatype dtype) {
    if (expr->type == isvar || expr->type == issvar) {
        if (expr->data.isvar_issvar.copy != NULL && expr->data.isvar_issvar.copy != nocopy) {
            func_0042305C(expr->data.isvar_issvar.copy, dtype);
            return;
        }

        if (expr->data.isvar_issvar.size >= 4 || (dtype != Adt && dtype != Hdt)) {
            expr->datatype = dtype;
        }
    }
}

/*
004230F0 func_004230F0
00424FFC func_00424FFC
0042BB4C func_0042BB4C
0042BF08 reemit
   emits expr with a postorder traversal
*/
static void func_004230F0(struct Expression *expr, int arg1, struct Expression *baseaddr, int arg3, struct Graphnode *node) {
    bool need_swap;
    int reg;
    struct Expression *sp70;
    struct Expression *sp6C;
    union Constant constval;
    int sp58;
    int sp54;
    struct ScmThing *sp50;

    if (expr == NULL) {
        return;
    }

    switch (expr->type) {
        case islda:
            if (inreg(expr->ichain, node, &reg, 1)) {
                if (baseaddr != NULL) {
                    base_in_reg(reg, expr->ichain, baseaddr);
                }
                genrop(Ulod, reg, expr->datatype, sizeoftyp(Adt));
            } else {
                genloadaddr(Ulda, expr->data.islda_isilda.address.memtype, expr->data.islda_isilda.address.blockno, expr->data.islda_isilda.offset, expr->data.islda_isilda.address.addr, expr->data.islda_isilda.size);
            }
            break;

        case isconst:
            if (constinreg(expr->datatype, 0, expr->data.isconst.number, arg1) && inreg(expr->ichain, node, &reg, 1)) {
                genrop(Ulod, reg, expr->datatype, sizeoftyp(expr->datatype));
            } else {
                genloadnum(expr->datatype, 0, expr->data.isconst.number, expr->data.isconst.size, 1);
            }
            break;

        case isrconst:
            genloadrnum(expr->datatype, expr->data.isrconst.value, expr->data.isrconst.unk24, 1);
            break;

        case isvar:
        case issvar:
            if (expr->data.isvar_issvar.copy != NULL && expr->data.isvar_issvar.copy != nocopy) {
                func_004230F0(expr->data.isvar_issvar.copy, arg1, baseaddr, 0, node);
                break;
            }

            if (expr->type == isvar) {
                expr->ichain->dtype = expr->datatype;
                expr->ichain->isvar_issvar.size = expr->data.isvar_issvar.size;
                if (varlodstr(Ulod, expr->ichain, node, baseaddr)) {
                    igen3(Ulod, expr->ichain, expr->data.isvar_issvar.is_volatile);
                }
                break;
            }

            switch (expr->unk4) {
                case 1:
                case 3:
                case 4:
                case 5:
                    break;

                case 2:
                    if (expr->data.isvar_issvar.unk3C == NULL) {
                        expr->data.isvar_issvar.unk3C = expr->ichain->isvar_issvar.temploc;
                    }
                    break;

                default:
                    caseerror(1, 1373, "uoptemit.p", 10);
                    break;
            }

            if (expr->data.isvar_issvar.unk3C != NULL) {
                if (inreg(expr->ichain, node, &reg, 1)) {
                    genrop(Ulod, reg, expr->datatype, sizeoftyp(expr->datatype));
                } else {
                    spilltemplodstr(Ulod, expr->datatype, expr->data.isvar_issvar.unk3C);
                }

                expr->count--;
                if (expr->count == 0 && expr->unk4 == 1) {
                    expr->data.isvar_issvar.unk3C->not_spilled = true;
                }
            } else {
                func_004230F0(expr->data.isvar_issvar.outer_stack, 0, NULL, 0, node);
                expr->ichain->dtype = expr->datatype;
                expr->ichain->isvar_issvar.size = expr->data.isvar_issvar.size;
                igen3(Uisld, expr->ichain, expr->data.isvar_issvar.is_volatile);
                if ((expr->count > 1 && expr->unk4 != 2) || ((expr->unk4 == 3 || expr->unk4 == 5) && expr->data.isvar_issvar.unk3C == NULL)) {
                    if (expr->unk4 == 3 || expr->unk4 == 4 || expr->unk4 == 5) {
                        expr->data.isvar_issvar.unk3C = expr->ichain->isvar_issvar.temploc;
                    } else {
                        gettemp(&expr->data.isvar_issvar.unk3C, 4);
                    }

                    if (inreg(expr->ichain, node, &reg, 0)) {
                        genrop(Ustr, reg, expr->datatype, sizeoftyp(expr->datatype));
                    } else {
                        spilltemplodstr(Ustr, expr->datatype, expr->data.isvar_issvar.unk3C);
                    }
                }
            }
            break;

        case isilda:
            switch (expr->unk4) {
                case 1:
                case 3:
                case 4:
                case 5:
                    break;

                case 2:
                    if (expr->data.islda_isilda.unk38 == NULL) {
                        expr->data.islda_isilda.unk38 = expr->ichain->islda_isilda.temploc;
                    }
                    break;

                case 0:
                    dbgerror(0x137);
                    break;

                default:
                    caseerror(1, 1426, "uoptemit.p", 10);
                    break;
            }

            if (expr->data.islda_isilda.unk38 != NULL) {
                if (inreg(expr->ichain, node, &reg, 1)) {
                    genrop(Ulod, reg, expr->datatype, sizeoftyp(expr->datatype));
                } else {
                    spilltemplodstr(Ulod, expr->datatype, expr->data.islda_isilda.unk38);
                }

                expr->count--;
                if (expr->count == 0 && expr->unk4 == 1) {
                    expr->data.islda_isilda.unk38->not_spilled = true;
                }
            } else {
                func_004230F0(expr->data.islda_isilda.outer_stack, 0, NULL, 0, node);
                genloadaddr(Uilda, expr->data.islda_isilda.address.memtype, expr->data.islda_isilda.address.blockno, expr->data.islda_isilda.offset, expr->data.islda_isilda.address.addr, expr->data.islda_isilda.size);

                if ((expr->count > 1 && expr->unk4 != 2) ||
                        ((expr->unk4 == 3 || expr->unk4 == 5) && expr->data.islda_isilda.unk38 == NULL)) {
                    if (expr->unk4 == 3 || expr->unk4 == 4 || expr->unk4 == 5) {
                        expr->data.islda_isilda.unk38 = expr->ichain->isvar_issvar.temploc;
                    } else {
                        gettemp(&expr->data.islda_isilda.unk38, 4);
                    }

                    if (inreg(expr->ichain, node, &reg, 0)) {
                        genrop(Ustr, reg, expr->datatype, sizeoftyp(expr->datatype));
                    } else {
                        spilltemplodstr(Ustr, expr->datatype, expr->data.islda_isilda.unk38);
                    }
                }
            }
            break;

        case isop:
            switch (expr->unk4) {
                case 1:
                case 3:
                case 4:
                case 5:
                    break;

                case 2:
                    if (expr->data.isop.unk30 == NULL) {
                        expr->data.isop.unk30 = expr->ichain->isop.temploc;
                    }
                    break;

                case 0:
                    dbgerror(0x137);
                    break;

                default:
                    caseerror(1, 1476, "uoptemit.p", 10);
                    break;
            }

            if (expr->data.isop.unk30 != NULL) {
                if (arg3) {
                    sp58 = loopno;
                    check_loop_nest_ix_cand(expr->ichain, &sp58, &sp54);
                    if (sp54 != 0) {
                        use_ix = true;
                    }
                }
                if (use_ix) {
                    sp50 = get_ix_source(sp54, sp58);
                    if (inreg(sp50->ichain, node, &reg, 1)) {
                        genrop(Ulod, reg, 0, sizeoftyp(Adt));
                    } else {
                        spilltemplodstr(Ulod, 0, sp50->ichain->isop.temploc);
                    }
                }
                if (inreg(expr->ichain, node, &reg, 1)) {
                    if (baseaddr != NULL) {
                        base_in_reg(reg, expr->ichain, baseaddr);
                    }
                    genrop(Ulod, reg, expr->data.isop.datatype, sizeoftyp(expr->data.isop.datatype));
                } else {
                    spilltemplodstr(Ulod, expr->data.isop.datatype, expr->data.isop.unk30);
                }

                expr->count--;
                if (expr->count == 0 && expr->unk4 == 1) {
                    expr->data.isop.unk30->not_spilled = true;
                }
                return;
            }

            // emit expr operands first
            if (optab[expr->data.isop.opc].is_binary_op) {
                need_swap = false;

                if ((expr->data.isop.opc == Uequ ||
                            expr->data.isop.opc == Ugeq ||
                            expr->data.isop.opc == Ugrt ||
                            expr->data.isop.opc == Uleq ||
                            expr->data.isop.opc == Ules ||
                            expr->data.isop.opc == Uneq) &&
                        (expr->data.isop.aux.unk38_trep->ichain2 != NULL || expr->data.isop.aux2.unk3C_trep->ichain2 != NULL)) {
                    if (expr->data.isop.aux.unk38_trep->ichain2 == NULL) {
                        expr->datatype = expr->data.isop.aux2.unk3C_trep->ichain2->isop.datatype;
                        if (expr->data.isop.op1->type == isconst) {
                            if (inreg(expr->data.isop.aux2.unk3C_trep->unk28, node, &reg, 1)) {
                                genrop(Ulod, reg, expr->datatype, sizeoftyp(expr->datatype));
                            } else {
                                uwrite(&expr->data.isop.aux2.unk3C_trep->u);
                            }
                        } else {
                            if (inreg(expr->data.isop.aux.unk38_trep->ichain, node, &reg, 1)) {
                                genrop(Ulod, reg, expr->datatype, sizeoftyp(expr->datatype));
                            } else {
                                spilltemplodstr(Ulod, expr->datatype, expr->data.isop.aux.unk38_trep->ichain->isop.temploc);
                            }
                        }

                        if (inreg(expr->data.isop.aux2.unk3C_trep->ichain2, node, &reg, 1)) {
                            genrop(Ulod, reg, expr->datatype, sizeoftyp(expr->datatype));
                        } else {
                            spilltemplodstr(Ulod, expr->datatype, expr->data.isop.aux2.unk3C_trep->ichain2->isop.temploc);
                        }

                        if (expr->data.isop.aux2.unk3C_trep->unk2C < 0) {
                            need_swap = true;
                        }
                    } else {
                        expr->datatype = expr->data.isop.aux.unk38_trep->ichain2->isop.datatype;

                        if (inreg(expr->data.isop.aux.unk38_trep->ichain2, node, &reg, 1)) {
                            genrop(Ulod, reg, expr->datatype, sizeoftyp(expr->datatype));
                        } else {
                            spilltemplodstr(Ulod, expr->datatype, expr->data.isop.aux.unk38_trep->ichain2->isop.temploc);
                        }
                        if (expr->data.isop.op2->type == isconst) {
                            if (inreg(expr->data.isop.aux.unk38_trep->unk28, node, &reg, 1)) {
                                genrop(Ulod, reg, expr->datatype, sizeoftyp(expr->datatype));
                            } else {
                                uwrite(&expr->data.isop.aux.unk38_trep->u);
                            }
                        } else if (inreg(expr->data.isop.aux2.unk3C_trep->ichain, node, &reg, 1)) {
                            genrop(Ulod, reg, expr->datatype, sizeoftyp(expr->datatype));
                        } else {
                            spilltemplodstr(Ulod, expr->datatype, expr->data.isop.aux2.unk3C_trep->ichain->isop.temploc);
                        }

                        if (expr->data.isop.aux.unk38_trep->unk2C < 0) {
                            need_swap = true;
                        }
                    }
                } else {
                    sp70 = NULL;
                    sp6C = NULL;
                    if (expr->data.isop.opc != Uiequ &&
                            expr->data.isop.opc != Uineq &&
                            expr->data.isop.opc != Uigeq &&
                            expr->data.isop.opc != Uigrt &&
                            expr->data.isop.opc != Uileq &&
                            expr->data.isop.opc != Uiles &&
                            expr->data.isop.opc != Uinn &&
                            expr->data.isop.opc != Uixa) {
                        func_0042305C(expr->data.isop.op1, expr->datatype);
                        func_0042305C(expr->data.isop.op2, expr->datatype);
                        if (expr->data.isop.opc == Uadd || expr->data.isop.opc == Usub) {
                            if (expr->data.isop.op1->datatype == Adt || expr->data.isop.op1->datatype == Hdt) {
                                sp70 = baseaddr;
                            }

                            if (expr->data.isop.op2->datatype == Adt || expr->data.isop.op2->datatype == Hdt) {
                                sp6C = baseaddr;
                            }
                        }
                    } else {
                        if (expr->data.isop.opc == Uinn) {
                            if (expr->data.isop.op1->type == isvar || expr->data.isop.op1->type == issvar) {
                                expr->data.isop.op1->datatype = expr->datatype;
                            }

                            if (expr->data.isop.op2->type == isvar || expr->data.isop.op2->type == issvar) {
                                expr->data.isop.op2->datatype = Sdt;
                            }
                        } else if (expr->data.isop.opc != Uixa) {
                            if (expr->data.isop.op1->type == isvar || expr->data.isop.op1->type == issvar) {
                                if (expr->data.isop.op1->datatype != Adt && expr->data.isop.op1->datatype != Hdt) {
                                    expr->data.isop.op1->datatype = Adt;
                                }
                            }

                            if (expr->data.isop.op2->type == isvar || expr->data.isop.op2->type == issvar) {
                                if (expr->data.isop.op2->datatype != Adt && expr->data.isop.op2->datatype != Hdt) {
                                    expr->data.isop.op2->datatype = Adt;
                                }
                            }
                        } else {
                            if (expr->data.isop.op1->type == isvar || expr->data.isop.op1->type == issvar) {
                                if (expr->data.isop.op1->datatype != Adt && expr->data.isop.op1->datatype != Hdt) {
                                    expr->data.isop.op1->datatype = Adt;
                                }
                            }

                            if (expr->data.isop.op2->type == isvar || expr->data.isop.op2->type == issvar) {
                                expr->data.isop.op2->datatype = expr->datatype;
                            }
                            sp70 = baseaddr;
                        }
                    }

                    switch (expr->data.isop.opc) {
                        case Uequ:
                        case Uneq:
                            arg1 = 3;
                            break;

                        case Uand:
                        case Uior:
                        case Uxor:
                            arg1 = 2;
                            break;

                        case Uadd:
                        case Ugeq:
                        case Ugrt:
                        case Uleq:
                        case Ules:
                        case Usub:
                            arg1 = 1;
                            break;

                        case Udiv:
                        case Umod:
                        case Umpy:
                        case Urem:
                            arg1 = 5;
                            break;

                        default:
                            arg1 = 0;
                            break;
                    }


                    if (expr->data.isop.opc == Usub) {
                        func_004230F0(expr->data.isop.op1, 3, sp70, 0, node);
                    } else {
                        func_004230F0(expr->data.isop.op1, arg1, sp70, 0, node);
                    }

                    if (expr->data.isop.opc != Uiequ &&
                            expr->data.isop.opc != Uigeq &&
                            expr->data.isop.opc != Uigrt &&
                            expr->data.isop.opc != Uileq &&
                            expr->data.isop.opc != Uiles &&
                            expr->data.isop.opc != Uineq &&
                            expr->data.isop.opc != Uinn &&
                            expr->data.isop.opc != Uixa) {
                        if (expr->datatype == Idt || expr->datatype == Kdt) {
                            if (expr->data.isop.op1->type == isconst &&
                                    (expr->data.isop.op1->datatype == Jdt || expr->data.isop.op1->datatype == Ldt)) {
                                gen_cvt(expr->datatype, expr->data.isop.op1->datatype);
                            }
                        }
                    }

                    func_004230F0(expr->data.isop.op2, arg1, sp6C, 0, node);

                    if (expr->data.isop.opc != Uiequ &&
                            expr->data.isop.opc != Uigeq &&
                            expr->data.isop.opc != Uigrt &&
                            expr->data.isop.opc != Uileq &&
                            expr->data.isop.opc != Uiles &&
                            expr->data.isop.opc != Uineq &&
                            expr->data.isop.opc != Uinn &&
                            expr->data.isop.opc != Uixa) {
                        if (expr->datatype == Idt || expr->datatype == Kdt) {
                            if (expr->data.isop.op2->type == isconst &&
                                    (expr->data.isop.op2->datatype == Jdt || expr->data.isop.op2->datatype == Ldt)) {
                                gen_cvt(expr->datatype, expr->data.isop.op2->datatype);
                            }

                        }
                    }
                }

                if (need_swap) {
                    if (expr->data.isop.opc == Uixa) {
                        OPC = Uswp;
                        DTYPE = expr->data.isop.datatype;
                        DTYPE2 = expr->datatype;
                        uwrite(&u);
                    } else if (expr->data.isop.opc == Uinn) {
                        OPC = Uswp;
                        DTYPE = expr->datatype;
                        DTYPE2 = Sdt;
                        uwrite(&u);
                    } else {
                        OPC = Uswp;
                        DTYPE = expr->datatype;
                        DTYPE2 = expr->datatype;
                        uwrite(&u);
                    }
                }
            } else {
                if (expr->data.isop.opc == Uilod ||
                        expr->data.isop.opc == Uirld ||
                        expr->data.isop.opc == Uildv ||
                        expr->data.isop.opc == Uirlv) {

                    if (expr->data.isop.op1->type == isvar || expr->data.isop.op1->type == issvar) {
                        if (expr->data.isop.op1->datatype != Adt && expr->data.isop.op1->datatype != Hdt) {
                            expr->data.isop.op1->datatype = Adt;
                        }
                    }
                } else {
                    if (expr->data.isop.opc == Ucvt ||
                            expr->data.isop.opc == Urnd ||
                            expr->data.isop.opc == Utyp) {

                        if (expr->data.isop.op1->type == isvar || expr->data.isop.op1->type == issvar) {
                            expr->data.isop.op1->datatype = expr->data.isop.aux.cvtfrom;
                        }
                    } else {
                        if (expr->data.isop.op1->type == isvar || expr->data.isop.op1->type == issvar) {
                            expr->data.isop.op1->datatype = expr->datatype;
                        }
                    }
                }

                if (expr->data.isop.op1 != NULL &&
                        expr->data.isop.opc == Uilod &&
                        expr->data.isop.op1->type == islda &&
                        !inreg(expr->data.isop.op1->ichain, node, &reg, 1)) {
                    OPC = Ulod;
                    DTYPE = expr->datatype;
                    MTYPE = expr->data.isop.op1->data.islda_isilda.address.memtype;
                    IONE = expr->data.isop.op1->data.islda_isilda.address.blockno;
                    OFFSET = expr->data.isop.op1->data.islda_isilda.offset + expr->data.isop.datasize;
                    LENGTH = expr->data.isop.aux2.v1.unk3C;
                    LEXLEV = 0;
                    uwrite(&u);
                    goto block_275;
                } else {
                    if (expr->data.isop.opc == Uilod ||
                            expr->data.isop.opc == Uirld ||
                            expr->data.isop.opc == Uildv ||
                            expr->data.isop.opc == Uirlv) {
                        func_004230F0(expr->data.isop.op1, 3, expr->data.isop.unk34, has_ix && (expr->datatype == Qdt || expr->datatype == Rdt), node);
                    } else {
                        func_004230F0(expr->data.isop.op1, 0, baseaddr, 0, node);
                    }
                }
            }

            if (expr->data.isop.opc == Uchkh ||
                    expr->data.isop.opc == Uchkl ||
                    expr->data.isop.opc == Ucvtl ||
                    expr->data.isop.opc == Udec ||
                    expr->data.isop.opc == Uinc ||
                    expr->data.isop.opc == Uixa) {
                IONE = expr->data.isop.datasize;
            } else if (expr->data.isop.opc == Uilod ||
                    expr->data.isop.opc == Uirld ||
                    expr->data.isop.opc == Uildv ||
                    expr->data.isop.opc == Uirlv) {
                IONE = expr->data.isop.datasize;
                LENGTH = expr->data.isop.aux2.v1.unk3C;
            } else if (expr->data.isop.opc == Ucvt ||
                    expr->data.isop.opc == Urnd ||
                    expr->data.isop.opc == Utyp) {
                DTYPE2 = expr->data.isop.aux.cvtfrom;
            } else if (expr->data.isop.opc == Uiequ ||
                    expr->data.isop.opc == Uineq ||
                    expr->data.isop.opc == Uigeq ||
                    expr->data.isop.opc == Uigrt ||
                    expr->data.isop.opc == Uileq ||
                    expr->data.isop.opc == Uiles) {
                LENGTH = expr->data.isop.datasize;
                DTYPE = Mdt;
                IONE = expr->data.isop.aux2.v1.unk3C;
            } else if (expr->data.isop.opc == Uadj) {
                OFFSET = expr->data.isop.datasize;
                LENGTH = expr->data.isop.aux2.v1.unk3C;
            } else if (expr->data.isop.opc == Udif ||
                    expr->data.isop.opc == Uint ||
                    expr->data.isop.opc == Umus ||
                    expr->data.isop.opc == Usgs ||
                    expr->data.isop.opc == Uuni) {
                LENGTH = expr->data.isop.datasize;
            } else if (expr->data.isop.opc == Uinn) {
                LENGTH = expr->data.isop.datasize;
                IONE = expr->data.isop.aux2.v1.unk3C;
            }

#if 0
            if (expr->data.isop.opc != Uequ &&
                    expr->data.isop.opc != Ugeq &&
                    expr->data.isop.opc != Ugrt &&
                    expr->data.isop.opc != Uleq &&
                    expr->data.isop.opc != Ules &&
                    expr->data.isop.opc != Uneq) {}
#endif
            if (expr->data.isop.aux2.v1.overflow_attr &&
                       (expr->data.isop.opc == Uabs ||
                        expr->data.isop.opc == Uadd ||
                        expr->data.isop.opc == Ucvt ||
                        expr->data.isop.opc == Ucvtl ||
                        expr->data.isop.opc == Udec ||
                        expr->data.isop.opc == Udiv ||
                        expr->data.isop.opc == Uinc ||
                        expr->data.isop.opc == Umod ||
                        expr->data.isop.opc == Umpy ||
                        expr->data.isop.opc == Uneg ||
                        expr->data.isop.opc == Urem ||
                        expr->data.isop.opc == Usqr ||
                        expr->data.isop.opc == Usub)) {
                LEXLEV = OVERFLOW_ATTR;
            } else {
                LEXLEV = 0;
            }

            if (expr->data.isop.opc == Uilod ||
                    expr->data.isop.opc == Uirld ||
                    expr->data.isop.opc == Uildv ||
                    expr->data.isop.opc == Uirlv) {
                LEXLEV = expr->data.isop.aux2.v1.align;
                OFFSET = expr->data.isop.aux.mtagno;
            }
            if (expr->data.isop.opc == Uildv) {
                OPC = Uilod;
                SET_VOLATILE_ATTR(LEXLEV);
            } else if (expr->data.isop.opc == Uirlv) {
                OPC = Uirld;
                SET_VOLATILE_ATTR(LEXLEV);
            } else {
                OPC = expr->data.isop.opc;
            }
            if (OPC == Uilod && use_ix) {
                OPC = Uildi;
                use_ix = false;
            }

            if (expr->data.isop.opc != Uiequ &&
                    expr->data.isop.opc != Uigeq &&
                    expr->data.isop.opc != Uigrt &&
                    expr->data.isop.opc != Uileq &&
                    expr->data.isop.opc != Uiles &&
                    expr->data.isop.opc != Uineq) {
                DTYPE = expr->datatype;
            }
            uwrite(&u);

block_275:
            if ((expr->count > 1 && expr->unk4 != 2) ||
                    ((expr->unk4 == 3 || expr->unk4 == 5) && expr->data.isop.unk30 == NULL)) {
                if (expr->unk4 == 3 || expr->unk4 == 4 || expr->unk4 == 5) {
                    expr->data.isop.unk30 = expr->ichain->isop.temploc;
                } else {
                    if (expr->data.isop.datatype != Sdt) {
                        gettemp(&expr->data.isop.unk30, sizeoftyp(expr->data.isop.datatype));
                    } else if (expr->data.isop.opc == Uadj) {
                        gettemp(&expr->data.isop.unk30, expr->data.isop.aux2.v1.unk3C);
                    } else {
                        gettemp(&expr->data.isop.unk30, expr->data.isop.datasize);
                    }
                }

                if (inreg(expr->ichain, node, &reg, 0)) {
                    if (baseaddr != NULL) {
                        base_in_reg(reg, expr->ichain, baseaddr);
                    }
                    genrop(Ustr, reg, expr->data.isop.datatype, sizeoftyp(expr->data.isop.datatype));
                } else {
                    spilltemplodstr(Ustr, expr->data.isop.datatype, expr->data.isop.unk30);
                }

                if ((expr->data.isop.opc != Uadj &&
                     expr->data.isop.opc != Ucg2 &&
                     expr->data.isop.opc != Ucvt &&
                     expr->data.isop.opc != Uidx &&
                     expr->data.isop.opc != Uiequ &&
                     expr->data.isop.opc != Uigeq &&
                     expr->data.isop.opc != Uigrt &&
                     expr->data.isop.opc != Uildv &&
                     expr->data.isop.opc != Uileq &&
                     expr->data.isop.opc != Uiles &&
                     expr->data.isop.opc != Uilod &&
                     expr->data.isop.opc != Uineq &&
                     expr->data.isop.opc != Uinn &&
                     expr->data.isop.opc != Urnd &&
                     expr->data.isop.opc != Utyp &&
                     expr->data.isop.opc != Uirld &&
                     expr->data.isop.opc != Uirlv) &&
                        expr->ichain->isop.unk24_cand != NULL && expr->ichain->isop.unk24_cand != nota_candof) {
                    func_00422D04(expr->ichain->isop.unk24_cand->ichain_unk10, node);
                    if (expr->ichain->isop.unk24_cand->unk8 * expr->ichain->isop.unk24_cand->unk14 == -1) {
                        OPC = Uneg;
                        LEXLEV = 0;
                        DTYPE = expr->data.isop.datatype;
                        uwrite(&u);
                    } else if (expr->ichain->isop.unk24_cand->unk8 * expr->ichain->isop.unk24_cand->unk14 != 1) {
                        constval.intval = expr->ichain->isop.unk24_cand->unk8 * expr->ichain->isop.unk24_cand->unk14;
                        genloadnum(expr->data.isop.datatype, 0, constval, 4, 1);
                        OPC = Umpy;
                        LEXLEV = 0;
                        DTYPE = expr->data.isop.datatype;
                        uwrite(&u);
                    }


                    if (inreg(bittab[expr->ichain->isop.unk24_cand->unk18].ichain, node, &reg, 0)) {
                        genrop(Ustr, reg, expr->data.isop.datatype, sizeoftyp(expr->data.isop.datatype));
                    } else {
                        DTYPE = expr->data.isop.datatype;
                        MTYPE = Mmt;
                        IONE = curblk;
                        OFFSET = bittab[expr->ichain->isop.unk24_cand->unk18].ichain->isop.temploc->disp;
                        if (!stack_reversed) {
                            if (highestmdef < -OFFSET) {
                                highestmdef = -OFFSET;
                            }
                        } else {
                            if (highestmdef < OFFSET) {
                                highestmdef = OFFSET;
                            }
                        }
                        LENGTH = sizeoftyp(DTYPE);
                        LEXLEV = 0;
                        OPC = Ustr;
                        uwrite(&u);
                    }
                }
            }
            break;

        case dumped:
        default:
            caseerror(1, 1346, "uoptemit.p", 10);
            break;
    }
}

/*
00424FFC func_00424FFC
0042BB4C func_0042BB4C
0042BF08 reemit
*/
static void func_00424FFC(struct Expression *expr, struct Expression *baseaddr, struct Graphnode *node) {
    struct Expression *baseaddr1;
    struct Expression *baseaddr2;

    if (expr == NULL) {
        return;
    }

    switch (expr->type) {
        case islda:
        case isconst:
        case isrconst:
            break;

        case isvar:
        case issvar:
            if (expr->data.isvar_issvar.copy != NULL && expr->data.isvar_issvar.copy != nocopy) {
                func_00424FFC(expr->data.isvar_issvar.copy, baseaddr, node);
                break;
            }

            if (expr->type == isvar) {
                break;
            }

            switch (expr->unk4) {
                case 1:
                case 3:
                case 4:
                case 5:
                    break;

                case 2:
                    if (expr->data.isvar_issvar.unk3C == NULL) {
                        expr->data.isvar_issvar.unk3C = expr->ichain->isvar_issvar.temploc;
                    }
                    break;

                case 0:
                    dbgerror(0x137);
                    break;

                default:
                    caseerror(1, 1851, "uoptemit.p", 10);
                    break;
            }

            if (expr->data.isvar_issvar.unk3C != NULL) {
                break;
            }

            func_00424FFC(expr->data.isvar_issvar.outer_stack, NULL, node);
            if ((expr->count > 1 && expr->unk4 != 2) || ((expr->unk4 == 3 || expr->unk4 == 5) && expr->data.isvar_issvar.unk3C == NULL)) {
                func_004230F0(expr, 3, baseaddr, 0, node);
            }
            break;

        case isilda:
            switch (expr->unk4) {
                case 1:
                case 3:
                case 4:
                case 5:
                    break;

                case 2:
                    if (expr->data.islda_isilda.unk38 == NULL) {
                        expr->data.islda_isilda.unk38 = expr->ichain->islda_isilda.temploc;
                    }
                    break;

                case 0:
                    dbgerror(0x137);
                    break;

                default:
                    caseerror(1, 1868, "uoptemit.p", 10);
                    break;
            }

            if (expr->data.islda_isilda.unk38 != NULL) {
                break;
            }

            func_00424FFC(expr->data.islda_isilda.outer_stack, NULL, node);
            if ((expr->count > 1 && expr->unk4 != 2) || ((expr->unk4 == 3 || expr->unk4 == 5) && expr->data.islda_isilda.unk38 == NULL)) {
                func_004230F0(expr, 3, NULL, 0, node);
            }
            break;

        case isop:
            switch (expr->unk4) {
                case 1:
                case 3:
                case 4:
                case 5:
                    break;

                case 2:
                    expr->data.isop.unk30 = expr->data.isop.unk30;
                    if (expr->data.isop.unk30 == NULL) {
                        expr->data.isop.unk30 = expr->ichain->isop.temploc;
                    }
                    break;

                default:
                    caseerror(1, 1886, "uoptemit.p", 10);
                    break;
            }

            if (expr->data.isop.unk30 != NULL) {
                break;
            }

            if ((expr->data.isop.opc != Uequ &&
                 expr->data.isop.opc != Uneq &&
                 expr->data.isop.opc != Ugrt &&
                 expr->data.isop.opc != Ules &&
                 expr->data.isop.opc != Ugeq &&
                 expr->data.isop.opc != Uleq) ||
                    ((expr->data.isop.aux.unk38_trep->ichain2 == NULL) && (expr->data.isop.aux2.unk3C_trep->ichain2 == NULL))) {
                baseaddr1 = NULL;
                if (optab[expr->data.isop.opc].is_binary_op) {
                    baseaddr2 = NULL;
                    if (expr->data.isop.opc == Uadd || expr->data.isop.opc == Usub) {
                        if (expr->data.isop.op1->datatype == Adt) {
                            baseaddr1 = baseaddr;
                        }
                        if (expr->data.isop.op2->datatype == Adt) {
                            baseaddr2 = baseaddr;
                        }
                    } else if (expr->data.isop.opc == Uixa) {
                        baseaddr1 = baseaddr;
                    }

                    func_00424FFC(expr->data.isop.op1, baseaddr1, node);
                    func_00424FFC(expr->data.isop.op2, baseaddr2, node);
                } else if (expr->data.isop.opc == Uilod ||
                           expr->data.isop.opc == Uirld ||
                           expr->data.isop.opc == Uildv ||
                           expr->data.isop.opc == Uirlv) {
                    func_00424FFC(expr->data.isop.op1, expr->data.isop.unk34, node);
                } else {
                    func_00424FFC(expr->data.isop.op1, baseaddr, node);
                }
            }

            if ((expr->count > 1 && expr->unk4 != 2) || ((expr->unk4 == 3 || expr->unk4 == 5) && expr->data.isop.unk30 == NULL)) {
                func_004230F0(expr, 3, baseaddr, 0, node);
            }
            break;

        case dumped:
        default:
            caseerror(1, 1844, "uoptemit.p", 10);
            break;

    }

    return;
}

/*
0042BF08 reemit
*/
static void func_00425594(struct JumpFallthroughBB *bbs) {

    while (bbs != NULL) {
        if (bbs->unk1) {
            genrlodrstr(Urlod, bbs->reg, bbs->ichain);
        } else {
            genrlodrstr(Urstr, bbs->reg, bbs->ichain);
        }
        bbs = bbs->next;
    }
}

/*
00425618 func_00425618
00426DE8 func_00426DE8
   additional constant folding
*/
static void func_00425618(struct IChain *ichain, struct Graphnode *node, struct IChainList **listTail) {
    struct IChainList *newlist;
    struct Expression *var;
    bool sp5F;
    bool overflow;
    int sp58;
    unsigned short hash;
    int leftVal;
    int rightVal;
    bool haslda;
    struct IChainList *sp2C;

    switch (ichain->type) {
        case islda:
        case isconst:
        case isrconst:
            if (*listTail == NULL) {
                newlist = alloc_new(0x30, &perm_heap);
                newlist->prev = NULL;
                newlist->next = NULL;
                *listTail = newlist;
            } else {
                if ((*listTail)->next == NULL) {
                    newlist = alloc_new(0x30, &perm_heap);
                    (*listTail)->next = newlist;
                    newlist->prev = (*listTail);
                    newlist->next = NULL;
                }
                *listTail = (*listTail)->next;
            }

            (*listTail)->ichain = *ichain;
            break;

        case isvar:
            hash = isvarhash(ichain->isvar_issvar.location);
            var = table[hash];

            sp5F = false;
            while (!sp5F && var != NULL) {
                if (var->type == isvar) {
                    if (addreq(var->data.isvar_issvar.location, ichain->isvar_issvar.location)) {
                        sp5F = var->graphnode == node && !var->unk2;
                    }
                }

                if (!sp5F) {
                    var = var->next;
                }
            }

            if (!sp5F) {
                // seems buggy
                var = table[hash];
                while (!sp5F) {
                    if (var->type == isvar) {
                        if (addreq(var->data.isvar_issvar.location, ichain->isvar_issvar.location)) {
                            sp5F = var->graphnode == node->predecessors->graphnode && !var->unk2;
                        }
                    }

                    if (!sp5F) {
                        var = var->next;
                    }
                }
            }

            if (*listTail == NULL) {
                newlist = alloc_new(0x30, &perm_heap);
                *listTail = newlist;
                newlist->prev = 0;
                newlist->next = 0;
            } else {
                if ((*listTail)->next == 0) {
                    newlist = alloc_new(0x30, &perm_heap);
                    (*listTail)->next = newlist;
                    newlist->prev = (*listTail);
                    newlist->next = NULL;
                }
                *listTail = (*listTail)->next;
            }

            (*listTail)->ichain.type = var->data.isvar_issvar.assigned_value->type;
            if (var->data.isvar_issvar.assigned_value->type == isconst) {
                (*listTail)->ichain.dtype = var->data.isvar_issvar.assigned_value->datatype;
                if (var->data.isvar_issvar.assigned_value->datatype == Gdt) {
                    dbgerror(0x45E);
                }

                if (ichain->isvar_issvar.size < 4) {
                    (*listTail)->ichain.isconst.number.intval = cutbits(var->data.isvar_issvar.assigned_value->data.isconst.number.intval, ichain->isvar_issvar.size * 8, (*listTail)->ichain.dtype);
                } else {
                    (*listTail)->ichain.isconst.number = var->data.isvar_issvar.assigned_value->data.isconst.number;
                }
                (*listTail)->ichain.isconst.size = var->data.isvar_issvar.assigned_value->data.isconst.size;
            } else {
                (*listTail)->ichain.islda_isilda.offset  = var->data.isvar_issvar.assigned_value->data.islda_isilda.offset;
                (*listTail)->ichain.islda_isilda.size    = var->data.isvar_issvar.assigned_value->data.islda_isilda.size;
                (*listTail)->ichain.islda_isilda.address = var->data.isvar_issvar.assigned_value->data.islda_isilda.address;
            }
            break;

        case isop:
            func_00425618(ichain->isop.op1, node, listTail);
            if (optab[ichain->isop.opc].is_binary_op) {
                func_00425618(ichain->isop.op2, node, listTail);
            }

            if (optab[ichain->isop.opc].is_binary_op) {
                sp2C = (*listTail)->prev;
                overflow = false;
                haslda = false;

                if (sp2C->ichain.type == islda) {
                    leftVal = sp2C->ichain.islda_isilda.offset;
                } else {
                    leftVal = sp2C->ichain.isconst.number.intval;
                }

                if ((*listTail)->ichain.type == islda) {
                    rightVal = (*listTail)->ichain.islda_isilda.offset;
                } else {
                    rightVal = (*listTail)->ichain.isconst.number.intval;
                }

                if (sp2C->ichain.type == islda && (*listTail)->ichain.type == islda) {
                    ichain->dtype = Jdt;
                }

                switch (ichain->isop.opc) {
                    case Uadd:
                        if (sp2C->ichain.type == islda || (*listTail)->ichain.type == islda) {
                            haslda = true;
                        }
                        overflow = addovfw(ichain->dtype, leftVal, rightVal);
                        break;

                    case Usub:
                        if (sp2C->ichain.type == islda && (*listTail)->ichain.type == islda) {
                            noop = 0;
                        } else if (sp2C->ichain.type == islda || (*listTail)->ichain.type == islda) {
                            haslda = true;
                        }
                        overflow = subovfw(ichain->dtype, leftVal, rightVal);
                        break;

                    case Uixa:
                        overflow = false;
                        if (mpyovfw(ichain->dtype, rightVal, ichain->isop.size)) {
                            overflow = true;
                        }

                        haslda = sp2C->ichain.type == islda;
                        rightVal *= ichain->isop.size;
                        if (!overflow) {
                            overflow = addovfw(Adt, leftVal, rightVal);
                        }
                        break;

                    case Uand:
                        haslda = sp2C->ichain.type == islda || (*listTail)->ichain.type == islda;
                        break;

                    case Uior:
                        haslda = sp2C->ichain.type == islda || (*listTail)->ichain.type == islda;
                        break;

                    case Umpy:
                        haslda = false;
                        overflow = mpyovfw(ichain->dtype, leftVal, rightVal);
                        break;

                    case Udiv:
                    case Urem:
                        overflow = rightVal == 0;
                        break;

                    case Umod:
                        overflow = rightVal < 1;
                        break;

                    case Ushl:
                    case Ushr:
                        overflow = rightVal < 0 || rightVal >= 32;
                        break;

                    case Usign:
                        overflow = leftVal == 0x80000000 && rightVal >= 0;
                        break;

                    case Uneq:
                    case Uequ:
                        if (sp2C->ichain.type == islda) {
                            haslda = true;
                        } else if ((*listTail)->ichain.type == islda) {
                            haslda = true;
                        }
                        break;

                    case Ugeq:
                    case Ugrt:
                    case Uleq:
                    case Ules:
                    case Umax:
                    case Umin:
                    case Umus:
                    case Uinn:
                    case Uint:
                    case Uuni:
                    case Udif:
                        break;

                    default:
                        caseerror(1, 2079, "uoptemit.p", 0xA);
                        break;
                }

                if (overflow && ichain->isop.overflow_attr) {
                    ovfwwarning(ichain->isop.opc);
                    sp58 = 1;
                }

                switch (ichain->isop.opc) {
                    case Uadd:
                        sp58 = leftVal + rightVal;
                        break;

                    case Usub:
                        sp58 = leftVal - rightVal;
                        break;

                    case Umpy:
                        sp58 = leftVal * rightVal;
                        break;

                    case Udiv:
                        if (ichain->dtype == Idt || ichain->dtype == Jdt) {
                            sp58 = leftVal / rightVal;
                        } else {
                            sp58 = (unsigned) leftVal / (unsigned) rightVal;
                        }
                        break;

                    case Umod:
                        sp58 = leftVal % rightVal;
                        if ((sp58 ^ rightVal) < 0) {
                            sp58 += rightVal;
                        }
                        break;

                    case Urem:
                        if (ichain->dtype == Idt || ichain->dtype == Jdt) {
                            sp58 = leftVal - (leftVal / rightVal) * rightVal;
                        } else {
                            sp58 = leftVal - ((unsigned) leftVal / (unsigned) rightVal) * rightVal;
                        }
                        break;

                    case Uand:
                        sp58 = leftVal & rightVal;
                        break;

                    case Uior:
                        sp58 = leftVal | rightVal;
                        break;

                    case Uxor:
                        sp58 = leftVal ^ rightVal;
                        break;

                    case Ushl:
                        sp58 = leftVal << rightVal;
                        break;

                    case Ushr:
                        if (ichain->dtype == Idt || ichain->dtype == Jdt) {
                            sp58 = leftVal >> rightVal;
                        } else {
                            sp58 = (unsigned) leftVal >> rightVal;
                        }
                        break;

                    case Usign:
                        sp58 = leftVal;
                        if (leftVal < 0) {
                            sp58 = -leftVal;
                        }
                        if (rightVal < 0) {
                            sp58 = -sp58;
                        }
                        break;

                    case Uequ:
                        if (haslda) {
                            sp58 = false;
                        } else {
                            sp58 = leftVal == rightVal;
                        }
                        break;

                    case Uneq:
                        if (haslda) {
                            sp58 = true;
                        } else {
                            sp58 = leftVal != rightVal;
                        }
                        break;

                    case Ugeq:
                        if (ichain->dtype == Idt || ichain->dtype == Jdt) {
                            sp58 = leftVal >= rightVal;
                        } else {
                            sp58 = (unsigned)leftVal >= (unsigned)rightVal;
                        }
                        break;

                    case Ugrt:
                        if (ichain->dtype == Idt || ichain->dtype == Jdt) {
                            sp58 = leftVal > rightVal;
                        } else {
                            sp58 = (unsigned)leftVal > (unsigned)rightVal;
                        }
                        break;

                    case Uleq:
                        if (ichain->dtype == Idt || ichain->dtype == Jdt) {
                            sp58 = leftVal <= rightVal;
                        } else {
                            sp58 = (unsigned)leftVal <= (unsigned)rightVal;
                        }
                        break;

                    case Ules:
                        if (ichain->dtype == Idt || ichain->dtype == Jdt) {
                            sp58 = leftVal < rightVal;
                        } else {
                            sp58 = (unsigned)leftVal < (unsigned)rightVal;
                        }
                        break;

                    case Umin:
                        if (ichain->dtype == Idt || ichain->dtype == Jdt) {
                            sp58 = leftVal < rightVal ? leftVal : rightVal;
                        } else {
                            sp58 = (unsigned)leftVal < (unsigned)rightVal ? leftVal : rightVal;
                        }
                        break;

                    case Umax:
                        if (ichain->dtype == Idt || ichain->dtype == Jdt) {
                            sp58 = leftVal >= rightVal ? leftVal : rightVal;
                        } else {
                            sp58 = (unsigned)leftVal >= (unsigned)rightVal ? leftVal : rightVal;
                        }
                        break;

                    case Uuni:
                    case Umus:
                    case Uinn:
                    case Uint:
                    case Udif:
                        // ...?
                        break;

                    case Uixa:
                        sp58 = leftVal + rightVal;
                        break;

                    default:
                        caseerror(1, 2124, "uoptemit.p", 10);
                        break;
                }

                if ((sp2C->ichain.type == isconst && !haslda) ||
                    (sp2C->ichain.type != isconst &&  haslda)) {
                    if (haslda) {
                        sp2C->ichain.islda_isilda.offset = sp58;
                    } else {
                        sp2C->ichain.isconst.number.intval = sp58;
                    }
                } else if (haslda) {
                    (*listTail)->prev->ichain = (*listTail)->ichain;

                    sp2C->ichain.islda_isilda.offset = sp58;
                } else {
                    sp2C->ichain.type = isconst;
                    sp2C->ichain.dtype = Ldt;
                    sp2C->ichain.isconst.number.intval = sp58;
                    sp2C->ichain.isconst.size = 4;
                }

                *listTail = (*listTail)->prev;
            } else {
                overflow = false;
                if ((*listTail)->ichain.type == islda) {
                    leftVal = (*listTail)->ichain.islda_isilda.offset;
                } else {
                    leftVal = (*listTail)->ichain.isconst.number.intval;
                }

                switch (ichain->isop.opc) {
                    case Uneg:
                    case Uabs:
                        overflow = leftVal == 0x80000000;
                        break;

                    case Udec:
                        rightVal = ichain->isop.size;
                        overflow = subovfw(ichain->dtype, leftVal, rightVal);
                        break;

                    case Uinc:
                        rightVal = ichain->isop.size;
                        overflow = addovfw(ichain->dtype, leftVal, rightVal);
                        break;

                    case Unot:
                    case Ulnot:
                    case Uodd:
                    case Ucvt:
                    case Ucvtl:
                    case Usqr:
                    case Usgs:
                    case Uchkh:
                    case Uchkl:
                        break;

                    default:
                        overflow = 0;
                        caseerror(1, 2257, "uoptemit.p", 10);
                        break;
                }

                if (overflow && ichain->isop.overflow_attr) {
                    ovfwwarning(ichain->isop.opc);
                    sp58 = 1;
                }

                switch (ichain->isop.opc) {
                    case Uabs:
                        sp58 = leftVal;
                        if (ichain->dtype == Idt || ichain->dtype == Jdt) {
                            if (leftVal < 0) {
                                sp58 = -leftVal;
                            }
                        }
                        break;

                    case Uodd:
                        if (leftVal & 1) {
                            sp58 = true;
                        } else {
                            sp58 = false;
                        }
                        break;

                    case Usqr:
                        sp58 = leftVal * leftVal;
                        break;

                    case Uneg:
                        sp58 = -leftVal;
                        break;

                    case Ulnot:
                        if ((*listTail)->ichain.type == islda) {
                            sp58 = 0;
                        } else {
                            sp58 = !leftVal;
                        }
                        break;

                    case Unot:
                        sp58 = ~leftVal;
                        break;

                    case Udec:
                        sp58 = leftVal - rightVal;
                        break;

                    case Uinc:
                        sp58 = leftVal + rightVal;
                        break;

                    case Uchkh:
                        sp58 = leftVal;
                        if (ichain->isop.size < leftVal) {
                            boundswarning();
                        }
                        break;

                    case Uchkl:
                        sp58 = leftVal;
                        if (leftVal < ichain->isop.size) {
                            boundswarning();
                        }
                        break;

                    case Ucvtl:
                        sp58 = leftVal & ((1 << (ichain->isop.size & 0x1f)) - 1);
                        if ((*listTail)->ichain.dtype == Idt || (*listTail)->ichain.dtype == Jdt) {
                            // make negative if the leftmost bit is set
                            sp58 = (sp58 ^ (1 << ((ichain->isop.size + 0x1f) & 0x1f)))
                                         - (1 << ((ichain->isop.size + 0x1f) & 0x1f));
                        }
                        break;

                    case Ucvt:
                        (*listTail)->ichain.dtype = ichain->dtype;
                        break;

                    case Usgs:
                        break;

                    default:
                        caseerror(1, 2271, "uoptemit.p", 10);
                        break;
                }

                if (ichain->isop.opc == Ucvt) {
                    break;
                }

                if ((*listTail)->ichain.type == islda) {
                    if (ichain->isop.opc == Ulnot) {
                        (*listTail)->ichain.type = isconst;
                        (*listTail)->ichain.dtype = Jdt;
                        (*listTail)->ichain.isconst.number.intval = sp58;
                        (*listTail)->ichain.isconst.size = 4;
                    } else {
                        (*listTail)->ichain.islda_isilda.offset = sp58;
                    }
                } else {
                    (*listTail)->ichain.isconst.number.intval = sp58;
                }
            }
            break;

        case isilda:
        case issvar:
        case dumped:
        default:
            caseerror(1, 1972, "uoptemit.p", 10);
            break;
    }
}

/*
00426FA4 func_00426FA4
*/
static void func_00426DE8(struct IChain *ichain, struct Graphnode *node) {
    struct IChainList *listTail;
    struct AllocBlock *constfold_block;

    constfold_block = alloc_mark(&perm_heap);
    listTail = NULL;
    func_00425618(ichain, node, &listTail);
    switch (listTail->ichain.type) {
        case islda:
            genloadaddr(Ulda, listTail->ichain.islda_isilda.address.memtype, listTail->ichain.islda_isilda.address.blockno, listTail->ichain.islda_isilda.offset, listTail->ichain.islda_isilda.address.addr, listTail->ichain.islda_isilda.size);
            break;

        case isconst:
            if (ichain->dtype == Qdt || ichain->dtype == Rdt) {
                genloadnum(listTail->ichain.dtype, 0, listTail->ichain.isconst.number, listTail->ichain.isconst.size, true);
            } else {
                genloadnum(ichain->dtype, 0, listTail->ichain.isconst.number, listTail->ichain.isconst.size, true);
            }
            break;

        case isvar:
            dbgerror(0x210);
            break;

        case isop:
            dbgerror(0x211);
            break;

        default:
            // isrconst, even though it's handled in inner function
            caseerror(1, 2333, "uoptemit.p", 10);
            break;
    }
    alloc_release(&perm_heap, constfold_block);
}

/*
00426FA4 func_00426FA4
0042933C func_0042933C
0042AADC func_0042AADC
*/
static void func_00426FA4(struct IChain *ichain, int arg1, struct Expression *baseaddr, int arg3, struct Graphnode *node) {
    int reg;
    union Constant constval;
    struct Expression *sp64;
    struct Expression *sp60;
    Datatype sp5F;
    struct IChain *sp58;
    struct TrepImageThing *trep;

    switch (ichain->type) {
        case islda:
            if (inreg(ichain, node, &reg, 1)) {
                if (baseaddr != NULL) {
                    base_in_reg(reg, ichain, baseaddr);
                }
                genrop(Ulod, reg, Adt, sizeoftyp(Adt));
            } else {
                genloadaddr(Ulda, ichain->islda_isilda.address.memtype, ichain->islda_isilda.address.blockno, ichain->islda_isilda.offset, ichain->islda_isilda.address.addr, ichain->islda_isilda.size);
            }
            break;

        case isconst:
            if (constinreg(ichain->dtype, 0, ichain->isconst.number, 0) && inreg(ichain, node, &reg, 1)) {
                genrop(Ulod, reg, ichain->dtype, sizeoftyp(ichain->dtype));
            } else {
                genloadnum(ichain->dtype, 0, ichain->isconst.number, ichain->isconst.size, true);
            }
            break;

        case isrconst:
            genloadrnum(ichain->dtype, ichain->isrconst.unk10, ichain->isrconst.unk14, 1);
            break;

        case isvar:
            if (!bvectin(ichain->bitpos, &node->bvs.stage2.unk16C)) {
                if (varlodstr(Ulod, ichain, node, baseaddr)) {
                    igen3(Ulod, ichain, false);
                }
            } else {
                func_00426DE8(ichain, node);
            }
            break;

        case isilda:
            if (!bvectin(ichain->bitpos, &node->bvs.stage2.unk164)) {
                if (arg1) {
                    noop = 0;
                } else if (inreg(ichain, node, &reg, 1)) {
                    genrop(Ulod, reg, ichain->dtype, sizeoftyp(ichain->dtype));
                } else {
                    spilltemplodstr(Ulod, ichain->dtype, ichain->islda_isilda.temploc);
                }
            } else if (!arg1 && bvectin(ichain->bitpos, &node->bvs.stage2.unk154)) {
                if (inreg(ichain, node, &reg, 1)) {
                    genrop(Ulod, reg, ichain->dtype, sizeoftyp(ichain->dtype));
                } else {
                    spilltemplodstr(Ulod, ichain->dtype, ichain->islda_isilda.temploc);
                }
            } else {
                func_00426FA4(ichain->islda_isilda.outer_stack_ichain, 0, NULL, 0, node);
                genloadaddr(Uilda, ichain->islda_isilda.address.memtype, ichain->islda_isilda.address.blockno, ichain->islda_isilda.offset, ichain->islda_isilda.address.addr, ichain->islda_isilda.size);
                if (arg1) {
                    if (inreg(ichain, node, &reg, 0)) {
                        genrop(Ustr, reg, ichain->dtype, sizeoftyp(ichain->dtype));
                    } else {
                        spilltemplodstr(Ustr, ichain->dtype, ichain->islda_isilda.temploc);
                    }
                }
            }
            break;

        case issvar:
            if (!bvectin(ichain->bitpos, &node->bvs.stage2.unk164)) {
                if (arg1) {
                    noop = 0;
                } else if (inreg(ichain, node, &reg, 1)) {
                    genrop(Ulod, reg, ichain->dtype, sizeoftyp(ichain->dtype));
                } else {
                    spilltemplodstr(Ulod, ichain->dtype, ichain->isvar_issvar.temploc);
                }
            } else if (!arg1 && bvectin(ichain->bitpos, &node->bvs.stage2.unk154)) {
                if (inreg(ichain, node, &reg, 1)) {
                    genrop(Ulod, reg, ichain->dtype, sizeoftyp(ichain->dtype));
                } else {
                    spilltemplodstr(Ulod, ichain->dtype, ichain->isvar_issvar.temploc);
                }
                return;
            } else {
                func_00426FA4(ichain->isvar_issvar.outer_stack_ichain, 0, NULL, 0, node);
                igen3(Uisld, ichain, false);
                if (arg1) {
                    if (inreg(ichain, node, &reg, 0)) {
                        genrop(Ustr, reg, ichain->dtype, sizeoftyp(ichain->dtype));
                        return;
                    }
                    spilltemplodstr(Ustr, ichain->dtype, ichain->isvar_issvar.temploc);
                    return;
                }
            }
            return;

        case isop:
            if (ichain->isop.opc == Uisst || ichain->isop.opc == Ustr) {
                if (ichain->isop.op2->type != isop) {
                    ichain->isop.op1->dtype = ichain->isop.op2->dtype;
                } else {
                    ichain->isop.op1->dtype = ichain->isop.op2->isop.datatype;
                }

                if (ichain->isop.opc == Uisst) {
                    func_00426FA4(ichain->isop.op1->isvar_issvar.outer_stack_ichain, 0, NULL, 0, node);
                }

                func_00426FA4(ichain->isop.op2, 0, NULL, 0, node);
                if (ichain->isop.opc == Uisst) {
                    igen3(Uisst, ichain->isop.op1, false);
                } else if (varlodstr(Ustr, ichain->isop.op1, node, NULL)) {
                    igen3(Ustr, ichain->isop.op1, false);
                }
                return;
            }

            if (ichain->isop.opc == Uistr || ichain->isop.opc == Uistv) {
                if (ichain->isop.op1->type == islda && ichain->isop.opc == Uistr && !inreg(ichain->isop.op1, node, &reg, 1)) {
                    func_00426FA4(ichain->isop.op2, 0, NULL, 0, node);
                    OPC = Ustr;
                    DTYPE = ichain->isop.op2->dtype;
                    MTYPE = ichain->isop.op1->islda_isilda.address.memtype;
                    IONE = ichain->isop.op1->islda_isilda.address.blockno;
                    OFFSET = ichain->isop.op1->islda_isilda.offset + ichain->isop.s.word;
                    LEXLEV = 0;
                    LENGTH = ichain->isop.size;
                    uwrite(&u);
                } else {
                    func_00426FA4(ichain->isop.op1, 0, ichain->isop.stat->u.store.baseaddr, 0, node);
                    func_00426FA4(ichain->isop.op2, 0, NULL, 0, node);
                    OPC = Uistr;
                    DTYPE = ichain->isop.op2->dtype;
                    IONE = ichain->isop.s.word;
                    LENGTH = ichain->isop.size;
                    LEXLEV = ichain->isop.unk13;
                    MTYPE = Zmt; // ???
                    if (ichain->isop.opc == Uistv) {
                        SET_VOLATILE_ATTR(LEXLEV);
                    }
                    uwrite(&u);
                }
                return;
            }

            if (ichain->isop.opc == Uirst || ichain->isop.opc == Uirsv) {
                func_00426FA4(ichain->isop.op1, 0, ichain->isop.stat->u.store.baseaddr, 0, node);
                func_00426FA4(ichain->isop.op2, 0, NULL, 0, node);
                OPC = Uistr; //! Uistr instead of Uirst
                DTYPE = ichain->isop.op2->dtype;
                IONE =  ichain->isop.s.word;
                LENGTH = ichain->isop.size;
                LEXLEV = ichain->isop.unk13;
                MTYPE = Zmt;
                if (ichain->isop.opc == Uistv) { //! Uistv instead of Uirsv. ok this is clearly copy paste
                    SET_VOLATILE_ATTR(LEXLEV);
                }
                uwrite(&u);
                return;
            }

            if (ichain->isop.opc == Umov || ichain->isop.opc == Umovv) {
                if (ichain->isop.op1->type == isvar || ichain->isop.op1->type == issvar) {
                    if (ichain->isop.op1->dtype != Adt && ichain->isop.op1->dtype != Hdt) {
                        ichain->isop.op1->dtype = Adt;
                    }
                }

                if (ichain->isop.op2->type == isvar || ichain->isop.op2->type == issvar) {
                    if (ichain->isop.op2->dtype != Adt && ichain->isop.op2->dtype != Hdt) {
                        ichain->isop.op2->dtype = Adt;
                    }
                }

                func_00426FA4(ichain->isop.op1, 0, ichain->isop.stat->u.store.baseaddr, 0, node);
                func_00426FA4(ichain->isop.op2, 0, ichain->isop.stat->u.store.u.mov.baseaddr, 0, node);
                OPC = Umov;
                DTYPE = Mdt;
                LENGTH = ichain->isop.size;
                IONE = ichain->isop.unk24_u16 & 0xFF;
                LEXLEV = ichain->isop.unk24_u16 >> 8;
                if (ichain->isop.opc == Umovv) {
                    SET_VOLATILE_ATTR(LEXLEV);
                }
                uwrite(&u);
                return;
            }

            if (ichain->isop.opc == Utpeq ||
                    ichain->isop.opc == Utpge ||
                    ichain->isop.opc == Utpgt ||
                    ichain->isop.opc == Utple ||
                    ichain->isop.opc == Utplt ||
                    ichain->isop.opc == Utpne) {

                if (ichain->isop.op1->type == isvar || ichain->isop.op1->type == issvar) {
                    ichain->isop.op1->dtype = ichain->dtype;
                }

                if (ichain->isop.op2->type == isvar || ichain->isop.op2->type == issvar) {
                    ichain->isop.op2->dtype = ichain->dtype;
                }
                func_00426FA4(ichain->isop.op1, 0, NULL, 0, node);
                func_00426FA4(ichain->isop.op2, 0, NULL, 0, node);
                OPC = ichain->isop.opc;
                DTYPE = ichain->dtype;
                IONE = ichain->isop.size;
                uwrite(&u);
                return;
            }
            if (ichain->isop.opc == Uchkt) {
                if (ichain->isop.op1->type == isvar || ichain->isop.op1->type == issvar) {

                    ichain->isop.op1->dtype = ichain->dtype;
                }
                func_00426FA4(ichain->isop.op1, 0, NULL, 0, node);
                OPC = Uchkt;
                uwrite(&u);
                return;
            }
            if (bvectin(ichain->bitpos, &node->bvs.stage2.unk164) == 0) {
                if (arg1) {
                    noop = false;
                    return;
                }
                if (inreg(ichain, node, &reg, 1)) {
                    if (baseaddr != NULL) {
                        base_in_reg(reg, ichain, baseaddr);
                    }
                    genrop(Ulod, reg, ichain->isop.datatype, sizeoftyp(ichain->isop.datatype));
                    return;
                }
                spilltemplodstr(Ulod, ichain->isop.datatype, ichain->isop.temploc);
                return;
            }
            if (!arg1 && bvectin(ichain->bitpos, &node->bvs.stage2.unk154)) {
                if (bvectin(ichain->bitpos, &node->bvs.stage2.unk16C) == 0) {
                    if (inreg(ichain, node, &reg, 1)) {
                        if (baseaddr != NULL) {
                            base_in_reg(reg, ichain, baseaddr);
                        }
                        genrop(Ulod, reg, ichain->isop.datatype, sizeoftyp(ichain->isop.datatype));
                    } else {
                        spilltemplodstr(Ulod, ichain->isop.datatype, ichain->isop.temploc);
                    }
                } else {
                    func_00426DE8(ichain, node);
                }
                return;
            }

            if (bvectin(ichain->bitpos, &node->bvs.stage2.unk16C)) {
                func_00426DE8(ichain, node);
                goto written;
            }

            sp64 = NULL;
            if (optab[ichain->isop.opc].is_binary_op) {
                sp60 = NULL;

                if (ichain->isop.opc != Uiequ &&
                        ichain->isop.opc != Uigeq &&
                        ichain->isop.opc != Uigrt &&
                        ichain->isop.opc != Uileq &&
                        ichain->isop.opc != Uiles &&
                        ichain->isop.opc != Uineq &&
                        ichain->isop.opc != Uinn &&
                        ichain->isop.opc != Uixa) {
                    if (ichain->isop.op1->type == isvar || ichain->isop.op1->type == issvar) {
                        ichain->isop.op1->dtype = ichain->dtype;
                    }

                    if (ichain->isop.op2->type == isvar || ichain->isop.op2->type == issvar) {
                        ichain->isop.op2->dtype = ichain->dtype;
                    }

                    if (ichain->isop.opc == Uadd || ichain->isop.opc == Usub) {
                        if (ichain->isop.op1->dtype == Adt) {
                            sp64 = baseaddr;
                        }
                        if (ichain->isop.op2->dtype == Adt) {
                            sp60 = baseaddr;
                        }
                    }
                } else if (ichain->isop.opc == Uinn) {
                    if (ichain->isop.op1->type == isvar || ichain->isop.op1->type == issvar) {

                        ichain->isop.op1->dtype = ichain->dtype;
                    }

                    if (ichain->isop.op2->type == isvar || ichain->isop.op2->type == issvar) {

                        ichain->isop.op2->dtype = Sdt;
                    }
                } else if (ichain->isop.opc != Uixa) {
                    if (ichain->isop.op1->type == isvar || ichain->isop.op1->type == issvar) {
                        if (ichain->isop.op1->dtype != Adt && ichain->isop.op1->dtype != Hdt) {

                            ichain->isop.op1->dtype = Adt;
                        }
                    }

                    if (ichain->isop.op2->type == isvar || ichain->isop.op2->type == issvar) {
                        if (ichain->isop.op2->dtype != Adt && ichain->isop.op2->dtype != Hdt) {
                            ichain->isop.op2->dtype = Adt;
                        }
                    }
                } else {
                    if (ichain->isop.op1->type == isvar || ichain->isop.op1->type == issvar) {
                        if (ichain->isop.op1->dtype != Adt && ichain->isop.op1->dtype != Hdt) {

                            ichain->isop.op1->dtype = Adt;
                        }
                    }

                    if (ichain->isop.op2->type == isvar || ichain->isop.op2->type == issvar) {

                        ichain->isop.op2->dtype = ichain->dtype;
                    }
                    sp64 = baseaddr;
                }
                func_00426FA4(ichain->isop.op1, 0, sp64, 0, node);
                func_00426FA4(ichain->isop.op2, 0, sp60, 0, node);
            } else {
                if (ichain->isop.opc == Uilod ||
                        ichain->isop.opc == Uirld ||
                        ichain->isop.opc == Uildv ||
                        ichain->isop.opc == Uirlv) {
                    if (ichain->isop.op1->type == isvar || ichain->isop.op1->type == issvar) {
                        if (ichain->isop.op1->dtype != Adt && ichain->isop.op1->dtype != Hdt) {
                            ichain->isop.op1->dtype = Adt;
                        }
                    }
                } else if (ichain->isop.opc == Ucvt ||
                        ichain->isop.opc == Urnd ||
                        ichain->isop.opc == Utyp) {
                    if (ichain->isop.op1->type == isvar || ichain->isop.op1->type == issvar) {
                        ichain->isop.op1->dtype = ichain->isop.cvtfrom;
                    }
                } else {
                    if (ichain->isop.op1->type == isvar || ichain->isop.op1->type == issvar) {
                        ichain->isop.op1->dtype = ichain->dtype;
                    }
                }

                if (ichain->isop.opc == Uilod && ichain->isop.op1->type == islda && !inreg(ichain->isop.op1, node, &reg, 1)) {
                    OPC = Ulod;
                    DTYPE = ichain->dtype;
                    MTYPE = ichain->isop.op1->islda_isilda.address.memtype;
                    IONE = ichain->isop.op1->islda_isilda.address.blockno;
                    OFFSET = ichain->isop.op1->islda_isilda.offset + ichain->isop.size;
                    LEXLEV = 0;
                    LENGTH = ichain->isop.unk24_u16;
                    uwrite(&u);
                    goto written;
                }

                if (ichain->isop.opc == Uilod ||
                        ichain->isop.opc == Uirld ||
                        ichain->isop.opc == Uildv ||
                        ichain->isop.opc == Uirlv) {
                    func_00426FA4(ichain->isop.op1, 0, ichain->expr->data.isop.unk34, 0, node);
                } else {
                    func_00426FA4(ichain->isop.op1, 0, NULL, 0, node);
                }

                if (ichain->isop.opc == Ucg2) {
                    if (ichain->expr->data.isop.aux.unk38_trep->ichain2 != NULL) {
                        trep = ichain->expr->data.isop.aux.unk38_trep;
                    } else {
                        trep = ichain->expr->data.isop.aux2.unk3C_trep;
                    }

                    if (trep->unk2C != 1) {
                        constval.intval = trep->unk2C;
                        genloadnum(ichain->expr->datatype, 0, constval, 4, true);
                        OPC = Umpy;
                        DTYPE = ichain->expr->datatype;
                        uwrite(&u);
                    }

                    if (trep->unk28->type == islda || trep->unk28->isvar_issvar.location.addr != 0) {
                        uwrite(&trep->u);
                        OPC = Uadd;
                        DTYPE = trep->unk28->dtype;
                        uwrite(&u);
                    }

                    if (ichain->isop.op2 != NULL) {
                        func_00426FA4(ichain->isop.op2, 0, NULL, 0, node);
                        OPC = Uadd;
                        DTYPE = Adt;
                        uwrite(&u);
                    }
                    goto written;
                }
            }

            if (ichain->isop.opc == Uchkh ||
                    ichain->isop.opc == Uchkl ||
                    ichain->isop.opc == Ucvtl ||
                    ichain->isop.opc == Udec ||
                    ichain->isop.opc == Uinc ||
                    ichain->isop.opc == Uixa) {
                IONE = ichain->isop.size;
            } else if (ichain->isop.opc == Uildv ||
                    ichain->isop.opc == Uilod ||
                    ichain->isop.opc == Uirld ||
                    ichain->isop.opc == Uirlv) {
                IONE = ichain->isop.size;
                LENGTH = ichain->isop.unk24_u16;
                LEXLEV = ichain->isop.unk13;
                OFFSET = ichain->isop.s.mtagno;
            } else if (ichain->isop.opc == Ucvt ||
                    ichain->isop.opc == Urnd ||
                    ichain->isop.opc == Utyp) {
                DTYPE2 = ichain->isop.cvtfrom;
            } else if (ichain->isop.opc == Uiequ ||
                    ichain->isop.opc == Uigeq ||
                    ichain->isop.opc == Uigrt ||
                    ichain->isop.opc == Uileq ||
                    ichain->isop.opc == Uiles ||
                    ichain->isop.opc == Uineq) {
                LENGTH = ichain->isop.size;
                DTYPE = Mdt;
                IONE = ichain->isop.unk24_u16;
            } else if (ichain->isop.opc == Uadj) {
                OFFSET = ichain->isop.size;
                LENGTH = ichain->isop.unk24_u16;
            } else if (ichain->isop.opc == Udif ||
                    ichain->isop.opc == Uinn ||
                    ichain->isop.opc == Uint ||
                    ichain->isop.opc == Umus ||
                    ichain->isop.opc == Usgs ||
                    ichain->isop.opc == Uuni) {
                LENGTH = ichain->isop.size;
                if (ichain->isop.opc == Uinn) {
                    IONE = ichain->isop.unk24_u16;
                }
            }

#if 0
            if (ichain->isop.opc != Uequ &&
                    ichain->isop.opc != Ugeq &&
                    ichain->isop.opc != Ugrt &&
                    ichain->isop.opc != Uleq &&
                    ichain->isop.opc != Ules &&
                    ichain->isop.opc != Uneq) {}
#endif
            if (ichain->isop.opc != Uildv &&
                    ichain->isop.opc != Uilod &&
                    ichain->isop.opc != Uirld &&
                    ichain->isop.opc != Uirlv) {
                if (ichain->isop.overflow_attr  &&
                        (ichain->isop.opc == Uabs ||
                         ichain->isop.opc == Uadd ||
                         ichain->isop.opc == Ucvt ||
                         ichain->isop.opc == Ucvtl ||
                         ichain->isop.opc == Udec ||
                         ichain->isop.opc == Udiv ||
                         ichain->isop.opc == Uinc ||
                         ichain->isop.opc == Umod ||
                         ichain->isop.opc == Umpy ||
                         ichain->isop.opc == Uneg ||
                         ichain->isop.opc == Urem ||
                         ichain->isop.opc == Usqr ||
                         ichain->isop.opc == Usub)) {
                    LEXLEV = OVERFLOW_ATTR;
                } else {
                    LEXLEV = 0;
                }
            }

            if (ichain->isop.opc == Uildv) {
                OPC = Uilod;
                SET_VOLATILE_ATTR(LEXLEV);
            } else if (ichain->isop.opc == Uirlv) {
                OPC = Uirld;
                SET_VOLATILE_ATTR(LEXLEV);
            } else {
                OPC = ichain->isop.opc;
            }

            if (ichain->isop.opc != Uiequ &&
                    ichain->isop.opc != Uigeq &&
                    ichain->isop.opc != Uigrt &&
                    ichain->isop.opc != Uileq &&
                    ichain->isop.opc != Uiles &&
                    ichain->isop.opc != Uineq) {
                DTYPE = ichain->dtype;
            }
            uwrite(&u);

written:
            if (arg1) {
                if (arg3) {
                    OPC = Uswp;
                    DTYPE = Adt;
                    DTYPE2 = Adt;
                    uwrite(&u);
                    OPC = Usub;
                    DTYPE = Adt;
                    LEXLEV = 0;
                    uwrite(&u);
                    OPC = Uadd;
                    DTYPE = Adt;
                    LEXLEV = 0;
                    uwrite(&u);
                }

                if (ichain->isop.opc == Ucg2) {
                    if (ichain->expr->data.isop.aux.unk38_trep->ichain2 != NULL) {
                        trep = ichain->expr->data.isop.aux.unk38_trep;
                    } else {
                        trep = ichain->expr->data.isop.aux2.unk3C_trep;
                    }
                    sp5F = trep->ichain2->isop.datatype;
                } else {
                    sp5F = ichain->isop.datatype;
                }

                if (inreg(ichain, node, &reg, 0)) {
                    genrop(Ustr, reg, sp5F, sizeoftyp(sp5F));
                } else {
                    spilltemplodstr(Ustr, sp5F, ichain->isop.temploc);
                }

                if ((ichain->isop.opc != Uadj &&
                            ichain->isop.opc != Ucg2 &&
                            ichain->isop.opc != Ucvt &&
                            ichain->isop.opc != Uiequ &&
                            ichain->isop.opc != Uigeq &&
                            ichain->isop.opc != Uigrt &&
                            ichain->isop.opc != Uileq &&
                            ichain->isop.opc != Uiles &&
                            ichain->isop.opc != Uineq &&
                            ichain->isop.opc != Uinn &&
                            ichain->isop.opc != Urnd &&
                            ichain->isop.opc != Utyp &&
                            ichain->isop.opc != Uilod &&
                            ichain->isop.opc != Uildv &&
                            ichain->isop.opc != Uirld &&
                            ichain->isop.opc != Uirlv) &&
                        ichain->isop.unk24_cand != NULL &&
                        ichain->isop.unk24_cand != nota_candof &&
                        !arg3) {
                    func_00422D04(ichain->isop.unk24_cand->ichain_unk10, node);
                    if (ichain->isop.unk24_cand->unk8 * ichain->isop.unk24_cand->unk14 == -1) {
                        OPC = Uneg;
                        LEXLEV = 0;
                        DTYPE = sp5F;
                        uwrite(&u);
                    } else if (ichain->isop.unk24_cand->unk8 * ichain->isop.unk24_cand->unk14 != 1) {
                        constval.intval = ichain->isop.unk24_cand->unk8 * ichain->isop.unk24_cand->unk14;
                        genloadnum(sp5F, 0, constval, 4, true);
                        OPC = Umpy;
                        LEXLEV = 0;
                        DTYPE = sp5F;
                        uwrite(&u);
                    }

                    sp58 = bittab[ichain->isop.unk24_cand->unk18].ichain;
                    if (inreg(sp58, node, &reg, 0)) {
                        genrop(Ustr, reg, sp5F, sizeoftyp(sp5F));
                    } else {
                        DTYPE = sp5F;
                        MTYPE = Mmt;
                        IONE = curblk;
                        OFFSET = sp58->isop.temploc->disp;
                        if (!stack_reversed) {
                            if (highestmdef < -OFFSET) {
                                highestmdef = -OFFSET;
                            }
                        } else {
                            if (highestmdef < OFFSET) {
                                highestmdef = OFFSET;
                            }
                        }
                        LENGTH = sizeoftyp(DTYPE);
                        LEXLEV = 0;
                        OPC = Ustr;
                        uwrite(&u);
                    }
                }
            }
            break;

        case dumped:
        default:
            caseerror(1, 2362, "uoptemit.p", 10);
            break;
    }
}

/*
00428DD8 func_00428DD8
0042933C func_0042933C
0042AADC func_0042AADC
*/
static bool func_00428DD8(struct IChain *ichain, struct IChain *scm_ichain, struct Graphnode *node) {
    if (ichain == scm_ichain) {
        return true;
    }

    if (ichain->type != isop && scm_ichain->type != isop) {
        return scm_ichain->type == ichain->type &&
            (ichain->type == islda ||
             ichain->type == isconst ||
             ichain->type == isvar);
    }

    if (ichain->type == isop && scm_ichain->type == isop && ichain->isop.opc == scm_ichain->isop.opc) {
        if (ichain->isop.opc == Umpy) {
            if (ichain->isop.op1 == scm_ichain->isop.op1 &&
                    ((ichain->isop.op1->type == islda ||
                      ichain->isop.op1->type == isconst ||
                      ichain->isop.op1->type == isvar) ||
                     bvectin(ichain->isop.op1->bitpos, &node->bvs.stage2.unk164)) &&
                    func_00428DD8(ichain->isop.op2, scm_ichain->isop.op2, node)) {
                return true;
            } else if (scm_ichain->isop.op2 == ichain->isop.op2 &&
                    ((ichain->isop.op2->type == islda ||
                      ichain->isop.op2->type == isconst ||
                      ichain->isop.op2->type == isvar) ||
                     bvectin(ichain->isop.op2->bitpos, &node->bvs.stage2.unk164)) &&
                    func_00428DD8(ichain->isop.op1, scm_ichain->isop.op1, node)) {
                return true;
            } else {
                return false;
            }
        }

        if ((ichain->isop.opc == Udec || ichain->isop.opc == Uinc || ichain->isop.opc == Uneg) &&
                func_00428DD8(ichain->isop.op1, scm_ichain->isop.op1, node)) {
            return true;
        }

        if (((ichain->isop.opc == Uadd || ichain->isop.opc == Usub) ||
                    (ichain->isop.opc == Uixa && ichain->isop.size == scm_ichain->isop.size)) &&
                func_00428DD8(ichain->isop.op1, scm_ichain->isop.op1, node) &&
                func_00428DD8(ichain->isop.op2, scm_ichain->isop.op2, node)) {
            return true;
        }
    }

    if (scm_ichain->type == isop) {
        if ((scm_ichain->isop.opc == Udec || scm_ichain->isop.opc == Uinc) &&
                func_00428DD8(ichain, scm_ichain->isop.op1, node)) {
            return true;
        }

        if ((scm_ichain->isop.opc == Uadd || scm_ichain->isop.opc == Usub) &&
                func_00428DD8(ichain, scm_ichain->isop.op1, node) &&
                (scm_ichain->isop.op2->type == islda ||
                 scm_ichain->isop.op2->type == isconst ||
                 scm_ichain->isop.op2->type == isvar)) {
            return true;
        }

        if (scm_ichain->isop.opc == Uadd &&
                func_00428DD8(ichain, scm_ichain->isop.op2, node) &&
                (scm_ichain->isop.op1->type == islda ||
                 scm_ichain->isop.op1->type == isconst ||
                 scm_ichain->isop.op1->type == isvar)) {
            return true;
        }
    }

    if (ichain->type == isop) {
        if ((ichain->isop.opc == Udec || ichain->isop.opc == Uinc) &&
                func_00428DD8(ichain->isop.op1, scm_ichain, node)) {
            return true;
        }

        if ((ichain->isop.opc == Uadd || ichain->isop.opc == Usub) &&
                func_00428DD8(ichain->isop.op1, scm_ichain, node) &&
                (ichain->isop.op2->type == islda ||
                 ichain->isop.op2->type == isconst ||
                 ichain->isop.op2->type == isvar)) {
            return true;
        }

        if (ichain->isop.opc == Uadd &&
                func_00428DD8(ichain->isop.op2, scm_ichain, node) &&
                (ichain->isop.op1->type == islda ||
                 ichain->isop.op1->type == isconst ||
                 ichain->isop.op1->type == isvar)) {
            return true;
        }
    }

    return false;
}

/*
0042933C func_0042933C
0042AADC func_0042AADC
*/
static bool func_0042933C(struct IChain *ichain, struct IChain *scm_ichain, struct Graphnode *node) {
#ifndef AVOID_UB
    bool sp2B;
#endif
    bool sp2A;
    bool sp29;

    if (ichain == scm_ichain) {
        return false;
    }

    if (ichain->type != isop && scm_ichain->type != isop) {
        func_00426FA4(ichain, 0, NULL, 0, node);
        func_00426FA4(scm_ichain, 0, NULL, 0, node);
        OPC = Usub;
        LEXLEV = 0;
        DTYPE = Adt;
        uwrite(&u);
        return true;
    }

    if (ichain->type == isop && scm_ichain->type == isop && scm_ichain->isop.opc == ichain->isop.opc) {
        if (ichain->isop.opc == Umpy) {
            if (ichain->isop.op1 == scm_ichain->isop.op1) {
                if (func_0042933C(ichain->isop.op2, scm_ichain->isop.op2, node)) {
                    func_00426FA4(ichain->isop.op1, 0, NULL, 0, node);
                    OPC = Umpy;
                    LEXLEV = 0;
                    DTYPE = ichain->dtype;
                    uwrite(&u);
                    return true;
                }
                return false;
            }
            if (scm_ichain->isop.op2 == ichain->isop.op2) {
                if (func_0042933C(ichain->isop.op1, scm_ichain->isop.op1, node)) {
                    func_00426FA4(ichain->isop.op2, 0, NULL, 0, node);
                    OPC = Umpy;
                    LEXLEV = 0;
                    DTYPE = ichain->dtype;
                    uwrite(&u);
                    return true;
                }
                return false;
            }
            TRAP_IF(0 == 0);
        }

        if ((ichain->isop.opc == Udec || ichain->isop.opc == Uinc || ichain->isop.opc == Uneg) &&
                func_00428DD8(ichain->isop.op1, scm_ichain->isop.op1, node)) {
            sp29 = func_0042933C(ichain->isop.op1, scm_ichain->isop.op1, node);
            if (ichain->isop.opc == Uneg) {
                if (sp29) {
                    OPC = Uneg;
                    LEXLEV = 0;
                    DTYPE = ichain->dtype;
                    uwrite(&u);
                }
                return sp29;
            }
            if (scm_ichain->isop.size == ichain->isop.size) {
                return sp29;
            }
            if (sp29) {
                OPC = ichain->isop.opc;
                LEXLEV = 0;
                DTYPE = ichain->dtype;
                IONE = ichain->isop.size - scm_ichain->isop.size;
                uwrite(&u);
                return true;
            }
            OPC = Uldc;
            LENGTH = 4;
            DTYPE = Jdt;
            if (ichain->isop.opc == Uinc) {
                CONSTVAL.swpart.Ival = ichain->isop.size - scm_ichain->isop.size;
            } else {
                CONSTVAL.swpart.Ival = scm_ichain->isop.size - ichain->isop.size;
            }
            uwrite(&u);
            return true;
        }

        if ((ichain->isop.opc == Uadd || ichain->isop.opc == Usub) &&
                func_00428DD8(ichain->isop.op1, scm_ichain->isop.op1, node) &&
                func_00428DD8(ichain->isop.op2, scm_ichain->isop.op2, node)) {
            sp2A = func_0042933C(ichain->isop.op1, scm_ichain->isop.op1, node);
            sp29 = func_0042933C(ichain->isop.op2, scm_ichain->isop.op2, node);

            if (sp29 && ichain->isop.opc == Usub) {
                OPC = Uneg;
                LEXLEV = 0;
                DTYPE = ichain->dtype;
                uwrite(&u);
            }

            if (sp2A && sp29) {
                OPC = Uadd;
                DTYPE = ichain->dtype;
                LEXLEV = 0;
                uwrite(&u);
                return true;
            }
            return sp2A || sp29;
        }

        if (ichain->isop.opc == Uixa &&
                scm_ichain->isop.size == ichain->isop.size &&
                func_00428DD8(ichain->isop.op1, scm_ichain->isop.op1, node) &&
                func_00428DD8(ichain->isop.op2, scm_ichain->isop.op2, node)) {
            sp2A = func_0042933C(ichain->isop.op1, scm_ichain->isop.op1, node);
            sp29 = func_0042933C(ichain->isop.op2, scm_ichain->isop.op2, node);
            if (sp29) {
                if (ichain->isop.size != 1) {
                    OPC = Uldc;
                    LENGTH = 4;
                    DTYPE = Jdt;
                    CONSTVAL.swpart.Ival = ichain->isop.size;
                    uwrite(&u);
                    OPC = Umpy;
                    LEXLEV = 0;
                    DTYPE = Jdt;
                    uwrite(&u);
                }
            }

            if (sp2A && sp29) {
                OPC = 1;
                DTYPE = ichain->dtype;
                LEXLEV = 0;
                uwrite(&u);
                return true;
            }
            return sp2A || sp29;
        }
    }

    if (scm_ichain->type == isop) {
        if ((scm_ichain->isop.opc == Udec || scm_ichain->isop.opc == Uinc) &&
                func_00428DD8(ichain, scm_ichain->isop.op1, node)) {
            if (func_0042933C(ichain, scm_ichain->isop.op1, node)) {
                if (scm_ichain->isop.opc == Uinc) {
                    OPC = Udec;
                } else {
                    OPC = Uinc;
                }
                DTYPE = scm_ichain->dtype;
                LEXLEV = 0;
                IONE = scm_ichain->isop.size;
                uwrite(&u);
                return true;
            }
            OPC = Uldc;
            DTYPE = Jdt;
            LENGTH = 4;
            if (scm_ichain->isop.opc == Uinc) {
                CONSTVAL.swpart.Ival = -scm_ichain->isop.size;
            } else {
                CONSTVAL.swpart.Ival = scm_ichain->isop.size;
            }
            uwrite(&u);
            return true;
        }

        if ((scm_ichain->isop.opc == Uadd || scm_ichain->isop.opc == Usub) &&
                func_00428DD8(ichain, scm_ichain->isop.op1, node) &&
                (scm_ichain->isop.op2->type == islda ||
                 scm_ichain->isop.op2->type == isconst ||
                 scm_ichain->isop.op2->type == isvar)) {

            sp2A = func_0042933C(ichain, scm_ichain->isop.op1, node);
            func_00426FA4(scm_ichain->isop.op2, 0, NULL, 0, node);
            if (sp2A) {
                if (scm_ichain->isop.opc == Uadd) {
                    OPC = Usub;
                } else {
                    OPC = Uadd;
                }

                LEXLEV = 0;
                DTYPE = scm_ichain->dtype;
                uwrite(&u);
                return true;
            }

            if (scm_ichain->isop.opc == Uadd) {
                OPC = Uneg;
                LEXLEV = 0;
                DTYPE = Jdt;
                uwrite(&u);
            }
            return true;
        }

        if (scm_ichain->isop.opc == Uadd &&
                func_00428DD8(ichain, scm_ichain->isop.op2, node) &&
                (scm_ichain->isop.op1->type == islda ||
                 scm_ichain->isop.op1->type == isconst ||
                 scm_ichain->isop.op1->type == isvar)) {
            sp2A = func_0042933C(ichain, scm_ichain->isop.op2, node);
            func_00426FA4(scm_ichain->isop.op1, 0, NULL, 0, node);
            OPC = Uneg;
            LEXLEV = 0;
            DTYPE = Jdt;
            uwrite(&u);
            if (sp2A) {
                OPC = Uadd;
                DTYPE = scm_ichain->dtype;
                LEXLEV = 0;
                uwrite(&u);
            }
            return true;
        }
    }

    if (ichain->type == isop) {
        if ((ichain->isop.opc == Udec || ichain->isop.opc == Uinc) &&
                func_00428DD8(ichain->isop.op1, scm_ichain, node)) {
            if (func_0042933C(ichain->isop.op1, scm_ichain, node)) {
                LEXLEV = 0;
                DTYPE = ichain->dtype;
                OPC = ichain->isop.opc;
                IONE = ichain->isop.size;
                uwrite(&u);
                return true;
            }
            OPC = Uldc;
            DTYPE = Jdt;
            LENGTH = 4;
            if (ichain->isop.opc == Uinc) {
                CONSTVAL.swpart.Ival = ichain->isop.size;
            } else {
                CONSTVAL.swpart.Ival = -ichain->isop.size;
            }
            uwrite(&u);
            return true;
        }

        if ((ichain->isop.opc == Uadd || ichain->isop.opc == Usub) &&
                func_00428DD8(ichain->isop.op1, scm_ichain, node) &&
                (ichain->isop.op2->type == islda ||
                 ichain->isop.op2->type == isconst ||
                 ichain->isop.op2->type == isvar)) {
            sp2A = func_0042933C(ichain->isop.op1, scm_ichain, node);
            func_00426FA4(ichain->isop.op2, 0, NULL, 0, node);

            if (sp2A) {
                LEXLEV = 0;
                OPC = ichain->isop.opc;
                DTYPE = scm_ichain->dtype;
                uwrite(&u);
                return true;
            }

            if (scm_ichain->isop.opc == Usub) {
                OPC = Uneg;
                LEXLEV = 0;
                DTYPE = Jdt;
                uwrite(&u);
            }
            return true;
        }

        if (ichain->isop.opc == Uadd &&
                func_00428DD8(ichain->isop.op2, scm_ichain, node) &&
                (ichain->isop.op1->type == islda ||
                 ichain->isop.op1->type == isconst ||
                 ichain->isop.op1->type == isvar)) {
            func_00426FA4(ichain->isop.op1, 0, NULL, 0, node);
            if (func_0042933C(ichain->isop.op2, scm_ichain, node)) {
                OPC = Uadd;
                LEXLEV = 0;
                DTYPE = ichain->dtype;
                uwrite(&u);
            }
            return true;
        }
    }

#ifdef AVOID_UB
    return false;
#else
    return sp2B;
#endif
}

/*
0042BF08 reemit
*/
static void func_0042A1C8(struct Graphnode *node) {
    int align;
    RegisterColor reg;

    OPC = Urlod;
    DTYPE = Ldt;
    MTYPE = Mmt;
    IONE = curblk;
    LENGTH = int_reg_size;

    align = tempdisp % int_reg_size;
    if ((align ^ int_reg_size) < 0) {
        align += int_reg_size;
    }
    if (align != 0) {
        tempdisp = (tempdisp + int_reg_size) - align;
    }

    for (reg = firsteereg[0]; reg <= lasteereg[0]; reg++) {
        if (SET32_IN(node->bvs.stage3.lodinsertout, reg - 13)) {
            if (eereg_saved_locs[reg - 13 - 1] == 0) {
                if (stack_reversed == 0) {
                    tempdisp += int_reg_size;
                    eereg_saved_locs[reg - 13 - 1] = -tempdisp;
                } else {
                    eereg_saved_locs[reg - 13 - 1] = tempdisp;
                    tempdisp += int_reg_size;
                }
                highestmdef = tempdisp;
            }
            OFFSET = eereg_saved_locs[reg - 13 - 1];
            LEXLEV = coloroffset(reg);
            uwrite(&u);
        }
    }

    LENGTH = 8;
    DTYPE = Qdt;
    if ((tempdisp & 7) != 0) {
        tempdisp = (tempdisp - (tempdisp & 7)) + 8;
    }

    for (reg = firsteereg[1]; reg <= lasteereg[1]; reg++) {
        if (SET32_IN(node->bvs.stage3.lodinsertout, reg - 13)) {
            if (eereg_saved_locs[reg - 13 - 1] == 0) {
                if (stack_reversed == 0) {
                    tempdisp += 8;
                    eereg_saved_locs[reg - 13 - 1] = -tempdisp;
                } else {
                    eereg_saved_locs[reg - 13 - 1] = tempdisp;
                    tempdisp += 8;
                }
                highestmdef = tempdisp;
            }
            OFFSET = eereg_saved_locs[reg - 13 - 1];
            LEXLEV = coloroffset(reg);
            uwrite(&u);
        }
    }
}

/*
0042B1A8 func_0042B1A8
*/
static void func_0042A4CC(struct Graphnode *node) {
    RegisterColor reg;
    int align;

    OPC = Urstr;
    DTYPE = Ldt;
    MTYPE = Mmt;
    IONE = curblk;
    LENGTH = int_reg_size;
    align = tempdisp % int_reg_size;
    if ((align ^ int_reg_size) < 0) {
        align += int_reg_size;
    }
    if (align != 0) {
        tempdisp = tempdisp + int_reg_size - align;
    }

    for (reg = firsteereg[0]; reg <= lasteereg[0]; reg++) {
        if (SET32_IN(node->bvs.stage3.strinsertin, reg - 13)) {
            if (eereg_saved_locs[reg - 13 - 1] == 0) {
                if (!stack_reversed) {
                    tempdisp += int_reg_size;
                    eereg_saved_locs[reg - 13 - 1] = -tempdisp;
                } else {
                    eereg_saved_locs[reg - 13 - 1] = tempdisp;
                    tempdisp += int_reg_size;
                }
                highestmdef = tempdisp;
            }
            OFFSET = eereg_saved_locs[reg - 13 - 1];
            LEXLEV = coloroffset(reg);
            uwrite(&u);
        }
    }

    LENGTH = 8;
    DTYPE = Qdt;
    if ((tempdisp & 7) != 0) {
        tempdisp = (tempdisp - (tempdisp & 7)) + 8;
    }

    for (reg = firsteereg[1]; reg <= lasteereg[1]; reg++) {
        if (SET32_IN(node->bvs.stage3.strinsertin, reg - 13)) {
            if (eereg_saved_locs[reg - 13 - 1] == 0) {
                if (!stack_reversed) {
                    tempdisp += 8;
                    eereg_saved_locs[reg - 13 - 1] = -tempdisp;
                } else {
                    eereg_saved_locs[reg - 13 - 1] = tempdisp;
                    tempdisp += 8;
                }
                highestmdef = tempdisp;
            }

            OFFSET = eereg_saved_locs[reg - 13 - 1];
            LEXLEV = coloroffset(reg);
            uwrite(&u);
        }
    }
}

/*
0042BF08 reemit
*/
static void func_0042A7D0(void) {
    int align;
    RegisterColor reg;

    OPC = Urstr;
    DTYPE = Ldt;
    MTYPE = Mmt;
    IONE = curblk;

    LENGTH = int_reg_size;
    align = tempdisp % int_reg_size;
    if ((align ^ int_reg_size) < 0) {
        align = align + int_reg_size;
    }
    if (align != 0) {
        tempdisp = (tempdisp + int_reg_size) - align;
    }

    for (reg = firsteereg[0]; reg <= highesteereg[0]; reg++) {
        if (!SET32_IN(ugen_saved_eeregs, reg - 13)) {
            if (eereg_saved_locs[reg - 13 - 1] == 0) {
                if (!stack_reversed) {
                    tempdisp += int_reg_size;
                    eereg_saved_locs[reg - 13 - 1] = -tempdisp;
                } else {
                    eereg_saved_locs[reg - 13 - 1] = tempdisp;
                    tempdisp += int_reg_size;
                }
                highestmdef = tempdisp;
            }
            OFFSET = eereg_saved_locs[reg - 13 - 1];
            LEXLEV = coloroffset(reg);
            uwrite(&u);
        }
    }

    LENGTH = 8;
    DTYPE = Qdt;
    if ((tempdisp & 7) != 0) {
        tempdisp = (tempdisp - (tempdisp & 7)) + 8;
    }

    for (reg = firsteereg[1]; reg <= highesteereg[1]; reg++) {
        if (!SET32_IN(ugen_saved_eeregs, reg - 13)) {
            if (eereg_saved_locs[reg - 13 - 1] == 0) {
                if (stack_reversed == 0) {
                    tempdisp += 8;
                    eereg_saved_locs[reg - 13 - 1] = -tempdisp;
                } else {
                    eereg_saved_locs[reg - 13 - 1] = tempdisp;
                    tempdisp += 8;
                }
                highestmdef = tempdisp;
            }
            OFFSET = eereg_saved_locs[reg - 13 - 1];
            LEXLEV = coloroffset(reg);
            uwrite(&u);
        }
    }
}

/*
0042BF08 reemit
*/
static void func_0042AADC(struct Graphnode *node) {
    int inner_loopno; // sp64
    int reg; // sp5C
    int block; // sp4C
    int i;
    unsigned int bit;
    struct IChain *ichain;
    struct ScmThing *scm;
    unsigned char scm_unk11;
    bool found_scm;

    found_scm = false;
    if (mipsflag == 3) {
        if (node->successors != NULL && node->successors->next == NULL) {
            if (node->loop != node->successors->graphnode->loop &&
                    node->successors->graphnode->loop != NULL &&
                    node->loop == node->successors->graphnode->loop->outer) {
                inner_loopno = node->successors->graphnode->loop->loopno;
                if (looptab[inner_loopno].unk9 != 0) {
                    scm = looptab[inner_loopno].unk4;
                    while (!found_scm && scm != NULL) {
                        found_scm = scm->unk10 == 3 || scm->unk10 == 1;
                        scm = scm->next;
                    }
                }
            }
        }
    }

    i = 0;
    block = 0;
    while (i < firstconstbit) {
        if (BVBLOCKEMPTY(node->bvs.stage2.unk164, block)) {
            i += 0x80;
        } else {
            bit = 0;
            while (i < firstconstbit && bit < 0x80) {

                if (BVINBLOCK(bit, block, node->bvs.stage2.unk164) &&
                        (bvectin(i, &node->bvs.stage2.unk154) || bvectin(i, &storeop) || bvectin(i, &trapop)) &&
                        (!found_scm || !check_ix_candidate(bittab[i].ichain, inner_loopno))) {
                    func_00426FA4(bittab[i].ichain, 1, 0, 0, node);
                }
                i++;
                bit++;
            }
        }
        block++;
    }

    if (!found_scm) {
        return;
    }

    i = 0;
    block = 0;
    while (i < firstconstbit) {
        if (BVBLOCKEMPTY(node->bvs.stage2.unk164, block)) {
            i += 0x80;
        } else {
            bit = 0;
            while (i < firstconstbit && bit < 0x80) {

                if (BVINBLOCK(bit, block, node->bvs.stage2.unk164) &&
                        (bvectin(i, &node->bvs.stage2.unk154) || bvectin(i, &storeop) || bvectin(i, &trapop))) {
                    ichain = bittab[i].ichain;
                    scm_unk11 = check_ix_candidate(ichain, inner_loopno); // not sure if bool

                    if (scm_unk11 != 0) {
                        scm = looptab[inner_loopno].unk4;
                        while (scm->ichain != ichain) {
                                scm = scm->next;
                        }

                        OPC = Uldc;
                        DTYPE = Jdt;
                        LENGTH = 4;
                        CONSTVAL.swpart.Ival = scm->unk10;
                        uwrite(&u);
                        scm = get_ix_source(scm_unk11, inner_loopno);
                        if (func_00428DD8(ichain, scm->ichain, node)) {
                            TRAP_IF(func_0042933C(ichain, scm->ichain, node) == 0);
                            OPC = Uadd;
                            DTYPE = Adt;
                            LEXLEV = 0;
                            uwrite(&u);
                            if (inreg(ichain, node, &reg, 0)) {
                                genrop(Ustr, reg, Jdt, 4);
                            } else {
                                spilltemplodstr(Ustr, Jdt, ichain->isop.temploc);
                            }
                        } else {
                            func_00426FA4(scm->ichain, 0, 0, 0, node);
                            func_00426FA4(ichain, 1, 0, 1, node);
                        }
                    }
                }
                i++;
                bit++;
            }
        }
        block++;
    }
}

/*
0042BF08 reemit
*/
static void func_0042B09C(struct Graphnode *node) {
    int reg;

    for (reg = 1; reg <= 35; reg++) {
        if (node->regdata.unk44[reg - 1] != NULL && BITARR_GET(node->unkD5, reg - 1)) {
            genrlodrstr(Urstr, reg, node->regdata.unk44[reg - 1]);
        }
    }
}

/*
0042BF08 reemit
*/
static void func_0042B144(struct Graphnode *node) {
    struct RegisterNode *rlod;

    for (rlod = node->unkE4; rlod != NULL; rlod = rlod->next) {
        genrlodrstr(Urlod, rlod->reg, rlod->ichain);
    }
}

/*
0042BF08 reemit
*/
static void func_0042B1A8(struct Graphnode *node) {
    struct RegisterNode *str;
    RegisterColor reg;

    for (str = node->unkE0; str != NULL; str = str->next) {
        genrlodrstr(Urstr, str->reg, str->ichain);
    }

    if (do_opt_saved_regs && !SET32_EMPTY(node->bvs.stage3.strinsertin)) {
        func_0042A4CC(node);
    }

    for (reg = 1; reg <= 35; reg++) {
        if (node->regdata.unk44[reg - 1] != NULL && BITARR_GET(node->unkD0, reg - 1)) {
            genrlodrstr(Urlod, reg, node->regdata.unk44[reg - 1]);
        }
    }
}

/*
0042B890 func_0042B890
*/
static void func_0042B2C0(struct ExpSourceThing *src, Datatype dtype, struct Graphnode *node) {
    int reg;                 // sp60
    union Constant constval; // sp58
    struct IChain *ichain;   // sp54

    if (inreg(src->ichain, node, &reg, 1)) {
        genrop(Ulod, reg, dtype, sizeoftyp(dtype));
    } else {
        OPC = Uvreg;
        DTYPE = dtype;
        MTYPE = Mmt;
        IONE = curblk;
        if (src->ichain->type == issvar) { // was isvar_issvar separate after all? :/
            OFFSET = src->ichain->isvar_issvar.temploc->disp;
        } else {
            OFFSET = src->ichain->isvar_issvar.temploc->disp;
        }
        LENGTH = sizeoftyp(DTYPE);
        LEXLEV = 0;
        if (dogenvreg) {
            uwrite(&u);
        }
        OPC = Ulod;
        uwrite(&u);
        if (!stack_reversed) {
            if (highestmdef < -OFFSET) {
                highestmdef = -OFFSET;
            }
        } else {
            if (highestmdef < OFFSET) {
                highestmdef = OFFSET;
            }
        }
    }

    if (src->unkC != 0) {

        if (dtype == Idt || dtype == Kdt || dtype == Wdt) {
            constval.longval = (long long) src->unk8 * (long long) src->unkC;
        } else {
            constval.intval = src->unk8 * src->unkC;
        }
        genloadnum(dtype, 0, constval, sizeoftyp(dtype), 1);
    }

    if (src->ichain_unk10 != 0) {
        if (src->ichain->isop.unk24_cand == NULL || src->ichain->isop.unk24_cand == nota_candof || node->unkBb8) {
            func_00422D04(src->ichain_unk10, node);
            if (src->unk8 * src->unk14 == -1) {
                OPC = Uneg;
                LEXLEV = 0;
                DTYPE = dtype;
                uwrite(&u);
            } else if (src->unk8 * src->unk14 != 1) {
                if (dtype == Idt || dtype == Kdt || dtype == Wdt) {
                    constval.longval = (long long) src->unk8 * (long long) src->unk14;
                } else {
                    constval.intval = src->unk8 * src->unk14;
                }
                genloadnum(dtype, 0,  constval, sizeoftyp(dtype), 1);
                OPC = Umpy;
                LEXLEV = 0;
                DTYPE = dtype;
                uwrite(&u);
            }
        } else {
            ichain = bittab[src->unk18].ichain;
            if (inreg(ichain, node, &reg, 1)) {
                genrop(Ulod, reg, dtype, 4);
            } else {
                OPC = Uvreg;
                DTYPE = dtype;
                MTYPE = Mmt;
                IONE = curblk;
                OFFSET = ichain->isop.temploc->disp;
                if (!stack_reversed) {
                    if (highestmdef < -OFFSET) {
                        highestmdef = -OFFSET;
                    }
                } else {
                    if (highestmdef < OFFSET) {
                        highestmdef = OFFSET;
                    }
                }
                LENGTH = sizeoftyp(DTYPE);
                LEXLEV = 0;
                if (dogenvreg) {
                    uwrite(&u);
                }
                OPC = Ulod;
                uwrite(&u);
            }
        }
    }

    if (src->unkC != 0 && src->ichain_unk10 != NULL) {
        OPC = Uadd;
        LEXLEV = 0;
        DTYPE = dtype;
        uwrite(&u);
    }
    OPC = Uadd;
    LEXLEV = 0;
    DTYPE = dtype;
    uwrite(&u);
}

/*
0042BF08 reemit
*/
static void func_0042B890(struct Statement *stat, struct Graphnode *node) {
    //void *sp64;                        v0-4
    struct ExpSourceThing *src; // sp60, v0-8
    Datatype dtype;             // sp5F, v0-9
    int reg;                    // sp58
    struct IChain *ichain;
    bool checking_ix;

    checking_ix = has_ix && looptab[loopno].unk9 && looptab[loopno].unk4 != NULL;


    for (src = stat->u.store.u.str.unk2C; src != NULL; src = src->next) {
        if (checking_ix && check_ix_candidate(src->ichain, loopno)) {
            continue;
        }

        ichain = src->ichain;
        if (ichain->isop.opc == Uixa) {
            dtype = ichain->isop.datatype;
        } else {
            dtype = ichain->dtype;
        }

        func_0042B2C0(src, dtype, node);
        if (inreg(src->ichain, node, &reg, 0)) {
            genrop(Ustr, reg, dtype, sizeoftyp(dtype));
        } else {
            OPC = Uvreg;
            DTYPE = dtype;
            MTYPE = Mmt;
            IONE = curblk;
            if (ichain->type == issvar) {
                OFFSET = ichain->isvar_issvar.temploc->disp;
            } else {
                OFFSET = ichain->isop.temploc->disp;
            }
            LENGTH = sizeoftyp(dtype);
            LEXLEV = 0;
            if (dogenvreg) {
                uwrite(&u);
            }

            OPC = Ustr;
            uwrite(&u);
            if (!stack_reversed) {
                if (highestmdef < -OFFSET) {
                    highestmdef = -OFFSET;
                }
            } else {
                if (highestmdef < OFFSET) {
                    highestmdef = OFFSET;
                }
            }
        }
    }
}

/*
0042BF08 reemit
*/
static void func_0042BB4C(struct Statement *stat, struct Graphnode *node) {
    int reg;
    struct RecurThing *recur;
    bool usingReg;

    for (recur = stat->u.store.u.str.unk30; recur != NULL; recur = recur->next) {
        usingReg = inreg(recur->ichain, node, &reg, 0);
        if (usingReg || recur->ichain->isvar_issvar.temploc != NULL) {
            func_00424FFC(recur->expr, NULL, node);
            func_004230F0(recur->expr, 3, NULL, 0, node);
            if (usingReg) {
                genrop(Ustr, reg, recur->ichain->dtype, sizeoftyp(recur->ichain->dtype));
            } else {
                OPC = Uvreg;
                DTYPE = recur->ichain->dtype;
                MTYPE = Mmt;
                IONE = curblk;
                OFFSET = recur->ichain->isvar_issvar.temploc->disp;
                LENGTH = sizeoftyp(recur->ichain->dtype);
                LEXLEV = 0;
                if (dogenvreg) {
                    uwrite(&u);
                }

                OPC = Ustr;
                uwrite(&u);
                if (!stack_reversed) {
                    if (highestmdef < -OFFSET) {
                        highestmdef = -OFFSET;
                    }
                } else {
                    if (highestmdef < OFFSET) {
                        highestmdef = OFFSET;
                    }
                }
            }
        }
    }
}

/*
0042BF08 reemit
*/
static void func_0042BD94(unsigned int frequency) {
    int i = 20; // start at the end of the Ucomm string

    do {
        i--;
        ustrptr[i] = (frequency - ((frequency / 10) * 10)) + '0';
        frequency /= 10;
    } while (frequency != 0);

    while (i > 10) {
        i--;
        ustrptr[i] = ' ';
    }
}

/*
0042BE58 func_0042BE58
0042BF08 reemit
*/
static bool func_0042BE58(struct Loop *loop) {
    struct ScmThing *scm;

    if (loop == NULL) {
        return false;
    }

    if (looptab[loop->loopno].unk9) {
        scm = looptab[loop->loopno].unk4;
        while (scm != NULL) {
            if (scm->unk10 == 1) {
                return true;
            }

            scm = scm->next;
        }
    }

    return func_0042BE58(loop->outer);
}

/*
00456A2C oneproc
*/
void reemit() {
    struct Graphnode *node; // sp9C, v0 - 0xc
    bool sp97;
    bool stackDefined; // sp95
    int reg;
    bool sp8B;
    bool sp8A;
    struct Temploc *sp84;
    struct Statement *stat;
    bool lda;

    bool old_useix;
    int i;
    int length;
    struct Statement *target_ujp;

    stackDefined = false;
    memset(eereg_saved_locs, 0, sizeof(eereg_saved_locs));

    reset(&strp, " ", 0, 0);
    strpdisplace = 0;

    prolog();

    stat = graphhead->stat_head;
    has_ix = false;
    node = graphhead;
    curlocpg = 0;
    curlocln = 0;
    numcalls = 0;
    findbbtemps(graphhead);
    memset(baseregexpr, 0, sizeof(baseregexpr));

    memset(gpunaltab, 0, sizeof(gpunaltab));
    memset(spunaltab, 0, sizeof(spunaltab));
    memset(unaltab, 0, sizeof(unaltab));

    if (stat->opc != Ulab) {
        func_0042B1A8(node);
    }

    sp97 = false;
    while (stat != NULL) {
        if (stat->opc == Uret || stat->opc == Uujp) {
            sp97 = true;
            func_0042AADC(node);
            func_0042B09C(node);
            if (do_opt_saved_regs && !SET32_EMPTY(node->bvs.stage3.lodinsertout)) {
                func_0042A1C8(node);
            }
            func_0042B144(node);
        }

        switch (stat->opc) {
            case Uirst:
            case Uirsv:
                if (stat->u.store.expr->type == isvar || stat->u.store.expr->type == issvar) {
                    stat->u.store.expr->datatype = stat->u.store.u.istr.dtype;
                }
                func_00424FFC(stat->expr, stat->u.store.baseaddr, node);
                func_00424FFC(stat->u.store.expr, NULL, node);
                func_004230F0(stat->expr, 3, stat->u.store.baseaddr, has_ix && (stat->u.store.u.istr.dtype == Qdt || stat->u.store.u.istr.dtype == Rdt), node);
                use_ix = false;
                func_004230F0(stat->u.store.expr, 3, NULL, false, node);
                OPC = Uirst;
                DTYPE = stat->u.store.u.istr.dtype;
                IONE = stat->u.store.u.istr.offset;
                LENGTH = stat->u.store.size;
                LEXLEV = stat->u.store.u.istr.align;
                OFFSET = stat->u.store.u.istr.mtagno;
                if (stat->opc == Uistv) { //! Uistv used instead of Uirsv
                    SET_VOLATILE_ATTR(LEXLEV);
                }
                uwrite(&u);
                break;

            case Uistr:
            case Uistv:
                if (stat->u.store.expr->type == isvar || stat->u.store.expr->type == issvar) {
                    stat->u.store.expr->datatype = stat->u.store.u.istr.dtype;
                }

                if (stat->expr == NULL) {
                    lda = false;
                } else {
                    lda = stat->expr->type == islda &&
                        stat->opc == Uistr &&
                        !inreg(stat->expr->ichain, node, &reg, 1);
                }

                if (lda) {
                    func_00424FFC(stat->u.store.expr, NULL, node);
                    func_004230F0(stat->u.store.expr, 3, NULL, false, node);
                    OPC = Ustr;
                    DTYPE = stat->u.store.u.istr.dtype;
                    MTYPE = stat->expr->data.islda_isilda.address.memtype;
                    LEXLEV = 0;
                    IONE = stat->expr->data.islda_isilda.address.blockno;
                    OFFSET = stat->expr->data.islda_isilda.offset + stat->u.store.u.istr.offset;
                    LENGTH = stat->u.store.size;
                    uwrite(&u);
                } else {
                    func_00424FFC(stat->expr, stat->u.store.baseaddr, node);
                    func_00424FFC(stat->u.store.expr, NULL, node);
                    func_004230F0(stat->expr, 3, stat->u.store.baseaddr, has_ix && (stat->u.store.u.istr.dtype == Qdt || stat->u.store.u.istr.dtype == Rdt), node);
                    old_useix = use_ix;
                    use_ix = false;
                    func_004230F0(stat->u.store.expr, 3, NULL, false, node);

                    if (old_useix) {
                        OPC = Uisti;
                    } else {
                        OPC = Uistr;
                    }

                    DTYPE = stat->u.store.u.istr.dtype;
                    IONE = stat->u.store.u.istr.offset;
                    LENGTH = stat->u.store.size;
                    LEXLEV = stat->u.store.u.istr.align;
                    OFFSET = stat->u.store.u.istr.mtagno;
                    if (stat->opc == Uistv) {
                        SET_VOLATILE_ATTR(LEXLEV);
                    }
                    uwrite(&u);
                }
                break;

            case Umov:
            case Umovv:
                if (stat->expr->type == isvar || stat->expr->type == issvar) {
                    if (stat->expr->datatype != Adt && stat->expr->datatype != Hdt) {
                        stat->expr->datatype = Adt;
                    }
                }

                if (stat->u.store.expr->type == isvar || stat->u.store.expr->type == issvar) {
                    if (stat->u.store.expr->datatype != Adt && stat->u.store.expr->datatype != Hdt) {
                        stat->u.store.expr->datatype = Adt;
                    }
                }

                func_00424FFC(stat->expr, stat->u.store.baseaddr, node);
                func_00424FFC(stat->u.store.expr, stat->u.store.u.mov.baseaddr, node);
                func_004230F0(stat->expr, 3, stat->u.store.baseaddr, false, node);
                func_004230F0(stat->u.store.expr, 3, stat->u.store.u.mov.baseaddr, false, node);
                OPC = Umov;
                DTYPE = Mdt;
                LENGTH = stat->u.store.size;
                IONE = stat->u.store.u.mov.src_align;
                LEXLEV = stat->u.store.u.mov.dst_align;
                if (stat->opc == Umovv) {
                    SET_VOLATILE_ATTR(LEXLEV);
                }
                uwrite(&u);
                break;

            case Utpeq:
            case Utpge:
            case Utpgt:
            case Utple:
            case Utplt:
            case Utpne:
                if (stat->expr->type == isvar || stat->expr->type == issvar) {
                    stat->expr->datatype = stat->u.trap.dtype;
                }

                if (stat->u.trap.expr2->type == isvar || stat->u.trap.expr2->type == issvar) {
                    stat->u.trap.expr2->datatype = stat->u.trap.dtype;
                }

                func_00424FFC(stat->expr, NULL, node);
                func_00424FFC(stat->u.trap.expr2, NULL, node);
                func_004230F0(stat->expr, 3, NULL, false, node);
                func_004230F0(stat->u.trap.expr2, 3, NULL, false, node);
                OPC = stat->opc;
                DTYPE = stat->u.trap.dtype;
                IONE = stat->u.trap.num;
                uwrite(&u);
                break;

            case Ustsp:
                func_00424FFC(stat->expr, NULL, node);
                func_004230F0(stat->expr, 0, NULL, false, node);
                OPC = Ustsp;
                uwrite(&u);
                break;

            case Uisst:
            case Ustr:
                if (!stat->outpar) {
                    if (stat->expr->data.isvar_issvar.assigned_value != NULL && stat->expr->data.isvar_issvar.assigned_value->type != isop) {
                        stat->expr->data.isvar_issvar.assigned_value->ichain->dtype = stat->expr->data.isvar_issvar.assigned_value->datatype;
                    }

                    if (stat->unk2 != 1) {
                        if (stat->opc == Uisst) {
                            func_00424FFC(stat->u.store.expr, NULL, node);
                        }
                        func_00424FFC(stat->expr->data.isvar_issvar.assigned_value, NULL, node);
                        if (stat->opc == Uisst) {
                            func_004230F0(stat->u.store.expr, 0, NULL, false, node);
                        }
                        func_004230F0(stat->expr->data.isvar_issvar.assigned_value, 3, NULL, false, node);

                        stat->expr->ichain->dtype = stat->expr->datatype;
                        stat->expr->ichain->isvar_issvar.size = stat->expr->data.isvar_issvar.size;
                        if (stat->opc == Ustr) {
                            if (varlodstr(Ustr, stat->expr->ichain, node, NULL)) {
                                igen3(Ustr, stat->expr->ichain, stat->expr->data.isop.datatype);
                            }
                        } else {
                            igen3(Uisst, stat->expr->ichain, stat->expr->data.isop.datatype);
                        }

                        if (stat->is_increment) {
                            func_0042B890(stat, node);
                            func_0042BB4C(stat, node);
                        }
                    } else if (stat->is_increment) {
                        func_0042B890(stat, node);
                        func_0042BB4C(stat, node);
                    }
                }
                break;

            case Upar:
                if (stat->expr->type != isop) {
                    stat->expr->ichain->dtype = stat->expr->datatype;
                }

                func_00424FFC(stat->expr, NULL, node);
                if (!curmst->u.mst.proc->o3opt) {
                    if (stat->u.par.index <= 4) {
                        sp8A = false;
                        sp8B = false;
                        if (stat->u.par.loc < curmst->u.mst.fp_offset) {
                            reg = firstparmreg[1] + stat->u.par.index;
                        } else {
                            reg = firstparmreg[0] + stat->u.par.index;
                        }

                        // 1-indexed fun courtesy of pascal
                        reg -= 1;
                        if (node->regdata.unk44[reg - 1] == 0) {
                            func_004230F0(stat->expr, 3, NULL, false, node);

                            if (!mips3_64data && (stat->u.par.dtype == Idt || stat->u.par.dtype == Kdt)) {
                                sp8A = true;
                            } else {
                                genrop(Ustr, reg, stat->u.par.dtype, stat->u.par.size);
                            }
                        }
                    } else {
                        func_004230F0(stat->expr, 3, NULL, false, node);
                        sp8B = true;
                    }
                } else if (stat->u.par.reg != 0) {
                    reg = stat->u.par.reg;
                    sp8A = false;
                    sp8B = false;
                    if (node->regdata.unk44[reg - 1] == 0) {
                        func_004230F0(stat->expr, 3, NULL, false, node);
                        if (stat->u.par.dtype == Qdt && stat->u.par.reg < 24) {
                            OPC = Ucvt;
                            DTYPE2 = Qdt;
                            DTYPE = Jdt;
                            LEXLEV = 0;
                            uwrite(&u);
                            stat->u.par.dtype = Jdt;
                            writeln(err.c_file);
                            write_string(err.c_file, "uopt: Warning: ", 15, 15);
                            write_string(err.c_file, entnam0, 1024, entnam0len);
                            write_string(err.c_file, " line ", 6, 6);
                            write_integer(err.c_file, curlocln, 0, 10);
                            write_string(err.c_file, ": double float parameter passed for integer;", 44, 44);
                            writeln(err.c_file);
                            fflush(err.c_file);
                        } else {
                            if ((stat->u.par.dtype != Qdt && stat->u.par.dtype != Rdt) && stat->u.par.reg >= 24) {
                                OPC = Utyp;
                                if (sizeoftyp(stat->u.par.dtype) == 4) {
                                    DTYPE = Rdt;
                                } else {
                                    DTYPE = Qdt;
                                }
                                LEXLEV = 0;
                                DTYPE2 = stat->u.par.dtype;
                                uwrite(&u);
                                stat->u.par.dtype = DTYPE;
                            } else if ((stat->u.par.dtype == Qdt || stat->u.par.dtype == Rdt) && stat->u.par.reg < 24) {
                                OPC = Utyp;
                                if (sizeoftyp(stat->u.par.dtype) == 4) {
                                    DTYPE = Jdt;
                                } else {
                                    DTYPE = Idt;
                                }
                                LEXLEV = 0;
                                DTYPE2 = stat->u.par.dtype;
                                uwrite(&u);
                                stat->u.par.dtype = DTYPE;
                            }
                        }
                        genrop(Ustr, stat->u.par.reg, stat->u.par.dtype, stat->u.par.size);
                    }
                } else {
                    func_004230F0(stat->expr, 3, NULL, false, node);
                    sp8B = true;
                }


                DTYPE = stat->u.par.dtype;
                IONE = 0;
                MTYPE = Pmt;
                OFFSET = stat->u.par.loc;
                LENGTH = stat->u.par.size;
                if (sp8B) {
                    OPC = Ustr;
                    LEXLEV = 0;
                    if (DTYPE == Mdt) {
                        DTYPE = Ldt;
                    }
                } else if (sp8A) {
                    OPC = Upar;
                } else {
                    OPC = Urpar;
                    LEXLEV = coloroffset(reg);
                }
                uwrite(&u);
                break;

            case Uxpar:
                func_004230F0(stat->expr, 4, NULL, false, node);
                OPC = Uxpar;
                DTYPE = Adt;
                uwrite(&u);
                break;

            case Upmov:
                func_00424FFC(stat->expr, NULL, node);
                func_004230F0(stat->expr, 3, NULL, false, node);
                if (curmst->u.mst.proc->o3opt) {
                    OPC = Umpmv;
                } else {
                    OPC = Upmov;
                }

                DTYPE = Mdt;
                MTYPE = Pmt;
                IONE = 0;
                OFFSET = stat->u.store.u.mov.offset;
                LENGTH = stat->u.store.size;
                LEXLEV = stat->u.store.u.mov.src_align;
                uwrite(&u);
                break;

            case Umst:
                curmst = stat;
                OPC = Umst;
                LEXLEV = stat->u.mst.cup_level;
                uwrite(&u);
                break;

            case Utjp:
            case Ufjp:
                sp97 = true;
                func_00424FFC(stat->expr, NULL, node);
                func_0042AADC(node);
                func_004230F0(stat->expr, 0, NULL, false, node);
                func_0042B09C(node);
                if (do_opt_saved_regs && !SET32_EMPTY(node->bvs.stage3.lodinsertout)) {
                    func_0042A1C8(node);
                }

                LEXLEV = 0;
                if (usefeedback) {
                    if (stat->next->graphnode->num == node->successors->graphnode->num) {
                        // likely vs unlikely?
                        if (stat->next->graphnode->unk2C < node->successors->next->graphnode->unk2C) {
                            LEXLEV = 1;
                        } else if (node->successors->next->graphnode->unk2C < stat->next->graphnode->unk2C) {
                            LEXLEV = 2;
                        }
                    } else {
                        if (stat->next->graphnode->unk2C < node->successors->graphnode->unk2C) {
                            LEXLEV = 1;
                        } else if (node->successors->graphnode->unk2C < stat->next->graphnode->unk2C) {
                            LEXLEV = 2;
                        }
                    }
                }

                if (node->jump_bbs == NULL) {
                    OPC = stat->opc;
                    IONE = stat->u.jp.target_blockno;
                    uwrite(&u);
                    func_00425594(node->fallthrough_bbs);
                } else {
                    if (stat->opc == Ufjp) {
                        OPC = Utjp;
                    } else {
                        OPC = Ufjp;
                    }

                    maxlabnam++;
                    IONE = maxlabnam;
                    if (LEXLEV != 0) {
                        LEXLEV = 3 - LEXLEV;
                    }
                    uwrite(&u);

                    func_00425594(node->jump_bbs);
                    OPC = Uujp;
                    IONE = stat->u.jp.target_blockno;
                    uwrite(&u);

                    OPC = Ulab;
                    LEXLEV = 0;
                    LENGTH = 0;
                    IONE = maxlabnam;
                    uwrite(&u);

                    func_00425594(node->fallthrough_bbs);
                }
                break;

            case Uujp:
                OPC = stat->opc;
                IONE = stat->u.jp.target_blockno;
                uwrite(&u);
                break;

            case Ulab:
                OPC = stat->opc;
                IONE = stat->u.label.blockno;
                LEXLEV = stat->u.label.flags;
                LENGTH = stat->u.label.length;
                uwrite(&u);
                func_0042B1A8(node);
                break;

            case Uxjp:
                if (stat->expr->type == isconst && (stat->expr->datatype != Idt && stat->expr->datatype != Kdt)) {
                    func_0042AADC(node);
                    func_0042B09C(node);
                    if (do_opt_saved_regs && !SET32_EMPTY(node->bvs.stage3.lodinsertout)) {
                        func_0042A1C8(node);
                    }

                    OPC = Uujp;
                    if (stat->expr->data.isconst.number.intval < stat->u.xjp.lbound_l ||
                            stat->expr->data.isconst.number.intval > stat->u.xjp.hbound_l) {
                        IONE = stat->u.xjp.default_blockno;
                    } else {
                        // find the Uujp, which is at least 1 Statement after the Uclab opcode
                        for (i = 1 + stat->expr->data.isconst.number.intval - stat->u.xjp.lbound_l; i > 0; i--) {
                            target_ujp = target_ujp->next;
                        }
                        IONE = target_ujp->u.jp.target_blockno;
                    }
                    uwrite(&u);
                } else {
                    sp97 = true;
                    func_00424FFC(stat->expr, NULL, node);
                    func_0042AADC(node);
                    func_004230F0(stat->expr, 0, NULL, false, node);
                    func_0042B09C(node);
                    if (do_opt_saved_regs && !SET32_EMPTY(node->bvs.stage3.lodinsertout)) {
                        func_0042A1C8(node);
                    }
                    OPC = Uxjp;
                    DTYPE = stat->u.xjp.dtype;
                    IONE = stat->u.xjp.cases_blockno;
                    LENGTH = stat->u.xjp.default_blockno;
                    LBOUND_L = stat->u.xjp.lbound_l;
                    LBOUND_H = stat->u.xjp.lbound_h;
                    HBOUND_L = stat->u.xjp.hbound_l;
                    HBOUND_H = stat->u.xjp.hbound_h;
                    uwrite(&u);
                }
                break;

            case Uijp:
                sp97 = true;
                if (stat->expr == NULL) {
                    dbgerror(0x45C);
                }
                func_00424FFC(stat->expr, NULL, node);
                func_0042AADC(node);
                func_004230F0(stat->expr, 0, NULL, false, node);
                func_0042B09C(node);
                if (do_opt_saved_regs && !SET32_EMPTY(node->bvs.stage3.lodinsertout)) {
                    func_0042A1C8(node);
                }
                func_0042B144(node);
                OPC = Uijp;
                uwrite(&u);
                break;

            case Uaos:
                func_00424FFC(stat->expr, NULL, node);
                func_004230F0(stat->expr, 0, NULL, false, node);
                OPC = Uaos;
                uwrite(&u);
                break;

            case Uclab:
                if (stat->u.label.unk1C != 0) {
                    OPC = Uclab;
                    IONE = stat->u.label.blockno;
                    LENGTH = stat->u.label.length;
                    uwrite(&u);

                    for (i = 0, length = stat->u.label.length; i < length; i++) {
                        stat = stat->next;
                        OPC = stat->opc;
                        IONE = stat->u.label.blockno;
                        uwrite(&u);
                    }
                } else {
                    for (i = 0, length = stat->u.label.length; i < length; i++) {
                        stat = stat->next;
                    }
                }
                break;

            case Udef:
                OPC = Udef;
                MTYPE = stat->u.def.mtype;
                if (MTYPE == Mmt) {
                    stackDefined = true;
                    LENGTH = highestmdef;
                } else {
                    LENGTH = stat->u.def.unk18;
                }
                uwrite(&u);
                break;

            case Ubgnb:
            case Uendb:
                OPC = stat->opc;
                IONE = stat->u.bgnb.blockno;
                uwrite(&u);
                break;

            case Uret:
                if (lang == LANG_ADA) {
                    epilog(node);
                }
                OPC = Uret;
                uwrite(&u);
                break;

            case Uloc:
                OPC = Uloc;
                LEXLEV = stat->u.loc.page;
                IONE   = stat->u.loc.line;
                uwrite(&u);
                curlocpg = stat->u.loc.page;
                curlocln = stat->u.loc.line;
                break;

            case Uchkt:
                if (stat->expr->type == isconst && stat->expr->data.isconst.number.intval == 0) {
                    boundswarning();
                }
                func_00424FFC(stat->expr, NULL, node);
                func_004230F0(stat->expr, 0, NULL, false, node);
                OPC = Uchkt;
                LEXLEV = 0;
                uwrite(&u);
                break;

            case Upop:
                if (stat->u.pop.unk15 != 0 && stat->u.pop.unk16 != 0) {
                    func_004230F0(stat->expr, 3, NULL, false, node);
                    gettemp(&sp84, 4);
                    spilltemplodstr(Ustr, Fdt, sp84);
                    func_0042AADC(node);
                    spilltemplodstr(Ulod, Fdt, sp84);
                } else {
                    func_00424FFC(stat->expr, NULL, node);
                    if (stat->u.pop.unk15 != 0) {
                        func_0042AADC(node);
                    }
                    func_004230F0(stat->expr, 3, NULL, false, node);
                    if (stat->u.pop.unk15 == 0) {
                        OPC = Upop;
                        DTYPE = stat->u.pop.dtype;
                        uwrite(&u);
                    } else if (OPC == Ulod && MTYPE == Rmt && OFFSET == r_ra) {
                        OPC = Ustr;
                        OFFSET = r_t7;
                        uwrite(&u);
                        OPC = Ulod;
                        uwrite(&u);
                    }
                }
                break;

            case Urcuf:
            case Ucup:
            case Uicuf:
                sp97 = true;
                numcalls += 1;
                if (stat->opc == Ucup) {
                    func_0042AADC(node);
                }
                func_0042B09C(node);
                OPC = stat->opc;
                DTYPE = stat->u.call.returntype;
                if (stat->opc == Ucup) {
                    IONE = stat->u.call.proc->id;
                    LEXLEV = stat->u.call.level;
                } else if (stat->opc == Urcuf) {
                    IONE = stat->u.call.unk20;
                }
                POP = stat->u.call.pop;
                PUSH = stat->u.call.push_flags;
                EXTRNAL = stat->u.call.extrnal_flags;
                uwrite(&u);
                if (do_opt_saved_regs && !SET32_EMPTY(node->bvs.stage3.lodinsertout)) {
                    func_0042A1C8(node);
                }
                func_0042B144(node);
                if (curmst->u.mst.loc >= 0) {
                    gen_outparcode(node->successors->graphnode);
                }
                break;

            case Ucia:
                sp97 = true;
                func_0042AADC(node);
                func_0042B09C(node);
                OPC = Ucia;
                LENGTH = stat->u.cia.unk1C;
                LEXLEV = stat->u.cia.flags;
                DTYPE = stat->u.cia.returntype;
                OFFSET = stat->u.cia.unk20;
                CONSTVAL.swpart.Ival = stat->u.cia.unk1C;

                if (stat->u.cia.strp_pos < strpdisplace) {
                    reset(&strp, " ", 0, 0);
                    strpdisplace = 0;
                }

                while (strpdisplace < stat->u.cia.strp_pos) {
                    next_char(strp.c_file);
                    strpdisplace++;
                }

                if (stat->u.cia.unk1C > 0) {
                    for (i = 0; i < stat->u.cia.unk1C; i++) {
                        if (eoln(strp.c_file)) {
                            readln(strp.c_file);
                            ustrptr[i] = '\n';
                        } else {
                            ustrptr[i] = read_char(strp.c_file);
                        }
                    }
                }
                strpdisplace += stat->u.cia.unk1C;
                CONSTVAL.swpart.Chars = ustrptr;
                uwrite(&u);

                if (do_opt_saved_regs && !SET32_EMPTY(node->bvs.stage3.lodinsertout)) {
                    func_0042A1C8(node);
                }
                func_0042B144(node);
                break;

            case Uaent:
                OPC = Uaent;
                DTYPE = stat->u.aent.returntype;
                LEXLEV = curlevel;
                IONE = stat->u.aent.blockno;
                POP = stat->u.aent.pop;
                PUSH = stat->u.aent.push;
                EXTRNAL = stat->u.aent.extrnal_flags;
                uwrite(&u);

                OPC = Updef;
                DTYPE = Ldt;
                MTYPE = Pmt;
                LENGTH = 4;
                LEXLEV = 1;
                IONE = curblk;
                for (i = 0; i < stat->u.aent.unk1C * 4; i++) {
                    OFFSET = i * 4;
                    uwrite(&u);
                }

                if (staticlinkloc != 0) {
                    gen_static_link();
                }

                if (do_opt_saved_regs) {
                    func_0042A7D0();
                }

                OPC = Urstr;
                DTYPE = Ldt;
                MTYPE = Pmt;
                LENGTH = 4;
                IONE = curblk;

                length = stat->u.aent.unk1C;
                if (length > 4) {
                    length = 4;
                }

                for (i = 0; i < length; i++) {
                    OFFSET = i * 4;
                    LEXLEV = coloroffset(firstparmreg[0] + i);
                    uwrite(&u);
                }
                func_0042B1A8(node);
                break;

            case Ulbgn:
                OPC = stat->opc;
                IONE = stat->u.lbgn.unk14;
                uwrite(&u);
                break;

            case Ulbdy:
                OPC = stat->opc;
                LEXLEV = stat->u.lbdy.unk14;
                uwrite(&u);
                break;

            case Ultrm:
            case Ulend:
                OPC = stat->opc;
                uwrite(&u);
                break;

            case Uclbd:
            case Ucubd:
            case Ustep:
                OPC = stat->opc;
                DTYPE = stat->u.clbd_cubd_step.dtype;
                IONE = stat->u.clbd_cubd_step.unk18;
                uwrite(&u);
                break;

            case Uctrl:
                OPC = Uctrl;
                DTYPE = stat->u.ctrl.dtype;
                LENGTH = stat->u.ctrl.unk15;
                OFFSET = stat->u.ctrl.var.addr;
                IONE = stat->u.ctrl.var.blockno;
                MTYPE = stat->u.ctrl.var.memtype;
                uwrite(&u);
                break;

            case Unop:
                break;

            default:
                dbgerror(0x212);
                break;
        }

        // entered next basic block
        stat = stat->next;
        if (stat != NULL && node != stat->graphnode) {
            if (!sp97) {
                func_0042AADC(node);
                func_0042B09C(node);
                if (do_opt_saved_regs && !SET32_EMPTY(node->bvs.stage3.lodinsertout)) {
                    func_0042A1C8(node);
                }
                func_0042B144(node);
            }

            sp97 = false;
            node = stat->graphnode;
            findbbtemps(stat->graphnode);

            has_ix = mipsflag == 3 && func_0042BE58(node->loop);

            if (has_ix) {
                loopno = node->loop->loopno;
            }

            if (genbbnum) {
                OPC = Ucomm;
                DTYPE = Mdt;
                CONSTVAL.swpart.Ival = 20;

                if (!node->terminal) {
                    ustrptr[0] = '?';
                } else {
                    ustrptr[0] = '-';
                }
                ustrptr[1] = '-';
                ustrptr[2] = '-';
                ustrptr[3] = 'B';
                ustrptr[4] = 'B';
                ustrptr[5] = ' ';
                ustrptr[6] = (node->num % 1000) / 100 + '0';
                ustrptr[7] = (node->num % 100)  / 10  + '0';
                ustrptr[8] = (node->num % 10) + '0';
                ustrptr[9] = ' ';
                func_0042BD94(node->unk2C);
                CONSTVAL.swpart.Chars = ustrptr;
                uwrite(&u);
            }

            func_00422AF0(node);

            if (node->blockno == 0 && node->stat_head->opc != Uaent) {
                func_0042B1A8(node);
            }
        }
    }

    if (!sp97) {
        func_0042B09C(node);
        if (do_opt_saved_regs && !SET32_EMPTY(node->bvs.stage3.lodinsertout)) {
            func_0042A1C8(node);
        }
    }

    if (!stackDefined) {
        OPC = Udef;
        MTYPE = Mmt;
        LENGTH = highestmdef;
        uwrite(&u);
    }

    if (allcallersave) {
        if (propagate_ee_saves) {
            for (reg = firsteereg[0]; reg <= lasteereg[0]; reg++) {
                if (curproc->regstaken_parregs->regstaken[reg - 1] && !SET32_IN(ugen_saved_eeregs, reg - 13)) {
                    curproc->regstaken_parregs->regstaken[reg - 1] = false;
                }
            }

            for (reg = firsteereg[1]; reg <= lasteereg[1]; reg++) {
                if (curproc->regstaken_parregs->regstaken[reg - 1] && !SET32_IN(ugen_saved_eeregs, reg - 13)) {
                    curproc->regstaken_parregs->regstaken[reg - 1] = false;
                }
            }
        } else {
            for (reg = firsteereg[0]; reg <= lasteereg[0]; reg++) {
                curproc->regstaken_parregs->regstaken[reg - 1] = false;
            }

            for (reg = firsteereg[1]; reg <= lasteereg[1]; reg++) {
                curproc->regstaken_parregs->regstaken[reg - 1] = false;
            }
        }

        curproc->regstaken_parregs->regstaken[13 - 1] = true;
        curproc->regstaken_parregs->regstaken[regsinclass1 - 1] = true;

        if (someusefp) {
            curproc->regstaken_parregs->regstaken[regsinclass1 - 2] = true;
        }

        for (reg = firsterreg[1]; reg <= lasterreg[1]; reg++) {
            curproc->regstaken_parregs->regstaken[reg - 1] = true;
        }
    }
}
