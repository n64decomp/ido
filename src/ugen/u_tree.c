__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.data
D_10016FB0:
    # 0044B120 u_tree
    .byte 0x10,0x00,0x40,0x00,0x42,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x88,0x00,0x00

D_10016FC4:
    # 0044B120 u_tree
    .byte 0x10,0x00,0x40,0x00,0x40,0x00,0x00,0x00,0x20,0x00,0x00,0x00




.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
glabel u_tree
    .ent u_tree
    # 0044B120 u_tree
    # 0044BF18 main
/* 0044B120 3C1C0FBD */  .cpload $t9
/* 0044B124 279C4930 */  
/* 0044B128 0399E021 */  
/* 0044B12C 27BDFFA8 */  addiu $sp, $sp, -0x58
/* 0044B130 AFB30024 */  sw    $s3, 0x24($sp)
/* 0044B134 AFB20020 */  sw    $s2, 0x20($sp)
/* 0044B138 AFB1001C */  sw    $s1, 0x1c($sp)
/* 0044B13C AFB00018 */  sw    $s0, 0x18($sp)
/* 0044B140 00808025 */  move  $s0, $a0
/* 0044B144 AFBF002C */  sw    $ra, 0x2c($sp)
/* 0044B148 AFBC0028 */  sw    $gp, 0x28($sp)
/* 0044B14C AFA00038 */  sw    $zero, 0x38($sp)
/* 0044B150 AFA0003C */  sw    $zero, 0x3c($sp)
/* 0044B154 AFA00040 */  sw    $zero, 0x40($sp)
/* 0044B158 AFA00044 */  sw    $zero, 0x44($sp)
/* 0044B15C AFA00048 */  sw    $zero, 0x48($sp)
/* 0044B160 AFA0004C */  sw    $zero, 0x4c($sp)
/* 0044B164 AFA00050 */  sw    $zero, 0x50($sp)
/* 0044B168 AFA00054 */  sw    $zero, 0x54($sp)
/* 0044B16C 24110060 */  li    $s1, 96
/* 0044B170 2412001F */  li    $s2, 31
/* 0044B174 27B30038 */  addiu $s3, $sp, 0x38
/* 0044B178 92020020 */  lbu   $v0, 0x20($s0)
.L0044B17C:
/* 0044B17C 52220039 */  beql  $s1, $v0, .L0044B264
/* 0044B180 8E100008 */   lw    $s0, 8($s0)
/* 0044B184 8E040000 */  lw    $a0, ($s0)
/* 0044B188 2C4E0060 */  sltiu $t6, $v0, 0x60
/* 0044B18C 50800012 */  beql  $a0, $zero, .L0044B1D8
/* 0044B190 8E040004 */   lw    $a0, 4($s0)
/* 0044B194 11C00009 */  beqz  $t6, .L0044B1BC
/* 0044B198 00000000 */   nop   
/* 0044B19C 8F998038 */  lw    $t9, %got(D_10016FC4)($gp)
/* 0044B1A0 00027943 */  sra   $t7, $v0, 5
/* 0044B1A4 000FC080 */  sll   $t8, $t7, 2
/* 0044B1A8 27396FC4 */  addiu $t9, %lo(D_10016FC4) # addiu $t9, $t9, 0x6fc4
/* 0044B1AC 03384021 */  addu  $t0, $t9, $t8
/* 0044B1B0 8D090000 */  lw    $t1, ($t0)
/* 0044B1B4 00495004 */  sllv  $t2, $t1, $v0
/* 0044B1B8 294E0000 */  slti  $t6, $t2, 0
.L0044B1BC:
/* 0044B1BC 55C00006 */  bnel  $t6, $zero, .L0044B1D8
/* 0044B1C0 8E040004 */   lw    $a0, 4($s0)
/* 0044B1C4 8F99869C */  lw    $t9, %call16(u_tree)($gp)
/* 0044B1C8 0320F809 */  jalr  $t9
/* 0044B1CC 00000000 */   nop   
/* 0044B1D0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0044B1D4 8E040004 */  lw    $a0, 4($s0)
.L0044B1D8:
/* 0044B1D8 10800013 */  beqz  $a0, .L0044B228
/* 0044B1DC 00000000 */   nop   
/* 0044B1E0 920C0020 */  lbu   $t4, 0x20($s0)
/* 0044B1E4 2D8D00A0 */  sltiu $t5, $t4, 0xa0
/* 0044B1E8 11A00009 */  beqz  $t5, .L0044B210
/* 0044B1EC 00000000 */   nop   
/* 0044B1F0 8F988038 */  lw    $t8, %got(D_10016FB0)($gp)
/* 0044B1F4 000C7943 */  sra   $t7, $t4, 5
/* 0044B1F8 000FC880 */  sll   $t9, $t7, 2
/* 0044B1FC 27186FB0 */  addiu $t8, %lo(D_10016FB0) # addiu $t8, $t8, 0x6fb0
/* 0044B200 03194021 */  addu  $t0, $t8, $t9
/* 0044B204 8D090000 */  lw    $t1, ($t0)
/* 0044B208 01895004 */  sllv  $t2, $t1, $t4
/* 0044B20C 294D0000 */  slti  $t5, $t2, 0
.L0044B210:
/* 0044B210 15A00005 */  bnez  $t5, .L0044B228
/* 0044B214 00000000 */   nop   
/* 0044B218 8F99869C */  lw    $t9, %call16(u_tree)($gp)
/* 0044B21C 0320F809 */  jalr  $t9
/* 0044B220 00000000 */   nop   
/* 0044B224 8FBC0028 */  lw    $gp, 0x28($sp)
.L0044B228:
/* 0044B228 8F9986C0 */  lw    $t9, %call16(uwrite)($gp)
/* 0044B22C 26040020 */  addiu $a0, $s0, 0x20
/* 0044B230 0320F809 */  jalr  $t9
/* 0044B234 00000000 */   nop   
/* 0044B238 920E0020 */  lbu   $t6, 0x20($s0)
/* 0044B23C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0044B240 564E0008 */  bnel  $s2, $t6, .L0044B264
/* 0044B244 8E100008 */   lw    $s0, 8($s0)
/* 0044B248 8F9986C0 */  lw    $t9, %call16(uwrite)($gp)
/* 0044B24C 240F006A */  li    $t7, 106
/* 0044B250 A3AF0038 */  sb    $t7, 0x38($sp)
/* 0044B254 0320F809 */  jalr  $t9
/* 0044B258 02602025 */   move  $a0, $s3
/* 0044B25C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0044B260 8E100008 */  lw    $s0, 8($s0)
.L0044B264:
/* 0044B264 5600FFC5 */  bnel  $s0, $zero, .L0044B17C
/* 0044B268 92020020 */   lbu   $v0, 0x20($s0)
/* 0044B26C 8FBF002C */  lw    $ra, 0x2c($sp)
/* 0044B270 8FB00018 */  lw    $s0, 0x18($sp)
/* 0044B274 8FB1001C */  lw    $s1, 0x1c($sp)
/* 0044B278 8FB20020 */  lw    $s2, 0x20($sp)
/* 0044B27C 8FB30024 */  lw    $s3, 0x24($sp)
/* 0044B280 03E00008 */  jr    $ra
/* 0044B284 27BD0058 */   addiu $sp, $sp, 0x58
    .type u_tree, @function
    .size u_tree, .-u_tree
    .end u_tree
)"");
