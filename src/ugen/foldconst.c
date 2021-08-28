#include <stdio.h>
__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
RO_100081E0:
    # 0040ADA0 warning
    .asciz "ugen: warning: line %d: %s\n"

RO_100081FC:
    # 0040AF4C fold_constant
    .asciz "divide by zero"

RO_1000820C:
    # 0040AF4C fold_constant
    .asciz "divide by zero"

    .balign 4
jtbl_1000821C:
    # 0040AF4C fold_constant
    .gpword .L0040B4FC
    .gpword .L0040B050
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B2BC
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040AFA0
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B15C
    .gpword .L0040B944
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B78C
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B5DC
    .gpword .L0040B64C
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B2E0
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B6B4
    .gpword .L0040B724
    .gpword .L0040B958
    .gpword .L0040B434
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B898
    .gpword .L0040B7EC
    .gpword .L0040B230
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B120
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B4A0
    .gpword .L0040B7BC
    .gpword .L0040B958
    .gpword .L0040B418
    .gpword .L0040B590
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B328
    .gpword .L0040B374
    .gpword .L0040B958
    .gpword .L0040B464
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B0B8
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B958
    .gpword .L0040B304

    .balign 4
jtbl_10008454:
    # 0040B988 fold_identities
    .gpword .L0040BA80
    .gpword .L0040B9E4
    .gpword .L0040B9E4
    .gpword .L0040B9E4
    .gpword .L0040B9E4
    .gpword .L0040B9E4
    .gpword .L0040B9E4
    .gpword .L0040B9E4
    .gpword .L0040B9E4
    .gpword .L0040B9E4
    .gpword .L0040B9E4
    .gpword .L0040B9E4
    .gpword .L0040B9E4
    .gpword .L0040B9E4
    .gpword .L0040B9E4
    .gpword .L0040B9E4
    .gpword .L0040B9E4
    .gpword .L0040B9E4
    .gpword .L0040B9E4
    .gpword .L0040B9E4
    .gpword .L0040B9E4
    .gpword .L0040B9E4
    .gpword .L0040B9E4
    .gpword .L0040B9E4
    .gpword .L0040BA34
    .gpword .L0040BA34
    .gpword .L0040B9E4
    .gpword .L0040B9E4
    .gpword .L0040B9E4
    .gpword .L0040B9E4
    .gpword .L0040B9E4
    .gpword .L0040B9E4
    .gpword .L0040B9E4
    .gpword .L0040B9E4
    .gpword .L0040BA34
    .gpword .L0040B9E4
    .gpword .L0040B9E4
    .gpword .L0040B9E4
    .gpword .L0040B9E4
    .gpword .L0040B9E4
    .gpword .L0040B9E4
    .gpword .L0040B9E4
    .gpword .L0040B9E4
    .gpword .L0040B9E4
    .gpword .L0040B9E4
    .gpword .L0040B9E4
    .gpword .L0040B9E4
    .gpword .L0040B9E4
    .gpword .L0040B9E4
    .gpword .L0040B9E4
    .gpword .L0040BA14



.bss
    .balign 4
# 1002121C
glabel print_warnings
    # 0040ADA0 warning
    # 0043D690 report_error
    # 0044BF18 main
    .space 4
    .size print_warnings, 4
    .type print_warnings, @object


.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
)"");
extern int current_line;
extern int print_warnings;

/* 
0040AF4C fold_constant
*/
void warning(const char *warning_message) {
    if (print_warnings) {
        fprintf(stderr, "ugen: warning: line %d: %s\n", current_line, warning_message);
    }
}
#if 0
glabel warning
    .ent warning
    # 0040AF4C fold_constant
/* 0040ADA0 3C1C0FC1 */  .cpload $t9
/* 0040ADA4 279C4CB0 */  
/* 0040ADA8 0399E021 */  
/* 0040ADAC 8F8E8964 */  lw     $t6, %got(print_warnings)($gp)
/* 0040ADB0 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0040ADB4 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0040ADB8 8DCE0000 */  lw    $t6, ($t6)
/* 0040ADBC AFBC0018 */  sw    $gp, 0x18($sp)
/* 0040ADC0 00803825 */  move  $a3, $a0
/* 0040ADC4 51C0000B */  beql  $t6, $zero, .L0040ADF4
/* 0040ADC8 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0040ADCC 8F998078 */  lw    $t9, %call16(fprintf)($gp)
/* 0040ADD0 8F848050 */  lw     $a0, %got(__iob)($gp)
/* 0040ADD4 8F858038 */  lw    $a1, %got(RO_100081E0)($gp)
/* 0040ADD8 8F868968 */  lw     $a2, %got(current_line)($gp)
/* 0040ADDC 24840020 */  addiu $a0, $a0, 0x20
/* 0040ADE0 24A581E0 */  addiu $a1, %lo(RO_100081E0) # addiu $a1, $a1, -0x7e20
/* 0040ADE4 0320F809 */  jalr  $t9
/* 0040ADE8 8CC60000 */   lw    $a2, ($a2)
/* 0040ADEC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0040ADF0 8FBF001C */  lw    $ra, 0x1c($sp)
.L0040ADF4:
/* 0040ADF4 27BD0020 */  addiu $sp, $sp, 0x20
/* 0040ADF8 03E00008 */  jr    $ra
/* 0040ADFC 00000000 */   nop   
    .type warning, @function
    .size warning, .-warning
    .end warning
#endif

__asm__(R""(
.set noat
.set noreorder

    .type func_0040AE00, @function
func_0040AE00:
    # 0040AF4C fold_constant
/* 0040AE00 8FAE0010 */  lw    $t6, 0x10($sp)
/* 0040AE04 AFA40000 */  sw    $a0, ($sp)
/* 0040AE08 AFA50004 */  sw    $a1, 4($sp)
/* 0040AE0C AFA60008 */  sw    $a2, 8($sp)
/* 0040AE10 11C0001B */  beqz  $t6, .L0040AE80
/* 0040AE14 AFA7000C */   sw    $a3, 0xc($sp)
/* 0040AE18 00865026 */  xor   $t2, $a0, $a2
/* 0040AE1C 000A102A */  slt   $v0, $zero, $t2
/* 0040AE20 0080C025 */  move  $t8, $a0
/* 0040AE24 00A0C825 */  move  $t9, $a1
/* 0040AE28 00C04025 */  move  $t0, $a2
/* 0040AE2C 00E04825 */  move  $t1, $a3
/* 0040AE30 1C400005 */  bgtz  $v0, .L0040AE48
/* 0040AE34 00A75826 */   xor   $t3, $a1, $a3
/* 0040AE38 05400003 */  bltz  $t2, .L0040AE48
/* 0040AE3C 00000000 */   nop   
/* 0040AE40 2D620000 */  sltiu $v0, $t3, 0
/* 0040AE44 38420001 */  xori  $v0, $v0, 1
.L0040AE48:
/* 0040AE48 10400016 */  beqz  $v0, .L0040AEA4
/* 0040AE4C 03296821 */   addu  $t5, $t9, $t1
/* 0040AE50 01A9082B */  sltu  $at, $t5, $t1
/* 0040AE54 00386021 */  addu  $t4, $at, $t8
/* 0040AE58 01886021 */  addu  $t4, $t4, $t0
/* 0040AE5C 01987026 */  xor   $t6, $t4, $t8
/* 0040AE60 29C20000 */  slti  $v0, $t6, 0
/* 0040AE64 1C400004 */  bgtz  $v0, .L0040AE78
/* 0040AE68 01B97826 */   xor   $t7, $t5, $t9
/* 0040AE6C 1DC00002 */  bgtz  $t6, .L0040AE78
/* 0040AE70 00000000 */   nop   
/* 0040AE74 2DE20000 */  sltiu $v0, $t7, 0
.L0040AE78:
/* 0040AE78 03E00008 */  jr    $ra
/* 0040AE7C 00000000 */   nop   

.L0040AE80:
/* 0040AE80 8FAA0000 */  lw    $t2, ($sp)
/* 0040AE84 8FAC0008 */  lw    $t4, 8($sp)
/* 0040AE88 8FAB0004 */  lw    $t3, 4($sp)
/* 0040AE8C 01404027 */  not   $t0, $t2
/* 0040AE90 8FAD000C */  lw    $t5, 0xc($sp)
/* 0040AE94 010C102B */  sltu  $v0, $t0, $t4
/* 0040AE98 150C0002 */  bne   $t0, $t4, .L0040AEA4
/* 0040AE9C 01604827 */   not   $t1, $t3
/* 0040AEA0 012D102B */  sltu  $v0, $t1, $t5
.L0040AEA4:
/* 0040AEA4 03E00008 */  jr    $ra
/* 0040AEA8 00000000 */   nop   

    .type func_0040AEAC, @function
func_0040AEAC:
    # 0040AF4C fold_constant
/* 0040AEAC 8FAE0010 */  lw    $t6, 0x10($sp)
/* 0040AEB0 AFA40000 */  sw    $a0, ($sp)
/* 0040AEB4 AFA50004 */  sw    $a1, 4($sp)
/* 0040AEB8 AFA60008 */  sw    $a2, 8($sp)
/* 0040AEBC 11C0001A */  beqz  $t6, .L0040AF28
/* 0040AEC0 AFA7000C */   sw    $a3, 0xc($sp)
/* 0040AEC4 00865026 */  xor   $t2, $a0, $a2
/* 0040AEC8 29420000 */  slti  $v0, $t2, 0
/* 0040AECC 0080C025 */  move  $t8, $a0
/* 0040AED0 00A0C825 */  move  $t9, $a1
/* 0040AED4 00C04025 */  move  $t0, $a2
/* 0040AED8 00E04825 */  move  $t1, $a3
/* 0040AEDC 1C400004 */  bgtz  $v0, .L0040AEF0
/* 0040AEE0 00A75826 */   xor   $t3, $a1, $a3
/* 0040AEE4 1D400002 */  bgtz  $t2, .L0040AEF0
/* 0040AEE8 00000000 */   nop   
/* 0040AEEC 2D620000 */  sltiu $v0, $t3, 0
.L0040AEF0:
/* 0040AEF0 10400014 */  beqz  $v0, .L0040AF44
/* 0040AEF4 0329082B */   sltu  $at, $t9, $t1
/* 0040AEF8 03086023 */  subu  $t4, $t8, $t0
/* 0040AEFC 01816023 */  subu  $t4, $t4, $at
/* 0040AF00 01987026 */  xor   $t6, $t4, $t8
/* 0040AF04 29C20000 */  slti  $v0, $t6, 0
/* 0040AF08 03296823 */  subu  $t5, $t9, $t1
/* 0040AF0C 1C400004 */  bgtz  $v0, .L0040AF20
/* 0040AF10 01B97826 */   xor   $t7, $t5, $t9
/* 0040AF14 1DC00002 */  bgtz  $t6, .L0040AF20
/* 0040AF18 00000000 */   nop   
/* 0040AF1C 2DE20000 */  sltiu $v0, $t7, 0
.L0040AF20:
/* 0040AF20 03E00008 */  jr    $ra
/* 0040AF24 00000000 */   nop   

.L0040AF28:
/* 0040AF28 8FAA0000 */  lw    $t2, ($sp)
/* 0040AF2C 8FA80008 */  lw    $t0, 8($sp)
/* 0040AF30 8FAB0004 */  lw    $t3, 4($sp)
/* 0040AF34 8FA9000C */  lw    $t1, 0xc($sp)
/* 0040AF38 15480002 */  bne   $t2, $t0, .L0040AF44
/* 0040AF3C 0148102B */   sltu  $v0, $t2, $t0
/* 0040AF40 0169102B */  sltu  $v0, $t3, $t1
.L0040AF44:
/* 0040AF44 03E00008 */  jr    $ra
/* 0040AF48 00000000 */   nop   

glabel fold_constant
    .ent fold_constant
    # 00434B28 fold
/* 0040AF4C 3C1C0FC1 */  .cpload $t9
/* 0040AF50 279C4B04 */  
/* 0040AF54 0399E021 */  
/* 0040AF58 27BDFFB8 */  addiu $sp, $sp, -0x48
/* 0040AF5C 8FAE0058 */  lw    $t6, 0x58($sp)
/* 0040AF60 8FAF005C */  lw    $t7, 0x5c($sp)
/* 0040AF64 2C81008E */  sltiu $at, $a0, 0x8e
/* 0040AF68 AFBF0024 */  sw    $ra, 0x24($sp)
/* 0040AF6C AFBC0020 */  sw    $gp, 0x20($sp)
/* 0040AF70 AFA60050 */  sw    $a2, 0x50($sp)
/* 0040AF74 AFA70054 */  sw    $a3, 0x54($sp)
/* 0040AF78 AFAE0028 */  sw    $t6, 0x28($sp)
/* 0040AF7C 10200276 */  beqz  $at, .L0040B958
/* 0040AF80 AFAF002C */   sw    $t7, 0x2c($sp)
/* 0040AF84 8F818038 */  lw    $at, %got(jtbl_1000821C)($gp)
/* 0040AF88 0004C080 */  sll   $t8, $a0, 2
/* 0040AF8C 00380821 */  addu  $at, $at, $t8
/* 0040AF90 8C38821C */  lw    $t8, %lo(jtbl_1000821C)($at)
/* 0040AF94 031CC021 */  addu  $t8, $t8, $gp
/* 0040AF98 03000008 */  jr    $t8
/* 0040AF9C 00000000 */   nop   
.L0040AFA0:
/* 0040AFA0 8FB90068 */  lw    $t9, 0x68($sp)
/* 0040AFA4 24040000 */  li    $a0, 0
/* 0040AFA8 13200003 */  beqz  $t9, .L0040AFB8
/* 0040AFAC 00000000 */   nop   
/* 0040AFB0 10000271 */  b     .L0040B978
/* 0040AFB4 00001025 */   move  $v0, $zero
.L0040AFB8:
/* 0040AFB8 8F99809C */  lw    $t9, %call16(__ll_lshift)($gp)
/* 0040AFBC 24050001 */  li    $a1, 1
/* 0040AFC0 8FA60058 */  lw    $a2, 0x58($sp)
/* 0040AFC4 0320F809 */  jalr  $t9
/* 0040AFC8 8FA7005C */   lw    $a3, 0x5c($sp)
/* 0040AFCC 8FAA0050 */  lw    $t2, 0x50($sp)
/* 0040AFD0 8FAB0054 */  lw    $t3, 0x54($sp)
/* 0040AFD4 8FA80060 */  lw    $t0, 0x60($sp)
/* 0040AFD8 2C610001 */  sltiu $at, $v1, 1
/* 0040AFDC 00416023 */  subu  $t4, $v0, $at
/* 0040AFE0 246DFFFF */  addiu $t5, $v1, -1
/* 0040AFE4 014C7024 */  and   $t6, $t2, $t4
/* 0040AFE8 016D7824 */  and   $t7, $t3, $t5
/* 0040AFEC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0040AFF0 AFAF0044 */  sw    $t7, 0x44($sp)
/* 0040AFF4 1100025A */  beqz  $t0, .L0040B960
/* 0040AFF8 AFAE0040 */   sw    $t6, 0x40($sp)
/* 0040AFFC 8FA7005C */  lw    $a3, 0x5c($sp)
/* 0040B000 8F99809C */  lw    $t9, %call16(__ll_lshift)($gp)
/* 0040B004 8FA60058 */  lw    $a2, 0x58($sp)
/* 0040B008 2CE10001 */  sltiu $at, $a3, 1
/* 0040B00C 24040000 */  li    $a0, 0
/* 0040B010 24050001 */  li    $a1, 1
/* 0040B014 24E7FFFF */  addiu $a3, $a3, -1
/* 0040B018 0320F809 */  jalr  $t9
/* 0040B01C 00C13023 */   subu  $a2, $a2, $at
/* 0040B020 8FB80040 */  lw    $t8, 0x40($sp)
/* 0040B024 8FB90044 */  lw    $t9, 0x44($sp)
/* 0040B028 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0040B02C 03025026 */  xor   $t2, $t8, $v0
/* 0040B030 03235826 */  xor   $t3, $t9, $v1
/* 0040B034 0163082B */  sltu  $at, $t3, $v1
/* 0040B038 01426023 */  subu  $t4, $t2, $v0
/* 0040B03C 01816023 */  subu  $t4, $t4, $at
/* 0040B040 01636823 */  subu  $t5, $t3, $v1
/* 0040B044 AFAD0044 */  sw    $t5, 0x44($sp)
/* 0040B048 10000245 */  b     .L0040B960
/* 0040B04C AFAC0040 */   sw    $t4, 0x40($sp)
.L0040B050:
/* 0040B050 8FA90068 */  lw    $t1, 0x68($sp)
/* 0040B054 8FA80060 */  lw    $t0, 0x60($sp)
/* 0040B058 8FA40050 */  lw    $a0, 0x50($sp)
/* 0040B05C 1120000B */  beqz  $t1, .L0040B08C
/* 0040B060 8FA50054 */   lw    $a1, 0x54($sp)
/* 0040B064 8F998018 */  lw    $t9, %got(func_0040AE00)($gp)
/* 0040B068 8FA60058 */  lw    $a2, 0x58($sp)
/* 0040B06C 8FA7005C */  lw    $a3, 0x5c($sp)
/* 0040B070 2739AE00 */  addiu $t9, %lo(func_0040AE00) # addiu $t9, $t9, -0x5200
/* 0040B074 0320F809 */  jalr  $t9
/* 0040B078 AFA80010 */   sw    $t0, 0x10($sp)
/* 0040B07C 10400003 */  beqz  $v0, .L0040B08C
/* 0040B080 8FBC0020 */   lw    $gp, 0x20($sp)
/* 0040B084 1000023C */  b     .L0040B978
/* 0040B088 00001025 */   move  $v0, $zero
.L0040B08C:
/* 0040B08C 8FAF0054 */  lw    $t7, 0x54($sp)
/* 0040B090 8FB9005C */  lw    $t9, 0x5c($sp)
/* 0040B094 8FAE0050 */  lw    $t6, 0x50($sp)
/* 0040B098 8FB80058 */  lw    $t8, 0x58($sp)
/* 0040B09C 01F95821 */  addu  $t3, $t7, $t9
/* 0040B0A0 0179082B */  sltu  $at, $t3, $t9
/* 0040B0A4 002E5021 */  addu  $t2, $at, $t6
/* 0040B0A8 01585021 */  addu  $t2, $t2, $t8
/* 0040B0AC AFAA0040 */  sw    $t2, 0x40($sp)
/* 0040B0B0 1000022B */  b     .L0040B960
/* 0040B0B4 AFAB0044 */   sw    $t3, 0x44($sp)
.L0040B0B8:
/* 0040B0B8 8FAC0068 */  lw    $t4, 0x68($sp)
/* 0040B0BC 8FA80060 */  lw    $t0, 0x60($sp)
/* 0040B0C0 8FA40050 */  lw    $a0, 0x50($sp)
/* 0040B0C4 1180000B */  beqz  $t4, .L0040B0F4
/* 0040B0C8 8FA50054 */   lw    $a1, 0x54($sp)
/* 0040B0CC 8F998018 */  lw    $t9, %got(func_0040AEAC)($gp)
/* 0040B0D0 8FA60058 */  lw    $a2, 0x58($sp)
/* 0040B0D4 8FA7005C */  lw    $a3, 0x5c($sp)
/* 0040B0D8 2739AEAC */  addiu $t9, %lo(func_0040AEAC) # addiu $t9, $t9, -0x5154
/* 0040B0DC 0320F809 */  jalr  $t9
/* 0040B0E0 AFA80010 */   sw    $t0, 0x10($sp)
/* 0040B0E4 10400003 */  beqz  $v0, .L0040B0F4
/* 0040B0E8 8FBC0020 */   lw    $gp, 0x20($sp)
/* 0040B0EC 10000222 */  b     .L0040B978
/* 0040B0F0 00001025 */   move  $v0, $zero
.L0040B0F4:
/* 0040B0F4 8FAE0050 */  lw    $t6, 0x50($sp)
/* 0040B0F8 8FAF0054 */  lw    $t7, 0x54($sp)
/* 0040B0FC 8FB80058 */  lw    $t8, 0x58($sp)
/* 0040B100 8FB9005C */  lw    $t9, 0x5c($sp)
/* 0040B104 01D85023 */  subu  $t2, $t6, $t8
/* 0040B108 01F9082B */  sltu  $at, $t7, $t9
/* 0040B10C 01415023 */  subu  $t2, $t2, $at
/* 0040B110 01F95823 */  subu  $t3, $t7, $t9
/* 0040B114 AFAB0044 */  sw    $t3, 0x44($sp)
/* 0040B118 10000211 */  b     .L0040B960
/* 0040B11C AFAA0040 */   sw    $t2, 0x40($sp)
.L0040B120:
/* 0040B120 8FAD0068 */  lw    $t5, 0x68($sp)
/* 0040B124 8FA40050 */  lw    $a0, 0x50($sp)
/* 0040B128 11A00003 */  beqz  $t5, .L0040B138
/* 0040B12C 00000000 */   nop   
/* 0040B130 10000211 */  b     .L0040B978
/* 0040B134 00001025 */   move  $v0, $zero
.L0040B138:
/* 0040B138 8F9980A0 */  lw    $t9, %call16(__ll_mul)($gp)
/* 0040B13C 8FA50054 */  lw    $a1, 0x54($sp)
/* 0040B140 8FA60058 */  lw    $a2, 0x58($sp)
/* 0040B144 0320F809 */  jalr  $t9
/* 0040B148 8FA7005C */   lw    $a3, 0x5c($sp)
/* 0040B14C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0040B150 AFA20040 */  sw    $v0, 0x40($sp)
/* 0040B154 10000202 */  b     .L0040B960
/* 0040B158 AFA30044 */   sw    $v1, 0x44($sp)
.L0040B15C:
/* 0040B15C 8FAC0058 */  lw    $t4, 0x58($sp)
/* 0040B160 8FAD005C */  lw    $t5, 0x5c($sp)
/* 0040B164 8FA80060 */  lw    $t0, 0x60($sp)
/* 0040B168 1580000A */  bnez  $t4, .L0040B194
/* 0040B16C 00000000 */   nop   
/* 0040B170 15A00008 */  bnez  $t5, .L0040B194
/* 0040B174 00000000 */   nop   
/* 0040B178 8F998174 */  lw    $t9, %call16(warning)($gp)
/* 0040B17C 8F848038 */  lw    $a0, %got(RO_100081FC)($gp)
/* 0040B180 0320F809 */  jalr  $t9
/* 0040B184 248481FC */   addiu $a0, %lo(RO_100081FC) # addiu $a0, $a0, -0x7e04
/* 0040B188 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0040B18C 100001FA */  b     .L0040B978
/* 0040B190 00001025 */   move  $v0, $zero
.L0040B194:
/* 0040B194 1100001D */  beqz  $t0, .L0040B20C
/* 0040B198 8FA40050 */   lw    $a0, 0x50($sp)
/* 0040B19C 8FA90068 */  lw    $t1, 0x68($sp)
/* 0040B1A0 8FAE0050 */  lw    $t6, 0x50($sp)
/* 0040B1A4 2401FFFF */  li    $at, -1
/* 0040B1A8 1120000F */  beqz  $t1, .L0040B1E8
/* 0040B1AC 8FA40050 */   lw    $a0, 0x50($sp)
/* 0040B1B0 15C1000D */  bne   $t6, $at, .L0040B1E8
/* 0040B1B4 8FAF0054 */   lw    $t7, 0x54($sp)
/* 0040B1B8 3C018000 */  lui   $at, 0x8000
/* 0040B1BC 15E1000A */  bne   $t7, $at, .L0040B1E8
/* 0040B1C0 27A30058 */   addiu $v1, $sp, 0x58
/* 0040B1C4 8C780000 */  lw    $t8, ($v1)
/* 0040B1C8 2402FFFF */  li    $v0, -1
/* 0040B1CC 14580006 */  bne   $v0, $t8, .L0040B1E8
/* 0040B1D0 00000000 */   nop   
/* 0040B1D4 8C790004 */  lw    $t9, 4($v1)
/* 0040B1D8 14590003 */  bne   $v0, $t9, .L0040B1E8
/* 0040B1DC 00000000 */   nop   
/* 0040B1E0 100001E5 */  b     .L0040B978
/* 0040B1E4 00001025 */   move  $v0, $zero
.L0040B1E8:
/* 0040B1E8 8F9980A4 */  lw    $t9, %call16(__ll_div)($gp)
/* 0040B1EC 8FA50054 */  lw    $a1, 0x54($sp)
/* 0040B1F0 8FA60058 */  lw    $a2, 0x58($sp)
/* 0040B1F4 0320F809 */  jalr  $t9
/* 0040B1F8 8FA7005C */   lw    $a3, 0x5c($sp)
/* 0040B1FC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0040B200 AFA20040 */  sw    $v0, 0x40($sp)
/* 0040B204 100001D6 */  b     .L0040B960
/* 0040B208 AFA30044 */   sw    $v1, 0x44($sp)
.L0040B20C:
/* 0040B20C 8F9980A8 */  lw    $t9, %call16(__ull_div)($gp)
/* 0040B210 8FA50054 */  lw    $a1, 0x54($sp)
/* 0040B214 8FA60028 */  lw    $a2, 0x28($sp)
/* 0040B218 0320F809 */  jalr  $t9
/* 0040B21C 8FA7002C */   lw    $a3, 0x2c($sp)
/* 0040B220 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0040B224 AFA20040 */  sw    $v0, 0x40($sp)
/* 0040B228 100001CD */  b     .L0040B960
/* 0040B22C AFA30044 */   sw    $v1, 0x44($sp)
.L0040B230:
/* 0040B230 8FAA0058 */  lw    $t2, 0x58($sp)
/* 0040B234 8FAB005C */  lw    $t3, 0x5c($sp)
/* 0040B238 8FA80060 */  lw    $t0, 0x60($sp)
/* 0040B23C 1540000A */  bnez  $t2, .L0040B268
/* 0040B240 00000000 */   nop   
/* 0040B244 15600008 */  bnez  $t3, .L0040B268
/* 0040B248 00000000 */   nop   
/* 0040B24C 8F998174 */  lw    $t9, %call16(warning)($gp)
/* 0040B250 8F848038 */  lw    $a0, %got(RO_1000820C)($gp)
/* 0040B254 0320F809 */  jalr  $t9
/* 0040B258 2484820C */   addiu $a0, %lo(RO_1000820C) # addiu $a0, $a0, -0x7df4
/* 0040B25C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0040B260 100001C5 */  b     .L0040B978
/* 0040B264 00001025 */   move  $v0, $zero
.L0040B268:
/* 0040B268 1100000B */  beqz  $t0, .L0040B298
/* 0040B26C 8FA40050 */   lw    $a0, 0x50($sp)
/* 0040B270 8F9980AC */  lw    $t9, %call16(__ll_rem)($gp)
/* 0040B274 8FA40050 */  lw    $a0, 0x50($sp)
/* 0040B278 8FA50054 */  lw    $a1, 0x54($sp)
/* 0040B27C 8FA60058 */  lw    $a2, 0x58($sp)
/* 0040B280 0320F809 */  jalr  $t9
/* 0040B284 8FA7005C */   lw    $a3, 0x5c($sp)
/* 0040B288 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0040B28C AFA20040 */  sw    $v0, 0x40($sp)
/* 0040B290 100001B3 */  b     .L0040B960
/* 0040B294 AFA30044 */   sw    $v1, 0x44($sp)
.L0040B298:
/* 0040B298 8F9980B0 */  lw    $t9, %call16(__ull_rem)($gp)
/* 0040B29C 8FA50054 */  lw    $a1, 0x54($sp)
/* 0040B2A0 8FA60028 */  lw    $a2, 0x28($sp)
/* 0040B2A4 0320F809 */  jalr  $t9
/* 0040B2A8 8FA7002C */   lw    $a3, 0x2c($sp)
/* 0040B2AC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0040B2B0 AFA20040 */  sw    $v0, 0x40($sp)
/* 0040B2B4 100001AA */  b     .L0040B960
/* 0040B2B8 AFA30044 */   sw    $v1, 0x44($sp)
.L0040B2BC:
/* 0040B2BC 8FAC0050 */  lw    $t4, 0x50($sp)
/* 0040B2C0 8FAD0054 */  lw    $t5, 0x54($sp)
/* 0040B2C4 8FAE0058 */  lw    $t6, 0x58($sp)
/* 0040B2C8 8FAF005C */  lw    $t7, 0x5c($sp)
/* 0040B2CC 018EC024 */  and   $t8, $t4, $t6
/* 0040B2D0 01AFC824 */  and   $t9, $t5, $t7
/* 0040B2D4 AFB90044 */  sw    $t9, 0x44($sp)
/* 0040B2D8 100001A1 */  b     .L0040B960
/* 0040B2DC AFB80040 */   sw    $t8, 0x40($sp)
.L0040B2E0:
/* 0040B2E0 8FAA0050 */  lw    $t2, 0x50($sp)
/* 0040B2E4 8FAB0054 */  lw    $t3, 0x54($sp)
/* 0040B2E8 8FAC0058 */  lw    $t4, 0x58($sp)
/* 0040B2EC 8FAD005C */  lw    $t5, 0x5c($sp)
/* 0040B2F0 014C7025 */  or    $t6, $t2, $t4
/* 0040B2F4 016D7825 */  or    $t7, $t3, $t5
/* 0040B2F8 AFAF0044 */  sw    $t7, 0x44($sp)
/* 0040B2FC 10000198 */  b     .L0040B960
/* 0040B300 AFAE0040 */   sw    $t6, 0x40($sp)
.L0040B304:
/* 0040B304 8FB80050 */  lw    $t8, 0x50($sp)
/* 0040B308 8FB90054 */  lw    $t9, 0x54($sp)
/* 0040B30C 8FAA0058 */  lw    $t2, 0x58($sp)
/* 0040B310 8FAB005C */  lw    $t3, 0x5c($sp)
/* 0040B314 030A6026 */  xor   $t4, $t8, $t2
/* 0040B318 032B6826 */  xor   $t5, $t9, $t3
/* 0040B31C AFAD0044 */  sw    $t5, 0x44($sp)
/* 0040B320 1000018F */  b     .L0040B960
/* 0040B324 AFAC0040 */   sw    $t4, 0x40($sp)
.L0040B328:
/* 0040B328 8FA90064 */  lw    $t1, 0x64($sp)
/* 0040B32C 8FAF0054 */  lw    $t7, 0x54($sp)
/* 0040B330 8FB9005C */  lw    $t9, 0x5c($sp)
/* 0040B334 11200006 */  beqz  $t1, .L0040B350
/* 0040B338 8FA40050 */   lw    $a0, 0x50($sp)
/* 0040B33C 032F6004 */  sllv  $t4, $t7, $t9
/* 0040B340 000C77C3 */  sra   $t6, $t4, 0x1f
/* 0040B344 AFAE0040 */  sw    $t6, 0x40($sp)
/* 0040B348 10000185 */  b     .L0040B960
/* 0040B34C AFAC0044 */   sw    $t4, 0x44($sp)
.L0040B350:
/* 0040B350 8F99809C */  lw    $t9, %call16(__ll_lshift)($gp)
/* 0040B354 8FA50054 */  lw    $a1, 0x54($sp)
/* 0040B358 8FA60058 */  lw    $a2, 0x58($sp)
/* 0040B35C 0320F809 */  jalr  $t9
/* 0040B360 8FA7005C */   lw    $a3, 0x5c($sp)
/* 0040B364 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0040B368 AFA20040 */  sw    $v0, 0x40($sp)
/* 0040B36C 1000017C */  b     .L0040B960
/* 0040B370 AFA30044 */   sw    $v1, 0x44($sp)
.L0040B374:
/* 0040B374 8FAD0064 */  lw    $t5, 0x64($sp)
/* 0040B378 8FA80060 */  lw    $t0, 0x60($sp)
/* 0040B37C 11A00011 */  beqz  $t5, .L0040B3C4
/* 0040B380 00000000 */   nop   
/* 0040B384 8FA80060 */  lw    $t0, 0x60($sp)
/* 0040B388 8FB90054 */  lw    $t9, 0x54($sp)
/* 0040B38C 8FAD005C */  lw    $t5, 0x5c($sp)
/* 0040B390 11000008 */  beqz  $t0, .L0040B3B4
/* 0040B394 240A0000 */   li    $t2, 0
/* 0040B398 8FAB0054 */  lw    $t3, 0x54($sp)
/* 0040B39C 8FB9005C */  lw    $t9, 0x5c($sp)
/* 0040B3A0 032B7007 */  srav  $t6, $t3, $t9
/* 0040B3A4 000E57C3 */  sra   $t2, $t6, 0x1f
/* 0040B3A8 AFAA0040 */  sw    $t2, 0x40($sp)
/* 0040B3AC 1000016C */  b     .L0040B960
/* 0040B3B0 AFAE0044 */   sw    $t6, 0x44($sp)
.L0040B3B4:
/* 0040B3B4 01B97006 */  srlv  $t6, $t9, $t5
/* 0040B3B8 AFAE0044 */  sw    $t6, 0x44($sp)
/* 0040B3BC 10000168 */  b     .L0040B960
/* 0040B3C0 AFAA0040 */   sw    $t2, 0x40($sp)
.L0040B3C4:
/* 0040B3C4 1100000B */  beqz  $t0, .L0040B3F4
/* 0040B3C8 8FA40050 */   lw    $a0, 0x50($sp)
/* 0040B3CC 8F9980B4 */  lw    $t9, %call16(__ll_rshift)($gp)
/* 0040B3D0 8FA40050 */  lw    $a0, 0x50($sp)
/* 0040B3D4 8FA50054 */  lw    $a1, 0x54($sp)
/* 0040B3D8 8FA60058 */  lw    $a2, 0x58($sp)
/* 0040B3DC 0320F809 */  jalr  $t9
/* 0040B3E0 8FA7005C */   lw    $a3, 0x5c($sp)
/* 0040B3E4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0040B3E8 AFA20040 */  sw    $v0, 0x40($sp)
/* 0040B3EC 1000015C */  b     .L0040B960
/* 0040B3F0 AFA30044 */   sw    $v1, 0x44($sp)
.L0040B3F4:
/* 0040B3F4 8F9980B8 */  lw    $t9, %call16(__ull_rshift)($gp)
/* 0040B3F8 8FA50054 */  lw    $a1, 0x54($sp)
/* 0040B3FC 8FA60028 */  lw    $a2, 0x28($sp)
/* 0040B400 0320F809 */  jalr  $t9
/* 0040B404 8FA7002C */   lw    $a3, 0x2c($sp)
/* 0040B408 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0040B40C AFA20040 */  sw    $v0, 0x40($sp)
/* 0040B410 10000153 */  b     .L0040B960
/* 0040B414 AFA30044 */   sw    $v1, 0x44($sp)
.L0040B418:
/* 0040B418 8FB80050 */  lw    $t8, 0x50($sp)
/* 0040B41C 8FB90054 */  lw    $t9, 0x54($sp)
/* 0040B420 03006027 */  not   $t4, $t8
/* 0040B424 03206827 */  not   $t5, $t9
/* 0040B428 AFAD0044 */  sw    $t5, 0x44($sp)
/* 0040B42C 1000014C */  b     .L0040B960
/* 0040B430 AFAC0040 */   sw    $t4, 0x40($sp)
.L0040B434:
/* 0040B434 8FAE0050 */  lw    $t6, 0x50($sp)
/* 0040B438 8FAF0054 */  lw    $t7, 0x54($sp)
/* 0040B43C 240A0000 */  li    $t2, 0
/* 0040B440 24010000 */  li    $at, 0
/* 0040B444 002E0826 */  xor   $at, $at, $t6
/* 0040B448 014F5026 */  xor   $t2, $t2, $t7
/* 0040B44C 01415025 */  or    $t2, $t2, $at
/* 0040B450 2D590001 */  sltiu $t9, $t2, 1
/* 0040B454 0019C7C3 */  sra   $t8, $t9, 0x1f
/* 0040B458 AFB80040 */  sw    $t8, 0x40($sp)
/* 0040B45C 10000140 */  b     .L0040B960
/* 0040B460 AFB90044 */   sw    $t9, 0x44($sp)
.L0040B464:
/* 0040B464 8FA90068 */  lw    $t1, 0x68($sp)
/* 0040B468 8FA60050 */  lw    $a2, 0x50($sp)
/* 0040B46C 11200003 */  beqz  $t1, .L0040B47C
/* 0040B470 00000000 */   nop   
/* 0040B474 10000140 */  b     .L0040B978
/* 0040B478 00001025 */   move  $v0, $zero
.L0040B47C:
/* 0040B47C 8F9980A0 */  lw    $t9, %call16(__ll_mul)($gp)
/* 0040B480 8FA70054 */  lw    $a3, 0x54($sp)
/* 0040B484 00C02025 */  move  $a0, $a2
/* 0040B488 0320F809 */  jalr  $t9
/* 0040B48C 00E02825 */   move  $a1, $a3
/* 0040B490 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0040B494 AFA20040 */  sw    $v0, 0x40($sp)
/* 0040B498 10000131 */  b     .L0040B960
/* 0040B49C AFA30044 */   sw    $v1, 0x44($sp)
.L0040B4A0:
/* 0040B4A0 8FAE0068 */  lw    $t6, 0x68($sp)
/* 0040B4A4 8FA80060 */  lw    $t0, 0x60($sp)
/* 0040B4A8 8FB80050 */  lw    $t8, 0x50($sp)
/* 0040B4AC 51C0000C */  beql  $t6, $zero, .L0040B4E0
/* 0040B4B0 8FB90054 */   lw    $t9, 0x54($sp)
/* 0040B4B4 11000009 */  beqz  $t0, .L0040B4DC
/* 0040B4B8 8FAA0050 */   lw    $t2, 0x50($sp)
/* 0040B4BC 2401FFFF */  li    $at, -1
/* 0040B4C0 15410006 */  bne   $t2, $at, .L0040B4DC
/* 0040B4C4 8FAB0054 */   lw    $t3, 0x54($sp)
/* 0040B4C8 3C018000 */  lui   $at, 0x8000
/* 0040B4CC 55610004 */  bnel  $t3, $at, .L0040B4E0
/* 0040B4D0 8FB90054 */   lw    $t9, 0x54($sp)
/* 0040B4D4 10000128 */  b     .L0040B978
/* 0040B4D8 00001025 */   move  $v0, $zero
.L0040B4DC:
/* 0040B4DC 8FB90054 */  lw    $t9, 0x54($sp)
.L0040B4E0:
/* 0040B4E0 03006027 */  not   $t4, $t8
/* 0040B4E4 2F210001 */  sltiu $at, $t9, 1
/* 0040B4E8 01816021 */  addu  $t4, $t4, $at
/* 0040B4EC 00196823 */  negu  $t5, $t9
/* 0040B4F0 AFAD0044 */  sw    $t5, 0x44($sp)
/* 0040B4F4 1000011A */  b     .L0040B960
/* 0040B4F8 AFAC0040 */   sw    $t4, 0x40($sp)
.L0040B4FC:
/* 0040B4FC 8FA80060 */  lw    $t0, 0x60($sp)
/* 0040B500 8FAE0050 */  lw    $t6, 0x50($sp)
/* 0040B504 2401FFFF */  li    $at, -1
/* 0040B508 1100000E */  beqz  $t0, .L0040B544
/* 0040B50C 00000000 */   nop   
/* 0040B510 15C1000C */  bne   $t6, $at, .L0040B544
/* 0040B514 8FAF0054 */   lw    $t7, 0x54($sp)
/* 0040B518 3C018000 */  lui   $at, 0x8000
/* 0040B51C 15E10009 */  bne   $t7, $at, .L0040B544
/* 0040B520 8FA90068 */   lw    $t1, 0x68($sp)
/* 0040B524 11200003 */  beqz  $t1, .L0040B534
/* 0040B528 8FAA0050 */   lw    $t2, 0x50($sp)
/* 0040B52C 10000112 */  b     .L0040B978
/* 0040B530 00001025 */   move  $v0, $zero
.L0040B534:
/* 0040B534 8FAB0054 */  lw    $t3, 0x54($sp)
/* 0040B538 AFAA0040 */  sw    $t2, 0x40($sp)
/* 0040B53C 10000108 */  b     .L0040B960
/* 0040B540 AFAB0044 */   sw    $t3, 0x44($sp)
.L0040B544:
/* 0040B544 1100000D */  beqz  $t0, .L0040B57C
/* 0040B548 8FB80050 */   lw    $t8, 0x50($sp)
/* 0040B54C 1F00000B */  bgtz  $t8, .L0040B57C
/* 0040B550 8FB90054 */   lw    $t9, 0x54($sp)
/* 0040B554 07000003 */  bltz  $t8, .L0040B564
/* 0040B558 2F210001 */   sltiu $at, $t9, 1
/* 0040B55C 10000008 */  b     .L0040B580
/* 0040B560 8FAE0050 */   lw    $t6, 0x50($sp)
.L0040B564:
/* 0040B564 03006027 */  not   $t4, $t8
/* 0040B568 01816021 */  addu  $t4, $t4, $at
/* 0040B56C 00196823 */  negu  $t5, $t9
/* 0040B570 AFAD0044 */  sw    $t5, 0x44($sp)
/* 0040B574 100000FA */  b     .L0040B960
/* 0040B578 AFAC0040 */   sw    $t4, 0x40($sp)
.L0040B57C:
/* 0040B57C 8FAE0050 */  lw    $t6, 0x50($sp)
.L0040B580:
/* 0040B580 8FAF0054 */  lw    $t7, 0x54($sp)
/* 0040B584 AFAE0040 */  sw    $t6, 0x40($sp)
/* 0040B588 100000F5 */  b     .L0040B960
/* 0040B58C AFAF0044 */   sw    $t7, 0x44($sp)
.L0040B590:
/* 0040B590 8F9980AC */  lw    $t9, %call16(__ll_rem)($gp)
/* 0040B594 8FA40050 */  lw    $a0, 0x50($sp)
/* 0040B598 8FA50054 */  lw    $a1, 0x54($sp)
/* 0040B59C 24060000 */  li    $a2, 0
/* 0040B5A0 0320F809 */  jalr  $t9
/* 0040B5A4 24070002 */   li    $a3, 2
/* 0040B5A8 14400007 */  bnez  $v0, .L0040B5C8
/* 0040B5AC 8FBC0020 */   lw    $gp, 0x20($sp)
/* 0040B5B0 14600005 */  bnez  $v1, .L0040B5C8
/* 0040B5B4 240A0000 */   li    $t2, 0
/* 0040B5B8 240B0000 */  li    $t3, 0
/* 0040B5BC AFAB0044 */  sw    $t3, 0x44($sp)
/* 0040B5C0 100000E7 */  b     .L0040B960
/* 0040B5C4 AFAA0040 */   sw    $t2, 0x40($sp)
.L0040B5C8:
/* 0040B5C8 24180000 */  li    $t8, 0
/* 0040B5CC 24190001 */  li    $t9, 1
/* 0040B5D0 AFB90044 */  sw    $t9, 0x44($sp)
/* 0040B5D4 100000E2 */  b     .L0040B960
/* 0040B5D8 AFB80040 */   sw    $t8, 0x40($sp)
.L0040B5DC:
/* 0040B5DC 8FA80060 */  lw    $t0, 0x60($sp)
/* 0040B5E0 8FAC0050 */  lw    $t4, 0x50($sp)
/* 0040B5E4 8FAE0058 */  lw    $t6, 0x58($sp)
/* 0040B5E8 1100000E */  beqz  $t0, .L0040B624
/* 0040B5EC 8FAF005C */   lw    $t7, 0x5c($sp)
/* 0040B5F0 8FAC0050 */  lw    $t4, 0x50($sp)
/* 0040B5F4 8FAE0058 */  lw    $t6, 0x58($sp)
/* 0040B5F8 8FAD0054 */  lw    $t5, 0x54($sp)
/* 0040B5FC 8FAF005C */  lw    $t7, 0x5c($sp)
/* 0040B600 158E0003 */  bne   $t4, $t6, .L0040B610
/* 0040B604 01CC502A */   slt   $t2, $t6, $t4
/* 0040B608 01AF502B */  sltu  $t2, $t5, $t7
/* 0040B60C 394A0001 */  xori  $t2, $t2, 1
.L0040B610:
/* 0040B610 000AC7C3 */  sra   $t8, $t2, 0x1f
/* 0040B614 AFB80040 */  sw    $t8, 0x40($sp)
/* 0040B618 0140C825 */  move  $t9, $t2
/* 0040B61C 100000D0 */  b     .L0040B960
/* 0040B620 AFAA0044 */   sw    $t2, 0x44($sp)
.L0040B624:
/* 0040B624 8FAD0054 */  lw    $t5, 0x54($sp)
/* 0040B628 158E0003 */  bne   $t4, $t6, .L0040B638
/* 0040B62C 01CC502B */   sltu  $t2, $t6, $t4
/* 0040B630 01AF502B */  sltu  $t2, $t5, $t7
/* 0040B634 394A0001 */  xori  $t2, $t2, 1
.L0040B638:
/* 0040B638 000AC7C3 */  sra   $t8, $t2, 0x1f
/* 0040B63C AFB80040 */  sw    $t8, 0x40($sp)
/* 0040B640 0140C825 */  move  $t9, $t2
/* 0040B644 100000C6 */  b     .L0040B960
/* 0040B648 AFAA0044 */   sw    $t2, 0x44($sp)
.L0040B64C:
/* 0040B64C 8FA80060 */  lw    $t0, 0x60($sp)
/* 0040B650 8FAC0058 */  lw    $t4, 0x58($sp)
/* 0040B654 8FAE0050 */  lw    $t6, 0x50($sp)
/* 0040B658 1100000D */  beqz  $t0, .L0040B690
/* 0040B65C 8FAF0054 */   lw    $t7, 0x54($sp)
/* 0040B660 8FAC0058 */  lw    $t4, 0x58($sp)
/* 0040B664 8FAE0050 */  lw    $t6, 0x50($sp)
/* 0040B668 8FAD005C */  lw    $t5, 0x5c($sp)
/* 0040B66C 8FAF0054 */  lw    $t7, 0x54($sp)
/* 0040B670 158E0002 */  bne   $t4, $t6, .L0040B67C
/* 0040B674 018E502A */   slt   $t2, $t4, $t6
/* 0040B678 01AF502B */  sltu  $t2, $t5, $t7
.L0040B67C:
/* 0040B67C 000AC7C3 */  sra   $t8, $t2, 0x1f
/* 0040B680 AFB80040 */  sw    $t8, 0x40($sp)
/* 0040B684 0140C825 */  move  $t9, $t2
/* 0040B688 100000B5 */  b     .L0040B960
/* 0040B68C AFAA0044 */   sw    $t2, 0x44($sp)
.L0040B690:
/* 0040B690 8FAD005C */  lw    $t5, 0x5c($sp)
/* 0040B694 158E0002 */  bne   $t4, $t6, .L0040B6A0
/* 0040B698 018E502B */   sltu  $t2, $t4, $t6
/* 0040B69C 01AF502B */  sltu  $t2, $t5, $t7
.L0040B6A0:
/* 0040B6A0 000AC7C3 */  sra   $t8, $t2, 0x1f
/* 0040B6A4 AFB80040 */  sw    $t8, 0x40($sp)
/* 0040B6A8 0140C825 */  move  $t9, $t2
/* 0040B6AC 100000AC */  b     .L0040B960
/* 0040B6B0 AFAA0044 */   sw    $t2, 0x44($sp)
.L0040B6B4:
/* 0040B6B4 8FA80060 */  lw    $t0, 0x60($sp)
/* 0040B6B8 8FAC0058 */  lw    $t4, 0x58($sp)
/* 0040B6BC 8FAE0050 */  lw    $t6, 0x50($sp)
/* 0040B6C0 1100000E */  beqz  $t0, .L0040B6FC
/* 0040B6C4 8FAF0054 */   lw    $t7, 0x54($sp)
/* 0040B6C8 8FAC0058 */  lw    $t4, 0x58($sp)
/* 0040B6CC 8FAE0050 */  lw    $t6, 0x50($sp)
/* 0040B6D0 8FAD005C */  lw    $t5, 0x5c($sp)
/* 0040B6D4 8FAF0054 */  lw    $t7, 0x54($sp)
/* 0040B6D8 158E0003 */  bne   $t4, $t6, .L0040B6E8
/* 0040B6DC 01CC502A */   slt   $t2, $t6, $t4
/* 0040B6E0 01AF502B */  sltu  $t2, $t5, $t7
/* 0040B6E4 394A0001 */  xori  $t2, $t2, 1
.L0040B6E8:
/* 0040B6E8 000AC7C3 */  sra   $t8, $t2, 0x1f
/* 0040B6EC AFB80040 */  sw    $t8, 0x40($sp)
/* 0040B6F0 0140C825 */  move  $t9, $t2
/* 0040B6F4 1000009A */  b     .L0040B960
/* 0040B6F8 AFAA0044 */   sw    $t2, 0x44($sp)
.L0040B6FC:
/* 0040B6FC 8FAD005C */  lw    $t5, 0x5c($sp)
/* 0040B700 158E0003 */  bne   $t4, $t6, .L0040B710
/* 0040B704 01CC502B */   sltu  $t2, $t6, $t4
/* 0040B708 01AF502B */  sltu  $t2, $t5, $t7
/* 0040B70C 394A0001 */  xori  $t2, $t2, 1
.L0040B710:
/* 0040B710 000AC7C3 */  sra   $t8, $t2, 0x1f
/* 0040B714 AFB80040 */  sw    $t8, 0x40($sp)
/* 0040B718 0140C825 */  move  $t9, $t2
/* 0040B71C 10000090 */  b     .L0040B960
/* 0040B720 AFAA0044 */   sw    $t2, 0x44($sp)
.L0040B724:
/* 0040B724 8FA80060 */  lw    $t0, 0x60($sp)
/* 0040B728 8FAC0050 */  lw    $t4, 0x50($sp)
/* 0040B72C 8FAE0058 */  lw    $t6, 0x58($sp)
/* 0040B730 1100000D */  beqz  $t0, .L0040B768
/* 0040B734 8FAF005C */   lw    $t7, 0x5c($sp)
/* 0040B738 8FAC0050 */  lw    $t4, 0x50($sp)
/* 0040B73C 8FAE0058 */  lw    $t6, 0x58($sp)
/* 0040B740 8FAD0054 */  lw    $t5, 0x54($sp)
/* 0040B744 8FAF005C */  lw    $t7, 0x5c($sp)
/* 0040B748 158E0002 */  bne   $t4, $t6, .L0040B754
/* 0040B74C 018E502A */   slt   $t2, $t4, $t6
/* 0040B750 01AF502B */  sltu  $t2, $t5, $t7
.L0040B754:
/* 0040B754 000AC7C3 */  sra   $t8, $t2, 0x1f
/* 0040B758 AFB80040 */  sw    $t8, 0x40($sp)
/* 0040B75C 0140C825 */  move  $t9, $t2
/* 0040B760 1000007F */  b     .L0040B960
/* 0040B764 AFAA0044 */   sw    $t2, 0x44($sp)
.L0040B768:
/* 0040B768 8FAD0054 */  lw    $t5, 0x54($sp)
/* 0040B76C 158E0002 */  bne   $t4, $t6, .L0040B778
/* 0040B770 018E502B */   sltu  $t2, $t4, $t6
/* 0040B774 01AF502B */  sltu  $t2, $t5, $t7
.L0040B778:
/* 0040B778 000AC7C3 */  sra   $t8, $t2, 0x1f
/* 0040B77C AFB80040 */  sw    $t8, 0x40($sp)
/* 0040B780 0140C825 */  move  $t9, $t2
/* 0040B784 10000076 */  b     .L0040B960
/* 0040B788 AFAA0044 */   sw    $t2, 0x44($sp)
.L0040B78C:
/* 0040B78C 8FAC0050 */  lw    $t4, 0x50($sp)
/* 0040B790 8FAD0054 */  lw    $t5, 0x54($sp)
/* 0040B794 8FAE0058 */  lw    $t6, 0x58($sp)
/* 0040B798 8FAF005C */  lw    $t7, 0x5c($sp)
/* 0040B79C 018E0826 */  xor   $at, $t4, $t6
/* 0040B7A0 01AF5026 */  xor   $t2, $t5, $t7
/* 0040B7A4 01415025 */  or    $t2, $t2, $at
/* 0040B7A8 2D590001 */  sltiu $t9, $t2, 1
/* 0040B7AC 0019C7C3 */  sra   $t8, $t9, 0x1f
/* 0040B7B0 AFB80040 */  sw    $t8, 0x40($sp)
/* 0040B7B4 1000006A */  b     .L0040B960
/* 0040B7B8 AFB90044 */   sw    $t9, 0x44($sp)
.L0040B7BC:
/* 0040B7BC 8FAC0050 */  lw    $t4, 0x50($sp)
/* 0040B7C0 8FAD0054 */  lw    $t5, 0x54($sp)
/* 0040B7C4 8FAE0058 */  lw    $t6, 0x58($sp)
/* 0040B7C8 8FAF005C */  lw    $t7, 0x5c($sp)
/* 0040B7CC 018E0826 */  xor   $at, $t4, $t6
/* 0040B7D0 01AF5026 */  xor   $t2, $t5, $t7
/* 0040B7D4 01415025 */  or    $t2, $t2, $at
/* 0040B7D8 000AC82B */  sltu  $t9, $zero, $t2
/* 0040B7DC 0019C7C3 */  sra   $t8, $t9, 0x1f
/* 0040B7E0 AFB80040 */  sw    $t8, 0x40($sp)
/* 0040B7E4 1000005E */  b     .L0040B960
/* 0040B7E8 AFB90044 */   sw    $t9, 0x44($sp)
.L0040B7EC:
/* 0040B7EC 8FA80060 */  lw    $t0, 0x60($sp)
/* 0040B7F0 8FAA0058 */  lw    $t2, 0x58($sp)
/* 0040B7F4 8FB80050 */  lw    $t8, 0x50($sp)
/* 0040B7F8 11000015 */  beqz  $t0, .L0040B850
/* 0040B7FC 8FB90054 */   lw    $t9, 0x54($sp)
/* 0040B800 8FAC0058 */  lw    $t4, 0x58($sp)
/* 0040B804 8FAE0050 */  lw    $t6, 0x50($sp)
/* 0040B808 8FAD005C */  lw    $t5, 0x5c($sp)
/* 0040B80C 8FAF0054 */  lw    $t7, 0x54($sp)
/* 0040B810 158E0003 */  bne   $t4, $t6, .L0040B820
/* 0040B814 01CC502A */   slt   $t2, $t6, $t4
/* 0040B818 01AF502B */  sltu  $t2, $t5, $t7
/* 0040B81C 394A0001 */  xori  $t2, $t2, 1
.L0040B820:
/* 0040B820 000AC7C3 */  sra   $t8, $t2, 0x1f
/* 0040B824 17000003 */  bnez  $t8, .L0040B834
/* 0040B828 0140C825 */   move  $t9, $t2
/* 0040B82C 11400004 */  beqz  $t2, .L0040B840
/* 0040B830 8FAC0058 */   lw    $t4, 0x58($sp)
.L0040B834:
/* 0040B834 AFAE0040 */  sw    $t6, 0x40($sp)
/* 0040B838 10000049 */  b     .L0040B960
/* 0040B83C AFAF0044 */   sw    $t7, 0x44($sp)
.L0040B840:
/* 0040B840 8FAD005C */  lw    $t5, 0x5c($sp)
/* 0040B844 AFAC0040 */  sw    $t4, 0x40($sp)
/* 0040B848 10000045 */  b     .L0040B960
/* 0040B84C AFAD0044 */   sw    $t5, 0x44($sp)
.L0040B850:
/* 0040B850 0158082B */  sltu  $at, $t2, $t8
/* 0040B854 1420000B */  bnez  $at, .L0040B884
/* 0040B858 8FAB005C */   lw    $t3, 0x5c($sp)
/* 0040B85C 030A082B */  sltu  $at, $t8, $t2
/* 0040B860 14200004 */  bnez  $at, .L0040B874
/* 0040B864 8FAE0050 */   lw    $t6, 0x50($sp)
/* 0040B868 0179082B */  sltu  $at, $t3, $t9
/* 0040B86C 54200006 */  bnel  $at, $zero, .L0040B888
/* 0040B870 8FAC0058 */   lw    $t4, 0x58($sp)
.L0040B874:
/* 0040B874 8FAF0054 */  lw    $t7, 0x54($sp)
/* 0040B878 AFAE0040 */  sw    $t6, 0x40($sp)
/* 0040B87C 10000038 */  b     .L0040B960
/* 0040B880 AFAF0044 */   sw    $t7, 0x44($sp)
.L0040B884:
/* 0040B884 8FAC0058 */  lw    $t4, 0x58($sp)
.L0040B888:
/* 0040B888 8FAD005C */  lw    $t5, 0x5c($sp)
/* 0040B88C AFAC0040 */  sw    $t4, 0x40($sp)
/* 0040B890 10000033 */  b     .L0040B960
/* 0040B894 AFAD0044 */   sw    $t5, 0x44($sp)
.L0040B898:
/* 0040B898 8FA80060 */  lw    $t0, 0x60($sp)
/* 0040B89C 8FAE0050 */  lw    $t6, 0x50($sp)
/* 0040B8A0 8FAC0058 */  lw    $t4, 0x58($sp)
/* 0040B8A4 11000015 */  beqz  $t0, .L0040B8FC
/* 0040B8A8 8FAD005C */   lw    $t5, 0x5c($sp)
/* 0040B8AC 8FAA0050 */  lw    $t2, 0x50($sp)
/* 0040B8B0 8FB80058 */  lw    $t8, 0x58($sp)
/* 0040B8B4 8FAB0054 */  lw    $t3, 0x54($sp)
/* 0040B8B8 8FB9005C */  lw    $t9, 0x5c($sp)
/* 0040B8BC 15580003 */  bne   $t2, $t8, .L0040B8CC
/* 0040B8C0 030A702A */   slt   $t6, $t8, $t2
/* 0040B8C4 0179702B */  sltu  $t6, $t3, $t9
/* 0040B8C8 39CE0001 */  xori  $t6, $t6, 1
.L0040B8CC:
/* 0040B8CC 000E67C3 */  sra   $t4, $t6, 0x1f
/* 0040B8D0 55800004 */  bnel  $t4, $zero, .L0040B8E4
/* 0040B8D4 AFAA0040 */   sw    $t2, 0x40($sp)
/* 0040B8D8 11C00004 */  beqz  $t6, .L0040B8EC
/* 0040B8DC 8FB80058 */   lw    $t8, 0x58($sp)
/* 0040B8E0 AFAA0040 */  sw    $t2, 0x40($sp)
.L0040B8E4:
/* 0040B8E4 1000001E */  b     .L0040B960
/* 0040B8E8 AFAB0044 */   sw    $t3, 0x44($sp)
.L0040B8EC:
/* 0040B8EC 8FB9005C */  lw    $t9, 0x5c($sp)
/* 0040B8F0 AFB80040 */  sw    $t8, 0x40($sp)
/* 0040B8F4 1000001A */  b     .L0040B960
/* 0040B8F8 AFB90044 */   sw    $t9, 0x44($sp)
.L0040B8FC:
/* 0040B8FC 01CC082B */  sltu  $at, $t6, $t4
/* 0040B900 1420000B */  bnez  $at, .L0040B930
/* 0040B904 8FAF0054 */   lw    $t7, 0x54($sp)
/* 0040B908 018E082B */  sltu  $at, $t4, $t6
/* 0040B90C 14200004 */  bnez  $at, .L0040B920
/* 0040B910 8FAA0050 */   lw    $t2, 0x50($sp)
/* 0040B914 01ED082B */  sltu  $at, $t7, $t5
/* 0040B918 54200006 */  bnel  $at, $zero, .L0040B934
/* 0040B91C 8FB80058 */   lw    $t8, 0x58($sp)
.L0040B920:
/* 0040B920 8FAB0054 */  lw    $t3, 0x54($sp)
/* 0040B924 AFAA0040 */  sw    $t2, 0x40($sp)
/* 0040B928 1000000D */  b     .L0040B960
/* 0040B92C AFAB0044 */   sw    $t3, 0x44($sp)
.L0040B930:
/* 0040B930 8FB80058 */  lw    $t8, 0x58($sp)
.L0040B934:
/* 0040B934 8FB9005C */  lw    $t9, 0x5c($sp)
/* 0040B938 AFB80040 */  sw    $t8, 0x40($sp)
/* 0040B93C 10000008 */  b     .L0040B960
/* 0040B940 AFB90044 */   sw    $t9, 0x44($sp)
.L0040B944:
/* 0040B944 8FAE0050 */  lw    $t6, 0x50($sp)
/* 0040B948 8FAF0054 */  lw    $t7, 0x54($sp)
/* 0040B94C AFAE0040 */  sw    $t6, 0x40($sp)
/* 0040B950 10000003 */  b     .L0040B960
/* 0040B954 AFAF0044 */   sw    $t7, 0x44($sp)
.L0040B958:
/* 0040B958 10000007 */  b     .L0040B978
/* 0040B95C 00001025 */   move  $v0, $zero
.L0040B960:
/* 0040B960 8FA9006C */  lw    $t1, 0x6c($sp)
/* 0040B964 8FAC0040 */  lw    $t4, 0x40($sp)
/* 0040B968 8FAD0044 */  lw    $t5, 0x44($sp)
/* 0040B96C 24020001 */  li    $v0, 1
/* 0040B970 AD2C0000 */  sw    $t4, ($t1)
/* 0040B974 AD2D0004 */  sw    $t5, 4($t1)
.L0040B978:
/* 0040B978 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0040B97C 27BD0048 */  addiu $sp, $sp, 0x48
/* 0040B980 03E00008 */  jr    $ra
/* 0040B984 00000000 */   nop   
    .type fold_constant, @function
    .size fold_constant, .-fold_constant
    .end fold_constant

glabel fold_identities
    .ent fold_identities
    # 00434E4C fold1
/* 0040B988 3C1C0FC1 */  .cpload $t9
/* 0040B98C 279C40C8 */  
/* 0040B990 0399E021 */  
/* 0040B994 2881001E */  slti  $at, $a0, 0x1e
/* 0040B998 AFA60008 */  sw    $a2, 8($sp)
/* 0040B99C 14200013 */  bnez  $at, .L0040B9EC
/* 0040B9A0 AFA7000C */   sw    $a3, 0xc($sp)
/* 0040B9A4 2881003D */  slti  $at, $a0, 0x3d
/* 0040B9A8 1420000B */  bnez  $at, .L0040B9D8
/* 0040B9AC 248EFFA5 */   addiu $t6, $a0, -0x5b
/* 0040B9B0 2DC10033 */  sltiu $at, $t6, 0x33
/* 0040B9B4 1020000B */  beqz  $at, .L0040B9E4
/* 0040B9B8 00000000 */   nop   
/* 0040B9BC 8F818038 */  lw    $at, %got(jtbl_10008454)($gp)
/* 0040B9C0 000E7080 */  sll   $t6, $t6, 2
/* 0040B9C4 002E0821 */  addu  $at, $at, $t6
/* 0040B9C8 8C2E8454 */  lw    $t6, %lo(jtbl_10008454)($at)
/* 0040B9CC 01DC7021 */  addu  $t6, $t6, $gp
/* 0040B9D0 01C00008 */  jr    $t6
/* 0040B9D4 00000000 */   nop   
.L0040B9D8:
/* 0040B9D8 2401003C */  li    $at, 60
/* 0040B9DC 5081000E */  beql  $a0, $at, .L0040BA18
/* 0040B9E0 8FB80008 */   lw    $t8, 8($sp)
.L0040B9E4:
/* 0040B9E4 03E00008 */  jr    $ra
/* 0040B9E8 00001025 */   move  $v0, $zero

.L0040B9EC:
/* 0040B9EC 24010001 */  li    $at, 1
/* 0040B9F0 10810008 */  beq   $a0, $at, .L0040BA14
/* 0040B9F4 24010004 */   li    $at, 4
/* 0040B9F8 10810018 */  beq   $a0, $at, .L0040BA5C
/* 0040B9FC 27A30008 */   addiu $v1, $sp, 8
/* 0040BA00 2401001D */  li    $at, 29
/* 0040BA04 10810027 */  beq   $a0, $at, .L0040BAA4
/* 0040BA08 8FAE0008 */   lw    $t6, 8($sp)
/* 0040BA0C 03E00008 */  jr    $ra
/* 0040BA10 00001025 */   move  $v0, $zero

.L0040BA14:
/* 0040BA14 8FB80008 */  lw    $t8, 8($sp)
.L0040BA18:
/* 0040BA18 8FB9000C */  lw    $t9, 0xc($sp)
/* 0040BA1C 5700002B */  bnel  $t8, $zero, .L0040BACC
/* 0040BA20 00001025 */   move  $v0, $zero
/* 0040BA24 57200029 */  bnel  $t9, $zero, .L0040BACC
/* 0040BA28 00001025 */   move  $v0, $zero
/* 0040BA2C 03E00008 */  jr    $ra
/* 0040BA30 24020001 */   li    $v0, 1

.L0040BA34:
/* 0040BA34 8FA80008 */  lw    $t0, 8($sp)
/* 0040BA38 8FA9000C */  lw    $t1, 0xc($sp)
/* 0040BA3C 55000023 */  bnel  $t0, $zero, .L0040BACC
/* 0040BA40 00001025 */   move  $v0, $zero
/* 0040BA44 15200020 */  bnez  $t1, .L0040BAC8
/* 0040BA48 8FAF0010 */   lw    $t7, 0x10($sp)
/* 0040BA4C 51E0001F */  beql  $t7, $zero, .L0040BACC
/* 0040BA50 00001025 */   move  $v0, $zero
/* 0040BA54 03E00008 */  jr    $ra
/* 0040BA58 24020001 */   li    $v0, 1

.L0040BA5C:
/* 0040BA5C 8C6A0000 */  lw    $t2, ($v1)
/* 0040BA60 2402FFFF */  li    $v0, -1
/* 0040BA64 544A0019 */  bnel  $v0, $t2, .L0040BACC
/* 0040BA68 00001025 */   move  $v0, $zero
/* 0040BA6C 8C6B0004 */  lw    $t3, 4($v1)
/* 0040BA70 544B0016 */  bnel  $v0, $t3, .L0040BACC
/* 0040BA74 00001025 */   move  $v0, $zero
/* 0040BA78 03E00008 */  jr    $ra
/* 0040BA7C 24020001 */   li    $v0, 1

.L0040BA80:
/* 0040BA80 8FAC0008 */  lw    $t4, 8($sp)
/* 0040BA84 8FAD000C */  lw    $t5, 0xc($sp)
/* 0040BA88 24010001 */  li    $at, 1
/* 0040BA8C 5580000F */  bnel  $t4, $zero, .L0040BACC
/* 0040BA90 00001025 */   move  $v0, $zero
/* 0040BA94 55A1000D */  bnel  $t5, $at, .L0040BACC
/* 0040BA98 00001025 */   move  $v0, $zero
/* 0040BA9C 03E00008 */  jr    $ra
/* 0040BAA0 24020001 */   li    $v0, 1

.L0040BAA4:
/* 0040BAA4 15C00008 */  bnez  $t6, .L0040BAC8
/* 0040BAA8 8FAF000C */   lw    $t7, 0xc($sp)
/* 0040BAAC 24010001 */  li    $at, 1
/* 0040BAB0 15E10005 */  bne   $t7, $at, .L0040BAC8
/* 0040BAB4 8FB80010 */   lw    $t8, 0x10($sp)
/* 0040BAB8 53000004 */  beql  $t8, $zero, .L0040BACC
/* 0040BABC 00001025 */   move  $v0, $zero
/* 0040BAC0 03E00008 */  jr    $ra
/* 0040BAC4 24020001 */   li    $v0, 1

.L0040BAC8:
/* 0040BAC8 00001025 */  move  $v0, $zero
.L0040BACC:
/* 0040BACC 03E00008 */  jr    $ra
/* 0040BAD0 00000000 */   nop   
    .type fold_identities, @function
    .size fold_identities, .-fold_identities
    .end fold_identities

glabel fold_idempotents
    .ent fold_idempotents
    # 00434E4C fold1
/* 0040BAD4 24010004 */  li    $at, 4
/* 0040BAD8 AFA60008 */  sw    $a2, 8($sp)
/* 0040BADC 1081000E */  beq   $a0, $at, .L0040BB18
/* 0040BAE0 AFA7000C */   sw    $a3, 0xc($sp)
/* 0040BAE4 2401003C */  li    $at, 60
/* 0040BAE8 10810017 */  beq   $a0, $at, .L0040BB48
/* 0040BAEC 27A30008 */   addiu $v1, $sp, 8
/* 0040BAF0 24010057 */  li    $at, 87
/* 0040BAF4 10810021 */  beq   $a0, $at, .L0040BB7C
/* 0040BAF8 8FAE0008 */   lw    $t6, 8($sp)
/* 0040BAFC 2401005B */  li    $at, 91
/* 0040BB00 10810005 */  beq   $a0, $at, .L0040BB18
/* 0040BB04 24010069 */   li    $at, 105
/* 0040BB08 1081001C */  beq   $a0, $at, .L0040BB7C
/* 0040BB0C 00000000 */   nop   
/* 0040BB10 03E00008 */  jr    $ra
/* 0040BB14 00001025 */   move  $v0, $zero

.L0040BB18:
/* 0040BB18 8FAE0008 */  lw    $t6, 8($sp)
/* 0040BB1C 8FAF000C */  lw    $t7, 0xc($sp)
/* 0040BB20 55C00026 */  bnel  $t6, $zero, .L0040BBBC
/* 0040BB24 00001025 */   move  $v0, $zero
/* 0040BB28 15E00023 */  bnez  $t7, .L0040BBB8
/* 0040BB2C 24180000 */   li    $t8, 0
/* 0040BB30 8FA80014 */  lw    $t0, 0x14($sp)
/* 0040BB34 24190000 */  li    $t9, 0
/* 0040BB38 24020001 */  li    $v0, 1
/* 0040BB3C AD190004 */  sw    $t9, 4($t0)
/* 0040BB40 03E00008 */  jr    $ra
/* 0040BB44 AD180000 */   sw    $t8, ($t0)

.L0040BB48:
/* 0040BB48 8C690000 */  lw    $t1, ($v1)
/* 0040BB4C 2402FFFF */  li    $v0, -1
/* 0040BB50 5449001A */  bnel  $v0, $t1, .L0040BBBC
/* 0040BB54 00001025 */   move  $v0, $zero
/* 0040BB58 8C6A0004 */  lw    $t2, 4($v1)
/* 0040BB5C 240CFFFF */  li    $t4, -1
/* 0040BB60 8FAB0014 */  lw    $t3, 0x14($sp)
/* 0040BB64 144A0014 */  bne   $v0, $t2, .L0040BBB8
/* 0040BB68 240DFFFF */   li    $t5, -1
/* 0040BB6C AD6D0004 */  sw    $t5, 4($t3)
/* 0040BB70 AD6C0000 */  sw    $t4, ($t3)
/* 0040BB74 03E00008 */  jr    $ra
/* 0040BB78 24020001 */   li    $v0, 1

.L0040BB7C:
/* 0040BB7C 15C0000E */  bnez  $t6, .L0040BBB8
/* 0040BB80 8FAF000C */   lw    $t7, 0xc($sp)
/* 0040BB84 24010001 */  li    $at, 1
/* 0040BB88 15E1000B */  bne   $t7, $at, .L0040BBB8
/* 0040BB8C 8FB80010 */   lw    $t8, 0x10($sp)
/* 0040BB90 13000009 */  beqz  $t8, .L0040BBB8
/* 0040BB94 24080000 */   li    $t0, 0
/* 0040BB98 8FB90014 */  lw    $t9, 0x14($sp)
/* 0040BB9C 24090000 */  li    $t1, 0
/* 0040BBA0 24020001 */  li    $v0, 1
/* 0040BBA4 AF290004 */  sw    $t1, 4($t9)
/* 0040BBA8 03E00008 */  jr    $ra
/* 0040BBAC AF280000 */   sw    $t0, ($t9)

/* 0040BBB0 03E00008 */  jr    $ra
/* 0040BBB4 00001025 */   move  $v0, $zero

.L0040BBB8:
/* 0040BBB8 00001025 */  move  $v0, $zero
.L0040BBBC:
/* 0040BBBC 03E00008 */  jr    $ra
/* 0040BBC0 00000000 */   nop   
    .type fold_idempotents, @function
    .size fold_idempotents, .-fold_idempotents
    .end fold_idempotents
)"");
