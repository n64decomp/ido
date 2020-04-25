__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
RO_1000C200:
    # 00439C40 getop
    .asciz "uoptinput.p"

    .balign 4
jtbl_1000C20C:
    # 00439C40 getop
    .gpword .L00439EEC
    .gpword .L00439EF8

RO_1000C214:
    # 0043A0CC copyline
    .ascii ": optimized code not allowed as input"

RO_1000C239:
    # 0043A0CC copyline
    .ascii "uopt: Error: "

RO_1000C246:
    # 0043ABD0 incroccurrence
    .asciz "uoptinput.p"

    .balign 4
jtbl_1000C254:
    # 0043ABD0 incroccurrence
    .gpword .L0043AD64
    .gpword .L0043AD64
    .gpword .L0043AD64
    .gpword .L0043AD7C
    .gpword .L0043AD64
    .gpword .L0043AD64
    .gpword .L0043ADCC
    .gpword .L0043AD64

RO_1000C274:
    # 0043B504 func_0043B504
    .asciz "uoptinput.p"

    .balign 4
jtbl_1000C280:
    # 0043B504 func_0043B504
    .gpword .L0043BC00
    .gpword .L0043B9A8
    .gpword .L0043BD28
    .gpword .L0043C034
    .gpword .L0043B9A8
    .gpword .L0043C034
    .gpword .L0043C034
    .gpword .L0043C034
    .gpword .L0043C034
    .gpword .L0043BA88
    .gpword .L0043C034
    .gpword .L0043C034
    .gpword .L0043BC58
    .gpword .L0043BC58
    .gpword .L0043BD74

    .balign 4
jtbl_1000C2BC:
    # 0043B504 func_0043B504
    .gpword .L0043BCC0
    .gpword .L0043BC58
    .gpword .L0043BC58
    .gpword .L0043C034
    .gpword .L0043BA88
    .gpword .L0043BA88

    .balign 4
jtbl_1000C2D4:
    # 0043B504 func_0043B504
    .gpword .L0043BAF0
    .gpword .L0043BAF0
    .gpword .L0043C034
    .gpword .L0043C034
    .gpword .L0043C034
    .gpword .L0043C034
    .gpword .L0043BE3C
    .gpword .L0043BEB4
    .gpword .L0043BEB4
    .gpword .L0043C034
    .gpword .L0043B818
    .gpword .L0043BE18
    .gpword .L0043BEB4
    .gpword .L0043BEB4
    .gpword .L0043BDA0
    .gpword .L0043BC58
    .gpword .L0043BE3C
    .gpword .L0043C034
    .gpword .L0043BB40
    .gpword .L0043B9A8
    .gpword .L0043B9A8
    .gpword .L0043B6D8
    .gpword .L0043B6D8
    .gpword .L0043C034
    .gpword .L0043C034
    .gpword .L0043BBA0
    .gpword .L0043C034
    .gpword .L0043C034
    .gpword .L0043C034
    .gpword .L0043C034
    .gpword .L0043C0B4
    .gpword .L0043B7A8
    .gpword .L0043C034
    .gpword .L0043B894
    .gpword .L0043C034
    .gpword .L0043C034
    .gpword .L0043C034
    .gpword .L0043BAF0
    .gpword .L0043BAF0
    .gpword .L0043C034
    .gpword .L0043BC00
    .gpword .L0043C034
    .gpword .L0043B620
    .gpword .L0043C034
    .gpword .L0043C034
    .gpword .L0043BA88
    .gpword .L0043BA88
    .gpword .L0043BA88
    .gpword .L0043C034
    .gpword .L0043C034
    .gpword .L0043C034
    .gpword .L0043B9A8
    .gpword .L0043C034
    .gpword .L0043BA88
    .gpword .L0043BC00
    .gpword .L0043BA24
    .gpword .L0043C034
    .gpword .L0043BC00
    .gpword .L0043BC00

    .balign 4
jtbl_1000C3C0:
    # 0043B504 func_0043B504
    .gpword .L0043BCC0
    .gpword .L0043C034
    .gpword .L0043C034
    .gpword .L0043C034
    .gpword .L0043BC00
    .gpword .L0043BA88
    .gpword .L0043BA88
    .gpword .L0043BA88
    .gpword .L0043BC00
    .gpword .L0043BC00
    .gpword .L0043C034
    .gpword .L0043C034
    .gpword .L0043C034
    .gpword .L0043B620
    .gpword .L0043C034
    .gpword .L0043BA88

    .balign 4
jtbl_1000C400:
    # 0043B504 func_0043B504
    .gpword .L0043BCC0
    .gpword .L0043C034
    .gpword .L0043C034
    .gpword .L0043C034
    .gpword .L0043B9A8
    .gpword .L0043C034
    .gpword .L0043C034
    .gpword .L0043B9A8

    .balign 4
jtbl_1000C420:
    # 0043B504 func_0043B504
    .gpword .L0043BDA0
    .gpword .L0043C034
    .gpword .L0043B970

RO_1000C42C:
    # 0043CFCC readnxtinst
    .ascii "uoptinput.p"

RO_1000C437:
    # 0043CFCC readnxtinst
    .ascii "uoptinput.p"

RO_1000C442:
    # 0043CFCC readnxtinst
    .ascii "uoptinput.p"

RO_1000C44D:
    # 0043CFCC readnxtinst
    .ascii "uoptinput.p"

RO_1000C458:
    # 0043CFCC readnxtinst
    .ascii "uoptinput.p"

RO_1000C463:
    # 0043CFCC readnxtinst
    .ascii "uoptinput.p"

RO_1000C46E:
    # 0043CFCC readnxtinst
    .ascii "uoptinput.p"

RO_1000C479:
    # 0043CFCC readnxtinst
    .ascii "uoptinput.p"

    .balign 4
jtbl_1000C484:
    # 0043CFCC readnxtinst
    .gpword .L0043DB44
    .gpword .L0043DCB0
    .gpword .L0043DCDC

    .balign 4
jtbl_1000C490:
    # 0043CFCC readnxtinst
    .gpword .L0043DA64
    .gpword .L0043DA64
    .gpword .L0043DAB0
    .gpword .L0043DB14
    .gpword .L0043DB14
    .gpword .L0043DB14
    .gpword .L0043DD60
    .gpword .L0043DA64

    .balign 4
jtbl_1000C4B0:
    # 0043CFCC readnxtinst
    .gpword .L0043E9C4
    .gpword .L0043E97C
    .gpword .L0043E91C
    .gpword .L0043E97C
    .gpword .L0043E9C4

    .balign 4
jtbl_1000C4C4:
    # 0043CFCC readnxtinst
    .gpword .L0043EBBC
    .gpword .L0043EC14

    .balign 4
jtbl_1000C4CC:
    # 0043CFCC readnxtinst
    .gpword .L0043EBBC
    .gpword .L0043EC14

    .balign 4
jtbl_1000C4D4:
    # 0043CFCC readnxtinst
    .gpword .L00443910
    .gpword .L00443958
    .gpword .L004438C8

    .balign 4
jtbl_1000C4E0:
    # 0043CFCC readnxtinst
    .gpword .L004439F4
    .gpword .L00443A34
    .gpword .L004439B4

    .balign 4
jtbl_1000C4EC:
    # 0043CFCC readnxtinst
    .gpword .L00443CBC
    .gpword .L00443D3C
    .gpword .L00443CEC

    .balign 4
jtbl_1000C4F8:
    # 0043CFCC readnxtinst
    .gpword .L0043FB48
    .gpword .L0043E4CC
    .gpword .L00440574
    .gpword .L0044453C
    .gpword .L0043E4CC
    .gpword .L00441EEC
    .gpword .L00444750
    .gpword .L00444750
    .gpword .L00443DAC
    .gpword .L0043E4CC
    .gpword .L00444750
    .gpword .L00444750
    .gpword .L00440108
    .gpword .L00440108
    .gpword .L00440670
    .gpword .L00441E94
    .gpword .L0044428C
    .gpword .L0044244C
    .gpword .L0044469C
    .gpword .L00444750
    .gpword .L00444750
    .gpword .L004446D0
    .gpword .L0044469C
    .gpword .L00443EBC
    .gpword .L00440298
    .gpword .L00440108
    .gpword .L00440108
    .gpword .L00443E64
    .gpword .L0043E4CC
    .gpword .L0043E4CC
    .gpword .L00440F7C
    .gpword .L00444750
    .gpword .L00443DAC
    .gpword .L00444750
    .gpword .L00444750
    .gpword .L0043E4CC
    .gpword .L00444750
    .gpword .L00444750
    .gpword .L00441FA8
    .gpword .L00444750
    .gpword .L0043E4CC
    .gpword .L0043E4CC
    .gpword .L00444750
    .gpword .L00444750
    .gpword .L00443EBC
    .gpword .L0043F7B0
    .gpword .L00440DC8
    .gpword .L00440DC8
    .gpword .L00440DC8
    .gpword .L00442974
    .gpword .L0043DD8C
    .gpword .L00440750
    .gpword .L00440DC8
    .gpword .L00440DC8
    .gpword .L00440750
    .gpword .L00440108
    .gpword .L00440DC8
    .gpword .L00444750
    .gpword .L0043E4CC
    .gpword .L0043E4CC
    .gpword .L0043E4CC
    .gpword .L0043D3D4
    .gpword .L004410D4
    .gpword .L00442D4C
    .gpword .L00442D4C
    .gpword .L0043F634
    .gpword .L00441FA8
    .gpword .L00444770
    .gpword .L00444674
    .gpword .L00444634
    .gpword .L00440FC4
    .gpword .L0043DD8C
    .gpword .L0043D24C
    .gpword .L0043E070
    .gpword .L00441F5C
    .gpword .L0043D24C
    .gpword .L0044465C
    .gpword .L0043E4CC
    .gpword .L0043E4CC
    .gpword .L00444750
    .gpword .L0043FB48
    .gpword .L00443DF4
    .gpword .L0043D3D4
    .gpword .L00444750
    .gpword .L0044465C
    .gpword .L0043E4CC
    .gpword .L0043E4CC
    .gpword .L0043E4CC
    .gpword .L00443524
    .gpword .L00443524
    .gpword .L00444750
    .gpword .L0043E4CC
    .gpword .L00442A08
    .gpword .L0043E4CC
    .gpword .L0043FB48
    .gpword .L0043E4CC
    .gpword .L00444750
    .gpword .L0043FB48
    .gpword .L0043FB48
    .gpword .L00444750
    .gpword .L00442A70
    .gpword .L00444750
    .gpword .L00442C64
    .gpword .L00444440
    .gpword .L00444750
    .gpword .L0043E4CC
    .gpword .L00443DD4
    .gpword .L00444750
    .gpword .L00444750
    .gpword .L00444750
    .gpword .L00440298
    .gpword .L00444750
    .gpword .L00444750
    .gpword .L00444750
    .gpword .L0043FB48
    .gpword .L0043E4CC
    .gpword .L0043E4CC
    .gpword .L0043E4CC
    .gpword .L0043FB48
    .gpword .L0043FB48
    .gpword .L00444750
    .gpword .L0044469C
    .gpword .L00444750
    .gpword .L004410D4
    .gpword .L00443748
    .gpword .L0043E4CC
    .gpword .L00444508
    .gpword .L00441FA8
    .gpword .L004437B4
    .gpword .L004437B4
    .gpword .L004437B4
    .gpword .L004437B4
    .gpword .L004437B4
    .gpword .L004437B4
    .gpword .L00440298
    .gpword .L00444770
    .gpword .L00441FA8
    .gpword .L00444750
    .gpword .L0043E4CC
    .gpword .L00444750
    .gpword .L00442680
    .gpword .L0043E4CC
    .gpword .L00442A70
    .gpword .L00444750
    .gpword .L00444750
    .gpword .L00444750
    .gpword .L00444750
    .gpword .L00440A98
    .gpword .L004431E8
    .gpword .L0043E430
    .gpword .L00444750
    .gpword .L00443EBC
    .gpword .L00444750
    .gpword .L00444750
    .gpword .L00440A98
    .gpword .L004431E8

.data
D_10010820:
    # 00439C40 getop
    .byte 0x00,0x00,0x02,0x01,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x00

D_10010830:
    # 00439C40 getop
    .byte 0x28,0x4f,0x00,0x08,0x10,0xc4,0x00,0x38,0x50,0x06,0x86,0x05,0x60,0x02,0x3d,0x00,0x01,0x24,0x00,0x00

D_10010844:
    # 00439C40 getop
    .byte 0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x80,0x00,0x00

D_10010854:
    # 0043A0CC copyline
    .byte 0x00,0x00,0x08,0x00,0x09,0x20,0x00,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x40,0x00,0x00,0x10,0x02,0xc0

D_10010868:
    # 0043ABD0 incroccurrence
    .byte 0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10

D_10010874:
    # 0043B504 func_0043B504
    .byte 0x00,0x03,0x8e,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00

D_10010884:
    # 0043B504 func_0043B504
    .byte 0x00,0x00,0x00,0x06,0x03,0x40,0x20,0x00,0x00,0x00,0x00,0x10

D_10010890:
    # 0043B504 func_0043B504
    .byte 0x00,0x00,0x00,0x06,0x00,0x00,0x20,0x00,0x00,0x00,0x00,0x10

D_1001089C:
    # 0043CFCC readnxtinst
    .byte 0x02,0x00,0x00,0x00,0x00,0x02,0x00,0x00

D_100108A4:
    # 0043CFCC readnxtinst
    .byte 0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01

D_100108B0:
    # 0043CFCC readnxtinst
    .byte 0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x30,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x00

D_100108C4:
    # 0043CFCC readnxtinst
    .byte 0x00,0x80,0x00,0x00,0x00,0x02,0x00,0x00

D_100108CC:
    # 0043CFCC readnxtinst
    .byte 0x00,0x40,0x00,0x00,0x00,0x04,0x00,0x00

D_100108D4:
    # 0043CFCC readnxtinst
    .byte 0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x01

D_100108DC:
    # 0043CFCC readnxtinst
    .byte 0x10,0xc0,0x00,0x00,0x00,0x06,0x00,0x01

D_100108E4:
    # 0043CFCC readnxtinst
    .byte 0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x08

D_100108EC:
    # 0043CFCC readnxtinst
    .byte 0x08,0x00,0x00,0x00,0x10,0xc0,0x00,0x08,0x00,0x06,0x00,0x01,0x00,0x00,0x00,0x04,0x00,0x04,0x00,0x00

D_10010900:
    # 0043CFCC readnxtinst
    .byte 0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04



.bss
    .balign 4
# 1001C600
glabel parcount
    # 0043CFCC readnxtinst
    .space 4
    .size parcount, 4
    .type parcount, @object

    .balign 4
# 1001C604
glabel passbyfp
    # 0043CFCC readnxtinst
    .space 4
    .size passbyfp, 4
    .type passbyfp, @object

    .balign 4
# 1001C608
glabel lastmst
    # 0043CFCC readnxtinst
    .space 4
    .size lastmst, 4
    .type lastmst, @object

    .balign 4
# 1001C60C
glabel outparhead
    # 0043A844 in_outparlist
    # 0043A88C insert_outparlist
    # 0043CFCC readnxtinst
    .space 4
    .size outparhead, 4
    .type outparhead, @object

    .balign 4
# 1001C610
glabel branched_back_lab
    # 00439C40 getop
    .space 4
    .size branched_back_lab, 4
    .type branched_back_lab, @object


.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
glabel getop
    .ent getop
    # 0043A0CC copyline
    # 0043CFCC readnxtinst
    # 00456310 func_00456310
    # 00456A2C oneproc
    # 0045806C main
/* 00439C40 3C1C0FBE */  .cpload $t9
/* 00439C44 279C0650 */  
/* 00439C48 0399E021 */  
/* 00439C4C 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00439C50 AFB00014 */  sw    $s0, 0x14($sp)
/* 00439C54 8F908DA4 */  lw     $s0, %got(u)($gp)
/* 00439C58 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00439C5C AFBC0018 */  sw    $gp, 0x18($sp)
.L00439C60:
/* 00439C60 8F998768 */  lw    $t9, %call16(readuinstr)($gp)
/* 00439C64 8F858950 */  lw     $a1, %got(ustrptr)($gp)
/* 00439C68 02002025 */  move  $a0, $s0
/* 00439C6C 0320F809 */  jalr  $t9
/* 00439C70 8CA50000 */   lw    $a1, ($a1)
/* 00439C74 92020000 */  lbu   $v0, ($s0)
/* 00439C78 24010009 */  li    $at, 9
/* 00439C7C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00439C80 14410003 */  bne   $v0, $at, .L00439C90
/* 00439C84 240E007D */   li    $t6, 125
/* 00439C88 A20E0000 */  sb    $t6, ($s0)
/* 00439C8C 31C200FF */  andi  $v0, $t6, 0xff
.L00439C90:
/* 00439C90 24010042 */  li    $at, 66
/* 00439C94 54410013 */  bnel  $v0, $at, .L00439CE4
/* 00439C98 2449FFE0 */   addiu $t1, $v0, -0x20
/* 00439C9C 8F8F8B6C */  lw     $t7, %got(curproc)($gp)
/* 00439CA0 8F998448 */  lw    $t9, %call16(searchlab)($gp)
/* 00439CA4 8E040004 */  lw    $a0, 4($s0)
/* 00439CA8 8DEF0000 */  lw    $t7, ($t7)
/* 00439CAC 0320F809 */  jalr  $t9
/* 00439CB0 8DE50028 */   lw    $a1, 0x28($t7)
/* 00439CB4 90580008 */  lbu   $t8, 8($v0)
/* 00439CB8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00439CBC 1300FFE8 */  beqz  $t8, .L00439C60
/* 00439CC0 00000000 */   nop   
/* 00439CC4 8C590004 */  lw    $t9, 4($v0)
/* 00439CC8 1720FFE5 */  bnez  $t9, .L00439C60
/* 00439CCC 00000000 */   nop   
/* 00439CD0 90480009 */  lbu   $t0, 9($v0)
/* 00439CD4 8F818C48 */  lw     $at, %got(branched_back_lab)($gp)
/* 00439CD8 1000003F */  b     .L00439DD8
/* 00439CDC A0280000 */   sb    $t0, ($at)
/* 00439CE0 2449FFE0 */  addiu $t1, $v0, -0x20
.L00439CE4:
/* 00439CE4 2D2A0080 */  sltiu $t2, $t1, 0x80
/* 00439CE8 11400009 */  beqz  $t2, .L00439D10
/* 00439CEC 24010049 */   li    $at, 73
/* 00439CF0 8F8D8044 */  lw    $t5, %got(D_10010844)($gp)
/* 00439CF4 00095943 */  sra   $t3, $t1, 5
/* 00439CF8 000B6080 */  sll   $t4, $t3, 2
/* 00439CFC 25AD0844 */  addiu $t5, %lo(D_10010844) # addiu $t5, $t5, 0x844
/* 00439D00 01AC7021 */  addu  $t6, $t5, $t4
/* 00439D04 8DCF0000 */  lw    $t7, ($t6)
/* 00439D08 012FC004 */  sllv  $t8, $t7, $t1
/* 00439D0C 2B0A0000 */  slti  $t2, $t8, 0
.L00439D10:
/* 00439D10 1140000E */  beqz  $t2, .L00439D4C
/* 00439D14 00000000 */   nop   
/* 00439D18 8F888B6C */  lw     $t0, %got(curproc)($gp)
/* 00439D1C 8F998448 */  lw    $t9, %call16(searchlab)($gp)
/* 00439D20 8E040004 */  lw    $a0, 4($s0)
/* 00439D24 8D080000 */  lw    $t0, ($t0)
/* 00439D28 0320F809 */  jalr  $t9
/* 00439D2C 8D050028 */   lw    $a1, 0x28($t0)
/* 00439D30 8C430004 */  lw    $v1, 4($v0)
/* 00439D34 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00439D38 50600028 */  beql  $v1, $zero, .L00439DDC
/* 00439D3C 92020000 */   lbu   $v0, ($s0)
/* 00439D40 8F818DA4 */  lw     $at, %got(u)($gp)
/* 00439D44 10000024 */  b     .L00439DD8
/* 00439D48 AC230004 */   sw    $v1, 4($at)
.L00439D4C:
/* 00439D4C 54410014 */  bnel  $v0, $at, .L00439DA0
/* 00439D50 2401008C */   li    $at, 140
/* 00439D54 920B0001 */  lbu   $t3, 1($s0)
/* 00439D58 24010003 */  li    $at, 3
/* 00439D5C 316D001F */  andi  $t5, $t3, 0x1f
/* 00439D60 55A1000F */  bnel  $t5, $at, .L00439DA0
/* 00439D64 2401008C */   li    $at, 140
/* 00439D68 8F8C8B6C */  lw     $t4, %got(curproc)($gp)
/* 00439D6C 8F998448 */  lw    $t9, %call16(searchlab)($gp)
/* 00439D70 8E040010 */  lw    $a0, 0x10($s0)
/* 00439D74 8D8C0000 */  lw    $t4, ($t4)
/* 00439D78 0320F809 */  jalr  $t9
/* 00439D7C 8D850028 */   lw    $a1, 0x28($t4)
/* 00439D80 8C430004 */  lw    $v1, 4($v0)
/* 00439D84 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00439D88 50600014 */  beql  $v1, $zero, .L00439DDC
/* 00439D8C 92020000 */   lbu   $v0, ($s0)
/* 00439D90 8F818DA4 */  lw     $at, %got(u)($gp)
/* 00439D94 10000010 */  b     .L00439DD8
/* 00439D98 AC230010 */   sw    $v1, 0x10($at)
/* 00439D9C 2401008C */  li    $at, 140
.L00439DA0:
/* 00439DA0 5441000E */  bnel  $v0, $at, .L00439DDC
/* 00439DA4 92020000 */   lbu   $v0, ($s0)
/* 00439DA8 8F8E8B6C */  lw     $t6, %got(curproc)($gp)
/* 00439DAC 8F998448 */  lw    $t9, %call16(searchlab)($gp)
/* 00439DB0 8E040008 */  lw    $a0, 8($s0)
/* 00439DB4 8DCE0000 */  lw    $t6, ($t6)
/* 00439DB8 0320F809 */  jalr  $t9
/* 00439DBC 8DC50028 */   lw    $a1, 0x28($t6)
/* 00439DC0 8C430004 */  lw    $v1, 4($v0)
/* 00439DC4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00439DC8 50600004 */  beql  $v1, $zero, .L00439DDC
/* 00439DCC 92020000 */   lbu   $v0, ($s0)
/* 00439DD0 8F818DA4 */  lw     $at, %got(u)($gp)
/* 00439DD4 AC230008 */  sw    $v1, 8($at)
.L00439DD8:
/* 00439DD8 92020000 */  lbu   $v0, ($s0)
.L00439DDC:
/* 00439DDC 2C4F00A0 */  sltiu $t7, $v0, 0xa0
/* 00439DE0 11E00009 */  beqz  $t7, .L00439E08
/* 00439DE4 00000000 */   nop   
/* 00439DE8 8F998044 */  lw    $t9, %got(D_10010830)($gp)
/* 00439DEC 00024943 */  sra   $t1, $v0, 5
/* 00439DF0 0009C080 */  sll   $t8, $t1, 2
/* 00439DF4 27390830 */  addiu $t9, %lo(D_10010830) # addiu $t9, $t9, 0x830
/* 00439DF8 03385021 */  addu  $t2, $t9, $t8
/* 00439DFC 8D480000 */  lw    $t0, ($t2)
/* 00439E00 00485804 */  sllv  $t3, $t0, $v0
/* 00439E04 296F0000 */  slti  $t7, $t3, 0
.L00439E08:
/* 00439E08 11E00005 */  beqz  $t7, .L00439E20
/* 00439E0C 2448FFE0 */   addiu $t0, $v0, -0x20
/* 00439E10 960C0002 */  lhu   $t4, 2($s0)
/* 00439E14 11800002 */  beqz  $t4, .L00439E20
/* 00439E18 00000000 */   nop   
/* 00439E1C A6000002 */  sh    $zero, 2($s0)
.L00439E20:
/* 00439E20 8F898DBC */  lw     $t1, %got(optab)($gp)
/* 00439E24 00027080 */  sll   $t6, $v0, 2
/* 00439E28 01C27023 */  subu  $t6, $t6, $v0
/* 00439E2C 01C9C821 */  addu  $t9, $t6, $t1
/* 00439E30 93380000 */  lbu   $t8, ($t9)
/* 00439E34 2D0B0080 */  sltiu $t3, $t0, 0x80
/* 00439E38 13000005 */  beqz  $t8, .L00439E50
/* 00439E3C 00000000 */   nop   
/* 00439E40 8F81895C */  lw     $at, %got(endblock)($gp)
/* 00439E44 240A0001 */  li    $t2, 1
/* 00439E48 10000051 */  b     .L00439F90
/* 00439E4C A02A0000 */   sb    $t2, ($at)
.L00439E50:
/* 00439E50 11600009 */  beqz  $t3, .L00439E78
/* 00439E54 00000000 */   nop   
/* 00439E58 8F8C8044 */  lw    $t4, %got(D_10010820)($gp)
/* 00439E5C 00086943 */  sra   $t5, $t0, 5
/* 00439E60 000D7880 */  sll   $t7, $t5, 2
/* 00439E64 258C0820 */  addiu $t4, %lo(D_10010820) # addiu $t4, $t4, 0x820
/* 00439E68 018F7021 */  addu  $t6, $t4, $t7
/* 00439E6C 8DC90000 */  lw    $t1, ($t6)
/* 00439E70 0109C804 */  sllv  $t9, $t1, $t0
/* 00439E74 2B2B0000 */  slti  $t3, $t9, 0
.L00439E78:
/* 00439E78 11600033 */  beqz  $t3, .L00439F48
/* 00439E7C 00000000 */   nop   
/* 00439E80 960A0002 */  lhu   $t2, 2($s0)
/* 00439E84 304300FF */  andi  $v1, $v0, 0xff
/* 00439E88 2C610040 */  sltiu $at, $v1, 0x40
/* 00439E8C 314D0001 */  andi  $t5, $t2, 1
/* 00439E90 51A00040 */  beql  $t5, $zero, .L00439F94
/* 00439E94 8FBF001C */   lw    $ra, 0x1c($sp)
/* 00439E98 14200023 */  bnez  $at, .L00439F28
/* 00439E9C 24010058 */   li    $at, 88
/* 00439EA0 10610010 */  beq   $v1, $at, .L00439EE4
/* 00439EA4 24090059 */   li    $t1, 89
/* 00439EA8 246CFF6D */  addiu $t4, $v1, -0x93
/* 00439EAC 2D810002 */  sltiu $at, $t4, 2
/* 00439EB0 10200014 */  beqz  $at, .L00439F04
/* 00439EB4 00000000 */   nop   
/* 00439EB8 8F818044 */  lw    $at, %got(jtbl_1000C20C)($gp)
/* 00439EBC 000C6080 */  sll   $t4, $t4, 2
/* 00439EC0 002C0821 */  addu  $at, $at, $t4
/* 00439EC4 8C2CC20C */  lw    $t4, %lo(jtbl_1000C20C)($at)
/* 00439EC8 019C6021 */  addu  $t4, $t4, $gp
/* 00439ECC 01800008 */  jr    $t4
/* 00439ED0 00000000 */   nop   
.L00439ED4:
/* 00439ED4 1000002E */  b     .L00439F90
/* 00439ED8 A20F0000 */   sb    $t7, ($s0)
.L00439EDC:
/* 00439EDC 1000002C */  b     .L00439F90
/* 00439EE0 A20E0000 */   sb    $t6, ($s0)
.L00439EE4:
/* 00439EE4 1000002A */  b     .L00439F90
/* 00439EE8 A2090000 */   sb    $t1, ($s0)
.L00439EEC:
/* 00439EEC 2408009A */  li    $t0, 154
/* 00439EF0 10000027 */  b     .L00439F90
/* 00439EF4 A2080000 */   sb    $t0, ($s0)
.L00439EF8:
/* 00439EF8 2419009B */  li    $t9, 155
/* 00439EFC 10000024 */  b     .L00439F90
/* 00439F00 A2190000 */   sb    $t9, ($s0)
.L00439F04:
/* 00439F04 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 00439F08 8F868044 */  lw    $a2, %got(RO_1000C200)($gp)
/* 00439F0C 24040001 */  li    $a0, 1
/* 00439F10 24050084 */  li    $a1, 132
/* 00439F14 2407000B */  li    $a3, 11
/* 00439F18 0320F809 */  jalr  $t9
/* 00439F1C 24C6C200 */   addiu $a2, %lo(RO_1000C200) # addiu $a2, $a2, -0x3e00
/* 00439F20 1000001B */  b     .L00439F90
/* 00439F24 8FBC0018 */   lw    $gp, 0x18($sp)
.L00439F28:
/* 00439F28 24010036 */  li    $at, 54
/* 00439F2C 1061FFE9 */  beq   $v1, $at, .L00439ED4
/* 00439F30 240F0033 */   li    $t7, 51
/* 00439F34 2401003F */  li    $at, 63
/* 00439F38 1061FFE8 */  beq   $v1, $at, .L00439EDC
/* 00439F3C 240E0040 */   li    $t6, 64
/* 00439F40 1000FFF0 */  b     .L00439F04
/* 00439F44 00000000 */   nop   
.L00439F48:
/* 00439F48 8F988A34 */  lw     $t8, %got(curmst)($gp)
/* 00439F4C 8F180000 */  lw    $t8, ($t8)
/* 00439F50 57000010 */  bnezl $t8, .L00439F94
/* 00439F54 8FBF001C */   lw    $ra, 0x1c($sp)
/* 00439F58 8F8B8960 */  lw     $t3, %got(ustackbot)($gp)
/* 00439F5C 8F8A8964 */  lw     $t2, %got(ustack)($gp)
/* 00439F60 8D6B0000 */  lw    $t3, ($t3)
/* 00439F64 8D4A0000 */  lw    $t2, ($t2)
/* 00439F68 556A000A */  bnel  $t3, $t2, .L00439F94
/* 00439F6C 8FBF001C */   lw    $ra, 0x1c($sp)
/* 00439F70 8F8D8A70 */  lw     $t5, %got(varrefs)($gp)
/* 00439F74 8F8C8A78 */  lw     $t4, %got(curvarreflimit)($gp)
/* 00439F78 8F81895C */  lw     $at, %got(endblock)($gp)
/* 00439F7C 8DAD0000 */  lw    $t5, ($t5)
/* 00439F80 8D8C0000 */  lw    $t4, ($t4)
/* 00439F84 01AC782A */  slt   $t7, $t5, $t4
/* 00439F88 39EF0001 */  xori  $t7, $t7, 1
/* 00439F8C A02F0000 */  sb    $t7, ($at)
.L00439F90:
/* 00439F90 8FBF001C */  lw    $ra, 0x1c($sp)
.L00439F94:
/* 00439F94 8FB00014 */  lw    $s0, 0x14($sp)
/* 00439F98 27BD0020 */  addiu $sp, $sp, 0x20
/* 00439F9C 03E00008 */  jr    $ra
/* 00439FA0 00000000 */   nop   
    .type getop, @function
    .size getop, .-getop
    .end getop

glabel formal_parm_vreg
    .ent formal_parm_vreg
    # 0043A0CC copyline
/* 00439FA4 3C1C0FBE */  .cpload $t9
/* 00439FA8 279C02EC */  
/* 00439FAC 0399E021 */  
/* 00439FB0 8F8E8980 */  lw     $t6, %got(curblk)($gp)
/* 00439FB4 27BDFFC0 */  addiu $sp, $sp, -0x40
/* 00439FB8 8FAF0038 */  lw    $t7, 0x38($sp)
/* 00439FBC 8DCE0000 */  lw    $t6, ($t6)
/* 00439FC0 AFB2001C */  sw    $s2, 0x1c($sp)
/* 00439FC4 000FC2C2 */  srl   $t8, $t7, 0xb
/* 00439FC8 01D8C826 */  xor   $t9, $t6, $t8
/* 00439FCC 001942C0 */  sll   $t0, $t9, 0xb
/* 00439FD0 010F4826 */  xor   $t1, $t0, $t7
/* 00439FD4 AFA90038 */  sw    $t1, 0x38($sp)
/* 00439FD8 93AA003A */  lbu   $t2, 0x3a($sp)
/* 00439FDC 27B20034 */  addiu $s2, $sp, 0x34
/* 00439FE0 AFBF0024 */  sw    $ra, 0x24($sp)
/* 00439FE4 314BFFF8 */  andi  $t3, $t2, 0xfff8
/* 00439FE8 356C0002 */  ori   $t4, $t3, 2
/* 00439FEC AFBC0020 */  sw    $gp, 0x20($sp)
/* 00439FF0 AFB10018 */  sw    $s1, 0x18($sp)
/* 00439FF4 AFB00014 */  sw    $s0, 0x14($sp)
/* 00439FF8 AFA40034 */  sw    $a0, 0x34($sp)
/* 00439FFC A3AC003A */  sb    $t4, 0x3a($sp)
/* 0043A000 8E440000 */  lw    $a0, ($s2)
/* 0043A004 8F99864C */  lw    $t9, %call16(isvarhash)($gp)
/* 0043A008 AFA40000 */  sw    $a0, ($sp)
/* 0043A00C 8E450004 */  lw    $a1, 4($s2)
/* 0043A010 0320F809 */  jalr  $t9
/* 0043A014 AFA50004 */   sw    $a1, 4($sp)
/* 0043A018 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0043A01C 3058FFFF */  andi  $t8, $v0, 0xffff
/* 0043A020 0018C880 */  sll   $t9, $t8, 2
/* 0043A024 8F888DF8 */  lw     $t0, %got(table)($gp)
/* 0043A028 24110003 */  li    $s1, 3
/* 0043A02C 03287821 */  addu  $t7, $t9, $t0
/* 0043A030 8DF00000 */  lw    $s0, ($t7)
/* 0043A034 52000016 */  beql  $s0, $zero, .L0043A090
/* 0043A038 00001025 */   move  $v0, $zero
/* 0043A03C 92090000 */  lbu   $t1, ($s0)
.L0043A040:
/* 0043A040 56290010 */  bnel  $s1, $t1, .L0043A084
/* 0043A044 8E10001C */   lw    $s0, 0x1c($s0)
/* 0043A048 8E040028 */  lw    $a0, 0x28($s0)
/* 0043A04C 8E05002C */  lw    $a1, 0x2c($s0)
/* 0043A050 8F99860C */  lw    $t9, %call16(addreq)($gp)
/* 0043A054 AFA40000 */  sw    $a0, ($sp)
/* 0043A058 AFA50004 */  sw    $a1, 4($sp)
/* 0043A05C 8E460000 */  lw    $a2, ($s2)
/* 0043A060 AFA60008 */  sw    $a2, 8($sp)
/* 0043A064 8E470004 */  lw    $a3, 4($s2)
/* 0043A068 0320F809 */  jalr  $t9
/* 0043A06C AFA7000C */   sw    $a3, 0xc($sp)
/* 0043A070 10400003 */  beqz  $v0, .L0043A080
/* 0043A074 8FBC0020 */   lw    $gp, 0x20($sp)
/* 0043A078 10000005 */  b     .L0043A090
/* 0043A07C 92020022 */   lbu   $v0, 0x22($s0)
.L0043A080:
/* 0043A080 8E10001C */  lw    $s0, 0x1c($s0)
.L0043A084:
/* 0043A084 5600FFEE */  bnezl $s0, .L0043A040
/* 0043A088 92090000 */   lbu   $t1, ($s0)
/* 0043A08C 00001025 */  move  $v0, $zero
.L0043A090:
/* 0043A090 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0043A094 8FB00014 */  lw    $s0, 0x14($sp)
/* 0043A098 8FB10018 */  lw    $s1, 0x18($sp)
/* 0043A09C 8FB2001C */  lw    $s2, 0x1c($sp)
/* 0043A0A0 03E00008 */  jr    $ra
/* 0043A0A4 27BD0040 */   addiu $sp, $sp, 0x40
    .type formal_parm_vreg, @function
    .size formal_parm_vreg, .-formal_parm_vreg
    .end formal_parm_vreg

    .type func_0043A0A8, @function
func_0043A0A8:
    # 0043A0CC copyline
/* 0043A0A8 3C1C0FBE */  .cpload $t9
/* 0043A0AC 279C01E8 */  
/* 0043A0B0 0399E021 */  
/* 0043A0B4 8F8F8DC0 */  lw     $t7, %got(blklev)($gp)
/* 0043A0B8 00057080 */  sll   $t6, $a1, 2
/* 0043A0BC 25EFFFFC */  addiu $t7, $t7, -4
/* 0043A0C0 01CFC021 */  addu  $t8, $t6, $t7
/* 0043A0C4 03E00008 */  jr    $ra
/* 0043A0C8 AF040000 */   sw    $a0, ($t8)

glabel copyline
    .ent copyline
    # 0043CFCC readnxtinst
    # 00456310 func_00456310
    # 00456A2C oneproc
    # 0045806C main
/* 0043A0CC 3C1C0FBE */  .cpload $t9
/* 0043A0D0 279C01C4 */  
/* 0043A0D4 0399E021 */  
/* 0043A0D8 27BDFFA8 */  addiu $sp, $sp, -0x58
/* 0043A0DC AFB00014 */  sw    $s0, 0x14($sp)
/* 0043A0E0 8F908DA4 */  lw     $s0, %got(u)($gp)
/* 0043A0E4 24010021 */  li    $at, 33
/* 0043A0E8 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0043A0EC 92070000 */  lbu   $a3, ($s0)
/* 0043A0F0 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0043A0F4 14E10087 */  bne   $a3, $at, .L0043A314
/* 0043A0F8 24F8FFA0 */   addiu $t8, $a3, -0x60
/* 0043A0FC 8E07000C */  lw    $a3, 0xc($s0)
/* 0043A100 30EE0018 */  andi  $t6, $a3, 0x18
/* 0043A104 11C00004 */  beqz  $t6, .L0043A118
/* 0043A108 00000000 */   nop   
/* 0043A10C 8F818AD4 */  lw     $at, %got(no_r23)($gp)
/* 0043A110 240F0001 */  li    $t7, 1
/* 0043A114 A02F0000 */  sb    $t7, ($at)
.L0043A118:
/* 0043A118 8F988A5C */  lw     $t8, %got(lang)($gp)
/* 0043A11C 24010003 */  li    $at, 3
/* 0043A120 93180000 */  lbu   $t8, ($t8)
/* 0043A124 17010004 */  bne   $t8, $at, .L0043A138
/* 0043A128 00000000 */   nop   
/* 0043A12C 8F818AD8 */  lw     $at, %got(no_r3)($gp)
/* 0043A130 24190001 */  li    $t9, 1
/* 0043A134 A0390000 */  sb    $t9, ($at)
.L0043A138:
/* 0043A138 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0043A13C 8F818B5C */  lw     $at, %got(entflag)($gp)
/* 0043A140 02002025 */  move  $a0, $s0
/* 0043A144 0320F809 */  jalr  $t9
/* 0043A148 A0270000 */   sb    $a3, ($at)
/* 0043A14C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043A150 96050002 */  lhu   $a1, 2($s0)
/* 0043A154 27A20058 */  addiu $v0, $sp, 0x58
/* 0043A158 8F81897C */  lw     $at, %got(curlevel)($gp)
/* 0043A15C 8F998024 */  lw    $t9, %got(func_0043A0A8)($gp)
/* 0043A160 AC250000 */  sw    $a1, ($at)
/* 0043A164 8E040004 */  lw    $a0, 4($s0)
/* 0043A168 8F818980 */  lw     $at, %got(curblk)($gp)
/* 0043A16C 2739A0A8 */  addiu $t9, %lo(func_0043A0A8) # addiu $t9, $t9, -0x5f58
/* 0043A170 0320F809 */  jalr  $t9
/* 0043A174 AC240000 */   sw    $a0, ($at)
/* 0043A178 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043A17C 8F9982FC */  lw    $t9, %call16(getop)($gp)
/* 0043A180 0320F809 */  jalr  $t9
/* 0043A184 00000000 */   nop   
/* 0043A188 92070000 */  lbu   $a3, ($s0)
/* 0043A18C 240B0013 */  li    $t3, 19
/* 0043A190 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043A194 00EB02B6 */  tne   $a3, $t3, 0xa
/* 0043A198 8E090010 */  lw    $t1, 0x10($s0)
/* 0043A19C 19200027 */  blez  $t1, .L0043A23C
/* 0043A1A0 01202825 */   move  $a1, $t1
/* 0043A1A4 24A50001 */  addiu $a1, $a1, 1
/* 0043A1A8 24A6FFFF */  addiu $a2, $a1, -1
/* 0043A1AC 30C60003 */  andi  $a2, $a2, 3
/* 0043A1B0 10C00010 */  beqz  $a2, .L0043A1F4
/* 0043A1B4 24080001 */   li    $t0, 1
/* 0043A1B8 8F8D8950 */  lw     $t5, %got(ustrptr)($gp)
/* 0043A1BC 8F8C8DE4 */  lw     $t4, %got(entnam0)($gp)
/* 0043A1C0 24C40001 */  addiu $a0, $a2, 1
/* 0043A1C4 8DAD0000 */  lw    $t5, ($t5)
/* 0043A1C8 258CFFFF */  addiu $t4, $t4, -1
/* 0043A1CC 010C1821 */  addu  $v1, $t0, $t4
/* 0043A1D0 01A81021 */  addu  $v0, $t5, $t0
.L0043A1D4:
/* 0043A1D4 904EFFFF */  lbu   $t6, -1($v0)
/* 0043A1D8 25080001 */  addiu $t0, $t0, 1
/* 0043A1DC 24630001 */  addiu $v1, $v1, 1
/* 0043A1E0 24420001 */  addiu $v0, $v0, 1
/* 0043A1E4 1488FFFB */  bne   $a0, $t0, .L0043A1D4
/* 0043A1E8 A06EFFFF */   sb    $t6, -1($v1)
/* 0043A1EC 11050013 */  beq   $t0, $a1, .L0043A23C
/* 0043A1F0 00000000 */   nop   
.L0043A1F4:
/* 0043A1F4 8F988950 */  lw     $t8, %got(ustrptr)($gp)
/* 0043A1F8 8F8F8DE4 */  lw     $t7, %got(entnam0)($gp)
/* 0043A1FC 8F180000 */  lw    $t8, ($t8)
/* 0043A200 25EFFFFF */  addiu $t7, $t7, -1
/* 0043A204 010F1821 */  addu  $v1, $t0, $t7
/* 0043A208 00AF2021 */  addu  $a0, $a1, $t7
/* 0043A20C 03081021 */  addu  $v0, $t8, $t0
.L0043A210:
/* 0043A210 9059FFFF */  lbu   $t9, -1($v0)
/* 0043A214 904B0000 */  lbu   $t3, ($v0)
/* 0043A218 904C0001 */  lbu   $t4, 1($v0)
/* 0043A21C 904D0002 */  lbu   $t5, 2($v0)
/* 0043A220 24630004 */  addiu $v1, $v1, 4
/* 0043A224 24420004 */  addiu $v0, $v0, 4
/* 0043A228 A079FFFC */  sb    $t9, -4($v1)
/* 0043A22C A06BFFFD */  sb    $t3, -3($v1)
/* 0043A230 A06CFFFE */  sb    $t4, -2($v1)
/* 0043A234 1464FFF6 */  bne   $v1, $a0, .L0043A210
/* 0043A238 A06DFFFF */   sb    $t5, -1($v1)
.L0043A23C:
/* 0043A23C 8F858DE4 */  lw     $a1, %got(entnam0)($gp)
/* 0043A240 8F828984 */  lw     $v0, %got(entnam0len)($gp)
/* 0043A244 24030020 */  li    $v1, 32
/* 0043A248 24A5FFFF */  addiu $a1, $a1, -1
/* 0043A24C 00A97021 */  addu  $t6, $a1, $t1
/* 0043A250 91D80000 */  lbu   $t8, ($t6)
/* 0043A254 01202025 */  move  $a0, $t1
/* 0043A258 240D0001 */  li    $t5, 1
/* 0043A25C 14780008 */  bne   $v1, $t8, .L0043A280
/* 0043A260 AC490000 */   sw    $t1, ($v0)
/* 0043A264 248FFFFF */  addiu $t7, $a0, -1
.L0043A268:
/* 0043A268 00AFC821 */  addu  $t9, $a1, $t7
/* 0043A26C 932B0000 */  lbu   $t3, ($t9)
/* 0043A270 AC4F0000 */  sw    $t7, ($v0)
/* 0043A274 01E02025 */  move  $a0, $t7
/* 0043A278 506BFFFB */  beql  $v1, $t3, .L0043A268
/* 0043A27C 248FFFFF */   addiu $t7, $a0, -1
.L0043A280:
/* 0043A280 8F8C8DE8 */  lw     $t4, %got(proc_to_print)($gp)
/* 0043A284 24080001 */  li    $t0, 1
/* 0043A288 918C0000 */  lbu   $t4, ($t4)
/* 0043A28C 106C0019 */  beq   $v1, $t4, .L0043A2F4
/* 0043A290 00000000 */   nop   
/* 0043A294 8F868A8C */  lw     $a2, %got(at_proc_to_print)($gp)
/* 0043A298 31A500FF */  andi  $a1, $t5, 0xff
/* 0043A29C 10A00015 */  beqz  $a1, .L0043A2F4
/* 0043A2A0 A0CD0000 */   sb    $t5, ($a2)
/* 0043A2A4 18800013 */  blez  $a0, .L0043A2F4
/* 0043A2A8 00000000 */   nop   
/* 0043A2AC 8F8E8DE4 */  lw     $t6, %got(entnam0)($gp)
/* 0043A2B0 8F988DE8 */  lw     $t8, %got(proc_to_print)($gp)
/* 0043A2B4 25CEFFFF */  addiu $t6, $t6, -1
/* 0043A2B8 2718FFFF */  addiu $t8, $t8, -1
/* 0043A2BC 01181021 */  addu  $v0, $t0, $t8
/* 0043A2C0 010E1821 */  addu  $v1, $t0, $t6
/* 0043A2C4 906F0000 */  lbu   $t7, ($v1)
.L0043A2C8:
/* 0043A2C8 90590000 */  lbu   $t9, ($v0)
/* 0043A2CC 25080001 */  addiu $t0, $t0, 1
/* 0043A2D0 0088082A */  slt   $at, $a0, $t0
/* 0043A2D4 11F90003 */  beq   $t7, $t9, .L0043A2E4
/* 0043A2D8 24630001 */   addiu $v1, $v1, 1
/* 0043A2DC A0C00000 */  sb    $zero, ($a2)
/* 0043A2E0 300500FF */  andi  $a1, $zero, 0xff
.L0043A2E4:
/* 0043A2E4 10A00003 */  beqz  $a1, .L0043A2F4
/* 0043A2E8 24420001 */   addiu $v0, $v0, 1
/* 0043A2EC 5020FFF6 */  beql  $at, $zero, .L0043A2C8
/* 0043A2F0 906F0000 */   lbu   $t7, ($v1)
.L0043A2F4:
/* 0043A2F4 8F8B8B6C */  lw     $t3, %got(curproc)($gp)
/* 0043A2F8 8F818A4C */  lw     $at, %got(bitvectorsize)($gp)
/* 0043A2FC 8D6B0000 */  lw    $t3, ($t3)
/* 0043A300 8D6C0020 */  lw    $t4, 0x20($t3)
/* 0043A304 000C69C2 */  srl   $t5, $t4, 7
/* 0043A308 25AE0002 */  addiu $t6, $t5, 2
/* 0043A30C 100000FD */  b     .L0043A704
/* 0043A310 AC2E0000 */   sw    $t6, ($at)
.L0043A314:
/* 0043A314 2F0F0020 */  sltiu $t7, $t8, 0x20
/* 0043A318 3C010084 */  lui   $at, 0x84
/* 0043A31C 34218000 */  ori   $at, $at, 0x8000
/* 0043A320 000FC823 */  negu  $t9, $t7
/* 0043A324 03215824 */  and   $t3, $t9, $at
/* 0043A328 030B6004 */  sllv  $t4, $t3, $t8
/* 0043A32C 05810031 */  bgez  $t4, .L0043A3F4
/* 0043A330 2401004F */   li    $at, 79
/* 0043A334 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0043A338 8F848908 */  lw     $a0, %got(err)($gp)
/* 0043A33C 0320F809 */  jalr  $t9
/* 0043A340 8C840000 */   lw    $a0, ($a0)
/* 0043A344 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043A348 2406000D */  li    $a2, 13
/* 0043A34C 2407000D */  li    $a3, 13
/* 0043A350 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0043A354 8F848908 */  lw     $a0, %got(err)($gp)
/* 0043A358 8F858044 */  lw    $a1, %got(RO_1000C239)($gp)
/* 0043A35C 8C840000 */  lw    $a0, ($a0)
/* 0043A360 0320F809 */  jalr  $t9
/* 0043A364 24A5C239 */   addiu $a1, %lo(RO_1000C239) # addiu $a1, $a1, -0x3dc7
/* 0043A368 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043A36C 24060400 */  li    $a2, 1024
/* 0043A370 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0043A374 8F828984 */  lw     $v0, %got(entnam0len)($gp)
/* 0043A378 8F848908 */  lw     $a0, %got(err)($gp)
/* 0043A37C 8F858DE4 */  lw     $a1, %got(entnam0)($gp)
/* 0043A380 8C470000 */  lw    $a3, ($v0)
/* 0043A384 0320F809 */  jalr  $t9
/* 0043A388 8C840000 */   lw    $a0, ($a0)
/* 0043A38C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043A390 24060025 */  li    $a2, 37
/* 0043A394 24070025 */  li    $a3, 37
/* 0043A398 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0043A39C 8F848908 */  lw     $a0, %got(err)($gp)
/* 0043A3A0 8F858044 */  lw    $a1, %got(RO_1000C214)($gp)
/* 0043A3A4 8C840000 */  lw    $a0, ($a0)
/* 0043A3A8 0320F809 */  jalr  $t9
/* 0043A3AC 24A5C214 */   addiu $a1, %lo(RO_1000C214) # addiu $a1, $a1, -0x3dec
/* 0043A3B0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043A3B4 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0043A3B8 8F848908 */  lw     $a0, %got(err)($gp)
/* 0043A3BC 0320F809 */  jalr  $t9
/* 0043A3C0 8C840000 */   lw    $a0, ($a0)
/* 0043A3C4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043A3C8 8F9980A0 */  lw    $t9, %call16(fflush)($gp)
/* 0043A3CC 8F848908 */  lw     $a0, %got(err)($gp)
/* 0043A3D0 0320F809 */  jalr  $t9
/* 0043A3D4 8C840000 */   lw    $a0, ($a0)
/* 0043A3D8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043A3DC 8F998728 */  lw    $t9, %call16(abort)($gp)
/* 0043A3E0 0320F809 */  jalr  $t9
/* 0043A3E4 00000000 */   nop   
/* 0043A3E8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043A3EC 100000C5 */  b     .L0043A704
/* 0043A3F0 92070000 */   lbu   $a3, ($s0)
.L0043A3F4:
/* 0043A3F4 54E1000B */  bnel  $a3, $at, .L0043A424
/* 0043A3F8 24010065 */   li    $at, 101
/* 0043A3FC 8F998024 */  lw    $t9, %got(func_0043A0A8)($gp)
/* 0043A400 8E040004 */  lw    $a0, 4($s0)
/* 0043A404 96050002 */  lhu   $a1, 2($s0)
/* 0043A408 2739A0A8 */  addiu $t9, %lo(func_0043A0A8) # addiu $t9, $t9, -0x5f58
/* 0043A40C 0320F809 */  jalr  $t9
/* 0043A410 27A20058 */   addiu $v0, $sp, 0x58
/* 0043A414 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043A418 100000BA */  b     .L0043A704
/* 0043A41C 92070000 */   lbu   $a3, ($s0)
/* 0043A420 24010065 */  li    $at, 101
.L0043A424:
/* 0043A424 54E100AE */  bnel  $a3, $at, .L0043A6E0
/* 0043A428 24010063 */   li    $at, 99
/* 0043A42C 8F828A30 */  lw     $v0, %got(aentptr)($gp)
/* 0043A430 8C420000 */  lw    $v0, ($v0)
/* 0043A434 544000A6 */  bnezl $v0, .L0043A6D0
/* 0043A438 8C4F001C */   lw    $t7, 0x1c($v0)
/* 0043A43C 8E08000C */  lw    $t0, 0xc($s0)
/* 0043A440 8E060008 */  lw    $a2, 8($s0)
/* 0043A444 05010002 */  bgez  $t0, .L0043A450
/* 0043A448 01000821 */   move  $at, $t0
/* 0043A44C 25010003 */  addiu $at, $t0, 3
.L0043A450:
/* 0043A450 00014083 */  sra   $t0, $at, 2
/* 0043A454 30C20003 */  andi  $v0, $a2, 3
/* 0043A458 10400005 */  beqz  $v0, .L0043A470
/* 0043A45C 00C26823 */   subu  $t5, $a2, $v0
/* 0043A460 25AE0004 */  addiu $t6, $t5, 4
/* 0043A464 00087880 */  sll   $t7, $t0, 2
/* 0043A468 AE0E0008 */  sw    $t6, 8($s0)
/* 0043A46C AE0F000C */  sw    $t7, 0xc($s0)
.L0043A470:
/* 0043A470 8F828B0C */  lw     $v0, %got(allcallersave)($gp)
/* 0043A474 29010004 */  slti  $at, $t0, 4
/* 0043A478 90420000 */  lbu   $v0, ($v0)
/* 0043A47C 14400008 */  bnez  $v0, .L0043A4A0
/* 0043A480 00000000 */   nop   
/* 0043A484 14200006 */  bnez  $at, .L0043A4A0
/* 0043A488 00000000 */   nop   
/* 0043A48C 8F998A5C */  lw     $t9, %got(lang)($gp)
/* 0043A490 24010003 */  li    $at, 3
/* 0043A494 93390000 */  lbu   $t9, ($t9)
/* 0043A498 1721008A */  bne   $t9, $at, .L0043A6C4
/* 0043A49C 00000000 */   nop   
.L0043A4A0:
/* 0043A4A0 14400009 */  bnez  $v0, .L0043A4C8
/* 0043A4A4 8E060008 */   lw    $a2, 8($s0)
/* 0043A4A8 8F828A04 */  lw     $v0, %got(pdefno)($gp)
/* 0043A4AC 8C4B0000 */  lw    $t3, ($v0)
/* 0043A4B0 25780001 */  addiu $t8, $t3, 1
/* 0043A4B4 2B010003 */  slti  $at, $t8, 3
/* 0043A4B8 14200003 */  bnez  $at, .L0043A4C8
/* 0043A4BC AC580000 */   sw    $t8, ($v0)
/* 0043A4C0 8F818A24 */  lw     $at, %got(passedbyfp)($gp)
/* 0043A4C4 A0200000 */  sb    $zero, ($at)
.L0043A4C8:
/* 0043A4C8 8F8A89F8 */  lw     $t2, %got(pdeftabsize)($gp)
/* 0043A4CC 01061021 */  addu  $v0, $t0, $a2
/* 0043A4D0 00404825 */  move  $t1, $v0
/* 0043A4D4 8D430000 */  lw    $v1, ($t2)
/* 0043A4D8 0043082A */  slt   $at, $v0, $v1
/* 0043A4DC 1420003D */  bnez  $at, .L0043A5D4
/* 0043A4E0 00032900 */   sll   $a1, $v1, 4
/* 0043A4E4 24A5000F */  addiu $a1, $a1, 0xf
/* 0043A4E8 00093100 */  sll   $a2, $t1, 4
/* 0043A4EC 8F9986E8 */  lw    $t9, %call16(alloc_realloc)($gp)
/* 0043A4F0 24C6000F */  addiu $a2, $a2, 0xf
/* 0043A4F4 8F8489F4 */  lw     $a0, %got(pdeftab)($gp)
/* 0043A4F8 8F878954 */  lw     $a3, %got(perm_heap)($gp)
/* 0043A4FC AFA80054 */  sw    $t0, 0x54($sp)
/* 0043A500 AFA9004C */  sw    $t1, 0x4c($sp)
/* 0043A504 8C840000 */  lw    $a0, ($a0)
/* 0043A508 04A10002 */  bgez  $a1, .L0043A514
/* 0043A50C 00A00821 */   move  $at, $a1
/* 0043A510 24A1000F */  addiu $at, $a1, 0xf
.L0043A514:
/* 0043A514 00012903 */  sra   $a1, $at, 4
/* 0043A518 04C10002 */  bgez  $a2, .L0043A524
/* 0043A51C 00C00821 */   move  $at, $a2
/* 0043A520 24C1000F */  addiu $at, $a2, 0xf
.L0043A524:
/* 0043A524 00013103 */  sra   $a2, $at, 4
/* 0043A528 0320F809 */  jalr  $t9
/* 0043A52C 00000000 */   nop   
/* 0043A530 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043A534 8FA9004C */  lw    $t1, 0x4c($sp)
/* 0043A538 8FA80054 */  lw    $t0, 0x54($sp)
/* 0043A53C 8F8189F4 */  lw     $at, %got(pdeftab)($gp)
/* 0043A540 8F8A89F8 */  lw     $t2, %got(pdeftabsize)($gp)
/* 0043A544 25260001 */  addiu $a2, $t1, 1
/* 0043A548 AC220000 */  sw    $v0, ($at)
/* 0043A54C 8D450000 */  lw    $a1, ($t2)
/* 0043A550 24A50001 */  addiu $a1, $a1, 1
/* 0043A554 0125082A */  slt   $at, $t1, $a1
/* 0043A558 1420001C */  bnez  $at, .L0043A5CC
/* 0043A55C 00C53823 */   subu  $a3, $a2, $a1
/* 0043A560 30E70003 */  andi  $a3, $a3, 3
/* 0043A564 10E0000D */  beqz  $a3, .L0043A59C
/* 0043A568 00A01825 */   move  $v1, $a1
/* 0043A56C 8F8D89F4 */  lw     $t5, %got(pdeftab)($gp)
/* 0043A570 00057100 */  sll   $t6, $a1, 4
/* 0043A574 00E52021 */  addu  $a0, $a3, $a1
/* 0043A578 8DAD0000 */  lw    $t5, ($t5)
/* 0043A57C 24050060 */  li    $a1, 96
/* 0043A580 01AE1021 */  addu  $v0, $t5, $t6
.L0043A584:
/* 0043A584 24630001 */  addiu $v1, $v1, 1
/* 0043A588 A045FFF0 */  sb    $a1, -0x10($v0)
/* 0043A58C 1483FFFD */  bne   $a0, $v1, .L0043A584
/* 0043A590 24420010 */   addiu $v0, $v0, 0x10
/* 0043A594 5066000E */  beql  $v1, $a2, .L0043A5D0
/* 0043A598 AD490000 */   sw    $t1, ($t2)
.L0043A59C:
/* 0043A59C 8F8F89F4 */  lw     $t7, %got(pdeftab)($gp)
/* 0043A5A0 0003C900 */  sll   $t9, $v1, 4
/* 0043A5A4 24050060 */  li    $a1, 96
/* 0043A5A8 8DEF0000 */  lw    $t7, ($t7)
/* 0043A5AC 01F91021 */  addu  $v0, $t7, $t9
.L0043A5B0:
/* 0043A5B0 24630004 */  addiu $v1, $v1, 4
/* 0043A5B4 A045FFF0 */  sb    $a1, -0x10($v0)
/* 0043A5B8 A0450000 */  sb    $a1, ($v0)
/* 0043A5BC A0450010 */  sb    $a1, 0x10($v0)
/* 0043A5C0 A0450020 */  sb    $a1, 0x20($v0)
/* 0043A5C4 1466FFFA */  bne   $v1, $a2, .L0043A5B0
/* 0043A5C8 24420040 */   addiu $v0, $v0, 0x40
.L0043A5CC:
/* 0043A5CC AD490000 */  sw    $t1, ($t2)
.L0043A5D0:
/* 0043A5D0 8E060008 */  lw    $a2, 8($s0)
.L0043A5D4:
/* 0043A5D4 8F8B89F4 */  lw     $t3, %got(pdeftab)($gp)
/* 0043A5D8 96020002 */  lhu   $v0, 2($s0)
/* 0043A5DC 0008C100 */  sll   $t8, $t0, 4
/* 0043A5E0 8D6B0000 */  lw    $t3, ($t3)
/* 0043A5E4 304F0002 */  andi  $t7, $v0, 2
/* 0043A5E8 000FC82B */  sltu  $t9, $zero, $t7
/* 0043A5EC 01781821 */  addu  $v1, $t3, $t8
/* 0043A5F0 920D0001 */  lbu   $t5, 1($s0)
/* 0043A5F4 A0790002 */  sb    $t9, 2($v1)
/* 0043A5F8 8F998300 */  lw    $t9, %call16(formal_parm_vreg)($gp)
/* 0043A5FC 8E04000C */  lw    $a0, 0xc($s0)
/* 0043A600 304B0001 */  andi  $t3, $v0, 1
/* 0043A604 240C0065 */  li    $t4, 101
/* 0043A608 000BC02B */  sltu  $t8, $zero, $t3
/* 0043A60C 31AE001F */  andi  $t6, $t5, 0x1f
/* 0043A610 A06C0000 */  sb    $t4, ($v1)
/* 0043A614 A06E0001 */  sb    $t6, 1($v1)
/* 0043A618 A0780004 */  sb    $t8, 4($v1)
/* 0043A61C AC66000C */  sw    $a2, 0xc($v1)
/* 0043A620 AFA30040 */  sw    $v1, 0x40($sp)
/* 0043A624 AFA80054 */  sw    $t0, 0x54($sp)
/* 0043A628 0320F809 */  jalr  $t9
/* 0043A62C AC640008 */   sw    $a0, 8($v1)
/* 0043A630 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043A634 8FA30040 */  lw    $v1, 0x40($sp)
/* 0043A638 2C4C0001 */  sltiu $t4, $v0, 1
/* 0043A63C 8F8D8B0C */  lw     $t5, %got(allcallersave)($gp)
/* 0043A640 A06C0003 */  sb    $t4, 3($v1)
/* 0043A644 8FA80054 */  lw    $t0, 0x54($sp)
/* 0043A648 91AD0000 */  lbu   $t5, ($t5)
/* 0043A64C 15A00015 */  bnez  $t5, .L0043A6A4
/* 0043A650 00000000 */   nop   
/* 0043A654 920E0001 */  lbu   $t6, 1($s0)
/* 0043A658 3C01000C */  lui   $at, 0xc
/* 0043A65C 31CF001F */  andi  $t7, $t6, 0x1f
/* 0043A660 2DF90020 */  sltiu $t9, $t7, 0x20
/* 0043A664 00195823 */  negu  $t3, $t9
/* 0043A668 0161C024 */  and   $t8, $t3, $at
/* 0043A66C 01F86004 */  sllv  $t4, $t8, $t7
/* 0043A670 05800003 */  bltz  $t4, .L0043A680
/* 0043A674 00000000 */   nop   
/* 0043A678 8F818A24 */  lw     $at, %got(passedbyfp)($gp)
/* 0043A67C A0200000 */  sb    $zero, ($at)
.L0043A680:
/* 0043A680 8F8D8A24 */  lw     $t5, %got(passedbyfp)($gp)
/* 0043A684 91AD0000 */  lbu   $t5, ($t5)
/* 0043A688 11A00006 */  beqz  $t5, .L0043A6A4
/* 0043A68C 00000000 */   nop   
/* 0043A690 8E0E000C */  lw    $t6, 0xc($s0)
/* 0043A694 8E190008 */  lw    $t9, 8($s0)
/* 0043A698 8F818A28 */  lw     $at, %got(offsetpassedbyint)($gp)
/* 0043A69C 01D95821 */  addu  $t3, $t6, $t9
/* 0043A6A0 AC2B0000 */  sw    $t3, ($at)
.L0043A6A4:
/* 0043A6A4 8F828A00 */  lw     $v0, %got(pdefmax)($gp)
/* 0043A6A8 8C580000 */  lw    $t8, ($v0)
/* 0043A6AC 0308082A */  slt   $at, $t8, $t0
/* 0043A6B0 50200003 */  beql  $at, $zero, .L0043A6C0
/* 0043A6B4 AC580000 */   sw    $t8, ($v0)
/* 0043A6B8 0100C025 */  move  $t8, $t0
/* 0043A6BC AC580000 */  sw    $t8, ($v0)
.L0043A6C0:
/* 0043A6C0 92070000 */  lbu   $a3, ($s0)
.L0043A6C4:
/* 0043A6C4 10000010 */  b     .L0043A708
/* 0043A6C8 2CED00A0 */   sltiu $t5, $a3, 0xa0
/* 0043A6CC 8C4F001C */  lw    $t7, 0x1c($v0)
.L0043A6D0:
/* 0043A6D0 25EC0001 */  addiu $t4, $t7, 1
/* 0043A6D4 1000003C */  b     .L0043A7C8
/* 0043A6D8 AC4C001C */   sw    $t4, 0x1c($v0)
/* 0043A6DC 24010063 */  li    $at, 99
.L0043A6E0:
/* 0043A6E0 54E10009 */  bnel  $a3, $at, .L0043A708
/* 0043A6E4 2CED00A0 */   sltiu $t5, $a3, 0xa0
/* 0043A6E8 8F9986A4 */  lw    $t9, %call16(getoption)($gp)
/* 0043A6EC 8E040004 */  lw    $a0, 4($s0)
/* 0043A6F0 8E050008 */  lw    $a1, 8($s0)
/* 0043A6F4 0320F809 */  jalr  $t9
/* 0043A6F8 00000000 */   nop   
/* 0043A6FC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043A700 92070000 */  lbu   $a3, ($s0)
.L0043A704:
/* 0043A704 2CED00A0 */  sltiu $t5, $a3, 0xa0
.L0043A708:
/* 0043A708 11A00009 */  beqz  $t5, .L0043A730
/* 0043A70C 24050060 */   li    $a1, 96
/* 0043A710 8F8B8044 */  lw    $t3, %got(D_10010854)($gp)
/* 0043A714 00077143 */  sra   $t6, $a3, 5
/* 0043A718 000EC880 */  sll   $t9, $t6, 2
/* 0043A71C 256B0854 */  addiu $t3, %lo(D_10010854) # addiu $t3, $t3, 0x854
/* 0043A720 0179C021 */  addu  $t8, $t3, $t9
/* 0043A724 8F0F0000 */  lw    $t7, ($t8)
/* 0043A728 00EF6004 */  sllv  $t4, $t7, $a3
/* 0043A72C 298D0000 */  slti  $t5, $t4, 0
.L0043A730:
/* 0043A730 11A00012 */  beqz  $t5, .L0043A77C
/* 0043A734 2401008B */   li    $at, 139
/* 0043A738 8F8B8DA8 */  lw     $t3, %got(lastcopiedu)($gp)
/* 0043A73C 8E180000 */  lw    $t8, ($s0)
/* 0043A740 AD780000 */  sw    $t8, ($t3)
/* 0043A744 8E190004 */  lw    $t9, 4($s0)
/* 0043A748 AD790004 */  sw    $t9, 4($t3)
/* 0043A74C 8E180008 */  lw    $t8, 8($s0)
/* 0043A750 AD780008 */  sw    $t8, 8($t3)
/* 0043A754 8E19000C */  lw    $t9, 0xc($s0)
/* 0043A758 AD79000C */  sw    $t9, 0xc($t3)
/* 0043A75C 8E180010 */  lw    $t8, 0x10($s0)
/* 0043A760 AD780010 */  sw    $t8, 0x10($t3)
/* 0043A764 8E190014 */  lw    $t9, 0x14($s0)
/* 0043A768 AD790014 */  sw    $t9, 0x14($t3)
/* 0043A76C 8E180018 */  lw    $t8, 0x18($s0)
/* 0043A770 AD780018 */  sw    $t8, 0x18($t3)
/* 0043A774 8E19001C */  lw    $t9, 0x1c($s0)
/* 0043A778 AD79001C */  sw    $t9, 0x1c($t3)
.L0043A77C:
/* 0043A77C 50E1000A */  beql  $a3, $at, .L0043A7A8
/* 0043A780 24010051 */   li    $at, 81
/* 0043A784 50A70008 */  beql  $a1, $a3, .L0043A7A8
/* 0043A788 24010051 */   li    $at, 81
/* 0043A78C 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 0043A790 02002025 */  move  $a0, $s0
/* 0043A794 0320F809 */  jalr  $t9
/* 0043A798 00000000 */   nop   
/* 0043A79C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043A7A0 92070000 */  lbu   $a3, ($s0)
/* 0043A7A4 24010051 */  li    $at, 81
.L0043A7A8:
/* 0043A7A8 54E10008 */  bnel  $a3, $at, .L0043A7CC
/* 0043A7AC 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0043A7B0 960F0002 */  lhu   $t7, 2($s0)
/* 0043A7B4 8F818A40 */  lw     $at, %got(curlocpg)($gp)
/* 0043A7B8 AC2F0000 */  sw    $t7, ($at)
/* 0043A7BC 8E0C0004 */  lw    $t4, 4($s0)
/* 0043A7C0 8F818A44 */  lw     $at, %got(curlocln)($gp)
/* 0043A7C4 AC2C0000 */  sw    $t4, ($at)
.L0043A7C8:
/* 0043A7C8 8FBF001C */  lw    $ra, 0x1c($sp)
.L0043A7CC:
/* 0043A7CC 8FB00014 */  lw    $s0, 0x14($sp)
/* 0043A7D0 27BD0058 */  addiu $sp, $sp, 0x58
/* 0043A7D4 03E00008 */  jr    $ra
/* 0043A7D8 00000000 */   nop   
    .type copyline, @function
    .size copyline, .-copyline
    .end copyline

glabel createcvtl
    .ent createcvtl
    # 0043CFCC readnxtinst
/* 0043A7DC 3C1C0FBE */  .cpload $t9
/* 0043A7E0 279CFAB4 */  
/* 0043A7E4 0399E021 */  
/* 0043A7E8 8F828DA4 */  lw     $v0, %got(u)($gp)
/* 0043A7EC 240E0019 */  li    $t6, 25
/* 0043A7F0 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0043A7F4 90430001 */  lbu   $v1, 1($v0)
/* 0043A7F8 A04E0000 */  sb    $t6, ($v0)
/* 0043A7FC AC440004 */  sw    $a0, 4($v0)
/* 0043A800 00037EC0 */  sll   $t7, $v1, 0x1b
/* 0043A804 000FC6C2 */  srl   $t8, $t7, 0x1b
/* 0043A808 00B8C826 */  xor   $t9, $a1, $t8
/* 0043A80C 3328001F */  andi  $t0, $t9, 0x1f
/* 0043A810 01034826 */  xor   $t1, $t0, $v1
/* 0043A814 A0490001 */  sb    $t1, 1($v0)
/* 0043A818 A4400002 */  sh    $zero, 2($v0)
/* 0043A81C 8F99832C */  lw    $t9, %call16(readnxtinst)($gp)
/* 0043A820 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0043A824 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0043A828 0320F809 */  jalr  $t9
/* 0043A82C AFA50024 */   sw    $a1, 0x24($sp)
/* 0043A830 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0043A834 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043A838 27BD0020 */  addiu $sp, $sp, 0x20
/* 0043A83C 03E00008 */  jr    $ra
/* 0043A840 00000000 */   nop   
    .type createcvtl, @function
    .size createcvtl, .-createcvtl
    .end createcvtl

glabel in_outparlist
    .ent in_outparlist
    # 0043CFCC readnxtinst
/* 0043A844 3C1C0FBE */  .cpload $t9
/* 0043A848 279CFA4C */  
/* 0043A84C 0399E021 */  
/* 0043A850 8F838C44 */  lw     $v1, %got(outparhead)($gp)
/* 0043A854 8C630000 */  lw    $v1, ($v1)
/* 0043A858 5060000A */  beql  $v1, $zero, .L0043A884
/* 0043A85C 00001025 */   move  $v0, $zero
/* 0043A860 8C6E0000 */  lw    $t6, ($v1)
.L0043A864:
/* 0043A864 548E0004 */  bnel  $a0, $t6, .L0043A878
/* 0043A868 8C630008 */   lw    $v1, 8($v1)
/* 0043A86C 03E00008 */  jr    $ra
/* 0043A870 8C620004 */   lw    $v0, 4($v1)

/* 0043A874 8C630008 */  lw    $v1, 8($v1)
.L0043A878:
/* 0043A878 5460FFFA */  bnezl $v1, .L0043A864
/* 0043A87C 8C6E0000 */   lw    $t6, ($v1)
/* 0043A880 00001025 */  move  $v0, $zero
.L0043A884:
/* 0043A884 03E00008 */  jr    $ra
/* 0043A888 00000000 */   nop   
    .type in_outparlist, @function
    .size in_outparlist, .-in_outparlist
    .end in_outparlist

glabel insert_outparlist
    .ent insert_outparlist
    # 0043CFCC readnxtinst
/* 0043A88C 3C1C0FBE */  .cpload $t9
/* 0043A890 279CFA04 */  
/* 0043A894 0399E021 */  
/* 0043A898 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0043A89C 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 0043A8A0 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0043A8A4 AFA40020 */  sw    $a0, 0x20($sp)
/* 0043A8A8 AFA50024 */  sw    $a1, 0x24($sp)
/* 0043A8AC AFBC0018 */  sw    $gp, 0x18($sp)
/* 0043A8B0 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 0043A8B4 0320F809 */  jalr  $t9
/* 0043A8B8 2404000C */   li    $a0, 12
/* 0043A8BC 8FAE0020 */  lw    $t6, 0x20($sp)
/* 0043A8C0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043A8C4 AC4E0000 */  sw    $t6, ($v0)
/* 0043A8C8 8FAF0024 */  lw    $t7, 0x24($sp)
/* 0043A8CC 8F838C44 */  lw     $v1, %got(outparhead)($gp)
/* 0043A8D0 AC4F0004 */  sw    $t7, 4($v0)
/* 0043A8D4 8C780000 */  lw    $t8, ($v1)
/* 0043A8D8 AC580008 */  sw    $t8, 8($v0)
/* 0043A8DC 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0043A8E0 27BD0020 */  addiu $sp, $sp, 0x20
/* 0043A8E4 AC620000 */  sw    $v0, ($v1)
/* 0043A8E8 03E00008 */  jr    $ra
/* 0043A8EC 00000000 */   nop   
    .type insert_outparlist, @function
    .size insert_outparlist, .-insert_outparlist
    .end insert_outparlist

glabel constexp
    .ent constexp
    # 0043A8F0 constexp
    # 0043CFCC readnxtinst
/* 0043A8F0 3C1C0FBE */  .cpload $t9
/* 0043A8F4 279CF9A0 */  
/* 0043A8F8 0399E021 */  
/* 0043A8FC 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0043A900 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0043A904 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0043A908 90820000 */  lbu   $v0, ($a0)
/* 0043A90C 3C011600 */  lui   $at, 0x1600
/* 0043A910 00802825 */  move  $a1, $a0
/* 0043A914 2C4E0020 */  sltiu $t6, $v0, 0x20
/* 0043A918 000E7823 */  negu  $t7, $t6
/* 0043A91C 01E1C024 */  and   $t8, $t7, $at
/* 0043A920 0058C804 */  sllv  $t9, $t8, $v0
/* 0043A924 07210003 */  bgez  $t9, .L0043A934
/* 0043A928 2C480020 */   sltiu $t0, $v0, 0x20
/* 0043A92C 10000035 */  b     .L0043AA04
/* 0043A930 00001825 */   move  $v1, $zero
.L0043A934:
/* 0043A934 00084823 */  negu  $t1, $t0
/* 0043A938 3C016080 */  lui   $at, 0x6080
/* 0043A93C 01215024 */  and   $t2, $t1, $at
/* 0043A940 004A5804 */  sllv  $t3, $t2, $v0
/* 0043A944 05630004 */  bgezl $t3, .L0043A958
/* 0043A948 90AC0001 */   lbu   $t4, 1($a1)
/* 0043A94C 1000002D */  b     .L0043AA04
/* 0043A950 24030001 */   li    $v1, 1
/* 0043A954 90AC0001 */  lbu   $t4, 1($a1)
.L0043A958:
/* 0043A958 3C018A80 */  lui   $at, 0x8a80
/* 0043A95C 2D8D0020 */  sltiu $t5, $t4, 0x20
/* 0043A960 000D7023 */  negu  $t6, $t5
/* 0043A964 01C17824 */  and   $t7, $t6, $at
/* 0043A968 018FC004 */  sllv  $t8, $t7, $t4
/* 0043A96C 0701000B */  bgez  $t8, .L0043A99C
/* 0043A970 00000000 */   nop   
/* 0043A974 90B90020 */  lbu   $t9, 0x20($a1)
/* 0043A978 3C010003 */  lui   $at, 3
/* 0043A97C 34219E80 */  ori   $at, $at, 0x9e80
/* 0043A980 2728FFE0 */  addiu $t0, $t9, -0x20
/* 0043A984 2D090020 */  sltiu $t1, $t0, 0x20
/* 0043A988 00095023 */  negu  $t2, $t1
/* 0043A98C 01415824 */  and   $t3, $t2, $at
/* 0043A990 010B6804 */  sllv  $t5, $t3, $t0
/* 0043A994 05A10003 */  bgez  $t5, .L0043A9A4
/* 0043A998 00000000 */   nop   
.L0043A99C:
/* 0043A99C 10000019 */  b     .L0043AA04
/* 0043A9A0 00001825 */   move  $v1, $zero
.L0043A9A4:
/* 0043A9A4 8F998314 */  lw    $t9, %call16(constexp)($gp)
/* 0043A9A8 8CA40024 */  lw    $a0, 0x24($a1)
/* 0043A9AC AFA50020 */  sw    $a1, 0x20($sp)
/* 0043A9B0 0320F809 */  jalr  $t9
/* 0043A9B4 00000000 */   nop   
/* 0043A9B8 304400FF */  andi  $a0, $v0, 0xff
/* 0043A9BC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043A9C0 1080000F */  beqz  $a0, .L0043AA00
/* 0043A9C4 8FA50020 */   lw    $a1, 0x20($sp)
/* 0043A9C8 90AE0020 */  lbu   $t6, 0x20($a1)
/* 0043A9CC 8F8C8DBC */  lw     $t4, %got(optab)($gp)
/* 0043A9D0 000E7880 */  sll   $t7, $t6, 2
/* 0043A9D4 01EE7823 */  subu  $t7, $t7, $t6
/* 0043A9D8 01ECC021 */  addu  $t8, $t7, $t4
/* 0043A9DC 93190002 */  lbu   $t9, 2($t8)
/* 0043A9E0 53200008 */  beql  $t9, $zero, .L0043AA04
/* 0043A9E4 308300FF */   andi  $v1, $a0, 0xff
/* 0043A9E8 8F998314 */  lw    $t9, %call16(constexp)($gp)
/* 0043A9EC 8CA40028 */  lw    $a0, 0x28($a1)
/* 0043A9F0 0320F809 */  jalr  $t9
/* 0043A9F4 00000000 */   nop   
/* 0043A9F8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043A9FC 304400FF */  andi  $a0, $v0, 0xff
.L0043AA00:
/* 0043AA00 308300FF */  andi  $v1, $a0, 0xff
.L0043AA04:
/* 0043AA04 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0043AA08 27BD0020 */  addiu $sp, $sp, 0x20
/* 0043AA0C 00601025 */  move  $v0, $v1
/* 0043AA10 03E00008 */  jr    $ra
/* 0043AA14 00000000 */   nop   
    .type constexp, @function
    .size constexp, .-constexp
    .end constexp

glabel appendstorelist
    .ent appendstorelist
    # 0043CFCC readnxtinst
    # 0046E77C oneloopblockstmt
    # 004710F0 str_to_temporary
    # 004737E0 par_to_str
    # 00473F04 pmov_to_mov
/* 0043AA18 3C1C0FBE */  .cpload $t9
/* 0043AA1C 279CF878 */  
/* 0043AA20 0399E021 */  
/* 0043AA24 8F8E89B4 */  lw     $t6, %got(curgraphnode)($gp)
/* 0043AA28 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0043AA2C AFBF001C */  sw    $ra, 0x1c($sp)
/* 0043AA30 8DCE0000 */  lw    $t6, ($t6)
/* 0043AA34 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0043AA38 8DCF0024 */  lw    $t7, 0x24($t6)
/* 0043AA3C 15E0000C */  bnez  $t7, .L0043AA70
/* 0043AA40 00000000 */   nop   
/* 0043AA44 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 0043AA48 24040010 */  li    $a0, 16
/* 0043AA4C 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 0043AA50 0320F809 */  jalr  $t9
/* 0043AA54 00000000 */   nop   
/* 0043AA58 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043AA5C 00401825 */  move  $v1, $v0
/* 0043AA60 8F8489B4 */  lw     $a0, %got(curgraphnode)($gp)
/* 0043AA64 8C840000 */  lw    $a0, ($a0)
/* 0043AA68 1000000D */  b     .L0043AAA0
/* 0043AA6C AC820024 */   sw    $v0, 0x24($a0)
.L0043AA70:
/* 0043AA70 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 0043AA74 24040010 */  li    $a0, 16
/* 0043AA78 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 0043AA7C 0320F809 */  jalr  $t9
/* 0043AA80 00000000 */   nop   
/* 0043AA84 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043AA88 8F8489B4 */  lw     $a0, %got(curgraphnode)($gp)
/* 0043AA8C 8C840000 */  lw    $a0, ($a0)
/* 0043AA90 8C980028 */  lw    $t8, 0x28($a0)
/* 0043AA94 AF020004 */  sw    $v0, 4($t8)
/* 0043AA98 8C990028 */  lw    $t9, 0x28($a0)
/* 0043AA9C 8F230004 */  lw    $v1, 4($t9)
.L0043AAA0:
/* 0043AAA0 54600006 */  bnezl $v1, .L0043AABC
/* 0043AAA4 8C890028 */   lw    $t1, 0x28($a0)
/* 0043AAA8 8F818B20 */  lw     $at, %got(outofmem)($gp)
/* 0043AAAC 24080001 */  li    $t0, 1
/* 0043AAB0 1000000C */  b     .L0043AAE4
/* 0043AAB4 A0280000 */   sb    $t0, ($at)
/* 0043AAB8 8C890028 */  lw    $t1, 0x28($a0)
.L0043AABC:
/* 0043AABC 8F8289C4 */  lw     $v0, %got(stattail)($gp)
/* 0043AAC0 240A0001 */  li    $t2, 1
/* 0043AAC4 AC690000 */  sw    $t1, ($v1)
/* 0043AAC8 AC830028 */  sw    $v1, 0x28($a0)
/* 0043AACC AC600004 */  sw    $zero, 4($v1)
/* 0043AAD0 A06A0009 */  sb    $t2, 9($v1)
/* 0043AAD4 A0600008 */  sb    $zero, 8($v1)
/* 0043AAD8 8C420000 */  lw    $v0, ($v0)
/* 0043AADC AC62000C */  sw    $v0, 0xc($v1)
/* 0043AAE0 AC430018 */  sw    $v1, 0x18($v0)
.L0043AAE4:
/* 0043AAE4 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0043AAE8 27BD0020 */  addiu $sp, $sp, 0x20
/* 0043AAEC 03E00008 */  jr    $ra
/* 0043AAF0 00000000 */   nop   
    .type appendstorelist, @function
    .size appendstorelist, .-appendstorelist
    .end appendstorelist

glabel appendbbvarlst
    .ent appendbbvarlst
    # 0043ABD0 incroccurrence
    # 0043CBFC func_0043CBFC
    # 0043CFCC readnxtinst
    # 0046D428 oneloopblockexpr
/* 0043AAF4 3C1C0FBE */  .cpload $t9
/* 0043AAF8 279CF79C */  
/* 0043AAFC 0399E021 */  
/* 0043AB00 8F8E89B4 */  lw     $t6, %got(curgraphnode)($gp)
/* 0043AB04 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0043AB08 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0043AB0C 8DCE0000 */  lw    $t6, ($t6)
/* 0043AB10 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0043AB14 AFA40020 */  sw    $a0, 0x20($sp)
/* 0043AB18 8DCF0024 */  lw    $t7, 0x24($t6)
/* 0043AB1C 15E0000C */  bnez  $t7, .L0043AB50
/* 0043AB20 00000000 */   nop   
/* 0043AB24 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 0043AB28 24040010 */  li    $a0, 16
/* 0043AB2C 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 0043AB30 0320F809 */  jalr  $t9
/* 0043AB34 00000000 */   nop   
/* 0043AB38 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043AB3C 00401825 */  move  $v1, $v0
/* 0043AB40 8F8489B4 */  lw     $a0, %got(curgraphnode)($gp)
/* 0043AB44 8C840000 */  lw    $a0, ($a0)
/* 0043AB48 1000000D */  b     .L0043AB80
/* 0043AB4C AC820024 */   sw    $v0, 0x24($a0)
.L0043AB50:
/* 0043AB50 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 0043AB54 24040010 */  li    $a0, 16
/* 0043AB58 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 0043AB5C 0320F809 */  jalr  $t9
/* 0043AB60 00000000 */   nop   
/* 0043AB64 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043AB68 8F8489B4 */  lw     $a0, %got(curgraphnode)($gp)
/* 0043AB6C 8C840000 */  lw    $a0, ($a0)
/* 0043AB70 8C980028 */  lw    $t8, 0x28($a0)
/* 0043AB74 AF020004 */  sw    $v0, 4($t8)
/* 0043AB78 8C990028 */  lw    $t9, 0x28($a0)
/* 0043AB7C 8F230004 */  lw    $v1, 4($t9)
.L0043AB80:
/* 0043AB80 14600005 */  bnez  $v1, .L0043AB98
/* 0043AB84 240A0002 */   li    $t2, 2
/* 0043AB88 8F818B20 */  lw     $at, %got(outofmem)($gp)
/* 0043AB8C 24080001 */  li    $t0, 1
/* 0043AB90 1000000B */  b     .L0043ABC0
/* 0043AB94 A0280000 */   sb    $t0, ($at)
.L0043AB98:
/* 0043AB98 8C890028 */  lw    $t1, 0x28($a0)
/* 0043AB9C 8FAB0020 */  lw    $t3, 0x20($sp)
/* 0043ABA0 8FAC0020 */  lw    $t4, 0x20($sp)
/* 0043ABA4 AC690000 */  sw    $t1, ($v1)
/* 0043ABA8 AC830028 */  sw    $v1, 0x28($a0)
/* 0043ABAC AC600004 */  sw    $zero, 4($v1)
/* 0043ABB0 A06A0009 */  sb    $t2, 9($v1)
/* 0043ABB4 A0600008 */  sb    $zero, 8($v1)
/* 0043ABB8 AC6B000C */  sw    $t3, 0xc($v1)
/* 0043ABBC AD830018 */  sw    $v1, 0x18($t4)
.L0043ABC0:
/* 0043ABC0 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0043ABC4 27BD0020 */  addiu $sp, $sp, 0x20
/* 0043ABC8 03E00008 */  jr    $ra
/* 0043ABCC 00000000 */   nop   
    .type appendbbvarlst, @function
    .size appendbbvarlst, .-appendbbvarlst
    .end appendbbvarlst

glabel incroccurrence
    .ent incroccurrence
    # 0043CFCC readnxtinst
    # 0046D428 oneloopblockexpr
/* 0043ABD0 3C1C0FBE */  .cpload $t9
/* 0043ABD4 279CF6C0 */  
/* 0043ABD8 0399E021 */  
/* 0043ABDC 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 0043ABE0 8F9986E0 */  lw    $t9, %call16(has_ilod)($gp)
/* 0043ABE4 AFB30020 */  sw    $s3, 0x20($sp)
/* 0043ABE8 00809825 */  move  $s3, $a0
/* 0043ABEC AFBF0034 */  sw    $ra, 0x34($sp)
/* 0043ABF0 AFBC0030 */  sw    $gp, 0x30($sp)
/* 0043ABF4 AFB6002C */  sw    $s6, 0x2c($sp)
/* 0043ABF8 AFB50028 */  sw    $s5, 0x28($sp)
/* 0043ABFC AFB40024 */  sw    $s4, 0x24($sp)
/* 0043AC00 AFB2001C */  sw    $s2, 0x1c($sp)
/* 0043AC04 AFB10018 */  sw    $s1, 0x18($sp)
/* 0043AC08 AFB00014 */  sw    $s0, 0x14($sp)
/* 0043AC0C 0000B025 */  move  $s6, $zero
/* 0043AC10 0320F809 */  jalr  $t9
/* 0043AC14 8C840000 */   lw    $a0, ($a0)
/* 0043AC18 14400099 */  bnez  $v0, .L0043AE80
/* 0043AC1C 8FBC0030 */   lw    $gp, 0x30($sp)
/* 0043AC20 8F8E89B4 */  lw     $t6, %got(curgraphnode)($gp)
/* 0043AC24 24150003 */  li    $s5, 3
/* 0043AC28 24140001 */  li    $s4, 1
/* 0043AC2C 8DCE0000 */  lw    $t6, ($t6)
/* 0043AC30 8DD10024 */  lw    $s1, 0x24($t6)
/* 0043AC34 12200092 */  beqz  $s1, .L0043AE80
/* 0043AC38 00000000 */   nop   
/* 0043AC3C 922F0009 */  lbu   $t7, 9($s1)
.L0043AC40:
/* 0043AC40 568F008B */  bnel  $s4, $t7, .L0043AE70
/* 0043AC44 8E310004 */   lw    $s1, 4($s1)
/* 0043AC48 8E32000C */  lw    $s2, 0xc($s1)
/* 0043AC4C 92580000 */  lbu   $t8, ($s2)
/* 0043AC50 2719FFE0 */  addiu $t9, $t8, -0x20
/* 0043AC54 2F280060 */  sltiu $t0, $t9, 0x60
/* 0043AC58 11000009 */  beqz  $t0, .L0043AC80
/* 0043AC5C 00000000 */   nop   
/* 0043AC60 8F8B8044 */  lw    $t3, %got(D_10010868)($gp)
/* 0043AC64 00194943 */  sra   $t1, $t9, 5
/* 0043AC68 00095080 */  sll   $t2, $t1, 2
/* 0043AC6C 256B0868 */  addiu $t3, %lo(D_10010868) # addiu $t3, $t3, 0x868
/* 0043AC70 016A6021 */  addu  $t4, $t3, $t2
/* 0043AC74 8D8D0000 */  lw    $t5, ($t4)
/* 0043AC78 032D7004 */  sllv  $t6, $t5, $t9
/* 0043AC7C 29C80000 */  slti  $t0, $t6, 0
.L0043AC80:
/* 0043AC80 11000078 */  beqz  $t0, .L0043AE64
/* 0043AC84 00000000 */   nop   
/* 0043AC88 8E420004 */  lw    $v0, 4($s2)
/* 0043AC8C 8E780000 */  lw    $t8, ($s3)
/* 0043AC90 8C490034 */  lw    $t1, 0x34($v0)
/* 0043AC94 17090073 */  bne   $t8, $t1, .L0043AE64
/* 0043AC98 00000000 */   nop   
/* 0043AC9C 904B0002 */  lbu   $t3, 2($v0)
/* 0043ACA0 15600070 */  bnez  $t3, .L0043AE64
/* 0043ACA4 00000000 */   nop   
/* 0043ACA8 904A002E */  lbu   $t2, 0x2e($v0)
/* 0043ACAC 314C0007 */  andi  $t4, $t2, 7
/* 0043ACB0 12AC006C */  beq   $s5, $t4, .L0043AE64
/* 0043ACB4 00000000 */   nop   
/* 0043ACB8 904D0020 */  lbu   $t5, 0x20($v0)
/* 0043ACBC 29A10004 */  slti  $at, $t5, 4
/* 0043ACC0 14200068 */  bnez  $at, .L0043AE64
/* 0043ACC4 00000000 */   nop   
/* 0043ACC8 94590006 */  lhu   $t9, 6($v0)
/* 0043ACCC 13200065 */  beqz  $t9, .L0043AE64
/* 0043ACD0 00000000 */   nop   
/* 0043ACD4 904E0022 */  lbu   $t6, 0x22($v0)
/* 0043ACD8 11C00007 */  beqz  $t6, .L0043ACF8
/* 0043ACDC 00000000 */   nop   
/* 0043ACE0 8F8F8980 */  lw     $t7, %got(curblk)($gp)
/* 0043ACE4 8C48002C */  lw    $t0, 0x2c($v0)
/* 0043ACE8 8DEF0000 */  lw    $t7, ($t7)
/* 0043ACEC 0008C2C2 */  srl   $t8, $t0, 0xb
/* 0043ACF0 11F8005A */  beq   $t7, $t8, .L0043AE5C
/* 0043ACF4 00000000 */   nop   
.L0043ACF8:
/* 0043ACF8 8F898A9C */  lw     $t1, %got(doingcopy)($gp)
/* 0043ACFC 91290000 */  lbu   $t1, ($t1)
/* 0043AD00 15200056 */  bnez  $t1, .L0043AE5C
/* 0043AD04 00000000 */   nop   
/* 0043AD08 8F8B8B6C */  lw     $t3, %got(curproc)($gp)
/* 0043AD0C 8D6B0000 */  lw    $t3, ($t3)
/* 0043AD10 916A0015 */  lbu   $t2, 0x15($t3)
/* 0043AD14 15400051 */  bnez  $t2, .L0043AE5C
/* 0043AD18 00000000 */   nop   
/* 0043AD1C A240001D */  sb    $zero, 0x1d($s2)
/* 0043AD20 944C0006 */  lhu   $t4, 6($v0)
/* 0043AD24 329600FF */  andi  $s6, $s4, 0xff
/* 0043AD28 258D0001 */  addiu $t5, $t4, 1
/* 0043AD2C A44D0006 */  sh    $t5, 6($v0)
/* 0043AD30 8E700000 */  lw    $s0, ($s3)
/* 0043AD34 92030000 */  lbu   $v1, ($s0)
/* 0043AD38 2479FFFF */  addiu $t9, $v1, -1
/* 0043AD3C 2F210008 */  sltiu $at, $t9, 8
/* 0043AD40 10200022 */  beqz  $at, .L0043ADCC
/* 0043AD44 00000000 */   nop   
/* 0043AD48 8F818044 */  lw    $at, %got(jtbl_1000C254)($gp)
/* 0043AD4C 0019C880 */  sll   $t9, $t9, 2
/* 0043AD50 00390821 */  addu  $at, $at, $t9
/* 0043AD54 8C39C254 */  lw    $t9, %lo(jtbl_1000C254)($at)
/* 0043AD58 033CC821 */  addu  $t9, $t9, $gp
/* 0043AD5C 03200008 */  jr    $t9
/* 0043AD60 00000000 */   nop   
.L0043AD64:
/* 0043AD64 8F99861C */  lw    $t9, %call16(dbgerror)($gp)
/* 0043AD68 240401AE */  li    $a0, 430
/* 0043AD6C 0320F809 */  jalr  $t9
/* 0043AD70 00000000 */   nop   
/* 0043AD74 1000001D */  b     .L0043ADEC
/* 0043AD78 8FBC0030 */   lw    $gp, 0x30($sp)
.L0043AD7C:
/* 0043AD7C 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 0043AD80 8E040024 */  lw    $a0, 0x24($s0)
/* 0043AD84 0320F809 */  jalr  $t9
/* 0043AD88 00000000 */   nop   
/* 0043AD8C 8E700000 */  lw    $s0, ($s3)
/* 0043AD90 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0043AD94 920E0020 */  lbu   $t6, 0x20($s0)
/* 0043AD98 8F8F8DBC */  lw     $t7, %got(optab)($gp)
/* 0043AD9C 01D50019 */  multu $t6, $s5
/* 0043ADA0 00004012 */  mflo  $t0
/* 0043ADA4 010FC021 */  addu  $t8, $t0, $t7
/* 0043ADA8 93090002 */  lbu   $t1, 2($t8)
/* 0043ADAC 51200010 */  beql  $t1, $zero, .L0043ADF0
/* 0043ADB0 8E420004 */   lw    $v0, 4($s2)
/* 0043ADB4 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 0043ADB8 8E040028 */  lw    $a0, 0x28($s0)
/* 0043ADBC 0320F809 */  jalr  $t9
/* 0043ADC0 00000000 */   nop   
/* 0043ADC4 10000009 */  b     .L0043ADEC
/* 0043ADC8 8FBC0030 */   lw    $gp, 0x30($sp)
.L0043ADCC:
/* 0043ADCC 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 0043ADD0 8F868044 */  lw    $a2, %got(RO_1000C246)($gp)
/* 0043ADD4 02802025 */  move  $a0, $s4
/* 0043ADD8 240501B1 */  li    $a1, 433
/* 0043ADDC 2407000B */  li    $a3, 11
/* 0043ADE0 0320F809 */  jalr  $t9
/* 0043ADE4 24C6C246 */   addiu $a2, %lo(RO_1000C246) # addiu $a2, $a2, -0x3dba
/* 0043ADE8 8FBC0030 */  lw    $gp, 0x30($sp)
.L0043ADEC:
/* 0043ADEC 8E420004 */  lw    $v0, 4($s2)
.L0043ADF0:
/* 0043ADF0 AE620000 */  sw    $v0, ($s3)
/* 0043ADF4 904B0022 */  lbu   $t3, 0x22($v0)
/* 0043ADF8 55600007 */  bnezl $t3, .L0043AE18
/* 0043ADFC 8E700000 */   lw    $s0, ($s3)
/* 0043AE00 8F9983A0 */  lw    $t9, %call16(lodkillprev)($gp)
/* 0043AE04 00402025 */  move  $a0, $v0
/* 0043AE08 0320F809 */  jalr  $t9
/* 0043AE0C 00000000 */   nop   
/* 0043AE10 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0043AE14 8E700000 */  lw    $s0, ($s3)
.L0043AE18:
/* 0043AE18 960A0006 */  lhu   $t2, 6($s0)
/* 0043AE1C 168A0014 */  bne   $s4, $t2, .L0043AE70
/* 0043AE20 00000000 */   nop   
/* 0043AE24 8F99831C */  lw    $t9, %call16(appendbbvarlst)($gp)
/* 0043AE28 02002025 */  move  $a0, $s0
/* 0043AE2C 0320F809 */  jalr  $t9
/* 0043AE30 00000000 */   nop   
/* 0043AE34 8E6C0000 */  lw    $t4, ($s3)
/* 0043AE38 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0043AE3C 918D0022 */  lbu   $t5, 0x22($t4)
/* 0043AE40 11A0000B */  beqz  $t5, .L0043AE70
/* 0043AE44 00000000 */   nop   
/* 0043AE48 8F9989B4 */  lw     $t9, %got(curgraphnode)($gp)
/* 0043AE4C 8F390000 */  lw    $t9, ($t9)
/* 0043AE50 8F2E0028 */  lw    $t6, 0x28($t9)
/* 0043AE54 10000006 */  b     .L0043AE70
/* 0043AE58 A1D40008 */   sb    $s4, 8($t6)
.L0043AE5C:
/* 0043AE5C 10000004 */  b     .L0043AE70
/* 0043AE60 00008825 */   move  $s1, $zero
.L0043AE64:
/* 0043AE64 10000002 */  b     .L0043AE70
/* 0043AE68 8E310004 */   lw    $s1, 4($s1)
/* 0043AE6C 8E310004 */  lw    $s1, 4($s1)
.L0043AE70:
/* 0043AE70 12200003 */  beqz  $s1, .L0043AE80
/* 0043AE74 00000000 */   nop   
/* 0043AE78 52C0FF71 */  beql  $s6, $zero, .L0043AC40
/* 0043AE7C 922F0009 */   lbu   $t7, 9($s1)
.L0043AE80:
/* 0043AE80 56C00007 */  bnezl $s6, .L0043AEA0
/* 0043AE84 8FBF0034 */   lw    $ra, 0x34($sp)
/* 0043AE88 8F998640 */  lw    $t9, %call16(increasecount)($gp)
/* 0043AE8C 8E640000 */  lw    $a0, ($s3)
/* 0043AE90 0320F809 */  jalr  $t9
/* 0043AE94 00000000 */   nop   
/* 0043AE98 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0043AE9C 8FBF0034 */  lw    $ra, 0x34($sp)
.L0043AEA0:
/* 0043AEA0 8FB00014 */  lw    $s0, 0x14($sp)
/* 0043AEA4 8FB10018 */  lw    $s1, 0x18($sp)
/* 0043AEA8 8FB2001C */  lw    $s2, 0x1c($sp)
/* 0043AEAC 8FB30020 */  lw    $s3, 0x20($sp)
/* 0043AEB0 8FB40024 */  lw    $s4, 0x24($sp)
/* 0043AEB4 8FB50028 */  lw    $s5, 0x28($sp)
/* 0043AEB8 8FB6002C */  lw    $s6, 0x2c($sp)
/* 0043AEBC 03E00008 */  jr    $ra
/* 0043AEC0 27BD0038 */   addiu $sp, $sp, 0x38
    .type incroccurrence, @function
    .size incroccurrence, .-incroccurrence
    .end incroccurrence

glabel bigtree
    .ent bigtree
    # 0043AEC4 bigtree
    # 0043CFCC readnxtinst
/* 0043AEC4 3C1C0FBE */  .cpload $t9
/* 0043AEC8 279CF3CC */  
/* 0043AECC 0399E021 */  
/* 0043AED0 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0043AED4 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0043AED8 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0043AEDC 00803825 */  move  $a3, $a0
/* 0043AEE0 14A00003 */  bnez  $a1, .L0043AEF0
/* 0043AEE4 00A03025 */   move  $a2, $a1
/* 0043AEE8 1000000D */  b     .L0043AF20
/* 0043AEEC 24020001 */   li    $v0, 1
.L0043AEF0:
/* 0043AEF0 90EE0000 */  lbu   $t6, ($a3)
/* 0043AEF4 24010004 */  li    $at, 4
/* 0043AEF8 11C10003 */  beq   $t6, $at, .L0043AF08
/* 0043AEFC 00000000 */   nop   
/* 0043AF00 10000007 */  b     .L0043AF20
/* 0043AF04 00001025 */   move  $v0, $zero
.L0043AF08:
/* 0043AF08 8F998324 */  lw    $t9, %call16(bigtree)($gp)
/* 0043AF0C 8CE40024 */  lw    $a0, 0x24($a3)
/* 0043AF10 24C5FFFF */  addiu $a1, $a2, -1
/* 0043AF14 0320F809 */  jalr  $t9
/* 0043AF18 00000000 */   nop   
/* 0043AF1C 8FBC0018 */  lw    $gp, 0x18($sp)
.L0043AF20:
/* 0043AF20 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0043AF24 27BD0020 */  addiu $sp, $sp, 0x20
/* 0043AF28 03E00008 */  jr    $ra
/* 0043AF2C 00000000 */   nop   
    .type bigtree, @function
    .size bigtree, .-bigtree
    .end bigtree

glabel treekilled
    .ent treekilled
    # 0043AF30 treekilled
    # 0043CE64 func_0043CE64
    # 0043CFCC readnxtinst
    # 0046D158 unroll_check_istr_propcopy
    # 0046D2C0 unroll_check_irst_propcopy
/* 0043AF30 3C1C0FBE */  .cpload $t9
/* 0043AF34 279CF360 */  
/* 0043AF38 0399E021 */  
/* 0043AF3C 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0043AF40 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0043AF44 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0043AF48 90820000 */  lbu   $v0, ($a0)
/* 0043AF4C 3C011200 */  lui   $at, 0x1200
/* 0043AF50 00803025 */  move  $a2, $a0
/* 0043AF54 2C4E0020 */  sltiu $t6, $v0, 0x20
/* 0043AF58 000E7823 */  negu  $t7, $t6
/* 0043AF5C 01E1C024 */  and   $t8, $t7, $at
/* 0043AF60 0058C804 */  sllv  $t9, $t8, $v0
/* 0043AF64 07210003 */  bgez  $t9, .L0043AF74
/* 0043AF68 2C480020 */   sltiu $t0, $v0, 0x20
/* 0043AF6C 10000040 */  b     .L0043B070
/* 0043AF70 90830002 */   lbu   $v1, 2($a0)
.L0043AF74:
/* 0043AF74 00084823 */  negu  $t1, $t0
/* 0043AF78 3C016480 */  lui   $at, 0x6480
/* 0043AF7C 01215024 */  and   $t2, $t1, $at
/* 0043AF80 004A5804 */  sllv  $t3, $t2, $v0
/* 0043AF84 05610003 */  bgez  $t3, .L0043AF94
/* 0043AF88 00000000 */   nop   
/* 0043AF8C 10000038 */  b     .L0043B070
/* 0043AF90 00001825 */   move  $v1, $zero
.L0043AF94:
/* 0043AF94 8F998328 */  lw    $t9, %call16(treekilled)($gp)
/* 0043AF98 8CC40024 */  lw    $a0, 0x24($a2)
/* 0043AF9C AFA60020 */  sw    $a2, 0x20($sp)
/* 0043AFA0 0320F809 */  jalr  $t9
/* 0043AFA4 00000000 */   nop   
/* 0043AFA8 8FA60020 */  lw    $a2, 0x20($sp)
/* 0043AFAC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043AFB0 304400FF */  andi  $a0, $v0, 0xff
/* 0043AFB4 90C30020 */  lbu   $v1, 0x20($a2)
/* 0043AFB8 2465FFE0 */  addiu $a1, $v1, -0x20
/* 0043AFBC 2CAC0020 */  sltiu $t4, $a1, 0x20
/* 0043AFC0 000C6823 */  negu  $t5, $t4
/* 0043AFC4 31AE1200 */  andi  $t6, $t5, 0x1200
/* 0043AFC8 00AE7804 */  sllv  $t7, $t6, $a1
/* 0043AFCC 05E10007 */  bgez  $t7, .L0043AFEC
/* 0043AFD0 00000000 */   nop   
/* 0043AFD4 304300FF */  andi  $v1, $v0, 0xff
/* 0043AFD8 14600002 */  bnez  $v1, .L0043AFE4
/* 0043AFDC 00000000 */   nop   
/* 0043AFE0 90C30002 */  lbu   $v1, 2($a2)
.L0043AFE4:
/* 0043AFE4 10000021 */  b     .L0043B06C
/* 0043AFE8 306400FF */   andi  $a0, $v1, 0xff
.L0043AFEC:
/* 0043AFEC 8F998DBC */  lw     $t9, %got(optab)($gp)
/* 0043AFF0 0003C080 */  sll   $t8, $v1, 2
/* 0043AFF4 0303C023 */  subu  $t8, $t8, $v1
/* 0043AFF8 03194021 */  addu  $t0, $t8, $t9
/* 0043AFFC 91090002 */  lbu   $t1, 2($t0)
/* 0043B000 304300FF */  andi  $v1, $v0, 0xff
/* 0043B004 5120001A */  beql  $t1, $zero, .L0043B070
/* 0043B008 308300FF */   andi  $v1, $a0, 0xff
/* 0043B00C 5460000C */  bnezl $v1, .L0043B040
/* 0043B010 2CAA0020 */   sltiu $t2, $a1, 0x20
/* 0043B014 8F998328 */  lw    $t9, %call16(treekilled)($gp)
/* 0043B018 8CC40028 */  lw    $a0, 0x28($a2)
/* 0043B01C AFA60020 */  sw    $a2, 0x20($sp)
/* 0043B020 0320F809 */  jalr  $t9
/* 0043B024 00000000 */   nop   
/* 0043B028 8FA60020 */  lw    $a2, 0x20($sp)
/* 0043B02C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043B030 00401825 */  move  $v1, $v0
/* 0043B034 90C50020 */  lbu   $a1, 0x20($a2)
/* 0043B038 24A5FFE0 */  addiu $a1, $a1, -0x20
/* 0043B03C 2CAA0020 */  sltiu $t2, $a1, 0x20
.L0043B040:
/* 0043B040 3C010003 */  lui   $at, 3
/* 0043B044 34218C80 */  ori   $at, $at, 0x8c80
/* 0043B048 000A5823 */  negu  $t3, $t2
/* 0043B04C 01616024 */  and   $t4, $t3, $at
/* 0043B050 00AC6804 */  sllv  $t5, $t4, $a1
/* 0043B054 05A10005 */  bgez  $t5, .L0043B06C
/* 0043B058 306400FF */   andi  $a0, $v1, 0xff
/* 0043B05C 14800002 */  bnez  $a0, .L0043B068
/* 0043B060 00801825 */   move  $v1, $a0
/* 0043B064 90C30002 */  lbu   $v1, 2($a2)
.L0043B068:
/* 0043B068 306400FF */  andi  $a0, $v1, 0xff
.L0043B06C:
/* 0043B06C 308300FF */  andi  $v1, $a0, 0xff
.L0043B070:
/* 0043B070 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0043B074 27BD0020 */  addiu $sp, $sp, 0x20
/* 0043B078 00601025 */  move  $v0, $v1
/* 0043B07C 03E00008 */  jr    $ra
/* 0043B080 00000000 */   nop   
    .type treekilled, @function
    .size treekilled, .-treekilled
    .end treekilled

    .type func_0043B084, @function
func_0043B084:
    # 0043B504 func_0043B504
/* 0043B084 3C1C0FBE */  .cpload $t9
/* 0043B088 279CF20C */  
/* 0043B08C 0399E021 */  
/* 0043B090 AFA40000 */  sw    $a0, ($sp)
/* 0043B094 97A20000 */  lhu   $v0, ($sp)
/* 0043B098 8F848988 */  lw     $a0, %got(realstore)($gp)
/* 0043B09C AFA50004 */  sw    $a1, 4($sp)
/* 0043B0A0 8C840000 */  lw    $a0, ($a0)
/* 0043B0A4 04410003 */  bgez  $v0, .L0043B0B4
/* 0043B0A8 00021A03 */   sra   $v1, $v0, 8
/* 0043B0AC 244100FF */  addiu $at, $v0, 0xff
/* 0043B0B0 00011A03 */  sra   $v1, $at, 8
.L0043B0B4:
/* 0043B0B4 18600011 */  blez  $v1, .L0043B0FC
/* 0043B0B8 24650001 */   addiu $a1, $v1, 1
/* 0043B0BC 24A7FFFF */  addiu $a3, $a1, -1
/* 0043B0C0 30E70003 */  andi  $a3, $a3, 3
/* 0043B0C4 10E00007 */  beqz  $a3, .L0043B0E4
/* 0043B0C8 24060001 */   li    $a2, 1
/* 0043B0CC 24E30001 */  addiu $v1, $a3, 1
.L0043B0D0:
/* 0043B0D0 24C60001 */  addiu $a2, $a2, 1
/* 0043B0D4 1466FFFE */  bne   $v1, $a2, .L0043B0D0
/* 0043B0D8 8C840100 */   lw    $a0, 0x100($a0)
/* 0043B0DC 50C50008 */  beql  $a2, $a1, .L0043B100
/* 0043B0E0 97A50002 */   lhu   $a1, 2($sp)
.L0043B0E4:
/* 0043B0E4 8C840100 */  lw    $a0, 0x100($a0)
/* 0043B0E8 24C60004 */  addiu $a2, $a2, 4
/* 0043B0EC 8C840100 */  lw    $a0, 0x100($a0)
/* 0043B0F0 8C840100 */  lw    $a0, 0x100($a0)
/* 0043B0F4 14C5FFFB */  bne   $a2, $a1, .L0043B0E4
/* 0043B0F8 8C840100 */   lw    $a0, 0x100($a0)
.L0043B0FC:
/* 0043B0FC 97A50002 */  lhu   $a1, 2($sp)
.L0043B100:
/* 0043B100 00003025 */  move  $a2, $zero
/* 0043B104 24030001 */  li    $v1, 1
/* 0043B108 18A00012 */  blez  $a1, .L0043B154
/* 0043B10C 00000000 */   nop   
/* 0043B110 8F8E8950 */  lw     $t6, %got(ustrptr)($gp)
/* 0043B114 304F00FF */  andi  $t7, $v0, 0xff
/* 0043B118 008F4021 */  addu  $t0, $a0, $t7
/* 0043B11C 8DC70000 */  lw    $a3, ($t6)
/* 0043B120 0106C821 */  addu  $t9, $t0, $a2
.L0043B124:
/* 0043B124 93290000 */  lbu   $t1, ($t9)
/* 0043B128 90F80000 */  lbu   $t8, ($a3)
/* 0043B12C 53090004 */  beql  $t8, $t1, .L0043B140
/* 0043B130 24C60001 */   addiu $a2, $a2, 1
/* 0043B134 10000003 */  b     .L0043B144
/* 0043B138 00001825 */   move  $v1, $zero
/* 0043B13C 24C60001 */  addiu $a2, $a2, 1
.L0043B140:
/* 0043B140 24E70001 */  addiu $a3, $a3, 1
.L0043B144:
/* 0043B144 10600003 */  beqz  $v1, .L0043B154
/* 0043B148 00C5082A */   slt   $at, $a2, $a1
/* 0043B14C 5420FFF5 */  bnezl $at, .L0043B124
/* 0043B150 0106C821 */   addu  $t9, $t0, $a2
.L0043B154:
/* 0043B154 03E00008 */  jr    $ra
/* 0043B158 00601025 */   move  $v0, $v1

    .type func_0043B15C, @function
func_0043B15C:
    # 0043CFCC readnxtinst
/* 0043B15C 3C1C0FBE */  .cpload $t9
/* 0043B160 279CF134 */  
/* 0043B164 0399E021 */  
/* 0043B168 8F868964 */  lw     $a2, %got(ustack)($gp)
/* 0043B16C 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0043B170 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0043B174 8CCE0000 */  lw    $t6, ($a2)
/* 0043B178 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0043B17C AFA40020 */  sw    $a0, 0x20($sp)
/* 0043B180 8DC50008 */  lw    $a1, 8($t6)
/* 0043B184 54A0000E */  bnezl $a1, .L0043B1C0
/* 0043B188 8FAF0020 */   lw    $t7, 0x20($sp)
/* 0043B18C 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 0043B190 24040010 */  li    $a0, 16
/* 0043B194 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 0043B198 0320F809 */  jalr  $t9
/* 0043B19C 00000000 */   nop   
/* 0043B1A0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043B1A4 00402825 */  move  $a1, $v0
/* 0043B1A8 8F868964 */  lw     $a2, %got(ustack)($gp)
/* 0043B1AC 8CC30000 */  lw    $v1, ($a2)
/* 0043B1B0 AC400008 */  sw    $zero, 8($v0)
/* 0043B1B4 AC43000C */  sw    $v1, 0xc($v0)
/* 0043B1B8 AC620008 */  sw    $v0, 8($v1)
/* 0043B1BC 8FAF0020 */  lw    $t7, 0x20($sp)
.L0043B1C0:
/* 0043B1C0 ACC50000 */  sw    $a1, ($a2)
/* 0043B1C4 ACA00004 */  sw    $zero, 4($a1)
/* 0043B1C8 ACAF0000 */  sw    $t7, ($a1)
/* 0043B1CC 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0043B1D0 27BD0020 */  addiu $sp, $sp, 0x20
/* 0043B1D4 03E00008 */  jr    $ra
/* 0043B1D8 00000000 */   nop   

    .type func_0043B1DC, @function
func_0043B1DC:
    # 0043CFCC readnxtinst
/* 0043B1DC 3C1C0FBE */  .cpload $t9
/* 0043B1E0 279CF0B4 */  
/* 0043B1E4 0399E021 */  
/* 0043B1E8 8F828964 */  lw     $v0, %got(ustack)($gp)
/* 0043B1EC 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0043B1F0 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0043B1F4 8C420000 */  lw    $v0, ($v0)
/* 0043B1F8 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0043B1FC 8C430004 */  lw    $v1, 4($v0)
/* 0043B200 1060000A */  beqz  $v1, .L0043B22C
/* 0043B204 00603025 */   move  $a2, $v1
/* 0043B208 8F9986B8 */  lw    $t9, %call16(binopwithconst)($gp)
/* 0043B20C AC400004 */  sw    $zero, 4($v0)
/* 0043B210 24040001 */  li    $a0, 1
/* 0043B214 0320F809 */  jalr  $t9
/* 0043B218 8C450000 */   lw    $a1, ($v0)
/* 0043B21C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043B220 8F8E8964 */  lw     $t6, %got(ustack)($gp)
/* 0043B224 8DCE0000 */  lw    $t6, ($t6)
/* 0043B228 ADC20000 */  sw    $v0, ($t6)
.L0043B22C:
/* 0043B22C 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0043B230 27BD0020 */  addiu $sp, $sp, 0x20
/* 0043B234 03E00008 */  jr    $ra
/* 0043B238 00000000 */   nop   

    .type func_0043B23C, @function
func_0043B23C:
    # 0043CFCC readnxtinst
/* 0043B23C 3C1C0FBE */  .cpload $t9
/* 0043B240 279CF054 */  
/* 0043B244 0399E021 */  
/* 0043B248 8F838964 */  lw     $v1, %got(ustack)($gp)
/* 0043B24C 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0043B250 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0043B254 8C630000 */  lw    $v1, ($v1)
/* 0043B258 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0043B25C 24040001 */  li    $a0, 1
/* 0043B260 8C620004 */  lw    $v0, 4($v1)
/* 0043B264 28418000 */  slti  $at, $v0, -0x8000
/* 0043B268 14200005 */  bnez  $at, .L0043B280
/* 0043B26C 000233C3 */   sra   $a2, $v0, 0xf
/* 0043B270 34018000 */  li    $at, 32768
/* 0043B274 0041082A */  slt   $at, $v0, $at
/* 0043B278 5420000C */  bnezl $at, .L0043B2AC
/* 0043B27C 8FBF001C */   lw    $ra, 0x1c($sp)
.L0043B280:
/* 0043B280 8F9986B8 */  lw    $t9, %call16(binopwithconst)($gp)
/* 0043B284 000633C0 */  sll   $a2, $a2, 0xf
/* 0043B288 00467023 */  subu  $t6, $v0, $a2
/* 0043B28C AC6E0004 */  sw    $t6, 4($v1)
/* 0043B290 0320F809 */  jalr  $t9
/* 0043B294 8C650000 */   lw    $a1, ($v1)
/* 0043B298 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043B29C 8F8F8964 */  lw     $t7, %got(ustack)($gp)
/* 0043B2A0 8DEF0000 */  lw    $t7, ($t7)
/* 0043B2A4 ADE20000 */  sw    $v0, ($t7)
/* 0043B2A8 8FBF001C */  lw    $ra, 0x1c($sp)
.L0043B2AC:
/* 0043B2AC 27BD0020 */  addiu $sp, $sp, 0x20
/* 0043B2B0 03E00008 */  jr    $ra
/* 0043B2B4 00000000 */   nop   

    .type func_0043B2B8, @function
func_0043B2B8:
    # 0043CFCC readnxtinst
/* 0043B2B8 3C1C0FBE */  .cpload $t9
/* 0043B2BC 279CEFD8 */  
/* 0043B2C0 0399E021 */  
/* 0043B2C4 8F86896C */  lw     $a2, %got(parstack)($gp)
/* 0043B2C8 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0043B2CC AFBF001C */  sw    $ra, 0x1c($sp)
/* 0043B2D0 8CCE0000 */  lw    $t6, ($a2)
/* 0043B2D4 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0043B2D8 AFA40020 */  sw    $a0, 0x20($sp)
/* 0043B2DC 8DC50004 */  lw    $a1, 4($t6)
/* 0043B2E0 54A0000E */  bnezl $a1, .L0043B31C
/* 0043B2E4 8FAF0020 */   lw    $t7, 0x20($sp)
/* 0043B2E8 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 0043B2EC 2404000C */  li    $a0, 12
/* 0043B2F0 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 0043B2F4 0320F809 */  jalr  $t9
/* 0043B2F8 00000000 */   nop   
/* 0043B2FC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043B300 00402825 */  move  $a1, $v0
/* 0043B304 8F86896C */  lw     $a2, %got(parstack)($gp)
/* 0043B308 8CC30000 */  lw    $v1, ($a2)
/* 0043B30C AC400004 */  sw    $zero, 4($v0)
/* 0043B310 AC430008 */  sw    $v1, 8($v0)
/* 0043B314 AC620004 */  sw    $v0, 4($v1)
/* 0043B318 8FAF0020 */  lw    $t7, 0x20($sp)
.L0043B31C:
/* 0043B31C ACC50000 */  sw    $a1, ($a2)
/* 0043B320 ACAF0000 */  sw    $t7, ($a1)
/* 0043B324 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0043B328 27BD0020 */  addiu $sp, $sp, 0x20
/* 0043B32C 03E00008 */  jr    $ra
/* 0043B330 00000000 */   nop   

    .type func_0043B334, @function
func_0043B334:
    # 0043CFCC readnxtinst
/* 0043B334 3C1C0FBE */  .cpload $t9
/* 0043B338 279CEF5C */  
/* 0043B33C 0399E021 */  
/* 0043B340 27BDFFA8 */  addiu $sp, $sp, -0x58
/* 0043B344 AFBF002C */  sw    $ra, 0x2c($sp)
/* 0043B348 AFBC0028 */  sw    $gp, 0x28($sp)
/* 0043B34C AFB40024 */  sw    $s4, 0x24($sp)
/* 0043B350 AFB30020 */  sw    $s3, 0x20($sp)
/* 0043B354 AFB2001C */  sw    $s2, 0x1c($sp)
/* 0043B358 AFB10018 */  sw    $s1, 0x18($sp)
/* 0043B35C AFB00014 */  sw    $s0, 0x14($sp)
/* 0043B360 90820000 */  lbu   $v0, ($a0)
/* 0043B364 24010002 */  li    $at, 2
/* 0043B368 00808825 */  move  $s1, $a0
/* 0043B36C 14410019 */  bne   $v0, $at, .L0043B3D4
/* 0043B370 24140001 */   li    $s4, 1
/* 0043B374 90850001 */  lbu   $a1, 1($a0)
/* 0043B378 24010006 */  li    $at, 6
/* 0043B37C 8C930020 */  lw    $s3, 0x20($a0)
/* 0043B380 14A10006 */  bne   $a1, $at, .L0043B39C
/* 0043B384 3C017FFF */   lui   $at, 0x7fff
/* 0043B388 3421FFFF */  ori   $at, $at, 0xffff
/* 0043B38C 56610004 */  bnel  $s3, $at, .L0043B3A0
/* 0043B390 24010008 */   li    $at, 8
/* 0043B394 10000053 */  b     .L0043B4E4
/* 0043B398 00001025 */   move  $v0, $zero
.L0043B39C:
/* 0043B39C 24010008 */  li    $at, 8
.L0043B3A0:
/* 0043B3A0 14A10005 */  bne   $a1, $at, .L0043B3B8
/* 0043B3A4 2401FFFF */   li    $at, -1
/* 0043B3A8 16610003 */  bne   $s3, $at, .L0043B3B8
/* 0043B3AC 00000000 */   nop   
/* 0043B3B0 1000004C */  b     .L0043B4E4
/* 0043B3B4 00001025 */   move  $v0, $zero
.L0043B3B8:
/* 0043B3B8 8F9986B0 */  lw    $t9, %call16(enter_const)($gp)
/* 0043B3BC 8F8689B4 */  lw     $a2, %got(curgraphnode)($gp)
/* 0043B3C0 26640001 */  addiu $a0, $s3, 1
/* 0043B3C4 0320F809 */  jalr  $t9
/* 0043B3C8 8CC60000 */   lw    $a2, ($a2)
/* 0043B3CC 10000045 */  b     .L0043B4E4
/* 0043B3D0 8FBC0028 */   lw    $gp, 0x28($sp)
.L0043B3D4:
/* 0043B3D4 028202B6 */  tne   $s4, $v0, 0xa
/* 0043B3D8 962E0008 */  lhu   $t6, 8($s1)
/* 0043B3DC 8F998DF8 */  lw     $t9, %got(table)($gp)
/* 0043B3E0 8E330020 */  lw    $s3, 0x20($s1)
/* 0043B3E4 31CFFFFF */  andi  $t7, $t6, 0xffff
/* 0043B3E8 000FC080 */  sll   $t8, $t7, 2
/* 0043B3EC A7AE0048 */  sh    $t6, 0x48($sp)
/* 0043B3F0 03194021 */  addu  $t0, $t8, $t9
/* 0043B3F4 8D100000 */  lw    $s0, ($t0)
/* 0043B3F8 00009025 */  move  $s2, $zero
/* 0043B3FC 1200001F */  beqz  $s0, .L0043B47C
/* 0043B400 00000000 */   nop   
/* 0043B404 92090000 */  lbu   $t1, ($s0)
.L0043B408:
/* 0043B408 56890018 */  bnel  $s4, $t1, .L0043B46C
/* 0043B40C 8E10001C */   lw    $s0, 0x1c($s0)
/* 0043B410 8E0B0020 */  lw    $t3, 0x20($s0)
/* 0043B414 266A0001 */  addiu $t2, $s3, 1
/* 0043B418 554B0014 */  bnel  $t2, $t3, .L0043B46C
/* 0043B41C 8E10001C */   lw    $s0, 0x1c($s0)
/* 0043B420 8F99860C */  lw    $t9, %call16(addreq)($gp)
/* 0043B424 8E04002C */  lw    $a0, 0x2c($s0)
/* 0043B428 8E050030 */  lw    $a1, 0x30($s0)
/* 0043B42C 8E26002C */  lw    $a2, 0x2c($s1)
/* 0043B430 8E270030 */  lw    $a3, 0x30($s1)
/* 0043B434 AFA40000 */  sw    $a0, ($sp)
/* 0043B438 AFA50004 */  sw    $a1, 4($sp)
/* 0043B43C AFA60008 */  sw    $a2, 8($sp)
/* 0043B440 0320F809 */  jalr  $t9
/* 0043B444 AFA7000C */   sw    $a3, 0xc($sp)
/* 0043B448 10400007 */  beqz  $v0, .L0043B468
/* 0043B44C 8FBC0028 */   lw    $gp, 0x28($sp)
/* 0043B450 8E380024 */  lw    $t8, 0x24($s1)
/* 0043B454 8E190024 */  lw    $t9, 0x24($s0)
/* 0043B458 57190004 */  bnel  $t8, $t9, .L0043B46C
/* 0043B45C 8E10001C */   lw    $s0, 0x1c($s0)
/* 0043B460 10000002 */  b     .L0043B46C
/* 0043B464 329200FF */   andi  $s2, $s4, 0xff
.L0043B468:
/* 0043B468 8E10001C */  lw    $s0, 0x1c($s0)
.L0043B46C:
/* 0043B46C 16400003 */  bnez  $s2, .L0043B47C
/* 0043B470 00000000 */   nop   
/* 0043B474 5600FFE4 */  bnezl $s0, .L0043B408
/* 0043B478 92090000 */   lbu   $t1, ($s0)
.L0043B47C:
/* 0043B47C 16400018 */  bnez  $s2, .L0043B4E0
/* 0043B480 97A40048 */   lhu   $a0, 0x48($sp)
/* 0043B484 8F998620 */  lw    $t9, %call16(appendchain)($gp)
/* 0043B488 2628002C */  addiu $t0, $s1, 0x2c
/* 0043B48C AFA80034 */  sw    $t0, 0x34($sp)
/* 0043B490 0320F809 */  jalr  $t9
/* 0043B494 26720001 */   addiu $s2, $s3, 1
/* 0043B498 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0043B49C A0540000 */  sb    $s4, ($v0)
/* 0043B4A0 A0400001 */  sb    $zero, 1($v0)
/* 0043B4A4 8FA90034 */  lw    $t1, 0x34($sp)
/* 0043B4A8 8F8E89B4 */  lw     $t6, %got(curgraphnode)($gp)
/* 0043B4AC 00408025 */  move  $s0, $v0
/* 0043B4B0 8D2B0000 */  lw    $t3, ($t1)
/* 0043B4B4 AC4B002C */  sw    $t3, 0x2c($v0)
/* 0043B4B8 8D2A0004 */  lw    $t2, 4($t1)
/* 0043B4BC AC4A0030 */  sw    $t2, 0x30($v0)
/* 0043B4C0 8E2C0024 */  lw    $t4, 0x24($s1)
/* 0043B4C4 AC4C0024 */  sw    $t4, 0x24($v0)
/* 0043B4C8 8E2D0028 */  lw    $t5, 0x28($s1)
/* 0043B4CC AC520020 */  sw    $s2, 0x20($v0)
/* 0043B4D0 AC400018 */  sw    $zero, 0x18($v0)
/* 0043B4D4 AC4D0028 */  sw    $t5, 0x28($v0)
/* 0043B4D8 8DCE0000 */  lw    $t6, ($t6)
/* 0043B4DC AC4E0010 */  sw    $t6, 0x10($v0)
.L0043B4E0:
/* 0043B4E0 02001025 */  move  $v0, $s0
.L0043B4E4:
/* 0043B4E4 8FBF002C */  lw    $ra, 0x2c($sp)
/* 0043B4E8 8FB00014 */  lw    $s0, 0x14($sp)
/* 0043B4EC 8FB10018 */  lw    $s1, 0x18($sp)
/* 0043B4F0 8FB2001C */  lw    $s2, 0x1c($sp)
/* 0043B4F4 8FB30020 */  lw    $s3, 0x20($sp)
/* 0043B4F8 8FB40024 */  lw    $s4, 0x24($sp)
/* 0043B4FC 03E00008 */  jr    $ra
/* 0043B500 27BD0058 */   addiu $sp, $sp, 0x58

    .type func_0043B504, @function
func_0043B504:
    # 0043C248 func_0043C248
    # 0043C56C func_0043C56C
    # 0043CFCC readnxtinst
/* 0043B504 3C1C0FBE */  .cpload $t9
/* 0043B508 279CED8C */  
/* 0043B50C 0399E021 */  
/* 0043B510 27BDFFC0 */  addiu $sp, $sp, -0x40
/* 0043B514 AFB10018 */  sw    $s1, 0x18($sp)
/* 0043B518 AFA40040 */  sw    $a0, 0x40($sp)
/* 0043B51C 8F918DA4 */  lw     $s1, %got(u)($gp)
/* 0043B520 97AE0042 */  lhu   $t6, 0x42($sp)
/* 0043B524 8F988DF8 */  lw     $t8, %got(table)($gp)
/* 0043B528 922A0001 */  lbu   $t2, 1($s1)
/* 0043B52C 000E7880 */  sll   $t7, $t6, 2
/* 0043B530 AFBF0024 */  sw    $ra, 0x24($sp)
/* 0043B534 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0043B538 AFB2001C */  sw    $s2, 0x1c($sp)
/* 0043B53C AFB00014 */  sw    $s0, 0x14($sp)
/* 0043B540 01F8C821 */  addu  $t9, $t7, $t8
/* 0043B544 8F300000 */  lw    $s0, ($t9)
/* 0043B548 2401000E */  li    $at, 14
/* 0043B54C 314B001F */  andi  $t3, $t2, 0x1f
/* 0043B550 00409025 */  move  $s2, $v0
/* 0043B554 00004025 */  move  $t0, $zero
/* 0043B558 A3A00031 */  sb    $zero, 0x31($sp)
/* 0043B55C A3A00030 */  sb    $zero, 0x30($sp)
/* 0043B560 1561001A */  bne   $t3, $at, .L0043B5CC
/* 0043B564 A3A0002F */   sb    $zero, 0x2f($sp)
/* 0043B568 92240000 */  lbu   $a0, ($s1)
/* 0043B56C 24010049 */  li    $at, 73
/* 0043B570 10810016 */  beq   $a0, $at, .L0043B5CC
/* 0043B574 248CFFE0 */   addiu $t4, $a0, -0x20
/* 0043B578 2D8D0060 */  sltiu $t5, $t4, 0x60
/* 0043B57C 11A00009 */  beqz  $t5, .L0043B5A4
/* 0043B580 00000000 */   nop   
/* 0043B584 8F988044 */  lw    $t8, %got(D_10010890)($gp)
/* 0043B588 000C7143 */  sra   $t6, $t4, 5
/* 0043B58C 000E7880 */  sll   $t7, $t6, 2
/* 0043B590 27180890 */  addiu $t8, %lo(D_10010890) # addiu $t8, $t8, 0x890
/* 0043B594 030FC821 */  addu  $t9, $t8, $t7
/* 0043B598 8F2A0000 */  lw    $t2, ($t9)
/* 0043B59C 018A5804 */  sllv  $t3, $t2, $t4
/* 0043B5A0 296D0000 */  slti  $t5, $t3, 0
.L0043B5A4:
/* 0043B5A4 55A00004 */  bnezl $t5, .L0043B5B8
/* 0043B5A8 8E380008 */   lw    $t8, 8($s1)
/* 0043B5AC 10000007 */  b     .L0043B5CC
/* 0043B5B0 00008025 */   move  $s0, $zero
/* 0043B5B4 8E380008 */  lw    $t8, 8($s1)
.L0043B5B8:
/* 0043B5B8 240F0001 */  li    $t7, 1
/* 0043B5BC 2B010005 */  slti  $at, $t8, 5
/* 0043B5C0 54200003 */  bnezl $at, .L0043B5D0
/* 0043B5C4 93B9002F */   lbu   $t9, 0x2f($sp)
/* 0043B5C8 A3AF002F */  sb    $t7, 0x2f($sp)
.L0043B5CC:
/* 0043B5CC 93B9002F */  lbu   $t9, 0x2f($sp)
.L0043B5D0:
/* 0043B5D0 172002C1 */  bnez  $t9, .L0043C0D8
/* 0043B5D4 00000000 */   nop   
/* 0043B5D8 120002BF */  beqz  $s0, .L0043C0D8
/* 0043B5DC 24090004 */   li    $t1, 4
/* 0043B5E0 92030000 */  lbu   $v1, ($s0)
.L0043B5E4:
/* 0043B5E4 3C010C00 */  lui   $at, 0xc00
/* 0043B5E8 2C6A0020 */  sltiu $t2, $v1, 0x20
/* 0043B5EC 000A6023 */  negu  $t4, $t2
/* 0043B5F0 01815824 */  and   $t3, $t4, $at
/* 0043B5F4 006B7004 */  sllv  $t6, $t3, $v1
/* 0043B5F8 05C30007 */  bgezl $t6, .L0043B618
/* 0043B5FC 92240000 */   lbu   $a0, ($s1)
/* 0043B600 8F8D89B4 */  lw     $t5, %got(curgraphnode)($gp)
/* 0043B604 8E180010 */  lw    $t8, 0x10($s0)
/* 0043B608 8DAD0000 */  lw    $t5, ($t5)
/* 0043B60C 15B802A9 */  bne   $t5, $t8, .L0043C0B4
/* 0043B610 00000000 */   nop   
/* 0043B614 92240000 */  lbu   $a0, ($s1)
.L0043B618:
/* 0043B618 1000023F */  b     .L0043BF18
/* 0043B61C 00801025 */   move  $v0, $a0
.L0043B620:
/* 0043B620 24010003 */  li    $at, 3
/* 0043B624 146102A3 */  bne   $v1, $at, .L0043C0B4
/* 0043B628 00000000 */   nop   
/* 0043B62C 8E040028 */  lw    $a0, 0x28($s0)
/* 0043B630 8E05002C */  lw    $a1, 0x2c($s0)
/* 0043B634 8F99860C */  lw    $t9, %call16(addreq)($gp)
/* 0043B638 AFA40000 */  sw    $a0, ($sp)
/* 0043B63C AFA50004 */  sw    $a1, 4($sp)
/* 0043B640 8E46FFD4 */  lw    $a2, -0x2c($s2)
/* 0043B644 AFA60008 */  sw    $a2, 8($sp)
/* 0043B648 8E47FFD8 */  lw    $a3, -0x28($s2)
/* 0043B64C A3A80033 */  sb    $t0, 0x33($sp)
/* 0043B650 0320F809 */  jalr  $t9
/* 0043B654 AFA7000C */   sw    $a3, 0xc($sp)
/* 0043B658 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0043B65C 93A80033 */  lbu   $t0, 0x33($sp)
/* 0043B660 10400294 */  beqz  $v0, .L0043C0B4
/* 0043B664 24090004 */   li    $t1, 4
/* 0043B668 920B0021 */  lbu   $t3, 0x21($s0)
/* 0043B66C 240E0001 */  li    $t6, 1
/* 0043B670 11600003 */  beqz  $t3, .L0043B680
/* 0043B674 00000000 */   nop   
/* 0043B678 1000028E */  b     .L0043C0B4
/* 0043B67C A3AE002F */   sb    $t6, 0x2f($sp)
.L0043B680:
/* 0043B680 8F8D89B4 */  lw     $t5, %got(curgraphnode)($gp)
/* 0043B684 8E180010 */  lw    $t8, 0x10($s0)
/* 0043B688 8DAD0000 */  lw    $t5, ($t5)
/* 0043B68C 01B81026 */  xor   $v0, $t5, $t8
/* 0043B690 2C420001 */  sltiu $v0, $v0, 1
/* 0043B694 10400003 */  beqz  $v0, .L0043B6A4
/* 0043B698 00401825 */   move  $v1, $v0
/* 0043B69C 92030002 */  lbu   $v1, 2($s0)
/* 0043B6A0 2C630001 */  sltiu $v1, $v1, 1
.L0043B6A4:
/* 0043B6A4 920F0022 */  lbu   $t7, 0x22($s0)
/* 0043B6A8 306800FF */  andi  $t0, $v1, 0xff
/* 0043B6AC 306A00FF */  andi  $t2, $v1, 0xff
/* 0043B6B0 11E00003 */  beqz  $t7, .L0043B6C0
/* 0043B6B4 00000000 */   nop   
/* 0043B6B8 24190001 */  li    $t9, 1
/* 0043B6BC A3B90030 */  sb    $t9, 0x30($sp)
.L0043B6C0:
/* 0043B6C0 1540027C */  bnez  $t2, .L0043C0B4
/* 0043B6C4 00000000 */   nop   
/* 0043B6C8 1040027A */  beqz  $v0, .L0043C0B4
/* 0043B6CC 240C0001 */   li    $t4, 1
/* 0043B6D0 10000278 */  b     .L0043C0B4
/* 0043B6D4 A3AC0031 */   sb    $t4, 0x31($sp)
.L0043B6D8:
/* 0043B6D8 24010006 */  li    $at, 6
/* 0043B6DC 14610275 */  bne   $v1, $at, .L0043C0B4
/* 0043B6E0 00000000 */   nop   
/* 0043B6E4 8E040028 */  lw    $a0, 0x28($s0)
/* 0043B6E8 8E05002C */  lw    $a1, 0x2c($s0)
/* 0043B6EC 8F99860C */  lw    $t9, %call16(addreq)($gp)
/* 0043B6F0 AFA40000 */  sw    $a0, ($sp)
/* 0043B6F4 AFA50004 */  sw    $a1, 4($sp)
/* 0043B6F8 8E46FFD4 */  lw    $a2, -0x2c($s2)
/* 0043B6FC AFA60008 */  sw    $a2, 8($sp)
/* 0043B700 8E47FFD8 */  lw    $a3, -0x28($s2)
/* 0043B704 A3A80033 */  sb    $t0, 0x33($sp)
/* 0043B708 0320F809 */  jalr  $t9
/* 0043B70C AFA7000C */   sw    $a3, 0xc($sp)
/* 0043B710 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0043B714 93A80033 */  lbu   $t0, 0x33($sp)
/* 0043B718 10400266 */  beqz  $v0, .L0043C0B4
/* 0043B71C 24090004 */   li    $t1, 4
/* 0043B720 920F0021 */  lbu   $t7, 0x21($s0)
/* 0043B724 11E00004 */  beqz  $t7, .L0043B738
/* 0043B728 00000000 */   nop   
/* 0043B72C 24190001 */  li    $t9, 1
/* 0043B730 10000260 */  b     .L0043C0B4
/* 0043B734 A3B9002F */   sb    $t9, 0x2f($sp)
.L0043B738:
/* 0043B738 8F8A89B4 */  lw     $t2, %got(curgraphnode)($gp)
/* 0043B73C 8E0C0010 */  lw    $t4, 0x10($s0)
/* 0043B740 240D0001 */  li    $t5, 1
/* 0043B744 8D4A0000 */  lw    $t2, ($t2)
/* 0043B748 014C1026 */  xor   $v0, $t2, $t4
/* 0043B74C 2C420001 */  sltiu $v0, $v0, 1
/* 0043B750 10400003 */  beqz  $v0, .L0043B760
/* 0043B754 00401825 */   move  $v1, $v0
/* 0043B758 92030002 */  lbu   $v1, 2($s0)
/* 0043B75C 2C630001 */  sltiu $v1, $v1, 1
.L0043B760:
/* 0043B760 306300FF */  andi  $v1, $v1, 0xff
/* 0043B764 50600005 */  beql  $v1, $zero, .L0043B77C
/* 0043B768 920E0022 */   lbu   $t6, 0x22($s0)
/* 0043B76C 8E0B0024 */  lw    $t3, 0x24($s0)
/* 0043B770 91630021 */  lbu   $v1, 0x21($t3)
/* 0043B774 2C630001 */  sltiu $v1, $v1, 1
/* 0043B778 920E0022 */  lbu   $t6, 0x22($s0)
.L0043B77C:
/* 0043B77C 306800FF */  andi  $t0, $v1, 0xff
/* 0043B780 307800FF */  andi  $t8, $v1, 0xff
/* 0043B784 11C00002 */  beqz  $t6, .L0043B790
/* 0043B788 00000000 */   nop   
/* 0043B78C A3AD0030 */  sb    $t5, 0x30($sp)
.L0043B790:
/* 0043B790 17000248 */  bnez  $t8, .L0043C0B4
/* 0043B794 00000000 */   nop   
/* 0043B798 10400246 */  beqz  $v0, .L0043C0B4
/* 0043B79C 240F0001 */   li    $t7, 1
/* 0043B7A0 10000244 */  b     .L0043C0B4
/* 0043B7A4 A3AF0031 */   sb    $t7, 0x31($sp)
.L0043B7A8:
/* 0043B7A8 24010001 */  li    $at, 1
/* 0043B7AC 14610241 */  bne   $v1, $at, .L0043C0B4
/* 0043B7B0 00000000 */   nop   
/* 0043B7B4 8E04002C */  lw    $a0, 0x2c($s0)
/* 0043B7B8 8E050030 */  lw    $a1, 0x30($s0)
/* 0043B7BC 8F99860C */  lw    $t9, %call16(addreq)($gp)
/* 0043B7C0 AFA40000 */  sw    $a0, ($sp)
/* 0043B7C4 AFA50004 */  sw    $a1, 4($sp)
/* 0043B7C8 8E46FFD4 */  lw    $a2, -0x2c($s2)
/* 0043B7CC AFA60008 */  sw    $a2, 8($sp)
/* 0043B7D0 8E47FFD8 */  lw    $a3, -0x28($s2)
/* 0043B7D4 A3A80033 */  sb    $t0, 0x33($sp)
/* 0043B7D8 0320F809 */  jalr  $t9
/* 0043B7DC AFA7000C */   sw    $a3, 0xc($sp)
/* 0043B7E0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0043B7E4 93A80033 */  lbu   $t0, 0x33($sp)
/* 0043B7E8 10400232 */  beqz  $v0, .L0043C0B4
/* 0043B7EC 24090004 */   li    $t1, 4
/* 0043B7F0 8E2E0008 */  lw    $t6, 8($s1)
/* 0043B7F4 8E0D0024 */  lw    $t5, 0x24($s0)
/* 0043B7F8 15CD022E */  bne   $t6, $t5, .L0043C0B4
/* 0043B7FC 00000000 */   nop   
/* 0043B800 8E38000C */  lw    $t8, 0xc($s1)
/* 0043B804 8E0F0020 */  lw    $t7, 0x20($s0)
/* 0043B808 170F022A */  bne   $t8, $t7, .L0043C0B4
/* 0043B80C 00000000 */   nop   
/* 0043B810 10000228 */  b     .L0043C0B4
/* 0043B814 24080001 */   li    $t0, 1
.L0043B818:
/* 0043B818 24010005 */  li    $at, 5
/* 0043B81C 14610225 */  bne   $v1, $at, .L0043C0B4
/* 0043B820 00000000 */   nop   
/* 0043B824 8E04002C */  lw    $a0, 0x2c($s0)
/* 0043B828 8E050030 */  lw    $a1, 0x30($s0)
/* 0043B82C 8F99860C */  lw    $t9, %call16(addreq)($gp)
/* 0043B830 AFA40000 */  sw    $a0, ($sp)
/* 0043B834 AFA50004 */  sw    $a1, 4($sp)
/* 0043B838 8E46FFD4 */  lw    $a2, -0x2c($s2)
/* 0043B83C AFA60008 */  sw    $a2, 8($sp)
/* 0043B840 8E47FFD8 */  lw    $a3, -0x28($s2)
/* 0043B844 A3A80033 */  sb    $t0, 0x33($sp)
/* 0043B848 0320F809 */  jalr  $t9
/* 0043B84C AFA7000C */   sw    $a3, 0xc($sp)
/* 0043B850 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0043B854 93A80033 */  lbu   $t0, 0x33($sp)
/* 0043B858 10400216 */  beqz  $v0, .L0043C0B4
/* 0043B85C 24090004 */   li    $t1, 4
/* 0043B860 8E2E0008 */  lw    $t6, 8($s1)
/* 0043B864 8E0D0024 */  lw    $t5, 0x24($s0)
/* 0043B868 15CD0212 */  bne   $t6, $t5, .L0043C0B4
/* 0043B86C 00000000 */   nop   
/* 0043B870 8E38000C */  lw    $t8, 0xc($s1)
/* 0043B874 8E0F0020 */  lw    $t7, 0x20($s0)
/* 0043B878 170F020E */  bne   $t8, $t7, .L0043C0B4
/* 0043B87C 00000000 */   nop   
/* 0043B880 8E190034 */  lw    $t9, 0x34($s0)
/* 0043B884 93280021 */  lbu   $t0, 0x21($t9)
/* 0043B888 2D080001 */  sltiu $t0, $t0, 1
/* 0043B88C 10000209 */  b     .L0043C0B4
/* 0043B890 310800FF */   andi  $t0, $t0, 0xff
.L0043B894:
/* 0043B894 24010002 */  li    $at, 2
/* 0043B898 14610206 */  bne   $v1, $at, .L0043C0B4
/* 0043B89C 00000000 */   nop   
/* 0043B8A0 92220001 */  lbu   $v0, 1($s1)
/* 0043B8A4 920A0001 */  lbu   $t2, 1($s0)
/* 0043B8A8 3C01BAA0 */  lui   $at, 0xbaa0
/* 0043B8AC 3042001F */  andi  $v0, $v0, 0x1f
/* 0043B8B0 144A0200 */  bne   $v0, $t2, .L0043C0B4
/* 0043B8B4 2C4C0020 */   sltiu $t4, $v0, 0x20
/* 0043B8B8 000C5823 */  negu  $t3, $t4
/* 0043B8BC 01617024 */  and   $t6, $t3, $at
/* 0043B8C0 004E6804 */  sllv  $t5, $t6, $v0
/* 0043B8C4 05A10007 */  bgez  $t5, .L0043B8E4
/* 0043B8C8 3C010500 */   lui   $at, 0x500
/* 0043B8CC 8E380010 */  lw    $t8, 0x10($s1)
/* 0043B8D0 8E0F0020 */  lw    $t7, 0x20($s0)
/* 0043B8D4 170F01F7 */  bne   $t8, $t7, .L0043C0B4
/* 0043B8D8 00000000 */   nop   
/* 0043B8DC 100001F5 */  b     .L0043C0B4
/* 0043B8E0 24080001 */   li    $t0, 1
.L0043B8E4:
/* 0043B8E4 2C590020 */  sltiu $t9, $v0, 0x20
/* 0043B8E8 00195023 */  negu  $t2, $t9
/* 0043B8EC 01416024 */  and   $t4, $t2, $at
/* 0043B8F0 004C5804 */  sllv  $t3, $t4, $v0
/* 0043B8F4 0563000C */  bgezl $t3, .L0043B928
/* 0043B8F8 8E2D0010 */   lw    $t5, 0x10($s1)
/* 0043B8FC 8E2E0010 */  lw    $t6, 0x10($s1)
/* 0043B900 8E180020 */  lw    $t8, 0x20($s0)
/* 0043B904 8E2F0014 */  lw    $t7, 0x14($s1)
/* 0043B908 8E190024 */  lw    $t9, 0x24($s0)
/* 0043B90C 15D801E9 */  bne   $t6, $t8, .L0043C0B4
/* 0043B910 00000000 */   nop   
/* 0043B914 15F901E7 */  bne   $t7, $t9, .L0043C0B4
/* 0043B918 00000000 */   nop   
/* 0043B91C 100001E5 */  b     .L0043C0B4
/* 0043B920 24080001 */   li    $t0, 1
/* 0043B924 8E2D0010 */  lw    $t5, 0x10($s1)
.L0043B928:
/* 0043B928 960A0022 */  lhu   $t2, 0x22($s0)
/* 0043B92C 02401025 */  move  $v0, $s2
/* 0043B930 15AA01E0 */  bne   $t5, $t2, .L0043C0B4
/* 0043B934 00000000 */   nop   
/* 0043B938 8F998024 */  lw    $t9, %got(func_0043B084)($gp)
/* 0043B93C 8E040020 */  lw    $a0, 0x20($s0)
/* 0043B940 8E050024 */  lw    $a1, 0x24($s0)
/* 0043B944 2739B084 */  addiu $t9, %lo(func_0043B084) # addiu $t9, $t9, -0x4f7c
/* 0043B948 A3A80033 */  sb    $t0, 0x33($sp)
/* 0043B94C AFA40000 */  sw    $a0, ($sp)
/* 0043B950 0320F809 */  jalr  $t9
/* 0043B954 AFA50004 */   sw    $a1, 4($sp)
/* 0043B958 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0043B95C 93A80033 */  lbu   $t0, 0x33($sp)
/* 0043B960 104001D4 */  beqz  $v0, .L0043C0B4
/* 0043B964 24090004 */   li    $t1, 4
/* 0043B968 100001D2 */  b     .L0043C0B4
/* 0043B96C 24080001 */   li    $t0, 1
.L0043B970:
/* 0043B970 24010008 */  li    $at, 8
/* 0043B974 146101CF */  bne   $v1, $at, .L0043C0B4
/* 0043B978 00000000 */   nop   
/* 0043B97C 922E0001 */  lbu   $t6, 1($s1)
/* 0043B980 92180001 */  lbu   $t8, 1($s0)
/* 0043B984 31CF001F */  andi  $t7, $t6, 0x1f
/* 0043B988 15F801CA */  bne   $t7, $t8, .L0043C0B4
/* 0043B98C 00000000 */   nop   
/* 0043B990 8E390004 */  lw    $t9, 4($s1)
/* 0043B994 960D0020 */  lhu   $t5, 0x20($s0)
/* 0043B998 172D01C6 */  bne   $t9, $t5, .L0043C0B4
/* 0043B99C 00000000 */   nop   
/* 0043B9A0 100001C4 */  b     .L0043C0B4
/* 0043B9A4 24080001 */   li    $t0, 1
.L0043B9A8:
/* 0043B9A8 152301C2 */  bne   $t1, $v1, .L0043C0B4
/* 0043B9AC 00000000 */   nop   
/* 0043B9B0 920A0020 */  lbu   $t2, 0x20($s0)
/* 0043B9B4 148A01BF */  bne   $a0, $t2, .L0043C0B4
/* 0043B9B8 00000000 */   nop   
/* 0043B9BC 922C0001 */  lbu   $t4, 1($s1)
/* 0043B9C0 920E0001 */  lbu   $t6, 1($s0)
/* 0043B9C4 318B001F */  andi  $t3, $t4, 0x1f
/* 0043B9C8 156E01BA */  bne   $t3, $t6, .L0043C0B4
/* 0043B9CC 00000000 */   nop   
/* 0043B9D0 8E44FFE8 */  lw    $a0, -0x18($s2)
/* 0043B9D4 8E030024 */  lw    $v1, 0x24($s0)
/* 0043B9D8 8E42FFE4 */  lw    $v0, -0x1c($s2)
/* 0043B9DC 14830004 */  bne   $a0, $v1, .L0043B9F0
/* 0043B9E0 00000000 */   nop   
/* 0043B9E4 8E0F0028 */  lw    $t7, 0x28($s0)
/* 0043B9E8 504F0007 */  beql  $v0, $t7, .L0043BA08
/* 0043B9EC 96390002 */   lhu   $t9, 2($s1)
.L0043B9F0:
/* 0043B9F0 144301B0 */  bne   $v0, $v1, .L0043C0B4
/* 0043B9F4 00000000 */   nop   
/* 0043B9F8 8E180028 */  lw    $t8, 0x28($s0)
/* 0043B9FC 149801AD */  bne   $a0, $t8, .L0043C0B4
/* 0043BA00 00000000 */   nop   
/* 0043BA04 96390002 */  lhu   $t9, 2($s1)
.L0043BA08:
/* 0043BA08 920C003E */  lbu   $t4, 0x3e($s0)
/* 0043BA0C 332D0002 */  andi  $t5, $t9, 2
/* 0043BA10 000D502B */  sltu  $t2, $zero, $t5
/* 0043BA14 154C01A7 */  bne   $t2, $t4, .L0043C0B4
/* 0043BA18 00000000 */   nop   
/* 0043BA1C 100001A5 */  b     .L0043C0B4
/* 0043BA20 24080001 */   li    $t0, 1
.L0043BA24:
/* 0043BA24 152301A3 */  bne   $t1, $v1, .L0043C0B4
/* 0043BA28 00000000 */   nop   
/* 0043BA2C 920B0020 */  lbu   $t3, 0x20($s0)
/* 0043BA30 148B01A0 */  bne   $a0, $t3, .L0043C0B4
/* 0043BA34 00000000 */   nop   
/* 0043BA38 922E0001 */  lbu   $t6, 1($s1)
/* 0043BA3C 92180001 */  lbu   $t8, 1($s0)
/* 0043BA40 31CF001F */  andi  $t7, $t6, 0x1f
/* 0043BA44 15F8019B */  bne   $t7, $t8, .L0043C0B4
/* 0043BA48 00000000 */   nop   
/* 0043BA4C 8E44FFE8 */  lw    $a0, -0x18($s2)
/* 0043BA50 8E030024 */  lw    $v1, 0x24($s0)
/* 0043BA54 8E42FFE4 */  lw    $v0, -0x1c($s2)
/* 0043BA58 14830004 */  bne   $a0, $v1, .L0043BA6C
/* 0043BA5C 00000000 */   nop   
/* 0043BA60 8E190028 */  lw    $t9, 0x28($s0)
/* 0043BA64 10590006 */  beq   $v0, $t9, .L0043BA80
/* 0043BA68 00000000 */   nop   
.L0043BA6C:
/* 0043BA6C 14430191 */  bne   $v0, $v1, .L0043C0B4
/* 0043BA70 00000000 */   nop   
/* 0043BA74 8E0D0028 */  lw    $t5, 0x28($s0)
/* 0043BA78 148D018E */  bne   $a0, $t5, .L0043C0B4
/* 0043BA7C 00000000 */   nop   
.L0043BA80:
/* 0043BA80 1000018C */  b     .L0043C0B4
/* 0043BA84 24080001 */   li    $t0, 1
.L0043BA88:
/* 0043BA88 1523018A */  bne   $t1, $v1, .L0043C0B4
/* 0043BA8C 00000000 */   nop   
/* 0043BA90 920A0020 */  lbu   $t2, 0x20($s0)
/* 0043BA94 148A0187 */  bne   $a0, $t2, .L0043C0B4
/* 0043BA98 00000000 */   nop   
/* 0043BA9C 922C0001 */  lbu   $t4, 1($s1)
/* 0043BAA0 920E0001 */  lbu   $t6, 1($s0)
/* 0043BAA4 318B001F */  andi  $t3, $t4, 0x1f
/* 0043BAA8 156E0182 */  bne   $t3, $t6, .L0043C0B4
/* 0043BAAC 00000000 */   nop   
/* 0043BAB0 8E4FFFE8 */  lw    $t7, -0x18($s2)
/* 0043BAB4 8E180024 */  lw    $t8, 0x24($s0)
/* 0043BAB8 15F8017E */  bne   $t7, $t8, .L0043C0B4
/* 0043BABC 00000000 */   nop   
/* 0043BAC0 8E59FFE4 */  lw    $t9, -0x1c($s2)
/* 0043BAC4 8E0D0028 */  lw    $t5, 0x28($s0)
/* 0043BAC8 172D017A */  bne   $t9, $t5, .L0043C0B4
/* 0043BACC 00000000 */   nop   
/* 0043BAD0 962A0002 */  lhu   $t2, 2($s1)
/* 0043BAD4 920E003E */  lbu   $t6, 0x3e($s0)
/* 0043BAD8 314C0002 */  andi  $t4, $t2, 2
/* 0043BADC 000C582B */  sltu  $t3, $zero, $t4
/* 0043BAE0 156E0174 */  bne   $t3, $t6, .L0043C0B4
/* 0043BAE4 00000000 */   nop   
/* 0043BAE8 10000172 */  b     .L0043C0B4
/* 0043BAEC 24080001 */   li    $t0, 1
.L0043BAF0:
/* 0043BAF0 15230170 */  bne   $t1, $v1, .L0043C0B4
/* 0043BAF4 00000000 */   nop   
/* 0043BAF8 920F0020 */  lbu   $t7, 0x20($s0)
/* 0043BAFC 148F016D */  bne   $a0, $t7, .L0043C0B4
/* 0043BB00 00000000 */   nop   
/* 0043BB04 92380001 */  lbu   $t8, 1($s1)
/* 0043BB08 920D0001 */  lbu   $t5, 1($s0)
/* 0043BB0C 3319001F */  andi  $t9, $t8, 0x1f
/* 0043BB10 172D0168 */  bne   $t9, $t5, .L0043C0B4
/* 0043BB14 00000000 */   nop   
/* 0043BB18 8E4AFFE8 */  lw    $t2, -0x18($s2)
/* 0043BB1C 8E0C0024 */  lw    $t4, 0x24($s0)
/* 0043BB20 154C0164 */  bne   $t2, $t4, .L0043C0B4
/* 0043BB24 00000000 */   nop   
/* 0043BB28 8E4BFFE4 */  lw    $t3, -0x1c($s2)
/* 0043BB2C 8E0E0028 */  lw    $t6, 0x28($s0)
/* 0043BB30 156E0160 */  bne   $t3, $t6, .L0043C0B4
/* 0043BB34 00000000 */   nop   
/* 0043BB38 1000015E */  b     .L0043C0B4
/* 0043BB3C 24080001 */   li    $t0, 1
.L0043BB40:
/* 0043BB40 1523015C */  bne   $t1, $v1, .L0043C0B4
/* 0043BB44 00000000 */   nop   
/* 0043BB48 920F0020 */  lbu   $t7, 0x20($s0)
/* 0043BB4C 148F0159 */  bne   $a0, $t7, .L0043C0B4
/* 0043BB50 00000000 */   nop   
/* 0043BB54 92380001 */  lbu   $t8, 1($s1)
/* 0043BB58 920D0001 */  lbu   $t5, 1($s0)
/* 0043BB5C 3319001F */  andi  $t9, $t8, 0x1f
/* 0043BB60 172D0154 */  bne   $t9, $t5, .L0043C0B4
/* 0043BB64 00000000 */   nop   
/* 0043BB68 8E4AFFE8 */  lw    $t2, -0x18($s2)
/* 0043BB6C 8E0C0024 */  lw    $t4, 0x24($s0)
/* 0043BB70 154C0150 */  bne   $t2, $t4, .L0043C0B4
/* 0043BB74 00000000 */   nop   
/* 0043BB78 8E4BFFE4 */  lw    $t3, -0x1c($s2)
/* 0043BB7C 8E0E0028 */  lw    $t6, 0x28($s0)
/* 0043BB80 156E014C */  bne   $t3, $t6, .L0043C0B4
/* 0043BB84 00000000 */   nop   
/* 0043BB88 8E2F0004 */  lw    $t7, 4($s1)
/* 0043BB8C 9618003C */  lhu   $t8, 0x3c($s0)
/* 0043BB90 15F80148 */  bne   $t7, $t8, .L0043C0B4
/* 0043BB94 00000000 */   nop   
/* 0043BB98 10000146 */  b     .L0043C0B4
/* 0043BB9C 24080001 */   li    $t0, 1
.L0043BBA0:
/* 0043BBA0 15230144 */  bne   $t1, $v1, .L0043C0B4
/* 0043BBA4 00000000 */   nop   
/* 0043BBA8 92190020 */  lbu   $t9, 0x20($s0)
/* 0043BBAC 14990141 */  bne   $a0, $t9, .L0043C0B4
/* 0043BBB0 00000000 */   nop   
/* 0043BBB4 922D0001 */  lbu   $t5, 1($s1)
/* 0043BBB8 920C0001 */  lbu   $t4, 1($s0)
/* 0043BBBC 31AA001F */  andi  $t2, $t5, 0x1f
/* 0043BBC0 154C013C */  bne   $t2, $t4, .L0043C0B4
/* 0043BBC4 00000000 */   nop   
/* 0043BBC8 8E4BFFE8 */  lw    $t3, -0x18($s2)
/* 0043BBCC 8E0E0024 */  lw    $t6, 0x24($s0)
/* 0043BBD0 156E0138 */  bne   $t3, $t6, .L0043C0B4
/* 0043BBD4 00000000 */   nop   
/* 0043BBD8 8E4FFFE4 */  lw    $t7, -0x1c($s2)
/* 0043BBDC 8E180028 */  lw    $t8, 0x28($s0)
/* 0043BBE0 15F80134 */  bne   $t7, $t8, .L0043C0B4
/* 0043BBE4 00000000 */   nop   
/* 0043BBE8 8E390004 */  lw    $t9, 4($s1)
/* 0043BBEC 8E0D002C */  lw    $t5, 0x2c($s0)
/* 0043BBF0 172D0130 */  bne   $t9, $t5, .L0043C0B4
/* 0043BBF4 00000000 */   nop   
/* 0043BBF8 1000012E */  b     .L0043C0B4
/* 0043BBFC 24080001 */   li    $t0, 1
.L0043BC00:
/* 0043BC00 1523012C */  bne   $t1, $v1, .L0043C0B4
/* 0043BC04 00000000 */   nop   
/* 0043BC08 920A0020 */  lbu   $t2, 0x20($s0)
/* 0043BC0C 148A0129 */  bne   $a0, $t2, .L0043C0B4
/* 0043BC10 00000000 */   nop   
/* 0043BC14 922C0001 */  lbu   $t4, 1($s1)
/* 0043BC18 920E0001 */  lbu   $t6, 1($s0)
/* 0043BC1C 318B001F */  andi  $t3, $t4, 0x1f
/* 0043BC20 156E0124 */  bne   $t3, $t6, .L0043C0B4
/* 0043BC24 00000000 */   nop   
/* 0043BC28 8E4FFFE8 */  lw    $t7, -0x18($s2)
/* 0043BC2C 8E180024 */  lw    $t8, 0x24($s0)
/* 0043BC30 15F80120 */  bne   $t7, $t8, .L0043C0B4
/* 0043BC34 00000000 */   nop   
/* 0043BC38 96390002 */  lhu   $t9, 2($s1)
/* 0043BC3C 920C003E */  lbu   $t4, 0x3e($s0)
/* 0043BC40 332D0002 */  andi  $t5, $t9, 2
/* 0043BC44 000D502B */  sltu  $t2, $zero, $t5
/* 0043BC48 154C011A */  bne   $t2, $t4, .L0043C0B4
/* 0043BC4C 00000000 */   nop   
/* 0043BC50 10000118 */  b     .L0043C0B4
/* 0043BC54 24080001 */   li    $t0, 1
.L0043BC58:
/* 0043BC58 15230116 */  bne   $t1, $v1, .L0043C0B4
/* 0043BC5C 00000000 */   nop   
/* 0043BC60 920B0020 */  lbu   $t3, 0x20($s0)
/* 0043BC64 148B0113 */  bne   $a0, $t3, .L0043C0B4
/* 0043BC68 00000000 */   nop   
/* 0043BC6C 922E0001 */  lbu   $t6, 1($s1)
/* 0043BC70 92180001 */  lbu   $t8, 1($s0)
/* 0043BC74 31CF001F */  andi  $t7, $t6, 0x1f
/* 0043BC78 15F8010E */  bne   $t7, $t8, .L0043C0B4
/* 0043BC7C 00000000 */   nop   
/* 0043BC80 8E59FFE8 */  lw    $t9, -0x18($s2)
/* 0043BC84 8E0D0024 */  lw    $t5, 0x24($s0)
/* 0043BC88 172D010A */  bne   $t9, $t5, .L0043C0B4
/* 0043BC8C 00000000 */   nop   
/* 0043BC90 8E2A0004 */  lw    $t2, 4($s1)
/* 0043BC94 8E0C002C */  lw    $t4, 0x2c($s0)
/* 0043BC98 154C0106 */  bne   $t2, $t4, .L0043C0B4
/* 0043BC9C 00000000 */   nop   
/* 0043BCA0 962B0002 */  lhu   $t3, 2($s1)
/* 0043BCA4 9218003E */  lbu   $t8, 0x3e($s0)
/* 0043BCA8 316E0002 */  andi  $t6, $t3, 2
/* 0043BCAC 000E782B */  sltu  $t7, $zero, $t6
/* 0043BCB0 15F80100 */  bne   $t7, $t8, .L0043C0B4
/* 0043BCB4 00000000 */   nop   
/* 0043BCB8 100000FE */  b     .L0043C0B4
/* 0043BCBC 24080001 */   li    $t0, 1
.L0043BCC0:
/* 0043BCC0 152300FC */  bne   $t1, $v1, .L0043C0B4
/* 0043BCC4 00000000 */   nop   
/* 0043BCC8 92190020 */  lbu   $t9, 0x20($s0)
/* 0043BCCC 149900F9 */  bne   $a0, $t9, .L0043C0B4
/* 0043BCD0 00000000 */   nop   
/* 0043BCD4 922D0001 */  lbu   $t5, 1($s1)
/* 0043BCD8 920C0001 */  lbu   $t4, 1($s0)
/* 0043BCDC 31AA001F */  andi  $t2, $t5, 0x1f
/* 0043BCE0 154C00F4 */  bne   $t2, $t4, .L0043C0B4
/* 0043BCE4 00000000 */   nop   
/* 0043BCE8 922B0008 */  lbu   $t3, 8($s1)
/* 0043BCEC 920E0038 */  lbu   $t6, 0x38($s0)
/* 0043BCF0 156E00F0 */  bne   $t3, $t6, .L0043C0B4
/* 0043BCF4 00000000 */   nop   
/* 0043BCF8 8E4FFFE8 */  lw    $t7, -0x18($s2)
/* 0043BCFC 8E180024 */  lw    $t8, 0x24($s0)
/* 0043BD00 15F800EC */  bne   $t7, $t8, .L0043C0B4
/* 0043BD04 00000000 */   nop   
/* 0043BD08 96390002 */  lhu   $t9, 2($s1)
/* 0043BD0C 920C003E */  lbu   $t4, 0x3e($s0)
/* 0043BD10 332D0002 */  andi  $t5, $t9, 2
/* 0043BD14 000D502B */  sltu  $t2, $zero, $t5
/* 0043BD18 154C00E6 */  bne   $t2, $t4, .L0043C0B4
/* 0043BD1C 00000000 */   nop   
/* 0043BD20 100000E4 */  b     .L0043C0B4
/* 0043BD24 24080001 */   li    $t0, 1
.L0043BD28:
/* 0043BD28 152300E2 */  bne   $t1, $v1, .L0043C0B4
/* 0043BD2C 00000000 */   nop   
/* 0043BD30 920B0020 */  lbu   $t3, 0x20($s0)
/* 0043BD34 148B00DF */  bne   $a0, $t3, .L0043C0B4
/* 0043BD38 00000000 */   nop   
/* 0043BD3C 8E2E000C */  lw    $t6, 0xc($s1)
/* 0043BD40 8E0F002C */  lw    $t7, 0x2c($s0)
/* 0043BD44 15CF00DB */  bne   $t6, $t7, .L0043C0B4
/* 0043BD48 00000000 */   nop   
/* 0043BD4C 8E380008 */  lw    $t8, 8($s1)
/* 0043BD50 9619003C */  lhu   $t9, 0x3c($s0)
/* 0043BD54 171900D7 */  bne   $t8, $t9, .L0043C0B4
/* 0043BD58 00000000 */   nop   
/* 0043BD5C 8E4DFFE8 */  lw    $t5, -0x18($s2)
/* 0043BD60 8E0A0024 */  lw    $t2, 0x24($s0)
/* 0043BD64 15AA00D3 */  bne   $t5, $t2, .L0043C0B4
/* 0043BD68 00000000 */   nop   
/* 0043BD6C 100000D1 */  b     .L0043C0B4
/* 0043BD70 24080001 */   li    $t0, 1
.L0043BD74:
/* 0043BD74 152300CF */  bne   $t1, $v1, .L0043C0B4
/* 0043BD78 00000000 */   nop   
/* 0043BD7C 920C0020 */  lbu   $t4, 0x20($s0)
/* 0043BD80 148C00CC */  bne   $a0, $t4, .L0043C0B4
/* 0043BD84 00000000 */   nop   
/* 0043BD88 8E4BFFE8 */  lw    $t3, -0x18($s2)
/* 0043BD8C 8E0E0024 */  lw    $t6, 0x24($s0)
/* 0043BD90 156E00C8 */  bne   $t3, $t6, .L0043C0B4
/* 0043BD94 00000000 */   nop   
/* 0043BD98 100000C6 */  b     .L0043C0B4
/* 0043BD9C 24080001 */   li    $t0, 1
.L0043BDA0:
/* 0043BDA0 152300C4 */  bne   $t1, $v1, .L0043C0B4
/* 0043BDA4 00000000 */   nop   
/* 0043BDA8 920F0020 */  lbu   $t7, 0x20($s0)
/* 0043BDAC 148F00C1 */  bne   $a0, $t7, .L0043C0B4
/* 0043BDB0 00000000 */   nop   
/* 0043BDB4 92380001 */  lbu   $t8, 1($s1)
/* 0043BDB8 920D0001 */  lbu   $t5, 1($s0)
/* 0043BDBC 3319001F */  andi  $t9, $t8, 0x1f
/* 0043BDC0 172D00BC */  bne   $t9, $t5, .L0043C0B4
/* 0043BDC4 00000000 */   nop   
/* 0043BDC8 8E4AFFE8 */  lw    $t2, -0x18($s2)
/* 0043BDCC 8E0C0024 */  lw    $t4, 0x24($s0)
/* 0043BDD0 154C00B8 */  bne   $t2, $t4, .L0043C0B4
/* 0043BDD4 00000000 */   nop   
/* 0043BDD8 8E2B0004 */  lw    $t3, 4($s1)
/* 0043BDDC 8E0E002C */  lw    $t6, 0x2c($s0)
/* 0043BDE0 156E00B4 */  bne   $t3, $t6, .L0043C0B4
/* 0043BDE4 00000000 */   nop   
/* 0043BDE8 8E2F0008 */  lw    $t7, 8($s1)
/* 0043BDEC 9618003C */  lhu   $t8, 0x3c($s0)
/* 0043BDF0 15F800B0 */  bne   $t7, $t8, .L0043C0B4
/* 0043BDF4 00000000 */   nop   
/* 0043BDF8 92080002 */  lbu   $t0, 2($s0)
/* 0043BDFC 2D080001 */  sltiu $t0, $t0, 1
/* 0043BE00 310800FF */  andi  $t0, $t0, 0xff
/* 0043BE04 150000AB */  bnez  $t0, .L0043C0B4
/* 0043BE08 00000000 */   nop   
/* 0043BE0C 24190001 */  li    $t9, 1
/* 0043BE10 100000A8 */  b     .L0043C0B4
/* 0043BE14 A3B90031 */   sb    $t9, 0x31($sp)
.L0043BE18:
/* 0043BE18 8E02001C */  lw    $v0, 0x1c($s0)
.L0043BE1C:
/* 0043BE1C 104000A5 */  beqz  $v0, .L0043C0B4
/* 0043BE20 00000000 */   nop   
/* 0043BE24 00408025 */  move  $s0, $v0
.L0043BE28:
/* 0043BE28 8C42001C */  lw    $v0, 0x1c($v0)
/* 0043BE2C 5440FFFE */  bnezl $v0, .L0043BE28
/* 0043BE30 00408025 */   move  $s0, $v0
/* 0043BE34 1000009F */  b     .L0043C0B4
/* 0043BE38 00000000 */   nop   
.L0043BE3C:
/* 0043BE3C 1523009D */  bne   $t1, $v1, .L0043C0B4
/* 0043BE40 00000000 */   nop   
/* 0043BE44 920D0020 */  lbu   $t5, 0x20($s0)
/* 0043BE48 148D009A */  bne   $a0, $t5, .L0043C0B4
/* 0043BE4C 00000000 */   nop   
/* 0043BE50 8E44FFE8 */  lw    $a0, -0x18($s2)
/* 0043BE54 8E030024 */  lw    $v1, 0x24($s0)
/* 0043BE58 8E42FFE4 */  lw    $v0, -0x1c($s2)
/* 0043BE5C 14830004 */  bne   $a0, $v1, .L0043BE70
/* 0043BE60 00000000 */   nop   
/* 0043BE64 8E0A0028 */  lw    $t2, 0x28($s0)
/* 0043BE68 504A0007 */  beql  $v0, $t2, .L0043BE88
/* 0043BE6C 8E2B0008 */   lw    $t3, 8($s1)
.L0043BE70:
/* 0043BE70 14430090 */  bne   $v0, $v1, .L0043C0B4
/* 0043BE74 00000000 */   nop   
/* 0043BE78 8E0C0028 */  lw    $t4, 0x28($s0)
/* 0043BE7C 148C008D */  bne   $a0, $t4, .L0043C0B4
/* 0043BE80 00000000 */   nop   
/* 0043BE84 8E2B0008 */  lw    $t3, 8($s1)
.L0043BE88:
/* 0043BE88 8E0E002C */  lw    $t6, 0x2c($s0)
/* 0043BE8C 156E0089 */  bne   $t3, $t6, .L0043C0B4
/* 0043BE90 00000000 */   nop   
/* 0043BE94 92080002 */  lbu   $t0, 2($s0)
/* 0043BE98 240F0001 */  li    $t7, 1
/* 0043BE9C 2D080001 */  sltiu $t0, $t0, 1
/* 0043BEA0 310800FF */  andi  $t0, $t0, 0xff
/* 0043BEA4 15000083 */  bnez  $t0, .L0043C0B4
/* 0043BEA8 00000000 */   nop   
/* 0043BEAC 10000081 */  b     .L0043C0B4
/* 0043BEB0 A3AF0031 */   sb    $t7, 0x31($sp)
.L0043BEB4:
/* 0043BEB4 1523007F */  bne   $t1, $v1, .L0043C0B4
/* 0043BEB8 00000000 */   nop   
/* 0043BEBC 92180020 */  lbu   $t8, 0x20($s0)
/* 0043BEC0 1498007C */  bne   $a0, $t8, .L0043C0B4
/* 0043BEC4 00000000 */   nop   
/* 0043BEC8 8E59FFE8 */  lw    $t9, -0x18($s2)
/* 0043BECC 8E0D0024 */  lw    $t5, 0x24($s0)
/* 0043BED0 172D0078 */  bne   $t9, $t5, .L0043C0B4
/* 0043BED4 00000000 */   nop   
/* 0043BED8 8E4AFFE4 */  lw    $t2, -0x1c($s2)
/* 0043BEDC 8E0C0028 */  lw    $t4, 0x28($s0)
/* 0043BEE0 154C0074 */  bne   $t2, $t4, .L0043C0B4
/* 0043BEE4 00000000 */   nop   
/* 0043BEE8 8E2B0008 */  lw    $t3, 8($s1)
/* 0043BEEC 8E0E002C */  lw    $t6, 0x2c($s0)
/* 0043BEF0 156E0070 */  bne   $t3, $t6, .L0043C0B4
/* 0043BEF4 00000000 */   nop   
/* 0043BEF8 92080002 */  lbu   $t0, 2($s0)
/* 0043BEFC 240F0001 */  li    $t7, 1
/* 0043BF00 2D080001 */  sltiu $t0, $t0, 1
/* 0043BF04 310800FF */  andi  $t0, $t0, 0xff
/* 0043BF08 1500006A */  bnez  $t0, .L0043C0B4
/* 0043BF0C 00000000 */   nop   
/* 0043BF10 10000068 */  b     .L0043C0B4
/* 0043BF14 A3AF0031 */   sb    $t7, 0x31($sp)
.L0043BF18:
/* 0043BF18 2C41006A */  sltiu $at, $v0, 0x6a
/* 0043BF1C 14200018 */  bnez  $at, .L0043BF80
/* 0043BF20 2C41008E */   sltiu $at, $v0, 0x8e
/* 0043BF24 14200008 */  bnez  $at, .L0043BF48
/* 0043BF28 2C410096 */   sltiu $at, $v0, 0x96
/* 0043BF2C 14200057 */  bnez  $at, .L0043C08C
/* 0043BF30 244BFF6D */   addiu $t3, $v0, -0x93
/* 0043BF34 2401009A */  li    $at, 154
/* 0043BF38 5041FFB8 */  beql  $v0, $at, .L0043BE1C
/* 0043BF3C 8E02001C */   lw    $v0, 0x1c($s0)
/* 0043BF40 1000003C */  b     .L0043C034
/* 0043BF44 00000000 */   nop   
.L0043BF48:
/* 0043BF48 2C41007E */  sltiu $at, $v0, 0x7e
/* 0043BF4C 10200045 */  beqz  $at, .L0043C064
/* 0043BF50 244CFF7A */   addiu $t4, $v0, -0x86
/* 0043BF54 2458FF92 */  addiu $t8, $v0, -0x6e
/* 0043BF58 2F010010 */  sltiu $at, $t8, 0x10
/* 0043BF5C 10200035 */  beqz  $at, .L0043C034
/* 0043BF60 00000000 */   nop   
/* 0043BF64 8F818044 */  lw    $at, %got(jtbl_1000C3C0)($gp)
/* 0043BF68 0018C080 */  sll   $t8, $t8, 2
/* 0043BF6C 00380821 */  addu  $at, $at, $t8
/* 0043BF70 8C38C3C0 */  lw    $t8, %lo(jtbl_1000C3C0)($at)
/* 0043BF74 031CC021 */  addu  $t8, $t8, $gp
/* 0043BF78 03000008 */  jr    $t8
/* 0043BF7C 00000000 */   nop   
.L0043BF80:
/* 0043BF80 2C41001E */  sltiu $at, $v0, 0x1e
/* 0043BF84 14200011 */  bnez  $at, .L0043BFCC
/* 0043BF88 24010023 */   li    $at, 35
/* 0043BF8C 1041FEA5 */  beq   $v0, $at, .L0043BA24
/* 0043BF90 00000000 */   nop   
/* 0043BF94 2C410063 */  sltiu $at, $v0, 0x63
/* 0043BF98 50200024 */  beql  $at, $zero, .L0043C02C
/* 0043BF9C 24010069 */   li    $at, 105
/* 0043BFA0 2459FFD8 */  addiu $t9, $v0, -0x28
/* 0043BFA4 2F21003B */  sltiu $at, $t9, 0x3b
/* 0043BFA8 10200022 */  beqz  $at, .L0043C034
/* 0043BFAC 00000000 */   nop   
/* 0043BFB0 8F818044 */  lw    $at, %got(jtbl_1000C2D4)($gp)
/* 0043BFB4 0019C880 */  sll   $t9, $t9, 2
/* 0043BFB8 00390821 */  addu  $at, $at, $t9
/* 0043BFBC 8C39C2D4 */  lw    $t9, %lo(jtbl_1000C2D4)($at)
/* 0043BFC0 033CC821 */  addu  $t9, $t9, $gp
/* 0043BFC4 03200008 */  jr    $t9
/* 0043BFC8 00000000 */   nop   
.L0043BFCC:
/* 0043BFCC 2C41000F */  sltiu $at, $v0, 0xf
/* 0043BFD0 1020000B */  beqz  $at, .L0043C000
/* 0043BFD4 244AFFE8 */   addiu $t2, $v0, -0x18
/* 0043BFD8 2C41000F */  sltiu $at, $v0, 0xf
/* 0043BFDC 10200015 */  beqz  $at, .L0043C034
/* 0043BFE0 00000000 */   nop   
/* 0043BFE4 8F818044 */  lw    $at, %got(jtbl_1000C280)($gp)
/* 0043BFE8 00026880 */  sll   $t5, $v0, 2
/* 0043BFEC 002D0821 */  addu  $at, $at, $t5
/* 0043BFF0 8C2DC280 */  lw    $t5, %lo(jtbl_1000C280)($at)
/* 0043BFF4 01BC6821 */  addu  $t5, $t5, $gp
/* 0043BFF8 01A00008 */  jr    $t5
/* 0043BFFC 00000000 */   nop   
.L0043C000:
/* 0043C000 2D410006 */  sltiu $at, $t2, 6
/* 0043C004 1020000B */  beqz  $at, .L0043C034
/* 0043C008 00000000 */   nop   
/* 0043C00C 8F818044 */  lw    $at, %got(jtbl_1000C2BC)($gp)
/* 0043C010 000A5080 */  sll   $t2, $t2, 2
/* 0043C014 002A0821 */  addu  $at, $at, $t2
/* 0043C018 8C2AC2BC */  lw    $t2, %lo(jtbl_1000C2BC)($at)
/* 0043C01C 015C5021 */  addu  $t2, $t2, $gp
/* 0043C020 01400008 */  jr    $t2
/* 0043C024 00000000 */   nop   
/* 0043C028 24010069 */  li    $at, 105
.L0043C02C:
/* 0043C02C 1041FE96 */  beq   $v0, $at, .L0043BA88
/* 0043C030 00000000 */   nop   
.L0043C034:
/* 0043C034 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 0043C038 8F868044 */  lw    $a2, %got(RO_1000C274)($gp)
/* 0043C03C 24040001 */  li    $a0, 1
/* 0043C040 240502C2 */  li    $a1, 706
/* 0043C044 2407000B */  li    $a3, 11
/* 0043C048 A3A80033 */  sb    $t0, 0x33($sp)
/* 0043C04C 0320F809 */  jalr  $t9
/* 0043C050 24C6C274 */   addiu $a2, %lo(RO_1000C274) # addiu $a2, $a2, -0x3d8c
/* 0043C054 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0043C058 93A80033 */  lbu   $t0, 0x33($sp)
/* 0043C05C 10000015 */  b     .L0043C0B4
/* 0043C060 24090004 */   li    $t1, 4
.L0043C064:
/* 0043C064 2D810008 */  sltiu $at, $t4, 8
/* 0043C068 1020FFF2 */  beqz  $at, .L0043C034
/* 0043C06C 00000000 */   nop   
/* 0043C070 8F818044 */  lw    $at, %got(jtbl_1000C400)($gp)
/* 0043C074 000C6080 */  sll   $t4, $t4, 2
/* 0043C078 002C0821 */  addu  $at, $at, $t4
/* 0043C07C 8C2CC400 */  lw    $t4, %lo(jtbl_1000C400)($at)
/* 0043C080 019C6021 */  addu  $t4, $t4, $gp
/* 0043C084 01800008 */  jr    $t4
/* 0043C088 00000000 */   nop   
.L0043C08C:
/* 0043C08C 2D610003 */  sltiu $at, $t3, 3
/* 0043C090 1020FFE8 */  beqz  $at, .L0043C034
/* 0043C094 00000000 */   nop   
/* 0043C098 8F818044 */  lw    $at, %got(jtbl_1000C420)($gp)
/* 0043C09C 000B5880 */  sll   $t3, $t3, 2
/* 0043C0A0 002B0821 */  addu  $at, $at, $t3
/* 0043C0A4 8C2BC420 */  lw    $t3, %lo(jtbl_1000C420)($at)
/* 0043C0A8 017C5821 */  addu  $t3, $t3, $gp
/* 0043C0AC 01600008 */  jr    $t3
/* 0043C0B0 00000000 */   nop   
.L0043C0B4:
/* 0043C0B4 15000002 */  bnez  $t0, .L0043C0C0
/* 0043C0B8 93AE002F */   lbu   $t6, 0x2f($sp)
/* 0043C0BC 8E10001C */  lw    $s0, 0x1c($s0)
.L0043C0C0:
/* 0043C0C0 15000005 */  bnez  $t0, .L0043C0D8
/* 0043C0C4 00000000 */   nop   
/* 0043C0C8 15C00003 */  bnez  $t6, .L0043C0D8
/* 0043C0CC 00000000 */   nop   
/* 0043C0D0 5600FD44 */  bnezl $s0, .L0043B5E4
/* 0043C0D4 92030000 */   lbu   $v1, ($s0)
.L0043C0D8:
/* 0043C0D8 11000003 */  beqz  $t0, .L0043C0E8
/* 0043C0DC 93AF002F */   lbu   $t7, 0x2f($sp)
/* 0043C0E0 51E00053 */  beql  $t7, $zero, .L0043C230
/* 0043C0E4 02001025 */   move  $v0, $s0
.L0043C0E8:
/* 0043C0E8 92380000 */  lbu   $t8, ($s1)
/* 0043C0EC 2719FFE0 */  addiu $t9, $t8, -0x20
/* 0043C0F0 2F2D0060 */  sltiu $t5, $t9, 0x60
/* 0043C0F4 11A00009 */  beqz  $t5, .L0043C11C
/* 0043C0F8 00000000 */   nop   
/* 0043C0FC 8F8B8044 */  lw    $t3, %got(D_10010884)($gp)
/* 0043C100 00195143 */  sra   $t2, $t9, 5
/* 0043C104 000A6080 */  sll   $t4, $t2, 2
/* 0043C108 256B0884 */  addiu $t3, %lo(D_10010884) # addiu $t3, $t3, 0x884
/* 0043C10C 016C7021 */  addu  $t6, $t3, $t4
/* 0043C110 8DCF0000 */  lw    $t7, ($t6)
/* 0043C114 032FC004 */  sllv  $t8, $t7, $t9
/* 0043C118 2B0D0000 */  slti  $t5, $t8, 0
.L0043C11C:
/* 0043C11C 8F998620 */  lw    $t9, %call16(appendchain)($gp)
/* 0043C120 31B200FF */  andi  $s2, $t5, 0xff
/* 0043C124 97A40042 */  lhu   $a0, 0x42($sp)
/* 0043C128 0320F809 */  jalr  $t9
/* 0043C12C 00000000 */   nop   
/* 0043C130 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0043C134 00408025 */  move  $s0, $v0
/* 0043C138 8F8B8B20 */  lw     $t3, %got(outofmem)($gp)
/* 0043C13C 916B0000 */  lbu   $t3, ($t3)
/* 0043C140 11600003 */  beqz  $t3, .L0043C150
/* 0043C144 00000000 */   nop   
/* 0043C148 10000039 */  b     .L0043C230
/* 0043C14C 8FA20038 */   lw    $v0, 0x38($sp)
.L0043C150:
/* 0043C150 12400010 */  beqz  $s2, .L0043C194
/* 0043C154 02401825 */   move  $v1, $s2
/* 0043C158 922C0000 */  lbu   $t4, ($s1)
/* 0043C15C 258EFFE0 */  addiu $t6, $t4, -0x20
/* 0043C160 2DCF0060 */  sltiu $t7, $t6, 0x60
/* 0043C164 51E0000B */  beql  $t7, $zero, .L0043C194
/* 0043C168 01E01825 */   move  $v1, $t7
/* 0043C16C 8F8A8044 */  lw    $t2, %got(D_10010890)($gp)
/* 0043C170 000EC943 */  sra   $t9, $t6, 5
/* 0043C174 0019C080 */  sll   $t8, $t9, 2
/* 0043C178 254A0890 */  addiu $t2, %lo(D_10010890) # addiu $t2, $t2, 0x890
/* 0043C17C 01586821 */  addu  $t5, $t2, $t8
/* 0043C180 8DAB0000 */  lw    $t3, ($t5)
/* 0043C184 01CB6004 */  sllv  $t4, $t3, $t6
/* 0043C188 29990000 */  slti  $t9, $t4, 0
/* 0043C18C 03207825 */  move  $t7, $t9
/* 0043C190 01E01825 */  move  $v1, $t7
.L0043C194:
/* 0043C194 8F8A89B4 */  lw     $t2, %got(curgraphnode)($gp)
/* 0043C198 306400FF */  andi  $a0, $v1, 0xff
/* 0043C19C 8D4A0000 */  lw    $t2, ($t2)
/* 0043C1A0 1080000B */  beqz  $a0, .L0043C1D0
/* 0043C1A4 AC4A0010 */   sw    $t2, 0x10($v0)
/* 0043C1A8 93B8002F */  lbu   $t8, 0x2f($sp)
/* 0043C1AC 240D0001 */  li    $t5, 1
/* 0043C1B0 53000005 */  beql  $t8, $zero, .L0043C1C8
/* 0043C1B4 A0400021 */   sb    $zero, 0x21($v0)
/* 0043C1B8 A04D0021 */  sb    $t5, 0x21($v0)
/* 0043C1BC 10000004 */  b     .L0043C1D0
/* 0043C1C0 A0400022 */   sb    $zero, 0x22($v0)
/* 0043C1C4 A0400021 */  sb    $zero, 0x21($v0)
.L0043C1C8:
/* 0043C1C8 93AB0030 */  lbu   $t3, 0x30($sp)
/* 0043C1CC A04B0022 */  sb    $t3, 0x22($v0)
.L0043C1D0:
/* 0043C1D0 93AE0031 */  lbu   $t6, 0x31($sp)
/* 0043C1D4 11C00003 */  beqz  $t6, .L0043C1E4
/* 0043C1D8 00000000 */   nop   
/* 0043C1DC 10000013 */  b     .L0043C22C
/* 0043C1E0 A0400003 */   sb    $zero, 3($v0)
.L0043C1E4:
/* 0043C1E4 54800010 */  bnezl $a0, .L0043C228
/* 0043C1E8 240D0001 */   li    $t5, 1
/* 0043C1EC 922C0000 */  lbu   $t4, ($s1)
/* 0043C1F0 2599FFE0 */  addiu $t9, $t4, -0x20
/* 0043C1F4 2F2F0080 */  sltiu $t7, $t9, 0x80
/* 0043C1F8 11E00009 */  beqz  $t7, .L0043C220
/* 0043C1FC 00000000 */   nop   
/* 0043C200 8F8D8044 */  lw    $t5, %got(D_10010874)($gp)
/* 0043C204 00195143 */  sra   $t2, $t9, 5
/* 0043C208 000AC080 */  sll   $t8, $t2, 2
/* 0043C20C 25AD0874 */  addiu $t5, %lo(D_10010874) # addiu $t5, $t5, 0x874
/* 0043C210 01B85821 */  addu  $t3, $t5, $t8
/* 0043C214 8D6E0000 */  lw    $t6, ($t3)
/* 0043C218 032E6004 */  sllv  $t4, $t6, $t9
/* 0043C21C 298F0000 */  slti  $t7, $t4, 0
.L0043C220:
/* 0043C220 11E00002 */  beqz  $t7, .L0043C22C
/* 0043C224 240D0001 */   li    $t5, 1
.L0043C228:
/* 0043C228 A04D0003 */  sb    $t5, 3($v0)
.L0043C22C:
/* 0043C22C 02001025 */  move  $v0, $s0
.L0043C230:
/* 0043C230 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0043C234 8FB00014 */  lw    $s0, 0x14($sp)
/* 0043C238 8FB10018 */  lw    $s1, 0x18($sp)
/* 0043C23C 8FB2001C */  lw    $s2, 0x1c($sp)
/* 0043C240 03E00008 */  jr    $ra
/* 0043C244 27BD0040 */   addiu $sp, $sp, 0x40

    .type func_0043C248, @function
func_0043C248:
    # 0043CFCC readnxtinst
/* 0043C248 3C1C0FBE */  .cpload $t9
/* 0043C24C 279CE048 */  
/* 0043C250 0399E021 */  
/* 0043C254 8F888DA4 */  lw     $t0, %got(u)($gp)
/* 0043C258 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0043C25C 240E0049 */  li    $t6, 73
/* 0043C260 910F0001 */  lbu   $t7, 1($t0)
/* 0043C264 2401000D */  li    $at, 13
/* 0043C268 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0043C26C 31F8001F */  andi  $t8, $t7, 0x1f
/* 0043C270 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0043C274 AFA40028 */  sw    $a0, 0x28($sp)
/* 0043C278 AFA20024 */  sw    $v0, 0x24($sp)
/* 0043C27C 17010004 */  bne   $t8, $at, .L0043C290
/* 0043C280 A10E0000 */   sb    $t6, ($t0)
/* 0043C284 24190004 */  li    $t9, 4
/* 0043C288 10000003 */  b     .L0043C298
/* 0043C28C AD190008 */   sw    $t9, 8($t0)
.L0043C290:
/* 0043C290 240E0008 */  li    $t6, 8
/* 0043C294 AD0E0008 */  sw    $t6, 8($t0)
.L0043C298:
/* 0043C298 8FAF0028 */  lw    $t7, 0x28($sp)
/* 0043C29C AD000010 */  sw    $zero, 0x10($t0)
/* 0043C2A0 3C010600 */  lui   $at, 0x600
/* 0043C2A4 8DE20000 */  lw    $v0, ($t7)
/* 0043C2A8 3C063B9A */  lui   $a2, 0x3b9a
/* 0043C2AC 00002825 */  move  $a1, $zero
/* 0043C2B0 90580001 */  lbu   $t8, 1($v0)
/* 0043C2B4 34C6CA00 */  ori   $a2, $a2, 0xca00
/* 0043C2B8 2407000A */  li    $a3, 10
/* 0043C2BC 2F190020 */  sltiu $t9, $t8, 0x20
/* 0043C2C0 00197023 */  negu  $t6, $t9
/* 0043C2C4 01C17824 */  and   $t7, $t6, $at
/* 0043C2C8 030FC804 */  sllv  $t9, $t7, $t8
/* 0043C2CC 0721000B */  bgez  $t9, .L0043C2FC
/* 0043C2D0 00000000 */   nop   
/* 0043C2D4 8C430020 */  lw    $v1, 0x20($v0)
/* 0043C2D8 04610008 */  bgez  $v1, .L0043C2FC
/* 0043C2DC 00032023 */   negu  $a0, $v1
/* 0043C2E0 8F898950 */  lw     $t1, %got(ustrptr)($gp)
/* 0043C2E4 240E0001 */  li    $t6, 1
/* 0043C2E8 240F002D */  li    $t7, 45
/* 0043C2EC 8D290000 */  lw    $t1, ($t1)
/* 0043C2F0 AD0E0010 */  sw    $t6, 0x10($t0)
/* 0043C2F4 10000004 */  b     .L0043C308
/* 0043C2F8 A12F0000 */   sb    $t7, ($t1)
.L0043C2FC:
/* 0043C2FC 8F898950 */  lw     $t1, %got(ustrptr)($gp)
/* 0043C300 8C440020 */  lw    $a0, 0x20($v0)
/* 0043C304 8D290000 */  lw    $t1, ($t1)
.L0043C308:
/* 0043C308 24020001 */  li    $v0, 1
.L0043C30C:
/* 0043C30C 00470019 */  multu $v0, $a3
/* 0043C310 00001812 */  mflo  $v1
/* 0043C314 0083082B */  sltu  $at, $a0, $v1
/* 0043C318 14200003 */  bnez  $at, .L0043C328
/* 0043C31C 00000000 */   nop   
/* 0043C320 54460004 */  bnel  $v0, $a2, .L0043C334
/* 0043C324 00601025 */   move  $v0, $v1
.L0043C328:
/* 0043C328 10000002 */  b     .L0043C334
/* 0043C32C 24050001 */   li    $a1, 1
/* 0043C330 00601025 */  move  $v0, $v1
.L0043C334:
/* 0043C334 10A0FFF5 */  beqz  $a1, .L0043C30C
/* 0043C338 00000000 */   nop   
/* 0043C33C 8D060010 */  lw    $a2, 0x10($t0)
.L0043C340:
/* 0043C340 0082001B */  divu  $zero, $a0, $v0
/* 0043C344 24D80001 */  addiu $t8, $a2, 1
/* 0043C348 0000C812 */  mflo  $t9
/* 0043C34C 00002010 */  mfhi  $a0
/* 0043C350 272E0030 */  addiu $t6, $t9, 0x30
/* 0043C354 01381821 */  addu  $v1, $t1, $t8
/* 0043C358 00827826 */  xor   $t7, $a0, $v0
/* 0043C35C AD180010 */  sw    $t8, 0x10($t0)
/* 0043C360 A06EFFFF */  sb    $t6, -1($v1)
/* 0043C364 03003025 */  move  $a2, $t8
/* 0043C368 14400002 */  bnez  $v0, .L0043C374
/* 0043C36C 00000000 */   nop   
/* 0043C370 0007000D */  break 7
.L0043C374:
/* 0043C374 05E10002 */  bgez  $t7, .L0043C380
/* 0043C378 00000000 */   nop   
/* 0043C37C 00822021 */  addu  $a0, $a0, $v0
.L0043C380:
/* 0043C380 0047001B */  divu  $zero, $v0, $a3
/* 0043C384 00001012 */  mflo  $v0
/* 0043C388 14E00002 */  bnez  $a3, .L0043C394
/* 0043C38C 00000000 */   nop   
/* 0043C390 0007000D */  break 7
.L0043C394:
/* 0043C394 1440FFEA */  bnez  $v0, .L0043C340
/* 0043C398 00000000 */   nop   
/* 0043C39C 24190030 */  li    $t9, 48
/* 0043C3A0 24C40002 */  addiu $a0, $a2, 2
/* 0043C3A4 A0790001 */  sb    $t9, 1($v1)
/* 0043C3A8 AD040010 */  sw    $a0, 0x10($t0)
/* 0043C3AC 8F998648 */  lw    $t9, %call16(realhash)($gp)
/* 0043C3B0 2418002E */  li    $t8, 46
/* 0043C3B4 A0780000 */  sb    $t8, ($v1)
/* 0043C3B8 0320F809 */  jalr  $t9
/* 0043C3BC 00000000 */   nop   
/* 0043C3C0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043C3C4 3044FFFF */  andi  $a0, $v0, 0xffff
/* 0043C3C8 8FA20024 */  lw    $v0, 0x24($sp)
/* 0043C3CC 8F998024 */  lw    $t9, %got(func_0043B504)($gp)
/* 0043C3D0 2739B504 */  addiu $t9, %lo(func_0043B504) # addiu $t9, $t9, -0x4afc
/* 0043C3D4 0320F809 */  jalr  $t9
/* 0043C3D8 00000000 */   nop   
/* 0043C3DC 904F0000 */  lbu   $t7, ($v0)
/* 0043C3E0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043C3E4 00405025 */  move  $t2, $v0
/* 0043C3E8 15E0005A */  bnez  $t7, .L0043C554
/* 0043C3EC 8F888DA4 */   lw     $t0, %got(u)($gp)
/* 0043C3F0 24180002 */  li    $t8, 2
/* 0043C3F4 A0580000 */  sb    $t8, ($v0)
/* 0043C3F8 91190001 */  lbu   $t9, 1($t0)
/* 0043C3FC 8F9F8994 */  lw     $ra, %got(realdispmod)($gp)
/* 0043C400 332E001F */  andi  $t6, $t9, 0x1f
/* 0043C404 A04E0001 */  sb    $t6, 1($v0)
/* 0043C408 8D060010 */  lw    $a2, 0x10($t0)
/* 0043C40C 93E90000 */  lbu   $t1, ($ra)
/* 0043C410 01266021 */  addu  $t4, $t1, $a2
/* 0043C414 29810100 */  slti  $at, $t4, 0x100
/* 0043C418 14200019 */  bnez  $at, .L0043C480
/* 0043C41C 00000000 */   nop   
/* 0043C420 8F828990 */  lw     $v0, %got(realdispdiv)($gp)
/* 0043C424 A3E00000 */  sb    $zero, ($ra)
/* 0043C428 24040104 */  li    $a0, 260
/* 0043C42C 8C4F0000 */  lw    $t7, ($v0)
/* 0043C430 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 0043C434 AFAA0020 */  sw    $t2, 0x20($sp)
/* 0043C438 25F80001 */  addiu $t8, $t7, 1
/* 0043C43C AC580000 */  sw    $t8, ($v0)
/* 0043C440 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 0043C444 0320F809 */  jalr  $t9
/* 0043C448 00000000 */   nop   
/* 0043C44C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043C450 8FAA0020 */  lw    $t2, 0x20($sp)
/* 0043C454 8F83898C */  lw     $v1, %got(currealpool)($gp)
/* 0043C458 8F888DA4 */  lw     $t0, %got(u)($gp)
/* 0043C45C 8F898994 */  lw     $t1, %got(realdispmod)($gp)
/* 0043C460 8C790000 */  lw    $t9, ($v1)
/* 0043C464 8F9F8994 */  lw     $ra, %got(realdispmod)($gp)
/* 0043C468 AF220100 */  sw    $v0, 0x100($t9)
/* 0043C46C AC620000 */  sw    $v0, ($v1)
/* 0043C470 AC400100 */  sw    $zero, 0x100($v0)
/* 0043C474 8D060010 */  lw    $a2, 0x10($t0)
/* 0043C478 91290000 */  lbu   $t1, ($t1)
/* 0043C47C 01266021 */  addu  $t4, $t1, $a2
.L0043C480:
/* 0043C480 8F83898C */  lw     $v1, %got(currealpool)($gp)
/* 0043C484 00C03825 */  move  $a3, $a2
/* 0043C488 18C00023 */  blez  $a2, .L0043C518
/* 0043C48C 8C6D0000 */   lw    $t5, ($v1)
/* 0043C490 24E70001 */  addiu $a3, $a3, 1
/* 0043C494 24EBFFFF */  addiu $t3, $a3, -1
/* 0043C498 316B0003 */  andi  $t3, $t3, 3
/* 0043C49C 1160000E */  beqz  $t3, .L0043C4D8
/* 0043C4A0 24040001 */   li    $a0, 1
/* 0043C4A4 8F8F8950 */  lw     $t7, %got(ustrptr)($gp)
/* 0043C4A8 25620001 */  addiu $v0, $t3, 1
/* 0043C4AC 01A92821 */  addu  $a1, $t5, $t1
/* 0043C4B0 8DEF0000 */  lw    $t7, ($t7)
/* 0043C4B4 01E41821 */  addu  $v1, $t7, $a0
.L0043C4B8:
/* 0043C4B8 9078FFFF */  lbu   $t8, -1($v1)
/* 0043C4BC 00A4C821 */  addu  $t9, $a1, $a0
/* 0043C4C0 24840001 */  addiu $a0, $a0, 1
/* 0043C4C4 24630001 */  addiu $v1, $v1, 1
/* 0043C4C8 1444FFFB */  bne   $v0, $a0, .L0043C4B8
/* 0043C4CC A338FFFF */   sb    $t8, -1($t9)
/* 0043C4D0 10870011 */  beq   $a0, $a3, .L0043C518
/* 0043C4D4 00000000 */   nop   
.L0043C4D8:
/* 0043C4D8 8F8E8950 */  lw     $t6, %got(ustrptr)($gp)
/* 0043C4DC 01A92821 */  addu  $a1, $t5, $t1
/* 0043C4E0 8DCE0000 */  lw    $t6, ($t6)
/* 0043C4E4 01C41821 */  addu  $v1, $t6, $a0
.L0043C4E8:
/* 0043C4E8 906FFFFF */  lbu   $t7, -1($v1)
/* 0043C4EC 00A41021 */  addu  $v0, $a1, $a0
/* 0043C4F0 24840004 */  addiu $a0, $a0, 4
/* 0043C4F4 A04FFFFF */  sb    $t7, -1($v0)
/* 0043C4F8 90780000 */  lbu   $t8, ($v1)
/* 0043C4FC 24630004 */  addiu $v1, $v1, 4
/* 0043C500 A0580000 */  sb    $t8, ($v0)
/* 0043C504 9079FFFD */  lbu   $t9, -3($v1)
/* 0043C508 A0590001 */  sb    $t9, 1($v0)
/* 0043C50C 906EFFFE */  lbu   $t6, -2($v1)
/* 0043C510 1487FFF5 */  bne   $a0, $a3, .L0043C4E8
/* 0043C514 A04E0002 */   sb    $t6, 2($v0)
.L0043C518:
/* 0043C518 8F8F8990 */  lw     $t7, %got(realdispdiv)($gp)
/* 0043C51C 8FAE0028 */  lw    $t6, 0x28($sp)
/* 0043C520 8DEF0000 */  lw    $t7, ($t7)
/* 0043C524 A5460022 */  sh    $a2, 0x22($t2)
/* 0043C528 A3EC0000 */  sb    $t4, ($ra)
/* 0043C52C 000FC200 */  sll   $t8, $t7, 8
/* 0043C530 0309C821 */  addu  $t9, $t8, $t1
/* 0043C534 A5590020 */  sh    $t9, 0x20($t2)
/* 0043C538 8DCF0000 */  lw    $t7, ($t6)
/* 0043C53C 8D190008 */  lw    $t9, 8($t0)
/* 0043C540 8DF80020 */  lw    $t8, 0x20($t7)
/* 0043C544 AD400030 */  sw    $zero, 0x30($t2)
/* 0043C548 AD400018 */  sw    $zero, 0x18($t2)
/* 0043C54C AD590028 */  sw    $t9, 0x28($t2)
/* 0043C550 AD58002C */  sw    $t8, 0x2c($t2)
.L0043C554:
/* 0043C554 8FAE0028 */  lw    $t6, 0x28($sp)
/* 0043C558 ADCA0000 */  sw    $t2, ($t6)
/* 0043C55C 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0043C560 27BD0028 */  addiu $sp, $sp, 0x28
/* 0043C564 03E00008 */  jr    $ra
/* 0043C568 00000000 */   nop   

    .type func_0043C56C, @function
func_0043C56C:
    # 0043CFCC readnxtinst
/* 0043C56C 3C1C0FBE */  .cpload $t9
/* 0043C570 279CDD24 */  
/* 0043C574 0399E021 */  
/* 0043C578 27BDFFC0 */  addiu $sp, $sp, -0x40
/* 0043C57C 8F9986F8 */  lw    $t9, %call16(is_power2)($gp)
/* 0043C580 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0043C584 AFB00014 */  sw    $s0, 0x14($sp)
/* 0043C588 24080001 */  li    $t0, 1
/* 0043C58C AFBC0018 */  sw    $gp, 0x18($sp)
/* 0043C590 AFA50044 */  sw    $a1, 0x44($sp)
/* 0043C594 AFA7004C */  sw    $a3, 0x4c($sp)
/* 0043C598 AFA2003C */  sw    $v0, 0x3c($sp)
/* 0043C59C 00068023 */  negu  $s0, $a2
/* 0043C5A0 AFA80034 */  sw    $t0, 0x34($sp)
/* 0043C5A4 0320F809 */  jalr  $t9
/* 0043C5A8 AFA40040 */   sw    $a0, 0x40($sp)
/* 0043C5AC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043C5B0 8FA40040 */  lw    $a0, 0x40($sp)
/* 0043C5B4 93A6004F */  lbu   $a2, 0x4f($sp)
/* 0043C5B8 10400012 */  beqz  $v0, .L0043C604
/* 0043C5BC 8FA80034 */   lw    $t0, 0x34($sp)
/* 0043C5C0 24050001 */  li    $a1, 1
/* 0043C5C4 10850025 */  beq   $a0, $a1, .L0043C65C
/* 0043C5C8 3C0348C2 */   lui   $v1, 0x48c2
/* 0043C5CC 34637395 */  ori   $v1, $v1, 0x7395
/* 0043C5D0 24020005 */  li    $v0, 5
.L0043C5D4:
/* 0043C5D4 15030003 */  bne   $t0, $v1, .L0043C5E4
/* 0043C5D8 00000000 */   nop   
/* 0043C5DC 10000126 */  b     .L0043CA78
/* 0043C5E0 00001025 */   move  $v0, $zero
.L0043C5E4:
/* 0043C5E4 01020019 */  multu $t0, $v0
/* 0043C5E8 00042043 */  sra   $a0, $a0, 1
/* 0043C5EC 2610FFFF */  addiu $s0, $s0, -1
/* 0043C5F0 00004012 */  mflo  $t0
/* 0043C5F4 1485FFF7 */  bne   $a0, $a1, .L0043C5D4
/* 0043C5F8 00000000 */   nop   
/* 0043C5FC 10000017 */  b     .L0043C65C
/* 0043C600 00000000 */   nop   
.L0043C604:
/* 0043C604 24050001 */  li    $a1, 1
/* 0043C608 10850014 */  beq   $a0, $a1, .L0043C65C
/* 0043C60C 3C034000 */   lui   $v1, 0x4000
/* 0043C610 24020005 */  li    $v0, 5
.L0043C614:
/* 0043C614 15030003 */  bne   $t0, $v1, .L0043C624
/* 0043C618 00000000 */   nop   
/* 0043C61C 10000116 */  b     .L0043CA78
/* 0043C620 00001025 */   move  $v0, $zero
.L0043C624:
/* 0043C624 0082001A */  div   $zero, $a0, $v0
/* 0043C628 14400002 */  bnez  $v0, .L0043C634
/* 0043C62C 00000000 */   nop   
/* 0043C630 0007000D */  break 7
.L0043C634:
/* 0043C634 2401FFFF */  li    $at, -1
/* 0043C638 14410004 */  bne   $v0, $at, .L0043C64C
/* 0043C63C 3C018000 */   lui   $at, 0x8000
/* 0043C640 14810002 */  bne   $a0, $at, .L0043C64C
/* 0043C644 00000000 */   nop   
/* 0043C648 0006000D */  break 6
.L0043C64C:
/* 0043C64C 00002012 */  mflo  $a0
/* 0043C650 00084040 */  sll   $t0, $t0, 1
/* 0043C654 1485FFEF */  bne   $a0, $a1, .L0043C614
/* 0043C658 2610FFFF */   addiu $s0, $s0, -1
.L0043C65C:
/* 0043C65C 8F898DA4 */  lw     $t1, %got(u)($gp)
/* 0043C660 240E0049 */  li    $t6, 73
/* 0043C664 2401000D */  li    $at, 13
/* 0043C668 91220001 */  lbu   $v0, 1($t1)
/* 0043C66C A12E0000 */  sb    $t6, ($t1)
/* 0043C670 2407000A */  li    $a3, 10
/* 0043C674 00027EC0 */  sll   $t7, $v0, 0x1b
/* 0043C678 000FC6C2 */  srl   $t8, $t7, 0x1b
/* 0043C67C 00D8C826 */  xor   $t9, $a2, $t8
/* 0043C680 332E001F */  andi  $t6, $t9, 0x1f
/* 0043C684 01C27826 */  xor   $t7, $t6, $v0
/* 0043C688 14C10004 */  bne   $a2, $at, .L0043C69C
/* 0043C68C A12F0001 */   sb    $t7, 1($t1)
/* 0043C690 24180004 */  li    $t8, 4
/* 0043C694 10000003 */  b     .L0043C6A4
/* 0043C698 AD380008 */   sw    $t8, 8($t1)
.L0043C69C:
/* 0043C69C 24190008 */  li    $t9, 8
/* 0043C6A0 AD390008 */  sw    $t9, 8($t1)
.L0043C6A4:
/* 0043C6A4 93AE0047 */  lbu   $t6, 0x47($sp)
/* 0043C6A8 AD200010 */  sw    $zero, 0x10($t1)
/* 0043C6AC 24020001 */  li    $v0, 1
/* 0043C6B0 11C00006 */  beqz  $t6, .L0043C6CC
/* 0043C6B4 3C043B9A */   lui   $a0, 0x3b9a
/* 0043C6B8 8F988950 */  lw     $t8, %got(ustrptr)($gp)
/* 0043C6BC AD250010 */  sw    $a1, 0x10($t1)
/* 0043C6C0 240F002D */  li    $t7, 45
/* 0043C6C4 8F180000 */  lw    $t8, ($t8)
/* 0043C6C8 A30F0000 */  sb    $t7, ($t8)
.L0043C6CC:
/* 0043C6CC 8F8A8950 */  lw     $t2, %got(ustrptr)($gp)
/* 0043C6D0 00002825 */  move  $a1, $zero
/* 0043C6D4 3484CA00 */  ori   $a0, $a0, 0xca00
/* 0043C6D8 8D4A0000 */  lw    $t2, ($t2)
.L0043C6DC:
/* 0043C6DC 00470019 */  multu $v0, $a3
/* 0043C6E0 00001812 */  mflo  $v1
/* 0043C6E4 0103082A */  slt   $at, $t0, $v1
/* 0043C6E8 14200003 */  bnez  $at, .L0043C6F8
/* 0043C6EC 00000000 */   nop   
/* 0043C6F0 54440004 */  bnel  $v0, $a0, .L0043C704
/* 0043C6F4 00601025 */   move  $v0, $v1
.L0043C6F8:
/* 0043C6F8 10000002 */  b     .L0043C704
/* 0043C6FC 24050001 */   li    $a1, 1
/* 0043C700 00601025 */  move  $v0, $v1
.L0043C704:
/* 0043C704 10A0FFF5 */  beqz  $a1, .L0043C6DC
/* 0043C708 00000000 */   nop   
/* 0043C70C 01002025 */  move  $a0, $t0
/* 0043C710 8D260010 */  lw    $a2, 0x10($t1)
.L0043C714:
/* 0043C714 0082001A */  div   $zero, $a0, $v0
/* 0043C718 24D90001 */  addiu $t9, $a2, 1
/* 0043C71C 00007012 */  mflo  $t6
/* 0043C720 25CF0030 */  addiu $t7, $t6, 0x30
/* 0043C724 01591821 */  addu  $v1, $t2, $t9
/* 0043C728 AD390010 */  sw    $t9, 0x10($t1)
/* 0043C72C A06FFFFF */  sb    $t7, -1($v1)
/* 0043C730 03203025 */  move  $a2, $t9
/* 0043C734 14400002 */  bnez  $v0, .L0043C740
/* 0043C738 00000000 */   nop   
/* 0043C73C 0007000D */  break 7
.L0043C740:
/* 0043C740 2401FFFF */  li    $at, -1
/* 0043C744 14410004 */  bne   $v0, $at, .L0043C758
/* 0043C748 3C018000 */   lui   $at, 0x8000
/* 0043C74C 14810002 */  bne   $a0, $at, .L0043C758
/* 0043C750 00000000 */   nop   
/* 0043C754 0006000D */  break 6
.L0043C758:
/* 0043C758 00002010 */  mfhi  $a0
/* 0043C75C 0082C026 */  xor   $t8, $a0, $v0
/* 0043C760 07010002 */  bgez  $t8, .L0043C76C
/* 0043C764 00000000 */   nop   
/* 0043C768 00822021 */  addu  $a0, $a0, $v0
.L0043C76C:
/* 0043C76C 0047001A */  div   $zero, $v0, $a3
/* 0043C770 14E00002 */  bnez  $a3, .L0043C77C
/* 0043C774 00000000 */   nop   
/* 0043C778 0007000D */  break 7
.L0043C77C:
/* 0043C77C 2401FFFF */  li    $at, -1
/* 0043C780 14E10004 */  bne   $a3, $at, .L0043C794
/* 0043C784 3C018000 */   lui   $at, 0x8000
/* 0043C788 14410002 */  bne   $v0, $at, .L0043C794
/* 0043C78C 00000000 */   nop   
/* 0043C790 0006000D */  break 6
.L0043C794:
/* 0043C794 00001012 */  mflo  $v0
/* 0043C798 1440FFDE */  bnez  $v0, .L0043C714
/* 0043C79C 00000000 */   nop   
/* 0043C7A0 2419002E */  li    $t9, 46
/* 0043C7A4 240E0030 */  li    $t6, 48
/* 0043C7A8 24CF0002 */  addiu $t7, $a2, 2
/* 0043C7AC A0790000 */  sb    $t9, ($v1)
/* 0043C7B0 A06E0001 */  sb    $t6, 1($v1)
/* 0043C7B4 1200003F */  beqz  $s0, .L0043C8B4
/* 0043C7B8 AD2F0010 */   sw    $t7, 0x10($t1)
/* 0043C7BC 01E0C025 */  move  $t8, $t7
/* 0043C7C0 25F90001 */  addiu $t9, $t7, 1
/* 0043C7C4 01597821 */  addu  $t7, $t2, $t9
/* 0043C7C8 240E0045 */  li    $t6, 69
/* 0043C7CC AD390010 */  sw    $t9, 0x10($t1)
/* 0043C7D0 A1EEFFFF */  sb    $t6, -1($t7)
/* 0043C7D4 06010009 */  bgez  $s0, .L0043C7FC
/* 0043C7D8 03203025 */   move  $a2, $t9
/* 0043C7DC 24D80001 */  addiu $t8, $a2, 1
/* 0043C7E0 01587021 */  addu  $t6, $t2, $t8
/* 0043C7E4 2419002D */  li    $t9, 45
/* 0043C7E8 00102023 */  negu  $a0, $s0
/* 0043C7EC AD380010 */  sw    $t8, 0x10($t1)
/* 0043C7F0 A1D9FFFF */  sb    $t9, -1($t6)
/* 0043C7F4 10000002 */  b     .L0043C800
/* 0043C7F8 03003025 */   move  $a2, $t8
.L0043C7FC:
/* 0043C7FC 02002025 */  move  $a0, $s0
.L0043C800:
/* 0043C800 24020001 */  li    $v0, 1
.L0043C804:
/* 0043C804 00470019 */  multu $v0, $a3
/* 0043C808 00001812 */  mflo  $v1
/* 0043C80C 0083082A */  slt   $at, $a0, $v1
/* 0043C810 50200004 */  beql  $at, $zero, .L0043C824
/* 0043C814 00601025 */   move  $v0, $v1
/* 0043C818 10000002 */  b     .L0043C824
/* 0043C81C 24050001 */   li    $a1, 1
/* 0043C820 00601025 */  move  $v0, $v1
.L0043C824:
/* 0043C824 10A0FFF7 */  beqz  $a1, .L0043C804
/* 0043C828 00000000 */   nop   
.L0043C82C:
/* 0043C82C 0082001A */  div   $zero, $a0, $v0
/* 0043C830 24CF0001 */  addiu $t7, $a2, 1
/* 0043C834 01E03025 */  move  $a2, $t7
/* 0043C838 AD2F0010 */  sw    $t7, 0x10($t1)
/* 0043C83C 14400002 */  bnez  $v0, .L0043C848
/* 0043C840 00000000 */   nop   
/* 0043C844 0007000D */  break 7
.L0043C848:
/* 0043C848 2401FFFF */  li    $at, -1
/* 0043C84C 14410004 */  bne   $v0, $at, .L0043C860
/* 0043C850 3C018000 */   lui   $at, 0x8000
/* 0043C854 14810002 */  bne   $a0, $at, .L0043C860
/* 0043C858 00000000 */   nop   
/* 0043C85C 0006000D */  break 6
.L0043C860:
/* 0043C860 0000C012 */  mflo  $t8
/* 0043C864 00002010 */  mfhi  $a0
/* 0043C868 27190030 */  addiu $t9, $t8, 0x30
/* 0043C86C 01467021 */  addu  $t6, $t2, $a2
/* 0043C870 00827826 */  xor   $t7, $a0, $v0
/* 0043C874 05E10002 */  bgez  $t7, .L0043C880
/* 0043C878 A1D9FFFF */   sb    $t9, -1($t6)
/* 0043C87C 00822021 */  addu  $a0, $a0, $v0
.L0043C880:
/* 0043C880 0047001A */  div   $zero, $v0, $a3
/* 0043C884 14E00002 */  bnez  $a3, .L0043C890
/* 0043C888 00000000 */   nop   
/* 0043C88C 0007000D */  break 7
.L0043C890:
/* 0043C890 2401FFFF */  li    $at, -1
/* 0043C894 14E10004 */  bne   $a3, $at, .L0043C8A8
/* 0043C898 3C018000 */   lui   $at, 0x8000
/* 0043C89C 14410002 */  bne   $v0, $at, .L0043C8A8
/* 0043C8A0 00000000 */   nop   
/* 0043C8A4 0006000D */  break 6
.L0043C8A8:
/* 0043C8A8 00001012 */  mflo  $v0
/* 0043C8AC 1440FFDF */  bnez  $v0, .L0043C82C
/* 0043C8B0 00000000 */   nop   
.L0043C8B4:
/* 0043C8B4 8F998648 */  lw    $t9, %call16(realhash)($gp)
/* 0043C8B8 8D240010 */  lw    $a0, 0x10($t1)
/* 0043C8BC AFA80034 */  sw    $t0, 0x34($sp)
/* 0043C8C0 0320F809 */  jalr  $t9
/* 0043C8C4 00000000 */   nop   
/* 0043C8C8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043C8CC 3044FFFF */  andi  $a0, $v0, 0xffff
/* 0043C8D0 8FA2003C */  lw    $v0, 0x3c($sp)
/* 0043C8D4 8F998024 */  lw    $t9, %got(func_0043B504)($gp)
/* 0043C8D8 2739B504 */  addiu $t9, %lo(func_0043B504) # addiu $t9, $t9, -0x4afc
/* 0043C8DC 0320F809 */  jalr  $t9
/* 0043C8E0 00000000 */   nop   
/* 0043C8E4 90580000 */  lbu   $t8, ($v0)
/* 0043C8E8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043C8EC 8FA80034 */  lw    $t0, 0x34($sp)
/* 0043C8F0 00405825 */  move  $t3, $v0
/* 0043C8F4 1700005F */  bnez  $t8, .L0043CA74
/* 0043C8F8 8F898DA4 */   lw     $t1, %got(u)($gp)
/* 0043C8FC 24190002 */  li    $t9, 2
/* 0043C900 A0590000 */  sb    $t9, ($v0)
/* 0043C904 912E0001 */  lbu   $t6, 1($t1)
/* 0043C908 8F8A8994 */  lw     $t2, %got(realdispmod)($gp)
/* 0043C90C 31CF001F */  andi  $t7, $t6, 0x1f
/* 0043C910 A04F0001 */  sb    $t7, 1($v0)
/* 0043C914 8D260010 */  lw    $a2, 0x10($t1)
/* 0043C918 914A0000 */  lbu   $t2, ($t2)
/* 0043C91C 01466821 */  addu  $t5, $t2, $a2
/* 0043C920 29A10100 */  slti  $at, $t5, 0x100
/* 0043C924 1420001B */  bnez  $at, .L0043C994
/* 0043C928 00000000 */   nop   
/* 0043C92C 8F828990 */  lw     $v0, %got(realdispdiv)($gp)
/* 0043C930 8F818994 */  lw     $at, %got(realdispmod)($gp)
/* 0043C934 24040104 */  li    $a0, 260
/* 0043C938 8C580000 */  lw    $t8, ($v0)
/* 0043C93C 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 0043C940 AFA80034 */  sw    $t0, 0x34($sp)
/* 0043C944 27190001 */  addiu $t9, $t8, 1
/* 0043C948 AC590000 */  sw    $t9, ($v0)
/* 0043C94C 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 0043C950 AFAB0020 */  sw    $t3, 0x20($sp)
/* 0043C954 A0200000 */  sb    $zero, ($at)
/* 0043C958 0320F809 */  jalr  $t9
/* 0043C95C 00000000 */   nop   
/* 0043C960 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043C964 8FA80034 */  lw    $t0, 0x34($sp)
/* 0043C968 8FAB0020 */  lw    $t3, 0x20($sp)
/* 0043C96C 8F83898C */  lw     $v1, %got(currealpool)($gp)
/* 0043C970 8F898DA4 */  lw     $t1, %got(u)($gp)
/* 0043C974 8F8A8994 */  lw     $t2, %got(realdispmod)($gp)
/* 0043C978 8C6E0000 */  lw    $t6, ($v1)
/* 0043C97C ADC20100 */  sw    $v0, 0x100($t6)
/* 0043C980 AC620000 */  sw    $v0, ($v1)
/* 0043C984 AC400100 */  sw    $zero, 0x100($v0)
/* 0043C988 8D260010 */  lw    $a2, 0x10($t1)
/* 0043C98C 914A0000 */  lbu   $t2, ($t2)
/* 0043C990 01466821 */  addu  $t5, $t2, $a2
.L0043C994:
/* 0043C994 8F83898C */  lw     $v1, %got(currealpool)($gp)
/* 0043C998 00C03825 */  move  $a3, $a2
/* 0043C99C 18C00023 */  blez  $a2, .L0043CA2C
/* 0043C9A0 8C7F0000 */   lw    $ra, ($v1)
/* 0043C9A4 24E70001 */  addiu $a3, $a3, 1
/* 0043C9A8 24ECFFFF */  addiu $t4, $a3, -1
/* 0043C9AC 318C0003 */  andi  $t4, $t4, 3
/* 0043C9B0 1180000E */  beqz  $t4, .L0043C9EC
/* 0043C9B4 24040001 */   li    $a0, 1
/* 0043C9B8 8F988950 */  lw     $t8, %got(ustrptr)($gp)
/* 0043C9BC 25820001 */  addiu $v0, $t4, 1
/* 0043C9C0 03EA2821 */  addu  $a1, $ra, $t2
/* 0043C9C4 8F180000 */  lw    $t8, ($t8)
/* 0043C9C8 03041821 */  addu  $v1, $t8, $a0
.L0043C9CC:
/* 0043C9CC 9079FFFF */  lbu   $t9, -1($v1)
/* 0043C9D0 00A47021 */  addu  $t6, $a1, $a0
/* 0043C9D4 24840001 */  addiu $a0, $a0, 1
/* 0043C9D8 24630001 */  addiu $v1, $v1, 1
/* 0043C9DC 1444FFFB */  bne   $v0, $a0, .L0043C9CC
/* 0043C9E0 A1D9FFFF */   sb    $t9, -1($t6)
/* 0043C9E4 10870011 */  beq   $a0, $a3, .L0043CA2C
/* 0043C9E8 00000000 */   nop   
.L0043C9EC:
/* 0043C9EC 8F8F8950 */  lw     $t7, %got(ustrptr)($gp)
/* 0043C9F0 03EA2821 */  addu  $a1, $ra, $t2
/* 0043C9F4 8DEF0000 */  lw    $t7, ($t7)
/* 0043C9F8 01E41821 */  addu  $v1, $t7, $a0
.L0043C9FC:
/* 0043C9FC 9078FFFF */  lbu   $t8, -1($v1)
/* 0043CA00 00A41021 */  addu  $v0, $a1, $a0
/* 0043CA04 24840004 */  addiu $a0, $a0, 4
/* 0043CA08 A058FFFF */  sb    $t8, -1($v0)
/* 0043CA0C 90790000 */  lbu   $t9, ($v1)
/* 0043CA10 24630004 */  addiu $v1, $v1, 4
/* 0043CA14 A0590000 */  sb    $t9, ($v0)
/* 0043CA18 906EFFFD */  lbu   $t6, -3($v1)
/* 0043CA1C A04E0001 */  sb    $t6, 1($v0)
/* 0043CA20 906FFFFE */  lbu   $t7, -2($v1)
/* 0043CA24 1487FFF5 */  bne   $a0, $a3, .L0043C9FC
/* 0043CA28 A04F0002 */   sb    $t7, 2($v0)
.L0043CA2C:
/* 0043CA2C 8F988990 */  lw     $t8, %got(realdispdiv)($gp)
/* 0043CA30 93AF0047 */  lbu   $t7, 0x47($sp)
/* 0043CA34 8F818994 */  lw     $at, %got(realdispmod)($gp)
/* 0043CA38 8F180000 */  lw    $t8, ($t8)
/* 0043CA3C A5660022 */  sh    $a2, 0x22($t3)
/* 0043CA40 0018CA00 */  sll   $t9, $t8, 8
/* 0043CA44 032A7021 */  addu  $t6, $t9, $t2
/* 0043CA48 A56E0020 */  sh    $t6, 0x20($t3)
/* 0043CA4C 11E00004 */  beqz  $t7, .L0043CA60
/* 0043CA50 A02D0000 */   sb    $t5, ($at)
/* 0043CA54 0008C023 */  negu  $t8, $t0
/* 0043CA58 10000002 */  b     .L0043CA64
/* 0043CA5C AD78002C */   sw    $t8, 0x2c($t3)
.L0043CA60:
/* 0043CA60 AD68002C */  sw    $t0, 0x2c($t3)
.L0043CA64:
/* 0043CA64 8D390008 */  lw    $t9, 8($t1)
/* 0043CA68 AD700030 */  sw    $s0, 0x30($t3)
/* 0043CA6C AD600018 */  sw    $zero, 0x18($t3)
/* 0043CA70 AD790028 */  sw    $t9, 0x28($t3)
.L0043CA74:
/* 0043CA74 01601025 */  move  $v0, $t3
.L0043CA78:
/* 0043CA78 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0043CA7C 8FB00014 */  lw    $s0, 0x14($sp)
/* 0043CA80 27BD0040 */  addiu $sp, $sp, 0x40
/* 0043CA84 03E00008 */  jr    $ra
/* 0043CA88 00000000 */   nop   

    .type func_0043CA8C, @function
func_0043CA8C:
    # 0043CA8C func_0043CA8C
    # 0043CFCC readnxtinst
/* 0043CA8C 3C1C0FBE */  .cpload $t9
/* 0043CA90 279CD804 */  
/* 0043CA94 0399E021 */  
/* 0043CA98 27BDFFC0 */  addiu $sp, $sp, -0x40
/* 0043CA9C AFBE0038 */  sw    $fp, 0x38($sp)
/* 0043CAA0 AFB70030 */  sw    $s7, 0x30($sp)
/* 0043CAA4 AFB6002C */  sw    $s6, 0x2c($sp)
/* 0043CAA8 AFB50028 */  sw    $s5, 0x28($sp)
/* 0043CAAC AFB40024 */  sw    $s4, 0x24($sp)
/* 0043CAB0 AFB2001C */  sw    $s2, 0x1c($sp)
/* 0043CAB4 00809025 */  move  $s2, $a0
/* 0043CAB8 8F948954 */  lw     $s4, %got(perm_heap)($gp)
/* 0043CABC 8F9589B4 */  lw     $s5, %got(curgraphnode)($gp)
/* 0043CAC0 0040B025 */  move  $s6, $v0
/* 0043CAC4 8F9789B0 */  lw     $s7, %got(graphtail)($gp)
/* 0043CAC8 8F9E8B20 */  lw     $fp, %got(outofmem)($gp)
/* 0043CACC AFBF003C */  sw    $ra, 0x3c($sp)
/* 0043CAD0 AFBC0034 */  sw    $gp, 0x34($sp)
/* 0043CAD4 AFB30020 */  sw    $s3, 0x20($sp)
/* 0043CAD8 AFB10018 */  sw    $s1, 0x18($sp)
/* 0043CADC AFB00014 */  sw    $s0, 0x14($sp)
.L0043CAE0:
/* 0043CAE0 5240003B */  beql  $s2, $zero, .L0043CBD0
/* 0043CAE4 8FBF003C */   lw    $ra, 0x3c($sp)
/* 0043CAE8 8F9982C4 */  lw    $t9, %call16(ingraph)($gp)
/* 0043CAEC 02409825 */  move  $s3, $s2
/* 0043CAF0 8E440000 */  lw    $a0, ($s2)
/* 0043CAF4 0320F809 */  jalr  $t9
/* 0043CAF8 00000000 */   nop   
/* 0043CAFC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043CB00 1440000B */  bnez  $v0, .L0043CB30
/* 0043CB04 00408825 */   move  $s1, $v0
/* 0043CB08 8F9982D0 */  lw    $t9, %call16(appendgraph)($gp)
/* 0043CB0C 0320F809 */  jalr  $t9
/* 0043CB10 00000000 */   nop   
/* 0043CB14 93CE0000 */  lbu   $t6, ($fp)
/* 0043CB18 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043CB1C 55C0002C */  bnezl $t6, .L0043CBD0
/* 0043CB20 8FBF003C */   lw    $ra, 0x3c($sp)
/* 0043CB24 8EF10000 */  lw    $s1, ($s7)
/* 0043CB28 8E4F0000 */  lw    $t7, ($s2)
/* 0043CB2C AE2F0000 */  sw    $t7, ($s1)
.L0043CB30:
/* 0043CB30 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 0043CB34 24040008 */  li    $a0, 8
/* 0043CB38 02802825 */  move  $a1, $s4
/* 0043CB3C 0320F809 */  jalr  $t9
/* 0043CB40 00000000 */   nop   
/* 0043CB44 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043CB48 14400004 */  bnez  $v0, .L0043CB5C
/* 0043CB4C 00408025 */   move  $s0, $v0
/* 0043CB50 24180001 */  li    $t8, 1
/* 0043CB54 1000001D */  b     .L0043CBCC
/* 0043CB58 A3D80000 */   sb    $t8, ($fp)
.L0043CB5C:
/* 0043CB5C 8EB90000 */  lw    $t9, ($s5)
/* 0043CB60 24040008 */  li    $a0, 8
/* 0043CB64 02802825 */  move  $a1, $s4
/* 0043CB68 AE190000 */  sw    $t9, ($s0)
/* 0043CB6C 8E280014 */  lw    $t0, 0x14($s1)
/* 0043CB70 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 0043CB74 AE080004 */  sw    $t0, 4($s0)
/* 0043CB78 0320F809 */  jalr  $t9
/* 0043CB7C AE300014 */   sw    $s0, 0x14($s1)
/* 0043CB80 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043CB84 14400004 */  bnez  $v0, .L0043CB98
/* 0043CB88 00408025 */   move  $s0, $v0
/* 0043CB8C 24090001 */  li    $t1, 1
/* 0043CB90 1000000E */  b     .L0043CBCC
/* 0043CB94 A3C90000 */   sb    $t1, ($fp)
.L0043CB98:
/* 0043CB98 8EA30000 */  lw    $v1, ($s5)
/* 0043CB9C AE110000 */  sw    $s1, ($s0)
/* 0043CBA0 8F998024 */  lw    $t9, %got(func_0043CA8C)($gp)
/* 0043CBA4 8C6A0018 */  lw    $t2, 0x18($v1)
/* 0043CBA8 02C01025 */  move  $v0, $s6
/* 0043CBAC 2739CA8C */  addiu $t9, %lo(func_0043CA8C) # addiu $t9, $t9, -0x3574
/* 0043CBB0 AE0A0004 */  sw    $t2, 4($s0)
/* 0043CBB4 AC700018 */  sw    $s0, 0x18($v1)
/* 0043CBB8 0320F809 */  jalr  $t9
/* 0043CBBC 8E440004 */   lw    $a0, 4($s2)
/* 0043CBC0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043CBC4 1000FFC6 */  b     .L0043CAE0
/* 0043CBC8 8E720008 */   lw    $s2, 8($s3)
.L0043CBCC:
/* 0043CBCC 8FBF003C */  lw    $ra, 0x3c($sp)
.L0043CBD0:
/* 0043CBD0 8FB00014 */  lw    $s0, 0x14($sp)
/* 0043CBD4 8FB10018 */  lw    $s1, 0x18($sp)
/* 0043CBD8 8FB2001C */  lw    $s2, 0x1c($sp)
/* 0043CBDC 8FB30020 */  lw    $s3, 0x20($sp)
/* 0043CBE0 8FB40024 */  lw    $s4, 0x24($sp)
/* 0043CBE4 8FB50028 */  lw    $s5, 0x28($sp)
/* 0043CBE8 8FB6002C */  lw    $s6, 0x2c($sp)
/* 0043CBEC 8FB70030 */  lw    $s7, 0x30($sp)
/* 0043CBF0 8FBE0038 */  lw    $fp, 0x38($sp)
/* 0043CBF4 03E00008 */  jr    $ra
/* 0043CBF8 27BD0040 */   addiu $sp, $sp, 0x40

    .type func_0043CBFC, @function
func_0043CBFC:
    # 0043CFCC readnxtinst
/* 0043CBFC 3C1C0FBE */  .cpload $t9
/* 0043CC00 279CD694 */  
/* 0043CC04 0399E021 */  
/* 0043CC08 27BDFFA8 */  addiu $sp, $sp, -0x58
/* 0043CC0C AFB00014 */  sw    $s0, 0x14($sp)
/* 0043CC10 AFBF002C */  sw    $ra, 0x2c($sp)
/* 0043CC14 AFBC0028 */  sw    $gp, 0x28($sp)
/* 0043CC18 AFB40024 */  sw    $s4, 0x24($sp)
/* 0043CC1C AFB30020 */  sw    $s3, 0x20($sp)
/* 0043CC20 AFB2001C */  sw    $s2, 0x1c($sp)
/* 0043CC24 AFB10018 */  sw    $s1, 0x18($sp)
/* 0043CC28 AFA40058 */  sw    $a0, 0x58($sp)
/* 0043CC2C 8F9089C8 */  lw     $s0, %got(staticlinkloc)($gp)
/* 0043CC30 8C850000 */  lw    $a1, ($a0)
/* 0043CC34 8E0F0000 */  lw    $t7, ($s0)
/* 0043CC38 8CB80028 */  lw    $t8, 0x28($a1)
/* 0043CC3C 51F8007A */  beql  $t7, $t8, .L0043CE28
/* 0043CC40 8FAC0058 */   lw    $t4, 0x58($sp)
/* 0043CC44 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 0043CC48 00A02025 */  move  $a0, $a1
/* 0043CC4C 0320F809 */  jalr  $t9
/* 0043CC50 00000000 */   nop   
/* 0043CC54 93B90052 */  lbu   $t9, 0x52($sp)
/* 0043CC58 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0043CC5C 8E180000 */  lw    $t8, ($s0)
/* 0043CC60 3328FFF8 */  andi  $t0, $t9, 0xfff8
/* 0043CC64 8F8A8980 */  lw     $t2, %got(curblk)($gp)
/* 0043CC68 35090001 */  ori   $t1, $t0, 1
/* 0043CC6C A3A90052 */  sb    $t1, 0x52($sp)
/* 0043CC70 8FAB0050 */  lw    $t3, 0x50($sp)
/* 0043CC74 8D4A0000 */  lw    $t2, ($t2)
/* 0043CC78 27B3004C */  addiu $s3, $sp, 0x4c
/* 0043CC7C 000B62C2 */  srl   $t4, $t3, 0xb
/* 0043CC80 014C6826 */  xor   $t5, $t2, $t4
/* 0043CC84 000D72C0 */  sll   $t6, $t5, 0xb
/* 0043CC88 01CB7826 */  xor   $t7, $t6, $t3
/* 0043CC8C AFAF0050 */  sw    $t7, 0x50($sp)
/* 0043CC90 AFB8004C */  sw    $t8, 0x4c($sp)
/* 0043CC94 8E640000 */  lw    $a0, ($s3)
/* 0043CC98 8F99864C */  lw    $t9, %call16(isvarhash)($gp)
/* 0043CC9C AFA40000 */  sw    $a0, ($sp)
/* 0043CCA0 8E650004 */  lw    $a1, 4($s3)
/* 0043CCA4 0320F809 */  jalr  $t9
/* 0043CCA8 AFA50004 */   sw    $a1, 4($sp)
/* 0043CCAC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0043CCB0 3049FFFF */  andi  $t1, $v0, 0xffff
/* 0043CCB4 00095080 */  sll   $t2, $t1, 2
/* 0043CCB8 8F8C8DF8 */  lw     $t4, %got(table)($gp)
/* 0043CCBC A7A20048 */  sh    $v0, 0x48($sp)
/* 0043CCC0 00008825 */  move  $s1, $zero
/* 0043CCC4 014C6821 */  addu  $t5, $t2, $t4
/* 0043CCC8 8DB00000 */  lw    $s0, ($t5)
/* 0043CCCC 24120003 */  li    $s2, 3
/* 0043CCD0 5200001E */  beql  $s0, $zero, .L0043CD4C
/* 0043CCD4 24120003 */   li    $s2, 3
/* 0043CCD8 8F9489B4 */  lw     $s4, %got(curgraphnode)($gp)
/* 0043CCDC 8E8E0000 */  lw    $t6, ($s4)
.L0043CCE0:
/* 0043CCE0 8E0B0010 */  lw    $t3, 0x10($s0)
/* 0043CCE4 15CB0011 */  bne   $t6, $t3, .L0043CD2C
/* 0043CCE8 00000000 */   nop   
/* 0043CCEC 920F0000 */  lbu   $t7, ($s0)
/* 0043CCF0 164F000E */  bne   $s2, $t7, .L0043CD2C
/* 0043CCF4 00000000 */   nop   
/* 0043CCF8 8E040028 */  lw    $a0, 0x28($s0)
/* 0043CCFC 8E05002C */  lw    $a1, 0x2c($s0)
/* 0043CD00 8F99860C */  lw    $t9, %call16(addreq)($gp)
/* 0043CD04 AFA40000 */  sw    $a0, ($sp)
/* 0043CD08 AFA50004 */  sw    $a1, 4($sp)
/* 0043CD0C 8E660000 */  lw    $a2, ($s3)
/* 0043CD10 AFA60008 */  sw    $a2, 8($sp)
/* 0043CD14 8E670004 */  lw    $a3, 4($s3)
/* 0043CD18 0320F809 */  jalr  $t9
/* 0043CD1C AFA7000C */   sw    $a3, 0xc($sp)
/* 0043CD20 10400002 */  beqz  $v0, .L0043CD2C
/* 0043CD24 8FBC0028 */   lw    $gp, 0x28($sp)
/* 0043CD28 24110001 */  li    $s1, 1
.L0043CD2C:
/* 0043CD2C 16200002 */  bnez  $s1, .L0043CD38
/* 0043CD30 00000000 */   nop   
/* 0043CD34 8E10001C */  lw    $s0, 0x1c($s0)
.L0043CD38:
/* 0043CD38 56200004 */  bnezl $s1, .L0043CD4C
/* 0043CD3C 24120003 */   li    $s2, 3
/* 0043CD40 5600FFE7 */  bnezl $s0, .L0043CCE0
/* 0043CD44 8E8E0000 */   lw    $t6, ($s4)
/* 0043CD48 24120003 */  li    $s2, 3
.L0043CD4C:
/* 0043CD4C 16200010 */  bnez  $s1, .L0043CD90
/* 0043CD50 8F9489B4 */   lw     $s4, %got(curgraphnode)($gp)
/* 0043CD54 8F998620 */  lw    $t9, %call16(appendchain)($gp)
/* 0043CD58 97A40048 */  lhu   $a0, 0x48($sp)
/* 0043CD5C 0320F809 */  jalr  $t9
/* 0043CD60 00000000 */   nop   
/* 0043CD64 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0043CD68 00408025 */  move  $s0, $v0
/* 0043CD6C 24110001 */  li    $s1, 1
/* 0043CD70 8F8A8B20 */  lw     $t2, %got(outofmem)($gp)
/* 0043CD74 914A0000 */  lbu   $t2, ($t2)
/* 0043CD78 55400033 */  bnezl $t2, .L0043CE48
/* 0043CD7C 8FBF002C */   lw    $ra, 0x2c($sp)
/* 0043CD80 8E8C0000 */  lw    $t4, ($s4)
/* 0043CD84 A0400021 */  sb    $zero, 0x21($v0)
/* 0043CD88 A0510022 */  sb    $s1, 0x22($v0)
/* 0043CD8C AC4C0010 */  sw    $t4, 0x10($v0)
.L0043CD90:
/* 0043CD90 920D0000 */  lbu   $t5, ($s0)
/* 0043CD94 24110001 */  li    $s1, 1
/* 0043CD98 240F0004 */  li    $t7, 4
/* 0043CD9C 55A00010 */  bnezl $t5, .L0043CDE0
/* 0043CDA0 8FB80058 */   lw    $t8, 0x58($sp)
/* 0043CDA4 8E6B0000 */  lw    $t3, ($s3)
/* 0043CDA8 8E6E0004 */  lw    $t6, 4($s3)
/* 0043CDAC A2120000 */  sb    $s2, ($s0)
/* 0043CDB0 AE000038 */  sw    $zero, 0x38($s0)
/* 0043CDB4 A2000001 */  sb    $zero, 1($s0)
/* 0043CDB8 A20F0020 */  sb    $t7, 0x20($s0)
/* 0043CDBC A6000006 */  sh    $zero, 6($s0)
/* 0043CDC0 AE000030 */  sw    $zero, 0x30($s0)
/* 0043CDC4 AE000024 */  sw    $zero, 0x24($s0)
/* 0043CDC8 A2000002 */  sb    $zero, 2($s0)
/* 0043CDCC A2110003 */  sb    $s1, 3($s0)
/* 0043CDD0 A2000023 */  sb    $zero, 0x23($s0)
/* 0043CDD4 AE0B0028 */  sw    $t3, 0x28($s0)
/* 0043CDD8 AE0E002C */  sw    $t6, 0x2c($s0)
/* 0043CDDC 8FB80058 */  lw    $t8, 0x58($sp)
.L0043CDE0:
/* 0043CDE0 02002025 */  move  $a0, $s0
/* 0043CDE4 AF100000 */  sw    $s0, ($t8)
/* 0043CDE8 8F998640 */  lw    $t9, %call16(increasecount)($gp)
/* 0043CDEC 0320F809 */  jalr  $t9
/* 0043CDF0 00000000 */   nop   
/* 0043CDF4 96190006 */  lhu   $t9, 6($s0)
/* 0043CDF8 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0043CDFC 5639000A */  bnel  $s1, $t9, .L0043CE28
/* 0043CE00 8FAC0058 */   lw    $t4, 0x58($sp)
/* 0043CE04 8F99831C */  lw    $t9, %call16(appendbbvarlst)($gp)
/* 0043CE08 02002025 */  move  $a0, $s0
/* 0043CE0C 0320F809 */  jalr  $t9
/* 0043CE10 00000000 */   nop   
/* 0043CE14 8E880000 */  lw    $t0, ($s4)
/* 0043CE18 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0043CE1C 8D090028 */  lw    $t1, 0x28($t0)
/* 0043CE20 A1310008 */  sb    $s1, 8($t1)
/* 0043CE24 8FAC0058 */  lw    $t4, 0x58($sp)
.L0043CE28:
/* 0043CE28 240A00C8 */  li    $t2, 200
/* 0043CE2C 24110001 */  li    $s1, 1
/* 0043CE30 8D8D0000 */  lw    $t5, ($t4)
/* 0043CE34 A1AA002F */  sb    $t2, 0x2f($t5)
/* 0043CE38 8FAE0058 */  lw    $t6, 0x58($sp)
/* 0043CE3C 8DCB0000 */  lw    $t3, ($t6)
/* 0043CE40 A1710022 */  sb    $s1, 0x22($t3)
/* 0043CE44 8FBF002C */  lw    $ra, 0x2c($sp)
.L0043CE48:
/* 0043CE48 8FB00014 */  lw    $s0, 0x14($sp)
/* 0043CE4C 8FB10018 */  lw    $s1, 0x18($sp)
/* 0043CE50 8FB2001C */  lw    $s2, 0x1c($sp)
/* 0043CE54 8FB30020 */  lw    $s3, 0x20($sp)
/* 0043CE58 8FB40024 */  lw    $s4, 0x24($sp)
/* 0043CE5C 03E00008 */  jr    $ra
/* 0043CE60 27BD0058 */   addiu $sp, $sp, 0x58

    .type func_0043CE64, @function
func_0043CE64:
    # 0043CFCC readnxtinst
/* 0043CE64 3C1C0FBE */  .cpload $t9
/* 0043CE68 279CD42C */  
/* 0043CE6C 0399E021 */  
/* 0043CE70 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 0043CE74 8F8E89B4 */  lw     $t6, %got(curgraphnode)($gp)
/* 0043CE78 AFBF0034 */  sw    $ra, 0x34($sp)
/* 0043CE7C AFBC0030 */  sw    $gp, 0x30($sp)
/* 0043CE80 8DCE0000 */  lw    $t6, ($t6)
/* 0043CE84 AFB5002C */  sw    $s5, 0x2c($sp)
/* 0043CE88 AFB40028 */  sw    $s4, 0x28($sp)
/* 0043CE8C AFB30024 */  sw    $s3, 0x24($sp)
/* 0043CE90 AFB20020 */  sw    $s2, 0x20($sp)
/* 0043CE94 AFB1001C */  sw    $s1, 0x1c($sp)
/* 0043CE98 AFB00018 */  sw    $s0, 0x18($sp)
/* 0043CE9C 8DD00028 */  lw    $s0, 0x28($t6)
/* 0043CEA0 00809025 */  move  $s2, $a0
/* 0043CEA4 00A09825 */  move  $s3, $a1
/* 0043CEA8 1200003E */  beqz  $s0, .L0043CFA4
/* 0043CEAC 2415003F */   li    $s5, 63
/* 0043CEB0 24140001 */  li    $s4, 1
/* 0043CEB4 8F918DA4 */  lw     $s1, %got(u)($gp)
/* 0043CEB8 920F0009 */  lbu   $t7, 9($s0)
.L0043CEBC:
/* 0043CEBC 568F0037 */  bnel  $s4, $t7, .L0043CF9C
/* 0043CEC0 8E100000 */   lw    $s0, ($s0)
/* 0043CEC4 8E02000C */  lw    $v0, 0xc($s0)
/* 0043CEC8 90580000 */  lbu   $t8, ($v0)
/* 0043CECC 56B80033 */  bnel  $s5, $t8, .L0043CF9C
/* 0043CED0 8E100000 */   lw    $s0, ($s0)
/* 0043CED4 8C590004 */  lw    $t9, 4($v0)
/* 0043CED8 56590030 */  bnel  $s2, $t9, .L0043CF9C
/* 0043CEDC 8E100000 */   lw    $s0, ($s0)
/* 0043CEE0 8C480030 */  lw    $t0, 0x30($v0)
/* 0043CEE4 5668002D */  bnel  $s3, $t0, .L0043CF9C
/* 0043CEE8 8E100000 */   lw    $s0, ($s0)
/* 0043CEEC 9049001F */  lbu   $t1, 0x1f($v0)
/* 0043CEF0 5120002A */  beql  $t1, $zero, .L0043CF9C
/* 0043CEF4 8E100000 */   lw    $s0, ($s0)
/* 0043CEF8 922A0001 */  lbu   $t2, 1($s1)
/* 0043CEFC 904C002C */  lbu   $t4, 0x2c($v0)
/* 0043CF00 314B001F */  andi  $t3, $t2, 0x1f
/* 0043CF04 556C0025 */  bnel  $t3, $t4, .L0043CF9C
/* 0043CF08 8E100000 */   lw    $s0, ($s0)
/* 0043CF0C 8E2D0008 */  lw    $t5, 8($s1)
/* 0043CF10 8C4E0020 */  lw    $t6, 0x20($v0)
/* 0043CF14 55AE0021 */  bnel  $t5, $t6, .L0043CF9C
/* 0043CF18 8E100000 */   lw    $s0, ($s0)
/* 0043CF1C 8F998328 */  lw    $t9, %call16(treekilled)($gp)
/* 0043CF20 8C440014 */  lw    $a0, 0x14($v0)
/* 0043CF24 0320F809 */  jalr  $t9
/* 0043CF28 00000000 */   nop   
/* 0043CF2C 1440001A */  bnez  $v0, .L0043CF98
/* 0043CF30 8FBC0030 */   lw    $gp, 0x30($sp)
/* 0043CF34 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 0043CF38 02402025 */  move  $a0, $s2
/* 0043CF3C 0320F809 */  jalr  $t9
/* 0043CF40 00000000 */   nop   
/* 0043CF44 8E0F000C */  lw    $t7, 0xc($s0)
/* 0043CF48 3C011E00 */  lui   $at, 0x1e00
/* 0043CF4C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0043CF50 8DE30014 */  lw    $v1, 0x14($t7)
/* 0043CF54 90780000 */  lbu   $t8, ($v1)
/* 0043CF58 2F190020 */  sltiu $t9, $t8, 0x20
/* 0043CF5C 00194023 */  negu  $t0, $t9
/* 0043CF60 01014824 */  and   $t1, $t0, $at
/* 0043CF64 03095004 */  sllv  $t2, $t1, $t8
/* 0043CF68 05410006 */  bgez  $t2, .L0043CF84
/* 0043CF6C 00000000 */   nop   
/* 0043CF70 946B0006 */  lhu   $t3, 6($v1)
/* 0043CF74 256C0001 */  addiu $t4, $t3, 1
/* 0043CF78 A46C0006 */  sh    $t4, 6($v1)
/* 0043CF7C 8E0D000C */  lw    $t5, 0xc($s0)
/* 0043CF80 8DA30014 */  lw    $v1, 0x14($t5)
.L0043CF84:
/* 0043CF84 8F8E8964 */  lw     $t6, %got(ustack)($gp)
/* 0043CF88 24020001 */  li    $v0, 1
/* 0043CF8C 8DCE0000 */  lw    $t6, ($t6)
/* 0043CF90 10000005 */  b     .L0043CFA8
/* 0043CF94 ADC30000 */   sw    $v1, ($t6)
.L0043CF98:
/* 0043CF98 8E100000 */  lw    $s0, ($s0)
.L0043CF9C:
/* 0043CF9C 5600FFC7 */  bnezl $s0, .L0043CEBC
/* 0043CFA0 920F0009 */   lbu   $t7, 9($s0)
.L0043CFA4:
/* 0043CFA4 00001025 */  move  $v0, $zero
.L0043CFA8:
/* 0043CFA8 8FBF0034 */  lw    $ra, 0x34($sp)
/* 0043CFAC 8FB00018 */  lw    $s0, 0x18($sp)
/* 0043CFB0 8FB1001C */  lw    $s1, 0x1c($sp)
/* 0043CFB4 8FB20020 */  lw    $s2, 0x20($sp)
/* 0043CFB8 8FB30024 */  lw    $s3, 0x24($sp)
/* 0043CFBC 8FB40028 */  lw    $s4, 0x28($sp)
/* 0043CFC0 8FB5002C */  lw    $s5, 0x2c($sp)
/* 0043CFC4 03E00008 */  jr    $ra
/* 0043CFC8 27BD0038 */   addiu $sp, $sp, 0x38

glabel readnxtinst
    .ent readnxtinst
    # 0043A7DC createcvtl
    # 0043CFCC readnxtinst
    # 00456310 func_00456310
/* 0043CFCC 3C1C0FBE */  .cpload $t9
/* 0043CFD0 279CD2C4 */  
/* 0043CFD4 0399E021 */  
/* 0043CFD8 27BDFEF0 */  addiu $sp, $sp, -0x110
/* 0043CFDC AFBE0038 */  sw    $fp, 0x38($sp)
/* 0043CFE0 AFB70030 */  sw    $s7, 0x30($sp)
/* 0043CFE4 AFB6002C */  sw    $s6, 0x2c($sp)
/* 0043CFE8 8F968B1C */  lw     $s6, %got(dokpicopt)($gp)
/* 0043CFEC 24170047 */  li    $s7, 71
/* 0043CFF0 8F9E8DA4 */  lw     $fp, %got(u)($gp)
/* 0043CFF4 AFBF003C */  sw    $ra, 0x3c($sp)
/* 0043CFF8 AFBC0034 */  sw    $gp, 0x34($sp)
/* 0043CFFC AFB50028 */  sw    $s5, 0x28($sp)
/* 0043D000 AFB40024 */  sw    $s4, 0x24($sp)
/* 0043D004 AFB30020 */  sw    $s3, 0x20($sp)
/* 0043D008 AFB2001C */  sw    $s2, 0x1c($sp)
/* 0043D00C AFB10018 */  sw    $s1, 0x18($sp)
/* 0043D010 AFB00014 */  sw    $s0, 0x14($sp)
.L0043D014:
/* 0043D014 93C70000 */  lbu   $a3, ($fp)
/* 0043D018 8F8F8DBC */  lw     $t7, %got(optab)($gp)
/* 0043D01C 00077080 */  sll   $t6, $a3, 2
/* 0043D020 01C77023 */  subu  $t6, $t6, $a3
/* 0043D024 01CFC021 */  addu  $t8, $t6, $t7
/* 0043D028 93190001 */  lbu   $t9, 1($t8)
/* 0043D02C 1720000B */  bnez  $t9, .L0043D05C
/* 0043D030 00000000 */   nop   
/* 0043D034 8F998304 */  lw    $t9, %call16(copyline)($gp)
/* 0043D038 0320F809 */  jalr  $t9
/* 0043D03C 00000000 */   nop   
/* 0043D040 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043D044 24040060 */  li    $a0, 96
/* 0043D048 8F998658 */  lw    $t9, %call16(extendstat)($gp)
/* 0043D04C 0320F809 */  jalr  $t9
/* 0043D050 00000000 */   nop   
/* 0043D054 10001DC6 */  b     .L00444770
/* 0043D058 8FBC0034 */   lw    $gp, 0x34($sp)
.L0043D05C:
/* 0043D05C 8F938964 */  lw     $s3, %got(ustack)($gp)
/* 0043D060 8F8A8960 */  lw     $t2, %got(ustackbot)($gp)
/* 0043D064 8E730000 */  lw    $s3, ($s3)
/* 0043D068 8D4A0000 */  lw    $t2, ($t2)
/* 0043D06C 5153006D */  beql  $t2, $s3, .L0043D224
/* 0043D070 30E200FF */   andi  $v0, $a3, 0xff
/* 0043D074 8E710000 */  lw    $s1, ($s3)
/* 0043D078 24010003 */  li    $at, 3
/* 0043D07C 922B0000 */  lbu   $t3, ($s1)
/* 0043D080 55610068 */  bnel  $t3, $at, .L0043D224
/* 0043D084 30E200FF */   andi  $v0, $a3, 0xff
/* 0043D088 922C002E */  lbu   $t4, 0x2e($s1)
/* 0043D08C 24010005 */  li    $at, 5
/* 0043D090 318D0007 */  andi  $t5, $t4, 7
/* 0043D094 15A10062 */  bne   $t5, $at, .L0043D220
/* 0043D098 2401007B */   li    $at, 123
/* 0043D09C 10E10060 */  beq   $a3, $at, .L0043D220
/* 0043D0A0 240F0001 */   li    $t7, 1
/* 0043D0A4 8E2E0038 */  lw    $t6, 0x38($s1)
/* 0043D0A8 0220A825 */  move  $s5, $s1
/* 0043D0AC 01C002B6 */  tne   $t6, $zero, 0xa
/* 0043D0B0 8F998620 */  lw    $t9, %call16(appendchain)($gp)
/* 0043D0B4 A2AF0002 */  sb    $t7, 2($s5)
/* 0043D0B8 02A08025 */  move  $s0, $s5
/* 0043D0BC 0320F809 */  jalr  $t9
/* 0043D0C0 96A40008 */   lhu   $a0, 8($s5)
/* 0043D0C4 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043D0C8 24190001 */  li    $t9, 1
/* 0043D0CC 240A0003 */  li    $t2, 3
/* 0043D0D0 8F9889B4 */  lw     $t8, %got(curgraphnode)($gp)
/* 0043D0D4 0040A825 */  move  $s5, $v0
/* 0043D0D8 2404007B */  li    $a0, 123
/* 0043D0DC 8F180000 */  lw    $t8, ($t8)
/* 0043D0E0 A0590022 */  sb    $t9, 0x22($v0)
/* 0043D0E4 A0400021 */  sb    $zero, 0x21($v0)
/* 0043D0E8 A04A0000 */  sb    $t2, ($v0)
/* 0043D0EC AC580010 */  sw    $t8, 0x10($v0)
/* 0043D0F0 8E0C0028 */  lw    $t4, 0x28($s0)
/* 0043D0F4 8F988964 */  lw     $t8, %got(ustack)($gp)
/* 0043D0F8 AC4C0028 */  sw    $t4, 0x28($v0)
/* 0043D0FC 8E0B002C */  lw    $t3, 0x2c($s0)
/* 0043D100 AC4B002C */  sw    $t3, 0x2c($v0)
/* 0043D104 920D0001 */  lbu   $t5, 1($s0)
/* 0043D108 A04D0001 */  sb    $t5, 1($v0)
/* 0043D10C 920E0020 */  lbu   $t6, 0x20($s0)
/* 0043D110 A04E0020 */  sb    $t6, 0x20($v0)
/* 0043D114 920F002F */  lbu   $t7, 0x2f($s0)
/* 0043D118 A0400003 */  sb    $zero, 3($v0)
/* 0043D11C A4400006 */  sh    $zero, 6($v0)
/* 0043D120 AC400030 */  sw    $zero, 0x30($v0)
/* 0043D124 AC400024 */  sw    $zero, 0x24($v0)
/* 0043D128 A0400002 */  sb    $zero, 2($v0)
/* 0043D12C A0400023 */  sb    $zero, 0x23($v0)
/* 0043D130 A04F002F */  sb    $t7, 0x2f($v0)
/* 0043D134 8F180000 */  lw    $t8, ($t8)
/* 0043D138 8F190000 */  lw    $t9, ($t8)
/* 0043D13C AC590034 */  sw    $t9, 0x34($v0)
/* 0043D140 8F998658 */  lw    $t9, %call16(extendstat)($gp)
/* 0043D144 0320F809 */  jalr  $t9
/* 0043D148 00000000 */   nop   
/* 0043D14C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043D150 240A0001 */  li    $t2, 1
/* 0043D154 02A02825 */  move  $a1, $s5
/* 0043D158 8F8B89C4 */  lw     $t3, %got(stattail)($gp)
/* 0043D15C 8F8D8C40 */  lw     $t5, %got(lastmst)($gp)
/* 0043D160 8D6B0000 */  lw    $t3, ($t3)
/* 0043D164 A16A0003 */  sb    $t2, 3($t3)
/* 0043D168 8EAC0028 */  lw    $t4, 0x28($s5)
/* 0043D16C 8DAD0000 */  lw    $t5, ($t5)
/* 0043D170 ADAC001C */  sw    $t4, 0x1c($t5)
/* 0043D174 8F998310 */  lw    $t9, %call16(insert_outparlist)($gp)
/* 0043D178 8EA40028 */  lw    $a0, 0x28($s5)
/* 0043D17C 0320F809 */  jalr  $t9
/* 0043D180 00000000 */   nop   
/* 0043D184 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043D188 8F828964 */  lw     $v0, %got(ustack)($gp)
/* 0043D18C 8F9489C4 */  lw     $s4, %got(stattail)($gp)
/* 0043D190 8C4E0000 */  lw    $t6, ($v0)
/* 0043D194 8E940000 */  lw    $s4, ($s4)
/* 0043D198 8DCF000C */  lw    $t7, 0xc($t6)
/* 0043D19C AE950004 */  sw    $s5, 4($s4)
/* 0043D1A0 A280001C */  sb    $zero, 0x1c($s4)
/* 0043D1A4 AC4F0000 */  sw    $t7, ($v0)
/* 0043D1A8 8F998318 */  lw    $t9, %call16(appendstorelist)($gp)
/* 0043D1AC A280001E */  sb    $zero, 0x1e($s4)
/* 0043D1B0 A280001D */  sb    $zero, 0x1d($s4)
/* 0043D1B4 A280001F */  sb    $zero, 0x1f($s4)
/* 0043D1B8 A2800001 */  sb    $zero, 1($s4)
/* 0043D1BC AE80002C */  sw    $zero, 0x2c($s4)
/* 0043D1C0 AE800030 */  sw    $zero, 0x30($s4)
/* 0043D1C4 A2800002 */  sb    $zero, 2($s4)
/* 0043D1C8 0320F809 */  jalr  $t9
/* 0043D1CC AEA00038 */   sw    $zero, 0x38($s5)
/* 0043D1D0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043D1D4 24180001 */  li    $t8, 1
/* 0043D1D8 02A02025 */  move  $a0, $s5
/* 0043D1DC 8F9989B4 */  lw     $t9, %got(curgraphnode)($gp)
/* 0043D1E0 27A20110 */  addiu $v0, $sp, 0x110
/* 0043D1E4 8F390000 */  lw    $t9, ($t9)
/* 0043D1E8 8F2A0028 */  lw    $t2, 0x28($t9)
/* 0043D1EC 8F998024 */  lw    $t9, %got(func_0043B15C)($gp)
/* 0043D1F0 A1580008 */  sb    $t8, 8($t2)
/* 0043D1F4 2739B15C */  addiu $t9, %lo(func_0043B15C) # addiu $t9, $t9, -0x4ea4
/* 0043D1F8 0320F809 */  jalr  $t9
/* 0043D1FC AFB5010C */   sw    $s5, 0x10c($sp)
/* 0043D200 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043D204 8FB5010C */  lw    $s5, 0x10c($sp)
/* 0043D208 8F998640 */  lw    $t9, %call16(increasecount)($gp)
/* 0043D20C 02A02025 */  move  $a0, $s5
/* 0043D210 0320F809 */  jalr  $t9
/* 0043D214 00000000 */   nop   
/* 0043D218 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043D21C 93C70000 */  lbu   $a3, ($fp)
.L0043D220:
/* 0043D220 30E200FF */  andi  $v0, $a3, 0xff
.L0043D224:
/* 0043D224 2C41009C */  sltiu $at, $v0, 0x9c
/* 0043D228 10201D49 */  beqz  $at, .L00444750
/* 0043D22C 00000000 */   nop   
/* 0043D230 8F818044 */  lw    $at, %got(jtbl_1000C4F8)($gp)
/* 0043D234 00025880 */  sll   $t3, $v0, 2
/* 0043D238 002B0821 */  addu  $at, $at, $t3
/* 0043D23C 8C2BC4F8 */  lw    $t3, %lo(jtbl_1000C4F8)($at)
/* 0043D240 017C5821 */  addu  $t3, $t3, $gp
/* 0043D244 01600008 */  jr    $t3
/* 0043D248 00000000 */   nop   
.L0043D24C:
/* 0043D24C 38ED0048 */  xori  $t5, $a3, 0x48
/* 0043D250 2DAD0001 */  sltiu $t5, $t5, 1
/* 0043D254 93CF0001 */  lbu   $t7, 1($fp)
/* 0043D258 AFCD0004 */  sw    $t5, 4($fp)
/* 0043D25C 93AD00EA */  lbu   $t5, 0xea($sp)
/* 0043D260 240E0052 */  li    $t6, 82
/* 0043D264 A3CE0000 */  sb    $t6, ($fp)
/* 0043D268 31F9FF1F */  andi  $t9, $t7, 0xff1f
/* 0043D26C 31AEFFF8 */  andi  $t6, $t5, 0xfff8
/* 0043D270 372A0060 */  ori   $t2, $t9, 0x60
/* 0043D274 35CF0003 */  ori   $t7, $t6, 3
/* 0043D278 A3AF00EA */  sb    $t7, 0xea($sp)
/* 0043D27C 8FB800E8 */  lw    $t8, 0xe8($sp)
/* 0043D280 8FD90004 */  lw    $t9, 4($fp)
/* 0043D284 240C001D */  li    $t4, 29
/* 0043D288 A3CA0001 */  sb    $t2, 1($fp)
/* 0043D28C 314BFFE0 */  andi  $t3, $t2, 0xffe0
/* 0043D290 AFCC000C */  sw    $t4, 0xc($fp)
/* 0043D294 A3CB0001 */  sb    $t3, 1($fp)
/* 0043D298 240C0004 */  li    $t4, 4
/* 0043D29C 001852C2 */  srl   $t2, $t8, 0xb
/* 0043D2A0 AFCC0008 */  sw    $t4, 8($fp)
/* 0043D2A4 032A5826 */  xor   $t3, $t9, $t2
/* 0043D2A8 000B62C0 */  sll   $t4, $t3, 0xb
/* 0043D2AC 240E001D */  li    $t6, 29
/* 0043D2B0 01986826 */  xor   $t5, $t4, $t8
/* 0043D2B4 AFAD00E8 */  sw    $t5, 0xe8($sp)
/* 0043D2B8 AFAE00E4 */  sw    $t6, 0xe4($sp)
/* 0043D2BC 27AF00E4 */  addiu $t7, $sp, 0xe4
/* 0043D2C0 8DE40000 */  lw    $a0, ($t7)
/* 0043D2C4 8F99864C */  lw    $t9, %call16(isvarhash)($gp)
/* 0043D2C8 AFA40000 */  sw    $a0, ($sp)
/* 0043D2CC 8DE50004 */  lw    $a1, 4($t7)
/* 0043D2D0 0320F809 */  jalr  $t9
/* 0043D2D4 AFA50004 */   sw    $a1, 4($sp)
/* 0043D2D8 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043D2DC 3044FFFF */  andi  $a0, $v0, 0xffff
/* 0043D2E0 27A20110 */  addiu $v0, $sp, 0x110
/* 0043D2E4 8F998024 */  lw    $t9, %got(func_0043B504)($gp)
/* 0043D2E8 2739B504 */  addiu $t9, %lo(func_0043B504) # addiu $t9, $t9, -0x4afc
/* 0043D2EC 0320F809 */  jalr  $t9
/* 0043D2F0 00000000 */   nop   
/* 0043D2F4 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043D2F8 0040A825 */  move  $s5, $v0
/* 0043D2FC 8F8B8B20 */  lw     $t3, %got(outofmem)($gp)
/* 0043D300 916B0000 */  lbu   $t3, ($t3)
/* 0043D304 55601D1B */  bnezl $t3, .L00444774
/* 0043D308 8FBF003C */   lw    $ra, 0x3c($sp)
/* 0043D30C 904C0000 */  lbu   $t4, ($v0)
/* 0043D310 24180003 */  li    $t8, 3
/* 0043D314 27AD00E4 */  addiu $t5, $sp, 0xe4
/* 0043D318 15800014 */  bnez  $t4, .L0043D36C
/* 0043D31C 24190004 */   li    $t9, 4
/* 0043D320 A0580000 */  sb    $t8, ($v0)
/* 0043D324 8DAF0000 */  lw    $t7, ($t5)
/* 0043D328 8F8A897C */  lw     $t2, %got(curlevel)($gp)
/* 0043D32C 240B0001 */  li    $t3, 1
/* 0043D330 AC4F0028 */  sw    $t7, 0x28($v0)
/* 0043D334 8DAE0004 */  lw    $t6, 4($t5)
/* 0043D338 AC400038 */  sw    $zero, 0x38($v0)
/* 0043D33C A0400001 */  sb    $zero, 1($v0)
/* 0043D340 A0590020 */  sb    $t9, 0x20($v0)
/* 0043D344 AC4E002C */  sw    $t6, 0x2c($v0)
/* 0043D348 8D4A0000 */  lw    $t2, ($t2)
/* 0043D34C 240C0001 */  li    $t4, 1
/* 0043D350 A4400006 */  sh    $zero, 6($v0)
/* 0043D354 AC400030 */  sw    $zero, 0x30($v0)
/* 0043D358 AC400024 */  sw    $zero, 0x24($v0)
/* 0043D35C A04B0002 */  sb    $t3, 2($v0)
/* 0043D360 A0400003 */  sb    $zero, 3($v0)
/* 0043D364 A04C0023 */  sb    $t4, 0x23($v0)
/* 0043D368 A04A002F */  sb    $t2, 0x2f($v0)
.L0043D36C:
/* 0043D36C 8F998024 */  lw    $t9, %got(func_0043B15C)($gp)
/* 0043D370 02A02025 */  move  $a0, $s5
/* 0043D374 27A20110 */  addiu $v0, $sp, 0x110
/* 0043D378 2739B15C */  addiu $t9, %lo(func_0043B15C) # addiu $t9, $t9, -0x4ea4
/* 0043D37C 0320F809 */  jalr  $t9
/* 0043D380 AFB5010C */   sw    $s5, 0x10c($sp)
/* 0043D384 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043D388 8FB5010C */  lw    $s5, 0x10c($sp)
/* 0043D38C 8F998640 */  lw    $t9, %call16(increasecount)($gp)
/* 0043D390 02A02025 */  move  $a0, $s5
/* 0043D394 0320F809 */  jalr  $t9
/* 0043D398 00000000 */   nop   
/* 0043D39C 96B80006 */  lhu   $t8, 6($s5)
/* 0043D3A0 24010001 */  li    $at, 1
/* 0043D3A4 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043D3A8 17010006 */  bne   $t8, $at, .L0043D3C4
/* 0043D3AC 00000000 */   nop   
/* 0043D3B0 8F99831C */  lw    $t9, %call16(appendbbvarlst)($gp)
/* 0043D3B4 02A02025 */  move  $a0, $s5
/* 0043D3B8 0320F809 */  jalr  $t9
/* 0043D3BC 00000000 */   nop   
/* 0043D3C0 8FBC0034 */  lw    $gp, 0x34($sp)
.L0043D3C4:
/* 0043D3C4 8F818AF8 */  lw     $at, %got(usefp)($gp)
/* 0043D3C8 240D0001 */  li    $t5, 1
/* 0043D3CC 10001CE8 */  b     .L00444770
/* 0043D3D0 A02D0000 */   sb    $t5, ($at)
.L0043D3D4:
/* 0043D3D4 92CE0000 */  lbu   $t6, ($s6)
/* 0043D3D8 51C00039 */  beql  $t6, $zero, .L0043D4C0
/* 0043D3DC 93CD0001 */   lbu   $t5, 1($fp)
/* 0043D3E0 93CF0001 */  lbu   $t7, 1($fp)
/* 0043D3E4 24010004 */  li    $at, 4
/* 0043D3E8 000FCE00 */  sll   $t9, $t7, 0x18
/* 0043D3EC 00195742 */  srl   $t2, $t9, 0x1d
/* 0043D3F0 55410033 */  bnel  $t2, $at, .L0043D4C0
/* 0043D3F4 93CD0001 */   lbu   $t5, 1($fp)
/* 0043D3F8 8F998494 */  lw    $t9, %call16(in_fsym)($gp)
/* 0043D3FC 8FC40004 */  lw    $a0, 4($fp)
/* 0043D400 0320F809 */  jalr  $t9
/* 0043D404 00000000 */   nop   
/* 0043D408 1440002C */  bnez  $v0, .L0043D4BC
/* 0043D40C 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0043D410 8F998498 */  lw    $t9, %call16(is_gp_relative)($gp)
/* 0043D414 8FC40004 */  lw    $a0, 4($fp)
/* 0043D418 0320F809 */  jalr  $t9
/* 0043D41C 00000000 */   nop   
/* 0043D420 14400026 */  bnez  $v0, .L0043D4BC
/* 0043D424 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0043D428 8FC3000C */  lw    $v1, 0xc($fp)
/* 0043D42C 93D20001 */  lbu   $s2, 1($fp)
/* 0043D430 A3D70000 */  sb    $s7, ($fp)
/* 0043D434 00031403 */  sra   $v0, $v1, 0x10
/* 0043D438 00021400 */  sll   $v0, $v0, 0x10
/* 0043D43C AFC2000C */  sw    $v0, 0xc($fp)
/* 0043D440 AFC30010 */  sw    $v1, 0x10($fp)
/* 0043D444 8F99832C */  lw    $t9, %call16(readnxtinst)($gp)
/* 0043D448 3252001F */  andi  $s2, $s2, 0x1f
/* 0043D44C 325200FF */  andi  $s2, $s2, 0xff
/* 0043D450 8FD10008 */  lw    $s1, 8($fp)
/* 0043D454 0320F809 */  jalr  $t9
/* 0043D458 00628023 */   subu  $s0, $v1, $v0
/* 0043D45C 97C20002 */  lhu   $v0, 2($fp)
/* 0043D460 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043D464 240C0033 */  li    $t4, 51
/* 0043D468 304B0001 */  andi  $t3, $v0, 1
/* 0043D46C 11600003 */  beqz  $t3, .L0043D47C
/* 0043D470 24180036 */   li    $t8, 54
/* 0043D474 10000002 */  b     .L0043D480
/* 0043D478 A3CC0000 */   sb    $t4, ($fp)
.L0043D47C:
/* 0043D47C A3D80000 */  sb    $t8, ($fp)
.L0043D480:
/* 0043D480 93C40001 */  lbu   $a0, 1($fp)
/* 0043D484 320B0007 */  andi  $t3, $s0, 7
/* 0043D488 000B60C0 */  sll   $t4, $t3, 3
/* 0043D48C 00046EC0 */  sll   $t5, $a0, 0x1b
/* 0043D490 000D76C2 */  srl   $t6, $t5, 0x1b
/* 0043D494 024E7826 */  xor   $t7, $s2, $t6
/* 0043D498 31F9001F */  andi  $t9, $t7, 0x1f
/* 0043D49C 004CC025 */  or    $t8, $v0, $t4
/* 0043D4A0 03245026 */  xor   $t2, $t9, $a0
/* 0043D4A4 A3CA0001 */  sb    $t2, 1($fp)
/* 0043D4A8 AFD00004 */  sw    $s0, 4($fp)
/* 0043D4AC AFC0000C */  sw    $zero, 0xc($fp)
/* 0043D4B0 AFD10008 */  sw    $s1, 8($fp)
/* 0043D4B4 1000FED7 */  b     .L0043D014
/* 0043D4B8 A7D80002 */   sh    $t8, 2($fp)
.L0043D4BC:
/* 0043D4BC 93CD0001 */  lbu   $t5, 1($fp)
.L0043D4C0:
/* 0043D4C0 24010005 */  li    $at, 5
/* 0043D4C4 000D7600 */  sll   $t6, $t5, 0x18
/* 0043D4C8 000E7F42 */  srl   $t7, $t6, 0x1d
/* 0043D4CC 55E1001C */  bnel  $t7, $at, .L0043D540
/* 0043D4D0 93D90001 */   lbu   $t9, 1($fp)
/* 0043D4D4 8F99830C */  lw    $t9, %call16(in_outparlist)($gp)
/* 0043D4D8 8FC4000C */  lw    $a0, 0xc($fp)
/* 0043D4DC 0320F809 */  jalr  $t9
/* 0043D4E0 00000000 */   nop   
/* 0043D4E4 10400015 */  beqz  $v0, .L0043D53C
/* 0043D4E8 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0043D4EC 8F99830C */  lw    $t9, %call16(in_outparlist)($gp)
/* 0043D4F0 8FC4000C */  lw    $a0, 0xc($fp)
/* 0043D4F4 0320F809 */  jalr  $t9
/* 0043D4F8 00000000 */   nop   
/* 0043D4FC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043D500 0040A825 */  move  $s5, $v0
/* 0043D504 00402025 */  move  $a0, $v0
/* 0043D508 8F998024 */  lw    $t9, %got(func_0043B15C)($gp)
/* 0043D50C 27A20110 */  addiu $v0, $sp, 0x110
/* 0043D510 AFB5010C */  sw    $s5, 0x10c($sp)
/* 0043D514 2739B15C */  addiu $t9, %lo(func_0043B15C) # addiu $t9, $t9, -0x4ea4
/* 0043D518 0320F809 */  jalr  $t9
/* 0043D51C 00000000 */   nop   
/* 0043D520 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043D524 8FA4010C */  lw    $a0, 0x10c($sp)
/* 0043D528 8F998640 */  lw    $t9, %call16(increasecount)($gp)
/* 0043D52C 0320F809 */  jalr  $t9
/* 0043D530 00000000 */   nop   
/* 0043D534 10001C8E */  b     .L00444770
/* 0043D538 8FBC0034 */   lw    $gp, 0x34($sp)
.L0043D53C:
/* 0043D53C 93D90001 */  lbu   $t9, 1($fp)
.L0043D540:
/* 0043D540 93AC00EA */  lbu   $t4, 0xea($sp)
/* 0043D544 24010003 */  li    $at, 3
/* 0043D548 00195600 */  sll   $t2, $t9, 0x18
/* 0043D54C 000CC740 */  sll   $t8, $t4, 0x1d
/* 0043D550 00186F42 */  srl   $t5, $t8, 0x1d
/* 0043D554 000A5F42 */  srl   $t3, $t2, 0x1d
/* 0043D558 016D7026 */  xor   $t6, $t3, $t5
/* 0043D55C 31CF0007 */  andi  $t7, $t6, 7
/* 0043D560 01ECC826 */  xor   $t9, $t7, $t4
/* 0043D564 A3B900EA */  sb    $t9, 0xea($sp)
/* 0043D568 8FB800E8 */  lw    $t8, 0xe8($sp)
/* 0043D56C 8FCA0004 */  lw    $t2, 4($fp)
/* 0043D570 8FCC000C */  lw    $t4, 0xc($fp)
/* 0043D574 00185AC2 */  srl   $t3, $t8, 0xb
/* 0043D578 014B6826 */  xor   $t5, $t2, $t3
/* 0043D57C 000D72C0 */  sll   $t6, $t5, 0xb
/* 0043D580 01D87826 */  xor   $t7, $t6, $t8
/* 0043D584 AFAF00E8 */  sw    $t7, 0xe8($sp)
/* 0043D588 93B900EA */  lbu   $t9, 0xea($sp)
/* 0043D58C 31EB07FF */  andi  $t3, $t7, 0x7ff
/* 0043D590 27AD00E4 */  addiu $t5, $sp, 0xe4
/* 0043D594 332A0007 */  andi  $t2, $t9, 7
/* 0043D598 15410002 */  bne   $t2, $at, .L0043D5A4
/* 0043D59C AFAC00E4 */   sw    $t4, 0xe4($sp)
/* 0043D5A0 AFAB00E8 */  sw    $t3, 0xe8($sp)
.L0043D5A4:
/* 0043D5A4 8DA40000 */  lw    $a0, ($t5)
/* 0043D5A8 8F99864C */  lw    $t9, %call16(isvarhash)($gp)
/* 0043D5AC AFA40000 */  sw    $a0, ($sp)
/* 0043D5B0 8DA50004 */  lw    $a1, 4($t5)
/* 0043D5B4 0320F809 */  jalr  $t9
/* 0043D5B8 AFA50004 */   sw    $a1, 4($sp)
/* 0043D5BC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043D5C0 3044FFFF */  andi  $a0, $v0, 0xffff
/* 0043D5C4 27A20110 */  addiu $v0, $sp, 0x110
/* 0043D5C8 8F998024 */  lw    $t9, %got(func_0043B504)($gp)
/* 0043D5CC 2739B504 */  addiu $t9, %lo(func_0043B504) # addiu $t9, $t9, -0x4afc
/* 0043D5D0 0320F809 */  jalr  $t9
/* 0043D5D4 00000000 */   nop   
/* 0043D5D8 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043D5DC 0040A825 */  move  $s5, $v0
/* 0043D5E0 8F8C8B20 */  lw     $t4, %got(outofmem)($gp)
/* 0043D5E4 918C0000 */  lbu   $t4, ($t4)
/* 0043D5E8 55801C62 */  bnezl $t4, .L00444774
/* 0043D5EC 8FBF003C */   lw    $ra, 0x3c($sp)
/* 0043D5F0 93C70000 */  lbu   $a3, ($fp)
/* 0043D5F4 2410003D */  li    $s0, 61
/* 0043D5F8 5607001E */  bnel  $s0, $a3, .L0043D674
/* 0043D5FC 92AC0000 */   lbu   $t4, ($s5)
/* 0043D600 8F938964 */  lw     $s3, %got(ustack)($gp)
/* 0043D604 24010003 */  li    $at, 3
/* 0043D608 24190006 */  li    $t9, 6
/* 0043D60C 8E730000 */  lw    $s3, ($s3)
/* 0043D610 240A00C8 */  li    $t2, 200
/* 0043D614 8E710000 */  lw    $s1, ($s3)
/* 0043D618 92220000 */  lbu   $v0, ($s1)
/* 0043D61C 5441000C */  bnel  $v0, $at, .L0043D650
/* 0043D620 005902B6 */   tne   $v0, $t9, 0xa
/* 0043D624 8F998024 */  lw    $t9, %got(func_0043CBFC)($gp)
/* 0043D628 AFB5010C */  sw    $s5, 0x10c($sp)
/* 0043D62C 02602025 */  move  $a0, $s3
/* 0043D630 2739CBFC */  addiu $t9, %lo(func_0043CBFC) # addiu $t9, $t9, -0x3404
/* 0043D634 0320F809 */  jalr  $t9
/* 0043D638 27A20110 */   addiu $v0, $sp, 0x110
/* 0043D63C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043D640 93C70000 */  lbu   $a3, ($fp)
/* 0043D644 1000000A */  b     .L0043D670
/* 0043D648 8FB5010C */   lw    $s5, 0x10c($sp)
/* 0043D64C 005902B6 */  tne   $v0, $t9, 0xa
.L0043D650:
/* 0043D650 A22A002F */  sb    $t2, 0x2f($s1)
/* 0043D654 8E6B0000 */  lw    $t3, ($s3)
/* 0043D658 240F0001 */  li    $t7, 1
/* 0043D65C 240D0001 */  li    $t5, 1
/* 0043D660 A16F0022 */  sb    $t7, 0x22($t3)
/* 0043D664 8E6E0000 */  lw    $t6, ($s3)
/* 0043D668 8DD80018 */  lw    $t8, 0x18($t6)
/* 0043D66C A30D0008 */  sb    $t5, 8($t8)
.L0043D670:
/* 0043D670 92AC0000 */  lbu   $t4, ($s5)
.L0043D674:
/* 0043D674 24010052 */  li    $at, 82
/* 0043D678 27AF00E4 */  addiu $t7, $sp, 0xe4
/* 0043D67C 15800040 */  bnez  $t4, .L0043D780
/* 0043D680 00000000 */   nop   
/* 0043D684 14E10004 */  bne   $a3, $at, .L0043D698
/* 0043D688 240A0006 */   li    $t2, 6
/* 0043D68C 24190003 */  li    $t9, 3
/* 0043D690 10000002 */  b     .L0043D69C
/* 0043D694 A2B90000 */   sb    $t9, ($s5)
.L0043D698:
/* 0043D698 A2AA0000 */  sb    $t2, ($s5)
.L0043D69C:
/* 0043D69C 8DEE0000 */  lw    $t6, ($t7)
/* 0043D6A0 93CD0001 */  lbu   $t5, 1($fp)
/* 0043D6A4 8F998660 */  lw    $t9, %call16(blktolev)($gp)
/* 0043D6A8 AEAE0028 */  sw    $t6, 0x28($s5)
/* 0043D6AC 8DEB0004 */  lw    $t3, 4($t7)
/* 0043D6B0 8FCC0008 */  lw    $t4, 8($fp)
/* 0043D6B4 8FA400E8 */  lw    $a0, 0xe8($sp)
/* 0043D6B8 31B8001F */  andi  $t8, $t5, 0x1f
/* 0043D6BC AEA00038 */  sw    $zero, 0x38($s5)
/* 0043D6C0 A2B80001 */  sb    $t8, 1($s5)
/* 0043D6C4 AEAB002C */  sw    $t3, 0x2c($s5)
/* 0043D6C8 A2AC0020 */  sb    $t4, 0x20($s5)
/* 0043D6CC 0320F809 */  jalr  $t9
/* 0043D6D0 000422C2 */   srl   $a0, $a0, 0xb
/* 0043D6D4 93C70000 */  lbu   $a3, ($fp)
/* 0043D6D8 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043D6DC A2A2002F */  sb    $v0, 0x2f($s5)
/* 0043D6E0 A6A00006 */  sh    $zero, 6($s5)
/* 0043D6E4 16070009 */  bne   $s0, $a3, .L0043D70C
/* 0043D6E8 AEA00030 */   sw    $zero, 0x30($s5)
/* 0043D6EC 8F998964 */  lw     $t9, %got(ustack)($gp)
/* 0043D6F0 8F390000 */  lw    $t9, ($t9)
/* 0043D6F4 8F2A0000 */  lw    $t2, ($t9)
/* 0043D6F8 AEA0003C */  sw    $zero, 0x3c($s5)
/* 0043D6FC A2A00004 */  sb    $zero, 4($s5)
/* 0043D700 A2A00005 */  sb    $zero, 5($s5)
/* 0043D704 10000002 */  b     .L0043D710
/* 0043D708 AEAA0024 */   sw    $t2, 0x24($s5)
.L0043D70C:
/* 0043D70C AEA00024 */  sw    $zero, 0x24($s5)
.L0043D710:
/* 0043D710 92AF0021 */  lbu   $t7, 0x21($s5)
/* 0043D714 240C0001 */  li    $t4, 1
/* 0043D718 55E00014 */  bnezl $t7, .L0043D76C
/* 0043D71C A2AC0002 */   sb    $t4, 2($s5)
/* 0043D720 92AB0003 */  lbu   $t3, 3($s5)
/* 0043D724 A2A00002 */  sb    $zero, 2($s5)
/* 0043D728 51600012 */  beql  $t3, $zero, .L0043D774
/* 0043D72C 97D90002 */   lhu   $t9, 2($fp)
/* 0043D730 92AE0022 */  lbu   $t6, 0x22($s5)
/* 0043D734 55C0000F */  bnezl $t6, .L0043D774
/* 0043D738 97D90002 */   lhu   $t9, 2($fp)
/* 0043D73C 8F8D89B4 */  lw     $t5, %got(curgraphnode)($gp)
/* 0043D740 8F9983C4 */  lw    $t9, %call16(varkilled)($gp)
/* 0043D744 02A02025 */  move  $a0, $s5
/* 0043D748 8DAD0000 */  lw    $t5, ($t5)
/* 0043D74C 0320F809 */  jalr  $t9
/* 0043D750 8DA50024 */   lw    $a1, 0x24($t5)
/* 0043D754 2C580001 */  sltiu $t8, $v0, 1
/* 0043D758 A2B80003 */  sb    $t8, 3($s5)
/* 0043D75C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043D760 10000003 */  b     .L0043D770
/* 0043D764 93C70000 */   lbu   $a3, ($fp)
/* 0043D768 A2AC0002 */  sb    $t4, 2($s5)
.L0043D76C:
/* 0043D76C A2A00003 */  sb    $zero, 3($s5)
.L0043D770:
/* 0043D770 97D90002 */  lhu   $t9, 2($fp)
.L0043D774:
/* 0043D774 332A0001 */  andi  $t2, $t9, 1
/* 0043D778 000A782B */  sltu  $t7, $zero, $t2
/* 0043D77C A2AF0023 */  sb    $t7, 0x23($s5)
.L0043D780:
/* 0043D780 56070007 */  bnel  $s0, $a3, .L0043D7A0
/* 0043D784 8EA20038 */   lw    $v0, 0x38($s5)
/* 0043D788 8F8B8964 */  lw     $t3, %got(ustack)($gp)
/* 0043D78C 8F818964 */  lw     $at, %got(ustack)($gp)
/* 0043D790 8D6B0000 */  lw    $t3, ($t3)
/* 0043D794 8D6E000C */  lw    $t6, 0xc($t3)
/* 0043D798 AC2E0000 */  sw    $t6, ($at)
/* 0043D79C 8EA20038 */  lw    $v0, 0x38($s5)
.L0043D7A0:
/* 0043D7A0 10400004 */  beqz  $v0, .L0043D7B4
/* 0043D7A4 00000000 */   nop   
/* 0043D7A8 904D001F */  lbu   $t5, 0x1f($v0)
/* 0043D7AC 15A00035 */  bnez  $t5, .L0043D884
/* 0043D7B0 00000000 */   nop   
.L0043D7B4:
/* 0043D7B4 8F998024 */  lw    $t9, %got(func_0043B15C)($gp)
/* 0043D7B8 02A02025 */  move  $a0, $s5
/* 0043D7BC 27A20110 */  addiu $v0, $sp, 0x110
/* 0043D7C0 2739B15C */  addiu $t9, %lo(func_0043B15C) # addiu $t9, $t9, -0x4ea4
/* 0043D7C4 0320F809 */  jalr  $t9
/* 0043D7C8 AFB5010C */   sw    $s5, 0x10c($sp)
/* 0043D7CC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043D7D0 8FB5010C */  lw    $s5, 0x10c($sp)
/* 0043D7D4 8F998640 */  lw    $t9, %call16(increasecount)($gp)
/* 0043D7D8 02A02025 */  move  $a0, $s5
/* 0043D7DC 0320F809 */  jalr  $t9
/* 0043D7E0 00000000 */   nop   
/* 0043D7E4 92B80022 */  lbu   $t8, 0x22($s5)
/* 0043D7E8 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043D7EC 57000007 */  bnezl $t8, .L0043D80C
/* 0043D7F0 96AC0006 */   lhu   $t4, 6($s5)
/* 0043D7F4 8F9983A0 */  lw    $t9, %call16(lodkillprev)($gp)
/* 0043D7F8 02A02025 */  move  $a0, $s5
/* 0043D7FC 0320F809 */  jalr  $t9
/* 0043D800 00000000 */   nop   
/* 0043D804 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043D808 96AC0006 */  lhu   $t4, 6($s5)
.L0043D80C:
/* 0043D80C 24010001 */  li    $at, 1
/* 0043D810 55810015 */  bnel  $t4, $at, .L0043D868
/* 0043D814 92AC0021 */   lbu   $t4, 0x21($s5)
/* 0043D818 93D90001 */  lbu   $t9, 1($fp)
/* 0043D81C 24010005 */  li    $at, 5
/* 0043D820 00195600 */  sll   $t2, $t9, 0x18
/* 0043D824 000A7F42 */  srl   $t7, $t2, 0x1d
/* 0043D828 51E1000F */  beql  $t7, $at, .L0043D868
/* 0043D82C 92AC0021 */   lbu   $t4, 0x21($s5)
/* 0043D830 8F99831C */  lw    $t9, %call16(appendbbvarlst)($gp)
/* 0043D834 02A02025 */  move  $a0, $s5
/* 0043D838 0320F809 */  jalr  $t9
/* 0043D83C 00000000 */   nop   
/* 0043D840 92AB0022 */  lbu   $t3, 0x22($s5)
/* 0043D844 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043D848 51600007 */  beql  $t3, $zero, .L0043D868
/* 0043D84C 92AC0021 */   lbu   $t4, 0x21($s5)
/* 0043D850 8F8D89B4 */  lw     $t5, %got(curgraphnode)($gp)
/* 0043D854 240E0001 */  li    $t6, 1
/* 0043D858 8DAD0000 */  lw    $t5, ($t5)
/* 0043D85C 8DB80028 */  lw    $t8, 0x28($t5)
/* 0043D860 A30E0008 */  sb    $t6, 8($t8)
/* 0043D864 92AC0021 */  lbu   $t4, 0x21($s5)
.L0043D868:
/* 0043D868 55801BC2 */  bnezl $t4, .L00444774
/* 0043D86C 8FBF003C */   lw    $ra, 0x3c($sp)
/* 0043D870 8F828A70 */  lw     $v0, %got(varrefs)($gp)
/* 0043D874 8C590000 */  lw    $t9, ($v0)
/* 0043D878 272A0001 */  addiu $t2, $t9, 1
/* 0043D87C 10001BBC */  b     .L00444770
/* 0043D880 AC4A0000 */   sw    $t2, ($v0)
.L0043D884:
/* 0043D884 8F998324 */  lw    $t9, %call16(bigtree)($gp)
/* 0043D888 8EA40034 */  lw    $a0, 0x34($s5)
/* 0043D88C 24050014 */  li    $a1, 20
/* 0043D890 0320F809 */  jalr  $t9
/* 0043D894 00000000 */   nop   
/* 0043D898 1440002F */  bnez  $v0, .L0043D958
/* 0043D89C 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0043D8A0 8F998328 */  lw    $t9, %call16(treekilled)($gp)
/* 0043D8A4 8EA40034 */  lw    $a0, 0x34($s5)
/* 0043D8A8 0320F809 */  jalr  $t9
/* 0043D8AC 00000000 */   nop   
/* 0043D8B0 14400029 */  bnez  $v0, .L0043D958
/* 0043D8B4 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0043D8B8 8EA50034 */  lw    $a1, 0x34($s5)
/* 0043D8BC 24010004 */  li    $at, 4
/* 0043D8C0 90AF0000 */  lbu   $t7, ($a1)
/* 0043D8C4 55E10059 */  bnel  $t7, $at, .L0043DA2C
/* 0043D8C8 8EA50034 */   lw    $a1, 0x34($s5)
/* 0043D8CC 94AB0006 */  lhu   $t3, 6($a1)
/* 0043D8D0 24010001 */  li    $at, 1
/* 0043D8D4 55610055 */  bnel  $t3, $at, .L0043DA2C
/* 0043D8D8 8EA50034 */   lw    $a1, 0x34($s5)
/* 0043D8DC 92AD0022 */  lbu   $t5, 0x22($s5)
/* 0043D8E0 11A00007 */  beqz  $t5, .L0043D900
/* 0043D8E4 00000000 */   nop   
/* 0043D8E8 8F8E8980 */  lw     $t6, %got(curblk)($gp)
/* 0043D8EC 8EB8002C */  lw    $t8, 0x2c($s5)
/* 0043D8F0 8DCE0000 */  lw    $t6, ($t6)
/* 0043D8F4 001862C2 */  srl   $t4, $t8, 0xb
/* 0043D8F8 11CC000A */  beq   $t6, $t4, .L0043D924
/* 0043D8FC 00000000 */   nop   
.L0043D900:
/* 0043D900 8F998A9C */  lw     $t9, %got(doingcopy)($gp)
/* 0043D904 93390000 */  lbu   $t9, ($t9)
/* 0043D908 17200006 */  bnez  $t9, .L0043D924
/* 0043D90C 00000000 */   nop   
/* 0043D910 8F8A8B6C */  lw     $t2, %got(curproc)($gp)
/* 0043D914 8D4A0000 */  lw    $t2, ($t2)
/* 0043D918 914F0015 */  lbu   $t7, 0x15($t2)
/* 0043D91C 11E00008 */  beqz  $t7, .L0043D940
/* 0043D920 00000000 */   nop   
.L0043D924:
/* 0043D924 8F9986E0 */  lw    $t9, %call16(has_ilod)($gp)
/* 0043D928 00A02025 */  move  $a0, $a1
/* 0043D92C 0320F809 */  jalr  $t9
/* 0043D930 00000000 */   nop   
/* 0043D934 1040003C */  beqz  $v0, .L0043DA28
/* 0043D938 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0043D93C 8EA50034 */  lw    $a1, 0x34($s5)
.L0043D940:
/* 0043D940 8F998314 */  lw    $t9, %call16(constexp)($gp)
/* 0043D944 00A02025 */  move  $a0, $a1
/* 0043D948 0320F809 */  jalr  $t9
/* 0043D94C 00000000 */   nop   
/* 0043D950 14400035 */  bnez  $v0, .L0043DA28
/* 0043D954 8FBC0034 */   lw    $gp, 0x34($sp)
.L0043D958:
/* 0043D958 8F998024 */  lw    $t9, %got(func_0043B15C)($gp)
/* 0043D95C 02A02025 */  move  $a0, $s5
/* 0043D960 27A20110 */  addiu $v0, $sp, 0x110
/* 0043D964 2739B15C */  addiu $t9, %lo(func_0043B15C) # addiu $t9, $t9, -0x4ea4
/* 0043D968 0320F809 */  jalr  $t9
/* 0043D96C AFB5010C */   sw    $s5, 0x10c($sp)
/* 0043D970 8FB5010C */  lw    $s5, 0x10c($sp)
/* 0043D974 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043D978 8EAB0038 */  lw    $t3, 0x38($s5)
/* 0043D97C A160001D */  sb    $zero, 0x1d($t3)
/* 0043D980 96AD0006 */  lhu   $t5, 6($s5)
/* 0043D984 15A0001B */  bnez  $t5, .L0043D9F4
/* 0043D988 00000000 */   nop   
/* 0043D98C 92B80022 */  lbu   $t8, 0x22($s5)
/* 0043D990 57000007 */  bnezl $t8, .L0043D9B0
/* 0043D994 92AE002E */   lbu   $t6, 0x2e($s5)
/* 0043D998 8F9983A0 */  lw    $t9, %call16(lodkillprev)($gp)
/* 0043D99C 02A02025 */  move  $a0, $s5
/* 0043D9A0 0320F809 */  jalr  $t9
/* 0043D9A4 00000000 */   nop   
/* 0043D9A8 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043D9AC 92AE002E */  lbu   $t6, 0x2e($s5)
.L0043D9B0:
/* 0043D9B0 24010005 */  li    $at, 5
/* 0043D9B4 31CC0007 */  andi  $t4, $t6, 7
/* 0043D9B8 1181000E */  beq   $t4, $at, .L0043D9F4
/* 0043D9BC 00000000 */   nop   
/* 0043D9C0 8F99831C */  lw    $t9, %call16(appendbbvarlst)($gp)
/* 0043D9C4 02A02025 */  move  $a0, $s5
/* 0043D9C8 0320F809 */  jalr  $t9
/* 0043D9CC 00000000 */   nop   
/* 0043D9D0 92B90022 */  lbu   $t9, 0x22($s5)
/* 0043D9D4 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043D9D8 13200006 */  beqz  $t9, .L0043D9F4
/* 0043D9DC 00000000 */   nop   
/* 0043D9E0 8F8F89B4 */  lw     $t7, %got(curgraphnode)($gp)
/* 0043D9E4 240A0001 */  li    $t2, 1
/* 0043D9E8 8DEF0000 */  lw    $t7, ($t7)
/* 0043D9EC 8DEB0028 */  lw    $t3, 0x28($t7)
/* 0043D9F0 A16A0008 */  sb    $t2, 8($t3)
.L0043D9F4:
/* 0043D9F4 8F998640 */  lw    $t9, %call16(increasecount)($gp)
/* 0043D9F8 02A02025 */  move  $a0, $s5
/* 0043D9FC 0320F809 */  jalr  $t9
/* 0043DA00 00000000 */   nop   
/* 0043DA04 92AD0021 */  lbu   $t5, 0x21($s5)
/* 0043DA08 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043DA0C 55A01B59 */  bnezl $t5, .L00444774
/* 0043DA10 8FBF003C */   lw    $ra, 0x3c($sp)
/* 0043DA14 8F828A70 */  lw     $v0, %got(varrefs)($gp)
/* 0043DA18 8C580000 */  lw    $t8, ($v0)
/* 0043DA1C 270E0001 */  addiu $t6, $t8, 1
/* 0043DA20 10001B53 */  b     .L00444770
/* 0043DA24 AC4E0000 */   sw    $t6, ($v0)
.L0043DA28:
/* 0043DA28 8EA50034 */  lw    $a1, 0x34($s5)
.L0043DA2C:
/* 0043DA2C AFB5010C */  sw    $s5, 0x10c($sp)
/* 0043DA30 90A30000 */  lbu   $v1, ($a1)
/* 0043DA34 00601025 */  move  $v0, $v1
/* 0043DA38 244CFFFF */  addiu $t4, $v0, -1
/* 0043DA3C 2D810008 */  sltiu $at, $t4, 8
/* 0043DA40 102000C7 */  beqz  $at, .L0043DD60
/* 0043DA44 00000000 */   nop   
/* 0043DA48 8F818044 */  lw    $at, %got(jtbl_1000C490)($gp)
/* 0043DA4C 000C6080 */  sll   $t4, $t4, 2
/* 0043DA50 002C0821 */  addu  $at, $at, $t4
/* 0043DA54 8C2CC490 */  lw    $t4, %lo(jtbl_1000C490)($at)
/* 0043DA58 019C6021 */  addu  $t4, $t4, $gp
/* 0043DA5C 01800008 */  jr    $t4
/* 0043DA60 00000000 */   nop   
.L0043DA64:
/* 0043DA64 8F998024 */  lw    $t9, %got(func_0043B15C)($gp)
/* 0043DA68 00A02025 */  move  $a0, $a1
/* 0043DA6C 27A20110 */  addiu $v0, $sp, 0x110
/* 0043DA70 2739B15C */  addiu $t9, %lo(func_0043B15C) # addiu $t9, $t9, -0x4ea4
/* 0043DA74 0320F809 */  jalr  $t9
/* 0043DA78 00000000 */   nop   
/* 0043DA7C 8FB5010C */  lw    $s5, 0x10c($sp)
/* 0043DA80 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043DA84 92A20020 */  lbu   $v0, 0x20($s5)
/* 0043DA88 28410004 */  slti  $at, $v0, 4
/* 0043DA8C 50201B39 */  beql  $at, $zero, .L00444774
/* 0043DA90 8FBF003C */   lw    $ra, 0x3c($sp)
/* 0043DA94 8F998308 */  lw    $t9, %call16(createcvtl)($gp)
/* 0043DA98 000220C0 */  sll   $a0, $v0, 3
/* 0043DA9C 92A50001 */  lbu   $a1, 1($s5)
/* 0043DAA0 0320F809 */  jalr  $t9
/* 0043DAA4 00000000 */   nop   
/* 0043DAA8 10001B31 */  b     .L00444770
/* 0043DAAC 8FBC0034 */   lw    $gp, 0x34($sp)
.L0043DAB0:
/* 0043DAB0 8F998024 */  lw    $t9, %got(func_0043B15C)($gp)
/* 0043DAB4 00A02025 */  move  $a0, $a1
/* 0043DAB8 27A20110 */  addiu $v0, $sp, 0x110
/* 0043DABC 2739B15C */  addiu $t9, %lo(func_0043B15C) # addiu $t9, $t9, -0x4ea4
/* 0043DAC0 0320F809 */  jalr  $t9
/* 0043DAC4 00000000 */   nop   
/* 0043DAC8 8FB5010C */  lw    $s5, 0x10c($sp)
/* 0043DACC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043DAD0 8EB00034 */  lw    $s0, 0x34($s5)
/* 0043DAD4 96190006 */  lhu   $t9, 6($s0)
/* 0043DAD8 272F0001 */  addiu $t7, $t9, 1
/* 0043DADC A60F0006 */  sh    $t7, 6($s0)
/* 0043DAE0 8EAA0034 */  lw    $t2, 0x34($s5)
/* 0043DAE4 92A20020 */  lbu   $v0, 0x20($s5)
/* 0043DAE8 914B0020 */  lbu   $t3, 0x20($t2)
/* 0043DAEC 004B082B */  sltu  $at, $v0, $t3
/* 0043DAF0 50201B20 */  beql  $at, $zero, .L00444774
/* 0043DAF4 8FBF003C */   lw    $ra, 0x3c($sp)
/* 0043DAF8 8F998308 */  lw    $t9, %call16(createcvtl)($gp)
/* 0043DAFC 000220C0 */  sll   $a0, $v0, 3
/* 0043DB00 92A50001 */  lbu   $a1, 1($s5)
/* 0043DB04 0320F809 */  jalr  $t9
/* 0043DB08 00000000 */   nop   
/* 0043DB0C 10001B18 */  b     .L00444770
/* 0043DB10 8FBC0034 */   lw    $gp, 0x34($sp)
.L0043DB14:
/* 0043DB14 306200FF */  andi  $v0, $v1, 0xff
/* 0043DB18 244DFFFC */  addiu $t5, $v0, -4
/* 0043DB1C 2DA10003 */  sltiu $at, $t5, 3
/* 0043DB20 10200086 */  beqz  $at, .L0043DD3C
/* 0043DB24 00000000 */   nop   
/* 0043DB28 8F818044 */  lw    $at, %got(jtbl_1000C484)($gp)
/* 0043DB2C 000D6880 */  sll   $t5, $t5, 2
/* 0043DB30 002D0821 */  addu  $at, $at, $t5
/* 0043DB34 8C2DC484 */  lw    $t5, %lo(jtbl_1000C484)($at)
/* 0043DB38 01BC6821 */  addu  $t5, $t5, $gp
/* 0043DB3C 01A00008 */  jr    $t5
/* 0043DB40 00000000 */   nop   
.L0043DB44:
/* 0043DB44 92B80020 */  lbu   $t8, 0x20($s5)
/* 0043DB48 27A20110 */  addiu $v0, $sp, 0x110
/* 0043DB4C 2B010004 */  slti  $at, $t8, 4
/* 0043DB50 50200027 */  beql  $at, $zero, .L0043DBF0
/* 0043DB54 90AF0020 */   lbu   $t7, 0x20($a1)
/* 0043DB58 94AE0006 */  lhu   $t6, 6($a1)
/* 0043DB5C 8F998024 */  lw    $t9, %got(func_0043B15C)($gp)
/* 0043DB60 AFB5010C */  sw    $s5, 0x10c($sp)
/* 0043DB64 25CC0001 */  addiu $t4, $t6, 1
/* 0043DB68 A4AC0006 */  sh    $t4, 6($a1)
/* 0043DB6C 2739B15C */  addiu $t9, %lo(func_0043B15C) # addiu $t9, $t9, -0x4ea4
/* 0043DB70 0320F809 */  jalr  $t9
/* 0043DB74 8EA40034 */   lw    $a0, 0x34($s5)
/* 0043DB78 8FB5010C */  lw    $s5, 0x10c($sp)
/* 0043DB7C 24010019 */  li    $at, 25
/* 0043DB80 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043DB84 8EB00034 */  lw    $s0, 0x34($s5)
/* 0043DB88 92030020 */  lbu   $v1, 0x20($s0)
/* 0043DB8C 14610006 */  bne   $v1, $at, .L0043DBA8
/* 0043DB90 246BFFE0 */   addiu $t3, $v1, -0x20
/* 0043DB94 92B90020 */  lbu   $t9, 0x20($s5)
/* 0043DB98 8E0A002C */  lw    $t2, 0x2c($s0)
/* 0043DB9C 001978C0 */  sll   $t7, $t9, 3
/* 0043DBA0 01EA082A */  slt   $at, $t7, $t2
/* 0043DBA4 10201AF2 */  beqz  $at, .L00444770
.L0043DBA8:
/* 0043DBA8 2D6D0020 */   sltiu $t5, $t3, 0x20
/* 0043DBAC 000DC023 */  negu  $t8, $t5
/* 0043DBB0 330E1200 */  andi  $t6, $t8, 0x1200
/* 0043DBB4 016E6004 */  sllv  $t4, $t6, $t3
/* 0043DBB8 05810005 */  bgez  $t4, .L0043DBD0
/* 0043DBBC 92A20020 */   lbu   $v0, 0x20($s5)
/* 0043DBC0 9619003C */  lhu   $t9, 0x3c($s0)
/* 0043DBC4 0059082B */  sltu  $at, $v0, $t9
/* 0043DBC8 50201AEA */  beql  $at, $zero, .L00444774
/* 0043DBCC 8FBF003C */   lw    $ra, 0x3c($sp)
.L0043DBD0:
/* 0043DBD0 8F998308 */  lw    $t9, %call16(createcvtl)($gp)
/* 0043DBD4 000220C0 */  sll   $a0, $v0, 3
/* 0043DBD8 92A50001 */  lbu   $a1, 1($s5)
/* 0043DBDC 0320F809 */  jalr  $t9
/* 0043DBE0 00000000 */   nop   
/* 0043DBE4 10001AE2 */  b     .L00444770
/* 0043DBE8 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0043DBEC 90AF0020 */  lbu   $t7, 0x20($a1)
.L0043DBF0:
/* 0043DBF0 24010001 */  li    $at, 1
/* 0043DBF4 55E10023 */  bnel  $t7, $at, .L0043DC84
/* 0043DBF8 94B90006 */   lhu   $t9, 6($a1)
/* 0043DBFC 8CAA0028 */  lw    $t2, 0x28($a1)
/* 0043DC00 24090002 */  li    $t1, 2
/* 0043DC04 914D0000 */  lbu   $t5, ($t2)
/* 0043DC08 552D001E */  bnel  $t1, $t5, .L0043DC84
/* 0043DC0C 94B90006 */   lhu   $t9, 6($a1)
/* 0043DC10 90B80001 */  lbu   $t8, 1($a1)
/* 0043DC14 3C018A80 */  lui   $at, 0x8a80
/* 0043DC18 2F0E0020 */  sltiu $t6, $t8, 0x20
/* 0043DC1C 000E5823 */  negu  $t3, $t6
/* 0043DC20 01616024 */  and   $t4, $t3, $at
/* 0043DC24 030CC804 */  sllv  $t9, $t4, $t8
/* 0043DC28 07230016 */  bgezl $t9, .L0043DC84
/* 0043DC2C 94B90006 */   lhu   $t9, 6($a1)
/* 0043DC30 8CA60024 */  lw    $a2, 0x24($a1)
/* 0043DC34 8F998024 */  lw    $t9, %got(func_0043B15C)($gp)
/* 0043DC38 27A20110 */  addiu $v0, $sp, 0x110
/* 0043DC3C 94CF0006 */  lhu   $t7, 6($a2)
/* 0043DC40 2739B15C */  addiu $t9, %lo(func_0043B15C) # addiu $t9, $t9, -0x4ea4
/* 0043DC44 25EA0001 */  addiu $t2, $t7, 1
/* 0043DC48 A4CA0006 */  sh    $t2, 6($a2)
/* 0043DC4C 8EAD0034 */  lw    $t5, 0x34($s5)
/* 0043DC50 8DA40024 */  lw    $a0, 0x24($t5)
/* 0043DC54 0320F809 */  jalr  $t9
/* 0043DC58 AFB5010C */   sw    $s5, 0x10c($sp)
/* 0043DC5C 8FB5010C */  lw    $s5, 0x10c($sp)
/* 0043DC60 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043DC64 8EAE0034 */  lw    $t6, 0x34($s5)
/* 0043DC68 8F988964 */  lw     $t8, %got(ustack)($gp)
/* 0043DC6C 8DCB0028 */  lw    $t3, 0x28($t6)
/* 0043DC70 8F180000 */  lw    $t8, ($t8)
/* 0043DC74 8D6C0020 */  lw    $t4, 0x20($t3)
/* 0043DC78 10001ABD */  b     .L00444770
/* 0043DC7C AF0C0004 */   sw    $t4, 4($t8)
/* 0043DC80 94B90006 */  lhu   $t9, 6($a1)
.L0043DC84:
/* 0043DC84 27A20110 */  addiu $v0, $sp, 0x110
/* 0043DC88 AFB5010C */  sw    $s5, 0x10c($sp)
/* 0043DC8C 272F0001 */  addiu $t7, $t9, 1
/* 0043DC90 8F998024 */  lw    $t9, %got(func_0043B15C)($gp)
/* 0043DC94 A4AF0006 */  sh    $t7, 6($a1)
/* 0043DC98 8EA40034 */  lw    $a0, 0x34($s5)
/* 0043DC9C 2739B15C */  addiu $t9, %lo(func_0043B15C) # addiu $t9, $t9, -0x4ea4
/* 0043DCA0 0320F809 */  jalr  $t9
/* 0043DCA4 00000000 */   nop   
/* 0043DCA8 10001AB1 */  b     .L00444770
/* 0043DCAC 8FBC0034 */   lw    $gp, 0x34($sp)
.L0043DCB0:
/* 0043DCB0 94AA0006 */  lhu   $t2, 6($a1)
/* 0043DCB4 8F998024 */  lw    $t9, %got(func_0043B15C)($gp)
/* 0043DCB8 27A20110 */  addiu $v0, $sp, 0x110
/* 0043DCBC 254D0001 */  addiu $t5, $t2, 1
/* 0043DCC0 A4AD0006 */  sh    $t5, 6($a1)
/* 0043DCC4 2739B15C */  addiu $t9, %lo(func_0043B15C) # addiu $t9, $t9, -0x4ea4
/* 0043DCC8 8EA40034 */  lw    $a0, 0x34($s5)
/* 0043DCCC 0320F809 */  jalr  $t9
/* 0043DCD0 AFB5010C */   sw    $s5, 0x10c($sp)
/* 0043DCD4 10001AA6 */  b     .L00444770
/* 0043DCD8 8FBC0034 */   lw    $gp, 0x34($sp)
.L0043DCDC:
/* 0043DCDC 94AE0006 */  lhu   $t6, 6($a1)
/* 0043DCE0 8F998024 */  lw    $t9, %got(func_0043B15C)($gp)
/* 0043DCE4 27A20110 */  addiu $v0, $sp, 0x110
/* 0043DCE8 25CB0001 */  addiu $t3, $t6, 1
/* 0043DCEC A4AB0006 */  sh    $t3, 6($a1)
/* 0043DCF0 2739B15C */  addiu $t9, %lo(func_0043B15C) # addiu $t9, $t9, -0x4ea4
/* 0043DCF4 8EA40034 */  lw    $a0, 0x34($s5)
/* 0043DCF8 0320F809 */  jalr  $t9
/* 0043DCFC AFB5010C */   sw    $s5, 0x10c($sp)
/* 0043DD00 8FB5010C */  lw    $s5, 0x10c($sp)
/* 0043DD04 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043DD08 8EAC0034 */  lw    $t4, 0x34($s5)
/* 0043DD0C 92A20020 */  lbu   $v0, 0x20($s5)
/* 0043DD10 91980020 */  lbu   $t8, 0x20($t4)
/* 0043DD14 0058082B */  sltu  $at, $v0, $t8
/* 0043DD18 50201A96 */  beql  $at, $zero, .L00444774
/* 0043DD1C 8FBF003C */   lw    $ra, 0x3c($sp)
/* 0043DD20 8F998308 */  lw    $t9, %call16(createcvtl)($gp)
/* 0043DD24 000220C0 */  sll   $a0, $v0, 3
/* 0043DD28 92A50001 */  lbu   $a1, 1($s5)
/* 0043DD2C 0320F809 */  jalr  $t9
/* 0043DD30 00000000 */   nop   
/* 0043DD34 10001A8E */  b     .L00444770
/* 0043DD38 8FBC0034 */   lw    $gp, 0x34($sp)
.L0043DD3C:
/* 0043DD3C 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 0043DD40 8F868044 */  lw    $a2, %got(RO_1000C479)($gp)
/* 0043DD44 24040001 */  li    $a0, 1
/* 0043DD48 240505AE */  li    $a1, 1454
/* 0043DD4C 2407000B */  li    $a3, 11
/* 0043DD50 0320F809 */  jalr  $t9
/* 0043DD54 24C6C479 */   addiu $a2, %lo(RO_1000C479) # addiu $a2, $a2, -0x3b87
/* 0043DD58 10001A85 */  b     .L00444770
/* 0043DD5C 8FBC0034 */   lw    $gp, 0x34($sp)
.L0043DD60:
/* 0043DD60 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 0043DD64 8F868044 */  lw    $a2, %got(RO_1000C46E)($gp)
/* 0043DD68 24040001 */  li    $a0, 1
/* 0043DD6C 2405059E */  li    $a1, 1438
/* 0043DD70 2407000B */  li    $a3, 11
/* 0043DD74 0320F809 */  jalr  $t9
/* 0043DD78 24C6C46E */   addiu $a2, %lo(RO_1000C46E) # addiu $a2, $a2, -0x3b92
/* 0043DD7C 10001A7C */  b     .L00444770
/* 0043DD80 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0043DD84 10001A7B */  b     .L00444774
/* 0043DD88 8FBF003C */   lw    $ra, 0x3c($sp)
.L0043DD8C:
/* 0043DD8C 93D90001 */  lbu   $t9, 1($fp)
/* 0043DD90 93AD00EA */  lbu   $t5, 0xea($sp)
/* 0043DD94 24010003 */  li    $at, 3
/* 0043DD98 00197E00 */  sll   $t7, $t9, 0x18
/* 0043DD9C 000D7740 */  sll   $t6, $t5, 0x1d
/* 0043DDA0 000E5F42 */  srl   $t3, $t6, 0x1d
/* 0043DDA4 000F5742 */  srl   $t2, $t7, 0x1d
/* 0043DDA8 014B6026 */  xor   $t4, $t2, $t3
/* 0043DDAC 31980007 */  andi  $t8, $t4, 7
/* 0043DDB0 030DC826 */  xor   $t9, $t8, $t5
/* 0043DDB4 A3B900EA */  sb    $t9, 0xea($sp)
/* 0043DDB8 8FAE00E8 */  lw    $t6, 0xe8($sp)
/* 0043DDBC 8FCF0004 */  lw    $t7, 4($fp)
/* 0043DDC0 8FCD0010 */  lw    $t5, 0x10($fp)
/* 0043DDC4 000E52C2 */  srl   $t2, $t6, 0xb
/* 0043DDC8 01EA5826 */  xor   $t3, $t7, $t2
/* 0043DDCC 000B62C0 */  sll   $t4, $t3, 0xb
/* 0043DDD0 018EC026 */  xor   $t8, $t4, $t6
/* 0043DDD4 AFB800E8 */  sw    $t8, 0xe8($sp)
/* 0043DDD8 93B900EA */  lbu   $t9, 0xea($sp)
/* 0043DDDC 330A07FF */  andi  $t2, $t8, 0x7ff
/* 0043DDE0 AFAD00E4 */  sw    $t5, 0xe4($sp)
/* 0043DDE4 332F0007 */  andi  $t7, $t9, 7
/* 0043DDE8 15E10002 */  bne   $t7, $at, .L0043DDF4
/* 0043DDEC 00000000 */   nop   
/* 0043DDF0 AFAA00E8 */  sw    $t2, 0xe8($sp)
.L0043DDF4:
/* 0043DDF4 8F8B8980 */  lw     $t3, %got(curblk)($gp)
/* 0043DDF8 8FAC00E8 */  lw    $t4, 0xe8($sp)
/* 0043DDFC 8D6B0000 */  lw    $t3, ($t3)
/* 0043DE00 000C72C2 */  srl   $t6, $t4, 0xb
/* 0043DE04 156E000C */  bne   $t3, $t6, .L0043DE38
/* 0043DE08 00000000 */   nop   
/* 0043DE0C 8F8D8A5C */  lw     $t5, %got(lang)($gp)
/* 0043DE10 3C012A00 */  lui   $at, 0x2a00
/* 0043DE14 91AD0000 */  lbu   $t5, ($t5)
/* 0043DE18 2DB90020 */  sltiu $t9, $t5, 0x20
/* 0043DE1C 00197823 */  negu  $t7, $t9
/* 0043DE20 01E1C024 */  and   $t8, $t7, $at
/* 0043DE24 01B85004 */  sllv  $t2, $t8, $t5
/* 0043DE28 05410003 */  bgez  $t2, .L0043DE38
/* 0043DE2C 00000000 */   nop   
/* 0043DE30 8F818B40 */  lw     $at, %got(can_elim_tail)($gp)
/* 0043DE34 A0200000 */  sb    $zero, ($at)
.L0043DE38:
/* 0043DE38 8F8C8A5C */  lw     $t4, %got(lang)($gp)
/* 0043DE3C 24010003 */  li    $at, 3
/* 0043DE40 918C0000 */  lbu   $t4, ($t4)
/* 0043DE44 55810016 */  bnel  $t4, $at, .L0043DEA0
/* 0043DE48 27AF00E4 */   addiu $t7, $sp, 0xe4
/* 0043DE4C 8FCB0008 */  lw    $t3, 8($fp)
/* 0043DE50 93AA00EA */  lbu   $t2, 0xea($sp)
/* 0043DE54 24010001 */  li    $at, 1
/* 0043DE58 256E0020 */  addiu $t6, $t3, 0x20
/* 0043DE5C 2DD90020 */  sltiu $t9, $t6, 0x20
/* 0043DE60 00197823 */  negu  $t7, $t9
/* 0043DE64 31F80001 */  andi  $t8, $t7, 1
/* 0043DE68 01D86804 */  sllv  $t5, $t8, $t6
/* 0043DE6C 05A1000B */  bgez  $t5, .L0043DE9C
/* 0043DE70 314C0007 */   andi  $t4, $t2, 7
/* 0043DE74 15810007 */  bne   $t4, $at, .L0043DE94
/* 0043DE78 3C037FFF */   lui   $v1, 0x7fff
/* 0043DE7C 8FC3000C */  lw    $v1, 0xc($fp)
/* 0043DE80 240BFFFC */  li    $t3, -4
/* 0043DE84 0163C823 */  subu  $t9, $t3, $v1
/* 0043DE88 AFD90008 */  sw    $t9, 8($fp)
/* 0043DE8C 10000003 */  b     .L0043DE9C
/* 0043DE90 AFA300E4 */   sw    $v1, 0xe4($sp)
.L0043DE94:
/* 0043DE94 3463FFFF */  ori   $v1, $v1, 0xffff
/* 0043DE98 AFC30008 */  sw    $v1, 8($fp)
.L0043DE9C:
/* 0043DE9C 27AF00E4 */  addiu $t7, $sp, 0xe4
.L0043DEA0:
/* 0043DEA0 8DE40000 */  lw    $a0, ($t7)
/* 0043DEA4 8F99864C */  lw    $t9, %call16(isvarhash)($gp)
/* 0043DEA8 AFA40000 */  sw    $a0, ($sp)
/* 0043DEAC 8DE50004 */  lw    $a1, 4($t7)
/* 0043DEB0 0320F809 */  jalr  $t9
/* 0043DEB4 AFA50004 */   sw    $a1, 4($sp)
/* 0043DEB8 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043DEBC 3044FFFF */  andi  $a0, $v0, 0xffff
/* 0043DEC0 27A20110 */  addiu $v0, $sp, 0x110
/* 0043DEC4 8F998024 */  lw    $t9, %got(func_0043B504)($gp)
/* 0043DEC8 2739B504 */  addiu $t9, %lo(func_0043B504) # addiu $t9, $t9, -0x4afc
/* 0043DECC 0320F809 */  jalr  $t9
/* 0043DED0 00000000 */   nop   
/* 0043DED4 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043DED8 0040A825 */  move  $s5, $v0
/* 0043DEDC 8F8D8B20 */  lw     $t5, %got(outofmem)($gp)
/* 0043DEE0 91AD0000 */  lbu   $t5, ($t5)
/* 0043DEE4 55A01A23 */  bnezl $t5, .L00444774
/* 0043DEE8 8FBF003C */   lw    $ra, 0x3c($sp)
/* 0043DEEC 93C70000 */  lbu   $a3, ($fp)
/* 0043DEF0 24100032 */  li    $s0, 50
/* 0043DEF4 5607001E */  bnel  $s0, $a3, .L0043DF70
/* 0043DEF8 92AD0000 */   lbu   $t5, ($s5)
/* 0043DEFC 8F938964 */  lw     $s3, %got(ustack)($gp)
/* 0043DF00 24010003 */  li    $at, 3
/* 0043DF04 240A0006 */  li    $t2, 6
/* 0043DF08 8E730000 */  lw    $s3, ($s3)
/* 0043DF0C 240C00C8 */  li    $t4, 200
/* 0043DF10 8E710000 */  lw    $s1, ($s3)
/* 0043DF14 92220000 */  lbu   $v0, ($s1)
/* 0043DF18 5441000C */  bnel  $v0, $at, .L0043DF4C
/* 0043DF1C 004A02B6 */   tne   $v0, $t2, 0xa
/* 0043DF20 8F998024 */  lw    $t9, %got(func_0043CBFC)($gp)
/* 0043DF24 AFB5010C */  sw    $s5, 0x10c($sp)
/* 0043DF28 02602025 */  move  $a0, $s3
/* 0043DF2C 2739CBFC */  addiu $t9, %lo(func_0043CBFC) # addiu $t9, $t9, -0x3404
/* 0043DF30 0320F809 */  jalr  $t9
/* 0043DF34 27A20110 */   addiu $v0, $sp, 0x110
/* 0043DF38 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043DF3C 93C70000 */  lbu   $a3, ($fp)
/* 0043DF40 1000000A */  b     .L0043DF6C
/* 0043DF44 8FB5010C */   lw    $s5, 0x10c($sp)
/* 0043DF48 004A02B6 */  tne   $v0, $t2, 0xa
.L0043DF4C:
/* 0043DF4C A22C002F */  sb    $t4, 0x2f($s1)
/* 0043DF50 8E790000 */  lw    $t9, ($s3)
/* 0043DF54 240B0001 */  li    $t3, 1
/* 0043DF58 240F0001 */  li    $t7, 1
/* 0043DF5C A32B0022 */  sb    $t3, 0x22($t9)
/* 0043DF60 8E780000 */  lw    $t8, ($s3)
/* 0043DF64 8F0E0018 */  lw    $t6, 0x18($t8)
/* 0043DF68 A1CF0008 */  sb    $t7, 8($t6)
.L0043DF6C:
/* 0043DF6C 92AD0000 */  lbu   $t5, ($s5)
.L0043DF70:
/* 0043DF70 27AB00E4 */  addiu $t3, $sp, 0xe4
/* 0043DF74 15A00027 */  bnez  $t5, .L0043E014
/* 0043DF78 00000000 */   nop   
/* 0043DF7C 16E70004 */  bne   $s7, $a3, .L0043DF90
/* 0043DF80 240C0005 */   li    $t4, 5
/* 0043DF84 240A0001 */  li    $t2, 1
/* 0043DF88 10000002 */  b     .L0043DF94
/* 0043DF8C A2AA0000 */   sb    $t2, ($s5)
.L0043DF90:
/* 0043DF90 A2AC0000 */  sb    $t4, ($s5)
.L0043DF94:
/* 0043DF94 A2A00001 */  sb    $zero, 1($s5)
/* 0043DF98 A6A00006 */  sh    $zero, 6($s5)
/* 0043DF9C 8D780000 */  lw    $t8, ($t3)
/* 0043DFA0 8FCF0008 */  lw    $t7, 8($fp)
/* 0043DFA4 8FA400E8 */  lw    $a0, 0xe8($sp)
/* 0043DFA8 AEB8002C */  sw    $t8, 0x2c($s5)
/* 0043DFAC 8D790004 */  lw    $t9, 4($t3)
/* 0043DFB0 AEAF0024 */  sw    $t7, 0x24($s5)
/* 0043DFB4 000422C2 */  srl   $a0, $a0, 0xb
/* 0043DFB8 AEB90030 */  sw    $t9, 0x30($s5)
/* 0043DFBC 8F998660 */  lw    $t9, %call16(blktolev)($gp)
/* 0043DFC0 0320F809 */  jalr  $t9
/* 0043DFC4 00000000 */   nop   
/* 0043DFC8 93C70000 */  lbu   $a3, ($fp)
/* 0043DFCC 8FCE000C */  lw    $t6, 0xc($fp)
/* 0043DFD0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043DFD4 AEA20028 */  sw    $v0, 0x28($s5)
/* 0043DFD8 AEA00018 */  sw    $zero, 0x18($s5)
/* 0043DFDC 1607000B */  bne   $s0, $a3, .L0043E00C
/* 0043DFE0 AEAE0020 */   sw    $t6, 0x20($s5)
/* 0043DFE4 8F8D8964 */  lw     $t5, %got(ustack)($gp)
/* 0043DFE8 240C0001 */  li    $t4, 1
/* 0043DFEC 8DAD0000 */  lw    $t5, ($t5)
/* 0043DFF0 8DAA0000 */  lw    $t2, ($t5)
/* 0043DFF4 A6AC0006 */  sh    $t4, 6($s5)
/* 0043DFF8 A2A00004 */  sb    $zero, 4($s5)
/* 0043DFFC AEA00038 */  sw    $zero, 0x38($s5)
/* 0043E000 A2A00005 */  sb    $zero, 5($s5)
/* 0043E004 1000000C */  b     .L0043E038
/* 0043E008 AEAA0034 */   sw    $t2, 0x34($s5)
.L0043E00C:
/* 0043E00C 1000000A */  b     .L0043E038
/* 0043E010 AEA00034 */   sw    $zero, 0x34($s5)
.L0043E014:
/* 0043E014 16070008 */  bne   $s0, $a3, .L0043E038
/* 0043E018 00000000 */   nop   
/* 0043E01C 8F998640 */  lw    $t9, %call16(increasecount)($gp)
/* 0043E020 02A02025 */  move  $a0, $s5
/* 0043E024 0320F809 */  jalr  $t9
/* 0043E028 00000000 */   nop   
/* 0043E02C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043E030 8F878DA4 */  lw     $a3, %got(u)($gp)
/* 0043E034 90E70000 */  lbu   $a3, ($a3)
.L0043E038:
/* 0043E038 16070005 */  bne   $s0, $a3, .L0043E050
/* 0043E03C 00000000 */   nop   
/* 0043E040 8F8B8964 */  lw     $t3, %got(ustack)($gp)
/* 0043E044 8D6B0000 */  lw    $t3, ($t3)
/* 0043E048 100019C9 */  b     .L00444770
/* 0043E04C AD750000 */   sw    $s5, ($t3)
.L0043E050:
/* 0043E050 8F998024 */  lw    $t9, %got(func_0043B15C)($gp)
/* 0043E054 02A02025 */  move  $a0, $s5
/* 0043E058 27A20110 */  addiu $v0, $sp, 0x110
/* 0043E05C 2739B15C */  addiu $t9, %lo(func_0043B15C) # addiu $t9, $t9, -0x4ea4
/* 0043E060 0320F809 */  jalr  $t9
/* 0043E064 AFB5010C */   sw    $s5, 0x10c($sp)
/* 0043E068 100019C1 */  b     .L00444770
/* 0043E06C 8FBC0034 */   lw    $gp, 0x34($sp)
.L0043E070:
/* 0043E070 93D00001 */  lbu   $s0, 1($fp)
/* 0043E074 3C010280 */  lui   $at, 0x280
/* 0043E078 3210001F */  andi  $s0, $s0, 0x1f
/* 0043E07C 2E190020 */  sltiu $t9, $s0, 0x20
/* 0043E080 0019C023 */  negu  $t8, $t9
/* 0043E084 03017824 */  and   $t7, $t8, $at
/* 0043E088 020F7004 */  sllv  $t6, $t7, $s0
/* 0043E08C 05C3001A */  bgezl $t6, .L0043E0F8
/* 0043E090 93D00001 */   lbu   $s0, 1($fp)
/* 0043E094 8F99865C */  lw    $t9, %call16(sizeoftyp)($gp)
/* 0043E098 02002025 */  move  $a0, $s0
/* 0043E09C 0320F809 */  jalr  $t9
/* 0043E0A0 00000000 */   nop   
/* 0043E0A4 8FC80008 */  lw    $t0, 8($fp)
/* 0043E0A8 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043E0AC 0102082A */  slt   $at, $t0, $v0
/* 0043E0B0 10200010 */  beqz  $at, .L0043E0F4
/* 0043E0B4 000828C0 */   sll   $a1, $t0, 3
/* 0043E0B8 8F9986A8 */  lw    $t9, %call16(cutbits)($gp)
/* 0043E0BC 93C60001 */  lbu   $a2, 1($fp)
/* 0043E0C0 8FC40010 */  lw    $a0, 0x10($fp)
/* 0043E0C4 0320F809 */  jalr  $t9
/* 0043E0C8 30C6001F */   andi  $a2, $a2, 0x1f
/* 0043E0CC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043E0D0 AFC20010 */  sw    $v0, 0x10($fp)
/* 0043E0D4 93C40001 */  lbu   $a0, 1($fp)
/* 0043E0D8 8F99865C */  lw    $t9, %call16(sizeoftyp)($gp)
/* 0043E0DC 3084001F */  andi  $a0, $a0, 0x1f
/* 0043E0E0 0320F809 */  jalr  $t9
/* 0043E0E4 00000000 */   nop   
/* 0043E0E8 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043E0EC 10000029 */  b     .L0043E194
/* 0043E0F0 AFC20008 */   sw    $v0, 8($fp)
.L0043E0F4:
/* 0043E0F4 93D00001 */  lbu   $s0, 1($fp)
.L0043E0F8:
/* 0043E0F8 3C010500 */  lui   $at, 0x500
/* 0043E0FC 3210001F */  andi  $s0, $s0, 0x1f
/* 0043E100 2E0D0020 */  sltiu $t5, $s0, 0x20
/* 0043E104 000D5023 */  negu  $t2, $t5
/* 0043E108 01416024 */  and   $t4, $t2, $at
/* 0043E10C 020C5804 */  sllv  $t3, $t4, $s0
/* 0043E110 05630021 */  bgezl $t3, .L0043E198
/* 0043E114 93D00001 */   lbu   $s0, 1($fp)
/* 0043E118 8F99865C */  lw    $t9, %call16(sizeoftyp)($gp)
/* 0043E11C 02002025 */  move  $a0, $s0
/* 0043E120 0320F809 */  jalr  $t9
/* 0043E124 00000000 */   nop   
/* 0043E128 8FC80008 */  lw    $t0, 8($fp)
/* 0043E12C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043E130 0102082A */  slt   $at, $t0, $v0
/* 0043E134 10200017 */  beqz  $at, .L0043E194
/* 0043E138 01002825 */   move  $a1, $t0
/* 0043E13C 8F9980A8 */  lw    $t9, %call16(__ll_mul)($gp)
/* 0043E140 000827C3 */  sra   $a0, $t0, 0x1f
/* 0043E144 24060000 */  li    $a2, 0
/* 0043E148 0320F809 */  jalr  $t9
/* 0043E14C 24070008 */   li    $a3, 8
/* 0043E150 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043E154 93C70001 */  lbu   $a3, 1($fp)
/* 0043E158 8FC40010 */  lw    $a0, 0x10($fp)
/* 0043E15C 8F9986AC */  lw    $t9, %call16(cutbits64)($gp)
/* 0043E160 8FC50014 */  lw    $a1, 0x14($fp)
/* 0043E164 00603025 */  move  $a2, $v1
/* 0043E168 0320F809 */  jalr  $t9
/* 0043E16C 30E7001F */   andi  $a3, $a3, 0x1f
/* 0043E170 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043E174 AFC20010 */  sw    $v0, 0x10($fp)
/* 0043E178 AFC30014 */  sw    $v1, 0x14($fp)
/* 0043E17C 8F99865C */  lw    $t9, %call16(sizeoftyp)($gp)
/* 0043E180 93C40001 */  lbu   $a0, 1($fp)
/* 0043E184 0320F809 */  jalr  $t9
/* 0043E188 3084001F */   andi  $a0, $a0, 0x1f
/* 0043E18C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043E190 AFC20008 */  sw    $v0, 8($fp)
.L0043E194:
/* 0043E194 93D00001 */  lbu   $s0, 1($fp)
.L0043E198:
/* 0043E198 3C01BAA0 */  lui   $at, 0xbaa0
/* 0043E19C 3210001F */  andi  $s0, $s0, 0x1f
/* 0043E1A0 2E190020 */  sltiu $t9, $s0, 0x20
/* 0043E1A4 0019C023 */  negu  $t8, $t9
/* 0043E1A8 03017824 */  and   $t7, $t8, $at
/* 0043E1AC 020F7004 */  sllv  $t6, $t7, $s0
/* 0043E1B0 05C10008 */  bgez  $t6, .L0043E1D4
/* 0043E1B4 2E0D0020 */   sltiu $t5, $s0, 0x20
/* 0043E1B8 8F998644 */  lw    $t9, %call16(isconsthash)($gp)
/* 0043E1BC 8FC40010 */  lw    $a0, 0x10($fp)
/* 0043E1C0 0320F809 */  jalr  $t9
/* 0043E1C4 00000000 */   nop   
/* 0043E1C8 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043E1CC 10000014 */  b     .L0043E220
/* 0043E1D0 3044FFFF */   andi  $a0, $v0, 0xffff
.L0043E1D4:
/* 0043E1D4 000D5023 */  negu  $t2, $t5
/* 0043E1D8 3C010500 */  lui   $at, 0x500
/* 0043E1DC 01416024 */  and   $t4, $t2, $at
/* 0043E1E0 020C5804 */  sllv  $t3, $t4, $s0
/* 0043E1E4 05610008 */  bgez  $t3, .L0043E208
/* 0043E1E8 00000000 */   nop   
/* 0043E1EC 8F998644 */  lw    $t9, %call16(isconsthash)($gp)
/* 0043E1F0 8FC40014 */  lw    $a0, 0x14($fp)
/* 0043E1F4 0320F809 */  jalr  $t9
/* 0043E1F8 00000000 */   nop   
/* 0043E1FC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043E200 10000007 */  b     .L0043E220
/* 0043E204 3044FFFF */   andi  $a0, $v0, 0xffff
.L0043E208:
/* 0043E208 8F998648 */  lw    $t9, %call16(realhash)($gp)
/* 0043E20C 8FC40010 */  lw    $a0, 0x10($fp)
/* 0043E210 0320F809 */  jalr  $t9
/* 0043E214 00000000 */   nop   
/* 0043E218 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043E21C 3044FFFF */  andi  $a0, $v0, 0xffff
.L0043E220:
/* 0043E220 8F998024 */  lw    $t9, %got(func_0043B504)($gp)
/* 0043E224 27A20110 */  addiu $v0, $sp, 0x110
/* 0043E228 2739B504 */  addiu $t9, %lo(func_0043B504) # addiu $t9, $t9, -0x4afc
/* 0043E22C 0320F809 */  jalr  $t9
/* 0043E230 00000000 */   nop   
/* 0043E234 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043E238 0040A825 */  move  $s5, $v0
/* 0043E23C 8F998B20 */  lw     $t9, %got(outofmem)($gp)
/* 0043E240 93390000 */  lbu   $t9, ($t9)
/* 0043E244 5720194B */  bnezl $t9, .L00444774
/* 0043E248 8FBF003C */   lw    $ra, 0x3c($sp)
/* 0043E24C 90580000 */  lbu   $t8, ($v0)
/* 0043E250 24090002 */  li    $t1, 2
/* 0043E254 1700006E */  bnez  $t8, .L0043E410
/* 0043E258 00000000 */   nop   
/* 0043E25C A0490000 */  sb    $t1, ($v0)
/* 0043E260 93D00001 */  lbu   $s0, 1($fp)
/* 0043E264 3C01BAA0 */  lui   $at, 0xbaa0
/* 0043E268 A4400006 */  sh    $zero, 6($v0)
/* 0043E26C 3210001F */  andi  $s0, $s0, 0x1f
/* 0043E270 2E0F0020 */  sltiu $t7, $s0, 0x20
/* 0043E274 000F7023 */  negu  $t6, $t7
/* 0043E278 01C16824 */  and   $t5, $t6, $at
/* 0043E27C 020D5004 */  sllv  $t2, $t5, $s0
/* 0043E280 05410004 */  bgez  $t2, .L0043E294
/* 0043E284 A0500001 */   sb    $s0, 1($v0)
/* 0043E288 8FCC0010 */  lw    $t4, 0x10($fp)
/* 0043E28C 1000005D */  b     .L0043E404
/* 0043E290 AC4C0020 */   sw    $t4, 0x20($v0)
.L0043E294:
/* 0043E294 2E0B0020 */  sltiu $t3, $s0, 0x20
/* 0043E298 000BC823 */  negu  $t9, $t3
/* 0043E29C 3C010500 */  lui   $at, 0x500
/* 0043E2A0 0321C024 */  and   $t8, $t9, $at
/* 0043E2A4 02187804 */  sllv  $t7, $t8, $s0
/* 0043E2A8 05E10006 */  bgez  $t7, .L0043E2C4
/* 0043E2AC 00000000 */   nop   
/* 0043E2B0 8FCE0010 */  lw    $t6, 0x10($fp)
/* 0043E2B4 8FCF0014 */  lw    $t7, 0x14($fp)
/* 0043E2B8 AC4E0020 */  sw    $t6, 0x20($v0)
/* 0043E2BC 10000051 */  b     .L0043E404
/* 0043E2C0 AC4F0024 */   sw    $t7, 0x24($v0)
.L0043E2C4:
/* 0043E2C4 8F868994 */  lw     $a2, %got(realdispmod)($gp)
/* 0043E2C8 8FD60010 */  lw    $s6, 0x10($fp)
/* 0043E2CC 90C60000 */  lbu   $a2, ($a2)
/* 0043E2D0 00D63821 */  addu  $a3, $a2, $s6
/* 0043E2D4 28E10100 */  slti  $at, $a3, 0x100
/* 0043E2D8 14200016 */  bnez  $at, .L0043E334
/* 0043E2DC 00000000 */   nop   
/* 0043E2E0 8F8D8990 */  lw     $t5, %got(realdispdiv)($gp)
/* 0043E2E4 8F818990 */  lw     $at, %got(realdispdiv)($gp)
/* 0043E2E8 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 0043E2EC 8DAD0000 */  lw    $t5, ($t5)
/* 0043E2F0 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 0043E2F4 24040104 */  li    $a0, 260
/* 0043E2F8 25AA0001 */  addiu $t2, $t5, 1
/* 0043E2FC AC2A0000 */  sw    $t2, ($at)
/* 0043E300 8F818994 */  lw     $at, %got(realdispmod)($gp)
/* 0043E304 0320F809 */  jalr  $t9
/* 0043E308 A0200000 */   sb    $zero, ($at)
/* 0043E30C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043E310 8F92898C */  lw     $s2, %got(currealpool)($gp)
/* 0043E314 8F868994 */  lw     $a2, %got(realdispmod)($gp)
/* 0043E318 8E4C0000 */  lw    $t4, ($s2)
/* 0043E31C AD820100 */  sw    $v0, 0x100($t4)
/* 0043E320 AE420000 */  sw    $v0, ($s2)
/* 0043E324 AC400100 */  sw    $zero, 0x100($v0)
/* 0043E328 8FD60010 */  lw    $s6, 0x10($fp)
/* 0043E32C 90C60000 */  lbu   $a2, ($a2)
/* 0043E330 00D63821 */  addu  $a3, $a2, $s6
.L0043E334:
/* 0043E334 8F92898C */  lw     $s2, %got(currealpool)($gp)
/* 0043E338 02C0B825 */  move  $s7, $s6
/* 0043E33C 1AC00023 */  blez  $s6, .L0043E3CC
/* 0043E340 8E450000 */   lw    $a1, ($s2)
/* 0043E344 26F70001 */  addiu $s7, $s7, 1
/* 0043E348 26E4FFFF */  addiu $a0, $s7, -1
/* 0043E34C 30840003 */  andi  $a0, $a0, 3
/* 0043E350 1080000E */  beqz  $a0, .L0043E38C
/* 0043E354 24110001 */   li    $s1, 1
/* 0043E358 8F998950 */  lw     $t9, %got(ustrptr)($gp)
/* 0043E35C 24820001 */  addiu $v0, $a0, 1
/* 0043E360 00A61821 */  addu  $v1, $a1, $a2
/* 0043E364 8F390000 */  lw    $t9, ($t9)
/* 0043E368 03318021 */  addu  $s0, $t9, $s1
.L0043E36C:
/* 0043E36C 9218FFFF */  lbu   $t8, -1($s0)
/* 0043E370 00717021 */  addu  $t6, $v1, $s1
/* 0043E374 26310001 */  addiu $s1, $s1, 1
/* 0043E378 26100001 */  addiu $s0, $s0, 1
/* 0043E37C 1451FFFB */  bne   $v0, $s1, .L0043E36C
/* 0043E380 A1D8FFFF */   sb    $t8, -1($t6)
/* 0043E384 12370011 */  beq   $s1, $s7, .L0043E3CC
/* 0043E388 00000000 */   nop   
.L0043E38C:
/* 0043E38C 8F8F8950 */  lw     $t7, %got(ustrptr)($gp)
/* 0043E390 00A61821 */  addu  $v1, $a1, $a2
/* 0043E394 8DEF0000 */  lw    $t7, ($t7)
/* 0043E398 01F18021 */  addu  $s0, $t7, $s1
.L0043E39C:
/* 0043E39C 920DFFFF */  lbu   $t5, -1($s0)
/* 0043E3A0 00711021 */  addu  $v0, $v1, $s1
/* 0043E3A4 26310004 */  addiu $s1, $s1, 4
/* 0043E3A8 A04DFFFF */  sb    $t5, -1($v0)
/* 0043E3AC 920A0000 */  lbu   $t2, ($s0)
/* 0043E3B0 26100004 */  addiu $s0, $s0, 4
/* 0043E3B4 A04A0000 */  sb    $t2, ($v0)
/* 0043E3B8 920CFFFD */  lbu   $t4, -3($s0)
/* 0043E3BC A04C0001 */  sb    $t4, 1($v0)
/* 0043E3C0 920BFFFE */  lbu   $t3, -2($s0)
/* 0043E3C4 1637FFF5 */  bne   $s1, $s7, .L0043E39C
/* 0043E3C8 A04B0002 */   sb    $t3, 2($v0)
.L0043E3CC:
/* 0043E3CC 8F998990 */  lw     $t9, %got(realdispdiv)($gp)
/* 0043E3D0 8F818994 */  lw     $at, %got(realdispmod)($gp)
/* 0043E3D4 02A02025 */  move  $a0, $s5
/* 0043E3D8 8F390000 */  lw    $t9, ($t9)
/* 0043E3DC A6B60022 */  sh    $s6, 0x22($s5)
/* 0043E3E0 26A50030 */  addiu $a1, $s5, 0x30
/* 0043E3E4 0019C200 */  sll   $t8, $t9, 8
/* 0043E3E8 8F998700 */  lw    $t9, %call16(getfloatval)($gp)
/* 0043E3EC 03067021 */  addu  $t6, $t8, $a2
/* 0043E3F0 A6AE0020 */  sh    $t6, 0x20($s5)
/* 0043E3F4 0320F809 */  jalr  $t9
/* 0043E3F8 A0270000 */   sb    $a3, ($at)
/* 0043E3FC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043E400 AEA2002C */  sw    $v0, 0x2c($s5)
.L0043E404:
/* 0043E404 8FCF0008 */  lw    $t7, 8($fp)
/* 0043E408 AEA00018 */  sw    $zero, 0x18($s5)
/* 0043E40C AEAF0028 */  sw    $t7, 0x28($s5)
.L0043E410:
/* 0043E410 8F998024 */  lw    $t9, %got(func_0043B15C)($gp)
/* 0043E414 02A02025 */  move  $a0, $s5
/* 0043E418 27A20110 */  addiu $v0, $sp, 0x110
/* 0043E41C 2739B15C */  addiu $t9, %lo(func_0043B15C) # addiu $t9, $t9, -0x4ea4
/* 0043E420 0320F809 */  jalr  $t9
/* 0043E424 AFB5010C */   sw    $s5, 0x10c($sp)
/* 0043E428 100018D1 */  b     .L00444770
/* 0043E42C 8FBC0034 */   lw    $gp, 0x34($sp)
.L0043E430:
/* 0043E430 8F998644 */  lw    $t9, %call16(isconsthash)($gp)
/* 0043E434 8FC40004 */  lw    $a0, 4($fp)
/* 0043E438 0320F809 */  jalr  $t9
/* 0043E43C 00000000 */   nop   
/* 0043E440 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043E444 3044FFFF */  andi  $a0, $v0, 0xffff
/* 0043E448 27A20110 */  addiu $v0, $sp, 0x110
/* 0043E44C 8F998024 */  lw    $t9, %got(func_0043B504)($gp)
/* 0043E450 2739B504 */  addiu $t9, %lo(func_0043B504) # addiu $t9, $t9, -0x4afc
/* 0043E454 0320F809 */  jalr  $t9
/* 0043E458 00000000 */   nop   
/* 0043E45C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043E460 0040A825 */  move  $s5, $v0
/* 0043E464 8F8D8B20 */  lw     $t5, %got(outofmem)($gp)
/* 0043E468 91AD0000 */  lbu   $t5, ($t5)
/* 0043E46C 55A018C1 */  bnezl $t5, .L00444774
/* 0043E470 8FBF003C */   lw    $ra, 0x3c($sp)
/* 0043E474 904A0000 */  lbu   $t2, ($v0)
/* 0043E478 24040008 */  li    $a0, 8
/* 0043E47C 1540000B */  bnez  $t2, .L0043E4AC
/* 0043E480 00000000 */   nop   
/* 0043E484 A0440000 */  sb    $a0, ($v0)
/* 0043E488 93CC0001 */  lbu   $t4, 1($fp)
/* 0043E48C 318B001F */  andi  $t3, $t4, 0x1f
/* 0043E490 A04B0001 */  sb    $t3, 1($v0)
/* 0043E494 8FD90004 */  lw    $t9, 4($fp)
/* 0043E498 A4400006 */  sh    $zero, 6($v0)
/* 0043E49C A4590020 */  sh    $t9, 0x20($v0)
/* 0043E4A0 8FD80008 */  lw    $t8, 8($fp)
/* 0043E4A4 AC400018 */  sw    $zero, 0x18($v0)
/* 0043E4A8 AC580024 */  sw    $t8, 0x24($v0)
.L0043E4AC:
/* 0043E4AC 8F998024 */  lw    $t9, %got(func_0043B15C)($gp)
/* 0043E4B0 02A02025 */  move  $a0, $s5
/* 0043E4B4 27A20110 */  addiu $v0, $sp, 0x110
/* 0043E4B8 2739B15C */  addiu $t9, %lo(func_0043B15C) # addiu $t9, $t9, -0x4ea4
/* 0043E4BC 0320F809 */  jalr  $t9
/* 0043E4C0 AFB5010C */   sw    $s5, 0x10c($sp)
/* 0043E4C4 100018AA */  b     .L00444770
/* 0043E4C8 8FBC0034 */   lw    $gp, 0x34($sp)
.L0043E4CC:
/* 0043E4CC 8F938964 */  lw     $s3, %got(ustack)($gp)
/* 0043E4D0 8F818964 */  lw     $at, %got(ustack)($gp)
/* 0043E4D4 2CED0080 */  sltiu $t5, $a3, 0x80
/* 0043E4D8 8E730000 */  lw    $s3, ($s3)
/* 0043E4DC 00009025 */  move  $s2, $zero
/* 0043E4E0 2417005B */  li    $s7, 91
/* 0043E4E4 8E6F000C */  lw    $t7, 0xc($s3)
/* 0043E4E8 8E6E0000 */  lw    $t6, ($s3)
/* 0043E4EC 8E740004 */  lw    $s4, 4($s3)
/* 0043E4F0 8F938964 */  lw     $s3, %got(ustack)($gp)
/* 0043E4F4 AC2F0000 */  sw    $t7, ($at)
/* 0043E4F8 AFAE00F4 */  sw    $t6, 0xf4($sp)
/* 0043E4FC 8E730000 */  lw    $s3, ($s3)
/* 0043E500 8E650004 */  lw    $a1, 4($s3)
/* 0043E504 8E760000 */  lw    $s6, ($s3)
/* 0043E508 11A00009 */  beqz  $t5, .L0043E530
/* 0043E50C 00A0A825 */   move  $s5, $a1
/* 0043E510 8F8B8044 */  lw    $t3, %got(D_10010900)($gp)
/* 0043E514 00075143 */  sra   $t2, $a3, 5
/* 0043E518 000A6080 */  sll   $t4, $t2, 2
/* 0043E51C 256B0900 */  addiu $t3, %lo(D_10010900) # addiu $t3, $t3, 0x900
/* 0043E520 016CC821 */  addu  $t9, $t3, $t4
/* 0043E524 8F380000 */  lw    $t8, ($t9)
/* 0043E528 00F87004 */  sllv  $t6, $t8, $a3
/* 0043E52C 29CD0000 */  slti  $t5, $t6, 0
.L0043E530:
/* 0043E530 11A0004E */  beqz  $t5, .L0043E66C
/* 0043E534 00000000 */   nop   
/* 0043E538 93D00001 */  lbu   $s0, 1($fp)
/* 0043E53C 3C018A80 */  lui   $at, 0x8a80
/* 0043E540 8FB800F4 */  lw    $t8, 0xf4($sp)
/* 0043E544 3210001F */  andi  $s0, $s0, 0x1f
/* 0043E548 2E0A0020 */  sltiu $t2, $s0, 0x20
/* 0043E54C 000A5823 */  negu  $t3, $t2
/* 0043E550 01616024 */  and   $t4, $t3, $at
/* 0043E554 020CC804 */  sllv  $t9, $t4, $s0
/* 0043E558 07210044 */  bgez  $t9, .L0043E66C
/* 0043E55C 00000000 */   nop   
/* 0043E560 93020000 */  lbu   $v0, ($t8)
/* 0043E564 24090002 */  li    $t1, 2
/* 0043E568 5522000A */  bnel  $t1, $v0, .L0043E594
/* 0043E56C 92CC0000 */   lbu   $t4, ($s6)
/* 0043E570 930E0001 */  lbu   $t6, 1($t8)
/* 0043E574 3C013020 */  lui   $at, 0x3020
/* 0043E578 2DCF0020 */  sltiu $t7, $t6, 0x20
/* 0043E57C 000F6823 */  negu  $t5, $t7
/* 0043E580 01A15024 */  and   $t2, $t5, $at
/* 0043E584 01CA5804 */  sllv  $t3, $t2, $t6
/* 0043E588 0563000D */  bgezl $t3, .L0043E5C0
/* 0043E58C 97CE0002 */   lhu   $t6, 2($fp)
/* 0043E590 92CC0000 */  lbu   $t4, ($s6)
.L0043E594:
/* 0043E594 152C0035 */  bne   $t1, $t4, .L0043E66C
/* 0043E598 00000000 */   nop   
/* 0043E59C 92D90001 */  lbu   $t9, 1($s6)
/* 0043E5A0 3C013020 */  lui   $at, 0x3020
/* 0043E5A4 2F380020 */  sltiu $t8, $t9, 0x20
/* 0043E5A8 00187823 */  negu  $t7, $t8
/* 0043E5AC 01E16824 */  and   $t5, $t7, $at
/* 0043E5B0 032D5004 */  sllv  $t2, $t5, $t9
/* 0043E5B4 0540002D */  bltz  $t2, .L0043E66C
/* 0043E5B8 00000000 */   nop   
/* 0043E5BC 97CE0002 */  lhu   $t6, 2($fp)
.L0043E5C0:
/* 0043E5C0 31CB0002 */  andi  $t3, $t6, 2
/* 0043E5C4 15600029 */  bnez  $t3, .L0043E66C
/* 0043E5C8 00000000 */   nop   
/* 0043E5CC 1522001D */  bne   $t1, $v0, .L0043E644
/* 0043E5D0 2401007D */   li    $at, 125
/* 0043E5D4 24010001 */  li    $at, 1
/* 0043E5D8 14E10007 */  bne   $a3, $at, .L0043E5F8
/* 0043E5DC 8FAC00F4 */   lw    $t4, 0xf4($sp)
/* 0043E5E0 8D980020 */  lw    $t8, 0x20($t4)
/* 0043E5E4 24120001 */  li    $s2, 1
/* 0043E5E8 00B87821 */  addu  $t7, $a1, $t8
/* 0043E5EC 01F46821 */  addu  $t5, $t7, $s4
/* 0043E5F0 10000299 */  b     .L0043F058
/* 0043E5F4 AE6D0004 */   sw    $t5, 4($s3)
.L0043E5F8:
/* 0043E5F8 8FB900F4 */  lw    $t9, 0xf4($sp)
/* 0043E5FC 02002025 */  move  $a0, $s0
/* 0043E600 8F2A0020 */  lw    $t2, 0x20($t9)
/* 0043E604 8F99868C */  lw    $t9, %call16(subovfw)($gp)
/* 0043E608 01543021 */  addu  $a2, $t2, $s4
/* 0043E60C 0320F809 */  jalr  $t9
/* 0043E610 00000000 */   nop   
/* 0043E614 14400290 */  bnez  $v0, .L0043F058
/* 0043E618 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0043E61C 8F938964 */  lw     $s3, %got(ustack)($gp)
/* 0043E620 8FAB00F4 */  lw    $t3, 0xf4($sp)
/* 0043E624 24120001 */  li    $s2, 1
/* 0043E628 8E730000 */  lw    $s3, ($s3)
/* 0043E62C 8D6C0020 */  lw    $t4, 0x20($t3)
/* 0043E630 8E6E0004 */  lw    $t6, 4($s3)
/* 0043E634 01CCC023 */  subu  $t8, $t6, $t4
/* 0043E638 03147823 */  subu  $t7, $t8, $s4
/* 0043E63C 10000286 */  b     .L0043F058
/* 0043E640 AE6F0004 */   sw    $t7, 4($s3)
.L0043E644:
/* 0043E644 10E10284 */  beq   $a3, $at, .L0043F058
/* 0043E648 00000000 */   nop   
/* 0043E64C 8ECD0020 */  lw    $t5, 0x20($s6)
/* 0043E650 8FAB00F4 */  lw    $t3, 0xf4($sp)
/* 0043E654 24120001 */  li    $s2, 1
/* 0043E658 01B5C821 */  addu  $t9, $t5, $s5
/* 0043E65C 03345021 */  addu  $t2, $t9, $s4
/* 0043E660 AE6A0004 */  sw    $t2, 4($s3)
/* 0043E664 1000027C */  b     .L0043F058
/* 0043E668 AE6B0000 */   sw    $t3, ($s3)
.L0043E66C:
/* 0043E66C 16E7003D */  bne   $s7, $a3, .L0043E764
/* 0043E670 24090002 */   li    $t1, 2
/* 0043E674 93CE0001 */  lbu   $t6, 1($fp)
/* 0043E678 3C010280 */  lui   $at, 0x280
/* 0043E67C 8FAA00F4 */  lw    $t2, 0xf4($sp)
/* 0043E680 31CC001F */  andi  $t4, $t6, 0x1f
/* 0043E684 2D980020 */  sltiu $t8, $t4, 0x20
/* 0043E688 00187823 */  negu  $t7, $t8
/* 0043E68C 01E16824 */  and   $t5, $t7, $at
/* 0043E690 018DC804 */  sllv  $t9, $t5, $t4
/* 0043E694 07210033 */  bgez  $t9, .L0043E764
/* 0043E698 00000000 */   nop   
/* 0043E69C 91420000 */  lbu   $v0, ($t2)
/* 0043E6A0 51220005 */  beql  $t1, $v0, .L0043E6B8
/* 0043E6A4 97CE0002 */   lhu   $t6, 2($fp)
/* 0043E6A8 92CB0000 */  lbu   $t3, ($s6)
/* 0043E6AC 152B002D */  bne   $t1, $t3, .L0043E764
/* 0043E6B0 00000000 */   nop   
/* 0043E6B4 97CE0002 */  lhu   $t6, 2($fp)
.L0043E6B8:
/* 0043E6B8 31D80002 */  andi  $t8, $t6, 2
/* 0043E6BC 17000029 */  bnez  $t8, .L0043E764
/* 0043E6C0 00000000 */   nop   
/* 0043E6C4 15220015 */  bne   $t1, $v0, .L0043E71C
/* 0043E6C8 24120001 */   li    $s2, 1
/* 0043E6CC 8FAF00F4 */  lw    $t7, 0xf4($sp)
/* 0043E6D0 8F9986B8 */  lw    $t9, %call16(binopwithconst)($gp)
/* 0043E6D4 2404005B */  li    $a0, 91
/* 0043E6D8 8DED0020 */  lw    $t5, 0x20($t7)
/* 0043E6DC 02C02825 */  move  $a1, $s6
/* 0043E6E0 0320F809 */  jalr  $t9
/* 0043E6E4 01B43021 */   addu  $a2, $t5, $s4
/* 0043E6E8 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043E6EC 8FB900F4 */  lw    $t9, 0xf4($sp)
/* 0043E6F0 8F938964 */  lw     $s3, %got(ustack)($gp)
/* 0043E6F4 8E730000 */  lw    $s3, ($s3)
/* 0043E6F8 AE620000 */  sw    $v0, ($s3)
/* 0043E6FC 8F2A0020 */  lw    $t2, 0x20($t9)
/* 0043E700 8E6C0004 */  lw    $t4, 4($s3)
/* 0043E704 01545821 */  addu  $t3, $t2, $s4
/* 0043E708 018B0019 */  multu $t4, $t3
/* 0043E70C 00007012 */  mflo  $t6
/* 0043E710 AE6E0004 */  sw    $t6, 4($s3)
/* 0043E714 10000250 */  b     .L0043F058
/* 0043E718 00000000 */   nop   
.L0043E71C:
/* 0043E71C 8F9986B8 */  lw    $t9, %call16(binopwithconst)($gp)
/* 0043E720 8ED80020 */  lw    $t8, 0x20($s6)
/* 0043E724 24120001 */  li    $s2, 1
/* 0043E728 2404005B */  li    $a0, 91
/* 0043E72C 8FA500F4 */  lw    $a1, 0xf4($sp)
/* 0043E730 0320F809 */  jalr  $t9
/* 0043E734 03153021 */   addu  $a2, $t8, $s5
/* 0043E738 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043E73C 8F938964 */  lw     $s3, %got(ustack)($gp)
/* 0043E740 8E730000 */  lw    $s3, ($s3)
/* 0043E744 AE620000 */  sw    $v0, ($s3)
/* 0043E748 8ECF0020 */  lw    $t7, 0x20($s6)
/* 0043E74C 01F56821 */  addu  $t5, $t7, $s5
/* 0043E750 028D0019 */  multu $s4, $t5
/* 0043E754 0000C812 */  mflo  $t9
/* 0043E758 AE790004 */  sw    $t9, 4($s3)
/* 0043E75C 1000023E */  b     .L0043F058
/* 0043E760 00000000 */   nop   
.L0043E764:
/* 0043E764 8F918B4C */  lw     $s1, %got(strictieee)($gp)
/* 0043E768 24010001 */  li    $at, 1
/* 0043E76C 92230000 */  lbu   $v1, ($s1)
/* 0043E770 14600023 */  bnez  $v1, .L0043E800
/* 0043E774 00000000 */   nop   
/* 0043E778 14E10021 */  bne   $a3, $at, .L0043E800
/* 0043E77C 00000000 */   nop   
/* 0043E780 93CA0001 */  lbu   $t2, 1($fp)
/* 0043E784 3C01000C */  lui   $at, 0xc
/* 0043E788 8FAD00F4 */  lw    $t5, 0xf4($sp)
/* 0043E78C 314C001F */  andi  $t4, $t2, 0x1f
/* 0043E790 2D8B0020 */  sltiu $t3, $t4, 0x20
/* 0043E794 000B7023 */  negu  $t6, $t3
/* 0043E798 01C1C024 */  and   $t8, $t6, $at
/* 0043E79C 01987804 */  sllv  $t7, $t8, $t4
/* 0043E7A0 05E10017 */  bgez  $t7, .L0043E800
/* 0043E7A4 00000000 */   nop   
/* 0043E7A8 92C20000 */  lbu   $v0, ($s6)
/* 0043E7AC 91B90000 */  lbu   $t9, ($t5)
/* 0043E7B0 38420002 */  xori  $v0, $v0, 2
/* 0043E7B4 15390004 */  bne   $t1, $t9, .L0043E7C8
/* 0043E7B8 2C420001 */   sltiu $v0, $v0, 1
/* 0043E7BC 8DAA002C */  lw    $t2, 0x2c($t5)
/* 0043E7C0 11400006 */  beqz  $t2, .L0043E7DC
/* 0043E7C4 00000000 */   nop   
.L0043E7C8:
/* 0043E7C8 1040000D */  beqz  $v0, .L0043E800
/* 0043E7CC 00000000 */   nop   
/* 0043E7D0 8ECB002C */  lw    $t3, 0x2c($s6)
/* 0043E7D4 1560000A */  bnez  $t3, .L0043E800
/* 0043E7D8 00000000 */   nop   
.L0043E7DC:
/* 0043E7DC 1040021E */  beqz  $v0, .L0043F058
/* 0043E7E0 24120001 */   li    $s2, 1
/* 0043E7E4 8ECE002C */  lw    $t6, 0x2c($s6)
/* 0043E7E8 8FB800F4 */  lw    $t8, 0xf4($sp)
/* 0043E7EC 15C0021A */  bnez  $t6, .L0043F058
/* 0043E7F0 00000000 */   nop   
/* 0043E7F4 AE780000 */  sw    $t8, ($s3)
/* 0043E7F8 10000217 */  b     .L0043F058
/* 0043E7FC AE600004 */   sw    $zero, 4($s3)
.L0043E800:
/* 0043E800 14600015 */  bnez  $v1, .L0043E858
/* 0043E804 2401007D */   li    $at, 125
/* 0043E808 14E10013 */  bne   $a3, $at, .L0043E858
/* 0043E80C 00000000 */   nop   
/* 0043E810 93CC0001 */  lbu   $t4, 1($fp)
/* 0043E814 3C01000C */  lui   $at, 0xc
/* 0043E818 8FAE00F4 */  lw    $t6, 0xf4($sp)
/* 0043E81C 318F001F */  andi  $t7, $t4, 0x1f
/* 0043E820 2DF90020 */  sltiu $t9, $t7, 0x20
/* 0043E824 00196823 */  negu  $t5, $t9
/* 0043E828 01A15024 */  and   $t2, $t5, $at
/* 0043E82C 01EA5804 */  sllv  $t3, $t2, $t7
/* 0043E830 05610009 */  bgez  $t3, .L0043E858
/* 0043E834 00000000 */   nop   
/* 0043E838 91D80000 */  lbu   $t8, ($t6)
/* 0043E83C 15380006 */  bne   $t1, $t8, .L0043E858
/* 0043E840 00000000 */   nop   
/* 0043E844 8DCC002C */  lw    $t4, 0x2c($t6)
/* 0043E848 15800003 */  bnez  $t4, .L0043E858
/* 0043E84C 00000000 */   nop   
/* 0043E850 10000201 */  b     .L0043F058
/* 0043E854 24120001 */   li    $s2, 1
.L0043E858:
/* 0043E858 56E7008C */  bnel  $s7, $a3, .L0043EA8C
/* 0043E85C 2401001D */   li    $at, 29
/* 0043E860 93D90001 */  lbu   $t9, 1($fp)
/* 0043E864 3C01000C */  lui   $at, 0xc
/* 0043E868 8FAE00F4 */  lw    $t6, 0xf4($sp)
/* 0043E86C 332D001F */  andi  $t5, $t9, 0x1f
/* 0043E870 2DAA0020 */  sltiu $t2, $t5, 0x20
/* 0043E874 000A7823 */  negu  $t7, $t2
/* 0043E878 01E15824 */  and   $t3, $t7, $at
/* 0043E87C 01ABC004 */  sllv  $t8, $t3, $t5
/* 0043E880 07030082 */  bgezl $t8, .L0043EA8C
/* 0043E884 2401001D */   li    $at, 29
/* 0043E888 92C20000 */  lbu   $v0, ($s6)
/* 0043E88C 91CC0000 */  lbu   $t4, ($t6)
/* 0043E890 38420002 */  xori  $v0, $v0, 2
/* 0043E894 112C0003 */  beq   $t1, $t4, .L0043E8A4
/* 0043E898 2C420001 */   sltiu $v0, $v0, 1
/* 0043E89C 5040007B */  beql  $v0, $zero, .L0043EA8C
/* 0043E8A0 2401001D */   li    $at, 29
.L0043E8A4:
/* 0043E8A4 1040000A */  beqz  $v0, .L0043E8D0
/* 0043E8A8 8FB900F4 */   lw    $t9, 0xf4($sp)
/* 0043E8AC 8F998704 */  lw    $t9, %call16(val_when_exponent0)($gp)
/* 0043E8B0 8EC4002C */  lw    $a0, 0x2c($s6)
/* 0043E8B4 8EC50030 */  lw    $a1, 0x30($s6)
/* 0043E8B8 0320F809 */  jalr  $t9
/* 0043E8BC 00000000 */   nop   
/* 0043E8C0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043E8C4 24090002 */  li    $t1, 2
/* 0043E8C8 10000009 */  b     .L0043E8F0
/* 0043E8CC 00408025 */   move  $s0, $v0
.L0043E8D0:
/* 0043E8D0 8F24002C */  lw    $a0, 0x2c($t9)
/* 0043E8D4 8F250030 */  lw    $a1, 0x30($t9)
/* 0043E8D8 8F998704 */  lw    $t9, %call16(val_when_exponent0)($gp)
/* 0043E8DC 0320F809 */  jalr  $t9
/* 0043E8E0 00000000 */   nop   
/* 0043E8E4 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043E8E8 24090002 */  li    $t1, 2
/* 0043E8EC 00408025 */  move  $s0, $v0
.L0043E8F0:
/* 0043E8F0 244A0002 */  addiu $t2, $v0, 2
/* 0043E8F4 2D410005 */  sltiu $at, $t2, 5
/* 0043E8F8 102001D7 */  beqz  $at, .L0043F058
/* 0043E8FC 0040B825 */   move  $s7, $v0
/* 0043E900 8F818044 */  lw    $at, %got(jtbl_1000C4B0)($gp)
/* 0043E904 000A5080 */  sll   $t2, $t2, 2
/* 0043E908 002A0821 */  addu  $at, $at, $t2
/* 0043E90C 8C2AC4B0 */  lw    $t2, %lo(jtbl_1000C4B0)($at)
/* 0043E910 015C5021 */  addu  $t2, $t2, $gp
/* 0043E914 01400008 */  jr    $t2
/* 0043E918 00000000 */   nop   
.L0043E91C:
/* 0043E91C 922F0000 */  lbu   $t7, ($s1)
/* 0043E920 15E001CD */  bnez  $t7, .L0043F058
/* 0043E924 00000000 */   nop   
/* 0043E928 92CB0000 */  lbu   $t3, ($s6)
/* 0043E92C 24120001 */  li    $s2, 1
/* 0043E930 152B0007 */  bne   $t1, $t3, .L0043E950
/* 0043E934 00000000 */   nop   
/* 0043E938 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 0043E93C 8FA400F4 */  lw    $a0, 0xf4($sp)
/* 0043E940 0320F809 */  jalr  $t9
/* 0043E944 00000000 */   nop   
/* 0043E948 100001C3 */  b     .L0043F058
/* 0043E94C 8FBC0034 */   lw    $gp, 0x34($sp)
.L0043E950:
/* 0043E950 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 0043E954 02C02025 */  move  $a0, $s6
/* 0043E958 0320F809 */  jalr  $t9
/* 0043E95C 00000000 */   nop   
/* 0043E960 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043E964 8FAD00F4 */  lw    $t5, 0xf4($sp)
/* 0043E968 8F938964 */  lw     $s3, %got(ustack)($gp)
/* 0043E96C 8E730000 */  lw    $s3, ($s3)
/* 0043E970 AE6D0000 */  sw    $t5, ($s3)
/* 0043E974 100001B8 */  b     .L0043F058
/* 0043E978 AE600004 */   sw    $zero, 4($s3)
.L0043E97C:
/* 0043E97C 92D80000 */  lbu   $t8, ($s6)
/* 0043E980 24120001 */  li    $s2, 1
/* 0043E984 2401FFFF */  li    $at, -1
/* 0043E988 15380006 */  bne   $t1, $t8, .L0043E9A4
/* 0043E98C 00000000 */   nop   
/* 0043E990 8F938964 */  lw     $s3, %got(ustack)($gp)
/* 0043E994 8FAE00F4 */  lw    $t6, 0xf4($sp)
/* 0043E998 8E730000 */  lw    $s3, ($s3)
/* 0043E99C AE6E0000 */  sw    $t6, ($s3)
/* 0043E9A0 AE600004 */  sw    $zero, 4($s3)
.L0043E9A4:
/* 0043E9A4 144101AC */  bne   $v0, $at, .L0043F058
/* 0043E9A8 2402005E */   li    $v0, 94
/* 0043E9AC A3C20000 */  sb    $v0, ($fp)
/* 0043E9B0 8F99832C */  lw    $t9, %call16(readnxtinst)($gp)
/* 0043E9B4 0320F809 */  jalr  $t9
/* 0043E9B8 00000000 */   nop   
/* 0043E9BC 100001A6 */  b     .L0043F058
/* 0043E9C0 8FBC0034 */   lw    $gp, 0x34($sp)
.L0043E9C4:
/* 0043E9C4 92CC0000 */  lbu   $t4, ($s6)
/* 0043E9C8 24120001 */  li    $s2, 1
/* 0043E9CC 8FB900F4 */  lw    $t9, 0xf4($sp)
/* 0043E9D0 152C0013 */  bne   $t1, $t4, .L0043EA20
/* 0043E9D4 02C02025 */   move  $a0, $s6
/* 0043E9D8 972A0006 */  lhu   $t2, 6($t9)
/* 0043E9DC 8F938964 */  lw     $s3, %got(ustack)($gp)
/* 0043E9E0 27A20110 */  addiu $v0, $sp, 0x110
/* 0043E9E4 254F0001 */  addiu $t7, $t2, 1
/* 0043E9E8 A72F0006 */  sh    $t7, 6($t9)
/* 0043E9EC 8F998024 */  lw    $t9, %got(func_0043B15C)($gp)
/* 0043E9F0 8E730000 */  lw    $s3, ($s3)
/* 0043E9F4 8FAB00F4 */  lw    $t3, 0xf4($sp)
/* 0043E9F8 2739B15C */  addiu $t9, %lo(func_0043B15C) # addiu $t9, $t9, -0x4ea4
/* 0043E9FC 8FA400F4 */  lw    $a0, 0xf4($sp)
/* 0043EA00 AE600004 */  sw    $zero, 4($s3)
/* 0043EA04 0320F809 */  jalr  $t9
/* 0043EA08 AE6B0000 */   sw    $t3, ($s3)
/* 0043EA0C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043EA10 8F8D8964 */  lw     $t5, %got(ustack)($gp)
/* 0043EA14 8DAD0000 */  lw    $t5, ($t5)
/* 0043EA18 1000000C */  b     .L0043EA4C
/* 0043EA1C ADA00004 */   sw    $zero, 4($t5)
.L0043EA20:
/* 0043EA20 96D80006 */  lhu   $t8, 6($s6)
/* 0043EA24 8F998024 */  lw    $t9, %got(func_0043B15C)($gp)
/* 0043EA28 27A20110 */  addiu $v0, $sp, 0x110
/* 0043EA2C 270E0001 */  addiu $t6, $t8, 1
/* 0043EA30 2739B15C */  addiu $t9, %lo(func_0043B15C) # addiu $t9, $t9, -0x4ea4
/* 0043EA34 0320F809 */  jalr  $t9
/* 0043EA38 A6CE0006 */   sh    $t6, 6($s6)
/* 0043EA3C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043EA40 8F8C8964 */  lw     $t4, %got(ustack)($gp)
/* 0043EA44 8D8C0000 */  lw    $t4, ($t4)
/* 0043EA48 AD800004 */  sw    $zero, 4($t4)
.L0043EA4C:
/* 0043EA4C 240A0001 */  li    $t2, 1
/* 0043EA50 A3CA0000 */  sb    $t2, ($fp)
/* 0043EA54 8F99832C */  lw    $t9, %call16(readnxtinst)($gp)
/* 0043EA58 0320F809 */  jalr  $t9
/* 0043EA5C 00000000 */   nop   
/* 0043EA60 2401FFFE */  li    $at, -2
/* 0043EA64 1601017C */  bne   $s0, $at, .L0043F058
/* 0043EA68 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0043EA6C 2402005E */  li    $v0, 94
/* 0043EA70 A3C20000 */  sb    $v0, ($fp)
/* 0043EA74 8F99832C */  lw    $t9, %call16(readnxtinst)($gp)
/* 0043EA78 0320F809 */  jalr  $t9
/* 0043EA7C 00000000 */   nop   
/* 0043EA80 10000175 */  b     .L0043F058
/* 0043EA84 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0043EA88 2401001D */  li    $at, 29
.L0043EA8C:
/* 0043EA8C 54E10039 */  bnel  $a3, $at, .L0043EB74
/* 0043EA90 2CEC00A0 */   sltiu $t4, $a3, 0xa0
/* 0043EA94 93CF0001 */  lbu   $t7, 1($fp)
/* 0043EA98 3C01000C */  lui   $at, 0xc
/* 0043EA9C 8FAC00F4 */  lw    $t4, 0xf4($sp)
/* 0043EAA0 31F9001F */  andi  $t9, $t7, 0x1f
/* 0043EAA4 2F2B0020 */  sltiu $t3, $t9, 0x20
/* 0043EAA8 000B6823 */  negu  $t5, $t3
/* 0043EAAC 01A1C024 */  and   $t8, $t5, $at
/* 0043EAB0 03387004 */  sllv  $t6, $t8, $t9
/* 0043EAB4 05C3002F */  bgezl $t6, .L0043EB74
/* 0043EAB8 2CEC00A0 */   sltiu $t4, $a3, 0xa0
/* 0043EABC 918A0000 */  lbu   $t2, ($t4)
/* 0043EAC0 552A002C */  bnel  $t1, $t2, .L0043EB74
/* 0043EAC4 2CEC00A0 */   sltiu $t4, $a3, 0xa0
/* 0043EAC8 8D90002C */  lw    $s0, 0x2c($t4)
/* 0043EACC 00008825 */  move  $s1, $zero
/* 0043EAD0 06010004 */  bgez  $s0, .L0043EAE4
/* 0043EAD4 00000000 */   nop   
/* 0043EAD8 24110001 */  li    $s1, 1
/* 0043EADC 10000001 */  b     .L0043EAE4
/* 0043EAE0 00108023 */   negu  $s0, $s0
.L0043EAE4:
/* 0043EAE4 8F9986F8 */  lw    $t9, %call16(is_power2)($gp)
/* 0043EAE8 02002025 */  move  $a0, $s0
/* 0043EAEC 0320F809 */  jalr  $t9
/* 0043EAF0 00000000 */   nop   
/* 0043EAF4 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043EAF8 1040001B */  beqz  $v0, .L0043EB68
/* 0043EAFC AFB600F8 */   sw    $s6, 0xf8($sp)
/* 0043EB00 8FAF00F4 */  lw    $t7, 0xf4($sp)
/* 0043EB04 02002025 */  move  $a0, $s0
/* 0043EB08 02202825 */  move  $a1, $s1
/* 0043EB0C 8DE60030 */  lw    $a2, 0x30($t7)
/* 0043EB10 AFB600F8 */  sw    $s6, 0xf8($sp)
/* 0043EB14 14C00014 */  bnez  $a2, .L0043EB68
/* 0043EB18 00000000 */   nop   
/* 0043EB1C 8F998024 */  lw    $t9, %got(func_0043C56C)($gp)
/* 0043EB20 93C70001 */  lbu   $a3, 1($fp)
/* 0043EB24 27A20110 */  addiu $v0, $sp, 0x110
/* 0043EB28 2739C56C */  addiu $t9, %lo(func_0043C56C) # addiu $t9, $t9, -0x3a94
/* 0043EB2C 0320F809 */  jalr  $t9
/* 0043EB30 30E7001F */   andi  $a3, $a3, 0x1f
/* 0043EB34 1040000C */  beqz  $v0, .L0043EB68
/* 0043EB38 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0043EB3C 93C40001 */  lbu   $a0, 1($fp)
/* 0043EB40 AFA200F4 */  sw    $v0, 0xf4($sp)
/* 0043EB44 A3D70000 */  sb    $s7, ($fp)
/* 0043EB48 904B0001 */  lbu   $t3, 1($v0)
/* 0043EB4C 00046EC0 */  sll   $t5, $a0, 0x1b
/* 0043EB50 000DC6C2 */  srl   $t8, $t5, 0x1b
/* 0043EB54 8F818DA4 */  lw     $at, %got(u)($gp)
/* 0043EB58 0178C826 */  xor   $t9, $t3, $t8
/* 0043EB5C 332E001F */  andi  $t6, $t9, 0x1f
/* 0043EB60 01C45026 */  xor   $t2, $t6, $a0
/* 0043EB64 A02A0001 */  sb    $t2, 1($at)
.L0043EB68:
/* 0043EB68 1000013B */  b     .L0043F058
/* 0043EB6C 8FB600F8 */   lw    $s6, 0xf8($sp)
/* 0043EB70 2CEC00A0 */  sltiu $t4, $a3, 0xa0
.L0043EB74:
/* 0043EB74 11800009 */  beqz  $t4, .L0043EB9C
/* 0043EB78 30E200FF */   andi  $v0, $a3, 0xff
/* 0043EB7C 8F8B8044 */  lw    $t3, %got(D_100108EC)($gp)
/* 0043EB80 00077943 */  sra   $t7, $a3, 5
/* 0043EB84 000F6880 */  sll   $t5, $t7, 2
/* 0043EB88 256B08EC */  addiu $t3, %lo(D_100108EC) # addiu $t3, $t3, 0x8ec
/* 0043EB8C 016DC021 */  addu  $t8, $t3, $t5
/* 0043EB90 8F190000 */  lw    $t9, ($t8)
/* 0043EB94 00F97004 */  sllv  $t6, $t9, $a3
/* 0043EB98 29CC0000 */  slti  $t4, $t6, 0
.L0043EB9C:
/* 0043EB9C 118000C7 */  beqz  $t4, .L0043EEBC
/* 0043EBA0 8FAF00F4 */   lw    $t7, 0xf4($sp)
/* 0043EBA4 16CF00C5 */  bne   $s6, $t7, .L0043EEBC
/* 0043EBA8 2C41003D */   sltiu $at, $v0, 0x3d
/* 0043EBAC 56B400C4 */  bnel  $s5, $s4, .L0043EEC0
/* 0043EBB0 24F8FFE0 */   addiu $t8, $a3, -0x20
/* 0043EBB4 1000006B */  b     .L0043ED64
/* 0043EBB8 24120001 */   li    $s2, 1
.L0043EBBC:
/* 0043EBBC 93CB0001 */  lbu   $t3, 1($fp)
.L0043EBC0:
/* 0043EBC0 3C01000C */  lui   $at, 0xc
/* 0043EBC4 24040001 */  li    $a0, 1
/* 0043EBC8 316D001F */  andi  $t5, $t3, 0x1f
/* 0043EBCC 2DB80020 */  sltiu $t8, $t5, 0x20
/* 0043EBD0 0018C823 */  negu  $t9, $t8
/* 0043EBD4 03217024 */  and   $t6, $t9, $at
/* 0043EBD8 01AE5004 */  sllv  $t2, $t6, $t5
/* 0043EBDC 0540000B */  bltz  $t2, .L0043EC0C
/* 0043EBE0 00000000 */   nop   
/* 0043EBE4 8F9986B0 */  lw    $t9, %call16(enter_const)($gp)
/* 0043EBE8 8F8689B4 */  lw     $a2, %got(curgraphnode)($gp)
/* 0043EBEC 24050006 */  li    $a1, 6
/* 0043EBF0 0320F809 */  jalr  $t9
/* 0043EBF4 8CC60000 */   lw    $a2, ($a2)
/* 0043EBF8 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043EBFC 8F8C8964 */  lw     $t4, %got(ustack)($gp)
/* 0043EC00 8D8C0000 */  lw    $t4, ($t4)
/* 0043EC04 1000008F */  b     .L0043EE44
/* 0043EC08 AD820000 */   sw    $v0, ($t4)
.L0043EC0C:
/* 0043EC0C 1000008D */  b     .L0043EE44
/* 0043EC10 00009025 */   move  $s2, $zero
.L0043EC14:
/* 0043EC14 93CF0001 */  lbu   $t7, 1($fp)
.L0043EC18:
/* 0043EC18 3C01000C */  lui   $at, 0xc
/* 0043EC1C 00002025 */  move  $a0, $zero
/* 0043EC20 31EB001F */  andi  $t3, $t7, 0x1f
/* 0043EC24 2D780020 */  sltiu $t8, $t3, 0x20
/* 0043EC28 0018C823 */  negu  $t9, $t8
/* 0043EC2C 03217024 */  and   $t6, $t9, $at
/* 0043EC30 016E6804 */  sllv  $t5, $t6, $t3
/* 0043EC34 05A0000B */  bltz  $t5, .L0043EC64
/* 0043EC38 00000000 */   nop   
/* 0043EC3C 8F9986B0 */  lw    $t9, %call16(enter_const)($gp)
/* 0043EC40 8F8689B4 */  lw     $a2, %got(curgraphnode)($gp)
/* 0043EC44 24050006 */  li    $a1, 6
/* 0043EC48 0320F809 */  jalr  $t9
/* 0043EC4C 8CC60000 */   lw    $a2, ($a2)
/* 0043EC50 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043EC54 8F8A8964 */  lw     $t2, %got(ustack)($gp)
/* 0043EC58 8D4A0000 */  lw    $t2, ($t2)
/* 0043EC5C 10000079 */  b     .L0043EE44
/* 0043EC60 AD420000 */   sw    $v0, ($t2)
.L0043EC64:
/* 0043EC64 10000077 */  b     .L0043EE44
/* 0043EC68 00009025 */   move  $s2, $zero
.L0043EC6C:
/* 0043EC6C 8F9986B0 */  lw    $t9, %call16(enter_const)($gp)
/* 0043EC70 8F8689B4 */  lw     $a2, %got(curgraphnode)($gp)
/* 0043EC74 24050006 */  li    $a1, 6
/* 0043EC78 0320F809 */  jalr  $t9
/* 0043EC7C 8CC60000 */   lw    $a2, ($a2)
/* 0043EC80 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043EC84 8F8C8964 */  lw     $t4, %got(ustack)($gp)
/* 0043EC88 8D8C0000 */  lw    $t4, ($t4)
/* 0043EC8C 1000006D */  b     .L0043EE44
/* 0043EC90 AD820000 */   sw    $v0, ($t4)
/* 0043EC94 93D00001 */  lbu   $s0, 1($fp)
.L0043EC98:
/* 0043EC98 3C01000C */  lui   $at, 0xc
/* 0043EC9C 10600007 */  beqz  $v1, .L0043ECBC
/* 0043ECA0 3210001F */   andi  $s0, $s0, 0x1f
/* 0043ECA4 2E0F0020 */  sltiu $t7, $s0, 0x20
/* 0043ECA8 000FC023 */  negu  $t8, $t7
/* 0043ECAC 0301C824 */  and   $t9, $t8, $at
/* 0043ECB0 02197004 */  sllv  $t6, $t9, $s0
/* 0043ECB4 05C00020 */  bltz  $t6, .L0043ED38
/* 0043ECB8 00000000 */   nop   
.L0043ECBC:
/* 0043ECBC 8F9986B0 */  lw    $t9, %call16(enter_const)($gp)
/* 0043ECC0 8F8689B4 */  lw     $a2, %got(curgraphnode)($gp)
/* 0043ECC4 00002025 */  move  $a0, $zero
/* 0043ECC8 02002825 */  move  $a1, $s0
/* 0043ECCC 0320F809 */  jalr  $t9
/* 0043ECD0 8CC60000 */   lw    $a2, ($a2)
/* 0043ECD4 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043ECD8 93CB0001 */  lbu   $t3, 1($fp)
/* 0043ECDC 3C01000C */  lui   $at, 0xc
/* 0043ECE0 8F938964 */  lw     $s3, %got(ustack)($gp)
/* 0043ECE4 316D001F */  andi  $t5, $t3, 0x1f
/* 0043ECE8 2DAA0020 */  sltiu $t2, $t5, 0x20
/* 0043ECEC 000A6023 */  negu  $t4, $t2
/* 0043ECF0 8E730000 */  lw    $s3, ($s3)
/* 0043ECF4 01817824 */  and   $t7, $t4, $at
/* 0043ECF8 01AFC004 */  sllv  $t8, $t7, $t5
/* 0043ECFC 07010051 */  bgez  $t8, .L0043EE44
/* 0043ED00 AE620000 */   sw    $v0, ($s3)
/* 0043ED04 AFB600F8 */  sw    $s6, 0xf8($sp)
/* 0043ED08 AE600004 */  sw    $zero, 4($s3)
/* 0043ED0C 24190006 */  li    $t9, 6
/* 0043ED10 A0590001 */  sb    $t9, 1($v0)
/* 0043ED14 8F998024 */  lw    $t9, %got(func_0043C248)($gp)
/* 0043ED18 27A20110 */  addiu $v0, $sp, 0x110
/* 0043ED1C 02602025 */  move  $a0, $s3
/* 0043ED20 2739C248 */  addiu $t9, %lo(func_0043C248) # addiu $t9, $t9, -0x3db8
/* 0043ED24 0320F809 */  jalr  $t9
/* 0043ED28 00000000 */   nop   
/* 0043ED2C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043ED30 10000044 */  b     .L0043EE44
/* 0043ED34 8FB600F8 */   lw    $s6, 0xf8($sp)
.L0043ED38:
/* 0043ED38 10000042 */  b     .L0043EE44
/* 0043ED3C 00009025 */   move  $s2, $zero
.L0043ED40:
/* 0043ED40 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 0043ED44 8F868044 */  lw    $a2, %got(RO_1000C463)($gp)
/* 0043ED48 24040001 */  li    $a0, 1
/* 0043ED4C 24050706 */  li    $a1, 1798
/* 0043ED50 2407000B */  li    $a3, 11
/* 0043ED54 0320F809 */  jalr  $t9
/* 0043ED58 24C6C463 */   addiu $a2, %lo(RO_1000C463) # addiu $a2, $a2, -0x3b9d
/* 0043ED5C 10000039 */  b     .L0043EE44
/* 0043ED60 8FBC0034 */   lw    $gp, 0x34($sp)
.L0043ED64:
/* 0043ED64 14200018 */  bnez  $at, .L0043EDC8
/* 0043ED68 244AFFD8 */   addiu $t2, $v0, -0x28
/* 0043ED6C 2C410060 */  sltiu $at, $v0, 0x60
/* 0043ED70 14200009 */  bnez  $at, .L0043ED98
/* 0043ED74 244BFFB3 */   addiu $t3, $v0, -0x4d
/* 0043ED78 2401007D */  li    $at, 125
/* 0043ED7C 5041FFC6 */  beql  $v0, $at, .L0043EC98
/* 0043ED80 93D00001 */   lbu   $s0, 1($fp)
/* 0043ED84 2401008D */  li    $at, 141
/* 0043ED88 1041FFB8 */  beq   $v0, $at, .L0043EC6C
/* 0043ED8C 00002025 */   move  $a0, $zero
/* 0043ED90 1000FFEB */  b     .L0043ED40
/* 0043ED94 00000000 */   nop   
.L0043ED98:
/* 0043ED98 2C41004F */  sltiu $at, $v0, 0x4f
/* 0043ED9C 10200024 */  beqz  $at, .L0043EE30
/* 0043EDA0 2D610002 */   sltiu $at, $t3, 2
/* 0043EDA4 1020FFE6 */  beqz  $at, .L0043ED40
/* 0043EDA8 00000000 */   nop   
/* 0043EDAC 8F818044 */  lw    $at, %got(jtbl_1000C4CC)($gp)
/* 0043EDB0 000B5880 */  sll   $t3, $t3, 2
/* 0043EDB4 002B0821 */  addu  $at, $at, $t3
/* 0043EDB8 8C2BC4CC */  lw    $t3, %lo(jtbl_1000C4CC)($at)
/* 0043EDBC 017C5821 */  addu  $t3, $t3, $gp
/* 0043EDC0 01600008 */  jr    $t3
/* 0043EDC4 00000000 */   nop   
.L0043EDC8:
/* 0043EDC8 2C410024 */  sltiu $at, $v0, 0x24
/* 0043EDCC 1420000C */  bnez  $at, .L0043EE00
/* 0043EDD0 2C41002A */   sltiu $at, $v0, 0x2a
/* 0043EDD4 10200011 */  beqz  $at, .L0043EE1C
/* 0043EDD8 2D410002 */   sltiu $at, $t2, 2
/* 0043EDDC 1020FFD8 */  beqz  $at, .L0043ED40
/* 0043EDE0 00000000 */   nop   
/* 0043EDE4 8F818044 */  lw    $at, %got(jtbl_1000C4C4)($gp)
/* 0043EDE8 000A5080 */  sll   $t2, $t2, 2
/* 0043EDEC 002A0821 */  addu  $at, $at, $t2
/* 0043EDF0 8C2AC4C4 */  lw    $t2, %lo(jtbl_1000C4C4)($at)
/* 0043EDF4 015C5021 */  addu  $t2, $t2, $gp
/* 0043EDF8 01400008 */  jr    $t2
/* 0043EDFC 00000000 */   nop   
.L0043EE00:
/* 0043EE00 24010004 */  li    $at, 4
/* 0043EE04 1041000F */  beq   $v0, $at, .L0043EE44
/* 0043EE08 24010023 */   li    $at, 35
/* 0043EE0C 5041FF6C */  beql  $v0, $at, .L0043EBC0
/* 0043EE10 93CB0001 */   lbu   $t3, 1($fp)
/* 0043EE14 1000FFCA */  b     .L0043ED40
/* 0043EE18 00000000 */   nop   
.L0043EE1C:
/* 0043EE1C 2401003C */  li    $at, 60
/* 0043EE20 10410008 */  beq   $v0, $at, .L0043EE44
/* 0043EE24 00000000 */   nop   
/* 0043EE28 1000FFC5 */  b     .L0043ED40
/* 0043EE2C 00000000 */   nop   
.L0043EE30:
/* 0043EE30 2401005F */  li    $at, 95
/* 0043EE34 5041FF78 */  beql  $v0, $at, .L0043EC18
/* 0043EE38 93CF0001 */   lbu   $t7, 1($fp)
/* 0043EE3C 1000FFC0 */  b     .L0043ED40
/* 0043EE40 00000000 */   nop   
.L0043EE44:
/* 0043EE44 12400084 */  beqz  $s2, .L0043F058
/* 0043EE48 00000000 */   nop   
/* 0043EE4C 93CC0000 */  lbu   $t4, ($fp)
/* 0043EE50 2D8F0040 */  sltiu $t7, $t4, 0x40
/* 0043EE54 11E00009 */  beqz  $t7, .L0043EE7C
/* 0043EE58 00000000 */   nop   
/* 0043EE5C 8F998044 */  lw    $t9, %got(D_100108E4)($gp)
/* 0043EE60 000C6943 */  sra   $t5, $t4, 5
/* 0043EE64 000DC080 */  sll   $t8, $t5, 2
/* 0043EE68 273908E4 */  addiu $t9, %lo(D_100108E4) # addiu $t9, $t9, 0x8e4
/* 0043EE6C 03387021 */  addu  $t6, $t9, $t8
/* 0043EE70 8DCB0000 */  lw    $t3, ($t6)
/* 0043EE74 018B5004 */  sllv  $t2, $t3, $t4
/* 0043EE78 294F0000 */  slti  $t7, $t2, 0
.L0043EE7C:
/* 0043EE7C 15E00009 */  bnez  $t7, .L0043EEA4
/* 0043EE80 00000000 */   nop   
/* 0043EE84 8F998964 */  lw     $t9, %got(ustack)($gp)
/* 0043EE88 02C02025 */  move  $a0, $s6
/* 0043EE8C 8F390000 */  lw    $t9, ($t9)
/* 0043EE90 AF200004 */  sw    $zero, 4($t9)
/* 0043EE94 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 0043EE98 0320F809 */  jalr  $t9
/* 0043EE9C 00000000 */   nop   
/* 0043EEA0 8FBC0034 */  lw    $gp, 0x34($sp)
.L0043EEA4:
/* 0043EEA4 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 0043EEA8 02C02025 */  move  $a0, $s6
/* 0043EEAC 0320F809 */  jalr  $t9
/* 0043EEB0 00000000 */   nop   
/* 0043EEB4 10000068 */  b     .L0043F058
/* 0043EEB8 8FBC0034 */   lw    $gp, 0x34($sp)
.L0043EEBC:
/* 0043EEBC 24F8FFE0 */  addiu $t8, $a3, -0x20
.L0043EEC0:
/* 0043EEC0 2F0E0040 */  sltiu $t6, $t8, 0x40
/* 0043EEC4 11C00009 */  beqz  $t6, .L0043EEEC
/* 0043EEC8 00000000 */   nop   
/* 0043EECC 8F8A8044 */  lw    $t2, %got(D_100108DC)($gp)
/* 0043EED0 00185943 */  sra   $t3, $t8, 5
/* 0043EED4 000B6080 */  sll   $t4, $t3, 2
/* 0043EED8 254A08DC */  addiu $t2, %lo(D_100108DC) # addiu $t2, $t2, 0x8dc
/* 0043EEDC 014C6821 */  addu  $t5, $t2, $t4
/* 0043EEE0 8DAF0000 */  lw    $t7, ($t5)
/* 0043EEE4 030FC804 */  sllv  $t9, $t7, $t8
/* 0043EEE8 2B2E0000 */  slti  $t6, $t9, 0
.L0043EEEC:
/* 0043EEEC 11C0005A */  beqz  $t6, .L0043F058
/* 0043EEF0 00000000 */   nop   
/* 0043EEF4 93CA0001 */  lbu   $t2, 1($fp)
/* 0043EEF8 3C01000C */  lui   $at, 0xc
/* 0043EEFC 8FAB00F4 */  lw    $t3, 0xf4($sp)
/* 0043EF00 314C001F */  andi  $t4, $t2, 0x1f
/* 0043EF04 2D8D0020 */  sltiu $t5, $t4, 0x20
/* 0043EF08 000D7823 */  negu  $t7, $t5
/* 0043EF0C 01E1C024 */  and   $t8, $t7, $at
/* 0043EF10 0198C804 */  sllv  $t9, $t8, $t4
/* 0043EF14 07210050 */  bgez  $t9, .L0043F058
/* 0043EF18 00000000 */   nop   
/* 0043EF1C 91620000 */  lbu   $v0, ($t3)
/* 0043EF20 92C40000 */  lbu   $a0, ($s6)
/* 0043EF24 1522000B */  bne   $t1, $v0, .L0043EF54
/* 0043EF28 00000000 */   nop   
/* 0043EF2C 8D6E002C */  lw    $t6, 0x2c($t3)
/* 0043EF30 24010004 */  li    $at, 4
/* 0043EF34 15C00007 */  bnez  $t6, .L0043EF54
/* 0043EF38 00000000 */   nop   
/* 0043EF3C 14810005 */  bne   $a0, $at, .L0043EF54
/* 0043EF40 00000000 */   nop   
/* 0043EF44 92CA0020 */  lbu   $t2, 0x20($s6)
/* 0043EF48 2401007D */  li    $at, 125
/* 0043EF4C 5141000D */  beql  $t2, $at, .L0043EF84
/* 0043EF50 24010004 */   li    $at, 4
.L0043EF54:
/* 0043EF54 15240040 */  bne   $t1, $a0, .L0043F058
/* 0043EF58 00000000 */   nop   
/* 0043EF5C 8ECD002C */  lw    $t5, 0x2c($s6)
/* 0043EF60 24010004 */  li    $at, 4
/* 0043EF64 15A0003C */  bnez  $t5, .L0043F058
/* 0043EF68 00000000 */   nop   
/* 0043EF6C 1441003A */  bne   $v0, $at, .L0043F058
/* 0043EF70 8FAF00F4 */   lw    $t7, 0xf4($sp)
/* 0043EF74 91F80020 */  lbu   $t8, 0x20($t7)
/* 0043EF78 2401007D */  li    $at, 125
/* 0043EF7C 17010036 */  bne   $t8, $at, .L0043F058
/* 0043EF80 24010004 */   li    $at, 4
.L0043EF84:
/* 0043EF84 1481001B */  bne   $a0, $at, .L0043EFF4
/* 0043EF88 8FB900F4 */   lw    $t9, 0xf4($sp)
/* 0043EF8C 96D90006 */  lhu   $t9, 6($s6)
/* 0043EF90 8ECC0028 */  lw    $t4, 0x28($s6)
/* 0043EF94 8ED00024 */  lw    $s0, 0x24($s6)
/* 0043EF98 272BFFFF */  addiu $t3, $t9, -1
/* 0043EF9C 316EFFFF */  andi  $t6, $t3, 0xffff
/* 0043EFA0 A6CB0006 */  sh    $t3, 6($s6)
/* 0043EFA4 15C0000A */  bnez  $t6, .L0043EFD0
/* 0043EFA8 AFAC00F4 */   sw    $t4, 0xf4($sp)
/* 0043EFAC 8F998638 */  lw    $t9, %call16(delentry)($gp)
/* 0043EFB0 02C02025 */  move  $a0, $s6
/* 0043EFB4 0320F809 */  jalr  $t9
/* 0043EFB8 00000000 */   nop   
/* 0043EFBC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043EFC0 0200B025 */  move  $s6, $s0
/* 0043EFC4 8F938964 */  lw     $s3, %got(ustack)($gp)
/* 0043EFC8 10000022 */  b     .L0043F054
/* 0043EFCC 8E730000 */   lw    $s3, ($s3)
.L0043EFD0:
/* 0043EFD0 8FAA00F4 */  lw    $t2, 0xf4($sp)
/* 0043EFD4 954D0006 */  lhu   $t5, 6($t2)
/* 0043EFD8 25AF0001 */  addiu $t7, $t5, 1
/* 0043EFDC A54F0006 */  sh    $t7, 6($t2)
/* 0043EFE0 96180006 */  lhu   $t8, 6($s0)
/* 0043EFE4 270C0001 */  addiu $t4, $t8, 1
/* 0043EFE8 A60C0006 */  sh    $t4, 6($s0)
/* 0043EFEC 10000019 */  b     .L0043F054
/* 0043EFF0 0200B025 */   move  $s6, $s0
.L0043EFF4:
/* 0043EFF4 972B0006 */  lhu   $t3, 6($t9)
/* 0043EFF8 8F360028 */  lw    $s6, 0x28($t9)
/* 0043EFFC 8F300024 */  lw    $s0, 0x24($t9)
/* 0043F000 256EFFFF */  addiu $t6, $t3, -1
/* 0043F004 A72E0006 */  sh    $t6, 6($t9)
/* 0043F008 8FAD00F4 */  lw    $t5, 0xf4($sp)
/* 0043F00C 95AF0006 */  lhu   $t7, 6($t5)
/* 0043F010 55E0000A */  bnezl $t7, .L0043F03C
/* 0043F014 96CA0006 */   lhu   $t2, 6($s6)
/* 0043F018 8F998638 */  lw    $t9, %call16(delentry)($gp)
/* 0043F01C 01A02025 */  move  $a0, $t5
/* 0043F020 0320F809 */  jalr  $t9
/* 0043F024 00000000 */   nop   
/* 0043F028 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043F02C 8F938964 */  lw     $s3, %got(ustack)($gp)
/* 0043F030 10000007 */  b     .L0043F050
/* 0043F034 8E730000 */   lw    $s3, ($s3)
/* 0043F038 96CA0006 */  lhu   $t2, 6($s6)
.L0043F03C:
/* 0043F03C 25580001 */  addiu $t8, $t2, 1
/* 0043F040 A6D80006 */  sh    $t8, 6($s6)
/* 0043F044 960C0006 */  lhu   $t4, 6($s0)
/* 0043F048 258B0001 */  addiu $t3, $t4, 1
/* 0043F04C A60B0006 */  sh    $t3, 6($s0)
.L0043F050:
/* 0043F050 AFB000F4 */  sw    $s0, 0xf4($sp)
.L0043F054:
/* 0043F054 AE760000 */  sw    $s6, ($s3)
.L0043F058:
/* 0043F058 564015C6 */  bnezl $s2, .L00444774
/* 0043F05C 8FBF003C */   lw    $ra, 0x3c($sp)
/* 0043F060 93CE0000 */  lbu   $t6, ($fp)
/* 0043F064 25D9FFE0 */  addiu $t9, $t6, -0x20
/* 0043F068 2F2F0040 */  sltiu $t7, $t9, 0x40
/* 0043F06C 11E00009 */  beqz  $t7, .L0043F094
/* 0043F070 00000000 */   nop   
/* 0043F074 8F988044 */  lw    $t8, %got(D_100108D4)($gp)
/* 0043F078 00196943 */  sra   $t5, $t9, 5
/* 0043F07C 000D5080 */  sll   $t2, $t5, 2
/* 0043F080 271808D4 */  addiu $t8, %lo(D_100108D4) # addiu $t8, $t8, 0x8d4
/* 0043F084 030A6021 */  addu  $t4, $t8, $t2
/* 0043F088 8D8B0000 */  lw    $t3, ($t4)
/* 0043F08C 032B7004 */  sllv  $t6, $t3, $t9
/* 0043F090 29CF0000 */  slti  $t7, $t6, 0
.L0043F094:
/* 0043F094 11E0001C */  beqz  $t7, .L0043F108
/* 0043F098 00000000 */   nop   
/* 0043F09C 92D80000 */  lbu   $t8, ($s6)
/* 0043F0A0 24010004 */  li    $at, 4
/* 0043F0A4 02802825 */  move  $a1, $s4
/* 0043F0A8 13010017 */  beq   $t8, $at, .L0043F108
/* 0043F0AC 00000000 */   nop   
/* 0043F0B0 8F99868C */  lw    $t9, %call16(subovfw)($gp)
/* 0043F0B4 93C40001 */  lbu   $a0, 1($fp)
/* 0043F0B8 02A03025 */  move  $a2, $s5
/* 0043F0BC 0320F809 */  jalr  $t9
/* 0043F0C0 3084001F */   andi  $a0, $a0, 0x1f
/* 0043F0C4 14400010 */  bnez  $v0, .L0043F108
/* 0043F0C8 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0043F0CC 02953023 */  subu  $a2, $s4, $s5
/* 0043F0D0 10C00008 */  beqz  $a2, .L0043F0F4
/* 0043F0D4 00000000 */   nop   
/* 0043F0D8 8F9986B8 */  lw    $t9, %call16(binopwithconst)($gp)
/* 0043F0DC 24040001 */  li    $a0, 1
/* 0043F0E0 8FA500F4 */  lw    $a1, 0xf4($sp)
/* 0043F0E4 0320F809 */  jalr  $t9
/* 0043F0E8 00000000 */   nop   
/* 0043F0EC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043F0F0 AFA200F4 */  sw    $v0, 0xf4($sp)
.L0043F0F4:
/* 0043F0F4 8F8A8964 */  lw     $t2, %got(ustack)($gp)
/* 0043F0F8 8D4A0000 */  lw    $t2, ($t2)
/* 0043F0FC AD400004 */  sw    $zero, 4($t2)
/* 0043F100 10000044 */  b     .L0043F214
/* 0043F104 93C70000 */   lbu   $a3, ($fp)
.L0043F108:
/* 0043F108 12800042 */  beqz  $s4, .L0043F214
/* 0043F10C 93C70000 */   lbu   $a3, ($fp)
/* 0043F110 24010001 */  li    $at, 1
/* 0043F114 54E1001B */  bnel  $a3, $at, .L0043F184
/* 0043F118 93CA0000 */   lbu   $t2, ($fp)
/* 0043F11C 93D00001 */  lbu   $s0, 1($fp)
/* 0043F120 3C018A80 */  lui   $at, 0x8a80
/* 0043F124 3210001F */  andi  $s0, $s0, 0x1f
/* 0043F128 2E0C0020 */  sltiu $t4, $s0, 0x20
/* 0043F12C 000C5823 */  negu  $t3, $t4
/* 0043F130 0161C824 */  and   $t9, $t3, $at
/* 0043F134 02197004 */  sllv  $t6, $t9, $s0
/* 0043F138 05C30012 */  bgezl $t6, .L0043F184
/* 0043F13C 93CA0000 */   lbu   $t2, ($fp)
/* 0043F140 8F8D8964 */  lw     $t5, %got(ustack)($gp)
/* 0043F144 8F998688 */  lw    $t9, %call16(addovfw)($gp)
/* 0043F148 02002025 */  move  $a0, $s0
/* 0043F14C 8DAD0000 */  lw    $t5, ($t5)
/* 0043F150 02803025 */  move  $a2, $s4
/* 0043F154 0320F809 */  jalr  $t9
/* 0043F158 8DA50004 */   lw    $a1, 4($t5)
/* 0043F15C 14400008 */  bnez  $v0, .L0043F180
/* 0043F160 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0043F164 8F938964 */  lw     $s3, %got(ustack)($gp)
/* 0043F168 93C70000 */  lbu   $a3, ($fp)
/* 0043F16C 8E730000 */  lw    $s3, ($s3)
/* 0043F170 8E6F0004 */  lw    $t7, 4($s3)
/* 0043F174 01F4C021 */  addu  $t8, $t7, $s4
/* 0043F178 10000026 */  b     .L0043F214
/* 0043F17C AE780004 */   sw    $t8, 4($s3)
.L0043F180:
/* 0043F180 93CA0000 */  lbu   $t2, ($fp)
.L0043F184:
/* 0043F184 2401007D */  li    $at, 125
/* 0043F188 1541001A */  bne   $t2, $at, .L0043F1F4
/* 0043F18C 00000000 */   nop   
/* 0043F190 93D00001 */  lbu   $s0, 1($fp)
/* 0043F194 3C018A80 */  lui   $at, 0x8a80
/* 0043F198 3210001F */  andi  $s0, $s0, 0x1f
/* 0043F19C 2E0C0020 */  sltiu $t4, $s0, 0x20
/* 0043F1A0 000C5823 */  negu  $t3, $t4
/* 0043F1A4 0161C824 */  and   $t9, $t3, $at
/* 0043F1A8 02197004 */  sllv  $t6, $t9, $s0
/* 0043F1AC 05C10011 */  bgez  $t6, .L0043F1F4
/* 0043F1B0 00000000 */   nop   
/* 0043F1B4 8F8D8964 */  lw     $t5, %got(ustack)($gp)
/* 0043F1B8 8F99868C */  lw    $t9, %call16(subovfw)($gp)
/* 0043F1BC 02002025 */  move  $a0, $s0
/* 0043F1C0 8DAD0000 */  lw    $t5, ($t5)
/* 0043F1C4 02803025 */  move  $a2, $s4
/* 0043F1C8 0320F809 */  jalr  $t9
/* 0043F1CC 8DA50004 */   lw    $a1, 4($t5)
/* 0043F1D0 14400008 */  bnez  $v0, .L0043F1F4
/* 0043F1D4 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0043F1D8 8F938964 */  lw     $s3, %got(ustack)($gp)
/* 0043F1DC 93C70000 */  lbu   $a3, ($fp)
/* 0043F1E0 8E730000 */  lw    $s3, ($s3)
/* 0043F1E4 8E6F0004 */  lw    $t7, 4($s3)
/* 0043F1E8 01F4C023 */  subu  $t8, $t7, $s4
/* 0043F1EC 10000009 */  b     .L0043F214
/* 0043F1F0 AE780004 */   sw    $t8, 4($s3)
.L0043F1F4:
/* 0043F1F4 8F9986B8 */  lw    $t9, %call16(binopwithconst)($gp)
/* 0043F1F8 24040001 */  li    $a0, 1
/* 0043F1FC 8FA500F4 */  lw    $a1, 0xf4($sp)
/* 0043F200 0320F809 */  jalr  $t9
/* 0043F204 02803025 */   move  $a2, $s4
/* 0043F208 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043F20C AFA200F4 */  sw    $v0, 0xf4($sp)
/* 0043F210 93C70000 */  lbu   $a3, ($fp)
.L0043F214:
/* 0043F214 2CEA0080 */  sltiu $t2, $a3, 0x80
/* 0043F218 11400009 */  beqz  $t2, .L0043F240
/* 0043F21C 00000000 */   nop   
/* 0043F220 8F998044 */  lw    $t9, %got(D_10010900)($gp)
/* 0043F224 00076143 */  sra   $t4, $a3, 5
/* 0043F228 000C5880 */  sll   $t3, $t4, 2
/* 0043F22C 27390900 */  addiu $t9, %lo(D_10010900) # addiu $t9, $t9, 0x900
/* 0043F230 032B7021 */  addu  $t6, $t9, $t3
/* 0043F234 8DCD0000 */  lw    $t5, ($t6)
/* 0043F238 00ED7804 */  sllv  $t7, $t5, $a3
/* 0043F23C 29EA0000 */  slti  $t2, $t7, 0
.L0043F240:
/* 0043F240 5540000C */  bnezl $t2, .L0043F274
/* 0043F244 24E2FFE0 */   addiu $v0, $a3, -0x20
/* 0043F248 8F998024 */  lw    $t9, %got(func_0043B1DC)($gp)
/* 0043F24C 27A20110 */  addiu $v0, $sp, 0x110
/* 0043F250 2739B1DC */  addiu $t9, %lo(func_0043B1DC) # addiu $t9, $t9, -0x4e24
/* 0043F254 0320F809 */  jalr  $t9
/* 0043F258 00000000 */   nop   
/* 0043F25C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043F260 93C70000 */  lbu   $a3, ($fp)
/* 0043F264 8F8C8964 */  lw     $t4, %got(ustack)($gp)
/* 0043F268 8D8C0000 */  lw    $t4, ($t4)
/* 0043F26C 8D960000 */  lw    $s6, ($t4)
/* 0043F270 24E2FFE0 */  addiu $v0, $a3, -0x20
.L0043F274:
/* 0043F274 2C590040 */  sltiu $t9, $v0, 0x40
/* 0043F278 13200009 */  beqz  $t9, .L0043F2A0
/* 0043F27C 00000000 */   nop   
/* 0043F280 8F8D8044 */  lw    $t5, %got(D_100108CC)($gp)
/* 0043F284 00025943 */  sra   $t3, $v0, 5
/* 0043F288 000B7080 */  sll   $t6, $t3, 2
/* 0043F28C 25AD08CC */  addiu $t5, %lo(D_100108CC) # addiu $t5, $t5, 0x8cc
/* 0043F290 01AE7821 */  addu  $t7, $t5, $t6
/* 0043F294 8DF80000 */  lw    $t8, ($t7)
/* 0043F298 00585004 */  sllv  $t2, $t8, $v0
/* 0043F29C 29590000 */  slti  $t9, $t2, 0
.L0043F2A0:
/* 0043F2A0 13200030 */  beqz  $t9, .L0043F364
/* 0043F2A4 2C4B0040 */   sltiu $t3, $v0, 0x40
/* 0043F2A8 93CB0001 */  lbu   $t3, 1($fp)
/* 0043F2AC 3C018A80 */  lui   $at, 0x8a80
/* 0043F2B0 8FAC00F4 */  lw    $t4, 0xf4($sp)
/* 0043F2B4 316D001F */  andi  $t5, $t3, 0x1f
/* 0043F2B8 2DAE0020 */  sltiu $t6, $t5, 0x20
/* 0043F2BC 000E7823 */  negu  $t7, $t6
/* 0043F2C0 01E1C024 */  and   $t8, $t7, $at
/* 0043F2C4 01B85004 */  sllv  $t2, $t8, $t5
/* 0043F2C8 05410009 */  bgez  $t2, .L0043F2F0
/* 0043F2CC 02C08025 */   move  $s0, $s6
/* 0043F2D0 91990000 */  lbu   $t9, ($t4)
/* 0043F2D4 3C016000 */  lui   $at, 0x6000
/* 0043F2D8 2F2B0020 */  sltiu $t3, $t9, 0x20
/* 0043F2DC 000B7023 */  negu  $t6, $t3
/* 0043F2E0 01C17824 */  and   $t7, $t6, $at
/* 0043F2E4 032FC004 */  sllv  $t8, $t7, $t9
/* 0043F2E8 0700000B */  bltz  $t8, .L0043F318
/* 0043F2EC 00000000 */   nop   
.L0043F2F0:
/* 0043F2F0 8FB600F4 */  lw    $s6, 0xf4($sp)
/* 0043F2F4 24010029 */  li    $at, 41
/* 0043F2F8 14E10004 */  bne   $a3, $at, .L0043F30C
/* 0043F2FC AFB000F4 */   sw    $s0, 0xf4($sp)
/* 0043F300 240D004E */  li    $t5, 78
/* 0043F304 10000015 */  b     .L0043F35C
/* 0043F308 A3CD0000 */   sb    $t5, ($fp)
.L0043F30C:
/* 0043F30C 24040028 */  li    $a0, 40
/* 0043F310 10000012 */  b     .L0043F35C
/* 0043F314 A3C40000 */   sb    $a0, ($fp)
.L0043F318:
/* 0043F318 8F998024 */  lw    $t9, %got(func_0043B334)($gp)
/* 0043F31C 8FA400F4 */  lw    $a0, 0xf4($sp)
/* 0043F320 27A20110 */  addiu $v0, $sp, 0x110
/* 0043F324 2739B334 */  addiu $t9, %lo(func_0043B334) # addiu $t9, $t9, -0x4ccc
/* 0043F328 0320F809 */  jalr  $t9
/* 0043F32C 00000000 */   nop   
/* 0043F330 1040000A */  beqz  $v0, .L0043F35C
/* 0043F334 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0043F338 93CA0000 */  lbu   $t2, ($fp)
/* 0043F33C 24010029 */  li    $at, 41
/* 0043F340 AFA200F4 */  sw    $v0, 0xf4($sp)
/* 0043F344 15410004 */  bne   $t2, $at, .L0043F358
/* 0043F348 240C004E */   li    $t4, 78
/* 0043F34C 24040028 */  li    $a0, 40
/* 0043F350 10000002 */  b     .L0043F35C
/* 0043F354 A3C40000 */   sb    $a0, ($fp)
.L0043F358:
/* 0043F358 A3CC0000 */  sb    $t4, ($fp)
.L0043F35C:
/* 0043F35C 10000045 */  b     .L0043F474
/* 0043F360 93C70000 */   lbu   $a3, ($fp)
.L0043F364:
/* 0043F364 11600009 */  beqz  $t3, .L0043F38C
/* 0043F368 00000000 */   nop   
/* 0043F36C 8F998044 */  lw    $t9, %got(D_100108C4)($gp)
/* 0043F370 00027143 */  sra   $t6, $v0, 5
/* 0043F374 000E7880 */  sll   $t7, $t6, 2
/* 0043F378 273908C4 */  addiu $t9, %lo(D_100108C4) # addiu $t9, $t9, 0x8c4
/* 0043F37C 032FC021 */  addu  $t8, $t9, $t7
/* 0043F380 8F0D0000 */  lw    $t5, ($t8)
/* 0043F384 004D5004 */  sllv  $t2, $t5, $v0
/* 0043F388 294B0000 */  slti  $t3, $t2, 0
.L0043F38C:
/* 0043F38C 11600026 */  beqz  $t3, .L0043F428
/* 0043F390 2C4A0040 */   sltiu $t2, $v0, 0x40
/* 0043F394 93CE0001 */  lbu   $t6, 1($fp)
/* 0043F398 3C018A80 */  lui   $at, 0x8a80
/* 0043F39C 31D9001F */  andi  $t9, $t6, 0x1f
/* 0043F3A0 2F2F0020 */  sltiu $t7, $t9, 0x20
/* 0043F3A4 000FC023 */  negu  $t8, $t7
/* 0043F3A8 03016824 */  and   $t5, $t8, $at
/* 0043F3AC 032D5004 */  sllv  $t2, $t5, $t9
/* 0043F3B0 0541001B */  bgez  $t2, .L0043F420
/* 0043F3B4 00000000 */   nop   
/* 0043F3B8 92CC0000 */  lbu   $t4, ($s6)
/* 0043F3BC 3C016000 */  lui   $at, 0x6000
/* 0043F3C0 2D8B0020 */  sltiu $t3, $t4, 0x20
/* 0043F3C4 000B7023 */  negu  $t6, $t3
/* 0043F3C8 01C17824 */  and   $t7, $t6, $at
/* 0043F3CC 018FC004 */  sllv  $t8, $t7, $t4
/* 0043F3D0 07010013 */  bgez  $t8, .L0043F420
/* 0043F3D4 00000000 */   nop   
/* 0043F3D8 8F998024 */  lw    $t9, %got(func_0043B334)($gp)
/* 0043F3DC 02C02025 */  move  $a0, $s6
/* 0043F3E0 27A20110 */  addiu $v0, $sp, 0x110
/* 0043F3E4 2739B334 */  addiu $t9, %lo(func_0043B334) # addiu $t9, $t9, -0x4ccc
/* 0043F3E8 0320F809 */  jalr  $t9
/* 0043F3EC 00000000 */   nop   
/* 0043F3F0 1040000B */  beqz  $v0, .L0043F420
/* 0043F3F4 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0043F3F8 93CD0000 */  lbu   $t5, ($fp)
/* 0043F3FC 24040028 */  li    $a0, 40
/* 0043F400 2419004E */  li    $t9, 78
/* 0043F404 548D0004 */  bnel  $a0, $t5, .L0043F418
/* 0043F408 A3C40000 */   sb    $a0, ($fp)
/* 0043F40C 10000002 */  b     .L0043F418
/* 0043F410 A3D90000 */   sb    $t9, ($fp)
/* 0043F414 A3C40000 */  sb    $a0, ($fp)
.L0043F418:
/* 0043F418 8FB600F4 */  lw    $s6, 0xf4($sp)
/* 0043F41C AFA200F4 */  sw    $v0, 0xf4($sp)
.L0043F420:
/* 0043F420 10000014 */  b     .L0043F474
/* 0043F424 93C70000 */   lbu   $a3, ($fp)
.L0043F428:
/* 0043F428 11400009 */  beqz  $t2, .L0043F450
/* 0043F42C 00000000 */   nop   
/* 0043F430 8F8F8044 */  lw    $t7, %got(D_100108D4)($gp)
/* 0043F434 00025943 */  sra   $t3, $v0, 5
/* 0043F438 000B7080 */  sll   $t6, $t3, 2
/* 0043F43C 25EF08D4 */  addiu $t7, %lo(D_100108D4) # addiu $t7, $t7, 0x8d4
/* 0043F440 01EE6021 */  addu  $t4, $t7, $t6
/* 0043F444 8D980000 */  lw    $t8, ($t4)
/* 0043F448 00586804 */  sllv  $t5, $t8, $v0
/* 0043F44C 29AA0000 */  slti  $t2, $t5, 0
.L0043F450:
/* 0043F450 11400008 */  beqz  $t2, .L0043F474
/* 0043F454 00000000 */   nop   
/* 0043F458 92CB0000 */  lbu   $t3, ($s6)
/* 0043F45C 24010003 */  li    $at, 3
/* 0043F460 02C08025 */  move  $s0, $s6
/* 0043F464 11610003 */  beq   $t3, $at, .L0043F474
/* 0043F468 00000000 */   nop   
/* 0043F46C 8FB600F4 */  lw    $s6, 0xf4($sp)
/* 0043F470 AFB000F4 */  sw    $s0, 0xf4($sp)
.L0043F474:
/* 0043F474 8F998650 */  lw    $t9, %call16(isophash)($gp)
/* 0043F478 00E02025 */  move  $a0, $a3
/* 0043F47C 02C02825 */  move  $a1, $s6
/* 0043F480 8FA600F4 */  lw    $a2, 0xf4($sp)
/* 0043F484 0320F809 */  jalr  $t9
/* 0043F488 AFB600F8 */   sw    $s6, 0xf8($sp)
/* 0043F48C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043F490 3044FFFF */  andi  $a0, $v0, 0xffff
/* 0043F494 27A20110 */  addiu $v0, $sp, 0x110
/* 0043F498 8F998024 */  lw    $t9, %got(func_0043B504)($gp)
/* 0043F49C 2739B504 */  addiu $t9, %lo(func_0043B504) # addiu $t9, $t9, -0x4afc
/* 0043F4A0 0320F809 */  jalr  $t9
/* 0043F4A4 00000000 */   nop   
/* 0043F4A8 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043F4AC 0040A825 */  move  $s5, $v0
/* 0043F4B0 8F8F8B20 */  lw     $t7, %got(outofmem)($gp)
/* 0043F4B4 91EF0000 */  lbu   $t7, ($t7)
/* 0043F4B8 55E014AE */  bnezl $t7, .L00444774
/* 0043F4BC 8FBF003C */   lw    $ra, 0x3c($sp)
/* 0043F4C0 904E0000 */  lbu   $t6, ($v0)
/* 0043F4C4 240C0004 */  li    $t4, 4
/* 0043F4C8 15C0004F */  bnez  $t6, .L0043F608
/* 0043F4CC 00000000 */   nop   
/* 0043F4D0 A04C0000 */  sb    $t4, ($v0)
/* 0043F4D4 93D00001 */  lbu   $s0, 1($fp)
/* 0043F4D8 2401005D */  li    $at, 93
/* 0043F4DC 3210001F */  andi  $s0, $s0, 0x1f
/* 0043F4E0 A0500001 */  sb    $s0, 1($v0)
/* 0043F4E4 93C70000 */  lbu   $a3, ($fp)
/* 0043F4E8 24F8FFE0 */  addiu $t8, $a3, -0x20
/* 0043F4EC 2F0D0040 */  sltiu $t5, $t8, 0x40
/* 0043F4F0 11A0000A */  beqz  $t5, .L0043F51C
/* 0043F4F4 00000000 */   nop   
/* 0043F4F8 8F8B8044 */  lw    $t3, %got(D_100108DC)($gp)
/* 0043F4FC 0018C943 */  sra   $t9, $t8, 5
/* 0043F500 00195080 */  sll   $t2, $t9, 2
/* 0043F504 256B08DC */  addiu $t3, %lo(D_100108DC) # addiu $t3, $t3, 0x8dc
/* 0043F508 016A7821 */  addu  $t7, $t3, $t2
/* 0043F50C 8DEE0000 */  lw    $t6, ($t7)
/* 0043F510 030E6004 */  sllv  $t4, $t6, $t8
/* 0043F514 29990000 */  slti  $t9, $t4, 0
/* 0043F518 03206825 */  move  $t5, $t9
.L0043F51C:
/* 0043F51C 11A00003 */  beqz  $t5, .L0043F52C
/* 0043F520 240B0006 */   li    $t3, 6
/* 0043F524 10000006 */  b     .L0043F540
/* 0043F528 A04B0023 */   sb    $t3, 0x23($v0)
.L0043F52C:
/* 0043F52C 14E10003 */  bne   $a3, $at, .L0043F53C
/* 0043F530 240A000E */   li    $t2, 14
/* 0043F534 10000002 */  b     .L0043F540
/* 0043F538 A04A0023 */   sb    $t2, 0x23($v0)
.L0043F53C:
/* 0043F53C A0500023 */  sb    $s0, 0x23($v0)
.L0043F540:
/* 0043F540 8FB600F8 */  lw    $s6, 0xf8($sp)
/* 0043F544 A0470020 */  sb    $a3, 0x20($v0)
/* 0043F548 30E400FF */  andi  $a0, $a3, 0xff
/* 0043F54C AC560024 */  sw    $s6, 0x24($v0)
/* 0043F550 8FAF00F4 */  lw    $t7, 0xf4($sp)
/* 0043F554 2C8E00A0 */  sltiu $t6, $a0, 0xa0
/* 0043F558 11C00009 */  beqz  $t6, .L0043F580
/* 0043F55C AC4F0028 */   sw    $t7, 0x28($v0)
/* 0043F560 8F998044 */  lw    $t9, %got(D_100108B0)($gp)
/* 0043F564 0004C143 */  sra   $t8, $a0, 5
/* 0043F568 00186080 */  sll   $t4, $t8, 2
/* 0043F56C 273908B0 */  addiu $t9, %lo(D_100108B0) # addiu $t9, $t9, 0x8b0
/* 0043F570 032C6821 */  addu  $t5, $t9, $t4
/* 0043F574 8DAB0000 */  lw    $t3, ($t5)
/* 0043F578 008B5004 */  sllv  $t2, $t3, $a0
/* 0043F57C 294E0000 */  slti  $t6, $t2, 0
.L0043F580:
/* 0043F580 11C00004 */  beqz  $t6, .L0043F594
/* 0043F584 2401003A */   li    $at, 58
/* 0043F588 8FD80008 */  lw    $t8, 8($fp)
/* 0043F58C 90440020 */  lbu   $a0, 0x20($v0)
/* 0043F590 AC58002C */  sw    $t8, 0x2c($v0)
.L0043F594:
/* 0043F594 14810004 */  bne   $a0, $at, .L0043F5A8
/* 0043F598 240A0001 */   li    $t2, 1
/* 0043F59C 8FD90004 */  lw    $t9, 4($fp)
/* 0043F5A0 90440020 */  lbu   $a0, 0x20($v0)
/* 0043F5A4 A459003C */  sh    $t9, 0x3c($v0)
.L0043F5A8:
/* 0043F5A8 97CC0002 */  lhu   $t4, 2($fp)
/* 0043F5AC 248FFFE0 */  addiu $t7, $a0, -0x20
/* 0043F5B0 2DEE0040 */  sltiu $t6, $t7, 0x40
/* 0043F5B4 318D0002 */  andi  $t5, $t4, 2
/* 0043F5B8 000D582B */  sltu  $t3, $zero, $t5
/* 0043F5BC A04B003E */  sb    $t3, 0x3e($v0)
/* 0043F5C0 A44A0006 */  sh    $t2, 6($v0)
/* 0043F5C4 AC400030 */  sw    $zero, 0x30($v0)
/* 0043F5C8 A0400005 */  sb    $zero, 5($v0)
/* 0043F5CC 11C00009 */  beqz  $t6, .L0043F5F4
/* 0043F5D0 A0400004 */   sb    $zero, 4($v0)
/* 0043F5D4 8F8C8044 */  lw    $t4, %got(D_100108DC)($gp)
/* 0043F5D8 000FC143 */  sra   $t8, $t7, 5
/* 0043F5DC 0018C880 */  sll   $t9, $t8, 2
/* 0043F5E0 258C08DC */  addiu $t4, %lo(D_100108DC) # addiu $t4, $t4, 0x8dc
/* 0043F5E4 01996821 */  addu  $t5, $t4, $t9
/* 0043F5E8 8DAB0000 */  lw    $t3, ($t5)
/* 0043F5EC 01EB5004 */  sllv  $t2, $t3, $t7
/* 0043F5F0 294E0000 */  slti  $t6, $t2, 0
.L0043F5F4:
/* 0043F5F4 11C0000B */  beqz  $t6, .L0043F624
/* 0043F5F8 00000000 */   nop   
/* 0043F5FC AC400038 */  sw    $zero, 0x38($v0)
/* 0043F600 10000008 */  b     .L0043F624
/* 0043F604 AC40003C */   sw    $zero, 0x3c($v0)
.L0043F608:
/* 0043F608 8F998320 */  lw    $t9, %call16(incroccurrence)($gp)
/* 0043F60C AFB5010C */  sw    $s5, 0x10c($sp)
/* 0043F610 27A4010C */  addiu $a0, $sp, 0x10c
/* 0043F614 0320F809 */  jalr  $t9
/* 0043F618 00000000 */   nop   
/* 0043F61C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043F620 8FB5010C */  lw    $s5, 0x10c($sp)
.L0043F624:
/* 0043F624 8F8C8964 */  lw     $t4, %got(ustack)($gp)
/* 0043F628 8D8C0000 */  lw    $t4, ($t4)
/* 0043F62C 10001450 */  b     .L00444770
/* 0043F630 AD950000 */   sw    $s5, ($t4)
.L0043F634:
/* 0043F634 8F938964 */  lw     $s3, %got(ustack)($gp)
/* 0043F638 8F818964 */  lw     $at, %got(ustack)($gp)
/* 0043F63C 24090002 */  li    $t1, 2
/* 0043F640 8E730000 */  lw    $s3, ($s3)
/* 0043F644 00E02025 */  move  $a0, $a3
/* 0043F648 8E790000 */  lw    $t9, ($s3)
/* 0043F64C 8E6D000C */  lw    $t5, 0xc($s3)
/* 0043F650 8E740004 */  lw    $s4, 4($s3)
/* 0043F654 AFB900F4 */  sw    $t9, 0xf4($sp)
/* 0043F658 AC2D0000 */  sw    $t5, ($at)
/* 0043F65C 932F0000 */  lbu   $t7, ($t9)
/* 0043F660 152F000C */  bne   $t1, $t7, .L0043F694
/* 0043F664 00000000 */   nop   
/* 0043F668 8F2A0020 */  lw    $t2, 0x20($t9)
/* 0043F66C 8FCE0004 */  lw    $t6, 4($fp)
/* 0043F670 8F938964 */  lw     $s3, %got(ustack)($gp)
/* 0043F674 0154C021 */  addu  $t8, $t2, $s4
/* 0043F678 030E0019 */  multu $t8, $t6
/* 0043F67C 8E730000 */  lw    $s3, ($s3)
/* 0043F680 8E790004 */  lw    $t9, 4($s3)
/* 0043F684 00006012 */  mflo  $t4
/* 0043F688 032C6821 */  addu  $t5, $t9, $t4
/* 0043F68C 10001438 */  b     .L00444770
/* 0043F690 AE6D0004 */   sw    $t5, 4($s3)
.L0043F694:
/* 0043F694 8F938964 */  lw     $s3, %got(ustack)($gp)
/* 0043F698 8E730000 */  lw    $s3, ($s3)
/* 0043F69C 12800007 */  beqz  $s4, .L0043F6BC
/* 0043F6A0 8E760000 */   lw    $s6, ($s3)
/* 0043F6A4 8FCB0004 */  lw    $t3, 4($fp)
/* 0043F6A8 8E6F0004 */  lw    $t7, 4($s3)
/* 0043F6AC 028B0019 */  multu $s4, $t3
/* 0043F6B0 00005012 */  mflo  $t2
/* 0043F6B4 01EAC021 */  addu  $t8, $t7, $t2
/* 0043F6B8 AE780004 */  sw    $t8, 4($s3)
.L0043F6BC:
/* 0043F6BC 8F998650 */  lw    $t9, %call16(isophash)($gp)
/* 0043F6C0 02C02825 */  move  $a1, $s6
/* 0043F6C4 8FA600F4 */  lw    $a2, 0xf4($sp)
/* 0043F6C8 0320F809 */  jalr  $t9
/* 0043F6CC AFB600F8 */   sw    $s6, 0xf8($sp)
/* 0043F6D0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043F6D4 3044FFFF */  andi  $a0, $v0, 0xffff
/* 0043F6D8 27A20110 */  addiu $v0, $sp, 0x110
/* 0043F6DC 8F998024 */  lw    $t9, %got(func_0043B504)($gp)
/* 0043F6E0 2739B504 */  addiu $t9, %lo(func_0043B504) # addiu $t9, $t9, -0x4afc
/* 0043F6E4 0320F809 */  jalr  $t9
/* 0043F6E8 00000000 */   nop   
/* 0043F6EC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043F6F0 0040A825 */  move  $s5, $v0
/* 0043F6F4 8F8E8B20 */  lw     $t6, %got(outofmem)($gp)
/* 0043F6F8 91CE0000 */  lbu   $t6, ($t6)
/* 0043F6FC 55C0141D */  bnezl $t6, .L00444774
/* 0043F700 8FBF003C */   lw    $ra, 0x3c($sp)
/* 0043F704 90590000 */  lbu   $t9, ($v0)
/* 0043F708 8FB600F8 */  lw    $s6, 0xf8($sp)
/* 0043F70C 240C0004 */  li    $t4, 4
/* 0043F710 1720001C */  bnez  $t9, .L0043F784
/* 0043F714 00000000 */   nop   
/* 0043F718 A04C0000 */  sb    $t4, ($v0)
/* 0043F71C 93CD0001 */  lbu   $t5, 1($fp)
/* 0043F720 24010004 */  li    $at, 4
/* 0043F724 31AB001F */  andi  $t3, $t5, 0x1f
/* 0043F728 A04B0001 */  sb    $t3, 1($v0)
/* 0043F72C 92CF0000 */  lbu   $t7, ($s6)
/* 0043F730 51E10005 */  beql  $t7, $at, .L0043F748
/* 0043F734 92D80023 */   lbu   $t8, 0x23($s6)
/* 0043F738 92CA0001 */  lbu   $t2, 1($s6)
/* 0043F73C 10000003 */  b     .L0043F74C
/* 0043F740 A04A0023 */   sb    $t2, 0x23($v0)
/* 0043F744 92D80023 */  lbu   $t8, 0x23($s6)
.L0043F748:
/* 0043F748 A0580023 */  sb    $t8, 0x23($v0)
.L0043F74C:
/* 0043F74C 93CE0000 */  lbu   $t6, ($fp)
/* 0043F750 AC560024 */  sw    $s6, 0x24($v0)
/* 0043F754 240C0001 */  li    $t4, 1
/* 0043F758 A04E0020 */  sb    $t6, 0x20($v0)
/* 0043F75C 8FB900F4 */  lw    $t9, 0xf4($sp)
/* 0043F760 A44C0006 */  sh    $t4, 6($v0)
/* 0043F764 AC590028 */  sw    $t9, 0x28($v0)
/* 0043F768 8FCD0004 */  lw    $t5, 4($fp)
/* 0043F76C A040003E */  sb    $zero, 0x3e($v0)
/* 0043F770 AC400030 */  sw    $zero, 0x30($v0)
/* 0043F774 A0400005 */  sb    $zero, 5($v0)
/* 0043F778 A0400004 */  sb    $zero, 4($v0)
/* 0043F77C 10000008 */  b     .L0043F7A0
/* 0043F780 AC4D002C */   sw    $t5, 0x2c($v0)
.L0043F784:
/* 0043F784 8F998320 */  lw    $t9, %call16(incroccurrence)($gp)
/* 0043F788 AFB5010C */  sw    $s5, 0x10c($sp)
/* 0043F78C 27A4010C */  addiu $a0, $sp, 0x10c
/* 0043F790 0320F809 */  jalr  $t9
/* 0043F794 00000000 */   nop   
/* 0043F798 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043F79C 8FB5010C */  lw    $s5, 0x10c($sp)
.L0043F7A0:
/* 0043F7A0 8F8B8964 */  lw     $t3, %got(ustack)($gp)
/* 0043F7A4 8D6B0000 */  lw    $t3, ($t3)
/* 0043F7A8 100013F1 */  b     .L00444770
/* 0043F7AC AD750000 */   sw    $s5, ($t3)
.L0043F7B0:
/* 0043F7B0 8F938964 */  lw     $s3, %got(ustack)($gp)
/* 0043F7B4 8F818964 */  lw     $at, %got(ustack)($gp)
/* 0043F7B8 24090002 */  li    $t1, 2
/* 0043F7BC 8E730000 */  lw    $s3, ($s3)
/* 0043F7C0 2404005B */  li    $a0, 91
/* 0043F7C4 8E6F000C */  lw    $t7, 0xc($s3)
/* 0043F7C8 8E710000 */  lw    $s1, ($s3)
/* 0043F7CC 8E720004 */  lw    $s2, 4($s3)
/* 0043F7D0 8F938964 */  lw     $s3, %got(ustack)($gp)
/* 0043F7D4 AC2F0000 */  sw    $t7, ($at)
/* 0043F7D8 8F818964 */  lw     $at, %got(ustack)($gp)
/* 0043F7DC 8E730000 */  lw    $s3, ($s3)
/* 0043F7E0 8E6A0000 */  lw    $t2, ($s3)
/* 0043F7E4 8E78000C */  lw    $t8, 0xc($s3)
/* 0043F7E8 8E740004 */  lw    $s4, 4($s3)
/* 0043F7EC 8F938964 */  lw     $s3, %got(ustack)($gp)
/* 0043F7F0 AC380000 */  sw    $t8, ($at)
/* 0043F7F4 AFAA00F4 */  sw    $t2, 0xf4($sp)
/* 0043F7F8 91590000 */  lbu   $t9, ($t2)
/* 0043F7FC 8E730000 */  lw    $s3, ($s3)
/* 0043F800 8E760000 */  lw    $s6, ($s3)
/* 0043F804 15390013 */  bne   $t1, $t9, .L0043F854
/* 0043F808 8E750004 */   lw    $s5, 4($s3)
/* 0043F80C 8F9986B8 */  lw    $t9, %call16(binopwithconst)($gp)
/* 0043F810 8D4C0020 */  lw    $t4, 0x20($t2)
/* 0043F814 02C02825 */  move  $a1, $s6
/* 0043F818 0320F809 */  jalr  $t9
/* 0043F81C 01943021 */   addu  $a2, $t4, $s4
/* 0043F820 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043F824 8FAD00F4 */  lw    $t5, 0xf4($sp)
/* 0043F828 24090002 */  li    $t1, 2
/* 0043F82C 8F938964 */  lw     $s3, %got(ustack)($gp)
/* 0043F830 8E730000 */  lw    $s3, ($s3)
/* 0043F834 AE620000 */  sw    $v0, ($s3)
/* 0043F838 8DAB0020 */  lw    $t3, 0x20($t5)
/* 0043F83C 01747821 */  addu  $t7, $t3, $s4
/* 0043F840 02AF0019 */  multu $s5, $t7
/* 0043F844 00005012 */  mflo  $t2
/* 0043F848 AE6A0004 */  sw    $t2, 4($s3)
/* 0043F84C 10000060 */  b     .L0043F9D0
/* 0043F850 922C0000 */   lbu   $t4, ($s1)
.L0043F854:
/* 0043F854 92D80000 */  lbu   $t8, ($s6)
/* 0043F858 15380014 */  bne   $t1, $t8, .L0043F8AC
/* 0043F85C 00000000 */   nop   
/* 0043F860 8ED90020 */  lw    $t9, 0x20($s6)
/* 0043F864 2404005B */  li    $a0, 91
/* 0043F868 8FA500F4 */  lw    $a1, 0xf4($sp)
/* 0043F86C 03353021 */  addu  $a2, $t9, $s5
/* 0043F870 8F9986B8 */  lw    $t9, %call16(binopwithconst)($gp)
/* 0043F874 0320F809 */  jalr  $t9
/* 0043F878 00000000 */   nop   
/* 0043F87C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043F880 24090002 */  li    $t1, 2
/* 0043F884 8F938964 */  lw     $s3, %got(ustack)($gp)
/* 0043F888 8E730000 */  lw    $s3, ($s3)
/* 0043F88C AE620000 */  sw    $v0, ($s3)
/* 0043F890 8ECE0020 */  lw    $t6, 0x20($s6)
/* 0043F894 01D56021 */  addu  $t4, $t6, $s5
/* 0043F898 028C0019 */  multu $s4, $t4
/* 0043F89C 00006812 */  mflo  $t5
/* 0043F8A0 AE6D0004 */  sw    $t5, 4($s3)
/* 0043F8A4 1000004A */  b     .L0043F9D0
/* 0043F8A8 922C0000 */   lbu   $t4, ($s1)
.L0043F8AC:
/* 0043F8AC 12800008 */  beqz  $s4, .L0043F8D0
/* 0043F8B0 00000000 */   nop   
/* 0043F8B4 8F9986B8 */  lw    $t9, %call16(binopwithconst)($gp)
/* 0043F8B8 24040001 */  li    $a0, 1
/* 0043F8BC 8FA500F4 */  lw    $a1, 0xf4($sp)
/* 0043F8C0 0320F809 */  jalr  $t9
/* 0043F8C4 02803025 */   move  $a2, $s4
/* 0043F8C8 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043F8CC AFA200F4 */  sw    $v0, 0xf4($sp)
.L0043F8D0:
/* 0043F8D0 8F998024 */  lw    $t9, %got(func_0043B1DC)($gp)
/* 0043F8D4 27A20110 */  addiu $v0, $sp, 0x110
/* 0043F8D8 2739B1DC */  addiu $t9, %lo(func_0043B1DC) # addiu $t9, $t9, -0x4e24
/* 0043F8DC 0320F809 */  jalr  $t9
/* 0043F8E0 00000000 */   nop   
/* 0043F8E4 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043F8E8 2417005B */  li    $s7, 91
/* 0043F8EC 02E02025 */  move  $a0, $s7
/* 0043F8F0 8F8B8964 */  lw     $t3, %got(ustack)($gp)
/* 0043F8F4 8FA600F4 */  lw    $a2, 0xf4($sp)
/* 0043F8F8 8D6B0000 */  lw    $t3, ($t3)
/* 0043F8FC 8D650000 */  lw    $a1, ($t3)
/* 0043F900 A3D70000 */  sb    $s7, ($fp)
/* 0043F904 8F998650 */  lw    $t9, %call16(isophash)($gp)
/* 0043F908 AFA500F8 */  sw    $a1, 0xf8($sp)
/* 0043F90C 0320F809 */  jalr  $t9
/* 0043F910 00000000 */   nop   
/* 0043F914 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043F918 3044FFFF */  andi  $a0, $v0, 0xffff
/* 0043F91C 27A20110 */  addiu $v0, $sp, 0x110
/* 0043F920 8F998024 */  lw    $t9, %got(func_0043B504)($gp)
/* 0043F924 2739B504 */  addiu $t9, %lo(func_0043B504) # addiu $t9, $t9, -0x4afc
/* 0043F928 0320F809 */  jalr  $t9
/* 0043F92C 00000000 */   nop   
/* 0043F930 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043F934 24090002 */  li    $t1, 2
/* 0043F938 0040A825 */  move  $s5, $v0
/* 0043F93C 8F8F8B20 */  lw     $t7, %got(outofmem)($gp)
/* 0043F940 91EF0000 */  lbu   $t7, ($t7)
/* 0043F944 55E0138B */  bnezl $t7, .L00444774
/* 0043F948 8FBF003C */   lw    $ra, 0x3c($sp)
/* 0043F94C 904A0000 */  lbu   $t2, ($v0)
/* 0043F950 8FB600F8 */  lw    $s6, 0xf8($sp)
/* 0043F954 24180004 */  li    $t8, 4
/* 0043F958 15400011 */  bnez  $t2, .L0043F9A0
/* 0043F95C 240E0001 */   li    $t6, 1
/* 0043F960 A0580000 */  sb    $t8, ($v0)
/* 0043F964 93D00001 */  lbu   $s0, 1($fp)
/* 0043F968 A0570020 */  sb    $s7, 0x20($v0)
/* 0043F96C AC560024 */  sw    $s6, 0x24($v0)
/* 0043F970 3210001F */  andi  $s0, $s0, 0x1f
/* 0043F974 A0500001 */  sb    $s0, 1($v0)
/* 0043F978 A0500023 */  sb    $s0, 0x23($v0)
/* 0043F97C 8FB900F4 */  lw    $t9, 0xf4($sp)
/* 0043F980 A040003E */  sb    $zero, 0x3e($v0)
/* 0043F984 A44E0006 */  sh    $t6, 6($v0)
/* 0043F988 AC400030 */  sw    $zero, 0x30($v0)
/* 0043F98C A0400005 */  sb    $zero, 5($v0)
/* 0043F990 A0400004 */  sb    $zero, 4($v0)
/* 0043F994 AC590028 */  sw    $t9, 0x28($v0)
/* 0043F998 10000008 */  b     .L0043F9BC
/* 0043F99C AFA2010C */   sw    $v0, 0x10c($sp)
.L0043F9A0:
/* 0043F9A0 8F998320 */  lw    $t9, %call16(incroccurrence)($gp)
/* 0043F9A4 AFB5010C */  sw    $s5, 0x10c($sp)
/* 0043F9A8 27A4010C */  addiu $a0, $sp, 0x10c
/* 0043F9AC 0320F809 */  jalr  $t9
/* 0043F9B0 00000000 */   nop   
/* 0043F9B4 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043F9B8 24090002 */  li    $t1, 2
.L0043F9BC:
/* 0043F9BC 8F938964 */  lw     $s3, %got(ustack)($gp)
/* 0043F9C0 8FB5010C */  lw    $s5, 0x10c($sp)
/* 0043F9C4 8E730000 */  lw    $s3, ($s3)
/* 0043F9C8 AE750000 */  sw    $s5, ($s3)
/* 0043F9CC 922C0000 */  lbu   $t4, ($s1)
.L0043F9D0:
/* 0043F9D0 8E650004 */  lw    $a1, 4($s3)
/* 0043F9D4 8E760000 */  lw    $s6, ($s3)
/* 0043F9D8 152C0006 */  bne   $t1, $t4, .L0043F9F4
/* 0043F9DC 00A0A825 */   move  $s5, $a1
/* 0043F9E0 8E2D0020 */  lw    $t5, 0x20($s1)
/* 0043F9E4 00AD5821 */  addu  $t3, $a1, $t5
/* 0043F9E8 01727821 */  addu  $t7, $t3, $s2
/* 0043F9EC 10001360 */  b     .L00444770
/* 0043F9F0 AE6F0004 */   sw    $t7, 4($s3)
.L0043F9F4:
/* 0043F9F4 92CA0000 */  lbu   $t2, ($s6)
/* 0043F9F8 152A0007 */  bne   $t1, $t2, .L0043FA18
/* 0043F9FC 00000000 */   nop   
/* 0043FA00 8ED80020 */  lw    $t8, 0x20($s6)
/* 0043FA04 AE710000 */  sw    $s1, ($s3)
/* 0043FA08 0315C821 */  addu  $t9, $t8, $s5
/* 0043FA0C 03327021 */  addu  $t6, $t9, $s2
/* 0043FA10 10001357 */  b     .L00444770
/* 0043FA14 AE6E0004 */   sw    $t6, 4($s3)
.L0043FA18:
/* 0043FA18 52400016 */  beql  $s2, $zero, .L0043FA74
/* 0043FA1C 240B0001 */   li    $t3, 1
/* 0043FA20 8F998688 */  lw    $t9, %call16(addovfw)($gp)
/* 0043FA24 93C40001 */  lbu   $a0, 1($fp)
/* 0043FA28 02403025 */  move  $a2, $s2
/* 0043FA2C 0320F809 */  jalr  $t9
/* 0043FA30 3084001F */   andi  $a0, $a0, 0x1f
/* 0043FA34 14400007 */  bnez  $v0, .L0043FA54
/* 0043FA38 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0043FA3C 8F938964 */  lw     $s3, %got(ustack)($gp)
/* 0043FA40 8E730000 */  lw    $s3, ($s3)
/* 0043FA44 8E6C0004 */  lw    $t4, 4($s3)
/* 0043FA48 01926821 */  addu  $t5, $t4, $s2
/* 0043FA4C 10000008 */  b     .L0043FA70
/* 0043FA50 AE6D0004 */   sw    $t5, 4($s3)
.L0043FA54:
/* 0043FA54 8F9986B8 */  lw    $t9, %call16(binopwithconst)($gp)
/* 0043FA58 24040001 */  li    $a0, 1
/* 0043FA5C 02202825 */  move  $a1, $s1
/* 0043FA60 0320F809 */  jalr  $t9
/* 0043FA64 02403025 */   move  $a2, $s2
/* 0043FA68 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043FA6C 00408825 */  move  $s1, $v0
.L0043FA70:
/* 0043FA70 240B0001 */  li    $t3, 1
.L0043FA74:
/* 0043FA74 A3CB0000 */  sb    $t3, ($fp)
/* 0043FA78 8F998650 */  lw    $t9, %call16(isophash)($gp)
/* 0043FA7C 24040001 */  li    $a0, 1
/* 0043FA80 02C02825 */  move  $a1, $s6
/* 0043FA84 02203025 */  move  $a2, $s1
/* 0043FA88 0320F809 */  jalr  $t9
/* 0043FA8C AFB600F8 */   sw    $s6, 0xf8($sp)
/* 0043FA90 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043FA94 3044FFFF */  andi  $a0, $v0, 0xffff
/* 0043FA98 AFB100F4 */  sw    $s1, 0xf4($sp)
/* 0043FA9C 8F998024 */  lw    $t9, %got(func_0043B504)($gp)
/* 0043FAA0 27A20110 */  addiu $v0, $sp, 0x110
/* 0043FAA4 2739B504 */  addiu $t9, %lo(func_0043B504) # addiu $t9, $t9, -0x4afc
/* 0043FAA8 0320F809 */  jalr  $t9
/* 0043FAAC 00000000 */   nop   
/* 0043FAB0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043FAB4 0040A825 */  move  $s5, $v0
/* 0043FAB8 8F8F8B20 */  lw     $t7, %got(outofmem)($gp)
/* 0043FABC 91EF0000 */  lbu   $t7, ($t7)
/* 0043FAC0 55E0132C */  bnezl $t7, .L00444774
/* 0043FAC4 8FBF003C */   lw    $ra, 0x3c($sp)
/* 0043FAC8 904A0000 */  lbu   $t2, ($v0)
/* 0043FACC 15400013 */  bnez  $t2, .L0043FB1C
/* 0043FAD0 00000000 */   nop   
/* 0043FAD4 8FB600F8 */  lw    $s6, 0xf8($sp)
/* 0043FAD8 24180004 */  li    $t8, 4
/* 0043FADC A0580000 */  sb    $t8, ($v0)
/* 0043FAE0 93D00001 */  lbu   $s0, 1($fp)
/* 0043FAE4 24190001 */  li    $t9, 1
/* 0043FAE8 240E0001 */  li    $t6, 1
/* 0043FAEC 3210001F */  andi  $s0, $s0, 0x1f
/* 0043FAF0 A0500001 */  sb    $s0, 1($v0)
/* 0043FAF4 A0500023 */  sb    $s0, 0x23($v0)
/* 0043FAF8 A0590020 */  sb    $t9, 0x20($v0)
/* 0043FAFC AC510028 */  sw    $s1, 0x28($v0)
/* 0043FB00 A040003E */  sb    $zero, 0x3e($v0)
/* 0043FB04 A44E0006 */  sh    $t6, 6($v0)
/* 0043FB08 AC400030 */  sw    $zero, 0x30($v0)
/* 0043FB0C A0400005 */  sb    $zero, 5($v0)
/* 0043FB10 A0400004 */  sb    $zero, 4($v0)
/* 0043FB14 10000008 */  b     .L0043FB38
/* 0043FB18 AC560024 */   sw    $s6, 0x24($v0)
.L0043FB1C:
/* 0043FB1C 8F998320 */  lw    $t9, %call16(incroccurrence)($gp)
/* 0043FB20 AFB5010C */  sw    $s5, 0x10c($sp)
/* 0043FB24 27A4010C */  addiu $a0, $sp, 0x10c
/* 0043FB28 0320F809 */  jalr  $t9
/* 0043FB2C 00000000 */   nop   
/* 0043FB30 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043FB34 8FB5010C */  lw    $s5, 0x10c($sp)
.L0043FB38:
/* 0043FB38 8F8C8964 */  lw     $t4, %got(ustack)($gp)
/* 0043FB3C 8D8C0000 */  lw    $t4, ($t4)
/* 0043FB40 1000130B */  b     .L00444770
/* 0043FB44 AD950000 */   sw    $s5, ($t4)
.L0043FB48:
/* 0043FB48 2402005E */  li    $v0, 94
/* 0043FB4C 14470022 */  bne   $v0, $a3, .L0043FBD8
/* 0043FB50 00008825 */   move  $s1, $zero
/* 0043FB54 93CD0001 */  lbu   $t5, 1($fp)
/* 0043FB58 3C01000C */  lui   $at, 0xc
/* 0043FB5C 31AB001F */  andi  $t3, $t5, 0x1f
/* 0043FB60 2D6F0020 */  sltiu $t7, $t3, 0x20
/* 0043FB64 000F5023 */  negu  $t2, $t7
/* 0043FB68 0141C024 */  and   $t8, $t2, $at
/* 0043FB6C 0178C804 */  sllv  $t9, $t8, $t3
/* 0043FB70 07210019 */  bgez  $t9, .L0043FBD8
/* 0043FB74 00000000 */   nop   
/* 0043FB78 97CE0002 */  lhu   $t6, 2($fp)
/* 0043FB7C 31CC0002 */  andi  $t4, $t6, 2
/* 0043FB80 15800015 */  bnez  $t4, .L0043FBD8
/* 0043FB84 00000000 */   nop   
/* 0043FB88 8F8D8964 */  lw     $t5, %got(ustack)($gp)
/* 0043FB8C 24090002 */  li    $t1, 2
/* 0043FB90 8DAD0000 */  lw    $t5, ($t5)
/* 0043FB94 8DB60000 */  lw    $s6, ($t5)
/* 0043FB98 92CF0000 */  lbu   $t7, ($s6)
/* 0043FB9C 012F2826 */  xor   $a1, $t1, $t7
/* 0043FBA0 2CA50001 */  sltiu $a1, $a1, 1
/* 0043FBA4 50A0000B */  beql  $a1, $zero, .L0043FBD4
/* 0043FBA8 30B100FF */   andi  $s1, $a1, 0xff
/* 0043FBAC 8F8A8990 */  lw     $t2, %got(realdispdiv)($gp)
/* 0043FBB0 96D80020 */  lhu   $t8, 0x20($s6)
/* 0043FBB4 8D4A0000 */  lw    $t2, ($t2)
/* 0043FBB8 07010003 */  bgez  $t8, .L0043FBC8
/* 0043FBBC 00185A03 */   sra   $t3, $t8, 8
/* 0043FBC0 270100FF */  addiu $at, $t8, 0xff
/* 0043FBC4 00015A03 */  sra   $t3, $at, 8
.L0043FBC8:
/* 0043FBC8 014B2826 */  xor   $a1, $t2, $t3
/* 0043FBCC 2CA50001 */  sltiu $a1, $a1, 1
/* 0043FBD0 30B100FF */  andi  $s1, $a1, 0xff
.L0043FBD4:
/* 0043FBD4 AFB600F8 */  sw    $s6, 0xf8($sp)
.L0043FBD8:
/* 0043FBD8 122000F3 */  beqz  $s1, .L0043FFA8
/* 0043FBDC 8FB600F8 */   lw    $s6, 0xf8($sp)
/* 0043FBE0 8F92898C */  lw     $s2, %got(currealpool)($gp)
/* 0043FBE4 96D90020 */  lhu   $t9, 0x20($s6)
/* 0043FBE8 2403002D */  li    $v1, 45
/* 0043FBEC 8E420000 */  lw    $v0, ($s2)
/* 0043FBF0 332E00FF */  andi  $t6, $t9, 0xff
/* 0043FBF4 004E6021 */  addu  $t4, $v0, $t6
/* 0043FBF8 918D0000 */  lbu   $t5, ($t4)
/* 0043FBFC 506D003B */  beql  $v1, $t5, .L0043FCEC
/* 0043FC00 96C30022 */   lhu   $v1, 0x22($s6)
/* 0043FC04 8F858950 */  lw     $a1, %got(ustrptr)($gp)
/* 0043FC08 96CF0022 */  lhu   $t7, 0x22($s6)
/* 0043FC0C AFB600F8 */  sw    $s6, 0xf8($sp)
/* 0043FC10 8CA50000 */  lw    $a1, ($a1)
/* 0043FC14 25F80001 */  addiu $t8, $t7, 1
/* 0043FC18 AFD80010 */  sw    $t8, 0x10($fp)
/* 0043FC1C A0A30000 */  sb    $v1, ($a1)
/* 0043FC20 96D70022 */  lhu   $s7, 0x22($s6)
/* 0043FC24 1AE00069 */  blez  $s7, .L0043FDCC
/* 0043FC28 26F70001 */   addiu $s7, $s7, 1
/* 0043FC2C 26E4FFFF */  addiu $a0, $s7, -1
/* 0043FC30 30840003 */  andi  $a0, $a0, 3
/* 0043FC34 1080000E */  beqz  $a0, .L0043FC70
/* 0043FC38 24110001 */   li    $s1, 1
/* 0043FC3C 24830001 */  addiu $v1, $a0, 1
/* 0043FC40 00B18021 */  addu  $s0, $a1, $s1
.L0043FC44:
/* 0043FC44 96CA0020 */  lhu   $t2, 0x20($s6)
/* 0043FC48 26100001 */  addiu $s0, $s0, 1
/* 0043FC4C 314B00FF */  andi  $t3, $t2, 0xff
/* 0043FC50 004BC821 */  addu  $t9, $v0, $t3
/* 0043FC54 03317021 */  addu  $t6, $t9, $s1
/* 0043FC58 91CCFFFF */  lbu   $t4, -1($t6)
/* 0043FC5C 26310001 */  addiu $s1, $s1, 1
/* 0043FC60 1471FFF8 */  bne   $v1, $s1, .L0043FC44
/* 0043FC64 A20CFFFF */   sb    $t4, -1($s0)
/* 0043FC68 12370058 */  beq   $s1, $s7, .L0043FDCC
/* 0043FC6C AFB600F8 */   sw    $s6, 0xf8($sp)
.L0043FC70:
/* 0043FC70 00B18021 */  addu  $s0, $a1, $s1
.L0043FC74:
/* 0043FC74 96CD0020 */  lhu   $t5, 0x20($s6)
/* 0043FC78 26100004 */  addiu $s0, $s0, 4
/* 0043FC7C 31AF00FF */  andi  $t7, $t5, 0xff
/* 0043FC80 004FC021 */  addu  $t8, $v0, $t7
/* 0043FC84 03115021 */  addu  $t2, $t8, $s1
/* 0043FC88 914BFFFF */  lbu   $t3, -1($t2)
/* 0043FC8C A20BFFFC */  sb    $t3, -4($s0)
/* 0043FC90 96D90020 */  lhu   $t9, 0x20($s6)
/* 0043FC94 332E00FF */  andi  $t6, $t9, 0xff
/* 0043FC98 004E6021 */  addu  $t4, $v0, $t6
/* 0043FC9C 01916821 */  addu  $t5, $t4, $s1
/* 0043FCA0 91AF0000 */  lbu   $t7, ($t5)
/* 0043FCA4 A20FFFFD */  sb    $t7, -3($s0)
/* 0043FCA8 96D80020 */  lhu   $t8, 0x20($s6)
/* 0043FCAC 330A00FF */  andi  $t2, $t8, 0xff
/* 0043FCB0 004A5821 */  addu  $t3, $v0, $t2
/* 0043FCB4 0171C821 */  addu  $t9, $t3, $s1
/* 0043FCB8 932E0001 */  lbu   $t6, 1($t9)
/* 0043FCBC A20EFFFE */  sb    $t6, -2($s0)
/* 0043FCC0 96CC0020 */  lhu   $t4, 0x20($s6)
/* 0043FCC4 318D00FF */  andi  $t5, $t4, 0xff
/* 0043FCC8 004D7821 */  addu  $t7, $v0, $t5
/* 0043FCCC 01F1C021 */  addu  $t8, $t7, $s1
/* 0043FCD0 930A0002 */  lbu   $t2, 2($t8)
/* 0043FCD4 26310004 */  addiu $s1, $s1, 4
/* 0043FCD8 1637FFE6 */  bne   $s1, $s7, .L0043FC74
/* 0043FCDC A20AFFFF */   sb    $t2, -1($s0)
/* 0043FCE0 1000003A */  b     .L0043FDCC
/* 0043FCE4 AFB600F8 */   sw    $s6, 0xf8($sp)
/* 0043FCE8 96C30022 */  lhu   $v1, 0x22($s6)
.L0043FCEC:
/* 0043FCEC AFB600F8 */  sw    $s6, 0xf8($sp)
/* 0043FCF0 246BFFFF */  addiu $t3, $v1, -1
/* 0043FCF4 28610002 */  slti  $at, $v1, 2
/* 0043FCF8 14200034 */  bnez  $at, .L0043FDCC
/* 0043FCFC AFCB0010 */   sw    $t3, 0x10($fp)
/* 0043FD00 24770001 */  addiu $s7, $v1, 1
/* 0043FD04 26E4FFFE */  addiu $a0, $s7, -2
/* 0043FD08 30840003 */  andi  $a0, $a0, 3
/* 0043FD0C 10800010 */  beqz  $a0, .L0043FD50
/* 0043FD10 24110002 */   li    $s1, 2
/* 0043FD14 8F998950 */  lw     $t9, %got(ustrptr)($gp)
/* 0043FD18 24830002 */  addiu $v1, $a0, 2
/* 0043FD1C 8F390000 */  lw    $t9, ($t9)
/* 0043FD20 03318021 */  addu  $s0, $t9, $s1
.L0043FD24:
/* 0043FD24 96CE0020 */  lhu   $t6, 0x20($s6)
/* 0043FD28 26100001 */  addiu $s0, $s0, 1
/* 0043FD2C 31CC00FF */  andi  $t4, $t6, 0xff
/* 0043FD30 004C6821 */  addu  $t5, $v0, $t4
/* 0043FD34 01B17821 */  addu  $t7, $t5, $s1
/* 0043FD38 91F8FFFF */  lbu   $t8, -1($t7)
/* 0043FD3C 26310001 */  addiu $s1, $s1, 1
/* 0043FD40 1471FFF8 */  bne   $v1, $s1, .L0043FD24
/* 0043FD44 A218FFFD */   sb    $t8, -3($s0)
/* 0043FD48 12370020 */  beq   $s1, $s7, .L0043FDCC
/* 0043FD4C AFB600F8 */   sw    $s6, 0xf8($sp)
.L0043FD50:
/* 0043FD50 8F8A8950 */  lw     $t2, %got(ustrptr)($gp)
/* 0043FD54 8D4A0000 */  lw    $t2, ($t2)
/* 0043FD58 01518021 */  addu  $s0, $t2, $s1
.L0043FD5C:
/* 0043FD5C 96CB0020 */  lhu   $t3, 0x20($s6)
/* 0043FD60 26100004 */  addiu $s0, $s0, 4
/* 0043FD64 317900FF */  andi  $t9, $t3, 0xff
/* 0043FD68 00597021 */  addu  $t6, $v0, $t9
/* 0043FD6C 01D16021 */  addu  $t4, $t6, $s1
/* 0043FD70 918DFFFF */  lbu   $t5, -1($t4)
/* 0043FD74 A20DFFFA */  sb    $t5, -6($s0)
/* 0043FD78 96CF0020 */  lhu   $t7, 0x20($s6)
/* 0043FD7C 31F800FF */  andi  $t8, $t7, 0xff
/* 0043FD80 00585021 */  addu  $t2, $v0, $t8
/* 0043FD84 01515821 */  addu  $t3, $t2, $s1
/* 0043FD88 91790000 */  lbu   $t9, ($t3)
/* 0043FD8C A219FFFB */  sb    $t9, -5($s0)
/* 0043FD90 96CE0020 */  lhu   $t6, 0x20($s6)
/* 0043FD94 31CC00FF */  andi  $t4, $t6, 0xff
/* 0043FD98 004C6821 */  addu  $t5, $v0, $t4
/* 0043FD9C 01B17821 */  addu  $t7, $t5, $s1
/* 0043FDA0 91F80001 */  lbu   $t8, 1($t7)
/* 0043FDA4 A218FFFC */  sb    $t8, -4($s0)
/* 0043FDA8 96CA0020 */  lhu   $t2, 0x20($s6)
/* 0043FDAC 314B00FF */  andi  $t3, $t2, 0xff
/* 0043FDB0 004BC821 */  addu  $t9, $v0, $t3
/* 0043FDB4 03317021 */  addu  $t6, $t9, $s1
/* 0043FDB8 91CC0002 */  lbu   $t4, 2($t6)
/* 0043FDBC 26310004 */  addiu $s1, $s1, 4
/* 0043FDC0 1637FFE6 */  bne   $s1, $s7, .L0043FD5C
/* 0043FDC4 A20CFFFD */   sb    $t4, -3($s0)
/* 0043FDC8 AFB600F8 */  sw    $s6, 0xf8($sp)
.L0043FDCC:
/* 0043FDCC 8F998648 */  lw    $t9, %call16(realhash)($gp)
/* 0043FDD0 8FC40010 */  lw    $a0, 0x10($fp)
/* 0043FDD4 0320F809 */  jalr  $t9
/* 0043FDD8 00000000 */   nop   
/* 0043FDDC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043FDE0 3044FFFF */  andi  $a0, $v0, 0xffff
/* 0043FDE4 27A20110 */  addiu $v0, $sp, 0x110
/* 0043FDE8 8F998024 */  lw    $t9, %got(func_0043B504)($gp)
/* 0043FDEC 2739B504 */  addiu $t9, %lo(func_0043B504) # addiu $t9, $t9, -0x4afc
/* 0043FDF0 0320F809 */  jalr  $t9
/* 0043FDF4 00000000 */   nop   
/* 0043FDF8 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043FDFC 24090002 */  li    $t1, 2
/* 0043FE00 0040A825 */  move  $s5, $v0
/* 0043FE04 8F8D8B20 */  lw     $t5, %got(outofmem)($gp)
/* 0043FE08 91AD0000 */  lbu   $t5, ($t5)
/* 0043FE0C 55A01259 */  bnezl $t5, .L00444774
/* 0043FE10 8FBF003C */   lw    $ra, 0x3c($sp)
/* 0043FE14 904F0000 */  lbu   $t7, ($v0)
/* 0043FE18 15E00060 */  bnez  $t7, .L0043FF9C
/* 0043FE1C 00000000 */   nop   
/* 0043FE20 A0490000 */  sb    $t1, ($v0)
/* 0043FE24 93D80001 */  lbu   $t8, 1($fp)
/* 0043FE28 8F868994 */  lw     $a2, %got(realdispmod)($gp)
/* 0043FE2C 330A001F */  andi  $t2, $t8, 0x1f
/* 0043FE30 A04A0001 */  sb    $t2, 1($v0)
/* 0043FE34 8FD60010 */  lw    $s6, 0x10($fp)
/* 0043FE38 90C60000 */  lbu   $a2, ($a2)
/* 0043FE3C 00D63821 */  addu  $a3, $a2, $s6
/* 0043FE40 28E10100 */  slti  $at, $a3, 0x100
/* 0043FE44 54200017 */  bnezl $at, .L0043FEA4
/* 0043FE48 8E450000 */   lw    $a1, ($s2)
/* 0043FE4C 8F8B8990 */  lw     $t3, %got(realdispdiv)($gp)
/* 0043FE50 8F818990 */  lw     $at, %got(realdispdiv)($gp)
/* 0043FE54 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 0043FE58 8D6B0000 */  lw    $t3, ($t3)
/* 0043FE5C 24040104 */  li    $a0, 260
/* 0043FE60 25790001 */  addiu $t9, $t3, 1
/* 0043FE64 AC390000 */  sw    $t9, ($at)
/* 0043FE68 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 0043FE6C 8F818994 */  lw     $at, %got(realdispmod)($gp)
/* 0043FE70 0320F809 */  jalr  $t9
/* 0043FE74 A0200000 */   sb    $zero, ($at)
/* 0043FE78 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043FE7C 8E4E0000 */  lw    $t6, ($s2)
/* 0043FE80 8F968DA4 */  lw     $s6, %got(u)($gp)
/* 0043FE84 ADC20100 */  sw    $v0, 0x100($t6)
/* 0043FE88 8F868994 */  lw     $a2, %got(realdispmod)($gp)
/* 0043FE8C AE420000 */  sw    $v0, ($s2)
/* 0043FE90 AC400100 */  sw    $zero, 0x100($v0)
/* 0043FE94 8ED60010 */  lw    $s6, 0x10($s6)
/* 0043FE98 90C60000 */  lbu   $a2, ($a2)
/* 0043FE9C 00D63821 */  addu  $a3, $a2, $s6
/* 0043FEA0 8E450000 */  lw    $a1, ($s2)
.L0043FEA4:
/* 0043FEA4 1AC00023 */  blez  $s6, .L0043FF34
/* 0043FEA8 02C0B825 */   move  $s7, $s6
/* 0043FEAC 26F70001 */  addiu $s7, $s7, 1
/* 0043FEB0 26E4FFFF */  addiu $a0, $s7, -1
/* 0043FEB4 30840003 */  andi  $a0, $a0, 3
/* 0043FEB8 1080000E */  beqz  $a0, .L0043FEF4
/* 0043FEBC 24110001 */   li    $s1, 1
/* 0043FEC0 8F8D8950 */  lw     $t5, %got(ustrptr)($gp)
/* 0043FEC4 24820001 */  addiu $v0, $a0, 1
/* 0043FEC8 00A61821 */  addu  $v1, $a1, $a2
/* 0043FECC 8DAD0000 */  lw    $t5, ($t5)
/* 0043FED0 01B18021 */  addu  $s0, $t5, $s1
.L0043FED4:
/* 0043FED4 920FFFFF */  lbu   $t7, -1($s0)
/* 0043FED8 0071C021 */  addu  $t8, $v1, $s1
/* 0043FEDC 26310001 */  addiu $s1, $s1, 1
/* 0043FEE0 26100001 */  addiu $s0, $s0, 1
/* 0043FEE4 1451FFFB */  bne   $v0, $s1, .L0043FED4
/* 0043FEE8 A30FFFFF */   sb    $t7, -1($t8)
/* 0043FEEC 12370011 */  beq   $s1, $s7, .L0043FF34
/* 0043FEF0 00000000 */   nop   
.L0043FEF4:
/* 0043FEF4 8F8A8950 */  lw     $t2, %got(ustrptr)($gp)
/* 0043FEF8 00A61821 */  addu  $v1, $a1, $a2
/* 0043FEFC 8D4A0000 */  lw    $t2, ($t2)
/* 0043FF00 01518021 */  addu  $s0, $t2, $s1
.L0043FF04:
/* 0043FF04 920BFFFF */  lbu   $t3, -1($s0)
/* 0043FF08 00711021 */  addu  $v0, $v1, $s1
/* 0043FF0C 26310004 */  addiu $s1, $s1, 4
/* 0043FF10 A04BFFFF */  sb    $t3, -1($v0)
/* 0043FF14 92190000 */  lbu   $t9, ($s0)
/* 0043FF18 26100004 */  addiu $s0, $s0, 4
/* 0043FF1C A0590000 */  sb    $t9, ($v0)
/* 0043FF20 920EFFFD */  lbu   $t6, -3($s0)
/* 0043FF24 A04E0001 */  sb    $t6, 1($v0)
/* 0043FF28 920CFFFE */  lbu   $t4, -2($s0)
/* 0043FF2C 1637FFF5 */  bne   $s1, $s7, .L0043FF04
/* 0043FF30 A04C0002 */   sb    $t4, 2($v0)
.L0043FF34:
/* 0043FF34 8F8D8990 */  lw     $t5, %got(realdispdiv)($gp)
/* 0043FF38 8F938964 */  lw     $s3, %got(ustack)($gp)
/* 0043FF3C 8F818994 */  lw     $at, %got(realdispmod)($gp)
/* 0043FF40 8DAD0000 */  lw    $t5, ($t5)
/* 0043FF44 A6B60022 */  sh    $s6, 0x22($s5)
/* 0043FF48 3C037FFF */  lui   $v1, 0x7fff
/* 0043FF4C 000D7A00 */  sll   $t7, $t5, 8
/* 0043FF50 01E6C021 */  addu  $t8, $t7, $a2
/* 0043FF54 A6B80020 */  sh    $t8, 0x20($s5)
/* 0043FF58 8E730000 */  lw    $s3, ($s3)
/* 0043FF5C A0270000 */  sb    $a3, ($at)
/* 0043FF60 3463FFFF */  ori   $v1, $v1, 0xffff
/* 0043FF64 8E6A0000 */  lw    $t2, ($s3)
/* 0043FF68 8D42002C */  lw    $v0, 0x2c($t2)
/* 0043FF6C 14620003 */  bne   $v1, $v0, .L0043FF7C
/* 0043FF70 00025823 */   negu  $t3, $v0
/* 0043FF74 10000002 */  b     .L0043FF80
/* 0043FF78 AEA3002C */   sw    $v1, 0x2c($s5)
.L0043FF7C:
/* 0043FF7C AEAB002C */  sw    $t3, 0x2c($s5)
.L0043FF80:
/* 0043FF80 8E790000 */  lw    $t9, ($s3)
/* 0043FF84 8FB600F8 */  lw    $s6, 0xf8($sp)
/* 0043FF88 8F2E0030 */  lw    $t6, 0x30($t9)
/* 0043FF8C AEAE0030 */  sw    $t6, 0x30($s5)
/* 0043FF90 8ECC0028 */  lw    $t4, 0x28($s6)
/* 0043FF94 AEA00018 */  sw    $zero, 0x18($s5)
/* 0043FF98 AEAC0028 */  sw    $t4, 0x28($s5)
.L0043FF9C:
/* 0043FF9C 8F938964 */  lw     $s3, %got(ustack)($gp)
/* 0043FFA0 10000057 */  b     .L00440100
/* 0043FFA4 8E730000 */   lw    $s3, ($s3)
.L0043FFA8:
/* 0043FFA8 1447000C */  bne   $v0, $a3, .L0043FFDC
/* 0043FFAC 00000000 */   nop   
/* 0043FFB0 97CD0002 */  lhu   $t5, 2($fp)
/* 0043FFB4 31AF0002 */  andi  $t7, $t5, 2
/* 0043FFB8 15E00008 */  bnez  $t7, .L0043FFDC
/* 0043FFBC 00000000 */   nop   
/* 0043FFC0 8F938964 */  lw     $s3, %got(ustack)($gp)
/* 0043FFC4 8E730000 */  lw    $s3, ($s3)
/* 0043FFC8 8E780004 */  lw    $t8, 4($s3)
/* 0043FFCC 8E760000 */  lw    $s6, ($s3)
/* 0043FFD0 00185023 */  negu  $t2, $t8
/* 0043FFD4 1000000B */  b     .L00440004
/* 0043FFD8 AE6A0004 */   sw    $t2, 4($s3)
.L0043FFDC:
/* 0043FFDC 8F998024 */  lw    $t9, %got(func_0043B1DC)($gp)
/* 0043FFE0 27A20110 */  addiu $v0, $sp, 0x110
/* 0043FFE4 2739B1DC */  addiu $t9, %lo(func_0043B1DC) # addiu $t9, $t9, -0x4e24
/* 0043FFE8 0320F809 */  jalr  $t9
/* 0043FFEC 00000000 */   nop   
/* 0043FFF0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0043FFF4 93C70000 */  lbu   $a3, ($fp)
/* 0043FFF8 8F8B8964 */  lw     $t3, %got(ustack)($gp)
/* 0043FFFC 8D6B0000 */  lw    $t3, ($t3)
/* 00440000 8D760000 */  lw    $s6, ($t3)
.L00440004:
/* 00440004 8F998650 */  lw    $t9, %call16(isophash)($gp)
/* 00440008 00E02025 */  move  $a0, $a3
/* 0044000C 02C02825 */  move  $a1, $s6
/* 00440010 00003025 */  move  $a2, $zero
/* 00440014 0320F809 */  jalr  $t9
/* 00440018 AFB600F8 */   sw    $s6, 0xf8($sp)
/* 0044001C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00440020 3044FFFF */  andi  $a0, $v0, 0xffff
/* 00440024 27A20110 */  addiu $v0, $sp, 0x110
/* 00440028 8F998024 */  lw    $t9, %got(func_0043B504)($gp)
/* 0044002C 2739B504 */  addiu $t9, %lo(func_0043B504) # addiu $t9, $t9, -0x4afc
/* 00440030 0320F809 */  jalr  $t9
/* 00440034 00000000 */   nop   
/* 00440038 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0044003C 0040A825 */  move  $s5, $v0
/* 00440040 8F998B20 */  lw     $t9, %got(outofmem)($gp)
/* 00440044 93390000 */  lbu   $t9, ($t9)
/* 00440048 572011CA */  bnezl $t9, .L00444774
/* 0044004C 8FBF003C */   lw    $ra, 0x3c($sp)
/* 00440050 904E0000 */  lbu   $t6, ($v0)
/* 00440054 240C0004 */  li    $t4, 4
/* 00440058 15C00020 */  bnez  $t6, .L004400DC
/* 0044005C 00000000 */   nop   
/* 00440060 A04C0000 */  sb    $t4, ($v0)
/* 00440064 93D00001 */  lbu   $s0, 1($fp)
/* 00440068 24040072 */  li    $a0, 114
/* 0044006C 240D000E */  li    $t5, 14
/* 00440070 3210001F */  andi  $s0, $s0, 0x1f
/* 00440074 A0500001 */  sb    $s0, 1($v0)
/* 00440078 93C70000 */  lbu   $a3, ($fp)
/* 0044007C 240E0001 */  li    $t6, 1
/* 00440080 14870003 */  bne   $a0, $a3, .L00440090
/* 00440084 30EF00FF */   andi  $t7, $a3, 0xff
/* 00440088 10000002 */  b     .L00440094
/* 0044008C A04D0023 */   sb    $t5, 0x23($v0)
.L00440090:
/* 00440090 A0500023 */  sb    $s0, 0x23($v0)
.L00440094:
/* 00440094 8FB600F8 */  lw    $s6, 0xf8($sp)
/* 00440098 A0470020 */  sb    $a3, 0x20($v0)
/* 0044009C AC400028 */  sw    $zero, 0x28($v0)
/* 004400A0 148F0003 */  bne   $a0, $t7, .L004400B0
/* 004400A4 AC560024 */   sw    $s6, 0x24($v0)
/* 004400A8 8FD80008 */  lw    $t8, 8($fp)
/* 004400AC AC58002C */  sw    $t8, 0x2c($v0)
.L004400B0:
/* 004400B0 97CA0002 */  lhu   $t2, 2($fp)
/* 004400B4 8F938964 */  lw     $s3, %got(ustack)($gp)
/* 004400B8 A44E0006 */  sh    $t6, 6($v0)
/* 004400BC 314B0002 */  andi  $t3, $t2, 2
/* 004400C0 000BC82B */  sltu  $t9, $zero, $t3
/* 004400C4 A059003E */  sb    $t9, 0x3e($v0)
/* 004400C8 AC400030 */  sw    $zero, 0x30($v0)
/* 004400CC A0400005 */  sb    $zero, 5($v0)
/* 004400D0 A0400004 */  sb    $zero, 4($v0)
/* 004400D4 1000000A */  b     .L00440100
/* 004400D8 8E730000 */   lw    $s3, ($s3)
.L004400DC:
/* 004400DC 8F998320 */  lw    $t9, %call16(incroccurrence)($gp)
/* 004400E0 AFB5010C */  sw    $s5, 0x10c($sp)
/* 004400E4 27A4010C */  addiu $a0, $sp, 0x10c
/* 004400E8 0320F809 */  jalr  $t9
/* 004400EC 00000000 */   nop   
/* 004400F0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004400F4 8FB5010C */  lw    $s5, 0x10c($sp)
/* 004400F8 8F938964 */  lw     $s3, %got(ustack)($gp)
/* 004400FC 8E730000 */  lw    $s3, ($s3)
.L00440100:
/* 00440100 1000119B */  b     .L00444770
/* 00440104 AE750000 */   sw    $s5, ($s3)
.L00440108:
/* 00440108 97CC0002 */  lhu   $t4, 2($fp)
/* 0044010C 00009025 */  move  $s2, $zero
/* 00440110 318D0002 */  andi  $t5, $t4, 2
/* 00440114 15A0001E */  bnez  $t5, .L00440190
/* 00440118 00000000 */   nop   
/* 0044011C 93CF0001 */  lbu   $t7, 1($fp)
/* 00440120 3C010500 */  lui   $at, 0x500
/* 00440124 31F8001F */  andi  $t8, $t7, 0x1f
/* 00440128 2F0A0020 */  sltiu $t2, $t8, 0x20
/* 0044012C 000A5823 */  negu  $t3, $t2
/* 00440130 0161C824 */  and   $t9, $t3, $at
/* 00440134 03197004 */  sllv  $t6, $t9, $t8
/* 00440138 05C00015 */  bltz  $t6, .L00440190
/* 0044013C 24010037 */   li    $at, 55
/* 00440140 54E1000A */  bnel  $a3, $at, .L0044016C
/* 00440144 2401001A */   li    $at, 26
/* 00440148 8F938964 */  lw     $s3, %got(ustack)($gp)
/* 0044014C 8FCD0004 */  lw    $t5, 4($fp)
/* 00440150 24120001 */  li    $s2, 1
/* 00440154 8E730000 */  lw    $s3, ($s3)
/* 00440158 8E6C0004 */  lw    $t4, 4($s3)
/* 0044015C 018D7821 */  addu  $t7, $t4, $t5
/* 00440160 1000000B */  b     .L00440190
/* 00440164 AE6F0004 */   sw    $t7, 4($s3)
/* 00440168 2401001A */  li    $at, 26
.L0044016C:
/* 0044016C 14E10008 */  bne   $a3, $at, .L00440190
/* 00440170 00000000 */   nop   
/* 00440174 8F938964 */  lw     $s3, %got(ustack)($gp)
/* 00440178 8FCB0004 */  lw    $t3, 4($fp)
/* 0044017C 24120001 */  li    $s2, 1
/* 00440180 8E730000 */  lw    $s3, ($s3)
/* 00440184 8E6A0004 */  lw    $t2, 4($s3)
/* 00440188 014BC823 */  subu  $t9, $t2, $t3
/* 0044018C AE790004 */  sw    $t9, 4($s3)
.L00440190:
/* 00440190 56401178 */  bnezl $s2, .L00444774
/* 00440194 8FBF003C */   lw    $ra, 0x3c($sp)
/* 00440198 8F998024 */  lw    $t9, %got(func_0043B1DC)($gp)
/* 0044019C 27A20110 */  addiu $v0, $sp, 0x110
/* 004401A0 2739B1DC */  addiu $t9, %lo(func_0043B1DC) # addiu $t9, $t9, -0x4e24
/* 004401A4 0320F809 */  jalr  $t9
/* 004401A8 00000000 */   nop   
/* 004401AC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004401B0 93C40000 */  lbu   $a0, ($fp)
/* 004401B4 8FC60004 */  lw    $a2, 4($fp)
/* 004401B8 8F988964 */  lw     $t8, %got(ustack)($gp)
/* 004401BC 8F998654 */  lw    $t9, %call16(opvalhash)($gp)
/* 004401C0 8F180000 */  lw    $t8, ($t8)
/* 004401C4 8F050000 */  lw    $a1, ($t8)
/* 004401C8 0320F809 */  jalr  $t9
/* 004401CC AFA500F8 */   sw    $a1, 0xf8($sp)
/* 004401D0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004401D4 3044FFFF */  andi  $a0, $v0, 0xffff
/* 004401D8 27A20110 */  addiu $v0, $sp, 0x110
/* 004401DC 8F998024 */  lw    $t9, %got(func_0043B504)($gp)
/* 004401E0 2739B504 */  addiu $t9, %lo(func_0043B504) # addiu $t9, $t9, -0x4afc
/* 004401E4 0320F809 */  jalr  $t9
/* 004401E8 00000000 */   nop   
/* 004401EC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004401F0 0040A825 */  move  $s5, $v0
/* 004401F4 8F8E8B20 */  lw     $t6, %got(outofmem)($gp)
/* 004401F8 91CE0000 */  lbu   $t6, ($t6)
/* 004401FC 55C0115D */  bnezl $t6, .L00444774
/* 00440200 8FBF003C */   lw    $ra, 0x3c($sp)
/* 00440204 904C0000 */  lbu   $t4, ($v0)
/* 00440208 8FB600F8 */  lw    $s6, 0xf8($sp)
/* 0044020C 240D0004 */  li    $t5, 4
/* 00440210 15800016 */  bnez  $t4, .L0044026C
/* 00440214 00000000 */   nop   
/* 00440218 A04D0000 */  sb    $t5, ($v0)
/* 0044021C 93D00001 */  lbu   $s0, 1($fp)
/* 00440220 240A0001 */  li    $t2, 1
/* 00440224 3210001F */  andi  $s0, $s0, 0x1f
/* 00440228 A0500001 */  sb    $s0, 1($v0)
/* 0044022C A0500023 */  sb    $s0, 0x23($v0)
/* 00440230 93CF0000 */  lbu   $t7, ($fp)
/* 00440234 AC560024 */  sw    $s6, 0x24($v0)
/* 00440238 AC400028 */  sw    $zero, 0x28($v0)
/* 0044023C A44A0006 */  sh    $t2, 6($v0)
/* 00440240 A04F0020 */  sb    $t7, 0x20($v0)
/* 00440244 8FCB0004 */  lw    $t3, 4($fp)
/* 00440248 AC4B002C */  sw    $t3, 0x2c($v0)
/* 0044024C 97D90002 */  lhu   $t9, 2($fp)
/* 00440250 AC400030 */  sw    $zero, 0x30($v0)
/* 00440254 A0400005 */  sb    $zero, 5($v0)
/* 00440258 33380002 */  andi  $t8, $t9, 2
/* 0044025C 0018702B */  sltu  $t6, $zero, $t8
/* 00440260 A04E003E */  sb    $t6, 0x3e($v0)
/* 00440264 10000008 */  b     .L00440288
/* 00440268 A0400004 */   sb    $zero, 4($v0)
.L0044026C:
/* 0044026C 8F998320 */  lw    $t9, %call16(incroccurrence)($gp)
/* 00440270 AFB5010C */  sw    $s5, 0x10c($sp)
/* 00440274 27A4010C */  addiu $a0, $sp, 0x10c
/* 00440278 0320F809 */  jalr  $t9
/* 0044027C 00000000 */   nop   
/* 00440280 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00440284 8FB5010C */  lw    $s5, 0x10c($sp)
.L00440288:
/* 00440288 8F8C8964 */  lw     $t4, %got(ustack)($gp)
/* 0044028C 8D8C0000 */  lw    $t4, ($t4)
/* 00440290 10001137 */  b     .L00444770
/* 00440294 AD950000 */   sw    $s5, ($t4)
.L00440298:
/* 00440298 24010018 */  li    $at, 24
/* 0044029C 54E10029 */  bnel  $a3, $at, .L00440344
/* 004402A0 93D00001 */   lbu   $s0, 1($fp)
/* 004402A4 93CD0008 */  lbu   $t5, 8($fp)
/* 004402A8 3C010280 */  lui   $at, 0x280
/* 004402AC 2DAF0020 */  sltiu $t7, $t5, 0x20
/* 004402B0 000F5023 */  negu  $t2, $t7
/* 004402B4 01415824 */  and   $t3, $t2, $at
/* 004402B8 01ABC804 */  sllv  $t9, $t3, $t5
/* 004402BC 07230021 */  bgezl $t9, .L00440344
/* 004402C0 93D00001 */   lbu   $s0, 1($fp)
/* 004402C4 93D80001 */  lbu   $t8, 1($fp)
/* 004402C8 3C01000C */  lui   $at, 0xc
/* 004402CC 330E001F */  andi  $t6, $t8, 0x1f
/* 004402D0 2DCC0020 */  sltiu $t4, $t6, 0x20
/* 004402D4 000C7823 */  negu  $t7, $t4
/* 004402D8 01E15024 */  and   $t2, $t7, $at
/* 004402DC 01CA5804 */  sllv  $t3, $t2, $t6
/* 004402E0 05630018 */  bgezl $t3, .L00440344
/* 004402E4 93D00001 */   lbu   $s0, 1($fp)
/* 004402E8 97CD0002 */  lhu   $t5, 2($fp)
/* 004402EC 31B90002 */  andi  $t9, $t5, 2
/* 004402F0 57200014 */  bnezl $t9, .L00440344
/* 004402F4 93D00001 */   lbu   $s0, 1($fp)
/* 004402F8 8F938964 */  lw     $s3, %got(ustack)($gp)
/* 004402FC 24090002 */  li    $t1, 2
/* 00440300 8E730000 */  lw    $s3, ($s3)
/* 00440304 8E780000 */  lw    $t8, ($s3)
/* 00440308 930C0000 */  lbu   $t4, ($t8)
/* 0044030C 152C0059 */  bne   $t1, $t4, .L00440474
/* 00440310 00000000 */   nop   
/* 00440314 8E6F0004 */  lw    $t7, 4($s3)
/* 00440318 15E00056 */  bnez  $t7, .L00440474
/* 0044031C 00000000 */   nop   
/* 00440320 8F998024 */  lw    $t9, %got(func_0043C248)($gp)
/* 00440324 02602025 */  move  $a0, $s3
/* 00440328 27A20110 */  addiu $v0, $sp, 0x110
/* 0044032C 2739C248 */  addiu $t9, %lo(func_0043C248) # addiu $t9, $t9, -0x3db8
/* 00440330 0320F809 */  jalr  $t9
/* 00440334 00000000 */   nop   
/* 00440338 1000110D */  b     .L00444770
/* 0044033C 8FBC0034 */   lw    $gp, 0x34($sp)
/* 00440340 93D00001 */  lbu   $s0, 1($fp)
.L00440344:
/* 00440344 93C80008 */  lbu   $t0, 8($fp)
/* 00440348 3C018A80 */  lui   $at, 0x8a80
/* 0044034C 3210001F */  andi  $s0, $s0, 0x1f
/* 00440350 11101107 */  beq   $t0, $s0, .L00444770
/* 00440354 2D0A0020 */   sltiu $t2, $t0, 0x20
/* 00440358 000A7023 */  negu  $t6, $t2
/* 0044035C 01C15824 */  and   $t3, $t6, $at
/* 00440360 010B6804 */  sllv  $t5, $t3, $t0
/* 00440364 05A1002B */  bgez  $t5, .L00440414
/* 00440368 2E190020 */   sltiu $t9, $s0, 0x20
/* 0044036C 0019C023 */  negu  $t8, $t9
/* 00440370 3C018A80 */  lui   $at, 0x8a80
/* 00440374 03016024 */  and   $t4, $t8, $at
/* 00440378 020C7804 */  sllv  $t7, $t4, $s0
/* 0044037C 05E30026 */  bgezl $t7, .L00440418
/* 00440380 2D0F0020 */   sltiu $t7, $t0, 0x20
/* 00440384 8F8A8B24 */  lw     $t2, %got(mipsflag)($gp)
/* 00440388 24090002 */  li    $t1, 2
/* 0044038C 24040008 */  li    $a0, 8
/* 00440390 914A0000 */  lbu   $t2, ($t2)
/* 00440394 112A000E */  beq   $t1, $t2, .L004403D0
/* 00440398 00000000 */   nop   
/* 0044039C 8F8E8964 */  lw     $t6, %got(ustack)($gp)
/* 004403A0 24010003 */  li    $at, 3
/* 004403A4 8DCE0000 */  lw    $t6, ($t6)
/* 004403A8 8DD10000 */  lw    $s1, ($t6)
/* 004403AC 922B0000 */  lbu   $t3, ($s1)
/* 004403B0 15610030 */  bne   $t3, $at, .L00440474
/* 004403B4 00000000 */   nop   
/* 004403B8 922D0020 */  lbu   $t5, 0x20($s1)
/* 004403BC 24010004 */  li    $at, 4
/* 004403C0 15A1002C */  bne   $t5, $at, .L00440474
/* 004403C4 00000000 */   nop   
/* 004403C8 100010EA */  b     .L00444774
/* 004403CC 8FBF003C */   lw    $ra, 0x3c($sp)
.L004403D0:
/* 004403D0 10880028 */  beq   $a0, $t0, .L00440474
/* 004403D4 00000000 */   nop   
/* 004403D8 10900026 */  beq   $a0, $s0, .L00440474
/* 004403DC 00000000 */   nop   
/* 004403E0 8F998964 */  lw     $t9, %got(ustack)($gp)
/* 004403E4 24010003 */  li    $at, 3
/* 004403E8 8F390000 */  lw    $t9, ($t9)
/* 004403EC 8F310000 */  lw    $s1, ($t9)
/* 004403F0 92380000 */  lbu   $t8, ($s1)
/* 004403F4 1701001F */  bne   $t8, $at, .L00440474
/* 004403F8 00000000 */   nop   
/* 004403FC 922C0020 */  lbu   $t4, 0x20($s1)
/* 00440400 24010004 */  li    $at, 4
/* 00440404 1581001B */  bne   $t4, $at, .L00440474
/* 00440408 00000000 */   nop   
/* 0044040C 100010D9 */  b     .L00444774
/* 00440410 8FBF003C */   lw    $ra, 0x3c($sp)
.L00440414:
/* 00440414 2D0F0020 */  sltiu $t7, $t0, 0x20
.L00440418:
/* 00440418 000F5023 */  negu  $t2, $t7
/* 0044041C 3C010500 */  lui   $at, 0x500
/* 00440420 01417024 */  and   $t6, $t2, $at
/* 00440424 010E5804 */  sllv  $t3, $t6, $t0
/* 00440428 05610012 */  bgez  $t3, .L00440474
/* 0044042C 2E0D0020 */   sltiu $t5, $s0, 0x20
/* 00440430 000DC823 */  negu  $t9, $t5
/* 00440434 3C010500 */  lui   $at, 0x500
/* 00440438 0321C024 */  and   $t8, $t9, $at
/* 0044043C 02186004 */  sllv  $t4, $t8, $s0
/* 00440440 0581000C */  bgez  $t4, .L00440474
/* 00440444 00000000 */   nop   
/* 00440448 8F8F8964 */  lw     $t7, %got(ustack)($gp)
/* 0044044C 24010003 */  li    $at, 3
/* 00440450 8DEF0000 */  lw    $t7, ($t7)
/* 00440454 8DF10000 */  lw    $s1, ($t7)
/* 00440458 922A0000 */  lbu   $t2, ($s1)
/* 0044045C 15410005 */  bne   $t2, $at, .L00440474
/* 00440460 00000000 */   nop   
/* 00440464 922E0020 */  lbu   $t6, 0x20($s1)
/* 00440468 24010008 */  li    $at, 8
/* 0044046C 51C110C1 */  beql  $t6, $at, .L00444774
/* 00440470 8FBF003C */   lw    $ra, 0x3c($sp)
.L00440474:
/* 00440474 8F998024 */  lw    $t9, %got(func_0043B1DC)($gp)
/* 00440478 27A20110 */  addiu $v0, $sp, 0x110
/* 0044047C 2739B1DC */  addiu $t9, %lo(func_0043B1DC) # addiu $t9, $t9, -0x4e24
/* 00440480 0320F809 */  jalr  $t9
/* 00440484 00000000 */   nop   
/* 00440488 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0044048C 93C40000 */  lbu   $a0, ($fp)
/* 00440490 00003025 */  move  $a2, $zero
/* 00440494 8F8B8964 */  lw     $t3, %got(ustack)($gp)
/* 00440498 8F998650 */  lw    $t9, %call16(isophash)($gp)
/* 0044049C 8D6B0000 */  lw    $t3, ($t3)
/* 004404A0 8D650000 */  lw    $a1, ($t3)
/* 004404A4 0320F809 */  jalr  $t9
/* 004404A8 AFA500F8 */   sw    $a1, 0xf8($sp)
/* 004404AC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004404B0 3044FFFF */  andi  $a0, $v0, 0xffff
/* 004404B4 27A20110 */  addiu $v0, $sp, 0x110
/* 004404B8 8F998024 */  lw    $t9, %got(func_0043B504)($gp)
/* 004404BC 2739B504 */  addiu $t9, %lo(func_0043B504) # addiu $t9, $t9, -0x4afc
/* 004404C0 0320F809 */  jalr  $t9
/* 004404C4 00000000 */   nop   
/* 004404C8 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004404CC 0040A825 */  move  $s5, $v0
/* 004404D0 8F8D8B20 */  lw     $t5, %got(outofmem)($gp)
/* 004404D4 91AD0000 */  lbu   $t5, ($t5)
/* 004404D8 55A010A6 */  bnezl $t5, .L00444774
/* 004404DC 8FBF003C */   lw    $ra, 0x3c($sp)
/* 004404E0 90590000 */  lbu   $t9, ($v0)
/* 004404E4 8FB600F8 */  lw    $s6, 0xf8($sp)
/* 004404E8 24180004 */  li    $t8, 4
/* 004404EC 17200016 */  bnez  $t9, .L00440548
/* 004404F0 00000000 */   nop   
/* 004404F4 A0580000 */  sb    $t8, ($v0)
/* 004404F8 93D00001 */  lbu   $s0, 1($fp)
/* 004404FC 240A0001 */  li    $t2, 1
/* 00440500 3210001F */  andi  $s0, $s0, 0x1f
/* 00440504 A0500001 */  sb    $s0, 1($v0)
/* 00440508 93CC0008 */  lbu   $t4, 8($fp)
/* 0044050C A0500023 */  sb    $s0, 0x23($v0)
/* 00440510 A04C0038 */  sb    $t4, 0x38($v0)
/* 00440514 93CF0000 */  lbu   $t7, ($fp)
/* 00440518 AC560024 */  sw    $s6, 0x24($v0)
/* 0044051C AC400028 */  sw    $zero, 0x28($v0)
/* 00440520 A44A0006 */  sh    $t2, 6($v0)
/* 00440524 A04F0020 */  sb    $t7, 0x20($v0)
/* 00440528 97CE0002 */  lhu   $t6, 2($fp)
/* 0044052C AC400030 */  sw    $zero, 0x30($v0)
/* 00440530 A0400005 */  sb    $zero, 5($v0)
/* 00440534 31CB0002 */  andi  $t3, $t6, 2
/* 00440538 000B682B */  sltu  $t5, $zero, $t3
/* 0044053C A04D003E */  sb    $t5, 0x3e($v0)
/* 00440540 10000008 */  b     .L00440564
/* 00440544 A0400004 */   sb    $zero, 4($v0)
.L00440548:
/* 00440548 8F998320 */  lw    $t9, %call16(incroccurrence)($gp)
/* 0044054C AFB5010C */  sw    $s5, 0x10c($sp)
/* 00440550 27A4010C */  addiu $a0, $sp, 0x10c
/* 00440554 0320F809 */  jalr  $t9
/* 00440558 00000000 */   nop   
/* 0044055C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00440560 8FB5010C */  lw    $s5, 0x10c($sp)
.L00440564:
/* 00440564 8F998964 */  lw     $t9, %got(ustack)($gp)
/* 00440568 8F390000 */  lw    $t9, ($t9)
/* 0044056C 10001080 */  b     .L00444770
/* 00440570 AF350000 */   sw    $s5, ($t9)
.L00440574:
/* 00440574 8F998024 */  lw    $t9, %got(func_0043B1DC)($gp)
/* 00440578 27A20110 */  addiu $v0, $sp, 0x110
/* 0044057C 2739B1DC */  addiu $t9, %lo(func_0043B1DC) # addiu $t9, $t9, -0x4e24
/* 00440580 0320F809 */  jalr  $t9
/* 00440584 00000000 */   nop   
/* 00440588 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0044058C 93C40000 */  lbu   $a0, ($fp)
/* 00440590 8FC6000C */  lw    $a2, 0xc($fp)
/* 00440594 8F988964 */  lw     $t8, %got(ustack)($gp)
/* 00440598 8F998654 */  lw    $t9, %call16(opvalhash)($gp)
/* 0044059C 8F180000 */  lw    $t8, ($t8)
/* 004405A0 8F050000 */  lw    $a1, ($t8)
/* 004405A4 0320F809 */  jalr  $t9
/* 004405A8 AFA500F8 */   sw    $a1, 0xf8($sp)
/* 004405AC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004405B0 3044FFFF */  andi  $a0, $v0, 0xffff
/* 004405B4 27A20110 */  addiu $v0, $sp, 0x110
/* 004405B8 8F998024 */  lw    $t9, %got(func_0043B504)($gp)
/* 004405BC 2739B504 */  addiu $t9, %lo(func_0043B504) # addiu $t9, $t9, -0x4afc
/* 004405C0 0320F809 */  jalr  $t9
/* 004405C4 00000000 */   nop   
/* 004405C8 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004405CC 0040A825 */  move  $s5, $v0
/* 004405D0 8F8C8B20 */  lw     $t4, %got(outofmem)($gp)
/* 004405D4 918C0000 */  lbu   $t4, ($t4)
/* 004405D8 55801066 */  bnezl $t4, .L00444774
/* 004405DC 8FBF003C */   lw    $ra, 0x3c($sp)
/* 004405E0 904F0000 */  lbu   $t7, ($v0)
/* 004405E4 8FB600F8 */  lw    $s6, 0xf8($sp)
/* 004405E8 240A0004 */  li    $t2, 4
/* 004405EC 15E00015 */  bnez  $t7, .L00440644
/* 004405F0 00000000 */   nop   
/* 004405F4 A04A0000 */  sb    $t2, ($v0)
/* 004405F8 93D00001 */  lbu   $s0, 1($fp)
/* 004405FC 24190001 */  li    $t9, 1
/* 00440600 3210001F */  andi  $s0, $s0, 0x1f
/* 00440604 A0500001 */  sb    $s0, 1($v0)
/* 00440608 A0500023 */  sb    $s0, 0x23($v0)
/* 0044060C 93CE0000 */  lbu   $t6, ($fp)
/* 00440610 AC560024 */  sw    $s6, 0x24($v0)
/* 00440614 AC400028 */  sw    $zero, 0x28($v0)
/* 00440618 A04E0020 */  sb    $t6, 0x20($v0)
/* 0044061C 8FCB000C */  lw    $t3, 0xc($fp)
/* 00440620 AC4B002C */  sw    $t3, 0x2c($v0)
/* 00440624 8FCD0008 */  lw    $t5, 8($fp)
/* 00440628 A4590006 */  sh    $t9, 6($v0)
/* 0044062C A040003E */  sb    $zero, 0x3e($v0)
/* 00440630 AC400030 */  sw    $zero, 0x30($v0)
/* 00440634 A0400005 */  sb    $zero, 5($v0)
/* 00440638 A0400004 */  sb    $zero, 4($v0)
/* 0044063C 10000008 */  b     .L00440660
/* 00440640 A44D003C */   sh    $t5, 0x3c($v0)
.L00440644:
/* 00440644 8F998320 */  lw    $t9, %call16(incroccurrence)($gp)
/* 00440648 AFB5010C */  sw    $s5, 0x10c($sp)
/* 0044064C 27A4010C */  addiu $a0, $sp, 0x10c
/* 00440650 0320F809 */  jalr  $t9
/* 00440654 00000000 */   nop   
/* 00440658 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0044065C 8FB5010C */  lw    $s5, 0x10c($sp)
.L00440660:
/* 00440660 8F988964 */  lw     $t8, %got(ustack)($gp)
/* 00440664 8F180000 */  lw    $t8, ($t8)
/* 00440668 10001041 */  b     .L00444770
/* 0044066C AF150000 */   sw    $s5, ($t8)
.L00440670:
/* 00440670 8F998024 */  lw    $t9, %got(func_0043B1DC)($gp)
/* 00440674 27A20110 */  addiu $v0, $sp, 0x110
/* 00440678 2739B1DC */  addiu $t9, %lo(func_0043B1DC) # addiu $t9, $t9, -0x4e24
/* 0044067C 0320F809 */  jalr  $t9
/* 00440680 00000000 */   nop   
/* 00440684 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00440688 93C40000 */  lbu   $a0, ($fp)
/* 0044068C 00003025 */  move  $a2, $zero
/* 00440690 8F8C8964 */  lw     $t4, %got(ustack)($gp)
/* 00440694 8F998650 */  lw    $t9, %call16(isophash)($gp)
/* 00440698 8D8C0000 */  lw    $t4, ($t4)
/* 0044069C 8D850000 */  lw    $a1, ($t4)
/* 004406A0 0320F809 */  jalr  $t9
/* 004406A4 AFA500F8 */   sw    $a1, 0xf8($sp)
/* 004406A8 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004406AC 3044FFFF */  andi  $a0, $v0, 0xffff
/* 004406B0 27A20110 */  addiu $v0, $sp, 0x110
/* 004406B4 8F998024 */  lw    $t9, %got(func_0043B504)($gp)
/* 004406B8 2739B504 */  addiu $t9, %lo(func_0043B504) # addiu $t9, $t9, -0x4afc
/* 004406BC 0320F809 */  jalr  $t9
/* 004406C0 00000000 */   nop   
/* 004406C4 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004406C8 0040A825 */  move  $s5, $v0
/* 004406CC 8F8F8B20 */  lw     $t7, %got(outofmem)($gp)
/* 004406D0 91EF0000 */  lbu   $t7, ($t7)
/* 004406D4 55E01027 */  bnezl $t7, .L00444774
/* 004406D8 8FBF003C */   lw    $ra, 0x3c($sp)
/* 004406DC 904A0000 */  lbu   $t2, ($v0)
/* 004406E0 8FB600F8 */  lw    $s6, 0xf8($sp)
/* 004406E4 240E0004 */  li    $t6, 4
/* 004406E8 1540000E */  bnez  $t2, .L00440724
/* 004406EC 240D0001 */   li    $t5, 1
/* 004406F0 A04E0000 */  sb    $t6, ($v0)
/* 004406F4 93CB0000 */  lbu   $t3, ($fp)
/* 004406F8 A0400001 */  sb    $zero, 1($v0)
/* 004406FC A0400023 */  sb    $zero, 0x23($v0)
/* 00440700 AC560024 */  sw    $s6, 0x24($v0)
/* 00440704 AC400028 */  sw    $zero, 0x28($v0)
/* 00440708 A44D0006 */  sh    $t5, 6($v0)
/* 0044070C A040003E */  sb    $zero, 0x3e($v0)
/* 00440710 AC400030 */  sw    $zero, 0x30($v0)
/* 00440714 A0400005 */  sb    $zero, 5($v0)
/* 00440718 A0400004 */  sb    $zero, 4($v0)
/* 0044071C 10000008 */  b     .L00440740
/* 00440720 A04B0020 */   sb    $t3, 0x20($v0)
.L00440724:
/* 00440724 8F998320 */  lw    $t9, %call16(incroccurrence)($gp)
/* 00440728 AFB5010C */  sw    $s5, 0x10c($sp)
/* 0044072C 27A4010C */  addiu $a0, $sp, 0x10c
/* 00440730 0320F809 */  jalr  $t9
/* 00440734 00000000 */   nop   
/* 00440738 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0044073C 8FB5010C */  lw    $s5, 0x10c($sp)
.L00440740:
/* 00440740 8F998964 */  lw     $t9, %got(ustack)($gp)
/* 00440744 8F390000 */  lw    $t9, ($t9)
/* 00440748 10001009 */  b     .L00444770
/* 0044074C AF350000 */   sw    $s5, ($t9)
.L00440750:
/* 00440750 8F998024 */  lw    $t9, %got(func_0043B23C)($gp)
/* 00440754 27A20110 */  addiu $v0, $sp, 0x110
/* 00440758 2739B23C */  addiu $t9, %lo(func_0043B23C) # addiu $t9, $t9, -0x4dc4
/* 0044075C 0320F809 */  jalr  $t9
/* 00440760 00000000 */   nop   
/* 00440764 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00440768 8FD80004 */  lw    $t8, 4($fp)
/* 0044076C 93CA0000 */  lbu   $t2, ($fp)
/* 00440770 8F938964 */  lw     $s3, %got(ustack)($gp)
/* 00440774 24010036 */  li    $at, 54
/* 00440778 8E730000 */  lw    $s3, ($s3)
/* 0044077C 8E6C0004 */  lw    $t4, 4($s3)
/* 00440780 8E760000 */  lw    $s6, ($s3)
/* 00440784 AE600004 */  sw    $zero, 4($s3)
/* 00440788 030C7821 */  addu  $t7, $t8, $t4
/* 0044078C 15410011 */  bne   $t2, $at, .L004407D4
/* 00440790 AFCF0004 */   sw    $t7, 4($fp)
/* 00440794 96CE0006 */  lhu   $t6, 6($s6)
/* 00440798 2DC10002 */  sltiu $at, $t6, 2
/* 0044079C 1420000D */  bnez  $at, .L004407D4
/* 004407A0 00000000 */   nop   
/* 004407A4 8FCB0008 */  lw    $t3, 8($fp)
/* 004407A8 29610004 */  slti  $at, $t3, 4
/* 004407AC 14200009 */  bnez  $at, .L004407D4
/* 004407B0 00000000 */   nop   
/* 004407B4 8F998024 */  lw    $t9, %got(func_0043CE64)($gp)
/* 004407B8 02C02025 */  move  $a0, $s6
/* 004407BC 01E02825 */  move  $a1, $t7
/* 004407C0 2739CE64 */  addiu $t9, %lo(func_0043CE64) # addiu $t9, $t9, -0x319c
/* 004407C4 0320F809 */  jalr  $t9
/* 004407C8 27A20110 */   addiu $v0, $sp, 0x110
/* 004407CC 14400FE8 */  bnez  $v0, .L00444770
/* 004407D0 8FBC0034 */   lw    $gp, 0x34($sp)
.L004407D4:
/* 004407D4 8F998654 */  lw    $t9, %call16(opvalhash)($gp)
/* 004407D8 93C40000 */  lbu   $a0, ($fp)
/* 004407DC 02C02825 */  move  $a1, $s6
/* 004407E0 8FC60004 */  lw    $a2, 4($fp)
/* 004407E4 0320F809 */  jalr  $t9
/* 004407E8 AFB600F8 */   sw    $s6, 0xf8($sp)
/* 004407EC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004407F0 3044FFFF */  andi  $a0, $v0, 0xffff
/* 004407F4 27A20110 */  addiu $v0, $sp, 0x110
/* 004407F8 8F998024 */  lw    $t9, %got(func_0043B504)($gp)
/* 004407FC 2739B504 */  addiu $t9, %lo(func_0043B504) # addiu $t9, $t9, -0x4afc
/* 00440800 0320F809 */  jalr  $t9
/* 00440804 00000000 */   nop   
/* 00440808 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0044080C 0040A825 */  move  $s5, $v0
/* 00440810 8F8D8B20 */  lw     $t5, %got(outofmem)($gp)
/* 00440814 91AD0000 */  lbu   $t5, ($t5)
/* 00440818 55A00FD6 */  bnezl $t5, .L00444774
/* 0044081C 8FBF003C */   lw    $ra, 0x3c($sp)
/* 00440820 90590000 */  lbu   $t9, ($v0)
/* 00440824 8FB600F8 */  lw    $s6, 0xf8($sp)
/* 00440828 24180004 */  li    $t8, 4
/* 0044082C 17200091 */  bnez  $t9, .L00440A74
/* 00440830 00000000 */   nop   
/* 00440834 A0580000 */  sb    $t8, ($v0)
/* 00440838 93D00001 */  lbu   $s0, 1($fp)
/* 0044083C 240F0001 */  li    $t7, 1
/* 00440840 3210001F */  andi  $s0, $s0, 0x1f
/* 00440844 A0500001 */  sb    $s0, 1($v0)
/* 00440848 A0500023 */  sb    $s0, 0x23($v0)
/* 0044084C 93CC0000 */  lbu   $t4, ($fp)
/* 00440850 AC560024 */  sw    $s6, 0x24($v0)
/* 00440854 AC400028 */  sw    $zero, 0x28($v0)
/* 00440858 A44F0006 */  sh    $t7, 6($v0)
/* 0044085C A040003E */  sb    $zero, 0x3e($v0)
/* 00440860 A04C0020 */  sb    $t4, 0x20($v0)
/* 00440864 8FCA0004 */  lw    $t2, 4($fp)
/* 00440868 AC4A002C */  sw    $t2, 0x2c($v0)
/* 0044086C 8FCE0008 */  lw    $t6, 8($fp)
/* 00440870 A44E003C */  sh    $t6, 0x3c($v0)
/* 00440874 97CB0002 */  lhu   $t3, 2($fp)
/* 00440878 000B68C2 */  srl   $t5, $t3, 3
/* 0044087C 000DC8C0 */  sll   $t9, $t5, 3
/* 00440880 333800FF */  andi  $t8, $t9, 0xff
/* 00440884 17000004 */  bnez  $t8, .L00440898
/* 00440888 A059003F */   sb    $t9, 0x3f($v0)
/* 0044088C 31CCFFFF */  andi  $t4, $t6, 0xffff
/* 00440890 000C78C0 */  sll   $t7, $t4, 3
/* 00440894 A04F003F */  sb    $t7, 0x3f($v0)
.L00440898:
/* 00440898 92C40000 */  lbu   $a0, ($s6)
/* 0044089C 24090002 */  li    $t1, 2
/* 004408A0 55240024 */  bnel  $t1, $a0, .L00440934
/* 004408A4 24010001 */   li    $at, 1
/* 004408A8 904E003F */  lbu   $t6, 0x3f($v0)
/* 004408AC 8ECA0020 */  lw    $t2, 0x20($s6)
/* 004408B0 24040008 */  li    $a0, 8
/* 004408B4 000E58C2 */  srl   $t3, $t6, 3
/* 004408B8 014B001A */  div   $zero, $t2, $t3
/* 004408BC 00006810 */  mfhi  $t5
/* 004408C0 15600002 */  bnez  $t3, .L004408CC
/* 004408C4 00000000 */   nop   
/* 004408C8 0007000D */  break 7
.L004408CC:
/* 004408CC 2401FFFF */  li    $at, -1
/* 004408D0 15610004 */  bne   $t3, $at, .L004408E4
/* 004408D4 3C018000 */   lui   $at, 0x8000
/* 004408D8 15410002 */  bne   $t2, $at, .L004408E4
/* 004408DC 00000000 */   nop   
/* 004408E0 0006000D */  break 6
.L004408E4:
/* 004408E4 11A00035 */  beqz  $t5, .L004409BC
/* 004408E8 00000000 */   nop   
/* 004408EC A044003F */  sb    $a0, 0x3f($v0)
/* 004408F0 8ED20020 */  lw    $s2, 0x20($s6)
/* 004408F4 32590001 */  andi  $t9, $s2, 1
/* 004408F8 17200030 */  bnez  $t9, .L004409BC
/* 004408FC 00000000 */   nop   
/* 00440900 9058003F */  lbu   $t8, 0x3f($v0)
.L00440904:
/* 00440904 00186040 */  sll   $t4, $t8, 1
/* 00440908 A04C003F */  sb    $t4, 0x3f($v0)
/* 0044090C 06410002 */  bgez  $s2, .L00440918
/* 00440910 02400821 */   move  $at, $s2
/* 00440914 26410001 */  addiu $at, $s2, 1
.L00440918:
/* 00440918 00019043 */  sra   $s2, $at, 1
/* 0044091C 324F0001 */  andi  $t7, $s2, 1
/* 00440920 51E0FFF8 */  beql  $t7, $zero, .L00440904
/* 00440924 9058003F */   lbu   $t8, 0x3f($v0)
/* 00440928 10000024 */  b     .L004409BC
/* 0044092C 00000000 */   nop   
/* 00440930 24010001 */  li    $at, 1
.L00440934:
/* 00440934 14810021 */  bne   $a0, $at, .L004409BC
/* 00440938 00000000 */   nop   
/* 0044093C 904A003F */  lbu   $t2, 0x3f($v0)
/* 00440940 8ECE002C */  lw    $t6, 0x2c($s6)
/* 00440944 24040008 */  li    $a0, 8
/* 00440948 000A58C2 */  srl   $t3, $t2, 3
/* 0044094C 01CB001A */  div   $zero, $t6, $t3
/* 00440950 00006810 */  mfhi  $t5
/* 00440954 15600002 */  bnez  $t3, .L00440960
/* 00440958 00000000 */   nop   
/* 0044095C 0007000D */  break 7
.L00440960:
/* 00440960 2401FFFF */  li    $at, -1
/* 00440964 15610004 */  bne   $t3, $at, .L00440978
/* 00440968 3C018000 */   lui   $at, 0x8000
/* 0044096C 15C10002 */  bne   $t6, $at, .L00440978
/* 00440970 00000000 */   nop   
/* 00440974 0006000D */  break 6
.L00440978:
/* 00440978 11A00010 */  beqz  $t5, .L004409BC
/* 0044097C 00000000 */   nop   
/* 00440980 A044003F */  sb    $a0, 0x3f($v0)
/* 00440984 8ED2002C */  lw    $s2, 0x2c($s6)
/* 00440988 32590001 */  andi  $t9, $s2, 1
/* 0044098C 1720000B */  bnez  $t9, .L004409BC
/* 00440990 00000000 */   nop   
/* 00440994 9058003F */  lbu   $t8, 0x3f($v0)
.L00440998:
/* 00440998 00186040 */  sll   $t4, $t8, 1
/* 0044099C A04C003F */  sb    $t4, 0x3f($v0)
/* 004409A0 06410002 */  bgez  $s2, .L004409AC
/* 004409A4 02400821 */   move  $at, $s2
/* 004409A8 26410001 */  addiu $at, $s2, 1
.L004409AC:
/* 004409AC 00019043 */  sra   $s2, $at, 1
/* 004409B0 324F0001 */  andi  $t7, $s2, 1
/* 004409B4 51E0FFF8 */  beql  $t7, $zero, .L00440998
/* 004409B8 9058003F */   lbu   $t8, 0x3f($v0)
.L004409BC:
/* 004409BC 8F998378 */  lw    $t9, %call16(findbaseaddr)($gp)
/* 004409C0 8FCA000C */  lw    $t2, 0xc($fp)
/* 004409C4 AEA00030 */  sw    $zero, 0x30($s5)
/* 004409C8 A2A00005 */  sb    $zero, 5($s5)
/* 004409CC A2A00004 */  sb    $zero, 4($s5)
/* 004409D0 02C02025 */  move  $a0, $s6
/* 004409D4 0320F809 */  jalr  $t9
/* 004409D8 AEAA0038 */   sw    $t2, 0x38($s5)
/* 004409DC 92AE0001 */  lbu   $t6, 1($s5)
/* 004409E0 2401000E */  li    $at, 14
/* 004409E4 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004409E8 11C10014 */  beq   $t6, $at, .L00440A3C
/* 004409EC AEA20034 */   sw    $v0, 0x34($s5)
/* 004409F0 93CB0000 */  lbu   $t3, ($fp)
/* 004409F4 24010033 */  li    $at, 51
/* 004409F8 51610011 */  beql  $t3, $at, .L00440A40
/* 004409FC 240C0001 */   li    $t4, 1
/* 00440A00 92AD0003 */  lbu   $t5, 3($s5)
/* 00440A04 A2A00002 */  sb    $zero, 2($s5)
/* 00440A08 11A0000F */  beqz  $t5, .L00440A48
/* 00440A0C 00000000 */   nop   
/* 00440A10 8F9989B4 */  lw     $t9, %got(curgraphnode)($gp)
/* 00440A14 02A02025 */  move  $a0, $s5
/* 00440A18 8F390000 */  lw    $t9, ($t9)
/* 00440A1C 8F250024 */  lw    $a1, 0x24($t9)
/* 00440A20 8F9983C4 */  lw    $t9, %call16(varkilled)($gp)
/* 00440A24 0320F809 */  jalr  $t9
/* 00440A28 00000000 */   nop   
/* 00440A2C 2C580001 */  sltiu $t8, $v0, 1
/* 00440A30 A2B80003 */  sb    $t8, 3($s5)
/* 00440A34 10000004 */  b     .L00440A48
/* 00440A38 8FBC0034 */   lw    $gp, 0x34($sp)
.L00440A3C:
/* 00440A3C 240C0001 */  li    $t4, 1
.L00440A40:
/* 00440A40 A2AC0002 */  sb    $t4, 2($s5)
/* 00440A44 A2A00003 */  sb    $zero, 3($s5)
.L00440A48:
/* 00440A48 8F99831C */  lw    $t9, %call16(appendbbvarlst)($gp)
/* 00440A4C 02A02025 */  move  $a0, $s5
/* 00440A50 0320F809 */  jalr  $t9
/* 00440A54 00000000 */   nop   
/* 00440A58 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00440A5C 02A02025 */  move  $a0, $s5
/* 00440A60 8F9983A0 */  lw    $t9, %call16(lodkillprev)($gp)
/* 00440A64 0320F809 */  jalr  $t9
/* 00440A68 00000000 */   nop   
/* 00440A6C 10000006 */  b     .L00440A88
/* 00440A70 8FBC0034 */   lw    $gp, 0x34($sp)
.L00440A74:
/* 00440A74 8F998640 */  lw    $t9, %call16(increasecount)($gp)
/* 00440A78 02A02025 */  move  $a0, $s5
/* 00440A7C 0320F809 */  jalr  $t9
/* 00440A80 00000000 */   nop   
/* 00440A84 8FBC0034 */  lw    $gp, 0x34($sp)
.L00440A88:
/* 00440A88 8F8F8964 */  lw     $t7, %got(ustack)($gp)
/* 00440A8C 8DEF0000 */  lw    $t7, ($t7)
/* 00440A90 10000F37 */  b     .L00444770
/* 00440A94 ADF50000 */   sw    $s5, ($t7)
.L00440A98:
/* 00440A98 8F998024 */  lw    $t9, %got(func_0043B1DC)($gp)
/* 00440A9C 27A20110 */  addiu $v0, $sp, 0x110
/* 00440AA0 2739B1DC */  addiu $t9, %lo(func_0043B1DC) # addiu $t9, $t9, -0x4e24
/* 00440AA4 0320F809 */  jalr  $t9
/* 00440AA8 00000000 */   nop   
/* 00440AAC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00440AB0 93CE0000 */  lbu   $t6, ($fp)
/* 00440AB4 24010093 */  li    $at, 147
/* 00440AB8 8F8A8964 */  lw     $t2, %got(ustack)($gp)
/* 00440ABC 8D4A0000 */  lw    $t2, ($t2)
/* 00440AC0 15C10011 */  bne   $t6, $at, .L00440B08
/* 00440AC4 8D560000 */   lw    $s6, ($t2)
/* 00440AC8 96CB0006 */  lhu   $t3, 6($s6)
/* 00440ACC 2D610002 */  sltiu $at, $t3, 2
/* 00440AD0 1420000D */  bnez  $at, .L00440B08
/* 00440AD4 00000000 */   nop   
/* 00440AD8 8FCD0008 */  lw    $t5, 8($fp)
/* 00440ADC 29A10004 */  slti  $at, $t5, 4
/* 00440AE0 14200009 */  bnez  $at, .L00440B08
/* 00440AE4 00000000 */   nop   
/* 00440AE8 8F998024 */  lw    $t9, %got(func_0043CE64)($gp)
/* 00440AEC 02C02025 */  move  $a0, $s6
/* 00440AF0 8FC50004 */  lw    $a1, 4($fp)
/* 00440AF4 2739CE64 */  addiu $t9, %lo(func_0043CE64) # addiu $t9, $t9, -0x319c
/* 00440AF8 0320F809 */  jalr  $t9
/* 00440AFC 27A20110 */   addiu $v0, $sp, 0x110
/* 00440B00 14400F1B */  bnez  $v0, .L00444770
/* 00440B04 8FBC0034 */   lw    $gp, 0x34($sp)
.L00440B08:
/* 00440B08 8F998654 */  lw    $t9, %call16(opvalhash)($gp)
/* 00440B0C 93C40000 */  lbu   $a0, ($fp)
/* 00440B10 02C02825 */  move  $a1, $s6
/* 00440B14 8FC60004 */  lw    $a2, 4($fp)
/* 00440B18 0320F809 */  jalr  $t9
/* 00440B1C AFB600F8 */   sw    $s6, 0xf8($sp)
/* 00440B20 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00440B24 3044FFFF */  andi  $a0, $v0, 0xffff
/* 00440B28 27A20110 */  addiu $v0, $sp, 0x110
/* 00440B2C 8F998024 */  lw    $t9, %got(func_0043B504)($gp)
/* 00440B30 2739B504 */  addiu $t9, %lo(func_0043B504) # addiu $t9, $t9, -0x4afc
/* 00440B34 0320F809 */  jalr  $t9
/* 00440B38 00000000 */   nop   
/* 00440B3C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00440B40 0040A825 */  move  $s5, $v0
/* 00440B44 8F998B20 */  lw     $t9, %got(outofmem)($gp)
/* 00440B48 93390000 */  lbu   $t9, ($t9)
/* 00440B4C 57200F09 */  bnezl $t9, .L00444774
/* 00440B50 8FBF003C */   lw    $ra, 0x3c($sp)
/* 00440B54 90580000 */  lbu   $t8, ($v0)
/* 00440B58 8FB600F8 */  lw    $s6, 0xf8($sp)
/* 00440B5C 240C0004 */  li    $t4, 4
/* 00440B60 17000090 */  bnez  $t8, .L00440DA4
/* 00440B64 00000000 */   nop   
/* 00440B68 A04C0000 */  sb    $t4, ($v0)
/* 00440B6C 93D00001 */  lbu   $s0, 1($fp)
/* 00440B70 24050001 */  li    $a1, 1
/* 00440B74 3210001F */  andi  $s0, $s0, 0x1f
/* 00440B78 A0500001 */  sb    $s0, 1($v0)
/* 00440B7C A0500023 */  sb    $s0, 0x23($v0)
/* 00440B80 93CF0000 */  lbu   $t7, ($fp)
/* 00440B84 AC560024 */  sw    $s6, 0x24($v0)
/* 00440B88 AC400028 */  sw    $zero, 0x28($v0)
/* 00440B8C A4450006 */  sh    $a1, 6($v0)
/* 00440B90 A040003E */  sb    $zero, 0x3e($v0)
/* 00440B94 A04F0020 */  sb    $t7, 0x20($v0)
/* 00440B98 8FCA0004 */  lw    $t2, 4($fp)
/* 00440B9C AC4A002C */  sw    $t2, 0x2c($v0)
/* 00440BA0 8FCE0008 */  lw    $t6, 8($fp)
/* 00440BA4 A44E003C */  sh    $t6, 0x3c($v0)
/* 00440BA8 97CB0002 */  lhu   $t3, 2($fp)
/* 00440BAC 000B68C2 */  srl   $t5, $t3, 3
/* 00440BB0 000DC8C0 */  sll   $t9, $t5, 3
/* 00440BB4 333800FF */  andi  $t8, $t9, 0xff
/* 00440BB8 17000004 */  bnez  $t8, .L00440BCC
/* 00440BBC A059003F */   sb    $t9, 0x3f($v0)
/* 00440BC0 31CCFFFF */  andi  $t4, $t6, 0xffff
/* 00440BC4 000C78C0 */  sll   $t7, $t4, 3
/* 00440BC8 A04F003F */  sb    $t7, 0x3f($v0)
.L00440BCC:
/* 00440BCC 92C40000 */  lbu   $a0, ($s6)
/* 00440BD0 24090002 */  li    $t1, 2
/* 00440BD4 15240023 */  bne   $t1, $a0, .L00440C64
/* 00440BD8 00000000 */   nop   
/* 00440BDC 904E003F */  lbu   $t6, 0x3f($v0)
/* 00440BE0 8ECA0020 */  lw    $t2, 0x20($s6)
/* 00440BE4 24040008 */  li    $a0, 8
/* 00440BE8 000E58C2 */  srl   $t3, $t6, 3
/* 00440BEC 014B001A */  div   $zero, $t2, $t3
/* 00440BF0 00006810 */  mfhi  $t5
/* 00440BF4 15600002 */  bnez  $t3, .L00440C00
/* 00440BF8 00000000 */   nop   
/* 00440BFC 0007000D */  break 7
.L00440C00:
/* 00440C00 2401FFFF */  li    $at, -1
/* 00440C04 15610004 */  bne   $t3, $at, .L00440C18
/* 00440C08 3C018000 */   lui   $at, 0x8000
/* 00440C0C 15410002 */  bne   $t2, $at, .L00440C18
/* 00440C10 00000000 */   nop   
/* 00440C14 0006000D */  break 6
.L00440C18:
/* 00440C18 11A00034 */  beqz  $t5, .L00440CEC
/* 00440C1C 00000000 */   nop   
/* 00440C20 A044003F */  sb    $a0, 0x3f($v0)
/* 00440C24 8ED20020 */  lw    $s2, 0x20($s6)
/* 00440C28 32590001 */  andi  $t9, $s2, 1
/* 00440C2C 1720002F */  bnez  $t9, .L00440CEC
/* 00440C30 00000000 */   nop   
/* 00440C34 9058003F */  lbu   $t8, 0x3f($v0)
.L00440C38:
/* 00440C38 00186040 */  sll   $t4, $t8, 1
/* 00440C3C A04C003F */  sb    $t4, 0x3f($v0)
/* 00440C40 06410002 */  bgez  $s2, .L00440C4C
/* 00440C44 02400821 */   move  $at, $s2
/* 00440C48 26410001 */  addiu $at, $s2, 1
.L00440C4C:
/* 00440C4C 00019043 */  sra   $s2, $at, 1
/* 00440C50 324F0001 */  andi  $t7, $s2, 1
/* 00440C54 51E0FFF8 */  beql  $t7, $zero, .L00440C38
/* 00440C58 9058003F */   lbu   $t8, 0x3f($v0)
/* 00440C5C 10000023 */  b     .L00440CEC
/* 00440C60 00000000 */   nop   
.L00440C64:
/* 00440C64 14A40021 */  bne   $a1, $a0, .L00440CEC
/* 00440C68 00000000 */   nop   
/* 00440C6C 904A003F */  lbu   $t2, 0x3f($v0)
/* 00440C70 8ECE002C */  lw    $t6, 0x2c($s6)
/* 00440C74 24040008 */  li    $a0, 8
/* 00440C78 000A58C2 */  srl   $t3, $t2, 3
/* 00440C7C 01CB001A */  div   $zero, $t6, $t3
/* 00440C80 00006810 */  mfhi  $t5
/* 00440C84 15600002 */  bnez  $t3, .L00440C90
/* 00440C88 00000000 */   nop   
/* 00440C8C 0007000D */  break 7
.L00440C90:
/* 00440C90 2401FFFF */  li    $at, -1
/* 00440C94 15610004 */  bne   $t3, $at, .L00440CA8
/* 00440C98 3C018000 */   lui   $at, 0x8000
/* 00440C9C 15C10002 */  bne   $t6, $at, .L00440CA8
/* 00440CA0 00000000 */   nop   
/* 00440CA4 0006000D */  break 6
.L00440CA8:
/* 00440CA8 11A00010 */  beqz  $t5, .L00440CEC
/* 00440CAC 00000000 */   nop   
/* 00440CB0 A044003F */  sb    $a0, 0x3f($v0)
/* 00440CB4 8ED2002C */  lw    $s2, 0x2c($s6)
/* 00440CB8 32590001 */  andi  $t9, $s2, 1
/* 00440CBC 1720000B */  bnez  $t9, .L00440CEC
/* 00440CC0 00000000 */   nop   
/* 00440CC4 9058003F */  lbu   $t8, 0x3f($v0)
.L00440CC8:
/* 00440CC8 00186040 */  sll   $t4, $t8, 1
/* 00440CCC A04C003F */  sb    $t4, 0x3f($v0)
/* 00440CD0 06410002 */  bgez  $s2, .L00440CDC
/* 00440CD4 02400821 */   move  $at, $s2
/* 00440CD8 26410001 */  addiu $at, $s2, 1
.L00440CDC:
/* 00440CDC 00019043 */  sra   $s2, $at, 1
/* 00440CE0 324F0001 */  andi  $t7, $s2, 1
/* 00440CE4 51E0FFF8 */  beql  $t7, $zero, .L00440CC8
/* 00440CE8 9058003F */   lbu   $t8, 0x3f($v0)
.L00440CEC:
/* 00440CEC 8F998378 */  lw    $t9, %call16(findbaseaddr)($gp)
/* 00440CF0 8FCA000C */  lw    $t2, 0xc($fp)
/* 00440CF4 AEA00030 */  sw    $zero, 0x30($s5)
/* 00440CF8 A2A00005 */  sb    $zero, 5($s5)
/* 00440CFC A2A00004 */  sb    $zero, 4($s5)
/* 00440D00 02C02025 */  move  $a0, $s6
/* 00440D04 0320F809 */  jalr  $t9
/* 00440D08 AEAA0038 */   sw    $t2, 0x38($s5)
/* 00440D0C 92AE0001 */  lbu   $t6, 1($s5)
/* 00440D10 2401000E */  li    $at, 14
/* 00440D14 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00440D18 11C10014 */  beq   $t6, $at, .L00440D6C
/* 00440D1C AEA20034 */   sw    $v0, 0x34($s5)
/* 00440D20 93CB0000 */  lbu   $t3, ($fp)
/* 00440D24 2401009A */  li    $at, 154
/* 00440D28 51610011 */  beql  $t3, $at, .L00440D70
/* 00440D2C 240C0001 */   li    $t4, 1
/* 00440D30 92AD0003 */  lbu   $t5, 3($s5)
/* 00440D34 A2A00002 */  sb    $zero, 2($s5)
/* 00440D38 11A0000F */  beqz  $t5, .L00440D78
/* 00440D3C 00000000 */   nop   
/* 00440D40 8F9989B4 */  lw     $t9, %got(curgraphnode)($gp)
/* 00440D44 02A02025 */  move  $a0, $s5
/* 00440D48 8F390000 */  lw    $t9, ($t9)
/* 00440D4C 8F250024 */  lw    $a1, 0x24($t9)
/* 00440D50 8F9983C4 */  lw    $t9, %call16(varkilled)($gp)
/* 00440D54 0320F809 */  jalr  $t9
/* 00440D58 00000000 */   nop   
/* 00440D5C 2C580001 */  sltiu $t8, $v0, 1
/* 00440D60 A2B80003 */  sb    $t8, 3($s5)
/* 00440D64 10000004 */  b     .L00440D78
/* 00440D68 8FBC0034 */   lw    $gp, 0x34($sp)
.L00440D6C:
/* 00440D6C 240C0001 */  li    $t4, 1
.L00440D70:
/* 00440D70 A2AC0002 */  sb    $t4, 2($s5)
/* 00440D74 A2A00003 */  sb    $zero, 3($s5)
.L00440D78:
/* 00440D78 8F99831C */  lw    $t9, %call16(appendbbvarlst)($gp)
/* 00440D7C 02A02025 */  move  $a0, $s5
/* 00440D80 0320F809 */  jalr  $t9
/* 00440D84 00000000 */   nop   
/* 00440D88 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00440D8C 02A02025 */  move  $a0, $s5
/* 00440D90 8F9983A0 */  lw    $t9, %call16(lodkillprev)($gp)
/* 00440D94 0320F809 */  jalr  $t9
/* 00440D98 00000000 */   nop   
/* 00440D9C 10000006 */  b     .L00440DB8
/* 00440DA0 8FBC0034 */   lw    $gp, 0x34($sp)
.L00440DA4:
/* 00440DA4 8F998640 */  lw    $t9, %call16(increasecount)($gp)
/* 00440DA8 02A02025 */  move  $a0, $s5
/* 00440DAC 0320F809 */  jalr  $t9
/* 00440DB0 00000000 */   nop   
/* 00440DB4 8FBC0034 */  lw    $gp, 0x34($sp)
.L00440DB8:
/* 00440DB8 8F8F8964 */  lw     $t7, %got(ustack)($gp)
/* 00440DBC 8DEF0000 */  lw    $t7, ($t7)
/* 00440DC0 10000E6B */  b     .L00444770
/* 00440DC4 ADF50000 */   sw    $s5, ($t7)
.L00440DC8:
/* 00440DC8 8F998024 */  lw    $t9, %got(func_0043B1DC)($gp)
/* 00440DCC 27A20110 */  addiu $v0, $sp, 0x110
/* 00440DD0 2739B1DC */  addiu $t9, %lo(func_0043B1DC) # addiu $t9, $t9, -0x4e24
/* 00440DD4 0320F809 */  jalr  $t9
/* 00440DD8 00000000 */   nop   
/* 00440DDC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00440DE0 27A20110 */  addiu $v0, $sp, 0x110
/* 00440DE4 8F938964 */  lw     $s3, %got(ustack)($gp)
/* 00440DE8 8F998024 */  lw    $t9, %got(func_0043B1DC)($gp)
/* 00440DEC 8F818964 */  lw     $at, %got(ustack)($gp)
/* 00440DF0 8E730000 */  lw    $s3, ($s3)
/* 00440DF4 2739B1DC */  addiu $t9, %lo(func_0043B1DC) # addiu $t9, $t9, -0x4e24
/* 00440DF8 8E6A0000 */  lw    $t2, ($s3)
/* 00440DFC 8E6E000C */  lw    $t6, 0xc($s3)
/* 00440E00 AFAA00F4 */  sw    $t2, 0xf4($sp)
/* 00440E04 0320F809 */  jalr  $t9
/* 00440E08 AC2E0000 */   sw    $t6, ($at)
/* 00440E0C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00440E10 93C40000 */  lbu   $a0, ($fp)
/* 00440E14 8FA600F4 */  lw    $a2, 0xf4($sp)
/* 00440E18 8F8B8964 */  lw     $t3, %got(ustack)($gp)
/* 00440E1C 8F998650 */  lw    $t9, %call16(isophash)($gp)
/* 00440E20 8D6B0000 */  lw    $t3, ($t3)
/* 00440E24 8D650000 */  lw    $a1, ($t3)
/* 00440E28 0320F809 */  jalr  $t9
/* 00440E2C AFA500F8 */   sw    $a1, 0xf8($sp)
/* 00440E30 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00440E34 3044FFFF */  andi  $a0, $v0, 0xffff
/* 00440E38 27A20110 */  addiu $v0, $sp, 0x110
/* 00440E3C 8F998024 */  lw    $t9, %got(func_0043B504)($gp)
/* 00440E40 2739B504 */  addiu $t9, %lo(func_0043B504) # addiu $t9, $t9, -0x4afc
/* 00440E44 0320F809 */  jalr  $t9
/* 00440E48 00000000 */   nop   
/* 00440E4C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00440E50 0040A825 */  move  $s5, $v0
/* 00440E54 8F8D8B20 */  lw     $t5, %got(outofmem)($gp)
/* 00440E58 91AD0000 */  lbu   $t5, ($t5)
/* 00440E5C 55A00E45 */  bnezl $t5, .L00444774
/* 00440E60 8FBF003C */   lw    $ra, 0x3c($sp)
/* 00440E64 90590000 */  lbu   $t9, ($v0)
/* 00440E68 8FA400F8 */  lw    $a0, 0xf8($sp)
/* 00440E6C 24180004 */  li    $t8, 4
/* 00440E70 17200037 */  bnez  $t9, .L00440F50
/* 00440E74 240C0009 */   li    $t4, 9
/* 00440E78 240F0006 */  li    $t7, 6
/* 00440E7C A0580000 */  sb    $t8, ($v0)
/* 00440E80 A04C0001 */  sb    $t4, 1($v0)
/* 00440E84 A04F0023 */  sb    $t7, 0x23($v0)
/* 00440E88 93CA0000 */  lbu   $t2, ($fp)
/* 00440E8C AC440024 */  sw    $a0, 0x24($v0)
/* 00440E90 240B0001 */  li    $t3, 1
/* 00440E94 A04A0020 */  sb    $t2, 0x20($v0)
/* 00440E98 8FAE00F4 */  lw    $t6, 0xf4($sp)
/* 00440E9C A44B0006 */  sh    $t3, 6($v0)
/* 00440EA0 A040003E */  sb    $zero, 0x3e($v0)
/* 00440EA4 AC4E0028 */  sw    $t6, 0x28($v0)
/* 00440EA8 8FCD0008 */  lw    $t5, 8($fp)
/* 00440EAC AC4D002C */  sw    $t5, 0x2c($v0)
/* 00440EB0 8FD90004 */  lw    $t9, 4($fp)
/* 00440EB4 A0400002 */  sb    $zero, 2($v0)
/* 00440EB8 AC400030 */  sw    $zero, 0x30($v0)
/* 00440EBC A0400005 */  sb    $zero, 5($v0)
/* 00440EC0 A0400004 */  sb    $zero, 4($v0)
/* 00440EC4 A459003C */  sh    $t9, 0x3c($v0)
/* 00440EC8 8F998378 */  lw    $t9, %call16(findbaseaddr)($gp)
/* 00440ECC 0320F809 */  jalr  $t9
/* 00440ED0 00000000 */   nop   
/* 00440ED4 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00440ED8 AEA20034 */  sw    $v0, 0x34($s5)
/* 00440EDC 8FA400F4 */  lw    $a0, 0xf4($sp)
/* 00440EE0 8F998378 */  lw    $t9, %call16(findbaseaddr)($gp)
/* 00440EE4 0320F809 */  jalr  $t9
/* 00440EE8 00000000 */   nop   
/* 00440EEC 92B80003 */  lbu   $t8, 3($s5)
/* 00440EF0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00440EF4 AEA20038 */  sw    $v0, 0x38($s5)
/* 00440EF8 1300000A */  beqz  $t8, .L00440F24
/* 00440EFC 00000000 */   nop   
/* 00440F00 8F8C89B4 */  lw     $t4, %got(curgraphnode)($gp)
/* 00440F04 8F9983C4 */  lw    $t9, %call16(varkilled)($gp)
/* 00440F08 02A02025 */  move  $a0, $s5
/* 00440F0C 8D8C0000 */  lw    $t4, ($t4)
/* 00440F10 0320F809 */  jalr  $t9
/* 00440F14 8D850024 */   lw    $a1, 0x24($t4)
/* 00440F18 2C4F0001 */  sltiu $t7, $v0, 1
/* 00440F1C A2AF0003 */  sb    $t7, 3($s5)
/* 00440F20 8FBC0034 */  lw    $gp, 0x34($sp)
.L00440F24:
/* 00440F24 8F99831C */  lw    $t9, %call16(appendbbvarlst)($gp)
/* 00440F28 02A02025 */  move  $a0, $s5
/* 00440F2C 0320F809 */  jalr  $t9
/* 00440F30 00000000 */   nop   
/* 00440F34 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00440F38 02A02025 */  move  $a0, $s5
/* 00440F3C 8F9983A0 */  lw    $t9, %call16(lodkillprev)($gp)
/* 00440F40 0320F809 */  jalr  $t9
/* 00440F44 00000000 */   nop   
/* 00440F48 10000008 */  b     .L00440F6C
/* 00440F4C 8FBC0034 */   lw    $gp, 0x34($sp)
.L00440F50:
/* 00440F50 8F998320 */  lw    $t9, %call16(incroccurrence)($gp)
/* 00440F54 AFB5010C */  sw    $s5, 0x10c($sp)
/* 00440F58 27A4010C */  addiu $a0, $sp, 0x10c
/* 00440F5C 0320F809 */  jalr  $t9
/* 00440F60 00000000 */   nop   
/* 00440F64 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00440F68 8FB5010C */  lw    $s5, 0x10c($sp)
.L00440F6C:
/* 00440F6C 8F8A8964 */  lw     $t2, %got(ustack)($gp)
/* 00440F70 8D4A0000 */  lw    $t2, ($t2)
/* 00440F74 10000DFE */  b     .L00444770
/* 00440F78 AD550000 */   sw    $s5, ($t2)
.L00440F7C:
/* 00440F7C 8F8E8964 */  lw     $t6, %got(ustack)($gp)
/* 00440F80 8F998024 */  lw    $t9, %got(func_0043B15C)($gp)
/* 00440F84 27A20110 */  addiu $v0, $sp, 0x110
/* 00440F88 8DCE0000 */  lw    $t6, ($t6)
/* 00440F8C 2739B15C */  addiu $t9, %lo(func_0043B15C) # addiu $t9, $t9, -0x4ea4
/* 00440F90 0320F809 */  jalr  $t9
/* 00440F94 8DC40000 */   lw    $a0, ($t6)
/* 00440F98 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00440F9C 8F938964 */  lw     $s3, %got(ustack)($gp)
/* 00440FA0 8E730000 */  lw    $s3, ($s3)
/* 00440FA4 8E700000 */  lw    $s0, ($s3)
/* 00440FA8 960B0006 */  lhu   $t3, 6($s0)
/* 00440FAC 256D0001 */  addiu $t5, $t3, 1
/* 00440FB0 A60D0006 */  sh    $t5, 6($s0)
/* 00440FB4 8E79000C */  lw    $t9, 0xc($s3)
/* 00440FB8 8F380004 */  lw    $t8, 4($t9)
/* 00440FBC 10000DEC */  b     .L00444770
/* 00440FC0 AE780004 */   sw    $t8, 4($s3)
.L00440FC4:
/* 00440FC4 8F928CD0 */  lw     $s2, %got(strp)($gp)
/* 00440FC8 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 00440FCC 8FC50004 */  lw    $a1, 4($fp)
/* 00440FD0 8E520000 */  lw    $s2, ($s2)
/* 00440FD4 24060001 */  li    $a2, 1
/* 00440FD8 2407000A */  li    $a3, 10
/* 00440FDC 24A50030 */  addiu $a1, $a1, 0x30
/* 00440FE0 0320F809 */  jalr  $t9
/* 00440FE4 02402025 */   move  $a0, $s2
/* 00440FE8 8FD70010 */  lw    $s7, 0x10($fp)
/* 00440FEC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00440FF0 1AE00010 */  blez  $s7, .L00441034
/* 00440FF4 00000000 */   nop   
/* 00440FF8 8F908950 */  lw     $s0, %got(ustrptr)($gp)
/* 00440FFC 24110001 */  li    $s1, 1
/* 00441000 26F70001 */  addiu $s7, $s7, 1
/* 00441004 8E100000 */  lw    $s0, ($s0)
/* 00441008 26100001 */  addiu $s0, $s0, 1
.L0044100C:
/* 0044100C 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 00441010 02402025 */  move  $a0, $s2
/* 00441014 9205FFFF */  lbu   $a1, -1($s0)
/* 00441018 24060001 */  li    $a2, 1
/* 0044101C 0320F809 */  jalr  $t9
/* 00441020 2407000A */   li    $a3, 10
/* 00441024 26310001 */  addiu $s1, $s1, 1
/* 00441028 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0044102C 1637FFF7 */  bne   $s1, $s7, .L0044100C
/* 00441030 26100001 */   addiu $s0, $s0, 1
.L00441034:
/* 00441034 8F998644 */  lw    $t9, %call16(isconsthash)($gp)
/* 00441038 8F908998 */  lw     $s0, %got(strpdisplace)($gp)
/* 0044103C 0320F809 */  jalr  $t9
/* 00441040 8E040000 */   lw    $a0, ($s0)
/* 00441044 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00441048 3044FFFF */  andi  $a0, $v0, 0xffff
/* 0044104C 27A20110 */  addiu $v0, $sp, 0x110
/* 00441050 8F998024 */  lw    $t9, %got(func_0043B504)($gp)
/* 00441054 2739B504 */  addiu $t9, %lo(func_0043B504) # addiu $t9, $t9, -0x4afc
/* 00441058 0320F809 */  jalr  $t9
/* 0044105C 00000000 */   nop   
/* 00441060 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00441064 0040A825 */  move  $s5, $v0
/* 00441068 24090002 */  li    $t1, 2
/* 0044106C 8F8C8B20 */  lw     $t4, %got(outofmem)($gp)
/* 00441070 918C0000 */  lbu   $t4, ($t4)
/* 00441074 55800DBF */  bnezl $t4, .L00444774
/* 00441078 8FBF003C */   lw    $ra, 0x3c($sp)
/* 0044107C A0490000 */  sb    $t1, ($v0)
/* 00441080 93CF0001 */  lbu   $t7, 1($fp)
/* 00441084 8F998024 */  lw    $t9, %got(func_0043B15C)($gp)
/* 00441088 00402025 */  move  $a0, $v0
/* 0044108C 31EA001F */  andi  $t2, $t7, 0x1f
/* 00441090 A04A0001 */  sb    $t2, 1($v0)
/* 00441094 8FCE0008 */  lw    $t6, 8($fp)
/* 00441098 2739B15C */  addiu $t9, %lo(func_0043B15C) # addiu $t9, $t9, -0x4ea4
/* 0044109C AC4E0028 */  sw    $t6, 0x28($v0)
/* 004410A0 8E050000 */  lw    $a1, ($s0)
/* 004410A4 A4450020 */  sh    $a1, 0x20($v0)
/* 004410A8 8FD60010 */  lw    $s6, 0x10($fp)
/* 004410AC AC400018 */  sw    $zero, 0x18($v0)
/* 004410B0 A4560022 */  sh    $s6, 0x22($v0)
/* 004410B4 00B65821 */  addu  $t3, $a1, $s6
/* 004410B8 256D0001 */  addiu $t5, $t3, 1
/* 004410BC AE0D0000 */  sw    $t5, ($s0)
/* 004410C0 AFB5010C */  sw    $s5, 0x10c($sp)
/* 004410C4 0320F809 */  jalr  $t9
/* 004410C8 27A20110 */   addiu $v0, $sp, 0x110
/* 004410CC 10000DA8 */  b     .L00444770
/* 004410D0 8FBC0034 */   lw    $gp, 0x34($sp)
.L004410D4:
/* 004410D4 92D90000 */  lbu   $t9, ($s6)
/* 004410D8 1320007F */  beqz  $t9, .L004412D8
/* 004410DC 00000000 */   nop   
/* 004410E0 93D80001 */  lbu   $t8, 1($fp)
/* 004410E4 24010004 */  li    $at, 4
/* 004410E8 00186600 */  sll   $t4, $t8, 0x18
/* 004410EC 000C7F42 */  srl   $t7, $t4, 0x1d
/* 004410F0 15E10079 */  bne   $t7, $at, .L004412D8
/* 004410F4 00000000 */   nop   
/* 004410F8 8F998494 */  lw    $t9, %call16(in_fsym)($gp)
/* 004410FC 8FC40004 */  lw    $a0, 4($fp)
/* 00441100 0320F809 */  jalr  $t9
/* 00441104 00000000 */   nop   
/* 00441108 14400073 */  bnez  $v0, .L004412D8
/* 0044110C 8FBC0034 */   lw    $gp, 0x34($sp)
/* 00441110 8F998498 */  lw    $t9, %call16(is_gp_relative)($gp)
/* 00441114 8FC40004 */  lw    $a0, 4($fp)
/* 00441118 0320F809 */  jalr  $t9
/* 0044111C 00000000 */   nop   
/* 00441120 1440006D */  bnez  $v0, .L004412D8
/* 00441124 8FBC0034 */   lw    $gp, 0x34($sp)
/* 00441128 8F8A8A5C */  lw     $t2, %got(lang)($gp)
/* 0044112C 24010001 */  li    $at, 1
/* 00441130 914A0000 */  lbu   $t2, ($t2)
/* 00441134 5541003E */  bnel  $t2, $at, .L00441230
/* 00441138 8FC3000C */   lw    $v1, 0xc($fp)
/* 0044113C 8F8E8964 */  lw     $t6, %got(ustack)($gp)
/* 00441140 24010001 */  li    $at, 1
/* 00441144 8DCE0000 */  lw    $t6, ($t6)
/* 00441148 8DD10000 */  lw    $s1, ($t6)
/* 0044114C 922B0000 */  lbu   $t3, ($s1)
/* 00441150 15610014 */  bne   $t3, $at, .L004411A4
/* 00441154 00000000 */   nop   
/* 00441158 8F8D8980 */  lw     $t5, %got(curblk)($gp)
/* 0044115C 8E240030 */  lw    $a0, 0x30($s1)
/* 00441160 8DAD0000 */  lw    $t5, ($t5)
/* 00441164 000422C2 */  srl   $a0, $a0, 0xb
/* 00441168 11A4000A */  beq   $t5, $a0, .L00441194
/* 0044116C 00000000 */   nop   
/* 00441170 8F998B14 */  lw     $t9, %got(f77_static_flag)($gp)
/* 00441174 93390000 */  lbu   $t9, ($t9)
/* 00441178 1320000A */  beqz  $t9, .L004411A4
/* 0044117C 00000000 */   nop   
/* 00441180 8F998494 */  lw    $t9, %call16(in_fsym)($gp)
/* 00441184 0320F809 */  jalr  $t9
/* 00441188 00000000 */   nop   
/* 0044118C 10400005 */  beqz  $v0, .L004411A4
/* 00441190 8FBC0034 */   lw    $gp, 0x34($sp)
.L00441194:
/* 00441194 8F818B44 */  lw     $at, %got(use_c_semantics)($gp)
/* 00441198 24180001 */  li    $t8, 1
/* 0044119C 10000023 */  b     .L0044122C
/* 004411A0 A0380000 */   sb    $t8, ($at)
.L004411A4:
/* 004411A4 8F8C8964 */  lw     $t4, %got(ustack)($gp)
/* 004411A8 24010004 */  li    $at, 4
/* 004411AC 8D8C0000 */  lw    $t4, ($t4)
/* 004411B0 8D910000 */  lw    $s1, ($t4)
/* 004411B4 922F0000 */  lbu   $t7, ($s1)
/* 004411B8 55E1001D */  bnel  $t7, $at, .L00441230
/* 004411BC 8FC3000C */   lw    $v1, 0xc($fp)
/* 004411C0 922A0020 */  lbu   $t2, 0x20($s1)
/* 004411C4 24010018 */  li    $at, 24
/* 004411C8 55410019 */  bnel  $t2, $at, .L00441230
/* 004411CC 8FC3000C */   lw    $v1, 0xc($fp)
/* 004411D0 8E220024 */  lw    $v0, 0x24($s1)
/* 004411D4 24010001 */  li    $at, 1
/* 004411D8 904E0000 */  lbu   $t6, ($v0)
/* 004411DC 55C10014 */  bnel  $t6, $at, .L00441230
/* 004411E0 8FC3000C */   lw    $v1, 0xc($fp)
/* 004411E4 8F8B8980 */  lw     $t3, %got(curblk)($gp)
/* 004411E8 8C440030 */  lw    $a0, 0x30($v0)
/* 004411EC 8D6B0000 */  lw    $t3, ($t3)
/* 004411F0 000422C2 */  srl   $a0, $a0, 0xb
/* 004411F4 1164000A */  beq   $t3, $a0, .L00441220
/* 004411F8 00000000 */   nop   
/* 004411FC 8F8D8B14 */  lw     $t5, %got(f77_static_flag)($gp)
/* 00441200 91AD0000 */  lbu   $t5, ($t5)
/* 00441204 51A0000A */  beql  $t5, $zero, .L00441230
/* 00441208 8FC3000C */   lw    $v1, 0xc($fp)
/* 0044120C 8F998494 */  lw    $t9, %call16(in_fsym)($gp)
/* 00441210 0320F809 */  jalr  $t9
/* 00441214 00000000 */   nop   
/* 00441218 10400004 */  beqz  $v0, .L0044122C
/* 0044121C 8FBC0034 */   lw    $gp, 0x34($sp)
.L00441220:
/* 00441220 8F818B44 */  lw     $at, %got(use_c_semantics)($gp)
/* 00441224 24190001 */  li    $t9, 1
/* 00441228 A0390000 */  sb    $t9, ($at)
.L0044122C:
/* 0044122C 8FC3000C */  lw    $v1, 0xc($fp)
.L00441230:
/* 00441230 93D20001 */  lbu   $s2, 1($fp)
/* 00441234 A3D70000 */  sb    $s7, ($fp)
/* 00441238 00031403 */  sra   $v0, $v1, 0x10
/* 0044123C 00021400 */  sll   $v0, $v0, 0x10
/* 00441240 AFC2000C */  sw    $v0, 0xc($fp)
/* 00441244 AFC30010 */  sw    $v1, 0x10($fp)
/* 00441248 8F99832C */  lw    $t9, %call16(readnxtinst)($gp)
/* 0044124C 3252001F */  andi  $s2, $s2, 0x1f
/* 00441250 325200FF */  andi  $s2, $s2, 0xff
/* 00441254 8FD10008 */  lw    $s1, 8($fp)
/* 00441258 0320F809 */  jalr  $t9
/* 0044125C 00628023 */   subu  $s0, $v1, $v0
/* 00441260 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00441264 2418007E */  li    $t8, 126
/* 00441268 A3D80000 */  sb    $t8, ($fp)
/* 0044126C 8F99832C */  lw    $t9, %call16(readnxtinst)($gp)
/* 00441270 0320F809 */  jalr  $t9
/* 00441274 00000000 */   nop   
/* 00441278 97C20002 */  lhu   $v0, 2($fp)
/* 0044127C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00441280 240F0040 */  li    $t7, 64
/* 00441284 304C0001 */  andi  $t4, $v0, 1
/* 00441288 11800003 */  beqz  $t4, .L00441298
/* 0044128C 240A003F */   li    $t2, 63
/* 00441290 10000002 */  b     .L0044129C
/* 00441294 A3CF0000 */   sb    $t7, ($fp)
.L00441298:
/* 00441298 A3CA0000 */  sb    $t2, ($fp)
.L0044129C:
/* 0044129C 93C40001 */  lbu   $a0, 1($fp)
/* 004412A0 320C0007 */  andi  $t4, $s0, 7
/* 004412A4 000C78C0 */  sll   $t7, $t4, 3
/* 004412A8 000476C0 */  sll   $t6, $a0, 0x1b
/* 004412AC 000E5EC2 */  srl   $t3, $t6, 0x1b
/* 004412B0 024B6826 */  xor   $t5, $s2, $t3
/* 004412B4 31B9001F */  andi  $t9, $t5, 0x1f
/* 004412B8 004F5025 */  or    $t2, $v0, $t7
/* 004412BC 0324C026 */  xor   $t8, $t9, $a0
/* 004412C0 A3D80001 */  sb    $t8, 1($fp)
/* 004412C4 AFD00004 */  sw    $s0, 4($fp)
/* 004412C8 AFC0000C */  sw    $zero, 0xc($fp)
/* 004412CC AFD10008 */  sw    $s1, 8($fp)
/* 004412D0 1000EF50 */  b     .L0043D014
/* 004412D4 A7CA0002 */   sh    $t2, 2($fp)
.L004412D8:
/* 004412D8 8F998024 */  lw    $t9, %got(func_0043B1DC)($gp)
/* 004412DC 27A20110 */  addiu $v0, $sp, 0x110
/* 004412E0 2739B1DC */  addiu $t9, %lo(func_0043B1DC) # addiu $t9, $t9, -0x4e24
/* 004412E4 0320F809 */  jalr  $t9
/* 004412E8 00000000 */   nop   
/* 004412EC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004412F0 24010004 */  li    $at, 4
/* 004412F4 8F938964 */  lw     $s3, %got(ustack)($gp)
/* 004412F8 8E730000 */  lw    $s3, ($s3)
/* 004412FC 8E710000 */  lw    $s1, ($s3)
/* 00441300 922E0000 */  lbu   $t6, ($s1)
/* 00441304 55C10018 */  bnel  $t6, $at, .L00441368
/* 00441308 93CA0001 */   lbu   $t2, 1($fp)
/* 0044130C 922B0020 */  lbu   $t3, 0x20($s1)
/* 00441310 24010019 */  li    $at, 25
/* 00441314 55610014 */  bnel  $t3, $at, .L00441368
/* 00441318 93CA0001 */   lbu   $t2, 1($fp)
/* 0044131C 8FD90008 */  lw    $t9, 8($fp)
/* 00441320 8E2D002C */  lw    $t5, 0x2c($s1)
/* 00441324 0019C0C0 */  sll   $t8, $t9, 3
/* 00441328 01B8082A */  slt   $at, $t5, $t8
/* 0044132C 5420000E */  bnezl $at, .L00441368
/* 00441330 93CA0001 */   lbu   $t2, 1($fp)
/* 00441334 8E360024 */  lw    $s6, 0x24($s1)
/* 00441338 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 0044133C 96CC0006 */  lhu   $t4, 6($s6)
/* 00441340 258F0001 */  addiu $t7, $t4, 1
/* 00441344 A6CF0006 */  sh    $t7, 6($s6)
/* 00441348 0320F809 */  jalr  $t9
/* 0044134C 8E640000 */   lw    $a0, ($s3)
/* 00441350 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00441354 AFB600F8 */  sw    $s6, 0xf8($sp)
/* 00441358 8F938964 */  lw     $s3, %got(ustack)($gp)
/* 0044135C 8E730000 */  lw    $s3, ($s3)
/* 00441360 AE760000 */  sw    $s6, ($s3)
/* 00441364 93CA0001 */  lbu   $t2, 1($fp)
.L00441368:
/* 00441368 93B900EA */  lbu   $t9, 0xea($sp)
/* 0044136C 24010003 */  li    $at, 3
/* 00441370 000A7600 */  sll   $t6, $t2, 0x18
/* 00441374 00196F40 */  sll   $t5, $t9, 0x1d
/* 00441378 000DC742 */  srl   $t8, $t5, 0x1d
/* 0044137C 000E5F42 */  srl   $t3, $t6, 0x1d
/* 00441380 01786026 */  xor   $t4, $t3, $t8
/* 00441384 318F0007 */  andi  $t7, $t4, 7
/* 00441388 01F95026 */  xor   $t2, $t7, $t9
/* 0044138C A3AA00EA */  sb    $t2, 0xea($sp)
/* 00441390 8FAD00E8 */  lw    $t5, 0xe8($sp)
/* 00441394 8FCE0004 */  lw    $t6, 4($fp)
/* 00441398 8FD9000C */  lw    $t9, 0xc($fp)
/* 0044139C 000D5AC2 */  srl   $t3, $t5, 0xb
/* 004413A0 01CBC026 */  xor   $t8, $t6, $t3
/* 004413A4 001862C0 */  sll   $t4, $t8, 0xb
/* 004413A8 018D7826 */  xor   $t7, $t4, $t5
/* 004413AC AFAF00E8 */  sw    $t7, 0xe8($sp)
/* 004413B0 93AA00EA */  lbu   $t2, 0xea($sp)
/* 004413B4 AFB900E4 */  sw    $t9, 0xe4($sp)
/* 004413B8 314E0007 */  andi  $t6, $t2, 7
/* 004413BC 15C10025 */  bne   $t6, $at, .L00441454
/* 004413C0 00000000 */   nop   
/* 004413C4 8F958A34 */  lw     $s5, %got(curmst)($gp)
/* 004413C8 31EB07FF */  andi  $t3, $t7, 0x7ff
/* 004413CC AFAB00E8 */  sw    $t3, 0xe8($sp)
/* 004413D0 8EA30000 */  lw    $v1, ($s5)
/* 004413D4 1060001F */  beqz  $v1, .L00441454
/* 004413D8 00000000 */   nop   
/* 004413DC 8C780014 */  lw    $t8, 0x14($v1)
/* 004413E0 24010002 */  li    $at, 2
/* 004413E4 1300001B */  beqz  $t8, .L00441454
/* 004413E8 00000000 */   nop   
/* 004413EC 17210019 */  bne   $t9, $at, .L00441454
/* 004413F0 00000000 */   nop   
/* 004413F4 8E710000 */  lw    $s1, ($s3)
/* 004413F8 24010003 */  li    $at, 3
/* 004413FC 92220000 */  lbu   $v0, ($s1)
/* 00441400 5441000A */  bnel  $v0, $at, .L0044142C
/* 00441404 24010006 */   li    $at, 6
/* 00441408 8F998024 */  lw    $t9, %got(func_0043CBFC)($gp)
/* 0044140C 02602025 */  move  $a0, $s3
/* 00441410 27A20110 */  addiu $v0, $sp, 0x110
/* 00441414 2739CBFC */  addiu $t9, %lo(func_0043CBFC) # addiu $t9, $t9, -0x3404
/* 00441418 0320F809 */  jalr  $t9
/* 0044141C 00000000 */   nop   
/* 00441420 1000000C */  b     .L00441454
/* 00441424 8FBC0034 */   lw    $gp, 0x34($sp)
/* 00441428 24010006 */  li    $at, 6
.L0044142C:
/* 0044142C 14410009 */  bne   $v0, $at, .L00441454
/* 00441430 240D00C8 */   li    $t5, 200
/* 00441434 A22D002F */  sb    $t5, 0x2f($s1)
/* 00441438 8E6A0000 */  lw    $t2, ($s3)
/* 0044143C 24190001 */  li    $t9, 1
/* 00441440 240E0001 */  li    $t6, 1
/* 00441444 A1590022 */  sb    $t9, 0x22($t2)
/* 00441448 8E6F0000 */  lw    $t7, ($s3)
/* 0044144C 8DEB0018 */  lw    $t3, 0x18($t7)
/* 00441450 A16E0008 */  sb    $t6, 8($t3)
.L00441454:
/* 00441454 8F858A5C */  lw     $a1, %got(lang)($gp)
/* 00441458 24010001 */  li    $at, 1
/* 0044145C 90A50000 */  lbu   $a1, ($a1)
/* 00441460 50A10050 */  beql  $a1, $at, .L004415A4
/* 00441464 27AF00E4 */   addiu $t7, $sp, 0xe4
/* 00441468 8F9889AC */  lw     $t8, %got(graphhead)($gp)
/* 0044146C 8F8C89B4 */  lw     $t4, %got(curgraphnode)($gp)
/* 00441470 24010003 */  li    $at, 3
/* 00441474 8F180000 */  lw    $t8, ($t8)
/* 00441478 8D8C0000 */  lw    $t4, ($t4)
/* 0044147C 130C000D */  beq   $t8, $t4, .L004414B4
/* 00441480 00000000 */   nop   
/* 00441484 54A10047 */  bnel  $a1, $at, .L004415A4
/* 00441488 27AF00E4 */   addiu $t7, $sp, 0xe4
/* 0044148C 8F9489C4 */  lw     $s4, %got(stattail)($gp)
/* 00441490 24010042 */  li    $at, 66
/* 00441494 8E940000 */  lw    $s4, ($s4)
/* 00441498 928D0000 */  lbu   $t5, ($s4)
/* 0044149C 55A10041 */  bnel  $t5, $at, .L004415A4
/* 004414A0 27AF00E4 */   addiu $t7, $sp, 0xe4
/* 004414A4 92990024 */  lbu   $t9, 0x24($s4)
/* 004414A8 332A0002 */  andi  $t2, $t9, 2
/* 004414AC 5540003D */  bnezl $t2, .L004415A4
/* 004414B0 27AF00E4 */   addiu $t7, $sp, 0xe4
.L004414B4:
/* 004414B4 8F8F8964 */  lw     $t7, %got(ustack)($gp)
/* 004414B8 24010003 */  li    $at, 3
/* 004414BC 8DEF0000 */  lw    $t7, ($t7)
/* 004414C0 8DF10000 */  lw    $s1, ($t7)
/* 004414C4 922E0000 */  lbu   $t6, ($s1)
/* 004414C8 55C10036 */  bnel  $t6, $at, .L004415A4
/* 004414CC 27AF00E4 */   addiu $t7, $sp, 0xe4
/* 004414D0 922B002E */  lbu   $t3, 0x2e($s1)
/* 004414D4 24010003 */  li    $at, 3
/* 004414D8 31780007 */  andi  $t8, $t3, 7
/* 004414DC 57010031 */  bnel  $t8, $at, .L004415A4
/* 004414E0 27AF00E4 */   addiu $t7, $sp, 0xe4
/* 004414E4 8E2C0028 */  lw    $t4, 0x28($s1)
/* 004414E8 24010002 */  li    $at, 2
/* 004414EC 8FB900E4 */  lw    $t9, 0xe4($sp)
/* 004414F0 1581002B */  bne   $t4, $at, .L004415A0
/* 004414F4 27AA00E4 */   addiu $t2, $sp, 0xe4
/* 004414F8 8F8289C8 */  lw     $v0, %got(staticlinkloc)($gp)
/* 004414FC 8C4D0000 */  lw    $t5, ($v0)
/* 00441500 01A002B6 */  tne   $t5, $zero, 0xa
/* 00441504 AC590000 */  sw    $t9, ($v0)
/* 00441508 8D440000 */  lw    $a0, ($t2)
/* 0044150C 8F99864C */  lw    $t9, %call16(isvarhash)($gp)
/* 00441510 AFA40000 */  sw    $a0, ($sp)
/* 00441514 8D450004 */  lw    $a1, 4($t2)
/* 00441518 0320F809 */  jalr  $t9
/* 0044151C AFA50004 */   sw    $a1, 4($sp)
/* 00441520 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00441524 3044FFFF */  andi  $a0, $v0, 0xffff
/* 00441528 27A500E4 */  addiu $a1, $sp, 0xe4
/* 0044152C 8F998694 */  lw    $t9, %call16(searchvar)($gp)
/* 00441530 0320F809 */  jalr  $t9
/* 00441534 00000000 */   nop   
/* 00441538 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0044153C 240B0004 */  li    $t3, 4
/* 00441540 24180001 */  li    $t8, 1
/* 00441544 8F8C8964 */  lw     $t4, %got(ustack)($gp)
/* 00441548 A04B0020 */  sb    $t3, 0x20($v0)
/* 0044154C AC400010 */  sw    $zero, 0x10($v0)
/* 00441550 A0580022 */  sb    $t8, 0x22($v0)
/* 00441554 A0400021 */  sb    $zero, 0x21($v0)
/* 00441558 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 0044155C 8D8C0000 */  lw    $t4, ($t4)
/* 00441560 0320F809 */  jalr  $t9
/* 00441564 8D840000 */   lw    $a0, ($t4)
/* 00441568 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0044156C 24040060 */  li    $a0, 96
/* 00441570 8F828964 */  lw     $v0, %got(ustack)($gp)
/* 00441574 8C4D0000 */  lw    $t5, ($v0)
/* 00441578 8DB9000C */  lw    $t9, 0xc($t5)
/* 0044157C AC590000 */  sw    $t9, ($v0)
/* 00441580 8F998658 */  lw    $t9, %call16(extendstat)($gp)
/* 00441584 0320F809 */  jalr  $t9
/* 00441588 00000000 */   nop   
/* 0044158C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00441590 8F8A89C4 */  lw     $t2, %got(stattail)($gp)
/* 00441594 8D4A0000 */  lw    $t2, ($t2)
/* 00441598 10000C75 */  b     .L00444770
/* 0044159C AD400004 */   sw    $zero, 4($t2)
.L004415A0:
/* 004415A0 27AF00E4 */  addiu $t7, $sp, 0xe4
.L004415A4:
/* 004415A4 8DE40000 */  lw    $a0, ($t7)
/* 004415A8 8F99864C */  lw    $t9, %call16(isvarhash)($gp)
/* 004415AC AFA40000 */  sw    $a0, ($sp)
/* 004415B0 8DE50004 */  lw    $a1, 4($t7)
/* 004415B4 0320F809 */  jalr  $t9
/* 004415B8 AFA50004 */   sw    $a1, 4($sp)
/* 004415BC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004415C0 3044FFFF */  andi  $a0, $v0, 0xffff
/* 004415C4 27A20110 */  addiu $v0, $sp, 0x110
/* 004415C8 8F998024 */  lw    $t9, %got(func_0043B504)($gp)
/* 004415CC 2739B504 */  addiu $t9, %lo(func_0043B504) # addiu $t9, $t9, -0x4afc
/* 004415D0 0320F809 */  jalr  $t9
/* 004415D4 00000000 */   nop   
/* 004415D8 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004415DC 0040A825 */  move  $s5, $v0
/* 004415E0 8F988B20 */  lw     $t8, %got(outofmem)($gp)
/* 004415E4 93180000 */  lbu   $t8, ($t8)
/* 004415E8 57000C62 */  bnezl $t8, .L00444774
/* 004415EC 8FBF003C */   lw    $ra, 0x3c($sp)
/* 004415F0 93CC0000 */  lbu   $t4, ($fp)
/* 004415F4 2417003E */  li    $s7, 62
/* 004415F8 16EC001F */  bne   $s7, $t4, .L00441678
/* 004415FC 00000000 */   nop   
/* 00441600 8F938964 */  lw     $s3, %got(ustack)($gp)
/* 00441604 24010003 */  li    $at, 3
/* 00441608 240D0006 */  li    $t5, 6
/* 0044160C 8E730000 */  lw    $s3, ($s3)
/* 00441610 241900C8 */  li    $t9, 200
/* 00441614 8E65000C */  lw    $a1, 0xc($s3)
/* 00441618 8CA30000 */  lw    $v1, ($a1)
/* 0044161C 90620000 */  lbu   $v0, ($v1)
/* 00441620 5441000B */  bnel  $v0, $at, .L00441650
/* 00441624 004D02B6 */   tne   $v0, $t5, 0xa
/* 00441628 8F998024 */  lw    $t9, %got(func_0043CBFC)($gp)
/* 0044162C AFB5010C */  sw    $s5, 0x10c($sp)
/* 00441630 00A02025 */  move  $a0, $a1
/* 00441634 2739CBFC */  addiu $t9, %lo(func_0043CBFC) # addiu $t9, $t9, -0x3404
/* 00441638 0320F809 */  jalr  $t9
/* 0044163C 27A20110 */   addiu $v0, $sp, 0x110
/* 00441640 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00441644 1000000C */  b     .L00441678
/* 00441648 8FB5010C */   lw    $s5, 0x10c($sp)
/* 0044164C 004D02B6 */  tne   $v0, $t5, 0xa
.L00441650:
/* 00441650 A079002F */  sb    $t9, 0x2f($v1)
/* 00441654 8E6F000C */  lw    $t7, 0xc($s3)
/* 00441658 240A0001 */  li    $t2, 1
/* 0044165C 240B0001 */  li    $t3, 1
/* 00441660 8DEE0000 */  lw    $t6, ($t7)
/* 00441664 A1CA0022 */  sb    $t2, 0x22($t6)
/* 00441668 8E78000C */  lw    $t8, 0xc($s3)
/* 0044166C 8F0C0000 */  lw    $t4, ($t8)
/* 00441670 8D8D0018 */  lw    $t5, 0x18($t4)
/* 00441674 A1AB0008 */  sb    $t3, 8($t5)
.L00441678:
/* 00441678 8F998964 */  lw     $t9, %got(ustack)($gp)
/* 0044167C 8F390000 */  lw    $t9, ($t9)
/* 00441680 8F310000 */  lw    $s1, ($t9)
/* 00441684 56B1002B */  bnel  $s5, $s1, .L00441734
/* 00441688 92A20000 */   lbu   $v0, ($s5)
/* 0044168C 92AF002E */  lbu   $t7, 0x2e($s5)
/* 00441690 3C011400 */  lui   $at, 0x1400
/* 00441694 31EA0007 */  andi  $t2, $t7, 7
/* 00441698 2D4E0020 */  sltiu $t6, $t2, 0x20
/* 0044169C 000EC023 */  negu  $t8, $t6
/* 004416A0 03016024 */  and   $t4, $t8, $at
/* 004416A4 014C5804 */  sllv  $t3, $t4, $t2
/* 004416A8 05620022 */  bltzl $t3, .L00441734
/* 004416AC 92A20000 */   lbu   $v0, ($s5)
/* 004416B0 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 004416B4 02A02025 */  move  $a0, $s5
/* 004416B8 0320F809 */  jalr  $t9
/* 004416BC 00000000 */   nop   
/* 004416C0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004416C4 8F8D8964 */  lw     $t5, %got(ustack)($gp)
/* 004416C8 8F818964 */  lw     $at, %got(ustack)($gp)
/* 004416CC 8DAD0000 */  lw    $t5, ($t5)
/* 004416D0 8DB9000C */  lw    $t9, 0xc($t5)
/* 004416D4 AC390000 */  sw    $t9, ($at)
/* 004416D8 93CF0000 */  lbu   $t7, ($fp)
/* 004416DC 16EF000B */  bne   $s7, $t7, .L0044170C
/* 004416E0 00000000 */   nop   
/* 004416E4 8F240000 */  lw    $a0, ($t9)
/* 004416E8 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 004416EC 0320F809 */  jalr  $t9
/* 004416F0 00000000 */   nop   
/* 004416F4 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004416F8 8F8E8964 */  lw     $t6, %got(ustack)($gp)
/* 004416FC 8F818964 */  lw     $at, %got(ustack)($gp)
/* 00441700 8DCE0000 */  lw    $t6, ($t6)
/* 00441704 8DD8000C */  lw    $t8, 0xc($t6)
/* 00441708 AC380000 */  sw    $t8, ($at)
.L0044170C:
/* 0044170C 8F998658 */  lw    $t9, %call16(extendstat)($gp)
/* 00441710 24040060 */  li    $a0, 96
/* 00441714 0320F809 */  jalr  $t9
/* 00441718 00000000 */   nop   
/* 0044171C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00441720 8F8C89C4 */  lw     $t4, %got(stattail)($gp)
/* 00441724 8D8C0000 */  lw    $t4, ($t4)
/* 00441728 10000C11 */  b     .L00444770
/* 0044172C AD800004 */   sw    $zero, 4($t4)
/* 00441730 92A20000 */  lbu   $v0, ($s5)
.L00441734:
/* 00441734 24120001 */  li    $s2, 1
/* 00441738 24160001 */  li    $s6, 1
/* 0044173C 1040007B */  beqz  $v0, .L0044192C
/* 00441740 00000000 */   nop   
/* 00441744 8EA20038 */  lw    $v0, 0x38($s5)
/* 00441748 240A0001 */  li    $t2, 1
/* 0044174C 54400018 */  bnezl $v0, .L004417B0
/* 00441750 8EA50034 */   lw    $a1, 0x34($s5)
/* 00441754 8F998620 */  lw    $t9, %call16(appendchain)($gp)
/* 00441758 A2AA0002 */  sb    $t2, 2($s5)
/* 0044175C 02A08025 */  move  $s0, $s5
/* 00441760 0320F809 */  jalr  $t9
/* 00441764 96A40008 */   lhu   $a0, 8($s5)
/* 00441768 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0044176C 0040A825 */  move  $s5, $v0
/* 00441770 8F8B8B20 */  lw     $t3, %got(outofmem)($gp)
/* 00441774 916B0000 */  lbu   $t3, ($t3)
/* 00441778 55600BFE */  bnezl $t3, .L00444774
/* 0044177C 8FBF003C */   lw    $ra, 0x3c($sp)
/* 00441780 8F8D89B4 */  lw     $t5, %got(curgraphnode)($gp)
/* 00441784 00009025 */  move  $s2, $zero
/* 00441788 24160001 */  li    $s6, 1
/* 0044178C 8DAD0000 */  lw    $t5, ($t5)
/* 00441790 AC4D0010 */  sw    $t5, 0x10($v0)
/* 00441794 920F0022 */  lbu   $t7, 0x22($s0)
/* 00441798 A04F0022 */  sb    $t7, 0x22($v0)
/* 0044179C 92190021 */  lbu   $t9, 0x21($s0)
/* 004417A0 A0400003 */  sb    $zero, 3($v0)
/* 004417A4 1000005F */  b     .L00441924
/* 004417A8 A0590021 */   sb    $t9, 0x21($v0)
/* 004417AC 8EA50034 */  lw    $a1, 0x34($s5)
.L004417B0:
/* 004417B0 10A00028 */  beqz  $a1, .L00441854
/* 004417B4 00000000 */   nop   
/* 004417B8 904E001D */  lbu   $t6, 0x1d($v0)
/* 004417BC 11C00025 */  beqz  $t6, .L00441854
/* 004417C0 00000000 */   nop   
/* 004417C4 8C580018 */  lw    $t8, 0x18($v0)
/* 004417C8 00408025 */  move  $s0, $v0
/* 004417CC A3000009 */  sb    $zero, 9($t8)
/* 004417D0 8F9986DC */  lw    $t9, %call16(has_volt_ovfw)($gp)
/* 004417D4 8C4C0004 */  lw    $t4, 4($v0)
/* 004417D8 0320F809 */  jalr  $t9
/* 004417DC 8D840034 */   lw    $a0, 0x34($t4)
/* 004417E0 1040000A */  beqz  $v0, .L0044180C
/* 004417E4 8FBC0034 */   lw    $gp, 0x34($sp)
/* 004417E8 240A0067 */  li    $t2, 103
/* 004417EC A20A0000 */  sb    $t2, ($s0)
/* 004417F0 92AB0001 */  lbu   $t3, 1($s5)
/* 004417F4 8E0D0004 */  lw    $t5, 4($s0)
/* 004417F8 A20B0014 */  sb    $t3, 0x14($s0)
/* 004417FC 8DAF0034 */  lw    $t7, 0x34($t5)
/* 00441800 A2000015 */  sb    $zero, 0x15($s0)
/* 00441804 10000010 */  b     .L00441848
/* 00441808 AE0F0004 */   sw    $t7, 4($s0)
.L0044180C:
/* 0044180C 92190000 */  lbu   $t9, ($s0)
/* 00441810 16F90006 */  bne   $s7, $t9, .L0044182C
/* 00441814 00000000 */   nop   
/* 00441818 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 0044181C 8E040014 */  lw    $a0, 0x14($s0)
/* 00441820 0320F809 */  jalr  $t9
/* 00441824 00000000 */   nop   
/* 00441828 8FBC0034 */  lw    $gp, 0x34($sp)
.L0044182C:
/* 0044182C 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 00441830 8EA40034 */  lw    $a0, 0x34($s5)
/* 00441834 0320F809 */  jalr  $t9
/* 00441838 00000000 */   nop   
/* 0044183C 24140060 */  li    $s4, 96
/* 00441840 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00441844 A2140000 */  sb    $s4, ($s0)
.L00441848:
/* 00441848 9212001C */  lbu   $s2, 0x1c($s0)
/* 0044184C 10000035 */  b     .L00441924
/* 00441850 9216001E */   lbu   $s6, 0x1e($s0)
.L00441854:
/* 00441854 1625001C */  bne   $s1, $a1, .L004418C8
/* 00441858 00000000 */   nop   
/* 0044185C 904E001F */  lbu   $t6, 0x1f($v0)
/* 00441860 11C00019 */  beqz  $t6, .L004418C8
/* 00441864 00000000 */   nop   
/* 00441868 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 0044186C 02202025 */  move  $a0, $s1
/* 00441870 0320F809 */  jalr  $t9
/* 00441874 00000000 */   nop   
/* 00441878 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0044187C 8F988964 */  lw     $t8, %got(ustack)($gp)
/* 00441880 8F818964 */  lw     $at, %got(ustack)($gp)
/* 00441884 8F180000 */  lw    $t8, ($t8)
/* 00441888 8F0C000C */  lw    $t4, 0xc($t8)
/* 0044188C AC2C0000 */  sw    $t4, ($at)
/* 00441890 93CA0000 */  lbu   $t2, ($fp)
/* 00441894 56EA0BB7 */  bnel  $s7, $t2, .L00444774
/* 00441898 8FBF003C */   lw    $ra, 0x3c($sp)
/* 0044189C 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 004418A0 8D840000 */  lw    $a0, ($t4)
/* 004418A4 0320F809 */  jalr  $t9
/* 004418A8 00000000 */   nop   
/* 004418AC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004418B0 8F8B8964 */  lw     $t3, %got(ustack)($gp)
/* 004418B4 8F818964 */  lw     $at, %got(ustack)($gp)
/* 004418B8 8D6B0000 */  lw    $t3, ($t3)
/* 004418BC 8D6D000C */  lw    $t5, 0xc($t3)
/* 004418C0 10000BAB */  b     .L00444770
/* 004418C4 AC2D0000 */   sw    $t5, ($at)
.L004418C8:
/* 004418C8 8F998620 */  lw    $t9, %call16(appendchain)($gp)
/* 004418CC 240F0001 */  li    $t7, 1
/* 004418D0 A2AF0002 */  sb    $t7, 2($s5)
/* 004418D4 A040001F */  sb    $zero, 0x1f($v0)
/* 004418D8 02A08025 */  move  $s0, $s5
/* 004418DC 0320F809 */  jalr  $t9
/* 004418E0 96A40008 */   lhu   $a0, 8($s5)
/* 004418E4 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004418E8 0040A825 */  move  $s5, $v0
/* 004418EC 8F998B20 */  lw     $t9, %got(outofmem)($gp)
/* 004418F0 93390000 */  lbu   $t9, ($t9)
/* 004418F4 57200B9F */  bnezl $t9, .L00444774
/* 004418F8 8FBF003C */   lw    $ra, 0x3c($sp)
/* 004418FC 8F8E89B4 */  lw     $t6, %got(curgraphnode)($gp)
/* 00441900 00009025 */  move  $s2, $zero
/* 00441904 0000B025 */  move  $s6, $zero
/* 00441908 8DCE0000 */  lw    $t6, ($t6)
/* 0044190C AC4E0010 */  sw    $t6, 0x10($v0)
/* 00441910 92180022 */  lbu   $t8, 0x22($s0)
/* 00441914 A0580022 */  sb    $t8, 0x22($v0)
/* 00441918 920A0021 */  lbu   $t2, 0x21($s0)
/* 0044191C A0400003 */  sb    $zero, 3($v0)
/* 00441920 A04A0021 */  sb    $t2, 0x21($v0)
.L00441924:
/* 00441924 10000001 */  b     .L0044192C
/* 00441928 92A20000 */   lbu   $v0, ($s5)
.L0044192C:
/* 0044192C 14400033 */  bnez  $v0, .L004419FC
/* 00441930 27AF00E4 */   addiu $t7, $sp, 0xe4
/* 00441934 93CC0000 */  lbu   $t4, ($fp)
/* 00441938 2401007B */  li    $at, 123
/* 0044193C 240B0003 */  li    $t3, 3
/* 00441940 15810003 */  bne   $t4, $at, .L00441950
/* 00441944 240D0006 */   li    $t5, 6
/* 00441948 10000002 */  b     .L00441954
/* 0044194C A2AB0000 */   sb    $t3, ($s5)
.L00441950:
/* 00441950 A2AD0000 */  sb    $t5, ($s5)
.L00441954:
/* 00441954 8DEE0000 */  lw    $t6, ($t7)
/* 00441958 93D80001 */  lbu   $t8, 1($fp)
/* 0044195C 8FCC0008 */  lw    $t4, 8($fp)
/* 00441960 AEAE0028 */  sw    $t6, 0x28($s5)
/* 00441964 8DF90004 */  lw    $t9, 4($t7)
/* 00441968 8FA400E8 */  lw    $a0, 0xe8($sp)
/* 0044196C 330A001F */  andi  $t2, $t8, 0x1f
/* 00441970 AEB9002C */  sw    $t9, 0x2c($s5)
/* 00441974 8F998660 */  lw    $t9, %call16(blktolev)($gp)
/* 00441978 A2AA0001 */  sb    $t2, 1($s5)
/* 0044197C A2AC0020 */  sb    $t4, 0x20($s5)
/* 00441980 0320F809 */  jalr  $t9
/* 00441984 000422C2 */   srl   $a0, $a0, 0xb
/* 00441988 93CB0000 */  lbu   $t3, ($fp)
/* 0044198C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00441990 A2A2002F */  sb    $v0, 0x2f($s5)
/* 00441994 A2A00003 */  sb    $zero, 3($s5)
/* 00441998 A6A00006 */  sh    $zero, 6($s5)
/* 0044199C 16EB000A */  bne   $s7, $t3, .L004419C8
/* 004419A0 AEA00030 */   sw    $zero, 0x30($s5)
/* 004419A4 8F8D8964 */  lw     $t5, %got(ustack)($gp)
/* 004419A8 8DAD0000 */  lw    $t5, ($t5)
/* 004419AC 8DAF000C */  lw    $t7, 0xc($t5)
/* 004419B0 8DF90000 */  lw    $t9, ($t7)
/* 004419B4 AEA0003C */  sw    $zero, 0x3c($s5)
/* 004419B8 A2A00004 */  sb    $zero, 4($s5)
/* 004419BC A2A00005 */  sb    $zero, 5($s5)
/* 004419C0 10000002 */  b     .L004419CC
/* 004419C4 AEB90024 */   sw    $t9, 0x24($s5)
.L004419C8:
/* 004419C8 AEA00024 */  sw    $zero, 0x24($s5)
.L004419CC:
/* 004419CC 92AE0021 */  lbu   $t6, 0x21($s5)
/* 004419D0 24180001 */  li    $t8, 1
/* 004419D4 55C00004 */  bnezl $t6, .L004419E8
/* 004419D8 A2B80002 */   sb    $t8, 2($s5)
/* 004419DC 10000002 */  b     .L004419E8
/* 004419E0 A2A00002 */   sb    $zero, 2($s5)
/* 004419E4 A2B80002 */  sb    $t8, 2($s5)
.L004419E8:
/* 004419E8 97CA0002 */  lhu   $t2, 2($fp)
/* 004419EC AEA00018 */  sw    $zero, 0x18($s5)
/* 004419F0 314C0001 */  andi  $t4, $t2, 1
/* 004419F4 000C582B */  sltu  $t3, $zero, $t4
/* 004419F8 A2AB0023 */  sb    $t3, 0x23($s5)
.L004419FC:
/* 004419FC 92AD0021 */  lbu   $t5, 0x21($s5)
/* 00441A00 11A00003 */  beqz  $t5, .L00441A10
/* 00441A04 00000000 */   nop   
/* 00441A08 00009025 */  move  $s2, $zero
/* 00441A0C 0000B025 */  move  $s6, $zero
.L00441A10:
/* 00441A10 8F8F8A5C */  lw     $t7, %got(lang)($gp)
/* 00441A14 24090002 */  li    $t1, 2
/* 00441A18 91EF0000 */  lbu   $t7, ($t7)
/* 00441A1C 152F000D */  bne   $t1, $t7, .L00441A54
/* 00441A20 00000000 */   nop   
/* 00441A24 92B90001 */  lbu   $t9, 1($s5)
/* 00441A28 3C018780 */  lui   $at, 0x8780
/* 00441A2C 2F2E0020 */  sltiu $t6, $t9, 0x20
/* 00441A30 000EC023 */  negu  $t8, $t6
/* 00441A34 03015024 */  and   $t2, $t8, $at
/* 00441A38 032A6004 */  sllv  $t4, $t2, $t9
/* 00441A3C 05810014 */  bgez  $t4, .L00441A90
/* 00441A40 00000000 */   nop   
/* 00441A44 92AB0020 */  lbu   $t3, 0x20($s5)
/* 00441A48 29610004 */  slti  $at, $t3, 4
/* 00441A4C 14200010 */  bnez  $at, .L00441A90
/* 00441A50 00000000 */   nop   
.L00441A54:
/* 00441A54 8F8D8964 */  lw     $t5, %got(ustack)($gp)
/* 00441A58 8F9986CC */  lw    $t9, %call16(checkincre)($gp)
/* 00441A5C 02A02825 */  move  $a1, $s5
/* 00441A60 8DAD0000 */  lw    $t5, ($t5)
/* 00441A64 27A600C4 */  addiu $a2, $sp, 0xc4
/* 00441A68 0320F809 */  jalr  $t9
/* 00441A6C 8DA40000 */   lw    $a0, ($t5)
/* 00441A70 14400003 */  bnez  $v0, .L00441A80
/* 00441A74 8FBC0034 */   lw    $gp, 0x34($sp)
/* 00441A78 2410FFFF */  li    $s0, -1
/* 00441A7C AFB000C4 */  sw    $s0, 0xc4($sp)
.L00441A80:
/* 00441A80 8F878DA4 */  lw     $a3, %got(u)($gp)
/* 00441A84 8FB000C4 */  lw    $s0, 0xc4($sp)
/* 00441A88 10000004 */  b     .L00441A9C
/* 00441A8C 90E70000 */   lbu   $a3, ($a3)
.L00441A90:
/* 00441A90 8F878DA4 */  lw     $a3, %got(u)($gp)
/* 00441A94 2410FFFF */  li    $s0, -1
/* 00441A98 90E70000 */  lbu   $a3, ($a3)
.L00441A9C:
/* 00441A9C 8F998658 */  lw    $t9, %call16(extendstat)($gp)
/* 00441AA0 00E02025 */  move  $a0, $a3
/* 00441AA4 0320F809 */  jalr  $t9
/* 00441AA8 00000000 */   nop   
/* 00441AAC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00441AB0 8F8F8B20 */  lw     $t7, %got(outofmem)($gp)
/* 00441AB4 91EF0000 */  lbu   $t7, ($t7)
/* 00441AB8 55E00B2E */  bnezl $t7, .L00444774
/* 00441ABC 8FBF003C */   lw    $ra, 0x3c($sp)
/* 00441AC0 8F938964 */  lw     $s3, %got(ustack)($gp)
/* 00441AC4 8F988A5C */  lw     $t8, %got(lang)($gp)
/* 00441AC8 24010001 */  li    $at, 1
/* 00441ACC 8E730000 */  lw    $s3, ($s3)
/* 00441AD0 8E6E0000 */  lw    $t6, ($s3)
/* 00441AD4 AEAE0034 */  sw    $t6, 0x34($s5)
/* 00441AD8 93180000 */  lbu   $t8, ($t8)
/* 00441ADC 1701003B */  bne   $t8, $at, .L00441BCC
/* 00441AE0 00000000 */   nop   
/* 00441AE4 8E710000 */  lw    $s1, ($s3)
/* 00441AE8 24010001 */  li    $at, 1
/* 00441AEC 922A0000 */  lbu   $t2, ($s1)
/* 00441AF0 15410014 */  bne   $t2, $at, .L00441B44
/* 00441AF4 00000000 */   nop   
/* 00441AF8 8F998980 */  lw     $t9, %got(curblk)($gp)
/* 00441AFC 8E240030 */  lw    $a0, 0x30($s1)
/* 00441B00 8F390000 */  lw    $t9, ($t9)
/* 00441B04 000422C2 */  srl   $a0, $a0, 0xb
/* 00441B08 1324000A */  beq   $t9, $a0, .L00441B34
/* 00441B0C 00000000 */   nop   
/* 00441B10 8F8C8B14 */  lw     $t4, %got(f77_static_flag)($gp)
/* 00441B14 918C0000 */  lbu   $t4, ($t4)
/* 00441B18 1180000A */  beqz  $t4, .L00441B44
/* 00441B1C 00000000 */   nop   
/* 00441B20 8F998494 */  lw    $t9, %call16(in_fsym)($gp)
/* 00441B24 0320F809 */  jalr  $t9
/* 00441B28 00000000 */   nop   
/* 00441B2C 10400005 */  beqz  $v0, .L00441B44
/* 00441B30 8FBC0034 */   lw    $gp, 0x34($sp)
.L00441B34:
/* 00441B34 8F818B44 */  lw     $at, %got(use_c_semantics)($gp)
/* 00441B38 240B0001 */  li    $t3, 1
/* 00441B3C 10000023 */  b     .L00441BCC
/* 00441B40 A02B0000 */   sb    $t3, ($at)
.L00441B44:
/* 00441B44 8F8D8964 */  lw     $t5, %got(ustack)($gp)
/* 00441B48 24010004 */  li    $at, 4
/* 00441B4C 8DAD0000 */  lw    $t5, ($t5)
/* 00441B50 8DB10000 */  lw    $s1, ($t5)
/* 00441B54 922F0000 */  lbu   $t7, ($s1)
/* 00441B58 15E1001C */  bne   $t7, $at, .L00441BCC
/* 00441B5C 00000000 */   nop   
/* 00441B60 922E0020 */  lbu   $t6, 0x20($s1)
/* 00441B64 24010018 */  li    $at, 24
/* 00441B68 15C10018 */  bne   $t6, $at, .L00441BCC
/* 00441B6C 00000000 */   nop   
/* 00441B70 8E220024 */  lw    $v0, 0x24($s1)
/* 00441B74 24010001 */  li    $at, 1
/* 00441B78 90580000 */  lbu   $t8, ($v0)
/* 00441B7C 17010013 */  bne   $t8, $at, .L00441BCC
/* 00441B80 00000000 */   nop   
/* 00441B84 8F8A8980 */  lw     $t2, %got(curblk)($gp)
/* 00441B88 8C440030 */  lw    $a0, 0x30($v0)
/* 00441B8C 8D4A0000 */  lw    $t2, ($t2)
/* 00441B90 000422C2 */  srl   $a0, $a0, 0xb
/* 00441B94 1144000A */  beq   $t2, $a0, .L00441BC0
/* 00441B98 00000000 */   nop   
/* 00441B9C 8F998B14 */  lw     $t9, %got(f77_static_flag)($gp)
/* 00441BA0 93390000 */  lbu   $t9, ($t9)
/* 00441BA4 13200009 */  beqz  $t9, .L00441BCC
/* 00441BA8 00000000 */   nop   
/* 00441BAC 8F998494 */  lw    $t9, %call16(in_fsym)($gp)
/* 00441BB0 0320F809 */  jalr  $t9
/* 00441BB4 00000000 */   nop   
/* 00441BB8 10400004 */  beqz  $v0, .L00441BCC
/* 00441BBC 8FBC0034 */   lw    $gp, 0x34($sp)
.L00441BC0:
/* 00441BC0 8F818B44 */  lw     $at, %got(use_c_semantics)($gp)
/* 00441BC4 240C0001 */  li    $t4, 1
/* 00441BC8 A02C0000 */  sb    $t4, ($at)
.L00441BCC:
/* 00441BCC 8F8B8964 */  lw     $t3, %got(ustack)($gp)
/* 00441BD0 8F8D8A5C */  lw     $t5, %got(lang)($gp)
/* 00441BD4 24010003 */  li    $at, 3
/* 00441BD8 8D6B0000 */  lw    $t3, ($t3)
/* 00441BDC 91AD0000 */  lbu   $t5, ($t5)
/* 00441BE0 8D710000 */  lw    $s1, ($t3)
/* 00441BE4 15A1000B */  bne   $t5, $at, .L00441C14
/* 00441BE8 92220000 */   lbu   $v0, ($s1)
/* 00441BEC 2C4F0020 */  sltiu $t7, $v0, 0x20
/* 00441BF0 000F7023 */  negu  $t6, $t7
/* 00441BF4 3C014400 */  lui   $at, 0x4400
/* 00441BF8 01C1C024 */  and   $t8, $t6, $at
/* 00441BFC 00585004 */  sllv  $t2, $t8, $v0
/* 00441C00 05430005 */  bgezl $t2, .L00441C18
/* 00441C04 24010003 */   li    $at, 3
/* 00441C08 8F818B44 */  lw     $at, %got(use_c_semantics)($gp)
/* 00441C0C 24190001 */  li    $t9, 1
/* 00441C10 A0390000 */  sb    $t9, ($at)
.L00441C14:
/* 00441C14 24010003 */  li    $at, 3
.L00441C18:
/* 00441C18 14410023 */  bne   $v0, $at, .L00441CA8
/* 00441C1C 00000000 */   nop   
/* 00441C20 922C002E */  lbu   $t4, 0x2e($s1)
/* 00441C24 24010005 */  li    $at, 5
/* 00441C28 318B0007 */  andi  $t3, $t4, 7
/* 00441C2C 1561001E */  bne   $t3, $at, .L00441CA8
/* 00441C30 00000000 */   nop   
/* 00441C34 8F99830C */  lw    $t9, %call16(in_outparlist)($gp)
/* 00441C38 8E240028 */  lw    $a0, 0x28($s1)
/* 00441C3C 0320F809 */  jalr  $t9
/* 00441C40 00000000 */   nop   
/* 00441C44 14400018 */  bnez  $v0, .L00441CA8
/* 00441C48 8FBC0034 */   lw    $gp, 0x34($sp)
/* 00441C4C 8F8F89C4 */  lw     $t7, %got(stattail)($gp)
/* 00441C50 8F938964 */  lw     $s3, %got(ustack)($gp)
/* 00441C54 240D0001 */  li    $t5, 1
/* 00441C58 8DEF0000 */  lw    $t7, ($t7)
/* 00441C5C 8F8A8C40 */  lw     $t2, %got(lastmst)($gp)
/* 00441C60 02A02825 */  move  $a1, $s5
/* 00441C64 A1ED0003 */  sb    $t5, 3($t7)
/* 00441C68 8E730000 */  lw    $s3, ($s3)
/* 00441C6C 8D4A0000 */  lw    $t2, ($t2)
/* 00441C70 8E6E0000 */  lw    $t6, ($s3)
/* 00441C74 8DD80028 */  lw    $t8, 0x28($t6)
/* 00441C78 AD58001C */  sw    $t8, 0x1c($t2)
/* 00441C7C 8E790000 */  lw    $t9, ($s3)
/* 00441C80 8F240028 */  lw    $a0, 0x28($t9)
/* 00441C84 8F998310 */  lw    $t9, %call16(insert_outparlist)($gp)
/* 00441C88 0320F809 */  jalr  $t9
/* 00441C8C 00000000 */   nop   
/* 00441C90 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00441C94 8F938964 */  lw     $s3, %got(ustack)($gp)
/* 00441C98 8F9489C4 */  lw     $s4, %got(stattail)($gp)
/* 00441C9C 8E730000 */  lw    $s3, ($s3)
/* 00441CA0 10000006 */  b     .L00441CBC
/* 00441CA4 8E940000 */   lw    $s4, ($s4)
.L00441CA8:
/* 00441CA8 8F9489C4 */  lw     $s4, %got(stattail)($gp)
/* 00441CAC 8F938964 */  lw     $s3, %got(ustack)($gp)
/* 00441CB0 8E940000 */  lw    $s4, ($s4)
/* 00441CB4 A2800003 */  sb    $zero, 3($s4)
/* 00441CB8 8E730000 */  lw    $s3, ($s3)
.L00441CBC:
/* 00441CBC 8E6C000C */  lw    $t4, 0xc($s3)
/* 00441CC0 8F818964 */  lw     $at, %got(ustack)($gp)
/* 00441CC4 AC2C0000 */  sw    $t4, ($at)
/* 00441CC8 928B0000 */  lbu   $t3, ($s4)
/* 00441CCC 56EB0009 */  bnel  $s7, $t3, .L00441CF4
/* 00441CD0 AE950004 */   sw    $s5, 4($s4)
/* 00441CD4 8F938964 */  lw     $s3, %got(ustack)($gp)
/* 00441CD8 8F818964 */  lw     $at, %got(ustack)($gp)
/* 00441CDC 8E730000 */  lw    $s3, ($s3)
/* 00441CE0 8E6D0000 */  lw    $t5, ($s3)
/* 00441CE4 AE8D0014 */  sw    $t5, 0x14($s4)
/* 00441CE8 8E6F000C */  lw    $t7, 0xc($s3)
/* 00441CEC AC2F0000 */  sw    $t7, ($at)
/* 00441CF0 AE950004 */  sw    $s5, 4($s4)
.L00441CF4:
/* 00441CF4 AEB40038 */  sw    $s4, 0x38($s5)
/* 00441CF8 928E0003 */  lbu   $t6, 3($s4)
/* 00441CFC 55C00047 */  bnezl $t6, .L00441E1C
/* 00441D00 A280001C */   sb    $zero, 0x1c($s4)
/* 00441D04 A292001C */  sb    $s2, 0x1c($s4)
/* 00441D08 92B80022 */  lbu   $t8, 0x22($s5)
/* 00441D0C 5700000F */  bnezl $t8, .L00441D4C
/* 00441D10 A296001E */   sb    $s6, 0x1e($s4)
/* 00441D14 5240000D */  beql  $s2, $zero, .L00441D4C
/* 00441D18 A296001E */   sb    $s6, 0x1e($s4)
/* 00441D1C 8F8A89B4 */  lw     $t2, %got(curgraphnode)($gp)
/* 00441D20 8F9983C8 */  lw    $t9, %call16(strlkilled)($gp)
/* 00441D24 02802025 */  move  $a0, $s4
/* 00441D28 8D4A0000 */  lw    $t2, ($t2)
/* 00441D2C 0320F809 */  jalr  $t9
/* 00441D30 8D450024 */   lw    $a1, 0x24($t2)
/* 00441D34 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00441D38 2C590001 */  sltiu $t9, $v0, 1
/* 00441D3C 8F9489C4 */  lw     $s4, %got(stattail)($gp)
/* 00441D40 8E940000 */  lw    $s4, ($s4)
/* 00441D44 A299001C */  sb    $t9, 0x1c($s4)
/* 00441D48 A296001E */  sb    $s6, 0x1e($s4)
.L00441D4C:
/* 00441D4C 92AC0022 */  lbu   $t4, 0x22($s5)
/* 00441D50 5580000F */  bnezl $t4, .L00441D90
/* 00441D54 8E8F0004 */   lw    $t7, 4($s4)
/* 00441D58 52C0000D */  beql  $s6, $zero, .L00441D90
/* 00441D5C 8E8F0004 */   lw    $t7, 4($s4)
/* 00441D60 8F8B89B4 */  lw     $t3, %got(curgraphnode)($gp)
/* 00441D64 8F9983CC */  lw    $t9, %call16(strskilled)($gp)
/* 00441D68 02802025 */  move  $a0, $s4
/* 00441D6C 8D6B0000 */  lw    $t3, ($t3)
/* 00441D70 0320F809 */  jalr  $t9
/* 00441D74 8D650024 */   lw    $a1, 0x24($t3)
/* 00441D78 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00441D7C 2C4D0001 */  sltiu $t5, $v0, 1
/* 00441D80 8F9489C4 */  lw     $s4, %got(stattail)($gp)
/* 00441D84 8E940000 */  lw    $s4, ($s4)
/* 00441D88 A28D001E */  sb    $t5, 0x1e($s4)
/* 00441D8C 8E8F0004 */  lw    $t7, 4($s4)
.L00441D90:
/* 00441D90 24010003 */  li    $at, 3
/* 00441D94 91EE002E */  lbu   $t6, 0x2e($t7)
/* 00441D98 31D80007 */  andi  $t8, $t6, 7
/* 00441D9C 57010003 */  bnel  $t8, $at, .L00441DAC
/* 00441DA0 92AA0021 */   lbu   $t2, 0x21($s5)
/* 00441DA4 A280001E */  sb    $zero, 0x1e($s4)
/* 00441DA8 92AA0021 */  lbu   $t2, 0x21($s5)
.L00441DAC:
/* 00441DAC 3A020001 */  xori  $v0, $s0, 1
/* 00441DB0 2C450001 */  sltiu $a1, $v0, 1
/* 00441DB4 2D4C0001 */  sltiu $t4, $t2, 1
/* 00441DB8 A28C001D */  sb    $t4, 0x1d($s4)
/* 00441DBC 10A00012 */  beqz  $a1, .L00441E08
/* 00441DC0 A28C001F */   sb    $t4, 0x1f($s4)
/* 00441DC4 8F9986D8 */  lw    $t9, %call16(hasvolatile)($gp)
/* 00441DC8 8EA40034 */  lw    $a0, 0x34($s5)
/* 00441DCC 0320F809 */  jalr  $t9
/* 00441DD0 00000000 */   nop   
/* 00441DD4 2C450001 */  sltiu $a1, $v0, 1
/* 00441DD8 10A0000B */  beqz  $a1, .L00441E08
/* 00441DDC 8FBC0034 */   lw    $gp, 0x34($sp)
/* 00441DE0 8F8B89C4 */  lw     $t3, %got(stattail)($gp)
/* 00441DE4 3C018F80 */  lui   $at, 0x8f80
/* 00441DE8 8D6B0000 */  lw    $t3, ($t3)
/* 00441DEC 8D6D0004 */  lw    $t5, 4($t3)
/* 00441DF0 91AF0001 */  lbu   $t7, 1($t5)
/* 00441DF4 2DEE0020 */  sltiu $t6, $t7, 0x20
/* 00441DF8 000EC023 */  negu  $t8, $t6
/* 00441DFC 03015024 */  and   $t2, $t8, $at
/* 00441E00 01EA2804 */  sllv  $a1, $t2, $t7
/* 00441E04 28A50000 */  slti  $a1, $a1, 0
.L00441E08:
/* 00441E08 8F9489C4 */  lw     $s4, %got(stattail)($gp)
/* 00441E0C 8E940000 */  lw    $s4, ($s4)
/* 00441E10 10000006 */  b     .L00441E2C
/* 00441E14 A2850001 */   sb    $a1, 1($s4)
/* 00441E18 A280001C */  sb    $zero, 0x1c($s4)
.L00441E1C:
/* 00441E1C A280001E */  sb    $zero, 0x1e($s4)
/* 00441E20 A280001D */  sb    $zero, 0x1d($s4)
/* 00441E24 A280001F */  sb    $zero, 0x1f($s4)
/* 00441E28 A2800001 */  sb    $zero, 1($s4)
.L00441E2C:
/* 00441E2C AE80002C */  sw    $zero, 0x2c($s4)
/* 00441E30 AE800030 */  sw    $zero, 0x30($s4)
/* 00441E34 A2800002 */  sb    $zero, 2($s4)
/* 00441E38 92B90022 */  lbu   $t9, 0x22($s5)
/* 00441E3C 17200006 */  bnez  $t9, .L00441E58
/* 00441E40 00000000 */   nop   
/* 00441E44 8F99839C */  lw    $t9, %call16(strkillprev)($gp)
/* 00441E48 02802025 */  move  $a0, $s4
/* 00441E4C 0320F809 */  jalr  $t9
/* 00441E50 00000000 */   nop   
/* 00441E54 8FBC0034 */  lw    $gp, 0x34($sp)
.L00441E58:
/* 00441E58 8F998318 */  lw    $t9, %call16(appendstorelist)($gp)
/* 00441E5C 0320F809 */  jalr  $t9
/* 00441E60 00000000 */   nop   
/* 00441E64 92AC0022 */  lbu   $t4, 0x22($s5)
/* 00441E68 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00441E6C 11800006 */  beqz  $t4, .L00441E88
/* 00441E70 00000000 */   nop   
/* 00441E74 8F8D89B4 */  lw     $t5, %got(curgraphnode)($gp)
/* 00441E78 240B0001 */  li    $t3, 1
/* 00441E7C 8DAD0000 */  lw    $t5, ($t5)
/* 00441E80 8DAE0028 */  lw    $t6, 0x28($t5)
/* 00441E84 A1CB0008 */  sb    $t3, 8($t6)
.L00441E88:
/* 00441E88 8F868A48 */  lw     $a2, %got(loc_not_yet_seen)($gp)
/* 00441E8C 10000A38 */  b     .L00444770
/* 00441E90 A0C00000 */   sb    $zero, ($a2)
.L00441E94:
/* 00441E94 8F998658 */  lw    $t9, %call16(extendstat)($gp)
/* 00441E98 2404000F */  li    $a0, 15
/* 00441E9C 0320F809 */  jalr  $t9
/* 00441EA0 00000000 */   nop   
/* 00441EA4 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00441EA8 27A20110 */  addiu $v0, $sp, 0x110
/* 00441EAC 8F998024 */  lw    $t9, %got(func_0043B1DC)($gp)
/* 00441EB0 2739B1DC */  addiu $t9, %lo(func_0043B1DC) # addiu $t9, $t9, -0x4e24
/* 00441EB4 0320F809 */  jalr  $t9
/* 00441EB8 00000000 */   nop   
/* 00441EBC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00441EC0 8F938964 */  lw     $s3, %got(ustack)($gp)
/* 00441EC4 8F9489C4 */  lw     $s4, %got(stattail)($gp)
/* 00441EC8 8F818964 */  lw     $at, %got(ustack)($gp)
/* 00441ECC 8E730000 */  lw    $s3, ($s3)
/* 00441ED0 8E940000 */  lw    $s4, ($s4)
/* 00441ED4 8E780000 */  lw    $t8, ($s3)
/* 00441ED8 AE800018 */  sw    $zero, 0x18($s4)
/* 00441EDC AE980004 */  sw    $t8, 4($s4)
/* 00441EE0 8E6A000C */  lw    $t2, 0xc($s3)
/* 00441EE4 10000A22 */  b     .L00444770
/* 00441EE8 AC2A0000 */   sw    $t2, ($at)
.L00441EEC:
/* 00441EEC 8F998658 */  lw    $t9, %call16(extendstat)($gp)
/* 00441EF0 24040005 */  li    $a0, 5
/* 00441EF4 0320F809 */  jalr  $t9
/* 00441EF8 00000000 */   nop   
/* 00441EFC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00441F00 8F8F8B20 */  lw     $t7, %got(outofmem)($gp)
/* 00441F04 91EF0000 */  lbu   $t7, ($t7)
/* 00441F08 55E00A1A */  bnezl $t7, .L00444774
/* 00441F0C 8FBF003C */   lw    $ra, 0x3c($sp)
/* 00441F10 8F998024 */  lw    $t9, %got(func_0043B1DC)($gp)
/* 00441F14 27A20110 */  addiu $v0, $sp, 0x110
/* 00441F18 2739B1DC */  addiu $t9, %lo(func_0043B1DC) # addiu $t9, $t9, -0x4e24
/* 00441F1C 0320F809 */  jalr  $t9
/* 00441F20 00000000 */   nop   
/* 00441F24 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00441F28 240B0001 */  li    $t3, 1
/* 00441F2C 8F938964 */  lw     $s3, %got(ustack)($gp)
/* 00441F30 8F8C89C4 */  lw     $t4, %got(stattail)($gp)
/* 00441F34 8F818964 */  lw     $at, %got(ustack)($gp)
/* 00441F38 8E730000 */  lw    $s3, ($s3)
/* 00441F3C 8D8C0000 */  lw    $t4, ($t4)
/* 00441F40 8E790000 */  lw    $t9, ($s3)
/* 00441F44 AD990004 */  sw    $t9, 4($t4)
/* 00441F48 8E6D000C */  lw    $t5, 0xc($s3)
/* 00441F4C AC2D0000 */  sw    $t5, ($at)
/* 00441F50 8F818AF8 */  lw     $at, %got(usefp)($gp)
/* 00441F54 10000A06 */  b     .L00444770
/* 00441F58 A02B0000 */   sb    $t3, ($at)
.L00441F5C:
/* 00441F5C 8F9982C4 */  lw    $t9, %call16(ingraph)($gp)
/* 00441F60 8FC40004 */  lw    $a0, 4($fp)
/* 00441F64 0320F809 */  jalr  $t9
/* 00441F68 00000000 */   nop   
/* 00441F6C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00441F70 004002B4 */  teq   $v0, $zero, 0xa
/* 00441F74 8C44001C */  lw    $a0, 0x1c($v0)
/* 00441F78 24180042 */  li    $t8, 66
/* 00441F7C 908E0000 */  lbu   $t6, ($a0)
/* 00441F80 01D802B6 */  tne   $t6, $t8, 0xa
/* 00441F84 908A0024 */  lbu   $t2, 0x24($a0)
/* 00441F88 97CF0002 */  lhu   $t7, 2($fp)
/* 00441F8C 8FC80008 */  lw    $t0, 8($fp)
/* 00441F90 014FC825 */  or    $t9, $t2, $t7
/* 00441F94 110009F6 */  beqz  $t0, .L00444770
/* 00441F98 A0990024 */   sb    $t9, 0x24($a0)
/* 00441F9C 8C4C001C */  lw    $t4, 0x1c($v0)
/* 00441FA0 100009F3 */  b     .L00444770
/* 00441FA4 AD880018 */   sw    $t0, 0x18($t4)
.L00441FA8:
/* 00441FA8 8F998658 */  lw    $t9, %call16(extendstat)($gp)
/* 00441FAC 00E02025 */  move  $a0, $a3
/* 00441FB0 0320F809 */  jalr  $t9
/* 00441FB4 00000000 */   nop   
/* 00441FB8 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00441FBC 8F8D8B20 */  lw     $t5, %got(outofmem)($gp)
/* 00441FC0 91AD0000 */  lbu   $t5, ($t5)
/* 00441FC4 55A009EB */  bnezl $t5, .L00444774
/* 00441FC8 8FBF003C */   lw    $ra, 0x3c($sp)
/* 00441FCC 10000045 */  b     .L004420E4
/* 00441FD0 93C20000 */   lbu   $v0, ($fp)
.L00441FD4:
/* 00441FD4 8F868A48 */  lw     $a2, %got(loc_not_yet_seen)($gp)
/* 00441FD8 8F908A44 */  lw     $s0, %got(curlocln)($gp)
/* 00441FDC 8F9489C4 */  lw     $s4, %got(stattail)($gp)
/* 00441FE0 A0C00000 */  sb    $zero, ($a2)
/* 00441FE4 AE000000 */  sw    $zero, ($s0)
/* 00441FE8 1000004F */  b     .L00442128
/* 00441FEC 8E940000 */   lw    $s4, ($s4)
.L00441FF0:
/* 00441FF0 8F998024 */  lw    $t9, %got(func_0043B1DC)($gp)
/* 00441FF4 8F868A48 */  lw     $a2, %got(loc_not_yet_seen)($gp)
/* 00441FF8 27A20110 */  addiu $v0, $sp, 0x110
/* 00441FFC 2739B1DC */  addiu $t9, %lo(func_0043B1DC) # addiu $t9, $t9, -0x4e24
/* 00442000 0320F809 */  jalr  $t9
/* 00442004 A0C00000 */   sb    $zero, ($a2)
/* 00442008 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0044200C 24010003 */  li    $at, 3
/* 00442010 8F938964 */  lw     $s3, %got(ustack)($gp)
/* 00442014 8E730000 */  lw    $s3, ($s3)
/* 00442018 8E710000 */  lw    $s1, ($s3)
/* 0044201C 922B0000 */  lbu   $t3, ($s1)
/* 00442020 1561000E */  bne   $t3, $at, .L0044205C
/* 00442024 00000000 */   nop   
/* 00442028 8F9986B8 */  lw    $t9, %call16(binopwithconst)($gp)
/* 0044202C 2404005F */  li    $a0, 95
/* 00442030 02202825 */  move  $a1, $s1
/* 00442034 0320F809 */  jalr  $t9
/* 00442038 00003025 */   move  $a2, $zero
/* 0044203C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00442040 8F938964 */  lw     $s3, %got(ustack)($gp)
/* 00442044 8E730000 */  lw    $s3, ($s3)
/* 00442048 AE620000 */  sw    $v0, ($s3)
/* 0044204C AC400038 */  sw    $zero, 0x38($v0)
/* 00442050 8E6E0000 */  lw    $t6, ($s3)
/* 00442054 ADC0003C */  sw    $zero, 0x3c($t6)
/* 00442058 8E710000 */  lw    $s1, ($s3)
.L0044205C:
/* 0044205C 8F9489C4 */  lw     $s4, %got(stattail)($gp)
/* 00442060 8F818964 */  lw     $at, %got(ustack)($gp)
/* 00442064 8F908A44 */  lw     $s0, %got(curlocln)($gp)
/* 00442068 8E940000 */  lw    $s4, ($s4)
/* 0044206C AE910004 */  sw    $s1, 4($s4)
/* 00442070 8E78000C */  lw    $t8, 0xc($s3)
/* 00442074 AC380000 */  sw    $t8, ($at)
/* 00442078 1000002B */  b     .L00442128
/* 0044207C AE80001C */   sw    $zero, 0x1c($s4)
.L00442080:
/* 00442080 8F9489C4 */  lw     $s4, %got(stattail)($gp)
/* 00442084 97C20002 */  lhu   $v0, 2($fp)
/* 00442088 8FCA0008 */  lw    $t2, 8($fp)
/* 0044208C 8E940000 */  lw    $s4, ($s4)
/* 00442090 304F0002 */  andi  $t7, $v0, 2
/* 00442094 A2820024 */  sb    $v0, 0x24($s4)
/* 00442098 11E00004 */  beqz  $t7, .L004420AC
/* 0044209C AE8A0018 */   sw    $t2, 0x18($s4)
/* 004420A0 8F818B3C */  lw     $at, %got(has_exc_handler)($gp)
/* 004420A4 24190001 */  li    $t9, 1
/* 004420A8 A0390000 */  sb    $t9, ($at)
.L004420AC:
/* 004420AC 1000001E */  b     .L00442128
/* 004420B0 8F908A44 */   lw     $s0, %got(curlocln)($gp)
.L004420B4:
/* 004420B4 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 004420B8 8F868044 */  lw    $a2, %got(RO_1000C458)($gp)
/* 004420BC 24040001 */  li    $a0, 1
/* 004420C0 24050B81 */  li    $a1, 2945
/* 004420C4 2407000B */  li    $a3, 11
/* 004420C8 0320F809 */  jalr  $t9
/* 004420CC 24C6C458 */   addiu $a2, %lo(RO_1000C458) # addiu $a2, $a2, -0x3ba8
/* 004420D0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004420D4 8F9489C4 */  lw     $s4, %got(stattail)($gp)
/* 004420D8 8F908A44 */  lw     $s0, %got(curlocln)($gp)
/* 004420DC 10000012 */  b     .L00442128
/* 004420E0 8E940000 */   lw    $s4, ($s4)
.L004420E4:
/* 004420E4 2C410043 */  sltiu $at, $v0, 0x43
/* 004420E8 14200007 */  bnez  $at, .L00442108
/* 004420EC 2401007F */   li    $at, 127
/* 004420F0 1041FFBF */  beq   $v0, $at, .L00441FF0
/* 004420F4 24110088 */   li    $s1, 136
/* 004420F8 1051FFB6 */  beq   $v0, $s1, .L00441FD4
/* 004420FC 00000000 */   nop   
/* 00442100 1000FFEC */  b     .L004420B4
/* 00442104 00000000 */   nop   
.L00442108:
/* 00442108 24010026 */  li    $at, 38
/* 0044210C 1041FFB8 */  beq   $v0, $at, .L00441FF0
/* 00442110 00000000 */   nop   
/* 00442114 24010042 */  li    $at, 66
/* 00442118 1041FFD9 */  beq   $v0, $at, .L00442080
/* 0044211C 00000000 */   nop   
/* 00442120 1000FFE4 */  b     .L004420B4
/* 00442124 00000000 */   nop   
.L00442128:
/* 00442128 8F9982C4 */  lw    $t9, %call16(ingraph)($gp)
/* 0044212C 8FC40004 */  lw    $a0, 4($fp)
/* 00442130 0320F809 */  jalr  $t9
/* 00442134 AE840014 */   sw    $a0, 0x14($s4)
/* 00442138 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0044213C 1440000F */  bnez  $v0, .L0044217C
/* 00442140 00409825 */   move  $s3, $v0
/* 00442144 8F9982D0 */  lw    $t9, %call16(appendgraph)($gp)
/* 00442148 0320F809 */  jalr  $t9
/* 0044214C 00000000 */   nop   
/* 00442150 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00442154 8F8C8B20 */  lw     $t4, %got(outofmem)($gp)
/* 00442158 918C0000 */  lbu   $t4, ($t4)
/* 0044215C 55800985 */  bnezl $t4, .L00444774
/* 00442160 8FBF003C */   lw    $ra, 0x3c($sp)
/* 00442164 8F9689B0 */  lw     $s6, %got(graphtail)($gp)
/* 00442168 8FCD0004 */  lw    $t5, 4($fp)
/* 0044216C 8ED30000 */  lw    $s3, ($s6)
/* 00442170 AE6D0000 */  sw    $t5, ($s3)
/* 00442174 10000007 */  b     .L00442194
/* 00442178 93C70000 */   lbu   $a3, ($fp)
.L0044217C:
/* 0044217C 93C70000 */  lbu   $a3, ($fp)
/* 00442180 24010042 */  li    $at, 66
/* 00442184 54E10004 */  bnel  $a3, $at, .L00442198
/* 00442188 24010042 */   li    $at, 66
/* 0044218C 8E0B0000 */  lw    $t3, ($s0)
/* 00442190 AC4B0134 */  sw    $t3, 0x134($v0)
.L00442194:
/* 00442194 24010042 */  li    $at, 66
.L00442198:
/* 00442198 10E10024 */  beq   $a3, $at, .L0044222C
/* 0044219C 00000000 */   nop   
/* 004421A0 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 004421A4 8F948954 */  lw     $s4, %got(perm_heap)($gp)
/* 004421A8 24040008 */  li    $a0, 8
/* 004421AC 0320F809 */  jalr  $t9
/* 004421B0 02802825 */   move  $a1, $s4
/* 004421B4 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004421B8 14400005 */  bnez  $v0, .L004421D0
/* 004421BC 00408025 */   move  $s0, $v0
/* 004421C0 8F818B20 */  lw     $at, %got(outofmem)($gp)
/* 004421C4 240E0001 */  li    $t6, 1
/* 004421C8 10000969 */  b     .L00444770
/* 004421CC A02E0000 */   sb    $t6, ($at)
.L004421D0:
/* 004421D0 8F9889B4 */  lw     $t8, %got(curgraphnode)($gp)
/* 004421D4 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 004421D8 24040008 */  li    $a0, 8
/* 004421DC 8F180000 */  lw    $t8, ($t8)
/* 004421E0 02802825 */  move  $a1, $s4
/* 004421E4 AE180000 */  sw    $t8, ($s0)
/* 004421E8 8E6A0014 */  lw    $t2, 0x14($s3)
/* 004421EC AE0A0004 */  sw    $t2, 4($s0)
/* 004421F0 0320F809 */  jalr  $t9
/* 004421F4 AE700014 */   sw    $s0, 0x14($s3)
/* 004421F8 14400005 */  bnez  $v0, .L00442210
/* 004421FC 8FBC0034 */   lw    $gp, 0x34($sp)
/* 00442200 8F818B20 */  lw     $at, %got(outofmem)($gp)
/* 00442204 240F0001 */  li    $t7, 1
/* 00442208 10000959 */  b     .L00444770
/* 0044220C A02F0000 */   sb    $t7, ($at)
.L00442210:
/* 00442210 8F8589B4 */  lw     $a1, %got(curgraphnode)($gp)
/* 00442214 AC530000 */  sw    $s3, ($v0)
/* 00442218 8CA50000 */  lw    $a1, ($a1)
/* 0044221C 8CB90018 */  lw    $t9, 0x18($a1)
/* 00442220 AC590004 */  sw    $t9, 4($v0)
/* 00442224 10000952 */  b     .L00444770
/* 00442228 ACA20018 */   sw    $v0, 0x18($a1)
.L0044222C:
/* 0044222C 8F8C89C4 */  lw     $t4, %got(stattail)($gp)
/* 00442230 8FC40004 */  lw    $a0, 4($fp)
/* 00442234 24010044 */  li    $at, 68
/* 00442238 8D8C0000 */  lw    $t4, ($t4)
/* 0044223C 00801025 */  move  $v0, $a0
/* 00442240 8D8D000C */  lw    $t5, 0xc($t4)
/* 00442244 91AB0000 */  lbu   $t3, ($t5)
/* 00442248 55610005 */  bnel  $t3, $at, .L00442260
/* 0044224C 97CA0002 */   lhu   $t2, 2($fp)
/* 00442250 926E000B */  lbu   $t6, 0xb($s3)
/* 00442254 35D80040 */  ori   $t8, $t6, 0x40
/* 00442258 A278000B */  sb    $t8, 0xb($s3)
/* 0044225C 97CA0002 */  lhu   $t2, 2($fp)
.L00442260:
/* 00442260 8F8589B4 */  lw     $a1, %got(curgraphnode)($gp)
/* 00442264 AE620000 */  sw    $v0, ($s3)
/* 00442268 314F01F7 */  andi  $t7, $t2, 0x1f7
/* 0044226C 000FC82B */  sltu  $t9, $zero, $t7
/* 00442270 A2790004 */  sb    $t9, 4($s3)
/* 00442274 8CA50000 */  lw    $a1, ($a1)
/* 00442278 10A00066 */  beqz  $a1, .L00442414
/* 0044227C 00000000 */   nop   
/* 00442280 8CA20020 */  lw    $v0, 0x20($a1)
/* 00442284 904C0000 */  lbu   $t4, ($v0)
/* 00442288 258DFFE0 */  addiu $t5, $t4, -0x20
/* 0044228C 2DAB0060 */  sltiu $t3, $t5, 0x60
/* 00442290 11600009 */  beqz  $t3, .L004422B8
/* 00442294 00000000 */   nop   
/* 00442298 8F8A8044 */  lw    $t2, %got(D_100108A4)($gp)
/* 0044229C 000D7143 */  sra   $t6, $t5, 5
/* 004422A0 000EC080 */  sll   $t8, $t6, 2
/* 004422A4 254A08A4 */  addiu $t2, %lo(D_100108A4) # addiu $t2, $t2, 0x8a4
/* 004422A8 01587821 */  addu  $t7, $t2, $t8
/* 004422AC 8DF90000 */  lw    $t9, ($t7)
/* 004422B0 01B96004 */  sllv  $t4, $t9, $t5
/* 004422B4 298B0000 */  slti  $t3, $t4, 0
.L004422B8:
/* 004422B8 51600022 */  beql  $t3, $zero, .L00442344
/* 004422BC 8CB00018 */   lw    $s0, 0x18($a1)
/* 004422C0 8C4A0014 */  lw    $t2, 0x14($v0)
/* 004422C4 548A001F */  bnel  $a0, $t2, .L00442344
/* 004422C8 8CB00018 */   lw    $s0, 0x18($a1)
/* 004422CC 8F9986DC */  lw    $t9, %call16(has_volt_ovfw)($gp)
/* 004422D0 8C440004 */  lw    $a0, 4($v0)
/* 004422D4 0320F809 */  jalr  $t9
/* 004422D8 00000000 */   nop   
/* 004422DC 1440000E */  bnez  $v0, .L00442318
/* 004422E0 8FBC0034 */   lw    $gp, 0x34($sp)
/* 004422E4 8F9889B4 */  lw     $t8, %got(curgraphnode)($gp)
/* 004422E8 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 004422EC 8F180000 */  lw    $t8, ($t8)
/* 004422F0 8F0F0020 */  lw    $t7, 0x20($t8)
/* 004422F4 0320F809 */  jalr  $t9
/* 004422F8 8DE40004 */   lw    $a0, 4($t7)
/* 004422FC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00442300 24140060 */  li    $s4, 96
/* 00442304 8F8589B4 */  lw     $a1, %got(curgraphnode)($gp)
/* 00442308 8CA50000 */  lw    $a1, ($a1)
/* 0044230C 8CB90020 */  lw    $t9, 0x20($a1)
/* 00442310 1000000B */  b     .L00442340
/* 00442314 A3340000 */   sb    $s4, ($t9)
.L00442318:
/* 00442318 8F8589B4 */  lw     $a1, %got(curgraphnode)($gp)
/* 0044231C 240D0067 */  li    $t5, 103
/* 00442320 240E0006 */  li    $t6, 6
/* 00442324 8CA50000 */  lw    $a1, ($a1)
/* 00442328 8CAC0020 */  lw    $t4, 0x20($a1)
/* 0044232C A18D0000 */  sb    $t5, ($t4)
/* 00442330 8CAB0020 */  lw    $t3, 0x20($a1)
/* 00442334 A16E0014 */  sb    $t6, 0x14($t3)
/* 00442338 8CAA0020 */  lw    $t2, 0x20($a1)
/* 0044233C A1400015 */  sb    $zero, 0x15($t2)
.L00442340:
/* 00442340 8CB00018 */  lw    $s0, 0x18($a1)
.L00442344:
/* 00442344 00009025 */  move  $s2, $zero
/* 00442348 1200000E */  beqz  $s0, .L00442384
/* 0044234C 00000000 */   nop   
/* 00442350 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 00442354 8C840004 */  lw    $a0, 4($a0)
/* 00442358 8E180000 */  lw    $t8, ($s0)
.L0044235C:
/* 0044235C 8F0F0000 */  lw    $t7, ($t8)
/* 00442360 548F0004 */  bnel  $a0, $t7, .L00442374
/* 00442364 8E100004 */   lw    $s0, 4($s0)
/* 00442368 10000002 */  b     .L00442374
/* 0044236C 24120001 */   li    $s2, 1
/* 00442370 8E100004 */  lw    $s0, 4($s0)
.L00442374:
/* 00442374 12000003 */  beqz  $s0, .L00442384
/* 00442378 00000000 */   nop   
/* 0044237C 5240FFF7 */  beql  $s2, $zero, .L0044235C
/* 00442380 8E180000 */   lw    $t8, ($s0)
.L00442384:
/* 00442384 16400023 */  bnez  $s2, .L00442414
/* 00442388 00000000 */   nop   
/* 0044238C 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 00442390 8F948954 */  lw     $s4, %got(perm_heap)($gp)
/* 00442394 24040008 */  li    $a0, 8
/* 00442398 0320F809 */  jalr  $t9
/* 0044239C 02802825 */   move  $a1, $s4
/* 004423A0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004423A4 14400005 */  bnez  $v0, .L004423BC
/* 004423A8 00408025 */   move  $s0, $v0
/* 004423AC 8F818B20 */  lw     $at, %got(outofmem)($gp)
/* 004423B0 24190001 */  li    $t9, 1
/* 004423B4 100008EE */  b     .L00444770
/* 004423B8 A0390000 */   sb    $t9, ($at)
.L004423BC:
/* 004423BC 8F8D89B4 */  lw     $t5, %got(curgraphnode)($gp)
/* 004423C0 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 004423C4 24040008 */  li    $a0, 8
/* 004423C8 8DAD0000 */  lw    $t5, ($t5)
/* 004423CC 02802825 */  move  $a1, $s4
/* 004423D0 AE0D0000 */  sw    $t5, ($s0)
/* 004423D4 8E6C0014 */  lw    $t4, 0x14($s3)
/* 004423D8 AE0C0004 */  sw    $t4, 4($s0)
/* 004423DC 0320F809 */  jalr  $t9
/* 004423E0 AE700014 */   sw    $s0, 0x14($s3)
/* 004423E4 14400005 */  bnez  $v0, .L004423FC
/* 004423E8 8FBC0034 */   lw    $gp, 0x34($sp)
/* 004423EC 8F818B20 */  lw     $at, %got(outofmem)($gp)
/* 004423F0 240E0001 */  li    $t6, 1
/* 004423F4 100008DE */  b     .L00444770
/* 004423F8 A02E0000 */   sb    $t6, ($at)
.L004423FC:
/* 004423FC 8F8589B4 */  lw     $a1, %got(curgraphnode)($gp)
/* 00442400 AC530000 */  sw    $s3, ($v0)
/* 00442404 8CA50000 */  lw    $a1, ($a1)
/* 00442408 8CAB0018 */  lw    $t3, 0x18($a1)
/* 0044240C AC4B0004 */  sw    $t3, 4($v0)
/* 00442410 ACA20018 */  sw    $v0, 0x18($a1)
.L00442414:
/* 00442414 8F8189B4 */  lw     $at, %got(curgraphnode)($gp)
/* 00442418 8F8589B4 */  lw     $a1, %got(curgraphnode)($gp)
/* 0044241C 8F9489C4 */  lw     $s4, %got(stattail)($gp)
/* 00442420 8F8389B8 */  lw     $v1, %got(curstaticno)($gp)
/* 00442424 AC330000 */  sw    $s3, ($at)
/* 00442428 8CA50000 */  lw    $a1, ($a1)
/* 0044242C 8E940000 */  lw    $s4, ($s4)
/* 00442430 8C620000 */  lw    $v0, ($v1)
/* 00442434 ACB4001C */  sw    $s4, 0x1c($a1)
/* 00442438 AE850010 */  sw    $a1, 0x10($s4)
/* 0044243C 244A0001 */  addiu $t2, $v0, 1
/* 00442440 AC6A0000 */  sw    $t2, ($v1)
/* 00442444 100008CA */  b     .L00444770
/* 00442448 A4A20008 */   sh    $v0, 8($a1)
.L0044244C:
/* 0044244C 8F998658 */  lw    $t9, %call16(extendstat)($gp)
/* 00442450 24040011 */  li    $a0, 17
/* 00442454 0320F809 */  jalr  $t9
/* 00442458 00000000 */   nop   
/* 0044245C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00442460 8F988B20 */  lw     $t8, %got(outofmem)($gp)
/* 00442464 93180000 */  lbu   $t8, ($t8)
/* 00442468 570008C2 */  bnezl $t8, .L00444774
/* 0044246C 8FBF003C */   lw    $ra, 0x3c($sp)
/* 00442470 8F9489C4 */  lw     $s4, %got(stattail)($gp)
/* 00442474 8F9982C4 */  lw    $t9, %call16(ingraph)($gp)
/* 00442478 8FC40004 */  lw    $a0, 4($fp)
/* 0044247C 8E940000 */  lw    $s4, ($s4)
/* 00442480 8FCF0008 */  lw    $t7, 8($fp)
/* 00442484 AE840014 */  sw    $a0, 0x14($s4)
/* 00442488 0320F809 */  jalr  $t9
/* 0044248C AE8F0018 */   sw    $t7, 0x18($s4)
/* 00442490 14400012 */  bnez  $v0, .L004424DC
/* 00442494 8FBC0034 */   lw    $gp, 0x34($sp)
/* 00442498 8F9982D0 */  lw    $t9, %call16(appendgraph)($gp)
/* 0044249C 0320F809 */  jalr  $t9
/* 004424A0 00000000 */   nop   
/* 004424A4 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004424A8 8F998B20 */  lw     $t9, %got(outofmem)($gp)
/* 004424AC 93390000 */  lbu   $t9, ($t9)
/* 004424B0 572008B0 */  bnezl $t9, .L00444774
/* 004424B4 8FBF003C */   lw    $ra, 0x3c($sp)
/* 004424B8 8F9689B0 */  lw     $s6, %got(graphtail)($gp)
/* 004424BC 8FC40004 */  lw    $a0, 4($fp)
/* 004424C0 8F9489C4 */  lw     $s4, %got(stattail)($gp)
/* 004424C4 8ED30000 */  lw    $s3, ($s6)
/* 004424C8 AE640000 */  sw    $a0, ($s3)
/* 004424CC 8E940000 */  lw    $s4, ($s4)
/* 004424D0 A280001C */  sb    $zero, 0x1c($s4)
/* 004424D4 1000000B */  b     .L00442504
/* 004424D8 AE74001C */   sw    $s4, 0x1c($s3)
.L004424DC:
/* 004424DC 8C4D0014 */  lw    $t5, 0x14($v0)
/* 004424E0 8F9489C4 */  lw     $s4, %got(stattail)($gp)
/* 004424E4 240E0001 */  li    $t6, 1
/* 004424E8 8DB30000 */  lw    $s3, ($t5)
/* 004424EC 8E940000 */  lw    $s4, ($s4)
/* 004424F0 8F9689B0 */  lw     $s6, %got(graphtail)($gp)
/* 004424F4 8E6C0020 */  lw    $t4, 0x20($s3)
/* 004424F8 AD940020 */  sw    $s4, 0x20($t4)
/* 004424FC 8FC40004 */  lw    $a0, 4($fp)
/* 00442500 A28E001C */  sb    $t6, 0x1c($s4)
.L00442504:
/* 00442504 8F8B895C */  lw     $t3, %got(endblock)($gp)
/* 00442508 8FD70008 */  lw    $s7, 8($fp)
/* 0044250C 0080A825 */  move  $s5, $a0
/* 00442510 916B0000 */  lbu   $t3, ($t3)
/* 00442514 24120001 */  li    $s2, 1
/* 00442518 1AE00055 */  blez  $s7, .L00442670
/* 0044251C A3AB00E3 */   sb    $t3, 0xe3($sp)
/* 00442520 26F70001 */  addiu $s7, $s7, 1
/* 00442524 8F948954 */  lw     $s4, %got(perm_heap)($gp)
/* 00442528 24110088 */  li    $s1, 136
.L0044252C:
/* 0044252C 8F9982FC */  lw    $t9, %call16(getop)($gp)
/* 00442530 0320F809 */  jalr  $t9
/* 00442534 00000000 */   nop   
/* 00442538 93C70000 */  lbu   $a3, ($fp)
/* 0044253C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00442540 12270006 */  beq   $s1, $a3, .L0044255C
/* 00442544 00000000 */   nop   
/* 00442548 8F998304 */  lw    $t9, %call16(copyline)($gp)
/* 0044254C 0320F809 */  jalr  $t9
/* 00442550 00000000 */   nop   
/* 00442554 10000040 */  b     .L00442658
/* 00442558 8FBC0034 */   lw    $gp, 0x34($sp)
.L0044255C:
/* 0044255C 8F998658 */  lw    $t9, %call16(extendstat)($gp)
/* 00442560 00E02025 */  move  $a0, $a3
/* 00442564 0320F809 */  jalr  $t9
/* 00442568 00000000 */   nop   
/* 0044256C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00442570 8F8A8B20 */  lw     $t2, %got(outofmem)($gp)
/* 00442574 914A0000 */  lbu   $t2, ($t2)
/* 00442578 5540087E */  bnezl $t2, .L00444774
/* 0044257C 8FBF003C */   lw    $ra, 0x3c($sp)
/* 00442580 8F9889C4 */  lw     $t8, %got(stattail)($gp)
/* 00442584 8FC40004 */  lw    $a0, 4($fp)
/* 00442588 8F180000 */  lw    $t8, ($t8)
/* 0044258C AF040014 */  sw    $a0, 0x14($t8)
/* 00442590 8F9982C4 */  lw    $t9, %call16(ingraph)($gp)
/* 00442594 0320F809 */  jalr  $t9
/* 00442598 00000000 */   nop   
/* 0044259C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004425A0 1440000C */  bnez  $v0, .L004425D4
/* 004425A4 00408025 */   move  $s0, $v0
/* 004425A8 8F9982D0 */  lw    $t9, %call16(appendgraph)($gp)
/* 004425AC 0320F809 */  jalr  $t9
/* 004425B0 00000000 */   nop   
/* 004425B4 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004425B8 8F8F8B20 */  lw     $t7, %got(outofmem)($gp)
/* 004425BC 91EF0000 */  lbu   $t7, ($t7)
/* 004425C0 55E0086C */  bnezl $t7, .L00444774
/* 004425C4 8FBF003C */   lw    $ra, 0x3c($sp)
/* 004425C8 8ED00000 */  lw    $s0, ($s6)
/* 004425CC 8FD90004 */  lw    $t9, 4($fp)
/* 004425D0 AE190000 */  sw    $t9, ($s0)
.L004425D4:
/* 004425D4 8E6D0000 */  lw    $t5, ($s3)
/* 004425D8 12AD0010 */  beq   $s5, $t5, .L0044261C
/* 004425DC 00000000 */   nop   
/* 004425E0 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 004425E4 24040008 */  li    $a0, 8
/* 004425E8 02802825 */  move  $a1, $s4
/* 004425EC 0320F809 */  jalr  $t9
/* 004425F0 00000000 */   nop   
/* 004425F4 14400005 */  bnez  $v0, .L0044260C
/* 004425F8 8FBC0034 */   lw    $gp, 0x34($sp)
/* 004425FC 8F818B20 */  lw     $at, %got(outofmem)($gp)
/* 00442600 240C0001 */  li    $t4, 1
/* 00442604 1000085A */  b     .L00444770
/* 00442608 A02C0000 */   sb    $t4, ($at)
.L0044260C:
/* 0044260C AC530000 */  sw    $s3, ($v0)
/* 00442610 8E0E0014 */  lw    $t6, 0x14($s0)
/* 00442614 AC4E0004 */  sw    $t6, 4($v0)
/* 00442618 AE020014 */  sw    $v0, 0x14($s0)
.L0044261C:
/* 0044261C 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 00442620 24040008 */  li    $a0, 8
/* 00442624 02802825 */  move  $a1, $s4
/* 00442628 0320F809 */  jalr  $t9
/* 0044262C 00000000 */   nop   
/* 00442630 14400005 */  bnez  $v0, .L00442648
/* 00442634 8FBC0034 */   lw    $gp, 0x34($sp)
/* 00442638 8F818B20 */  lw     $at, %got(outofmem)($gp)
/* 0044263C 240B0001 */  li    $t3, 1
/* 00442640 1000084B */  b     .L00444770
/* 00442644 A02B0000 */   sb    $t3, ($at)
.L00442648:
/* 00442648 AC500000 */  sw    $s0, ($v0)
/* 0044264C 8E6A0018 */  lw    $t2, 0x18($s3)
/* 00442650 AC4A0004 */  sw    $t2, 4($v0)
/* 00442654 AE620018 */  sw    $v0, 0x18($s3)
.L00442658:
/* 00442658 93D80000 */  lbu   $t8, ($fp)
/* 0044265C 1638FFB3 */  bne   $s1, $t8, .L0044252C
/* 00442660 00000000 */   nop   
/* 00442664 26520001 */  addiu $s2, $s2, 1
/* 00442668 1657FFB0 */  bne   $s2, $s7, .L0044252C
/* 0044266C 00000000 */   nop   
.L00442670:
/* 00442670 93AF00E3 */  lbu   $t7, 0xe3($sp)
/* 00442674 8F81895C */  lw     $at, %got(endblock)($gp)
/* 00442678 1000083D */  b     .L00444770
/* 0044267C A02F0000 */   sb    $t7, ($at)
.L00442680:
/* 00442680 8F998658 */  lw    $t9, %call16(extendstat)($gp)
/* 00442684 2404008C */  li    $a0, 140
/* 00442688 0320F809 */  jalr  $t9
/* 0044268C 00000000 */   nop   
/* 00442690 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00442694 8F998B20 */  lw     $t9, %got(outofmem)($gp)
/* 00442698 93390000 */  lbu   $t9, ($t9)
/* 0044269C 57200835 */  bnezl $t9, .L00444774
/* 004426A0 8FBF003C */   lw    $ra, 0x3c($sp)
/* 004426A4 8F998024 */  lw    $t9, %got(func_0043B1DC)($gp)
/* 004426A8 27A20110 */  addiu $v0, $sp, 0x110
/* 004426AC 2739B1DC */  addiu $t9, %lo(func_0043B1DC) # addiu $t9, $t9, -0x4e24
/* 004426B0 0320F809 */  jalr  $t9
/* 004426B4 00000000 */   nop   
/* 004426B8 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004426BC 24010003 */  li    $at, 3
/* 004426C0 8F938964 */  lw     $s3, %got(ustack)($gp)
/* 004426C4 8E730000 */  lw    $s3, ($s3)
/* 004426C8 8E710000 */  lw    $s1, ($s3)
/* 004426CC 922D0000 */  lbu   $t5, ($s1)
/* 004426D0 15A1000B */  bne   $t5, $at, .L00442700
/* 004426D4 00000000 */   nop   
/* 004426D8 8F9986B8 */  lw    $t9, %call16(binopwithconst)($gp)
/* 004426DC 24040001 */  li    $a0, 1
/* 004426E0 02202825 */  move  $a1, $s1
/* 004426E4 0320F809 */  jalr  $t9
/* 004426E8 00003025 */   move  $a2, $zero
/* 004426EC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004426F0 00408825 */  move  $s1, $v0
/* 004426F4 8F938964 */  lw     $s3, %got(ustack)($gp)
/* 004426F8 8E730000 */  lw    $s3, ($s3)
/* 004426FC AE620000 */  sw    $v0, ($s3)
.L00442700:
/* 00442700 8F9489C4 */  lw     $s4, %got(stattail)($gp)
/* 00442704 8F818964 */  lw     $at, %got(ustack)($gp)
/* 00442708 8E940000 */  lw    $s4, ($s4)
/* 0044270C AE910004 */  sw    $s1, 4($s4)
/* 00442710 8E6C000C */  lw    $t4, 0xc($s3)
/* 00442714 AC2C0000 */  sw    $t4, ($at)
/* 00442718 8FD9001C */  lw    $t9, 0x1c($fp)
/* 0044271C 93CE0001 */  lbu   $t6, 1($fp)
/* 00442720 8FC40004 */  lw    $a0, 4($fp)
/* 00442724 AE990030 */  sw    $t9, 0x30($s4)
/* 00442728 8F9982C4 */  lw    $t9, %call16(ingraph)($gp)
/* 0044272C 8FCA0008 */  lw    $t2, 8($fp)
/* 00442730 8FD80014 */  lw    $t8, 0x14($fp)
/* 00442734 8FCF0010 */  lw    $t7, 0x10($fp)
/* 00442738 8FCD0018 */  lw    $t5, 0x18($fp)
/* 0044273C 31CB001F */  andi  $t3, $t6, 0x1f
/* 00442740 A28B0014 */  sb    $t3, 0x14($s4)
/* 00442744 AE840018 */  sw    $a0, 0x18($s4)
/* 00442748 AE8A001C */  sw    $t2, 0x1c($s4)
/* 0044274C AE980028 */  sw    $t8, 0x28($s4)
/* 00442750 AE8F0024 */  sw    $t7, 0x24($s4)
/* 00442754 0320F809 */  jalr  $t9
/* 00442758 AE8D002C */   sw    $t5, 0x2c($s4)
/* 0044275C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00442760 1040002A */  beqz  $v0, .L0044280C
/* 00442764 00409825 */   move  $s3, $v0
/* 00442768 8C4E001C */  lw    $t6, 0x1c($v0)
/* 0044276C 8F8A89C4 */  lw     $t2, %got(stattail)($gp)
/* 00442770 240C0001 */  li    $t4, 1
/* 00442774 A1CC001C */  sb    $t4, 0x1c($t6)
/* 00442778 8C4B001C */  lw    $t3, 0x1c($v0)
/* 0044277C 8D4A0000 */  lw    $t2, ($t2)
/* 00442780 8F8F89B4 */  lw     $t7, %got(curgraphnode)($gp)
/* 00442784 AD4B0020 */  sw    $t3, 0x20($t2)
/* 00442788 8C580018 */  lw    $t8, 0x18($v0)
/* 0044278C 8DEF0000 */  lw    $t7, ($t7)
/* 00442790 ADF80018 */  sw    $t8, 0x18($t7)
/* 00442794 8C500018 */  lw    $s0, 0x18($v0)
/* 00442798 12000018 */  beqz  $s0, .L004427FC
/* 0044279C 00000000 */   nop   
/* 004427A0 8F948954 */  lw     $s4, %got(perm_heap)($gp)
.L004427A4:
/* 004427A4 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 004427A8 24040008 */  li    $a0, 8
/* 004427AC 02802825 */  move  $a1, $s4
/* 004427B0 0320F809 */  jalr  $t9
/* 004427B4 00000000 */   nop   
/* 004427B8 14400005 */  bnez  $v0, .L004427D0
/* 004427BC 8FBC0034 */   lw    $gp, 0x34($sp)
/* 004427C0 8F818B20 */  lw     $at, %got(outofmem)($gp)
/* 004427C4 24190001 */  li    $t9, 1
/* 004427C8 100007E9 */  b     .L00444770
/* 004427CC A0390000 */   sb    $t9, ($at)
.L004427D0:
/* 004427D0 8F8D89B4 */  lw     $t5, %got(curgraphnode)($gp)
/* 004427D4 8DAD0000 */  lw    $t5, ($t5)
/* 004427D8 AC4D0000 */  sw    $t5, ($v0)
/* 004427DC 8E0C0000 */  lw    $t4, ($s0)
/* 004427E0 8D8E0014 */  lw    $t6, 0x14($t4)
/* 004427E4 AC4E0004 */  sw    $t6, 4($v0)
/* 004427E8 8E0B0000 */  lw    $t3, ($s0)
/* 004427EC AD620014 */  sw    $v0, 0x14($t3)
/* 004427F0 8E100004 */  lw    $s0, 4($s0)
/* 004427F4 1600FFEB */  bnez  $s0, .L004427A4
/* 004427F8 00000000 */   nop   
.L004427FC:
/* 004427FC 8F948954 */  lw     $s4, %got(perm_heap)($gp)
/* 00442800 AE600018 */  sw    $zero, 0x18($s3)
/* 00442804 10000021 */  b     .L0044288C
/* 00442808 8F9689B0 */   lw     $s6, %got(graphtail)($gp)
.L0044280C:
/* 0044280C 8F9982D0 */  lw    $t9, %call16(appendgraph)($gp)
/* 00442810 0320F809 */  jalr  $t9
/* 00442814 00000000 */   nop   
/* 00442818 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0044281C 8F8A8B20 */  lw     $t2, %got(outofmem)($gp)
/* 00442820 914A0000 */  lbu   $t2, ($t2)
/* 00442824 554007D3 */  bnezl $t2, .L00444774
/* 00442828 8FBF003C */   lw    $ra, 0x3c($sp)
/* 0044282C 8F9689B0 */  lw     $s6, %got(graphtail)($gp)
/* 00442830 8FD80004 */  lw    $t8, 4($fp)
/* 00442834 8F948954 */  lw     $s4, %got(perm_heap)($gp)
/* 00442838 8ECF0000 */  lw    $t7, ($s6)
/* 0044283C 24040008 */  li    $a0, 8
/* 00442840 02802825 */  move  $a1, $s4
/* 00442844 ADF80000 */  sw    $t8, ($t7)
/* 00442848 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 0044284C 0320F809 */  jalr  $t9
/* 00442850 00000000 */   nop   
/* 00442854 8EC40000 */  lw    $a0, ($s6)
/* 00442858 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0044285C 14400005 */  bnez  $v0, .L00442874
/* 00442860 AC820014 */   sw    $v0, 0x14($a0)
/* 00442864 8F818B20 */  lw     $at, %got(outofmem)($gp)
/* 00442868 24190001 */  li    $t9, 1
/* 0044286C 100007C0 */  b     .L00444770
/* 00442870 A0390000 */   sb    $t9, ($at)
.L00442874:
/* 00442874 8C8D0014 */  lw    $t5, 0x14($a0)
/* 00442878 8F8C89B4 */  lw     $t4, %got(curgraphnode)($gp)
/* 0044287C ADA00004 */  sw    $zero, 4($t5)
/* 00442880 8C8E0014 */  lw    $t6, 0x14($a0)
/* 00442884 8D8C0000 */  lw    $t4, ($t4)
/* 00442888 ADCC0000 */  sw    $t4, ($t6)
.L0044288C:
/* 0044288C 8F9982C4 */  lw    $t9, %call16(ingraph)($gp)
/* 00442890 8FC40008 */  lw    $a0, 8($fp)
/* 00442894 0320F809 */  jalr  $t9
/* 00442898 00000000 */   nop   
/* 0044289C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004428A0 1440000C */  bnez  $v0, .L004428D4
/* 004428A4 00409825 */   move  $s3, $v0
/* 004428A8 8F9982D0 */  lw    $t9, %call16(appendgraph)($gp)
/* 004428AC 0320F809 */  jalr  $t9
/* 004428B0 00000000 */   nop   
/* 004428B4 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004428B8 8F8B8B20 */  lw     $t3, %got(outofmem)($gp)
/* 004428BC 916B0000 */  lbu   $t3, ($t3)
/* 004428C0 556007AC */  bnezl $t3, .L00444774
/* 004428C4 8FBF003C */   lw    $ra, 0x3c($sp)
/* 004428C8 8ED30000 */  lw    $s3, ($s6)
/* 004428CC 8FCA0008 */  lw    $t2, 8($fp)
/* 004428D0 AE6A0000 */  sw    $t2, ($s3)
.L004428D4:
/* 004428D4 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 004428D8 24040008 */  li    $a0, 8
/* 004428DC 02802825 */  move  $a1, $s4
/* 004428E0 0320F809 */  jalr  $t9
/* 004428E4 00000000 */   nop   
/* 004428E8 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004428EC 14400005 */  bnez  $v0, .L00442904
/* 004428F0 00408025 */   move  $s0, $v0
/* 004428F4 8F818B20 */  lw     $at, %got(outofmem)($gp)
/* 004428F8 24180001 */  li    $t8, 1
/* 004428FC 1000079C */  b     .L00444770
/* 00442900 A0380000 */   sb    $t8, ($at)
.L00442904:
/* 00442904 8F8F89B4 */  lw     $t7, %got(curgraphnode)($gp)
/* 00442908 24040008 */  li    $a0, 8
/* 0044290C 02802825 */  move  $a1, $s4
/* 00442910 8DEF0000 */  lw    $t7, ($t7)
/* 00442914 AE0F0000 */  sw    $t7, ($s0)
/* 00442918 8E790014 */  lw    $t9, 0x14($s3)
/* 0044291C AE190004 */  sw    $t9, 4($s0)
/* 00442920 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 00442924 AE700014 */  sw    $s0, 0x14($s3)
/* 00442928 0320F809 */  jalr  $t9
/* 0044292C 00000000 */   nop   
/* 00442930 14400005 */  bnez  $v0, .L00442948
/* 00442934 8FBC0034 */   lw    $gp, 0x34($sp)
/* 00442938 8F818B20 */  lw     $at, %got(outofmem)($gp)
/* 0044293C 240D0001 */  li    $t5, 1
/* 00442940 1000078B */  b     .L00444770
/* 00442944 A02D0000 */   sb    $t5, ($at)
.L00442948:
/* 00442948 8F8589B4 */  lw     $a1, %got(curgraphnode)($gp)
/* 0044294C AC530000 */  sw    $s3, ($v0)
/* 00442950 8F868A48 */  lw     $a2, %got(loc_not_yet_seen)($gp)
/* 00442954 8CA50000 */  lw    $a1, ($a1)
/* 00442958 8F908A44 */  lw     $s0, %got(curlocln)($gp)
/* 0044295C 8CAC0018 */  lw    $t4, 0x18($a1)
/* 00442960 AC4C0004 */  sw    $t4, 4($v0)
/* 00442964 A0C00000 */  sb    $zero, ($a2)
/* 00442968 ACA20018 */  sw    $v0, 0x18($a1)
/* 0044296C 10000780 */  b     .L00444770
/* 00442970 AE000000 */   sw    $zero, ($s0)
.L00442974:
/* 00442974 8F998658 */  lw    $t9, %call16(extendstat)($gp)
/* 00442978 24040031 */  li    $a0, 49
/* 0044297C 0320F809 */  jalr  $t9
/* 00442980 00000000 */   nop   
/* 00442984 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00442988 8F8E8B20 */  lw     $t6, %got(outofmem)($gp)
/* 0044298C 91CE0000 */  lbu   $t6, ($t6)
/* 00442990 55C00778 */  bnezl $t6, .L00444774
/* 00442994 8FBF003C */   lw    $ra, 0x3c($sp)
/* 00442998 8F998024 */  lw    $t9, %got(func_0043B1DC)($gp)
/* 0044299C 27A20110 */  addiu $v0, $sp, 0x110
/* 004429A0 2739B1DC */  addiu $t9, %lo(func_0043B1DC) # addiu $t9, $t9, -0x4e24
/* 004429A4 0320F809 */  jalr  $t9
/* 004429A8 00000000 */   nop   
/* 004429AC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004429B0 27A20110 */  addiu $v0, $sp, 0x110
/* 004429B4 8F938964 */  lw     $s3, %got(ustack)($gp)
/* 004429B8 8F8A89C4 */  lw     $t2, %got(stattail)($gp)
/* 004429BC 8F8F8B6C */  lw     $t7, %got(curproc)($gp)
/* 004429C0 8E730000 */  lw    $s3, ($s3)
/* 004429C4 8D4A0000 */  lw    $t2, ($t2)
/* 004429C8 8F818964 */  lw     $at, %got(ustack)($gp)
/* 004429CC 8E6B0000 */  lw    $t3, ($s3)
/* 004429D0 8F998024 */  lw    $t9, %got(func_0043CA8C)($gp)
/* 004429D4 AD4B0004 */  sw    $t3, 4($t2)
/* 004429D8 8E78000C */  lw    $t8, 0xc($s3)
/* 004429DC 8DEF0000 */  lw    $t7, ($t7)
/* 004429E0 2739CA8C */  addiu $t9, %lo(func_0043CA8C) # addiu $t9, $t9, -0x3574
/* 004429E4 AC380000 */  sw    $t8, ($at)
/* 004429E8 0320F809 */  jalr  $t9
/* 004429EC 8DE4001C */   lw    $a0, 0x1c($t7)
/* 004429F0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004429F4 8F868A48 */  lw     $a2, %got(loc_not_yet_seen)($gp)
/* 004429F8 8F908A44 */  lw     $s0, %got(curlocln)($gp)
/* 004429FC A0C00000 */  sb    $zero, ($a2)
/* 00442A00 1000075B */  b     .L00444770
/* 00442A04 AE000000 */   sw    $zero, ($s0)
.L00442A08:
/* 00442A08 8F998658 */  lw    $t9, %call16(extendstat)($gp)
/* 00442A0C 2404005C */  li    $a0, 92
/* 00442A10 0320F809 */  jalr  $t9
/* 00442A14 00000000 */   nop   
/* 00442A18 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00442A1C 240C0001 */  li    $t4, 1
/* 00442A20 240EFFFF */  li    $t6, -1
/* 00442A24 8F998B20 */  lw     $t9, %got(outofmem)($gp)
/* 00442A28 93390000 */  lbu   $t9, ($t9)
/* 00442A2C 57200751 */  bnezl $t9, .L00444774
/* 00442A30 8FBF003C */   lw    $ra, 0x3c($sp)
/* 00442A34 8F9489C4 */  lw     $s4, %got(stattail)($gp)
/* 00442A38 8F958A34 */  lw     $s5, %got(curmst)($gp)
/* 00442A3C 97CD0002 */  lhu   $t5, 2($fp)
/* 00442A40 8E940000 */  lw    $s4, ($s4)
/* 00442A44 8F818C3C */  lw     $at, %got(passbyfp)($gp)
/* 00442A48 8F918C38 */  lw     $s1, %got(parcount)($gp)
/* 00442A4C AE8D0014 */  sw    $t5, 0x14($s4)
/* 00442A50 AEB40000 */  sw    $s4, ($s5)
/* 00442A54 A02C0000 */  sb    $t4, ($at)
/* 00442A58 8F818C44 */  lw     $at, %got(outparhead)($gp)
/* 00442A5C AE800018 */  sw    $zero, 0x18($s4)
/* 00442A60 AE8E001C */  sw    $t6, 0x1c($s4)
/* 00442A64 AC200000 */  sw    $zero, ($at)
/* 00442A68 10000741 */  b     .L00444770
/* 00442A6C AE200000 */   sw    $zero, ($s1)
.L00442A70:
/* 00442A70 8F998658 */  lw    $t9, %call16(extendstat)($gp)
/* 00442A74 00E02025 */  move  $a0, $a3
/* 00442A78 0320F809 */  jalr  $t9
/* 00442A7C 00000000 */   nop   
/* 00442A80 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00442A84 8F8B8B20 */  lw     $t3, %got(outofmem)($gp)
/* 00442A88 916B0000 */  lbu   $t3, ($t3)
/* 00442A8C 55600739 */  bnezl $t3, .L00444774
/* 00442A90 8FBF003C */   lw    $ra, 0x3c($sp)
/* 00442A94 93C70000 */  lbu   $a3, ($fp)
/* 00442A98 24110064 */  li    $s1, 100
/* 00442A9C 16270008 */  bne   $s1, $a3, .L00442AC0
/* 00442AA0 00000000 */   nop   
/* 00442AA4 8F998024 */  lw    $t9, %got(func_0043B1DC)($gp)
/* 00442AA8 27A20110 */  addiu $v0, $sp, 0x110
/* 00442AAC 2739B1DC */  addiu $t9, %lo(func_0043B1DC) # addiu $t9, $t9, -0x4e24
/* 00442AB0 0320F809 */  jalr  $t9
/* 00442AB4 00000000 */   nop   
/* 00442AB8 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00442ABC 93C70000 */  lbu   $a3, ($fp)
.L00442AC0:
/* 00442AC0 8F828964 */  lw     $v0, %got(ustack)($gp)
/* 00442AC4 8F9489C4 */  lw     $s4, %got(stattail)($gp)
/* 00442AC8 93CF0001 */  lbu   $t7, 1($fp)
/* 00442ACC 8C530000 */  lw    $s3, ($v0)
/* 00442AD0 8E940000 */  lw    $s4, ($s4)
/* 00442AD4 31F9001F */  andi  $t9, $t7, 0x1f
/* 00442AD8 8E6A0000 */  lw    $t2, ($s3)
/* 00442ADC 02808025 */  move  $s0, $s4
/* 00442AE0 AE8A0004 */  sw    $t2, 4($s4)
/* 00442AE4 8E78000C */  lw    $t8, 0xc($s3)
/* 00442AE8 A2990014 */  sb    $t9, 0x14($s4)
/* 00442AEC 1627004D */  bne   $s1, $a3, .L00442C24
/* 00442AF0 AC580000 */   sw    $t8, ($v0)
/* 00442AF4 8F918C38 */  lw     $s1, %got(parcount)($gp)
/* 00442AF8 8FC3000C */  lw    $v1, 0xc($fp)
/* 00442AFC 8FC80008 */  lw    $t0, 8($fp)
/* 00442B00 8E2D0000 */  lw    $t5, ($s1)
/* 00442B04 AE83001C */  sw    $v1, 0x1c($s4)
/* 00442B08 A2880015 */  sb    $t0, 0x15($s4)
/* 00442B0C 25AC0001 */  addiu $t4, $t5, 1
/* 00442B10 29810003 */  slti  $at, $t4, 3
/* 00442B14 10200009 */  beqz  $at, .L00442B3C
/* 00442B18 AE2C0000 */   sw    $t4, ($s1)
/* 00442B1C 920B0014 */  lbu   $t3, 0x14($s0)
/* 00442B20 3C01000C */  lui   $at, 0xc
/* 00442B24 2D6A0020 */  sltiu $t2, $t3, 0x20
/* 00442B28 000AC023 */  negu  $t8, $t2
/* 00442B2C 03017824 */  and   $t7, $t8, $at
/* 00442B30 016FC804 */  sllv  $t9, $t7, $t3
/* 00442B34 07200003 */  bltz  $t9, .L00442B44
/* 00442B38 00000000 */   nop   
.L00442B3C:
/* 00442B3C 8F818C3C */  lw     $at, %got(passbyfp)($gp)
/* 00442B40 A0200000 */  sb    $zero, ($at)
.L00442B44:
/* 00442B44 8F848C3C */  lw     $a0, %got(passbyfp)($gp)
/* 00442B48 24090002 */  li    $t1, 2
/* 00442B4C 90840000 */  lbu   $a0, ($a0)
/* 00442B50 50800006 */  beql  $a0, $zero, .L00442B6C
/* 00442B54 92020014 */   lbu   $v0, 0x14($s0)
/* 00442B58 8F958A34 */  lw     $s5, %got(curmst)($gp)
/* 00442B5C 00686821 */  addu  $t5, $v1, $t0
/* 00442B60 8EAC0000 */  lw    $t4, ($s5)
/* 00442B64 AD8D0018 */  sw    $t5, 0x18($t4)
/* 00442B68 92020014 */  lbu   $v0, 0x14($s0)
.L00442B6C:
/* 00442B6C 1440000C */  bnez  $v0, .L00442BA0
/* 00442B70 00000000 */   nop   
/* 00442B74 8F998378 */  lw    $t9, %call16(findbaseaddr)($gp)
/* 00442B78 8E040004 */  lw    $a0, 4($s0)
/* 00442B7C 0320F809 */  jalr  $t9
/* 00442B80 00000000 */   nop   
/* 00442B84 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00442B88 AE020020 */  sw    $v0, 0x20($s0)
/* 00442B8C 8F9489C4 */  lw     $s4, %got(stattail)($gp)
/* 00442B90 8F848C3C */  lw     $a0, %got(passbyfp)($gp)
/* 00442B94 8E940000 */  lw    $s4, ($s4)
/* 00442B98 10000015 */  b     .L00442BF0
/* 00442B9C 90840000 */   lbu   $a0, ($a0)
.L00442BA0:
/* 00442BA0 15220004 */  bne   $t1, $v0, .L00442BB4
/* 00442BA4 00000000 */   nop   
/* 00442BA8 8E0E0004 */  lw    $t6, 4($s0)
/* 00442BAC 10000010 */  b     .L00442BF0
/* 00442BB0 AE0E0020 */   sw    $t6, 0x20($s0)
.L00442BB4:
/* 00442BB4 8F8A8A5C */  lw     $t2, %got(lang)($gp)
/* 00442BB8 24010003 */  li    $at, 3
/* 00442BBC 914A0000 */  lbu   $t2, ($t2)
/* 00442BC0 1541000B */  bne   $t2, $at, .L00442BF0
/* 00442BC4 00000000 */   nop   
/* 00442BC8 8F99837C */  lw    $t9, %call16(findbaseaddr_ada)($gp)
/* 00442BCC 8E040004 */  lw    $a0, 4($s0)
/* 00442BD0 0320F809 */  jalr  $t9
/* 00442BD4 00000000 */   nop   
/* 00442BD8 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00442BDC AE020020 */  sw    $v0, 0x20($s0)
/* 00442BE0 8F9489C4 */  lw     $s4, %got(stattail)($gp)
/* 00442BE4 8F848C3C */  lw     $a0, %got(passbyfp)($gp)
/* 00442BE8 8E940000 */  lw    $s4, ($s4)
/* 00442BEC 90840000 */  lbu   $a0, ($a0)
.L00442BF0:
/* 00442BF0 50800005 */  beql  $a0, $zero, .L00442C08
/* 00442BF4 8FCF000C */   lw    $t7, 0xc($fp)
/* 00442BF8 8E380000 */  lw    $t8, ($s1)
/* 00442BFC 10000011 */  b     .L00442C44
/* 00442C00 AE180018 */   sw    $t8, 0x18($s0)
/* 00442C04 8FCF000C */  lw    $t7, 0xc($fp)
.L00442C08:
/* 00442C08 05E10003 */  bgez  $t7, .L00442C18
/* 00442C0C 000F5883 */   sra   $t3, $t7, 2
/* 00442C10 25E10003 */  addiu $at, $t7, 3
/* 00442C14 00015883 */  sra   $t3, $at, 2
.L00442C18:
/* 00442C18 25790001 */  addiu $t9, $t3, 1
/* 00442C1C 10000009 */  b     .L00442C44
/* 00442C20 AE190018 */   sw    $t9, 0x18($s0)
.L00442C24:
/* 00442C24 8F998378 */  lw    $t9, %call16(findbaseaddr)($gp)
/* 00442C28 8E040004 */  lw    $a0, 4($s0)
/* 00442C2C 0320F809 */  jalr  $t9
/* 00442C30 00000000 */   nop   
/* 00442C34 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00442C38 AE020020 */  sw    $v0, 0x20($s0)
/* 00442C3C 8F9489C4 */  lw     $s4, %got(stattail)($gp)
/* 00442C40 8E940000 */  lw    $s4, ($s4)
.L00442C44:
/* 00442C44 8F998024 */  lw    $t9, %got(func_0043B2B8)($gp)
/* 00442C48 02802025 */  move  $a0, $s4
/* 00442C4C 27A20110 */  addiu $v0, $sp, 0x110
/* 00442C50 2739B2B8 */  addiu $t9, %lo(func_0043B2B8) # addiu $t9, $t9, -0x4d48
/* 00442C54 0320F809 */  jalr  $t9
/* 00442C58 00000000 */   nop   
/* 00442C5C 100006C4 */  b     .L00444770
/* 00442C60 8FBC0034 */   lw    $gp, 0x34($sp)
.L00442C64:
/* 00442C64 8F998658 */  lw    $t9, %call16(extendstat)($gp)
/* 00442C68 24040066 */  li    $a0, 102
/* 00442C6C 0320F809 */  jalr  $t9
/* 00442C70 00000000 */   nop   
/* 00442C74 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00442C78 8F8D8B20 */  lw     $t5, %got(outofmem)($gp)
/* 00442C7C 91AD0000 */  lbu   $t5, ($t5)
/* 00442C80 55A006BC */  bnezl $t5, .L00444774
/* 00442C84 8FBF003C */   lw    $ra, 0x3c($sp)
/* 00442C88 8F998024 */  lw    $t9, %got(func_0043B1DC)($gp)
/* 00442C8C 27A20110 */  addiu $v0, $sp, 0x110
/* 00442C90 2739B1DC */  addiu $t9, %lo(func_0043B1DC) # addiu $t9, $t9, -0x4e24
/* 00442C94 0320F809 */  jalr  $t9
/* 00442C98 00000000 */   nop   
/* 00442C9C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00442CA0 8F938964 */  lw     $s3, %got(ustack)($gp)
/* 00442CA4 8F9489C4 */  lw     $s4, %got(stattail)($gp)
/* 00442CA8 8F818964 */  lw     $at, %got(ustack)($gp)
/* 00442CAC 8E730000 */  lw    $s3, ($s3)
/* 00442CB0 8E900000 */  lw    $s0, ($s4)
/* 00442CB4 8E6C0000 */  lw    $t4, ($s3)
/* 00442CB8 AE0C0004 */  sw    $t4, 4($s0)
/* 00442CBC 8E6E000C */  lw    $t6, 0xc($s3)
/* 00442CC0 AC2E0000 */  sw    $t6, ($at)
/* 00442CC4 8FCA000C */  lw    $t2, 0xc($fp)
/* 00442CC8 8E040004 */  lw    $a0, 4($s0)
/* 00442CCC A60A0030 */  sh    $t2, 0x30($s0)
/* 00442CD0 8FD80008 */  lw    $t8, 8($fp)
/* 00442CD4 AE180020 */  sw    $t8, 0x20($s0)
/* 00442CD8 97CF0002 */  lhu   $t7, 2($fp)
/* 00442CDC A20F0032 */  sb    $t7, 0x32($s0)
/* 00442CE0 8F998378 */  lw    $t9, %call16(findbaseaddr)($gp)
/* 00442CE4 0320F809 */  jalr  $t9
/* 00442CE8 00000000 */   nop   
/* 00442CEC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00442CF0 AE02002C */  sw    $v0, 0x2c($s0)
/* 00442CF4 8F998318 */  lw    $t9, %call16(appendstorelist)($gp)
/* 00442CF8 8F818C3C */  lw     $at, %got(passbyfp)($gp)
/* 00442CFC 0320F809 */  jalr  $t9
/* 00442D00 A0200000 */   sb    $zero, ($at)
/* 00442D04 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00442D08 240B0003 */  li    $t3, 3
/* 00442D0C 8F9489C4 */  lw     $s4, %got(stattail)($gp)
/* 00442D10 8E840000 */  lw    $a0, ($s4)
/* 00442D14 8C990018 */  lw    $t9, 0x18($a0)
/* 00442D18 A32B0009 */  sb    $t3, 9($t9)
/* 00442D1C 8F998398 */  lw    $t9, %call16(movkillprev)($gp)
/* 00442D20 0320F809 */  jalr  $t9
/* 00442D24 00000000 */   nop   
/* 00442D28 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00442D2C 27A20110 */  addiu $v0, $sp, 0x110
/* 00442D30 8F998024 */  lw    $t9, %got(func_0043B2B8)($gp)
/* 00442D34 8F8489C4 */  lw     $a0, %got(stattail)($gp)
/* 00442D38 2739B2B8 */  addiu $t9, %lo(func_0043B2B8) # addiu $t9, $t9, -0x4d48
/* 00442D3C 0320F809 */  jalr  $t9
/* 00442D40 8C840000 */   lw    $a0, ($a0)
/* 00442D44 1000068A */  b     .L00444770
/* 00442D48 8FBC0034 */   lw    $gp, 0x34($sp)
.L00442D4C:
/* 00442D4C 8F998024 */  lw    $t9, %got(func_0043B1DC)($gp)
/* 00442D50 8F868A48 */  lw     $a2, %got(loc_not_yet_seen)($gp)
/* 00442D54 27A20110 */  addiu $v0, $sp, 0x110
/* 00442D58 2739B1DC */  addiu $t9, %lo(func_0043B1DC) # addiu $t9, $t9, -0x4e24
/* 00442D5C 0320F809 */  jalr  $t9
/* 00442D60 A0C00000 */   sb    $zero, ($a2)
/* 00442D64 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00442D68 24010004 */  li    $at, 4
/* 00442D6C 8F938964 */  lw     $s3, %got(ustack)($gp)
/* 00442D70 8E730000 */  lw    $s3, ($s3)
/* 00442D74 8E710000 */  lw    $s1, ($s3)
/* 00442D78 922D0000 */  lbu   $t5, ($s1)
/* 00442D7C 55A10017 */  bnel  $t5, $at, .L00442DDC
/* 00442D80 93CD0000 */   lbu   $t5, ($fp)
/* 00442D84 922C0020 */  lbu   $t4, 0x20($s1)
/* 00442D88 24010019 */  li    $at, 25
/* 00442D8C 55810013 */  bnel  $t4, $at, .L00442DDC
/* 00442D90 93CD0000 */   lbu   $t5, ($fp)
/* 00442D94 8FCA0008 */  lw    $t2, 8($fp)
/* 00442D98 8E2E002C */  lw    $t6, 0x2c($s1)
/* 00442D9C 000AC0C0 */  sll   $t8, $t2, 3
/* 00442DA0 01D8082A */  slt   $at, $t6, $t8
/* 00442DA4 5420000D */  bnezl $at, .L00442DDC
/* 00442DA8 93CD0000 */   lbu   $t5, ($fp)
/* 00442DAC 8E360024 */  lw    $s6, 0x24($s1)
/* 00442DB0 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 00442DB4 96CF0006 */  lhu   $t7, 6($s6)
/* 00442DB8 25EB0001 */  addiu $t3, $t7, 1
/* 00442DBC A6CB0006 */  sh    $t3, 6($s6)
/* 00442DC0 0320F809 */  jalr  $t9
/* 00442DC4 8E640000 */   lw    $a0, ($s3)
/* 00442DC8 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00442DCC 8F998964 */  lw     $t9, %got(ustack)($gp)
/* 00442DD0 8F390000 */  lw    $t9, ($t9)
/* 00442DD4 AF360000 */  sw    $s6, ($t9)
/* 00442DD8 93CD0000 */  lbu   $t5, ($fp)
.L00442DDC:
/* 00442DDC 2401003F */  li    $at, 63
/* 00442DE0 00009025 */  move  $s2, $zero
/* 00442DE4 15A1004D */  bne   $t5, $at, .L00442F1C
/* 00442DE8 00000000 */   nop   
/* 00442DEC 8F8C89B4 */  lw     $t4, %got(curgraphnode)($gp)
/* 00442DF0 8D8C0000 */  lw    $t4, ($t4)
/* 00442DF4 8D90001C */  lw    $s0, 0x1c($t4)
/* 00442DF8 12000048 */  beqz  $s0, .L00442F1C
/* 00442DFC 00000000 */   nop   
/* 00442E00 24140060 */  li    $s4, 96
/* 00442E04 920A0000 */  lbu   $t2, ($s0)
.L00442E08:
/* 00442E08 2401003F */  li    $at, 63
/* 00442E0C 5541003F */  bnel  $t2, $at, .L00442F0C
/* 00442E10 8E100008 */   lw    $s0, 8($s0)
/* 00442E14 8F938964 */  lw     $s3, %got(ustack)($gp)
/* 00442E18 8E040004 */  lw    $a0, 4($s0)
/* 00442E1C 8E730000 */  lw    $s3, ($s3)
/* 00442E20 8E65000C */  lw    $a1, 0xc($s3)
/* 00442E24 8CAE0000 */  lw    $t6, ($a1)
/* 00442E28 55C40038 */  bnel  $t6, $a0, .L00442F0C
/* 00442E2C 8E100008 */   lw    $s0, 8($s0)
/* 00442E30 8FD80004 */  lw    $t8, 4($fp)
/* 00442E34 8CAF0004 */  lw    $t7, 4($a1)
/* 00442E38 8E190030 */  lw    $t9, 0x30($s0)
/* 00442E3C 030F5821 */  addu  $t3, $t8, $t7
/* 00442E40 55790032 */  bnel  $t3, $t9, .L00442F0C
/* 00442E44 8E100008 */   lw    $s0, 8($s0)
/* 00442E48 8FCD0008 */  lw    $t5, 8($fp)
/* 00442E4C 8E0C0020 */  lw    $t4, 0x20($s0)
/* 00442E50 55AC002E */  bnel  $t5, $t4, .L00442F0C
/* 00442E54 8E100008 */   lw    $s0, 8($s0)
/* 00442E58 920A001D */  lbu   $t2, 0x1d($s0)
/* 00442E5C 5140000F */  beql  $t2, $zero, .L00442E9C
/* 00442E60 9218001F */   lbu   $t8, 0x1f($s0)
/* 00442E64 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 00442E68 0320F809 */  jalr  $t9
/* 00442E6C 00000000 */   nop   
/* 00442E70 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00442E74 8E040014 */  lw    $a0, 0x14($s0)
/* 00442E78 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 00442E7C 0320F809 */  jalr  $t9
/* 00442E80 00000000 */   nop   
/* 00442E84 8E0E0018 */  lw    $t6, 0x18($s0)
/* 00442E88 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00442E8C A2140000 */  sb    $s4, ($s0)
/* 00442E90 1000001D */  b     .L00442F08
/* 00442E94 A1C00009 */   sb    $zero, 9($t6)
/* 00442E98 9218001F */  lbu   $t8, 0x1f($s0)
.L00442E9C:
/* 00442E9C 5300001B */  beql  $t8, $zero, .L00442F0C
/* 00442EA0 8E100008 */   lw    $s0, 8($s0)
/* 00442EA4 8E710000 */  lw    $s1, ($s3)
/* 00442EA8 8E0F0014 */  lw    $t7, 0x14($s0)
/* 00442EAC 562F0017 */  bnel  $s1, $t7, .L00442F0C
/* 00442EB0 8E100008 */   lw    $s0, 8($s0)
/* 00442EB4 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 00442EB8 24120001 */  li    $s2, 1
/* 00442EBC 02202025 */  move  $a0, $s1
/* 00442EC0 0320F809 */  jalr  $t9
/* 00442EC4 00000000 */   nop   
/* 00442EC8 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00442ECC 8F8B8964 */  lw     $t3, %got(ustack)($gp)
/* 00442ED0 8F818964 */  lw     $at, %got(ustack)($gp)
/* 00442ED4 8D6B0000 */  lw    $t3, ($t3)
/* 00442ED8 8D79000C */  lw    $t9, 0xc($t3)
/* 00442EDC AC390000 */  sw    $t9, ($at)
/* 00442EE0 8F240000 */  lw    $a0, ($t9)
/* 00442EE4 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 00442EE8 0320F809 */  jalr  $t9
/* 00442EEC 00000000 */   nop   
/* 00442EF0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00442EF4 8F8D8964 */  lw     $t5, %got(ustack)($gp)
/* 00442EF8 8F818964 */  lw     $at, %got(ustack)($gp)
/* 00442EFC 8DAD0000 */  lw    $t5, ($t5)
/* 00442F00 8DAC000C */  lw    $t4, 0xc($t5)
/* 00442F04 AC2C0000 */  sw    $t4, ($at)
.L00442F08:
/* 00442F08 8E100008 */  lw    $s0, 8($s0)
.L00442F0C:
/* 00442F0C 12000003 */  beqz  $s0, .L00442F1C
/* 00442F10 00000000 */   nop   
/* 00442F14 5240FFBC */  beql  $s2, $zero, .L00442E08
/* 00442F18 920A0000 */   lbu   $t2, ($s0)
.L00442F1C:
/* 00442F1C 56400615 */  bnezl $s2, .L00444774
/* 00442F20 8FBF003C */   lw    $ra, 0x3c($sp)
/* 00442F24 8F998658 */  lw    $t9, %call16(extendstat)($gp)
/* 00442F28 93C40000 */  lbu   $a0, ($fp)
/* 00442F2C 0320F809 */  jalr  $t9
/* 00442F30 00000000 */   nop   
/* 00442F34 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00442F38 8F8A8B20 */  lw     $t2, %got(outofmem)($gp)
/* 00442F3C 914A0000 */  lbu   $t2, ($t2)
/* 00442F40 5540060C */  bnezl $t2, .L00444774
/* 00442F44 8FBF003C */   lw    $ra, 0x3c($sp)
/* 00442F48 8F9089C4 */  lw     $s0, %got(stattail)($gp)
/* 00442F4C 97CF0002 */  lhu   $t7, 2($fp)
/* 00442F50 93CE0001 */  lbu   $t6, 1($fp)
/* 00442F54 8E100000 */  lw    $s0, ($s0)
/* 00442F58 000F58C2 */  srl   $t3, $t7, 3
/* 00442F5C 000BC8C0 */  sll   $t9, $t3, 3
/* 00442F60 332D00FF */  andi  $t5, $t9, 0xff
/* 00442F64 31D8001F */  andi  $t8, $t6, 0x1f
/* 00442F68 A218002C */  sb    $t8, 0x2c($s0)
/* 00442F6C 15A00004 */  bnez  $t5, .L00442F80
/* 00442F70 A219002D */   sb    $t9, 0x2d($s0)
/* 00442F74 8FCC0008 */  lw    $t4, 8($fp)
/* 00442F78 000C50C0 */  sll   $t2, $t4, 3
/* 00442F7C A20A002D */  sb    $t2, 0x2d($s0)
.L00442F80:
/* 00442F80 8F938964 */  lw     $s3, %got(ustack)($gp)
/* 00442F84 24090002 */  li    $t1, 2
/* 00442F88 8E730000 */  lw    $s3, ($s3)
/* 00442F8C 8E6E000C */  lw    $t6, 0xc($s3)
/* 00442F90 8DC30000 */  lw    $v1, ($t6)
/* 00442F94 90620000 */  lbu   $v0, ($v1)
/* 00442F98 55220026 */  bnel  $t1, $v0, .L00443034
/* 00442F9C 24010001 */   li    $at, 1
/* 00442FA0 920F002D */  lbu   $t7, 0x2d($s0)
/* 00442FA4 8C780020 */  lw    $t8, 0x20($v1)
/* 00442FA8 24040008 */  li    $a0, 8
/* 00442FAC 000F58C2 */  srl   $t3, $t7, 3
/* 00442FB0 030B001A */  div   $zero, $t8, $t3
/* 00442FB4 0000C810 */  mfhi  $t9
/* 00442FB8 15600002 */  bnez  $t3, .L00442FC4
/* 00442FBC 00000000 */   nop   
/* 00442FC0 0007000D */  break 7
.L00442FC4:
/* 00442FC4 2401FFFF */  li    $at, -1
/* 00442FC8 15610004 */  bne   $t3, $at, .L00442FDC
/* 00442FCC 3C018000 */   lui   $at, 0x8000
/* 00442FD0 17010002 */  bne   $t8, $at, .L00442FDC
/* 00442FD4 00000000 */   nop   
/* 00442FD8 0006000D */  break 6
.L00442FDC:
/* 00442FDC 5320003A */  beql  $t9, $zero, .L004430C8
/* 00442FE0 8FCD000C */   lw    $t5, 0xc($fp)
/* 00442FE4 A204002D */  sb    $a0, 0x2d($s0)
/* 00442FE8 8E6D000C */  lw    $t5, 0xc($s3)
/* 00442FEC 8DAC0000 */  lw    $t4, ($t5)
/* 00442FF0 8D920020 */  lw    $s2, 0x20($t4)
/* 00442FF4 324A0001 */  andi  $t2, $s2, 1
/* 00442FF8 55400033 */  bnezl $t2, .L004430C8
/* 00442FFC 8FCD000C */   lw    $t5, 0xc($fp)
/* 00443000 920E002D */  lbu   $t6, 0x2d($s0)
.L00443004:
/* 00443004 000E7840 */  sll   $t7, $t6, 1
/* 00443008 A20F002D */  sb    $t7, 0x2d($s0)
/* 0044300C 06410002 */  bgez  $s2, .L00443018
/* 00443010 02400821 */   move  $at, $s2
/* 00443014 26410001 */  addiu $at, $s2, 1
.L00443018:
/* 00443018 00019043 */  sra   $s2, $at, 1
/* 0044301C 32580001 */  andi  $t8, $s2, 1
/* 00443020 5300FFF8 */  beql  $t8, $zero, .L00443004
/* 00443024 920E002D */   lbu   $t6, 0x2d($s0)
/* 00443028 10000027 */  b     .L004430C8
/* 0044302C 8FCD000C */   lw    $t5, 0xc($fp)
/* 00443030 24010001 */  li    $at, 1
.L00443034:
/* 00443034 54410024 */  bnel  $v0, $at, .L004430C8
/* 00443038 8FCD000C */   lw    $t5, 0xc($fp)
/* 0044303C 9219002D */  lbu   $t9, 0x2d($s0)
/* 00443040 8C6B002C */  lw    $t3, 0x2c($v1)
/* 00443044 24040008 */  li    $a0, 8
/* 00443048 001968C2 */  srl   $t5, $t9, 3
/* 0044304C 016D001A */  div   $zero, $t3, $t5
/* 00443050 00006010 */  mfhi  $t4
/* 00443054 15A00002 */  bnez  $t5, .L00443060
/* 00443058 00000000 */   nop   
/* 0044305C 0007000D */  break 7
.L00443060:
/* 00443060 2401FFFF */  li    $at, -1
/* 00443064 15A10004 */  bne   $t5, $at, .L00443078
/* 00443068 3C018000 */   lui   $at, 0x8000
/* 0044306C 15610002 */  bne   $t3, $at, .L00443078
/* 00443070 00000000 */   nop   
/* 00443074 0006000D */  break 6
.L00443078:
/* 00443078 51800013 */  beql  $t4, $zero, .L004430C8
/* 0044307C 8FCD000C */   lw    $t5, 0xc($fp)
/* 00443080 A204002D */  sb    $a0, 0x2d($s0)
/* 00443084 8E6A000C */  lw    $t2, 0xc($s3)
/* 00443088 8D4E0000 */  lw    $t6, ($t2)
/* 0044308C 8DD2002C */  lw    $s2, 0x2c($t6)
/* 00443090 324F0001 */  andi  $t7, $s2, 1
/* 00443094 55E0000C */  bnezl $t7, .L004430C8
/* 00443098 8FCD000C */   lw    $t5, 0xc($fp)
/* 0044309C 9218002D */  lbu   $t8, 0x2d($s0)
.L004430A0:
/* 004430A0 0018C840 */  sll   $t9, $t8, 1
/* 004430A4 A219002D */  sb    $t9, 0x2d($s0)
/* 004430A8 06410002 */  bgez  $s2, .L004430B4
/* 004430AC 02400821 */   move  $at, $s2
/* 004430B0 26410001 */  addiu $at, $s2, 1
.L004430B4:
/* 004430B4 00019043 */  sra   $s2, $at, 1
/* 004430B8 324B0001 */  andi  $t3, $s2, 1
/* 004430BC 5160FFF8 */  beql  $t3, $zero, .L004430A0
/* 004430C0 9218002D */   lbu   $t8, 0x2d($s0)
/* 004430C4 8FCD000C */  lw    $t5, 0xc($fp)
.L004430C8:
/* 004430C8 8F998024 */  lw    $t9, %got(func_0043B23C)($gp)
/* 004430CC 8F818964 */  lw     $at, %got(ustack)($gp)
/* 004430D0 A60D002E */  sh    $t5, 0x2e($s0)
/* 004430D4 8E6C0000 */  lw    $t4, ($s3)
/* 004430D8 2739B23C */  addiu $t9, %lo(func_0043B23C) # addiu $t9, $t9, -0x4dc4
/* 004430DC 27A20110 */  addiu $v0, $sp, 0x110
/* 004430E0 AE0C0014 */  sw    $t4, 0x14($s0)
/* 004430E4 8E6A000C */  lw    $t2, 0xc($s3)
/* 004430E8 0320F809 */  jalr  $t9
/* 004430EC AC2A0000 */   sw    $t2, ($at)
/* 004430F0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004430F4 8F938964 */  lw     $s3, %got(ustack)($gp)
/* 004430F8 8F818964 */  lw     $at, %got(ustack)($gp)
/* 004430FC 8E730000 */  lw    $s3, ($s3)
/* 00443100 8E6E0000 */  lw    $t6, ($s3)
/* 00443104 AE0E0004 */  sw    $t6, 4($s0)
/* 00443108 8E6F000C */  lw    $t7, 0xc($s3)
/* 0044310C 8E740004 */  lw    $s4, 4($s3)
/* 00443110 AC2F0000 */  sw    $t7, ($at)
/* 00443114 8FD80004 */  lw    $t8, 4($fp)
/* 00443118 8FCB0008 */  lw    $t3, 8($fp)
/* 0044311C 8E040004 */  lw    $a0, 4($s0)
/* 00443120 0314C821 */  addu  $t9, $t8, $s4
/* 00443124 AE190030 */  sw    $t9, 0x30($s0)
/* 00443128 8F998378 */  lw    $t9, %call16(findbaseaddr)($gp)
/* 0044312C AE0B0020 */  sw    $t3, 0x20($s0)
/* 00443130 0320F809 */  jalr  $t9
/* 00443134 00000000 */   nop   
/* 00443138 93CD0000 */  lbu   $t5, ($fp)
/* 0044313C 2401003F */  li    $at, 63
/* 00443140 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00443144 15A1001A */  bne   $t5, $at, .L004431B0
/* 00443148 AE020024 */   sw    $v0, 0x24($s0)
/* 0044314C 8F8C89B4 */  lw     $t4, %got(curgraphnode)($gp)
/* 00443150 8F9983C8 */  lw    $t9, %call16(strlkilled)($gp)
/* 00443154 8F8489C4 */  lw     $a0, %got(stattail)($gp)
/* 00443158 8D8C0000 */  lw    $t4, ($t4)
/* 0044315C 8C840000 */  lw    $a0, ($a0)
/* 00443160 0320F809 */  jalr  $t9
/* 00443164 8D850024 */   lw    $a1, 0x24($t4)
/* 00443168 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0044316C 2C4A0001 */  sltiu $t2, $v0, 1
/* 00443170 240E0001 */  li    $t6, 1
/* 00443174 8F8F89B4 */  lw     $t7, %got(curgraphnode)($gp)
/* 00443178 8F9983CC */  lw    $t9, %call16(strskilled)($gp)
/* 0044317C A20A001C */  sb    $t2, 0x1c($s0)
/* 00443180 A20E001D */  sb    $t6, 0x1d($s0)
/* 00443184 8F8489C4 */  lw     $a0, %got(stattail)($gp)
/* 00443188 8DEF0000 */  lw    $t7, ($t7)
/* 0044318C 8C840000 */  lw    $a0, ($a0)
/* 00443190 0320F809 */  jalr  $t9
/* 00443194 8DE50024 */   lw    $a1, 0x24($t7)
/* 00443198 2C580001 */  sltiu $t8, $v0, 1
/* 0044319C 24190001 */  li    $t9, 1
/* 004431A0 A218001E */  sb    $t8, 0x1e($s0)
/* 004431A4 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004431A8 10000005 */  b     .L004431C0
/* 004431AC A219001F */   sb    $t9, 0x1f($s0)
.L004431B0:
/* 004431B0 A200001C */  sb    $zero, 0x1c($s0)
/* 004431B4 A200001D */  sb    $zero, 0x1d($s0)
/* 004431B8 A200001E */  sb    $zero, 0x1e($s0)
/* 004431BC A200001F */  sb    $zero, 0x1f($s0)
.L004431C0:
/* 004431C0 8F99839C */  lw    $t9, %call16(strkillprev)($gp)
/* 004431C4 8F8489C4 */  lw     $a0, %got(stattail)($gp)
/* 004431C8 0320F809 */  jalr  $t9
/* 004431CC 8C840000 */   lw    $a0, ($a0)
/* 004431D0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004431D4 8F998318 */  lw    $t9, %call16(appendstorelist)($gp)
/* 004431D8 0320F809 */  jalr  $t9
/* 004431DC 00000000 */   nop   
/* 004431E0 10000563 */  b     .L00444770
/* 004431E4 8FBC0034 */   lw    $gp, 0x34($sp)
.L004431E8:
/* 004431E8 8F998024 */  lw    $t9, %got(func_0043B1DC)($gp)
/* 004431EC 8F868A48 */  lw     $a2, %got(loc_not_yet_seen)($gp)
/* 004431F0 27A20110 */  addiu $v0, $sp, 0x110
/* 004431F4 2739B1DC */  addiu $t9, %lo(func_0043B1DC) # addiu $t9, $t9, -0x4e24
/* 004431F8 0320F809 */  jalr  $t9
/* 004431FC A0C00000 */   sb    $zero, ($a2)
/* 00443200 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00443204 24010004 */  li    $at, 4
/* 00443208 8F938964 */  lw     $s3, %got(ustack)($gp)
/* 0044320C 8E730000 */  lw    $s3, ($s3)
/* 00443210 8E710000 */  lw    $s1, ($s3)
/* 00443214 922B0000 */  lbu   $t3, ($s1)
/* 00443218 15610016 */  bne   $t3, $at, .L00443274
/* 0044321C 00000000 */   nop   
/* 00443220 922D0020 */  lbu   $t5, 0x20($s1)
/* 00443224 24010019 */  li    $at, 25
/* 00443228 15A10012 */  bne   $t5, $at, .L00443274
/* 0044322C 00000000 */   nop   
/* 00443230 8FCA0008 */  lw    $t2, 8($fp)
/* 00443234 8E2C002C */  lw    $t4, 0x2c($s1)
/* 00443238 000A70C0 */  sll   $t6, $t2, 3
/* 0044323C 018E082A */  slt   $at, $t4, $t6
/* 00443240 1420000C */  bnez  $at, .L00443274
/* 00443244 00000000 */   nop   
/* 00443248 8E360024 */  lw    $s6, 0x24($s1)
/* 0044324C 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 00443250 96CF0006 */  lhu   $t7, 6($s6)
/* 00443254 25F80001 */  addiu $t8, $t7, 1
/* 00443258 A6D80006 */  sh    $t8, 6($s6)
/* 0044325C 0320F809 */  jalr  $t9
/* 00443260 8E640000 */   lw    $a0, ($s3)
/* 00443264 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00443268 8F998964 */  lw     $t9, %got(ustack)($gp)
/* 0044326C 8F390000 */  lw    $t9, ($t9)
/* 00443270 AF360000 */  sw    $s6, ($t9)
.L00443274:
/* 00443274 8F998658 */  lw    $t9, %call16(extendstat)($gp)
/* 00443278 93C40000 */  lbu   $a0, ($fp)
/* 0044327C 0320F809 */  jalr  $t9
/* 00443280 00000000 */   nop   
/* 00443284 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00443288 8F8B8B20 */  lw     $t3, %got(outofmem)($gp)
/* 0044328C 916B0000 */  lbu   $t3, ($t3)
/* 00443290 55600538 */  bnezl $t3, .L00444774
/* 00443294 8FBF003C */   lw    $ra, 0x3c($sp)
/* 00443298 8F9089C4 */  lw     $s0, %got(stattail)($gp)
/* 0044329C 97CC0002 */  lhu   $t4, 2($fp)
/* 004432A0 93CD0001 */  lbu   $t5, 1($fp)
/* 004432A4 8E100000 */  lw    $s0, ($s0)
/* 004432A8 000C70C2 */  srl   $t6, $t4, 3
/* 004432AC 000E78C0 */  sll   $t7, $t6, 3
/* 004432B0 31F800FF */  andi  $t8, $t7, 0xff
/* 004432B4 31AA001F */  andi  $t2, $t5, 0x1f
/* 004432B8 A20A002C */  sb    $t2, 0x2c($s0)
/* 004432BC 17000004 */  bnez  $t8, .L004432D0
/* 004432C0 A20F002D */   sb    $t7, 0x2d($s0)
/* 004432C4 8FD90008 */  lw    $t9, 8($fp)
/* 004432C8 001958C0 */  sll   $t3, $t9, 3
/* 004432CC A20B002D */  sb    $t3, 0x2d($s0)
.L004432D0:
/* 004432D0 8F858964 */  lw     $a1, %got(ustack)($gp)
/* 004432D4 24090002 */  li    $t1, 2
/* 004432D8 8CB30000 */  lw    $s3, ($a1)
/* 004432DC 8E6D000C */  lw    $t5, 0xc($s3)
/* 004432E0 8DA30000 */  lw    $v1, ($t5)
/* 004432E4 90620000 */  lbu   $v0, ($v1)
/* 004432E8 55220026 */  bnel  $t1, $v0, .L00443384
/* 004432EC 24010001 */   li    $at, 1
/* 004432F0 920C002D */  lbu   $t4, 0x2d($s0)
/* 004432F4 8C6A0020 */  lw    $t2, 0x20($v1)
/* 004432F8 24040008 */  li    $a0, 8
/* 004432FC 000C70C2 */  srl   $t6, $t4, 3
/* 00443300 014E001A */  div   $zero, $t2, $t6
/* 00443304 00007810 */  mfhi  $t7
/* 00443308 15C00002 */  bnez  $t6, .L00443314
/* 0044330C 00000000 */   nop   
/* 00443310 0007000D */  break 7
.L00443314:
/* 00443314 2401FFFF */  li    $at, -1
/* 00443318 15C10004 */  bne   $t6, $at, .L0044332C
/* 0044331C 3C018000 */   lui   $at, 0x8000
/* 00443320 15410002 */  bne   $t2, $at, .L0044332C
/* 00443324 00000000 */   nop   
/* 00443328 0006000D */  break 6
.L0044332C:
/* 0044332C 51E0003A */  beql  $t7, $zero, .L00443418
/* 00443330 8FD8000C */   lw    $t8, 0xc($fp)
/* 00443334 A204002D */  sb    $a0, 0x2d($s0)
/* 00443338 8E78000C */  lw    $t8, 0xc($s3)
/* 0044333C 8F190000 */  lw    $t9, ($t8)
/* 00443340 8F320020 */  lw    $s2, 0x20($t9)
/* 00443344 324B0001 */  andi  $t3, $s2, 1
/* 00443348 55600033 */  bnezl $t3, .L00443418
/* 0044334C 8FD8000C */   lw    $t8, 0xc($fp)
/* 00443350 920D002D */  lbu   $t5, 0x2d($s0)
.L00443354:
/* 00443354 000D6040 */  sll   $t4, $t5, 1
/* 00443358 A20C002D */  sb    $t4, 0x2d($s0)
/* 0044335C 06410002 */  bgez  $s2, .L00443368
/* 00443360 02400821 */   move  $at, $s2
/* 00443364 26410001 */  addiu $at, $s2, 1
.L00443368:
/* 00443368 00019043 */  sra   $s2, $at, 1
/* 0044336C 324A0001 */  andi  $t2, $s2, 1
/* 00443370 5140FFF8 */  beql  $t2, $zero, .L00443354
/* 00443374 920D002D */   lbu   $t5, 0x2d($s0)
/* 00443378 10000027 */  b     .L00443418
/* 0044337C 8FD8000C */   lw    $t8, 0xc($fp)
/* 00443380 24010001 */  li    $at, 1
.L00443384:
/* 00443384 54410024 */  bnel  $v0, $at, .L00443418
/* 00443388 8FD8000C */   lw    $t8, 0xc($fp)
/* 0044338C 920F002D */  lbu   $t7, 0x2d($s0)
/* 00443390 8C6E002C */  lw    $t6, 0x2c($v1)
/* 00443394 24040008 */  li    $a0, 8
/* 00443398 000FC0C2 */  srl   $t8, $t7, 3
/* 0044339C 01D8001A */  div   $zero, $t6, $t8
/* 004433A0 0000C810 */  mfhi  $t9
/* 004433A4 17000002 */  bnez  $t8, .L004433B0
/* 004433A8 00000000 */   nop   
/* 004433AC 0007000D */  break 7
.L004433B0:
/* 004433B0 2401FFFF */  li    $at, -1
/* 004433B4 17010004 */  bne   $t8, $at, .L004433C8
/* 004433B8 3C018000 */   lui   $at, 0x8000
/* 004433BC 15C10002 */  bne   $t6, $at, .L004433C8
/* 004433C0 00000000 */   nop   
/* 004433C4 0006000D */  break 6
.L004433C8:
/* 004433C8 53200013 */  beql  $t9, $zero, .L00443418
/* 004433CC 8FD8000C */   lw    $t8, 0xc($fp)
/* 004433D0 A204002D */  sb    $a0, 0x2d($s0)
/* 004433D4 8E6B000C */  lw    $t3, 0xc($s3)
/* 004433D8 8D6D0000 */  lw    $t5, ($t3)
/* 004433DC 8DB2002C */  lw    $s2, 0x2c($t5)
/* 004433E0 324C0001 */  andi  $t4, $s2, 1
/* 004433E4 5580000C */  bnezl $t4, .L00443418
/* 004433E8 8FD8000C */   lw    $t8, 0xc($fp)
/* 004433EC 920A002D */  lbu   $t2, 0x2d($s0)
.L004433F0:
/* 004433F0 000A7840 */  sll   $t7, $t2, 1
/* 004433F4 A20F002D */  sb    $t7, 0x2d($s0)
/* 004433F8 06410002 */  bgez  $s2, .L00443404
/* 004433FC 02400821 */   move  $at, $s2
/* 00443400 26410001 */  addiu $at, $s2, 1
.L00443404:
/* 00443404 00019043 */  sra   $s2, $at, 1
/* 00443408 324E0001 */  andi  $t6, $s2, 1
/* 0044340C 51C0FFF8 */  beql  $t6, $zero, .L004433F0
/* 00443410 920A002D */   lbu   $t2, 0x2d($s0)
/* 00443414 8FD8000C */  lw    $t8, 0xc($fp)
.L00443418:
/* 00443418 27A20110 */  addiu $v0, $sp, 0x110
/* 0044341C A618002E */  sh    $t8, 0x2e($s0)
/* 00443420 8E790000 */  lw    $t9, ($s3)
/* 00443424 AE190014 */  sw    $t9, 0x14($s0)
/* 00443428 8F998024 */  lw    $t9, %got(func_0043B1DC)($gp)
/* 0044342C 8E6B000C */  lw    $t3, 0xc($s3)
/* 00443430 2739B1DC */  addiu $t9, %lo(func_0043B1DC) # addiu $t9, $t9, -0x4e24
/* 00443434 0320F809 */  jalr  $t9
/* 00443438 ACAB0000 */   sw    $t3, ($a1)
/* 0044343C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00443440 8FCA0004 */  lw    $t2, 4($fp)
/* 00443444 8FCF0008 */  lw    $t7, 8($fp)
/* 00443448 8F828964 */  lw     $v0, %got(ustack)($gp)
/* 0044344C 8C530000 */  lw    $s3, ($v0)
/* 00443450 8E640000 */  lw    $a0, ($s3)
/* 00443454 AE040004 */  sw    $a0, 4($s0)
/* 00443458 8E6C000C */  lw    $t4, 0xc($s3)
/* 0044345C AE0A0030 */  sw    $t2, 0x30($s0)
/* 00443460 AE0F0020 */  sw    $t7, 0x20($s0)
/* 00443464 AC4C0000 */  sw    $t4, ($v0)
/* 00443468 8F998378 */  lw    $t9, %call16(findbaseaddr)($gp)
/* 0044346C 0320F809 */  jalr  $t9
/* 00443470 00000000 */   nop   
/* 00443474 93CE0000 */  lbu   $t6, ($fp)
/* 00443478 24010094 */  li    $at, 148
/* 0044347C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00443480 15C1001A */  bne   $t6, $at, .L004434EC
/* 00443484 AE020024 */   sw    $v0, 0x24($s0)
/* 00443488 8F9889B4 */  lw     $t8, %got(curgraphnode)($gp)
/* 0044348C 8F9983C8 */  lw    $t9, %call16(strlkilled)($gp)
/* 00443490 8F8489C4 */  lw     $a0, %got(stattail)($gp)
/* 00443494 8F180000 */  lw    $t8, ($t8)
/* 00443498 8C840000 */  lw    $a0, ($a0)
/* 0044349C 0320F809 */  jalr  $t9
/* 004434A0 8F050024 */   lw    $a1, 0x24($t8)
/* 004434A4 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004434A8 2C590001 */  sltiu $t9, $v0, 1
/* 004434AC A219001C */  sb    $t9, 0x1c($s0)
/* 004434B0 8F8D89B4 */  lw     $t5, %got(curgraphnode)($gp)
/* 004434B4 240B0001 */  li    $t3, 1
/* 004434B8 8F9983CC */  lw    $t9, %call16(strskilled)($gp)
/* 004434BC A20B001D */  sb    $t3, 0x1d($s0)
/* 004434C0 8F8489C4 */  lw     $a0, %got(stattail)($gp)
/* 004434C4 8DAD0000 */  lw    $t5, ($t5)
/* 004434C8 8C840000 */  lw    $a0, ($a0)
/* 004434CC 0320F809 */  jalr  $t9
/* 004434D0 8DA50024 */   lw    $a1, 0x24($t5)
/* 004434D4 2C4C0001 */  sltiu $t4, $v0, 1
/* 004434D8 240A0001 */  li    $t2, 1
/* 004434DC A20C001E */  sb    $t4, 0x1e($s0)
/* 004434E0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004434E4 10000005 */  b     .L004434FC
/* 004434E8 A20A001F */   sb    $t2, 0x1f($s0)
.L004434EC:
/* 004434EC A200001C */  sb    $zero, 0x1c($s0)
/* 004434F0 A200001D */  sb    $zero, 0x1d($s0)
/* 004434F4 A200001E */  sb    $zero, 0x1e($s0)
/* 004434F8 A200001F */  sb    $zero, 0x1f($s0)
.L004434FC:
/* 004434FC 8F99839C */  lw    $t9, %call16(strkillprev)($gp)
/* 00443500 8F8489C4 */  lw     $a0, %got(stattail)($gp)
/* 00443504 0320F809 */  jalr  $t9
/* 00443508 8C840000 */   lw    $a0, ($a0)
/* 0044350C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00443510 8F998318 */  lw    $t9, %call16(appendstorelist)($gp)
/* 00443514 0320F809 */  jalr  $t9
/* 00443518 00000000 */   nop   
/* 0044351C 10000494 */  b     .L00444770
/* 00443520 8FBC0034 */   lw    $gp, 0x34($sp)
.L00443524:
/* 00443524 8F868A48 */  lw     $a2, %got(loc_not_yet_seen)($gp)
/* 00443528 00E02025 */  move  $a0, $a3
/* 0044352C A0C00000 */  sb    $zero, ($a2)
/* 00443530 8F998658 */  lw    $t9, %call16(extendstat)($gp)
/* 00443534 0320F809 */  jalr  $t9
/* 00443538 00000000 */   nop   
/* 0044353C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00443540 8F8F8B20 */  lw     $t7, %got(outofmem)($gp)
/* 00443544 91EF0000 */  lbu   $t7, ($t7)
/* 00443548 55E0048A */  bnezl $t7, .L00444774
/* 0044354C 8FBF003C */   lw    $ra, 0x3c($sp)
/* 00443550 8F998024 */  lw    $t9, %got(func_0043B1DC)($gp)
/* 00443554 8F9089C4 */  lw     $s0, %got(stattail)($gp)
/* 00443558 27A20110 */  addiu $v0, $sp, 0x110
/* 0044355C 2739B1DC */  addiu $t9, %lo(func_0043B1DC) # addiu $t9, $t9, -0x4e24
/* 00443560 0320F809 */  jalr  $t9
/* 00443564 8E100000 */   lw    $s0, ($s0)
/* 00443568 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0044356C 27A20110 */  addiu $v0, $sp, 0x110
/* 00443570 8F938964 */  lw     $s3, %got(ustack)($gp)
/* 00443574 8F998024 */  lw    $t9, %got(func_0043B1DC)($gp)
/* 00443578 8F818964 */  lw     $at, %got(ustack)($gp)
/* 0044357C 8E730000 */  lw    $s3, ($s3)
/* 00443580 2739B1DC */  addiu $t9, %lo(func_0043B1DC) # addiu $t9, $t9, -0x4e24
/* 00443584 8E6E0000 */  lw    $t6, ($s3)
/* 00443588 AE0E0014 */  sw    $t6, 0x14($s0)
/* 0044358C 8E78000C */  lw    $t8, 0xc($s3)
/* 00443590 0320F809 */  jalr  $t9
/* 00443594 AC380000 */   sw    $t8, ($at)
/* 00443598 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0044359C 8F938964 */  lw     $s3, %got(ustack)($gp)
/* 004435A0 8F818964 */  lw     $at, %got(ustack)($gp)
/* 004435A4 8E730000 */  lw    $s3, ($s3)
/* 004435A8 8E790000 */  lw    $t9, ($s3)
/* 004435AC AE190004 */  sw    $t9, 4($s0)
/* 004435B0 8E6B000C */  lw    $t3, 0xc($s3)
/* 004435B4 AC2B0000 */  sw    $t3, ($at)
/* 004435B8 8E040004 */  lw    $a0, 4($s0)
/* 004435BC 8E050014 */  lw    $a1, 0x14($s0)
/* 004435C0 54A40014 */  bnel  $a1, $a0, .L00443614
/* 004435C4 97CE0002 */   lhu   $t6, 2($fp)
/* 004435C8 93CD0000 */  lbu   $t5, ($fp)
/* 004435CC 24010058 */  li    $at, 88
/* 004435D0 55A10010 */  bnel  $t5, $at, .L00443614
/* 004435D4 97CE0002 */   lhu   $t6, 2($fp)
/* 004435D8 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 004435DC 0320F809 */  jalr  $t9
/* 004435E0 00000000 */   nop   
/* 004435E4 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004435E8 8E040014 */  lw    $a0, 0x14($s0)
/* 004435EC 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 004435F0 0320F809 */  jalr  $t9
/* 004435F4 00000000 */   nop   
/* 004435F8 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004435FC 24140060 */  li    $s4, 96
/* 00443600 8F8C89C4 */  lw     $t4, %got(stattail)($gp)
/* 00443604 8D8C0000 */  lw    $t4, ($t4)
/* 00443608 10000459 */  b     .L00444770
/* 0044360C A1940000 */   sb    $s4, ($t4)
/* 00443610 97CE0002 */  lhu   $t6, 2($fp)
.L00443614:
/* 00443614 8FCA0008 */  lw    $t2, 8($fp)
/* 00443618 8FCF0004 */  lw    $t7, 4($fp)
/* 0044361C 000EC0C2 */  srl   $t8, $t6, 3
/* 00443620 0018C8C0 */  sll   $t9, $t8, 3
/* 00443624 A2190033 */  sb    $t9, 0x33($s0)
/* 00443628 8F998378 */  lw    $t9, %call16(findbaseaddr)($gp)
/* 0044362C 00A02025 */  move  $a0, $a1
/* 00443630 AE0A0020 */  sw    $t2, 0x20($s0)
/* 00443634 0320F809 */  jalr  $t9
/* 00443638 A20F0032 */   sb    $t7, 0x32($s0)
/* 0044363C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00443640 AE02002C */  sw    $v0, 0x2c($s0)
/* 00443644 8F998318 */  lw    $t9, %call16(appendstorelist)($gp)
/* 00443648 0320F809 */  jalr  $t9
/* 0044364C 00000000 */   nop   
/* 00443650 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00443654 8F8B8B20 */  lw     $t3, %got(outofmem)($gp)
/* 00443658 916B0000 */  lbu   $t3, ($t3)
/* 0044365C 55600445 */  bnezl $t3, .L00444774
/* 00443660 8FBF003C */   lw    $ra, 0x3c($sp)
/* 00443664 8F9489C4 */  lw     $s4, %got(stattail)($gp)
/* 00443668 240D0003 */  li    $t5, 3
/* 0044366C 8E840000 */  lw    $a0, ($s4)
/* 00443670 8C8C0018 */  lw    $t4, 0x18($a0)
/* 00443674 A18D0009 */  sb    $t5, 9($t4)
/* 00443678 8F998398 */  lw    $t9, %call16(movkillprev)($gp)
/* 0044367C 0320F809 */  jalr  $t9
/* 00443680 00000000 */   nop   
/* 00443684 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00443688 8E040004 */  lw    $a0, 4($s0)
/* 0044368C 8F998378 */  lw    $t9, %call16(findbaseaddr)($gp)
/* 00443690 0320F809 */  jalr  $t9
/* 00443694 00000000 */   nop   
/* 00443698 93CA0000 */  lbu   $t2, ($fp)
/* 0044369C 24010058 */  li    $at, 88
/* 004436A0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004436A4 1541001A */  bne   $t2, $at, .L00443710
/* 004436A8 AE020024 */   sw    $v0, 0x24($s0)
/* 004436AC 8F8F89B4 */  lw     $t7, %got(curgraphnode)($gp)
/* 004436B0 8F9983C8 */  lw    $t9, %call16(strlkilled)($gp)
/* 004436B4 8F8489C4 */  lw     $a0, %got(stattail)($gp)
/* 004436B8 8DEF0000 */  lw    $t7, ($t7)
/* 004436BC 8C840000 */  lw    $a0, ($a0)
/* 004436C0 0320F809 */  jalr  $t9
/* 004436C4 8DE50024 */   lw    $a1, 0x24($t7)
/* 004436C8 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004436CC 2C4E0001 */  sltiu $t6, $v0, 1
/* 004436D0 A20E001C */  sb    $t6, 0x1c($s0)
/* 004436D4 8F9889B4 */  lw     $t8, %got(curgraphnode)($gp)
/* 004436D8 8F9983CC */  lw    $t9, %call16(strskilled)($gp)
/* 004436DC 8F8489C4 */  lw     $a0, %got(stattail)($gp)
/* 004436E0 8F180000 */  lw    $t8, ($t8)
/* 004436E4 8C840000 */  lw    $a0, ($a0)
/* 004436E8 0320F809 */  jalr  $t9
/* 004436EC 8F050024 */   lw    $a1, 0x24($t8)
/* 004436F0 2C590001 */  sltiu $t9, $v0, 1
/* 004436F4 240B0001 */  li    $t3, 1
/* 004436F8 240D0001 */  li    $t5, 1
/* 004436FC A219001E */  sb    $t9, 0x1e($s0)
/* 00443700 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00443704 A20B001D */  sb    $t3, 0x1d($s0)
/* 00443708 10000005 */  b     .L00443720
/* 0044370C A20D001F */   sb    $t5, 0x1f($s0)
.L00443710:
/* 00443710 A200001C */  sb    $zero, 0x1c($s0)
/* 00443714 A200001D */  sb    $zero, 0x1d($s0)
/* 00443718 A200001E */  sb    $zero, 0x1e($s0)
/* 0044371C A200001F */  sb    $zero, 0x1f($s0)
.L00443720:
/* 00443720 8F99839C */  lw    $t9, %call16(strkillprev)($gp)
/* 00443724 8F8489C4 */  lw     $a0, %got(stattail)($gp)
/* 00443728 0320F809 */  jalr  $t9
/* 0044372C 8C840000 */   lw    $a0, ($a0)
/* 00443730 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00443734 8F998318 */  lw    $t9, %call16(appendstorelist)($gp)
/* 00443738 0320F809 */  jalr  $t9
/* 0044373C 00000000 */   nop   
/* 00443740 1000040B */  b     .L00444770
/* 00443744 8FBC0034 */   lw    $gp, 0x34($sp)
.L00443748:
/* 00443748 8F998658 */  lw    $t9, %call16(extendstat)($gp)
/* 0044374C 2404007C */  li    $a0, 124
/* 00443750 0320F809 */  jalr  $t9
/* 00443754 00000000 */   nop   
/* 00443758 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0044375C 8F8C8B20 */  lw     $t4, %got(outofmem)($gp)
/* 00443760 918C0000 */  lbu   $t4, ($t4)
/* 00443764 55800403 */  bnezl $t4, .L00444774
/* 00443768 8FBF003C */   lw    $ra, 0x3c($sp)
/* 0044376C 8F998024 */  lw    $t9, %got(func_0043B1DC)($gp)
/* 00443770 27A20110 */  addiu $v0, $sp, 0x110
/* 00443774 2739B1DC */  addiu $t9, %lo(func_0043B1DC) # addiu $t9, $t9, -0x4e24
/* 00443778 0320F809 */  jalr  $t9
/* 0044377C 00000000 */   nop   
/* 00443780 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00443784 24180001 */  li    $t8, 1
/* 00443788 8F828964 */  lw     $v0, %got(ustack)($gp)
/* 0044378C 8F8F89C4 */  lw     $t7, %got(stattail)($gp)
/* 00443790 8F818AF8 */  lw     $at, %got(usefp)($gp)
/* 00443794 8C530000 */  lw    $s3, ($v0)
/* 00443798 8DEF0000 */  lw    $t7, ($t7)
/* 0044379C 8E6A0000 */  lw    $t2, ($s3)
/* 004437A0 ADEA0004 */  sw    $t2, 4($t7)
/* 004437A4 8E6E000C */  lw    $t6, 0xc($s3)
/* 004437A8 AC4E0000 */  sw    $t6, ($v0)
/* 004437AC 100003F0 */  b     .L00444770
/* 004437B0 A0380000 */   sb    $t8, ($at)
.L004437B4:
/* 004437B4 8F938964 */  lw     $s3, %got(ustack)($gp)
/* 004437B8 8E730000 */  lw    $s3, ($s3)
/* 004437BC 8E790004 */  lw    $t9, 4($s3)
/* 004437C0 17200018 */  bnez  $t9, .L00443824
/* 004437C4 00000000 */   nop   
/* 004437C8 8E6B000C */  lw    $t3, 0xc($s3)
/* 004437CC 8D660004 */  lw    $a2, 4($t3)
/* 004437D0 10C00014 */  beqz  $a2, .L00443824
/* 004437D4 00000000 */   nop   
/* 004437D8 8E710000 */  lw    $s1, ($s3)
/* 004437DC 24090002 */  li    $t1, 2
/* 004437E0 922D0000 */  lbu   $t5, ($s1)
/* 004437E4 152D000F */  bne   $t1, $t5, .L00443824
/* 004437E8 00000000 */   nop   
/* 004437EC 8F99868C */  lw    $t9, %call16(subovfw)($gp)
/* 004437F0 93C40001 */  lbu   $a0, 1($fp)
/* 004437F4 8E250020 */  lw    $a1, 0x20($s1)
/* 004437F8 0320F809 */  jalr  $t9
/* 004437FC 3084001F */   andi  $a0, $a0, 0x1f
/* 00443800 14400008 */  bnez  $v0, .L00443824
/* 00443804 8FBC0034 */   lw    $gp, 0x34($sp)
/* 00443808 8F938964 */  lw     $s3, %got(ustack)($gp)
/* 0044380C 8E730000 */  lw    $s3, ($s3)
/* 00443810 8E65000C */  lw    $a1, 0xc($s3)
/* 00443814 8CAC0004 */  lw    $t4, 4($a1)
/* 00443818 000C5023 */  negu  $t2, $t4
/* 0044381C AE6A0004 */  sw    $t2, 4($s3)
/* 00443820 ACA00004 */  sw    $zero, 4($a1)
.L00443824:
/* 00443824 8F998024 */  lw    $t9, %got(func_0043B1DC)($gp)
/* 00443828 27A20110 */  addiu $v0, $sp, 0x110
/* 0044382C 2739B1DC */  addiu $t9, %lo(func_0043B1DC) # addiu $t9, $t9, -0x4e24
/* 00443830 0320F809 */  jalr  $t9
/* 00443834 00000000 */   nop   
/* 00443838 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0044383C 27A20110 */  addiu $v0, $sp, 0x110
/* 00443840 8F848964 */  lw     $a0, %got(ustack)($gp)
/* 00443844 8F998024 */  lw    $t9, %got(func_0043B1DC)($gp)
/* 00443848 8C930000 */  lw    $s3, ($a0)
/* 0044384C 2739B1DC */  addiu $t9, %lo(func_0043B1DC) # addiu $t9, $t9, -0x4e24
/* 00443850 8E6F0000 */  lw    $t7, ($s3)
/* 00443854 8E6E000C */  lw    $t6, 0xc($s3)
/* 00443858 AFAF00F4 */  sw    $t7, 0xf4($sp)
/* 0044385C 0320F809 */  jalr  $t9
/* 00443860 AC8E0000 */   sw    $t6, ($a0)
/* 00443864 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00443868 93D00001 */  lbu   $s0, 1($fp)
/* 0044386C 24010006 */  li    $at, 6
/* 00443870 8F828964 */  lw     $v0, %got(ustack)($gp)
/* 00443874 3210001F */  andi  $s0, $s0, 0x1f
/* 00443878 24090002 */  li    $t1, 2
/* 0044387C 8C530000 */  lw    $s3, ($v0)
/* 00443880 00008825 */  move  $s1, $zero
/* 00443884 24040008 */  li    $a0, 8
/* 00443888 8E78000C */  lw    $t8, 0xc($s3)
/* 0044388C 8E760000 */  lw    $s6, ($s3)
/* 00443890 1601003A */  bne   $s0, $at, .L0044397C
/* 00443894 AC580000 */   sw    $t8, ($v0)
/* 00443898 93C20000 */  lbu   $v0, ($fp)
/* 0044389C 2459FF7E */  addiu $t9, $v0, -0x82
/* 004438A0 2F210003 */  sltiu $at, $t9, 3
/* 004438A4 1020002C */  beqz  $at, .L00443958
/* 004438A8 00000000 */   nop   
/* 004438AC 8F818044 */  lw    $at, %got(jtbl_1000C4D4)($gp)
/* 004438B0 0019C880 */  sll   $t9, $t9, 2
/* 004438B4 00390821 */  addu  $at, $at, $t9
/* 004438B8 8C39C4D4 */  lw    $t9, %lo(jtbl_1000C4D4)($at)
/* 004438BC 033CC821 */  addu  $t9, $t9, $gp
/* 004438C0 03200008 */  jr    $t9
/* 004438C4 00000000 */   nop   
.L004438C8:
/* 004438C8 8FAB00F4 */  lw    $t3, 0xf4($sp)
/* 004438CC 916D0000 */  lbu   $t5, ($t3)
/* 004438D0 552D0006 */  bnel  $t1, $t5, .L004438EC
/* 004438D4 92CA0000 */   lbu   $t2, ($s6)
/* 004438D8 8D6C0020 */  lw    $t4, 0x20($t3)
/* 004438DC 3C018000 */  lui   $at, 0x8000
/* 004438E0 11810009 */  beq   $t4, $at, .L00443908
/* 004438E4 00000000 */   nop   
/* 004438E8 92CA0000 */  lbu   $t2, ($s6)
.L004438EC:
/* 004438EC 152A0059 */  bne   $t1, $t2, .L00443A54
/* 004438F0 00000000 */   nop   
/* 004438F4 8ECF0020 */  lw    $t7, 0x20($s6)
/* 004438F8 3C037FFF */  lui   $v1, 0x7fff
/* 004438FC 3463FFFF */  ori   $v1, $v1, 0xffff
/* 00443900 146F0054 */  bne   $v1, $t7, .L00443A54
/* 00443904 00000000 */   nop   
.L00443908:
/* 00443908 10000052 */  b     .L00443A54
/* 0044390C 24110001 */   li    $s1, 1
.L00443910:
/* 00443910 8FAE00F4 */  lw    $t6, 0xf4($sp)
/* 00443914 91D80000 */  lbu   $t8, ($t6)
/* 00443918 55380007 */  bnel  $t1, $t8, .L00443938
/* 0044391C 92CD0000 */   lbu   $t5, ($s6)
/* 00443920 8DD90020 */  lw    $t9, 0x20($t6)
/* 00443924 3C037FFF */  lui   $v1, 0x7fff
/* 00443928 3463FFFF */  ori   $v1, $v1, 0xffff
/* 0044392C 10790008 */  beq   $v1, $t9, .L00443950
/* 00443930 00000000 */   nop   
/* 00443934 92CD0000 */  lbu   $t5, ($s6)
.L00443938:
/* 00443938 152D0046 */  bne   $t1, $t5, .L00443A54
/* 0044393C 00000000 */   nop   
/* 00443940 8ECB0020 */  lw    $t3, 0x20($s6)
/* 00443944 3C018000 */  lui   $at, 0x8000
/* 00443948 15610042 */  bne   $t3, $at, .L00443A54
/* 0044394C 00000000 */   nop   
.L00443950:
/* 00443950 10000040 */  b     .L00443A54
/* 00443954 24110001 */   li    $s1, 1
.L00443958:
/* 00443958 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 0044395C 8F868044 */  lw    $a2, %got(RO_1000C44D)($gp)
/* 00443960 24040001 */  li    $a0, 1
/* 00443964 24050E1E */  li    $a1, 3614
/* 00443968 2407000B */  li    $a3, 11
/* 0044396C 0320F809 */  jalr  $t9
/* 00443970 24C6C44D */   addiu $a2, %lo(RO_1000C44D) # addiu $a2, $a2, -0x3bb3
/* 00443974 10000037 */  b     .L00443A54
/* 00443978 8FBC0034 */   lw    $gp, 0x34($sp)
.L0044397C:
/* 0044397C 14900035 */  bne   $a0, $s0, .L00443A54
/* 00443980 00000000 */   nop   
/* 00443984 93C20000 */  lbu   $v0, ($fp)
/* 00443988 244CFF7E */  addiu $t4, $v0, -0x82
/* 0044398C 2D810003 */  sltiu $at, $t4, 3
/* 00443990 10200028 */  beqz  $at, .L00443A34
/* 00443994 00000000 */   nop   
/* 00443998 8F818044 */  lw    $at, %got(jtbl_1000C4E0)($gp)
/* 0044399C 000C6080 */  sll   $t4, $t4, 2
/* 004439A0 002C0821 */  addu  $at, $at, $t4
/* 004439A4 8C2CC4E0 */  lw    $t4, %lo(jtbl_1000C4E0)($at)
/* 004439A8 019C6021 */  addu  $t4, $t4, $gp
/* 004439AC 01800008 */  jr    $t4
/* 004439B0 00000000 */   nop   
.L004439B4:
/* 004439B4 8FAA00F4 */  lw    $t2, 0xf4($sp)
/* 004439B8 914F0000 */  lbu   $t7, ($t2)
/* 004439BC 552F0005 */  bnel  $t1, $t7, .L004439D4
/* 004439C0 92CE0000 */   lbu   $t6, ($s6)
/* 004439C4 8D580020 */  lw    $t8, 0x20($t2)
/* 004439C8 13000008 */  beqz  $t8, .L004439EC
/* 004439CC 00000000 */   nop   
/* 004439D0 92CE0000 */  lbu   $t6, ($s6)
.L004439D4:
/* 004439D4 152E001F */  bne   $t1, $t6, .L00443A54
/* 004439D8 00000000 */   nop   
/* 004439DC 8ED90020 */  lw    $t9, 0x20($s6)
/* 004439E0 2401FFFF */  li    $at, -1
/* 004439E4 1721001B */  bne   $t9, $at, .L00443A54
/* 004439E8 00000000 */   nop   
.L004439EC:
/* 004439EC 10000019 */  b     .L00443A54
/* 004439F0 24110001 */   li    $s1, 1
.L004439F4:
/* 004439F4 8FAD00F4 */  lw    $t5, 0xf4($sp)
/* 004439F8 91AB0000 */  lbu   $t3, ($t5)
/* 004439FC 552B0006 */  bnel  $t1, $t3, .L00443A18
/* 00443A00 92CF0000 */   lbu   $t7, ($s6)
/* 00443A04 8DAC0020 */  lw    $t4, 0x20($t5)
/* 00443A08 2401FFFF */  li    $at, -1
/* 00443A0C 11810007 */  beq   $t4, $at, .L00443A2C
/* 00443A10 00000000 */   nop   
/* 00443A14 92CF0000 */  lbu   $t7, ($s6)
.L00443A18:
/* 00443A18 152F000E */  bne   $t1, $t7, .L00443A54
/* 00443A1C 00000000 */   nop   
/* 00443A20 8ECA0020 */  lw    $t2, 0x20($s6)
/* 00443A24 1540000B */  bnez  $t2, .L00443A54
/* 00443A28 00000000 */   nop   
.L00443A2C:
/* 00443A2C 10000009 */  b     .L00443A54
/* 00443A30 24110001 */   li    $s1, 1
.L00443A34:
/* 00443A34 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 00443A38 8F868044 */  lw    $a2, %got(RO_1000C442)($gp)
/* 00443A3C 24040001 */  li    $a0, 1
/* 00443A40 24050E27 */  li    $a1, 3623
/* 00443A44 2407000B */  li    $a3, 11
/* 00443A48 0320F809 */  jalr  $t9
/* 00443A4C 24C6C442 */   addiu $a2, %lo(RO_1000C442) # addiu $a2, $a2, -0x3bbe
/* 00443A50 8FBC0034 */  lw    $gp, 0x34($sp)
.L00443A54:
/* 00443A54 5220000D */  beql  $s1, $zero, .L00443A8C
/* 00443A58 93C70000 */   lbu   $a3, ($fp)
/* 00443A5C 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 00443A60 02C02025 */  move  $a0, $s6
/* 00443A64 0320F809 */  jalr  $t9
/* 00443A68 00000000 */   nop   
/* 00443A6C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00443A70 8FA400F4 */  lw    $a0, 0xf4($sp)
/* 00443A74 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 00443A78 0320F809 */  jalr  $t9
/* 00443A7C 00000000 */   nop   
/* 00443A80 1000033B */  b     .L00444770
/* 00443A84 8FBC0034 */   lw    $gp, 0x34($sp)
/* 00443A88 93C70000 */  lbu   $a3, ($fp)
.L00443A8C:
/* 00443A8C 3C013000 */  lui   $at, 0x3000
/* 00443A90 2E0D0020 */  sltiu $t5, $s0, 0x20
/* 00443A94 24E2FF80 */  addiu $v0, $a3, -0x80
/* 00443A98 2C580020 */  sltiu $t8, $v0, 0x20
/* 00443A9C 00187023 */  negu  $t6, $t8
/* 00443AA0 01C1C824 */  and   $t9, $t6, $at
/* 00443AA4 00595804 */  sllv  $t3, $t9, $v0
/* 00443AA8 05610033 */  bgez  $t3, .L00443B78
/* 00443AAC 2C4A0020 */   sltiu $t2, $v0, 0x20
/* 00443AB0 000D6023 */  negu  $t4, $t5
/* 00443AB4 3C018F80 */  lui   $at, 0x8f80
/* 00443AB8 01817824 */  and   $t7, $t4, $at
/* 00443ABC 020F5004 */  sllv  $t2, $t7, $s0
/* 00443AC0 05410009 */  bgez  $t2, .L00443AE8
/* 00443AC4 8FB800F4 */   lw    $t8, 0xf4($sp)
/* 00443AC8 930E0000 */  lbu   $t6, ($t8)
/* 00443ACC 3C016000 */  lui   $at, 0x6000
/* 00443AD0 2DD90020 */  sltiu $t9, $t6, 0x20
/* 00443AD4 00195823 */  negu  $t3, $t9
/* 00443AD8 01616824 */  and   $t5, $t3, $at
/* 00443ADC 01CD6004 */  sllv  $t4, $t5, $t6
/* 00443AE0 05800013 */  bltz  $t4, .L00443B30
/* 00443AE4 00000000 */   nop   
.L00443AE8:
/* 00443AE8 92CF0000 */  lbu   $t7, ($s6)
/* 00443AEC 3C016000 */  lui   $at, 0x6000
/* 00443AF0 02C08025 */  move  $s0, $s6
/* 00443AF4 2DEA0020 */  sltiu $t2, $t7, 0x20
/* 00443AF8 000AC023 */  negu  $t8, $t2
/* 00443AFC 0301C824 */  and   $t9, $t8, $at
/* 00443B00 01F95804 */  sllv  $t3, $t9, $t7
/* 00443B04 05610051 */  bgez  $t3, .L00443C4C
/* 00443B08 24010082 */   li    $at, 130
/* 00443B0C 8FB600F4 */  lw    $s6, 0xf4($sp)
/* 00443B10 14E10004 */  bne   $a3, $at, .L00443B24
/* 00443B14 AFB000F4 */   sw    $s0, 0xf4($sp)
/* 00443B18 240D0084 */  li    $t5, 132
/* 00443B1C 1000004B */  b     .L00443C4C
/* 00443B20 A3CD0000 */   sb    $t5, ($fp)
.L00443B24:
/* 00443B24 24040081 */  li    $a0, 129
/* 00443B28 10000048 */  b     .L00443C4C
/* 00443B2C A3C40000 */   sb    $a0, ($fp)
.L00443B30:
/* 00443B30 8F998024 */  lw    $t9, %got(func_0043B334)($gp)
/* 00443B34 8FA400F4 */  lw    $a0, 0xf4($sp)
/* 00443B38 27A20110 */  addiu $v0, $sp, 0x110
/* 00443B3C 2739B334 */  addiu $t9, %lo(func_0043B334) # addiu $t9, $t9, -0x4ccc
/* 00443B40 0320F809 */  jalr  $t9
/* 00443B44 00000000 */   nop   
/* 00443B48 10400040 */  beqz  $v0, .L00443C4C
/* 00443B4C 8FBC0034 */   lw    $gp, 0x34($sp)
/* 00443B50 93CE0000 */  lbu   $t6, ($fp)
/* 00443B54 24010082 */  li    $at, 130
/* 00443B58 AFA200F4 */  sw    $v0, 0xf4($sp)
/* 00443B5C 15C10004 */  bne   $t6, $at, .L00443B70
/* 00443B60 240C0084 */   li    $t4, 132
/* 00443B64 24040081 */  li    $a0, 129
/* 00443B68 10000038 */  b     .L00443C4C
/* 00443B6C A3C40000 */   sb    $a0, ($fp)
.L00443B70:
/* 00443B70 10000036 */  b     .L00443C4C
/* 00443B74 A3CC0000 */   sb    $t4, ($fp)
.L00443B78:
/* 00443B78 000AC023 */  negu  $t8, $t2
/* 00443B7C 3C014800 */  lui   $at, 0x4800
/* 00443B80 0301C824 */  and   $t9, $t8, $at
/* 00443B84 00597804 */  sllv  $t7, $t9, $v0
/* 00443B88 05E10023 */  bgez  $t7, .L00443C18
/* 00443B8C 2C4C0020 */   sltiu $t4, $v0, 0x20
/* 00443B90 2E0B0020 */  sltiu $t3, $s0, 0x20
/* 00443B94 000B6823 */  negu  $t5, $t3
/* 00443B98 3C018F80 */  lui   $at, 0x8f80
/* 00443B9C 01A17024 */  and   $t6, $t5, $at
/* 00443BA0 020E6004 */  sllv  $t4, $t6, $s0
/* 00443BA4 05810029 */  bgez  $t4, .L00443C4C
/* 00443BA8 00000000 */   nop   
/* 00443BAC 92CA0000 */  lbu   $t2, ($s6)
/* 00443BB0 3C016000 */  lui   $at, 0x6000
/* 00443BB4 2D580020 */  sltiu $t8, $t2, 0x20
/* 00443BB8 0018C823 */  negu  $t9, $t8
/* 00443BBC 03217824 */  and   $t7, $t9, $at
/* 00443BC0 014F5804 */  sllv  $t3, $t7, $t2
/* 00443BC4 05610021 */  bgez  $t3, .L00443C4C
/* 00443BC8 00000000 */   nop   
/* 00443BCC 8F998024 */  lw    $t9, %got(func_0043B334)($gp)
/* 00443BD0 02C02025 */  move  $a0, $s6
/* 00443BD4 27A20110 */  addiu $v0, $sp, 0x110
/* 00443BD8 2739B334 */  addiu $t9, %lo(func_0043B334) # addiu $t9, $t9, -0x4ccc
/* 00443BDC 0320F809 */  jalr  $t9
/* 00443BE0 00000000 */   nop   
/* 00443BE4 10400019 */  beqz  $v0, .L00443C4C
/* 00443BE8 8FBC0034 */   lw    $gp, 0x34($sp)
/* 00443BEC 93CD0000 */  lbu   $t5, ($fp)
/* 00443BF0 24040081 */  li    $a0, 129
/* 00443BF4 240E0084 */  li    $t6, 132
/* 00443BF8 548D0004 */  bnel  $a0, $t5, .L00443C0C
/* 00443BFC A3C40000 */   sb    $a0, ($fp)
/* 00443C00 10000002 */  b     .L00443C0C
/* 00443C04 A3CE0000 */   sb    $t6, ($fp)
/* 00443C08 A3C40000 */  sb    $a0, ($fp)
.L00443C0C:
/* 00443C0C 8FB600F4 */  lw    $s6, 0xf4($sp)
/* 00443C10 1000000E */  b     .L00443C4C
/* 00443C14 AFA200F4 */   sw    $v0, 0xf4($sp)
.L00443C18:
/* 00443C18 000CC023 */  negu  $t8, $t4
/* 00443C1C 3C018400 */  lui   $at, 0x8400
/* 00443C20 0301C824 */  and   $t9, $t8, $at
/* 00443C24 00597804 */  sllv  $t7, $t9, $v0
/* 00443C28 05E10008 */  bgez  $t7, .L00443C4C
/* 00443C2C 00000000 */   nop   
/* 00443C30 92CA0000 */  lbu   $t2, ($s6)
/* 00443C34 24010003 */  li    $at, 3
/* 00443C38 02C08025 */  move  $s0, $s6
/* 00443C3C 11410003 */  beq   $t2, $at, .L00443C4C
/* 00443C40 00000000 */   nop   
/* 00443C44 8FB600F4 */  lw    $s6, 0xf4($sp)
/* 00443C48 AFB000F4 */  sw    $s0, 0xf4($sp)
.L00443C4C:
/* 00443C4C 8F8B89B4 */  lw     $t3, %got(curgraphnode)($gp)
/* 00443C50 00009025 */  move  $s2, $zero
/* 00443C54 24140060 */  li    $s4, 96
/* 00443C58 8D6B0000 */  lw    $t3, ($t3)
/* 00443C5C 8D70001C */  lw    $s0, 0x1c($t3)
/* 00443C60 1200003B */  beqz  $s0, .L00443D50
/* 00443C64 00000000 */   nop   
/* 00443C68 93CD0000 */  lbu   $t5, ($fp)
.L00443C6C:
/* 00443C6C 920E0000 */  lbu   $t6, ($s0)
/* 00443C70 55AE0033 */  bnel  $t5, $t6, .L00443D40
/* 00443C74 8E100008 */   lw    $s0, 8($s0)
/* 00443C78 8F9986F4 */  lw    $t9, %call16(trapstat_imply)($gp)
/* 00443C7C 02002025 */  move  $a0, $s0
/* 00443C80 02C02825 */  move  $a1, $s6
/* 00443C84 0320F809 */  jalr  $t9
/* 00443C88 8FA600F4 */   lw    $a2, 0xf4($sp)
/* 00443C8C 244C0001 */  addiu $t4, $v0, 1
/* 00443C90 2D810003 */  sltiu $at, $t4, 3
/* 00443C94 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00443C98 10200020 */  beqz  $at, .L00443D1C
/* 00443C9C 0040B825 */   move  $s7, $v0
/* 00443CA0 8F818044 */  lw    $at, %got(jtbl_1000C4EC)($gp)
/* 00443CA4 000C6080 */  sll   $t4, $t4, 2
/* 00443CA8 002C0821 */  addu  $at, $at, $t4
/* 00443CAC 8C2CC4EC */  lw    $t4, %lo(jtbl_1000C4EC)($at)
/* 00443CB0 019C6021 */  addu  $t4, $t4, $gp
/* 00443CB4 01800008 */  jr    $t4
/* 00443CB8 00000000 */   nop   
.L00443CBC:
/* 00443CBC 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 00443CC0 8E040004 */  lw    $a0, 4($s0)
/* 00443CC4 0320F809 */  jalr  $t9
/* 00443CC8 00000000 */   nop   
/* 00443CCC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00443CD0 8E040014 */  lw    $a0, 0x14($s0)
/* 00443CD4 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 00443CD8 0320F809 */  jalr  $t9
/* 00443CDC 00000000 */   nop   
/* 00443CE0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00443CE4 10000015 */  b     .L00443D3C
/* 00443CE8 A2140000 */   sb    $s4, ($s0)
.L00443CEC:
/* 00443CEC 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 00443CF0 24120001 */  li    $s2, 1
/* 00443CF4 02C02025 */  move  $a0, $s6
/* 00443CF8 0320F809 */  jalr  $t9
/* 00443CFC 00000000 */   nop   
/* 00443D00 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00443D04 8FA400F4 */  lw    $a0, 0xf4($sp)
/* 00443D08 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 00443D0C 0320F809 */  jalr  $t9
/* 00443D10 00000000 */   nop   
/* 00443D14 10000009 */  b     .L00443D3C
/* 00443D18 8FBC0034 */   lw    $gp, 0x34($sp)
.L00443D1C:
/* 00443D1C 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 00443D20 8F868044 */  lw    $a2, %got(RO_1000C437)($gp)
/* 00443D24 24040001 */  li    $a0, 1
/* 00443D28 24050E63 */  li    $a1, 3683
/* 00443D2C 2407000B */  li    $a3, 11
/* 00443D30 0320F809 */  jalr  $t9
/* 00443D34 24C6C437 */   addiu $a2, %lo(RO_1000C437) # addiu $a2, $a2, -0x3bc9
/* 00443D38 8FBC0034 */  lw    $gp, 0x34($sp)
.L00443D3C:
/* 00443D3C 8E100008 */  lw    $s0, 8($s0)
.L00443D40:
/* 00443D40 12000003 */  beqz  $s0, .L00443D50
/* 00443D44 00000000 */   nop   
/* 00443D48 5240FFC8 */  beql  $s2, $zero, .L00443C6C
/* 00443D4C 93CD0000 */   lbu   $t5, ($fp)
.L00443D50:
/* 00443D50 56400288 */  bnezl $s2, .L00444774
/* 00443D54 8FBF003C */   lw    $ra, 0x3c($sp)
/* 00443D58 8F998658 */  lw    $t9, %call16(extendstat)($gp)
/* 00443D5C 93C40000 */  lbu   $a0, ($fp)
/* 00443D60 0320F809 */  jalr  $t9
/* 00443D64 00000000 */   nop   
/* 00443D68 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00443D6C 8F988B20 */  lw     $t8, %got(outofmem)($gp)
/* 00443D70 93180000 */  lbu   $t8, ($t8)
/* 00443D74 5700027F */  bnezl $t8, .L00444774
/* 00443D78 8FBF003C */   lw    $ra, 0x3c($sp)
/* 00443D7C 8F9089C4 */  lw     $s0, %got(stattail)($gp)
/* 00443D80 93CA0001 */  lbu   $t2, 1($fp)
/* 00443D84 8FB900F4 */  lw    $t9, 0xf4($sp)
/* 00443D88 8E100000 */  lw    $s0, ($s0)
/* 00443D8C 8FCF0004 */  lw    $t7, 4($fp)
/* 00443D90 314B001F */  andi  $t3, $t2, 0x1f
/* 00443D94 AE190014 */  sw    $t9, 0x14($s0)
/* 00443D98 AE160004 */  sw    $s6, 4($s0)
/* 00443D9C A20B002C */  sb    $t3, 0x2c($s0)
/* 00443DA0 AE000018 */  sw    $zero, 0x18($s0)
/* 00443DA4 10000272 */  b     .L00444770
/* 00443DA8 AE0F0030 */   sw    $t7, 0x30($s0)
.L00443DAC:
/* 00443DAC 8F998658 */  lw    $t9, %call16(extendstat)($gp)
/* 00443DB0 00E02025 */  move  $a0, $a3
/* 00443DB4 0320F809 */  jalr  $t9
/* 00443DB8 00000000 */   nop   
/* 00443DBC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00443DC0 8FCD0004 */  lw    $t5, 4($fp)
/* 00443DC4 8F8E89C4 */  lw     $t6, %got(stattail)($gp)
/* 00443DC8 8DCE0000 */  lw    $t6, ($t6)
/* 00443DCC 10000268 */  b     .L00444770
/* 00443DD0 ADCD0014 */   sw    $t5, 0x14($t6)
.L00443DD4:
/* 00443DD4 8F998658 */  lw    $t9, %call16(extendstat)($gp)
/* 00443DD8 00E02025 */  move  $a0, $a3
/* 00443DDC 0320F809 */  jalr  $t9
/* 00443DE0 00000000 */   nop   
/* 00443DE4 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00443DE8 8F908A44 */  lw     $s0, %got(curlocln)($gp)
/* 00443DEC 10000260 */  b     .L00444770
/* 00443DF0 AE000000 */   sw    $zero, ($s0)
.L00443DF4:
/* 00443DF4 8F998658 */  lw    $t9, %call16(extendstat)($gp)
/* 00443DF8 24040051 */  li    $a0, 81
/* 00443DFC 0320F809 */  jalr  $t9
/* 00443E00 00000000 */   nop   
/* 00443E04 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00443E08 8F8C8B20 */  lw     $t4, %got(outofmem)($gp)
/* 00443E0C 918C0000 */  lbu   $t4, ($t4)
/* 00443E10 55800258 */  bnezl $t4, .L00444774
/* 00443E14 8FBF003C */   lw    $ra, 0x3c($sp)
/* 00443E18 8F9489C4 */  lw     $s4, %got(stattail)($gp)
/* 00443E1C 97C20002 */  lhu   $v0, 2($fp)
/* 00443E20 8F818A40 */  lw     $at, %got(curlocpg)($gp)
/* 00443E24 8E940000 */  lw    $s4, ($s4)
/* 00443E28 8F868A48 */  lw     $a2, %got(loc_not_yet_seen)($gp)
/* 00443E2C 8F908A44 */  lw     $s0, %got(curlocln)($gp)
/* 00443E30 AE820014 */  sw    $v0, 0x14($s4)
/* 00443E34 AC220000 */  sw    $v0, ($at)
/* 00443E38 8FC40004 */  lw    $a0, 4($fp)
/* 00443E3C 90D80000 */  lbu   $t8, ($a2)
/* 00443E40 AE840018 */  sw    $a0, 0x18($s4)
/* 00443E44 1300024A */  beqz  $t8, .L00444770
/* 00443E48 AE040000 */   sw    $a0, ($s0)
/* 00443E4C 8F8F89B4 */  lw     $t7, %got(curgraphnode)($gp)
/* 00443E50 0080C825 */  move  $t9, $a0
/* 00443E54 8DEF0000 */  lw    $t7, ($t7)
/* 00443E58 ADE40134 */  sw    $a0, 0x134($t7)
/* 00443E5C 10000244 */  b     .L00444770
/* 00443E60 A0C00000 */   sb    $zero, ($a2)
.L00443E64:
/* 00443E64 8F998658 */  lw    $t9, %call16(extendstat)($gp)
/* 00443E68 2404001B */  li    $a0, 27
/* 00443E6C 0320F809 */  jalr  $t9
/* 00443E70 00000000 */   nop   
/* 00443E74 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00443E78 24010001 */  li    $at, 1
/* 00443E7C 8F8A8B20 */  lw     $t2, %got(outofmem)($gp)
/* 00443E80 914A0000 */  lbu   $t2, ($t2)
/* 00443E84 5540023B */  bnezl $t2, .L00444774
/* 00443E88 8FBF003C */   lw    $ra, 0x3c($sp)
/* 00443E8C 8F9489C4 */  lw     $s4, %got(stattail)($gp)
/* 00443E90 93C20001 */  lbu   $v0, 1($fp)
/* 00443E94 8FC80008 */  lw    $t0, 8($fp)
/* 00443E98 8E940000 */  lw    $s4, ($s4)
/* 00443E9C 00021600 */  sll   $v0, $v0, 0x18
/* 00443EA0 00021742 */  srl   $v0, $v0, 0x1d
/* 00443EA4 A2820014 */  sb    $v0, 0x14($s4)
/* 00443EA8 14410231 */  bne   $v0, $at, .L00444770
/* 00443EAC AE880018 */   sw    $t0, 0x18($s4)
/* 00443EB0 8F818970 */  lw     $at, %got(tempdisp)($gp)
/* 00443EB4 1000022E */  b     .L00444770
/* 00443EB8 AC280000 */   sw    $t0, ($at)
.L00443EBC:
/* 00443EBC 2410002C */  li    $s0, 44
/* 00443EC0 1607001C */  bne   $s0, $a3, .L00443F34
/* 00443EC4 00000000 */   nop   
/* 00443EC8 8F998658 */  lw    $t9, %call16(extendstat)($gp)
/* 00443ECC 24040067 */  li    $a0, 103
/* 00443ED0 0320F809 */  jalr  $t9
/* 00443ED4 00000000 */   nop   
/* 00443ED8 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00443EDC 8F8B8B20 */  lw     $t3, %got(outofmem)($gp)
/* 00443EE0 916B0000 */  lbu   $t3, ($t3)
/* 00443EE4 55600223 */  bnezl $t3, .L00444774
/* 00443EE8 8FBF003C */   lw    $ra, 0x3c($sp)
/* 00443EEC 8F998024 */  lw    $t9, %got(func_0043B1DC)($gp)
/* 00443EF0 27A20110 */  addiu $v0, $sp, 0x110
/* 00443EF4 2739B1DC */  addiu $t9, %lo(func_0043B1DC) # addiu $t9, $t9, -0x4e24
/* 00443EF8 0320F809 */  jalr  $t9
/* 00443EFC 00000000 */   nop   
/* 00443F00 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00443F04 240C0001 */  li    $t4, 1
/* 00443F08 93C70000 */  lbu   $a3, ($fp)
/* 00443F0C 8F8D8964 */  lw     $t5, %got(ustack)($gp)
/* 00443F10 8F9489C4 */  lw     $s4, %got(stattail)($gp)
/* 00443F14 8DAD0000 */  lw    $t5, ($t5)
/* 00443F18 8E940000 */  lw    $s4, ($s4)
/* 00443F1C 8DAE0000 */  lw    $t6, ($t5)
/* 00443F20 8E98000C */  lw    $t8, 0xc($s4)
/* 00443F24 A28C0015 */  sb    $t4, 0x15($s4)
/* 00443F28 AE8E0004 */  sw    $t6, 4($s4)
/* 00443F2C 8F190010 */  lw    $t9, 0x10($t8)
/* 00443F30 AE990010 */  sw    $t9, 0x10($s4)
.L00443F34:
/* 00443F34 8F998658 */  lw    $t9, %call16(extendstat)($gp)
/* 00443F38 00E02025 */  move  $a0, $a3
/* 00443F3C 0320F809 */  jalr  $t9
/* 00443F40 00000000 */   nop   
/* 00443F44 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00443F48 24010017 */  li    $at, 23
/* 00443F4C 8F8F8B20 */  lw     $t7, %got(outofmem)($gp)
/* 00443F50 91EF0000 */  lbu   $t7, ($t7)
/* 00443F54 55E00207 */  bnezl $t7, .L00444774
/* 00443F58 8FBF003C */   lw    $ra, 0x3c($sp)
/* 00443F5C 8F9489C4 */  lw     $s4, %got(stattail)($gp)
/* 00443F60 93CA0001 */  lbu   $t2, 1($fp)
/* 00443F64 93C70000 */  lbu   $a3, ($fp)
/* 00443F68 8E940000 */  lw    $s4, ($s4)
/* 00443F6C 314B001F */  andi  $t3, $t2, 0x1f
/* 00443F70 14E1000D */  bne   $a3, $at, .L00443FA8
/* 00443F74 A28B0018 */   sb    $t3, 0x18($s4)
/* 00443F78 8F99843C */  lw    $t9, %call16(getproc)($gp)
/* 00443F7C 8FC40004 */  lw    $a0, 4($fp)
/* 00443F80 0320F809 */  jalr  $t9
/* 00443F84 00000000 */   nop   
/* 00443F88 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00443F8C 97CD0002 */  lhu   $t5, 2($fp)
/* 00443F90 93C70000 */  lbu   $a3, ($fp)
/* 00443F94 8F9489C4 */  lw     $s4, %got(stattail)($gp)
/* 00443F98 8E940000 */  lw    $s4, ($s4)
/* 00443F9C AE820014 */  sw    $v0, 0x14($s4)
/* 00443FA0 10000020 */  b     .L00444024
/* 00443FA4 A28D0019 */   sb    $t5, 0x19($s4)
.L00443FA8:
/* 00443FA8 24010097 */  li    $at, 151
/* 00443FAC 14E1000A */  bne   $a3, $at, .L00443FD8
/* 00443FB0 00000000 */   nop   
/* 00443FB4 8F8E8B70 */  lw     $t6, %got(indirprocs)($gp)
/* 00443FB8 8FCC0004 */  lw    $t4, 4($fp)
/* 00443FBC 8F98897C */  lw     $t8, %got(curlevel)($gp)
/* 00443FC0 8DCE0000 */  lw    $t6, ($t6)
/* 00443FC4 AE8C0020 */  sw    $t4, 0x20($s4)
/* 00443FC8 AE8E0014 */  sw    $t6, 0x14($s4)
/* 00443FCC 8F180000 */  lw    $t8, ($t8)
/* 00443FD0 10000014 */  b     .L00444024
/* 00443FD4 A2980019 */   sb    $t8, 0x19($s4)
.L00443FD8:
/* 00443FD8 8F998B70 */  lw     $t9, %got(indirprocs)($gp)
/* 00443FDC 8F8F8A5C */  lw     $t7, %got(lang)($gp)
/* 00443FE0 24010001 */  li    $at, 1
/* 00443FE4 8F390000 */  lw    $t9, ($t9)
/* 00443FE8 AE990014 */  sw    $t9, 0x14($s4)
/* 00443FEC 91EF0000 */  lbu   $t7, ($t7)
/* 00443FF0 15E10009 */  bne   $t7, $at, .L00444018
/* 00443FF4 00000000 */   nop   
/* 00443FF8 8F8A897C */  lw     $t2, %got(curlevel)($gp)
/* 00443FFC 8D4A0000 */  lw    $t2, ($t2)
/* 00444000 29410002 */  slti  $at, $t2, 2
/* 00444004 10200002 */  beqz  $at, .L00444010
/* 00444008 00000000 */   nop   
/* 0044400C 240A0002 */  li    $t2, 2
.L00444010:
/* 00444010 10000004 */  b     .L00444024
/* 00444014 A28A0019 */   sb    $t2, 0x19($s4)
.L00444018:
/* 00444018 8F8B897C */  lw     $t3, %got(curlevel)($gp)
/* 0044401C 8D6B0000 */  lw    $t3, ($t3)
/* 00444020 A28B0019 */  sb    $t3, 0x19($s4)
.L00444024:
/* 00444024 93C20009 */  lbu   $v0, 9($fp)
/* 00444028 93C80008 */  lbu   $t0, 8($fp)
/* 0044402C 24090002 */  li    $t1, 2
/* 00444030 00021942 */  srl   $v1, $v0, 5
/* 00444034 A282001D */  sb    $v0, 0x1d($s4)
/* 00444038 10600034 */  beqz  $v1, .L0044410C
/* 0044403C A288001C */   sb    $t0, 0x1c($s4)
/* 00444040 8F86896C */  lw     $a2, %got(parstack)($gp)
/* 00444044 0103B823 */  subu  $s7, $t0, $v1
/* 00444048 1AE00012 */  blez  $s7, .L00444094
/* 0044404C 8CC20000 */   lw    $v0, ($a2)
/* 00444050 26F70001 */  addiu $s7, $s7, 1
/* 00444054 26E4FFFF */  addiu $a0, $s7, -1
/* 00444058 30840003 */  andi  $a0, $a0, 3
/* 0044405C 10800007 */  beqz  $a0, .L0044407C
/* 00444060 24120001 */   li    $s2, 1
/* 00444064 24830001 */  addiu $v1, $a0, 1
.L00444068:
/* 00444068 26520001 */  addiu $s2, $s2, 1
/* 0044406C 1472FFFE */  bne   $v1, $s2, .L00444068
/* 00444070 8C420008 */   lw    $v0, 8($v0)
/* 00444074 12570007 */  beq   $s2, $s7, .L00444094
/* 00444078 00000000 */   nop   
.L0044407C:
/* 0044407C 8C420008 */  lw    $v0, 8($v0)
/* 00444080 26520004 */  addiu $s2, $s2, 4
/* 00444084 8C420008 */  lw    $v0, 8($v0)
/* 00444088 8C420008 */  lw    $v0, 8($v0)
/* 0044408C 1657FFFB */  bne   $s2, $s7, .L0044407C
/* 00444090 8C420008 */   lw    $v0, 8($v0)
.L00444094:
/* 00444094 5100001E */  beql  $t0, $zero, .L00444110
/* 00444098 8FCD000C */   lw    $t5, 0xc($fp)
/* 0044409C 8F958A34 */  lw     $s5, %got(curmst)($gp)
/* 004440A0 8C4D0000 */  lw    $t5, ($v0)
/* 004440A4 8EA30000 */  lw    $v1, ($s5)
/* 004440A8 8DA5001C */  lw    $a1, 0x1c($t5)
/* 004440AC 8C6E0018 */  lw    $t6, 0x18($v1)
/* 004440B0 00AE082A */  slt   $at, $a1, $t6
/* 004440B4 50200016 */  beql  $at, $zero, .L00444110
/* 004440B8 8FCD000C */   lw    $t5, 0xc($fp)
/* 004440BC AC650018 */  sw    $a1, 0x18($v1)
/* 004440C0 8C440000 */  lw    $a0, ($v0)
/* 004440C4 8C8C001C */  lw    $t4, 0x1c($a0)
/* 004440C8 05810003 */  bgez  $t4, .L004440D8
/* 004440CC 000CC083 */   sra   $t8, $t4, 2
/* 004440D0 25810003 */  addiu $at, $t4, 3
/* 004440D4 0001C083 */  sra   $t8, $at, 2
.L004440D8:
/* 004440D8 27190001 */  addiu $t9, $t8, 1
/* 004440DC AC990018 */  sw    $t9, 0x18($a0)
/* 004440E0 8C420004 */  lw    $v0, 4($v0)
/* 004440E4 5040000A */  beql  $v0, $zero, .L00444110
/* 004440E8 8FCD000C */   lw    $t5, 0xc($fp)
/* 004440EC 8C440000 */  lw    $a0, ($v0)
/* 004440F0 8C8F001C */  lw    $t7, 0x1c($a0)
/* 004440F4 05E10003 */  bgez  $t7, .L00444104
/* 004440F8 000F5083 */   sra   $t2, $t7, 2
/* 004440FC 25E10003 */  addiu $at, $t7, 3
/* 00444100 00015083 */  sra   $t2, $at, 2
.L00444104:
/* 00444104 254B0001 */  addiu $t3, $t2, 1
/* 00444108 AC8B0018 */  sw    $t3, 0x18($a0)
.L0044410C:
/* 0044410C 8FCD000C */  lw    $t5, 0xc($fp)
.L00444110:
/* 00444110 8F86896C */  lw     $a2, %got(parstack)($gp)
/* 00444114 8F958A34 */  lw     $s5, %got(curmst)($gp)
/* 00444118 AE800024 */  sw    $zero, 0x24($s4)
/* 0044411C 16070005 */  bne   $s0, $a3, .L00444134
/* 00444120 A68D001A */   sh    $t5, 0x1a($s4)
/* 00444124 8F828964 */  lw     $v0, %got(ustack)($gp)
/* 00444128 8C4E0000 */  lw    $t6, ($v0)
/* 0044412C 8DCC000C */  lw    $t4, 0xc($t6)
/* 00444130 AC4C0000 */  sw    $t4, ($v0)
.L00444134:
/* 00444134 1900003E */  blez  $t0, .L00444230
/* 00444138 24120001 */   li    $s2, 1
/* 0044413C 8F858A5C */  lw     $a1, %got(lang)($gp)
/* 00444140 25170001 */  addiu $s7, $t0, 1
/* 00444144 24070004 */  li    $a3, 4
/* 00444148 90A50000 */  lbu   $a1, ($a1)
/* 0044414C 2CB80020 */  sltiu $t8, $a1, 0x20
.L00444150:
/* 00444150 0018C823 */  negu  $t9, $t8
/* 00444154 3C012200 */  lui   $at, 0x2200
/* 00444158 03217824 */  and   $t7, $t9, $at
/* 0044415C 00AF5004 */  sllv  $t2, $t7, $a1
/* 00444160 05400027 */  bltz  $t2, .L00444200
/* 00444164 8CC20000 */   lw    $v0, ($a2)
/* 00444168 8C440000 */  lw    $a0, ($v0)
/* 0044416C 908B0000 */  lbu   $t3, ($a0)
/* 00444170 256DFFA0 */  addiu $t5, $t3, -0x60
/* 00444174 2DAE0040 */  sltiu $t6, $t5, 0x40
/* 00444178 11C00009 */  beqz  $t6, .L004441A0
/* 0044417C 00000000 */   nop   
/* 00444180 8F998044 */  lw    $t9, %got(D_1001089C)($gp)
/* 00444184 000D6143 */  sra   $t4, $t5, 5
/* 00444188 000CC080 */  sll   $t8, $t4, 2
/* 0044418C 2739089C */  addiu $t9, %lo(D_1001089C) # addiu $t9, $t9, 0x89c
/* 00444190 03387821 */  addu  $t7, $t9, $t8
/* 00444194 8DEA0000 */  lw    $t2, ($t7)
/* 00444198 01AA5804 */  sllv  $t3, $t2, $t5
/* 0044419C 296E0000 */  slti  $t6, $t3, 0
.L004441A0:
/* 004441A0 55C00018 */  bnezl $t6, .L00444204
/* 004441A4 8C4E0008 */   lw    $t6, 8($v0)
/* 004441A8 54E50006 */  bnel  $a3, $a1, .L004441C4
/* 004441AC 90830014 */   lbu   $v1, 0x14($a0)
/* 004441B0 8E990014 */  lw    $t9, 0x14($s4)
/* 004441B4 9338000E */  lbu   $t8, 0xe($t9)
/* 004441B8 53000012 */  beql  $t8, $zero, .L00444204
/* 004441BC 8C4E0008 */   lw    $t6, 8($v0)
/* 004441C0 90830014 */  lbu   $v1, 0x14($a0)
.L004441C4:
/* 004441C4 2CAF0020 */  sltiu $t7, $a1, 0x20
/* 004441C8 000F5023 */  negu  $t2, $t7
/* 004441CC 1060000F */  beqz  $v1, .L0044420C
/* 004441D0 3C019000 */   lui   $at, 0x9000
/* 004441D4 01416824 */  and   $t5, $t2, $at
/* 004441D8 00AD5804 */  sllv  $t3, $t5, $a1
/* 004441DC 05610003 */  bgez  $t3, .L004441EC
/* 004441E0 24010003 */   li    $at, 3
/* 004441E4 5123000A */  beql  $t1, $v1, .L00444210
/* 004441E8 8E990024 */   lw    $t9, 0x24($s4)
.L004441EC:
/* 004441EC 54A10005 */  bnel  $a1, $at, .L00444204
/* 004441F0 8C4E0008 */   lw    $t6, 8($v0)
/* 004441F4 8C8C0020 */  lw    $t4, 0x20($a0)
/* 004441F8 55800005 */  bnezl $t4, .L00444210
/* 004441FC 8E990024 */   lw    $t9, 0x24($s4)
.L00444200:
/* 00444200 8C4E0008 */  lw    $t6, 8($v0)
.L00444204:
/* 00444204 10000007 */  b     .L00444224
/* 00444208 ACCE0000 */   sw    $t6, ($a2)
.L0044420C:
/* 0044420C 8E990024 */  lw    $t9, 0x24($s4)
.L00444210:
/* 00444210 AC990024 */  sw    $t9, 0x24($a0)
/* 00444214 8C580000 */  lw    $t8, ($v0)
/* 00444218 AE980024 */  sw    $t8, 0x24($s4)
/* 0044421C 8C4F0008 */  lw    $t7, 8($v0)
/* 00444220 ACCF0000 */  sw    $t7, ($a2)
.L00444224:
/* 00444224 26520001 */  addiu $s2, $s2, 1
/* 00444228 5657FFC9 */  bnel  $s2, $s7, .L00444150
/* 0044422C 2CB80020 */   sltiu $t8, $a1, 0x20
.L00444230:
/* 00444230 8F9983C0 */  lw    $t9, %call16(parkillprev)($gp)
/* 00444234 8E840024 */  lw    $a0, 0x24($s4)
/* 00444238 0320F809 */  jalr  $t9
/* 0044423C 00000000 */   nop   
/* 00444240 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00444244 8F9489C4 */  lw     $s4, %got(stattail)($gp)
/* 00444248 8F9983B0 */  lw    $t9, %call16(cupkillprev)($gp)
/* 0044424C 8E940000 */  lw    $s4, ($s4)
/* 00444250 92840019 */  lbu   $a0, 0x19($s4)
/* 00444254 0320F809 */  jalr  $t9
/* 00444258 8E850014 */   lw    $a1, 0x14($s4)
/* 0044425C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00444260 8EA30000 */  lw    $v1, ($s5)
/* 00444264 8F8A89C4 */  lw     $t2, %got(stattail)($gp)
/* 00444268 8F818C40 */  lw     $at, %got(lastmst)($gp)
/* 0044426C 8F868A48 */  lw     $a2, %got(loc_not_yet_seen)($gp)
/* 00444270 8D4A0000 */  lw    $t2, ($t2)
/* 00444274 8D4D0014 */  lw    $t5, 0x14($t2)
/* 00444278 AC6D0020 */  sw    $t5, 0x20($v1)
/* 0044427C AC230000 */  sw    $v1, ($at)
/* 00444280 AEA00000 */  sw    $zero, ($s5)
/* 00444284 1000013A */  b     .L00444770
/* 00444288 A0C00000 */   sb    $zero, ($a2)
.L0044428C:
/* 0044428C 8F998658 */  lw    $t9, %call16(extendstat)($gp)
/* 00444290 24040010 */  li    $a0, 16
/* 00444294 0320F809 */  jalr  $t9
/* 00444298 00000000 */   nop   
/* 0044429C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004442A0 93CC0001 */  lbu   $t4, 1($fp)
/* 004442A4 8FD60010 */  lw    $s6, 0x10($fp)
/* 004442A8 8F9489C4 */  lw     $s4, %got(stattail)($gp)
/* 004442AC 97CB0002 */  lhu   $t3, 2($fp)
/* 004442B0 318E001F */  andi  $t6, $t4, 0x1f
/* 004442B4 8E940000 */  lw    $s4, ($s4)
/* 004442B8 02C0B825 */  move  $s7, $s6
/* 004442BC A28B0018 */  sb    $t3, 0x18($s4)
/* 004442C0 1AC00012 */  blez  $s6, .L0044430C
/* 004442C4 A28E0019 */   sb    $t6, 0x19($s4)
/* 004442C8 8F908950 */  lw     $s0, %got(ustrptr)($gp)
/* 004442CC 8F928CD0 */  lw     $s2, %got(strp)($gp)
/* 004442D0 24110001 */  li    $s1, 1
/* 004442D4 8E100000 */  lw    $s0, ($s0)
/* 004442D8 26F70001 */  addiu $s7, $s7, 1
/* 004442DC 8E520000 */  lw    $s2, ($s2)
/* 004442E0 26100001 */  addiu $s0, $s0, 1
.L004442E4:
/* 004442E4 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 004442E8 02402025 */  move  $a0, $s2
/* 004442EC 9205FFFF */  lbu   $a1, -1($s0)
/* 004442F0 24060001 */  li    $a2, 1
/* 004442F4 0320F809 */  jalr  $t9
/* 004442F8 2407000A */   li    $a3, 10
/* 004442FC 26310001 */  addiu $s1, $s1, 1
/* 00444300 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00444304 1637FFF7 */  bne   $s1, $s7, .L004442E4
/* 00444308 26100001 */   addiu $s0, $s0, 1
.L0044430C:
/* 0044430C 8F908998 */  lw     $s0, %got(strpdisplace)($gp)
/* 00444310 8FD90008 */  lw    $t9, 8($fp)
/* 00444314 8FD8000C */  lw    $t8, 0xc($fp)
/* 00444318 8E050000 */  lw    $a1, ($s0)
/* 0044431C 8F86896C */  lw     $a2, %got(parstack)($gp)
/* 00444320 8F838968 */  lw     $v1, %got(parstackbot)($gp)
/* 00444324 00B67821 */  addu  $t7, $a1, $s6
/* 00444328 AE960024 */  sw    $s6, 0x24($s4)
/* 0044432C AE800028 */  sw    $zero, 0x28($s4)
/* 00444330 AE0F0000 */  sw    $t7, ($s0)
/* 00444334 AE99001C */  sw    $t9, 0x1c($s4)
/* 00444338 AE980020 */  sw    $t8, 0x20($s4)
/* 0044433C AE850014 */  sw    $a1, 0x14($s4)
/* 00444340 8CC20000 */  lw    $v0, ($a2)
/* 00444344 8C630000 */  lw    $v1, ($v1)
/* 00444348 1062000A */  beq   $v1, $v0, .L00444374
/* 0044434C 00000000 */   nop   
.L00444350:
/* 00444350 8E8A0028 */  lw    $t2, 0x28($s4)
/* 00444354 8C4D0000 */  lw    $t5, ($v0)
/* 00444358 ADAA0024 */  sw    $t2, 0x24($t5)
/* 0044435C 8C4B0000 */  lw    $t3, ($v0)
/* 00444360 AE8B0028 */  sw    $t3, 0x28($s4)
/* 00444364 8C4C0008 */  lw    $t4, 8($v0)
/* 00444368 ACCC0000 */  sw    $t4, ($a2)
/* 0044436C 146CFFF8 */  bne   $v1, $t4, .L00444350
/* 00444370 01801025 */   move  $v0, $t4
.L00444374:
/* 00444374 8F9983C0 */  lw    $t9, %call16(parkillprev)($gp)
/* 00444378 8E840028 */  lw    $a0, 0x28($s4)
/* 0044437C 0320F809 */  jalr  $t9
/* 00444380 00000000 */   nop   
/* 00444384 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00444388 24010003 */  li    $at, 3
/* 0044438C 8F8E8A5C */  lw     $t6, %got(lang)($gp)
/* 00444390 91CE0000 */  lbu   $t6, ($t6)
/* 00444394 55C1000A */  bnel  $t6, $at, .L004443C0
/* 00444398 97C20002 */   lhu   $v0, 2($fp)
/* 0044439C 8F9983B4 */  lw    $t9, %call16(ciakillprev)($gp)
/* 004443A0 0320F809 */  jalr  $t9
/* 004443A4 00000000 */   nop   
/* 004443A8 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004443AC 8F828DA4 */  lw     $v0, %got(u)($gp)
/* 004443B0 94420002 */  lhu   $v0, 2($v0)
/* 004443B4 1000000F */  b     .L004443F4
/* 004443B8 30420001 */   andi  $v0, $v0, 1
/* 004443BC 97C20002 */  lhu   $v0, 2($fp)
.L004443C0:
/* 004443C0 30420001 */  andi  $v0, $v0, 1
/* 004443C4 1040000B */  beqz  $v0, .L004443F4
/* 004443C8 00000000 */   nop   
/* 004443CC 8F9983B0 */  lw    $t9, %call16(cupkillprev)($gp)
/* 004443D0 8F84897C */  lw     $a0, %got(curlevel)($gp)
/* 004443D4 8F858B70 */  lw     $a1, %got(indirprocs)($gp)
/* 004443D8 8C840000 */  lw    $a0, ($a0)
/* 004443DC 0320F809 */  jalr  $t9
/* 004443E0 8CA50000 */   lw    $a1, ($a1)
/* 004443E4 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004443E8 8F828DA4 */  lw     $v0, %got(u)($gp)
/* 004443EC 94420002 */  lhu   $v0, 2($v0)
/* 004443F0 30420001 */  andi  $v0, $v0, 1
.L004443F4:
/* 004443F4 10400007 */  beqz  $v0, .L00444414
/* 004443F8 00000000 */   nop   
/* 004443FC 8F958A34 */  lw     $s5, %got(curmst)($gp)
/* 00444400 8F998B70 */  lw     $t9, %got(indirprocs)($gp)
/* 00444404 8EA30000 */  lw    $v1, ($s5)
/* 00444408 8F390000 */  lw    $t9, ($t9)
/* 0044440C 10000006 */  b     .L00444428
/* 00444410 AC790020 */   sw    $t9, 0x20($v1)
.L00444414:
/* 00444414 8F958A34 */  lw     $s5, %got(curmst)($gp)
/* 00444418 8F988B74 */  lw     $t8, %got(ciaprocs)($gp)
/* 0044441C 8EA30000 */  lw    $v1, ($s5)
/* 00444420 8F180000 */  lw    $t8, ($t8)
/* 00444424 AC780020 */  sw    $t8, 0x20($v1)
.L00444428:
/* 00444428 8F818C40 */  lw     $at, %got(lastmst)($gp)
/* 0044442C 8F868A48 */  lw     $a2, %got(loc_not_yet_seen)($gp)
/* 00444430 AC230000 */  sw    $v1, ($at)
/* 00444434 AEA00000 */  sw    $zero, ($s5)
/* 00444438 100000CD */  b     .L00444770
/* 0044443C A0C00000 */   sb    $zero, ($a2)
.L00444440:
/* 00444440 8F8F8964 */  lw     $t7, %got(ustack)($gp)
/* 00444444 8DEF0000 */  lw    $t7, ($t7)
/* 00444448 8DF10000 */  lw    $s1, ($t7)
/* 0044444C 12200017 */  beqz  $s1, .L004444AC
/* 00444450 00000000 */   nop   
/* 00444454 8F9986DC */  lw    $t9, %call16(has_volt_ovfw)($gp)
/* 00444458 02202025 */  move  $a0, $s1
/* 0044445C 0320F809 */  jalr  $t9
/* 00444460 00000000 */   nop   
/* 00444464 14400011 */  bnez  $v0, .L004444AC
/* 00444468 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0044446C 8F8A8964 */  lw     $t2, %got(ustack)($gp)
/* 00444470 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 00444474 8D4A0000 */  lw    $t2, ($t2)
/* 00444478 0320F809 */  jalr  $t9
/* 0044447C 8D440000 */   lw    $a0, ($t2)
/* 00444480 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00444484 24040060 */  li    $a0, 96
/* 00444488 8F8D8964 */  lw     $t5, %got(ustack)($gp)
/* 0044448C 8F998658 */  lw    $t9, %call16(extendstat)($gp)
/* 00444490 8F818964 */  lw     $at, %got(ustack)($gp)
/* 00444494 8DAD0000 */  lw    $t5, ($t5)
/* 00444498 8DAB000C */  lw    $t3, 0xc($t5)
/* 0044449C 0320F809 */  jalr  $t9
/* 004444A0 AC2B0000 */   sw    $t3, ($at)
/* 004444A4 100000B2 */  b     .L00444770
/* 004444A8 8FBC0034 */   lw    $gp, 0x34($sp)
.L004444AC:
/* 004444AC 8F998658 */  lw    $t9, %call16(extendstat)($gp)
/* 004444B0 24040067 */  li    $a0, 103
/* 004444B4 0320F809 */  jalr  $t9
/* 004444B8 00000000 */   nop   
/* 004444BC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004444C0 8F8C8B20 */  lw     $t4, %got(outofmem)($gp)
/* 004444C4 918C0000 */  lbu   $t4, ($t4)
/* 004444C8 558000AA */  bnezl $t4, .L00444774
/* 004444CC 8FBF003C */   lw    $ra, 0x3c($sp)
/* 004444D0 8F938964 */  lw     $s3, %got(ustack)($gp)
/* 004444D4 8F9489C4 */  lw     $s4, %got(stattail)($gp)
/* 004444D8 93D90001 */  lbu   $t9, 1($fp)
/* 004444DC 8E730000 */  lw    $s3, ($s3)
/* 004444E0 8E940000 */  lw    $s4, ($s4)
/* 004444E4 3338001F */  andi  $t8, $t9, 0x1f
/* 004444E8 8E6E0000 */  lw    $t6, ($s3)
/* 004444EC A2980014 */  sb    $t8, 0x14($s4)
/* 004444F0 A2800015 */  sb    $zero, 0x15($s4)
/* 004444F4 AE8E0004 */  sw    $t6, 4($s4)
/* 004444F8 8F818964 */  lw     $at, %got(ustack)($gp)
/* 004444FC 8E6F000C */  lw    $t7, 0xc($s3)
/* 00444500 1000009B */  b     .L00444770
/* 00444504 AC2F0000 */   sw    $t7, ($at)
.L00444508:
/* 00444508 8F938964 */  lw     $s3, %got(ustack)($gp)
/* 0044450C 8E730000 */  lw    $s3, ($s3)
/* 00444510 8E65000C */  lw    $a1, 0xc($s3)
/* 00444514 8E760000 */  lw    $s6, ($s3)
/* 00444518 8E750004 */  lw    $s5, 4($s3)
/* 0044451C 8CAA0000 */  lw    $t2, ($a1)
/* 00444520 AE6A0000 */  sw    $t2, ($s3)
/* 00444524 8CAD0004 */  lw    $t5, 4($a1)
/* 00444528 AE6D0004 */  sw    $t5, 4($s3)
/* 0044452C ACB60000 */  sw    $s6, ($a1)
/* 00444530 8E6B000C */  lw    $t3, 0xc($s3)
/* 00444534 1000008E */  b     .L00444770
/* 00444538 AD750004 */   sw    $s5, 4($t3)
.L0044453C:
/* 0044453C 8F998658 */  lw    $t9, %call16(extendstat)($gp)
/* 00444540 24040003 */  li    $a0, 3
/* 00444544 0320F809 */  jalr  $t9
/* 00444548 00000000 */   nop   
/* 0044454C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00444550 8F8C8B20 */  lw     $t4, %got(outofmem)($gp)
/* 00444554 918C0000 */  lbu   $t4, ($t4)
/* 00444558 55800086 */  bnezl $t4, .L00444774
/* 0044455C 8FBF003C */   lw    $ra, 0x3c($sp)
/* 00444560 8F9489C4 */  lw     $s4, %got(stattail)($gp)
/* 00444564 93CE0001 */  lbu   $t6, 1($fp)
/* 00444568 8F818A30 */  lw     $at, %got(aentptr)($gp)
/* 0044456C 8E940000 */  lw    $s4, ($s4)
/* 00444570 31D9001F */  andi  $t9, $t6, 0x1f
/* 00444574 8F868A48 */  lw     $a2, %got(loc_not_yet_seen)($gp)
/* 00444578 A2990014 */  sb    $t9, 0x14($s4)
/* 0044457C 8FD80004 */  lw    $t8, 4($fp)
/* 00444580 AE980018 */  sw    $t8, 0x18($s4)
/* 00444584 8FCF000C */  lw    $t7, 0xc($fp)
/* 00444588 A28F0017 */  sb    $t7, 0x17($s4)
/* 0044458C 93CA0008 */  lbu   $t2, 8($fp)
/* 00444590 A28A0015 */  sb    $t2, 0x15($s4)
/* 00444594 93CD0009 */  lbu   $t5, 9($fp)
/* 00444598 AE80001C */  sw    $zero, 0x1c($s4)
/* 0044459C A28D0016 */  sb    $t5, 0x16($s4)
/* 004445A0 AC340000 */  sw    $s4, ($at)
/* 004445A4 A0C00000 */  sb    $zero, ($a2)
/* 004445A8 8F9982D0 */  lw    $t9, %call16(appendgraph)($gp)
/* 004445AC 0320F809 */  jalr  $t9
/* 004445B0 00000000 */   nop   
/* 004445B4 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004445B8 8F8B8B20 */  lw     $t3, %got(outofmem)($gp)
/* 004445BC 916B0000 */  lbu   $t3, ($t3)
/* 004445C0 5560006C */  bnezl $t3, .L00444774
/* 004445C4 8FBF003C */   lw    $ra, 0x3c($sp)
/* 004445C8 8F9689B0 */  lw     $s6, %got(graphtail)($gp)
/* 004445CC 8F8E89B4 */  lw     $t6, %got(curgraphnode)($gp)
/* 004445D0 240C0001 */  li    $t4, 1
/* 004445D4 8ED30000 */  lw    $s3, ($s6)
/* 004445D8 A26C0004 */  sb    $t4, 4($s3)
/* 004445DC 8DCE0000 */  lw    $t6, ($t6)
/* 004445E0 11C00006 */  beqz  $t6, .L004445FC
/* 004445E4 00000000 */   nop   
/* 004445E8 8F99861C */  lw    $t9, %call16(dbgerror)($gp)
/* 004445EC 24040198 */  li    $a0, 408
/* 004445F0 0320F809 */  jalr  $t9
/* 004445F4 00000000 */   nop   
/* 004445F8 8FBC0034 */  lw    $gp, 0x34($sp)
.L004445FC:
/* 004445FC 8F8189B4 */  lw     $at, %got(curgraphnode)($gp)
/* 00444600 8F8589B4 */  lw     $a1, %got(curgraphnode)($gp)
/* 00444604 8F9489C4 */  lw     $s4, %got(stattail)($gp)
/* 00444608 8F8389B8 */  lw     $v1, %got(curstaticno)($gp)
/* 0044460C AC330000 */  sw    $s3, ($at)
/* 00444610 8CA50000 */  lw    $a1, ($a1)
/* 00444614 8E940000 */  lw    $s4, ($s4)
/* 00444618 8C620000 */  lw    $v0, ($v1)
/* 0044461C ACB4001C */  sw    $s4, 0x1c($a1)
/* 00444620 AE850010 */  sw    $a1, 0x10($s4)
/* 00444624 24590001 */  addiu $t9, $v0, 1
/* 00444628 AC790000 */  sw    $t9, ($v1)
/* 0044462C 10000050 */  b     .L00444770
/* 00444630 A4A20008 */   sh    $v0, 8($a1)
.L00444634:
/* 00444634 8F998658 */  lw    $t9, %call16(extendstat)($gp)
/* 00444638 00E02025 */  move  $a0, $a3
/* 0044463C 0320F809 */  jalr  $t9
/* 00444640 00000000 */   nop   
/* 00444644 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00444648 8FD80004 */  lw    $t8, 4($fp)
/* 0044464C 8F8F89C4 */  lw     $t7, %got(stattail)($gp)
/* 00444650 8DEF0000 */  lw    $t7, ($t7)
/* 00444654 10000046 */  b     .L00444770
/* 00444658 ADF80014 */   sw    $t8, 0x14($t7)
.L0044465C:
/* 0044465C 8F998658 */  lw    $t9, %call16(extendstat)($gp)
/* 00444660 00E02025 */  move  $a0, $a3
/* 00444664 0320F809 */  jalr  $t9
/* 00444668 00000000 */   nop   
/* 0044466C 10000040 */  b     .L00444770
/* 00444670 8FBC0034 */   lw    $gp, 0x34($sp)
.L00444674:
/* 00444674 8F998658 */  lw    $t9, %call16(extendstat)($gp)
/* 00444678 00E02025 */  move  $a0, $a3
/* 0044467C 0320F809 */  jalr  $t9
/* 00444680 00000000 */   nop   
/* 00444684 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00444688 97CA0002 */  lhu   $t2, 2($fp)
/* 0044468C 8F8D89C4 */  lw     $t5, %got(stattail)($gp)
/* 00444690 8DAD0000 */  lw    $t5, ($t5)
/* 00444694 10000036 */  b     .L00444770
/* 00444698 A1AA0014 */   sb    $t2, 0x14($t5)
.L0044469C:
/* 0044469C 8F998658 */  lw    $t9, %call16(extendstat)($gp)
/* 004446A0 00E02025 */  move  $a0, $a3
/* 004446A4 0320F809 */  jalr  $t9
/* 004446A8 00000000 */   nop   
/* 004446AC 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004446B0 93CB0001 */  lbu   $t3, 1($fp)
/* 004446B4 8FCE0004 */  lw    $t6, 4($fp)
/* 004446B8 8F9489C4 */  lw     $s4, %got(stattail)($gp)
/* 004446BC 316C001F */  andi  $t4, $t3, 0x1f
/* 004446C0 8E940000 */  lw    $s4, ($s4)
/* 004446C4 A28C0014 */  sb    $t4, 0x14($s4)
/* 004446C8 10000029 */  b     .L00444770
/* 004446CC AE8E0018 */   sw    $t6, 0x18($s4)
.L004446D0:
/* 004446D0 8F998658 */  lw    $t9, %call16(extendstat)($gp)
/* 004446D4 24040015 */  li    $a0, 21
/* 004446D8 0320F809 */  jalr  $t9
/* 004446DC 00000000 */   nop   
/* 004446E0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004446E4 93C40001 */  lbu   $a0, 1($fp)
/* 004446E8 8FD80008 */  lw    $t8, 8($fp)
/* 004446EC 8F9489C4 */  lw     $s4, %got(stattail)($gp)
/* 004446F0 3099001F */  andi  $t9, $a0, 0x1f
/* 004446F4 8FCA0004 */  lw    $t2, 4($fp)
/* 004446F8 8E940000 */  lw    $s4, ($s4)
/* 004446FC 8FCF000C */  lw    $t7, 0xc($fp)
/* 00444700 A2990014 */  sb    $t9, 0x14($s4)
/* 00444704 A2980015 */  sb    $t8, 0x15($s4)
/* 00444708 26900018 */  addiu $s0, $s4, 0x18
/* 0044470C 8E020004 */  lw    $v0, 4($s0)
/* 00444710 AE0F0000 */  sw    $t7, ($s0)
/* 00444714 0004CE00 */  sll   $t9, $a0, 0x18
/* 00444718 00026AC2 */  srl   $t5, $v0, 0xb
/* 0044471C 014D5826 */  xor   $t3, $t2, $t5
/* 00444720 000B62C0 */  sll   $t4, $t3, 0xb
/* 00444724 01827026 */  xor   $t6, $t4, $v0
/* 00444728 AE0E0004 */  sw    $t6, 4($s0)
/* 0044472C 92030006 */  lbu   $v1, 6($s0)
/* 00444730 0019C742 */  srl   $t8, $t9, 0x1d
/* 00444734 00037F40 */  sll   $t7, $v1, 0x1d
/* 00444738 000F5742 */  srl   $t2, $t7, 0x1d
/* 0044473C 030A6826 */  xor   $t5, $t8, $t2
/* 00444740 31AB0007 */  andi  $t3, $t5, 7
/* 00444744 01636026 */  xor   $t4, $t3, $v1
/* 00444748 10000009 */  b     .L00444770
/* 0044474C A20C0006 */   sb    $t4, 6($s0)
.L00444750:
/* 00444750 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 00444754 8F868044 */  lw    $a2, %got(RO_1000C42C)($gp)
/* 00444758 24040001 */  li    $a0, 1
/* 0044475C 240504F2 */  li    $a1, 1266
/* 00444760 2407000B */  li    $a3, 11
/* 00444764 0320F809 */  jalr  $t9
/* 00444768 24C6C42C */   addiu $a2, %lo(RO_1000C42C) # addiu $a2, $a2, -0x3bd4
/* 0044476C 8FBC0034 */  lw    $gp, 0x34($sp)
.L00444770:
/* 00444770 8FBF003C */  lw    $ra, 0x3c($sp)
.L00444774:
/* 00444774 8FB00014 */  lw    $s0, 0x14($sp)
/* 00444778 8FB10018 */  lw    $s1, 0x18($sp)
/* 0044477C 8FB2001C */  lw    $s2, 0x1c($sp)
/* 00444780 8FB30020 */  lw    $s3, 0x20($sp)
/* 00444784 8FB40024 */  lw    $s4, 0x24($sp)
/* 00444788 8FB50028 */  lw    $s5, 0x28($sp)
/* 0044478C 8FB6002C */  lw    $s6, 0x2c($sp)
/* 00444790 8FB70030 */  lw    $s7, 0x30($sp)
/* 00444794 8FBE0038 */  lw    $fp, 0x38($sp)
/* 00444798 03E00008 */  jr    $ra
/* 0044479C 27BD0110 */   addiu $sp, $sp, 0x110
    .type readnxtinst, @function
    .size readnxtinst, .-readnxtinst
    .end readnxtinst
)"");
