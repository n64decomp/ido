__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.data
# 10012290
glabel alloc_anchor
    # 00498BE0 alloc_page
    # 00498C9C alloc_free
    .byte 0x00,0x00,0x00,0x00
    .type alloc_anchor, @object
    .size alloc_anchor, .-alloc_anchor # 4
    .space 12




.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text

glabel alloc_page
    .ent alloc_page
    # 00498CD0 alloc_scb
/* 00498BE0 3C1C0FB8 */  .cpload $t9
/* 00498BE4 279C16B0 */  
/* 00498BE8 0399E021 */  
/* 00498BEC 8F858910 */  lw     $a1, %got(alloc_anchor)($gp)
/* 00498BF0 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 00498BF4 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00498BF8 8CA20000 */  lw    $v0, ($a1)
/* 00498BFC AFBC0018 */  sw    $gp, 0x18($sp)
/* 00498C00 10400005 */  beqz  $v0, .L00498C18
/* 00498C04 00000000 */   nop   
/* 00498C08 8C4E000C */  lw    $t6, 0xc($v0)
/* 00498C0C 01C4082A */  slt   $at, $t6, $a0
/* 00498C10 5020001B */  beql  $at, $zero, .L00498C80
/* 00498C14 8C490004 */   lw    $t1, 4($v0)
.L00498C18:
/* 00498C18 8F998168 */  lw    $t9, %call16(sbrk)($gp)
/* 00498C1C 0320F809 */  jalr  $t9
/* 00498C20 00000000 */   nop   
/* 00498C24 2401FFFF */  li    $at, -1
/* 00498C28 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00498C2C 14410003 */  bne   $v0, $at, .L00498C3C
/* 00498C30 00401825 */   move  $v1, $v0
/* 00498C34 10000014 */  b     .L00498C88
/* 00498C38 00001825 */   move  $v1, $zero
.L00498C3C:
/* 00498C3C 2405F000 */  li    $a1, -4096
/* 00498C40 00457824 */  and   $t7, $v0, $a1
/* 00498C44 104F0010 */  beq   $v0, $t7, .L00498C88
/* 00498C48 24780FFF */   addiu $t8, $v1, 0xfff
/* 00498C4C 0305C824 */  and   $t9, $t8, $a1
/* 00498C50 03232023 */  subu  $a0, $t9, $v1
/* 00498C54 8F998168 */  lw    $t9, %call16(sbrk)($gp)
/* 00498C58 AFA40020 */  sw    $a0, 0x20($sp)
/* 00498C5C AFA30028 */  sw    $v1, 0x28($sp)
/* 00498C60 0320F809 */  jalr  $t9
/* 00498C64 00000000 */   nop   
/* 00498C68 8FA30028 */  lw    $v1, 0x28($sp)
/* 00498C6C 8FA80020 */  lw    $t0, 0x20($sp)
/* 00498C70 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00498C74 10000004 */  b     .L00498C88
/* 00498C78 00681821 */   addu  $v1, $v1, $t0
/* 00498C7C 8C490004 */  lw    $t1, 4($v0)
.L00498C80:
/* 00498C80 00401825 */  move  $v1, $v0
/* 00498C84 ACA90000 */  sw    $t1, ($a1)
.L00498C88:
/* 00498C88 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00498C8C 27BD0030 */  addiu $sp, $sp, 0x30
/* 00498C90 00601025 */  move  $v0, $v1
/* 00498C94 03E00008 */  jr    $ra
/* 00498C98 00000000 */   nop   
    .type alloc_page, @function
    .size alloc_page, .-alloc_page
    .end alloc_page

glabel alloc_free
    .ent alloc_free
    # 00498E6C alloc_release
/* 00498C9C 3C1C0FB8 */  .cpload $t9
/* 00498CA0 279C15F4 */  
/* 00498CA4 0399E021 */  
/* 00498CA8 8F828910 */  lw     $v0, %got(alloc_anchor)($gp)
/* 00498CAC 8C8F000C */  lw    $t7, 0xc($a0)
/* 00498CB0 8C4E0000 */  lw    $t6, ($v0)
/* 00498CB4 AC440000 */  sw    $a0, ($v0)
/* 00498CB8 01E0C025 */  move  $t8, $t7
/* 00498CBC 05E10002 */  bgez  $t7, .L00498CC8
/* 00498CC0 AC8E0004 */   sw    $t6, 4($a0)
/* 00498CC4 000FC023 */  negu  $t8, $t7
.L00498CC8:
/* 00498CC8 03E00008 */  jr    $ra
/* 00498CCC AC98000C */   sw    $t8, 0xc($a0)
    .type alloc_free, @function
    .size alloc_free, .-alloc_free
    .end alloc_free

glabel alloc_scb
    .ent alloc_scb
    # 00498D68 alloc_mark
    # 00498F34 alloc_next_scb
/* 00498CD0 3C1C0FB8 */  .cpload $t9
/* 00498CD4 279C15C0 */  
/* 00498CD8 0399E021 */  
/* 00498CDC 8F9988BC */  lw    $t9, %call16(alloc_page)($gp)
/* 00498CE0 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00498CE4 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00498CE8 AFA40020 */  sw    $a0, 0x20($sp)
/* 00498CEC AFBC0018 */  sw    $gp, 0x18($sp)
/* 00498CF0 00A02025 */  move  $a0, $a1
/* 00498CF4 0320F809 */  jalr  $t9
/* 00498CF8 AFA50024 */   sw    $a1, 0x24($sp)
/* 00498CFC 8FAE0020 */  lw    $t6, 0x20($sp)
/* 00498D00 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00498D04 8FA60024 */  lw    $a2, 0x24($sp)
/* 00498D08 10400013 */  beqz  $v0, .L00498D58
/* 00498D0C ADC20000 */   sw    $v0, ($t6)
/* 00498D10 00462021 */  addu  $a0, $v0, $a2
/* 00498D14 2484FFF8 */  addiu $a0, $a0, -8
/* 00498D18 00822823 */  subu  $a1, $a0, $v0
/* 00498D1C 00067823 */  negu  $t7, $a2
/* 00498D20 24B8FFF2 */  addiu $t8, $a1, -0xe
/* 00498D24 AC4F000C */  sw    $t7, 0xc($v0)
/* 00498D28 AC400000 */  sw    $zero, ($v0)
/* 00498D2C AC400004 */  sw    $zero, 4($v0)
/* 00498D30 AC400010 */  sw    $zero, 0x10($v0)
/* 00498D34 AC580014 */  sw    $t8, 0x14($v0)
/* 00498D38 24B9FFF0 */  addiu $t9, $a1, -0x10
/* 00498D3C 24080001 */  li    $t0, 1
/* 00498D40 AC990000 */  sw    $t9, ($a0)
/* 00498D44 AC880004 */  sw    $t0, 4($a0)
/* 00498D48 24430010 */  addiu $v1, $v0, 0x10
/* 00498D4C AC430018 */  sw    $v1, 0x18($v0)
/* 00498D50 AC43001C */  sw    $v1, 0x1c($v0)
/* 00498D54 AC430008 */  sw    $v1, 8($v0)
.L00498D58:
/* 00498D58 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00498D5C 27BD0020 */  addiu $sp, $sp, 0x20
/* 00498D60 03E00008 */  jr    $ra
/* 00498D64 00000000 */   nop   
    .type alloc_scb, @function
    .size alloc_scb, .-alloc_scb
    .end alloc_scb

glabel alloc_mark
    .ent alloc_mark
    # 00426DE8 func_00426DE8
    # 0043771C optinit
    # 00455D38 analoop
    # 00456A2C oneproc
    # 0045C150 prepass
    # 00498A6C alloc_new
/* 00498D68 3C1C0FB8 */  .cpload $t9
/* 00498D6C 279C1528 */  
/* 00498D70 0399E021 */  
/* 00498D74 8F9988C4 */  lw    $t9, %call16(alloc_scb)($gp)
/* 00498D78 27BDFFC0 */  addiu $sp, $sp, -0x40
/* 00498D7C AFBF001C */  sw    $ra, 0x1c($sp)
/* 00498D80 AFA40040 */  sw    $a0, 0x40($sp)
/* 00498D84 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00498D88 27A40034 */  addiu $a0, $sp, 0x34
/* 00498D8C 0320F809 */  jalr  $t9
/* 00498D90 3C050001 */   lui   $a1, 1
/* 00498D94 8FA40034 */  lw    $a0, 0x34($sp)
/* 00498D98 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00498D9C 8FA90040 */  lw    $t1, 0x40($sp)
/* 00498DA0 54800004 */  bnezl $a0, .L00498DB4
/* 00498DA4 8D230000 */   lw    $v1, ($t1)
/* 00498DA8 1000002C */  b     .L00498E5C
/* 00498DAC 00001025 */   move  $v0, $zero
/* 00498DB0 8D230000 */  lw    $v1, ($t1)
.L00498DB4:
/* 00498DB4 8FAE0034 */  lw    $t6, 0x34($sp)
/* 00498DB8 1060000B */  beqz  $v1, .L00498DE8
/* 00498DBC 01C04025 */   move  $t0, $t6
/* 00498DC0 8C620004 */  lw    $v0, 4($v1)
/* 00498DC4 01C02025 */  move  $a0, $t6
/* 00498DC8 50400006 */  beql  $v0, $zero, .L00498DE4
/* 00498DCC AC640004 */   sw    $a0, 4($v1)
/* 00498DD0 00401825 */  move  $v1, $v0
.L00498DD4:
/* 00498DD4 8C420004 */  lw    $v0, 4($v0)
/* 00498DD8 5440FFFE */  bnezl $v0, .L00498DD4
/* 00498DDC 00401825 */   move  $v1, $v0
/* 00498DE0 AC640004 */  sw    $a0, 4($v1)
.L00498DE4:
/* 00498DE4 AC830000 */  sw    $v1, ($a0)
.L00498DE8:
/* 00498DE8 8FAF0034 */  lw    $t7, 0x34($sp)
/* 00498DEC AD2F0000 */  sw    $t7, ($t1)
/* 00498DF0 8FB80034 */  lw    $t8, 0x34($sp)
/* 00498DF4 8F19000C */  lw    $t9, 0xc($t8)
/* 00498DF8 07210002 */  bgez  $t9, .L00498E04
/* 00498DFC 03205025 */   move  $t2, $t9
/* 00498E00 00195023 */  negu  $t2, $t9
.L00498E04:
/* 00498E04 AF0A000C */  sw    $t2, 0xc($t8)
/* 00498E08 8FAB0034 */  lw    $t3, 0x34($sp)
/* 00498E0C 2401FFFC */  li    $at, -4
/* 00498E10 240E0002 */  li    $t6, 2
/* 00498E14 8D630008 */  lw    $v1, 8($t3)
/* 00498E18 01001025 */  move  $v0, $t0
/* 00498E1C 8C670004 */  lw    $a3, 4($v1)
/* 00498E20 24640010 */  addiu $a0, $v1, 0x10
/* 00498E24 AC64000C */  sw    $a0, 0xc($v1)
/* 00498E28 00E13824 */  and   $a3, $a3, $at
/* 00498E2C 00672821 */  addu  $a1, $v1, $a3
/* 00498E30 00A33023 */  subu  $a2, $a1, $v1
/* 00498E34 24CCFFF0 */  addiu $t4, $a2, -0x10
/* 00498E38 AC640008 */  sw    $a0, 8($v1)
/* 00498E3C AC63001C */  sw    $v1, 0x1c($v1)
/* 00498E40 AC630018 */  sw    $v1, 0x18($v1)
/* 00498E44 ACAC0000 */  sw    $t4, ($a1)
/* 00498E48 8FAF0034 */  lw    $t7, 0x34($sp)
/* 00498E4C 24CDFFF2 */  addiu $t5, $a2, -0xe
/* 00498E50 AC6D0014 */  sw    $t5, 0x14($v1)
/* 00498E54 AC6E0004 */  sw    $t6, 4($v1)
/* 00498E58 ADE40008 */  sw    $a0, 8($t7)
.L00498E5C:
/* 00498E5C 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00498E60 27BD0040 */  addiu $sp, $sp, 0x40
/* 00498E64 03E00008 */  jr    $ra
/* 00498E68 00000000 */   nop   
    .type alloc_mark, @function
    .size alloc_mark, .-alloc_mark
    .end alloc_mark

glabel alloc_release
    .ent alloc_release
    # 00426DE8 func_00426DE8
    # 00455D38 analoop
    # 00456A2C oneproc
    # 0045C150 prepass
/* 00498E6C 3C1C0FB8 */  .cpload $t9
/* 00498E70 279C1424 */  
/* 00498E74 0399E021 */  
/* 00498E78 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 00498E7C AFBF0024 */  sw    $ra, 0x24($sp)
/* 00498E80 AFBC0020 */  sw    $gp, 0x20($sp)
/* 00498E84 AFB1001C */  sw    $s1, 0x1c($sp)
/* 00498E88 AFB00018 */  sw    $s0, 0x18($sp)
/* 00498E8C 8C820000 */  lw    $v0, ($a0)
/* 00498E90 00A08825 */  move  $s1, $a1
/* 00498E94 10450008 */  beq   $v0, $a1, .L00498EB8
/* 00498E98 00000000 */   nop   
/* 00498E9C 10400006 */  beqz  $v0, .L00498EB8
/* 00498EA0 00000000 */   nop   
/* 00498EA4 8C420000 */  lw    $v0, ($v0)
.L00498EA8:
/* 00498EA8 10450003 */  beq   $v0, $a1, .L00498EB8
/* 00498EAC 00000000 */   nop   
/* 00498EB0 5440FFFD */  bnezl $v0, .L00498EA8
/* 00498EB4 8C420000 */   lw    $v0, ($v0)
.L00498EB8:
/* 00498EB8 5040001A */  beql  $v0, $zero, .L00498F24
/* 00498EBC 8FBF0024 */   lw    $ra, 0x24($sp)
/* 00498EC0 8CB00000 */  lw    $s0, ($a1)
/* 00498EC4 12000002 */  beqz  $s0, .L00498ED0
/* 00498EC8 00000000 */   nop   
/* 00498ECC AE000004 */  sw    $zero, 4($s0)
.L00498ED0:
/* 00498ED0 5200000B */  beql  $s0, $zero, .L00498F00
/* 00498ED4 AC900000 */   sw    $s0, ($a0)
/* 00498ED8 8E0E000C */  lw    $t6, 0xc($s0)
/* 00498EDC 05C30008 */  bgezl $t6, .L00498F00
/* 00498EE0 AC900000 */   sw    $s0, ($a0)
/* 00498EE4 8E100000 */  lw    $s0, ($s0)
.L00498EE8:
/* 00498EE8 52000005 */  beql  $s0, $zero, .L00498F00
/* 00498EEC AC900000 */   sw    $s0, ($a0)
/* 00498EF0 8E0F000C */  lw    $t7, 0xc($s0)
/* 00498EF4 05E2FFFC */  bltzl $t7, .L00498EE8
/* 00498EF8 8E100000 */   lw    $s0, ($s0)
/* 00498EFC AC900000 */  sw    $s0, ($a0)
.L00498F00:
/* 00498F00 8F9988C0 */  lw    $t9, %call16(alloc_free)($gp)
/* 00498F04 8E300004 */  lw    $s0, 4($s1)
/* 00498F08 02202025 */  move  $a0, $s1
/* 00498F0C 0320F809 */  jalr  $t9
/* 00498F10 00000000 */   nop   
/* 00498F14 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00498F18 1600FFF9 */  bnez  $s0, .L00498F00
/* 00498F1C 02008825 */   move  $s1, $s0
/* 00498F20 8FBF0024 */  lw    $ra, 0x24($sp)
.L00498F24:
/* 00498F24 8FB00018 */  lw    $s0, 0x18($sp)
/* 00498F28 8FB1001C */  lw    $s1, 0x1c($sp)
/* 00498F2C 03E00008 */  jr    $ra
/* 00498F30 27BD0028 */   addiu $sp, $sp, 0x28
    .type alloc_release, @function
    .size alloc_release, .-alloc_release
    .end alloc_release

glabel alloc_next_scb
    .ent alloc_next_scb
    # 00498A6C alloc_new
/* 00498F34 3C1C0FB8 */  .cpload $t9
/* 00498F38 279C135C */  
/* 00498F3C 0399E021 */  
/* 00498F40 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 00498F44 00803025 */  move  $a2, $a0
/* 00498F48 3C017FFF */  lui   $at, 0x7fff
/* 00498F4C AFA5003C */  sw    $a1, 0x3c($sp)
/* 00498F50 3421F000 */  ori   $at, $at, 0xf000
/* 00498F54 24CE1017 */  addiu $t6, $a2, 0x1017
/* 00498F58 01C12824 */  and   $a1, $t6, $at
/* 00498F5C 3C010001 */  lui   $at, 1
/* 00498F60 00A1082A */  slt   $at, $a1, $at
/* 00498F64 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00498F68 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00498F6C 10200002 */  beqz  $at, .L00498F78
/* 00498F70 27A4002C */   addiu $a0, $sp, 0x2c
/* 00498F74 3C050001 */  lui   $a1, 1
.L00498F78:
/* 00498F78 8F9988C4 */  lw    $t9, %call16(alloc_scb)($gp)
/* 00498F7C 0320F809 */  jalr  $t9
/* 00498F80 00000000 */   nop   
/* 00498F84 8FB8002C */  lw    $t8, 0x2c($sp)
/* 00498F88 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00498F8C 8FA5003C */  lw    $a1, 0x3c($sp)
/* 00498F90 57000004 */  bnezl $t8, .L00498FA4
/* 00498F94 8CA30000 */   lw    $v1, ($a1)
/* 00498F98 1000001B */  b     .L00499008
/* 00498F9C 00001025 */   move  $v0, $zero
/* 00498FA0 8CA30000 */  lw    $v1, ($a1)
.L00498FA4:
/* 00498FA4 8FB9002C */  lw    $t9, 0x2c($sp)
/* 00498FA8 8C620004 */  lw    $v0, 4($v1)
/* 00498FAC 50400006 */  beql  $v0, $zero, .L00498FC8
/* 00498FB0 8FA8002C */   lw    $t0, 0x2c($sp)
/* 00498FB4 00401825 */  move  $v1, $v0
.L00498FB8:
/* 00498FB8 8C420004 */  lw    $v0, 4($v0)
/* 00498FBC 5440FFFE */  bnezl $v0, .L00498FB8
/* 00498FC0 00401825 */   move  $v1, $v0
/* 00498FC4 8FA8002C */  lw    $t0, 0x2c($sp)
.L00498FC8:
/* 00498FC8 AC790004 */  sw    $t9, 4($v1)
/* 00498FCC AD030000 */  sw    $v1, ($t0)
/* 00498FD0 8CA30000 */  lw    $v1, ($a1)
/* 00498FD4 8FA9002C */  lw    $t1, 0x2c($sp)
/* 00498FD8 8C620008 */  lw    $v0, 8($v1)
/* 00498FDC 8D240008 */  lw    $a0, 8($t1)
/* 00498FE0 50400008 */  beql  $v0, $zero, .L00499004
/* 00498FE4 AC640008 */   sw    $a0, 8($v1)
/* 00498FE8 8C4A0008 */  lw    $t2, 8($v0)
/* 00498FEC AC82000C */  sw    $v0, 0xc($a0)
/* 00498FF0 AC8A0008 */  sw    $t2, 8($a0)
/* 00498FF4 8C4B0008 */  lw    $t3, 8($v0)
/* 00498FF8 AD64000C */  sw    $a0, 0xc($t3)
/* 00498FFC AC440008 */  sw    $a0, 8($v0)
/* 00499000 AC640008 */  sw    $a0, 8($v1)
.L00499004:
/* 00499004 24020001 */  li    $v0, 1
.L00499008:
/* 00499008 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0049900C 27BD0038 */  addiu $sp, $sp, 0x38
/* 00499010 03E00008 */  jr    $ra
/* 00499014 00000000 */   nop   
    .type alloc_next_scb, @function
    .size alloc_next_scb, .-alloc_next_scb
    .end alloc_next_scb

glabel alloc_resize
    .ent alloc_resize
    # 00498760 xrealloc
/* 00499018 3C1C0FB8 */  .cpload $t9
/* 0049901C 279C1278 */  
/* 00499020 0399E021 */  
/* 00499024 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 00499028 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0049902C AFBC0018 */  sw    $gp, 0x18($sp)
/* 00499030 AFB00014 */  sw    $s0, 0x14($sp)
/* 00499034 AFA50034 */  sw    $a1, 0x34($sp)
/* 00499038 AFA60038 */  sw    $a2, 0x38($sp)
/* 0049903C 1080002C */  beqz  $a0, .L004990F0
/* 00499040 00803825 */   move  $a3, $a0
/* 00499044 8C8EFFFC */  lw    $t6, -4($a0)
/* 00499048 2490FFF8 */  addiu $s0, $a0, -8
/* 0049904C 8FB80034 */  lw    $t8, 0x34($sp)
/* 00499050 31CF0001 */  andi  $t7, $t6, 1
/* 00499054 55E00004 */  bnezl $t7, .L00499068
/* 00499058 8E060004 */   lw    $a2, 4($s0)
/* 0049905C 1000002C */  b     .L00499110
/* 00499060 00001025 */   move  $v0, $zero
/* 00499064 8E060004 */  lw    $a2, 4($s0)
.L00499068:
/* 00499068 2401FFFC */  li    $at, -4
/* 0049906C 27190004 */  addiu $t9, $t8, 4
/* 00499070 00C13024 */  and   $a2, $a2, $at
/* 00499074 00D9082A */  slt   $at, $a2, $t9
/* 00499078 14200003 */  bnez  $at, .L00499088
/* 0049907C 8FA40034 */   lw    $a0, 0x34($sp)
/* 00499080 10000023 */  b     .L00499110
/* 00499084 00E01025 */   move  $v0, $a3
.L00499088:
/* 00499088 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 0049908C 8FA50038 */  lw    $a1, 0x38($sp)
/* 00499090 AFA60024 */  sw    $a2, 0x24($sp)
/* 00499094 0320F809 */  jalr  $t9
/* 00499098 AFA70030 */   sw    $a3, 0x30($sp)
/* 0049909C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004990A0 8FA60024 */  lw    $a2, 0x24($sp)
/* 004990A4 8FA70030 */  lw    $a3, 0x30($sp)
/* 004990A8 14400003 */  bnez  $v0, .L004990B8
/* 004990AC 00408025 */   move  $s0, $v0
/* 004990B0 10000017 */  b     .L00499110
/* 004990B4 00001025 */   move  $v0, $zero
.L004990B8:
/* 004990B8 8F998138 */  lw    $t9, %call16(memcpy)($gp)
/* 004990BC 02002025 */  move  $a0, $s0
/* 004990C0 00E02825 */  move  $a1, $a3
/* 004990C4 0320F809 */  jalr  $t9
/* 004990C8 AFA70030 */   sw    $a3, 0x30($sp)
/* 004990CC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004990D0 8FA40030 */  lw    $a0, 0x30($sp)
/* 004990D4 8FA50038 */  lw    $a1, 0x38($sp)
/* 004990D8 8F9988B0 */  lw    $t9, %call16(alloc_dispose)($gp)
/* 004990DC 0320F809 */  jalr  $t9
/* 004990E0 00000000 */   nop   
/* 004990E4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004990E8 10000008 */  b     .L0049910C
/* 004990EC 02001825 */   move  $v1, $s0
.L004990F0:
/* 004990F0 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 004990F4 8FA40034 */  lw    $a0, 0x34($sp)
/* 004990F8 8FA50038 */  lw    $a1, 0x38($sp)
/* 004990FC 0320F809 */  jalr  $t9
/* 00499100 00000000 */   nop   
/* 00499104 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00499108 00401825 */  move  $v1, $v0
.L0049910C:
/* 0049910C 00601025 */  move  $v0, $v1
.L00499110:
/* 00499110 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00499114 8FB00014 */  lw    $s0, 0x14($sp)
/* 00499118 27BD0030 */  addiu $sp, $sp, 0x30
/* 0049911C 03E00008 */  jr    $ra
/* 00499120 00000000 */   nop   
    .type alloc_resize, @function
    .size alloc_resize, .-alloc_resize
    .end alloc_resize
)"");
