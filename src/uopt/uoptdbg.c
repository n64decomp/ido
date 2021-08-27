#include "libp/libp.h"
#include "common.h"
#include "ucode.h"
#include "uoptdata.h"

__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
RO_1000AB27:
    # 0041C914 printregs
    .ascii "ppin \" \" "

RO_1000AB30:
    # 0041C914 printregs
    .ascii "indiracc \" \" "

RO_1000AB3D:
    # 0041C914 printregs
    .ascii "liveout \" \" "

RO_1000AB49:
    # 0041C914 printregs
    .ascii "active \" \" "

RO_1000AB54:
    # 0041C914 printregs
    .ascii "loclive \" \" "

RO_1000AB60:
    # 0041C914 printregs
    .ascii "locdef \" \" "

RO_1000AB6B:
    # 0041C914 printregs
    .ascii "appear \" \" "

RO_1000AB76:
    # 0041C914 printregs
    .ascii "regsused[2]: ["

RO_1000AB84:
    # 0041C914 printregs
    .ascii "regsused[1]: ["

RO_1000AB92:
    # 0041C914 printregs
    .ascii " loopdepth "

RO_1000AB9D:
    # 0041C914 printregs
    .ascii "% % % node"

RO_1000ABA7:
    # 0041C914 printregs
    .ascii "- live bb (default) "

RO_1000ABBB:
    # 0041C914 printregs
    .ascii "firstisstr deadout needreglod needregsave "

RO_1000ABE5:
    # 0041C914 printregs
    .ascii "- live bb -"

RO_1000ABF0:
    # 0041C914 printregs
    .ascii ":::interfere with:::"

RO_1000AC04:
    # 0041C914 printregs
    .ascii "forbidden: ["

RO_1000AC10:
    # 0041C914 printregs
    .ascii "adjsave, hasstore:"

RO_1000AC22:
    # 0041C914 printregs
    .ascii "const------>"

RO_1000AC2E:
    # 0041C914 printregs
    .ascii ">>>active<<<{"

.data
D_10010450:
    # 0041C914 printregs
    .ascii "notloopfirstbb\x00 loopfirstbb\x00canunroll\x00\x00 \x00\x00\x00\x00\x00\x00\x00\x00"

.text
)"");
/*
0041DDD4 printstat
0043771C optinit
0047C960 increasecount
*/
int numlcse;

/*
0041DDD4 printstat
0043771C optinit
*/
int numlrdstr;

/*
0041DDD4 printstat
0043771C optinit
*/
int numgcopy;

/*
004175BC copypropagate
0041DDD4 printstat
0043771C optinit
*/
int numrdstr;

/*
0041DDD4 printstat
0043771C optinit
*/
int numgcse;

/*
00410204 codemotion
0041DDD4 printstat
0043771C optinit
*/
int numinsert;

/*
0041DDD4 printstat
0043771C optinit
00479778 func_00479778
*/
int numtstrep;

/*
0041DDD4 printstat
0043771C optinit
*/
int numsrinc;

/*
0041DDD4 printstat
0043771C optinit
*/
int numexpr;

/*
0041DDD4 printstat
0043771C optinit
*/
int numstr;

/*
0041DDD4 printstat
0043771C optinit
*/
int totvarref;

/*
0041DDD4 printstat
0043771C optinit
*/
int totvarrref;

/*
0041DDD4 printstat
0043771C optinit
*/
int totvarsav;

/*
0041DDD4 printstat
0043771C optinit
*/
int totvarrsav;

/*
0041DDD4 printstat
0043771C optinit
*/
int totexpref;

/*
0041DDD4 printstat
0043771C optinit
*/
int totexprref;

/*
0041DDD4 printstat
0043771C optinit
*/
int totexpsav;

/*
0041DDD4 printstat
0043771C optinit
*/
int totexprsav;

/*
0041DDD4 printstat
004205F8 genrlodrstr
0043771C optinit
*/
int totvarrlods;

/*
0041DDD4 printstat
004205F8 genrlodrstr
0043771C optinit
*/
int totvarrstrs;

/*
0041DDD4 printstat
004205F8 genrlodrstr
0043771C optinit
*/
int totexprlods;

/*
0041DDD4 printstat
004205F8 genrlodrstr
0043771C optinit
*/
int totexprstrs;

/*
0041DDD4 printstat
0043771C optinit
00456A2C oneproc
*/
int lopttime;

/*
00410204 codemotion
004175BC copypropagate
0041DDD4 printstat
0043771C optinit
004638C0 regdataflow
00479DC4 eliminduct
*/
int dataflowtime;

/*
00410204 codemotion
004175BC copypropagate
0041DDD4 printstat
0043771C optinit
004638C0 regdataflow
00475680 getexpsources
00479DC4 eliminduct
*/
int dataflowiter;

/*
00410204 codemotion
004175BC copypropagate
0041DDD4 printstat
0043771C optinit
004638C0 regdataflow
00475680 getexpsources
00479DC4 eliminduct
*/
int numdataflow;

/*
0041DDD4 printstat
0043771C optinit
00456A2C oneproc
*/
int regaloctime;

/*
00410204 codemotion
004175BC copypropagate
004638C0 regdataflow
00475680 getexpsources
00479DC4 eliminduct
*/
int lastdftime;

/*
0041DDD4 printstat
00465E50 spilltemps
*/
int numlr;

/*
0041DDD4 printstat
00465E50 spilltemps
00467F04 split
*/
int finalnumlr;

/*
0041DDD4 printstat
0045DA18 formlivbb
00461AAC makelivranges
00464BFC localcolor
*/
int numlu;

/*
0041DDD4 printstat
*/
int numoc;

/*
0041DDD4 printstat
00465E50 spilltemps
00467F04 split
*/
int numsplitlu;

/*
0041DDD4 printstat
0042BF08 reemit
*/
int numcalls;

/*
0041DDD4 printstat
00465E50 spilltemps
0046791C whyuncolored
00467C34 needsplit
00467F04 split
00469280 globalcolor
*/
int contiglr;

/*
004175BC copypropagate
0041DDD4 printstat
*/
int aliasedlr;

/*
004175BC copypropagate
0041DDD4 printstat
*/
int aliasedlu;

/*
004175BC copypropagate
0041DDD4 printstat
*/
int aliasedoc;

/*
0041DDD4 printstat
00465E50 spilltemps
00469280 globalcolor
*/
int numcoloredlr;

/*
0041DDD4 printstat
00465E50 spilltemps
00467C34 needsplit
*/
int numcantcoloredlr;

/*
0041DDD4 printstat
00465E50 spilltemps
0046791C whyuncolored
00467F04 split
*/
int num0occurlr;

/*
0041DDD4 printstat
00465E50 spilltemps
00467F04 split
00469280 globalcolor
*/
int numcalloverheadlr;

/*
0041DDD4 printstat
00465E50 spilltemps
0046791C whyuncolored
*/
int numsparselr;

/*
0041DDD4 printstat
00465E50 spilltemps
0046791C whyuncolored
*/
int numnotwellformedlr;

/*
0041DDD4 printstat
00465E50 spilltemps
00467B8C inc_allococ
*/
int allococ;

/*
0041A410 printitab
0041AC2C printtab
*/
void printmtyp(enum Memtype type) {
    switch ((enum Memtype)(unsigned char)type) {
        case Zmt: write_char(list.c_file, 'Z', 1); break;
        case Pmt: write_char(list.c_file, 'P', 1); break;
        case Tmt: write_char(list.c_file, 'T', 1); break;
        case Smt: write_char(list.c_file, 'S', 1); break;
        case Mmt: write_char(list.c_file, 'M', 1); break;
        case Rmt: write_char(list.c_file, 'R', 1); break;
        case Amt: write_char(list.c_file, 'A', 1); break;
        default: caseerror(1, 42, "uoptdbg.p", 9);
    }
}

/*
0041A410 printitab
0041AC2C printtab
*/
static char uopcode_enum_values[] = "uabs\0   uadd\0   uadj\0   uaent\0  uand\0   uaos\0   uasym\0  ubgn\0   ubgnb\0  ubsub\0  ucg1\0   ucg2\0   uchkh\0  uchkl\0  uchkn\0  uchkt\0  ucia\0   uclab\0  uclbd\0  ucomm\0  ucsym\0  uctrl\0  ucubd\0  ucup\0   ucvt\0   ucvtl\0  udec\0   udef\0   udif\0   udiv\0   udup\0   uend\0   uendb\0  uent\0   ueof\0   uequ\0   uesym\0  ufill\0  ufjp\0   ufsym\0  ugeq\0   ugrt\0   ugsym\0  uhsym\0  uicuf\0  uidx\0   uiequ\0  uigeq\0  uigrt\0  uijp\0   uilda\0  uildv\0  uileq\0  uiles\0  uilod\0  uinc\0   uineq\0  uinit\0  uinn\0   uint\0   uior\0   uisld\0  uisst\0  uistr\0  uistv\0  uixa\0   ulab\0   ulbd\0   ulbdy\0  ulbgn\0  ulca\0   ulda\0   uldap\0  uldc\0   uldef\0  uldsp\0  ulend\0  uleq\0   ules\0   ulex\0   ulnot\0  uloc\0   ulod\0   ulsym\0  ultrm\0  umax\0   umin\0   umod\0   umov\0   umovv\0  umpmv\0  umpy\0   umst\0   umus\0   uneg\0   uneq\0   unop\0   unot\0   uodd\0   uoptn\0  upar\0   updef\0  upmov\0  upop\0   uregs\0  urem\0   uret\0   urlda\0  urldc\0  urlod\0  urnd\0   urpar\0  urstr\0  usdef\0  usgs\0   ushl\0   ushr\0   usign\0  usqr\0   usqrt\0  ussym\0  ustep\0  ustp\0   ustr\0   ustsp\0  usub\0   uswp\0   utjp\0   utpeq\0  utpge\0  utpgt\0  utple\0  utplt\0  utpne\0  utyp\0   uubd\0   uujp\0   uunal\0  uuni\0   uvreg\0  uxjp\0   uxor\0   uxpar\0  umtag\0  ualia\0  uildi\0  uisti\0  uirld\0  uirst\0  uldrc\0  umsym\0  urcuf\0  uksym\0  uosym\0  uirlv\0  uirsv\0\0 ";

/*
00456A2C oneproc
*/
void printitab(void) {
    int i;
    struct IChain *ichain;

    if (proc_to_print[0] == ' ' || at_proc_to_print) {
        write_string(list.c_file, " index    ", 10, 10);
        write_string(list.c_file, "  bit ", 6, 6);
        write_string(list.c_file, "kind    op      l      r  ", 26, 26);
        writeln(list.c_file);
        for (i = 0; i < bitposcount; i++) {
            ichain = bittab[i].ichain;
            write_char(list.c_file, '{', 1);
            write_integer(list.c_file, ichain->table_index, 4, 10);
            write_char(list.c_file, '|', 1);
            write_integer(list.c_file, ichain->chain_index, 1, 10);
            write_char(list.c_file, '}', 1);
            write_integer(list.c_file, ichain->bitpos, 7, 10);
            write_char(list.c_file, ' ', 1);

            switch (ichain->type) {
                case isconst:
                    write_string(list.c_file, "isconst ", 8, 8);
                    break;

                case islda:
                    write_string(list.c_file, "islda   ", 8, 8);
                    break;

                case isvar:
                    write_string(list.c_file, "isvar   ", 8, 8);
                    break;

                case isilda:
                    write_string(list.c_file, "isilda   ", 9, 9);
                    break;

                case issvar:
                    write_string(list.c_file, "issvar   ", 9, 9);
                    break;

                case isop:
                    write_string(list.c_file, "isop    ", 8, 8);
                    break;

                case empty:
                    write_string(list.c_file, "empty   ", 8, 8);
                    break;

                case dumped:
                    write_string(list.c_file, "dumped  ", 8, 8);
                    break;

                case isrconst:
                    write_string(list.c_file, "isrconst ", 9, 9);
                    break;

                default:
                    caseerror(1, 70, "uoptdbg.p", 9);
                    break;
            }

            if (ichain->type == isop) {
                write_enum(list.c_file, ichain->isop.opc, uopcode_enum_values, 0);
                write_char(list.c_file, '{', 1);
                write_integer(list.c_file, ichain->isop.op1->table_index, 4, 10);
                write_char(list.c_file, '|', 1);
                write_integer(list.c_file, ichain->isop.op1->chain_index, 1, 10);
                write_string(list.c_file, "} ", 2, 2);
                if (ichain->isop.op2 != NULL) {
                    write_char(list.c_file, '{', 1);
                    write_integer(list.c_file, ichain->isop.op2->table_index, 4, 10);
                    write_char(list.c_file, '|', 1);
                    write_integer(list.c_file, ichain->isop.op2->chain_index, 1, 10);
                    write_char(list.c_file, '}', 1);
                }
                writeln(list.c_file);
            } else if (ichain->type == isilda) {
                write_string(list.c_file, "ILDA", 4, 4);
                write_char(list.c_file, '{', 1);
                write_integer(list.c_file, ichain->islda_isilda.outer_stack_ichain->table_index, 4, 10);
                write_char(list.c_file, '|', 1);
                write_integer(list.c_file, ichain->islda_isilda.outer_stack_ichain->chain_index, 1, 10);
                write_string(list.c_file, "} ", 2, 2);
                writeln(list.c_file);
            } else if (ichain->type == isvar || ichain->type == issvar) {
                printmtyp(ichain->isvar_issvar.location.memtype);
                if (ichain->type == issvar) {
                    write_char(list.c_file, '{', 1);
                    write_integer(list.c_file, ichain->isvar_issvar.outer_stack_ichain->table_index, 4, 10);
                    write_char(list.c_file, '|', 1);
                    write_integer(list.c_file, ichain->isvar_issvar.outer_stack_ichain->chain_index, 1, 10);
                    write_string(list.c_file, "} ", 2, 2);
                }

                write_integer(list.c_file, ichain->isvar_issvar.location.blockno, 5, 10);
                write_char(list.c_file, ' ', 1);
                write_integer(list.c_file, ichain->isvar_issvar.location.addr, 5, 10);
                if (ichain->isvar_issvar.unk19) {
                    write_string(list.c_file, "vreg", 4, 4);
                    writeln(list.c_file);
                } else {
                    writeln(list.c_file);
                }

                write_string(list.c_file, "\"\"\" ", 4, 4);
                write_string(list.c_file, "    ", 4, 4);
                write_integer(list.c_file, ichain->isvar_issvar.assignbit, 7, 10);
                writeln(list.c_file);
                i++; // why skip?
            }
        }
    }
}

/*
00456A2C oneproc
*/
void printtab(void) {
    int i;
    struct Expression *expr;

    if (proc_to_print[0] == ' ' || at_proc_to_print) {
        for (i = 0; i < sizeof (table) / sizeof (table[0]); i++) {
            for (expr = table[i]; expr != NULL; expr = expr->next) {
                write_char(list.c_file, '[', 1);
                write_integer(list.c_file, expr->table_index, 4, 10);
                write_char(list.c_file, ',', 1);
                write_integer(list.c_file, expr->chain_index, 1, 10);
                write_string(list.c_file, "] ", 2, 2);

                switch (expr->type) {
                    case isconst:
                        write_string(list.c_file, "isconst " , 8, 8);
                        write_integer(list.c_file, expr->data.isconst.number.intval, 12, 10);
                        break;

                    case islda:
                        write_string(list.c_file, "islda   ", 8, 8);
                        break;

                    case isvar:
                        write_string(list.c_file, "isvar   ", 8, 8);
                        break;

                    case isilda:
                        write_string(list.c_file, "isilda   ", 9, 9);
                        break;

                    case issvar:
                        write_string(list.c_file, "issvar   ", 9, 9);
                        break;

                    case isop:
                        write_string(list.c_file, "isop    ", 8, 8);
                        break;

                    case empty:
                        write_string(list.c_file, "empty   ", 8, 8);
                        break;

                    case dumped:
                        write_string(list.c_file, "dumped  ", 8, 8);
                        break;

                    case isrconst:
                        write_string(list.c_file, "isrconst ", 9, 9);
                        write_integer(list.c_file, expr->data.isrconst.value, 12, 10);
                        break;

                    default:
                        caseerror(1, 135, "uoptdbg.p" , 9);
                        break;
                }

                if (expr->type == isop) {
                    write_enum(list.c_file, expr->data.isop.opc, uopcode_enum_values, 0);
                    write_char(list.c_file, '[', 1);
                    if (expr->data.isop.op1 == NULL) {
                        write_string(list.c_file, "nil] [", 6, 6);
                    } else {
                        write_integer(list.c_file, expr->data.isop.op1->table_index, 4, 10);
                        write_char(list.c_file, ',', 1);
                        write_integer(list.c_file, expr->data.isop.op1->chain_index, 1, 10);
                        write_string(list.c_file, "] [", 3, 3);
                    }

                    if (expr->data.isop.op2 == NULL) {
                        write_string(list.c_file, "nil]", 4, 4);
                        writeln(list.c_file);
                    } else {
                        write_integer(list.c_file, expr->data.isop.op2->table_index, 4, 10);
                        write_char(list.c_file, ',', 1);
                        write_integer(list.c_file, expr->data.isop.op2->chain_index, 1, 10);
                        write_char(list.c_file, ']', 1);
                        writeln(list.c_file);
                    }
                } else if (expr->type == isilda) {
                    write_string(list.c_file, "ILDA", 4, 4);
                    write_char(list.c_file, '[', 1);
                    write_integer(list.c_file, expr->data.islda_isilda.outer_stack->table_index, 4, 10);
                    write_char(list.c_file, ',', 1);
                    write_integer(list.c_file, expr->data.islda_isilda.outer_stack->chain_index, 1, 10);
                    write_string(list.c_file, "] ", 2, 2);
                    writeln(list.c_file);
                } else if ((expr->type == isvar || expr->type == issvar) && expr->graphnode != NULL) {
                    printmtyp(expr->data.isvar_issvar.location.memtype);
                    if (expr->type == issvar && expr->graphnode != NULL) {
                        write_char(list.c_file, '[', 1);
                        write_integer(list.c_file, expr->data.isvar_issvar.outer_stack->table_index, 4, 10);
                        write_char(list.c_file, ',', 1);
                        write_integer(list.c_file, expr->data.isvar_issvar.outer_stack->chain_index, 1, 10);
                        write_string(list.c_file, "] ", 2, 2);
                    }

                    write_integer(list.c_file, expr->data.isvar_issvar.location.blockno, 5, 10);
                    write_char(list.c_file, ' ', 1);
                    write_integer(list.c_file, expr->data.isvar_issvar.location.addr, 5, 10);

                    if (expr->data.isvar_issvar.assignment != NULL && (expr->data.isvar_issvar.assigned_value != NULL)) {
                        write_string(list.c_file, " [", 2, 2);
                        write_integer(list.c_file, expr->data.isvar_issvar.assigned_value->table_index, 1, 10);
                        write_char(list.c_file, ',', 1);
                        write_integer(list.c_file, expr->data.isvar_issvar.assigned_value->chain_index, 1, 10);
                        write_char(list.c_file, ']', 1);
                    } else {
                        write_string(list.c_file, " [nil]", 6, 6);
                    }

                    if ((expr->data.isvar_issvar.copy != 0) && expr->data.isvar_issvar.copy != nocopy && expr->graphnode != NULL) {
                        write_string(list.c_file, " [", 2, 2);
                        write_integer(list.c_file, expr->data.isvar_issvar.copy->table_index, 1, 10);
                        write_char(list.c_file, ',', 1);
                        write_integer(list.c_file, expr->data.isvar_issvar.copy->chain_index, 1, 10);
                        write_char(list.c_file, ']', 1);
                        writeln(list.c_file);
                    } else {
                        write_string(list.c_file, " [nil]", 6, 6);
                        writeln(list.c_file);
                    }
                } else {
                    writeln(list.c_file);
                }
            }
        }
    }
}

/*
0041B8C8 printlinfo
0041BC58 printhoist
0041BEF4 printprecm
0041C1B0 printcm
0041C688 printscm
0041C914 printregs
00469280 globalcolor
*/
void printbv(struct BitVector *bv) {
    int blockpos;
    int bitpos = 0;
    int i;
    bool inside_range = false;
    bool at_first = true;
    bool at_first_element_in_range;

    write_char(list.c_file, '(', 1);
    write_integer(list.c_file, bv->num_blocks, 3, 10);
    write_string(list.c_file, ") [", 3, 3);

    for (blockpos = 0; blockpos < bv->num_blocks && blockpos <= (bitposcount - 1) / 128; blockpos++) {
        for (i = bitpos; i < bitpos + 128; i++) {
            if (bv->blocks[blockpos].words[(i & 0x7f) >> 5] & (1U << (31 - (i & 0x1f)))) {
                if (!inside_range) {
                    if (at_first) {
                        write_integer(list.c_file, i, 4, 10);
                        at_first = false;
                    } else {
                        write_char(list.c_file, ',', 1);
                        write_integer(list.c_file, i, 4, 10);
                    }
                    at_first_element_in_range = true;
                } else {
                    at_first_element_in_range = false;
                }
                inside_range = true;
            } else {
                if (inside_range && !at_first_element_in_range) {
                    write_string(list.c_file, "..", 2, 2);
                    write_integer(list.c_file, i - 1, 4, 10);
                }
                inside_range = false;
            }
        }
        bitpos += 128;
    }
    if (inside_range && !at_first_element_in_range) {
        write_string(list.c_file, "..", 2, 2);
        write_integer(list.c_file, i - 1, 4, 10);
    }
    write_char(list.c_file, ']', 1);
    writeln(list.c_file);
}

/*
00456A2C oneproc
*/
void printlinfo(void) {
    struct Graphnode *node;

    if (proc_to_print[0] == ' ' || at_proc_to_print) {
        node = graphhead;
        while (node != NULL) {
            write_string(list.c_file, "! ! ! ! ! node", 14, 14);
            write_integer(list.c_file, node->num, 12, 10);
            write_string(list.c_file, " ! ! ! ! !", 10, 10);
            writeln(list.c_file);
            write_string(list.c_file, "antlocs --", 10, 10);
            printbv(&node->bvs.stage1.antlocs);
            write_string(list.c_file, "avlocs --", 9, 9);
            printbv(&node->bvs.stage1.avlocs);
            write_string(list.c_file, "alters --", 9, 9);
            printbv(&node->bvs.stage1.alters);
            write_string(list.c_file, "pavlocs --", 10, 10);
            printbv(&node->bvs.stage1.u.precm.pavlocs);
            write_string(list.c_file, "absalters --", 12, 12);
            printbv(&node->bvs.stage1.absalters);
            write_string(list.c_file, "expoccur --", 11, 11);
            printbv(&node->bvs.stage1.u.precm.expoccur);
            write_string(list.c_file, "indiracc --", 11, 11);
            printbv(&node->indiracc);
            node = node->next;
        }
        write_string(list.c_file, "varbits ****", 12, 12);
        printbv(&varbits);
        write_string(list.c_file, "slvarbits ****", 14, 14);
        printbv(&slvarbits);
        write_string(list.c_file, "storeop ****", 12, 12);
        printbv(&storeop);
        write_string(list.c_file, "trapop ****", 11, 11);
        printbv(&trapop);
        write_string(list.c_file, "boolexp ****", 12, 12);
        printbv(&boolexp);
        write_string(list.c_file, "indmults ****", 13, 13);
        printbv(&indmults);
    }
}

/*
004324F4 findinduct
*/
void printhoist(bool show_hoistedexp) {
    struct Graphnode *node;

    if (proc_to_print[0] == ' ' || at_proc_to_print) {
        node = graphhead;
        while (node != NULL) {
            write_string(list.c_file, "! ! ! ! ! node", 14, 14);
            write_integer(list.c_file, node->num, 12, 10);
            write_string(list.c_file, " ! ! ! ! !", 10, 10);
            writeln(list.c_file);
            write_string(list.c_file, "antlocs --", 10, 10);
            printbv(&node->bvs.stage1.antlocs);
            write_string(list.c_file, "avlocs --", 9, 9);
            printbv(&node->bvs.stage1.avlocs);
            write_string(list.c_file, "alters --", 9, 9);
            printbv(&node->bvs.stage1.alters);
            write_string(list.c_file, "antin --", 8, 8);
            printbv(&node->bvs.stage1.u.precm.antin);
            write_string(list.c_file, "antout --", 9, 9);
            printbv(&node->bvs.stage1.u.precm.antout);
            write_string(list.c_file, "pavin --", 8, 8);
            printbv(&node->bvs.stage1.u.precm.pavin);
            write_string(list.c_file, "pavout --", 9, 9);
            printbv(&node->bvs.stage1.u.precm.pavout);
            if (show_hoistedexp) {
                write_string(list.c_file, "hoistedexp --", 13, 13);
                printbv(&node->hoistedexp);
            }
            node = node->next;
        }
    }
}

/*
00410204 codemotion
*/
void printprecm(void) {
    struct Graphnode *node;

    if (proc_to_print[0] == ' ' || at_proc_to_print) {
        node = graphhead;
        while (node != NULL) {
            write_string(list.c_file, "! ! ! ! ! node", 14, 14);
            write_integer(list.c_file, node->num, 12, 10);
            write_string(list.c_file, " ! ! ! ! !", 10, 10);
            writeln(list.c_file);
            write_string(list.c_file, "antlocs --", 10, 10);
            printbv(&node->bvs.stage1.antlocs);
            write_string(list.c_file, "avlocs --", 9, 9);
            printbv(&node->bvs.stage1.avlocs);
            write_string(list.c_file, "alters --", 9, 9);
            printbv(&node->bvs.stage1.alters);
            write_string(list.c_file, "pavlocs --", 10, 10);
            printbv(&node->bvs.stage1.u.precm.pavlocs);
            write_string(list.c_file, "absalters --", 12, 12);
            printbv(&node->bvs.stage1.absalters);
            write_string(list.c_file, "avin --", 7, 7);
            printbv(&node->bvs.stage1.u.precm.avin);
            write_string(list.c_file, "avout --", 8, 8);
            printbv(&node->bvs.stage1.u.precm.avout);
            write_string(list.c_file, "pavin --", 8, 8);
            printbv(&node->bvs.stage1.u.precm.pavin);
            write_string(list.c_file, "pavout --", 9, 9);
            printbv(&node->bvs.stage1.u.precm.pavout);
            node = node->next;
        }
    }
}

/*
00456A2C oneproc
*/
void printcm(void) {
    struct Graphnode *node;

    if (proc_to_print[0] == ' ' || at_proc_to_print) {
        node = graphhead;
        while (node != NULL) {
            write_string(list.c_file, "! ! ! ! ! node", 14, 14);
            write_integer(list.c_file, node->num, 12, 10);
            write_string(list.c_file, " ! ! ! ! !", 10, 10);
            writeln(list.c_file);
            write_string(list.c_file, "antlocs --", 10, 10);
            printbv(&node->bvs.stage1.antlocs);
            write_string(list.c_file, "avlocs --", 9, 9);
            printbv(&node->bvs.stage1.avlocs);
            write_string(list.c_file, "alters --", 9, 9);
            printbv(&node->bvs.stage1.alters);
            write_string(list.c_file, "absalters --", 12, 12);
            printbv(&node->bvs.stage1.absalters);
            write_string(list.c_file, "antin --", 8, 8);
            printbv(&node->bvs.stage1.u.cm.antin);
            write_string(list.c_file, "antout --", 9, 9);
            printbv(&node->bvs.stage1.u.cm.antout);
            write_string(list.c_file, "iv --", 5, 5);
            printbv(&node->bvs.stage1.u.cm.iv);
            write_string(list.c_file, "cand --", 7, 7);
            printbv(&node->bvs.stage1.u.cm.cand);
            write_string(list.c_file, "ppin --", 7, 7);
            printbv(&node->bvs.stage1.u.cm.ppin);
            write_string(list.c_file, "ppout --", 8, 8);
            printbv(&node->bvs.stage1.u.cm.ppout);
            if (docodehoist) {
                write_string(list.c_file, "hoistedexp --", 13, 13);
                printbv(&node->hoistedexp);
            }
            write_string(list.c_file, "insert --", 9, 9);
            printbv(&node->bvs.stage1.u.cm.insert);
            write_string(list.c_file, "delete --", 9, 9);
            printbv(&node->bvs.stage1.u.cm.delete);
            write_string(list.c_file, "subdelete --", 12, 12);
            printbv(&node->bvs.stage1.u.cm.subdelete);
            write_string(list.c_file, "subinsert --", 12, 12);
            printbv(&node->bvs.stage1.u.cm.subinsert);
            node = node->next;
        }
        write_string(list.c_file, "indmults ****", 13, 13);
        printbv(&indmults);
        write_string(list.c_file, "mvarbits ****", 13, 13);
        printbv(&mvarbits);
        write_string(list.c_file, "outmodebits ****", 16, 16);
        printbv(&outmodebits);
        write_string(list.c_file, "notinmodebits ****", 18, 18);
        printbv(&notinmodebits);
    }
}

/*
00456A2C oneproc
*/
void printscm(void) {
    struct Graphnode *node;

    if (proc_to_print[0] == ' ' || at_proc_to_print) {
        node = graphhead;
        while (node != NULL) {
            write_string(list.c_file, "! ! ! ! ! node", 14, 14);
            write_integer(list.c_file, node->num, 12, 10);
            write_string(list.c_file, " ! ! ! ! !", 10, 10);
            writeln(list.c_file);
            write_string(list.c_file, "antlocs --", 10, 10);
            printbv(&node->bvs.stage1.antlocs);
            write_string(list.c_file, "avlocs --", 9, 9);
            printbv(&node->bvs.stage1.avlocs);
            write_string(list.c_file, "alters --", 9, 9);
            printbv(&node->bvs.stage1.alters);
            write_string(list.c_file, "absalters --", 12, 12);
            printbv(&node->bvs.stage1.absalters);
            write_string(list.c_file, "source --", 9, 9);
            printbv(&node->bvs.stage1.u.scm.source);
            write_string(list.c_file, "sink --", 7, 7);
            printbv(&node->bvs.stage1.u.scm.sink);
            write_string(list.c_file, "region --", 9, 9);
            printbv(&node->bvs.stage1.u.scm.region);
            node = node->next;
        }
        write_string(list.c_file, "coloreditems ****", 17, 17);
        printbv(&coloreditems);
    }
}

__asm__(R""(
.set noat
.set noreorder

glabel printregs
    .ent printregs
    # 00456A2C oneproc
/* 0041C914 3C1C0FC0 */  .cpload $t9
/* 0041C918 279CD97C */  
/* 0041C91C 0399E021 */  
/* 0041C920 27BDFF88 */  addiu $sp, $sp, -0x78
/* 0041C924 8F8E8DE8 */  lw     $t6, %got(proc_to_print)($gp)
/* 0041C928 24010020 */  li    $at, 32
/* 0041C92C AFBF0044 */  sw    $ra, 0x44($sp)
/* 0041C930 91CE0000 */  lbu   $t6, ($t6)
/* 0041C934 AFBE0040 */  sw    $fp, 0x40($sp)
/* 0041C938 AFBC003C */  sw    $gp, 0x3c($sp)
/* 0041C93C AFB70038 */  sw    $s7, 0x38($sp)
/* 0041C940 AFB60034 */  sw    $s6, 0x34($sp)
/* 0041C944 AFB50030 */  sw    $s5, 0x30($sp)
/* 0041C948 AFB4002C */  sw    $s4, 0x2c($sp)
/* 0041C94C AFB30028 */  sw    $s3, 0x28($sp)
/* 0041C950 AFB20024 */  sw    $s2, 0x24($sp)
/* 0041C954 AFB10020 */  sw    $s1, 0x20($sp)
/* 0041C958 11C10005 */  beq   $t6, $at, .L0041C970
/* 0041C95C AFB0001C */   sw    $s0, 0x1c($sp)
/* 0041C960 8F8F8A8C */  lw     $t7, %got(at_proc_to_print)($gp)
/* 0041C964 91EF0000 */  lbu   $t7, ($t7)
/* 0041C968 51E002F2 */  beql  $t7, $zero, .L0041D534
/* 0041C96C 8FBF0044 */   lw    $ra, 0x44($sp)
.L0041C970:
/* 0041C970 8F8289E4 */  lw     $v0, %got(oldbitposcount)($gp)
/* 0041C974 0000F025 */  move  $fp, $zero
/* 0041C978 24170024 */  li    $s7, 36
/* 0041C97C 8C420000 */  lw    $v0, ($v0)
/* 0041C980 2442FFFF */  addiu $v0, $v0, -1
/* 0041C984 044001AB */  bltz  $v0, .L0041D034
/* 0041C988 24420001 */   addiu $v0, $v0, 1
/* 0041C98C AFA2004C */  sw    $v0, 0x4c($sp)
/* 0041C990 8F958CCC */  lw     $s5, %got(list)($gp)
.L0041C994:
/* 0041C994 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 0041C998 03C02025 */  move  $a0, $fp
/* 0041C99C 8F858D28 */  lw     $a1, %got(iscolored12)($gp)
/* 0041C9A0 0320F809 */  jalr  $t9
/* 0041C9A4 00000000 */   nop   
/* 0041C9A8 1440000D */  bnez  $v0, .L0041C9E0
/* 0041C9AC 8FBC003C */   lw    $gp, 0x3c($sp)
/* 0041C9B0 8F988D74 */  lw     $t8, %got(r2bitpos)($gp)
/* 0041C9B4 8F180000 */  lw    $t8, ($t8)
/* 0041C9B8 13D80009 */  beq   $fp, $t8, .L0041C9E0
/* 0041C9BC 00000000 */   nop   
/* 0041C9C0 8F998D74 */  lw     $t9, %got(r2bitpos)($gp)
/* 0041C9C4 8F390004 */  lw    $t9, 4($t9)
/* 0041C9C8 13D90005 */  beq   $fp, $t9, .L0041C9E0
/* 0041C9CC 00000000 */   nop   
/* 0041C9D0 8F898D74 */  lw     $t1, %got(r2bitpos)($gp)
/* 0041C9D4 8D290008 */  lw    $t1, 8($t1)
/* 0041C9D8 57C90193 */  bnel  $fp, $t1, .L0041D028
/* 0041C9DC 8FAD004C */   lw    $t5, 0x4c($sp)
.L0041C9E0:
/* 0041C9E0 8F8A89EC */  lw     $t2, %got(bittab)($gp)
/* 0041C9E4 001E58C0 */  sll   $t3, $fp, 3
/* 0041C9E8 8D4A0000 */  lw    $t2, ($t2)
/* 0041C9EC 014B6021 */  addu  $t4, $t2, $t3
/* 0041C9F0 8D960004 */  lw    $s6, 4($t4)
/* 0041C9F4 52C0018C */  beql  $s6, $zero, .L0041D028
/* 0041C9F8 8FAD004C */   lw    $t5, 0x4c($sp)
.L0041C9FC:
/* 0041C9FC 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041CA00 8F858044 */  lw    $a1, %got(RO_1000AC2E)($gp)
/* 0041CA04 8EA40000 */  lw    $a0, ($s5)
/* 0041CA08 2406000D */  li    $a2, 13
/* 0041CA0C 2407000D */  li    $a3, 13
/* 0041CA10 0320F809 */  jalr  $t9
/* 0041CA14 24A5AC2E */   addiu $a1, %lo(RO_1000AC2E) # addiu $a1, $a1, -0x53d2
/* 0041CA18 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CA1C 8ECD0000 */  lw    $t5, ($s6)
/* 0041CA20 8EA40000 */  lw    $a0, ($s5)
/* 0041CA24 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041CA28 24060001 */  li    $a2, 1
/* 0041CA2C 2407000A */  li    $a3, 10
/* 0041CA30 0320F809 */  jalr  $t9
/* 0041CA34 95A50004 */   lhu   $a1, 4($t5)
/* 0041CA38 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CA3C 8EB30000 */  lw    $s3, ($s5)
/* 0041CA40 2405007C */  li    $a1, 124
/* 0041CA44 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041CA48 24060001 */  li    $a2, 1
/* 0041CA4C 2407000A */  li    $a3, 10
/* 0041CA50 0320F809 */  jalr  $t9
/* 0041CA54 02602025 */   move  $a0, $s3
/* 0041CA58 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CA5C 8ECE0000 */  lw    $t6, ($s6)
/* 0041CA60 02602025 */  move  $a0, $s3
/* 0041CA64 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041CA68 24060001 */  li    $a2, 1
/* 0041CA6C 2407000A */  li    $a3, 10
/* 0041CA70 0320F809 */  jalr  $t9
/* 0041CA74 95C50006 */   lhu   $a1, 6($t6)
/* 0041CA78 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CA7C 8EB30000 */  lw    $s3, ($s5)
/* 0041CA80 2405007D */  li    $a1, 125
/* 0041CA84 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041CA88 24060001 */  li    $a2, 1
/* 0041CA8C 2407000A */  li    $a3, 10
/* 0041CA90 0320F809 */  jalr  $t9
/* 0041CA94 02602025 */   move  $a0, $s3
/* 0041CA98 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CA9C 02602025 */  move  $a0, $s3
/* 0041CAA0 8EC50004 */  lw    $a1, 4($s6)
/* 0041CAA4 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041CAA8 2406000C */  li    $a2, 12
/* 0041CAAC 2407000A */  li    $a3, 10
/* 0041CAB0 0320F809 */  jalr  $t9
/* 0041CAB4 00000000 */   nop   
/* 0041CAB8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CABC 8EA40000 */  lw    $a0, ($s5)
/* 0041CAC0 82C50020 */  lb    $a1, 0x20($s6)
/* 0041CAC4 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041CAC8 2406000C */  li    $a2, 12
/* 0041CACC 2407000A */  li    $a3, 10
/* 0041CAD0 0320F809 */  jalr  $t9
/* 0041CAD4 00000000 */   nop   
/* 0041CAD8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CADC 8EA40000 */  lw    $a0, ($s5)
/* 0041CAE0 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041CAE4 0320F809 */  jalr  $t9
/* 0041CAE8 00000000 */   nop   
/* 0041CAEC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CAF0 2406000C */  li    $a2, 12
/* 0041CAF4 2407000C */  li    $a3, 12
/* 0041CAF8 8F8F89E8 */  lw     $t7, %got(firstconstbit)($gp)
/* 0041CAFC 8DEF0000 */  lw    $t7, ($t7)
/* 0041CB00 03CF082A */  slt   $at, $fp, $t7
/* 0041CB04 1420006D */  bnez  $at, .L0041CCBC
/* 0041CB08 00000000 */   nop   
/* 0041CB0C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041CB10 8F858044 */  lw    $a1, %got(RO_1000AC22)($gp)
/* 0041CB14 8EA40000 */  lw    $a0, ($s5)
/* 0041CB18 0320F809 */  jalr  $t9
/* 0041CB1C 24A5AC22 */   addiu $a1, %lo(RO_1000AC22) # addiu $a1, $a1, -0x53de
/* 0041CB20 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CB24 8EA40000 */  lw    $a0, ($s5)
/* 0041CB28 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041CB2C 0320F809 */  jalr  $t9
/* 0041CB30 00000000 */   nop   
/* 0041CB34 8EC80000 */  lw    $t0, ($s6)
/* 0041CB38 24010002 */  li    $at, 2
/* 0041CB3C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CB40 91180000 */  lbu   $t8, ($t0)
/* 0041CB44 2406000C */  li    $a2, 12
/* 0041CB48 2407000A */  li    $a3, 10
/* 0041CB4C 53010017 */  beql  $t8, $at, .L0041CBAC
/* 0041CB50 91090001 */   lbu   $t1, 1($t0)
/* 0041CB54 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041CB58 8D05001C */  lw    $a1, 0x1c($t0)
/* 0041CB5C 8EA40000 */  lw    $a0, ($s5)
/* 0041CB60 0320F809 */  jalr  $t9
/* 0041CB64 00052AC2 */   srl   $a1, $a1, 0xb
/* 0041CB68 8ED90000 */  lw    $t9, ($s6)
/* 0041CB6C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CB70 8EA40000 */  lw    $a0, ($s5)
/* 0041CB74 8F250010 */  lw    $a1, 0x10($t9)
/* 0041CB78 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041CB7C 2406000C */  li    $a2, 12
/* 0041CB80 2407000A */  li    $a3, 10
/* 0041CB84 0320F809 */  jalr  $t9
/* 0041CB88 00000000 */   nop   
/* 0041CB8C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CB90 8EA40000 */  lw    $a0, ($s5)
/* 0041CB94 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041CB98 0320F809 */  jalr  $t9
/* 0041CB9C 00000000 */   nop   
/* 0041CBA0 10000046 */  b     .L0041CCBC
/* 0041CBA4 8FBC003C */   lw    $gp, 0x3c($sp)
/* 0041CBA8 91090001 */  lbu   $t1, 1($t0)
.L0041CBAC:
/* 0041CBAC 3C01BFA0 */  lui   $at, 0xbfa0
/* 0041CBB0 2406000C */  li    $a2, 12
/* 0041CBB4 2D2A0020 */  sltiu $t2, $t1, 0x20
/* 0041CBB8 000A5823 */  negu  $t3, $t2
/* 0041CBBC 01616024 */  and   $t4, $t3, $at
/* 0041CBC0 012C6804 */  sllv  $t5, $t4, $t1
/* 0041CBC4 05A3000E */  bgezl $t5, .L0041CC00
/* 0041CBC8 95020010 */   lhu   $v0, 0x10($t0)
/* 0041CBCC 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041CBD0 8EA40000 */  lw    $a0, ($s5)
/* 0041CBD4 8D050010 */  lw    $a1, 0x10($t0)
/* 0041CBD8 0320F809 */  jalr  $t9
/* 0041CBDC 2407000A */   li    $a3, 10
/* 0041CBE0 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CBE4 8EA40000 */  lw    $a0, ($s5)
/* 0041CBE8 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041CBEC 0320F809 */  jalr  $t9
/* 0041CBF0 00000000 */   nop   
/* 0041CBF4 10000031 */  b     .L0041CCBC
/* 0041CBF8 8FBC003C */   lw    $gp, 0x3c($sp)
/* 0041CBFC 95020010 */  lhu   $v0, 0x10($t0)
.L0041CC00:
/* 0041CC00 8F918988 */  lw     $s1, %got(realstore)($gp)
/* 0041CC04 04410003 */  bgez  $v0, .L0041CC14
/* 0041CC08 00021A03 */   sra   $v1, $v0, 8
/* 0041CC0C 244100FF */  addiu $at, $v0, 0xff
/* 0041CC10 00011A03 */  sra   $v1, $at, 8
.L0041CC14:
/* 0041CC14 304400FF */  andi  $a0, $v0, 0xff
/* 0041CC18 18600012 */  blez  $v1, .L0041CC64
/* 0041CC1C 8E310000 */   lw    $s1, ($s1)
/* 0041CC20 24740001 */  addiu $s4, $v1, 1
/* 0041CC24 2683FFFF */  addiu $v1, $s4, -1
/* 0041CC28 30630003 */  andi  $v1, $v1, 3
/* 0041CC2C 10600007 */  beqz  $v1, .L0041CC4C
/* 0041CC30 24100001 */   li    $s0, 1
/* 0041CC34 24620001 */  addiu $v0, $v1, 1
.L0041CC38:
/* 0041CC38 26100001 */  addiu $s0, $s0, 1
/* 0041CC3C 1450FFFE */  bne   $v0, $s0, .L0041CC38
/* 0041CC40 8E310100 */   lw    $s1, 0x100($s1)
/* 0041CC44 52140008 */  beql  $s0, $s4, .L0041CC68
/* 0041CC48 95140012 */   lhu   $s4, 0x12($t0)
.L0041CC4C:
/* 0041CC4C 8E310100 */  lw    $s1, 0x100($s1)
/* 0041CC50 26100004 */  addiu $s0, $s0, 4
/* 0041CC54 8E310100 */  lw    $s1, 0x100($s1)
/* 0041CC58 8E310100 */  lw    $s1, 0x100($s1)
/* 0041CC5C 1614FFFB */  bne   $s0, $s4, .L0041CC4C
/* 0041CC60 8E310100 */   lw    $s1, 0x100($s1)
.L0041CC64:
/* 0041CC64 95140012 */  lhu   $s4, 0x12($t0)
.L0041CC68:
/* 0041CC68 02249021 */  addu  $s2, $s1, $a0
/* 0041CC6C 26520001 */  addiu $s2, $s2, 1
/* 0041CC70 1A80000D */  blez  $s4, .L0041CCA8
/* 0041CC74 24100001 */   li    $s0, 1
/* 0041CC78 26940001 */  addiu $s4, $s4, 1
/* 0041CC7C 8EB30000 */  lw    $s3, ($s5)
.L0041CC80:
/* 0041CC80 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041CC84 02602025 */  move  $a0, $s3
/* 0041CC88 9245FFFF */  lbu   $a1, -1($s2)
/* 0041CC8C 24060001 */  li    $a2, 1
/* 0041CC90 0320F809 */  jalr  $t9
/* 0041CC94 2407000A */   li    $a3, 10
/* 0041CC98 26100001 */  addiu $s0, $s0, 1
/* 0041CC9C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CCA0 1614FFF7 */  bne   $s0, $s4, .L0041CC80
/* 0041CCA4 26520001 */   addiu $s2, $s2, 1
.L0041CCA8:
/* 0041CCA8 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041CCAC 8EA40000 */  lw    $a0, ($s5)
/* 0041CCB0 0320F809 */  jalr  $t9
/* 0041CCB4 00000000 */   nop   
/* 0041CCB8 8FBC003C */  lw    $gp, 0x3c($sp)
.L0041CCBC:
/* 0041CCBC 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041CCC0 8F858044 */  lw    $a1, %got(RO_1000AC10)($gp)
/* 0041CCC4 8EA40000 */  lw    $a0, ($s5)
/* 0041CCC8 24060012 */  li    $a2, 18
/* 0041CCCC 24070012 */  li    $a3, 18
/* 0041CCD0 0320F809 */  jalr  $t9
/* 0041CCD4 24A5AC10 */   addiu $a1, %lo(RO_1000AC10) # addiu $a1, $a1, -0x53f0
/* 0041CCD8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CCDC 8EA40000 */  lw    $a0, ($s5)
/* 0041CCE0 8EC50030 */  lw    $a1, 0x30($s6)
/* 0041CCE4 8F99887C */  lw    $t9, %call16(write_real)($gp)
/* 0041CCE8 2406000F */  li    $a2, 15
/* 0041CCEC 2407FFFF */  li    $a3, -1
/* 0041CCF0 0320F809 */  jalr  $t9
/* 0041CCF4 00000000 */   nop   
/* 0041CCF8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CCFC 8EB30000 */  lw    $s3, ($s5)
/* 0041CD00 92C50022 */  lbu   $a1, 0x22($s6)
/* 0041CD04 8F998880 */  lw    $t9, %call16(write_boolean)($gp)
/* 0041CD08 24060006 */  li    $a2, 6
/* 0041CD0C 2407000A */  li    $a3, 10
/* 0041CD10 0320F809 */  jalr  $t9
/* 0041CD14 02602025 */   move  $a0, $s3
/* 0041CD18 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CD1C 02602025 */  move  $a0, $s3
/* 0041CD20 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041CD24 0320F809 */  jalr  $t9
/* 0041CD28 00000000 */   nop   
/* 0041CD2C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CD30 8EA40000 */  lw    $a0, ($s5)
/* 0041CD34 2406000C */  li    $a2, 12
/* 0041CD38 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041CD3C 8F858044 */  lw    $a1, %got(RO_1000AC04)($gp)
/* 0041CD40 2407000C */  li    $a3, 12
/* 0041CD44 0320F809 */  jalr  $t9
/* 0041CD48 24A5AC04 */   addiu $a1, %lo(RO_1000AC04) # addiu $a1, $a1, -0x53fc
/* 0041CD4C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CD50 24100001 */  li    $s0, 1
/* 0041CD54 2E0E0040 */  sltiu $t6, $s0, 0x40
.L0041CD58:
/* 0041CD58 11C00006 */  beqz  $t6, .L0041CD74
/* 0041CD5C 00107943 */   sra   $t7, $s0, 5
/* 0041CD60 000FC080 */  sll   $t8, $t7, 2
/* 0041CD64 02D8C821 */  addu  $t9, $s6, $t8
/* 0041CD68 8F2A0028 */  lw    $t2, 0x28($t9)
/* 0041CD6C 020A5804 */  sllv  $t3, $t2, $s0
/* 0041CD70 296E0000 */  slti  $t6, $t3, 0
.L0041CD74:
/* 0041CD74 11C00007 */  beqz  $t6, .L0041CD94
/* 0041CD78 02002825 */   move  $a1, $s0
/* 0041CD7C 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041CD80 8EA40000 */  lw    $a0, ($s5)
/* 0041CD84 24060003 */  li    $a2, 3
/* 0041CD88 0320F809 */  jalr  $t9
/* 0041CD8C 2407000A */   li    $a3, 10
/* 0041CD90 8FBC003C */  lw    $gp, 0x3c($sp)
.L0041CD94:
/* 0041CD94 26100001 */  addiu $s0, $s0, 1
/* 0041CD98 5617FFEF */  bnel  $s0, $s7, .L0041CD58
/* 0041CD9C 2E0E0040 */   sltiu $t6, $s0, 0x40
/* 0041CDA0 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041CDA4 8EB30000 */  lw    $s3, ($s5)
/* 0041CDA8 2405005D */  li    $a1, 93
/* 0041CDAC 24060001 */  li    $a2, 1
/* 0041CDB0 2407000A */  li    $a3, 10
/* 0041CDB4 0320F809 */  jalr  $t9
/* 0041CDB8 02602025 */   move  $a0, $s3
/* 0041CDBC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CDC0 02602025 */  move  $a0, $s3
/* 0041CDC4 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041CDC8 0320F809 */  jalr  $t9
/* 0041CDCC 00000000 */   nop   
/* 0041CDD0 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CDD4 8EA40000 */  lw    $a0, ($s5)
/* 0041CDD8 24060014 */  li    $a2, 20
/* 0041CDDC 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041CDE0 8F858044 */  lw    $a1, %got(RO_1000ABF0)($gp)
/* 0041CDE4 24070014 */  li    $a3, 20
/* 0041CDE8 0320F809 */  jalr  $t9
/* 0041CDEC 24A5ABF0 */   addiu $a1, %lo(RO_1000ABF0) # addiu $a1, $a1, -0x5410
/* 0041CDF0 8ED00038 */  lw    $s0, 0x38($s6)
/* 0041CDF4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CDF8 1200000E */  beqz  $s0, .L0041CE34
/* 0041CDFC 00000000 */   nop   
/* 0041CE00 8E020000 */  lw    $v0, ($s0)
.L0041CE04:
/* 0041CE04 24060005 */  li    $a2, 5
/* 0041CE08 50400008 */  beql  $v0, $zero, .L0041CE2C
/* 0041CE0C 8E100004 */   lw    $s0, 4($s0)
/* 0041CE10 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041CE14 8EA40000 */  lw    $a0, ($s5)
/* 0041CE18 8C450004 */  lw    $a1, 4($v0)
/* 0041CE1C 0320F809 */  jalr  $t9
/* 0041CE20 2407000A */   li    $a3, 10
/* 0041CE24 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CE28 8E100004 */  lw    $s0, 4($s0)
.L0041CE2C:
/* 0041CE2C 5600FFF5 */  bnezl $s0, .L0041CE04
/* 0041CE30 8E020000 */   lw    $v0, ($s0)
.L0041CE34:
/* 0041CE34 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041CE38 8EA40000 */  lw    $a0, ($s5)
/* 0041CE3C 0320F809 */  jalr  $t9
/* 0041CE40 00000000 */   nop   
/* 0041CE44 8ED00008 */  lw    $s0, 8($s6)
/* 0041CE48 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CE4C 1200005E */  beqz  $s0, .L0041CFC8
/* 0041CE50 00000000 */   nop   
.L0041CE54:
/* 0041CE54 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041CE58 8F858044 */  lw    $a1, %got(RO_1000ABE5)($gp)
/* 0041CE5C 8EA40000 */  lw    $a0, ($s5)
/* 0041CE60 2406000B */  li    $a2, 11
/* 0041CE64 2407000B */  li    $a3, 11
/* 0041CE68 0320F809 */  jalr  $t9
/* 0041CE6C 24A5ABE5 */   addiu $a1, %lo(RO_1000ABE5) # addiu $a1, $a1, -0x541b
/* 0041CE70 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CE74 8E090000 */  lw    $t1, ($s0)
/* 0041CE78 8EA40000 */  lw    $a0, ($s5)
/* 0041CE7C 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041CE80 24060004 */  li    $a2, 4
/* 0041CE84 2407000A */  li    $a3, 10
/* 0041CE88 0320F809 */  jalr  $t9
/* 0041CE8C 95250008 */   lhu   $a1, 8($t1)
/* 0041CE90 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CE94 8EA40000 */  lw    $a0, ($s5)
/* 0041CE98 96050010 */  lhu   $a1, 0x10($s0)
/* 0041CE9C 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041CEA0 24060003 */  li    $a2, 3
/* 0041CEA4 2407000A */  li    $a3, 10
/* 0041CEA8 0320F809 */  jalr  $t9
/* 0041CEAC 00000000 */   nop   
/* 0041CEB0 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CEB4 8EA40000 */  lw    $a0, ($s5)
/* 0041CEB8 92050012 */  lbu   $a1, 0x12($s0)
/* 0041CEBC 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041CEC0 24060003 */  li    $a2, 3
/* 0041CEC4 2407000A */  li    $a3, 10
/* 0041CEC8 0320F809 */  jalr  $t9
/* 0041CECC 00000000 */   nop   
/* 0041CED0 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CED4 8EA40000 */  lw    $a0, ($s5)
/* 0041CED8 92050013 */  lbu   $a1, 0x13($s0)
/* 0041CEDC 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041CEE0 24060003 */  li    $a2, 3
/* 0041CEE4 2407000A */  li    $a3, 10
/* 0041CEE8 0320F809 */  jalr  $t9
/* 0041CEEC 00000000 */   nop   
/* 0041CEF0 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CEF4 8EA40000 */  lw    $a0, ($s5)
/* 0041CEF8 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041CEFC 0320F809 */  jalr  $t9
/* 0041CF00 00000000 */   nop   
/* 0041CF04 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CF08 8EA40000 */  lw    $a0, ($s5)
/* 0041CF0C 2406002A */  li    $a2, 42
/* 0041CF10 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041CF14 8F858044 */  lw    $a1, %got(RO_1000ABBB)($gp)
/* 0041CF18 2407002A */  li    $a3, 42
/* 0041CF1C 0320F809 */  jalr  $t9
/* 0041CF20 24A5ABBB */   addiu $a1, %lo(RO_1000ABBB) # addiu $a1, $a1, -0x5445
/* 0041CF24 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CF28 8EB30000 */  lw    $s3, ($s5)
/* 0041CF2C 92050014 */  lbu   $a1, 0x14($s0)
/* 0041CF30 8F998880 */  lw    $t9, %call16(write_boolean)($gp)
/* 0041CF34 24060006 */  li    $a2, 6
/* 0041CF38 2407000A */  li    $a3, 10
/* 0041CF3C 0320F809 */  jalr  $t9
/* 0041CF40 02602025 */   move  $a0, $s3
/* 0041CF44 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CF48 02602025 */  move  $a0, $s3
/* 0041CF4C 92050017 */  lbu   $a1, 0x17($s0)
/* 0041CF50 8F998880 */  lw    $t9, %call16(write_boolean)($gp)
/* 0041CF54 24060006 */  li    $a2, 6
/* 0041CF58 2407000A */  li    $a3, 10
/* 0041CF5C 0320F809 */  jalr  $t9
/* 0041CF60 00000000 */   nop   
/* 0041CF64 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CF68 02602025 */  move  $a0, $s3
/* 0041CF6C 92050015 */  lbu   $a1, 0x15($s0)
/* 0041CF70 8F998880 */  lw    $t9, %call16(write_boolean)($gp)
/* 0041CF74 24060006 */  li    $a2, 6
/* 0041CF78 2407000A */  li    $a3, 10
/* 0041CF7C 0320F809 */  jalr  $t9
/* 0041CF80 00000000 */   nop   
/* 0041CF84 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CF88 02602025 */  move  $a0, $s3
/* 0041CF8C 92050016 */  lbu   $a1, 0x16($s0)
/* 0041CF90 8F998880 */  lw    $t9, %call16(write_boolean)($gp)
/* 0041CF94 24060006 */  li    $a2, 6
/* 0041CF98 2407000A */  li    $a3, 10
/* 0041CF9C 0320F809 */  jalr  $t9
/* 0041CFA0 00000000 */   nop   
/* 0041CFA4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CFA8 02602025 */  move  $a0, $s3
/* 0041CFAC 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041CFB0 0320F809 */  jalr  $t9
/* 0041CFB4 00000000 */   nop   
/* 0041CFB8 8E100004 */  lw    $s0, 4($s0)
/* 0041CFBC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CFC0 1600FFA4 */  bnez  $s0, .L0041CE54
/* 0041CFC4 00000000 */   nop   
.L0041CFC8:
/* 0041CFC8 8F9981A0 */  lw    $t9, %call16(bvectempty)($gp)
/* 0041CFCC 26D0000C */  addiu $s0, $s6, 0xc
/* 0041CFD0 02002025 */  move  $a0, $s0
/* 0041CFD4 0320F809 */  jalr  $t9
/* 0041CFD8 00000000 */   nop   
/* 0041CFDC 1440000E */  bnez  $v0, .L0041D018
/* 0041CFE0 8FBC003C */   lw    $gp, 0x3c($sp)
/* 0041CFE4 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041CFE8 8F858044 */  lw    $a1, %got(RO_1000ABA7)($gp)
/* 0041CFEC 8EA40000 */  lw    $a0, ($s5)
/* 0041CFF0 24060014 */  li    $a2, 20
/* 0041CFF4 24070014 */  li    $a3, 20
/* 0041CFF8 0320F809 */  jalr  $t9
/* 0041CFFC 24A5ABA7 */   addiu $a1, %lo(RO_1000ABA7) # addiu $a1, $a1, -0x5459
/* 0041D000 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D004 02002025 */  move  $a0, $s0
/* 0041D008 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041D00C 0320F809 */  jalr  $t9
/* 0041D010 00000000 */   nop   
/* 0041D014 8FBC003C */  lw    $gp, 0x3c($sp)
.L0041D018:
/* 0041D018 8ED60034 */  lw    $s6, 0x34($s6)
/* 0041D01C 16C0FE77 */  bnez  $s6, .L0041C9FC
/* 0041D020 00000000 */   nop   
/* 0041D024 8FAD004C */  lw    $t5, 0x4c($sp)
.L0041D028:
/* 0041D028 27DE0001 */  addiu $fp, $fp, 1
/* 0041D02C 17CDFE59 */  bne   $fp, $t5, .L0041C994
/* 0041D030 00000000 */   nop   
.L0041D034:
/* 0041D034 8F9689AC */  lw     $s6, %got(graphhead)($gp)
/* 0041D038 8F958CCC */  lw     $s5, %got(list)($gp)
/* 0041D03C 24170024 */  li    $s7, 36
/* 0041D040 8ED60000 */  lw    $s6, ($s6)
/* 0041D044 241E0090 */  li    $fp, 144
/* 0041D048 52C0013A */  beql  $s6, $zero, .L0041D534
/* 0041D04C 8FBF0044 */   lw    $ra, 0x44($sp)
.L0041D050:
/* 0041D050 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041D054 8F858044 */  lw    $a1, %got(RO_1000AB9D)($gp)
/* 0041D058 8EA40000 */  lw    $a0, ($s5)
/* 0041D05C 2406000A */  li    $a2, 10
/* 0041D060 2407000A */  li    $a3, 10
/* 0041D064 0320F809 */  jalr  $t9
/* 0041D068 24A5AB9D */   addiu $a1, %lo(RO_1000AB9D) # addiu $a1, $a1, -0x5463
/* 0041D06C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D070 8EA40000 */  lw    $a0, ($s5)
/* 0041D074 96C50008 */  lhu   $a1, 8($s6)
/* 0041D078 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041D07C 24060004 */  li    $a2, 4
/* 0041D080 2407000A */  li    $a3, 10
/* 0041D084 0320F809 */  jalr  $t9
/* 0041D088 00000000 */   nop   
/* 0041D08C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D090 8EA40000 */  lw    $a0, ($s5)
/* 0041D094 2406000B */  li    $a2, 11
/* 0041D098 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041D09C 8F858044 */  lw    $a1, %got(RO_1000AB92)($gp)
/* 0041D0A0 2407000B */  li    $a3, 11
/* 0041D0A4 0320F809 */  jalr  $t9
/* 0041D0A8 24A5AB92 */   addiu $a1, %lo(RO_1000AB92) # addiu $a1, $a1, -0x546e
/* 0041D0AC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D0B0 8EA40000 */  lw    $a0, ($s5)
/* 0041D0B4 92C5000A */  lbu   $a1, 0xa($s6)
/* 0041D0B8 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041D0BC 2406000C */  li    $a2, 12
/* 0041D0C0 2407000A */  li    $a3, 10
/* 0041D0C4 0320F809 */  jalr  $t9
/* 0041D0C8 00000000 */   nop   
/* 0041D0CC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D0D0 8EB30000 */  lw    $s3, ($s5)
/* 0041D0D4 240F000A */  li    $t7, 10
/* 0041D0D8 8F998870 */  lw    $t9, %call16(write_enum)($gp)
/* 0041D0DC 8F868044 */  lw    $a2, %got(D_10010450)($gp)
/* 0041D0E0 AFAF0010 */  sw    $t7, 0x10($sp)
/* 0041D0E4 92C50005 */  lbu   $a1, 5($s6)
/* 0041D0E8 00003825 */  move  $a3, $zero
/* 0041D0EC 02602025 */  move  $a0, $s3
/* 0041D0F0 0320F809 */  jalr  $t9
/* 0041D0F4 24C60450 */   addiu $a2, %lo(D_10010450) # addiu $a2, $a2, 0x450
/* 0041D0F8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D0FC 02602025 */  move  $a0, $s3
/* 0041D100 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041D104 0320F809 */  jalr  $t9
/* 0041D108 00000000 */   nop   
/* 0041D10C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D110 24100001 */  li    $s0, 1
/* 0041D114 26D10004 */  addiu $s1, $s6, 4
.L0041D118:
/* 0041D118 8E380040 */  lw    $t8, 0x40($s1)
/* 0041D11C 02002825 */  move  $a1, $s0
/* 0041D120 53000008 */  beql  $t8, $zero, .L0041D144
/* 0041D124 26100001 */   addiu $s0, $s0, 1
/* 0041D128 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041D12C 8EA40000 */  lw    $a0, ($s5)
/* 0041D130 24060006 */  li    $a2, 6
/* 0041D134 0320F809 */  jalr  $t9
/* 0041D138 2407000A */   li    $a3, 10
/* 0041D13C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D140 26100001 */  addiu $s0, $s0, 1
.L0041D144:
/* 0041D144 1617FFF4 */  bne   $s0, $s7, .L0041D118
/* 0041D148 26310004 */   addiu $s1, $s1, 4
/* 0041D14C 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041D150 8EA40000 */  lw    $a0, ($s5)
/* 0041D154 0320F809 */  jalr  $t9
/* 0041D158 00000000 */   nop   
/* 0041D15C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D160 8EB30000 */  lw    $s3, ($s5)
/* 0041D164 24120004 */  li    $s2, 4
/* 0041D168 26D10004 */  addiu $s1, $s6, 4
.L0041D16C:
/* 0041D16C 8E390040 */  lw    $t9, 0x40($s1)
/* 0041D170 02602025 */  move  $a0, $s3
/* 0041D174 53200028 */  beql  $t9, $zero, .L0041D218
/* 0041D178 26520004 */   addiu $s2, $s2, 4
/* 0041D17C 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041D180 2405007B */  li    $a1, 123
/* 0041D184 24060001 */  li    $a2, 1
/* 0041D188 0320F809 */  jalr  $t9
/* 0041D18C 2407000A */   li    $a3, 10
/* 0041D190 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D194 8E2A0040 */  lw    $t2, 0x40($s1)
/* 0041D198 02602025 */  move  $a0, $s3
/* 0041D19C 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041D1A0 24060001 */  li    $a2, 1
/* 0041D1A4 2407000A */  li    $a3, 10
/* 0041D1A8 0320F809 */  jalr  $t9
/* 0041D1AC 95450004 */   lhu   $a1, 4($t2)
/* 0041D1B0 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D1B4 8EB30000 */  lw    $s3, ($s5)
/* 0041D1B8 2405007C */  li    $a1, 124
/* 0041D1BC 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041D1C0 24060001 */  li    $a2, 1
/* 0041D1C4 2407000A */  li    $a3, 10
/* 0041D1C8 0320F809 */  jalr  $t9
/* 0041D1CC 02602025 */   move  $a0, $s3
/* 0041D1D0 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D1D4 8E2B0040 */  lw    $t3, 0x40($s1)
/* 0041D1D8 02602025 */  move  $a0, $s3
/* 0041D1DC 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041D1E0 24060001 */  li    $a2, 1
/* 0041D1E4 2407000A */  li    $a3, 10
/* 0041D1E8 0320F809 */  jalr  $t9
/* 0041D1EC 95650006 */   lhu   $a1, 6($t3)
/* 0041D1F0 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D1F4 8EB30000 */  lw    $s3, ($s5)
/* 0041D1F8 2405007D */  li    $a1, 125
/* 0041D1FC 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041D200 24060001 */  li    $a2, 1
/* 0041D204 2407000A */  li    $a3, 10
/* 0041D208 0320F809 */  jalr  $t9
/* 0041D20C 02602025 */   move  $a0, $s3
/* 0041D210 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D214 26520004 */  addiu $s2, $s2, 4
.L0041D218:
/* 0041D218 165EFFD4 */  bne   $s2, $fp, .L0041D16C
/* 0041D21C 26310004 */   addiu $s1, $s1, 4
/* 0041D220 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041D224 02602025 */  move  $a0, $s3
/* 0041D228 0320F809 */  jalr  $t9
/* 0041D22C 00000000 */   nop   
/* 0041D230 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D234 8EA40000 */  lw    $a0, ($s5)
/* 0041D238 2406000E */  li    $a2, 14
/* 0041D23C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041D240 8F858044 */  lw    $a1, %got(RO_1000AB84)($gp)
/* 0041D244 2407000E */  li    $a3, 14
/* 0041D248 0320F809 */  jalr  $t9
/* 0041D24C 24A5AB84 */   addiu $a1, %lo(RO_1000AB84) # addiu $a1, $a1, -0x547c
/* 0041D250 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D254 24100001 */  li    $s0, 1
/* 0041D258 8F8C8D40 */  lw     $t4, %got(lasteereg)($gp)
/* 0041D25C 8D8C0000 */  lw    $t4, ($t4)
/* 0041D260 19800017 */  blez  $t4, .L0041D2C0
/* 0041D264 AFAC004C */   sw    $t4, 0x4c($sp)
/* 0041D268 258E0001 */  addiu $t6, $t4, 1
/* 0041D26C AFAE004C */  sw    $t6, 0x4c($sp)
/* 0041D270 2E090040 */  sltiu $t1, $s0, 0x40
.L0041D274:
/* 0041D274 11200006 */  beqz  $t1, .L0041D290
/* 0041D278 00106943 */   sra   $t5, $s0, 5
/* 0041D27C 000D7880 */  sll   $t7, $t5, 2
/* 0041D280 02CFC021 */  addu  $t8, $s6, $t7
/* 0041D284 8F190034 */  lw    $t9, 0x34($t8)
/* 0041D288 02195004 */  sllv  $t2, $t9, $s0
/* 0041D28C 29490000 */  slti  $t1, $t2, 0
.L0041D290:
/* 0041D290 11200007 */  beqz  $t1, .L0041D2B0
/* 0041D294 02002825 */   move  $a1, $s0
/* 0041D298 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041D29C 8EA40000 */  lw    $a0, ($s5)
/* 0041D2A0 24060003 */  li    $a2, 3
/* 0041D2A4 0320F809 */  jalr  $t9
/* 0041D2A8 2407000A */   li    $a3, 10
/* 0041D2AC 8FBC003C */  lw    $gp, 0x3c($sp)
.L0041D2B0:
/* 0041D2B0 8FAC004C */  lw    $t4, 0x4c($sp)
/* 0041D2B4 26100001 */  addiu $s0, $s0, 1
/* 0041D2B8 560CFFEE */  bnel  $s0, $t4, .L0041D274
/* 0041D2BC 2E090040 */   sltiu $t1, $s0, 0x40
.L0041D2C0:
/* 0041D2C0 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041D2C4 8EB30000 */  lw    $s3, ($s5)
/* 0041D2C8 2405005D */  li    $a1, 93
/* 0041D2CC 24060001 */  li    $a2, 1
/* 0041D2D0 2407000A */  li    $a3, 10
/* 0041D2D4 0320F809 */  jalr  $t9
/* 0041D2D8 02602025 */   move  $a0, $s3
/* 0041D2DC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D2E0 02602025 */  move  $a0, $s3
/* 0041D2E4 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041D2E8 0320F809 */  jalr  $t9
/* 0041D2EC 00000000 */   nop   
/* 0041D2F0 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D2F4 8EA40000 */  lw    $a0, ($s5)
/* 0041D2F8 2406000E */  li    $a2, 14
/* 0041D2FC 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041D300 8F858044 */  lw    $a1, %got(RO_1000AB76)($gp)
/* 0041D304 2407000E */  li    $a3, 14
/* 0041D308 0320F809 */  jalr  $t9
/* 0041D30C 24A5AB76 */   addiu $a1, %lo(RO_1000AB76) # addiu $a1, $a1, -0x548a
/* 0041D310 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D314 8F8E8D34 */  lw     $t6, %got(firsterreg)($gp)
/* 0041D318 8F948D40 */  lw     $s4, %got(lasteereg)($gp)
/* 0041D31C 8DCE0004 */  lw    $t6, 4($t6)
/* 0041D320 8E940004 */  lw    $s4, 4($s4)
/* 0041D324 AFAE004C */  sw    $t6, 0x4c($sp)
/* 0041D328 028E082A */  slt   $at, $s4, $t6
/* 0041D32C 14200015 */  bnez  $at, .L0041D384
/* 0041D330 01C08025 */   move  $s0, $t6
/* 0041D334 26940001 */  addiu $s4, $s4, 1
/* 0041D338 2E0D0040 */  sltiu $t5, $s0, 0x40
.L0041D33C:
/* 0041D33C 11A00006 */  beqz  $t5, .L0041D358
/* 0041D340 00107943 */   sra   $t7, $s0, 5
/* 0041D344 000FC080 */  sll   $t8, $t7, 2
/* 0041D348 02D8C821 */  addu  $t9, $s6, $t8
/* 0041D34C 8F2A003C */  lw    $t2, 0x3c($t9)
/* 0041D350 020A5804 */  sllv  $t3, $t2, $s0
/* 0041D354 296D0000 */  slti  $t5, $t3, 0
.L0041D358:
/* 0041D358 11A00007 */  beqz  $t5, .L0041D378
/* 0041D35C 02002825 */   move  $a1, $s0
/* 0041D360 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041D364 8EA40000 */  lw    $a0, ($s5)
/* 0041D368 24060003 */  li    $a2, 3
/* 0041D36C 0320F809 */  jalr  $t9
/* 0041D370 2407000A */   li    $a3, 10
/* 0041D374 8FBC003C */  lw    $gp, 0x3c($sp)
.L0041D378:
/* 0041D378 26100001 */  addiu $s0, $s0, 1
/* 0041D37C 5614FFEF */  bnel  $s0, $s4, .L0041D33C
/* 0041D380 2E0D0040 */   sltiu $t5, $s0, 0x40
.L0041D384:
/* 0041D384 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041D388 8EB30000 */  lw    $s3, ($s5)
/* 0041D38C 2405005D */  li    $a1, 93
/* 0041D390 24060001 */  li    $a2, 1
/* 0041D394 2407000A */  li    $a3, 10
/* 0041D398 0320F809 */  jalr  $t9
/* 0041D39C 02602025 */   move  $a0, $s3
/* 0041D3A0 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D3A4 02602025 */  move  $a0, $s3
/* 0041D3A8 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041D3AC 0320F809 */  jalr  $t9
/* 0041D3B0 00000000 */   nop   
/* 0041D3B4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D3B8 8EA40000 */  lw    $a0, ($s5)
/* 0041D3BC 2406000B */  li    $a2, 11
/* 0041D3C0 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041D3C4 8F858044 */  lw    $a1, %got(RO_1000AB6B)($gp)
/* 0041D3C8 2407000B */  li    $a3, 11
/* 0041D3CC 0320F809 */  jalr  $t9
/* 0041D3D0 24A5AB6B */   addiu $a1, %lo(RO_1000AB6B) # addiu $a1, $a1, -0x5495
/* 0041D3D4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D3D8 26C40104 */  addiu $a0, $s6, 0x104
/* 0041D3DC 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041D3E0 0320F809 */  jalr  $t9
/* 0041D3E4 00000000 */   nop   
/* 0041D3E8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D3EC 8EA40000 */  lw    $a0, ($s5)
/* 0041D3F0 2406000B */  li    $a2, 11
/* 0041D3F4 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041D3F8 8F858044 */  lw    $a1, %got(RO_1000AB60)($gp)
/* 0041D3FC 2407000B */  li    $a3, 11
/* 0041D400 0320F809 */  jalr  $t9
/* 0041D404 24A5AB60 */   addiu $a1, %lo(RO_1000AB60) # addiu $a1, $a1, -0x54a0
/* 0041D408 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D40C 26C4010C */  addiu $a0, $s6, 0x10c
/* 0041D410 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041D414 0320F809 */  jalr  $t9
/* 0041D418 00000000 */   nop   
/* 0041D41C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D420 8EA40000 */  lw    $a0, ($s5)
/* 0041D424 2406000C */  li    $a2, 12
/* 0041D428 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041D42C 8F858044 */  lw    $a1, %got(RO_1000AB54)($gp)
/* 0041D430 2407000C */  li    $a3, 12
/* 0041D434 0320F809 */  jalr  $t9
/* 0041D438 24A5AB54 */   addiu $a1, %lo(RO_1000AB54) # addiu $a1, $a1, -0x54ac
/* 0041D43C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D440 26C40114 */  addiu $a0, $s6, 0x114
/* 0041D444 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041D448 0320F809 */  jalr  $t9
/* 0041D44C 00000000 */   nop   
/* 0041D450 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D454 8EA40000 */  lw    $a0, ($s5)
/* 0041D458 2406000B */  li    $a2, 11
/* 0041D45C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041D460 8F858044 */  lw    $a1, %got(RO_1000AB49)($gp)
/* 0041D464 2407000B */  li    $a3, 11
/* 0041D468 0320F809 */  jalr  $t9
/* 0041D46C 24A5AB49 */   addiu $a1, %lo(RO_1000AB49) # addiu $a1, $a1, -0x54b7
/* 0041D470 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D474 26C40134 */  addiu $a0, $s6, 0x134
/* 0041D478 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041D47C 0320F809 */  jalr  $t9
/* 0041D480 00000000 */   nop   
/* 0041D484 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D488 8EA40000 */  lw    $a0, ($s5)
/* 0041D48C 2406000C */  li    $a2, 12
/* 0041D490 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041D494 8F858044 */  lw    $a1, %got(RO_1000AB3D)($gp)
/* 0041D498 2407000C */  li    $a3, 12
/* 0041D49C 0320F809 */  jalr  $t9
/* 0041D4A0 24A5AB3D */   addiu $a1, %lo(RO_1000AB3D) # addiu $a1, $a1, -0x54c3
/* 0041D4A4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D4A8 26C40144 */  addiu $a0, $s6, 0x144
/* 0041D4AC 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041D4B0 0320F809 */  jalr  $t9
/* 0041D4B4 00000000 */   nop   
/* 0041D4B8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D4BC 8EA40000 */  lw    $a0, ($s5)
/* 0041D4C0 2406000D */  li    $a2, 13
/* 0041D4C4 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041D4C8 8F858044 */  lw    $a1, %got(RO_1000AB30)($gp)
/* 0041D4CC 2407000D */  li    $a3, 13
/* 0041D4D0 0320F809 */  jalr  $t9
/* 0041D4D4 24A5AB30 */   addiu $a1, %lo(RO_1000AB30) # addiu $a1, $a1, -0x54d0
/* 0041D4D8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D4DC 26C400F4 */  addiu $a0, $s6, 0xf4
/* 0041D4E0 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041D4E4 0320F809 */  jalr  $t9
/* 0041D4E8 00000000 */   nop   
/* 0041D4EC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D4F0 8EA40000 */  lw    $a0, ($s5)
/* 0041D4F4 24060009 */  li    $a2, 9
/* 0041D4F8 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041D4FC 8F858044 */  lw    $a1, %got(RO_1000AB27)($gp)
/* 0041D500 24070009 */  li    $a3, 9
/* 0041D504 0320F809 */  jalr  $t9
/* 0041D508 24A5AB27 */   addiu $a1, %lo(RO_1000AB27) # addiu $a1, $a1, -0x54d9
/* 0041D50C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D510 26C4012C */  addiu $a0, $s6, 0x12c
/* 0041D514 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041D518 0320F809 */  jalr  $t9
/* 0041D51C 00000000 */   nop   
/* 0041D520 8ED6000C */  lw    $s6, 0xc($s6)
/* 0041D524 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D528 16C0FEC9 */  bnez  $s6, .L0041D050
/* 0041D52C 00000000 */   nop   
/* 0041D530 8FBF0044 */  lw    $ra, 0x44($sp)
.L0041D534:
/* 0041D534 8FB0001C */  lw    $s0, 0x1c($sp)
/* 0041D538 8FB10020 */  lw    $s1, 0x20($sp)
/* 0041D53C 8FB20024 */  lw    $s2, 0x24($sp)
/* 0041D540 8FB30028 */  lw    $s3, 0x28($sp)
/* 0041D544 8FB4002C */  lw    $s4, 0x2c($sp)
/* 0041D548 8FB50030 */  lw    $s5, 0x30($sp)
/* 0041D54C 8FB60034 */  lw    $s6, 0x34($sp)
/* 0041D550 8FB70038 */  lw    $s7, 0x38($sp)
/* 0041D554 8FBE0040 */  lw    $fp, 0x40($sp)
/* 0041D558 03E00008 */  jr    $ra
/* 0041D55C 27BD0078 */   addiu $sp, $sp, 0x78
    .type printregs, @function
    .size printregs, .-printregs
    .end printregs

)"");

/*
00456A2C oneproc
00469280 globalcolor
*/
void printinterproc(void) {
    int i;

    if (proc_to_print[0] == ' ' || at_proc_to_print) {
        if (allcallersave) {
            write_string(list.c_file, "********* regstaken *********", 29, 29);
            writeln(list.c_file);
            for (i = 1; i <= lasteereg[1]; i++) {
                if (curproc->regstaken_parregs->regstaken[i - 1]) {
                    write_integer(list.c_file, i, 3, 10);
                }
            }
            writeln(list.c_file);
            write_string(list.c_file, "========= parregs =========", 27, 27);
            writeln(list.c_file);
            for (i = 1; i <= lasteereg[1]; i++) {
                if (curproc->regstaken_parregs->parregs[i - 1] != -1) {
                    write_integer(list.c_file, i, 12, 10);
                    write_integer(list.c_file, curproc->regstaken_parregs->parregs[i - 1], 12, 10);
                    writeln(list.c_file);
                }
            }
        }
    }
}

/*
00456A2C oneproc
*/
void printsav(void) {
    struct Graphnode *node;
    unsigned char i;

    if (proc_to_print[0] == ' ' || at_proc_to_print) {
        node = graphhead;
        while (node != NULL) {
            write_string(list.c_file, "$ $ $ node", 10, 10);
            write_integer(list.c_file, node->num, 4, 10);
            write_string(list.c_file, " loopdepth ", 11, 11);
            write_integer(list.c_file, node->loopdepth, 12, 10);
            writeln(list.c_file);
            if (node->bvs.stage3.app != 0) {
                write_string(list.c_file, " app:", 5, 5);
                for (i = firsteereg[0]; i < 36; i++) {
                    if (GETBIT32(node->bvs.stage3.app, i - 13)) {
                        write_integer(list.c_file, i, 6, 10);
                    }
                }
                writeln(list.c_file);
            }
            if (node->bvs.stage3.ant != 0) {
                write_string(list.c_file, " ant:", 5, 5);
                for (i = firsteereg[0]; i < 36; i++) {
                    if (GETBIT32(node->bvs.stage3.ant, i - 13)) {
                        write_integer(list.c_file, i, 6, 10);
                    }
                }
                writeln(list.c_file);
            }
            if (node->bvs.stage3.av != 0) {
                write_string(list.c_file, " av:", 4, 4);
                for (i = firsteereg[0]; i < 36; i++) {
                    if (GETBIT32(node->bvs.stage3.av, i - 13)) {
                        write_integer(list.c_file, i, 6, 10);
                    }
                }
                writeln(list.c_file);
            }
            if (node->bvs.stage3.eeantin != 0) {
                write_string(list.c_file, " eeantin:", 9, 9);
                for (i = firsteereg[0]; i < 36; i++) {
                    if (GETBIT32(node->bvs.stage3.eeantin, i - 13)) {
                        write_integer(list.c_file, i, 6, 10);
                    }
                }
                writeln(list.c_file);
            }
            if (node->bvs.stage3.eeantout != 0) {
                write_string(list.c_file, " eeantout:", 10, 10);
                for (i = firsteereg[0]; i < 36; i++) {
                    if (GETBIT32(node->bvs.stage3.eeantout, i - 13)) {
                        write_integer(list.c_file, i, 6, 10);
                    }
                }
                writeln(list.c_file);
            }
            if (node->bvs.stage3.eeavin != 0) {
                write_string(list.c_file, " eeavin:", 8, 8);
                for (i = firsteereg[0]; i < 36; i++) {
                    if (GETBIT32(node->bvs.stage3.eeavin, i - 13)) {
                        write_integer(list.c_file, i, 6, 10);
                    }
                }
                writeln(list.c_file);
            }
            if (node->bvs.stage3.eeavout != 0) {
                write_string(list.c_file, " eeavout:", 9, 9);
                for (i = firsteereg[0]; i < 36; i++) {
                    if (GETBIT32(node->bvs.stage3.eeavout, i - 13)) {
                        write_integer(list.c_file, i, 6, 10);
                    }
                }
                writeln(list.c_file);
            }
            if (node->bvs.stage3.strinsertin != 0) {
                write_string(list.c_file, " strinsertin:", 13, 13);
                for (i = firsteereg[0]; i < 36; i++) {
                    if (GETBIT32(node->bvs.stage3.strinsertin, i - 13)) {
                        write_integer(list.c_file, i, 6, 10);
                    }
                }
                writeln(list.c_file);
            }
            if (node->bvs.stage3.lodinsertout != 0) {
                write_string(list.c_file, " lodinsertout:", 14, 14);
                for (i = firsteereg[0]; i < 36; i++) {
                    if (GETBIT32(node->bvs.stage3.lodinsertout, i - 13)) {
                        write_integer(list.c_file, i, 6, 10);
                    }
                }
                writeln(list.c_file);
            }
            node = node->next;
        }
    }
}

/*
0045806C main
*/
void printstat(void) {
    write_string(list.c_file, "numlcse=", 8, 8);
    write_integer(list.c_file, numlcse, 12, 10);
    write_string(list.c_file, " numlrdstr=", 11, 11);
    write_integer(list.c_file, numlrdstr, 12, 10);
    writeln(list.c_file);
    write_string(list.c_file, "numgcopy=", 9, 9);
    write_integer(list.c_file, numgcopy, 12, 10);
    write_string(list.c_file, " numrdstr=", 10, 10);
    write_integer(list.c_file, numrdstr, 12, 10);
    writeln(list.c_file);
    write_string(list.c_file, "numgcse=", 8, 8);
    write_integer(list.c_file, numgcse, 12, 10);
    write_string(list.c_file, " numinsert=", 11, 11);
    write_integer(list.c_file, numinsert, 12, 10);
    writeln(list.c_file);
    write_string(list.c_file, "numtstrep=", 10, 10);
    write_integer(list.c_file, numtstrep, 12, 10);
    write_string(list.c_file, " numsrinc=", 10, 10);
    write_integer(list.c_file, numsrinc, 12, 10);
    writeln(list.c_file);
    write_string(list.c_file, "total numexpr=", 14, 14);
    write_integer(list.c_file, numexpr, 12, 10);
    write_string(list.c_file, " numstr=", 8, 8);
    write_integer(list.c_file, numstr, 12, 10);
    writeln(list.c_file);
    write_string(list.c_file, "totvarref=", 10, 10);
    write_integer(list.c_file, totvarref, 12, 10);
    write_string(list.c_file, " totvarrref=", 12, 12);
    write_integer(list.c_file, totvarrref, 12, 10);
    writeln(list.c_file);
    write_string(list.c_file, "totvarsav=", 10, 10);
    write_integer(list.c_file, totvarsav, 12, 10);
    write_string(list.c_file, " totvarrsav=", 12, 12);
    write_integer(list.c_file, totvarrsav, 12, 10);
    writeln(list.c_file);
    write_string(list.c_file, "totexpref=", 10, 10);
    write_integer(list.c_file, totexpref, 12, 10);
    write_string(list.c_file, " totexprref=", 12, 12);
    write_integer(list.c_file, totexprref, 12, 10);
    writeln(list.c_file);
    write_string(list.c_file, "totexpsav=", 10, 10);
    write_integer(list.c_file, totexpsav, 12, 10);
    write_string(list.c_file, " totexprsav=", 12, 12);
    write_integer(list.c_file, totexprsav, 12, 10);
    writeln(list.c_file);
    write_integer(list.c_file, totvarrlods + totexprlods, 12, 10);
    write_string(list.c_file, " rlods", 6, 6);
    write_integer(list.c_file, totvarrstrs + totexprstrs, 12, 10);
    write_string(list.c_file, " rstrs", 6, 6);
    writeln(list.c_file);
    write_string(list.c_file, "numcalls=", 9, 9);
    write_integer(list.c_file, numcalls, 12, 10);
    write_string(list.c_file, " contiglr=", 10, 10);
    write_integer(list.c_file, contiglr, 12, 10);
    writeln(list.c_file);
    write_string(list.c_file, "aliasedlr=", 10, 10);
    write_integer(list.c_file, aliasedlr, 12, 10);
    write_string(list.c_file, " aliasedlu=", 11, 11);
    write_integer(list.c_file, aliasedlu, 12, 10);
    writeln(list.c_file);
    write_string(list.c_file, "numlr=", 6, 6);
    write_integer(list.c_file, numlr, 12, 10);
    write_string(list.c_file, " finalnumlr=", 12, 12);
    write_integer(list.c_file, finalnumlr, 12, 10);
    writeln(list.c_file);
    write_string(list.c_file, "numlu=", 6, 6);
    write_integer(list.c_file, numlu, 12, 10);
    write_string(list.c_file, " numsplitlu=", 12, 12);
    write_integer(list.c_file, numsplitlu, 12, 10);
    writeln(list.c_file);
    write_string(list.c_file, "numoc=", 6, 6);
    write_integer(list.c_file, numoc, 12, 10);
    write_string(list.c_file, " allococ", 8, 8);
    write_integer(list.c_file, allococ, 12, 10);
    writeln(list.c_file);
    write_string(list.c_file, "numcoloredlr=", 13, 13);
    write_integer(list.c_file, numcoloredlr, 12, 10);
    write_string(list.c_file, " numcantcoloredlr=", 18, 18);
    write_integer(list.c_file, numcantcoloredlr, 12, 10);
    writeln(list.c_file);
    write_string(list.c_file, "num0occurlr=", 12, 12);
    write_integer(list.c_file, num0occurlr, 12, 10);
    write_string(list.c_file, " aliasedoc=", 11, 11);
    write_integer(list.c_file, aliasedoc, 12, 10);
    writeln(list.c_file);
    write_string(list.c_file, "numsparselr=", 12, 12);
    write_integer(list.c_file, numsparselr, 12, 10);
    write_string(list.c_file, " numnotwellformedlr=", 20, 20);
    write_integer(list.c_file, numnotwellformedlr, 12, 10);
    writeln(list.c_file);
    write_string(list.c_file, "numcalloverheadlr=", 18, 18);
    write_integer(list.c_file, numcalloverheadlr, 12, 10);
    writeln(list.c_file);
    write_string(list.c_file, "lopttime=", 9, 9);
    write_integer(list.c_file, lopttime, 12, 10);
    write_string(list.c_file, " dataflowtime=", 14, 14);
    write_integer(list.c_file, dataflowtime, 12, 10);
    write_string(list.c_file, " regaloctime=", 13, 13);
    write_integer(list.c_file, regaloctime, 12, 10);
    writeln(list.c_file);
    write_string(list.c_file, "Average data flow iterations:", 29, 29);
    write_real(list.c_file, (float)dataflowiter / (float)numdataflow, 15, -1);
    write_string(list.c_file, " out of", 7, 7);
    write_integer(list.c_file, numdataflow, 12, 10);
    write_string(list.c_file, " flow analysis", 14, 14);
    writeln(list.c_file);
}

__asm__(R""(
.set noat
.set noreorder

glabel print_loop_relations
    .ent print_loop_relations
    # 0041EA88 print_loop_relations
    # 00456A2C oneproc
/* 0041EA88 3C1C0FC0 */  .cpload $t9
/* 0041EA8C 279CB808 */  
/* 0041EA90 0399E021 */  
/* 0041EA94 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 0041EA98 AFB50028 */  sw    $s5, 0x28($sp)
/* 0041EA9C AFB30020 */  sw    $s3, 0x20($sp)
/* 0041EAA0 00809825 */  move  $s3, $a0
/* 0041EAA4 00A0A825 */  move  $s5, $a1
/* 0041EAA8 AFBF0034 */  sw    $ra, 0x34($sp)
/* 0041EAAC AFBC0030 */  sw    $gp, 0x30($sp)
/* 0041EAB0 AFB6002C */  sw    $s6, 0x2c($sp)
/* 0041EAB4 AFB40024 */  sw    $s4, 0x24($sp)
/* 0041EAB8 AFB2001C */  sw    $s2, 0x1c($sp)
/* 0041EABC AFB10018 */  sw    $s1, 0x18($sp)
/* 0041EAC0 10800046 */  beqz  $a0, .L0041EBDC
/* 0041EAC4 AFB00014 */   sw    $s0, 0x14($sp)
/* 0041EAC8 24B60001 */  addiu $s6, $a1, 1
/* 0041EACC 8F948CCC */  lw     $s4, %got(list)($gp)
.L0041EAD0:
/* 0041EAD0 1AA0000C */  blez  $s5, .L0041EB04
/* 0041EAD4 24100001 */   li    $s0, 1
/* 0041EAD8 26B20001 */  addiu $s2, $s5, 1
/* 0041EADC 8E910000 */  lw    $s1, ($s4)
.L0041EAE0:
/* 0041EAE0 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041EAE4 02202025 */  move  $a0, $s1
/* 0041EAE8 2405002D */  li    $a1, 45
/* 0041EAEC 24060001 */  li    $a2, 1
/* 0041EAF0 0320F809 */  jalr  $t9
/* 0041EAF4 2407000A */   li    $a3, 10
/* 0041EAF8 26100001 */  addiu $s0, $s0, 1
/* 0041EAFC 1612FFF8 */  bne   $s0, $s2, .L0041EAE0
/* 0041EB00 8FBC0030 */   lw    $gp, 0x30($sp)
.L0041EB04:
/* 0041EB04 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041EB08 8E910000 */  lw    $s1, ($s4)
/* 0041EB0C 24050020 */  li    $a1, 32
/* 0041EB10 24060001 */  li    $a2, 1
/* 0041EB14 2407000A */  li    $a3, 10
/* 0041EB18 0320F809 */  jalr  $t9
/* 0041EB1C 02202025 */   move  $a0, $s1
/* 0041EB20 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041EB24 8E6E0008 */  lw    $t6, 8($s3)
/* 0041EB28 02202025 */  move  $a0, $s1
/* 0041EB2C 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041EB30 24060001 */  li    $a2, 1
/* 0041EB34 2407000A */  li    $a3, 10
/* 0041EB38 0320F809 */  jalr  $t9
/* 0041EB3C 95C50008 */   lhu   $a1, 8($t6)
/* 0041EB40 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041EB44 8E910000 */  lw    $s1, ($s4)
/* 0041EB48 24050028 */  li    $a1, 40
/* 0041EB4C 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041EB50 24060001 */  li    $a2, 1
/* 0041EB54 2407000A */  li    $a3, 10
/* 0041EB58 0320F809 */  jalr  $t9
/* 0041EB5C 02202025 */   move  $a0, $s1
/* 0041EB60 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041EB64 02202025 */  move  $a0, $s1
/* 0041EB68 8E650000 */  lw    $a1, ($s3)
/* 0041EB6C 8F998878 */  lw    $t9, %call16(write_cardinal)($gp)
/* 0041EB70 24060001 */  li    $a2, 1
/* 0041EB74 2407000A */  li    $a3, 10
/* 0041EB78 0320F809 */  jalr  $t9
/* 0041EB7C 00000000 */   nop   
/* 0041EB80 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041EB84 8E910000 */  lw    $s1, ($s4)
/* 0041EB88 24050029 */  li    $a1, 41
/* 0041EB8C 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041EB90 24060001 */  li    $a2, 1
/* 0041EB94 2407000A */  li    $a3, 10
/* 0041EB98 0320F809 */  jalr  $t9
/* 0041EB9C 02202025 */   move  $a0, $s1
/* 0041EBA0 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041EBA4 02202025 */  move  $a0, $s1
/* 0041EBA8 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041EBAC 0320F809 */  jalr  $t9
/* 0041EBB0 00000000 */   nop   
/* 0041EBB4 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041EBB8 8E64000C */  lw    $a0, 0xc($s3)
/* 0041EBBC 02C02825 */  move  $a1, $s6
/* 0041EBC0 8F998260 */  lw    $t9, %call16(print_loop_relations)($gp)
/* 0041EBC4 0320F809 */  jalr  $t9
/* 0041EBC8 00000000 */   nop   
/* 0041EBCC 8E730014 */  lw    $s3, 0x14($s3)
/* 0041EBD0 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041EBD4 1660FFBE */  bnez  $s3, .L0041EAD0
/* 0041EBD8 00000000 */   nop   
.L0041EBDC:
/* 0041EBDC 8FBF0034 */  lw    $ra, 0x34($sp)
/* 0041EBE0 8FB00014 */  lw    $s0, 0x14($sp)
/* 0041EBE4 8FB10018 */  lw    $s1, 0x18($sp)
/* 0041EBE8 8FB2001C */  lw    $s2, 0x1c($sp)
/* 0041EBEC 8FB30020 */  lw    $s3, 0x20($sp)
/* 0041EBF0 8FB40024 */  lw    $s4, 0x24($sp)
/* 0041EBF4 8FB50028 */  lw    $s5, 0x28($sp)
/* 0041EBF8 8FB6002C */  lw    $s6, 0x2c($sp)
/* 0041EBFC 03E00008 */  jr    $ra
/* 0041EC00 27BD0038 */   addiu $sp, $sp, 0x38
    .type print_loop_relations, @function
    .size print_loop_relations, .-print_loop_relations
    .end print_loop_relations
)"");
