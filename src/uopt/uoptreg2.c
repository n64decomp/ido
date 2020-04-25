__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
    .balign 4
jtbl_1000D610:
    # 004638C0 regdataflow
    .gpword .L00463DD0
    .gpword .L00463C84
    .gpword .L00463C84

RO_1000D61C:
    # 00465E50 spilltemps
    .ascii "uoptreg2.p"

RO_1000D626:
    # 00465E50 spilltemps
    .ascii "uoptreg2.p"

    .balign 4
jtbl_1000D630:
    # 00465E50 spilltemps
    .gpword .L004661D0
    .gpword .L00466198
    .gpword .L004661B4

    .balign 4
jtbl_1000D63C:
    # 00465E50 spilltemps
    .gpword .L00466480
    .gpword .L00466474
    .gpword .L00466468

RO_1000D648:
    # 00467C34 needsplit
    .asciz " impossible to color "

    .balign 4
RO_1000D660:
    # 00467C34 needsplit
    .byte 0x3e,0x4c,0xcc,0xcd # 0.200000

RO_1000D664:
    # 00467F04 split
    .ascii " split out"

RO_1000D66E:
    # 00467F04 split
    .ascii "live range"

RO_1000D678:
    # 00467F04 split
    .ascii " not colored, not splittable"

    .balign 4
RO_1000D694:
    # 00468A14 cupcosts
    .byte 0x60,0xad,0x78,0xec # 100000002004087734272.000000

    .balign 4
RO_1000D698:
    # 00468A14 cupcosts
    .byte 0x60,0xad,0x78,0xec # 100000002004087734272.000000

    .balign 4
RO_1000D69C:
    # 00468A14 cupcosts
    .byte 0x60,0xad,0x78,0xec # 100000002004087734272.000000

    .balign 4
RO_1000D6A0:
    # 00468A14 cupcosts
    .byte 0x60,0xad,0x78,0xec # 100000002004087734272.000000

RO_1000D6A4:
    # 00469280 globalcolor
    .ascii "@ coloredparms "

RO_1000D6B3:
    # 00469280 globalcolor
    .ascii "@ asgneqv "

RO_1000D6BD:
    # 00469280 globalcolor
    .ascii "@ vareqv "

RO_1000D6C6:
    # 00469280 globalcolor
    .ascii "@ unconstrain "

RO_1000D6D4:
    # 00469280 globalcolor
    .ascii "@ colorcand"

RO_1000D6DF:
    # 00469280 globalcolor
    .ascii "@ iscolored 2"

RO_1000D6EC:
    # 00469280 globalcolor
    .ascii "@ iscolored 1"

RO_1000D6F9:
    # 00469280 globalcolor
    .ascii " assigned (unconstrained)"

RO_1000D712:
    # 00469280 globalcolor
    .ascii " assigned (constrained)"

RO_1000D729:
    # 00469280 globalcolor
    .ascii " not colored (-ve save)"

    .balign 4
RO_1000D740:
    # 00469280 globalcolor
    .byte 0x60,0xad,0x78,0xec # 100000002004087734272.000000

    .balign 4
RO_1000D744:
    # 00469280 globalcolor
    .byte 0xc5,0x50,0x50,0x00 # -3333.000000

    .balign 4
RO_1000D748:
    # 00469280 globalcolor
    .byte 0x60,0xad,0x78,0xec,0x00,0x00,0x00,0x00 # 100000002004087734272.000000

.data
D_10010F20:
    # 004638C0 regdataflow
    .byte 0x00,0x00,0x01,0x00,0x00,0x08,0x00,0x00

D_10010F28:
    # 004638C0 regdataflow
    .byte 0x00,0x00,0x81,0x00,0x00,0x08,0x00,0x00

D_10010F30:
    # 00464778 prehascup
    .byte 0x00,0x00,0x81,0x00,0x00,0x08,0x00,0x00

D_10010F38:
    # 00464848 func_00464848
    .byte 0x00,0x00,0x81,0x00,0x00,0x08,0x00,0x00

D_10010F40:
    # 00464BFC localcolor
    .byte 0x00,0x00,0x81,0x00,0x00,0x08,0x00,0x00

D_10010F48:
    # 00466DF8 allpreppout
    .byte 0x02,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x08,0x00,0x00

D_10010F58:
    # 00466DF8 allpreppout
    .byte 0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00

D_10010F68:
    # 004675F0 canmoverlod
    .byte 0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00

D_10010F78:
    # 00467BD0 is_cup_affecting_regs
    .byte 0x00,0x00,0x80,0x00,0x00,0x08,0x00,0x00

D_10010F80:
    # 00468A14 cupcosts
    .byte 0x00,0x00,0x81,0x00,0x00,0x08,0x00,0x00

D_10010F88:
    # 00469280 globalcolor
    .byte 0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00

D_10010F98:
    # 00469280 globalcolor
    .byte 0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01

D_10010FA4:
    # 00469280 globalcolor
    .byte 0x00,0x00,0x01,0x00,0x00,0x08,0x00,0x00

D_10010FAC:
    # 00469280 globalcolor
    .byte 0x00,0x00,0x81,0x00,0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00



.bss
    .balign 4
# 1001C630
glabel numofsplits
    # 00469280 globalcolor
    .space 4
    .size numofsplits, 4
    .type numofsplits, @object

    .balign 4
# 1001C634
glabel bbtab
    # 00464BFC localcolor
    # 00467008 updatelivran
    # 0046791C whyuncolored
    # 00467F04 split
    # 00468A14 cupcosts
    # 00469280 globalcolor
    .space 4
    .size bbtab, 4
    .type bbtab, @object

    .balign 4
# 1001C638
glabel formingtab
    # 00464BFC localcolor
    # 004669A8 addadjacents
    # 00467F04 split
    .space 4
    .size formingtab, 4
    .type formingtab, @object

    .balign 4
# 1001C63C
glabel forminginx
    # 004669A8 addadjacents
    # 00467F04 split
    .space 4
    .size forminginx, 4
    .type forminginx, @object

    .balign 4
# 1001C640
glabel formingmax
    # 004669A8 addadjacents
    # 00467F04 split
    .space 4
    .size formingmax, 4
    .type formingmax, @object

    .balign 8
# 1001C7D8
glabel unconstrain
    # 00467C34 needsplit
    # 00467F04 split
    # 00469280 globalcolor
    .space 8
    .size unconstrain, 8
    .type unconstrain, @object

    .balign 8
# 1001C7E0
glabel colorcand
    # 00467C34 needsplit
    # 00467F04 split
    # 00469280 globalcolor
    .space 8
    .size colorcand, 8
    .type colorcand, @object

    .balign 8
# 1001C7E8
glabel livrantemp
    # 00464BFC localcolor
    # 00465D30 intfering
    # 004673B0 func_004673B0
    # 00467514 contiguous
    .space 8
    .size livrantemp, 8
    .type livrantemp, @object


.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
glabel regdataflow
    .ent regdataflow
    # 00456A2C oneproc
/* 004638C0 3C1C0FBB */  .cpload $t9
/* 004638C4 279C69D0 */  
/* 004638C8 0399E021 */  
/* 004638CC 27BDFF68 */  addiu $sp, $sp, -0x98
/* 004638D0 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 004638D4 AFB60034 */  sw    $s6, 0x34($sp)
/* 004638D8 8F968D2C */  lw     $s6, %got(old)($gp)
/* 004638DC AFBF0044 */  sw    $ra, 0x44($sp)
/* 004638E0 AFBE0040 */  sw    $fp, 0x40($sp)
/* 004638E4 AFBC003C */  sw    $gp, 0x3c($sp)
/* 004638E8 AFB70038 */  sw    $s7, 0x38($sp)
/* 004638EC AFB50030 */  sw    $s5, 0x30($sp)
/* 004638F0 AFB4002C */  sw    $s4, 0x2c($sp)
/* 004638F4 AFB30028 */  sw    $s3, 0x28($sp)
/* 004638F8 AFB20024 */  sw    $s2, 0x24($sp)
/* 004638FC AFB10020 */  sw    $s1, 0x20($sp)
/* 00463900 AFB0001C */  sw    $s0, 0x1c($sp)
/* 00463904 0320F809 */  jalr  $t9
/* 00463908 02C02025 */   move  $a0, $s6
/* 0046390C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00463910 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 00463914 8F848D28 */  lw     $a0, %got(iscolored12)($gp)
/* 00463918 0320F809 */  jalr  $t9
/* 0046391C 00000000 */   nop   
/* 00463920 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00463924 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 00463928 8F848D78 */  lw     $a0, %got(iscolored)($gp)
/* 0046392C 0320F809 */  jalr  $t9
/* 00463930 00000000 */   nop   
/* 00463934 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00463938 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 0046393C 8F848D78 */  lw     $a0, %got(iscolored)($gp)
/* 00463940 0320F809 */  jalr  $t9
/* 00463944 24840008 */   addiu $a0, $a0, 8
/* 00463948 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0046394C 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 00463950 8F848CD4 */  lw     $a0, %got(varbits)($gp)
/* 00463954 0320F809 */  jalr  $t9
/* 00463958 00000000 */   nop   
/* 0046395C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00463960 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 00463964 8F848CD8 */  lw     $a0, %got(mvarbits)($gp)
/* 00463968 0320F809 */  jalr  $t9
/* 0046396C 00000000 */   nop   
/* 00463970 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00463974 8F8E8CDC */  lw     $t6, %got(fsymbits)($gp)
/* 00463978 8DCE0000 */  lw    $t6, ($t6)
/* 0046397C 11C00006 */  beqz  $t6, .L00463998
/* 00463980 00000000 */   nop   
/* 00463984 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 00463988 8F848CDC */  lw     $a0, %got(fsymbits)($gp)
/* 0046398C 0320F809 */  jalr  $t9
/* 00463990 00000000 */   nop   
/* 00463994 8FBC003C */  lw    $gp, 0x3c($sp)
.L00463998:
/* 00463998 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 0046399C 8F848D0C */  lw     $a0, %got(outmodebits)($gp)
/* 004639A0 0320F809 */  jalr  $t9
/* 004639A4 00000000 */   nop   
/* 004639A8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004639AC 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 004639B0 8F848D10 */  lw     $a0, %got(notinmodebits)($gp)
/* 004639B4 0320F809 */  jalr  $t9
/* 004639B8 00000000 */   nop   
/* 004639BC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004639C0 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 004639C4 8F848D18 */  lw     $a0, %got(coloreditems)($gp)
/* 004639C8 0320F809 */  jalr  $t9
/* 004639CC 00000000 */   nop   
/* 004639D0 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004639D4 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 004639D8 8F848D24 */  lw     $a0, %got(coloredparms)($gp)
/* 004639DC 0320F809 */  jalr  $t9
/* 004639E0 00000000 */   nop   
/* 004639E4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004639E8 8F9489AC */  lw     $s4, %got(graphhead)($gp)
/* 004639EC 8E940000 */  lw    $s4, ($s4)
/* 004639F0 12800108 */  beqz  $s4, .L00463E14
/* 004639F4 00000000 */   nop   
/* 004639F8 241E0001 */  li    $fp, 1
/* 004639FC 8F97897C */  lw     $s7, %got(curlevel)($gp)
/* 00463A00 8F9589EC */  lw     $s5, %got(bittab)($gp)
.L00463A04:
/* 00463A04 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 00463A08 26840104 */  addiu $a0, $s4, 0x104
/* 00463A0C 0320F809 */  jalr  $t9
/* 00463A10 00000000 */   nop   
/* 00463A14 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00463A18 26840114 */  addiu $a0, $s4, 0x114
/* 00463A1C AFA40054 */  sw    $a0, 0x54($sp)
/* 00463A20 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 00463A24 0320F809 */  jalr  $t9
/* 00463A28 00000000 */   nop   
/* 00463A2C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00463A30 2684010C */  addiu $a0, $s4, 0x10c
/* 00463A34 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 00463A38 0320F809 */  jalr  $t9
/* 00463A3C 00000000 */   nop   
/* 00463A40 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00463A44 2693012C */  addiu $s3, $s4, 0x12c
/* 00463A48 02602025 */  move  $a0, $s3
/* 00463A4C 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 00463A50 0320F809 */  jalr  $t9
/* 00463A54 00000000 */   nop   
/* 00463A58 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00463A5C 268400F4 */  addiu $a0, $s4, 0xf4
/* 00463A60 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 00463A64 0320F809 */  jalr  $t9
/* 00463A68 00000000 */   nop   
/* 00463A6C 8E8F0020 */  lw    $t7, 0x20($s4)
/* 00463A70 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00463A74 91F80000 */  lbu   $t8, ($t7)
/* 00463A78 2F190040 */  sltiu $t9, $t8, 0x40
/* 00463A7C 13200009 */  beqz  $t9, .L00463AA4
/* 00463A80 00000000 */   nop   
/* 00463A84 8F8A8044 */  lw    $t2, %got(D_10010F28)($gp)
/* 00463A88 00184143 */  sra   $t0, $t8, 5
/* 00463A8C 00084880 */  sll   $t1, $t0, 2
/* 00463A90 254A0F28 */  addiu $t2, %lo(D_10010F28) # addiu $t2, $t2, 0xf28
/* 00463A94 01495821 */  addu  $t3, $t2, $t1
/* 00463A98 8D6C0000 */  lw    $t4, ($t3)
/* 00463A9C 030C6804 */  sllv  $t5, $t4, $t8
/* 00463AA0 29B90000 */  slti  $t9, $t5, 0
.L00463AA4:
/* 00463AA4 132000CA */  beqz  $t9, .L00463DD0
/* 00463AA8 00000000 */   nop   
/* 00463AAC 8F998194 */  lw    $t9, %call16(bvectcopy)($gp)
/* 00463AB0 02602025 */  move  $a0, $s3
/* 00463AB4 8F858D28 */  lw     $a1, %got(iscolored12)($gp)
/* 00463AB8 0320F809 */  jalr  $t9
/* 00463ABC 00000000 */   nop   
/* 00463AC0 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00463AC4 02602025 */  move  $a0, $s3
/* 00463AC8 8F9981A8 */  lw    $t9, %call16(bvectintsect)($gp)
/* 00463ACC 8F858CD4 */  lw     $a1, %got(varbits)($gp)
/* 00463AD0 0320F809 */  jalr  $t9
/* 00463AD4 00000000 */   nop   
/* 00463AD8 8E820020 */  lw    $v0, 0x20($s4)
/* 00463ADC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00463AE0 904F0000 */  lbu   $t7, ($v0)
/* 00463AE4 2DE80040 */  sltiu $t0, $t7, 0x40
/* 00463AE8 11000009 */  beqz  $t0, .L00463B10
/* 00463AEC 00000000 */   nop   
/* 00463AF0 8F8B8044 */  lw    $t3, %got(D_10010F20)($gp)
/* 00463AF4 000F5143 */  sra   $t2, $t7, 5
/* 00463AF8 000A4880 */  sll   $t1, $t2, 2
/* 00463AFC 256B0F20 */  addiu $t3, %lo(D_10010F20) # addiu $t3, $t3, 0xf20
/* 00463B00 01696021 */  addu  $t4, $t3, $t1
/* 00463B04 8D980000 */  lw    $t8, ($t4)
/* 00463B08 01F86804 */  sllv  $t5, $t8, $t7
/* 00463B0C 29A80000 */  slti  $t0, $t5, 0
.L00463B10:
/* 00463B10 1100007B */  beqz  $t0, .L00463D00
/* 00463B14 00000000 */   nop   
/* 00463B18 8F9289E0 */  lw     $s2, %got(bitposcount)($gp)
/* 00463B1C 00008825 */  move  $s1, $zero
/* 00463B20 8E520000 */  lw    $s2, ($s2)
/* 00463B24 2652FFFF */  addiu $s2, $s2, -1
/* 00463B28 0640004A */  bltz  $s2, .L00463C54
/* 00463B2C 26520001 */   addiu $s2, $s2, 1
.L00463B30:
/* 00463B30 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00463B34 02202025 */  move  $a0, $s1
/* 00463B38 02602825 */  move  $a1, $s3
/* 00463B3C 0320F809 */  jalr  $t9
/* 00463B40 00000000 */   nop   
/* 00463B44 1040003F */  beqz  $v0, .L00463C44
/* 00463B48 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00463B4C 8EB90000 */  lw    $t9, ($s5)
/* 00463B50 001150C0 */  sll   $t2, $s1, 3
/* 00463B54 032A5821 */  addu  $t3, $t9, $t2
/* 00463B58 8D700000 */  lw    $s0, ($t3)
/* 00463B5C 92090016 */  lbu   $t1, 0x16($s0)
/* 00463B60 312C0007 */  andi  $t4, $t1, 7
/* 00463B64 57CC0021 */  bnel  $fp, $t4, .L00463BEC
/* 00463B68 8E820020 */   lw    $v0, 0x20($s4)
/* 00463B6C 8F9889C8 */  lw     $t8, %got(staticlinkloc)($gp)
/* 00463B70 8E0F0010 */  lw    $t7, 0x10($s0)
/* 00463B74 8F180000 */  lw    $t8, ($t8)
/* 00463B78 570F001C */  bnel  $t8, $t7, .L00463BEC
/* 00463B7C 8E820020 */   lw    $v0, 0x20($s4)
/* 00463B80 8EED0000 */  lw    $t5, ($s7)
/* 00463B84 8E0E0008 */  lw    $t6, 8($s0)
/* 00463B88 A1CD002F */  sb    $t5, 0x2f($t6)
/* 00463B8C 8F9983A4 */  lw    $t9, %call16(clkilled)($gp)
/* 00463B90 8E820020 */  lw    $v0, 0x20($s4)
/* 00463B94 8E060008 */  lw    $a2, 8($s0)
/* 00463B98 90440019 */  lbu   $a0, 0x19($v0)
/* 00463B9C 0320F809 */  jalr  $t9
/* 00463BA0 8C450014 */   lw    $a1, 0x14($v0)
/* 00463BA4 14400027 */  bnez  $v0, .L00463C44
/* 00463BA8 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00463BAC 8F9983B8 */  lw    $t9, %call16(listplkilled)($gp)
/* 00463BB0 8E880020 */  lw    $t0, 0x20($s4)
/* 00463BB4 8E050008 */  lw    $a1, 8($s0)
/* 00463BB8 03C03025 */  move  $a2, $fp
/* 00463BBC 0320F809 */  jalr  $t9
/* 00463BC0 8D040024 */   lw    $a0, 0x24($t0)
/* 00463BC4 1440001F */  bnez  $v0, .L00463C44
/* 00463BC8 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00463BCC 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 00463BD0 02602025 */  move  $a0, $s3
/* 00463BD4 02202825 */  move  $a1, $s1
/* 00463BD8 0320F809 */  jalr  $t9
/* 00463BDC 00000000 */   nop   
/* 00463BE0 10000018 */  b     .L00463C44
/* 00463BE4 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00463BE8 8E820020 */  lw    $v0, 0x20($s4)
.L00463BEC:
/* 00463BEC 8F9983A4 */  lw    $t9, %call16(clkilled)($gp)
/* 00463BF0 8E060008 */  lw    $a2, 8($s0)
/* 00463BF4 90440019 */  lbu   $a0, 0x19($v0)
/* 00463BF8 0320F809 */  jalr  $t9
/* 00463BFC 8C450014 */   lw    $a1, 0x14($v0)
/* 00463C00 14400010 */  bnez  $v0, .L00463C44
/* 00463C04 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00463C08 8E990020 */  lw    $t9, 0x20($s4)
/* 00463C0C 8E050008 */  lw    $a1, 8($s0)
/* 00463C10 92060019 */  lbu   $a2, 0x19($s0)
/* 00463C14 8F240024 */  lw    $a0, 0x24($t9)
/* 00463C18 8F9983B8 */  lw    $t9, %call16(listplkilled)($gp)
/* 00463C1C 0320F809 */  jalr  $t9
/* 00463C20 00000000 */   nop   
/* 00463C24 14400007 */  bnez  $v0, .L00463C44
/* 00463C28 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00463C2C 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 00463C30 02602025 */  move  $a0, $s3
/* 00463C34 02202825 */  move  $a1, $s1
/* 00463C38 0320F809 */  jalr  $t9
/* 00463C3C 00000000 */   nop   
/* 00463C40 8FBC003C */  lw    $gp, 0x3c($sp)
.L00463C44:
/* 00463C44 26310001 */  addiu $s1, $s1, 1
/* 00463C48 1632FFB9 */  bne   $s1, $s2, .L00463B30
/* 00463C4C 00000000 */   nop   
/* 00463C50 8E820020 */  lw    $v0, 0x20($s4)
.L00463C54:
/* 00463C54 90430018 */  lbu   $v1, 0x18($v0)
/* 00463C58 246AFFF5 */  addiu $t2, $v1, -0xb
/* 00463C5C 2D410003 */  sltiu $at, $t2, 3
/* 00463C60 5020001F */  beql  $at, $zero, .L00463CE0
/* 00463C64 8E8D0018 */   lw    $t5, 0x18($s4)
/* 00463C68 8F818044 */  lw    $at, %got(jtbl_1000D610)($gp)
/* 00463C6C 000A5080 */  sll   $t2, $t2, 2
/* 00463C70 002A0821 */  addu  $at, $at, $t2
/* 00463C74 8C2AD610 */  lw    $t2, %lo(jtbl_1000D610)($at)
/* 00463C78 015C5021 */  addu  $t2, $t2, $gp
/* 00463C7C 01400008 */  jr    $t2
/* 00463C80 00000000 */   nop   
.L00463C84:
/* 00463C84 8E8B0018 */  lw    $t3, 0x18($s4)
/* 00463C88 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00463C8C 8F858D74 */  lw     $a1, %got(r2bitpos)($gp)
/* 00463C90 8D640000 */  lw    $a0, ($t3)
/* 00463C94 8CA50004 */  lw    $a1, 4($a1)
/* 00463C98 0320F809 */  jalr  $t9
/* 00463C9C 24840104 */   addiu $a0, $a0, 0x104
/* 00463CA0 8E890020 */  lw    $t1, 0x20($s4)
/* 00463CA4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00463CA8 952C001A */  lhu   $t4, 0x1a($t1)
/* 00463CAC 31980004 */  andi  $t8, $t4, 4
/* 00463CB0 13000047 */  beqz  $t8, .L00463DD0
/* 00463CB4 00000000 */   nop   
/* 00463CB8 8E8F0018 */  lw    $t7, 0x18($s4)
/* 00463CBC 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00463CC0 8F858D74 */  lw     $a1, %got(r2bitpos)($gp)
/* 00463CC4 8DE40000 */  lw    $a0, ($t7)
/* 00463CC8 8CA50008 */  lw    $a1, 8($a1)
/* 00463CCC 0320F809 */  jalr  $t9
/* 00463CD0 24840104 */   addiu $a0, $a0, 0x104
/* 00463CD4 1000003E */  b     .L00463DD0
/* 00463CD8 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00463CDC 8E8D0018 */  lw    $t5, 0x18($s4)
.L00463CE0:
/* 00463CE0 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00463CE4 8F858D74 */  lw     $a1, %got(r2bitpos)($gp)
/* 00463CE8 8DA40000 */  lw    $a0, ($t5)
/* 00463CEC 8CA50000 */  lw    $a1, ($a1)
/* 00463CF0 0320F809 */  jalr  $t9
/* 00463CF4 24840104 */   addiu $a0, $a0, 0x104
/* 00463CF8 10000035 */  b     .L00463DD0
/* 00463CFC 8FBC003C */   lw    $gp, 0x3c($sp)
.L00463D00:
/* 00463D00 8F8E8A5C */  lw     $t6, %got(lang)($gp)
/* 00463D04 24010003 */  li    $at, 3
/* 00463D08 91CE0000 */  lbu   $t6, ($t6)
/* 00463D0C 11C10030 */  beq   $t6, $at, .L00463DD0
/* 00463D10 00000000 */   nop   
/* 00463D14 8F9289E0 */  lw     $s2, %got(bitposcount)($gp)
/* 00463D18 00008825 */  move  $s1, $zero
/* 00463D1C 8E520000 */  lw    $s2, ($s2)
/* 00463D20 2652FFFF */  addiu $s2, $s2, -1
/* 00463D24 0640002A */  bltz  $s2, .L00463DD0
/* 00463D28 26520001 */   addiu $s2, $s2, 1
.L00463D2C:
/* 00463D2C 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00463D30 02202025 */  move  $a0, $s1
/* 00463D34 02602825 */  move  $a1, $s3
/* 00463D38 0320F809 */  jalr  $t9
/* 00463D3C 00000000 */   nop   
/* 00463D40 10400020 */  beqz  $v0, .L00463DC4
/* 00463D44 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00463D48 8E820020 */  lw    $v0, 0x20($s4)
/* 00463D4C 8EA80000 */  lw    $t0, ($s5)
/* 00463D50 0011C8C0 */  sll   $t9, $s1, 3
/* 00463D54 904B0018 */  lbu   $t3, 0x18($v0)
/* 00463D58 01195021 */  addu  $t2, $t0, $t9
/* 00463D5C 8D500000 */  lw    $s0, ($t2)
/* 00463D60 31690001 */  andi  $t1, $t3, 1
/* 00463D64 1120000A */  beqz  $t1, .L00463D90
/* 00463D68 00000000 */   nop   
/* 00463D6C 8F9983A4 */  lw    $t9, %call16(clkilled)($gp)
/* 00463D70 8F858B70 */  lw     $a1, %got(indirprocs)($gp)
/* 00463D74 8EE40000 */  lw    $a0, ($s7)
/* 00463D78 8E060008 */  lw    $a2, 8($s0)
/* 00463D7C 0320F809 */  jalr  $t9
/* 00463D80 8CA50000 */   lw    $a1, ($a1)
/* 00463D84 1440000F */  bnez  $v0, .L00463DC4
/* 00463D88 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00463D8C 8E820020 */  lw    $v0, 0x20($s4)
.L00463D90:
/* 00463D90 8F9983B8 */  lw    $t9, %call16(listplkilled)($gp)
/* 00463D94 8C440028 */  lw    $a0, 0x28($v0)
/* 00463D98 8E050008 */  lw    $a1, 8($s0)
/* 00463D9C 0320F809 */  jalr  $t9
/* 00463DA0 92060019 */   lbu   $a2, 0x19($s0)
/* 00463DA4 14400007 */  bnez  $v0, .L00463DC4
/* 00463DA8 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00463DAC 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 00463DB0 02602025 */  move  $a0, $s3
/* 00463DB4 02202825 */  move  $a1, $s1
/* 00463DB8 0320F809 */  jalr  $t9
/* 00463DBC 00000000 */   nop   
/* 00463DC0 8FBC003C */  lw    $gp, 0x3c($sp)
.L00463DC4:
/* 00463DC4 26310001 */  addiu $s1, $s1, 1
/* 00463DC8 1632FFD8 */  bne   $s1, $s2, .L00463D2C
/* 00463DCC 00000000 */   nop   
.L00463DD0:
/* 00463DD0 8F8C8A5C */  lw     $t4, %got(lang)($gp)
/* 00463DD4 24010003 */  li    $at, 3
/* 00463DD8 918C0000 */  lbu   $t4, ($t4)
/* 00463DDC 5581000B */  bnel  $t4, $at, .L00463E0C
/* 00463DE0 8E94000C */   lw    $s4, 0xc($s4)
/* 00463DE4 8E980018 */  lw    $t8, 0x18($s4)
/* 00463DE8 57000008 */  bnezl $t8, .L00463E0C
/* 00463DEC 8E94000C */   lw    $s4, 0xc($s4)
/* 00463DF0 8F9981B8 */  lw    $t9, %call16(unionintsect)($gp)
/* 00463DF4 8FA40054 */  lw    $a0, 0x54($sp)
/* 00463DF8 8F858D24 */  lw     $a1, %got(coloredparms)($gp)
/* 00463DFC 0320F809 */  jalr  $t9
/* 00463E00 8F868D0C */   lw     $a2, %got(outmodebits)($gp)
/* 00463E04 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00463E08 8E94000C */  lw    $s4, 0xc($s4)
.L00463E0C:
/* 00463E0C 1680FEFD */  bnez  $s4, .L00463A04
/* 00463E10 00000000 */   nop   
.L00463E14:
/* 00463E14 8F8F8B20 */  lw     $t7, %got(outofmem)($gp)
/* 00463E18 91EF0000 */  lbu   $t7, ($t7)
/* 00463E1C 55E00233 */  bnezl $t7, .L004646EC
/* 00463E20 8FBF0044 */   lw    $ra, 0x44($sp)
/* 00463E24 8F998730 */  lw    $t9, %call16(getclock)($gp)
/* 00463E28 0320F809 */  jalr  $t9
/* 00463E2C 00000000 */   nop   
/* 00463E30 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00463E34 8F818BE8 */  lw     $at, %got(lastdftime)($gp)
/* 00463E38 8F838BE0 */  lw     $v1, %got(numdataflow)($gp)
/* 00463E3C 8F9489AC */  lw     $s4, %got(graphhead)($gp)
/* 00463E40 AC220000 */  sw    $v0, ($at)
/* 00463E44 8C6D0000 */  lw    $t5, ($v1)
/* 00463E48 25AE0003 */  addiu $t6, $t5, 3
/* 00463E4C AC6E0000 */  sw    $t6, ($v1)
/* 00463E50 8E940000 */  lw    $s4, ($s4)
/* 00463E54 12800045 */  beqz  $s4, .L00463F6C
/* 00463E58 00000000 */   nop   
.L00463E5C:
/* 00463E5C 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 00463E60 26920134 */  addiu $s2, $s4, 0x134
/* 00463E64 02402025 */  move  $a0, $s2
/* 00463E68 0320F809 */  jalr  $t9
/* 00463E6C 00000000 */   nop   
/* 00463E70 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00463E74 2691011C */  addiu $s1, $s4, 0x11c
/* 00463E78 02202025 */  move  $a0, $s1
/* 00463E7C 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 00463E80 0320F809 */  jalr  $t9
/* 00463E84 00000000 */   nop   
/* 00463E88 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00463E8C 02402025 */  move  $a0, $s2
/* 00463E90 26850114 */  addiu $a1, $s4, 0x114
/* 00463E94 8F998194 */  lw    $t9, %call16(bvectcopy)($gp)
/* 00463E98 0320F809 */  jalr  $t9
/* 00463E9C 00000000 */   nop   
/* 00463EA0 8E880020 */  lw    $t0, 0x20($s4)
/* 00463EA4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00463EA8 8E900018 */  lw    $s0, 0x18($s4)
/* 00463EAC 91190000 */  lbu   $t9, ($t0)
/* 00463EB0 2F2A0040 */  sltiu $t2, $t9, 0x40
/* 00463EB4 11400009 */  beqz  $t2, .L00463EDC
/* 00463EB8 00000000 */   nop   
/* 00463EBC 8F8C8044 */  lw    $t4, %got(D_10010F28)($gp)
/* 00463EC0 00195943 */  sra   $t3, $t9, 5
/* 00463EC4 000B4880 */  sll   $t1, $t3, 2
/* 00463EC8 258C0F28 */  addiu $t4, %lo(D_10010F28) # addiu $t4, $t4, 0xf28
/* 00463ECC 0189C021 */  addu  $t8, $t4, $t1
/* 00463ED0 8F0F0000 */  lw    $t7, ($t8)
/* 00463ED4 032F6804 */  sllv  $t5, $t7, $t9
/* 00463ED8 29AA0000 */  slti  $t2, $t5, 0
.L00463EDC:
/* 00463EDC 1140000F */  beqz  $t2, .L00463F1C
/* 00463EE0 00000000 */   nop   
/* 00463EE4 12000018 */  beqz  $s0, .L00463F48
/* 00463EE8 2693012C */   addiu $s3, $s4, 0x12c
.L00463EEC:
/* 00463EEC 8F9981B0 */  lw    $t9, %call16(unionminus)($gp)
/* 00463EF0 8E050000 */  lw    $a1, ($s0)
/* 00463EF4 02402025 */  move  $a0, $s2
/* 00463EF8 02603025 */  move  $a2, $s3
/* 00463EFC 0320F809 */  jalr  $t9
/* 00463F00 24A50114 */   addiu $a1, $a1, 0x114
/* 00463F04 8E100004 */  lw    $s0, 4($s0)
/* 00463F08 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00463F0C 1600FFF7 */  bnez  $s0, .L00463EEC
/* 00463F10 00000000 */   nop   
/* 00463F14 1000000C */  b     .L00463F48
/* 00463F18 00000000 */   nop   
.L00463F1C:
/* 00463F1C 1200000A */  beqz  $s0, .L00463F48
/* 00463F20 00000000 */   nop   
.L00463F24:
/* 00463F24 8F9981A4 */  lw    $t9, %call16(bvectunion)($gp)
/* 00463F28 8E050000 */  lw    $a1, ($s0)
/* 00463F2C 02402025 */  move  $a0, $s2
/* 00463F30 0320F809 */  jalr  $t9
/* 00463F34 24A50114 */   addiu $a1, $a1, 0x114
/* 00463F38 8E100004 */  lw    $s0, 4($s0)
/* 00463F3C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00463F40 1600FFF8 */  bnez  $s0, .L00463F24
/* 00463F44 00000000 */   nop   
.L00463F48:
/* 00463F48 8F998194 */  lw    $t9, %call16(bvectcopy)($gp)
/* 00463F4C 02202025 */  move  $a0, $s1
/* 00463F50 26850104 */  addiu $a1, $s4, 0x104
/* 00463F54 0320F809 */  jalr  $t9
/* 00463F58 00000000 */   nop   
/* 00463F5C 8E94000C */  lw    $s4, 0xc($s4)
/* 00463F60 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00463F64 1680FFBD */  bnez  $s4, .L00463E5C
/* 00463F68 00000000 */   nop   
.L00463F6C:
/* 00463F6C 8F888B20 */  lw     $t0, %got(outofmem)($gp)
/* 00463F70 91080000 */  lbu   $t0, ($t0)
/* 00463F74 550001DD */  bnezl $t0, .L004646EC
/* 00463F78 8FBF0044 */   lw    $ra, 0x44($sp)
/* 00463F7C 8F8489AC */  lw     $a0, %got(graphhead)($gp)
/* 00463F80 8F9981B0 */  lw    $t9, %call16(unionminus)($gp)
/* 00463F84 8F858D24 */  lw     $a1, %got(coloredparms)($gp)
/* 00463F88 8C840000 */  lw    $a0, ($a0)
/* 00463F8C 8F868D10 */  lw     $a2, %got(notinmodebits)($gp)
/* 00463F90 0320F809 */  jalr  $t9
/* 00463F94 2484011C */   addiu $a0, $a0, 0x11c
/* 00463F98 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00463F9C 8F978BDC */  lw     $s7, %got(dataflowiter)($gp)
/* 00463FA0 8EEB0000 */  lw    $t3, ($s7)
.L00463FA4:
/* 00463FA4 8F9489B0 */  lw     $s4, %got(graphtail)($gp)
/* 00463FA8 0000A825 */  move  $s5, $zero
/* 00463FAC 256C0001 */  addiu $t4, $t3, 1
/* 00463FB0 AEEC0000 */  sw    $t4, ($s7)
/* 00463FB4 8E940000 */  lw    $s4, ($s4)
/* 00463FB8 12800041 */  beqz  $s4, .L004640C0
/* 00463FBC 00000000 */   nop   
/* 00463FC0 8E820018 */  lw    $v0, 0x18($s4)
.L00463FC4:
/* 00463FC4 5040003C */  beql  $v0, $zero, .L004640B8
/* 00463FC8 8E940010 */   lw    $s4, 0x10($s4)
/* 00463FCC 16A00007 */  bnez  $s5, .L00463FEC
/* 00463FD0 00408025 */   move  $s0, $v0
/* 00463FD4 8F998194 */  lw    $t9, %call16(bvectcopy)($gp)
/* 00463FD8 02C02025 */  move  $a0, $s6
/* 00463FDC 26850134 */  addiu $a1, $s4, 0x134
/* 00463FE0 0320F809 */  jalr  $t9
/* 00463FE4 00000000 */   nop   
/* 00463FE8 8FBC003C */  lw    $gp, 0x3c($sp)
.L00463FEC:
/* 00463FEC 8E890020 */  lw    $t1, 0x20($s4)
/* 00463FF0 26920134 */  addiu $s2, $s4, 0x134
/* 00463FF4 2693012C */  addiu $s3, $s4, 0x12c
/* 00463FF8 91380000 */  lbu   $t8, ($t1)
/* 00463FFC 2F0F0040 */  sltiu $t7, $t8, 0x40
/* 00464000 11E00009 */  beqz  $t7, .L00464028
/* 00464004 00000000 */   nop   
/* 00464008 8F8E8044 */  lw    $t6, %got(D_10010F28)($gp)
/* 0046400C 0018C943 */  sra   $t9, $t8, 5
/* 00464010 00196880 */  sll   $t5, $t9, 2
/* 00464014 25CE0F28 */  addiu $t6, %lo(D_10010F28) # addiu $t6, $t6, 0xf28
/* 00464018 01CD5021 */  addu  $t2, $t6, $t5
/* 0046401C 8D480000 */  lw    $t0, ($t2)
/* 00464020 03085804 */  sllv  $t3, $t0, $t8
/* 00464024 296F0000 */  slti  $t7, $t3, 0
.L00464028:
/* 00464028 51E0000F */  beql  $t7, $zero, .L00464068
/* 0046402C 8E020000 */   lw    $v0, ($s0)
/* 00464030 8E020000 */  lw    $v0, ($s0)
.L00464034:
/* 00464034 8F9981C8 */  lw    $t9, %call16(uminusminus)($gp)
/* 00464038 02402025 */  move  $a0, $s2
/* 0046403C 02603825 */  move  $a3, $s3
/* 00464040 24450134 */  addiu $a1, $v0, 0x134
/* 00464044 0320F809 */  jalr  $t9
/* 00464048 2446010C */   addiu $a2, $v0, 0x10c
/* 0046404C 8E100004 */  lw    $s0, 4($s0)
/* 00464050 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00464054 5600FFF7 */  bnezl $s0, .L00464034
/* 00464058 8E020000 */   lw    $v0, ($s0)
/* 0046405C 1000000B */  b     .L0046408C
/* 00464060 00000000 */   nop   
/* 00464064 8E020000 */  lw    $v0, ($s0)
.L00464068:
/* 00464068 8F9981B0 */  lw    $t9, %call16(unionminus)($gp)
/* 0046406C 02402025 */  move  $a0, $s2
/* 00464070 24450134 */  addiu $a1, $v0, 0x134
/* 00464074 0320F809 */  jalr  $t9
/* 00464078 2446010C */   addiu $a2, $v0, 0x10c
/* 0046407C 8E100004 */  lw    $s0, 4($s0)
/* 00464080 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00464084 5600FFF8 */  bnezl $s0, .L00464068
/* 00464088 8E020000 */   lw    $v0, ($s0)
.L0046408C:
/* 0046408C 56A0000A */  bnezl $s5, .L004640B8
/* 00464090 8E940010 */   lw    $s4, 0x10($s4)
/* 00464094 8F99819C */  lw    $t9, %call16(bvecteq)($gp)
/* 00464098 02C02025 */  move  $a0, $s6
/* 0046409C 02402825 */  move  $a1, $s2
/* 004640A0 0320F809 */  jalr  $t9
/* 004640A4 00000000 */   nop   
/* 004640A8 14400002 */  bnez  $v0, .L004640B4
/* 004640AC 8FBC003C */   lw    $gp, 0x3c($sp)
/* 004640B0 24150001 */  li    $s5, 1
.L004640B4:
/* 004640B4 8E940010 */  lw    $s4, 0x10($s4)
.L004640B8:
/* 004640B8 5680FFC2 */  bnezl $s4, .L00463FC4
/* 004640BC 8E820018 */   lw    $v0, 0x18($s4)
.L004640C0:
/* 004640C0 56A0FFB8 */  bnezl $s5, .L00463FA4
/* 004640C4 8EEB0000 */   lw    $t3, ($s7)
/* 004640C8 8F9489AC */  lw     $s4, %got(graphhead)($gp)
/* 004640CC 8E940000 */  lw    $s4, ($s4)
/* 004640D0 8EE90000 */  lw    $t1, ($s7)
.L004640D4:
/* 004640D4 0000A825 */  move  $s5, $zero
/* 004640D8 25390001 */  addiu $t9, $t1, 1
/* 004640DC 1280003A */  beqz  $s4, .L004641C8
/* 004640E0 AEF90000 */   sw    $t9, ($s7)
.L004640E4:
/* 004640E4 16A00007 */  bnez  $s5, .L00464104
/* 004640E8 8E900014 */   lw    $s0, 0x14($s4)
/* 004640EC 8F998194 */  lw    $t9, %call16(bvectcopy)($gp)
/* 004640F0 02C02025 */  move  $a0, $s6
/* 004640F4 2685011C */  addiu $a1, $s4, 0x11c
/* 004640F8 0320F809 */  jalr  $t9
/* 004640FC 00000000 */   nop   
/* 00464100 8FBC003C */  lw    $gp, 0x3c($sp)
.L00464104:
/* 00464104 12000021 */  beqz  $s0, .L0046418C
/* 00464108 2691011C */   addiu $s1, $s4, 0x11c
/* 0046410C 8E020000 */  lw    $v0, ($s0)
.L00464110:
/* 00464110 8C4E0020 */  lw    $t6, 0x20($v0)
/* 00464114 91CD0000 */  lbu   $t5, ($t6)
/* 00464118 2DAA0040 */  sltiu $t2, $t5, 0x40
/* 0046411C 11400009 */  beqz  $t2, .L00464144
/* 00464120 00000000 */   nop   
/* 00464124 8F8B8044 */  lw    $t3, %got(D_10010F28)($gp)
/* 00464128 000D4143 */  sra   $t0, $t5, 5
/* 0046412C 0008C080 */  sll   $t8, $t0, 2
/* 00464130 256B0F28 */  addiu $t3, %lo(D_10010F28) # addiu $t3, $t3, 0xf28
/* 00464134 01786021 */  addu  $t4, $t3, $t8
/* 00464138 8D8F0000 */  lw    $t7, ($t4)
/* 0046413C 01AF4804 */  sllv  $t1, $t7, $t5
/* 00464140 292A0000 */  slti  $t2, $t1, 0
.L00464144:
/* 00464144 11400008 */  beqz  $t2, .L00464168
/* 00464148 00000000 */   nop   
/* 0046414C 8F9981B0 */  lw    $t9, %call16(unionminus)($gp)
/* 00464150 02202025 */  move  $a0, $s1
/* 00464154 2445011C */  addiu $a1, $v0, 0x11c
/* 00464158 0320F809 */  jalr  $t9
/* 0046415C 2446012C */   addiu $a2, $v0, 0x12c
/* 00464160 10000007 */  b     .L00464180
/* 00464164 8FBC003C */   lw    $gp, 0x3c($sp)
.L00464168:
/* 00464168 8F9981A4 */  lw    $t9, %call16(bvectunion)($gp)
/* 0046416C 02202025 */  move  $a0, $s1
/* 00464170 2445011C */  addiu $a1, $v0, 0x11c
/* 00464174 0320F809 */  jalr  $t9
/* 00464178 00000000 */   nop   
/* 0046417C 8FBC003C */  lw    $gp, 0x3c($sp)
.L00464180:
/* 00464180 8E100004 */  lw    $s0, 4($s0)
/* 00464184 5600FFE2 */  bnezl $s0, .L00464110
/* 00464188 8E020000 */   lw    $v0, ($s0)
.L0046418C:
/* 0046418C 56A0000A */  bnezl $s5, .L004641B8
/* 00464190 8E94000C */   lw    $s4, 0xc($s4)
/* 00464194 8F99819C */  lw    $t9, %call16(bvecteq)($gp)
/* 00464198 02C02025 */  move  $a0, $s6
/* 0046419C 2685011C */  addiu $a1, $s4, 0x11c
/* 004641A0 0320F809 */  jalr  $t9
/* 004641A4 00000000 */   nop   
/* 004641A8 14400002 */  bnez  $v0, .L004641B4
/* 004641AC 8FBC003C */   lw    $gp, 0x3c($sp)
/* 004641B0 24150001 */  li    $s5, 1
.L004641B4:
/* 004641B4 8E94000C */  lw    $s4, 0xc($s4)
.L004641B8:
/* 004641B8 1680FFCA */  bnez  $s4, .L004640E4
/* 004641BC 00000000 */   nop   
/* 004641C0 8F9489AC */  lw     $s4, %got(graphhead)($gp)
/* 004641C4 8E940000 */  lw    $s4, ($s4)
.L004641C8:
/* 004641C8 56A0FFC2 */  bnezl $s5, .L004640D4
/* 004641CC 8EE90000 */   lw    $t1, ($s7)
/* 004641D0 1280000A */  beqz  $s4, .L004641FC
/* 004641D4 00000000 */   nop   
.L004641D8:
/* 004641D8 8F9981A4 */  lw    $t9, %call16(bvectunion)($gp)
/* 004641DC 26840114 */  addiu $a0, $s4, 0x114
/* 004641E0 268500F4 */  addiu $a1, $s4, 0xf4
/* 004641E4 0320F809 */  jalr  $t9
/* 004641E8 00000000 */   nop   
/* 004641EC 8E94000C */  lw    $s4, 0xc($s4)
/* 004641F0 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004641F4 1680FFF8 */  bnez  $s4, .L004641D8
/* 004641F8 00000000 */   nop   
.L004641FC:
/* 004641FC 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 00464200 27B30080 */  addiu $s3, $sp, 0x80
/* 00464204 02602025 */  move  $a0, $s3
/* 00464208 AFA00080 */  sw    $zero, 0x80($sp)
/* 0046420C 0320F809 */  jalr  $t9
/* 00464210 AFA00084 */   sw    $zero, 0x84($sp)
/* 00464214 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00464218 02602025 */  move  $a0, $s3
/* 0046421C 8F998194 */  lw    $t9, %call16(bvectcopy)($gp)
/* 00464220 8F858CD4 */  lw     $a1, %got(varbits)($gp)
/* 00464224 0320F809 */  jalr  $t9
/* 00464228 00000000 */   nop   
/* 0046422C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00464230 02602025 */  move  $a0, $s3
/* 00464234 8F9981A8 */  lw    $t9, %call16(bvectintsect)($gp)
/* 00464238 8F858D28 */  lw     $a1, %got(iscolored12)($gp)
/* 0046423C 0320F809 */  jalr  $t9
/* 00464240 00000000 */   nop   
/* 00464244 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00464248 02602025 */  move  $a0, $s3
/* 0046424C 8F9981AC */  lw    $t9, %call16(bvectminus)($gp)
/* 00464250 8F858CD8 */  lw     $a1, %got(mvarbits)($gp)
/* 00464254 0320F809 */  jalr  $t9
/* 00464258 00000000 */   nop   
/* 0046425C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00464260 27B5005C */  addiu $s5, $sp, 0x5c
/* 00464264 8F9489AC */  lw     $s4, %got(graphhead)($gp)
/* 00464268 8E940000 */  lw    $s4, ($s4)
/* 0046426C 1280008C */  beqz  $s4, .L004644A0
/* 00464270 00000000 */   nop   
/* 00464274 8F9E8B3C */  lw     $fp, %got(has_exc_handler)($gp)
.L00464278:
/* 00464278 8F9981A8 */  lw    $t9, %call16(bvectintsect)($gp)
/* 0046427C 26920134 */  addiu $s2, $s4, 0x134
/* 00464280 2691011C */  addiu $s1, $s4, 0x11c
/* 00464284 02202825 */  move  $a1, $s1
/* 00464288 0320F809 */  jalr  $t9
/* 0046428C 02402025 */   move  $a0, $s2
/* 00464290 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00464294 02402025 */  move  $a0, $s2
/* 00464298 26850104 */  addiu $a1, $s4, 0x104
/* 0046429C 8F9981A4 */  lw    $t9, %call16(bvectunion)($gp)
/* 004642A0 0320F809 */  jalr  $t9
/* 004642A4 00000000 */   nop   
/* 004642A8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004642AC 02202025 */  move  $a0, $s1
/* 004642B0 8F9981E8 */  lw    $t9, %call16(checkinitbvlivran)($gp)
/* 004642B4 0320F809 */  jalr  $t9
/* 004642B8 00000000 */   nop   
/* 004642BC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004642C0 02202025 */  move  $a0, $s1
/* 004642C4 96850008 */  lhu   $a1, 8($s4)
/* 004642C8 8F9981E4 */  lw    $t9, %call16(setbitbb)($gp)
/* 004642CC 0320F809 */  jalr  $t9
/* 004642D0 00000000 */   nop   
/* 004642D4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004642D8 26910144 */  addiu $s1, $s4, 0x144
/* 004642DC 02202025 */  move  $a0, $s1
/* 004642E0 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 004642E4 0320F809 */  jalr  $t9
/* 004642E8 00000000 */   nop   
/* 004642EC AFA0005C */  sw    $zero, 0x5c($sp)
/* 004642F0 AFA00060 */  sw    $zero, 0x60($sp)
/* 004642F4 AFA00064 */  sw    $zero, 0x64($sp)
/* 004642F8 AFA00068 */  sw    $zero, 0x68($sp)
/* 004642FC 8EA80000 */  lw    $t0, ($s5)
/* 00464300 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00464304 02202025 */  move  $a0, $s1
/* 00464308 AFA80004 */  sw    $t0, 4($sp)
/* 0046430C 8EAE0004 */  lw    $t6, 4($s5)
/* 00464310 8F998180 */  lw    $t9, %call16(initbv)($gp)
/* 00464314 8FA50004 */  lw    $a1, 4($sp)
/* 00464318 AFAE0008 */  sw    $t6, 8($sp)
/* 0046431C 8EA70008 */  lw    $a3, 8($s5)
/* 00464320 8FA60008 */  lw    $a2, 8($sp)
/* 00464324 AFA7000C */  sw    $a3, 0xc($sp)
/* 00464328 8EAE000C */  lw    $t6, 0xc($s5)
/* 0046432C 0320F809 */  jalr  $t9
/* 00464330 AFAE0010 */   sw    $t6, 0x10($sp)
/* 00464334 8E8B0018 */  lw    $t3, 0x18($s4)
/* 00464338 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0046433C 55600018 */  bnezl $t3, .L004643A0
/* 00464340 8E900018 */   lw    $s0, 0x18($s4)
/* 00464344 8F9984B8 */  lw    $t9, %call16(is_cup)($gp)
/* 00464348 02802025 */  move  $a0, $s4
/* 0046434C 0320F809 */  jalr  $t9
/* 00464350 00000000 */   nop   
/* 00464354 1040000A */  beqz  $v0, .L00464380
/* 00464358 8FBC003C */   lw    $gp, 0x3c($sp)
/* 0046435C 8F988A5C */  lw     $t8, %got(lang)($gp)
/* 00464360 3C010C00 */  lui   $at, 0xc00
/* 00464364 93180000 */  lbu   $t8, ($t8)
/* 00464368 2F0C0020 */  sltiu $t4, $t8, 0x20
/* 0046436C 000C7823 */  negu  $t7, $t4
/* 00464370 01E16824 */  and   $t5, $t7, $at
/* 00464374 030D4804 */  sllv  $t1, $t5, $t8
/* 00464378 05220009 */  bltzl $t1, .L004643A0
/* 0046437C 8E900018 */   lw    $s0, 0x18($s4)
.L00464380:
/* 00464380 8F9981A4 */  lw    $t9, %call16(bvectunion)($gp)
/* 00464384 02202025 */  move  $a0, $s1
/* 00464388 02602825 */  move  $a1, $s3
/* 0046438C 0320F809 */  jalr  $t9
/* 00464390 00000000 */   nop   
/* 00464394 1000003F */  b     .L00464494
/* 00464398 8FBC003C */   lw    $gp, 0x3c($sp)
/* 0046439C 8E900018 */  lw    $s0, 0x18($s4)
.L004643A0:
/* 004643A0 56000009 */  bnezl $s0, .L004643C8
/* 004643A4 8E990020 */   lw    $t9, 0x20($s4)
/* 004643A8 8F9981A4 */  lw    $t9, %call16(bvectunion)($gp)
/* 004643AC 02202025 */  move  $a0, $s1
/* 004643B0 2685012C */  addiu $a1, $s4, 0x12c
/* 004643B4 0320F809 */  jalr  $t9
/* 004643B8 00000000 */   nop   
/* 004643BC 10000035 */  b     .L00464494
/* 004643C0 8FBC003C */   lw    $gp, 0x3c($sp)
/* 004643C4 8E990020 */  lw    $t9, 0x20($s4)
.L004643C8:
/* 004643C8 932A0000 */  lbu   $t2, ($t9)
/* 004643CC 2D4E0040 */  sltiu $t6, $t2, 0x40
/* 004643D0 11C00009 */  beqz  $t6, .L004643F8
/* 004643D4 00000000 */   nop   
/* 004643D8 8F8C8044 */  lw    $t4, %got(D_10010F28)($gp)
/* 004643DC 000A4143 */  sra   $t0, $t2, 5
/* 004643E0 00085880 */  sll   $t3, $t0, 2
/* 004643E4 258C0F28 */  addiu $t4, %lo(D_10010F28) # addiu $t4, $t4, 0xf28
/* 004643E8 018B7821 */  addu  $t7, $t4, $t3
/* 004643EC 8DED0000 */  lw    $t5, ($t7)
/* 004643F0 014DC004 */  sllv  $t8, $t5, $t2
/* 004643F4 2B0E0000 */  slti  $t6, $t8, 0
.L004643F8:
/* 004643F8 11C0001D */  beqz  $t6, .L00464470
/* 004643FC 00000000 */   nop   
/* 00464400 8F9981A4 */  lw    $t9, %call16(bvectunion)($gp)
/* 00464404 02202025 */  move  $a0, $s1
/* 00464408 2685012C */  addiu $a1, $s4, 0x12c
/* 0046440C 0320F809 */  jalr  $t9
/* 00464410 00000000 */   nop   
/* 00464414 8FBC003C */  lw    $gp, 0x3c($sp)
.L00464418:
/* 00464418 8F9981A4 */  lw    $t9, %call16(bvectunion)($gp)
/* 0046441C 8E050000 */  lw    $a1, ($s0)
/* 00464420 02202025 */  move  $a0, $s1
/* 00464424 0320F809 */  jalr  $t9
/* 00464428 24A50114 */   addiu $a1, $a1, 0x114
/* 0046442C 8E100004 */  lw    $s0, 4($s0)
/* 00464430 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00464434 1600FFF8 */  bnez  $s0, .L00464418
/* 00464438 00000000 */   nop   
/* 0046443C 92990006 */  lbu   $t9, 6($s4)
/* 00464440 57200015 */  bnezl $t9, .L00464498
/* 00464444 8E94000C */   lw    $s4, 0xc($s4)
/* 00464448 93C80000 */  lbu   $t0, ($fp)
/* 0046444C 51000012 */  beql  $t0, $zero, .L00464498
/* 00464450 8E94000C */   lw    $s4, 0xc($s4)
/* 00464454 8F9981B8 */  lw    $t9, %call16(unionintsect)($gp)
/* 00464458 02202025 */  move  $a0, $s1
/* 0046445C 8F858D28 */  lw     $a1, %got(iscolored12)($gp)
/* 00464460 0320F809 */  jalr  $t9
/* 00464464 8F868CD4 */   lw     $a2, %got(varbits)($gp)
/* 00464468 1000000A */  b     .L00464494
/* 0046446C 8FBC003C */   lw    $gp, 0x3c($sp)
.L00464470:
/* 00464470 8F9981A4 */  lw    $t9, %call16(bvectunion)($gp)
/* 00464474 8E050000 */  lw    $a1, ($s0)
/* 00464478 02202025 */  move  $a0, $s1
/* 0046447C 0320F809 */  jalr  $t9
/* 00464480 24A50114 */   addiu $a1, $a1, 0x114
/* 00464484 8E100004 */  lw    $s0, 4($s0)
/* 00464488 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0046448C 1600FFF8 */  bnez  $s0, .L00464470
/* 00464490 00000000 */   nop   
.L00464494:
/* 00464494 8E94000C */  lw    $s4, 0xc($s4)
.L00464498:
/* 00464498 1680FF77 */  bnez  $s4, .L00464278
/* 0046449C 00000000 */   nop   
.L004644A0:
/* 004644A0 8F8C8B20 */  lw     $t4, %got(outofmem)($gp)
/* 004644A4 918C0000 */  lbu   $t4, ($t4)
/* 004644A8 55800090 */  bnezl $t4, .L004646EC
/* 004644AC 8FBF0044 */   lw    $ra, 0x44($sp)
/* 004644B0 8EEB0000 */  lw    $t3, ($s7)
.L004644B4:
/* 004644B4 8F9489B0 */  lw     $s4, %got(graphtail)($gp)
/* 004644B8 0000A825 */  move  $s5, $zero
/* 004644BC 256F0001 */  addiu $t7, $t3, 1
/* 004644C0 AEEF0000 */  sw    $t7, ($s7)
/* 004644C4 8E940000 */  lw    $s4, ($s4)
/* 004644C8 1280004C */  beqz  $s4, .L004645FC
/* 004644CC 00000000 */   nop   
/* 004644D0 8E820018 */  lw    $v0, 0x18($s4)
.L004644D4:
/* 004644D4 1040001F */  beqz  $v0, .L00464554
/* 004644D8 00000000 */   nop   
/* 004644DC 16A00007 */  bnez  $s5, .L004644FC
/* 004644E0 00408025 */   move  $s0, $v0
/* 004644E4 8F998194 */  lw    $t9, %call16(bvectcopy)($gp)
/* 004644E8 02C02025 */  move  $a0, $s6
/* 004644EC 26850144 */  addiu $a1, $s4, 0x144
/* 004644F0 0320F809 */  jalr  $t9
/* 004644F4 00000000 */   nop   
/* 004644F8 8FBC003C */  lw    $gp, 0x3c($sp)
.L004644FC:
/* 004644FC 26910144 */  addiu $s1, $s4, 0x144
/* 00464500 8E020000 */  lw    $v0, ($s0)
.L00464504:
/* 00464504 8F9981B0 */  lw    $t9, %call16(unionminus)($gp)
/* 00464508 02202025 */  move  $a0, $s1
/* 0046450C 24450144 */  addiu $a1, $v0, 0x144
/* 00464510 0320F809 */  jalr  $t9
/* 00464514 2446010C */   addiu $a2, $v0, 0x10c
/* 00464518 8E100004 */  lw    $s0, 4($s0)
/* 0046451C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00464520 5600FFF8 */  bnezl $s0, .L00464504
/* 00464524 8E020000 */   lw    $v0, ($s0)
/* 00464528 56A00032 */  bnezl $s5, .L004645F4
/* 0046452C 8E940010 */   lw    $s4, 0x10($s4)
/* 00464530 8F99819C */  lw    $t9, %call16(bvecteq)($gp)
/* 00464534 02C02025 */  move  $a0, $s6
/* 00464538 02202825 */  move  $a1, $s1
/* 0046453C 0320F809 */  jalr  $t9
/* 00464540 00000000 */   nop   
/* 00464544 1440002A */  bnez  $v0, .L004645F0
/* 00464548 8FBC003C */   lw    $gp, 0x3c($sp)
/* 0046454C 10000028 */  b     .L004645F0
/* 00464550 24150001 */   li    $s5, 1
.L00464554:
/* 00464554 8F8D8CDC */  lw     $t5, %got(fsymbits)($gp)
/* 00464558 8DAD0000 */  lw    $t5, ($t5)
/* 0046455C 51A00025 */  beql  $t5, $zero, .L004645F4
/* 00464560 8E940010 */   lw    $s4, 0x10($s4)
/* 00464564 16A00007 */  bnez  $s5, .L00464584
/* 00464568 00000000 */   nop   
/* 0046456C 8F998194 */  lw    $t9, %call16(bvectcopy)($gp)
/* 00464570 02C02025 */  move  $a0, $s6
/* 00464574 26850144 */  addiu $a1, $s4, 0x144
/* 00464578 0320F809 */  jalr  $t9
/* 0046457C 00000000 */   nop   
/* 00464580 8FBC003C */  lw    $gp, 0x3c($sp)
.L00464584:
/* 00464584 8F8289AC */  lw     $v0, %got(graphhead)($gp)
/* 00464588 8F9981BC */  lw    $t9, %call16(uintsectminus)($gp)
/* 0046458C 26910144 */  addiu $s1, $s4, 0x144
/* 00464590 8C420000 */  lw    $v0, ($v0)
/* 00464594 02202025 */  move  $a0, $s1
/* 00464598 8F858CDC */  lw     $a1, %got(fsymbits)($gp)
/* 0046459C 24460144 */  addiu $a2, $v0, 0x144
/* 004645A0 0320F809 */  jalr  $t9
/* 004645A4 2447010C */   addiu $a3, $v0, 0x10c
/* 004645A8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004645AC 02202025 */  move  $a0, $s1
/* 004645B0 8F8689AC */  lw     $a2, %got(graphhead)($gp)
/* 004645B4 8F9981B8 */  lw    $t9, %call16(unionintsect)($gp)
/* 004645B8 8F858CDC */  lw     $a1, %got(fsymbits)($gp)
/* 004645BC 8CC60000 */  lw    $a2, ($a2)
/* 004645C0 0320F809 */  jalr  $t9
/* 004645C4 24C60114 */   addiu $a2, $a2, 0x114
/* 004645C8 16A00009 */  bnez  $s5, .L004645F0
/* 004645CC 8FBC003C */   lw    $gp, 0x3c($sp)
/* 004645D0 8F99819C */  lw    $t9, %call16(bvecteq)($gp)
/* 004645D4 02C02025 */  move  $a0, $s6
/* 004645D8 02202825 */  move  $a1, $s1
/* 004645DC 0320F809 */  jalr  $t9
/* 004645E0 00000000 */   nop   
/* 004645E4 14400002 */  bnez  $v0, .L004645F0
/* 004645E8 8FBC003C */   lw    $gp, 0x3c($sp)
/* 004645EC 24150001 */  li    $s5, 1
.L004645F0:
/* 004645F0 8E940010 */  lw    $s4, 0x10($s4)
.L004645F4:
/* 004645F4 5680FFB7 */  bnezl $s4, .L004644D4
/* 004645F8 8E820018 */   lw    $v0, 0x18($s4)
.L004645FC:
/* 004645FC 56A0FFAD */  bnezl $s5, .L004644B4
/* 00464600 8EEB0000 */   lw    $t3, ($s7)
/* 00464604 8F9981E8 */  lw    $t9, %call16(checkinitbvlivran)($gp)
/* 00464608 02C02025 */  move  $a0, $s6
/* 0046460C 0320F809 */  jalr  $t9
/* 00464610 00000000 */   nop   
/* 00464614 8FBC003C */  lw    $gp, 0x3c($sp)
.L00464618:
/* 00464618 8F9489B0 */  lw     $s4, %got(graphtail)($gp)
/* 0046461C 0000A825 */  move  $s5, $zero
/* 00464620 8E940000 */  lw    $s4, ($s4)
/* 00464624 12800023 */  beqz  $s4, .L004646B4
/* 00464628 00000000 */   nop   
/* 0046462C 8E820018 */  lw    $v0, 0x18($s4)
.L00464630:
/* 00464630 5040001E */  beql  $v0, $zero, .L004646AC
/* 00464634 8E940010 */   lw    $s4, 0x10($s4)
/* 00464638 16A00007 */  bnez  $s5, .L00464658
/* 0046463C 00408025 */   move  $s0, $v0
/* 00464640 8F998194 */  lw    $t9, %call16(bvectcopy)($gp)
/* 00464644 02C02025 */  move  $a0, $s6
/* 00464648 2685011C */  addiu $a1, $s4, 0x11c
/* 0046464C 0320F809 */  jalr  $t9
/* 00464650 00000000 */   nop   
/* 00464654 8FBC003C */  lw    $gp, 0x3c($sp)
.L00464658:
/* 00464658 2691011C */  addiu $s1, $s4, 0x11c
.L0046465C:
/* 0046465C 8F9981A4 */  lw    $t9, %call16(bvectunion)($gp)
/* 00464660 8E050000 */  lw    $a1, ($s0)
/* 00464664 02202025 */  move  $a0, $s1
/* 00464668 0320F809 */  jalr  $t9
/* 0046466C 24A5011C */   addiu $a1, $a1, 0x11c
/* 00464670 8E100004 */  lw    $s0, 4($s0)
/* 00464674 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00464678 1600FFF8 */  bnez  $s0, .L0046465C
/* 0046467C 00000000 */   nop   
/* 00464680 56A0000A */  bnezl $s5, .L004646AC
/* 00464684 8E940010 */   lw    $s4, 0x10($s4)
/* 00464688 8F99819C */  lw    $t9, %call16(bvecteq)($gp)
/* 0046468C 02C02025 */  move  $a0, $s6
/* 00464690 02202825 */  move  $a1, $s1
/* 00464694 0320F809 */  jalr  $t9
/* 00464698 00000000 */   nop   
/* 0046469C 14400002 */  bnez  $v0, .L004646A8
/* 004646A0 8FBC003C */   lw    $gp, 0x3c($sp)
/* 004646A4 24150001 */  li    $s5, 1
.L004646A8:
/* 004646A8 8E940010 */  lw    $s4, 0x10($s4)
.L004646AC:
/* 004646AC 5680FFE0 */  bnezl $s4, .L00464630
/* 004646B0 8E820018 */   lw    $v0, 0x18($s4)
.L004646B4:
/* 004646B4 16A0FFD8 */  bnez  $s5, .L00464618
/* 004646B8 00000000 */   nop   
/* 004646BC 8F998730 */  lw    $t9, %call16(getclock)($gp)
/* 004646C0 0320F809 */  jalr  $t9
/* 004646C4 00000000 */   nop   
/* 004646C8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004646CC 8F838BD8 */  lw     $v1, %got(dataflowtime)($gp)
/* 004646D0 8F898BE8 */  lw     $t1, %got(lastdftime)($gp)
/* 004646D4 8C6A0000 */  lw    $t2, ($v1)
/* 004646D8 8D290000 */  lw    $t1, ($t1)
/* 004646DC 0142C021 */  addu  $t8, $t2, $v0
/* 004646E0 03097023 */  subu  $t6, $t8, $t1
/* 004646E4 AC6E0000 */  sw    $t6, ($v1)
/* 004646E8 8FBF0044 */  lw    $ra, 0x44($sp)
.L004646EC:
/* 004646EC 8FB0001C */  lw    $s0, 0x1c($sp)
/* 004646F0 8FB10020 */  lw    $s1, 0x20($sp)
/* 004646F4 8FB20024 */  lw    $s2, 0x24($sp)
/* 004646F8 8FB30028 */  lw    $s3, 0x28($sp)
/* 004646FC 8FB4002C */  lw    $s4, 0x2c($sp)
/* 00464700 8FB50030 */  lw    $s5, 0x30($sp)
/* 00464704 8FB60034 */  lw    $s6, 0x34($sp)
/* 00464708 8FB70038 */  lw    $s7, 0x38($sp)
/* 0046470C 8FBE0040 */  lw    $fp, 0x40($sp)
/* 00464710 03E00008 */  jr    $ra
/* 00464714 27BD0098 */   addiu $sp, $sp, 0x98
    .type regdataflow, @function
    .size regdataflow, .-regdataflow
    .end regdataflow

glabel gettolivbb
    .ent gettolivbb
    # 00464910 allsucmember
    # 004669A8 addadjacents
    # 00467F04 split
    # 00469280 globalcolor
/* 00464718 3C1C0FBB */  .cpload $t9
/* 0046471C 279C5B78 */  
/* 00464720 0399E021 */  
/* 00464724 8CA20030 */  lw    $v0, 0x30($a1)
/* 00464728 1040000C */  beqz  $v0, .L0046475C
/* 0046472C 00000000 */   nop   
/* 00464730 8C4E0008 */  lw    $t6, 8($v0)
/* 00464734 8DCF0000 */  lw    $t7, ($t6)
/* 00464738 108F0008 */  beq   $a0, $t7, .L0046475C
/* 0046473C 00000000 */   nop   
/* 00464740 8C42000C */  lw    $v0, 0xc($v0)
.L00464744:
/* 00464744 10400005 */  beqz  $v0, .L0046475C
/* 00464748 00000000 */   nop   
/* 0046474C 8C580008 */  lw    $t8, 8($v0)
/* 00464750 8F190000 */  lw    $t9, ($t8)
/* 00464754 5499FFFB */  bnel  $a0, $t9, .L00464744
/* 00464758 8C42000C */   lw    $v0, 0xc($v0)
.L0046475C:
/* 0046475C 14400004 */  bnez  $v0, .L00464770
/* 00464760 00401825 */   move  $v1, $v0
/* 00464764 8F8389DC */  lw     $v1, %got(dft_livbb)($gp)
/* 00464768 03E00008 */  jr    $ra
/* 0046476C 8C620000 */   lw    $v0, ($v1)

.L00464770:
/* 00464770 03E00008 */  jr    $ra
/* 00464774 00601025 */   move  $v0, $v1
    .type gettolivbb, @function
    .size gettolivbb, .-gettolivbb
    .end gettolivbb

glabel prehascup
    .ent prehascup
    # 00464BFC localcolor
/* 00464778 3C1C0FBB */  .cpload $t9
/* 0046477C 279C5B18 */  
/* 00464780 0399E021 */  
/* 00464784 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 00464788 AFB2001C */  sw    $s2, 0x1c($sp)
/* 0046478C AFB10018 */  sw    $s1, 0x18($sp)
/* 00464790 AFB00014 */  sw    $s0, 0x14($sp)
/* 00464794 00808025 */  move  $s0, $a0
/* 00464798 00A09025 */  move  $s2, $a1
/* 0046479C AFBF0024 */  sw    $ra, 0x24($sp)
/* 004647A0 AFBC0020 */  sw    $gp, 0x20($sp)
/* 004647A4 10800021 */  beqz  $a0, .L0046482C
/* 004647A8 00008825 */   move  $s1, $zero
/* 004647AC 8E020000 */  lw    $v0, ($s0)
.L004647B0:
/* 004647B0 8C4E0020 */  lw    $t6, 0x20($v0)
/* 004647B4 91CF0000 */  lbu   $t7, ($t6)
/* 004647B8 2DF80040 */  sltiu $t8, $t7, 0x40
/* 004647BC 13000009 */  beqz  $t8, .L004647E4
/* 004647C0 00000000 */   nop   
/* 004647C4 8F898044 */  lw    $t1, %got(D_10010F30)($gp)
/* 004647C8 000FC943 */  sra   $t9, $t7, 5
/* 004647CC 00194080 */  sll   $t0, $t9, 2
/* 004647D0 25290F30 */  addiu $t1, %lo(D_10010F30) # addiu $t1, $t1, 0xf30
/* 004647D4 01285021 */  addu  $t2, $t1, $t0
/* 004647D8 8D4B0000 */  lw    $t3, ($t2)
/* 004647DC 01EB6004 */  sllv  $t4, $t3, $t7
/* 004647E0 29980000 */  slti  $t8, $t4, 0
.L004647E4:
/* 004647E4 5300000D */  beql  $t8, $zero, .L0046481C
/* 004647E8 8E100004 */   lw    $s0, 4($s0)
/* 004647EC 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 004647F0 02402025 */  move  $a0, $s2
/* 004647F4 2445012C */  addiu $a1, $v0, 0x12c
/* 004647F8 0320F809 */  jalr  $t9
/* 004647FC 00000000 */   nop   
/* 00464800 10400003 */  beqz  $v0, .L00464810
/* 00464804 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00464808 10000004 */  b     .L0046481C
/* 0046480C 24110001 */   li    $s1, 1
.L00464810:
/* 00464810 10000002 */  b     .L0046481C
/* 00464814 8E100004 */   lw    $s0, 4($s0)
/* 00464818 8E100004 */  lw    $s0, 4($s0)
.L0046481C:
/* 0046481C 56200004 */  bnezl $s1, .L00464830
/* 00464820 8FBF0024 */   lw    $ra, 0x24($sp)
/* 00464824 5600FFE2 */  bnezl $s0, .L004647B0
/* 00464828 8E020000 */   lw    $v0, ($s0)
.L0046482C:
/* 0046482C 8FBF0024 */  lw    $ra, 0x24($sp)
.L00464830:
/* 00464830 02201025 */  move  $v0, $s1
/* 00464834 8FB10018 */  lw    $s1, 0x18($sp)
/* 00464838 8FB00014 */  lw    $s0, 0x14($sp)
/* 0046483C 8FB2001C */  lw    $s2, 0x1c($sp)
/* 00464840 03E00008 */  jr    $ra
/* 00464844 27BD0028 */   addiu $sp, $sp, 0x28
    .type prehascup, @function
    .size prehascup, .-prehascup
    .end prehascup

    .type func_00464848, @function
func_00464848:
    # 00464910 allsucmember
/* 00464848 3C1C0FBB */  .cpload $t9
/* 0046484C 279C5A48 */  
/* 00464850 0399E021 */  
/* 00464854 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 00464858 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0046485C AFBC0018 */  sw    $gp, 0x18($sp)
/* 00464860 8C430004 */  lw    $v1, 4($v0)
/* 00464864 8C460000 */  lw    $a2, ($v0)
/* 00464868 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 0046486C 8C6E0000 */  lw    $t6, ($v1)
/* 00464870 8CC50000 */  lw    $a1, ($a2)
/* 00464874 95C40002 */  lhu   $a0, 2($t6)
/* 00464878 AFA30024 */  sw    $v1, 0x24($sp)
/* 0046487C AFA60020 */  sw    $a2, 0x20($sp)
/* 00464880 0320F809 */  jalr  $t9
/* 00464884 24A50114 */   addiu $a1, $a1, 0x114
/* 00464888 304F00FF */  andi  $t7, $v0, 0xff
/* 0046488C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00464890 8FA30024 */  lw    $v1, 0x24($sp)
/* 00464894 8FA60020 */  lw    $a2, 0x20($sp)
/* 00464898 15E00018 */  bnez  $t7, .L004648FC
/* 0046489C 304400FF */   andi  $a0, $v0, 0xff
/* 004648A0 8CC20000 */  lw    $v0, ($a2)
/* 004648A4 8C580020 */  lw    $t8, 0x20($v0)
/* 004648A8 93190000 */  lbu   $t9, ($t8)
/* 004648AC 2F280040 */  sltiu $t0, $t9, 0x40
/* 004648B0 11000009 */  beqz  $t0, .L004648D8
/* 004648B4 00000000 */   nop   
/* 004648B8 8F8B8044 */  lw    $t3, %got(D_10010F38)($gp)
/* 004648BC 00194943 */  sra   $t1, $t9, 5
/* 004648C0 00095080 */  sll   $t2, $t1, 2
/* 004648C4 256B0F38 */  addiu $t3, %lo(D_10010F38) # addiu $t3, $t3, 0xf38
/* 004648C8 016A6021 */  addu  $t4, $t3, $t2
/* 004648CC 8D8D0000 */  lw    $t5, ($t4)
/* 004648D0 032D7004 */  sllv  $t6, $t5, $t9
/* 004648D4 29C80000 */  slti  $t0, $t6, 0
.L004648D8:
/* 004648D8 51000009 */  beql  $t0, $zero, .L00464900
/* 004648DC 8FBF001C */   lw    $ra, 0x1c($sp)
/* 004648E0 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 004648E4 8C780000 */  lw    $t8, ($v1)
/* 004648E8 2445012C */  addiu $a1, $v0, 0x12c
/* 004648EC 0320F809 */  jalr  $t9
/* 004648F0 97040002 */   lhu   $a0, 2($t8)
/* 004648F4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004648F8 304400FF */  andi  $a0, $v0, 0xff
.L004648FC:
/* 004648FC 8FBF001C */  lw    $ra, 0x1c($sp)
.L00464900:
/* 00464900 27BD0030 */  addiu $sp, $sp, 0x30
/* 00464904 00801025 */  move  $v0, $a0
/* 00464908 03E00008 */  jr    $ra
/* 0046490C 00000000 */   nop   

glabel allsucmember
    .ent allsucmember
    # 00464BFC localcolor
    # 00467008 updatelivran
/* 00464910 3C1C0FBB */  .cpload $t9
/* 00464914 279C5980 */  
/* 00464918 0399E021 */  
/* 0046491C 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 00464920 AFB10018 */  sw    $s1, 0x18($sp)
/* 00464924 AFB00014 */  sw    $s0, 0x14($sp)
/* 00464928 00808025 */  move  $s0, $a0
/* 0046492C AFBF0024 */  sw    $ra, 0x24($sp)
/* 00464930 AFBC0020 */  sw    $gp, 0x20($sp)
/* 00464934 AFB2001C */  sw    $s2, 0x1c($sp)
/* 00464938 AFA50034 */  sw    $a1, 0x34($sp)
/* 0046493C 1080003C */  beqz  $a0, .L00464A30
/* 00464940 24110001 */   li    $s1, 1
/* 00464944 27B20030 */  addiu $s2, $sp, 0x30
.L00464948:
/* 00464948 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 0046494C 8E0E0000 */  lw    $t6, ($s0)
/* 00464950 8FA50034 */  lw    $a1, 0x34($sp)
/* 00464954 95C40008 */  lhu   $a0, 8($t6)
/* 00464958 0320F809 */  jalr  $t9
/* 0046495C 24A50014 */   addiu $a1, $a1, 0x14
/* 00464960 14400023 */  bnez  $v0, .L004649F0
/* 00464964 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00464968 8F99802C */  lw    $t9, %got(func_00464848)($gp)
/* 0046496C AFB00030 */  sw    $s0, 0x30($sp)
/* 00464970 02401025 */  move  $v0, $s2
/* 00464974 27394848 */  addiu $t9, %lo(func_00464848) # addiu $t9, $t9, 0x4848
/* 00464978 0320F809 */  jalr  $t9
/* 0046497C 00000000 */   nop   
/* 00464980 14400016 */  bnez  $v0, .L004649DC
/* 00464984 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00464988 8FB00030 */  lw    $s0, 0x30($sp)
/* 0046498C 8FAF0034 */  lw    $t7, 0x34($sp)
/* 00464990 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00464994 8E050000 */  lw    $a1, ($s0)
/* 00464998 8DF80000 */  lw    $t8, ($t7)
/* 0046499C 24A50144 */  addiu $a1, $a1, 0x144
/* 004649A0 0320F809 */  jalr  $t9
/* 004649A4 97040002 */   lhu   $a0, 2($t8)
/* 004649A8 1040000F */  beqz  $v0, .L004649E8
/* 004649AC 8FBC0020 */   lw    $gp, 0x20($sp)
/* 004649B0 8FB90034 */  lw    $t9, 0x34($sp)
/* 004649B4 8E050000 */  lw    $a1, ($s0)
/* 004649B8 8F280000 */  lw    $t0, ($t9)
/* 004649BC 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 004649C0 24A5010C */  addiu $a1, $a1, 0x10c
/* 004649C4 95040002 */  lhu   $a0, 2($t0)
/* 004649C8 0320F809 */  jalr  $t9
/* 004649CC 00000000 */   nop   
/* 004649D0 14400005 */  bnez  $v0, .L004649E8
/* 004649D4 8FBC0020 */   lw    $gp, 0x20($sp)
/* 004649D8 AFB00030 */  sw    $s0, 0x30($sp)
.L004649DC:
/* 004649DC 8FB00030 */  lw    $s0, 0x30($sp)
/* 004649E0 1000000F */  b     .L00464A20
/* 004649E4 00008825 */   move  $s1, $zero
.L004649E8:
/* 004649E8 1000000D */  b     .L00464A20
/* 004649EC 8E100004 */   lw    $s0, 4($s0)
.L004649F0:
/* 004649F0 8F9984D8 */  lw    $t9, %call16(gettolivbb)($gp)
/* 004649F4 8FA90034 */  lw    $t1, 0x34($sp)
/* 004649F8 8E050000 */  lw    $a1, ($s0)
/* 004649FC 0320F809 */  jalr  $t9
/* 00464A00 8D240000 */   lw    $a0, ($t1)
/* 00464A04 904A0015 */  lbu   $t2, 0x15($v0)
/* 00464A08 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00464A0C 51400004 */  beql  $t2, $zero, .L00464A20
/* 00464A10 8E100004 */   lw    $s0, 4($s0)
/* 00464A14 10000002 */  b     .L00464A20
/* 00464A18 00008825 */   move  $s1, $zero
/* 00464A1C 8E100004 */  lw    $s0, 4($s0)
.L00464A20:
/* 00464A20 52200004 */  beql  $s1, $zero, .L00464A34
/* 00464A24 8FBF0024 */   lw    $ra, 0x24($sp)
/* 00464A28 1600FFC7 */  bnez  $s0, .L00464948
/* 00464A2C 00000000 */   nop   
.L00464A30:
/* 00464A30 8FBF0024 */  lw    $ra, 0x24($sp)
.L00464A34:
/* 00464A34 02201025 */  move  $v0, $s1
/* 00464A38 8FB10018 */  lw    $s1, 0x18($sp)
/* 00464A3C 8FB00014 */  lw    $s0, 0x14($sp)
/* 00464A40 8FB2001C */  lw    $s2, 0x1c($sp)
/* 00464A44 03E00008 */  jr    $ra
/* 00464A48 27BD0030 */   addiu $sp, $sp, 0x30
    .type allsucmember, @function
    .size allsucmember, .-allsucmember
    .end allsucmember

glabel preallmember
    .ent preallmember
    # 00464BFC localcolor
    # 00467008 updatelivran
/* 00464A4C 3C1C0FBB */  .cpload $t9
/* 00464A50 279C5844 */  
/* 00464A54 0399E021 */  
/* 00464A58 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 00464A5C AFB10018 */  sw    $s1, 0x18($sp)
/* 00464A60 AFB00014 */  sw    $s0, 0x14($sp)
/* 00464A64 00808025 */  move  $s0, $a0
/* 00464A68 AFBF0024 */  sw    $ra, 0x24($sp)
/* 00464A6C AFBC0020 */  sw    $gp, 0x20($sp)
/* 00464A70 AFB2001C */  sw    $s2, 0x1c($sp)
/* 00464A74 10800010 */  beqz  $a0, .L00464AB8
/* 00464A78 24110001 */   li    $s1, 1
/* 00464A7C 24B20014 */  addiu $s2, $a1, 0x14
.L00464A80:
/* 00464A80 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00464A84 8E0E0000 */  lw    $t6, ($s0)
/* 00464A88 02402825 */  move  $a1, $s2
/* 00464A8C 0320F809 */  jalr  $t9
/* 00464A90 95C40008 */   lhu   $a0, 8($t6)
/* 00464A94 14400003 */  bnez  $v0, .L00464AA4
/* 00464A98 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00464A9C 10000002 */  b     .L00464AA8
/* 00464AA0 00008825 */   move  $s1, $zero
.L00464AA4:
/* 00464AA4 8E100004 */  lw    $s0, 4($s0)
.L00464AA8:
/* 00464AA8 52200004 */  beql  $s1, $zero, .L00464ABC
/* 00464AAC 8FBF0024 */   lw    $ra, 0x24($sp)
/* 00464AB0 1600FFF3 */  bnez  $s0, .L00464A80
/* 00464AB4 00000000 */   nop   
.L00464AB8:
/* 00464AB8 8FBF0024 */  lw    $ra, 0x24($sp)
.L00464ABC:
/* 00464ABC 02201025 */  move  $v0, $s1
/* 00464AC0 8FB10018 */  lw    $s1, 0x18($sp)
/* 00464AC4 8FB00014 */  lw    $s0, 0x14($sp)
/* 00464AC8 8FB2001C */  lw    $s2, 0x1c($sp)
/* 00464ACC 03E00008 */  jr    $ra
/* 00464AD0 27BD0028 */   addiu $sp, $sp, 0x28
    .type preallmember, @function
    .size preallmember, .-preallmember
    .end preallmember

glabel alloc_livbb
    .ent alloc_livbb
    # 00464BFC localcolor
    # 00467008 updatelivran
/* 00464AD4 3C1C0FBB */  .cpload $t9
/* 00464AD8 279C57BC */  
/* 00464ADC 0399E021 */  
/* 00464AE0 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 00464AE4 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00464AE8 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00464AEC AFBC0018 */  sw    $gp, 0x18($sp)
/* 00464AF0 24040018 */  li    $a0, 24
/* 00464AF4 0320F809 */  jalr  $t9
/* 00464AF8 8F858954 */   lw     $a1, %got(perm_heap)($gp)
/* 00464AFC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00464B00 14400006 */  bnez  $v0, .L00464B1C
/* 00464B04 00401825 */   move  $v1, $v0
/* 00464B08 8F818B20 */  lw     $at, %got(outofmem)($gp)
/* 00464B0C 240E0001 */  li    $t6, 1
/* 00464B10 00001025 */  move  $v0, $zero
/* 00464B14 10000010 */  b     .L00464B58
/* 00464B18 A02E0000 */   sb    $t6, ($at)
.L00464B1C:
/* 00464B1C 8F8F89DC */  lw     $t7, %got(dft_livbb)($gp)
/* 00464B20 00601025 */  move  $v0, $v1
/* 00464B24 8DEF0000 */  lw    $t7, ($t7)
/* 00464B28 8DF90000 */  lw    $t9, ($t7)
/* 00464B2C AC790000 */  sw    $t9, ($v1)
/* 00464B30 8DF80004 */  lw    $t8, 4($t7)
/* 00464B34 AC780004 */  sw    $t8, 4($v1)
/* 00464B38 8DF90008 */  lw    $t9, 8($t7)
/* 00464B3C AC790008 */  sw    $t9, 8($v1)
/* 00464B40 8DF8000C */  lw    $t8, 0xc($t7)
/* 00464B44 AC78000C */  sw    $t8, 0xc($v1)
/* 00464B48 8DF90010 */  lw    $t9, 0x10($t7)
/* 00464B4C AC790010 */  sw    $t9, 0x10($v1)
/* 00464B50 8DF80014 */  lw    $t8, 0x14($t7)
/* 00464B54 AC780014 */  sw    $t8, 0x14($v1)
.L00464B58:
/* 00464B58 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00464B5C 27BD0020 */  addiu $sp, $sp, 0x20
/* 00464B60 03E00008 */  jr    $ra
/* 00464B64 00000000 */   nop   
    .type alloc_livbb, @function
    .size alloc_livbb, .-alloc_livbb
    .end alloc_livbb

glabel r2_overlap_r3
    .ent r2_overlap_r3
    # 00464BFC localcolor
/* 00464B68 3C1C0FBB */  .cpload $t9
/* 00464B6C 279C5728 */  
/* 00464B70 0399E021 */  
/* 00464B74 8F8F8DF8 */  lw     $t7, %got(table)($gp)
/* 00464B78 AFA40000 */  sw    $a0, ($sp)
/* 00464B7C 00047080 */  sll   $t6, $a0, 2
/* 00464B80 01CFC021 */  addu  $t8, $t6, $t7
/* 00464B84 8F020000 */  lw    $v0, ($t8)
/* 00464B88 24040002 */  li    $a0, 2
/* 00464B8C 24030003 */  li    $v1, 3
/* 00464B90 90590000 */  lbu   $t9, ($v0)
.L00464B94:
/* 00464B94 3C011100 */  lui   $at, 0x1100
/* 00464B98 2F280020 */  sltiu $t0, $t9, 0x20
/* 00464B9C 00084823 */  negu  $t1, $t0
/* 00464BA0 01215024 */  and   $t2, $t1, $at
/* 00464BA4 032A5804 */  sllv  $t3, $t2, $t9
/* 00464BA8 0563000F */  bgezl $t3, .L00464BE8
/* 00464BAC 8C42001C */   lw    $v0, 0x1c($v0)
/* 00464BB0 904C002E */  lbu   $t4, 0x2e($v0)
/* 00464BB4 318D0007 */  andi  $t5, $t4, 7
/* 00464BB8 546D000B */  bnel  $v1, $t5, .L00464BE8
/* 00464BBC 8C42001C */   lw    $v0, 0x1c($v0)
/* 00464BC0 8C4E0028 */  lw    $t6, 0x28($v0)
/* 00464BC4 548E0008 */  bnel  $a0, $t6, .L00464BE8
/* 00464BC8 8C42001C */   lw    $v0, 0x1c($v0)
/* 00464BCC 904F0020 */  lbu   $t7, 0x20($v0)
/* 00464BD0 29E10005 */  slti  $at, $t7, 5
/* 00464BD4 54200004 */  bnezl $at, .L00464BE8
/* 00464BD8 8C42001C */   lw    $v0, 0x1c($v0)
/* 00464BDC 03E00008 */  jr    $ra
/* 00464BE0 24020001 */   li    $v0, 1

/* 00464BE4 8C42001C */  lw    $v0, 0x1c($v0)
.L00464BE8:
/* 00464BE8 5440FFEA */  bnezl $v0, .L00464B94
/* 00464BEC 90590000 */   lbu   $t9, ($v0)
/* 00464BF0 00001025 */  move  $v0, $zero
/* 00464BF4 03E00008 */  jr    $ra
/* 00464BF8 00000000 */   nop   
    .type r2_overlap_r3, @function
    .size r2_overlap_r3, .-r2_overlap_r3
    .end r2_overlap_r3

glabel localcolor
    .ent localcolor
    # 00456A2C oneproc
/* 00464BFC 3C1C0FBB */  .cpload $t9
/* 00464C00 279C5694 */  
/* 00464C04 0399E021 */  
/* 00464C08 27BDFF58 */  addiu $sp, $sp, -0xa8
/* 00464C0C 8F8489B8 */  lw     $a0, %got(curstaticno)($gp)
/* 00464C10 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 00464C14 AFB0001C */  sw    $s0, 0x1c($sp)
/* 00464C18 8F908954 */  lw     $s0, %got(perm_heap)($gp)
/* 00464C1C 8C840000 */  lw    $a0, ($a0)
/* 00464C20 AFBF0044 */  sw    $ra, 0x44($sp)
/* 00464C24 AFBE0040 */  sw    $fp, 0x40($sp)
/* 00464C28 AFBC003C */  sw    $gp, 0x3c($sp)
/* 00464C2C AFB70038 */  sw    $s7, 0x38($sp)
/* 00464C30 AFB60034 */  sw    $s6, 0x34($sp)
/* 00464C34 AFB50030 */  sw    $s5, 0x30($sp)
/* 00464C38 AFB4002C */  sw    $s4, 0x2c($sp)
/* 00464C3C AFB30028 */  sw    $s3, 0x28($sp)
/* 00464C40 AFB20024 */  sw    $s2, 0x24($sp)
/* 00464C44 AFB10020 */  sw    $s1, 0x20($sp)
/* 00464C48 02002825 */  move  $a1, $s0
/* 00464C4C 0320F809 */  jalr  $t9
/* 00464C50 00042080 */   sll   $a0, $a0, 2
/* 00464C54 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00464C58 02002825 */  move  $a1, $s0
/* 00464C5C 8F8489B8 */  lw     $a0, %got(curstaticno)($gp)
/* 00464C60 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 00464C64 8F818C6C */  lw     $at, %got(formingtab)($gp)
/* 00464C68 8C840000 */  lw    $a0, ($a0)
/* 00464C6C AC220000 */  sw    $v0, ($at)
/* 00464C70 0320F809 */  jalr  $t9
/* 00464C74 00042080 */   sll   $a0, $a0, 2
/* 00464C78 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00464C7C 8F9389AC */  lw     $s3, %got(graphhead)($gp)
/* 00464C80 8F818C68 */  lw     $at, %got(bbtab)($gp)
/* 00464C84 8E730000 */  lw    $s3, ($s3)
/* 00464C88 AC220000 */  sw    $v0, ($at)
/* 00464C8C 1260000A */  beqz  $s3, .L00464CB8
/* 00464C90 00000000 */   nop   
/* 00464C94 8F828C68 */  lw     $v0, %got(bbtab)($gp)
/* 00464C98 8C420000 */  lw    $v0, ($v0)
/* 00464C9C 966E0008 */  lhu   $t6, 8($s3)
.L00464CA0:
/* 00464CA0 000E7880 */  sll   $t7, $t6, 2
/* 00464CA4 004FC021 */  addu  $t8, $v0, $t7
/* 00464CA8 AF130000 */  sw    $s3, ($t8)
/* 00464CAC 8E73000C */  lw    $s3, 0xc($s3)
/* 00464CB0 5660FFFB */  bnezl $s3, .L00464CA0
/* 00464CB4 966E0008 */   lhu   $t6, 8($s3)
.L00464CB8:
/* 00464CB8 8F9981E0 */  lw    $t9, %call16(formbvlivran)($gp)
/* 00464CBC 8F848D68 */  lw     $a0, %got(livrantemp)($gp)
/* 00464CC0 0320F809 */  jalr  $t9
/* 00464CC4 00000000 */   nop   
/* 00464CC8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00464CCC 0000B825 */  move  $s7, $zero
/* 00464CD0 8F8289E0 */  lw     $v0, %got(bitposcount)($gp)
/* 00464CD4 8C420000 */  lw    $v0, ($v0)
/* 00464CD8 2442FFFF */  addiu $v0, $v0, -1
/* 00464CDC 044003EA */  bltz  $v0, .L00465C88
/* 00464CE0 24420001 */   addiu $v0, $v0, 1
/* 00464CE4 AFA20078 */  sw    $v0, 0x78($sp)
/* 00464CE8 AFA0009C */  sw    $zero, 0x9c($sp)
/* 00464CEC 8F9E89EC */  lw     $fp, %got(bittab)($gp)
.L00464CF0:
/* 00464CF0 8FD90000 */  lw    $t9, ($fp)
/* 00464CF4 8FA4009C */  lw    $a0, 0x9c($sp)
/* 00464CF8 8F858D28 */  lw     $a1, %got(iscolored12)($gp)
/* 00464CFC 03374021 */  addu  $t0, $t9, $s7
/* 00464D00 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00464D04 8D160000 */  lw    $s6, ($t0)
/* 00464D08 0320F809 */  jalr  $t9
/* 00464D0C 00000000 */   nop   
/* 00464D10 104003D7 */  beqz  $v0, .L00465C70
/* 00464D14 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00464D18 8FC90000 */  lw    $t1, ($fp)
/* 00464D1C 24030003 */  li    $v1, 3
/* 00464D20 27AE0068 */  addiu $t6, $sp, 0x68
/* 00464D24 01371021 */  addu  $v0, $t1, $s7
/* 00464D28 8C4A0004 */  lw    $t2, 4($v0)
/* 00464D2C AD400038 */  sw    $zero, 0x38($t2)
/* 00464D30 92CB0000 */  lbu   $t3, ($s6)
/* 00464D34 546B0006 */  bnel  $v1, $t3, .L00464D50
/* 00464D38 8C430004 */   lw    $v1, 4($v0)
/* 00464D3C 92CC0016 */  lbu   $t4, 0x16($s6)
/* 00464D40 318D0007 */  andi  $t5, $t4, 7
/* 00464D44 106D0033 */  beq   $v1, $t5, .L00464E14
/* 00464D48 00000000 */   nop   
/* 00464D4C 8C430004 */  lw    $v1, 4($v0)
.L00464D50:
/* 00464D50 AFA00068 */  sw    $zero, 0x68($sp)
/* 00464D54 AFA0006C */  sw    $zero, 0x6c($sp)
/* 00464D58 AFA00070 */  sw    $zero, 0x70($sp)
/* 00464D5C AFA00074 */  sw    $zero, 0x74($sp)
/* 00464D60 A0600022 */  sb    $zero, 0x22($v1)
/* 00464D64 8DD80000 */  lw    $t8, ($t6)
/* 00464D68 8F998180 */  lw    $t9, %call16(initbv)($gp)
/* 00464D6C 8F848D68 */  lw     $a0, %got(livrantemp)($gp)
/* 00464D70 AFB80004 */  sw    $t8, 4($sp)
/* 00464D74 8DCF0004 */  lw    $t7, 4($t6)
/* 00464D78 8FA50004 */  lw    $a1, 4($sp)
/* 00464D7C 8C700008 */  lw    $s0, 8($v1)
/* 00464D80 AFAF0008 */  sw    $t7, 8($sp)
/* 00464D84 8DC70008 */  lw    $a3, 8($t6)
/* 00464D88 8FA60008 */  lw    $a2, 8($sp)
/* 00464D8C AFA7000C */  sw    $a3, 0xc($sp)
/* 00464D90 8DCF000C */  lw    $t7, 0xc($t6)
/* 00464D94 0320F809 */  jalr  $t9
/* 00464D98 AFAF0010 */   sw    $t7, 0x10($sp)
/* 00464D9C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00464DA0 92190012 */  lbu   $t9, 0x12($s0)
.L00464DA4:
/* 00464DA4 57200005 */  bnezl $t9, .L00464DBC
/* 00464DA8 8FCA0000 */   lw    $t2, ($fp)
/* 00464DAC 92080014 */  lbu   $t0, 0x14($s0)
/* 00464DB0 1100000C */  beqz  $t0, .L00464DE4
/* 00464DB4 00000000 */   nop   
/* 00464DB8 8FCA0000 */  lw    $t2, ($fp)
.L00464DBC:
/* 00464DBC 24090001 */  li    $t1, 1
/* 00464DC0 8F848D68 */  lw     $a0, %got(livrantemp)($gp)
/* 00464DC4 01575821 */  addu  $t3, $t2, $s7
/* 00464DC8 8D6C0004 */  lw    $t4, 4($t3)
/* 00464DCC A1890022 */  sb    $t1, 0x22($t4)
/* 00464DD0 8F9981A4 */  lw    $t9, %call16(bvectunion)($gp)
/* 00464DD4 8E050000 */  lw    $a1, ($s0)
/* 00464DD8 0320F809 */  jalr  $t9
/* 00464DDC 24A5011C */   addiu $a1, $a1, 0x11c
/* 00464DE0 8FBC003C */  lw    $gp, 0x3c($sp)
.L00464DE4:
/* 00464DE4 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00464DE8 8E050000 */  lw    $a1, ($s0)
/* 00464DEC 8FA4009C */  lw    $a0, 0x9c($sp)
/* 00464DF0 0320F809 */  jalr  $t9
/* 00464DF4 24A50144 */   addiu $a1, $a1, 0x144
/* 00464DF8 2C4D0001 */  sltiu $t5, $v0, 1
/* 00464DFC A20D0017 */  sb    $t5, 0x17($s0)
/* 00464E00 8E100004 */  lw    $s0, 4($s0)
/* 00464E04 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00464E08 5600FFE6 */  bnezl $s0, .L00464DA4
/* 00464E0C 92190012 */   lbu   $t9, 0x12($s0)
/* 00464E10 24030003 */  li    $v1, 3
.L00464E14:
/* 00464E14 8F9389AC */  lw     $s3, %got(graphhead)($gp)
/* 00464E18 8E730000 */  lw    $s3, ($s3)
/* 00464E1C 52600142 */  beql  $s3, $zero, .L00465328
/* 00464E20 92D80000 */   lbu   $t8, ($s6)
.L00464E24:
/* 00464E24 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00464E28 8FA4009C */  lw    $a0, 0x9c($sp)
/* 00464E2C 26650134 */  addiu $a1, $s3, 0x134
/* 00464E30 0320F809 */  jalr  $t9
/* 00464E34 00000000 */   nop   
/* 00464E38 10400136 */  beqz  $v0, .L00465314
/* 00464E3C 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00464E40 8FCE0000 */  lw    $t6, ($fp)
/* 00464E44 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00464E48 96640008 */  lhu   $a0, 8($s3)
/* 00464E4C 01D77821 */  addu  $t7, $t6, $s7
/* 00464E50 8DE50004 */  lw    $a1, 4($t7)
/* 00464E54 0320F809 */  jalr  $t9
/* 00464E58 24A50014 */   addiu $a1, $a1, 0x14
/* 00464E5C 1440012D */  bnez  $v0, .L00465314
/* 00464E60 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00464E64 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00464E68 8FA4009C */  lw    $a0, 0x9c($sp)
/* 00464E6C 266500F4 */  addiu $a1, $s3, 0xf4
/* 00464E70 0320F809 */  jalr  $t9
/* 00464E74 00000000 */   nop   
/* 00464E78 14400126 */  bnez  $v0, .L00465314
/* 00464E7C 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00464E80 8F988BF4 */  lw     $t8, %got(numlu)($gp)
/* 00464E84 8F8889AC */  lw     $t0, %got(graphhead)($gp)
/* 00464E88 8F818BF4 */  lw     $at, %got(numlu)($gp)
/* 00464E8C 8F180000 */  lw    $t8, ($t8)
/* 00464E90 8D080000 */  lw    $t0, ($t0)
/* 00464E94 8F9089DC */  lw     $s0, %got(dft_livbb)($gp)
/* 00464E98 27190001 */  addiu $t9, $t8, 1
/* 00464E9C AC390000 */  sw    $t9, ($at)
/* 00464EA0 1668008E */  bne   $s3, $t0, .L004650DC
/* 00464EA4 8E100000 */   lw    $s0, ($s0)
/* 00464EA8 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00464EAC 8FA4009C */  lw    $a0, 0x9c($sp)
/* 00464EB0 8F858D24 */  lw     $a1, %got(coloredparms)($gp)
/* 00464EB4 0320F809 */  jalr  $t9
/* 00464EB8 00000000 */   nop   
/* 00464EBC 10400087 */  beqz  $v0, .L004650DC
/* 00464EC0 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00464EC4 8F9986BC */  lw    $t9, %call16(regclassof)($gp)
/* 00464EC8 02C02025 */  move  $a0, $s6
/* 00464ECC 0320F809 */  jalr  $t9
/* 00464ED0 00000000 */   nop   
/* 00464ED4 92CA0016 */  lbu   $t2, 0x16($s6)
/* 00464ED8 24010001 */  li    $at, 1
/* 00464EDC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00464EE0 314B0007 */  andi  $t3, $t2, 7
/* 00464EE4 15610003 */  bne   $t3, $at, .L00464EF4
/* 00464EE8 0040A825 */   move  $s5, $v0
/* 00464EEC 1000000D */  b     .L00464F24
/* 00464EF0 24120001 */   li    $s2, 1
.L00464EF4:
/* 00464EF4 8F8C8D44 */  lw     $t4, %got(firstparmreg)($gp)
/* 00464EF8 00024880 */  sll   $t1, $v0, 2
/* 00464EFC 8ECF0010 */  lw    $t7, 0x10($s6)
/* 00464F00 258CFFFC */  addiu $t4, $t4, -4
/* 00464F04 012C6821 */  addu  $t5, $t1, $t4
/* 00464F08 8DAE0000 */  lw    $t6, ($t5)
/* 00464F0C 05E10003 */  bgez  $t7, .L00464F1C
/* 00464F10 000FC083 */   sra   $t8, $t7, 2
/* 00464F14 25E10003 */  addiu $at, $t7, 3
/* 00464F18 0001C083 */  sra   $t8, $at, 2
.L00464F1C:
/* 00464F1C 01D89021 */  addu  $s2, $t6, $t8
/* 00464F20 325200FF */  andi  $s2, $s2, 0xff
.L00464F24:
/* 00464F24 24010002 */  li    $at, 2
/* 00464F28 1441000B */  bne   $v0, $at, .L00464F58
/* 00464F2C 00000000 */   nop   
/* 00464F30 8ED90010 */  lw    $t9, 0x10($s6)
/* 00464F34 13200008 */  beqz  $t9, .L00464F58
/* 00464F38 00000000 */   nop   
/* 00464F3C 8F8A8D44 */  lw     $t2, %got(firstparmreg)($gp)
/* 00464F40 00024080 */  sll   $t0, $v0, 2
/* 00464F44 254AFFFC */  addiu $t2, $t2, -4
/* 00464F48 010A5821 */  addu  $t3, $t0, $t2
/* 00464F4C 8D720000 */  lw    $s2, ($t3)
/* 00464F50 26520001 */  addiu $s2, $s2, 1
/* 00464F54 325200FF */  andi  $s2, $s2, 0xff
.L00464F58:
/* 00464F58 8F9984E8 */  lw    $t9, %call16(alloc_livbb)($gp)
/* 00464F5C 0320F809 */  jalr  $t9
/* 00464F60 00000000 */   nop   
/* 00464F64 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00464F68 10400347 */  beqz  $v0, .L00465C88
/* 00464F6C 00408025 */   move  $s0, $v0
/* 00464F70 8FC90000 */  lw    $t1, ($fp)
/* 00464F74 24020001 */  li    $v0, 1
/* 00464F78 A2020014 */  sb    $v0, 0x14($s0)
/* 00464F7C A2000017 */  sb    $zero, 0x17($s0)
/* 00464F80 01376021 */  addu  $t4, $t1, $s7
/* 00464F84 8D8D0004 */  lw    $t5, 4($t4)
/* 00464F88 8F8589AC */  lw     $a1, %got(graphhead)($gp)
/* 00464F8C 8F848D68 */  lw     $a0, %got(livrantemp)($gp)
/* 00464F90 A1A20022 */  sb    $v0, 0x22($t5)
/* 00464F94 8F9981A4 */  lw    $t9, %call16(bvectunion)($gp)
/* 00464F98 8CA50000 */  lw    $a1, ($a1)
/* 00464F9C 0320F809 */  jalr  $t9
/* 00464FA0 24A5011C */   addiu $a1, $a1, 0x11c
/* 00464FA4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00464FA8 24010001 */  li    $at, 1
/* 00464FAC 0015A0C0 */  sll   $s4, $s5, 3
/* 00464FB0 8F8F8B0C */  lw     $t7, %got(allcallersave)($gp)
/* 00464FB4 2E4E0040 */  sltiu $t6, $s2, 0x40
/* 00464FB8 91EF0000 */  lbu   $t7, ($t7)
/* 00464FBC 11E00003 */  beqz  $t7, .L00464FCC
/* 00464FC0 00000000 */   nop   
/* 00464FC4 16410043 */  bne   $s2, $at, .L004650D4
/* 00464FC8 00000000 */   nop   
.L00464FCC:
/* 00464FCC 11C00007 */  beqz  $t6, .L00464FEC
/* 00464FD0 02748821 */   addu  $s1, $s3, $s4
/* 00464FD4 0012C143 */  sra   $t8, $s2, 5
/* 00464FD8 0018C880 */  sll   $t9, $t8, 2
/* 00464FDC 02394021 */  addu  $t0, $s1, $t9
/* 00464FE0 8D0A002C */  lw    $t2, 0x2c($t0)
/* 00464FE4 024A5804 */  sllv  $t3, $t2, $s2
/* 00464FE8 296E0000 */  slti  $t6, $t3, 0
.L00464FEC:
/* 00464FEC 15C00039 */  bnez  $t6, .L004650D4
/* 00464FF0 00000000 */   nop   
/* 00464FF4 8F9984C0 */  lw    $t9, %call16(passedinreg)($gp)
/* 00464FF8 8F858A28 */  lw     $a1, %got(offsetpassedbyint)($gp)
/* 00464FFC 02C02025 */  move  $a0, $s6
/* 00465000 0320F809 */  jalr  $t9
/* 00465004 8CA50000 */   lw    $a1, ($a1)
/* 00465008 10400032 */  beqz  $v0, .L004650D4
/* 0046500C 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00465010 8F8C8AA4 */  lw     $t4, %got(doprecolor)($gp)
/* 00465014 2E4D0020 */  sltiu $t5, $s2, 0x20
/* 00465018 02407827 */  not   $t7, $s2
/* 0046501C 918C0000 */  lbu   $t4, ($t4)
/* 00465020 2659FFE0 */  addiu $t9, $s2, -0x20
/* 00465024 2F280020 */  sltiu $t0, $t9, 0x20
/* 00465028 1180002A */  beqz  $t4, .L004650D4
/* 0046502C 01EDC004 */   sllv  $t8, $t5, $t7
/* 00465030 A2120013 */  sb    $s2, 0x13($s0)
/* 00465034 8E2E0030 */  lw    $t6, 0x30($s1)
/* 00465038 8E2B002C */  lw    $t3, 0x2c($s1)
/* 0046503C 01E85004 */  sllv  $t2, $t0, $t7
/* 00465040 01CA6825 */  or    $t5, $t6, $t2
/* 00465044 01784825 */  or    $t1, $t3, $t8
/* 00465048 AE29002C */  sw    $t1, 0x2c($s1)
/* 0046504C AE2D0030 */  sw    $t5, 0x30($s1)
/* 00465050 92C20001 */  lbu   $v0, 1($s6)
/* 00465054 2401000C */  li    $at, 12
/* 00465058 AFAA008C */  sw    $t2, 0x8c($sp)
/* 0046505C 14410003 */  bne   $v0, $at, .L0046506C
/* 00465060 AFB80088 */   sw    $t8, 0x88($sp)
/* 00465064 24010008 */  li    $at, 8
/* 00465068 1281000A */  beq   $s4, $at, .L00465094
.L0046506C:
/* 0046506C 2C590020 */   sltiu $t9, $v0, 0x20
/* 00465070 00194023 */  negu  $t0, $t9
/* 00465074 3C010500 */  lui   $at, 0x500
/* 00465078 01017824 */  and   $t7, $t0, $at
/* 0046507C 004F5004 */  sllv  $t2, $t7, $v0
/* 00465080 05410082 */  bgez  $t2, .L0046528C
/* 00465084 00000000 */   nop   
/* 00465088 8F8B8B28 */  lw     $t3, %got(mips3_64data)($gp)
/* 0046508C 916B0000 */  lbu   $t3, ($t3)
/* 00465090 1560007E */  bnez  $t3, .L0046528C
.L00465094:
/* 00465094 26580001 */   addiu $t8, $s2, 1
/* 00465098 8E2F002C */  lw    $t7, 0x2c($s1)
/* 0046509C 8E2B0030 */  lw    $t3, 0x30($s1)
/* 004650A0 03007027 */  not   $t6, $t8
/* 004650A4 270DFFE0 */  addiu $t5, $t8, -0x20
/* 004650A8 2DB90020 */  sltiu $t9, $t5, 0x20
/* 004650AC 2F090020 */  sltiu $t1, $t8, 0x20
/* 004650B0 01C96004 */  sllv  $t4, $t1, $t6
/* 004650B4 01D94004 */  sllv  $t0, $t9, $t6
/* 004650B8 01EC5025 */  or    $t2, $t7, $t4
/* 004650BC 0168C025 */  or    $t8, $t3, $t0
/* 004650C0 AFA8008C */  sw    $t0, 0x8c($sp)
/* 004650C4 AFAC0088 */  sw    $t4, 0x88($sp)
/* 004650C8 AE380030 */  sw    $t8, 0x30($s1)
/* 004650CC 1000006F */  b     .L0046528C
/* 004650D0 AE2A002C */   sw    $t2, 0x2c($s1)
.L004650D4:
/* 004650D4 1000006D */  b     .L0046528C
/* 004650D8 A2000013 */   sb    $zero, 0x13($s0)
.L004650DC:
/* 004650DC 8E6D0018 */  lw    $t5, 0x18($s3)
/* 004650E0 15A0006A */  bnez  $t5, .L0046528C
/* 004650E4 00000000 */   nop   
/* 004650E8 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 004650EC 8FA4009C */  lw    $a0, 0x9c($sp)
/* 004650F0 8F858D24 */  lw     $a1, %got(coloredparms)($gp)
/* 004650F4 0320F809 */  jalr  $t9
/* 004650F8 00000000 */   nop   
/* 004650FC 10400063 */  beqz  $v0, .L0046528C
/* 00465100 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00465104 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00465108 8FA4009C */  lw    $a0, 0x9c($sp)
/* 0046510C 8F858D0C */  lw     $a1, %got(outmodebits)($gp)
/* 00465110 0320F809 */  jalr  $t9
/* 00465114 00000000 */   nop   
/* 00465118 1040005C */  beqz  $v0, .L0046528C
/* 0046511C 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00465120 8F9986BC */  lw    $t9, %call16(regclassof)($gp)
/* 00465124 02C02025 */  move  $a0, $s6
/* 00465128 0320F809 */  jalr  $t9
/* 0046512C 00000000 */   nop   
/* 00465130 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00465134 8EC30010 */  lw    $v1, 0x10($s6)
/* 00465138 0002C880 */  sll   $t9, $v0, 2
/* 0046513C 8F8E8D44 */  lw     $t6, %got(firstparmreg)($gp)
/* 00465140 0040A825 */  move  $s5, $v0
/* 00465144 25CEFFFC */  addiu $t6, $t6, -4
/* 00465148 032E4021 */  addu  $t0, $t9, $t6
/* 0046514C 8D040000 */  lw    $a0, ($t0)
/* 00465150 04610003 */  bgez  $v1, .L00465160
/* 00465154 00037883 */   sra   $t7, $v1, 2
/* 00465158 24610003 */  addiu $at, $v1, 3
/* 0046515C 00017883 */  sra   $t7, $at, 2
.L00465160:
/* 00465160 24010002 */  li    $at, 2
/* 00465164 008F9021 */  addu  $s2, $a0, $t7
/* 00465168 14410005 */  bne   $v0, $at, .L00465180
/* 0046516C 325200FF */   andi  $s2, $s2, 0xff
/* 00465170 10600003 */  beqz  $v1, .L00465180
/* 00465174 00000000 */   nop   
/* 00465178 24920001 */  addiu $s2, $a0, 1
/* 0046517C 325200FF */  andi  $s2, $s2, 0xff
.L00465180:
/* 00465180 8F8C8B0C */  lw     $t4, %got(allcallersave)($gp)
/* 00465184 2E4A0040 */  sltiu $t2, $s2, 0x40
/* 00465188 918C0000 */  lbu   $t4, ($t4)
/* 0046518C 1580003F */  bnez  $t4, .L0046528C
/* 00465190 00000000 */   nop   
/* 00465194 11400008 */  beqz  $t2, .L004651B8
/* 00465198 000258C0 */   sll   $t3, $v0, 3
/* 0046519C 0012C143 */  sra   $t8, $s2, 5
/* 004651A0 00186880 */  sll   $t5, $t8, 2
/* 004651A4 026B4821 */  addu  $t1, $s3, $t3
/* 004651A8 012DC821 */  addu  $t9, $t1, $t5
/* 004651AC 8F2E002C */  lw    $t6, 0x2c($t9)
/* 004651B0 024E4004 */  sllv  $t0, $t6, $s2
/* 004651B4 290A0000 */  slti  $t2, $t0, 0
.L004651B8:
/* 004651B8 15400034 */  bnez  $t2, .L0046528C
/* 004651BC 00000000 */   nop   
/* 004651C0 8F9984C0 */  lw    $t9, %call16(passedinreg)($gp)
/* 004651C4 8F858A28 */  lw     $a1, %got(offsetpassedbyint)($gp)
/* 004651C8 02C02025 */  move  $a0, $s6
/* 004651CC 0320F809 */  jalr  $t9
/* 004651D0 8CA50000 */   lw    $a1, ($a1)
/* 004651D4 1040002D */  beqz  $v0, .L0046528C
/* 004651D8 8FBC003C */   lw    $gp, 0x3c($sp)
/* 004651DC 8F9984E8 */  lw    $t9, %call16(alloc_livbb)($gp)
/* 004651E0 0320F809 */  jalr  $t9
/* 004651E4 00000000 */   nop   
/* 004651E8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004651EC 104002A6 */  beqz  $v0, .L00465C88
/* 004651F0 00408025 */   move  $s0, $v0
/* 004651F4 0015A0C0 */  sll   $s4, $s5, 3
/* 004651F8 A0520013 */  sb    $s2, 0x13($v0)
/* 004651FC A0400017 */  sb    $zero, 0x17($v0)
/* 00465200 02748821 */  addu  $s1, $s3, $s4
/* 00465204 8E2E002C */  lw    $t6, 0x2c($s1)
/* 00465208 8E2F0030 */  lw    $t7, 0x30($s1)
/* 0046520C 2E4C0020 */  sltiu $t4, $s2, 0x20
/* 00465210 02405827 */  not   $t3, $s2
/* 00465214 2649FFE0 */  addiu $t1, $s2, -0x20
/* 00465218 2D2D0020 */  sltiu $t5, $t1, 0x20
/* 0046521C 016CC004 */  sllv  $t8, $t4, $t3
/* 00465220 016DC804 */  sllv  $t9, $t5, $t3
/* 00465224 01D84025 */  or    $t0, $t6, $t8
/* 00465228 01F96025 */  or    $t4, $t7, $t9
/* 0046522C AE2C0030 */  sw    $t4, 0x30($s1)
/* 00465230 AE28002C */  sw    $t0, 0x2c($s1)
/* 00465234 92C90001 */  lbu   $t1, 1($s6)
/* 00465238 2401000C */  li    $at, 12
/* 0046523C AFB9008C */  sw    $t9, 0x8c($sp)
/* 00465240 15210012 */  bne   $t1, $at, .L0046528C
/* 00465244 AFB80088 */   sw    $t8, 0x88($sp)
/* 00465248 24010008 */  li    $at, 8
/* 0046524C 1681000F */  bne   $s4, $at, .L0046528C
/* 00465250 264D0001 */   addiu $t5, $s2, 1
/* 00465254 8E2A002C */  lw    $t2, 0x2c($s1)
/* 00465258 8E290030 */  lw    $t1, 0x30($s1)
/* 0046525C 01A0C827 */  not   $t9, $t5
/* 00465260 25B8FFE0 */  addiu $t8, $t5, -0x20
/* 00465264 2F080020 */  sltiu $t0, $t8, 0x20
/* 00465268 2DAB0020 */  sltiu $t3, $t5, 0x20
/* 0046526C 032B7004 */  sllv  $t6, $t3, $t9
/* 00465270 03287804 */  sllv  $t7, $t0, $t9
/* 00465274 014E6025 */  or    $t4, $t2, $t6
/* 00465278 012F6825 */  or    $t5, $t1, $t7
/* 0046527C AFAF008C */  sw    $t7, 0x8c($sp)
/* 00465280 AFAE0088 */  sw    $t6, 0x88($sp)
/* 00465284 AE2D0030 */  sw    $t5, 0x30($s1)
/* 00465288 AE2C002C */  sw    $t4, 0x2c($s1)
.L0046528C:
/* 0046528C 8F9889DC */  lw     $t8, %got(dft_livbb)($gp)
/* 00465290 8F180000 */  lw    $t8, ($t8)
/* 00465294 52180010 */  beql  $s0, $t8, .L004652D8
/* 00465298 8FC90000 */   lw    $t1, ($fp)
/* 0046529C 8FC80000 */  lw    $t0, ($fp)
/* 004652A0 AE130000 */  sw    $s3, ($s0)
/* 004652A4 01171021 */  addu  $v0, $t0, $s7
/* 004652A8 8C590004 */  lw    $t9, 4($v0)
/* 004652AC 8F2F0008 */  lw    $t7, 8($t9)
/* 004652B0 AE0F0004 */  sw    $t7, 4($s0)
/* 004652B4 8C4A0004 */  lw    $t2, 4($v0)
/* 004652B8 AD500008 */  sw    $s0, 8($t2)
/* 004652BC 8C4E0004 */  lw    $t6, 4($v0)
/* 004652C0 AE0E0008 */  sw    $t6, 8($s0)
/* 004652C4 8E6C0030 */  lw    $t4, 0x30($s3)
/* 004652C8 AE0C000C */  sw    $t4, 0xc($s0)
/* 004652CC 1000000B */  b     .L004652FC
/* 004652D0 AE700030 */   sw    $s0, 0x30($s3)
/* 004652D4 8FC90000 */  lw    $t1, ($fp)
.L004652D8:
/* 004652D8 8F9981E4 */  lw    $t9, %call16(setbitbb)($gp)
/* 004652DC 96650008 */  lhu   $a1, 8($s3)
/* 004652E0 01375821 */  addu  $t3, $t1, $s7
/* 004652E4 8D640004 */  lw    $a0, 4($t3)
/* 004652E8 0320F809 */  jalr  $t9
/* 004652EC 2484000C */   addiu $a0, $a0, 0xc
/* 004652F0 8FCD0000 */  lw    $t5, ($fp)
/* 004652F4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004652F8 01B71021 */  addu  $v0, $t5, $s7
.L004652FC:
/* 004652FC 8F9981E4 */  lw    $t9, %call16(setbitbb)($gp)
/* 00465300 8C440004 */  lw    $a0, 4($v0)
/* 00465304 96650008 */  lhu   $a1, 8($s3)
/* 00465308 0320F809 */  jalr  $t9
/* 0046530C 24840014 */   addiu $a0, $a0, 0x14
/* 00465310 8FBC003C */  lw    $gp, 0x3c($sp)
.L00465314:
/* 00465314 8E73000C */  lw    $s3, 0xc($s3)
/* 00465318 24030003 */  li    $v1, 3
/* 0046531C 1660FEC1 */  bnez  $s3, .L00464E24
/* 00465320 00000000 */   nop   
/* 00465324 92D80000 */  lbu   $t8, ($s6)
.L00465328:
/* 00465328 547800C1 */  bnel  $v1, $t8, .L00465630
/* 0046532C 8FCE0000 */   lw    $t6, ($fp)
/* 00465330 92C80016 */  lbu   $t0, 0x16($s6)
/* 00465334 31190007 */  andi  $t9, $t0, 7
/* 00465338 547900BD */  bnel  $v1, $t9, .L00465630
/* 0046533C 8FCE0000 */   lw    $t6, ($fp)
/* 00465340 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 00465344 8F848D28 */  lw     $a0, %got(iscolored12)($gp)
/* 00465348 8FA5009C */  lw    $a1, 0x9c($sp)
/* 0046534C 0320F809 */  jalr  $t9
/* 00465350 00000000 */   nop   
/* 00465354 92CF0001 */  lbu   $t7, 1($s6)
/* 00465358 3C01000C */  lui   $at, 0xc
/* 0046535C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00465360 2DEA0020 */  sltiu $t2, $t7, 0x20
/* 00465364 000A7023 */  negu  $t6, $t2
/* 00465368 01C16024 */  and   $t4, $t6, $at
/* 0046536C 01EC4804 */  sllv  $t1, $t4, $t7
/* 00465370 05210003 */  bgez  $t1, .L00465380
/* 00465374 8FA5009C */   lw    $a1, 0x9c($sp)
/* 00465378 10000002 */  b     .L00465384
/* 0046537C 24150002 */   li    $s5, 2
.L00465380:
/* 00465380 24150001 */  li    $s5, 1
.L00465384:
/* 00465384 8F8B8D78 */  lw     $t3, %got(iscolored)($gp)
/* 00465388 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 0046538C 0015A0C0 */  sll   $s4, $s5, 3
/* 00465390 256BFFF8 */  addiu $t3, $t3, -8
/* 00465394 0320F809 */  jalr  $t9
/* 00465398 028B2021 */   addu  $a0, $s4, $t3
/* 0046539C 8EC30010 */  lw    $v1, 0x10($s6)
/* 004653A0 2401001D */  li    $at, 29
/* 004653A4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004653A8 10610231 */  beq   $v1, $at, .L00465C70
/* 004653AC 24010002 */   li    $at, 2
/* 004653B0 54610065 */  bnel  $v1, $at, .L00465548
/* 004653B4 24010020 */   li    $at, 32
/* 004653B8 8F8D8B28 */  lw     $t5, %got(mips3_64data)($gp)
/* 004653BC 91AD0000 */  lbu   $t5, ($t5)
/* 004653C0 15A0001B */  bnez  $t5, .L00465430
/* 004653C4 00000000 */   nop   
/* 004653C8 8F9984EC */  lw    $t9, %call16(r2_overlap_r3)($gp)
/* 004653CC 8ED80008 */  lw    $t8, 8($s6)
/* 004653D0 0320F809 */  jalr  $t9
/* 004653D4 97040008 */   lhu   $a0, 8($t8)
/* 004653D8 10400015 */  beqz  $v0, .L00465430
/* 004653DC 8FBC003C */   lw    $gp, 0x3c($sp)
/* 004653E0 8F828D34 */  lw     $v0, %got(firsterreg)($gp)
/* 004653E4 8C420000 */  lw    $v0, ($v0)
/* 004653E8 244E0001 */  addiu $t6, $v0, 1
/* 004653EC 2DCC0020 */  sltiu $t4, $t6, 0x20
/* 004653F0 01C07827 */  not   $t7, $t6
/* 004653F4 2C480020 */  sltiu $t0, $v0, 0x20
/* 004653F8 0040C827 */  not   $t9, $v0
/* 004653FC 03285004 */  sllv  $t2, $t0, $t9
/* 00465400 01EC4804 */  sllv  $t1, $t4, $t7
/* 00465404 01495825 */  or    $t3, $t2, $t1
/* 00465408 25CCFFE0 */  addiu $t4, $t6, -0x20
/* 0046540C 244DFFE0 */  addiu $t5, $v0, -0x20
/* 00465410 2DB80020 */  sltiu $t8, $t5, 0x20
/* 00465414 2D8A0020 */  sltiu $t2, $t4, 0x20
/* 00465418 01EA4804 */  sllv  $t1, $t2, $t7
/* 0046541C 03384004 */  sllv  $t0, $t8, $t9
/* 00465420 AFAB0088 */  sw    $t3, 0x88($sp)
/* 00465424 01095825 */  or    $t3, $t0, $t1
/* 00465428 1000000B */  b     .L00465458
/* 0046542C AFAB008C */   sw    $t3, 0x8c($sp)
.L00465430:
/* 00465430 8F828D34 */  lw     $v0, %got(firsterreg)($gp)
/* 00465434 8C420000 */  lw    $v0, ($v0)
/* 00465438 0040C027 */  not   $t8, $v0
/* 0046543C 244EFFE0 */  addiu $t6, $v0, -0x20
/* 00465440 2DCC0020 */  sltiu $t4, $t6, 0x20
/* 00465444 2C4D0020 */  sltiu $t5, $v0, 0x20
/* 00465448 030DC804 */  sllv  $t9, $t5, $t8
/* 0046544C 030C5004 */  sllv  $t2, $t4, $t8
/* 00465450 AFAA008C */  sw    $t2, 0x8c($sp)
/* 00465454 AFB90088 */  sw    $t9, 0x88($sp)
.L00465458:
/* 00465458 8F8F89C8 */  lw     $t7, %got(staticlinkloc)($gp)
/* 0046545C 8DEF0000 */  lw    $t7, ($t7)
/* 00465460 11E00051 */  beqz  $t7, .L004655A8
/* 00465464 00000000 */   nop   
/* 00465468 8F8389AC */  lw     $v1, %got(graphhead)($gp)
/* 0046546C 2C480040 */  sltiu $t0, $v0, 0x40
/* 00465470 11000007 */  beqz  $t0, .L00465490
/* 00465474 8C630000 */   lw    $v1, ($v1)
/* 00465478 00024943 */  sra   $t1, $v0, 5
/* 0046547C 00095880 */  sll   $t3, $t1, 2
/* 00465480 006B6821 */  addu  $t5, $v1, $t3
/* 00465484 8DB90034 */  lw    $t9, 0x34($t5)
/* 00465488 00597004 */  sllv  $t6, $t9, $v0
/* 0046548C 29C80000 */  slti  $t0, $t6, 0
.L00465490:
/* 00465490 11000045 */  beqz  $t0, .L004655A8
/* 00465494 00000000 */   nop   
/* 00465498 8FD80000 */  lw    $t8, ($fp)
/* 0046549C 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 004654A0 94640008 */  lhu   $a0, 8($v1)
/* 004654A4 03175021 */  addu  $t2, $t8, $s7
/* 004654A8 8D450004 */  lw    $a1, 4($t2)
/* 004654AC 0320F809 */  jalr  $t9
/* 004654B0 24A50014 */   addiu $a1, $a1, 0x14
/* 004654B4 1040003C */  beqz  $v0, .L004655A8
/* 004654B8 8FBC003C */   lw    $gp, 0x3c($sp)
/* 004654BC 8F8F8AA4 */  lw     $t7, %got(doprecolor)($gp)
/* 004654C0 91EF0000 */  lbu   $t7, ($t7)
/* 004654C4 11E00038 */  beqz  $t7, .L004655A8
/* 004654C8 00000000 */   nop   
/* 004654CC 8F8989AC */  lw     $t1, %got(graphhead)($gp)
/* 004654D0 8F828D34 */  lw     $v0, %got(firsterreg)($gp)
/* 004654D4 8D290000 */  lw    $t1, ($t1)
/* 004654D8 8C420000 */  lw    $v0, ($v0)
/* 004654DC 8D300030 */  lw    $s0, 0x30($t1)
/* 004654E0 920B0013 */  lbu   $t3, 0x13($s0)
/* 004654E4 504B0006 */  beql  $v0, $t3, .L00465500
/* 004654E8 8E190008 */   lw    $t9, 8($s0)
/* 004654EC 8E10000C */  lw    $s0, 0xc($s0)
.L004654F0:
/* 004654F0 920D0013 */  lbu   $t5, 0x13($s0)
/* 004654F4 544DFFFE */  bnel  $v0, $t5, .L004654F0
/* 004654F8 8E10000C */   lw    $s0, 0xc($s0)
/* 004654FC 8E190008 */  lw    $t9, 8($s0)
.L00465500:
/* 00465500 24010003 */  li    $at, 3
/* 00465504 8F220000 */  lw    $v0, ($t9)
/* 00465508 904E0000 */  lbu   $t6, ($v0)
/* 0046550C 15C10006 */  bne   $t6, $at, .L00465528
/* 00465510 00000000 */   nop   
/* 00465514 8F8C89C8 */  lw     $t4, %got(staticlinkloc)($gp)
/* 00465518 8C480010 */  lw    $t0, 0x10($v0)
/* 0046551C 8D8C0000 */  lw    $t4, ($t4)
/* 00465520 11880006 */  beq   $t4, $t0, .L0046553C
/* 00465524 00000000 */   nop   
.L00465528:
/* 00465528 8F99861C */  lw    $t9, %call16(dbgerror)($gp)
/* 0046552C 240402CE */  li    $a0, 718
/* 00465530 0320F809 */  jalr  $t9
/* 00465534 00000000 */   nop   
/* 00465538 8FBC003C */  lw    $gp, 0x3c($sp)
.L0046553C:
/* 0046553C 1000001A */  b     .L004655A8
/* 00465540 A2000013 */   sb    $zero, 0x13($s0)
/* 00465544 24010020 */  li    $at, 32
.L00465548:
/* 00465548 1461000C */  bne   $v1, $at, .L0046557C
/* 0046554C 00000000 */   nop   
/* 00465550 8F988D34 */  lw     $t8, %got(firsterreg)($gp)
/* 00465554 8F180004 */  lw    $t8, 4($t8)
/* 00465558 03007827 */  not   $t7, $t8
/* 0046555C 270BFFE0 */  addiu $t3, $t8, -0x20
/* 00465560 2D6D0020 */  sltiu $t5, $t3, 0x20
/* 00465564 2F0A0020 */  sltiu $t2, $t8, 0x20
/* 00465568 01EA4804 */  sllv  $t1, $t2, $t7
/* 0046556C 01EDC804 */  sllv  $t9, $t5, $t7
/* 00465570 AFB9008C */  sw    $t9, 0x8c($sp)
/* 00465574 1000000C */  b     .L004655A8
/* 00465578 AFA90088 */   sw    $t1, 0x88($sp)
.L0046557C:
/* 0046557C 8F8E8D34 */  lw     $t6, %got(firsterreg)($gp)
/* 00465580 8DCE0004 */  lw    $t6, 4($t6)
/* 00465584 25CC0001 */  addiu $t4, $t6, 1
/* 00465588 01805027 */  not   $t2, $t4
/* 0046558C 2598FFE0 */  addiu $t8, $t4, -0x20
/* 00465590 2F0B0020 */  sltiu $t3, $t8, 0x20
/* 00465594 2D880020 */  sltiu $t0, $t4, 0x20
/* 00465598 01484804 */  sllv  $t1, $t0, $t2
/* 0046559C 014B6804 */  sllv  $t5, $t3, $t2
/* 004655A0 AFAD008C */  sw    $t5, 0x8c($sp)
/* 004655A4 AFA90088 */  sw    $t1, 0x88($sp)
.L004655A8:
/* 004655A8 8F9389B8 */  lw     $s3, %got(curstaticno)($gp)
/* 004655AC 00009025 */  move  $s2, $zero
/* 004655B0 8E730000 */  lw    $s3, ($s3)
/* 004655B4 26730000 */  addiu $s3, $s3, 0
/* 004655B8 8FCF0000 */  lw    $t7, ($fp)
.L004655BC:
/* 004655BC 02402025 */  move  $a0, $s2
/* 004655C0 01F7C821 */  addu  $t9, $t7, $s7
/* 004655C4 8F250004 */  lw    $a1, 4($t9)
/* 004655C8 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 004655CC 24A50014 */  addiu $a1, $a1, 0x14
/* 004655D0 0320F809 */  jalr  $t9
/* 004655D4 00000000 */   nop   
/* 004655D8 1040000F */  beqz  $v0, .L00465618
/* 004655DC 8FBC003C */   lw    $gp, 0x3c($sp)
/* 004655E0 8F8E8C68 */  lw     $t6, %got(bbtab)($gp)
/* 004655E4 00124080 */  sll   $t0, $s2, 2
/* 004655E8 8FAB0088 */  lw    $t3, 0x88($sp)
/* 004655EC 8DCE0000 */  lw    $t6, ($t6)
/* 004655F0 8FAF008C */  lw    $t7, 0x8c($sp)
/* 004655F4 01C84821 */  addu  $t1, $t6, $t0
/* 004655F8 8D2C0000 */  lw    $t4, ($t1)
/* 004655FC 01941021 */  addu  $v0, $t4, $s4
/* 00465600 8C58002C */  lw    $t8, 0x2c($v0)
/* 00465604 8C4D0030 */  lw    $t5, 0x30($v0)
/* 00465608 030B5025 */  or    $t2, $t8, $t3
/* 0046560C 01AFC825 */  or    $t9, $t5, $t7
/* 00465610 AC590030 */  sw    $t9, 0x30($v0)
/* 00465614 AC4A002C */  sw    $t2, 0x2c($v0)
.L00465618:
/* 00465618 26520001 */  addiu $s2, $s2, 1
/* 0046561C 5653FFE7 */  bnel  $s2, $s3, .L004655BC
/* 00465620 8FCF0000 */   lw    $t7, ($fp)
/* 00465624 10000193 */  b     .L00465C74
/* 00465628 8FAD009C */   lw    $t5, 0x9c($sp)
/* 0046562C 8FCE0000 */  lw    $t6, ($fp)
.L00465630:
/* 00465630 01D74021 */  addu  $t0, $t6, $s7
/* 00465634 8D090004 */  lw    $t1, 4($t0)
/* 00465638 8D300008 */  lw    $s0, 8($t1)
/* 0046563C 920C0014 */  lbu   $t4, 0x14($s0)
.L00465640:
/* 00465640 5580002D */  bnezl $t4, .L004656F8
/* 00465644 8E100004 */   lw    $s0, 4($s0)
/* 00465648 8E020000 */  lw    $v0, ($s0)
/* 0046564C 240B0001 */  li    $t3, 1
/* 00465650 8C440014 */  lw    $a0, 0x14($v0)
/* 00465654 10800004 */  beqz  $a0, .L00465668
/* 00465658 00000000 */   nop   
/* 0046565C 90580004 */  lbu   $t8, 4($v0)
/* 00465660 53000004 */  beql  $t8, $zero, .L00465674
/* 00465664 92CA0000 */   lbu   $t2, ($s6)
.L00465668:
/* 00465668 10000022 */  b     .L004656F4
/* 0046566C A20B0015 */   sb    $t3, 0x15($s0)
/* 00465670 92CA0000 */  lbu   $t2, ($s6)
.L00465674:
/* 00465674 24010003 */  li    $at, 3
/* 00465678 55410017 */  bnel  $t2, $at, .L004656D8
/* 0046567C 8FC90000 */   lw    $t1, ($fp)
/* 00465680 8F9984DC */  lw    $t9, %call16(prehascup)($gp)
/* 00465684 8FA5009C */  lw    $a1, 0x9c($sp)
/* 00465688 0320F809 */  jalr  $t9
/* 0046568C 00000000 */   nop   
/* 00465690 10400004 */  beqz  $v0, .L004656A4
/* 00465694 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00465698 240D0001 */  li    $t5, 1
/* 0046569C 10000015 */  b     .L004656F4
/* 004656A0 A20D0015 */   sb    $t5, 0x15($s0)
.L004656A4:
/* 004656A4 8FD90000 */  lw    $t9, ($fp)
/* 004656A8 8E0F0000 */  lw    $t7, ($s0)
/* 004656AC 03377021 */  addu  $t6, $t9, $s7
/* 004656B0 8F9984E4 */  lw    $t9, %call16(preallmember)($gp)
/* 004656B4 8DC50004 */  lw    $a1, 4($t6)
/* 004656B8 8DE40014 */  lw    $a0, 0x14($t7)
/* 004656BC 0320F809 */  jalr  $t9
/* 004656C0 00000000 */   nop   
/* 004656C4 2C480001 */  sltiu $t0, $v0, 1
/* 004656C8 A2080015 */  sb    $t0, 0x15($s0)
/* 004656CC 10000009 */  b     .L004656F4
/* 004656D0 8FBC003C */   lw    $gp, 0x3c($sp)
/* 004656D4 8FC90000 */  lw    $t1, ($fp)
.L004656D8:
/* 004656D8 8F9984E4 */  lw    $t9, %call16(preallmember)($gp)
/* 004656DC 01376021 */  addu  $t4, $t1, $s7
/* 004656E0 0320F809 */  jalr  $t9
/* 004656E4 8D850004 */   lw    $a1, 4($t4)
/* 004656E8 2C580001 */  sltiu $t8, $v0, 1
/* 004656EC A2180015 */  sb    $t8, 0x15($s0)
/* 004656F0 8FBC003C */  lw    $gp, 0x3c($sp)
.L004656F4:
/* 004656F4 8E100004 */  lw    $s0, 4($s0)
.L004656F8:
/* 004656F8 5600FFD1 */  bnezl $s0, .L00465640
/* 004656FC 920C0014 */   lbu   $t4, 0x14($s0)
/* 00465700 8FCB0000 */  lw    $t3, ($fp)
/* 00465704 8F9981A0 */  lw    $t9, %call16(bvectempty)($gp)
/* 00465708 01775021 */  addu  $t2, $t3, $s7
/* 0046570C 8D440004 */  lw    $a0, 4($t2)
/* 00465710 0320F809 */  jalr  $t9
/* 00465714 2484000C */   addiu $a0, $a0, 0xc
/* 00465718 14400059 */  bnez  $v0, .L00465880
/* 0046571C 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00465720 8F9389B8 */  lw     $s3, %got(curstaticno)($gp)
/* 00465724 00009025 */  move  $s2, $zero
/* 00465728 8E730000 */  lw    $s3, ($s3)
/* 0046572C 26730000 */  addiu $s3, $s3, 0
/* 00465730 8FCD0000 */  lw    $t5, ($fp)
.L00465734:
/* 00465734 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00465738 02402025 */  move  $a0, $s2
/* 0046573C 01B77821 */  addu  $t7, $t5, $s7
/* 00465740 8DE50004 */  lw    $a1, 4($t7)
/* 00465744 0320F809 */  jalr  $t9
/* 00465748 24A5000C */   addiu $a1, $a1, 0xc
/* 0046574C 10400049 */  beqz  $v0, .L00465874
/* 00465750 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00465754 8F998C68 */  lw     $t9, %got(bbtab)($gp)
/* 00465758 00127080 */  sll   $t6, $s2, 2
/* 0046575C 8F390000 */  lw    $t9, ($t9)
/* 00465760 032E4021 */  addu  $t0, $t9, $t6
/* 00465764 8D110000 */  lw    $s1, ($t0)
/* 00465768 8E240014 */  lw    $a0, 0x14($s1)
/* 0046576C 10800004 */  beqz  $a0, .L00465780
/* 00465770 00000000 */   nop   
/* 00465774 92290004 */  lbu   $t1, 4($s1)
/* 00465778 51200004 */  beql  $t1, $zero, .L0046578C
/* 0046577C 92CC0000 */   lbu   $t4, ($s6)
.L00465780:
/* 00465780 1000001F */  b     .L00465800
/* 00465784 24030001 */   li    $v1, 1
/* 00465788 92CC0000 */  lbu   $t4, ($s6)
.L0046578C:
/* 0046578C 24010003 */  li    $at, 3
/* 00465790 55810014 */  bnel  $t4, $at, .L004657E4
/* 00465794 8FCA0000 */   lw    $t2, ($fp)
/* 00465798 8F9984DC */  lw    $t9, %call16(prehascup)($gp)
/* 0046579C 8FA5009C */  lw    $a1, 0x9c($sp)
/* 004657A0 0320F809 */  jalr  $t9
/* 004657A4 00000000 */   nop   
/* 004657A8 10400003 */  beqz  $v0, .L004657B8
/* 004657AC 8FBC003C */   lw    $gp, 0x3c($sp)
/* 004657B0 10000013 */  b     .L00465800
/* 004657B4 24030001 */   li    $v1, 1
.L004657B8:
/* 004657B8 8FD80000 */  lw    $t8, ($fp)
/* 004657BC 8F9984E4 */  lw    $t9, %call16(preallmember)($gp)
/* 004657C0 8E240014 */  lw    $a0, 0x14($s1)
/* 004657C4 03175821 */  addu  $t3, $t8, $s7
/* 004657C8 0320F809 */  jalr  $t9
/* 004657CC 8D650004 */   lw    $a1, 4($t3)
/* 004657D0 2C430001 */  sltiu $v1, $v0, 1
/* 004657D4 306300FF */  andi  $v1, $v1, 0xff
/* 004657D8 10000009 */  b     .L00465800
/* 004657DC 8FBC003C */   lw    $gp, 0x3c($sp)
/* 004657E0 8FCA0000 */  lw    $t2, ($fp)
.L004657E4:
/* 004657E4 8F9984E4 */  lw    $t9, %call16(preallmember)($gp)
/* 004657E8 01576821 */  addu  $t5, $t2, $s7
/* 004657EC 0320F809 */  jalr  $t9
/* 004657F0 8DA50004 */   lw    $a1, 4($t5)
/* 004657F4 2C430001 */  sltiu $v1, $v0, 1
/* 004657F8 306300FF */  andi  $v1, $v1, 0xff
/* 004657FC 8FBC003C */  lw    $gp, 0x3c($sp)
.L00465800:
/* 00465800 5060001D */  beql  $v1, $zero, .L00465878
/* 00465804 26520001 */   addiu $s2, $s2, 1
/* 00465808 8F9984E8 */  lw    $t9, %call16(alloc_livbb)($gp)
/* 0046580C 0320F809 */  jalr  $t9
/* 00465810 00000000 */   nop   
/* 00465814 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00465818 1040011B */  beqz  $v0, .L00465C88
/* 0046581C 00408025 */   move  $s0, $v0
/* 00465820 8FCF0000 */  lw    $t7, ($fp)
/* 00465824 AC510000 */  sw    $s1, ($v0)
/* 00465828 24180001 */  li    $t8, 1
/* 0046582C 01F71021 */  addu  $v0, $t7, $s7
/* 00465830 8C590004 */  lw    $t9, 4($v0)
/* 00465834 02402825 */  move  $a1, $s2
/* 00465838 8F2E0008 */  lw    $t6, 8($t9)
/* 0046583C AE0E0004 */  sw    $t6, 4($s0)
/* 00465840 8C480004 */  lw    $t0, 4($v0)
/* 00465844 AD100008 */  sw    $s0, 8($t0)
/* 00465848 8C490004 */  lw    $t1, 4($v0)
/* 0046584C 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 00465850 AE090008 */  sw    $t1, 8($s0)
/* 00465854 8E2C0030 */  lw    $t4, 0x30($s1)
/* 00465858 AE0C000C */  sw    $t4, 0xc($s0)
/* 0046585C AE300030 */  sw    $s0, 0x30($s1)
/* 00465860 A2180015 */  sb    $t8, 0x15($s0)
/* 00465864 8C440004 */  lw    $a0, 4($v0)
/* 00465868 0320F809 */  jalr  $t9
/* 0046586C 2484000C */   addiu $a0, $a0, 0xc
/* 00465870 8FBC003C */  lw    $gp, 0x3c($sp)
.L00465874:
/* 00465874 26520001 */  addiu $s2, $s2, 1
.L00465878:
/* 00465878 5653FFAE */  bnel  $s2, $s3, .L00465734
/* 0046587C 8FCD0000 */   lw    $t5, ($fp)
.L00465880:
/* 00465880 8FCB0000 */  lw    $t3, ($fp)
/* 00465884 01775021 */  addu  $t2, $t3, $s7
/* 00465888 8D430004 */  lw    $v1, 4($t2)
/* 0046588C 906D0022 */  lbu   $t5, 0x22($v1)
/* 00465890 51A000F8 */  beql  $t5, $zero, .L00465C74
/* 00465894 8FAD009C */   lw    $t5, 0x9c($sp)
/* 00465898 8C700008 */  lw    $s0, 8($v1)
/* 0046589C 920F0017 */  lbu   $t7, 0x17($s0)
.L004658A0:
/* 004658A0 55E0005E */  bnezl $t7, .L00465A1C
/* 004658A4 8E100004 */   lw    $s0, 4($s0)
/* 004658A8 92190012 */  lbu   $t9, 0x12($s0)
/* 004658AC 5720000C */  bnezl $t9, .L004658E0
/* 004658B0 8E020000 */   lw    $v0, ($s0)
/* 004658B4 920E0014 */  lbu   $t6, 0x14($s0)
/* 004658B8 55C00009 */  bnezl $t6, .L004658E0
/* 004658BC 8E020000 */   lw    $v0, ($s0)
/* 004658C0 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 004658C4 8E080000 */  lw    $t0, ($s0)
/* 004658C8 8F858D68 */  lw     $a1, %got(livrantemp)($gp)
/* 004658CC 0320F809 */  jalr  $t9
/* 004658D0 95040008 */   lhu   $a0, 8($t0)
/* 004658D4 10400050 */  beqz  $v0, .L00465A18
/* 004658D8 8FBC003C */   lw    $gp, 0x3c($sp)
/* 004658DC 8E020000 */  lw    $v0, ($s0)
.L004658E0:
/* 004658E0 8C440018 */  lw    $a0, 0x18($v0)
/* 004658E4 54800021 */  bnezl $a0, .L0046596C
/* 004658E8 8C4E0020 */   lw    $t6, 0x20($v0)
/* 004658EC 92C90016 */  lbu   $t1, 0x16($s6)
/* 004658F0 24010002 */  li    $at, 2
/* 004658F4 312C0007 */  andi  $t4, $t1, 7
/* 004658F8 55810019 */  bnel  $t4, $at, .L00465960
/* 004658FC 24190001 */   li    $t9, 1
/* 00465900 8F988980 */  lw     $t8, %got(curblk)($gp)
/* 00465904 8ECB0014 */  lw    $t3, 0x14($s6)
/* 00465908 8F180000 */  lw    $t8, ($t8)
/* 0046590C 000B52C2 */  srl   $t2, $t3, 0xb
/* 00465910 570A0013 */  bnel  $t8, $t2, .L00465960
/* 00465914 24190001 */   li    $t9, 1
/* 00465918 8F8D8B0C */  lw     $t5, %got(allcallersave)($gp)
/* 0046591C 91AD0000 */  lbu   $t5, ($t5)
/* 00465920 15A00005 */  bnez  $t5, .L00465938
/* 00465924 00000000 */   nop   
/* 00465928 8ECF0010 */  lw    $t7, 0x10($s6)
/* 0046592C 29E10010 */  slti  $at, $t7, 0x10
/* 00465930 5020000B */  beql  $at, $zero, .L00465960
/* 00465934 24190001 */   li    $t9, 1
.L00465938:
/* 00465938 8F9984C0 */  lw    $t9, %call16(passedinreg)($gp)
/* 0046593C 8F858A28 */  lw     $a1, %got(offsetpassedbyint)($gp)
/* 00465940 02C02025 */  move  $a0, $s6
/* 00465944 0320F809 */  jalr  $t9
/* 00465948 8CA50000 */   lw    $a1, ($a1)
/* 0046594C 10400003 */  beqz  $v0, .L0046595C
/* 00465950 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00465954 10000030 */  b     .L00465A18
/* 00465958 A2000016 */   sb    $zero, 0x16($s0)
.L0046595C:
/* 0046595C 24190001 */  li    $t9, 1
.L00465960:
/* 00465960 1000002D */  b     .L00465A18
/* 00465964 A2190016 */   sb    $t9, 0x16($s0)
/* 00465968 8C4E0020 */  lw    $t6, 0x20($v0)
.L0046596C:
/* 0046596C 91C80000 */  lbu   $t0, ($t6)
/* 00465970 2D090040 */  sltiu $t1, $t0, 0x40
/* 00465974 11200009 */  beqz  $t1, .L0046599C
/* 00465978 00000000 */   nop   
/* 0046597C 8F988044 */  lw    $t8, %got(D_10010F40)($gp)
/* 00465980 00086143 */  sra   $t4, $t0, 5
/* 00465984 000C5880 */  sll   $t3, $t4, 2
/* 00465988 27180F40 */  addiu $t8, %lo(D_10010F40) # addiu $t8, $t8, 0xf40
/* 0046598C 030B5021 */  addu  $t2, $t8, $t3
/* 00465990 8D4D0000 */  lw    $t5, ($t2)
/* 00465994 010D7804 */  sllv  $t7, $t5, $t0
/* 00465998 29E90000 */  slti  $t1, $t7, 0
.L0046599C:
/* 0046599C 51200017 */  beql  $t1, $zero, .L004659FC
/* 004659A0 8FCD0000 */   lw    $t5, ($fp)
/* 004659A4 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 004659A8 8FA4009C */  lw    $a0, 0x9c($sp)
/* 004659AC 2445012C */  addiu $a1, $v0, 0x12c
/* 004659B0 0320F809 */  jalr  $t9
/* 004659B4 00000000 */   nop   
/* 004659B8 10400004 */  beqz  $v0, .L004659CC
/* 004659BC 8FBC003C */   lw    $gp, 0x3c($sp)
/* 004659C0 240E0001 */  li    $t6, 1
/* 004659C4 10000014 */  b     .L00465A18
/* 004659C8 A20E0016 */   sb    $t6, 0x16($s0)
.L004659CC:
/* 004659CC 8FD80000 */  lw    $t8, ($fp)
/* 004659D0 8F9984E0 */  lw    $t9, %call16(allsucmember)($gp)
/* 004659D4 8E0C0000 */  lw    $t4, ($s0)
/* 004659D8 03175821 */  addu  $t3, $t8, $s7
/* 004659DC 8D650004 */  lw    $a1, 4($t3)
/* 004659E0 0320F809 */  jalr  $t9
/* 004659E4 8D840018 */   lw    $a0, 0x18($t4)
/* 004659E8 2C4A0001 */  sltiu $t2, $v0, 1
/* 004659EC A20A0016 */  sb    $t2, 0x16($s0)
/* 004659F0 10000009 */  b     .L00465A18
/* 004659F4 8FBC003C */   lw    $gp, 0x3c($sp)
/* 004659F8 8FCD0000 */  lw    $t5, ($fp)
.L004659FC:
/* 004659FC 8F9984E0 */  lw    $t9, %call16(allsucmember)($gp)
/* 00465A00 01B74021 */  addu  $t0, $t5, $s7
/* 00465A04 0320F809 */  jalr  $t9
/* 00465A08 8D050004 */   lw    $a1, 4($t0)
/* 00465A0C 2C4F0001 */  sltiu $t7, $v0, 1
/* 00465A10 A20F0016 */  sb    $t7, 0x16($s0)
/* 00465A14 8FBC003C */  lw    $gp, 0x3c($sp)
.L00465A18:
/* 00465A18 8E100004 */  lw    $s0, 4($s0)
.L00465A1C:
/* 00465A1C 5600FFA0 */  bnezl $s0, .L004658A0
/* 00465A20 920F0017 */   lbu   $t7, 0x17($s0)
/* 00465A24 8FD90000 */  lw    $t9, ($fp)
/* 00465A28 03374821 */  addu  $t1, $t9, $s7
/* 00465A2C 8F9981A0 */  lw    $t9, %call16(bvectempty)($gp)
/* 00465A30 8D240004 */  lw    $a0, 4($t1)
/* 00465A34 0320F809 */  jalr  $t9
/* 00465A38 2484000C */   addiu $a0, $a0, 0xc
/* 00465A3C 1440008C */  bnez  $v0, .L00465C70
/* 00465A40 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00465A44 8F9389B8 */  lw     $s3, %got(curstaticno)($gp)
/* 00465A48 00009025 */  move  $s2, $zero
/* 00465A4C 8E730000 */  lw    $s3, ($s3)
/* 00465A50 26730000 */  addiu $s3, $s3, 0
/* 00465A54 8FCE0000 */  lw    $t6, ($fp)
.L00465A58:
/* 00465A58 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00465A5C 02402025 */  move  $a0, $s2
/* 00465A60 01D76021 */  addu  $t4, $t6, $s7
/* 00465A64 8D850004 */  lw    $a1, 4($t4)
/* 00465A68 0320F809 */  jalr  $t9
/* 00465A6C 24A5000C */   addiu $a1, $a1, 0xc
/* 00465A70 1040007C */  beqz  $v0, .L00465C64
/* 00465A74 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00465A78 8F988C68 */  lw     $t8, %got(bbtab)($gp)
/* 00465A7C 00125880 */  sll   $t3, $s2, 2
/* 00465A80 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00465A84 8F180000 */  lw    $t8, ($t8)
/* 00465A88 8FA4009C */  lw    $a0, 0x9c($sp)
/* 00465A8C 030B5021 */  addu  $t2, $t8, $t3
/* 00465A90 8D510000 */  lw    $s1, ($t2)
/* 00465A94 0320F809 */  jalr  $t9
/* 00465A98 26250144 */   addiu $a1, $s1, 0x144
/* 00465A9C 10400071 */  beqz  $v0, .L00465C64
/* 00465AA0 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00465AA4 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00465AA8 96240008 */  lhu   $a0, 8($s1)
/* 00465AAC 8F858D68 */  lw     $a1, %got(livrantemp)($gp)
/* 00465AB0 0320F809 */  jalr  $t9
/* 00465AB4 00000000 */   nop   
/* 00465AB8 1040006A */  beqz  $v0, .L00465C64
/* 00465ABC 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00465AC0 8E240018 */  lw    $a0, 0x18($s1)
/* 00465AC4 54800020 */  bnezl $a0, .L00465B48
/* 00465AC8 8E380020 */   lw    $t8, 0x20($s1)
/* 00465ACC 92CD0016 */  lbu   $t5, 0x16($s6)
/* 00465AD0 24010002 */  li    $at, 2
/* 00465AD4 31A80007 */  andi  $t0, $t5, 7
/* 00465AD8 15010018 */  bne   $t0, $at, .L00465B3C
/* 00465ADC 00000000 */   nop   
/* 00465AE0 8F8F8980 */  lw     $t7, %got(curblk)($gp)
/* 00465AE4 8ED90014 */  lw    $t9, 0x14($s6)
/* 00465AE8 8DEF0000 */  lw    $t7, ($t7)
/* 00465AEC 00194AC2 */  srl   $t1, $t9, 0xb
/* 00465AF0 15E90012 */  bne   $t7, $t1, .L00465B3C
/* 00465AF4 00000000 */   nop   
/* 00465AF8 8F8E8B0C */  lw     $t6, %got(allcallersave)($gp)
/* 00465AFC 91CE0000 */  lbu   $t6, ($t6)
/* 00465B00 15C00005 */  bnez  $t6, .L00465B18
/* 00465B04 00000000 */   nop   
/* 00465B08 8ECC0010 */  lw    $t4, 0x10($s6)
/* 00465B0C 29810010 */  slti  $at, $t4, 0x10
/* 00465B10 1020000A */  beqz  $at, .L00465B3C
/* 00465B14 00000000 */   nop   
.L00465B18:
/* 00465B18 8F9984C0 */  lw    $t9, %call16(passedinreg)($gp)
/* 00465B1C 8F858A28 */  lw     $a1, %got(offsetpassedbyint)($gp)
/* 00465B20 02C02025 */  move  $a0, $s6
/* 00465B24 0320F809 */  jalr  $t9
/* 00465B28 8CA50000 */   lw    $a1, ($a1)
/* 00465B2C 10400003 */  beqz  $v0, .L00465B3C
/* 00465B30 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00465B34 1000002E */  b     .L00465BF0
/* 00465B38 00001825 */   move  $v1, $zero
.L00465B3C:
/* 00465B3C 1000002C */  b     .L00465BF0
/* 00465B40 24030001 */   li    $v1, 1
/* 00465B44 8E380020 */  lw    $t8, 0x20($s1)
.L00465B48:
/* 00465B48 930B0000 */  lbu   $t3, ($t8)
/* 00465B4C 2D6A0040 */  sltiu $t2, $t3, 0x40
/* 00465B50 11400009 */  beqz  $t2, .L00465B78
/* 00465B54 00000000 */   nop   
/* 00465B58 8F998044 */  lw    $t9, %got(D_10010F40)($gp)
/* 00465B5C 000B6943 */  sra   $t5, $t3, 5
/* 00465B60 000D4080 */  sll   $t0, $t5, 2
/* 00465B64 27390F40 */  addiu $t9, %lo(D_10010F40) # addiu $t9, $t9, 0xf40
/* 00465B68 03287821 */  addu  $t7, $t9, $t0
/* 00465B6C 8DE90000 */  lw    $t1, ($t7)
/* 00465B70 01697004 */  sllv  $t6, $t1, $t3
/* 00465B74 29CA0000 */  slti  $t2, $t6, 0
.L00465B78:
/* 00465B78 51400015 */  beql  $t2, $zero, .L00465BD0
/* 00465B7C 8FD90000 */   lw    $t9, ($fp)
/* 00465B80 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00465B84 8FA4009C */  lw    $a0, 0x9c($sp)
/* 00465B88 2625012C */  addiu $a1, $s1, 0x12c
/* 00465B8C 0320F809 */  jalr  $t9
/* 00465B90 00000000 */   nop   
/* 00465B94 10400003 */  beqz  $v0, .L00465BA4
/* 00465B98 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00465B9C 10000014 */  b     .L00465BF0
/* 00465BA0 24030001 */   li    $v1, 1
.L00465BA4:
/* 00465BA4 8FD80000 */  lw    $t8, ($fp)
/* 00465BA8 8F9984E0 */  lw    $t9, %call16(allsucmember)($gp)
/* 00465BAC 8E240018 */  lw    $a0, 0x18($s1)
/* 00465BB0 03176821 */  addu  $t5, $t8, $s7
/* 00465BB4 0320F809 */  jalr  $t9
/* 00465BB8 8DA50004 */   lw    $a1, 4($t5)
/* 00465BBC 2C430001 */  sltiu $v1, $v0, 1
/* 00465BC0 306300FF */  andi  $v1, $v1, 0xff
/* 00465BC4 1000000A */  b     .L00465BF0
/* 00465BC8 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00465BCC 8FD90000 */  lw    $t9, ($fp)
.L00465BD0:
/* 00465BD0 03374021 */  addu  $t0, $t9, $s7
/* 00465BD4 8F9984E0 */  lw    $t9, %call16(allsucmember)($gp)
/* 00465BD8 8D050004 */  lw    $a1, 4($t0)
/* 00465BDC 0320F809 */  jalr  $t9
/* 00465BE0 00000000 */   nop   
/* 00465BE4 2C430001 */  sltiu $v1, $v0, 1
/* 00465BE8 306300FF */  andi  $v1, $v1, 0xff
/* 00465BEC 8FBC003C */  lw    $gp, 0x3c($sp)
.L00465BF0:
/* 00465BF0 5060001D */  beql  $v1, $zero, .L00465C68
/* 00465BF4 26520001 */   addiu $s2, $s2, 1
/* 00465BF8 8F9984E8 */  lw    $t9, %call16(alloc_livbb)($gp)
/* 00465BFC 0320F809 */  jalr  $t9
/* 00465C00 00000000 */   nop   
/* 00465C04 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00465C08 1040001F */  beqz  $v0, .L00465C88
/* 00465C0C 00408025 */   move  $s0, $v0
/* 00465C10 8FCF0000 */  lw    $t7, ($fp)
/* 00465C14 AC510000 */  sw    $s1, ($v0)
/* 00465C18 24180001 */  li    $t8, 1
/* 00465C1C 01F71021 */  addu  $v0, $t7, $s7
/* 00465C20 8C490004 */  lw    $t1, 4($v0)
/* 00465C24 02402825 */  move  $a1, $s2
/* 00465C28 8D2B0008 */  lw    $t3, 8($t1)
/* 00465C2C AE0B0004 */  sw    $t3, 4($s0)
/* 00465C30 8C4E0004 */  lw    $t6, 4($v0)
/* 00465C34 ADD00008 */  sw    $s0, 8($t6)
/* 00465C38 8C4C0004 */  lw    $t4, 4($v0)
/* 00465C3C 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 00465C40 AE0C0008 */  sw    $t4, 8($s0)
/* 00465C44 8E2A0030 */  lw    $t2, 0x30($s1)
/* 00465C48 AE0A000C */  sw    $t2, 0xc($s0)
/* 00465C4C AE300030 */  sw    $s0, 0x30($s1)
/* 00465C50 A2180016 */  sb    $t8, 0x16($s0)
/* 00465C54 8C440004 */  lw    $a0, 4($v0)
/* 00465C58 0320F809 */  jalr  $t9
/* 00465C5C 2484000C */   addiu $a0, $a0, 0xc
/* 00465C60 8FBC003C */  lw    $gp, 0x3c($sp)
.L00465C64:
/* 00465C64 26520001 */  addiu $s2, $s2, 1
.L00465C68:
/* 00465C68 5653FF7B */  bnel  $s2, $s3, .L00465A58
/* 00465C6C 8FCE0000 */   lw    $t6, ($fp)
.L00465C70:
/* 00465C70 8FAD009C */  lw    $t5, 0x9c($sp)
.L00465C74:
/* 00465C74 8FA80078 */  lw    $t0, 0x78($sp)
/* 00465C78 26F70008 */  addiu $s7, $s7, 8
/* 00465C7C 25B90001 */  addiu $t9, $t5, 1
/* 00465C80 1728FC1B */  bne   $t9, $t0, .L00464CF0
/* 00465C84 AFB9009C */   sw    $t9, 0x9c($sp)
.L00465C88:
/* 00465C88 8FBF0044 */  lw    $ra, 0x44($sp)
/* 00465C8C 8FB0001C */  lw    $s0, 0x1c($sp)
/* 00465C90 8FB10020 */  lw    $s1, 0x20($sp)
/* 00465C94 8FB20024 */  lw    $s2, 0x24($sp)
/* 00465C98 8FB30028 */  lw    $s3, 0x28($sp)
/* 00465C9C 8FB4002C */  lw    $s4, 0x2c($sp)
/* 00465CA0 8FB50030 */  lw    $s5, 0x30($sp)
/* 00465CA4 8FB60034 */  lw    $s6, 0x34($sp)
/* 00465CA8 8FB70038 */  lw    $s7, 0x38($sp)
/* 00465CAC 8FBE0040 */  lw    $fp, 0x40($sp)
/* 00465CB0 03E00008 */  jr    $ra
/* 00465CB4 27BD00A8 */   addiu $sp, $sp, 0xa8
    .type localcolor, @function
    .size localcolor, .-localcolor
    .end localcolor

glabel insintf
    .ent insintf
    # 00465DA4 func_00465DA4
    # 00467F04 split
/* 00465CB8 3C1C0FBB */  .cpload $t9
/* 00465CBC 279C45D8 */  
/* 00465CC0 0399E021 */  
/* 00465CC4 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00465CC8 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 00465CCC AFBF001C */  sw    $ra, 0x1c($sp)
/* 00465CD0 AFA40020 */  sw    $a0, 0x20($sp)
/* 00465CD4 AFA50024 */  sw    $a1, 0x24($sp)
/* 00465CD8 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00465CDC 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 00465CE0 0320F809 */  jalr  $t9
/* 00465CE4 2404000C */   li    $a0, 12
/* 00465CE8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00465CEC 14400005 */  bnez  $v0, .L00465D04
/* 00465CF0 8FA30020 */   lw    $v1, 0x20($sp)
/* 00465CF4 8F818B20 */  lw     $at, %got(outofmem)($gp)
/* 00465CF8 240E0001 */  li    $t6, 1
/* 00465CFC 10000008 */  b     .L00465D20
/* 00465D00 A02E0000 */   sb    $t6, ($at)
.L00465D04:
/* 00465D04 8C6F0000 */  lw    $t7, ($v1)
/* 00465D08 AC4F0004 */  sw    $t7, 4($v0)
/* 00465D0C 8FB80024 */  lw    $t8, 0x24($sp)
/* 00465D10 A0400008 */  sb    $zero, 8($v0)
/* 00465D14 A0400009 */  sb    $zero, 9($v0)
/* 00465D18 AC580000 */  sw    $t8, ($v0)
/* 00465D1C AC620000 */  sw    $v0, ($v1)
.L00465D20:
/* 00465D20 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00465D24 27BD0020 */  addiu $sp, $sp, 0x20
/* 00465D28 03E00008 */  jr    $ra
/* 00465D2C 00000000 */   nop   
    .type insintf, @function
    .size insintf, .-insintf
    .end insintf

glabel intfering
    .ent intfering
    # 00465E50 spilltemps
    # 00467F04 split
/* 00465D30 3C1C0FBB */  .cpload $t9
/* 00465D34 279C4560 */  
/* 00465D38 0399E021 */  
/* 00465D3C 8F998194 */  lw    $t9, %call16(bvectcopy)($gp)
/* 00465D40 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00465D44 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00465D48 AFA50024 */  sw    $a1, 0x24($sp)
/* 00465D4C 00803025 */  move  $a2, $a0
/* 00465D50 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00465D54 24C50014 */  addiu $a1, $a2, 0x14
/* 00465D58 0320F809 */  jalr  $t9
/* 00465D5C 8F848D68 */   lw     $a0, %got(livrantemp)($gp)
/* 00465D60 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00465D64 8FA50024 */  lw    $a1, 0x24($sp)
/* 00465D68 8F9981A8 */  lw    $t9, %call16(bvectintsect)($gp)
/* 00465D6C 8F848D68 */  lw     $a0, %got(livrantemp)($gp)
/* 00465D70 24A50014 */  addiu $a1, $a1, 0x14
/* 00465D74 0320F809 */  jalr  $t9
/* 00465D78 00000000 */   nop   
/* 00465D7C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00465D80 8F9981A0 */  lw    $t9, %call16(bvectempty)($gp)
/* 00465D84 8F848D68 */  lw     $a0, %got(livrantemp)($gp)
/* 00465D88 0320F809 */  jalr  $t9
/* 00465D8C 00000000 */   nop   
/* 00465D90 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00465D94 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00465D98 27BD0020 */  addiu $sp, $sp, 0x20
/* 00465D9C 03E00008 */  jr    $ra
/* 00465DA0 2C420001 */   sltiu $v0, $v0, 1
    .type intfering, @function
    .size intfering, .-intfering
    .end intfering

    .type func_00465DA4, @function
func_00465DA4:
    # 00465E50 spilltemps
/* 00465DA4 3C1C0FBB */  .cpload $t9
/* 00465DA8 279C44EC */  
/* 00465DAC 0399E021 */  
/* 00465DB0 8F9984F4 */  lw    $t9, %call16(insintf)($gp)
/* 00465DB4 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00465DB8 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00465DBC 00803025 */  move  $a2, $a0
/* 00465DC0 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00465DC4 AFA50024 */  sw    $a1, 0x24($sp)
/* 00465DC8 AFA60020 */  sw    $a2, 0x20($sp)
/* 00465DCC 0320F809 */  jalr  $t9
/* 00465DD0 24840038 */   addiu $a0, $a0, 0x38
/* 00465DD4 8FA50020 */  lw    $a1, 0x20($sp)
/* 00465DD8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00465DDC 8CAE0024 */  lw    $t6, 0x24($a1)
/* 00465DE0 25CF0001 */  addiu $t7, $t6, 1
/* 00465DE4 ACAF0024 */  sw    $t7, 0x24($a1)
/* 00465DE8 8F9984F4 */  lw    $t9, %call16(insintf)($gp)
/* 00465DEC 8FA40024 */  lw    $a0, 0x24($sp)
/* 00465DF0 0320F809 */  jalr  $t9
/* 00465DF4 24840038 */   addiu $a0, $a0, 0x38
/* 00465DF8 8FA20024 */  lw    $v0, 0x24($sp)
/* 00465DFC 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00465E00 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00465E04 8C580024 */  lw    $t8, 0x24($v0)
/* 00465E08 27BD0020 */  addiu $sp, $sp, 0x20
/* 00465E0C 27190001 */  addiu $t9, $t8, 1
/* 00465E10 03E00008 */  jr    $ra
/* 00465E14 AC590024 */   sw    $t9, 0x24($v0)

    .type func_00465E18, @function
func_00465E18:
    # 00465E50 spilltemps
/* 00465E18 3C1C0FBB */  .cpload $t9
/* 00465E1C 279C4478 */  
/* 00465E20 0399E021 */  
/* 00465E24 8F838974 */  lw     $v1, %got(templochead)($gp)
/* 00465E28 8C630000 */  lw    $v1, ($v1)
/* 00465E2C 8C6E0000 */  lw    $t6, ($v1)
/* 00465E30 108E0005 */  beq   $a0, $t6, .L00465E48
/* 00465E34 00000000 */   nop   
/* 00465E38 8C630010 */  lw    $v1, 0x10($v1)
.L00465E3C:
/* 00465E3C 8C6F0000 */  lw    $t7, ($v1)
/* 00465E40 548FFFFE */  bnel  $a0, $t7, .L00465E3C
/* 00465E44 8C630010 */   lw    $v1, 0x10($v1)
.L00465E48:
/* 00465E48 03E00008 */  jr    $ra
/* 00465E4C 00601025 */   move  $v0, $v1

glabel spilltemps
    .ent spilltemps
    # 00456A2C oneproc
/* 00465E50 3C1C0FBB */  .cpload $t9
/* 00465E54 279C4440 */  
/* 00465E58 0399E021 */  
/* 00465E5C 27BDFF40 */  addiu $sp, $sp, -0xc0
/* 00465E60 AFBE0040 */  sw    $fp, 0x40($sp)
/* 00465E64 8F9E8BEC */  lw     $fp, %got(numlr)($gp)
/* 00465E68 8F818C04 */  lw     $at, %got(contiglr)($gp)
/* 00465E6C AFB70038 */  sw    $s7, 0x38($sp)
/* 00465E70 AFC00000 */  sw    $zero, ($fp)
/* 00465E74 AC200000 */  sw    $zero, ($at)
/* 00465E78 8F818BFC */  lw     $at, %got(numsplitlu)($gp)
/* 00465E7C AFB60034 */  sw    $s6, 0x34($sp)
/* 00465E80 AFBF0044 */  sw    $ra, 0x44($sp)
/* 00465E84 AC200000 */  sw    $zero, ($at)
/* 00465E88 8F818C14 */  lw     $at, %got(numcoloredlr)($gp)
/* 00465E8C AFBC003C */  sw    $gp, 0x3c($sp)
/* 00465E90 AFB50030 */  sw    $s5, 0x30($sp)
/* 00465E94 AC200000 */  sw    $zero, ($at)
/* 00465E98 8F818C2C */  lw     $at, %got(allococ)($gp)
/* 00465E9C AFB4002C */  sw    $s4, 0x2c($sp)
/* 00465EA0 AFB30028 */  sw    $s3, 0x28($sp)
/* 00465EA4 AC200000 */  sw    $zero, ($at)
/* 00465EA8 8F818C18 */  lw     $at, %got(numcantcoloredlr)($gp)
/* 00465EAC AFB20024 */  sw    $s2, 0x24($sp)
/* 00465EB0 AFB10020 */  sw    $s1, 0x20($sp)
/* 00465EB4 AC200000 */  sw    $zero, ($at)
/* 00465EB8 8F818C1C */  lw     $at, %got(num0occurlr)($gp)
/* 00465EBC AFB0001C */  sw    $s0, 0x1c($sp)
/* 00465EC0 8F9689EC */  lw     $s6, %got(bittab)($gp)
/* 00465EC4 AC200000 */  sw    $zero, ($at)
/* 00465EC8 8F818C20 */  lw     $at, %got(numcalloverheadlr)($gp)
/* 00465ECC 27B700C0 */  addiu $s7, $sp, 0xc0
/* 00465ED0 24030001 */  li    $v1, 1
/* 00465ED4 AC200000 */  sw    $zero, ($at)
/* 00465ED8 8F818C24 */  lw     $at, %got(numsparselr)($gp)
/* 00465EDC AC200000 */  sw    $zero, ($at)
/* 00465EE0 8F818C28 */  lw     $at, %got(numnotwellformedlr)($gp)
/* 00465EE4 AC200000 */  sw    $zero, ($at)
.L00465EE8:
/* 00465EE8 8F8289E0 */  lw     $v0, %got(bitposcount)($gp)
/* 00465EEC 0000A825 */  move  $s5, $zero
/* 00465EF0 000370C0 */  sll   $t6, $v1, 3
/* 00465EF4 8C420000 */  lw    $v0, ($v0)
/* 00465EF8 2442FFFF */  addiu $v0, $v0, -1
/* 00465EFC 0442003E */  bltzl $v0, .L00465FF8
/* 00465F00 24630001 */   addiu $v1, $v1, 1
/* 00465F04 8F8F8D78 */  lw     $t7, %got(iscolored)($gp)
/* 00465F08 24420001 */  addiu $v0, $v0, 1
/* 00465F0C AFA20080 */  sw    $v0, 0x80($sp)
/* 00465F10 25EFFFF8 */  addiu $t7, $t7, -8
/* 00465F14 01CFA021 */  addu  $s4, $t6, $t7
/* 00465F18 AFA3008C */  sw    $v1, 0x8c($sp)
.L00465F1C:
/* 00465F1C 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00465F20 02A02025 */  move  $a0, $s5
/* 00465F24 02802825 */  move  $a1, $s4
/* 00465F28 0320F809 */  jalr  $t9
/* 00465F2C 00000000 */   nop   
/* 00465F30 1040002B */  beqz  $v0, .L00465FE0
/* 00465F34 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00465F38 8FD80000 */  lw    $t8, ($fp)
/* 00465F3C 8F9389E0 */  lw     $s3, %got(bitposcount)($gp)
/* 00465F40 8EC90000 */  lw    $t1, ($s6)
/* 00465F44 27190001 */  addiu $t9, $t8, 1
/* 00465F48 AFD90000 */  sw    $t9, ($fp)
/* 00465F4C 8E730000 */  lw    $s3, ($s3)
/* 00465F50 001550C0 */  sll   $t2, $s5, 3
/* 00465F54 26A20001 */  addiu $v0, $s5, 1
/* 00465F58 2673FFFF */  addiu $s3, $s3, -1
/* 00465F5C 0262082A */  slt   $at, $s3, $v0
/* 00465F60 012A5821 */  addu  $t3, $t1, $t2
/* 00465F64 1420001E */  bnez  $at, .L00465FE0
/* 00465F68 8D720004 */   lw    $s2, 4($t3)
/* 00465F6C 00408025 */  move  $s0, $v0
/* 00465F70 26730001 */  addiu $s3, $s3, 1
.L00465F74:
/* 00465F74 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00465F78 02002025 */  move  $a0, $s0
/* 00465F7C 02802825 */  move  $a1, $s4
/* 00465F80 0320F809 */  jalr  $t9
/* 00465F84 00000000 */   nop   
/* 00465F88 10400012 */  beqz  $v0, .L00465FD4
/* 00465F8C 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00465F90 8ECC0000 */  lw    $t4, ($s6)
/* 00465F94 001068C0 */  sll   $t5, $s0, 3
/* 00465F98 8F9984F8 */  lw    $t9, %call16(intfering)($gp)
/* 00465F9C 018D7021 */  addu  $t6, $t4, $t5
/* 00465FA0 8DD10004 */  lw    $s1, 4($t6)
/* 00465FA4 02402025 */  move  $a0, $s2
/* 00465FA8 0320F809 */  jalr  $t9
/* 00465FAC 02202825 */   move  $a1, $s1
/* 00465FB0 10400008 */  beqz  $v0, .L00465FD4
/* 00465FB4 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00465FB8 8F99802C */  lw    $t9, %got(func_00465DA4)($gp)
/* 00465FBC 02402025 */  move  $a0, $s2
/* 00465FC0 02202825 */  move  $a1, $s1
/* 00465FC4 27395DA4 */  addiu $t9, %lo(func_00465DA4) # addiu $t9, $t9, 0x5da4
/* 00465FC8 0320F809 */  jalr  $t9
/* 00465FCC 02E01025 */   move  $v0, $s7
/* 00465FD0 8FBC003C */  lw    $gp, 0x3c($sp)
.L00465FD4:
/* 00465FD4 26100001 */  addiu $s0, $s0, 1
/* 00465FD8 1613FFE6 */  bne   $s0, $s3, .L00465F74
/* 00465FDC 00000000 */   nop   
.L00465FE0:
/* 00465FE0 8FAF0080 */  lw    $t7, 0x80($sp)
/* 00465FE4 26B50001 */  addiu $s5, $s5, 1
/* 00465FE8 16AFFFCC */  bne   $s5, $t7, .L00465F1C
/* 00465FEC 00000000 */   nop   
/* 00465FF0 8FA3008C */  lw    $v1, 0x8c($sp)
/* 00465FF4 24630001 */  addiu $v1, $v1, 1
.L00465FF8:
/* 00465FF8 24010003 */  li    $at, 3
/* 00465FFC 1461FFBA */  bne   $v1, $at, .L00465EE8
/* 00466000 00000000 */   nop   
/* 00466004 8F998B20 */  lw     $t9, %got(outofmem)($gp)
/* 00466008 8FD80000 */  lw    $t8, ($fp)
/* 0046600C 8F818BF0 */  lw     $at, %got(finalnumlr)($gp)
/* 00466010 93390000 */  lbu   $t9, ($t9)
/* 00466014 AC380000 */  sw    $t8, ($at)
/* 00466018 5720012D */  bnezl $t9, .L004664D0
/* 0046601C 8FBF0044 */   lw    $ra, 0x44($sp)
/* 00466020 8F818A2C */  lw     $at, %got(tempcount)($gp)
/* 00466024 8F948D30 */  lw     $s4, %got(setofspills)($gp)
/* 00466028 AC200000 */  sw    $zero, ($at)
/* 0046602C AE800004 */  sw    $zero, 4($s4)
/* 00466030 AE800000 */  sw    $zero, ($s4)
/* 00466034 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 00466038 02802025 */  move  $a0, $s4
/* 0046603C 0320F809 */  jalr  $t9
/* 00466040 00000000 */   nop   
/* 00466044 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00466048 8F8989E8 */  lw     $t1, %got(firstconstbit)($gp)
/* 0046604C 8D290000 */  lw    $t1, ($t1)
/* 00466050 252AFFFF */  addiu $t2, $t1, -1
/* 00466054 0540011D */  bltz  $t2, .L004664CC
/* 00466058 AFAA0080 */   sw    $t2, 0x80($sp)
/* 0046605C 254B0001 */  addiu $t3, $t2, 1
/* 00466060 AFAB0080 */  sw    $t3, 0x80($sp)
/* 00466064 AFA00058 */  sw    $zero, 0x58($sp)
/* 00466068 AFA000BC */  sw    $zero, 0xbc($sp)
.L0046606C:
/* 0046606C 8FA20058 */  lw    $v0, 0x58($sp)
/* 00466070 8ECC0000 */  lw    $t4, ($s6)
/* 00466074 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00466078 8FA400BC */  lw    $a0, 0xbc($sp)
/* 0046607C 01826821 */  addu  $t5, $t4, $v0
/* 00466080 8DAE0000 */  lw    $t6, ($t5)
/* 00466084 8F858D18 */  lw     $a1, %got(coloreditems)($gp)
/* 00466088 0320F809 */  jalr  $t9
/* 0046608C AFAE00A0 */   sw    $t6, 0xa0($sp)
/* 00466090 10400106 */  beqz  $v0, .L004664AC
/* 00466094 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00466098 AFA00064 */  sw    $zero, 0x64($sp)
/* 0046609C AFA00068 */  sw    $zero, 0x68($sp)
/* 004660A0 AFA0006C */  sw    $zero, 0x6c($sp)
/* 004660A4 AFA00070 */  sw    $zero, 0x70($sp)
/* 004660A8 27AF0064 */  addiu $t7, $sp, 0x64
/* 004660AC 8DF90000 */  lw    $t9, ($t7)
/* 004660B0 02802025 */  move  $a0, $s4
/* 004660B4 0000A825 */  move  $s5, $zero
/* 004660B8 AFB90004 */  sw    $t9, 4($sp)
/* 004660BC 8DF80004 */  lw    $t8, 4($t7)
/* 004660C0 8F998180 */  lw    $t9, %call16(initbv)($gp)
/* 004660C4 8FA50004 */  lw    $a1, 4($sp)
/* 004660C8 AFB80008 */  sw    $t8, 8($sp)
/* 004660CC 8DE70008 */  lw    $a3, 8($t7)
/* 004660D0 8FA60008 */  lw    $a2, 8($sp)
/* 004660D4 AFA7000C */  sw    $a3, 0xc($sp)
/* 004660D8 8DF8000C */  lw    $t8, 0xc($t7)
/* 004660DC A3A0009B */  sb    $zero, 0x9b($sp)
/* 004660E0 0320F809 */  jalr  $t9
/* 004660E4 AFB80010 */   sw    $t8, 0x10($sp)
/* 004660E8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004660EC 8F9389AC */  lw     $s3, %got(graphhead)($gp)
/* 004660F0 8E730000 */  lw    $s3, ($s3)
/* 004660F4 5260004A */  beql  $s3, $zero, .L00466220
/* 004660F8 8FA600A0 */   lw    $a2, 0xa0($sp)
.L004660FC:
/* 004660FC 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00466100 2672015C */  addiu $s2, $s3, 0x15c
/* 00466104 0260F025 */  move  $fp, $s3
/* 00466108 02402825 */  move  $a1, $s2
/* 0046610C 0320F809 */  jalr  $t9
/* 00466110 8FA400BC */   lw    $a0, 0xbc($sp)
/* 00466114 1040003E */  beqz  $v0, .L00466210
/* 00466118 8FBC003C */   lw    $gp, 0x3c($sp)
/* 0046611C 8FA200BC */  lw    $v0, 0xbc($sp)
/* 00466120 00008025 */  move  $s0, $zero
/* 00466124 2442FFFF */  addiu $v0, $v0, -1
/* 00466128 0442003A */  bltzl $v0, .L00466214
/* 0046612C 8FD3000C */   lw    $s3, 0xc($fp)
/* 00466130 24510001 */  addiu $s1, $v0, 1
.L00466134:
/* 00466134 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00466138 02002025 */  move  $a0, $s0
/* 0046613C 02402825 */  move  $a1, $s2
/* 00466140 0320F809 */  jalr  $t9
/* 00466144 00000000 */   nop   
/* 00466148 1040002E */  beqz  $v0, .L00466204
/* 0046614C 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00466150 8EC90000 */  lw    $t1, ($s6)
/* 00466154 001050C0 */  sll   $t2, $s0, 3
/* 00466158 24040001 */  li    $a0, 1
/* 0046615C 012A5821 */  addu  $t3, $t1, $t2
/* 00466160 8D620000 */  lw    $v0, ($t3)
/* 00466164 240503B5 */  li    $a1, 949
/* 00466168 90430000 */  lbu   $v1, ($v0)
/* 0046616C 246CFFFC */  addiu $t4, $v1, -4
/* 00466170 2D810003 */  sltiu $at, $t4, 3
/* 00466174 1020001D */  beqz  $at, .L004661EC
/* 00466178 00000000 */   nop   
/* 0046617C 8F818044 */  lw    $at, %got(jtbl_1000D630)($gp)
/* 00466180 000C6080 */  sll   $t4, $t4, 2
/* 00466184 002C0821 */  addu  $at, $at, $t4
/* 00466188 8C2CD630 */  lw    $t4, %lo(jtbl_1000D630)($at)
/* 0046618C 019C6021 */  addu  $t4, $t4, $gp
/* 00466190 01800008 */  jr    $t4
/* 00466194 00000000 */   nop   
.L00466198:
/* 00466198 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 0046619C 8C4D0024 */  lw    $t5, 0x24($v0)
/* 004661A0 02802025 */  move  $a0, $s4
/* 004661A4 0320F809 */  jalr  $t9
/* 004661A8 8DA50000 */   lw    $a1, ($t5)
/* 004661AC 10000015 */  b     .L00466204
/* 004661B0 8FBC003C */   lw    $gp, 0x3c($sp)
.L004661B4:
/* 004661B4 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 004661B8 8C4E0020 */  lw    $t6, 0x20($v0)
/* 004661BC 02802025 */  move  $a0, $s4
/* 004661C0 0320F809 */  jalr  $t9
/* 004661C4 8DC50000 */   lw    $a1, ($t6)
/* 004661C8 1000000E */  b     .L00466204
/* 004661CC 8FBC003C */   lw    $gp, 0x3c($sp)
.L004661D0:
/* 004661D0 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 004661D4 8C4F0020 */  lw    $t7, 0x20($v0)
/* 004661D8 02802025 */  move  $a0, $s4
/* 004661DC 0320F809 */  jalr  $t9
/* 004661E0 8DE50000 */   lw    $a1, ($t7)
/* 004661E4 10000007 */  b     .L00466204
/* 004661E8 8FBC003C */   lw    $gp, 0x3c($sp)
.L004661EC:
/* 004661EC 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 004661F0 8F868044 */  lw    $a2, %got(RO_1000D626)($gp)
/* 004661F4 2407000A */  li    $a3, 10
/* 004661F8 0320F809 */  jalr  $t9
/* 004661FC 24C6D626 */   addiu $a2, %lo(RO_1000D626) # addiu $a2, $a2, -0x29da
/* 00466200 8FBC003C */  lw    $gp, 0x3c($sp)
.L00466204:
/* 00466204 26100001 */  addiu $s0, $s0, 1
/* 00466208 1611FFCA */  bne   $s0, $s1, .L00466134
/* 0046620C 00000000 */   nop   
.L00466210:
/* 00466210 8FD3000C */  lw    $s3, 0xc($fp)
.L00466214:
/* 00466214 1660FFB9 */  bnez  $s3, .L004660FC
/* 00466218 00000000 */   nop   
/* 0046621C 8FA600A0 */  lw    $a2, 0xa0($sp)
.L00466220:
/* 00466220 24010004 */  li    $at, 4
/* 00466224 90C20000 */  lbu   $v0, ($a2)
/* 00466228 54410004 */  bnel  $v0, $at, .L0046623C
/* 0046622C 90C40001 */   lbu   $a0, 1($a2)
/* 00466230 10000002 */  b     .L0046623C
/* 00466234 90C40012 */   lbu   $a0, 0x12($a2)
/* 00466238 90C40001 */  lbu   $a0, 1($a2)
.L0046623C:
/* 0046623C 2401000E */  li    $at, 14
/* 00466240 50810008 */  beql  $a0, $at, .L00466264
/* 00466244 24010006 */   li    $at, 6
/* 00466248 8F99865C */  lw    $t9, %call16(sizeoftyp)($gp)
/* 0046624C 0320F809 */  jalr  $t9
/* 00466250 00000000 */   nop   
/* 00466254 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00466258 1000000D */  b     .L00466290
/* 0046625C 00408025 */   move  $s0, $v0
/* 00466260 24010006 */  li    $at, 6
.L00466264:
/* 00466264 54410004 */  bnel  $v0, $at, .L00466278
/* 00466268 90D80010 */   lbu   $t8, 0x10($a2)
/* 0046626C 10000008 */  b     .L00466290
/* 00466270 90D00018 */   lbu   $s0, 0x18($a2)
/* 00466274 90D80010 */  lbu   $t8, 0x10($a2)
.L00466278:
/* 00466278 24010002 */  li    $at, 2
/* 0046627C 57010004 */  bnel  $t8, $at, .L00466290
/* 00466280 8CD0001C */   lw    $s0, 0x1c($a2)
/* 00466284 10000002 */  b     .L00466290
/* 00466288 94D00024 */   lhu   $s0, 0x24($a2)
/* 0046628C 8CD0001C */  lw    $s0, 0x1c($a2)
.L00466290:
/* 00466290 8F998A2C */  lw     $t9, %got(tempcount)($gp)
/* 00466294 8F390000 */  lw    $t9, ($t9)
/* 00466298 53200021 */  beql  $t9, $zero, .L00466320
/* 0046629C 93AD009B */   lbu   $t5, 0x9b($sp)
.L004662A0:
/* 004662A0 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 004662A4 02A02025 */  move  $a0, $s5
/* 004662A8 02802825 */  move  $a1, $s4
/* 004662AC 0320F809 */  jalr  $t9
/* 004662B0 00000000 */   nop   
/* 004662B4 10400003 */  beqz  $v0, .L004662C4
/* 004662B8 8FBC003C */   lw    $gp, 0x3c($sp)
/* 004662BC 10000010 */  b     .L00466300
/* 004662C0 26B50001 */   addiu $s5, $s5, 1
.L004662C4:
/* 004662C4 8F99802C */  lw    $t9, %got(func_00465E18)($gp)
/* 004662C8 02A02025 */  move  $a0, $s5
/* 004662CC 02E01025 */  move  $v0, $s7
/* 004662D0 27395E18 */  addiu $t9, %lo(func_00465E18) # addiu $t9, $t9, 0x5e18
/* 004662D4 0320F809 */  jalr  $t9
/* 004662D8 00000000 */   nop   
/* 004662DC AFA20094 */  sw    $v0, 0x94($sp)
/* 004662E0 8C490008 */  lw    $t1, 8($v0)
/* 004662E4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004662E8 240A0001 */  li    $t2, 1
/* 004662EC 56090004 */  bnel  $s0, $t1, .L00466300
/* 004662F0 26B50001 */   addiu $s5, $s5, 1
/* 004662F4 10000002 */  b     .L00466300
/* 004662F8 A3AA009B */   sb    $t2, 0x9b($sp)
/* 004662FC 26B50001 */  addiu $s5, $s5, 1
.L00466300:
/* 00466300 93AB009B */  lbu   $t3, 0x9b($sp)
/* 00466304 55600006 */  bnezl $t3, .L00466320
/* 00466308 93AD009B */   lbu   $t5, 0x9b($sp)
/* 0046630C 8F8C8A2C */  lw     $t4, %got(tempcount)($gp)
/* 00466310 8D8C0000 */  lw    $t4, ($t4)
/* 00466314 16ACFFE2 */  bne   $s5, $t4, .L004662A0
/* 00466318 00000000 */   nop   
/* 0046631C 93AD009B */  lbu   $t5, 0x9b($sp)
.L00466320:
/* 00466320 8FA600A0 */  lw    $a2, 0xa0($sp)
/* 00466324 26AE0001 */  addiu $t6, $s5, 1
/* 00466328 15A00043 */  bnez  $t5, .L00466438
/* 0046632C 24040014 */   li    $a0, 20
/* 00466330 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 00466334 8F818A2C */  lw     $at, %got(tempcount)($gp)
/* 00466338 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 0046633C 0320F809 */  jalr  $t9
/* 00466340 AC2E0000 */   sw    $t6, ($at)
/* 00466344 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00466348 14400005 */  bnez  $v0, .L00466360
/* 0046634C AFA20094 */   sw    $v0, 0x94($sp)
/* 00466350 8F818B20 */  lw     $at, %got(outofmem)($gp)
/* 00466354 240F0001 */  li    $t7, 1
/* 00466358 1000005C */  b     .L004664CC
/* 0046635C A02F0000 */   sb    $t7, ($at)
.L00466360:
/* 00466360 8F988974 */  lw     $t8, %got(templochead)($gp)
/* 00466364 AC400010 */  sw    $zero, 0x10($v0)
/* 00466368 AC550000 */  sw    $s5, ($v0)
/* 0046636C 8F180000 */  lw    $t8, ($t8)
/* 00466370 02002025 */  move  $a0, $s0
/* 00466374 17000004 */  bnez  $t8, .L00466388
/* 00466378 00000000 */   nop   
/* 0046637C 8F818974 */  lw     $at, %got(templochead)($gp)
/* 00466380 10000004 */  b     .L00466394
/* 00466384 AC220000 */   sw    $v0, ($at)
.L00466388:
/* 00466388 8F998978 */  lw     $t9, %got(temploctail)($gp)
/* 0046638C 8F390000 */  lw    $t9, ($t9)
/* 00466390 AF220010 */  sw    $v0, 0x10($t9)
.L00466394:
/* 00466394 8F888970 */  lw     $t0, %got(tempdisp)($gp)
/* 00466398 2A010009 */  slti  $at, $s0, 9
/* 0046639C 14200002 */  bnez  $at, .L004663A8
/* 004663A0 8D030000 */   lw    $v1, ($t0)
/* 004663A4 24040008 */  li    $a0, 8
.L004663A8:
/* 004663A8 0064001A */  div   $zero, $v1, $a0
/* 004663AC 00002810 */  mfhi  $a1
/* 004663B0 00A44826 */  xor   $t1, $a1, $a0
/* 004663B4 14800002 */  bnez  $a0, .L004663C0
/* 004663B8 00000000 */   nop   
/* 004663BC 0007000D */  break 7
.L004663C0:
/* 004663C0 2401FFFF */  li    $at, -1
/* 004663C4 14810004 */  bne   $a0, $at, .L004663D8
/* 004663C8 3C018000 */   lui   $at, 0x8000
/* 004663CC 14610002 */  bne   $v1, $at, .L004663D8
/* 004663D0 00000000 */   nop   
/* 004663D4 0006000D */  break 6
.L004663D8:
/* 004663D8 00645021 */  addu  $t2, $v1, $a0
/* 004663DC 05210002 */  bgez  $t1, .L004663E8
/* 004663E0 00000000 */   nop   
/* 004663E4 00A42821 */  addu  $a1, $a1, $a0
.L004663E8:
/* 004663E8 10A00003 */  beqz  $a1, .L004663F8
/* 004663EC 00000000 */   nop   
/* 004663F0 01451823 */  subu  $v1, $t2, $a1
/* 004663F4 AD030000 */  sw    $v1, ($t0)
.L004663F8:
/* 004663F8 8F8C8B48 */  lw     $t4, %got(stack_reversed)($gp)
/* 004663FC 00706821 */  addu  $t5, $v1, $s0
/* 00466400 000D7823 */  negu  $t7, $t5
/* 00466404 918C0000 */  lbu   $t4, ($t4)
/* 00466408 0070C021 */  addu  $t8, $v1, $s0
/* 0046640C 55800005 */  bnezl $t4, .L00466424
/* 00466410 AC430004 */   sw    $v1, 4($v0)
/* 00466414 AD0D0000 */  sw    $t5, ($t0)
/* 00466418 10000003 */  b     .L00466428
/* 0046641C AC4F0004 */   sw    $t7, 4($v0)
/* 00466420 AC430004 */  sw    $v1, 4($v0)
.L00466424:
/* 00466424 AD180000 */  sw    $t8, ($t0)
.L00466428:
/* 00466428 8F818978 */  lw     $at, %got(temploctail)($gp)
/* 0046642C AC500008 */  sw    $s0, 8($v0)
/* 00466430 8FA600A0 */  lw    $a2, 0xa0($sp)
/* 00466434 AC220000 */  sw    $v0, ($at)
.L00466438:
/* 00466438 90C30000 */  lbu   $v1, ($a2)
/* 0046643C 2479FFFC */  addiu $t9, $v1, -4
/* 00466440 2F210003 */  sltiu $at, $t9, 3
/* 00466444 10200011 */  beqz  $at, .L0046648C
/* 00466448 00000000 */   nop   
/* 0046644C 8F818044 */  lw    $at, %got(jtbl_1000D63C)($gp)
/* 00466450 0019C880 */  sll   $t9, $t9, 2
/* 00466454 00390821 */  addu  $at, $at, $t9
/* 00466458 8C39D63C */  lw    $t9, %lo(jtbl_1000D63C)($at)
/* 0046645C 033CC821 */  addu  $t9, $t9, $gp
/* 00466460 03200008 */  jr    $t9
/* 00466464 00000000 */   nop   
.L00466468:
/* 00466468 8FA90094 */  lw    $t1, 0x94($sp)
/* 0046646C 1000000F */  b     .L004664AC
/* 00466470 ACC90020 */   sw    $t1, 0x20($a2)
.L00466474:
/* 00466474 8FAA0094 */  lw    $t2, 0x94($sp)
/* 00466478 1000000C */  b     .L004664AC
/* 0046647C ACCA0024 */   sw    $t2, 0x24($a2)
.L00466480:
/* 00466480 8FAB0094 */  lw    $t3, 0x94($sp)
/* 00466484 10000009 */  b     .L004664AC
/* 00466488 ACCB0020 */   sw    $t3, 0x20($a2)
.L0046648C:
/* 0046648C 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 00466490 8F868044 */  lw    $a2, %got(RO_1000D61C)($gp)
/* 00466494 24040001 */  li    $a0, 1
/* 00466498 240503EF */  li    $a1, 1007
/* 0046649C 2407000A */  li    $a3, 10
/* 004664A0 0320F809 */  jalr  $t9
/* 004664A4 24C6D61C */   addiu $a2, %lo(RO_1000D61C) # addiu $a2, $a2, -0x29e4
/* 004664A8 8FBC003C */  lw    $gp, 0x3c($sp)
.L004664AC:
/* 004664AC 8FAC00BC */  lw    $t4, 0xbc($sp)
/* 004664B0 8FAE0058 */  lw    $t6, 0x58($sp)
/* 004664B4 8FB80080 */  lw    $t8, 0x80($sp)
/* 004664B8 258D0001 */  addiu $t5, $t4, 1
/* 004664BC 25CF0008 */  addiu $t7, $t6, 8
/* 004664C0 AFAF0058 */  sw    $t7, 0x58($sp)
/* 004664C4 15B8FEE9 */  bne   $t5, $t8, .L0046606C
/* 004664C8 AFAD00BC */   sw    $t5, 0xbc($sp)
.L004664CC:
/* 004664CC 8FBF0044 */  lw    $ra, 0x44($sp)
.L004664D0:
/* 004664D0 8FB0001C */  lw    $s0, 0x1c($sp)
/* 004664D4 8FB10020 */  lw    $s1, 0x20($sp)
/* 004664D8 8FB20024 */  lw    $s2, 0x24($sp)
/* 004664DC 8FB30028 */  lw    $s3, 0x28($sp)
/* 004664E0 8FB4002C */  lw    $s4, 0x2c($sp)
/* 004664E4 8FB50030 */  lw    $s5, 0x30($sp)
/* 004664E8 8FB60034 */  lw    $s6, 0x34($sp)
/* 004664EC 8FB70038 */  lw    $s7, 0x38($sp)
/* 004664F0 8FBE0040 */  lw    $fp, 0x40($sp)
/* 004664F4 03E00008 */  jr    $ra
/* 004664F8 27BD00C0 */   addiu $sp, $sp, 0xc0
    .type spilltemps, @function
    .size spilltemps, .-spilltemps
    .end spilltemps

glabel dellivbb
    .ent dellivbb
    # 004669A8 addadjacents
    # 00467F04 split
/* 004664FC 8C820000 */  lw    $v0, ($a0)
/* 00466500 54A20005 */  bnel  $a1, $v0, .L00466518
/* 00466504 8C440004 */   lw    $a0, 4($v0)
/* 00466508 8C4E0004 */  lw    $t6, 4($v0)
/* 0046650C 03E00008 */  jr    $ra
/* 00466510 AC8E0000 */   sw    $t6, ($a0)

/* 00466514 8C440004 */  lw    $a0, 4($v0)
.L00466518:
/* 00466518 00401825 */  move  $v1, $v0
/* 0046651C 50A40006 */  beql  $a1, $a0, .L00466538
/* 00466520 8CAF0004 */   lw    $t7, 4($a1)
/* 00466524 00801825 */  move  $v1, $a0
.L00466528:
/* 00466528 8C840004 */  lw    $a0, 4($a0)
/* 0046652C 54A4FFFE */  bnel  $a1, $a0, .L00466528
/* 00466530 00801825 */   move  $v1, $a0
/* 00466534 8CAF0004 */  lw    $t7, 4($a1)
.L00466538:
/* 00466538 AC6F0004 */  sw    $t7, 4($v1)
/* 0046653C 03E00008 */  jr    $ra
/* 00466540 00000000 */   nop   
    .type dellivbb, @function
    .size dellivbb, .-dellivbb
    .end dellivbb

glabel updatecolorsleft
    .ent updatecolorsleft
    # 004669A8 addadjacents
    # 00467F04 split
    # 00469280 globalcolor
/* 00466544 3C1C0FBB */  .cpload $t9
/* 00466548 279C3D4C */  
/* 0046654C 0399E021 */  
/* 00466550 8F8E8D34 */  lw     $t6, %got(firsterreg)($gp)
/* 00466554 8F988D3C */  lw     $t8, %got(lasterreg)($gp)
/* 00466558 00053080 */  sll   $a2, $a1, 2
/* 0046655C 25CEFFFC */  addiu $t6, $t6, -4
/* 00466560 2718FFFC */  addiu $t8, $t8, -4
/* 00466564 00D8C821 */  addu  $t9, $a2, $t8
/* 00466568 00CE7821 */  addu  $t7, $a2, $t6
/* 0046656C 8DE30000 */  lw    $v1, ($t7)
/* 00466570 8F270000 */  lw    $a3, ($t9)
/* 00466574 00001025 */  move  $v0, $zero
/* 00466578 00E3082A */  slt   $at, $a3, $v1
/* 0046657C 14200043 */  bnez  $at, .L0046668C
/* 00466580 24E70001 */   addiu $a3, $a3, 1
/* 00466584 00E34823 */  subu  $t1, $a3, $v1
/* 00466588 31290003 */  andi  $t1, $t1, 3
/* 0046658C 11200010 */  beqz  $t1, .L004665D0
/* 00466590 00602825 */   move  $a1, $v1
/* 00466594 01234021 */  addu  $t0, $t1, $v1
/* 00466598 2CAA0040 */  sltiu $t2, $a1, 0x40
.L0046659C:
/* 0046659C 11400006 */  beqz  $t2, .L004665B8
/* 004665A0 00055943 */   sra   $t3, $a1, 5
/* 004665A4 000B6080 */  sll   $t4, $t3, 2
/* 004665A8 008C6821 */  addu  $t5, $a0, $t4
/* 004665AC 8DAE0028 */  lw    $t6, 0x28($t5)
/* 004665B0 00AE7804 */  sllv  $t7, $t6, $a1
/* 004665B4 29EA0000 */  slti  $t2, $t7, 0
.L004665B8:
/* 004665B8 15400002 */  bnez  $t2, .L004665C4
/* 004665BC 24A50001 */   addiu $a1, $a1, 1
/* 004665C0 24420001 */  addiu $v0, $v0, 1
.L004665C4:
/* 004665C4 5505FFF5 */  bnel  $t0, $a1, .L0046659C
/* 004665C8 2CAA0040 */   sltiu $t2, $a1, 0x40
/* 004665CC 10A7002F */  beq   $a1, $a3, .L0046668C
.L004665D0:
/* 004665D0 2CB90040 */   sltiu $t9, $a1, 0x40
.L004665D4:
/* 004665D4 13200007 */  beqz  $t9, .L004665F4
/* 004665D8 24AA0001 */   addiu $t2, $a1, 1
/* 004665DC 00055943 */  sra   $t3, $a1, 5
/* 004665E0 000B6080 */  sll   $t4, $t3, 2
/* 004665E4 008C6821 */  addu  $t5, $a0, $t4
/* 004665E8 8DAE0028 */  lw    $t6, 0x28($t5)
/* 004665EC 00AE7804 */  sllv  $t7, $t6, $a1
/* 004665F0 29F90000 */  slti  $t9, $t7, 0
.L004665F4:
/* 004665F4 17200002 */  bnez  $t9, .L00466600
/* 004665F8 2D4B0040 */   sltiu $t3, $t2, 0x40
/* 004665FC 24420001 */  addiu $v0, $v0, 1
.L00466600:
/* 00466600 11600006 */  beqz  $t3, .L0046661C
/* 00466604 000A6143 */   sra   $t4, $t2, 5
/* 00466608 000C6880 */  sll   $t5, $t4, 2
/* 0046660C 008D7021 */  addu  $t6, $a0, $t5
/* 00466610 8DCF0028 */  lw    $t7, 0x28($t6)
/* 00466614 014FC004 */  sllv  $t8, $t7, $t2
/* 00466618 2B0B0000 */  slti  $t3, $t8, 0
.L0046661C:
/* 0046661C 15600002 */  bnez  $t3, .L00466628
/* 00466620 24AC0002 */   addiu $t4, $a1, 2
/* 00466624 24420001 */  addiu $v0, $v0, 1
.L00466628:
/* 00466628 2D8D0040 */  sltiu $t5, $t4, 0x40
/* 0046662C 11A00006 */  beqz  $t5, .L00466648
/* 00466630 000C7143 */   sra   $t6, $t4, 5
/* 00466634 000E7880 */  sll   $t7, $t6, 2
/* 00466638 008F5021 */  addu  $t2, $a0, $t7
/* 0046663C 8D580028 */  lw    $t8, 0x28($t2)
/* 00466640 0198C804 */  sllv  $t9, $t8, $t4
/* 00466644 2B2D0000 */  slti  $t5, $t9, 0
.L00466648:
/* 00466648 15A00002 */  bnez  $t5, .L00466654
/* 0046664C 24AE0003 */   addiu $t6, $a1, 3
/* 00466650 24420001 */  addiu $v0, $v0, 1
.L00466654:
/* 00466654 2DCF0040 */  sltiu $t7, $t6, 0x40
/* 00466658 11E00007 */  beqz  $t7, .L00466678
/* 0046665C 24A50004 */   addiu $a1, $a1, 4
/* 00466660 000E5143 */  sra   $t2, $t6, 5
/* 00466664 000AC080 */  sll   $t8, $t2, 2
/* 00466668 00986021 */  addu  $t4, $a0, $t8
/* 0046666C 8D990028 */  lw    $t9, 0x28($t4)
/* 00466670 01D95804 */  sllv  $t3, $t9, $t6
/* 00466674 296F0000 */  slti  $t7, $t3, 0
.L00466678:
/* 00466678 15E00002 */  bnez  $t7, .L00466684
/* 0046667C 00000000 */   nop   
/* 00466680 24420001 */  addiu $v0, $v0, 1
.L00466684:
/* 00466684 54A7FFD3 */  bnel  $a1, $a3, .L004665D4
/* 00466688 2CB90040 */   sltiu $t9, $a1, 0x40
.L0046668C:
/* 0046668C 8F8A8D38 */  lw     $t2, %got(firsteereg)($gp)
/* 00466690 8F8C8D40 */  lw     $t4, %got(lasteereg)($gp)
/* 00466694 254AFFFC */  addiu $t2, $t2, -4
/* 00466698 258CFFFC */  addiu $t4, $t4, -4
/* 0046669C 00CCC821 */  addu  $t9, $a2, $t4
/* 004666A0 00CAC021 */  addu  $t8, $a2, $t2
/* 004666A4 8F030000 */  lw    $v1, ($t8)
/* 004666A8 8F270000 */  lw    $a3, ($t9)
/* 004666AC 00E3082A */  slt   $at, $a3, $v1
/* 004666B0 14200045 */  bnez  $at, .L004667C8
/* 004666B4 24E70001 */   addiu $a3, $a3, 1
/* 004666B8 00E34823 */  subu  $t1, $a3, $v1
/* 004666BC 31290003 */  andi  $t1, $t1, 3
/* 004666C0 11200011 */  beqz  $t1, .L00466708
/* 004666C4 00602825 */   move  $a1, $v1
/* 004666C8 01233021 */  addu  $a2, $t1, $v1
/* 004666CC 2CAE0040 */  sltiu $t6, $a1, 0x40
.L004666D0:
/* 004666D0 11C00006 */  beqz  $t6, .L004666EC
/* 004666D4 00055943 */   sra   $t3, $a1, 5
/* 004666D8 000B6880 */  sll   $t5, $t3, 2
/* 004666DC 008D7821 */  addu  $t7, $a0, $t5
/* 004666E0 8DEA0028 */  lw    $t2, 0x28($t7)
/* 004666E4 00AAC004 */  sllv  $t8, $t2, $a1
/* 004666E8 2B0E0000 */  slti  $t6, $t8, 0
.L004666EC:
/* 004666EC 15C00002 */  bnez  $t6, .L004666F8
/* 004666F0 24A50001 */   addiu $a1, $a1, 1
/* 004666F4 24420001 */  addiu $v0, $v0, 1
.L004666F8:
/* 004666F8 54C5FFF5 */  bnel  $a2, $a1, .L004666D0
/* 004666FC 2CAE0040 */   sltiu $t6, $a1, 0x40
/* 00466700 10A70031 */  beq   $a1, $a3, .L004667C8
/* 00466704 00000000 */   nop   
.L00466708:
/* 00466708 2CB90040 */  sltiu $t9, $a1, 0x40
.L0046670C:
/* 0046670C 13200007 */  beqz  $t9, .L0046672C
/* 00466710 24AE0001 */   addiu $t6, $a1, 1
/* 00466714 00055943 */  sra   $t3, $a1, 5
/* 00466718 000B6880 */  sll   $t5, $t3, 2
/* 0046671C 008D7821 */  addu  $t7, $a0, $t5
/* 00466720 8DEA0028 */  lw    $t2, 0x28($t7)
/* 00466724 00AAC004 */  sllv  $t8, $t2, $a1
/* 00466728 2B190000 */  slti  $t9, $t8, 0
.L0046672C:
/* 0046672C 17200002 */  bnez  $t9, .L00466738
/* 00466730 2DCB0040 */   sltiu $t3, $t6, 0x40
/* 00466734 24420001 */  addiu $v0, $v0, 1
.L00466738:
/* 00466738 11600007 */  beqz  $t3, .L00466758
/* 0046673C 000E6943 */   sra   $t5, $t6, 5
/* 00466740 000D7880 */  sll   $t7, $t5, 2
/* 00466744 008F5021 */  addu  $t2, $a0, $t7
/* 00466748 8D580028 */  lw    $t8, 0x28($t2)
/* 0046674C 01D86004 */  sllv  $t4, $t8, $t6
/* 00466750 29990000 */  slti  $t9, $t4, 0
/* 00466754 03205825 */  move  $t3, $t9
.L00466758:
/* 00466758 15600002 */  bnez  $t3, .L00466764
/* 0046675C 24AD0002 */   addiu $t5, $a1, 2
/* 00466760 24420001 */  addiu $v0, $v0, 1
.L00466764:
/* 00466764 2DAF0040 */  sltiu $t7, $t5, 0x40
/* 00466768 11E00006 */  beqz  $t7, .L00466784
/* 0046676C 000D5143 */   sra   $t2, $t5, 5
/* 00466770 000AC080 */  sll   $t8, $t2, 2
/* 00466774 00987021 */  addu  $t6, $a0, $t8
/* 00466778 8DCC0028 */  lw    $t4, 0x28($t6)
/* 0046677C 01ACC804 */  sllv  $t9, $t4, $t5
/* 00466780 2B2F0000 */  slti  $t7, $t9, 0
.L00466784:
/* 00466784 15E00002 */  bnez  $t7, .L00466790
/* 00466788 24AA0003 */   addiu $t2, $a1, 3
/* 0046678C 24420001 */  addiu $v0, $v0, 1
.L00466790:
/* 00466790 2D580040 */  sltiu $t8, $t2, 0x40
/* 00466794 13000007 */  beqz  $t8, .L004667B4
/* 00466798 24A50004 */   addiu $a1, $a1, 4
/* 0046679C 000A7143 */  sra   $t6, $t2, 5
/* 004667A0 000E6080 */  sll   $t4, $t6, 2
/* 004667A4 008C6821 */  addu  $t5, $a0, $t4
/* 004667A8 8DB90028 */  lw    $t9, 0x28($t5)
/* 004667AC 01595804 */  sllv  $t3, $t9, $t2
/* 004667B0 29780000 */  slti  $t8, $t3, 0
.L004667B4:
/* 004667B4 17000002 */  bnez  $t8, .L004667C0
/* 004667B8 00000000 */   nop   
/* 004667BC 24420001 */  addiu $v0, $v0, 1
.L004667C0:
/* 004667C0 54A7FFD2 */  bnel  $a1, $a3, .L0046670C
/* 004667C4 2CB90040 */   sltiu $t9, $a1, 0x40
.L004667C8:
/* 004667C8 03E00008 */  jr    $ra
/* 004667CC A0820021 */   sb    $v0, 0x21($a0)
    .type updatecolorsleft, @function
    .size updatecolorsleft, .-updatecolorsleft
    .end updatecolorsleft

glabel updateforbidden
    .ent updateforbidden
    # 004669A8 addadjacents
    # 00467F04 split
    # 00469280 globalcolor
/* 004667D0 10A0000A */  beqz  $a1, .L004667FC
/* 004667D4 27BDFFF8 */   addiu $sp, $sp, -8
/* 004667D8 00A07827 */  not   $t7, $a1
/* 004667DC 24B9FFE0 */  addiu $t9, $a1, -0x20
/* 004667E0 2F280020 */  sltiu $t0, $t9, 0x20
/* 004667E4 2CAE0020 */  sltiu $t6, $a1, 0x20
/* 004667E8 01EEC004 */  sllv  $t8, $t6, $t7
/* 004667EC 01E84804 */  sllv  $t1, $t0, $t7
/* 004667F0 AFA90004 */  sw    $t1, 4($sp)
/* 004667F4 10000003 */  b     .L00466804
/* 004667F8 AFB80000 */   sw    $t8, ($sp)
.L004667FC:
/* 004667FC AFA00000 */  sw    $zero, ($sp)
/* 00466800 AFA00004 */  sw    $zero, 4($sp)
.L00466804:
/* 00466804 000750C0 */  sll   $t2, $a3, 3
/* 00466808 8FAD0000 */  lw    $t5, ($sp)
/* 0046680C 008A5821 */  addu  $t3, $a0, $t2
/* 00466810 8D6C002C */  lw    $t4, 0x2c($t3)
/* 00466814 8CD90028 */  lw    $t9, 0x28($a2)
/* 00466818 01A07027 */  not   $t6, $t5
/* 0046681C 018EC024 */  and   $t8, $t4, $t6
/* 00466820 03384025 */  or    $t0, $t9, $t8
/* 00466824 8FA90004 */  lw    $t1, 4($sp)
/* 00466828 ACC80028 */  sw    $t0, 0x28($a2)
/* 0046682C 8D6F0030 */  lw    $t7, 0x30($t3)
/* 00466830 8CCC002C */  lw    $t4, 0x2c($a2)
/* 00466834 01205027 */  not   $t2, $t1
/* 00466838 01EA6824 */  and   $t5, $t7, $t2
/* 0046683C 018D7025 */  or    $t6, $t4, $t5
/* 00466840 ACCE002C */  sw    $t6, 0x2c($a2)
/* 00466844 03E00008 */  jr    $ra
/* 00466848 27BD0008 */   addiu $sp, $sp, 8
    .type updateforbidden, @function
    .size updateforbidden, .-updateforbidden
    .end updateforbidden

glabel findsharedintf
    .ent findsharedintf
    # 00467F04 split
/* 0046684C 3C1C0FBB */  .cpload $t9
/* 00466850 279C3A44 */  
/* 00466854 0399E021 */  
/* 00466858 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 0046685C AFB2001C */  sw    $s2, 0x1c($sp)
/* 00466860 AFB10018 */  sw    $s1, 0x18($sp)
/* 00466864 AFB00014 */  sw    $s0, 0x14($sp)
/* 00466868 00808025 */  move  $s0, $a0
/* 0046686C 00A09025 */  move  $s2, $a1
/* 00466870 AFBF002C */  sw    $ra, 0x2c($sp)
/* 00466874 AFBC0028 */  sw    $gp, 0x28($sp)
/* 00466878 AFB40024 */  sw    $s4, 0x24($sp)
/* 0046687C AFB30020 */  sw    $s3, 0x20($sp)
/* 00466880 10800017 */  beqz  $a0, .L004668E0
/* 00466884 00008825 */   move  $s1, $zero
/* 00466888 24140001 */  li    $s4, 1
/* 0046688C 2413FFFF */  li    $s3, -1
/* 00466890 8E020000 */  lw    $v0, ($s0)
.L00466894:
/* 00466894 50400010 */  beql  $v0, $zero, .L004668D8
/* 00466898 8E100004 */   lw    $s0, 4($s0)
/* 0046689C 804E0020 */  lb    $t6, 0x20($v0)
/* 004668A0 166E0003 */  bne   $s3, $t6, .L004668B0
/* 004668A4 00000000 */   nop   
/* 004668A8 1000000A */  b     .L004668D4
/* 004668AC AE000000 */   sw    $zero, ($s0)
.L004668B0:
/* 004668B0 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 004668B4 02402025 */  move  $a0, $s2
/* 004668B8 24450014 */  addiu $a1, $v0, 0x14
/* 004668BC 0320F809 */  jalr  $t9
/* 004668C0 00000000 */   nop   
/* 004668C4 10400003 */  beqz  $v0, .L004668D4
/* 004668C8 8FBC0028 */   lw    $gp, 0x28($sp)
/* 004668CC A2140008 */  sb    $s4, 8($s0)
/* 004668D0 26310001 */  addiu $s1, $s1, 1
.L004668D4:
/* 004668D4 8E100004 */  lw    $s0, 4($s0)
.L004668D8:
/* 004668D8 5600FFEE */  bnezl $s0, .L00466894
/* 004668DC 8E020000 */   lw    $v0, ($s0)
.L004668E0:
/* 004668E0 8FBF002C */  lw    $ra, 0x2c($sp)
/* 004668E4 02201025 */  move  $v0, $s1
/* 004668E8 8FB10018 */  lw    $s1, 0x18($sp)
/* 004668EC 8FB00014 */  lw    $s0, 0x14($sp)
/* 004668F0 8FB2001C */  lw    $s2, 0x1c($sp)
/* 004668F4 8FB30020 */  lw    $s3, 0x20($sp)
/* 004668F8 8FB40024 */  lw    $s4, 0x24($sp)
/* 004668FC 03E00008 */  jr    $ra
/* 00466900 27BD0030 */   addiu $sp, $sp, 0x30
    .type findsharedintf, @function
    .size findsharedintf, .-findsharedintf
    .end findsharedintf

glabel marksharedintf
    .ent marksharedintf
    # 004669A8 addadjacents
/* 00466904 3C1C0FBB */  .cpload $t9
/* 00466908 279C398C */  
/* 0046690C 0399E021 */  
/* 00466910 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 00466914 AFB20020 */  sw    $s2, 0x20($sp)
/* 00466918 AFB1001C */  sw    $s1, 0x1c($sp)
/* 0046691C AFB00018 */  sw    $s0, 0x18($sp)
/* 00466920 00808025 */  move  $s0, $a0
/* 00466924 00A09025 */  move  $s2, $a1
/* 00466928 AFBF002C */  sw    $ra, 0x2c($sp)
/* 0046692C AFBC0028 */  sw    $gp, 0x28($sp)
/* 00466930 AFB30024 */  sw    $s3, 0x24($sp)
/* 00466934 10800014 */  beqz  $a0, .L00466988
/* 00466938 00008825 */   move  $s1, $zero
/* 0046693C 24130001 */  li    $s3, 1
/* 00466940 920E0008 */  lbu   $t6, 8($s0)
.L00466944:
/* 00466944 55C0000E */  bnezl $t6, .L00466980
/* 00466948 8E100004 */   lw    $s0, 4($s0)
/* 0046694C 8E020000 */  lw    $v0, ($s0)
/* 00466950 5040000B */  beql  $v0, $zero, .L00466980
/* 00466954 8E100004 */   lw    $s0, 4($s0)
/* 00466958 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 0046695C 02402025 */  move  $a0, $s2
/* 00466960 24450014 */  addiu $a1, $v0, 0x14
/* 00466964 0320F809 */  jalr  $t9
/* 00466968 00000000 */   nop   
/* 0046696C 10400003 */  beqz  $v0, .L0046697C
/* 00466970 8FBC0028 */   lw    $gp, 0x28($sp)
/* 00466974 A2130009 */  sb    $s3, 9($s0)
/* 00466978 26310001 */  addiu $s1, $s1, 1
.L0046697C:
/* 0046697C 8E100004 */  lw    $s0, 4($s0)
.L00466980:
/* 00466980 5600FFF0 */  bnezl $s0, .L00466944
/* 00466984 920E0008 */   lbu   $t6, 8($s0)
.L00466988:
/* 00466988 8FBF002C */  lw    $ra, 0x2c($sp)
/* 0046698C 02201025 */  move  $v0, $s1
/* 00466990 8FB1001C */  lw    $s1, 0x1c($sp)
/* 00466994 8FB00018 */  lw    $s0, 0x18($sp)
/* 00466998 8FB20020 */  lw    $s2, 0x20($sp)
/* 0046699C 8FB30024 */  lw    $s3, 0x24($sp)
/* 004669A0 03E00008 */  jr    $ra
/* 004669A4 27BD0030 */   addiu $sp, $sp, 0x30
    .type marksharedintf, @function
    .size marksharedintf, .-marksharedintf
    .end marksharedintf

glabel addadjacents
    .ent addadjacents
    # 00467F04 split
/* 004669A8 3C1C0FBB */  .cpload $t9
/* 004669AC 279C38E8 */  
/* 004669B0 0399E021 */  
/* 004669B4 27BDFF98 */  addiu $sp, $sp, -0x68
/* 004669B8 8F8F8C70 */  lw     $t7, %got(forminginx)($gp)
/* 004669BC 8F8E8C6C */  lw     $t6, %got(formingtab)($gp)
/* 004669C0 AFBF003C */  sw    $ra, 0x3c($sp)
/* 004669C4 8DEF0000 */  lw    $t7, ($t7)
/* 004669C8 8DCE0000 */  lw    $t6, ($t6)
/* 004669CC AFBE0038 */  sw    $fp, 0x38($sp)
/* 004669D0 000FC080 */  sll   $t8, $t7, 2
/* 004669D4 AFBC0034 */  sw    $gp, 0x34($sp)
/* 004669D8 AFB70030 */  sw    $s7, 0x30($sp)
/* 004669DC AFB6002C */  sw    $s6, 0x2c($sp)
/* 004669E0 AFB50028 */  sw    $s5, 0x28($sp)
/* 004669E4 AFB40024 */  sw    $s4, 0x24($sp)
/* 004669E8 AFB30020 */  sw    $s3, 0x20($sp)
/* 004669EC AFB2001C */  sw    $s2, 0x1c($sp)
/* 004669F0 AFB10018 */  sw    $s1, 0x18($sp)
/* 004669F4 AFB00014 */  sw    $s0, 0x14($sp)
/* 004669F8 AFA60070 */  sw    $a2, 0x70($sp)
/* 004669FC AFA70074 */  sw    $a3, 0x74($sp)
/* 00466A00 01D8C821 */  addu  $t9, $t6, $t8
/* 00466A04 8F280000 */  lw    $t0, ($t9)
/* 00466A08 00A09025 */  move  $s2, $a1
/* 00466A0C 0080A825 */  move  $s5, $a0
/* 00466A10 8D110018 */  lw    $s1, 0x18($t0)
/* 00466A14 24A50014 */  addiu $a1, $a1, 0x14
/* 00466A18 24130001 */  li    $s3, 1
/* 00466A1C 5220009A */  beql  $s1, $zero, .L00466C88
/* 00466A20 8FBF003C */   lw    $ra, 0x3c($sp)
/* 00466A24 AFA50044 */  sw    $a1, 0x44($sp)
/* 00466A28 8F9E8C74 */  lw     $fp, %got(formingmax)($gp)
.L00466A2C:
/* 00466A2C 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00466A30 8E290000 */  lw    $t1, ($s1)
/* 00466A34 8FA50044 */  lw    $a1, 0x44($sp)
/* 00466A38 0320F809 */  jalr  $t9
/* 00466A3C 95240008 */   lhu   $a0, 8($t1)
/* 00466A40 1440008D */  bnez  $v0, .L00466C78
/* 00466A44 8FBC0034 */   lw    $gp, 0x34($sp)
/* 00466A48 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00466A4C 8E2A0000 */  lw    $t2, ($s1)
/* 00466A50 26B70014 */  addiu $s7, $s5, 0x14
/* 00466A54 02E02825 */  move  $a1, $s7
/* 00466A58 0320F809 */  jalr  $t9
/* 00466A5C 95440008 */   lhu   $a0, 8($t2)
/* 00466A60 10400085 */  beqz  $v0, .L00466C78
/* 00466A64 8FBC0034 */   lw    $gp, 0x34($sp)
/* 00466A68 8F9984D8 */  lw    $t9, %call16(gettolivbb)($gp)
/* 00466A6C 8EA40000 */  lw    $a0, ($s5)
/* 00466A70 8E250000 */  lw    $a1, ($s1)
/* 00466A74 0320F809 */  jalr  $t9
/* 00466A78 00000000 */   nop   
/* 00466A7C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00466A80 8E4B0028 */  lw    $t3, 0x28($s2)
/* 00466A84 8E4C002C */  lw    $t4, 0x2c($s2)
/* 00466A88 8F998510 */  lw    $t9, %call16(marksharedintf)($gp)
/* 00466A8C 8E2D0000 */  lw    $t5, ($s1)
/* 00466A90 AFAB005C */  sw    $t3, 0x5c($sp)
/* 00466A94 AFAC0060 */  sw    $t4, 0x60($sp)
/* 00466A98 00408025 */  move  $s0, $v0
/* 00466A9C 92540021 */  lbu   $s4, 0x21($s2)
/* 00466AA0 8EA40038 */  lw    $a0, 0x38($s5)
/* 00466AA4 0320F809 */  jalr  $t9
/* 00466AA8 95A50008 */   lhu   $a1, 8($t5)
/* 00466AAC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00466AB0 0040B025 */  move  $s6, $v0
/* 00466AB4 8E240000 */  lw    $a0, ($s1)
/* 00466AB8 8F998508 */  lw    $t9, %call16(updateforbidden)($gp)
/* 00466ABC 92050013 */  lbu   $a1, 0x13($s0)
/* 00466AC0 02403025 */  move  $a2, $s2
/* 00466AC4 0320F809 */  jalr  $t9
/* 00466AC8 8FA70074 */   lw    $a3, 0x74($sp)
/* 00466ACC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00466AD0 02402025 */  move  $a0, $s2
/* 00466AD4 8FA50074 */  lw    $a1, 0x74($sp)
/* 00466AD8 8F998504 */  lw    $t9, %call16(updatecolorsleft)($gp)
/* 00466ADC 0320F809 */  jalr  $t9
/* 00466AE0 00000000 */   nop   
/* 00466AE4 02D4082A */  slt   $at, $s6, $s4
/* 00466AE8 1020000C */  beqz  $at, .L00466B1C
/* 00466AEC 8FBC0034 */   lw    $gp, 0x34($sp)
/* 00466AF0 924F0021 */  lbu   $t7, 0x21($s2)
/* 00466AF4 8E580024 */  lw    $t8, 0x24($s2)
/* 00466AF8 000F7040 */  sll   $t6, $t7, 1
/* 00466AFC 0316C821 */  addu  $t9, $t8, $s6
/* 00466B00 01D9082A */  slt   $at, $t6, $t9
/* 00466B04 14200005 */  bnez  $at, .L00466B1C
/* 00466B08 00000000 */   nop   
/* 00466B0C 8F888AAC */  lw     $t0, %got(doheurab)($gp)
/* 00466B10 91080000 */  lbu   $t0, ($t0)
/* 00466B14 55000009 */  bnezl $t0, .L00466B3C
/* 00466B18 8FCB0000 */   lw    $t3, ($fp)
.L00466B1C:
/* 00466B1C 8F898AAC */  lw     $t1, %got(doheurab)($gp)
/* 00466B20 91290000 */  lbu   $t1, ($t1)
/* 00466B24 55200049 */  bnezl $t1, .L00466C4C
/* 00466B28 8FA9005C */   lw    $t1, 0x5c($sp)
/* 00466B2C 924A0021 */  lbu   $t2, 0x21($s2)
/* 00466B30 51400046 */  beql  $t2, $zero, .L00466C4C
/* 00466B34 8FA9005C */   lw    $t1, 0x5c($sp)
/* 00466B38 8FCB0000 */  lw    $t3, ($fp)
.L00466B3C:
/* 00466B3C 8F8F8C6C */  lw     $t7, %got(formingtab)($gp)
/* 00466B40 8E2D0000 */  lw    $t5, ($s1)
/* 00466B44 256C0001 */  addiu $t4, $t3, 1
/* 00466B48 AFCC0000 */  sw    $t4, ($fp)
/* 00466B4C 8DEF0000 */  lw    $t7, ($t7)
/* 00466B50 000C7080 */  sll   $t6, $t4, 2
/* 00466B54 02E02025 */  move  $a0, $s7
/* 00466B58 01EEC821 */  addu  $t9, $t7, $t6
/* 00466B5C AF2D0000 */  sw    $t5, ($t9)
/* 00466B60 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 00466B64 8E280000 */  lw    $t0, ($s1)
/* 00466B68 0320F809 */  jalr  $t9
/* 00466B6C 95050008 */   lhu   $a1, 8($t0)
/* 00466B70 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00466B74 8F8989DC */  lw     $t1, %got(dft_livbb)($gp)
/* 00466B78 8D290000 */  lw    $t1, ($t1)
/* 00466B7C 1209000E */  beq   $s0, $t1, .L00466BB8
/* 00466B80 00000000 */   nop   
/* 00466B84 8F998500 */  lw    $t9, %call16(dellivbb)($gp)
/* 00466B88 26A40008 */  addiu $a0, $s5, 8
/* 00466B8C 02002825 */  move  $a1, $s0
/* 00466B90 0320F809 */  jalr  $t9
/* 00466B94 00000000 */   nop   
/* 00466B98 8FAA0070 */  lw    $t2, 0x70($sp)
/* 00466B9C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00466BA0 8D4B0000 */  lw    $t3, ($t2)
/* 00466BA4 AD700004 */  sw    $s0, 4($t3)
/* 00466BA8 8FAC0070 */  lw    $t4, 0x70($sp)
/* 00466BAC AE000004 */  sw    $zero, 4($s0)
/* 00466BB0 1000000F */  b     .L00466BF0
/* 00466BB4 AD900000 */   sw    $s0, ($t4)
.L00466BB8:
/* 00466BB8 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 00466BBC 8E380000 */  lw    $t8, ($s1)
/* 00466BC0 26A4000C */  addiu $a0, $s5, 0xc
/* 00466BC4 2650000C */  addiu $s0, $s2, 0xc
/* 00466BC8 0320F809 */  jalr  $t9
/* 00466BCC 97050008 */   lhu   $a1, 8($t8)
/* 00466BD0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00466BD4 8E2F0000 */  lw    $t7, ($s1)
/* 00466BD8 02002025 */  move  $a0, $s0
/* 00466BDC 8F9981E4 */  lw    $t9, %call16(setbitbb)($gp)
/* 00466BE0 95E50008 */  lhu   $a1, 8($t7)
/* 00466BE4 0320F809 */  jalr  $t9
/* 00466BE8 00000000 */   nop   
/* 00466BEC 8FBC0034 */  lw    $gp, 0x34($sp)
.L00466BF0:
/* 00466BF0 8F9981E4 */  lw    $t9, %call16(setbitbb)($gp)
/* 00466BF4 8E2E0000 */  lw    $t6, ($s1)
/* 00466BF8 8FA40044 */  lw    $a0, 0x44($sp)
/* 00466BFC 0320F809 */  jalr  $t9
/* 00466C00 95C50008 */   lhu   $a1, 8($t6)
/* 00466C04 8E4D0024 */  lw    $t5, 0x24($s2)
/* 00466C08 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00466C0C 02CDC821 */  addu  $t9, $s6, $t5
/* 00466C10 AE590024 */  sw    $t9, 0x24($s2)
/* 00466C14 8EA20038 */  lw    $v0, 0x38($s5)
/* 00466C18 50400018 */  beql  $v0, $zero, .L00466C7C
/* 00466C1C 8E310004 */   lw    $s1, 4($s1)
/* 00466C20 90480009 */  lbu   $t0, 9($v0)
.L00466C24:
/* 00466C24 51000004 */  beql  $t0, $zero, .L00466C38
/* 00466C28 8C420004 */   lw    $v0, 4($v0)
/* 00466C2C A0530008 */  sb    $s3, 8($v0)
/* 00466C30 A0400009 */  sb    $zero, 9($v0)
/* 00466C34 8C420004 */  lw    $v0, 4($v0)
.L00466C38:
/* 00466C38 5440FFFA */  bnezl $v0, .L00466C24
/* 00466C3C 90480009 */   lbu   $t0, 9($v0)
/* 00466C40 1000000E */  b     .L00466C7C
/* 00466C44 8E310004 */   lw    $s1, 4($s1)
/* 00466C48 8FA9005C */  lw    $t1, 0x5c($sp)
.L00466C4C:
/* 00466C4C 8FAA0060 */  lw    $t2, 0x60($sp)
/* 00466C50 A2540021 */  sb    $s4, 0x21($s2)
/* 00466C54 AE490028 */  sw    $t1, 0x28($s2)
/* 00466C58 AE4A002C */  sw    $t2, 0x2c($s2)
/* 00466C5C 8EA20038 */  lw    $v0, 0x38($s5)
/* 00466C60 50400006 */  beql  $v0, $zero, .L00466C7C
/* 00466C64 8E310004 */   lw    $s1, 4($s1)
/* 00466C68 A0400009 */  sb    $zero, 9($v0)
.L00466C6C:
/* 00466C6C 8C420004 */  lw    $v0, 4($v0)
/* 00466C70 5440FFFE */  bnezl $v0, .L00466C6C
/* 00466C74 A0400009 */   sb    $zero, 9($v0)
.L00466C78:
/* 00466C78 8E310004 */  lw    $s1, 4($s1)
.L00466C7C:
/* 00466C7C 1620FF6B */  bnez  $s1, .L00466A2C
/* 00466C80 00000000 */   nop   
/* 00466C84 8FBF003C */  lw    $ra, 0x3c($sp)
.L00466C88:
/* 00466C88 8FB00014 */  lw    $s0, 0x14($sp)
/* 00466C8C 8FB10018 */  lw    $s1, 0x18($sp)
/* 00466C90 8FB2001C */  lw    $s2, 0x1c($sp)
/* 00466C94 8FB30020 */  lw    $s3, 0x20($sp)
/* 00466C98 8FB40024 */  lw    $s4, 0x24($sp)
/* 00466C9C 8FB50028 */  lw    $s5, 0x28($sp)
/* 00466CA0 8FB6002C */  lw    $s6, 0x2c($sp)
/* 00466CA4 8FB70030 */  lw    $s7, 0x30($sp)
/* 00466CA8 8FBE0038 */  lw    $fp, 0x38($sp)
/* 00466CAC 03E00008 */  jr    $ra
/* 00466CB0 27BD0068 */   addiu $sp, $sp, 0x68
    .type addadjacents, @function
    .size addadjacents, .-addadjacents
    .end addadjacents

glabel somepremember
    .ent somepremember
    # 00469280 globalcolor
/* 00466CB4 AFA7000C */  sw    $a3, 0xc($sp)
/* 00466CB8 1080000E */  beqz  $a0, .L00466CF4
/* 00466CBC 00001825 */   move  $v1, $zero
/* 00466CC0 00051080 */  sll   $v0, $a1, 2
/* 00466CC4 8C8E0000 */  lw    $t6, ($a0)
.L00466CC8:
/* 00466CC8 01C27821 */  addu  $t7, $t6, $v0
/* 00466CCC 8DF80040 */  lw    $t8, 0x40($t7)
/* 00466CD0 54D80004 */  bnel  $a2, $t8, .L00466CE4
/* 00466CD4 8C840004 */   lw    $a0, 4($a0)
/* 00466CD8 10000002 */  b     .L00466CE4
/* 00466CDC 24030001 */   li    $v1, 1
/* 00466CE0 8C840004 */  lw    $a0, 4($a0)
.L00466CE4:
/* 00466CE4 14600003 */  bnez  $v1, .L00466CF4
/* 00466CE8 00000000 */   nop   
/* 00466CEC 5480FFF6 */  bnezl $a0, .L00466CC8
/* 00466CF0 8C8E0000 */   lw    $t6, ($a0)
.L00466CF4:
/* 00466CF4 03E00008 */  jr    $ra
/* 00466CF8 00601025 */   move  $v0, $v1
    .type somepremember, @function
    .size somepremember, .-somepremember
    .end somepremember

glabel somepostmember
    .ent somepostmember
    # 00469280 globalcolor
/* 00466CFC 3C1C0FBB */  .cpload $t9
/* 00466D00 279C3594 */  
/* 00466D04 0399E021 */  
/* 00466D08 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 00466D0C AFB5002C */  sw    $s5, 0x2c($sp)
/* 00466D10 AFB40028 */  sw    $s4, 0x28($sp)
/* 00466D14 AFB20020 */  sw    $s2, 0x20($sp)
/* 00466D18 AFB1001C */  sw    $s1, 0x1c($sp)
/* 00466D1C AFB00018 */  sw    $s0, 0x18($sp)
/* 00466D20 00808025 */  move  $s0, $a0
/* 00466D24 00A09025 */  move  $s2, $a1
/* 00466D28 00C0A025 */  move  $s4, $a2
/* 00466D2C 00E0A825 */  move  $s5, $a3
/* 00466D30 AFBF0034 */  sw    $ra, 0x34($sp)
/* 00466D34 AFBC0030 */  sw    $gp, 0x30($sp)
/* 00466D38 AFB30024 */  sw    $s3, 0x24($sp)
/* 00466D3C 10800024 */  beqz  $a0, .L00466DD0
/* 00466D40 00008825 */   move  $s1, $zero
/* 00466D44 00059880 */  sll   $s3, $a1, 2
/* 00466D48 8E030000 */  lw    $v1, ($s0)
.L00466D4C:
/* 00466D4C 2642FFFF */  addiu $v0, $s2, -1
/* 00466D50 0002C0C3 */  sra   $t8, $v0, 3
/* 00466D54 00737021 */  addu  $t6, $v1, $s3
/* 00466D58 8DCF0040 */  lw    $t7, 0x40($t6)
/* 00466D5C 00782021 */  addu  $a0, $v1, $t8
/* 00466D60 568F0017 */  bnel  $s4, $t7, .L00466DC0
/* 00466D64 8E100004 */   lw    $s0, 4($s0)
/* 00466D68 909900D0 */  lbu   $t9, 0xd0($a0)
/* 00466D6C 30450007 */  andi  $a1, $v0, 7
/* 00466D70 24A50018 */  addiu $a1, $a1, 0x18
/* 00466D74 00B94004 */  sllv  $t0, $t9, $a1
/* 00466D78 00084FC2 */  srl   $t1, $t0, 0x1f
/* 00466D7C 55200010 */  bnezl $t1, .L00466DC0
/* 00466D80 8E100004 */   lw    $s0, 4($s0)
/* 00466D84 908A00DA */  lbu   $t2, 0xda($a0)
/* 00466D88 00AA5804 */  sllv  $t3, $t2, $a1
/* 00466D8C 000B67C2 */  srl   $t4, $t3, 0x1f
/* 00466D90 11800008 */  beqz  $t4, .L00466DB4
/* 00466D94 00000000 */   nop   
/* 00466D98 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00466D9C 94640008 */  lhu   $a0, 8($v1)
/* 00466DA0 26A50014 */  addiu $a1, $s5, 0x14
/* 00466DA4 0320F809 */  jalr  $t9
/* 00466DA8 00000000 */   nop   
/* 00466DAC 10400003 */  beqz  $v0, .L00466DBC
/* 00466DB0 8FBC0030 */   lw    $gp, 0x30($sp)
.L00466DB4:
/* 00466DB4 10000002 */  b     .L00466DC0
/* 00466DB8 24110001 */   li    $s1, 1
.L00466DBC:
/* 00466DBC 8E100004 */  lw    $s0, 4($s0)
.L00466DC0:
/* 00466DC0 56200004 */  bnezl $s1, .L00466DD4
/* 00466DC4 8FBF0034 */   lw    $ra, 0x34($sp)
/* 00466DC8 5600FFE0 */  bnezl $s0, .L00466D4C
/* 00466DCC 8E030000 */   lw    $v1, ($s0)
.L00466DD0:
/* 00466DD0 8FBF0034 */  lw    $ra, 0x34($sp)
.L00466DD4:
/* 00466DD4 02201025 */  move  $v0, $s1
/* 00466DD8 8FB1001C */  lw    $s1, 0x1c($sp)
/* 00466DDC 8FB00018 */  lw    $s0, 0x18($sp)
/* 00466DE0 8FB20020 */  lw    $s2, 0x20($sp)
/* 00466DE4 8FB30024 */  lw    $s3, 0x24($sp)
/* 00466DE8 8FB40028 */  lw    $s4, 0x28($sp)
/* 00466DEC 8FB5002C */  lw    $s5, 0x2c($sp)
/* 00466DF0 03E00008 */  jr    $ra
/* 00466DF4 27BD0038 */   addiu $sp, $sp, 0x38
    .type somepostmember, @function
    .size somepostmember, .-somepostmember
    .end somepostmember

glabel allpreppout
    .ent allpreppout
    # 00469280 globalcolor
/* 00466DF8 3C1C0FBB */  .cpload $t9
/* 00466DFC 279C3498 */  
/* 00466E00 0399E021 */  
/* 00466E04 AFA7000C */  sw    $a3, 0xc($sp)
/* 00466E08 10800034 */  beqz  $a0, .L00466EDC
/* 00466E0C 24030001 */   li    $v1, 1
/* 00466E10 00053880 */  sll   $a3, $a1, 2
/* 00466E14 8F888AB0 */  lw     $t0, %got(docreatebb)($gp)
/* 00466E18 8C820000 */  lw    $v0, ($a0)
.L00466E1C:
/* 00466E1C 00477021 */  addu  $t6, $v0, $a3
/* 00466E20 8DCF0040 */  lw    $t7, 0x40($t6)
/* 00466E24 54CF0004 */  bnel  $a2, $t7, .L00466E38
/* 00466E28 8C580020 */   lw    $t8, 0x20($v0)
/* 00466E2C 10000027 */  b     .L00466ECC
/* 00466E30 8C840004 */   lw    $a0, 4($a0)
/* 00466E34 8C580020 */  lw    $t8, 0x20($v0)
.L00466E38:
/* 00466E38 91190000 */  lbu   $t9, ($t0)
/* 00466E3C 93050000 */  lbu   $a1, ($t8)
/* 00466E40 13200012 */  beqz  $t9, .L00466E8C
/* 00466E44 24A5FFE0 */   addiu $a1, $a1, -0x20
/* 00466E48 2CA90080 */  sltiu $t1, $a1, 0x80
/* 00466E4C 11200009 */  beqz  $t1, .L00466E74
/* 00466E50 00000000 */   nop   
/* 00466E54 8F8C8044 */  lw    $t4, %got(D_10010F58)($gp)
/* 00466E58 00055143 */  sra   $t2, $a1, 5
/* 00466E5C 000A5880 */  sll   $t3, $t2, 2
/* 00466E60 258C0F58 */  addiu $t4, %lo(D_10010F58) # addiu $t4, $t4, 0xf58
/* 00466E64 018B6821 */  addu  $t5, $t4, $t3
/* 00466E68 8DAE0000 */  lw    $t6, ($t5)
/* 00466E6C 00AE7804 */  sllv  $t7, $t6, $a1
/* 00466E70 29E90000 */  slti  $t1, $t7, 0
.L00466E74:
/* 00466E74 15200003 */  bnez  $t1, .L00466E84
/* 00466E78 00000000 */   nop   
/* 00466E7C 10000013 */  b     .L00466ECC
/* 00466E80 8C840004 */   lw    $a0, 4($a0)
.L00466E84:
/* 00466E84 10000011 */  b     .L00466ECC
/* 00466E88 00001825 */   move  $v1, $zero
.L00466E8C:
/* 00466E8C 2CB90080 */  sltiu $t9, $a1, 0x80
/* 00466E90 13200009 */  beqz  $t9, .L00466EB8
/* 00466E94 00000000 */   nop   
/* 00466E98 8F8B8044 */  lw    $t3, %got(D_10010F48)($gp)
/* 00466E9C 00055143 */  sra   $t2, $a1, 5
/* 00466EA0 000A6080 */  sll   $t4, $t2, 2
/* 00466EA4 256B0F48 */  addiu $t3, %lo(D_10010F48) # addiu $t3, $t3, 0xf48
/* 00466EA8 016C6821 */  addu  $t5, $t3, $t4
/* 00466EAC 8DAE0000 */  lw    $t6, ($t5)
/* 00466EB0 00AE7804 */  sllv  $t7, $t6, $a1
/* 00466EB4 29F90000 */  slti  $t9, $t7, 0
.L00466EB8:
/* 00466EB8 57200004 */  bnezl $t9, .L00466ECC
/* 00466EBC 00001825 */   move  $v1, $zero
/* 00466EC0 10000002 */  b     .L00466ECC
/* 00466EC4 8C840004 */   lw    $a0, 4($a0)
/* 00466EC8 00001825 */  move  $v1, $zero
.L00466ECC:
/* 00466ECC 10600003 */  beqz  $v1, .L00466EDC
/* 00466ED0 00000000 */   nop   
/* 00466ED4 5480FFD1 */  bnezl $a0, .L00466E1C
/* 00466ED8 8C820000 */   lw    $v0, ($a0)
.L00466EDC:
/* 00466EDC 03E00008 */  jr    $ra
/* 00466EE0 00601025 */   move  $v0, $v1
    .type allpreppout, @function
    .size allpreppout, .-allpreppout
    .end allpreppout

glabel allsucppin
    .ent allsucppin
    # 00469280 globalcolor
/* 00466EE4 3C1C0FBB */  .cpload $t9
/* 00466EE8 279C33AC */  
/* 00466EEC 0399E021 */  
/* 00466EF0 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 00466EF4 AFB5002C */  sw    $s5, 0x2c($sp)
/* 00466EF8 AFB40028 */  sw    $s4, 0x28($sp)
/* 00466EFC AFB20020 */  sw    $s2, 0x20($sp)
/* 00466F00 AFB1001C */  sw    $s1, 0x1c($sp)
/* 00466F04 AFB00018 */  sw    $s0, 0x18($sp)
/* 00466F08 00808025 */  move  $s0, $a0
/* 00466F0C 00A09025 */  move  $s2, $a1
/* 00466F10 00C0A025 */  move  $s4, $a2
/* 00466F14 00E0A825 */  move  $s5, $a3
/* 00466F18 AFBF0034 */  sw    $ra, 0x34($sp)
/* 00466F1C AFBC0030 */  sw    $gp, 0x30($sp)
/* 00466F20 AFB30024 */  sw    $s3, 0x24($sp)
/* 00466F24 1080002E */  beqz  $a0, .L00466FE0
/* 00466F28 24110001 */   li    $s1, 1
/* 00466F2C 00059880 */  sll   $s3, $a1, 2
/* 00466F30 8E030000 */  lw    $v1, ($s0)
.L00466F34:
/* 00466F34 2642FFFF */  addiu $v0, $s2, -1
/* 00466F38 0002C0C3 */  sra   $t8, $v0, 3
/* 00466F3C 00737021 */  addu  $t6, $v1, $s3
/* 00466F40 8DCF0040 */  lw    $t7, 0x40($t6)
/* 00466F44 00782021 */  addu  $a0, $v1, $t8
/* 00466F48 568F0017 */  bnel  $s4, $t7, .L00466FA8
/* 00466F4C 8E030000 */   lw    $v1, ($s0)
/* 00466F50 909900D0 */  lbu   $t9, 0xd0($a0)
/* 00466F54 30450007 */  andi  $a1, $v0, 7
/* 00466F58 24A50018 */  addiu $a1, $a1, 0x18
/* 00466F5C 00B94004 */  sllv  $t0, $t9, $a1
/* 00466F60 00084FC2 */  srl   $t1, $t0, 0x1f
/* 00466F64 55200010 */  bnezl $t1, .L00466FA8
/* 00466F68 8E030000 */   lw    $v1, ($s0)
/* 00466F6C 908A00DA */  lbu   $t2, 0xda($a0)
/* 00466F70 00AA5804 */  sllv  $t3, $t2, $a1
/* 00466F74 000B67C2 */  srl   $t4, $t3, 0x1f
/* 00466F78 11800008 */  beqz  $t4, .L00466F9C
/* 00466F7C 00000000 */   nop   
/* 00466F80 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00466F84 94640008 */  lhu   $a0, 8($v1)
/* 00466F88 26A50014 */  addiu $a1, $s5, 0x14
/* 00466F8C 0320F809 */  jalr  $t9
/* 00466F90 00000000 */   nop   
/* 00466F94 10400003 */  beqz  $v0, .L00466FA4
/* 00466F98 8FBC0030 */   lw    $gp, 0x30($sp)
.L00466F9C:
/* 00466F9C 1000000C */  b     .L00466FD0
/* 00466FA0 8E100004 */   lw    $s0, 4($s0)
.L00466FA4:
/* 00466FA4 8E030000 */  lw    $v1, ($s0)
.L00466FA8:
/* 00466FA8 8C6D0014 */  lw    $t5, 0x14($v1)
/* 00466FAC 8DAE0004 */  lw    $t6, 4($t5)
/* 00466FB0 55C00007 */  bnezl $t6, .L00466FD0
/* 00466FB4 00008825 */   move  $s1, $zero
/* 00466FB8 906F0004 */  lbu   $t7, 4($v1)
/* 00466FBC 55E00004 */  bnezl $t7, .L00466FD0
/* 00466FC0 00008825 */   move  $s1, $zero
/* 00466FC4 10000002 */  b     .L00466FD0
/* 00466FC8 8E100004 */   lw    $s0, 4($s0)
/* 00466FCC 00008825 */  move  $s1, $zero
.L00466FD0:
/* 00466FD0 52200004 */  beql  $s1, $zero, .L00466FE4
/* 00466FD4 8FBF0034 */   lw    $ra, 0x34($sp)
/* 00466FD8 5600FFD6 */  bnezl $s0, .L00466F34
/* 00466FDC 8E030000 */   lw    $v1, ($s0)
.L00466FE0:
/* 00466FE0 8FBF0034 */  lw    $ra, 0x34($sp)
.L00466FE4:
/* 00466FE4 02201025 */  move  $v0, $s1
/* 00466FE8 8FB1001C */  lw    $s1, 0x1c($sp)
/* 00466FEC 8FB00018 */  lw    $s0, 0x18($sp)
/* 00466FF0 8FB20020 */  lw    $s2, 0x20($sp)
/* 00466FF4 8FB30024 */  lw    $s3, 0x24($sp)
/* 00466FF8 8FB40028 */  lw    $s4, 0x28($sp)
/* 00466FFC 8FB5002C */  lw    $s5, 0x2c($sp)
/* 00467000 03E00008 */  jr    $ra
/* 00467004 27BD0038 */   addiu $sp, $sp, 0x38
    .type allsucppin, @function
    .size allsucppin, .-allsucppin
    .end allsucppin

glabel updatelivran
    .ent updatelivran
    # 00467F04 split
    # 00469280 globalcolor
/* 00467008 3C1C0FBB */  .cpload $t9
/* 0046700C 279C3288 */  
/* 00467010 0399E021 */  
/* 00467014 27BDFFC0 */  addiu $sp, $sp, -0x40
/* 00467018 AFBF003C */  sw    $ra, 0x3c($sp)
/* 0046701C AFBC0038 */  sw    $gp, 0x38($sp)
/* 00467020 AFB70034 */  sw    $s7, 0x34($sp)
/* 00467024 AFB60030 */  sw    $s6, 0x30($sp)
/* 00467028 AFB5002C */  sw    $s5, 0x2c($sp)
/* 0046702C AFB40028 */  sw    $s4, 0x28($sp)
/* 00467030 AFB30024 */  sw    $s3, 0x24($sp)
/* 00467034 AFB20020 */  sw    $s2, 0x20($sp)
/* 00467038 AFB1001C */  sw    $s1, 0x1c($sp)
/* 0046703C AFB00018 */  sw    $s0, 0x18($sp)
/* 00467040 808E0020 */  lb    $t6, 0x20($a0)
/* 00467044 2401FFFF */  li    $at, -1
/* 00467048 00809825 */  move  $s3, $a0
/* 0046704C 51C100AD */  beql  $t6, $at, .L00467304
/* 00467050 8FBF003C */   lw    $ra, 0x3c($sp)
/* 00467054 908F0022 */  lbu   $t7, 0x22($a0)
/* 00467058 300200FF */  andi  $v0, $zero, 0xff
/* 0046705C 51E00015 */  beql  $t7, $zero, .L004670B4
/* 00467060 8E700008 */   lw    $s0, 8($s3)
/* 00467064 8C900008 */  lw    $s0, 8($a0)
/* 00467068 14400011 */  bnez  $v0, .L004670B0
/* 0046706C A0800022 */   sb    $zero, 0x22($a0)
/* 00467070 1200000F */  beqz  $s0, .L004670B0
/* 00467074 24160001 */   li    $s6, 1
/* 00467078 92180012 */  lbu   $t8, 0x12($s0)
.L0046707C:
/* 0046707C 57000005 */  bnezl $t8, .L00467094
/* 00467080 A2760022 */   sb    $s6, 0x22($s3)
/* 00467084 92190014 */  lbu   $t9, 0x14($s0)
/* 00467088 53200005 */  beql  $t9, $zero, .L004670A0
/* 0046708C 8E100004 */   lw    $s0, 4($s0)
/* 00467090 A2760022 */  sb    $s6, 0x22($s3)
.L00467094:
/* 00467094 10000002 */  b     .L004670A0
/* 00467098 32C200FF */   andi  $v0, $s6, 0xff
/* 0046709C 8E100004 */  lw    $s0, 4($s0)
.L004670A0:
/* 004670A0 54400004 */  bnezl $v0, .L004670B4
/* 004670A4 8E700008 */   lw    $s0, 8($s3)
/* 004670A8 5600FFF4 */  bnezl $s0, .L0046707C
/* 004670AC 92180012 */   lbu   $t8, 0x12($s0)
.L004670B0:
/* 004670B0 8E700008 */  lw    $s0, 8($s3)
.L004670B4:
/* 004670B4 24160001 */  li    $s6, 1
/* 004670B8 12000013 */  beqz  $s0, .L00467108
/* 004670BC 00000000 */   nop   
/* 004670C0 92080014 */  lbu   $t0, 0x14($s0)
.L004670C4:
/* 004670C4 AE130008 */  sw    $s3, 8($s0)
/* 004670C8 5500000D */  bnezl $t0, .L00467100
/* 004670CC 8E100004 */   lw    $s0, 4($s0)
/* 004670D0 92090015 */  lbu   $t1, 0x15($s0)
/* 004670D4 5520000A */  bnezl $t1, .L00467100
/* 004670D8 8E100004 */   lw    $s0, 4($s0)
/* 004670DC 8F9984E4 */  lw    $t9, %call16(preallmember)($gp)
/* 004670E0 8E0A0000 */  lw    $t2, ($s0)
/* 004670E4 02602825 */  move  $a1, $s3
/* 004670E8 0320F809 */  jalr  $t9
/* 004670EC 8D440014 */   lw    $a0, 0x14($t2)
/* 004670F0 14400002 */  bnez  $v0, .L004670FC
/* 004670F4 8FBC0038 */   lw    $gp, 0x38($sp)
/* 004670F8 A2160015 */  sb    $s6, 0x15($s0)
.L004670FC:
/* 004670FC 8E100004 */  lw    $s0, 4($s0)
.L00467100:
/* 00467100 5600FFF0 */  bnezl $s0, .L004670C4
/* 00467104 92080014 */   lbu   $t0, 0x14($s0)
.L00467108:
/* 00467108 8F9981A0 */  lw    $t9, %call16(bvectempty)($gp)
/* 0046710C 2674000C */  addiu $s4, $s3, 0xc
/* 00467110 02802025 */  move  $a0, $s4
/* 00467114 0320F809 */  jalr  $t9
/* 00467118 00000000 */   nop   
/* 0046711C 1440002E */  bnez  $v0, .L004671D8
/* 00467120 8FBC0038 */   lw    $gp, 0x38($sp)
/* 00467124 8F9589B8 */  lw     $s5, %got(curstaticno)($gp)
/* 00467128 00009025 */  move  $s2, $zero
/* 0046712C 8F978C68 */  lw     $s7, %got(bbtab)($gp)
/* 00467130 8EB50000 */  lw    $s5, ($s5)
/* 00467134 26B50000 */  addiu $s5, $s5, 0
.L00467138:
/* 00467138 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 0046713C 02402025 */  move  $a0, $s2
/* 00467140 02802825 */  move  $a1, $s4
/* 00467144 0320F809 */  jalr  $t9
/* 00467148 00000000 */   nop   
/* 0046714C 1040001F */  beqz  $v0, .L004671CC
/* 00467150 8FBC0038 */   lw    $gp, 0x38($sp)
/* 00467154 8EEB0000 */  lw    $t3, ($s7)
/* 00467158 00126080 */  sll   $t4, $s2, 2
/* 0046715C 8F9984E4 */  lw    $t9, %call16(preallmember)($gp)
/* 00467160 016C6821 */  addu  $t5, $t3, $t4
/* 00467164 8DB10000 */  lw    $s1, ($t5)
/* 00467168 02602825 */  move  $a1, $s3
/* 0046716C 0320F809 */  jalr  $t9
/* 00467170 8E240014 */   lw    $a0, 0x14($s1)
/* 00467174 14400015 */  bnez  $v0, .L004671CC
/* 00467178 8FBC0038 */   lw    $gp, 0x38($sp)
/* 0046717C 8F9984E8 */  lw    $t9, %call16(alloc_livbb)($gp)
/* 00467180 0320F809 */  jalr  $t9
/* 00467184 00000000 */   nop   
/* 00467188 1040005D */  beqz  $v0, .L00467300
/* 0046718C 8FBC0038 */   lw    $gp, 0x38($sp)
/* 00467190 AC510000 */  sw    $s1, ($v0)
/* 00467194 8E6E0008 */  lw    $t6, 8($s3)
/* 00467198 02802025 */  move  $a0, $s4
/* 0046719C 02402825 */  move  $a1, $s2
/* 004671A0 AC4E0004 */  sw    $t6, 4($v0)
/* 004671A4 AE620008 */  sw    $v0, 8($s3)
/* 004671A8 AC530008 */  sw    $s3, 8($v0)
/* 004671AC 8E2F0030 */  lw    $t7, 0x30($s1)
/* 004671B0 AC4F000C */  sw    $t7, 0xc($v0)
/* 004671B4 AE220030 */  sw    $v0, 0x30($s1)
/* 004671B8 A0560015 */  sb    $s6, 0x15($v0)
/* 004671BC 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 004671C0 0320F809 */  jalr  $t9
/* 004671C4 00000000 */   nop   
/* 004671C8 8FBC0038 */  lw    $gp, 0x38($sp)
.L004671CC:
/* 004671CC 26520001 */  addiu $s2, $s2, 1
/* 004671D0 1655FFD9 */  bne   $s2, $s5, .L00467138
/* 004671D4 00000000 */   nop   
.L004671D8:
/* 004671D8 92780022 */  lbu   $t8, 0x22($s3)
/* 004671DC 8F978C68 */  lw     $s7, %got(bbtab)($gp)
/* 004671E0 53000048 */  beql  $t8, $zero, .L00467304
/* 004671E4 8FBF003C */   lw    $ra, 0x3c($sp)
/* 004671E8 8E700008 */  lw    $s0, 8($s3)
/* 004671EC 12000012 */  beqz  $s0, .L00467238
/* 004671F0 00000000 */   nop   
/* 004671F4 92190017 */  lbu   $t9, 0x17($s0)
.L004671F8:
/* 004671F8 5720000D */  bnezl $t9, .L00467230
/* 004671FC 8E100004 */   lw    $s0, 4($s0)
/* 00467200 92080016 */  lbu   $t0, 0x16($s0)
/* 00467204 5500000A */  bnezl $t0, .L00467230
/* 00467208 8E100004 */   lw    $s0, 4($s0)
/* 0046720C 8F9984E0 */  lw    $t9, %call16(allsucmember)($gp)
/* 00467210 8E090000 */  lw    $t1, ($s0)
/* 00467214 02602825 */  move  $a1, $s3
/* 00467218 0320F809 */  jalr  $t9
/* 0046721C 8D240018 */   lw    $a0, 0x18($t1)
/* 00467220 14400002 */  bnez  $v0, .L0046722C
/* 00467224 8FBC0038 */   lw    $gp, 0x38($sp)
/* 00467228 A2160016 */  sb    $s6, 0x16($s0)
.L0046722C:
/* 0046722C 8E100004 */  lw    $s0, 4($s0)
.L00467230:
/* 00467230 5600FFF1 */  bnezl $s0, .L004671F8
/* 00467234 92190017 */   lbu   $t9, 0x17($s0)
.L00467238:
/* 00467238 8F9981A0 */  lw    $t9, %call16(bvectempty)($gp)
/* 0046723C 02802025 */  move  $a0, $s4
/* 00467240 0320F809 */  jalr  $t9
/* 00467244 00000000 */   nop   
/* 00467248 1440002D */  bnez  $v0, .L00467300
/* 0046724C 8FBC0038 */   lw    $gp, 0x38($sp)
/* 00467250 8F9589B8 */  lw     $s5, %got(curstaticno)($gp)
/* 00467254 00009025 */  move  $s2, $zero
/* 00467258 8EB50000 */  lw    $s5, ($s5)
/* 0046725C 26B50000 */  addiu $s5, $s5, 0
.L00467260:
/* 00467260 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00467264 02402025 */  move  $a0, $s2
/* 00467268 02802825 */  move  $a1, $s4
/* 0046726C 0320F809 */  jalr  $t9
/* 00467270 00000000 */   nop   
/* 00467274 1040001F */  beqz  $v0, .L004672F4
/* 00467278 8FBC0038 */   lw    $gp, 0x38($sp)
/* 0046727C 8EEA0000 */  lw    $t2, ($s7)
/* 00467280 00125880 */  sll   $t3, $s2, 2
/* 00467284 8F9984E0 */  lw    $t9, %call16(allsucmember)($gp)
/* 00467288 014B6021 */  addu  $t4, $t2, $t3
/* 0046728C 8D910000 */  lw    $s1, ($t4)
/* 00467290 02602825 */  move  $a1, $s3
/* 00467294 0320F809 */  jalr  $t9
/* 00467298 8E240018 */   lw    $a0, 0x18($s1)
/* 0046729C 14400015 */  bnez  $v0, .L004672F4
/* 004672A0 8FBC0038 */   lw    $gp, 0x38($sp)
/* 004672A4 8F9984E8 */  lw    $t9, %call16(alloc_livbb)($gp)
/* 004672A8 0320F809 */  jalr  $t9
/* 004672AC 00000000 */   nop   
/* 004672B0 10400013 */  beqz  $v0, .L00467300
/* 004672B4 8FBC0038 */   lw    $gp, 0x38($sp)
/* 004672B8 AC510000 */  sw    $s1, ($v0)
/* 004672BC 8E6D0008 */  lw    $t5, 8($s3)
/* 004672C0 02802025 */  move  $a0, $s4
/* 004672C4 02402825 */  move  $a1, $s2
/* 004672C8 AC4D0004 */  sw    $t5, 4($v0)
/* 004672CC AE620008 */  sw    $v0, 8($s3)
/* 004672D0 AC530008 */  sw    $s3, 8($v0)
/* 004672D4 8E2E0030 */  lw    $t6, 0x30($s1)
/* 004672D8 AC4E000C */  sw    $t6, 0xc($v0)
/* 004672DC AE220030 */  sw    $v0, 0x30($s1)
/* 004672E0 A0560016 */  sb    $s6, 0x16($v0)
/* 004672E4 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 004672E8 0320F809 */  jalr  $t9
/* 004672EC 00000000 */   nop   
/* 004672F0 8FBC0038 */  lw    $gp, 0x38($sp)
.L004672F4:
/* 004672F4 26520001 */  addiu $s2, $s2, 1
/* 004672F8 1655FFD9 */  bne   $s2, $s5, .L00467260
/* 004672FC 00000000 */   nop   
.L00467300:
/* 00467300 8FBF003C */  lw    $ra, 0x3c($sp)
.L00467304:
/* 00467304 8FB00018 */  lw    $s0, 0x18($sp)
/* 00467308 8FB1001C */  lw    $s1, 0x1c($sp)
/* 0046730C 8FB20020 */  lw    $s2, 0x20($sp)
/* 00467310 8FB30024 */  lw    $s3, 0x24($sp)
/* 00467314 8FB40028 */  lw    $s4, 0x28($sp)
/* 00467318 8FB5002C */  lw    $s5, 0x2c($sp)
/* 0046731C 8FB60030 */  lw    $s6, 0x30($sp)
/* 00467320 8FB70034 */  lw    $s7, 0x34($sp)
/* 00467324 03E00008 */  jr    $ra
/* 00467328 27BD0040 */   addiu $sp, $sp, 0x40
    .type updatelivran, @function
    .size updatelivran, .-updatelivran
    .end updatelivran

glabel isconstrained
    .ent isconstrained
    # 00467F04 split
    # 00469280 globalcolor
/* 0046732C 3C1C0FBB */  .cpload $t9
/* 00467330 279C2F64 */  
/* 00467334 0399E021 */  
/* 00467338 8F8E8B38 */  lw     $t6, %got(leaf_for_ugen)($gp)
/* 0046733C 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00467340 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00467344 91CE0000 */  lbu   $t6, ($t6)
/* 00467348 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0046734C AFA40020 */  sw    $a0, 0x20($sp)
/* 00467350 15C00003 */  bnez  $t6, .L00467360
/* 00467354 00000000 */   nop   
/* 00467358 10000010 */  b     .L0046739C
/* 0046735C 24030001 */   li    $v1, 1
.L00467360:
/* 00467360 8F9986BC */  lw    $t9, %call16(regclassof)($gp)
/* 00467364 8FAF0020 */  lw    $t7, 0x20($sp)
/* 00467368 0320F809 */  jalr  $t9
/* 0046736C 8DE40000 */   lw    $a0, ($t7)
/* 00467370 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00467374 8FB80020 */  lw    $t8, 0x20($sp)
/* 00467378 00024080 */  sll   $t0, $v0, 2
/* 0046737C 8F898D4C */  lw     $t1, %got(regsinclass)($gp)
/* 00467380 8F190024 */  lw    $t9, 0x24($t8)
/* 00467384 2529FFFC */  addiu $t1, $t1, -4
/* 00467388 01095021 */  addu  $t2, $t0, $t1
/* 0046738C 8D4B0000 */  lw    $t3, ($t2)
/* 00467390 032B182A */  slt   $v1, $t9, $t3
/* 00467394 38630001 */  xori  $v1, $v1, 1
/* 00467398 306300FF */  andi  $v1, $v1, 0xff
.L0046739C:
/* 0046739C 8FBF001C */  lw    $ra, 0x1c($sp)
/* 004673A0 27BD0020 */  addiu $sp, $sp, 0x20
/* 004673A4 00601025 */  move  $v0, $v1
/* 004673A8 03E00008 */  jr    $ra
/* 004673AC 00000000 */   nop   
    .type isconstrained, @function
    .size isconstrained, .-isconstrained
    .end isconstrained

    .type func_004673B0, @function
func_004673B0:
    # 004673B0 func_004673B0
    # 00467514 contiguous
/* 004673B0 3C1C0FBB */  .cpload $t9
/* 004673B4 279C2EE0 */  
/* 004673B8 0399E021 */  
/* 004673BC 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 004673C0 AFBF0024 */  sw    $ra, 0x24($sp)
/* 004673C4 AFBC0020 */  sw    $gp, 0x20($sp)
/* 004673C8 AFB2001C */  sw    $s2, 0x1c($sp)
/* 004673CC AFB10018 */  sw    $s1, 0x18($sp)
/* 004673D0 AFB00014 */  sw    $s0, 0x14($sp)
/* 004673D4 AFA40028 */  sw    $a0, 0x28($sp)
/* 004673D8 8C900014 */  lw    $s0, 0x14($a0)
/* 004673DC 00408825 */  move  $s1, $v0
/* 004673E0 52000023 */  beql  $s0, $zero, .L00467470
/* 004673E4 8FA80028 */   lw    $t0, 0x28($sp)
/* 004673E8 8F928D68 */  lw     $s2, %got(livrantemp)($gp)
.L004673EC:
/* 004673EC 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 004673F0 8E0F0000 */  lw    $t7, ($s0)
/* 004673F4 02402825 */  move  $a1, $s2
/* 004673F8 0320F809 */  jalr  $t9
/* 004673FC 95E40008 */   lhu   $a0, 8($t7)
/* 00467400 10400017 */  beqz  $v0, .L00467460
/* 00467404 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00467408 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 0046740C 8E180000 */  lw    $t8, ($s0)
/* 00467410 8E250000 */  lw    $a1, ($s1)
/* 00467414 97040008 */  lhu   $a0, 8($t8)
/* 00467418 0320F809 */  jalr  $t9
/* 0046741C 24A50014 */   addiu $a1, $a1, 0x14
/* 00467420 1040000F */  beqz  $v0, .L00467460
/* 00467424 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00467428 8E190000 */  lw    $t9, ($s0)
/* 0046742C 02402025 */  move  $a0, $s2
/* 00467430 97250008 */  lhu   $a1, 8($t9)
/* 00467434 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 00467438 0320F809 */  jalr  $t9
/* 0046743C 00000000 */   nop   
/* 00467440 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00467444 8E040000 */  lw    $a0, ($s0)
/* 00467448 02201025 */  move  $v0, $s1
/* 0046744C 8F99802C */  lw    $t9, %got(func_004673B0)($gp)
/* 00467450 273973B0 */  addiu $t9, %lo(func_004673B0) # addiu $t9, $t9, 0x73b0
/* 00467454 0320F809 */  jalr  $t9
/* 00467458 00000000 */   nop   
/* 0046745C 8FBC0020 */  lw    $gp, 0x20($sp)
.L00467460:
/* 00467460 8E100004 */  lw    $s0, 4($s0)
/* 00467464 1600FFE1 */  bnez  $s0, .L004673EC
/* 00467468 00000000 */   nop   
/* 0046746C 8FA80028 */  lw    $t0, 0x28($sp)
.L00467470:
/* 00467470 8F928D68 */  lw     $s2, %got(livrantemp)($gp)
/* 00467474 8D100018 */  lw    $s0, 0x18($t0)
/* 00467478 52000021 */  beql  $s0, $zero, .L00467500
/* 0046747C 8FBF0024 */   lw    $ra, 0x24($sp)
.L00467480:
/* 00467480 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00467484 8E090000 */  lw    $t1, ($s0)
/* 00467488 02402825 */  move  $a1, $s2
/* 0046748C 0320F809 */  jalr  $t9
/* 00467490 95240008 */   lhu   $a0, 8($t1)
/* 00467494 10400016 */  beqz  $v0, .L004674F0
/* 00467498 8FBC0020 */   lw    $gp, 0x20($sp)
/* 0046749C 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 004674A0 8E0A0000 */  lw    $t2, ($s0)
/* 004674A4 8E250000 */  lw    $a1, ($s1)
/* 004674A8 95440008 */  lhu   $a0, 8($t2)
/* 004674AC 0320F809 */  jalr  $t9
/* 004674B0 24A50014 */   addiu $a1, $a1, 0x14
/* 004674B4 1040000E */  beqz  $v0, .L004674F0
/* 004674B8 8FBC0020 */   lw    $gp, 0x20($sp)
/* 004674BC 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 004674C0 8E0B0000 */  lw    $t3, ($s0)
/* 004674C4 02402025 */  move  $a0, $s2
/* 004674C8 0320F809 */  jalr  $t9
/* 004674CC 95650008 */   lhu   $a1, 8($t3)
/* 004674D0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004674D4 8E040000 */  lw    $a0, ($s0)
/* 004674D8 02201025 */  move  $v0, $s1
/* 004674DC 8F99802C */  lw    $t9, %got(func_004673B0)($gp)
/* 004674E0 273973B0 */  addiu $t9, %lo(func_004673B0) # addiu $t9, $t9, 0x73b0
/* 004674E4 0320F809 */  jalr  $t9
/* 004674E8 00000000 */   nop   
/* 004674EC 8FBC0020 */  lw    $gp, 0x20($sp)
.L004674F0:
/* 004674F0 8E100004 */  lw    $s0, 4($s0)
/* 004674F4 1600FFE2 */  bnez  $s0, .L00467480
/* 004674F8 00000000 */   nop   
/* 004674FC 8FBF0024 */  lw    $ra, 0x24($sp)
.L00467500:
/* 00467500 8FB00014 */  lw    $s0, 0x14($sp)
/* 00467504 8FB10018 */  lw    $s1, 0x18($sp)
/* 00467508 8FB2001C */  lw    $s2, 0x1c($sp)
/* 0046750C 03E00008 */  jr    $ra
/* 00467510 27BD0028 */   addiu $sp, $sp, 0x28

glabel contiguous
    .ent contiguous
    # 0046791C whyuncolored
    # 00467C34 needsplit
    # 00467F04 split
    # 00469280 globalcolor
/* 00467514 3C1C0FBB */  .cpload $t9
/* 00467518 279C2D7C */  
/* 0046751C 0399E021 */  
/* 00467520 8F998190 */  lw    $t9, %call16(bvectcard)($gp)
/* 00467524 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 00467528 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0046752C AFA40030 */  sw    $a0, 0x30($sp)
/* 00467530 24850014 */  addiu $a1, $a0, 0x14
/* 00467534 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00467538 00A02025 */  move  $a0, $a1
/* 0046753C 0320F809 */  jalr  $t9
/* 00467540 AFA50024 */   sw    $a1, 0x24($sp)
/* 00467544 28410002 */  slti  $at, $v0, 2
/* 00467548 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0046754C 14200005 */  bnez  $at, .L00467564
/* 00467550 8FA50024 */   lw    $a1, 0x24($sp)
/* 00467554 8FAE0030 */  lw    $t6, 0x30($sp)
/* 00467558 8DCF0008 */  lw    $t7, 8($t6)
/* 0046755C 15E00003 */  bnez  $t7, .L0046756C
/* 00467560 00000000 */   nop   
.L00467564:
/* 00467564 1000001D */  b     .L004675DC
/* 00467568 24030001 */   li    $v1, 1
.L0046756C:
/* 0046756C 8F998194 */  lw    $t9, %call16(bvectcopy)($gp)
/* 00467570 8F848D68 */  lw     $a0, %got(livrantemp)($gp)
/* 00467574 0320F809 */  jalr  $t9
/* 00467578 00000000 */   nop   
/* 0046757C 8FB80030 */  lw    $t8, 0x30($sp)
/* 00467580 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00467584 8F190008 */  lw    $t9, 8($t8)
/* 00467588 8F848D68 */  lw     $a0, %got(livrantemp)($gp)
/* 0046758C 8F280000 */  lw    $t0, ($t9)
/* 00467590 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 00467594 95050008 */  lhu   $a1, 8($t0)
/* 00467598 0320F809 */  jalr  $t9
/* 0046759C 00000000 */   nop   
/* 004675A0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004675A4 8FA90030 */  lw    $t1, 0x30($sp)
/* 004675A8 27A20030 */  addiu $v0, $sp, 0x30
/* 004675AC 8F99802C */  lw    $t9, %got(func_004673B0)($gp)
/* 004675B0 8D2A0008 */  lw    $t2, 8($t1)
/* 004675B4 273973B0 */  addiu $t9, %lo(func_004673B0) # addiu $t9, $t9, 0x73b0
/* 004675B8 0320F809 */  jalr  $t9
/* 004675BC 8D440000 */   lw    $a0, ($t2)
/* 004675C0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004675C4 8F9981A0 */  lw    $t9, %call16(bvectempty)($gp)
/* 004675C8 8F848D68 */  lw     $a0, %got(livrantemp)($gp)
/* 004675CC 0320F809 */  jalr  $t9
/* 004675D0 00000000 */   nop   
/* 004675D4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004675D8 304300FF */  andi  $v1, $v0, 0xff
.L004675DC:
/* 004675DC 8FBF001C */  lw    $ra, 0x1c($sp)
/* 004675E0 27BD0030 */  addiu $sp, $sp, 0x30
/* 004675E4 00601025 */  move  $v0, $v1
/* 004675E8 03E00008 */  jr    $ra
/* 004675EC 00000000 */   nop   
    .type contiguous, @function
    .size contiguous, .-contiguous
    .end contiguous

glabel canmoverlod
    .ent canmoverlod
    # 004676CC compute_save
    # 0046791C whyuncolored
/* 004675F0 3C1C0FBB */  .cpload $t9
/* 004675F4 279C2CA0 */  
/* 004675F8 0399E021 */  
/* 004675FC 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 00467600 AFB30024 */  sw    $s3, 0x24($sp)
/* 00467604 AFB20020 */  sw    $s2, 0x20($sp)
/* 00467608 AFB1001C */  sw    $s1, 0x1c($sp)
/* 0046760C AFB00018 */  sw    $s0, 0x18($sp)
/* 00467610 AFBF002C */  sw    $ra, 0x2c($sp)
/* 00467614 AFBC0028 */  sw    $gp, 0x28($sp)
/* 00467618 00008825 */  move  $s1, $zero
/* 0046761C 24120001 */  li    $s2, 1
/* 00467620 8C900014 */  lw    $s0, 0x14($a0)
/* 00467624 24B30014 */  addiu $s3, $a1, 0x14
.L00467628:
/* 00467628 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 0046762C 8E0E0000 */  lw    $t6, ($s0)
/* 00467630 02602825 */  move  $a1, $s3
/* 00467634 0320F809 */  jalr  $t9
/* 00467638 95C40008 */   lhu   $a0, 8($t6)
/* 0046763C 10400003 */  beqz  $v0, .L0046764C
/* 00467640 8FBC0028 */   lw    $gp, 0x28($sp)
/* 00467644 10000013 */  b     .L00467694
/* 00467648 24110001 */   li    $s1, 1
.L0046764C:
/* 0046764C 8E0F0000 */  lw    $t7, ($s0)
/* 00467650 8DF80020 */  lw    $t8, 0x20($t7)
/* 00467654 93190000 */  lbu   $t9, ($t8)
/* 00467658 2728FFE0 */  addiu $t0, $t9, -0x20
/* 0046765C 2D090080 */  sltiu $t1, $t0, 0x80
/* 00467660 11200009 */  beqz  $t1, .L00467688
/* 00467664 00000000 */   nop   
/* 00467668 8F8C8044 */  lw    $t4, %got(D_10010F68)($gp)
/* 0046766C 00085143 */  sra   $t2, $t0, 5
/* 00467670 000A5880 */  sll   $t3, $t2, 2
/* 00467674 258C0F68 */  addiu $t4, %lo(D_10010F68) # addiu $t4, $t4, 0xf68
/* 00467678 018B6821 */  addu  $t5, $t4, $t3
/* 0046767C 8DAE0000 */  lw    $t6, ($t5)
/* 00467680 010E7804 */  sllv  $t7, $t6, $t0
/* 00467684 29E90000 */  slti  $t1, $t7, 0
.L00467688:
/* 00467688 51200003 */  beql  $t1, $zero, .L00467698
/* 0046768C 8E100004 */   lw    $s0, 4($s0)
/* 00467690 00009025 */  move  $s2, $zero
.L00467694:
/* 00467694 8E100004 */  lw    $s0, 4($s0)
.L00467698:
/* 00467698 1600FFE3 */  bnez  $s0, .L00467628
/* 0046769C 00000000 */   nop   
/* 004676A0 12200002 */  beqz  $s1, .L004676AC
/* 004676A4 02201825 */   move  $v1, $s1
/* 004676A8 02401825 */  move  $v1, $s2
.L004676AC:
/* 004676AC 8FBF002C */  lw    $ra, 0x2c($sp)
/* 004676B0 8FB00018 */  lw    $s0, 0x18($sp)
/* 004676B4 8FB1001C */  lw    $s1, 0x1c($sp)
/* 004676B8 8FB20020 */  lw    $s2, 0x20($sp)
/* 004676BC 8FB30024 */  lw    $s3, 0x24($sp)
/* 004676C0 27BD0030 */  addiu $sp, $sp, 0x30
/* 004676C4 03E00008 */  jr    $ra
/* 004676C8 00601025 */   move  $v0, $v1
    .type canmoverlod, @function
    .size canmoverlod, .-canmoverlod
    .end canmoverlod

glabel compute_save
    .ent compute_save
    # 00467C34 needsplit
    # 00469280 globalcolor
/* 004676CC 3C1C0FBB */  .cpload $t9
/* 004676D0 279C2BC4 */  
/* 004676D4 0399E021 */  
/* 004676D8 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 004676DC AFBF0034 */  sw    $ra, 0x34($sp)
/* 004676E0 AFBC0030 */  sw    $gp, 0x30($sp)
/* 004676E4 AFB2002C */  sw    $s2, 0x2c($sp)
/* 004676E8 AFB10028 */  sw    $s1, 0x28($sp)
/* 004676EC AFB00024 */  sw    $s0, 0x24($sp)
/* 004676F0 F7B60018 */  sdc1  $f22, 0x18($sp)
/* 004676F4 F7B40010 */  sdc1  $f20, 0x10($sp)
/* 004676F8 8C900008 */  lw    $s0, 8($a0)
/* 004676FC 4480B000 */  mtc1  $zero, $f22
/* 00467700 00808825 */  move  $s1, $a0
/* 00467704 12000057 */  beqz  $s0, .L00467864
/* 00467708 AC80001C */   sw    $zero, 0x1c($a0)
/* 0046770C 8F928A20 */  lw     $s2, %got(movcostused)($gp)
/* 00467710 960E0010 */  lhu   $t6, 0x10($s0)
.L00467714:
/* 00467714 8E040000 */  lw    $a0, ($s0)
/* 00467718 3C014F80 */  li    $at, 0x4F800000 # 4294967296.000000
/* 0046771C 448E2000 */  mtc1  $t6, $f4
/* 00467720 05C10004 */  bgez  $t6, .L00467734
/* 00467724 468021A0 */   cvt.s.w $f6, $f4
/* 00467728 44814000 */  mtc1  $at, $f8
/* 0046772C 00000000 */  nop   
/* 00467730 46083180 */  add.s $f6, $f6, $f8
.L00467734:
/* 00467734 920F0012 */  lbu   $t7, 0x12($s0)
/* 00467738 3C014F80 */  li    $at, 0x4F800000 # 4294967296.000000
/* 0046773C 448F5000 */  mtc1  $t7, $f10
/* 00467740 05E10004 */  bgez  $t7, .L00467754
/* 00467744 46805420 */   cvt.s.w $f16, $f10
/* 00467748 44819000 */  mtc1  $at, $f18
/* 0046774C 00000000 */  nop   
/* 00467750 46128400 */  add.s $f16, $f16, $f18
.L00467754:
/* 00467754 8C98002C */  lw    $t8, 0x2c($a0)
/* 00467758 46103100 */  add.s $f4, $f6, $f16
/* 0046775C 3C014F80 */  li    $at, 0x4F800000 # 4294967296.000000
/* 00467760 44984000 */  mtc1  $t8, $f8
/* 00467764 07010004 */  bgez  $t8, .L00467778
/* 00467768 468042A0 */   cvt.s.w $f10, $f8
/* 0046776C 44819000 */  mtc1  $at, $f18
/* 00467770 00000000 */  nop   
/* 00467774 46125280 */  add.s $f10, $f10, $f18
.L00467778:
/* 00467778 92190015 */  lbu   $t9, 0x15($s0)
/* 0046777C 460A2502 */  mul.s $f20, $f4, $f10
/* 00467780 53200017 */  beql  $t9, $zero, .L004677E0
/* 00467784 922B0022 */   lbu   $t3, 0x22($s1)
/* 00467788 90880005 */  lbu   $t0, 5($a0)
/* 0046778C 51000008 */  beql  $t0, $zero, .L004677B0
/* 00467790 8E090000 */   lw    $t1, ($s0)
/* 00467794 8F998534 */  lw    $t9, %call16(canmoverlod)($gp)
/* 00467798 8E050008 */  lw    $a1, 8($s0)
/* 0046779C 0320F809 */  jalr  $t9
/* 004677A0 00000000 */   nop   
/* 004677A4 1440000D */  bnez  $v0, .L004677DC
/* 004677A8 8FBC0030 */   lw    $gp, 0x30($sp)
/* 004677AC 8E090000 */  lw    $t1, ($s0)
.L004677B0:
/* 004677B0 C6460000 */  lwc1  $f6, ($s2)
/* 004677B4 3C014F80 */  li    $at, 0x4F800000 # 4294967296.000000
/* 004677B8 8D2A002C */  lw    $t2, 0x2c($t1)
/* 004677BC 448A8000 */  mtc1  $t2, $f16
/* 004677C0 05410004 */  bgez  $t2, .L004677D4
/* 004677C4 46808220 */   cvt.s.w $f8, $f16
/* 004677C8 44819000 */  mtc1  $at, $f18
/* 004677CC 00000000 */  nop   
/* 004677D0 46124200 */  add.s $f8, $f8, $f18
.L004677D4:
/* 004677D4 46083102 */  mul.s $f4, $f6, $f8
/* 004677D8 4604A501 */  sub.s $f20, $f20, $f4
.L004677DC:
/* 004677DC 922B0022 */  lbu   $t3, 0x22($s1)
.L004677E0:
/* 004677E0 5160001A */  beql  $t3, $zero, .L0046784C
/* 004677E4 8E28001C */   lw    $t0, 0x1c($s1)
/* 004677E8 920C0017 */  lbu   $t4, 0x17($s0)
/* 004677EC 55800017 */  bnezl $t4, .L0046784C
/* 004677F0 8E28001C */   lw    $t0, 0x1c($s1)
/* 004677F4 920D0016 */  lbu   $t5, 0x16($s0)
/* 004677F8 51A00014 */  beql  $t5, $zero, .L0046784C
/* 004677FC 8E28001C */   lw    $t0, 0x1c($s1)
/* 00467800 920E0012 */  lbu   $t6, 0x12($s0)
/* 00467804 55C00005 */  bnezl $t6, .L0046781C
/* 00467808 8E180000 */   lw    $t8, ($s0)
/* 0046780C 920F0015 */  lbu   $t7, 0x15($s0)
/* 00467810 55E0000E */  bnezl $t7, .L0046784C
/* 00467814 8E28001C */   lw    $t0, 0x1c($s1)
/* 00467818 8E180000 */  lw    $t8, ($s0)
.L0046781C:
/* 0046781C C64A0000 */  lwc1  $f10, ($s2)
/* 00467820 3C014F80 */  li    $at, 0x4F800000 # 4294967296.000000
/* 00467824 8F19002C */  lw    $t9, 0x2c($t8)
/* 00467828 44998000 */  mtc1  $t9, $f16
/* 0046782C 07210004 */  bgez  $t9, .L00467840
/* 00467830 468084A0 */   cvt.s.w $f18, $f16
/* 00467834 44813000 */  mtc1  $at, $f6
/* 00467838 00000000 */  nop   
/* 0046783C 46069480 */  add.s $f18, $f18, $f6
.L00467840:
/* 00467840 46125202 */  mul.s $f8, $f10, $f18
/* 00467844 4608A501 */  sub.s $f20, $f20, $f8
/* 00467848 8E28001C */  lw    $t0, 0x1c($s1)
.L0046784C:
/* 0046784C 4614B580 */  add.s $f22, $f22, $f20
/* 00467850 25090001 */  addiu $t1, $t0, 1
/* 00467854 AE29001C */  sw    $t1, 0x1c($s1)
/* 00467858 8E100004 */  lw    $s0, 4($s0)
/* 0046785C 5600FFAD */  bnezl $s0, .L00467714
/* 00467860 960E0010 */   lhu   $t6, 0x10($s0)
.L00467864:
/* 00467864 8F998190 */  lw    $t9, %call16(bvectcard)($gp)
/* 00467868 2624000C */  addiu $a0, $s1, 0xc
/* 0046786C 0320F809 */  jalr  $t9
/* 00467870 00000000 */   nop   
/* 00467874 8E2A001C */  lw    $t2, 0x1c($s1)
/* 00467878 44809000 */  mtc1  $zero, $f18
/* 0046787C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00467880 01425821 */  addu  $t3, $t2, $v0
/* 00467884 29610003 */  slti  $at, $t3, 3
/* 00467888 AE2B001C */  sw    $t3, 0x1c($s1)
/* 0046788C 14200005 */  bnez  $at, .L004678A4
/* 00467890 01601825 */   move  $v1, $t3
/* 00467894 256CFFFE */  addiu $t4, $t3, -2
/* 00467898 000C6883 */  sra   $t5, $t4, 2
/* 0046789C 25A30002 */  addiu $v1, $t5, 2
/* 004678A0 AE23001C */  sw    $v1, 0x1c($s1)
.L004678A4:
/* 004678A4 44832000 */  mtc1  $v1, $f4
/* 004678A8 8E2F0000 */  lw    $t7, ($s1)
/* 004678AC 2401000C */  li    $at, 12
/* 004678B0 46802420 */  cvt.s.w $f16, $f4
/* 004678B4 24080002 */  li    $t0, 2
/* 004678B8 4610B183 */  div.s $f6, $f22, $f16
/* 004678BC E6260030 */  swc1  $f6, 0x30($s1)
/* 004678C0 91F80001 */  lbu   $t8, 1($t7)
/* 004678C4 57010005 */  bnel  $t8, $at, .L004678DC
/* 004678C8 C6280030 */   lwc1  $f8, 0x30($s1)
/* 004678CC C6200030 */  lwc1  $f0, 0x30($s1)
/* 004678D0 46000280 */  add.s $f10, $f0, $f0
/* 004678D4 E62A0030 */  swc1  $f10, 0x30($s1)
/* 004678D8 C6280030 */  lwc1  $f8, 0x30($s1)
.L004678DC:
/* 004678DC 4608903C */  c.lt.s $f18, $f8
/* 004678E0 00000000 */  nop   
/* 004678E4 45020005 */  bc1fl .L004678FC
/* 004678E8 A2280023 */   sb    $t0, 0x23($s1)
/* 004678EC 24190001 */  li    $t9, 1
/* 004678F0 10000002 */  b     .L004678FC
/* 004678F4 A2390023 */   sb    $t9, 0x23($s1)
/* 004678F8 A2280023 */  sb    $t0, 0x23($s1)
.L004678FC:
/* 004678FC 8FBF0034 */  lw    $ra, 0x34($sp)
/* 00467900 D7B40010 */  ldc1  $f20, 0x10($sp)
/* 00467904 D7B60018 */  ldc1  $f22, 0x18($sp)
/* 00467908 8FB00024 */  lw    $s0, 0x24($sp)
/* 0046790C 8FB10028 */  lw    $s1, 0x28($sp)
/* 00467910 8FB2002C */  lw    $s2, 0x2c($sp)
/* 00467914 03E00008 */  jr    $ra
/* 00467918 27BD0038 */   addiu $sp, $sp, 0x38
    .type compute_save, @function
    .size compute_save, .-compute_save
    .end compute_save

glabel whyuncolored
    .ent whyuncolored
    # 00467C34 needsplit
    # 00469280 globalcolor
/* 0046791C 3C1C0FBB */  .cpload $t9
/* 00467920 279C2974 */  
/* 00467924 0399E021 */  
/* 00467928 27BDFFC0 */  addiu $sp, $sp, -0x40
/* 0046792C AFBF003C */  sw    $ra, 0x3c($sp)
/* 00467930 AFBC0038 */  sw    $gp, 0x38($sp)
/* 00467934 AFB60034 */  sw    $s6, 0x34($sp)
/* 00467938 AFB50030 */  sw    $s5, 0x30($sp)
/* 0046793C AFB4002C */  sw    $s4, 0x2c($sp)
/* 00467940 AFB30028 */  sw    $s3, 0x28($sp)
/* 00467944 AFB20024 */  sw    $s2, 0x24($sp)
/* 00467948 AFB10020 */  sw    $s1, 0x20($sp)
/* 0046794C AFB0001C */  sw    $s0, 0x1c($sp)
/* 00467950 F7B40010 */  sdc1  $f20, 0x10($sp)
/* 00467954 908E0023 */  lbu   $t6, 0x23($a0)
/* 00467958 0080B025 */  move  $s6, $a0
/* 0046795C 01C002B4 */  teq   $t6, $zero, 0xa
/* 00467960 8ED00008 */  lw    $s0, 8($s6)
/* 00467964 4480A000 */  mtc1  $zero, $f20
/* 00467968 0000A825 */  move  $s5, $zero
/* 0046796C 1200003D */  beqz  $s0, .L00467A64
/* 00467970 00009025 */   move  $s2, $zero
/* 00467974 8E040000 */  lw    $a0, ($s0)
.L00467978:
/* 00467978 960F0010 */  lhu   $t7, 0x10($s0)
/* 0046797C 92180012 */  lbu   $t8, 0x12($s0)
/* 00467980 8C82002C */  lw    $v0, 0x2c($a0)
/* 00467984 92090015 */  lbu   $t1, 0x15($s0)
/* 00467988 01F8C821 */  addu  $t9, $t7, $t8
/* 0046798C 03220019 */  multu $t9, $v0
/* 00467990 00004012 */  mflo  $t0
/* 00467994 02A8A821 */  addu  $s5, $s5, $t0
/* 00467998 51200018 */  beql  $t1, $zero, .L004679FC
/* 0046799C 92CD0022 */   lbu   $t5, 0x22($s6)
/* 004679A0 908A0005 */  lbu   $t2, 5($a0)
/* 004679A4 5140000B */  beql  $t2, $zero, .L004679D4
/* 004679A8 8E0C0000 */   lw    $t4, ($s0)
/* 004679AC 8F998534 */  lw    $t9, %call16(canmoverlod)($gp)
/* 004679B0 8E050008 */  lw    $a1, 8($s0)
/* 004679B4 0320F809 */  jalr  $t9
/* 004679B8 00000000 */   nop   
/* 004679BC 10400004 */  beqz  $v0, .L004679D0
/* 004679C0 8FBC0038 */   lw    $gp, 0x38($sp)
/* 004679C4 8E0B0000 */  lw    $t3, ($s0)
/* 004679C8 1000000B */  b     .L004679F8
/* 004679CC 8D62002C */   lw    $v0, 0x2c($t3)
.L004679D0:
/* 004679D0 8E0C0000 */  lw    $t4, ($s0)
.L004679D4:
/* 004679D4 3C014F80 */  li    $at, 0x4F800000 # 4294967296.000000
/* 004679D8 8D82002C */  lw    $v0, 0x2c($t4)
/* 004679DC 44822000 */  mtc1  $v0, $f4
/* 004679E0 04410004 */  bgez  $v0, .L004679F4
/* 004679E4 468021A0 */   cvt.s.w $f6, $f4
/* 004679E8 44814000 */  mtc1  $at, $f8
/* 004679EC 00000000 */  nop   
/* 004679F0 46083180 */  add.s $f6, $f6, $f8
.L004679F4:
/* 004679F4 4606A500 */  add.s $f20, $f20, $f6
.L004679F8:
/* 004679F8 92CD0022 */  lbu   $t5, 0x22($s6)
.L004679FC:
/* 004679FC 51A00016 */  beql  $t5, $zero, .L00467A58
/* 00467A00 8E100004 */   lw    $s0, 4($s0)
/* 00467A04 920E0017 */  lbu   $t6, 0x17($s0)
/* 00467A08 55C00013 */  bnezl $t6, .L00467A58
/* 00467A0C 8E100004 */   lw    $s0, 4($s0)
/* 00467A10 920F0016 */  lbu   $t7, 0x16($s0)
/* 00467A14 51E00010 */  beql  $t7, $zero, .L00467A58
/* 00467A18 8E100004 */   lw    $s0, 4($s0)
/* 00467A1C 92180012 */  lbu   $t8, 0x12($s0)
/* 00467A20 57000005 */  bnezl $t8, .L00467A38
/* 00467A24 44825000 */   mtc1  $v0, $f10
/* 00467A28 92190015 */  lbu   $t9, 0x15($s0)
/* 00467A2C 5720000A */  bnezl $t9, .L00467A58
/* 00467A30 8E100004 */   lw    $s0, 4($s0)
/* 00467A34 44825000 */  mtc1  $v0, $f10
.L00467A38:
/* 00467A38 3C014F80 */  li    $at, 0x4F800000 # 4294967296.000000
/* 00467A3C 04410004 */  bgez  $v0, .L00467A50
/* 00467A40 46805420 */   cvt.s.w $f16, $f10
/* 00467A44 44819000 */  mtc1  $at, $f18
/* 00467A48 00000000 */  nop   
/* 00467A4C 46128400 */  add.s $f16, $f16, $f18
.L00467A50:
/* 00467A50 4610A500 */  add.s $f20, $f20, $f16
/* 00467A54 8E100004 */  lw    $s0, 4($s0)
.L00467A58:
/* 00467A58 02429021 */  addu  $s2, $s2, $v0
/* 00467A5C 5600FFC6 */  bnezl $s0, .L00467978
/* 00467A60 8E040000 */   lw    $a0, ($s0)
.L00467A64:
/* 00467A64 8F9489B8 */  lw     $s4, %got(curstaticno)($gp)
/* 00467A68 00008025 */  move  $s0, $zero
/* 00467A6C 26D1000C */  addiu $s1, $s6, 0xc
/* 00467A70 8E940000 */  lw    $s4, ($s4)
/* 00467A74 8F938C68 */  lw     $s3, %got(bbtab)($gp)
/* 00467A78 26940000 */  addiu $s4, $s4, 0
.L00467A7C:
/* 00467A7C 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00467A80 02002025 */  move  $a0, $s0
/* 00467A84 02202825 */  move  $a1, $s1
/* 00467A88 0320F809 */  jalr  $t9
/* 00467A8C 00000000 */   nop   
/* 00467A90 10400007 */  beqz  $v0, .L00467AB0
/* 00467A94 8FBC0038 */   lw    $gp, 0x38($sp)
/* 00467A98 8E680000 */  lw    $t0, ($s3)
/* 00467A9C 00104880 */  sll   $t1, $s0, 2
/* 00467AA0 01095021 */  addu  $t2, $t0, $t1
/* 00467AA4 8D4B0000 */  lw    $t3, ($t2)
/* 00467AA8 8D6C002C */  lw    $t4, 0x2c($t3)
/* 00467AAC 024C9021 */  addu  $s2, $s2, $t4
.L00467AB0:
/* 00467AB0 26100001 */  addiu $s0, $s0, 1
/* 00467AB4 1614FFF1 */  bne   $s0, $s4, .L00467A7C
/* 00467AB8 00000000 */   nop   
/* 00467ABC 56A00007 */  bnezl $s5, .L00467ADC
/* 00467AC0 44922000 */   mtc1  $s2, $f4
/* 00467AC4 8F828C1C */  lw     $v0, %got(num0occurlr)($gp)
/* 00467AC8 8C4D0000 */  lw    $t5, ($v0)
/* 00467ACC 25AE0001 */  addiu $t6, $t5, 1
/* 00467AD0 1000001A */  b     .L00467B3C
/* 00467AD4 AC4E0000 */   sw    $t6, ($v0)
/* 00467AD8 44922000 */  mtc1  $s2, $f4
.L00467ADC:
/* 00467ADC 3C013FC0 */  li    $at, 0x3FC00000 # 1.500000
/* 00467AE0 44813000 */  mtc1  $at, $f6
/* 00467AE4 46802220 */  cvt.s.w $f8, $f4
/* 00467AE8 46064282 */  mul.s $f10, $f8, $f6
/* 00467AEC 4614503C */  c.lt.s $f10, $f20
/* 00467AF0 00000000 */  nop   
/* 00467AF4 45020007 */  bc1fl .L00467B14
/* 00467AF8 44959000 */   mtc1  $s5, $f18
/* 00467AFC 8F828C28 */  lw     $v0, %got(numnotwellformedlr)($gp)
/* 00467B00 8C4F0000 */  lw    $t7, ($v0)
/* 00467B04 25F80001 */  addiu $t8, $t7, 1
/* 00467B08 1000000C */  b     .L00467B3C
/* 00467B0C AC580000 */   sw    $t8, ($v0)
/* 00467B10 44959000 */  mtc1  $s5, $f18
.L00467B14:
/* 00467B14 8F828C24 */  lw     $v0, %got(numsparselr)($gp)
/* 00467B18 46809420 */  cvt.s.w $f16, $f18
/* 00467B1C 4614803E */  c.le.s $f16, $f20
/* 00467B20 00000000 */  nop   
/* 00467B24 45030003 */  bc1tl .L00467B34
/* 00467B28 8C590000 */   lw    $t9, ($v0)
/* 00467B2C 000A000D */  break 0xa
/* 00467B30 8C590000 */  lw    $t9, ($v0)
.L00467B34:
/* 00467B34 27280001 */  addiu $t0, $t9, 1
/* 00467B38 AC480000 */  sw    $t0, ($v0)
.L00467B3C:
/* 00467B3C 8F998530 */  lw    $t9, %call16(contiguous)($gp)
/* 00467B40 02C02025 */  move  $a0, $s6
/* 00467B44 0320F809 */  jalr  $t9
/* 00467B48 00000000 */   nop   
/* 00467B4C 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00467B50 8FBF003C */  lw    $ra, 0x3c($sp)
/* 00467B54 D7B40010 */  ldc1  $f20, 0x10($sp)
/* 00467B58 8F838C04 */  lw     $v1, %got(contiglr)($gp)
/* 00467B5C 8FB0001C */  lw    $s0, 0x1c($sp)
/* 00467B60 8FB10020 */  lw    $s1, 0x20($sp)
/* 00467B64 8C690000 */  lw    $t1, ($v1)
/* 00467B68 8FB20024 */  lw    $s2, 0x24($sp)
/* 00467B6C 8FB30028 */  lw    $s3, 0x28($sp)
/* 00467B70 8FB4002C */  lw    $s4, 0x2c($sp)
/* 00467B74 8FB50030 */  lw    $s5, 0x30($sp)
/* 00467B78 8FB60034 */  lw    $s6, 0x34($sp)
/* 00467B7C 01225021 */  addu  $t2, $t1, $v0
/* 00467B80 27BD0040 */  addiu $sp, $sp, 0x40
/* 00467B84 03E00008 */  jr    $ra
/* 00467B88 AC6A0000 */   sw    $t2, ($v1)
    .type whyuncolored, @function
    .size whyuncolored, .-whyuncolored
    .end whyuncolored

glabel inc_allococ
    .ent inc_allococ
    # 00469280 globalcolor
/* 00467B8C 3C1C0FBB */  .cpload $t9
/* 00467B90 279C2704 */  
/* 00467B94 0399E021 */  
/* 00467B98 8C820008 */  lw    $v0, 8($a0)
/* 00467B9C 1040000A */  beqz  $v0, .L00467BC8
/* 00467BA0 00000000 */   nop   
/* 00467BA4 8F838C2C */  lw     $v1, %got(allococ)($gp)
.L00467BA8:
/* 00467BA8 8C6E0000 */  lw    $t6, ($v1)
/* 00467BAC 944F0010 */  lhu   $t7, 0x10($v0)
/* 00467BB0 90590012 */  lbu   $t9, 0x12($v0)
/* 00467BB4 8C420004 */  lw    $v0, 4($v0)
/* 00467BB8 01CFC021 */  addu  $t8, $t6, $t7
/* 00467BBC 03194021 */  addu  $t0, $t8, $t9
/* 00467BC0 1440FFF9 */  bnez  $v0, .L00467BA8
/* 00467BC4 AC680000 */   sw    $t0, ($v1)
.L00467BC8:
/* 00467BC8 03E00008 */  jr    $ra
/* 00467BCC 00000000 */   nop   
    .type inc_allococ, @function
    .size inc_allococ, .-inc_allococ
    .end inc_allococ

glabel is_cup_affecting_regs
    .ent is_cup_affecting_regs
    # 00467F04 split
    # 00468A14 cupcosts
    # 00469280 globalcolor
/* 00467BD0 8C820020 */  lw    $v0, 0x20($a0)
/* 00467BD4 90450000 */  lbu   $a1, ($v0)
/* 00467BD8 2CAE0040 */  sltiu $t6, $a1, 0x40
/* 00467BDC 11C00009 */  beqz  $t6, .L00467C04
/* 00467BE0 00000000 */   nop   
/* 00467BE4 8F998044 */  lw    $t9, %got(D_10010F78)($gp)
/* 00467BE8 00057943 */  sra   $t7, $a1, 5
/* 00467BEC 000FC080 */  sll   $t8, $t7, 2
/* 00467BF0 27390F78 */  addiu $t9, %lo(D_10010F78) # addiu $t9, $t9, 0xf78
/* 00467BF4 03384021 */  addu  $t0, $t9, $t8
/* 00467BF8 8D090000 */  lw    $t1, ($t0)
/* 00467BFC 00A95004 */  sllv  $t2, $t1, $a1
/* 00467C00 294E0000 */  slti  $t6, $t2, 0
.L00467C04:
/* 00467C04 15C00009 */  bnez  $t6, .L00467C2C
/* 00467C08 01C01825 */   move  $v1, $t6
/* 00467C0C 38A30017 */  xori  $v1, $a1, 0x17
/* 00467C10 2C630001 */  sltiu $v1, $v1, 1
/* 00467C14 10600005 */  beqz  $v1, .L00467C2C
/* 00467C18 00000000 */   nop   
/* 00467C1C 9443001A */  lhu   $v1, 0x1a($v0)
/* 00467C20 30630002 */  andi  $v1, $v1, 2
/* 00467C24 0003182B */  sltu  $v1, $zero, $v1
/* 00467C28 2C630001 */  sltiu $v1, $v1, 1
.L00467C2C:
/* 00467C2C 03E00008 */  jr    $ra
/* 00467C30 00601025 */   move  $v0, $v1
    .type is_cup_affecting_regs, @function
    .size is_cup_affecting_regs, .-is_cup_affecting_regs
    .end is_cup_affecting_regs

glabel needsplit
    .ent needsplit
    # 00469280 globalcolor
/* 00467C34 3C1C0FBB */  .cpload $t9
/* 00467C38 279C265C */  
/* 00467C3C 0399E021 */  
/* 00467C40 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 00467C44 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00467C48 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00467C4C AFB00014 */  sw    $s0, 0x14($sp)
/* 00467C50 908E0021 */  lbu   $t6, 0x21($a0)
/* 00467C54 00808025 */  move  $s0, $a0
/* 00467C58 00A03025 */  move  $a2, $a1
/* 00467C5C 51C00004 */  beql  $t6, $zero, .L00467C70
/* 00467C60 8E020024 */   lw    $v0, 0x24($s0)
/* 00467C64 100000A2 */  b     .L00467EF0
/* 00467C68 00001825 */   move  $v1, $zero
/* 00467C6C 8E020024 */  lw    $v0, 0x24($s0)
.L00467C70:
/* 00467C70 24040001 */  li    $a0, 1
/* 00467C74 2841001E */  slti  $at, $v0, 0x1e
/* 00467C78 5420000E */  bnezl $at, .L00467CB4
/* 00467C7C 8E030008 */   lw    $v1, 8($s0)
/* 00467C80 920F0023 */  lbu   $t7, 0x23($s0)
/* 00467C84 51E00008 */  beql  $t7, $zero, .L00467CA8
/* 00467C88 28410320 */   slti  $at, $v0, 0x320
/* 00467C8C 8F818044 */  lw    $at, %got(RO_1000D660)($gp)
/* 00467C90 C6060030 */  lwc1  $f6, 0x30($s0)
/* 00467C94 C424D660 */  lwc1  $f4, %lo(RO_1000D660)($at)
/* 00467C98 4606203C */  c.lt.s $f4, $f6
/* 00467C9C 00000000 */  nop   
/* 00467CA0 45000024 */  bc1f  .L00467D34
/* 00467CA4 28410320 */   slti  $at, $v0, 0x320
.L00467CA8:
/* 00467CA8 10200022 */  beqz  $at, .L00467D34
/* 00467CAC 00000000 */   nop   
/* 00467CB0 8E030008 */  lw    $v1, 8($s0)
.L00467CB4:
/* 00467CB4 1060001F */  beqz  $v1, .L00467D34
/* 00467CB8 00000000 */   nop   
/* 00467CBC 8F858D84 */  lw     $a1, %got(setregs)($gp)
/* 00467CC0 24A5FFF8 */  addiu $a1, $a1, -8
/* 00467CC4 90780013 */  lbu   $t8, 0x13($v1)
.L00467CC8:
/* 00467CC8 000610C0 */  sll   $v0, $a2, 3
/* 00467CCC 5700000E */  bnezl $t8, .L00467D08
/* 00467CD0 94690010 */   lhu   $t1, 0x10($v1)
/* 00467CD4 8C690000 */  lw    $t1, ($v1)
/* 00467CD8 00A2C821 */  addu  $t9, $a1, $v0
/* 00467CDC 8F280004 */  lw    $t0, 4($t9)
/* 00467CE0 01225021 */  addu  $t2, $t1, $v0
/* 00467CE4 8D4B0030 */  lw    $t3, 0x30($t2)
/* 00467CE8 8D4E002C */  lw    $t6, 0x2c($t2)
/* 00467CEC 8F2D0000 */  lw    $t5, ($t9)
/* 00467CF0 010B6026 */  xor   $t4, $t0, $t3
/* 00467CF4 01AE7826 */  xor   $t7, $t5, $t6
/* 00467CF8 018FC025 */  or    $t8, $t4, $t7
/* 00467CFC 53000009 */  beql  $t8, $zero, .L00467D24
/* 00467D00 8C630004 */   lw    $v1, 4($v1)
/* 00467D04 94690010 */  lhu   $t1, 0x10($v1)
.L00467D08:
/* 00467D08 90680012 */  lbu   $t0, 0x12($v1)
/* 00467D0C 01285821 */  addu  $t3, $t1, $t0
/* 00467D10 51600004 */  beql  $t3, $zero, .L00467D24
/* 00467D14 8C630004 */   lw    $v1, 4($v1)
/* 00467D18 10000002 */  b     .L00467D24
/* 00467D1C 00002025 */   move  $a0, $zero
/* 00467D20 8C630004 */  lw    $v1, 4($v1)
.L00467D24:
/* 00467D24 10600003 */  beqz  $v1, .L00467D34
/* 00467D28 00000000 */   nop   
/* 00467D2C 5480FFE6 */  bnezl $a0, .L00467CC8
/* 00467D30 90780013 */   lbu   $t8, 0x13($v1)
.L00467D34:
/* 00467D34 1080006E */  beqz  $a0, .L00467EF0
/* 00467D38 24030001 */   li    $v1, 1
/* 00467D3C 2419FFFF */  li    $t9, -1
/* 00467D40 A2190020 */  sb    $t9, 0x20($s0)
/* 00467D44 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 00467D48 8F848D64 */  lw     $a0, %got(colorcand)($gp)
/* 00467D4C 8E050004 */  lw    $a1, 4($s0)
/* 00467D50 0320F809 */  jalr  $t9
/* 00467D54 00000000 */   nop   
/* 00467D58 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00467D5C 8E050004 */  lw    $a1, 4($s0)
/* 00467D60 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 00467D64 8F848D60 */  lw     $a0, %got(unconstrain)($gp)
/* 00467D68 0320F809 */  jalr  $t9
/* 00467D6C 00000000 */   nop   
/* 00467D70 8E020038 */  lw    $v0, 0x38($s0)
/* 00467D74 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00467D78 24060004 */  li    $a2, 4
/* 00467D7C 1040000A */  beqz  $v0, .L00467DA8
/* 00467D80 00000000 */   nop   
/* 00467D84 8C430000 */  lw    $v1, ($v0)
.L00467D88:
/* 00467D88 50600005 */  beql  $v1, $zero, .L00467DA0
/* 00467D8C 8C420004 */   lw    $v0, 4($v0)
/* 00467D90 8C6A0024 */  lw    $t2, 0x24($v1)
/* 00467D94 254DFFFF */  addiu $t5, $t2, -1
/* 00467D98 AC6D0024 */  sw    $t5, 0x24($v1)
/* 00467D9C 8C420004 */  lw    $v0, 4($v0)
.L00467DA0:
/* 00467DA0 5440FFF9 */  bnezl $v0, .L00467D88
/* 00467DA4 8C430000 */   lw    $v1, ($v0)
.L00467DA8:
/* 00467DA8 8F8E8A94 */  lw     $t6, %got(dbugno)($gp)
/* 00467DAC 24010006 */  li    $at, 6
/* 00467DB0 8DCE0000 */  lw    $t6, ($t6)
/* 00467DB4 15C10028 */  bne   $t6, $at, .L00467E58
/* 00467DB8 00000000 */   nop   
/* 00467DBC 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 00467DC0 8F848CCC */  lw     $a0, %got(list)($gp)
/* 00467DC4 8E0C0000 */  lw    $t4, ($s0)
/* 00467DC8 2407000A */  li    $a3, 10
/* 00467DCC 8C840000 */  lw    $a0, ($a0)
/* 00467DD0 0320F809 */  jalr  $t9
/* 00467DD4 95850002 */   lhu   $a1, 2($t4)
/* 00467DD8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00467DDC 2405003A */  li    $a1, 58
/* 00467DE0 24060001 */  li    $a2, 1
/* 00467DE4 8F848CCC */  lw     $a0, %got(list)($gp)
/* 00467DE8 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 00467DEC 2407000A */  li    $a3, 10
/* 00467DF0 8C840000 */  lw    $a0, ($a0)
/* 00467DF4 0320F809 */  jalr  $t9
/* 00467DF8 AFA40024 */   sw    $a0, 0x24($sp)
/* 00467DFC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00467E00 8FA40024 */  lw    $a0, 0x24($sp)
/* 00467E04 8E050004 */  lw    $a1, 4($s0)
/* 00467E08 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 00467E0C 24060005 */  li    $a2, 5
/* 00467E10 2407000A */  li    $a3, 10
/* 00467E14 0320F809 */  jalr  $t9
/* 00467E18 00000000 */   nop   
/* 00467E1C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00467E20 24060015 */  li    $a2, 21
/* 00467E24 24070015 */  li    $a3, 21
/* 00467E28 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 00467E2C 8F848CCC */  lw     $a0, %got(list)($gp)
/* 00467E30 8F858044 */  lw    $a1, %got(RO_1000D648)($gp)
/* 00467E34 8C840000 */  lw    $a0, ($a0)
/* 00467E38 0320F809 */  jalr  $t9
/* 00467E3C 24A5D648 */   addiu $a1, %lo(RO_1000D648) # addiu $a1, $a1, -0x29b8
/* 00467E40 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00467E44 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 00467E48 8F848CCC */  lw     $a0, %got(list)($gp)
/* 00467E4C 0320F809 */  jalr  $t9
/* 00467E50 8C840000 */   lw    $a0, ($a0)
/* 00467E54 8FBC0018 */  lw    $gp, 0x18($sp)
.L00467E58:
/* 00467E58 8F8F8ADC */  lw     $t7, %got(dowhyuncolor)($gp)
/* 00467E5C 91EF0000 */  lbu   $t7, ($t7)
/* 00467E60 11E00021 */  beqz  $t7, .L00467EE8
/* 00467E64 00000000 */   nop   
/* 00467E68 92020023 */  lbu   $v0, 0x23($s0)
/* 00467E6C 54400008 */  bnezl $v0, .L00467E90
/* 00467E70 24010001 */   li    $at, 1
/* 00467E74 8F998538 */  lw    $t9, %call16(compute_save)($gp)
/* 00467E78 02002025 */  move  $a0, $s0
/* 00467E7C 0320F809 */  jalr  $t9
/* 00467E80 00000000 */   nop   
/* 00467E84 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00467E88 92020023 */  lbu   $v0, 0x23($s0)
/* 00467E8C 24010001 */  li    $at, 1
.L00467E90:
/* 00467E90 14410010 */  bne   $v0, $at, .L00467ED4
/* 00467E94 00000000 */   nop   
/* 00467E98 8F828C18 */  lw     $v0, %got(numcantcoloredlr)($gp)
/* 00467E9C 02002025 */  move  $a0, $s0
/* 00467EA0 8C580000 */  lw    $t8, ($v0)
/* 00467EA4 27090001 */  addiu $t1, $t8, 1
/* 00467EA8 AC490000 */  sw    $t1, ($v0)
/* 00467EAC 8F998530 */  lw    $t9, %call16(contiguous)($gp)
/* 00467EB0 0320F809 */  jalr  $t9
/* 00467EB4 00000000 */   nop   
/* 00467EB8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00467EBC 8F838C04 */  lw     $v1, %got(contiglr)($gp)
/* 00467EC0 8C680000 */  lw    $t0, ($v1)
/* 00467EC4 01025821 */  addu  $t3, $t0, $v0
/* 00467EC8 AC6B0000 */  sw    $t3, ($v1)
/* 00467ECC 10000008 */  b     .L00467EF0
/* 00467ED0 00001825 */   move  $v1, $zero
.L00467ED4:
/* 00467ED4 8F99853C */  lw    $t9, %call16(whyuncolored)($gp)
/* 00467ED8 02002025 */  move  $a0, $s0
/* 00467EDC 0320F809 */  jalr  $t9
/* 00467EE0 00000000 */   nop   
/* 00467EE4 8FBC0018 */  lw    $gp, 0x18($sp)
.L00467EE8:
/* 00467EE8 10000001 */  b     .L00467EF0
/* 00467EEC 00001825 */   move  $v1, $zero
.L00467EF0:
/* 00467EF0 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00467EF4 8FB00014 */  lw    $s0, 0x14($sp)
/* 00467EF8 27BD0038 */  addiu $sp, $sp, 0x38
/* 00467EFC 03E00008 */  jr    $ra
/* 00467F00 00601025 */   move  $v0, $v1
    .type needsplit, @function
    .size needsplit, .-needsplit
    .end needsplit

glabel split
    .ent split
    # 00469280 globalcolor
/* 00467F04 3C1C0FBB */  .cpload $t9
/* 00467F08 279C238C */  
/* 00467F0C 0399E021 */  
/* 00467F10 27BDFF88 */  addiu $sp, $sp, -0x78
/* 00467F14 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 00467F18 AFB30020 */  sw    $s3, 0x20($sp)
/* 00467F1C AFB2001C */  sw    $s2, 0x1c($sp)
/* 00467F20 00A09025 */  move  $s2, $a1
/* 00467F24 00809825 */  move  $s3, $a0
/* 00467F28 AFBF002C */  sw    $ra, 0x2c($sp)
/* 00467F2C AFB40024 */  sw    $s4, 0x24($sp)
/* 00467F30 00C0A025 */  move  $s4, $a2
/* 00467F34 AFBC0028 */  sw    $gp, 0x28($sp)
/* 00467F38 AFB10018 */  sw    $s1, 0x18($sp)
/* 00467F3C AFB00014 */  sw    $s0, 0x14($sp)
/* 00467F40 AFA70084 */  sw    $a3, 0x84($sp)
/* 00467F44 2404003C */  li    $a0, 60
/* 00467F48 0320F809 */  jalr  $t9
/* 00467F4C 8F858954 */   lw     $a1, %got(perm_heap)($gp)
/* 00467F50 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00467F54 14400005 */  bnez  $v0, .L00467F6C
/* 00467F58 AE420000 */   sw    $v0, ($s2)
/* 00467F5C 8F818B20 */  lw     $at, %got(outofmem)($gp)
/* 00467F60 240E0001 */  li    $t6, 1
/* 00467F64 100002A3 */  b     .L004689F4
/* 00467F68 A02E0000 */   sb    $t6, ($at)
.L00467F6C:
/* 00467F6C 8E6F0000 */  lw    $t7, ($s3)
/* 00467F70 8E590000 */  lw    $t9, ($s2)
/* 00467F74 8DF80034 */  lw    $t8, 0x34($t7)
/* 00467F78 AF380034 */  sw    $t8, 0x34($t9)
/* 00467F7C 8E480000 */  lw    $t0, ($s2)
/* 00467F80 8E690000 */  lw    $t1, ($s3)
/* 00467F84 AD280034 */  sw    $t0, 0x34($t1)
/* 00467F88 8E6A0000 */  lw    $t2, ($s3)
/* 00467F8C 8E430000 */  lw    $v1, ($s2)
/* 00467F90 8F998664 */  lw    $t9, %call16(newbit)($gp)
/* 00467F94 8D4B0000 */  lw    $t3, ($t2)
/* 00467F98 AC6B0000 */  sw    $t3, ($v1)
/* 00467F9C 8E6C0000 */  lw    $t4, ($s3)
/* 00467FA0 918D0022 */  lbu   $t5, 0x22($t4)
/* 00467FA4 A0600020 */  sb    $zero, 0x20($v1)
/* 00467FA8 A06D0022 */  sb    $t5, 0x22($v1)
/* 00467FAC 8E6E0000 */  lw    $t6, ($s3)
/* 00467FB0 91CF0021 */  lbu   $t7, 0x21($t6)
/* 00467FB4 A06F0021 */  sb    $t7, 0x21($v1)
/* 00467FB8 8E780000 */  lw    $t8, ($s3)
/* 00467FBC 8E450000 */  lw    $a1, ($s2)
/* 00467FC0 8F040000 */  lw    $a0, ($t8)
/* 00467FC4 0320F809 */  jalr  $t9
/* 00467FC8 AFA3004C */   sw    $v1, 0x4c($sp)
/* 00467FCC 8FA3004C */  lw    $v1, 0x4c($sp)
/* 00467FD0 240DFFFF */  li    $t5, -1
/* 00467FD4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00467FD8 AC620004 */  sw    $v0, 4($v1)
/* 00467FDC 8E790000 */  lw    $t9, ($s3)
/* 00467FE0 00002025 */  move  $a0, $zero
/* 00467FE4 8F290014 */  lw    $t1, 0x14($t9)
/* 00467FE8 AC690014 */  sw    $t1, 0x14($v1)
/* 00467FEC 8F280018 */  lw    $t0, 0x18($t9)
/* 00467FF0 AC680018 */  sw    $t0, 0x18($v1)
/* 00467FF4 8E6A0000 */  lw    $t2, ($s3)
/* 00467FF8 8D4C000C */  lw    $t4, 0xc($t2)
/* 00467FFC AC6C000C */  sw    $t4, 0xc($v1)
/* 00468000 8D4B0010 */  lw    $t3, 0x10($t2)
/* 00468004 AC6D001C */  sw    $t5, 0x1c($v1)
/* 00468008 AC6B0010 */  sw    $t3, 0x10($v1)
/* 0046800C 8E6E0000 */  lw    $t6, ($s3)
/* 00468010 8DCF0008 */  lw    $t7, 8($t6)
/* 00468014 AC6F0008 */  sw    $t7, 8($v1)
/* 00468018 8E780000 */  lw    $t8, ($s3)
/* 0046801C 8F190028 */  lw    $t9, 0x28($t8)
/* 00468020 AC790028 */  sw    $t9, 0x28($v1)
/* 00468024 8F08002C */  lw    $t0, 0x2c($t8)
/* 00468028 A0600023 */  sb    $zero, 0x23($v1)
/* 0046802C AC68002C */  sw    $t0, 0x2c($v1)
/* 00468030 8E690000 */  lw    $t1, ($s3)
/* 00468034 A1200023 */  sb    $zero, 0x23($t1)
/* 00468038 8E470000 */  lw    $a3, ($s2)
/* 0046803C 8CE60008 */  lw    $a2, 8($a3)
/* 00468040 10C0001D */  beqz  $a2, .L004680B8
/* 00468044 00C08025 */   move  $s0, $a2
/* 00468048 8F858D84 */  lw     $a1, %got(setregs)($gp)
/* 0046804C 24A5FFF8 */  addiu $a1, $a1, -8
/* 00468050 920A0014 */  lbu   $t2, 0x14($s0)
.L00468054:
/* 00468054 001410C0 */  sll   $v0, $s4, 3
/* 00468058 02001825 */  move  $v1, $s0
/* 0046805C 11400011 */  beqz  $t2, .L004680A4
/* 00468060 00A25821 */   addu  $t3, $a1, $v0
/* 00468064 8E0D0000 */  lw    $t5, ($s0)
/* 00468068 8D6C0004 */  lw    $t4, 4($t3)
/* 0046806C 8D780000 */  lw    $t8, ($t3)
/* 00468070 01A27021 */  addu  $t6, $t5, $v0
/* 00468074 8DCF0030 */  lw    $t7, 0x30($t6)
/* 00468078 8DC8002C */  lw    $t0, 0x2c($t6)
/* 0046807C 018FC826 */  xor   $t9, $t4, $t7
/* 00468080 03084826 */  xor   $t1, $t8, $t0
/* 00468084 03295025 */  or    $t2, $t9, $t1
/* 00468088 15400004 */  bnez  $t2, .L0046809C
/* 0046808C 00000000 */   nop   
/* 00468090 920D0013 */  lbu   $t5, 0x13($s0)
/* 00468094 51A00004 */  beql  $t5, $zero, .L004680A8
/* 00468098 8C700004 */   lw    $s0, 4($v1)
.L0046809C:
/* 0046809C 10000002 */  b     .L004680A8
/* 004680A0 24040001 */   li    $a0, 1
.L004680A4:
/* 004680A4 8C700004 */  lw    $s0, 4($v1)
.L004680A8:
/* 004680A8 14800003 */  bnez  $a0, .L004680B8
/* 004680AC 00000000 */   nop   
/* 004680B0 5600FFE8 */  bnezl $s0, .L00468054
/* 004680B4 920A0014 */   lbu   $t2, 0x14($s0)
.L004680B8:
/* 004680B8 1480003B */  bnez  $a0, .L004681A8
/* 004680BC 00000000 */   nop   
/* 004680C0 14800022 */  bnez  $a0, .L0046814C
/* 004680C4 00C08025 */   move  $s0, $a2
/* 004680C8 10C00020 */  beqz  $a2, .L0046814C
/* 004680CC 00000000 */   nop   
/* 004680D0 8F8C8D84 */  lw     $t4, %got(setregs)($gp)
/* 004680D4 001410C0 */  sll   $v0, $s4, 3
/* 004680D8 258CFFF8 */  addiu $t4, $t4, -8
/* 004680DC 004C2821 */  addu  $a1, $v0, $t4
/* 004680E0 8E0B0000 */  lw    $t3, ($s0)
.L004680E4:
/* 004680E4 8CAF0004 */  lw    $t7, 4($a1)
/* 004680E8 8CB90000 */  lw    $t9, ($a1)
/* 004680EC 01627021 */  addu  $t6, $t3, $v0
/* 004680F0 8DD80030 */  lw    $t8, 0x30($t6)
/* 004680F4 8DC9002C */  lw    $t1, 0x2c($t6)
/* 004680F8 02001825 */  move  $v1, $s0
/* 004680FC 01F84026 */  xor   $t0, $t7, $t8
/* 00468100 03295026 */  xor   $t2, $t9, $t1
/* 00468104 010A6825 */  or    $t5, $t0, $t2
/* 00468108 55A00005 */  bnezl $t5, .L00468120
/* 0046810C 960B0010 */   lhu   $t3, 0x10($s0)
/* 00468110 920C0013 */  lbu   $t4, 0x13($s0)
/* 00468114 51800009 */  beql  $t4, $zero, .L0046813C
/* 00468118 8C700004 */   lw    $s0, 4($v1)
/* 0046811C 960B0010 */  lhu   $t3, 0x10($s0)
.L00468120:
/* 00468120 920F0012 */  lbu   $t7, 0x12($s0)
/* 00468124 016FC021 */  addu  $t8, $t3, $t7
/* 00468128 53000004 */  beql  $t8, $zero, .L0046813C
/* 0046812C 8C700004 */   lw    $s0, 4($v1)
/* 00468130 10000002 */  b     .L0046813C
/* 00468134 24040001 */   li    $a0, 1
/* 00468138 8C700004 */  lw    $s0, 4($v1)
.L0046813C:
/* 0046813C 14800003 */  bnez  $a0, .L0046814C
/* 00468140 00000000 */   nop   
/* 00468144 5600FFE7 */  bnezl $s0, .L004680E4
/* 00468148 8E0B0000 */   lw    $t3, ($s0)
.L0046814C:
/* 0046814C 14800016 */  bnez  $a0, .L004681A8
/* 00468150 00000000 */   nop   
/* 00468154 8E6E0000 */  lw    $t6, ($s3)
/* 00468158 8F898ADC */  lw     $t1, %got(dowhyuncolor)($gp)
/* 0046815C 8DD90038 */  lw    $t9, 0x38($t6)
/* 00468160 ACF90038 */  sw    $t9, 0x38($a3)
/* 00468164 91290000 */  lbu   $t1, ($t1)
/* 00468168 512000B6 */  beql  $t1, $zero, .L00468444
/* 0046816C 93A80087 */   lbu   $t0, 0x87($sp)
/* 00468170 8F828C1C */  lw     $v0, %got(num0occurlr)($gp)
/* 00468174 8C480000 */  lw    $t0, ($v0)
/* 00468178 250A0001 */  addiu $t2, $t0, 1
/* 0046817C AC4A0000 */  sw    $t2, ($v0)
/* 00468180 8F998530 */  lw    $t9, %call16(contiguous)($gp)
/* 00468184 8E440000 */  lw    $a0, ($s2)
/* 00468188 0320F809 */  jalr  $t9
/* 0046818C 00000000 */   nop   
/* 00468190 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00468194 8F838C04 */  lw     $v1, %got(contiglr)($gp)
/* 00468198 8C6D0000 */  lw    $t5, ($v1)
/* 0046819C 01A26021 */  addu  $t4, $t5, $v0
/* 004681A0 100000A7 */  b     .L00468440
/* 004681A4 AC6C0000 */   sw    $t4, ($v1)
.L004681A8:
/* 004681A8 8F998500 */  lw    $t9, %call16(dellivbb)($gp)
/* 004681AC 24E40008 */  addiu $a0, $a3, 8
/* 004681B0 02002825 */  move  $a1, $s0
/* 004681B4 0320F809 */  jalr  $t9
/* 004681B8 00000000 */   nop   
/* 004681BC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004681C0 8E440000 */  lw    $a0, ($s2)
/* 004681C4 8E0B0000 */  lw    $t3, ($s0)
/* 004681C8 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 004681CC 24840014 */  addiu $a0, $a0, 0x14
/* 004681D0 95650008 */  lhu   $a1, 8($t3)
/* 004681D4 0320F809 */  jalr  $t9
/* 004681D8 00000000 */   nop   
/* 004681DC AE000004 */  sw    $zero, 4($s0)
/* 004681E0 8E6F0000 */  lw    $t7, ($s3)
/* 004681E4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004681E8 ADF00008 */  sw    $s0, 8($t7)
/* 004681EC 8F9981E0 */  lw    $t9, %call16(formbvlivran)($gp)
/* 004681F0 AFB0006C */  sw    $s0, 0x6c($sp)
/* 004681F4 8E640000 */  lw    $a0, ($s3)
/* 004681F8 0320F809 */  jalr  $t9
/* 004681FC 2484000C */   addiu $a0, $a0, 0xc
/* 00468200 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00468204 8E640000 */  lw    $a0, ($s3)
/* 00468208 8F9981E0 */  lw    $t9, %call16(formbvlivran)($gp)
/* 0046820C 24840014 */  addiu $a0, $a0, 0x14
/* 00468210 0320F809 */  jalr  $t9
/* 00468214 00000000 */   nop   
/* 00468218 8E630000 */  lw    $v1, ($s3)
/* 0046821C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00468220 240EFFFF */  li    $t6, -1
/* 00468224 8C780018 */  lw    $t8, 0x18($v1)
/* 00468228 530001F3 */  beql  $t8, $zero, .L004689F8
/* 0046822C 8FBF002C */   lw    $ra, 0x2c($sp)
/* 00468230 AC6E001C */  sw    $t6, 0x1c($v1)
/* 00468234 8E190000 */  lw    $t9, ($s0)
/* 00468238 8E640000 */  lw    $a0, ($s3)
/* 0046823C 97250008 */  lhu   $a1, 8($t9)
/* 00468240 8F9981E4 */  lw    $t9, %call16(setbitbb)($gp)
/* 00468244 24840014 */  addiu $a0, $a0, 0x14
/* 00468248 0320F809 */  jalr  $t9
/* 0046824C 00000000 */   nop   
/* 00468250 8E690000 */  lw    $t1, ($s3)
/* 00468254 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00468258 02803825 */  move  $a3, $s4
/* 0046825C AD20002C */  sw    $zero, 0x2c($t1)
/* 00468260 AD200028 */  sw    $zero, 0x28($t1)
/* 00468264 8F998508 */  lw    $t9, %call16(updateforbidden)($gp)
/* 00468268 8E660000 */  lw    $a2, ($s3)
/* 0046826C 92050013 */  lbu   $a1, 0x13($s0)
/* 00468270 0320F809 */  jalr  $t9
/* 00468274 8E040000 */   lw    $a0, ($s0)
/* 00468278 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0046827C 8E640000 */  lw    $a0, ($s3)
/* 00468280 02802825 */  move  $a1, $s4
/* 00468284 8F998504 */  lw    $t9, %call16(updatecolorsleft)($gp)
/* 00468288 0320F809 */  jalr  $t9
/* 0046828C 00000000 */   nop   
/* 00468290 8E680000 */  lw    $t0, ($s3)
/* 00468294 8E4D0000 */  lw    $t5, ($s2)
/* 00468298 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0046829C 8D0A0038 */  lw    $t2, 0x38($t0)
/* 004682A0 ADAA0038 */  sw    $t2, 0x38($t5)
/* 004682A4 8E6C0000 */  lw    $t4, ($s3)
/* 004682A8 8E4F0000 */  lw    $t7, ($s2)
/* 004682AC 8D8B0024 */  lw    $t3, 0x24($t4)
/* 004682B0 ADEB0024 */  sw    $t3, 0x24($t7)
/* 004682B4 8E780000 */  lw    $t8, ($s3)
/* 004682B8 AF000038 */  sw    $zero, 0x38($t8)
/* 004682BC 8E190000 */  lw    $t9, ($s0)
/* 004682C0 8E4E0000 */  lw    $t6, ($s2)
/* 004682C4 97250008 */  lhu   $a1, 8($t9)
/* 004682C8 8F99850C */  lw    $t9, %call16(findsharedintf)($gp)
/* 004682CC 8DC40038 */  lw    $a0, 0x38($t6)
/* 004682D0 0320F809 */  jalr  $t9
/* 004682D4 00000000 */   nop   
/* 004682D8 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004682DC 8E690000 */  lw    $t1, ($s3)
/* 004682E0 00001825 */  move  $v1, $zero
/* 004682E4 8F818C74 */  lw     $at, %got(formingmax)($gp)
/* 004682E8 8F868C6C */  lw     $a2, %got(formingtab)($gp)
/* 004682EC AD220024 */  sw    $v0, 0x24($t1)
/* 004682F0 AC200000 */  sw    $zero, ($at)
/* 004682F4 8E080000 */  lw    $t0, ($s0)
/* 004682F8 8CCA0000 */  lw    $t2, ($a2)
/* 004682FC 8F918C70 */  lw     $s1, %got(forminginx)($gp)
/* 00468300 AD480000 */  sw    $t0, ($t2)
/* 00468304 AE200000 */  sw    $zero, ($s1)
.L00468308:
/* 00468308 8F868C6C */  lw     $a2, %got(formingtab)($gp)
/* 0046830C 8F9984D8 */  lw    $t9, %call16(gettolivbb)($gp)
/* 00468310 8E6D0000 */  lw    $t5, ($s3)
/* 00468314 8CCC0000 */  lw    $t4, ($a2)
/* 00468318 00035880 */  sll   $t3, $v1, 2
/* 0046831C 8DA40000 */  lw    $a0, ($t5)
/* 00468320 018B7821 */  addu  $t7, $t4, $t3
/* 00468324 0320F809 */  jalr  $t9
/* 00468328 8DE50000 */   lw    $a1, ($t7)
/* 0046832C 90580017 */  lbu   $t8, 0x17($v0)
/* 00468330 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00468334 93AE0087 */  lbu   $t6, 0x87($sp)
/* 00468338 1700001E */  bnez  $t8, .L004683B4
/* 0046833C 8F908C6C */   lw     $s0, %got(formingtab)($gp)
/* 00468340 51C0000C */  beql  $t6, $zero, .L00468374
/* 00468344 8E2C0000 */   lw    $t4, ($s1)
/* 00468348 8E290000 */  lw    $t1, ($s1)
/* 0046834C 8E190000 */  lw    $t9, ($s0)
/* 00468350 00094080 */  sll   $t0, $t1, 2
/* 00468354 03285021 */  addu  $t2, $t9, $t0
/* 00468358 8F998544 */  lw    $t9, %call16(is_cup_affecting_regs)($gp)
/* 0046835C 8D440000 */  lw    $a0, ($t2)
/* 00468360 0320F809 */  jalr  $t9
/* 00468364 00000000 */   nop   
/* 00468368 14400012 */  bnez  $v0, .L004683B4
/* 0046836C 8FBC0028 */   lw    $gp, 0x28($sp)
/* 00468370 8E2C0000 */  lw    $t4, ($s1)
.L00468374:
/* 00468374 8E0D0000 */  lw    $t5, ($s0)
/* 00468378 24010031 */  li    $at, 49
/* 0046837C 000C5880 */  sll   $t3, $t4, 2
/* 00468380 01AB7821 */  addu  $t7, $t5, $t3
/* 00468384 8DF80000 */  lw    $t8, ($t7)
/* 00468388 27A6006C */  addiu $a2, $sp, 0x6c
/* 0046838C 8F0E0020 */  lw    $t6, 0x20($t8)
/* 00468390 91C90000 */  lbu   $t1, ($t6)
/* 00468394 51210008 */  beql  $t1, $at, .L004683B8
/* 00468398 8E390000 */   lw    $t9, ($s1)
/* 0046839C 8F998514 */  lw    $t9, %call16(addadjacents)($gp)
/* 004683A0 8E440000 */  lw    $a0, ($s2)
/* 004683A4 8E650000 */  lw    $a1, ($s3)
/* 004683A8 0320F809 */  jalr  $t9
/* 004683AC 02803825 */   move  $a3, $s4
/* 004683B0 8FBC0028 */  lw    $gp, 0x28($sp)
.L004683B4:
/* 004683B4 8E390000 */  lw    $t9, ($s1)
.L004683B8:
/* 004683B8 8F8A8C74 */  lw     $t2, %got(formingmax)($gp)
/* 004683BC 27280001 */  addiu $t0, $t9, 1
/* 004683C0 AE280000 */  sw    $t0, ($s1)
/* 004683C4 8D4A0000 */  lw    $t2, ($t2)
/* 004683C8 01001825 */  move  $v1, $t0
/* 004683CC 0148082B */  sltu  $at, $t2, $t0
/* 004683D0 1020FFCD */  beqz  $at, .L00468308
/* 004683D4 00000000 */   nop   
/* 004683D8 8F828BFC */  lw     $v0, %got(numsplitlu)($gp)
/* 004683DC 8C4C0000 */  lw    $t4, ($v0)
/* 004683E0 01886821 */  addu  $t5, $t4, $t0
/* 004683E4 AC4D0000 */  sw    $t5, ($v0)
/* 004683E8 8E470000 */  lw    $a3, ($s2)
/* 004683EC 8CEB0008 */  lw    $t3, 8($a3)
/* 004683F0 15600068 */  bnez  $t3, .L00468594
/* 004683F4 00000000 */   nop   
/* 004683F8 8F998190 */  lw    $t9, %call16(bvectcard)($gp)
/* 004683FC 24E4000C */  addiu $a0, $a3, 0xc
/* 00468400 0320F809 */  jalr  $t9
/* 00468404 00000000 */   nop   
/* 00468408 14400062 */  bnez  $v0, .L00468594
/* 0046840C 8FBC0028 */   lw    $gp, 0x28($sp)
/* 00468410 8F8F8ADC */  lw     $t7, %got(dowhyuncolor)($gp)
/* 00468414 91EF0000 */  lbu   $t7, ($t7)
/* 00468418 51E0000A */  beql  $t7, $zero, .L00468444
/* 0046841C 93A80087 */   lbu   $t0, 0x87($sp)
/* 00468420 8F828C20 */  lw     $v0, %got(numcalloverheadlr)($gp)
/* 00468424 8F838C04 */  lw     $v1, %got(contiglr)($gp)
/* 00468428 8C580000 */  lw    $t8, ($v0)
/* 0046842C 8C690000 */  lw    $t1, ($v1)
/* 00468430 270E0001 */  addiu $t6, $t8, 1
/* 00468434 25390001 */  addiu $t9, $t1, 1
/* 00468438 AC4E0000 */  sw    $t6, ($v0)
/* 0046843C AC790000 */  sw    $t9, ($v1)
.L00468440:
/* 00468440 93A80087 */  lbu   $t0, 0x87($sp)
.L00468444:
/* 00468444 55000007 */  bnezl $t0, .L00468464
/* 00468448 8E6C0000 */   lw    $t4, ($s3)
/* 0046844C 8F99861C */  lw    $t9, %call16(dbgerror)($gp)
/* 00468450 24040273 */  li    $a0, 627
/* 00468454 0320F809 */  jalr  $t9
/* 00468458 00000000 */   nop   
/* 0046845C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00468460 8E6C0000 */  lw    $t4, ($s3)
.L00468464:
/* 00468464 240AFFFF */  li    $t2, -1
/* 00468468 240DFFFF */  li    $t5, -1
/* 0046846C A18A0020 */  sb    $t2, 0x20($t4)
/* 00468470 8E4B0000 */  lw    $t3, ($s2)
/* 00468474 8F848D64 */  lw     $a0, %got(colorcand)($gp)
/* 00468478 A16D0020 */  sb    $t5, 0x20($t3)
/* 0046847C 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 00468480 8E6F0000 */  lw    $t7, ($s3)
/* 00468484 0320F809 */  jalr  $t9
/* 00468488 8DE50004 */   lw    $a1, 4($t7)
/* 0046848C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00468490 8E580000 */  lw    $t8, ($s2)
/* 00468494 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 00468498 8F848D64 */  lw     $a0, %got(colorcand)($gp)
/* 0046849C 8F050004 */  lw    $a1, 4($t8)
/* 004684A0 0320F809 */  jalr  $t9
/* 004684A4 00000000 */   nop   
/* 004684A8 8E4E0000 */  lw    $t6, ($s2)
/* 004684AC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004684B0 2407000A */  li    $a3, 10
/* 004684B4 8DD00038 */  lw    $s0, 0x38($t6)
/* 004684B8 1200000A */  beqz  $s0, .L004684E4
/* 004684BC 00000000 */   nop   
/* 004684C0 8E060000 */  lw    $a2, ($s0)
.L004684C4:
/* 004684C4 50C00005 */  beql  $a2, $zero, .L004684DC
/* 004684C8 8E100004 */   lw    $s0, 4($s0)
/* 004684CC 8CC90024 */  lw    $t1, 0x24($a2)
/* 004684D0 2539FFFF */  addiu $t9, $t1, -1
/* 004684D4 ACD90024 */  sw    $t9, 0x24($a2)
/* 004684D8 8E100004 */  lw    $s0, 4($s0)
.L004684DC:
/* 004684DC 5600FFF9 */  bnezl $s0, .L004684C4
/* 004684E0 8E060000 */   lw    $a2, ($s0)
.L004684E4:
/* 004684E4 8F888A94 */  lw     $t0, %got(dbugno)($gp)
/* 004684E8 24010006 */  li    $at, 6
/* 004684EC 8D080000 */  lw    $t0, ($t0)
/* 004684F0 55010141 */  bnel  $t0, $at, .L004689F8
/* 004684F4 8FBF002C */   lw    $ra, 0x2c($sp)
/* 004684F8 8E6A0000 */  lw    $t2, ($s3)
/* 004684FC 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 00468500 8F918CCC */  lw     $s1, %got(list)($gp)
/* 00468504 8D4C0000 */  lw    $t4, ($t2)
/* 00468508 24060004 */  li    $a2, 4
/* 0046850C 8E240000 */  lw    $a0, ($s1)
/* 00468510 0320F809 */  jalr  $t9
/* 00468514 95850002 */   lhu   $a1, 2($t4)
/* 00468518 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0046851C 8E300000 */  lw    $s0, ($s1)
/* 00468520 2405003A */  li    $a1, 58
/* 00468524 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 00468528 24060001 */  li    $a2, 1
/* 0046852C 2407000A */  li    $a3, 10
/* 00468530 0320F809 */  jalr  $t9
/* 00468534 02002025 */   move  $a0, $s0
/* 00468538 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0046853C 8E6D0000 */  lw    $t5, ($s3)
/* 00468540 02002025 */  move  $a0, $s0
/* 00468544 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 00468548 24060005 */  li    $a2, 5
/* 0046854C 2407000A */  li    $a3, 10
/* 00468550 0320F809 */  jalr  $t9
/* 00468554 8DA50004 */   lw    $a1, 4($t5)
/* 00468558 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0046855C 8E240000 */  lw    $a0, ($s1)
/* 00468560 2406001C */  li    $a2, 28
/* 00468564 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 00468568 8F858044 */  lw    $a1, %got(RO_1000D678)($gp)
/* 0046856C 2407001C */  li    $a3, 28
/* 00468570 0320F809 */  jalr  $t9
/* 00468574 24A5D678 */   addiu $a1, %lo(RO_1000D678) # addiu $a1, $a1, -0x2988
/* 00468578 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0046857C 8E240000 */  lw    $a0, ($s1)
/* 00468580 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 00468584 0320F809 */  jalr  $t9
/* 00468588 00000000 */   nop   
/* 0046858C 10000119 */  b     .L004689F4
/* 00468590 8FBC0028 */   lw    $gp, 0x28($sp)
.L00468594:
/* 00468594 8F8B8A94 */  lw     $t3, %got(dbugno)($gp)
/* 00468598 24010006 */  li    $at, 6
/* 0046859C 2406000A */  li    $a2, 10
/* 004685A0 8D6B0000 */  lw    $t3, ($t3)
/* 004685A4 55610038 */  bnel  $t3, $at, .L00468688
/* 004685A8 8E590000 */   lw    $t9, ($s2)
/* 004685AC 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 004685B0 8F918CCC */  lw     $s1, %got(list)($gp)
/* 004685B4 8F858044 */  lw    $a1, %got(RO_1000D66E)($gp)
/* 004685B8 2407000A */  li    $a3, 10
/* 004685BC 8E240000 */  lw    $a0, ($s1)
/* 004685C0 0320F809 */  jalr  $t9
/* 004685C4 24A5D66E */   addiu $a1, %lo(RO_1000D66E) # addiu $a1, $a1, -0x2992
/* 004685C8 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004685CC 8E6F0000 */  lw    $t7, ($s3)
/* 004685D0 8E240000 */  lw    $a0, ($s1)
/* 004685D4 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 004685D8 8DF80000 */  lw    $t8, ($t7)
/* 004685DC 24060004 */  li    $a2, 4
/* 004685E0 2407000A */  li    $a3, 10
/* 004685E4 0320F809 */  jalr  $t9
/* 004685E8 97050002 */   lhu   $a1, 2($t8)
/* 004685EC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004685F0 8E300000 */  lw    $s0, ($s1)
/* 004685F4 2405003A */  li    $a1, 58
/* 004685F8 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 004685FC 24060001 */  li    $a2, 1
/* 00468600 2407000A */  li    $a3, 10
/* 00468604 0320F809 */  jalr  $t9
/* 00468608 02002025 */   move  $a0, $s0
/* 0046860C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00468610 8E6E0000 */  lw    $t6, ($s3)
/* 00468614 02002025 */  move  $a0, $s0
/* 00468618 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0046861C 24060005 */  li    $a2, 5
/* 00468620 2407000A */  li    $a3, 10
/* 00468624 0320F809 */  jalr  $t9
/* 00468628 8DC50004 */   lw    $a1, 4($t6)
/* 0046862C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00468630 8E240000 */  lw    $a0, ($s1)
/* 00468634 2406000A */  li    $a2, 10
/* 00468638 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0046863C 8F858044 */  lw    $a1, %got(RO_1000D664)($gp)
/* 00468640 2407000A */  li    $a3, 10
/* 00468644 0320F809 */  jalr  $t9
/* 00468648 24A5D664 */   addiu $a1, %lo(RO_1000D664) # addiu $a1, $a1, -0x299c
/* 0046864C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00468650 8E490000 */  lw    $t1, ($s2)
/* 00468654 8E240000 */  lw    $a0, ($s1)
/* 00468658 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0046865C 24060005 */  li    $a2, 5
/* 00468660 2407000A */  li    $a3, 10
/* 00468664 0320F809 */  jalr  $t9
/* 00468668 8D250004 */   lw    $a1, 4($t1)
/* 0046866C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00468670 8E240000 */  lw    $a0, ($s1)
/* 00468674 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 00468678 0320F809 */  jalr  $t9
/* 0046867C 00000000 */   nop   
/* 00468680 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00468684 8E590000 */  lw    $t9, ($s2)
.L00468688:
/* 00468688 8F300038 */  lw    $s0, 0x38($t9)
/* 0046868C 12000049 */  beqz  $s0, .L004687B4
/* 00468690 00000000 */   nop   
.L00468694:
/* 00468694 92080008 */  lbu   $t0, 8($s0)
/* 00468698 8E110004 */  lw    $s1, 4($s0)
/* 0046869C 51000036 */  beql  $t0, $zero, .L00468778
/* 004686A0 8E060000 */   lw    $a2, ($s0)
/* 004686A4 8F9984F8 */  lw    $t9, %call16(intfering)($gp)
/* 004686A8 A2000008 */  sb    $zero, 8($s0)
/* 004686AC 8E450000 */  lw    $a1, ($s2)
/* 004686B0 0320F809 */  jalr  $t9
/* 004686B4 8E040000 */   lw    $a0, ($s0)
/* 004686B8 10400013 */  beqz  $v0, .L00468708
/* 004686BC 8FBC0028 */   lw    $gp, 0x28($sp)
/* 004686C0 8F9984F4 */  lw    $t9, %call16(insintf)($gp)
/* 004686C4 8E640000 */  lw    $a0, ($s3)
/* 004686C8 8E050000 */  lw    $a1, ($s0)
/* 004686CC 0320F809 */  jalr  $t9
/* 004686D0 24840038 */   addiu $a0, $a0, 0x38
/* 004686D4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004686D8 8E040000 */  lw    $a0, ($s0)
/* 004686DC 8E450000 */  lw    $a1, ($s2)
/* 004686E0 8F9984F4 */  lw    $t9, %call16(insintf)($gp)
/* 004686E4 24840038 */  addiu $a0, $a0, 0x38
/* 004686E8 0320F809 */  jalr  $t9
/* 004686EC 00000000 */   nop   
/* 004686F0 8E060000 */  lw    $a2, ($s0)
/* 004686F4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004686F8 8CCA0024 */  lw    $t2, 0x24($a2)
/* 004686FC 254C0001 */  addiu $t4, $t2, 1
/* 00468700 1000002A */  b     .L004687AC
/* 00468704 ACCC0024 */   sw    $t4, 0x24($a2)
.L00468708:
/* 00468708 8E470000 */  lw    $a3, ($s2)
/* 0046870C 8CE40038 */  lw    $a0, 0x38($a3)
/* 00468710 56040005 */  bnel  $s0, $a0, .L00468728
/* 00468714 8C830004 */   lw    $v1, 4($a0)
/* 00468718 8E0D0004 */  lw    $t5, 4($s0)
/* 0046871C 1000000B */  b     .L0046874C
/* 00468720 ACED0038 */   sw    $t5, 0x38($a3)
/* 00468724 8C830004 */  lw    $v1, 4($a0)
.L00468728:
/* 00468728 00801025 */  move  $v0, $a0
/* 0046872C 52030006 */  beql  $s0, $v1, .L00468748
/* 00468730 8E0B0004 */   lw    $t3, 4($s0)
/* 00468734 00601025 */  move  $v0, $v1
.L00468738:
/* 00468738 8C630004 */  lw    $v1, 4($v1)
/* 0046873C 5603FFFE */  bnel  $s0, $v1, .L00468738
/* 00468740 00601025 */   move  $v0, $v1
/* 00468744 8E0B0004 */  lw    $t3, 4($s0)
.L00468748:
/* 00468748 AC4B0004 */  sw    $t3, 4($v0)
.L0046874C:
/* 0046874C 8E470000 */  lw    $a3, ($s2)
/* 00468750 8CEF0024 */  lw    $t7, 0x24($a3)
/* 00468754 25F8FFFF */  addiu $t8, $t7, -1
/* 00468758 ACF80024 */  sw    $t8, 0x24($a3)
/* 0046875C 8E6E0000 */  lw    $t6, ($s3)
/* 00468760 8DC90038 */  lw    $t1, 0x38($t6)
/* 00468764 AE090004 */  sw    $t1, 4($s0)
/* 00468768 8E790000 */  lw    $t9, ($s3)
/* 0046876C 1000000F */  b     .L004687AC
/* 00468770 AF300038 */   sw    $s0, 0x38($t9)
/* 00468774 8E060000 */  lw    $a2, ($s0)
.L00468778:
/* 00468778 10C0000C */  beqz  $a2, .L004687AC
/* 0046877C 00000000 */   nop   
/* 00468780 8CC20038 */  lw    $v0, 0x38($a2)
/* 00468784 8E630000 */  lw    $v1, ($s3)
/* 00468788 8E470000 */  lw    $a3, ($s2)
/* 0046878C 8C480000 */  lw    $t0, ($v0)
/* 00468790 50680006 */  beql  $v1, $t0, .L004687AC
/* 00468794 AC470000 */   sw    $a3, ($v0)
/* 00468798 8C420004 */  lw    $v0, 4($v0)
.L0046879C:
/* 0046879C 8C4A0000 */  lw    $t2, ($v0)
/* 004687A0 546AFFFE */  bnel  $v1, $t2, .L0046879C
/* 004687A4 8C420004 */   lw    $v0, 4($v0)
/* 004687A8 AC470000 */  sw    $a3, ($v0)
.L004687AC:
/* 004687AC 1620FFB9 */  bnez  $s1, .L00468694
/* 004687B0 02208025 */   move  $s0, $s1
.L004687B4:
/* 004687B4 8F8C8B20 */  lw     $t4, %got(outofmem)($gp)
/* 004687B8 918C0000 */  lbu   $t4, ($t4)
/* 004687BC 5580008E */  bnezl $t4, .L004689F8
/* 004687C0 8FBF002C */   lw    $ra, 0x2c($sp)
/* 004687C4 8F99852C */  lw    $t9, %call16(isconstrained)($gp)
/* 004687C8 8E640000 */  lw    $a0, ($s3)
/* 004687CC 0320F809 */  jalr  $t9
/* 004687D0 00000000 */   nop   
/* 004687D4 1440000E */  bnez  $v0, .L00468810
/* 004687D8 8FBC0028 */   lw    $gp, 0x28($sp)
/* 004687DC 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 004687E0 8E6D0000 */  lw    $t5, ($s3)
/* 004687E4 8F848D60 */  lw     $a0, %got(unconstrain)($gp)
/* 004687E8 0320F809 */  jalr  $t9
/* 004687EC 8DA50004 */   lw    $a1, 4($t5)
/* 004687F0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004687F4 8E6B0000 */  lw    $t3, ($s3)
/* 004687F8 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 004687FC 8F848D64 */  lw     $a0, %got(colorcand)($gp)
/* 00468800 8D650004 */  lw    $a1, 4($t3)
/* 00468804 0320F809 */  jalr  $t9
/* 00468808 00000000 */   nop   
/* 0046880C 8FBC0028 */  lw    $gp, 0x28($sp)
.L00468810:
/* 00468810 8F998528 */  lw    $t9, %call16(updatelivran)($gp)
/* 00468814 8E640000 */  lw    $a0, ($s3)
/* 00468818 0320F809 */  jalr  $t9
/* 0046881C 00000000 */   nop   
/* 00468820 8E4F0000 */  lw    $t7, ($s2)
/* 00468824 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00468828 ADE0002C */  sw    $zero, 0x2c($t7)
/* 0046882C ADE00028 */  sw    $zero, 0x28($t7)
/* 00468830 8E470000 */  lw    $a3, ($s2)
/* 00468834 8CF00008 */  lw    $s0, 8($a3)
/* 00468838 1200000C */  beqz  $s0, .L0046886C
/* 0046883C 00000000 */   nop   
.L00468840:
/* 00468840 8F998508 */  lw    $t9, %call16(updateforbidden)($gp)
/* 00468844 8E040000 */  lw    $a0, ($s0)
/* 00468848 92050013 */  lbu   $a1, 0x13($s0)
/* 0046884C 8E460000 */  lw    $a2, ($s2)
/* 00468850 0320F809 */  jalr  $t9
/* 00468854 02803825 */   move  $a3, $s4
/* 00468858 8E100004 */  lw    $s0, 4($s0)
/* 0046885C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00468860 1600FFF7 */  bnez  $s0, .L00468840
/* 00468864 00000000 */   nop   
/* 00468868 8E470000 */  lw    $a3, ($s2)
.L0046886C:
/* 0046886C 8F9981A0 */  lw    $t9, %call16(bvectempty)($gp)
/* 00468870 24E4000C */  addiu $a0, $a3, 0xc
/* 00468874 0320F809 */  jalr  $t9
/* 00468878 00000000 */   nop   
/* 0046887C 1440001C */  bnez  $v0, .L004688F0
/* 00468880 8FBC0028 */   lw    $gp, 0x28($sp)
/* 00468884 8F8289B8 */  lw     $v0, %got(curstaticno)($gp)
/* 00468888 00008025 */  move  $s0, $zero
/* 0046888C 8F918C68 */  lw     $s1, %got(bbtab)($gp)
/* 00468890 8C420000 */  lw    $v0, ($v0)
/* 00468894 24420000 */  addiu $v0, $v0, 0
/* 00468898 AFA20040 */  sw    $v0, 0x40($sp)
.L0046889C:
/* 0046889C 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 004688A0 8E450000 */  lw    $a1, ($s2)
/* 004688A4 02002025 */  move  $a0, $s0
/* 004688A8 0320F809 */  jalr  $t9
/* 004688AC 24A5000C */   addiu $a1, $a1, 0xc
/* 004688B0 1040000B */  beqz  $v0, .L004688E0
/* 004688B4 8FBC0028 */   lw    $gp, 0x28($sp)
/* 004688B8 8E380000 */  lw    $t8, ($s1)
/* 004688BC 8F998508 */  lw    $t9, %call16(updateforbidden)($gp)
/* 004688C0 00107080 */  sll   $t6, $s0, 2
/* 004688C4 030E4821 */  addu  $t1, $t8, $t6
/* 004688C8 8D240000 */  lw    $a0, ($t1)
/* 004688CC 00002825 */  move  $a1, $zero
/* 004688D0 8E460000 */  lw    $a2, ($s2)
/* 004688D4 0320F809 */  jalr  $t9
/* 004688D8 02803825 */   move  $a3, $s4
/* 004688DC 8FBC0028 */  lw    $gp, 0x28($sp)
.L004688E0:
/* 004688E0 8FB90040 */  lw    $t9, 0x40($sp)
/* 004688E4 26100001 */  addiu $s0, $s0, 1
/* 004688E8 1619FFEC */  bne   $s0, $t9, .L0046889C
/* 004688EC 00000000 */   nop   
.L004688F0:
/* 004688F0 8F998504 */  lw    $t9, %call16(updatecolorsleft)($gp)
/* 004688F4 8E440000 */  lw    $a0, ($s2)
/* 004688F8 02802825 */  move  $a1, $s4
/* 004688FC 0320F809 */  jalr  $t9
/* 00468900 00000000 */   nop   
/* 00468904 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00468908 8E440000 */  lw    $a0, ($s2)
/* 0046890C 8F99852C */  lw    $t9, %call16(isconstrained)($gp)
/* 00468910 0320F809 */  jalr  $t9
/* 00468914 00000000 */   nop   
/* 00468918 14400008 */  bnez  $v0, .L0046893C
/* 0046891C 8FBC0028 */   lw    $gp, 0x28($sp)
/* 00468920 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00468924 8E480000 */  lw    $t0, ($s2)
/* 00468928 8F848D60 */  lw     $a0, %got(unconstrain)($gp)
/* 0046892C 0320F809 */  jalr  $t9
/* 00468930 8D050004 */   lw    $a1, 4($t0)
/* 00468934 10000007 */  b     .L00468954
/* 00468938 8FBC0028 */   lw    $gp, 0x28($sp)
.L0046893C:
/* 0046893C 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00468940 8E4A0000 */  lw    $t2, ($s2)
/* 00468944 8F848D64 */  lw     $a0, %got(colorcand)($gp)
/* 00468948 0320F809 */  jalr  $t9
/* 0046894C 8D450004 */   lw    $a1, 4($t2)
/* 00468950 8FBC0028 */  lw    $gp, 0x28($sp)
.L00468954:
/* 00468954 8E6C0000 */  lw    $t4, ($s3)
/* 00468958 8D900038 */  lw    $s0, 0x38($t4)
/* 0046895C 12000021 */  beqz  $s0, .L004689E4
/* 00468960 00000000 */   nop   
/* 00468964 8E060000 */  lw    $a2, ($s0)
.L00468968:
/* 00468968 50C0001C */  beql  $a2, $zero, .L004689DC
/* 0046896C 8E100004 */   lw    $s0, 4($s0)
/* 00468970 8F998170 */  lw    $t9, %call16(bvectin0)($gp)
/* 00468974 8CC40004 */  lw    $a0, 4($a2)
/* 00468978 8F858D60 */  lw     $a1, %got(unconstrain)($gp)
/* 0046897C 0320F809 */  jalr  $t9
/* 00468980 00000000 */   nop   
/* 00468984 10400014 */  beqz  $v0, .L004689D8
/* 00468988 8FBC0028 */   lw    $gp, 0x28($sp)
/* 0046898C 8F99852C */  lw    $t9, %call16(isconstrained)($gp)
/* 00468990 8E040000 */  lw    $a0, ($s0)
/* 00468994 0320F809 */  jalr  $t9
/* 00468998 00000000 */   nop   
/* 0046899C 1040000E */  beqz  $v0, .L004689D8
/* 004689A0 8FBC0028 */   lw    $gp, 0x28($sp)
/* 004689A4 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 004689A8 8E0D0000 */  lw    $t5, ($s0)
/* 004689AC 8F848D60 */  lw     $a0, %got(unconstrain)($gp)
/* 004689B0 0320F809 */  jalr  $t9
/* 004689B4 8DA50004 */   lw    $a1, 4($t5)
/* 004689B8 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004689BC 8E0B0000 */  lw    $t3, ($s0)
/* 004689C0 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 004689C4 8F848D64 */  lw     $a0, %got(colorcand)($gp)
/* 004689C8 8D650004 */  lw    $a1, 4($t3)
/* 004689CC 0320F809 */  jalr  $t9
/* 004689D0 00000000 */   nop   
/* 004689D4 8FBC0028 */  lw    $gp, 0x28($sp)
.L004689D8:
/* 004689D8 8E100004 */  lw    $s0, 4($s0)
.L004689DC:
/* 004689DC 5600FFE2 */  bnezl $s0, .L00468968
/* 004689E0 8E060000 */   lw    $a2, ($s0)
.L004689E4:
/* 004689E4 8F828BF0 */  lw     $v0, %got(finalnumlr)($gp)
/* 004689E8 8C4F0000 */  lw    $t7, ($v0)
/* 004689EC 25F80001 */  addiu $t8, $t7, 1
/* 004689F0 AC580000 */  sw    $t8, ($v0)
.L004689F4:
/* 004689F4 8FBF002C */  lw    $ra, 0x2c($sp)
.L004689F8:
/* 004689F8 8FB00014 */  lw    $s0, 0x14($sp)
/* 004689FC 8FB10018 */  lw    $s1, 0x18($sp)
/* 00468A00 8FB2001C */  lw    $s2, 0x1c($sp)
/* 00468A04 8FB30020 */  lw    $s3, 0x20($sp)
/* 00468A08 8FB40024 */  lw    $s4, 0x24($sp)
/* 00468A0C 03E00008 */  jr    $ra
/* 00468A10 27BD0078 */   addiu $sp, $sp, 0x78
    .type split, @function
    .size split, .-split
    .end split

glabel cupcosts
    .ent cupcosts
    # 00469280 globalcolor
/* 00468A14 3C1C0FBB */  .cpload $t9
/* 00468A18 279C187C */  
/* 00468A1C 0399E021 */  
/* 00468A20 27BDFF90 */  addiu $sp, $sp, -0x70
/* 00468A24 AFBF0044 */  sw    $ra, 0x44($sp)
/* 00468A28 AFBE0040 */  sw    $fp, 0x40($sp)
/* 00468A2C AFBC003C */  sw    $gp, 0x3c($sp)
/* 00468A30 AFB70038 */  sw    $s7, 0x38($sp)
/* 00468A34 AFB60034 */  sw    $s6, 0x34($sp)
/* 00468A38 AFB50030 */  sw    $s5, 0x30($sp)
/* 00468A3C AFB4002C */  sw    $s4, 0x2c($sp)
/* 00468A40 AFB30028 */  sw    $s3, 0x28($sp)
/* 00468A44 AFB20024 */  sw    $s2, 0x24($sp)
/* 00468A48 AFB10020 */  sw    $s1, 0x20($sp)
/* 00468A4C AFB0001C */  sw    $s0, 0x1c($sp)
/* 00468A50 F7B40010 */  sdc1  $f20, 0x10($sp)
/* 00468A54 AFA60078 */  sw    $a2, 0x78($sp)
/* 00468A58 8C910008 */  lw    $s1, 8($a0)
/* 00468A5C 4480A000 */  mtc1  $zero, $f20
/* 00468A60 00A09025 */  move  $s2, $a1
/* 00468A64 00809825 */  move  $s3, $a0
/* 00468A68 12200125 */  beqz  $s1, .L00468F00
/* 00468A6C 30D500FF */   andi  $s5, $a2, 0xff
/* 00468A70 241E0010 */  li    $fp, 16
/* 00468A74 24170003 */  li    $s7, 3
/* 00468A78 8F968D5C */  lw     $s6, %got(regscantpass)($gp)
/* 00468A7C 8F948A20 */  lw     $s4, %got(movcostused)($gp)
/* 00468A80 922E0015 */  lbu   $t6, 0x15($s1)
.L00468A84:
/* 00468A84 55C00052 */  bnezl $t6, .L00468BD0
/* 00468A88 92690022 */   lbu   $t1, 0x22($s3)
/* 00468A8C 8E300000 */  lw    $s0, ($s1)
/* 00468A90 8E020014 */  lw    $v0, 0x14($s0)
/* 00468A94 5040004E */  beql  $v0, $zero, .L00468BD0
/* 00468A98 92690022 */   lbu   $t1, 0x22($s3)
/* 00468A9C 8F998544 */  lw    $t9, %call16(is_cup_affecting_regs)($gp)
/* 00468AA0 8C440000 */  lw    $a0, ($v0)
/* 00468AA4 0320F809 */  jalr  $t9
/* 00468AA8 00000000 */   nop   
/* 00468AAC 10400047 */  beqz  $v0, .L00468BCC
/* 00468AB0 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00468AB4 8E0F0014 */  lw    $t7, 0x14($s0)
/* 00468AB8 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00468ABC 26650014 */  addiu $a1, $s3, 0x14
/* 00468AC0 8DF80000 */  lw    $t8, ($t7)
/* 00468AC4 0320F809 */  jalr  $t9
/* 00468AC8 97040008 */   lhu   $a0, 8($t8)
/* 00468ACC 1040003F */  beqz  $v0, .L00468BCC
/* 00468AD0 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00468AD4 8E190014 */  lw    $t9, 0x14($s0)
/* 00468AD8 8F280000 */  lw    $t0, ($t9)
/* 00468ADC 8D030020 */  lw    $v1, 0x20($t0)
/* 00468AE0 90620000 */  lbu   $v0, ($v1)
/* 00468AE4 17C20016 */  bne   $fp, $v0, .L00468B40
/* 00468AE8 00000000 */   nop   
/* 00468AEC 52A00038 */  beql  $s5, $zero, .L00468BD0
/* 00468AF0 92690022 */   lbu   $t1, 0x22($s3)
/* 00468AF4 8F99870C */  lw    $t9, %call16(in_reg_masks)($gp)
/* 00468AF8 02402025 */  move  $a0, $s2
/* 00468AFC 8C650020 */  lw    $a1, 0x20($v1)
/* 00468B00 0320F809 */  jalr  $t9
/* 00468B04 8C660024 */   lw    $a2, 0x24($v1)
/* 00468B08 10400030 */  beqz  $v0, .L00468BCC
/* 00468B0C 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00468B10 8E09002C */  lw    $t1, 0x2c($s0)
/* 00468B14 C6840000 */  lwc1  $f4, ($s4)
/* 00468B18 3C014F80 */  li    $at, 0x4F800000 # 4294967296.000000
/* 00468B1C 44893000 */  mtc1  $t1, $f6
/* 00468B20 05210004 */  bgez  $t1, .L00468B34
/* 00468B24 46803220 */   cvt.s.w $f8, $f6
/* 00468B28 44815000 */  mtc1  $at, $f10
/* 00468B2C 00000000 */  nop   
/* 00468B30 460A4200 */  add.s $f8, $f8, $f10
.L00468B34:
/* 00468B34 46082402 */  mul.s $f16, $f4, $f8
/* 00468B38 10000024 */  b     .L00468BCC
/* 00468B3C 4610A500 */   add.s $f20, $f20, $f16
.L00468B40:
/* 00468B40 56A00006 */  bnezl $s5, .L00468B5C
/* 00468B44 946C001A */   lhu   $t4, 0x1a($v1)
/* 00468B48 8C6A0014 */  lw    $t2, 0x14($v1)
/* 00468B4C 914B000C */  lbu   $t3, 0xc($t2)
/* 00468B50 5160001F */  beql  $t3, $zero, .L00468BD0
/* 00468B54 92690022 */   lbu   $t1, 0x22($s3)
/* 00468B58 946C001A */  lhu   $t4, 0x1a($v1)
.L00468B5C:
/* 00468B5C 24010017 */  li    $at, 23
/* 00468B60 318D0100 */  andi  $t5, $t4, 0x100
/* 00468B64 51A00006 */  beql  $t5, $zero, .L00468B80
/* 00468B68 8C620014 */   lw    $v0, 0x14($v1)
/* 00468B6C 14410003 */  bne   $v0, $at, .L00468B7C
/* 00468B70 2401000D */   li    $at, 13
/* 00468B74 56410016 */  bnel  $s2, $at, .L00468BD0
/* 00468B78 92690022 */   lbu   $t1, 0x22($s3)
.L00468B7C:
/* 00468B7C 8C620014 */  lw    $v0, 0x14($v1)
.L00468B80:
/* 00468B80 904E000C */  lbu   $t6, 0xc($v0)
/* 00468B84 51C00007 */  beql  $t6, $zero, .L00468BA4
/* 00468B88 8E08002C */   lw    $t0, 0x2c($s0)
/* 00468B8C 8C4F0024 */  lw    $t7, 0x24($v0)
/* 00468B90 01F2C021 */  addu  $t8, $t7, $s2
/* 00468B94 9319FFFF */  lbu   $t9, -1($t8)
/* 00468B98 5320000D */  beql  $t9, $zero, .L00468BD0
/* 00468B9C 92690022 */   lbu   $t1, 0x22($s3)
/* 00468BA0 8E08002C */  lw    $t0, 0x2c($s0)
.L00468BA4:
/* 00468BA4 C6920000 */  lwc1  $f18, ($s4)
/* 00468BA8 3C014F80 */  li    $at, 0x4F800000 # 4294967296.000000
/* 00468BAC 44883000 */  mtc1  $t0, $f6
/* 00468BB0 05010004 */  bgez  $t0, .L00468BC4
/* 00468BB4 468032A0 */   cvt.s.w $f10, $f6
/* 00468BB8 44812000 */  mtc1  $at, $f4
/* 00468BBC 00000000 */  nop   
/* 00468BC0 46045280 */  add.s $f10, $f10, $f4
.L00468BC4:
/* 00468BC4 460A9202 */  mul.s $f8, $f18, $f10
/* 00468BC8 4608A500 */  add.s $f20, $f20, $f8
.L00468BCC:
/* 00468BCC 92690022 */  lbu   $t1, 0x22($s3)
.L00468BD0:
/* 00468BD0 1120000D */  beqz  $t1, .L00468C08
/* 00468BD4 00000000 */   nop   
/* 00468BD8 922A0017 */  lbu   $t2, 0x17($s1)
/* 00468BDC 1540000A */  bnez  $t2, .L00468C08
/* 00468BE0 00000000 */   nop   
/* 00468BE4 922B0016 */  lbu   $t3, 0x16($s1)
/* 00468BE8 11600007 */  beqz  $t3, .L00468C08
/* 00468BEC 00000000 */   nop   
/* 00468BF0 922C0012 */  lbu   $t4, 0x12($s1)
/* 00468BF4 55800054 */  bnezl $t4, .L00468D48
/* 00468BF8 92230013 */   lbu   $v1, 0x13($s1)
/* 00468BFC 922D0015 */  lbu   $t5, 0x15($s1)
/* 00468C00 51A00051 */  beql  $t5, $zero, .L00468D48
/* 00468C04 92230013 */   lbu   $v1, 0x13($s1)
.L00468C08:
/* 00468C08 8F998544 */  lw    $t9, %call16(is_cup_affecting_regs)($gp)
/* 00468C0C 8E240000 */  lw    $a0, ($s1)
/* 00468C10 0320F809 */  jalr  $t9
/* 00468C14 00000000 */   nop   
/* 00468C18 1040004A */  beqz  $v0, .L00468D44
/* 00468C1C 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00468C20 8E2E0000 */  lw    $t6, ($s1)
/* 00468C24 8DC20018 */  lw    $v0, 0x18($t6)
/* 00468C28 50400047 */  beql  $v0, $zero, .L00468D48
/* 00468C2C 92230013 */   lbu   $v1, 0x13($s1)
/* 00468C30 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00468C34 8C4F0000 */  lw    $t7, ($v0)
/* 00468C38 26650014 */  addiu $a1, $s3, 0x14
/* 00468C3C 0320F809 */  jalr  $t9
/* 00468C40 95E40008 */   lhu   $a0, 8($t7)
/* 00468C44 1040003F */  beqz  $v0, .L00468D44
/* 00468C48 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00468C4C 8E240000 */  lw    $a0, ($s1)
/* 00468C50 8C820020 */  lw    $v0, 0x20($a0)
/* 00468C54 90430000 */  lbu   $v1, ($v0)
/* 00468C58 17C30017 */  bne   $fp, $v1, .L00468CB8
/* 00468C5C 00000000 */   nop   
/* 00468C60 52A00039 */  beql  $s5, $zero, .L00468D48
/* 00468C64 92230013 */   lbu   $v1, 0x13($s1)
/* 00468C68 8F99870C */  lw    $t9, %call16(in_reg_masks)($gp)
/* 00468C6C 02402025 */  move  $a0, $s2
/* 00468C70 8C450020 */  lw    $a1, 0x20($v0)
/* 00468C74 0320F809 */  jalr  $t9
/* 00468C78 8C460024 */   lw    $a2, 0x24($v0)
/* 00468C7C 10400031 */  beqz  $v0, .L00468D44
/* 00468C80 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00468C84 8E380000 */  lw    $t8, ($s1)
/* 00468C88 C6900000 */  lwc1  $f16, ($s4)
/* 00468C8C 3C014F80 */  li    $at, 0x4F800000 # 4294967296.000000
/* 00468C90 8F19002C */  lw    $t9, 0x2c($t8)
/* 00468C94 44993000 */  mtc1  $t9, $f6
/* 00468C98 07210004 */  bgez  $t9, .L00468CAC
/* 00468C9C 46803120 */   cvt.s.w $f4, $f6
/* 00468CA0 44819000 */  mtc1  $at, $f18
/* 00468CA4 00000000 */  nop   
/* 00468CA8 46122100 */  add.s $f4, $f4, $f18
.L00468CAC:
/* 00468CAC 46048282 */  mul.s $f10, $f16, $f4
/* 00468CB0 10000024 */  b     .L00468D44
/* 00468CB4 460AA500 */   add.s $f20, $f20, $f10
.L00468CB8:
/* 00468CB8 56A00006 */  bnezl $s5, .L00468CD4
/* 00468CBC 944A001A */   lhu   $t2, 0x1a($v0)
/* 00468CC0 8C480014 */  lw    $t0, 0x14($v0)
/* 00468CC4 9109000C */  lbu   $t1, 0xc($t0)
/* 00468CC8 5120001F */  beql  $t1, $zero, .L00468D48
/* 00468CCC 92230013 */   lbu   $v1, 0x13($s1)
/* 00468CD0 944A001A */  lhu   $t2, 0x1a($v0)
.L00468CD4:
/* 00468CD4 24010017 */  li    $at, 23
/* 00468CD8 314B0100 */  andi  $t3, $t2, 0x100
/* 00468CDC 51600006 */  beql  $t3, $zero, .L00468CF8
/* 00468CE0 8C430014 */   lw    $v1, 0x14($v0)
/* 00468CE4 14610003 */  bne   $v1, $at, .L00468CF4
/* 00468CE8 2401000D */   li    $at, 13
/* 00468CEC 56410016 */  bnel  $s2, $at, .L00468D48
/* 00468CF0 92230013 */   lbu   $v1, 0x13($s1)
.L00468CF4:
/* 00468CF4 8C430014 */  lw    $v1, 0x14($v0)
.L00468CF8:
/* 00468CF8 906C000C */  lbu   $t4, 0xc($v1)
/* 00468CFC 51800007 */  beql  $t4, $zero, .L00468D1C
/* 00468D00 8C98002C */   lw    $t8, 0x2c($a0)
/* 00468D04 8C6D0024 */  lw    $t5, 0x24($v1)
/* 00468D08 01B27021 */  addu  $t6, $t5, $s2
/* 00468D0C 91CFFFFF */  lbu   $t7, -1($t6)
/* 00468D10 51E0000D */  beql  $t7, $zero, .L00468D48
/* 00468D14 92230013 */   lbu   $v1, 0x13($s1)
/* 00468D18 8C98002C */  lw    $t8, 0x2c($a0)
.L00468D1C:
/* 00468D1C C6880000 */  lwc1  $f8, ($s4)
/* 00468D20 3C014F80 */  li    $at, 0x4F800000 # 4294967296.000000
/* 00468D24 44983000 */  mtc1  $t8, $f6
/* 00468D28 07010004 */  bgez  $t8, .L00468D3C
/* 00468D2C 468034A0 */   cvt.s.w $f18, $f6
/* 00468D30 44818000 */  mtc1  $at, $f16
/* 00468D34 00000000 */  nop   
/* 00468D38 46109480 */  add.s $f18, $f18, $f16
.L00468D3C:
/* 00468D3C 46124102 */  mul.s $f4, $f8, $f18
/* 00468D40 4604A500 */  add.s $f20, $f20, $f4
.L00468D44:
/* 00468D44 92230013 */  lbu   $v1, 0x13($s1)
.L00468D48:
/* 00468D48 24010001 */  li    $at, 1
/* 00468D4C 1060000F */  beqz  $v1, .L00468D8C
/* 00468D50 00000000 */   nop   
/* 00468D54 1061000D */  beq   $v1, $at, .L00468D8C
/* 00468D58 2E590040 */   sltiu $t9, $s2, 0x40
/* 00468D5C 13200006 */  beqz  $t9, .L00468D78
/* 00468D60 00124143 */   sra   $t0, $s2, 5
/* 00468D64 00084880 */  sll   $t1, $t0, 2
/* 00468D68 02C95021 */  addu  $t2, $s6, $t1
/* 00468D6C 8D4B0000 */  lw    $t3, ($t2)
/* 00468D70 024B6004 */  sllv  $t4, $t3, $s2
/* 00468D74 29990000 */  slti  $t9, $t4, 0
.L00468D78:
/* 00468D78 13200004 */  beqz  $t9, .L00468D8C
/* 00468D7C 00000000 */   nop   
/* 00468D80 8F818044 */  lw    $at, %got(RO_1000D694)($gp)
/* 00468D84 100000F7 */  b     .L00469164
/* 00468D88 C420D694 */   lwc1  $f0, %lo(RO_1000D694)($at)
.L00468D8C:
/* 00468D8C 8F8E89AC */  lw     $t6, %got(graphhead)($gp)
/* 00468D90 8E240000 */  lw    $a0, ($s1)
/* 00468D94 2E4F0040 */  sltiu $t7, $s2, 0x40
/* 00468D98 8DCE0000 */  lw    $t6, ($t6)
/* 00468D9C 15C4001C */  bne   $t6, $a0, .L00468E10
/* 00468DA0 00000000 */   nop   
/* 00468DA4 11E00006 */  beqz  $t7, .L00468DC0
/* 00468DA8 0012C143 */   sra   $t8, $s2, 5
/* 00468DAC 00184080 */  sll   $t0, $t8, 2
/* 00468DB0 02C84821 */  addu  $t1, $s6, $t0
/* 00468DB4 8D2A0000 */  lw    $t2, ($t1)
/* 00468DB8 024A5804 */  sllv  $t3, $t2, $s2
/* 00468DBC 296F0000 */  slti  $t7, $t3, 0
.L00468DC0:
/* 00468DC0 11E00013 */  beqz  $t7, .L00468E10
/* 00468DC4 00000000 */   nop   
/* 00468DC8 8E620000 */  lw    $v0, ($s3)
/* 00468DCC 904D0000 */  lbu   $t5, ($v0)
/* 00468DD0 16ED000F */  bne   $s7, $t5, .L00468E10
/* 00468DD4 00000000 */   nop   
/* 00468DD8 90590016 */  lbu   $t9, 0x16($v0)
/* 00468DDC 24010002 */  li    $at, 2
/* 00468DE0 332E0007 */  andi  $t6, $t9, 7
/* 00468DE4 15C1000A */  bne   $t6, $at, .L00468E10
/* 00468DE8 00000000 */   nop   
/* 00468DEC 8F988980 */  lw     $t8, %got(curblk)($gp)
/* 00468DF0 8C480014 */  lw    $t0, 0x14($v0)
/* 00468DF4 8F180000 */  lw    $t8, ($t8)
/* 00468DF8 00084AC2 */  srl   $t1, $t0, 0xb
/* 00468DFC 17090004 */  bne   $t8, $t1, .L00468E10
/* 00468E00 00000000 */   nop   
/* 00468E04 8F818044 */  lw    $at, %got(RO_1000D698)($gp)
/* 00468E08 100000D6 */  b     .L00469164
/* 00468E0C C420D698 */   lwc1  $f0, %lo(RO_1000D698)($at)
.L00468E10:
/* 00468E10 8F8A8A5C */  lw     $t2, %got(lang)($gp)
/* 00468E14 914A0000 */  lbu   $t2, ($t2)
/* 00468E18 16EA0023 */  bne   $s7, $t2, .L00468EA8
/* 00468E1C 00000000 */   nop   
/* 00468E20 8C8B0018 */  lw    $t3, 0x18($a0)
/* 00468E24 2E4C0040 */  sltiu $t4, $s2, 0x40
/* 00468E28 1560001F */  bnez  $t3, .L00468EA8
/* 00468E2C 00000000 */   nop   
/* 00468E30 11800006 */  beqz  $t4, .L00468E4C
/* 00468E34 00127943 */   sra   $t7, $s2, 5
/* 00468E38 000F6880 */  sll   $t5, $t7, 2
/* 00468E3C 02CDC821 */  addu  $t9, $s6, $t5
/* 00468E40 8F2E0000 */  lw    $t6, ($t9)
/* 00468E44 024E4004 */  sllv  $t0, $t6, $s2
/* 00468E48 290C0000 */  slti  $t4, $t0, 0
.L00468E4C:
/* 00468E4C 11800016 */  beqz  $t4, .L00468EA8
/* 00468E50 00000000 */   nop   
/* 00468E54 8E620000 */  lw    $v0, ($s3)
/* 00468E58 90490000 */  lbu   $t1, ($v0)
/* 00468E5C 16E90012 */  bne   $s7, $t1, .L00468EA8
/* 00468E60 00000000 */   nop   
/* 00468E64 904A0016 */  lbu   $t2, 0x16($v0)
/* 00468E68 24010002 */  li    $at, 2
/* 00468E6C 314B0007 */  andi  $t3, $t2, 7
/* 00468E70 1561000D */  bne   $t3, $at, .L00468EA8
/* 00468E74 00000000 */   nop   
/* 00468E78 8F8F8980 */  lw     $t7, %got(curblk)($gp)
/* 00468E7C 8C4D0014 */  lw    $t5, 0x14($v0)
/* 00468E80 8DEF0000 */  lw    $t7, ($t7)
/* 00468E84 000DCAC2 */  srl   $t9, $t5, 0xb
/* 00468E88 15F90007 */  bne   $t7, $t9, .L00468EA8
/* 00468E8C 00000000 */   nop   
/* 00468E90 922E0016 */  lbu   $t6, 0x16($s1)
/* 00468E94 11C00004 */  beqz  $t6, .L00468EA8
/* 00468E98 00000000 */   nop   
/* 00468E9C 8F818044 */  lw    $at, %got(RO_1000D69C)($gp)
/* 00468EA0 100000B0 */  b     .L00469164
/* 00468EA4 C420D69C */   lwc1  $f0, %lo(RO_1000D69C)($at)
.L00468EA8:
/* 00468EA8 50600013 */  beql  $v1, $zero, .L00468EF8
/* 00468EAC 8E310004 */   lw    $s1, 4($s1)
/* 00468EB0 52430011 */  beql  $s2, $v1, .L00468EF8
/* 00468EB4 8E310004 */   lw    $s1, 4($s1)
/* 00468EB8 8C88002C */  lw    $t0, 0x2c($a0)
/* 00468EBC C68A0000 */  lwc1  $f10, ($s4)
/* 00468EC0 3C014F80 */  li    $at, 0x4F800000 # 4294967296.000000
/* 00468EC4 44883000 */  mtc1  $t0, $f6
/* 00468EC8 05010004 */  bgez  $t0, .L00468EDC
/* 00468ECC 46803420 */   cvt.s.w $f16, $f6
/* 00468ED0 44814000 */  mtc1  $at, $f8
/* 00468ED4 00000000 */  nop   
/* 00468ED8 46088400 */  add.s $f16, $f16, $f8
.L00468EDC:
/* 00468EDC 46105482 */  mul.s $f18, $f10, $f16
/* 00468EE0 3C014120 */  li    $at, 0x41200000 # 10.000000
/* 00468EE4 44812000 */  mtc1  $at, $f4
/* 00468EE8 00000000 */  nop   
/* 00468EEC 46049183 */  div.s $f6, $f18, $f4
/* 00468EF0 4606A500 */  add.s $f20, $f20, $f6
/* 00468EF4 8E310004 */  lw    $s1, 4($s1)
.L00468EF8:
/* 00468EF8 5620FEE2 */  bnezl $s1, .L00468A84
/* 00468EFC 922E0015 */   lbu   $t6, 0x15($s1)
.L00468F00:
/* 00468F00 8F9981A0 */  lw    $t9, %call16(bvectempty)($gp)
/* 00468F04 2664000C */  addiu $a0, $s3, 0xc
/* 00468F08 8F948A20 */  lw     $s4, %got(movcostused)($gp)
/* 00468F0C 8F968D5C */  lw     $s6, %got(regscantpass)($gp)
/* 00468F10 24170003 */  li    $s7, 3
/* 00468F14 241E0010 */  li    $fp, 16
/* 00468F18 0320F809 */  jalr  $t9
/* 00468F1C AFA40048 */   sw    $a0, 0x48($sp)
/* 00468F20 1440008F */  bnez  $v0, .L00469160
/* 00468F24 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00468F28 8F8289B8 */  lw     $v0, %got(curstaticno)($gp)
/* 00468F2C 00008825 */  move  $s1, $zero
/* 00468F30 8C420000 */  lw    $v0, ($v0)
/* 00468F34 24420000 */  addiu $v0, $v0, 0
/* 00468F38 AFA20058 */  sw    $v0, 0x58($sp)
.L00468F3C:
/* 00468F3C 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00468F40 02202025 */  move  $a0, $s1
/* 00468F44 8FA50048 */  lw    $a1, 0x48($sp)
/* 00468F48 0320F809 */  jalr  $t9
/* 00468F4C 00000000 */   nop   
/* 00468F50 1040007F */  beqz  $v0, .L00469150
/* 00468F54 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00468F58 8F988C68 */  lw     $t8, %got(bbtab)($gp)
/* 00468F5C 00116080 */  sll   $t4, $s1, 2
/* 00468F60 8F180000 */  lw    $t8, ($t8)
/* 00468F64 030C4821 */  addu  $t1, $t8, $t4
/* 00468F68 8D300000 */  lw    $s0, ($t1)
/* 00468F6C 8E020014 */  lw    $v0, 0x14($s0)
/* 00468F70 10400056 */  beqz  $v0, .L004690CC
/* 00468F74 00000000 */   nop   
/* 00468F78 8C430000 */  lw    $v1, ($v0)
/* 00468F7C 8C6A0020 */  lw    $t2, 0x20($v1)
/* 00468F80 914B0000 */  lbu   $t3, ($t2)
/* 00468F84 2D6D0040 */  sltiu $t5, $t3, 0x40
/* 00468F88 11A00009 */  beqz  $t5, .L00468FB0
/* 00468F8C 00000000 */   nop   
/* 00468F90 8F8E8044 */  lw    $t6, %got(D_10010F80)($gp)
/* 00468F94 000B7943 */  sra   $t7, $t3, 5
/* 00468F98 000FC880 */  sll   $t9, $t7, 2
/* 00468F9C 25CE0F80 */  addiu $t6, %lo(D_10010F80) # addiu $t6, $t6, 0xf80
/* 00468FA0 01D94021 */  addu  $t0, $t6, $t9
/* 00468FA4 8D180000 */  lw    $t8, ($t0)
/* 00468FA8 01786004 */  sllv  $t4, $t8, $t3
/* 00468FAC 298D0000 */  slti  $t5, $t4, 0
.L00468FB0:
/* 00468FB0 11A00046 */  beqz  $t5, .L004690CC
/* 00468FB4 00000000 */   nop   
/* 00468FB8 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00468FBC 94640008 */  lhu   $a0, 8($v1)
/* 00468FC0 26650014 */  addiu $a1, $s3, 0x14
/* 00468FC4 0320F809 */  jalr  $t9
/* 00468FC8 00000000 */   nop   
/* 00468FCC 1040003F */  beqz  $v0, .L004690CC
/* 00468FD0 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00468FD4 8E0A0014 */  lw    $t2, 0x14($s0)
/* 00468FD8 8D4F0000 */  lw    $t7, ($t2)
/* 00468FDC 8DE30020 */  lw    $v1, 0x20($t7)
/* 00468FE0 90620000 */  lbu   $v0, ($v1)
/* 00468FE4 17C20016 */  bne   $fp, $v0, .L00469040
/* 00468FE8 00000000 */   nop   
/* 00468FEC 12A00037 */  beqz  $s5, .L004690CC
/* 00468FF0 00000000 */   nop   
/* 00468FF4 8F99870C */  lw    $t9, %call16(in_reg_masks)($gp)
/* 00468FF8 02402025 */  move  $a0, $s2
/* 00468FFC 8C650020 */  lw    $a1, 0x20($v1)
/* 00469000 0320F809 */  jalr  $t9
/* 00469004 8C660024 */   lw    $a2, 0x24($v1)
/* 00469008 10400030 */  beqz  $v0, .L004690CC
/* 0046900C 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00469010 8E0E002C */  lw    $t6, 0x2c($s0)
/* 00469014 C6880000 */  lwc1  $f8, ($s4)
/* 00469018 3C014F80 */  li    $at, 0x4F800000 # 4294967296.000000
/* 0046901C 448E5000 */  mtc1  $t6, $f10
/* 00469020 05C10004 */  bgez  $t6, .L00469034
/* 00469024 46805420 */   cvt.s.w $f16, $f10
/* 00469028 44819000 */  mtc1  $at, $f18
/* 0046902C 00000000 */  nop   
/* 00469030 46128400 */  add.s $f16, $f16, $f18
.L00469034:
/* 00469034 46104102 */  mul.s $f4, $f8, $f16
/* 00469038 10000024 */  b     .L004690CC
/* 0046903C 4604A500 */   add.s $f20, $f20, $f4
.L00469040:
/* 00469040 56A00006 */  bnezl $s5, .L0046905C
/* 00469044 9478001A */   lhu   $t8, 0x1a($v1)
/* 00469048 8C790014 */  lw    $t9, 0x14($v1)
/* 0046904C 9328000C */  lbu   $t0, 0xc($t9)
/* 00469050 1100001E */  beqz  $t0, .L004690CC
/* 00469054 00000000 */   nop   
/* 00469058 9478001A */  lhu   $t8, 0x1a($v1)
.L0046905C:
/* 0046905C 24010017 */  li    $at, 23
/* 00469060 330B0100 */  andi  $t3, $t8, 0x100
/* 00469064 51600006 */  beql  $t3, $zero, .L00469080
/* 00469068 8C620014 */   lw    $v0, 0x14($v1)
/* 0046906C 14410003 */  bne   $v0, $at, .L0046907C
/* 00469070 2401000D */   li    $at, 13
/* 00469074 16410015 */  bne   $s2, $at, .L004690CC
/* 00469078 00000000 */   nop   
.L0046907C:
/* 0046907C 8C620014 */  lw    $v0, 0x14($v1)
.L00469080:
/* 00469080 904C000C */  lbu   $t4, 0xc($v0)
/* 00469084 51800007 */  beql  $t4, $zero, .L004690A4
/* 00469088 8E0F002C */   lw    $t7, 0x2c($s0)
/* 0046908C 8C490024 */  lw    $t1, 0x24($v0)
/* 00469090 01326821 */  addu  $t5, $t1, $s2
/* 00469094 91AAFFFF */  lbu   $t2, -1($t5)
/* 00469098 1140000C */  beqz  $t2, .L004690CC
/* 0046909C 00000000 */   nop   
/* 004690A0 8E0F002C */  lw    $t7, 0x2c($s0)
.L004690A4:
/* 004690A4 C6860000 */  lwc1  $f6, ($s4)
/* 004690A8 3C014F80 */  li    $at, 0x4F800000 # 4294967296.000000
/* 004690AC 448F5000 */  mtc1  $t7, $f10
/* 004690B0 05E10004 */  bgez  $t7, .L004690C4
/* 004690B4 468054A0 */   cvt.s.w $f18, $f10
/* 004690B8 44814000 */  mtc1  $at, $f8
/* 004690BC 00000000 */  nop   
/* 004690C0 46089480 */  add.s $f18, $f18, $f8
.L004690C4:
/* 004690C4 46123402 */  mul.s $f16, $f6, $f18
/* 004690C8 4610A500 */  add.s $f20, $f20, $f16
.L004690CC:
/* 004690CC 8F8E89AC */  lw     $t6, %got(graphhead)($gp)
/* 004690D0 2E480040 */  sltiu $t0, $s2, 0x40
/* 004690D4 8DCE0000 */  lw    $t6, ($t6)
/* 004690D8 95D90008 */  lhu   $t9, 8($t6)
/* 004690DC 5639001D */  bnel  $s1, $t9, .L00469154
/* 004690E0 8FA90058 */   lw    $t1, 0x58($sp)
/* 004690E4 11000006 */  beqz  $t0, .L00469100
/* 004690E8 0012C143 */   sra   $t8, $s2, 5
/* 004690EC 00185880 */  sll   $t3, $t8, 2
/* 004690F0 02CB6021 */  addu  $t4, $s6, $t3
/* 004690F4 8D890000 */  lw    $t1, ($t4)
/* 004690F8 02496804 */  sllv  $t5, $t1, $s2
/* 004690FC 29A80000 */  slti  $t0, $t5, 0
.L00469100:
/* 00469100 51000014 */  beql  $t0, $zero, .L00469154
/* 00469104 8FA90058 */   lw    $t1, 0x58($sp)
/* 00469108 8E620000 */  lw    $v0, ($s3)
/* 0046910C 904F0000 */  lbu   $t7, ($v0)
/* 00469110 56EF0010 */  bnel  $s7, $t7, .L00469154
/* 00469114 8FA90058 */   lw    $t1, 0x58($sp)
/* 00469118 904E0016 */  lbu   $t6, 0x16($v0)
/* 0046911C 24010002 */  li    $at, 2
/* 00469120 31D90007 */  andi  $t9, $t6, 7
/* 00469124 5721000B */  bnel  $t9, $at, .L00469154
/* 00469128 8FA90058 */   lw    $t1, 0x58($sp)
/* 0046912C 8F988980 */  lw     $t8, %got(curblk)($gp)
/* 00469130 8C4B0014 */  lw    $t3, 0x14($v0)
/* 00469134 8F180000 */  lw    $t8, ($t8)
/* 00469138 000B62C2 */  srl   $t4, $t3, 0xb
/* 0046913C 570C0005 */  bnel  $t8, $t4, .L00469154
/* 00469140 8FA90058 */   lw    $t1, 0x58($sp)
/* 00469144 8F818044 */  lw    $at, %got(RO_1000D6A0)($gp)
/* 00469148 10000006 */  b     .L00469164
/* 0046914C C420D6A0 */   lwc1  $f0, %lo(RO_1000D6A0)($at)
.L00469150:
/* 00469150 8FA90058 */  lw    $t1, 0x58($sp)
.L00469154:
/* 00469154 26310001 */  addiu $s1, $s1, 1
/* 00469158 1629FF78 */  bne   $s1, $t1, .L00468F3C
/* 0046915C 00000000 */   nop   
.L00469160:
/* 00469160 4600A006 */  mov.s $f0, $f20
.L00469164:
/* 00469164 8FBF0044 */  lw    $ra, 0x44($sp)
/* 00469168 D7B40010 */  ldc1  $f20, 0x10($sp)
/* 0046916C 8FB0001C */  lw    $s0, 0x1c($sp)
/* 00469170 8FB10020 */  lw    $s1, 0x20($sp)
/* 00469174 8FB20024 */  lw    $s2, 0x24($sp)
/* 00469178 8FB30028 */  lw    $s3, 0x28($sp)
/* 0046917C 8FB4002C */  lw    $s4, 0x2c($sp)
/* 00469180 8FB50030 */  lw    $s5, 0x30($sp)
/* 00469184 8FB60034 */  lw    $s6, 0x34($sp)
/* 00469188 8FB70038 */  lw    $s7, 0x38($sp)
/* 0046918C 8FBE0040 */  lw    $fp, 0x40($sp)
/* 00469190 03E00008 */  jr    $ra
/* 00469194 27BD0070 */   addiu $sp, $sp, 0x70
    .type cupcosts, @function
    .size cupcosts, .-cupcosts
    .end cupcosts

glabel put_in_fallthru_bb
    .ent put_in_fallthru_bb
    # 00469280 globalcolor
/* 00469198 3C1C0FBB */  .cpload $t9
/* 0046919C 279C10F8 */  
/* 004691A0 0399E021 */  
/* 004691A4 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 004691A8 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 004691AC AFBF001C */  sw    $ra, 0x1c($sp)
/* 004691B0 AFA40020 */  sw    $a0, 0x20($sp)
/* 004691B4 AFA50024 */  sw    $a1, 0x24($sp)
/* 004691B8 AFBC0018 */  sw    $gp, 0x18($sp)
/* 004691BC AFA60028 */  sw    $a2, 0x28($sp)
/* 004691C0 AFA7002C */  sw    $a3, 0x2c($sp)
/* 004691C4 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 004691C8 0320F809 */  jalr  $t9
/* 004691CC 2404000C */   li    $a0, 12
/* 004691D0 8FAE0024 */  lw    $t6, 0x24($sp)
/* 004691D4 8FA30020 */  lw    $v1, 0x20($sp)
/* 004691D8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004691DC A04E0000 */  sb    $t6, ($v0)
/* 004691E0 8FAF0028 */  lw    $t7, 0x28($sp)
/* 004691E4 AC4F0004 */  sw    $t7, 4($v0)
/* 004691E8 93B8002F */  lbu   $t8, 0x2f($sp)
/* 004691EC A0580001 */  sb    $t8, 1($v0)
/* 004691F0 8C7900EC */  lw    $t9, 0xec($v1)
/* 004691F4 AC590008 */  sw    $t9, 8($v0)
/* 004691F8 8FBF001C */  lw    $ra, 0x1c($sp)
/* 004691FC 27BD0020 */  addiu $sp, $sp, 0x20
/* 00469200 AC6200EC */  sw    $v0, 0xec($v1)
/* 00469204 03E00008 */  jr    $ra
/* 00469208 00000000 */   nop   
    .type put_in_fallthru_bb, @function
    .size put_in_fallthru_bb, .-put_in_fallthru_bb
    .end put_in_fallthru_bb

glabel put_in_jump_bb
    .ent put_in_jump_bb
    # 00469280 globalcolor
/* 0046920C 3C1C0FBB */  .cpload $t9
/* 00469210 279C1084 */  
/* 00469214 0399E021 */  
/* 00469218 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0046921C 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 00469220 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00469224 AFA40020 */  sw    $a0, 0x20($sp)
/* 00469228 AFA50024 */  sw    $a1, 0x24($sp)
/* 0046922C AFBC0018 */  sw    $gp, 0x18($sp)
/* 00469230 AFA60028 */  sw    $a2, 0x28($sp)
/* 00469234 AFA7002C */  sw    $a3, 0x2c($sp)
/* 00469238 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 0046923C 0320F809 */  jalr  $t9
/* 00469240 2404000C */   li    $a0, 12
/* 00469244 8FAE0024 */  lw    $t6, 0x24($sp)
/* 00469248 8FA30020 */  lw    $v1, 0x20($sp)
/* 0046924C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00469250 A04E0000 */  sb    $t6, ($v0)
/* 00469254 8FAF0028 */  lw    $t7, 0x28($sp)
/* 00469258 AC4F0004 */  sw    $t7, 4($v0)
/* 0046925C 93B8002F */  lbu   $t8, 0x2f($sp)
/* 00469260 A0580001 */  sb    $t8, 1($v0)
/* 00469264 8C7900F0 */  lw    $t9, 0xf0($v1)
/* 00469268 AC590008 */  sw    $t9, 8($v0)
/* 0046926C 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00469270 27BD0020 */  addiu $sp, $sp, 0x20
/* 00469274 AC6200F0 */  sw    $v0, 0xf0($v1)
/* 00469278 03E00008 */  jr    $ra
/* 0046927C 00000000 */   nop   
    .type put_in_jump_bb, @function
    .size put_in_jump_bb, .-put_in_jump_bb
    .end put_in_jump_bb

glabel globalcolor
    .ent globalcolor
    # 00456A2C oneproc
/* 00469280 3C1C0FBB */  .cpload $t9
/* 00469284 279C1010 */  
/* 00469288 0399E021 */  
/* 0046928C 27BDFEE0 */  addiu $sp, $sp, -0x120
/* 00469290 8F8E8A6C */  lw     $t6, %got(usefeedback)($gp)
/* 00469294 8F818C64 */  lw     $at, %got(numofsplits)($gp)
/* 00469298 AFBF0064 */  sw    $ra, 0x64($sp)
/* 0046929C 91CE0000 */  lbu   $t6, ($t6)
/* 004692A0 AFBE0060 */  sw    $fp, 0x60($sp)
/* 004692A4 AFBC005C */  sw    $gp, 0x5c($sp)
/* 004692A8 AFB70058 */  sw    $s7, 0x58($sp)
/* 004692AC AFB60054 */  sw    $s6, 0x54($sp)
/* 004692B0 AFB50050 */  sw    $s5, 0x50($sp)
/* 004692B4 AFB4004C */  sw    $s4, 0x4c($sp)
/* 004692B8 AFB30048 */  sw    $s3, 0x48($sp)
/* 004692BC AFB20044 */  sw    $s2, 0x44($sp)
/* 004692C0 AFB10040 */  sw    $s1, 0x40($sp)
/* 004692C4 AFB0003C */  sw    $s0, 0x3c($sp)
/* 004692C8 F7BC0030 */  sdc1  $f28, 0x30($sp)
/* 004692CC F7BA0028 */  sdc1  $f26, 0x28($sp)
/* 004692D0 F7B80020 */  sdc1  $f24, 0x20($sp)
/* 004692D4 F7B60018 */  sdc1  $f22, 0x18($sp)
/* 004692D8 F7B40010 */  sdc1  $f20, 0x10($sp)
/* 004692DC 11C00006 */  beqz  $t6, .L004692F8
/* 004692E0 AC200000 */   sw    $zero, ($at)
/* 004692E4 8F8F8B6C */  lw     $t7, %got(curproc)($gp)
/* 004692E8 8DEF0000 */  lw    $t7, ($t7)
/* 004692EC 8DF80034 */  lw    $t8, 0x34($t7)
/* 004692F0 17000020 */  bnez  $t8, .L00469374
/* 004692F4 00000000 */   nop   
.L004692F8:
/* 004692F8 8F9989B8 */  lw     $t9, %got(curstaticno)($gp)
/* 004692FC 8F818A20 */  lw     $at, %got(movcostused)($gp)
/* 00469300 8F390000 */  lw    $t9, ($t9)
/* 00469304 C4240000 */  lwc1  $f4, ($at)
/* 00469308 3C014F80 */  li    $at, 0x4F800000 # 4294967296.000000
/* 0046930C 44993000 */  mtc1  $t9, $f6
/* 00469310 07210004 */  bgez  $t9, .L00469324
/* 00469314 46803220 */   cvt.s.w $f8, $f6
/* 00469318 44815000 */  mtc1  $at, $f10
/* 0046931C 00000000 */  nop   
/* 00469320 460A4200 */  add.s $f8, $f8, $f10
.L00469324:
/* 00469324 46082402 */  mul.s $f16, $f4, $f8
/* 00469328 3C013E80 */  li    $at, 0x3E800000 # 0.250000
/* 0046932C 44819000 */  mtc1  $at, $f18
/* 00469330 3C014080 */  li    $at, 0x40800000 # 4.000000
/* 00469334 44815000 */  mtc1  $at, $f10
/* 00469338 3C014270 */  li    $at, 0x42700000 # 60.000000
/* 0046933C 44812000 */  mtc1  $at, $f4
/* 00469340 46128602 */  mul.s $f24, $f16, $f18
/* 00469344 460AC03C */  c.lt.s $f24, $f10
/* 00469348 00000000 */  nop   
/* 0046934C 45020003 */  bc1fl .L0046935C
/* 00469350 4604C03E */   c.le.s $f24, $f4
/* 00469354 46005606 */  mov.s $f24, $f10
/* 00469358 4604C03E */  c.le.s $f24, $f4
.L0046935C:
/* 0046935C 00000000 */  nop   
/* 00469360 45010012 */  bc1t  .L004693AC
/* 00469364 00000000 */   nop   
/* 00469368 46002606 */  mov.s $f24, $f4
/* 0046936C 1000000F */  b     .L004693AC
/* 00469370 00000000 */   nop   
.L00469374:
/* 00469374 8F8889AC */  lw     $t0, %got(graphhead)($gp)
/* 00469378 8F818A20 */  lw     $at, %got(movcostused)($gp)
/* 0046937C 8D080000 */  lw    $t0, ($t0)
/* 00469380 C4280000 */  lwc1  $f8, ($at)
/* 00469384 3C014F80 */  li    $at, 0x4F800000 # 4294967296.000000
/* 00469388 8D09002C */  lw    $t1, 0x2c($t0)
/* 0046938C 00095040 */  sll   $t2, $t1, 1
/* 00469390 448A8000 */  mtc1  $t2, $f16
/* 00469394 05410004 */  bgez  $t2, .L004693A8
/* 00469398 468084A0 */   cvt.s.w $f18, $f16
/* 0046939C 44813000 */  mtc1  $at, $f6
/* 004693A0 00000000 */  nop   
/* 004693A4 46069480 */  add.s $f18, $f18, $f6
.L004693A8:
/* 004693A8 46124602 */  mul.s $f24, $f8, $f18
.L004693AC:
/* 004693AC 8F858D44 */  lw     $a1, %got(firstparmreg)($gp)
/* 004693B0 8F848D60 */  lw     $a0, %got(unconstrain)($gp)
/* 004693B4 8CA20000 */  lw    $v0, ($a1)
/* 004693B8 8CA30004 */  lw    $v1, 4($a1)
/* 004693BC 04410002 */  bgez  $v0, .L004693C8
/* 004693C0 00405825 */   move  $t3, $v0
/* 004693C4 240B0000 */  li    $t3, 0
.L004693C8:
/* 004693C8 244C0003 */  addiu $t4, $v0, 3
/* 004693CC 258D0001 */  addiu $t5, $t4, 1
/* 004693D0 29A10021 */  slti  $at, $t5, 0x21
/* 004693D4 14200002 */  bnez  $at, .L004693E0
/* 004693D8 00000000 */   nop   
/* 004693DC 240D0020 */  li    $t5, 32
.L004693E0:
/* 004693E0 8F888D5C */  lw     $t0, %got(regscantpass)($gp)
/* 004693E4 016D7023 */  subu  $t6, $t3, $t5
/* 004693E8 000E7FC3 */  sra   $t7, $t6, 0x1f
/* 004693EC 8D080000 */  lw    $t0, ($t0)
/* 004693F0 01CFC004 */  sllv  $t8, $t7, $t6
/* 004693F4 2401FEFF */  li    $at, -257
/* 004693F8 0178C806 */  srlv  $t9, $t8, $t3
/* 004693FC 01014824 */  and   $t1, $t0, $at
/* 00469400 01395025 */  or    $t2, $t1, $t9
/* 00469404 04610002 */  bgez  $v1, .L00469410
/* 00469408 00606825 */   move  $t5, $v1
/* 0046940C 240D0000 */  li    $t5, 0
.L00469410:
/* 00469410 246F0001 */  addiu $t7, $v1, 1
/* 00469414 25EE0001 */  addiu $t6, $t7, 1
/* 00469418 29C10021 */  slti  $at, $t6, 0x21
/* 0046941C 54200003 */  bnezl $at, .L0046942C
/* 00469420 01AEC023 */   subu  $t8, $t5, $t6
/* 00469424 240E0020 */  li    $t6, 32
/* 00469428 01AEC023 */  subu  $t8, $t5, $t6
.L0046942C:
/* 0046942C 00185FC3 */  sra   $t3, $t8, 0x1f
/* 00469430 030B4004 */  sllv  $t0, $t3, $t8
/* 00469434 01A84806 */  srlv  $t1, $t0, $t5
/* 00469438 0149C825 */  or    $t9, $t2, $t1
/* 0046943C 244EFFE0 */  addiu $t6, $v0, -0x20
/* 00469440 05C10002 */  bgez  $t6, .L0046944C
/* 00469444 AFB900B8 */   sw    $t9, 0xb8($sp)
/* 00469448 240E0000 */  li    $t6, 0
.L0046944C:
/* 0046944C 258BFFE1 */  addiu $t3, $t4, -0x1f
/* 00469450 29610021 */  slti  $at, $t3, 0x21
/* 00469454 14200002 */  bnez  $at, .L00469460
/* 00469458 246CFFE0 */   addiu $t4, $v1, -0x20
/* 0046945C 240B0020 */  li    $t3, 32
.L00469460:
/* 00469460 8F898D5C */  lw     $t1, %got(regscantpass)($gp)
/* 00469464 01CBC023 */  subu  $t8, $t6, $t3
/* 00469468 001847C3 */  sra   $t0, $t8, 0x1f
/* 0046946C 8D290004 */  lw    $t1, 4($t1)
/* 00469470 03086804 */  sllv  $t5, $t0, $t8
/* 00469474 01CD5006 */  srlv  $t2, $t5, $t6
/* 00469478 05810002 */  bgez  $t4, .L00469484
/* 0046947C 012AC825 */   or    $t9, $t1, $t2
/* 00469480 240C0000 */  li    $t4, 0
.L00469484:
/* 00469484 25EBFFE1 */  addiu $t3, $t7, -0x1f
/* 00469488 29610021 */  slti  $at, $t3, 0x21
/* 0046948C 54200003 */  bnezl $at, .L0046949C
/* 00469490 018B4023 */   subu  $t0, $t4, $t3
/* 00469494 240B0020 */  li    $t3, 32
/* 00469498 018B4023 */  subu  $t0, $t4, $t3
.L0046949C:
/* 0046949C 0008C7C3 */  sra   $t8, $t0, 0x1f
/* 004694A0 01186804 */  sllv  $t5, $t8, $t0
/* 004694A4 018D7006 */  srlv  $t6, $t5, $t4
/* 004694A8 032E4825 */  or    $t1, $t9, $t6
/* 004694AC AC800000 */  sw    $zero, ($a0)
/* 004694B0 AC800004 */  sw    $zero, 4($a0)
/* 004694B4 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 004694B8 AFA900BC */  sw    $t1, 0xbc($sp)
/* 004694BC 0320F809 */  jalr  $t9
/* 004694C0 00000000 */   nop   
/* 004694C4 8FBC005C */  lw    $gp, 0x5c($sp)
/* 004694C8 8F8289E0 */  lw     $v0, %got(bitposcount)($gp)
/* 004694CC 8C420000 */  lw    $v0, ($v0)
/* 004694D0 2442FFFF */  addiu $v0, $v0, -1
/* 004694D4 0440005D */  bltz  $v0, .L0046964C
/* 004694D8 24420001 */   addiu $v0, $v0, 1
/* 004694DC AFA200AC */  sw    $v0, 0xac($sp)
/* 004694E0 AFA00110 */  sw    $zero, 0x110($sp)
/* 004694E4 8F918D28 */  lw     $s1, %got(iscolored12)($gp)
.L004694E8:
/* 004694E8 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 004694EC 8FA40110 */  lw    $a0, 0x110($sp)
/* 004694F0 02202825 */  move  $a1, $s1
/* 004694F4 0320F809 */  jalr  $t9
/* 004694F8 00000000 */   nop   
/* 004694FC 1040004E */  beqz  $v0, .L00469638
/* 00469500 8FBC005C */   lw    $gp, 0x5c($sp)
/* 00469504 8F8A89EC */  lw     $t2, %got(bittab)($gp)
/* 00469508 8FAF0110 */  lw    $t7, 0x110($sp)
/* 0046950C 8F9986BC */  lw    $t9, %call16(regclassof)($gp)
/* 00469510 8D4A0000 */  lw    $t2, ($t2)
/* 00469514 000F58C0 */  sll   $t3, $t7, 3
/* 00469518 014B1021 */  addu  $v0, $t2, $t3
/* 0046951C 8C550004 */  lw    $s5, 4($v0)
/* 00469520 AEA00028 */  sw    $zero, 0x28($s5)
/* 00469524 AEA0002C */  sw    $zero, 0x2c($s5)
/* 00469528 0320F809 */  jalr  $t9
/* 0046952C 8C440000 */   lw    $a0, ($v0)
/* 00469530 8EB00008 */  lw    $s0, 8($s5)
/* 00469534 8FBC005C */  lw    $gp, 0x5c($sp)
/* 00469538 0040B025 */  move  $s6, $v0
/* 0046953C 1200000B */  beqz  $s0, .L0046956C
/* 00469540 00000000 */   nop   
.L00469544:
/* 00469544 8F998508 */  lw    $t9, %call16(updateforbidden)($gp)
/* 00469548 8E040000 */  lw    $a0, ($s0)
/* 0046954C 92050013 */  lbu   $a1, 0x13($s0)
/* 00469550 02A03025 */  move  $a2, $s5
/* 00469554 0320F809 */  jalr  $t9
/* 00469558 02C03825 */   move  $a3, $s6
/* 0046955C 8E100004 */  lw    $s0, 4($s0)
/* 00469560 8FBC005C */  lw    $gp, 0x5c($sp)
/* 00469564 1600FFF7 */  bnez  $s0, .L00469544
/* 00469568 00000000 */   nop   
.L0046956C:
/* 0046956C 8F9981A0 */  lw    $t9, %call16(bvectempty)($gp)
/* 00469570 26B0000C */  addiu $s0, $s5, 0xc
/* 00469574 02002025 */  move  $a0, $s0
/* 00469578 0320F809 */  jalr  $t9
/* 0046957C 00000000 */   nop   
/* 00469580 1440001A */  bnez  $v0, .L004695EC
/* 00469584 8FBC005C */   lw    $gp, 0x5c($sp)
/* 00469588 8F9389B8 */  lw     $s3, %got(curstaticno)($gp)
/* 0046958C 00009025 */  move  $s2, $zero
/* 00469590 8E730000 */  lw    $s3, ($s3)
/* 00469594 26730000 */  addiu $s3, $s3, 0
.L00469598:
/* 00469598 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 0046959C 02402025 */  move  $a0, $s2
/* 004695A0 02002825 */  move  $a1, $s0
/* 004695A4 0320F809 */  jalr  $t9
/* 004695A8 00000000 */   nop   
/* 004695AC 1040000C */  beqz  $v0, .L004695E0
/* 004695B0 8FBC005C */   lw    $gp, 0x5c($sp)
/* 004695B4 8F988C68 */  lw     $t8, %got(bbtab)($gp)
/* 004695B8 8F998508 */  lw    $t9, %call16(updateforbidden)($gp)
/* 004695BC 00124080 */  sll   $t0, $s2, 2
/* 004695C0 8F180000 */  lw    $t8, ($t8)
/* 004695C4 00002825 */  move  $a1, $zero
/* 004695C8 02A03025 */  move  $a2, $s5
/* 004695CC 03086821 */  addu  $t5, $t8, $t0
/* 004695D0 8DA40000 */  lw    $a0, ($t5)
/* 004695D4 0320F809 */  jalr  $t9
/* 004695D8 02C03825 */   move  $a3, $s6
/* 004695DC 8FBC005C */  lw    $gp, 0x5c($sp)
.L004695E0:
/* 004695E0 26520001 */  addiu $s2, $s2, 1
/* 004695E4 1653FFEC */  bne   $s2, $s3, .L00469598
/* 004695E8 00000000 */   nop   
.L004695EC:
/* 004695EC 8F998504 */  lw    $t9, %call16(updatecolorsleft)($gp)
/* 004695F0 02A02025 */  move  $a0, $s5
/* 004695F4 02C02825 */  move  $a1, $s6
/* 004695F8 0320F809 */  jalr  $t9
/* 004695FC 00000000 */   nop   
/* 00469600 8FBC005C */  lw    $gp, 0x5c($sp)
/* 00469604 02A02025 */  move  $a0, $s5
/* 00469608 AFB50114 */  sw    $s5, 0x114($sp)
/* 0046960C 8F99852C */  lw    $t9, %call16(isconstrained)($gp)
/* 00469610 0320F809 */  jalr  $t9
/* 00469614 00000000 */   nop   
/* 00469618 14400007 */  bnez  $v0, .L00469638
/* 0046961C 8FBC005C */   lw    $gp, 0x5c($sp)
/* 00469620 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00469624 8F848D60 */  lw     $a0, %got(unconstrain)($gp)
/* 00469628 8FA50110 */  lw    $a1, 0x110($sp)
/* 0046962C 0320F809 */  jalr  $t9
/* 00469630 00000000 */   nop   
/* 00469634 8FBC005C */  lw    $gp, 0x5c($sp)
.L00469638:
/* 00469638 8FA20110 */  lw    $v0, 0x110($sp)
/* 0046963C 8FAC00AC */  lw    $t4, 0xac($sp)
/* 00469640 24420001 */  addiu $v0, $v0, 1
/* 00469644 144CFFA8 */  bne   $v0, $t4, .L004694E8
/* 00469648 AFA20110 */   sw    $v0, 0x110($sp)
.L0046964C:
/* 0046964C 8F848D64 */  lw     $a0, %got(colorcand)($gp)
/* 00469650 AC800000 */  sw    $zero, ($a0)
/* 00469654 AC800004 */  sw    $zero, 4($a0)
/* 00469658 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 0046965C 0320F809 */  jalr  $t9
/* 00469660 00000000 */   nop   
/* 00469664 8FBC005C */  lw    $gp, 0x5c($sp)
/* 00469668 240E0008 */  li    $t6, 8
/* 0046966C AFAE0088 */  sw    $t6, 0x88($sp)
/* 00469670 8F9989E0 */  lw     $t9, %got(bitposcount)($gp)
/* 00469674 8F8189E4 */  lw     $at, %got(oldbitposcount)($gp)
/* 00469678 8F898D78 */  lw     $t1, %got(iscolored)($gp)
/* 0046967C 8F390000 */  lw    $t9, ($t9)
/* 00469680 24160001 */  li    $s6, 1
/* 00469684 C7B600C0 */  lwc1  $f22, 0xc0($sp)
/* 00469688 AC390000 */  sw    $t9, ($at)
/* 0046968C 8F818044 */  lw    $at, %got(RO_1000D740)($gp)
/* 00469690 27BE0114 */  addiu $fp, $sp, 0x114
/* 00469694 8F978B20 */  lw     $s7, %got(outofmem)($gp)
/* 00469698 C43CD740 */  lwc1  $f28, %lo(RO_1000D740)($at)
/* 0046969C 8F818044 */  lw    $at, %got(RO_1000D744)($gp)
/* 004696A0 AFA90084 */  sw    $t1, 0x84($sp)
/* 004696A4 C43AD744 */  lwc1  $f26, %lo(RO_1000D744)($at)
.L004696A8:
/* 004696A8 24010001 */  li    $at, 1
/* 004696AC 12C10013 */  beq   $s6, $at, .L004696FC
/* 004696B0 00000000 */   nop   
/* 004696B4 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 004696B8 8FA40084 */  lw    $a0, 0x84($sp)
/* 004696BC 0320F809 */  jalr  $t9
/* 004696C0 00000000 */   nop   
/* 004696C4 8FBC005C */  lw    $gp, 0x5c($sp)
/* 004696C8 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 004696CC 8F848D60 */  lw     $a0, %got(unconstrain)($gp)
/* 004696D0 0320F809 */  jalr  $t9
/* 004696D4 00000000 */   nop   
/* 004696D8 8FBC005C */  lw    $gp, 0x5c($sp)
/* 004696DC 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 004696E0 8F848D64 */  lw     $a0, %got(colorcand)($gp)
/* 004696E4 0320F809 */  jalr  $t9
/* 004696E8 00000000 */   nop   
/* 004696EC 92EF0000 */  lbu   $t7, ($s7)
/* 004696F0 8FBC005C */  lw    $gp, 0x5c($sp)
/* 004696F4 55E008AA */  bnezl $t7, .L0046B9A0
/* 004696F8 8FBF0064 */   lw    $ra, 0x64($sp)
.L004696FC:
/* 004696FC 8F998194 */  lw    $t9, %call16(bvectcopy)($gp)
/* 00469700 8F848D64 */  lw     $a0, %got(colorcand)($gp)
/* 00469704 8FA50084 */  lw    $a1, 0x84($sp)
/* 00469708 0320F809 */  jalr  $t9
/* 0046970C 00000000 */   nop   
/* 00469710 8FBC005C */  lw    $gp, 0x5c($sp)
/* 00469714 8F9981AC */  lw    $t9, %call16(bvectminus)($gp)
/* 00469718 8F848D64 */  lw     $a0, %got(colorcand)($gp)
/* 0046971C 8F858D60 */  lw     $a1, %got(unconstrain)($gp)
/* 00469720 0320F809 */  jalr  $t9
/* 00469724 00000000 */   nop   
/* 00469728 8FBC005C */  lw    $gp, 0x5c($sp)
/* 0046972C 8F9981A0 */  lw    $t9, %call16(bvectempty)($gp)
/* 00469730 8F848D64 */  lw     $a0, %got(colorcand)($gp)
/* 00469734 0320F809 */  jalr  $t9
/* 00469738 00000000 */   nop   
/* 0046973C 144002CD */  bnez  $v0, .L0046A274
/* 00469740 8FBC005C */   lw    $gp, 0x5c($sp)
.L00469744:
/* 00469744 8F8B89E0 */  lw     $t3, %got(bitposcount)($gp)
/* 00469748 240AFFFF */  li    $t2, -1
/* 0046974C AFAA010C */  sw    $t2, 0x10c($sp)
/* 00469750 8D6B0000 */  lw    $t3, ($t3)
/* 00469754 4600D506 */  mov.s $f20, $f26
/* 00469758 5160007B */  beql  $t3, $zero, .L00469948
/* 0046975C 8FAE010C */   lw    $t6, 0x10c($sp)
/* 00469760 AFA00110 */  sw    $zero, 0x110($sp)
.L00469764:
/* 00469764 8F998170 */  lw    $t9, %call16(bvectin0)($gp)
/* 00469768 8FA40110 */  lw    $a0, 0x110($sp)
/* 0046976C 8F858D64 */  lw     $a1, %got(colorcand)($gp)
/* 00469770 0320F809 */  jalr  $t9
/* 00469774 00000000 */   nop   
/* 00469778 1040006B */  beqz  $v0, .L00469928
/* 0046977C 8FBC005C */   lw    $gp, 0x5c($sp)
/* 00469780 8F9889EC */  lw     $t8, %got(bittab)($gp)
/* 00469784 8FA80110 */  lw    $t0, 0x110($sp)
/* 00469788 8F180000 */  lw    $t8, ($t8)
/* 0046978C 000868C0 */  sll   $t5, $t0, 3
/* 00469790 030D6021 */  addu  $t4, $t8, $t5
/* 00469794 8D950004 */  lw    $s5, 4($t4)
/* 00469798 92A20023 */  lbu   $v0, 0x23($s5)
/* 0046979C 54400008 */  bnezl $v0, .L004697C0
/* 004697A0 24010002 */   li    $at, 2
/* 004697A4 8F998538 */  lw    $t9, %call16(compute_save)($gp)
/* 004697A8 02A02025 */  move  $a0, $s5
/* 004697AC 0320F809 */  jalr  $t9
/* 004697B0 00000000 */   nop   
/* 004697B4 8FBC005C */  lw    $gp, 0x5c($sp)
/* 004697B8 92A20023 */  lbu   $v0, 0x23($s5)
/* 004697BC 24010002 */  li    $at, 2
.L004697C0:
/* 004697C0 1441004B */  bne   $v0, $at, .L004698F0
/* 004697C4 AFB50114 */   sw    $s5, 0x114($sp)
/* 004697C8 8F998ADC */  lw     $t9, %got(dowhyuncolor)($gp)
/* 004697CC 93390000 */  lbu   $t9, ($t9)
/* 004697D0 13200006 */  beqz  $t9, .L004697EC
/* 004697D4 00000000 */   nop   
/* 004697D8 8F99853C */  lw    $t9, %call16(whyuncolored)($gp)
/* 004697DC 02A02025 */  move  $a0, $s5
/* 004697E0 0320F809 */  jalr  $t9
/* 004697E4 00000000 */   nop   
/* 004697E8 8FBC005C */  lw    $gp, 0x5c($sp)
.L004697EC:
/* 004697EC 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 004697F0 240EFFFF */  li    $t6, -1
/* 004697F4 A2AE0020 */  sb    $t6, 0x20($s5)
/* 004697F8 8F848D64 */  lw     $a0, %got(colorcand)($gp)
/* 004697FC 0320F809 */  jalr  $t9
/* 00469800 8FA50110 */   lw    $a1, 0x110($sp)
/* 00469804 8EB00038 */  lw    $s0, 0x38($s5)
/* 00469808 8FBC005C */  lw    $gp, 0x5c($sp)
/* 0046980C 24060004 */  li    $a2, 4
/* 00469810 1200000A */  beqz  $s0, .L0046983C
/* 00469814 2407000A */   li    $a3, 10
/* 00469818 8E020000 */  lw    $v0, ($s0)
.L0046981C:
/* 0046981C 50400005 */  beql  $v0, $zero, .L00469834
/* 00469820 8E100004 */   lw    $s0, 4($s0)
/* 00469824 8C490024 */  lw    $t1, 0x24($v0)
/* 00469828 252FFFFF */  addiu $t7, $t1, -1
/* 0046982C AC4F0024 */  sw    $t7, 0x24($v0)
/* 00469830 8E100004 */  lw    $s0, 4($s0)
.L00469834:
/* 00469834 5600FFF9 */  bnezl $s0, .L0046981C
/* 00469838 8E020000 */   lw    $v0, ($s0)
.L0046983C:
/* 0046983C 8F8A8A94 */  lw     $t2, %got(dbugno)($gp)
/* 00469840 24010006 */  li    $at, 6
/* 00469844 AFB50114 */  sw    $s5, 0x114($sp)
/* 00469848 8D4A0000 */  lw    $t2, ($t2)
/* 0046984C 55410029 */  bnel  $t2, $at, .L004698F4
/* 00469850 8FB50114 */   lw    $s5, 0x114($sp)
/* 00469854 8EAB0000 */  lw    $t3, ($s5)
/* 00469858 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0046985C 8F848CCC */  lw     $a0, %got(list)($gp)
/* 00469860 95650002 */  lhu   $a1, 2($t3)
/* 00469864 AFB50114 */  sw    $s5, 0x114($sp)
/* 00469868 0320F809 */  jalr  $t9
/* 0046986C 8C840000 */   lw    $a0, ($a0)
/* 00469870 8FBC005C */  lw    $gp, 0x5c($sp)
/* 00469874 2405003A */  li    $a1, 58
/* 00469878 24060001 */  li    $a2, 1
/* 0046987C 8F908CCC */  lw     $s0, %got(list)($gp)
/* 00469880 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 00469884 2407000A */  li    $a3, 10
/* 00469888 8E100000 */  lw    $s0, ($s0)
/* 0046988C 0320F809 */  jalr  $t9
/* 00469890 02002025 */   move  $a0, $s0
/* 00469894 8FBC005C */  lw    $gp, 0x5c($sp)
/* 00469898 02002025 */  move  $a0, $s0
/* 0046989C 8FA50110 */  lw    $a1, 0x110($sp)
/* 004698A0 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 004698A4 24060005 */  li    $a2, 5
/* 004698A8 2407000A */  li    $a3, 10
/* 004698AC 0320F809 */  jalr  $t9
/* 004698B0 00000000 */   nop   
/* 004698B4 8FBC005C */  lw    $gp, 0x5c($sp)
/* 004698B8 24060017 */  li    $a2, 23
/* 004698BC 24070017 */  li    $a3, 23
/* 004698C0 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 004698C4 8F848CCC */  lw     $a0, %got(list)($gp)
/* 004698C8 8F858044 */  lw    $a1, %got(RO_1000D729)($gp)
/* 004698CC 8C840000 */  lw    $a0, ($a0)
/* 004698D0 0320F809 */  jalr  $t9
/* 004698D4 24A5D729 */   addiu $a1, %lo(RO_1000D729) # addiu $a1, $a1, -0x28d7
/* 004698D8 8FBC005C */  lw    $gp, 0x5c($sp)
/* 004698DC 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 004698E0 8F848CCC */  lw     $a0, %got(list)($gp)
/* 004698E4 0320F809 */  jalr  $t9
/* 004698E8 8C840000 */   lw    $a0, ($a0)
/* 004698EC 8FBC005C */  lw    $gp, 0x5c($sp)
.L004698F0:
/* 004698F0 8FB50114 */  lw    $s5, 0x114($sp)
.L004698F4:
/* 004698F4 C6A00030 */  lwc1  $f0, 0x30($s5)
/* 004698F8 4600A03C */  c.lt.s $f20, $f0
/* 004698FC 00000000 */  nop   
/* 00469900 45000009 */  bc1f  .L00469928
/* 00469904 00000000 */   nop   
/* 00469908 92A80023 */  lbu   $t0, 0x23($s5)
/* 0046990C 24010001 */  li    $at, 1
/* 00469910 AFB50114 */  sw    $s5, 0x114($sp)
/* 00469914 15010004 */  bne   $t0, $at, .L00469928
/* 00469918 8FB80110 */   lw    $t8, 0x110($sp)
/* 0046991C 46000506 */  mov.s $f20, $f0
/* 00469920 AFB8010C */  sw    $t8, 0x10c($sp)
/* 00469924 AFB50114 */  sw    $s5, 0x114($sp)
.L00469928:
/* 00469928 8F9989E0 */  lw     $t9, %got(bitposcount)($gp)
/* 0046992C 8FAD0110 */  lw    $t5, 0x110($sp)
/* 00469930 8F390000 */  lw    $t9, ($t9)
/* 00469934 25AC0001 */  addiu $t4, $t5, 1
/* 00469938 AFAC0110 */  sw    $t4, 0x110($sp)
/* 0046993C 1599FF89 */  bne   $t4, $t9, .L00469764
/* 00469940 00000000 */   nop   
/* 00469944 8FAE010C */  lw    $t6, 0x10c($sp)
.L00469948:
/* 00469948 2401FFFF */  li    $at, -1
/* 0046994C 240BFFFF */  li    $t3, -1
/* 00469950 11C10248 */  beq   $t6, $at, .L0046A274
/* 00469954 000E78C0 */   sll   $t7, $t6, 3
/* 00469958 8F8989EC */  lw     $t1, %got(bittab)($gp)
/* 0046995C 8F828B00 */  lw     $v0, %got(o3opt)($gp)
/* 00469960 8F888D34 */  lw     $t0, %got(firsterreg)($gp)
/* 00469964 8D290000 */  lw    $t1, ($t1)
/* 00469968 8F8C8D38 */  lw     $t4, %got(firsteereg)($gp)
/* 0046996C 8F8D8D3C */  lw     $t5, %got(lasterreg)($gp)
/* 00469970 8F8E8D40 */  lw     $t6, %got(lasteereg)($gp)
/* 00469974 90420000 */  lbu   $v0, ($v0)
/* 00469978 00169880 */  sll   $s3, $s6, 2
/* 0046997C 012F5021 */  addu  $t2, $t1, $t7
/* 00469980 8D550004 */  lw    $s5, 4($t2)
/* 00469984 2508FFFC */  addiu $t0, $t0, -4
/* 00469988 258CFFFC */  addiu $t4, $t4, -4
/* 0046998C 026CC821 */  addu  $t9, $s3, $t4
/* 00469990 0268C021 */  addu  $t8, $s3, $t0
/* 00469994 25ADFFFC */  addiu $t5, $t5, -4
/* 00469998 25CEFFFC */  addiu $t6, $t6, -4
/* 0046999C 4600E506 */  mov.s $f20, $f28
/* 004699A0 AFAB00DC */  sw    $t3, 0xdc($sp)
/* 004699A4 026EA021 */  addu  $s4, $s3, $t6
/* 004699A8 026D8821 */  addu  $s1, $s3, $t5
/* 004699AC AFB80078 */  sw    $t8, 0x78($sp)
/* 004699B0 1440000B */  bnez  $v0, .L004699E0
/* 004699B4 AFB90070 */   sw    $t9, 0x70($sp)
/* 004699B8 8F998550 */  lw    $t9, %call16(cupcosts)($gp)
/* 004699BC 8F050000 */  lw    $a1, ($t8)
/* 004699C0 02A02025 */  move  $a0, $s5
/* 004699C4 24060001 */  li    $a2, 1
/* 004699C8 0320F809 */  jalr  $t9
/* 004699CC 24A50001 */   addiu $a1, $a1, 1
/* 004699D0 8FBC005C */  lw    $gp, 0x5c($sp)
/* 004699D4 46000586 */  mov.s $f22, $f0
/* 004699D8 8F828B00 */  lw     $v0, %got(o3opt)($gp)
/* 004699DC 90420000 */  lbu   $v0, ($v0)
.L004699E0:
/* 004699E0 8FAF0078 */  lw    $t7, 0x78($sp)
/* 004699E4 8E300000 */  lw    $s0, ($s1)
/* 004699E8 8DE30000 */  lw    $v1, ($t7)
/* 004699EC 0203082A */  slt   $at, $s0, $v1
/* 004699F0 14200042 */  bnez  $at, .L00469AFC
/* 004699F4 AFA300AC */   sw    $v1, 0xac($sp)
/* 004699F8 00609025 */  move  $s2, $v1
/* 004699FC 26100001 */  addiu $s0, $s0, 1
/* 00469A00 2E4A0040 */  sltiu $t2, $s2, 0x40
.L00469A04:
/* 00469A04 11400006 */  beqz  $t2, .L00469A20
/* 00469A08 00125943 */   sra   $t3, $s2, 5
/* 00469A0C 000B4080 */  sll   $t0, $t3, 2
/* 00469A10 02A8C021 */  addu  $t8, $s5, $t0
/* 00469A14 8F0D0028 */  lw    $t5, 0x28($t8)
/* 00469A18 024D6004 */  sllv  $t4, $t5, $s2
/* 00469A1C 298A0000 */  slti  $t2, $t4, 0
.L00469A20:
/* 00469A20 55400034 */  bnezl $t2, .L00469AF4
/* 00469A24 26520001 */   addiu $s2, $s2, 1
/* 00469A28 1440000D */  bnez  $v0, .L00469A60
/* 00469A2C 2E4E0040 */   sltiu $t6, $s2, 0x40
/* 00469A30 11C00007 */  beqz  $t6, .L00469A50
/* 00469A34 00124943 */   sra   $t1, $s2, 5
/* 00469A38 00097880 */  sll   $t7, $t1, 2
/* 00469A3C 27AB00B8 */  addiu $t3, $sp, 0xb8
/* 00469A40 01EB4021 */  addu  $t0, $t7, $t3
/* 00469A44 8D180000 */  lw    $t8, ($t0)
/* 00469A48 02586804 */  sllv  $t5, $t8, $s2
/* 00469A4C 29AE0000 */  slti  $t6, $t5, 0
.L00469A50:
/* 00469A50 15C00003 */  bnez  $t6, .L00469A60
/* 00469A54 00000000 */   nop   
/* 00469A58 1000000A */  b     .L00469A84
/* 00469A5C 4600B086 */   mov.s $f2, $f22
.L00469A60:
/* 00469A60 8F998550 */  lw    $t9, %call16(cupcosts)($gp)
/* 00469A64 02A02025 */  move  $a0, $s5
/* 00469A68 02402825 */  move  $a1, $s2
/* 00469A6C 0320F809 */  jalr  $t9
/* 00469A70 24060001 */   li    $a2, 1
/* 00469A74 8FBC005C */  lw    $gp, 0x5c($sp)
/* 00469A78 46000086 */  mov.s $f2, $f0
/* 00469A7C 8F828B00 */  lw     $v0, %got(o3opt)($gp)
/* 00469A80 90420000 */  lbu   $v0, ($v0)
.L00469A84:
/* 00469A84 4614103C */  c.lt.s $f2, $f20
/* 00469A88 2E590020 */  sltiu $t9, $s2, 0x20
/* 00469A8C 02405027 */  not   $t2, $s2
/* 00469A90 01594804 */  sllv  $t1, $t9, $t2
/* 00469A94 45000008 */  bc1f  .L00469AB8
/* 00469A98 264FFFE0 */   addiu $t7, $s2, -0x20
/* 00469A9C 2DEB0020 */  sltiu $t3, $t7, 0x20
/* 00469AA0 014B4004 */  sllv  $t0, $t3, $t2
/* 00469AA4 46001506 */  mov.s $f20, $f2
/* 00469AA8 AFB200DC */  sw    $s2, 0xdc($sp)
/* 00469AAC AFA800D8 */  sw    $t0, 0xd8($sp)
/* 00469AB0 1000000F */  b     .L00469AF0
/* 00469AB4 AFA900D4 */   sw    $t1, 0xd4($sp)
.L00469AB8:
/* 00469AB8 46141032 */  c.eq.s $f2, $f20
/* 00469ABC 2E580020 */  sltiu $t8, $s2, 0x20
/* 00469AC0 02406827 */  not   $t5, $s2
/* 00469AC4 01B86004 */  sllv  $t4, $t8, $t5
/* 00469AC8 45000009 */  bc1f  .L00469AF0
/* 00469ACC 8FAE00D4 */   lw    $t6, 0xd4($sp)
/* 00469AD0 8FAA00D8 */  lw    $t2, 0xd8($sp)
/* 00469AD4 2649FFE0 */  addiu $t1, $s2, -0x20
/* 00469AD8 2D2F0020 */  sltiu $t7, $t1, 0x20
/* 00469ADC 01AF5804 */  sllv  $t3, $t7, $t5
/* 00469AE0 01CCC825 */  or    $t9, $t6, $t4
/* 00469AE4 014B4025 */  or    $t0, $t2, $t3
/* 00469AE8 AFA800D8 */  sw    $t0, 0xd8($sp)
/* 00469AEC AFB900D4 */  sw    $t9, 0xd4($sp)
.L00469AF0:
/* 00469AF0 26520001 */  addiu $s2, $s2, 1
.L00469AF4:
/* 00469AF4 5650FFC3 */  bnel  $s2, $s0, .L00469A04
/* 00469AF8 2E4A0040 */   sltiu $t2, $s2, 0x40
.L00469AFC:
/* 00469AFC 14400008 */  bnez  $v0, .L00469B20
/* 00469B00 02A02025 */   move  $a0, $s5
/* 00469B04 8F998550 */  lw    $t9, %call16(cupcosts)($gp)
/* 00469B08 8FB80070 */  lw    $t8, 0x70($sp)
/* 00469B0C 00003025 */  move  $a2, $zero
/* 00469B10 0320F809 */  jalr  $t9
/* 00469B14 8F050000 */   lw    $a1, ($t8)
/* 00469B18 8FBC005C */  lw    $gp, 0x5c($sp)
/* 00469B1C 46000586 */  mov.s $f22, $f0
.L00469B20:
/* 00469B20 8FAE0070 */  lw    $t6, 0x70($sp)
/* 00469B24 8E900000 */  lw    $s0, ($s4)
/* 00469B28 8DC20000 */  lw    $v0, ($t6)
/* 00469B2C 0202082A */  slt   $at, $s0, $v0
/* 00469B30 14200065 */  bnez  $at, .L00469CC8
/* 00469B34 00409025 */   move  $s2, $v0
/* 00469B38 26100001 */  addiu $s0, $s0, 1
/* 00469B3C 2E4C0040 */  sltiu $t4, $s2, 0x40
.L00469B40:
/* 00469B40 11800006 */  beqz  $t4, .L00469B5C
/* 00469B44 0012C943 */   sra   $t9, $s2, 5
/* 00469B48 00194880 */  sll   $t1, $t9, 2
/* 00469B4C 02A97821 */  addu  $t7, $s5, $t1
/* 00469B50 8DED0028 */  lw    $t5, 0x28($t7)
/* 00469B54 024D5004 */  sllv  $t2, $t5, $s2
/* 00469B58 294C0000 */  slti  $t4, $t2, 0
.L00469B5C:
/* 00469B5C 55800058 */  bnezl $t4, .L00469CC0
/* 00469B60 26520001 */   addiu $s2, $s2, 1
/* 00469B64 8F888B00 */  lw     $t0, %got(o3opt)($gp)
/* 00469B68 2E580040 */  sltiu $t8, $s2, 0x40
/* 00469B6C 91080000 */  lbu   $t0, ($t0)
/* 00469B70 1500000F */  bnez  $t0, .L00469BB0
/* 00469B74 00000000 */   nop   
/* 00469B78 13000007 */  beqz  $t8, .L00469B98
/* 00469B7C 00127143 */   sra   $t6, $s2, 5
/* 00469B80 000EC880 */  sll   $t9, $t6, 2
/* 00469B84 27A900B8 */  addiu $t1, $sp, 0xb8
/* 00469B88 03297821 */  addu  $t7, $t9, $t1
/* 00469B8C 8DED0000 */  lw    $t5, ($t7)
/* 00469B90 024D5004 */  sllv  $t2, $t5, $s2
/* 00469B94 29580000 */  slti  $t8, $t2, 0
.L00469B98:
/* 00469B98 17000005 */  bnez  $t8, .L00469BB0
/* 00469B9C 00000000 */   nop   
/* 00469BA0 8F838B0C */  lw     $v1, %got(allcallersave)($gp)
/* 00469BA4 4600B086 */  mov.s $f2, $f22
/* 00469BA8 1000000A */  b     .L00469BD4
/* 00469BAC 90630000 */   lbu   $v1, ($v1)
.L00469BB0:
/* 00469BB0 8F998550 */  lw    $t9, %call16(cupcosts)($gp)
/* 00469BB4 02A02025 */  move  $a0, $s5
/* 00469BB8 02402825 */  move  $a1, $s2
/* 00469BBC 0320F809 */  jalr  $t9
/* 00469BC0 00003025 */   move  $a2, $zero
/* 00469BC4 8FBC005C */  lw    $gp, 0x5c($sp)
/* 00469BC8 46000086 */  mov.s $f2, $f0
/* 00469BCC 8F838B0C */  lw     $v1, %got(allcallersave)($gp)
/* 00469BD0 90630000 */  lbu   $v1, ($v1)
.L00469BD4:
/* 00469BD4 1060000F */  beqz  $v1, .L00469C14
/* 00469BD8 2E4C0040 */   sltiu $t4, $s2, 0x40
/* 00469BDC 11800008 */  beqz  $t4, .L00469C00
/* 00469BE0 00000000 */   nop   
/* 00469BE4 8F998D5C */  lw     $t9, %got(regscantpass)($gp)
/* 00469BE8 00124143 */  sra   $t0, $s2, 5
/* 00469BEC 00087080 */  sll   $t6, $t0, 2
/* 00469BF0 01D94821 */  addu  $t1, $t6, $t9
/* 00469BF4 8D2F0000 */  lw    $t7, ($t1)
/* 00469BF8 024F6804 */  sllv  $t5, $t7, $s2
/* 00469BFC 29AC0000 */  slti  $t4, $t5, 0
.L00469C00:
/* 00469C00 55800005 */  bnezl $t4, .L00469C18
/* 00469C04 2E580040 */   sltiu $t8, $s2, 0x40
/* 00469C08 8F8B8B10 */  lw     $t3, %got(propagate_ee_saves)($gp)
/* 00469C0C 916B0000 */  lbu   $t3, ($t3)
/* 00469C10 1560000F */  bnez  $t3, .L00469C50
.L00469C14:
/* 00469C14 2E580040 */   sltiu $t8, $s2, 0x40
.L00469C18:
/* 00469C18 1300000A */  beqz  $t8, .L00469C44
/* 00469C1C 8FA80088 */   lw    $t0, 0x88($sp)
/* 00469C20 8F8F8D88 */  lw     $t7, %got(usedeeregs)($gp)
/* 00469C24 00127143 */  sra   $t6, $s2, 5
/* 00469C28 000EC880 */  sll   $t9, $t6, 2
/* 00469C2C 01194821 */  addu  $t1, $t0, $t9
/* 00469C30 25EFFFF8 */  addiu $t7, $t7, -8
/* 00469C34 012F6821 */  addu  $t5, $t1, $t7
/* 00469C38 8DAA0000 */  lw    $t2, ($t5)
/* 00469C3C 024A6004 */  sllv  $t4, $t2, $s2
/* 00469C40 29980000 */  slti  $t8, $t4, 0
.L00469C44:
/* 00469C44 57000003 */  bnezl $t8, .L00469C54
/* 00469C48 4614103C */   c.lt.s $f2, $f20
/* 00469C4C 46181080 */  add.s $f2, $f2, $f24
.L00469C50:
/* 00469C50 4614103C */  c.lt.s $f2, $f20
.L00469C54:
/* 00469C54 2E4E0020 */  sltiu $t6, $s2, 0x20
/* 00469C58 02404027 */  not   $t0, $s2
/* 00469C5C 010EC804 */  sllv  $t9, $t6, $t0
/* 00469C60 45000008 */  bc1f  .L00469C84
/* 00469C64 2649FFE0 */   addiu $t1, $s2, -0x20
/* 00469C68 2D2F0020 */  sltiu $t7, $t1, 0x20
/* 00469C6C 010F6804 */  sllv  $t5, $t7, $t0
/* 00469C70 46001506 */  mov.s $f20, $f2
/* 00469C74 AFB200DC */  sw    $s2, 0xdc($sp)
/* 00469C78 AFAD00D8 */  sw    $t5, 0xd8($sp)
/* 00469C7C 1000000F */  b     .L00469CBC
/* 00469C80 AFB900D4 */   sw    $t9, 0xd4($sp)
.L00469C84:
/* 00469C84 46141032 */  c.eq.s $f2, $f20
/* 00469C88 2E4A0020 */  sltiu $t2, $s2, 0x20
/* 00469C8C 02406027 */  not   $t4, $s2
/* 00469C90 018A5804 */  sllv  $t3, $t2, $t4
/* 00469C94 45000009 */  bc1f  .L00469CBC
/* 00469C98 8FB800D4 */   lw    $t8, 0xd4($sp)
/* 00469C9C 8FA800D8 */  lw    $t0, 0xd8($sp)
/* 00469CA0 2659FFE0 */  addiu $t9, $s2, -0x20
/* 00469CA4 2F290020 */  sltiu $t1, $t9, 0x20
/* 00469CA8 01897804 */  sllv  $t7, $t1, $t4
/* 00469CAC 030B7025 */  or    $t6, $t8, $t3
/* 00469CB0 010F6825 */  or    $t5, $t0, $t7
/* 00469CB4 AFAD00D8 */  sw    $t5, 0xd8($sp)
/* 00469CB8 AFAE00D4 */  sw    $t6, 0xd4($sp)
.L00469CBC:
/* 00469CBC 26520001 */  addiu $s2, $s2, 1
.L00469CC0:
/* 00469CC0 5650FF9F */  bnel  $s2, $s0, .L00469B40
/* 00469CC4 2E4C0040 */   sltiu $t4, $s2, 0x40
.L00469CC8:
/* 00469CC8 8EAA001C */  lw    $t2, 0x1c($s5)
/* 00469CCC C6AA0030 */  lwc1  $f10, 0x30($s5)
/* 00469CD0 03C02025 */  move  $a0, $fp
/* 00469CD4 448A2000 */  mtc1  $t2, $f4
/* 00469CD8 27A50118 */  addiu $a1, $sp, 0x118
/* 00469CDC 46802420 */  cvt.s.w $f16, $f4
/* 00469CE0 46105182 */  mul.s $f6, $f10, $f16
/* 00469CE4 4614303E */  c.le.s $f6, $f20
/* 00469CE8 00000000 */  nop   
/* 00469CEC 45000015 */  bc1f  .L00469D44
/* 00469CF0 00000000 */   nop   
/* 00469CF4 8F99854C */  lw    $t9, %call16(split)($gp)
/* 00469CF8 AFB50114 */  sw    $s5, 0x114($sp)
/* 00469CFC 02C03025 */  move  $a2, $s6
/* 00469D00 0320F809 */  jalr  $t9
/* 00469D04 24070001 */   li    $a3, 1
/* 00469D08 92F80000 */  lbu   $t8, ($s7)
/* 00469D0C 8FBC005C */  lw    $gp, 0x5c($sp)
/* 00469D10 8FB10118 */  lw    $s1, 0x118($sp)
/* 00469D14 57000722 */  bnezl $t8, .L0046B9A0
/* 00469D18 8FBF0064 */   lw    $ra, 0x64($sp)
/* 00469D1C 822B0020 */  lb    $t3, 0x20($s1)
/* 00469D20 2401FFFF */  li    $at, -1
/* 00469D24 1161014D */  beq   $t3, $at, .L0046A25C
/* 00469D28 00000000 */   nop   
/* 00469D2C 8F998528 */  lw    $t9, %call16(updatelivran)($gp)
/* 00469D30 02202025 */  move  $a0, $s1
/* 00469D34 0320F809 */  jalr  $t9
/* 00469D38 00000000 */   nop   
/* 00469D3C 10000147 */  b     .L0046A25C
/* 00469D40 8FBC005C */   lw    $gp, 0x5c($sp)
.L00469D44:
/* 00469D44 8F8E8ADC */  lw     $t6, %got(dowhyuncolor)($gp)
/* 00469D48 91CE0000 */  lbu   $t6, ($t6)
/* 00469D4C 11C00014 */  beqz  $t6, .L00469DA0
/* 00469D50 00000000 */   nop   
/* 00469D54 8F828C14 */  lw     $v0, %got(numcoloredlr)($gp)
/* 00469D58 02A02025 */  move  $a0, $s5
/* 00469D5C 8C590000 */  lw    $t9, ($v0)
/* 00469D60 27290001 */  addiu $t1, $t9, 1
/* 00469D64 AC490000 */  sw    $t1, ($v0)
/* 00469D68 8F998540 */  lw    $t9, %call16(inc_allococ)($gp)
/* 00469D6C 0320F809 */  jalr  $t9
/* 00469D70 00000000 */   nop   
/* 00469D74 8FBC005C */  lw    $gp, 0x5c($sp)
/* 00469D78 02A02025 */  move  $a0, $s5
/* 00469D7C 8F998530 */  lw    $t9, %call16(contiguous)($gp)
/* 00469D80 0320F809 */  jalr  $t9
/* 00469D84 00000000 */   nop   
/* 00469D88 8FBC005C */  lw    $gp, 0x5c($sp)
/* 00469D8C 8F8C8C04 */  lw     $t4, %got(contiglr)($gp)
/* 00469D90 8F818C04 */  lw     $at, %got(contiglr)($gp)
/* 00469D94 8D8C0000 */  lw    $t4, ($t4)
/* 00469D98 01824021 */  addu  $t0, $t4, $v0
/* 00469D9C AC280000 */  sw    $t0, ($at)
.L00469DA0:
/* 00469DA0 8F838B0C */  lw     $v1, %got(allcallersave)($gp)
/* 00469DA4 8FAF00DC */  lw    $t7, 0xdc($sp)
/* 00469DA8 8FB900D8 */  lw    $t9, 0xd8($sp)
/* 00469DAC 90630000 */  lbu   $v1, ($v1)
/* 00469DB0 25EDFFE0 */  addiu $t5, $t7, -0x20
/* 00469DB4 2DAA0020 */  sltiu $t2, $t5, 0x20
/* 00469DB8 10600031 */  beqz  $v1, .L00469E80
/* 00469DBC 01E0C027 */   not   $t8, $t7
/* 00469DC0 030A5804 */  sllv  $t3, $t2, $t8
/* 00469DC4 8FB800D4 */  lw    $t8, 0xd4($sp)
/* 00469DC8 2DEC0020 */  sltiu $t4, $t7, 0x20
/* 00469DCC 01E04027 */  not   $t0, $t7
/* 00469DD0 010C6804 */  sllv  $t5, $t4, $t0
/* 00469DD4 01607027 */  not   $t6, $t3
/* 00469DD8 01A05027 */  not   $t2, $t5
/* 00469DDC 032E4824 */  and   $t1, $t9, $t6
/* 00469DE0 030A5824 */  and   $t3, $t8, $t2
/* 00469DE4 012BC825 */  or    $t9, $t1, $t3
/* 00469DE8 13200025 */  beqz  $t9, .L00469E80
/* 00469DEC 8FAE0078 */   lw    $t6, 0x78($sp)
/* 00469DF0 8DD20000 */  lw    $s2, ($t6)
/* 00469DF4 8E840000 */  lw    $a0, ($s4)
/* 00469DF8 00001025 */  move  $v0, $zero
/* 00469DFC 0092082A */  slt   $at, $a0, $s2
/* 00469E00 1420001C */  bnez  $at, .L00469E74
/* 00469E04 2E4F0040 */   sltiu $t7, $s2, 0x40
.L00469E08:
/* 00469E08 11E00007 */  beqz  $t7, .L00469E28
/* 00469E0C 00126143 */   sra   $t4, $s2, 5
/* 00469E10 000C4080 */  sll   $t0, $t4, 2
/* 00469E14 27AD00D4 */  addiu $t5, $sp, 0xd4
/* 00469E18 010DC021 */  addu  $t8, $t0, $t5
/* 00469E1C 8F0A0000 */  lw    $t2, ($t8)
/* 00469E20 024A4804 */  sllv  $t1, $t2, $s2
/* 00469E24 292F0000 */  slti  $t7, $t1, 0
.L00469E28:
/* 00469E28 15E00003 */  bnez  $t7, .L00469E38
/* 00469E2C 00000000 */   nop   
/* 00469E30 1000000B */  b     .L00469E60
/* 00469E34 26520001 */   addiu $s2, $s2, 1
.L00469E38:
/* 00469E38 8F998B6C */  lw     $t9, %got(curproc)($gp)
/* 00469E3C 8F390000 */  lw    $t9, ($t9)
/* 00469E40 8F2E0024 */  lw    $t6, 0x24($t9)
/* 00469E44 01D26021 */  addu  $t4, $t6, $s2
/* 00469E48 9188FFFF */  lbu   $t0, -1($t4)
/* 00469E4C 51000004 */  beql  $t0, $zero, .L00469E60
/* 00469E50 26520001 */   addiu $s2, $s2, 1
/* 00469E54 10000002 */  b     .L00469E60
/* 00469E58 24020001 */   li    $v0, 1
/* 00469E5C 26520001 */  addiu $s2, $s2, 1
.L00469E60:
/* 00469E60 0092082A */  slt   $at, $a0, $s2
/* 00469E64 14200003 */  bnez  $at, .L00469E74
/* 00469E68 00000000 */   nop   
/* 00469E6C 5040FFE6 */  beql  $v0, $zero, .L00469E08
/* 00469E70 2E4F0040 */   sltiu $t7, $s2, 0x40
.L00469E74:
/* 00469E74 50400003 */  beql  $v0, $zero, .L00469E84
/* 00469E78 8FB800DC */   lw    $t8, 0xdc($sp)
/* 00469E7C AFB200DC */  sw    $s2, 0xdc($sp)
.L00469E80:
/* 00469E80 8FB800DC */  lw    $t8, 0xdc($sp)
.L00469E84:
/* 00469E84 8FAD00DC */  lw    $t5, 0xdc($sp)
/* 00469E88 03004827 */  not   $t1, $t8
/* 00469E8C 270FFFE0 */  addiu $t7, $t8, -0x20
/* 00469E90 2DF90020 */  sltiu $t9, $t7, 0x20
/* 00469E94 2F0A0020 */  sltiu $t2, $t8, 0x20
/* 00469E98 012A5804 */  sllv  $t3, $t2, $t1
/* 00469E9C 01397004 */  sllv  $t6, $t9, $t1
/* 00469EA0 AFAE00EC */  sw    $t6, 0xec($sp)
/* 00469EA4 AFAB00E8 */  sw    $t3, 0xe8($sp)
/* 00469EA8 14600024 */  bnez  $v1, .L00469F3C
/* 00469EAC A2AD0020 */   sb    $t5, 0x20($s5)
/* 00469EB0 8FAC0070 */  lw    $t4, 0x70($sp)
/* 00469EB4 8D880000 */  lw    $t0, ($t4)
/* 00469EB8 0308082A */  slt   $at, $t8, $t0
/* 00469EBC 1020000A */  beqz  $at, .L00469EE8
/* 00469EC0 00000000 */   nop   
/* 00469EC4 8F8D8D50 */  lw     $t5, %got(highesterreg)($gp)
/* 00469EC8 25ADFFFC */  addiu $t5, $t5, -4
/* 00469ECC 026D1021 */  addu  $v0, $s3, $t5
/* 00469ED0 8C4A0000 */  lw    $t2, ($v0)
/* 00469ED4 0158082A */  slt   $at, $t2, $t8
/* 00469ED8 10200038 */  beqz  $at, .L00469FBC
/* 00469EDC 00000000 */   nop   
/* 00469EE0 10000036 */  b     .L00469FBC
/* 00469EE4 AC580000 */   sw    $t8, ($v0)
.L00469EE8:
/* 00469EE8 8F8B8D54 */  lw     $t3, %got(highesteereg)($gp)
/* 00469EEC 8F998D88 */  lw     $t9, %got(usedeeregs)($gp)
/* 00469EF0 8FAE00DC */  lw    $t6, 0xdc($sp)
/* 00469EF4 256BFFFC */  addiu $t3, $t3, -4
/* 00469EF8 026B1021 */  addu  $v0, $s3, $t3
/* 00469EFC 8C490000 */  lw    $t1, ($v0)
/* 00469F00 8FAF0088 */  lw    $t7, 0x88($sp)
/* 00469F04 2739FFF8 */  addiu $t9, $t9, -8
/* 00469F08 012E082A */  slt   $at, $t1, $t6
/* 00469F0C 10200002 */  beqz  $at, .L00469F18
/* 00469F10 01F91821 */   addu  $v1, $t7, $t9
/* 00469F14 AC4E0000 */  sw    $t6, ($v0)
.L00469F18:
/* 00469F18 8C6C0000 */  lw    $t4, ($v1)
/* 00469F1C 8FA800E8 */  lw    $t0, 0xe8($sp)
/* 00469F20 8C6A0004 */  lw    $t2, 4($v1)
/* 00469F24 8FB800EC */  lw    $t8, 0xec($sp)
/* 00469F28 01886825 */  or    $t5, $t4, $t0
/* 00469F2C AC6D0000 */  sw    $t5, ($v1)
/* 00469F30 01585825 */  or    $t3, $t2, $t8
/* 00469F34 10000021 */  b     .L00469FBC
/* 00469F38 AC6B0004 */   sw    $t3, 4($v1)
.L00469F3C:
/* 00469F3C 8F828A18 */  lw     $v0, %got(regsinclass1)($gp)
/* 00469F40 8FAF00DC */  lw    $t7, 0xdc($sp)
/* 00469F44 8C420000 */  lw    $v0, ($v0)
/* 00469F48 11E20008 */  beq   $t7, $v0, .L00469F6C
/* 00469F4C 00000000 */   nop   
/* 00469F50 8F998AFC */  lw     $t9, %got(someusefp)($gp)
/* 00469F54 25E90001 */  addiu $t1, $t7, 1
/* 00469F58 93390000 */  lbu   $t9, ($t9)
/* 00469F5C 13200010 */  beqz  $t9, .L00469FA0
/* 00469F60 00000000 */   nop   
/* 00469F64 1522000E */  bne   $t1, $v0, .L00469FA0
/* 00469F68 00000000 */   nop   
.L00469F6C:
/* 00469F6C 8F8E8D88 */  lw     $t6, %got(usedeeregs)($gp)
/* 00469F70 8FAC00E8 */  lw    $t4, 0xe8($sp)
/* 00469F74 8F818D88 */  lw     $at, %got(usedeeregs)($gp)
/* 00469F78 8DCE0000 */  lw    $t6, ($t6)
/* 00469F7C 8F8D8D88 */  lw     $t5, %got(usedeeregs)($gp)
/* 00469F80 8FAA00EC */  lw    $t2, 0xec($sp)
/* 00469F84 01CC4025 */  or    $t0, $t6, $t4
/* 00469F88 AC280000 */  sw    $t0, ($at)
/* 00469F8C 8DAD0004 */  lw    $t5, 4($t5)
/* 00469F90 8F818D88 */  lw     $at, %got(usedeeregs)($gp)
/* 00469F94 01AAC025 */  or    $t8, $t5, $t2
/* 00469F98 10000008 */  b     .L00469FBC
/* 00469F9C AC380004 */   sw    $t8, 4($at)
.L00469FA0:
/* 00469FA0 8F998B6C */  lw     $t9, %got(curproc)($gp)
/* 00469FA4 8FA900DC */  lw    $t1, 0xdc($sp)
/* 00469FA8 240B0001 */  li    $t3, 1
/* 00469FAC 8F390000 */  lw    $t9, ($t9)
/* 00469FB0 8F2F0024 */  lw    $t7, 0x24($t9)
/* 00469FB4 01E97021 */  addu  $t6, $t7, $t1
/* 00469FB8 A1CBFFFF */  sb    $t3, -1($t6)
.L00469FBC:
/* 00469FBC 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 00469FC0 8F848D64 */  lw     $a0, %got(colorcand)($gp)
/* 00469FC4 8FA5010C */  lw    $a1, 0x10c($sp)
/* 00469FC8 0320F809 */  jalr  $t9
/* 00469FCC 00000000 */   nop   
/* 00469FD0 8FBC005C */  lw    $gp, 0x5c($sp)
/* 00469FD4 24010006 */  li    $at, 6
/* 00469FD8 24060004 */  li    $a2, 4
/* 00469FDC 8F8C8A94 */  lw     $t4, %got(dbugno)($gp)
/* 00469FE0 2407000A */  li    $a3, 10
/* 00469FE4 8D8C0000 */  lw    $t4, ($t4)
/* 00469FE8 15810031 */  bne   $t4, $at, .L0046A0B0
/* 00469FEC 00000000 */   nop   
/* 00469FF0 8EA80000 */  lw    $t0, ($s5)
/* 00469FF4 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 00469FF8 8F848CCC */  lw     $a0, %got(list)($gp)
/* 00469FFC 95050002 */  lhu   $a1, 2($t0)
/* 0046A000 AFB50114 */  sw    $s5, 0x114($sp)
/* 0046A004 0320F809 */  jalr  $t9
/* 0046A008 8C840000 */   lw    $a0, ($a0)
/* 0046A00C 8FBC005C */  lw    $gp, 0x5c($sp)
/* 0046A010 2405003A */  li    $a1, 58
/* 0046A014 24060001 */  li    $a2, 1
/* 0046A018 8F908CCC */  lw     $s0, %got(list)($gp)
/* 0046A01C 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0046A020 2407000A */  li    $a3, 10
/* 0046A024 8E100000 */  lw    $s0, ($s0)
/* 0046A028 0320F809 */  jalr  $t9
/* 0046A02C 02002025 */   move  $a0, $s0
/* 0046A030 8FBC005C */  lw    $gp, 0x5c($sp)
/* 0046A034 8FB50114 */  lw    $s5, 0x114($sp)
/* 0046A038 02002025 */  move  $a0, $s0
/* 0046A03C 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0046A040 24060005 */  li    $a2, 5
/* 0046A044 2407000A */  li    $a3, 10
/* 0046A048 0320F809 */  jalr  $t9
/* 0046A04C 8EA50004 */   lw    $a1, 4($s5)
/* 0046A050 8FBC005C */  lw    $gp, 0x5c($sp)
/* 0046A054 24060017 */  li    $a2, 23
/* 0046A058 24070017 */  li    $a3, 23
/* 0046A05C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0046A060 8F848CCC */  lw     $a0, %got(list)($gp)
/* 0046A064 8F858044 */  lw    $a1, %got(RO_1000D712)($gp)
/* 0046A068 8C840000 */  lw    $a0, ($a0)
/* 0046A06C 0320F809 */  jalr  $t9
/* 0046A070 24A5D712 */   addiu $a1, %lo(RO_1000D712) # addiu $a1, $a1, -0x28ee
/* 0046A074 8FBC005C */  lw    $gp, 0x5c($sp)
/* 0046A078 8FA500DC */  lw    $a1, 0xdc($sp)
/* 0046A07C 24060004 */  li    $a2, 4
/* 0046A080 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0046A084 8F848CCC */  lw     $a0, %got(list)($gp)
/* 0046A088 2407000A */  li    $a3, 10
/* 0046A08C 0320F809 */  jalr  $t9
/* 0046A090 8C840000 */   lw    $a0, ($a0)
/* 0046A094 8FBC005C */  lw    $gp, 0x5c($sp)
/* 0046A098 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0046A09C 8F848CCC */  lw     $a0, %got(list)($gp)
/* 0046A0A0 0320F809 */  jalr  $t9
/* 0046A0A4 8C840000 */   lw    $a0, ($a0)
/* 0046A0A8 8FBC005C */  lw    $gp, 0x5c($sp)
/* 0046A0AC 8FB50114 */  lw    $s5, 0x114($sp)
.L0046A0B0:
/* 0046A0B0 8F9389B8 */  lw     $s3, %got(curstaticno)($gp)
/* 0046A0B4 00009025 */  move  $s2, $zero
/* 0046A0B8 26B40014 */  addiu $s4, $s5, 0x14
/* 0046A0BC 8E730000 */  lw    $s3, ($s3)
/* 0046A0C0 26730000 */  addiu $s3, $s3, 0
.L0046A0C4:
/* 0046A0C4 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 0046A0C8 02402025 */  move  $a0, $s2
/* 0046A0CC 02802825 */  move  $a1, $s4
/* 0046A0D0 0320F809 */  jalr  $t9
/* 0046A0D4 00000000 */   nop   
/* 0046A0D8 1040001D */  beqz  $v0, .L0046A150
/* 0046A0DC 8FBC005C */   lw    $gp, 0x5c($sp)
/* 0046A0E0 8F8D8C68 */  lw     $t5, %got(bbtab)($gp)
/* 0046A0E4 00125080 */  sll   $t2, $s2, 2
/* 0046A0E8 8FB900DC */  lw    $t9, 0xdc($sp)
/* 0046A0EC 8DAD0000 */  lw    $t5, ($t5)
/* 0046A0F0 00197880 */  sll   $t7, $t9, 2
/* 0046A0F4 01AAC021 */  addu  $t8, $t5, $t2
/* 0046A0F8 8F110000 */  lw    $s1, ($t8)
/* 0046A0FC 022F8021 */  addu  $s0, $s1, $t7
/* 0046A100 8E090040 */  lw    $t1, 0x40($s0)
/* 0046A104 51200007 */  beql  $t1, $zero, .L0046A124
/* 0046A108 8EAB0000 */   lw    $t3, ($s5)
/* 0046A10C 8F99861C */  lw    $t9, %call16(dbgerror)($gp)
/* 0046A110 240402CE */  li    $a0, 718
/* 0046A114 0320F809 */  jalr  $t9
/* 0046A118 00000000 */   nop   
/* 0046A11C 8FBC005C */  lw    $gp, 0x5c($sp)
/* 0046A120 8EAB0000 */  lw    $t3, ($s5)
.L0046A124:
/* 0046A124 8FAE0088 */  lw    $t6, 0x88($sp)
/* 0046A128 8FA800E8 */  lw    $t0, 0xe8($sp)
/* 0046A12C AE0B0040 */  sw    $t3, 0x40($s0)
/* 0046A130 022E1021 */  addu  $v0, $s1, $t6
/* 0046A134 8C4C002C */  lw    $t4, 0x2c($v0)
/* 0046A138 8C4A0030 */  lw    $t2, 0x30($v0)
/* 0046A13C 8FB800EC */  lw    $t8, 0xec($sp)
/* 0046A140 01886825 */  or    $t5, $t4, $t0
/* 0046A144 AC4D002C */  sw    $t5, 0x2c($v0)
/* 0046A148 0158C825 */  or    $t9, $t2, $t8
/* 0046A14C AC590030 */  sw    $t9, 0x30($v0)
.L0046A150:
/* 0046A150 26520001 */  addiu $s2, $s2, 1
/* 0046A154 1653FFDB */  bne   $s2, $s3, .L0046A0C4
/* 0046A158 00000000 */   nop   
/* 0046A15C 8EB00038 */  lw    $s0, 0x38($s5)
/* 0046A160 AFB50114 */  sw    $s5, 0x114($sp)
/* 0046A164 1200003D */  beqz  $s0, .L0046A25C
/* 0046A168 00000000 */   nop   
/* 0046A16C 8E020000 */  lw    $v0, ($s0)
.L0046A170:
/* 0046A170 50400038 */  beql  $v0, $zero, .L0046A254
/* 0046A174 8E100004 */   lw    $s0, 4($s0)
/* 0046A178 804F0020 */  lb    $t7, 0x20($v0)
/* 0046A17C 8FA900DC */  lw    $t1, 0xdc($sp)
/* 0046A180 00408825 */  move  $s1, $v0
/* 0046A184 15E00032 */  bnez  $t7, .L0046A250
/* 0046A188 2D2B0040 */   sltiu $t3, $t1, 0x40
/* 0046A18C 11600006 */  beqz  $t3, .L0046A1A8
/* 0046A190 00097143 */   sra   $t6, $t1, 5
/* 0046A194 000E6080 */  sll   $t4, $t6, 2
/* 0046A198 004C4021 */  addu  $t0, $v0, $t4
/* 0046A19C 8D0D0028 */  lw    $t5, 0x28($t0)
/* 0046A1A0 012D5004 */  sllv  $t2, $t5, $t1
/* 0046A1A4 294B0000 */  slti  $t3, $t2, 0
.L0046A1A8:
/* 0046A1A8 15600029 */  bnez  $t3, .L0046A250
/* 0046A1AC 8FAF00E8 */   lw    $t7, 0xe8($sp)
/* 0046A1B0 8E390028 */  lw    $t9, 0x28($s1)
/* 0046A1B4 8E2C002C */  lw    $t4, 0x2c($s1)
/* 0046A1B8 8FA800EC */  lw    $t0, 0xec($sp)
/* 0046A1BC 92290021 */  lbu   $t1, 0x21($s1)
/* 0046A1C0 032F7025 */  or    $t6, $t9, $t7
/* 0046A1C4 01886825 */  or    $t5, $t4, $t0
/* 0046A1C8 252AFFFF */  addiu $t2, $t1, -1
/* 0046A1CC 8F998548 */  lw    $t9, %call16(needsplit)($gp)
/* 0046A1D0 AE2D002C */  sw    $t5, 0x2c($s1)
/* 0046A1D4 AE2E0028 */  sw    $t6, 0x28($s1)
/* 0046A1D8 A22A0021 */  sb    $t2, 0x21($s1)
/* 0046A1DC 8E040000 */  lw    $a0, ($s0)
/* 0046A1E0 02C02825 */  move  $a1, $s6
/* 0046A1E4 0320F809 */  jalr  $t9
/* 0046A1E8 AFA40114 */   sw    $a0, 0x114($sp)
/* 0046A1EC 10400018 */  beqz  $v0, .L0046A250
/* 0046A1F0 8FBC005C */   lw    $gp, 0x5c($sp)
.L0046A1F4:
/* 0046A1F4 8F99854C */  lw    $t9, %call16(split)($gp)
/* 0046A1F8 03C02025 */  move  $a0, $fp
/* 0046A1FC 27A50118 */  addiu $a1, $sp, 0x118
/* 0046A200 02C03025 */  move  $a2, $s6
/* 0046A204 0320F809 */  jalr  $t9
/* 0046A208 00003825 */   move  $a3, $zero
/* 0046A20C 92F80000 */  lbu   $t8, ($s7)
/* 0046A210 8FBC005C */  lw    $gp, 0x5c($sp)
/* 0046A214 8FB10118 */  lw    $s1, 0x118($sp)
/* 0046A218 570005E1 */  bnezl $t8, .L0046B9A0
/* 0046A21C 8FBF0064 */   lw    $ra, 0x64($sp)
/* 0046A220 8F998548 */  lw    $t9, %call16(needsplit)($gp)
/* 0046A224 02202025 */  move  $a0, $s1
/* 0046A228 02C02825 */  move  $a1, $s6
/* 0046A22C 0320F809 */  jalr  $t9
/* 0046A230 AFB10114 */   sw    $s1, 0x114($sp)
/* 0046A234 1440FFEF */  bnez  $v0, .L0046A1F4
/* 0046A238 8FBC005C */   lw    $gp, 0x5c($sp)
/* 0046A23C 8F998528 */  lw    $t9, %call16(updatelivran)($gp)
/* 0046A240 02202025 */  move  $a0, $s1
/* 0046A244 0320F809 */  jalr  $t9
/* 0046A248 00000000 */   nop   
/* 0046A24C 8FBC005C */  lw    $gp, 0x5c($sp)
.L0046A250:
/* 0046A250 8E100004 */  lw    $s0, 4($s0)
.L0046A254:
/* 0046A254 5600FFC6 */  bnezl $s0, .L0046A170
/* 0046A258 8E020000 */   lw    $v0, ($s0)
.L0046A25C:
/* 0046A25C 8F9981A0 */  lw    $t9, %call16(bvectempty)($gp)
/* 0046A260 8F848D64 */  lw     $a0, %got(colorcand)($gp)
/* 0046A264 0320F809 */  jalr  $t9
/* 0046A268 00000000 */   nop   
/* 0046A26C 1040FD35 */  beqz  $v0, .L00469744
/* 0046A270 8FBC005C */   lw    $gp, 0x5c($sp)
.L0046A274:
/* 0046A274 8FAB0088 */  lw    $t3, 0x88($sp)
/* 0046A278 8FAF0084 */  lw    $t7, 0x84($sp)
/* 0046A27C 26D60001 */  addiu $s6, $s6, 1
/* 0046A280 24010003 */  li    $at, 3
/* 0046A284 25790008 */  addiu $t9, $t3, 8
/* 0046A288 25EE0008 */  addiu $t6, $t7, 8
/* 0046A28C AFAE0084 */  sw    $t6, 0x84($sp)
/* 0046A290 16C1FD05 */  bne   $s6, $at, .L004696A8
/* 0046A294 AFB90088 */   sw    $t9, 0x88($sp)
/* 0046A298 8F8289E0 */  lw     $v0, %got(bitposcount)($gp)
/* 0046A29C 8C420000 */  lw    $v0, ($v0)
/* 0046A2A0 2443FFFF */  addiu $v1, $v0, -1
/* 0046A2A4 04600283 */  bltz  $v1, .L0046ACB4
/* 0046A2A8 00000000 */   nop   
/* 0046A2AC 8F978D34 */  lw     $s7, %got(firsterreg)($gp)
/* 0046A2B0 24630001 */  addiu $v1, $v1, 1
/* 0046A2B4 AFA300AC */  sw    $v1, 0xac($sp)
/* 0046A2B8 AFA00110 */  sw    $zero, 0x110($sp)
/* 0046A2BC 8F9E8980 */  lw     $fp, %got(curblk)($gp)
/* 0046A2C0 26F7FFFC */  addiu $s7, $s7, -4
.L0046A2C4:
/* 0046A2C4 8F998170 */  lw    $t9, %call16(bvectin0)($gp)
/* 0046A2C8 8FA40110 */  lw    $a0, 0x110($sp)
/* 0046A2CC 8F858D60 */  lw     $a1, %got(unconstrain)($gp)
/* 0046A2D0 0320F809 */  jalr  $t9
/* 0046A2D4 00000000 */   nop   
/* 0046A2D8 10400271 */  beqz  $v0, .L0046ACA0
/* 0046A2DC 8FBC005C */   lw    $gp, 0x5c($sp)
/* 0046A2E0 8F8C89EC */  lw     $t4, %got(bittab)($gp)
/* 0046A2E4 8FA80110 */  lw    $t0, 0x110($sp)
/* 0046A2E8 8F9986BC */  lw    $t9, %call16(regclassof)($gp)
/* 0046A2EC 8D8C0000 */  lw    $t4, ($t4)
/* 0046A2F0 000868C0 */  sll   $t5, $t0, 3
/* 0046A2F4 8F818044 */  lw    $at, %got(RO_1000D748)($gp)
/* 0046A2F8 018D4821 */  addu  $t1, $t4, $t5
/* 0046A2FC 8D350004 */  lw    $s5, 4($t1)
/* 0046A300 240AFFFF */  li    $t2, -1
/* 0046A304 AFAA00DC */  sw    $t2, 0xdc($sp)
/* 0046A308 C434D748 */  lwc1  $f20, %lo(RO_1000D748)($at)
/* 0046A30C 0320F809 */  jalr  $t9
/* 0046A310 8EA40000 */   lw    $a0, ($s5)
/* 0046A314 82B80020 */  lb    $t8, 0x20($s5)
/* 0046A318 2401FFFF */  li    $at, -1
/* 0046A31C 8FBC005C */  lw    $gp, 0x5c($sp)
/* 0046A320 17010006 */  bne   $t8, $at, .L0046A33C
/* 0046A324 0040B025 */   move  $s6, $v0
/* 0046A328 8F99861C */  lw    $t9, %call16(dbgerror)($gp)
/* 0046A32C 24041C16 */  li    $a0, 7190
/* 0046A330 0320F809 */  jalr  $t9
/* 0046A334 00000000 */   nop   
/* 0046A338 8FBC005C */  lw    $gp, 0x5c($sp)
.L0046A33C:
/* 0046A33C 92AB0023 */  lbu   $t3, 0x23($s5)
/* 0046A340 15600006 */  bnez  $t3, .L0046A35C
/* 0046A344 00000000 */   nop   
/* 0046A348 8F998538 */  lw    $t9, %call16(compute_save)($gp)
/* 0046A34C 02A02025 */  move  $a0, $s5
/* 0046A350 0320F809 */  jalr  $t9
/* 0046A354 00000000 */   nop   
/* 0046A358 8FBC005C */  lw    $gp, 0x5c($sp)
.L0046A35C:
/* 0046A35C 8F828B00 */  lw     $v0, %got(o3opt)($gp)
/* 0046A360 0016C880 */  sll   $t9, $s6, 2
/* 0046A364 02F97821 */  addu  $t7, $s7, $t9
/* 0046A368 90420000 */  lbu   $v0, ($v0)
/* 0046A36C 02A02025 */  move  $a0, $s5
/* 0046A370 1440000A */  bnez  $v0, .L0046A39C
/* 0046A374 00000000 */   nop   
/* 0046A378 8F998550 */  lw    $t9, %call16(cupcosts)($gp)
/* 0046A37C 8DE50000 */  lw    $a1, ($t7)
/* 0046A380 24060001 */  li    $a2, 1
/* 0046A384 0320F809 */  jalr  $t9
/* 0046A388 24A50001 */   addiu $a1, $a1, 1
/* 0046A38C 8FBC005C */  lw    $gp, 0x5c($sp)
/* 0046A390 46000586 */  mov.s $f22, $f0
/* 0046A394 8F828B00 */  lw     $v0, %got(o3opt)($gp)
/* 0046A398 90420000 */  lbu   $v0, ($v0)
.L0046A39C:
/* 0046A39C 8F8C8D3C */  lw     $t4, %got(lasterreg)($gp)
/* 0046A3A0 00169880 */  sll   $s3, $s6, 2
/* 0046A3A4 02F37021 */  addu  $t6, $s7, $s3
/* 0046A3A8 AFAE0078 */  sw    $t6, 0x78($sp)
/* 0046A3AC 258CFFFC */  addiu $t4, $t4, -4
/* 0046A3B0 026C6821 */  addu  $t5, $s3, $t4
/* 0046A3B4 8DB10000 */  lw    $s1, ($t5)
/* 0046A3B8 8DD00000 */  lw    $s0, ($t6)
/* 0046A3BC 0230082A */  slt   $at, $s1, $s0
/* 0046A3C0 14200041 */  bnez  $at, .L0046A4C8
/* 0046A3C4 02009025 */   move  $s2, $s0
/* 0046A3C8 26310001 */  addiu $s1, $s1, 1
/* 0046A3CC 2E490040 */  sltiu $t1, $s2, 0x40
.L0046A3D0:
/* 0046A3D0 11200006 */  beqz  $t1, .L0046A3EC
/* 0046A3D4 00125143 */   sra   $t2, $s2, 5
/* 0046A3D8 000AC080 */  sll   $t8, $t2, 2
/* 0046A3DC 02B85821 */  addu  $t3, $s5, $t8
/* 0046A3E0 8D790028 */  lw    $t9, 0x28($t3)
/* 0046A3E4 02597804 */  sllv  $t7, $t9, $s2
/* 0046A3E8 29E90000 */  slti  $t1, $t7, 0
.L0046A3EC:
/* 0046A3EC 55200034 */  bnezl $t1, .L0046A4C0
/* 0046A3F0 26520001 */   addiu $s2, $s2, 1
/* 0046A3F4 1440000D */  bnez  $v0, .L0046A42C
/* 0046A3F8 2E480040 */   sltiu $t0, $s2, 0x40
/* 0046A3FC 11000007 */  beqz  $t0, .L0046A41C
/* 0046A400 00126143 */   sra   $t4, $s2, 5
/* 0046A404 000C6880 */  sll   $t5, $t4, 2
/* 0046A408 27AA00B8 */  addiu $t2, $sp, 0xb8
/* 0046A40C 01AAC021 */  addu  $t8, $t5, $t2
/* 0046A410 8F0B0000 */  lw    $t3, ($t8)
/* 0046A414 024BC804 */  sllv  $t9, $t3, $s2
/* 0046A418 2B280000 */  slti  $t0, $t9, 0
.L0046A41C:
/* 0046A41C 15000003 */  bnez  $t0, .L0046A42C
/* 0046A420 00000000 */   nop   
/* 0046A424 1000000A */  b     .L0046A450
/* 0046A428 4600B086 */   mov.s $f2, $f22
.L0046A42C:
/* 0046A42C 8F998550 */  lw    $t9, %call16(cupcosts)($gp)
/* 0046A430 02A02025 */  move  $a0, $s5
/* 0046A434 02402825 */  move  $a1, $s2
/* 0046A438 0320F809 */  jalr  $t9
/* 0046A43C 24060001 */   li    $a2, 1
/* 0046A440 8FBC005C */  lw    $gp, 0x5c($sp)
/* 0046A444 46000086 */  mov.s $f2, $f0
/* 0046A448 8F828B00 */  lw     $v0, %got(o3opt)($gp)
/* 0046A44C 90420000 */  lbu   $v0, ($v0)
.L0046A450:
/* 0046A450 4614103C */  c.lt.s $f2, $f20
/* 0046A454 2E4E0020 */  sltiu $t6, $s2, 0x20
/* 0046A458 02404827 */  not   $t1, $s2
/* 0046A45C 012E6004 */  sllv  $t4, $t6, $t1
/* 0046A460 45000008 */  bc1f  .L0046A484
/* 0046A464 264DFFE0 */   addiu $t5, $s2, -0x20
/* 0046A468 2DAA0020 */  sltiu $t2, $t5, 0x20
/* 0046A46C 012AC004 */  sllv  $t8, $t2, $t1
/* 0046A470 46001506 */  mov.s $f20, $f2
/* 0046A474 AFB200DC */  sw    $s2, 0xdc($sp)
/* 0046A478 AFB800D8 */  sw    $t8, 0xd8($sp)
/* 0046A47C 1000000F */  b     .L0046A4BC
/* 0046A480 AFAC00D4 */   sw    $t4, 0xd4($sp)
.L0046A484:
/* 0046A484 46141032 */  c.eq.s $f2, $f20
/* 0046A488 2E4B0020 */  sltiu $t3, $s2, 0x20
/* 0046A48C 0240C827 */  not   $t9, $s2
/* 0046A490 032B7804 */  sllv  $t7, $t3, $t9
/* 0046A494 45000009 */  bc1f  .L0046A4BC
/* 0046A498 8FA800D4 */   lw    $t0, 0xd4($sp)
/* 0046A49C 8FA900D8 */  lw    $t1, 0xd8($sp)
/* 0046A4A0 264CFFE0 */  addiu $t4, $s2, -0x20
/* 0046A4A4 2D8D0020 */  sltiu $t5, $t4, 0x20
/* 0046A4A8 032D5004 */  sllv  $t2, $t5, $t9
/* 0046A4AC 010F7025 */  or    $t6, $t0, $t7
/* 0046A4B0 012AC025 */  or    $t8, $t1, $t2
/* 0046A4B4 AFB800D8 */  sw    $t8, 0xd8($sp)
/* 0046A4B8 AFAE00D4 */  sw    $t6, 0xd4($sp)
.L0046A4BC:
/* 0046A4BC 26520001 */  addiu $s2, $s2, 1
.L0046A4C0:
/* 0046A4C0 5651FFC3 */  bnel  $s2, $s1, .L0046A3D0
/* 0046A4C4 2E490040 */   sltiu $t1, $s2, 0x40
.L0046A4C8:
/* 0046A4C8 1440000A */  bnez  $v0, .L0046A4F4
/* 0046A4CC 02A02025 */   move  $a0, $s5
/* 0046A4D0 8F8B8D38 */  lw     $t3, %got(firsteereg)($gp)
/* 0046A4D4 8F998550 */  lw    $t9, %call16(cupcosts)($gp)
/* 0046A4D8 00003025 */  move  $a2, $zero
/* 0046A4DC 256BFFFC */  addiu $t3, $t3, -4
/* 0046A4E0 026B4021 */  addu  $t0, $s3, $t3
/* 0046A4E4 0320F809 */  jalr  $t9
/* 0046A4E8 8D050000 */   lw    $a1, ($t0)
/* 0046A4EC 8FBC005C */  lw    $gp, 0x5c($sp)
/* 0046A4F0 46000586 */  mov.s $f22, $f0
.L0046A4F4:
/* 0046A4F4 8F8F8D38 */  lw     $t7, %got(firsteereg)($gp)
/* 0046A4F8 8F8D8D40 */  lw     $t5, %got(lasteereg)($gp)
/* 0046A4FC 25EFFFFC */  addiu $t7, $t7, -4
/* 0046A500 026F7021 */  addu  $t6, $s3, $t7
/* 0046A504 25ADFFFC */  addiu $t5, $t5, -4
/* 0046A508 026DA021 */  addu  $s4, $s3, $t5
/* 0046A50C AFAE0070 */  sw    $t6, 0x70($sp)
/* 0046A510 8DD00000 */  lw    $s0, ($t6)
/* 0046A514 8E910000 */  lw    $s1, ($s4)
/* 0046A518 02009025 */  move  $s2, $s0
/* 0046A51C 0230082A */  slt   $at, $s1, $s0
/* 0046A520 14200064 */  bnez  $at, .L0046A6B4
/* 0046A524 26310001 */   addiu $s1, $s1, 1
/* 0046A528 2E590040 */  sltiu $t9, $s2, 0x40
.L0046A52C:
/* 0046A52C 13200006 */  beqz  $t9, .L0046A548
/* 0046A530 00124943 */   sra   $t1, $s2, 5
/* 0046A534 00095080 */  sll   $t2, $t1, 2
/* 0046A538 02AAC021 */  addu  $t8, $s5, $t2
/* 0046A53C 8F0B0028 */  lw    $t3, 0x28($t8)
/* 0046A540 024B4004 */  sllv  $t0, $t3, $s2
/* 0046A544 29190000 */  slti  $t9, $t0, 0
.L0046A548:
/* 0046A548 57200058 */  bnezl $t9, .L0046A6AC
/* 0046A54C 26520001 */   addiu $s2, $s2, 1
/* 0046A550 8F8E8B00 */  lw     $t6, %got(o3opt)($gp)
/* 0046A554 2E4C0040 */  sltiu $t4, $s2, 0x40
/* 0046A558 91CE0000 */  lbu   $t6, ($t6)
/* 0046A55C 15C0000F */  bnez  $t6, .L0046A59C
/* 0046A560 00000000 */   nop   
/* 0046A564 11800007 */  beqz  $t4, .L0046A584
/* 0046A568 00126943 */   sra   $t5, $s2, 5
/* 0046A56C 000D4880 */  sll   $t1, $t5, 2
/* 0046A570 27AA00B8 */  addiu $t2, $sp, 0xb8
/* 0046A574 012AC021 */  addu  $t8, $t1, $t2
/* 0046A578 8F0B0000 */  lw    $t3, ($t8)
/* 0046A57C 024B4004 */  sllv  $t0, $t3, $s2
/* 0046A580 290C0000 */  slti  $t4, $t0, 0
.L0046A584:
/* 0046A584 15800005 */  bnez  $t4, .L0046A59C
/* 0046A588 00000000 */   nop   
/* 0046A58C 8F838B0C */  lw     $v1, %got(allcallersave)($gp)
/* 0046A590 4600B086 */  mov.s $f2, $f22
/* 0046A594 1000000A */  b     .L0046A5C0
/* 0046A598 90630000 */   lbu   $v1, ($v1)
.L0046A59C:
/* 0046A59C 8F998550 */  lw    $t9, %call16(cupcosts)($gp)
/* 0046A5A0 02A02025 */  move  $a0, $s5
/* 0046A5A4 02402825 */  move  $a1, $s2
/* 0046A5A8 0320F809 */  jalr  $t9
/* 0046A5AC 00003025 */   move  $a2, $zero
/* 0046A5B0 8FBC005C */  lw    $gp, 0x5c($sp)
/* 0046A5B4 46000086 */  mov.s $f2, $f0
/* 0046A5B8 8F838B0C */  lw     $v1, %got(allcallersave)($gp)
/* 0046A5BC 90630000 */  lbu   $v1, ($v1)
.L0046A5C0:
/* 0046A5C0 1060000F */  beqz  $v1, .L0046A600
/* 0046A5C4 2E590040 */   sltiu $t9, $s2, 0x40
/* 0046A5C8 13200008 */  beqz  $t9, .L0046A5EC
/* 0046A5CC 00000000 */   nop   
/* 0046A5D0 8F898D5C */  lw     $t1, %got(regscantpass)($gp)
/* 0046A5D4 00127143 */  sra   $t6, $s2, 5
/* 0046A5D8 000E6880 */  sll   $t5, $t6, 2
/* 0046A5DC 01A95021 */  addu  $t2, $t5, $t1
/* 0046A5E0 8D580000 */  lw    $t8, ($t2)
/* 0046A5E4 02585804 */  sllv  $t3, $t8, $s2
/* 0046A5E8 29790000 */  slti  $t9, $t3, 0
.L0046A5EC:
/* 0046A5EC 57200005 */  bnezl $t9, .L0046A604
/* 0046A5F0 2E4C0040 */   sltiu $t4, $s2, 0x40
/* 0046A5F4 8F8F8B10 */  lw     $t7, %got(propagate_ee_saves)($gp)
/* 0046A5F8 91EF0000 */  lbu   $t7, ($t7)
/* 0046A5FC 15E0000F */  bnez  $t7, .L0046A63C
.L0046A600:
/* 0046A600 2E4C0040 */   sltiu $t4, $s2, 0x40
.L0046A604:
/* 0046A604 1180000A */  beqz  $t4, .L0046A630
/* 0046A608 001670C0 */   sll   $t6, $s6, 3
/* 0046A60C 8F988D88 */  lw     $t8, %got(usedeeregs)($gp)
/* 0046A610 00126943 */  sra   $t5, $s2, 5
/* 0046A614 000D4880 */  sll   $t1, $t5, 2
/* 0046A618 01C95021 */  addu  $t2, $t6, $t1
/* 0046A61C 2718FFF8 */  addiu $t8, $t8, -8
/* 0046A620 01585821 */  addu  $t3, $t2, $t8
/* 0046A624 8D680000 */  lw    $t0, ($t3)
/* 0046A628 0248C804 */  sllv  $t9, $t0, $s2
/* 0046A62C 2B2C0000 */  slti  $t4, $t9, 0
.L0046A630:
/* 0046A630 55800003 */  bnezl $t4, .L0046A640
/* 0046A634 4614103C */   c.lt.s $f2, $f20
/* 0046A638 46181080 */  add.s $f2, $f2, $f24
.L0046A63C:
/* 0046A63C 4614103C */  c.lt.s $f2, $f20
.L0046A640:
/* 0046A640 2E4D0020 */  sltiu $t5, $s2, 0x20
/* 0046A644 02407027 */  not   $t6, $s2
/* 0046A648 01CD4804 */  sllv  $t1, $t5, $t6
/* 0046A64C 45000008 */  bc1f  .L0046A670
/* 0046A650 264AFFE0 */   addiu $t2, $s2, -0x20
/* 0046A654 2D580020 */  sltiu $t8, $t2, 0x20
/* 0046A658 01D85804 */  sllv  $t3, $t8, $t6
/* 0046A65C 46001506 */  mov.s $f20, $f2
/* 0046A660 AFB200DC */  sw    $s2, 0xdc($sp)
/* 0046A664 AFAB00D8 */  sw    $t3, 0xd8($sp)
/* 0046A668 1000000F */  b     .L0046A6A8
/* 0046A66C AFA900D4 */   sw    $t1, 0xd4($sp)
.L0046A670:
/* 0046A670 46141032 */  c.eq.s $f2, $f20
/* 0046A674 2E480020 */  sltiu $t0, $s2, 0x20
/* 0046A678 0240C827 */  not   $t9, $s2
/* 0046A67C 03287804 */  sllv  $t7, $t0, $t9
/* 0046A680 45000009 */  bc1f  .L0046A6A8
/* 0046A684 8FAC00D4 */   lw    $t4, 0xd4($sp)
/* 0046A688 8FAE00D8 */  lw    $t6, 0xd8($sp)
/* 0046A68C 2649FFE0 */  addiu $t1, $s2, -0x20
/* 0046A690 2D2A0020 */  sltiu $t2, $t1, 0x20
/* 0046A694 032AC004 */  sllv  $t8, $t2, $t9
/* 0046A698 018F6825 */  or    $t5, $t4, $t7
/* 0046A69C 01D85825 */  or    $t3, $t6, $t8
/* 0046A6A0 AFAB00D8 */  sw    $t3, 0xd8($sp)
/* 0046A6A4 AFAD00D4 */  sw    $t5, 0xd4($sp)
.L0046A6A8:
/* 0046A6A8 26520001 */  addiu $s2, $s2, 1
.L0046A6AC:
/* 0046A6AC 5651FF9F */  bnel  $s2, $s1, .L0046A52C
/* 0046A6B0 2E590040 */   sltiu $t9, $s2, 0x40
.L0046A6B4:
/* 0046A6B4 8EA8001C */  lw    $t0, 0x1c($s5)
/* 0046A6B8 C6A80030 */  lwc1  $f8, 0x30($s5)
/* 0046A6BC 44889000 */  mtc1  $t0, $f18
/* 0046A6C0 00000000 */  nop   
/* 0046A6C4 46809120 */  cvt.s.w $f4, $f18
/* 0046A6C8 46044282 */  mul.s $f10, $f8, $f4
/* 0046A6CC 460AA03C */  c.lt.s $f20, $f10
/* 0046A6D0 00000000 */  nop   
/* 0046A6D4 45000153 */  bc1f  .L0046AC24
/* 0046A6D8 00000000 */   nop   
/* 0046A6DC 92AC0023 */  lbu   $t4, 0x23($s5)
/* 0046A6E0 24010001 */  li    $at, 1
/* 0046A6E4 1581014F */  bne   $t4, $at, .L0046AC24
/* 0046A6E8 00000000 */   nop   
/* 0046A6EC 8F8F8ADC */  lw     $t7, %got(dowhyuncolor)($gp)
/* 0046A6F0 91EF0000 */  lbu   $t7, ($t7)
/* 0046A6F4 11E00014 */  beqz  $t7, .L0046A748
/* 0046A6F8 00000000 */   nop   
/* 0046A6FC 8F828C14 */  lw     $v0, %got(numcoloredlr)($gp)
/* 0046A700 02A02025 */  move  $a0, $s5
/* 0046A704 8C4D0000 */  lw    $t5, ($v0)
/* 0046A708 25A90001 */  addiu $t1, $t5, 1
/* 0046A70C AC490000 */  sw    $t1, ($v0)
/* 0046A710 8F998540 */  lw    $t9, %call16(inc_allococ)($gp)
/* 0046A714 0320F809 */  jalr  $t9
/* 0046A718 00000000 */   nop   
/* 0046A71C 8FBC005C */  lw    $gp, 0x5c($sp)
/* 0046A720 02A02025 */  move  $a0, $s5
/* 0046A724 8F998530 */  lw    $t9, %call16(contiguous)($gp)
/* 0046A728 0320F809 */  jalr  $t9
/* 0046A72C 00000000 */   nop   
/* 0046A730 8FBC005C */  lw    $gp, 0x5c($sp)
/* 0046A734 8F8A8C04 */  lw     $t2, %got(contiglr)($gp)
/* 0046A738 8F818C04 */  lw     $at, %got(contiglr)($gp)
/* 0046A73C 8D4A0000 */  lw    $t2, ($t2)
/* 0046A740 0142C821 */  addu  $t9, $t2, $v0
/* 0046A744 AC390000 */  sw    $t9, ($at)
.L0046A748:
/* 0046A748 8F838B0C */  lw     $v1, %got(allcallersave)($gp)
/* 0046A74C 8FAE00DC */  lw    $t6, 0xdc($sp)
/* 0046A750 8FAD00D8 */  lw    $t5, 0xd8($sp)
/* 0046A754 90630000 */  lbu   $v1, ($v1)
/* 0046A758 25D8FFE0 */  addiu $t8, $t6, -0x20
/* 0046A75C 2F0B0020 */  sltiu $t3, $t8, 0x20
/* 0046A760 10600031 */  beqz  $v1, .L0046A828
/* 0046A764 01C04027 */   not   $t0, $t6
/* 0046A768 010B6004 */  sllv  $t4, $t3, $t0
/* 0046A76C 8FA800D4 */  lw    $t0, 0xd4($sp)
/* 0046A770 2DCA0020 */  sltiu $t2, $t6, 0x20
/* 0046A774 01C0C827 */  not   $t9, $t6
/* 0046A778 032AC004 */  sllv  $t8, $t2, $t9
/* 0046A77C 01807827 */  not   $t7, $t4
/* 0046A780 03005827 */  not   $t3, $t8
/* 0046A784 01AF4824 */  and   $t1, $t5, $t7
/* 0046A788 010B6024 */  and   $t4, $t0, $t3
/* 0046A78C 012C6825 */  or    $t5, $t1, $t4
/* 0046A790 11A00025 */  beqz  $t5, .L0046A828
/* 0046A794 8FAF0078 */   lw    $t7, 0x78($sp)
/* 0046A798 8DF20000 */  lw    $s2, ($t7)
/* 0046A79C 8E840000 */  lw    $a0, ($s4)
/* 0046A7A0 00001025 */  move  $v0, $zero
/* 0046A7A4 0092082A */  slt   $at, $a0, $s2
/* 0046A7A8 1420001C */  bnez  $at, .L0046A81C
/* 0046A7AC 2E4E0040 */   sltiu $t6, $s2, 0x40
.L0046A7B0:
/* 0046A7B0 11C00007 */  beqz  $t6, .L0046A7D0
/* 0046A7B4 00125143 */   sra   $t2, $s2, 5
/* 0046A7B8 000AC880 */  sll   $t9, $t2, 2
/* 0046A7BC 27B800D4 */  addiu $t8, $sp, 0xd4
/* 0046A7C0 03384021 */  addu  $t0, $t9, $t8
/* 0046A7C4 8D0B0000 */  lw    $t3, ($t0)
/* 0046A7C8 024B4804 */  sllv  $t1, $t3, $s2
/* 0046A7CC 292E0000 */  slti  $t6, $t1, 0
.L0046A7D0:
/* 0046A7D0 15C00003 */  bnez  $t6, .L0046A7E0
/* 0046A7D4 00000000 */   nop   
/* 0046A7D8 1000000B */  b     .L0046A808
/* 0046A7DC 26520001 */   addiu $s2, $s2, 1
.L0046A7E0:
/* 0046A7E0 8F8D8B6C */  lw     $t5, %got(curproc)($gp)
/* 0046A7E4 8DAD0000 */  lw    $t5, ($t5)
/* 0046A7E8 8DAF0024 */  lw    $t7, 0x24($t5)
/* 0046A7EC 01F25021 */  addu  $t2, $t7, $s2
/* 0046A7F0 9159FFFF */  lbu   $t9, -1($t2)
/* 0046A7F4 53200004 */  beql  $t9, $zero, .L0046A808
/* 0046A7F8 26520001 */   addiu $s2, $s2, 1
/* 0046A7FC 10000002 */  b     .L0046A808
/* 0046A800 24020001 */   li    $v0, 1
/* 0046A804 26520001 */  addiu $s2, $s2, 1
.L0046A808:
/* 0046A808 0092082A */  slt   $at, $a0, $s2
/* 0046A80C 14200003 */  bnez  $at, .L0046A81C
/* 0046A810 00000000 */   nop   
/* 0046A814 5040FFE6 */  beql  $v0, $zero, .L0046A7B0
/* 0046A818 2E4E0040 */   sltiu $t6, $s2, 0x40
.L0046A81C:
/* 0046A81C 50400003 */  beql  $v0, $zero, .L0046A82C
/* 0046A820 8FA800DC */   lw    $t0, 0xdc($sp)
/* 0046A824 AFB200DC */  sw    $s2, 0xdc($sp)
.L0046A828:
/* 0046A828 8FA800DC */  lw    $t0, 0xdc($sp)
.L0046A82C:
/* 0046A82C 8FB800DC */  lw    $t8, 0xdc($sp)
/* 0046A830 01004827 */  not   $t1, $t0
/* 0046A834 250EFFE0 */  addiu $t6, $t0, -0x20
/* 0046A838 2DCD0020 */  sltiu $t5, $t6, 0x20
/* 0046A83C 2D0B0020 */  sltiu $t3, $t0, 0x20
/* 0046A840 012B6004 */  sllv  $t4, $t3, $t1
/* 0046A844 012D7804 */  sllv  $t7, $t5, $t1
/* 0046A848 AFAF00EC */  sw    $t7, 0xec($sp)
/* 0046A84C AFAC00E8 */  sw    $t4, 0xe8($sp)
/* 0046A850 14600024 */  bnez  $v1, .L0046A8E4
/* 0046A854 A2B80020 */   sb    $t8, 0x20($s5)
/* 0046A858 8FAA0070 */  lw    $t2, 0x70($sp)
/* 0046A85C 8D590000 */  lw    $t9, ($t2)
/* 0046A860 0119082A */  slt   $at, $t0, $t9
/* 0046A864 1020000A */  beqz  $at, .L0046A890
/* 0046A868 00000000 */   nop   
/* 0046A86C 8F988D50 */  lw     $t8, %got(highesterreg)($gp)
/* 0046A870 2718FFFC */  addiu $t8, $t8, -4
/* 0046A874 02781021 */  addu  $v0, $s3, $t8
/* 0046A878 8C4B0000 */  lw    $t3, ($v0)
/* 0046A87C 0168082A */  slt   $at, $t3, $t0
/* 0046A880 10200038 */  beqz  $at, .L0046A964
/* 0046A884 00000000 */   nop   
/* 0046A888 10000036 */  b     .L0046A964
/* 0046A88C AC480000 */   sw    $t0, ($v0)
.L0046A890:
/* 0046A890 8F8C8D54 */  lw     $t4, %got(highesteereg)($gp)
/* 0046A894 8F8D8D88 */  lw     $t5, %got(usedeeregs)($gp)
/* 0046A898 8FAF00DC */  lw    $t7, 0xdc($sp)
/* 0046A89C 258CFFFC */  addiu $t4, $t4, -4
/* 0046A8A0 026C1021 */  addu  $v0, $s3, $t4
/* 0046A8A4 8C490000 */  lw    $t1, ($v0)
/* 0046A8A8 001670C0 */  sll   $t6, $s6, 3
/* 0046A8AC 25ADFFF8 */  addiu $t5, $t5, -8
/* 0046A8B0 012F082A */  slt   $at, $t1, $t7
/* 0046A8B4 10200002 */  beqz  $at, .L0046A8C0
/* 0046A8B8 01CD1821 */   addu  $v1, $t6, $t5
/* 0046A8BC AC4F0000 */  sw    $t7, ($v0)
.L0046A8C0:
/* 0046A8C0 8C6A0000 */  lw    $t2, ($v1)
/* 0046A8C4 8FB900E8 */  lw    $t9, 0xe8($sp)
/* 0046A8C8 8C6B0004 */  lw    $t3, 4($v1)
/* 0046A8CC 8FA800EC */  lw    $t0, 0xec($sp)
/* 0046A8D0 0159C025 */  or    $t8, $t2, $t9
/* 0046A8D4 AC780000 */  sw    $t8, ($v1)
/* 0046A8D8 01686025 */  or    $t4, $t3, $t0
/* 0046A8DC 10000021 */  b     .L0046A964
/* 0046A8E0 AC6C0004 */   sw    $t4, 4($v1)
.L0046A8E4:
/* 0046A8E4 8F828A18 */  lw     $v0, %got(regsinclass1)($gp)
/* 0046A8E8 8FAE00DC */  lw    $t6, 0xdc($sp)
/* 0046A8EC 8C420000 */  lw    $v0, ($v0)
/* 0046A8F0 11C20008 */  beq   $t6, $v0, .L0046A914
/* 0046A8F4 00000000 */   nop   
/* 0046A8F8 8F8D8AFC */  lw     $t5, %got(someusefp)($gp)
/* 0046A8FC 25C90001 */  addiu $t1, $t6, 1
/* 0046A900 91AD0000 */  lbu   $t5, ($t5)
/* 0046A904 11A00010 */  beqz  $t5, .L0046A948
/* 0046A908 00000000 */   nop   
/* 0046A90C 1522000E */  bne   $t1, $v0, .L0046A948
/* 0046A910 00000000 */   nop   
.L0046A914:
/* 0046A914 8F8F8D88 */  lw     $t7, %got(usedeeregs)($gp)
/* 0046A918 8FAA00E8 */  lw    $t2, 0xe8($sp)
/* 0046A91C 8F818D88 */  lw     $at, %got(usedeeregs)($gp)
/* 0046A920 8DEF0000 */  lw    $t7, ($t7)
/* 0046A924 8F988D88 */  lw     $t8, %got(usedeeregs)($gp)
/* 0046A928 8FAB00EC */  lw    $t3, 0xec($sp)
/* 0046A92C 01EAC825 */  or    $t9, $t7, $t2
/* 0046A930 AC390000 */  sw    $t9, ($at)
/* 0046A934 8F180004 */  lw    $t8, 4($t8)
/* 0046A938 8F818D88 */  lw     $at, %got(usedeeregs)($gp)
/* 0046A93C 030B4025 */  or    $t0, $t8, $t3
/* 0046A940 10000008 */  b     .L0046A964
/* 0046A944 AC280004 */   sw    $t0, 4($at)
.L0046A948:
/* 0046A948 8F8D8B6C */  lw     $t5, %got(curproc)($gp)
/* 0046A94C 8FA900DC */  lw    $t1, 0xdc($sp)
/* 0046A950 240C0001 */  li    $t4, 1
/* 0046A954 8DAD0000 */  lw    $t5, ($t5)
/* 0046A958 8DAE0024 */  lw    $t6, 0x24($t5)
/* 0046A95C 01C97821 */  addu  $t7, $t6, $t1
/* 0046A960 A1ECFFFF */  sb    $t4, -1($t7)
.L0046A964:
/* 0046A964 8F998188 */  lw    $t9, %call16(resetbit)($gp)
/* 0046A968 8F848D64 */  lw     $a0, %got(colorcand)($gp)
/* 0046A96C 8FA5010C */  lw    $a1, 0x10c($sp)
/* 0046A970 0320F809 */  jalr  $t9
/* 0046A974 00000000 */   nop   
/* 0046A978 8FBC005C */  lw    $gp, 0x5c($sp)
/* 0046A97C 8F8A8B04 */  lw     $t2, %got(update_sym_file)($gp)
/* 0046A980 914A0000 */  lbu   $t2, ($t2)
/* 0046A984 1140001F */  beqz  $t2, .L0046AA04
/* 0046A988 00000000 */   nop   
/* 0046A98C 8EA20000 */  lw    $v0, ($s5)
/* 0046A990 24010003 */  li    $at, 3
/* 0046A994 90590000 */  lbu   $t9, ($v0)
/* 0046A998 1721001A */  bne   $t9, $at, .L0046AA04
/* 0046A99C 00000000 */   nop   
/* 0046A9A0 8C4B0014 */  lw    $t3, 0x14($v0)
/* 0046A9A4 8FD80000 */  lw    $t8, ($fp)
/* 0046A9A8 000B42C2 */  srl   $t0, $t3, 0xb
/* 0046A9AC 17080015 */  bne   $t8, $t0, .L0046AA04
/* 0046A9B0 00000000 */   nop   
/* 0046A9B4 944D0002 */  lhu   $t5, 2($v0)
/* 0046A9B8 8EAE0004 */  lw    $t6, 4($s5)
/* 0046A9BC 15AE0011 */  bne   $t5, $t6, .L0046AA04
/* 0046A9C0 00000000 */   nop   
/* 0046A9C4 8EA90034 */  lw    $t1, 0x34($s5)
/* 0046A9C8 1520000E */  bnez  $t1, .L0046AA04
/* 0046A9CC 00000000 */   nop   
/* 0046A9D0 8F998708 */  lw    $t9, %call16(coloroffset)($gp)
/* 0046A9D4 8FA400DC */  lw    $a0, 0xdc($sp)
/* 0046A9D8 0320F809 */  jalr  $t9
/* 0046A9DC 00000000 */   nop   
/* 0046A9E0 8FBC005C */  lw    $gp, 0x5c($sp)
/* 0046A9E4 8EAC0000 */  lw    $t4, ($s5)
/* 0046A9E8 8FC40000 */  lw    $a0, ($fp)
/* 0046A9EC 8F99817C */  lw    $t9, %call16(local_in_reg)($gp)
/* 0046A9F0 00023083 */  sra   $a2, $v0, 2
/* 0046A9F4 8D850010 */  lw    $a1, 0x10($t4)
/* 0046A9F8 0320F809 */  jalr  $t9
/* 0046A9FC 00000000 */   nop   
/* 0046AA00 8FBC005C */  lw    $gp, 0x5c($sp)
.L0046AA04:
/* 0046AA04 8F8F8A94 */  lw     $t7, %got(dbugno)($gp)
/* 0046AA08 24010006 */  li    $at, 6
/* 0046AA0C 24060004 */  li    $a2, 4
/* 0046AA10 8DEF0000 */  lw    $t7, ($t7)
/* 0046AA14 2407000A */  li    $a3, 10
/* 0046AA18 55E10032 */  bnel  $t7, $at, .L0046AAE4
/* 0046AA1C 8EB00038 */   lw    $s0, 0x38($s5)
/* 0046AA20 8EAA0000 */  lw    $t2, ($s5)
/* 0046AA24 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0046AA28 8F848CCC */  lw     $a0, %got(list)($gp)
/* 0046AA2C 95450002 */  lhu   $a1, 2($t2)
/* 0046AA30 AFB50114 */  sw    $s5, 0x114($sp)
/* 0046AA34 0320F809 */  jalr  $t9
/* 0046AA38 8C840000 */   lw    $a0, ($a0)
/* 0046AA3C 8FBC005C */  lw    $gp, 0x5c($sp)
/* 0046AA40 2405003A */  li    $a1, 58
/* 0046AA44 24060001 */  li    $a2, 1
/* 0046AA48 8F908CCC */  lw     $s0, %got(list)($gp)
/* 0046AA4C 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0046AA50 2407000A */  li    $a3, 10
/* 0046AA54 8E100000 */  lw    $s0, ($s0)
/* 0046AA58 0320F809 */  jalr  $t9
/* 0046AA5C 02002025 */   move  $a0, $s0
/* 0046AA60 8FBC005C */  lw    $gp, 0x5c($sp)
/* 0046AA64 8FB50114 */  lw    $s5, 0x114($sp)
/* 0046AA68 02002025 */  move  $a0, $s0
/* 0046AA6C 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0046AA70 24060005 */  li    $a2, 5
/* 0046AA74 2407000A */  li    $a3, 10
/* 0046AA78 0320F809 */  jalr  $t9
/* 0046AA7C 8EA50004 */   lw    $a1, 4($s5)
/* 0046AA80 8FBC005C */  lw    $gp, 0x5c($sp)
/* 0046AA84 24060019 */  li    $a2, 25
/* 0046AA88 24070019 */  li    $a3, 25
/* 0046AA8C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0046AA90 8F848CCC */  lw     $a0, %got(list)($gp)
/* 0046AA94 8F858044 */  lw    $a1, %got(RO_1000D6F9)($gp)
/* 0046AA98 8C840000 */  lw    $a0, ($a0)
/* 0046AA9C 0320F809 */  jalr  $t9
/* 0046AAA0 24A5D6F9 */   addiu $a1, %lo(RO_1000D6F9) # addiu $a1, $a1, -0x2907
/* 0046AAA4 8FBC005C */  lw    $gp, 0x5c($sp)
/* 0046AAA8 8FA500DC */  lw    $a1, 0xdc($sp)
/* 0046AAAC 24060004 */  li    $a2, 4
/* 0046AAB0 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0046AAB4 8F848CCC */  lw     $a0, %got(list)($gp)
/* 0046AAB8 2407000A */  li    $a3, 10
/* 0046AABC 0320F809 */  jalr  $t9
/* 0046AAC0 8C840000 */   lw    $a0, ($a0)
/* 0046AAC4 8FBC005C */  lw    $gp, 0x5c($sp)
/* 0046AAC8 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0046AACC 8F848CCC */  lw     $a0, %got(list)($gp)
/* 0046AAD0 0320F809 */  jalr  $t9
/* 0046AAD4 8C840000 */   lw    $a0, ($a0)
/* 0046AAD8 8FBC005C */  lw    $gp, 0x5c($sp)
/* 0046AADC 8FB50114 */  lw    $s5, 0x114($sp)
/* 0046AAE0 8EB00038 */  lw    $s0, 0x38($s5)
.L0046AAE4:
/* 0046AAE4 1200001F */  beqz  $s0, .L0046AB64
/* 0046AAE8 00000000 */   nop   
/* 0046AAEC 8E020000 */  lw    $v0, ($s0)
.L0046AAF0:
/* 0046AAF0 5040001A */  beql  $v0, $zero, .L0046AB5C
/* 0046AAF4 8E100004 */   lw    $s0, 4($s0)
/* 0046AAF8 80590020 */  lb    $t9, 0x20($v0)
/* 0046AAFC 8FAB00DC */  lw    $t3, 0xdc($sp)
/* 0046AB00 00408825 */  move  $s1, $v0
/* 0046AB04 17200014 */  bnez  $t9, .L0046AB58
/* 0046AB08 2D780040 */   sltiu $t8, $t3, 0x40
/* 0046AB0C 13000006 */  beqz  $t8, .L0046AB28
/* 0046AB10 000B4143 */   sra   $t0, $t3, 5
/* 0046AB14 00086880 */  sll   $t5, $t0, 2
/* 0046AB18 004D7021 */  addu  $t6, $v0, $t5
/* 0046AB1C 8DC90028 */  lw    $t1, 0x28($t6)
/* 0046AB20 01696004 */  sllv  $t4, $t1, $t3
/* 0046AB24 29980000 */  slti  $t8, $t4, 0
.L0046AB28:
/* 0046AB28 1700000B */  bnez  $t8, .L0046AB58
/* 0046AB2C 8FB900E8 */   lw    $t9, 0xe8($sp)
/* 0046AB30 8E2A0028 */  lw    $t2, 0x28($s1)
/* 0046AB34 8E2D002C */  lw    $t5, 0x2c($s1)
/* 0046AB38 8FAE00EC */  lw    $t6, 0xec($sp)
/* 0046AB3C 922B0021 */  lbu   $t3, 0x21($s1)
/* 0046AB40 01594025 */  or    $t0, $t2, $t9
/* 0046AB44 01AE4825 */  or    $t1, $t5, $t6
/* 0046AB48 256CFFFF */  addiu $t4, $t3, -1
/* 0046AB4C AE29002C */  sw    $t1, 0x2c($s1)
/* 0046AB50 AE280028 */  sw    $t0, 0x28($s1)
/* 0046AB54 A22C0021 */  sb    $t4, 0x21($s1)
.L0046AB58:
/* 0046AB58 8E100004 */  lw    $s0, 4($s0)
.L0046AB5C:
/* 0046AB5C 5600FFE4 */  bnezl $s0, .L0046AAF0
/* 0046AB60 8E020000 */   lw    $v0, ($s0)
.L0046AB64:
/* 0046AB64 8F9389B8 */  lw     $s3, %got(curstaticno)($gp)
/* 0046AB68 AFB50114 */  sw    $s5, 0x114($sp)
/* 0046AB6C 00009025 */  move  $s2, $zero
/* 0046AB70 8E730000 */  lw    $s3, ($s3)
/* 0046AB74 26B40014 */  addiu $s4, $s5, 0x14
/* 0046AB78 26730000 */  addiu $s3, $s3, 0
.L0046AB7C:
/* 0046AB7C 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 0046AB80 02402025 */  move  $a0, $s2
/* 0046AB84 02802825 */  move  $a1, $s4
/* 0046AB88 0320F809 */  jalr  $t9
/* 0046AB8C 00000000 */   nop   
/* 0046AB90 1040001F */  beqz  $v0, .L0046AC10
/* 0046AB94 8FBC005C */   lw    $gp, 0x5c($sp)
/* 0046AB98 8F8F8C68 */  lw     $t7, %got(bbtab)($gp)
/* 0046AB9C 0012C080 */  sll   $t8, $s2, 2
/* 0046ABA0 8FB900DC */  lw    $t9, 0xdc($sp)
/* 0046ABA4 8DEF0000 */  lw    $t7, ($t7)
/* 0046ABA8 001668C0 */  sll   $t5, $s6, 3
/* 0046ABAC 00194080 */  sll   $t0, $t9, 2
/* 0046ABB0 01F85021 */  addu  $t2, $t7, $t8
/* 0046ABB4 8D510000 */  lw    $s1, ($t2)
/* 0046ABB8 AFAD0088 */  sw    $t5, 0x88($sp)
/* 0046ABBC 02288021 */  addu  $s0, $s1, $t0
/* 0046ABC0 8E0E0040 */  lw    $t6, 0x40($s0)
/* 0046ABC4 51C00007 */  beql  $t6, $zero, .L0046ABE4
/* 0046ABC8 8EA90000 */   lw    $t1, ($s5)
/* 0046ABCC 8F99861C */  lw    $t9, %call16(dbgerror)($gp)
/* 0046ABD0 24041C0E */  li    $a0, 7182
/* 0046ABD4 0320F809 */  jalr  $t9
/* 0046ABD8 00000000 */   nop   
/* 0046ABDC 8FBC005C */  lw    $gp, 0x5c($sp)
/* 0046ABE0 8EA90000 */  lw    $t1, ($s5)
.L0046ABE4:
/* 0046ABE4 8FAB0088 */  lw    $t3, 0x88($sp)
/* 0046ABE8 8FAF00E8 */  lw    $t7, 0xe8($sp)
/* 0046ABEC AE090040 */  sw    $t1, 0x40($s0)
/* 0046ABF0 022B1021 */  addu  $v0, $s1, $t3
/* 0046ABF4 8C4C002C */  lw    $t4, 0x2c($v0)
/* 0046ABF8 8C4A0030 */  lw    $t2, 0x30($v0)
/* 0046ABFC 8FB900EC */  lw    $t9, 0xec($sp)
/* 0046AC00 018FC025 */  or    $t8, $t4, $t7
/* 0046AC04 AC58002C */  sw    $t8, 0x2c($v0)
/* 0046AC08 01594025 */  or    $t0, $t2, $t9
/* 0046AC0C AC480030 */  sw    $t0, 0x30($v0)
.L0046AC10:
/* 0046AC10 26520001 */  addiu $s2, $s2, 1
/* 0046AC14 1653FFD9 */  bne   $s2, $s3, .L0046AB7C
/* 0046AC18 00000000 */   nop   
/* 0046AC1C 10000020 */  b     .L0046ACA0
/* 0046AC20 AFB50114 */   sw    $s5, 0x114($sp)
.L0046AC24:
/* 0046AC24 8F8D8ADC */  lw     $t5, %got(dowhyuncolor)($gp)
/* 0046AC28 AFB50114 */  sw    $s5, 0x114($sp)
/* 0046AC2C 91AD0000 */  lbu   $t5, ($t5)
/* 0046AC30 51A0001C */  beql  $t5, $zero, .L0046ACA4
/* 0046AC34 8FB80110 */   lw    $t8, 0x110($sp)
/* 0046AC38 92AE0023 */  lbu   $t6, 0x23($s5)
/* 0046AC3C 24010001 */  li    $at, 1
/* 0046AC40 15C10011 */  bne   $t6, $at, .L0046AC88
/* 0046AC44 00000000 */   nop   
/* 0046AC48 8F828C20 */  lw     $v0, %got(numcalloverheadlr)($gp)
/* 0046AC4C 02A02025 */  move  $a0, $s5
/* 0046AC50 AFB50114 */  sw    $s5, 0x114($sp)
/* 0046AC54 8C490000 */  lw    $t1, ($v0)
/* 0046AC58 252B0001 */  addiu $t3, $t1, 1
/* 0046AC5C AC4B0000 */  sw    $t3, ($v0)
/* 0046AC60 8F998530 */  lw    $t9, %call16(contiguous)($gp)
/* 0046AC64 0320F809 */  jalr  $t9
/* 0046AC68 00000000 */   nop   
/* 0046AC6C 8FBC005C */  lw    $gp, 0x5c($sp)
/* 0046AC70 8F8C8C04 */  lw     $t4, %got(contiglr)($gp)
/* 0046AC74 8F818C04 */  lw     $at, %got(contiglr)($gp)
/* 0046AC78 8D8C0000 */  lw    $t4, ($t4)
/* 0046AC7C 01827821 */  addu  $t7, $t4, $v0
/* 0046AC80 10000007 */  b     .L0046ACA0
/* 0046AC84 AC2F0000 */   sw    $t7, ($at)
.L0046AC88:
/* 0046AC88 8F99853C */  lw    $t9, %call16(whyuncolored)($gp)
/* 0046AC8C 02A02025 */  move  $a0, $s5
/* 0046AC90 AFB50114 */  sw    $s5, 0x114($sp)
/* 0046AC94 0320F809 */  jalr  $t9
/* 0046AC98 00000000 */   nop   
/* 0046AC9C 8FBC005C */  lw    $gp, 0x5c($sp)
.L0046ACA0:
/* 0046ACA0 8FB80110 */  lw    $t8, 0x110($sp)
.L0046ACA4:
/* 0046ACA4 8FB900AC */  lw    $t9, 0xac($sp)
/* 0046ACA8 270A0001 */  addiu $t2, $t8, 1
/* 0046ACAC 1559FD85 */  bne   $t2, $t9, .L0046A2C4
/* 0046ACB0 AFAA0110 */   sw    $t2, 0x110($sp)
.L0046ACB4:
/* 0046ACB4 8F9389AC */  lw     $s3, %got(graphhead)($gp)
/* 0046ACB8 8E730000 */  lw    $s3, ($s3)
/* 0046ACBC 126001D5 */  beqz  $s3, .L0046B414
/* 0046ACC0 00000000 */   nop   
/* 0046ACC4 8E640014 */  lw    $a0, 0x14($s3)
.L0046ACC8:
/* 0046ACC8 24160001 */  li    $s6, 1
/* 0046ACCC 0004102B */  sltu  $v0, $zero, $a0
/* 0046ACD0 50400011 */  beql  $v0, $zero, .L0046AD18
/* 0046ACD4 304D00FF */   andi  $t5, $v0, 0xff
/* 0046ACD8 8C880000 */  lw    $t0, ($a0)
/* 0046ACDC 8D0D0020 */  lw    $t5, 0x20($t0)
/* 0046ACE0 91AE0000 */  lbu   $t6, ($t5)
/* 0046ACE4 2DC90040 */  sltiu $t1, $t6, 0x40
/* 0046ACE8 5120000A */  beql  $t1, $zero, .L0046AD14
/* 0046ACEC 01201025 */   move  $v0, $t1
/* 0046ACF0 8F8F8044 */  lw    $t7, %got(D_10010FAC)($gp)
/* 0046ACF4 000E5943 */  sra   $t3, $t6, 5
/* 0046ACF8 000B6080 */  sll   $t4, $t3, 2
/* 0046ACFC 25EF0FAC */  addiu $t7, %lo(D_10010FAC) # addiu $t7, $t7, 0xfac
/* 0046AD00 01ECC021 */  addu  $t8, $t7, $t4
/* 0046AD04 8F0A0000 */  lw    $t2, ($t8)
/* 0046AD08 01CAC804 */  sllv  $t9, $t2, $t6
/* 0046AD0C 2B290000 */  slti  $t1, $t9, 0
/* 0046AD10 01201025 */  move  $v0, $t1
.L0046AD14:
/* 0046AD14 304D00FF */  andi  $t5, $v0, 0xff
.L0046AD18:
/* 0046AD18 11A0000D */  beqz  $t5, .L0046AD50
/* 0046AD1C AFAD0080 */   sw    $t5, 0x80($sp)
/* 0046AD20 8C8F0000 */  lw    $t7, ($a0)
/* 0046AD24 24010010 */  li    $at, 16
/* 0046AD28 8DE20020 */  lw    $v0, 0x20($t7)
/* 0046AD2C 904C0000 */  lbu   $t4, ($v0)
/* 0046AD30 55810006 */  bnel  $t4, $at, .L0046AD4C
/* 0046AD34 8C4A0014 */   lw    $t2, 0x14($v0)
/* 0046AD38 8F988B74 */  lw     $t8, %got(ciaprocs)($gp)
/* 0046AD3C 8F180000 */  lw    $t8, ($t8)
/* 0046AD40 10000003 */  b     .L0046AD50
/* 0046AD44 AFB800C8 */   sw    $t8, 0xc8($sp)
/* 0046AD48 8C4A0014 */  lw    $t2, 0x14($v0)
.L0046AD4C:
/* 0046AD4C AFAA00C8 */  sw    $t2, 0xc8($sp)
.L0046AD50:
/* 0046AD50 8E630020 */  lw    $v1, 0x20($s3)
/* 0046AD54 90640000 */  lbu   $a0, ($v1)
/* 0046AD58 2C8E0040 */  sltiu $t6, $a0, 0x40
/* 0046AD5C 11C00009 */  beqz  $t6, .L0046AD84
/* 0046AD60 00000000 */   nop   
/* 0046AD64 8F898044 */  lw    $t1, %got(D_10010FA4)($gp)
/* 0046AD68 0004C943 */  sra   $t9, $a0, 5
/* 0046AD6C 00194080 */  sll   $t0, $t9, 2
/* 0046AD70 25290FA4 */  addiu $t1, %lo(D_10010FA4) # addiu $t1, $t1, 0xfa4
/* 0046AD74 01286821 */  addu  $t5, $t1, $t0
/* 0046AD78 8DAB0000 */  lw    $t3, ($t5)
/* 0046AD7C 008B7804 */  sllv  $t7, $t3, $a0
/* 0046AD80 29EE0000 */  slti  $t6, $t7, 0
.L0046AD84:
/* 0046AD84 51C00005 */  beql  $t6, $zero, .L0046AD9C
/* 0046AD88 24010010 */   li    $at, 16
/* 0046AD8C 8C780014 */  lw    $t8, 0x14($v1)
/* 0046AD90 10000007 */  b     .L0046ADB0
/* 0046AD94 AFB800C4 */   sw    $t8, 0xc4($sp)
/* 0046AD98 24010010 */  li    $at, 16
.L0046AD9C:
/* 0046AD9C 54810005 */  bnel  $a0, $at, .L0046ADB4
/* 0046ADA0 24190004 */   li    $t9, 4
/* 0046ADA4 8F8A8B74 */  lw     $t2, %got(ciaprocs)($gp)
/* 0046ADA8 8D4A0000 */  lw    $t2, ($t2)
/* 0046ADAC AFAA00C4 */  sw    $t2, 0xc4($sp)
.L0046ADB0:
/* 0046ADB0 24190004 */  li    $t9, 4
.L0046ADB4:
/* 0046ADB4 24120001 */  li    $s2, 1
/* 0046ADB8 AFB9007C */  sw    $t9, 0x7c($sp)
/* 0046ADBC 26770004 */  addiu $s7, $s3, 4
.L0046ADC0:
/* 0046ADC0 8EE60040 */  lw    $a2, 0x40($s7)
/* 0046ADC4 2642FFFF */  addiu $v0, $s2, -1
/* 0046ADC8 000240C3 */  sra   $t0, $v0, 3
/* 0046ADCC 10C0016E */  beqz  $a2, .L0046B388
/* 0046ADD0 0268A021 */   addu  $s4, $s3, $t0
/* 0046ADD4 2A410018 */  slti  $at, $s2, 0x18
/* 0046ADD8 14200002 */  bnez  $at, .L0046ADE4
/* 0046ADDC 24110001 */   li    $s1, 1
/* 0046ADE0 24160002 */  li    $s6, 2
.L0046ADE4:
/* 0046ADE4 8F9984D8 */  lw    $t9, %call16(gettolivbb)($gp)
/* 0046ADE8 00C02025 */  move  $a0, $a2
/* 0046ADEC 02602825 */  move  $a1, $s3
/* 0046ADF0 0320F809 */  jalr  $t9
/* 0046ADF4 00000000 */   nop   
/* 0046ADF8 8FBC005C */  lw    $gp, 0x5c($sp)
/* 0046ADFC 00408025 */  move  $s0, $v0
/* 0046AE00 8F8989DC */  lw     $t1, %got(dft_livbb)($gp)
/* 0046AE04 8D290000 */  lw    $t1, ($t1)
/* 0046AE08 54490018 */  bnel  $v0, $t1, .L0046AE6C
/* 0046AE0C 8C550008 */   lw    $s5, 8($v0)
/* 0046AE10 8EED0040 */  lw    $t5, 0x40($s7)
/* 0046AE14 8F8889EC */  lw     $t0, %got(bittab)($gp)
/* 0046AE18 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 0046AE1C 95AB0002 */  lhu   $t3, 2($t5)
/* 0046AE20 8D080000 */  lw    $t0, ($t0)
/* 0046AE24 96640008 */  lhu   $a0, 8($s3)
/* 0046AE28 000B78C0 */  sll   $t7, $t3, 3
/* 0046AE2C 010F6021 */  addu  $t4, $t0, $t7
/* 0046AE30 8D950004 */  lw    $s5, 4($t4)
/* 0046AE34 0320F809 */  jalr  $t9
/* 0046AE38 26A5000C */   addiu $a1, $s5, 0xc
/* 0046AE3C 1440000B */  bnez  $v0, .L0046AE6C
/* 0046AE40 8FBC005C */   lw    $gp, 0x5c($sp)
.L0046AE44:
/* 0046AE44 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 0046AE48 8EB50034 */  lw    $s5, 0x34($s5)
/* 0046AE4C 96640008 */  lhu   $a0, 8($s3)
/* 0046AE50 0320F809 */  jalr  $t9
/* 0046AE54 26A5000C */   addiu $a1, $s5, 0xc
/* 0046AE58 1040FFFA */  beqz  $v0, .L0046AE44
/* 0046AE5C 8FBC005C */   lw    $gp, 0x5c($sp)
/* 0046AE60 10000003 */  b     .L0046AE70
/* 0046AE64 920E0014 */   lbu   $t6, 0x14($s0)
/* 0046AE68 8C550008 */  lw    $s5, 8($v0)
.L0046AE6C:
/* 0046AE6C 920E0014 */  lbu   $t6, 0x14($s0)
.L0046AE70:
/* 0046AE70 2642FFFF */  addiu $v0, $s2, -1
/* 0046AE74 000218C3 */  sra   $v1, $v0, 3
/* 0046AE78 11C0000F */  beqz  $t6, .L0046AEB8
/* 0046AE7C 0263A021 */   addu  $s4, $s3, $v1
/* 0046AE80 2642FFFF */  addiu $v0, $s2, -1
/* 0046AE84 000218C3 */  sra   $v1, $v0, 3
/* 0046AE88 0263A021 */  addu  $s4, $s3, $v1
/* 0046AE8C 928400D0 */  lbu   $a0, 0xd0($s4)
/* 0046AE90 305E0007 */  andi  $fp, $v0, 7
/* 0046AE94 27DE0018 */  addiu $fp, $fp, 0x18
/* 0046AE98 03C4C004 */  sllv  $t8, $a0, $fp
/* 0046AE9C 001857C2 */  srl   $t2, $t8, 0x1f
/* 0046AEA0 000ACFC0 */  sll   $t9, $t2, 0x1f
/* 0046AEA4 03D94806 */  srlv  $t1, $t9, $fp
/* 0046AEA8 01246826 */  xor   $t5, $t1, $a0
/* 0046AEAC A28D00D0 */  sb    $t5, 0xd0($s4)
/* 0046AEB0 10000052 */  b     .L0046AFFC
/* 0046AEB4 AFA30078 */   sw    $v1, 0x78($sp)
.L0046AEB8:
/* 0046AEB8 928400D0 */  lbu   $a0, 0xd0($s4)
/* 0046AEBC 305E0007 */  andi  $fp, $v0, 7
/* 0046AEC0 920B0015 */  lbu   $t3, 0x15($s0)
/* 0046AEC4 27DE0018 */  addiu $fp, $fp, 0x18
/* 0046AEC8 03C44004 */  sllv  $t0, $a0, $fp
/* 0046AECC 00087FC2 */  srl   $t7, $t0, 0x1f
/* 0046AED0 016F6026 */  xor   $t4, $t3, $t7
/* 0046AED4 8FB90080 */  lw    $t9, 0x80($sp)
/* 0046AED8 000C77C0 */  sll   $t6, $t4, 0x1f
/* 0046AEDC 03CEC006 */  srlv  $t8, $t6, $fp
/* 0046AEE0 03045026 */  xor   $t2, $t8, $a0
/* 0046AEE4 A28A00D0 */  sb    $t2, 0xd0($s4)
/* 0046AEE8 13200044 */  beqz  $t9, .L0046AFFC
/* 0046AEEC AFA30078 */   sw    $v1, 0x78($sp)
/* 0046AEF0 8E690014 */  lw    $t1, 0x14($s3)
/* 0046AEF4 8FA8007C */  lw    $t0, 0x7c($sp)
/* 0046AEF8 8EED0040 */  lw    $t5, 0x40($s7)
/* 0046AEFC 8D230000 */  lw    $v1, ($t1)
/* 0046AF00 8FAC00C8 */  lw    $t4, 0xc8($sp)
/* 0046AF04 00685821 */  addu  $t3, $v1, $t0
/* 0046AF08 8D6F0040 */  lw    $t7, 0x40($t3)
/* 0046AF0C 55AF003C */  bnel  $t5, $t7, .L0046B000
/* 0046AF10 928300D5 */   lbu   $v1, 0xd5($s4)
/* 0046AF14 9184000C */  lbu   $a0, 0xc($t4)
/* 0046AF18 5480000A */  bnezl $a0, .L0046AF44
/* 0046AF1C 8C620020 */   lw    $v0, 0x20($v1)
/* 0046AF20 8F988D38 */  lw     $t8, %got(firsteereg)($gp)
/* 0046AF24 00167080 */  sll   $t6, $s6, 2
/* 0046AF28 2718FFFC */  addiu $t8, $t8, -4
/* 0046AF2C 01D85021 */  addu  $t2, $t6, $t8
/* 0046AF30 8D590000 */  lw    $t9, ($t2)
/* 0046AF34 0259082A */  slt   $at, $s2, $t9
/* 0046AF38 50200031 */  beql  $at, $zero, .L0046B000
/* 0046AF3C 928300D5 */   lbu   $v1, 0xd5($s4)
/* 0046AF40 8C620020 */  lw    $v0, 0x20($v1)
.L0046AF44:
/* 0046AF44 9449001A */  lhu   $t1, 0x1a($v0)
/* 0046AF48 31280100 */  andi  $t0, $t1, 0x100
/* 0046AF4C 11000007 */  beqz  $t0, .L0046AF6C
/* 0046AF50 00000000 */   nop   
/* 0046AF54 904B0000 */  lbu   $t3, ($v0)
/* 0046AF58 24010017 */  li    $at, 23
/* 0046AF5C 15610003 */  bne   $t3, $at, .L0046AF6C
/* 0046AF60 2401000D */   li    $at, 13
/* 0046AF64 56410026 */  bnel  $s2, $at, .L0046B000
/* 0046AF68 928300D5 */   lbu   $v1, 0xd5($s4)
.L0046AF6C:
/* 0046AF6C 8F8F8B74 */  lw     $t7, %got(ciaprocs)($gp)
/* 0046AF70 8FAD00C8 */  lw    $t5, 0xc8($sp)
/* 0046AF74 8DEF0000 */  lw    $t7, ($t7)
/* 0046AF78 15AF0011 */  bne   $t5, $t7, .L0046AFC0
/* 0046AF7C 00000000 */   nop   
/* 0046AF80 8F99870C */  lw    $t9, %call16(in_reg_masks)($gp)
/* 0046AF84 02402025 */  move  $a0, $s2
/* 0046AF88 8C450020 */  lw    $a1, 0x20($v0)
/* 0046AF8C 0320F809 */  jalr  $t9
/* 0046AF90 8C460024 */   lw    $a2, 0x24($v0)
/* 0046AF94 10400019 */  beqz  $v0, .L0046AFFC
/* 0046AF98 8FBC005C */   lw    $gp, 0x5c($sp)
/* 0046AF9C 928400D0 */  lbu   $a0, 0xd0($s4)
/* 0046AFA0 03C46004 */  sllv  $t4, $a0, $fp
/* 0046AFA4 000C77C2 */  srl   $t6, $t4, 0x1f
/* 0046AFA8 39D80001 */  xori  $t8, $t6, 1
/* 0046AFAC 001857C0 */  sll   $t2, $t8, 0x1f
/* 0046AFB0 03CAC806 */  srlv  $t9, $t2, $fp
/* 0046AFB4 03244826 */  xor   $t1, $t9, $a0
/* 0046AFB8 10000010 */  b     .L0046AFFC
/* 0046AFBC A28900D0 */   sb    $t1, 0xd0($s4)
.L0046AFC0:
/* 0046AFC0 10800006 */  beqz  $a0, .L0046AFDC
/* 0046AFC4 8FA800C8 */   lw    $t0, 0xc8($sp)
/* 0046AFC8 8D0B0024 */  lw    $t3, 0x24($t0)
/* 0046AFCC 01726821 */  addu  $t5, $t3, $s2
/* 0046AFD0 91AFFFFF */  lbu   $t7, -1($t5)
/* 0046AFD4 51E0000A */  beql  $t7, $zero, .L0046B000
/* 0046AFD8 928300D5 */   lbu   $v1, 0xd5($s4)
.L0046AFDC:
/* 0046AFDC 928400D0 */  lbu   $a0, 0xd0($s4)
/* 0046AFE0 03C46004 */  sllv  $t4, $a0, $fp
/* 0046AFE4 000C77C2 */  srl   $t6, $t4, 0x1f
/* 0046AFE8 39D80001 */  xori  $t8, $t6, 1
/* 0046AFEC 001857C0 */  sll   $t2, $t8, 0x1f
/* 0046AFF0 03CAC806 */  srlv  $t9, $t2, $fp
/* 0046AFF4 03244826 */  xor   $t1, $t9, $a0
/* 0046AFF8 A28900D0 */  sb    $t1, 0xd0($s4)
.L0046AFFC:
/* 0046AFFC 928300D5 */  lbu   $v1, 0xd5($s4)
.L0046B000:
/* 0046B000 03C34004 */  sllv  $t0, $v1, $fp
/* 0046B004 00085FC2 */  srl   $t3, $t0, 0x1f
/* 0046B008 000B6FC0 */  sll   $t5, $t3, 0x1f
/* 0046B00C 03CD7806 */  srlv  $t7, $t5, $fp
/* 0046B010 01E36026 */  xor   $t4, $t7, $v1
/* 0046B014 A28C00D5 */  sb    $t4, 0xd5($s4)
/* 0046B018 92AE0022 */  lbu   $t6, 0x22($s5)
/* 0046B01C 51C00056 */  beql  $t6, $zero, .L0046B178
/* 0046B020 928500DA */   lbu   $a1, 0xda($s4)
/* 0046B024 92180017 */  lbu   $t8, 0x17($s0)
/* 0046B028 57000053 */  bnezl $t8, .L0046B178
/* 0046B02C 928500DA */   lbu   $a1, 0xda($s4)
/* 0046B030 920A0016 */  lbu   $t2, 0x16($s0)
/* 0046B034 5540003A */  bnezl $t2, .L0046B120
/* 0046B038 920F0012 */   lbu   $t7, 0x12($s0)
/* 0046B03C 8F998544 */  lw    $t9, %call16(is_cup_affecting_regs)($gp)
/* 0046B040 02602025 */  move  $a0, $s3
/* 0046B044 0320F809 */  jalr  $t9
/* 0046B048 00000000 */   nop   
/* 0046B04C 10400049 */  beqz  $v0, .L0046B174
/* 0046B050 8FBC005C */   lw    $gp, 0x5c($sp)
/* 0046B054 8E630020 */  lw    $v1, 0x20($s3)
/* 0046B058 24010010 */  li    $at, 16
/* 0046B05C 8FB900C4 */  lw    $t9, 0xc4($sp)
/* 0046B060 90640000 */  lbu   $a0, ($v1)
/* 0046B064 5081001C */  beql  $a0, $at, .L0046B0D8
/* 0046B068 24010010 */   li    $at, 16
/* 0046B06C 9322000C */  lbu   $v0, 0xc($t9)
/* 0046B070 14400009 */  bnez  $v0, .L0046B098
/* 0046B074 00000000 */   nop   
/* 0046B078 8F888D38 */  lw     $t0, %got(firsteereg)($gp)
/* 0046B07C 00164880 */  sll   $t1, $s6, 2
/* 0046B080 2508FFFC */  addiu $t0, $t0, -4
/* 0046B084 01285821 */  addu  $t3, $t1, $t0
/* 0046B088 8D6D0000 */  lw    $t5, ($t3)
/* 0046B08C 024D082A */  slt   $at, $s2, $t5
/* 0046B090 54200009 */  bnezl $at, .L0046B0B8
/* 0046B094 946A001A */   lhu   $t2, 0x1a($v1)
.L0046B098:
/* 0046B098 1040000E */  beqz  $v0, .L0046B0D4
/* 0046B09C 8FAF00C4 */   lw    $t7, 0xc4($sp)
/* 0046B0A0 8DEC0024 */  lw    $t4, 0x24($t7)
/* 0046B0A4 01927021 */  addu  $t6, $t4, $s2
/* 0046B0A8 91D8FFFF */  lbu   $t8, -1($t6)
/* 0046B0AC 5300000A */  beql  $t8, $zero, .L0046B0D8
/* 0046B0B0 24010010 */   li    $at, 16
/* 0046B0B4 946A001A */  lhu   $t2, 0x1a($v1)
.L0046B0B8:
/* 0046B0B8 24010017 */  li    $at, 23
/* 0046B0BC 31590100 */  andi  $t9, $t2, 0x100
/* 0046B0C0 53200017 */  beql  $t9, $zero, .L0046B120
/* 0046B0C4 920F0012 */   lbu   $t7, 0x12($s0)
/* 0046B0C8 14810014 */  bne   $a0, $at, .L0046B11C
/* 0046B0CC 2401000D */   li    $at, 13
/* 0046B0D0 12410012 */  beq   $s2, $at, .L0046B11C
.L0046B0D4:
/* 0046B0D4 24010010 */   li    $at, 16
.L0046B0D8:
/* 0046B0D8 54810027 */  bnel  $a0, $at, .L0046B178
/* 0046B0DC 928500DA */   lbu   $a1, 0xda($s4)
/* 0046B0E0 8F888D38 */  lw     $t0, %got(firsteereg)($gp)
/* 0046B0E4 00164880 */  sll   $t1, $s6, 2
/* 0046B0E8 2508FFFC */  addiu $t0, $t0, -4
/* 0046B0EC 01285821 */  addu  $t3, $t1, $t0
/* 0046B0F0 8D6D0000 */  lw    $t5, ($t3)
/* 0046B0F4 024D082A */  slt   $at, $s2, $t5
/* 0046B0F8 5020001F */  beql  $at, $zero, .L0046B178
/* 0046B0FC 928500DA */   lbu   $a1, 0xda($s4)
/* 0046B100 8F99870C */  lw    $t9, %call16(in_reg_masks)($gp)
/* 0046B104 02402025 */  move  $a0, $s2
/* 0046B108 8C650020 */  lw    $a1, 0x20($v1)
/* 0046B10C 0320F809 */  jalr  $t9
/* 0046B110 8C660024 */   lw    $a2, 0x24($v1)
/* 0046B114 10400017 */  beqz  $v0, .L0046B174
/* 0046B118 8FBC005C */   lw    $gp, 0x5c($sp)
.L0046B11C:
/* 0046B11C 920F0012 */  lbu   $t7, 0x12($s0)
.L0046B120:
/* 0046B120 55E0000B */  bnezl $t7, .L0046B150
/* 0046B124 928300D5 */   lbu   $v1, 0xd5($s4)
/* 0046B128 920C0014 */  lbu   $t4, 0x14($s0)
/* 0046B12C 8FAE0078 */  lw    $t6, 0x78($sp)
/* 0046B130 15800006 */  bnez  $t4, .L0046B14C
/* 0046B134 026EC021 */   addu  $t8, $s3, $t6
/* 0046B138 930A00D0 */  lbu   $t2, 0xd0($t8)
/* 0046B13C 03CAC804 */  sllv  $t9, $t2, $fp
/* 0046B140 00194FC2 */  srl   $t1, $t9, 0x1f
/* 0046B144 5520000B */  bnezl $t1, .L0046B174
/* 0046B148 00008825 */   move  $s1, $zero
.L0046B14C:
/* 0046B14C 928300D5 */  lbu   $v1, 0xd5($s4)
.L0046B150:
/* 0046B150 03C34004 */  sllv  $t0, $v1, $fp
/* 0046B154 00085FC2 */  srl   $t3, $t0, 0x1f
/* 0046B158 396D0001 */  xori  $t5, $t3, 1
/* 0046B15C 000D7FC0 */  sll   $t7, $t5, 0x1f
/* 0046B160 03CF6006 */  srlv  $t4, $t7, $fp
/* 0046B164 01837026 */  xor   $t6, $t4, $v1
/* 0046B168 10000002 */  b     .L0046B174
/* 0046B16C A28E00D5 */   sb    $t6, 0xd5($s4)
/* 0046B170 00008825 */  move  $s1, $zero
.L0046B174:
/* 0046B174 928500DA */  lbu   $a1, 0xda($s4)
.L0046B178:
/* 0046B178 AFB50114 */  sw    $s5, 0x114($sp)
/* 0046B17C 03C5C004 */  sllv  $t8, $a1, $fp
/* 0046B180 001857C2 */  srl   $t2, $t8, 0x1f
/* 0046B184 000ACFC0 */  sll   $t9, $t2, 0x1f
/* 0046B188 03D94806 */  srlv  $t1, $t9, $fp
/* 0046B18C 01254026 */  xor   $t0, $t1, $a1
/* 0046B190 12200094 */  beqz  $s1, .L0046B3E4
/* 0046B194 A28800DA */   sb    $t0, 0xda($s4)
/* 0046B198 8FAB0078 */  lw    $t3, 0x78($sp)
/* 0046B19C AFB50114 */  sw    $s5, 0x114($sp)
/* 0046B1A0 026B6821 */  addu  $t5, $s3, $t3
/* 0046B1A4 91AF00D0 */  lbu   $t7, 0xd0($t5)
/* 0046B1A8 03CF6004 */  sllv  $t4, $t7, $fp
/* 0046B1AC 000C77C2 */  srl   $t6, $t4, 0x1f
/* 0046B1B0 51C0008D */  beql  $t6, $zero, .L0046B3E8
/* 0046B1B4 8FB8007C */   lw    $t8, 0x7c($sp)
/* 0046B1B8 92780004 */  lbu   $t8, 4($s3)
/* 0046B1BC AFB50114 */  sw    $s5, 0x114($sp)
/* 0046B1C0 57000089 */  bnezl $t8, .L0046B3E8
/* 0046B1C4 8FB8007C */   lw    $t8, 0x7c($sp)
/* 0046B1C8 8F8A8AA8 */  lw     $t2, %got(dorlodrstropt)($gp)
/* 0046B1CC AFB50114 */  sw    $s5, 0x114($sp)
/* 0046B1D0 914A0000 */  lbu   $t2, ($t2)
/* 0046B1D4 51400084 */  beql  $t2, $zero, .L0046B3E8
/* 0046B1D8 8FB8007C */   lw    $t8, 0x7c($sp)
/* 0046B1DC 8E640014 */  lw    $a0, 0x14($s3)
/* 0046B1E0 AFB50114 */  sw    $s5, 0x114($sp)
/* 0046B1E4 50800080 */  beql  $a0, $zero, .L0046B3E8
/* 0046B1E8 8FB8007C */   lw    $t8, 0x7c($sp)
/* 0046B1EC 8C990004 */  lw    $t9, 4($a0)
/* 0046B1F0 AFB50114 */  sw    $s5, 0x114($sp)
/* 0046B1F4 5320007C */  beql  $t9, $zero, .L0046B3E8
/* 0046B1F8 8FB8007C */   lw    $t8, 0x7c($sp)
/* 0046B1FC 8F998518 */  lw    $t9, %call16(somepremember)($gp)
/* 0046B200 02402825 */  move  $a1, $s2
/* 0046B204 8EE60040 */  lw    $a2, 0x40($s7)
/* 0046B208 0320F809 */  jalr  $t9
/* 0046B20C 02A03825 */   move  $a3, $s5
/* 0046B210 8FBC005C */  lw    $gp, 0x5c($sp)
/* 0046B214 10400073 */  beqz  $v0, .L0046B3E4
/* 0046B218 AFB50114 */   sw    $s5, 0x114($sp)
/* 0046B21C 8F998520 */  lw    $t9, %call16(allpreppout)($gp)
/* 0046B220 8E640014 */  lw    $a0, 0x14($s3)
/* 0046B224 02402825 */  move  $a1, $s2
/* 0046B228 8EE60040 */  lw    $a2, 0x40($s7)
/* 0046B22C 02A03825 */  move  $a3, $s5
/* 0046B230 0320F809 */  jalr  $t9
/* 0046B234 AFB50114 */   sw    $s5, 0x114($sp)
/* 0046B238 1040006A */  beqz  $v0, .L0046B3E4
/* 0046B23C 8FBC005C */   lw    $gp, 0x5c($sp)
/* 0046B240 8E710014 */  lw    $s1, 0x14($s3)
/* 0046B244 52200041 */  beql  $s1, $zero, .L0046B34C
/* 0046B248 928500DA */   lbu   $a1, 0xda($s4)
/* 0046B24C 8E300000 */  lw    $s0, ($s1)
.L0046B250:
/* 0046B250 8FA9007C */  lw    $t1, 0x7c($sp)
/* 0046B254 8EE60040 */  lw    $a2, 0x40($s7)
/* 0046B258 02094021 */  addu  $t0, $s0, $t1
/* 0046B25C 8D0B0040 */  lw    $t3, 0x40($t0)
/* 0046B260 50CB0037 */  beql  $a2, $t3, .L0046B340
/* 0046B264 8E310004 */   lw    $s1, 4($s1)
/* 0046B268 8E020020 */  lw    $v0, 0x20($s0)
/* 0046B26C 904D0000 */  lbu   $t5, ($v0)
/* 0046B270 25AFFFE0 */  addiu $t7, $t5, -0x20
/* 0046B274 2DEC0060 */  sltiu $t4, $t7, 0x60
/* 0046B278 11800009 */  beqz  $t4, .L0046B2A0
/* 0046B27C 00000000 */   nop   
/* 0046B280 8F8A8044 */  lw    $t2, %got(D_10010F98)($gp)
/* 0046B284 000F7143 */  sra   $t6, $t7, 5
/* 0046B288 000EC080 */  sll   $t8, $t6, 2
/* 0046B28C 254A0F98 */  addiu $t2, %lo(D_10010F98) # addiu $t2, $t2, 0xf98
/* 0046B290 0158C821 */  addu  $t9, $t2, $t8
/* 0046B294 8F290000 */  lw    $t1, ($t9)
/* 0046B298 01E94004 */  sllv  $t0, $t1, $t7
/* 0046B29C 290C0000 */  slti  $t4, $t0, 0
.L0046B2A0:
/* 0046B2A0 15800010 */  bnez  $t4, .L0046B2E4
/* 0046B2A4 00000000 */   nop   
/* 0046B2A8 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 0046B2AC 2404000C */  li    $a0, 12
/* 0046B2B0 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 0046B2B4 0320F809 */  jalr  $t9
/* 0046B2B8 00000000 */   nop   
/* 0046B2BC 8FBC005C */  lw    $gp, 0x5c($sp)
/* 0046B2C0 A0520000 */  sb    $s2, ($v0)
/* 0046B2C4 8EED0040 */  lw    $t5, 0x40($s7)
/* 0046B2C8 AC4D0004 */  sw    $t5, 4($v0)
/* 0046B2CC 8E2E0000 */  lw    $t6, ($s1)
/* 0046B2D0 8DCA00E4 */  lw    $t2, 0xe4($t6)
/* 0046B2D4 AC4A0008 */  sw    $t2, 8($v0)
/* 0046B2D8 8E380000 */  lw    $t8, ($s1)
/* 0046B2DC 10000017 */  b     .L0046B33C
/* 0046B2E0 AF0200E4 */   sw    $v0, 0xe4($t8)
.L0046B2E4:
/* 0046B2E4 8F998AB0 */  lw     $t9, %got(docreatebb)($gp)
/* 0046B2E8 93390000 */  lbu   $t9, ($t9)
/* 0046B2EC 032002B4 */  teq   $t9, $zero, 0xa
/* 0046B2F0 8E630000 */  lw    $v1, ($s3)
/* 0046B2F4 10600004 */  beqz  $v1, .L0046B308
/* 0046B2F8 00000000 */   nop   
/* 0046B2FC 8C490014 */  lw    $t1, 0x14($v0)
/* 0046B300 10690008 */  beq   $v1, $t1, .L0046B324
/* 0046B304 00000000 */   nop   
.L0046B308:
/* 0046B308 8F998554 */  lw    $t9, %call16(put_in_fallthru_bb)($gp)
/* 0046B30C 02002025 */  move  $a0, $s0
/* 0046B310 02402825 */  move  $a1, $s2
/* 0046B314 0320F809 */  jalr  $t9
/* 0046B318 24070001 */   li    $a3, 1
/* 0046B31C 10000007 */  b     .L0046B33C
/* 0046B320 8FBC005C */   lw    $gp, 0x5c($sp)
.L0046B324:
/* 0046B324 8F998558 */  lw    $t9, %call16(put_in_jump_bb)($gp)
/* 0046B328 02002025 */  move  $a0, $s0
/* 0046B32C 02402825 */  move  $a1, $s2
/* 0046B330 0320F809 */  jalr  $t9
/* 0046B334 24070001 */   li    $a3, 1
/* 0046B338 8FBC005C */  lw    $gp, 0x5c($sp)
.L0046B33C:
/* 0046B33C 8E310004 */  lw    $s1, 4($s1)
.L0046B340:
/* 0046B340 5620FFC3 */  bnezl $s1, .L0046B250
/* 0046B344 8E300000 */   lw    $s0, ($s1)
/* 0046B348 928500DA */  lbu   $a1, 0xda($s4)
.L0046B34C:
/* 0046B34C 928400D0 */  lbu   $a0, 0xd0($s4)
/* 0046B350 03C57004 */  sllv  $t6, $a1, $fp
/* 0046B354 000E57C2 */  srl   $t2, $t6, 0x1f
/* 0046B358 03C47804 */  sllv  $t7, $a0, $fp
/* 0046B35C 000F47C2 */  srl   $t0, $t7, 0x1f
/* 0046B360 39580001 */  xori  $t8, $t2, 1
/* 0046B364 00085FC0 */  sll   $t3, $t0, 0x1f
/* 0046B368 0018CFC0 */  sll   $t9, $t8, 0x1f
/* 0046B36C 03CB6006 */  srlv  $t4, $t3, $fp
/* 0046B370 03D94806 */  srlv  $t1, $t9, $fp
/* 0046B374 01257826 */  xor   $t7, $t1, $a1
/* 0046B378 01846826 */  xor   $t5, $t4, $a0
/* 0046B37C A28D00D0 */  sb    $t5, 0xd0($s4)
/* 0046B380 10000018 */  b     .L0046B3E4
/* 0046B384 A28F00DA */   sb    $t7, 0xda($s4)
.L0046B388:
/* 0046B388 928300D5 */  lbu   $v1, 0xd5($s4)
/* 0046B38C 305E0007 */  andi  $fp, $v0, 7
/* 0046B390 27DE0018 */  addiu $fp, $fp, 0x18
/* 0046B394 928400D0 */  lbu   $a0, 0xd0($s4)
/* 0046B398 928500DA */  lbu   $a1, 0xda($s4)
/* 0046B39C 03C35804 */  sllv  $t3, $v1, $fp
/* 0046B3A0 000B67C2 */  srl   $t4, $t3, 0x1f
/* 0046B3A4 000C6FC0 */  sll   $t5, $t4, 0x1f
/* 0046B3A8 03CD7006 */  srlv  $t6, $t5, $fp
/* 0046B3AC 03C4C004 */  sllv  $t8, $a0, $fp
/* 0046B3B0 03C55804 */  sllv  $t3, $a1, $fp
/* 0046B3B4 0018CFC2 */  srl   $t9, $t8, 0x1f
/* 0046B3B8 000B67C2 */  srl   $t4, $t3, 0x1f
/* 0046B3BC 01C35026 */  xor   $t2, $t6, $v1
/* 0046B3C0 00194FC0 */  sll   $t1, $t9, 0x1f
/* 0046B3C4 000C6FC0 */  sll   $t5, $t4, 0x1f
/* 0046B3C8 A28A00D5 */  sb    $t2, 0xd5($s4)
/* 0046B3CC 03C97806 */  srlv  $t7, $t1, $fp
/* 0046B3D0 03CD7006 */  srlv  $t6, $t5, $fp
/* 0046B3D4 01E44026 */  xor   $t0, $t7, $a0
/* 0046B3D8 01C55026 */  xor   $t2, $t6, $a1
/* 0046B3DC A28800D0 */  sb    $t0, 0xd0($s4)
/* 0046B3E0 A28A00DA */  sb    $t2, 0xda($s4)
.L0046B3E4:
/* 0046B3E4 8FB8007C */  lw    $t8, 0x7c($sp)
.L0046B3E8:
/* 0046B3E8 26520001 */  addiu $s2, $s2, 1
/* 0046B3EC 24010024 */  li    $at, 36
/* 0046B3F0 27190004 */  addiu $t9, $t8, 4
/* 0046B3F4 AFB9007C */  sw    $t9, 0x7c($sp)
/* 0046B3F8 1641FE71 */  bne   $s2, $at, .L0046ADC0
/* 0046B3FC 26F70004 */   addiu $s7, $s7, 4
/* 0046B400 8E73000C */  lw    $s3, 0xc($s3)
/* 0046B404 5660FE30 */  bnezl $s3, .L0046ACC8
/* 0046B408 8E640014 */   lw    $a0, 0x14($s3)
/* 0046B40C 8F9389AC */  lw     $s3, %got(graphhead)($gp)
/* 0046B410 8E730000 */  lw    $s3, ($s3)
.L0046B414:
/* 0046B414 8F898AA8 */  lw     $t1, %got(dorlodrstropt)($gp)
/* 0046B418 91290000 */  lbu   $t1, ($t1)
/* 0046B41C 112000EC */  beqz  $t1, .L0046B7D0
/* 0046B420 00000000 */   nop   
/* 0046B424 126000EA */  beqz  $s3, .L0046B7D0
/* 0046B428 240F0004 */   li    $t7, 4
.L0046B42C:
/* 0046B42C 24120001 */  li    $s2, 1
/* 0046B430 AFAF007C */  sw    $t7, 0x7c($sp)
/* 0046B434 26770004 */  addiu $s7, $s3, 4
.L0046B438:
/* 0046B438 8EE60040 */  lw    $a2, 0x40($s7)
/* 0046B43C 50C000DB */  beql  $a2, $zero, .L0046B7AC
/* 0046B440 8FB8007C */   lw    $t8, 0x7c($sp)
/* 0046B444 8F8289EC */  lw     $v0, %got(bittab)($gp)
/* 0046B448 94C80002 */  lhu   $t0, 2($a2)
/* 0046B44C 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 0046B450 8C420000 */  lw    $v0, ($v0)
/* 0046B454 000858C0 */  sll   $t3, $t0, 3
/* 0046B458 96640008 */  lhu   $a0, 8($s3)
/* 0046B45C 004B6021 */  addu  $t4, $v0, $t3
/* 0046B460 8D950004 */  lw    $s5, 4($t4)
/* 0046B464 26B40014 */  addiu $s4, $s5, 0x14
/* 0046B468 0320F809 */  jalr  $t9
/* 0046B46C 02802825 */   move  $a1, $s4
/* 0046B470 14400009 */  bnez  $v0, .L0046B498
/* 0046B474 8FBC005C */   lw    $gp, 0x5c($sp)
.L0046B478:
/* 0046B478 8EB50034 */  lw    $s5, 0x34($s5)
/* 0046B47C 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 0046B480 96640008 */  lhu   $a0, 8($s3)
/* 0046B484 26B40014 */  addiu $s4, $s5, 0x14
/* 0046B488 0320F809 */  jalr  $t9
/* 0046B48C 02802825 */   move  $a1, $s4
/* 0046B490 1040FFF9 */  beqz  $v0, .L0046B478
/* 0046B494 8FBC005C */   lw    $gp, 0x5c($sp)
.L0046B498:
/* 0046B498 8E6D0020 */  lw    $t5, 0x20($s3)
/* 0046B49C 00001025 */  move  $v0, $zero
/* 0046B4A0 91AE0000 */  lbu   $t6, ($t5)
/* 0046B4A4 2DCA0040 */  sltiu $t2, $t6, 0x40
/* 0046B4A8 11400009 */  beqz  $t2, .L0046B4D0
/* 0046B4AC 00000000 */   nop   
/* 0046B4B0 8F898044 */  lw    $t1, %got(D_10010FAC)($gp)
/* 0046B4B4 000EC143 */  sra   $t8, $t6, 5
/* 0046B4B8 0018C880 */  sll   $t9, $t8, 2
/* 0046B4BC 25290FAC */  addiu $t1, %lo(D_10010FAC) # addiu $t1, $t1, 0xfac
/* 0046B4C0 01397821 */  addu  $t7, $t1, $t9
/* 0046B4C4 8DE80000 */  lw    $t0, ($t7)
/* 0046B4C8 01C85804 */  sllv  $t3, $t0, $t6
/* 0046B4CC 296A0000 */  slti  $t2, $t3, 0
.L0046B4D0:
/* 0046B4D0 15400003 */  bnez  $t2, .L0046B4E0
/* 0046B4D4 00000000 */   nop   
/* 0046B4D8 10000001 */  b     .L0046B4E0
/* 0046B4DC 24020001 */   li    $v0, 1
.L0046B4E0:
/* 0046B4E0 104000B1 */  beqz  $v0, .L0046B7A8
/* 0046B4E4 AFB50114 */   sw    $s5, 0x114($sp)
/* 0046B4E8 2642FFFF */  addiu $v0, $s2, -1
/* 0046B4EC 000218C3 */  sra   $v1, $v0, 3
/* 0046B4F0 02636821 */  addu  $t5, $s3, $v1
/* 0046B4F4 91B800D5 */  lbu   $t8, 0xd5($t5)
/* 0046B4F8 305E0007 */  andi  $fp, $v0, 7
/* 0046B4FC 27DE0018 */  addiu $fp, $fp, 0x18
/* 0046B500 03D84804 */  sllv  $t1, $t8, $fp
/* 0046B504 0009CFC2 */  srl   $t9, $t1, 0x1f
/* 0046B508 132000A7 */  beqz  $t9, .L0046B7A8
/* 0046B50C AFB50114 */   sw    $s5, 0x114($sp)
/* 0046B510 8E640018 */  lw    $a0, 0x18($s3)
/* 0046B514 AFB50114 */  sw    $s5, 0x114($sp)
/* 0046B518 02402825 */  move  $a1, $s2
/* 0046B51C 508000A3 */  beql  $a0, $zero, .L0046B7AC
/* 0046B520 8FB8007C */   lw    $t8, 0x7c($sp)
/* 0046B524 8F99851C */  lw    $t9, %call16(somepostmember)($gp)
/* 0046B528 8EE60040 */  lw    $a2, 0x40($s7)
/* 0046B52C 02A03825 */  move  $a3, $s5
/* 0046B530 0320F809 */  jalr  $t9
/* 0046B534 AFA30078 */   sw    $v1, 0x78($sp)
/* 0046B538 8FBC005C */  lw    $gp, 0x5c($sp)
/* 0046B53C 1040009A */  beqz  $v0, .L0046B7A8
/* 0046B540 AFB50114 */   sw    $s5, 0x114($sp)
/* 0046B544 8F8F8AB0 */  lw     $t7, %got(docreatebb)($gp)
/* 0046B548 AFB50114 */  sw    $s5, 0x114($sp)
/* 0046B54C 02402825 */  move  $a1, $s2
/* 0046B550 91EF0000 */  lbu   $t7, ($t7)
/* 0046B554 02A03825 */  move  $a3, $s5
/* 0046B558 55E00009 */  bnezl $t7, .L0046B580
/* 0046B55C 8E680020 */   lw    $t0, 0x20($s3)
/* 0046B560 8F998524 */  lw    $t9, %call16(allsucppin)($gp)
/* 0046B564 8E640018 */  lw    $a0, 0x18($s3)
/* 0046B568 8EE60040 */  lw    $a2, 0x40($s7)
/* 0046B56C 0320F809 */  jalr  $t9
/* 0046B570 AFB50114 */   sw    $s5, 0x114($sp)
/* 0046B574 1040008C */  beqz  $v0, .L0046B7A8
/* 0046B578 8FBC005C */   lw    $gp, 0x5c($sp)
/* 0046B57C 8E680020 */  lw    $t0, 0x20($s3)
.L0046B580:
/* 0046B580 910E0000 */  lbu   $t6, ($t0)
/* 0046B584 25CBFFE0 */  addiu $t3, $t6, -0x20
/* 0046B588 2D6C0080 */  sltiu $t4, $t3, 0x80
/* 0046B58C 11800009 */  beqz  $t4, .L0046B5B4
/* 0046B590 00000000 */   nop   
/* 0046B594 8F988044 */  lw    $t8, %got(D_10010F88)($gp)
/* 0046B598 000B5143 */  sra   $t2, $t3, 5
/* 0046B59C 000A6880 */  sll   $t5, $t2, 2
/* 0046B5A0 27180F88 */  addiu $t8, %lo(D_10010F88) # addiu $t8, $t8, 0xf88
/* 0046B5A4 030D4821 */  addu  $t1, $t8, $t5
/* 0046B5A8 8D390000 */  lw    $t9, ($t1)
/* 0046B5AC 01797804 */  sllv  $t7, $t9, $t3
/* 0046B5B0 29EC0000 */  slti  $t4, $t7, 0
.L0046B5B4:
/* 0046B5B4 5580007D */  bnezl $t4, .L0046B7AC
/* 0046B5B8 8FB8007C */   lw    $t8, 0x7c($sp)
/* 0046B5BC 8E710018 */  lw    $s1, 0x18($s3)
/* 0046B5C0 52200071 */  beql  $s1, $zero, .L0046B788
/* 0046B5C4 8FAF0078 */   lw    $t7, 0x78($sp)
/* 0046B5C8 8E300000 */  lw    $s0, ($s1)
.L0046B5CC:
/* 0046B5CC 8FAA007C */  lw    $t2, 0x7c($sp)
/* 0046B5D0 8EEE0040 */  lw    $t6, 0x40($s7)
/* 0046B5D4 8FA90078 */  lw    $t1, 0x78($sp)
/* 0046B5D8 020AC021 */  addu  $t8, $s0, $t2
/* 0046B5DC 8F0D0040 */  lw    $t5, 0x40($t8)
/* 0046B5E0 02091021 */  addu  $v0, $s0, $t1
/* 0046B5E4 55CD0014 */  bnel  $t6, $t5, .L0046B638
/* 0046B5E8 8E630020 */   lw    $v1, 0x20($s3)
/* 0046B5EC 905900D0 */  lbu   $t9, 0xd0($v0)
/* 0046B5F0 03D95804 */  sllv  $t3, $t9, $fp
/* 0046B5F4 000B7FC2 */  srl   $t7, $t3, 0x1f
/* 0046B5F8 55E0000F */  bnezl $t7, .L0046B638
/* 0046B5FC 8E630020 */   lw    $v1, 0x20($s3)
/* 0046B600 904800DA */  lbu   $t0, 0xda($v0)
/* 0046B604 03C86004 */  sllv  $t4, $t0, $fp
/* 0046B608 000C57C2 */  srl   $t2, $t4, 0x1f
/* 0046B60C 5140005B */  beql  $t2, $zero, .L0046B77C
/* 0046B610 8E310004 */   lw    $s1, 4($s1)
/* 0046B614 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 0046B618 96040008 */  lhu   $a0, 8($s0)
/* 0046B61C 02802825 */  move  $a1, $s4
/* 0046B620 0320F809 */  jalr  $t9
/* 0046B624 00000000 */   nop   
/* 0046B628 14400053 */  bnez  $v0, .L0046B778
/* 0046B62C 8FBC005C */   lw    $gp, 0x5c($sp)
/* 0046B630 8E300000 */  lw    $s0, ($s1)
/* 0046B634 8E630020 */  lw    $v1, 0x20($s3)
.L0046B638:
/* 0046B638 90780000 */  lbu   $t8, ($v1)
/* 0046B63C 270EFFE0 */  addiu $t6, $t8, -0x20
/* 0046B640 2DCD0060 */  sltiu $t5, $t6, 0x60
/* 0046B644 51A0000A */  beql  $t5, $zero, .L0046B670
/* 0046B648 01A002B4 */   teq   $t5, $zero, 0xa
/* 0046B64C 8F8B8044 */  lw    $t3, %got(D_10010F98)($gp)
/* 0046B650 000E4943 */  sra   $t1, $t6, 5
/* 0046B654 0009C880 */  sll   $t9, $t1, 2
/* 0046B658 256B0F98 */  addiu $t3, %lo(D_10010F98) # addiu $t3, $t3, 0xf98
/* 0046B65C 01797821 */  addu  $t7, $t3, $t9
/* 0046B660 8DE80000 */  lw    $t0, ($t7)
/* 0046B664 01C86004 */  sllv  $t4, $t0, $t6
/* 0046B668 298D0000 */  slti  $t5, $t4, 0
/* 0046B66C 01A002B4 */  teq   $t5, $zero, 0xa
.L0046B670:
/* 0046B670 8E020000 */  lw    $v0, ($s0)
/* 0046B674 10400004 */  beqz  $v0, .L0046B688
/* 0046B678 00000000 */   nop   
/* 0046B67C 8C780014 */  lw    $t8, 0x14($v1)
/* 0046B680 5302001D */  beql  $t8, $v0, .L0046B6F8
/* 0046B684 8E0E0014 */   lw    $t6, 0x14($s0)
.L0046B688:
/* 0046B688 8F898AB0 */  lw     $t1, %got(docreatebb)($gp)
/* 0046B68C 02602025 */  move  $a0, $s3
/* 0046B690 91290000 */  lbu   $t1, ($t1)
/* 0046B694 11200008 */  beqz  $t1, .L0046B6B8
/* 0046B698 00000000 */   nop   
/* 0046B69C 8F998554 */  lw    $t9, %call16(put_in_fallthru_bb)($gp)
/* 0046B6A0 02402825 */  move  $a1, $s2
/* 0046B6A4 8EE60040 */  lw    $a2, 0x40($s7)
/* 0046B6A8 0320F809 */  jalr  $t9
/* 0046B6AC 00003825 */   move  $a3, $zero
/* 0046B6B0 10000031 */  b     .L0046B778
/* 0046B6B4 8FBC005C */   lw    $gp, 0x5c($sp)
.L0046B6B8:
/* 0046B6B8 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 0046B6BC 2404000C */  li    $a0, 12
/* 0046B6C0 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 0046B6C4 0320F809 */  jalr  $t9
/* 0046B6C8 00000000 */   nop   
/* 0046B6CC 8FBC005C */  lw    $gp, 0x5c($sp)
/* 0046B6D0 A0520000 */  sb    $s2, ($v0)
/* 0046B6D4 8EEB0040 */  lw    $t3, 0x40($s7)
/* 0046B6D8 AC4B0004 */  sw    $t3, 4($v0)
/* 0046B6DC 8E390000 */  lw    $t9, ($s1)
/* 0046B6E0 8F2F00E0 */  lw    $t7, 0xe0($t9)
/* 0046B6E4 AC4F0008 */  sw    $t7, 8($v0)
/* 0046B6E8 8E280000 */  lw    $t0, ($s1)
/* 0046B6EC 10000022 */  b     .L0046B778
/* 0046B6F0 AD0200E0 */   sw    $v0, 0xe0($t0)
/* 0046B6F4 8E0E0014 */  lw    $t6, 0x14($s0)
.L0046B6F8:
/* 0046B6F8 02602025 */  move  $a0, $s3
/* 0046B6FC 8DCC0004 */  lw    $t4, 4($t6)
/* 0046B700 15800004 */  bnez  $t4, .L0046B714
/* 0046B704 00000000 */   nop   
/* 0046B708 920A0004 */  lbu   $t2, 4($s0)
/* 0046B70C 1140000C */  beqz  $t2, .L0046B740
/* 0046B710 00000000 */   nop   
.L0046B714:
/* 0046B714 8F998558 */  lw    $t9, %call16(put_in_jump_bb)($gp)
/* 0046B718 02402825 */  move  $a1, $s2
/* 0046B71C 8EE60040 */  lw    $a2, 0x40($s7)
/* 0046B720 0320F809 */  jalr  $t9
/* 0046B724 00003825 */   move  $a3, $zero
/* 0046B728 8FBC005C */  lw    $gp, 0x5c($sp)
/* 0046B72C 8F8D8AB0 */  lw     $t5, %got(docreatebb)($gp)
/* 0046B730 91AD0000 */  lbu   $t5, ($t5)
/* 0046B734 01A002B4 */  teq   $t5, $zero, 0xa
/* 0046B738 10000010 */  b     .L0046B77C
/* 0046B73C 8E310004 */   lw    $s1, 4($s1)
.L0046B740:
/* 0046B740 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 0046B744 2404000C */  li    $a0, 12
/* 0046B748 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 0046B74C 0320F809 */  jalr  $t9
/* 0046B750 00000000 */   nop   
/* 0046B754 8FBC005C */  lw    $gp, 0x5c($sp)
/* 0046B758 A0520000 */  sb    $s2, ($v0)
/* 0046B75C 8EF80040 */  lw    $t8, 0x40($s7)
/* 0046B760 AC580004 */  sw    $t8, 4($v0)
/* 0046B764 8E290000 */  lw    $t1, ($s1)
/* 0046B768 8D2B00E0 */  lw    $t3, 0xe0($t1)
/* 0046B76C AC4B0008 */  sw    $t3, 8($v0)
/* 0046B770 8E390000 */  lw    $t9, ($s1)
/* 0046B774 AF2200E0 */  sw    $v0, 0xe0($t9)
.L0046B778:
/* 0046B778 8E310004 */  lw    $s1, 4($s1)
.L0046B77C:
/* 0046B77C 5620FF93 */  bnezl $s1, .L0046B5CC
/* 0046B780 8E300000 */   lw    $s0, ($s1)
/* 0046B784 8FAF0078 */  lw    $t7, 0x78($sp)
.L0046B788:
/* 0046B788 026FA021 */  addu  $s4, $s3, $t7
/* 0046B78C 928300D5 */  lbu   $v1, 0xd5($s4)
/* 0046B790 03C34004 */  sllv  $t0, $v1, $fp
/* 0046B794 000877C2 */  srl   $t6, $t0, 0x1f
/* 0046B798 000E67C0 */  sll   $t4, $t6, 0x1f
/* 0046B79C 03CC5006 */  srlv  $t2, $t4, $fp
/* 0046B7A0 01436826 */  xor   $t5, $t2, $v1
/* 0046B7A4 A28D00D5 */  sb    $t5, 0xd5($s4)
.L0046B7A8:
/* 0046B7A8 8FB8007C */  lw    $t8, 0x7c($sp)
.L0046B7AC:
/* 0046B7AC 26520001 */  addiu $s2, $s2, 1
/* 0046B7B0 24010024 */  li    $at, 36
/* 0046B7B4 27090004 */  addiu $t1, $t8, 4
/* 0046B7B8 AFA9007C */  sw    $t1, 0x7c($sp)
/* 0046B7BC 1641FF1E */  bne   $s2, $at, .L0046B438
/* 0046B7C0 26F70004 */   addiu $s7, $s7, 4
/* 0046B7C4 8E73000C */  lw    $s3, 0xc($s3)
/* 0046B7C8 5660FF18 */  bnezl $s3, .L0046B42C
/* 0046B7CC 240F0004 */   li    $t7, 4
.L0046B7D0:
/* 0046B7D0 8F828A94 */  lw     $v0, %got(dbugno)($gp)
/* 0046B7D4 24010007 */  li    $at, 7
/* 0046B7D8 8C420000 */  lw    $v0, ($v0)
/* 0046B7DC 54410008 */  bnel  $v0, $at, .L0046B800
/* 0046B7E0 2C4B0020 */   sltiu $t3, $v0, 0x20
/* 0046B7E4 8F998254 */  lw    $t9, %call16(printinterproc)($gp)
/* 0046B7E8 0320F809 */  jalr  $t9
/* 0046B7EC 00000000 */   nop   
/* 0046B7F0 8FBC005C */  lw    $gp, 0x5c($sp)
/* 0046B7F4 8F828A94 */  lw     $v0, %got(dbugno)($gp)
/* 0046B7F8 8C420000 */  lw    $v0, ($v0)
/* 0046B7FC 2C4B0020 */  sltiu $t3, $v0, 0x20
.L0046B800:
/* 0046B800 000BC823 */  negu  $t9, $t3
/* 0046B804 3C013000 */  lui   $at, 0x3000
/* 0046B808 03217824 */  and   $t7, $t9, $at
/* 0046B80C 004F4004 */  sllv  $t0, $t7, $v0
/* 0046B810 05010062 */  bgez  $t0, .L0046B99C
/* 0046B814 2406000D */   li    $a2, 13
/* 0046B818 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0046B81C 8F848CCC */  lw     $a0, %got(list)($gp)
/* 0046B820 8F858044 */  lw    $a1, %got(RO_1000D6EC)($gp)
/* 0046B824 2407000D */  li    $a3, 13
/* 0046B828 8C840000 */  lw    $a0, ($a0)
/* 0046B82C 0320F809 */  jalr  $t9
/* 0046B830 24A5D6EC */   addiu $a1, %lo(RO_1000D6EC) # addiu $a1, $a1, -0x2914
/* 0046B834 8FBC005C */  lw    $gp, 0x5c($sp)
/* 0046B838 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0046B83C 8F848D78 */  lw     $a0, %got(iscolored)($gp)
/* 0046B840 0320F809 */  jalr  $t9
/* 0046B844 00000000 */   nop   
/* 0046B848 8FBC005C */  lw    $gp, 0x5c($sp)
/* 0046B84C 2406000D */  li    $a2, 13
/* 0046B850 2407000D */  li    $a3, 13
/* 0046B854 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0046B858 8F848CCC */  lw     $a0, %got(list)($gp)
/* 0046B85C 8F858044 */  lw    $a1, %got(RO_1000D6DF)($gp)
/* 0046B860 8C840000 */  lw    $a0, ($a0)
/* 0046B864 0320F809 */  jalr  $t9
/* 0046B868 24A5D6DF */   addiu $a1, %lo(RO_1000D6DF) # addiu $a1, $a1, -0x2921
/* 0046B86C 8FBC005C */  lw    $gp, 0x5c($sp)
/* 0046B870 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0046B874 8F848D78 */  lw     $a0, %got(iscolored)($gp)
/* 0046B878 0320F809 */  jalr  $t9
/* 0046B87C 24840008 */   addiu $a0, $a0, 8
/* 0046B880 8FBC005C */  lw    $gp, 0x5c($sp)
/* 0046B884 2406000B */  li    $a2, 11
/* 0046B888 2407000B */  li    $a3, 11
/* 0046B88C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0046B890 8F848CCC */  lw     $a0, %got(list)($gp)
/* 0046B894 8F858044 */  lw    $a1, %got(RO_1000D6D4)($gp)
/* 0046B898 8C840000 */  lw    $a0, ($a0)
/* 0046B89C 0320F809 */  jalr  $t9
/* 0046B8A0 24A5D6D4 */   addiu $a1, %lo(RO_1000D6D4) # addiu $a1, $a1, -0x292c
/* 0046B8A4 8FBC005C */  lw    $gp, 0x5c($sp)
/* 0046B8A8 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0046B8AC 8F848D64 */  lw     $a0, %got(colorcand)($gp)
/* 0046B8B0 0320F809 */  jalr  $t9
/* 0046B8B4 00000000 */   nop   
/* 0046B8B8 8FBC005C */  lw    $gp, 0x5c($sp)
/* 0046B8BC 2406000E */  li    $a2, 14
/* 0046B8C0 2407000E */  li    $a3, 14
/* 0046B8C4 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0046B8C8 8F848CCC */  lw     $a0, %got(list)($gp)
/* 0046B8CC 8F858044 */  lw    $a1, %got(RO_1000D6C6)($gp)
/* 0046B8D0 8C840000 */  lw    $a0, ($a0)
/* 0046B8D4 0320F809 */  jalr  $t9
/* 0046B8D8 24A5D6C6 */   addiu $a1, %lo(RO_1000D6C6) # addiu $a1, $a1, -0x293a
/* 0046B8DC 8FBC005C */  lw    $gp, 0x5c($sp)
/* 0046B8E0 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0046B8E4 8F848D60 */  lw     $a0, %got(unconstrain)($gp)
/* 0046B8E8 0320F809 */  jalr  $t9
/* 0046B8EC 00000000 */   nop   
/* 0046B8F0 8FBC005C */  lw    $gp, 0x5c($sp)
/* 0046B8F4 24060009 */  li    $a2, 9
/* 0046B8F8 24070009 */  li    $a3, 9
/* 0046B8FC 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0046B900 8F848CCC */  lw     $a0, %got(list)($gp)
/* 0046B904 8F858044 */  lw    $a1, %got(RO_1000D6BD)($gp)
/* 0046B908 8C840000 */  lw    $a0, ($a0)
/* 0046B90C 0320F809 */  jalr  $t9
/* 0046B910 24A5D6BD */   addiu $a1, %lo(RO_1000D6BD) # addiu $a1, $a1, -0x2943
/* 0046B914 8FBC005C */  lw    $gp, 0x5c($sp)
/* 0046B918 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0046B91C 8F848D1C */  lw     $a0, %got(vareqv)($gp)
/* 0046B920 0320F809 */  jalr  $t9
/* 0046B924 00000000 */   nop   
/* 0046B928 8FBC005C */  lw    $gp, 0x5c($sp)
/* 0046B92C 2406000A */  li    $a2, 10
/* 0046B930 2407000A */  li    $a3, 10
/* 0046B934 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0046B938 8F848CCC */  lw     $a0, %got(list)($gp)
/* 0046B93C 8F858044 */  lw    $a1, %got(RO_1000D6B3)($gp)
/* 0046B940 8C840000 */  lw    $a0, ($a0)
/* 0046B944 0320F809 */  jalr  $t9
/* 0046B948 24A5D6B3 */   addiu $a1, %lo(RO_1000D6B3) # addiu $a1, $a1, -0x294d
/* 0046B94C 8FBC005C */  lw    $gp, 0x5c($sp)
/* 0046B950 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0046B954 8F848D20 */  lw     $a0, %got(asgneqv)($gp)
/* 0046B958 0320F809 */  jalr  $t9
/* 0046B95C 00000000 */   nop   
/* 0046B960 8FBC005C */  lw    $gp, 0x5c($sp)
/* 0046B964 2406000F */  li    $a2, 15
/* 0046B968 2407000F */  li    $a3, 15
/* 0046B96C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0046B970 8F848CCC */  lw     $a0, %got(list)($gp)
/* 0046B974 8F858044 */  lw    $a1, %got(RO_1000D6A4)($gp)
/* 0046B978 8C840000 */  lw    $a0, ($a0)
/* 0046B97C 0320F809 */  jalr  $t9
/* 0046B980 24A5D6A4 */   addiu $a1, %lo(RO_1000D6A4) # addiu $a1, $a1, -0x295c
/* 0046B984 8FBC005C */  lw    $gp, 0x5c($sp)
/* 0046B988 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0046B98C 8F848D24 */  lw     $a0, %got(coloredparms)($gp)
/* 0046B990 0320F809 */  jalr  $t9
/* 0046B994 00000000 */   nop   
/* 0046B998 8FBC005C */  lw    $gp, 0x5c($sp)
.L0046B99C:
/* 0046B99C 8FBF0064 */  lw    $ra, 0x64($sp)
.L0046B9A0:
/* 0046B9A0 D7B40010 */  ldc1  $f20, 0x10($sp)
/* 0046B9A4 D7B60018 */  ldc1  $f22, 0x18($sp)
/* 0046B9A8 D7B80020 */  ldc1  $f24, 0x20($sp)
/* 0046B9AC D7BA0028 */  ldc1  $f26, 0x28($sp)
/* 0046B9B0 D7BC0030 */  ldc1  $f28, 0x30($sp)
/* 0046B9B4 8FB0003C */  lw    $s0, 0x3c($sp)
/* 0046B9B8 8FB10040 */  lw    $s1, 0x40($sp)
/* 0046B9BC 8FB20044 */  lw    $s2, 0x44($sp)
/* 0046B9C0 8FB30048 */  lw    $s3, 0x48($sp)
/* 0046B9C4 8FB4004C */  lw    $s4, 0x4c($sp)
/* 0046B9C8 8FB50050 */  lw    $s5, 0x50($sp)
/* 0046B9CC 8FB60054 */  lw    $s6, 0x54($sp)
/* 0046B9D0 8FB70058 */  lw    $s7, 0x58($sp)
/* 0046B9D4 8FBE0060 */  lw    $fp, 0x60($sp)
/* 0046B9D8 03E00008 */  jr    $ra
/* 0046B9DC 27BD0120 */   addiu $sp, $sp, 0x120
    .type globalcolor, @function
    .size globalcolor, .-globalcolor
    .end globalcolor
)"");
