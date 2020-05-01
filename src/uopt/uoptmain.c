__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
RO_1000CF70:
    # 00456A2C oneproc
    .ascii " SECONDS IN REEMISSION OF "

RO_1000CF8A:
    # 00456A2C oneproc
    .ascii " * * "

RO_1000CF8F:
    # 00456A2C oneproc
    .ascii " SECONDS IN global coloring of "

RO_1000CFAE:
    # 00456A2C oneproc
    .ascii " * * "

RO_1000CFB3:
    # 00456A2C oneproc
    .ascii " SECONDS IN reg alloc preparation of "

RO_1000CFD8:
    # 00456A2C oneproc
    .ascii " * * "

RO_1000CFDD:
    # 00456A2C oneproc
    .ascii " SECONDS IN INDUCTION VARIABLE ELIM. OF "

RO_1000D005:
    # 00456A2C oneproc
    .ascii " * * "

RO_1000D00A:
    # 00456A2C oneproc
    .ascii " SECONDS IN CODE MOTION OF "

RO_1000D025:
    # 00456A2C oneproc
    .ascii " * * "

RO_1000D02A:
    # 00456A2C oneproc
    .ascii " SECONDS IN REMOVAL OF REDUNDANT STORES OF "

RO_1000D055:
    # 00456A2C oneproc
    .ascii " * * "

RO_1000D05A:
    # 00456A2C oneproc
    .ascii " SECONDS IN Patchvectors OF "

RO_1000D076:
    # 00456A2C oneproc
    .ascii " * * "

RO_1000D07B:
    # 00456A2C oneproc
    .ascii " not found in feedback file"

RO_1000D096:
    # 00456A2C oneproc
    .ascii "uopt: Warning: feedback data for procedure "

RO_1000D0C1:
    # 00456A2C oneproc
    .ascii " SECONDS IN LOCAL OPTIMIZATION OF "

RO_1000D0E3:
    # 00456A2C oneproc
    .ascii " * * "

RO_1000D0E8:
    # 00456A2C oneproc
    .ascii "f "

RO_1000D0EA:
    # 00456A2C oneproc
    .ascii "i "

RO_1000D0EC:
    # 00456A2C oneproc
    .ascii "(deleted) "

RO_1000D0F6:
    # 0045806C main
    .ascii " SECONDS IN WHOLE UCODE TO UCODE OPTIMIZATION"

RO_1000D123:
    # 0045806C main
    .ascii " * * "

RO_1000D128:
    # 0045806C main
    .ascii "uopt: Error: unexpected EOF in input ucode; giving up."

RO_1000D15E:
    # 0045806C main
    .asciz "uopt: Warning: file not optimized; use -g3 if both optimization and debug wanted"

.data
D_10010C90:
    # 00456310 func_00456310
    .byte 0x00,0x00,0x81,0x00,0x02,0x08,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x01,0x00,0x88,0x01,0x00

D_10010CA4:
    # 00456310 func_00456310
    .byte 0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x88,0x00,0x00

D_10010CB4:
    # 00456310 func_00456310
    .byte 0x00,0x00,0x81,0x00,0x02,0x08,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x01,0x00,0x88,0x00,0x00

D_10010CC8:
    # 00456310 func_00456310
    .byte 0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01

D_10010CD4:
    # 00456310 func_00456310
    .byte 0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x00,0x00

D_10010CE0:
    # 00456310 func_00456310
    .byte 0x00,0x80,0x00,0x10,0x80,0x00,0x00,0x00

D_10010CE8:
    # 00456310 func_00456310
    .byte 0x10,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00




.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
    .type func_00456310, @function
func_00456310:
    # 00456A2C oneproc
/* 00456310 3C1C0FBC */  .cpload $t9
/* 00456314 279C3F80 */  
/* 00456318 0399E021 */  
/* 0045631C 8F8E899C */  lw     $t6, %got(filteringout)($gp)
/* 00456320 27BDFFC0 */  addiu $sp, $sp, -0x40
/* 00456324 AFBF002C */  sw    $ra, 0x2c($sp)
/* 00456328 91CE0000 */  lbu   $t6, ($t6)
/* 0045632C AFBC0028 */  sw    $gp, 0x28($sp)
/* 00456330 AFB30024 */  sw    $s3, 0x24($sp)
/* 00456334 AFB20020 */  sw    $s2, 0x20($sp)
/* 00456338 AFB1001C */  sw    $s1, 0x1c($sp)
/* 0045633C AFB00018 */  sw    $s0, 0x18($sp)
/* 00456340 15C00004 */  bnez  $t6, .L00456354
/* 00456344 AFA2003C */   sw    $v0, 0x3c($sp)
/* 00456348 9058FFFF */  lbu   $t8, -1($v0)
/* 0045634C 13000060 */  beqz  $t8, .L004564D0
/* 00456350 00000000 */   nop   
.L00456354:
/* 00456354 8F8189B4 */  lw     $at, %got(curgraphnode)($gp)
/* 00456358 8F908DA4 */  lw     $s0, %got(u)($gp)
/* 0045635C 24120003 */  li    $s2, 3
/* 00456360 AC200000 */  sw    $zero, ($at)
/* 00456364 92020000 */  lbu   $v0, ($s0)
/* 00456368 2C590060 */  sltiu $t9, $v0, 0x60
/* 0045636C 13200009 */  beqz  $t9, .L00456394
/* 00456370 00000000 */   nop   
/* 00456374 8F8A8044 */  lw    $t2, %got(D_10010CE8)($gp)
/* 00456378 00024143 */  sra   $t0, $v0, 5
/* 0045637C 00084880 */  sll   $t1, $t0, 2
/* 00456380 254A0CE8 */  addiu $t2, %lo(D_10010CE8) # addiu $t2, $t2, 0xce8
/* 00456384 01495821 */  addu  $t3, $t2, $t1
/* 00456388 8D6C0000 */  lw    $t4, ($t3)
/* 0045638C 004C6804 */  sllv  $t5, $t4, $v0
/* 00456390 29B90000 */  slti  $t9, $t5, 0
.L00456394:
/* 00456394 1720004E */  bnez  $t9, .L004564D0
/* 00456398 00000000 */   nop   
/* 0045639C 8F938B20 */  lw     $s3, %got(outofmem)($gp)
/* 004563A0 8F918DBC */  lw     $s1, %got(optab)($gp)
.L004563A4:
/* 004563A4 00520019 */  multu $v0, $s2
/* 004563A8 2C4A0040 */  sltiu $t2, $v0, 0x40
/* 004563AC 00007812 */  mflo  $t7
/* 004563B0 022FC021 */  addu  $t8, $s1, $t7
/* 004563B4 93080001 */  lbu   $t0, 1($t8)
/* 004563B8 15000006 */  bnez  $t0, .L004563D4
/* 004563BC 00000000 */   nop   
/* 004563C0 8F998304 */  lw    $t9, %call16(copyline)($gp)
/* 004563C4 0320F809 */  jalr  $t9
/* 004563C8 00000000 */   nop   
/* 004563CC 1000002E */  b     .L00456488
/* 004563D0 8FBC0028 */   lw    $gp, 0x28($sp)
.L004563D4:
/* 004563D4 11400009 */  beqz  $t2, .L004563FC
/* 004563D8 00000000 */   nop   
/* 004563DC 8F8C8044 */  lw    $t4, %got(D_10010CE0)($gp)
/* 004563E0 00024943 */  sra   $t1, $v0, 5
/* 004563E4 00095880 */  sll   $t3, $t1, 2
/* 004563E8 258C0CE0 */  addiu $t4, %lo(D_10010CE0) # addiu $t4, $t4, 0xce0
/* 004563EC 018B6821 */  addu  $t5, $t4, $t3
/* 004563F0 8DAE0000 */  lw    $t6, ($t5)
/* 004563F4 004EC804 */  sllv  $t9, $t6, $v0
/* 004563F8 2B2A0000 */  slti  $t2, $t9, 0
.L004563FC:
/* 004563FC 5140000F */  beql  $t2, $zero, .L0045643C
/* 00456400 24010011 */   li    $at, 17
/* 00456404 8F99832C */  lw    $t9, %call16(readnxtinst)($gp)
/* 00456408 0320F809 */  jalr  $t9
/* 0045640C 00000000 */   nop   
/* 00456410 92780000 */  lbu   $t8, ($s3)
/* 00456414 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00456418 5700017E */  bnezl $t8, .L00456A14
/* 0045641C 8FBF002C */   lw    $ra, 0x2c($sp)
/* 00456420 8F8389C4 */  lw     $v1, %got(stattail)($gp)
/* 00456424 8C630000 */  lw    $v1, ($v1)
/* 00456428 8C68000C */  lw    $t0, 0xc($v1)
/* 0045642C 8D090010 */  lw    $t1, 0x10($t0)
/* 00456430 10000015 */  b     .L00456488
/* 00456434 AC690010 */   sw    $t1, 0x10($v1)
/* 00456438 24010011 */  li    $at, 17
.L0045643C:
/* 0045643C 14410012 */  bne   $v0, $at, .L00456488
/* 00456440 00000000 */   nop   
/* 00456444 8F8289C4 */  lw     $v0, %got(stattail)($gp)
/* 00456448 8F99832C */  lw    $t9, %call16(readnxtinst)($gp)
/* 0045644C 8C420000 */  lw    $v0, ($v0)
/* 00456450 0320F809 */  jalr  $t9
/* 00456454 AFA20034 */   sw    $v0, 0x34($sp)
/* 00456458 926C0000 */  lbu   $t4, ($s3)
/* 0045645C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00456460 8FA20034 */  lw    $v0, 0x34($sp)
/* 00456464 5580016B */  bnezl $t4, .L00456A14
/* 00456468 8FBF002C */   lw    $ra, 0x2c($sp)
/* 0045646C 8F8389C4 */  lw     $v1, %got(stattail)($gp)
/* 00456470 8C630000 */  lw    $v1, ($v1)
.L00456474:
/* 00456474 8C420008 */  lw    $v0, 8($v0)
/* 00456478 8C4B000C */  lw    $t3, 0xc($v0)
/* 0045647C 8D6D0010 */  lw    $t5, 0x10($t3)
/* 00456480 1443FFFC */  bne   $v0, $v1, .L00456474
/* 00456484 AC4D0010 */   sw    $t5, 0x10($v0)
.L00456488:
/* 00456488 8F9982FC */  lw    $t9, %call16(getop)($gp)
/* 0045648C 0320F809 */  jalr  $t9
/* 00456490 00000000 */   nop   
/* 00456494 92020000 */  lbu   $v0, ($s0)
/* 00456498 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045649C 2C4E0060 */  sltiu $t6, $v0, 0x60
/* 004564A0 11C00009 */  beqz  $t6, .L004564C8
/* 004564A4 00000000 */   nop   
/* 004564A8 8F8A8044 */  lw    $t2, %got(D_10010CE8)($gp)
/* 004564AC 0002C943 */  sra   $t9, $v0, 5
/* 004564B0 00197880 */  sll   $t7, $t9, 2
/* 004564B4 254A0CE8 */  addiu $t2, %lo(D_10010CE8) # addiu $t2, $t2, 0xce8
/* 004564B8 014FC021 */  addu  $t8, $t2, $t7
/* 004564BC 8F080000 */  lw    $t0, ($t8)
/* 004564C0 00484804 */  sllv  $t1, $t0, $v0
/* 004564C4 292E0000 */  slti  $t6, $t1, 0
.L004564C8:
/* 004564C8 11C0FFB6 */  beqz  $t6, .L004563A4
/* 004564CC 00000000 */   nop   
.L004564D0:
/* 004564D0 8F908DA4 */  lw     $s0, %got(u)($gp)
/* 004564D4 2401001F */  li    $at, 31
/* 004564D8 8F918DBC */  lw     $s1, %got(optab)($gp)
/* 004564DC 92020000 */  lbu   $v0, ($s0)
/* 004564E0 24120003 */  li    $s2, 3
/* 004564E4 8F938B20 */  lw     $s3, %got(outofmem)($gp)
/* 004564E8 10410149 */  beq   $v0, $at, .L00456A10
/* 004564EC 2C4B0060 */   sltiu $t3, $v0, 0x60
/* 004564F0 11600009 */  beqz  $t3, .L00456518
/* 004564F4 24010042 */   li    $at, 66
/* 004564F8 8F8A8044 */  lw    $t2, %got(D_10010CD4)($gp)
/* 004564FC 00026943 */  sra   $t5, $v0, 5
/* 00456500 000DC880 */  sll   $t9, $t5, 2
/* 00456504 254A0CD4 */  addiu $t2, %lo(D_10010CD4) # addiu $t2, $t2, 0xcd4
/* 00456508 01597821 */  addu  $t7, $t2, $t9
/* 0045650C 8DF80000 */  lw    $t8, ($t7)
/* 00456510 00584004 */  sllv  $t0, $t8, $v0
/* 00456514 290B0000 */  slti  $t3, $t0, 0
.L00456518:
/* 00456518 11600014 */  beqz  $t3, .L0045656C
/* 0045651C 00000000 */   nop   
/* 00456520 14410053 */  bne   $v0, $at, .L00456670
/* 00456524 00000000 */   nop   
/* 00456528 8F8C89C4 */  lw     $t4, %got(stattail)($gp)
/* 0045652C 8D8C0000 */  lw    $t4, ($t4)
/* 00456530 918E0000 */  lbu   $t6, ($t4)
/* 00456534 25CDFFE0 */  addiu $t5, $t6, -0x20
/* 00456538 2DAA0060 */  sltiu $t2, $t5, 0x60
/* 0045653C 11400009 */  beqz  $t2, .L00456564
/* 00456540 00000000 */   nop   
/* 00456544 8F988044 */  lw    $t8, %got(D_10010CC8)($gp)
/* 00456548 000DC943 */  sra   $t9, $t5, 5
/* 0045654C 00197880 */  sll   $t7, $t9, 2
/* 00456550 27180CC8 */  addiu $t8, %lo(D_10010CC8) # addiu $t8, $t8, 0xcc8
/* 00456554 030F4021 */  addu  $t0, $t8, $t7
/* 00456558 8D090000 */  lw    $t1, ($t0)
/* 0045655C 01A95804 */  sllv  $t3, $t1, $t5
/* 00456560 296A0000 */  slti  $t2, $t3, 0
.L00456564:
/* 00456564 11400042 */  beqz  $t2, .L00456670
/* 00456568 00000000 */   nop   
.L0045656C:
/* 0045656C 8F9982D0 */  lw    $t9, %call16(appendgraph)($gp)
/* 00456570 0320F809 */  jalr  $t9
/* 00456574 00000000 */   nop   
/* 00456578 926E0000 */  lbu   $t6, ($s3)
/* 0045657C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00456580 55C00124 */  bnezl $t6, .L00456A14
/* 00456584 8FBF002C */   lw    $ra, 0x2c($sp)
/* 00456588 8F9989B4 */  lw     $t9, %got(curgraphnode)($gp)
/* 0045658C 8F390000 */  lw    $t9, ($t9)
/* 00456590 1320001D */  beqz  $t9, .L00456608
/* 00456594 00000000 */   nop   
/* 00456598 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 0045659C 24040008 */  li    $a0, 8
/* 004565A0 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 004565A4 0320F809 */  jalr  $t9
/* 004565A8 00000000 */   nop   
/* 004565AC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004565B0 24040008 */  li    $a0, 8
/* 004565B4 8F8389B0 */  lw     $v1, %got(graphtail)($gp)
/* 004565B8 8F9889B4 */  lw     $t8, %got(curgraphnode)($gp)
/* 004565BC 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 004565C0 8C630000 */  lw    $v1, ($v1)
/* 004565C4 AC620014 */  sw    $v0, 0x14($v1)
/* 004565C8 8F180000 */  lw    $t8, ($t8)
/* 004565CC AC580000 */  sw    $t8, ($v0)
/* 004565D0 8C6F0014 */  lw    $t7, 0x14($v1)
/* 004565D4 ADE00004 */  sw    $zero, 4($t7)
/* 004565D8 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 004565DC 0320F809 */  jalr  $t9
/* 004565E0 00000000 */   nop   
/* 004565E4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004565E8 8F8889B0 */  lw     $t0, %got(graphtail)($gp)
/* 004565EC 8F8489B4 */  lw     $a0, %got(curgraphnode)($gp)
/* 004565F0 8D080000 */  lw    $t0, ($t0)
/* 004565F4 AC480000 */  sw    $t0, ($v0)
/* 004565F8 8C840000 */  lw    $a0, ($a0)
/* 004565FC 8C890018 */  lw    $t1, 0x18($a0)
/* 00456600 AC490004 */  sw    $t1, 4($v0)
/* 00456604 AC820018 */  sw    $v0, 0x18($a0)
.L00456608:
/* 00456608 8F8D89B0 */  lw     $t5, %got(graphtail)($gp)
/* 0045660C 8F8189B4 */  lw     $at, %got(curgraphnode)($gp)
/* 00456610 8DAD0000 */  lw    $t5, ($t5)
/* 00456614 AC2D0000 */  sw    $t5, ($at)
/* 00456618 920B0000 */  lbu   $t3, ($s0)
/* 0045661C 24010042 */  li    $at, 66
/* 00456620 15610013 */  bne   $t3, $at, .L00456670
/* 00456624 00000000 */   nop   
/* 00456628 8F8289B8 */  lw     $v0, %got(curstaticno)($gp)
/* 0045662C 24040060 */  li    $a0, 96
/* 00456630 8C430000 */  lw    $v1, ($v0)
/* 00456634 A5A30008 */  sh    $v1, 8($t5)
/* 00456638 246C0001 */  addiu $t4, $v1, 1
/* 0045663C AC4C0000 */  sw    $t4, ($v0)
/* 00456640 8F998658 */  lw    $t9, %call16(extendstat)($gp)
/* 00456644 0320F809 */  jalr  $t9
/* 00456648 00000000 */   nop   
/* 0045664C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00456650 8F8489B4 */  lw     $a0, %got(curgraphnode)($gp)
/* 00456654 8F8A89C4 */  lw     $t2, %got(stattail)($gp)
/* 00456658 8F9982CC */  lw    $t9, %call16(init_node_vectors)($gp)
/* 0045665C 8C840000 */  lw    $a0, ($a0)
/* 00456660 8D4A0000 */  lw    $t2, ($t2)
/* 00456664 0320F809 */  jalr  $t9
/* 00456668 AC8A0020 */   sw    $t2, 0x20($a0)
/* 0045666C 8FBC0028 */  lw    $gp, 0x28($sp)
.L00456670:
/* 00456670 8F818A70 */  lw     $at, %got(varrefs)($gp)
/* 00456674 8F8E8A74 */  lw     $t6, %got(varreflimit)($gp)
/* 00456678 8F99832C */  lw    $t9, %call16(readnxtinst)($gp)
/* 0045667C AC200000 */  sw    $zero, ($at)
/* 00456680 8F818A78 */  lw     $at, %got(curvarreflimit)($gp)
/* 00456684 8DCE0000 */  lw    $t6, ($t6)
/* 00456688 0320F809 */  jalr  $t9
/* 0045668C AC2E0000 */   sw    $t6, ($at)
/* 00456690 92790000 */  lbu   $t9, ($s3)
/* 00456694 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00456698 572000DE */  bnezl $t9, .L00456A14
/* 0045669C 8FBF002C */   lw    $ra, 0x2c($sp)
/* 004566A0 92020000 */  lbu   $v0, ($s0)
/* 004566A4 2C580060 */  sltiu $t8, $v0, 0x60
/* 004566A8 13000009 */  beqz  $t8, .L004566D0
/* 004566AC 00000000 */   nop   
/* 004566B0 8F898044 */  lw    $t1, %got(D_10010CD4)($gp)
/* 004566B4 00027943 */  sra   $t7, $v0, 5
/* 004566B8 000F4080 */  sll   $t0, $t7, 2
/* 004566BC 25290CD4 */  addiu $t1, %lo(D_10010CD4) # addiu $t1, $t1, 0xcd4
/* 004566C0 01285821 */  addu  $t3, $t1, $t0
/* 004566C4 8D6D0000 */  lw    $t5, ($t3)
/* 004566C8 004D6004 */  sllv  $t4, $t5, $v0
/* 004566CC 29980000 */  slti  $t8, $t4, 0
.L004566D0:
/* 004566D0 17000009 */  bnez  $t8, .L004566F8
/* 004566D4 2C4F00A0 */   sltiu $t7, $v0, 0xa0
/* 004566D8 8F8389B8 */  lw     $v1, %got(curstaticno)($gp)
/* 004566DC 8F8E89B4 */  lw     $t6, %got(curgraphnode)($gp)
/* 004566E0 8F8189B8 */  lw     $at, %got(curstaticno)($gp)
/* 004566E4 8C630000 */  lw    $v1, ($v1)
/* 004566E8 8DCE0000 */  lw    $t6, ($t6)
/* 004566EC 24790001 */  addiu $t9, $v1, 1
/* 004566F0 A5C30008 */  sh    $v1, 8($t6)
/* 004566F4 AC390000 */  sw    $t9, ($at)
.L004566F8:
/* 004566F8 11E00009 */  beqz  $t7, .L00456720
/* 004566FC 8F84895C */   lw     $a0, %got(endblock)($gp)
/* 00456700 8F8B8044 */  lw    $t3, %got(D_10010CB4)($gp)
/* 00456704 00024943 */  sra   $t1, $v0, 5
/* 00456708 00094080 */  sll   $t0, $t1, 2
/* 0045670C 256B0CB4 */  addiu $t3, %lo(D_10010CB4) # addiu $t3, $t3, 0xcb4
/* 00456710 01686821 */  addu  $t5, $t3, $t0
/* 00456714 8DAC0000 */  lw    $t4, ($t5)
/* 00456718 004C5004 */  sllv  $t2, $t4, $v0
/* 0045671C 294F0000 */  slti  $t7, $t2, 0
.L00456720:
/* 00456720 31EE00FF */  andi  $t6, $t7, 0xff
/* 00456724 15C00072 */  bnez  $t6, .L004568F0
/* 00456728 A08F0000 */   sb    $t7, ($a0)
/* 0045672C 8F9982FC */  lw    $t9, %call16(getop)($gp)
/* 00456730 0320F809 */  jalr  $t9
/* 00456734 00000000 */   nop   
/* 00456738 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045673C 8F99895C */  lw     $t9, %got(endblock)($gp)
/* 00456740 93390000 */  lbu   $t9, ($t9)
/* 00456744 5720001D */  bnezl $t9, .L004567BC
/* 00456748 92020000 */   lbu   $v0, ($s0)
/* 0045674C 92090000 */  lbu   $t1, ($s0)
.L00456750:
/* 00456750 01320019 */  multu $t1, $s2
/* 00456754 00005812 */  mflo  $t3
/* 00456758 022B4021 */  addu  $t0, $s1, $t3
/* 0045675C 910D0001 */  lbu   $t5, 1($t0)
/* 00456760 15A00006 */  bnez  $t5, .L0045677C
/* 00456764 00000000 */   nop   
/* 00456768 8F998304 */  lw    $t9, %call16(copyline)($gp)
/* 0045676C 0320F809 */  jalr  $t9
/* 00456770 00000000 */   nop   
/* 00456774 10000008 */  b     .L00456798
/* 00456778 8FBC0028 */   lw    $gp, 0x28($sp)
.L0045677C:
/* 0045677C 8F99832C */  lw    $t9, %call16(readnxtinst)($gp)
/* 00456780 0320F809 */  jalr  $t9
/* 00456784 00000000 */   nop   
/* 00456788 926C0000 */  lbu   $t4, ($s3)
/* 0045678C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00456790 558000A0 */  bnezl $t4, .L00456A14
/* 00456794 8FBF002C */   lw    $ra, 0x2c($sp)
.L00456798:
/* 00456798 8F9982FC */  lw    $t9, %call16(getop)($gp)
/* 0045679C 0320F809 */  jalr  $t9
/* 004567A0 00000000 */   nop   
/* 004567A4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004567A8 8F8A895C */  lw     $t2, %got(endblock)($gp)
/* 004567AC 914A0000 */  lbu   $t2, ($t2)
/* 004567B0 5140FFE7 */  beql  $t2, $zero, .L00456750
/* 004567B4 92090000 */   lbu   $t1, ($s0)
/* 004567B8 92020000 */  lbu   $v0, ($s0)
.L004567BC:
/* 004567BC 8FAA003C */  lw    $t2, 0x3c($sp)
/* 004567C0 2458FFE0 */  addiu $t8, $v0, -0x20
/* 004567C4 2F0F0080 */  sltiu $t7, $t8, 0x80
/* 004567C8 11E00009 */  beqz  $t7, .L004567F0
/* 004567CC 00000000 */   nop   
/* 004567D0 8F898044 */  lw    $t1, %got(D_10010CA4)($gp)
/* 004567D4 00187143 */  sra   $t6, $t8, 5
/* 004567D8 000EC880 */  sll   $t9, $t6, 2
/* 004567DC 25290CA4 */  addiu $t1, %lo(D_10010CA4) # addiu $t1, $t1, 0xca4
/* 004567E0 01395821 */  addu  $t3, $t1, $t9
/* 004567E4 8D680000 */  lw    $t0, ($t3)
/* 004567E8 03086804 */  sllv  $t5, $t0, $t8
/* 004567EC 29AF0000 */  slti  $t7, $t5, 0
.L004567F0:
/* 004567F0 15E00008 */  bnez  $t7, .L00456814
/* 004567F4 01E01825 */   move  $v1, $t7
/* 004567F8 38430017 */  xori  $v1, $v0, 0x17
/* 004567FC 2C630001 */  sltiu $v1, $v1, 1
/* 00456800 50600005 */  beql  $v1, $zero, .L00456818
/* 00456804 2C4E00A0 */   sltiu $t6, $v0, 0xa0
/* 00456808 8E03000C */  lw    $v1, 0xc($s0)
/* 0045680C 30630002 */  andi  $v1, $v1, 2
/* 00456810 0003182B */  sltu  $v1, $zero, $v1
.L00456814:
/* 00456814 2C4E00A0 */  sltiu $t6, $v0, 0xa0
.L00456818:
/* 00456818 11C00009 */  beqz  $t6, .L00456840
/* 0045681C A143FFFF */   sb    $v1, -1($t2)
/* 00456820 8F8B8044 */  lw    $t3, %got(D_10010C90)($gp)
/* 00456824 00024943 */  sra   $t1, $v0, 5
/* 00456828 0009C880 */  sll   $t9, $t1, 2
/* 0045682C 256B0C90 */  addiu $t3, %lo(D_10010C90) # addiu $t3, $t3, 0xc90
/* 00456830 01794021 */  addu  $t0, $t3, $t9
/* 00456834 8D180000 */  lw    $t8, ($t0)
/* 00456838 00586804 */  sllv  $t5, $t8, $v0
/* 0045683C 29AE0000 */  slti  $t6, $t5, 0
.L00456840:
/* 00456840 11C00062 */  beqz  $t6, .L004569CC
/* 00456844 00000000 */   nop   
/* 00456848 8F99832C */  lw    $t9, %call16(readnxtinst)($gp)
/* 0045684C 0320F809 */  jalr  $t9
/* 00456850 00000000 */   nop   
/* 00456854 926F0000 */  lbu   $t7, ($s3)
/* 00456858 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045685C 55E0006D */  bnezl $t7, .L00456A14
/* 00456860 8FBF002C */   lw    $ra, 0x2c($sp)
/* 00456864 8F9982FC */  lw    $t9, %call16(getop)($gp)
/* 00456868 8F81895C */  lw     $at, %got(endblock)($gp)
/* 0045686C 0320F809 */  jalr  $t9
/* 00456870 A0200000 */   sb    $zero, ($at)
/* 00456874 92020000 */  lbu   $v0, ($s0)
/* 00456878 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045687C 2401001F */  li    $at, 31
/* 00456880 00520019 */  multu $v0, $s2
/* 00456884 00005012 */  mflo  $t2
/* 00456888 022A4821 */  addu  $t1, $s1, $t2
/* 0045688C 912B0001 */  lbu   $t3, 1($t1)
/* 00456890 1560004E */  bnez  $t3, .L004569CC
/* 00456894 00000000 */   nop   
/* 00456898 1041004C */  beq   $v0, $at, .L004569CC
/* 0045689C 00000000 */   nop   
.L004568A0:
/* 004568A0 8F998304 */  lw    $t9, %call16(copyline)($gp)
/* 004568A4 0320F809 */  jalr  $t9
/* 004568A8 00000000 */   nop   
/* 004568AC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004568B0 8F9982FC */  lw    $t9, %call16(getop)($gp)
/* 004568B4 0320F809 */  jalr  $t9
/* 004568B8 00000000 */   nop   
/* 004568BC 92020000 */  lbu   $v0, ($s0)
/* 004568C0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004568C4 2401001F */  li    $at, 31
/* 004568C8 00520019 */  multu $v0, $s2
/* 004568CC 0000C812 */  mflo  $t9
/* 004568D0 02394021 */  addu  $t0, $s1, $t9
/* 004568D4 91180001 */  lbu   $t8, 1($t0)
/* 004568D8 1700003C */  bnez  $t8, .L004569CC
/* 004568DC 00000000 */   nop   
/* 004568E0 1441FFEF */  bne   $v0, $at, .L004568A0
/* 004568E4 00000000 */   nop   
/* 004568E8 10000038 */  b     .L004569CC
/* 004568EC 00000000 */   nop   
.L004568F0:
/* 004568F0 244DFFE0 */  addiu $t5, $v0, -0x20
/* 004568F4 2DAC0080 */  sltiu $t4, $t5, 0x80
/* 004568F8 11800009 */  beqz  $t4, .L00456920
/* 004568FC 8FB8003C */   lw    $t8, 0x3c($sp)
/* 00456900 8F8A8044 */  lw    $t2, %got(D_10010CA4)($gp)
/* 00456904 000D7143 */  sra   $t6, $t5, 5
/* 00456908 000E7880 */  sll   $t7, $t6, 2
/* 0045690C 254A0CA4 */  addiu $t2, %lo(D_10010CA4) # addiu $t2, $t2, 0xca4
/* 00456910 014F4821 */  addu  $t1, $t2, $t7
/* 00456914 8D2B0000 */  lw    $t3, ($t1)
/* 00456918 01ABC804 */  sllv  $t9, $t3, $t5
/* 0045691C 2B2C0000 */  slti  $t4, $t9, 0
.L00456920:
/* 00456920 15800008 */  bnez  $t4, .L00456944
/* 00456924 01801825 */   move  $v1, $t4
/* 00456928 38430017 */  xori  $v1, $v0, 0x17
/* 0045692C 2C630001 */  sltiu $v1, $v1, 1
/* 00456930 50600005 */  beql  $v1, $zero, .L00456948
/* 00456934 A303FFFF */   sb    $v1, -1($t8)
/* 00456938 8E03000C */  lw    $v1, 0xc($s0)
/* 0045693C 30630002 */  andi  $v1, $v1, 2
/* 00456940 0003182B */  sltu  $v1, $zero, $v1
.L00456944:
/* 00456944 A303FFFF */  sb    $v1, -1($t8)
.L00456948:
/* 00456948 A0800000 */  sb    $zero, ($a0)
/* 0045694C 8F9982FC */  lw    $t9, %call16(getop)($gp)
/* 00456950 0320F809 */  jalr  $t9
/* 00456954 00000000 */   nop   
/* 00456958 92020000 */  lbu   $v0, ($s0)
/* 0045695C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00456960 2401001F */  li    $at, 31
/* 00456964 00520019 */  multu $v0, $s2
/* 00456968 00007012 */  mflo  $t6
/* 0045696C 022E5021 */  addu  $t2, $s1, $t6
/* 00456970 914F0001 */  lbu   $t7, 1($t2)
/* 00456974 15E00015 */  bnez  $t7, .L004569CC
/* 00456978 00000000 */   nop   
/* 0045697C 10410013 */  beq   $v0, $at, .L004569CC
/* 00456980 00000000 */   nop   
.L00456984:
/* 00456984 8F998304 */  lw    $t9, %call16(copyline)($gp)
/* 00456988 0320F809 */  jalr  $t9
/* 0045698C 00000000 */   nop   
/* 00456990 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00456994 8F9982FC */  lw    $t9, %call16(getop)($gp)
/* 00456998 0320F809 */  jalr  $t9
/* 0045699C 00000000 */   nop   
/* 004569A0 92020000 */  lbu   $v0, ($s0)
/* 004569A4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004569A8 2401001F */  li    $at, 31
/* 004569AC 00520019 */  multu $v0, $s2
/* 004569B0 00004812 */  mflo  $t1
/* 004569B4 02295821 */  addu  $t3, $s1, $t1
/* 004569B8 916D0001 */  lbu   $t5, 1($t3)
/* 004569BC 15A00003 */  bnez  $t5, .L004569CC
/* 004569C0 00000000 */   nop   
/* 004569C4 1441FFEF */  bne   $v0, $at, .L00456984
/* 004569C8 00000000 */   nop   
.L004569CC:
/* 004569CC 8F99840C */  lw    $t9, %call16(constarith)($gp)
/* 004569D0 8F81899C */  lw     $at, %got(filteringout)($gp)
/* 004569D4 0320F809 */  jalr  $t9
/* 004569D8 A0200000 */   sb    $zero, ($at)
/* 004569DC 92790000 */  lbu   $t9, ($s3)
/* 004569E0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004569E4 5720000B */  bnezl $t9, .L00456A14
/* 004569E8 8FBF002C */   lw    $ra, 0x2c($sp)
/* 004569EC 8F8889C4 */  lw     $t0, %got(stattail)($gp)
/* 004569F0 8F8C89B4 */  lw     $t4, %got(curgraphnode)($gp)
/* 004569F4 8D080000 */  lw    $t0, ($t0)
/* 004569F8 8D8C0000 */  lw    $t4, ($t4)
/* 004569FC AD880020 */  sw    $t0, 0x20($t4)
/* 00456A00 8F99835C */  lw    $t9, %call16(codeimage)($gp)
/* 00456A04 0320F809 */  jalr  $t9
/* 00456A08 00000000 */   nop   
/* 00456A0C 8FBC0028 */  lw    $gp, 0x28($sp)
.L00456A10:
/* 00456A10 8FBF002C */  lw    $ra, 0x2c($sp)
.L00456A14:
/* 00456A14 8FB00018 */  lw    $s0, 0x18($sp)
/* 00456A18 8FB1001C */  lw    $s1, 0x1c($sp)
/* 00456A1C 8FB20020 */  lw    $s2, 0x20($sp)
/* 00456A20 8FB30024 */  lw    $s3, 0x24($sp)
/* 00456A24 03E00008 */  jr    $ra
/* 00456A28 27BD0040 */   addiu $sp, $sp, 0x40

glabel oneproc
    .ent oneproc
    # 0045806C main
/* 00456A2C 3C1C0FBC */  .cpload $t9
/* 00456A30 279C3864 */  
/* 00456A34 0399E021 */  
/* 00456A38 27BDFFB0 */  addiu $sp, $sp, -0x50
/* 00456A3C 8F99843C */  lw    $t9, %call16(getproc)($gp)
/* 00456A40 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 00456A44 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00456A48 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00456A4C AFA00028 */  sw    $zero, 0x28($sp)
/* 00456A50 AFA0002C */  sw    $zero, 0x2c($sp)
/* 00456A54 AFA00030 */  sw    $zero, 0x30($sp)
/* 00456A58 AFA00034 */  sw    $zero, 0x34($sp)
/* 00456A5C AFA00038 */  sw    $zero, 0x38($sp)
/* 00456A60 AFA0003C */  sw    $zero, 0x3c($sp)
/* 00456A64 AFA00040 */  sw    $zero, 0x40($sp)
/* 00456A68 AFA00044 */  sw    $zero, 0x44($sp)
/* 00456A6C 0320F809 */  jalr  $t9
/* 00456A70 8C840004 */   lw    $a0, 4($a0)
/* 00456A74 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00456A78 8F8E8DA4 */  lw     $t6, %got(u)($gp)
/* 00456A7C 8F818B6C */  lw     $at, %got(curproc)($gp)
/* 00456A80 8F9982EC */  lw    $t9, %call16(procinit)($gp)
/* 00456A84 8DCE000C */  lw    $t6, 0xc($t6)
/* 00456A88 AC220000 */  sw    $v0, ($at)
/* 00456A8C 8F818AF8 */  lw     $at, %got(usefp)($gp)
/* 00456A90 31CF0002 */  andi  $t7, $t6, 2
/* 00456A94 000FC02B */  sltu  $t8, $zero, $t7
/* 00456A98 0320F809 */  jalr  $t9
/* 00456A9C A0380000 */   sb    $t8, ($at)
/* 00456AA0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00456AA4 8F998730 */  lw    $t9, %call16(getclock)($gp)
/* 00456AA8 0320F809 */  jalr  $t9
/* 00456AAC 00000000 */   nop   
/* 00456AB0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00456AB4 8F998304 */  lw    $t9, %call16(copyline)($gp)
/* 00456AB8 8F8189A8 */  lw     $at, %got(lasttime)($gp)
/* 00456ABC 0320F809 */  jalr  $t9
/* 00456AC0 AC220000 */   sw    $v0, ($at)
/* 00456AC4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00456AC8 8F99841C */  lw    $t9, %call16(init_mtagtab)($gp)
/* 00456ACC 0320F809 */  jalr  $t9
/* 00456AD0 00000000 */   nop   
/* 00456AD4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00456AD8 8F888B6C */  lw     $t0, %got(curproc)($gp)
/* 00456ADC 8F998B68 */  lw     $t9, %got(sizethreshold)($gp)
/* 00456AE0 8D080000 */  lw    $t0, ($t0)
/* 00456AE4 8F390000 */  lw    $t9, ($t9)
/* 00456AE8 95090012 */  lhu   $t1, 0x12($t0)
/* 00456AEC 0329082A */  slt   $at, $t9, $t1
/* 00456AF0 10200007 */  beqz  $at, .L00456B10
/* 00456AF4 00000000 */   nop   
/* 00456AF8 8F998710 */  lw    $t9, %call16(skipproc)($gp)
/* 00456AFC 24040001 */  li    $a0, 1
/* 00456B00 0320F809 */  jalr  $t9
/* 00456B04 00000000 */   nop   
/* 00456B08 10000547 */  b     .L00458028
/* 00456B0C 8FBC0018 */   lw    $gp, 0x18($sp)
.L00456B10:
/* 00456B10 8F8A8A90 */  lw     $t2, %got(ctrl_head)($gp)
/* 00456B14 8D4A0000 */  lw    $t2, ($t2)
/* 00456B18 1140000C */  beqz  $t2, .L00456B4C
/* 00456B1C 00000000 */   nop   
/* 00456B20 8F99849C */  lw    $t9, %call16(proc_suppressed)($gp)
/* 00456B24 0320F809 */  jalr  $t9
/* 00456B28 00000000 */   nop   
/* 00456B2C 10400007 */  beqz  $v0, .L00456B4C
/* 00456B30 8FBC0018 */   lw    $gp, 0x18($sp)
/* 00456B34 8F998710 */  lw    $t9, %call16(skipproc)($gp)
/* 00456B38 24040002 */  li    $a0, 2
/* 00456B3C 0320F809 */  jalr  $t9
/* 00456B40 00000000 */   nop   
/* 00456B44 10000538 */  b     .L00458028
/* 00456B48 8FBC0018 */   lw    $gp, 0x18($sp)
.L00456B4C:
/* 00456B4C 8F8B8B5C */  lw     $t3, %got(entflag)($gp)
/* 00456B50 916B0000 */  lbu   $t3, ($t3)
/* 00456B54 316C0100 */  andi  $t4, $t3, 0x100
/* 00456B58 11800007 */  beqz  $t4, .L00456B78
/* 00456B5C 00000000 */   nop   
/* 00456B60 8F998710 */  lw    $t9, %call16(skipproc)($gp)
/* 00456B64 24040003 */  li    $a0, 3
/* 00456B68 0320F809 */  jalr  $t9
/* 00456B6C 00000000 */   nop   
/* 00456B70 1000052D */  b     .L00458028
/* 00456B74 8FBC0018 */   lw    $gp, 0x18($sp)
.L00456B78:
/* 00456B78 8F99869C */  lw    $t9, %call16(entervregveqv)($gp)
/* 00456B7C 0320F809 */  jalr  $t9
/* 00456B80 00000000 */   nop   
/* 00456B84 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00456B88 24060400 */  li    $a2, 1024
/* 00456B8C 8F8D8AF0 */  lw     $t5, %got(verbose)($gp)
/* 00456B90 91AD0000 */  lbu   $t5, ($t5)
/* 00456B94 11A0000E */  beqz  $t5, .L00456BD0
/* 00456B98 00000000 */   nop   
/* 00456B9C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 00456BA0 8F848908 */  lw     $a0, %got(err)($gp)
/* 00456BA4 8F878984 */  lw     $a3, %got(entnam0len)($gp)
/* 00456BA8 8F858DE4 */  lw     $a1, %got(entnam0)($gp)
/* 00456BAC 8C840000 */  lw    $a0, ($a0)
/* 00456BB0 0320F809 */  jalr  $t9
/* 00456BB4 8CE70000 */   lw    $a3, ($a3)
/* 00456BB8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00456BBC 8F9980A0 */  lw    $t9, %call16(fflush)($gp)
/* 00456BC0 8F848908 */  lw     $a0, %got(err)($gp)
/* 00456BC4 0320F809 */  jalr  $t9
/* 00456BC8 8C840000 */   lw    $a0, ($a0)
/* 00456BCC 8FBC0018 */  lw    $gp, 0x18($sp)
.L00456BD0:
/* 00456BD0 8F8E8B6C */  lw     $t6, %got(curproc)($gp)
/* 00456BD4 8DCE0000 */  lw    $t6, ($t6)
/* 00456BD8 91CF000D */  lbu   $t7, 0xd($t6)
/* 00456BDC 15E0003B */  bnez  $t7, .L00456CCC
/* 00456BE0 00000000 */   nop   
/* 00456BE4 8F988AF0 */  lw     $t8, %got(verbose)($gp)
/* 00456BE8 2406000A */  li    $a2, 10
/* 00456BEC 93180000 */  lbu   $t8, ($t8)
/* 00456BF0 1300000E */  beqz  $t8, .L00456C2C
/* 00456BF4 00000000 */   nop   
/* 00456BF8 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 00456BFC 8F848908 */  lw     $a0, %got(err)($gp)
/* 00456C00 8F858044 */  lw    $a1, %got(RO_1000D0EC)($gp)
/* 00456C04 2407000A */  li    $a3, 10
/* 00456C08 8C840000 */  lw    $a0, ($a0)
/* 00456C0C 0320F809 */  jalr  $t9
/* 00456C10 24A5D0EC */   addiu $a1, %lo(RO_1000D0EC) # addiu $a1, $a1, -0x2f14
/* 00456C14 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00456C18 8F9980A0 */  lw    $t9, %call16(fflush)($gp)
/* 00456C1C 8F848908 */  lw     $a0, %got(err)($gp)
/* 00456C20 0320F809 */  jalr  $t9
/* 00456C24 8C840000 */   lw    $a0, ($a0)
/* 00456C28 8FBC0018 */  lw    $gp, 0x18($sp)
.L00456C2C:
/* 00456C2C 8F9982FC */  lw    $t9, %call16(getop)($gp)
/* 00456C30 0320F809 */  jalr  $t9
/* 00456C34 00000000 */   nop   
/* 00456C38 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00456C3C 24010042 */  li    $at, 66
/* 00456C40 8F828DA4 */  lw     $v0, %got(u)($gp)
/* 00456C44 8F998DBC */  lw     $t9, %got(optab)($gp)
/* 00456C48 90420000 */  lbu   $v0, ($v0)
/* 00456C4C 00024080 */  sll   $t0, $v0, 2
/* 00456C50 01024023 */  subu  $t0, $t0, $v0
/* 00456C54 01194821 */  addu  $t1, $t0, $t9
/* 00456C58 912A0001 */  lbu   $t2, 1($t1)
/* 00456C5C 15400008 */  bnez  $t2, .L00456C80
/* 00456C60 00000000 */   nop   
/* 00456C64 8F998304 */  lw    $t9, %call16(copyline)($gp)
/* 00456C68 0320F809 */  jalr  $t9
/* 00456C6C 00000000 */   nop   
/* 00456C70 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00456C74 8F828DA4 */  lw     $v0, %got(u)($gp)
/* 00456C78 1000000F */  b     .L00456CB8
/* 00456C7C 90420000 */   lbu   $v0, ($v0)
.L00456C80:
/* 00456C80 5441000E */  bnel  $v0, $at, .L00456CBC
/* 00456C84 2401001F */   li    $at, 31
/* 00456C88 8F8B8DA4 */  lw     $t3, %got(u)($gp)
/* 00456C8C 956B0002 */  lhu   $t3, 2($t3)
/* 00456C90 316C0004 */  andi  $t4, $t3, 4
/* 00456C94 51800009 */  beql  $t4, $zero, .L00456CBC
/* 00456C98 2401001F */   li    $at, 31
/* 00456C9C 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 00456CA0 8F848DA4 */  lw     $a0, %got(u)($gp)
/* 00456CA4 0320F809 */  jalr  $t9
/* 00456CA8 00000000 */   nop   
/* 00456CAC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00456CB0 8F828DA4 */  lw     $v0, %got(u)($gp)
/* 00456CB4 90420000 */  lbu   $v0, ($v0)
.L00456CB8:
/* 00456CB8 2401001F */  li    $at, 31
.L00456CBC:
/* 00456CBC 1441FFDB */  bne   $v0, $at, .L00456C2C
/* 00456CC0 00000000 */   nop   
/* 00456CC4 100004D8 */  b     .L00458028
/* 00456CC8 00000000 */   nop   
.L00456CCC:
/* 00456CCC 8F81895C */  lw     $at, %got(endblock)($gp)
/* 00456CD0 240D0001 */  li    $t5, 1
/* 00456CD4 8F9982FC */  lw    $t9, %call16(getop)($gp)
/* 00456CD8 A0200000 */  sb    $zero, ($at)
/* 00456CDC 8F818A60 */  lw     $at, %got(inlopt)($gp)
/* 00456CE0 A02D0000 */  sb    $t5, ($at)
/* 00456CE4 8F818A48 */  lw     $at, %got(loc_not_yet_seen)($gp)
/* 00456CE8 0320F809 */  jalr  $t9
/* 00456CEC A0200000 */   sb    $zero, ($at)
/* 00456CF0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00456CF4 8F828DA4 */  lw     $v0, %got(u)($gp)
/* 00456CF8 8F8F8DBC */  lw     $t7, %got(optab)($gp)
/* 00456CFC 90420000 */  lbu   $v0, ($v0)
/* 00456D00 00027080 */  sll   $t6, $v0, 2
/* 00456D04 01C27023 */  subu  $t6, $t6, $v0
/* 00456D08 01CFC021 */  addu  $t8, $t6, $t7
/* 00456D0C 93080001 */  lbu   $t0, 1($t8)
/* 00456D10 55000013 */  bnezl $t0, .L00456D60
/* 00456D14 24010042 */   li    $at, 66
.L00456D18:
/* 00456D18 8F998304 */  lw    $t9, %call16(copyline)($gp)
/* 00456D1C 0320F809 */  jalr  $t9
/* 00456D20 00000000 */   nop   
/* 00456D24 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00456D28 8F9982FC */  lw    $t9, %call16(getop)($gp)
/* 00456D2C 0320F809 */  jalr  $t9
/* 00456D30 00000000 */   nop   
/* 00456D34 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00456D38 8F828DA4 */  lw     $v0, %got(u)($gp)
/* 00456D3C 8F898DBC */  lw     $t1, %got(optab)($gp)
/* 00456D40 90420000 */  lbu   $v0, ($v0)
/* 00456D44 0002C880 */  sll   $t9, $v0, 2
/* 00456D48 0322C823 */  subu  $t9, $t9, $v0
/* 00456D4C 03295021 */  addu  $t2, $t9, $t1
/* 00456D50 914B0001 */  lbu   $t3, 1($t2)
/* 00456D54 1160FFF0 */  beqz  $t3, .L00456D18
/* 00456D58 00000000 */   nop   
/* 00456D5C 24010042 */  li    $at, 66
.L00456D60:
/* 00456D60 1441001F */  bne   $v0, $at, .L00456DE0
/* 00456D64 00000000 */   nop   
/* 00456D68 8F9982D0 */  lw    $t9, %call16(appendgraph)($gp)
/* 00456D6C 0320F809 */  jalr  $t9
/* 00456D70 00000000 */   nop   
/* 00456D74 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00456D78 8F8C8B20 */  lw     $t4, %got(outofmem)($gp)
/* 00456D7C 918C0000 */  lbu   $t4, ($t4)
/* 00456D80 558004B7 */  bnezl $t4, .L00458060
/* 00456D84 8FBF001C */   lw    $ra, 0x1c($sp)
/* 00456D88 8F8D89B0 */  lw     $t5, %got(graphtail)($gp)
/* 00456D8C 8F8289B4 */  lw     $v0, %got(curgraphnode)($gp)
/* 00456D90 24040060 */  li    $a0, 96
/* 00456D94 8DAD0000 */  lw    $t5, ($t5)
/* 00456D98 AC4D0000 */  sw    $t5, ($v0)
/* 00456D9C A5A00008 */  sh    $zero, 8($t5)
/* 00456DA0 8F998658 */  lw    $t9, %call16(extendstat)($gp)
/* 00456DA4 0320F809 */  jalr  $t9
/* 00456DA8 00000000 */   nop   
/* 00456DAC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00456DB0 8F8489B4 */  lw     $a0, %got(curgraphnode)($gp)
/* 00456DB4 8F9982CC */  lw    $t9, %call16(init_node_vectors)($gp)
/* 00456DB8 8C840000 */  lw    $a0, ($a0)
/* 00456DBC 8C8F001C */  lw    $t7, 0x1c($a0)
/* 00456DC0 0320F809 */  jalr  $t9
/* 00456DC4 AC8F0020 */   sw    $t7, 0x20($a0)
/* 00456DC8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00456DCC 24180001 */  li    $t8, 1
/* 00456DD0 8F8189B8 */  lw     $at, %got(curstaticno)($gp)
/* 00456DD4 8F828DA4 */  lw     $v0, %got(u)($gp)
/* 00456DD8 AC380000 */  sw    $t8, ($at)
/* 00456DDC 90420000 */  lbu   $v0, ($v0)
.L00456DE0:
/* 00456DE0 8F81899C */  lw     $at, %got(filteringout)($gp)
/* 00456DE4 A3A0004F */  sb    $zero, 0x4f($sp)
/* 00456DE8 A0200000 */  sb    $zero, ($at)
/* 00456DEC 2401001F */  li    $at, 31
/* 00456DF0 10410013 */  beq   $v0, $at, .L00456E40
/* 00456DF4 00000000 */   nop   
.L00456DF8:
/* 00456DF8 8F998028 */  lw    $t9, %got(func_00456310)($gp)
/* 00456DFC 27A20050 */  addiu $v0, $sp, 0x50
/* 00456E00 27396310 */  addiu $t9, %lo(func_00456310) # addiu $t9, $t9, 0x6310
/* 00456E04 0320F809 */  jalr  $t9
/* 00456E08 00000000 */   nop   
/* 00456E0C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00456E10 24080001 */  li    $t0, 1
/* 00456E14 8F828B20 */  lw     $v0, %got(outofmem)($gp)
/* 00456E18 8F818A48 */  lw     $at, %got(loc_not_yet_seen)($gp)
/* 00456E1C 90420000 */  lbu   $v0, ($v0)
/* 00456E20 A0280000 */  sb    $t0, ($at)
/* 00456E24 14400479 */  bnez  $v0, .L0045800C
/* 00456E28 00000000 */   nop   
/* 00456E2C 8F998DA4 */  lw     $t9, %got(u)($gp)
/* 00456E30 2401001F */  li    $at, 31
/* 00456E34 93390000 */  lbu   $t9, ($t9)
/* 00456E38 1721FFEF */  bne   $t9, $at, .L00456DF8
/* 00456E3C 00000000 */   nop   
.L00456E40:
/* 00456E40 8F898960 */  lw     $t1, %got(ustackbot)($gp)
/* 00456E44 8F8A8964 */  lw     $t2, %got(ustack)($gp)
/* 00456E48 8D290000 */  lw    $t1, ($t1)
/* 00456E4C 8D4A0000 */  lw    $t2, ($t2)
/* 00456E50 112A0005 */  beq   $t1, $t2, .L00456E68
/* 00456E54 00000000 */   nop   
/* 00456E58 8F998610 */  lw    $t9, %call16(stackerror)($gp)
/* 00456E5C 0320F809 */  jalr  $t9
/* 00456E60 00000000 */   nop   
/* 00456E64 8FBC0018 */  lw    $gp, 0x18($sp)
.L00456E68:
/* 00456E68 8F8C8DA4 */  lw     $t4, %got(u)($gp)
/* 00456E6C 27AB0028 */  addiu $t3, $sp, 0x28
/* 00456E70 8F988AF0 */  lw     $t8, %got(verbose)($gp)
/* 00456E74 8D8E0000 */  lw    $t6, ($t4)
/* 00456E78 8D8D0004 */  lw    $t5, 4($t4)
/* 00456E7C 8F818DA8 */  lw     $at, %got(lastcopiedu)($gp)
/* 00456E80 AD6E0000 */  sw    $t6, ($t3)
/* 00456E84 AD6D0004 */  sw    $t5, 4($t3)
/* 00456E88 8D8D000C */  lw    $t5, 0xc($t4)
/* 00456E8C 8D8E0008 */  lw    $t6, 8($t4)
/* 00456E90 240F001F */  li    $t7, 31
/* 00456E94 AD6D000C */  sw    $t5, 0xc($t3)
/* 00456E98 AD6E0008 */  sw    $t6, 8($t3)
/* 00456E9C 8D8E0010 */  lw    $t6, 0x10($t4)
/* 00456EA0 8D8D0014 */  lw    $t5, 0x14($t4)
/* 00456EA4 AD6E0010 */  sw    $t6, 0x10($t3)
/* 00456EA8 AD6D0014 */  sw    $t5, 0x14($t3)
/* 00456EAC 8D8D001C */  lw    $t5, 0x1c($t4)
/* 00456EB0 8D8E0018 */  lw    $t6, 0x18($t4)
/* 00456EB4 AD6D001C */  sw    $t5, 0x1c($t3)
/* 00456EB8 AD6E0018 */  sw    $t6, 0x18($t3)
/* 00456EBC 93180000 */  lbu   $t8, ($t8)
/* 00456EC0 A02F0000 */  sb    $t7, ($at)
/* 00456EC4 13000042 */  beqz  $t8, .L00456FD0
/* 00456EC8 00000000 */   nop   
/* 00456ECC 8F848908 */  lw     $a0, %got(err)($gp)
/* 00456ED0 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 00456ED4 24050028 */  li    $a1, 40
/* 00456ED8 8C840000 */  lw    $a0, ($a0)
/* 00456EDC 24060001 */  li    $a2, 1
/* 00456EE0 2407000A */  li    $a3, 10
/* 00456EE4 0320F809 */  jalr  $t9
/* 00456EE8 AFA40024 */   sw    $a0, 0x24($sp)
/* 00456EEC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00456EF0 8FA40024 */  lw    $a0, 0x24($sp)
/* 00456EF4 24060001 */  li    $a2, 1
/* 00456EF8 8F998878 */  lw    $t9, %call16(write_cardinal)($gp)
/* 00456EFC 8F8589B8 */  lw     $a1, %got(curstaticno)($gp)
/* 00456F00 2407000A */  li    $a3, 10
/* 00456F04 0320F809 */  jalr  $t9
/* 00456F08 8CA50000 */   lw    $a1, ($a1)
/* 00456F0C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00456F10 24050029 */  li    $a1, 41
/* 00456F14 24060001 */  li    $a2, 1
/* 00456F18 8F848908 */  lw     $a0, %got(err)($gp)
/* 00456F1C 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 00456F20 2407000A */  li    $a3, 10
/* 00456F24 8C840000 */  lw    $a0, ($a0)
/* 00456F28 0320F809 */  jalr  $t9
/* 00456F2C AFA40024 */   sw    $a0, 0x24($sp)
/* 00456F30 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00456F34 8FA40024 */  lw    $a0, 0x24($sp)
/* 00456F38 24050020 */  li    $a1, 32
/* 00456F3C 8F888B0C */  lw     $t0, %got(allcallersave)($gp)
/* 00456F40 91080000 */  lbu   $t0, ($t0)
/* 00456F44 11000017 */  beqz  $t0, .L00456FA4
/* 00456F48 00000000 */   nop   
/* 00456F4C 8F998B10 */  lw     $t9, %got(propagate_ee_saves)($gp)
/* 00456F50 24070002 */  li    $a3, 2
/* 00456F54 24060002 */  li    $a2, 2
/* 00456F58 93390000 */  lbu   $t9, ($t9)
/* 00456F5C 13200008 */  beqz  $t9, .L00456F80
/* 00456F60 00000000 */   nop   
/* 00456F64 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 00456F68 8F858044 */  lw    $a1, %got(RO_1000D0EA)($gp)
/* 00456F6C 24060002 */  li    $a2, 2
/* 00456F70 0320F809 */  jalr  $t9
/* 00456F74 24A5D0EA */   addiu $a1, %lo(RO_1000D0EA) # addiu $a1, $a1, -0x2f16
/* 00456F78 10000007 */  b     .L00456F98
/* 00456F7C 8FBC0018 */   lw    $gp, 0x18($sp)
.L00456F80:
/* 00456F80 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 00456F84 8F858044 */  lw    $a1, %got(RO_1000D0E8)($gp)
/* 00456F88 24070002 */  li    $a3, 2
/* 00456F8C 0320F809 */  jalr  $t9
/* 00456F90 24A5D0E8 */   addiu $a1, %lo(RO_1000D0E8) # addiu $a1, $a1, -0x2f18
/* 00456F94 8FBC0018 */  lw    $gp, 0x18($sp)
.L00456F98:
/* 00456F98 8F848908 */  lw     $a0, %got(err)($gp)
/* 00456F9C 10000008 */  b     .L00456FC0
/* 00456FA0 8C840000 */   lw    $a0, ($a0)
.L00456FA4:
/* 00456FA4 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 00456FA8 24060001 */  li    $a2, 1
/* 00456FAC 2407000A */  li    $a3, 10
/* 00456FB0 0320F809 */  jalr  $t9
/* 00456FB4 AFA40024 */   sw    $a0, 0x24($sp)
/* 00456FB8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00456FBC 8FA40024 */  lw    $a0, 0x24($sp)
.L00456FC0:
/* 00456FC0 8F9980A0 */  lw    $t9, %call16(fflush)($gp)
/* 00456FC4 0320F809 */  jalr  $t9
/* 00456FC8 00000000 */   nop   
/* 00456FCC 8FBC0018 */  lw    $gp, 0x18($sp)
.L00456FD0:
/* 00456FD0 8F998730 */  lw    $t9, %call16(getclock)($gp)
/* 00456FD4 0320F809 */  jalr  $t9
/* 00456FD8 00000000 */   nop   
/* 00456FDC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00456FE0 8F898A64 */  lw     $t1, %got(listwritten)($gp)
/* 00456FE4 8F8189A0 */  lw     $at, %got(time1)($gp)
/* 00456FE8 91290000 */  lbu   $t1, ($t1)
/* 00456FEC AC220000 */  sw    $v0, ($at)
/* 00456FF0 1120004C */  beqz  $t1, .L00457124
/* 00456FF4 00000000 */   nop   
/* 00456FF8 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 00456FFC 8F848CCC */  lw     $a0, %got(list)($gp)
/* 00457000 8F858044 */  lw    $a1, %got(RO_1000D0E3)($gp)
/* 00457004 24060005 */  li    $a2, 5
/* 00457008 24070005 */  li    $a3, 5
/* 0045700C 8C840000 */  lw    $a0, ($a0)
/* 00457010 0320F809 */  jalr  $t9
/* 00457014 24A5D0E3 */   addiu $a1, %lo(RO_1000D0E3) # addiu $a1, $a1, -0x2f1d
/* 00457018 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0045701C 240103E8 */  li    $at, 1000
/* 00457020 24060004 */  li    $a2, 4
/* 00457024 8F8A89A0 */  lw     $t2, %got(time1)($gp)
/* 00457028 8F8B89A8 */  lw     $t3, %got(lasttime)($gp)
/* 0045702C 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 00457030 8D4A0000 */  lw    $t2, ($t2)
/* 00457034 8D6B0000 */  lw    $t3, ($t3)
/* 00457038 8F848CCC */  lw     $a0, %got(list)($gp)
/* 0045703C 2407000A */  li    $a3, 10
/* 00457040 014B2823 */  subu  $a1, $t2, $t3
/* 00457044 00A1001A */  div   $zero, $a1, $at
/* 00457048 00002812 */  mflo  $a1
/* 0045704C 8C840000 */  lw    $a0, ($a0)
/* 00457050 0320F809 */  jalr  $t9
/* 00457054 00000000 */   nop   
/* 00457058 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0045705C 2405002E */  li    $a1, 46
/* 00457060 24060001 */  li    $a2, 1
/* 00457064 8F848CCC */  lw     $a0, %got(list)($gp)
/* 00457068 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0045706C 2407000A */  li    $a3, 10
/* 00457070 8C840000 */  lw    $a0, ($a0)
/* 00457074 0320F809 */  jalr  $t9
/* 00457078 AFA40024 */   sw    $a0, 0x24($sp)
/* 0045707C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00457080 240103E8 */  li    $at, 1000
/* 00457084 8FA40024 */  lw    $a0, 0x24($sp)
/* 00457088 8F8C89A0 */  lw     $t4, %got(time1)($gp)
/* 0045708C 8F8D89A8 */  lw     $t5, %got(lasttime)($gp)
/* 00457090 8D8C0000 */  lw    $t4, ($t4)
/* 00457094 8DAD0000 */  lw    $t5, ($t5)
/* 00457098 018D7023 */  subu  $t6, $t4, $t5
/* 0045709C 01C1001A */  div   $zero, $t6, $at
/* 004570A0 00002810 */  mfhi  $a1
/* 004570A4 04A10002 */  bgez  $a1, .L004570B0
/* 004570A8 00000000 */   nop   
/* 004570AC 20A503E8 */  addi  $a1, $a1, 0x3e8
.L004570B0:
/* 004570B0 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 004570B4 24060003 */  li    $a2, 3
/* 004570B8 2407000A */  li    $a3, 10
/* 004570BC 0320F809 */  jalr  $t9
/* 004570C0 00000000 */   nop   
/* 004570C4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004570C8 24060022 */  li    $a2, 34
/* 004570CC 24070022 */  li    $a3, 34
/* 004570D0 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 004570D4 8F848CCC */  lw     $a0, %got(list)($gp)
/* 004570D8 8F858044 */  lw    $a1, %got(RO_1000D0C1)($gp)
/* 004570DC 8C840000 */  lw    $a0, ($a0)
/* 004570E0 0320F809 */  jalr  $t9
/* 004570E4 24A5D0C1 */   addiu $a1, %lo(RO_1000D0C1) # addiu $a1, $a1, -0x2f3f
/* 004570E8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004570EC 24060400 */  li    $a2, 1024
/* 004570F0 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 004570F4 8F848CCC */  lw     $a0, %got(list)($gp)
/* 004570F8 8F878984 */  lw     $a3, %got(entnam0len)($gp)
/* 004570FC 8F858DE4 */  lw     $a1, %got(entnam0)($gp)
/* 00457100 8C840000 */  lw    $a0, ($a0)
/* 00457104 0320F809 */  jalr  $t9
/* 00457108 8CE70000 */   lw    $a3, ($a3)
/* 0045710C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00457110 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 00457114 8F848CCC */  lw     $a0, %got(list)($gp)
/* 00457118 0320F809 */  jalr  $t9
/* 0045711C 8C840000 */   lw    $a0, ($a0)
/* 00457120 8FBC0018 */  lw    $gp, 0x18($sp)
.L00457124:
/* 00457124 8F838BD4 */  lw     $v1, %got(lopttime)($gp)
/* 00457128 8F8289A0 */  lw     $v0, %got(time1)($gp)
/* 0045712C 8F8889A8 */  lw     $t0, %got(lasttime)($gp)
/* 00457130 8C6F0000 */  lw    $t7, ($v1)
/* 00457134 8C420000 */  lw    $v0, ($v0)
/* 00457138 8D080000 */  lw    $t0, ($t0)
/* 0045713C 8F898A94 */  lw     $t1, %got(dbugno)($gp)
/* 00457140 01E2C021 */  addu  $t8, $t7, $v0
/* 00457144 8F8189A8 */  lw     $at, %got(lasttime)($gp)
/* 00457148 0308C823 */  subu  $t9, $t8, $t0
/* 0045714C AC790000 */  sw    $t9, ($v1)
/* 00457150 8D290000 */  lw    $t1, ($t1)
/* 00457154 AC220000 */  sw    $v0, ($at)
/* 00457158 24010001 */  li    $at, 1
/* 0045715C 15210005 */  bne   $t1, $at, .L00457174
/* 00457160 00000000 */   nop   
/* 00457164 8F998234 */  lw    $t9, %call16(printtab)($gp)
/* 00457168 0320F809 */  jalr  $t9
/* 0045716C 00000000 */   nop   
/* 00457170 8FBC0018 */  lw    $gp, 0x18($sp)
.L00457174:
/* 00457174 8F8A8A6C */  lw     $t2, %got(usefeedback)($gp)
/* 00457178 914A0000 */  lbu   $t2, ($t2)
/* 0045717C 1140003D */  beqz  $t2, .L00457274
/* 00457180 00000000 */   nop   
/* 00457184 8F8B8B6C */  lw     $t3, %got(curproc)($gp)
/* 00457188 8D6B0000 */  lw    $t3, ($t3)
/* 0045718C 8D6C0034 */  lw    $t4, 0x34($t3)
/* 00457190 11800006 */  beqz  $t4, .L004571AC
/* 00457194 00000000 */   nop   
/* 00457198 8F9982C0 */  lw    $t9, %call16(bb_frequencies)($gp)
/* 0045719C 0320F809 */  jalr  $t9
/* 004571A0 00000000 */   nop   
/* 004571A4 10000033 */  b     .L00457274
/* 004571A8 8FBC0018 */   lw    $gp, 0x18($sp)
.L004571AC:
/* 004571AC 8F8D8B58 */  lw     $t5, %got(warn_flag)($gp)
/* 004571B0 24010001 */  li    $at, 1
/* 004571B4 91AD0000 */  lbu   $t5, ($t5)
/* 004571B8 11A1002E */  beq   $t5, $at, .L00457274
/* 004571BC 00000000 */   nop   
/* 004571C0 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 004571C4 8F818B08 */  lw     $at, %got(warned)($gp)
/* 004571C8 8F848908 */  lw     $a0, %got(err)($gp)
/* 004571CC 240E0001 */  li    $t6, 1
/* 004571D0 A02E0000 */  sb    $t6, ($at)
/* 004571D4 0320F809 */  jalr  $t9
/* 004571D8 8C840000 */   lw    $a0, ($a0)
/* 004571DC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004571E0 2406002B */  li    $a2, 43
/* 004571E4 2407002B */  li    $a3, 43
/* 004571E8 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 004571EC 8F848908 */  lw     $a0, %got(err)($gp)
/* 004571F0 8F858044 */  lw    $a1, %got(RO_1000D096)($gp)
/* 004571F4 8C840000 */  lw    $a0, ($a0)
/* 004571F8 0320F809 */  jalr  $t9
/* 004571FC 24A5D096 */   addiu $a1, %lo(RO_1000D096) # addiu $a1, $a1, -0x2f6a
/* 00457200 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00457204 24060400 */  li    $a2, 1024
/* 00457208 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0045720C 8F848908 */  lw     $a0, %got(err)($gp)
/* 00457210 8F878984 */  lw     $a3, %got(entnam0len)($gp)
/* 00457214 8F858DE4 */  lw     $a1, %got(entnam0)($gp)
/* 00457218 8C840000 */  lw    $a0, ($a0)
/* 0045721C 0320F809 */  jalr  $t9
/* 00457220 8CE70000 */   lw    $a3, ($a3)
/* 00457224 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00457228 2406001B */  li    $a2, 27
/* 0045722C 2407001B */  li    $a3, 27
/* 00457230 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 00457234 8F848908 */  lw     $a0, %got(err)($gp)
/* 00457238 8F858044 */  lw    $a1, %got(RO_1000D07B)($gp)
/* 0045723C 8C840000 */  lw    $a0, ($a0)
/* 00457240 0320F809 */  jalr  $t9
/* 00457244 24A5D07B */   addiu $a1, %lo(RO_1000D07B) # addiu $a1, $a1, -0x2f85
/* 00457248 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0045724C 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 00457250 8F848908 */  lw     $a0, %got(err)($gp)
/* 00457254 0320F809 */  jalr  $t9
/* 00457258 8C840000 */   lw    $a0, ($a0)
/* 0045725C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00457260 8F9980A0 */  lw    $t9, %call16(fflush)($gp)
/* 00457264 8F848908 */  lw     $a0, %got(err)($gp)
/* 00457268 0320F809 */  jalr  $t9
/* 0045726C 8C840000 */   lw    $a0, ($a0)
/* 00457270 8FBC0018 */  lw    $gp, 0x18($sp)
.L00457274:
/* 00457274 8F9985FC */  lw    $t9, %call16(tail_recursion)($gp)
/* 00457278 0320F809 */  jalr  $t9
/* 0045727C 00000000 */   nop   
/* 00457280 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00457284 8F9982D4 */  lw    $t9, %call16(controlflow)($gp)
/* 00457288 0320F809 */  jalr  $t9
/* 0045728C 00000000 */   nop   
/* 00457290 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00457294 8F998410 */  lw    $t9, %call16(analoop)($gp)
/* 00457298 0320F809 */  jalr  $t9
/* 0045729C 00000000 */   nop   
/* 004572A0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004572A4 24010008 */  li    $at, 8
/* 004572A8 8F8F8A94 */  lw     $t7, %got(dbugno)($gp)
/* 004572AC 8DEF0000 */  lw    $t7, ($t7)
/* 004572B0 15E10007 */  bne   $t7, $at, .L004572D0
/* 004572B4 00000000 */   nop   
/* 004572B8 8F998260 */  lw    $t9, %call16(print_loop_relations)($gp)
/* 004572BC 8F848A08 */  lw     $a0, %got(toplevelloops)($gp)
/* 004572C0 00002825 */  move  $a1, $zero
/* 004572C4 0320F809 */  jalr  $t9
/* 004572C8 8C840000 */   lw    $a0, ($a0)
/* 004572CC 8FBC0018 */  lw    $gp, 0x18($sp)
.L004572D0:
/* 004572D0 8F9985D0 */  lw    $t9, %call16(loopunroll)($gp)
/* 004572D4 0320F809 */  jalr  $t9
/* 004572D8 00000000 */   nop   
/* 004572DC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004572E0 24010008 */  li    $at, 8
/* 004572E4 8F988A94 */  lw     $t8, %got(dbugno)($gp)
/* 004572E8 8F180000 */  lw    $t8, ($t8)
/* 004572EC 17010007 */  bne   $t8, $at, .L0045730C
/* 004572F0 00000000 */   nop   
/* 004572F4 8F998260 */  lw    $t9, %call16(print_loop_relations)($gp)
/* 004572F8 8F848A08 */  lw     $a0, %got(toplevelloops)($gp)
/* 004572FC 00002825 */  move  $a1, $zero
/* 00457300 0320F809 */  jalr  $t9
/* 00457304 8C840000 */   lw    $a0, ($a0)
/* 00457308 8FBC0018 */  lw    $gp, 0x18($sp)
.L0045730C:
/* 0045730C 8F9984B4 */  lw    $t9, %call16(patchvectors)($gp)
/* 00457310 8F818A60 */  lw     $at, %got(inlopt)($gp)
/* 00457314 0320F809 */  jalr  $t9
/* 00457318 A0200000 */   sb    $zero, ($at)
/* 0045731C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00457320 8F9982F0 */  lw    $t9, %call16(procinit_regs)($gp)
/* 00457324 0320F809 */  jalr  $t9
/* 00457328 00000000 */   nop   
/* 0045732C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00457330 8F828B20 */  lw     $v0, %got(outofmem)($gp)
/* 00457334 90420000 */  lbu   $v0, ($v0)
/* 00457338 14400334 */  bnez  $v0, .L0045800C
/* 0045733C 00000000 */   nop   
/* 00457340 8F998730 */  lw    $t9, %call16(getclock)($gp)
/* 00457344 0320F809 */  jalr  $t9
/* 00457348 00000000 */   nop   
/* 0045734C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00457350 24060005 */  li    $a2, 5
/* 00457354 8F888A64 */  lw     $t0, %got(listwritten)($gp)
/* 00457358 8F8189A0 */  lw     $at, %got(time1)($gp)
/* 0045735C 91080000 */  lbu   $t0, ($t0)
/* 00457360 AC220000 */  sw    $v0, ($at)
/* 00457364 1100004B */  beqz  $t0, .L00457494
/* 00457368 00000000 */   nop   
/* 0045736C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 00457370 8F848CCC */  lw     $a0, %got(list)($gp)
/* 00457374 8F858044 */  lw    $a1, %got(RO_1000D076)($gp)
/* 00457378 24070005 */  li    $a3, 5
/* 0045737C 8C840000 */  lw    $a0, ($a0)
/* 00457380 0320F809 */  jalr  $t9
/* 00457384 24A5D076 */   addiu $a1, %lo(RO_1000D076) # addiu $a1, $a1, -0x2f8a
/* 00457388 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0045738C 240103E8 */  li    $at, 1000
/* 00457390 24060004 */  li    $a2, 4
/* 00457394 8F9989A0 */  lw     $t9, %got(time1)($gp)
/* 00457398 8F8989A8 */  lw     $t1, %got(lasttime)($gp)
/* 0045739C 8F848CCC */  lw     $a0, %got(list)($gp)
/* 004573A0 8F390000 */  lw    $t9, ($t9)
/* 004573A4 8D290000 */  lw    $t1, ($t1)
/* 004573A8 2407000A */  li    $a3, 10
/* 004573AC 8C840000 */  lw    $a0, ($a0)
/* 004573B0 03292823 */  subu  $a1, $t9, $t1
/* 004573B4 00A1001A */  div   $zero, $a1, $at
/* 004573B8 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 004573BC 00002812 */  mflo  $a1
/* 004573C0 0320F809 */  jalr  $t9
/* 004573C4 00000000 */   nop   
/* 004573C8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004573CC 2405002E */  li    $a1, 46
/* 004573D0 24060001 */  li    $a2, 1
/* 004573D4 8F848CCC */  lw     $a0, %got(list)($gp)
/* 004573D8 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 004573DC 2407000A */  li    $a3, 10
/* 004573E0 8C840000 */  lw    $a0, ($a0)
/* 004573E4 0320F809 */  jalr  $t9
/* 004573E8 AFA40024 */   sw    $a0, 0x24($sp)
/* 004573EC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004573F0 240103E8 */  li    $at, 1000
/* 004573F4 8FA40024 */  lw    $a0, 0x24($sp)
/* 004573F8 8F8A89A0 */  lw     $t2, %got(time1)($gp)
/* 004573FC 8F8B89A8 */  lw     $t3, %got(lasttime)($gp)
/* 00457400 8D4A0000 */  lw    $t2, ($t2)
/* 00457404 8D6B0000 */  lw    $t3, ($t3)
/* 00457408 014B6023 */  subu  $t4, $t2, $t3
/* 0045740C 0181001A */  div   $zero, $t4, $at
/* 00457410 00002810 */  mfhi  $a1
/* 00457414 04A10002 */  bgez  $a1, .L00457420
/* 00457418 00000000 */   nop   
/* 0045741C 20A503E8 */  addi  $a1, $a1, 0x3e8
.L00457420:
/* 00457420 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 00457424 24060003 */  li    $a2, 3
/* 00457428 2407000A */  li    $a3, 10
/* 0045742C 0320F809 */  jalr  $t9
/* 00457430 00000000 */   nop   
/* 00457434 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00457438 2406001C */  li    $a2, 28
/* 0045743C 2407001C */  li    $a3, 28
/* 00457440 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 00457444 8F848CCC */  lw     $a0, %got(list)($gp)
/* 00457448 8F858044 */  lw    $a1, %got(RO_1000D05A)($gp)
/* 0045744C 8C840000 */  lw    $a0, ($a0)
/* 00457450 0320F809 */  jalr  $t9
/* 00457454 24A5D05A */   addiu $a1, %lo(RO_1000D05A) # addiu $a1, $a1, -0x2fa6
/* 00457458 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0045745C 24060400 */  li    $a2, 1024
/* 00457460 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 00457464 8F848CCC */  lw     $a0, %got(list)($gp)
/* 00457468 8F878984 */  lw     $a3, %got(entnam0len)($gp)
/* 0045746C 8F858DE4 */  lw     $a1, %got(entnam0)($gp)
/* 00457470 8C840000 */  lw    $a0, ($a0)
/* 00457474 0320F809 */  jalr  $t9
/* 00457478 8CE70000 */   lw    $a3, ($a3)
/* 0045747C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00457480 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 00457484 8F848CCC */  lw     $a0, %got(list)($gp)
/* 00457488 0320F809 */  jalr  $t9
/* 0045748C 8C840000 */   lw    $a0, ($a0)
/* 00457490 8FBC0018 */  lw    $gp, 0x18($sp)
.L00457494:
/* 00457494 8F8D89A0 */  lw     $t5, %got(time1)($gp)
/* 00457498 8F998228 */  lw    $t9, %call16(copypropagate)($gp)
/* 0045749C 8F8189A8 */  lw     $at, %got(lasttime)($gp)
/* 004574A0 8DAD0000 */  lw    $t5, ($t5)
/* 004574A4 0320F809 */  jalr  $t9
/* 004574A8 AC2D0000 */   sw    $t5, ($at)
/* 004574AC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004574B0 8F828B20 */  lw     $v0, %got(outofmem)($gp)
/* 004574B4 90420000 */  lbu   $v0, ($v0)
/* 004574B8 144002D4 */  bnez  $v0, .L0045800C
/* 004574BC 00000000 */   nop   
/* 004574C0 8F998730 */  lw    $t9, %call16(getclock)($gp)
/* 004574C4 0320F809 */  jalr  $t9
/* 004574C8 00000000 */   nop   
/* 004574CC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004574D0 24060005 */  li    $a2, 5
/* 004574D4 8F8E8A64 */  lw     $t6, %got(listwritten)($gp)
/* 004574D8 8F8189A0 */  lw     $at, %got(time1)($gp)
/* 004574DC 91CE0000 */  lbu   $t6, ($t6)
/* 004574E0 AC220000 */  sw    $v0, ($at)
/* 004574E4 11C0004B */  beqz  $t6, .L00457614
/* 004574E8 00000000 */   nop   
/* 004574EC 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 004574F0 8F848CCC */  lw     $a0, %got(list)($gp)
/* 004574F4 8F858044 */  lw    $a1, %got(RO_1000D055)($gp)
/* 004574F8 24070005 */  li    $a3, 5
/* 004574FC 8C840000 */  lw    $a0, ($a0)
/* 00457500 0320F809 */  jalr  $t9
/* 00457504 24A5D055 */   addiu $a1, %lo(RO_1000D055) # addiu $a1, $a1, -0x2fab
/* 00457508 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0045750C 240103E8 */  li    $at, 1000
/* 00457510 24060004 */  li    $a2, 4
/* 00457514 8F8F89A0 */  lw     $t7, %got(time1)($gp)
/* 00457518 8F9889A8 */  lw     $t8, %got(lasttime)($gp)
/* 0045751C 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 00457520 8DEF0000 */  lw    $t7, ($t7)
/* 00457524 8F180000 */  lw    $t8, ($t8)
/* 00457528 8F848CCC */  lw     $a0, %got(list)($gp)
/* 0045752C 2407000A */  li    $a3, 10
/* 00457530 01F82823 */  subu  $a1, $t7, $t8
/* 00457534 00A1001A */  div   $zero, $a1, $at
/* 00457538 00002812 */  mflo  $a1
/* 0045753C 8C840000 */  lw    $a0, ($a0)
/* 00457540 0320F809 */  jalr  $t9
/* 00457544 00000000 */   nop   
/* 00457548 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0045754C 2405002E */  li    $a1, 46
/* 00457550 24060001 */  li    $a2, 1
/* 00457554 8F848CCC */  lw     $a0, %got(list)($gp)
/* 00457558 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0045755C 2407000A */  li    $a3, 10
/* 00457560 8C840000 */  lw    $a0, ($a0)
/* 00457564 0320F809 */  jalr  $t9
/* 00457568 AFA40024 */   sw    $a0, 0x24($sp)
/* 0045756C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00457570 240103E8 */  li    $at, 1000
/* 00457574 8FA40024 */  lw    $a0, 0x24($sp)
/* 00457578 8F8889A0 */  lw     $t0, %got(time1)($gp)
/* 0045757C 8F9989A8 */  lw     $t9, %got(lasttime)($gp)
/* 00457580 8D080000 */  lw    $t0, ($t0)
/* 00457584 8F390000 */  lw    $t9, ($t9)
/* 00457588 01194823 */  subu  $t1, $t0, $t9
/* 0045758C 0121001A */  div   $zero, $t1, $at
/* 00457590 00002810 */  mfhi  $a1
/* 00457594 04A10002 */  bgez  $a1, .L004575A0
/* 00457598 00000000 */   nop   
/* 0045759C 20A503E8 */  addi  $a1, $a1, 0x3e8
.L004575A0:
/* 004575A0 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 004575A4 24060003 */  li    $a2, 3
/* 004575A8 2407000A */  li    $a3, 10
/* 004575AC 0320F809 */  jalr  $t9
/* 004575B0 00000000 */   nop   
/* 004575B4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004575B8 2406002B */  li    $a2, 43
/* 004575BC 2407002B */  li    $a3, 43
/* 004575C0 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 004575C4 8F848CCC */  lw     $a0, %got(list)($gp)
/* 004575C8 8F858044 */  lw    $a1, %got(RO_1000D02A)($gp)
/* 004575CC 8C840000 */  lw    $a0, ($a0)
/* 004575D0 0320F809 */  jalr  $t9
/* 004575D4 24A5D02A */   addiu $a1, %lo(RO_1000D02A) # addiu $a1, $a1, -0x2fd6
/* 004575D8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004575DC 24060400 */  li    $a2, 1024
/* 004575E0 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 004575E4 8F848CCC */  lw     $a0, %got(list)($gp)
/* 004575E8 8F878984 */  lw     $a3, %got(entnam0len)($gp)
/* 004575EC 8F858DE4 */  lw     $a1, %got(entnam0)($gp)
/* 004575F0 8C840000 */  lw    $a0, ($a0)
/* 004575F4 0320F809 */  jalr  $t9
/* 004575F8 8CE70000 */   lw    $a3, ($a3)
/* 004575FC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00457600 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 00457604 8F848CCC */  lw     $a0, %got(list)($gp)
/* 00457608 0320F809 */  jalr  $t9
/* 0045760C 8C840000 */   lw    $a0, ($a0)
/* 00457610 8FBC0018 */  lw    $gp, 0x18($sp)
.L00457614:
/* 00457614 8F828A94 */  lw     $v0, %got(dbugno)($gp)
/* 00457618 8F8A89A0 */  lw     $t2, %got(time1)($gp)
/* 0045761C 8F8189A8 */  lw     $at, %got(lasttime)($gp)
/* 00457620 8C420000 */  lw    $v0, ($v0)
/* 00457624 8D4A0000 */  lw    $t2, ($t2)
/* 00457628 18400007 */  blez  $v0, .L00457648
/* 0045762C AC2A0000 */   sw    $t2, ($at)
/* 00457630 8F998230 */  lw    $t9, %call16(printitab)($gp)
/* 00457634 0320F809 */  jalr  $t9
/* 00457638 00000000 */   nop   
/* 0045763C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00457640 8F828A94 */  lw     $v0, %got(dbugno)($gp)
/* 00457644 8C420000 */  lw    $v0, ($v0)
.L00457648:
/* 00457648 24010002 */  li    $at, 2
/* 0045764C 14410005 */  bne   $v0, $at, .L00457664
/* 00457650 00000000 */   nop   
/* 00457654 8F99823C */  lw    $t9, %call16(printlinfo)($gp)
/* 00457658 0320F809 */  jalr  $t9
/* 0045765C 00000000 */   nop   
/* 00457660 8FBC0018 */  lw    $gp, 0x18($sp)
.L00457664:
/* 00457664 8F9982D8 */  lw    $t9, %call16(findinduct)($gp)
/* 00457668 0320F809 */  jalr  $t9
/* 0045766C 00000000 */   nop   
/* 00457670 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00457674 8F828B20 */  lw     $v0, %got(outofmem)($gp)
/* 00457678 90420000 */  lbu   $v0, ($v0)
/* 0045767C 14400263 */  bnez  $v0, .L0045800C
/* 00457680 00000000 */   nop   
/* 00457684 8F998204 */  lw    $t9, %call16(codemotion)($gp)
/* 00457688 0320F809 */  jalr  $t9
/* 0045768C 00000000 */   nop   
/* 00457690 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00457694 8F828B20 */  lw     $v0, %got(outofmem)($gp)
/* 00457698 90420000 */  lbu   $v0, ($v0)
/* 0045769C 1440025B */  bnez  $v0, .L0045800C
/* 004576A0 00000000 */   nop   
/* 004576A4 8F8B8A94 */  lw     $t3, %got(dbugno)($gp)
/* 004576A8 24010003 */  li    $at, 3
/* 004576AC 8D6B0000 */  lw    $t3, ($t3)
/* 004576B0 15610005 */  bne   $t3, $at, .L004576C8
/* 004576B4 00000000 */   nop   
/* 004576B8 8F998248 */  lw    $t9, %call16(printcm)($gp)
/* 004576BC 0320F809 */  jalr  $t9
/* 004576C0 00000000 */   nop   
/* 004576C4 8FBC0018 */  lw    $gp, 0x18($sp)
.L004576C8:
/* 004576C8 8F998730 */  lw    $t9, %call16(getclock)($gp)
/* 004576CC 0320F809 */  jalr  $t9
/* 004576D0 00000000 */   nop   
/* 004576D4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004576D8 24060005 */  li    $a2, 5
/* 004576DC 8F8C8A64 */  lw     $t4, %got(listwritten)($gp)
/* 004576E0 8F8189A0 */  lw     $at, %got(time1)($gp)
/* 004576E4 918C0000 */  lbu   $t4, ($t4)
/* 004576E8 AC220000 */  sw    $v0, ($at)
/* 004576EC 1180004B */  beqz  $t4, .L0045781C
/* 004576F0 00000000 */   nop   
/* 004576F4 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 004576F8 8F848CCC */  lw     $a0, %got(list)($gp)
/* 004576FC 8F858044 */  lw    $a1, %got(RO_1000D025)($gp)
/* 00457700 24070005 */  li    $a3, 5
/* 00457704 8C840000 */  lw    $a0, ($a0)
/* 00457708 0320F809 */  jalr  $t9
/* 0045770C 24A5D025 */   addiu $a1, %lo(RO_1000D025) # addiu $a1, $a1, -0x2fdb
/* 00457710 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00457714 240103E8 */  li    $at, 1000
/* 00457718 24060004 */  li    $a2, 4
/* 0045771C 8F8D89A0 */  lw     $t5, %got(time1)($gp)
/* 00457720 8F8E89A8 */  lw     $t6, %got(lasttime)($gp)
/* 00457724 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 00457728 8DAD0000 */  lw    $t5, ($t5)
/* 0045772C 8DCE0000 */  lw    $t6, ($t6)
/* 00457730 8F848CCC */  lw     $a0, %got(list)($gp)
/* 00457734 2407000A */  li    $a3, 10
/* 00457738 01AE2823 */  subu  $a1, $t5, $t6
/* 0045773C 00A1001A */  div   $zero, $a1, $at
/* 00457740 00002812 */  mflo  $a1
/* 00457744 8C840000 */  lw    $a0, ($a0)
/* 00457748 0320F809 */  jalr  $t9
/* 0045774C 00000000 */   nop   
/* 00457750 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00457754 2405002E */  li    $a1, 46
/* 00457758 24060001 */  li    $a2, 1
/* 0045775C 8F848CCC */  lw     $a0, %got(list)($gp)
/* 00457760 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 00457764 2407000A */  li    $a3, 10
/* 00457768 8C840000 */  lw    $a0, ($a0)
/* 0045776C 0320F809 */  jalr  $t9
/* 00457770 AFA40024 */   sw    $a0, 0x24($sp)
/* 00457774 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00457778 240103E8 */  li    $at, 1000
/* 0045777C 8FA40024 */  lw    $a0, 0x24($sp)
/* 00457780 8F8F89A0 */  lw     $t7, %got(time1)($gp)
/* 00457784 8F9889A8 */  lw     $t8, %got(lasttime)($gp)
/* 00457788 8DEF0000 */  lw    $t7, ($t7)
/* 0045778C 8F180000 */  lw    $t8, ($t8)
/* 00457790 01F84023 */  subu  $t0, $t7, $t8
/* 00457794 0101001A */  div   $zero, $t0, $at
/* 00457798 00002810 */  mfhi  $a1
/* 0045779C 04A10002 */  bgez  $a1, .L004577A8
/* 004577A0 00000000 */   nop   
/* 004577A4 20A503E8 */  addi  $a1, $a1, 0x3e8
.L004577A8:
/* 004577A8 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 004577AC 24060003 */  li    $a2, 3
/* 004577B0 2407000A */  li    $a3, 10
/* 004577B4 0320F809 */  jalr  $t9
/* 004577B8 00000000 */   nop   
/* 004577BC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004577C0 2406001B */  li    $a2, 27
/* 004577C4 2407001B */  li    $a3, 27
/* 004577C8 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 004577CC 8F848CCC */  lw     $a0, %got(list)($gp)
/* 004577D0 8F858044 */  lw    $a1, %got(RO_1000D00A)($gp)
/* 004577D4 8C840000 */  lw    $a0, ($a0)
/* 004577D8 0320F809 */  jalr  $t9
/* 004577DC 24A5D00A */   addiu $a1, %lo(RO_1000D00A) # addiu $a1, $a1, -0x2ff6
/* 004577E0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004577E4 24060400 */  li    $a2, 1024
/* 004577E8 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 004577EC 8F848CCC */  lw     $a0, %got(list)($gp)
/* 004577F0 8F878984 */  lw     $a3, %got(entnam0len)($gp)
/* 004577F4 8F858DE4 */  lw     $a1, %got(entnam0)($gp)
/* 004577F8 8C840000 */  lw    $a0, ($a0)
/* 004577FC 0320F809 */  jalr  $t9
/* 00457800 8CE70000 */   lw    $a3, ($a3)
/* 00457804 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00457808 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0045780C 8F848CCC */  lw     $a0, %got(list)($gp)
/* 00457810 0320F809 */  jalr  $t9
/* 00457814 8C840000 */   lw    $a0, ($a0)
/* 00457818 8FBC0018 */  lw    $gp, 0x18($sp)
.L0045781C:
/* 0045781C 8F9989A0 */  lw     $t9, %got(time1)($gp)
/* 00457820 8F8189A8 */  lw     $at, %got(lasttime)($gp)
/* 00457824 8F390000 */  lw    $t9, ($t9)
/* 00457828 AC390000 */  sw    $t9, ($at)
/* 0045782C 8F998608 */  lw    $t9, %call16(eliminduct)($gp)
/* 00457830 0320F809 */  jalr  $t9
/* 00457834 00000000 */   nop   
/* 00457838 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0045783C 8F998730 */  lw    $t9, %call16(getclock)($gp)
/* 00457840 0320F809 */  jalr  $t9
/* 00457844 00000000 */   nop   
/* 00457848 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0045784C 24060005 */  li    $a2, 5
/* 00457850 8F898A64 */  lw     $t1, %got(listwritten)($gp)
/* 00457854 8F8189A0 */  lw     $at, %got(time1)($gp)
/* 00457858 91290000 */  lbu   $t1, ($t1)
/* 0045785C AC220000 */  sw    $v0, ($at)
/* 00457860 1120004B */  beqz  $t1, .L00457990
/* 00457864 00000000 */   nop   
/* 00457868 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0045786C 8F848CCC */  lw     $a0, %got(list)($gp)
/* 00457870 8F858044 */  lw    $a1, %got(RO_1000D005)($gp)
/* 00457874 24070005 */  li    $a3, 5
/* 00457878 8C840000 */  lw    $a0, ($a0)
/* 0045787C 0320F809 */  jalr  $t9
/* 00457880 24A5D005 */   addiu $a1, %lo(RO_1000D005) # addiu $a1, $a1, -0x2ffb
/* 00457884 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00457888 240103E8 */  li    $at, 1000
/* 0045788C 24060004 */  li    $a2, 4
/* 00457890 8F8A89A0 */  lw     $t2, %got(time1)($gp)
/* 00457894 8F8B89A8 */  lw     $t3, %got(lasttime)($gp)
/* 00457898 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0045789C 8D4A0000 */  lw    $t2, ($t2)
/* 004578A0 8D6B0000 */  lw    $t3, ($t3)
/* 004578A4 8F848CCC */  lw     $a0, %got(list)($gp)
/* 004578A8 2407000A */  li    $a3, 10
/* 004578AC 014B2823 */  subu  $a1, $t2, $t3
/* 004578B0 00A1001A */  div   $zero, $a1, $at
/* 004578B4 00002812 */  mflo  $a1
/* 004578B8 8C840000 */  lw    $a0, ($a0)
/* 004578BC 0320F809 */  jalr  $t9
/* 004578C0 00000000 */   nop   
/* 004578C4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004578C8 2405002E */  li    $a1, 46
/* 004578CC 24060001 */  li    $a2, 1
/* 004578D0 8F848CCC */  lw     $a0, %got(list)($gp)
/* 004578D4 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 004578D8 2407000A */  li    $a3, 10
/* 004578DC 8C840000 */  lw    $a0, ($a0)
/* 004578E0 0320F809 */  jalr  $t9
/* 004578E4 AFA40024 */   sw    $a0, 0x24($sp)
/* 004578E8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004578EC 240103E8 */  li    $at, 1000
/* 004578F0 8FA40024 */  lw    $a0, 0x24($sp)
/* 004578F4 8F8C89A0 */  lw     $t4, %got(time1)($gp)
/* 004578F8 8F8D89A8 */  lw     $t5, %got(lasttime)($gp)
/* 004578FC 8D8C0000 */  lw    $t4, ($t4)
/* 00457900 8DAD0000 */  lw    $t5, ($t5)
/* 00457904 018D7023 */  subu  $t6, $t4, $t5
/* 00457908 01C1001A */  div   $zero, $t6, $at
/* 0045790C 00002810 */  mfhi  $a1
/* 00457910 04A10002 */  bgez  $a1, .L0045791C
/* 00457914 00000000 */   nop   
/* 00457918 20A503E8 */  addi  $a1, $a1, 0x3e8
.L0045791C:
/* 0045791C 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 00457920 24060003 */  li    $a2, 3
/* 00457924 2407000A */  li    $a3, 10
/* 00457928 0320F809 */  jalr  $t9
/* 0045792C 00000000 */   nop   
/* 00457930 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00457934 24060028 */  li    $a2, 40
/* 00457938 24070028 */  li    $a3, 40
/* 0045793C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 00457940 8F848CCC */  lw     $a0, %got(list)($gp)
/* 00457944 8F858044 */  lw    $a1, %got(RO_1000CFDD)($gp)
/* 00457948 8C840000 */  lw    $a0, ($a0)
/* 0045794C 0320F809 */  jalr  $t9
/* 00457950 24A5CFDD */   addiu $a1, %lo(RO_1000CFDD) # addiu $a1, $a1, -0x3023
/* 00457954 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00457958 24060400 */  li    $a2, 1024
/* 0045795C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 00457960 8F848CCC */  lw     $a0, %got(list)($gp)
/* 00457964 8F878984 */  lw     $a3, %got(entnam0len)($gp)
/* 00457968 8F858DE4 */  lw     $a1, %got(entnam0)($gp)
/* 0045796C 8C840000 */  lw    $a0, ($a0)
/* 00457970 0320F809 */  jalr  $t9
/* 00457974 8CE70000 */   lw    $a3, ($a3)
/* 00457978 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0045797C 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 00457980 8F848CCC */  lw     $a0, %got(list)($gp)
/* 00457984 0320F809 */  jalr  $t9
/* 00457988 8C840000 */   lw    $a0, ($a0)
/* 0045798C 8FBC0018 */  lw    $gp, 0x18($sp)
.L00457990:
/* 00457990 8F8F89A0 */  lw     $t7, %got(time1)($gp)
/* 00457994 8F9985E8 */  lw    $t9, %call16(getexpsources)($gp)
/* 00457998 8F8189A8 */  lw     $at, %got(lasttime)($gp)
/* 0045799C 8DEF0000 */  lw    $t7, ($t7)
/* 004579A0 0320F809 */  jalr  $t9
/* 004579A4 AC2F0000 */   sw    $t7, ($at)
/* 004579A8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004579AC 8F828B20 */  lw     $v0, %got(outofmem)($gp)
/* 004579B0 90420000 */  lbu   $v0, ($v0)
/* 004579B4 14400195 */  bnez  $v0, .L0045800C
/* 004579B8 00000000 */   nop   
/* 004579BC 8F988A94 */  lw     $t8, %got(dbugno)($gp)
/* 004579C0 24010004 */  li    $at, 4
/* 004579C4 8F180000 */  lw    $t8, ($t8)
/* 004579C8 17010005 */  bne   $t8, $at, .L004579E0
/* 004579CC 00000000 */   nop   
/* 004579D0 8F99824C */  lw    $t9, %call16(printscm)($gp)
/* 004579D4 0320F809 */  jalr  $t9
/* 004579D8 00000000 */   nop   
/* 004579DC 8FBC0018 */  lw    $gp, 0x18($sp)
.L004579E0:
/* 004579E0 8F888B24 */  lw     $t0, %got(mipsflag)($gp)
/* 004579E4 24010003 */  li    $at, 3
/* 004579E8 91080000 */  lbu   $t0, ($t0)
/* 004579EC 15010005 */  bne   $t0, $at, .L00457A04
/* 004579F0 00000000 */   nop   
/* 004579F4 8F998374 */  lw    $t9, %call16(find_ix_loadstores)($gp)
/* 004579F8 0320F809 */  jalr  $t9
/* 004579FC 00000000 */   nop   
/* 00457A00 8FBC0018 */  lw    $gp, 0x18($sp)
.L00457A04:
/* 00457A04 8F9989B8 */  lw     $t9, %got(curstaticno)($gp)
/* 00457A08 8F818A50 */  lw     $at, %got(bvlivransize)($gp)
/* 00457A0C 8F390000 */  lw    $t9, ($t9)
/* 00457A10 2729FFFF */  addiu $t1, $t9, -1
/* 00457A14 8F9984D0 */  lw    $t9, %call16(makelivranges)($gp)
/* 00457A18 000951C2 */  srl   $t2, $t1, 7
/* 00457A1C 254B0001 */  addiu $t3, $t2, 1
/* 00457A20 0320F809 */  jalr  $t9
/* 00457A24 AC2B0000 */   sw    $t3, ($at)
/* 00457A28 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00457A2C 8F828B20 */  lw     $v0, %got(outofmem)($gp)
/* 00457A30 90420000 */  lbu   $v0, ($v0)
/* 00457A34 14400175 */  bnez  $v0, .L0045800C
/* 00457A38 00000000 */   nop   
/* 00457A3C 8F9984D4 */  lw    $t9, %call16(regdataflow)($gp)
/* 00457A40 0320F809 */  jalr  $t9
/* 00457A44 00000000 */   nop   
/* 00457A48 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00457A4C 8F828B20 */  lw     $v0, %got(outofmem)($gp)
/* 00457A50 90420000 */  lbu   $v0, ($v0)
/* 00457A54 1440016D */  bnez  $v0, .L0045800C
/* 00457A58 00000000 */   nop   
/* 00457A5C 8F9984F0 */  lw    $t9, %call16(localcolor)($gp)
/* 00457A60 0320F809 */  jalr  $t9
/* 00457A64 00000000 */   nop   
/* 00457A68 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00457A6C 8F828B20 */  lw     $v0, %got(outofmem)($gp)
/* 00457A70 90420000 */  lbu   $v0, ($v0)
/* 00457A74 14400165 */  bnez  $v0, .L0045800C
/* 00457A78 00000000 */   nop   
/* 00457A7C 8F9984FC */  lw    $t9, %call16(spilltemps)($gp)
/* 00457A80 0320F809 */  jalr  $t9
/* 00457A84 00000000 */   nop   
/* 00457A88 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00457A8C 8F828B20 */  lw     $v0, %got(outofmem)($gp)
/* 00457A90 90420000 */  lbu   $v0, ($v0)
/* 00457A94 1440015D */  bnez  $v0, .L0045800C
/* 00457A98 00000000 */   nop   
/* 00457A9C 8F998730 */  lw    $t9, %call16(getclock)($gp)
/* 00457AA0 0320F809 */  jalr  $t9
/* 00457AA4 00000000 */   nop   
/* 00457AA8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00457AAC 24060005 */  li    $a2, 5
/* 00457AB0 8F8C8A64 */  lw     $t4, %got(listwritten)($gp)
/* 00457AB4 8F8189A0 */  lw     $at, %got(time1)($gp)
/* 00457AB8 918C0000 */  lbu   $t4, ($t4)
/* 00457ABC AC220000 */  sw    $v0, ($at)
/* 00457AC0 1180004B */  beqz  $t4, .L00457BF0
/* 00457AC4 00000000 */   nop   
/* 00457AC8 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 00457ACC 8F848CCC */  lw     $a0, %got(list)($gp)
/* 00457AD0 8F858044 */  lw    $a1, %got(RO_1000CFD8)($gp)
/* 00457AD4 24070005 */  li    $a3, 5
/* 00457AD8 8C840000 */  lw    $a0, ($a0)
/* 00457ADC 0320F809 */  jalr  $t9
/* 00457AE0 24A5CFD8 */   addiu $a1, %lo(RO_1000CFD8) # addiu $a1, $a1, -0x3028
/* 00457AE4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00457AE8 240103E8 */  li    $at, 1000
/* 00457AEC 24060004 */  li    $a2, 4
/* 00457AF0 8F8D89A0 */  lw     $t5, %got(time1)($gp)
/* 00457AF4 8F8E89A8 */  lw     $t6, %got(lasttime)($gp)
/* 00457AF8 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 00457AFC 8DAD0000 */  lw    $t5, ($t5)
/* 00457B00 8DCE0000 */  lw    $t6, ($t6)
/* 00457B04 8F848CCC */  lw     $a0, %got(list)($gp)
/* 00457B08 2407000A */  li    $a3, 10
/* 00457B0C 01AE2823 */  subu  $a1, $t5, $t6
/* 00457B10 00A1001A */  div   $zero, $a1, $at
/* 00457B14 00002812 */  mflo  $a1
/* 00457B18 8C840000 */  lw    $a0, ($a0)
/* 00457B1C 0320F809 */  jalr  $t9
/* 00457B20 00000000 */   nop   
/* 00457B24 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00457B28 2405002E */  li    $a1, 46
/* 00457B2C 24060001 */  li    $a2, 1
/* 00457B30 8F848CCC */  lw     $a0, %got(list)($gp)
/* 00457B34 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 00457B38 2407000A */  li    $a3, 10
/* 00457B3C 8C840000 */  lw    $a0, ($a0)
/* 00457B40 0320F809 */  jalr  $t9
/* 00457B44 AFA40024 */   sw    $a0, 0x24($sp)
/* 00457B48 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00457B4C 240103E8 */  li    $at, 1000
/* 00457B50 8FA40024 */  lw    $a0, 0x24($sp)
/* 00457B54 8F8F89A0 */  lw     $t7, %got(time1)($gp)
/* 00457B58 8F9889A8 */  lw     $t8, %got(lasttime)($gp)
/* 00457B5C 8DEF0000 */  lw    $t7, ($t7)
/* 00457B60 8F180000 */  lw    $t8, ($t8)
/* 00457B64 01F84023 */  subu  $t0, $t7, $t8
/* 00457B68 0101001A */  div   $zero, $t0, $at
/* 00457B6C 00002810 */  mfhi  $a1
/* 00457B70 04A10002 */  bgez  $a1, .L00457B7C
/* 00457B74 00000000 */   nop   
/* 00457B78 20A503E8 */  addi  $a1, $a1, 0x3e8
.L00457B7C:
/* 00457B7C 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 00457B80 24060003 */  li    $a2, 3
/* 00457B84 2407000A */  li    $a3, 10
/* 00457B88 0320F809 */  jalr  $t9
/* 00457B8C 00000000 */   nop   
/* 00457B90 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00457B94 24060025 */  li    $a2, 37
/* 00457B98 24070025 */  li    $a3, 37
/* 00457B9C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 00457BA0 8F848CCC */  lw     $a0, %got(list)($gp)
/* 00457BA4 8F858044 */  lw    $a1, %got(RO_1000CFB3)($gp)
/* 00457BA8 8C840000 */  lw    $a0, ($a0)
/* 00457BAC 0320F809 */  jalr  $t9
/* 00457BB0 24A5CFB3 */   addiu $a1, %lo(RO_1000CFB3) # addiu $a1, $a1, -0x304d
/* 00457BB4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00457BB8 24060400 */  li    $a2, 1024
/* 00457BBC 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 00457BC0 8F848CCC */  lw     $a0, %got(list)($gp)
/* 00457BC4 8F878984 */  lw     $a3, %got(entnam0len)($gp)
/* 00457BC8 8F858DE4 */  lw     $a1, %got(entnam0)($gp)
/* 00457BCC 8C840000 */  lw    $a0, ($a0)
/* 00457BD0 0320F809 */  jalr  $t9
/* 00457BD4 8CE70000 */   lw    $a3, ($a3)
/* 00457BD8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00457BDC 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 00457BE0 8F848CCC */  lw     $a0, %got(list)($gp)
/* 00457BE4 0320F809 */  jalr  $t9
/* 00457BE8 8C840000 */   lw    $a0, ($a0)
/* 00457BEC 8FBC0018 */  lw    $gp, 0x18($sp)
.L00457BF0:
/* 00457BF0 8F838BE4 */  lw     $v1, %got(regaloctime)($gp)
/* 00457BF4 8F8289A0 */  lw     $v0, %got(time1)($gp)
/* 00457BF8 8F8A89A8 */  lw     $t2, %got(lasttime)($gp)
/* 00457BFC 8C790000 */  lw    $t9, ($v1)
/* 00457C00 8C420000 */  lw    $v0, ($v0)
/* 00457C04 8D4A0000 */  lw    $t2, ($t2)
/* 00457C08 8F8189A8 */  lw     $at, %got(lasttime)($gp)
/* 00457C0C 03224821 */  addu  $t1, $t9, $v0
/* 00457C10 012A5823 */  subu  $t3, $t1, $t2
/* 00457C14 AC6B0000 */  sw    $t3, ($v1)
/* 00457C18 8F99855C */  lw    $t9, %call16(globalcolor)($gp)
/* 00457C1C AC220000 */  sw    $v0, ($at)
/* 00457C20 0320F809 */  jalr  $t9
/* 00457C24 00000000 */   nop   
/* 00457C28 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00457C2C 8F828B20 */  lw     $v0, %got(outofmem)($gp)
/* 00457C30 90420000 */  lbu   $v0, ($v0)
/* 00457C34 144000F5 */  bnez  $v0, .L0045800C
/* 00457C38 00000000 */   nop   
/* 00457C3C 8F998730 */  lw    $t9, %call16(getclock)($gp)
/* 00457C40 0320F809 */  jalr  $t9
/* 00457C44 00000000 */   nop   
/* 00457C48 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00457C4C 24060005 */  li    $a2, 5
/* 00457C50 8F8C8A64 */  lw     $t4, %got(listwritten)($gp)
/* 00457C54 8F8189A0 */  lw     $at, %got(time1)($gp)
/* 00457C58 918C0000 */  lbu   $t4, ($t4)
/* 00457C5C AC220000 */  sw    $v0, ($at)
/* 00457C60 1180004B */  beqz  $t4, .L00457D90
/* 00457C64 00000000 */   nop   
/* 00457C68 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 00457C6C 8F848CCC */  lw     $a0, %got(list)($gp)
/* 00457C70 8F858044 */  lw    $a1, %got(RO_1000CFAE)($gp)
/* 00457C74 24070005 */  li    $a3, 5
/* 00457C78 8C840000 */  lw    $a0, ($a0)
/* 00457C7C 0320F809 */  jalr  $t9
/* 00457C80 24A5CFAE */   addiu $a1, %lo(RO_1000CFAE) # addiu $a1, $a1, -0x3052
/* 00457C84 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00457C88 240103E8 */  li    $at, 1000
/* 00457C8C 24060004 */  li    $a2, 4
/* 00457C90 8F8D89A0 */  lw     $t5, %got(time1)($gp)
/* 00457C94 8F8E89A8 */  lw     $t6, %got(lasttime)($gp)
/* 00457C98 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 00457C9C 8DAD0000 */  lw    $t5, ($t5)
/* 00457CA0 8DCE0000 */  lw    $t6, ($t6)
/* 00457CA4 8F848CCC */  lw     $a0, %got(list)($gp)
/* 00457CA8 2407000A */  li    $a3, 10
/* 00457CAC 01AE2823 */  subu  $a1, $t5, $t6
/* 00457CB0 00A1001A */  div   $zero, $a1, $at
/* 00457CB4 00002812 */  mflo  $a1
/* 00457CB8 8C840000 */  lw    $a0, ($a0)
/* 00457CBC 0320F809 */  jalr  $t9
/* 00457CC0 00000000 */   nop   
/* 00457CC4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00457CC8 2405002E */  li    $a1, 46
/* 00457CCC 24060001 */  li    $a2, 1
/* 00457CD0 8F848CCC */  lw     $a0, %got(list)($gp)
/* 00457CD4 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 00457CD8 2407000A */  li    $a3, 10
/* 00457CDC 8C840000 */  lw    $a0, ($a0)
/* 00457CE0 0320F809 */  jalr  $t9
/* 00457CE4 AFA40024 */   sw    $a0, 0x24($sp)
/* 00457CE8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00457CEC 240103E8 */  li    $at, 1000
/* 00457CF0 8FA40024 */  lw    $a0, 0x24($sp)
/* 00457CF4 8F8F89A0 */  lw     $t7, %got(time1)($gp)
/* 00457CF8 8F9889A8 */  lw     $t8, %got(lasttime)($gp)
/* 00457CFC 8DEF0000 */  lw    $t7, ($t7)
/* 00457D00 8F180000 */  lw    $t8, ($t8)
/* 00457D04 01F84023 */  subu  $t0, $t7, $t8
/* 00457D08 0101001A */  div   $zero, $t0, $at
/* 00457D0C 00002810 */  mfhi  $a1
/* 00457D10 04A10002 */  bgez  $a1, .L00457D1C
/* 00457D14 00000000 */   nop   
/* 00457D18 20A503E8 */  addi  $a1, $a1, 0x3e8
.L00457D1C:
/* 00457D1C 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 00457D20 24060003 */  li    $a2, 3
/* 00457D24 2407000A */  li    $a3, 10
/* 00457D28 0320F809 */  jalr  $t9
/* 00457D2C 00000000 */   nop   
/* 00457D30 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00457D34 2406001F */  li    $a2, 31
/* 00457D38 2407001F */  li    $a3, 31
/* 00457D3C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 00457D40 8F848CCC */  lw     $a0, %got(list)($gp)
/* 00457D44 8F858044 */  lw    $a1, %got(RO_1000CF8F)($gp)
/* 00457D48 8C840000 */  lw    $a0, ($a0)
/* 00457D4C 0320F809 */  jalr  $t9
/* 00457D50 24A5CF8F */   addiu $a1, %lo(RO_1000CF8F) # addiu $a1, $a1, -0x3071
/* 00457D54 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00457D58 24060400 */  li    $a2, 1024
/* 00457D5C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 00457D60 8F848CCC */  lw     $a0, %got(list)($gp)
/* 00457D64 8F878984 */  lw     $a3, %got(entnam0len)($gp)
/* 00457D68 8F858DE4 */  lw     $a1, %got(entnam0)($gp)
/* 00457D6C 8C840000 */  lw    $a0, ($a0)
/* 00457D70 0320F809 */  jalr  $t9
/* 00457D74 8CE70000 */   lw    $a3, ($a3)
/* 00457D78 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00457D7C 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 00457D80 8F848CCC */  lw     $a0, %got(list)($gp)
/* 00457D84 0320F809 */  jalr  $t9
/* 00457D88 8C840000 */   lw    $a0, ($a0)
/* 00457D8C 8FBC0018 */  lw    $gp, 0x18($sp)
.L00457D90:
/* 00457D90 8F838BE4 */  lw     $v1, %got(regaloctime)($gp)
/* 00457D94 8F8289A0 */  lw     $v0, %got(time1)($gp)
/* 00457D98 8F8A89A8 */  lw     $t2, %got(lasttime)($gp)
/* 00457D9C 8C790000 */  lw    $t9, ($v1)
/* 00457DA0 8C420000 */  lw    $v0, ($v0)
/* 00457DA4 8D4A0000 */  lw    $t2, ($t2)
/* 00457DA8 8F8C8A94 */  lw     $t4, %got(dbugno)($gp)
/* 00457DAC 03224821 */  addu  $t1, $t9, $v0
/* 00457DB0 8F8189A8 */  lw     $at, %got(lasttime)($gp)
/* 00457DB4 012A5823 */  subu  $t3, $t1, $t2
/* 00457DB8 AC6B0000 */  sw    $t3, ($v1)
/* 00457DBC 8D8C0000 */  lw    $t4, ($t4)
/* 00457DC0 AC220000 */  sw    $v0, ($at)
/* 00457DC4 24010005 */  li    $at, 5
/* 00457DC8 15810005 */  bne   $t4, $at, .L00457DE0
/* 00457DCC 00000000 */   nop   
/* 00457DD0 8F998250 */  lw    $t9, %call16(printregs)($gp)
/* 00457DD4 0320F809 */  jalr  $t9
/* 00457DD8 00000000 */   nop   
/* 00457DDC 8FBC0018 */  lw    $gp, 0x18($sp)
.L00457DE0:
/* 00457DE0 8F9985DC */  lw    $t9, %call16(opt_saved_regs)($gp)
/* 00457DE4 0320F809 */  jalr  $t9
/* 00457DE8 00000000 */   nop   
/* 00457DEC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00457DF0 8F9982B4 */  lw    $t9, %call16(reemit)($gp)
/* 00457DF4 0320F809 */  jalr  $t9
/* 00457DF8 00000000 */   nop   
/* 00457DFC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00457E00 24010002 */  li    $at, 2
/* 00457E04 8F828A94 */  lw     $v0, %got(dbugno)($gp)
/* 00457E08 8C420000 */  lw    $v0, ($v0)
/* 00457E0C 54410008 */  bnel  $v0, $at, .L00457E30
/* 00457E10 24010007 */   li    $at, 7
/* 00457E14 8F998234 */  lw    $t9, %call16(printtab)($gp)
/* 00457E18 0320F809 */  jalr  $t9
/* 00457E1C 00000000 */   nop   
/* 00457E20 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00457E24 8F828A94 */  lw     $v0, %got(dbugno)($gp)
/* 00457E28 8C420000 */  lw    $v0, ($v0)
/* 00457E2C 24010007 */  li    $at, 7
.L00457E30:
/* 00457E30 14410009 */  bne   $v0, $at, .L00457E58
/* 00457E34 00000000 */   nop   
/* 00457E38 8F998254 */  lw    $t9, %call16(printinterproc)($gp)
/* 00457E3C 0320F809 */  jalr  $t9
/* 00457E40 00000000 */   nop   
/* 00457E44 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00457E48 8F998258 */  lw    $t9, %call16(printsav)($gp)
/* 00457E4C 0320F809 */  jalr  $t9
/* 00457E50 00000000 */   nop   
/* 00457E54 8FBC0018 */  lw    $gp, 0x18($sp)
.L00457E58:
/* 00457E58 8F998730 */  lw    $t9, %call16(getclock)($gp)
/* 00457E5C 0320F809 */  jalr  $t9
/* 00457E60 00000000 */   nop   
/* 00457E64 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00457E68 24060005 */  li    $a2, 5
/* 00457E6C 8F8D8A64 */  lw     $t5, %got(listwritten)($gp)
/* 00457E70 8F8189A0 */  lw     $at, %got(time1)($gp)
/* 00457E74 91AD0000 */  lbu   $t5, ($t5)
/* 00457E78 AC220000 */  sw    $v0, ($at)
/* 00457E7C 51A0004C */  beql  $t5, $zero, .L00457FB0
/* 00457E80 27AA0028 */   addiu $t2, $sp, 0x28
/* 00457E84 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 00457E88 8F848CCC */  lw     $a0, %got(list)($gp)
/* 00457E8C 8F858044 */  lw    $a1, %got(RO_1000CF8A)($gp)
/* 00457E90 24070005 */  li    $a3, 5
/* 00457E94 8C840000 */  lw    $a0, ($a0)
/* 00457E98 0320F809 */  jalr  $t9
/* 00457E9C 24A5CF8A */   addiu $a1, %lo(RO_1000CF8A) # addiu $a1, $a1, -0x3076
/* 00457EA0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00457EA4 240103E8 */  li    $at, 1000
/* 00457EA8 24060004 */  li    $a2, 4
/* 00457EAC 8F8E89A0 */  lw     $t6, %got(time1)($gp)
/* 00457EB0 8F8F89A8 */  lw     $t7, %got(lasttime)($gp)
/* 00457EB4 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 00457EB8 8DCE0000 */  lw    $t6, ($t6)
/* 00457EBC 8DEF0000 */  lw    $t7, ($t7)
/* 00457EC0 8F848CCC */  lw     $a0, %got(list)($gp)
/* 00457EC4 2407000A */  li    $a3, 10
/* 00457EC8 01CF2823 */  subu  $a1, $t6, $t7
/* 00457ECC 00A1001A */  div   $zero, $a1, $at
/* 00457ED0 00002812 */  mflo  $a1
/* 00457ED4 8C840000 */  lw    $a0, ($a0)
/* 00457ED8 0320F809 */  jalr  $t9
/* 00457EDC 00000000 */   nop   
/* 00457EE0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00457EE4 2405002E */  li    $a1, 46
/* 00457EE8 24060001 */  li    $a2, 1
/* 00457EEC 8F848CCC */  lw     $a0, %got(list)($gp)
/* 00457EF0 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 00457EF4 2407000A */  li    $a3, 10
/* 00457EF8 8C840000 */  lw    $a0, ($a0)
/* 00457EFC 0320F809 */  jalr  $t9
/* 00457F00 AFA40024 */   sw    $a0, 0x24($sp)
/* 00457F04 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00457F08 240103E8 */  li    $at, 1000
/* 00457F0C 8FA40024 */  lw    $a0, 0x24($sp)
/* 00457F10 8F9889A0 */  lw     $t8, %got(time1)($gp)
/* 00457F14 8F8889A8 */  lw     $t0, %got(lasttime)($gp)
/* 00457F18 8F180000 */  lw    $t8, ($t8)
/* 00457F1C 8D080000 */  lw    $t0, ($t0)
/* 00457F20 0308C823 */  subu  $t9, $t8, $t0
/* 00457F24 0321001A */  div   $zero, $t9, $at
/* 00457F28 00002810 */  mfhi  $a1
/* 00457F2C 04A10002 */  bgez  $a1, .L00457F38
/* 00457F30 00000000 */   nop   
/* 00457F34 20A503E8 */  addi  $a1, $a1, 0x3e8
.L00457F38:
/* 00457F38 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 00457F3C 24060003 */  li    $a2, 3
/* 00457F40 2407000A */  li    $a3, 10
/* 00457F44 0320F809 */  jalr  $t9
/* 00457F48 00000000 */   nop   
/* 00457F4C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00457F50 2406001A */  li    $a2, 26
/* 00457F54 2407001A */  li    $a3, 26
/* 00457F58 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 00457F5C 8F848CCC */  lw     $a0, %got(list)($gp)
/* 00457F60 8F858044 */  lw    $a1, %got(RO_1000CF70)($gp)
/* 00457F64 8C840000 */  lw    $a0, ($a0)
/* 00457F68 0320F809 */  jalr  $t9
/* 00457F6C 24A5CF70 */   addiu $a1, %lo(RO_1000CF70) # addiu $a1, $a1, -0x3090
/* 00457F70 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00457F74 24060400 */  li    $a2, 1024
/* 00457F78 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 00457F7C 8F848CCC */  lw     $a0, %got(list)($gp)
/* 00457F80 8F878984 */  lw     $a3, %got(entnam0len)($gp)
/* 00457F84 8F858DE4 */  lw     $a1, %got(entnam0)($gp)
/* 00457F88 8C840000 */  lw    $a0, ($a0)
/* 00457F8C 0320F809 */  jalr  $t9
/* 00457F90 8CE70000 */   lw    $a3, ($a3)
/* 00457F94 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00457F98 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 00457F9C 8F848CCC */  lw     $a0, %got(list)($gp)
/* 00457FA0 0320F809 */  jalr  $t9
/* 00457FA4 8C840000 */   lw    $a0, ($a0)
/* 00457FA8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00457FAC 27AA0028 */  addiu $t2, $sp, 0x28
.L00457FB0:
/* 00457FB0 8F898DA4 */  lw     $t1, %got(u)($gp)
/* 00457FB4 8D4C0000 */  lw    $t4, ($t2)
/* 00457FB8 8D4B0004 */  lw    $t3, 4($t2)
/* 00457FBC AD2C0000 */  sw    $t4, ($t1)
/* 00457FC0 AD2B0004 */  sw    $t3, 4($t1)
/* 00457FC4 8D4B000C */  lw    $t3, 0xc($t2)
/* 00457FC8 8D4C0008 */  lw    $t4, 8($t2)
/* 00457FCC AD2B000C */  sw    $t3, 0xc($t1)
/* 00457FD0 AD2C0008 */  sw    $t4, 8($t1)
/* 00457FD4 8D4C0010 */  lw    $t4, 0x10($t2)
/* 00457FD8 8D4B0014 */  lw    $t3, 0x14($t2)
/* 00457FDC AD2C0010 */  sw    $t4, 0x10($t1)
/* 00457FE0 AD2B0014 */  sw    $t3, 0x14($t1)
/* 00457FE4 8D4B001C */  lw    $t3, 0x1c($t2)
/* 00457FE8 8D4C0018 */  lw    $t4, 0x18($t2)
/* 00457FEC AD2B001C */  sw    $t3, 0x1c($t1)
/* 00457FF0 AD2C0018 */  sw    $t4, 0x18($t1)
/* 00457FF4 8F998304 */  lw    $t9, %call16(copyline)($gp)
/* 00457FF8 0320F809 */  jalr  $t9
/* 00457FFC 00000000 */   nop   
/* 00458000 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00458004 8F828B20 */  lw     $v0, %got(outofmem)($gp)
/* 00458008 90420000 */  lbu   $v0, ($v0)
.L0045800C:
/* 0045800C 10400006 */  beqz  $v0, .L00458028
/* 00458010 00000000 */   nop   
/* 00458014 8F998710 */  lw    $t9, %call16(skipproc)($gp)
/* 00458018 00002025 */  move  $a0, $zero
/* 0045801C 0320F809 */  jalr  $t9
/* 00458020 00000000 */   nop   
/* 00458024 8FBC0018 */  lw    $gp, 0x18($sp)
.L00458028:
/* 00458028 8F9988CC */  lw    $t9, %call16(alloc_release)($gp)
/* 0045802C 8F858958 */  lw     $a1, %got(heapptr)($gp)
/* 00458030 8F848954 */  lw     $a0, %got(perm_heap)($gp)
/* 00458034 0320F809 */  jalr  $t9
/* 00458038 8CA50000 */   lw    $a1, ($a1)
/* 0045803C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00458040 8F9988C8 */  lw    $t9, %call16(alloc_mark)($gp)
/* 00458044 8F848954 */  lw     $a0, %got(perm_heap)($gp)
/* 00458048 0320F809 */  jalr  $t9
/* 0045804C 00000000 */   nop   
/* 00458050 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00458054 8F818958 */  lw     $at, %got(heapptr)($gp)
/* 00458058 AC220000 */  sw    $v0, ($at)
/* 0045805C 8FBF001C */  lw    $ra, 0x1c($sp)
.L00458060:
/* 00458060 27BD0050 */  addiu $sp, $sp, 0x50
/* 00458064 03E00008 */  jr    $ra
/* 00458068 00000000 */   nop   
    .type oneproc, @function
    .size oneproc, .-oneproc
    .end oneproc
)"");

#if 0
glabel main1
    .ent main1
/* 0045806C 3C1C0FBC */  .cpload $t9
/* 00458070 279C2224 */  
/* 00458074 0399E021 */  
/* 00458078 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 0045807C 8F998730 */  lw    $t9, %call16(getclock)($gp)
/* 00458080 AFBF002C */  sw    $ra, 0x2c($sp)
/* 00458084 AFBC0028 */  sw    $gp, 0x28($sp)
/* 00458088 AFB30024 */  sw    $s3, 0x24($sp)
/* 0045808C AFB20020 */  sw    $s2, 0x20($sp)
/* 00458090 AFB1001C */  sw    $s1, 0x1c($sp)
/* 00458094 0320F809 */  jalr  $t9
/* 00458098 AFB00018 */   sw    $s0, 0x18($sp)
/* 0045809C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004580A0 8F9982E8 */  lw    $t9, %call16(optinit)($gp)
/* 004580A4 8F8189A4 */  lw     $at, %got(timer)($gp)
/* 004580A8 0320F809 */  jalr  $t9
/* 004580AC AC220000 */   sw    $v0, ($at)
/* 004580B0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004580B4 8F8E8A54 */  lw     $t6, %got(suppressopt)($gp)
/* 004580B8 91CE0000 */  lbu   $t6, ($t6)
/* 004580BC 11C00050 */  beqz  $t6, .L00458200
/* 004580C0 00000000 */   nop   
/* 004580C4 8F8F8A58 */  lw     $t7, %got(o0o1specified)($gp)
/* 004580C8 91EF0000 */  lbu   $t7, ($t7)
/* 004580CC 15E00020 */  bnez  $t7, .L00458150
/* 004580D0 00000000 */   nop   
/* 004580D4 8F988B58 */  lw     $t8, %got(warn_flag)($gp)
/* 004580D8 24010002 */  li    $at, 2
/* 004580DC 93180000 */  lbu   $t8, ($t8)
/* 004580E0 1301001B */  beq   $t8, $at, .L00458150
/* 004580E4 00000000 */   nop   
/* 004580E8 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 004580EC 8F908908 */  lw     $s0, %got(err)($gp)
/* 004580F0 0320F809 */  jalr  $t9
/* 004580F4 8E040000 */   lw    $a0, ($s0)
/* 004580F8 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004580FC 8E040000 */  lw    $a0, ($s0)
/* 00458100 24060050 */  li    $a2, 80
/* 00458104 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 00458108 8F858044 */  lw    $a1, %got(RO_1000D15E)($gp)
/* 0045810C 24070050 */  li    $a3, 80
/* 00458110 0320F809 */  jalr  $t9
/* 00458114 24A5D15E */   addiu $a1, %lo(RO_1000D15E) # addiu $a1, $a1, -0x2ea2
/* 00458118 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045811C 8E040000 */  lw    $a0, ($s0)
/* 00458120 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 00458124 0320F809 */  jalr  $t9
/* 00458128 00000000 */   nop   
/* 0045812C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00458130 8E040000 */  lw    $a0, ($s0)
/* 00458134 8F9980A0 */  lw    $t9, %call16(fflush)($gp)
/* 00458138 0320F809 */  jalr  $t9
/* 0045813C 00000000 */   nop   
/* 00458140 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00458144 24190001 */  li    $t9, 1
/* 00458148 8F818B08 */  lw     $at, %got(warned)($gp)
/* 0045814C A0390000 */  sb    $t9, ($at)
.L00458150:
/* 00458150 8F908908 */  lw     $s0, %got(err)($gp)
/* 00458154 24130022 */  li    $s3, 34
/* 00458158 2412007A */  li    $s2, 122
/* 0045815C 8F918DA4 */  lw     $s1, %got(u)($gp)
.L00458160:
/* 00458160 8F998768 */  lw    $t9, %call16(readuinstr)($gp)
/* 00458164 8F858950 */  lw     $a1, %got(ustrptr)($gp)
/* 00458168 02202025 */  move  $a0, $s1
/* 0045816C 0320F809 */  jalr  $t9
/* 00458170 8CA50000 */   lw    $a1, ($a1)
/* 00458174 92290000 */  lbu   $t1, ($s1)
/* 00458178 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045817C 24060036 */  li    $a2, 54
/* 00458180 16690015 */  bne   $s3, $t1, .L004581D8
/* 00458184 24070036 */   li    $a3, 54
/* 00458188 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0045818C 8F858044 */  lw    $a1, %got(RO_1000D128)($gp)
/* 00458190 8E040000 */  lw    $a0, ($s0)
/* 00458194 0320F809 */  jalr  $t9
/* 00458198 24A5D128 */   addiu $a1, %lo(RO_1000D128) # addiu $a1, $a1, -0x2ed8
/* 0045819C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004581A0 8E040000 */  lw    $a0, ($s0)
/* 004581A4 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 004581A8 0320F809 */  jalr  $t9
/* 004581AC 00000000 */   nop   
/* 004581B0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004581B4 8E040000 */  lw    $a0, ($s0)
/* 004581B8 8F9980A0 */  lw    $t9, %call16(fflush)($gp)
/* 004581BC 0320F809 */  jalr  $t9
/* 004581C0 00000000 */   nop   
/* 004581C4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004581C8 8F998728 */  lw    $t9, %call16(abort)($gp)
/* 004581CC 0320F809 */  jalr  $t9
/* 004581D0 00000000 */   nop   
/* 004581D4 8FBC0028 */  lw    $gp, 0x28($sp)
.L004581D8:
/* 004581D8 8F998740 */  lw    $t9, %call16(uwrite)($gp)
/* 004581DC 02202025 */  move  $a0, $s1
/* 004581E0 0320F809 */  jalr  $t9
/* 004581E4 00000000 */   nop   
/* 004581E8 922A0000 */  lbu   $t2, ($s1)
/* 004581EC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004581F0 164AFFDB */  bne   $s2, $t2, .L00458160
/* 004581F4 00000000 */   nop   
/* 004581F8 1000002E */  b     .L004582B4
/* 004581FC 00000000 */   nop   
.L00458200:
/* 00458200 8F9982FC */  lw    $t9, %call16(getop)($gp)
/* 00458204 0320F809 */  jalr  $t9
/* 00458208 00000000 */   nop   
/* 0045820C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00458210 24130022 */  li    $s3, 34
/* 00458214 8F918DA4 */  lw     $s1, %got(u)($gp)
/* 00458218 92220000 */  lbu   $v0, ($s1)
/* 0045821C 12620025 */  beq   $s3, $v0, .L004582B4
/* 00458220 2412007A */   li    $s2, 122
/* 00458224 24100021 */  li    $s0, 33
.L00458228:
/* 00458228 12020010 */  beq   $s0, $v0, .L0045826C
/* 0045822C 00000000 */   nop   
/* 00458230 1242000E */  beq   $s2, $v0, .L0045826C
/* 00458234 00000000 */   nop   
.L00458238:
/* 00458238 8F998304 */  lw    $t9, %call16(copyline)($gp)
/* 0045823C 0320F809 */  jalr  $t9
/* 00458240 00000000 */   nop   
/* 00458244 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00458248 8F9982FC */  lw    $t9, %call16(getop)($gp)
/* 0045824C 0320F809 */  jalr  $t9
/* 00458250 00000000 */   nop   
/* 00458254 92220000 */  lbu   $v0, ($s1)
/* 00458258 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045825C 12020003 */  beq   $s0, $v0, .L0045826C
/* 00458260 00000000 */   nop   
/* 00458264 1642FFF4 */  bne   $s2, $v0, .L00458238
/* 00458268 00000000 */   nop   
.L0045826C:
/* 0045826C 16020006 */  bne   $s0, $v0, .L00458288
/* 00458270 00000000 */   nop   
/* 00458274 8F998414 */  lw    $t9, %call16(oneproc)($gp)
/* 00458278 0320F809 */  jalr  $t9
/* 0045827C 00000000 */   nop   
/* 00458280 10000005 */  b     .L00458298
/* 00458284 8FBC0028 */   lw    $gp, 0x28($sp)
.L00458288:
/* 00458288 8F998304 */  lw    $t9, %call16(copyline)($gp)
/* 0045828C 0320F809 */  jalr  $t9
/* 00458290 00000000 */   nop   
/* 00458294 8FBC0028 */  lw    $gp, 0x28($sp)
.L00458298:
/* 00458298 8F9982FC */  lw    $t9, %call16(getop)($gp)
/* 0045829C 0320F809 */  jalr  $t9
/* 004582A0 00000000 */   nop   
/* 004582A4 92220000 */  lbu   $v0, ($s1)
/* 004582A8 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004582AC 1662FFDE */  bne   $s3, $v0, .L00458228
/* 004582B0 00000000 */   nop   
.L004582B4:
/* 004582B4 8F8B8AF0 */  lw     $t3, %got(verbose)($gp)
/* 004582B8 8F908908 */  lw     $s0, %got(err)($gp)
/* 004582BC 916B0000 */  lbu   $t3, ($t3)
/* 004582C0 11600006 */  beqz  $t3, .L004582DC
/* 004582C4 00000000 */   nop   
/* 004582C8 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 004582CC 8E040000 */  lw    $a0, ($s0)
/* 004582D0 0320F809 */  jalr  $t9
/* 004582D4 00000000 */   nop   
/* 004582D8 8FBC0028 */  lw    $gp, 0x28($sp)
.L004582DC:
/* 004582DC 8F998750 */  lw    $t9, %call16(uputclose)($gp)
/* 004582E0 0320F809 */  jalr  $t9
/* 004582E4 00000000 */   nop   
/* 004582E8 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004582EC 8F9982F4 */  lw    $t9, %call16(write_updated_st)($gp)
/* 004582F0 0320F809 */  jalr  $t9
/* 004582F4 00000000 */   nop   
/* 004582F8 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004582FC 8F998730 */  lw    $t9, %call16(getclock)($gp)
/* 00458300 0320F809 */  jalr  $t9
/* 00458304 00000000 */   nop   
/* 00458308 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045830C 8F8889A4 */  lw     $t0, %got(timer)($gp)
/* 00458310 8F838A64 */  lw     $v1, %got(listwritten)($gp)
/* 00458314 8D0C0000 */  lw    $t4, ($t0)
/* 00458318 004C6823 */  subu  $t5, $v0, $t4
/* 0045831C AD0D0000 */  sw    $t5, ($t0)
/* 00458320 90630000 */  lbu   $v1, ($v1)
/* 00458324 1060004E */  beqz  $v1, .L00458460
/* 00458328 00000000 */   nop   
/* 0045832C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 00458330 8F918CCC */  lw     $s1, %got(list)($gp)
/* 00458334 8F858044 */  lw    $a1, %got(RO_1000D123)($gp)
/* 00458338 24060005 */  li    $a2, 5
/* 0045833C 24070005 */  li    $a3, 5
/* 00458340 8E240000 */  lw    $a0, ($s1)
/* 00458344 0320F809 */  jalr  $t9
/* 00458348 24A5D123 */   addiu $a1, %lo(RO_1000D123) # addiu $a1, $a1, -0x2edd
/* 0045834C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00458350 241203E8 */  li    $s2, 1000
/* 00458354 8E240000 */  lw    $a0, ($s1)
/* 00458358 8F8E89A4 */  lw     $t6, %got(timer)($gp)
/* 0045835C 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 00458360 24060004 */  li    $a2, 4
/* 00458364 8DCE0000 */  lw    $t6, ($t6)
/* 00458368 2407000A */  li    $a3, 10
/* 0045836C 01D2001A */  div   $zero, $t6, $s2
/* 00458370 00002812 */  mflo  $a1
/* 00458374 16400002 */  bnez  $s2, .L00458380
/* 00458378 00000000 */   nop   
/* 0045837C 0007000D */  break 7
.L00458380:
/* 00458380 2401FFFF */  li    $at, -1
/* 00458384 16410004 */  bne   $s2, $at, .L00458398
/* 00458388 3C018000 */   lui   $at, 0x8000
/* 0045838C 15C10002 */  bne   $t6, $at, .L00458398
/* 00458390 00000000 */   nop   
/* 00458394 0006000D */  break 6
.L00458398:
/* 00458398 0320F809 */  jalr  $t9
/* 0045839C 00000000 */   nop   
/* 004583A0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004583A4 8E300000 */  lw    $s0, ($s1)
/* 004583A8 2405002E */  li    $a1, 46
/* 004583AC 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 004583B0 24060001 */  li    $a2, 1
/* 004583B4 2407000A */  li    $a3, 10
/* 004583B8 0320F809 */  jalr  $t9
/* 004583BC 02002025 */   move  $a0, $s0
/* 004583C0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004583C4 02002025 */  move  $a0, $s0
/* 004583C8 8F8F89A4 */  lw     $t7, %got(timer)($gp)
/* 004583CC 8DEF0000 */  lw    $t7, ($t7)
/* 004583D0 01F2001A */  div   $zero, $t7, $s2
/* 004583D4 00002810 */  mfhi  $a1
/* 004583D8 00B2C026 */  xor   $t8, $a1, $s2
/* 004583DC 16400002 */  bnez  $s2, .L004583E8
/* 004583E0 00000000 */   nop   
/* 004583E4 0007000D */  break 7
.L004583E8:
/* 004583E8 2401FFFF */  li    $at, -1
/* 004583EC 16410004 */  bne   $s2, $at, .L00458400
/* 004583F0 3C018000 */   lui   $at, 0x8000
/* 004583F4 15E10002 */  bne   $t7, $at, .L00458400
/* 004583F8 00000000 */   nop   
/* 004583FC 0006000D */  break 6
.L00458400:
/* 00458400 07010002 */  bgez  $t8, .L0045840C
/* 00458404 00000000 */   nop   
/* 00458408 00B22821 */  addu  $a1, $a1, $s2
.L0045840C:
/* 0045840C 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 00458410 24060003 */  li    $a2, 3
/* 00458414 2407000A */  li    $a3, 10
/* 00458418 0320F809 */  jalr  $t9
/* 0045841C 00000000 */   nop   
/* 00458420 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00458424 8E240000 */  lw    $a0, ($s1)
/* 00458428 2406002D */  li    $a2, 45
/* 0045842C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 00458430 8F858044 */  lw    $a1, %got(RO_1000D0F6)($gp)
/* 00458434 2407002D */  li    $a3, 45
/* 00458438 0320F809 */  jalr  $t9
/* 0045843C 24A5D0F6 */   addiu $a1, %lo(RO_1000D0F6) # addiu $a1, $a1, -0x2f0a
/* 00458440 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00458444 8E240000 */  lw    $a0, ($s1)
/* 00458448 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0045844C 0320F809 */  jalr  $t9
/* 00458450 00000000 */   nop   
/* 00458454 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00458458 8F838A64 */  lw     $v1, %got(listwritten)($gp)
/* 0045845C 90630000 */  lbu   $v1, ($v1)
.L00458460:
/* 00458460 10600005 */  beqz  $v1, .L00458478
/* 00458464 00000000 */   nop   
/* 00458468 8F99825C */  lw    $t9, %call16(printstat)($gp)
/* 0045846C 0320F809 */  jalr  $t9
/* 00458470 00000000 */   nop   
/* 00458474 8FBC0028 */  lw    $gp, 0x28($sp)
.L00458478:
/* 00458478 8F998B08 */  lw     $t9, %got(warned)($gp)
/* 0045847C 93390000 */  lbu   $t9, ($t9)
/* 00458480 5320000C */  beql  $t9, $zero, .L004584B4
/* 00458484 8FBF002C */   lw    $ra, 0x2c($sp)
/* 00458488 8F898B58 */  lw     $t1, %got(warn_flag)($gp)
/* 0045848C 24010002 */  li    $at, 2
/* 00458490 91290000 */  lbu   $t1, ($t1)
/* 00458494 55210007 */  bnel  $t1, $at, .L004584B4
/* 00458498 8FBF002C */   lw    $ra, 0x2c($sp)
/* 0045849C 8F9988A8 */  lw    $t9, %call16(exit)($gp)
/* 004584A0 24040001 */  li    $a0, 1
/* 004584A4 0320F809 */  jalr  $t9
/* 004584A8 00000000 */   nop   
/* 004584AC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004584B0 8FBF002C */  lw    $ra, 0x2c($sp)
.L004584B4:
/* 004584B4 8FB00018 */  lw    $s0, 0x18($sp)
/* 004584B8 8FB1001C */  lw    $s1, 0x1c($sp)
/* 004584BC 8FB20020 */  lw    $s2, 0x20($sp)
/* 004584C0 8FB30024 */  lw    $s3, 0x24($sp)
/* 004584C4 27BD0030 */  addiu $sp, $sp, 0x30
/* 004584C8 03E00008 */  jr    $ra
/* 004584CC 00001025 */   move  $v0, $zero
    .type main1, @function
    .size main1, .-main1
    .end main1
#endif

void oneproc(void); // defined above in asm

#include <stdlib.h>
#include <stdio.h>
#include "common.h"
#include "uoptinit.h"
#include "uoptinput.h"
#include "uoptdbg.h"
#include "uoptdata.h"
#include "libp/libp.h"
#include "libu/libu.h"

int main1(int argc, char *argv[]) {
    timer = getclock();
    optinit();
    if (suppressopt != 0) {
        if (o0o1specified == 0 && warn_flag != 2) {
            writeln(err.c_file);
            write_string(err.c_file, "uopt: Warning: file not optimized; use -g3 if both optimization and debug wanted", 0x50, 0x50);
            writeln(err.c_file);
            fflush(err.c_file);
            warned = TRUE;
        }
        do {
            readuinstr(&u, ustrptr);
            if (Ueof == u.Opc) {
                write_string(err.c_file, "uopt: Error: unexpected EOF in input ucode; giving up.", 0x36, 0x36);
                writeln(err.c_file);
                fflush(err.c_file);
                abort();
            }
            uwrite(&u);
        } while (Ustp != u.Opc);
    } else {
        getop();
        while (Ueof != u.Opc) {
            while (Uent != u.Opc && Ustp != u.Opc) {
                copyline();
                getop();
            }
            if (Uent == u.Opc) {
                oneproc();
            } else {
                copyline();
            }
            getop();
        }
    }
    if (verbose != 0) {
        writeln(err.c_file);
    }
    uputclose();
    write_updated_st();
    timer = (getclock() - timer);
    if (listwritten != 0) {
        write_string(list.c_file, " * * ", 5, 5);
        write_integer(list.c_file, timer / 1000, 4, 10);
        write_char(list.c_file, '.', 1);
        write_integer(list.c_file, timer % 1000, 3, 10);
        write_string(list.c_file, " SECONDS IN WHOLE UCODE TO UCODE OPTIMIZATION", 0x2D, 0x2D);
        writeln(list.c_file);
    }
    if (listwritten != 0) {
        printstat();
    }
    if (warned != 0 && warn_flag == 2) {
        exit(1);
    }
    return 0;
}
