__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
RO_1000D270:
    # 00440C8C make_new_temp
    .ascii "Insufficiant memory                                                             "

RO_1000D2C0:
    # 00440C8C make_new_temp
    .ascii "temp_mgr.p                                                                      "

RO_1000D310:
    # 00440EA0 gen_store
    .ascii "illegal size temporary                                                          "

RO_1000D360:
    # 00440EA0 gen_store
    .ascii "temp_mgr.p                                                                      "

RO_1000D3B0:
    # 00440EA0 gen_store
    .ascii "illegal size temporary                                                          "

RO_1000D400:
    # 00440EA0 gen_store
    .ascii "temp_mgr.p                                                                      "

RO_1000D450:
    # 004413F8 free_temp
    .ascii "temporary not found                                                             "

RO_1000D4A0:
    # 004413F8 free_temp
    .ascii "temp_mgr.p                                                                      "

RO_1000D4F0:
    # 00441538 temp_offset
    .ascii "temporary not found                                                             "

RO_1000D540:
    # 00441538 temp_offset
    .ascii "temp_mgr.p                                                                      "

RO_1000D590:
    # 00441680 temp_usage_count
    .ascii "temporary not found                                                             "

RO_1000D5E0:
    # 00441680 temp_usage_count
    .ascii "temp_mgr.p                                                                      "



.bss
    .balign 4
# 100213E8
glabel temps
    # 00440C10 init_temps
    # 00440C34 lookup_temp
    # 00440C8C make_new_temp
    # 00440E48 find_free_temp
    # 004417C8 get_temp_area_size
    .space 4
    .size temps, 4
    .type temps, @object

    .balign 4
# 100213EC
glabel temps_offset
    # 00440C8C make_new_temp
    # 00441804 set_temps_offset
    .space 4
    .size temps_offset, 4
    .type temps_offset, @object

    .balign 4
# 100213F0
glabel current_temp_index
    # 00440C10 init_temps
    # 00440C8C make_new_temp
    .space 4
    .size current_temp_index, 4
    .type current_temp_index, @object


.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
glabel init_temps
    .ent init_temps
    # 0042BDAC eval
/* 00440C10 3C1C0FBE */  .cpload $t9
/* 00440C14 279CEE40 */  
/* 00440C18 0399E021 */  
/* 00440C1C 8F818B04 */  lw     $at, %got(temps)($gp)
/* 00440C20 240E0001 */  li    $t6, 1
/* 00440C24 AC200000 */  sw    $zero, ($at)
/* 00440C28 8F818B0C */  lw     $at, %got(current_temp_index)($gp)
/* 00440C2C 03E00008 */  jr    $ra
/* 00440C30 A02E0000 */   sb    $t6, ($at)
    .type init_temps, @function
    .size init_temps, .-init_temps
    .end init_temps

glabel lookup_temp
    .ent lookup_temp
    # 004413F8 free_temp
    # 00441538 temp_offset
    # 00441680 temp_usage_count
/* 00440C34 3C1C0FBE */  .cpload $t9
/* 00440C38 279CEE1C */  
/* 00440C3C 0399E021 */  
/* 00440C40 8F838B04 */  lw     $v1, %got(temps)($gp)
/* 00440C44 AFA40000 */  sw    $a0, ($sp)
/* 00440C48 00001025 */  move  $v0, $zero
/* 00440C4C 8C630000 */  lw    $v1, ($v1)
/* 00440C50 1060000C */  beqz  $v1, .L00440C84
/* 00440C54 00000000 */   nop   
/* 00440C58 906E0000 */  lbu   $t6, ($v1)
.L00440C5C:
/* 00440C5C 548E0007 */  bnel  $a0, $t6, .L00440C7C
/* 00440C60 8C630010 */   lw    $v1, 0x10($v1)
/* 00440C64 906F0004 */  lbu   $t7, 4($v1)
/* 00440C68 55E00004 */  bnel  $t7, $zero, .L00440C7C
/* 00440C6C 8C630010 */   lw    $v1, 0x10($v1)
/* 00440C70 03E00008 */  jr    $ra
/* 00440C74 00601025 */   move  $v0, $v1

/* 00440C78 8C630010 */  lw    $v1, 0x10($v1)
.L00440C7C:
/* 00440C7C 5460FFF7 */  bnel  $v1, $zero, .L00440C5C
/* 00440C80 906E0000 */   lbu   $t6, ($v1)
.L00440C84:
/* 00440C84 03E00008 */  jr    $ra
/* 00440C88 00000000 */   nop   
    .type lookup_temp, @function
    .size lookup_temp, .-lookup_temp
    .end lookup_temp

glabel make_new_temp
    .ent make_new_temp
    # 00441308 spill_to_temp
/* 00440C8C 3C1C0FBE */  .cpload $t9
/* 00440C90 279CEDC4 */  
/* 00440C94 0399E021 */  
/* 00440C98 8F9987E8 */  lw    $t9, %call16(new)($gp)
/* 00440C9C 27BDFF40 */  addiu $sp, $sp, -0xc0
/* 00440CA0 AFBF00B4 */  sw    $ra, 0xb4($sp)
/* 00440CA4 00803025 */  move  $a2, $a0
/* 00440CA8 AFBC00B0 */  sw    $gp, 0xb0($sp)
/* 00440CAC AFA600C0 */  sw    $a2, 0xc0($sp)
/* 00440CB0 24040014 */  li    $a0, 20
/* 00440CB4 0320F809 */  jalr  $t9
/* 00440CB8 24050001 */   li    $a1, 1
/* 00440CBC 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00440CC0 8FA600C0 */  lw    $a2, 0xc0($sp)
/* 00440CC4 14400041 */  bnez  $v0, .L00440DCC
/* 00440CC8 00401825 */   move  $v1, $v0
/* 00440CCC 8F8E8038 */  lw    $t6, %got(RO_1000D2C0)($gp)
/* 00440CD0 24040004 */  li    $a0, 4
/* 00440CD4 2405004C */  li    $a1, 76
/* 00440CD8 25CED2C0 */  addiu $t6, %lo(RO_1000D2C0) # addiu $t6, $t6, -0x2d40
/* 00440CDC 25CA0048 */  addiu $t2, $t6, 0x48
/* 00440CE0 03A0C825 */  move  $t9, $sp
.L00440CE4:
/* 00440CE4 89D80000 */  lwl   $t8, ($t6)
/* 00440CE8 99D80003 */  lwr   $t8, 3($t6)
/* 00440CEC 25CE000C */  addiu $t6, $t6, 0xc
/* 00440CF0 2739000C */  addiu $t9, $t9, 0xc
/* 00440CF4 AB38FFFC */  swl   $t8, -4($t9)
/* 00440CF8 BB38FFFF */  swr   $t8, -1($t9)
/* 00440CFC 89CFFFF8 */  lwl   $t7, -8($t6)
/* 00440D00 99CFFFFB */  lwr   $t7, -5($t6)
/* 00440D04 AB2F0000 */  swl   $t7, ($t9)
/* 00440D08 BB2F0003 */  swr   $t7, 3($t9)
/* 00440D0C 89D8FFFC */  lwl   $t8, -4($t6)
/* 00440D10 99D8FFFF */  lwr   $t8, -1($t6)
/* 00440D14 AB380004 */  swl   $t8, 4($t9)
/* 00440D18 15CAFFF2 */  bne   $t6, $t2, .L00440CE4
/* 00440D1C BB380007 */   swr   $t8, 7($t9)
/* 00440D20 89D80000 */  lwl   $t8, ($t6)
/* 00440D24 99D80003 */  lwr   $t8, 3($t6)
/* 00440D28 8F8B8038 */  lw    $t3, %got(RO_1000D270)($gp)
/* 00440D2C 03A05025 */  move  $t2, $sp
/* 00440D30 AB380008 */  swl   $t8, 8($t9)
/* 00440D34 BB38000B */  swr   $t8, 0xb($t9)
/* 00440D38 89CF0004 */  lwl   $t7, 4($t6)
/* 00440D3C 99CF0007 */  lwr   $t7, 7($t6)
/* 00440D40 256BD270 */  addiu $t3, %lo(RO_1000D270) # addiu $t3, $t3, -0x2d90
/* 00440D44 256E0048 */  addiu $t6, $t3, 0x48
/* 00440D48 AB2F000C */  swl   $t7, 0xc($t9)
/* 00440D4C BB2F000F */  swr   $t7, 0xf($t9)
.L00440D50:
/* 00440D50 896D0000 */  lwl   $t5, ($t3)
/* 00440D54 996D0003 */  lwr   $t5, 3($t3)
/* 00440D58 256B000C */  addiu $t3, $t3, 0xc
/* 00440D5C 254A000C */  addiu $t2, $t2, 0xc
/* 00440D60 A94D004C */  swl   $t5, 0x4c($t2)
/* 00440D64 B94D004F */  swr   $t5, 0x4f($t2)
/* 00440D68 896CFFF8 */  lwl   $t4, -8($t3)
/* 00440D6C 996CFFFB */  lwr   $t4, -5($t3)
/* 00440D70 A94C0050 */  swl   $t4, 0x50($t2)
/* 00440D74 B94C0053 */  swr   $t4, 0x53($t2)
/* 00440D78 896DFFFC */  lwl   $t5, -4($t3)
/* 00440D7C 996DFFFF */  lwr   $t5, -1($t3)
/* 00440D80 A94D0054 */  swl   $t5, 0x54($t2)
/* 00440D84 156EFFF2 */  bne   $t3, $t6, .L00440D50
/* 00440D88 B94D0057 */   swr   $t5, 0x57($t2)
/* 00440D8C 896D0000 */  lwl   $t5, ($t3)
/* 00440D90 996D0003 */  lwr   $t5, 3($t3)
/* 00440D94 A94D0058 */  swl   $t5, 0x58($t2)
/* 00440D98 B94D005B */  swr   $t5, 0x5b($t2)
/* 00440D9C 896C0004 */  lwl   $t4, 4($t3)
/* 00440DA0 996C0007 */  lwr   $t4, 7($t3)
/* 00440DA4 A94C005C */  swl   $t4, 0x5c($t2)
/* 00440DA8 B94C005F */  swr   $t4, 0x5f($t2)
/* 00440DAC 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 00440DB0 8FA7000C */  lw    $a3, 0xc($sp)
/* 00440DB4 8FA60008 */  lw    $a2, 8($sp)
/* 00440DB8 0320F809 */  jalr  $t9
/* 00440DBC AFA300B8 */   sw    $v1, 0xb8($sp)
/* 00440DC0 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00440DC4 1000001C */  b     .L00440E38
/* 00440DC8 8FA200B8 */   lw    $v0, 0xb8($sp)
.L00440DCC:
/* 00440DCC 28C10005 */  slti  $at, $a2, 5
/* 00440DD0 14200008 */  bnez  $at, .L00440DF4
/* 00440DD4 00000000 */   nop   
/* 00440DD8 8F878B08 */  lw     $a3, %got(temps_offset)($gp)
/* 00440DDC 8CE40000 */  lw    $a0, ($a3)
/* 00440DE0 30820007 */  andi  $v0, $a0, 7
/* 00440DE4 10400003 */  beqz  $v0, .L00440DF4
/* 00440DE8 00000000 */   nop   
/* 00440DEC 0082C821 */  addu  $t9, $a0, $v0
/* 00440DF0 ACF90000 */  sw    $t9, ($a3)
.L00440DF4:
/* 00440DF4 8F878B08 */  lw     $a3, %got(temps_offset)($gp)
/* 00440DF8 8F888B0C */  lw     $t0, %got(current_temp_index)($gp)
/* 00440DFC 8F898B04 */  lw     $t1, %got(temps)($gp)
/* 00440E00 8CE40000 */  lw    $a0, ($a3)
/* 00440E04 91050000 */  lbu   $a1, ($t0)
/* 00440E08 8D2E0000 */  lw    $t6, ($t1)
/* 00440E0C 0086C021 */  addu  $t8, $a0, $a2
/* 00440E10 24AF0001 */  addiu $t7, $a1, 1
/* 00440E14 A0600004 */  sb    $zero, 4($v1)
/* 00440E18 AC660008 */  sw    $a2, 8($v1)
/* 00440E1C 00601025 */  move  $v0, $v1
/* 00440E20 ACF80000 */  sw    $t8, ($a3)
/* 00440E24 A10F0000 */  sb    $t7, ($t0)
/* 00440E28 AD230000 */  sw    $v1, ($t1)
/* 00440E2C AC64000C */  sw    $a0, 0xc($v1)
/* 00440E30 A0650000 */  sb    $a1, ($v1)
/* 00440E34 AC6E0010 */  sw    $t6, 0x10($v1)
.L00440E38:
/* 00440E38 8FBF00B4 */  lw    $ra, 0xb4($sp)
/* 00440E3C 27BD00C0 */  addiu $sp, $sp, 0xc0
/* 00440E40 03E00008 */  jr    $ra
/* 00440E44 00000000 */   nop   
    .type make_new_temp, @function
    .size make_new_temp, .-make_new_temp
    .end make_new_temp

glabel find_free_temp
    .ent find_free_temp
    # 00441308 spill_to_temp
/* 00440E48 3C1C0FBE */  .cpload $t9
/* 00440E4C 279CEC08 */  
/* 00440E50 0399E021 */  
/* 00440E54 8F838B04 */  lw     $v1, %got(temps)($gp)
/* 00440E58 00001025 */  move  $v0, $zero
/* 00440E5C 8C630000 */  lw    $v1, ($v1)
/* 00440E60 1060000D */  beqz  $v1, .L00440E98
/* 00440E64 00000000 */   nop   
/* 00440E68 906E0004 */  lbu   $t6, 4($v1)
.L00440E6C:
/* 00440E6C 51C00008 */  beql  $t6, $zero, .L00440E90
/* 00440E70 8C630010 */   lw    $v1, 0x10($v1)
/* 00440E74 8C6F0008 */  lw    $t7, 8($v1)
/* 00440E78 548F0005 */  bnel  $a0, $t7, .L00440E90
/* 00440E7C 8C630010 */   lw    $v1, 0x10($v1)
/* 00440E80 A0600004 */  sb    $zero, 4($v1)
/* 00440E84 03E00008 */  jr    $ra
/* 00440E88 00601025 */   move  $v0, $v1

/* 00440E8C 8C630010 */  lw    $v1, 0x10($v1)
.L00440E90:
/* 00440E90 5460FFF6 */  bnel  $v1, $zero, .L00440E6C
/* 00440E94 906E0004 */   lbu   $t6, 4($v1)
.L00440E98:
/* 00440E98 03E00008 */  jr    $ra
/* 00440E9C 00000000 */   nop   
    .type find_free_temp, @function
    .size find_free_temp, .-find_free_temp
    .end find_free_temp

glabel gen_store
    .ent gen_store
    # 00441308 spill_to_temp
/* 00440EA0 3C1C0FBE */  .cpload $t9
/* 00440EA4 279CEBB0 */  
/* 00440EA8 0399E021 */  
/* 00440EAC 27BDFF38 */  addiu $sp, $sp, -0xc8
/* 00440EB0 AFA400C8 */  sw    $a0, 0xc8($sp)
/* 00440EB4 93AE00CB */  lbu   $t6, 0xcb($sp)
/* 00440EB8 AFBF00B4 */  sw    $ra, 0xb4($sp)
/* 00440EBC AFBC00B0 */  sw    $gp, 0xb0($sp)
/* 00440EC0 2DCF0020 */  sltiu $t7, $t6, 0x20
/* 00440EC4 000FC023 */  negu  $t8, $t7
/* 00440EC8 01D8C804 */  sllv  $t9, $t8, $t6
/* 00440ECC 0721004A */  bgez  $t9, .L00440FF8
/* 00440ED0 28C10005 */   slti  $at, $a2, 5
/* 00440ED4 28C10005 */  slti  $at, $a2, 5
/* 00440ED8 10200003 */  beqz  $at, .L00440EE8
/* 00440EDC 24080057 */   li    $t0, 87
/* 00440EE0 1000008D */  b     .L00441118
/* 00440EE4 A7A800C6 */   sh    $t0, 0xc6($sp)
.L00440EE8:
/* 00440EE8 28C10009 */  slti  $at, $a2, 9
/* 00440EEC 10200004 */  beqz  $at, .L00440F00
/* 00440EF0 24040004 */   li    $a0, 4
/* 00440EF4 2409006D */  li    $t1, 109
/* 00440EF8 10000087 */  b     .L00441118
/* 00440EFC A7A900C6 */   sh    $t1, 0xc6($sp)
.L00440F00:
/* 00440F00 8F8A8038 */  lw    $t2, %got(RO_1000D400)($gp)
/* 00440F04 2405007C */  li    $a1, 124
/* 00440F08 03A06825 */  move  $t5, $sp
/* 00440F0C 254AD400 */  addiu $t2, %lo(RO_1000D400) # addiu $t2, $t2, -0x2c00
/* 00440F10 254F0048 */  addiu $t7, $t2, 0x48
.L00440F14:
/* 00440F14 894C0000 */  lwl   $t4, ($t2)
/* 00440F18 994C0003 */  lwr   $t4, 3($t2)
/* 00440F1C 254A000C */  addiu $t2, $t2, 0xc
/* 00440F20 25AD000C */  addiu $t5, $t5, 0xc
/* 00440F24 A9ACFFFC */  swl   $t4, -4($t5)
/* 00440F28 B9ACFFFF */  swr   $t4, -1($t5)
/* 00440F2C 894BFFF8 */  lwl   $t3, -8($t2)
/* 00440F30 994BFFFB */  lwr   $t3, -5($t2)
/* 00440F34 A9AB0000 */  swl   $t3, ($t5)
/* 00440F38 B9AB0003 */  swr   $t3, 3($t5)
/* 00440F3C 894CFFFC */  lwl   $t4, -4($t2)
/* 00440F40 994CFFFF */  lwr   $t4, -1($t2)
/* 00440F44 A9AC0004 */  swl   $t4, 4($t5)
/* 00440F48 154FFFF2 */  bne   $t2, $t7, .L00440F14
/* 00440F4C B9AC0007 */   swr   $t4, 7($t5)
/* 00440F50 894C0000 */  lwl   $t4, ($t2)
/* 00440F54 994C0003 */  lwr   $t4, 3($t2)
/* 00440F58 8F988038 */  lw    $t8, %got(RO_1000D3B0)($gp)
/* 00440F5C 03A04025 */  move  $t0, $sp
/* 00440F60 A9AC0008 */  swl   $t4, 8($t5)
/* 00440F64 B9AC000B */  swr   $t4, 0xb($t5)
/* 00440F68 894B0004 */  lwl   $t3, 4($t2)
/* 00440F6C 994B0007 */  lwr   $t3, 7($t2)
/* 00440F70 2718D3B0 */  addiu $t8, %lo(RO_1000D3B0) # addiu $t8, $t8, -0x2c50
/* 00440F74 27090048 */  addiu $t1, $t8, 0x48
/* 00440F78 A9AB000C */  swl   $t3, 0xc($t5)
/* 00440F7C B9AB000F */  swr   $t3, 0xf($t5)
.L00440F80:
/* 00440F80 8B190000 */  lwl   $t9, ($t8)
/* 00440F84 9B190003 */  lwr   $t9, 3($t8)
/* 00440F88 2718000C */  addiu $t8, $t8, 0xc
/* 00440F8C 2508000C */  addiu $t0, $t0, 0xc
/* 00440F90 A919004C */  swl   $t9, 0x4c($t0)
/* 00440F94 B919004F */  swr   $t9, 0x4f($t0)
/* 00440F98 8B0EFFF8 */  lwl   $t6, -8($t8)
/* 00440F9C 9B0EFFFB */  lwr   $t6, -5($t8)
/* 00440FA0 A90E0050 */  swl   $t6, 0x50($t0)
/* 00440FA4 B90E0053 */  swr   $t6, 0x53($t0)
/* 00440FA8 8B19FFFC */  lwl   $t9, -4($t8)
/* 00440FAC 9B19FFFF */  lwr   $t9, -1($t8)
/* 00440FB0 A9190054 */  swl   $t9, 0x54($t0)
/* 00440FB4 1709FFF2 */  bne   $t8, $t1, .L00440F80
/* 00440FB8 B9190057 */   swr   $t9, 0x57($t0)
/* 00440FBC 8B190000 */  lwl   $t9, ($t8)
/* 00440FC0 9B190003 */  lwr   $t9, 3($t8)
/* 00440FC4 A9190058 */  swl   $t9, 0x58($t0)
/* 00440FC8 B919005B */  swr   $t9, 0x5b($t0)
/* 00440FCC 8B0E0004 */  lwl   $t6, 4($t8)
/* 00440FD0 9B0E0007 */  lwr   $t6, 7($t8)
/* 00440FD4 A90E005C */  swl   $t6, 0x5c($t0)
/* 00440FD8 B90E005F */  swr   $t6, 0x5f($t0)
/* 00440FDC 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 00440FE0 8FA7000C */  lw    $a3, 0xc($sp)
/* 00440FE4 8FA60008 */  lw    $a2, 8($sp)
/* 00440FE8 0320F809 */  jalr  $t9
/* 00440FEC 00000000 */   nop   
/* 00440FF0 100000C1 */  b     .L004412F8
/* 00440FF4 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L00440FF8:
/* 00440FF8 10200003 */  beqz  $at, .L00441008
/* 00440FFC 240F0079 */   li    $t7, 121
/* 00441000 10000045 */  b     .L00441118
/* 00441004 A7AF00C6 */   sh    $t7, 0xc6($sp)
.L00441008:
/* 00441008 28C10009 */  slti  $at, $a2, 9
/* 0044100C 10200004 */  beqz  $at, .L00441020
/* 00441010 24040004 */   li    $a0, 4
/* 00441014 240A007A */  li    $t2, 122
/* 00441018 1000003F */  b     .L00441118
/* 0044101C A7AA00C6 */   sh    $t2, 0xc6($sp)
.L00441020:
/* 00441020 8F8D8038 */  lw    $t5, %got(RO_1000D360)($gp)
/* 00441024 24050085 */  li    $a1, 133
/* 00441028 03A04825 */  move  $t1, $sp
/* 0044102C 25ADD360 */  addiu $t5, %lo(RO_1000D360) # addiu $t5, $t5, -0x2ca0
/* 00441030 25B80048 */  addiu $t8, $t5, 0x48
.L00441034:
/* 00441034 89AC0000 */  lwl   $t4, ($t5)
/* 00441038 99AC0003 */  lwr   $t4, 3($t5)
/* 0044103C 25AD000C */  addiu $t5, $t5, 0xc
/* 00441040 2529000C */  addiu $t1, $t1, 0xc
/* 00441044 A92CFFFC */  swl   $t4, -4($t1)
/* 00441048 B92CFFFF */  swr   $t4, -1($t1)
/* 0044104C 89ABFFF8 */  lwl   $t3, -8($t5)
/* 00441050 99ABFFFB */  lwr   $t3, -5($t5)
/* 00441054 A92B0000 */  swl   $t3, ($t1)
/* 00441058 B92B0003 */  swr   $t3, 3($t1)
/* 0044105C 89ACFFFC */  lwl   $t4, -4($t5)
/* 00441060 99ACFFFF */  lwr   $t4, -1($t5)
/* 00441064 A92C0004 */  swl   $t4, 4($t1)
/* 00441068 15B8FFF2 */  bne   $t5, $t8, .L00441034
/* 0044106C B92C0007 */   swr   $t4, 7($t1)
/* 00441070 89AC0000 */  lwl   $t4, ($t5)
/* 00441074 99AC0003 */  lwr   $t4, 3($t5)
/* 00441078 8F888038 */  lw    $t0, %got(RO_1000D310)($gp)
/* 0044107C 03A07825 */  move  $t7, $sp
/* 00441080 A92C0008 */  swl   $t4, 8($t1)
/* 00441084 B92C000B */  swr   $t4, 0xb($t1)
/* 00441088 89AB0004 */  lwl   $t3, 4($t5)
/* 0044108C 99AB0007 */  lwr   $t3, 7($t5)
/* 00441090 2508D310 */  addiu $t0, %lo(RO_1000D310) # addiu $t0, $t0, -0x2cf0
/* 00441094 250A0048 */  addiu $t2, $t0, 0x48
/* 00441098 A92B000C */  swl   $t3, 0xc($t1)
/* 0044109C B92B000F */  swr   $t3, 0xf($t1)
.L004410A0:
/* 004410A0 89190000 */  lwl   $t9, ($t0)
/* 004410A4 99190003 */  lwr   $t9, 3($t0)
/* 004410A8 2508000C */  addiu $t0, $t0, 0xc
/* 004410AC 25EF000C */  addiu $t7, $t7, 0xc
/* 004410B0 A9F9004C */  swl   $t9, 0x4c($t7)
/* 004410B4 B9F9004F */  swr   $t9, 0x4f($t7)
/* 004410B8 890EFFF8 */  lwl   $t6, -8($t0)
/* 004410BC 990EFFFB */  lwr   $t6, -5($t0)
/* 004410C0 A9EE0050 */  swl   $t6, 0x50($t7)
/* 004410C4 B9EE0053 */  swr   $t6, 0x53($t7)
/* 004410C8 8919FFFC */  lwl   $t9, -4($t0)
/* 004410CC 9919FFFF */  lwr   $t9, -1($t0)
/* 004410D0 A9F90054 */  swl   $t9, 0x54($t7)
/* 004410D4 150AFFF2 */  bne   $t0, $t2, .L004410A0
/* 004410D8 B9F90057 */   swr   $t9, 0x57($t7)
/* 004410DC 89190000 */  lwl   $t9, ($t0)
/* 004410E0 99190003 */  lwr   $t9, 3($t0)
/* 004410E4 A9F90058 */  swl   $t9, 0x58($t7)
/* 004410E8 B9F9005B */  swr   $t9, 0x5b($t7)
/* 004410EC 890E0004 */  lwl   $t6, 4($t0)
/* 004410F0 990E0007 */  lwr   $t6, 7($t0)
/* 004410F4 A9EE005C */  swl   $t6, 0x5c($t7)
/* 004410F8 B9EE005F */  swr   $t6, 0x5f($t7)
/* 004410FC 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 00441100 8FA7000C */  lw    $a3, 0xc($sp)
/* 00441104 8FA60008 */  lw    $a2, 8($sp)
/* 00441108 0320F809 */  jalr  $t9
/* 0044110C 00000000 */   nop   
/* 00441110 10000079 */  b     .L004412F8
/* 00441114 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L00441118:
/* 00441118 8F988A74 */  lw     $t8, %got(reversed_stack)($gp)
/* 0044111C 97AD00C6 */  lhu   $t5, 0xc6($sp)
/* 00441120 97B900C6 */  lhu   $t9, 0xc6($sp)
/* 00441124 93180000 */  lbu   $t8, ($t8)
/* 00441128 2401006D */  li    $at, 109
/* 0044112C 1300003F */  beqz  $t8, .L0044122C
/* 00441130 00000000 */   nop   
/* 00441134 2401006D */  li    $at, 109
/* 00441138 15A10029 */  bne   $t5, $at, .L004411E0
/* 0044113C 24C80003 */   addiu $t0, $a2, 3
/* 00441140 8F8989D8 */  lw     $t1, %got(opcode_arch)($gp)
/* 00441144 24CB0003 */  addiu $t3, $a2, 3
/* 00441148 91290000 */  lbu   $t1, ($t1)
/* 0044114C 15200024 */  bnez  $t1, .L004411E0
/* 00441150 00000000 */   nop   
/* 00441154 8F998408 */  lw    $t9, %call16(frame_offset1)($gp)
/* 00441158 05610003 */  bgez  $t3, .L00441168
/* 0044115C 000B6083 */   sra   $t4, $t3, 2
/* 00441160 25610003 */  addiu $at, $t3, 3
/* 00441164 00016083 */  sra   $t4, $at, 2
.L00441168:
/* 00441168 000C5080 */  sll   $t2, $t4, 2
/* 0044116C 00AA2021 */  addu  $a0, $a1, $t2
/* 00441170 0320F809 */  jalr  $t9
/* 00441174 AFA400BC */   sw    $a0, 0xbc($sp)
/* 00441178 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 0044117C 24040057 */  li    $a0, 87
/* 00441180 93A500CB */  lbu   $a1, 0xcb($sp)
/* 00441184 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 00441188 8F878A60 */  lw     $a3, %got(frame_pointer)($gp)
/* 0044118C 00403025 */  move  $a2, $v0
/* 00441190 AFA00010 */  sw    $zero, 0x10($sp)
/* 00441194 0320F809 */  jalr  $t9
/* 00441198 90E70000 */   lbu   $a3, ($a3)
/* 0044119C 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 004411A0 8FA400BC */  lw    $a0, 0xbc($sp)
/* 004411A4 8F998408 */  lw    $t9, %call16(frame_offset1)($gp)
/* 004411A8 0320F809 */  jalr  $t9
/* 004411AC 00000000 */   nop   
/* 004411B0 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 004411B4 93A500CB */  lbu   $a1, 0xcb($sp)
/* 004411B8 24040057 */  li    $a0, 87
/* 004411BC 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 004411C0 8F878A60 */  lw     $a3, %got(frame_pointer)($gp)
/* 004411C4 24460004 */  addiu $a2, $v0, 4
/* 004411C8 AFA00010 */  sw    $zero, 0x10($sp)
/* 004411CC 24A50001 */  addiu $a1, $a1, 1
/* 004411D0 0320F809 */  jalr  $t9
/* 004411D4 90E70000 */   lbu   $a3, ($a3)
/* 004411D8 10000047 */  b     .L004412F8
/* 004411DC 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L004411E0:
/* 004411E0 8F998408 */  lw    $t9, %call16(frame_offset1)($gp)
/* 004411E4 05010003 */  bgez  $t0, .L004411F4
/* 004411E8 00087883 */   sra   $t7, $t0, 2
/* 004411EC 25010003 */  addiu $at, $t0, 3
/* 004411F0 00017883 */  sra   $t7, $at, 2
.L004411F4:
/* 004411F4 000F7080 */  sll   $t6, $t7, 2
/* 004411F8 0320F809 */  jalr  $t9
/* 004411FC 00AE2021 */   addu  $a0, $a1, $t6
/* 00441200 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00441204 97A400C6 */  lhu   $a0, 0xc6($sp)
/* 00441208 93A500CB */  lbu   $a1, 0xcb($sp)
/* 0044120C 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 00441210 8F878A60 */  lw     $a3, %got(frame_pointer)($gp)
/* 00441214 00403025 */  move  $a2, $v0
/* 00441218 AFA00010 */  sw    $zero, 0x10($sp)
/* 0044121C 0320F809 */  jalr  $t9
/* 00441220 90E70000 */   lbu   $a3, ($a3)
/* 00441224 10000034 */  b     .L004412F8
/* 00441228 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L0044122C:
/* 0044122C 17210024 */  bne   $t9, $at, .L004412C0
/* 00441230 00000000 */   nop   
/* 00441234 8F9889D8 */  lw     $t8, %got(opcode_arch)($gp)
/* 00441238 93180000 */  lbu   $t8, ($t8)
/* 0044123C 17000020 */  bnez  $t8, .L004412C0
/* 00441240 00000000 */   nop   
/* 00441244 8F998408 */  lw    $t9, %call16(frame_offset1)($gp)
/* 00441248 00A02025 */  move  $a0, $a1
/* 0044124C AFA500CC */  sw    $a1, 0xcc($sp)
/* 00441250 0320F809 */  jalr  $t9
/* 00441254 00000000 */   nop   
/* 00441258 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 0044125C 24040057 */  li    $a0, 87
/* 00441260 93A500CB */  lbu   $a1, 0xcb($sp)
/* 00441264 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 00441268 8F878A60 */  lw     $a3, %got(frame_pointer)($gp)
/* 0044126C 00403025 */  move  $a2, $v0
/* 00441270 AFA00010 */  sw    $zero, 0x10($sp)
/* 00441274 0320F809 */  jalr  $t9
/* 00441278 90E70000 */   lbu   $a3, ($a3)
/* 0044127C 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00441280 8FA400CC */  lw    $a0, 0xcc($sp)
/* 00441284 8F998408 */  lw    $t9, %call16(frame_offset1)($gp)
/* 00441288 0320F809 */  jalr  $t9
/* 0044128C 00000000 */   nop   
/* 00441290 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00441294 93A500CB */  lbu   $a1, 0xcb($sp)
/* 00441298 24040057 */  li    $a0, 87
/* 0044129C 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 004412A0 8F878A60 */  lw     $a3, %got(frame_pointer)($gp)
/* 004412A4 24460004 */  addiu $a2, $v0, 4
/* 004412A8 AFA00010 */  sw    $zero, 0x10($sp)
/* 004412AC 24A50001 */  addiu $a1, $a1, 1
/* 004412B0 0320F809 */  jalr  $t9
/* 004412B4 90E70000 */   lbu   $a3, ($a3)
/* 004412B8 1000000F */  b     .L004412F8
/* 004412BC 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L004412C0:
/* 004412C0 8F998408 */  lw    $t9, %call16(frame_offset1)($gp)
/* 004412C4 00A02025 */  move  $a0, $a1
/* 004412C8 0320F809 */  jalr  $t9
/* 004412CC 00000000 */   nop   
/* 004412D0 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 004412D4 97A400C6 */  lhu   $a0, 0xc6($sp)
/* 004412D8 93A500CB */  lbu   $a1, 0xcb($sp)
/* 004412DC 8F9981E0 */  lw    $t9, %call16(emit_rob)($gp)
/* 004412E0 8F878A60 */  lw     $a3, %got(frame_pointer)($gp)
/* 004412E4 00403025 */  move  $a2, $v0
/* 004412E8 AFA00010 */  sw    $zero, 0x10($sp)
/* 004412EC 0320F809 */  jalr  $t9
/* 004412F0 90E70000 */   lbu   $a3, ($a3)
/* 004412F4 8FBC00B0 */  lw    $gp, 0xb0($sp)
.L004412F8:
/* 004412F8 8FBF00B4 */  lw    $ra, 0xb4($sp)
/* 004412FC 27BD00C8 */  addiu $sp, $sp, 0xc8
/* 00441300 03E00008 */  jr    $ra
/* 00441304 00000000 */   nop   
    .type gen_store, @function
    .size gen_store, .-gen_store
    .end gen_store

glabel spill_to_temp
    .ent spill_to_temp
    # 0043A5E8 spill
    # 0043B478 spill_two_regs
    # 0043B854 get_one_free_reg
    # 0043BAA8 get_free_fp_reg
    # 0043D1A4 get_free_fp_reg_special
    # 0043D3F8 get_free_reg_special
/* 00441308 3C1C0FBE */  .cpload $t9
/* 0044130C 279CE748 */  
/* 00441310 0399E021 */  
/* 00441314 8F8E89D8 */  lw     $t6, %got(opcode_arch)($gp)
/* 00441318 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0044131C AFB00014 */  sw    $s0, 0x14($sp)
/* 00441320 91CE0000 */  lbu   $t6, ($t6)
/* 00441324 00A08025 */  move  $s0, $a1
/* 00441328 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0044132C AFBC0018 */  sw    $gp, 0x18($sp)
/* 00441330 15C00009 */  bnez  $t6, .L00441358
/* 00441334 AFA40028 */   sw    $a0, 0x28($sp)
/* 00441338 8F99849C */  lw    $t9, %call16(kind_of_register)($gp)
/* 0044133C 93A4002B */  lbu   $a0, 0x2b($sp)
/* 00441340 0320F809 */  jalr  $t9
/* 00441344 00000000 */   nop   
/* 00441348 24010006 */  li    $at, 6
/* 0044134C 14410002 */  bne   $v0, $at, .L00441358
/* 00441350 8FBC0018 */   lw    $gp, 0x18($sp)
/* 00441354 24100008 */  li    $s0, 8
.L00441358:
/* 00441358 8F9985B0 */  lw    $t9, %call16(find_free_temp)($gp)
/* 0044135C 02002025 */  move  $a0, $s0
/* 00441360 0320F809 */  jalr  $t9
/* 00441364 00000000 */   nop   
/* 00441368 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0044136C 14400007 */  bnez  $v0, .L0044138C
/* 00441370 00401825 */   move  $v1, $v0
/* 00441374 8F9985AC */  lw    $t9, %call16(make_new_temp)($gp)
/* 00441378 02002025 */  move  $a0, $s0
/* 0044137C 0320F809 */  jalr  $t9
/* 00441380 00000000 */   nop   
/* 00441384 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00441388 00401825 */  move  $v1, $v0
.L0044138C:
/* 0044138C 8F998504 */  lw    $t9, %call16(content_of)($gp)
/* 00441390 93A4002B */  lbu   $a0, 0x2b($sp)
/* 00441394 AFA30024 */  sw    $v1, 0x24($sp)
/* 00441398 0320F809 */  jalr  $t9
/* 0044139C 00000000 */   nop   
/* 004413A0 8FA30024 */  lw    $v1, 0x24($sp)
/* 004413A4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004413A8 906F0000 */  lbu   $t7, ($v1)
/* 004413AC A04F0018 */  sb    $t7, 0x18($v0)
/* 004413B0 8F998534 */  lw    $t9, %call16(usage_count)($gp)
/* 004413B4 93A4002B */  lbu   $a0, 0x2b($sp)
/* 004413B8 0320F809 */  jalr  $t9
/* 004413BC 00000000 */   nop   
/* 004413C0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004413C4 8FA30024 */  lw    $v1, 0x24($sp)
/* 004413C8 93A4002B */  lbu   $a0, 0x2b($sp)
/* 004413CC 8F9985B4 */  lw    $t9, %call16(gen_store)($gp)
/* 004413D0 02003025 */  move  $a2, $s0
/* 004413D4 A4620002 */  sh    $v0, 2($v1)
/* 004413D8 AC700008 */  sw    $s0, 8($v1)
/* 004413DC 0320F809 */  jalr  $t9
/* 004413E0 8C65000C */   lw    $a1, 0xc($v1)
/* 004413E4 8FBF001C */  lw    $ra, 0x1c($sp)
/* 004413E8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004413EC 8FB00014 */  lw    $s0, 0x14($sp)
/* 004413F0 03E00008 */  jr    $ra
/* 004413F4 27BD0028 */   addiu $sp, $sp, 0x28
    .type spill_to_temp, @function
    .size spill_to_temp, .-spill_to_temp
    .end spill_to_temp

glabel free_temp
    .ent free_temp
    # 00424934 restore_from_temp
    # 0042BDAC eval
/* 004413F8 3C1C0FBE */  .cpload $t9
/* 004413FC 279CE658 */  
/* 00441400 0399E021 */  
/* 00441404 8F9985A8 */  lw    $t9, %call16(lookup_temp)($gp)
/* 00441408 27BDFF48 */  addiu $sp, $sp, -0xb8
/* 0044140C AFBF00B4 */  sw    $ra, 0xb4($sp)
/* 00441410 AFBC00B0 */  sw    $gp, 0xb0($sp)
/* 00441414 0320F809 */  jalr  $t9
/* 00441418 AFA400B8 */   sw    $a0, 0xb8($sp)
/* 0044141C 14400040 */  bnez  $v0, .L00441520
/* 00441420 8FBC00B0 */   lw    $gp, 0xb0($sp)
/* 00441424 8F8E8038 */  lw    $t6, %got(RO_1000D4A0)($gp)
/* 00441428 24040004 */  li    $a0, 4
/* 0044142C 240500C0 */  li    $a1, 192
/* 00441430 25CED4A0 */  addiu $t6, %lo(RO_1000D4A0) # addiu $t6, $t6, -0x2b60
/* 00441434 25C80048 */  addiu $t0, $t6, 0x48
/* 00441438 03A0C825 */  move  $t9, $sp
.L0044143C:
/* 0044143C 89D80000 */  lwl   $t8, ($t6)
/* 00441440 99D80003 */  lwr   $t8, 3($t6)
/* 00441444 25CE000C */  addiu $t6, $t6, 0xc
/* 00441448 2739000C */  addiu $t9, $t9, 0xc
/* 0044144C AB38FFFC */  swl   $t8, -4($t9)
/* 00441450 BB38FFFF */  swr   $t8, -1($t9)
/* 00441454 89CFFFF8 */  lwl   $t7, -8($t6)
/* 00441458 99CFFFFB */  lwr   $t7, -5($t6)
/* 0044145C AB2F0000 */  swl   $t7, ($t9)
/* 00441460 BB2F0003 */  swr   $t7, 3($t9)
/* 00441464 89D8FFFC */  lwl   $t8, -4($t6)
/* 00441468 99D8FFFF */  lwr   $t8, -1($t6)
/* 0044146C AB380004 */  swl   $t8, 4($t9)
/* 00441470 15C8FFF2 */  bne   $t6, $t0, .L0044143C
/* 00441474 BB380007 */   swr   $t8, 7($t9)
/* 00441478 89D80000 */  lwl   $t8, ($t6)
/* 0044147C 99D80003 */  lwr   $t8, 3($t6)
/* 00441480 8F898038 */  lw    $t1, %got(RO_1000D450)($gp)
/* 00441484 03A06025 */  move  $t4, $sp
/* 00441488 AB380008 */  swl   $t8, 8($t9)
/* 0044148C BB38000B */  swr   $t8, 0xb($t9)
/* 00441490 89CF0004 */  lwl   $t7, 4($t6)
/* 00441494 99CF0007 */  lwr   $t7, 7($t6)
/* 00441498 2529D450 */  addiu $t1, %lo(RO_1000D450) # addiu $t1, $t1, -0x2bb0
/* 0044149C 252D0048 */  addiu $t5, $t1, 0x48
/* 004414A0 AB2F000C */  swl   $t7, 0xc($t9)
/* 004414A4 BB2F000F */  swr   $t7, 0xf($t9)
.L004414A8:
/* 004414A8 892B0000 */  lwl   $t3, ($t1)
/* 004414AC 992B0003 */  lwr   $t3, 3($t1)
/* 004414B0 2529000C */  addiu $t1, $t1, 0xc
/* 004414B4 258C000C */  addiu $t4, $t4, 0xc
/* 004414B8 A98B004C */  swl   $t3, 0x4c($t4)
/* 004414BC B98B004F */  swr   $t3, 0x4f($t4)
/* 004414C0 892AFFF8 */  lwl   $t2, -8($t1)
/* 004414C4 992AFFFB */  lwr   $t2, -5($t1)
/* 004414C8 A98A0050 */  swl   $t2, 0x50($t4)
/* 004414CC B98A0053 */  swr   $t2, 0x53($t4)
/* 004414D0 892BFFFC */  lwl   $t3, -4($t1)
/* 004414D4 992BFFFF */  lwr   $t3, -1($t1)
/* 004414D8 A98B0054 */  swl   $t3, 0x54($t4)
/* 004414DC 152DFFF2 */  bne   $t1, $t5, .L004414A8
/* 004414E0 B98B0057 */   swr   $t3, 0x57($t4)
/* 004414E4 892B0000 */  lwl   $t3, ($t1)
/* 004414E8 992B0003 */  lwr   $t3, 3($t1)
/* 004414EC A98B0058 */  swl   $t3, 0x58($t4)
/* 004414F0 B98B005B */  swr   $t3, 0x5b($t4)
/* 004414F4 892A0004 */  lwl   $t2, 4($t1)
/* 004414F8 992A0007 */  lwr   $t2, 7($t1)
/* 004414FC A98A005C */  swl   $t2, 0x5c($t4)
/* 00441500 B98A005F */  swr   $t2, 0x5f($t4)
/* 00441504 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 00441508 8FA7000C */  lw    $a3, 0xc($sp)
/* 0044150C 8FA60008 */  lw    $a2, 8($sp)
/* 00441510 0320F809 */  jalr  $t9
/* 00441514 00000000 */   nop   
/* 00441518 10000003 */  b     .L00441528
/* 0044151C 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L00441520:
/* 00441520 24080001 */  li    $t0, 1
/* 00441524 A0480004 */  sb    $t0, 4($v0)
.L00441528:
/* 00441528 8FBF00B4 */  lw    $ra, 0xb4($sp)
/* 0044152C 27BD00B8 */  addiu $sp, $sp, 0xb8
/* 00441530 03E00008 */  jr    $ra
/* 00441534 00000000 */   nop   
    .type free_temp, @function
    .size free_temp, .-free_temp
    .end free_temp

glabel temp_offset
    .ent temp_offset
    # 00424934 restore_from_temp
/* 00441538 3C1C0FBE */  .cpload $t9
/* 0044153C 279CE518 */  
/* 00441540 0399E021 */  
/* 00441544 8F9985A8 */  lw    $t9, %call16(lookup_temp)($gp)
/* 00441548 27BDFF40 */  addiu $sp, $sp, -0xc0
/* 0044154C AFBF00B4 */  sw    $ra, 0xb4($sp)
/* 00441550 AFBC00B0 */  sw    $gp, 0xb0($sp)
/* 00441554 0320F809 */  jalr  $t9
/* 00441558 AFA400C0 */   sw    $a0, 0xc0($sp)
/* 0044155C 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00441560 14400040 */  bnez  $v0, .L00441664
/* 00441564 00401825 */   move  $v1, $v0
/* 00441568 8F8E8038 */  lw    $t6, %got(RO_1000D540)($gp)
/* 0044156C 24040004 */  li    $a0, 4
/* 00441570 240500CC */  li    $a1, 204
/* 00441574 25CED540 */  addiu $t6, %lo(RO_1000D540) # addiu $t6, $t6, -0x2ac0
/* 00441578 25C80048 */  addiu $t0, $t6, 0x48
/* 0044157C 03A0C825 */  move  $t9, $sp
.L00441580:
/* 00441580 89D80000 */  lwl   $t8, ($t6)
/* 00441584 99D80003 */  lwr   $t8, 3($t6)
/* 00441588 25CE000C */  addiu $t6, $t6, 0xc
/* 0044158C 2739000C */  addiu $t9, $t9, 0xc
/* 00441590 AB38FFFC */  swl   $t8, -4($t9)
/* 00441594 BB38FFFF */  swr   $t8, -1($t9)
/* 00441598 89CFFFF8 */  lwl   $t7, -8($t6)
/* 0044159C 99CFFFFB */  lwr   $t7, -5($t6)
/* 004415A0 AB2F0000 */  swl   $t7, ($t9)
/* 004415A4 BB2F0003 */  swr   $t7, 3($t9)
/* 004415A8 89D8FFFC */  lwl   $t8, -4($t6)
/* 004415AC 99D8FFFF */  lwr   $t8, -1($t6)
/* 004415B0 AB380004 */  swl   $t8, 4($t9)
/* 004415B4 15C8FFF2 */  bne   $t6, $t0, .L00441580
/* 004415B8 BB380007 */   swr   $t8, 7($t9)
/* 004415BC 89D80000 */  lwl   $t8, ($t6)
/* 004415C0 99D80003 */  lwr   $t8, 3($t6)
/* 004415C4 8F898038 */  lw    $t1, %got(RO_1000D4F0)($gp)
/* 004415C8 03A06025 */  move  $t4, $sp
/* 004415CC AB380008 */  swl   $t8, 8($t9)
/* 004415D0 BB38000B */  swr   $t8, 0xb($t9)
/* 004415D4 89CF0004 */  lwl   $t7, 4($t6)
/* 004415D8 99CF0007 */  lwr   $t7, 7($t6)
/* 004415DC 2529D4F0 */  addiu $t1, %lo(RO_1000D4F0) # addiu $t1, $t1, -0x2b10
/* 004415E0 252D0048 */  addiu $t5, $t1, 0x48
/* 004415E4 AB2F000C */  swl   $t7, 0xc($t9)
/* 004415E8 BB2F000F */  swr   $t7, 0xf($t9)
.L004415EC:
/* 004415EC 892B0000 */  lwl   $t3, ($t1)
/* 004415F0 992B0003 */  lwr   $t3, 3($t1)
/* 004415F4 2529000C */  addiu $t1, $t1, 0xc
/* 004415F8 258C000C */  addiu $t4, $t4, 0xc
/* 004415FC A98B004C */  swl   $t3, 0x4c($t4)
/* 00441600 B98B004F */  swr   $t3, 0x4f($t4)
/* 00441604 892AFFF8 */  lwl   $t2, -8($t1)
/* 00441608 992AFFFB */  lwr   $t2, -5($t1)
/* 0044160C A98A0050 */  swl   $t2, 0x50($t4)
/* 00441610 B98A0053 */  swr   $t2, 0x53($t4)
/* 00441614 892BFFFC */  lwl   $t3, -4($t1)
/* 00441618 992BFFFF */  lwr   $t3, -1($t1)
/* 0044161C A98B0054 */  swl   $t3, 0x54($t4)
/* 00441620 152DFFF2 */  bne   $t1, $t5, .L004415EC
/* 00441624 B98B0057 */   swr   $t3, 0x57($t4)
/* 00441628 892B0000 */  lwl   $t3, ($t1)
/* 0044162C 992B0003 */  lwr   $t3, 3($t1)
/* 00441630 A98B0058 */  swl   $t3, 0x58($t4)
/* 00441634 B98B005B */  swr   $t3, 0x5b($t4)
/* 00441638 892A0004 */  lwl   $t2, 4($t1)
/* 0044163C 992A0007 */  lwr   $t2, 7($t1)
/* 00441640 A98A005C */  swl   $t2, 0x5c($t4)
/* 00441644 B98A005F */  swr   $t2, 0x5f($t4)
/* 00441648 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 0044164C 8FA7000C */  lw    $a3, 0xc($sp)
/* 00441650 8FA60008 */  lw    $a2, 8($sp)
/* 00441654 0320F809 */  jalr  $t9
/* 00441658 00000000 */   nop   
/* 0044165C 10000003 */  b     .L0044166C
/* 00441660 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L00441664:
/* 00441664 10000002 */  b     .L00441670
/* 00441668 8C62000C */   lw    $v0, 0xc($v1)
.L0044166C:
/* 0044166C 8FA200BC */  lw    $v0, 0xbc($sp)
.L00441670:
/* 00441670 8FBF00B4 */  lw    $ra, 0xb4($sp)
/* 00441674 27BD00C0 */  addiu $sp, $sp, 0xc0
/* 00441678 03E00008 */  jr    $ra
/* 0044167C 00000000 */   nop   
    .type temp_offset, @function
    .size temp_offset, .-temp_offset
    .end temp_offset

glabel temp_usage_count
    .ent temp_usage_count
    # 00424934 restore_from_temp
    # 0042BDAC eval
/* 00441680 3C1C0FBE */  .cpload $t9
/* 00441684 279CE3D0 */  
/* 00441688 0399E021 */  
/* 0044168C 8F9985A8 */  lw    $t9, %call16(lookup_temp)($gp)
/* 00441690 27BDFF40 */  addiu $sp, $sp, -0xc0
/* 00441694 AFBF00B4 */  sw    $ra, 0xb4($sp)
/* 00441698 AFBC00B0 */  sw    $gp, 0xb0($sp)
/* 0044169C 0320F809 */  jalr  $t9
/* 004416A0 AFA400C0 */   sw    $a0, 0xc0($sp)
/* 004416A4 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 004416A8 14400040 */  bnez  $v0, .L004417AC
/* 004416AC 00401825 */   move  $v1, $v0
/* 004416B0 8F8E8038 */  lw    $t6, %got(RO_1000D5E0)($gp)
/* 004416B4 24040004 */  li    $a0, 4
/* 004416B8 240500D8 */  li    $a1, 216
/* 004416BC 25CED5E0 */  addiu $t6, %lo(RO_1000D5E0) # addiu $t6, $t6, -0x2a20
/* 004416C0 25C80048 */  addiu $t0, $t6, 0x48
/* 004416C4 03A0C825 */  move  $t9, $sp
.L004416C8:
/* 004416C8 89D80000 */  lwl   $t8, ($t6)
/* 004416CC 99D80003 */  lwr   $t8, 3($t6)
/* 004416D0 25CE000C */  addiu $t6, $t6, 0xc
/* 004416D4 2739000C */  addiu $t9, $t9, 0xc
/* 004416D8 AB38FFFC */  swl   $t8, -4($t9)
/* 004416DC BB38FFFF */  swr   $t8, -1($t9)
/* 004416E0 89CFFFF8 */  lwl   $t7, -8($t6)
/* 004416E4 99CFFFFB */  lwr   $t7, -5($t6)
/* 004416E8 AB2F0000 */  swl   $t7, ($t9)
/* 004416EC BB2F0003 */  swr   $t7, 3($t9)
/* 004416F0 89D8FFFC */  lwl   $t8, -4($t6)
/* 004416F4 99D8FFFF */  lwr   $t8, -1($t6)
/* 004416F8 AB380004 */  swl   $t8, 4($t9)
/* 004416FC 15C8FFF2 */  bne   $t6, $t0, .L004416C8
/* 00441700 BB380007 */   swr   $t8, 7($t9)
/* 00441704 89D80000 */  lwl   $t8, ($t6)
/* 00441708 99D80003 */  lwr   $t8, 3($t6)
/* 0044170C 8F898038 */  lw    $t1, %got(RO_1000D590)($gp)
/* 00441710 03A06025 */  move  $t4, $sp
/* 00441714 AB380008 */  swl   $t8, 8($t9)
/* 00441718 BB38000B */  swr   $t8, 0xb($t9)
/* 0044171C 89CF0004 */  lwl   $t7, 4($t6)
/* 00441720 99CF0007 */  lwr   $t7, 7($t6)
/* 00441724 2529D590 */  addiu $t1, %lo(RO_1000D590) # addiu $t1, $t1, -0x2a70
/* 00441728 252D0048 */  addiu $t5, $t1, 0x48
/* 0044172C AB2F000C */  swl   $t7, 0xc($t9)
/* 00441730 BB2F000F */  swr   $t7, 0xf($t9)
.L00441734:
/* 00441734 892B0000 */  lwl   $t3, ($t1)
/* 00441738 992B0003 */  lwr   $t3, 3($t1)
/* 0044173C 2529000C */  addiu $t1, $t1, 0xc
/* 00441740 258C000C */  addiu $t4, $t4, 0xc
/* 00441744 A98B004C */  swl   $t3, 0x4c($t4)
/* 00441748 B98B004F */  swr   $t3, 0x4f($t4)
/* 0044174C 892AFFF8 */  lwl   $t2, -8($t1)
/* 00441750 992AFFFB */  lwr   $t2, -5($t1)
/* 00441754 A98A0050 */  swl   $t2, 0x50($t4)
/* 00441758 B98A0053 */  swr   $t2, 0x53($t4)
/* 0044175C 892BFFFC */  lwl   $t3, -4($t1)
/* 00441760 992BFFFF */  lwr   $t3, -1($t1)
/* 00441764 A98B0054 */  swl   $t3, 0x54($t4)
/* 00441768 152DFFF2 */  bne   $t1, $t5, .L00441734
/* 0044176C B98B0057 */   swr   $t3, 0x57($t4)
/* 00441770 892B0000 */  lwl   $t3, ($t1)
/* 00441774 992B0003 */  lwr   $t3, 3($t1)
/* 00441778 A98B0058 */  swl   $t3, 0x58($t4)
/* 0044177C B98B005B */  swr   $t3, 0x5b($t4)
/* 00441780 892A0004 */  lwl   $t2, 4($t1)
/* 00441784 992A0007 */  lwr   $t2, 7($t1)
/* 00441788 A98A005C */  swl   $t2, 0x5c($t4)
/* 0044178C B98A005F */  swr   $t2, 0x5f($t4)
/* 00441790 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 00441794 8FA7000C */  lw    $a3, 0xc($sp)
/* 00441798 8FA60008 */  lw    $a2, 8($sp)
/* 0044179C 0320F809 */  jalr  $t9
/* 004417A0 00000000 */   nop   
/* 004417A4 10000003 */  b     .L004417B4
/* 004417A8 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L004417AC:
/* 004417AC 10000002 */  b     .L004417B8
/* 004417B0 94620002 */   lhu   $v0, 2($v1)
.L004417B4:
/* 004417B4 97A200BC */  lhu   $v0, 0xbc($sp)
.L004417B8:
/* 004417B8 8FBF00B4 */  lw    $ra, 0xb4($sp)
/* 004417BC 27BD00C0 */  addiu $sp, $sp, 0xc0
/* 004417C0 03E00008 */  jr    $ra
/* 004417C4 00000000 */   nop   
    .type temp_usage_count, @function
    .size temp_usage_count, .-temp_usage_count
    .end temp_usage_count

glabel get_temp_area_size
    .ent get_temp_area_size
    # 0042BDAC eval
/* 004417C8 3C1C0FBE */  .cpload $t9
/* 004417CC 279CE288 */  
/* 004417D0 0399E021 */  
/* 004417D4 8F828B04 */  lw     $v0, %got(temps)($gp)
/* 004417D8 00001825 */  move  $v1, $zero
/* 004417DC 8C420000 */  lw    $v0, ($v0)
/* 004417E0 10400006 */  beqz  $v0, .L004417FC
/* 004417E4 00000000 */   nop   
/* 004417E8 8C4E0008 */  lw    $t6, 8($v0)
.L004417EC:
/* 004417EC 8C420010 */  lw    $v0, 0x10($v0)
/* 004417F0 006E1821 */  addu  $v1, $v1, $t6
/* 004417F4 5440FFFD */  bnel  $v0, $zero, .L004417EC
/* 004417F8 8C4E0008 */   lw    $t6, 8($v0)
.L004417FC:
/* 004417FC 03E00008 */  jr    $ra
/* 00441800 00601025 */   move  $v0, $v1
    .type get_temp_area_size, @function
    .size get_temp_area_size, .-get_temp_area_size
    .end get_temp_area_size

glabel set_temps_offset
    .ent set_temps_offset
    # 0042BDAC eval
/* 00441804 3C1C0FBE */  .cpload $t9
/* 00441808 279CE24C */  
/* 0044180C 0399E021 */  
/* 00441810 8F818B08 */  lw     $at, %got(temps_offset)($gp)
/* 00441814 03E00008 */  jr    $ra
/* 00441818 AC240000 */   sw    $a0, ($at)
    .type set_temps_offset, @function
    .size set_temps_offset, .-set_temps_offset
    .end set_temps_offset
)"");
