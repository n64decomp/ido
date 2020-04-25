__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
RO_1000EC80:
    # 00488C8C st_fdadd
    .asciz "st_fdadd: number of files (%d) exceeds max (%d)\n"

RO_1000ECB4:
    # 00488C8C st_fdadd
    .asciz "st_fdadd: allocation botch (%d fds and %d cfds) in %s\n"

RO_1000ECEC:
    # 00488C8C st_fdadd
    .asciz ""

RO_1000ECF0:
    # 00488C8C st_fdadd
    .asciz "</4Debug/>"

RO_1000ECFC:
    # 00488C8C st_fdadd
    .asciz ":"

RO_1000ED00:
    # 00488C8C st_fdadd
    .asciz ":"

RO_1000ED04:
    # 00488C8C st_fdadd
    .asciz "st_fdadd: could not malloc path name!! %d\n"

RO_1000ED30:
    # 00488C8C st_fdadd
    .asciz "PWD"

RO_1000ED34:
    # 00488C8C st_fdadd
    .asciz ""

RO_1000ED38:
    # 00488C8C st_fdadd
    .asciz "Cannot st_fdadd: cannot malloc %d bytes to hold file name\n"

RO_1000ED74:
    # 00488C8C st_fdadd
    .asciz "/"

RO_1000ED78:
    # 00488C8C st_fdadd
    .asciz "%lu"

RO_1000ED7C:
    # 00488C8C st_fdadd
    .asciz "-1"

RO_1000ED80:
    # 00488C8C st_fdadd
    .asciz "%lu"

RO_1000ED84:
    # 0048970C st_stradd
    .asciz "st_stradd: argument is nil\n"

RO_1000EDA0:
    # 004898C0 st_paux_ifd_iaux
    .asciz "st_paux_ifd_iaux: ifd (%d) or iaux (%d) out of range\n"

RO_1000EDD8:
    # 004899B0 st_pline_ifd_iline
    .asciz "st_paux_ifd_iaux: ifd (%d) or iline (%d) out of range\n"

RO_1000EE10:
    # 00489B50 st_malloc
    .asciz "st_malloc: cannot allocate item of 1 byte with malloc(3)\n"

RO_1000EE4C:
    # 00489B50 st_malloc
    .asciz "st_malloc: cannot allocate item of %ld bytes with malloc(3)\n"

RO_1000EE8C:
    # 00489B50 st_malloc
    .asciz "st_malloc: cannot grow item to %ld bytes with realloc(3)\n"

.data
D_10011950:
    # 00488C1C st_setfd
    # 0048932C st_auxadd
    # 00489458 st_pdadd
    # 004895E4 st_lineadd
    # 0048970C st_stradd
    # 004898C0 st_paux_ifd_iaux
    # 004899B0 st_pline_ifd_iline
    # 00489AA0 st_str_iss
    .ascii "routine: you didn't initialize with st_cuinit or st_readst\n\x00"

D_1001198C:
    # 0048932C st_auxadd
    # 00489458 st_pdadd
    # 004895E4 st_lineadd
    # 0048970C st_stradd
    # 00489AA0 st_str_iss
    .ascii "routine: no current routine, see fdadd or setfd\n\x00\x00\x00\x00"

D_100119C0:
    # 0048932C st_auxadd
    # 00489458 st_pdadd
    # 004895E4 st_lineadd
    # 0048970C st_stradd
    .ascii "routine: cannot add to this entry it was readin from disk\n\x00\x00"

D_100119FC:
    # 00488C8C st_fdadd
    .byte 0x00,0x00,0x00,0x00

D_10011A00:
    # 00488C8C st_fdadd
    .byte 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00


.bss
B_1001C150:
    # 00488C8C st_fdadd
    .space 72

B_1001C198:
    # 00488C8C st_fdadd
    .space 64

B_1001C1D8:
    # 00488C8C st_fdadd
    .space 68

B_1001C21C:
    # 00488C8C st_fdadd
    .space 4

B_1001C220:
    # 00488C8C st_fdadd
    .space 4

B_1001C224:
    # 00488C8C st_fdadd
    .space 4

B_1001C228:
    # 00488C8C st_fdadd
    .space 32

B_1001C248:
    # 00488C8C st_fdadd
    .space 8

B_1001C250:
    # 00489458 st_pdadd
    .space 64



.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
glabel st_currentifd
    .ent st_currentifd
    # 0048AE84 st_filebegin
    # 0048B120 st_endallfiles
    # 0048B2F0 st_fileend
    # 0048B490 st_textblock
    # 0048B590 _sgi_st_blockbegin
    # 0048B6E8 st_blockbegin
    # 0048B83C st_blockend
    # 0048BA18 st_procend
    # 0048BC7C st_procbegin
    # 0048C2E0 st_fixextindex
/* 00488BB0 3C1C0FB9 */  .cpload $t9
/* 00488BB4 279C16E0 */  
/* 00488BB8 0399E021 */  
/* 00488BBC 8F848CBC */  lw     $a0, %got(pcfdcur)($gp)
/* 00488BC0 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00488BC4 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00488BC8 8C840000 */  lw    $a0, ($a0)
/* 00488BCC AFBC0018 */  sw    $gp, 0x18($sp)
/* 00488BD0 14800003 */  bnez  $a0, .L00488BE0
/* 00488BD4 00000000 */   nop   
/* 00488BD8 10000005 */  b     .L00488BF0
/* 00488BDC 2402FFFF */   li    $v0, -1
.L00488BE0:
/* 00488BE0 8F9987B8 */  lw    $t9, %call16(st_ifd_pcfd)($gp)
/* 00488BE4 0320F809 */  jalr  $t9
/* 00488BE8 00000000 */   nop   
/* 00488BEC 8FBC0018 */  lw    $gp, 0x18($sp)
.L00488BF0:
/* 00488BF0 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00488BF4 27BD0020 */  addiu $sp, $sp, 0x20
/* 00488BF8 03E00008 */  jr    $ra
/* 00488BFC 00000000 */   nop   
    .type st_currentifd, @function
    .size st_currentifd, .-st_currentifd
    .end st_currentifd

glabel st_ifdmax
    .ent st_ifdmax
    # 0040BCA0 path_blockno
    # 0048AE84 st_filebegin
    # 0048B120 st_endallfiles
    # 0048C56C st_file_idn
    # 0048E1D8 st_writest
/* 00488C00 3C1C0FB9 */  .cpload $t9
/* 00488C04 279C1690 */  
/* 00488C08 0399E021 */  
/* 00488C0C 8F8E8CB8 */  lw     $t6, %got(st_pchdr)($gp)
/* 00488C10 8DCE0000 */  lw    $t6, ($t6)
/* 00488C14 03E00008 */  jr    $ra
/* 00488C18 8DC2000C */   lw    $v0, 0xc($t6)
    .type st_ifdmax, @function
    .size st_ifdmax, .-st_ifdmax
    .end st_ifdmax

glabel st_setfd
    .ent st_setfd
    # 0048AE84 st_filebegin
    # 0048B120 st_endallfiles
    # 0048B2F0 st_fileend
    # 0048B83C st_blockend
    # 0048BA18 st_procend
/* 00488C1C 3C1C0FB9 */  .cpload $t9
/* 00488C20 279C1674 */  
/* 00488C24 0399E021 */  
/* 00488C28 8F8E8CB8 */  lw     $t6, %got(st_pchdr)($gp)
/* 00488C2C 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00488C30 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00488C34 8DCE0000 */  lw    $t6, ($t6)
/* 00488C38 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00488C3C AFA40020 */  sw    $a0, 0x20($sp)
/* 00488C40 8DC20004 */  lw    $v0, 4($t6)
/* 00488C44 5440000A */  bnezl $v0, .L00488C70
/* 00488C48 8FB80020 */   lw    $t8, 0x20($sp)
/* 00488C4C 8F9987F0 */  lw    $t9, %call16(st_internal)($gp)
/* 00488C50 8F848044 */  lw    $a0, %got(D_10011950)($gp)
/* 00488C54 0320F809 */  jalr  $t9
/* 00488C58 24841950 */   addiu $a0, %lo(D_10011950) # addiu $a0, $a0, 0x1950
/* 00488C5C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00488C60 8F8F8CB8 */  lw     $t7, %got(st_pchdr)($gp)
/* 00488C64 8DEF0000 */  lw    $t7, ($t7)
/* 00488C68 8DE20004 */  lw    $v0, 4($t7)
/* 00488C6C 8FB80020 */  lw    $t8, 0x20($sp)
.L00488C70:
/* 00488C70 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00488C74 8F818CBC */  lw     $at, %got(pcfdcur)($gp)
/* 00488C78 0018C980 */  sll   $t9, $t8, 6
/* 00488C7C 00594021 */  addu  $t0, $v0, $t9
/* 00488C80 27BD0020 */  addiu $sp, $sp, 0x20
/* 00488C84 03E00008 */  jr    $ra
/* 00488C88 AC280000 */   sw    $t0, ($at)
    .type st_setfd, @function
    .size st_setfd, .-st_setfd
    .end st_setfd

glabel st_fdadd
    .ent st_fdadd
    # 0048AE84 st_filebegin
/* 00488C8C 3C1C0FB9 */  .cpload $t9
/* 00488C90 279C1604 */  
/* 00488C94 0399E021 */  
/* 00488C98 27BDFF10 */  addiu $sp, $sp, -0xf0
/* 00488C9C 8F8A8CB8 */  lw     $t2, %got(st_pchdr)($gp)
/* 00488CA0 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00488CA4 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00488CA8 8D480000 */  lw    $t0, ($t2)
/* 00488CAC AFA400F0 */  sw    $a0, 0xf0($sp)
/* 00488CB0 AFA500F4 */  sw    $a1, 0xf4($sp)
/* 00488CB4 AFA600F8 */  sw    $a2, 0xf8($sp)
/* 00488CB8 AFA700FC */  sw    $a3, 0xfc($sp)
/* 00488CBC 8D0E000C */  lw    $t6, 0xc($t0)
/* 00488CC0 3C017FFF */  lui   $at, 0x7fff
/* 00488CC4 3421FFFF */  ori   $at, $at, 0xffff
/* 00488CC8 01C1082A */  slt   $at, $t6, $at
/* 00488CCC 1420000D */  bnez  $at, .L00488D04
/* 00488CD0 AFAE0024 */   sw    $t6, 0x24($sp)
/* 00488CD4 8F998788 */  lw    $t9, %call16(st_error)($gp)
/* 00488CD8 8F848044 */  lw    $a0, %got(RO_1000EC80)($gp)
/* 00488CDC 3C067FFF */  lui   $a2, 0x7fff
/* 00488CE0 34C6FFFF */  ori   $a2, $a2, 0xffff
/* 00488CE4 01C02825 */  move  $a1, $t6
/* 00488CE8 0320F809 */  jalr  $t9
/* 00488CEC 2484EC80 */   addiu $a0, %lo(RO_1000EC80) # addiu $a0, $a0, -0x1380
/* 00488CF0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00488CF4 8F8A8CB8 */  lw     $t2, %got(st_pchdr)($gp)
/* 00488CF8 8D480000 */  lw    $t0, ($t2)
/* 00488CFC 8D18000C */  lw    $t8, 0xc($t0)
/* 00488D00 AFB80024 */  sw    $t8, 0x24($sp)
.L00488D04:
/* 00488D04 8D020010 */  lw    $v0, 0x10($t0)
/* 00488D08 8FB90024 */  lw    $t9, 0x24($sp)
/* 00488D0C 25050010 */  addiu $a1, $t0, 0x10
/* 00488D10 24060040 */  li    $a2, 64
/* 00488D14 0322082A */  slt   $at, $t9, $v0
/* 00488D18 14200037 */  bnez  $at, .L00488DF8
/* 00488D1C 24070019 */   li    $a3, 25
/* 00488D20 8F9987B0 */  lw    $t9, %call16(st_malloc)($gp)
/* 00488D24 AFA200EC */  sw    $v0, 0xec($sp)
/* 00488D28 8D040004 */  lw    $a0, 4($t0)
/* 00488D2C 0320F809 */  jalr  $t9
/* 00488D30 AFA200E8 */   sw    $v0, 0xe8($sp)
/* 00488D34 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00488D38 27A500EC */  addiu $a1, $sp, 0xec
/* 00488D3C 24060048 */  li    $a2, 72
/* 00488D40 8F8A8CB8 */  lw     $t2, %got(st_pchdr)($gp)
/* 00488D44 24070019 */  li    $a3, 25
/* 00488D48 8D4B0000 */  lw    $t3, ($t2)
/* 00488D4C AD620004 */  sw    $v0, 4($t3)
/* 00488D50 8F9987B0 */  lw    $t9, %call16(st_malloc)($gp)
/* 00488D54 8D4C0000 */  lw    $t4, ($t2)
/* 00488D58 0320F809 */  jalr  $t9
/* 00488D5C 8D840008 */   lw    $a0, 8($t4)
/* 00488D60 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00488D64 8FA900E8 */  lw    $t1, 0xe8($sp)
/* 00488D68 8F8A8CB8 */  lw     $t2, %got(st_pchdr)($gp)
/* 00488D6C 8D4D0000 */  lw    $t5, ($t2)
/* 00488D70 ADA20008 */  sw    $v0, 8($t5)
/* 00488D74 8D4E0000 */  lw    $t6, ($t2)
/* 00488D78 8FAF00EC */  lw    $t7, 0xec($sp)
/* 00488D7C 8FA700F0 */  lw    $a3, 0xf0($sp)
/* 00488D80 8DC60010 */  lw    $a2, 0x10($t6)
/* 00488D84 01E02825 */  move  $a1, $t7
/* 00488D88 51E6000A */  beql  $t7, $a2, .L00488DB4
/* 00488D8C 01202025 */   move  $a0, $t1
/* 00488D90 8F9987F0 */  lw    $t9, %call16(st_internal)($gp)
/* 00488D94 8F848044 */  lw    $a0, %got(RO_1000ECB4)($gp)
/* 00488D98 AFA900E8 */  sw    $t1, 0xe8($sp)
/* 00488D9C 0320F809 */  jalr  $t9
/* 00488DA0 2484ECB4 */   addiu $a0, %lo(RO_1000ECB4) # addiu $a0, $a0, -0x134c
/* 00488DA4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00488DA8 8FA900E8 */  lw    $t1, 0xe8($sp)
/* 00488DAC 8F8A8CB8 */  lw     $t2, %got(st_pchdr)($gp)
/* 00488DB0 01202025 */  move  $a0, $t1
.L00488DB4:
/* 00488DB4 11200010 */  beqz  $t1, .L00488DF8
/* 00488DB8 2529FFFF */   addiu $t1, $t1, -1
/* 00488DBC 000918C0 */  sll   $v1, $t1, 3
/* 00488DC0 00691821 */  addu  $v1, $v1, $t1
/* 00488DC4 000318C0 */  sll   $v1, $v1, 3
/* 00488DC8 00091180 */  sll   $v0, $t1, 6
.L00488DCC:
/* 00488DCC 8D480000 */  lw    $t0, ($t2)
/* 00488DD0 01202025 */  move  $a0, $t1
/* 00488DD4 8D180008 */  lw    $t8, 8($t0)
/* 00488DD8 8D0B0004 */  lw    $t3, 4($t0)
/* 00488DDC 0303C821 */  addu  $t9, $t8, $v1
/* 00488DE0 01626021 */  addu  $t4, $t3, $v0
/* 00488DE4 2442FFC0 */  addiu $v0, $v0, -0x40
/* 00488DE8 2463FFB8 */  addiu $v1, $v1, -0x48
/* 00488DEC AD990000 */  sw    $t9, ($t4)
/* 00488DF0 1520FFF6 */  bnez  $t1, .L00488DCC
/* 00488DF4 2529FFFF */   addiu $t1, $t1, -1
.L00488DF8:
/* 00488DF8 8D480000 */  lw    $t0, ($t2)
/* 00488DFC 8F998048 */  lw    $t9, %got(B_1001C198)($gp)
/* 00488E00 8F858CBC */  lw     $a1, %got(pcfdcur)($gp)
/* 00488E04 8D0E000C */  lw    $t6, 0xc($t0)
/* 00488E08 8D0D0004 */  lw    $t5, 4($t0)
/* 00488E0C 2739C198 */  addiu $t9, %lo(B_1001C198) # addiu $t9, $t9, -0x3e68
/* 00488E10 000E7980 */  sll   $t7, $t6, 6
/* 00488E14 01AF5821 */  addu  $t3, $t5, $t7
/* 00488E18 272D003C */  addiu $t5, $t9, 0x3c
/* 00488E1C ACAB0000 */  sw    $t3, ($a1)
.L00488E20:
/* 00488E20 8F2E0000 */  lw    $t6, ($t9)
/* 00488E24 2739000C */  addiu $t9, $t9, 0xc
/* 00488E28 256B000C */  addiu $t3, $t3, 0xc
/* 00488E2C AD6EFFF4 */  sw    $t6, -0xc($t3)
/* 00488E30 8F2CFFF8 */  lw    $t4, -8($t9)
/* 00488E34 AD6CFFF8 */  sw    $t4, -8($t3)
/* 00488E38 8F2EFFFC */  lw    $t6, -4($t9)
/* 00488E3C 172DFFF8 */  bne   $t9, $t5, .L00488E20
/* 00488E40 AD6EFFFC */   sw    $t6, -4($t3)
/* 00488E44 8F2E0000 */  lw    $t6, ($t9)
/* 00488E48 AD6E0000 */  sw    $t6, ($t3)
/* 00488E4C 8D480000 */  lw    $t0, ($t2)
/* 00488E50 8CAB0000 */  lw    $t3, ($a1)
/* 00488E54 8D0F000C */  lw    $t7, 0xc($t0)
/* 00488E58 8D0D0008 */  lw    $t5, 8($t0)
/* 00488E5C 000FC0C0 */  sll   $t8, $t7, 3
/* 00488E60 030FC021 */  addu  $t8, $t8, $t7
/* 00488E64 0018C0C0 */  sll   $t8, $t8, 3
/* 00488E68 030DC821 */  addu  $t9, $t8, $t5
/* 00488E6C AD790000 */  sw    $t9, ($t3)
/* 00488E70 8D480000 */  lw    $t0, ($t2)
/* 00488E74 8F8D8048 */  lw    $t5, %got(B_1001C150)($gp)
/* 00488E78 8D0C000C */  lw    $t4, 0xc($t0)
/* 00488E7C 25ADC150 */  addiu $t5, %lo(B_1001C150) # addiu $t5, $t5, -0x3eb0
/* 00488E80 258E0001 */  addiu $t6, $t4, 1
/* 00488E84 AD0E000C */  sw    $t6, 0xc($t0)
/* 00488E88 8CAF0000 */  lw    $t7, ($a1)
/* 00488E8C 25AC0048 */  addiu $t4, $t5, 0x48
/* 00488E90 8DF80000 */  lw    $t8, ($t7)
.L00488E94:
/* 00488E94 8DAB0000 */  lw    $t3, ($t5)
/* 00488E98 25AD000C */  addiu $t5, $t5, 0xc
/* 00488E9C 2718000C */  addiu $t8, $t8, 0xc
/* 00488EA0 AF0BFFF4 */  sw    $t3, -0xc($t8)
/* 00488EA4 8DB9FFF8 */  lw    $t9, -8($t5)
/* 00488EA8 AF19FFF8 */  sw    $t9, -8($t8)
/* 00488EAC 8DABFFFC */  lw    $t3, -4($t5)
/* 00488EB0 15ACFFF8 */  bne   $t5, $t4, .L00488E94
/* 00488EB4 AF0BFFFC */   sw    $t3, -4($t8)
/* 00488EB8 8CAE0000 */  lw    $t6, ($a1)
/* 00488EBC 8FAC00F4 */  lw    $t4, 0xf4($sp)
/* 00488EC0 8DC30000 */  lw    $v1, ($t6)
/* 00488EC4 000CC0C0 */  sll   $t8, $t4, 3
/* 00488EC8 9079003C */  lbu   $t9, 0x3c($v1)
/* 00488ECC 332BFF07 */  andi  $t3, $t9, 0xff07
/* 00488ED0 030B7025 */  or    $t6, $t8, $t3
/* 00488ED4 A06E003C */  sb    $t6, 0x3c($v1)
/* 00488ED8 8CAF0000 */  lw    $t7, ($a1)
/* 00488EDC 8FAD00F8 */  lw    $t5, 0xf8($sp)
/* 00488EE0 8DE30000 */  lw    $v1, ($t7)
/* 00488EE4 000DC880 */  sll   $t9, $t5, 2
/* 00488EE8 33380004 */  andi  $t8, $t9, 4
/* 00488EEC 906B003C */  lbu   $t3, 0x3c($v1)
/* 00488EF0 316EFFFB */  andi  $t6, $t3, 0xfffb
/* 00488EF4 030E7825 */  or    $t7, $t8, $t6
/* 00488EF8 A06F003C */  sb    $t7, 0x3c($v1)
/* 00488EFC 8CAC0000 */  lw    $t4, ($a1)
/* 00488F00 8FB900FC */  lw    $t9, 0xfc($sp)
/* 00488F04 8D830000 */  lw    $v1, ($t4)
/* 00488F08 0019C180 */  sll   $t8, $t9, 6
/* 00488F0C 906E003D */  lbu   $t6, 0x3d($v1)
/* 00488F10 31CFFF3F */  andi  $t7, $t6, 0xff3f
/* 00488F14 030F6025 */  or    $t4, $t8, $t7
/* 00488F18 A06C003D */  sb    $t4, 0x3d($v1)
/* 00488F1C 8F9987CC */  lw    $t9, %call16(gethostsex)($gp)
/* 00488F20 0320F809 */  jalr  $t9
/* 00488F24 00000000 */   nop   
/* 00488F28 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00488F2C 2C4B0001 */  sltiu $t3, $v0, 1
/* 00488F30 316E0001 */  andi  $t6, $t3, 1
/* 00488F34 8F858CBC */  lw     $a1, %got(pcfdcur)($gp)
/* 00488F38 8F848044 */  lw    $a0, %got(RO_1000ECEC)($gp)
/* 00488F3C 8CAD0000 */  lw    $t5, ($a1)
/* 00488F40 2484ECEC */  addiu $a0, %lo(RO_1000ECEC) # addiu $a0, $a0, -0x1314
/* 00488F44 8DA30000 */  lw    $v1, ($t5)
/* 00488F48 9078003C */  lbu   $t8, 0x3c($v1)
/* 00488F4C 330FFFFE */  andi  $t7, $t8, 0xfffe
/* 00488F50 01CF6025 */  or    $t4, $t6, $t7
/* 00488F54 A06C003C */  sb    $t4, 0x3c($v1)
/* 00488F58 8F9987A4 */  lw    $t9, %call16(st_stradd)($gp)
/* 00488F5C 0320F809 */  jalr  $t9
/* 00488F60 00000000 */   nop   
/* 00488F64 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00488F68 8FA400F0 */  lw    $a0, 0xf0($sp)
/* 00488F6C 8F9987A4 */  lw    $t9, %call16(st_stradd)($gp)
/* 00488F70 0320F809 */  jalr  $t9
/* 00488F74 00000000 */   nop   
/* 00488F78 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00488F7C 8F858CBC */  lw     $a1, %got(pcfdcur)($gp)
/* 00488F80 8F8B88F8 */  lw     $t3, %got(__sgi_common_dummy_file)($gp)
/* 00488F84 8CAD0000 */  lw    $t5, ($a1)
/* 00488F88 8DB90000 */  lw    $t9, ($t5)
/* 00488F8C AF220004 */  sw    $v0, 4($t9)
/* 00488F90 8D6B0000 */  lw    $t3, ($t3)
/* 00488F94 8FB800FC */  lw    $t8, 0xfc($sp)
/* 00488F98 556000E1 */  bnezl $t3, .L00489320
/* 00488F9C 8FBF001C */   lw    $ra, 0x1c($sp)
/* 00488FA0 13000003 */  beqz  $t8, .L00488FB0
/* 00488FA4 2B010003 */   slti  $at, $t8, 3
/* 00488FA8 542000DD */  bnezl $at, .L00489320
/* 00488FAC 8FBF001C */   lw    $ra, 0x1c($sp)
.L00488FB0:
/* 00488FB0 8F9987A4 */  lw    $t9, %call16(st_stradd)($gp)
/* 00488FB4 8F848044 */  lw    $a0, %got(RO_1000ECF0)($gp)
/* 00488FB8 0320F809 */  jalr  $t9
/* 00488FBC 2484ECF0 */   addiu $a0, %lo(RO_1000ECF0) # addiu $a0, $a0, -0x1310
/* 00488FC0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00488FC4 240F0001 */  li    $t7, 1
/* 00488FC8 8F8E8044 */  lw    $t6, %got(D_100119FC)($gp)
/* 00488FCC 81CE19FC */  lb    $t6, %lo(D_100119FC)($t6)
/* 00488FD0 55C0006D */  bnezl $t6, .L00489188
/* 00488FD4 8FB800F0 */   lw    $t8, 0xf0($sp)
/* 00488FD8 8F9980CC */  lw    $t9, %call16(gethostname)($gp)
/* 00488FDC 8F818044 */  lw    $at, %got(D_100119FC)($gp)
/* 00488FE0 8F848048 */  lw    $a0, %got(B_1001C1D8)($gp)
/* 00488FE4 24050040 */  li    $a1, 64
/* 00488FE8 A02F19FC */  sb    $t7, %lo(D_100119FC)($at)
/* 00488FEC 0320F809 */  jalr  $t9
/* 00488FF0 2484C1D8 */   addiu $a0, %lo(B_1001C1D8) # addiu $a0, $a0, -0x3e28
/* 00488FF4 0441000A */  bgez  $v0, .L00489020
/* 00488FF8 8FBC0018 */   lw    $gp, 0x18($sp)
/* 00488FFC 8F8D8044 */  lw    $t5, %got(RO_1000ECFC)($gp)
/* 00489000 8F8C8048 */  lw    $t4, %got(B_1001C1D8)($gp)
/* 00489004 25ADECFC */  addiu $t5, %lo(RO_1000ECFC) # addiu $t5, $t5, -0x1304
/* 00489008 91AB0000 */  lbu   $t3, ($t5)
/* 0048900C 91B90001 */  lbu   $t9, 1($t5)
/* 00489010 258CC1D8 */  addiu $t4, %lo(B_1001C1D8) # addiu $t4, $t4, -0x3e28
/* 00489014 A18B0000 */  sb    $t3, ($t4)
/* 00489018 10000008 */  b     .L0048903C
/* 0048901C A1990001 */   sb    $t9, 1($t4)
.L00489020:
/* 00489020 8F9980D0 */  lw    $t9, %call16(strcat)($gp)
/* 00489024 8F848048 */  lw    $a0, %got(B_1001C1D8)($gp)
/* 00489028 8F858044 */  lw    $a1, %got(RO_1000ED00)($gp)
/* 0048902C 2484C1D8 */  addiu $a0, %lo(B_1001C1D8) # addiu $a0, $a0, -0x3e28
/* 00489030 0320F809 */  jalr  $t9
/* 00489034 24A5ED00 */   addiu $a1, %lo(RO_1000ED00) # addiu $a1, $a1, -0x1300
/* 00489038 8FBC0018 */  lw    $gp, 0x18($sp)
.L0048903C:
/* 0048903C 8F9980D4 */  lw    $t9, %call16(pathconf)($gp)
/* 00489040 8FA400F0 */  lw    $a0, 0xf0($sp)
/* 00489044 24050005 */  li    $a1, 5
/* 00489048 0320F809 */  jalr  $t9
/* 0048904C 00000000 */   nop   
/* 00489050 28410005 */  slti  $at, $v0, 5
/* 00489054 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00489058 10200002 */  beqz  $at, .L00489064
/* 0048905C 00401825 */   move  $v1, $v0
/* 00489060 24030005 */  li    $v1, 5
.L00489064:
/* 00489064 00031880 */  sll   $v1, $v1, 2
/* 00489068 8F9980C8 */  lw    $t9, %call16(malloc)($gp)
/* 0048906C 00031080 */  sll   $v0, $v1, 2
/* 00489070 00431023 */  subu  $v0, $v0, $v1
/* 00489074 2442000A */  addiu $v0, $v0, 0xa
/* 00489078 00402025 */  move  $a0, $v0
/* 0048907C AFA20028 */  sw    $v0, 0x28($sp)
/* 00489080 0320F809 */  jalr  $t9
/* 00489084 AFA300E4 */   sw    $v1, 0xe4($sp)
/* 00489088 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048908C 8FA300E4 */  lw    $v1, 0xe4($sp)
/* 00489090 8FA50028 */  lw    $a1, 0x28($sp)
/* 00489094 8F818048 */  lw    $at, %got(B_1001C220)($gp)
/* 00489098 14400008 */  bnez  $v0, .L004890BC
/* 0048909C AC22C220 */   sw    $v0, %lo(B_1001C220)($at)
/* 004890A0 8F9987F0 */  lw    $t9, %call16(st_internal)($gp)
/* 004890A4 8F848044 */  lw    $a0, %got(RO_1000ED04)($gp)
/* 004890A8 AFA300E4 */  sw    $v1, 0xe4($sp)
/* 004890AC 0320F809 */  jalr  $t9
/* 004890B0 2484ED04 */   addiu $a0, %lo(RO_1000ED04) # addiu $a0, $a0, -0x12fc
/* 004890B4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004890B8 8FA300E4 */  lw    $v1, 0xe4($sp)
.L004890BC:
/* 004890BC 8F9980D8 */  lw    $t9, %call16(getcwd)($gp)
/* 004890C0 00002025 */  move  $a0, $zero
/* 004890C4 8FA50028 */  lw    $a1, 0x28($sp)
/* 004890C8 0320F809 */  jalr  $t9
/* 004890CC AFA300E4 */   sw    $v1, 0xe4($sp)
/* 004890D0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004890D4 8FA300E4 */  lw    $v1, 0xe4($sp)
/* 004890D8 8F818048 */  lw    $at, %got(B_1001C224)($gp)
/* 004890DC 14400019 */  bnez  $v0, .L00489144
/* 004890E0 AC22C224 */   sw    $v0, %lo(B_1001C224)($at)
/* 004890E4 8F9980A4 */  lw    $t9, %call16(getenv)($gp)
/* 004890E8 8F848044 */  lw    $a0, %got(RO_1000ED30)($gp)
/* 004890EC AFA300E4 */  sw    $v1, 0xe4($sp)
/* 004890F0 0320F809 */  jalr  $t9
/* 004890F4 2484ED30 */   addiu $a0, %lo(RO_1000ED30) # addiu $a0, $a0, -0x12d0
/* 004890F8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004890FC 8FA300E4 */  lw    $v1, 0xe4($sp)
/* 00489100 14400003 */  bnez  $v0, .L00489110
/* 00489104 00402825 */   move  $a1, $v0
/* 00489108 8F858044 */  lw    $a1, %got(RO_1000ED34)($gp)
/* 0048910C 24A5ED34 */  addiu $a1, %lo(RO_1000ED34) # addiu $a1, $a1, -0x12cc
.L00489110:
/* 00489110 8F9980C0 */  lw    $t9, %call16(strlen)($gp)
/* 00489114 8F818048 */  lw    $at, %got(B_1001C224)($gp)
/* 00489118 00A02025 */  move  $a0, $a1
/* 0048911C AFA300E4 */  sw    $v1, 0xe4($sp)
/* 00489120 0320F809 */  jalr  $t9
/* 00489124 AC25C224 */   sw    $a1, %lo(B_1001C224)($at)
/* 00489128 8FA300E4 */  lw    $v1, 0xe4($sp)
/* 0048912C 24440001 */  addiu $a0, $v0, 1
/* 00489130 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00489134 0064082A */  slt   $at, $v1, $a0
/* 00489138 10200002 */  beqz  $at, .L00489144
/* 0048913C 00000000 */   nop   
/* 00489140 00041840 */  sll   $v1, $a0, 1
.L00489144:
/* 00489144 8F9980C8 */  lw    $t9, %call16(malloc)($gp)
/* 00489148 00032880 */  sll   $a1, $v1, 2
/* 0048914C 24A5000A */  addiu $a1, $a1, 0xa
/* 00489150 00A02025 */  move  $a0, $a1
/* 00489154 0320F809 */  jalr  $t9
/* 00489158 AFA50028 */   sw    $a1, 0x28($sp)
/* 0048915C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00489160 8FA50028 */  lw    $a1, 0x28($sp)
/* 00489164 8F818048 */  lw    $at, %got(B_1001C21C)($gp)
/* 00489168 14400006 */  bnez  $v0, .L00489184
/* 0048916C AC22C21C */   sw    $v0, %lo(B_1001C21C)($at)
/* 00489170 8F9987F0 */  lw    $t9, %call16(st_internal)($gp)
/* 00489174 8F848044 */  lw    $a0, %got(RO_1000ED38)($gp)
/* 00489178 0320F809 */  jalr  $t9
/* 0048917C 2484ED38 */   addiu $a0, %lo(RO_1000ED38) # addiu $a0, $a0, -0x12c8
/* 00489180 8FBC0018 */  lw    $gp, 0x18($sp)
.L00489184:
/* 00489184 8FB800F0 */  lw    $t8, 0xf0($sp)
.L00489188:
/* 00489188 2401002F */  li    $at, 47
/* 0048918C 830E0000 */  lb    $t6, ($t8)
/* 00489190 11C10016 */  beq   $t6, $at, .L004891EC
/* 00489194 00000000 */   nop   
/* 00489198 8F9980C4 */  lw    $t9, %call16(strcpy)($gp)
/* 0048919C 8F858048 */  lw    $a1, %got(B_1001C224)($gp)
/* 004891A0 8F848048 */  lw    $a0, %got(B_1001C220)($gp)
/* 004891A4 8CA5C224 */  lw    $a1, %lo(B_1001C224)($a1)
/* 004891A8 0320F809 */  jalr  $t9
/* 004891AC 8C84C220 */   lw    $a0, %lo(B_1001C220)($a0)
/* 004891B0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004891B4 8F9980D0 */  lw    $t9, %call16(strcat)($gp)
/* 004891B8 8F848048 */  lw    $a0, %got(B_1001C220)($gp)
/* 004891BC 8F858044 */  lw    $a1, %got(RO_1000ED74)($gp)
/* 004891C0 8C84C220 */  lw    $a0, %lo(B_1001C220)($a0)
/* 004891C4 0320F809 */  jalr  $t9
/* 004891C8 24A5ED74 */   addiu $a1, %lo(RO_1000ED74) # addiu $a1, $a1, -0x128c
/* 004891CC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004891D0 8FA500F0 */  lw    $a1, 0xf0($sp)
/* 004891D4 8F9980D0 */  lw    $t9, %call16(strcat)($gp)
/* 004891D8 8F848048 */  lw    $a0, %got(B_1001C220)($gp)
/* 004891DC 0320F809 */  jalr  $t9
/* 004891E0 8C84C220 */   lw    $a0, %lo(B_1001C220)($a0)
/* 004891E4 10000007 */  b     .L00489204
/* 004891E8 8FBC0018 */   lw    $gp, 0x18($sp)
.L004891EC:
/* 004891EC 8F9980C4 */  lw    $t9, %call16(strcpy)($gp)
/* 004891F0 8F848048 */  lw    $a0, %got(B_1001C220)($gp)
/* 004891F4 8FA500F0 */  lw    $a1, 0xf0($sp)
/* 004891F8 0320F809 */  jalr  $t9
/* 004891FC 8C84C220 */   lw    $a0, %lo(B_1001C220)($a0)
/* 00489200 8FBC0018 */  lw    $gp, 0x18($sp)
.L00489204:
/* 00489204 8F9980C4 */  lw    $t9, %call16(strcpy)($gp)
/* 00489208 8F848048 */  lw    $a0, %got(B_1001C21C)($gp)
/* 0048920C 8F858048 */  lw    $a1, %got(B_1001C1D8)($gp)
/* 00489210 8C84C21C */  lw    $a0, %lo(B_1001C21C)($a0)
/* 00489214 0320F809 */  jalr  $t9
/* 00489218 24A5C1D8 */   addiu $a1, %lo(B_1001C1D8) # addiu $a1, $a1, -0x3e28
/* 0048921C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00489220 8F9980D0 */  lw    $t9, %call16(strcat)($gp)
/* 00489224 8F848048 */  lw    $a0, %got(B_1001C21C)($gp)
/* 00489228 8F858048 */  lw    $a1, %got(B_1001C220)($gp)
/* 0048922C 8C84C21C */  lw    $a0, %lo(B_1001C21C)($a0)
/* 00489230 0320F809 */  jalr  $t9
/* 00489234 8CA5C220 */   lw    $a1, %lo(B_1001C220)($a1)
/* 00489238 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048923C 8F9987A4 */  lw    $t9, %call16(st_stradd)($gp)
/* 00489240 8F848048 */  lw    $a0, %got(B_1001C21C)($gp)
/* 00489244 0320F809 */  jalr  $t9
/* 00489248 8C84C21C */   lw    $a0, %lo(B_1001C21C)($a0)
/* 0048924C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00489250 240C0001 */  li    $t4, 1
/* 00489254 8F8F8044 */  lw    $t7, %got(D_10011A00)($gp)
/* 00489258 8DEF1A00 */  lw    $t7, %lo(D_10011A00)($t7)
/* 0048925C 15E00011 */  bnez  $t7, .L004892A4
/* 00489260 00000000 */   nop   
/* 00489264 8F9980DC */  lw    $t9, %call16(time)($gp)
/* 00489268 8F818044 */  lw    $at, %got(D_10011A00)($gp)
/* 0048926C 00002025 */  move  $a0, $zero
/* 00489270 0320F809 */  jalr  $t9
/* 00489274 AC2C1A00 */   sw    $t4, %lo(D_10011A00)($at)
/* 00489278 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048927C 00403025 */  move  $a2, $v0
/* 00489280 8F9980E0 */  lw    $t9, %call16(sprintf)($gp)
/* 00489284 8F818048 */  lw    $at, %got(B_1001C248)($gp)
/* 00489288 8F848048 */  lw    $a0, %got(B_1001C228)($gp)
/* 0048928C 8F858044 */  lw    $a1, %got(RO_1000ED78)($gp)
/* 00489290 AC22C248 */  sw    $v0, %lo(B_1001C248)($at)
/* 00489294 2484C228 */  addiu $a0, %lo(B_1001C228) # addiu $a0, $a0, -0x3dd8
/* 00489298 0320F809 */  jalr  $t9
/* 0048929C 24A5ED78 */   addiu $a1, %lo(RO_1000ED78) # addiu $a1, $a1, -0x1288
/* 004892A0 8FBC0018 */  lw    $gp, 0x18($sp)
.L004892A4:
/* 004892A4 8F9987A4 */  lw    $t9, %call16(st_stradd)($gp)
/* 004892A8 8F848048 */  lw    $a0, %got(B_1001C228)($gp)
/* 004892AC 0320F809 */  jalr  $t9
/* 004892B0 2484C228 */   addiu $a0, %lo(B_1001C228) # addiu $a0, $a0, -0x3dd8
/* 004892B4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004892B8 8FA400F0 */  lw    $a0, 0xf0($sp)
/* 004892BC 27A50034 */  addiu $a1, $sp, 0x34
/* 004892C0 8F9980E4 */  lw    $t9, %call16(stat)($gp)
/* 004892C4 0320F809 */  jalr  $t9
/* 004892C8 00000000 */   nop   
/* 004892CC 04410007 */  bgez  $v0, .L004892EC
/* 004892D0 8FBC0018 */   lw    $gp, 0x18($sp)
/* 004892D4 8F9987A4 */  lw    $t9, %call16(st_stradd)($gp)
/* 004892D8 8F848044 */  lw    $a0, %got(RO_1000ED7C)($gp)
/* 004892DC 0320F809 */  jalr  $t9
/* 004892E0 2484ED7C */   addiu $a0, %lo(RO_1000ED7C) # addiu $a0, $a0, -0x1284
/* 004892E4 1000000D */  b     .L0048931C
/* 004892E8 8FBC0018 */   lw    $gp, 0x18($sp)
.L004892EC:
/* 004892EC 8F9980E0 */  lw    $t9, %call16(sprintf)($gp)
/* 004892F0 8F858044 */  lw    $a1, %got(RO_1000ED80)($gp)
/* 004892F4 27A400BC */  addiu $a0, $sp, 0xbc
/* 004892F8 8FA60064 */  lw    $a2, 0x64($sp)
/* 004892FC 0320F809 */  jalr  $t9
/* 00489300 24A5ED80 */   addiu $a1, %lo(RO_1000ED80) # addiu $a1, $a1, -0x1280
/* 00489304 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00489308 27A400BC */  addiu $a0, $sp, 0xbc
/* 0048930C 8F9987A4 */  lw    $t9, %call16(st_stradd)($gp)
/* 00489310 0320F809 */  jalr  $t9
/* 00489314 00000000 */   nop   
/* 00489318 8FBC0018 */  lw    $gp, 0x18($sp)
.L0048931C:
/* 0048931C 8FBF001C */  lw    $ra, 0x1c($sp)
.L00489320:
/* 00489320 27BD00F0 */  addiu $sp, $sp, 0xf0
/* 00489324 03E00008 */  jr    $ra
/* 00489328 00000000 */   nop   
    .type st_fdadd, @function
    .size st_fdadd, .-st_fdadd
    .end st_fdadd

glabel st_auxadd
    .ent st_auxadd
    # 0048C888 st_iaux_copyty
    # 0048CE14 st_auxbtadd
    # 0048CE84 st_auxisymadd
    # 0048CEC0 st_auxrndxadd
/* 0048932C 3C1C0FB9 */  .cpload $t9
/* 00489330 279C0F64 */  
/* 00489334 0399E021 */  
/* 00489338 8F8E8CB8 */  lw     $t6, %got(st_pchdr)($gp)
/* 0048933C 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00489340 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00489344 8DCE0000 */  lw    $t6, ($t6)
/* 00489348 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0048934C AFA40020 */  sw    $a0, 0x20($sp)
/* 00489350 8DCF0004 */  lw    $t7, 4($t6)
/* 00489354 15E00006 */  bnez  $t7, .L00489370
/* 00489358 00000000 */   nop   
/* 0048935C 8F9987F0 */  lw    $t9, %call16(st_internal)($gp)
/* 00489360 8F848044 */  lw    $a0, %got(D_10011950)($gp)
/* 00489364 0320F809 */  jalr  $t9
/* 00489368 24841950 */   addiu $a0, %lo(D_10011950) # addiu $a0, $a0, 0x1950
/* 0048936C 8FBC0018 */  lw    $gp, 0x18($sp)
.L00489370:
/* 00489370 8F838CBC */  lw     $v1, %got(pcfdcur)($gp)
/* 00489374 8C630000 */  lw    $v1, ($v1)
/* 00489378 54600009 */  bnezl $v1, .L004893A0
/* 0048937C 8C78003C */   lw    $t8, 0x3c($v1)
/* 00489380 8F9987F0 */  lw    $t9, %call16(st_internal)($gp)
/* 00489384 8F848044 */  lw    $a0, %got(D_1001198C)($gp)
/* 00489388 0320F809 */  jalr  $t9
/* 0048938C 2484198C */   addiu $a0, %lo(D_1001198C) # addiu $a0, $a0, 0x198c
/* 00489390 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00489394 8F838CBC */  lw     $v1, %got(pcfdcur)($gp)
/* 00489398 8C630000 */  lw    $v1, ($v1)
/* 0048939C 8C78003C */  lw    $t8, 0x3c($v1)
.L004893A0:
/* 004893A0 33190400 */  andi  $t9, $t8, 0x400
/* 004893A4 53200009 */  beql  $t9, $zero, .L004893CC
/* 004893A8 8C680000 */   lw    $t0, ($v1)
/* 004893AC 8F9987F0 */  lw    $t9, %call16(st_internal)($gp)
/* 004893B0 8F848044 */  lw    $a0, %got(D_100119C0)($gp)
/* 004893B4 0320F809 */  jalr  $t9
/* 004893B8 248419C0 */   addiu $a0, %lo(D_100119C0) # addiu $a0, $a0, 0x19c0
/* 004893BC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004893C0 8F838CBC */  lw     $v1, %got(pcfdcur)($gp)
/* 004893C4 8C630000 */  lw    $v1, ($v1)
/* 004893C8 8C680000 */  lw    $t0, ($v1)
.L004893CC:
/* 004893CC 8C690010 */  lw    $t1, 0x10($v1)
/* 004893D0 24650010 */  addiu $a1, $v1, 0x10
/* 004893D4 8D040030 */  lw    $a0, 0x30($t0)
/* 004893D8 0089082A */  slt   $at, $a0, $t1
/* 004893DC 5420000F */  bnezl $at, .L0048941C
/* 004893E0 8C6C000C */   lw    $t4, 0xc($v1)
/* 004893E4 8F9987B0 */  lw    $t9, %call16(st_malloc)($gp)
/* 004893E8 8C64000C */  lw    $a0, 0xc($v1)
/* 004893EC 24060004 */  li    $a2, 4
/* 004893F0 0320F809 */  jalr  $t9
/* 004893F4 24070040 */   li    $a3, 64
/* 004893F8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004893FC 8F8A8CBC */  lw     $t2, %got(pcfdcur)($gp)
/* 00489400 8F838CBC */  lw     $v1, %got(pcfdcur)($gp)
/* 00489404 8D4A0000 */  lw    $t2, ($t2)
/* 00489408 AD42000C */  sw    $v0, 0xc($t2)
/* 0048940C 8C630000 */  lw    $v1, ($v1)
/* 00489410 8C6B0000 */  lw    $t3, ($v1)
/* 00489414 8D640030 */  lw    $a0, 0x30($t3)
/* 00489418 8C6C000C */  lw    $t4, 0xc($v1)
.L0048941C:
/* 0048941C 27AF0020 */  addiu $t7, $sp, 0x20
/* 00489420 8DF90000 */  lw    $t9, ($t7)
/* 00489424 8F888CBC */  lw     $t0, %got(pcfdcur)($gp)
/* 00489428 00046880 */  sll   $t5, $a0, 2
/* 0048942C 018D7021 */  addu  $t6, $t4, $t5
/* 00489430 ADD90000 */  sw    $t9, ($t6)
/* 00489434 8D080000 */  lw    $t0, ($t0)
/* 00489438 8D050000 */  lw    $a1, ($t0)
/* 0048943C 8CA20030 */  lw    $v0, 0x30($a1)
/* 00489440 24490001 */  addiu $t1, $v0, 1
/* 00489444 ACA90030 */  sw    $t1, 0x30($a1)
/* 00489448 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0048944C 27BD0020 */  addiu $sp, $sp, 0x20
/* 00489450 03E00008 */  jr    $ra
/* 00489454 00000000 */   nop   
    .type st_auxadd, @function
    .size st_auxadd, .-st_auxadd
    .end st_auxadd

glabel st_pdadd
    .ent st_pdadd
    # 0048C410 st_pdadd_idn
/* 00489458 3C1C0FB9 */  .cpload $t9
/* 0048945C 279C0E38 */  
/* 00489460 0399E021 */  
/* 00489464 8F8E8CB8 */  lw     $t6, %got(st_pchdr)($gp)
/* 00489468 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0048946C AFBF001C */  sw    $ra, 0x1c($sp)
/* 00489470 8DCE0000 */  lw    $t6, ($t6)
/* 00489474 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00489478 AFA40020 */  sw    $a0, 0x20($sp)
/* 0048947C 8DCF0004 */  lw    $t7, 4($t6)
/* 00489480 15E00006 */  bnez  $t7, .L0048949C
/* 00489484 00000000 */   nop   
/* 00489488 8F9987F0 */  lw    $t9, %call16(st_internal)($gp)
/* 0048948C 8F848044 */  lw    $a0, %got(D_10011950)($gp)
/* 00489490 0320F809 */  jalr  $t9
/* 00489494 24841950 */   addiu $a0, %lo(D_10011950) # addiu $a0, $a0, 0x1950
/* 00489498 8FBC0018 */  lw    $gp, 0x18($sp)
.L0048949C:
/* 0048949C 8F838CBC */  lw     $v1, %got(pcfdcur)($gp)
/* 004894A0 8C630000 */  lw    $v1, ($v1)
/* 004894A4 54600009 */  bnezl $v1, .L004894CC
/* 004894A8 8C78003C */   lw    $t8, 0x3c($v1)
/* 004894AC 8F9987F0 */  lw    $t9, %call16(st_internal)($gp)
/* 004894B0 8F848044 */  lw    $a0, %got(D_1001198C)($gp)
/* 004894B4 0320F809 */  jalr  $t9
/* 004894B8 2484198C */   addiu $a0, %lo(D_1001198C) # addiu $a0, $a0, 0x198c
/* 004894BC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004894C0 8F838CBC */  lw     $v1, %got(pcfdcur)($gp)
/* 004894C4 8C630000 */  lw    $v1, ($v1)
/* 004894C8 8C78003C */  lw    $t8, 0x3c($v1)
.L004894CC:
/* 004894CC 33190100 */  andi  $t9, $t8, 0x100
/* 004894D0 53200009 */  beql  $t9, $zero, .L004894F8
/* 004894D4 8C680000 */   lw    $t0, ($v1)
/* 004894D8 8F9987F0 */  lw    $t9, %call16(st_internal)($gp)
/* 004894DC 8F848044 */  lw    $a0, %got(D_100119C0)($gp)
/* 004894E0 0320F809 */  jalr  $t9
/* 004894E4 248419C0 */   addiu $a0, %lo(D_100119C0) # addiu $a0, $a0, 0x19c0
/* 004894E8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004894EC 8F838CBC */  lw     $v1, %got(pcfdcur)($gp)
/* 004894F0 8C630000 */  lw    $v1, ($v1)
/* 004894F4 8C680000 */  lw    $t0, ($v1)
.L004894F8:
/* 004894F8 8C690038 */  lw    $t1, 0x38($v1)
/* 004894FC 24650038 */  addiu $a1, $v1, 0x38
/* 00489500 9504002A */  lhu   $a0, 0x2a($t0)
/* 00489504 0089082B */  sltu  $at, $a0, $t1
/* 00489508 5420000F */  bnezl $at, .L00489548
/* 0048950C 24070034 */   li    $a3, 52
/* 00489510 8F9987B0 */  lw    $t9, %call16(st_malloc)($gp)
/* 00489514 8C640034 */  lw    $a0, 0x34($v1)
/* 00489518 24060034 */  li    $a2, 52
/* 0048951C 0320F809 */  jalr  $t9
/* 00489520 24070020 */   li    $a3, 32
/* 00489524 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00489528 8F8A8CBC */  lw     $t2, %got(pcfdcur)($gp)
/* 0048952C 8F838CBC */  lw     $v1, %got(pcfdcur)($gp)
/* 00489530 8D4A0000 */  lw    $t2, ($t2)
/* 00489534 AD420034 */  sw    $v0, 0x34($t2)
/* 00489538 8C630000 */  lw    $v1, ($v1)
/* 0048953C 8C6B0000 */  lw    $t3, ($v1)
/* 00489540 9564002A */  lhu   $a0, 0x2a($t3)
/* 00489544 24070034 */  li    $a3, 52
.L00489548:
/* 00489548 00870019 */  multu $a0, $a3
/* 0048954C 8F8F8048 */  lw    $t7, %got(B_1001C250)($gp)
/* 00489550 8C6C0034 */  lw    $t4, 0x34($v1)
/* 00489554 25EFC250 */  addiu $t7, %lo(B_1001C250) # addiu $t7, $t7, -0x3db0
/* 00489558 25E80030 */  addiu $t0, $t7, 0x30
/* 0048955C 00006812 */  mflo  $t5
/* 00489560 018D7021 */  addu  $t6, $t4, $t5
/* 00489564 00000000 */  nop   
.L00489568:
/* 00489568 8DF90000 */  lw    $t9, ($t7)
/* 0048956C 25EF000C */  addiu $t7, $t7, 0xc
/* 00489570 25CE000C */  addiu $t6, $t6, 0xc
/* 00489574 ADD9FFF4 */  sw    $t9, -0xc($t6)
/* 00489578 8DF8FFF8 */  lw    $t8, -8($t7)
/* 0048957C ADD8FFF8 */  sw    $t8, -8($t6)
/* 00489580 8DF9FFFC */  lw    $t9, -4($t7)
/* 00489584 15E8FFF8 */  bne   $t7, $t0, .L00489568
/* 00489588 ADD9FFFC */   sw    $t9, -4($t6)
/* 0048958C 8DF90000 */  lw    $t9, ($t7)
/* 00489590 8F838CBC */  lw     $v1, %got(pcfdcur)($gp)
/* 00489594 8F8F8CBC */  lw     $t7, %got(pcfdcur)($gp)
/* 00489598 ADD90000 */  sw    $t9, ($t6)
/* 0048959C 8C630000 */  lw    $v1, ($v1)
/* 004895A0 8FA90020 */  lw    $t1, 0x20($sp)
/* 004895A4 8C6B0000 */  lw    $t3, ($v1)
/* 004895A8 8C6A0034 */  lw    $t2, 0x34($v1)
/* 004895AC 956C002A */  lhu   $t4, 0x2a($t3)
/* 004895B0 01870019 */  multu $t4, $a3
/* 004895B4 00006812 */  mflo  $t5
/* 004895B8 014D4021 */  addu  $t0, $t2, $t5
/* 004895BC AD090004 */  sw    $t1, 4($t0)
/* 004895C0 8DEF0000 */  lw    $t7, ($t7)
/* 004895C4 8DE50000 */  lw    $a1, ($t7)
/* 004895C8 94A2002A */  lhu   $v0, 0x2a($a1)
/* 004895CC 244E0001 */  addiu $t6, $v0, 1
/* 004895D0 A4AE002A */  sh    $t6, 0x2a($a1)
/* 004895D4 8FBF001C */  lw    $ra, 0x1c($sp)
/* 004895D8 27BD0020 */  addiu $sp, $sp, 0x20
/* 004895DC 03E00008 */  jr    $ra
/* 004895E0 00000000 */   nop   
    .type st_pdadd, @function
    .size st_pdadd, .-st_pdadd
    .end st_pdadd

glabel st_lineadd
    .ent st_lineadd
/* 004895E4 3C1C0FB9 */  .cpload $t9
/* 004895E8 279C0CAC */  
/* 004895EC 0399E021 */  
/* 004895F0 8F8E8CB8 */  lw     $t6, %got(st_pchdr)($gp)
/* 004895F4 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 004895F8 AFBF001C */  sw    $ra, 0x1c($sp)
/* 004895FC 8DCE0000 */  lw    $t6, ($t6)
/* 00489600 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00489604 AFA40020 */  sw    $a0, 0x20($sp)
/* 00489608 8DCF0004 */  lw    $t7, 4($t6)
/* 0048960C 15E00006 */  bnez  $t7, .L00489628
/* 00489610 00000000 */   nop   
/* 00489614 8F9987F0 */  lw    $t9, %call16(st_internal)($gp)
/* 00489618 8F848044 */  lw    $a0, %got(D_10011950)($gp)
/* 0048961C 0320F809 */  jalr  $t9
/* 00489620 24841950 */   addiu $a0, %lo(D_10011950) # addiu $a0, $a0, 0x1950
/* 00489624 8FBC0018 */  lw    $gp, 0x18($sp)
.L00489628:
/* 00489628 8F838CBC */  lw     $v1, %got(pcfdcur)($gp)
/* 0048962C 8C630000 */  lw    $v1, ($v1)
/* 00489630 54600009 */  bnezl $v1, .L00489658
/* 00489634 8C78003C */   lw    $t8, 0x3c($v1)
/* 00489638 8F9987F0 */  lw    $t9, %call16(st_internal)($gp)
/* 0048963C 8F848044 */  lw    $a0, %got(D_1001198C)($gp)
/* 00489640 0320F809 */  jalr  $t9
/* 00489644 2484198C */   addiu $a0, %lo(D_1001198C) # addiu $a0, $a0, 0x198c
/* 00489648 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048964C 8F838CBC */  lw     $v1, %got(pcfdcur)($gp)
/* 00489650 8C630000 */  lw    $v1, ($v1)
/* 00489654 8C78003C */  lw    $t8, 0x3c($v1)
.L00489658:
/* 00489658 33190004 */  andi  $t9, $t8, 4
/* 0048965C 53200009 */  beql  $t9, $zero, .L00489684
/* 00489660 8C680000 */   lw    $t0, ($v1)
/* 00489664 8F9987F0 */  lw    $t9, %call16(st_internal)($gp)
/* 00489668 8F848044 */  lw    $a0, %got(D_100119C0)($gp)
/* 0048966C 0320F809 */  jalr  $t9
/* 00489670 248419C0 */   addiu $a0, %lo(D_100119C0) # addiu $a0, $a0, 0x19c0
/* 00489674 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00489678 8F838CBC */  lw     $v1, %got(pcfdcur)($gp)
/* 0048967C 8C630000 */  lw    $v1, ($v1)
/* 00489680 8C680000 */  lw    $t0, ($v1)
.L00489684:
/* 00489684 8C690028 */  lw    $t1, 0x28($v1)
/* 00489688 24650028 */  addiu $a1, $v1, 0x28
/* 0048968C 8D04001C */  lw    $a0, 0x1c($t0)
/* 00489690 0089082A */  slt   $at, $a0, $t1
/* 00489694 5420000F */  bnezl $at, .L004896D4
/* 00489698 8C6D0024 */   lw    $t5, 0x24($v1)
/* 0048969C 8F9987B0 */  lw    $t9, %call16(st_malloc)($gp)
/* 004896A0 8C640024 */  lw    $a0, 0x24($v1)
/* 004896A4 24060004 */  li    $a2, 4
/* 004896A8 0320F809 */  jalr  $t9
/* 004896AC 24070200 */   li    $a3, 512
/* 004896B0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004896B4 8F8A8CBC */  lw     $t2, %got(pcfdcur)($gp)
/* 004896B8 8F838CBC */  lw     $v1, %got(pcfdcur)($gp)
/* 004896BC 8D4A0000 */  lw    $t2, ($t2)
/* 004896C0 AD420024 */  sw    $v0, 0x24($t2)
/* 004896C4 8C630000 */  lw    $v1, ($v1)
/* 004896C8 8C6B0000 */  lw    $t3, ($v1)
/* 004896CC 8D64001C */  lw    $a0, 0x1c($t3)
/* 004896D0 8C6D0024 */  lw    $t5, 0x24($v1)
.L004896D4:
/* 004896D4 8FAC0020 */  lw    $t4, 0x20($sp)
/* 004896D8 8F988CBC */  lw     $t8, %got(pcfdcur)($gp)
/* 004896DC 00047080 */  sll   $t6, $a0, 2
/* 004896E0 01AE7821 */  addu  $t7, $t5, $t6
/* 004896E4 ADEC0000 */  sw    $t4, ($t7)
/* 004896E8 8F180000 */  lw    $t8, ($t8)
/* 004896EC 8F050000 */  lw    $a1, ($t8)
/* 004896F0 8CA2001C */  lw    $v0, 0x1c($a1)
/* 004896F4 24590001 */  addiu $t9, $v0, 1
/* 004896F8 ACB9001C */  sw    $t9, 0x1c($a1)
/* 004896FC 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00489700 27BD0020 */  addiu $sp, $sp, 0x20
/* 00489704 03E00008 */  jr    $ra
/* 00489708 00000000 */   nop   
    .type st_lineadd, @function
    .size st_lineadd, .-st_lineadd
    .end st_lineadd

glabel st_stradd
    .ent st_stradd
    # 00488C8C st_fdadd
    # 0048BC7C st_procbegin
/* 0048970C 3C1C0FB9 */  .cpload $t9
/* 00489710 279C0B84 */  
/* 00489714 0399E021 */  
/* 00489718 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0048971C AFBF0024 */  sw    $ra, 0x24($sp)
/* 00489720 AFBC0020 */  sw    $gp, 0x20($sp)
/* 00489724 AFB2001C */  sw    $s2, 0x1c($sp)
/* 00489728 AFB10018 */  sw    $s1, 0x18($sp)
/* 0048972C AFB00014 */  sw    $s0, 0x14($sp)
/* 00489730 14800006 */  bnez  $a0, .L0048974C
/* 00489734 AFA40028 */   sw    $a0, 0x28($sp)
/* 00489738 8F998788 */  lw    $t9, %call16(st_error)($gp)
/* 0048973C 8F848044 */  lw    $a0, %got(RO_1000ED84)($gp)
/* 00489740 0320F809 */  jalr  $t9
/* 00489744 2484ED84 */   addiu $a0, %lo(RO_1000ED84) # addiu $a0, $a0, -0x127c
/* 00489748 8FBC0020 */  lw    $gp, 0x20($sp)
.L0048974C:
/* 0048974C 8F9980C0 */  lw    $t9, %call16(strlen)($gp)
/* 00489750 8FA40028 */  lw    $a0, 0x28($sp)
/* 00489754 0320F809 */  jalr  $t9
/* 00489758 00000000 */   nop   
/* 0048975C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00489760 24520001 */  addiu $s2, $v0, 1
/* 00489764 8F8F8CB8 */  lw     $t7, %got(st_pchdr)($gp)
/* 00489768 8DEF0000 */  lw    $t7, ($t7)
/* 0048976C 8DF80004 */  lw    $t8, 4($t7)
/* 00489770 17000006 */  bnez  $t8, .L0048978C
/* 00489774 00000000 */   nop   
/* 00489778 8F9987F0 */  lw    $t9, %call16(st_internal)($gp)
/* 0048977C 8F848044 */  lw    $a0, %got(D_10011950)($gp)
/* 00489780 0320F809 */  jalr  $t9
/* 00489784 24841950 */   addiu $a0, %lo(D_10011950) # addiu $a0, $a0, 0x1950
/* 00489788 8FBC0020 */  lw    $gp, 0x20($sp)
.L0048978C:
/* 0048978C 8F918CBC */  lw     $s1, %got(pcfdcur)($gp)
/* 00489790 8E300000 */  lw    $s0, ($s1)
/* 00489794 56000008 */  bnezl $s0, .L004897B8
/* 00489798 8E19003C */   lw    $t9, 0x3c($s0)
/* 0048979C 8F9987F0 */  lw    $t9, %call16(st_internal)($gp)
/* 004897A0 8F848044 */  lw    $a0, %got(D_1001198C)($gp)
/* 004897A4 0320F809 */  jalr  $t9
/* 004897A8 2484198C */   addiu $a0, %lo(D_1001198C) # addiu $a0, $a0, 0x198c
/* 004897AC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004897B0 8E300000 */  lw    $s0, ($s1)
/* 004897B4 8E19003C */  lw    $t9, 0x3c($s0)
.L004897B8:
/* 004897B8 33280080 */  andi  $t0, $t9, 0x80
/* 004897BC 51000008 */  beql  $t0, $zero, .L004897E0
/* 004897C0 8E090000 */   lw    $t1, ($s0)
/* 004897C4 8F9987F0 */  lw    $t9, %call16(st_internal)($gp)
/* 004897C8 8F848044 */  lw    $a0, %got(D_100119C0)($gp)
/* 004897CC 0320F809 */  jalr  $t9
/* 004897D0 248419C0 */   addiu $a0, %lo(D_100119C0) # addiu $a0, $a0, 0x19c0
/* 004897D4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004897D8 8E300000 */  lw    $s0, ($s1)
/* 004897DC 8E090000 */  lw    $t1, ($s0)
.L004897E0:
/* 004897E0 8E0A0018 */  lw    $t2, 0x18($s0)
/* 004897E4 8D23000C */  lw    $v1, 0xc($t1)
/* 004897E8 00725821 */  addu  $t3, $v1, $s2
/* 004897EC 014B082A */  slt   $at, $t2, $t3
/* 004897F0 10200012 */  beqz  $at, .L0048983C
/* 004897F4 00000000 */   nop   
.L004897F8:
/* 004897F8 8F9987B0 */  lw    $t9, %call16(st_malloc)($gp)
/* 004897FC 8E040014 */  lw    $a0, 0x14($s0)
/* 00489800 26050018 */  addiu $a1, $s0, 0x18
/* 00489804 24060001 */  li    $a2, 1
/* 00489808 0320F809 */  jalr  $t9
/* 0048980C 24070200 */   li    $a3, 512
/* 00489810 8E2C0000 */  lw    $t4, ($s1)
/* 00489814 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00489818 AD820014 */  sw    $v0, 0x14($t4)
/* 0048981C 8E300000 */  lw    $s0, ($s1)
/* 00489820 8E0D0000 */  lw    $t5, ($s0)
/* 00489824 8E0E0018 */  lw    $t6, 0x18($s0)
/* 00489828 8DA3000C */  lw    $v1, 0xc($t5)
/* 0048982C 00727821 */  addu  $t7, $v1, $s2
/* 00489830 01CF082A */  slt   $at, $t6, $t7
/* 00489834 1420FFF0 */  bnez  $at, .L004897F8
/* 00489838 00000000 */   nop   
.L0048983C:
/* 0048983C 8F9980C4 */  lw    $t9, %call16(strcpy)($gp)
/* 00489840 8E180014 */  lw    $t8, 0x14($s0)
/* 00489844 8FA50028 */  lw    $a1, 0x28($sp)
/* 00489848 0320F809 */  jalr  $t9
/* 0048984C 03032021 */   addu  $a0, $t8, $v1
/* 00489850 8E390000 */  lw    $t9, ($s1)
/* 00489854 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00489858 8F240000 */  lw    $a0, ($t9)
/* 0048985C 8C82000C */  lw    $v0, 0xc($a0)
/* 00489860 00524021 */  addu  $t0, $v0, $s2
/* 00489864 AC88000C */  sw    $t0, 0xc($a0)
/* 00489868 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0048986C 8FB2001C */  lw    $s2, 0x1c($sp)
/* 00489870 8FB10018 */  lw    $s1, 0x18($sp)
/* 00489874 8FB00014 */  lw    $s0, 0x14($sp)
/* 00489878 03E00008 */  jr    $ra
/* 0048987C 27BD0028 */   addiu $sp, $sp, 0x28
    .type st_stradd, @function
    .size st_stradd, .-st_stradd
    .end st_stradd

glabel st_non_gp
    .ent st_non_gp
/* 00489880 8C8E0008 */  lw    $t6, 8($a0)
/* 00489884 2401001B */  li    $at, 27
/* 00489888 00001025 */  move  $v0, $zero
/* 0048988C 000E7980 */  sll   $t7, $t6, 6
/* 00489890 000FC6C2 */  srl   $t8, $t7, 0x1b
/* 00489894 17010003 */  bne   $t8, $at, .L004898A4
/* 00489898 00000000 */   nop   
/* 0048989C 03E00008 */  jr    $ra
/* 004898A0 24020001 */   li    $v0, 1

.L004898A4:
/* 004898A4 03E00008 */  jr    $ra
/* 004898A8 00000000 */   nop   
    .type st_non_gp, @function
    .size st_non_gp, .-st_non_gp
    .end st_non_gp

glabel st_set_non_gp
    .ent st_set_non_gp
/* 004898AC 948E0008 */  lhu   $t6, 8($a0)
/* 004898B0 31CFFC1F */  andi  $t7, $t6, 0xfc1f
/* 004898B4 35F80360 */  ori   $t8, $t7, 0x360
/* 004898B8 03E00008 */  jr    $ra
/* 004898BC A4980008 */   sh    $t8, 8($a0)
    .type st_set_non_gp, @function
    .size st_set_non_gp, .-st_set_non_gp
    .end st_set_non_gp

glabel st_paux_ifd_iaux
    .ent st_paux_ifd_iaux
    # 0040BAE0 func_0040BAE0
    # 0048C0B0 st_psym_idn_offset
    # 0048C888 st_iaux_copyty
/* 004898C0 3C1C0FB9 */  .cpload $t9
/* 004898C4 279C09D0 */  
/* 004898C8 0399E021 */  
/* 004898CC 8F8E8CB8 */  lw     $t6, %got(st_pchdr)($gp)
/* 004898D0 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 004898D4 AFBF001C */  sw    $ra, 0x1c($sp)
/* 004898D8 8DCE0000 */  lw    $t6, ($t6)
/* 004898DC AFBC0018 */  sw    $gp, 0x18($sp)
/* 004898E0 00803825 */  move  $a3, $a0
/* 004898E4 8DCF0004 */  lw    $t7, 4($t6)
/* 004898E8 00A03025 */  move  $a2, $a1
/* 004898EC 15E0000A */  bnez  $t7, .L00489918
/* 004898F0 00000000 */   nop   
/* 004898F4 8F9987F0 */  lw    $t9, %call16(st_internal)($gp)
/* 004898F8 8F848044 */  lw    $a0, %got(D_10011950)($gp)
/* 004898FC AFA5002C */  sw    $a1, 0x2c($sp)
/* 00489900 AFA70028 */  sw    $a3, 0x28($sp)
/* 00489904 0320F809 */  jalr  $t9
/* 00489908 24841950 */   addiu $a0, %lo(D_10011950) # addiu $a0, $a0, 0x1950
/* 0048990C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00489910 8FA6002C */  lw    $a2, 0x2c($sp)
/* 00489914 8FA70028 */  lw    $a3, 0x28($sp)
.L00489918:
/* 00489918 04E00011 */  bltz  $a3, .L00489960
/* 0048991C 00E02825 */   move  $a1, $a3
/* 00489920 04C0000F */  bltz  $a2, .L00489960
/* 00489924 00000000 */   nop   
/* 00489928 8F828CB8 */  lw     $v0, %got(st_pchdr)($gp)
/* 0048992C 8C420000 */  lw    $v0, ($v0)
/* 00489930 8C58000C */  lw    $t8, 0xc($v0)
/* 00489934 00F8082A */  slt   $at, $a3, $t8
/* 00489938 10200009 */  beqz  $at, .L00489960
/* 0048993C 00000000 */   nop   
/* 00489940 8C590004 */  lw    $t9, 4($v0)
/* 00489944 00074180 */  sll   $t0, $a3, 6
/* 00489948 03281821 */  addu  $v1, $t9, $t0
/* 0048994C 8C690000 */  lw    $t1, ($v1)
/* 00489950 8D2A0030 */  lw    $t2, 0x30($t1)
/* 00489954 00CA082A */  slt   $at, $a2, $t2
/* 00489958 54200010 */  bnezl $at, .L0048999C
/* 0048995C 8FBF001C */   lw    $ra, 0x1c($sp)
.L00489960:
/* 00489960 8F9987F0 */  lw    $t9, %call16(st_internal)($gp)
/* 00489964 8F848044 */  lw    $a0, %got(RO_1000EDA0)($gp)
/* 00489968 00075980 */  sll   $t3, $a3, 6
/* 0048996C AFAB0024 */  sw    $t3, 0x24($sp)
/* 00489970 AFA6002C */  sw    $a2, 0x2c($sp)
/* 00489974 0320F809 */  jalr  $t9
/* 00489978 2484EDA0 */   addiu $a0, %lo(RO_1000EDA0) # addiu $a0, $a0, -0x1260
/* 0048997C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00489980 8FAE0024 */  lw    $t6, 0x24($sp)
/* 00489984 8FA6002C */  lw    $a2, 0x2c($sp)
/* 00489988 8F8C8CB8 */  lw     $t4, %got(st_pchdr)($gp)
/* 0048998C 8D8C0000 */  lw    $t4, ($t4)
/* 00489990 8D8D0004 */  lw    $t5, 4($t4)
/* 00489994 01AE1821 */  addu  $v1, $t5, $t6
/* 00489998 8FBF001C */  lw    $ra, 0x1c($sp)
.L0048999C:
/* 0048999C 8C6F000C */  lw    $t7, 0xc($v1)
/* 004899A0 0006C080 */  sll   $t8, $a2, 2
/* 004899A4 27BD0028 */  addiu $sp, $sp, 0x28
/* 004899A8 03E00008 */  jr    $ra
/* 004899AC 01F81021 */   addu  $v0, $t7, $t8
    .type st_paux_ifd_iaux, @function
    .size st_paux_ifd_iaux, .-st_paux_ifd_iaux
    .end st_paux_ifd_iaux

glabel st_pline_ifd_iline
    .ent st_pline_ifd_iline
/* 004899B0 3C1C0FB9 */  .cpload $t9
/* 004899B4 279C08E0 */  
/* 004899B8 0399E021 */  
/* 004899BC 8F8E8CB8 */  lw     $t6, %got(st_pchdr)($gp)
/* 004899C0 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 004899C4 AFBF001C */  sw    $ra, 0x1c($sp)
/* 004899C8 8DCE0000 */  lw    $t6, ($t6)
/* 004899CC AFBC0018 */  sw    $gp, 0x18($sp)
/* 004899D0 00803825 */  move  $a3, $a0
/* 004899D4 8DCF0004 */  lw    $t7, 4($t6)
/* 004899D8 00A03025 */  move  $a2, $a1
/* 004899DC 15E0000A */  bnez  $t7, .L00489A08
/* 004899E0 00000000 */   nop   
/* 004899E4 8F9987F0 */  lw    $t9, %call16(st_internal)($gp)
/* 004899E8 8F848044 */  lw    $a0, %got(D_10011950)($gp)
/* 004899EC AFA5002C */  sw    $a1, 0x2c($sp)
/* 004899F0 AFA70028 */  sw    $a3, 0x28($sp)
/* 004899F4 0320F809 */  jalr  $t9
/* 004899F8 24841950 */   addiu $a0, %lo(D_10011950) # addiu $a0, $a0, 0x1950
/* 004899FC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00489A00 8FA6002C */  lw    $a2, 0x2c($sp)
/* 00489A04 8FA70028 */  lw    $a3, 0x28($sp)
.L00489A08:
/* 00489A08 04E00011 */  bltz  $a3, .L00489A50
/* 00489A0C 00E02825 */   move  $a1, $a3
/* 00489A10 04C0000F */  bltz  $a2, .L00489A50
/* 00489A14 00000000 */   nop   
/* 00489A18 8F828CB8 */  lw     $v0, %got(st_pchdr)($gp)
/* 00489A1C 8C420000 */  lw    $v0, ($v0)
/* 00489A20 8C58000C */  lw    $t8, 0xc($v0)
/* 00489A24 00F8082A */  slt   $at, $a3, $t8
/* 00489A28 10200009 */  beqz  $at, .L00489A50
/* 00489A2C 00000000 */   nop   
/* 00489A30 8C590004 */  lw    $t9, 4($v0)
/* 00489A34 00074180 */  sll   $t0, $a3, 6
/* 00489A38 03281821 */  addu  $v1, $t9, $t0
/* 00489A3C 8C690000 */  lw    $t1, ($v1)
/* 00489A40 8D2A001C */  lw    $t2, 0x1c($t1)
/* 00489A44 00CA082A */  slt   $at, $a2, $t2
/* 00489A48 54200010 */  bnezl $at, .L00489A8C
/* 00489A4C 8FBF001C */   lw    $ra, 0x1c($sp)
.L00489A50:
/* 00489A50 8F9987F0 */  lw    $t9, %call16(st_internal)($gp)
/* 00489A54 8F848044 */  lw    $a0, %got(RO_1000EDD8)($gp)
/* 00489A58 00075980 */  sll   $t3, $a3, 6
/* 00489A5C AFAB0024 */  sw    $t3, 0x24($sp)
/* 00489A60 AFA6002C */  sw    $a2, 0x2c($sp)
/* 00489A64 0320F809 */  jalr  $t9
/* 00489A68 2484EDD8 */   addiu $a0, %lo(RO_1000EDD8) # addiu $a0, $a0, -0x1228
/* 00489A6C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00489A70 8FAE0024 */  lw    $t6, 0x24($sp)
/* 00489A74 8FA6002C */  lw    $a2, 0x2c($sp)
/* 00489A78 8F8C8CB8 */  lw     $t4, %got(st_pchdr)($gp)
/* 00489A7C 8D8C0000 */  lw    $t4, ($t4)
/* 00489A80 8D8D0004 */  lw    $t5, 4($t4)
/* 00489A84 01AE1821 */  addu  $v1, $t5, $t6
/* 00489A88 8FBF001C */  lw    $ra, 0x1c($sp)
.L00489A8C:
/* 00489A8C 8C6F0024 */  lw    $t7, 0x24($v1)
/* 00489A90 0006C080 */  sll   $t8, $a2, 2
/* 00489A94 27BD0028 */  addiu $sp, $sp, 0x28
/* 00489A98 03E00008 */  jr    $ra
/* 00489A9C 01F81021 */   addu  $v0, $t7, $t8
    .type st_pline_ifd_iline, @function
    .size st_pline_ifd_iline, .-st_pline_ifd_iline
    .end st_pline_ifd_iline

glabel st_str_iss
    .ent st_str_iss
    # 00489CA0 st_symadd
/* 00489AA0 3C1C0FB9 */  .cpload $t9
/* 00489AA4 279C07F0 */  
/* 00489AA8 0399E021 */  
/* 00489AAC 8F8E8CB8 */  lw     $t6, %got(st_pchdr)($gp)
/* 00489AB0 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00489AB4 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00489AB8 8DCE0000 */  lw    $t6, ($t6)
/* 00489ABC AFBC0018 */  sw    $gp, 0x18($sp)
/* 00489AC0 AFA40020 */  sw    $a0, 0x20($sp)
/* 00489AC4 8DCF0004 */  lw    $t7, 4($t6)
/* 00489AC8 15E00006 */  bnez  $t7, .L00489AE4
/* 00489ACC 00000000 */   nop   
/* 00489AD0 8F9987F0 */  lw    $t9, %call16(st_internal)($gp)
/* 00489AD4 8F848044 */  lw    $a0, %got(D_10011950)($gp)
/* 00489AD8 0320F809 */  jalr  $t9
/* 00489ADC 24841950 */   addiu $a0, %lo(D_10011950) # addiu $a0, $a0, 0x1950
/* 00489AE0 8FBC0018 */  lw    $gp, 0x18($sp)
.L00489AE4:
/* 00489AE4 8F838CBC */  lw     $v1, %got(pcfdcur)($gp)
/* 00489AE8 8C630000 */  lw    $v1, ($v1)
/* 00489AEC 54600009 */  bnezl $v1, .L00489B14
/* 00489AF0 8C780000 */   lw    $t8, ($v1)
/* 00489AF4 8F9987F0 */  lw    $t9, %call16(st_internal)($gp)
/* 00489AF8 8F848044 */  lw    $a0, %got(D_1001198C)($gp)
/* 00489AFC 0320F809 */  jalr  $t9
/* 00489B00 2484198C */   addiu $a0, %lo(D_1001198C) # addiu $a0, $a0, 0x198c
/* 00489B04 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00489B08 8F838CBC */  lw     $v1, %got(pcfdcur)($gp)
/* 00489B0C 8C630000 */  lw    $v1, ($v1)
/* 00489B10 8C780000 */  lw    $t8, ($v1)
.L00489B14:
/* 00489B14 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00489B18 8F02000C */  lw    $v0, 0xc($t8)
/* 00489B1C 5040000A */  beql  $v0, $zero, .L00489B48
/* 00489B20 00001025 */   move  $v0, $zero
/* 00489B24 8FB90020 */  lw    $t9, 0x20($sp)
/* 00489B28 8FA90020 */  lw    $t1, 0x20($sp)
/* 00489B2C 0322082A */  slt   $at, $t9, $v0
/* 00489B30 50200005 */  beql  $at, $zero, .L00489B48
/* 00489B34 00001025 */   move  $v0, $zero
/* 00489B38 8C680014 */  lw    $t0, 0x14($v1)
/* 00489B3C 10000002 */  b     .L00489B48
/* 00489B40 01091021 */   addu  $v0, $t0, $t1
/* 00489B44 00001025 */  move  $v0, $zero
.L00489B48:
/* 00489B48 03E00008 */  jr    $ra
/* 00489B4C 27BD0020 */   addiu $sp, $sp, 0x20
    .type st_str_iss, @function
    .size st_str_iss, .-st_str_iss
    .end st_str_iss

glabel st_malloc
    .ent st_malloc
    # 00488434 st_extstradd
    # 00488590 st_idn_dn
    # 004886A8 st_idn_rndx
    # 00488C8C st_fdadd
    # 0048932C st_auxadd
    # 00489458 st_pdadd
    # 004895E4 st_lineadd
    # 0048970C st_stradd
    # 0048AE84 st_filebegin
    # 0048B590 _sgi_st_blockbegin
    # 0048B6E8 st_blockbegin
    # 0048D0E0 st_readst
/* 00489B50 3C1C0FB9 */  .cpload $t9
/* 00489B54 279C0740 */  
/* 00489B58 0399E021 */  
/* 00489B5C 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 00489B60 AFBF0024 */  sw    $ra, 0x24($sp)
/* 00489B64 AFBC0020 */  sw    $gp, 0x20($sp)
/* 00489B68 AFB1001C */  sw    $s1, 0x1c($sp)
/* 00489B6C AFB00018 */  sw    $s0, 0x18($sp)
/* 00489B70 AFA60030 */  sw    $a2, 0x30($sp)
/* 00489B74 8CA20000 */  lw    $v0, ($a1)
/* 00489B78 00A08025 */  move  $s0, $a1
/* 00489B7C 00808825 */  move  $s1, $a0
/* 00489B80 10400005 */  beqz  $v0, .L00489B98
/* 00489B84 00000000 */   nop   
/* 00489B88 10800003 */  beqz  $a0, .L00489B98
/* 00489B8C 2401FFFF */   li    $at, -1
/* 00489B90 14810027 */  bne   $a0, $at, .L00489C30
/* 00489B94 00024040 */   sll   $t0, $v0, 1
.L00489B98:
/* 00489B98 14E0000F */  bnez  $a3, .L00489BD8
/* 00489B9C AE070000 */   sw    $a3, ($s0)
/* 00489BA0 8F9980C8 */  lw    $t9, %call16(malloc)($gp)
/* 00489BA4 24040001 */  li    $a0, 1
/* 00489BA8 0320F809 */  jalr  $t9
/* 00489BAC 00000000 */   nop   
/* 00489BB0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00489BB4 14400006 */  bnez  $v0, .L00489BD0
/* 00489BB8 00408825 */   move  $s1, $v0
/* 00489BBC 8F998788 */  lw    $t9, %call16(st_error)($gp)
/* 00489BC0 8F848044 */  lw    $a0, %got(RO_1000EE10)($gp)
/* 00489BC4 0320F809 */  jalr  $t9
/* 00489BC8 2484EE10 */   addiu $a0, %lo(RO_1000EE10) # addiu $a0, $a0, -0x11f0
/* 00489BCC 8FBC0020 */  lw    $gp, 0x20($sp)
.L00489BD0:
/* 00489BD0 1000002D */  b     .L00489C88
/* 00489BD4 02201025 */   move  $v0, $s1
.L00489BD8:
/* 00489BD8 8E0E0000 */  lw    $t6, ($s0)
/* 00489BDC 8FAF0030 */  lw    $t7, 0x30($sp)
/* 00489BE0 8F9980C8 */  lw    $t9, %call16(malloc)($gp)
/* 00489BE4 01CF0019 */  multu $t6, $t7
/* 00489BE8 00002012 */  mflo  $a0
/* 00489BEC 0320F809 */  jalr  $t9
/* 00489BF0 00000000 */   nop   
/* 00489BF4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00489BF8 14400022 */  bnez  $v0, .L00489C84
/* 00489BFC 00408825 */   move  $s1, $v0
/* 00489C00 8E180000 */  lw    $t8, ($s0)
/* 00489C04 8FB90030 */  lw    $t9, 0x30($sp)
/* 00489C08 03190019 */  multu $t8, $t9
/* 00489C0C 00002812 */  mflo  $a1
/* 00489C10 50A0001D */  beql  $a1, $zero, .L00489C88
/* 00489C14 02201025 */   move  $v0, $s1
/* 00489C18 8F998788 */  lw    $t9, %call16(st_error)($gp)
/* 00489C1C 8F848044 */  lw    $a0, %got(RO_1000EE4C)($gp)
/* 00489C20 0320F809 */  jalr  $t9
/* 00489C24 2484EE4C */   addiu $a0, %lo(RO_1000EE4C) # addiu $a0, $a0, -0x11b4
/* 00489C28 10000016 */  b     .L00489C84
/* 00489C2C 8FBC0020 */   lw    $gp, 0x20($sp)
.L00489C30:
/* 00489C30 AE080000 */  sw    $t0, ($s0)
/* 00489C34 8FAA0030 */  lw    $t2, 0x30($sp)
/* 00489C38 8F9980E8 */  lw    $t9, %call16(realloc)($gp)
/* 00489C3C 02202025 */  move  $a0, $s1
/* 00489C40 010A0019 */  multu $t0, $t2
/* 00489C44 00002812 */  mflo  $a1
/* 00489C48 0320F809 */  jalr  $t9
/* 00489C4C 00000000 */   nop   
/* 00489C50 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00489C54 1440000B */  bnez  $v0, .L00489C84
/* 00489C58 00408825 */   move  $s1, $v0
/* 00489C5C 8E0B0000 */  lw    $t3, ($s0)
/* 00489C60 8FAC0030 */  lw    $t4, 0x30($sp)
/* 00489C64 8F998788 */  lw    $t9, %call16(st_error)($gp)
/* 00489C68 8F848044 */  lw    $a0, %got(RO_1000EE8C)($gp)
/* 00489C6C 016C0019 */  multu $t3, $t4
/* 00489C70 2484EE8C */  addiu $a0, %lo(RO_1000EE8C) # addiu $a0, $a0, -0x1174
/* 00489C74 00002812 */  mflo  $a1
/* 00489C78 0320F809 */  jalr  $t9
/* 00489C7C 00000000 */   nop   
/* 00489C80 8FBC0020 */  lw    $gp, 0x20($sp)
.L00489C84:
/* 00489C84 02201025 */  move  $v0, $s1
.L00489C88:
/* 00489C88 8FBF0024 */  lw    $ra, 0x24($sp)
/* 00489C8C 8FB00018 */  lw    $s0, 0x18($sp)
/* 00489C90 8FB1001C */  lw    $s1, 0x1c($sp)
/* 00489C94 03E00008 */  jr    $ra
/* 00489C98 27BD0028 */   addiu $sp, $sp, 0x28
    .type st_malloc, @function
    .size st_malloc, .-st_malloc
    .end st_malloc
)"");
