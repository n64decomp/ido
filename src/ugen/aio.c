__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
RO_10008520:
    # 0040BC48 put_sym
    .ascii "$$"

RO_10008522:
    # 0040BC48 put_sym
    .ascii "                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                "

RO_10008922:
    # 0040BC48 put_sym
    .ascii "$$"

RO_10008924:
    # 0040BFB4 put_alpha
    .ascii "\X"

RO_10008926:
    # 0040C210 write_instruction
    .ascii "aio.p"

RO_1000892B:
    # 0040C210 write_instruction
    .ascii ", "

RO_1000892D:
    # 0040C210 write_instruction
    .ascii ", "

RO_1000892F:
    # 0040C210 write_instruction
    .ascii "orrr type instruction                                                           "

RO_1000897F:
    # 0040C210 write_instruction
    .ascii "aio.p                                                                           "

RO_100089CF:
    # 0040C210 write_instruction
    .ascii ", "

RO_100089D1:
    # 0040C210 write_instruction
    .ascii ", "

RO_100089D3:
    # 0040C210 write_instruction
    .ascii ", "

RO_100089D5:
    # 0040C210 write_instruction
    .ascii ", "

RO_100089D7:
    # 0040C210 write_instruction
    .ascii ", "

RO_100089D9:
    # 0040C210 write_instruction
    .ascii ", "

RO_100089DB:
    # 0040C210 write_instruction
    .ascii ", "

RO_100089DD:
    # 0040C210 write_instruction
    .ascii ", "

RO_100089DF:
    # 0040C210 write_instruction
    .ascii ", "

RO_100089E1:
    # 0040C210 write_instruction
    .ascii ", "

RO_100089E3:
    # 0040C210 write_instruction
    .ascii ", "

RO_100089E5:
    # 0040C210 write_instruction
    .ascii ", "

RO_100089E7:
    # 0040C210 write_instruction
    .ascii ", "

RO_100089E9:
    # 0040C210 write_instruction
    .ascii ", "

RO_100089EB:
    # 0040C210 write_instruction
    .asciz ", "

    .balign 4
jtbl_100089F0:
    # 0040C210 write_instruction
    .gpword .L0040C330
    .gpword .L0040C4A8
    .gpword .L0040C580
    .gpword .L0040C8F8
    .gpword .L0040C9F0
    .gpword .L0040CAC4
    .gpword .L0040CB58
    .gpword .L0040CB8C
    .gpword .L0040CBE8
    .gpword .L0040CCB4
    .gpword .L0040CD28
    .gpword .L0040CD44
    .gpword .L0040CE40
    .gpword .L0040CBC8

RO_10008A28:
    # 0040CF50 print_source
    .ascii " #"

RO_10008A2A:
    # 0040CF50 print_source
    .ascii "file name is null                                                               "

RO_10008A7A:
    # 0040CF50 print_source
    .ascii "aio.p                                                                           "

RO_10008ACA:
    # 0040D350 write_directive
    .ascii "aio.p"

RO_10008ACF:
    # 0040D350 write_directive
    .ascii ", "

RO_10008AD1:
    # 0040D350 write_directive
    .ascii ", "

RO_10008AD3:
    # 0040D350 write_directive
    .ascii ", "

RO_10008AD5:
    # 0040D350 write_directive
    .ascii ", "

RO_10008AD7:
    # 0040D350 write_directive
    .asciz ", "

    .balign 4
jtbl_10008ADC:
    # 0040D350 write_directive
    .gpword .L0040D848
    .gpword .L0040DD5C
    .gpword .L0040D498
    .gpword .L0040D518
    .gpword .L0040D518
    .gpword .L0040D58C
    .gpword .L0040D748
    .gpword .L0040D748
    .gpword .L0040DF58
    .gpword .L0040D4B8
    .gpword .L0040D534
    .gpword .L0040D4B8
    .gpword .L0040D58C
    .gpword .L0040DB84
    .gpword .L0040D58C
    .gpword .L0040DD5C
    .gpword .L0040D7EC
    .gpword .L0040DE58
    .gpword .L0040D498
    .gpword .L0040DE28
    .gpword .L0040D58C
    .gpword .L0040DF38
    .gpword .L0040D848
    .gpword .L0040DF58
    .gpword .L0040DF58
    .gpword .L0040DB08
    .gpword .L0040DA4C
    .gpword .L0040DB64
    .gpword .L0040DB64
    .gpword .L0040DF38
    .gpword .L0040DBA4
    .gpword .L0040DD5C
    .gpword .L0040DF38
    .gpword .L0040DF38
    .gpword .L0040D848
    .gpword .L0040D934
    .gpword .L0040DAAC
    .gpword .L0040DAAC
    .gpword .L0040DF38
    .gpword .L0040DF38
    .gpword .L0040D9EC
    .gpword .L0040D864
    .gpword .L0040DF38
    .gpword .L0040D748
    .gpword .L0040DB08
    .gpword .L0040DBF4
    .gpword .L0040DC78
    .gpword .L0040DC78
    .gpword .L0040DED8
    .gpword .L0040DF38
    .gpword .L0040DF38
    .gpword .L0040DD08
    .gpword .L0040DD08
    .gpword .L0040DD08
    .gpword .L0040DD08
    .gpword .L0040D498
    .gpword .L0040DF58
    .gpword .L0040D668
    .gpword .L0040DEB8
    .gpword .L0040DD98

.data
# 10010E60
glabel reg_name_tab
    # 0040C210 write_instruction
    # 0040D350 write_directive
    .ascii "$0   $1   $2   $3   $4   $5   $6   $7   $8   $9   $10  $11  $12  $13  $14  $15  $16  $17  $18  $19  $20  $21  $22  $23  $24  $25  $26  $27  $gp  $sp  $30  $31  $f0  $f1  $f2  $f3  $f4  $f5  $f6  $f7  $f8  $f9  $f10 $f11 $f12 $f13 $f14 $f15 $f16 $f17 $f18 $f19 $f20 $f21 $f22 $f23 $f24 $f25 $f26 $f27 $f28 $f29 $f30 $f31 $fcc0$fcc1$fcc2$fcc3$fcc4$fcc5$fcc6$fcc7$0   \x00\x00\x00"
    .type reg_name_tab, @object
    .size reg_name_tab, .-reg_name_tab # 368

# 10010FD0
glabel itype_tab
    # 0040D350 write_directive
    .ascii "label       sym         .globl      .cpload     .align      .ascii      .asciiz     .byte       .comm       .lcomm      .data       .double     .file       .float      .half       .cprestore  .gpword     .cpadd      .weakext    .loopno     .space      .text       .word       code        .end        .sdata      .rdata      .ent        .loc        .bgnb       .endb       .asm0       .set        .cpalias    .rep        .endrep     .lab        .vreg       .mask       .fmask      .err        .globabs    .verstamp   .frame      .extended   .extern     .aent       .option     .noalias    .alias      .mtag       .malias     .comm       .livereg    .gjaldef    .gjallive   .gjrlive    .shift_addr .restext    .dword      .prologue   .edata      .comm       "
    .type itype_tab, @object
    .size itype_tab, .-itype_tab # 756

# 100112C4
glabel iopt_tab
    # 0040D350 write_directive
    .ascii "undefined   reorder     noreorder   macro       nomacro     at          noat        move        nomove      bopt        nobopt      volatile    novolatile  transform   notransform reposition  noreposition"
    .type iopt_tab, @object
    .size iopt_tab, .-iopt_tab # 204

# 10011390
glabel ioption_type_tab
    # 0040D350 write_directive
    .ascii "undefined      O              pic            exception_info "
    .type ioption_type_tab, @object
    .size ioption_type_tab, .-ioption_type_tab # 60

# 100113CC
glabel opcode_tab
    # 0040C210 write_instruction
    .ascii "abs       add       addu      and       b         bc0f      bc0t      bc1f      bc1t      bc2f      bc2t      bad       bad       beq       bge       bgeu      bgez      bgt       bgtu      bgtz      ble       bleu      blez      blt       bltu      bltz      bne       break     c0        c1        c2        bad       div       divu      j         jal       la        lb        lbu       lh        lhu       li        lw        jr        lwc1      lwc2      bad       mfhi      mflo      move      jalr      swc1      swc2      bad       mthi      mtlo      mul       mulo      mulou     mult      multu     neg       nop       nor       or        rem       remu      rfe       rol       ror       sb        seq       sge       sgeu      sgt       sgtu      sh        sle       sleu      sll       slt       sltu      sne       sra       srl       sub       subu      sw        syscall   xor       not       lwl       lwr       swl       swr       vcall     mfc0      mfc1      mfc2      bad       mtc0      mtc1      mtc2      bad       tlbr      tlbwi     tlbwr     tlbp      ld        sd        z110      ldc1      ldc2      bad       tlbp1     sdc1      sds2      bad       l.s       l.d       l.e       s.s       s.d       s.e       add.s     add.d     add.e     sub.s     sub.d     sub.e     mul.s     mul.d     mul.e     div.s     div.d     div.e     sqrt.s    sqrt.d    sqrt.e    mov.s     mov.d     mov.e     abs.s     abs.d     abs.e     cvt.s.d   cvt.s.e   cvt.s.w   cvt.d.s   cvt.d.e   cvt.d.w   cvt.e.s   cvt.e.d   cvt.e.w   cvt.w.s   cvt.w.d   cvt.w.e   c.f.s     c.f.d     c.f.e     c.un.s    c.un.d    c.un.e    c.eq.s    c.eq.d    c.eq.e    c.ueq.s   c.ueq.d   c.ueq.e   c.olt.s   c.olt.d   c.olt.e   c.ult.s   c.ult.d   c.ult.e   c.ole.s   e.ole.d   c.ole.e   c.ule.s   c.ule.d   c.ule.e   c.sf.s    c.sf.d    c.sf.e    c.ngle.s  c.ngle.d  c.ngle.e  c.seq.s   c.seq.d   c.seq.e   c.ngl.s   c.ngl.d   c.ngl.e   c.lt.s    c.lt.d    c.lt.e    c.nge.s   c.nge.d   c.nge.e   c.le.s    c.le.d    c.le.e    c.ngt.s   c.ngt.d   c.ngt.d   lui       ulw       ulh       ulhu      usw       ush       addi      addiu     slti      sltiu     andi      ori       xori      z218      negu      beqz      bnez      neg.s     neg.d     neg.e     cfc1      ctc1      bal       bgezal    bltzal    mtc1.d    mfc1.d    trunc.w.s trunc.w.d trunc.w.e round.w.s round.w.d round.w.e addou     subou     truncu.w.struncu.w.dtruncu.w.eroundu.w.sroundu.w.droundu.w.ecfc0      cfc2      bad       ctc0      ctc2      bad       li.s      li.d      li.e      tlt       tltu      tge       tgeu      teq       tne       ll        sc        ceil.w.s  ceil.w.d  ceil.w.e  ceilu.w.s ceilu.w.d ceilu.w.e floor.w.s floor.w.d floor.w.e flooru.w.sflooru.w.dflooru.w.ebeql      beqzl     bnel      bnezl     blel      bleul     blezl     zbgtl     bgtul     bgtzl     bltl      bltul     bltzl     bltzall   bgel      bgeul     bgezl     bgezall   bc0fl     bc0tl     bc1fl     bc1tl     bc2fl     bc2tl     bad       bad       ldl       ldr       lld       lwu       sdl       sdr       scd       daddi     daddiu    dadd      daddu     dsub      dsubu     dsll      dsrl      dsra      dsllv     dsrlv     dsrav     dmult     dmultu    ddiv      ddivu     lsc1      ssc1      dmtc1     dmfc1     dmtc0     dmfc0     dmtc2     dmfc2     dli       dla       eret      trunc.l.s zround.l.sceil.l.s  floor.l.s trunc.l.d zround.l.dceil.l.d  floor.l.d trunc.l.e round.l.e ceil.l.e  floor.l.e cvt.l.s   cvt.l.d   cvt.l.e   cvt.l.w   cvt.s.l   cvt.d.l   cvt.e.l   cvt.w.l   cache     cia       uld       usd       dabs      dneg      dnegu     dmul      dmulo     dmulou    drem      dremu     drol      dror      daddou    dsubou    bad       bad       bad       bad       bad       bad       bad       bad       bad       bad       bad       bad       bad       bad       bad       bad       bad       bad       bad       bad       bad       bad       bad       bad       bad       bad       bad       bad       bad       bad       bad       bad       bad       bad       bad       bad       bad       bad       bad       bad       bad       bad       bad       bad       bad       bad       bad       bad       bad       bad       bad       bad       bad       bad       bad       bad       bad       bad       bad       "
    .type opcode_tab, @object
    .size opcode_tab, .-opcode_tab # 4300

# 10012498
glabel hex_tab
    # 0040BE64 hex8
    # 0040BF70 hex_2
    .ascii "0123456789ABCDEF"
    .type hex_tab, @object
    .size hex_tab, .-hex_tab # 16

# 100124A8
glabel current_filen
    # 0040CF50 print_source
    .byte 0xff,0xff,0xff,0xfe
    .type current_filen, @object
    .size current_filen, .-current_filen # 4

# 100124AC
glabel second_dli
    # 0040C210 write_instruction
    .byte 0x00
    .type second_dli, @object
    .size second_dli, .-second_dli # 1
    .space 3

D_100124B0:
    # 0040BFB4 put_alpha
    .byte 0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0x00,0x00,0x00,0x00




.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
glabel put_integer_ws
    .ent put_integer_ws
    # 0040C210 write_instruction
    # 0040D350 write_directive
/* 0040BBD0 3C1C0FC1 */  .cpload $t9
/* 0040BBD4 279C3E80 */  
/* 0040BBD8 0399E021 */  
/* 0040BBDC 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0040BBE0 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0040BBE4 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0040BBE8 AFA40020 */  sw    $a0, 0x20($sp)
/* 0040BBEC 10A00012 */  beqz  $a1, .L0040BC38
/* 0040BBF0 AFA50024 */   sw    $a1, 0x24($sp)
/* 0040BBF4 18A00007 */  blez  $a1, .L0040BC14
/* 0040BBF8 24060001 */   li    $a2, 1
/* 0040BBFC 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 0040BC00 8C840000 */  lw    $a0, ($a0)
/* 0040BC04 2405002B */  li    $a1, 43
/* 0040BC08 0320F809 */  jalr  $t9
/* 0040BC0C 2407000A */   li    $a3, 10
/* 0040BC10 8FBC0018 */  lw    $gp, 0x18($sp)
.L0040BC14:
/* 0040BC14 8FB90020 */  lw    $t9, 0x20($sp)
/* 0040BC18 8FA50024 */  lw    $a1, 0x24($sp)
/* 0040BC1C 24060001 */  li    $a2, 1
/* 0040BC20 8F240000 */  lw    $a0, ($t9)
/* 0040BC24 8F9987DC */  lw    $t9, %call16(write_integer)($gp)
/* 0040BC28 2407000A */  li    $a3, 10
/* 0040BC2C 0320F809 */  jalr  $t9
/* 0040BC30 00000000 */   nop   
/* 0040BC34 8FBC0018 */  lw    $gp, 0x18($sp)
.L0040BC38:
/* 0040BC38 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0040BC3C 27BD0020 */  addiu $sp, $sp, 0x20
/* 0040BC40 03E00008 */  jr    $ra
/* 0040BC44 00000000 */   nop   
    .type put_integer_ws, @function
    .size put_integer_ws, .-put_integer_ws
    .end put_integer_ws

glabel put_sym
    .ent put_sym
    # 0040C210 write_instruction
    # 0040D350 write_directive
/* 0040BC48 3C1C0FC1 */  .cpload $t9
/* 0040BC4C 279C3E08 */  
/* 0040BC50 0399E021 */  
/* 0040BC54 27BDFBC0 */  addiu $sp, $sp, -0x440
/* 0040BC58 AFB00014 */  sw    $s0, 0x14($sp)
/* 0040BC5C 00A08025 */  move  $s0, $a1
/* 0040BC60 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0040BC64 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0040BC68 10A00079 */  beqz  $a1, .L0040BE50
/* 0040BC6C AFA40440 */   sw    $a0, 0x440($sp)
/* 0040BC70 04A10013 */  bgez  $a1, .L0040BCC0
/* 0040BC74 24060001 */   li    $a2, 1
/* 0040BC78 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 0040BC7C 8C840000 */  lw    $a0, ($a0)
/* 0040BC80 24050024 */  li    $a1, 36
/* 0040BC84 2407000A */  li    $a3, 10
/* 0040BC88 0320F809 */  jalr  $t9
/* 0040BC8C AFA40034 */   sw    $a0, 0x34($sp)
/* 0040BC90 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0040BC94 8FA40034 */  lw    $a0, 0x34($sp)
/* 0040BC98 06010002 */  bgez  $s0, .L0040BCA4
/* 0040BC9C 02002825 */   move  $a1, $s0
/* 0040BCA0 00102823 */  negu  $a1, $s0
.L0040BCA4:
/* 0040BCA4 8F9987DC */  lw    $t9, %call16(write_integer)($gp)
/* 0040BCA8 24060001 */  li    $a2, 1
/* 0040BCAC 2407000A */  li    $a3, 10
/* 0040BCB0 0320F809 */  jalr  $t9
/* 0040BCB4 00000000 */   nop   
/* 0040BCB8 10000065 */  b     .L0040BE50
/* 0040BCBC 8FBC0018 */   lw    $gp, 0x18($sp)
.L0040BCC0:
/* 0040BCC0 8F9986F4 */  lw    $t9, %call16(st_fglobal_idn)($gp)
/* 0040BCC4 02002025 */  move  $a0, $s0
/* 0040BCC8 0320F809 */  jalr  $t9
/* 0040BCCC 00000000 */   nop   
/* 0040BCD0 24010001 */  li    $at, 1
/* 0040BCD4 10410019 */  beq   $v0, $at, .L0040BD3C
/* 0040BCD8 8FBC0018 */   lw    $gp, 0x18($sp)
/* 0040BCDC 8F8F89A4 */  lw     $t7, %got(source_language)($gp)
/* 0040BCE0 24010003 */  li    $at, 3
/* 0040BCE4 8FB80440 */  lw    $t8, 0x440($sp)
/* 0040BCE8 8DEF0000 */  lw    $t7, ($t7)
/* 0040BCEC 24060002 */  li    $a2, 2
/* 0040BCF0 11E10012 */  beq   $t7, $at, .L0040BD3C
/* 0040BCF4 00000000 */   nop   
/* 0040BCF8 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0040BCFC 8F040000 */  lw    $a0, ($t8)
/* 0040BD00 8F858038 */  lw    $a1, %got(RO_10008922)($gp)
/* 0040BD04 24070002 */  li    $a3, 2
/* 0040BD08 AFA40034 */  sw    $a0, 0x34($sp)
/* 0040BD0C 0320F809 */  jalr  $t9
/* 0040BD10 24A58922 */   addiu $a1, %lo(RO_10008922) # addiu $a1, $a1, -0x76de
/* 0040BD14 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0040BD18 8FA40034 */  lw    $a0, 0x34($sp)
/* 0040BD1C 02002825 */  move  $a1, $s0
/* 0040BD20 8F9987DC */  lw    $t9, %call16(write_integer)($gp)
/* 0040BD24 24060001 */  li    $a2, 1
/* 0040BD28 2407000A */  li    $a3, 10
/* 0040BD2C 0320F809 */  jalr  $t9
/* 0040BD30 00000000 */   nop   
/* 0040BD34 10000046 */  b     .L0040BE50
/* 0040BD38 8FBC0018 */   lw    $gp, 0x18($sp)
.L0040BD3C:
/* 0040BD3C 8F888038 */  lw    $t0, %got(RO_10008522)($gp)
/* 0040BD40 27B90040 */  addiu $t9, $sp, 0x40
/* 0040BD44 25088522 */  addiu $t0, %lo(RO_10008522) # addiu $t0, $t0, -0x7ade
/* 0040BD48 250B03FC */  addiu $t3, $t0, 0x3fc
.L0040BD4C:
/* 0040BD4C 890A0000 */  lwl   $t2, ($t0)
/* 0040BD50 990A0003 */  lwr   $t2, 3($t0)
/* 0040BD54 2508000C */  addiu $t0, $t0, 0xc
/* 0040BD58 2739000C */  addiu $t9, $t9, 0xc
/* 0040BD5C AB2AFFF4 */  swl   $t2, -0xc($t9)
/* 0040BD60 BB2AFFF7 */  swr   $t2, -9($t9)
/* 0040BD64 8909FFF8 */  lwl   $t1, -8($t0)
/* 0040BD68 9909FFFB */  lwr   $t1, -5($t0)
/* 0040BD6C AB29FFF8 */  swl   $t1, -8($t9)
/* 0040BD70 BB29FFFB */  swr   $t1, -5($t9)
/* 0040BD74 890AFFFC */  lwl   $t2, -4($t0)
/* 0040BD78 990AFFFF */  lwr   $t2, -1($t0)
/* 0040BD7C AB2AFFFC */  swl   $t2, -4($t9)
/* 0040BD80 150BFFF2 */  bne   $t0, $t3, .L0040BD4C
/* 0040BD84 BB2AFFFF */   swr   $t2, -1($t9)
/* 0040BD88 890A0000 */  lwl   $t2, ($t0)
/* 0040BD8C 990A0003 */  lwr   $t2, 3($t0)
/* 0040BD90 02002025 */  move  $a0, $s0
/* 0040BD94 AB2A0000 */  swl   $t2, ($t9)
/* 0040BD98 BB2A0003 */  swr   $t2, 3($t9)
/* 0040BD9C 8F9986F0 */  lw    $t9, %call16(st_str_idn)($gp)
/* 0040BDA0 0320F809 */  jalr  $t9
/* 0040BDA4 00000000 */   nop   
/* 0040BDA8 2401FFFF */  li    $at, -1
/* 0040BDAC 14410014 */  bne   $v0, $at, .L0040BE00
/* 0040BDB0 8FBC0018 */   lw    $gp, 0x18($sp)
/* 0040BDB4 8FAC0440 */  lw    $t4, 0x440($sp)
/* 0040BDB8 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0040BDBC 8F858038 */  lw    $a1, %got(RO_10008520)($gp)
/* 0040BDC0 8D840000 */  lw    $a0, ($t4)
/* 0040BDC4 24060002 */  li    $a2, 2
/* 0040BDC8 24070002 */  li    $a3, 2
/* 0040BDCC 24A58520 */  addiu $a1, %lo(RO_10008520) # addiu $a1, $a1, -0x7ae0
/* 0040BDD0 0320F809 */  jalr  $t9
/* 0040BDD4 AFA40034 */   sw    $a0, 0x34($sp)
/* 0040BDD8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0040BDDC 8FA40034 */  lw    $a0, 0x34($sp)
/* 0040BDE0 02002825 */  move  $a1, $s0
/* 0040BDE4 8F9987DC */  lw    $t9, %call16(write_integer)($gp)
/* 0040BDE8 24060001 */  li    $a2, 1
/* 0040BDEC 2407000A */  li    $a3, 10
/* 0040BDF0 0320F809 */  jalr  $t9
/* 0040BDF4 00000000 */   nop   
/* 0040BDF8 1000000D */  b     .L0040BE30
/* 0040BDFC 8FBC0018 */   lw    $gp, 0x18($sp)
.L0040BE00:
/* 0040BE00 904D0000 */  lbu   $t5, ($v0)
/* 0040BE04 27A40040 */  addiu $a0, $sp, 0x40
/* 0040BE08 24430001 */  addiu $v1, $v0, 1
/* 0040BE0C 11A00008 */  beqz  $t5, .L0040BE30
/* 0040BE10 00000000 */   nop   
/* 0040BE14 9065FFFF */  lbu   $a1, -1($v1)
/* 0040BE18 A0850000 */  sb    $a1, ($a0)
.L0040BE1C:
/* 0040BE1C 90650000 */  lbu   $a1, ($v1)
/* 0040BE20 24840001 */  addiu $a0, $a0, 1
/* 0040BE24 24630001 */  addiu $v1, $v1, 1
/* 0040BE28 54A0FFFC */  bnel  $a1, $zero, .L0040BE1C
/* 0040BE2C A0850000 */   sb    $a1, ($a0)
.L0040BE30:
/* 0040BE30 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0040BE34 8FAE0440 */  lw    $t6, 0x440($sp)
/* 0040BE38 27A50040 */  addiu $a1, $sp, 0x40
/* 0040BE3C 24060400 */  li    $a2, 1024
/* 0040BE40 00003825 */  move  $a3, $zero
/* 0040BE44 0320F809 */  jalr  $t9
/* 0040BE48 8DC40000 */   lw    $a0, ($t6)
/* 0040BE4C 8FBC0018 */  lw    $gp, 0x18($sp)
.L0040BE50:
/* 0040BE50 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0040BE54 8FB00014 */  lw    $s0, 0x14($sp)
/* 0040BE58 27BD0440 */  addiu $sp, $sp, 0x440
/* 0040BE5C 03E00008 */  jr    $ra
/* 0040BE60 00000000 */   nop   
    .type put_sym, @function
    .size put_sym, .-put_sym
    .end put_sym

glabel hex8
    .ent hex8
    # 0040BF10 put_hex10
/* 0040BE64 3C1C0FC1 */  .cpload $t9
/* 0040BE68 279C3BEC */  
/* 0040BE6C 0399E021 */  
/* 0040BE70 240A0030 */  li    $t2, 48
/* 0040BE74 240B0078 */  li    $t3, 120
/* 0040BE78 A0AA0000 */  sb    $t2, ($a1)
/* 0040BE7C A0AB0001 */  sb    $t3, 1($a1)
/* 0040BE80 2403001C */  li    $v1, 28
/* 0040BE84 24A60003 */  addiu $a2, $a1, 3
/* 0040BE88 24070018 */  li    $a3, 24
/* 0040BE8C 24080014 */  li    $t0, 20
/* 0040BE90 24090010 */  li    $t1, 16
/* 0040BE94 240CFFF0 */  li    $t4, -16
/* 0040BE98 8F828854 */  lw     $v0, %got(hex_tab)($gp)
.L0040BE9C:
/* 0040BE9C 00647807 */  srav  $t7, $a0, $v1
/* 0040BEA0 31F8000F */  andi  $t8, $t7, 0xf
/* 0040BEA4 0058C821 */  addu  $t9, $v0, $t8
/* 0040BEA8 932D0000 */  lbu   $t5, ($t9)
/* 0040BEAC 00E47807 */  srav  $t7, $a0, $a3
/* 0040BEB0 31F8000F */  andi  $t8, $t7, 0xf
/* 0040BEB4 0058C821 */  addu  $t9, $v0, $t8
/* 0040BEB8 A0CDFFFF */  sb    $t5, -1($a2)
/* 0040BEBC 932D0000 */  lbu   $t5, ($t9)
/* 0040BEC0 01047807 */  srav  $t7, $a0, $t0
/* 0040BEC4 31F8000F */  andi  $t8, $t7, 0xf
/* 0040BEC8 0058C821 */  addu  $t9, $v0, $t8
/* 0040BECC A0CD0000 */  sb    $t5, ($a2)
/* 0040BED0 932D0000 */  lbu   $t5, ($t9)
/* 0040BED4 01247807 */  srav  $t7, $a0, $t1
/* 0040BED8 31F8000F */  andi  $t8, $t7, 0xf
/* 0040BEDC 0058C821 */  addu  $t9, $v0, $t8
/* 0040BEE0 A0CD0001 */  sb    $t5, 1($a2)
/* 0040BEE4 932D0000 */  lbu   $t5, ($t9)
/* 0040BEE8 2529FFF0 */  addiu $t1, $t1, -0x10
/* 0040BEEC 2508FFF0 */  addiu $t0, $t0, -0x10
/* 0040BEF0 24E7FFF0 */  addiu $a3, $a3, -0x10
/* 0040BEF4 2463FFF0 */  addiu $v1, $v1, -0x10
/* 0040BEF8 24C60004 */  addiu $a2, $a2, 4
/* 0040BEFC 1589FFE7 */  bne   $t4, $t1, .L0040BE9C
/* 0040BF00 A0CDFFFE */   sb    $t5, -2($a2)
/* 0040BF04 A0AA0000 */  sb    $t2, ($a1)
/* 0040BF08 03E00008 */  jr    $ra
/* 0040BF0C A0AB0001 */   sb    $t3, 1($a1)
    .type hex8, @function
    .size hex8, .-hex8
    .end hex8

glabel put_hex10
    .ent put_hex10
    # 0040D350 write_directive
/* 0040BF10 3C1C0FC1 */  .cpload $t9
/* 0040BF14 279C3B40 */  
/* 0040BF18 0399E021 */  
/* 0040BF1C 8F99818C */  lw    $t9, %call16(hex8)($gp)
/* 0040BF20 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 0040BF24 AFA40030 */  sw    $a0, 0x30($sp)
/* 0040BF28 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0040BF2C 00A02025 */  move  $a0, $a1
/* 0040BF30 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0040BF34 0320F809 */  jalr  $t9
/* 0040BF38 27A50026 */   addiu $a1, $sp, 0x26
/* 0040BF3C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0040BF40 8FAE0030 */  lw    $t6, 0x30($sp)
/* 0040BF44 27A50026 */  addiu $a1, $sp, 0x26
/* 0040BF48 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0040BF4C 2406000A */  li    $a2, 10
/* 0040BF50 2407000A */  li    $a3, 10
/* 0040BF54 0320F809 */  jalr  $t9
/* 0040BF58 8DC40000 */   lw    $a0, ($t6)
/* 0040BF5C 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0040BF60 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0040BF64 27BD0030 */  addiu $sp, $sp, 0x30
/* 0040BF68 03E00008 */  jr    $ra
/* 0040BF6C 00000000 */   nop   
    .type put_hex10, @function
    .size put_hex10, .-put_hex10
    .end put_hex10

glabel hex_2
    .ent hex_2
    # 0040BFB4 put_alpha
/* 0040BF70 3C1C0FC1 */  .cpload $t9
/* 0040BF74 279C3AE0 */  
/* 0040BF78 0399E021 */  
/* 0040BF7C 8F838854 */  lw     $v1, %got(hex_tab)($gp)
/* 0040BF80 00041102 */  srl   $v0, $a0, 4
/* 0040BF84 304200FF */  andi  $v0, $v0, 0xff
/* 0040BF88 00627021 */  addu  $t6, $v1, $v0
/* 0040BF8C 91CF0000 */  lbu   $t7, ($t6)
/* 0040BF90 0002C900 */  sll   $t9, $v0, 4
/* 0040BF94 AFA40000 */  sw    $a0, ($sp)
/* 0040BF98 00194023 */  negu  $t0, $t9
/* 0040BF9C 0064C021 */  addu  $t8, $v1, $a0
/* 0040BFA0 03084821 */  addu  $t1, $t8, $t0
/* 0040BFA4 A0AF0000 */  sb    $t7, ($a1)
/* 0040BFA8 912A0000 */  lbu   $t2, ($t1)
/* 0040BFAC 03E00008 */  jr    $ra
/* 0040BFB0 A0AA0001 */   sb    $t2, 1($a1)
    .type hex_2, @function
    .size hex_2, .-hex_2
    .end hex_2

glabel put_alpha
    .ent put_alpha
    # 0040C0B4 put_string
    # 0040C210 write_instruction
/* 0040BFB4 3C1C0FC1 */  .cpload $t9
/* 0040BFB8 279C3A9C */  
/* 0040BFBC 0399E021 */  
/* 0040BFC0 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0040BFC4 AFB00014 */  sw    $s0, 0x14($sp)
/* 0040BFC8 30B000FF */  andi  $s0, $a1, 0xff
/* 0040BFCC 260EFFE0 */  addiu $t6, $s0, -0x20
/* 0040BFD0 2DCF0060 */  sltiu $t7, $t6, 0x60
/* 0040BFD4 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0040BFD8 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0040BFDC AFA40028 */  sw    $a0, 0x28($sp)
/* 0040BFE0 11E00009 */  beqz  $t7, .L0040C008
/* 0040BFE4 AFA5002C */   sw    $a1, 0x2c($sp)
/* 0040BFE8 8F888038 */  lw    $t0, %got(D_100124B0)($gp)
/* 0040BFEC 000EC143 */  sra   $t8, $t6, 5
/* 0040BFF0 0018C880 */  sll   $t9, $t8, 2
/* 0040BFF4 250824B0 */  addiu $t0, %lo(D_100124B0) # addiu $t0, $t0, 0x24b0
/* 0040BFF8 01194821 */  addu  $t1, $t0, $t9
/* 0040BFFC 8D2A0000 */  lw    $t2, ($t1)
/* 0040C000 01CA5804 */  sllv  $t3, $t2, $t6
/* 0040C004 296F0000 */  slti  $t7, $t3, 0
.L0040C008:
/* 0040C008 11E00005 */  beqz  $t7, .L0040C020
/* 0040C00C 24010022 */   li    $at, 34
/* 0040C010 12010003 */  beq   $s0, $at, .L0040C020
/* 0040C014 2401005C */   li    $at, 92
/* 0040C018 1601001A */  bne   $s0, $at, .L0040C084
/* 0040C01C 8FB80028 */   lw    $t8, 0x28($sp)
.L0040C020:
/* 0040C020 8F998194 */  lw    $t9, %call16(hex_2)($gp)
/* 0040C024 02002025 */  move  $a0, $s0
/* 0040C028 27A50026 */  addiu $a1, $sp, 0x26
/* 0040C02C 0320F809 */  jalr  $t9
/* 0040C030 00000000 */   nop   
/* 0040C034 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0040C038 8FAD0028 */  lw    $t5, 0x28($sp)
/* 0040C03C 24060002 */  li    $a2, 2
/* 0040C040 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0040C044 8F858038 */  lw    $a1, %got(RO_10008924)($gp)
/* 0040C048 8DA40000 */  lw    $a0, ($t5)
/* 0040C04C 24070002 */  li    $a3, 2
/* 0040C050 24A58924 */  addiu $a1, %lo(RO_10008924) # addiu $a1, $a1, -0x76dc
/* 0040C054 0320F809 */  jalr  $t9
/* 0040C058 AFA40020 */   sw    $a0, 0x20($sp)
/* 0040C05C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0040C060 8FA40020 */  lw    $a0, 0x20($sp)
/* 0040C064 27A50026 */  addiu $a1, $sp, 0x26
/* 0040C068 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0040C06C 24060002 */  li    $a2, 2
/* 0040C070 24070002 */  li    $a3, 2
/* 0040C074 0320F809 */  jalr  $t9
/* 0040C078 00000000 */   nop   
/* 0040C07C 10000008 */  b     .L0040C0A0
/* 0040C080 8FBC0018 */   lw    $gp, 0x18($sp)
.L0040C084:
/* 0040C084 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 0040C088 8F040000 */  lw    $a0, ($t8)
/* 0040C08C 02002825 */  move  $a1, $s0
/* 0040C090 24060001 */  li    $a2, 1
/* 0040C094 0320F809 */  jalr  $t9
/* 0040C098 2407000A */   li    $a3, 10
/* 0040C09C 8FBC0018 */  lw    $gp, 0x18($sp)
.L0040C0A0:
/* 0040C0A0 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0040C0A4 8FB00014 */  lw    $s0, 0x14($sp)
/* 0040C0A8 27BD0028 */  addiu $sp, $sp, 0x28
/* 0040C0AC 03E00008 */  jr    $ra
/* 0040C0B0 00000000 */   nop   
    .type put_alpha, @function
    .size put_alpha, .-put_alpha
    .end put_alpha

glabel put_string
    .ent put_string
    # 0040D350 write_directive
/* 0040C0B4 3C1C0FC1 */  .cpload $t9
/* 0040C0B8 279C399C */  
/* 0040C0BC 0399E021 */  
/* 0040C0C0 27BDFFC0 */  addiu $sp, $sp, -0x40
/* 0040C0C4 AFA50044 */  sw    $a1, 0x44($sp)
/* 0040C0C8 93AE0047 */  lbu   $t6, 0x47($sp)
/* 0040C0CC AFB5002C */  sw    $s5, 0x2c($sp)
/* 0040C0D0 0080A825 */  move  $s5, $a0
/* 0040C0D4 AFBF003C */  sw    $ra, 0x3c($sp)
/* 0040C0D8 AFBC0038 */  sw    $gp, 0x38($sp)
/* 0040C0DC AFB70034 */  sw    $s7, 0x34($sp)
/* 0040C0E0 AFB60030 */  sw    $s6, 0x30($sp)
/* 0040C0E4 AFB40028 */  sw    $s4, 0x28($sp)
/* 0040C0E8 AFB30024 */  sw    $s3, 0x24($sp)
/* 0040C0EC AFB20020 */  sw    $s2, 0x20($sp)
/* 0040C0F0 AFB1001C */  sw    $s1, 0x1c($sp)
/* 0040C0F4 11C00008 */  beqz  $t6, .L0040C118
/* 0040C0F8 AFB00018 */   sw    $s0, 0x18($sp)
/* 0040C0FC 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 0040C100 8C840000 */  lw    $a0, ($a0)
/* 0040C104 24050022 */  li    $a1, 34
/* 0040C108 24060001 */  li    $a2, 1
/* 0040C10C 0320F809 */  jalr  $t9
/* 0040C110 2407000A */   li    $a3, 10
/* 0040C114 8FBC0038 */  lw    $gp, 0x38($sp)
.L0040C118:
/* 0040C118 8F948B74 */  lw     $s4, %got(in_file)($gp)
/* 0040C11C 24160001 */  li    $s6, 1
/* 0040C120 24130011 */  li    $s3, 17
/* 0040C124 8E8F0000 */  lw    $t7, ($s4)
/* 0040C128 8DF80004 */  lw    $t8, 4($t7)
/* 0040C12C 9702000A */  lhu   $v0, 0xa($t8)
/* 0040C130 2443FFFF */  addiu $v1, $v0, -1
/* 0040C134 04610002 */  bgez  $v1, .L0040C140
/* 0040C138 00600821 */   move  $at, $v1
/* 0040C13C 2461000F */  addiu $at, $v1, 0xf
.L0040C140:
/* 0040C140 00011903 */  sra   $v1, $at, 4
/* 0040C144 24630001 */  addiu $v1, $v1, 1
/* 0040C148 1060001C */  beqz  $v1, .L0040C1BC
/* 0040C14C 24770001 */   addiu $s7, $v1, 1
/* 0040C150 00409025 */  move  $s2, $v0
.L0040C154:
/* 0040C154 8F9987F8 */  lw    $t9, %call16(get)($gp)
/* 0040C158 8E840000 */  lw    $a0, ($s4)
/* 0040C15C 24050010 */  li    $a1, 16
/* 0040C160 0320F809 */  jalr  $t9
/* 0040C164 00000000 */   nop   
/* 0040C168 00168900 */  sll   $s1, $s6, 4
/* 0040C16C 8FBC0038 */  lw    $gp, 0x38($sp)
/* 0040C170 2631FFF0 */  addiu $s1, $s1, -0x10
/* 0040C174 24100001 */  li    $s0, 1
.L0040C178:
/* 0040C178 0230C821 */  addu  $t9, $s1, $s0
/* 0040C17C 0259082A */  slt   $at, $s2, $t9
/* 0040C180 5420000F */  bnel  $at, $zero, .L0040C1C0
/* 0040C184 93AB0047 */   lbu   $t3, 0x47($sp)
/* 0040C188 8E880000 */  lw    $t0, ($s4)
/* 0040C18C 8F998198 */  lw    $t9, %call16(put_alpha)($gp)
/* 0040C190 02A02025 */  move  $a0, $s5
/* 0040C194 8D090004 */  lw    $t1, 4($t0)
/* 0040C198 01305021 */  addu  $t2, $t1, $s0
/* 0040C19C 0320F809 */  jalr  $t9
/* 0040C1A0 9145FFFF */   lbu   $a1, -1($t2)
/* 0040C1A4 26100001 */  addiu $s0, $s0, 1
/* 0040C1A8 1613FFF3 */  bne   $s0, $s3, .L0040C178
/* 0040C1AC 8FBC0038 */   lw    $gp, 0x38($sp)
/* 0040C1B0 26D60001 */  addiu $s6, $s6, 1
/* 0040C1B4 16D7FFE7 */  bne   $s6, $s7, .L0040C154
/* 0040C1B8 00000000 */   nop   
.L0040C1BC:
/* 0040C1BC 93AB0047 */  lbu   $t3, 0x47($sp)
.L0040C1C0:
/* 0040C1C0 24050022 */  li    $a1, 34
/* 0040C1C4 51600008 */  beql  $t3, $zero, .L0040C1E8
/* 0040C1C8 8FBF003C */   lw    $ra, 0x3c($sp)
/* 0040C1CC 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 0040C1D0 8EA40000 */  lw    $a0, ($s5)
/* 0040C1D4 24060001 */  li    $a2, 1
/* 0040C1D8 0320F809 */  jalr  $t9
/* 0040C1DC 2407000A */   li    $a3, 10
/* 0040C1E0 8FBC0038 */  lw    $gp, 0x38($sp)
/* 0040C1E4 8FBF003C */  lw    $ra, 0x3c($sp)
.L0040C1E8:
/* 0040C1E8 8FB00018 */  lw    $s0, 0x18($sp)
/* 0040C1EC 8FB1001C */  lw    $s1, 0x1c($sp)
/* 0040C1F0 8FB20020 */  lw    $s2, 0x20($sp)
/* 0040C1F4 8FB30024 */  lw    $s3, 0x24($sp)
/* 0040C1F8 8FB40028 */  lw    $s4, 0x28($sp)
/* 0040C1FC 8FB5002C */  lw    $s5, 0x2c($sp)
/* 0040C200 8FB60030 */  lw    $s6, 0x30($sp)
/* 0040C204 8FB70034 */  lw    $s7, 0x34($sp)
/* 0040C208 03E00008 */  jr    $ra
/* 0040C20C 27BD0040 */   addiu $sp, $sp, 0x40
    .type put_string, @function
    .size put_string, .-put_string
    .end put_string

glabel write_instruction
    .ent write_instruction
    # 0040DFB0 output_inst_ascii
/* 0040C210 3C1C0FC1 */  .cpload $t9
/* 0040C214 279C3840 */  
/* 0040C218 0399E021 */  
/* 0040C21C 27BDFF08 */  addiu $sp, $sp, -0xf8
/* 0040C220 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 0040C224 AFBF00D4 */  sw    $ra, 0xd4($sp)
/* 0040C228 AFBE00D0 */  sw    $fp, 0xd0($sp)
/* 0040C22C AFBC00CC */  sw    $gp, 0xcc($sp)
/* 0040C230 AFB700C8 */  sw    $s7, 0xc8($sp)
/* 0040C234 AFB600C4 */  sw    $s6, 0xc4($sp)
/* 0040C238 AFB500C0 */  sw    $s5, 0xc0($sp)
/* 0040C23C AFB400BC */  sw    $s4, 0xbc($sp)
/* 0040C240 AFB300B8 */  sw    $s3, 0xb8($sp)
/* 0040C244 AFB200B4 */  sw    $s2, 0xb4($sp)
/* 0040C248 AFB100B0 */  sw    $s1, 0xb0($sp)
/* 0040C24C AFB000AC */  sw    $s0, 0xac($sp)
/* 0040C250 8C960000 */  lw    $s6, ($a0)
/* 0040C254 0080F025 */  move  $fp, $a0
/* 0040C258 24050009 */  li    $a1, 9
/* 0040C25C 24060001 */  li    $a2, 1
/* 0040C260 2407000A */  li    $a3, 10
/* 0040C264 0320F809 */  jalr  $t9
/* 0040C268 02C02025 */   move  $a0, $s6
/* 0040C26C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040C270 24110164 */  li    $s1, 356
/* 0040C274 2401014C */  li    $at, 332
/* 0040C278 8F958B74 */  lw     $s5, %got(in_file)($gp)
/* 0040C27C 8EB40000 */  lw    $s4, ($s5)
/* 0040C280 8E830004 */  lw    $v1, 4($s4)
/* 0040C284 94620006 */  lhu   $v0, 6($v1)
/* 0040C288 00021580 */  sll   $v0, $v0, 0x16
/* 0040C28C 000215C2 */  srl   $v0, $v0, 0x17
/* 0040C290 52220018 */  beql  $s1, $v0, .L0040C2F4
/* 0040C294 8C620008 */   lw    $v0, 8($v1)
/* 0040C298 10410015 */  beq   $v0, $at, .L0040C2F0
/* 0040C29C 00027080 */   sll   $t6, $v0, 2
/* 0040C2A0 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0040C2A4 8FD60000 */  lw    $s6, ($fp)
/* 0040C2A8 8F8F8850 */  lw     $t7, %got(opcode_tab)($gp)
/* 0040C2AC 01C27021 */  addu  $t6, $t6, $v0
/* 0040C2B0 000E7040 */  sll   $t6, $t6, 1
/* 0040C2B4 2406000A */  li    $a2, 10
/* 0040C2B8 00003825 */  move  $a3, $zero
/* 0040C2BC 02C02025 */  move  $a0, $s6
/* 0040C2C0 0320F809 */  jalr  $t9
/* 0040C2C4 01CF2821 */   addu  $a1, $t6, $t7
/* 0040C2C8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040C2CC 02C02025 */  move  $a0, $s6
/* 0040C2D0 24050009 */  li    $a1, 9
/* 0040C2D4 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 0040C2D8 24060001 */  li    $a2, 1
/* 0040C2DC 2407000A */  li    $a3, 10
/* 0040C2E0 0320F809 */  jalr  $t9
/* 0040C2E4 00000000 */   nop   
/* 0040C2E8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040C2EC 8E830004 */  lw    $v1, 4($s4)
.L0040C2F0:
/* 0040C2F0 8C620008 */  lw    $v0, 8($v1)
.L0040C2F4:
/* 0040C2F4 00608025 */  move  $s0, $v1
/* 0040C2F8 24040001 */  li    $a0, 1
/* 0040C2FC 00021380 */  sll   $v0, $v0, 0xe
/* 0040C300 00021702 */  srl   $v0, $v0, 0x1c
/* 0040C304 304200FF */  andi  $v0, $v0, 0xff
/* 0040C308 2C41000E */  sltiu $at, $v0, 0xe
/* 0040C30C 102002F9 */  beqz  $at, .L0040CEF4
/* 0040C310 24050320 */   li    $a1, 800
/* 0040C314 8F818038 */  lw    $at, %got(jtbl_100089F0)($gp)
/* 0040C318 0002C080 */  sll   $t8, $v0, 2
/* 0040C31C 00380821 */  addu  $at, $at, $t8
/* 0040C320 8C3889F0 */  lw    $t8, %lo(jtbl_100089F0)($at)
/* 0040C324 031CC021 */  addu  $t8, $t8, $gp
/* 0040C328 03000008 */  jr    $t8
/* 0040C32C 00000000 */   nop   
.L0040C330:
/* 0040C330 92190008 */  lbu   $t9, 8($s0)
/* 0040C334 24130005 */  li    $s3, 5
/* 0040C338 8F928840 */  lw     $s2, %got(reg_name_tab)($gp)
/* 0040C33C 00194600 */  sll   $t0, $t9, 0x18
/* 0040C340 00084E42 */  srl   $t1, $t0, 0x19
/* 0040C344 01330019 */  multu $t1, $s3
/* 0040C348 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0040C34C 02603025 */  move  $a2, $s3
/* 0040C350 8FC40000 */  lw    $a0, ($fp)
/* 0040C354 00003825 */  move  $a3, $zero
/* 0040C358 00005012 */  mflo  $t2
/* 0040C35C 024A2821 */  addu  $a1, $s2, $t2
/* 0040C360 0320F809 */  jalr  $t9
/* 0040C364 00000000 */   nop   
/* 0040C368 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040C36C 8FC40000 */  lw    $a0, ($fp)
/* 0040C370 24060002 */  li    $a2, 2
/* 0040C374 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0040C378 8F858038 */  lw    $a1, %got(RO_100089EB)($gp)
/* 0040C37C 24070002 */  li    $a3, 2
/* 0040C380 0320F809 */  jalr  $t9
/* 0040C384 24A589EB */   addiu $a1, %lo(RO_100089EB) # addiu $a1, $a1, -0x7615
/* 0040C388 8E050000 */  lw    $a1, ($s0)
/* 0040C38C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040C390 10A0000D */  beqz  $a1, .L0040C3C8
/* 0040C394 00000000 */   nop   
/* 0040C398 8F998188 */  lw    $t9, %call16(put_sym)($gp)
/* 0040C39C 03C02025 */  move  $a0, $fp
/* 0040C3A0 0320F809 */  jalr  $t9
/* 0040C3A4 00000000 */   nop   
/* 0040C3A8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040C3AC 03C02025 */  move  $a0, $fp
/* 0040C3B0 8E05000C */  lw    $a1, 0xc($s0)
/* 0040C3B4 8F998184 */  lw    $t9, %call16(put_integer_ws)($gp)
/* 0040C3B8 0320F809 */  jalr  $t9
/* 0040C3BC 00000000 */   nop   
/* 0040C3C0 10000008 */  b     .L0040C3E4
/* 0040C3C4 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0040C3C8:
/* 0040C3C8 8F9987DC */  lw    $t9, %call16(write_integer)($gp)
/* 0040C3CC 8FC40000 */  lw    $a0, ($fp)
/* 0040C3D0 8E05000C */  lw    $a1, 0xc($s0)
/* 0040C3D4 24060001 */  li    $a2, 1
/* 0040C3D8 0320F809 */  jalr  $t9
/* 0040C3DC 2407000A */   li    $a3, 10
/* 0040C3E0 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0040C3E4:
/* 0040C3E4 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 0040C3E8 8FC40000 */  lw    $a0, ($fp)
/* 0040C3EC 24050028 */  li    $a1, 40
/* 0040C3F0 24060001 */  li    $a2, 1
/* 0040C3F4 0320F809 */  jalr  $t9
/* 0040C3F8 2407000A */   li    $a3, 10
/* 0040C3FC 960B0008 */  lhu   $t3, 8($s0)
/* 0040C400 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040C404 8FC40000 */  lw    $a0, ($fp)
/* 0040C408 000B65C0 */  sll   $t4, $t3, 0x17
/* 0040C40C 000C6E42 */  srl   $t5, $t4, 0x19
/* 0040C410 01B30019 */  multu $t5, $s3
/* 0040C414 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0040C418 02603025 */  move  $a2, $s3
/* 0040C41C 00003825 */  move  $a3, $zero
/* 0040C420 00007012 */  mflo  $t6
/* 0040C424 024E2821 */  addu  $a1, $s2, $t6
/* 0040C428 0320F809 */  jalr  $t9
/* 0040C42C 00000000 */   nop   
/* 0040C430 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040C434 8FC40000 */  lw    $a0, ($fp)
/* 0040C438 24050029 */  li    $a1, 41
/* 0040C43C 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 0040C440 24060001 */  li    $a2, 1
/* 0040C444 2407000A */  li    $a3, 10
/* 0040C448 0320F809 */  jalr  $t9
/* 0040C44C 00000000 */   nop   
/* 0040C450 960F000A */  lhu   $t7, 0xa($s0)
/* 0040C454 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040C458 31F83FFF */  andi  $t8, $t7, 0x3fff
/* 0040C45C 130002AB */  beqz  $t8, .L0040CF0C
/* 0040C460 00000000 */   nop   
/* 0040C464 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0040C468 8F858038 */  lw    $a1, %got(RO_100089E9)($gp)
/* 0040C46C 8FC40000 */  lw    $a0, ($fp)
/* 0040C470 24060002 */  li    $a2, 2
/* 0040C474 24070002 */  li    $a3, 2
/* 0040C478 0320F809 */  jalr  $t9
/* 0040C47C 24A589E9 */   addiu $a1, %lo(RO_100089E9) # addiu $a1, $a1, -0x7617
/* 0040C480 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040C484 9605000A */  lhu   $a1, 0xa($s0)
/* 0040C488 8FC40000 */  lw    $a0, ($fp)
/* 0040C48C 8F9987DC */  lw    $t9, %call16(write_integer)($gp)
/* 0040C490 24060001 */  li    $a2, 1
/* 0040C494 2407000A */  li    $a3, 10
/* 0040C498 0320F809 */  jalr  $t9
/* 0040C49C 30A53FFF */   andi  $a1, $a1, 0x3fff
/* 0040C4A0 1000029A */  b     .L0040CF0C
/* 0040C4A4 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0040C4A8:
/* 0040C4A8 92190008 */  lbu   $t9, 8($s0)
/* 0040C4AC 24060005 */  li    $a2, 5
/* 0040C4B0 8F928840 */  lw     $s2, %got(reg_name_tab)($gp)
/* 0040C4B4 00194600 */  sll   $t0, $t9, 0x18
/* 0040C4B8 00084E42 */  srl   $t1, $t0, 0x19
/* 0040C4BC 01260019 */  multu $t1, $a2
/* 0040C4C0 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0040C4C4 8FC40000 */  lw    $a0, ($fp)
/* 0040C4C8 00003825 */  move  $a3, $zero
/* 0040C4CC 00005012 */  mflo  $t2
/* 0040C4D0 024A2821 */  addu  $a1, $s2, $t2
/* 0040C4D4 0320F809 */  jalr  $t9
/* 0040C4D8 00000000 */   nop   
/* 0040C4DC 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040C4E0 8FC40000 */  lw    $a0, ($fp)
/* 0040C4E4 24060002 */  li    $a2, 2
/* 0040C4E8 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0040C4EC 8F858038 */  lw    $a1, %got(RO_100089E7)($gp)
/* 0040C4F0 24070002 */  li    $a3, 2
/* 0040C4F4 0320F809 */  jalr  $t9
/* 0040C4F8 24A589E7 */   addiu $a1, %lo(RO_100089E7) # addiu $a1, $a1, -0x7619
/* 0040C4FC 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040C500 03C02025 */  move  $a0, $fp
/* 0040C504 8E050000 */  lw    $a1, ($s0)
/* 0040C508 8F998188 */  lw    $t9, %call16(put_sym)($gp)
/* 0040C50C 0320F809 */  jalr  $t9
/* 0040C510 00000000 */   nop   
/* 0040C514 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040C518 03C02025 */  move  $a0, $fp
/* 0040C51C 8E05000C */  lw    $a1, 0xc($s0)
/* 0040C520 8F998184 */  lw    $t9, %call16(put_integer_ws)($gp)
/* 0040C524 0320F809 */  jalr  $t9
/* 0040C528 00000000 */   nop   
/* 0040C52C 960B000A */  lhu   $t3, 0xa($s0)
/* 0040C530 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040C534 24060002 */  li    $a2, 2
/* 0040C538 316C3FFF */  andi  $t4, $t3, 0x3fff
/* 0040C53C 11800273 */  beqz  $t4, .L0040CF0C
/* 0040C540 24070002 */   li    $a3, 2
/* 0040C544 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0040C548 8F858038 */  lw    $a1, %got(RO_100089E5)($gp)
/* 0040C54C 8FC40000 */  lw    $a0, ($fp)
/* 0040C550 0320F809 */  jalr  $t9
/* 0040C554 24A589E5 */   addiu $a1, %lo(RO_100089E5) # addiu $a1, $a1, -0x761b
/* 0040C558 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040C55C 9605000A */  lhu   $a1, 0xa($s0)
/* 0040C560 8FC40000 */  lw    $a0, ($fp)
/* 0040C564 8F9987DC */  lw    $t9, %call16(write_integer)($gp)
/* 0040C568 24060001 */  li    $a2, 1
/* 0040C56C 2407000A */  li    $a3, 10
/* 0040C570 0320F809 */  jalr  $t9
/* 0040C574 30A53FFF */   andi  $a1, $a1, 0x3fff
/* 0040C578 10000264 */  b     .L0040CF0C
/* 0040C57C 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0040C580:
/* 0040C580 96020006 */  lhu   $v0, 6($s0)
/* 0040C584 2401003E */  li    $at, 62
/* 0040C588 00021580 */  sll   $v0, $v0, 0x16
/* 0040C58C 000215C2 */  srl   $v0, $v0, 0x17
/* 0040C590 1041025E */  beq   $v0, $at, .L0040CF0C
/* 0040C594 240100FC */   li    $at, 252
/* 0040C598 10410003 */  beq   $v0, $at, .L0040C5A8
/* 0040C59C 240100FD */   li    $at, 253
/* 0040C5A0 14410041 */  bne   $v0, $at, .L0040C6A8
/* 0040C5A4 00000000 */   nop   
.L0040C5A8:
/* 0040C5A8 920D0008 */  lbu   $t5, 8($s0)
/* 0040C5AC 24060005 */  li    $a2, 5
/* 0040C5B0 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0040C5B4 000D7600 */  sll   $t6, $t5, 0x18
/* 0040C5B8 000E7E42 */  srl   $t7, $t6, 0x19
/* 0040C5BC 01E60019 */  multu $t7, $a2
/* 0040C5C0 8F928840 */  lw     $s2, %got(reg_name_tab)($gp)
/* 0040C5C4 8FC40000 */  lw    $a0, ($fp)
/* 0040C5C8 00003825 */  move  $a3, $zero
/* 0040C5CC 0000C012 */  mflo  $t8
/* 0040C5D0 02582821 */  addu  $a1, $s2, $t8
/* 0040C5D4 0320F809 */  jalr  $t9
/* 0040C5D8 00000000 */   nop   
/* 0040C5DC 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040C5E0 8FC40000 */  lw    $a0, ($fp)
/* 0040C5E4 24060002 */  li    $a2, 2
/* 0040C5E8 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0040C5EC 8F858038 */  lw    $a1, %got(RO_100089E3)($gp)
/* 0040C5F0 24070002 */  li    $a3, 2
/* 0040C5F4 0320F809 */  jalr  $t9
/* 0040C5F8 24A589E3 */   addiu $a1, %lo(RO_100089E3) # addiu $a1, $a1, -0x761d
/* 0040C5FC 8E990004 */  lw    $t9, 4($s4)
/* 0040C600 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040C604 24170001 */  li    $s7, 1
/* 0040C608 8F33000C */  lw    $s3, 0xc($t9)
/* 0040C60C 24120011 */  li    $s2, 17
/* 0040C610 2662FFFF */  addiu $v0, $s3, -1
/* 0040C614 04410002 */  bgez  $v0, .L0040C620
/* 0040C618 00400821 */   move  $at, $v0
/* 0040C61C 2441000F */  addiu $at, $v0, 0xf
.L0040C620:
/* 0040C620 00011103 */  sra   $v0, $at, 4
/* 0040C624 24420001 */  addiu $v0, $v0, 1
/* 0040C628 10400238 */  beqz  $v0, .L0040CF0C
/* 0040C62C 24480001 */   addiu $t0, $v0, 1
/* 0040C630 AFA800DC */  sw    $t0, 0xdc($sp)
.L0040C634:
/* 0040C634 8F9987F8 */  lw    $t9, %call16(get)($gp)
/* 0040C638 8EA40000 */  lw    $a0, ($s5)
/* 0040C63C 24050010 */  li    $a1, 16
/* 0040C640 0320F809 */  jalr  $t9
/* 0040C644 00000000 */   nop   
/* 0040C648 00178900 */  sll   $s1, $s7, 4
/* 0040C64C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040C650 2631FFF0 */  addiu $s1, $s1, -0x10
/* 0040C654 24100001 */  li    $s0, 1
.L0040C658:
/* 0040C658 02304821 */  addu  $t1, $s1, $s0
/* 0040C65C 0269082A */  slt   $at, $s3, $t1
/* 0040C660 1420022A */  bnez  $at, .L0040CF0C
/* 0040C664 00000000 */   nop   
/* 0040C668 8EAA0000 */  lw    $t2, ($s5)
/* 0040C66C 8F998198 */  lw    $t9, %call16(put_alpha)($gp)
/* 0040C670 03C02025 */  move  $a0, $fp
/* 0040C674 8D4B0004 */  lw    $t3, 4($t2)
/* 0040C678 01706021 */  addu  $t4, $t3, $s0
/* 0040C67C 0320F809 */  jalr  $t9
/* 0040C680 9185FFFF */   lbu   $a1, -1($t4)
/* 0040C684 26100001 */  addiu $s0, $s0, 1
/* 0040C688 1612FFF3 */  bne   $s0, $s2, .L0040C658
/* 0040C68C 8FBC00CC */   lw    $gp, 0xcc($sp)
/* 0040C690 8FAD00DC */  lw    $t5, 0xdc($sp)
/* 0040C694 26F70001 */  addiu $s7, $s7, 1
/* 0040C698 16EDFFE6 */  bne   $s7, $t5, .L0040C634
/* 0040C69C 00000000 */   nop   
/* 0040C6A0 1000021A */  b     .L0040CF0C
/* 0040C6A4 00000000 */   nop   
.L0040C6A8:
/* 0040C6A8 1622002D */  bne   $s1, $v0, .L0040C760
/* 0040C6AC 2401014C */   li    $at, 332
/* 0040C6B0 8C73000C */  lw    $s3, 0xc($v1)
/* 0040C6B4 24170001 */  li    $s7, 1
/* 0040C6B8 24120011 */  li    $s2, 17
/* 0040C6BC 2662FFFF */  addiu $v0, $s3, -1
/* 0040C6C0 04410002 */  bgez  $v0, .L0040C6CC
/* 0040C6C4 00400821 */   move  $at, $v0
/* 0040C6C8 2441000F */  addiu $at, $v0, 0xf
.L0040C6CC:
/* 0040C6CC 00011103 */  sra   $v0, $at, 4
/* 0040C6D0 24420001 */  addiu $v0, $v0, 1
/* 0040C6D4 1040020D */  beqz  $v0, .L0040CF0C
/* 0040C6D8 244E0001 */   addiu $t6, $v0, 1
/* 0040C6DC AFAE00DC */  sw    $t6, 0xdc($sp)
.L0040C6E0:
/* 0040C6E0 8F9987F8 */  lw    $t9, %call16(get)($gp)
/* 0040C6E4 02802025 */  move  $a0, $s4
/* 0040C6E8 24050010 */  li    $a1, 16
/* 0040C6EC 0320F809 */  jalr  $t9
/* 0040C6F0 00000000 */   nop   
/* 0040C6F4 00178900 */  sll   $s1, $s7, 4
/* 0040C6F8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040C6FC 2631FFF0 */  addiu $s1, $s1, -0x10
/* 0040C700 24100001 */  li    $s0, 1
.L0040C704:
/* 0040C704 02307821 */  addu  $t7, $s1, $s0
/* 0040C708 026F082A */  slt   $at, $s3, $t7
/* 0040C70C 142001FF */  bnez  $at, .L0040CF0C
/* 0040C710 00000000 */   nop   
/* 0040C714 8EB40000 */  lw    $s4, ($s5)
/* 0040C718 8FC40000 */  lw    $a0, ($fp)
/* 0040C71C 24060001 */  li    $a2, 1
/* 0040C720 8E980004 */  lw    $t8, 4($s4)
/* 0040C724 2407000A */  li    $a3, 10
/* 0040C728 0310C821 */  addu  $t9, $t8, $s0
/* 0040C72C 9325FFFF */  lbu   $a1, -1($t9)
/* 0040C730 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 0040C734 0320F809 */  jalr  $t9
/* 0040C738 00000000 */   nop   
/* 0040C73C 26100001 */  addiu $s0, $s0, 1
/* 0040C740 1612FFF0 */  bne   $s0, $s2, .L0040C704
/* 0040C744 8FBC00CC */   lw    $gp, 0xcc($sp)
/* 0040C748 8FA800DC */  lw    $t0, 0xdc($sp)
/* 0040C74C 26F70001 */  addiu $s7, $s7, 1
/* 0040C750 16E8FFE3 */  bne   $s7, $t0, .L0040C6E0
/* 0040C754 00000000 */   nop   
/* 0040C758 100001EC */  b     .L0040CF0C
/* 0040C75C 00000000 */   nop   
.L0040C760:
/* 0040C760 54410047 */  bnel  $v0, $at, .L0040C880
/* 0040C764 920E0008 */   lbu   $t6, 8($s0)
/* 0040C768 8F91885C */  lw     $s1, %got(second_dli)($gp)
/* 0040C76C 2406000A */  li    $a2, 10
/* 0040C770 00003825 */  move  $a3, $zero
/* 0040C774 92290000 */  lbu   $t1, ($s1)
/* 0040C778 240D0001 */  li    $t5, 1
/* 0040C77C 1120003A */  beqz  $t1, .L0040C868
/* 0040C780 00000000 */   nop   
/* 0040C784 946A0006 */  lhu   $t2, 6($v1)
/* 0040C788 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0040C78C 8FD60000 */  lw    $s6, ($fp)
/* 0040C790 000A5D80 */  sll   $t3, $t2, 0x16
/* 0040C794 000B65C2 */  srl   $t4, $t3, 0x17
/* 0040C798 000C6880 */  sll   $t5, $t4, 2
/* 0040C79C 8F8E8850 */  lw     $t6, %got(opcode_tab)($gp)
/* 0040C7A0 01AC6821 */  addu  $t5, $t5, $t4
/* 0040C7A4 000D6840 */  sll   $t5, $t5, 1
/* 0040C7A8 02C02025 */  move  $a0, $s6
/* 0040C7AC 0320F809 */  jalr  $t9
/* 0040C7B0 01AE2821 */   addu  $a1, $t5, $t6
/* 0040C7B4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040C7B8 02C02025 */  move  $a0, $s6
/* 0040C7BC 24050009 */  li    $a1, 9
/* 0040C7C0 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 0040C7C4 24060001 */  li    $a2, 1
/* 0040C7C8 2407000A */  li    $a3, 10
/* 0040C7CC 0320F809 */  jalr  $t9
/* 0040C7D0 00000000 */   nop   
/* 0040C7D4 920F0008 */  lbu   $t7, 8($s0)
/* 0040C7D8 24060005 */  li    $a2, 5
/* 0040C7DC 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040C7E0 000FC600 */  sll   $t8, $t7, 0x18
/* 0040C7E4 0018CE42 */  srl   $t9, $t8, 0x19
/* 0040C7E8 03260019 */  multu $t9, $a2
/* 0040C7EC 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0040C7F0 8F928840 */  lw     $s2, %got(reg_name_tab)($gp)
/* 0040C7F4 8FC40000 */  lw    $a0, ($fp)
/* 0040C7F8 00003825 */  move  $a3, $zero
/* 0040C7FC 00004012 */  mflo  $t0
/* 0040C800 02482821 */  addu  $a1, $s2, $t0
/* 0040C804 0320F809 */  jalr  $t9
/* 0040C808 00000000 */   nop   
/* 0040C80C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040C810 8FC40000 */  lw    $a0, ($fp)
/* 0040C814 24060002 */  li    $a2, 2
/* 0040C818 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0040C81C 8F858038 */  lw    $a1, %got(RO_100089E1)($gp)
/* 0040C820 24070002 */  li    $a3, 2
/* 0040C824 0320F809 */  jalr  $t9
/* 0040C828 24A589E1 */   addiu $a1, %lo(RO_100089E1) # addiu $a1, $a1, -0x761f
/* 0040C82C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040C830 8E07000C */  lw    $a3, 0xc($s0)
/* 0040C834 240A0001 */  li    $t2, 1
/* 0040C838 8F828B7C */  lw     $v0, %got(val64)($gp)
/* 0040C83C 240B000A */  li    $t3, 10
/* 0040C840 AC470004 */  sw    $a3, 4($v0)
/* 0040C844 8F9987E4 */  lw    $t9, %call16(write_int64)($gp)
/* 0040C848 8FC40000 */  lw    $a0, ($fp)
/* 0040C84C AFAB0014 */  sw    $t3, 0x14($sp)
/* 0040C850 AFAA0010 */  sw    $t2, 0x10($sp)
/* 0040C854 0320F809 */  jalr  $t9
/* 0040C858 8C460000 */   lw    $a2, ($v0)
/* 0040C85C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040C860 100001AA */  b     .L0040CF0C
/* 0040C864 A2200000 */   sb    $zero, ($s1)
.L0040C868:
/* 0040C868 8F828B7C */  lw     $v0, %got(val64)($gp)
/* 0040C86C 8E0C000C */  lw    $t4, 0xc($s0)
/* 0040C870 A22D0000 */  sb    $t5, ($s1)
/* 0040C874 100001A5 */  b     .L0040CF0C
/* 0040C878 AC4C0000 */   sw    $t4, ($v0)
/* 0040C87C 920E0008 */  lbu   $t6, 8($s0)
.L0040C880:
/* 0040C880 24060005 */  li    $a2, 5
/* 0040C884 8F928840 */  lw     $s2, %got(reg_name_tab)($gp)
/* 0040C888 000E7E00 */  sll   $t7, $t6, 0x18
/* 0040C88C 000FC642 */  srl   $t8, $t7, 0x19
/* 0040C890 03060019 */  multu $t8, $a2
/* 0040C894 8FC40000 */  lw    $a0, ($fp)
/* 0040C898 00003825 */  move  $a3, $zero
/* 0040C89C 0000C812 */  mflo  $t9
/* 0040C8A0 02592821 */  addu  $a1, $s2, $t9
/* 0040C8A4 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0040C8A8 0320F809 */  jalr  $t9
/* 0040C8AC 00000000 */   nop   
/* 0040C8B0 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040C8B4 8FC40000 */  lw    $a0, ($fp)
/* 0040C8B8 24060002 */  li    $a2, 2
/* 0040C8BC 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0040C8C0 8F858038 */  lw    $a1, %got(RO_100089DF)($gp)
/* 0040C8C4 24070002 */  li    $a3, 2
/* 0040C8C8 0320F809 */  jalr  $t9
/* 0040C8CC 24A589DF */   addiu $a1, %lo(RO_100089DF) # addiu $a1, $a1, -0x7621
/* 0040C8D0 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040C8D4 8FC40000 */  lw    $a0, ($fp)
/* 0040C8D8 8E05000C */  lw    $a1, 0xc($s0)
/* 0040C8DC 8F9987DC */  lw    $t9, %call16(write_integer)($gp)
/* 0040C8E0 24060001 */  li    $a2, 1
/* 0040C8E4 2407000A */  li    $a3, 10
/* 0040C8E8 0320F809 */  jalr  $t9
/* 0040C8EC 00000000 */   nop   
/* 0040C8F0 10000186 */  b     .L0040CF0C
/* 0040C8F4 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0040C8F8:
/* 0040C8F8 92020008 */  lbu   $v0, 8($s0)
/* 0040C8FC 24010048 */  li    $at, 72
/* 0040C900 24060005 */  li    $a2, 5
/* 0040C904 00021600 */  sll   $v0, $v0, 0x18
/* 0040C908 00021642 */  srl   $v0, $v0, 0x19
/* 0040C90C 50410014 */  beql  $v0, $at, .L0040C960
/* 0040C910 96090008 */   lhu   $t1, 8($s0)
/* 0040C914 00460019 */  multu $v0, $a2
/* 0040C918 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0040C91C 8F928840 */  lw     $s2, %got(reg_name_tab)($gp)
/* 0040C920 8FC40000 */  lw    $a0, ($fp)
/* 0040C924 00003825 */  move  $a3, $zero
/* 0040C928 00004012 */  mflo  $t0
/* 0040C92C 02482821 */  addu  $a1, $s2, $t0
/* 0040C930 0320F809 */  jalr  $t9
/* 0040C934 00000000 */   nop   
/* 0040C938 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040C93C 8FC40000 */  lw    $a0, ($fp)
/* 0040C940 24060002 */  li    $a2, 2
/* 0040C944 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0040C948 8F858038 */  lw    $a1, %got(RO_100089DD)($gp)
/* 0040C94C 24070002 */  li    $a3, 2
/* 0040C950 0320F809 */  jalr  $t9
/* 0040C954 24A589DD */   addiu $a1, %lo(RO_100089DD) # addiu $a1, $a1, -0x7623
/* 0040C958 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040C95C 96090008 */  lhu   $t1, 8($s0)
.L0040C960:
/* 0040C960 24130005 */  li    $s3, 5
/* 0040C964 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0040C968 000955C0 */  sll   $t2, $t1, 0x17
/* 0040C96C 000A5E42 */  srl   $t3, $t2, 0x19
/* 0040C970 01730019 */  multu $t3, $s3
/* 0040C974 8F928840 */  lw     $s2, %got(reg_name_tab)($gp)
/* 0040C978 02603025 */  move  $a2, $s3
/* 0040C97C 8FC40000 */  lw    $a0, ($fp)
/* 0040C980 00003825 */  move  $a3, $zero
/* 0040C984 00006012 */  mflo  $t4
/* 0040C988 024C2821 */  addu  $a1, $s2, $t4
/* 0040C98C 0320F809 */  jalr  $t9
/* 0040C990 00000000 */   nop   
/* 0040C994 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040C998 8FC40000 */  lw    $a0, ($fp)
/* 0040C99C 24060002 */  li    $a2, 2
/* 0040C9A0 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0040C9A4 8F858038 */  lw    $a1, %got(RO_100089DB)($gp)
/* 0040C9A8 24070002 */  li    $a3, 2
/* 0040C9AC 0320F809 */  jalr  $t9
/* 0040C9B0 24A589DB */   addiu $a1, %lo(RO_100089DB) # addiu $a1, $a1, -0x7625
/* 0040C9B4 960D000A */  lhu   $t5, 0xa($s0)
/* 0040C9B8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040C9BC 8FC40000 */  lw    $a0, ($fp)
/* 0040C9C0 000D7480 */  sll   $t6, $t5, 0x12
/* 0040C9C4 000E7E42 */  srl   $t7, $t6, 0x19
/* 0040C9C8 01F30019 */  multu $t7, $s3
/* 0040C9CC 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0040C9D0 02603025 */  move  $a2, $s3
/* 0040C9D4 00003825 */  move  $a3, $zero
/* 0040C9D8 0000C012 */  mflo  $t8
/* 0040C9DC 02582821 */  addu  $a1, $s2, $t8
/* 0040C9E0 0320F809 */  jalr  $t9
/* 0040C9E4 00000000 */   nop   
/* 0040C9E8 10000148 */  b     .L0040CF0C
/* 0040C9EC 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0040C9F0:
/* 0040C9F0 92190008 */  lbu   $t9, 8($s0)
/* 0040C9F4 24130005 */  li    $s3, 5
/* 0040C9F8 8F928840 */  lw     $s2, %got(reg_name_tab)($gp)
/* 0040C9FC 00194600 */  sll   $t0, $t9, 0x18
/* 0040CA00 00084E42 */  srl   $t1, $t0, 0x19
/* 0040CA04 01330019 */  multu $t1, $s3
/* 0040CA08 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0040CA0C 02603025 */  move  $a2, $s3
/* 0040CA10 8FC40000 */  lw    $a0, ($fp)
/* 0040CA14 00003825 */  move  $a3, $zero
/* 0040CA18 00005012 */  mflo  $t2
/* 0040CA1C 024A2821 */  addu  $a1, $s2, $t2
/* 0040CA20 0320F809 */  jalr  $t9
/* 0040CA24 00000000 */   nop   
/* 0040CA28 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040CA2C 8FC40000 */  lw    $a0, ($fp)
/* 0040CA30 24060002 */  li    $a2, 2
/* 0040CA34 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0040CA38 8F858038 */  lw    $a1, %got(RO_100089D9)($gp)
/* 0040CA3C 24070002 */  li    $a3, 2
/* 0040CA40 0320F809 */  jalr  $t9
/* 0040CA44 24A589D9 */   addiu $a1, %lo(RO_100089D9) # addiu $a1, $a1, -0x7627
/* 0040CA48 960B0008 */  lhu   $t3, 8($s0)
/* 0040CA4C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040CA50 8FC40000 */  lw    $a0, ($fp)
/* 0040CA54 000B65C0 */  sll   $t4, $t3, 0x17
/* 0040CA58 000C6E42 */  srl   $t5, $t4, 0x19
/* 0040CA5C 01B30019 */  multu $t5, $s3
/* 0040CA60 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0040CA64 02603025 */  move  $a2, $s3
/* 0040CA68 00003825 */  move  $a3, $zero
/* 0040CA6C 00007012 */  mflo  $t6
/* 0040CA70 024E2821 */  addu  $a1, $s2, $t6
/* 0040CA74 0320F809 */  jalr  $t9
/* 0040CA78 00000000 */   nop   
/* 0040CA7C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040CA80 8FC40000 */  lw    $a0, ($fp)
/* 0040CA84 24060002 */  li    $a2, 2
/* 0040CA88 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0040CA8C 8F858038 */  lw    $a1, %got(RO_100089D7)($gp)
/* 0040CA90 24070002 */  li    $a3, 2
/* 0040CA94 0320F809 */  jalr  $t9
/* 0040CA98 24A589D7 */   addiu $a1, %lo(RO_100089D7) # addiu $a1, $a1, -0x7629
/* 0040CA9C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040CAA0 8FC40000 */  lw    $a0, ($fp)
/* 0040CAA4 8E05000C */  lw    $a1, 0xc($s0)
/* 0040CAA8 8F9987DC */  lw    $t9, %call16(write_integer)($gp)
/* 0040CAAC 24060001 */  li    $a2, 1
/* 0040CAB0 2407000A */  li    $a3, 10
/* 0040CAB4 0320F809 */  jalr  $t9
/* 0040CAB8 00000000 */   nop   
/* 0040CABC 10000113 */  b     .L0040CF0C
/* 0040CAC0 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0040CAC4:
/* 0040CAC4 920F0008 */  lbu   $t7, 8($s0)
/* 0040CAC8 24130005 */  li    $s3, 5
/* 0040CACC 8F928840 */  lw     $s2, %got(reg_name_tab)($gp)
/* 0040CAD0 000FC600 */  sll   $t8, $t7, 0x18
/* 0040CAD4 0018CE42 */  srl   $t9, $t8, 0x19
/* 0040CAD8 03330019 */  multu $t9, $s3
/* 0040CADC 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0040CAE0 02603025 */  move  $a2, $s3
/* 0040CAE4 8FC40000 */  lw    $a0, ($fp)
/* 0040CAE8 00003825 */  move  $a3, $zero
/* 0040CAEC 00004012 */  mflo  $t0
/* 0040CAF0 02482821 */  addu  $a1, $s2, $t0
/* 0040CAF4 0320F809 */  jalr  $t9
/* 0040CAF8 00000000 */   nop   
/* 0040CAFC 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040CB00 8FC40000 */  lw    $a0, ($fp)
/* 0040CB04 24060002 */  li    $a2, 2
/* 0040CB08 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0040CB0C 8F858038 */  lw    $a1, %got(RO_100089D5)($gp)
/* 0040CB10 24070002 */  li    $a3, 2
/* 0040CB14 0320F809 */  jalr  $t9
/* 0040CB18 24A589D5 */   addiu $a1, %lo(RO_100089D5) # addiu $a1, $a1, -0x762b
/* 0040CB1C 96090008 */  lhu   $t1, 8($s0)
/* 0040CB20 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040CB24 8FC40000 */  lw    $a0, ($fp)
/* 0040CB28 000955C0 */  sll   $t2, $t1, 0x17
/* 0040CB2C 000A5E42 */  srl   $t3, $t2, 0x19
/* 0040CB30 01730019 */  multu $t3, $s3
/* 0040CB34 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0040CB38 02603025 */  move  $a2, $s3
/* 0040CB3C 00003825 */  move  $a3, $zero
/* 0040CB40 00006012 */  mflo  $t4
/* 0040CB44 024C2821 */  addu  $a1, $s2, $t4
/* 0040CB48 0320F809 */  jalr  $t9
/* 0040CB4C 00000000 */   nop   
/* 0040CB50 100000EE */  b     .L0040CF0C
/* 0040CB54 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0040CB58:
/* 0040CB58 8F998188 */  lw    $t9, %call16(put_sym)($gp)
/* 0040CB5C 03C02025 */  move  $a0, $fp
/* 0040CB60 8E050000 */  lw    $a1, ($s0)
/* 0040CB64 0320F809 */  jalr  $t9
/* 0040CB68 00000000 */   nop   
/* 0040CB6C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040CB70 03C02025 */  move  $a0, $fp
/* 0040CB74 8E05000C */  lw    $a1, 0xc($s0)
/* 0040CB78 8F998184 */  lw    $t9, %call16(put_integer_ws)($gp)
/* 0040CB7C 0320F809 */  jalr  $t9
/* 0040CB80 00000000 */   nop   
/* 0040CB84 100000E1 */  b     .L0040CF0C
/* 0040CB88 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0040CB8C:
/* 0040CB8C 920D0008 */  lbu   $t5, 8($s0)
/* 0040CB90 24060005 */  li    $a2, 5
/* 0040CB94 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0040CB98 000D7600 */  sll   $t6, $t5, 0x18
/* 0040CB9C 000E7E42 */  srl   $t7, $t6, 0x19
/* 0040CBA0 01E60019 */  multu $t7, $a2
/* 0040CBA4 8F928840 */  lw     $s2, %got(reg_name_tab)($gp)
/* 0040CBA8 8FC40000 */  lw    $a0, ($fp)
/* 0040CBAC 00003825 */  move  $a3, $zero
/* 0040CBB0 0000C012 */  mflo  $t8
/* 0040CBB4 02582821 */  addu  $a1, $s2, $t8
/* 0040CBB8 0320F809 */  jalr  $t9
/* 0040CBBC 00000000 */   nop   
/* 0040CBC0 100000D2 */  b     .L0040CF0C
/* 0040CBC4 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0040CBC8:
/* 0040CBC8 8F9987DC */  lw    $t9, %call16(write_integer)($gp)
/* 0040CBCC 8FC40000 */  lw    $a0, ($fp)
/* 0040CBD0 8E05000C */  lw    $a1, 0xc($s0)
/* 0040CBD4 24060001 */  li    $a2, 1
/* 0040CBD8 0320F809 */  jalr  $t9
/* 0040CBDC 2407000A */   li    $a3, 10
/* 0040CBE0 100000CA */  b     .L0040CF0C
/* 0040CBE4 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0040CBE8:
/* 0040CBE8 92190008 */  lbu   $t9, 8($s0)
/* 0040CBEC 24130005 */  li    $s3, 5
/* 0040CBF0 8F928840 */  lw     $s2, %got(reg_name_tab)($gp)
/* 0040CBF4 00194600 */  sll   $t0, $t9, 0x18
/* 0040CBF8 00084E42 */  srl   $t1, $t0, 0x19
/* 0040CBFC 01330019 */  multu $t1, $s3
/* 0040CC00 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0040CC04 02603025 */  move  $a2, $s3
/* 0040CC08 8FC40000 */  lw    $a0, ($fp)
/* 0040CC0C 00003825 */  move  $a3, $zero
/* 0040CC10 00005012 */  mflo  $t2
/* 0040CC14 024A2821 */  addu  $a1, $s2, $t2
/* 0040CC18 0320F809 */  jalr  $t9
/* 0040CC1C 00000000 */   nop   
/* 0040CC20 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040CC24 8FC40000 */  lw    $a0, ($fp)
/* 0040CC28 24060002 */  li    $a2, 2
/* 0040CC2C 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0040CC30 8F858038 */  lw    $a1, %got(RO_100089D3)($gp)
/* 0040CC34 24070002 */  li    $a3, 2
/* 0040CC38 0320F809 */  jalr  $t9
/* 0040CC3C 24A589D3 */   addiu $a1, %lo(RO_100089D3) # addiu $a1, $a1, -0x762d
/* 0040CC40 960B0008 */  lhu   $t3, 8($s0)
/* 0040CC44 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040CC48 8FC40000 */  lw    $a0, ($fp)
/* 0040CC4C 000B65C0 */  sll   $t4, $t3, 0x17
/* 0040CC50 000C6E42 */  srl   $t5, $t4, 0x19
/* 0040CC54 01B30019 */  multu $t5, $s3
/* 0040CC58 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0040CC5C 02603025 */  move  $a2, $s3
/* 0040CC60 00003825 */  move  $a3, $zero
/* 0040CC64 00007012 */  mflo  $t6
/* 0040CC68 024E2821 */  addu  $a1, $s2, $t6
/* 0040CC6C 0320F809 */  jalr  $t9
/* 0040CC70 00000000 */   nop   
/* 0040CC74 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040CC78 8FC40000 */  lw    $a0, ($fp)
/* 0040CC7C 24060002 */  li    $a2, 2
/* 0040CC80 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0040CC84 8F858038 */  lw    $a1, %got(RO_100089D1)($gp)
/* 0040CC88 24070002 */  li    $a3, 2
/* 0040CC8C 0320F809 */  jalr  $t9
/* 0040CC90 24A589D1 */   addiu $a1, %lo(RO_100089D1) # addiu $a1, $a1, -0x762f
/* 0040CC94 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040CC98 03C02025 */  move  $a0, $fp
/* 0040CC9C 8E050000 */  lw    $a1, ($s0)
/* 0040CCA0 8F998188 */  lw    $t9, %call16(put_sym)($gp)
/* 0040CCA4 0320F809 */  jalr  $t9
/* 0040CCA8 00000000 */   nop   
/* 0040CCAC 10000097 */  b     .L0040CF0C
/* 0040CCB0 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0040CCB4:
/* 0040CCB4 920F0008 */  lbu   $t7, 8($s0)
/* 0040CCB8 24060005 */  li    $a2, 5
/* 0040CCBC 8F928840 */  lw     $s2, %got(reg_name_tab)($gp)
/* 0040CCC0 000FC600 */  sll   $t8, $t7, 0x18
/* 0040CCC4 0018CE42 */  srl   $t9, $t8, 0x19
/* 0040CCC8 03260019 */  multu $t9, $a2
/* 0040CCCC 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0040CCD0 8FC40000 */  lw    $a0, ($fp)
/* 0040CCD4 00003825 */  move  $a3, $zero
/* 0040CCD8 00004012 */  mflo  $t0
/* 0040CCDC 02482821 */  addu  $a1, $s2, $t0
/* 0040CCE0 0320F809 */  jalr  $t9
/* 0040CCE4 00000000 */   nop   
/* 0040CCE8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040CCEC 8FC40000 */  lw    $a0, ($fp)
/* 0040CCF0 24060002 */  li    $a2, 2
/* 0040CCF4 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0040CCF8 8F858038 */  lw    $a1, %got(RO_100089CF)($gp)
/* 0040CCFC 24070002 */  li    $a3, 2
/* 0040CD00 0320F809 */  jalr  $t9
/* 0040CD04 24A589CF */   addiu $a1, %lo(RO_100089CF) # addiu $a1, $a1, -0x7631
/* 0040CD08 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040CD0C 03C02025 */  move  $a0, $fp
/* 0040CD10 8E050000 */  lw    $a1, ($s0)
/* 0040CD14 8F998188 */  lw    $t9, %call16(put_sym)($gp)
/* 0040CD18 0320F809 */  jalr  $t9
/* 0040CD1C 00000000 */   nop   
/* 0040CD20 1000007A */  b     .L0040CF0C
/* 0040CD24 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0040CD28:
/* 0040CD28 8F998188 */  lw    $t9, %call16(put_sym)($gp)
/* 0040CD2C 03C02025 */  move  $a0, $fp
/* 0040CD30 8E050000 */  lw    $a1, ($s0)
/* 0040CD34 0320F809 */  jalr  $t9
/* 0040CD38 00000000 */   nop   
/* 0040CD3C 10000073 */  b     .L0040CF0C
/* 0040CD40 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0040CD44:
/* 0040CD44 8F898038 */  lw    $t1, %got(RO_1000897F)($gp)
/* 0040CD48 24040004 */  li    $a0, 4
/* 0040CD4C 240503AB */  li    $a1, 939
/* 0040CD50 2529897F */  addiu $t1, %lo(RO_1000897F) # addiu $t1, $t1, -0x7681
/* 0040CD54 252D0048 */  addiu $t5, $t1, 0x48
/* 0040CD58 03A06025 */  move  $t4, $sp
.L0040CD5C:
/* 0040CD5C 892B0000 */  lwl   $t3, ($t1)
/* 0040CD60 992B0003 */  lwr   $t3, 3($t1)
/* 0040CD64 2529000C */  addiu $t1, $t1, 0xc
/* 0040CD68 258C000C */  addiu $t4, $t4, 0xc
/* 0040CD6C A98BFFFC */  swl   $t3, -4($t4)
/* 0040CD70 B98BFFFF */  swr   $t3, -1($t4)
/* 0040CD74 892AFFF8 */  lwl   $t2, -8($t1)
/* 0040CD78 992AFFFB */  lwr   $t2, -5($t1)
/* 0040CD7C A98A0000 */  swl   $t2, ($t4)
/* 0040CD80 B98A0003 */  swr   $t2, 3($t4)
/* 0040CD84 892BFFFC */  lwl   $t3, -4($t1)
/* 0040CD88 992BFFFF */  lwr   $t3, -1($t1)
/* 0040CD8C A98B0004 */  swl   $t3, 4($t4)
/* 0040CD90 152DFFF2 */  bne   $t1, $t5, .L0040CD5C
/* 0040CD94 B98B0007 */   swr   $t3, 7($t4)
/* 0040CD98 892B0000 */  lwl   $t3, ($t1)
/* 0040CD9C 992B0003 */  lwr   $t3, 3($t1)
/* 0040CDA0 8F8E8038 */  lw    $t6, %got(RO_1000892F)($gp)
/* 0040CDA4 03A0C825 */  move  $t9, $sp
/* 0040CDA8 A98B0008 */  swl   $t3, 8($t4)
/* 0040CDAC B98B000B */  swr   $t3, 0xb($t4)
/* 0040CDB0 892A0004 */  lwl   $t2, 4($t1)
/* 0040CDB4 992A0007 */  lwr   $t2, 7($t1)
/* 0040CDB8 25CE892F */  addiu $t6, %lo(RO_1000892F) # addiu $t6, $t6, -0x76d1
/* 0040CDBC 25C80048 */  addiu $t0, $t6, 0x48
/* 0040CDC0 A98A000C */  swl   $t2, 0xc($t4)
/* 0040CDC4 B98A000F */  swr   $t2, 0xf($t4)
.L0040CDC8:
/* 0040CDC8 89D80000 */  lwl   $t8, ($t6)
/* 0040CDCC 99D80003 */  lwr   $t8, 3($t6)
/* 0040CDD0 25CE000C */  addiu $t6, $t6, 0xc
/* 0040CDD4 2739000C */  addiu $t9, $t9, 0xc
/* 0040CDD8 AB38004C */  swl   $t8, 0x4c($t9)
/* 0040CDDC BB38004F */  swr   $t8, 0x4f($t9)
/* 0040CDE0 89CFFFF8 */  lwl   $t7, -8($t6)
/* 0040CDE4 99CFFFFB */  lwr   $t7, -5($t6)
/* 0040CDE8 AB2F0050 */  swl   $t7, 0x50($t9)
/* 0040CDEC BB2F0053 */  swr   $t7, 0x53($t9)
/* 0040CDF0 89D8FFFC */  lwl   $t8, -4($t6)
/* 0040CDF4 99D8FFFF */  lwr   $t8, -1($t6)
/* 0040CDF8 AB380054 */  swl   $t8, 0x54($t9)
/* 0040CDFC 15C8FFF2 */  bne   $t6, $t0, .L0040CDC8
/* 0040CE00 BB380057 */   swr   $t8, 0x57($t9)
/* 0040CE04 89D80000 */  lwl   $t8, ($t6)
/* 0040CE08 99D80003 */  lwr   $t8, 3($t6)
/* 0040CE0C AB380058 */  swl   $t8, 0x58($t9)
/* 0040CE10 BB38005B */  swr   $t8, 0x5b($t9)
/* 0040CE14 89CF0004 */  lwl   $t7, 4($t6)
/* 0040CE18 99CF0007 */  lwr   $t7, 7($t6)
/* 0040CE1C AB2F005C */  swl   $t7, 0x5c($t9)
/* 0040CE20 BB2F005F */  swr   $t7, 0x5f($t9)
/* 0040CE24 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 0040CE28 8FA7000C */  lw    $a3, 0xc($sp)
/* 0040CE2C 8FA60008 */  lw    $a2, 8($sp)
/* 0040CE30 0320F809 */  jalr  $t9
/* 0040CE34 00000000 */   nop   
/* 0040CE38 10000034 */  b     .L0040CF0C
/* 0040CE3C 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0040CE40:
/* 0040CE40 920D0008 */  lbu   $t5, 8($s0)
/* 0040CE44 24060005 */  li    $a2, 5
/* 0040CE48 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0040CE4C 000D4E00 */  sll   $t1, $t5, 0x18
/* 0040CE50 00096642 */  srl   $t4, $t1, 0x19
/* 0040CE54 01860019 */  multu $t4, $a2
/* 0040CE58 8F928840 */  lw     $s2, %got(reg_name_tab)($gp)
/* 0040CE5C 8FC40000 */  lw    $a0, ($fp)
/* 0040CE60 00003825 */  move  $a3, $zero
/* 0040CE64 00005012 */  mflo  $t2
/* 0040CE68 024A2821 */  addu  $a1, $s2, $t2
/* 0040CE6C 0320F809 */  jalr  $t9
/* 0040CE70 00000000 */   nop   
/* 0040CE74 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040CE78 8FC40000 */  lw    $a0, ($fp)
/* 0040CE7C 24060002 */  li    $a2, 2
/* 0040CE80 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0040CE84 8F858038 */  lw    $a1, %got(RO_1000892D)($gp)
/* 0040CE88 24070002 */  li    $a3, 2
/* 0040CE8C 0320F809 */  jalr  $t9
/* 0040CE90 24A5892D */   addiu $a1, %lo(RO_1000892D) # addiu $a1, $a1, -0x76d3
/* 0040CE94 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040CE98 8FC40000 */  lw    $a0, ($fp)
/* 0040CE9C 8E05000C */  lw    $a1, 0xc($s0)
/* 0040CEA0 8F9987DC */  lw    $t9, %call16(write_integer)($gp)
/* 0040CEA4 24060001 */  li    $a2, 1
/* 0040CEA8 2407000A */  li    $a3, 10
/* 0040CEAC 0320F809 */  jalr  $t9
/* 0040CEB0 00000000 */   nop   
/* 0040CEB4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040CEB8 8FC40000 */  lw    $a0, ($fp)
/* 0040CEBC 24060002 */  li    $a2, 2
/* 0040CEC0 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0040CEC4 8F858038 */  lw    $a1, %got(RO_1000892B)($gp)
/* 0040CEC8 24070002 */  li    $a3, 2
/* 0040CECC 0320F809 */  jalr  $t9
/* 0040CED0 24A5892B */   addiu $a1, %lo(RO_1000892B) # addiu $a1, $a1, -0x76d5
/* 0040CED4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040CED8 03C02025 */  move  $a0, $fp
/* 0040CEDC 8E050000 */  lw    $a1, ($s0)
/* 0040CEE0 8F998188 */  lw    $t9, %call16(put_sym)($gp)
/* 0040CEE4 0320F809 */  jalr  $t9
/* 0040CEE8 00000000 */   nop   
/* 0040CEEC 10000007 */  b     .L0040CF0C
/* 0040CEF0 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0040CEF4:
/* 0040CEF4 8F998808 */  lw    $t9, %call16(caseerror)($gp)
/* 0040CEF8 8F868038 */  lw    $a2, %got(RO_10008926)($gp)
/* 0040CEFC 24070005 */  li    $a3, 5
/* 0040CF00 0320F809 */  jalr  $t9
/* 0040CF04 24C68926 */   addiu $a2, %lo(RO_10008926) # addiu $a2, $a2, -0x76da
/* 0040CF08 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0040CF0C:
/* 0040CF0C 8F9987CC */  lw    $t9, %call16(writeln)($gp)
/* 0040CF10 8FC40000 */  lw    $a0, ($fp)
/* 0040CF14 0320F809 */  jalr  $t9
/* 0040CF18 00000000 */   nop   
/* 0040CF1C 8FBF00D4 */  lw    $ra, 0xd4($sp)
/* 0040CF20 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040CF24 8FB000AC */  lw    $s0, 0xac($sp)
/* 0040CF28 8FB100B0 */  lw    $s1, 0xb0($sp)
/* 0040CF2C 8FB200B4 */  lw    $s2, 0xb4($sp)
/* 0040CF30 8FB300B8 */  lw    $s3, 0xb8($sp)
/* 0040CF34 8FB400BC */  lw    $s4, 0xbc($sp)
/* 0040CF38 8FB500C0 */  lw    $s5, 0xc0($sp)
/* 0040CF3C 8FB600C4 */  lw    $s6, 0xc4($sp)
/* 0040CF40 8FB700C8 */  lw    $s7, 0xc8($sp)
/* 0040CF44 8FBE00D0 */  lw    $fp, 0xd0($sp)
/* 0040CF48 03E00008 */  jr    $ra
/* 0040CF4C 27BD00F8 */   addiu $sp, $sp, 0xf8
    .type write_instruction, @function
    .size write_instruction, .-write_instruction
    .end write_instruction

glabel print_source
    .ent print_source
    # 0040D350 write_directive
/* 0040CF50 3C1C0FC1 */  .cpload $t9
/* 0040CF54 279C2B00 */  
/* 0040CF58 0399E021 */  
/* 0040CF5C 27BDFF30 */  addiu $sp, $sp, -0xd0
/* 0040CF60 8F828858 */  lw     $v0, %got(current_filen)($gp)
/* 0040CF64 AFB500C4 */  sw    $s5, 0xc4($sp)
/* 0040CF68 AFB300BC */  sw    $s3, 0xbc($sp)
/* 0040CF6C 8C4E0000 */  lw    $t6, ($v0)
/* 0040CF70 00809825 */  move  $s3, $a0
/* 0040CF74 00C0A825 */  move  $s5, $a2
/* 0040CF78 AFBF00CC */  sw    $ra, 0xcc($sp)
/* 0040CF7C AFBC00C8 */  sw    $gp, 0xc8($sp)
/* 0040CF80 AFB400C0 */  sw    $s4, 0xc0($sp)
/* 0040CF84 AFB200B8 */  sw    $s2, 0xb8($sp)
/* 0040CF88 AFB100B4 */  sw    $s1, 0xb4($sp)
/* 0040CF8C 10AE0062 */  beq   $a1, $t6, .L0040D118
/* 0040CF90 AFB000B0 */   sw    $s0, 0xb0($sp)
/* 0040CF94 14A00002 */  bnez  $a1, .L0040CFA0
/* 0040CF98 AC450000 */   sw    $a1, ($v0)
/* 0040CF9C 24050002 */  li    $a1, 2
.L0040CFA0:
/* 0040CFA0 8F9986F0 */  lw    $t9, %call16(st_str_idn)($gp)
/* 0040CFA4 00A02025 */  move  $a0, $a1
/* 0040CFA8 0320F809 */  jalr  $t9
/* 0040CFAC 00000000 */   nop   
/* 0040CFB0 8FBC00C8 */  lw    $gp, 0xc8($sp)
/* 0040CFB4 24060020 */  li    $a2, 32
/* 0040CFB8 03A05025 */  move  $t2, $sp
/* 0040CFBC 8F838BD4 */  lw     $v1, %got(source_file_name)($gp)
/* 0040CFC0 24640400 */  addiu $a0, $v1, 0x400
.L0040CFC4:
/* 0040CFC4 24630001 */  addiu $v1, $v1, 1
/* 0040CFC8 1464FFFE */  bne   $v1, $a0, .L0040CFC4
/* 0040CFCC A066FFFF */   sb    $a2, -1($v1)
/* 0040CFD0 904F0000 */  lbu   $t7, ($v0)
/* 0040CFD4 24440001 */  addiu $a0, $v0, 1
/* 0040CFD8 11E00009 */  beqz  $t7, .L0040D000
/* 0040CFDC 00000000 */   nop   
/* 0040CFE0 8F838BD4 */  lw     $v1, %got(source_file_name)($gp)
/* 0040CFE4 9085FFFF */  lbu   $a1, -1($a0)
/* 0040CFE8 A0650000 */  sb    $a1, ($v1)
.L0040CFEC:
/* 0040CFEC 90850000 */  lbu   $a1, ($a0)
/* 0040CFF0 24630001 */  addiu $v1, $v1, 1
/* 0040CFF4 24840001 */  addiu $a0, $a0, 1
/* 0040CFF8 54A0FFFC */  bnel  $a1, $zero, .L0040CFEC
/* 0040CFFC A0650000 */   sb    $a1, ($v1)
.L0040D000:
/* 0040D000 8F988BD4 */  lw     $t8, %got(source_file_name)($gp)
/* 0040D004 93180000 */  lbu   $t8, ($t8)
/* 0040D008 14D8003F */  bne   $a2, $t8, .L0040D108
/* 0040D00C 00000000 */   nop   
/* 0040D010 8F998038 */  lw    $t9, %got(RO_10008A7A)($gp)
/* 0040D014 24040004 */  li    $a0, 4
/* 0040D018 240503D1 */  li    $a1, 977
/* 0040D01C 27398A7A */  addiu $t9, %lo(RO_10008A7A) # addiu $t9, $t9, -0x7586
/* 0040D020 272B0048 */  addiu $t3, $t9, 0x48
.L0040D024:
/* 0040D024 8B290000 */  lwl   $t1, ($t9)
/* 0040D028 9B290003 */  lwr   $t1, 3($t9)
/* 0040D02C 2739000C */  addiu $t9, $t9, 0xc
/* 0040D030 254A000C */  addiu $t2, $t2, 0xc
/* 0040D034 A949FFFC */  swl   $t1, -4($t2)
/* 0040D038 B949FFFF */  swr   $t1, -1($t2)
/* 0040D03C 8B28FFF8 */  lwl   $t0, -8($t9)
/* 0040D040 9B28FFFB */  lwr   $t0, -5($t9)
/* 0040D044 A9480000 */  swl   $t0, ($t2)
/* 0040D048 B9480003 */  swr   $t0, 3($t2)
/* 0040D04C 8B29FFFC */  lwl   $t1, -4($t9)
/* 0040D050 9B29FFFF */  lwr   $t1, -1($t9)
/* 0040D054 A9490004 */  swl   $t1, 4($t2)
/* 0040D058 172BFFF2 */  bne   $t9, $t3, .L0040D024
/* 0040D05C B9490007 */   swr   $t1, 7($t2)
/* 0040D060 8B290000 */  lwl   $t1, ($t9)
/* 0040D064 9B290003 */  lwr   $t1, 3($t9)
/* 0040D068 8F8C8038 */  lw    $t4, %got(RO_10008A2A)($gp)
/* 0040D06C 03A07825 */  move  $t7, $sp
/* 0040D070 A9490008 */  swl   $t1, 8($t2)
/* 0040D074 B949000B */  swr   $t1, 0xb($t2)
/* 0040D078 8B280004 */  lwl   $t0, 4($t9)
/* 0040D07C 9B280007 */  lwr   $t0, 7($t9)
/* 0040D080 258C8A2A */  addiu $t4, %lo(RO_10008A2A) # addiu $t4, $t4, -0x75d6
/* 0040D084 25980048 */  addiu $t8, $t4, 0x48
/* 0040D088 A948000C */  swl   $t0, 0xc($t2)
/* 0040D08C B948000F */  swr   $t0, 0xf($t2)
.L0040D090:
/* 0040D090 898E0000 */  lwl   $t6, ($t4)
/* 0040D094 998E0003 */  lwr   $t6, 3($t4)
/* 0040D098 258C000C */  addiu $t4, $t4, 0xc
/* 0040D09C 25EF000C */  addiu $t7, $t7, 0xc
/* 0040D0A0 A9EE004C */  swl   $t6, 0x4c($t7)
/* 0040D0A4 B9EE004F */  swr   $t6, 0x4f($t7)
/* 0040D0A8 898DFFF8 */  lwl   $t5, -8($t4)
/* 0040D0AC 998DFFFB */  lwr   $t5, -5($t4)
/* 0040D0B0 A9ED0050 */  swl   $t5, 0x50($t7)
/* 0040D0B4 B9ED0053 */  swr   $t5, 0x53($t7)
/* 0040D0B8 898EFFFC */  lwl   $t6, -4($t4)
/* 0040D0BC 998EFFFF */  lwr   $t6, -1($t4)
/* 0040D0C0 A9EE0054 */  swl   $t6, 0x54($t7)
/* 0040D0C4 1598FFF2 */  bne   $t4, $t8, .L0040D090
/* 0040D0C8 B9EE0057 */   swr   $t6, 0x57($t7)
/* 0040D0CC 898E0000 */  lwl   $t6, ($t4)
/* 0040D0D0 998E0003 */  lwr   $t6, 3($t4)
/* 0040D0D4 A9EE0058 */  swl   $t6, 0x58($t7)
/* 0040D0D8 B9EE005B */  swr   $t6, 0x5b($t7)
/* 0040D0DC 898D0004 */  lwl   $t5, 4($t4)
/* 0040D0E0 998D0007 */  lwr   $t5, 7($t4)
/* 0040D0E4 A9ED005C */  swl   $t5, 0x5c($t7)
/* 0040D0E8 B9ED005F */  swr   $t5, 0x5f($t7)
/* 0040D0EC 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 0040D0F0 8FA7000C */  lw    $a3, 0xc($sp)
/* 0040D0F4 8FA60008 */  lw    $a2, 8($sp)
/* 0040D0F8 0320F809 */  jalr  $t9
/* 0040D0FC 00000000 */   nop   
/* 0040D100 1000008A */  b     .L0040D32C
/* 0040D104 8FBC00C8 */   lw    $gp, 0xc8($sp)
.L0040D108:
/* 0040D108 8F9489F8 */  lw     $s4, %got(current_linen)($gp)
/* 0040D10C 3C0B7FFF */  lui   $t3, 0x7fff
/* 0040D110 356BFFFF */  ori   $t3, $t3, 0xffff
/* 0040D114 AE8B0000 */  sw    $t3, ($s4)
.L0040D118:
/* 0040D118 8F9489F8 */  lw     $s4, %got(current_linen)($gp)
/* 0040D11C 24060400 */  li    $a2, 1024
/* 0040D120 00003825 */  move  $a3, $zero
/* 0040D124 8E920000 */  lw    $s2, ($s4)
/* 0040D128 2659FFFF */  addiu $t9, $s2, -1
/* 0040D12C 02B9082A */  slt   $at, $s5, $t9
/* 0040D130 50200010 */  beql  $at, $zero, .L0040D174
/* 0040D134 02B24023 */   subu  $t0, $s5, $s2
/* 0040D138 8F998800 */  lw    $t9, %call16(reset)($gp)
/* 0040D13C 8F918B78 */  lw     $s1, %got(source_file)($gp)
/* 0040D140 8F858BD4 */  lw     $a1, %got(source_file_name)($gp)
/* 0040D144 0320F809 */  jalr  $t9
/* 0040D148 02202025 */   move  $a0, $s1
/* 0040D14C 8FBC00C8 */  lw    $gp, 0xc8($sp)
/* 0040D150 8E240000 */  lw    $a0, ($s1)
/* 0040D154 8F9987B4 */  lw    $t9, %call16(eof)($gp)
/* 0040D158 0320F809 */  jalr  $t9
/* 0040D15C 00000000 */   nop   
/* 0040D160 14400072 */  bnez  $v0, .L0040D32C
/* 0040D164 8FBC00C8 */   lw    $gp, 0xc8($sp)
/* 0040D168 24120001 */  li    $s2, 1
/* 0040D16C AE920000 */  sw    $s2, ($s4)
/* 0040D170 02B24023 */  subu  $t0, $s5, $s2
.L0040D174:
/* 0040D174 29010006 */  slti  $at, $t0, 6
/* 0040D178 14200022 */  bnez  $at, .L0040D204
/* 0040D17C 8F918B78 */   lw     $s1, %got(source_file)($gp)
.L0040D180:
/* 0040D180 8F9987B4 */  lw    $t9, %call16(eof)($gp)
/* 0040D184 8E240000 */  lw    $a0, ($s1)
/* 0040D188 0320F809 */  jalr  $t9
/* 0040D18C 00000000 */   nop   
/* 0040D190 14400066 */  bnez  $v0, .L0040D32C
/* 0040D194 8FBC00C8 */   lw    $gp, 0xc8($sp)
/* 0040D198 8F9987B8 */  lw    $t9, %call16(eoln)($gp)
/* 0040D19C 8E240000 */  lw    $a0, ($s1)
/* 0040D1A0 0320F809 */  jalr  $t9
/* 0040D1A4 00000000 */   nop   
/* 0040D1A8 1440000C */  bnez  $v0, .L0040D1DC
/* 0040D1AC 8FBC00C8 */   lw    $gp, 0xc8($sp)
.L0040D1B0:
/* 0040D1B0 8F9987C0 */  lw    $t9, %call16(next_char)($gp)
/* 0040D1B4 8E240000 */  lw    $a0, ($s1)
/* 0040D1B8 0320F809 */  jalr  $t9
/* 0040D1BC 00000000 */   nop   
/* 0040D1C0 8FBC00C8 */  lw    $gp, 0xc8($sp)
/* 0040D1C4 8E240000 */  lw    $a0, ($s1)
/* 0040D1C8 8F9987B8 */  lw    $t9, %call16(eoln)($gp)
/* 0040D1CC 0320F809 */  jalr  $t9
/* 0040D1D0 00000000 */   nop   
/* 0040D1D4 1040FFF6 */  beqz  $v0, .L0040D1B0
/* 0040D1D8 8FBC00C8 */   lw    $gp, 0xc8($sp)
.L0040D1DC:
/* 0040D1DC 8F9987C0 */  lw    $t9, %call16(next_char)($gp)
/* 0040D1E0 8E240000 */  lw    $a0, ($s1)
/* 0040D1E4 0320F809 */  jalr  $t9
/* 0040D1E8 00000000 */   nop   
/* 0040D1EC 8E890000 */  lw    $t1, ($s4)
/* 0040D1F0 8FBC00C8 */  lw    $gp, 0xc8($sp)
/* 0040D1F4 25320001 */  addiu $s2, $t1, 1
/* 0040D1F8 0255082A */  slt   $at, $s2, $s5
/* 0040D1FC 1420FFE0 */  bnez  $at, .L0040D180
/* 0040D200 AE920000 */   sw    $s2, ($s4)
.L0040D204:
/* 0040D204 02B2082A */  slt   $at, $s5, $s2
/* 0040D208 54200049 */  bnel  $at, $zero, .L0040D330
/* 0040D20C 8FBF00CC */   lw    $ra, 0xcc($sp)
.L0040D210:
/* 0040D210 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0040D214 8E700000 */  lw    $s0, ($s3)
/* 0040D218 8F858038 */  lw    $a1, %got(RO_10008A28)($gp)
/* 0040D21C 24060002 */  li    $a2, 2
/* 0040D220 24070002 */  li    $a3, 2
/* 0040D224 02002025 */  move  $a0, $s0
/* 0040D228 0320F809 */  jalr  $t9
/* 0040D22C 24A58A28 */   addiu $a1, %lo(RO_10008A28) # addiu $a1, $a1, -0x75d8
/* 0040D230 8FBC00C8 */  lw    $gp, 0xc8($sp)
/* 0040D234 02002025 */  move  $a0, $s0
/* 0040D238 02402825 */  move  $a1, $s2
/* 0040D23C 8F9987DC */  lw    $t9, %call16(write_integer)($gp)
/* 0040D240 24060004 */  li    $a2, 4
/* 0040D244 2407000A */  li    $a3, 10
/* 0040D248 0320F809 */  jalr  $t9
/* 0040D24C 00000000 */   nop   
/* 0040D250 8FBC00C8 */  lw    $gp, 0xc8($sp)
/* 0040D254 02002025 */  move  $a0, $s0
/* 0040D258 24050009 */  li    $a1, 9
/* 0040D25C 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 0040D260 24060001 */  li    $a2, 1
/* 0040D264 2407000A */  li    $a3, 10
/* 0040D268 0320F809 */  jalr  $t9
/* 0040D26C 00000000 */   nop   
/* 0040D270 8FBC00C8 */  lw    $gp, 0xc8($sp)
/* 0040D274 8E240000 */  lw    $a0, ($s1)
/* 0040D278 8F9987B8 */  lw    $t9, %call16(eoln)($gp)
/* 0040D27C 0320F809 */  jalr  $t9
/* 0040D280 00000000 */   nop   
/* 0040D284 1440001A */  bnez  $v0, .L0040D2F0
/* 0040D288 8FBC00C8 */   lw    $gp, 0xc8($sp)
.L0040D28C:
/* 0040D28C 8F9987BC */  lw    $t9, %call16(peek_char)($gp)
/* 0040D290 8E700000 */  lw    $s0, ($s3)
/* 0040D294 8E240000 */  lw    $a0, ($s1)
/* 0040D298 0320F809 */  jalr  $t9
/* 0040D29C 00000000 */   nop   
/* 0040D2A0 8FBC00C8 */  lw    $gp, 0xc8($sp)
/* 0040D2A4 02002025 */  move  $a0, $s0
/* 0040D2A8 00402825 */  move  $a1, $v0
/* 0040D2AC 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 0040D2B0 24060001 */  li    $a2, 1
/* 0040D2B4 2407000A */  li    $a3, 10
/* 0040D2B8 0320F809 */  jalr  $t9
/* 0040D2BC 00000000 */   nop   
/* 0040D2C0 8FBC00C8 */  lw    $gp, 0xc8($sp)
/* 0040D2C4 8E240000 */  lw    $a0, ($s1)
/* 0040D2C8 8F9987C0 */  lw    $t9, %call16(next_char)($gp)
/* 0040D2CC 0320F809 */  jalr  $t9
/* 0040D2D0 00000000 */   nop   
/* 0040D2D4 8FBC00C8 */  lw    $gp, 0xc8($sp)
/* 0040D2D8 8E240000 */  lw    $a0, ($s1)
/* 0040D2DC 8F9987B8 */  lw    $t9, %call16(eoln)($gp)
/* 0040D2E0 0320F809 */  jalr  $t9
/* 0040D2E4 00000000 */   nop   
/* 0040D2E8 1040FFE8 */  beqz  $v0, .L0040D28C
/* 0040D2EC 8FBC00C8 */   lw    $gp, 0xc8($sp)
.L0040D2F0:
/* 0040D2F0 8F9987CC */  lw    $t9, %call16(writeln)($gp)
/* 0040D2F4 8E640000 */  lw    $a0, ($s3)
/* 0040D2F8 0320F809 */  jalr  $t9
/* 0040D2FC 00000000 */   nop   
/* 0040D300 8FBC00C8 */  lw    $gp, 0xc8($sp)
/* 0040D304 8E240000 */  lw    $a0, ($s1)
/* 0040D308 8F9987C0 */  lw    $t9, %call16(next_char)($gp)
/* 0040D30C 0320F809 */  jalr  $t9
/* 0040D310 00000000 */   nop   
/* 0040D314 8E8C0000 */  lw    $t4, ($s4)
/* 0040D318 8FBC00C8 */  lw    $gp, 0xc8($sp)
/* 0040D31C 25920001 */  addiu $s2, $t4, 1
/* 0040D320 02B2082A */  slt   $at, $s5, $s2
/* 0040D324 1020FFBA */  beqz  $at, .L0040D210
/* 0040D328 AE920000 */   sw    $s2, ($s4)
.L0040D32C:
/* 0040D32C 8FBF00CC */  lw    $ra, 0xcc($sp)
.L0040D330:
/* 0040D330 8FB000B0 */  lw    $s0, 0xb0($sp)
/* 0040D334 8FB100B4 */  lw    $s1, 0xb4($sp)
/* 0040D338 8FB200B8 */  lw    $s2, 0xb8($sp)
/* 0040D33C 8FB300BC */  lw    $s3, 0xbc($sp)
/* 0040D340 8FB400C0 */  lw    $s4, 0xc0($sp)
/* 0040D344 8FB500C4 */  lw    $s5, 0xc4($sp)
/* 0040D348 03E00008 */  jr    $ra
/* 0040D34C 27BD00D0 */   addiu $sp, $sp, 0xd0
    .type print_source, @function
    .size print_source, .-print_source
    .end print_source

glabel write_directive
    .ent write_directive
    # 0040DFB0 output_inst_ascii
/* 0040D350 3C1C0FC1 */  .cpload $t9
/* 0040D354 279C2700 */  
/* 0040D358 0399E021 */  
/* 0040D35C 8F838B74 */  lw     $v1, %got(in_file)($gp)
/* 0040D360 27BDFFB8 */  addiu $sp, $sp, -0x48
/* 0040D364 AFBF002C */  sw    $ra, 0x2c($sp)
/* 0040D368 8C630000 */  lw    $v1, ($v1)
/* 0040D36C AFBC0028 */  sw    $gp, 0x28($sp)
/* 0040D370 AFB20024 */  sw    $s2, 0x24($sp)
/* 0040D374 AFB10020 */  sw    $s1, 0x20($sp)
/* 0040D378 AFB0001C */  sw    $s0, 0x1c($sp)
/* 0040D37C 8C720004 */  lw    $s2, 4($v1)
/* 0040D380 24010001 */  li    $at, 1
/* 0040D384 00808825 */  move  $s1, $a0
/* 0040D388 92420005 */  lbu   $v0, 5($s2)
/* 0040D38C 3042003F */  andi  $v0, $v0, 0x3f
/* 0040D390 50410302 */  beql  $v0, $at, .L0040DF9C
/* 0040D394 8FBF002C */   lw    $ra, 0x2c($sp)
/* 0040D398 14400014 */  bnez  $v0, .L0040D3EC
/* 0040D39C 24050009 */   li    $a1, 9
/* 0040D3A0 8F998188 */  lw    $t9, %call16(put_sym)($gp)
/* 0040D3A4 8E450000 */  lw    $a1, ($s2)
/* 0040D3A8 0320F809 */  jalr  $t9
/* 0040D3AC 00000000 */   nop   
/* 0040D3B0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0040D3B4 8E240000 */  lw    $a0, ($s1)
/* 0040D3B8 2405003A */  li    $a1, 58
/* 0040D3BC 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 0040D3C0 24060001 */  li    $a2, 1
/* 0040D3C4 2407000A */  li    $a3, 10
/* 0040D3C8 0320F809 */  jalr  $t9
/* 0040D3CC 00000000 */   nop   
/* 0040D3D0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0040D3D4 8E240000 */  lw    $a0, ($s1)
/* 0040D3D8 8F9987CC */  lw    $t9, %call16(writeln)($gp)
/* 0040D3DC 0320F809 */  jalr  $t9
/* 0040D3E0 00000000 */   nop   
/* 0040D3E4 100002EC */  b     .L0040DF98
/* 0040D3E8 8FBC0028 */   lw    $gp, 0x28($sp)
.L0040D3EC:
/* 0040D3EC 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 0040D3F0 8E240000 */  lw    $a0, ($s1)
/* 0040D3F4 AFA30034 */  sw    $v1, 0x34($sp)
/* 0040D3F8 24060001 */  li    $a2, 1
/* 0040D3FC 0320F809 */  jalr  $t9
/* 0040D400 2407000A */   li    $a3, 10
/* 0040D404 924E0005 */  lbu   $t6, 5($s2)
/* 0040D408 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0040D40C 8E300000 */  lw    $s0, ($s1)
/* 0040D410 31CF003F */  andi  $t7, $t6, 0x3f
/* 0040D414 8F998844 */  lw     $t9, %got(itype_tab)($gp)
/* 0040D418 000FC080 */  sll   $t8, $t7, 2
/* 0040D41C 030FC023 */  subu  $t8, $t8, $t7
/* 0040D420 0018C080 */  sll   $t8, $t8, 2
/* 0040D424 03192821 */  addu  $a1, $t8, $t9
/* 0040D428 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0040D42C 2406000C */  li    $a2, 12
/* 0040D430 00003825 */  move  $a3, $zero
/* 0040D434 0320F809 */  jalr  $t9
/* 0040D438 02002025 */   move  $a0, $s0
/* 0040D43C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0040D440 02002025 */  move  $a0, $s0
/* 0040D444 24050009 */  li    $a1, 9
/* 0040D448 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 0040D44C 24060001 */  li    $a2, 1
/* 0040D450 2407000A */  li    $a3, 10
/* 0040D454 0320F809 */  jalr  $t9
/* 0040D458 00000000 */   nop   
/* 0040D45C 92420005 */  lbu   $v0, 5($s2)
/* 0040D460 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0040D464 3042003F */  andi  $v0, $v0, 0x3f
/* 0040D468 304200FF */  andi  $v0, $v0, 0xff
/* 0040D46C 2448FFFE */  addiu $t0, $v0, -2
/* 0040D470 2D01003C */  sltiu $at, $t0, 0x3c
/* 0040D474 102002B0 */  beqz  $at, .L0040DF38
/* 0040D478 00000000 */   nop   
/* 0040D47C 8F818038 */  lw    $at, %got(jtbl_10008ADC)($gp)
/* 0040D480 00084080 */  sll   $t0, $t0, 2
/* 0040D484 00280821 */  addu  $at, $at, $t0
/* 0040D488 8C288ADC */  lw    $t0, %lo(jtbl_10008ADC)($at)
/* 0040D48C 011C4021 */  addu  $t0, $t0, $gp
/* 0040D490 01000008 */  jr    $t0
/* 0040D494 00000000 */   nop   
.L0040D498:
/* 0040D498 8F9987DC */  lw    $t9, %call16(write_integer)($gp)
/* 0040D49C 8E240000 */  lw    $a0, ($s1)
/* 0040D4A0 8E450008 */  lw    $a1, 8($s2)
/* 0040D4A4 24060001 */  li    $a2, 1
/* 0040D4A8 0320F809 */  jalr  $t9
/* 0040D4AC 2407000A */   li    $a3, 10
/* 0040D4B0 100002A9 */  b     .L0040DF58
/* 0040D4B4 8FBC0028 */   lw    $gp, 0x28($sp)
.L0040D4B8:
/* 0040D4B8 8F99819C */  lw    $t9, %call16(put_string)($gp)
/* 0040D4BC 8E49000C */  lw    $t1, 0xc($s2)
/* 0040D4C0 02202025 */  move  $a0, $s1
/* 0040D4C4 00002825 */  move  $a1, $zero
/* 0040D4C8 0320F809 */  jalr  $t9
/* 0040D4CC AFA90044 */   sw    $t1, 0x44($sp)
/* 0040D4D0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0040D4D4 8E240000 */  lw    $a0, ($s1)
/* 0040D4D8 2405003A */  li    $a1, 58
/* 0040D4DC 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 0040D4E0 24060001 */  li    $a2, 1
/* 0040D4E4 2407000A */  li    $a3, 10
/* 0040D4E8 0320F809 */  jalr  $t9
/* 0040D4EC 00000000 */   nop   
/* 0040D4F0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0040D4F4 8E240000 */  lw    $a0, ($s1)
/* 0040D4F8 8FA50044 */  lw    $a1, 0x44($sp)
/* 0040D4FC 8F9987E0 */  lw    $t9, %call16(write_cardinal)($gp)
/* 0040D500 24060001 */  li    $a2, 1
/* 0040D504 2407000A */  li    $a3, 10
/* 0040D508 0320F809 */  jalr  $t9
/* 0040D50C 00000000 */   nop   
/* 0040D510 10000291 */  b     .L0040DF58
/* 0040D514 8FBC0028 */   lw    $gp, 0x28($sp)
.L0040D518:
/* 0040D518 8F99819C */  lw    $t9, %call16(put_string)($gp)
/* 0040D51C 02202025 */  move  $a0, $s1
/* 0040D520 24050001 */  li    $a1, 1
/* 0040D524 0320F809 */  jalr  $t9
/* 0040D528 00000000 */   nop   
/* 0040D52C 1000028A */  b     .L0040DF58
/* 0040D530 8FBC0028 */   lw    $gp, 0x28($sp)
.L0040D534:
/* 0040D534 8F9987DC */  lw    $t9, %call16(write_integer)($gp)
/* 0040D538 8E240000 */  lw    $a0, ($s1)
/* 0040D53C 8E450000 */  lw    $a1, ($s2)
/* 0040D540 24060001 */  li    $a2, 1
/* 0040D544 0320F809 */  jalr  $t9
/* 0040D548 2407000A */   li    $a3, 10
/* 0040D54C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0040D550 8E240000 */  lw    $a0, ($s1)
/* 0040D554 24050020 */  li    $a1, 32
/* 0040D558 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 0040D55C 24060001 */  li    $a2, 1
/* 0040D560 2407000A */  li    $a3, 10
/* 0040D564 0320F809 */  jalr  $t9
/* 0040D568 00000000 */   nop   
/* 0040D56C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0040D570 02202025 */  move  $a0, $s1
/* 0040D574 24050001 */  li    $a1, 1
/* 0040D578 8F99819C */  lw    $t9, %call16(put_string)($gp)
/* 0040D57C 0320F809 */  jalr  $t9
/* 0040D580 00000000 */   nop   
/* 0040D584 10000274 */  b     .L0040DF58
/* 0040D588 8FBC0028 */   lw    $gp, 0x28($sp)
.L0040D58C:
/* 0040D58C 8E450000 */  lw    $a1, ($s2)
/* 0040D590 24060001 */  li    $a2, 1
/* 0040D594 14A00028 */  bnez  $a1, .L0040D638
/* 0040D598 00000000 */   nop   
/* 0040D59C 8F9987DC */  lw    $t9, %call16(write_integer)($gp)
/* 0040D5A0 8E240000 */  lw    $a0, ($s1)
/* 0040D5A4 8E450008 */  lw    $a1, 8($s2)
/* 0040D5A8 0320F809 */  jalr  $t9
/* 0040D5AC 2407000A */   li    $a3, 10
/* 0040D5B0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0040D5B4 8E240000 */  lw    $a0, ($s1)
/* 0040D5B8 24050020 */  li    $a1, 32
/* 0040D5BC 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 0040D5C0 24060001 */  li    $a2, 1
/* 0040D5C4 2407000A */  li    $a3, 10
/* 0040D5C8 0320F809 */  jalr  $t9
/* 0040D5CC 00000000 */   nop   
/* 0040D5D0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0040D5D4 8E240000 */  lw    $a0, ($s1)
/* 0040D5D8 2405003A */  li    $a1, 58
/* 0040D5DC 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 0040D5E0 24060001 */  li    $a2, 1
/* 0040D5E4 2407000A */  li    $a3, 10
/* 0040D5E8 0320F809 */  jalr  $t9
/* 0040D5EC 00000000 */   nop   
/* 0040D5F0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0040D5F4 8E240000 */  lw    $a0, ($s1)
/* 0040D5F8 24050020 */  li    $a1, 32
/* 0040D5FC 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 0040D600 24060001 */  li    $a2, 1
/* 0040D604 2407000A */  li    $a3, 10
/* 0040D608 0320F809 */  jalr  $t9
/* 0040D60C 00000000 */   nop   
/* 0040D610 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0040D614 8E240000 */  lw    $a0, ($s1)
/* 0040D618 8E45000C */  lw    $a1, 0xc($s2)
/* 0040D61C 8F9987E0 */  lw    $t9, %call16(write_cardinal)($gp)
/* 0040D620 24060001 */  li    $a2, 1
/* 0040D624 2407000A */  li    $a3, 10
/* 0040D628 0320F809 */  jalr  $t9
/* 0040D62C 00000000 */   nop   
/* 0040D630 10000249 */  b     .L0040DF58
/* 0040D634 8FBC0028 */   lw    $gp, 0x28($sp)
.L0040D638:
/* 0040D638 8F998188 */  lw    $t9, %call16(put_sym)($gp)
/* 0040D63C 02202025 */  move  $a0, $s1
/* 0040D640 0320F809 */  jalr  $t9
/* 0040D644 00000000 */   nop   
/* 0040D648 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0040D64C 02202025 */  move  $a0, $s1
/* 0040D650 8E450008 */  lw    $a1, 8($s2)
/* 0040D654 8F998184 */  lw    $t9, %call16(put_integer_ws)($gp)
/* 0040D658 0320F809 */  jalr  $t9
/* 0040D65C 00000000 */   nop   
/* 0040D660 1000023D */  b     .L0040DF58
/* 0040D664 8FBC0028 */   lw    $gp, 0x28($sp)
.L0040D668:
/* 0040D668 8F9987F8 */  lw    $t9, %call16(get)($gp)
/* 0040D66C 8E4A0008 */  lw    $t2, 8($s2)
/* 0040D670 8F818B7C */  lw     $at, %got(val64)($gp)
/* 0040D674 8FA40034 */  lw    $a0, 0x34($sp)
/* 0040D678 24050010 */  li    $a1, 16
/* 0040D67C 0320F809 */  jalr  $t9
/* 0040D680 AC2A0000 */   sw    $t2, ($at)
/* 0040D684 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0040D688 240E0001 */  li    $t6, 1
/* 0040D68C 240F000A */  li    $t7, 10
/* 0040D690 8F8B8B74 */  lw     $t3, %got(in_file)($gp)
/* 0040D694 8F828B7C */  lw     $v0, %got(val64)($gp)
/* 0040D698 8D6B0000 */  lw    $t3, ($t3)
/* 0040D69C 8C460000 */  lw    $a2, ($v0)
/* 0040D6A0 8D6C0004 */  lw    $t4, 4($t3)
/* 0040D6A4 8D870008 */  lw    $a3, 8($t4)
/* 0040D6A8 AC470004 */  sw    $a3, 4($v0)
/* 0040D6AC 8F9987E4 */  lw    $t9, %call16(write_int64)($gp)
/* 0040D6B0 8E240000 */  lw    $a0, ($s1)
/* 0040D6B4 AFAF0014 */  sw    $t7, 0x14($sp)
/* 0040D6B8 0320F809 */  jalr  $t9
/* 0040D6BC AFAE0010 */   sw    $t6, 0x10($sp)
/* 0040D6C0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0040D6C4 8E240000 */  lw    $a0, ($s1)
/* 0040D6C8 24050020 */  li    $a1, 32
/* 0040D6CC 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 0040D6D0 24060001 */  li    $a2, 1
/* 0040D6D4 2407000A */  li    $a3, 10
/* 0040D6D8 0320F809 */  jalr  $t9
/* 0040D6DC 00000000 */   nop   
/* 0040D6E0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0040D6E4 8E240000 */  lw    $a0, ($s1)
/* 0040D6E8 2405003A */  li    $a1, 58
/* 0040D6EC 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 0040D6F0 24060001 */  li    $a2, 1
/* 0040D6F4 2407000A */  li    $a3, 10
/* 0040D6F8 0320F809 */  jalr  $t9
/* 0040D6FC 00000000 */   nop   
/* 0040D700 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0040D704 8E240000 */  lw    $a0, ($s1)
/* 0040D708 24050020 */  li    $a1, 32
/* 0040D70C 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 0040D710 24060001 */  li    $a2, 1
/* 0040D714 2407000A */  li    $a3, 10
/* 0040D718 0320F809 */  jalr  $t9
/* 0040D71C 00000000 */   nop   
/* 0040D720 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0040D724 8E240000 */  lw    $a0, ($s1)
/* 0040D728 8E45000C */  lw    $a1, 0xc($s2)
/* 0040D72C 8F9987E0 */  lw    $t9, %call16(write_cardinal)($gp)
/* 0040D730 24060001 */  li    $a2, 1
/* 0040D734 2407000A */  li    $a3, 10
/* 0040D738 0320F809 */  jalr  $t9
/* 0040D73C 00000000 */   nop   
/* 0040D740 10000205 */  b     .L0040DF58
/* 0040D744 8FBC0028 */   lw    $gp, 0x28($sp)
.L0040D748:
/* 0040D748 8F998188 */  lw    $t9, %call16(put_sym)($gp)
/* 0040D74C 02202025 */  move  $a0, $s1
/* 0040D750 8E450000 */  lw    $a1, ($s2)
/* 0040D754 0320F809 */  jalr  $t9
/* 0040D758 00000000 */   nop   
/* 0040D75C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0040D760 8E240000 */  lw    $a0, ($s1)
/* 0040D764 24050020 */  li    $a1, 32
/* 0040D768 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 0040D76C 24060001 */  li    $a2, 1
/* 0040D770 2407000A */  li    $a3, 10
/* 0040D774 0320F809 */  jalr  $t9
/* 0040D778 00000000 */   nop   
/* 0040D77C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0040D780 8E240000 */  lw    $a0, ($s1)
/* 0040D784 8E450008 */  lw    $a1, 8($s2)
/* 0040D788 8F9987DC */  lw    $t9, %call16(write_integer)($gp)
/* 0040D78C 24060001 */  li    $a2, 1
/* 0040D790 2407000A */  li    $a3, 10
/* 0040D794 0320F809 */  jalr  $t9
/* 0040D798 00000000 */   nop   
/* 0040D79C 8E58000C */  lw    $t8, 0xc($s2)
/* 0040D7A0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0040D7A4 24050020 */  li    $a1, 32
/* 0040D7A8 130001EB */  beqz  $t8, .L0040DF58
/* 0040D7AC 00000000 */   nop   
/* 0040D7B0 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 0040D7B4 8E240000 */  lw    $a0, ($s1)
/* 0040D7B8 24060001 */  li    $a2, 1
/* 0040D7BC 0320F809 */  jalr  $t9
/* 0040D7C0 2407000A */   li    $a3, 10
/* 0040D7C4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0040D7C8 8E240000 */  lw    $a0, ($s1)
/* 0040D7CC 24050053 */  li    $a1, 83
/* 0040D7D0 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 0040D7D4 24060001 */  li    $a2, 1
/* 0040D7D8 2407000A */  li    $a3, 10
/* 0040D7DC 0320F809 */  jalr  $t9
/* 0040D7E0 00000000 */   nop   
/* 0040D7E4 100001DC */  b     .L0040DF58
/* 0040D7E8 8FBC0028 */   lw    $gp, 0x28($sp)
.L0040D7EC:
/* 0040D7EC 8F998188 */  lw    $t9, %call16(put_sym)($gp)
/* 0040D7F0 02202025 */  move  $a0, $s1
/* 0040D7F4 8E450000 */  lw    $a1, ($s2)
/* 0040D7F8 0320F809 */  jalr  $t9
/* 0040D7FC 00000000 */   nop   
/* 0040D800 8E590008 */  lw    $t9, 8($s2)
/* 0040D804 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0040D808 2405002C */  li    $a1, 44
/* 0040D80C 132001D2 */  beqz  $t9, .L0040DF58
/* 0040D810 00000000 */   nop   
/* 0040D814 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 0040D818 8E240000 */  lw    $a0, ($s1)
/* 0040D81C 24060001 */  li    $a2, 1
/* 0040D820 0320F809 */  jalr  $t9
/* 0040D824 2407000A */   li    $a3, 10
/* 0040D828 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0040D82C 02202025 */  move  $a0, $s1
/* 0040D830 8E450008 */  lw    $a1, 8($s2)
/* 0040D834 8F998188 */  lw    $t9, %call16(put_sym)($gp)
/* 0040D838 0320F809 */  jalr  $t9
/* 0040D83C 00000000 */   nop   
/* 0040D840 100001C5 */  b     .L0040DF58
/* 0040D844 8FBC0028 */   lw    $gp, 0x28($sp)
.L0040D848:
/* 0040D848 8F998188 */  lw    $t9, %call16(put_sym)($gp)
/* 0040D84C 02202025 */  move  $a0, $s1
/* 0040D850 8E450000 */  lw    $a1, ($s2)
/* 0040D854 0320F809 */  jalr  $t9
/* 0040D858 00000000 */   nop   
/* 0040D85C 100001BE */  b     .L0040DF58
/* 0040D860 8FBC0028 */   lw    $gp, 0x28($sp)
.L0040D864:
/* 0040D864 9248000C */  lbu   $t0, 0xc($s2)
/* 0040D868 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0040D86C 8F8C8840 */  lw     $t4, %got(reg_name_tab)($gp)
/* 0040D870 00084E00 */  sll   $t1, $t0, 0x18
/* 0040D874 00095642 */  srl   $t2, $t1, 0x19
/* 0040D878 000A5880 */  sll   $t3, $t2, 2
/* 0040D87C 016A5821 */  addu  $t3, $t3, $t2
/* 0040D880 8E240000 */  lw    $a0, ($s1)
/* 0040D884 24060005 */  li    $a2, 5
/* 0040D888 00003825 */  move  $a3, $zero
/* 0040D88C 0320F809 */  jalr  $t9
/* 0040D890 016C2821 */   addu  $a1, $t3, $t4
/* 0040D894 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0040D898 8E240000 */  lw    $a0, ($s1)
/* 0040D89C 24060002 */  li    $a2, 2
/* 0040D8A0 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0040D8A4 8F858038 */  lw    $a1, %got(RO_10008AD7)($gp)
/* 0040D8A8 24070002 */  li    $a3, 2
/* 0040D8AC 0320F809 */  jalr  $t9
/* 0040D8B0 24A58AD7 */   addiu $a1, %lo(RO_10008AD7) # addiu $a1, $a1, -0x7529
/* 0040D8B4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0040D8B8 8E240000 */  lw    $a0, ($s1)
/* 0040D8BC 8E450008 */  lw    $a1, 8($s2)
/* 0040D8C0 8F9987DC */  lw    $t9, %call16(write_integer)($gp)
/* 0040D8C4 24060001 */  li    $a2, 1
/* 0040D8C8 2407000A */  li    $a3, 10
/* 0040D8CC 0320F809 */  jalr  $t9
/* 0040D8D0 00000000 */   nop   
/* 0040D8D4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0040D8D8 8E240000 */  lw    $a0, ($s1)
/* 0040D8DC 24060002 */  li    $a2, 2
/* 0040D8E0 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0040D8E4 8F858038 */  lw    $a1, %got(RO_10008AD5)($gp)
/* 0040D8E8 24070002 */  li    $a3, 2
/* 0040D8EC 0320F809 */  jalr  $t9
/* 0040D8F0 24A58AD5 */   addiu $a1, %lo(RO_10008AD5) # addiu $a1, $a1, -0x752b
/* 0040D8F4 964D000C */  lhu   $t5, 0xc($s2)
/* 0040D8F8 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0040D8FC 8E240000 */  lw    $a0, ($s1)
/* 0040D900 000D75C0 */  sll   $t6, $t5, 0x17
/* 0040D904 8F998840 */  lw     $t9, %got(reg_name_tab)($gp)
/* 0040D908 000E7E42 */  srl   $t7, $t6, 0x19
/* 0040D90C 000FC080 */  sll   $t8, $t7, 2
/* 0040D910 030FC021 */  addu  $t8, $t8, $t7
/* 0040D914 03192821 */  addu  $a1, $t8, $t9
/* 0040D918 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0040D91C 24060005 */  li    $a2, 5
/* 0040D920 00003825 */  move  $a3, $zero
/* 0040D924 0320F809 */  jalr  $t9
/* 0040D928 00000000 */   nop   
/* 0040D92C 1000018A */  b     .L0040DF58
/* 0040D930 8FBC0028 */   lw    $gp, 0x28($sp)
.L0040D934:
/* 0040D934 92480008 */  lbu   $t0, 8($s2)
/* 0040D938 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0040D93C 8F8C8840 */  lw     $t4, %got(reg_name_tab)($gp)
/* 0040D940 00084E00 */  sll   $t1, $t0, 0x18
/* 0040D944 00095642 */  srl   $t2, $t1, 0x19
/* 0040D948 000A5880 */  sll   $t3, $t2, 2
/* 0040D94C 016A5821 */  addu  $t3, $t3, $t2
/* 0040D950 8E240000 */  lw    $a0, ($s1)
/* 0040D954 24060005 */  li    $a2, 5
/* 0040D958 00003825 */  move  $a3, $zero
/* 0040D95C 0320F809 */  jalr  $t9
/* 0040D960 016C2821 */   addu  $a1, $t3, $t4
/* 0040D964 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0040D968 8E240000 */  lw    $a0, ($s1)
/* 0040D96C 24060002 */  li    $a2, 2
/* 0040D970 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0040D974 8F858038 */  lw    $a1, %got(RO_10008AD3)($gp)
/* 0040D978 24070002 */  li    $a3, 2
/* 0040D97C 0320F809 */  jalr  $t9
/* 0040D980 24A58AD3 */   addiu $a1, %lo(RO_10008AD3) # addiu $a1, $a1, -0x752d
/* 0040D984 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0040D988 8E240000 */  lw    $a0, ($s1)
/* 0040D98C 8E45000C */  lw    $a1, 0xc($s2)
/* 0040D990 8F9987DC */  lw    $t9, %call16(write_integer)($gp)
/* 0040D994 24060001 */  li    $a2, 1
/* 0040D998 2407000A */  li    $a3, 10
/* 0040D99C 0320F809 */  jalr  $t9
/* 0040D9A0 00000000 */   nop   
/* 0040D9A4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0040D9A8 8E240000 */  lw    $a0, ($s1)
/* 0040D9AC 24060002 */  li    $a2, 2
/* 0040D9B0 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0040D9B4 8F858038 */  lw    $a1, %got(RO_10008AD1)($gp)
/* 0040D9B8 24070002 */  li    $a3, 2
/* 0040D9BC 0320F809 */  jalr  $t9
/* 0040D9C0 24A58AD1 */   addiu $a1, %lo(RO_10008AD1) # addiu $a1, $a1, -0x752f
/* 0040D9C4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0040D9C8 8E240000 */  lw    $a0, ($s1)
/* 0040D9CC 8E450000 */  lw    $a1, ($s2)
/* 0040D9D0 8F9987DC */  lw    $t9, %call16(write_integer)($gp)
/* 0040D9D4 24060001 */  li    $a2, 1
/* 0040D9D8 2407000A */  li    $a3, 10
/* 0040D9DC 0320F809 */  jalr  $t9
/* 0040D9E0 00000000 */   nop   
/* 0040D9E4 1000015C */  b     .L0040DF58
/* 0040D9E8 8FBC0028 */   lw    $gp, 0x28($sp)
.L0040D9EC:
/* 0040D9EC 8F9987DC */  lw    $t9, %call16(write_integer)($gp)
/* 0040D9F0 8E240000 */  lw    $a0, ($s1)
/* 0040D9F4 8E450008 */  lw    $a1, 8($s2)
/* 0040D9F8 24060001 */  li    $a2, 1
/* 0040D9FC 0320F809 */  jalr  $t9
/* 0040DA00 2407000A */   li    $a3, 10
/* 0040DA04 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0040DA08 8E240000 */  lw    $a0, ($s1)
/* 0040DA0C 24050020 */  li    $a1, 32
/* 0040DA10 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 0040DA14 24060001 */  li    $a2, 1
/* 0040DA18 2407000A */  li    $a3, 10
/* 0040DA1C 0320F809 */  jalr  $t9
/* 0040DA20 00000000 */   nop   
/* 0040DA24 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0040DA28 8E240000 */  lw    $a0, ($s1)
/* 0040DA2C 8E45000C */  lw    $a1, 0xc($s2)
/* 0040DA30 8F9987DC */  lw    $t9, %call16(write_integer)($gp)
/* 0040DA34 24060001 */  li    $a2, 1
/* 0040DA38 2407000A */  li    $a3, 10
/* 0040DA3C 0320F809 */  jalr  $t9
/* 0040DA40 00000000 */   nop   
/* 0040DA44 10000144 */  b     .L0040DF58
/* 0040DA48 8FBC0028 */   lw    $gp, 0x28($sp)
.L0040DA4C:
/* 0040DA4C 8F9987DC */  lw    $t9, %call16(write_integer)($gp)
/* 0040DA50 8E240000 */  lw    $a0, ($s1)
/* 0040DA54 8E450008 */  lw    $a1, 8($s2)
/* 0040DA58 24060001 */  li    $a2, 1
/* 0040DA5C 0320F809 */  jalr  $t9
/* 0040DA60 2407000A */   li    $a3, 10
/* 0040DA64 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0040DA68 8E240000 */  lw    $a0, ($s1)
/* 0040DA6C 24050020 */  li    $a1, 32
/* 0040DA70 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 0040DA74 24060001 */  li    $a2, 1
/* 0040DA78 2407000A */  li    $a3, 10
/* 0040DA7C 0320F809 */  jalr  $t9
/* 0040DA80 00000000 */   nop   
/* 0040DA84 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0040DA88 8E240000 */  lw    $a0, ($s1)
/* 0040DA8C 8E45000C */  lw    $a1, 0xc($s2)
/* 0040DA90 8F9987DC */  lw    $t9, %call16(write_integer)($gp)
/* 0040DA94 24060001 */  li    $a2, 1
/* 0040DA98 2407000A */  li    $a3, 10
/* 0040DA9C 0320F809 */  jalr  $t9
/* 0040DAA0 00000000 */   nop   
/* 0040DAA4 1000012C */  b     .L0040DF58
/* 0040DAA8 8FBC0028 */   lw    $gp, 0x28($sp)
.L0040DAAC:
/* 0040DAAC 8F998190 */  lw    $t9, %call16(put_hex10)($gp)
/* 0040DAB0 02202025 */  move  $a0, $s1
/* 0040DAB4 8E450008 */  lw    $a1, 8($s2)
/* 0040DAB8 0320F809 */  jalr  $t9
/* 0040DABC 00000000 */   nop   
/* 0040DAC0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0040DAC4 8E240000 */  lw    $a0, ($s1)
/* 0040DAC8 24060002 */  li    $a2, 2
/* 0040DACC 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0040DAD0 8F858038 */  lw    $a1, %got(RO_10008ACF)($gp)
/* 0040DAD4 24070002 */  li    $a3, 2
/* 0040DAD8 0320F809 */  jalr  $t9
/* 0040DADC 24A58ACF */   addiu $a1, %lo(RO_10008ACF) # addiu $a1, $a1, -0x7531
/* 0040DAE0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0040DAE4 8E240000 */  lw    $a0, ($s1)
/* 0040DAE8 8E45000C */  lw    $a1, 0xc($s2)
/* 0040DAEC 8F9987DC */  lw    $t9, %call16(write_integer)($gp)
/* 0040DAF0 24060001 */  li    $a2, 1
/* 0040DAF4 2407000A */  li    $a3, 10
/* 0040DAF8 0320F809 */  jalr  $t9
/* 0040DAFC 00000000 */   nop   
/* 0040DB00 10000115 */  b     .L0040DF58
/* 0040DB04 8FBC0028 */   lw    $gp, 0x28($sp)
.L0040DB08:
/* 0040DB08 8F998188 */  lw    $t9, %call16(put_sym)($gp)
/* 0040DB0C 02202025 */  move  $a0, $s1
/* 0040DB10 8E450000 */  lw    $a1, ($s2)
/* 0040DB14 0320F809 */  jalr  $t9
/* 0040DB18 00000000 */   nop   
/* 0040DB1C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0040DB20 8E240000 */  lw    $a0, ($s1)
/* 0040DB24 24050020 */  li    $a1, 32
/* 0040DB28 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 0040DB2C 24060001 */  li    $a2, 1
/* 0040DB30 2407000A */  li    $a3, 10
/* 0040DB34 0320F809 */  jalr  $t9
/* 0040DB38 00000000 */   nop   
/* 0040DB3C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0040DB40 8E240000 */  lw    $a0, ($s1)
/* 0040DB44 8E450008 */  lw    $a1, 8($s2)
/* 0040DB48 8F9987DC */  lw    $t9, %call16(write_integer)($gp)
/* 0040DB4C 24060001 */  li    $a2, 1
/* 0040DB50 2407000A */  li    $a3, 10
/* 0040DB54 0320F809 */  jalr  $t9
/* 0040DB58 00000000 */   nop   
/* 0040DB5C 100000FE */  b     .L0040DF58
/* 0040DB60 8FBC0028 */   lw    $gp, 0x28($sp)
.L0040DB64:
/* 0040DB64 8F9987DC */  lw    $t9, %call16(write_integer)($gp)
/* 0040DB68 8E240000 */  lw    $a0, ($s1)
/* 0040DB6C 8E450000 */  lw    $a1, ($s2)
/* 0040DB70 24060001 */  li    $a2, 1
/* 0040DB74 0320F809 */  jalr  $t9
/* 0040DB78 2407000A */   li    $a3, 10
/* 0040DB7C 100000F6 */  b     .L0040DF58
/* 0040DB80 8FBC0028 */   lw    $gp, 0x28($sp)
.L0040DB84:
/* 0040DB84 8F9987DC */  lw    $t9, %call16(write_integer)($gp)
/* 0040DB88 8E240000 */  lw    $a0, ($s1)
/* 0040DB8C 8E450008 */  lw    $a1, 8($s2)
/* 0040DB90 24060001 */  li    $a2, 1
/* 0040DB94 0320F809 */  jalr  $t9
/* 0040DB98 2407000A */   li    $a3, 10
/* 0040DB9C 100000EE */  b     .L0040DF58
/* 0040DBA0 8FBC0028 */   lw    $gp, 0x28($sp)
.L0040DBA4:
/* 0040DBA4 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 0040DBA8 8E240000 */  lw    $a0, ($s1)
/* 0040DBAC 24050020 */  li    $a1, 32
/* 0040DBB0 24060001 */  li    $a2, 1
/* 0040DBB4 0320F809 */  jalr  $t9
/* 0040DBB8 2407000A */   li    $a3, 10
/* 0040DBBC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0040DBC0 8E4D0008 */  lw    $t5, 8($s2)
/* 0040DBC4 8E240000 */  lw    $a0, ($s1)
/* 0040DBC8 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0040DBCC 000D7080 */  sll   $t6, $t5, 2
/* 0040DBD0 8F8F8848 */  lw     $t7, %got(iopt_tab)($gp)
/* 0040DBD4 01CD7023 */  subu  $t6, $t6, $t5
/* 0040DBD8 000E7080 */  sll   $t6, $t6, 2
/* 0040DBDC 2406000C */  li    $a2, 12
/* 0040DBE0 00003825 */  move  $a3, $zero
/* 0040DBE4 0320F809 */  jalr  $t9
/* 0040DBE8 01CF2821 */   addu  $a1, $t6, $t7
/* 0040DBEC 100000DA */  b     .L0040DF58
/* 0040DBF0 8FBC0028 */   lw    $gp, 0x28($sp)
.L0040DBF4:
/* 0040DBF4 92580006 */  lbu   $t8, 6($s2)
/* 0040DBF8 8F8A884C */  lw     $t2, %got(ioption_type_tab)($gp)
/* 0040DBFC 8E240000 */  lw    $a0, ($s1)
/* 0040DC00 0018CE00 */  sll   $t9, $t8, 0x18
/* 0040DC04 00194782 */  srl   $t0, $t9, 0x1e
/* 0040DC08 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0040DC0C 00084900 */  sll   $t1, $t0, 4
/* 0040DC10 01284823 */  subu  $t1, $t1, $t0
/* 0040DC14 2406000F */  li    $a2, 15
/* 0040DC18 00003825 */  move  $a3, $zero
/* 0040DC1C 0320F809 */  jalr  $t9
/* 0040DC20 012A2821 */   addu  $a1, $t1, $t2
/* 0040DC24 924B0006 */  lbu   $t3, 6($s2)
/* 0040DC28 24010003 */  li    $at, 3
/* 0040DC2C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0040DC30 000B6600 */  sll   $t4, $t3, 0x18
/* 0040DC34 000C6F82 */  srl   $t5, $t4, 0x1e
/* 0040DC38 15A10007 */  bne   $t5, $at, .L0040DC58
/* 0040DC3C 24050020 */   li    $a1, 32
/* 0040DC40 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 0040DC44 8E240000 */  lw    $a0, ($s1)
/* 0040DC48 24060001 */  li    $a2, 1
/* 0040DC4C 0320F809 */  jalr  $t9
/* 0040DC50 2407000A */   li    $a3, 10
/* 0040DC54 8FBC0028 */  lw    $gp, 0x28($sp)
.L0040DC58:
/* 0040DC58 8F9987DC */  lw    $t9, %call16(write_integer)($gp)
/* 0040DC5C 8E240000 */  lw    $a0, ($s1)
/* 0040DC60 8E45000C */  lw    $a1, 0xc($s2)
/* 0040DC64 24060001 */  li    $a2, 1
/* 0040DC68 0320F809 */  jalr  $t9
/* 0040DC6C 2407000A */   li    $a3, 10
/* 0040DC70 100000B9 */  b     .L0040DF58
/* 0040DC74 8FBC0028 */   lw    $gp, 0x28($sp)
.L0040DC78:
/* 0040DC78 924E0006 */  lbu   $t6, 6($s2)
/* 0040DC7C 8F888840 */  lw     $t0, %got(reg_name_tab)($gp)
/* 0040DC80 8E240000 */  lw    $a0, ($s1)
/* 0040DC84 000E7E00 */  sll   $t7, $t6, 0x18
/* 0040DC88 000FC642 */  srl   $t8, $t7, 0x19
/* 0040DC8C 0018C880 */  sll   $t9, $t8, 2
/* 0040DC90 0338C821 */  addu  $t9, $t9, $t8
/* 0040DC94 03282821 */  addu  $a1, $t9, $t0
/* 0040DC98 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0040DC9C 24060005 */  li    $a2, 5
/* 0040DCA0 00003825 */  move  $a3, $zero
/* 0040DCA4 0320F809 */  jalr  $t9
/* 0040DCA8 00000000 */   nop   
/* 0040DCAC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0040DCB0 8E240000 */  lw    $a0, ($s1)
/* 0040DCB4 2405002C */  li    $a1, 44
/* 0040DCB8 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 0040DCBC 24060001 */  li    $a2, 1
/* 0040DCC0 2407000A */  li    $a3, 10
/* 0040DCC4 0320F809 */  jalr  $t9
/* 0040DCC8 00000000 */   nop   
/* 0040DCCC 96490006 */  lhu   $t1, 6($s2)
/* 0040DCD0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0040DCD4 8E240000 */  lw    $a0, ($s1)
/* 0040DCD8 000955C0 */  sll   $t2, $t1, 0x17
/* 0040DCDC 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0040DCE0 000A5E42 */  srl   $t3, $t2, 0x19
/* 0040DCE4 8F8D8840 */  lw     $t5, %got(reg_name_tab)($gp)
/* 0040DCE8 000B6080 */  sll   $t4, $t3, 2
/* 0040DCEC 018B6021 */  addu  $t4, $t4, $t3
/* 0040DCF0 24060005 */  li    $a2, 5
/* 0040DCF4 00003825 */  move  $a3, $zero
/* 0040DCF8 0320F809 */  jalr  $t9
/* 0040DCFC 018D2821 */   addu  $a1, $t4, $t5
/* 0040DD00 10000095 */  b     .L0040DF58
/* 0040DD04 8FBC0028 */   lw    $gp, 0x28($sp)
.L0040DD08:
/* 0040DD08 8F998190 */  lw    $t9, %call16(put_hex10)($gp)
/* 0040DD0C 02202025 */  move  $a0, $s1
/* 0040DD10 8E450008 */  lw    $a1, 8($s2)
/* 0040DD14 0320F809 */  jalr  $t9
/* 0040DD18 00000000 */   nop   
/* 0040DD1C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0040DD20 8E240000 */  lw    $a0, ($s1)
/* 0040DD24 2405002C */  li    $a1, 44
/* 0040DD28 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 0040DD2C 24060001 */  li    $a2, 1
/* 0040DD30 2407000A */  li    $a3, 10
/* 0040DD34 0320F809 */  jalr  $t9
/* 0040DD38 00000000 */   nop   
/* 0040DD3C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0040DD40 02202025 */  move  $a0, $s1
/* 0040DD44 8E45000C */  lw    $a1, 0xc($s2)
/* 0040DD48 8F998190 */  lw    $t9, %call16(put_hex10)($gp)
/* 0040DD4C 0320F809 */  jalr  $t9
/* 0040DD50 00000000 */   nop   
/* 0040DD54 10000080 */  b     .L0040DF58
/* 0040DD58 8FBC0028 */   lw    $gp, 0x28($sp)
.L0040DD5C:
/* 0040DD5C 924E0008 */  lbu   $t6, 8($s2)
/* 0040DD60 8F888840 */  lw     $t0, %got(reg_name_tab)($gp)
/* 0040DD64 8E240000 */  lw    $a0, ($s1)
/* 0040DD68 000E7E00 */  sll   $t7, $t6, 0x18
/* 0040DD6C 000FC642 */  srl   $t8, $t7, 0x19
/* 0040DD70 0018C880 */  sll   $t9, $t8, 2
/* 0040DD74 0338C821 */  addu  $t9, $t9, $t8
/* 0040DD78 03282821 */  addu  $a1, $t9, $t0
/* 0040DD7C 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0040DD80 24060005 */  li    $a2, 5
/* 0040DD84 00003825 */  move  $a3, $zero
/* 0040DD88 0320F809 */  jalr  $t9
/* 0040DD8C 00000000 */   nop   
/* 0040DD90 10000071 */  b     .L0040DF58
/* 0040DD94 8FBC0028 */   lw    $gp, 0x28($sp)
.L0040DD98:
/* 0040DD98 8F9987DC */  lw    $t9, %call16(write_integer)($gp)
/* 0040DD9C 8E240000 */  lw    $a0, ($s1)
/* 0040DDA0 8E450008 */  lw    $a1, 8($s2)
/* 0040DDA4 24060001 */  li    $a2, 1
/* 0040DDA8 0320F809 */  jalr  $t9
/* 0040DDAC 2407000A */   li    $a3, 10
/* 0040DDB0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0040DDB4 8E240000 */  lw    $a0, ($s1)
/* 0040DDB8 24050020 */  li    $a1, 32
/* 0040DDBC 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 0040DDC0 24060001 */  li    $a2, 1
/* 0040DDC4 2407000A */  li    $a3, 10
/* 0040DDC8 0320F809 */  jalr  $t9
/* 0040DDCC 00000000 */   nop   
/* 0040DDD0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0040DDD4 02202025 */  move  $a0, $s1
/* 0040DDD8 8E450000 */  lw    $a1, ($s2)
/* 0040DDDC 8F998188 */  lw    $t9, %call16(put_sym)($gp)
/* 0040DDE0 0320F809 */  jalr  $t9
/* 0040DDE4 00000000 */   nop   
/* 0040DDE8 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0040DDEC 8E240000 */  lw    $a0, ($s1)
/* 0040DDF0 24050020 */  li    $a1, 32
/* 0040DDF4 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 0040DDF8 24060001 */  li    $a2, 1
/* 0040DDFC 2407000A */  li    $a3, 10
/* 0040DE00 0320F809 */  jalr  $t9
/* 0040DE04 00000000 */   nop   
/* 0040DE08 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0040DE0C 02202025 */  move  $a0, $s1
/* 0040DE10 8E45000C */  lw    $a1, 0xc($s2)
/* 0040DE14 8F998188 */  lw    $t9, %call16(put_sym)($gp)
/* 0040DE18 0320F809 */  jalr  $t9
/* 0040DE1C 00000000 */   nop   
/* 0040DE20 1000004D */  b     .L0040DF58
/* 0040DE24 8FBC0028 */   lw    $gp, 0x28($sp)
.L0040DE28:
/* 0040DE28 8FA90034 */  lw    $t1, 0x34($sp)
/* 0040DE2C 8D2A0004 */  lw    $t2, 4($t1)
/* 0040DE30 8D4B0008 */  lw    $t3, 8($t2)
/* 0040DE34 11600048 */  beqz  $t3, .L0040DF58
/* 0040DE38 00000000 */   nop   
/* 0040DE3C 8F99819C */  lw    $t9, %call16(put_string)($gp)
/* 0040DE40 02202025 */  move  $a0, $s1
/* 0040DE44 00002825 */  move  $a1, $zero
/* 0040DE48 0320F809 */  jalr  $t9
/* 0040DE4C 00000000 */   nop   
/* 0040DE50 10000041 */  b     .L0040DF58
/* 0040DE54 8FBC0028 */   lw    $gp, 0x28($sp)
.L0040DE58:
/* 0040DE58 8F9987DC */  lw    $t9, %call16(write_integer)($gp)
/* 0040DE5C 8E240000 */  lw    $a0, ($s1)
/* 0040DE60 8E450008 */  lw    $a1, 8($s2)
/* 0040DE64 24060001 */  li    $a2, 1
/* 0040DE68 0320F809 */  jalr  $t9
/* 0040DE6C 2407000A */   li    $a3, 10
/* 0040DE70 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0040DE74 8E240000 */  lw    $a0, ($s1)
/* 0040DE78 24050020 */  li    $a1, 32
/* 0040DE7C 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 0040DE80 24060001 */  li    $a2, 1
/* 0040DE84 2407000A */  li    $a3, 10
/* 0040DE88 0320F809 */  jalr  $t9
/* 0040DE8C 00000000 */   nop   
/* 0040DE90 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0040DE94 8E240000 */  lw    $a0, ($s1)
/* 0040DE98 8E45000C */  lw    $a1, 0xc($s2)
/* 0040DE9C 8F9987DC */  lw    $t9, %call16(write_integer)($gp)
/* 0040DEA0 24060001 */  li    $a2, 1
/* 0040DEA4 2407000A */  li    $a3, 10
/* 0040DEA8 0320F809 */  jalr  $t9
/* 0040DEAC 00000000 */   nop   
/* 0040DEB0 10000029 */  b     .L0040DF58
/* 0040DEB4 8FBC0028 */   lw    $gp, 0x28($sp)
.L0040DEB8:
/* 0040DEB8 8F9987DC */  lw    $t9, %call16(write_integer)($gp)
/* 0040DEBC 8E240000 */  lw    $a0, ($s1)
/* 0040DEC0 8E450008 */  lw    $a1, 8($s2)
/* 0040DEC4 24060001 */  li    $a2, 1
/* 0040DEC8 0320F809 */  jalr  $t9
/* 0040DECC 2407000A */   li    $a3, 10
/* 0040DED0 10000021 */  b     .L0040DF58
/* 0040DED4 8FBC0028 */   lw    $gp, 0x28($sp)
.L0040DED8:
/* 0040DED8 8F9987DC */  lw    $t9, %call16(write_integer)($gp)
/* 0040DEDC 8E240000 */  lw    $a0, ($s1)
/* 0040DEE0 8E450008 */  lw    $a1, 8($s2)
/* 0040DEE4 24060001 */  li    $a2, 1
/* 0040DEE8 0320F809 */  jalr  $t9
/* 0040DEEC 2407000A */   li    $a3, 10
/* 0040DEF0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0040DEF4 8E240000 */  lw    $a0, ($s1)
/* 0040DEF8 2405002C */  li    $a1, 44
/* 0040DEFC 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 0040DF00 24060001 */  li    $a2, 1
/* 0040DF04 2407000A */  li    $a3, 10
/* 0040DF08 0320F809 */  jalr  $t9
/* 0040DF0C 00000000 */   nop   
/* 0040DF10 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0040DF14 8E240000 */  lw    $a0, ($s1)
/* 0040DF18 8E45000C */  lw    $a1, 0xc($s2)
/* 0040DF1C 8F9987DC */  lw    $t9, %call16(write_integer)($gp)
/* 0040DF20 24060001 */  li    $a2, 1
/* 0040DF24 2407000A */  li    $a3, 10
/* 0040DF28 0320F809 */  jalr  $t9
/* 0040DF2C 00000000 */   nop   
/* 0040DF30 10000009 */  b     .L0040DF58
/* 0040DF34 8FBC0028 */   lw    $gp, 0x28($sp)
.L0040DF38:
/* 0040DF38 8F998808 */  lw    $t9, %call16(caseerror)($gp)
/* 0040DF3C 8F868038 */  lw    $a2, %got(RO_10008ACA)($gp)
/* 0040DF40 24040001 */  li    $a0, 1
/* 0040DF44 2405040E */  li    $a1, 1038
/* 0040DF48 24070005 */  li    $a3, 5
/* 0040DF4C 0320F809 */  jalr  $t9
/* 0040DF50 24C68ACA */   addiu $a2, %lo(RO_10008ACA) # addiu $a2, $a2, -0x7536
/* 0040DF54 8FBC0028 */  lw    $gp, 0x28($sp)
.L0040DF58:
/* 0040DF58 8F9987CC */  lw    $t9, %call16(writeln)($gp)
/* 0040DF5C 8E240000 */  lw    $a0, ($s1)
/* 0040DF60 0320F809 */  jalr  $t9
/* 0040DF64 00000000 */   nop   
/* 0040DF68 924C0005 */  lbu   $t4, 5($s2)
/* 0040DF6C 2401001C */  li    $at, 28
/* 0040DF70 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0040DF74 318D003F */  andi  $t5, $t4, 0x3f
/* 0040DF78 55A10008 */  bnel  $t5, $at, .L0040DF9C
/* 0040DF7C 8FBF002C */   lw    $ra, 0x2c($sp)
/* 0040DF80 8F9981A4 */  lw    $t9, %call16(print_source)($gp)
/* 0040DF84 02202025 */  move  $a0, $s1
/* 0040DF88 8E450008 */  lw    $a1, 8($s2)
/* 0040DF8C 0320F809 */  jalr  $t9
/* 0040DF90 8E46000C */   lw    $a2, 0xc($s2)
/* 0040DF94 8FBC0028 */  lw    $gp, 0x28($sp)
.L0040DF98:
/* 0040DF98 8FBF002C */  lw    $ra, 0x2c($sp)
.L0040DF9C:
/* 0040DF9C 8FB0001C */  lw    $s0, 0x1c($sp)
/* 0040DFA0 8FB10020 */  lw    $s1, 0x20($sp)
/* 0040DFA4 8FB20024 */  lw    $s2, 0x24($sp)
/* 0040DFA8 03E00008 */  jr    $ra
/* 0040DFAC 27BD0048 */   addiu $sp, $sp, 0x48
    .type write_directive, @function
    .size write_directive, .-write_directive
    .end write_directive

glabel output_inst_ascii
    .ent output_inst_ascii
    # 0044BF18 main
/* 0040DFB0 3C1C0FC1 */  .cpload $t9
/* 0040DFB4 279C1AA0 */  
/* 0040DFB8 0399E021 */  
/* 0040DFBC 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0040DFC0 8F998800 */  lw    $t9, %call16(reset)($gp)
/* 0040DFC4 AFB10018 */  sw    $s1, 0x18($sp)
/* 0040DFC8 AFB00014 */  sw    $s0, 0x14($sp)
/* 0040DFCC 8F908B74 */  lw     $s0, %got(in_file)($gp)
/* 0040DFD0 00A08825 */  move  $s1, $a1
/* 0040DFD4 00802825 */  move  $a1, $a0
/* 0040DFD8 AFBF0024 */  sw    $ra, 0x24($sp)
/* 0040DFDC AFA40028 */  sw    $a0, 0x28($sp)
/* 0040DFE0 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0040DFE4 AFB2001C */  sw    $s2, 0x1c($sp)
/* 0040DFE8 24060400 */  li    $a2, 1024
/* 0040DFEC 24070010 */  li    $a3, 16
/* 0040DFF0 0320F809 */  jalr  $t9
/* 0040DFF4 02002025 */   move  $a0, $s0
/* 0040DFF8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0040DFFC 8E040000 */  lw    $a0, ($s0)
/* 0040E000 8F9987B4 */  lw    $t9, %call16(eof)($gp)
/* 0040E004 0320F809 */  jalr  $t9
/* 0040E008 00000000 */   nop   
/* 0040E00C 1440001F */  bnez  $v0, .L0040E08C
/* 0040E010 8FBC0020 */   lw    $gp, 0x20($sp)
/* 0040E014 24120017 */  li    $s2, 23
.L0040E018:
/* 0040E018 8E0E0000 */  lw    $t6, ($s0)
/* 0040E01C 8DCF0004 */  lw    $t7, 4($t6)
/* 0040E020 91F80005 */  lbu   $t8, 5($t7)
/* 0040E024 3319003F */  andi  $t9, $t8, 0x3f
/* 0040E028 16590007 */  bne   $s2, $t9, .L0040E048
/* 0040E02C 00000000 */   nop   
/* 0040E030 8F9981A0 */  lw    $t9, %call16(write_instruction)($gp)
/* 0040E034 02202025 */  move  $a0, $s1
/* 0040E038 0320F809 */  jalr  $t9
/* 0040E03C 00000000 */   nop   
/* 0040E040 10000006 */  b     .L0040E05C
/* 0040E044 8FBC0020 */   lw    $gp, 0x20($sp)
.L0040E048:
/* 0040E048 8F9981A8 */  lw    $t9, %call16(write_directive)($gp)
/* 0040E04C 02202025 */  move  $a0, $s1
/* 0040E050 0320F809 */  jalr  $t9
/* 0040E054 00000000 */   nop   
/* 0040E058 8FBC0020 */  lw    $gp, 0x20($sp)
.L0040E05C:
/* 0040E05C 8F9987F8 */  lw    $t9, %call16(get)($gp)
/* 0040E060 8E040000 */  lw    $a0, ($s0)
/* 0040E064 24050010 */  li    $a1, 16
/* 0040E068 0320F809 */  jalr  $t9
/* 0040E06C 00000000 */   nop   
/* 0040E070 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0040E074 8E040000 */  lw    $a0, ($s0)
/* 0040E078 8F9987B4 */  lw    $t9, %call16(eof)($gp)
/* 0040E07C 0320F809 */  jalr  $t9
/* 0040E080 00000000 */   nop   
/* 0040E084 1040FFE4 */  beqz  $v0, .L0040E018
/* 0040E088 8FBC0020 */   lw    $gp, 0x20($sp)
.L0040E08C:
/* 0040E08C 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0040E090 8FB00014 */  lw    $s0, 0x14($sp)
/* 0040E094 8FB10018 */  lw    $s1, 0x18($sp)
/* 0040E098 8FB2001C */  lw    $s2, 0x1c($sp)
/* 0040E09C 03E00008 */  jr    $ra
/* 0040E0A0 27BD0028 */   addiu $sp, $sp, 0x28
    .type output_inst_ascii, @function
    .size output_inst_ascii, .-output_inst_ascii
    .end output_inst_ascii
)"");
