#include <stdlib.h>
#include <string.h>
#include "libp/libp.h"
#include "libu/libu.h"
#include "ucode.h"
#include "uoptions.h"
#include "uoptutil.h"
#include "uoptdata.h"
#include "uoptdbg.h"

__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
RO_1000E1B8:
    # 0047BFEC findsimilar
    .asciz "uoptutil.p"

    .balign 4
jtbl_1000E1C4:
    # 0047BFEC findsimilar
    .gpword .L0047C164
    .gpword .L0047C12C
    .gpword .L0047C12C
    .gpword .L0047C250
    .gpword .L0047C250
    .gpword .L0047C0F4
    .gpword .L0047C12C
    .gpword .L0047C12C
    .gpword .L0047C0F4
    .gpword .L0047C250
    .gpword .L0047C164

    .balign 4
jtbl_1000E1F0:
    # 0047BFEC findsimilar
    .gpword .L0047C080
    .gpword .L0047C0B4
    .gpword .L0047C228
    .gpword .L0047C080

RO_1000E284:
    # 0047D000 exproccurred
    .asciz "uoptutil.p"

    .balign 4
jtbl_1000E290:
    # 0047D000 exproccurred
    .gpword .L0047D060
    .gpword .L0047D060
    .gpword .L0047D084
    .gpword .L0047D0D0
    .gpword .L0047D068
    .gpword .L0047D084
    .gpword .L0047D148
    .gpword .L0047D060

RO_1000E2B0:
    # 0047D188 iexproccurred
    .asciz "uoptutil.p"

    .balign 4
jtbl_1000E2BC:
    # 0047D188 iexproccurred
    .gpword .L0047D1E4
    .gpword .L0047D1E4
    .gpword .L0047D204
    .gpword .L0047D22C
    .gpword .L0047D1EC
    .gpword .L0047D204
    .gpword .L0047D2A0
    .gpword .L0047D1E4

RO_1000E2DC:
    # 0047D878 deccount
    .asciz "uoptutil.p"

    .balign 4
jtbl_1000E2E8:
    # 0047D878 deccount
    .gpword .L0047DBA0
    .gpword .L0047DBA0
    .gpword .L0047D8D0
    .gpword .L0047DA68
    .gpword .L0047DA00
    .gpword .L0047D924
    .gpword .L0047DB80
    .gpword .L0047DBA0

RO_1000E3EC:
    # 0047ED9C countvars
    .asciz "uoptutil.p"

    .balign 4
jtbl_1000E3F8:
    # 0047ED9C countvars
    .gpword .L0047EDE8
    .gpword .L0047EDE8
    .gpword .L0047EDF0
    .gpword .L0047EDF8
    .gpword .L0047EDE8
    .gpword .L0047EDF0
    .gpword .L0047EE70
    .gpword .L0047EDE8
)"");

/*
0047B51C ovfwwarning
*/
const char uopcode_enum_values[] = "uabs\0   uadd\0   uadj\0   uaent\0  uand\0   uaos\0   uasym\0  ubgn\0   ubgnb\0  ubsub\0  ucg1\0   ucg2\0   uchkh\0  uchkl\0  uchkn\0  uchkt\0  ucia\0   uclab\0  uclbd\0  ucomm\0  ucsym\0  uctrl\0  ucubd\0  ucup\0   ucvt\0   ucvtl\0  udec\0   udef\0   udif\0   udiv\0   udup\0   uend\0   uendb\0  uent\0   ueof\0   uequ\0   uesym\0  ufill\0  ufjp\0   ufsym\0  ugeq\0   ugrt\0   ugsym\0  uhsym\0  uicuf\0  uidx\0   uiequ\0  uigeq\0  uigrt\0  uijp\0   uilda\0  uildv\0  uileq\0  uiles\0  uilod\0  uinc\0   uineq\0  uinit\0  uinn\0   uint\0   uior\0   uisld\0  uisst\0  uistr\0  uistv\0  uixa\0   ulab\0   ulbd\0   ulbdy\0  ulbgn\0  ulca\0   ulda\0   uldap\0  uldc\0   uldef\0  uldsp\0  ulend\0  uleq\0   ules\0   ulex\0   ulnot\0  uloc\0   ulod\0   ulsym\0  ultrm\0  umax\0   umin\0   umod\0   umov\0   umovv\0  umpmv\0  umpy\0   umst\0   umus\0   uneg\0   uneq\0   unop\0   unot\0   uodd\0   uoptn\0  upar\0   updef\0  upmov\0  upop\0   uregs\0  urem\0   uret\0   urlda\0  urldc\0  urlod\0  urnd\0   urpar\0  urstr\0  usdef\0  usgs\0   ushl\0   ushr\0   usign\0  usqr\0   usqrt\0  ussym\0  ustep\0  ustp\0   ustr\0   ustsp\0  usub\0   uswp\0   utjp\0   utpeq\0  utpge\0  utpgt\0  utple\0  utplt\0  utpne\0  utyp\0   uubd\0   uujp\0   uunal\0  uuni\0   uvreg\0  uxjp\0   uxor\0   uxpar\0  umtag\0  ualia\0  uildi\0  uisti\0  uirld\0  uirst\0  uldrc\0  umsym\0  urcuf\0  uksym\0  uosym\0  uirlv\0  uirsv\0\0 ";

__asm__(R""(
.data

D_10011834:
    # 0047C53C fixcorr
    .byte 0x00,0x03,0x9e,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x20

D_10011854:
    # 0047D878 deccount
    .byte 0x00,0x03,0x9e,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x20

D_10011870:
    # 0047EF74 has_volt_ovfw
    .byte 0x10,0xc0,0x00,0x00,0x00,0x06,0x00,0x01

.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
)"");

/*
004137DC func_004137DC
00417480 func_00417480
0041F22C base_noalias
0042020C gen_static_link
00425618 func_00425618
00439FA4 formal_parm_vreg
0043B334 func_0043B334
0043B504 func_0043B504
0043CBFC func_0043CBFC
00444A84 isearchloop
004496F0 slkilled
0044A5C8 smkilled
0044AAD0 sskilled
0044EDF8 ilodfold
00459564 update_veqv_in_table
0045FBB4 func_0045FBB4
0046C710 unroll_searchloop
00473504 func_00473504
00473D84 func_00473D84
0047BFEC findsimilar
0047D610 searchvar
0047E24C enter_lda
0047E938 checkincre
*/
bool addreq(struct VariableLocation a, struct VariableLocation b) {
    return a.addr == b.addr && a.memtype == b.memtype && a.blockno == b.blockno;
}

/*
00456A2C oneproc
*/
void stackerror(void) {
    writeln(err.c_file);
    write_string(err.c_file, "uopt: Internal: ", 16, 16);
    write_string(err.c_file, entnam0, 1024, entnam0len);
    write_string(err.c_file, ": stack error", 13, 13);
    writeln(err.c_file);
    fflush(err.c_file);
    abort();
}

/*
00425618 func_00425618
0042BF08 reemit
0044F3C0 unaryfold
00452DAC constarith
*/
void boundswarning(void) {
    if (warn_flag != 1) {
        warned = true;
        writeln(err.c_file);
        write_string(err.c_file, "uopt: Warning: ", 15, 15);
        write_string(err.c_file, entnam0, 1024, entnam0len);
        write_string(err.c_file, " line ", 6, 6);
        write_integer(err.c_file, curlocln, 0, 10);
        write_string(err.c_file, ": bounds error", 14, 14);
        writeln(err.c_file);
        fflush(err.c_file);
    }
}

/*
0041550C func_0041550C
00425618 func_00425618
0044F738 linearize
00451764 restructure
*/
void ovfwwarning(Uopcode opc) {
    if (warn_flag != 1) {
        warned = true;
        writeln(err.c_file);
        write_string(err.c_file, "uopt: Warning: ", 15, 15);
        write_string(err.c_file, entnam0, 1024, entnam0len);
        write_string(err.c_file, " line ", 6, 6);
        write_integer(err.c_file, curlocln, 0, 10);
        write_string(err.c_file, ": ", 2, 2);

        switch (opc) {
            case Uadd:
                write_string(err.c_file, "addition", 8, 8);
                break;
            case Usub:
                write_string(err.c_file, "subtraction", 11, 11);
                break;
            case Umpy:
                write_string(err.c_file, "multiplication", 14, 14);
                break;
            case Udiv:
            case Urem:
                write_string(err.c_file, "division by zero", 16, 16);
                break;
            case Umod:
                write_string(err.c_file, "modulus", 7, 7);
                break;
            case Uneg:
                write_string(err.c_file, "negation", 8, 8);
                break;
            case Uabs:
                write_string(err.c_file, "absolute value", 14, 14);
                break;
            case Udec:
                write_string(err.c_file, "decrement", 9, 9);
                break;
            case Uinc:
                write_string(err.c_file, "increment", 9, 9);
                break;
            case Uixa:
                write_string(err.c_file, "memory indexing", 15, 15);
                break;
            case Ushl:
                write_string(err.c_file, "shift left", 10, 10);
                break;
            case Ushr:
                write_string(err.c_file, "shift right", 11, 11);
                break;
            case Uuni:
                write_string(err.c_file, "set union", 9, 9);
                break;
            case Uint:
                write_string(err.c_file, "set intersection", 16, 16);
                break;
            case Udif:
                write_string(err.c_file, "set difference", 14, 14);
                break;
            case Uinn:
                write_string(err.c_file, "element in set", 14, 14);
                break;
            case Umus:
                write_string(err.c_file, "multiple set", 12, 12);
                break;
            case Uequ:
                write_string(err.c_file, "equality comparison", 19, 19);
                break;
            case Ugrt:
                write_string(err.c_file, "greater than", 12, 12);
                break;
            case Ugeq:
                write_string(err.c_file, "greater than or eqaul to", 24, 24);
                break;
            case Ules:
                write_string(err.c_file, "less than", 9, 9);
                break;
            case Uleq:
                write_string(err.c_file, "less than or equal to", 21, 21);
                break;
            case Umin:
                write_string(err.c_file, "minimum", 7, 7);
                break;
            case Umax:
                write_string(err.c_file, "maximum", 7, 7);
                break;
            case Uxor:
                write_string(err.c_file, "exclusive or", 12, 12);
                break;
            case Uodd:
                write_string(err.c_file, "odd integer", 11, 11);
                break;
            case Usqr:
                write_string(err.c_file, "square a number", 15, 15);
                break;
            case Ulnot:
                write_string(err.c_file, "logical not", 11, 11);
                break;
            case Unot:
                write_string(err.c_file, "not", 3, 3);
                break;
            case Uchkh:
                write_string(err.c_file, "check against upper bound", 25, 25);
                break;
            case Uchkl:
                write_string(err.c_file, "check against lower bound", 25, 25);
                break;
            case Ucvtl:
                write_string(err.c_file, "convert a length", 16, 16);
                break;

            default:
                write_string(err.c_file, "Ucode op:", 9, 9);
                write_enum(err.c_file, opc, uopcode_enum_values, 0);
                break;
        }

        write_string(err.c_file, " constant evaluation found", 26, 26);
        writeln(err.c_file);
        write_string(err.c_file, "questionable result as a result of copy propagation or other optimizations.", 75, 75);
        writeln(err.c_file);
        write_string(err.c_file, "Constant evaluation left to run time for this case.", 51, 51);
        writeln(err.c_file);
        fflush(err.c_file);
    }
}

/*
00410204 codemotion
0041550C func_0041550C
0041FD3C genloadnum
004230F0 func_004230F0
00424FFC func_00424FFC
00425618 func_00425618
00426DE8 func_00426DE8
0042BF08 reemit
0043ABD0 incroccurrence
0043CFCC readnxtinst
00445E44 exprimage
004471AC codeimage
0044821C expr_has_direct_usage
0044D8C4 strlkilled
0045CB3C expinalter
00461778 func_00461778
00464BFC localcolor
00467F04 split
00469280 globalcolor
00477118 func_00477118
00477854 func_00477854
00477B0C func_00477B0C
00478820 func_00478820
00479778 func_00479778
*/
void dbgerror(int code) {
    writeln(err.c_file);
    write_string(err.c_file, "uopt: Internal: ", 16, 16);
    write_string(err.c_file, entnam0, 1024, entnam0len);
    write_string(err.c_file, ": code: ", 8, 8);
    write_integer(err.c_file, code, 12, 10);
    writeln(err.c_file);
    fflush(err.c_file);
    abort();
}

/*
004137DC func_004137DC
004150E4 func_004150E4
0043B334 func_0043B334
0043B504 func_0043B504
0043CBFC func_0043CBFC
0043CFCC readnxtinst
0044EDF8 ilodfold
0044F1B8 istrfold
0044FF6C mergeconst
004510A0 distrlaw
0046BA10 change_to_const_eq
0046BD90 change_to_var_eq
0046C710 unroll_searchloop
0046E77C oneloopblockstmt
0047090C form_bop
00470AAC form_rem
00470DD8 form_neq0
00470F88 form_neg
004710F0 str_to_temporary
00473504 func_00473504
004737E0 par_to_str
00473D84 func_00473D84
0047C53C fixcorr
0047D610 searchvar
0047E100 enter_const
0047E24C enter_lda
0047E3BC binopwithconst
*/
struct Expression *appendchain(unsigned short table_index) {
    struct Expression *pos;
    struct Expression *new_entry;
    int chain_index;

    pos = table[table_index];
    if (pos == NULL) {
        new_entry = (struct Expression *)alloc_new(sizeof(struct Expression), &perm_heap);
        pos = new_entry;
        table[table_index] = new_entry;
        chain_index = 0;
    } else {
        while (pos->next != NULL) {
            pos = pos->next;
        }
        new_entry = (struct Expression *)alloc_new(sizeof(struct Expression), &perm_heap);
        pos->next = new_entry;
        chain_index = pos->chain_index + 1;
    }
    if (new_entry == NULL) {
        outofmem = true;
        return NULL; // originally some unused stack slot value was returned
    }
#ifdef AVOID_UB
    *new_entry = (struct Expression){0};
#endif
    new_entry->type = empty;
    new_entry->ichain = NULL;
    new_entry->chain_index = chain_index;
    new_entry->next = NULL;
    new_entry->table_index = table_index;
    return new_entry;
}

__asm__(R""(
.set noat
.set noreorder

glabel findsimilar
    .ent findsimilar
    # 0047C53C fixcorr
/* 0047BFEC 3C1C0FBA */  .cpload $t9
/* 0047BFF0 279CE2A4 */
/* 0047BFF4 0399E021 */
/* 0047BFF8 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 0047BFFC AFBF0024 */  sw    $ra, 0x24($sp)
/* 0047C000 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0047C004 AFB1001C */  sw    $s1, 0x1c($sp)
/* 0047C008 AFB00018 */  sw    $s0, 0x18($sp)
/* 0047C00C 948E0008 */  lhu   $t6, 8($a0)
/* 0047C010 8F988DF8 */  lw     $t8, %got(table)($gp)
/* 0047C014 00808025 */  move  $s0, $a0
/* 0047C018 000E7880 */  sll   $t7, $t6, 2
/* 0047C01C 01F8C821 */  addu  $t9, $t7, $t8
/* 0047C020 8F310000 */  lw    $s1, ($t9)
/* 0047C024 00004025 */  move  $t0, $zero
/* 0047C028 52200091 */  beql  $s1, $zero, .L0047C270
/* 0047C02C 8FBF0024 */   lw    $ra, 0x24($sp)
/* 0047C030 92030000 */  lbu   $v1, ($s0)
.L0047C034:
/* 0047C034 92290000 */  lbu   $t1, ($s1)
/* 0047C038 15230085 */  bne   $t1, $v1, .L0047C250
/* 0047C03C 00000000 */   nop
/* 0047C040 12300083 */  beq   $s1, $s0, .L0047C250
/* 0047C044 00000000 */   nop
/* 0047C048 8E2A0014 */  lw    $t2, 0x14($s1)
/* 0047C04C 306200FF */  andi  $v0, $v1, 0xff
/* 0047C050 244BFFFD */  addiu $t3, $v0, -3
/* 0047C054 1140007E */  beqz  $t2, .L0047C250
/* 0047C058 2D610004 */   sltiu $at, $t3, 4
/* 0047C05C 10200072 */  beqz  $at, .L0047C228
/* 0047C060 00000000 */   nop
/* 0047C064 8F818044 */  lw    $at, %got(jtbl_1000E1F0)($gp)
/* 0047C068 000B5880 */  sll   $t3, $t3, 2
/* 0047C06C 002B0821 */  addu  $at, $at, $t3
/* 0047C070 8C2BE1F0 */  lw    $t3, %lo(jtbl_1000E1F0)($at)
/* 0047C074 017C5821 */  addu  $t3, $t3, $gp
/* 0047C078 01600008 */  jr    $t3
/* 0047C07C 00000000 */   nop
.L0047C080:
/* 0047C080 8F99860C */  lw    $t9, %call16(addreq)($gp)
/* 0047C084 8E040028 */  lw    $a0, 0x28($s0)
/* 0047C088 8E05002C */  lw    $a1, 0x2c($s0)
/* 0047C08C 8E260028 */  lw    $a2, 0x28($s1)
/* 0047C090 8E27002C */  lw    $a3, 0x2c($s1)
/* 0047C094 AFA40000 */  sw    $a0, ($sp)
/* 0047C098 AFA50004 */  sw    $a1, 4($sp)
/* 0047C09C AFA60008 */  sw    $a2, 8($sp)
/* 0047C0A0 0320F809 */  jalr  $t9
/* 0047C0A4 AFA7000C */   sw    $a3, 0xc($sp)
/* 0047C0A8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0047C0AC 10000068 */  b     .L0047C250
/* 0047C0B0 304800FF */   andi  $t0, $v0, 0xff
.L0047C0B4:
/* 0047C0B4 92030020 */  lbu   $v1, 0x20($s0)
/* 0047C0B8 92380020 */  lbu   $t8, 0x20($s1)
/* 0047C0BC 17030064 */  bne   $t8, $v1, .L0047C250
/* 0047C0C0 00000000 */   nop
/* 0047C0C4 92390001 */  lbu   $t9, 1($s1)
/* 0047C0C8 92090001 */  lbu   $t1, 1($s0)
/* 0047C0CC 17290060 */  bne   $t9, $t1, .L0047C250
/* 0047C0D0 00000000 */   nop
/* 0047C0D4 8E250024 */  lw    $a1, 0x24($s1)
/* 0047C0D8 8E060024 */  lw    $a2, 0x24($s0)
/* 0047C0DC 00A62026 */  xor   $a0, $a1, $a2
/* 0047C0E0 2C840001 */  sltiu $a0, $a0, 1
/* 0047C0E4 1080005A */  beqz  $a0, .L0047C250
/* 0047C0E8 00000000 */   nop
/* 0047C0EC 10000035 */  b     .L0047C1C4
/* 0047C0F0 306200FF */   andi  $v0, $v1, 0xff
.L0047C0F4:
/* 0047C0F4 1080000B */  beqz  $a0, .L0047C124
/* 0047C0F8 00801025 */   move  $v0, $a0
/* 0047C0FC 8E2A002C */  lw    $t2, 0x2c($s1)
/* 0047C100 8E0B002C */  lw    $t3, 0x2c($s0)
/* 0047C104 014B1026 */  xor   $v0, $t2, $t3
/* 0047C108 2C420001 */  sltiu $v0, $v0, 1
/* 0047C10C 10400005 */  beqz  $v0, .L0047C124
/* 0047C110 00000000 */   nop
/* 0047C114 962C003C */  lhu   $t4, 0x3c($s1)
/* 0047C118 960D003C */  lhu   $t5, 0x3c($s0)
/* 0047C11C 018D1026 */  xor   $v0, $t4, $t5
/* 0047C120 2C420001 */  sltiu $v0, $v0, 1
.L0047C124:
/* 0047C124 1000004A */  b     .L0047C250
/* 0047C128 304800FF */   andi  $t0, $v0, 0xff
.L0047C12C:
/* 0047C12C 1080000B */  beqz  $a0, .L0047C15C
/* 0047C130 00801025 */   move  $v0, $a0
/* 0047C134 8E2E0028 */  lw    $t6, 0x28($s1)
/* 0047C138 8E0F0028 */  lw    $t7, 0x28($s0)
/* 0047C13C 01CF1026 */  xor   $v0, $t6, $t7
/* 0047C140 2C420001 */  sltiu $v0, $v0, 1
/* 0047C144 10400005 */  beqz  $v0, .L0047C15C
/* 0047C148 00000000 */   nop
/* 0047C14C 8E38002C */  lw    $t8, 0x2c($s1)
/* 0047C150 8E19002C */  lw    $t9, 0x2c($s0)
/* 0047C154 03191026 */  xor   $v0, $t8, $t9
/* 0047C158 2C420001 */  sltiu $v0, $v0, 1
.L0047C15C:
/* 0047C15C 1000003C */  b     .L0047C250
/* 0047C160 304800FF */   andi  $t0, $v0, 0xff
.L0047C164:
/* 0047C164 10800005 */  beqz  $a0, .L0047C17C
/* 0047C168 00801025 */   move  $v0, $a0
/* 0047C16C 8E290028 */  lw    $t1, 0x28($s1)
/* 0047C170 8E0A0028 */  lw    $t2, 0x28($s0)
/* 0047C174 012A1026 */  xor   $v0, $t1, $t2
/* 0047C178 2C420001 */  sltiu $v0, $v0, 1
.L0047C17C:
/* 0047C17C 14400009 */  bnez  $v0, .L0047C1A4
/* 0047C180 00000000 */   nop
/* 0047C184 8E0B0028 */  lw    $t3, 0x28($s0)
/* 0047C188 00AB1026 */  xor   $v0, $a1, $t3
/* 0047C18C 2C420001 */  sltiu $v0, $v0, 1
/* 0047C190 1040000A */  beqz  $v0, .L0047C1BC
/* 0047C194 00000000 */   nop
/* 0047C198 8E2C0028 */  lw    $t4, 0x28($s1)
/* 0047C19C 01861026 */  xor   $v0, $t4, $a2
/* 0047C1A0 2C420001 */  sltiu $v0, $v0, 1
.L0047C1A4:
/* 0047C1A4 10400005 */  beqz  $v0, .L0047C1BC
/* 0047C1A8 00000000 */   nop
/* 0047C1AC 8E2D002C */  lw    $t5, 0x2c($s1)
/* 0047C1B0 8E0E002C */  lw    $t6, 0x2c($s0)
/* 0047C1B4 01AE1026 */  xor   $v0, $t5, $t6
/* 0047C1B8 2C420001 */  sltiu $v0, $v0, 1
.L0047C1BC:
/* 0047C1BC 10000024 */  b     .L0047C250
/* 0047C1C0 304800FF */   andi  $t0, $v0, 0xff
.L0047C1C4:
/* 0047C1C4 2C410094 */  sltiu $at, $v0, 0x94
/* 0047C1C8 14200006 */  bnez  $at, .L0047C1E4
/* 0047C1CC 244FFFD2 */   addiu $t7, $v0, -0x2e
/* 0047C1D0 2401009A */  li    $at, 154
/* 0047C1D4 1041FFC7 */  beq   $v0, $at, .L0047C0F4
/* 0047C1D8 00000000 */   nop
/* 0047C1DC 1000001C */  b     .L0047C250
/* 0047C1E0 00000000 */   nop
.L0047C1E4:
/* 0047C1E4 2C410039 */  sltiu $at, $v0, 0x39
/* 0047C1E8 1020000A */  beqz  $at, .L0047C214
/* 0047C1EC 2DE1000B */   sltiu $at, $t7, 0xb
/* 0047C1F0 10200017 */  beqz  $at, .L0047C250
/* 0047C1F4 00000000 */   nop
/* 0047C1F8 8F818044 */  lw    $at, %got(jtbl_1000E1C4)($gp)
/* 0047C1FC 000F7880 */  sll   $t7, $t7, 2
/* 0047C200 002F0821 */  addu  $at, $at, $t7
/* 0047C204 8C2FE1C4 */  lw    $t7, %lo(jtbl_1000E1C4)($at)
/* 0047C208 01FC7821 */  addu  $t7, $t7, $gp
/* 0047C20C 01E00008 */  jr    $t7
/* 0047C210 00000000 */   nop
.L0047C214:
/* 0047C214 24010093 */  li    $at, 147
/* 0047C218 1041FFB6 */  beq   $v0, $at, .L0047C0F4
/* 0047C21C 00000000 */   nop
/* 0047C220 1000000B */  b     .L0047C250
/* 0047C224 00000000 */   nop
.L0047C228:
/* 0047C228 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 0047C22C 8F868044 */  lw    $a2, %got(RO_1000E1B8)($gp)
/* 0047C230 24040001 */  li    $a0, 1
/* 0047C234 240500D1 */  li    $a1, 209
/* 0047C238 2407000A */  li    $a3, 10
/* 0047C23C A3A8002F */  sb    $t0, 0x2f($sp)
/* 0047C240 0320F809 */  jalr  $t9
/* 0047C244 24C6E1B8 */   addiu $a2, %lo(RO_1000E1B8) # addiu $a2, $a2, -0x1e48
/* 0047C248 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0047C24C 93A8002F */  lbu   $t0, 0x2f($sp)
.L0047C250:
/* 0047C250 15000002 */  bnez  $t0, .L0047C25C
/* 0047C254 00000000 */   nop
/* 0047C258 8E31001C */  lw    $s1, 0x1c($s1)
.L0047C25C:
/* 0047C25C 55000004 */  bnezl $t0, .L0047C270
/* 0047C260 8FBF0024 */   lw    $ra, 0x24($sp)
/* 0047C264 5620FF73 */  bnezl $s1, .L0047C034
/* 0047C268 92030000 */   lbu   $v1, ($s0)
/* 0047C26C 8FBF0024 */  lw    $ra, 0x24($sp)
.L0047C270:
/* 0047C270 02201025 */  move  $v0, $s1
/* 0047C274 8FB1001C */  lw    $s1, 0x1c($sp)
/* 0047C278 8FB00018 */  lw    $s0, 0x18($sp)
/* 0047C27C 03E00008 */  jr    $ra
/* 0047C280 27BD0038 */   addiu $sp, $sp, 0x38
    .type findsimilar, @function
    .size findsimilar, .-findsimilar
    .end findsimilar
)"");

/* 
00414108 func_00414108
0041550C func_0041550C
0044E604 binaryfold
0044ED5C ixafold
0044EDF8 ilodfold
0044F3C0 unaryfold
0044FF6C mergeconst
00451764 restructure
0047C53C fixcorr
*/
void copycoderep(struct Expression *dest, struct Expression *src) {
    unsigned short table_index;
    int chain_index;
    struct Expression *next;

    if (src->type == isop) {
        // originally this was a struct copy
        table_index = dest->table_index;
        chain_index = dest->chain_index;

        next = dest->next;

        *dest = *src;

        dest->next = next;

        // originally this was a struct copy
        dest->table_index = table_index;
        dest->chain_index = chain_index;
        return;
    }

    dest->type = src->type;
    dest->datatype = src->datatype;
    dest->graphnode = src->graphnode;
    dest->ichain = src->ichain;
    dest->var_access_list = src->var_access_list;
    switch (src->type) {
        case islda:
            dest->data.islda_isilda.offset = src->data.islda_isilda.offset;
            dest->data.islda_isilda.size = src->data.islda_isilda.size;
            dest->data.islda_isilda.level = src->data.islda_isilda.level;
            dest->data.islda_isilda.address = src->data.islda_isilda.address;
            break;

        case isilda:
            dest->data.islda_isilda.offset = src->data.islda_isilda.offset;
            dest->data.islda_isilda.size = src->data.islda_isilda.size;
            dest->data.islda_isilda.level = src->data.islda_isilda.level;
            dest->data.islda_isilda.address = src->data.islda_isilda.address;

            dest->data.islda_isilda.outer_stack = src->data.islda_isilda.outer_stack;
            dest->data.islda_isilda.unk38 = src->data.islda_isilda.unk38;

            dest->unk4 = src->unk4;
            dest->unk5 = src->unk5;
            dest->count = src->count;
            break;

        case isconst:
            dest->data.isconst.number = src->data.isconst.number;

            dest->data.isconst.size = src->data.isconst.size;
            dest->data.isconst.real_significand = src->data.isconst.real_significand;
            dest->data.isconst.real_exponent = src->data.isconst.real_exponent;
            break;

        case isrconst:
            dest->data.isrconst.value = src->data.isrconst.value;
            dest->data.isrconst.unk24 = src->data.isrconst.unk24;
            break;

        case isvar:
        case issvar:
            dest->unk2 = src->unk2;
            dest->unk3 = src->unk3;
            dest->unk4 = src->unk4;
            dest->unk5 = src->unk5;
            dest->count = src->count;

            dest->data.isvar_issvar.size = src->data.isvar_issvar.size;
            dest->data.isvar_issvar.veqv = src->data.isvar_issvar.veqv;
            dest->data.isvar_issvar.unk22 = src->data.isvar_issvar.unk22;
            dest->data.isvar_issvar.is_volatile = src->data.isvar_issvar.is_volatile;
            dest->data.isvar_issvar.location = src->data.isvar_issvar.location;

            dest->data.isvar_issvar.copy = src->data.isvar_issvar.copy;
            dest->data.isvar_issvar.assigned_value = src->data.isvar_issvar.assigned_value;
            dest->data.isvar_issvar.assignment = src->data.isvar_issvar.assignment;
            dest->data.isvar_issvar.outer_stack = src->data.isvar_issvar.outer_stack;
            dest->data.isvar_issvar.unk3C = src->data.isvar_issvar.unk3C;
            break;

        default:
        case isop:
        case dumped:
            caseerror(1, 255, "uoptutil.p", 10);
            break;
    }
}

/*
004496F0 slkilled
0044A5C8 smkilled
0044AAD0 sskilled
0044BDFC cskilled
0044D0C4 pskilled
0044DBC4 indirectaccessed
00478FA0 func_00478FA0
*/
void fix_sbase(struct Statement *stat) {
    if (stat->u.store.baseaddr->ichain != NULL) {
        if (stat->u.store.baseaddr->ichain->expr != NULL) {
            stat->u.store.baseaddr = stat->u.store.baseaddr->ichain->expr;
        }
    }
}


/* 
004496F0 slkilled
0044A5C8 smkilled
0044AAD0 sskilled
0044BDFC cskilled
0044D0C4 pskilled
0044DBC4 indirectaccessed
00478FA0 func_00478FA0
 */
void fix_base(struct Expression *expr) {
    if (expr->data.islda_isilda.outer_stack->ichain != NULL) {
        if (expr->data.islda_isilda.outer_stack->ichain->expr != NULL) {
            expr->data.islda_isilda.outer_stack = expr->data.islda_isilda.outer_stack->ichain->expr;
        }
    }
}

/* 
0041550C func_0041550C
004712A4 reset_images
004713E8 loopunroll
0047C650 delentry
*/
void fixcorr(struct Expression *expr) {
    if (expr->ichain->expr == expr) {
        if (expr->type == isop || expr->type == isvar || expr->type == issvar) {
            if (expr->type != isop ||
                    (expr->data.isop.opc == Uiequ ||
                     expr->data.isop.opc == Uigeq ||
                     expr->data.isop.opc == Uigrt ||
                     expr->data.isop.opc == Uildv ||
                     expr->data.isop.opc == Uileq ||
                     expr->data.isop.opc == Uiles ||
                     expr->data.isop.opc == Uilod ||
                     expr->data.isop.opc == Uineq ||
                     expr->data.isop.opc == Uirld ||
                     expr->data.isop.opc == Uirlv)) {
                expr->ichain->expr = findsimilar(expr);
                if (expr->ichain->expr == NULL) {
                    expr->ichain->expr = appendchain(expr->table_index);
                    copycoderep(expr->ichain->expr, expr);
                    expr->ichain->expr->graphnode = NULL;
                }
            }
        }
    }
}

/*
00413000 exprdelete
0041550C func_0041550C
0043CFCC readnxtinst
0044FF6C mergeconst
00451764 restructure
0047C6E8 decreasecount
0047D878 deccount
*/
void delentry(struct Expression *entry) {
    if (entry->type == isvar || entry->type == issvar) {
        if (entry->data.isvar_issvar.assignment != NULL && entry->data.isvar_issvar.assignment->opc != Unop) {
            return;
        }
    }
    if (entry->ichain != NULL) {
        fixcorr(entry);
    }
    entry->type = dumped;
}

/* 
0042F6CC controlflow
0043ABD0 incroccurrence
0043CBFC func_0043CBFC
0043CE64 func_0043CE64
0043CFCC readnxtinst
0044EDF8 ilodfold
00451764 restructure
0046C654 del_orig_cond
0046D158 unroll_check_istr_propcopy
0046D2C0 unroll_check_irst_propcopy
0046E77C oneloopblockstmt
004713E8 loopunroll
004737E0 par_to_str
004787B0 func_004787B0
0047C6E8 decreasecount
0047C960 increasecount
0047E3BC binopwithconst
*/
void decreasecount(struct Expression *expr) {
    if (expr == NULL) {
        return;
    }

    switch(expr->type) {
        case islda:
        case isconst:
        case isrconst:
            return;

        case isilda:
            expr->count--;
            if (expr->count == 0) {
                decreasecount(expr->data.islda_isilda.outer_stack);
                delentry(expr);
            }
            return;

        case isvar:
            if (expr->data.isvar_issvar.copy != NULL 
                    && expr->data.isvar_issvar.copy != nocopy) {
                decreasecount(expr->data.isvar_issvar.copy);
            } else {
                expr->count--;
                if (expr->count == 0) {
                    expr->var_access_list->type = 0; // type 0 = deleted?
                    delentry(expr);
                }
            }
            return;

        case issvar:
            if (expr->data.isvar_issvar.copy != NULL 
                    && expr->data.isvar_issvar.copy != nocopy) {
                decreasecount(expr->data.isvar_issvar.copy);
            } else {
                expr->count--;
                if (expr->count == 0) {
                    expr->var_access_list->type = 0;
                    if (expr->data.isvar_issvar.assignment == NULL || expr->data.isvar_issvar.assignment->opc == Unop) {
                        decreasecount(expr->data.isvar_issvar.outer_stack);
                    } else {
                        delentry(expr);
                    }
                }
            }
            return;

        case isop:
            expr->count--;
            if (expr->count == 0) {

                switch (expr->data.isop.opc) {
                    case Uiequ:
                    case Uigeq:
                    case Uigrt:
                    case Uildv:
                    case Uileq:
                    case Uiles:
                    case Uilod:
                    case Uineq:
                    case Uirld:
                    case Uirlv:
                        expr->var_access_list->type = 0;
                        break;
                }

                decreasecount(expr->data.isop.op1);
                if (optab[expr->data.isop.opc].is_binary_op) {
                    decreasecount(expr->data.isop.op2);
                }

                delentry(expr);
            }
            return;

        case empty:
        case dumped:
        default:
            caseerror(1, 365, "uoptutil.p", 10);
            break;
    }
}

/* 
0043ABD0 incroccurrence
0043CBFC func_0043CBFC
0043CFCC readnxtinst
0044EDF8 ilodfold
0046BA10 change_to_const_eq
0046BD90 change_to_var_eq
0046D428 oneloopblockexpr
0047090C form_bop
00470AAC form_rem
00470DD8 form_neq0
00470F88 form_neg
*/
void increasecount(struct Expression *expr) {
    if (expr == NULL) {
        return;
    }

    switch (expr->type) {
        case islda:
        case isconst:
        case isrconst:
            return;

        case isvar:
            expr->count++;
            return;

        case issvar:
            expr->count++;
            if (expr->count > 1) {
                decreasecount(expr->data.isvar_issvar.outer_stack);
            }
            return;

        case isilda:
            expr->count++;
            if (expr->count > 1) {
                decreasecount(expr->data.islda_isilda.outer_stack);
            }
            return;

        case isop:
            expr->count++;
            numlcse++; // local common subexpressions
            if (expr->count > 1) {
                decreasecount(expr->data.isop.op1);
                if (optab[expr->data.isop.opc].is_binary_op) {
                    decreasecount(expr->data.isop.op2);
                }
            }
            return;

        case dumped:
        default:
            caseerror(1, 423, "uoptutil.p", 10);
            return;
    }
}

/*
00414108 func_00414108
0043CFCC readnxtinst
0047E100 enter_const
*/
int isconsthash(int number) {
    int ret = number % 9113;
    return ret < 0 ? ret + 9113 : ret;
}

/*
00414108 func_00414108
0043C248 func_0043C248
0043C56C func_0043C56C
0043CFCC readnxtinst
*/
int realhash(int len) {
    int hash = 0;
    int i;

    for (i = 0; i < len; i++) {
        hash += (unsigned char)ustrptr[i];
    }

    hash = ((hash * len) << 6) % 9113; // note: same size as table variable
    return hash < 0 ? hash + 9113 : hash;
}

/*
00414108 func_00414108
00425618 func_00425618
00439FA4 formal_parm_vreg
0043CBFC func_0043CBFC
0043CFCC readnxtinst
0044EDF8 ilodfold
0044F1B8 istrfold
00459564 update_veqv_in_table
0045FBB4 func_0045FBB4
004710F0 str_to_temporary
004737E0 par_to_str
00473F04 pmov_to_mov
00475E38 func_00475E38
00476E40 func_00476E40
0047D768 vartreeinfo
0047E24C enter_lda
*/
int isvarhash(struct VariableLocation loc) {
    int hash = (((loc.memtype << 6) + loc.blockno + loc.addr) << 4) % 9113;
    return hash < 0 ? hash + 9113 : hash;
}

__asm__(R""(
.set noat
.set noreorder

glabel isophash
    .ent isophash
    # 00414108 func_00414108
    # 0043CFCC readnxtinst
    # 0046BA10 change_to_const_eq
    # 0046BD90 change_to_var_eq
    # 0046D428 oneloopblockexpr
    # 0047090C form_bop
    # 00470AAC form_rem
    # 00470DD8 form_neq0
    # 00470F88 form_neg
    # 0047E3BC binopwithconst
/* 0047CBEC 14C0000E */  bnez  $a2, .L0047CC28
/* 0047CBF0 AFA40000 */   sw    $a0, ($sp)
/* 0047CBF4 14A0000C */  bnez  $a1, .L0047CC28
/* 0047CBF8 00047080 */   sll   $t6, $a0, 2
/* 0047CBFC 01C47021 */  addu  $t6, $t6, $a0
/* 0047CC00 000E7100 */  sll   $t6, $t6, 4
/* 0047CC04 01C47023 */  subu  $t6, $t6, $a0
/* 0047CC08 24012399 */  li    $at, 9113
/* 0047CC0C 01C1001A */  div   $zero, $t6, $at
/* 0047CC10 00001810 */  mfhi  $v1
/* 0047CC14 04610043 */  bgez  $v1, .L0047CD24
/* 0047CC18 00000000 */   nop
/* 0047CC1C 20632399 */  addi  $v1, $v1, 0x2399
/* 0047CC20 03E00008 */  jr    $ra
/* 0047CC24 00601025 */   move  $v0, $v1

.L0047CC28:
/* 0047CC28 14C00013 */  bnez  $a2, .L0047CC78
/* 0047CC2C 00000000 */   nop
/* 0047CC30 8CB8000C */  lw    $t8, 0xc($a1)
/* 0047CC34 94AF0008 */  lhu   $t7, 8($a1)
/* 0047CC38 000448C0 */  sll   $t1, $a0, 3
/* 0047CC3C 27190002 */  addiu $t9, $t8, 2
/* 0047CC40 01F90019 */  multu $t7, $t9
/* 0047CC44 24012399 */  li    $at, 9113
/* 0047CC48 00004012 */  mflo  $t0
/* 0047CC4C 01285021 */  addu  $t2, $t1, $t0
/* 0047CC50 000A5880 */  sll   $t3, $t2, 2
/* 0047CC54 016A5821 */  addu  $t3, $t3, $t2
/* 0047CC58 000B5840 */  sll   $t3, $t3, 1
/* 0047CC5C 0161001A */  div   $zero, $t3, $at
/* 0047CC60 00001810 */  mfhi  $v1
/* 0047CC64 0461002F */  bgez  $v1, .L0047CD24
/* 0047CC68 00000000 */   nop
/* 0047CC6C 20632399 */  addi  $v1, $v1, 0x2399
/* 0047CC70 03E00008 */  jr    $ra
/* 0047CC74 00601025 */   move  $v0, $v1

.L0047CC78:
/* 0047CC78 54A00014 */  bnezl $a1, .L0047CCCC
/* 0047CC7C 94A80008 */   lhu   $t0, 8($a1)
/* 0047CC80 8CCD000C */  lw    $t5, 0xc($a2)
/* 0047CC84 94CC0008 */  lhu   $t4, 8($a2)
/* 0047CC88 000478C0 */  sll   $t7, $a0, 3
/* 0047CC8C 25AE0003 */  addiu $t6, $t5, 3
/* 0047CC90 018E0019 */  multu $t4, $t6
/* 0047CC94 24012399 */  li    $at, 9113
/* 0047CC98 0000C012 */  mflo  $t8
/* 0047CC9C 01F8C821 */  addu  $t9, $t7, $t8
/* 0047CCA0 00194880 */  sll   $t1, $t9, 2
/* 0047CCA4 01394821 */  addu  $t1, $t1, $t9
/* 0047CCA8 00094840 */  sll   $t1, $t1, 1
/* 0047CCAC 0121001A */  div   $zero, $t1, $at
/* 0047CCB0 00001810 */  mfhi  $v1
/* 0047CCB4 0461001B */  bgez  $v1, .L0047CD24
/* 0047CCB8 00000000 */   nop
/* 0047CCBC 20632399 */  addi  $v1, $v1, 0x2399
/* 0047CCC0 03E00008 */  jr    $ra
/* 0047CCC4 00601025 */   move  $v0, $v1

/* 0047CCC8 94A80008 */  lhu   $t0, 8($a1)
.L0047CCCC:
/* 0047CCCC 94CA0008 */  lhu   $t2, 8($a2)
/* 0047CCD0 8CAE000C */  lw    $t6, 0xc($a1)
/* 0047CCD4 8CD8000C */  lw    $t8, 0xc($a2)
/* 0047CCD8 010A0019 */  multu $t0, $t2
/* 0047CCDC 25CF0002 */  addiu $t7, $t6, 2
/* 0047CCE0 27190002 */  addiu $t9, $t8, 2
/* 0047CCE4 000468C0 */  sll   $t5, $a0, 3
/* 0047CCE8 24012399 */  li    $at, 9113
/* 0047CCEC 00005812 */  mflo  $t3
/* 0047CCF0 01AB6021 */  addu  $t4, $t5, $t3
/* 0047CCF4 00000000 */  nop
/* 0047CCF8 01F90019 */  multu $t7, $t9
/* 0047CCFC 00004812 */  mflo  $t1
/* 0047CD00 01894021 */  addu  $t0, $t4, $t1
/* 0047CD04 00085080 */  sll   $t2, $t0, 2
/* 0047CD08 01485021 */  addu  $t2, $t2, $t0
/* 0047CD0C 000A5040 */  sll   $t2, $t2, 1
/* 0047CD10 0141001A */  div   $zero, $t2, $at
/* 0047CD14 00001810 */  mfhi  $v1
/* 0047CD18 04610002 */  bgez  $v1, .L0047CD24
/* 0047CD1C 00000000 */   nop
/* 0047CD20 20632399 */  addi  $v1, $v1, 0x2399
.L0047CD24:
/* 0047CD24 03E00008 */  jr    $ra
/* 0047CD28 00601025 */   move  $v0, $v1
    .type isophash, @function
    .size isophash, .-isophash
    .end isophash

glabel opvalhash
    .ent opvalhash
    # 00414108 func_00414108
    # 004150E4 func_004150E4
    # 0043CFCC readnxtinst
    # 0046D428 oneloopblockexpr
/* 0047CD2C 10A00012 */  beqz  $a1, .L0047CD78
/* 0047CD30 AFA40000 */   sw    $a0, ($sp)
/* 0047CD34 94AE0008 */  lhu   $t6, 8($a1)
/* 0047CD38 8CB8000C */  lw    $t8, 0xc($a1)
/* 0047CD3C 000448C0 */  sll   $t1, $a0, 3
/* 0047CD40 01C67821 */  addu  $t7, $t6, $a2
/* 0047CD44 27190002 */  addiu $t9, $t8, 2
/* 0047CD48 01F90019 */  multu $t7, $t9
/* 0047CD4C 24012399 */  li    $at, 9113
/* 0047CD50 00004012 */  mflo  $t0
/* 0047CD54 01285021 */  addu  $t2, $t1, $t0
/* 0047CD58 00000000 */  nop
/* 0047CD5C 0141001A */  div   $zero, $t2, $at
/* 0047CD60 00001810 */  mfhi  $v1
/* 0047CD64 0461000D */  bgez  $v1, .L0047CD9C
/* 0047CD68 00000000 */   nop
/* 0047CD6C 20632399 */  addi  $v1, $v1, 0x2399
/* 0047CD70 03E00008 */  jr    $ra
/* 0047CD74 00601025 */   move  $v0, $v1

.L0047CD78:
/* 0047CD78 000458C0 */  sll   $t3, $a0, 3
/* 0047CD7C 00066040 */  sll   $t4, $a2, 1
/* 0047CD80 016C6821 */  addu  $t5, $t3, $t4
/* 0047CD84 24012399 */  li    $at, 9113
/* 0047CD88 01A1001A */  div   $zero, $t5, $at
/* 0047CD8C 00001810 */  mfhi  $v1
/* 0047CD90 04610002 */  bgez  $v1, .L0047CD9C
/* 0047CD94 00000000 */   nop
/* 0047CD98 20632399 */  addi  $v1, $v1, 0x2399
.L0047CD9C:
/* 0047CD9C 03E00008 */  jr    $ra
/* 0047CDA0 00601025 */   move  $v0, $v1
    .type opvalhash, @function
    .size opvalhash, .-opvalhash
    .end opvalhash

)"");

/*
0043CFCC readnxtinst
00456310 one_block
00456A2C oneproc
0046E77C oneloopblockstmt
004704B0 termination_test
004710F0 str_to_temporary
004713E8 loopunroll
004737E0 par_to_str
00473F04 pmov_to_mov
004761D0 tail_recursion
*/
void extendstat(Uopcode opc) {
    struct Statement *stat;

    stat = (struct Statement *)alloc_new(sizeof(struct Statement), &perm_heap);
    if (stat == NULL) {
        outofmem = true;
        return;
    }
#ifdef AVOID_UB
    *stat = (struct Statement) {0};
#endif
    stat->next = NULL;
    stat->opc = opc;
    stat->u.store.ichain = NULL;
    stat->graphnode = curgraphnode;
    if (stathead == NULL) {
        stathead = stat;
        stat->prev = NULL;
    } else {
        stat->prev = stattail;
        stattail->next = stat;
    }
    stattail = stat;
    if (curgraphnode != NULL && curgraphnode->stat_head == NULL) {
        curgraphnode->stat_head = stattail;
    }
}

/*
0041550C func_0041550C
0041F048 genrop
0041FB20 spilltemplodstr
004205F8 genrlodrstr
004230F0 func_004230F0
00426FA4 func_00426FA4
0042B2C0 func_0042B2C0
0042B890 func_0042B890
0042BB4C func_0042BB4C
0042BF08 reemit
0043CFCC readnxtinst
0044821C expr_has_direct_usage
00448530 has_direct_induct_usage
0044E604 binaryfold
00465E50 spilltemps
004710F0 str_to_temporary
004713E8 loopunroll
004737E0 par_to_str
0047E100 enter_const
*/
int sizeoftyp(Datatype t) {
    return (t == Idt || t == Kdt || t == Qdt) ? 8 : 4;
}

/*
0043CFCC readnxtinst
0044EDF8 ilodfold
0044F1B8 istrfold
*/
int blktolev(int blk) {
    int lev = curlevel;
    bool stop = false;

    while (!stop && lev >= 2) {
        if (blk == blklev[lev - 1]) {
            stop = true;
        } else {
            lev--;
        }
    }

    return blk == 0 ? 0 : lev;
}

/*
00444A84 isearchloop
00445AEC trep_image
00446E18 searchstore
0045E45C func_0045E45C
0045E5C4 func_0045E5C4
0045FBB4 func_0045FBB4
0046123C func_0046123C
00467F04 split
*/
int newbit(struct IChain *ichain, struct LiveRange *liverange) {
    int insertpos;
    int newcount;

    if (bittabsize == bitposcount) {
        bittab = (struct BittabItem *)alloc_realloc(bittab,
            bittabsize * (int)sizeof(struct BittabItem) / 16,
            ((bittabsize + 128) * (int)sizeof(struct BittabItem)) / 16,
            &perm_heap);
        bittabsize += 128;
    }
    insertpos = bitposcount++;
    newcount = bitposcount;
    bittab[insertpos].ichain = ichain;
    bittab[insertpos].liverange = liverange;
    if ((bitvectorsize << 7) < newcount) {
        bitvectorsize++;
    }
    return insertpos;
}

__asm__(R""(
.set noat
.set noreorder

glabel exproccurred
    .ent exproccurred
    # 004127C8 checkexpoccur
    # 0042FEA0 func_0042FEA0
    # 00474AF0 inpathbefore
    # 00474C58 inpathafter
    # 0047D000 exproccurred
/* 0047D000 3C1C0FBA */  .cpload $t9
/* 0047D004 279CD290 */
/* 0047D008 0399E021 */
/* 0047D00C 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0047D010 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0047D014 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0047D018 00A03025 */  move  $a2, $a1
/* 0047D01C 240A0003 */  li    $t2, 3
/* 0047D020 8F898DBC */  lw     $t1, %got(optab)($gp)
/* 0047D024 24080006 */  li    $t0, 6
/* 0047D028 8F8789CC */  lw     $a3, %got(nocopy)($gp)
.L0047D02C:
/* 0047D02C 90C30000 */  lbu   $v1, ($a2)
/* 0047D030 00C02825 */  move  $a1, $a2
/* 0047D034 246EFFFF */  addiu $t6, $v1, -1
/* 0047D038 2DC10008 */  sltiu $at, $t6, 8
/* 0047D03C 10200044 */  beqz  $at, .L0047D150
/* 0047D040 00000000 */   nop
/* 0047D044 8F818044 */  lw    $at, %got(jtbl_1000E290)($gp)
/* 0047D048 000E7080 */  sll   $t6, $t6, 2
/* 0047D04C 002E0821 */  addu  $at, $at, $t6
/* 0047D050 8C2EE290 */  lw    $t6, %lo(jtbl_1000E290)($at)
/* 0047D054 01DC7021 */  addu  $t6, $t6, $gp
/* 0047D058 01C00008 */  jr    $t6
/* 0047D05C 00000000 */   nop
.L0047D060:
/* 0047D060 10000044 */  b     .L0047D174
/* 0047D064 00001825 */   move  $v1, $zero
.L0047D068:
/* 0047D068 8CCF0014 */  lw    $t7, 0x14($a2)
/* 0047D06C 148F0003 */  bne   $a0, $t7, .L0047D07C
/* 0047D070 00000000 */   nop
/* 0047D074 1000003F */  b     .L0047D174
/* 0047D078 24030001 */   li    $v1, 1
.L0047D07C:
/* 0047D07C 1000FFEB */  b     .L0047D02C
/* 0047D080 8CA60034 */   lw    $a2, 0x34($a1)
.L0047D084:
/* 0047D084 8CC20030 */  lw    $v0, 0x30($a2)
/* 0047D088 50400007 */  beql  $v0, $zero, .L0047D0A8
/* 0047D08C 8CD90014 */   lw    $t9, 0x14($a2)
/* 0047D090 8CF80000 */  lw    $t8, ($a3)
/* 0047D094 53020004 */  beql  $t8, $v0, .L0047D0A8
/* 0047D098 8CD90014 */   lw    $t9, 0x14($a2)
/* 0047D09C 1000FFE3 */  b     .L0047D02C
/* 0047D0A0 8CA60030 */   lw    $a2, 0x30($a1)
/* 0047D0A4 8CD90014 */  lw    $t9, 0x14($a2)
.L0047D0A8:
/* 0047D0A8 14990003 */  bne   $a0, $t9, .L0047D0B8
/* 0047D0AC 00000000 */   nop
/* 0047D0B0 10000030 */  b     .L0047D174
/* 0047D0B4 24030001 */   li    $v1, 1
.L0047D0B8:
/* 0047D0B8 15030003 */  bne   $t0, $v1, .L0047D0C8
/* 0047D0BC 00000000 */   nop
/* 0047D0C0 1000FFDA */  b     .L0047D02C
/* 0047D0C4 8CA60024 */   lw    $a2, 0x24($a1)
.L0047D0C8:
/* 0047D0C8 1000002A */  b     .L0047D174
/* 0047D0CC 00001825 */   move  $v1, $zero
.L0047D0D0:
/* 0047D0D0 8CCB0014 */  lw    $t3, 0x14($a2)
/* 0047D0D4 548B0004 */  bnel  $a0, $t3, .L0047D0E8
/* 0047D0D8 90CC0020 */   lbu   $t4, 0x20($a2)
/* 0047D0DC 10000025 */  b     .L0047D174
/* 0047D0E0 24030001 */   li    $v1, 1
/* 0047D0E4 90CC0020 */  lbu   $t4, 0x20($a2)
.L0047D0E8:
/* 0047D0E8 018A0019 */  multu $t4, $t2
/* 0047D0EC 00006812 */  mflo  $t5
/* 0047D0F0 012D7021 */  addu  $t6, $t1, $t5
/* 0047D0F4 91CF0002 */  lbu   $t7, 2($t6)
/* 0047D0F8 11E00011 */  beqz  $t7, .L0047D140
/* 0047D0FC 00000000 */   nop
/* 0047D100 8F998668 */  lw    $t9, %call16(exproccurred)($gp)
/* 0047D104 8CC50024 */  lw    $a1, 0x24($a2)
/* 0047D108 AFA40028 */  sw    $a0, 0x28($sp)
/* 0047D10C 0320F809 */  jalr  $t9
/* 0047D110 AFA6002C */   sw    $a2, 0x2c($sp)
/* 0047D114 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0047D118 8FA40028 */  lw    $a0, 0x28($sp)
/* 0047D11C 14400006 */  bnez  $v0, .L0047D138
/* 0047D120 8FA6002C */   lw    $a2, 0x2c($sp)
/* 0047D124 8F998668 */  lw    $t9, %call16(exproccurred)($gp)
/* 0047D128 8CC50028 */  lw    $a1, 0x28($a2)
/* 0047D12C 0320F809 */  jalr  $t9
/* 0047D130 00000000 */   nop
/* 0047D134 8FBC0018 */  lw    $gp, 0x18($sp)
.L0047D138:
/* 0047D138 1000000E */  b     .L0047D174
/* 0047D13C 304300FF */   andi  $v1, $v0, 0xff
.L0047D140:
/* 0047D140 1000FFBA */  b     .L0047D02C
/* 0047D144 8CA60024 */   lw    $a2, 0x24($a1)
.L0047D148:
/* 0047D148 1000000A */  b     .L0047D174
/* 0047D14C 00001825 */   move  $v1, $zero
.L0047D150:
/* 0047D150 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 0047D154 8F868044 */  lw    $a2, %got(RO_1000E284)($gp)
/* 0047D158 24040001 */  li    $a0, 1
/* 0047D15C 24050254 */  li    $a1, 596
/* 0047D160 2407000A */  li    $a3, 10
/* 0047D164 0320F809 */  jalr  $t9
/* 0047D168 24C6E284 */   addiu $a2, %lo(RO_1000E284) # addiu $a2, $a2, -0x1d7c
/* 0047D16C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0047D170 93A30027 */  lbu   $v1, 0x27($sp)
.L0047D174:
/* 0047D174 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0047D178 27BD0028 */  addiu $sp, $sp, 0x28
/* 0047D17C 00601025 */  move  $v0, $v1
/* 0047D180 03E00008 */  jr    $ra
/* 0047D184 00000000 */   nop
    .type exproccurred, @function
    .size exproccurred, .-exproccurred
    .end exproccurred

glabel iexproccurred
    .ent iexproccurred
    # 00431508 func_00431508
    # 0047D188 iexproccurred
/* 0047D188 3C1C0FBA */  .cpload $t9
/* 0047D18C 279CD108 */
/* 0047D190 0399E021 */
/* 0047D194 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0047D198 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0047D19C AFBC0018 */  sw    $gp, 0x18($sp)
/* 0047D1A0 00A03025 */  move  $a2, $a1
/* 0047D1A4 24090003 */  li    $t1, 3
/* 0047D1A8 8F888DBC */  lw     $t0, %got(optab)($gp)
/* 0047D1AC 24070006 */  li    $a3, 6
.L0047D1B0:
/* 0047D1B0 90C30000 */  lbu   $v1, ($a2)
/* 0047D1B4 00C02825 */  move  $a1, $a2
/* 0047D1B8 246EFFFF */  addiu $t6, $v1, -1
/* 0047D1BC 2DC10008 */  sltiu $at, $t6, 8
/* 0047D1C0 10200037 */  beqz  $at, .L0047D2A0
/* 0047D1C4 00000000 */   nop
/* 0047D1C8 8F818044 */  lw    $at, %got(jtbl_1000E2BC)($gp)
/* 0047D1CC 000E7080 */  sll   $t6, $t6, 2
/* 0047D1D0 002E0821 */  addu  $at, $at, $t6
/* 0047D1D4 8C2EE2BC */  lw    $t6, %lo(jtbl_1000E2BC)($at)
/* 0047D1D8 01DC7021 */  addu  $t6, $t6, $gp
/* 0047D1DC 01C00008 */  jr    $t6
/* 0047D1E0 00000000 */   nop
.L0047D1E4:
/* 0047D1E4 10000037 */  b     .L0047D2C4
/* 0047D1E8 00001825 */   move  $v1, $zero
.L0047D1EC:
/* 0047D1EC 14C40003 */  bne   $a2, $a0, .L0047D1FC
/* 0047D1F0 00000000 */   nop
/* 0047D1F4 10000033 */  b     .L0047D2C4
/* 0047D1F8 24030001 */   li    $v1, 1
.L0047D1FC:
/* 0047D1FC 1000FFEC */  b     .L0047D1B0
/* 0047D200 8CA60020 */   lw    $a2, 0x20($a1)
.L0047D204:
/* 0047D204 14C40003 */  bne   $a2, $a0, .L0047D214
/* 0047D208 00000000 */   nop
/* 0047D20C 1000002D */  b     .L0047D2C4
/* 0047D210 24030001 */   li    $v1, 1
.L0047D214:
/* 0047D214 14E30003 */  bne   $a3, $v1, .L0047D224
/* 0047D218 00000000 */   nop
/* 0047D21C 1000FFE4 */  b     .L0047D1B0
/* 0047D220 8CA6001C */   lw    $a2, 0x1c($a1)
.L0047D224:
/* 0047D224 10000027 */  b     .L0047D2C4
/* 0047D228 00001825 */   move  $v1, $zero
.L0047D22C:
/* 0047D22C 54C40004 */  bnel  $a2, $a0, .L0047D240
/* 0047D230 90CF0010 */   lbu   $t7, 0x10($a2)
/* 0047D234 10000023 */  b     .L0047D2C4
/* 0047D238 24030001 */   li    $v1, 1
/* 0047D23C 90CF0010 */  lbu   $t7, 0x10($a2)
.L0047D240:
/* 0047D240 01E90019 */  multu $t7, $t1
/* 0047D244 0000C012 */  mflo  $t8
/* 0047D248 0118C821 */  addu  $t9, $t0, $t8
/* 0047D24C 932A0002 */  lbu   $t2, 2($t9)
/* 0047D250 11400011 */  beqz  $t2, .L0047D298
/* 0047D254 00000000 */   nop
/* 0047D258 8F99866C */  lw    $t9, %call16(iexproccurred)($gp)
/* 0047D25C 8CC50014 */  lw    $a1, 0x14($a2)
/* 0047D260 AFA40028 */  sw    $a0, 0x28($sp)
/* 0047D264 0320F809 */  jalr  $t9
/* 0047D268 AFA6002C */   sw    $a2, 0x2c($sp)
/* 0047D26C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0047D270 8FA40028 */  lw    $a0, 0x28($sp)
/* 0047D274 14400006 */  bnez  $v0, .L0047D290
/* 0047D278 8FA6002C */   lw    $a2, 0x2c($sp)
/* 0047D27C 8F99866C */  lw    $t9, %call16(iexproccurred)($gp)
/* 0047D280 8CC50018 */  lw    $a1, 0x18($a2)
/* 0047D284 0320F809 */  jalr  $t9
/* 0047D288 00000000 */   nop
/* 0047D28C 8FBC0018 */  lw    $gp, 0x18($sp)
.L0047D290:
/* 0047D290 1000000C */  b     .L0047D2C4
/* 0047D294 304300FF */   andi  $v1, $v0, 0xff
.L0047D298:
/* 0047D298 1000FFC5 */  b     .L0047D1B0
/* 0047D29C 8CA60014 */   lw    $a2, 0x14($a1)
.L0047D2A0:
/* 0047D2A0 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 0047D2A4 8F868044 */  lw    $a2, %got(RO_1000E2B0)($gp)
/* 0047D2A8 24040001 */  li    $a0, 1
/* 0047D2AC 2405027A */  li    $a1, 634
/* 0047D2B0 2407000A */  li    $a3, 10
/* 0047D2B4 0320F809 */  jalr  $t9
/* 0047D2B8 24C6E2B0 */   addiu $a2, %lo(RO_1000E2B0) # addiu $a2, $a2, -0x1d50
/* 0047D2BC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0047D2C0 93A30027 */  lbu   $v1, 0x27($sp)
.L0047D2C4:
/* 0047D2C4 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0047D2C8 27BD0028 */  addiu $sp, $sp, 0x28
/* 0047D2CC 00601025 */  move  $v0, $v1
/* 0047D2D0 03E00008 */  jr    $ra
/* 0047D2D4 00000000 */   nop
    .type iexproccurred, @function
    .size iexproccurred, .-iexproccurred
    .end iexproccurred

)"");

/*
0047D4A8 addovfw
*/
bool addovfw_signed(int a, int b) {
    if (a < 0 && b < 0 && b < (int)(0x80000000U - (unsigned int)a)) {
        return true;
    }
    if (a > 0 && b > 0 && (int)(0x7fffffffU - (unsigned int)a) < b) {
        return true;
    }
    return false;
}

/*
0047D520 subovfw
*/
bool subovfw_signed(int a, int b) {
    if (a < 0 && b > 0 && a < (int)((unsigned int)b + 0x80000000U)) {
        return true;
    }
    if (a > 0 && b < 0 && (int)((unsigned int)b + 0x7fffffffU) < a) {
        return true;
    }
    return false;
}

/*
0047D598 mpyovfw
0047FBE0 val_when_exponent0
*/
bool mpyovfw_signed(int a, int b) {
    if (a == 0 || b == 0 || b == 1 || a == 1) {
        return false;
    }
    if (a < 0) {
        if ((unsigned int)a == 0x80000000U) {
            return true;
        }
        a = -a;
    }
    if (b < 0) {
        if ((unsigned int)b == 0x80000000U) {
            return true;
        }
        b = -b;
    }
    return 0x7fffffff / b < a;
}

/*
0047D4A8 addovfw
*/
bool addovfw_unsigned(unsigned int a, unsigned int b) {
    return a + b < a;
}

/*
0047D520 subovfw
*/
bool subovfw_unsigned(unsigned int a, unsigned int b) {
    return a < b;
}

/*
0047D598 mpyovfw
*/
bool mpyovfw_unsigned(unsigned int a, unsigned int b) {
    if (a == 0 || b == 0 || b == 1 || a == 1) {
        return false;
    }
    return 0xffffffffU / b < a;
}

/*
00425618 func_00425618
0043CFCC readnxtinst
0044DF30 binaryovfw
0044E35C ixaovfw
0044E410 unaryovfw
0044FF6C mergeconst
00477118 func_00477118
*/
bool addovfw(enum Datatype t, int a, int b) {
    if (t != Ldt) {
        return addovfw_signed(a, b);
    } else {
        return addovfw_unsigned((unsigned int)a, (unsigned int)b);
    }
}

/*
00425618 func_00425618
0043CFCC readnxtinst
0044DF30 binaryovfw
0044E410 unaryovfw
0044FF6C mergeconst
00477118 func_00477118
*/
bool subovfw(enum Datatype t, int a, int b) {
    if (t != Ldt) {
        return subovfw_signed(a, b);
    } else {
        return subovfw_unsigned((unsigned int)a, (unsigned int)b);
    }
}

/*
00425618 func_00425618
0044DF30 binaryovfw
0044E35C ixaovfw
0044F738 linearize
0044FF6C mergeconst
004510A0 distrlaw
00477118 func_00477118
*/
bool mpyovfw(enum Datatype t, int a, int b) {
    if (t != Ldt) {
        return mpyovfw_signed(a, b);
    } else {
        return mpyovfw_unsigned((unsigned int)a, (unsigned int)b);
    }
}

/*
0043CFCC readnxtinst
00459564 update_veqv_in_table
0047D768 vartreeinfo
*/
struct Expression *searchvar(unsigned short table_index, struct VariableLocation *loc) {
    struct Expression *entry = table[table_index];
    bool found = false;

    while (!found && entry != NULL) {
        if ((entry->type == isvar || entry->type == issvar) && addreq(entry->data.isvar_issvar.location, *loc)) {
            found = true;
        } else {
            entry = entry->next;
        }
    }

    if (!found) {
        entry = appendchain(table_index);
    }

    if (loc->memtype == Rmt || loc->memtype == Smt || curblk == loc->blockno) {
        entry->type = isvar;
    } else {
        entry->type = issvar;
    }
    entry->data.isvar_issvar.location = *loc;
    return entry;
}

/*
0047D768 vartreeinfo
0047D838 entervregveqv
*/
void vartreeinfo(struct Variable *var) {
    struct Expression *entry;

    while (var != NULL) {
        if (var->unk2 || var->veqv) {
            entry = searchvar(isvarhash(var->location), &var->location);
            entry->graphnode = NULL;
            entry->data.isvar_issvar.size = (unsigned char)var->size;
            entry->data.isvar_issvar.unk22 = var->unk2;
            entry->data.isvar_issvar.veqv = var->veqv;
        }
        vartreeinfo(var->left);
        var = var->right;
    }
}

/*
00456A2C oneproc
*/
void entervregveqv(void) {
    vartreeinfo(curproc->vartree);
}

__asm__(R""(
.set noat
.set noreorder

glabel deccount
    .ent deccount
    # 00479778 func_00479778
    # 00479DC4 eliminduct
    # 0047D878 deccount
/* 0047D878 3C1C0FBA */  .cpload $t9
/* 0047D87C 279CCA18 */
/* 0047D880 0399E021 */
/* 0047D884 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0047D888 AFB00014 */  sw    $s0, 0x14($sp)
/* 0047D88C 00808025 */  move  $s0, $a0
/* 0047D890 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0047D894 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0047D898 00A03025 */  move  $a2, $a1
/* 0047D89C 8F8389CC */  lw     $v1, %got(nocopy)($gp)
.L0047D8A0:
/* 0047D8A0 92020000 */  lbu   $v0, ($s0)
/* 0047D8A4 244EFFFF */  addiu $t6, $v0, -1
/* 0047D8A8 2DC10008 */  sltiu $at, $t6, 8
/* 0047D8AC 102000B4 */  beqz  $at, .L0047DB80
/* 0047D8B0 00000000 */   nop
/* 0047D8B4 8F818044 */  lw    $at, %got(jtbl_1000E2E8)($gp)
/* 0047D8B8 000E7080 */  sll   $t6, $t6, 2
/* 0047D8BC 002E0821 */  addu  $at, $at, $t6
/* 0047D8C0 8C2EE2E8 */  lw    $t6, %lo(jtbl_1000E2E8)($at)
/* 0047D8C4 01DC7021 */  addu  $t6, $t6, $gp
/* 0047D8C8 01C00008 */  jr    $t6
/* 0047D8CC 00000000 */   nop
.L0047D8D0:
/* 0047D8D0 8E020030 */  lw    $v0, 0x30($s0)
/* 0047D8D4 50400007 */  beql  $v0, $zero, .L0047D8F4
/* 0047D8D8 96180006 */   lhu   $t8, 6($s0)
/* 0047D8DC 8C6F0000 */  lw    $t7, ($v1)
/* 0047D8E0 51E20004 */  beql  $t7, $v0, .L0047D8F4
/* 0047D8E4 96180006 */   lhu   $t8, 6($s0)
/* 0047D8E8 1000FFED */  b     .L0047D8A0
/* 0047D8EC 00408025 */   move  $s0, $v0
/* 0047D8F0 96180006 */  lhu   $t8, 6($s0)
.L0047D8F4:
/* 0047D8F4 2719FFFF */  addiu $t9, $t8, -1
/* 0047D8F8 3328FFFF */  andi  $t0, $t9, 0xffff
/* 0047D8FC 150000A8 */  bnez  $t0, .L0047DBA0
/* 0047D900 A6190006 */   sh    $t9, 6($s0)
/* 0047D904 8E090018 */  lw    $t1, 0x18($s0)
/* 0047D908 02002025 */  move  $a0, $s0
/* 0047D90C A1200009 */  sb    $zero, 9($t1)
/* 0047D910 8F998638 */  lw    $t9, %call16(delentry)($gp)
/* 0047D914 0320F809 */  jalr  $t9
/* 0047D918 00000000 */   nop
/* 0047D91C 100000A0 */  b     .L0047DBA0
/* 0047D920 8FBC0018 */   lw    $gp, 0x18($sp)
.L0047D924:
/* 0047D924 8E020030 */  lw    $v0, 0x30($s0)
/* 0047D928 50400007 */  beql  $v0, $zero, .L0047D948
/* 0047D92C 8E0B0014 */   lw    $t3, 0x14($s0)
/* 0047D930 8C6A0000 */  lw    $t2, ($v1)
/* 0047D934 51420004 */  beql  $t2, $v0, .L0047D948
/* 0047D938 8E0B0014 */   lw    $t3, 0x14($s0)
/* 0047D93C 1000FFD8 */  b     .L0047D8A0
/* 0047D940 00408025 */   move  $s0, $v0
/* 0047D944 8E0B0014 */  lw    $t3, 0x14($s0)
.L0047D948:
/* 0047D948 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 0047D94C 24C50124 */  addiu $a1, $a2, 0x124
/* 0047D950 95640002 */  lhu   $a0, 2($t3)
/* 0047D954 0320F809 */  jalr  $t9
/* 0047D958 AFA60024 */   sw    $a2, 0x24($sp)
/* 0047D95C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0047D960 1040000D */  beqz  $v0, .L0047D998
/* 0047D964 8FA60024 */   lw    $a2, 0x24($sp)
/* 0047D968 920C0003 */  lbu   $t4, 3($s0)
/* 0047D96C 5580008D */  bnezl $t4, .L0047DBA4
/* 0047D970 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0047D974 8E0D0014 */  lw    $t5, 0x14($s0)
/* 0047D978 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 0047D97C 24C5013C */  addiu $a1, $a2, 0x13c
/* 0047D980 95A40002 */  lhu   $a0, 2($t5)
/* 0047D984 0320F809 */  jalr  $t9
/* 0047D988 AFA60024 */   sw    $a2, 0x24($sp)
/* 0047D98C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0047D990 14400083 */  bnez  $v0, .L0047DBA0
/* 0047D994 8FA60024 */   lw    $a2, 0x24($sp)
.L0047D998:
/* 0047D998 960E0006 */  lhu   $t6, 6($s0)
/* 0047D99C 25CFFFFF */  addiu $t7, $t6, -1
/* 0047D9A0 31F8FFFF */  andi  $t8, $t7, 0xffff
/* 0047D9A4 1700007E */  bnez  $t8, .L0047DBA0
/* 0047D9A8 A60F0006 */   sh    $t7, 6($s0)
/* 0047D9AC 8E190018 */  lw    $t9, 0x18($s0)
/* 0047D9B0 A3200009 */  sb    $zero, 9($t9)
/* 0047D9B4 8E020038 */  lw    $v0, 0x38($s0)
/* 0047D9B8 10400005 */  beqz  $v0, .L0047D9D0
/* 0047D9BC 00000000 */   nop
/* 0047D9C0 90480000 */  lbu   $t0, ($v0)
/* 0047D9C4 24010060 */  li    $at, 96
/* 0047D9C8 15010007 */  bne   $t0, $at, .L0047D9E8
/* 0047D9CC 00000000 */   nop
.L0047D9D0:
/* 0047D9D0 8F9986A0 */  lw    $t9, %call16(deccount)($gp)
/* 0047D9D4 8E040024 */  lw    $a0, 0x24($s0)
/* 0047D9D8 00C02825 */  move  $a1, $a2
/* 0047D9DC 0320F809 */  jalr  $t9
/* 0047D9E0 00000000 */   nop
/* 0047D9E4 8FBC0018 */  lw    $gp, 0x18($sp)
.L0047D9E8:
/* 0047D9E8 8F998638 */  lw    $t9, %call16(delentry)($gp)
/* 0047D9EC 02002025 */  move  $a0, $s0
/* 0047D9F0 0320F809 */  jalr  $t9
/* 0047D9F4 00000000 */   nop
/* 0047D9F8 10000069 */  b     .L0047DBA0
/* 0047D9FC 8FBC0018 */   lw    $gp, 0x18($sp)
.L0047DA00:
/* 0047DA00 8E090014 */  lw    $t1, 0x14($s0)
/* 0047DA04 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 0047DA08 24C50124 */  addiu $a1, $a2, 0x124
/* 0047DA0C 95240002 */  lhu   $a0, 2($t1)
/* 0047DA10 0320F809 */  jalr  $t9
/* 0047DA14 AFA60024 */   sw    $a2, 0x24($sp)
/* 0047DA18 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0047DA1C 14400060 */  bnez  $v0, .L0047DBA0
/* 0047DA20 8FA60024 */   lw    $a2, 0x24($sp)
/* 0047DA24 960A0006 */  lhu   $t2, 6($s0)
/* 0047DA28 254BFFFF */  addiu $t3, $t2, -1
/* 0047DA2C 316CFFFF */  andi  $t4, $t3, 0xffff
/* 0047DA30 1580005B */  bnez  $t4, .L0047DBA0
/* 0047DA34 A60B0006 */   sh    $t3, 6($s0)
/* 0047DA38 8F9986A0 */  lw    $t9, %call16(deccount)($gp)
/* 0047DA3C 8E040034 */  lw    $a0, 0x34($s0)
/* 0047DA40 00C02825 */  move  $a1, $a2
/* 0047DA44 0320F809 */  jalr  $t9
/* 0047DA48 00000000 */   nop
/* 0047DA4C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0047DA50 02002025 */  move  $a0, $s0
/* 0047DA54 8F998638 */  lw    $t9, %call16(delentry)($gp)
/* 0047DA58 0320F809 */  jalr  $t9
/* 0047DA5C 00000000 */   nop
/* 0047DA60 1000004F */  b     .L0047DBA0
/* 0047DA64 8FBC0018 */   lw    $gp, 0x18($sp)
.L0047DA68:
/* 0047DA68 8E0D0014 */  lw    $t5, 0x14($s0)
/* 0047DA6C 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 0047DA70 24C50124 */  addiu $a1, $a2, 0x124
/* 0047DA74 95A40002 */  lhu   $a0, 2($t5)
/* 0047DA78 0320F809 */  jalr  $t9
/* 0047DA7C AFA60024 */   sw    $a2, 0x24($sp)
/* 0047DA80 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0047DA84 1040000D */  beqz  $v0, .L0047DABC
/* 0047DA88 8FA60024 */   lw    $a2, 0x24($sp)
/* 0047DA8C 920E0021 */  lbu   $t6, 0x21($s0)
/* 0047DA90 55C00044 */  bnezl $t6, .L0047DBA4
/* 0047DA94 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0047DA98 8E0F0014 */  lw    $t7, 0x14($s0)
/* 0047DA9C 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 0047DAA0 24C5013C */  addiu $a1, $a2, 0x13c
/* 0047DAA4 95E40002 */  lhu   $a0, 2($t7)
/* 0047DAA8 0320F809 */  jalr  $t9
/* 0047DAAC AFA60024 */   sw    $a2, 0x24($sp)
/* 0047DAB0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0047DAB4 1440003A */  bnez  $v0, .L0047DBA0
/* 0047DAB8 8FA60024 */   lw    $a2, 0x24($sp)
.L0047DABC:
/* 0047DABC 96180006 */  lhu   $t8, 6($s0)
/* 0047DAC0 2719FFFF */  addiu $t9, $t8, -1
/* 0047DAC4 3328FFFF */  andi  $t0, $t9, 0xffff
/* 0047DAC8 15000035 */  bnez  $t0, .L0047DBA0
/* 0047DACC A6190006 */   sh    $t9, 6($s0)
/* 0047DAD0 92090020 */  lbu   $t1, 0x20($s0)
/* 0047DAD4 252AFFE0 */  addiu $t2, $t1, -0x20
/* 0047DAD8 2D4B0080 */  sltiu $t3, $t2, 0x80
/* 0047DADC 11600009 */  beqz  $t3, .L0047DB04
/* 0047DAE0 00000000 */   nop
/* 0047DAE4 8F8E8044 */  lw    $t6, %got(D_10011854)($gp)
/* 0047DAE8 000A6143 */  sra   $t4, $t2, 5
/* 0047DAEC 000C6880 */  sll   $t5, $t4, 2
/* 0047DAF0 25CE1854 */  addiu $t6, %lo(D_10011854) # addiu $t6, $t6, 0x1854
/* 0047DAF4 01CD7821 */  addu  $t7, $t6, $t5
/* 0047DAF8 8DF80000 */  lw    $t8, ($t7)
/* 0047DAFC 0158C804 */  sllv  $t9, $t8, $t2
/* 0047DB00 2B2B0000 */  slti  $t3, $t9, 0
.L0047DB04:
/* 0047DB04 11600003 */  beqz  $t3, .L0047DB14
/* 0047DB08 00000000 */   nop
/* 0047DB0C 8E090018 */  lw    $t1, 0x18($s0)
/* 0047DB10 A1200009 */  sb    $zero, 9($t1)
.L0047DB14:
/* 0047DB14 8F9986A0 */  lw    $t9, %call16(deccount)($gp)
/* 0047DB18 8E040024 */  lw    $a0, 0x24($s0)
/* 0047DB1C 00C02825 */  move  $a1, $a2
/* 0047DB20 0320F809 */  jalr  $t9
/* 0047DB24 AFA60024 */   sw    $a2, 0x24($sp)
/* 0047DB28 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0047DB2C 920C0020 */  lbu   $t4, 0x20($s0)
/* 0047DB30 8FA60024 */  lw    $a2, 0x24($sp)
/* 0047DB34 8F8D8DBC */  lw     $t5, %got(optab)($gp)
/* 0047DB38 000C7080 */  sll   $t6, $t4, 2
/* 0047DB3C 01CC7023 */  subu  $t6, $t6, $t4
/* 0047DB40 01CD7821 */  addu  $t7, $t6, $t5
/* 0047DB44 91F80002 */  lbu   $t8, 2($t7)
/* 0047DB48 13000007 */  beqz  $t8, .L0047DB68
/* 0047DB4C 00000000 */   nop
/* 0047DB50 8F9986A0 */  lw    $t9, %call16(deccount)($gp)
/* 0047DB54 8E040028 */  lw    $a0, 0x28($s0)
/* 0047DB58 00C02825 */  move  $a1, $a2
/* 0047DB5C 0320F809 */  jalr  $t9
/* 0047DB60 00000000 */   nop
/* 0047DB64 8FBC0018 */  lw    $gp, 0x18($sp)
.L0047DB68:
/* 0047DB68 8F998638 */  lw    $t9, %call16(delentry)($gp)
/* 0047DB6C 02002025 */  move  $a0, $s0
/* 0047DB70 0320F809 */  jalr  $t9
/* 0047DB74 00000000 */   nop
/* 0047DB78 10000009 */  b     .L0047DBA0
/* 0047DB7C 8FBC0018 */   lw    $gp, 0x18($sp)
.L0047DB80:
/* 0047DB80 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 0047DB84 8F868044 */  lw    $a2, %got(RO_1000E2DC)($gp)
/* 0047DB88 24040001 */  li    $a0, 1
/* 0047DB8C 24050314 */  li    $a1, 788
/* 0047DB90 2407000A */  li    $a3, 10
/* 0047DB94 0320F809 */  jalr  $t9
/* 0047DB98 24C6E2DC */   addiu $a2, %lo(RO_1000E2DC) # addiu $a2, $a2, -0x1d24
/* 0047DB9C 8FBC0018 */  lw    $gp, 0x18($sp)
.L0047DBA0:
/* 0047DBA0 8FBF001C */  lw    $ra, 0x1c($sp)
.L0047DBA4:
/* 0047DBA4 8FB00014 */  lw    $s0, 0x14($sp)
/* 0047DBA8 27BD0020 */  addiu $sp, $sp, 0x20
/* 0047DBAC 03E00008 */  jr    $ra
/* 0047DBB0 00000000 */   nop
    .type deccount, @function
    .size deccount, .-deccount
    .end deccount

)"");

/*
00434720 processargs
0043A0CC copyline
*/
void getoption(int uopt_option, int n) {
    int new_pdeftabsize;
    int i;

    switch (uopt_option) {
        case UCO_VARARGS:
            if (pdeftabsize < 4) {
                pdeftab = (struct PdefEntry *)alloc_realloc(pdeftab, pdeftabsize * 16 / 16, (pdeftabsize * 16 + 8 * 16) / 16, &perm_heap);
                new_pdeftabsize = pdeftabsize + 8;
                for (i = pdeftabsize; i < new_pdeftabsize; i++) {
                    pdeftab[i].opc = Unop;
                }
                pdeftabsize = new_pdeftabsize;
            }
            if (pdefmax < 0) {
                i = 0;
            } else {
                i = pdefmax + (pdeftab[pdefmax].size + 3) / 4;
            }
            while (i < 4) {
                struct PdefEntry *entry = &pdeftab[i];
                entry->opc = Updef;
                entry->dtype = Ldt;
                entry->offset = i * 4;
                entry->size = 4;
                entry->unk3 = true;
                pdefmax = i++;
            }
            can_elim_tail = false;
            highestmdef = ((n >> 16) & 0xffff) + 8;
            break;

        case UCO_SOURCE:
            if (!fortran_lang) {
                switch (n) {
                    case PASCAL_SOURCE:
                        lang = LANG_PASCAL;
                        break;
                    case FORTRAN_SOURCE:
                        lang = LANG_FORTRAN;
                        break;
                    case C_SOURCE:
                        lang = LANG_C;
                        break;
                    case ADA_SOURCE:
                        lang = LANG_ADA;
                        break;
                    case PL1_SOURCE:
                        lang = LANG_PL1;
                        break;
                    case COBOL_SOURCE:
                        lang = LANG_COBOL;
                        break;
                    case RESERVED1_SOURCE:
                        lang = LANG_RESERVED1;
                        break;
                    default:
                        caseerror(1, 881, "uoptutil.p", 10);
                        break;
                }
            }
            break;

        case UCO_NO_R23:
            no_r23 = n != 0;
            break;

        case UCO_STACK_REVERSED:
            stack_reversed = true;
            break;

        case UCO_ZDBUG:
            dbugno = n;
            if (n > 0 && !listwritten) {
                rewrite(&list, listname, 1024, 0);
                listwritten = true;
            }
            break;

        case UCO_ZMOVC:
            movcostused = (float)n;
            break;

        case UCO_ZCOPY:
            docopyprog = n != 0;
            break;

        case UCO_ZCOMO:
            docm = n != 0;
            break;

        case UCO_ZSTOR:
            dordstore = n != 0;
            break;

        case UCO_ZSCM:
            doscm = n != 0;
            break;
    }
}

/* 
00425618 func_00425618
0043CFCC readnxtinst
0044F3C0 unaryfold
0047DFDC cutbits64
*/
int cutbits(int val, int length, enum Datatype dtype) {
    int result;

    // XXX: undefined behavior, mips sllv automatically masks the lowest 5 bits
    result = val & ((1 << (length & 31)) - 1);
    if (dtype == Jdt) {
        val = 1 << ((length + 31) & 31);
        result = (result ^ val) - val;
    }
    return result;
}

/* 
0043CFCC readnxtinst
*/
long long cutbits64(long long val, int length, enum Datatype dtype) {
    union Valu t;
    t.dwval = val;

    if (length > 32) {
        if (dtype == Kdt) {
            t.dwpart.dwval_h = cutbits(t.dwpart.dwval_h, length - 32, Ldt);
        } else {
            t.dwpart.dwval_h = cutbits(t.dwpart.dwval_h, length - 32, Jdt);
        }
    } else if (length == 32) {
        if (dtype == Kdt) {
            t.dwpart.dwval_h = 0;
        } else {
            // sign extend
            t.dwpart.dwval_h = t.dwpart.dwval_l >> 31;
        }
    } else if (dtype == Kdt) {
        t.dwpart.dwval_l = cutbits(t.dwpart.dwval_l, length, Ldt);
        t.dwpart.dwval_h = 0;
    } else {
        t.dwpart.dwval_l = cutbits(t.dwpart.dwval_l, length, Jdt);
        // sign extend
        t.dwpart.dwval_h = t.dwpart.dwval_l >> 31;
    }
    return t.dwval;
}

/*
0043B334 func_0043B334
0043CFCC readnxtinst
0046BA10 change_to_const_eq
0046BD90 change_to_var_eq
00470AAC form_rem
00470DD8 form_neq0
0047E3BC binopwithconst
*/
struct Expression *enter_const(int num, Datatype datatype, struct Graphnode *graphnode) {
    unsigned short hash;
    struct Expression *entry;
    bool found;

    hash = isconsthash(num);
    entry = table[hash];
    found = false;

    while (!found && entry != NULL) {
        if (entry->type == isconst && entry->datatype == datatype && entry->data.isconst.number.intval == num) {
            found = true;
        } else {
            entry = entry->next;
        }
    }

    if (!found) {
        entry = appendchain(hash);
        entry->type = isconst;
        entry->datatype = datatype;
        if (datatype == Idt || datatype == Kdt) {
            entry->data.isconst.number.longval = num;
        } else {
            entry->data.isconst.number.intval = num;
        }
        entry->data.isconst.size = sizeoftyp(datatype);
        entry->var_access_list = NULL;
        entry->graphnode = graphnode;
    }

    return entry;
}

/* 
0046BA10 change_to_const_eq
*/
struct Expression *enter_lda(int addr, struct Expression *expr, struct Graphnode *graphnode) {
    unsigned short hash;
    struct Expression *lda;
    bool found;

    hash = isvarhash(expr->data.islda_isilda.address);
    lda = table[hash];
    found = false;
    while (!found && lda != NULL) {
        if (lda->type == islda && lda->data.islda_isilda.offset == addr &&
                addreq(lda->data.islda_isilda.address, expr->data.islda_isilda.address) &&
                lda->data.islda_isilda.size == expr->data.islda_isilda.size) {
            found = true;
        } else {
            lda = lda->next;
        }
    }

    if (!found) {
        lda = appendchain(hash);
        lda->type = islda;
        lda->datatype = Adt;
        lda->graphnode = graphnode;
        lda->var_access_list = NULL;
        lda->data.islda_isilda.offset = addr;
        lda->data.islda_isilda.size = expr->data.islda_isilda.size;
        lda->data.islda_isilda.address = expr->data.islda_isilda.address;
    }

    return lda;
}

/* 
0043B1DC func_0043B1DC
0043B23C func_0043B23C
0043CFCC readnxtinst
004516BC reduceixa
0046D07C unroll_resetincr
0046D0D8 unroll_resetincr_mod
0046E77C oneloopblockstmt
*/
struct Expression *binopwithconst(Uopcode opc, struct Expression *left, int value) {
    struct Expression *constant; // sp30
    struct Expression *binop;    // sp2C
    unsigned short hash;
    Datatype dtype;
    bool found;

    if (left->type == isop) {
        dtype = left->data.isop.datatype;
    } else {
        dtype = left->datatype;
    }

    if (left->type == isconst) {
        switch (opc) {
            case Uadd:
                binop = enter_const(left->data.isconst.number.intval + value, dtype, curgraphnode);
                break;

            case Umpy:
                binop = enter_const(left->data.isconst.number.intval * value, dtype, curgraphnode);
                break;

            case Uneq:
                binop = enter_const(left->data.isconst.number.intval != value, dtype, curgraphnode);
                break;

            default:
                caseerror(1, 1056, "uoptutil.p", 10);
                break;
        }
    } else {
        constant = enter_const(value, dtype, curgraphnode);
        hash = isophash(opc, left, constant);
        binop = table[hash];
        found = false;
        while (!found && binop != NULL) {
            if (binop->type == isop && binop->data.isop.opc == opc && binop->datatype == dtype && binop->graphnode == curgraphnode &&
            ((binop->data.isop.op1 == constant && binop->data.isop.op2 == left) ||
             (binop->data.isop.op1 == left && binop->data.isop.op2 == constant))) {
                found = true;
            } else {
                binop = binop->next;
            }
        }

        if (!found) {
            binop = appendchain(hash);
            binop->type = isop;
            binop->datatype = dtype;
            binop->unk4 = false;
            binop->unk5 = 0;
            binop->count = 1;
            binop->graphnode = curgraphnode;
            binop->data.isop.opc = opc;
            binop->data.isop.datatype = dtype;
            binop->data.isop.op1 = left;
            binop->data.isop.op2 = constant;
            binop->data.isop.aux2.v1.overflow_attr = false;
            binop->data.isop.unk30 = 0;
        } else {
            binop->count++;
            decreasecount(left);
        }
    }

    return binop;
}

/* 
0041F138 inreg
0045DA18 formlivbb
0045DFAC passedinreg
0045FBB4 func_0045FBB4
00464BFC localcolor
0046732C isconstrained
00469280 globalcolor
*/
int regclassof(struct IChain *ichain) {
    Datatype dtype;

    if (ichain->type == isop) {
        dtype = ichain->isop.datatype;
    } else {
        dtype = ichain->dtype;
    }

    if (dtype == Qdt || dtype == Rdt) {
        return 2;
    } else {
        return 1;
    }
}

/*
004230F0 func_004230F0
00426FA4 func_00426FA4
0045E45C func_0045E45C
0045E5C4 func_0045E5C4
   TODO: enum for optype
*/
bool constinreg(Datatype dtype, int unused, union Constant cval, unsigned char optype) {
    if (!do_const_in_reg) {
        return false;
    } else if (optype == 4) {
        return false;
    } else if (dtype == Qdt || dtype == Rdt || dtype == Fdt) {
        return true;
    } else if ((dtype == Gdt || dtype == Mdt || dtype == Ndt || dtype == Sdt) || cval.intval == 0 || (!mips3_64data && (dtype == Idt || dtype == Kdt))) {
        return false;
    } else if (optype == 5) {
        return !is_power2(cval.intval);
    } else if (cval.intval < -0x8000 || cval.intval >= 0x10000) {
        return 1;
    } else {
        switch (optype) {
            case 0:
                return false;

            case 3:
                return true;

            case 1:
                return cval.intval >= 0x8000;

            case 2:
                return cval.intval < 0;

            default:
                caseerror(1, 1127, "uoptutil.p", 10);
                break;
        }
    }
    return false;
}

/*
0045E5C4 func_0045E5C4
*/
bool ldainreg(Memtype mtype, int addr, unsigned char optype) {
    if (!do_const_in_reg) {
        return false;
    }
    if (optype == 4) {
        return false;
    }
    return true;
}

/*
0041550C func_0041550C
00444A84 isearchloop
*/
bool in_indmults(struct IChain *ichain) {
    if (ichain != NULL && ichain->type == isop){
        return bvectin0(ichain->bitpos, &indmults);
    } else {
        return true; // ?
    }
}

/*
0043CFCC readnxtinst
0044F1B8 istrfold
0047E938 checkincre
*/
bool checkincre(struct Expression *entry, struct Expression *entry2, int *result) {
    int result1;
    int result2;

    switch (entry->type) {
        case isvar:
        case issvar:
            if (addreq(entry->data.isvar_issvar.location, entry2->data.isvar_issvar.location)) {
                *result = 1;
                return true;
            }
            return false;

        case isop:
            if (optab[entry->data.isop.opc].is_binary_op) {
                if (entry->data.isop.opc == Uadd || entry->data.isop.opc == Usub) {
                    if (checkincre(entry->data.isop.op1, entry2, &result1) && checkincre(entry->data.isop.op2, entry2, &result2)) {
                        *result = entry->data.isop.opc == Uadd ? result1 + result2 : result1 - result2;
                        return true;
                    }
                }
            } else if (entry->data.isop.opc == Udec || entry->data.isop.opc == Uinc || entry->data.isop.opc == Uneg ||
                      (entry->data.isop.opc == Ucvt &&
                        (entry->datatype == Adt || entry->datatype == Hdt || entry->datatype == Jdt || entry->datatype == Ldt) &&
                        (entry->data.isop.aux.cvtfrom == Adt || entry->data.isop.aux.cvtfrom == Hdt || entry->data.isop.aux.cvtfrom == Jdt || entry->data.isop.aux.cvtfrom == Ldt)))
            {
                if (checkincre(entry->data.isop.op1, entry2, &result1)) {
                    *result = entry->data.isop.opc == Uneg ? -result1 : result1;
                    return true;
                }
            }
            return false;

        case islda:
        case isconst:
        case isilda:
        case isrconst:
            *result = 0;
            return true;

        default:
            caseerror(1, 1194, "uoptutil.p", 10);
            return false; // originally returned uninitialized stack variable
    }
}

/*
00430680 func_00430680
004313E4 func_004313E4
00455518 func_00455518
0047EBB0 findincre
*/
int findincre(struct Expression *entry) {
    int result1;
    int result2;

    switch (entry->type) {
        case isconst:
            return entry->data.isconst.number.intval;

        case islda:
        case isvar:
        case isilda:
        case issvar:
        case isrconst:
            return 0;

        case isop:
            if (optab[entry->data.isop.opc].is_binary_op) {
                result1 = findincre(entry->data.isop.op1);
                result2 = findincre(entry->data.isop.op2);
                return entry->data.isop.opc == Uadd ? result1 + result2 : result1 - result2;
            }
            result1 = findincre(entry->data.isop.op1);
            switch (entry->data.isop.opc) {
                case Uneg:
                    return -result1;
                case Ucvt:
                    return result1;
                case Uinc:
                    return result1 + entry->data.isop.datasize;
                case Udec:
                    return result1 + entry->data.isop.datasize;
                default:
                    caseerror(1, 1251, "uoptutil.p", 10);
                    return 0; // originally an uninitialized stack value was returned
            }
            return 0;

        default:
            caseerror(1, 1238, "uoptutil.p", 10);
            return 0; // originally an uninitialized stack value was returned
    }
}

__asm__(R""(
.set noat
.set noreorder

glabel countvars
    .ent countvars
    # 0041550C func_0041550C
    # 0047ED9C countvars
/* 0047ED9C 3C1C0FBA */  .cpload $t9
/* 0047EDA0 279CB4F4 */
/* 0047EDA4 0399E021 */
/* 0047EDA8 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 0047EDAC AFBF001C */  sw    $ra, 0x1c($sp)
/* 0047EDB0 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0047EDB4 90820000 */  lbu   $v0, ($a0)
/* 0047EDB8 00802825 */  move  $a1, $a0
/* 0047EDBC 244EFFFF */  addiu $t6, $v0, -1
/* 0047EDC0 2DC10008 */  sltiu $at, $t6, 8
/* 0047EDC4 1020002A */  beqz  $at, .L0047EE70
/* 0047EDC8 00000000 */   nop
/* 0047EDCC 8F818044 */  lw    $at, %got(jtbl_1000E3F8)($gp)
/* 0047EDD0 000E7080 */  sll   $t6, $t6, 2
/* 0047EDD4 002E0821 */  addu  $at, $at, $t6
/* 0047EDD8 8C2EE3F8 */  lw    $t6, %lo(jtbl_1000E3F8)($at)
/* 0047EDDC 01DC7021 */  addu  $t6, $t6, $gp
/* 0047EDE0 01C00008 */  jr    $t6
/* 0047EDE4 00000000 */   nop
.L0047EDE8:
/* 0047EDE8 1000002A */  b     .L0047EE94
/* 0047EDEC 00001025 */   move  $v0, $zero
.L0047EDF0:
/* 0047EDF0 10000028 */  b     .L0047EE94
/* 0047EDF4 24020001 */   li    $v0, 1
.L0047EDF8:
/* 0047EDF8 90AF0010 */  lbu   $t7, 0x10($a1)
/* 0047EDFC 8F998DBC */  lw     $t9, %got(optab)($gp)
/* 0047EE00 000FC080 */  sll   $t8, $t7, 2
/* 0047EE04 030FC023 */  subu  $t8, $t8, $t7
/* 0047EE08 03194021 */  addu  $t0, $t8, $t9
/* 0047EE0C 91090002 */  lbu   $t1, 2($t0)
/* 0047EE10 11200011 */  beqz  $t1, .L0047EE58
/* 0047EE14 00000000 */   nop
/* 0047EE18 8F9986D4 */  lw    $t9, %call16(countvars)($gp)
/* 0047EE1C 8CA40014 */  lw    $a0, 0x14($a1)
/* 0047EE20 AFA50030 */  sw    $a1, 0x30($sp)
/* 0047EE24 0320F809 */  jalr  $t9
/* 0047EE28 00000000 */   nop
/* 0047EE2C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0047EE30 8FA50030 */  lw    $a1, 0x30($sp)
/* 0047EE34 AFA20020 */  sw    $v0, 0x20($sp)
/* 0047EE38 8F9986D4 */  lw    $t9, %call16(countvars)($gp)
/* 0047EE3C 8CA40018 */  lw    $a0, 0x18($a1)
/* 0047EE40 0320F809 */  jalr  $t9
/* 0047EE44 00000000 */   nop
/* 0047EE48 8FAA0020 */  lw    $t2, 0x20($sp)
/* 0047EE4C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0047EE50 10000010 */  b     .L0047EE94
/* 0047EE54 01421021 */   addu  $v0, $t2, $v0
.L0047EE58:
/* 0047EE58 8F9986D4 */  lw    $t9, %call16(countvars)($gp)
/* 0047EE5C 8CA40014 */  lw    $a0, 0x14($a1)
/* 0047EE60 0320F809 */  jalr  $t9
/* 0047EE64 00000000 */   nop
/* 0047EE68 1000000A */  b     .L0047EE94
/* 0047EE6C 8FBC0018 */   lw    $gp, 0x18($sp)
.L0047EE70:
/* 0047EE70 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 0047EE74 8F868044 */  lw    $a2, %got(RO_1000E3EC)($gp)
/* 0047EE78 24040001 */  li    $a0, 1
/* 0047EE7C 240504F1 */  li    $a1, 1265
/* 0047EE80 2407000A */  li    $a3, 10
/* 0047EE84 0320F809 */  jalr  $t9
/* 0047EE88 24C6E3EC */   addiu $a2, %lo(RO_1000E3EC) # addiu $a2, $a2, -0x1c14
/* 0047EE8C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0047EE90 8FA2002C */  lw    $v0, 0x2c($sp)
.L0047EE94:
/* 0047EE94 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0047EE98 27BD0030 */  addiu $sp, $sp, 0x30
/* 0047EE9C 03E00008 */  jr    $ra
/* 0047EEA0 00000000 */   nop
    .type countvars, @function
    .size countvars, .-countvars
    .end countvars

)"");

/*
0043CFCC readnxtinst
0047EEA4 hasvolatile
*/
bool hasvolatile(struct Expression *expr) {
    if (expr->type != isop) {
        return expr->type == isvar && expr->data.isvar_issvar.is_volatile;
    }

    if (expr->data.isop.opc == Uildv) {
        return true;
    }

    if (hasvolatile(expr->data.isop.op1)) {
        return true;
    }

    return optab[expr->data.isop.opc].is_binary_op && hasvolatile(expr->data.isop.op2);
}

__asm__(R""(
.set noat
.set noreorder

glabel has_volt_ovfw
    .ent has_volt_ovfw
    # 004175BC copypropagate
    # 0043CFCC readnxtinst
    # 0046E77C oneloopblockstmt
    # 004737E0 par_to_str
    # 00479DC4 eliminduct
    # 0047EF74 has_volt_ovfw
/* 0047EF74 3C1C0FBA */  .cpload $t9
/* 0047EF78 279CB31C */
/* 0047EF7C 0399E021 */
/* 0047EF80 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0047EF84 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0047EF88 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0047EF8C 90830000 */  lbu   $v1, ($a0)
/* 0047EF90 24010004 */  li    $at, 4
/* 0047EF94 00802825 */  move  $a1, $a0
/* 0047EF98 10610007 */  beq   $v1, $at, .L0047EFB8
/* 0047EF9C 38620003 */   xori  $v0, $v1, 3
/* 0047EFA0 2C420001 */  sltiu $v0, $v0, 1
/* 0047EFA4 10400002 */  beqz  $v0, .L0047EFB0
/* 0047EFA8 00000000 */   nop
/* 0047EFAC 90820023 */  lbu   $v0, 0x23($a0)
.L0047EFB0:
/* 0047EFB0 10000039 */  b     .L0047F098
/* 0047EFB4 304300FF */   andi  $v1, $v0, 0xff
.L0047EFB8:
/* 0047EFB8 90A20020 */  lbu   $v0, 0x20($a1)
/* 0047EFBC 24010033 */  li    $at, 51
/* 0047EFC0 54410004 */  bnel  $v0, $at, .L0047EFD4
/* 0047EFC4 94AE0006 */   lhu   $t6, 6($a1)
/* 0047EFC8 10000033 */  b     .L0047F098
/* 0047EFCC 24030001 */   li    $v1, 1
/* 0047EFD0 94AE0006 */  lhu   $t6, 6($a1)
.L0047EFD4:
/* 0047EFD4 2DC10002 */  sltiu $at, $t6, 2
/* 0047EFD8 54200004 */  bnezl $at, .L0047EFEC
/* 0047EFDC 90AF003E */   lbu   $t7, 0x3e($a1)
/* 0047EFE0 1000002C */  b     .L0047F094
/* 0047EFE4 00002025 */   move  $a0, $zero
/* 0047EFE8 90AF003E */  lbu   $t7, 0x3e($a1)
.L0047EFEC:
/* 0047EFEC 2458FFE0 */  addiu $t8, $v0, -0x20
/* 0047EFF0 2F190040 */  sltiu $t9, $t8, 0x40
/* 0047EFF4 11E0000F */  beqz  $t7, .L0047F034
/* 0047EFF8 00000000 */   nop
/* 0047EFFC 13200009 */  beqz  $t9, .L0047F024
/* 0047F000 00000000 */   nop
/* 0047F004 8F8A8044 */  lw    $t2, %got(D_10011870)($gp)
/* 0047F008 00184143 */  sra   $t0, $t8, 5
/* 0047F00C 00084880 */  sll   $t1, $t0, 2
/* 0047F010 254A1870 */  addiu $t2, %lo(D_10011870) # addiu $t2, $t2, 0x1870
/* 0047F014 01495821 */  addu  $t3, $t2, $t1
/* 0047F018 8D6C0000 */  lw    $t4, ($t3)
/* 0047F01C 030C6804 */  sllv  $t5, $t4, $t8
/* 0047F020 29B90000 */  slti  $t9, $t5, 0
.L0047F024:
/* 0047F024 17200003 */  bnez  $t9, .L0047F034
/* 0047F028 00000000 */   nop
/* 0047F02C 10000019 */  b     .L0047F094
/* 0047F030 24040001 */   li    $a0, 1
.L0047F034:
/* 0047F034 8F9986DC */  lw    $t9, %call16(has_volt_ovfw)($gp)
/* 0047F038 8CA40024 */  lw    $a0, 0x24($a1)
/* 0047F03C AFA50020 */  sw    $a1, 0x20($sp)
/* 0047F040 0320F809 */  jalr  $t9
/* 0047F044 00000000 */   nop
/* 0047F048 304F00FF */  andi  $t7, $v0, 0xff
/* 0047F04C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0047F050 8FA50020 */  lw    $a1, 0x20($sp)
/* 0047F054 15E0000F */  bnez  $t7, .L0047F094
/* 0047F058 304400FF */   andi  $a0, $v0, 0xff
/* 0047F05C 90A80020 */  lbu   $t0, 0x20($a1)
/* 0047F060 8F898DBC */  lw     $t1, %got(optab)($gp)
/* 0047F064 00085080 */  sll   $t2, $t0, 2
/* 0047F068 01485023 */  subu  $t2, $t2, $t0
/* 0047F06C 01495821 */  addu  $t3, $t2, $t1
/* 0047F070 916C0002 */  lbu   $t4, 2($t3)
/* 0047F074 51800008 */  beql  $t4, $zero, .L0047F098
/* 0047F078 308300FF */   andi  $v1, $a0, 0xff
/* 0047F07C 8F9986DC */  lw    $t9, %call16(has_volt_ovfw)($gp)
/* 0047F080 8CA40028 */  lw    $a0, 0x28($a1)
/* 0047F084 0320F809 */  jalr  $t9
/* 0047F088 00000000 */   nop
/* 0047F08C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0047F090 304400FF */  andi  $a0, $v0, 0xff
.L0047F094:
/* 0047F094 308300FF */  andi  $v1, $a0, 0xff
.L0047F098:
/* 0047F098 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0047F09C 27BD0020 */  addiu $sp, $sp, 0x20
/* 0047F0A0 00601025 */  move  $v0, $v1
/* 0047F0A4 03E00008 */  jr    $ra
/* 0047F0A8 00000000 */   nop
    .type has_volt_ovfw, @function
    .size has_volt_ovfw, .-has_volt_ovfw
    .end has_volt_ovfw
)"");

/*
0041550C func_0041550C
0043ABD0 incroccurrence
0043CFCC readnxtinst
0047F0AC has_ilod
*/
bool has_ilod(struct Expression *expr) {
    if (expr->type != isop) {
        return false;
    }

    if (expr->data.isop.opc == Uilod) {
        return true;
    }

    if (has_ilod(expr->data.isop.op1)) {
        return true;
    }

    return optab[expr->data.isop.opc].is_binary_op && has_ilod(expr->data.isop.op2);
}

/*
0041550C func_0041550C
*/
bool is_incr(struct Expression *expr) {
    if (expr->type != isop) {
        return false;
    }

    if (expr->data.isop.opc != Uadd && expr->data.isop.opc != Usub) {
        return false;
    }

    if (expr->datatype != Idt && expr->datatype != Jdt && expr->datatype != Kdt && expr->datatype != Ldt) {
        return false;
    }

    if (expr->data.isop.op1->type == isvar &&
        expr->data.isop.op1->data.isvar_issvar.location.memtype == Pmt &&
        expr->data.isop.op2->type == isconst)
    {
        return true;
    }

    if (expr->data.isop.op2->type == isvar &&
        expr->data.isop.op2->data.isvar_issvar.location.memtype == Pmt &&
        expr->data.isop.op1->type == isconst)
    {
        return true;
    }

    return false;
}

/*
0040C254 setbit
0040C4C4 checkbvlist
0040F7B8 checkinitbvlivran
0043A0CC copyline
00445E44 exprimage
0047CF0C newbit
0047DBB4 getoption
*/
void *alloc_realloc(void *old, int oldsize16, int newsize16, struct AllocBlock **heap) {
    // Did they miss that alloc_resize already exist?

    void *addr;

    addr = alloc_new(newsize16 * 16, heap);
    if (addr == NULL) {
        outofmem = true;
        return old;
    }

    memcpy(addr, old, oldsize16 * 16);

    if (old != NULL) {
        alloc_dispose(old, heap);
    }

    return addr;
}

/*
00420A3C prolog
00421C00 epilog
0045DA18 formlivbb
*/
bool fitparmreg(int arg0, int arg1, int arg2, int arg3) {
    if ((arg0 % int_reg_size) == 0) {
        if ((arg1 % int_reg_size) == 0) {
            return true;
        }
    }
    if (!bigendian) {
        return (arg0 == arg2);
    }
    return ((arg2 + arg3) == (arg0 + arg1));
}

/*
00410204 codemotion
004324F4 findinduct
*/
bool trap_imply(struct IChain *trap_ichain, struct IChain *ichain) {
    if (ichain->type != isop) {
        return false;
    }

    if (trap_ichain->isop.opc != ichain->isop.opc || trap_ichain->isop.op1 != ichain->isop.op1 || ichain == trap_ichain) {
        return false;
    }

    switch (trap_ichain->isop.opc) {
        case Utpge:
        case Utpgt:
            if (trap_ichain->dtype == Jdt) {
                return trap_ichain->isop.op2->isconst.number.intval < ichain->isop.op2->isconst.number.intval;
            }
            if (trap_ichain->dtype == Ldt) {
                return trap_ichain->isop.op2->isconst.number.uintval < ichain->isop.op2->isconst.number.uintval;
            }
            return false;

        case Utple:
        case Utplt:
            if (trap_ichain->dtype == Jdt) {
                return trap_ichain->isop.op2->isconst.number.intval > ichain->isop.op2->isconst.number.intval;
            }
            if (trap_ichain->dtype == Ldt) {
                return trap_ichain->isop.op2->isconst.number.uintval > ichain->isop.op2->isconst.number.uintval;
            }
            return false;

        default:
            caseerror(1, 1397, "uoptutil.p", 10);
            return false;
    }
}

/*
0043CFCC readnxtinst
0046E77C oneloopblockstmt
*/
int trapstat_imply(struct Statement *stat, struct Expression *op1, struct Expression *op2) {
    if (op1 != stat->expr) {
        return 0;
    }
    if (op2 == stat->u.trap.expr2) {
        return 1;
    }

    if (stat->opc == Utpeq || stat->opc == Utpne) {
        return 0;
    }

    if (stat->u.trap.expr2->type != isconst || op2->type != isconst) {
        return 0;
    }
    if (stat->u.trap.expr2->type != isrconst || op2->type != isrconst) { // wait what
        return 0;
    }

    // dead code
    if (stat->u.trap.dtype == Jdt) {
        switch (stat->opc) {
            case Utpge:
            case Utpgt:
                if (stat->u.trap.expr2->data.isconst.number.intval < op2->data.isconst.number.intval) {
                    return 1;
                } else {
                    return -1;
                }

            case Utple:
            case Utplt:
                if (op2->data.isconst.number.intval < stat->u.trap.expr2->data.isconst.number.intval) {
                    return 1;
                } else {
                    return -1;
                }

            default: 
                caseerror(1, 1422, "uoptutil.p", 10);
                break;
        }
    } else if (stat->u.trap.dtype == Ldt) {
        switch (stat->opc) {
            case Utpge:
            case Utpgt:
                if (stat->u.trap.expr2->data.isconst.number.uintval < op2->data.isconst.number.uintval) {
                    return 1;
                } else {
                    return -1;
                }

            case Utple:
            case Utplt:
                if (op2->data.isconst.number.uintval < stat->u.trap.expr2->data.isconst.number.uintval) {
                    return 1;
                } else {
                    return -1;
                }

            default:
                caseerror(1, 1429, "uoptutil.p", 10);
                break;
        }
    }

    return 0;
}

/*
0043C56C func_0043C56C
0043CFCC readnxtinst
00470AAC form_rem
0047E6D8 constinreg
*/
bool is_power2(unsigned int v) {
    return (v & (v - 1)) == 0 && v != 0;
}

/*
0047F850 is_power5
*/
bool is_power5(unsigned int v) {
    if (v == 0) {
        return false;
    }
    if (v == 1) {
        return true;
    }
    if ((v % 5U) != 0U) {
        return false;
    }
    return is_power5(v / 5U);
}

/*
00414108 func_00414108
0043CFCC readnxtinst
*/
int getfloatval(struct Expression *expr, int *exponent10) {
    struct RealstoreData *pos;
    int div;
    char *str;
    bool negative;
    int i;
    int len;
    int val;
    bool in_fraction;
    int num_decimals;
    bool e_negative;
    int e_val;

    div = expr->data.isconst.number.real.disp / 256;
    pos = realstore;
    while (div > 0) {
        pos = pos->next;
        div--;
    }
    str = &pos->c[expr->data.isconst.number.real.disp & 0xff];
    negative = str[0] == '-';
    if (negative || str[0] == '+') {
        i = 1;
    } else {
        i = 0;
    }
    len = CONSTVAL.swpart.Ival;
    val = 0;
    in_fraction = false;
    num_decimals = 0;
    for (; str[i] != 'e' && i != len; i++) {
        if (str[i] != '.') {
            if (val >= 100000000) {
                return 0x7FFFFFFF;
            }
            val = val * 10 + (str[i] - '0');
            if (in_fraction) {
                num_decimals++;
            }
        } else {
            in_fraction = true;
        }
    }
    if (len > i) {
        i++; // e
        e_negative = str[i] == '-';
        if (e_negative || str[i] == '+') {
            i++;
        }
        e_val = 0;
        for (; i != len; i++) {
            if (e_val >= 100000000) {
                return 0x7FFFFFFF;
            }
            e_val = e_val * 10 + (str[i] - '0');
        }
        if (e_negative) {
            *exponent10 = -num_decimals - e_val;
        } else {
            *exponent10 = e_val - num_decimals;
        }
    } else {
        *exponent10 = -num_decimals;
    }
    if (val != 0) {
        while (val % 10 == 0) {
            val /= 10;
            (*exponent10)++;
        }
    }
    return negative ? -val : val;
}

/*
0043CFCC readnxtinst
*/
int val_when_exponent0(int a, int exponent10) { // returns a * 10^exponent10
    int value;

    if (a == 0x7FFFFFFF || exponent10 < -9 || exponent10 >= 10) {
        return 0x7FFFFFFF;
    }
    if (exponent10 == 0) {
        return a;
    }
    if (exponent10 < 0) {
        value = 1;
        do {
            value *= 10;
        } while (++exponent10 < 0);

        if ((a % value) == 0) {
            return a / value;
        }
        return 0x7FFFFFFF;
    } else {
        do {
            if (mpyovfw_signed(a, 10)) {
                return 0x7FFFFFFF;
            }
            a *= 10;
        } while (--exponent10 > 0);
        return a;
    }
}


/*
0041F048 genrop
0041F6F0 base_in_reg
0042020C gen_static_link
004205F8 genrlodrstr
00420A3C prolog
00421C00 epilog
00422AF0 func_00422AF0
0042A1C8 func_0042A1C8
0042A4CC func_0042A4CC
0042A7D0 func_0042A7D0
0042BF08 reemit
00469280 globalcolor
0047FDB4 in_reg_masks
*/
int coloroffset(int index) {
    static MipsRegister coloroffsettable[35] = {
        // class 0 (23), general purpose registers
        // 1     2     3     4     5     6     7     8     9    10    11    12    13
        r_v0, r_v1, r_a0, r_a1, r_a2, r_a3, r_t0, r_t1, r_t2, r_t3, r_t4, r_t5, r_ra,   // caller-saved registers ("er"regs)
        //14    15    16    17    18    19    20    21    22    23
        r_s0, r_s1, r_s2, r_s3, r_s4, r_s5, r_s6, r_s7, r_fp, r_ra,                     // callee-saved registers ("ee"regs)
        // class 1 (12), floating point registers
        //24     25      26     27     28     29
        r_f0,  r_f2,  r_f12, r_f14, r_f16, r_f18,   // caller-saved fp registers
        //30     31      32     33     34     35
        r_f20, r_f22, r_f24, r_f26, r_f28, r_f30,   // callee-saved fp registers
    };
    return coloroffsettable[index - 1];
}

/*
00468A14 cupcosts
00469280 globalcolor
*/
int in_reg_masks(int index, int arg1, int arg2) {
    int bit_index;
    int shifted;

    bit_index = coloroffset(index) >> 2;

    // Maybe arg1 and arg2 are really one single 64-bit integer
    if (bit_index < 32) {
        shifted = (int)((unsigned int)arg1 << bit_index);
    } else {
        shifted = (int)((unsigned int)arg2 << bit_index);
    }
    return shifted < 0;
}

/*
0047FF7C skipproc
*/
static bool func_0047FE1C(void) {
    if (lastcopiedu.Ucode.Opc != OPC) {
        return false;
    }

    switch (OPC) {
        case Ucsym:
        case Uesym:
        case Ufsym:
        case Ugsym:
        case Ulsym:
            return lastcopiedu.Ucode.I1 == IONE;

        case Usdef:
            return lastcopiedu.Ucode.I1 == IONE && lastcopiedu.intarray[2] == u.intarray[2];

        case Uvreg:
            return lastcopiedu.Ucode.I1 == IONE && lastcopiedu.intarray[3] == u.intarray[3];

        default:
            caseerror(1, 1619, "uoptutil.p", 10);
            return false; // originally uninitialized stack value was returned
    }
}

/*
00456A2C oneproc
*/
void skipproc(int reason) {
    bool unk;

    if (warn_flag != 1) {
        writeln(err.c_file);
        if (reason == 0) {
            write_string(err.c_file, "uopt: Warning: ", 15, 15);
            write_string(err.c_file, entnam0, 1024, entnam0len);
            write_string(err.c_file, ": this procedure not optimized due to memory limitation.", 56, 56);
            writeln(err.c_file);
        } else if (reason == 1) {
            write_string(err.c_file, "uopt: Warning: ", 15, 15);
            write_string(err.c_file, entnam0, 1024, entnam0len);
            write_string(err.c_file, ": this procedure not optimized because it", 41, 41);
            writeln(err.c_file);
            write_string(err.c_file, "      exceeds size threshold; to optimize this procedure, use -Olimit option", 76, 76);
            writeln(err.c_file);
            write_string(err.c_file, "      with value >=", 19, 19);
            write_integer(err.c_file, curproc->num_bbs, 5, 10);
            write_char(err.c_file, '.', 1);
            writeln(err.c_file);
        } else if (reason == 2) {
            write_string(err.c_file, "uopt: Warning: ", 15, 15);
            write_string(err.c_file, entnam0, 1024, entnam0len);
            write_string(err.c_file, ": optimization suppressed by control file.", 42, 42);
            writeln(err.c_file);
        }
        warned = true;
    }
    if (o3opt && reason == 0) {
        write_string(err.c_file, "                 Recompilation with -O2 required.", 49, 49);
        writeln(err.c_file);
        abort();
    }
    fflush(err.c_file);
    if (reason == 0) {
        initur(sourcename);
        do {
            readuinstr(&u, ustrptr);
            if (OPC == Ueof) {
                write_string(err.c_file, "uopt: Error: unexpected EOF in input ucode; giving up......", 59, 59);
                writeln(err.c_file);
                fflush(err.c_file);
                abort();
            }
        } while (!(OPC == Uent && curblk == IONE));
    }
    unk = lastcopiedu.Ucode.Opc != Unop;
    do {
        readuinstr(&u, ustrptr);
        if (OPC == Ueof) {
            write_string(err.c_file, "uopt: Error: unexpected EOF in input ucode; giving up.......", 60, 60);
            writeln(err.c_file);
            fflush(err.c_file);
            abort();
        }
        if (unk) {
            switch (OPC) {
                case Ucsym:
                case Uesym:
                case Ufsym:
                case Ugsym:
                case Uinit:
                case Ulsym:
                case Usdef:
                case Uvreg:
                    unk = !func_0047FE1C();
                    if (OPC == Uvreg) {
                        uwrite(&u);
                    }
                    break;

                default:
                    uwrite(&u);
                    break;
            }
        } else {
            // was originally the same BB as the default case above
            uwrite(&u);
        }
    } while (OPC != Uend);
}

__asm__(R""(
.set noat
.set noreorder

glabel inside_loop
    .ent inside_loop
    # 00447F90 check_loop_coincidence
    # 00448928 check_loop_induct_usages
/* 00480490 0004182B */  sltu  $v1, $zero, $a0
/* 00480494 1060000B */  beqz  $v1, .L004804C4
/* 00480498 00000000 */   nop
/* 0048049C 8C8E0000 */  lw    $t6, ($a0)
/* 004804A0 10AE0008 */  beq   $a1, $t6, .L004804C4
/* 004804A4 00000000 */   nop
/* 004804A8 8C840010 */  lw    $a0, 0x10($a0)
.L004804AC:
/* 004804AC 0004182B */  sltu  $v1, $zero, $a0
/* 004804B0 10600004 */  beqz  $v1, .L004804C4
/* 004804B4 00000000 */   nop
/* 004804B8 8C8F0000 */  lw    $t7, ($a0)
/* 004804BC 54AFFFFB */  bnel  $a1, $t7, .L004804AC
/* 004804C0 8C840010 */   lw    $a0, 0x10($a0)
.L004804C4:
/* 004804C4 03E00008 */  jr    $ra
/* 004804C8 00601025 */   move  $v0, $v1
    .type inside_loop, @function
    .size inside_loop, .-inside_loop
    .end inside_loop
)"");

/*
0042AADC func_0042AADC
0042B890 func_0042B890
0046123C func_0046123C
00480540 check_loop_nest_ix_cand
*/
bool check_ix_candidate(struct IChain *ichain, int loopno) {
    struct ScmThing *scm;

    scm = looptab[loopno].unk4;
    while (scm != NULL) {
        if (scm->ichain == ichain) {
            if (scm->unk10 == 1) {
                return scm->unk11;
            }
            break;
        }
        scm = scm->next;
    }

    return false;
}

__asm__(R""(
.set noat
.set noreorder

glabel check_loop_nest_ix_cand
    .ent check_loop_nest_ix_cand
    # 004230F0 func_004230F0
/* 00480540 3C1C0FBA */  .cpload $t9
/* 00480544 279C9D50 */
/* 00480548 0399E021 */
/* 0048054C 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 00480550 8F998718 */  lw    $t9, %call16(check_ix_candidate)($gp)
/* 00480554 AFB00014 */  sw    $s0, 0x14($sp)
/* 00480558 00A08025 */  move  $s0, $a1
/* 0048055C AFBF002C */  sw    $ra, 0x2c($sp)
/* 00480560 AFBC0028 */  sw    $gp, 0x28($sp)
/* 00480564 AFB40024 */  sw    $s4, 0x24($sp)
/* 00480568 AFB30020 */  sw    $s3, 0x20($sp)
/* 0048056C AFB2001C */  sw    $s2, 0x1c($sp)
/* 00480570 AFB10018 */  sw    $s1, 0x18($sp)
/* 00480574 00809825 */  move  $s3, $a0
/* 00480578 00C0A025 */  move  $s4, $a2
/* 0048057C 0320F809 */  jalr  $t9
/* 00480580 8CA50000 */   lw    $a1, ($a1)
/* 00480584 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00480588 1440001E */  bnez  $v0, .L00480604
/* 0048058C AE820000 */   sw    $v0, ($s4)
/* 00480590 8E0F0000 */  lw    $t7, ($s0)
/* 00480594 2412000C */  li    $s2, 12
/* 00480598 8F918A0C */  lw     $s1, %got(looptab)($gp)
/* 0048059C 01F20019 */  multu $t7, $s2
/* 004805A0 8E2E0000 */  lw    $t6, ($s1)
/* 004805A4 0000C012 */  mflo  $t8
/* 004805A8 01D8C821 */  addu  $t9, $t6, $t8
/* 004805AC 8F280000 */  lw    $t0, ($t9)
/* 004805B0 8D020010 */  lw    $v0, 0x10($t0)
/* 004805B4 50400014 */  beql  $v0, $zero, .L00480608
/* 004805B8 8FBF002C */   lw    $ra, 0x2c($sp)
/* 004805BC 8C450000 */  lw    $a1, ($v0)
.L004805C0:
/* 004805C0 02602025 */  move  $a0, $s3
/* 004805C4 AE050000 */  sw    $a1, ($s0)
/* 004805C8 8F998718 */  lw    $t9, %call16(check_ix_candidate)($gp)
/* 004805CC 0320F809 */  jalr  $t9
/* 004805D0 00000000 */   nop
/* 004805D4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004805D8 1440000A */  bnez  $v0, .L00480604
/* 004805DC AE820000 */   sw    $v0, ($s4)
/* 004805E0 8E0B0000 */  lw    $t3, ($s0)
/* 004805E4 8E2A0000 */  lw    $t2, ($s1)
/* 004805E8 01720019 */  multu $t3, $s2
/* 004805EC 00006012 */  mflo  $t4
/* 004805F0 014C6821 */  addu  $t5, $t2, $t4
/* 004805F4 8DAF0000 */  lw    $t7, ($t5)
/* 004805F8 8DE20010 */  lw    $v0, 0x10($t7)
/* 004805FC 5440FFF0 */  bnezl $v0, .L004805C0
/* 00480600 8C450000 */   lw    $a1, ($v0)
.L00480604:
/* 00480604 8FBF002C */  lw    $ra, 0x2c($sp)
.L00480608:
/* 00480608 8FB00014 */  lw    $s0, 0x14($sp)
/* 0048060C 8FB10018 */  lw    $s1, 0x18($sp)
/* 00480610 8FB2001C */  lw    $s2, 0x1c($sp)
/* 00480614 8FB30020 */  lw    $s3, 0x20($sp)
/* 00480618 8FB40024 */  lw    $s4, 0x24($sp)
/* 0048061C 03E00008 */  jr    $ra
/* 00480620 27BD0030 */   addiu $sp, $sp, 0x30
    .type check_loop_nest_ix_cand, @function
    .size check_loop_nest_ix_cand, .-check_loop_nest_ix_cand
    .end check_loop_nest_ix_cand
)"");

/*
0046123C func_0046123C
*/
bool check_ix_source(struct IChain *ichain, int loopno) {
    struct ScmThing *scm;

    scm = looptab[loopno].unk4;
    while (scm != NULL) {
        if (scm->ichain == ichain) {
            if (scm->unk10 == 3) {
                return scm->unk11;
            }
            break;
        }
        scm = scm->next;
    }

    return false;
}

/*
004230F0 func_004230F0
0042AADC func_0042AADC
*/
struct ScmThing *get_ix_source(unsigned char unk11, int loopnum) {
    struct ScmThing *source;

    source = looptab[loopnum].unk4;
    if (source->unk11 != unk11 || source->unk10 != 3) {
        source = source->next;
    }
    return source;
}
