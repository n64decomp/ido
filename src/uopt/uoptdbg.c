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
RO_1000A7C0:
    # 0041AC2C printtab
    .ascii " [nil]"

RO_1000A7C6:
    # 0041AC2C printtab
    .ascii " ["

RO_1000A7C8:
    # 0041AC2C printtab
    .ascii " [nil]"

RO_1000A7CE:
    # 0041AC2C printtab
    .ascii " ["

RO_1000A7D0:
    # 0041AC2C printtab
    .ascii "] "

RO_1000A7D2:
    # 0041AC2C printtab
    .ascii "] "

RO_1000A7D4:
    # 0041AC2C printtab
    .ascii "ILDA"

RO_1000A7D8:
    # 0041AC2C printtab
    .ascii "nil]"

RO_1000A7DC:
    # 0041AC2C printtab
    .ascii "] ["

RO_1000A7DF:
    # 0041AC2C printtab
    .ascii "nil] ["

RO_1000A7E5:
    # 0041AC2C printtab
    .ascii "uoptdbg.p"

RO_1000A7EE:
    # 0041AC2C printtab
    .ascii "isrconst "

RO_1000A7F7:
    # 0041AC2C printtab
    .ascii "dumped  "

RO_1000A7FF:
    # 0041AC2C printtab
    .ascii "empty   "

RO_1000A807:
    # 0041AC2C printtab
    .ascii "isop    "

RO_1000A80F:
    # 0041AC2C printtab
    .ascii "issvar   "

RO_1000A818:
    # 0041AC2C printtab
    .ascii "isilda   "

RO_1000A821:
    # 0041AC2C printtab
    .ascii "isvar   "

RO_1000A829:
    # 0041AC2C printtab
    .ascii "islda   "

RO_1000A831:
    # 0041AC2C printtab
    .ascii "isconst "

RO_1000A839:
    # 0041AC2C printtab
    .asciz "] "

    .balign 4
jtbl_1000A83C:
    # 0041AC2C printtab
    .gpword .L0041AE7C
    .gpword .L0041ADC8
    .gpword .L0041AD84
    .gpword .L0041ADEC
    .gpword .L0041AE58
    .gpword .L0041AE10
    .gpword .L0041AE34
    .gpword .L0041AEA0
    .gpword .L0041AEC4

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
D_1000FF70:
    # 0041A410 printitab
    # 0041AC2C printtab
    .ascii "uabs\0   uadd\0   uadj\0   uaent\0  uand\0   uaos\0   uasym\0  ubgn\0   ubgnb\0  ubsub\0  ucg1\0   ucg2\0   uchkh\0  uchkl\0  uchkn\0  uchkt\0  ucia\0   uclab\0  uclbd\0  ucomm\0  ucsym\0  uctrl\0  ucubd\0  ucup\0   ucvt\0   ucvtl\0  udec\0   udef\0   udif\0   udiv\0   udup\0   uend\0   uendb\0  uent\0   ueof\0   uequ\0   uesym\0  ufill\0  ufjp\0   ufsym\0  ugeq\0   ugrt\0   ugsym\0  uhsym\0  uicuf\0  uidx\0   uiequ\0  uigeq\0  uigrt\0  uijp\0   uilda\0  uildv\0  uileq\0  uiles\0  uilod\0  uinc\0   uineq\0  uinit\0  uinn\0   uint\0   uior\0   uisld\0  uisst\0  uistr\0  uistv\0  uixa\0   ulab\0   ulbd\0   ulbdy\0  ulbgn\0  ulca\0   ulda\0   uldap\0  uldc\0   uldef\0  uldsp\0  ulend\0  uleq\0   ules\0   ulex\0   ulnot\0  uloc\0   ulod\0   ulsym\0  ultrm\0  umax\0   umin\0   umod\0   umov\0   umovv\0  umpmv\0  umpy\0   umst\0   umus\0   uneg\0   uneq\0   unop\0   unot\0   uodd\0   uoptn\0  upar\0   updef\0  upmov\0  upop\0   uregs\0  urem\0   uret\0   urlda\0  urldc\0  urlod\0  urnd\0   urpar\0  urstr\0  usdef\0  usgs\0   ushl\0   ushr\0   usign\0  usqr\0   usqrt\0  ussym\0  ustep\0  ustp\0   ustr\0   ustsp\0  usub\0   uswp\0   utjp\0   utpeq\0  utpge\0  utpgt\0  utple\0  utplt\0  utpne\0  utyp\0   uubd\0   uujp\0   uunal\0  uuni\0   uvreg\0  uxjp\0   uxor\0   uxpar\0  umtag\0  ualia\0  uildi\0  uisti\0  uirld\0  uirst\0  uldrc\0  umsym\0  urcuf\0  uksym\0  uosym\0  uirlv\0  uirsv\0\0 "

D_10010450:
    # 0041C914 printregs
    .ascii "notloopfirstbb\0 loopfirstbb\0canunroll\0\0 \0\0\0\0\0\0\0\0"

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
                write_integer(list.c_file, ichain->islda_isilda.ichain->table_index, 4, 10);
                write_char(list.c_file, '|', 1);
                write_integer(list.c_file, ichain->islda_isilda.ichain->chain_index, 1, 10);
                write_string(list.c_file, "} ", 2, 2);
                writeln(list.c_file);
            } else if (ichain->type == isvar || ichain->type == issvar) {
                printmtyp(ichain->isvar_issvar.var_data.memtype);
                if (ichain->type == issvar) {
                    write_char(list.c_file, '{', 1);
                    write_integer(list.c_file, ichain->isvar_issvar.ichain->table_index, 4, 10);
                    write_char(list.c_file, '|', 1);
                    write_integer(list.c_file, ichain->isvar_issvar.ichain->chain_index, 1, 10);
                    write_string(list.c_file, "} ", 2, 2);
                }
                write_integer(list.c_file, ichain->isvar_issvar.var_data.blockno, 5, 10);
                write_char(list.c_file, ' ', 1);
                write_integer(list.c_file, ichain->isvar_issvar.var_data.addr, 5, 10);
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

__asm__(R""(
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

glabel printtab
    .ent printtab
    # 00456A2C oneproc
/* 0041AC2C 3C1C0FC0 */  .cpload $t9
/* 0041AC30 279CF664 */  
/* 0041AC34 0399E021 */  
/* 0041AC38 27BDFFB8 */  addiu $sp, $sp, -0x48
/* 0041AC3C 8F8E8DE8 */  lw     $t6, %got(proc_to_print)($gp)
/* 0041AC40 24010020 */  li    $at, 32
/* 0041AC44 AFBF0044 */  sw    $ra, 0x44($sp)
/* 0041AC48 91CE0000 */  lbu   $t6, ($t6)
/* 0041AC4C AFBE0040 */  sw    $fp, 0x40($sp)
/* 0041AC50 AFBC003C */  sw    $gp, 0x3c($sp)
/* 0041AC54 AFB70038 */  sw    $s7, 0x38($sp)
/* 0041AC58 AFB60034 */  sw    $s6, 0x34($sp)
/* 0041AC5C AFB50030 */  sw    $s5, 0x30($sp)
/* 0041AC60 AFB4002C */  sw    $s4, 0x2c($sp)
/* 0041AC64 AFB30028 */  sw    $s3, 0x28($sp)
/* 0041AC68 AFB20024 */  sw    $s2, 0x24($sp)
/* 0041AC6C AFB10020 */  sw    $s1, 0x20($sp)
/* 0041AC70 11C10005 */  beq   $t6, $at, .L0041AC88
/* 0041AC74 AFB0001C */   sw    $s0, 0x1c($sp)
/* 0041AC78 8F8F8A8C */  lw     $t7, %got(at_proc_to_print)($gp)
/* 0041AC7C 91EF0000 */  lbu   $t7, ($t7)
/* 0041AC80 51E00234 */  beql  $t7, $zero, .L0041B554
/* 0041AC84 8FBF0044 */   lw    $ra, 0x44($sp)
.L0041AC88:
/* 0041AC88 8F948044 */  lw    $s4, %got(D_1000FF70)($gp)
/* 0041AC8C 8F9E8DF8 */  lw     $fp, %got(table)($gp)
/* 0041AC90 8F9789CC */  lw     $s7, %got(nocopy)($gp)
/* 0041AC94 24160006 */  li    $s6, 6
/* 0041AC98 24150005 */  li    $s5, 5
/* 0041AC9C 24130004 */  li    $s3, 4
/* 0041ACA0 8F918CCC */  lw     $s1, %got(list)($gp)
/* 0041ACA4 2694FF70 */  addiu $s4, %lo(D_1000FF70) # addiu $s4, $s4, -0x90
/* 0041ACA8 8FC20000 */  lw    $v0, ($fp)
.L0041ACAC:
/* 0041ACAC 10400221 */  beqz  $v0, .L0041B534
/* 0041ACB0 00409025 */   move  $s2, $v0
.L0041ACB4:
/* 0041ACB4 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041ACB8 8E300000 */  lw    $s0, ($s1)
/* 0041ACBC 2405005B */  li    $a1, 91
/* 0041ACC0 24060001 */  li    $a2, 1
/* 0041ACC4 2407000A */  li    $a3, 10
/* 0041ACC8 0320F809 */  jalr  $t9
/* 0041ACCC 02002025 */   move  $a0, $s0
/* 0041ACD0 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041ACD4 02002025 */  move  $a0, $s0
/* 0041ACD8 96450008 */  lhu   $a1, 8($s2)
/* 0041ACDC 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041ACE0 02603025 */  move  $a2, $s3
/* 0041ACE4 2407000A */  li    $a3, 10
/* 0041ACE8 0320F809 */  jalr  $t9
/* 0041ACEC 00000000 */   nop   
/* 0041ACF0 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041ACF4 8E300000 */  lw    $s0, ($s1)
/* 0041ACF8 2405002C */  li    $a1, 44
/* 0041ACFC 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041AD00 24060001 */  li    $a2, 1
/* 0041AD04 2407000A */  li    $a3, 10
/* 0041AD08 0320F809 */  jalr  $t9
/* 0041AD0C 02002025 */   move  $a0, $s0
/* 0041AD10 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041AD14 02002025 */  move  $a0, $s0
/* 0041AD18 8E45000C */  lw    $a1, 0xc($s2)
/* 0041AD1C 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041AD20 24060001 */  li    $a2, 1
/* 0041AD24 2407000A */  li    $a3, 10
/* 0041AD28 0320F809 */  jalr  $t9
/* 0041AD2C 00000000 */   nop   
/* 0041AD30 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041AD34 8E240000 */  lw    $a0, ($s1)
/* 0041AD38 24060002 */  li    $a2, 2
/* 0041AD3C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041AD40 8F858044 */  lw    $a1, %got(RO_1000A839)($gp)
/* 0041AD44 24070002 */  li    $a3, 2
/* 0041AD48 0320F809 */  jalr  $t9
/* 0041AD4C 24A5A839 */   addiu $a1, %lo(RO_1000A839) # addiu $a1, $a1, -0x57c7
/* 0041AD50 92420000 */  lbu   $v0, ($s2)
/* 0041AD54 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041AD58 24040001 */  li    $a0, 1
/* 0041AD5C 2C410009 */  sltiu $at, $v0, 9
/* 0041AD60 10200069 */  beqz  $at, .L0041AF08
/* 0041AD64 24050087 */   li    $a1, 135
/* 0041AD68 8F818044 */  lw    $at, %got(jtbl_1000A83C)($gp)
/* 0041AD6C 0002C080 */  sll   $t8, $v0, 2
/* 0041AD70 00380821 */  addu  $at, $at, $t8
/* 0041AD74 8C38A83C */  lw    $t8, %lo(jtbl_1000A83C)($at)
/* 0041AD78 031CC021 */  addu  $t8, $t8, $gp
/* 0041AD7C 03000008 */  jr    $t8
/* 0041AD80 00000000 */   nop   
.L0041AD84:
/* 0041AD84 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041AD88 8F858044 */  lw    $a1, %got(RO_1000A831)($gp)
/* 0041AD8C 8E240000 */  lw    $a0, ($s1)
/* 0041AD90 24060008 */  li    $a2, 8
/* 0041AD94 24070008 */  li    $a3, 8
/* 0041AD98 0320F809 */  jalr  $t9
/* 0041AD9C 24A5A831 */   addiu $a1, %lo(RO_1000A831) # addiu $a1, $a1, -0x57cf
/* 0041ADA0 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041ADA4 8E240000 */  lw    $a0, ($s1)
/* 0041ADA8 8E450020 */  lw    $a1, 0x20($s2)
/* 0041ADAC 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041ADB0 2406000C */  li    $a2, 12
/* 0041ADB4 2407000A */  li    $a3, 10
/* 0041ADB8 0320F809 */  jalr  $t9
/* 0041ADBC 00000000 */   nop   
/* 0041ADC0 10000057 */  b     .L0041AF20
/* 0041ADC4 8FBC003C */   lw    $gp, 0x3c($sp)
.L0041ADC8:
/* 0041ADC8 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041ADCC 8F858044 */  lw    $a1, %got(RO_1000A829)($gp)
/* 0041ADD0 8E240000 */  lw    $a0, ($s1)
/* 0041ADD4 24060008 */  li    $a2, 8
/* 0041ADD8 24070008 */  li    $a3, 8
/* 0041ADDC 0320F809 */  jalr  $t9
/* 0041ADE0 24A5A829 */   addiu $a1, %lo(RO_1000A829) # addiu $a1, $a1, -0x57d7
/* 0041ADE4 1000004E */  b     .L0041AF20
/* 0041ADE8 8FBC003C */   lw    $gp, 0x3c($sp)
.L0041ADEC:
/* 0041ADEC 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041ADF0 8F858044 */  lw    $a1, %got(RO_1000A821)($gp)
/* 0041ADF4 8E240000 */  lw    $a0, ($s1)
/* 0041ADF8 24060008 */  li    $a2, 8
/* 0041ADFC 24070008 */  li    $a3, 8
/* 0041AE00 0320F809 */  jalr  $t9
/* 0041AE04 24A5A821 */   addiu $a1, %lo(RO_1000A821) # addiu $a1, $a1, -0x57df
/* 0041AE08 10000045 */  b     .L0041AF20
/* 0041AE0C 8FBC003C */   lw    $gp, 0x3c($sp)
.L0041AE10:
/* 0041AE10 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041AE14 8F858044 */  lw    $a1, %got(RO_1000A818)($gp)
/* 0041AE18 8E240000 */  lw    $a0, ($s1)
/* 0041AE1C 24060009 */  li    $a2, 9
/* 0041AE20 24070009 */  li    $a3, 9
/* 0041AE24 0320F809 */  jalr  $t9
/* 0041AE28 24A5A818 */   addiu $a1, %lo(RO_1000A818) # addiu $a1, $a1, -0x57e8
/* 0041AE2C 1000003C */  b     .L0041AF20
/* 0041AE30 8FBC003C */   lw    $gp, 0x3c($sp)
.L0041AE34:
/* 0041AE34 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041AE38 8F858044 */  lw    $a1, %got(RO_1000A80F)($gp)
/* 0041AE3C 8E240000 */  lw    $a0, ($s1)
/* 0041AE40 24060009 */  li    $a2, 9
/* 0041AE44 24070009 */  li    $a3, 9
/* 0041AE48 0320F809 */  jalr  $t9
/* 0041AE4C 24A5A80F */   addiu $a1, %lo(RO_1000A80F) # addiu $a1, $a1, -0x57f1
/* 0041AE50 10000033 */  b     .L0041AF20
/* 0041AE54 8FBC003C */   lw    $gp, 0x3c($sp)
.L0041AE58:
/* 0041AE58 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041AE5C 8F858044 */  lw    $a1, %got(RO_1000A807)($gp)
/* 0041AE60 8E240000 */  lw    $a0, ($s1)
/* 0041AE64 24060008 */  li    $a2, 8
/* 0041AE68 24070008 */  li    $a3, 8
/* 0041AE6C 0320F809 */  jalr  $t9
/* 0041AE70 24A5A807 */   addiu $a1, %lo(RO_1000A807) # addiu $a1, $a1, -0x57f9
/* 0041AE74 1000002A */  b     .L0041AF20
/* 0041AE78 8FBC003C */   lw    $gp, 0x3c($sp)
.L0041AE7C:
/* 0041AE7C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041AE80 8F858044 */  lw    $a1, %got(RO_1000A7FF)($gp)
/* 0041AE84 8E240000 */  lw    $a0, ($s1)
/* 0041AE88 24060008 */  li    $a2, 8
/* 0041AE8C 24070008 */  li    $a3, 8
/* 0041AE90 0320F809 */  jalr  $t9
/* 0041AE94 24A5A7FF */   addiu $a1, %lo(RO_1000A7FF) # addiu $a1, $a1, -0x5801
/* 0041AE98 10000021 */  b     .L0041AF20
/* 0041AE9C 8FBC003C */   lw    $gp, 0x3c($sp)
.L0041AEA0:
/* 0041AEA0 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041AEA4 8F858044 */  lw    $a1, %got(RO_1000A7F7)($gp)
/* 0041AEA8 8E240000 */  lw    $a0, ($s1)
/* 0041AEAC 24060008 */  li    $a2, 8
/* 0041AEB0 24070008 */  li    $a3, 8
/* 0041AEB4 0320F809 */  jalr  $t9
/* 0041AEB8 24A5A7F7 */   addiu $a1, %lo(RO_1000A7F7) # addiu $a1, $a1, -0x5809
/* 0041AEBC 10000018 */  b     .L0041AF20
/* 0041AEC0 8FBC003C */   lw    $gp, 0x3c($sp)
.L0041AEC4:
/* 0041AEC4 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041AEC8 8F858044 */  lw    $a1, %got(RO_1000A7EE)($gp)
/* 0041AECC 8E240000 */  lw    $a0, ($s1)
/* 0041AED0 24060009 */  li    $a2, 9
/* 0041AED4 24070009 */  li    $a3, 9
/* 0041AED8 0320F809 */  jalr  $t9
/* 0041AEDC 24A5A7EE */   addiu $a1, %lo(RO_1000A7EE) # addiu $a1, $a1, -0x5812
/* 0041AEE0 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041AEE4 8E240000 */  lw    $a0, ($s1)
/* 0041AEE8 96450020 */  lhu   $a1, 0x20($s2)
/* 0041AEEC 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041AEF0 2406000C */  li    $a2, 12
/* 0041AEF4 2407000A */  li    $a3, 10
/* 0041AEF8 0320F809 */  jalr  $t9
/* 0041AEFC 00000000 */   nop   
/* 0041AF00 10000007 */  b     .L0041AF20
/* 0041AF04 8FBC003C */   lw    $gp, 0x3c($sp)
.L0041AF08:
/* 0041AF08 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 0041AF0C 8F868044 */  lw    $a2, %got(RO_1000A7E5)($gp)
/* 0041AF10 24070009 */  li    $a3, 9
/* 0041AF14 0320F809 */  jalr  $t9
/* 0041AF18 24C6A7E5 */   addiu $a2, %lo(RO_1000A7E5) # addiu $a2, $a2, -0x581b
/* 0041AF1C 8FBC003C */  lw    $gp, 0x3c($sp)
.L0041AF20:
/* 0041AF20 92420000 */  lbu   $v0, ($s2)
/* 0041AF24 02803025 */  move  $a2, $s4
/* 0041AF28 00003825 */  move  $a3, $zero
/* 0041AF2C 16620070 */  bne   $s3, $v0, .L0041B0F0
/* 0041AF30 2419000A */   li    $t9, 10
/* 0041AF34 AFB90010 */  sw    $t9, 0x10($sp)
/* 0041AF38 8F998870 */  lw    $t9, %call16(write_enum)($gp)
/* 0041AF3C 8E300000 */  lw    $s0, ($s1)
/* 0041AF40 92450020 */  lbu   $a1, 0x20($s2)
/* 0041AF44 0320F809 */  jalr  $t9
/* 0041AF48 02002025 */   move  $a0, $s0
/* 0041AF4C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041AF50 02002025 */  move  $a0, $s0
/* 0041AF54 2405005B */  li    $a1, 91
/* 0041AF58 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041AF5C 24060001 */  li    $a2, 1
/* 0041AF60 2407000A */  li    $a3, 10
/* 0041AF64 0320F809 */  jalr  $t9
/* 0041AF68 00000000 */   nop   
/* 0041AF6C 8E420024 */  lw    $v0, 0x24($s2)
/* 0041AF70 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041AF74 02C03025 */  move  $a2, $s6
/* 0041AF78 14400009 */  bnez  $v0, .L0041AFA0
/* 0041AF7C 02002025 */   move  $a0, $s0
/* 0041AF80 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041AF84 8F858044 */  lw    $a1, %got(RO_1000A7DF)($gp)
/* 0041AF88 02002025 */  move  $a0, $s0
/* 0041AF8C 02C03825 */  move  $a3, $s6
/* 0041AF90 0320F809 */  jalr  $t9
/* 0041AF94 24A5A7DF */   addiu $a1, %lo(RO_1000A7DF) # addiu $a1, $a1, -0x5821
/* 0041AF98 1000001F */  b     .L0041B018
/* 0041AF9C 8FBC003C */   lw    $gp, 0x3c($sp)
.L0041AFA0:
/* 0041AFA0 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041AFA4 94450008 */  lhu   $a1, 8($v0)
/* 0041AFA8 02603025 */  move  $a2, $s3
/* 0041AFAC 0320F809 */  jalr  $t9
/* 0041AFB0 2407000A */   li    $a3, 10
/* 0041AFB4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041AFB8 8E300000 */  lw    $s0, ($s1)
/* 0041AFBC 2405002C */  li    $a1, 44
/* 0041AFC0 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041AFC4 24060001 */  li    $a2, 1
/* 0041AFC8 2407000A */  li    $a3, 10
/* 0041AFCC 0320F809 */  jalr  $t9
/* 0041AFD0 02002025 */   move  $a0, $s0
/* 0041AFD4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041AFD8 8E480024 */  lw    $t0, 0x24($s2)
/* 0041AFDC 02002025 */  move  $a0, $s0
/* 0041AFE0 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041AFE4 24060001 */  li    $a2, 1
/* 0041AFE8 2407000A */  li    $a3, 10
/* 0041AFEC 0320F809 */  jalr  $t9
/* 0041AFF0 8D05000C */   lw    $a1, 0xc($t0)
/* 0041AFF4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041AFF8 8E240000 */  lw    $a0, ($s1)
/* 0041AFFC 24060003 */  li    $a2, 3
/* 0041B000 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041B004 8F858044 */  lw    $a1, %got(RO_1000A7DC)($gp)
/* 0041B008 24070003 */  li    $a3, 3
/* 0041B00C 0320F809 */  jalr  $t9
/* 0041B010 24A5A7DC */   addiu $a1, %lo(RO_1000A7DC) # addiu $a1, $a1, -0x5824
/* 0041B014 8FBC003C */  lw    $gp, 0x3c($sp)
.L0041B018:
/* 0041B018 8E420028 */  lw    $v0, 0x28($s2)
/* 0041B01C 02603825 */  move  $a3, $s3
/* 0041B020 02603025 */  move  $a2, $s3
/* 0041B024 1440000E */  bnez  $v0, .L0041B060
/* 0041B028 00000000 */   nop   
/* 0041B02C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041B030 8F858044 */  lw    $a1, %got(RO_1000A7D8)($gp)
/* 0041B034 8E240000 */  lw    $a0, ($s1)
/* 0041B038 02603025 */  move  $a2, $s3
/* 0041B03C 0320F809 */  jalr  $t9
/* 0041B040 24A5A7D8 */   addiu $a1, %lo(RO_1000A7D8) # addiu $a1, $a1, -0x5828
/* 0041B044 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041B048 8E240000 */  lw    $a0, ($s1)
/* 0041B04C 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041B050 0320F809 */  jalr  $t9
/* 0041B054 00000000 */   nop   
/* 0041B058 10000133 */  b     .L0041B528
/* 0041B05C 8FBC003C */   lw    $gp, 0x3c($sp)
.L0041B060:
/* 0041B060 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041B064 8E240000 */  lw    $a0, ($s1)
/* 0041B068 94450008 */  lhu   $a1, 8($v0)
/* 0041B06C 0320F809 */  jalr  $t9
/* 0041B070 2407000A */   li    $a3, 10
/* 0041B074 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041B078 8E300000 */  lw    $s0, ($s1)
/* 0041B07C 2405002C */  li    $a1, 44
/* 0041B080 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041B084 24060001 */  li    $a2, 1
/* 0041B088 2407000A */  li    $a3, 10
/* 0041B08C 0320F809 */  jalr  $t9
/* 0041B090 02002025 */   move  $a0, $s0
/* 0041B094 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041B098 8E490028 */  lw    $t1, 0x28($s2)
/* 0041B09C 02002025 */  move  $a0, $s0
/* 0041B0A0 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041B0A4 24060001 */  li    $a2, 1
/* 0041B0A8 2407000A */  li    $a3, 10
/* 0041B0AC 0320F809 */  jalr  $t9
/* 0041B0B0 8D25000C */   lw    $a1, 0xc($t1)
/* 0041B0B4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041B0B8 8E300000 */  lw    $s0, ($s1)
/* 0041B0BC 2405005D */  li    $a1, 93
/* 0041B0C0 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041B0C4 24060001 */  li    $a2, 1
/* 0041B0C8 2407000A */  li    $a3, 10
/* 0041B0CC 0320F809 */  jalr  $t9
/* 0041B0D0 02002025 */   move  $a0, $s0
/* 0041B0D4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041B0D8 02002025 */  move  $a0, $s0
/* 0041B0DC 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041B0E0 0320F809 */  jalr  $t9
/* 0041B0E4 00000000 */   nop   
/* 0041B0E8 1000010F */  b     .L0041B528
/* 0041B0EC 8FBC003C */   lw    $gp, 0x3c($sp)
.L0041B0F0:
/* 0041B0F0 16A20037 */  bne   $s5, $v0, .L0041B1D0
/* 0041B0F4 2C4C0020 */   sltiu $t4, $v0, 0x20
/* 0041B0F8 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041B0FC 8F858044 */  lw    $a1, %got(RO_1000A7D4)($gp)
/* 0041B100 8E240000 */  lw    $a0, ($s1)
/* 0041B104 02603025 */  move  $a2, $s3
/* 0041B108 02603825 */  move  $a3, $s3
/* 0041B10C 0320F809 */  jalr  $t9
/* 0041B110 24A5A7D4 */   addiu $a1, %lo(RO_1000A7D4) # addiu $a1, $a1, -0x582c
/* 0041B114 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041B118 8E300000 */  lw    $s0, ($s1)
/* 0041B11C 2405005B */  li    $a1, 91
/* 0041B120 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041B124 24060001 */  li    $a2, 1
/* 0041B128 2407000A */  li    $a3, 10
/* 0041B12C 0320F809 */  jalr  $t9
/* 0041B130 02002025 */   move  $a0, $s0
/* 0041B134 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041B138 8E4A0034 */  lw    $t2, 0x34($s2)
/* 0041B13C 02002025 */  move  $a0, $s0
/* 0041B140 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041B144 02603025 */  move  $a2, $s3
/* 0041B148 2407000A */  li    $a3, 10
/* 0041B14C 0320F809 */  jalr  $t9
/* 0041B150 95450008 */   lhu   $a1, 8($t2)
/* 0041B154 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041B158 8E300000 */  lw    $s0, ($s1)
/* 0041B15C 2405002C */  li    $a1, 44
/* 0041B160 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041B164 24060001 */  li    $a2, 1
/* 0041B168 2407000A */  li    $a3, 10
/* 0041B16C 0320F809 */  jalr  $t9
/* 0041B170 02002025 */   move  $a0, $s0
/* 0041B174 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041B178 8E4B0034 */  lw    $t3, 0x34($s2)
/* 0041B17C 02002025 */  move  $a0, $s0
/* 0041B180 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041B184 24060001 */  li    $a2, 1
/* 0041B188 2407000A */  li    $a3, 10
/* 0041B18C 0320F809 */  jalr  $t9
/* 0041B190 8D65000C */   lw    $a1, 0xc($t3)
/* 0041B194 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041B198 8E240000 */  lw    $a0, ($s1)
/* 0041B19C 24060002 */  li    $a2, 2
/* 0041B1A0 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041B1A4 8F858044 */  lw    $a1, %got(RO_1000A7D2)($gp)
/* 0041B1A8 24070002 */  li    $a3, 2
/* 0041B1AC 0320F809 */  jalr  $t9
/* 0041B1B0 24A5A7D2 */   addiu $a1, %lo(RO_1000A7D2) # addiu $a1, $a1, -0x582e
/* 0041B1B4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041B1B8 8E240000 */  lw    $a0, ($s1)
/* 0041B1BC 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041B1C0 0320F809 */  jalr  $t9
/* 0041B1C4 00000000 */   nop   
/* 0041B1C8 100000D7 */  b     .L0041B528
/* 0041B1CC 8FBC003C */   lw    $gp, 0x3c($sp)
.L0041B1D0:
/* 0041B1D0 000C6823 */  negu  $t5, $t4
/* 0041B1D4 3C011200 */  lui   $at, 0x1200
/* 0041B1D8 01A17024 */  and   $t6, $t5, $at
/* 0041B1DC 004E7804 */  sllv  $t7, $t6, $v0
/* 0041B1E0 05E100CC */  bgez  $t7, .L0041B514
/* 0041B1E4 00000000 */   nop   
/* 0041B1E8 8E580010 */  lw    $t8, 0x10($s2)
/* 0041B1EC 130000C9 */  beqz  $t8, .L0041B514
/* 0041B1F0 00000000 */   nop   
/* 0041B1F4 8F99822C */  lw    $t9, %call16(printmtyp)($gp)
/* 0041B1F8 9244002E */  lbu   $a0, 0x2e($s2)
/* 0041B1FC 0320F809 */  jalr  $t9
/* 0041B200 30840007 */   andi  $a0, $a0, 7
/* 0041B204 92590000 */  lbu   $t9, ($s2)
/* 0041B208 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041B20C 16D9002C */  bne   $s6, $t9, .L0041B2C0
/* 0041B210 00000000 */   nop   
/* 0041B214 8E480010 */  lw    $t0, 0x10($s2)
/* 0041B218 2405005B */  li    $a1, 91
/* 0041B21C 24060001 */  li    $a2, 1
/* 0041B220 11000027 */  beqz  $t0, .L0041B2C0
/* 0041B224 00000000 */   nop   
/* 0041B228 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041B22C 8E300000 */  lw    $s0, ($s1)
/* 0041B230 2407000A */  li    $a3, 10
/* 0041B234 0320F809 */  jalr  $t9
/* 0041B238 02002025 */   move  $a0, $s0
/* 0041B23C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041B240 8E490024 */  lw    $t1, 0x24($s2)
/* 0041B244 02002025 */  move  $a0, $s0
/* 0041B248 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041B24C 02603025 */  move  $a2, $s3
/* 0041B250 2407000A */  li    $a3, 10
/* 0041B254 0320F809 */  jalr  $t9
/* 0041B258 95250008 */   lhu   $a1, 8($t1)
/* 0041B25C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041B260 8E300000 */  lw    $s0, ($s1)
/* 0041B264 2405002C */  li    $a1, 44
/* 0041B268 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041B26C 24060001 */  li    $a2, 1
/* 0041B270 2407000A */  li    $a3, 10
/* 0041B274 0320F809 */  jalr  $t9
/* 0041B278 02002025 */   move  $a0, $s0
/* 0041B27C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041B280 8E4A0024 */  lw    $t2, 0x24($s2)
/* 0041B284 02002025 */  move  $a0, $s0
/* 0041B288 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041B28C 24060001 */  li    $a2, 1
/* 0041B290 2407000A */  li    $a3, 10
/* 0041B294 0320F809 */  jalr  $t9
/* 0041B298 8D45000C */   lw    $a1, 0xc($t2)
/* 0041B29C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041B2A0 8E240000 */  lw    $a0, ($s1)
/* 0041B2A4 24060002 */  li    $a2, 2
/* 0041B2A8 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041B2AC 8F858044 */  lw    $a1, %got(RO_1000A7D0)($gp)
/* 0041B2B0 24070002 */  li    $a3, 2
/* 0041B2B4 0320F809 */  jalr  $t9
/* 0041B2B8 24A5A7D0 */   addiu $a1, %lo(RO_1000A7D0) # addiu $a1, $a1, -0x5830
/* 0041B2BC 8FBC003C */  lw    $gp, 0x3c($sp)
.L0041B2C0:
/* 0041B2C0 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041B2C4 8E45002C */  lw    $a1, 0x2c($s2)
/* 0041B2C8 8E240000 */  lw    $a0, ($s1)
/* 0041B2CC 02A03025 */  move  $a2, $s5
/* 0041B2D0 2407000A */  li    $a3, 10
/* 0041B2D4 0320F809 */  jalr  $t9
/* 0041B2D8 00052AC2 */   srl   $a1, $a1, 0xb
/* 0041B2DC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041B2E0 8E300000 */  lw    $s0, ($s1)
/* 0041B2E4 24050020 */  li    $a1, 32
/* 0041B2E8 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041B2EC 24060001 */  li    $a2, 1
/* 0041B2F0 2407000A */  li    $a3, 10
/* 0041B2F4 0320F809 */  jalr  $t9
/* 0041B2F8 02002025 */   move  $a0, $s0
/* 0041B2FC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041B300 02002025 */  move  $a0, $s0
/* 0041B304 8E450028 */  lw    $a1, 0x28($s2)
/* 0041B308 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041B30C 02A03025 */  move  $a2, $s5
/* 0041B310 2407000A */  li    $a3, 10
/* 0041B314 0320F809 */  jalr  $t9
/* 0041B318 00000000 */   nop   
/* 0041B31C 8E4B0038 */  lw    $t3, 0x38($s2)
/* 0041B320 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041B324 02C03025 */  move  $a2, $s6
/* 0041B328 1160002D */  beqz  $t3, .L0041B3E0
/* 0041B32C 02C03825 */   move  $a3, $s6
/* 0041B330 8E4C0034 */  lw    $t4, 0x34($s2)
/* 0041B334 1180002A */  beqz  $t4, .L0041B3E0
/* 0041B338 00000000 */   nop   
/* 0041B33C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041B340 8F858044 */  lw    $a1, %got(RO_1000A7CE)($gp)
/* 0041B344 8E240000 */  lw    $a0, ($s1)
/* 0041B348 24060002 */  li    $a2, 2
/* 0041B34C 24070002 */  li    $a3, 2
/* 0041B350 0320F809 */  jalr  $t9
/* 0041B354 24A5A7CE */   addiu $a1, %lo(RO_1000A7CE) # addiu $a1, $a1, -0x5832
/* 0041B358 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041B35C 8E4D0034 */  lw    $t5, 0x34($s2)
/* 0041B360 8E240000 */  lw    $a0, ($s1)
/* 0041B364 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041B368 24060001 */  li    $a2, 1
/* 0041B36C 2407000A */  li    $a3, 10
/* 0041B370 0320F809 */  jalr  $t9
/* 0041B374 95A50008 */   lhu   $a1, 8($t5)
/* 0041B378 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041B37C 8E300000 */  lw    $s0, ($s1)
/* 0041B380 2405002C */  li    $a1, 44
/* 0041B384 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041B388 24060001 */  li    $a2, 1
/* 0041B38C 2407000A */  li    $a3, 10
/* 0041B390 0320F809 */  jalr  $t9
/* 0041B394 02002025 */   move  $a0, $s0
/* 0041B398 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041B39C 8E4E0034 */  lw    $t6, 0x34($s2)
/* 0041B3A0 02002025 */  move  $a0, $s0
/* 0041B3A4 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041B3A8 24060001 */  li    $a2, 1
/* 0041B3AC 2407000A */  li    $a3, 10
/* 0041B3B0 0320F809 */  jalr  $t9
/* 0041B3B4 8DC5000C */   lw    $a1, 0xc($t6)
/* 0041B3B8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041B3BC 8E300000 */  lw    $s0, ($s1)
/* 0041B3C0 2405005D */  li    $a1, 93
/* 0041B3C4 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041B3C8 24060001 */  li    $a2, 1
/* 0041B3CC 2407000A */  li    $a3, 10
/* 0041B3D0 0320F809 */  jalr  $t9
/* 0041B3D4 02002025 */   move  $a0, $s0
/* 0041B3D8 10000008 */  b     .L0041B3FC
/* 0041B3DC 8FBC003C */   lw    $gp, 0x3c($sp)
.L0041B3E0:
/* 0041B3E0 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041B3E4 8F858044 */  lw    $a1, %got(RO_1000A7C8)($gp)
/* 0041B3E8 8E240000 */  lw    $a0, ($s1)
/* 0041B3EC 0320F809 */  jalr  $t9
/* 0041B3F0 24A5A7C8 */   addiu $a1, %lo(RO_1000A7C8) # addiu $a1, $a1, -0x5838
/* 0041B3F4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041B3F8 8E300000 */  lw    $s0, ($s1)
.L0041B3FC:
/* 0041B3FC 8E420030 */  lw    $v0, 0x30($s2)
/* 0041B400 02002025 */  move  $a0, $s0
/* 0041B404 02C03025 */  move  $a2, $s6
/* 0041B408 10400036 */  beqz  $v0, .L0041B4E4
/* 0041B40C 00000000 */   nop   
/* 0041B410 8EEF0000 */  lw    $t7, ($s7)
/* 0041B414 11E20033 */  beq   $t7, $v0, .L0041B4E4
/* 0041B418 00000000 */   nop   
/* 0041B41C 8E580010 */  lw    $t8, 0x10($s2)
/* 0041B420 24070002 */  li    $a3, 2
/* 0041B424 1300002F */  beqz  $t8, .L0041B4E4
/* 0041B428 00000000 */   nop   
/* 0041B42C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041B430 8F858044 */  lw    $a1, %got(RO_1000A7C6)($gp)
/* 0041B434 02002025 */  move  $a0, $s0
/* 0041B438 24060002 */  li    $a2, 2
/* 0041B43C 0320F809 */  jalr  $t9
/* 0041B440 24A5A7C6 */   addiu $a1, %lo(RO_1000A7C6) # addiu $a1, $a1, -0x583a
/* 0041B444 8E590030 */  lw    $t9, 0x30($s2)
/* 0041B448 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041B44C 8E240000 */  lw    $a0, ($s1)
/* 0041B450 97250008 */  lhu   $a1, 8($t9)
/* 0041B454 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041B458 24060001 */  li    $a2, 1
/* 0041B45C 2407000A */  li    $a3, 10
/* 0041B460 0320F809 */  jalr  $t9
/* 0041B464 00000000 */   nop   
/* 0041B468 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041B46C 8E300000 */  lw    $s0, ($s1)
/* 0041B470 2405002C */  li    $a1, 44
/* 0041B474 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041B478 24060001 */  li    $a2, 1
/* 0041B47C 2407000A */  li    $a3, 10
/* 0041B480 0320F809 */  jalr  $t9
/* 0041B484 02002025 */   move  $a0, $s0
/* 0041B488 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041B48C 8E480030 */  lw    $t0, 0x30($s2)
/* 0041B490 02002025 */  move  $a0, $s0
/* 0041B494 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041B498 24060001 */  li    $a2, 1
/* 0041B49C 2407000A */  li    $a3, 10
/* 0041B4A0 0320F809 */  jalr  $t9
/* 0041B4A4 8D05000C */   lw    $a1, 0xc($t0)
/* 0041B4A8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041B4AC 8E300000 */  lw    $s0, ($s1)
/* 0041B4B0 2405005D */  li    $a1, 93
/* 0041B4B4 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041B4B8 24060001 */  li    $a2, 1
/* 0041B4BC 2407000A */  li    $a3, 10
/* 0041B4C0 0320F809 */  jalr  $t9
/* 0041B4C4 02002025 */   move  $a0, $s0
/* 0041B4C8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041B4CC 02002025 */  move  $a0, $s0
/* 0041B4D0 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041B4D4 0320F809 */  jalr  $t9
/* 0041B4D8 00000000 */   nop   
/* 0041B4DC 10000012 */  b     .L0041B528
/* 0041B4E0 8FBC003C */   lw    $gp, 0x3c($sp)
.L0041B4E4:
/* 0041B4E4 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041B4E8 8F858044 */  lw    $a1, %got(RO_1000A7C0)($gp)
/* 0041B4EC 02C03825 */  move  $a3, $s6
/* 0041B4F0 0320F809 */  jalr  $t9
/* 0041B4F4 24A5A7C0 */   addiu $a1, %lo(RO_1000A7C0) # addiu $a1, $a1, -0x5840
/* 0041B4F8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041B4FC 8E240000 */  lw    $a0, ($s1)
/* 0041B500 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041B504 0320F809 */  jalr  $t9
/* 0041B508 00000000 */   nop   
/* 0041B50C 10000006 */  b     .L0041B528
/* 0041B510 8FBC003C */   lw    $gp, 0x3c($sp)
.L0041B514:
/* 0041B514 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041B518 8E240000 */  lw    $a0, ($s1)
/* 0041B51C 0320F809 */  jalr  $t9
/* 0041B520 00000000 */   nop   
/* 0041B524 8FBC003C */  lw    $gp, 0x3c($sp)
.L0041B528:
/* 0041B528 8E52001C */  lw    $s2, 0x1c($s2)
/* 0041B52C 1640FDE1 */  bnez  $s2, .L0041ACB4
/* 0041B530 00000000 */   nop   
.L0041B534:
/* 0041B534 8F898DF8 */  lw     $t1, %got(table)($gp)
/* 0041B538 3C010001 */  lui   $at, 1
/* 0041B53C 24218E64 */  addiu $at, $at, -0x719c
/* 0041B540 27DE0004 */  addiu $fp, $fp, 4
/* 0041B544 00294821 */  addu  $t1, $at, $t1
/* 0041B548 57C9FDD8 */  bnel  $fp, $t1, .L0041ACAC
/* 0041B54C 8FC20000 */   lw    $v0, ($fp)
/* 0041B550 8FBF0044 */  lw    $ra, 0x44($sp)
.L0041B554:
/* 0041B554 8FB0001C */  lw    $s0, 0x1c($sp)
/* 0041B558 8FB10020 */  lw    $s1, 0x20($sp)
/* 0041B55C 8FB20024 */  lw    $s2, 0x24($sp)
/* 0041B560 8FB30028 */  lw    $s3, 0x28($sp)
/* 0041B564 8FB4002C */  lw    $s4, 0x2c($sp)
/* 0041B568 8FB50030 */  lw    $s5, 0x30($sp)
/* 0041B56C 8FB60034 */  lw    $s6, 0x34($sp)
/* 0041B570 8FB70038 */  lw    $s7, 0x38($sp)
/* 0041B574 8FBE0040 */  lw    $fp, 0x40($sp)
/* 0041B578 03E00008 */  jr    $ra
/* 0041B57C 27BD0048 */   addiu $sp, $sp, 0x48
    .type printtab, @function
    .size printtab, .-printtab
    .end printtab

)"");

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
