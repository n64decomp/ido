#include <stdlib.h>
#include <string.h>
#include "ucode.h"
#include "uoptutil.h"
#include "uoptdata.h"

__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
RO_1000DE90:
    # 0047B51C ovfwwarning
    .ascii "Constant evaluation left to run time for this case."

RO_1000DEC3:
    # 0047B51C ovfwwarning
    .ascii "questionable result as a result of copy propagation or other optimizations."

RO_1000DF0E:
    # 0047B51C ovfwwarning
    .ascii " constant evaluation found"

RO_1000DF28:
    # 0047B51C ovfwwarning
    .ascii "Ucode op:"

RO_1000DF31:
    # 0047B51C ovfwwarning
    .ascii "convert a length"

RO_1000DF41:
    # 0047B51C ovfwwarning
    .ascii "check against lower bound"

RO_1000DF5A:
    # 0047B51C ovfwwarning
    .ascii "check against upper bound"

RO_1000DF73:
    # 0047B51C ovfwwarning
    .ascii "not"

RO_1000DF76:
    # 0047B51C ovfwwarning
    .ascii "logical not"

RO_1000DF81:
    # 0047B51C ovfwwarning
    .ascii "square a number"

RO_1000DF90:
    # 0047B51C ovfwwarning
    .ascii "odd integer"

RO_1000DF9B:
    # 0047B51C ovfwwarning
    .ascii "exclusive or"

RO_1000DFA7:
    # 0047B51C ovfwwarning
    .ascii "maximum"

RO_1000DFAE:
    # 0047B51C ovfwwarning
    .ascii "minimum"

RO_1000DFB5:
    # 0047B51C ovfwwarning
    .ascii "less than or equal to"

RO_1000DFCA:
    # 0047B51C ovfwwarning
    .ascii "less than"

RO_1000DFD3:
    # 0047B51C ovfwwarning
    .ascii "greater than or eqaul to"

RO_1000DFEB:
    # 0047B51C ovfwwarning
    .ascii "greater than"

RO_1000DFF7:
    # 0047B51C ovfwwarning
    .ascii "equality comparison"

RO_1000E00A:
    # 0047B51C ovfwwarning
    .ascii "multiple set"

RO_1000E016:
    # 0047B51C ovfwwarning
    .ascii "element in set"

RO_1000E024:
    # 0047B51C ovfwwarning
    .ascii "set difference"

RO_1000E032:
    # 0047B51C ovfwwarning
    .ascii "set intersection"

RO_1000E042:
    # 0047B51C ovfwwarning
    .ascii "set union"

RO_1000E04B:
    # 0047B51C ovfwwarning
    .ascii "shift right"

RO_1000E056:
    # 0047B51C ovfwwarning
    .ascii "shift left"

RO_1000E060:
    # 0047B51C ovfwwarning
    .ascii "memory indexing"

RO_1000E06F:
    # 0047B51C ovfwwarning
    .ascii "increment"

RO_1000E078:
    # 0047B51C ovfwwarning
    .ascii "decrement"

RO_1000E081:
    # 0047B51C ovfwwarning
    .ascii "absolute value"

RO_1000E08F:
    # 0047B51C ovfwwarning
    .ascii "negation"

RO_1000E097:
    # 0047B51C ovfwwarning
    .ascii "modulus"

RO_1000E09E:
    # 0047B51C ovfwwarning
    .ascii "division by zero"

RO_1000E0AE:
    # 0047B51C ovfwwarning
    .ascii "multiplication"

RO_1000E0BC:
    # 0047B51C ovfwwarning
    .ascii "subtraction"

RO_1000E0C7:
    # 0047B51C ovfwwarning
    .ascii "addition"

RO_1000E0CF:
    # 0047B51C ovfwwarning
    .ascii ": "

RO_1000E0D1:
    # 0047B51C ovfwwarning
    .ascii " line "

RO_1000E0D7:
    # 0047B51C ovfwwarning
    .asciz "uopt: Warning: "

    .balign 4
jtbl_1000E0E8:
    # 0047B51C ovfwwarning
    .gpword .L0047B73C
    .gpword .L0047B650

    .balign 4
jtbl_1000E0F0:
    # 0047B51C ovfwwarning
    .gpword .L0047BACC
    .gpword .L0047BAF4

    .balign 4
jtbl_1000E0F8:
    # 0047B51C ovfwwarning
    .gpword .L0047BB1C
    .gpword .L0047B764
    .gpword .L0047BB44
    .gpword .L0047B878
    .gpword .L0047B6C4

    .balign 4
jtbl_1000E10C:
    # 0047B51C ovfwwarning
    .gpword .L0047B93C
    .gpword .L0047B914

    .balign 4
jtbl_1000E114:
    # 0047B51C ovfwwarning
    .gpword .L0047B78C
    .gpword .L0047BB44
    .gpword .L0047BB44
    .gpword .L0047B8A0
    .gpword .L0047B850

    .balign 4
jtbl_1000E128:
    # 0047B51C ovfwwarning
    .gpword .L0047B98C
    .gpword .L0047B964
    .gpword .L0047BB44
    .gpword .L0047BA7C
    .gpword .L0047BB44
    .gpword .L0047BB44
    .gpword .L0047BB44
    .gpword .L0047BB44
    .gpword .L0047B9DC
    .gpword .L0047B9B4
    .gpword .L0047B6EC
    .gpword .L0047BB44
    .gpword .L0047BB44
    .gpword .L0047BB44
    .gpword .L0047B69C
    .gpword .L0047BB44
    .gpword .L0047B8C8
    .gpword .L0047B714
    .gpword .L0047BB44
    .gpword .L0047BB44
    .gpword .L0047BAA4
    .gpword .L0047BA2C

    .balign 4
jtbl_1000E180:
    # 0047B51C ovfwwarning
    .gpword .L0047B7D8
    .gpword .L0047B800
    .gpword .L0047BB44
    .gpword .L0047BA54

    .balign 4
jtbl_1000E190:
    # 0047B51C ovfwwarning
    .gpword .L0047B828
    .gpword .L0047BB44
    .gpword .L0047BB44
    .gpword .L0047BA04

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

RO_1000E200:
    # 0047C284 copycoderep
    .asciz "uoptutil.p"

    .balign 4
jtbl_1000E20C:
    # 0047C284 copycoderep
    .gpword .L0047C370
    .gpword .L0047C3F0
    .gpword .L0047C430
    .gpword .L0047C4BC
    .gpword .L0047C39C
    .gpword .L0047C430
    .gpword .L0047C4BC
    .gpword .L0047C41C

RO_1000E22C:
    # 0047C6E8 decreasecount
    .asciz "uoptutil.p"

    .balign 4
jtbl_1000E238:
    # 0047C6E8 decreasecount
    .gpword .L0047C950
    .gpword .L0047C950
    .gpword .L0047C788
    .gpword .L0047C868
    .gpword .L0047C744
    .gpword .L0047C7DC
    .gpword .L0047C930
    .gpword .L0047C950

RO_1000E258:
    # 0047C960 increasecount
    .asciz "uoptutil.p"

    .balign 4
jtbl_1000E264:
    # 0047C960 increasecount
    .gpword .L0047CABC
    .gpword .L0047CABC
    .gpword .L0047C9B0
    .gpword .L0047CA20
    .gpword .L0047C9F0
    .gpword .L0047C9C0
    .gpword .L0047CA9C
    .gpword .L0047CABC

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

RO_1000E308:
    # 0047DBB4 getoption
    .asciz "uoptutil.p"

    .balign 4
jtbl_1000E314:
    # 0047DBB4 getoption
    .gpword .L0047DDFC
    .gpword .L0047DE08
    .gpword .L0047DE18
    .gpword .L0047DE28
    .gpword .L0047DE38
    .gpword .L0047DE48
    .gpword .L0047DE58

    .balign 4
jtbl_1000E330:
    # 0047DBB4 getoption
    .gpword .L0047DDBC
    .gpword .L0047DC04
    .gpword .L0047DF90
    .gpword .L0047DE8C
    .gpword .L0047DEA0

    .balign 4
jtbl_1000E344:
    # 0047DBB4 getoption
    .gpword .L0047DEB0
    .gpword .L0047DEFC
    .gpword .L0047DF18
    .gpword .L0047DF2C
    .gpword .L0047DF40
    .gpword .L0047DF54

RO_1000E35C:
    # 0047E3BC binopwithconst
    .ascii "uoptutil.p"

RO_1000E366:
    # 0047E6D8 constinreg
    .ascii "uoptutil.p"

    .balign 4
jtbl_1000E370:
    # 0047E6D8 constinreg
    .gpword .L0047E818
    .gpword .L0047E82C
    .gpword .L0047E840
    .gpword .L0047E820

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

RO_1000E418:
    # 0047F4C0 trap_imply
    .asciz "uoptutil.p"

    .balign 4
jtbl_1000E424:
    # 0047F4C0 trap_imply
    .gpword .L0047F548
    .gpword .L0047F548
    .gpword .L0047F59C
    .gpword .L0047F59C

RO_1000E434:
    # 0047F620 trapstat_imply
    .ascii "uoptutil.p"

RO_1000E43E:
    # 0047F620 trapstat_imply
    .ascii "uoptutil.p"

    .balign 4
jtbl_1000E448:
    # 0047F620 trapstat_imply
    .gpword .L0047F710
    .gpword .L0047F710
    .gpword .L0047F734
    .gpword .L0047F734

    .balign 4
jtbl_1000E458:
    # 0047F620 trapstat_imply
    .gpword .L0047F7AC
    .gpword .L0047F7AC
    .gpword .L0047F7D0
    .gpword .L0047F7D0

RO_1000E468:
    # 0047FE1C func_0047FE1C
    .asciz "uoptutil.p"

    .balign 4
jtbl_1000E474:
    # 0047FE1C func_0047FE1C
    .gpword .L0047FE5C
    .gpword .L0047FF48
    .gpword .L0047FF48
    .gpword .L0047FE5C
    .gpword .L0047FF48
    .gpword .L0047FF48
    .gpword .L0047FE5C

RO_1000E490:
    # 0047FF7C skipproc
    .ascii "uopt: Error: unexpected EOF in input ucode; giving up......."

RO_1000E4CC:
    # 0047FF7C skipproc
    .ascii "uopt: Error: unexpected EOF in input ucode; giving up......"

RO_1000E507:
    # 0047FF7C skipproc
    .ascii "                 Recompilation with -O2 required."

RO_1000E538:
    # 0047FF7C skipproc
    .ascii ": optimization suppressed by control file."

RO_1000E562:
    # 0047FF7C skipproc
    .ascii "uopt: Warning: "

RO_1000E571:
    # 0047FF7C skipproc
    .ascii "      with value >="

RO_1000E584:
    # 0047FF7C skipproc
    .ascii "      exceeds size threshold; to optimize this procedure, use -Olimit option"

RO_1000E5D0:
    # 0047FF7C skipproc
    .ascii ": this procedure not optimized because it"

RO_1000E5F9:
    # 0047FF7C skipproc
    .ascii "uopt: Warning: "

RO_1000E608:
    # 0047FF7C skipproc
    .ascii ": this procedure not optimized due to memory limitation."

RO_1000E640:
    # 0047FF7C skipproc
    .asciz "uopt: Warning: "

.data
D_10011330:
    # 0047B51C ovfwwarning
    .ascii "uabs\x00   uadd\x00   uadj\x00   uaent\x00  uand\x00   uaos\x00   uasym\x00  ubgn\x00   ubgnb\x00  ubsub\x00  ucg1\x00   ucg2\x00   uchkh\x00  uchkl\x00  uchkn\x00  uchkt\x00  ucia\x00   uclab\x00  uclbd\x00  ucomm\x00  ucsym\x00  uctrl\x00  ucubd\x00  ucup\x00   ucvt\x00   ucvtl\x00  udec\x00   udef\x00   udif\x00   udiv\x00   udup\x00   uend\x00   uendb\x00  uent\x00   ueof\x00   uequ\x00   uesym\x00  ufill\x00  ufjp\x00   ufsym\x00  ugeq\x00   ugrt\x00   ugsym\x00  uhsym\x00  uicuf\x00  uidx\x00   uiequ\x00  uigeq\x00  uigrt\x00  uijp\x00   uilda\x00  uildv\x00  uileq\x00  uiles\x00  uilod\x00  uinc\x00   uineq\x00  uinit\x00  uinn\x00   uint\x00   uior\x00   uisld\x00  uisst\x00  uistr\x00  uistv\x00  uixa\x00   ulab\x00   ulbd\x00   ulbdy\x00  ulbgn\x00  ulca\x00   ulda\x00   uldap\x00  uldc\x00   uldef\x00  uldsp\x00  ulend\x00  uleq\x00   ules\x00   ulex\x00   ulnot\x00  uloc\x00   ulod\x00   ulsym\x00  ultrm\x00  umax\x00   umin\x00   umod\x00   umov\x00   umovv\x00  umpmv\x00  umpy\x00   umst\x00   umus\x00   uneg\x00   uneq\x00   unop\x00   unot\x00   uodd\x00   uoptn\x00  upar\x00   updef\x00  upmov\x00  upop\x00   uregs\x00  urem\x00   uret\x00   urlda\x00  urldc\x00  urlod\x00  urnd\x00   urpar\x00  urstr\x00  usdef\x00  usgs\x00   ushl\x00   ushr\x00   usign\x00  usqr\x00   usqrt\x00  ussym\x00  ustep\x00  ustp\x00   ustr\x00   ustsp\x00  usub\x00   uswp\x00   utjp\x00   utpeq\x00  utpge\x00  utpgt\x00  utple\x00  utplt\x00  utpne\x00  utyp\x00   uubd\x00   uujp\x00   uunal\x00  uuni\x00   uvreg\x00  uxjp\x00   uxor\x00   uxpar\x00  umtag\x00  ualia\x00  uildi\x00  uisti\x00  uirld\x00  uirst\x00  uldrc\x00  umsym\x00  urcuf\x00  uksym\x00  uosym\x00  uirlv\x00  uirsv\x00\x00 "

# 10011810
glabel coloroffsettable
    # 0047FD94 coloroffset
    .byte 0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0x0a,0x0b,0x0c,0x0d,0x1f,0x10,0x11,0x12,0x13,0x14,0x15,0x16,0x17,0x1e,0x1f,0x20,0x22,0x2c,0x2e,0x30,0x32,0x34,0x36,0x38,0x3a,0x3c,0x3e
    .type coloroffsettable, @object
    .size coloroffsettable, .-coloroffsettable # 35
    .space 1

D_10011834:
    # 0047C53C fixcorr
    .byte 0x00,0x03,0x9e,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x20

D_10011844:
    # 0047C6E8 decreasecount
    .byte 0x00,0x03,0x9e,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x20

D_10011854:
    # 0047D878 deccount
    .byte 0x00,0x03,0x9e,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x20

D_10011870:
    # 0047EF74 has_volt_ovfw
    .byte 0x10,0xc0,0x00,0x00,0x00,0x06,0x00,0x01

D_10011878:
    # 0047F16C is_incr
    .byte 0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04

D_10011888:
    # 0047FF7C skipproc
    .byte 0x00,0x00,0x08,0x00,0x09,0x20,0x00,0x40,0x00,0x00,0x10,0x00,0x00,0x00,0x40,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x00




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
bool addreq(struct VariableInner a, struct VariableInner b) {
    return a.unk0 == b.unk0 && a.memtype == b.memtype && a.unk4bFFFFF800 == b.unk4bFFFFF800;
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

__asm__(R""(
.set noat
.set noreorder

glabel ovfwwarning
    .ent ovfwwarning
    # 0041550C func_0041550C
    # 00425618 func_00425618
    # 0044F738 linearize
    # 00451764 func_00451764
/* 0047B51C 3C1C0FBA */  .cpload $t9
/* 0047B520 279CED74 */
/* 0047B524 0399E021 */
/* 0047B528 8F8E8B58 */  lw     $t6, %got(warn_flag)($gp)
/* 0047B52C 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 0047B530 24020001 */  li    $v0, 1
/* 0047B534 91CE0000 */  lbu   $t6, ($t6)
/* 0047B538 AFBF0024 */  sw    $ra, 0x24($sp)
/* 0047B53C AFBC0020 */  sw    $gp, 0x20($sp)
/* 0047B540 AFB0001C */  sw    $s0, 0x1c($sp)
/* 0047B544 104E0227 */  beq   $v0, $t6, .L0047BDE4
/* 0047B548 AFA40030 */   sw    $a0, 0x30($sp)
/* 0047B54C 8F818B08 */  lw     $at, %got(warned)($gp)
/* 0047B550 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0047B554 8F908908 */  lw     $s0, %got(err)($gp)
/* 0047B558 A0220000 */  sb    $v0, ($at)
/* 0047B55C 0320F809 */  jalr  $t9
/* 0047B560 8E040000 */   lw    $a0, ($s0)
/* 0047B564 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0047B568 8E040000 */  lw    $a0, ($s0)
/* 0047B56C 2406000F */  li    $a2, 15
/* 0047B570 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0047B574 8F858044 */  lw    $a1, %got(RO_1000E0D7)($gp)
/* 0047B578 2407000F */  li    $a3, 15
/* 0047B57C 0320F809 */  jalr  $t9
/* 0047B580 24A5E0D7 */   addiu $a1, %lo(RO_1000E0D7) # addiu $a1, $a1, -0x1f29
/* 0047B584 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0047B588 8E040000 */  lw    $a0, ($s0)
/* 0047B58C 24060400 */  li    $a2, 1024
/* 0047B590 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0047B594 8F878984 */  lw     $a3, %got(entnam0len)($gp)
/* 0047B598 8F858DE4 */  lw     $a1, %got(entnam0)($gp)
/* 0047B59C 0320F809 */  jalr  $t9
/* 0047B5A0 8CE70000 */   lw    $a3, ($a3)
/* 0047B5A4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0047B5A8 8E040000 */  lw    $a0, ($s0)
/* 0047B5AC 24060006 */  li    $a2, 6
/* 0047B5B0 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0047B5B4 8F858044 */  lw    $a1, %got(RO_1000E0D1)($gp)
/* 0047B5B8 24070006 */  li    $a3, 6
/* 0047B5BC 0320F809 */  jalr  $t9
/* 0047B5C0 24A5E0D1 */   addiu $a1, %lo(RO_1000E0D1) # addiu $a1, $a1, -0x1f2f
/* 0047B5C4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0047B5C8 8E040000 */  lw    $a0, ($s0)
/* 0047B5CC 00003025 */  move  $a2, $zero
/* 0047B5D0 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0047B5D4 8F858A44 */  lw     $a1, %got(curlocln)($gp)
/* 0047B5D8 2407000A */  li    $a3, 10
/* 0047B5DC 0320F809 */  jalr  $t9
/* 0047B5E0 8CA50000 */   lw    $a1, ($a1)
/* 0047B5E4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0047B5E8 8E040000 */  lw    $a0, ($s0)
/* 0047B5EC 24060002 */  li    $a2, 2
/* 0047B5F0 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0047B5F4 8F858044 */  lw    $a1, %got(RO_1000E0CF)($gp)
/* 0047B5F8 24070002 */  li    $a3, 2
/* 0047B5FC 0320F809 */  jalr  $t9
/* 0047B600 24A5E0CF */   addiu $a1, %lo(RO_1000E0CF) # addiu $a1, $a1, -0x1f31
/* 0047B604 93A20033 */  lbu   $v0, 0x33($sp)
/* 0047B608 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0047B60C 2C41003C */  sltiu $at, $v0, 0x3c
/* 0047B610 1420017E */  bnez  $at, .L0047BC0C
/* 0047B614 2C41006A */   sltiu $at, $v0, 0x6a
/* 0047B618 1420016C */  bnez  $at, .L0047BBCC
/* 0047B61C 2C41007E */   sltiu $at, $v0, 0x7e
/* 0047B620 1420015D */  bnez  $at, .L0047BB98
/* 0047B624 244FFF76 */   addiu $t7, $v0, -0x8a
/* 0047B628 2DE10004 */  sltiu $at, $t7, 4
/* 0047B62C 10200145 */  beqz  $at, .L0047BB44
/* 0047B630 00000000 */   nop
/* 0047B634 8F818044 */  lw    $at, %got(jtbl_1000E190)($gp)
/* 0047B638 000F7880 */  sll   $t7, $t7, 2
/* 0047B63C 002F0821 */  addu  $at, $at, $t7
/* 0047B640 8C2FE190 */  lw    $t7, %lo(jtbl_1000E190)($at)
/* 0047B644 01FC7821 */  addu  $t7, $t7, $gp
/* 0047B648 01E00008 */  jr    $t7
/* 0047B64C 00000000 */   nop
.L0047B650:
/* 0047B650 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0047B654 8F858044 */  lw    $a1, %got(RO_1000E0C7)($gp)
/* 0047B658 8E040000 */  lw    $a0, ($s0)
/* 0047B65C 24060008 */  li    $a2, 8
/* 0047B660 24070008 */  li    $a3, 8
/* 0047B664 0320F809 */  jalr  $t9
/* 0047B668 24A5E0C7 */   addiu $a1, %lo(RO_1000E0C7) # addiu $a1, $a1, -0x1f39
/* 0047B66C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0047B670 100001B1 */  b     .L0047BD38
/* 0047B674 8E040000 */   lw    $a0, ($s0)
.L0047B678:
/* 0047B678 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0047B67C 8F858044 */  lw    $a1, %got(RO_1000E0BC)($gp)
/* 0047B680 8E040000 */  lw    $a0, ($s0)
/* 0047B684 2407000B */  li    $a3, 11
/* 0047B688 0320F809 */  jalr  $t9
/* 0047B68C 24A5E0BC */   addiu $a1, %lo(RO_1000E0BC) # addiu $a1, $a1, -0x1f44
/* 0047B690 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0047B694 100001A8 */  b     .L0047BD38
/* 0047B698 8E040000 */   lw    $a0, ($s0)
.L0047B69C:
/* 0047B69C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0047B6A0 8F858044 */  lw    $a1, %got(RO_1000E0AE)($gp)
/* 0047B6A4 8E040000 */  lw    $a0, ($s0)
/* 0047B6A8 2406000E */  li    $a2, 14
/* 0047B6AC 2407000E */  li    $a3, 14
/* 0047B6B0 0320F809 */  jalr  $t9
/* 0047B6B4 24A5E0AE */   addiu $a1, %lo(RO_1000E0AE) # addiu $a1, $a1, -0x1f52
/* 0047B6B8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0047B6BC 1000019E */  b     .L0047BD38
/* 0047B6C0 8E040000 */   lw    $a0, ($s0)
.L0047B6C4:
/* 0047B6C4 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0047B6C8 8F858044 */  lw    $a1, %got(RO_1000E09E)($gp)
/* 0047B6CC 8E040000 */  lw    $a0, ($s0)
/* 0047B6D0 24060010 */  li    $a2, 16
/* 0047B6D4 24070010 */  li    $a3, 16
/* 0047B6D8 0320F809 */  jalr  $t9
/* 0047B6DC 24A5E09E */   addiu $a1, %lo(RO_1000E09E) # addiu $a1, $a1, -0x1f62
/* 0047B6E0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0047B6E4 10000194 */  b     .L0047BD38
/* 0047B6E8 8E040000 */   lw    $a0, ($s0)
.L0047B6EC:
/* 0047B6EC 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0047B6F0 8F858044 */  lw    $a1, %got(RO_1000E097)($gp)
/* 0047B6F4 8E040000 */  lw    $a0, ($s0)
/* 0047B6F8 24060007 */  li    $a2, 7
/* 0047B6FC 24070007 */  li    $a3, 7
/* 0047B700 0320F809 */  jalr  $t9
/* 0047B704 24A5E097 */   addiu $a1, %lo(RO_1000E097) # addiu $a1, $a1, -0x1f69
/* 0047B708 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0047B70C 1000018A */  b     .L0047BD38
/* 0047B710 8E040000 */   lw    $a0, ($s0)
.L0047B714:
/* 0047B714 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0047B718 8F858044 */  lw    $a1, %got(RO_1000E08F)($gp)
/* 0047B71C 8E040000 */  lw    $a0, ($s0)
/* 0047B720 24060008 */  li    $a2, 8
/* 0047B724 24070008 */  li    $a3, 8
/* 0047B728 0320F809 */  jalr  $t9
/* 0047B72C 24A5E08F */   addiu $a1, %lo(RO_1000E08F) # addiu $a1, $a1, -0x1f71
/* 0047B730 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0047B734 10000180 */  b     .L0047BD38
/* 0047B738 8E040000 */   lw    $a0, ($s0)
.L0047B73C:
/* 0047B73C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0047B740 8F858044 */  lw    $a1, %got(RO_1000E081)($gp)
/* 0047B744 8E040000 */  lw    $a0, ($s0)
/* 0047B748 2406000E */  li    $a2, 14
/* 0047B74C 2407000E */  li    $a3, 14
/* 0047B750 0320F809 */  jalr  $t9
/* 0047B754 24A5E081 */   addiu $a1, %lo(RO_1000E081) # addiu $a1, $a1, -0x1f7f
/* 0047B758 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0047B75C 10000176 */  b     .L0047BD38
/* 0047B760 8E040000 */   lw    $a0, ($s0)
.L0047B764:
/* 0047B764 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0047B768 8F858044 */  lw    $a1, %got(RO_1000E078)($gp)
/* 0047B76C 8E040000 */  lw    $a0, ($s0)
/* 0047B770 24060009 */  li    $a2, 9
/* 0047B774 24070009 */  li    $a3, 9
/* 0047B778 0320F809 */  jalr  $t9
/* 0047B77C 24A5E078 */   addiu $a1, %lo(RO_1000E078) # addiu $a1, $a1, -0x1f88
/* 0047B780 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0047B784 1000016C */  b     .L0047BD38
/* 0047B788 8E040000 */   lw    $a0, ($s0)
.L0047B78C:
/* 0047B78C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0047B790 8F858044 */  lw    $a1, %got(RO_1000E06F)($gp)
/* 0047B794 8E040000 */  lw    $a0, ($s0)
/* 0047B798 24060009 */  li    $a2, 9
/* 0047B79C 24070009 */  li    $a3, 9
/* 0047B7A0 0320F809 */  jalr  $t9
/* 0047B7A4 24A5E06F */   addiu $a1, %lo(RO_1000E06F) # addiu $a1, $a1, -0x1f91
/* 0047B7A8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0047B7AC 10000162 */  b     .L0047BD38
/* 0047B7B0 8E040000 */   lw    $a0, ($s0)
.L0047B7B4:
/* 0047B7B4 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0047B7B8 8F858044 */  lw    $a1, %got(RO_1000E060)($gp)
/* 0047B7BC 8E040000 */  lw    $a0, ($s0)
/* 0047B7C0 2407000F */  li    $a3, 15
/* 0047B7C4 0320F809 */  jalr  $t9
/* 0047B7C8 24A5E060 */   addiu $a1, %lo(RO_1000E060) # addiu $a1, $a1, -0x1fa0
/* 0047B7CC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0047B7D0 10000159 */  b     .L0047BD38
/* 0047B7D4 8E040000 */   lw    $a0, ($s0)
.L0047B7D8:
/* 0047B7D8 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0047B7DC 8F858044 */  lw    $a1, %got(RO_1000E056)($gp)
/* 0047B7E0 8E040000 */  lw    $a0, ($s0)
/* 0047B7E4 2406000A */  li    $a2, 10
/* 0047B7E8 2407000A */  li    $a3, 10
/* 0047B7EC 0320F809 */  jalr  $t9
/* 0047B7F0 24A5E056 */   addiu $a1, %lo(RO_1000E056) # addiu $a1, $a1, -0x1faa
/* 0047B7F4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0047B7F8 1000014F */  b     .L0047BD38
/* 0047B7FC 8E040000 */   lw    $a0, ($s0)
.L0047B800:
/* 0047B800 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0047B804 8F858044 */  lw    $a1, %got(RO_1000E04B)($gp)
/* 0047B808 8E040000 */  lw    $a0, ($s0)
/* 0047B80C 2406000B */  li    $a2, 11
/* 0047B810 2407000B */  li    $a3, 11
/* 0047B814 0320F809 */  jalr  $t9
/* 0047B818 24A5E04B */   addiu $a1, %lo(RO_1000E04B) # addiu $a1, $a1, -0x1fb5
/* 0047B81C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0047B820 10000145 */  b     .L0047BD38
/* 0047B824 8E040000 */   lw    $a0, ($s0)
.L0047B828:
/* 0047B828 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0047B82C 8F858044 */  lw    $a1, %got(RO_1000E042)($gp)
/* 0047B830 8E040000 */  lw    $a0, ($s0)
/* 0047B834 24060009 */  li    $a2, 9
/* 0047B838 24070009 */  li    $a3, 9
/* 0047B83C 0320F809 */  jalr  $t9
/* 0047B840 24A5E042 */   addiu $a1, %lo(RO_1000E042) # addiu $a1, $a1, -0x1fbe
/* 0047B844 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0047B848 1000013B */  b     .L0047BD38
/* 0047B84C 8E040000 */   lw    $a0, ($s0)
.L0047B850:
/* 0047B850 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0047B854 8F858044 */  lw    $a1, %got(RO_1000E032)($gp)
/* 0047B858 8E040000 */  lw    $a0, ($s0)
/* 0047B85C 24060010 */  li    $a2, 16
/* 0047B860 24070010 */  li    $a3, 16
/* 0047B864 0320F809 */  jalr  $t9
/* 0047B868 24A5E032 */   addiu $a1, %lo(RO_1000E032) # addiu $a1, $a1, -0x1fce
/* 0047B86C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0047B870 10000131 */  b     .L0047BD38
/* 0047B874 8E040000 */   lw    $a0, ($s0)
.L0047B878:
/* 0047B878 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0047B87C 8F858044 */  lw    $a1, %got(RO_1000E024)($gp)
/* 0047B880 8E040000 */  lw    $a0, ($s0)
/* 0047B884 2406000E */  li    $a2, 14
/* 0047B888 2407000E */  li    $a3, 14
/* 0047B88C 0320F809 */  jalr  $t9
/* 0047B890 24A5E024 */   addiu $a1, %lo(RO_1000E024) # addiu $a1, $a1, -0x1fdc
/* 0047B894 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0047B898 10000127 */  b     .L0047BD38
/* 0047B89C 8E040000 */   lw    $a0, ($s0)
.L0047B8A0:
/* 0047B8A0 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0047B8A4 8F858044 */  lw    $a1, %got(RO_1000E016)($gp)
/* 0047B8A8 8E040000 */  lw    $a0, ($s0)
/* 0047B8AC 2406000E */  li    $a2, 14
/* 0047B8B0 2407000E */  li    $a3, 14
/* 0047B8B4 0320F809 */  jalr  $t9
/* 0047B8B8 24A5E016 */   addiu $a1, %lo(RO_1000E016) # addiu $a1, $a1, -0x1fea
/* 0047B8BC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0047B8C0 1000011D */  b     .L0047BD38
/* 0047B8C4 8E040000 */   lw    $a0, ($s0)
.L0047B8C8:
/* 0047B8C8 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0047B8CC 8F858044 */  lw    $a1, %got(RO_1000E00A)($gp)
/* 0047B8D0 8E040000 */  lw    $a0, ($s0)
/* 0047B8D4 2406000C */  li    $a2, 12
/* 0047B8D8 2407000C */  li    $a3, 12
/* 0047B8DC 0320F809 */  jalr  $t9
/* 0047B8E0 24A5E00A */   addiu $a1, %lo(RO_1000E00A) # addiu $a1, $a1, -0x1ff6
/* 0047B8E4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0047B8E8 10000113 */  b     .L0047BD38
/* 0047B8EC 8E040000 */   lw    $a0, ($s0)
.L0047B8F0:
/* 0047B8F0 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0047B8F4 8F858044 */  lw    $a1, %got(RO_1000DFF7)($gp)
/* 0047B8F8 8E040000 */  lw    $a0, ($s0)
/* 0047B8FC 24070013 */  li    $a3, 19
/* 0047B900 0320F809 */  jalr  $t9
/* 0047B904 24A5DFF7 */   addiu $a1, %lo(RO_1000DFF7) # addiu $a1, $a1, -0x2009
/* 0047B908 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0047B90C 1000010A */  b     .L0047BD38
/* 0047B910 8E040000 */   lw    $a0, ($s0)
.L0047B914:
/* 0047B914 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0047B918 8F858044 */  lw    $a1, %got(RO_1000DFEB)($gp)
/* 0047B91C 8E040000 */  lw    $a0, ($s0)
/* 0047B920 2406000C */  li    $a2, 12
/* 0047B924 2407000C */  li    $a3, 12
/* 0047B928 0320F809 */  jalr  $t9
/* 0047B92C 24A5DFEB */   addiu $a1, %lo(RO_1000DFEB) # addiu $a1, $a1, -0x2015
/* 0047B930 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0047B934 10000100 */  b     .L0047BD38
/* 0047B938 8E040000 */   lw    $a0, ($s0)
.L0047B93C:
/* 0047B93C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0047B940 8F858044 */  lw    $a1, %got(RO_1000DFD3)($gp)
/* 0047B944 8E040000 */  lw    $a0, ($s0)
/* 0047B948 24060018 */  li    $a2, 24
/* 0047B94C 24070018 */  li    $a3, 24
/* 0047B950 0320F809 */  jalr  $t9
/* 0047B954 24A5DFD3 */   addiu $a1, %lo(RO_1000DFD3) # addiu $a1, $a1, -0x202d
/* 0047B958 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0047B95C 100000F6 */  b     .L0047BD38
/* 0047B960 8E040000 */   lw    $a0, ($s0)
.L0047B964:
/* 0047B964 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0047B968 8F858044 */  lw    $a1, %got(RO_1000DFCA)($gp)
/* 0047B96C 8E040000 */  lw    $a0, ($s0)
/* 0047B970 24060009 */  li    $a2, 9
/* 0047B974 24070009 */  li    $a3, 9
/* 0047B978 0320F809 */  jalr  $t9
/* 0047B97C 24A5DFCA */   addiu $a1, %lo(RO_1000DFCA) # addiu $a1, $a1, -0x2036
/* 0047B980 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0047B984 100000EC */  b     .L0047BD38
/* 0047B988 8E040000 */   lw    $a0, ($s0)
.L0047B98C:
/* 0047B98C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0047B990 8F858044 */  lw    $a1, %got(RO_1000DFB5)($gp)
/* 0047B994 8E040000 */  lw    $a0, ($s0)
/* 0047B998 24060015 */  li    $a2, 21
/* 0047B99C 24070015 */  li    $a3, 21
/* 0047B9A0 0320F809 */  jalr  $t9
/* 0047B9A4 24A5DFB5 */   addiu $a1, %lo(RO_1000DFB5) # addiu $a1, $a1, -0x204b
/* 0047B9A8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0047B9AC 100000E2 */  b     .L0047BD38
/* 0047B9B0 8E040000 */   lw    $a0, ($s0)
.L0047B9B4:
/* 0047B9B4 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0047B9B8 8F858044 */  lw    $a1, %got(RO_1000DFAE)($gp)
/* 0047B9BC 8E040000 */  lw    $a0, ($s0)
/* 0047B9C0 24060007 */  li    $a2, 7
/* 0047B9C4 24070007 */  li    $a3, 7
/* 0047B9C8 0320F809 */  jalr  $t9
/* 0047B9CC 24A5DFAE */   addiu $a1, %lo(RO_1000DFAE) # addiu $a1, $a1, -0x2052
/* 0047B9D0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0047B9D4 100000D8 */  b     .L0047BD38
/* 0047B9D8 8E040000 */   lw    $a0, ($s0)
.L0047B9DC:
/* 0047B9DC 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0047B9E0 8F858044 */  lw    $a1, %got(RO_1000DFA7)($gp)
/* 0047B9E4 8E040000 */  lw    $a0, ($s0)
/* 0047B9E8 24060007 */  li    $a2, 7
/* 0047B9EC 24070007 */  li    $a3, 7
/* 0047B9F0 0320F809 */  jalr  $t9
/* 0047B9F4 24A5DFA7 */   addiu $a1, %lo(RO_1000DFA7) # addiu $a1, $a1, -0x2059
/* 0047B9F8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0047B9FC 100000CE */  b     .L0047BD38
/* 0047BA00 8E040000 */   lw    $a0, ($s0)
.L0047BA04:
/* 0047BA04 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0047BA08 8F858044 */  lw    $a1, %got(RO_1000DF9B)($gp)
/* 0047BA0C 8E040000 */  lw    $a0, ($s0)
/* 0047BA10 2406000C */  li    $a2, 12
/* 0047BA14 2407000C */  li    $a3, 12
/* 0047BA18 0320F809 */  jalr  $t9
/* 0047BA1C 24A5DF9B */   addiu $a1, %lo(RO_1000DF9B) # addiu $a1, $a1, -0x2065
/* 0047BA20 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0047BA24 100000C4 */  b     .L0047BD38
/* 0047BA28 8E040000 */   lw    $a0, ($s0)
.L0047BA2C:
/* 0047BA2C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0047BA30 8F858044 */  lw    $a1, %got(RO_1000DF90)($gp)
/* 0047BA34 8E040000 */  lw    $a0, ($s0)
/* 0047BA38 2406000B */  li    $a2, 11
/* 0047BA3C 2407000B */  li    $a3, 11
/* 0047BA40 0320F809 */  jalr  $t9
/* 0047BA44 24A5DF90 */   addiu $a1, %lo(RO_1000DF90) # addiu $a1, $a1, -0x2070
/* 0047BA48 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0047BA4C 100000BA */  b     .L0047BD38
/* 0047BA50 8E040000 */   lw    $a0, ($s0)
.L0047BA54:
/* 0047BA54 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0047BA58 8F858044 */  lw    $a1, %got(RO_1000DF81)($gp)
/* 0047BA5C 8E040000 */  lw    $a0, ($s0)
/* 0047BA60 2406000F */  li    $a2, 15
/* 0047BA64 2407000F */  li    $a3, 15
/* 0047BA68 0320F809 */  jalr  $t9
/* 0047BA6C 24A5DF81 */   addiu $a1, %lo(RO_1000DF81) # addiu $a1, $a1, -0x207f
/* 0047BA70 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0047BA74 100000B0 */  b     .L0047BD38
/* 0047BA78 8E040000 */   lw    $a0, ($s0)
.L0047BA7C:
/* 0047BA7C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0047BA80 8F858044 */  lw    $a1, %got(RO_1000DF76)($gp)
/* 0047BA84 8E040000 */  lw    $a0, ($s0)
/* 0047BA88 2406000B */  li    $a2, 11
/* 0047BA8C 2407000B */  li    $a3, 11
/* 0047BA90 0320F809 */  jalr  $t9
/* 0047BA94 24A5DF76 */   addiu $a1, %lo(RO_1000DF76) # addiu $a1, $a1, -0x208a
/* 0047BA98 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0047BA9C 100000A6 */  b     .L0047BD38
/* 0047BAA0 8E040000 */   lw    $a0, ($s0)
.L0047BAA4:
/* 0047BAA4 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0047BAA8 8F858044 */  lw    $a1, %got(RO_1000DF73)($gp)
/* 0047BAAC 8E040000 */  lw    $a0, ($s0)
/* 0047BAB0 24060003 */  li    $a2, 3
/* 0047BAB4 24070003 */  li    $a3, 3
/* 0047BAB8 0320F809 */  jalr  $t9
/* 0047BABC 24A5DF73 */   addiu $a1, %lo(RO_1000DF73) # addiu $a1, $a1, -0x208d
/* 0047BAC0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0047BAC4 1000009C */  b     .L0047BD38
/* 0047BAC8 8E040000 */   lw    $a0, ($s0)
.L0047BACC:
/* 0047BACC 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0047BAD0 8F858044 */  lw    $a1, %got(RO_1000DF5A)($gp)
/* 0047BAD4 8E040000 */  lw    $a0, ($s0)
/* 0047BAD8 24060019 */  li    $a2, 25
/* 0047BADC 24070019 */  li    $a3, 25
/* 0047BAE0 0320F809 */  jalr  $t9
/* 0047BAE4 24A5DF5A */   addiu $a1, %lo(RO_1000DF5A) # addiu $a1, $a1, -0x20a6
/* 0047BAE8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0047BAEC 10000092 */  b     .L0047BD38
/* 0047BAF0 8E040000 */   lw    $a0, ($s0)
.L0047BAF4:
/* 0047BAF4 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0047BAF8 8F858044 */  lw    $a1, %got(RO_1000DF41)($gp)
/* 0047BAFC 8E040000 */  lw    $a0, ($s0)
/* 0047BB00 24060019 */  li    $a2, 25
/* 0047BB04 24070019 */  li    $a3, 25
/* 0047BB08 0320F809 */  jalr  $t9
/* 0047BB0C 24A5DF41 */   addiu $a1, %lo(RO_1000DF41) # addiu $a1, $a1, -0x20bf
/* 0047BB10 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0047BB14 10000088 */  b     .L0047BD38
/* 0047BB18 8E040000 */   lw    $a0, ($s0)
.L0047BB1C:
/* 0047BB1C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0047BB20 8F858044 */  lw    $a1, %got(RO_1000DF31)($gp)
/* 0047BB24 8E040000 */  lw    $a0, ($s0)
/* 0047BB28 24060010 */  li    $a2, 16
/* 0047BB2C 24070010 */  li    $a3, 16
/* 0047BB30 0320F809 */  jalr  $t9
/* 0047BB34 24A5DF31 */   addiu $a1, %lo(RO_1000DF31) # addiu $a1, $a1, -0x20cf
/* 0047BB38 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0047BB3C 1000007E */  b     .L0047BD38
/* 0047BB40 8E040000 */   lw    $a0, ($s0)
.L0047BB44:
/* 0047BB44 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0047BB48 8F858044 */  lw    $a1, %got(RO_1000DF28)($gp)
/* 0047BB4C 8E040000 */  lw    $a0, ($s0)
/* 0047BB50 24060009 */  li    $a2, 9
/* 0047BB54 24070009 */  li    $a3, 9
/* 0047BB58 0320F809 */  jalr  $t9
/* 0047BB5C 24A5DF28 */   addiu $a1, %lo(RO_1000DF28) # addiu $a1, $a1, -0x20d8
/* 0047BB60 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0047BB64 8E040000 */  lw    $a0, ($s0)
/* 0047BB68 2418000A */  li    $t8, 10
/* 0047BB6C 8F998870 */  lw    $t9, %call16(write_enum)($gp)
/* 0047BB70 8F868044 */  lw    $a2, %got(D_10011330)($gp)
/* 0047BB74 AFB80010 */  sw    $t8, 0x10($sp)
/* 0047BB78 93A50033 */  lbu   $a1, 0x33($sp)
/* 0047BB7C 00003825 */  move  $a3, $zero
/* 0047BB80 AFA40028 */  sw    $a0, 0x28($sp)
/* 0047BB84 0320F809 */  jalr  $t9
/* 0047BB88 24C61330 */   addiu $a2, %lo(D_10011330) # addiu $a2, $a2, 0x1330
/* 0047BB8C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0047BB90 10000069 */  b     .L0047BD38
/* 0047BB94 8FA40028 */   lw    $a0, 0x28($sp)
.L0047BB98:
/* 0047BB98 2C410077 */  sltiu $at, $v0, 0x77
/* 0047BB9C 10200061 */  beqz  $at, .L0047BD24
/* 0047BBA0 2459FF8D */   addiu $t9, $v0, -0x73
/* 0047BBA4 2F210004 */  sltiu $at, $t9, 4
/* 0047BBA8 1020FFE6 */  beqz  $at, .L0047BB44
/* 0047BBAC 00000000 */   nop
/* 0047BBB0 8F818044 */  lw    $at, %got(jtbl_1000E180)($gp)
/* 0047BBB4 0019C880 */  sll   $t9, $t9, 2
/* 0047BBB8 00390821 */  addu  $at, $at, $t9
/* 0047BBBC 8C39E180 */  lw    $t9, %lo(jtbl_1000E180)($at)
/* 0047BBC0 033CC821 */  addu  $t9, $t9, $gp
/* 0047BBC4 03200008 */  jr    $t9
/* 0047BBC8 00000000 */   nop
.L0047BBCC:
/* 0047BBCC 24010041 */  li    $at, 65
/* 0047BBD0 1041FEF8 */  beq   $v0, $at, .L0047B7B4
/* 0047BBD4 2406000F */   li    $a2, 15
/* 0047BBD8 2C410063 */  sltiu $at, $v0, 0x63
/* 0047BBDC 1020004C */  beqz  $at, .L0047BD10
/* 0047BBE0 2448FFB3 */   addiu $t0, $v0, -0x4d
/* 0047BBE4 2D010016 */  sltiu $at, $t0, 0x16
/* 0047BBE8 1020FFD6 */  beqz  $at, .L0047BB44
/* 0047BBEC 00000000 */   nop
/* 0047BBF0 8F818044 */  lw    $at, %got(jtbl_1000E128)($gp)
/* 0047BBF4 00084080 */  sll   $t0, $t0, 2
/* 0047BBF8 00280821 */  addu  $at, $at, $t0
/* 0047BBFC 8C28E128 */  lw    $t0, %lo(jtbl_1000E128)($at)
/* 0047BC00 011C4021 */  addu  $t0, $t0, $gp
/* 0047BC04 01000008 */  jr    $t0
/* 0047BC08 00000000 */   nop
.L0047BC0C:
/* 0047BC0C 2C41001E */  sltiu $at, $v0, 0x1e
/* 0047BC10 14200011 */  bnez  $at, .L0047BC58
/* 0047BC14 24010023 */   li    $at, 35
/* 0047BC18 1041FF35 */  beq   $v0, $at, .L0047B8F0
/* 0047BC1C 24060013 */   li    $a2, 19
/* 0047BC20 2C41002A */  sltiu $at, $v0, 0x2a
/* 0047BC24 10200030 */  beqz  $at, .L0047BCE8
/* 0047BC28 244DFFC9 */   addiu $t5, $v0, -0x37
/* 0047BC2C 2449FFD8 */  addiu $t1, $v0, -0x28
/* 0047BC30 2D210002 */  sltiu $at, $t1, 2
/* 0047BC34 1020FFC3 */  beqz  $at, .L0047BB44
/* 0047BC38 00000000 */   nop
/* 0047BC3C 8F818044 */  lw    $at, %got(jtbl_1000E10C)($gp)
/* 0047BC40 00094880 */  sll   $t1, $t1, 2
/* 0047BC44 00290821 */  addu  $at, $at, $t1
/* 0047BC48 8C29E10C */  lw    $t1, %lo(jtbl_1000E10C)($at)
/* 0047BC4C 013C4821 */  addu  $t1, $t1, $gp
/* 0047BC50 01200008 */  jr    $t1
/* 0047BC54 00000000 */   nop
.L0047BC58:
/* 0047BC58 2C410002 */  sltiu $at, $v0, 2
/* 0047BC5C 1420000E */  bnez  $at, .L0047BC98
/* 0047BC60 2C41000E */   sltiu $at, $v0, 0xe
/* 0047BC64 10200016 */  beqz  $at, .L0047BCC0
/* 0047BC68 244CFFE7 */   addiu $t4, $v0, -0x19
/* 0047BC6C 244AFFF4 */  addiu $t2, $v0, -0xc
/* 0047BC70 2D410002 */  sltiu $at, $t2, 2
/* 0047BC74 1020FFB3 */  beqz  $at, .L0047BB44
/* 0047BC78 00000000 */   nop
/* 0047BC7C 8F818044 */  lw    $at, %got(jtbl_1000E0F0)($gp)
/* 0047BC80 000A5080 */  sll   $t2, $t2, 2
/* 0047BC84 002A0821 */  addu  $at, $at, $t2
/* 0047BC88 8C2AE0F0 */  lw    $t2, %lo(jtbl_1000E0F0)($at)
/* 0047BC8C 015C5021 */  addu  $t2, $t2, $gp
/* 0047BC90 01400008 */  jr    $t2
/* 0047BC94 00000000 */   nop
.L0047BC98:
/* 0047BC98 2C410002 */  sltiu $at, $v0, 2
/* 0047BC9C 1020FFA9 */  beqz  $at, .L0047BB44
/* 0047BCA0 00000000 */   nop
/* 0047BCA4 8F818044 */  lw    $at, %got(jtbl_1000E0E8)($gp)
/* 0047BCA8 00025880 */  sll   $t3, $v0, 2
/* 0047BCAC 002B0821 */  addu  $at, $at, $t3
/* 0047BCB0 8C2BE0E8 */  lw    $t3, %lo(jtbl_1000E0E8)($at)
/* 0047BCB4 017C5821 */  addu  $t3, $t3, $gp
/* 0047BCB8 01600008 */  jr    $t3
/* 0047BCBC 00000000 */   nop
.L0047BCC0:
/* 0047BCC0 2D810005 */  sltiu $at, $t4, 5
/* 0047BCC4 1020FF9F */  beqz  $at, .L0047BB44
/* 0047BCC8 00000000 */   nop
/* 0047BCCC 8F818044 */  lw    $at, %got(jtbl_1000E0F8)($gp)
/* 0047BCD0 000C6080 */  sll   $t4, $t4, 2
/* 0047BCD4 002C0821 */  addu  $at, $at, $t4
/* 0047BCD8 8C2CE0F8 */  lw    $t4, %lo(jtbl_1000E0F8)($at)
/* 0047BCDC 019C6021 */  addu  $t4, $t4, $gp
/* 0047BCE0 01800008 */  jr    $t4
/* 0047BCE4 00000000 */   nop
.L0047BCE8:
/* 0047BCE8 2DA10005 */  sltiu $at, $t5, 5
/* 0047BCEC 1020FF95 */  beqz  $at, .L0047BB44
/* 0047BCF0 00000000 */   nop
/* 0047BCF4 8F818044 */  lw    $at, %got(jtbl_1000E114)($gp)
/* 0047BCF8 000D6880 */  sll   $t5, $t5, 2
/* 0047BCFC 002D0821 */  addu  $at, $at, $t5
/* 0047BD00 8C2DE114 */  lw    $t5, %lo(jtbl_1000E114)($at)
/* 0047BD04 01BC6821 */  addu  $t5, $t5, $gp
/* 0047BD08 01A00008 */  jr    $t5
/* 0047BD0C 00000000 */   nop
.L0047BD10:
/* 0047BD10 24010069 */  li    $at, 105
/* 0047BD14 1041FE6B */  beq   $v0, $at, .L0047B6C4
/* 0047BD18 00000000 */   nop
/* 0047BD1C 1000FF89 */  b     .L0047BB44
/* 0047BD20 00000000 */   nop
.L0047BD24:
/* 0047BD24 2401007D */  li    $at, 125
/* 0047BD28 1041FE53 */  beq   $v0, $at, .L0047B678
/* 0047BD2C 2406000B */   li    $a2, 11
/* 0047BD30 1000FF84 */  b     .L0047BB44
/* 0047BD34 00000000 */   nop
.L0047BD38:
/* 0047BD38 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0047BD3C 8F858044 */  lw    $a1, %got(RO_1000DF0E)($gp)
/* 0047BD40 2406001A */  li    $a2, 26
/* 0047BD44 2407001A */  li    $a3, 26
/* 0047BD48 0320F809 */  jalr  $t9
/* 0047BD4C 24A5DF0E */   addiu $a1, %lo(RO_1000DF0E) # addiu $a1, $a1, -0x20f2
/* 0047BD50 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0047BD54 8E040000 */  lw    $a0, ($s0)
/* 0047BD58 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0047BD5C 0320F809 */  jalr  $t9
/* 0047BD60 00000000 */   nop
/* 0047BD64 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0047BD68 8E040000 */  lw    $a0, ($s0)
/* 0047BD6C 2406004B */  li    $a2, 75
/* 0047BD70 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0047BD74 8F858044 */  lw    $a1, %got(RO_1000DEC3)($gp)
/* 0047BD78 2407004B */  li    $a3, 75
/* 0047BD7C 0320F809 */  jalr  $t9
/* 0047BD80 24A5DEC3 */   addiu $a1, %lo(RO_1000DEC3) # addiu $a1, $a1, -0x213d
/* 0047BD84 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0047BD88 8E040000 */  lw    $a0, ($s0)
/* 0047BD8C 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0047BD90 0320F809 */  jalr  $t9
/* 0047BD94 00000000 */   nop
/* 0047BD98 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0047BD9C 8E040000 */  lw    $a0, ($s0)
/* 0047BDA0 24060033 */  li    $a2, 51
/* 0047BDA4 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0047BDA8 8F858044 */  lw    $a1, %got(RO_1000DE90)($gp)
/* 0047BDAC 24070033 */  li    $a3, 51
/* 0047BDB0 0320F809 */  jalr  $t9
/* 0047BDB4 24A5DE90 */   addiu $a1, %lo(RO_1000DE90) # addiu $a1, $a1, -0x2170
/* 0047BDB8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0047BDBC 8E040000 */  lw    $a0, ($s0)
/* 0047BDC0 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0047BDC4 0320F809 */  jalr  $t9
/* 0047BDC8 00000000 */   nop
/* 0047BDCC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0047BDD0 8E040000 */  lw    $a0, ($s0)
/* 0047BDD4 8F9980A0 */  lw    $t9, %call16(fflush)($gp)
/* 0047BDD8 0320F809 */  jalr  $t9
/* 0047BDDC 00000000 */   nop
/* 0047BDE0 8FBC0020 */  lw    $gp, 0x20($sp)
.L0047BDE4:
/* 0047BDE4 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0047BDE8 8FB0001C */  lw    $s0, 0x1c($sp)
/* 0047BDEC 27BD0030 */  addiu $sp, $sp, 0x30
/* 0047BDF0 03E00008 */  jr    $ra
/* 0047BDF4 00000000 */   nop
    .type ovfwwarning, @function
    .size ovfwwarning, .-ovfwwarning
    .end ovfwwarning
)"");

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
struct TableEntry *appendchain(unsigned short table_index) {
    struct TableEntry *pos;
    struct TableEntry *new_entry;
    int chain_index;

    pos = table[table_index];
    if (pos == NULL) {
        new_entry = (struct TableEntry *)alloc_new(sizeof(struct TableEntry), &perm_heap);
        pos = new_entry;
        table[table_index] = new_entry;
        chain_index = 0;
    } else {
        while (pos->next != NULL) {
            pos = pos->next;
        }
        new_entry = (struct TableEntry *)alloc_new(sizeof(struct TableEntry), &perm_heap);
        pos->next = new_entry;
        chain_index = pos->chain_index + 1;
    }
    if (new_entry == NULL) {
        outofmem = true;
        return NULL; // originally some unused stack slot value was returned
    }
    new_entry->type = empty;
    new_entry->unk14 = 0;
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

glabel copycoderep
    .ent copycoderep
    # 00414108 func_00414108
    # 0041550C func_0041550C
    # 0044E604 binaryfold
    # 0044ED5C ixafold
    # 0044EDF8 ilodfold
    # 0044F3C0 unaryfold
    # 0044FF6C mergeconst
    # 00451764 func_00451764
    # 0047C53C fixcorr
/* 0047C284 3C1C0FBA */  .cpload $t9
/* 0047C288 279CE00C */
/* 0047C28C 0399E021 */
/* 0047C290 90A30000 */  lbu   $v1, ($a1)
/* 0047C294 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 0047C298 24010004 */  li    $at, 4
/* 0047C29C AFBF001C */  sw    $ra, 0x1c($sp)
/* 0047C2A0 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0047C2A4 AFA00030 */  sw    $zero, 0x30($sp)
/* 0047C2A8 1461001C */  bne   $v1, $at, .L0047C31C
/* 0047C2AC AFA00034 */   sw    $zero, 0x34($sp)
/* 0047C2B0 24820008 */  addiu $v0, $a0, 8
/* 0047C2B4 8C4F0000 */  lw    $t7, ($v0)
/* 0047C2B8 8C4E0004 */  lw    $t6, 4($v0)
/* 0047C2BC 27A60030 */  addiu $a2, $sp, 0x30
/* 0047C2C0 8C83001C */  lw    $v1, 0x1c($a0)
/* 0047C2C4 00A04025 */  move  $t0, $a1
/* 0047C2C8 00804825 */  move  $t1, $a0
/* 0047C2CC 24AA003C */  addiu $t2, $a1, 0x3c
/* 0047C2D0 ACCF0000 */  sw    $t7, ($a2)
/* 0047C2D4 ACCE0004 */  sw    $t6, 4($a2)
.L0047C2D8:
/* 0047C2D8 8D190000 */  lw    $t9, ($t0)
/* 0047C2DC 2508000C */  addiu $t0, $t0, 0xc
/* 0047C2E0 2529000C */  addiu $t1, $t1, 0xc
/* 0047C2E4 AD39FFF4 */  sw    $t9, -0xc($t1)
/* 0047C2E8 8D18FFF8 */  lw    $t8, -8($t0)
/* 0047C2EC AD38FFF8 */  sw    $t8, -8($t1)
/* 0047C2F0 8D19FFFC */  lw    $t9, -4($t0)
/* 0047C2F4 150AFFF8 */  bne   $t0, $t2, .L0047C2D8
/* 0047C2F8 AD39FFFC */   sw    $t9, -4($t1)
/* 0047C2FC 8D190000 */  lw    $t9, ($t0)
/* 0047C300 AD390000 */  sw    $t9, ($t1)
/* 0047C304 8CCB0004 */  lw    $t3, 4($a2)
/* 0047C308 8CCC0000 */  lw    $t4, ($a2)
/* 0047C30C AC4B0004 */  sw    $t3, 4($v0)
/* 0047C310 AC4C0000 */  sw    $t4, ($v0)
/* 0047C314 10000071 */  b     .L0047C4DC
/* 0047C318 AC83001C */   sw    $v1, 0x1c($a0)
.L0047C31C:
/* 0047C31C A0830000 */  sb    $v1, ($a0)
/* 0047C320 90AD0001 */  lbu   $t5, 1($a1)
/* 0047C324 A08D0001 */  sb    $t5, 1($a0)
/* 0047C328 8CAE0010 */  lw    $t6, 0x10($a1)
/* 0047C32C AC8E0010 */  sw    $t6, 0x10($a0)
/* 0047C330 8CAF0014 */  lw    $t7, 0x14($a1)
/* 0047C334 AC8F0014 */  sw    $t7, 0x14($a0)
/* 0047C338 8CAA0018 */  lw    $t2, 0x18($a1)
/* 0047C33C AC8A0018 */  sw    $t2, 0x18($a0)
/* 0047C340 90A20000 */  lbu   $v0, ($a1)
/* 0047C344 2448FFFF */  addiu $t0, $v0, -1
/* 0047C348 2D010008 */  sltiu $at, $t0, 8
/* 0047C34C 1020005B */  beqz  $at, .L0047C4BC
/* 0047C350 00000000 */   nop
/* 0047C354 8F818044 */  lw    $at, %got(jtbl_1000E20C)($gp)
/* 0047C358 00084080 */  sll   $t0, $t0, 2
/* 0047C35C 00280821 */  addu  $at, $at, $t0
/* 0047C360 8C28E20C */  lw    $t0, %lo(jtbl_1000E20C)($at)
/* 0047C364 011C4021 */  addu  $t0, $t0, $gp
/* 0047C368 01000008 */  jr    $t0
/* 0047C36C 00000000 */   nop
.L0047C370:
/* 0047C370 8CA90020 */  lw    $t1, 0x20($a1)
/* 0047C374 AC890020 */  sw    $t1, 0x20($a0)
/* 0047C378 8CB80024 */  lw    $t8, 0x24($a1)
/* 0047C37C AC980024 */  sw    $t8, 0x24($a0)
/* 0047C380 8CB90028 */  lw    $t9, 0x28($a1)
/* 0047C384 AC990028 */  sw    $t9, 0x28($a0)
/* 0047C388 8CAC002C */  lw    $t4, 0x2c($a1)
/* 0047C38C AC8C002C */  sw    $t4, 0x2c($a0)
/* 0047C390 8CAB0030 */  lw    $t3, 0x30($a1)
/* 0047C394 10000051 */  b     .L0047C4DC
/* 0047C398 AC8B0030 */   sw    $t3, 0x30($a0)
.L0047C39C:
/* 0047C39C 8CAD0020 */  lw    $t5, 0x20($a1)
/* 0047C3A0 AC8D0020 */  sw    $t5, 0x20($a0)
/* 0047C3A4 8CAE0024 */  lw    $t6, 0x24($a1)
/* 0047C3A8 AC8E0024 */  sw    $t6, 0x24($a0)
/* 0047C3AC 8CAF0028 */  lw    $t7, 0x28($a1)
/* 0047C3B0 AC8F0028 */  sw    $t7, 0x28($a0)
/* 0047C3B4 8CA8002C */  lw    $t0, 0x2c($a1)
/* 0047C3B8 AC88002C */  sw    $t0, 0x2c($a0)
/* 0047C3BC 8CAA0030 */  lw    $t2, 0x30($a1)
/* 0047C3C0 AC8A0030 */  sw    $t2, 0x30($a0)
/* 0047C3C4 94A90006 */  lhu   $t1, 6($a1)
/* 0047C3C8 A4890006 */  sh    $t1, 6($a0)
/* 0047C3CC 8CB80034 */  lw    $t8, 0x34($a1)
/* 0047C3D0 AC980034 */  sw    $t8, 0x34($a0)
/* 0047C3D4 90B90004 */  lbu   $t9, 4($a1)
/* 0047C3D8 A0990004 */  sb    $t9, 4($a0)
/* 0047C3DC 8CAB0038 */  lw    $t3, 0x38($a1)
/* 0047C3E0 AC8B0038 */  sw    $t3, 0x38($a0)
/* 0047C3E4 90AC0005 */  lbu   $t4, 5($a1)
/* 0047C3E8 1000003C */  b     .L0047C4DC
/* 0047C3EC A08C0005 */   sb    $t4, 5($a0)
.L0047C3F0:
/* 0047C3F0 8CAE0020 */  lw    $t6, 0x20($a1)
/* 0047C3F4 AC8E0020 */  sw    $t6, 0x20($a0)
/* 0047C3F8 8CAD0024 */  lw    $t5, 0x24($a1)
/* 0047C3FC AC8D0024 */  sw    $t5, 0x24($a0)
/* 0047C400 8CAF0028 */  lw    $t7, 0x28($a1)
/* 0047C404 AC8F0028 */  sw    $t7, 0x28($a0)
/* 0047C408 8CAA002C */  lw    $t2, 0x2c($a1)
/* 0047C40C AC8A002C */  sw    $t2, 0x2c($a0)
/* 0047C410 8CA80030 */  lw    $t0, 0x30($a1)
/* 0047C414 10000031 */  b     .L0047C4DC
/* 0047C418 AC880030 */   sw    $t0, 0x30($a0)
.L0047C41C:
/* 0047C41C 94A90020 */  lhu   $t1, 0x20($a1)
/* 0047C420 A4890020 */  sh    $t1, 0x20($a0)
/* 0047C424 8CB80024 */  lw    $t8, 0x24($a1)
/* 0047C428 1000002C */  b     .L0047C4DC
/* 0047C42C AC980024 */   sw    $t8, 0x24($a0)
.L0047C430:
/* 0047C430 94B90006 */  lhu   $t9, 6($a1)
/* 0047C434 A4990006 */  sh    $t9, 6($a0)
/* 0047C438 90AB0002 */  lbu   $t3, 2($a1)
/* 0047C43C A08B0002 */  sb    $t3, 2($a0)
/* 0047C440 90AC0003 */  lbu   $t4, 3($a1)
/* 0047C444 A08C0003 */  sb    $t4, 3($a0)
/* 0047C448 90AD0021 */  lbu   $t5, 0x21($a1)
/* 0047C44C A08D0021 */  sb    $t5, 0x21($a0)
/* 0047C450 90AE0022 */  lbu   $t6, 0x22($a1)
/* 0047C454 A08E0022 */  sb    $t6, 0x22($a0)
/* 0047C458 8CAA0028 */  lw    $t2, 0x28($a1)
/* 0047C45C AC8A0028 */  sw    $t2, 0x28($a0)
/* 0047C460 8CAF002C */  lw    $t7, 0x2c($a1)
/* 0047C464 AC8F002C */  sw    $t7, 0x2c($a0)
/* 0047C468 90A8002F */  lbu   $t0, 0x2f($a1)
/* 0047C46C A088002F */  sb    $t0, 0x2f($a0)
/* 0047C470 90A90020 */  lbu   $t1, 0x20($a1)
/* 0047C474 A0890020 */  sb    $t1, 0x20($a0)
/* 0047C478 8CB80030 */  lw    $t8, 0x30($a1)
/* 0047C47C AC980030 */  sw    $t8, 0x30($a0)
/* 0047C480 8CB90034 */  lw    $t9, 0x34($a1)
/* 0047C484 AC990034 */  sw    $t9, 0x34($a0)
/* 0047C488 8CAB0038 */  lw    $t3, 0x38($a1)
/* 0047C48C AC8B0038 */  sw    $t3, 0x38($a0)
/* 0047C490 8CAC0024 */  lw    $t4, 0x24($a1)
/* 0047C494 AC8C0024 */  sw    $t4, 0x24($a0)
/* 0047C498 90AD0004 */  lbu   $t5, 4($a1)
/* 0047C49C A08D0004 */  sb    $t5, 4($a0)
/* 0047C4A0 8CAE003C */  lw    $t6, 0x3c($a1)
/* 0047C4A4 AC8E003C */  sw    $t6, 0x3c($a0)
/* 0047C4A8 90AF0005 */  lbu   $t7, 5($a1)
/* 0047C4AC A08F0005 */  sb    $t7, 5($a0)
/* 0047C4B0 90AA0023 */  lbu   $t2, 0x23($a1)
/* 0047C4B4 10000009 */  b     .L0047C4DC
/* 0047C4B8 A08A0023 */   sb    $t2, 0x23($a0)
.L0047C4BC:
/* 0047C4BC 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 0047C4C0 8F868044 */  lw    $a2, %got(RO_1000E200)($gp)
/* 0047C4C4 24040001 */  li    $a0, 1
/* 0047C4C8 240500FF */  li    $a1, 255
/* 0047C4CC 2407000A */  li    $a3, 10
/* 0047C4D0 0320F809 */  jalr  $t9
/* 0047C4D4 24C6E200 */   addiu $a2, %lo(RO_1000E200) # addiu $a2, $a2, -0x1e00
/* 0047C4D8 8FBC0018 */  lw    $gp, 0x18($sp)
.L0047C4DC:
/* 0047C4DC 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0047C4E0 27BD0038 */  addiu $sp, $sp, 0x38
/* 0047C4E4 03E00008 */  jr    $ra
/* 0047C4E8 00000000 */   nop
    .type copycoderep, @function
    .size copycoderep, .-copycoderep
    .end copycoderep

glabel fix_sbase
    .ent fix_sbase
    # 004496F0 slkilled
    # 0044A5C8 smkilled
    # 0044AAD0 sskilled
    # 0044BDFC cskilled
    # 0044D0C4 func_0044D0C4
    # 0044DBC4 indirectaccessed
    # 00478FA0 func_00478FA0
/* 0047C4EC 8C8E0024 */  lw    $t6, 0x24($a0)
/* 0047C4F0 8DC20014 */  lw    $v0, 0x14($t6)
/* 0047C4F4 10400005 */  beqz  $v0, .L0047C50C
/* 0047C4F8 00000000 */   nop
/* 0047C4FC 8C430008 */  lw    $v1, 8($v0)
/* 0047C500 10600002 */  beqz  $v1, .L0047C50C
/* 0047C504 00000000 */   nop
/* 0047C508 AC830024 */  sw    $v1, 0x24($a0)
.L0047C50C:
/* 0047C50C 03E00008 */  jr    $ra
/* 0047C510 00000000 */   nop
    .type fix_sbase, @function
    .size fix_sbase, .-fix_sbase
    .end fix_sbase

glabel fix_base
    .ent fix_base
    # 004496F0 slkilled
    # 0044B4F4 clkilled
    # 0044C6D4 func_0044C6D4
    # 0044DBC4 indirectaccessed
    # 00478FA0 func_00478FA0
/* 0047C514 8C8E0034 */  lw    $t6, 0x34($a0)
/* 0047C518 8DC20014 */  lw    $v0, 0x14($t6)
/* 0047C51C 10400005 */  beqz  $v0, .L0047C534
/* 0047C520 00000000 */   nop
/* 0047C524 8C430008 */  lw    $v1, 8($v0)
/* 0047C528 10600002 */  beqz  $v1, .L0047C534
/* 0047C52C 00000000 */   nop
/* 0047C530 AC830034 */  sw    $v1, 0x34($a0)
.L0047C534:
/* 0047C534 03E00008 */  jr    $ra
/* 0047C538 00000000 */   nop
    .type fix_base, @function
    .size fix_base, .-fix_base
    .end fix_base

glabel fixcorr
    .ent fixcorr
    # 0041550C func_0041550C
    # 004712A4 reset_images
    # 004713E8 loopunroll
    # 0047C650 delentry
/* 0047C53C 3C1C0FBA */  .cpload $t9
/* 0047C540 279CDD54 */
/* 0047C544 0399E021 */
/* 0047C548 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0047C54C AFBF001C */  sw    $ra, 0x1c($sp)
/* 0047C550 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0047C554 AFB00014 */  sw    $s0, 0x14($sp)
/* 0047C558 8C8E0014 */  lw    $t6, 0x14($a0)
/* 0047C55C 00808025 */  move  $s0, $a0
/* 0047C560 8DCF0008 */  lw    $t7, 8($t6)
/* 0047C564 548F0036 */  bnel  $a0, $t7, .L0047C640
/* 0047C568 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0047C56C 90820000 */  lbu   $v0, ($a0)
/* 0047C570 3C011A00 */  lui   $at, 0x1a00
/* 0047C574 2C580020 */  sltiu $t8, $v0, 0x20
/* 0047C578 0018C823 */  negu  $t9, $t8
/* 0047C57C 03214024 */  and   $t0, $t9, $at
/* 0047C580 00484804 */  sllv  $t1, $t0, $v0
/* 0047C584 0521002D */  bgez  $t1, .L0047C63C
/* 0047C588 24010004 */   li    $at, 4
/* 0047C58C 14410010 */  bne   $v0, $at, .L0047C5D0
/* 0047C590 00000000 */   nop
/* 0047C594 908A0020 */  lbu   $t2, 0x20($a0)
/* 0047C598 254BFFE0 */  addiu $t3, $t2, -0x20
/* 0047C59C 2D6C0080 */  sltiu $t4, $t3, 0x80
/* 0047C5A0 11800009 */  beqz  $t4, .L0047C5C8
/* 0047C5A4 00000000 */   nop
/* 0047C5A8 8F8F8044 */  lw    $t7, %got(D_10011834)($gp)
/* 0047C5AC 000B6943 */  sra   $t5, $t3, 5
/* 0047C5B0 000D7080 */  sll   $t6, $t5, 2
/* 0047C5B4 25EF1834 */  addiu $t7, %lo(D_10011834) # addiu $t7, $t7, 0x1834
/* 0047C5B8 01EEC021 */  addu  $t8, $t7, $t6
/* 0047C5BC 8F190000 */  lw    $t9, ($t8)
/* 0047C5C0 01794004 */  sllv  $t0, $t9, $t3
/* 0047C5C4 290C0000 */  slti  $t4, $t0, 0
.L0047C5C8:
/* 0047C5C8 5180001D */  beql  $t4, $zero, .L0047C640
/* 0047C5CC 8FBF001C */   lw    $ra, 0x1c($sp)
.L0047C5D0:
/* 0047C5D0 8F998624 */  lw    $t9, %call16(findsimilar)($gp)
/* 0047C5D4 02002025 */  move  $a0, $s0
/* 0047C5D8 0320F809 */  jalr  $t9
/* 0047C5DC 00000000 */   nop
/* 0047C5E0 8E0A0014 */  lw    $t2, 0x14($s0)
/* 0047C5E4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0047C5E8 AD420008 */  sw    $v0, 8($t2)
/* 0047C5EC 8E0D0014 */  lw    $t5, 0x14($s0)
/* 0047C5F0 8DAF0008 */  lw    $t7, 8($t5)
/* 0047C5F4 55E00012 */  bnezl $t7, .L0047C640
/* 0047C5F8 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0047C5FC 8F998620 */  lw    $t9, %call16(appendchain)($gp)
/* 0047C600 96040008 */  lhu   $a0, 8($s0)
/* 0047C604 0320F809 */  jalr  $t9
/* 0047C608 00000000 */   nop
/* 0047C60C 8E0E0014 */  lw    $t6, 0x14($s0)
/* 0047C610 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0047C614 02002825 */  move  $a1, $s0
/* 0047C618 ADC20008 */  sw    $v0, 8($t6)
/* 0047C61C 8F998628 */  lw    $t9, %call16(copycoderep)($gp)
/* 0047C620 8E180014 */  lw    $t8, 0x14($s0)
/* 0047C624 0320F809 */  jalr  $t9
/* 0047C628 8F040008 */   lw    $a0, 8($t8)
/* 0047C62C 8E190014 */  lw    $t9, 0x14($s0)
/* 0047C630 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0047C634 8F2B0008 */  lw    $t3, 8($t9)
/* 0047C638 AD600010 */  sw    $zero, 0x10($t3)
.L0047C63C:
/* 0047C63C 8FBF001C */  lw    $ra, 0x1c($sp)
.L0047C640:
/* 0047C640 8FB00014 */  lw    $s0, 0x14($sp)
/* 0047C644 27BD0020 */  addiu $sp, $sp, 0x20
/* 0047C648 03E00008 */  jr    $ra
/* 0047C64C 00000000 */   nop
    .type fixcorr, @function
    .size fixcorr, .-fixcorr
    .end fixcorr

glabel delentry
    .ent delentry
    # 00413000 exprdelete
    # 0041550C func_0041550C
    # 0043CFCC readnxtinst
    # 0044FF6C mergeconst
    # 00451764 func_00451764
    # 0047C6E8 decreasecount
    # 0047D878 deccount
/* 0047C650 3C1C0FBA */  .cpload $t9
/* 0047C654 279CDC40 */
/* 0047C658 0399E021 */
/* 0047C65C 90820000 */  lbu   $v0, ($a0)
/* 0047C660 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0047C664 24010003 */  li    $at, 3
/* 0047C668 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0047C66C AFBC0018 */  sw    $gp, 0x18($sp)
/* 0047C670 10410004 */  beq   $v0, $at, .L0047C684
/* 0047C674 00001825 */   move  $v1, $zero
/* 0047C678 24010006 */  li    $at, 6
/* 0047C67C 14410009 */  bne   $v0, $at, .L0047C6A4
/* 0047C680 00000000 */   nop
.L0047C684:
/* 0047C684 8C820038 */  lw    $v0, 0x38($a0)
/* 0047C688 10400006 */  beqz  $v0, .L0047C6A4
/* 0047C68C 00000000 */   nop
/* 0047C690 904E0000 */  lbu   $t6, ($v0)
/* 0047C694 24010060 */  li    $at, 96
/* 0047C698 11C10002 */  beq   $t6, $at, .L0047C6A4
/* 0047C69C 00000000 */   nop
/* 0047C6A0 24030001 */  li    $v1, 1
.L0047C6A4:
/* 0047C6A4 5460000D */  bnezl $v1, .L0047C6DC
/* 0047C6A8 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0047C6AC 8C8F0014 */  lw    $t7, 0x14($a0)
/* 0047C6B0 51E00008 */  beql  $t7, $zero, .L0047C6D4
/* 0047C6B4 24180007 */   li    $t8, 7
/* 0047C6B8 8F998634 */  lw    $t9, %call16(fixcorr)($gp)
/* 0047C6BC AFA40020 */  sw    $a0, 0x20($sp)
/* 0047C6C0 0320F809 */  jalr  $t9
/* 0047C6C4 00000000 */   nop
/* 0047C6C8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0047C6CC 8FA40020 */  lw    $a0, 0x20($sp)
/* 0047C6D0 24180007 */  li    $t8, 7
.L0047C6D4:
/* 0047C6D4 A0980000 */  sb    $t8, ($a0)
/* 0047C6D8 8FBF001C */  lw    $ra, 0x1c($sp)
.L0047C6DC:
/* 0047C6DC 27BD0020 */  addiu $sp, $sp, 0x20
/* 0047C6E0 03E00008 */  jr    $ra
/* 0047C6E4 00000000 */   nop
    .type delentry, @function
    .size delentry, .-delentry
    .end delentry

glabel decreasecount
    .ent decreasecount
    # 0042F6CC controlflow
    # 0043ABD0 incroccurrence
    # 0043CBFC func_0043CBFC
    # 0043CE64 func_0043CE64
    # 0043CFCC readnxtinst
    # 0044EDF8 ilodfold
    # 00451764 func_00451764
    # 0046C654 del_orig_cond
    # 0046D158 unroll_check_istr_propcopy
    # 0046D2C0 unroll_check_irst_propcopy
    # 0046E77C oneloopblockstmt
    # 004713E8 loopunroll
    # 004737E0 par_to_str
    # 004787B0 func_004787B0
    # 0047C6E8 decreasecount
    # 0047C960 increasecount
    # 0047E3BC binopwithconst
/* 0047C6E8 3C1C0FBA */  .cpload $t9
/* 0047C6EC 279CDBA8 */
/* 0047C6F0 0399E021 */
/* 0047C6F4 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0047C6F8 00802825 */  move  $a1, $a0
/* 0047C6FC 8F8489CC */  lw     $a0, %got(nocopy)($gp)
/* 0047C700 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0047C704 AFBC0018 */  sw    $gp, 0x18($sp)
.L0047C708:
/* 0047C708 50A00092 */  beql  $a1, $zero, .L0047C954
/* 0047C70C 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0047C710 90A20000 */  lbu   $v0, ($a1)
/* 0047C714 00A01825 */  move  $v1, $a1
/* 0047C718 244EFFFF */  addiu $t6, $v0, -1
/* 0047C71C 2DC10008 */  sltiu $at, $t6, 8
/* 0047C720 10200083 */  beqz  $at, .L0047C930
/* 0047C724 00000000 */   nop
/* 0047C728 8F818044 */  lw    $at, %got(jtbl_1000E238)($gp)
/* 0047C72C 000E7080 */  sll   $t6, $t6, 2
/* 0047C730 002E0821 */  addu  $at, $at, $t6
/* 0047C734 8C2EE238 */  lw    $t6, %lo(jtbl_1000E238)($at)
/* 0047C738 01DC7021 */  addu  $t6, $t6, $gp
/* 0047C73C 01C00008 */  jr    $t6
/* 0047C740 00000000 */   nop
.L0047C744:
/* 0047C744 94AF0006 */  lhu   $t7, 6($a1)
/* 0047C748 25F8FFFF */  addiu $t8, $t7, -1
/* 0047C74C 3319FFFF */  andi  $t9, $t8, 0xffff
/* 0047C750 1720007F */  bnez  $t9, .L0047C950
/* 0047C754 A4B80006 */   sh    $t8, 6($a1)
/* 0047C758 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 0047C75C 8CA40034 */  lw    $a0, 0x34($a1)
/* 0047C760 AFA50020 */  sw    $a1, 0x20($sp)
/* 0047C764 0320F809 */  jalr  $t9
/* 0047C768 00000000 */   nop
/* 0047C76C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0047C770 8FA40020 */  lw    $a0, 0x20($sp)
/* 0047C774 8F998638 */  lw    $t9, %call16(delentry)($gp)
/* 0047C778 0320F809 */  jalr  $t9
/* 0047C77C 00000000 */   nop
/* 0047C780 10000073 */  b     .L0047C950
/* 0047C784 8FBC0018 */   lw    $gp, 0x18($sp)
.L0047C788:
/* 0047C788 8CA20030 */  lw    $v0, 0x30($a1)
/* 0047C78C 50400007 */  beql  $v0, $zero, .L0047C7AC
/* 0047C790 94A90006 */   lhu   $t1, 6($a1)
/* 0047C794 8C880000 */  lw    $t0, ($a0)
/* 0047C798 51020004 */  beql  $t0, $v0, .L0047C7AC
/* 0047C79C 94A90006 */   lhu   $t1, 6($a1)
/* 0047C7A0 1000FFD9 */  b     .L0047C708
/* 0047C7A4 8C650030 */   lw    $a1, 0x30($v1)
/* 0047C7A8 94A90006 */  lhu   $t1, 6($a1)
.L0047C7AC:
/* 0047C7AC 252AFFFF */  addiu $t2, $t1, -1
/* 0047C7B0 314BFFFF */  andi  $t3, $t2, 0xffff
/* 0047C7B4 15600066 */  bnez  $t3, .L0047C950
/* 0047C7B8 A4AA0006 */   sh    $t2, 6($a1)
/* 0047C7BC 8CAC0018 */  lw    $t4, 0x18($a1)
/* 0047C7C0 00A02025 */  move  $a0, $a1
/* 0047C7C4 A1800009 */  sb    $zero, 9($t4)
/* 0047C7C8 8F998638 */  lw    $t9, %call16(delentry)($gp)
/* 0047C7CC 0320F809 */  jalr  $t9
/* 0047C7D0 00000000 */   nop
/* 0047C7D4 1000005E */  b     .L0047C950
/* 0047C7D8 8FBC0018 */   lw    $gp, 0x18($sp)
.L0047C7DC:
/* 0047C7DC 8CA20030 */  lw    $v0, 0x30($a1)
/* 0047C7E0 50400007 */  beql  $v0, $zero, .L0047C800
/* 0047C7E4 94AE0006 */   lhu   $t6, 6($a1)
/* 0047C7E8 8C8D0000 */  lw    $t5, ($a0)
/* 0047C7EC 51A20004 */  beql  $t5, $v0, .L0047C800
/* 0047C7F0 94AE0006 */   lhu   $t6, 6($a1)
/* 0047C7F4 1000FFC4 */  b     .L0047C708
/* 0047C7F8 8C650030 */   lw    $a1, 0x30($v1)
/* 0047C7FC 94AE0006 */  lhu   $t6, 6($a1)
.L0047C800:
/* 0047C800 25CFFFFF */  addiu $t7, $t6, -1
/* 0047C804 31F8FFFF */  andi  $t8, $t7, 0xffff
/* 0047C808 17000051 */  bnez  $t8, .L0047C950
/* 0047C80C A4AF0006 */   sh    $t7, 6($a1)
/* 0047C810 8CB90018 */  lw    $t9, 0x18($a1)
/* 0047C814 A3200009 */  sb    $zero, 9($t9)
/* 0047C818 8CA20038 */  lw    $v0, 0x38($a1)
/* 0047C81C 10400005 */  beqz  $v0, .L0047C834
/* 0047C820 00000000 */   nop
/* 0047C824 90480000 */  lbu   $t0, ($v0)
/* 0047C828 24010060 */  li    $at, 96
/* 0047C82C 15010008 */  bne   $t0, $at, .L0047C850
/* 0047C830 00000000 */   nop
.L0047C834:
/* 0047C834 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 0047C838 8CA40024 */  lw    $a0, 0x24($a1)
/* 0047C83C AFA50020 */  sw    $a1, 0x20($sp)
/* 0047C840 0320F809 */  jalr  $t9
/* 0047C844 00000000 */   nop
/* 0047C848 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0047C84C 8FA50020 */  lw    $a1, 0x20($sp)
.L0047C850:
/* 0047C850 8F998638 */  lw    $t9, %call16(delentry)($gp)
/* 0047C854 00A02025 */  move  $a0, $a1
/* 0047C858 0320F809 */  jalr  $t9
/* 0047C85C 00000000 */   nop
/* 0047C860 1000003B */  b     .L0047C950
/* 0047C864 8FBC0018 */   lw    $gp, 0x18($sp)
.L0047C868:
/* 0047C868 94A90006 */  lhu   $t1, 6($a1)
/* 0047C86C 252AFFFF */  addiu $t2, $t1, -1
/* 0047C870 314BFFFF */  andi  $t3, $t2, 0xffff
/* 0047C874 15600036 */  bnez  $t3, .L0047C950
/* 0047C878 A4AA0006 */   sh    $t2, 6($a1)
/* 0047C87C 90AC0020 */  lbu   $t4, 0x20($a1)
/* 0047C880 258DFFE0 */  addiu $t5, $t4, -0x20
/* 0047C884 2DAE0080 */  sltiu $t6, $t5, 0x80
/* 0047C888 11C00009 */  beqz  $t6, .L0047C8B0
/* 0047C88C 00000000 */   nop
/* 0047C890 8F998044 */  lw    $t9, %got(D_10011844)($gp)
/* 0047C894 000D7943 */  sra   $t7, $t5, 5
/* 0047C898 000FC080 */  sll   $t8, $t7, 2
/* 0047C89C 27391844 */  addiu $t9, %lo(D_10011844) # addiu $t9, $t9, 0x1844
/* 0047C8A0 03384021 */  addu  $t0, $t9, $t8
/* 0047C8A4 8D090000 */  lw    $t1, ($t0)
/* 0047C8A8 01A95004 */  sllv  $t2, $t1, $t5
/* 0047C8AC 294E0000 */  slti  $t6, $t2, 0
.L0047C8B0:
/* 0047C8B0 11C00003 */  beqz  $t6, .L0047C8C0
/* 0047C8B4 00000000 */   nop
/* 0047C8B8 8CAC0018 */  lw    $t4, 0x18($a1)
/* 0047C8BC A1800009 */  sb    $zero, 9($t4)
.L0047C8C0:
/* 0047C8C0 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 0047C8C4 8CA40024 */  lw    $a0, 0x24($a1)
/* 0047C8C8 AFA50020 */  sw    $a1, 0x20($sp)
/* 0047C8CC 0320F809 */  jalr  $t9
/* 0047C8D0 00000000 */   nop
/* 0047C8D4 8FA50020 */  lw    $a1, 0x20($sp)
/* 0047C8D8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0047C8DC 90AF0020 */  lbu   $t7, 0x20($a1)
/* 0047C8E0 8F988DBC */  lw     $t8, %got(optab)($gp)
/* 0047C8E4 000FC880 */  sll   $t9, $t7, 2
/* 0047C8E8 032FC823 */  subu  $t9, $t9, $t7
/* 0047C8EC 03384021 */  addu  $t0, $t9, $t8
/* 0047C8F0 91090002 */  lbu   $t1, 2($t0)
/* 0047C8F4 11200008 */  beqz  $t1, .L0047C918
/* 0047C8F8 00000000 */   nop
/* 0047C8FC 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 0047C900 8CA40028 */  lw    $a0, 0x28($a1)
/* 0047C904 AFA50020 */  sw    $a1, 0x20($sp)
/* 0047C908 0320F809 */  jalr  $t9
/* 0047C90C 00000000 */   nop
/* 0047C910 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0047C914 8FA50020 */  lw    $a1, 0x20($sp)
.L0047C918:
/* 0047C918 8F998638 */  lw    $t9, %call16(delentry)($gp)
/* 0047C91C 00A02025 */  move  $a0, $a1
/* 0047C920 0320F809 */  jalr  $t9
/* 0047C924 00000000 */   nop
/* 0047C928 10000009 */  b     .L0047C950
/* 0047C92C 8FBC0018 */   lw    $gp, 0x18($sp)
.L0047C930:
/* 0047C930 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 0047C934 8F868044 */  lw    $a2, %got(RO_1000E22C)($gp)
/* 0047C938 24040001 */  li    $a0, 1
/* 0047C93C 2405016D */  li    $a1, 365
/* 0047C940 2407000A */  li    $a3, 10
/* 0047C944 0320F809 */  jalr  $t9
/* 0047C948 24C6E22C */   addiu $a2, %lo(RO_1000E22C) # addiu $a2, $a2, -0x1dd4
/* 0047C94C 8FBC0018 */  lw    $gp, 0x18($sp)
.L0047C950:
/* 0047C950 8FBF001C */  lw    $ra, 0x1c($sp)
.L0047C954:
/* 0047C954 27BD0020 */  addiu $sp, $sp, 0x20
/* 0047C958 03E00008 */  jr    $ra
/* 0047C95C 00000000 */   nop
    .type decreasecount, @function
    .size decreasecount, .-decreasecount
    .end decreasecount

glabel increasecount
    .ent increasecount
    # 0043ABD0 incroccurrence
    # 0043CBFC func_0043CBFC
    # 0043CFCC readnxtinst
    # 0044EDF8 ilodfold
    # 0046BA10 change_to_const_eq
    # 0046BD90 change_to_var_eq
    # 0046D428 oneloopblockexpr
    # 0047090C form_bop
    # 00470AAC form_rem
    # 00470DD8 form_neq0
    # 00470F88 form_neg
/* 0047C960 3C1C0FBA */  .cpload $t9
/* 0047C964 279CD930 */
/* 0047C968 0399E021 */
/* 0047C96C 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0047C970 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0047C974 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0047C978 10800050 */  beqz  $a0, .L0047CABC
/* 0047C97C 00802825 */   move  $a1, $a0
/* 0047C980 90820000 */  lbu   $v0, ($a0)
/* 0047C984 244EFFFF */  addiu $t6, $v0, -1
/* 0047C988 2DC10008 */  sltiu $at, $t6, 8
/* 0047C98C 10200043 */  beqz  $at, .L0047CA9C
/* 0047C990 00000000 */   nop
/* 0047C994 8F818044 */  lw    $at, %got(jtbl_1000E264)($gp)
/* 0047C998 000E7080 */  sll   $t6, $t6, 2
/* 0047C99C 002E0821 */  addu  $at, $at, $t6
/* 0047C9A0 8C2EE264 */  lw    $t6, %lo(jtbl_1000E264)($at)
/* 0047C9A4 01DC7021 */  addu  $t6, $t6, $gp
/* 0047C9A8 01C00008 */  jr    $t6
/* 0047C9AC 00000000 */   nop
.L0047C9B0:
/* 0047C9B0 94AF0006 */  lhu   $t7, 6($a1)
/* 0047C9B4 25F80001 */  addiu $t8, $t7, 1
/* 0047C9B8 10000040 */  b     .L0047CABC
/* 0047C9BC A4B80006 */   sh    $t8, 6($a1)
.L0047C9C0:
/* 0047C9C0 94B90006 */  lhu   $t9, 6($a1)
/* 0047C9C4 27280001 */  addiu $t0, $t9, 1
/* 0047C9C8 3109FFFF */  andi  $t1, $t0, 0xffff
/* 0047C9CC 2D210002 */  sltiu $at, $t1, 2
/* 0047C9D0 1420003A */  bnez  $at, .L0047CABC
/* 0047C9D4 A4A80006 */   sh    $t0, 6($a1)
/* 0047C9D8 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 0047C9DC 8CA40024 */  lw    $a0, 0x24($a1)
/* 0047C9E0 0320F809 */  jalr  $t9
/* 0047C9E4 00000000 */   nop
/* 0047C9E8 10000034 */  b     .L0047CABC
/* 0047C9EC 8FBC0018 */   lw    $gp, 0x18($sp)
.L0047C9F0:
/* 0047C9F0 94AA0006 */  lhu   $t2, 6($a1)
/* 0047C9F4 254B0001 */  addiu $t3, $t2, 1
/* 0047C9F8 316CFFFF */  andi  $t4, $t3, 0xffff
/* 0047C9FC 2D810002 */  sltiu $at, $t4, 2
/* 0047CA00 1420002E */  bnez  $at, .L0047CABC
/* 0047CA04 A4AB0006 */   sh    $t3, 6($a1)
/* 0047CA08 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 0047CA0C 8CA40034 */  lw    $a0, 0x34($a1)
/* 0047CA10 0320F809 */  jalr  $t9
/* 0047CA14 00000000 */   nop
/* 0047CA18 10000028 */  b     .L0047CABC
/* 0047CA1C 8FBC0018 */   lw    $gp, 0x18($sp)
.L0047CA20:
/* 0047CA20 8F828B7C */  lw     $v0, %got(numlcse)($gp)
/* 0047CA24 94AF0006 */  lhu   $t7, 6($a1)
/* 0047CA28 8C4D0000 */  lw    $t5, ($v0)
/* 0047CA2C 25F80001 */  addiu $t8, $t7, 1
/* 0047CA30 3319FFFF */  andi  $t9, $t8, 0xffff
/* 0047CA34 2F210002 */  sltiu $at, $t9, 2
/* 0047CA38 25AE0001 */  addiu $t6, $t5, 1
/* 0047CA3C A4B80006 */  sh    $t8, 6($a1)
/* 0047CA40 1420001E */  bnez  $at, .L0047CABC
/* 0047CA44 AC4E0000 */   sw    $t6, ($v0)
/* 0047CA48 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 0047CA4C 8CA40024 */  lw    $a0, 0x24($a1)
/* 0047CA50 AFA50020 */  sw    $a1, 0x20($sp)
/* 0047CA54 0320F809 */  jalr  $t9
/* 0047CA58 00000000 */   nop
/* 0047CA5C 8FA50020 */  lw    $a1, 0x20($sp)
/* 0047CA60 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0047CA64 90A80020 */  lbu   $t0, 0x20($a1)
/* 0047CA68 8F8A8DBC */  lw     $t2, %got(optab)($gp)
/* 0047CA6C 00084880 */  sll   $t1, $t0, 2
/* 0047CA70 01284823 */  subu  $t1, $t1, $t0
/* 0047CA74 012A5821 */  addu  $t3, $t1, $t2
/* 0047CA78 916C0002 */  lbu   $t4, 2($t3)
/* 0047CA7C 51800010 */  beql  $t4, $zero, .L0047CAC0
/* 0047CA80 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0047CA84 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 0047CA88 8CA40028 */  lw    $a0, 0x28($a1)
/* 0047CA8C 0320F809 */  jalr  $t9
/* 0047CA90 00000000 */   nop
/* 0047CA94 10000009 */  b     .L0047CABC
/* 0047CA98 8FBC0018 */   lw    $gp, 0x18($sp)
.L0047CA9C:
/* 0047CA9C 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 0047CAA0 8F868044 */  lw    $a2, %got(RO_1000E258)($gp)
/* 0047CAA4 24040001 */  li    $a0, 1
/* 0047CAA8 240501A7 */  li    $a1, 423
/* 0047CAAC 2407000A */  li    $a3, 10
/* 0047CAB0 0320F809 */  jalr  $t9
/* 0047CAB4 24C6E258 */   addiu $a2, %lo(RO_1000E258) # addiu $a2, $a2, -0x1da8
/* 0047CAB8 8FBC0018 */  lw    $gp, 0x18($sp)
.L0047CABC:
/* 0047CABC 8FBF001C */  lw    $ra, 0x1c($sp)
.L0047CAC0:
/* 0047CAC0 27BD0020 */  addiu $sp, $sp, 0x20
/* 0047CAC4 03E00008 */  jr    $ra
/* 0047CAC8 00000000 */   nop
    .type increasecount, @function
    .size increasecount, .-increasecount
    .end increasecount

)"");

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
int isvarhash(struct VariableInner var) {
    int hash = (((var.memtype << 6) + var.unk4bFFFFF800 + var.unk0) << 4) % 9113;
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
00456310 func_00456310
00456A2C oneproc
0046E77C oneloopblockstmt
004704B0 termination_test
004710F0 str_to_temporary
004713E8 loopunroll
004737E0 par_to_str
00473F04 pmov_to_mov
004761D0 tail_recursion
*/
void extendstat(unsigned char unk0) {
    struct Var *var;

    var = (struct Var *)alloc_new(sizeof(struct Var), &perm_heap);
    if (var == 0) {
        outofmem = true;
        return;
    }
    var->next = NULL;
    var->unk0 = unk0;
    var->unk28 = 0;
    var->graphnode = curgraphnode;
    if (stathead == NULL) {
        stathead = var;
        var->prev = NULL;
    } else {
        var->prev = stattail;
        stattail->next = var;
    }
    stattail = var;
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
int blktolev(int a0) {
    int lev = curlevel;
    bool stop = false;

    while (!stop && lev >= 2) {
        if (a0 == blklev[lev - 1]) {
            stop = true;
        } else {
            lev--;
        }
    }

    return a0 == 0 ? 0 : lev;
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
int newbit(void *unk0, int unk4) {
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
    bittab[insertpos].unk0 = unk0;
    bittab[insertpos].unk4 = unk4;
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
struct TableEntry *searchvar(unsigned short table_index, struct VariableInner *var) {
    struct TableEntry *entry = table[table_index];
    bool found = false;

    while (!found && entry != NULL) {
        if ((entry->type == isvar || entry->type == issvar) && addreq(entry->data.isvar_issvar.var_data, *var)) {
            found = true;
        } else {
            entry = entry->next;
        }
    }

    if (!found) {
        entry = appendchain(table_index);
    }

    if (var->memtype == Rmt || var->memtype == Smt || curblk == var->unk4bFFFFF800) {
        entry->type = isvar;
    } else {
        entry->type = issvar;
    }
    entry->data.isvar_issvar.var_data = *var;
    return entry;
}

/*
0047D768 vartreeinfo
0047D838 entervregveqv
*/
void vartreeinfo(struct Variable *var) {
    struct TableEntry *entry;

    while (var != NULL) {
        if (var->unk2 || var->unk1) {
            entry = searchvar(isvarhash(var->inner), &var->inner);
            entry->unk10 = 0;
            entry->data.isvar_issvar.unk20 = (unsigned char)var->unkC;
            entry->data.isvar_issvar.unk22 = var->unk2;
            entry->data.isvar_issvar.unk21 = var->unk1;
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

glabel getoption
    .ent getoption
    # 00434720 processargs
    # 0043A0CC copyline
/* 0047DBB4 3C1C0FBA */  .cpload $t9
/* 0047DBB8 279CC6DC */
/* 0047DBBC 0399E021 */
/* 0047DBC0 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0047DBC4 28810005 */  slti  $at, $a0, 5
/* 0047DBC8 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0047DBCC AFBC0018 */  sw    $gp, 0x18($sp)
/* 0047DBD0 142000E5 */  bnez  $at, .L0047DF68
/* 0047DBD4 AFA50024 */   sw    $a1, 0x24($sp)
/* 0047DBD8 248EFE6D */  addiu $t6, $a0, -0x193
/* 0047DBDC 2DC10006 */  sltiu $at, $t6, 6
/* 0047DBE0 502000EC */  beql  $at, $zero, .L0047DF94
/* 0047DBE4 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0047DBE8 8F818044 */  lw    $at, %got(jtbl_1000E344)($gp)
/* 0047DBEC 000E7080 */  sll   $t6, $t6, 2
/* 0047DBF0 002E0821 */  addu  $at, $at, $t6
/* 0047DBF4 8C2EE344 */  lw    $t6, %lo(jtbl_1000E344)($at)
/* 0047DBF8 01DC7021 */  addu  $t6, $t6, $gp
/* 0047DBFC 01C00008 */  jr    $t6
/* 0047DC00 00000000 */   nop
.L0047DC04:
/* 0047DC04 8F8989F8 */  lw     $t1, %got(pdeftabsize)($gp)
/* 0047DC08 8D230000 */  lw    $v1, ($t1)
/* 0047DC0C 28610004 */  slti  $at, $v1, 4
/* 0047DC10 10200038 */  beqz  $at, .L0047DCF4
/* 0047DC14 00031100 */   sll   $v0, $v1, 4
/* 0047DC18 8F9986E8 */  lw    $t9, %call16(alloc_realloc)($gp)
/* 0047DC1C 24460080 */  addiu $a2, $v0, 0x80
/* 0047DC20 8F8489F4 */  lw     $a0, %got(pdeftab)($gp)
/* 0047DC24 8F878954 */  lw     $a3, %got(perm_heap)($gp)
/* 0047DC28 8C840000 */  lw    $a0, ($a0)
/* 0047DC2C 04410003 */  bgez  $v0, .L0047DC3C
/* 0047DC30 00022903 */   sra   $a1, $v0, 4
/* 0047DC34 2441000F */  addiu $at, $v0, 0xf
/* 0047DC38 00012903 */  sra   $a1, $at, 4
.L0047DC3C:
/* 0047DC3C 04C10002 */  bgez  $a2, .L0047DC48
/* 0047DC40 00C00821 */   move  $at, $a2
/* 0047DC44 24C1000F */  addiu $at, $a2, 0xf
.L0047DC48:
/* 0047DC48 00013103 */  sra   $a2, $at, 4
/* 0047DC4C 0320F809 */  jalr  $t9
/* 0047DC50 00000000 */   nop
/* 0047DC54 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0047DC58 8F8189F4 */  lw     $at, %got(pdeftab)($gp)
/* 0047DC5C 8F8989F8 */  lw     $t1, %got(pdeftabsize)($gp)
/* 0047DC60 AC220000 */  sw    $v0, ($at)
/* 0047DC64 8D230000 */  lw    $v1, ($t1)
/* 0047DC68 24670001 */  addiu $a3, $v1, 1
/* 0047DC6C 24680008 */  addiu $t0, $v1, 8
/* 0047DC70 0107082A */  slt   $at, $t0, $a3
/* 0047DC74 1420001E */  bnez  $at, .L0047DCF0
/* 0047DC78 01003025 */   move  $a2, $t0
/* 0047DC7C 24C60001 */  addiu $a2, $a2, 1
/* 0047DC80 00C71023 */  subu  $v0, $a2, $a3
/* 0047DC84 30420003 */  andi  $v0, $v0, 3
/* 0047DC88 1040000D */  beqz  $v0, .L0047DCC0
/* 0047DC8C 00E02025 */   move  $a0, $a3
/* 0047DC90 8F8F89F4 */  lw     $t7, %got(pdeftab)($gp)
/* 0047DC94 00472821 */  addu  $a1, $v0, $a3
/* 0047DC98 0007C100 */  sll   $t8, $a3, 4
/* 0047DC9C 8DEF0000 */  lw    $t7, ($t7)
/* 0047DCA0 24020060 */  li    $v0, 96
/* 0047DCA4 01F81821 */  addu  $v1, $t7, $t8
.L0047DCA8:
/* 0047DCA8 24840001 */  addiu $a0, $a0, 1
/* 0047DCAC A062FFF0 */  sb    $v0, -0x10($v1)
/* 0047DCB0 14A4FFFD */  bne   $a1, $a0, .L0047DCA8
/* 0047DCB4 24630010 */   addiu $v1, $v1, 0x10
/* 0047DCB8 5086000E */  beql  $a0, $a2, .L0047DCF4
/* 0047DCBC AD280000 */   sw    $t0, ($t1)
.L0047DCC0:
/* 0047DCC0 8F9989F4 */  lw     $t9, %got(pdeftab)($gp)
/* 0047DCC4 00045900 */  sll   $t3, $a0, 4
/* 0047DCC8 24020060 */  li    $v0, 96
/* 0047DCCC 8F390000 */  lw    $t9, ($t9)
/* 0047DCD0 032B1821 */  addu  $v1, $t9, $t3
.L0047DCD4:
/* 0047DCD4 24840004 */  addiu $a0, $a0, 4
/* 0047DCD8 A062FFF0 */  sb    $v0, -0x10($v1)
/* 0047DCDC A0620000 */  sb    $v0, ($v1)
/* 0047DCE0 A0620010 */  sb    $v0, 0x10($v1)
/* 0047DCE4 A0620020 */  sb    $v0, 0x20($v1)
/* 0047DCE8 1486FFFA */  bne   $a0, $a2, .L0047DCD4
/* 0047DCEC 24630040 */   addiu $v1, $v1, 0x40
.L0047DCF0:
/* 0047DCF0 AD280000 */  sw    $t0, ($t1)
.L0047DCF4:
/* 0047DCF4 8F8A8A00 */  lw     $t2, %got(pdefmax)($gp)
/* 0047DCF8 24090001 */  li    $t1, 1
/* 0047DCFC 24080004 */  li    $t0, 4
/* 0047DD00 8D420000 */  lw    $v0, ($t2)
/* 0047DD04 04410003 */  bgez  $v0, .L0047DD14
/* 0047DD08 00000000 */   nop
/* 0047DD0C 1000000C */  b     .L0047DD40
/* 0047DD10 00002025 */   move  $a0, $zero
.L0047DD14:
/* 0047DD14 8F8C89F4 */  lw     $t4, %got(pdeftab)($gp)
/* 0047DD18 00026900 */  sll   $t5, $v0, 4
/* 0047DD1C 8D8C0000 */  lw    $t4, ($t4)
/* 0047DD20 018D7021 */  addu  $t6, $t4, $t5
/* 0047DD24 8DCF000C */  lw    $t7, 0xc($t6)
/* 0047DD28 25F80003 */  addiu $t8, $t7, 3
/* 0047DD2C 07010003 */  bgez  $t8, .L0047DD3C
/* 0047DD30 0018C883 */   sra   $t9, $t8, 2
/* 0047DD34 27010003 */  addiu $at, $t8, 3
/* 0047DD38 0001C883 */  sra   $t9, $at, 2
.L0047DD3C:
/* 0047DD3C 00592021 */  addu  $a0, $v0, $t9
.L0047DD40:
/* 0047DD40 28810004 */  slti  $at, $a0, 4
/* 0047DD44 10200013 */  beqz  $at, .L0047DD94
/* 0047DD48 00000000 */   nop
/* 0047DD4C 8F8B89F4 */  lw     $t3, %got(pdeftab)($gp)
/* 0047DD50 00046100 */  sll   $t4, $a0, 4
/* 0047DD54 00042880 */  sll   $a1, $a0, 2
/* 0047DD58 8D6B0000 */  lw    $t3, ($t3)
/* 0047DD5C 24070008 */  li    $a3, 8
/* 0047DD60 24060065 */  li    $a2, 101
/* 0047DD64 016C1821 */  addu  $v1, $t3, $t4
.L0047DD68:
/* 0047DD68 A0660000 */  sb    $a2, ($v1)
/* 0047DD6C A0670001 */  sb    $a3, 1($v1)
/* 0047DD70 AC650008 */  sw    $a1, 8($v1)
/* 0047DD74 AC68000C */  sw    $t0, 0xc($v1)
/* 0047DD78 A0690003 */  sb    $t1, 3($v1)
/* 0047DD7C AD440000 */  sw    $a0, ($t2)
/* 0047DD80 24840001 */  addiu $a0, $a0, 1
/* 0047DD84 28810004 */  slti  $at, $a0, 4
/* 0047DD88 24A50004 */  addiu $a1, $a1, 4
/* 0047DD8C 1420FFF6 */  bnez  $at, .L0047DD68
/* 0047DD90 24630010 */   addiu $v1, $v1, 0x10
.L0047DD94:
/* 0047DD94 8F818B40 */  lw     $at, %got(can_elim_tail)($gp)
/* 0047DD98 8FAD0024 */  lw    $t5, 0x24($sp)
/* 0047DD9C A0200000 */  sb    $zero, ($at)
/* 0047DDA0 3C01FFFF */  lui   $at, 0xffff
/* 0047DDA4 01A17024 */  and   $t6, $t5, $at
/* 0047DDA8 8F8189FC */  lw     $at, %got(highestmdef)($gp)
/* 0047DDAC 000E7C02 */  srl   $t7, $t6, 0x10
/* 0047DDB0 25F80008 */  addiu $t8, $t7, 8
/* 0047DDB4 10000076 */  b     .L0047DF90
/* 0047DDB8 AC380000 */   sw    $t8, ($at)
.L0047DDBC:
/* 0047DDBC 8F998AE8 */  lw     $t9, %got(fortran_lang)($gp)
/* 0047DDC0 8FA70024 */  lw    $a3, 0x24($sp)
/* 0047DDC4 93390000 */  lbu   $t9, ($t9)
/* 0047DDC8 24EBFFFF */  addiu $t3, $a3, -1
/* 0047DDCC 2D610007 */  sltiu $at, $t3, 7
/* 0047DDD0 57200070 */  bnezl $t9, .L0047DF94
/* 0047DDD4 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0047DDD8 10200023 */  beqz  $at, .L0047DE68
/* 0047DDDC 00000000 */   nop
/* 0047DDE0 8F818044 */  lw    $at, %got(jtbl_1000E314)($gp)
/* 0047DDE4 000B5880 */  sll   $t3, $t3, 2
/* 0047DDE8 002B0821 */  addu  $at, $at, $t3
/* 0047DDEC 8C2BE314 */  lw    $t3, %lo(jtbl_1000E314)($at)
/* 0047DDF0 017C5821 */  addu  $t3, $t3, $gp
/* 0047DDF4 01600008 */  jr    $t3
/* 0047DDF8 00000000 */   nop
.L0047DDFC:
/* 0047DDFC 8F818A5C */  lw     $at, %got(lang)($gp)
/* 0047DE00 10000063 */  b     .L0047DF90
/* 0047DE04 A0200000 */   sb    $zero, ($at)
.L0047DE08:
/* 0047DE08 8F818A5C */  lw     $at, %got(lang)($gp)
/* 0047DE0C 24090001 */  li    $t1, 1
/* 0047DE10 1000005F */  b     .L0047DF90
/* 0047DE14 A0290000 */   sb    $t1, ($at)
.L0047DE18:
/* 0047DE18 8F818A5C */  lw     $at, %got(lang)($gp)
/* 0047DE1C 240C0002 */  li    $t4, 2
/* 0047DE20 1000005B */  b     .L0047DF90
/* 0047DE24 A02C0000 */   sb    $t4, ($at)
.L0047DE28:
/* 0047DE28 8F818A5C */  lw     $at, %got(lang)($gp)
/* 0047DE2C 240D0003 */  li    $t5, 3
/* 0047DE30 10000057 */  b     .L0047DF90
/* 0047DE34 A02D0000 */   sb    $t5, ($at)
.L0047DE38:
/* 0047DE38 8F818A5C */  lw     $at, %got(lang)($gp)
/* 0047DE3C 240E0004 */  li    $t6, 4
/* 0047DE40 10000053 */  b     .L0047DF90
/* 0047DE44 A02E0000 */   sb    $t6, ($at)
.L0047DE48:
/* 0047DE48 8F818A5C */  lw     $at, %got(lang)($gp)
/* 0047DE4C 240F0005 */  li    $t7, 5
/* 0047DE50 1000004F */  b     .L0047DF90
/* 0047DE54 A02F0000 */   sb    $t7, ($at)
.L0047DE58:
/* 0047DE58 8F818A5C */  lw     $at, %got(lang)($gp)
/* 0047DE5C 24180006 */  li    $t8, 6
/* 0047DE60 1000004B */  b     .L0047DF90
/* 0047DE64 A0380000 */   sb    $t8, ($at)
.L0047DE68:
/* 0047DE68 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 0047DE6C 8F868044 */  lw    $a2, %got(RO_1000E308)($gp)
/* 0047DE70 24040001 */  li    $a0, 1
/* 0047DE74 24050371 */  li    $a1, 881
/* 0047DE78 2407000A */  li    $a3, 10
/* 0047DE7C 0320F809 */  jalr  $t9
/* 0047DE80 24C6E308 */   addiu $a2, %lo(RO_1000E308) # addiu $a2, $a2, -0x1cf8
/* 0047DE84 10000042 */  b     .L0047DF90
/* 0047DE88 8FBC0018 */   lw    $gp, 0x18($sp)
.L0047DE8C:
/* 0047DE8C 8FB90024 */  lw    $t9, 0x24($sp)
/* 0047DE90 8F818AD4 */  lw     $at, %got(no_r23)($gp)
/* 0047DE94 0019582B */  sltu  $t3, $zero, $t9
/* 0047DE98 1000003D */  b     .L0047DF90
/* 0047DE9C A02B0000 */   sb    $t3, ($at)
.L0047DEA0:
/* 0047DEA0 8F818B48 */  lw     $at, %got(stack_reversed)($gp)
/* 0047DEA4 24090001 */  li    $t1, 1
/* 0047DEA8 10000039 */  b     .L0047DF90
/* 0047DEAC A0290000 */   sb    $t1, ($at)
.L0047DEB0:
/* 0047DEB0 8FAC0024 */  lw    $t4, 0x24($sp)
/* 0047DEB4 8F828A94 */  lw     $v0, %got(dbugno)($gp)
/* 0047DEB8 19800035 */  blez  $t4, .L0047DF90
/* 0047DEBC AC4C0000 */   sw    $t4, ($v0)
/* 0047DEC0 8F8E8A64 */  lw     $t6, %got(listwritten)($gp)
/* 0047DEC4 24060400 */  li    $a2, 1024
/* 0047DEC8 91CE0000 */  lbu   $t6, ($t6)
/* 0047DECC 55C00031 */  bnezl $t6, .L0047DF94
/* 0047DED0 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0047DED4 8F99888C */  lw    $t9, %call16(rewrite)($gp)
/* 0047DED8 8F848CCC */  lw     $a0, %got(list)($gp)
/* 0047DEDC 8F858DD8 */  lw     $a1, %got(listname)($gp)
/* 0047DEE0 0320F809 */  jalr  $t9
/* 0047DEE4 00003825 */   move  $a3, $zero
/* 0047DEE8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0047DEEC 24090001 */  li    $t1, 1
/* 0047DEF0 8F818A64 */  lw     $at, %got(listwritten)($gp)
/* 0047DEF4 10000026 */  b     .L0047DF90
/* 0047DEF8 A0290000 */   sb    $t1, ($at)
.L0047DEFC:
/* 0047DEFC 8FAF0024 */  lw    $t7, 0x24($sp)
/* 0047DF00 8F818A20 */  lw     $at, %got(movcostused)($gp)
/* 0047DF04 448F2000 */  mtc1  $t7, $f4
/* 0047DF08 00000000 */  nop
/* 0047DF0C 468021A0 */  cvt.s.w $f6, $f4
/* 0047DF10 1000001F */  b     .L0047DF90
/* 0047DF14 E4260000 */   swc1  $f6, ($at)
.L0047DF18:
/* 0047DF18 8FB80024 */  lw    $t8, 0x24($sp)
/* 0047DF1C 8F818A7C */  lw     $at, %got(docopyprog)($gp)
/* 0047DF20 0018C82B */  sltu  $t9, $zero, $t8
/* 0047DF24 1000001A */  b     .L0047DF90
/* 0047DF28 A0390000 */   sb    $t9, ($at)
.L0047DF2C:
/* 0047DF2C 8FAB0024 */  lw    $t3, 0x24($sp)
/* 0047DF30 8F818A88 */  lw     $at, %got(docm)($gp)
/* 0047DF34 000B602B */  sltu  $t4, $zero, $t3
/* 0047DF38 10000015 */  b     .L0047DF90
/* 0047DF3C A02C0000 */   sb    $t4, ($at)
.L0047DF40:
/* 0047DF40 8FAD0024 */  lw    $t5, 0x24($sp)
/* 0047DF44 8F818A80 */  lw     $at, %got(dordstore)($gp)
/* 0047DF48 000D702B */  sltu  $t6, $zero, $t5
/* 0047DF4C 10000010 */  b     .L0047DF90
/* 0047DF50 A02E0000 */   sb    $t6, ($at)
.L0047DF54:
/* 0047DF54 8FAF0024 */  lw    $t7, 0x24($sp)
/* 0047DF58 8F818A84 */  lw     $at, %got(doscm)($gp)
/* 0047DF5C 000FC02B */  sltu  $t8, $zero, $t7
/* 0047DF60 1000000B */  b     .L0047DF90
/* 0047DF64 A0380000 */   sb    $t8, ($at)
.L0047DF68:
/* 0047DF68 2C810005 */  sltiu $at, $a0, 5
/* 0047DF6C 50200009 */  beql  $at, $zero, .L0047DF94
/* 0047DF70 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0047DF74 8F818044 */  lw    $at, %got(jtbl_1000E330)($gp)
/* 0047DF78 0004C880 */  sll   $t9, $a0, 2
/* 0047DF7C 00390821 */  addu  $at, $at, $t9
/* 0047DF80 8C39E330 */  lw    $t9, %lo(jtbl_1000E330)($at)
/* 0047DF84 033CC821 */  addu  $t9, $t9, $gp
/* 0047DF88 03200008 */  jr    $t9
/* 0047DF8C 00000000 */   nop
.L0047DF90:
/* 0047DF90 8FBF001C */  lw    $ra, 0x1c($sp)
.L0047DF94:
/* 0047DF94 27BD0020 */  addiu $sp, $sp, 0x20
/* 0047DF98 03E00008 */  jr    $ra
/* 0047DF9C 00000000 */   nop
    .type getoption, @function
    .size getoption, .-getoption
    .end getoption

glabel cutbits
    .ent cutbits
    # 00425618 func_00425618
    # 0043CFCC readnxtinst
    # 0044F3C0 unaryfold
    # 0047DFDC cutbits64
/* 0047DFA0 240E0001 */  li    $t6, 1
/* 0047DFA4 00AE7804 */  sllv  $t7, $t6, $a1
/* 0047DFA8 25F8FFFF */  addiu $t8, $t7, -1
/* 0047DFAC 00981024 */  and   $v0, $a0, $t8
/* 0047DFB0 24010006 */  li    $at, 6
/* 0047DFB4 AFA60008 */  sw    $a2, 8($sp)
/* 0047DFB8 14C10006 */  bne   $a2, $at, .L0047DFD4
/* 0047DFBC 00401825 */   move  $v1, $v0
/* 0047DFC0 24B9001F */  addiu $t9, $a1, 0x1f
/* 0047DFC4 24080001 */  li    $t0, 1
/* 0047DFC8 03282004 */  sllv  $a0, $t0, $t9
/* 0047DFCC 00444826 */  xor   $t1, $v0, $a0
/* 0047DFD0 01241823 */  subu  $v1, $t1, $a0
.L0047DFD4:
/* 0047DFD4 03E00008 */  jr    $ra
/* 0047DFD8 00601025 */   move  $v0, $v1
    .type cutbits, @function
    .size cutbits, .-cutbits
    .end cutbits

glabel cutbits64
    .ent cutbits64
    # 0043CFCC readnxtinst
/* 0047DFDC 3C1C0FBA */  .cpload $t9
/* 0047DFE0 279CC2B4 */
/* 0047DFE4 0399E021 */
/* 0047DFE8 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 0047DFEC AFB00014 */  sw    $s0, 0x14($sp)
/* 0047DFF0 28C10021 */  slti  $at, $a2, 0x21
/* 0047DFF4 00C08025 */  move  $s0, $a2
/* 0047DFF8 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0047DFFC AFBC0018 */  sw    $gp, 0x18($sp)
/* 0047E000 AFA40030 */  sw    $a0, 0x30($sp)
/* 0047E004 AFA50034 */  sw    $a1, 0x34($sp)
/* 0047E008 AFA7003C */  sw    $a3, 0x3c($sp)
/* 0047E00C AFA40020 */  sw    $a0, 0x20($sp)
/* 0047E010 14200014 */  bnez  $at, .L0047E064
/* 0047E014 AFA50024 */   sw    $a1, 0x24($sp)
/* 0047E018 24010007 */  li    $at, 7
/* 0047E01C 14E10009 */  bne   $a3, $at, .L0047E044
/* 0047E020 00000000 */   nop
/* 0047E024 8F9986A8 */  lw    $t9, %call16(cutbits)($gp)
/* 0047E028 24C5FFE0 */  addiu $a1, $a2, -0x20
/* 0047E02C 24060008 */  li    $a2, 8
/* 0047E030 0320F809 */  jalr  $t9
/* 0047E034 00000000 */   nop
/* 0047E038 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0047E03C 10000028 */  b     .L0047E0E0
/* 0047E040 AFA20020 */   sw    $v0, 0x20($sp)
.L0047E044:
/* 0047E044 8F9986A8 */  lw    $t9, %call16(cutbits)($gp)
/* 0047E048 8FA40020 */  lw    $a0, 0x20($sp)
/* 0047E04C 2605FFE0 */  addiu $a1, $s0, -0x20
/* 0047E050 0320F809 */  jalr  $t9
/* 0047E054 24060006 */   li    $a2, 6
/* 0047E058 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0047E05C 10000020 */  b     .L0047E0E0
/* 0047E060 AFA20020 */   sw    $v0, 0x20($sp)
.L0047E064:
/* 0047E064 24010020 */  li    $at, 32
/* 0047E068 16010008 */  bne   $s0, $at, .L0047E08C
/* 0047E06C 24010007 */   li    $at, 7
/* 0047E070 14E10003 */  bne   $a3, $at, .L0047E080
/* 0047E074 8FB80024 */   lw    $t8, 0x24($sp)
/* 0047E078 10000019 */  b     .L0047E0E0
/* 0047E07C AFA00020 */   sw    $zero, 0x20($sp)
.L0047E080:
/* 0047E080 0018CFC3 */  sra   $t9, $t8, 0x1f
/* 0047E084 10000016 */  b     .L0047E0E0
/* 0047E088 AFB90020 */   sw    $t9, 0x20($sp)
.L0047E08C:
/* 0047E08C 24010007 */  li    $at, 7
/* 0047E090 14E1000A */  bne   $a3, $at, .L0047E0BC
/* 0047E094 00000000 */   nop
/* 0047E098 8F9986A8 */  lw    $t9, %call16(cutbits)($gp)
/* 0047E09C 8FA40024 */  lw    $a0, 0x24($sp)
/* 0047E0A0 02002825 */  move  $a1, $s0
/* 0047E0A4 0320F809 */  jalr  $t9
/* 0047E0A8 24060008 */   li    $a2, 8
/* 0047E0AC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0047E0B0 AFA20024 */  sw    $v0, 0x24($sp)
/* 0047E0B4 1000000A */  b     .L0047E0E0
/* 0047E0B8 AFA00020 */   sw    $zero, 0x20($sp)
.L0047E0BC:
/* 0047E0BC 8F9986A8 */  lw    $t9, %call16(cutbits)($gp)
/* 0047E0C0 8FA40024 */  lw    $a0, 0x24($sp)
/* 0047E0C4 02002825 */  move  $a1, $s0
/* 0047E0C8 0320F809 */  jalr  $t9
/* 0047E0CC 24060006 */   li    $a2, 6
/* 0047E0D0 00024FC3 */  sra   $t1, $v0, 0x1f
/* 0047E0D4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0047E0D8 AFA20024 */  sw    $v0, 0x24($sp)
/* 0047E0DC AFA90020 */  sw    $t1, 0x20($sp)
.L0047E0E0:
/* 0047E0E0 8FA20020 */  lw    $v0, 0x20($sp)
/* 0047E0E4 8FA30024 */  lw    $v1, 0x24($sp)
/* 0047E0E8 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0047E0EC 8FB00014 */  lw    $s0, 0x14($sp)
/* 0047E0F0 AFA20028 */  sw    $v0, 0x28($sp)
/* 0047E0F4 AFA3002C */  sw    $v1, 0x2c($sp)
/* 0047E0F8 03E00008 */  jr    $ra
/* 0047E0FC 27BD0030 */   addiu $sp, $sp, 0x30
    .type cutbits64, @function
    .size cutbits64, .-cutbits64
    .end cutbits64
)"");

/*
0043B334 func_0043B334
0043CFCC readnxtinst
0046BA10 change_to_const_eq
0046BD90 change_to_var_eq
00470AAC form_rem
00470DD8 form_neq0
0047E3BC binopwithconst
*/
void *enter_const(int num, Datatype datatype, int arg2) {
    unsigned short hash;
    struct TableEntry *entry;
    bool found;

    hash = isconsthash(num);
    entry = table[hash];
    found = false;

    while (!found && entry != NULL) {
        if (entry->type == isconst && entry->datatype == datatype && entry->data.isconst_isrconst.number.intval == num) {
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
            entry->data.isconst_isrconst.number.longval = num;
        } else {
            entry->data.isconst_isrconst.number.intval = num;
        }
        entry->data.isconst_isrconst.size = sizeoftyp(datatype);
        entry->unk18 = 0;
        entry->unk10 = arg2;
    }

    return entry;
}

__asm__(R""(
.set noat
.set noreorder

glabel enter_lda
    .ent enter_lda
    # 0046BA10 change_to_const_eq
/* 0047E24C 3C1C0FBA */  .cpload $t9
/* 0047E250 279CC044 */
/* 0047E254 0399E021 */
/* 0047E258 27BDFFC0 */  addiu $sp, $sp, -0x40
/* 0047E25C AFB5002C */  sw    $s5, 0x2c($sp)
/* 0047E260 AFB20020 */  sw    $s2, 0x20($sp)
/* 0047E264 0080A825 */  move  $s5, $a0
/* 0047E268 AFBF0034 */  sw    $ra, 0x34($sp)
/* 0047E26C AFBC0030 */  sw    $gp, 0x30($sp)
/* 0047E270 AFB40028 */  sw    $s4, 0x28($sp)
/* 0047E274 AFB30024 */  sw    $s3, 0x24($sp)
/* 0047E278 AFB1001C */  sw    $s1, 0x1c($sp)
/* 0047E27C AFB00018 */  sw    $s0, 0x18($sp)
/* 0047E280 AFA60048 */  sw    $a2, 0x48($sp)
/* 0047E284 24B2002C */  addiu $s2, $a1, 0x2c
/* 0047E288 8E440000 */  lw    $a0, ($s2)
/* 0047E28C 8F99864C */  lw    $t9, %call16(isvarhash)($gp)
/* 0047E290 00A0A025 */  move  $s4, $a1
/* 0047E294 AFA40000 */  sw    $a0, ($sp)
/* 0047E298 8E450004 */  lw    $a1, 4($s2)
/* 0047E29C 0320F809 */  jalr  $t9
/* 0047E2A0 AFA50004 */   sw    $a1, 4($sp)
/* 0047E2A4 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0047E2A8 3058FFFF */  andi  $t8, $v0, 0xffff
/* 0047E2AC 0018C880 */  sll   $t9, $t8, 2
/* 0047E2B0 8F888DF8 */  lw     $t0, %got(table)($gp)
/* 0047E2B4 A7A20038 */  sh    $v0, 0x38($sp)
/* 0047E2B8 00008825 */  move  $s1, $zero
/* 0047E2BC 03284821 */  addu  $t1, $t9, $t0
/* 0047E2C0 8D300000 */  lw    $s0, ($t1)
/* 0047E2C4 24130001 */  li    $s3, 1
/* 0047E2C8 1200001E */  beqz  $s0, .L0047E344
/* 0047E2CC 00000000 */   nop
/* 0047E2D0 920A0000 */  lbu   $t2, ($s0)
.L0047E2D4:
/* 0047E2D4 566A0017 */  bnel  $s3, $t2, .L0047E334
/* 0047E2D8 8E10001C */   lw    $s0, 0x1c($s0)
/* 0047E2DC 8E0B0020 */  lw    $t3, 0x20($s0)
/* 0047E2E0 56AB0014 */  bnel  $s5, $t3, .L0047E334
/* 0047E2E4 8E10001C */   lw    $s0, 0x1c($s0)
/* 0047E2E8 8E04002C */  lw    $a0, 0x2c($s0)
/* 0047E2EC 8E050030 */  lw    $a1, 0x30($s0)
/* 0047E2F0 8F99860C */  lw    $t9, %call16(addreq)($gp)
/* 0047E2F4 AFA40000 */  sw    $a0, ($sp)
/* 0047E2F8 AFA50004 */  sw    $a1, 4($sp)
/* 0047E2FC 8E460000 */  lw    $a2, ($s2)
/* 0047E300 AFA60008 */  sw    $a2, 8($sp)
/* 0047E304 8E470004 */  lw    $a3, 4($s2)
/* 0047E308 0320F809 */  jalr  $t9
/* 0047E30C AFA7000C */   sw    $a3, 0xc($sp)
/* 0047E310 10400007 */  beqz  $v0, .L0047E330
/* 0047E314 8FBC0030 */   lw    $gp, 0x30($sp)
/* 0047E318 8E980024 */  lw    $t8, 0x24($s4)
/* 0047E31C 8E190024 */  lw    $t9, 0x24($s0)
/* 0047E320 57190004 */  bnel  $t8, $t9, .L0047E334
/* 0047E324 8E10001C */   lw    $s0, 0x1c($s0)
/* 0047E328 10000002 */  b     .L0047E334
/* 0047E32C 327100FF */   andi  $s1, $s3, 0xff
.L0047E330:
/* 0047E330 8E10001C */  lw    $s0, 0x1c($s0)
.L0047E334:
/* 0047E334 16200003 */  bnez  $s1, .L0047E344
/* 0047E338 00000000 */   nop
/* 0047E33C 5600FFE5 */  bnezl $s0, .L0047E2D4
/* 0047E340 920A0000 */   lbu   $t2, ($s0)
.L0047E344:
/* 0047E344 16200013 */  bnez  $s1, .L0047E394
/* 0047E348 24130001 */   li    $s3, 1
/* 0047E34C 8F998620 */  lw    $t9, %call16(appendchain)($gp)
/* 0047E350 97A40038 */  lhu   $a0, 0x38($sp)
/* 0047E354 0320F809 */  jalr  $t9
/* 0047E358 00000000 */   nop
/* 0047E35C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0047E360 A0530000 */  sb    $s3, ($v0)
/* 0047E364 A0400001 */  sb    $zero, 1($v0)
/* 0047E368 AC550020 */  sw    $s5, 0x20($v0)
/* 0047E36C 8E880024 */  lw    $t0, 0x24($s4)
/* 0047E370 00408025 */  move  $s0, $v0
/* 0047E374 AC480024 */  sw    $t0, 0x24($v0)
/* 0047E378 8E4A0000 */  lw    $t2, ($s2)
/* 0047E37C AC4A002C */  sw    $t2, 0x2c($v0)
/* 0047E380 8E490004 */  lw    $t1, 4($s2)
/* 0047E384 AC400018 */  sw    $zero, 0x18($v0)
/* 0047E388 AC490030 */  sw    $t1, 0x30($v0)
/* 0047E38C 8FAB0048 */  lw    $t3, 0x48($sp)
/* 0047E390 AC4B0010 */  sw    $t3, 0x10($v0)
.L0047E394:
/* 0047E394 8FBF0034 */  lw    $ra, 0x34($sp)
/* 0047E398 02001025 */  move  $v0, $s0
/* 0047E39C 8FB00018 */  lw    $s0, 0x18($sp)
/* 0047E3A0 8FB1001C */  lw    $s1, 0x1c($sp)
/* 0047E3A4 8FB20020 */  lw    $s2, 0x20($sp)
/* 0047E3A8 8FB30024 */  lw    $s3, 0x24($sp)
/* 0047E3AC 8FB40028 */  lw    $s4, 0x28($sp)
/* 0047E3B0 8FB5002C */  lw    $s5, 0x2c($sp)
/* 0047E3B4 03E00008 */  jr    $ra
/* 0047E3B8 27BD0040 */   addiu $sp, $sp, 0x40
    .type enter_lda, @function
    .size enter_lda, .-enter_lda
    .end enter_lda

glabel binopwithconst
    .ent binopwithconst
    # 0043B1DC func_0043B1DC
    # 0043B23C func_0043B23C
    # 0043CFCC readnxtinst
    # 004516BC reduceixa
    # 0046D07C unroll_resetincr
    # 0046D0D8 unroll_resetincr_mod
    # 0046E77C oneloopblockstmt
/* 0047E3BC 3C1C0FBA */  .cpload $t9
/* 0047E3C0 279CBED4 */
/* 0047E3C4 0399E021 */
/* 0047E3C8 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 0047E3CC AFBF0024 */  sw    $ra, 0x24($sp)
/* 0047E3D0 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0047E3D4 AFB2001C */  sw    $s2, 0x1c($sp)
/* 0047E3D8 AFB10018 */  sw    $s1, 0x18($sp)
/* 0047E3DC AFB00014 */  sw    $s0, 0x14($sp)
/* 0047E3E0 AFA40038 */  sw    $a0, 0x38($sp)
/* 0047E3E4 90A20000 */  lbu   $v0, ($a1)
/* 0047E3E8 24080004 */  li    $t0, 4
/* 0047E3EC 00A08025 */  move  $s0, $a1
/* 0047E3F0 309200FF */  andi  $s2, $a0, 0xff
/* 0047E3F4 15020003 */  bne   $t0, $v0, .L0047E404
/* 0047E3F8 00C03825 */   move  $a3, $a2
/* 0047E3FC 10000002 */  b     .L0047E408
/* 0047E400 90B10023 */   lbu   $s1, 0x23($a1)
.L0047E404:
/* 0047E404 92110001 */  lbu   $s1, 1($s0)
.L0047E408:
/* 0047E408 24010002 */  li    $at, 2
/* 0047E40C 1441003B */  bne   $v0, $at, .L0047E4FC
/* 0047E410 00E02025 */   move  $a0, $a3
/* 0047E414 1000002A */  b     .L0047E4C0
/* 0047E418 2E41005C */   sltiu $at, $s2, 0x5c
.L0047E41C:
/* 0047E41C 8F9986B0 */  lw    $t9, %call16(enter_const)($gp)
/* 0047E420 8F8989B4 */  lw     $t1, %got(curgraphnode)($gp)
/* 0047E424 8E0E0020 */  lw    $t6, 0x20($s0)
/* 0047E428 02202825 */  move  $a1, $s1
/* 0047E42C 8D260000 */  lw    $a2, ($t1)
/* 0047E430 0320F809 */  jalr  $t9
/* 0047E434 01C72021 */   addu  $a0, $t6, $a3
/* 0047E438 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0047E43C 1000008C */  b     .L0047E670
/* 0047E440 00402025 */   move  $a0, $v0
/* 0047E444 8E0F0020 */  lw    $t7, 0x20($s0)
.L0047E448:
/* 0047E448 8F9986B0 */  lw    $t9, %call16(enter_const)($gp)
/* 0047E44C 8F8989B4 */  lw     $t1, %got(curgraphnode)($gp)
/* 0047E450 01E70019 */  multu $t7, $a3
/* 0047E454 02202825 */  move  $a1, $s1
/* 0047E458 8D260000 */  lw    $a2, ($t1)
/* 0047E45C 00002012 */  mflo  $a0
/* 0047E460 0320F809 */  jalr  $t9
/* 0047E464 00000000 */   nop
/* 0047E468 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0047E46C 10000080 */  b     .L0047E670
/* 0047E470 00402025 */   move  $a0, $v0
.L0047E474:
/* 0047E474 8E180020 */  lw    $t8, 0x20($s0)
/* 0047E478 8F9986B0 */  lw    $t9, %call16(enter_const)($gp)
/* 0047E47C 8F8989B4 */  lw     $t1, %got(curgraphnode)($gp)
/* 0047E480 00F82026 */  xor   $a0, $a3, $t8
/* 0047E484 0004202B */  sltu  $a0, $zero, $a0
/* 0047E488 0320F809 */  jalr  $t9
/* 0047E48C 8D260000 */   lw    $a2, ($t1)
/* 0047E490 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0047E494 10000076 */  b     .L0047E670
/* 0047E498 00402025 */   move  $a0, $v0
.L0047E49C:
/* 0047E49C 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 0047E4A0 8F868044 */  lw    $a2, %got(RO_1000E35C)($gp)
/* 0047E4A4 24050420 */  li    $a1, 1056
/* 0047E4A8 2407000A */  li    $a3, 10
/* 0047E4AC 0320F809 */  jalr  $t9
/* 0047E4B0 24C6E35C */   addiu $a2, %lo(RO_1000E35C) # addiu $a2, $a2, -0x1ca4
/* 0047E4B4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0047E4B8 1000006D */  b     .L0047E670
/* 0047E4BC 8FA40034 */   lw    $a0, 0x34($sp)
.L0047E4C0:
/* 0047E4C0 14200006 */  bnez  $at, .L0047E4DC
/* 0047E4C4 24040001 */   li    $a0, 1
/* 0047E4C8 2401005F */  li    $at, 95
/* 0047E4CC 1241FFE9 */  beq   $s2, $at, .L0047E474
/* 0047E4D0 02202825 */   move  $a1, $s1
/* 0047E4D4 1000FFF1 */  b     .L0047E49C
/* 0047E4D8 00000000 */   nop
.L0047E4DC:
/* 0047E4DC 24010001 */  li    $at, 1
/* 0047E4E0 1241FFCE */  beq   $s2, $at, .L0047E41C
/* 0047E4E4 00000000 */   nop
/* 0047E4E8 2401005B */  li    $at, 91
/* 0047E4EC 5241FFD6 */  beql  $s2, $at, .L0047E448
/* 0047E4F0 8E0F0020 */   lw    $t7, 0x20($s0)
/* 0047E4F4 1000FFE9 */  b     .L0047E49C
/* 0047E4F8 00000000 */   nop
.L0047E4FC:
/* 0047E4FC 8F9986B0 */  lw    $t9, %call16(enter_const)($gp)
/* 0047E500 8F8989B4 */  lw     $t1, %got(curgraphnode)($gp)
/* 0047E504 02202825 */  move  $a1, $s1
/* 0047E508 0320F809 */  jalr  $t9
/* 0047E50C 8D260000 */   lw    $a2, ($t1)
/* 0047E510 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0047E514 02402025 */  move  $a0, $s2
/* 0047E518 02002825 */  move  $a1, $s0
/* 0047E51C 8F998650 */  lw    $t9, %call16(isophash)($gp)
/* 0047E520 00403025 */  move  $a2, $v0
/* 0047E524 AFA20030 */  sw    $v0, 0x30($sp)
/* 0047E528 0320F809 */  jalr  $t9
/* 0047E52C 00000000 */   nop
/* 0047E530 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0047E534 3059FFFF */  andi  $t9, $v0, 0xffff
/* 0047E538 00195080 */  sll   $t2, $t9, 2
/* 0047E53C 8F8B8DF8 */  lw     $t3, %got(table)($gp)
/* 0047E540 8FA70030 */  lw    $a3, 0x30($sp)
/* 0047E544 24080004 */  li    $t0, 4
/* 0047E548 014B6021 */  addu  $t4, $t2, $t3
/* 0047E54C 8D830000 */  lw    $v1, ($t4)
/* 0047E550 3045FFFF */  andi  $a1, $v0, 0xffff
/* 0047E554 00002025 */  move  $a0, $zero
/* 0047E558 10600020 */  beqz  $v1, .L0047E5DC
/* 0047E55C 8F8989B4 */   lw     $t1, %got(curgraphnode)($gp)
/* 0047E560 906D0000 */  lbu   $t5, ($v1)
.L0047E564:
/* 0047E564 550D0019 */  bnel  $t0, $t5, .L0047E5CC
/* 0047E568 8C63001C */   lw    $v1, 0x1c($v1)
/* 0047E56C 906E0020 */  lbu   $t6, 0x20($v1)
/* 0047E570 564E0016 */  bnel  $s2, $t6, .L0047E5CC
/* 0047E574 8C63001C */   lw    $v1, 0x1c($v1)
/* 0047E578 906F0001 */  lbu   $t7, 1($v1)
/* 0047E57C 562F0013 */  bnel  $s1, $t7, .L0047E5CC
/* 0047E580 8C63001C */   lw    $v1, 0x1c($v1)
/* 0047E584 8D380000 */  lw    $t8, ($t1)
/* 0047E588 8C790010 */  lw    $t9, 0x10($v1)
/* 0047E58C 5719000F */  bnel  $t8, $t9, .L0047E5CC
/* 0047E590 8C63001C */   lw    $v1, 0x1c($v1)
/* 0047E594 8C620024 */  lw    $v0, 0x24($v1)
/* 0047E598 14E20004 */  bne   $a3, $v0, .L0047E5AC
/* 0047E59C 00000000 */   nop
/* 0047E5A0 8C6A0028 */  lw    $t2, 0x28($v1)
/* 0047E5A4 120A0006 */  beq   $s0, $t2, .L0047E5C0
/* 0047E5A8 00000000 */   nop
.L0047E5AC:
/* 0047E5AC 56020007 */  bnel  $s0, $v0, .L0047E5CC
/* 0047E5B0 8C63001C */   lw    $v1, 0x1c($v1)
/* 0047E5B4 8C6B0028 */  lw    $t3, 0x28($v1)
/* 0047E5B8 54EB0004 */  bnel  $a3, $t3, .L0047E5CC
/* 0047E5BC 8C63001C */   lw    $v1, 0x1c($v1)
.L0047E5C0:
/* 0047E5C0 10000002 */  b     .L0047E5CC
/* 0047E5C4 24040001 */   li    $a0, 1
/* 0047E5C8 8C63001C */  lw    $v1, 0x1c($v1)
.L0047E5CC:
/* 0047E5CC 14800003 */  bnez  $a0, .L0047E5DC
/* 0047E5D0 00000000 */   nop
/* 0047E5D4 5460FFE3 */  bnezl $v1, .L0047E564
/* 0047E5D8 906D0000 */   lbu   $t5, ($v1)
.L0047E5DC:
/* 0047E5DC 5480001B */  bnezl $a0, .L0047E64C
/* 0047E5E0 946E0006 */   lhu   $t6, 6($v1)
/* 0047E5E4 8F998620 */  lw    $t9, %call16(appendchain)($gp)
/* 0047E5E8 00A02025 */  move  $a0, $a1
/* 0047E5EC AFA70030 */  sw    $a3, 0x30($sp)
/* 0047E5F0 0320F809 */  jalr  $t9
/* 0047E5F4 00000000 */   nop
/* 0047E5F8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0047E5FC 8FA70030 */  lw    $a3, 0x30($sp)
/* 0047E600 24080004 */  li    $t0, 4
/* 0047E604 8F8989B4 */  lw     $t1, %got(curgraphnode)($gp)
/* 0047E608 A0480000 */  sb    $t0, ($v0)
/* 0047E60C A0520020 */  sb    $s2, 0x20($v0)
/* 0047E610 A0510001 */  sb    $s1, 1($v0)
/* 0047E614 A0510023 */  sb    $s1, 0x23($v0)
/* 0047E618 AC500024 */  sw    $s0, 0x24($v0)
/* 0047E61C AC470028 */  sw    $a3, 0x28($v0)
/* 0047E620 8D2C0000 */  lw    $t4, ($t1)
/* 0047E624 240D0001 */  li    $t5, 1
/* 0047E628 00401825 */  move  $v1, $v0
/* 0047E62C A44D0006 */  sh    $t5, 6($v0)
/* 0047E630 A040003E */  sb    $zero, 0x3e($v0)
/* 0047E634 AC400030 */  sw    $zero, 0x30($v0)
/* 0047E638 A0400005 */  sb    $zero, 5($v0)
/* 0047E63C A0400004 */  sb    $zero, 4($v0)
/* 0047E640 1000000A */  b     .L0047E66C
/* 0047E644 AC4C0010 */   sw    $t4, 0x10($v0)
/* 0047E648 946E0006 */  lhu   $t6, 6($v1)
.L0047E64C:
/* 0047E64C 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 0047E650 02002025 */  move  $a0, $s0
/* 0047E654 25CF0001 */  addiu $t7, $t6, 1
/* 0047E658 A46F0006 */  sh    $t7, 6($v1)
/* 0047E65C 0320F809 */  jalr  $t9
/* 0047E660 AFA3002C */   sw    $v1, 0x2c($sp)
/* 0047E664 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0047E668 8FA3002C */  lw    $v1, 0x2c($sp)
.L0047E66C:
/* 0047E66C 00602025 */  move  $a0, $v1
.L0047E670:
/* 0047E670 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0047E674 8FB00014 */  lw    $s0, 0x14($sp)
/* 0047E678 8FB10018 */  lw    $s1, 0x18($sp)
/* 0047E67C 8FB2001C */  lw    $s2, 0x1c($sp)
/* 0047E680 27BD0038 */  addiu $sp, $sp, 0x38
/* 0047E684 03E00008 */  jr    $ra
/* 0047E688 00801025 */   move  $v0, $a0
    .type binopwithconst, @function
    .size binopwithconst, .-binopwithconst
    .end binopwithconst

glabel regclassof
    .ent regclassof
    # 0041F138 inreg
    # 0045DA18 formlivbb
    # 0045DFAC passedinreg
    # 0045FBB4 func_0045FBB4
    # 00464BFC localcolor
    # 0046732C isconstrained
    # 00469280 globalcolor
/* 0047E68C 908E0000 */  lbu   $t6, ($a0)
/* 0047E690 24010004 */  li    $at, 4
/* 0047E694 24030001 */  li    $v1, 1
/* 0047E698 55C10004 */  bnel  $t6, $at, .L0047E6AC
/* 0047E69C 90820001 */   lbu   $v0, 1($a0)
/* 0047E6A0 10000002 */  b     .L0047E6AC
/* 0047E6A4 90820012 */   lbu   $v0, 0x12($a0)
/* 0047E6A8 90820001 */  lbu   $v0, 1($a0)
.L0047E6AC:
/* 0047E6AC 2C4F0020 */  sltiu $t7, $v0, 0x20
/* 0047E6B0 000FC023 */  negu  $t8, $t7
/* 0047E6B4 3C01000C */  lui   $at, 0xc
/* 0047E6B8 0301C824 */  and   $t9, $t8, $at
/* 0047E6BC 00594004 */  sllv  $t0, $t9, $v0
/* 0047E6C0 05010003 */  bgez  $t0, .L0047E6D0
/* 0047E6C4 00000000 */   nop
/* 0047E6C8 03E00008 */  jr    $ra
/* 0047E6CC 24020002 */   li    $v0, 2

.L0047E6D0:
/* 0047E6D0 03E00008 */  jr    $ra
/* 0047E6D4 00601025 */   move  $v0, $v1
    .type regclassof, @function
    .size regclassof, .-regclassof
    .end regclassof

glabel constinreg
    .ent constinreg
    # 004230F0 func_004230F0
    # 00426FA4 func_00426FA4
    # 0045E45C func_0045E45C
    # 0045E5C4 func_0045E5C4
/* 0047E6D8 3C1C0FBA */  .cpload $t9
/* 0047E6DC 279CBBB8 */
/* 0047E6E0 0399E021 */
/* 0047E6E4 8F8E8AB8 */  lw     $t6, %got(do_const_in_reg)($gp)
/* 0047E6E8 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0047E6EC AFA40028 */  sw    $a0, 0x28($sp)
/* 0047E6F0 91CE0000 */  lbu   $t6, ($t6)
/* 0047E6F4 93A5002B */  lbu   $a1, 0x2b($sp)
/* 0047E6F8 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0047E6FC AFBC0018 */  sw    $gp, 0x18($sp)
/* 0047E700 AFA60030 */  sw    $a2, 0x30($sp)
/* 0047E704 15C00003 */  bnez  $t6, .L0047E714
/* 0047E708 AFA70034 */   sw    $a3, 0x34($sp)
/* 0047E70C 10000056 */  b     .L0047E868
/* 0047E710 A3A00027 */   sb    $zero, 0x27($sp)
.L0047E714:
/* 0047E714 93A3003B */  lbu   $v1, 0x3b($sp)
/* 0047E718 24010004 */  li    $at, 4
/* 0047E71C 2CAF0020 */  sltiu $t7, $a1, 0x20
/* 0047E720 14610003 */  bne   $v1, $at, .L0047E730
/* 0047E724 000FC023 */   negu  $t8, $t7
/* 0047E728 1000004F */  b     .L0047E868
/* 0047E72C A3A00027 */   sb    $zero, 0x27($sp)
.L0047E730:
/* 0047E730 3C01200C */  lui   $at, 0x200c
/* 0047E734 0301C824 */  and   $t9, $t8, $at
/* 0047E738 00B94004 */  sllv  $t0, $t9, $a1
/* 0047E73C 05010004 */  bgez  $t0, .L0047E750
/* 0047E740 2CAA0020 */   sltiu $t2, $a1, 0x20
/* 0047E744 24090001 */  li    $t1, 1
/* 0047E748 10000047 */  b     .L0047E868
/* 0047E74C A3A90027 */   sb    $t1, 0x27($sp)
.L0047E750:
/* 0047E750 000A5823 */  negu  $t3, $t2
/* 0047E754 3C011062 */  lui   $at, 0x1062
/* 0047E758 01616024 */  and   $t4, $t3, $at
/* 0047E75C 00AC6804 */  sllv  $t5, $t4, $a1
/* 0047E760 05A0000E */  bltz  $t5, .L0047E79C
/* 0047E764 8FA40030 */   lw    $a0, 0x30($sp)
/* 0047E768 1080000C */  beqz  $a0, .L0047E79C
/* 0047E76C 00000000 */   nop
/* 0047E770 8F8E8B28 */  lw     $t6, %got(mips3_64data)($gp)
/* 0047E774 2CAF0020 */  sltiu $t7, $a1, 0x20
/* 0047E778 000FC023 */  negu  $t8, $t7
/* 0047E77C 91CE0000 */  lbu   $t6, ($t6)
/* 0047E780 3C010500 */  lui   $at, 0x500
/* 0047E784 55C00008 */  bnezl $t6, .L0047E7A8
/* 0047E788 24010005 */   li    $at, 5
/* 0047E78C 0301C824 */  and   $t9, $t8, $at
/* 0047E790 00B94004 */  sllv  $t0, $t9, $a1
/* 0047E794 05030004 */  bgezl $t0, .L0047E7A8
/* 0047E798 24010005 */   li    $at, 5
.L0047E79C:
/* 0047E79C 10000032 */  b     .L0047E868
/* 0047E7A0 A3A00027 */   sb    $zero, 0x27($sp)
/* 0047E7A4 24010005 */  li    $at, 5
.L0047E7A8:
/* 0047E7A8 54610009 */  bnel  $v1, $at, .L0047E7D0
/* 0047E7AC 28818000 */   slti  $at, $a0, -0x8000
/* 0047E7B0 8F9986F8 */  lw    $t9, %call16(is_power2)($gp)
/* 0047E7B4 0320F809 */  jalr  $t9
/* 0047E7B8 00000000 */   nop
/* 0047E7BC 2C490001 */  sltiu $t1, $v0, 1
/* 0047E7C0 A3A90027 */  sb    $t1, 0x27($sp)
/* 0047E7C4 10000028 */  b     .L0047E868
/* 0047E7C8 8FBC0018 */   lw    $gp, 0x18($sp)
/* 0047E7CC 28818000 */  slti  $at, $a0, -0x8000
.L0047E7D0:
/* 0047E7D0 14200005 */  bnez  $at, .L0047E7E8
/* 0047E7D4 240A0001 */   li    $t2, 1
/* 0047E7D8 3C010001 */  lui   $at, 1
/* 0047E7DC 0081082A */  slt   $at, $a0, $at
/* 0047E7E0 14200003 */  bnez  $at, .L0047E7F0
/* 0047E7E4 306200FF */   andi  $v0, $v1, 0xff
.L0047E7E8:
/* 0047E7E8 1000001F */  b     .L0047E868
/* 0047E7EC A3AA0027 */   sb    $t2, 0x27($sp)
.L0047E7F0:
/* 0047E7F0 2C410004 */  sltiu $at, $v0, 4
/* 0047E7F4 10200015 */  beqz  $at, .L0047E84C
/* 0047E7F8 24050467 */   li    $a1, 1127
/* 0047E7FC 8F818044 */  lw    $at, %got(jtbl_1000E370)($gp)
/* 0047E800 00025880 */  sll   $t3, $v0, 2
/* 0047E804 002B0821 */  addu  $at, $at, $t3
/* 0047E808 8C2BE370 */  lw    $t3, %lo(jtbl_1000E370)($at)
/* 0047E80C 017C5821 */  addu  $t3, $t3, $gp
/* 0047E810 01600008 */  jr    $t3
/* 0047E814 00000000 */   nop
.L0047E818:
/* 0047E818 10000013 */  b     .L0047E868
/* 0047E81C A3A00027 */   sb    $zero, 0x27($sp)
.L0047E820:
/* 0047E820 240C0001 */  li    $t4, 1
/* 0047E824 10000010 */  b     .L0047E868
/* 0047E828 A3AC0027 */   sb    $t4, 0x27($sp)
.L0047E82C:
/* 0047E82C 34018000 */  li    $at, 32768
/* 0047E830 0081682A */  slt   $t5, $a0, $at
/* 0047E834 39AD0001 */  xori  $t5, $t5, 1
/* 0047E838 1000000B */  b     .L0047E868
/* 0047E83C A3AD0027 */   sb    $t5, 0x27($sp)
.L0047E840:
/* 0047E840 288E0000 */  slti  $t6, $a0, 0
/* 0047E844 10000008 */  b     .L0047E868
/* 0047E848 A3AE0027 */   sb    $t6, 0x27($sp)
.L0047E84C:
/* 0047E84C 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 0047E850 8F868044 */  lw    $a2, %got(RO_1000E366)($gp)
/* 0047E854 24040001 */  li    $a0, 1
/* 0047E858 2407000A */  li    $a3, 10
/* 0047E85C 0320F809 */  jalr  $t9
/* 0047E860 24C6E366 */   addiu $a2, %lo(RO_1000E366) # addiu $a2, $a2, -0x1c9a
/* 0047E864 8FBC0018 */  lw    $gp, 0x18($sp)
.L0047E868:
/* 0047E868 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0047E86C 93A20027 */  lbu   $v0, 0x27($sp)
/* 0047E870 27BD0028 */  addiu $sp, $sp, 0x28
/* 0047E874 03E00008 */  jr    $ra
/* 0047E878 00000000 */   nop
    .type constinreg, @function
    .size constinreg, .-constinreg
    .end constinreg

glabel ldainreg
    .ent ldainreg
    # 0045E5C4 func_0045E5C4
/* 0047E87C 3C1C0FBA */  .cpload $t9
/* 0047E880 279CBA14 */
/* 0047E884 0399E021 */
/* 0047E888 8F8E8AB8 */  lw     $t6, %got(do_const_in_reg)($gp)
/* 0047E88C AFA40000 */  sw    $a0, ($sp)
/* 0047E890 AFA50004 */  sw    $a1, 4($sp)
/* 0047E894 91CE0000 */  lbu   $t6, ($t6)
/* 0047E898 AFA60008 */  sw    $a2, 8($sp)
/* 0047E89C 24010004 */  li    $at, 4
/* 0047E8A0 15C00003 */  bnez  $t6, .L0047E8B0
/* 0047E8A4 00000000 */   nop
/* 0047E8A8 03E00008 */  jr    $ra
/* 0047E8AC 00001025 */   move  $v0, $zero

.L0047E8B0:
/* 0047E8B0 14C10003 */  bne   $a2, $at, .L0047E8C0
/* 0047E8B4 24030001 */   li    $v1, 1
/* 0047E8B8 03E00008 */  jr    $ra
/* 0047E8BC 00001025 */   move  $v0, $zero

.L0047E8C0:
/* 0047E8C0 03E00008 */  jr    $ra
/* 0047E8C4 00601025 */   move  $v0, $v1
    .type ldainreg, @function
    .size ldainreg, .-ldainreg
    .end ldainreg

glabel in_indmults
    .ent in_indmults
    # 0041550C func_0041550C
    # 00444A84 isearchloop
/* 0047E8C8 3C1C0FBA */  .cpload $t9
/* 0047E8CC 279CB9C8 */
/* 0047E8D0 0399E021 */
/* 0047E8D4 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0047E8D8 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0047E8DC AFBC0018 */  sw    $gp, 0x18($sp)
/* 0047E8E0 14800003 */  bnez  $a0, .L0047E8F0
/* 0047E8E4 00803025 */   move  $a2, $a0
/* 0047E8E8 1000000E */  b     .L0047E924
/* 0047E8EC 24030001 */   li    $v1, 1
.L0047E8F0:
/* 0047E8F0 90CE0000 */  lbu   $t6, ($a2)
/* 0047E8F4 24010004 */  li    $at, 4
/* 0047E8F8 11C10003 */  beq   $t6, $at, .L0047E908
/* 0047E8FC 00000000 */   nop
/* 0047E900 10000008 */  b     .L0047E924
/* 0047E904 24030001 */   li    $v1, 1
.L0047E908:
/* 0047E908 8F998170 */  lw    $t9, %call16(bvectin0)($gp)
/* 0047E90C 94C40002 */  lhu   $a0, 2($a2)
/* 0047E910 8F858CF8 */  lw     $a1, %got(indmults)($gp)
/* 0047E914 0320F809 */  jalr  $t9
/* 0047E918 00000000 */   nop
/* 0047E91C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0047E920 304300FF */  andi  $v1, $v0, 0xff
.L0047E924:
/* 0047E924 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0047E928 27BD0020 */  addiu $sp, $sp, 0x20
/* 0047E92C 00601025 */  move  $v0, $v1
/* 0047E930 03E00008 */  jr    $ra
/* 0047E934 00000000 */   nop
    .type in_indmults, @function
    .size in_indmults, .-in_indmults
    .end in_indmults

)"");

/*
0043CFCC readnxtinst
0044F1B8 istrfold
0047E938 checkincre
*/
bool checkincre(struct TableEntry *entry, struct TableEntry *entry2, int *result) {
    int result1;
    int result2;

    switch (entry->type) {
        case isvar:
        case issvar:
            if (addreq(entry->data.isvar_issvar.var_data, entry2->data.isvar_issvar.var_data)) {
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
                        (entry->data.isop.cvtfrom == Adt || entry->data.isop.cvtfrom == Hdt || entry->data.isop.cvtfrom == Jdt || entry->data.isop.cvtfrom == Ldt)))
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
int findincre(struct TableEntry *entry) {
    int result1;
    int result2;

    switch (entry->type) {
        case isconst:
            return entry->data.isconst_isrconst.number.intval;

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
                    return result1 + entry->data.isop.unk2C;
                case Udec:
                    return result1 + entry->data.isop.unk2C;
                default:
                    caseerror(1, 1251, "uoptutil.p", 10);
                    return 0; // originally an uninitialized stack value was returned
            }
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

glabel hasvolatile
    .ent hasvolatile
    # 0043CFCC readnxtinst
    # 0047EEA4 hasvolatile
/* 0047EEA4 3C1C0FBA */  .cpload $t9
/* 0047EEA8 279CB3EC */
/* 0047EEAC 0399E021 */
/* 0047EEB0 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0047EEB4 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0047EEB8 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0047EEBC 90830000 */  lbu   $v1, ($a0)
/* 0047EEC0 24010004 */  li    $at, 4
/* 0047EEC4 00802825 */  move  $a1, $a0
/* 0047EEC8 10610007 */  beq   $v1, $at, .L0047EEE8
/* 0047EECC 38620003 */   xori  $v0, $v1, 3
/* 0047EED0 2C420001 */  sltiu $v0, $v0, 1
/* 0047EED4 10400002 */  beqz  $v0, .L0047EEE0
/* 0047EED8 00000000 */   nop
/* 0047EEDC 90820023 */  lbu   $v0, 0x23($a0)
.L0047EEE0:
/* 0047EEE0 1000001F */  b     .L0047EF60
/* 0047EEE4 304300FF */   andi  $v1, $v0, 0xff
.L0047EEE8:
/* 0047EEE8 90AE0020 */  lbu   $t6, 0x20($a1)
/* 0047EEEC 24010033 */  li    $at, 51
/* 0047EEF0 15C10003 */  bne   $t6, $at, .L0047EF00
/* 0047EEF4 00000000 */   nop
/* 0047EEF8 10000019 */  b     .L0047EF60
/* 0047EEFC 24030001 */   li    $v1, 1
.L0047EF00:
/* 0047EF00 8F9986D8 */  lw    $t9, %call16(hasvolatile)($gp)
/* 0047EF04 8CA40024 */  lw    $a0, 0x24($a1)
/* 0047EF08 AFA50020 */  sw    $a1, 0x20($sp)
/* 0047EF0C 0320F809 */  jalr  $t9
/* 0047EF10 00000000 */   nop
/* 0047EF14 304400FF */  andi  $a0, $v0, 0xff
/* 0047EF18 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0047EF1C 1480000F */  bnez  $a0, .L0047EF5C
/* 0047EF20 8FA50020 */   lw    $a1, 0x20($sp)
/* 0047EF24 90AF0020 */  lbu   $t7, 0x20($a1)
/* 0047EF28 8F998DBC */  lw     $t9, %got(optab)($gp)
/* 0047EF2C 000FC080 */  sll   $t8, $t7, 2
/* 0047EF30 030FC023 */  subu  $t8, $t8, $t7
/* 0047EF34 03194021 */  addu  $t0, $t8, $t9
/* 0047EF38 91090002 */  lbu   $t1, 2($t0)
/* 0047EF3C 51200008 */  beql  $t1, $zero, .L0047EF60
/* 0047EF40 308300FF */   andi  $v1, $a0, 0xff
/* 0047EF44 8F9986D8 */  lw    $t9, %call16(hasvolatile)($gp)
/* 0047EF48 8CA40028 */  lw    $a0, 0x28($a1)
/* 0047EF4C 0320F809 */  jalr  $t9
/* 0047EF50 00000000 */   nop
/* 0047EF54 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0047EF58 304400FF */  andi  $a0, $v0, 0xff
.L0047EF5C:
/* 0047EF5C 308300FF */  andi  $v1, $a0, 0xff
.L0047EF60:
/* 0047EF60 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0047EF64 27BD0020 */  addiu $sp, $sp, 0x20
/* 0047EF68 00601025 */  move  $v0, $v1
/* 0047EF6C 03E00008 */  jr    $ra
/* 0047EF70 00000000 */   nop
    .type hasvolatile, @function
    .size hasvolatile, .-hasvolatile
    .end hasvolatile

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

glabel has_ilod
    .ent has_ilod
    # 0041550C func_0041550C
    # 0043ABD0 incroccurrence
    # 0043CFCC readnxtinst
    # 0047F0AC has_ilod
/* 0047F0AC 3C1C0FBA */  .cpload $t9
/* 0047F0B0 279CB1E4 */
/* 0047F0B4 0399E021 */
/* 0047F0B8 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0047F0BC AFBF001C */  sw    $ra, 0x1c($sp)
/* 0047F0C0 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0047F0C4 908E0000 */  lbu   $t6, ($a0)
/* 0047F0C8 24010004 */  li    $at, 4
/* 0047F0CC 00802825 */  move  $a1, $a0
/* 0047F0D0 51C10004 */  beql  $t6, $at, .L0047F0E4
/* 0047F0D4 90AF0020 */   lbu   $t7, 0x20($a1)
/* 0047F0D8 1000001F */  b     .L0047F158
/* 0047F0DC 00002025 */   move  $a0, $zero
/* 0047F0E0 90AF0020 */  lbu   $t7, 0x20($a1)
.L0047F0E4:
/* 0047F0E4 24010036 */  li    $at, 54
/* 0047F0E8 15E10003 */  bne   $t7, $at, .L0047F0F8
/* 0047F0EC 00000000 */   nop
/* 0047F0F0 10000019 */  b     .L0047F158
/* 0047F0F4 24040001 */   li    $a0, 1
.L0047F0F8:
/* 0047F0F8 8F9986E0 */  lw    $t9, %call16(has_ilod)($gp)
/* 0047F0FC 8CA40024 */  lw    $a0, 0x24($a1)
/* 0047F100 AFA50020 */  sw    $a1, 0x20($sp)
/* 0047F104 0320F809 */  jalr  $t9
/* 0047F108 00000000 */   nop
/* 0047F10C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0047F110 8FA50020 */  lw    $a1, 0x20($sp)
/* 0047F114 1440000F */  bnez  $v0, .L0047F154
/* 0047F118 00401825 */   move  $v1, $v0
/* 0047F11C 90B80020 */  lbu   $t8, 0x20($a1)
/* 0047F120 8F888DBC */  lw     $t0, %got(optab)($gp)
/* 0047F124 0018C880 */  sll   $t9, $t8, 2
/* 0047F128 0338C823 */  subu  $t9, $t9, $t8
/* 0047F12C 03284821 */  addu  $t1, $t9, $t0
/* 0047F130 91230002 */  lbu   $v1, 2($t1)
/* 0047F134 50600008 */  beql  $v1, $zero, .L0047F158
/* 0047F138 306400FF */   andi  $a0, $v1, 0xff
/* 0047F13C 8F9986E0 */  lw    $t9, %call16(has_ilod)($gp)
/* 0047F140 8CA40028 */  lw    $a0, 0x28($a1)
/* 0047F144 0320F809 */  jalr  $t9
/* 0047F148 00000000 */   nop
/* 0047F14C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0047F150 00401825 */  move  $v1, $v0
.L0047F154:
/* 0047F154 306400FF */  andi  $a0, $v1, 0xff
.L0047F158:
/* 0047F158 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0047F15C 27BD0020 */  addiu $sp, $sp, 0x20
/* 0047F160 00801025 */  move  $v0, $a0
/* 0047F164 03E00008 */  jr    $ra
/* 0047F168 00000000 */   nop
    .type has_ilod, @function
    .size has_ilod, .-has_ilod
    .end has_ilod

glabel is_incr
    .ent is_incr
    # 0041550C func_0041550C
/* 0047F16C 90830000 */  lbu   $v1, ($a0)
/* 0047F170 38630004 */  xori  $v1, $v1, 4
/* 0047F174 2C630001 */  sltiu $v1, $v1, 1
/* 0047F178 1060003A */  beqz  $v1, .L0047F264
/* 0047F17C 00000000 */   nop
/* 0047F180 908E0020 */  lbu   $t6, 0x20($a0)
/* 0047F184 2DCF0080 */  sltiu $t7, $t6, 0x80
/* 0047F188 11E00009 */  beqz  $t7, .L0047F1B0
/* 0047F18C 00000000 */   nop
/* 0047F190 8F888044 */  lw    $t0, %got(D_10011878)($gp)
/* 0047F194 000EC143 */  sra   $t8, $t6, 5
/* 0047F198 0018C880 */  sll   $t9, $t8, 2
/* 0047F19C 25081878 */  addiu $t0, %lo(D_10011878) # addiu $t0, $t0, 0x1878
/* 0047F1A0 01194821 */  addu  $t1, $t0, $t9
/* 0047F1A4 8D2A0000 */  lw    $t2, ($t1)
/* 0047F1A8 01CA5804 */  sllv  $t3, $t2, $t6
/* 0047F1AC 296F0000 */  slti  $t7, $t3, 0
.L0047F1B0:
/* 0047F1B0 11E0002C */  beqz  $t7, .L0047F264
/* 0047F1B4 01E01825 */   move  $v1, $t7
/* 0047F1B8 908D0001 */  lbu   $t5, 1($a0)
/* 0047F1BC 3C010780 */  lui   $at, 0x780
/* 0047F1C0 2DB80020 */  sltiu $t8, $t5, 0x20
/* 0047F1C4 00184023 */  negu  $t0, $t8
/* 0047F1C8 0101C824 */  and   $t9, $t0, $at
/* 0047F1CC 01B91804 */  sllv  $v1, $t9, $t5
/* 0047F1D0 28630000 */  slti  $v1, $v1, 0
/* 0047F1D4 10600023 */  beqz  $v1, .L0047F264
/* 0047F1D8 00000000 */   nop
/* 0047F1DC 8C820024 */  lw    $v0, 0x24($a0)
/* 0047F1E0 24060003 */  li    $a2, 3
/* 0047F1E4 90450000 */  lbu   $a1, ($v0)
/* 0047F1E8 00C51826 */  xor   $v1, $a2, $a1
/* 0047F1EC 2C630001 */  sltiu $v1, $v1, 1
/* 0047F1F0 1060000C */  beqz  $v1, .L0047F224
/* 0047F1F4 00000000 */   nop
/* 0047F1F8 9049002E */  lbu   $t1, 0x2e($v0)
/* 0047F1FC 24070002 */  li    $a3, 2
/* 0047F200 312A0007 */  andi  $t2, $t1, 7
/* 0047F204 00EA1826 */  xor   $v1, $a3, $t2
/* 0047F208 2C630001 */  sltiu $v1, $v1, 1
/* 0047F20C 10600005 */  beqz  $v1, .L0047F224
/* 0047F210 00000000 */   nop
/* 0047F214 8C8E0028 */  lw    $t6, 0x28($a0)
/* 0047F218 91CB0000 */  lbu   $t3, ($t6)
/* 0047F21C 00EB1826 */  xor   $v1, $a3, $t3
/* 0047F220 2C630001 */  sltiu $v1, $v1, 1
.L0047F224:
/* 0047F224 1460000F */  bnez  $v1, .L0047F264
/* 0047F228 24070002 */   li    $a3, 2
/* 0047F22C 8C820028 */  lw    $v0, 0x28($a0)
/* 0047F230 904C0000 */  lbu   $t4, ($v0)
/* 0047F234 00CC1826 */  xor   $v1, $a2, $t4
/* 0047F238 2C630001 */  sltiu $v1, $v1, 1
/* 0047F23C 10600009 */  beqz  $v1, .L0047F264
/* 0047F240 00000000 */   nop
/* 0047F244 904F002E */  lbu   $t7, 0x2e($v0)
/* 0047F248 31F80007 */  andi  $t8, $t7, 7
/* 0047F24C 00F81826 */  xor   $v1, $a3, $t8
/* 0047F250 2C630001 */  sltiu $v1, $v1, 1
/* 0047F254 10600003 */  beqz  $v1, .L0047F264
/* 0047F258 00000000 */   nop
/* 0047F25C 00E51826 */  xor   $v1, $a3, $a1
/* 0047F260 2C630001 */  sltiu $v1, $v1, 1
.L0047F264:
/* 0047F264 03E00008 */  jr    $ra
/* 0047F268 00601025 */   move  $v0, $v1
    .type is_incr, @function
    .size is_incr, .-is_incr
    .end is_incr

)"");

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
    int i;

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

__asm__(R""(
.set noat
.set noreorder

glabel trap_imply
    .ent trap_imply
    # 00410204 codemotion
    # 004324F4 findinduct
/* 0047F4C0 3C1C0FBA */  .cpload $t9
/* 0047F4C4 279CADD0 */
/* 0047F4C8 0399E021 */
/* 0047F4CC 90AE0000 */  lbu   $t6, ($a1)
/* 0047F4D0 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0047F4D4 24010004 */  li    $at, 4
/* 0047F4D8 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0047F4DC 11C10003 */  beq   $t6, $at, .L0047F4EC
/* 0047F4E0 AFBC0018 */   sw    $gp, 0x18($sp)
/* 0047F4E4 1000004A */  b     .L0047F610
/* 0047F4E8 00001025 */   move  $v0, $zero
.L0047F4EC:
/* 0047F4EC 90830010 */  lbu   $v1, 0x10($a0)
/* 0047F4F0 90AF0010 */  lbu   $t7, 0x10($a1)
/* 0047F4F4 146F0007 */  bne   $v1, $t7, .L0047F514
/* 0047F4F8 00000000 */   nop
/* 0047F4FC 8C980014 */  lw    $t8, 0x14($a0)
/* 0047F500 8CB90014 */  lw    $t9, 0x14($a1)
/* 0047F504 17190003 */  bne   $t8, $t9, .L0047F514
/* 0047F508 00000000 */   nop
/* 0047F50C 14A40003 */  bne   $a1, $a0, .L0047F51C
/* 0047F510 306200FF */   andi  $v0, $v1, 0xff
.L0047F514:
/* 0047F514 1000003E */  b     .L0047F610
/* 0047F518 00001025 */   move  $v0, $zero
.L0047F51C:
/* 0047F51C 2448FF7F */  addiu $t0, $v0, -0x81
/* 0047F520 2D010004 */  sltiu $at, $t0, 4
/* 0047F524 10200032 */  beqz  $at, .L0047F5F0
/* 0047F528 2407000A */   li    $a3, 10
/* 0047F52C 8F818044 */  lw    $at, %got(jtbl_1000E424)($gp)
/* 0047F530 00084080 */  sll   $t0, $t0, 2
/* 0047F534 00280821 */  addu  $at, $at, $t0
/* 0047F538 8C28E424 */  lw    $t0, %lo(jtbl_1000E424)($at)
/* 0047F53C 011C4021 */  addu  $t0, $t0, $gp
/* 0047F540 01000008 */  jr    $t0
/* 0047F544 00000000 */   nop
.L0047F548:
/* 0047F548 90820001 */  lbu   $v0, 1($a0)
/* 0047F54C 24010006 */  li    $at, 6
/* 0047F550 54410008 */  bnel  $v0, $at, .L0047F574
/* 0047F554 24010008 */   li    $at, 8
/* 0047F558 8C890018 */  lw    $t1, 0x18($a0)
/* 0047F55C 8CAB0018 */  lw    $t3, 0x18($a1)
/* 0047F560 8D2A0010 */  lw    $t2, 0x10($t1)
/* 0047F564 8D6C0010 */  lw    $t4, 0x10($t3)
/* 0047F568 10000029 */  b     .L0047F610
/* 0047F56C 014C102A */   slt   $v0, $t2, $t4
/* 0047F570 24010008 */  li    $at, 8
.L0047F574:
/* 0047F574 14410007 */  bne   $v0, $at, .L0047F594
/* 0047F578 00000000 */   nop
/* 0047F57C 8C8D0018 */  lw    $t5, 0x18($a0)
/* 0047F580 8CAF0018 */  lw    $t7, 0x18($a1)
/* 0047F584 8DAE0010 */  lw    $t6, 0x10($t5)
/* 0047F588 8DF80010 */  lw    $t8, 0x10($t7)
/* 0047F58C 10000020 */  b     .L0047F610
/* 0047F590 01D8102B */   sltu  $v0, $t6, $t8
.L0047F594:
/* 0047F594 1000001E */  b     .L0047F610
/* 0047F598 00001025 */   move  $v0, $zero
.L0047F59C:
/* 0047F59C 90820001 */  lbu   $v0, 1($a0)
/* 0047F5A0 24010006 */  li    $at, 6
/* 0047F5A4 54410008 */  bnel  $v0, $at, .L0047F5C8
/* 0047F5A8 24010008 */   li    $at, 8
/* 0047F5AC 8CB90018 */  lw    $t9, 0x18($a1)
/* 0047F5B0 8C890018 */  lw    $t1, 0x18($a0)
/* 0047F5B4 8F280010 */  lw    $t0, 0x10($t9)
/* 0047F5B8 8D2B0010 */  lw    $t3, 0x10($t1)
/* 0047F5BC 10000014 */  b     .L0047F610
/* 0047F5C0 010B102A */   slt   $v0, $t0, $t3
/* 0047F5C4 24010008 */  li    $at, 8
.L0047F5C8:
/* 0047F5C8 14410007 */  bne   $v0, $at, .L0047F5E8
/* 0047F5CC 00000000 */   nop
/* 0047F5D0 8CAA0018 */  lw    $t2, 0x18($a1)
/* 0047F5D4 8C8D0018 */  lw    $t5, 0x18($a0)
/* 0047F5D8 8D4C0010 */  lw    $t4, 0x10($t2)
/* 0047F5DC 8DAF0010 */  lw    $t7, 0x10($t5)
/* 0047F5E0 1000000B */  b     .L0047F610
/* 0047F5E4 018F102B */   sltu  $v0, $t4, $t7
.L0047F5E8:
/* 0047F5E8 10000009 */  b     .L0047F610
/* 0047F5EC 00001025 */   move  $v0, $zero
.L0047F5F0:
/* 0047F5F0 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 0047F5F4 8F868044 */  lw    $a2, %got(RO_1000E418)($gp)
/* 0047F5F8 24040001 */  li    $a0, 1
/* 0047F5FC 24050575 */  li    $a1, 1397
/* 0047F600 0320F809 */  jalr  $t9
/* 0047F604 24C6E418 */   addiu $a2, %lo(RO_1000E418) # addiu $a2, $a2, -0x1be8
/* 0047F608 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0047F60C 93A20027 */  lbu   $v0, 0x27($sp)
.L0047F610:
/* 0047F610 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0047F614 27BD0028 */  addiu $sp, $sp, 0x28
/* 0047F618 03E00008 */  jr    $ra
/* 0047F61C 00000000 */   nop
    .type trap_imply, @function
    .size trap_imply, .-trap_imply
    .end trap_imply

glabel trapstat_imply
    .ent trapstat_imply
    # 0043CFCC readnxtinst
    # 0046E77C oneloopblockstmt
/* 0047F620 3C1C0FBA */  .cpload $t9
/* 0047F624 279CAC70 */
/* 0047F628 0399E021 */
/* 0047F62C 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0047F630 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0047F634 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0047F638 8C8E0004 */  lw    $t6, 4($a0)
/* 0047F63C 00803825 */  move  $a3, $a0
/* 0047F640 50AE0004 */  beql  $a1, $t6, .L0047F654
/* 0047F644 8CE40014 */   lw    $a0, 0x14($a3)
/* 0047F648 10000075 */  b     .L0047F820
/* 0047F64C 00001025 */   move  $v0, $zero
/* 0047F650 8CE40014 */  lw    $a0, 0x14($a3)
.L0047F654:
/* 0047F654 54C40004 */  bnel  $a2, $a0, .L0047F668
/* 0047F658 90E50000 */   lbu   $a1, ($a3)
/* 0047F65C 10000070 */  b     .L0047F820
/* 0047F660 24020001 */   li    $v0, 1
/* 0047F664 90E50000 */  lbu   $a1, ($a3)
.L0047F668:
/* 0047F668 3C018400 */  lui   $at, 0x8400
/* 0047F66C 24AFFF80 */  addiu $t7, $a1, -0x80
/* 0047F670 2DF80020 */  sltiu $t8, $t7, 0x20
/* 0047F674 0018C823 */  negu  $t9, $t8
/* 0047F678 03214824 */  and   $t1, $t9, $at
/* 0047F67C 01E95004 */  sllv  $t2, $t1, $t7
/* 0047F680 05430004 */  bgezl $t2, .L0047F694
/* 0047F684 90820000 */   lbu   $v0, ($a0)
/* 0047F688 10000065 */  b     .L0047F820
/* 0047F68C 00001025 */   move  $v0, $zero
/* 0047F690 90820000 */  lbu   $v0, ($a0)
.L0047F694:
/* 0047F694 24080002 */  li    $t0, 2
/* 0047F698 15020004 */  bne   $t0, $v0, .L0047F6AC
/* 0047F69C 00000000 */   nop
/* 0047F6A0 90C30000 */  lbu   $v1, ($a2)
/* 0047F6A4 51030004 */  beql  $t0, $v1, .L0047F6B8
/* 0047F6A8 24080008 */   li    $t0, 8
.L0047F6AC:
/* 0047F6AC 1000005C */  b     .L0047F820
/* 0047F6B0 00001025 */   move  $v0, $zero
/* 0047F6B4 24080008 */  li    $t0, 8
.L0047F6B8:
/* 0047F6B8 15020003 */  bne   $t0, $v0, .L0047F6C8
/* 0047F6BC 00000000 */   nop
/* 0047F6C0 51030004 */  beql  $t0, $v1, .L0047F6D4
/* 0047F6C4 90E2002C */   lbu   $v0, 0x2c($a3)
.L0047F6C8:
/* 0047F6C8 10000055 */  b     .L0047F820
/* 0047F6CC 00001025 */   move  $v0, $zero
/* 0047F6D0 90E2002C */  lbu   $v0, 0x2c($a3)
.L0047F6D4:
/* 0047F6D4 24010006 */  li    $at, 6
/* 0047F6D8 14410027 */  bne   $v0, $at, .L0047F778
/* 0047F6DC 00000000 */   nop
/* 0047F6E0 30A200FF */  andi  $v0, $a1, 0xff
/* 0047F6E4 244BFF7F */  addiu $t3, $v0, -0x81
/* 0047F6E8 2D610004 */  sltiu $at, $t3, 4
/* 0047F6EC 1020001A */  beqz  $at, .L0047F758
/* 0047F6F0 2405058E */   li    $a1, 1422
/* 0047F6F4 8F818044 */  lw    $at, %got(jtbl_1000E448)($gp)
/* 0047F6F8 000B5880 */  sll   $t3, $t3, 2
/* 0047F6FC 002B0821 */  addu  $at, $at, $t3
/* 0047F700 8C2BE448 */  lw    $t3, %lo(jtbl_1000E448)($at)
/* 0047F704 017C5821 */  addu  $t3, $t3, $gp
/* 0047F708 01600008 */  jr    $t3
/* 0047F70C 00000000 */   nop
.L0047F710:
/* 0047F710 8C8C0020 */  lw    $t4, 0x20($a0)
/* 0047F714 8CCD0020 */  lw    $t5, 0x20($a2)
/* 0047F718 018D082A */  slt   $at, $t4, $t5
/* 0047F71C 10200003 */  beqz  $at, .L0047F72C
/* 0047F720 00000000 */   nop
/* 0047F724 1000003E */  b     .L0047F820
/* 0047F728 24020001 */   li    $v0, 1
.L0047F72C:
/* 0047F72C 1000003C */  b     .L0047F820
/* 0047F730 2402FFFF */   li    $v0, -1
.L0047F734:
/* 0047F734 8CCE0020 */  lw    $t6, 0x20($a2)
/* 0047F738 8C980020 */  lw    $t8, 0x20($a0)
/* 0047F73C 01D8082A */  slt   $at, $t6, $t8
/* 0047F740 10200003 */  beqz  $at, .L0047F750
/* 0047F744 00000000 */   nop
/* 0047F748 10000035 */  b     .L0047F820
/* 0047F74C 24020001 */   li    $v0, 1
.L0047F750:
/* 0047F750 10000033 */  b     .L0047F820
/* 0047F754 2402FFFF */   li    $v0, -1
.L0047F758:
/* 0047F758 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 0047F75C 8F868044 */  lw    $a2, %got(RO_1000E43E)($gp)
/* 0047F760 24040001 */  li    $a0, 1
/* 0047F764 2407000A */  li    $a3, 10
/* 0047F768 0320F809 */  jalr  $t9
/* 0047F76C 24C6E43E */   addiu $a2, %lo(RO_1000E43E) # addiu $a2, $a2, -0x1bc2
/* 0047F770 1000002A */  b     .L0047F81C
/* 0047F774 8FBC0018 */   lw    $gp, 0x18($sp)
.L0047F778:
/* 0047F778 15020026 */  bne   $t0, $v0, .L0047F814
/* 0047F77C 30A200FF */   andi  $v0, $a1, 0xff
/* 0047F780 2459FF7F */  addiu $t9, $v0, -0x81
/* 0047F784 2F210004 */  sltiu $at, $t9, 4
/* 0047F788 1020001A */  beqz  $at, .L0047F7F4
/* 0047F78C 24050595 */   li    $a1, 1429
/* 0047F790 8F818044 */  lw    $at, %got(jtbl_1000E458)($gp)
/* 0047F794 0019C880 */  sll   $t9, $t9, 2
/* 0047F798 00390821 */  addu  $at, $at, $t9
/* 0047F79C 8C39E458 */  lw    $t9, %lo(jtbl_1000E458)($at)
/* 0047F7A0 033CC821 */  addu  $t9, $t9, $gp
/* 0047F7A4 03200008 */  jr    $t9
/* 0047F7A8 00000000 */   nop
.L0047F7AC:
/* 0047F7AC 8C890020 */  lw    $t1, 0x20($a0)
/* 0047F7B0 8CCF0020 */  lw    $t7, 0x20($a2)
/* 0047F7B4 012F082B */  sltu  $at, $t1, $t7
/* 0047F7B8 10200003 */  beqz  $at, .L0047F7C8
/* 0047F7BC 00000000 */   nop
/* 0047F7C0 10000017 */  b     .L0047F820
/* 0047F7C4 24020001 */   li    $v0, 1
.L0047F7C8:
/* 0047F7C8 10000015 */  b     .L0047F820
/* 0047F7CC 2402FFFF */   li    $v0, -1
.L0047F7D0:
/* 0047F7D0 8CCA0020 */  lw    $t2, 0x20($a2)
/* 0047F7D4 8C8B0020 */  lw    $t3, 0x20($a0)
/* 0047F7D8 014B082B */  sltu  $at, $t2, $t3
/* 0047F7DC 10200003 */  beqz  $at, .L0047F7EC
/* 0047F7E0 00000000 */   nop
/* 0047F7E4 1000000E */  b     .L0047F820
/* 0047F7E8 24020001 */   li    $v0, 1
.L0047F7EC:
/* 0047F7EC 1000000C */  b     .L0047F820
/* 0047F7F0 2402FFFF */   li    $v0, -1
.L0047F7F4:
/* 0047F7F4 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 0047F7F8 8F868044 */  lw    $a2, %got(RO_1000E434)($gp)
/* 0047F7FC 24040001 */  li    $a0, 1
/* 0047F800 2407000A */  li    $a3, 10
/* 0047F804 0320F809 */  jalr  $t9
/* 0047F808 24C6E434 */   addiu $a2, %lo(RO_1000E434) # addiu $a2, $a2, -0x1bcc
/* 0047F80C 10000003 */  b     .L0047F81C
/* 0047F810 8FBC0018 */   lw    $gp, 0x18($sp)
.L0047F814:
/* 0047F814 10000002 */  b     .L0047F820
/* 0047F818 00001025 */   move  $v0, $zero
.L0047F81C:
/* 0047F81C 8FA20024 */  lw    $v0, 0x24($sp)
.L0047F820:
/* 0047F820 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0047F824 27BD0028 */  addiu $sp, $sp, 0x28
/* 0047F828 03E00008 */  jr    $ra
/* 0047F82C 00000000 */   nop
    .type trapstat_imply, @function
    .size trapstat_imply, .-trapstat_imply
    .end trapstat_imply

)"");

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


__asm__(R""(
.set noat
.set noreorder

glabel getfloatval
    .ent getfloatval
    # 00414108 func_00414108
    # 0043CFCC readnxtinst
/* 0047F8E4 3C1C0FBA */  .cpload $t9
/* 0047F8E8 279CA9AC */
/* 0047F8EC 0399E021 */
/* 0047F8F0 94830020 */  lhu   $v1, 0x20($a0)
/* 0047F8F4 8F828988 */  lw     $v0, %got(realstore)($gp)
/* 0047F8F8 27BDFFA8 */  addiu $sp, $sp, -0x58
/* 0047F8FC AFB2000C */  sw    $s2, 0xc($sp)
/* 0047F900 AFB10008 */  sw    $s1, 8($sp)
/* 0047F904 AFB00004 */  sw    $s0, 4($sp)
/* 0047F908 00A03025 */  move  $a2, $a1
/* 0047F90C 04610003 */  bgez  $v1, .L0047F91C
/* 0047F910 00033A03 */   sra   $a3, $v1, 8
/* 0047F914 246100FF */  addiu $at, $v1, 0xff
/* 0047F918 00013A03 */  sra   $a3, $at, 8
.L0047F91C:
/* 0047F91C 306900FF */  andi  $t1, $v1, 0xff
/* 0047F920 18E00012 */  blez  $a3, .L0047F96C
/* 0047F924 8C420000 */   lw    $v0, ($v0)
/* 0047F928 24E40001 */  addiu $a0, $a3, 1
/* 0047F92C 2487FFFF */  addiu $a3, $a0, -1
/* 0047F930 30E70003 */  andi  $a3, $a3, 3
/* 0047F934 10E00007 */  beqz  $a3, .L0047F954
/* 0047F938 24030001 */   li    $v1, 1
/* 0047F93C 24E50001 */  addiu $a1, $a3, 1
.L0047F940:
/* 0047F940 24630001 */  addiu $v1, $v1, 1
/* 0047F944 14A3FFFE */  bne   $a1, $v1, .L0047F940
/* 0047F948 8C420100 */   lw    $v0, 0x100($v0)
/* 0047F94C 50640008 */  beql  $v1, $a0, .L0047F970
/* 0047F950 00495821 */   addu  $t3, $v0, $t1
.L0047F954:
/* 0047F954 8C420100 */  lw    $v0, 0x100($v0)
/* 0047F958 24630004 */  addiu $v1, $v1, 4
/* 0047F95C 8C420100 */  lw    $v0, 0x100($v0)
/* 0047F960 8C420100 */  lw    $v0, 0x100($v0)
/* 0047F964 1464FFFB */  bne   $v1, $a0, .L0047F954
/* 0047F968 8C420100 */   lw    $v0, 0x100($v0)
.L0047F96C:
/* 0047F96C 00495821 */  addu  $t3, $v0, $t1
.L0047F970:
/* 0047F970 916C0000 */  lbu   $t4, ($t3)
/* 0047F974 2408002D */  li    $t0, 45
/* 0047F978 00002825 */  move  $a1, $zero
/* 0047F97C 010C6826 */  xor   $t5, $t0, $t4
/* 0047F980 2DAD0001 */  sltiu $t5, $t5, 1
/* 0047F984 00005025 */  move  $t2, $zero
/* 0047F988 00002025 */  move  $a0, $zero
/* 0047F98C 24030001 */  li    $v1, 1
/* 0047F990 15A00004 */  bnez  $t5, .L0047F9A4
/* 0047F994 00003825 */   move  $a3, $zero
/* 0047F998 2401002B */  li    $at, 43
/* 0047F99C 55810004 */  bnel  $t4, $at, .L0047F9B0
/* 0047F9A0 01636821 */   addu  $t5, $t3, $v1
.L0047F9A4:
/* 0047F9A4 31A700FF */  andi  $a3, $t5, 0xff
/* 0047F9A8 24030002 */  li    $v1, 2
/* 0047F9AC 01636821 */  addu  $t5, $t3, $v1
.L0047F9B0:
/* 0047F9B0 91B0FFFF */  lbu   $s0, -1($t5)
/* 0047F9B4 24090065 */  li    $t1, 101
/* 0047F9B8 11300020 */  beq   $t1, $s0, .L0047FA3C
/* 0047F9BC 00000000 */   nop
/* 0047F9C0 8F8B8DA4 */  lw     $t3, %got(u)($gp)
/* 0047F9C4 3C1105F5 */  lui   $s1, 0x5f5
/* 0047F9C8 3631E100 */  ori   $s1, $s1, 0xe100
/* 0047F9CC 8D6B0010 */  lw    $t3, 0x10($t3)
/* 0047F9D0 2412000A */  li    $s2, 10
/* 0047F9D4 256B0001 */  addiu $t3, $t3, 1
/* 0047F9D8 106B0018 */  beq   $v1, $t3, .L0047FA3C
/* 0047F9DC 00000000 */   nop
/* 0047F9E0 240C002E */  li    $t4, 46
.L0047F9E4:
/* 0047F9E4 1190000D */  beq   $t4, $s0, .L0047FA1C
/* 0047F9E8 0091082A */   slt   $at, $a0, $s1
/* 0047F9EC 14200004 */  bnez  $at, .L0047FA00
/* 0047F9F0 00000000 */   nop
/* 0047F9F4 3C027FFF */  lui   $v0, 0x7fff
/* 0047F9F8 10000074 */  b     .L0047FBCC
/* 0047F9FC 3442FFFF */   ori   $v0, $v0, 0xffff
.L0047FA00:
/* 0047FA00 00920019 */  multu $a0, $s2
/* 0047FA04 00007012 */  mflo  $t6
/* 0047FA08 01D02021 */  addu  $a0, $t6, $s0
/* 0047FA0C 11400004 */  beqz  $t2, .L0047FA20
/* 0047FA10 2484FFD0 */   addiu $a0, $a0, -0x30
/* 0047FA14 10000002 */  b     .L0047FA20
/* 0047FA18 24A50001 */   addiu $a1, $a1, 1
.L0047FA1C:
/* 0047FA1C 240A0001 */  li    $t2, 1
.L0047FA20:
/* 0047FA20 91B00000 */  lbu   $s0, ($t5)
/* 0047FA24 24630001 */  addiu $v1, $v1, 1
/* 0047FA28 25AD0001 */  addiu $t5, $t5, 1
/* 0047FA2C 11300003 */  beq   $t1, $s0, .L0047FA3C
/* 0047FA30 00000000 */   nop
/* 0047FA34 146BFFEB */  bne   $v1, $t3, .L0047F9E4
/* 0047FA38 00000000 */   nop
.L0047FA3C:
/* 0047FA3C 8F898DA4 */  lw     $t1, %got(u)($gp)
/* 0047FA40 3C1105F5 */  lui   $s1, 0x5f5
/* 0047FA44 3631E100 */  ori   $s1, $s1, 0xe100
/* 0047FA48 8D290010 */  lw    $t1, 0x10($t1)
/* 0047FA4C 2412000A */  li    $s2, 10
/* 0047FA50 0123082A */  slt   $at, $t1, $v1
/* 0047FA54 5420002C */  bnezl $at, .L0047FB08
/* 0047FA58 00057023 */   negu  $t6, $a1
/* 0047FA5C 91B00000 */  lbu   $s0, ($t5)
/* 0047FA60 24630001 */  addiu $v1, $v1, 1
/* 0047FA64 25AD0001 */  addiu $t5, $t5, 1
/* 0047FA68 01107826 */  xor   $t7, $t0, $s0
/* 0047FA6C 2DEF0001 */  sltiu $t7, $t7, 1
/* 0047FA70 00005025 */  move  $t2, $zero
/* 0047FA74 00006025 */  move  $t4, $zero
/* 0047FA78 AFAF0014 */  sw    $t7, 0x14($sp)
/* 0047FA7C 01E0C025 */  move  $t8, $t7
/* 0047FA80 15E00004 */  bnez  $t7, .L0047FA94
/* 0047FA84 252B0001 */   addiu $t3, $t1, 1
/* 0047FA88 2401002B */  li    $at, 43
/* 0047FA8C 16010004 */  bne   $s0, $at, .L0047FAA0
/* 0047FA90 00000000 */   nop
.L0047FA94:
/* 0047FA94 93AC0017 */  lbu   $t4, 0x17($sp)
/* 0047FA98 24630001 */  addiu $v1, $v1, 1
/* 0047FA9C 25AD0001 */  addiu $t5, $t5, 1
.L0047FAA0:
/* 0047FAA0 106B000F */  beq   $v1, $t3, .L0047FAE0
/* 0047FAA4 00000000 */   nop
.L0047FAA8:
/* 0047FAA8 0151082A */  slt   $at, $t2, $s1
/* 0047FAAC 14200004 */  bnez  $at, .L0047FAC0
/* 0047FAB0 00000000 */   nop
/* 0047FAB4 3C027FFF */  lui   $v0, 0x7fff
/* 0047FAB8 10000044 */  b     .L0047FBCC
/* 0047FABC 3442FFFF */   ori   $v0, $v0, 0xffff
.L0047FAC0:
/* 0047FAC0 01520019 */  multu $t2, $s2
/* 0047FAC4 91AEFFFF */  lbu   $t6, -1($t5)
/* 0047FAC8 24630001 */  addiu $v1, $v1, 1
/* 0047FACC 25AD0001 */  addiu $t5, $t5, 1
/* 0047FAD0 0000C812 */  mflo  $t9
/* 0047FAD4 032E5021 */  addu  $t2, $t9, $t6
/* 0047FAD8 146BFFF3 */  bne   $v1, $t3, .L0047FAA8
/* 0047FADC 254AFFD0 */   addiu $t2, $t2, -0x30
.L0047FAE0:
/* 0047FAE0 51800006 */  beql  $t4, $zero, .L0047FAFC
/* 0047FAE4 0145C823 */   subu  $t9, $t2, $a1
/* 0047FAE8 00057823 */  negu  $t7, $a1
/* 0047FAEC 01EAC023 */  subu  $t8, $t7, $t2
/* 0047FAF0 10000006 */  b     .L0047FB0C
/* 0047FAF4 ACD80000 */   sw    $t8, ($a2)
/* 0047FAF8 0145C823 */  subu  $t9, $t2, $a1
.L0047FAFC:
/* 0047FAFC 10000003 */  b     .L0047FB0C
/* 0047FB00 ACD90000 */   sw    $t9, ($a2)
/* 0047FB04 00057023 */  negu  $t6, $a1
.L0047FB08:
/* 0047FB08 ACCE0000 */  sw    $t6, ($a2)
.L0047FB0C:
/* 0047FB0C 1080002A */  beqz  $a0, .L0047FBB8
/* 0047FB10 00000000 */   nop
/* 0047FB14 0092001A */  div   $zero, $a0, $s2
/* 0047FB18 00007810 */  mfhi  $t7
/* 0047FB1C 16400002 */  bnez  $s2, .L0047FB28
/* 0047FB20 00000000 */   nop
/* 0047FB24 0007000D */  break 7
.L0047FB28:
/* 0047FB28 2401FFFF */  li    $at, -1
/* 0047FB2C 16410004 */  bne   $s2, $at, .L0047FB40
/* 0047FB30 3C018000 */   lui   $at, 0x8000
/* 0047FB34 14810002 */  bne   $a0, $at, .L0047FB40
/* 0047FB38 00000000 */   nop
/* 0047FB3C 0006000D */  break 6
.L0047FB40:
/* 0047FB40 15E0001D */  bnez  $t7, .L0047FBB8
/* 0047FB44 00000000 */   nop
.L0047FB48:
/* 0047FB48 0092001A */  div   $zero, $a0, $s2
/* 0047FB4C 16400002 */  bnez  $s2, .L0047FB58
/* 0047FB50 00000000 */   nop
/* 0047FB54 0007000D */  break 7
.L0047FB58:
/* 0047FB58 2401FFFF */  li    $at, -1
/* 0047FB5C 16410004 */  bne   $s2, $at, .L0047FB70
/* 0047FB60 3C018000 */   lui   $at, 0x8000
/* 0047FB64 14810002 */  bne   $a0, $at, .L0047FB70
/* 0047FB68 00000000 */   nop
/* 0047FB6C 0006000D */  break 6
.L0047FB70:
/* 0047FB70 00002012 */  mflo  $a0
/* 0047FB74 8CD80000 */  lw    $t8, ($a2)
/* 0047FB78 00000000 */  nop
/* 0047FB7C 0092001A */  div   $zero, $a0, $s2
/* 0047FB80 00007010 */  mfhi  $t6
/* 0047FB84 27190001 */  addiu $t9, $t8, 1
/* 0047FB88 ACD90000 */  sw    $t9, ($a2)
/* 0047FB8C 16400002 */  bnez  $s2, .L0047FB98
/* 0047FB90 00000000 */   nop
/* 0047FB94 0007000D */  break 7
.L0047FB98:
/* 0047FB98 2401FFFF */  li    $at, -1
/* 0047FB9C 16410004 */  bne   $s2, $at, .L0047FBB0
/* 0047FBA0 3C018000 */   lui   $at, 0x8000
/* 0047FBA4 14810002 */  bne   $a0, $at, .L0047FBB0
/* 0047FBA8 00000000 */   nop
/* 0047FBAC 0006000D */  break 6
.L0047FBB0:
/* 0047FBB0 11C0FFE5 */  beqz  $t6, .L0047FB48
/* 0047FBB4 00000000 */   nop
.L0047FBB8:
/* 0047FBB8 10E00003 */  beqz  $a3, .L0047FBC8
/* 0047FBBC 00801825 */   move  $v1, $a0
/* 0047FBC0 10000001 */  b     .L0047FBC8
/* 0047FBC4 00041823 */   negu  $v1, $a0
.L0047FBC8:
/* 0047FBC8 00601025 */  move  $v0, $v1
.L0047FBCC:
/* 0047FBCC 8FB00004 */  lw    $s0, 4($sp)
/* 0047FBD0 8FB10008 */  lw    $s1, 8($sp)
/* 0047FBD4 8FB2000C */  lw    $s2, 0xc($sp)
/* 0047FBD8 03E00008 */  jr    $ra
/* 0047FBDC 27BD0058 */   addiu $sp, $sp, 0x58
    .type getfloatval, @function
    .size getfloatval, .-getfloatval
    .end getfloatval

glabel val_when_exponent0
    .ent val_when_exponent0
    # 0043CFCC readnxtinst
/* 0047FBE0 3C1C0FBA */  .cpload $t9
/* 0047FBE4 279CA6B0 */
/* 0047FBE8 0399E021 */
/* 0047FBEC 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0047FBF0 3C067FFF */  lui   $a2, 0x7fff
/* 0047FBF4 34C6FFFF */  ori   $a2, $a2, 0xffff
/* 0047FBF8 AFB2001C */  sw    $s2, 0x1c($sp)
/* 0047FBFC AFB10018 */  sw    $s1, 0x18($sp)
/* 0047FC00 00A08825 */  move  $s1, $a1
/* 0047FC04 00809025 */  move  $s2, $a0
/* 0047FC08 AFBF0024 */  sw    $ra, 0x24($sp)
/* 0047FC0C AFBC0020 */  sw    $gp, 0x20($sp)
/* 0047FC10 10860006 */  beq   $a0, $a2, .L0047FC2C
/* 0047FC14 AFB00014 */   sw    $s0, 0x14($sp)
/* 0047FC18 28A1FFF7 */  slti  $at, $a1, -9
/* 0047FC1C 14200003 */  bnez  $at, .L0047FC2C
/* 0047FC20 28A1000A */   slti  $at, $a1, 0xa
/* 0047FC24 14200003 */  bnez  $at, .L0047FC34
/* 0047FC28 00000000 */   nop
.L0047FC2C:
/* 0047FC2C 10000053 */  b     .L0047FD7C
/* 0047FC30 00C01025 */   move  $v0, $a2
.L0047FC34:
/* 0047FC34 16200003 */  bnez  $s1, .L0047FC44
/* 0047FC38 00000000 */   nop
/* 0047FC3C 1000004F */  b     .L0047FD7C
/* 0047FC40 02401025 */   move  $v0, $s2
.L0047FC44:
/* 0047FC44 0621003D */  bgez  $s1, .L0047FD3C
/* 0047FC48 2410000A */   li    $s0, 10
/* 0047FC4C 00112023 */  negu  $a0, $s1
/* 0047FC50 30840003 */  andi  $a0, $a0, 3
/* 0047FC54 24030001 */  li    $v1, 1
/* 0047FC58 1080000A */  beqz  $a0, .L0047FC84
/* 0047FC5C 00801025 */   move  $v0, $a0
/* 0047FC60 00911021 */  addu  $v0, $a0, $s1
/* 0047FC64 2410000A */  li    $s0, 10
.L0047FC68:
/* 0047FC68 00700019 */  multu $v1, $s0
/* 0047FC6C 26310001 */  addiu $s1, $s1, 1
/* 0047FC70 00001812 */  mflo  $v1
/* 0047FC74 1451FFFC */  bne   $v0, $s1, .L0047FC68
/* 0047FC78 00000000 */   nop
/* 0047FC7C 12200013 */  beqz  $s1, .L0047FCCC
/* 0047FC80 00000000 */   nop
.L0047FC84:
/* 0047FC84 2410000A */  li    $s0, 10
.L0047FC88:
/* 0047FC88 00700019 */  multu $v1, $s0
/* 0047FC8C 26310004 */  addiu $s1, $s1, 4
/* 0047FC90 00001812 */  mflo  $v1
/* 0047FC94 00000000 */  nop
/* 0047FC98 00000000 */  nop
/* 0047FC9C 00700019 */  multu $v1, $s0
/* 0047FCA0 00001812 */  mflo  $v1
/* 0047FCA4 00000000 */  nop
/* 0047FCA8 00000000 */  nop
/* 0047FCAC 00700019 */  multu $v1, $s0
/* 0047FCB0 00001812 */  mflo  $v1
/* 0047FCB4 00000000 */  nop
/* 0047FCB8 00000000 */  nop
/* 0047FCBC 00700019 */  multu $v1, $s0
/* 0047FCC0 00001812 */  mflo  $v1
/* 0047FCC4 1620FFF0 */  bnez  $s1, .L0047FC88
/* 0047FCC8 00000000 */   nop
.L0047FCCC:
/* 0047FCCC 0243001A */  div   $zero, $s2, $v1
/* 0047FCD0 00007010 */  mfhi  $t6
/* 0047FCD4 14600002 */  bnez  $v1, .L0047FCE0
/* 0047FCD8 00000000 */   nop
/* 0047FCDC 0007000D */  break 7
.L0047FCE0:
/* 0047FCE0 2401FFFF */  li    $at, -1
/* 0047FCE4 14610004 */  bne   $v1, $at, .L0047FCF8
/* 0047FCE8 3C018000 */   lui   $at, 0x8000
/* 0047FCEC 16410002 */  bne   $s2, $at, .L0047FCF8
/* 0047FCF0 00000000 */   nop
/* 0047FCF4 0006000D */  break 6
.L0047FCF8:
/* 0047FCF8 11C00003 */  beqz  $t6, .L0047FD08
/* 0047FCFC 00000000 */   nop
/* 0047FD00 1000001E */  b     .L0047FD7C
/* 0047FD04 00C01025 */   move  $v0, $a2
.L0047FD08:
/* 0047FD08 0243001A */  div   $zero, $s2, $v1
/* 0047FD0C 00001012 */  mflo  $v0
/* 0047FD10 14600002 */  bnez  $v1, .L0047FD1C
/* 0047FD14 00000000 */   nop
/* 0047FD18 0007000D */  break 7
.L0047FD1C:
/* 0047FD1C 2401FFFF */  li    $at, -1
/* 0047FD20 14610004 */  bne   $v1, $at, .L0047FD34
/* 0047FD24 3C018000 */   lui   $at, 0x8000
/* 0047FD28 16410002 */  bne   $s2, $at, .L0047FD34
/* 0047FD2C 00000000 */   nop
/* 0047FD30 0006000D */  break 6
.L0047FD34:
/* 0047FD34 10000012 */  b     .L0047FD80
/* 0047FD38 8FBF0024 */   lw    $ra, 0x24($sp)
.L0047FD3C:
/* 0047FD3C 8F998678 */  lw    $t9, %call16(mpyovfw_signed)($gp)
/* 0047FD40 02402025 */  move  $a0, $s2
/* 0047FD44 02002825 */  move  $a1, $s0
/* 0047FD48 0320F809 */  jalr  $t9
/* 0047FD4C 00000000 */   nop
/* 0047FD50 10400004 */  beqz  $v0, .L0047FD64
/* 0047FD54 8FBC0020 */   lw    $gp, 0x20($sp)
/* 0047FD58 3C027FFF */  lui   $v0, 0x7fff
/* 0047FD5C 10000007 */  b     .L0047FD7C
/* 0047FD60 3442FFFF */   ori   $v0, $v0, 0xffff
.L0047FD64:
/* 0047FD64 02500019 */  multu $s2, $s0
/* 0047FD68 2631FFFF */  addiu $s1, $s1, -1
/* 0047FD6C 00009012 */  mflo  $s2
/* 0047FD70 1620FFF2 */  bnez  $s1, .L0047FD3C
/* 0047FD74 00000000 */   nop
/* 0047FD78 02401025 */  move  $v0, $s2
.L0047FD7C:
/* 0047FD7C 8FBF0024 */  lw    $ra, 0x24($sp)
.L0047FD80:
/* 0047FD80 8FB00014 */  lw    $s0, 0x14($sp)
/* 0047FD84 8FB10018 */  lw    $s1, 0x18($sp)
/* 0047FD88 8FB2001C */  lw    $s2, 0x1c($sp)
/* 0047FD8C 03E00008 */  jr    $ra
/* 0047FD90 27BD0028 */   addiu $sp, $sp, 0x28
    .type val_when_exponent0, @function
    .size val_when_exponent0, .-val_when_exponent0
    .end val_when_exponent0

glabel coloroffset
    .ent coloroffset
    # 0041F048 genrop
    # 0041F6F0 base_in_reg
    # 0042020C gen_static_link
    # 004205F8 genrlodrstr
    # 00420A3C prolog
    # 00421C00 epilog
    # 00422AF0 func_00422AF0
    # 0042A1C8 func_0042A1C8
    # 0042A4CC func_0042A4CC
    # 0042A7D0 func_0042A7D0
    # 0042BF08 reemit
    # 00469280 globalcolor
    # 0047FDB4 in_reg_masks
/* 0047FD94 3C1C0FBA */  .cpload $t9
/* 0047FD98 279CA4FC */
/* 0047FD9C 0399E021 */
/* 0047FDA0 8F8E88F0 */  lw     $t6, %got(coloroffsettable)($gp)
/* 0047FDA4 25CEFFFF */  addiu $t6, $t6, -1
/* 0047FDA8 008E7821 */  addu  $t7, $a0, $t6
/* 0047FDAC 03E00008 */  jr    $ra
/* 0047FDB0 91E20000 */   lbu   $v0, ($t7)
    .type coloroffset, @function
    .size coloroffset, .-coloroffset
    .end coloroffset

glabel in_reg_masks
    .ent in_reg_masks
    # 00468A14 cupcosts
    # 00469280 globalcolor
/* 0047FDB4 3C1C0FBA */  .cpload $t9
/* 0047FDB8 279CA4DC */
/* 0047FDBC 0399E021 */
/* 0047FDC0 8F998708 */  lw    $t9, %call16(coloroffset)($gp)
/* 0047FDC4 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0047FDC8 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0047FDCC AFBC0018 */  sw    $gp, 0x18($sp)
/* 0047FDD0 AFA50024 */  sw    $a1, 0x24($sp)
/* 0047FDD4 0320F809 */  jalr  $t9
/* 0047FDD8 AFA60028 */   sw    $a2, 0x28($sp)
/* 0047FDDC 00021883 */  sra   $v1, $v0, 2
/* 0047FDE0 28610020 */  slti  $at, $v1, 0x20
/* 0047FDE4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0047FDE8 10200005 */  beqz  $at, .L0047FE00
/* 0047FDEC 00602025 */   move  $a0, $v1
/* 0047FDF0 8FAE0024 */  lw    $t6, 0x24($sp)
/* 0047FDF4 006E1004 */  sllv  $v0, $t6, $v1
/* 0047FDF8 10000004 */  b     .L0047FE0C
/* 0047FDFC 28420000 */   slti  $v0, $v0, 0
.L0047FE00:
/* 0047FE00 8FAF0028 */  lw    $t7, 0x28($sp)
/* 0047FE04 008F1004 */  sllv  $v0, $t7, $a0
/* 0047FE08 28420000 */  slti  $v0, $v0, 0
.L0047FE0C:
/* 0047FE0C 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0047FE10 27BD0020 */  addiu $sp, $sp, 0x20
/* 0047FE14 03E00008 */  jr    $ra
/* 0047FE18 00000000 */   nop
    .type in_reg_masks, @function
    .size in_reg_masks, .-in_reg_masks
    .end in_reg_masks

    .type func_0047FE1C, @function
func_0047FE1C:
    # 0047FF7C skipproc
/* 0047FE1C 3C1C0FBA */  .cpload $t9
/* 0047FE20 279CA474 */
/* 0047FE24 0399E021 */
/* 0047FE28 8F848DA8 */  lw     $a0, %got(lastcopiedu)($gp)
/* 0047FE2C 8F858DA4 */  lw     $a1, %got(u)($gp)
/* 0047FE30 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0047FE34 908E0000 */  lbu   $t6, ($a0)
/* 0047FE38 90A30000 */  lbu   $v1, ($a1)
/* 0047FE3C AFBF001C */  sw    $ra, 0x1c($sp)
/* 0047FE40 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0047FE44 11C30003 */  beq   $t6, $v1, .L0047FE54
/* 0047FE48 00000000 */   nop
/* 0047FE4C 10000046 */  b     .L0047FF68
/* 0047FE50 A3A00023 */   sb    $zero, 0x23($sp)
.L0047FE54:
/* 0047FE54 1000001F */  b     .L0047FED4
/* 0047FE58 306200FF */   andi  $v0, $v1, 0xff
.L0047FE5C:
/* 0047FE5C 8C8F0004 */  lw    $t7, 4($a0)
.L0047FE60:
/* 0047FE60 8CB80004 */  lw    $t8, 4($a1)
/* 0047FE64 01F8C826 */  xor   $t9, $t7, $t8
/* 0047FE68 2F390001 */  sltiu $t9, $t9, 1
/* 0047FE6C 1000003E */  b     .L0047FF68
/* 0047FE70 A3B90023 */   sb    $t9, 0x23($sp)
/* 0047FE74 8C880004 */  lw    $t0, 4($a0)
.L0047FE78:
/* 0047FE78 8CA90004 */  lw    $t1, 4($a1)
/* 0047FE7C 01091026 */  xor   $v0, $t0, $t1
/* 0047FE80 2C420001 */  sltiu $v0, $v0, 1
/* 0047FE84 10400005 */  beqz  $v0, .L0047FE9C
/* 0047FE88 00000000 */   nop
/* 0047FE8C 8C8A0008 */  lw    $t2, 8($a0)
/* 0047FE90 8CAB0008 */  lw    $t3, 8($a1)
/* 0047FE94 014B1026 */  xor   $v0, $t2, $t3
/* 0047FE98 2C420001 */  sltiu $v0, $v0, 1
.L0047FE9C:
/* 0047FE9C 10000032 */  b     .L0047FF68
/* 0047FEA0 A3A20023 */   sb    $v0, 0x23($sp)
/* 0047FEA4 8C8C0004 */  lw    $t4, 4($a0)
.L0047FEA8:
/* 0047FEA8 8CAD0004 */  lw    $t5, 4($a1)
/* 0047FEAC 018D1026 */  xor   $v0, $t4, $t5
/* 0047FEB0 2C420001 */  sltiu $v0, $v0, 1
/* 0047FEB4 10400005 */  beqz  $v0, .L0047FECC
/* 0047FEB8 00000000 */   nop
/* 0047FEBC 8C8E000C */  lw    $t6, 0xc($a0)
/* 0047FEC0 8CAF000C */  lw    $t7, 0xc($a1)
/* 0047FEC4 01CF1026 */  xor   $v0, $t6, $t7
/* 0047FEC8 2C420001 */  sltiu $v0, $v0, 1
.L0047FECC:
/* 0047FECC 10000026 */  b     .L0047FF68
/* 0047FED0 A3A20023 */   sb    $v0, 0x23($sp)
.L0047FED4:
/* 0047FED4 2C410054 */  sltiu $at, $v0, 0x54
/* 0047FED8 14200008 */  bnez  $at, .L0047FEFC
/* 0047FEDC 24010071 */   li    $at, 113
/* 0047FEE0 5041FFE5 */  beql  $v0, $at, .L0047FE78
/* 0047FEE4 8C880004 */   lw    $t0, 4($a0)
/* 0047FEE8 2401008B */  li    $at, 139
/* 0047FEEC 5041FFEE */  beql  $v0, $at, .L0047FEA8
/* 0047FEF0 8C8C0004 */   lw    $t4, 4($a0)
/* 0047FEF4 10000014 */  b     .L0047FF48
/* 0047FEF8 00000000 */   nop
.L0047FEFC:
/* 0047FEFC 24010014 */  li    $at, 20
/* 0047FF00 5041FFD7 */  beql  $v0, $at, .L0047FE60
/* 0047FF04 8C8F0004 */   lw    $t7, 4($a0)
/* 0047FF08 2C41002B */  sltiu $at, $v0, 0x2b
/* 0047FF0C 1020000B */  beqz  $at, .L0047FF3C
/* 0047FF10 2458FFDC */   addiu $t8, $v0, -0x24
/* 0047FF14 2F010007 */  sltiu $at, $t8, 7
/* 0047FF18 1020000B */  beqz  $at, .L0047FF48
/* 0047FF1C 00000000 */   nop
/* 0047FF20 8F818044 */  lw    $at, %got(jtbl_1000E474)($gp)
/* 0047FF24 0018C080 */  sll   $t8, $t8, 2
/* 0047FF28 00380821 */  addu  $at, $at, $t8
/* 0047FF2C 8C38E474 */  lw    $t8, %lo(jtbl_1000E474)($at)
/* 0047FF30 031CC021 */  addu  $t8, $t8, $gp
/* 0047FF34 03000008 */  jr    $t8
/* 0047FF38 00000000 */   nop
.L0047FF3C:
/* 0047FF3C 24010053 */  li    $at, 83
/* 0047FF40 5041FFC7 */  beql  $v0, $at, .L0047FE60
/* 0047FF44 8C8F0004 */   lw    $t7, 4($a0)
.L0047FF48:
/* 0047FF48 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 0047FF4C 8F868044 */  lw    $a2, %got(RO_1000E468)($gp)
/* 0047FF50 24040001 */  li    $a0, 1
/* 0047FF54 24050653 */  li    $a1, 1619
/* 0047FF58 2407000A */  li    $a3, 10
/* 0047FF5C 0320F809 */  jalr  $t9
/* 0047FF60 24C6E468 */   addiu $a2, %lo(RO_1000E468) # addiu $a2, $a2, -0x1b98
/* 0047FF64 8FBC0018 */  lw    $gp, 0x18($sp)
.L0047FF68:
/* 0047FF68 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0047FF6C 93A20023 */  lbu   $v0, 0x23($sp)
/* 0047FF70 27BD0028 */  addiu $sp, $sp, 0x28
/* 0047FF74 03E00008 */  jr    $ra
/* 0047FF78 00000000 */   nop

glabel skipproc
    .ent skipproc
    # 00456A2C oneproc
/* 0047FF7C 3C1C0FBA */  .cpload $t9
/* 0047FF80 279CA314 */
/* 0047FF84 0399E021 */
/* 0047FF88 8F8E8B58 */  lw     $t6, %got(warn_flag)($gp)
/* 0047FF8C 27BDFFC0 */  addiu $sp, $sp, -0x40
/* 0047FF90 AFB30020 */  sw    $s3, 0x20($sp)
/* 0047FF94 91CE0000 */  lbu   $t6, ($t6)
/* 0047FF98 24130001 */  li    $s3, 1
/* 0047FF9C AFB2001C */  sw    $s2, 0x1c($sp)
/* 0047FFA0 00809025 */  move  $s2, $a0
/* 0047FFA4 AFBF002C */  sw    $ra, 0x2c($sp)
/* 0047FFA8 AFBC0028 */  sw    $gp, 0x28($sp)
/* 0047FFAC AFB40024 */  sw    $s4, 0x24($sp)
/* 0047FFB0 AFB10018 */  sw    $s1, 0x18($sp)
/* 0047FFB4 126E0091 */  beq   $s3, $t6, .L004801FC
/* 0047FFB8 AFB00014 */   sw    $s0, 0x14($sp)
/* 0047FFBC 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0047FFC0 8F918908 */  lw     $s1, %got(err)($gp)
/* 0047FFC4 0320F809 */  jalr  $t9
/* 0047FFC8 8E240000 */   lw    $a0, ($s1)
/* 0047FFCC 1640001F */  bnez  $s2, .L0048004C
/* 0047FFD0 8FBC0028 */   lw    $gp, 0x28($sp)
/* 0047FFD4 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0047FFD8 8F858044 */  lw    $a1, %got(RO_1000E640)($gp)
/* 0047FFDC 8E240000 */  lw    $a0, ($s1)
/* 0047FFE0 2406000F */  li    $a2, 15
/* 0047FFE4 2407000F */  li    $a3, 15
/* 0047FFE8 0320F809 */  jalr  $t9
/* 0047FFEC 24A5E640 */   addiu $a1, %lo(RO_1000E640) # addiu $a1, $a1, -0x19c0
/* 0047FFF0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0047FFF4 8E240000 */  lw    $a0, ($s1)
/* 0047FFF8 24060400 */  li    $a2, 1024
/* 0047FFFC 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 00480000 8F878984 */  lw     $a3, %got(entnam0len)($gp)
/* 00480004 8F858DE4 */  lw     $a1, %got(entnam0)($gp)
/* 00480008 0320F809 */  jalr  $t9
/* 0048000C 8CE70000 */   lw    $a3, ($a3)
/* 00480010 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00480014 8E240000 */  lw    $a0, ($s1)
/* 00480018 24060038 */  li    $a2, 56
/* 0048001C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 00480020 8F858044 */  lw    $a1, %got(RO_1000E608)($gp)
/* 00480024 24070038 */  li    $a3, 56
/* 00480028 0320F809 */  jalr  $t9
/* 0048002C 24A5E608 */   addiu $a1, %lo(RO_1000E608) # addiu $a1, $a1, -0x19f8
/* 00480030 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00480034 8E240000 */  lw    $a0, ($s1)
/* 00480038 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0048003C 0320F809 */  jalr  $t9
/* 00480040 00000000 */   nop
/* 00480044 1000006B */  b     .L004801F4
/* 00480048 8FBC0028 */   lw    $gp, 0x28($sp)
.L0048004C:
/* 0048004C 24010001 */  li    $at, 1
/* 00480050 16410049 */  bne   $s2, $at, .L00480178
/* 00480054 2406000F */   li    $a2, 15
/* 00480058 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0048005C 8F858044 */  lw    $a1, %got(RO_1000E5F9)($gp)
/* 00480060 8E240000 */  lw    $a0, ($s1)
/* 00480064 2407000F */  li    $a3, 15
/* 00480068 0320F809 */  jalr  $t9
/* 0048006C 24A5E5F9 */   addiu $a1, %lo(RO_1000E5F9) # addiu $a1, $a1, -0x1a07
/* 00480070 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00480074 8E240000 */  lw    $a0, ($s1)
/* 00480078 24060400 */  li    $a2, 1024
/* 0048007C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 00480080 8F878984 */  lw     $a3, %got(entnam0len)($gp)
/* 00480084 8F858DE4 */  lw     $a1, %got(entnam0)($gp)
/* 00480088 0320F809 */  jalr  $t9
/* 0048008C 8CE70000 */   lw    $a3, ($a3)
/* 00480090 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00480094 8E240000 */  lw    $a0, ($s1)
/* 00480098 24060029 */  li    $a2, 41
/* 0048009C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 004800A0 8F858044 */  lw    $a1, %got(RO_1000E5D0)($gp)
/* 004800A4 24070029 */  li    $a3, 41
/* 004800A8 0320F809 */  jalr  $t9
/* 004800AC 24A5E5D0 */   addiu $a1, %lo(RO_1000E5D0) # addiu $a1, $a1, -0x1a30
/* 004800B0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004800B4 8E240000 */  lw    $a0, ($s1)
/* 004800B8 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 004800BC 0320F809 */  jalr  $t9
/* 004800C0 00000000 */   nop
/* 004800C4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004800C8 8E240000 */  lw    $a0, ($s1)
/* 004800CC 2406004C */  li    $a2, 76
/* 004800D0 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 004800D4 8F858044 */  lw    $a1, %got(RO_1000E584)($gp)
/* 004800D8 2407004C */  li    $a3, 76
/* 004800DC 0320F809 */  jalr  $t9
/* 004800E0 24A5E584 */   addiu $a1, %lo(RO_1000E584) # addiu $a1, $a1, -0x1a7c
/* 004800E4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004800E8 8E240000 */  lw    $a0, ($s1)
/* 004800EC 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 004800F0 0320F809 */  jalr  $t9
/* 004800F4 00000000 */   nop
/* 004800F8 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004800FC 8E240000 */  lw    $a0, ($s1)
/* 00480100 24060013 */  li    $a2, 19
/* 00480104 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 00480108 8F858044 */  lw    $a1, %got(RO_1000E571)($gp)
/* 0048010C 24070013 */  li    $a3, 19
/* 00480110 0320F809 */  jalr  $t9
/* 00480114 24A5E571 */   addiu $a1, %lo(RO_1000E571) # addiu $a1, $a1, -0x1a8f
/* 00480118 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0048011C 8E240000 */  lw    $a0, ($s1)
/* 00480120 24060005 */  li    $a2, 5
/* 00480124 8F8F8B6C */  lw     $t7, %got(curproc)($gp)
/* 00480128 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0048012C 2407000A */  li    $a3, 10
/* 00480130 8DEF0000 */  lw    $t7, ($t7)
/* 00480134 0320F809 */  jalr  $t9
/* 00480138 95E50012 */   lhu   $a1, 0x12($t7)
/* 0048013C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00480140 8E300000 */  lw    $s0, ($s1)
/* 00480144 2405002E */  li    $a1, 46
/* 00480148 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0048014C 02603025 */  move  $a2, $s3
/* 00480150 2407000A */  li    $a3, 10
/* 00480154 0320F809 */  jalr  $t9
/* 00480158 02002025 */   move  $a0, $s0
/* 0048015C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00480160 02002025 */  move  $a0, $s0
/* 00480164 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 00480168 0320F809 */  jalr  $t9
/* 0048016C 00000000 */   nop
/* 00480170 10000020 */  b     .L004801F4
/* 00480174 8FBC0028 */   lw    $gp, 0x28($sp)
.L00480178:
/* 00480178 24010002 */  li    $at, 2
/* 0048017C 1641001D */  bne   $s2, $at, .L004801F4
/* 00480180 2406000F */   li    $a2, 15
/* 00480184 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 00480188 8F858044 */  lw    $a1, %got(RO_1000E562)($gp)
/* 0048018C 8E240000 */  lw    $a0, ($s1)
/* 00480190 2407000F */  li    $a3, 15
/* 00480194 0320F809 */  jalr  $t9
/* 00480198 24A5E562 */   addiu $a1, %lo(RO_1000E562) # addiu $a1, $a1, -0x1a9e
/* 0048019C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004801A0 8E240000 */  lw    $a0, ($s1)
/* 004801A4 24060400 */  li    $a2, 1024
/* 004801A8 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 004801AC 8F878984 */  lw     $a3, %got(entnam0len)($gp)
/* 004801B0 8F858DE4 */  lw     $a1, %got(entnam0)($gp)
/* 004801B4 0320F809 */  jalr  $t9
/* 004801B8 8CE70000 */   lw    $a3, ($a3)
/* 004801BC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004801C0 8E240000 */  lw    $a0, ($s1)
/* 004801C4 2406002A */  li    $a2, 42
/* 004801C8 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 004801CC 8F858044 */  lw    $a1, %got(RO_1000E538)($gp)
/* 004801D0 2407002A */  li    $a3, 42
/* 004801D4 0320F809 */  jalr  $t9
/* 004801D8 24A5E538 */   addiu $a1, %lo(RO_1000E538) # addiu $a1, $a1, -0x1ac8
/* 004801DC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004801E0 8E240000 */  lw    $a0, ($s1)
/* 004801E4 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 004801E8 0320F809 */  jalr  $t9
/* 004801EC 00000000 */   nop
/* 004801F0 8FBC0028 */  lw    $gp, 0x28($sp)
.L004801F4:
/* 004801F4 8F818B08 */  lw     $at, %got(warned)($gp)
/* 004801F8 A0330000 */  sb    $s3, ($at)
.L004801FC:
/* 004801FC 8F988B00 */  lw     $t8, %got(o3opt)($gp)
/* 00480200 8F918908 */  lw     $s1, %got(err)($gp)
/* 00480204 93180000 */  lbu   $t8, ($t8)
/* 00480208 13000013 */  beqz  $t8, .L00480258
/* 0048020C 00000000 */   nop
/* 00480210 16400011 */  bnez  $s2, .L00480258
/* 00480214 24060031 */   li    $a2, 49
/* 00480218 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0048021C 8F858044 */  lw    $a1, %got(RO_1000E507)($gp)
/* 00480220 8E240000 */  lw    $a0, ($s1)
/* 00480224 24070031 */  li    $a3, 49
/* 00480228 0320F809 */  jalr  $t9
/* 0048022C 24A5E507 */   addiu $a1, %lo(RO_1000E507) # addiu $a1, $a1, -0x1af9
/* 00480230 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00480234 8E240000 */  lw    $a0, ($s1)
/* 00480238 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0048023C 0320F809 */  jalr  $t9
/* 00480240 00000000 */   nop
/* 00480244 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00480248 8F998728 */  lw    $t9, %call16(abort)($gp)
/* 0048024C 0320F809 */  jalr  $t9
/* 00480250 00000000 */   nop
/* 00480254 8FBC0028 */  lw    $gp, 0x28($sp)
.L00480258:
/* 00480258 8F9980A0 */  lw    $t9, %call16(fflush)($gp)
/* 0048025C 8E240000 */  lw    $a0, ($s1)
/* 00480260 0320F809 */  jalr  $t9
/* 00480264 00000000 */   nop
/* 00480268 16400030 */  bnez  $s2, .L0048032C
/* 0048026C 8FBC0028 */   lw    $gp, 0x28($sp)
/* 00480270 8F99876C */  lw    $t9, %call16(initur)($gp)
/* 00480274 8F848DD0 */  lw     $a0, %got(sourcename)($gp)
/* 00480278 0320F809 */  jalr  $t9
/* 0048027C 00000000 */   nop
/* 00480280 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00480284 24140022 */  li    $s4, 34
/* 00480288 24120021 */  li    $s2, 33
/* 0048028C 8F938950 */  lw     $s3, %got(ustrptr)($gp)
/* 00480290 8F908DA4 */  lw     $s0, %got(u)($gp)
.L00480294:
/* 00480294 8F998768 */  lw    $t9, %call16(readuinstr)($gp)
/* 00480298 02002025 */  move  $a0, $s0
/* 0048029C 8E650000 */  lw    $a1, ($s3)
/* 004802A0 0320F809 */  jalr  $t9
/* 004802A4 00000000 */   nop
/* 004802A8 92030000 */  lbu   $v1, ($s0)
/* 004802AC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004802B0 2406003B */  li    $a2, 59
/* 004802B4 16830016 */  bne   $s4, $v1, .L00480310
/* 004802B8 2407003B */   li    $a3, 59
/* 004802BC 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 004802C0 8F858044 */  lw    $a1, %got(RO_1000E4CC)($gp)
/* 004802C4 8E240000 */  lw    $a0, ($s1)
/* 004802C8 0320F809 */  jalr  $t9
/* 004802CC 24A5E4CC */   addiu $a1, %lo(RO_1000E4CC) # addiu $a1, $a1, -0x1b34
/* 004802D0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004802D4 8E240000 */  lw    $a0, ($s1)
/* 004802D8 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 004802DC 0320F809 */  jalr  $t9
/* 004802E0 00000000 */   nop
/* 004802E4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004802E8 8E240000 */  lw    $a0, ($s1)
/* 004802EC 8F9980A0 */  lw    $t9, %call16(fflush)($gp)
/* 004802F0 0320F809 */  jalr  $t9
/* 004802F4 00000000 */   nop
/* 004802F8 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004802FC 8F998728 */  lw    $t9, %call16(abort)($gp)
/* 00480300 0320F809 */  jalr  $t9
/* 00480304 00000000 */   nop
/* 00480308 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0048030C 92030000 */  lbu   $v1, ($s0)
.L00480310:
/* 00480310 1643FFE0 */  bne   $s2, $v1, .L00480294
/* 00480314 00000000 */   nop
/* 00480318 8F998980 */  lw     $t9, %got(curblk)($gp)
/* 0048031C 8E080004 */  lw    $t0, 4($s0)
/* 00480320 8F390000 */  lw    $t9, ($t9)
/* 00480324 1728FFDB */  bne   $t9, $t0, .L00480294
/* 00480328 00000000 */   nop
.L0048032C:
/* 0048032C 8F928DA8 */  lw     $s2, %got(lastcopiedu)($gp)
/* 00480330 8F908DA4 */  lw     $s0, %got(u)($gp)
/* 00480334 8F938950 */  lw     $s3, %got(ustrptr)($gp)
/* 00480338 92520000 */  lbu   $s2, ($s2)
/* 0048033C 24140022 */  li    $s4, 34
/* 00480340 3A520060 */  xori  $s2, $s2, 0x60
/* 00480344 0012902B */  sltu  $s2, $zero, $s2
/* 00480348 325200FF */  andi  $s2, $s2, 0xff
.L0048034C:
/* 0048034C 8F998768 */  lw    $t9, %call16(readuinstr)($gp)
/* 00480350 02002025 */  move  $a0, $s0
/* 00480354 8E650000 */  lw    $a1, ($s3)
/* 00480358 0320F809 */  jalr  $t9
/* 0048035C 00000000 */   nop
/* 00480360 92090000 */  lbu   $t1, ($s0)
/* 00480364 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00480368 2406003C */  li    $a2, 60
/* 0048036C 16890015 */  bne   $s4, $t1, .L004803C4
/* 00480370 2407003C */   li    $a3, 60
/* 00480374 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 00480378 8F858044 */  lw    $a1, %got(RO_1000E490)($gp)
/* 0048037C 8E240000 */  lw    $a0, ($s1)
/* 00480380 0320F809 */  jalr  $t9
/* 00480384 24A5E490 */   addiu $a1, %lo(RO_1000E490) # addiu $a1, $a1, -0x1b70
/* 00480388 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0048038C 8E240000 */  lw    $a0, ($s1)
/* 00480390 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 00480394 0320F809 */  jalr  $t9
/* 00480398 00000000 */   nop
/* 0048039C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004803A0 8E240000 */  lw    $a0, ($s1)
/* 004803A4 8F9980A0 */  lw    $t9, %call16(fflush)($gp)
/* 004803A8 0320F809 */  jalr  $t9
/* 004803AC 00000000 */   nop
/* 004803B0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004803B4 8F998728 */  lw    $t9, %call16(abort)($gp)
/* 004803B8 0320F809 */  jalr  $t9
/* 004803BC 00000000 */   nop
/* 004803C0 8FBC0028 */  lw    $gp, 0x28($sp)
.L004803C4:
/* 004803C4 12400021 */  beqz  $s2, .L0048044C
/* 004803C8 00000000 */   nop
/* 004803CC 920A0000 */  lbu   $t2, ($s0)
/* 004803D0 2D4B00A0 */  sltiu $t3, $t2, 0xa0
/* 004803D4 11600009 */  beqz  $t3, .L004803FC
/* 004803D8 00000000 */   nop
/* 004803DC 8F8E8044 */  lw    $t6, %got(D_10011888)($gp)
/* 004803E0 000A6143 */  sra   $t4, $t2, 5
/* 004803E4 000C6880 */  sll   $t5, $t4, 2
/* 004803E8 25CE1888 */  addiu $t6, %lo(D_10011888) # addiu $t6, $t6, 0x1888
/* 004803EC 01CD7821 */  addu  $t7, $t6, $t5
/* 004803F0 8DF80000 */  lw    $t8, ($t7)
/* 004803F4 0158C804 */  sllv  $t9, $t8, $t2
/* 004803F8 2B2B0000 */  slti  $t3, $t9, 0
.L004803FC:
/* 004803FC 11600013 */  beqz  $t3, .L0048044C
/* 00480400 00000000 */   nop
/* 00480404 8F998034 */  lw    $t9, %got(func_0047FE1C)($gp)
/* 00480408 27A20040 */  addiu $v0, $sp, 0x40
/* 0048040C 2739FE1C */  addiu $t9, %lo(func_0047FE1C) # addiu $t9, $t9, -0x1e4
/* 00480410 0320F809 */  jalr  $t9
/* 00480414 00000000 */   nop
/* 00480418 92030000 */  lbu   $v1, ($s0)
/* 0048041C 2C520001 */  sltiu $s2, $v0, 1
/* 00480420 2401008B */  li    $at, 139
/* 00480424 325200FF */  andi  $s2, $s2, 0xff
/* 00480428 1461000E */  bne   $v1, $at, .L00480464
/* 0048042C 8FBC0028 */   lw    $gp, 0x28($sp)
/* 00480430 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 00480434 02002025 */  move  $a0, $s0
/* 00480438 0320F809 */  jalr  $t9
/* 0048043C 00000000 */   nop
/* 00480440 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00480444 10000007 */  b     .L00480464
/* 00480448 92030000 */   lbu   $v1, ($s0)
.L0048044C:
/* 0048044C 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 00480450 02002025 */  move  $a0, $s0
/* 00480454 0320F809 */  jalr  $t9
/* 00480458 00000000 */   nop
/* 0048045C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00480460 92030000 */  lbu   $v1, ($s0)
.L00480464:
/* 00480464 2401001F */  li    $at, 31
/* 00480468 1461FFB8 */  bne   $v1, $at, .L0048034C
/* 0048046C 00000000 */   nop
/* 00480470 8FBF002C */  lw    $ra, 0x2c($sp)
/* 00480474 8FB00014 */  lw    $s0, 0x14($sp)
/* 00480478 8FB10018 */  lw    $s1, 0x18($sp)
/* 0048047C 8FB2001C */  lw    $s2, 0x1c($sp)
/* 00480480 8FB30020 */  lw    $s3, 0x20($sp)
/* 00480484 8FB40024 */  lw    $s4, 0x24($sp)
/* 00480488 03E00008 */  jr    $ra
/* 0048048C 27BD0040 */   addiu $sp, $sp, 0x40
    .type skipproc, @function
    .size skipproc, .-skipproc
    .end skipproc

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

glabel check_ix_candidate
    .ent check_ix_candidate
    # 0042AADC func_0042AADC
    # 0042B890 func_0042B890
    # 0046123C func_0046123C
    # 00480540 check_loop_nest_ix_cand
/* 004804CC 3C1C0FBA */  .cpload $t9
/* 004804D0 279C9DC4 */
/* 004804D4 0399E021 */
/* 004804D8 8F8E8A0C */  lw     $t6, %got(looptab)($gp)
/* 004804DC 00057880 */  sll   $t7, $a1, 2
/* 004804E0 01E57823 */  subu  $t7, $t7, $a1
/* 004804E4 8DCE0000 */  lw    $t6, ($t6)
/* 004804E8 000F7880 */  sll   $t7, $t7, 2
/* 004804EC 01CFC021 */  addu  $t8, $t6, $t7
/* 004804F0 8F030004 */  lw    $v1, 4($t8)
/* 004804F4 50600010 */  beql  $v1, $zero, .L00480538
/* 004804F8 00001025 */   move  $v0, $zero
/* 004804FC 8C790000 */  lw    $t9, ($v1)
.L00480500:
/* 00480500 5499000A */  bnel  $a0, $t9, .L0048052C
/* 00480504 8C630008 */   lw    $v1, 8($v1)
/* 00480508 90680010 */  lbu   $t0, 0x10($v1)
/* 0048050C 24010001 */  li    $at, 1
/* 00480510 15010003 */  bne   $t0, $at, .L00480520
/* 00480514 00000000 */   nop
/* 00480518 03E00008 */  jr    $ra
/* 0048051C 90620011 */   lbu   $v0, 0x11($v1)

.L00480520:
/* 00480520 03E00008 */  jr    $ra
/* 00480524 00001025 */   move  $v0, $zero

/* 00480528 8C630008 */  lw    $v1, 8($v1)
.L0048052C:
/* 0048052C 5460FFF4 */  bnezl $v1, .L00480500
/* 00480530 8C790000 */   lw    $t9, ($v1)
/* 00480534 00001025 */  move  $v0, $zero
.L00480538:
/* 00480538 03E00008 */  jr    $ra
/* 0048053C 00000000 */   nop
    .type check_ix_candidate, @function
    .size check_ix_candidate, .-check_ix_candidate
    .end check_ix_candidate

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

glabel check_ix_source
    .ent check_ix_source
    # 0046123C func_0046123C
/* 00480624 3C1C0FBA */  .cpload $t9
/* 00480628 279C9C6C */
/* 0048062C 0399E021 */
/* 00480630 8F8E8A0C */  lw     $t6, %got(looptab)($gp)
/* 00480634 00057880 */  sll   $t7, $a1, 2
/* 00480638 01E57823 */  subu  $t7, $t7, $a1
/* 0048063C 8DCE0000 */  lw    $t6, ($t6)
/* 00480640 000F7880 */  sll   $t7, $t7, 2
/* 00480644 01CFC021 */  addu  $t8, $t6, $t7
/* 00480648 8F030004 */  lw    $v1, 4($t8)
/* 0048064C 50600010 */  beql  $v1, $zero, .L00480690
/* 00480650 00001025 */   move  $v0, $zero
/* 00480654 8C790000 */  lw    $t9, ($v1)
.L00480658:
/* 00480658 5499000A */  bnel  $a0, $t9, .L00480684
/* 0048065C 8C630008 */   lw    $v1, 8($v1)
/* 00480660 90680010 */  lbu   $t0, 0x10($v1)
/* 00480664 24010003 */  li    $at, 3
/* 00480668 15010003 */  bne   $t0, $at, .L00480678
/* 0048066C 00000000 */   nop
/* 00480670 03E00008 */  jr    $ra
/* 00480674 90620011 */   lbu   $v0, 0x11($v1)

.L00480678:
/* 00480678 03E00008 */  jr    $ra
/* 0048067C 00001025 */   move  $v0, $zero

/* 00480680 8C630008 */  lw    $v1, 8($v1)
.L00480684:
/* 00480684 5460FFF4 */  bnezl $v1, .L00480658
/* 00480688 8C790000 */   lw    $t9, ($v1)
/* 0048068C 00001025 */  move  $v0, $zero
.L00480690:
/* 00480690 03E00008 */  jr    $ra
/* 00480694 00000000 */   nop
    .type check_ix_source, @function
    .size check_ix_source, .-check_ix_source
    .end check_ix_source

glabel get_ix_source
    .ent get_ix_source
    # 004230F0 func_004230F0
    # 0042AADC func_0042AADC
/* 00480698 3C1C0FBA */  .cpload $t9
/* 0048069C 279C9BF8 */
/* 004806A0 0399E021 */
/* 004806A4 8F8E8A0C */  lw     $t6, %got(looptab)($gp)
/* 004806A8 00057880 */  sll   $t7, $a1, 2
/* 004806AC 01E57823 */  subu  $t7, $t7, $a1
/* 004806B0 8DCE0000 */  lw    $t6, ($t6)
/* 004806B4 000F7880 */  sll   $t7, $t7, 2
/* 004806B8 24020003 */  li    $v0, 3
/* 004806BC 01CFC021 */  addu  $t8, $t6, $t7
/* 004806C0 8F030004 */  lw    $v1, 4($t8)
.L004806C4:
/* 004806C4 90790011 */  lbu   $t9, 0x11($v1)
/* 004806C8 14990006 */  bne   $a0, $t9, .L004806E4
/* 004806CC 00000000 */   nop
/* 004806D0 90680010 */  lbu   $t0, 0x10($v1)
/* 004806D4 14480003 */  bne   $v0, $t0, .L004806E4
/* 004806D8 00000000 */   nop
/* 004806DC 03E00008 */  jr    $ra
/* 004806E0 00601025 */   move  $v0, $v1

.L004806E4:
/* 004806E4 1000FFF7 */  b     .L004806C4
/* 004806E8 8C630008 */   lw    $v1, 8($v1)
/* 004806EC 03E00008 */  jr    $ra
/* 004806F0 00000000 */   nop
    .type get_ix_source, @function
    .size get_ix_source, .-get_ix_source
    .end get_ix_source
)"");
