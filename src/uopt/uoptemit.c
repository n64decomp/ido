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
#include "feedback.h"
#include "uopttemp.h"
__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
#RO_1000AF00:
#    # 004205F8 genrlodrstr
#    .ascii "uoptemit.p"
#
#RO_1000AF0A:
#    # 004205F8 genrlodrstr
#    .asciz "Warning: kind dumped ignored."
#
#    .balign 4
#jtbl_1000AF28:
#    # 004205F8 genrlodrstr
#    .gpword .L00420900
#    .gpword .L004208D8
#    .gpword .L004208EC
#    .gpword .L0042089C
#
.data
# 10010480
glabel use_ix
    # 004230F0 func_004230F0
    # 0042BF08 reemit
    .byte 0x00
    .type use_ix, @object
    .size use_ix, .-use_ix # 1
    .space 3



.bss
    .balign 4
# 1001C5F8
glabel has_ix
    # 004230F0 func_004230F0
    # 0042B890 func_0042B890
    # 0042BF08 reemit
    .space 4
    .size has_ix, 4
    .type has_ix, @object

    .balign 4
# 1001C5FC
glabel loopno
    # 004230F0 func_004230F0
    # 0042B890 func_0042B890
    # 0042BF08 reemit
    .space 4
    .size loopno, 4
    .type loopno, @object

    .balign 16
# 1001C890
glabel gpunaltab
    # 0041F6F0 base_in_reg
    # 00422AF0 func_00422AF0
    # 0042BF08 reemit
    .space 24
    .size gpunaltab, 24
    .type gpunaltab, @object

    .balign 16
# 1001C8A8
glabel spunaltab
    # 0041F6F0 base_in_reg
    # 00422AF0 func_00422AF0
    # 0042BF08 reemit
    .space 24
    .size spunaltab, 24
    .type spunaltab, @object

    .balign 16
# 1001C960
glabel eereg_saved_locs
    # 0042A1C8 func_0042A1C8
    # 0042A4CC func_0042A4CC
    # 0042A7D0 func_0042A7D0
    # 0042BF08 reemit
    .space 88
    .size eereg_saved_locs, 88
    .type eereg_saved_locs, @object

    .balign 16
# 1001C9B8
glabel baseregexpr
    # 0041F6F0 base_in_reg
    # 00422AF0 func_00422AF0
    # 0042BF08 reemit
    .space 92
    .size baseregexpr, 92
    .type baseregexpr, @object

    .balign 16
# 1001CA18
glabel baseregbase
    # 0041F6F0 base_in_reg
    .space 92
    .size baseregbase, 92
    .type baseregbase, @object

    .balign 16
# 1001CFD8
glabel unaltab
    # 0041F6F0 base_in_reg
    # 00422AF0 func_00422AF0
    # 0042BF08 reemit
    .space 440
    .size unaltab, 532
    .type unaltab, @object

# 23 + 110 space?

.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
)"");

extern bool use_ix;
extern bool has_ix;
extern int loopno;

extern unsigned char gpunaltab[23];
extern unsigned char spunaltab[23];

extern int eereg_saved_locs[22];

extern struct IChain *baseregexpr[23];

// what is this
extern struct Unal {
    unsigned char data[23];
} unaltab[23];

__asm__(R""(
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

glabel igen3
    .ent igen3
    # 00422D04 func_00422D04
    # 004230F0 func_004230F0
    # 00426FA4 func_00426FA4
    # 0042BF08 reemit
/* 0041EC10 3C1C0FC0 */  .cpload $t9
/* 0041EC14 279CB680 */  
/* 0041EC18 0399E021 */  
/* 0041EC1C 90A30016 */  lbu   $v1, 0x16($a1)
/* 0041EC20 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0041EC24 24070003 */  li    $a3, 3
/* 0041EC28 30630007 */  andi  $v1, $v1, 7
/* 0041EC2C AFBF001C */  sw    $ra, 0x1c($sp)
/* 0041EC30 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0041EC34 AFA40020 */  sw    $a0, 0x20($sp)
/* 0041EC38 14E30015 */  bne   $a3, $v1, .L0041EC90
/* 0041EC3C AFA60028 */   sw    $a2, 0x28($sp)
/* 0041EC40 8CAE0010 */  lw    $t6, 0x10($a1)
/* 0041EC44 2401001D */  li    $at, 29
/* 0041EC48 15C10011 */  bne   $t6, $at, .L0041EC90
/* 0041EC4C 00000000 */   nop   
/* 0041EC50 8CAF0014 */  lw    $t7, 0x14($a1)
/* 0041EC54 000FC2C2 */  srl   $t8, $t7, 0xb
/* 0041EC58 17000005 */  bnez  $t8, .L0041EC70
/* 0041EC5C 00000000 */   nop   
/* 0041EC60 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 0041EC64 2419004B */  li    $t9, 75
/* 0041EC68 10000004 */  b     .L0041EC7C
/* 0041EC6C A0990000 */   sb    $t9, ($a0)
.L0041EC70:
/* 0041EC70 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 0041EC74 24080048 */  li    $t0, 72
/* 0041EC78 A0880000 */  sb    $t0, ($a0)
.L0041EC7C:
/* 0041EC7C 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0041EC80 0320F809 */  jalr  $t9
/* 0041EC84 00000000 */   nop   
/* 0041EC88 10000065 */  b     .L0041EE20
/* 0041EC8C 8FBC0018 */   lw    $gp, 0x18($sp)
.L0041EC90:
/* 0041EC90 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 0041EC94 90A60001 */  lbu   $a2, 1($a1)
/* 0041EC98 2409008B */  li    $t1, 139
/* 0041EC9C 90820001 */  lbu   $v0, 1($a0)
/* 0041ECA0 A0890000 */  sb    $t1, ($a0)
/* 0041ECA4 A4800002 */  sh    $zero, 2($a0)
/* 0041ECA8 000256C0 */  sll   $t2, $v0, 0x1b
/* 0041ECAC 000A5EC2 */  srl   $t3, $t2, 0x1b
/* 0041ECB0 00CB6026 */  xor   $t4, $a2, $t3
/* 0041ECB4 318D001F */  andi  $t5, $t4, 0x1f
/* 0041ECB8 01A27026 */  xor   $t6, $t5, $v0
/* 0041ECBC 01C01025 */  move  $v0, $t6
/* 0041ECC0 00027E00 */  sll   $t7, $v0, 0x18
/* 0041ECC4 000FC742 */  srl   $t8, $t7, 0x1d
/* 0041ECC8 8CAB0014 */  lw    $t3, 0x14($a1)
/* 0041ECCC 0078C826 */  xor   $t9, $v1, $t8
/* 0041ECD0 90AF0019 */  lbu   $t7, 0x19($a1)
/* 0041ECD4 00194740 */  sll   $t0, $t9, 0x1d
/* 0041ECD8 A08E0001 */  sb    $t6, 1($a0)
/* 0041ECDC 8CAD0010 */  lw    $t5, 0x10($a1)
/* 0041ECE0 90AE0018 */  lbu   $t6, 0x18($a1)
/* 0041ECE4 00084E02 */  srl   $t1, $t0, 0x18
/* 0041ECE8 01225026 */  xor   $t2, $t1, $v0
/* 0041ECEC 000B62C2 */  srl   $t4, $t3, 0xb
/* 0041ECF0 A08A0001 */  sb    $t2, 1($a0)
/* 0041ECF4 AC8C0004 */  sw    $t4, 4($a0)
/* 0041ECF8 AC8D000C */  sw    $t5, 0xc($a0)
/* 0041ECFC 11E00016 */  beqz  $t7, .L0041ED58
/* 0041ED00 AC8E0008 */   sw    $t6, 8($a0)
/* 0041ED04 10E30014 */  beq   $a3, $v1, .L0041ED58
/* 0041ED08 2401000E */   li    $at, 14
/* 0041ED0C 10C10012 */  beq   $a2, $at, .L0041ED58
/* 0041ED10 00000000 */   nop   
/* 0041ED14 8F988AC4 */  lw     $t8, %got(dogenvreg)($gp)
/* 0041ED18 93180000 */  lbu   $t8, ($t8)
/* 0041ED1C 5300000E */  beql  $t8, $zero, .L0041ED58
/* 0041ED20 A0A00019 */   sb    $zero, 0x19($a1)
/* 0041ED24 8F998980 */  lw     $t9, %got(curblk)($gp)
/* 0041ED28 8F390000 */  lw    $t9, ($t9)
/* 0041ED2C 572C000A */  bnel  $t9, $t4, .L0041ED58
/* 0041ED30 A0A00019 */   sb    $zero, 0x19($a1)
/* 0041ED34 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0041ED38 AFA50024 */  sw    $a1, 0x24($sp)
/* 0041ED3C 0320F809 */  jalr  $t9
/* 0041ED40 00000000 */   nop   
/* 0041ED44 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041ED48 8FA50024 */  lw    $a1, 0x24($sp)
/* 0041ED4C 24070003 */  li    $a3, 3
/* 0041ED50 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 0041ED54 A0A00019 */  sb    $zero, 0x19($a1)
.L0041ED58:
/* 0041ED58 8F898A5C */  lw     $t1, %got(lang)($gp)
/* 0041ED5C 93AA002B */  lbu   $t2, 0x2b($sp)
/* 0041ED60 91290000 */  lbu   $t1, ($t1)
/* 0041ED64 50E90007 */  beql  $a3, $t1, .L0041ED84
/* 0041ED68 93AD0023 */   lbu   $t5, 0x23($sp)
/* 0041ED6C 51400005 */  beql  $t2, $zero, .L0041ED84
/* 0041ED70 93AD0023 */   lbu   $t5, 0x23($sp)
/* 0041ED74 948B0002 */  lhu   $t3, 2($a0)
/* 0041ED78 356C0001 */  ori   $t4, $t3, 1
/* 0041ED7C A48C0002 */  sh    $t4, 2($a0)
/* 0041ED80 93AD0023 */  lbu   $t5, 0x23($sp)
.L0041ED84:
/* 0041ED84 A08D0000 */  sb    $t5, ($a0)
/* 0041ED88 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0041ED8C 0320F809 */  jalr  $t9
/* 0041ED90 00000000 */   nop   
/* 0041ED94 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041ED98 24010001 */  li    $at, 1
/* 0041ED9C 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 0041EDA0 908E0001 */  lbu   $t6, 1($a0)
/* 0041EDA4 000E7E00 */  sll   $t7, $t6, 0x18
/* 0041EDA8 000FC742 */  srl   $t8, $t7, 0x1d
/* 0041EDAC 5701001D */  bnel  $t8, $at, .L0041EE24
/* 0041EDB0 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0041EDB4 8F998980 */  lw     $t9, %got(curblk)($gp)
/* 0041EDB8 8C880004 */  lw    $t0, 4($a0)
/* 0041EDBC 8F390000 */  lw    $t9, ($t9)
/* 0041EDC0 57280018 */  bnel  $t9, $t0, .L0041EE24
/* 0041EDC4 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0041EDC8 8F898B48 */  lw     $t1, %got(stack_reversed)($gp)
/* 0041EDCC 91290000 */  lbu   $t1, ($t1)
/* 0041EDD0 1520000B */  bnez  $t1, .L0041EE00
/* 0041EDD4 00000000 */   nop   
/* 0041EDD8 8F8289FC */  lw     $v0, %got(highestmdef)($gp)
/* 0041EDDC 8C8A000C */  lw    $t2, 0xc($a0)
/* 0041EDE0 8C4C0000 */  lw    $t4, ($v0)
/* 0041EDE4 000A5823 */  negu  $t3, $t2
/* 0041EDE8 018B082A */  slt   $at, $t4, $t3
/* 0041EDEC 10200002 */  beqz  $at, .L0041EDF8
/* 0041EDF0 00000000 */   nop   
/* 0041EDF4 01606025 */  move  $t4, $t3
.L0041EDF8:
/* 0041EDF8 10000009 */  b     .L0041EE20
/* 0041EDFC AC4C0000 */   sw    $t4, ($v0)
.L0041EE00:
/* 0041EE00 8F8289FC */  lw     $v0, %got(highestmdef)($gp)
/* 0041EE04 8C8D000C */  lw    $t5, 0xc($a0)
/* 0041EE08 8C4E0000 */  lw    $t6, ($v0)
/* 0041EE0C 01CD082A */  slt   $at, $t6, $t5
/* 0041EE10 50200003 */  beql  $at, $zero, .L0041EE20
/* 0041EE14 AC4E0000 */   sw    $t6, ($v0)
/* 0041EE18 01A07025 */  move  $t6, $t5
/* 0041EE1C AC4E0000 */  sw    $t6, ($v0)
.L0041EE20:
/* 0041EE20 8FBF001C */  lw    $ra, 0x1c($sp)
.L0041EE24:
/* 0041EE24 27BD0020 */  addiu $sp, $sp, 0x20
/* 0041EE28 03E00008 */  jr    $ra
/* 0041EE2C 00000000 */   nop   
    .type igen3, @function
    .size igen3, .-igen3
    .end igen3
)"");

__asm__(R""(
.set noat
.set noreorder

glabel outparlod
    .ent outparlod
    # 0042269C gen_outparcode
/* 0041EE30 3C1C0FC0 */  .cpload $t9
/* 0041EE34 279CB460 */  
/* 0041EE38 0399E021 */  
/* 0041EE3C 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0041EE40 AFA40020 */  sw    $a0, 0x20($sp)
/* 0041EE44 00803025 */  move  $a2, $a0
/* 0041EE48 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 0041EE4C 90AE0001 */  lbu   $t6, 1($a1)
/* 0041EE50 90AB002E */  lbu   $t3, 0x2e($a1)
/* 0041EE54 90820001 */  lbu   $v0, 1($a0)
/* 0041EE58 8CAA0028 */  lw    $t2, 0x28($a1)
/* 0041EE5C A0860000 */  sb    $a2, ($a0)
/* 0041EE60 00027EC0 */  sll   $t7, $v0, 0x1b
/* 0041EE64 000FC6C2 */  srl   $t8, $t7, 0x1b
/* 0041EE68 01D8C826 */  xor   $t9, $t6, $t8
/* 0041EE6C 3328001F */  andi  $t0, $t9, 0x1f
/* 0041EE70 01024826 */  xor   $t1, $t0, $v0
/* 0041EE74 01201025 */  move  $v0, $t1
/* 0041EE78 00026600 */  sll   $t4, $v0, 0x18
/* 0041EE7C 000C6F42 */  srl   $t5, $t4, 0x1d
/* 0041EE80 8CA8002C */  lw    $t0, 0x2c($a1)
/* 0041EE84 016D7826 */  xor   $t7, $t3, $t5
/* 0041EE88 90AC0020 */  lbu   $t4, 0x20($a1)
/* 0041EE8C 000F7740 */  sll   $t6, $t7, 0x1d
/* 0041EE90 000EC602 */  srl   $t8, $t6, 0x18
/* 0041EE94 A0890001 */  sb    $t1, 1($a0)
/* 0041EE98 0302C826 */  xor   $t9, $t8, $v0
/* 0041EE9C 00084AC2 */  srl   $t1, $t0, 0xb
/* 0041EEA0 A0990001 */  sb    $t9, 1($a0)
/* 0041EEA4 AC890004 */  sw    $t1, 4($a0)
/* 0041EEA8 A4800002 */  sh    $zero, 2($a0)
/* 0041EEAC AC8A000C */  sw    $t2, 0xc($a0)
/* 0041EEB0 AC8C0008 */  sw    $t4, 8($a0)
/* 0041EEB4 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0041EEB8 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0041EEBC AFBC0018 */  sw    $gp, 0x18($sp)
/* 0041EEC0 0320F809 */  jalr  $t9
/* 0041EEC4 00000000 */   nop   
/* 0041EEC8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041EECC 24010001 */  li    $at, 1
/* 0041EED0 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 0041EED4 908B0001 */  lbu   $t3, 1($a0)
/* 0041EED8 000B6E00 */  sll   $t5, $t3, 0x18
/* 0041EEDC 000D7F42 */  srl   $t7, $t5, 0x1d
/* 0041EEE0 55E1001D */  bnel  $t7, $at, .L0041EF58
/* 0041EEE4 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0041EEE8 8F8E8980 */  lw     $t6, %got(curblk)($gp)
/* 0041EEEC 8C980004 */  lw    $t8, 4($a0)
/* 0041EEF0 8DCE0000 */  lw    $t6, ($t6)
/* 0041EEF4 55D80018 */  bnel  $t6, $t8, .L0041EF58
/* 0041EEF8 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0041EEFC 8F998B48 */  lw     $t9, %got(stack_reversed)($gp)
/* 0041EF00 93390000 */  lbu   $t9, ($t9)
/* 0041EF04 1720000B */  bnez  $t9, .L0041EF34
/* 0041EF08 00000000 */   nop   
/* 0041EF0C 8F8289FC */  lw     $v0, %got(highestmdef)($gp)
/* 0041EF10 8C88000C */  lw    $t0, 0xc($a0)
/* 0041EF14 8C4A0000 */  lw    $t2, ($v0)
/* 0041EF18 00084823 */  negu  $t1, $t0
/* 0041EF1C 0149082A */  slt   $at, $t2, $t1
/* 0041EF20 10200002 */  beqz  $at, .L0041EF2C
/* 0041EF24 00000000 */   nop   
/* 0041EF28 01205025 */  move  $t2, $t1
.L0041EF2C:
/* 0041EF2C 10000009 */  b     .L0041EF54
/* 0041EF30 AC4A0000 */   sw    $t2, ($v0)
.L0041EF34:
/* 0041EF34 8F8289FC */  lw     $v0, %got(highestmdef)($gp)
/* 0041EF38 8C8C000C */  lw    $t4, 0xc($a0)
/* 0041EF3C 8C4B0000 */  lw    $t3, ($v0)
/* 0041EF40 016C082A */  slt   $at, $t3, $t4
/* 0041EF44 50200003 */  beql  $at, $zero, .L0041EF54
/* 0041EF48 AC4B0000 */   sw    $t3, ($v0)
/* 0041EF4C 01805825 */  move  $t3, $t4
/* 0041EF50 AC4B0000 */  sw    $t3, ($v0)
.L0041EF54:
/* 0041EF54 8FBF001C */  lw    $ra, 0x1c($sp)
.L0041EF58:
/* 0041EF58 27BD0020 */  addiu $sp, $sp, 0x20
/* 0041EF5C 03E00008 */  jr    $ra
/* 0041EF60 00000000 */   nop   
    .type outparlod, @function
    .size outparlod, .-outparlod
    .end outparlod
)"");

__asm__(R""(
.set noat
.set noreorder

glabel gen_cvtl
    .ent gen_cvtl
    # 0041F048 genrop
/* 0041EF64 3C1C0FC0 */  .cpload $t9
/* 0041EF68 279CB32C */  
/* 0041EF6C 0399E021 */  
/* 0041EF70 00803025 */  move  $a2, $a0
/* 0041EF74 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 0041EF78 240E0019 */  li    $t6, 25
/* 0041EF7C 000650C0 */  sll   $t2, $a2, 3
/* 0041EF80 90820001 */  lbu   $v0, 1($a0)
/* 0041EF84 A08E0000 */  sb    $t6, ($a0)
/* 0041EF88 A4800002 */  sh    $zero, 2($a0)
/* 0041EF8C 00027EC0 */  sll   $t7, $v0, 0x1b
/* 0041EF90 000FC6C2 */  srl   $t8, $t7, 0x1b
/* 0041EF94 00B8C826 */  xor   $t9, $a1, $t8
/* 0041EF98 3328001F */  andi  $t0, $t9, 0x1f
/* 0041EF9C 01024826 */  xor   $t1, $t0, $v0
/* 0041EFA0 A0890001 */  sb    $t1, 1($a0)
/* 0041EFA4 AC8A0004 */  sw    $t2, 4($a0)
/* 0041EFA8 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0041EFAC 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0041EFB0 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0041EFB4 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0041EFB8 0320F809 */  jalr  $t9
/* 0041EFBC AFA50024 */   sw    $a1, 0x24($sp)
/* 0041EFC0 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0041EFC4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041EFC8 27BD0020 */  addiu $sp, $sp, 0x20
/* 0041EFCC 03E00008 */  jr    $ra
/* 0041EFD0 00000000 */   nop   
    .type gen_cvtl, @function
    .size gen_cvtl, .-gen_cvtl
    .end gen_cvtl
)"");

__asm__(R""(
.set noat
.set noreorder

glabel gen_cvt
    .ent gen_cvt
    # 004230F0 func_004230F0
/* 0041EFD4 3C1C0FC0 */  .cpload $t9
/* 0041EFD8 279CB2BC */  
/* 0041EFDC 0399E021 */  
/* 0041EFE0 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0041EFE4 AFA40020 */  sw    $a0, 0x20($sp)
/* 0041EFE8 00803025 */  move  $a2, $a0
/* 0041EFEC 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 0041EFF0 240E0018 */  li    $t6, 24
/* 0041EFF4 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0041EFF8 90820001 */  lbu   $v0, 1($a0)
/* 0041EFFC A08E0000 */  sb    $t6, ($a0)
/* 0041F000 A0850008 */  sb    $a1, 8($a0)
/* 0041F004 00027EC0 */  sll   $t7, $v0, 0x1b
/* 0041F008 000FC6C2 */  srl   $t8, $t7, 0x1b
/* 0041F00C 00D8C826 */  xor   $t9, $a2, $t8
/* 0041F010 3328001F */  andi  $t0, $t9, 0x1f
/* 0041F014 01024826 */  xor   $t1, $t0, $v0
/* 0041F018 A0890001 */  sb    $t1, 1($a0)
/* 0041F01C A4800002 */  sh    $zero, 2($a0)
/* 0041F020 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0041F024 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0041F028 AFA50024 */  sw    $a1, 0x24($sp)
/* 0041F02C 0320F809 */  jalr  $t9
/* 0041F030 00000000 */   nop   
/* 0041F034 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0041F038 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041F03C 27BD0020 */  addiu $sp, $sp, 0x20
/* 0041F040 03E00008 */  jr    $ra
/* 0041F044 00000000 */   nop   
    .type gen_cvt, @function
    .size gen_cvt, .-gen_cvt
    .end gen_cvt
)"");

__asm__(R""(
.set noat
.set noreorder

glabel genrop
    .ent genrop
    # 0041FA68 varlodstr
    # 0042020C gen_static_link
    # 00420A3C prolog
    # 00421C00 epilog
    # 0042269C gen_outparcode
    # 00422D04 func_00422D04
    # 004230F0 func_004230F0
    # 00426FA4 func_00426FA4
    # 0042AADC func_0042AADC
    # 0042B2C0 func_0042B2C0
    # 0042B890 func_0042B890
    # 0042BB4C func_0042BB4C
    # 0042BF08 reemit
/* 0041F048 3C1C0FC0 */  .cpload $t9
/* 0041F04C 279CB248 */  
/* 0041F050 0399E021 */  
/* 0041F054 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0041F058 AFA40020 */  sw    $a0, 0x20($sp)
/* 0041F05C 93AE0023 */  lbu   $t6, 0x23($sp)
/* 0041F060 2401007B */  li    $at, 123
/* 0041F064 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0041F068 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0041F06C AFA50024 */  sw    $a1, 0x24($sp)
/* 0041F070 AFA60028 */  sw    $a2, 0x28($sp)
/* 0041F074 15C1000F */  bne   $t6, $at, .L0041F0B4
/* 0041F078 AFA7002C */   sw    $a3, 0x2c($sp)
/* 0041F07C 8F99865C */  lw    $t9, %call16(sizeoftyp)($gp)
/* 0041F080 93A4002B */  lbu   $a0, 0x2b($sp)
/* 0041F084 0320F809 */  jalr  $t9
/* 0041F088 00000000 */   nop   
/* 0041F08C 8FA4002C */  lw    $a0, 0x2c($sp)
/* 0041F090 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041F094 0082082A */  slt   $at, $a0, $v0
/* 0041F098 10200006 */  beqz  $at, .L0041F0B4
/* 0041F09C 00000000 */   nop   
/* 0041F0A0 8F99826C */  lw    $t9, %call16(gen_cvtl)($gp)
/* 0041F0A4 93A5002B */  lbu   $a1, 0x2b($sp)
/* 0041F0A8 0320F809 */  jalr  $t9
/* 0041F0AC 00000000 */   nop   
/* 0041F0B0 8FBC0018 */  lw    $gp, 0x18($sp)
.L0041F0B4:
/* 0041F0B4 8F858DA4 */  lw     $a1, %got(u)($gp)
/* 0041F0B8 93B8002B */  lbu   $t8, 0x2b($sp)
/* 0041F0BC 93AF0023 */  lbu   $t7, 0x23($sp)
/* 0041F0C0 90A20001 */  lbu   $v0, 1($a1)
/* 0041F0C4 ACA00004 */  sw    $zero, 4($a1)
/* 0041F0C8 A0AF0000 */  sb    $t7, ($a1)
/* 0041F0CC 0002CEC0 */  sll   $t9, $v0, 0x1b
/* 0041F0D0 001946C2 */  srl   $t0, $t9, 0x1b
/* 0041F0D4 03084826 */  xor   $t1, $t8, $t0
/* 0041F0D8 312A001F */  andi  $t2, $t1, 0x1f
/* 0041F0DC 01426026 */  xor   $t4, $t2, $v0
/* 0041F0E0 318DFF1F */  andi  $t5, $t4, 0xff1f
/* 0041F0E4 35AE0060 */  ori   $t6, $t5, 0x60
/* 0041F0E8 A0AC0001 */  sb    $t4, 1($a1)
/* 0041F0EC A0AE0001 */  sb    $t6, 1($a1)
/* 0041F0F0 8F998708 */  lw    $t9, %call16(coloroffset)($gp)
/* 0041F0F4 8FA40024 */  lw    $a0, 0x24($sp)
/* 0041F0F8 0320F809 */  jalr  $t9
/* 0041F0FC 00000000 */   nop   
/* 0041F100 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041F104 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 0041F108 AC82000C */  sw    $v0, 0xc($a0)
/* 0041F10C 8FAF002C */  lw    $t7, 0x2c($sp)
/* 0041F110 A4800002 */  sh    $zero, 2($a0)
/* 0041F114 AC8F0008 */  sw    $t7, 8($a0)
/* 0041F118 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0041F11C 0320F809 */  jalr  $t9
/* 0041F120 00000000 */   nop   
/* 0041F124 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0041F128 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041F12C 27BD0020 */  addiu $sp, $sp, 0x20
/* 0041F130 03E00008 */  jr    $ra
/* 0041F134 00000000 */   nop   
    .type genrop, @function
    .size genrop, .-genrop
    .end genrop
)"");

__asm__(R""(
.set noat
.set noreorder

glabel inreg
    .ent inreg
    # 0041FA68 varlodstr
    # 0042269C gen_outparcode
    # 00422D04 func_00422D04
    # 004230F0 func_004230F0
    # 00426FA4 func_00426FA4
    # 0042AADC func_0042AADC
    # 0042B2C0 func_0042B2C0
    # 0042B890 func_0042B890
    # 0042BB4C func_0042BB4C
    # 0042BF08 reemit
/* 0041F138 3C1C0FC0 */  .cpload $t9
/* 0041F13C 279CB158 */  
/* 0041F140 0399E021 */  
/* 0041F144 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0041F148 8F9986BC */  lw    $t9, %call16(regclassof)($gp)
/* 0041F14C AFBF001C */  sw    $ra, 0x1c($sp)
/* 0041F150 AFA40028 */  sw    $a0, 0x28($sp)
/* 0041F154 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0041F158 AFA70034 */  sw    $a3, 0x34($sp)
/* 0041F15C AFA40028 */  sw    $a0, 0x28($sp)
/* 0041F160 A3A00026 */  sb    $zero, 0x26($sp)
/* 0041F164 AFA5002C */  sw    $a1, 0x2c($sp)
/* 0041F168 0320F809 */  jalr  $t9
/* 0041F16C AFA60030 */   sw    $a2, 0x30($sp)
/* 0041F170 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041F174 00024080 */  sll   $t0, $v0, 2
/* 0041F178 8FA60030 */  lw    $a2, 0x30($sp)
/* 0041F17C 8F8E8D34 */  lw     $t6, %got(firsterreg)($gp)
/* 0041F180 8F998B0C */  lw     $t9, %got(allcallersave)($gp)
/* 0041F184 93A30026 */  lbu   $v1, 0x26($sp)
/* 0041F188 25CEFFFC */  addiu $t6, $t6, -4
/* 0041F18C 010E7821 */  addu  $t7, $t0, $t6
/* 0041F190 8DF80000 */  lw    $t8, ($t7)
/* 0041F194 8FA5002C */  lw    $a1, 0x2c($sp)
/* 0041F198 8FA70028 */  lw    $a3, 0x28($sp)
/* 0041F19C ACD80000 */  sw    $t8, ($a2)
/* 0041F1A0 93390000 */  lbu   $t9, ($t9)
/* 0041F1A4 13200006 */  beqz  $t9, .L0041F1C0
/* 0041F1A8 00000000 */   nop   
/* 0041F1AC 8F898D40 */  lw     $t1, %got(lasteereg)($gp)
/* 0041F1B0 2529FFFC */  addiu $t1, $t1, -4
/* 0041F1B4 01095021 */  addu  $t2, $t0, $t1
/* 0041F1B8 10000005 */  b     .L0041F1D0
/* 0041F1BC 8D440000 */   lw    $a0, ($t2)
.L0041F1C0:
/* 0041F1C0 8F8B8D54 */  lw     $t3, %got(highesteereg)($gp)
/* 0041F1C4 256BFFFC */  addiu $t3, $t3, -4
/* 0041F1C8 010B6021 */  addu  $t4, $t0, $t3
/* 0041F1CC 8D840000 */  lw    $a0, ($t4)
.L0041F1D0:
/* 0041F1D0 8CC20000 */  lw    $v0, ($a2)
/* 0041F1D4 0082082A */  slt   $at, $a0, $v0
/* 0041F1D8 1420000F */  bnez  $at, .L0041F218
/* 0041F1DC 00026880 */   sll   $t5, $v0, 2
.L0041F1E0:
/* 0041F1E0 00AD7021 */  addu  $t6, $a1, $t5
/* 0041F1E4 8DCF0040 */  lw    $t7, 0x40($t6)
/* 0041F1E8 24580001 */  addiu $t8, $v0, 1
/* 0041F1EC 54EF0004 */  bnel  $a3, $t7, .L0041F200
/* 0041F1F0 ACD80000 */   sw    $t8, ($a2)
/* 0041F1F4 10000002 */  b     .L0041F200
/* 0041F1F8 24030001 */   li    $v1, 1
/* 0041F1FC ACD80000 */  sw    $t8, ($a2)
.L0041F200:
/* 0041F200 54600006 */  bnezl $v1, .L0041F21C
/* 0041F204 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0041F208 8CC20000 */  lw    $v0, ($a2)
/* 0041F20C 0082082A */  slt   $at, $a0, $v0
/* 0041F210 5020FFF3 */  beql  $at, $zero, .L0041F1E0
/* 0041F214 00026880 */   sll   $t5, $v0, 2
.L0041F218:
/* 0041F218 8FBF001C */  lw    $ra, 0x1c($sp)
.L0041F21C:
/* 0041F21C 27BD0028 */  addiu $sp, $sp, 0x28
/* 0041F220 00601025 */  move  $v0, $v1
/* 0041F224 03E00008 */  jr    $ra
/* 0041F228 00000000 */   nop   
    .type inreg, @function
    .size inreg, .-inreg
    .end inreg
)"");

__asm__(R""(
.set noat
.set noreorder

glabel base_noalias
    .ent base_noalias
    # 0041F6F0 base_in_reg
/* 0041F22C 3C1C0FC0 */  .cpload $t9
/* 0041F230 279CB064 */  
/* 0041F234 0399E021 */  
/* 0041F238 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0041F23C AFBF0024 */  sw    $ra, 0x24($sp)
/* 0041F240 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0041F244 AFA40028 */  sw    $a0, 0x28($sp)
/* 0041F248 AFA5002C */  sw    $a1, 0x2c($sp)
/* 0041F24C 90820000 */  lbu   $v0, ($a0)
/* 0041F250 3C014400 */  lui   $at, 0x4400
/* 0041F254 00807025 */  move  $t6, $a0
/* 0041F258 2C4F0020 */  sltiu $t7, $v0, 0x20
/* 0041F25C 000FC023 */  negu  $t8, $t7
/* 0041F260 0301C824 */  and   $t9, $t8, $at
/* 0041F264 00595004 */  sllv  $t2, $t9, $v0
/* 0041F268 05410037 */  bgez  $t2, .L0041F348
/* 0041F26C 00000000 */   nop   
/* 0041F270 90A40000 */  lbu   $a0, ($a1)
/* 0041F274 3C014400 */  lui   $at, 0x4400
/* 0041F278 2C8C0020 */  sltiu $t4, $a0, 0x20
/* 0041F27C 000C6823 */  negu  $t5, $t4
/* 0041F280 01A17824 */  and   $t7, $t5, $at
/* 0041F284 008FC004 */  sllv  $t8, $t7, $a0
/* 0041F288 07010014 */  bgez  $t8, .L0041F2DC
/* 0041F28C 00000000 */   nop   
/* 0041F290 8DC4002C */  lw    $a0, 0x2c($t6)
/* 0041F294 AFA40000 */  sw    $a0, ($sp)
/* 0041F298 8DD90030 */  lw    $t9, 0x30($t6)
/* 0041F29C AFB90004 */  sw    $t9, 4($sp)
/* 0041F2A0 8CA6002C */  lw    $a2, 0x2c($a1)
/* 0041F2A4 AFA60008 */  sw    $a2, 8($sp)
/* 0041F2A8 8CA70030 */  lw    $a3, 0x30($a1)
/* 0041F2AC AFA7000C */  sw    $a3, 0xc($sp)
/* 0041F2B0 8DCF0024 */  lw    $t7, 0x24($t6)
/* 0041F2B4 AFAF0010 */  sw    $t7, 0x10($sp)
/* 0041F2B8 8CB80024 */  lw    $t8, 0x24($a1)
/* 0041F2BC 03202825 */  move  $a1, $t9
/* 0041F2C0 8F998380 */  lw    $t9, %call16(overlapping)($gp)
/* 0041F2C4 AFB80014 */  sw    $t8, 0x14($sp)
/* 0041F2C8 0320F809 */  jalr  $t9
/* 0041F2CC 00000000 */   nop   
/* 0041F2D0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041F2D4 10000091 */  b     .L0041F51C
/* 0041F2D8 304400FF */   andi  $a0, $v0, 0xff
.L0041F2DC:
/* 0041F2DC 8F998A5C */  lw     $t9, %got(lang)($gp)
/* 0041F2E0 24010002 */  li    $at, 2
/* 0041F2E4 2C8A0020 */  sltiu $t2, $a0, 0x20
/* 0041F2E8 93390000 */  lbu   $t9, ($t9)
/* 0041F2EC 000A6023 */  negu  $t4, $t2
/* 0041F2F0 13210005 */  beq   $t9, $at, .L0041F308
/* 0041F2F4 3C011B00 */   lui   $at, 0x1b00
/* 0041F2F8 01816824 */  and   $t5, $t4, $at
/* 0041F2FC 008D7004 */  sllv  $t6, $t5, $a0
/* 0041F300 05C10008 */  bgez  $t6, .L0041F324
/* 0041F304 00000000 */   nop   
.L0041F308:
/* 0041F308 8F998388 */  lw    $t9, %call16(pointtoheap)($gp)
/* 0041F30C 8FA4002C */  lw    $a0, 0x2c($sp)
/* 0041F310 0320F809 */  jalr  $t9
/* 0041F314 00000000 */   nop   
/* 0041F318 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041F31C 10400003 */  beqz  $v0, .L0041F32C
/* 0041F320 8FA90028 */   lw    $t1, 0x28($sp)
.L0041F324:
/* 0041F324 1000007D */  b     .L0041F51C
/* 0041F328 00002025 */   move  $a0, $zero
.L0041F32C:
/* 0041F32C 8F998384 */  lw    $t9, %call16(aliaswithptr)($gp)
/* 0041F330 2524002C */  addiu $a0, $t1, 0x2c
/* 0041F334 0320F809 */  jalr  $t9
/* 0041F338 00000000 */   nop   
/* 0041F33C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041F340 10000076 */  b     .L0041F51C
/* 0041F344 304400FF */   andi  $a0, $v0, 0xff
.L0041F348:
/* 0041F348 8F8F8A5C */  lw     $t7, %got(lang)($gp)
/* 0041F34C 24010002 */  li    $at, 2
/* 0041F350 2C4B0020 */  sltiu $t3, $v0, 0x20
/* 0041F354 91EF0000 */  lbu   $t7, ($t7)
/* 0041F358 000BC023 */  negu  $t8, $t3
/* 0041F35C 11E10007 */  beq   $t7, $at, .L0041F37C
/* 0041F360 3C011B00 */   lui   $at, 0x1b00
/* 0041F364 0301C824 */  and   $t9, $t8, $at
/* 0041F368 00595004 */  sllv  $t2, $t9, $v0
/* 0041F36C 05400003 */  bltz  $t2, .L0041F37C
/* 0041F370 00000000 */   nop   
/* 0041F374 10000069 */  b     .L0041F51C
/* 0041F378 00002025 */   move  $a0, $zero
.L0041F37C:
/* 0041F37C 8F998388 */  lw    $t9, %call16(pointtoheap)($gp)
/* 0041F380 8FA40028 */  lw    $a0, 0x28($sp)
/* 0041F384 0320F809 */  jalr  $t9
/* 0041F388 00000000 */   nop   
/* 0041F38C 8FAC002C */  lw    $t4, 0x2c($sp)
/* 0041F390 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041F394 8FA90028 */  lw    $t1, 0x28($sp)
/* 0041F398 10400008 */  beqz  $v0, .L0041F3BC
/* 0041F39C 01804025 */   move  $t0, $t4
/* 0041F3A0 8F998388 */  lw    $t9, %call16(pointtoheap)($gp)
/* 0041F3A4 01802025 */  move  $a0, $t4
/* 0041F3A8 0320F809 */  jalr  $t9
/* 0041F3AC 00000000 */   nop   
/* 0041F3B0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041F3B4 10000059 */  b     .L0041F51C
/* 0041F3B8 304400FF */   andi  $a0, $v0, 0xff
.L0041F3BC:
/* 0041F3BC 91040000 */  lbu   $a0, ($t0)
/* 0041F3C0 3C014400 */  lui   $at, 0x4400
/* 0041F3C4 2C8D0020 */  sltiu $t5, $a0, 0x20
/* 0041F3C8 000D7023 */  negu  $t6, $t5
/* 0041F3CC 01C17824 */  and   $t7, $t6, $at
/* 0041F3D0 008F5804 */  sllv  $t3, $t7, $a0
/* 0041F3D4 05610008 */  bgez  $t3, .L0041F3F8
/* 0041F3D8 00000000 */   nop   
/* 0041F3DC 8F998384 */  lw    $t9, %call16(aliaswithptr)($gp)
/* 0041F3E0 2504002C */  addiu $a0, $t0, 0x2c
/* 0041F3E4 0320F809 */  jalr  $t9
/* 0041F3E8 00000000 */   nop   
/* 0041F3EC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041F3F0 1000004A */  b     .L0041F51C
/* 0041F3F4 304400FF */   andi  $a0, $v0, 0xff
.L0041F3F8:
/* 0041F3F8 8F828A5C */  lw     $v0, %got(lang)($gp)
/* 0041F3FC 24010002 */  li    $at, 2
/* 0041F400 2C980020 */  sltiu $t8, $a0, 0x20
/* 0041F404 90420000 */  lbu   $v0, ($v0)
/* 0041F408 10410009 */  beq   $v0, $at, .L0041F430
/* 0041F40C 38430001 */   xori  $v1, $v0, 1
/* 0041F410 0018C823 */  negu  $t9, $t8
/* 0041F414 3C011B00 */  lui   $at, 0x1b00
/* 0041F418 03215024 */  and   $t2, $t9, $at
/* 0041F41C 008A6004 */  sllv  $t4, $t2, $a0
/* 0041F420 05820004 */  bltzl $t4, .L0041F434
/* 0041F424 2C630001 */   sltiu $v1, $v1, 1
/* 0041F428 1000003C */  b     .L0041F51C
/* 0041F42C 00002025 */   move  $a0, $zero
.L0041F430:
/* 0041F430 2C630001 */  sltiu $v1, $v1, 1
.L0041F434:
/* 0041F434 2C630001 */  sltiu $v1, $v1, 1
/* 0041F438 10600008 */  beqz  $v1, .L0041F45C
/* 0041F43C 00000000 */   nop   
/* 0041F440 2C430001 */  sltiu $v1, $v0, 1
/* 0041F444 2C630001 */  sltiu $v1, $v1, 1
/* 0041F448 54600034 */  bnezl $v1, .L0041F51C
/* 0041F44C 306400FF */   andi  $a0, $v1, 0xff
/* 0041F450 8F838AE4 */  lw     $v1, %got(nopalias)($gp)
/* 0041F454 90630000 */  lbu   $v1, ($v1)
/* 0041F458 2C630001 */  sltiu $v1, $v1, 1
.L0041F45C:
/* 0041F45C 5460002F */  bnezl $v1, .L0041F51C
/* 0041F460 306400FF */   andi  $a0, $v1, 0xff
/* 0041F464 8F838AE0 */  lw     $v1, %got(nof77alias)($gp)
/* 0041F468 90630000 */  lbu   $v1, ($v1)
/* 0041F46C 2C630001 */  sltiu $v1, $v1, 1
/* 0041F470 5460002A */  bnezl $v1, .L0041F51C
/* 0041F474 306400FF */   andi  $a0, $v1, 0xff
/* 0041F478 8F838B44 */  lw     $v1, %got(use_c_semantics)($gp)
/* 0041F47C 90630000 */  lbu   $v1, ($v1)
/* 0041F480 54600026 */  bnezl $v1, .L0041F51C
/* 0041F484 306400FF */   andi  $a0, $v1, 0xff
/* 0041F488 91220000 */  lbu   $v0, ($t1)
/* 0041F48C 24050007 */  li    $a1, 7
/* 0041F490 00A21826 */  xor   $v1, $a1, $v0
/* 0041F494 2C630001 */  sltiu $v1, $v1, 1
/* 0041F498 54600020 */  bnezl $v1, .L0041F51C
/* 0041F49C 306400FF */   andi  $a0, $v1, 0xff
/* 0041F4A0 00A41826 */  xor   $v1, $a1, $a0
/* 0041F4A4 2C630001 */  sltiu $v1, $v1, 1
/* 0041F4A8 1460001B */  bnez  $v1, .L0041F518
/* 0041F4AC 2C4D0020 */   sltiu $t5, $v0, 0x20
/* 0041F4B0 000D7023 */  negu  $t6, $t5
/* 0041F4B4 3C011200 */  lui   $at, 0x1200
/* 0041F4B8 01C17824 */  and   $t7, $t6, $at
/* 0041F4BC 004F1804 */  sllv  $v1, $t7, $v0
/* 0041F4C0 28630000 */  slti  $v1, $v1, 0
/* 0041F4C4 10600014 */  beqz  $v1, .L0041F518
/* 0041F4C8 2C8B0020 */   sltiu $t3, $a0, 0x20
/* 0041F4CC 000BC023 */  negu  $t8, $t3
/* 0041F4D0 3C011200 */  lui   $at, 0x1200
/* 0041F4D4 0301C824 */  and   $t9, $t8, $at
/* 0041F4D8 00991804 */  sllv  $v1, $t9, $a0
/* 0041F4DC 28630000 */  slti  $v1, $v1, 0
/* 0041F4E0 5060000E */  beql  $v1, $zero, .L0041F51C
/* 0041F4E4 306400FF */   andi  $a0, $v1, 0xff
/* 0041F4E8 8D240028 */  lw    $a0, 0x28($t1)
/* 0041F4EC 8D25002C */  lw    $a1, 0x2c($t1)
/* 0041F4F0 8F99860C */  lw    $t9, %call16(addreq)($gp)
/* 0041F4F4 AFA40000 */  sw    $a0, ($sp)
/* 0041F4F8 AFA50004 */  sw    $a1, 4($sp)
/* 0041F4FC 8D060028 */  lw    $a2, 0x28($t0)
/* 0041F500 AFA60008 */  sw    $a2, 8($sp)
/* 0041F504 8D07002C */  lw    $a3, 0x2c($t0)
/* 0041F508 0320F809 */  jalr  $t9
/* 0041F50C AFA7000C */   sw    $a3, 0xc($sp)
/* 0041F510 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041F514 00401825 */  move  $v1, $v0
.L0041F518:
/* 0041F518 306400FF */  andi  $a0, $v1, 0xff
.L0041F51C:
/* 0041F51C 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0041F520 27BD0028 */  addiu $sp, $sp, 0x28
/* 0041F524 2C820001 */  sltiu $v0, $a0, 1
/* 0041F528 03E00008 */  jr    $ra
/* 0041F52C 00000000 */   nop   
    .type base_noalias, @function
    .size base_noalias, .-base_noalias
    .end base_noalias
)"");

__asm__(R""(
.set noat
.set noreorder

glabel base_gp_noalias
    .ent base_gp_noalias
    # 0041F6F0 base_in_reg
/* 0041F530 3C1C0FC0 */  .cpload $t9
/* 0041F534 279CAD60 */  
/* 0041F538 0399E021 */  
/* 0041F53C 90820000 */  lbu   $v0, ($a0)
/* 0041F540 3C014400 */  lui   $at, 0x4400
/* 0041F544 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0041F548 2C4E0020 */  sltiu $t6, $v0, 0x20
/* 0041F54C 000E7823 */  negu  $t7, $t6
/* 0041F550 01E1C024 */  and   $t8, $t7, $at
/* 0041F554 0058C804 */  sllv  $t9, $t8, $v0
/* 0041F558 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0041F55C 07210007 */  bgez  $t9, .L0041F57C
/* 0041F560 AFBC0018 */   sw    $gp, 0x18($sp)
/* 0041F564 90830032 */  lbu   $v1, 0x32($a0)
/* 0041F568 30630007 */  andi  $v1, $v1, 7
/* 0041F56C 38630004 */  xori  $v1, $v1, 4
/* 0041F570 2C630001 */  sltiu $v1, $v1, 1
/* 0041F574 10000016 */  b     .L0041F5D0
/* 0041F578 306300FF */   andi  $v1, $v1, 0xff
.L0041F57C:
/* 0041F57C 8F888A5C */  lw     $t0, %got(lang)($gp)
/* 0041F580 24010002 */  li    $at, 2
/* 0041F584 2C490020 */  sltiu $t1, $v0, 0x20
/* 0041F588 91080000 */  lbu   $t0, ($t0)
/* 0041F58C 00095023 */  negu  $t2, $t1
/* 0041F590 11010007 */  beq   $t0, $at, .L0041F5B0
/* 0041F594 3C011B00 */   lui   $at, 0x1b00
/* 0041F598 01415824 */  and   $t3, $t2, $at
/* 0041F59C 004B6004 */  sllv  $t4, $t3, $v0
/* 0041F5A0 05800003 */  bltz  $t4, .L0041F5B0
/* 0041F5A4 00000000 */   nop   
/* 0041F5A8 10000009 */  b     .L0041F5D0
/* 0041F5AC 00001825 */   move  $v1, $zero
.L0041F5B0:
/* 0041F5B0 8F998388 */  lw    $t9, %call16(pointtoheap)($gp)
/* 0041F5B4 0320F809 */  jalr  $t9
/* 0041F5B8 00000000 */   nop   
/* 0041F5BC 10400003 */  beqz  $v0, .L0041F5CC
/* 0041F5C0 8FBC0018 */   lw    $gp, 0x18($sp)
/* 0041F5C4 10000002 */  b     .L0041F5D0
/* 0041F5C8 00001825 */   move  $v1, $zero
.L0041F5CC:
/* 0041F5CC 24030001 */  li    $v1, 1
.L0041F5D0:
/* 0041F5D0 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0041F5D4 27BD0020 */  addiu $sp, $sp, 0x20
/* 0041F5D8 2C620001 */  sltiu $v0, $v1, 1
/* 0041F5DC 03E00008 */  jr    $ra
/* 0041F5E0 00000000 */   nop   
    .type base_gp_noalias, @function
    .size base_gp_noalias, .-base_gp_noalias
    .end base_gp_noalias
)"");

__asm__(R""(
.set noat
.set noreorder

glabel base_sp_noalias
    .ent base_sp_noalias
    # 0041F6F0 base_in_reg
/* 0041F5E4 3C1C0FC0 */  .cpload $t9
/* 0041F5E8 279CACAC */  
/* 0041F5EC 0399E021 */  
/* 0041F5F0 90820000 */  lbu   $v0, ($a0)
/* 0041F5F4 3C014400 */  lui   $at, 0x4400
/* 0041F5F8 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0041F5FC 2C4E0020 */  sltiu $t6, $v0, 0x20
/* 0041F600 000E7823 */  negu  $t7, $t6
/* 0041F604 01E1C024 */  and   $t8, $t7, $at
/* 0041F608 0058C804 */  sllv  $t9, $t8, $v0
/* 0041F60C AFBF001C */  sw    $ra, 0x1c($sp)
/* 0041F610 07210007 */  bgez  $t9, .L0041F630
/* 0041F614 AFBC0018 */   sw    $gp, 0x18($sp)
/* 0041F618 90830032 */  lbu   $v1, 0x32($a0)
/* 0041F61C 30630007 */  andi  $v1, $v1, 7
/* 0041F620 38630004 */  xori  $v1, $v1, 4
/* 0041F624 0003182B */  sltu  $v1, $zero, $v1
/* 0041F628 1000002C */  b     .L0041F6DC
/* 0041F62C 306300FF */   andi  $v1, $v1, 0xff
.L0041F630:
/* 0041F630 8F888A5C */  lw     $t0, %got(lang)($gp)
/* 0041F634 24010002 */  li    $at, 2
/* 0041F638 2C490020 */  sltiu $t1, $v0, 0x20
/* 0041F63C 91080000 */  lbu   $t0, ($t0)
/* 0041F640 00095023 */  negu  $t2, $t1
/* 0041F644 11010007 */  beq   $t0, $at, .L0041F664
/* 0041F648 3C011B00 */   lui   $at, 0x1b00
/* 0041F64C 01415824 */  and   $t3, $t2, $at
/* 0041F650 004B6004 */  sllv  $t4, $t3, $v0
/* 0041F654 05800003 */  bltz  $t4, .L0041F664
/* 0041F658 00000000 */   nop   
/* 0041F65C 1000001F */  b     .L0041F6DC
/* 0041F660 00001825 */   move  $v1, $zero
.L0041F664:
/* 0041F664 8F998388 */  lw    $t9, %call16(pointtoheap)($gp)
/* 0041F668 0320F809 */  jalr  $t9
/* 0041F66C 00000000 */   nop   
/* 0041F670 10400003 */  beqz  $v0, .L0041F680
/* 0041F674 8FBC0018 */   lw    $gp, 0x18($sp)
/* 0041F678 10000018 */  b     .L0041F6DC
/* 0041F67C 00001825 */   move  $v1, $zero
.L0041F680:
/* 0041F680 8F828A5C */  lw     $v0, %got(lang)($gp)
/* 0041F684 24010001 */  li    $at, 1
/* 0041F688 90420000 */  lbu   $v0, ($v0)
/* 0041F68C 14410005 */  bne   $v0, $at, .L0041F6A4
/* 0041F690 00000000 */   nop   
/* 0041F694 8F8D8B44 */  lw     $t5, %got(use_c_semantics)($gp)
/* 0041F698 91AD0000 */  lbu   $t5, ($t5)
/* 0041F69C 11A0000D */  beqz  $t5, .L0041F6D4
/* 0041F6A0 00000000 */   nop   
.L0041F6A4:
/* 0041F6A4 14400009 */  bnez  $v0, .L0041F6CC
/* 0041F6A8 24010005 */   li    $at, 5
/* 0041F6AC 8F8E8AE4 */  lw     $t6, %got(nopalias)($gp)
/* 0041F6B0 91CE0000 */  lbu   $t6, ($t6)
/* 0041F6B4 11C00005 */  beqz  $t6, .L0041F6CC
/* 0041F6B8 00000000 */   nop   
/* 0041F6BC 8F8F8B44 */  lw     $t7, %got(use_c_semantics)($gp)
/* 0041F6C0 91EF0000 */  lbu   $t7, ($t7)
/* 0041F6C4 11E00003 */  beqz  $t7, .L0041F6D4
/* 0041F6C8 00000000 */   nop   
.L0041F6CC:
/* 0041F6CC 14410003 */  bne   $v0, $at, .L0041F6DC
/* 0041F6D0 24030001 */   li    $v1, 1
.L0041F6D4:
/* 0041F6D4 10000001 */  b     .L0041F6DC
/* 0041F6D8 00001825 */   move  $v1, $zero
.L0041F6DC:
/* 0041F6DC 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0041F6E0 27BD0020 */  addiu $sp, $sp, 0x20
/* 0041F6E4 2C620001 */  sltiu $v0, $v1, 1
/* 0041F6E8 03E00008 */  jr    $ra
/* 0041F6EC 00000000 */   nop   
    .type base_sp_noalias, @function
    .size base_sp_noalias, .-base_sp_noalias
    .end base_sp_noalias
)"");

__asm__(R""(
.set noat
.set noreorder

glabel base_in_reg
    .ent base_in_reg
    # 0041FA68 varlodstr
    # 004230F0 func_004230F0
    # 00426FA4 func_00426FA4
/* 0041F6F0 3C1C0FC0 */  .cpload $t9
/* 0041F6F4 279CABA0 */  
/* 0041F6F8 0399E021 */  
/* 0041F6FC 27BDFFB0 */  addiu $sp, $sp, -0x50
/* 0041F700 8F8E8DB0 */  lw     $t6, %got(baseregexpr)($gp)
/* 0041F704 00043880 */  sll   $a3, $a0, 2
/* 0041F708 AFB6002C */  sw    $s6, 0x2c($sp)
/* 0041F70C 25CEFFFC */  addiu $t6, $t6, -4
/* 0041F710 00EE4021 */  addu  $t0, $a3, $t6
/* 0041F714 8D020000 */  lw    $v0, ($t0)
/* 0041F718 0080B025 */  move  $s6, $a0
/* 0041F71C AFBF003C */  sw    $ra, 0x3c($sp)
/* 0041F720 AFBE0038 */  sw    $fp, 0x38($sp)
/* 0041F724 AFBC0034 */  sw    $gp, 0x34($sp)
/* 0041F728 AFB70030 */  sw    $s7, 0x30($sp)
/* 0041F72C AFB50028 */  sw    $s5, 0x28($sp)
/* 0041F730 AFB40024 */  sw    $s4, 0x24($sp)
/* 0041F734 AFB30020 */  sw    $s3, 0x20($sp)
/* 0041F738 AFB2001C */  sw    $s2, 0x1c($sp)
/* 0041F73C AFB10018 */  sw    $s1, 0x18($sp)
/* 0041F740 10400009 */  beqz  $v0, .L0041F768
/* 0041F744 AFB00014 */   sw    $s0, 0x14($sp)
/* 0041F748 90CF0000 */  lbu   $t7, ($a2)
/* 0041F74C 3C014400 */  lui   $at, 0x4400
/* 0041F750 2DF80020 */  sltiu $t8, $t7, 0x20
/* 0041F754 0018C823 */  negu  $t9, $t8
/* 0041F758 03214824 */  and   $t1, $t9, $at
/* 0041F75C 01E95004 */  sllv  $t2, $t1, $t7
/* 0041F760 054300B6 */  bgezl $t2, .L0041FA3C
/* 0041F764 8FBF003C */   lw    $ra, 0x3c($sp)
.L0041F768:
/* 0041F768 1040001B */  beqz  $v0, .L0041F7D8
/* 0041F76C 00000000 */   nop   
/* 0041F770 8F8B8DB4 */  lw     $t3, %got(baseregbase)($gp)
/* 0041F774 8CC2002C */  lw    $v0, 0x2c($a2)
/* 0041F778 8CD80024 */  lw    $t8, 0x24($a2)
/* 0041F77C 256BFFFC */  addiu $t3, $t3, -4
/* 0041F780 00EB6021 */  addu  $t4, $a3, $t3
/* 0041F784 8D830000 */  lw    $v1, ($t4)
/* 0041F788 0058C821 */  addu  $t9, $v0, $t8
/* 0041F78C 8C64002C */  lw    $a0, 0x2c($v1)
/* 0041F790 8C6D0024 */  lw    $t5, 0x24($v1)
/* 0041F794 008D7021 */  addu  $t6, $a0, $t5
/* 0041F798 032E082A */  slt   $at, $t9, $t6
/* 0041F79C 50200003 */  beql  $at, $zero, .L0041F7AC
/* 0041F7A0 0044082A */   slt   $at, $v0, $a0
/* 0041F7A4 01C0C825 */  move  $t9, $t6
/* 0041F7A8 0044082A */  slt   $at, $v0, $a0
.L0041F7AC:
/* 0041F7AC 10200002 */  beqz  $at, .L0041F7B8
/* 0041F7B0 00804825 */   move  $t1, $a0
/* 0041F7B4 00404825 */  move  $t1, $v0
.L0041F7B8:
/* 0041F7B8 03297823 */  subu  $t7, $t9, $t1
/* 0041F7BC ACCF0024 */  sw    $t7, 0x24($a2)
/* 0041F7C0 8C6A002C */  lw    $t2, 0x2c($v1)
/* 0041F7C4 004A082A */  slt   $at, $v0, $t2
/* 0041F7C8 50200003 */  beql  $at, $zero, .L0041F7D8
/* 0041F7CC ACCA002C */   sw    $t2, 0x2c($a2)
/* 0041F7D0 00405025 */  move  $t2, $v0
/* 0041F7D4 ACCA002C */  sw    $t2, 0x2c($a2)
.L0041F7D8:
/* 0041F7D8 8F8B8DB4 */  lw     $t3, %got(baseregbase)($gp)
/* 0041F7DC 8F938DA4 */  lw     $s3, %got(u)($gp)
/* 0041F7E0 AD050000 */  sw    $a1, ($t0)
/* 0041F7E4 256BFFFC */  addiu $t3, $t3, -4
/* 0041F7E8 00EB6021 */  addu  $t4, $a3, $t3
/* 0041F7EC AD860000 */  sw    $a2, ($t4)
/* 0041F7F0 92780001 */  lbu   $t8, 1($s3)
/* 0041F7F4 240D0089 */  li    $t5, 137
/* 0041F7F8 A26D0000 */  sb    $t5, ($s3)
/* 0041F7FC 330EFFE0 */  andi  $t6, $t8, 0xffe0
/* 0041F800 35D90001 */  ori   $t9, $t6, 1
/* 0041F804 A2790001 */  sb    $t9, 1($s3)
/* 0041F808 8F998708 */  lw    $t9, %call16(coloroffset)($gp)
/* 0041F80C AFA60058 */  sw    $a2, 0x58($sp)
/* 0041F810 02C02025 */  move  $a0, $s6
/* 0041F814 0320F809 */  jalr  $t9
/* 0041F818 00000000 */   nop   
/* 0041F81C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0041F820 24090018 */  li    $t1, 24
/* 0041F824 A6620002 */  sh    $v0, 2($s3)
/* 0041F828 AFA90044 */  sw    $t1, 0x44($sp)
/* 0041F82C 24100001 */  li    $s0, 1
/* 0041F830 24140004 */  li    $s4, 4
/* 0041F834 241E0002 */  li    $fp, 2
/* 0041F838 24170001 */  li    $s7, 1
/* 0041F83C 8F958DB0 */  lw     $s5, %got(baseregexpr)($gp)
.L0041F840:
/* 0041F840 8EAF0000 */  lw    $t7, ($s5)
/* 0041F844 51E0004C */  beql  $t7, $zero, .L0041F978
/* 0041F848 8FAB0044 */   lw    $t3, 0x44($sp)
/* 0041F84C 12D00049 */  beq   $s6, $s0, .L0041F974
/* 0041F850 00165080 */   sll   $t2, $s6, 2
/* 0041F854 8F8C8DC4 */  lw     $t4, %got(unaltab)($gp)
/* 0041F858 01565023 */  subu  $t2, $t2, $s6
/* 0041F85C 000A50C0 */  sll   $t2, $t2, 3
/* 0041F860 01565023 */  subu  $t2, $t2, $s6
/* 0041F864 01505821 */  addu  $t3, $t2, $s0
/* 0041F868 258CFFE9 */  addiu $t4, $t4, -0x17
/* 0041F86C 016C8821 */  addu  $s1, $t3, $t4
/* 0041F870 922DFFFF */  lbu   $t5, -1($s1)
/* 0041F874 52ED0040 */  beql  $s7, $t5, .L0041F978
/* 0041F878 8FAB0044 */   lw    $t3, 0x44($sp)
/* 0041F87C 8F988DB4 */  lw     $t8, %got(baseregbase)($gp)
/* 0041F880 8F99827C */  lw    $t9, %call16(base_noalias)($gp)
/* 0041F884 8FA50058 */  lw    $a1, 0x58($sp)
/* 0041F888 2718FFFC */  addiu $t8, $t8, -4
/* 0041F88C 02987021 */  addu  $t6, $s4, $t8
/* 0041F890 0320F809 */  jalr  $t9
/* 0041F894 8DC40000 */   lw    $a0, ($t6)
/* 0041F898 10400018 */  beqz  $v0, .L0041F8FC
/* 0041F89C 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0041F8A0 9239FFFF */  lbu   $t9, -1($s1)
/* 0041F8A4 00104880 */  sll   $t1, $s0, 2
/* 0041F8A8 01304823 */  subu  $t1, $t1, $s0
/* 0041F8AC 17200031 */  bnez  $t9, .L0041F974
/* 0041F8B0 02002025 */   move  $a0, $s0
/* 0041F8B4 8F8A8DC4 */  lw     $t2, %got(unaltab)($gp)
/* 0041F8B8 8F998708 */  lw    $t9, %call16(coloroffset)($gp)
/* 0041F8BC 000948C0 */  sll   $t1, $t1, 3
/* 0041F8C0 01304823 */  subu  $t1, $t1, $s0
/* 0041F8C4 01367821 */  addu  $t7, $t1, $s6
/* 0041F8C8 254AFFE9 */  addiu $t2, $t2, -0x17
/* 0041F8CC 0320F809 */  jalr  $t9
/* 0041F8D0 01EA9021 */   addu  $s2, $t7, $t2
/* 0041F8D4 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0041F8D8 AE620004 */  sw    $v0, 4($s3)
/* 0041F8DC 02602025 */  move  $a0, $s3
/* 0041F8E0 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0041F8E4 0320F809 */  jalr  $t9
/* 0041F8E8 00000000 */   nop   
/* 0041F8EC A23EFFFF */  sb    $fp, -1($s1)
/* 0041F8F0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0041F8F4 1000001F */  b     .L0041F974
/* 0041F8F8 A25EFFFF */   sb    $fp, -1($s2)
.L0041F8FC:
/* 0041F8FC 00105880 */  sll   $t3, $s0, 2
/* 0041F900 8F8D8DC4 */  lw     $t5, %got(unaltab)($gp)
/* 0041F904 01705823 */  subu  $t3, $t3, $s0
/* 0041F908 9238FFFF */  lbu   $t8, -1($s1)
/* 0041F90C 000B58C0 */  sll   $t3, $t3, 3
/* 0041F910 01705823 */  subu  $t3, $t3, $s0
/* 0041F914 01766021 */  addu  $t4, $t3, $s6
/* 0041F918 25ADFFE9 */  addiu $t5, $t5, -0x17
/* 0041F91C 17D80013 */  bne   $fp, $t8, .L0041F96C
/* 0041F920 018D9021 */   addu  $s2, $t4, $t5
/* 0041F924 8F998708 */  lw    $t9, %call16(coloroffset)($gp)
/* 0041F928 02002025 */  move  $a0, $s0
/* 0041F92C 0320F809 */  jalr  $t9
/* 0041F930 00000000 */   nop   
/* 0041F934 926E0001 */  lbu   $t6, 1($s3)
/* 0041F938 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0041F93C AE620004 */  sw    $v0, 4($s3)
/* 0041F940 31D9FFE0 */  andi  $t9, $t6, 0xffe0
/* 0041F944 A2790001 */  sb    $t9, 1($s3)
/* 0041F948 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0041F94C 02602025 */  move  $a0, $s3
/* 0041F950 0320F809 */  jalr  $t9
/* 0041F954 00000000 */   nop   
/* 0041F958 92690001 */  lbu   $t1, 1($s3)
/* 0041F95C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0041F960 312FFFE0 */  andi  $t7, $t1, 0xffe0
/* 0041F964 35EA0001 */  ori   $t2, $t7, 1
/* 0041F968 A26A0001 */  sb    $t2, 1($s3)
.L0041F96C:
/* 0041F96C A237FFFF */  sb    $s7, -1($s1)
/* 0041F970 A257FFFF */  sb    $s7, -1($s2)
.L0041F974:
/* 0041F974 8FAB0044 */  lw    $t3, 0x44($sp)
.L0041F978:
/* 0041F978 26100001 */  addiu $s0, $s0, 1
/* 0041F97C 26940004 */  addiu $s4, $s4, 4
/* 0041F980 160BFFAF */  bne   $s0, $t3, .L0041F840
/* 0041F984 26B50004 */   addiu $s5, $s5, 4
/* 0041F988 8F8C8D94 */  lw     $t4, %got(gpunaltab)($gp)
/* 0041F98C 258CFFFF */  addiu $t4, $t4, -1
/* 0041F990 02CC8021 */  addu  $s0, $s6, $t4
/* 0041F994 920D0000 */  lbu   $t5, ($s0)
/* 0041F998 15A00011 */  bnez  $t5, .L0041F9E0
/* 0041F99C 00000000 */   nop   
/* 0041F9A0 8F998280 */  lw    $t9, %call16(base_gp_noalias)($gp)
/* 0041F9A4 8FA40058 */  lw    $a0, 0x58($sp)
/* 0041F9A8 0320F809 */  jalr  $t9
/* 0041F9AC 00000000 */   nop   
/* 0041F9B0 1040000A */  beqz  $v0, .L0041F9DC
/* 0041F9B4 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0041F9B8 2418001C */  li    $t8, 28
/* 0041F9BC AE780004 */  sw    $t8, 4($s3)
/* 0041F9C0 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0041F9C4 02602025 */  move  $a0, $s3
/* 0041F9C8 0320F809 */  jalr  $t9
/* 0041F9CC 00000000 */   nop   
/* 0041F9D0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0041F9D4 10000002 */  b     .L0041F9E0
/* 0041F9D8 A21E0000 */   sb    $fp, ($s0)
.L0041F9DC:
/* 0041F9DC A2170000 */  sb    $s7, ($s0)
.L0041F9E0:
/* 0041F9E0 8F8E8D98 */  lw     $t6, %got(spunaltab)($gp)
/* 0041F9E4 25CEFFFF */  addiu $t6, $t6, -1
/* 0041F9E8 02CE8021 */  addu  $s0, $s6, $t6
/* 0041F9EC 92190000 */  lbu   $t9, ($s0)
/* 0041F9F0 57200012 */  bnezl $t9, .L0041FA3C
/* 0041F9F4 8FBF003C */   lw    $ra, 0x3c($sp)
/* 0041F9F8 8F998284 */  lw    $t9, %call16(base_sp_noalias)($gp)
/* 0041F9FC 8FA40058 */  lw    $a0, 0x58($sp)
/* 0041FA00 0320F809 */  jalr  $t9
/* 0041FA04 00000000 */   nop   
/* 0041FA08 1040000A */  beqz  $v0, .L0041FA34
/* 0041FA0C 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0041FA10 2409001D */  li    $t1, 29
/* 0041FA14 AE690004 */  sw    $t1, 4($s3)
/* 0041FA18 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0041FA1C 02602025 */  move  $a0, $s3
/* 0041FA20 0320F809 */  jalr  $t9
/* 0041FA24 00000000 */   nop   
/* 0041FA28 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0041FA2C 10000002 */  b     .L0041FA38
/* 0041FA30 A21E0000 */   sb    $fp, ($s0)
.L0041FA34:
/* 0041FA34 A2170000 */  sb    $s7, ($s0)
.L0041FA38:
/* 0041FA38 8FBF003C */  lw    $ra, 0x3c($sp)
.L0041FA3C:
/* 0041FA3C 8FB00014 */  lw    $s0, 0x14($sp)
/* 0041FA40 8FB10018 */  lw    $s1, 0x18($sp)
/* 0041FA44 8FB2001C */  lw    $s2, 0x1c($sp)
/* 0041FA48 8FB30020 */  lw    $s3, 0x20($sp)
/* 0041FA4C 8FB40024 */  lw    $s4, 0x24($sp)
/* 0041FA50 8FB50028 */  lw    $s5, 0x28($sp)
/* 0041FA54 8FB6002C */  lw    $s6, 0x2c($sp)
/* 0041FA58 8FB70030 */  lw    $s7, 0x30($sp)
/* 0041FA5C 8FBE0038 */  lw    $fp, 0x38($sp)
/* 0041FA60 03E00008 */  jr    $ra
/* 0041FA64 27BD0050 */   addiu $sp, $sp, 0x50
    .type base_in_reg, @function
    .size base_in_reg, .-base_in_reg
    .end base_in_reg
)"");

__asm__(R""(
.set noat
.set noreorder

glabel varlodstr
    .ent varlodstr
    # 0042269C gen_outparcode
    # 004230F0 func_004230F0
    # 00426FA4 func_00426FA4
    # 0042BF08 reemit
/* 0041FA68 3C1C0FC0 */  .cpload $t9
/* 0041FA6C 279CA828 */  
/* 0041FA70 0399E021 */  
/* 0041FA74 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0041FA78 AFA40028 */  sw    $a0, 0x28($sp)
/* 0041FA7C AFA70034 */  sw    $a3, 0x34($sp)
/* 0041FA80 93A7002B */  lbu   $a3, 0x2b($sp)
/* 0041FA84 8F998278 */  lw    $t9, %call16(inreg)($gp)
/* 0041FA88 AFA5002C */  sw    $a1, 0x2c($sp)
/* 0041FA8C 00A02025 */  move  $a0, $a1
/* 0041FA90 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0041FA94 AFA60030 */  sw    $a2, 0x30($sp)
/* 0041FA98 00C02825 */  move  $a1, $a2
/* 0041FA9C 38E70052 */  xori  $a3, $a3, 0x52
/* 0041FAA0 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0041FAA4 A3A00027 */  sb    $zero, 0x27($sp)
/* 0041FAA8 2CE70001 */  sltiu $a3, $a3, 1
/* 0041FAAC 0320F809 */  jalr  $t9
/* 0041FAB0 27A60020 */   addiu $a2, $sp, 0x20
/* 0041FAB4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041FAB8 10400012 */  beqz  $v0, .L0041FB04
/* 0041FABC 8FA60034 */   lw    $a2, 0x34($sp)
/* 0041FAC0 50C00008 */  beql  $a2, $zero, .L0041FAE4
/* 0041FAC4 8FAE002C */   lw    $t6, 0x2c($sp)
/* 0041FAC8 8F998288 */  lw    $t9, %call16(base_in_reg)($gp)
/* 0041FACC 8FA40020 */  lw    $a0, 0x20($sp)
/* 0041FAD0 8FA5002C */  lw    $a1, 0x2c($sp)
/* 0041FAD4 0320F809 */  jalr  $t9
/* 0041FAD8 00000000 */   nop   
/* 0041FADC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041FAE0 8FAE002C */  lw    $t6, 0x2c($sp)
.L0041FAE4:
/* 0041FAE4 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 0041FAE8 93A4002B */  lbu   $a0, 0x2b($sp)
/* 0041FAEC 8FA50020 */  lw    $a1, 0x20($sp)
/* 0041FAF0 91C60001 */  lbu   $a2, 1($t6)
/* 0041FAF4 0320F809 */  jalr  $t9
/* 0041FAF8 91C70018 */   lbu   $a3, 0x18($t6)
/* 0041FAFC 10000003 */  b     .L0041FB0C
/* 0041FB00 8FBC0018 */   lw    $gp, 0x18($sp)
.L0041FB04:
/* 0041FB04 240F0001 */  li    $t7, 1
/* 0041FB08 A3AF0027 */  sb    $t7, 0x27($sp)
.L0041FB0C:
/* 0041FB0C 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0041FB10 93A20027 */  lbu   $v0, 0x27($sp)
/* 0041FB14 27BD0028 */  addiu $sp, $sp, 0x28
/* 0041FB18 03E00008 */  jr    $ra
/* 0041FB1C 00000000 */   nop   
    .type varlodstr, @function
    .size varlodstr, .-varlodstr
    .end varlodstr
)"");

__asm__(R""(
.set noat
.set noreorder

glabel spilltemplodstr
    .ent spilltemplodstr
    # 004230F0 func_004230F0
    # 00426FA4 func_00426FA4
    # 0042AADC func_0042AADC
    # 0042BF08 reemit
/* 0041FB20 3C1C0FC0 */  .cpload $t9
/* 0041FB24 279CA770 */  
/* 0041FB28 0399E021 */  
/* 0041FB2C 8F878DA4 */  lw     $a3, %got(u)($gp)
/* 0041FB30 8F8D8980 */  lw     $t5, %got(curblk)($gp)
/* 0041FB34 240E008B */  li    $t6, 139
/* 0041FB38 90E20001 */  lbu   $v0, 1($a3)
/* 0041FB3C A0EE0000 */  sb    $t6, ($a3)
/* 0041FB40 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0041FB44 00027EC0 */  sll   $t7, $v0, 0x1b
/* 0041FB48 000FC6C2 */  srl   $t8, $t7, 0x1b
/* 0041FB4C 00B8C826 */  xor   $t9, $a1, $t8
/* 0041FB50 3328001F */  andi  $t0, $t9, 0x1f
/* 0041FB54 01025026 */  xor   $t2, $t0, $v0
/* 0041FB58 314BFF1F */  andi  $t3, $t2, 0xff1f
/* 0041FB5C 356C0020 */  ori   $t4, $t3, 0x20
/* 0041FB60 A0EA0001 */  sb    $t2, 1($a3)
/* 0041FB64 A0EC0001 */  sb    $t4, 1($a3)
/* 0041FB68 8CCE0004 */  lw    $t6, 4($a2)
/* 0041FB6C 8DAD0000 */  lw    $t5, ($t5)
/* 0041FB70 2401000E */  li    $at, 14
/* 0041FB74 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0041FB78 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0041FB7C AFA40020 */  sw    $a0, 0x20($sp)
/* 0041FB80 AFA50024 */  sw    $a1, 0x24($sp)
/* 0041FB84 A4E00002 */  sh    $zero, 2($a3)
/* 0041FB88 ACEE000C */  sw    $t6, 0xc($a3)
/* 0041FB8C 10A10017 */  beq   $a1, $at, .L0041FBEC
/* 0041FB90 ACED0004 */   sw    $t5, 4($a3)
/* 0041FB94 8F99865C */  lw    $t9, %call16(sizeoftyp)($gp)
/* 0041FB98 00A02025 */  move  $a0, $a1
/* 0041FB9C AFA60028 */  sw    $a2, 0x28($sp)
/* 0041FBA0 0320F809 */  jalr  $t9
/* 0041FBA4 00000000 */   nop   
/* 0041FBA8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041FBAC 8FA60028 */  lw    $a2, 0x28($sp)
/* 0041FBB0 8F878DA4 */  lw     $a3, %got(u)($gp)
/* 0041FBB4 8F8F8AC4 */  lw     $t7, %got(dogenvreg)($gp)
/* 0041FBB8 ACE20008 */  sw    $v0, 8($a3)
/* 0041FBBC 91EF0000 */  lbu   $t7, ($t7)
/* 0041FBC0 51E0000D */  beql  $t7, $zero, .L0041FBF8
/* 0041FBC4 93B90023 */   lbu   $t9, 0x23($sp)
/* 0041FBC8 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0041FBCC 00E02025 */  move  $a0, $a3
/* 0041FBD0 AFA60028 */  sw    $a2, 0x28($sp)
/* 0041FBD4 0320F809 */  jalr  $t9
/* 0041FBD8 00000000 */   nop   
/* 0041FBDC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041FBE0 8FA60028 */  lw    $a2, 0x28($sp)
/* 0041FBE4 10000003 */  b     .L0041FBF4
/* 0041FBE8 8F878DA4 */   lw     $a3, %got(u)($gp)
.L0041FBEC:
/* 0041FBEC 8CD80008 */  lw    $t8, 8($a2)
/* 0041FBF0 ACF80008 */  sw    $t8, 8($a3)
.L0041FBF4:
/* 0041FBF4 93B90023 */  lbu   $t9, 0x23($sp)
.L0041FBF8:
/* 0041FBF8 00E02025 */  move  $a0, $a3
/* 0041FBFC AFA60028 */  sw    $a2, 0x28($sp)
/* 0041FC00 A0F90000 */  sb    $t9, ($a3)
/* 0041FC04 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0041FC08 0320F809 */  jalr  $t9
/* 0041FC0C 00000000 */   nop   
/* 0041FC10 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041FC14 8FA60028 */  lw    $a2, 0x28($sp)
/* 0041FC18 8F888B48 */  lw     $t0, %got(stack_reversed)($gp)
/* 0041FC1C 91080000 */  lbu   $t0, ($t0)
/* 0041FC20 1500000B */  bnez  $t0, .L0041FC50
/* 0041FC24 00000000 */   nop   
/* 0041FC28 8F8289FC */  lw     $v0, %got(highestmdef)($gp)
/* 0041FC2C 8CC90004 */  lw    $t1, 4($a2)
/* 0041FC30 8C4B0000 */  lw    $t3, ($v0)
/* 0041FC34 00095023 */  negu  $t2, $t1
/* 0041FC38 016A082A */  slt   $at, $t3, $t2
/* 0041FC3C 10200002 */  beqz  $at, .L0041FC48
/* 0041FC40 00000000 */   nop   
/* 0041FC44 01405825 */  move  $t3, $t2
.L0041FC48:
/* 0041FC48 10000009 */  b     .L0041FC70
/* 0041FC4C AC4B0000 */   sw    $t3, ($v0)
.L0041FC50:
/* 0041FC50 8F8289FC */  lw     $v0, %got(highestmdef)($gp)
/* 0041FC54 8CCC0004 */  lw    $t4, 4($a2)
/* 0041FC58 8C4D0000 */  lw    $t5, ($v0)
/* 0041FC5C 01AC082A */  slt   $at, $t5, $t4
/* 0041FC60 50200003 */  beql  $at, $zero, .L0041FC70
/* 0041FC64 AC4D0000 */   sw    $t5, ($v0)
/* 0041FC68 01806825 */  move  $t5, $t4
/* 0041FC6C AC4D0000 */  sw    $t5, ($v0)
.L0041FC70:
/* 0041FC70 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0041FC74 27BD0020 */  addiu $sp, $sp, 0x20
/* 0041FC78 03E00008 */  jr    $ra
/* 0041FC7C 00000000 */   nop   
    .type spilltemplodstr, @function
    .size spilltemplodstr, .-spilltemplodstr
    .end spilltemplodstr
)"");

__asm__(R""(
.set noat
.set noreorder

glabel genloadaddr
    .ent genloadaddr
    # 00422D04 func_00422D04
    # 004230F0 func_004230F0
    # 00426DE8 func_00426DE8
    # 00426FA4 func_00426FA4
/* 0041FC80 3C1C0FC0 */  .cpload $t9
/* 0041FC84 279CA610 */  
/* 0041FC88 0399E021 */  
/* 0041FC8C 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0041FC90 AFA40020 */  sw    $a0, 0x20($sp)
/* 0041FC94 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 0041FC98 AFA50024 */  sw    $a1, 0x24($sp)
/* 0041FC9C 93AE0023 */  lbu   $t6, 0x23($sp)
/* 0041FCA0 90820001 */  lbu   $v0, 1($a0)
/* 0041FCA4 93AF0027 */  lbu   $t7, 0x27($sp)
/* 0041FCA8 A08E0000 */  sb    $t6, ($a0)
/* 0041FCAC 0002C600 */  sll   $t8, $v0, 0x18
/* 0041FCB0 0018CF42 */  srl   $t9, $t8, 0x1d
/* 0041FCB4 01F94026 */  xor   $t0, $t7, $t9
/* 0041FCB8 8FAD0030 */  lw    $t5, 0x30($sp)
/* 0041FCBC 8FAE0034 */  lw    $t6, 0x34($sp)
/* 0041FCC0 00084F40 */  sll   $t1, $t0, 0x1d
/* 0041FCC4 00095602 */  srl   $t2, $t1, 0x18
/* 0041FCC8 01425826 */  xor   $t3, $t2, $v0
/* 0041FCCC A08B0001 */  sb    $t3, 1($a0)
/* 0041FCD0 AC860004 */  sw    $a2, 4($a0)
/* 0041FCD4 AC87000C */  sw    $a3, 0xc($a0)
/* 0041FCD8 AC8D0010 */  sw    $t5, 0x10($a0)
/* 0041FCDC AC8E0008 */  sw    $t6, 8($a0)
/* 0041FCE0 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0041FCE4 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0041FCE8 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0041FCEC 0320F809 */  jalr  $t9
/* 0041FCF0 AFA60028 */   sw    $a2, 0x28($sp)
/* 0041FCF4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041FCF8 8FB80028 */  lw    $t8, 0x28($sp)
/* 0041FCFC 8F8F8980 */  lw     $t7, %got(curblk)($gp)
/* 0041FD00 8DEF0000 */  lw    $t7, ($t7)
/* 0041FD04 570F000A */  bnel  $t8, $t7, .L0041FD30
/* 0041FD08 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0041FD0C 93B90027 */  lbu   $t9, 0x27($sp)
/* 0041FD10 24010001 */  li    $at, 1
/* 0041FD14 57210006 */  bnel  $t9, $at, .L0041FD30
/* 0041FD18 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0041FD1C 8F888970 */  lw     $t0, %got(tempdisp)($gp)
/* 0041FD20 8F8189FC */  lw     $at, %got(highestmdef)($gp)
/* 0041FD24 8D080000 */  lw    $t0, ($t0)
/* 0041FD28 AC280000 */  sw    $t0, ($at)
/* 0041FD2C 8FBF001C */  lw    $ra, 0x1c($sp)
.L0041FD30:
/* 0041FD30 27BD0020 */  addiu $sp, $sp, 0x20
/* 0041FD34 03E00008 */  jr    $ra
/* 0041FD38 00000000 */   nop   
    .type genloadaddr, @function
    .size genloadaddr, .-genloadaddr
    .end genloadaddr
)"");

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

__asm__(R""(
.set noat
.set noreorder

glabel genloadrnum
    .ent genloadrnum
    # 004230F0 func_004230F0
    # 00426FA4 func_00426FA4
/* 0042018C 3C1C0FC0 */  .cpload $t9
/* 00420190 279CA104 */  
/* 00420194 0399E021 */  
/* 00420198 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0042019C AFB00014 */  sw    $s0, 0x14($sp)
/* 004201A0 8F908DA4 */  lw     $s0, %got(u)($gp)
/* 004201A4 240E0095 */  li    $t6, 149
/* 004201A8 AFBF001C */  sw    $ra, 0x1c($sp)
/* 004201AC 92020001 */  lbu   $v0, 1($s0)
/* 004201B0 AFBC0018 */  sw    $gp, 0x18($sp)
/* 004201B4 AFA40020 */  sw    $a0, 0x20($sp)
/* 004201B8 00027EC0 */  sll   $t7, $v0, 0x1b
/* 004201BC 000FC6C2 */  srl   $t8, $t7, 0x1b
/* 004201C0 0098C826 */  xor   $t9, $a0, $t8
/* 004201C4 3328001F */  andi  $t0, $t9, 0x1f
/* 004201C8 01024826 */  xor   $t1, $t0, $v0
/* 004201CC AFA7002C */  sw    $a3, 0x2c($sp)
/* 004201D0 A20E0000 */  sb    $t6, ($s0)
/* 004201D4 A2090001 */  sb    $t1, 1($s0)
/* 004201D8 AE060008 */  sw    $a2, 8($s0)
/* 004201DC 10E00006 */  beqz  $a3, .L004201F8
/* 004201E0 AE050004 */   sw    $a1, 4($s0)
/* 004201E4 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 004201E8 02002025 */  move  $a0, $s0
/* 004201EC 0320F809 */  jalr  $t9
/* 004201F0 00000000 */   nop   
/* 004201F4 8FBC0018 */  lw    $gp, 0x18($sp)
.L004201F8:
/* 004201F8 8FBF001C */  lw    $ra, 0x1c($sp)
/* 004201FC 8FB00014 */  lw    $s0, 0x14($sp)
/* 00420200 27BD0020 */  addiu $sp, $sp, 0x20
/* 00420204 03E00008 */  jr    $ra
/* 00420208 00000000 */   nop   
    .type genloadrnum, @function
    .size genloadrnum, .-genloadrnum
    .end genloadrnum
)"");

__asm__(R""(
.set noat
.set noreorder

glabel gen_static_link
    .ent gen_static_link
    # 00420A3C prolog
    # 0042BF08 reemit
/* 0042020C 3C1C0FC0 */  .cpload $t9
/* 00420210 279CA084 */  
/* 00420214 0399E021 */  
/* 00420218 8F8A89AC */  lw     $t2, %got(graphhead)($gp)
/* 0042021C 27BDFFA0 */  addiu $sp, $sp, -0x60
/* 00420220 AFBF0024 */  sw    $ra, 0x24($sp)
/* 00420224 8D4A0000 */  lw    $t2, ($t2)
/* 00420228 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0042022C AFB1001C */  sw    $s1, 0x1c($sp)
/* 00420230 8D430044 */  lw    $v1, 0x44($t2)
/* 00420234 AFB00018 */  sw    $s0, 0x18($sp)
/* 00420238 24050001 */  li    $a1, 1
/* 0042023C 50600017 */  beql  $v1, $zero, .L0042029C
/* 00420240 24060001 */   li    $a2, 1
/* 00420244 906E0000 */  lbu   $t6, ($v1)
/* 00420248 24080003 */  li    $t0, 3
/* 0042024C 550E0013 */  bnel  $t0, $t6, .L0042029C
/* 00420250 24060001 */   li    $a2, 1
/* 00420254 906F0016 */  lbu   $t7, 0x16($v1)
/* 00420258 24060001 */  li    $a2, 1
/* 0042025C 31F80007 */  andi  $t8, $t7, 7
/* 00420260 54D8000E */  bnel  $a2, $t8, .L0042029C
/* 00420264 24060001 */   li    $a2, 1
/* 00420268 8F898980 */  lw     $t1, %got(curblk)($gp)
/* 0042026C 8C6B0014 */  lw    $t3, 0x14($v1)
/* 00420270 8D390000 */  lw    $t9, ($t1)
/* 00420274 000B62C2 */  srl   $t4, $t3, 0xb
/* 00420278 572C0008 */  bnel  $t9, $t4, .L0042029C
/* 0042027C 24060001 */   li    $a2, 1
/* 00420280 8F9189C8 */  lw     $s1, %got(staticlinkloc)($gp)
/* 00420284 8C6E0010 */  lw    $t6, 0x10($v1)
/* 00420288 8E2D0000 */  lw    $t5, ($s1)
/* 0042028C 55AE0003 */  bnel  $t5, $t6, .L0042029C
/* 00420290 24060001 */   li    $a2, 1
/* 00420294 00002825 */  move  $a1, $zero
/* 00420298 24060001 */  li    $a2, 1
.L0042029C:
/* 0042029C 24080003 */  li    $t0, 3
/* 004202A0 8F898980 */  lw     $t1, %got(curblk)($gp)
/* 004202A4 14A6002D */  bne   $a1, $a2, .L0042035C
/* 004202A8 8F9189C8 */   lw     $s1, %got(staticlinkloc)($gp)
/* 004202AC 8F908D34 */  lw     $s0, %got(firsterreg)($gp)
/* 004202B0 8E100000 */  lw    $s0, ($s0)
/* 004202B4 14A60029 */  bne   $a1, $a2, .L0042035C
/* 004202B8 AFB00054 */   sw    $s0, 0x54($sp)
/* 004202BC 8F878D40 */  lw     $a3, %got(lasteereg)($gp)
/* 004202C0 00107880 */  sll   $t7, $s0, 2
/* 004202C4 014F2021 */  addu  $a0, $t2, $t7
/* 004202C8 8CE70000 */  lw    $a3, ($a3)
/* 004202CC AFB00054 */  sw    $s0, 0x54($sp)
/* 004202D0 00F0082A */  slt   $at, $a3, $s0
/* 004202D4 14200021 */  bnez  $at, .L0042035C
/* 004202D8 00000000 */   nop   
/* 004202DC 8C830040 */  lw    $v1, 0x40($a0)
.L004202E0:
/* 004202E0 50600017 */  beql  $v1, $zero, .L00420340
/* 004202E4 26100001 */   addiu $s0, $s0, 1
/* 004202E8 90780000 */  lbu   $t8, ($v1)
/* 004202EC 55180011 */  bnel  $t0, $t8, .L00420334
/* 004202F0 26100001 */   addiu $s0, $s0, 1
/* 004202F4 906B0016 */  lbu   $t3, 0x16($v1)
/* 004202F8 31790007 */  andi  $t9, $t3, 7
/* 004202FC 54D9000D */  bnel  $a2, $t9, .L00420334
/* 00420300 26100001 */   addiu $s0, $s0, 1
/* 00420304 8C6D0014 */  lw    $t5, 0x14($v1)
/* 00420308 8D2C0000 */  lw    $t4, ($t1)
/* 0042030C 000D72C2 */  srl   $t6, $t5, 0xb
/* 00420310 558E0008 */  bnel  $t4, $t6, .L00420334
/* 00420314 26100001 */   addiu $s0, $s0, 1
/* 00420318 8E2F0000 */  lw    $t7, ($s1)
/* 0042031C 8C780010 */  lw    $t8, 0x10($v1)
/* 00420320 55F80004 */  bnel  $t7, $t8, .L00420334
/* 00420324 26100001 */   addiu $s0, $s0, 1
/* 00420328 10000006 */  b     .L00420344
/* 0042032C 24050002 */   li    $a1, 2
/* 00420330 26100001 */  addiu $s0, $s0, 1
.L00420334:
/* 00420334 10000003 */  b     .L00420344
/* 00420338 24840004 */   addiu $a0, $a0, 4
/* 0042033C 26100001 */  addiu $s0, $s0, 1
.L00420340:
/* 00420340 24840004 */  addiu $a0, $a0, 4
.L00420344:
/* 00420344 14A60005 */  bne   $a1, $a2, .L0042035C
/* 00420348 AFB00054 */   sw    $s0, 0x54($sp)
/* 0042034C 00F0082A */  slt   $at, $a3, $s0
/* 00420350 5020FFE3 */  beql  $at, $zero, .L004202E0
/* 00420354 8C830040 */   lw    $v1, 0x40($a0)
/* 00420358 AFB00054 */  sw    $s0, 0x54($sp)
.L0042035C:
/* 0042035C 14A60090 */  bne   $a1, $a2, .L004205A0
/* 00420360 8FB00054 */   lw    $s0, 0x54($sp)
/* 00420364 93AB0052 */  lbu   $t3, 0x52($sp)
/* 00420368 8D2C0000 */  lw    $t4, ($t1)
/* 0042036C 3179FFF8 */  andi  $t9, $t3, 0xfff8
/* 00420370 372D0001 */  ori   $t5, $t9, 1
/* 00420374 A3AD0052 */  sb    $t5, 0x52($sp)
/* 00420378 8FAE0050 */  lw    $t6, 0x50($sp)
/* 0042037C 8E2D0000 */  lw    $t5, ($s1)
/* 00420380 000E7AC2 */  srl   $t7, $t6, 0xb
/* 00420384 018FC026 */  xor   $t8, $t4, $t7
/* 00420388 00185AC0 */  sll   $t3, $t8, 0xb
/* 0042038C 016EC826 */  xor   $t9, $t3, $t6
/* 00420390 AFB90050 */  sw    $t9, 0x50($sp)
/* 00420394 27AC004C */  addiu $t4, $sp, 0x4c
/* 00420398 AFAD004C */  sw    $t5, 0x4c($sp)
/* 0042039C 8D840000 */  lw    $a0, ($t4)
/* 004203A0 8F998338 */  lw    $t9, %call16(isvarihash)($gp)
/* 004203A4 AFA40000 */  sw    $a0, ($sp)
/* 004203A8 8D850004 */  lw    $a1, 4($t4)
/* 004203AC A3A0004B */  sb    $zero, 0x4b($sp)
/* 004203B0 0320F809 */  jalr  $t9
/* 004203B4 AFA50004 */   sw    $a1, 4($sp)
/* 004203B8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004203BC 00025880 */  sll   $t3, $v0, 2
/* 004203C0 93A3004B */  lbu   $v1, 0x4b($sp)
/* 004203C4 8F8E8DF0 */  lw     $t6, %got(itable)($gp)
/* 004203C8 24080003 */  li    $t0, 3
/* 004203CC 016EC821 */  addu  $t9, $t3, $t6
/* 004203D0 8F300000 */  lw    $s0, ($t9)
/* 004203D4 1200001B */  beqz  $s0, .L00420444
/* 004203D8 00000000 */   nop   
/* 004203DC 920D0000 */  lbu   $t5, ($s0)
.L004203E0:
/* 004203E0 550D0014 */  bnel  $t0, $t5, .L00420434
/* 004203E4 8E10000C */   lw    $s0, 0xc($s0)
/* 004203E8 8E040010 */  lw    $a0, 0x10($s0)
/* 004203EC 8E050014 */  lw    $a1, 0x14($s0)
/* 004203F0 27B8004C */  addiu $t8, $sp, 0x4c
/* 004203F4 AFA40000 */  sw    $a0, ($sp)
/* 004203F8 AFA50004 */  sw    $a1, 4($sp)
/* 004203FC 8F060000 */  lw    $a2, ($t8)
/* 00420400 8F99860C */  lw    $t9, %call16(addreq)($gp)
/* 00420404 AFA60008 */  sw    $a2, 8($sp)
/* 00420408 8F070004 */  lw    $a3, 4($t8)
/* 0042040C A3A3004B */  sb    $v1, 0x4b($sp)
/* 00420410 0320F809 */  jalr  $t9
/* 00420414 AFA7000C */   sw    $a3, 0xc($sp)
/* 00420418 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0042041C 93A3004B */  lbu   $v1, 0x4b($sp)
/* 00420420 10400003 */  beqz  $v0, .L00420430
/* 00420424 24080003 */   li    $t0, 3
/* 00420428 10000002 */  b     .L00420434
/* 0042042C 24030001 */   li    $v1, 1
.L00420430:
/* 00420430 8E10000C */  lw    $s0, 0xc($s0)
.L00420434:
/* 00420434 14600003 */  bnez  $v1, .L00420444
/* 00420438 00000000 */   nop   
/* 0042043C 5600FFE8 */  bnezl $s0, .L004203E0
/* 00420440 920D0000 */   lbu   $t5, ($s0)
.L00420444:
/* 00420444 14600022 */  bnez  $v1, .L004204D0
/* 00420448 00000000 */   nop   
/* 0042044C 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 00420450 24040040 */  li    $a0, 64
/* 00420454 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 00420458 0320F809 */  jalr  $t9
/* 0042045C 00000000 */   nop   
/* 00420460 9059002E */  lbu   $t9, 0x2e($v0)
/* 00420464 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00420468 24080003 */  li    $t0, 3
/* 0042046C 332DFFF8 */  andi  $t5, $t9, 0xfff8
/* 00420470 8F8F8980 */  lw     $t7, %got(curblk)($gp)
/* 00420474 35AC0001 */  ori   $t4, $t5, 1
/* 00420478 A04C002E */  sb    $t4, 0x2e($v0)
/* 0042047C 8C43002C */  lw    $v1, 0x2c($v0)
/* 00420480 A0480000 */  sb    $t0, ($v0)
/* 00420484 8DEF0000 */  lw    $t7, ($t7)
/* 00420488 0003C2C2 */  srl   $t8, $v1, 0xb
/* 0042048C 8F8C897C */  lw     $t4, %got(curlevel)($gp)
/* 00420490 01F85826 */  xor   $t3, $t7, $t8
/* 00420494 000B72C0 */  sll   $t6, $t3, 0xb
/* 00420498 01C3C826 */  xor   $t9, $t6, $v1
/* 0042049C AC59002C */  sw    $t9, 0x2c($v0)
/* 004204A0 8E2D0000 */  lw    $t5, ($s1)
/* 004204A4 8F858B6C */  lw     $a1, %got(curproc)($gp)
/* 004204A8 00402025 */  move  $a0, $v0
/* 004204AC AC4D0028 */  sw    $t5, 0x28($v0)
/* 004204B0 8D8C0000 */  lw    $t4, ($t4)
/* 004204B4 A04C002F */  sb    $t4, 0x2f($v0)
/* 004204B8 8F998490 */  lw    $t9, %call16(furthervarintree)($gp)
/* 004204BC 8CA50000 */  lw    $a1, ($a1)
/* 004204C0 0320F809 */  jalr  $t9
/* 004204C4 00000000 */   nop   
/* 004204C8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004204CC 304300FF */  andi  $v1, $v0, 0xff
.L004204D0:
/* 004204D0 50600045 */  beql  $v1, $zero, .L004205E8
/* 004204D4 8FBF0024 */   lw    $ra, 0x24($sp)
/* 004204D8 8F908DA4 */  lw     $s0, %got(u)($gp)
/* 004204DC 8F8C8980 */  lw     $t4, %got(curblk)($gp)
/* 004204E0 240F0070 */  li    $t7, 112
/* 004204E4 92180001 */  lbu   $t8, 1($s0)
/* 004204E8 A20F0000 */  sb    $t7, ($s0)
/* 004204EC 8E2F0000 */  lw    $t7, ($s1)
/* 004204F0 330EFFE0 */  andi  $t6, $t8, 0xffe0
/* 004204F4 31D9FF1F */  andi  $t9, $t6, 0xff1f
/* 004204F8 372D0020 */  ori   $t5, $t9, 0x20
/* 004204FC A20E0001 */  sb    $t6, 1($s0)
/* 00420500 A20D0001 */  sb    $t5, 1($s0)
/* 00420504 8D8C0000 */  lw    $t4, ($t4)
/* 00420508 24180004 */  li    $t8, 4
/* 0042050C AE180008 */  sw    $t8, 8($s0)
/* 00420510 AE0F000C */  sw    $t7, 0xc($s0)
/* 00420514 AE0C0004 */  sw    $t4, 4($s0)
/* 00420518 8F998708 */  lw    $t9, %call16(coloroffset)($gp)
/* 0042051C 24040001 */  li    $a0, 1
/* 00420520 0320F809 */  jalr  $t9
/* 00420524 00000000 */   nop   
/* 00420528 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0042052C A6020002 */  sh    $v0, 2($s0)
/* 00420530 02002025 */  move  $a0, $s0
/* 00420534 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 00420538 0320F809 */  jalr  $t9
/* 0042053C 00000000 */   nop   
/* 00420540 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00420544 8F8B8B48 */  lw     $t3, %got(stack_reversed)($gp)
/* 00420548 916B0000 */  lbu   $t3, ($t3)
/* 0042054C 1560000B */  bnez  $t3, .L0042057C
/* 00420550 00000000 */   nop   
/* 00420554 8F8289FC */  lw     $v0, %got(highestmdef)($gp)
/* 00420558 8E2E0000 */  lw    $t6, ($s1)
/* 0042055C 8C4D0000 */  lw    $t5, ($v0)
/* 00420560 000EC823 */  negu  $t9, $t6
/* 00420564 01B9082A */  slt   $at, $t5, $t9
/* 00420568 10200002 */  beqz  $at, .L00420574
/* 0042056C 00000000 */   nop   
/* 00420570 03206825 */  move  $t5, $t9
.L00420574:
/* 00420574 1000001B */  b     .L004205E4
/* 00420578 AC4D0000 */   sw    $t5, ($v0)
.L0042057C:
/* 0042057C 8F8289FC */  lw     $v0, %got(highestmdef)($gp)
/* 00420580 8E2C0000 */  lw    $t4, ($s1)
/* 00420584 8C4F0000 */  lw    $t7, ($v0)
/* 00420588 01EC082A */  slt   $at, $t7, $t4
/* 0042058C 10200002 */  beqz  $at, .L00420598
/* 00420590 00000000 */   nop   
/* 00420594 01807825 */  move  $t7, $t4
.L00420598:
/* 00420598 10000012 */  b     .L004205E4
/* 0042059C AC4F0000 */   sw    $t7, ($v0)
.L004205A0:
/* 004205A0 24010002 */  li    $at, 2
/* 004205A4 14A1000F */  bne   $a1, $at, .L004205E4
/* 004205A8 24040052 */   li    $a0, 82
/* 004205AC 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 004205B0 24050001 */  li    $a1, 1
/* 004205B4 00003025 */  move  $a2, $zero
/* 004205B8 0320F809 */  jalr  $t9
/* 004205BC 24070004 */   li    $a3, 4
/* 004205C0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004205C4 2404007B */  li    $a0, 123
/* 004205C8 02002825 */  move  $a1, $s0
/* 004205CC 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 004205D0 00003025 */  move  $a2, $zero
/* 004205D4 24070004 */  li    $a3, 4
/* 004205D8 0320F809 */  jalr  $t9
/* 004205DC 00000000 */   nop   
/* 004205E0 8FBC0020 */  lw    $gp, 0x20($sp)
.L004205E4:
/* 004205E4 8FBF0024 */  lw    $ra, 0x24($sp)
.L004205E8:
/* 004205E8 8FB00018 */  lw    $s0, 0x18($sp)
/* 004205EC 8FB1001C */  lw    $s1, 0x1c($sp)
/* 004205F0 03E00008 */  jr    $ra
/* 004205F4 27BD0060 */   addiu $sp, $sp, 0x60
    .type gen_static_link, @function
    .size gen_static_link, .-gen_static_link
    .end gen_static_link
)"");

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
                if (SET32_IN(ugen_saved_eeregs, reg - 13) && curproc->regstaken_parregs->regstaken[reg - 1] != 0) {
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
    if (allcallersave != 0) {
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
                    graphhead->regdata.unk44[reg - 1]->isvar_issvar.location.memtype == Pmt) {
                if (graphhead->regdata.unk44[reg - 1]->isvar_issvar.location.blockno == curblk) {
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

__asm__(R""(
.set noat
.set noreorder

glabel epilog
    .ent epilog
    # 0042BF08 reemit
/* 00421C00 3C1C0FC0 */  .cpload $t9
/* 00421C04 279C8690 */  
/* 00421C08 0399E021 */  
/* 00421C0C 27BDFF60 */  addiu $sp, $sp, -0xa0
/* 00421C10 8F8E8B0C */  lw     $t6, %got(allcallersave)($gp)
/* 00421C14 AFB50028 */  sw    $s5, 0x28($sp)
/* 00421C18 0080A825 */  move  $s5, $a0
/* 00421C1C 91CE0000 */  lbu   $t6, ($t6)
/* 00421C20 AFBF003C */  sw    $ra, 0x3c($sp)
/* 00421C24 AFBE0038 */  sw    $fp, 0x38($sp)
/* 00421C28 AFBC0034 */  sw    $gp, 0x34($sp)
/* 00421C2C AFB70030 */  sw    $s7, 0x30($sp)
/* 00421C30 AFB6002C */  sw    $s6, 0x2c($sp)
/* 00421C34 AFB40024 */  sw    $s4, 0x24($sp)
/* 00421C38 AFB30020 */  sw    $s3, 0x20($sp)
/* 00421C3C AFB2001C */  sw    $s2, 0x1c($sp)
/* 00421C40 AFB10018 */  sw    $s1, 0x18($sp)
/* 00421C44 11C000EF */  beqz  $t6, .L00422004
/* 00421C48 AFB00014 */   sw    $s0, 0x14($sp)
/* 00421C4C 8F8F8B6C */  lw     $t7, %got(curproc)($gp)
/* 00421C50 24130004 */  li    $s3, 4
/* 00421C54 27B00065 */  addiu $s0, $sp, 0x65
/* 00421C58 8DEF0000 */  lw    $t7, ($t7)
/* 00421C5C 241E0002 */  li    $fp, 2
/* 00421C60 8F9789F4 */  lw     $s7, %got(pdeftab)($gp)
/* 00421C64 8DE20024 */  lw    $v0, 0x24($t7)
/* 00421C68 8F8589AC */  lw     $a1, %got(graphhead)($gp)
/* 00421C6C 27A40088 */  addiu $a0, $sp, 0x88
/* 00421C70 2403FFFF */  li    $v1, -1
/* 00421C74 24420004 */  addiu $v0, $v0, 4
.L00421C78:
/* 00421C78 8C580020 */  lw    $t8, 0x20($v0)
/* 00421C7C 24420004 */  addiu $v0, $v0, 4
/* 00421C80 50780014 */  beql  $v1, $t8, .L00421CD4
/* 00421C84 A2000000 */   sb    $zero, ($s0)
/* 00421C88 8CB90000 */  lw    $t9, ($a1)
/* 00421C8C 8EEA0000 */  lw    $t2, ($s7)
/* 00421C90 03334021 */  addu  $t0, $t9, $s3
/* 00421C94 8D090040 */  lw    $t1, 0x40($t0)
/* 00421C98 8D320010 */  lw    $s2, 0x10($t1)
/* 00421C9C 06410002 */  bgez  $s2, .L00421CA8
/* 00421CA0 02400821 */   move  $at, $s2
/* 00421CA4 26410003 */  addiu $at, $s2, 3
.L00421CA8:
/* 00421CA8 00019083 */  sra   $s2, $at, 2
/* 00421CAC 00125900 */  sll   $t3, $s2, 4
/* 00421CB0 014B6021 */  addu  $t4, $t2, $t3
/* 00421CB4 918D0002 */  lbu   $t5, 2($t4)
/* 00421CB8 11A00003 */  beqz  $t5, .L00421CC8
/* 00421CBC 00000000 */   nop   
/* 00421CC0 10000004 */  b     .L00421CD4
/* 00421CC4 A21E0000 */   sb    $fp, ($s0)
.L00421CC8:
/* 00421CC8 10000002 */  b     .L00421CD4
/* 00421CCC A2000000 */   sb    $zero, ($s0)
/* 00421CD0 A2000000 */  sb    $zero, ($s0)
.L00421CD4:
/* 00421CD4 26100001 */  addiu $s0, $s0, 1
/* 00421CD8 1604FFE7 */  bne   $s0, $a0, .L00421C78
/* 00421CDC 26730004 */   addiu $s3, $s3, 4
/* 00421CE0 8F928D40 */  lw     $s2, %got(lasteereg)($gp)
/* 00421CE4 24140001 */  li    $s4, 1
/* 00421CE8 24130004 */  li    $s3, 4
/* 00421CEC 26B60004 */  addiu $s6, $s5, 4
/* 00421CF0 2652FFFC */  addiu $s2, $s2, -4
.L00421CF4:
/* 00421CF4 8ED10040 */  lw    $s1, 0x40($s6)
/* 00421CF8 522000A9 */  beql  $s1, $zero, .L00421FA0
/* 00421CFC 26940001 */   addiu $s4, $s4, 1
/* 00421D00 922E0000 */  lbu   $t6, ($s1)
/* 00421D04 24010003 */  li    $at, 3
/* 00421D08 55C100A5 */  bnel  $t6, $at, .L00421FA0
/* 00421D0C 26940001 */   addiu $s4, $s4, 1
/* 00421D10 922F0016 */  lbu   $t7, 0x16($s1)
/* 00421D14 31F80007 */  andi  $t8, $t7, 7
/* 00421D18 57D800A1 */  bnel  $fp, $t8, .L00421FA0
/* 00421D1C 26940001 */   addiu $s4, $s4, 1
/* 00421D20 8F998980 */  lw     $t9, %got(curblk)($gp)
/* 00421D24 8E280014 */  lw    $t0, 0x14($s1)
/* 00421D28 8F390000 */  lw    $t9, ($t9)
/* 00421D2C 00084AC2 */  srl   $t1, $t0, 0xb
/* 00421D30 5729009B */  bnel  $t9, $t1, .L00421FA0
/* 00421D34 26940001 */   addiu $s4, $s4, 1
/* 00421D38 8E2B0010 */  lw    $t3, 0x10($s1)
/* 00421D3C 8EEA0000 */  lw    $t2, ($s7)
/* 00421D40 05610003 */  bgez  $t3, .L00421D50
/* 00421D44 000B6083 */   sra   $t4, $t3, 2
/* 00421D48 25610003 */  addiu $at, $t3, 3
/* 00421D4C 00016083 */  sra   $t4, $at, 2
.L00421D50:
/* 00421D50 000C6900 */  sll   $t5, $t4, 4
/* 00421D54 014D7021 */  addu  $t6, $t2, $t5
/* 00421D58 91CF0002 */  lbu   $t7, 2($t6)
/* 00421D5C 51E00090 */  beql  $t7, $zero, .L00421FA0
/* 00421D60 26940001 */   addiu $s4, $s4, 1
/* 00421D64 8F988B10 */  lw     $t8, %got(propagate_ee_saves)($gp)
/* 00421D68 2E880040 */  sltiu $t0, $s4, 0x40
/* 00421D6C 93180000 */  lbu   $t8, ($t8)
/* 00421D70 17000018 */  bnez  $t8, .L00421DD4
/* 00421D74 00000000 */   nop   
/* 00421D78 11000008 */  beqz  $t0, .L00421D9C
/* 00421D7C 2E8F0040 */   sltiu $t7, $s4, 0x40
/* 00421D80 8F8B8D80 */  lw     $t3, %got(seteeregs)($gp)
/* 00421D84 0014C943 */  sra   $t9, $s4, 5
/* 00421D88 00194880 */  sll   $t1, $t9, 2
/* 00421D8C 012B6021 */  addu  $t4, $t1, $t3
/* 00421D90 8D8A0000 */  lw    $t2, ($t4)
/* 00421D94 028A6804 */  sllv  $t5, $t2, $s4
/* 00421D98 29A80000 */  slti  $t0, $t5, 0
.L00421D9C:
/* 00421D9C 15000079 */  bnez  $t0, .L00421F84
/* 00421DA0 00000000 */   nop   
/* 00421DA4 11E00009 */  beqz  $t7, .L00421DCC
/* 00421DA8 00000000 */   nop   
/* 00421DAC 8F898D80 */  lw     $t1, %got(seteeregs)($gp)
/* 00421DB0 0014C143 */  sra   $t8, $s4, 5
/* 00421DB4 0018C880 */  sll   $t9, $t8, 2
/* 00421DB8 25290008 */  addiu $t1, $t1, 8
/* 00421DBC 03295821 */  addu  $t3, $t9, $t1
/* 00421DC0 8D6C0000 */  lw    $t4, ($t3)
/* 00421DC4 028C5004 */  sllv  $t2, $t4, $s4
/* 00421DC8 294F0000 */  slti  $t7, $t2, 0
.L00421DCC:
/* 00421DCC 15E0006D */  bnez  $t7, .L00421F84
/* 00421DD0 00000000 */   nop   
.L00421DD4:
/* 00421DD4 8F8589AC */  lw     $a1, %got(graphhead)($gp)
/* 00421DD8 2A820018 */  slti  $v0, $s4, 0x18
/* 00421DDC 38420001 */  xori  $v0, $v0, 1
/* 00421DE0 8CA50000 */  lw    $a1, ($a1)
/* 00421DE4 24440001 */  addiu $a0, $v0, 1
/* 00421DE8 0002C080 */  sll   $t8, $v0, 2
/* 00421DEC 00B37021 */  addu  $t6, $a1, $s3
/* 00421DF0 8DC80040 */  lw    $t0, 0x40($t6)
/* 00421DF4 00045880 */  sll   $t3, $a0, 2
/* 00421DF8 24190001 */  li    $t9, 1
/* 00421DFC 12280053 */  beq   $s1, $t0, .L00421F4C
/* 00421E00 27A90064 */   addiu $t1, $sp, 0x64
/* 00421E04 8F998D34 */  lw     $t9, %got(firsterreg)($gp)
/* 00421E08 024B6021 */  addu  $t4, $s2, $t3
/* 00421E0C 8D8A0000 */  lw    $t2, ($t4)
/* 00421E10 2739FFFC */  addiu $t9, $t9, -4
/* 00421E14 03194821 */  addu  $t1, $t8, $t9
/* 00421E18 8D300004 */  lw    $s0, 4($t1)
/* 00421E1C 00001825 */  move  $v1, $zero
/* 00421E20 0150082A */  slt   $at, $t2, $s0
/* 00421E24 14200011 */  bnez  $at, .L00421E6C
/* 00421E28 00106880 */   sll   $t5, $s0, 2
/* 00421E2C 00AD1021 */  addu  $v0, $a1, $t5
/* 00421E30 8C4F0040 */  lw    $t7, 0x40($v0)
.L00421E34:
/* 00421E34 00047080 */  sll   $t6, $a0, 2
/* 00421E38 024E4021 */  addu  $t0, $s2, $t6
/* 00421E3C 562F0004 */  bnel  $s1, $t7, .L00421E50
/* 00421E40 26100001 */   addiu $s0, $s0, 1
/* 00421E44 10000003 */  b     .L00421E54
/* 00421E48 24030001 */   li    $v1, 1
/* 00421E4C 26100001 */  addiu $s0, $s0, 1
.L00421E50:
/* 00421E50 24420004 */  addiu $v0, $v0, 4
.L00421E54:
/* 00421E54 14600005 */  bnez  $v1, .L00421E6C
/* 00421E58 00000000 */   nop   
/* 00421E5C 8D180000 */  lw    $t8, ($t0)
/* 00421E60 0310082A */  slt   $at, $t8, $s0
/* 00421E64 5020FFF3 */  beql  $at, $zero, .L00421E34
/* 00421E68 8C4F0040 */   lw    $t7, 0x40($v0)
.L00421E6C:
/* 00421E6C 10600030 */  beqz  $v1, .L00421F30
/* 00421E70 0214082A */   slt   $at, $s0, $s4
/* 00421E74 1420000D */  bnez  $at, .L00421EAC
/* 00421E78 0010C880 */   sll   $t9, $s0, 2
/* 00421E7C 02B94821 */  addu  $t1, $s5, $t9
/* 00421E80 8D220040 */  lw    $v0, 0x40($t1)
/* 00421E84 10400009 */  beqz  $v0, .L00421EAC
/* 00421E88 00000000 */   nop   
/* 00421E8C 904B0000 */  lbu   $t3, ($v0)
/* 00421E90 24010003 */  li    $at, 3
/* 00421E94 15610005 */  bne   $t3, $at, .L00421EAC
/* 00421E98 00000000 */   nop   
/* 00421E9C 904C0016 */  lbu   $t4, 0x16($v0)
/* 00421EA0 318A0007 */  andi  $t2, $t4, 7
/* 00421EA4 13CA0022 */  beq   $fp, $t2, .L00421F30
/* 00421EA8 00000000 */   nop   
.L00421EAC:
/* 00421EAC 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 00421EB0 24040052 */  li    $a0, 82
/* 00421EB4 02802825 */  move  $a1, $s4
/* 00421EB8 92260001 */  lbu   $a2, 1($s1)
/* 00421EBC 0320F809 */  jalr  $t9
/* 00421EC0 92270018 */   lbu   $a3, 0x18($s1)
/* 00421EC4 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00421EC8 8ED10040 */  lw    $s1, 0x40($s6)
/* 00421ECC 2404007B */  li    $a0, 123
/* 00421ED0 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 00421ED4 02002825 */  move  $a1, $s0
/* 00421ED8 92260001 */  lbu   $a2, 1($s1)
/* 00421EDC 0320F809 */  jalr  $t9
/* 00421EE0 92270018 */   lbu   $a3, 0x18($s1)
/* 00421EE4 27AD0064 */  addiu $t5, $sp, 0x64
/* 00421EE8 020D1021 */  addu  $v0, $s0, $t5
/* 00421EEC 904F0000 */  lbu   $t7, ($v0)
/* 00421EF0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00421EF4 03CF02B6 */  tne   $fp, $t7, 0xa
/* 00421EF8 8F888B5C */  lw     $t0, %got(entflag)($gp)
/* 00421EFC 240E0001 */  li    $t6, 1
/* 00421F00 A04E0000 */  sb    $t6, ($v0)
/* 00421F04 91080000 */  lbu   $t0, ($t0)
/* 00421F08 31180004 */  andi  $t8, $t0, 4
/* 00421F0C 53000024 */  beql  $t8, $zero, .L00421FA0
/* 00421F10 26940001 */   addiu $s4, $s4, 1
/* 00421F14 8F9982A4 */  lw    $t9, %call16(genrlodrstr)($gp)
/* 00421F18 24040070 */  li    $a0, 112
/* 00421F1C 02002825 */  move  $a1, $s0
/* 00421F20 0320F809 */  jalr  $t9
/* 00421F24 8EC60040 */   lw    $a2, 0x40($s6)
/* 00421F28 1000001C */  b     .L00421F9C
/* 00421F2C 8FBC0034 */   lw    $gp, 0x34($sp)
.L00421F30:
/* 00421F30 8F9982A4 */  lw    $t9, %call16(genrlodrstr)($gp)
/* 00421F34 24040070 */  li    $a0, 112
/* 00421F38 02802825 */  move  $a1, $s4
/* 00421F3C 0320F809 */  jalr  $t9
/* 00421F40 02203025 */   move  $a2, $s1
/* 00421F44 10000015 */  b     .L00421F9C
/* 00421F48 8FBC0034 */   lw    $gp, 0x34($sp)
.L00421F4C:
/* 00421F4C 8F8C8B5C */  lw     $t4, %got(entflag)($gp)
/* 00421F50 02895821 */  addu  $t3, $s4, $t1
/* 00421F54 A1790000 */  sb    $t9, ($t3)
/* 00421F58 918C0000 */  lbu   $t4, ($t4)
/* 00421F5C 318A0004 */  andi  $t2, $t4, 4
/* 00421F60 5140000F */  beql  $t2, $zero, .L00421FA0
/* 00421F64 26940001 */   addiu $s4, $s4, 1
/* 00421F68 8F9982A4 */  lw    $t9, %call16(genrlodrstr)($gp)
/* 00421F6C 24040070 */  li    $a0, 112
/* 00421F70 02802825 */  move  $a1, $s4
/* 00421F74 0320F809 */  jalr  $t9
/* 00421F78 02203025 */   move  $a2, $s1
/* 00421F7C 10000007 */  b     .L00421F9C
/* 00421F80 8FBC0034 */   lw    $gp, 0x34($sp)
.L00421F84:
/* 00421F84 8F9982A4 */  lw    $t9, %call16(genrlodrstr)($gp)
/* 00421F88 24040070 */  li    $a0, 112
/* 00421F8C 02802825 */  move  $a1, $s4
/* 00421F90 0320F809 */  jalr  $t9
/* 00421F94 02203025 */   move  $a2, $s1
/* 00421F98 8FBC0034 */  lw    $gp, 0x34($sp)
.L00421F9C:
/* 00421F9C 26940001 */  addiu $s4, $s4, 1
.L00421FA0:
/* 00421FA0 24010024 */  li    $at, 36
/* 00421FA4 26730004 */  addiu $s3, $s3, 4
/* 00421FA8 1681FF52 */  bne   $s4, $at, .L00421CF4
/* 00421FAC 26D60004 */   addiu $s6, $s6, 4
/* 00421FB0 24140001 */  li    $s4, 1
/* 00421FB4 27B00065 */  addiu $s0, $sp, 0x65
.L00421FB8:
/* 00421FB8 920D0000 */  lbu   $t5, ($s0)
/* 00421FBC 57CD000C */  bnel  $fp, $t5, .L00421FF0
/* 00421FC0 26940001 */   addiu $s4, $s4, 1
/* 00421FC4 8F8F89AC */  lw     $t7, %got(graphhead)($gp)
/* 00421FC8 8F9982A4 */  lw    $t9, %call16(genrlodrstr)($gp)
/* 00421FCC 00147080 */  sll   $t6, $s4, 2
/* 00421FD0 8DEF0000 */  lw    $t7, ($t7)
/* 00421FD4 2404006D */  li    $a0, 109
/* 00421FD8 02802825 */  move  $a1, $s4
/* 00421FDC 01EE4021 */  addu  $t0, $t7, $t6
/* 00421FE0 0320F809 */  jalr  $t9
/* 00421FE4 8D060040 */   lw    $a2, 0x40($t0)
/* 00421FE8 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00421FEC 26940001 */  addiu $s4, $s4, 1
.L00421FF0:
/* 00421FF0 24010024 */  li    $at, 36
/* 00421FF4 1681FFF0 */  bne   $s4, $at, .L00421FB8
/* 00421FF8 26100001 */   addiu $s0, $s0, 1
/* 00421FFC 1000019C */  b     .L00422670
/* 00422000 8FBF003C */   lw    $ra, 0x3c($sp)
.L00422004:
/* 00422004 A3A00065 */  sb    $zero, 0x65($sp)
/* 00422008 A3A00066 */  sb    $zero, 0x66($sp)
/* 0042200C A3A00067 */  sb    $zero, 0x67($sp)
/* 00422010 27B00068 */  addiu $s0, $sp, 0x68
/* 00422014 27A20088 */  addiu $v0, $sp, 0x88
.L00422018:
/* 00422018 26100004 */  addiu $s0, $s0, 4
/* 0042201C A200FFFC */  sb    $zero, -4($s0)
/* 00422020 A200FFFD */  sb    $zero, -3($s0)
/* 00422024 A200FFFE */  sb    $zero, -2($s0)
/* 00422028 1602FFFB */  bne   $s0, $v0, .L00422018
/* 0042202C A200FFFF */   sb    $zero, -1($s0)
/* 00422030 8F988A00 */  lw     $t8, %got(pdefmax)($gp)
/* 00422034 00009025 */  move  $s2, $zero
/* 00422038 8F060000 */  lw    $a2, ($t8)
/* 0042203C 28C10004 */  slti  $at, $a2, 4
/* 00422040 14200002 */  bnez  $at, .L0042204C
/* 00422044 00000000 */   nop   
/* 00422048 24060003 */  li    $a2, 3
.L0042204C:
/* 0042204C 04C20077 */  bltzl $a2, .L0042222C
/* 00422050 241E0002 */   li    $fp, 2
/* 00422054 8F8589F4 */  lw     $a1, %got(pdeftab)($gp)
/* 00422058 241E0002 */  li    $fp, 2
/* 0042205C 24100009 */  li    $s0, 9
/* 00422060 8CA50000 */  lw    $a1, ($a1)
/* 00422064 00129900 */  sll   $s3, $s2, 4
.L00422068:
/* 00422068 00B31821 */  addu  $v1, $a1, $s3
/* 0042206C 90690000 */  lbu   $t1, ($v1)
/* 00422070 24010065 */  li    $at, 101
/* 00422074 15210004 */  bne   $t1, $at, .L00422088
/* 00422078 00000000 */   nop   
/* 0042207C 90790002 */  lbu   $t9, 2($v1)
/* 00422080 17200003 */  bnez  $t9, .L00422090
/* 00422084 00000000 */   nop   
.L00422088:
/* 00422088 10000064 */  b     .L0042221C
/* 0042208C 26520001 */   addiu $s2, $s2, 1
.L00422090:
/* 00422090 8F8C8A28 */  lw     $t4, %got(offsetpassedbyint)($gp)
/* 00422094 8F8D8D44 */  lw     $t5, %got(firstparmreg)($gp)
/* 00422098 00125880 */  sll   $t3, $s2, 2
/* 0042209C 8D8C0000 */  lw    $t4, ($t4)
/* 004220A0 25ADFFFC */  addiu $t5, $t5, -4
/* 004220A4 24010002 */  li    $at, 2
/* 004220A8 016C102A */  slt   $v0, $t3, $t4
/* 004220AC 24420001 */  addiu $v0, $v0, 1
/* 004220B0 00025080 */  sll   $t2, $v0, 2
/* 004220B4 014D7821 */  addu  $t7, $t2, $t5
/* 004220B8 8DE40000 */  lw    $a0, ($t7)
/* 004220BC 27B80064 */  addiu $t8, $sp, 0x64
/* 004220C0 14410004 */  bne   $v0, $at, .L004220D4
/* 004220C4 0092A021 */   addu  $s4, $a0, $s2
/* 004220C8 52400003 */  beql  $s2, $zero, .L004220D8
/* 004220CC 906E0001 */   lbu   $t6, 1($v1)
/* 004220D0 24940001 */  addiu $s4, $a0, 1
.L004220D4:
/* 004220D4 906E0001 */  lbu   $t6, 1($v1)
.L004220D8:
/* 004220D8 00144080 */  sll   $t0, $s4, 2
/* 004220DC 02A8B021 */  addu  $s6, $s5, $t0
/* 004220E0 020E02B4 */  teq   $s0, $t6, 0xa
/* 004220E4 8ED10040 */  lw    $s1, 0x40($s6)
/* 004220E8 02984821 */  addu  $t1, $s4, $t8
/* 004220EC 56200004 */  bnezl $s1, .L00422100
/* 004220F0 92390000 */   lbu   $t9, ($s1)
/* 004220F4 10000042 */  b     .L00422200
/* 004220F8 A13E0000 */   sb    $fp, ($t1)
/* 004220FC 92390000 */  lbu   $t9, ($s1)
.L00422100:
/* 00422100 24010003 */  li    $at, 3
/* 00422104 02201025 */  move  $v0, $s1
/* 00422108 17210032 */  bne   $t9, $at, .L004221D4
/* 0042210C 00000000 */   nop   
/* 00422110 922B0016 */  lbu   $t3, 0x16($s1)
/* 00422114 316C0007 */  andi  $t4, $t3, 7
/* 00422118 17CC002E */  bne   $fp, $t4, .L004221D4
/* 0042211C 00000000 */   nop   
/* 00422120 8F8A8980 */  lw     $t2, %got(curblk)($gp)
/* 00422124 8E2D0014 */  lw    $t5, 0x14($s1)
/* 00422128 8D4A0000 */  lw    $t2, ($t2)
/* 0042212C 000D7AC2 */  srl   $t7, $t5, 0xb
/* 00422130 154F0028 */  bne   $t2, $t7, .L004221D4
/* 00422134 00000000 */   nop   
/* 00422138 8E240010 */  lw    $a0, 0x10($s1)
/* 0042213C 04810003 */  bgez  $a0, .L0042214C
/* 00422140 00047083 */   sra   $t6, $a0, 2
/* 00422144 24810003 */  addiu $at, $a0, 3
/* 00422148 00017083 */  sra   $t6, $at, 2
.L0042214C:
/* 0042214C 164E0021 */  bne   $s2, $t6, .L004221D4
/* 00422150 00000000 */   nop   
/* 00422154 8F9986EC */  lw    $t9, %call16(fitparmreg)($gp)
/* 00422158 90450018 */  lbu   $a1, 0x18($v0)
/* 0042215C 8C660008 */  lw    $a2, 8($v1)
/* 00422160 0320F809 */  jalr  $t9
/* 00422164 8C67000C */   lw    $a3, 0xc($v1)
/* 00422168 1040001A */  beqz  $v0, .L004221D4
/* 0042216C 8FBC0034 */   lw    $gp, 0x34($sp)
/* 00422170 8F998B5C */  lw     $t9, %got(entflag)($gp)
/* 00422174 27B80064 */  addiu $t8, $sp, 0x64
/* 00422178 02984821 */  addu  $t1, $s4, $t8
/* 0042217C 24080001 */  li    $t0, 1
/* 00422180 A1280000 */  sb    $t0, ($t1)
/* 00422184 93390000 */  lbu   $t9, ($t9)
/* 00422188 332B0004 */  andi  $t3, $t9, 4
/* 0042218C 11600007 */  beqz  $t3, .L004221AC
/* 00422190 00000000 */   nop   
/* 00422194 8F9982A4 */  lw    $t9, %call16(genrlodrstr)($gp)
/* 00422198 24040070 */  li    $a0, 112
/* 0042219C 02802825 */  move  $a1, $s4
/* 004221A0 0320F809 */  jalr  $t9
/* 004221A4 8EC60040 */   lw    $a2, 0x40($s6)
/* 004221A8 8FBC0034 */  lw    $gp, 0x34($sp)
.L004221AC:
/* 004221AC 8F8C8A00 */  lw     $t4, %got(pdefmax)($gp)
/* 004221B0 8F8589F4 */  lw     $a1, %got(pdeftab)($gp)
/* 004221B4 8D860000 */  lw    $a2, ($t4)
/* 004221B8 8CA50000 */  lw    $a1, ($a1)
/* 004221BC 28C10004 */  slti  $at, $a2, 4
/* 004221C0 1420000F */  bnez  $at, .L00422200
/* 004221C4 00B31821 */   addu  $v1, $a1, $s3
/* 004221C8 24060003 */  li    $a2, 3
/* 004221CC 1000000D */  b     .L00422204
/* 004221D0 8C6E000C */   lw    $t6, 0xc($v1)
.L004221D4:
/* 004221D4 8F8F8A00 */  lw     $t7, %got(pdefmax)($gp)
/* 004221D8 27AD0064 */  addiu $t5, $sp, 0x64
/* 004221DC 028D5021 */  addu  $t2, $s4, $t5
/* 004221E0 8F8589F4 */  lw     $a1, %got(pdeftab)($gp)
/* 004221E4 A15E0000 */  sb    $fp, ($t2)
/* 004221E8 8DE60000 */  lw    $a2, ($t7)
/* 004221EC 8CA50000 */  lw    $a1, ($a1)
/* 004221F0 28C10004 */  slti  $at, $a2, 4
/* 004221F4 14200002 */  bnez  $at, .L00422200
/* 004221F8 00B31821 */   addu  $v1, $a1, $s3
/* 004221FC 24060003 */  li    $a2, 3
.L00422200:
/* 00422200 8C6E000C */  lw    $t6, 0xc($v1)
.L00422204:
/* 00422204 25D80003 */  addiu $t8, $t6, 3
/* 00422208 07010003 */  bgez  $t8, .L00422218
/* 0042220C 00184083 */   sra   $t0, $t8, 2
/* 00422210 27010003 */  addiu $at, $t8, 3
/* 00422214 00014083 */  sra   $t0, $at, 2
.L00422218:
/* 00422218 02489021 */  addu  $s2, $s2, $t0
.L0042221C:
/* 0042221C 00D2082A */  slt   $at, $a2, $s2
/* 00422220 5020FF91 */  beql  $at, $zero, .L00422068
/* 00422224 00129900 */   sll   $s3, $s2, 4
/* 00422228 241E0002 */  li    $fp, 2
.L0042222C:
/* 0042222C 24140001 */  li    $s4, 1
/* 00422230 26B60004 */  addiu $s6, $s5, 4
/* 00422234 8F9789F4 */  lw     $s7, %got(pdeftab)($gp)
.L00422238:
/* 00422238 8ED10040 */  lw    $s1, 0x40($s6)
/* 0042223C 52200076 */  beql  $s1, $zero, .L00422418
/* 00422240 26940001 */   addiu $s4, $s4, 1
/* 00422244 92290000 */  lbu   $t1, ($s1)
/* 00422248 24010003 */  li    $at, 3
/* 0042224C 55210072 */  bnel  $t1, $at, .L00422418
/* 00422250 26940001 */   addiu $s4, $s4, 1
/* 00422254 92390016 */  lbu   $t9, 0x16($s1)
/* 00422258 332B0007 */  andi  $t3, $t9, 7
/* 0042225C 57CB006E */  bnel  $fp, $t3, .L00422418
/* 00422260 26940001 */   addiu $s4, $s4, 1
/* 00422264 8F8C8980 */  lw     $t4, %got(curblk)($gp)
/* 00422268 8E2D0014 */  lw    $t5, 0x14($s1)
/* 0042226C 8D8C0000 */  lw    $t4, ($t4)
/* 00422270 000D52C2 */  srl   $t2, $t5, 0xb
/* 00422274 558A0068 */  bnel  $t4, $t2, .L00422418
/* 00422278 26940001 */   addiu $s4, $s4, 1
/* 0042227C 8E320010 */  lw    $s2, 0x10($s1)
/* 00422280 06410002 */  bgez  $s2, .L0042228C
/* 00422284 02400821 */   move  $at, $s2
/* 00422288 26410003 */  addiu $at, $s2, 3
.L0042228C:
/* 0042228C 00019083 */  sra   $s2, $at, 2
/* 00422290 00D2082A */  slt   $at, $a2, $s2
/* 00422294 54200060 */  bnezl $at, .L00422418
/* 00422298 26940001 */   addiu $s4, $s4, 1
/* 0042229C 8EEF0000 */  lw    $t7, ($s7)
/* 004222A0 00127100 */  sll   $t6, $s2, 4
/* 004222A4 01EEC021 */  addu  $t8, $t7, $t6
/* 004222A8 93080002 */  lbu   $t0, 2($t8)
/* 004222AC 5100005A */  beql  $t0, $zero, .L00422418
/* 004222B0 26940001 */   addiu $s4, $s4, 1
/* 004222B4 8F898A28 */  lw     $t1, %got(offsetpassedbyint)($gp)
/* 004222B8 8F8B8D44 */  lw     $t3, %got(firstparmreg)($gp)
/* 004222BC 00121080 */  sll   $v0, $s2, 2
/* 004222C0 8D290000 */  lw    $t1, ($t1)
/* 004222C4 256BFFFC */  addiu $t3, $t3, -4
/* 004222C8 24010002 */  li    $at, 2
/* 004222CC 0049202A */  slt   $a0, $v0, $t1
/* 004222D0 24840001 */  addiu $a0, $a0, 1
/* 004222D4 0004C880 */  sll   $t9, $a0, 2
/* 004222D8 032B6821 */  addu  $t5, $t9, $t3
/* 004222DC 8DA30000 */  lw    $v1, ($t5)
/* 004222E0 14810004 */  bne   $a0, $at, .L004222F4
/* 004222E4 00728021 */   addu  $s0, $v1, $s2
/* 004222E8 10400002 */  beqz  $v0, .L004222F4
/* 004222EC 00000000 */   nop   
/* 004222F0 24700001 */  addiu $s0, $v1, 1
.L004222F4:
/* 004222F4 12900047 */  beq   $s4, $s0, .L00422414
/* 004222F8 0214082A */   slt   $at, $s0, $s4
/* 004222FC 1420000C */  bnez  $at, .L00422330
/* 00422300 00106080 */   sll   $t4, $s0, 2
/* 00422304 02AC5021 */  addu  $t2, $s5, $t4
/* 00422308 8D420040 */  lw    $v0, 0x40($t2)
/* 0042230C 50400009 */  beql  $v0, $zero, .L00422334
/* 00422310 2A810018 */   slti  $at, $s4, 0x18
/* 00422314 904F0000 */  lbu   $t7, ($v0)
/* 00422318 24010003 */  li    $at, 3
/* 0042231C 55E10005 */  bnel  $t7, $at, .L00422334
/* 00422320 2A810018 */   slti  $at, $s4, 0x18
/* 00422324 904E0016 */  lbu   $t6, 0x16($v0)
/* 00422328 31D80007 */  andi  $t8, $t6, 7
/* 0042232C 13D8002D */  beq   $fp, $t8, .L004223E4
.L00422330:
/* 00422330 2A810018 */   slti  $at, $s4, 0x18
.L00422334:
/* 00422334 14200004 */  bnez  $at, .L00422348
/* 00422338 24040052 */   li    $a0, 82
/* 0042233C 2A010018 */  slti  $at, $s0, 0x18
/* 00422340 14200028 */  bnez  $at, .L004223E4
/* 00422344 00000000 */   nop   
.L00422348:
/* 00422348 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 0042234C 02802825 */  move  $a1, $s4
/* 00422350 92260001 */  lbu   $a2, 1($s1)
/* 00422354 0320F809 */  jalr  $t9
/* 00422358 92270018 */   lbu   $a3, 0x18($s1)
/* 0042235C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00422360 8ED10040 */  lw    $s1, 0x40($s6)
/* 00422364 2404007B */  li    $a0, 123
/* 00422368 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 0042236C 02002825 */  move  $a1, $s0
/* 00422370 92260001 */  lbu   $a2, 1($s1)
/* 00422374 0320F809 */  jalr  $t9
/* 00422378 92270018 */   lbu   $a3, 0x18($s1)
/* 0042237C 27A80064 */  addiu $t0, $sp, 0x64
/* 00422380 02081021 */  addu  $v0, $s0, $t0
/* 00422384 90490000 */  lbu   $t1, ($v0)
/* 00422388 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042238C 03C902B6 */  tne   $fp, $t1, 0xa
/* 00422390 8F8B8B5C */  lw     $t3, %got(entflag)($gp)
/* 00422394 24190001 */  li    $t9, 1
/* 00422398 A0590000 */  sb    $t9, ($v0)
/* 0042239C 916B0000 */  lbu   $t3, ($t3)
/* 004223A0 316D0004 */  andi  $t5, $t3, 4
/* 004223A4 11A00007 */  beqz  $t5, .L004223C4
/* 004223A8 00000000 */   nop   
/* 004223AC 8F9982A4 */  lw    $t9, %call16(genrlodrstr)($gp)
/* 004223B0 24040070 */  li    $a0, 112
/* 004223B4 02002825 */  move  $a1, $s0
/* 004223B8 0320F809 */  jalr  $t9
/* 004223BC 8EC60040 */   lw    $a2, 0x40($s6)
/* 004223C0 8FBC0034 */  lw    $gp, 0x34($sp)
.L004223C4:
/* 004223C4 8F8C8A00 */  lw     $t4, %got(pdefmax)($gp)
/* 004223C8 8D860000 */  lw    $a2, ($t4)
/* 004223CC 28C10004 */  slti  $at, $a2, 4
/* 004223D0 54200011 */  bnezl $at, .L00422418
/* 004223D4 26940001 */   addiu $s4, $s4, 1
/* 004223D8 24060003 */  li    $a2, 3
/* 004223DC 1000000E */  b     .L00422418
/* 004223E0 26940001 */   addiu $s4, $s4, 1
.L004223E4:
/* 004223E4 8F9982A4 */  lw    $t9, %call16(genrlodrstr)($gp)
/* 004223E8 24040070 */  li    $a0, 112
/* 004223EC 02802825 */  move  $a1, $s4
/* 004223F0 0320F809 */  jalr  $t9
/* 004223F4 02203025 */   move  $a2, $s1
/* 004223F8 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004223FC 8F8A8A00 */  lw     $t2, %got(pdefmax)($gp)
/* 00422400 8D460000 */  lw    $a2, ($t2)
/* 00422404 28C10004 */  slti  $at, $a2, 4
/* 00422408 54200003 */  bnezl $at, .L00422418
/* 0042240C 26940001 */   addiu $s4, $s4, 1
/* 00422410 24060003 */  li    $a2, 3
.L00422414:
/* 00422414 26940001 */  addiu $s4, $s4, 1
.L00422418:
/* 00422418 24010024 */  li    $at, 36
/* 0042241C 1681FF86 */  bne   $s4, $at, .L00422238
/* 00422420 26D60004 */   addiu $s6, $s6, 4
/* 00422424 04C00091 */  bltz  $a2, .L0042266C
/* 00422428 00009025 */   move  $s2, $zero
/* 0042242C 8EE50000 */  lw    $a1, ($s7)
/* 00422430 2416FF1F */  li    $s6, -225
/* 00422434 2415006D */  li    $s5, 109
/* 00422438 8F918DA4 */  lw     $s1, %got(u)($gp)
/* 0042243C 00129900 */  sll   $s3, $s2, 4
.L00422440:
/* 00422440 00B31821 */  addu  $v1, $a1, $s3
/* 00422444 906F0000 */  lbu   $t7, ($v1)
/* 00422448 24010065 */  li    $at, 101
/* 0042244C 15E10004 */  bne   $t7, $at, .L00422460
/* 00422450 00000000 */   nop   
/* 00422454 906E0002 */  lbu   $t6, 2($v1)
/* 00422458 15C00003 */  bnez  $t6, .L00422468
/* 0042245C 00000000 */   nop   
.L00422460:
/* 00422460 1000007F */  b     .L00422660
/* 00422464 26520001 */   addiu $s2, $s2, 1
.L00422468:
/* 00422468 8F888A28 */  lw     $t0, %got(offsetpassedbyint)($gp)
/* 0042246C 8F998D44 */  lw     $t9, %got(firstparmreg)($gp)
/* 00422470 0012C080 */  sll   $t8, $s2, 2
/* 00422474 8D080000 */  lw    $t0, ($t0)
/* 00422478 2739FFFC */  addiu $t9, $t9, -4
/* 0042247C 24010002 */  li    $at, 2
/* 00422480 0308102A */  slt   $v0, $t8, $t0
/* 00422484 24420001 */  addiu $v0, $v0, 1
/* 00422488 00024880 */  sll   $t1, $v0, 2
/* 0042248C 01398021 */  addu  $s0, $t1, $t9
/* 00422490 8E040000 */  lw    $a0, ($s0)
/* 00422494 27AB0064 */  addiu $t3, $sp, 0x64
/* 00422498 14410004 */  bne   $v0, $at, .L004224AC
/* 0042249C 0092A021 */   addu  $s4, $a0, $s2
/* 004224A0 52400003 */  beql  $s2, $zero, .L004224B0
/* 004224A4 028B6821 */   addu  $t5, $s4, $t3
/* 004224A8 24940001 */  addiu $s4, $a0, 1
.L004224AC:
/* 004224AC 028B6821 */  addu  $t5, $s4, $t3
.L004224B0:
/* 004224B0 91AC0000 */  lbu   $t4, ($t5)
/* 004224B4 57CC005D */  bnel  $fp, $t4, .L0042262C
/* 004224B8 8EE50000 */   lw    $a1, ($s7)
/* 004224BC 92220001 */  lbu   $v0, 1($s1)
/* 004224C0 906A0001 */  lbu   $t2, 1($v1)
/* 004224C4 8F8C8980 */  lw     $t4, %got(curblk)($gp)
/* 004224C8 00027EC0 */  sll   $t7, $v0, 0x1b
/* 004224CC 000F76C2 */  srl   $t6, $t7, 0x1b
/* 004224D0 014EC026 */  xor   $t8, $t2, $t6
/* 004224D4 3308001F */  andi  $t0, $t8, 0x1f
/* 004224D8 0102C826 */  xor   $t9, $t0, $v0
/* 004224DC 03365824 */  and   $t3, $t9, $s6
/* 004224E0 A2390001 */  sb    $t9, 1($s1)
/* 004224E4 356D0040 */  ori   $t5, $t3, 0x40
/* 004224E8 A2350000 */  sb    $s5, ($s1)
/* 004224EC A22D0001 */  sb    $t5, 1($s1)
/* 004224F0 8C6F0008 */  lw    $t7, 8($v1)
/* 004224F4 8C6A000C */  lw    $t2, 0xc($v1)
/* 004224F8 8D8C0000 */  lw    $t4, ($t4)
/* 004224FC AE2F000C */  sw    $t7, 0xc($s1)
/* 00422500 AE2A0008 */  sw    $t2, 8($s1)
/* 00422504 AE2C0004 */  sw    $t4, 4($s1)
/* 00422508 8F998708 */  lw    $t9, %call16(coloroffset)($gp)
/* 0042250C 02802025 */  move  $a0, $s4
/* 00422510 0320F809 */  jalr  $t9
/* 00422514 00000000 */   nop   
/* 00422518 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0042251C A6220002 */  sh    $v0, 2($s1)
/* 00422520 8F8E8D44 */  lw     $t6, %got(firstparmreg)($gp)
/* 00422524 25CE0004 */  addiu $t6, $t6, 4
/* 00422528 120E0008 */  beq   $s0, $t6, .L0042254C
/* 0042252C 00000000 */   nop   
/* 00422530 8EF80000 */  lw    $t8, ($s7)
/* 00422534 240C0004 */  li    $t4, 4
/* 00422538 03134021 */  addu  $t0, $t8, $s3
/* 0042253C 8D09000C */  lw    $t1, 0xc($t0)
/* 00422540 29210005 */  slti  $at, $t1, 5
/* 00422544 50200008 */  beql  $at, $zero, .L00422568
/* 00422548 92220001 */   lbu   $v0, 1($s1)
.L0042254C:
/* 0042254C 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 00422550 02202025 */  move  $a0, $s1
/* 00422554 0320F809 */  jalr  $t9
/* 00422558 00000000 */   nop   
/* 0042255C 10000032 */  b     .L00422628
/* 00422560 8FBC0034 */   lw    $gp, 0x34($sp)
/* 00422564 92220001 */  lbu   $v0, 1($s1)
.L00422568:
/* 00422568 2401000C */  li    $at, 12
/* 0042256C 26430001 */  addiu $v1, $s2, 1
/* 00422570 3059001F */  andi  $t9, $v0, 0x1f
/* 00422574 17210003 */  bne   $t9, $at, .L00422584
/* 00422578 304BFFE0 */   andi  $t3, $v0, 0xffe0
/* 0042257C 356D000D */  ori   $t5, $t3, 0xd
/* 00422580 A22D0001 */  sb    $t5, 1($s1)
.L00422584:
/* 00422584 AE2C0008 */  sw    $t4, 8($s1)
/* 00422588 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0042258C 02202025 */  move  $a0, $s1
/* 00422590 AFA30058 */  sw    $v1, 0x58($sp)
/* 00422594 0320F809 */  jalr  $t9
/* 00422598 00000000 */   nop   
/* 0042259C 8FA30058 */  lw    $v1, 0x58($sp)
/* 004225A0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004225A4 28610004 */  slti  $at, $v1, 4
/* 004225A8 1020001F */  beqz  $at, .L00422628
/* 004225AC 00608025 */   move  $s0, $v1
/* 004225B0 8EEE0000 */  lw    $t6, ($s7)
/* 004225B4 00727823 */  subu  $t7, $v1, $s2
/* 004225B8 000F5080 */  sll   $t2, $t7, 2
/* 004225BC 01D3C021 */  addu  $t8, $t6, $s3
/* 004225C0 8F08000C */  lw    $t0, 0xc($t8)
/* 004225C4 0148082A */  slt   $at, $t2, $t0
/* 004225C8 50200018 */  beql  $at, $zero, .L0042262C
/* 004225CC 8EE50000 */   lw    $a1, ($s7)
/* 004225D0 8E29000C */  lw    $t1, 0xc($s1)
.L004225D4:
/* 004225D4 962B0002 */  lhu   $t3, 2($s1)
/* 004225D8 02202025 */  move  $a0, $s1
/* 004225DC 25390004 */  addiu $t9, $t1, 4
/* 004225E0 256D0001 */  addiu $t5, $t3, 1
/* 004225E4 AE39000C */  sw    $t9, 0xc($s1)
/* 004225E8 A62D0002 */  sh    $t5, 2($s1)
/* 004225EC 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 004225F0 0320F809 */  jalr  $t9
/* 004225F4 00000000 */   nop   
/* 004225F8 26100001 */  addiu $s0, $s0, 1
/* 004225FC 2A010004 */  slti  $at, $s0, 4
/* 00422600 10200009 */  beqz  $at, .L00422628
/* 00422604 8FBC0034 */   lw    $gp, 0x34($sp)
/* 00422608 8EEE0000 */  lw    $t6, ($s7)
/* 0042260C 02126023 */  subu  $t4, $s0, $s2
/* 00422610 000C7880 */  sll   $t7, $t4, 2
/* 00422614 01D3C021 */  addu  $t8, $t6, $s3
/* 00422618 8F0A000C */  lw    $t2, 0xc($t8)
/* 0042261C 01EA082A */  slt   $at, $t7, $t2
/* 00422620 5420FFEC */  bnezl $at, .L004225D4
/* 00422624 8E29000C */   lw    $t1, 0xc($s1)
.L00422628:
/* 00422628 8EE50000 */  lw    $a1, ($s7)
.L0042262C:
/* 0042262C 8F8D8A00 */  lw     $t5, %got(pdefmax)($gp)
/* 00422630 00B34021 */  addu  $t0, $a1, $s3
/* 00422634 8D09000C */  lw    $t1, 0xc($t0)
/* 00422638 8DA60000 */  lw    $a2, ($t5)
/* 0042263C 25390003 */  addiu $t9, $t1, 3
/* 00422640 07210003 */  bgez  $t9, .L00422650
/* 00422644 00195883 */   sra   $t3, $t9, 2
/* 00422648 27210003 */  addiu $at, $t9, 3
/* 0042264C 00015883 */  sra   $t3, $at, 2
.L00422650:
/* 00422650 28C10004 */  slti  $at, $a2, 4
/* 00422654 14200002 */  bnez  $at, .L00422660
/* 00422658 024B9021 */   addu  $s2, $s2, $t3
/* 0042265C 24060003 */  li    $a2, 3
.L00422660:
/* 00422660 00D2082A */  slt   $at, $a2, $s2
/* 00422664 5020FF76 */  beql  $at, $zero, .L00422440
/* 00422668 00129900 */   sll   $s3, $s2, 4
.L0042266C:
/* 0042266C 8FBF003C */  lw    $ra, 0x3c($sp)
.L00422670:
/* 00422670 8FB00014 */  lw    $s0, 0x14($sp)
/* 00422674 8FB10018 */  lw    $s1, 0x18($sp)
/* 00422678 8FB2001C */  lw    $s2, 0x1c($sp)
/* 0042267C 8FB30020 */  lw    $s3, 0x20($sp)
/* 00422680 8FB40024 */  lw    $s4, 0x24($sp)
/* 00422684 8FB50028 */  lw    $s5, 0x28($sp)
/* 00422688 8FB6002C */  lw    $s6, 0x2c($sp)
/* 0042268C 8FB70030 */  lw    $s7, 0x30($sp)
/* 00422690 8FBE0038 */  lw    $fp, 0x38($sp)
/* 00422694 03E00008 */  jr    $ra
/* 00422698 27BD00A0 */   addiu $sp, $sp, 0xa0
    .type epilog, @function
    .size epilog, .-epilog
    .end epilog
)"");

__asm__(R""(
.set noat
.set noreorder

glabel gen_outparcode
    .ent gen_outparcode
    # 0042BF08 reemit
/* 0042269C 3C1C0FBF */  .cpload $t9
/* 004226A0 279C7BF4 */  
/* 004226A4 0399E021 */  
/* 004226A8 27BDFF90 */  addiu $sp, $sp, -0x70
/* 004226AC AFBF003C */  sw    $ra, 0x3c($sp)
/* 004226B0 AFBE0038 */  sw    $fp, 0x38($sp)
/* 004226B4 AFBC0034 */  sw    $gp, 0x34($sp)
/* 004226B8 AFB70030 */  sw    $s7, 0x30($sp)
/* 004226BC AFB6002C */  sw    $s6, 0x2c($sp)
/* 004226C0 AFB50028 */  sw    $s5, 0x28($sp)
/* 004226C4 AFB40024 */  sw    $s4, 0x24($sp)
/* 004226C8 AFB30020 */  sw    $s3, 0x20($sp)
/* 004226CC AFB2001C */  sw    $s2, 0x1c($sp)
/* 004226D0 AFB10018 */  sw    $s1, 0x18($sp)
/* 004226D4 AFB00014 */  sw    $s0, 0x14($sp)
/* 004226D8 8C8E001C */  lw    $t6, 0x1c($a0)
/* 004226DC 0080A825 */  move  $s5, $a0
/* 004226E0 8F968D44 */  lw     $s6, %got(firstparmreg)($gp)
/* 004226E4 8F978A34 */  lw     $s7, %got(curmst)($gp)
/* 004226E8 241E0005 */  li    $fp, 5
/* 004226EC 8DD1000C */  lw    $s1, 0xc($t6)
.L004226F0:
/* 004226F0 8E310008 */  lw    $s1, 8($s1)
/* 004226F4 2401007B */  li    $at, 123
/* 004226F8 922F0000 */  lbu   $t7, ($s1)
/* 004226FC 55E100EF */  bnel  $t7, $at, .L00422ABC
/* 00422700 8EA90020 */   lw    $t1, 0x20($s5)
/* 00422704 92380003 */  lbu   $t8, 3($s1)
/* 00422708 530000EC */  beql  $t8, $zero, .L00422ABC
/* 0042270C 8EA90020 */   lw    $t1, 0x20($s5)
/* 00422710 8EE30000 */  lw    $v1, ($s7)
/* 00422714 8E30002C */  lw    $s0, 0x2c($s1)
/* 00422718 8C790020 */  lw    $t9, 0x20($v1)
/* 0042271C 9328000C */  lbu   $t0, 0xc($t9)
/* 00422720 550000A2 */  bnezl $t0, .L004229AC
/* 00422724 920D0016 */   lbu   $t5, 0x16($s0)
/* 00422728 8E020018 */  lw    $v0, 0x18($s0)
/* 0042272C 02A02825 */  move  $a1, $s5
/* 00422730 27A60068 */  addiu $a2, $sp, 0x68
/* 00422734 28410005 */  slti  $at, $v0, 5
/* 00422738 50200081 */  beql  $at, $zero, .L00422940
/* 0042273C 8E300004 */   lw    $s0, 4($s1)
/* 00422740 8E09001C */  lw    $t1, 0x1c($s0)
/* 00422744 8C6A0018 */  lw    $t2, 0x18($v1)
/* 00422748 00009825 */  move  $s3, $zero
/* 0042274C 012A082A */  slt   $at, $t1, $t2
/* 00422750 50200006 */  beql  $at, $zero, .L0042276C
/* 00422754 8ECC0000 */   lw    $t4, ($s6)
/* 00422758 8ECB0004 */  lw    $t3, 4($s6)
/* 0042275C 0162A021 */  addu  $s4, $t3, $v0
/* 00422760 10000004 */  b     .L00422774
/* 00422764 2694FFFF */   addiu $s4, $s4, -1
/* 00422768 8ECC0000 */  lw    $t4, ($s6)
.L0042276C:
/* 0042276C 0182A021 */  addu  $s4, $t4, $v0
/* 00422770 2694FFFF */  addiu $s4, $s4, -1
.L00422774:
/* 00422774 8F998278 */  lw    $t9, %call16(inreg)($gp)
/* 00422778 8E2D0004 */  lw    $t5, 4($s1)
/* 0042277C 00003825 */  move  $a3, $zero
/* 00422780 0320F809 */  jalr  $t9
/* 00422784 8DA40014 */   lw    $a0, 0x14($t5)
/* 00422788 14400003 */  bnez  $v0, .L00422798
/* 0042278C 8FBC0034 */   lw    $gp, 0x34($sp)
/* 00422790 1000005E */  b     .L0042290C
/* 00422794 24130001 */   li    $s3, 1
.L00422798:
/* 00422798 8FB20068 */  lw    $s2, 0x68($sp)
/* 0042279C 2A810018 */  slti  $at, $s4, 0x18
/* 004227A0 5292005B */  beql  $s4, $s2, .L00422910
/* 004227A4 24010001 */   li    $at, 1
/* 004227A8 1020002B */  beqz  $at, .L00422858
/* 004227AC 0292082A */   slt   $at, $s4, $s2
/* 004227B0 50200018 */  beql  $at, $zero, .L00422814
/* 004227B4 8E300004 */   lw    $s0, 4($s1)
/* 004227B8 8EEE0000 */  lw    $t6, ($s7)
/* 004227BC 8ED80000 */  lw    $t8, ($s6)
/* 004227C0 2642FFFF */  addiu $v0, $s2, -1
/* 004227C4 8DCF001C */  lw    $t7, 0x1c($t6)
/* 004227C8 0258C823 */  subu  $t9, $s2, $t8
/* 004227CC 00194080 */  sll   $t0, $t9, 2
/* 004227D0 01E8082A */  slt   $at, $t7, $t0
/* 004227D4 1420000E */  bnez  $at, .L00422810
/* 004227D8 000248C3 */   sra   $t1, $v0, 3
/* 004227DC 02A91821 */  addu  $v1, $s5, $t1
/* 004227E0 906400D0 */  lbu   $a0, 0xd0($v1)
/* 004227E4 30450007 */  andi  $a1, $v0, 7
/* 004227E8 24A50018 */  addiu $a1, $a1, 0x18
/* 004227EC 00A45004 */  sllv  $t2, $a0, $a1
/* 004227F0 000A5FC2 */  srl   $t3, $t2, 0x1f
/* 004227F4 396C0001 */  xori  $t4, $t3, 1
/* 004227F8 000C6FC0 */  sll   $t5, $t4, 0x1f
/* 004227FC 00AD7006 */  srlv  $t6, $t5, $a1
/* 00422800 01C4C026 */  xor   $t8, $t6, $a0
/* 00422804 A07800D0 */  sb    $t8, 0xd0($v1)
/* 00422808 10000040 */  b     .L0042290C
/* 0042280C 24130001 */   li    $s3, 1
.L00422810:
/* 00422810 8E300004 */  lw    $s0, 4($s1)
.L00422814:
/* 00422814 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 00422818 24130002 */  li    $s3, 2
/* 0042281C 24040052 */  li    $a0, 82
/* 00422820 02802825 */  move  $a1, $s4
/* 00422824 92060001 */  lbu   $a2, 1($s0)
/* 00422828 0320F809 */  jalr  $t9
/* 0042282C 92070020 */   lbu   $a3, 0x20($s0)
/* 00422830 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00422834 8E300004 */  lw    $s0, 4($s1)
/* 00422838 2404007B */  li    $a0, 123
/* 0042283C 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 00422840 02402825 */  move  $a1, $s2
/* 00422844 92060001 */  lbu   $a2, 1($s0)
/* 00422848 0320F809 */  jalr  $t9
/* 0042284C 92070020 */   lbu   $a3, 0x20($s0)
/* 00422850 1000002E */  b     .L0042290C
/* 00422854 8FBC0034 */   lw    $gp, 0x34($sp)
.L00422858:
/* 00422858 8ED90004 */  lw    $t9, 4($s6)
/* 0042285C 272F0001 */  addiu $t7, $t9, 1
/* 00422860 564F0007 */  bnel  $s2, $t7, .L00422880
/* 00422864 8ECA0000 */   lw    $t2, ($s6)
/* 00422868 8EE80000 */  lw    $t0, ($s7)
/* 0042286C 8D090018 */  lw    $t1, 0x18($t0)
/* 00422870 29210008 */  slti  $at, $t1, 8
/* 00422874 50200006 */  beql  $at, $zero, .L00422890
/* 00422878 2642FFFF */   addiu $v0, $s2, -1
/* 0042287C 8ECA0000 */  lw    $t2, ($s6)
.L00422880:
/* 00422880 254B0004 */  addiu $t3, $t2, 4
/* 00422884 024B082A */  slt   $at, $s2, $t3
/* 00422888 1020000F */  beqz  $at, .L004228C8
/* 0042288C 2642FFFF */   addiu $v0, $s2, -1
.L00422890:
/* 00422890 000260C3 */  sra   $t4, $v0, 3
/* 00422894 02AC1821 */  addu  $v1, $s5, $t4
/* 00422898 906400D0 */  lbu   $a0, 0xd0($v1)
/* 0042289C 30450007 */  andi  $a1, $v0, 7
/* 004228A0 24A50018 */  addiu $a1, $a1, 0x18
/* 004228A4 00A46804 */  sllv  $t5, $a0, $a1
/* 004228A8 000D77C2 */  srl   $t6, $t5, 0x1f
/* 004228AC 39D80001 */  xori  $t8, $t6, 1
/* 004228B0 0018CFC0 */  sll   $t9, $t8, 0x1f
/* 004228B4 00B97806 */  srlv  $t7, $t9, $a1
/* 004228B8 01E44026 */  xor   $t0, $t7, $a0
/* 004228BC A06800D0 */  sb    $t0, 0xd0($v1)
/* 004228C0 10000012 */  b     .L0042290C
/* 004228C4 24130001 */   li    $s3, 1
.L004228C8:
/* 004228C8 8E300004 */  lw    $s0, 4($s1)
/* 004228CC 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 004228D0 24130002 */  li    $s3, 2
/* 004228D4 24040052 */  li    $a0, 82
/* 004228D8 02802825 */  move  $a1, $s4
/* 004228DC 92060001 */  lbu   $a2, 1($s0)
/* 004228E0 0320F809 */  jalr  $t9
/* 004228E4 92070020 */   lbu   $a3, 0x20($s0)
/* 004228E8 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004228EC 8E300004 */  lw    $s0, 4($s1)
/* 004228F0 2404007B */  li    $a0, 123
/* 004228F4 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 004228F8 02402825 */  move  $a1, $s2
/* 004228FC 92060001 */  lbu   $a2, 1($s0)
/* 00422900 0320F809 */  jalr  $t9
/* 00422904 92070020 */   lbu   $a3, 0x20($s0)
/* 00422908 8FBC0034 */  lw    $gp, 0x34($sp)
.L0042290C:
/* 0042290C 24010001 */  li    $at, 1
.L00422910:
/* 00422910 16610069 */  bne   $s3, $at, .L00422AB8
/* 00422914 AFB4006C */   sw    $s4, 0x6c($sp)
/* 00422918 8E290004 */  lw    $t1, 4($s1)
/* 0042291C 8F9982A4 */  lw    $t9, %call16(genrlodrstr)($gp)
/* 00422920 24040070 */  li    $a0, 112
/* 00422924 8D260014 */  lw    $a2, 0x14($t1)
/* 00422928 AFB4006C */  sw    $s4, 0x6c($sp)
/* 0042292C 0320F809 */  jalr  $t9
/* 00422930 02802825 */   move  $a1, $s4
/* 00422934 10000060 */  b     .L00422AB8
/* 00422938 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0042293C 8E300004 */  lw    $s0, 4($s1)
.L00422940:
/* 00422940 920A002E */  lbu   $t2, 0x2e($s0)
/* 00422944 314B0007 */  andi  $t3, $t2, 7
/* 00422948 53CB005C */  beql  $fp, $t3, .L00422ABC
/* 0042294C 8EA90020 */   lw    $t1, 0x20($s5)
/* 00422950 8F998268 */  lw    $t9, %call16(outparlod)($gp)
/* 00422954 24040052 */  li    $a0, 82
/* 00422958 8E050034 */  lw    $a1, 0x34($s0)
/* 0042295C 0320F809 */  jalr  $t9
/* 00422960 00000000 */   nop   
/* 00422964 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00422968 8E2C0004 */  lw    $t4, 4($s1)
/* 0042296C 2404007B */  li    $a0, 123
/* 00422970 8F99828C */  lw    $t9, %call16(varlodstr)($gp)
/* 00422974 02A03025 */  move  $a2, $s5
/* 00422978 00003825 */  move  $a3, $zero
/* 0042297C 0320F809 */  jalr  $t9
/* 00422980 8D850014 */   lw    $a1, 0x14($t4)
/* 00422984 1040004C */  beqz  $v0, .L00422AB8
/* 00422988 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0042298C 8F998268 */  lw    $t9, %call16(outparlod)($gp)
/* 00422990 2404007B */  li    $a0, 123
/* 00422994 8E250004 */  lw    $a1, 4($s1)
/* 00422998 0320F809 */  jalr  $t9
/* 0042299C 00000000 */   nop   
/* 004229A0 10000045 */  b     .L00422AB8
/* 004229A4 8FBC0034 */   lw    $gp, 0x34($sp)
/* 004229A8 920D0016 */  lbu   $t5, 0x16($s0)
.L004229AC:
/* 004229AC 02A02825 */  move  $a1, $s5
/* 004229B0 27A6006C */  addiu $a2, $sp, 0x6c
/* 004229B4 15A0001D */  bnez  $t5, .L00422A2C
/* 004229B8 00000000 */   nop   
/* 004229BC 8E300004 */  lw    $s0, 4($s1)
/* 004229C0 920E002E */  lbu   $t6, 0x2e($s0)
/* 004229C4 31D80007 */  andi  $t8, $t6, 7
/* 004229C8 53D8003C */  beql  $fp, $t8, .L00422ABC
/* 004229CC 8EA90020 */   lw    $t1, 0x20($s5)
/* 004229D0 8F998268 */  lw    $t9, %call16(outparlod)($gp)
/* 004229D4 24040052 */  li    $a0, 82
/* 004229D8 8E050034 */  lw    $a1, 0x34($s0)
/* 004229DC 0320F809 */  jalr  $t9
/* 004229E0 00000000 */   nop   
/* 004229E4 8E390004 */  lw    $t9, 4($s1)
/* 004229E8 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004229EC 2404007B */  li    $a0, 123
/* 004229F0 8F250014 */  lw    $a1, 0x14($t9)
/* 004229F4 8F99828C */  lw    $t9, %call16(varlodstr)($gp)
/* 004229F8 02A03025 */  move  $a2, $s5
/* 004229FC 00003825 */  move  $a3, $zero
/* 00422A00 0320F809 */  jalr  $t9
/* 00422A04 00000000 */   nop   
/* 00422A08 1040002B */  beqz  $v0, .L00422AB8
/* 00422A0C 8FBC0034 */   lw    $gp, 0x34($sp)
/* 00422A10 8F998268 */  lw    $t9, %call16(outparlod)($gp)
/* 00422A14 2404007B */  li    $a0, 123
/* 00422A18 8E250004 */  lw    $a1, 4($s1)
/* 00422A1C 0320F809 */  jalr  $t9
/* 00422A20 00000000 */   nop   
/* 00422A24 10000024 */  b     .L00422AB8
/* 00422A28 8FBC0034 */   lw    $gp, 0x34($sp)
.L00422A2C:
/* 00422A2C 8F998278 */  lw    $t9, %call16(inreg)($gp)
/* 00422A30 8E2F0004 */  lw    $t7, 4($s1)
/* 00422A34 00003825 */  move  $a3, $zero
/* 00422A38 0320F809 */  jalr  $t9
/* 00422A3C 8DE40014 */   lw    $a0, 0x14($t7)
/* 00422A40 14400009 */  bnez  $v0, .L00422A68
/* 00422A44 8FBC0034 */   lw    $gp, 0x34($sp)
/* 00422A48 8F9982A4 */  lw    $t9, %call16(genrlodrstr)($gp)
/* 00422A4C 8E280004 */  lw    $t0, 4($s1)
/* 00422A50 24040070 */  li    $a0, 112
/* 00422A54 92050016 */  lbu   $a1, 0x16($s0)
/* 00422A58 0320F809 */  jalr  $t9
/* 00422A5C 8D060014 */   lw    $a2, 0x14($t0)
/* 00422A60 10000015 */  b     .L00422AB8
/* 00422A64 8FBC0034 */   lw    $gp, 0x34($sp)
.L00422A68:
/* 00422A68 8FB4006C */  lw    $s4, 0x6c($sp)
/* 00422A6C 92050016 */  lbu   $a1, 0x16($s0)
/* 00422A70 52850012 */  beql  $s4, $a1, .L00422ABC
/* 00422A74 8EA90020 */   lw    $t1, 0x20($s5)
/* 00422A78 8E300004 */  lw    $s0, 4($s1)
/* 00422A7C 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 00422A80 24040052 */  li    $a0, 82
/* 00422A84 92060001 */  lbu   $a2, 1($s0)
/* 00422A88 0320F809 */  jalr  $t9
/* 00422A8C 92070020 */   lbu   $a3, 0x20($s0)
/* 00422A90 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00422A94 8E300004 */  lw    $s0, 4($s1)
/* 00422A98 2404007B */  li    $a0, 123
/* 00422A9C 8F998274 */  lw    $t9, %call16(genrop)($gp)
/* 00422AA0 02802825 */  move  $a1, $s4
/* 00422AA4 AFB4006C */  sw    $s4, 0x6c($sp)
/* 00422AA8 92060001 */  lbu   $a2, 1($s0)
/* 00422AAC 0320F809 */  jalr  $t9
/* 00422AB0 92070020 */   lbu   $a3, 0x20($s0)
/* 00422AB4 8FBC0034 */  lw    $gp, 0x34($sp)
.L00422AB8:
/* 00422AB8 8EA90020 */  lw    $t1, 0x20($s5)
.L00422ABC:
/* 00422ABC 8FB00014 */  lw    $s0, 0x14($sp)
/* 00422AC0 8FB2001C */  lw    $s2, 0x1c($sp)
/* 00422AC4 1629FF0A */  bne   $s1, $t1, .L004226F0
/* 00422AC8 8FB30020 */   lw    $s3, 0x20($sp)
/* 00422ACC 8FBF003C */  lw    $ra, 0x3c($sp)
/* 00422AD0 8FB10018 */  lw    $s1, 0x18($sp)
/* 00422AD4 8FB40024 */  lw    $s4, 0x24($sp)
/* 00422AD8 8FB50028 */  lw    $s5, 0x28($sp)
/* 00422ADC 8FB6002C */  lw    $s6, 0x2c($sp)
/* 00422AE0 8FB70030 */  lw    $s7, 0x30($sp)
/* 00422AE4 8FBE0038 */  lw    $fp, 0x38($sp)
/* 00422AE8 03E00008 */  jr    $ra
/* 00422AEC 27BD0070 */   addiu $sp, $sp, 0x70
    .type gen_outparcode, @function
    .size gen_outparcode, .-gen_outparcode
    .end gen_outparcode
)"");

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
                if (unaltab[reg - 1].data[reg2 - 1] != 0) {
                    if (unaltab[reg - 1].data[reg2 - 1] == 2) {
                        IONE = coloroffset(reg2);
                        uwrite(&u);
                    }

                    unaltab[reg  - 1].data[reg2 - 1] = 0;
                    unaltab[reg2 - 1].data[reg  - 1] = 0;
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
            if (inreg(ichain, node, &reg, 1)) {
                genrop(Ulod, reg, ichain->dtype, ichain->isvar_issvar.size);
            } else {
                igen3(Ulod, ichain, 0);
            }
            break;

        case issvar:
            func_00422D04(ichain->isvar_issvar.outer_stack_ichain, node);
            igen3(Uisld, ichain, 0);
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
    struct IChainList *sp24;

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
    struct TrepImageThing *sp74;
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
                    igen3(Ulod, ichain, 0);
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
                igen3(Uisld, ichain, 0);
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
                    igen3(Uisst, ichain->isop.op1, 0);
                } else if (varlodstr(Ustr, ichain->isop.op1, node, NULL)) {
                    igen3(Ustr, ichain->isop.op1, 0);
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
                        sp74 = trep;
                        genloadnum(ichain->expr->datatype, 0, constval, 4, true);
                        OPC = Umpy;
                        DTYPE = ichain->expr->datatype;
                        uwrite(&u);
                    }

                    if (trep->unk28->type == islda || trep->unk28->isvar_issvar.location.addr != NULL) {
                        sp74 = trep;
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
    bool sp2B;
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
    int reg;

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
            if (ichain->type == Jdt) {
                OFFSET = ichain->isop.temploc->disp;
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
static void func_0042BD94(unsigned int unk2C) {
    int i = 20; // start at the end of the Ucomm string

    do {
        i--;
        ustrptr[i] = (unk2C - ((unk2C / 10) * 10)) + '0';
        unk2C /= 10;
    } while (unk2C != 0);

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
    bool sp95;
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

    sp95 = 0;
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

    sp97 = 0;
    while (stat != NULL) {
        if (stat->opc == Uret || stat->opc == Uujp) {
            sp97 = 1;
            func_0042AADC(node);
            func_0042B09C(node);
            if (do_opt_saved_regs && !SET32_EMPTY(node->bvs.stage3.strinsertin)) {
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
                            if (varlodstr(Ustr, stat->expr->ichain, node, 0)) {
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
                sp97 = 1;
                func_00424FFC(stat->expr, NULL, node);
                func_0042AADC(node);
                func_004230F0(stat->expr, 0, NULL, false, node);
                func_0042B09C(node);
                if (do_opt_saved_regs && !SET32_EMPTY(node->bvs.stage3.strinsertin)) {
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
                    if (do_opt_saved_regs && !SET32_EMPTY(node->bvs.stage3.strinsertin)) {
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
                    sp97 = 1;
                    func_00424FFC(stat->expr, NULL, node);
                    func_0042AADC(node);
                    func_004230F0(stat->expr, 0, NULL, false, node);
                    func_0042B09C(node);
                    if (do_opt_saved_regs && !SET32_EMPTY(node->bvs.stage3.strinsertin)) {
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
                sp97 = 1;
                if (stat->expr == NULL) {
                    dbgerror(0x45C);
                }
                func_00424FFC(stat->expr, NULL, node);
                func_0042AADC(node);
                func_004230F0(stat->expr, 0, NULL, false, node);
                func_0042B09C(node);
                if (do_opt_saved_regs && !SET32_EMPTY(node->bvs.stage3.strinsertin)) {
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
                    sp95 = 1;
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
                    spilltemplodstr(Ustr, 2, sp84);
                    func_0042AADC(node);
                    spilltemplodstr(Ulod, 2, sp84);
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
                    } else if (OPC == Ulod && MTYPE == Rmt && OFFSET == 31) {
                        OPC = Ustr;
                        OFFSET = 15;
                        uwrite(&u);
                        OPC = Ulod;
                        uwrite(&u);
                    }
                }
                break;

            case Urcuf:
            case Ucup:
            case Uicuf:
                sp97 = 1;
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
                if (do_opt_saved_regs && !SET32_EMPTY(node->bvs.stage3.strinsertin)) {
                    func_0042A1C8(node);
                }
                func_0042B144(node);
                if (curmst->u.mst.loc >= 0) {
                    gen_outparcode(node->successors->graphnode);
                }
                break;

            case Ucia:
                sp97 = 1;
                func_0042AADC(node);
                func_0042B09C(node);
                OPC = Ucia;
                LENGTH = stat->u.cia.unk1C;
                LEXLEV = stat->u.cia.flags;
                DTYPE + stat->u.cia.returntype;
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

                if (do_opt_saved_regs && !SET32_EMPTY(node->bvs.stage3.strinsertin)) {
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

        stat = stat->next;
        if (stat != NULL && node != stat->graphnode) {
            if (sp97 == 0) {
                func_0042AADC(node);
                func_0042B09C(node);
                if (do_opt_saved_regs && !SET32_EMPTY(node->bvs.stage3.strinsertin)) {
                    func_0042A1C8(node);
                }
                func_0042B144(node);
            }
            sp97 = 0;
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
        if (do_opt_saved_regs && !SET32_EMPTY(node->bvs.stage3.strinsertin)) {
            func_0042A1C8(node);
        }
    }

    if (!sp95) {
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
            reg = reg + 1;
        }
    }
}
