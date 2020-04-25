__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm




.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text

glabel get_arg
    .ent get_arg
    # 00434720 processargs
/* 00497EB0 3C1C0FB8 */  .cpload $t9
/* 00497EB4 279C23E0 */  
/* 00497EB8 0399E021 */  
/* 00497EBC 8F8E8944 */  lw     $t6, %got(__Argc)($gp)
/* 00497EC0 00A61821 */  addu  $v1, $a1, $a2
/* 00497EC4 00601025 */  move  $v0, $v1
/* 00497EC8 8DCE0000 */  lw    $t6, ($t6)
/* 00497ECC 008E082B */  sltu  $at, $a0, $t6
/* 00497ED0 10200012 */  beqz  $at, .L00497F1C
/* 00497ED4 00000000 */   nop   
/* 00497ED8 8F8F8940 */  lw     $t7, %got(__Argv)($gp)
/* 00497EDC 0004C080 */  sll   $t8, $a0, 2
/* 00497EE0 8DEF0000 */  lw    $t7, ($t7)
/* 00497EE4 01F8C821 */  addu  $t9, $t7, $t8
/* 00497EE8 10A3000C */  beq   $a1, $v1, .L00497F1C
/* 00497EEC 8F260000 */   lw    $a2, ($t9)
/* 00497EF0 90C30000 */  lbu   $v1, ($a2)
/* 00497EF4 24C60001 */  addiu $a2, $a2, 1
/* 00497EF8 10600008 */  beqz  $v1, .L00497F1C
/* 00497EFC 00000000 */   nop   
/* 00497F00 24A50001 */  addiu $a1, $a1, 1
.L00497F04:
/* 00497F04 10A20005 */  beq   $a1, $v0, .L00497F1C
/* 00497F08 A0A3FFFF */   sb    $v1, -1($a1)
/* 00497F0C 90C30000 */  lbu   $v1, ($a2)
/* 00497F10 24C60001 */  addiu $a2, $a2, 1
/* 00497F14 5460FFFB */  bnezl $v1, .L00497F04
/* 00497F18 24A50001 */   addiu $a1, $a1, 1
.L00497F1C:
/* 00497F1C 10A20010 */  beq   $a1, $v0, .L00497F60
/* 00497F20 00452023 */   subu  $a0, $v0, $a1
/* 00497F24 30840003 */  andi  $a0, $a0, 3
/* 00497F28 10800006 */  beqz  $a0, .L00497F44
/* 00497F2C 00851821 */   addu  $v1, $a0, $a1
/* 00497F30 24040020 */  li    $a0, 32
.L00497F34:
/* 00497F34 24A50001 */  addiu $a1, $a1, 1
/* 00497F38 1465FFFE */  bne   $v1, $a1, .L00497F34
/* 00497F3C A0A4FFFF */   sb    $a0, -1($a1)
/* 00497F40 10A20007 */  beq   $a1, $v0, .L00497F60
.L00497F44:
/* 00497F44 24040020 */   li    $a0, 32
.L00497F48:
/* 00497F48 24A50004 */  addiu $a1, $a1, 4
/* 00497F4C A0A4FFFD */  sb    $a0, -3($a1)
/* 00497F50 A0A4FFFE */  sb    $a0, -2($a1)
/* 00497F54 A0A4FFFF */  sb    $a0, -1($a1)
/* 00497F58 14A2FFFB */  bne   $a1, $v0, .L00497F48
/* 00497F5C A0A4FFFC */   sb    $a0, -4($a1)
.L00497F60:
/* 00497F60 03E00008 */  jr    $ra
/* 00497F64 00000000 */   nop   
    .type get_arg, @function
    .size get_arg, .-get_arg
    .end get_arg
)"");
