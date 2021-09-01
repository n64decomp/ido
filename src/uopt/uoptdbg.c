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
    .ascii "notloopfirstbb\0 loopfirstbb\0canunroll\0\0 \0\0\0\0\0\0\0\0"

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


/*
00456A2C oneproc
*/
void printregs(void) {
    struct LiveUnit *lu; // s0
    int i; // fp
    int j; // s0
    struct LiveRange *lr; //s6
    struct InterfereList *intf; // s0
    struct Graphnode *node; // s6
    int reg; // s0
    struct RealstoreData *real; // s1

    if (proc_to_print[0] == ' ' || at_proc_to_print) {
        for (i = 0; i < oldbitposcount; i++) {
            if (bvectin(i, &iscolored12) || i == r2bitpos[0] || i == r2bitpos[1] || i == r2bitpos[2]) {
                for (lr = bittab[i].liverange; lr != NULL; lr = lr->next) {
                    write_string(list.c_file, ">>>active<<<{", 13, 13);
                    write_integer(list.c_file, lr->ichain->table_index, 1, 10);
                    write_char(list.c_file, '|', 1);
                    write_integer(list.c_file, lr->ichain->chain_index, 1, 10);
                    write_char(list.c_file, '}', 1);
                    write_integer(list.c_file, lr->bitpos, 12, 10);
                    write_integer(list.c_file, lr->assigned_reg, 12, 10);
                    writeln(list.c_file);
                    if (i >= firstconstbit) {
                        write_string(list.c_file, "const------>", 12, 12);
                        writeln(list.c_file);
                        if (lr->ichain->type != isconst) {
                            write_integer(list.c_file, lr->ichain->islda_isilda.address.blockno, 12, 10);
                            write_integer(list.c_file, lr->ichain->islda_isilda.offset, 12, 10);
                            writeln(list.c_file);
                        } else {
                            switch (lr->ichain->dtype) {
                                case Adt:
                                case Fdt:
                                case Gdt:
                                case Hdt:
                                case Idt:
                                case Jdt:
                                case Kdt:
                                case Ldt:
                                case Ndt:
                                    write_integer(list.c_file, lr->ichain->isconst.number.intval, 12, 10);
                                    writeln(list.c_file);
                                    break;

                                default:
                                    real = realstore;
                                    for (j = 0; j < (lr->ichain->isconst.number.real.disp >> 8); j++) {
                                        real = real->next;
                                    }
                                    
                                    for (j = 0; j < lr->ichain->isconst.number.real.len; j++) {
                                        write_char(list.c_file, real->c[(lr->ichain->isconst.number.real.disp & 0xFF) + j], 1);
                                    }
                                    writeln(list.c_file);
                                    break;
                            }
                        }
                    }

                    //fprintf(list.c_file, "%08x%08x\n", lr->forbidden[0], lr->forbidden[1]);
                    //fprintf(list.c_file, "%d", i);
#if 0
                    forbidden_interfere(lr);
#else
                    write_string(list.c_file, "adjsave, hasstore:", 18, 18);
                    write_real(list.c_file, lr->adjsave, 15, -1);
                    write_boolean(list.c_file, lr->hasstore, 6);
                    writeln(list.c_file);

                    write_string(list.c_file, "forbidden: [", 12, 12);
                    for (reg = 1; reg <= 35; reg++) {
                        if (SET_IN(lr->forbidden, reg)) {
                            write_integer(list.c_file, reg, 3, 10);
                        }
                    }
                    write_char(list.c_file, ']', 1);
                    writeln(list.c_file);

                    write_string(list.c_file, ":::interfere with:::", 20, 20);
                    for (intf = lr->interfere; intf != NULL; intf = intf->next) {
                        if (intf->liverange != NULL) {
                            write_integer(list.c_file, intf->liverange->bitpos, 5, 10);
                        }
                    }
                    writeln(list.c_file);
#endif

                    for (lu = lr->liveunits; lu != NULL; lu = lu->next) {
                        write_string(list.c_file, "- live bb -", 11, 11);
                        write_integer(list.c_file, lu->node->num, 4, 10);
                        write_integer(list.c_file, lu->load_count, 3, 10);
                        write_integer(list.c_file, lu->store_count, 3, 10);
                        write_integer(list.c_file, lu->reg, 3, 10);
                        writeln(list.c_file);
                        write_string(list.c_file, "firstisstr deadout needreglod needregsave ", 42, 42);
                        write_boolean(list.c_file, lu->firstisstr, 6);
                        write_boolean(list.c_file, lu->deadout, 6);
                        write_boolean(list.c_file, lu->needreglod, 6);
                        write_boolean(list.c_file, lu->needregsave, 6);
                        writeln(list.c_file);
                    }

                    if (!bvectempty(&lr->unkC)) {
                        write_string(list.c_file, "- live bb (default) ", 20, 20);
                        printbv(&lr->unkC);
                    }
                }
            }
        }

        for (node = graphhead; node != NULL; node = node->next) {
            write_string(list.c_file, "% % % node", 10, 10);
            write_integer(list.c_file, node->num, 4, 10);
            write_string(list.c_file, " loopdepth ", 11, 11);
            write_integer(list.c_file, node->loopdepth, 12, 10);
            write_enum(list.c_file, node->unk5, "notloopfirstbb\0 loopfirstbb\0canunroll\0\0 ", 0);
            writeln(list.c_file);
            
            for (reg = 1; reg <= 35; reg++) {
                if (node->regdata.unk44[reg - 1] != NULL) {
                    write_integer(list.c_file, reg, 6, 10);
                }
            }
            writeln(list.c_file);

            for (reg = 1; reg <= 35; reg++) {
                if (node->regdata.unk44[reg - 1] != NULL) {
                    write_char(list.c_file, '{', 1);
                    write_integer(list.c_file, node->regdata.unk44[reg - 1]->table_index, 1, 10);
                    write_char(list.c_file, '|', 1);
                    write_integer(list.c_file, node->regdata.unk44[reg - 1]->chain_index, 1, 10);
                    write_char(list.c_file, '}', 1);
                }
            }
            writeln(list.c_file);

            write_string(list.c_file, "regsused[1]: [", 14, 14);
            for (reg = 1; reg <= lasteereg[0]; reg++) {
                if (SET_IN(node->regsused[0], reg)) {
                    write_integer(list.c_file, reg, 3, 10);
                }
            }
            write_char(list.c_file, ']', 1);
            writeln(list.c_file);

            write_string(list.c_file, "regsused[2]: [", 14, 14);
            for (reg = firsterreg[1]; reg <= lasteereg[1]; reg++) {
                if (SET_IN(node->regsused[1], reg)) {
                    write_integer(list.c_file, reg, 3, 10);
                }
            }
            write_char(list.c_file, ']', 1);
            writeln(list.c_file);
            write_string(list.c_file, "appear \" \" ", 11, 11);
            printbv(&node->bvs.stage2.appear);
            write_string(list.c_file, "locdef \" \" ", 11, 11);
            printbv(&node->bvs.stage2.locdef);
            write_string(list.c_file, "loclive \" \" ", 12, 12);
            printbv(&node->bvs.stage2.loclive);
            write_string(list.c_file, "active \" \" ", 11, 11);
            printbv(&node->bvs.stage2.active);
            write_string(list.c_file, "liveout \" \" ", 12, 12);
            printbv(&node->bvs.stage2.liveout);
            write_string(list.c_file, "indiracc \" \" ", 13, 13);
            printbv(&node->indiracc);
            write_string(list.c_file, "ppin \" \" ", 9, 9);
            printbv(&node->bvs.stage2.ppin);
        }
    }
}

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
