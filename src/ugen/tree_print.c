__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
RO_1000E240:
    # 004491BC print_ucode
    .ascii " ival="

RO_1000E246:
    # 004491BC print_ucode
    .ascii " 64-bit-ival= "

RO_1000E254:
    # 004491BC print_ucode
    .ascii " ival="

RO_1000E25A:
    # 004491BC print_ucode
    .ascii " external="

RO_1000E264:
    # 004491BC print_ucode
    .ascii " pop="

RO_1000E269:
    # 004491BC print_ucode
    .ascii " push="

RO_1000E26F:
    # 004491BC print_ucode
    .ascii " offset2="

RO_1000E278:
    # 004491BC print_ucode
    .ascii " offset="

RO_1000E280:
    # 004491BC print_ucode
    .ascii " length="

RO_1000E288:
    # 004491BC print_ucode
    .ascii " blockno="

RO_1000E291:
    # 004491BC print_ucode
    .ascii " i1="

RO_1000E295:
    # 004491BC print_ucode
    .ascii " lexlev="

RO_1000E29D:
    # 004491BC print_ucode
    .ascii " mtype="

RO_1000E2A4:
    # 004491BC print_ucode
    .ascii " dtype2="

RO_1000E2AC:
    # 004491BC print_ucode
    .ascii " dtype="

RO_1000E2B3:
    # 00449990 print_node_1
    .ascii " prior="

RO_1000E2BA:
    # 00449990 print_node_1
    .ascii " next="

RO_1000E2C0:
    # 00449990 print_node_1
    .ascii " op2="

RO_1000E2C5:
    # 00449990 print_node_1
    .ascii " op1="

RO_1000E2CA:
    # 00449990 print_node_1
    .ascii " reg="

RO_1000E2CF:
    # 00449990 print_node_1
    .ascii " Not visited"

RO_1000E2DB:
    # 00449990 print_node_1
    .ascii " ref_count2="

RO_1000E2E7:
    # 00449990 print_node_1
    .asciz " ref_count="

.data
# 100169C0
glabel opc_name
    # 004491BC print_ucode
    .ascii "abs add adj aentand aos asymbgn bgnbfoo condlvarchkhchklchknchktcia clabfoo commcsymfoo foo cup cvt cvtldec def dif div dup end endbent eof equ esymfoo fjp fsymgeq grt gsymhsymicufidx iequigeqigrtijp ildafoo ileqilesilodinc ineqinitinn int ior isldisstistrfoo ixa lab foo lbdyfoo lca lda ldapldc foo ldspfoo leq les lex lnotloc lod lsymfoo max min mod mov foo mpmvmpy mst mus neg neq nop not odd optnpar pdefpmovpop regsrem ret rldarldcrlodrnd rparrstrsdefsgs shl shr signsqr sqrtfoo foo stp str stspsub swp tjp foo foo foo foo foo foo typ foo ujp foo uni vregxjp xor foo mtagaliafoo foo irldirstldrcmsymrcufksymfoo foo foo "
    .type opc_name, @object
    .size opc_name, .-opc_name # 624

# 10016C30
glabel dtype_name
    # 004491BC print_ucode
    .ascii "ACFGHIJKLMNPQRSWXZ"
    .type dtype_name, @object
    .size dtype_name, .-dtype_name # 18
    .space 2

# 10016C44
glabel mtype_name
    # 004491BC print_ucode
    .ascii "ZMPRSATK"
    .type mtype_name, @object
    .size mtype_name, .-mtype_name # 8
    .space 4

D_10016C50:
    # 00449990 print_node_1
    .ascii "xr0\0xr1\0xr2\0xr3\0xr4\0xr5\0xr6\0xr7\0xr8\0xr9\0xr10\0   xr11\0   xr12\0   xr13\0   xr14\0   xr15\0   xr16\0   xr17\0   xr18\0   xr19\0   xr20\0   xr21\0   xr22\0   xr23\0   xr24\0   xr25\0   xr26\0   xr27\0   xr28\0   xr29\0   xr30\0   xr31\0   xfr0\0   xfr1\0   xfr2\0   xfr3\0   xfr4\0   xfr5\0   xfr6\0   xfr7\0   xfr8\0   xfr9\0   xfr10\0  xfr11\0  xfr12\0  xfr13\0  xfr14\0  xfr15\0  xfr16\0  xfr17\0  xfr18\0  xfr19\0  xfr20\0  xfr21\0  xfr22\0  xfr23\0  xfr24\0  xfr25\0  xfr26\0  xfr27\0  xfr28\0  xfr29\0  xfr30\0  xfr31\0  xfcc0\0  xfcc1\0  xfcc2\0  xfcc3\0  xfcc4\0  xfcc5\0  xfcc6\0  xfcc7\0  xnoreg\0\0"

D_10016E70:
    # 004491BC print_ucode
    .byte 0x10,0x00,0x00,0x00,0x40,0x00,0x00,0x00

D_10016E78:
    # 004491BC print_ucode
    .byte 0x10,0x00,0x01,0x00,0x40,0x08,0x00,0x00

D_10016E80:
    # 004491BC print_ucode
    .byte 0x00,0x00,0x20,0x40,0x01,0x00,0x00,0x00,0x0c,0x00,0x00,0x00,0x00,0x10,0x00,0x00

D_10016E90:
    # 004491BC print_ucode
    .byte 0x21,0x00,0x00,0x00,0x00,0x00,0x22,0x47,0x01,0x00,0x20,0x20,0x0e,0x85,0x80,0x10,0x00,0x10,0x18,0x00

D_10016EA4:
    # 004491BC print_ucode
    .byte 0x21,0x00,0xc8,0x38,0x01,0x23,0xaf,0xf7,0x23,0x40,0x30,0xa4,0x1e,0x85,0xe0,0x10,0x00,0x38,0x1c,0x00

D_10016EB8:
    # 004491BC print_ucode
    .byte 0x11,0x8c,0x09,0x40,0xc9,0x20,0x22,0x67,0x43,0x01,0x70,0x20,0x0e,0x85,0xc0,0x10,0x00,0x11,0x9b,0x80

D_10016ECC:
    # 004491BC print_ucode
    .byte 0x00,0x00,0x40,0x00,0x02,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x80,0x00,0x00

D_10016EE0:
    # 004491BC print_ucode
    .byte 0x10,0x00,0x81,0x00,0x40,0x00,0x02,0x01,0x28,0x01,0x60,0xa8,0x02,0x85,0x80,0x10,0x00,0x01,0x98,0x00

D_10016EF4:
    # 004491BC print_ucode
    .byte 0x00,0x00,0x00,0x10,0x00,0x00,0x20,0x46,0x01,0x00,0x20,0x20,0x0e,0x05,0x80,0x10,0x00,0x10,0x00,0x00

D_10016F08:
    # 004491BC print_ucode
    .byte 0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x02,0x02,0x00,0x00,0x00

D_10016F1C:
    # 004491BC print_ucode
    .byte 0xf8,0x0c,0x81,0xee,0x50,0xcf,0xaf,0xff,0x42,0xd6,0xa7,0xb7,0x6f,0x47,0xbe,0x16,0x02,0x3c,0x1d,0x00

D_10016F30:
    # 00449D24 func_00449D24
    .byte 0x10,0x00,0x40,0x00,0x42,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x80,0x00,0x00,0x01,0x00,0x88,0x00,0x00

D_10016F44:
    # 00449D24 func_00449D24
    .byte 0x10,0x10,0x40,0x00,0x40,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00




.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
glabel indent_tree
    .ent indent_tree
    # 00449990 print_node_1
/* 00449130 3C1C0FBD */  .cpload $t9
/* 00449134 279C6920 */  
/* 00449138 0399E021 */  
/* 0044913C 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 00449140 AFB1001C */  sw    $s1, 0x1c($sp)
/* 00449144 000510C2 */  srl   $v0, $a1, 3
/* 00449148 00808825 */  move  $s1, $a0
/* 0044914C AFBF0024 */  sw    $ra, 0x24($sp)
/* 00449150 AFBC0020 */  sw    $gp, 0x20($sp)
/* 00449154 AFB00018 */  sw    $s0, 0x18($sp)
/* 00449158 1040000B */  beqz  $v0, .L00449188
/* 0044915C AFA5002C */   sw    $a1, 0x2c($sp)
/* 00449160 00408025 */  move  $s0, $v0
.L00449164:
/* 00449164 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 00449168 8E240000 */  lw    $a0, ($s1)
/* 0044916C 24050009 */  li    $a1, 9
/* 00449170 24060001 */  li    $a2, 1
/* 00449174 0320F809 */  jalr  $t9
/* 00449178 2407000A */   li    $a3, 10
/* 0044917C 2610FFFF */  addiu $s0, $s0, -1
/* 00449180 1600FFF8 */  bnez  $s0, .L00449164
/* 00449184 8FBC0020 */   lw    $gp, 0x20($sp)
.L00449188:
/* 00449188 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 0044918C 8FA6002C */  lw    $a2, 0x2c($sp)
/* 00449190 8E240000 */  lw    $a0, ($s1)
/* 00449194 24050020 */  li    $a1, 32
/* 00449198 2407000A */  li    $a3, 10
/* 0044919C 0320F809 */  jalr  $t9
/* 004491A0 30C60007 */   andi  $a2, $a2, 7
/* 004491A4 8FBF0024 */  lw    $ra, 0x24($sp)
/* 004491A8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004491AC 8FB00018 */  lw    $s0, 0x18($sp)
/* 004491B0 8FB1001C */  lw    $s1, 0x1c($sp)
/* 004491B4 03E00008 */  jr    $ra
/* 004491B8 27BD0028 */   addiu $sp, $sp, 0x28
    .type indent_tree, @function
    .size indent_tree, .-indent_tree
    .end indent_tree

glabel print_ucode
    .ent print_ucode
    # 0040F4C8 build_tree
    # 00449990 print_node_1
/* 004491BC 3C1C0FBD */  .cpload $t9
/* 004491C0 279C6894 */  
/* 004491C4 0399E021 */  
/* 004491C8 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 004491CC 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 004491D0 AFBF0024 */  sw    $ra, 0x24($sp)
/* 004491D4 AFBC0020 */  sw    $gp, 0x20($sp)
/* 004491D8 AFB1001C */  sw    $s1, 0x1c($sp)
/* 004491DC AFB00018 */  sw    $s0, 0x18($sp)
/* 004491E0 AFA40028 */  sw    $a0, 0x28($sp)
/* 004491E4 8C900000 */  lw    $s0, ($a0)
/* 004491E8 00A08825 */  move  $s1, $a1
/* 004491EC 24050020 */  li    $a1, 32
/* 004491F0 24060001 */  li    $a2, 1
/* 004491F4 2407000A */  li    $a3, 10
/* 004491F8 0320F809 */  jalr  $t9
/* 004491FC 02002025 */   move  $a0, $s0
/* 00449200 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00449204 922F0000 */  lbu   $t7, ($s1)
/* 00449208 02002025 */  move  $a0, $s0
/* 0044920C 8F998924 */  lw     $t9, %got(opc_name)($gp)
/* 00449210 000FC080 */  sll   $t8, $t7, 2
/* 00449214 24060004 */  li    $a2, 4
/* 00449218 03192821 */  addu  $a1, $t8, $t9
/* 0044921C 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 00449220 00003825 */  move  $a3, $zero
/* 00449224 0320F809 */  jalr  $t9
/* 00449228 00000000 */   nop   
/* 0044922C 92220000 */  lbu   $v0, ($s1)
/* 00449230 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00449234 2C4800A0 */  sltiu $t0, $v0, 0xa0
/* 00449238 11000009 */  beqz  $t0, .L00449260
/* 0044923C 00000000 */   nop   
/* 00449240 8F8B8038 */  lw    $t3, %got(D_10016F1C)($gp)
/* 00449244 00024943 */  sra   $t1, $v0, 5
/* 00449248 00095080 */  sll   $t2, $t1, 2
/* 0044924C 256B6F1C */  addiu $t3, %lo(D_10016F1C) # addiu $t3, $t3, 0x6f1c
/* 00449250 016A6021 */  addu  $t4, $t3, $t2
/* 00449254 8D8D0000 */  lw    $t5, ($t4)
/* 00449258 004D7004 */  sllv  $t6, $t5, $v0
/* 0044925C 29C80000 */  slti  $t0, $t6, 0
.L00449260:
/* 00449260 51000018 */  beql  $t0, $zero, .L004492C4
/* 00449264 2C4C00A0 */   sltiu $t4, $v0, 0xa0
/* 00449268 8FB80028 */  lw    $t8, 0x28($sp)
/* 0044926C 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 00449270 8F858038 */  lw    $a1, %got(RO_1000E2AC)($gp)
/* 00449274 8F100000 */  lw    $s0, ($t8)
/* 00449278 24060007 */  li    $a2, 7
/* 0044927C 24070007 */  li    $a3, 7
/* 00449280 24A5E2AC */  addiu $a1, %lo(RO_1000E2AC) # addiu $a1, $a1, -0x1d54
/* 00449284 0320F809 */  jalr  $t9
/* 00449288 02002025 */   move  $a0, $s0
/* 0044928C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00449290 92390001 */  lbu   $t9, 1($s1)
/* 00449294 02002025 */  move  $a0, $s0
/* 00449298 8F8B8928 */  lw     $t3, %got(dtype_name)($gp)
/* 0044929C 3329001F */  andi  $t1, $t9, 0x1f
/* 004492A0 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 004492A4 012B5021 */  addu  $t2, $t1, $t3
/* 004492A8 91450000 */  lbu   $a1, ($t2)
/* 004492AC 24060001 */  li    $a2, 1
/* 004492B0 0320F809 */  jalr  $t9
/* 004492B4 2407000A */   li    $a3, 10
/* 004492B8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004492BC 92220000 */  lbu   $v0, ($s1)
/* 004492C0 2C4C00A0 */  sltiu $t4, $v0, 0xa0
.L004492C4:
/* 004492C4 11800009 */  beqz  $t4, .L004492EC
/* 004492C8 00000000 */   nop   
/* 004492CC 8F8F8038 */  lw    $t7, %got(D_10016F08)($gp)
/* 004492D0 00026943 */  sra   $t5, $v0, 5
/* 004492D4 000D7080 */  sll   $t6, $t5, 2
/* 004492D8 25EF6F08 */  addiu $t7, %lo(D_10016F08) # addiu $t7, $t7, 0x6f08
/* 004492DC 01EE4021 */  addu  $t0, $t7, $t6
/* 004492E0 8D180000 */  lw    $t8, ($t0)
/* 004492E4 0058C804 */  sllv  $t9, $t8, $v0
/* 004492E8 2B2C0000 */  slti  $t4, $t9, 0
.L004492EC:
/* 004492EC 51800017 */  beql  $t4, $zero, .L0044934C
/* 004492F0 2C4E00A0 */   sltiu $t6, $v0, 0xa0
/* 004492F4 8FAB0028 */  lw    $t3, 0x28($sp)
/* 004492F8 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 004492FC 8F858038 */  lw    $a1, %got(RO_1000E2A4)($gp)
/* 00449300 8D700000 */  lw    $s0, ($t3)
/* 00449304 24060008 */  li    $a2, 8
/* 00449308 24070008 */  li    $a3, 8
/* 0044930C 24A5E2A4 */  addiu $a1, %lo(RO_1000E2A4) # addiu $a1, $a1, -0x1d5c
/* 00449310 0320F809 */  jalr  $t9
/* 00449314 02002025 */   move  $a0, $s0
/* 00449318 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0044931C 922A0008 */  lbu   $t2, 8($s1)
/* 00449320 02002025 */  move  $a0, $s0
/* 00449324 8F8D8928 */  lw     $t5, %got(dtype_name)($gp)
/* 00449328 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 0044932C 24060001 */  li    $a2, 1
/* 00449330 014D7821 */  addu  $t7, $t2, $t5
/* 00449334 91E50000 */  lbu   $a1, ($t7)
/* 00449338 0320F809 */  jalr  $t9
/* 0044933C 2407000A */   li    $a3, 10
/* 00449340 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00449344 92220000 */  lbu   $v0, ($s1)
/* 00449348 2C4E00A0 */  sltiu $t6, $v0, 0xa0
.L0044934C:
/* 0044934C 11C00009 */  beqz  $t6, .L00449374
/* 00449350 00000000 */   nop   
/* 00449354 8F998038 */  lw    $t9, %got(D_10016EF4)($gp)
/* 00449358 00024143 */  sra   $t0, $v0, 5
/* 0044935C 0008C080 */  sll   $t8, $t0, 2
/* 00449360 27396EF4 */  addiu $t9, %lo(D_10016EF4) # addiu $t9, $t9, 0x6ef4
/* 00449364 03384821 */  addu  $t1, $t9, $t8
/* 00449368 8D2C0000 */  lw    $t4, ($t1)
/* 0044936C 004C5804 */  sllv  $t3, $t4, $v0
/* 00449370 296E0000 */  slti  $t6, $t3, 0
.L00449374:
/* 00449374 51C00019 */  beql  $t6, $zero, .L004493DC
/* 00449378 2C4C00A0 */   sltiu $t4, $v0, 0xa0
/* 0044937C 8FAD0028 */  lw    $t5, 0x28($sp)
/* 00449380 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 00449384 8F858038 */  lw    $a1, %got(RO_1000E29D)($gp)
/* 00449388 8DB00000 */  lw    $s0, ($t5)
/* 0044938C 24060007 */  li    $a2, 7
/* 00449390 24070007 */  li    $a3, 7
/* 00449394 24A5E29D */  addiu $a1, %lo(RO_1000E29D) # addiu $a1, $a1, -0x1d63
/* 00449398 0320F809 */  jalr  $t9
/* 0044939C 02002025 */   move  $a0, $s0
/* 004493A0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004493A4 922F0001 */  lbu   $t7, 1($s1)
/* 004493A8 02002025 */  move  $a0, $s0
/* 004493AC 8F98892C */  lw     $t8, %got(mtype_name)($gp)
/* 004493B0 000F4600 */  sll   $t0, $t7, 0x18
/* 004493B4 0008CF42 */  srl   $t9, $t0, 0x1d
/* 004493B8 03384821 */  addu  $t1, $t9, $t8
/* 004493BC 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 004493C0 91250000 */  lbu   $a1, ($t1)
/* 004493C4 24060001 */  li    $a2, 1
/* 004493C8 0320F809 */  jalr  $t9
/* 004493CC 2407000A */   li    $a3, 10
/* 004493D0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004493D4 92220000 */  lbu   $v0, ($s1)
/* 004493D8 2C4C00A0 */  sltiu $t4, $v0, 0xa0
.L004493DC:
/* 004493DC 1180000A */  beqz  $t4, .L00449408
/* 004493E0 00000000 */   nop   
/* 004493E4 8F8E8038 */  lw    $t6, %got(D_10016EE0)($gp)
/* 004493E8 00025943 */  sra   $t3, $v0, 5
/* 004493EC 000B5080 */  sll   $t2, $t3, 2
/* 004493F0 25CE6EE0 */  addiu $t6, %lo(D_10016EE0) # addiu $t6, $t6, 0x6ee0
/* 004493F4 01CA6821 */  addu  $t5, $t6, $t2
/* 004493F8 8DAF0000 */  lw    $t7, ($t5)
/* 004493FC 004F4004 */  sllv  $t0, $t7, $v0
/* 00449400 29190000 */  slti  $t9, $t0, 0
/* 00449404 03206025 */  move  $t4, $t9
.L00449408:
/* 00449408 51800015 */  beql  $t4, $zero, .L00449460
/* 0044940C 2C4900A0 */   sltiu $t1, $v0, 0xa0
/* 00449410 8FB80028 */  lw    $t8, 0x28($sp)
/* 00449414 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 00449418 8F858038 */  lw    $a1, %got(RO_1000E295)($gp)
/* 0044941C 8F100000 */  lw    $s0, ($t8)
/* 00449420 24060008 */  li    $a2, 8
/* 00449424 24070008 */  li    $a3, 8
/* 00449428 24A5E295 */  addiu $a1, %lo(RO_1000E295) # addiu $a1, $a1, -0x1d6b
/* 0044942C 0320F809 */  jalr  $t9
/* 00449430 02002025 */   move  $a0, $s0
/* 00449434 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00449438 02002025 */  move  $a0, $s0
/* 0044943C 96250002 */  lhu   $a1, 2($s1)
/* 00449440 8F9987DC */  lw    $t9, %call16(write_integer)($gp)
/* 00449444 24060001 */  li    $a2, 1
/* 00449448 2407000A */  li    $a3, 10
/* 0044944C 0320F809 */  jalr  $t9
/* 00449450 00000000 */   nop   
/* 00449454 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00449458 92220000 */  lbu   $v0, ($s1)
/* 0044945C 2C4900A0 */  sltiu $t1, $v0, 0xa0
.L00449460:
/* 00449460 1120000A */  beqz  $t1, .L0044948C
/* 00449464 00000000 */   nop   
/* 00449468 8F8A8038 */  lw    $t2, %got(D_10016ECC)($gp)
/* 0044946C 00025943 */  sra   $t3, $v0, 5
/* 00449470 000B7080 */  sll   $t6, $t3, 2
/* 00449474 254A6ECC */  addiu $t2, %lo(D_10016ECC) # addiu $t2, $t2, 0x6ecc
/* 00449478 014E6821 */  addu  $t5, $t2, $t6
/* 0044947C 8DAF0000 */  lw    $t7, ($t5)
/* 00449480 004F4004 */  sllv  $t0, $t7, $v0
/* 00449484 29190000 */  slti  $t9, $t0, 0
/* 00449488 03204825 */  move  $t1, $t9
.L0044948C:
/* 0044948C 51200015 */  beql  $t1, $zero, .L004494E4
/* 00449490 2C5800A0 */   sltiu $t8, $v0, 0xa0
/* 00449494 8FAC0028 */  lw    $t4, 0x28($sp)
/* 00449498 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0044949C 8F858038 */  lw    $a1, %got(RO_1000E291)($gp)
/* 004494A0 8D900000 */  lw    $s0, ($t4)
/* 004494A4 24060004 */  li    $a2, 4
/* 004494A8 24070004 */  li    $a3, 4
/* 004494AC 24A5E291 */  addiu $a1, %lo(RO_1000E291) # addiu $a1, $a1, -0x1d6f
/* 004494B0 0320F809 */  jalr  $t9
/* 004494B4 02002025 */   move  $a0, $s0
/* 004494B8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004494BC 02002025 */  move  $a0, $s0
/* 004494C0 8E250004 */  lw    $a1, 4($s1)
/* 004494C4 8F9987DC */  lw    $t9, %call16(write_integer)($gp)
/* 004494C8 24060001 */  li    $a2, 1
/* 004494CC 2407000A */  li    $a3, 10
/* 004494D0 0320F809 */  jalr  $t9
/* 004494D4 00000000 */   nop   
/* 004494D8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004494DC 92220000 */  lbu   $v0, ($s1)
/* 004494E0 2C5800A0 */  sltiu $t8, $v0, 0xa0
.L004494E4:
/* 004494E4 1300000A */  beqz  $t8, .L00449510
/* 004494E8 00000000 */   nop   
/* 004494EC 8F8E8038 */  lw    $t6, %got(D_10016EB8)($gp)
/* 004494F0 00025943 */  sra   $t3, $v0, 5
/* 004494F4 000B5080 */  sll   $t2, $t3, 2
/* 004494F8 25CE6EB8 */  addiu $t6, %lo(D_10016EB8) # addiu $t6, $t6, 0x6eb8
/* 004494FC 01CA6821 */  addu  $t5, $t6, $t2
/* 00449500 8DAF0000 */  lw    $t7, ($t5)
/* 00449504 004F4004 */  sllv  $t0, $t7, $v0
/* 00449508 29190000 */  slti  $t9, $t0, 0
/* 0044950C 0320C025 */  move  $t8, $t9
.L00449510:
/* 00449510 13000013 */  beqz  $t8, .L00449560
/* 00449514 8FA90028 */   lw    $t1, 0x28($sp)
/* 00449518 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0044951C 8D300000 */  lw    $s0, ($t1)
/* 00449520 8F858038 */  lw    $a1, %got(RO_1000E288)($gp)
/* 00449524 24060009 */  li    $a2, 9
/* 00449528 24070009 */  li    $a3, 9
/* 0044952C 02002025 */  move  $a0, $s0
/* 00449530 0320F809 */  jalr  $t9
/* 00449534 24A5E288 */   addiu $a1, %lo(RO_1000E288) # addiu $a1, $a1, -0x1d78
/* 00449538 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0044953C 02002025 */  move  $a0, $s0
/* 00449540 8E250004 */  lw    $a1, 4($s1)
/* 00449544 8F9987DC */  lw    $t9, %call16(write_integer)($gp)
/* 00449548 24060001 */  li    $a2, 1
/* 0044954C 2407000A */  li    $a3, 10
/* 00449550 0320F809 */  jalr  $t9
/* 00449554 00000000 */   nop   
/* 00449558 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0044955C 92220000 */  lbu   $v0, ($s1)
.L00449560:
/* 00449560 2C4C00A0 */  sltiu $t4, $v0, 0xa0
/* 00449564 1180000A */  beqz  $t4, .L00449590
/* 00449568 8FB80028 */   lw    $t8, 0x28($sp)
/* 0044956C 8F8A8038 */  lw    $t2, %got(D_10016EA4)($gp)
/* 00449570 00025943 */  sra   $t3, $v0, 5
/* 00449574 000B7080 */  sll   $t6, $t3, 2
/* 00449578 254A6EA4 */  addiu $t2, %lo(D_10016EA4) # addiu $t2, $t2, 0x6ea4
/* 0044957C 014E6821 */  addu  $t5, $t2, $t6
/* 00449580 8DAF0000 */  lw    $t7, ($t5)
/* 00449584 004F4004 */  sllv  $t0, $t7, $v0
/* 00449588 29190000 */  slti  $t9, $t0, 0
/* 0044958C 03206025 */  move  $t4, $t9
.L00449590:
/* 00449590 11800012 */  beqz  $t4, .L004495DC
/* 00449594 24060008 */   li    $a2, 8
/* 00449598 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0044959C 8F100000 */  lw    $s0, ($t8)
/* 004495A0 8F858038 */  lw    $a1, %got(RO_1000E280)($gp)
/* 004495A4 24070008 */  li    $a3, 8
/* 004495A8 02002025 */  move  $a0, $s0
/* 004495AC 0320F809 */  jalr  $t9
/* 004495B0 24A5E280 */   addiu $a1, %lo(RO_1000E280) # addiu $a1, $a1, -0x1d80
/* 004495B4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004495B8 02002025 */  move  $a0, $s0
/* 004495BC 8E250008 */  lw    $a1, 8($s1)
/* 004495C0 8F9987DC */  lw    $t9, %call16(write_integer)($gp)
/* 004495C4 24060001 */  li    $a2, 1
/* 004495C8 2407000A */  li    $a3, 10
/* 004495CC 0320F809 */  jalr  $t9
/* 004495D0 00000000 */   nop   
/* 004495D4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004495D8 92220000 */  lbu   $v0, ($s1)
.L004495DC:
/* 004495DC 2C4900A0 */  sltiu $t1, $v0, 0xa0
/* 004495E0 1120000A */  beqz  $t1, .L0044960C
/* 004495E4 8FAC0028 */   lw    $t4, 0x28($sp)
/* 004495E8 8F8E8038 */  lw    $t6, %got(D_10016E90)($gp)
/* 004495EC 00025943 */  sra   $t3, $v0, 5
/* 004495F0 000B5080 */  sll   $t2, $t3, 2
/* 004495F4 25CE6E90 */  addiu $t6, %lo(D_10016E90) # addiu $t6, $t6, 0x6e90
/* 004495F8 01CA6821 */  addu  $t5, $t6, $t2
/* 004495FC 8DAF0000 */  lw    $t7, ($t5)
/* 00449600 004F4004 */  sllv  $t0, $t7, $v0
/* 00449604 29190000 */  slti  $t9, $t0, 0
/* 00449608 03204825 */  move  $t1, $t9
.L0044960C:
/* 0044960C 11200012 */  beqz  $t1, .L00449658
/* 00449610 24060008 */   li    $a2, 8
/* 00449614 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 00449618 8D900000 */  lw    $s0, ($t4)
/* 0044961C 8F858038 */  lw    $a1, %got(RO_1000E278)($gp)
/* 00449620 24070008 */  li    $a3, 8
/* 00449624 02002025 */  move  $a0, $s0
/* 00449628 0320F809 */  jalr  $t9
/* 0044962C 24A5E278 */   addiu $a1, %lo(RO_1000E278) # addiu $a1, $a1, -0x1d88
/* 00449630 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00449634 02002025 */  move  $a0, $s0
/* 00449638 8E25000C */  lw    $a1, 0xc($s1)
/* 0044963C 8F9987DC */  lw    $t9, %call16(write_integer)($gp)
/* 00449640 24060001 */  li    $a2, 1
/* 00449644 2407000A */  li    $a3, 10
/* 00449648 0320F809 */  jalr  $t9
/* 0044964C 00000000 */   nop   
/* 00449650 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00449654 92220000 */  lbu   $v0, ($s1)
.L00449658:
/* 00449658 2458FFE0 */  addiu $t8, $v0, -0x20
/* 0044965C 2F0B0080 */  sltiu $t3, $t8, 0x80
/* 00449660 11600009 */  beqz  $t3, .L00449688
/* 00449664 8FAC0028 */   lw    $t4, 0x28($sp)
/* 00449668 8F8D8038 */  lw    $t5, %got(D_10016E80)($gp)
/* 0044966C 00187143 */  sra   $t6, $t8, 5
/* 00449670 000E5080 */  sll   $t2, $t6, 2
/* 00449674 25AD6E80 */  addiu $t5, %lo(D_10016E80) # addiu $t5, $t5, 0x6e80
/* 00449678 01AA7821 */  addu  $t7, $t5, $t2
/* 0044967C 8DE80000 */  lw    $t0, ($t7)
/* 00449680 0308C804 */  sllv  $t9, $t0, $t8
/* 00449684 2B2B0000 */  slti  $t3, $t9, 0
.L00449688:
/* 00449688 11600012 */  beqz  $t3, .L004496D4
/* 0044968C 24060009 */   li    $a2, 9
/* 00449690 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 00449694 8D900000 */  lw    $s0, ($t4)
/* 00449698 8F858038 */  lw    $a1, %got(RO_1000E26F)($gp)
/* 0044969C 24070009 */  li    $a3, 9
/* 004496A0 02002025 */  move  $a0, $s0
/* 004496A4 0320F809 */  jalr  $t9
/* 004496A8 24A5E26F */   addiu $a1, %lo(RO_1000E26F) # addiu $a1, $a1, -0x1d91
/* 004496AC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004496B0 02002025 */  move  $a0, $s0
/* 004496B4 8E250010 */  lw    $a1, 0x10($s1)
/* 004496B8 8F9987DC */  lw    $t9, %call16(write_integer)($gp)
/* 004496BC 24060001 */  li    $a2, 1
/* 004496C0 2407000A */  li    $a3, 10
/* 004496C4 0320F809 */  jalr  $t9
/* 004496C8 00000000 */   nop   
/* 004496CC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004496D0 92220000 */  lbu   $v0, ($s1)
.L004496D4:
/* 004496D4 2C4E0040 */  sltiu $t6, $v0, 0x40
/* 004496D8 11C00009 */  beqz  $t6, .L00449700
/* 004496DC 8FAB0028 */   lw    $t3, 0x28($sp)
/* 004496E0 8F8F8038 */  lw    $t7, %got(D_10016E78)($gp)
/* 004496E4 00026943 */  sra   $t5, $v0, 5
/* 004496E8 000D5080 */  sll   $t2, $t5, 2
/* 004496EC 25EF6E78 */  addiu $t7, %lo(D_10016E78) # addiu $t7, $t7, 0x6e78
/* 004496F0 01EA4021 */  addu  $t0, $t7, $t2
/* 004496F4 8D180000 */  lw    $t8, ($t0)
/* 004496F8 0058C804 */  sllv  $t9, $t8, $v0
/* 004496FC 2B2E0000 */  slti  $t6, $t9, 0
.L00449700:
/* 00449700 11C00043 */  beqz  $t6, .L00449810
/* 00449704 24060006 */   li    $a2, 6
/* 00449708 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0044970C 8D700000 */  lw    $s0, ($t3)
/* 00449710 8F858038 */  lw    $a1, %got(RO_1000E269)($gp)
/* 00449714 24070006 */  li    $a3, 6
/* 00449718 02002025 */  move  $a0, $s0
/* 0044971C 0320F809 */  jalr  $t9
/* 00449720 24A5E269 */   addiu $a1, %lo(RO_1000E269) # addiu $a1, $a1, -0x1d97
/* 00449724 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00449728 02002025 */  move  $a0, $s0
/* 0044972C 92250009 */  lbu   $a1, 9($s1)
/* 00449730 8F9987DC */  lw    $t9, %call16(write_integer)($gp)
/* 00449734 24060001 */  li    $a2, 1
/* 00449738 2407000A */  li    $a3, 10
/* 0044973C 0320F809 */  jalr  $t9
/* 00449740 00000000 */   nop   
/* 00449744 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00449748 8FAC0028 */  lw    $t4, 0x28($sp)
/* 0044974C 24060005 */  li    $a2, 5
/* 00449750 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 00449754 8F858038 */  lw    $a1, %got(RO_1000E264)($gp)
/* 00449758 8D900000 */  lw    $s0, ($t4)
/* 0044975C 24070005 */  li    $a3, 5
/* 00449760 24A5E264 */  addiu $a1, %lo(RO_1000E264) # addiu $a1, $a1, -0x1d9c
/* 00449764 0320F809 */  jalr  $t9
/* 00449768 02002025 */   move  $a0, $s0
/* 0044976C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00449770 02002025 */  move  $a0, $s0
/* 00449774 92250008 */  lbu   $a1, 8($s1)
/* 00449778 8F9987DC */  lw    $t9, %call16(write_integer)($gp)
/* 0044977C 24060001 */  li    $a2, 1
/* 00449780 2407000A */  li    $a3, 10
/* 00449784 0320F809 */  jalr  $t9
/* 00449788 00000000 */   nop   
/* 0044978C 92220000 */  lbu   $v0, ($s1)
/* 00449790 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00449794 8FAB0028 */  lw    $t3, 0x28($sp)
/* 00449798 2C4D0040 */  sltiu $t5, $v0, 0x40
/* 0044979C 11A00009 */  beqz  $t5, .L004497C4
/* 004497A0 2406000A */   li    $a2, 10
/* 004497A4 8F888038 */  lw    $t0, %got(D_10016E70)($gp)
/* 004497A8 00027943 */  sra   $t7, $v0, 5
/* 004497AC 000F5080 */  sll   $t2, $t7, 2
/* 004497B0 25086E70 */  addiu $t0, %lo(D_10016E70) # addiu $t0, $t0, 0x6e70
/* 004497B4 010AC021 */  addu  $t8, $t0, $t2
/* 004497B8 8F190000 */  lw    $t9, ($t8)
/* 004497BC 00594804 */  sllv  $t1, $t9, $v0
/* 004497C0 292D0000 */  slti  $t5, $t1, 0
.L004497C4:
/* 004497C4 51A00013 */  beql  $t5, $zero, .L00449814
/* 004497C8 304300FF */   andi  $v1, $v0, 0xff
/* 004497CC 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 004497D0 8D700000 */  lw    $s0, ($t3)
/* 004497D4 8F858038 */  lw    $a1, %got(RO_1000E25A)($gp)
/* 004497D8 2407000A */  li    $a3, 10
/* 004497DC 02002025 */  move  $a0, $s0
/* 004497E0 0320F809 */  jalr  $t9
/* 004497E4 24A5E25A */   addiu $a1, %lo(RO_1000E25A) # addiu $a1, $a1, -0x1da6
/* 004497E8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004497EC 02002025 */  move  $a0, $s0
/* 004497F0 8E25000C */  lw    $a1, 0xc($s1)
/* 004497F4 8F9987DC */  lw    $t9, %call16(write_integer)($gp)
/* 004497F8 24060001 */  li    $a2, 1
/* 004497FC 2407000A */  li    $a3, 10
/* 00449800 0320F809 */  jalr  $t9
/* 00449804 00000000 */   nop   
/* 00449808 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0044980C 92220000 */  lbu   $v0, ($s1)
.L00449810:
/* 00449810 304300FF */  andi  $v1, $v0, 0xff
.L00449814:
/* 00449814 24010010 */  li    $at, 16
/* 00449818 54610056 */  bnel  $v1, $at, .L00449974
/* 0044981C 24010049 */   li    $at, 73
/* 00449820 8FAC0028 */  lw    $t4, 0x28($sp)
.L00449824:
/* 00449824 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 00449828 8F858038 */  lw    $a1, %got(RO_1000E254)($gp)
/* 0044982C 8D900000 */  lw    $s0, ($t4)
/* 00449830 24060006 */  li    $a2, 6
/* 00449834 24070006 */  li    $a3, 6
/* 00449838 24A5E254 */  addiu $a1, %lo(RO_1000E254) # addiu $a1, $a1, -0x1dac
/* 0044983C 0320F809 */  jalr  $t9
/* 00449840 02002025 */   move  $a0, $s0
/* 00449844 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00449848 02002025 */  move  $a0, $s0
/* 0044984C 8E250010 */  lw    $a1, 0x10($s1)
/* 00449850 8F9987DC */  lw    $t9, %call16(write_integer)($gp)
/* 00449854 24060001 */  li    $a2, 1
/* 00449858 2407000A */  li    $a3, 10
/* 0044985C 0320F809 */  jalr  $t9
/* 00449860 00000000 */   nop   
/* 00449864 10000045 */  b     .L0044997C
/* 00449868 8FBC0020 */   lw    $gp, 0x20($sp)
/* 0044986C 922F0001 */  lbu   $t7, 1($s1)
.L00449870:
/* 00449870 3C010500 */  lui   $at, 0x500
/* 00449874 8FAD0028 */  lw    $t5, 0x28($sp)
/* 00449878 31E8001F */  andi  $t0, $t7, 0x1f
/* 0044987C 2D0A0020 */  sltiu $t2, $t0, 0x20
/* 00449880 000AC023 */  negu  $t8, $t2
/* 00449884 0301C824 */  and   $t9, $t8, $at
/* 00449888 01194804 */  sllv  $t1, $t9, $t0
/* 0044988C 05210024 */  bgez  $t1, .L00449920
/* 00449890 24060006 */   li    $a2, 6
/* 00449894 8FAE0028 */  lw    $t6, 0x28($sp)
/* 00449898 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0044989C 8F858038 */  lw    $a1, %got(RO_1000E246)($gp)
/* 004498A0 8DD00000 */  lw    $s0, ($t6)
/* 004498A4 2406000E */  li    $a2, 14
/* 004498A8 2407000E */  li    $a3, 14
/* 004498AC 24A5E246 */  addiu $a1, %lo(RO_1000E246) # addiu $a1, $a1, -0x1dba
/* 004498B0 0320F809 */  jalr  $t9
/* 004498B4 02002025 */   move  $a0, $s0
/* 004498B8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004498BC 02002025 */  move  $a0, $s0
/* 004498C0 8E250010 */  lw    $a1, 0x10($s1)
/* 004498C4 8F9987DC */  lw    $t9, %call16(write_integer)($gp)
/* 004498C8 24060001 */  li    $a2, 1
/* 004498CC 2407000A */  li    $a3, 10
/* 004498D0 0320F809 */  jalr  $t9
/* 004498D4 00000000 */   nop   
/* 004498D8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004498DC 02002025 */  move  $a0, $s0
/* 004498E0 24050020 */  li    $a1, 32
/* 004498E4 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 004498E8 24060001 */  li    $a2, 1
/* 004498EC 2407000A */  li    $a3, 10
/* 004498F0 0320F809 */  jalr  $t9
/* 004498F4 00000000 */   nop   
/* 004498F8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004498FC 02002025 */  move  $a0, $s0
/* 00449900 8E250014 */  lw    $a1, 0x14($s1)
/* 00449904 8F9987DC */  lw    $t9, %call16(write_integer)($gp)
/* 00449908 24060001 */  li    $a2, 1
/* 0044990C 2407000A */  li    $a3, 10
/* 00449910 0320F809 */  jalr  $t9
/* 00449914 00000000 */   nop   
/* 00449918 10000018 */  b     .L0044997C
/* 0044991C 8FBC0020 */   lw    $gp, 0x20($sp)
.L00449920:
/* 00449920 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 00449924 8DB00000 */  lw    $s0, ($t5)
/* 00449928 8F858038 */  lw    $a1, %got(RO_1000E240)($gp)
/* 0044992C 24070006 */  li    $a3, 6
/* 00449930 02002025 */  move  $a0, $s0
/* 00449934 0320F809 */  jalr  $t9
/* 00449938 24A5E240 */   addiu $a1, %lo(RO_1000E240) # addiu $a1, $a1, -0x1dc0
/* 0044993C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00449940 02002025 */  move  $a0, $s0
/* 00449944 8E250010 */  lw    $a1, 0x10($s1)
/* 00449948 8F9987DC */  lw    $t9, %call16(write_integer)($gp)
/* 0044994C 24060001 */  li    $a2, 1
/* 00449950 2407000A */  li    $a3, 10
/* 00449954 0320F809 */  jalr  $t9
/* 00449958 00000000 */   nop   
/* 0044995C 10000007 */  b     .L0044997C
/* 00449960 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00449964 24010010 */  li    $at, 16
/* 00449968 5061FFAE */  beql  $v1, $at, .L00449824
/* 0044996C 8FAC0028 */   lw    $t4, 0x28($sp)
/* 00449970 24010049 */  li    $at, 73
.L00449974:
/* 00449974 5061FFBE */  beql  $v1, $at, .L00449870
/* 00449978 922F0001 */   lbu   $t7, 1($s1)
.L0044997C:
/* 0044997C 8FBF0024 */  lw    $ra, 0x24($sp)
/* 00449980 8FB00018 */  lw    $s0, 0x18($sp)
/* 00449984 8FB1001C */  lw    $s1, 0x1c($sp)
/* 00449988 03E00008 */  jr    $ra
/* 0044998C 27BD0028 */   addiu $sp, $sp, 0x28
    .type print_ucode, @function
    .size print_ucode, .-print_ucode
    .end print_ucode

glabel print_node_1
    .ent print_node_1
    # 00449CEC print_node
    # 00449D24 func_00449D24
/* 00449990 3C1C0FBD */  .cpload $t9
/* 00449994 279C60C0 */  
/* 00449998 0399E021 */  
/* 0044999C 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 004499A0 AFB10020 */  sw    $s1, 0x20($sp)
/* 004499A4 AFBF002C */  sw    $ra, 0x2c($sp)
/* 004499A8 AFBC0028 */  sw    $gp, 0x28($sp)
/* 004499AC AFB20024 */  sw    $s2, 0x24($sp)
/* 004499B0 AFB0001C */  sw    $s0, 0x1c($sp)
/* 004499B4 AFA60038 */  sw    $a2, 0x38($sp)
/* 004499B8 8F9987DC */  lw    $t9, %call16(write_integer)($gp)
/* 004499BC 00A08825 */  move  $s1, $a1
/* 004499C0 8CA50010 */  lw    $a1, 0x10($a1)
/* 004499C4 8C900000 */  lw    $s0, ($a0)
/* 004499C8 00809025 */  move  $s2, $a0
/* 004499CC 24060006 */  li    $a2, 6
/* 004499D0 2407000A */  li    $a3, 10
/* 004499D4 00052A02 */  srl   $a1, $a1, 8
/* 004499D8 0320F809 */  jalr  $t9
/* 004499DC 02002025 */   move  $a0, $s0
/* 004499E0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004499E4 02002025 */  move  $a0, $s0
/* 004499E8 24050009 */  li    $a1, 9
/* 004499EC 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 004499F0 24060001 */  li    $a2, 1
/* 004499F4 2407000A */  li    $a3, 10
/* 004499F8 0320F809 */  jalr  $t9
/* 004499FC 00000000 */   nop   
/* 00449A00 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00449A04 8FA50038 */  lw    $a1, 0x38($sp)
/* 00449A08 02402025 */  move  $a0, $s2
/* 00449A0C 8F998638 */  lw    $t9, %call16(indent_tree)($gp)
/* 00449A10 00052840 */  sll   $a1, $a1, 1
/* 00449A14 0320F809 */  jalr  $t9
/* 00449A18 00000000 */   nop   
/* 00449A1C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00449A20 02402025 */  move  $a0, $s2
/* 00449A24 26250020 */  addiu $a1, $s1, 0x20
/* 00449A28 8F99863C */  lw    $t9, %call16(print_ucode)($gp)
/* 00449A2C 0320F809 */  jalr  $t9
/* 00449A30 00000000 */   nop   
/* 00449A34 962E0014 */  lhu   $t6, 0x14($s1)
/* 00449A38 24010001 */  li    $at, 1
/* 00449A3C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00449A40 11C10011 */  beq   $t6, $at, .L00449A88
/* 00449A44 2406000B */   li    $a2, 11
/* 00449A48 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 00449A4C 8E500000 */  lw    $s0, ($s2)
/* 00449A50 8F858038 */  lw    $a1, %got(RO_1000E2E7)($gp)
/* 00449A54 2407000B */  li    $a3, 11
/* 00449A58 02002025 */  move  $a0, $s0
/* 00449A5C 0320F809 */  jalr  $t9
/* 00449A60 24A5E2E7 */   addiu $a1, %lo(RO_1000E2E7) # addiu $a1, $a1, -0x1d19
/* 00449A64 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00449A68 02002025 */  move  $a0, $s0
/* 00449A6C 96250014 */  lhu   $a1, 0x14($s1)
/* 00449A70 8F9987DC */  lw    $t9, %call16(write_integer)($gp)
/* 00449A74 24060001 */  li    $a2, 1
/* 00449A78 2407000A */  li    $a3, 10
/* 00449A7C 0320F809 */  jalr  $t9
/* 00449A80 00000000 */   nop   
/* 00449A84 8FBC0028 */  lw    $gp, 0x28($sp)
.L00449A88:
/* 00449A88 922F001A */  lbu   $t7, 0x1a($s1)
/* 00449A8C 2406000C */  li    $a2, 12
/* 00449A90 51E00012 */  beql  $t7, $zero, .L00449ADC
/* 00449A94 92220019 */   lbu   $v0, 0x19($s1)
/* 00449A98 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 00449A9C 8E500000 */  lw    $s0, ($s2)
/* 00449AA0 8F858038 */  lw    $a1, %got(RO_1000E2DB)($gp)
/* 00449AA4 2407000C */  li    $a3, 12
/* 00449AA8 02002025 */  move  $a0, $s0
/* 00449AAC 0320F809 */  jalr  $t9
/* 00449AB0 24A5E2DB */   addiu $a1, %lo(RO_1000E2DB) # addiu $a1, $a1, -0x1d25
/* 00449AB4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00449AB8 02002025 */  move  $a0, $s0
/* 00449ABC 9225001A */  lbu   $a1, 0x1a($s1)
/* 00449AC0 8F9987DC */  lw    $t9, %call16(write_integer)($gp)
/* 00449AC4 24060001 */  li    $a2, 1
/* 00449AC8 2407000A */  li    $a3, 10
/* 00449ACC 0320F809 */  jalr  $t9
/* 00449AD0 00000000 */   nop   
/* 00449AD4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00449AD8 92220019 */  lbu   $v0, 0x19($s1)
.L00449ADC:
/* 00449ADC 2406000C */  li    $a2, 12
/* 00449AE0 2407000C */  li    $a3, 12
/* 00449AE4 30580001 */  andi  $t8, $v0, 1
/* 00449AE8 57000009 */  bnel  $t8, $zero, .L00449B10
/* 00449AEC 0002CE00 */   sll   $t9, $v0, 0x18
/* 00449AF0 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 00449AF4 8F858038 */  lw    $a1, %got(RO_1000E2CF)($gp)
/* 00449AF8 8E440000 */  lw    $a0, ($s2)
/* 00449AFC 0320F809 */  jalr  $t9
/* 00449B00 24A5E2CF */   addiu $a1, %lo(RO_1000E2CF) # addiu $a1, $a1, -0x1d31
/* 00449B04 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00449B08 92220019 */  lbu   $v0, 0x19($s1)
/* 00449B0C 0002CE00 */  sll   $t9, $v0, 0x18
.L00449B10:
/* 00449B10 00194642 */  srl   $t0, $t9, 0x19
/* 00449B14 24010048 */  li    $at, 72
/* 00449B18 11010015 */  beq   $t0, $at, .L00449B70
/* 00449B1C 24060005 */   li    $a2, 5
/* 00449B20 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 00449B24 8E500000 */  lw    $s0, ($s2)
/* 00449B28 8F858038 */  lw    $a1, %got(RO_1000E2CA)($gp)
/* 00449B2C 24070005 */  li    $a3, 5
/* 00449B30 02002025 */  move  $a0, $s0
/* 00449B34 0320F809 */  jalr  $t9
/* 00449B38 24A5E2CA */   addiu $a1, %lo(RO_1000E2CA) # addiu $a1, $a1, -0x1d36
/* 00449B3C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00449B40 92250019 */  lbu   $a1, 0x19($s1)
/* 00449B44 2409000A */  li    $t1, 10
/* 00449B48 8F9987D8 */  lw    $t9, %call16(write_enum)($gp)
/* 00449B4C 8F868038 */  lw    $a2, %got(D_10016C50)($gp)
/* 00449B50 00052E00 */  sll   $a1, $a1, 0x18
/* 00449B54 00052E42 */  srl   $a1, $a1, 0x19
/* 00449B58 AFA90010 */  sw    $t1, 0x10($sp)
/* 00449B5C 02002025 */  move  $a0, $s0
/* 00449B60 00003825 */  move  $a3, $zero
/* 00449B64 0320F809 */  jalr  $t9
/* 00449B68 24C66C50 */   addiu $a2, %lo(D_10016C50) # addiu $a2, $a2, 0x6c50
/* 00449B6C 8FBC0028 */  lw    $gp, 0x28($sp)
.L00449B70:
/* 00449B70 8E2A0000 */  lw    $t2, ($s1)
/* 00449B74 24060005 */  li    $a2, 5
/* 00449B78 51400013 */  beql  $t2, $zero, .L00449BC8
/* 00449B7C 8E2C0004 */   lw    $t4, 4($s1)
/* 00449B80 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 00449B84 8E500000 */  lw    $s0, ($s2)
/* 00449B88 8F858038 */  lw    $a1, %got(RO_1000E2C5)($gp)
/* 00449B8C 24070005 */  li    $a3, 5
/* 00449B90 02002025 */  move  $a0, $s0
/* 00449B94 0320F809 */  jalr  $t9
/* 00449B98 24A5E2C5 */   addiu $a1, %lo(RO_1000E2C5) # addiu $a1, $a1, -0x1d3b
/* 00449B9C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00449BA0 8E2B0000 */  lw    $t3, ($s1)
/* 00449BA4 02002025 */  move  $a0, $s0
/* 00449BA8 8F9987DC */  lw    $t9, %call16(write_integer)($gp)
/* 00449BAC 8D650010 */  lw    $a1, 0x10($t3)
/* 00449BB0 24060001 */  li    $a2, 1
/* 00449BB4 2407000A */  li    $a3, 10
/* 00449BB8 0320F809 */  jalr  $t9
/* 00449BBC 00052A02 */   srl   $a1, $a1, 8
/* 00449BC0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00449BC4 8E2C0004 */  lw    $t4, 4($s1)
.L00449BC8:
/* 00449BC8 24060005 */  li    $a2, 5
/* 00449BCC 51800013 */  beql  $t4, $zero, .L00449C1C
/* 00449BD0 8E2E0008 */   lw    $t6, 8($s1)
/* 00449BD4 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 00449BD8 8E500000 */  lw    $s0, ($s2)
/* 00449BDC 8F858038 */  lw    $a1, %got(RO_1000E2C0)($gp)
/* 00449BE0 24070005 */  li    $a3, 5
/* 00449BE4 02002025 */  move  $a0, $s0
/* 00449BE8 0320F809 */  jalr  $t9
/* 00449BEC 24A5E2C0 */   addiu $a1, %lo(RO_1000E2C0) # addiu $a1, $a1, -0x1d40
/* 00449BF0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00449BF4 8E2D0004 */  lw    $t5, 4($s1)
/* 00449BF8 02002025 */  move  $a0, $s0
/* 00449BFC 8F9987DC */  lw    $t9, %call16(write_integer)($gp)
/* 00449C00 8DA50010 */  lw    $a1, 0x10($t5)
/* 00449C04 24060001 */  li    $a2, 1
/* 00449C08 2407000A */  li    $a3, 10
/* 00449C0C 0320F809 */  jalr  $t9
/* 00449C10 00052A02 */   srl   $a1, $a1, 8
/* 00449C14 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00449C18 8E2E0008 */  lw    $t6, 8($s1)
.L00449C1C:
/* 00449C1C 24060006 */  li    $a2, 6
/* 00449C20 51C00013 */  beql  $t6, $zero, .L00449C70
/* 00449C24 8E38000C */   lw    $t8, 0xc($s1)
/* 00449C28 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 00449C2C 8E500000 */  lw    $s0, ($s2)
/* 00449C30 8F858038 */  lw    $a1, %got(RO_1000E2BA)($gp)
/* 00449C34 24070006 */  li    $a3, 6
/* 00449C38 02002025 */  move  $a0, $s0
/* 00449C3C 0320F809 */  jalr  $t9
/* 00449C40 24A5E2BA */   addiu $a1, %lo(RO_1000E2BA) # addiu $a1, $a1, -0x1d46
/* 00449C44 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00449C48 8E2F0008 */  lw    $t7, 8($s1)
/* 00449C4C 02002025 */  move  $a0, $s0
/* 00449C50 8F9987DC */  lw    $t9, %call16(write_integer)($gp)
/* 00449C54 8DE50010 */  lw    $a1, 0x10($t7)
/* 00449C58 24060001 */  li    $a2, 1
/* 00449C5C 2407000A */  li    $a3, 10
/* 00449C60 0320F809 */  jalr  $t9
/* 00449C64 00052A02 */   srl   $a1, $a1, 8
/* 00449C68 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00449C6C 8E38000C */  lw    $t8, 0xc($s1)
.L00449C70:
/* 00449C70 24060007 */  li    $a2, 7
/* 00449C74 13000012 */  beqz  $t8, .L00449CC0
/* 00449C78 00000000 */   nop   
/* 00449C7C 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 00449C80 8E500000 */  lw    $s0, ($s2)
/* 00449C84 8F858038 */  lw    $a1, %got(RO_1000E2B3)($gp)
/* 00449C88 24070007 */  li    $a3, 7
/* 00449C8C 02002025 */  move  $a0, $s0
/* 00449C90 0320F809 */  jalr  $t9
/* 00449C94 24A5E2B3 */   addiu $a1, %lo(RO_1000E2B3) # addiu $a1, $a1, -0x1d4d
/* 00449C98 8E39000C */  lw    $t9, 0xc($s1)
/* 00449C9C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00449CA0 02002025 */  move  $a0, $s0
/* 00449CA4 8F250010 */  lw    $a1, 0x10($t9)
/* 00449CA8 8F9987DC */  lw    $t9, %call16(write_integer)($gp)
/* 00449CAC 24060001 */  li    $a2, 1
/* 00449CB0 2407000A */  li    $a3, 10
/* 00449CB4 0320F809 */  jalr  $t9
/* 00449CB8 00052A02 */   srl   $a1, $a1, 8
/* 00449CBC 8FBC0028 */  lw    $gp, 0x28($sp)
.L00449CC0:
/* 00449CC0 8F9987CC */  lw    $t9, %call16(writeln)($gp)
/* 00449CC4 8E440000 */  lw    $a0, ($s2)
/* 00449CC8 0320F809 */  jalr  $t9
/* 00449CCC 00000000 */   nop   
/* 00449CD0 8FBF002C */  lw    $ra, 0x2c($sp)
/* 00449CD4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00449CD8 8FB0001C */  lw    $s0, 0x1c($sp)
/* 00449CDC 8FB10020 */  lw    $s1, 0x20($sp)
/* 00449CE0 8FB20024 */  lw    $s2, 0x24($sp)
/* 00449CE4 03E00008 */  jr    $ra
/* 00449CE8 27BD0030 */   addiu $sp, $sp, 0x30
    .type print_node_1, @function
    .size print_node_1, .-print_node_1
    .end print_node_1

glabel print_node
    .ent print_node
    # 0042BDAC eval
    # 0044202C set_rewrite
    # 00442968 set_rewrite_indexed
/* 00449CEC 3C1C0FBD */  .cpload $t9
/* 00449CF0 279C5D64 */  
/* 00449CF4 0399E021 */  
/* 00449CF8 8F998640 */  lw    $t9, %call16(print_node_1)($gp)
/* 00449CFC 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00449D00 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00449D04 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00449D08 0320F809 */  jalr  $t9
/* 00449D0C 00003025 */   move  $a2, $zero
/* 00449D10 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00449D14 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00449D18 27BD0020 */  addiu $sp, $sp, 0x20
/* 00449D1C 03E00008 */  jr    $ra
/* 00449D20 00000000 */   nop   
    .type print_node, @function
    .size print_node, .-print_node
    .end print_node

    .type func_00449D24, @function
func_00449D24:
    # 00449D24 func_00449D24
    # 00449E98 print_tree
/* 00449D24 3C1C0FBD */  .cpload $t9
/* 00449D28 279C5D2C */  
/* 00449D2C 0399E021 */  
/* 00449D30 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 00449D34 AFB30024 */  sw    $s3, 0x24($sp)
/* 00449D38 AFB1001C */  sw    $s1, 0x1c($sp)
/* 00449D3C AFB00018 */  sw    $s0, 0x18($sp)
/* 00449D40 00808025 */  move  $s0, $a0
/* 00449D44 00408825 */  move  $s1, $v0
/* 00449D48 00A09825 */  move  $s3, $a1
/* 00449D4C AFBF002C */  sw    $ra, 0x2c($sp)
/* 00449D50 AFBC0028 */  sw    $gp, 0x28($sp)
/* 00449D54 10800049 */  beqz  $a0, .L00449E7C
/* 00449D58 AFB20020 */   sw    $s2, 0x20($sp)
/* 00449D5C 8E22FFFC */  lw    $v0, -4($s1)
.L00449D60:
/* 00449D60 920E0017 */  lbu   $t6, 0x17($s0)
/* 00449D64 02002825 */  move  $a1, $s0
/* 00449D68 02603025 */  move  $a2, $s3
/* 00449D6C 504E0044 */  beql  $v0, $t6, .L00449E80
/* 00449D70 8FBF002C */   lw    $ra, 0x2c($sp)
/* 00449D74 8F998640 */  lw    $t9, %call16(print_node_1)($gp)
/* 00449D78 A2020017 */  sb    $v0, 0x17($s0)
/* 00449D7C 8E320008 */  lw    $s2, 8($s1)
/* 00449D80 0320F809 */  jalr  $t9
/* 00449D84 8E240000 */   lw    $a0, ($s1)
/* 00449D88 0272082B */  sltu  $at, $s3, $s2
/* 00449D8C 10200031 */  beqz  $at, .L00449E54
/* 00449D90 8FBC0028 */   lw    $gp, 0x28($sp)
/* 00449D94 8E040000 */  lw    $a0, ($s0)
/* 00449D98 50800017 */  beql  $a0, $zero, .L00449DF8
/* 00449D9C 8E040004 */   lw    $a0, 4($s0)
/* 00449DA0 920F0020 */  lbu   $t7, 0x20($s0)
/* 00449DA4 2DF80080 */  sltiu $t8, $t7, 0x80
/* 00449DA8 13000009 */  beqz  $t8, .L00449DD0
/* 00449DAC 00000000 */   nop   
/* 00449DB0 8F898038 */  lw    $t1, %got(D_10016F44)($gp)
/* 00449DB4 000FC943 */  sra   $t9, $t7, 5
/* 00449DB8 00194080 */  sll   $t0, $t9, 2
/* 00449DBC 25296F44 */  addiu $t1, %lo(D_10016F44) # addiu $t1, $t1, 0x6f44
/* 00449DC0 01285021 */  addu  $t2, $t1, $t0
/* 00449DC4 8D4B0000 */  lw    $t3, ($t2)
/* 00449DC8 01EB6004 */  sllv  $t4, $t3, $t7
/* 00449DCC 29980000 */  slti  $t8, $t4, 0
.L00449DD0:
/* 00449DD0 57000009 */  bnel  $t8, $zero, .L00449DF8
/* 00449DD4 8E040004 */   lw    $a0, 4($s0)
/* 00449DD8 8F998028 */  lw    $t9, %got(func_00449D24)($gp)
/* 00449DDC 26650001 */  addiu $a1, $s3, 1
/* 00449DE0 02201025 */  move  $v0, $s1
/* 00449DE4 27399D24 */  addiu $t9, %lo(func_00449D24) # addiu $t9, $t9, -0x62dc
/* 00449DE8 0320F809 */  jalr  $t9
/* 00449DEC 00000000 */   nop   
/* 00449DF0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00449DF4 8E040004 */  lw    $a0, 4($s0)
.L00449DF8:
/* 00449DF8 50800017 */  beql  $a0, $zero, .L00449E58
/* 00449DFC 8E22FFF8 */   lw    $v0, -8($s1)
/* 00449E00 920E0020 */  lbu   $t6, 0x20($s0)
/* 00449E04 2DD900A0 */  sltiu $t9, $t6, 0xa0
/* 00449E08 13200009 */  beqz  $t9, .L00449E30
/* 00449E0C 00000000 */   nop   
/* 00449E10 8F8A8038 */  lw    $t2, %got(D_10016F30)($gp)
/* 00449E14 000E4943 */  sra   $t1, $t6, 5
/* 00449E18 00094080 */  sll   $t0, $t1, 2
/* 00449E1C 254A6F30 */  addiu $t2, %lo(D_10016F30) # addiu $t2, $t2, 0x6f30
/* 00449E20 01485821 */  addu  $t3, $t2, $t0
/* 00449E24 8D6F0000 */  lw    $t7, ($t3)
/* 00449E28 01CF6004 */  sllv  $t4, $t7, $t6
/* 00449E2C 29990000 */  slti  $t9, $t4, 0
.L00449E30:
/* 00449E30 57200009 */  bnel  $t9, $zero, .L00449E58
/* 00449E34 8E22FFF8 */   lw    $v0, -8($s1)
/* 00449E38 8F998028 */  lw    $t9, %got(func_00449D24)($gp)
/* 00449E3C 26650001 */  addiu $a1, $s3, 1
/* 00449E40 02201025 */  move  $v0, $s1
/* 00449E44 27399D24 */  addiu $t9, %lo(func_00449D24) # addiu $t9, $t9, -0x62dc
/* 00449E48 0320F809 */  jalr  $t9
/* 00449E4C 00000000 */   nop   
/* 00449E50 8FBC0028 */  lw    $gp, 0x28($sp)
.L00449E54:
/* 00449E54 8E22FFF8 */  lw    $v0, -8($s1)
.L00449E58:
/* 00449E58 8E38000C */  lw    $t8, 0xc($s1)
/* 00449E5C 24490001 */  addiu $t1, $v0, 1
/* 00449E60 0058082B */  sltu  $at, $v0, $t8
/* 00449E64 50200006 */  beql  $at, $zero, .L00449E80
/* 00449E68 8FBF002C */   lw    $ra, 0x2c($sp)
/* 00449E6C AE29FFF8 */  sw    $t1, -8($s1)
/* 00449E70 8E100008 */  lw    $s0, 8($s0)
/* 00449E74 5600FFBA */  bnel  $s0, $zero, .L00449D60
/* 00449E78 8E22FFFC */   lw    $v0, -4($s1)
.L00449E7C:
/* 00449E7C 8FBF002C */  lw    $ra, 0x2c($sp)
.L00449E80:
/* 00449E80 8FB00018 */  lw    $s0, 0x18($sp)
/* 00449E84 8FB1001C */  lw    $s1, 0x1c($sp)
/* 00449E88 8FB20020 */  lw    $s2, 0x20($sp)
/* 00449E8C 8FB30024 */  lw    $s3, 0x24($sp)
/* 00449E90 03E00008 */  jr    $ra
/* 00449E94 27BD0030 */   addiu $sp, $sp, 0x30

glabel print_tree
    .ent print_tree
    # 004362FC labelopt
    # 00449F00 debug_tree
    # 0044BA38 func_0044BA38
/* 00449E98 3C1C0FBD */  .cpload $t9
/* 00449E9C 279C5BB8 */  
/* 00449EA0 0399E021 */  
/* 00449EA4 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 00449EA8 8F998680 */  lw    $t9, %call16(next_mark)($gp)
/* 00449EAC AFBF001C */  sw    $ra, 0x1c($sp)
/* 00449EB0 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00449EB4 AFA40028 */  sw    $a0, 0x28($sp)
/* 00449EB8 AFA5002C */  sw    $a1, 0x2c($sp)
/* 00449EBC AFA60030 */  sw    $a2, 0x30($sp)
/* 00449EC0 0320F809 */  jalr  $t9
/* 00449EC4 AFA70034 */   sw    $a3, 0x34($sp)
/* 00449EC8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00449ECC AFA20024 */  sw    $v0, 0x24($sp)
/* 00449ED0 AFA00020 */  sw    $zero, 0x20($sp)
/* 00449ED4 8F998028 */  lw    $t9, %got(func_00449D24)($gp)
/* 00449ED8 27A20028 */  addiu $v0, $sp, 0x28
/* 00449EDC 8FA4002C */  lw    $a0, 0x2c($sp)
/* 00449EE0 27399D24 */  addiu $t9, %lo(func_00449D24) # addiu $t9, $t9, -0x62dc
/* 00449EE4 0320F809 */  jalr  $t9
/* 00449EE8 00002825 */   move  $a1, $zero
/* 00449EEC 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00449EF0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00449EF4 27BD0028 */  addiu $sp, $sp, 0x28
/* 00449EF8 03E00008 */  jr    $ra
/* 00449EFC 00000000 */   nop   
    .type print_tree, @function
    .size print_tree, .-print_tree
    .end print_tree

glabel debug_tree
    .ent debug_tree
/* 00449F00 3C1C0FBD */  .cpload $t9
/* 00449F04 279C5B50 */  
/* 00449F08 0399E021 */  
/* 00449F0C 8F998648 */  lw    $t9, %call16(print_tree)($gp)
/* 00449F10 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00449F14 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00449F18 00802825 */  move  $a1, $a0
/* 00449F1C AFBC0018 */  sw    $gp, 0x18($sp)
/* 00449F20 8F848954 */  lw     $a0, %got(output)($gp)
/* 00449F24 24060014 */  li    $a2, 20
/* 00449F28 0320F809 */  jalr  $t9
/* 00449F2C 00003825 */   move  $a3, $zero
/* 00449F30 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00449F34 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00449F38 27BD0020 */  addiu $sp, $sp, 0x20
/* 00449F3C 03E00008 */  jr    $ra
/* 00449F40 00000000 */   nop   
    .type debug_tree, @function
    .size debug_tree, .-debug_tree
    .end debug_tree
)"");
