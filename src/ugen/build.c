__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
RO_10008BD0:
    # 0040E474 func_0040E474
    .ascii "build.p"

RO_10008BD7:
    # 0040E474 func_0040E474
    .asciz "build.p"

    .balign 4
jtbl_10008BE0:
    # 0040E474 func_0040E474
    .gpword .L0040E578
    .gpword .L0040E5A8
    .gpword .L0040E65C
    .gpword .L0040E65C
    .gpword .L0040E700

    .balign 4
jtbl_10008BF4:
    # 0040E884 func_0040E884
    .gpword .L0040EA00
    .gpword .L0040EAF4
    .gpword .L0040EA00
    .gpword .L0040EA00
    .gpword .L0040EA00
    .gpword .L0040EAF4
    .gpword .L0040E968
    .gpword .L0040EAF4
    .gpword .L0040E968
    .gpword .L0040EA00
    .gpword .L0040EAF4
    .gpword .L0040EAF4
    .gpword .L0040EA54
    .gpword .L0040EA00
    .gpword .L0040EAF4
    .gpword .L0040EA00

RO_10008C34:
    # 0040F4C8 build_tree
    .ascii "bad input to ugen:  unexpected u-code                                           "

RO_10008C84:
    # 0040F4C8 build_tree
    .ascii "build.p                                                                         "

RO_10008CD4:
    # 0040F4C8 build_tree
    .ascii "bad input to ugen:  end-of-file seen unexpectedly                               "

RO_10008D24:
    # 0040F4C8 build_tree
    .ascii "build.p                                                                         "

RO_10008D74:
    # 0040F4C8 build_tree
    .ascii "Cannot continue                                                                 "

RO_10008DC4:
    # 0040F4C8 build_tree
    .ascii "build.p                                                                         "

RO_10008E14:
    # 0040F4C8 build_tree
    .ascii "Found Uaos u-code in unexpected spot. Perhaps value returned from alloca(3) was not assigned to simple variable. (See alloca man page)"

RO_10008E9A:
    # 0040F4C8 build_tree
    .ascii "Cannot continue                                                                 "

RO_10008EEA:
    # 0040F4C8 build_tree
    .ascii "build.p                                                                         "

RO_10008F3A:
    # 0040F4C8 build_tree
    .ascii "Internal error due to probable C source error. Please recompile your C code with the -prototypes flag to cc(1)"

RO_10008FA8:
    # 0040F4C8 build_tree
    .ascii "non UJP u-code in jump table                                                    "

RO_10008FF8:
    # 0040F4C8 build_tree
    .ascii "build.p                                                                         "

RO_10009048:
    # 0040F4C8 build_tree
    .ascii "LDEF before LAB                                                                 "

RO_10009098:
    # 0040F4C8 build_tree
    .ascii "build.p                                                                         "

    .balign 4
jtbl_100090E8:
    # 0040F4C8 build_tree
    .gpword .L00413480
    .gpword .L00413480
    .gpword .L004134CC
    .gpword .L0041356C
    .gpword .L0041356C
    .gpword .L0041356C
    .gpword .L004130F4
    .gpword .L0041356C
    .gpword .L0041356C
    .gpword .L0041356C
    .gpword .L004132A0

    .balign 4
jtbl_10009114:
    # 0040F4C8 build_tree
    .gpword .L0041283C
    .gpword .L00412D38
    .gpword .L0041283C
    .gpword .L0040FBCC
    .gpword .L00412D38
    .gpword .L004115E8
    .gpword .L0040F63C
    .gpword .L0040F79C
    .gpword .L0040F800
    .gpword .L00412D38
    .gpword .L00413DE0
    .gpword .L00413DE0
    .gpword .L0041283C
    .gpword .L0041283C
    .gpword .L0041283C
    .gpword .L004125C4
    .gpword .L00413B80
    .gpword .L00410504
    .gpword .L0040F5AC
    .gpword .L0040F868
    .gpword .L0040F63C
    .gpword .L0040F5AC
    .gpword .L0040F5AC
    .gpword .L00411448
    .gpword .L00412748
    .gpword .L0041283C
    .gpword .L0041298C
    .gpword .L0040FF54
    .gpword .L00412D38
    .gpword .L00412D38
    .gpword .L00412C94
    .gpword .L0040FC04
    .gpword .L0040F834
    .gpword .L0040FAA4
    .gpword .L00413CE4
    .gpword .L00412D38
    .gpword .L0040F63C
    .gpword .L00413DE0
    .gpword .L00410180
    .gpword .L0040F5F0
    .gpword .L00412D38
    .gpword .L00412D38
    .gpword .L0040F63C
    .gpword .L0040F63C
    .gpword .L004114A8
    .gpword .L004136F4
    .gpword .L00412D38
    .gpword .L00412D38
    .gpword .L00412D38
    .gpword .L00410110
    .gpword .L0041283C
    .gpword .L00413DE0
    .gpword .L00412D38
    .gpword .L00412D38
    .gpword .L00412B24
    .gpword .L00412908
    .gpword .L00412D38
    .gpword .L0040F724
    .gpword .L00412D38
    .gpword .L00412D38
    .gpword .L00412D38
    .gpword .L00412A14
    .gpword .L004119A8
    .gpword .L00411AF0
    .gpword .L00413DE0
    .gpword .L00412D38
    .gpword .L0041030C
    .gpword .L0040F5AC
    .gpword .L00413C24
    .gpword .L00413C18
    .gpword .L00412108
    .gpword .L00412184
    .gpword .L004124B8
    .gpword .L00412298
    .gpword .L004103D4
    .gpword .L004124B8
    .gpword .L0040F5AC
    .gpword .L00412D38
    .gpword .L00412D38
    .gpword .L0040F5AC
    .gpword .L0041283C
    .gpword .L0040F868
    .gpword .L004124B8
    .gpword .L0040F63C
    .gpword .L0040F5AC
    .gpword .L00412D38
    .gpword .L00412D38
    .gpword .L00412D38
    .gpword .L00411544
    .gpword .L00413DE0
    .gpword .L004111C0
    .gpword .L00412D38
    .gpword .L0041118C
    .gpword .L00412D38
    .gpword .L00412884
    .gpword .L00412D38
    .gpword .L0040F5AC
    .gpword .L0041283C
    .gpword .L0041283C
    .gpword .L0040F9A8
    .gpword .L004111C0
    .gpword .L0040FF08
    .gpword .L004111C0
    .gpword .L00413A88
    .gpword .L0040F868
    .gpword .L00412D38
    .gpword .L00410074
    .gpword .L00412008
    .gpword .L00411E68
    .gpword .L00411DB8
    .gpword .L0041283C
    .gpword .L004113C8
    .gpword .L00411D14
    .gpword .L0040F780
    .gpword .L0041283C
    .gpword .L00412D38
    .gpword .L00412D38
    .gpword .L00412D38
    .gpword .L0041283C
    .gpword .L0041283C
    .gpword .L0040F6A8
    .gpword .L0040F5AC
    .gpword .L0040F7D8
    .gpword .L004115E8
    .gpword .L004115E8
    .gpword .L00412D38
    .gpword .L00413A10
    .gpword .L00410180
    .gpword .L00412638
    .gpword .L00412638
    .gpword .L00412638
    .gpword .L00412638
    .gpword .L00412638
    .gpword .L00412638
    .gpword .L0041283C
    .gpword .L0040F5AC
    .gpword .L004100B8
    .gpword .L00410040
    .gpword .L00412D38
    .gpword .L00410008
    .gpword .L00410A5C
    .gpword .L00412D38
    .gpword .L00413B70
    .gpword .L00413C5C
    .gpword .L00413CB0
    .gpword .L00413DE0
    .gpword .L00413DE0
    .gpword .L00412C38
    .gpword .L00411C58
    .gpword .L0041245C
    .gpword .L0040F654
    .gpword .L00411448
    .gpword .L0040F63C
    .gpword .L0040F63C

.data
# 100124C0
glabel similar_data_types
    # 0040F4C8 build_tree
    .byte 0xba,0xa1,0x00,0x00,0x00,0x00,0x00,0x00,0xba,0xa1,0x00,0x00,0xba,0xa1,0x00,0x00,0xba,0xa1,0x00,0x00,0x05,0x01,0x00,0x00,0xba,0xa0,0x00,0x00,0x05,0x01,0x00,0x00,0xba,0xa0,0x00,0x00,0x00,0x00,0x00,0x00,0xba,0xa1,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0xbd,0x21,0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00
    .type similar_data_types, @object
    .size similar_data_types, .-similar_data_types # 72

# 10012508
glabel similar_data_types_dw
    # 0040F4C8 build_tree
    .byte 0xba,0x21,0x00,0x00,0x00,0x00,0x00,0x00,0xba,0xa1,0x00,0x00,0xba,0xa1,0x00,0x00,0xba,0xa1,0x00,0x00,0x05,0x01,0x00,0x00,0xba,0x20,0x00,0x00,0x05,0x01,0x00,0x00,0x38,0xa0,0x00,0x00,0x00,0x00,0x00,0x00,0xba,0xa1,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0xbd,0x21,0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00
    .type similar_data_types_dw, @object
    .size similar_data_types_dw, .-similar_data_types_dw # 72

# 10012550
glabel trap_to_compare
    # 0040F4C8 build_tree
    .ascii "_NM)(#"
    .type trap_to_compare, @object
    .size trap_to_compare, .-trap_to_compare # 6
    .space 2

# 10012558
glabel syms
    # 0040F4C8 build_tree
    .byte 0x00,0x00,0x00,0x00
    .type syms, @object
    .size syms, .-syms # 4

D_1001255C:
    # 0040F230 func_0040F230
    .byte 0x00,0x00,0x02,0x01,0x00,0x00,0x20,0x80,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00




.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
glabel set_domtag
    .ent set_domtag
    # 0044BF18 main
/* 0040E0B0 3C1C0FC1 */  .cpload $t9
/* 0040E0B4 279C19A0 */  
/* 0040E0B8 0399E021 */  
/* 0040E0BC 8F818A84 */  lw     $at, %got(domtag)($gp)
/* 0040E0C0 AFA40000 */  sw    $a0, ($sp)
/* 0040E0C4 03E00008 */  jr    $ra
/* 0040E0C8 A0240000 */   sb    $a0, ($at)
    .type set_domtag, @function
    .size set_domtag, .-set_domtag
    .end set_domtag

glabel get_domtag
    .ent get_domtag
    # 0042BDAC eval
    # 00447768 check_reg
/* 0040E0CC 3C1C0FC1 */  .cpload $t9
/* 0040E0D0 279C1984 */  
/* 0040E0D4 0399E021 */  
/* 0040E0D8 8F838A84 */  lw     $v1, %got(domtag)($gp)
/* 0040E0DC 03E00008 */  jr    $ra
/* 0040E0E0 90620000 */   lbu   $v0, ($v1)
    .type get_domtag, @function
    .size get_domtag, .-get_domtag
    .end get_domtag

glabel search_label
    .ent search_label
    # 0040F4C8 build_tree
/* 0040E0E4 3C1C0FC1 */  .cpload $t9
/* 0040E0E8 279C196C */  
/* 0040E0EC 0399E021 */  
/* 0040E0F0 240100FD */  li    $at, 253
/* 0040E0F4 0081001B */  divu  $zero, $a0, $at
/* 0040E0F8 00007010 */  mfhi  $t6
/* 0040E0FC 05C10002 */  bgez  $t6, .L0040E108
/* 0040E100 00000000 */   nop   
/* 0040E104 21CE00FD */  addi  $t6, $t6, 0xfd
.L0040E108:
/* 0040E108 8F998BD0 */  lw     $t9, %got(label_hash_table)($gp)
/* 0040E10C 31CF00FF */  andi  $t7, $t6, 0xff
/* 0040E110 000FC080 */  sll   $t8, $t7, 2
/* 0040E114 03194021 */  addu  $t0, $t8, $t9
/* 0040E118 8D030000 */  lw    $v1, ($t0)
/* 0040E11C 10600007 */  beqz  $v1, .L0040E13C
/* 0040E120 00000000 */   nop   
/* 0040E124 8C690024 */  lw    $t1, 0x24($v1)
.L0040E128:
/* 0040E128 10890004 */  beq   $a0, $t1, .L0040E13C
/* 0040E12C 00000000 */   nop   
/* 0040E130 8C630000 */  lw    $v1, ($v1)
/* 0040E134 5460FFFC */  bnel  $v1, $zero, .L0040E128
/* 0040E138 8C690024 */   lw    $t1, 0x24($v1)
.L0040E13C:
/* 0040E13C 03E00008 */  jr    $ra
/* 0040E140 00601025 */   move  $v0, $v1
    .type search_label, @function
    .size search_label, .-search_label
    .end search_label

glabel find_label
    .ent find_label
    # 0040F4C8 build_tree
/* 0040E144 3C1C0FC1 */  .cpload $t9
/* 0040E148 279C190C */  
/* 0040E14C 0399E021 */  
/* 0040E150 240100FD */  li    $at, 253
/* 0040E154 0081001B */  divu  $zero, $a0, $at
/* 0040E158 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 0040E15C 00007010 */  mfhi  $t6
/* 0040E160 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0040E164 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0040E168 05C10002 */  bgez  $t6, .L0040E174
/* 0040E16C 00802825 */   move  $a1, $a0
/* 0040E170 21CE00FD */  addi  $t6, $t6, 0xfd
.L0040E174:
/* 0040E174 8F998BD0 */  lw     $t9, %got(label_hash_table)($gp)
/* 0040E178 31CF00FF */  andi  $t7, $t6, 0xff
/* 0040E17C 000FC080 */  sll   $t8, $t7, 2
/* 0040E180 03193021 */  addu  $a2, $t8, $t9
/* 0040E184 8CC30000 */  lw    $v1, ($a2)
/* 0040E188 10600009 */  beqz  $v1, .L0040E1B0
/* 0040E18C 00000000 */   nop   
/* 0040E190 8C680024 */  lw    $t0, 0x24($v1)
.L0040E194:
/* 0040E194 54A80004 */  bnel  $a1, $t0, .L0040E1A8
/* 0040E198 8C630000 */   lw    $v1, ($v1)
/* 0040E19C 10000012 */  b     .L0040E1E8
/* 0040E1A0 00601025 */   move  $v0, $v1
/* 0040E1A4 8C630000 */  lw    $v1, ($v1)
.L0040E1A8:
/* 0040E1A8 5460FFFA */  bnel  $v1, $zero, .L0040E194
/* 0040E1AC 8C680024 */   lw    $t0, 0x24($v1)
.L0040E1B0:
/* 0040E1B0 8F998664 */  lw    $t9, %call16(build_op)($gp)
/* 0040E1B4 24040042 */  li    $a0, 66
/* 0040E1B8 AFA50030 */  sw    $a1, 0x30($sp)
/* 0040E1BC 0320F809 */  jalr  $t9
/* 0040E1C0 AFA60020 */   sw    $a2, 0x20($sp)
/* 0040E1C4 8FA60020 */  lw    $a2, 0x20($sp)
/* 0040E1C8 8FA50030 */  lw    $a1, 0x30($sp)
/* 0040E1CC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0040E1D0 A4400022 */  sh    $zero, 0x22($v0)
/* 0040E1D4 AC400028 */  sw    $zero, 0x28($v0)
/* 0040E1D8 AC450024 */  sw    $a1, 0x24($v0)
/* 0040E1DC 8CC90000 */  lw    $t1, ($a2)
/* 0040E1E0 AC490000 */  sw    $t1, ($v0)
/* 0040E1E4 ACC20000 */  sw    $v0, ($a2)
.L0040E1E8:
/* 0040E1E8 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0040E1EC 27BD0030 */  addiu $sp, $sp, 0x30
/* 0040E1F0 03E00008 */  jr    $ra
/* 0040E1F4 00000000 */   nop   
    .type find_label, @function
    .size find_label, .-find_label
    .end find_label

glabel init_build
    .ent init_build
    # 0044BF18 main
/* 0040E1F8 3C1C0FC1 */  .cpload $t9
/* 0040E1FC 279C1858 */  
/* 0040E200 0399E021 */  
/* 0040E204 8F9987E8 */  lw    $t9, %call16(new)($gp)
/* 0040E208 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0040E20C AFBF001C */  sw    $ra, 0x1c($sp)
/* 0040E210 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0040E214 24040400 */  li    $a0, 1024
/* 0040E218 0320F809 */  jalr  $t9
/* 0040E21C 00002825 */   move  $a1, $zero
/* 0040E220 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0040E224 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0040E228 8F818A80 */  lw     $at, %got(strp)($gp)
/* 0040E22C 27BD0020 */  addiu $sp, $sp, 0x20
/* 0040E230 03E00008 */  jr    $ra
/* 0040E234 AC220000 */   sw    $v0, ($at)
    .type init_build, @function
    .size init_build, .-init_build
    .end init_build

    .type func_0040E238, @function
func_0040E238:
    # 0040F4C8 build_tree
/* 0040E238 8C43EBA4 */  lw    $v1, -0x145c($v0)
/* 0040E23C AC640008 */  sw    $a0, 8($v1)
/* 0040E240 AC83000C */  sw    $v1, 0xc($a0)
/* 0040E244 03E00008 */  jr    $ra
/* 0040E248 AC44EBA4 */   sw    $a0, -0x145c($v0)

    .type func_0040E24C, @function
func_0040E24C:
    # 0040F4C8 build_tree
/* 0040E24C 8C43EBA4 */  lw    $v1, -0x145c($v0)
/* 0040E250 AC640008 */  sw    $a0, 8($v1)
/* 0040E254 8C850008 */  lw    $a1, 8($a0)
/* 0040E258 AC83000C */  sw    $v1, 0xc($a0)
/* 0040E25C 10A00006 */  beqz  $a1, .L0040E278
/* 0040E260 00000000 */   nop   
/* 0040E264 ACA4000C */  sw    $a0, 0xc($a1)
.L0040E268:
/* 0040E268 8C840008 */  lw    $a0, 8($a0)
/* 0040E26C 8C850008 */  lw    $a1, 8($a0)
/* 0040E270 54A0FFFD */  bnel  $a1, $zero, .L0040E268
/* 0040E274 ACA4000C */   sw    $a0, 0xc($a1)
.L0040E278:
/* 0040E278 03E00008 */  jr    $ra
/* 0040E27C AC44EBA4 */   sw    $a0, -0x145c($v0)

    .type func_0040E280, @function
func_0040E280:
    # 0040F4C8 build_tree
/* 0040E280 8C820008 */  lw    $v0, 8($a0)
/* 0040E284 AC850008 */  sw    $a1, 8($a0)
/* 0040E288 8CA30008 */  lw    $v1, 8($a1)
/* 0040E28C 10600005 */  beqz  $v1, .L0040E2A4
/* 0040E290 00000000 */   nop   
/* 0040E294 00602825 */  move  $a1, $v1
.L0040E298:
/* 0040E298 8C630008 */  lw    $v1, 8($v1)
/* 0040E29C 5460FFFE */  bnel  $v1, $zero, .L0040E298
/* 0040E2A0 00602825 */   move  $a1, $v1
.L0040E2A4:
/* 0040E2A4 03E00008 */  jr    $ra
/* 0040E2A8 ACA20008 */   sw    $v0, 8($a1)

    .type func_0040E2AC, @function
func_0040E2AC:
    # 0040F4C8 build_tree
/* 0040E2AC 3C1C0FC1 */  .cpload $t9
/* 0040E2B0 279C17A4 */  
/* 0040E2B4 0399E021 */  
/* 0040E2B8 27BDFFB8 */  addiu $sp, $sp, -0x48
/* 0040E2BC 244EEBA7 */  addiu $t6, $v0, -0x1459
/* 0040E2C0 AFBF0024 */  sw    $ra, 0x24($sp)
/* 0040E2C4 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0040E2C8 AFB2001C */  sw    $s2, 0x1c($sp)
/* 0040E2CC AFB10018 */  sw    $s1, 0x18($sp)
/* 0040E2D0 AFB00014 */  sw    $s0, 0x14($sp)
/* 0040E2D4 AFA40048 */  sw    $a0, 0x48($sp)
/* 0040E2D8 01C47821 */  addu  $t7, $t6, $a0
/* 0040E2DC 91F80000 */  lbu   $t8, ($t7)
/* 0040E2E0 24010008 */  li    $at, 8
/* 0040E2E4 00408825 */  move  $s1, $v0
/* 0040E2E8 17010004 */  bne   $t8, $at, .L0040E2FC
/* 0040E2EC 00049080 */   sll   $s2, $a0, 2
/* 0040E2F0 24190008 */  li    $t9, 8
/* 0040E2F4 10000003 */  b     .L0040E304
/* 0040E2F8 A3B90043 */   sb    $t9, 0x43($sp)
.L0040E2FC:
/* 0040E2FC 24080006 */  li    $t0, 6
/* 0040E300 A3A80043 */  sb    $t0, 0x43($sp)
.L0040E304:
/* 0040E304 2629F9B4 */  addiu $t1, $s1, -0x64c
/* 0040E308 01328021 */  addu  $s0, $t1, $s2
/* 0040E30C 8E070000 */  lw    $a3, ($s0)
/* 0040E310 262BF374 */  addiu $t3, $s1, -0xc8c
/* 0040E314 93A40043 */  lbu   $a0, 0x43($sp)
/* 0040E318 14E0000B */  bnez  $a3, .L0040E348
/* 0040E31C 01726021 */   addu  $t4, $t3, $s2
/* 0040E320 8F998684 */  lw    $t9, %call16(ivalue)($gp)
/* 0040E324 262AF374 */  addiu $t2, $s1, -0xc8c
/* 0040E328 01521021 */  addu  $v0, $t2, $s2
/* 0040E32C 8C460000 */  lw    $a2, ($v0)
/* 0040E330 AFA2002C */  sw    $v0, 0x2c($sp)
/* 0040E334 0320F809 */  jalr  $t9
/* 0040E338 00002825 */   move  $a1, $zero
/* 0040E33C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0040E340 10000041 */  b     .L0040E448
/* 0040E344 AE020000 */   sw    $v0, ($s0)
.L0040E348:
/* 0040E348 AFAC002C */  sw    $t4, 0x2c($sp)
/* 0040E34C 8D860000 */  lw    $a2, ($t4)
/* 0040E350 50C0003E */  beql  $a2, $zero, .L0040E44C
/* 0040E354 8FAB002C */   lw    $t3, 0x2c($sp)
/* 0040E358 90E40021 */  lbu   $a0, 0x21($a3)
/* 0040E35C 3C010780 */  lui   $at, 0x780
/* 0040E360 3084001F */  andi  $a0, $a0, 0x1f
/* 0040E364 2C8D0020 */  sltiu $t5, $a0, 0x20
/* 0040E368 000D7023 */  negu  $t6, $t5
/* 0040E36C 01C17824 */  and   $t7, $t6, $at
/* 0040E370 008FC004 */  sllv  $t8, $t7, $a0
/* 0040E374 07010021 */  bgez  $t8, .L0040E3FC
/* 0040E378 00000000 */   nop   
/* 0040E37C 04C10010 */  bgez  $a2, .L0040E3C0
/* 0040E380 00000000 */   nop   
/* 0040E384 8F998684 */  lw    $t9, %call16(ivalue)($gp)
/* 0040E388 2405FFFF */  li    $a1, -1
/* 0040E38C AFA70030 */  sw    $a3, 0x30($sp)
/* 0040E390 0320F809 */  jalr  $t9
/* 0040E394 00000000 */   nop   
/* 0040E398 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0040E39C 8FA50030 */  lw    $a1, 0x30($sp)
/* 0040E3A0 24040001 */  li    $a0, 1
/* 0040E3A4 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 0040E3A8 00403025 */  move  $a2, $v0
/* 0040E3AC 0320F809 */  jalr  $t9
/* 0040E3B0 00000000 */   nop   
/* 0040E3B4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0040E3B8 1000001E */  b     .L0040E434
/* 0040E3BC AE020000 */   sw    $v0, ($s0)
.L0040E3C0:
/* 0040E3C0 8F998684 */  lw    $t9, %call16(ivalue)($gp)
/* 0040E3C4 00002825 */  move  $a1, $zero
/* 0040E3C8 AFA70030 */  sw    $a3, 0x30($sp)
/* 0040E3CC 0320F809 */  jalr  $t9
/* 0040E3D0 00000000 */   nop   
/* 0040E3D4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0040E3D8 8FA50030 */  lw    $a1, 0x30($sp)
/* 0040E3DC 24040001 */  li    $a0, 1
/* 0040E3E0 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 0040E3E4 00403025 */  move  $a2, $v0
/* 0040E3E8 0320F809 */  jalr  $t9
/* 0040E3EC 00000000 */   nop   
/* 0040E3F0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0040E3F4 1000000F */  b     .L0040E434
/* 0040E3F8 AE020000 */   sw    $v0, ($s0)
.L0040E3FC:
/* 0040E3FC 8F998684 */  lw    $t9, %call16(ivalue)($gp)
/* 0040E400 93A40043 */  lbu   $a0, 0x43($sp)
/* 0040E404 00002825 */  move  $a1, $zero
/* 0040E408 0320F809 */  jalr  $t9
/* 0040E40C AFA70030 */   sw    $a3, 0x30($sp)
/* 0040E410 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0040E414 8FA50030 */  lw    $a1, 0x30($sp)
/* 0040E418 24040001 */  li    $a0, 1
/* 0040E41C 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 0040E420 00403025 */  move  $a2, $v0
/* 0040E424 0320F809 */  jalr  $t9
/* 0040E428 00000000 */   nop   
/* 0040E42C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0040E430 AE020000 */  sw    $v0, ($s0)
.L0040E434:
/* 0040E434 2639ED34 */  addiu $t9, $s1, -0x12cc
/* 0040E438 03324021 */  addu  $t0, $t9, $s2
/* 0040E43C 8D090000 */  lw    $t1, ($t0)
/* 0040E440 8E0A0000 */  lw    $t2, ($s0)
/* 0040E444 A5490022 */  sh    $t1, 0x22($t2)
.L0040E448:
/* 0040E448 8FAB002C */  lw    $t3, 0x2c($sp)
.L0040E44C:
/* 0040E44C 262CED34 */  addiu $t4, $s1, -0x12cc
/* 0040E450 01926821 */  addu  $t5, $t4, $s2
/* 0040E454 AD600000 */  sw    $zero, ($t3)
/* 0040E458 ADA00000 */  sw    $zero, ($t5)
/* 0040E45C 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0040E460 8FB2001C */  lw    $s2, 0x1c($sp)
/* 0040E464 8FB10018 */  lw    $s1, 0x18($sp)
/* 0040E468 8FB00014 */  lw    $s0, 0x14($sp)
/* 0040E46C 03E00008 */  jr    $ra
/* 0040E470 27BD0048 */   addiu $sp, $sp, 0x48

    .type func_0040E474, @function
func_0040E474:
    # 0040F4C8 build_tree
/* 0040E474 3C1C0FC1 */  .cpload $t9
/* 0040E478 279C15DC */  
/* 0040E47C 0399E021 */  
/* 0040E480 27BDFFA8 */  addiu $sp, $sp, -0x58
/* 0040E484 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0040E488 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0040E48C AFB00014 */  sw    $s0, 0x14($sp)
/* 0040E490 904EEB16 */  lbu   $t6, -0x14ea($v0)
/* 0040E494 00808025 */  move  $s0, $a0
/* 0040E498 00402825 */  move  $a1, $v0
/* 0040E49C 11C00002 */  beqz  $t6, .L0040E4A8
/* 0040E4A0 240F0001 */   li    $t7, 1
/* 0040E4A4 A04FEB15 */  sb    $t7, -0x14eb($v0)
.L0040E4A8:
/* 0040E4A8 100000DC */  b     .L0040E81C
/* 0040E4AC 92020020 */   lbu   $v0, 0x20($s0)
.L0040E4B0:
/* 0040E4B0 8F998A7C */  lw     $t9, %got(first_pmt_offset)($gp)
/* 0040E4B4 8E18002C */  lw    $t8, 0x2c($s0)
/* 0040E4B8 8F390000 */  lw    $t9, ($t9)
/* 0040E4BC 03191023 */  subu  $v0, $t8, $t9
/* 0040E4C0 04410002 */  bgez  $v0, .L0040E4CC
/* 0040E4C4 00000000 */   nop   
/* 0040E4C8 00021023 */  negu  $v0, $v0
.L0040E4CC:
/* 0040E4CC 04410003 */  bgez  $v0, .L0040E4DC
/* 0040E4D0 00026083 */   sra   $t4, $v0, 2
/* 0040E4D4 24410003 */  addiu $at, $v0, 3
/* 0040E4D8 00016083 */  sra   $t4, $at, 2
.L0040E4DC:
/* 0040E4DC 05810002 */  bgez  $t4, .L0040E4E8
/* 0040E4E0 01802025 */   move  $a0, $t4
/* 0040E4E4 24040000 */  li    $a0, 0
.L0040E4E8:
/* 0040E4E8 8E0D0028 */  lw    $t5, 0x28($s0)
/* 0040E4EC 00801825 */  move  $v1, $a0
/* 0040E4F0 00034080 */  sll   $t0, $v1, 2
/* 0040E4F4 004D7021 */  addu  $t6, $v0, $t5
/* 0040E4F8 25CFFFFF */  addiu $t7, $t6, -1
/* 0040E4FC 05E10003 */  bgez  $t7, .L0040E50C
/* 0040E500 000FC083 */   sra   $t8, $t7, 2
/* 0040E504 25E10003 */  addiu $at, $t7, 3
/* 0040E508 0001C083 */  sra   $t8, $at, 2
.L0040E50C:
/* 0040E50C 2B010004 */  slti  $at, $t8, 4
/* 0040E510 14200002 */  bnez  $at, .L0040E51C
/* 0040E514 03004825 */   move  $t1, $t8
/* 0040E518 24090003 */  li    $t1, 3
.L0040E51C:
/* 0040E51C 0124082A */  slt   $at, $t1, $a0
/* 0040E520 142000D3 */  bnez  $at, .L0040E870
/* 0040E524 01034023 */   subu  $t0, $t0, $v1
/* 0040E528 00095880 */  sll   $t3, $t1, 2
/* 0040E52C 01695823 */  subu  $t3, $t3, $t1
/* 0040E530 00084080 */  sll   $t0, $t0, 2
/* 0040E534 24B9EAD8 */  addiu $t9, $a1, -0x1528
/* 0040E538 03281021 */  addu  $v0, $t9, $t0
/* 0040E53C 000B5880 */  sll   $t3, $t3, 2
/* 0040E540 8F8A898C */  lw     $t2, %got(lsb_first)($gp)
.L0040E544:
/* 0040E544 90430000 */  lbu   $v1, ($v0)
/* 0040E548 24040001 */  li    $a0, 1
/* 0040E54C 240501A6 */  li    $a1, 422
/* 0040E550 2C610005 */  sltiu $at, $v1, 5
/* 0040E554 1020006D */  beqz  $at, .L0040E70C
/* 0040E558 24070007 */   li    $a3, 7
/* 0040E55C 8F818038 */  lw    $at, %got(jtbl_10008BE0)($gp)
/* 0040E560 00036080 */  sll   $t4, $v1, 2
/* 0040E564 002C0821 */  addu  $at, $at, $t4
/* 0040E568 8C2C8BE0 */  lw    $t4, %lo(jtbl_10008BE0)($at)
/* 0040E56C 019C6021 */  addu  $t4, $t4, $gp
/* 0040E570 01800008 */  jr    $t4
/* 0040E574 00000000 */   nop   
.L0040E578:
/* 0040E578 920E0021 */  lbu   $t6, 0x21($s0)
/* 0040E57C 8E18002C */  lw    $t8, 0x2c($s0)
/* 0040E580 8E190028 */  lw    $t9, 0x28($s0)
/* 0040E584 96070022 */  lhu   $a3, 0x22($s0)
/* 0040E588 240D0001 */  li    $t5, 1
/* 0040E58C 31CF001F */  andi  $t7, $t6, 0x1f
/* 0040E590 A04D0000 */  sb    $t5, ($v0)
/* 0040E594 A04F0001 */  sb    $t7, 1($v0)
/* 0040E598 AC580004 */  sw    $t8, 4($v0)
/* 0040E59C AC590008 */  sw    $t9, 8($v0)
/* 0040E5A0 1000006A */  b     .L0040E74C
/* 0040E5A4 30E70001 */   andi  $a3, $a3, 1
.L0040E5A8:
/* 0040E5A8 92060021 */  lbu   $a2, 0x21($s0)
/* 0040E5AC 904C0001 */  lbu   $t4, 1($v0)
/* 0040E5B0 96070022 */  lhu   $a3, 0x22($s0)
/* 0040E5B4 30C6001F */  andi  $a2, $a2, 0x1f
/* 0040E5B8 8E040028 */  lw    $a0, 0x28($s0)
/* 0040E5BC 14CC0008 */  bne   $a2, $t4, .L0040E5E0
/* 0040E5C0 30E70001 */   andi  $a3, $a3, 1
/* 0040E5C4 8E0D002C */  lw    $t5, 0x2c($s0)
/* 0040E5C8 8C4E0004 */  lw    $t6, 4($v0)
/* 0040E5CC 55AE0005 */  bnel  $t5, $t6, .L0040E5E4
/* 0040E5D0 91590000 */   lbu   $t9, ($t2)
/* 0040E5D4 8C4F0008 */  lw    $t7, 8($v0)
/* 0040E5D8 108F005C */  beq   $a0, $t7, .L0040E74C
/* 0040E5DC 00000000 */   nop   
.L0040E5E0:
/* 0040E5E0 91590000 */  lbu   $t9, ($t2)
.L0040E5E4:
/* 0040E5E4 24180002 */  li    $t8, 2
/* 0040E5E8 A0580000 */  sb    $t8, ($v0)
/* 0040E5EC 53200009 */  beql  $t9, $zero, .L0040E614
/* 0040E5F0 8E03002C */   lw    $v1, 0x2c($s0)
/* 0040E5F4 8C4C0008 */  lw    $t4, 8($v0)
/* 0040E5F8 008C082A */  slt   $at, $a0, $t4
/* 0040E5FC 10200002 */  beqz  $at, .L0040E608
/* 0040E600 00000000 */   nop   
/* 0040E604 00806025 */  move  $t4, $a0
.L0040E608:
/* 0040E608 1000000B */  b     .L0040E638
/* 0040E60C AC4C0008 */   sw    $t4, 8($v0)
/* 0040E610 8E03002C */  lw    $v1, 0x2c($s0)
.L0040E614:
/* 0040E614 8C4E0008 */  lw    $t6, 8($v0)
/* 0040E618 8C4F0004 */  lw    $t7, 4($v0)
/* 0040E61C 00836821 */  addu  $t5, $a0, $v1
/* 0040E620 01CFC021 */  addu  $t8, $t6, $t7
/* 0040E624 01B8082A */  slt   $at, $t5, $t8
/* 0040E628 50200004 */  beql  $at, $zero, .L0040E63C
/* 0040E62C 2CD90020 */   sltiu $t9, $a2, 0x20
/* 0040E630 AC440008 */  sw    $a0, 8($v0)
/* 0040E634 AC430004 */  sw    $v1, 4($v0)
.L0040E638:
/* 0040E638 2CD90020 */  sltiu $t9, $a2, 0x20
.L0040E63C:
/* 0040E63C 00196023 */  negu  $t4, $t9
/* 0040E640 3C010280 */  lui   $at, 0x280
/* 0040E644 01817024 */  and   $t6, $t4, $at
/* 0040E648 00CE7804 */  sllv  $t7, $t6, $a2
/* 0040E64C 05E0003F */  bltz  $t7, .L0040E74C
/* 0040E650 00000000 */   nop   
/* 0040E654 1000003D */  b     .L0040E74C
/* 0040E658 A0460001 */   sb    $a2, 1($v0)
.L0040E65C:
/* 0040E65C 92060021 */  lbu   $a2, 0x21($s0)
/* 0040E660 904D0001 */  lbu   $t5, 1($v0)
/* 0040E664 96070022 */  lhu   $a3, 0x22($s0)
/* 0040E668 30C6001F */  andi  $a2, $a2, 0x1f
/* 0040E66C 8E040028 */  lw    $a0, 0x28($s0)
/* 0040E670 14CD0008 */  bne   $a2, $t5, .L0040E694
/* 0040E674 30E70001 */   andi  $a3, $a3, 1
/* 0040E678 8E18002C */  lw    $t8, 0x2c($s0)
/* 0040E67C 8C590004 */  lw    $t9, 4($v0)
/* 0040E680 57190005 */  bnel  $t8, $t9, .L0040E698
/* 0040E684 914E0000 */   lbu   $t6, ($t2)
/* 0040E688 8C4C0008 */  lw    $t4, 8($v0)
/* 0040E68C 108C002F */  beq   $a0, $t4, .L0040E74C
/* 0040E690 00000000 */   nop   
.L0040E694:
/* 0040E694 914E0000 */  lbu   $t6, ($t2)
.L0040E698:
/* 0040E698 8C450008 */  lw    $a1, 8($v0)
/* 0040E69C 2CCC0020 */  sltiu $t4, $a2, 0x20
/* 0040E6A0 11C00006 */  beqz  $t6, .L0040E6BC
/* 0040E6A4 0085082A */   slt   $at, $a0, $a1
/* 0040E6A8 10200002 */  beqz  $at, .L0040E6B4
/* 0040E6AC 00A07825 */   move  $t7, $a1
/* 0040E6B0 00807825 */  move  $t7, $a0
.L0040E6B4:
/* 0040E6B4 1000000A */  b     .L0040E6E0
/* 0040E6B8 AC4F0008 */   sw    $t7, 8($v0)
.L0040E6BC:
/* 0040E6BC 8E03002C */  lw    $v1, 0x2c($s0)
/* 0040E6C0 8C580004 */  lw    $t8, 4($v0)
/* 0040E6C4 00836821 */  addu  $t5, $a0, $v1
/* 0040E6C8 00B8C821 */  addu  $t9, $a1, $t8
/* 0040E6CC 01B9082A */  slt   $at, $t5, $t9
/* 0040E6D0 50200004 */  beql  $at, $zero, .L0040E6E4
/* 0040E6D4 000C7023 */   negu  $t6, $t4
/* 0040E6D8 AC440008 */  sw    $a0, 8($v0)
/* 0040E6DC AC430004 */  sw    $v1, 4($v0)
.L0040E6E0:
/* 0040E6E0 000C7023 */  negu  $t6, $t4
.L0040E6E4:
/* 0040E6E4 3C010280 */  lui   $at, 0x280
/* 0040E6E8 01C17824 */  and   $t7, $t6, $at
/* 0040E6EC 00CFC004 */  sllv  $t8, $t7, $a2
/* 0040E6F0 07000016 */  bltz  $t8, .L0040E74C
/* 0040E6F4 00000000 */   nop   
/* 0040E6F8 10000014 */  b     .L0040E74C
/* 0040E6FC A0460001 */   sb    $a2, 1($v0)
.L0040E700:
/* 0040E700 96070022 */  lhu   $a3, 0x22($s0)
/* 0040E704 10000011 */  b     .L0040E74C
/* 0040E708 30E70001 */   andi  $a3, $a3, 1
.L0040E70C:
/* 0040E70C 8F998808 */  lw    $t9, %call16(caseerror)($gp)
/* 0040E710 8F868038 */  lw    $a2, %got(RO_10008BD7)($gp)
/* 0040E714 AFA20034 */  sw    $v0, 0x34($sp)
/* 0040E718 AFA80038 */  sw    $t0, 0x38($sp)
/* 0040E71C AFA9004C */  sw    $t1, 0x4c($sp)
/* 0040E720 AFAB0024 */  sw    $t3, 0x24($sp)
/* 0040E724 0320F809 */  jalr  $t9
/* 0040E728 24C68BD7 */   addiu $a2, %lo(RO_10008BD7) # addiu $a2, $a2, -0x7429
/* 0040E72C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0040E730 96070022 */  lhu   $a3, 0x22($s0)
/* 0040E734 8FA20034 */  lw    $v0, 0x34($sp)
/* 0040E738 8FA80038 */  lw    $t0, 0x38($sp)
/* 0040E73C 8FA9004C */  lw    $t1, 0x4c($sp)
/* 0040E740 8FAB0024 */  lw    $t3, 0x24($sp)
/* 0040E744 8F8A898C */  lw     $t2, %got(lsb_first)($gp)
/* 0040E748 30E70001 */  andi  $a3, $a3, 1
.L0040E74C:
/* 0040E74C 10E00003 */  beqz  $a3, .L0040E75C
/* 0040E750 2508000C */   addiu $t0, $t0, 0xc
/* 0040E754 240D0004 */  li    $t5, 4
/* 0040E758 A04D0000 */  sb    $t5, ($v0)
.L0040E75C:
/* 0040E75C 0168082A */  slt   $at, $t3, $t0
/* 0040E760 1020FF78 */  beqz  $at, .L0040E544
/* 0040E764 2442000C */   addiu $v0, $v0, 0xc
/* 0040E768 10000042 */  b     .L0040E874
/* 0040E76C 8FBF001C */   lw    $ra, 0x1c($sp)
.L0040E770:
/* 0040E770 8F8C8A7C */  lw     $t4, %got(first_pmt_offset)($gp)
/* 0040E774 8E190030 */  lw    $t9, 0x30($s0)
/* 0040E778 8D8C0000 */  lw    $t4, ($t4)
/* 0040E77C 032C1023 */  subu  $v0, $t9, $t4
/* 0040E780 04410002 */  bgez  $v0, .L0040E78C
/* 0040E784 24ACEAD8 */   addiu $t4, $a1, -0x1528
/* 0040E788 00021023 */  negu  $v0, $v0
.L0040E78C:
/* 0040E78C 04410003 */  bgez  $v0, .L0040E79C
/* 0040E790 00027083 */   sra   $t6, $v0, 2
/* 0040E794 24410003 */  addiu $at, $v0, 3
/* 0040E798 00017083 */  sra   $t6, $at, 2
.L0040E79C:
/* 0040E79C 05C10002 */  bgez  $t6, .L0040E7A8
/* 0040E7A0 01C02025 */   move  $a0, $t6
/* 0040E7A4 24040000 */  li    $a0, 0
.L0040E7A8:
/* 0040E7A8 8E0F0028 */  lw    $t7, 0x28($s0)
/* 0040E7AC 00801825 */  move  $v1, $a0
/* 0040E7B0 00037080 */  sll   $t6, $v1, 2
/* 0040E7B4 004FC021 */  addu  $t8, $v0, $t7
/* 0040E7B8 270DFFFF */  addiu $t5, $t8, -1
/* 0040E7BC 05A10003 */  bgez  $t5, .L0040E7CC
/* 0040E7C0 000DC883 */   sra   $t9, $t5, 2
/* 0040E7C4 25A10003 */  addiu $at, $t5, 3
/* 0040E7C8 0001C883 */  sra   $t9, $at, 2
.L0040E7CC:
/* 0040E7CC 2B210004 */  slti  $at, $t9, 4
/* 0040E7D0 14200002 */  bnez  $at, .L0040E7DC
/* 0040E7D4 03204825 */   move  $t1, $t9
/* 0040E7D8 24090003 */  li    $t1, 3
.L0040E7DC:
/* 0040E7DC 0124082A */  slt   $at, $t1, $a0
/* 0040E7E0 14200023 */  bnez  $at, .L0040E870
/* 0040E7E4 01C37023 */   subu  $t6, $t6, $v1
/* 0040E7E8 92060021 */  lbu   $a2, 0x21($s0)
/* 0040E7EC 000E7080 */  sll   $t6, $t6, 2
/* 0040E7F0 018E1021 */  addu  $v0, $t4, $t6
/* 0040E7F4 24040003 */  li    $a0, 3
/* 0040E7F8 30C6001F */  andi  $a2, $a2, 0x1f
.L0040E7FC:
/* 0040E7FC 24630001 */  addiu $v1, $v1, 1
/* 0040E800 0123082A */  slt   $at, $t1, $v1
/* 0040E804 A0440000 */  sb    $a0, ($v0)
/* 0040E808 A0460001 */  sb    $a2, 1($v0)
/* 0040E80C 1020FFFB */  beqz  $at, .L0040E7FC
/* 0040E810 2442000C */   addiu $v0, $v0, 0xc
/* 0040E814 10000017 */  b     .L0040E874
/* 0040E818 8FBF001C */   lw    $ra, 0x1c($sp)
.L0040E81C:
/* 0040E81C 2C410053 */  sltiu $at, $v0, 0x53
/* 0040E820 14200006 */  bnez  $at, .L0040E83C
/* 0040E824 24040001 */   li    $a0, 1
/* 0040E828 2401007B */  li    $at, 123
/* 0040E82C 1041FF20 */  beq   $v0, $at, .L0040E4B0
/* 0040E830 00000000 */   nop   
/* 0040E834 10000007 */  b     .L0040E854
/* 0040E838 00000000 */   nop   
.L0040E83C:
/* 0040E83C 24010047 */  li    $at, 71
/* 0040E840 1041FFCB */  beq   $v0, $at, .L0040E770
/* 0040E844 00000000 */   nop   
/* 0040E848 24010052 */  li    $at, 82
/* 0040E84C 1041FF18 */  beq   $v0, $at, .L0040E4B0
/* 0040E850 00000000 */   nop   
.L0040E854:
/* 0040E854 8F998808 */  lw    $t9, %call16(caseerror)($gp)
/* 0040E858 8F868038 */  lw    $a2, %got(RO_10008BD0)($gp)
/* 0040E85C 2405019F */  li    $a1, 415
/* 0040E860 24070007 */  li    $a3, 7
/* 0040E864 0320F809 */  jalr  $t9
/* 0040E868 24C68BD0 */   addiu $a2, %lo(RO_10008BD0) # addiu $a2, $a2, -0x7430
/* 0040E86C 8FBC0018 */  lw    $gp, 0x18($sp)
.L0040E870:
/* 0040E870 8FBF001C */  lw    $ra, 0x1c($sp)
.L0040E874:
/* 0040E874 8FB00014 */  lw    $s0, 0x14($sp)
/* 0040E878 27BD0058 */  addiu $sp, $sp, 0x58
/* 0040E87C 03E00008 */  jr    $ra
/* 0040E880 00000000 */   nop   

    .type func_0040E884, @function
func_0040E884:
    # 0040EED4 func_0040EED4
/* 0040E884 3C1C0FC1 */  .cpload $t9
/* 0040E888 279C11CC */  
/* 0040E88C 0399E021 */  
/* 0040E890 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0040E894 8F8F8A7C */  lw     $t7, %got(first_pmt_offset)($gp)
/* 0040E898 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0040E89C AFBC0018 */  sw    $gp, 0x18($sp)
/* 0040E8A0 AFA40028 */  sw    $a0, 0x28($sp)
/* 0040E8A4 8C88002C */  lw    $t0, 0x2c($a0)
/* 0040E8A8 8DEF0000 */  lw    $t7, ($t7)
/* 0040E8AC 00405825 */  move  $t3, $v0
/* 0040E8B0 00807025 */  move  $t6, $a0
/* 0040E8B4 010F1823 */  subu  $v1, $t0, $t7
/* 0040E8B8 04630003 */  bgezl $v1, .L0040E8C8
/* 0040E8BC 8DC90028 */   lw    $t1, 0x28($t6)
/* 0040E8C0 00031823 */  negu  $v1, $v1
/* 0040E8C4 8DC90028 */  lw    $t1, 0x28($t6)
.L0040E8C8:
/* 0040E8C8 00693821 */  addu  $a3, $v1, $t1
/* 0040E8CC 24E7FFFF */  addiu $a3, $a3, -1
/* 0040E8D0 04E10002 */  bgez  $a3, .L0040E8DC
/* 0040E8D4 00E00821 */   move  $at, $a3
/* 0040E8D8 24E10003 */  addiu $at, $a3, 3
.L0040E8DC:
/* 0040E8DC 00013883 */  sra   $a3, $at, 2
/* 0040E8E0 04610003 */  bgez  $v1, .L0040E8F0
/* 0040E8E4 00032883 */   sra   $a1, $v1, 2
/* 0040E8E8 24610003 */  addiu $at, $v1, 3
/* 0040E8EC 00012883 */  sra   $a1, $at, 2
.L0040E8F0:
/* 0040E8F0 04A00003 */  bltz  $a1, .L0040E900
/* 0040E8F4 28E10004 */   slti  $at, $a3, 4
/* 0040E8F8 14200003 */  bnez  $at, .L0040E908
/* 0040E8FC 240C000C */   li    $t4, 12
.L0040E900:
/* 0040E900 100000D0 */  b     .L0040EC44
/* 0040E904 00001025 */   move  $v0, $zero
.L0040E908:
/* 0040E908 00AC0019 */  multu $a1, $t4
/* 0040E90C 2564EAD8 */  addiu $a0, $t3, -0x1528
/* 0040E910 24010004 */  li    $at, 4
/* 0040E914 0000C012 */  mflo  $t8
/* 0040E918 00981821 */  addu  $v1, $a0, $t8
/* 0040E91C 906A0000 */  lbu   $t2, ($v1)
/* 0040E920 55410004 */  bnel  $t2, $at, .L0040E934
/* 0040E924 8FB90028 */   lw    $t9, 0x28($sp)
/* 0040E928 100000C6 */  b     .L0040EC44
/* 0040E92C 00001025 */   move  $v0, $zero
/* 0040E930 8FB90028 */  lw    $t9, 0x28($sp)
.L0040E934:
/* 0040E934 93260021 */  lbu   $a2, 0x21($t9)
/* 0040E938 30C6001F */  andi  $a2, $a2, 0x1f
/* 0040E93C 30C200FF */  andi  $v0, $a2, 0xff
/* 0040E940 2C410010 */  sltiu $at, $v0, 0x10
/* 0040E944 1020006B */  beqz  $at, .L0040EAF4
/* 0040E948 00000000 */   nop   
/* 0040E94C 8F818038 */  lw    $at, %got(jtbl_10008BF4)($gp)
/* 0040E950 00026880 */  sll   $t5, $v0, 2
/* 0040E954 002D0821 */  addu  $at, $at, $t5
/* 0040E958 8C2D8BF4 */  lw    $t5, %lo(jtbl_10008BF4)($at)
/* 0040E95C 01BC6821 */  addu  $t5, $t5, $gp
/* 0040E960 01A00008 */  jr    $t5
/* 0040E964 00000000 */   nop   
.L0040E968:
/* 0040E968 50A70004 */  beql  $a1, $a3, .L0040E97C
/* 0040E96C 8C640008 */   lw    $a0, 8($v1)
/* 0040E970 100000B4 */  b     .L0040EC44
/* 0040E974 00001025 */   move  $v0, $zero
/* 0040E978 8C640008 */  lw    $a0, 8($v1)
.L0040E97C:
/* 0040E97C 24010004 */  li    $at, 4
/* 0040E980 1081001A */  beq   $a0, $at, .L0040E9EC
/* 0040E984 00802825 */   move  $a1, $a0
/* 0040E988 916FEB33 */  lbu   $t7, -0x14cd($t3)
/* 0040E98C 55E00018 */  bnel  $t7, $zero, .L0040E9F0
/* 0040E990 24010003 */   li    $at, 3
/* 0040E994 8F8E898C */  lw     $t6, %got(lsb_first)($gp)
/* 0040E998 91CE0000 */  lbu   $t6, ($t6)
/* 0040E99C 51C00009 */  beql  $t6, $zero, .L0040E9C4
/* 0040E9A0 8C620004 */   lw    $v0, 4($v1)
/* 0040E9A4 8C620004 */  lw    $v0, 4($v1)
/* 0040E9A8 15020003 */  bne   $t0, $v0, .L0040E9B8
/* 0040E9AC 00000000 */   nop   
/* 0040E9B0 5125000B */  beql  $t1, $a1, .L0040E9E0
/* 0040E9B4 8FAD0028 */   lw    $t5, 0x28($sp)
.L0040E9B8:
/* 0040E9B8 100000A2 */  b     .L0040EC44
/* 0040E9BC 00001025 */   move  $v0, $zero
/* 0040E9C0 8C620004 */  lw    $v0, 4($v1)
.L0040E9C4:
/* 0040E9C4 0109C021 */  addu  $t8, $t0, $t1
/* 0040E9C8 0044C821 */  addu  $t9, $v0, $a0
/* 0040E9CC 53190004 */  beql  $t8, $t9, .L0040E9E0
/* 0040E9D0 8FAD0028 */   lw    $t5, 0x28($sp)
/* 0040E9D4 1000009B */  b     .L0040EC44
/* 0040E9D8 00001025 */   move  $v0, $zero
/* 0040E9DC 8FAD0028 */  lw    $t5, 0x28($sp)
.L0040E9E0:
/* 0040E9E0 ADA2002C */  sw    $v0, 0x2c($t5)
/* 0040E9E4 8FAF0028 */  lw    $t7, 0x28($sp)
/* 0040E9E8 ADE50028 */  sw    $a1, 0x28($t7)
.L0040E9EC:
/* 0040E9EC 24010003 */  li    $at, 3
.L0040E9F0:
/* 0040E9F0 15410042 */  bne   $t2, $at, .L0040EAFC
/* 0040E9F4 00000000 */   nop   
/* 0040E9F8 10000092 */  b     .L0040EC44
/* 0040E9FC 00001025 */   move  $v0, $zero
.L0040EA00:
/* 0040EA00 54A7000B */  bnel  $a1, $a3, .L0040EA30
/* 0040EA04 916DEB33 */   lbu   $t5, -0x14cd($t3)
/* 0040EA08 906E0001 */  lbu   $t6, 1($v1)
/* 0040EA0C 54CE0008 */  bnel  $a2, $t6, .L0040EA30
/* 0040EA10 916DEB33 */   lbu   $t5, -0x14cd($t3)
/* 0040EA14 8C780004 */  lw    $t8, 4($v1)
/* 0040EA18 55180005 */  bnel  $t0, $t8, .L0040EA30
/* 0040EA1C 916DEB33 */   lbu   $t5, -0x14cd($t3)
/* 0040EA20 8C790008 */  lw    $t9, 8($v1)
/* 0040EA24 51390007 */  beql  $t1, $t9, .L0040EA44
/* 0040EA28 24010003 */   li    $at, 3
/* 0040EA2C 916DEB33 */  lbu   $t5, -0x14cd($t3)
.L0040EA30:
/* 0040EA30 55A00004 */  bnel  $t5, $zero, .L0040EA44
/* 0040EA34 24010003 */   li    $at, 3
/* 0040EA38 10000082 */  b     .L0040EC44
/* 0040EA3C 00001025 */   move  $v0, $zero
/* 0040EA40 24010003 */  li    $at, 3
.L0040EA44:
/* 0040EA44 1541002D */  bne   $t2, $at, .L0040EAFC
/* 0040EA48 00000000 */   nop   
/* 0040EA4C 1000007D */  b     .L0040EC44
/* 0040EA50 00001025 */   move  $v0, $zero
.L0040EA54:
/* 0040EA54 24AF0001 */  addiu $t7, $a1, 1
/* 0040EA58 55E7001D */  bnel  $t7, $a3, .L0040EAD0
/* 0040EA5C 916DEB33 */   lbu   $t5, -0x14cd($t3)
/* 0040EA60 906E0001 */  lbu   $t6, 1($v1)
/* 0040EA64 2405000C */  li    $a1, 12
/* 0040EA68 54AE0019 */  bnel  $a1, $t6, .L0040EAD0
/* 0040EA6C 916DEB33 */   lbu   $t5, -0x14cd($t3)
/* 0040EA70 8C780004 */  lw    $t8, 4($v1)
/* 0040EA74 55180016 */  bnel  $t0, $t8, .L0040EAD0
/* 0040EA78 916DEB33 */   lbu   $t5, -0x14cd($t3)
/* 0040EA7C 8C790008 */  lw    $t9, 8($v1)
/* 0040EA80 24060008 */  li    $a2, 8
/* 0040EA84 54D90012 */  bnel  $a2, $t9, .L0040EAD0
/* 0040EA88 916DEB33 */   lbu   $t5, -0x14cd($t3)
/* 0040EA8C 00EC0019 */  multu $a3, $t4
/* 0040EA90 24010002 */  li    $at, 2
/* 0040EA94 00006812 */  mflo  $t5
/* 0040EA98 008D1021 */  addu  $v0, $a0, $t5
/* 0040EA9C 904F0000 */  lbu   $t7, ($v0)
/* 0040EAA0 51E1000B */  beql  $t7, $at, .L0040EAD0
/* 0040EAA4 916DEB33 */   lbu   $t5, -0x14cd($t3)
/* 0040EAA8 904E0001 */  lbu   $t6, 1($v0)
/* 0040EAAC 54AE0008 */  bnel  $a1, $t6, .L0040EAD0
/* 0040EAB0 916DEB33 */   lbu   $t5, -0x14cd($t3)
/* 0040EAB4 8C580004 */  lw    $t8, 4($v0)
/* 0040EAB8 55180005 */  bnel  $t0, $t8, .L0040EAD0
/* 0040EABC 916DEB33 */   lbu   $t5, -0x14cd($t3)
/* 0040EAC0 8C590008 */  lw    $t9, 8($v0)
/* 0040EAC4 50D90007 */  beql  $a2, $t9, .L0040EAE4
/* 0040EAC8 24010003 */   li    $at, 3
/* 0040EACC 916DEB33 */  lbu   $t5, -0x14cd($t3)
.L0040EAD0:
/* 0040EAD0 55A00004 */  bnel  $t5, $zero, .L0040EAE4
/* 0040EAD4 24010003 */   li    $at, 3
/* 0040EAD8 1000005A */  b     .L0040EC44
/* 0040EADC 00001025 */   move  $v0, $zero
/* 0040EAE0 24010003 */  li    $at, 3
.L0040EAE4:
/* 0040EAE4 15410005 */  bne   $t2, $at, .L0040EAFC
/* 0040EAE8 00000000 */   nop   
/* 0040EAEC 10000055 */  b     .L0040EC44
/* 0040EAF0 00001025 */   move  $v0, $zero
.L0040EAF4:
/* 0040EAF4 10000053 */  b     .L0040EC44
/* 0040EAF8 00001025 */   move  $v0, $zero
.L0040EAFC:
/* 0040EAFC 8F998480 */  lw    $t9, %call16(parm_reg)($gp)
/* 0040EB00 8FA40028 */  lw    $a0, 0x28($sp)
/* 0040EB04 AFAB0024 */  sw    $t3, 0x24($sp)
/* 0040EB08 0320F809 */  jalr  $t9
/* 0040EB0C 00000000 */   nop   
/* 0040EB10 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0040EB14 8FA50028 */  lw    $a1, 0x28($sp)
/* 0040EB18 8FAB0024 */  lw    $t3, 0x24($sp)
/* 0040EB1C 8F8489DC */  lw     $a0, %got(basicint)($gp)
/* 0040EB20 90840000 */  lbu   $a0, ($a0)
/* 0040EB24 2C830001 */  sltiu $v1, $a0, 1
/* 0040EB28 10600009 */  beqz  $v1, .L0040EB50
/* 0040EB2C 00000000 */   nop   
/* 0040EB30 90AF0021 */  lbu   $t7, 0x21($a1)
/* 0040EB34 3C01BA80 */  lui   $at, 0xba80
/* 0040EB38 31EE001F */  andi  $t6, $t7, 0x1f
/* 0040EB3C 2DD80020 */  sltiu $t8, $t6, 0x20
/* 0040EB40 0018C823 */  negu  $t9, $t8
/* 0040EB44 03216824 */  and   $t5, $t9, $at
/* 0040EB48 01CD1804 */  sllv  $v1, $t5, $t6
/* 0040EB4C 28630000 */  slti  $v1, $v1, 0
.L0040EB50:
/* 0040EB50 5460003C */  bnel  $v1, $zero, .L0040EC44
/* 0040EB54 00601025 */   move  $v0, $v1
/* 0040EB58 38830001 */  xori  $v1, $a0, 1
/* 0040EB5C 2C630001 */  sltiu $v1, $v1, 1
/* 0040EB60 10600009 */  beqz  $v1, .L0040EB88
/* 0040EB64 00000000 */   nop   
/* 0040EB68 90AF0021 */  lbu   $t7, 0x21($a1)
/* 0040EB6C 3C013D01 */  lui   $at, 0x3d01
/* 0040EB70 31F8001F */  andi  $t8, $t7, 0x1f
/* 0040EB74 2F190020 */  sltiu $t9, $t8, 0x20
/* 0040EB78 00196823 */  negu  $t5, $t9
/* 0040EB7C 01A17024 */  and   $t6, $t5, $at
/* 0040EB80 030E1804 */  sllv  $v1, $t6, $t8
/* 0040EB84 28630000 */  slti  $v1, $v1, 0
.L0040EB88:
/* 0040EB88 5460002E */  bnel  $v1, $zero, .L0040EC44
/* 0040EB8C 00601025 */   move  $v0, $v1
/* 0040EB90 90A60021 */  lbu   $a2, 0x21($a1)
/* 0040EB94 30C6001F */  andi  $a2, $a2, 0x1f
/* 0040EB98 38C30009 */  xori  $v1, $a2, 9
/* 0040EB9C 2C630001 */  sltiu $v1, $v1, 1
/* 0040EBA0 10600006 */  beqz  $v1, .L0040EBBC
/* 0040EBA4 00000000 */   nop   
/* 0040EBA8 8F8F8A2C */  lw     $t7, %got(unitsperaddr)($gp)
/* 0040EBAC 8CB90028 */  lw    $t9, 0x28($a1)
/* 0040EBB0 8DEF0000 */  lw    $t7, ($t7)
/* 0040EBB4 01F91826 */  xor   $v1, $t7, $t9
/* 0040EBB8 2C630001 */  sltiu $v1, $v1, 1
.L0040EBBC:
/* 0040EBBC 54600021 */  bnel  $v1, $zero, .L0040EC44
/* 0040EBC0 00601025 */   move  $v0, $v1
/* 0040EBC4 38C3000E */  xori  $v1, $a2, 0xe
/* 0040EBC8 2C630001 */  sltiu $v1, $v1, 1
/* 0040EBCC 10600006 */  beqz  $v1, .L0040EBE8
/* 0040EBD0 00000000 */   nop   
/* 0040EBD4 8F8D8A2C */  lw     $t5, %got(unitsperaddr)($gp)
/* 0040EBD8 8CAE0028 */  lw    $t6, 0x28($a1)
/* 0040EBDC 8DAD0000 */  lw    $t5, ($t5)
/* 0040EBE0 01AE182A */  slt   $v1, $t5, $t6
/* 0040EBE4 38630001 */  xori  $v1, $v1, 1
.L0040EBE8:
/* 0040EBE8 54600016 */  bnel  $v1, $zero, .L0040EC44
/* 0040EBEC 00601025 */   move  $v0, $v1
/* 0040EBF0 9163EB33 */  lbu   $v1, -0x14cd($t3)
/* 0040EBF4 2CD80020 */  sltiu $t8, $a2, 0x20
/* 0040EBF8 00187823 */  negu  $t7, $t8
/* 0040EBFC 14600010 */  bnez  $v1, .L0040EC40
/* 0040EC00 3C01000C */   lui   $at, 0xc
/* 0040EC04 34218000 */  ori   $at, $at, 0x8000
/* 0040EC08 01E1C824 */  and   $t9, $t7, $at
/* 0040EC0C 00D91804 */  sllv  $v1, $t9, $a2
/* 0040EC10 28630000 */  slti  $v1, $v1, 0
/* 0040EC14 1060000A */  beqz  $v1, .L0040EC40
/* 0040EC18 2C44002C */   sltiu $a0, $v0, 0x2c
/* 0040EC1C 38830001 */  xori  $v1, $a0, 1
/* 0040EC20 50600008 */  beql  $v1, $zero, .L0040EC44
/* 0040EC24 00601025 */   move  $v0, $v1
/* 0040EC28 8F8D8A00 */  lw     $t5, %got(n_fp_parm_regs)($gp)
/* 0040EC2C 8DAD0000 */  lw    $t5, ($t5)
/* 0040EC30 000D7040 */  sll   $t6, $t5, 1
/* 0040EC34 25D8002A */  addiu $t8, $t6, 0x2a
/* 0040EC38 0302182B */  sltu  $v1, $t8, $v0
/* 0040EC3C 38630001 */  xori  $v1, $v1, 1
.L0040EC40:
/* 0040EC40 00601025 */  move  $v0, $v1
.L0040EC44:
/* 0040EC44 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0040EC48 27BD0028 */  addiu $sp, $sp, 0x28
/* 0040EC4C 03E00008 */  jr    $ra
/* 0040EC50 00000000 */   nop   

    .type func_0040EC54, @function
func_0040EC54:
    # 0040EED4 func_0040EED4
    # 0040F4C8 build_tree
/* 0040EC54 3C1C0FC1 */  .cpload $t9
/* 0040EC58 279C0DFC */  
/* 0040EC5C 0399E021 */  
/* 0040EC60 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 0040EC64 AFBF0024 */  sw    $ra, 0x24($sp)
/* 0040EC68 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0040EC6C AFB1001C */  sw    $s1, 0x1c($sp)
/* 0040EC70 AFB00018 */  sw    $s0, 0x18($sp)
/* 0040EC74 AFA20034 */  sw    $v0, 0x34($sp)
/* 0040EC78 8C45EB6C */  lw    $a1, -0x1494($v0)
/* 0040EC7C 00808825 */  move  $s1, $a0
/* 0040EC80 54A00004 */  bnel  $a1, $zero, .L0040EC94
/* 0040EC84 922F0021 */   lbu   $t7, 0x21($s1)
/* 0040EC88 1000008D */  b     .L0040EEC0
/* 0040EC8C AC44EB6C */   sw    $a0, -0x1494($v0)
/* 0040EC90 922F0021 */  lbu   $t7, 0x21($s1)
.L0040EC94:
/* 0040EC94 24030002 */  li    $v1, 2
/* 0040EC98 00003025 */  move  $a2, $zero
/* 0040EC9C 000FC600 */  sll   $t8, $t7, 0x18
/* 0040ECA0 0018CF42 */  srl   $t9, $t8, 0x1d
/* 0040ECA4 14790035 */  bne   $v1, $t9, .L0040ED7C
/* 0040ECA8 00A08025 */   move  $s0, $a1
/* 0040ECAC 10A0007E */  beqz  $a1, .L0040EEA8
/* 0040ECB0 00000000 */   nop   
/* 0040ECB4 90A80021 */  lbu   $t0, 0x21($a1)
/* 0040ECB8 00084E00 */  sll   $t1, $t0, 0x18
/* 0040ECBC 00095742 */  srl   $t2, $t1, 0x1d
/* 0040ECC0 146A0079 */  bne   $v1, $t2, .L0040EEA8
/* 0040ECC4 00000000 */   nop   
.L0040ECC8:
/* 0040ECC8 8F998600 */  lw    $t9, %call16(overlap)($gp)
/* 0040ECCC 02202025 */  move  $a0, $s1
/* 0040ECD0 02002825 */  move  $a1, $s0
/* 0040ECD4 0320F809 */  jalr  $t9
/* 0040ECD8 AFA6002C */   sw    $a2, 0x2c($sp)
/* 0040ECDC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0040ECE0 24030002 */  li    $v1, 2
/* 0040ECE4 1040000A */  beqz  $v0, .L0040ED10
/* 0040ECE8 8FA6002C */   lw    $a2, 0x2c($sp)
/* 0040ECEC 8E0B0030 */  lw    $t3, 0x30($s0)
/* 0040ECF0 2403FFFF */  li    $v1, -1
/* 0040ECF4 546B0073 */  bnel  $v1, $t3, .L0040EEC4
/* 0040ECF8 8FBF0024 */   lw    $ra, 0x24($sp)
/* 0040ECFC 8E220030 */  lw    $v0, 0x30($s1)
/* 0040ED00 50620070 */  beql  $v1, $v0, .L0040EEC4
/* 0040ED04 8FBF0024 */   lw    $ra, 0x24($sp)
/* 0040ED08 1000006D */  b     .L0040EEC0
/* 0040ED0C AE020030 */   sw    $v0, 0x30($s0)
.L0040ED10:
/* 0040ED10 8F8C8A74 */  lw     $t4, %got(reversed_stack)($gp)
/* 0040ED14 918C0000 */  lbu   $t4, ($t4)
/* 0040ED18 51800009 */  beql  $t4, $zero, .L0040ED40
/* 0040ED1C 8E2F002C */   lw    $t7, 0x2c($s1)
/* 0040ED20 8E0D002C */  lw    $t5, 0x2c($s0)
/* 0040ED24 8E2E002C */  lw    $t6, 0x2c($s1)
/* 0040ED28 01AE082A */  slt   $at, $t5, $t6
/* 0040ED2C 50200009 */  beql  $at, $zero, .L0040ED54
/* 0040ED30 02003025 */   move  $a2, $s0
/* 0040ED34 1000005C */  b     .L0040EEA8
/* 0040ED38 00000000 */   nop   
/* 0040ED3C 8E2F002C */  lw    $t7, 0x2c($s1)
.L0040ED40:
/* 0040ED40 8E18002C */  lw    $t8, 0x2c($s0)
/* 0040ED44 01F8082A */  slt   $at, $t7, $t8
/* 0040ED48 14200057 */  bnez  $at, .L0040EEA8
/* 0040ED4C 00000000 */   nop   
/* 0040ED50 02003025 */  move  $a2, $s0
.L0040ED54:
/* 0040ED54 8E100008 */  lw    $s0, 8($s0)
/* 0040ED58 12000053 */  beqz  $s0, .L0040EEA8
/* 0040ED5C 00000000 */   nop   
/* 0040ED60 92190021 */  lbu   $t9, 0x21($s0)
/* 0040ED64 00194600 */  sll   $t0, $t9, 0x18
/* 0040ED68 00084F42 */  srl   $t1, $t0, 0x1d
/* 0040ED6C 1069FFD6 */  beq   $v1, $t1, .L0040ECC8
/* 0040ED70 00000000 */   nop   
/* 0040ED74 1000004C */  b     .L0040EEA8
/* 0040ED78 00000000 */   nop   
.L0040ED7C:
/* 0040ED7C 10A0000F */  beqz  $a1, .L0040EDBC
/* 0040ED80 00000000 */   nop   
/* 0040ED84 90AA0021 */  lbu   $t2, 0x21($a1)
/* 0040ED88 000A5E00 */  sll   $t3, $t2, 0x18
/* 0040ED8C 000B6742 */  srl   $t4, $t3, 0x1d
/* 0040ED90 146C000A */  bne   $v1, $t4, .L0040EDBC
/* 0040ED94 00000000 */   nop   
/* 0040ED98 02003025 */  move  $a2, $s0
.L0040ED9C:
/* 0040ED9C 8E100008 */  lw    $s0, 8($s0)
/* 0040EDA0 12000006 */  beqz  $s0, .L0040EDBC
/* 0040EDA4 00000000 */   nop   
/* 0040EDA8 920D0021 */  lbu   $t5, 0x21($s0)
/* 0040EDAC 000D7600 */  sll   $t6, $t5, 0x18
/* 0040EDB0 000E7F42 */  srl   $t7, $t6, 0x1d
/* 0040EDB4 506FFFF9 */  beql  $v1, $t7, .L0040ED9C
/* 0040EDB8 02003025 */   move  $a2, $s0
.L0040EDBC:
/* 0040EDBC 8F988A74 */  lw     $t8, %got(reversed_stack)($gp)
/* 0040EDC0 93180000 */  lbu   $t8, ($t8)
/* 0040EDC4 13000012 */  beqz  $t8, .L0040EE10
/* 0040EDC8 00000000 */   nop   
/* 0040EDCC 1200001F */  beqz  $s0, .L0040EE4C
/* 0040EDD0 00000000 */   nop   
/* 0040EDD4 8E22002C */  lw    $v0, 0x2c($s1)
/* 0040EDD8 8E19002C */  lw    $t9, 0x2c($s0)
/* 0040EDDC 0322082A */  slt   $at, $t9, $v0
/* 0040EDE0 1020001A */  beqz  $at, .L0040EE4C
/* 0040EDE4 00000000 */   nop   
/* 0040EDE8 02003025 */  move  $a2, $s0
.L0040EDEC:
/* 0040EDEC 8E100008 */  lw    $s0, 8($s0)
/* 0040EDF0 12000016 */  beqz  $s0, .L0040EE4C
/* 0040EDF4 00000000 */   nop   
/* 0040EDF8 8E08002C */  lw    $t0, 0x2c($s0)
/* 0040EDFC 0102082A */  slt   $at, $t0, $v0
/* 0040EE00 5420FFFA */  bnel  $at, $zero, .L0040EDEC
/* 0040EE04 02003025 */   move  $a2, $s0
/* 0040EE08 10000010 */  b     .L0040EE4C
/* 0040EE0C 00000000 */   nop   
.L0040EE10:
/* 0040EE10 1200000E */  beqz  $s0, .L0040EE4C
/* 0040EE14 00000000 */   nop   
/* 0040EE18 8E22002C */  lw    $v0, 0x2c($s1)
/* 0040EE1C 8E09002C */  lw    $t1, 0x2c($s0)
/* 0040EE20 0049082A */  slt   $at, $v0, $t1
/* 0040EE24 10200009 */  beqz  $at, .L0040EE4C
/* 0040EE28 00000000 */   nop   
/* 0040EE2C 02003025 */  move  $a2, $s0
.L0040EE30:
/* 0040EE30 8E100008 */  lw    $s0, 8($s0)
/* 0040EE34 12000005 */  beqz  $s0, .L0040EE4C
/* 0040EE38 00000000 */   nop   
/* 0040EE3C 8E0A002C */  lw    $t2, 0x2c($s0)
/* 0040EE40 004A082A */  slt   $at, $v0, $t2
/* 0040EE44 5420FFFA */  bnel  $at, $zero, .L0040EE30
/* 0040EE48 02003025 */   move  $a2, $s0
.L0040EE4C:
/* 0040EE4C 12000009 */  beqz  $s0, .L0040EE74
/* 0040EE50 2E030001 */   sltiu $v1, $s0, 1
/* 0040EE54 8E0B002C */  lw    $t3, 0x2c($s0)
/* 0040EE58 8E2C002C */  lw    $t4, 0x2c($s1)
/* 0040EE5C 156C0005 */  bne   $t3, $t4, .L0040EE74
/* 0040EE60 00000000 */   nop   
/* 0040EE64 8E0D0024 */  lw    $t5, 0x24($s0)
/* 0040EE68 8E2E0024 */  lw    $t6, 0x24($s1)
/* 0040EE6C 51AE0015 */  beql  $t5, $t6, .L0040EEC4
/* 0040EE70 8FBF0024 */   lw    $ra, 0x24($sp)
.L0040EE74:
/* 0040EE74 5460000C */  bnel  $v1, $zero, .L0040EEA8
/* 0040EE78 006002B4 */   teq   $v1, $zero, 0xa
/* 0040EE7C 8E0F002C */  lw    $t7, 0x2c($s0)
/* 0040EE80 8E38002C */  lw    $t8, 0x2c($s1)
/* 0040EE84 01F81826 */  xor   $v1, $t7, $t8
/* 0040EE88 0003182B */  sltu  $v1, $zero, $v1
/* 0040EE8C 54600006 */  bnel  $v1, $zero, .L0040EEA8
/* 0040EE90 006002B4 */   teq   $v1, $zero, 0xa
/* 0040EE94 8E190024 */  lw    $t9, 0x24($s0)
/* 0040EE98 8E280024 */  lw    $t0, 0x24($s1)
/* 0040EE9C 03281826 */  xor   $v1, $t9, $t0
/* 0040EEA0 0003182B */  sltu  $v1, $zero, $v1
/* 0040EEA4 006002B4 */  teq   $v1, $zero, 0xa
.L0040EEA8:
/* 0040EEA8 14C00004 */  bnez  $a2, .L0040EEBC
/* 0040EEAC AE300008 */   sw    $s0, 8($s1)
/* 0040EEB0 8FA90034 */  lw    $t1, 0x34($sp)
/* 0040EEB4 10000002 */  b     .L0040EEC0
/* 0040EEB8 AD31EB6C */   sw    $s1, -0x1494($t1)
.L0040EEBC:
/* 0040EEBC ACD10008 */  sw    $s1, 8($a2)
.L0040EEC0:
/* 0040EEC0 8FBF0024 */  lw    $ra, 0x24($sp)
.L0040EEC4:
/* 0040EEC4 8FB00018 */  lw    $s0, 0x18($sp)
/* 0040EEC8 8FB1001C */  lw    $s1, 0x1c($sp)
/* 0040EECC 03E00008 */  jr    $ra
/* 0040EED0 27BD0038 */   addiu $sp, $sp, 0x38

    .type func_0040EED4, @function
func_0040EED4:
    # 0040F4C8 build_tree
/* 0040EED4 3C1C0FC1 */  .cpload $t9
/* 0040EED8 279C0B7C */  
/* 0040EEDC 0399E021 */  
/* 0040EEE0 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0040EEE4 AFBF0024 */  sw    $ra, 0x24($sp)
/* 0040EEE8 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0040EEEC AFB2001C */  sw    $s2, 0x1c($sp)
/* 0040EEF0 AFB10018 */  sw    $s1, 0x18($sp)
/* 0040EEF4 AFB00014 */  sw    $s0, 0x14($sp)
/* 0040EEF8 8C50EB68 */  lw    $s0, -0x1498($v0)
/* 0040EEFC 00408825 */  move  $s1, $v0
/* 0040EF00 2412008B */  li    $s2, 139
/* 0040EF04 5200001C */  beql  $s0, $zero, .L0040EF78
/* 0040EF08 8FBF0024 */   lw    $ra, 0x24($sp)
.L0040EF0C:
/* 0040EF0C 8F998018 */  lw    $t9, %got(func_0040E884)($gp)
/* 0040EF10 02002025 */  move  $a0, $s0
/* 0040EF14 02201025 */  move  $v0, $s1
/* 0040EF18 2739E884 */  addiu $t9, %lo(func_0040E884) # addiu $t9, $t9, -0x177c
/* 0040EF1C 0320F809 */  jalr  $t9
/* 0040EF20 00000000 */   nop   
/* 0040EF24 10400010 */  beqz  $v0, .L0040EF68
/* 0040EF28 8FBC0020 */   lw    $gp, 0x20($sp)
/* 0040EF2C 8F998658 */  lw    $t9, %call16(build_u)($gp)
/* 0040EF30 26040020 */  addiu $a0, $s0, 0x20
/* 0040EF34 0320F809 */  jalr  $t9
/* 0040EF38 00000000 */   nop   
/* 0040EF3C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0040EF40 A0520020 */  sb    $s2, 0x20($v0)
/* 0040EF44 A4400022 */  sh    $zero, 0x22($v0)
/* 0040EF48 8E0E0030 */  lw    $t6, 0x30($s0)
/* 0040EF4C 8F998018 */  lw    $t9, %got(func_0040EC54)($gp)
/* 0040EF50 00402025 */  move  $a0, $v0
/* 0040EF54 AC4E0030 */  sw    $t6, 0x30($v0)
/* 0040EF58 2739EC54 */  addiu $t9, %lo(func_0040EC54) # addiu $t9, $t9, -0x13ac
/* 0040EF5C 0320F809 */  jalr  $t9
/* 0040EF60 02201025 */   move  $v0, $s1
/* 0040EF64 8FBC0020 */  lw    $gp, 0x20($sp)
.L0040EF68:
/* 0040EF68 8E100008 */  lw    $s0, 8($s0)
/* 0040EF6C 1600FFE7 */  bnez  $s0, .L0040EF0C
/* 0040EF70 00000000 */   nop   
/* 0040EF74 8FBF0024 */  lw    $ra, 0x24($sp)
.L0040EF78:
/* 0040EF78 8FB00014 */  lw    $s0, 0x14($sp)
/* 0040EF7C 8FB10018 */  lw    $s1, 0x18($sp)
/* 0040EF80 8FB2001C */  lw    $s2, 0x1c($sp)
/* 0040EF84 03E00008 */  jr    $ra
/* 0040EF88 27BD0028 */   addiu $sp, $sp, 0x28

    .type func_0040EF8C, @function
func_0040EF8C:
    # 0040F4C8 build_tree
/* 0040EF8C 10800009 */  beqz  $a0, .L0040EFB4
/* 0040EF90 00000000 */   nop   
/* 0040EF94 8C43EB08 */  lw    $v1, -0x14f8($v0)
/* 0040EF98 246E0001 */  addiu $t6, $v1, 1
.L0040EF9C:
/* 0040EF9C AC4EEB08 */  sw    $t6, -0x14f8($v0)
/* 0040EFA0 24630001 */  addiu $v1, $v1, 1
/* 0040EFA4 AC830034 */  sw    $v1, 0x34($a0)
/* 0040EFA8 8C840008 */  lw    $a0, 8($a0)
/* 0040EFAC 5480FFFB */  bnel  $a0, $zero, .L0040EF9C
/* 0040EFB0 246E0001 */   addiu $t6, $v1, 1
.L0040EFB4:
/* 0040EFB4 03E00008 */  jr    $ra
/* 0040EFB8 00000000 */   nop   

    .type func_0040EFBC, @function
func_0040EFBC:
    # 0040F4C8 build_tree
/* 0040EFBC 3C1C0FC1 */  .cpload $t9
/* 0040EFC0 279C0A94 */  
/* 0040EFC4 0399E021 */  
/* 0040EFC8 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 0040EFCC AFB10018 */  sw    $s1, 0x18($sp)
/* 0040EFD0 AFB00014 */  sw    $s0, 0x14($sp)
/* 0040EFD4 00808025 */  move  $s0, $a0
/* 0040EFD8 00408825 */  move  $s1, $v0
/* 0040EFDC AFBF002C */  sw    $ra, 0x2c($sp)
/* 0040EFE0 AFBC0028 */  sw    $gp, 0x28($sp)
/* 0040EFE4 AFB40024 */  sw    $s4, 0x24($sp)
/* 0040EFE8 AFB30020 */  sw    $s3, 0x20($sp)
/* 0040EFEC AFB2001C */  sw    $s2, 0x1c($sp)
/* 0040EFF0 10800015 */  beqz  $a0, .L0040F048
/* 0040EFF4 00001825 */   move  $v1, $zero
/* 0040EFF8 2414008F */  li    $s4, 143
/* 0040EFFC 24130006 */  li    $s3, 6
/* 0040F000 24120027 */  li    $s2, 39
/* 0040F004 920E0020 */  lbu   $t6, 0x20($s0)
.L0040F008:
/* 0040F008 564E0009 */  bnel  $s2, $t6, .L0040F030
/* 0040F00C 8E2FEB08 */   lw    $t7, -0x14f8($s1)
/* 0040F010 8F998598 */  lw    $t9, %call16(set_mtag)($gp)
/* 0040F014 8E040024 */  lw    $a0, 0x24($s0)
/* 0040F018 2625EB08 */  addiu $a1, $s1, -0x14f8
/* 0040F01C 0320F809 */  jalr  $t9
/* 0040F020 00000000 */   nop   
/* 0040F024 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0040F028 A6130022 */  sh    $s3, 0x22($s0)
/* 0040F02C 8E2FEB08 */  lw    $t7, -0x14f8($s1)
.L0040F030:
/* 0040F030 A2140020 */  sb    $s4, 0x20($s0)
/* 0040F034 02001825 */  move  $v1, $s0
/* 0040F038 AE0F0024 */  sw    $t7, 0x24($s0)
/* 0040F03C 8E100008 */  lw    $s0, 8($s0)
/* 0040F040 5600FFF1 */  bnel  $s0, $zero, .L0040F008
/* 0040F044 920E0020 */   lbu   $t6, 0x20($s0)
.L0040F048:
/* 0040F048 8F938970 */  lw     $s3, %got(non_local_mtag)($gp)
/* 0040F04C 2414008F */  li    $s4, 143
/* 0040F050 8E780000 */  lw    $t8, ($s3)
/* 0040F054 57000011 */  bnel  $t8, $zero, .L0040F09C
/* 0040F058 8FBF002C */   lw    $ra, 0x2c($sp)
/* 0040F05C 8F998654 */  lw    $t9, %call16(new_tree)($gp)
/* 0040F060 8E30EB08 */  lw    $s0, -0x14f8($s1)
/* 0040F064 AFA30030 */  sw    $v1, 0x30($sp)
/* 0040F068 0320F809 */  jalr  $t9
/* 0040F06C 02009025 */   move  $s2, $s0
/* 0040F070 8FA30030 */  lw    $v1, 0x30($sp)
/* 0040F074 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0040F078 24190003 */  li    $t9, 3
/* 0040F07C A0540020 */  sb    $s4, 0x20($v0)
/* 0040F080 A4590022 */  sh    $t9, 0x22($v0)
/* 0040F084 AC520024 */  sw    $s2, 0x24($v0)
/* 0040F088 AE700000 */  sw    $s0, ($s3)
/* 0040F08C 26080001 */  addiu $t0, $s0, 1
/* 0040F090 AE28EB08 */  sw    $t0, -0x14f8($s1)
/* 0040F094 AC620008 */  sw    $v0, 8($v1)
/* 0040F098 8FBF002C */  lw    $ra, 0x2c($sp)
.L0040F09C:
/* 0040F09C 8FB00014 */  lw    $s0, 0x14($sp)
/* 0040F0A0 8FB10018 */  lw    $s1, 0x18($sp)
/* 0040F0A4 8FB2001C */  lw    $s2, 0x1c($sp)
/* 0040F0A8 8FB30020 */  lw    $s3, 0x20($sp)
/* 0040F0AC 8FB40024 */  lw    $s4, 0x24($sp)
/* 0040F0B0 03E00008 */  jr    $ra
/* 0040F0B4 27BD0038 */   addiu $sp, $sp, 0x38

    .type func_0040F0B8, @function
func_0040F0B8:
    # 0040F4C8 build_tree
/* 0040F0B8 3C1C0FC1 */  .cpload $t9
/* 0040F0BC 279C0998 */  
/* 0040F0C0 0399E021 */  
/* 0040F0C4 8C43EB68 */  lw    $v1, -0x1498($v0)
/* 0040F0C8 54600005 */  bnel  $v1, $zero, .L0040F0E0
/* 0040F0CC 8C65002C */   lw    $a1, 0x2c($v1)
/* 0040F0D0 AC44EB68 */  sw    $a0, -0x1498($v0)
/* 0040F0D4 03E00008 */  jr    $ra
/* 0040F0D8 AC44EB64 */   sw    $a0, -0x149c($v0)

/* 0040F0DC 8C65002C */  lw    $a1, 0x2c($v1)
.L0040F0E0:
/* 0040F0E0 8C86002C */  lw    $a2, 0x2c($a0)
/* 0040F0E4 10A60033 */  beq   $a1, $a2, .L0040F1B4
/* 0040F0E8 00000000 */   nop   
/* 0040F0EC 8F878A74 */  lw     $a3, %got(reversed_stack)($gp)
/* 0040F0F0 00C5082A */  slt   $at, $a2, $a1
/* 0040F0F4 90E70000 */  lbu   $a3, ($a3)
/* 0040F0F8 10E00007 */  beqz  $a3, .L0040F118
/* 0040F0FC 00000000 */   nop   
/* 0040F100 00A6082A */  slt   $at, $a1, $a2
/* 0040F104 50200013 */  beql  $at, $zero, .L0040F154
/* 0040F108 8C650008 */   lw    $a1, 8($v1)
/* 0040F10C AC830008 */  sw    $v1, 8($a0)
/* 0040F110 03E00008 */  jr    $ra
/* 0040F114 AC44EB68 */   sw    $a0, -0x1498($v0)

.L0040F118:
/* 0040F118 50200005 */  beql  $at, $zero, .L0040F130
/* 0040F11C 8C45EB64 */   lw    $a1, -0x149c($v0)
/* 0040F120 AC830008 */  sw    $v1, 8($a0)
/* 0040F124 03E00008 */  jr    $ra
/* 0040F128 AC44EB68 */   sw    $a0, -0x1498($v0)

/* 0040F12C 8C45EB64 */  lw    $a1, -0x149c($v0)
.L0040F130:
/* 0040F130 8CA8002C */  lw    $t0, 0x2c($a1)
/* 0040F134 1106001F */  beq   $t0, $a2, .L0040F1B4
/* 0040F138 0106082A */   slt   $at, $t0, $a2
/* 0040F13C 50200005 */  beql  $at, $zero, .L0040F154
/* 0040F140 8C650008 */   lw    $a1, 8($v1)
/* 0040F144 ACA40008 */  sw    $a0, 8($a1)
/* 0040F148 03E00008 */  jr    $ra
/* 0040F14C AC44EB64 */   sw    $a0, -0x149c($v0)

/* 0040F150 8C650008 */  lw    $a1, 8($v1)
.L0040F154:
/* 0040F154 00601025 */  move  $v0, $v1
/* 0040F158 50A00016 */  beql  $a1, $zero, .L0040F1B4
/* 0040F15C AC440008 */   sw    $a0, 8($v0)
/* 0040F160 8CA3002C */  lw    $v1, 0x2c($a1)
.L0040F164:
/* 0040F164 10660013 */  beq   $v1, $a2, .L0040F1B4
/* 0040F168 00000000 */   nop   
/* 0040F16C 10E00006 */  beqz  $a3, .L0040F188
/* 0040F170 0066082A */   slt   $at, $v1, $a2
/* 0040F174 5020000B */  beql  $at, $zero, .L0040F1A4
/* 0040F178 00A01025 */   move  $v0, $a1
/* 0040F17C AC440008 */  sw    $a0, 8($v0)
/* 0040F180 03E00008 */  jr    $ra
/* 0040F184 AC850008 */   sw    $a1, 8($a0)

.L0040F188:
/* 0040F188 00C3082A */  slt   $at, $a2, $v1
/* 0040F18C 50200005 */  beql  $at, $zero, .L0040F1A4
/* 0040F190 00A01025 */   move  $v0, $a1
/* 0040F194 AC440008 */  sw    $a0, 8($v0)
/* 0040F198 03E00008 */  jr    $ra
/* 0040F19C AC850008 */   sw    $a1, 8($a0)

/* 0040F1A0 00A01025 */  move  $v0, $a1
.L0040F1A4:
/* 0040F1A4 8CA50008 */  lw    $a1, 8($a1)
/* 0040F1A8 54A0FFEE */  bnel  $a1, $zero, .L0040F164
/* 0040F1AC 8CA3002C */   lw    $v1, 0x2c($a1)
/* 0040F1B0 AC440008 */  sw    $a0, 8($v0)
.L0040F1B4:
/* 0040F1B4 03E00008 */  jr    $ra
/* 0040F1B8 00000000 */   nop   

    .type func_0040F1BC, @function
func_0040F1BC:
    # 0040F4C8 build_tree
/* 0040F1BC 3C1C0FC1 */  .cpload $t9
/* 0040F1C0 279C0894 */  
/* 0040F1C4 0399E021 */  
/* 0040F1C8 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0040F1CC AFBF001C */  sw    $ra, 0x1c($sp)
/* 0040F1D0 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0040F1D4 AFA20024 */  sw    $v0, 0x24($sp)
/* 0040F1D8 908E0020 */  lbu   $t6, 0x20($a0)
/* 0040F1DC 240F0042 */  li    $t7, 66
/* 0040F1E0 00802825 */  move  $a1, $a0
/* 0040F1E4 01CF02B6 */  tne   $t6, $t7, 0xa
/* 0040F1E8 8F998664 */  lw    $t9, %call16(build_op)($gp)
/* 0040F1EC 24040060 */  li    $a0, 96
/* 0040F1F0 AFA50028 */  sw    $a1, 0x28($sp)
/* 0040F1F4 0320F809 */  jalr  $t9
/* 0040F1F8 00000000 */   nop   
/* 0040F1FC 8FA50028 */  lw    $a1, 0x28($sp)
/* 0040F200 8FA30024 */  lw    $v1, 0x24($sp)
/* 0040F204 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0040F208 8CB80024 */  lw    $t8, 0x24($a1)
/* 0040F20C AC450000 */  sw    $a1, ($v0)
/* 0040F210 AC580024 */  sw    $t8, 0x24($v0)
/* 0040F214 8C79EB58 */  lw    $t9, -0x14a8($v1)
/* 0040F218 AC590008 */  sw    $t9, 8($v0)
/* 0040F21C AC62EB58 */  sw    $v0, -0x14a8($v1)
/* 0040F220 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0040F224 27BD0028 */  addiu $sp, $sp, 0x28
/* 0040F228 03E00008 */  jr    $ra
/* 0040F22C 00000000 */   nop   

    .type func_0040F230, @function
func_0040F230:
    # 0040F230 func_0040F230
    # 0040F4C8 build_tree
/* 0040F230 3C1C0FC1 */  .cpload $t9
/* 0040F234 279C0820 */  
/* 0040F238 0399E021 */  
/* 0040F23C 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0040F240 AFB1001C */  sw    $s1, 0x1c($sp)
/* 0040F244 AFB00018 */  sw    $s0, 0x18($sp)
/* 0040F248 00808025 */  move  $s0, $a0
/* 0040F24C 00408825 */  move  $s1, $v0
/* 0040F250 AFBF0024 */  sw    $ra, 0x24($sp)
/* 0040F254 AFBC0020 */  sw    $gp, 0x20($sp)
.L0040F258:
/* 0040F258 56000004 */  bnel  $s0, $zero, .L0040F26C
/* 0040F25C 920E0020 */   lbu   $t6, 0x20($s0)
/* 0040F260 1000002C */  b     .L0040F314
/* 0040F264 00001025 */   move  $v0, $zero
/* 0040F268 920E0020 */  lbu   $t6, 0x20($s0)
.L0040F26C:
/* 0040F26C 25CFFFE0 */  addiu $t7, $t6, -0x20
/* 0040F270 2DF80060 */  sltiu $t8, $t7, 0x60
/* 0040F274 13000009 */  beqz  $t8, .L0040F29C
/* 0040F278 00000000 */   nop   
/* 0040F27C 8F898038 */  lw    $t1, %got(D_1001255C)($gp)
/* 0040F280 000FC943 */  sra   $t9, $t7, 5
/* 0040F284 00194080 */  sll   $t0, $t9, 2
/* 0040F288 2529255C */  addiu $t1, %lo(D_1001255C) # addiu $t1, $t1, 0x255c
/* 0040F28C 01285021 */  addu  $t2, $t1, $t0
/* 0040F290 8D4B0000 */  lw    $t3, ($t2)
/* 0040F294 01EB6004 */  sllv  $t4, $t3, $t7
/* 0040F298 29980000 */  slti  $t8, $t4, 0
.L0040F29C:
/* 0040F29C 53000008 */  beql  $t8, $zero, .L0040F2C0
/* 0040F2A0 8E040000 */   lw    $a0, ($s0)
/* 0040F2A4 960E0022 */  lhu   $t6, 0x22($s0)
/* 0040F2A8 31D90001 */  andi  $t9, $t6, 1
/* 0040F2AC 53200004 */  beql  $t9, $zero, .L0040F2C0
/* 0040F2B0 8E040000 */   lw    $a0, ($s0)
/* 0040F2B4 10000017 */  b     .L0040F314
/* 0040F2B8 24020001 */   li    $v0, 1
/* 0040F2BC 8E040000 */  lw    $a0, ($s0)
.L0040F2C0:
/* 0040F2C0 50800014 */  beql  $a0, $zero, .L0040F314
/* 0040F2C4 00001025 */   move  $v0, $zero
/* 0040F2C8 8F998018 */  lw    $t9, %got(func_0040F230)($gp)
/* 0040F2CC 02201025 */  move  $v0, $s1
/* 0040F2D0 2739F230 */  addiu $t9, %lo(func_0040F230) # addiu $t9, $t9, -0xdd0
/* 0040F2D4 0320F809 */  jalr  $t9
/* 0040F2D8 00000000 */   nop   
/* 0040F2DC 8E030004 */  lw    $v1, 4($s0)
/* 0040F2E0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0040F2E4 304400FF */  andi  $a0, $v0, 0xff
/* 0040F2E8 10600007 */  beqz  $v1, .L0040F308
/* 0040F2EC 00000000 */   nop   
/* 0040F2F0 14400003 */  bnez  $v0, .L0040F300
/* 0040F2F4 00000000 */   nop   
/* 0040F2F8 1000FFD7 */  b     .L0040F258
/* 0040F2FC 00608025 */   move  $s0, $v1
.L0040F300:
/* 0040F300 10000004 */  b     .L0040F314
/* 0040F304 00801025 */   move  $v0, $a0
.L0040F308:
/* 0040F308 10000002 */  b     .L0040F314
/* 0040F30C 00801025 */   move  $v0, $a0
/* 0040F310 00001025 */  move  $v0, $zero
.L0040F314:
/* 0040F314 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0040F318 8FB00018 */  lw    $s0, 0x18($sp)
/* 0040F31C 8FB1001C */  lw    $s1, 0x1c($sp)
/* 0040F320 03E00008 */  jr    $ra
/* 0040F324 27BD0028 */   addiu $sp, $sp, 0x28

    .type func_0040F328, @function
func_0040F328:
    # 0040F4C8 build_tree
/* 0040F328 3C1C0FC1 */  .cpload $t9
/* 0040F32C 279C0728 */  
/* 0040F330 0399E021 */  
/* 0040F334 27BDFFC0 */  addiu $sp, $sp, -0x40
/* 0040F338 AFBF003C */  sw    $ra, 0x3c($sp)
/* 0040F33C AFBE0038 */  sw    $fp, 0x38($sp)
/* 0040F340 AFBC0034 */  sw    $gp, 0x34($sp)
/* 0040F344 AFB70030 */  sw    $s7, 0x30($sp)
/* 0040F348 AFB6002C */  sw    $s6, 0x2c($sp)
/* 0040F34C AFB50028 */  sw    $s5, 0x28($sp)
/* 0040F350 AFB40024 */  sw    $s4, 0x24($sp)
/* 0040F354 AFB30020 */  sw    $s3, 0x20($sp)
/* 0040F358 AFB2001C */  sw    $s2, 0x1c($sp)
/* 0040F35C AFB10018 */  sw    $s1, 0x18($sp)
/* 0040F360 AFB00014 */  sw    $s0, 0x14($sp)
/* 0040F364 904EEAD7 */  lbu   $t6, -0x1529($v0)
/* 0040F368 00409825 */  move  $s3, $v0
/* 0040F36C 55C0004B */  bnel  $t6, $zero, .L0040F49C
/* 0040F370 8FBF003C */   lw    $ra, 0x3c($sp)
/* 0040F374 8C42EB68 */  lw    $v0, -0x1498($v0)
/* 0040F378 10400047 */  beqz  $v0, .L0040F498
/* 0040F37C 00409025 */   move  $s2, $v0
/* 0040F380 8C4F0030 */  lw    $t7, 0x30($v0)
/* 0040F384 2401FFFF */  li    $at, -1
/* 0040F388 241E007B */  li    $fp, 123
/* 0040F38C 11E10042 */  beq   $t7, $at, .L0040F498
/* 0040F390 24170052 */   li    $s7, 82
/* 0040F394 8F968A38 */  lw     $s6, %got(opt_parms)($gp)
/* 0040F398 24150001 */  li    $s5, 1
/* 0040F39C 2414FF1F */  li    $s4, -225
/* 0040F3A0 96580022 */  lhu   $t8, 0x22($s2)
.L0040F3A4:
/* 0040F3A4 52B80036 */  beql  $s5, $t8, .L0040F480
/* 0040F3A8 8E520008 */   lw    $s2, 8($s2)
/* 0040F3AC 8E62EBA0 */  lw    $v0, -0x1460($s3)
/* 0040F3B0 5440000A */  bnel  $v0, $zero, .L0040F3DC
/* 0040F3B4 8E62EB6C */   lw    $v0, -0x1494($s3)
/* 0040F3B8 14400011 */  bnez  $v0, .L0040F400
/* 0040F3BC 00000000 */   nop   
/* 0040F3C0 92D90000 */  lbu   $t9, ($s6)
/* 0040F3C4 1720000E */  bnez  $t9, .L0040F400
/* 0040F3C8 00000000 */   nop   
/* 0040F3CC 9268EB33 */  lbu   $t0, -0x14cd($s3)
/* 0040F3D0 1500000B */  bnez  $t0, .L0040F400
/* 0040F3D4 00000000 */   nop   
/* 0040F3D8 8E62EB6C */  lw    $v0, -0x1494($s3)
.L0040F3DC:
/* 0040F3DC 10400008 */  beqz  $v0, .L0040F400
/* 0040F3E0 00000000 */   nop   
/* 0040F3E4 8E430030 */  lw    $v1, 0x30($s2)
/* 0040F3E8 8C490030 */  lw    $t1, 0x30($v0)
.L0040F3EC:
/* 0040F3EC 50690024 */  beql  $v1, $t1, .L0040F480
/* 0040F3F0 8E520008 */   lw    $s2, 8($s2)
/* 0040F3F4 8C420008 */  lw    $v0, 8($v0)
/* 0040F3F8 5440FFFC */  bnel  $v0, $zero, .L0040F3EC
/* 0040F3FC 8C490030 */   lw    $t1, 0x30($v0)
.L0040F400:
/* 0040F400 8F998658 */  lw    $t9, %call16(build_u)($gp)
/* 0040F404 26500020 */  addiu $s0, $s2, 0x20
/* 0040F408 02002025 */  move  $a0, $s0
/* 0040F40C 0320F809 */  jalr  $t9
/* 0040F410 8E71EB54 */   lw    $s1, -0x14ac($s3)
/* 0040F414 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0040F418 904A0021 */  lbu   $t2, 0x21($v0)
/* 0040F41C A0570020 */  sb    $s7, 0x20($v0)
/* 0040F420 A4400022 */  sh    $zero, 0x22($v0)
/* 0040F424 01545824 */  and   $t3, $t2, $s4
/* 0040F428 356C0040 */  ori   $t4, $t3, 0x40
/* 0040F42C A04C0021 */  sb    $t4, 0x21($v0)
/* 0040F430 AC400030 */  sw    $zero, 0x30($v0)
/* 0040F434 8F99865C */  lw    $t9, %call16(build_u1)($gp)
/* 0040F438 02002025 */  move  $a0, $s0
/* 0040F43C 00402825 */  move  $a1, $v0
/* 0040F440 0320F809 */  jalr  $t9
/* 0040F444 00000000 */   nop   
/* 0040F448 904D0021 */  lbu   $t5, 0x21($v0)
/* 0040F44C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0040F450 A05E0020 */  sb    $fp, 0x20($v0)
/* 0040F454 01B47024 */  and   $t6, $t5, $s4
/* 0040F458 35CF0060 */  ori   $t7, $t6, 0x60
/* 0040F45C A4400022 */  sh    $zero, 0x22($v0)
/* 0040F460 A04F0021 */  sb    $t7, 0x21($v0)
/* 0040F464 8E580030 */  lw    $t8, 0x30($s2)
/* 0040F468 AC400030 */  sw    $zero, 0x30($v0)
/* 0040F46C AC58002C */  sw    $t8, 0x2c($v0)
/* 0040F470 8E390008 */  lw    $t9, 8($s1)
/* 0040F474 AC590008 */  sw    $t9, 8($v0)
/* 0040F478 AE220008 */  sw    $v0, 8($s1)
/* 0040F47C 8E520008 */  lw    $s2, 8($s2)
.L0040F480:
/* 0040F480 52400006 */  beql  $s2, $zero, .L0040F49C
/* 0040F484 8FBF003C */   lw    $ra, 0x3c($sp)
/* 0040F488 8E480030 */  lw    $t0, 0x30($s2)
/* 0040F48C 2401FFFF */  li    $at, -1
/* 0040F490 5501FFC4 */  bnel  $t0, $at, .L0040F3A4
/* 0040F494 96580022 */   lhu   $t8, 0x22($s2)
.L0040F498:
/* 0040F498 8FBF003C */  lw    $ra, 0x3c($sp)
.L0040F49C:
/* 0040F49C 8FB00014 */  lw    $s0, 0x14($sp)
/* 0040F4A0 8FB10018 */  lw    $s1, 0x18($sp)
/* 0040F4A4 8FB2001C */  lw    $s2, 0x1c($sp)
/* 0040F4A8 8FB30020 */  lw    $s3, 0x20($sp)
/* 0040F4AC 8FB40024 */  lw    $s4, 0x24($sp)
/* 0040F4B0 8FB50028 */  lw    $s5, 0x28($sp)
/* 0040F4B4 8FB6002C */  lw    $s6, 0x2c($sp)
/* 0040F4B8 8FB70030 */  lw    $s7, 0x30($sp)
/* 0040F4BC 8FBE0038 */  lw    $fp, 0x38($sp)
/* 0040F4C0 03E00008 */  jr    $ra
/* 0040F4C4 27BD0040 */   addiu $sp, $sp, 0x40

glabel build_tree
    .ent build_tree
    # 0044BF18 main
/* 0040F4C8 3C1C0FC1 */  .cpload $t9
/* 0040F4CC 279C0588 */  
/* 0040F4D0 0399E021 */  
/* 0040F4D4 27BDE9B0 */  addiu $sp, $sp, -0x1650
/* 0040F4D8 8F818BD0 */  lw     $at, %got(label_hash_table)($gp)
/* 0040F4DC 8F828BD0 */  lw     $v0, %got(label_hash_table)($gp)
/* 0040F4E0 8F838BD0 */  lw     $v1, %got(label_hash_table)($gp)
/* 0040F4E4 AFBF00D4 */  sw    $ra, 0xd4($sp)
/* 0040F4E8 AFBE00D0 */  sw    $fp, 0xd0($sp)
/* 0040F4EC AFBC00CC */  sw    $gp, 0xcc($sp)
/* 0040F4F0 AFB700C8 */  sw    $s7, 0xc8($sp)
/* 0040F4F4 AFB600C4 */  sw    $s6, 0xc4($sp)
/* 0040F4F8 AFB500C0 */  sw    $s5, 0xc0($sp)
/* 0040F4FC AFB400BC */  sw    $s4, 0xbc($sp)
/* 0040F500 AFB300B8 */  sw    $s3, 0xb8($sp)
/* 0040F504 AFB200B4 */  sw    $s2, 0xb4($sp)
/* 0040F508 AFB100B0 */  sw    $s1, 0xb0($sp)
/* 0040F50C AFB000AC */  sw    $s0, 0xac($sp)
/* 0040F510 AFA41650 */  sw    $a0, 0x1650($sp)
/* 0040F514 AFA00128 */  sw    $zero, 0x128($sp)
/* 0040F518 AFA0012C */  sw    $zero, 0x12c($sp)
/* 0040F51C AFA00130 */  sw    $zero, 0x130($sp)
/* 0040F520 AFA00134 */  sw    $zero, 0x134($sp)
/* 0040F524 AFA00138 */  sw    $zero, 0x138($sp)
/* 0040F528 AFA0013C */  sw    $zero, 0x13c($sp)
/* 0040F52C AFA00140 */  sw    $zero, 0x140($sp)
/* 0040F530 AFA00144 */  sw    $zero, 0x144($sp)
/* 0040F534 AFA00148 */  sw    $zero, 0x148($sp)
/* 0040F538 AFA0014C */  sw    $zero, 0x14c($sp)
/* 0040F53C AFA00150 */  sw    $zero, 0x150($sp)
/* 0040F540 AFA00154 */  sw    $zero, 0x154($sp)
/* 0040F544 AFA001C8 */  sw    $zero, 0x1c8($sp)
/* 0040F548 AFA001CC */  sw    $zero, 0x1cc($sp)
/* 0040F54C AFA001D0 */  sw    $zero, 0x1d0($sp)
/* 0040F550 AFA001D8 */  sw    $zero, 0x1d8($sp)
/* 0040F554 AFA001DC */  sw    $zero, 0x1dc($sp)
/* 0040F558 AFA001E0 */  sw    $zero, 0x1e0($sp)
/* 0040F55C AFA001E4 */  sw    $zero, 0x1e4($sp)
/* 0040F560 AFA001D4 */  sw    $zero, 0x1d4($sp)
/* 0040F564 AC200000 */  sw    $zero, ($at)
/* 0040F568 24420004 */  addiu $v0, $v0, 4
/* 0040F56C 246303F4 */  addiu $v1, $v1, 0x3f4
.L0040F570:
/* 0040F570 24420010 */  addiu $v0, $v0, 0x10
/* 0040F574 AC40FFF0 */  sw    $zero, -0x10($v0)
/* 0040F578 AC40FFF4 */  sw    $zero, -0xc($v0)
/* 0040F57C AC40FFF8 */  sw    $zero, -8($v0)
/* 0040F580 1443FFFB */  bne   $v0, $v1, .L0040F570
/* 0040F584 AC40FFFC */   sw    $zero, -4($v0)
/* 0040F588 8F9987E8 */  lw    $t9, %call16(new)($gp)
/* 0040F58C 24040400 */  li    $a0, 1024
/* 0040F590 00002825 */  move  $a1, $zero
/* 0040F594 0320F809 */  jalr  $t9
/* 0040F598 00000000 */   nop   
/* 0040F59C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040F5A0 AFA201C4 */  sw    $v0, 0x1c4($sp)
/* 0040F5A4 AFA001F4 */  sw    $zero, 0x1f4($sp)
/* 0040F5A8 A7A01648 */  sh    $zero, 0x1648($sp)
.L0040F5AC:
/* 0040F5AC 8F9986E4 */  lw    $t9, %call16(readuinstr)($gp)
/* 0040F5B0 27A401C8 */  addiu $a0, $sp, 0x1c8
/* 0040F5B4 8FA501C4 */  lw    $a1, 0x1c4($sp)
/* 0040F5B8 0320F809 */  jalr  $t9
/* 0040F5BC 00000000 */   nop   
/* 0040F5C0 93A201C8 */  lbu   $v0, 0x1c8($sp)
/* 0040F5C4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040F5C8 2C41009A */  sltiu $at, $v0, 0x9a
/* 0040F5CC 10201204 */  beqz  $at, .L00413DE0
/* 0040F5D0 00000000 */   nop   
/* 0040F5D4 8F818038 */  lw    $at, %got(jtbl_10009114)($gp)
/* 0040F5D8 00027080 */  sll   $t6, $v0, 2
/* 0040F5DC 002E0821 */  addu  $at, $at, $t6
/* 0040F5E0 8C2E9114 */  lw    $t6, %lo(jtbl_10009114)($at)
/* 0040F5E4 01DC7021 */  addu  $t6, $t6, $gp
/* 0040F5E8 01C00008 */  jr    $t6
/* 0040F5EC 00000000 */   nop   
.L0040F5F0:
/* 0040F5F0 8F998564 */  lw    $t9, %call16(gen_sym)($gp)
/* 0040F5F4 27A401C8 */  addiu $a0, $sp, 0x1c8
/* 0040F5F8 0320F809 */  jalr  $t9
/* 0040F5FC 00000000 */   nop   
/* 0040F600 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040F604 8F8F8A84 */  lw     $t7, %got(domtag)($gp)
/* 0040F608 91EF0000 */  lbu   $t7, ($t7)
/* 0040F60C 11E0FFE7 */  beqz  $t7, .L0040F5AC
/* 0040F610 00000000 */   nop   
/* 0040F614 8F998658 */  lw    $t9, %call16(build_u)($gp)
/* 0040F618 27A401C8 */  addiu $a0, $sp, 0x1c8
/* 0040F61C 0320F809 */  jalr  $t9
/* 0040F620 00000000 */   nop   
/* 0040F624 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040F628 8F83886C */  lw     $v1, %got(syms)($gp)
/* 0040F62C 8C780000 */  lw    $t8, ($v1)
/* 0040F630 AC580008 */  sw    $t8, 8($v0)
/* 0040F634 1000FFDD */  b     .L0040F5AC
/* 0040F638 AC620000 */   sw    $v0, ($v1)
.L0040F63C:
/* 0040F63C 8F998564 */  lw    $t9, %call16(gen_sym)($gp)
/* 0040F640 27A401C8 */  addiu $a0, $sp, 0x1c8
/* 0040F644 0320F809 */  jalr  $t9
/* 0040F648 00000000 */   nop   
/* 0040F64C 1000FFD7 */  b     .L0040F5AC
/* 0040F650 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0040F654:
/* 0040F654 8F998564 */  lw    $t9, %call16(gen_sym)($gp)
/* 0040F658 27A401C8 */  addiu $a0, $sp, 0x1c8
/* 0040F65C 0320F809 */  jalr  $t9
/* 0040F660 00000000 */   nop   
/* 0040F664 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040F668 27A401C8 */  addiu $a0, $sp, 0x1c8
/* 0040F66C 8F998658 */  lw    $t9, %call16(build_u)($gp)
/* 0040F670 0320F809 */  jalr  $t9
/* 0040F674 00000000 */   nop   
/* 0040F678 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040F67C 00402025 */  move  $a0, $v0
/* 0040F680 27A21650 */  addiu $v0, $sp, 0x1650
/* 0040F684 8F998018 */  lw    $t9, %got(func_0040E238)($gp)
/* 0040F688 2739E238 */  addiu $t9, %lo(func_0040E238) # addiu $t9, $t9, -0x1dc8
/* 0040F68C 0320F809 */  jalr  $t9
/* 0040F690 00000000 */   nop   
/* 0040F694 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040F698 24190001 */  li    $t9, 1
/* 0040F69C 8F8189F4 */  lw     $at, %got(framesz_relocatable)($gp)
/* 0040F6A0 1000FFC2 */  b     .L0040F5AC
/* 0040F6A4 A0390000 */   sb    $t9, ($at)
.L0040F6A8:
/* 0040F6A8 8FAA01D8 */  lw    $t2, 0x1d8($sp)
/* 0040F6AC 8FA901C4 */  lw    $t1, 0x1c4($sp)
/* 0040F6B0 240B0008 */  li    $t3, 8
/* 0040F6B4 29410009 */  slti  $at, $t2, 9
/* 0040F6B8 14200003 */  bnez  $at, .L0040F6C8
/* 0040F6BC AFA901DC */   sw    $t1, 0x1dc($sp)
/* 0040F6C0 AFAB01D8 */  sw    $t3, 0x1d8($sp)
/* 0040F6C4 A1200008 */  sb    $zero, 8($t1)
.L0040F6C8:
/* 0040F6C8 8F9987E8 */  lw    $t9, %call16(new)($gp)
/* 0040F6CC 24040400 */  li    $a0, 1024
/* 0040F6D0 00002825 */  move  $a1, $zero
/* 0040F6D4 0320F809 */  jalr  $t9
/* 0040F6D8 00000000 */   nop   
/* 0040F6DC 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040F6E0 AFA201C4 */  sw    $v0, 0x1c4($sp)
/* 0040F6E4 27A401C8 */  addiu $a0, $sp, 0x1c8
/* 0040F6E8 8F998658 */  lw    $t9, %call16(build_u)($gp)
/* 0040F6EC 0320F809 */  jalr  $t9
/* 0040F6F0 00000000 */   nop   
/* 0040F6F4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040F6F8 904C0021 */  lbu   $t4, 0x21($v0)
/* 0040F6FC 00402025 */  move  $a0, $v0
/* 0040F700 8F998018 */  lw    $t9, %got(func_0040E238)($gp)
/* 0040F704 318DFFE0 */  andi  $t5, $t4, 0xffe0
/* 0040F708 35AE0009 */  ori   $t6, $t5, 9
/* 0040F70C A04E0021 */  sb    $t6, 0x21($v0)
/* 0040F710 2739E238 */  addiu $t9, %lo(func_0040E238) # addiu $t9, $t9, -0x1dc8
/* 0040F714 0320F809 */  jalr  $t9
/* 0040F718 27A21650 */   addiu $v0, $sp, 0x1650
/* 0040F71C 1000FFA3 */  b     .L0040F5AC
/* 0040F720 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0040F724:
/* 0040F724 93AF01C9 */  lbu   $t7, 0x1c9($sp)
/* 0040F728 3C01004E */  lui   $at, 0x4e
/* 0040F72C 34218000 */  ori   $at, $at, 0x8000
/* 0040F730 31F8001F */  andi  $t8, $t7, 0x1f
/* 0040F734 2F190020 */  sltiu $t9, $t8, 0x20
/* 0040F738 00195023 */  negu  $t2, $t9
/* 0040F73C 01415824 */  and   $t3, $t2, $at
/* 0040F740 030B4804 */  sllv  $t1, $t3, $t8
/* 0040F744 05210008 */  bgez  $t1, .L0040F768
/* 0040F748 8FAC01C4 */   lw    $t4, 0x1c4($sp)
/* 0040F74C 8F9987E8 */  lw    $t9, %call16(new)($gp)
/* 0040F750 AFAC01E4 */  sw    $t4, 0x1e4($sp)
/* 0040F754 24040400 */  li    $a0, 1024
/* 0040F758 0320F809 */  jalr  $t9
/* 0040F75C 00002825 */   move  $a1, $zero
/* 0040F760 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040F764 AFA201C4 */  sw    $v0, 0x1c4($sp)
.L0040F768:
/* 0040F768 8F99857C */  lw    $t9, %call16(add_init)($gp)
/* 0040F76C 27A401C8 */  addiu $a0, $sp, 0x1c8
/* 0040F770 0320F809 */  jalr  $t9
/* 0040F774 00000000 */   nop   
/* 0040F778 1000FF8C */  b     .L0040F5AC
/* 0040F77C 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0040F780:
/* 0040F780 8F998568 */  lw    $t9, %call16(set_size)($gp)
/* 0040F784 8FA401CC */  lw    $a0, 0x1cc($sp)
/* 0040F788 8FA501D0 */  lw    $a1, 0x1d0($sp)
/* 0040F78C 0320F809 */  jalr  $t9
/* 0040F790 00000000 */   nop   
/* 0040F794 1000FF85 */  b     .L0040F5AC
/* 0040F798 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0040F79C:
/* 0040F79C 8FAD01D0 */  lw    $t5, 0x1d0($sp)
/* 0040F7A0 8F818998 */  lw     $at, %got(ms_stamp)($gp)
/* 0040F7A4 8FA801D4 */  lw    $t0, 0x1d4($sp)
/* 0040F7A8 AC2D0000 */  sw    $t5, ($at)
/* 0040F7AC 8F81899C */  lw     $at, %got(ls_stamp)($gp)
/* 0040F7B0 AC280000 */  sw    $t0, ($at)
/* 0040F7B4 8F818A7C */  lw     $at, %got(first_pmt_offset)($gp)
/* 0040F7B8 AC200000 */  sw    $zero, ($at)
/* 0040F7BC 8F818A74 */  lw     $at, %got(reversed_stack)($gp)
/* 0040F7C0 A0200000 */  sb    $zero, ($at)
/* 0040F7C4 8F818A78 */  lw     $at, %got(resident_text)($gp)
/* 0040F7C8 A0200000 */  sb    $zero, ($at)
/* 0040F7CC 8F818A54 */  lw     $at, %got(has_cia_in_file)($gp)
/* 0040F7D0 1000FF76 */  b     .L0040F5AC
/* 0040F7D4 A0200000 */   sb    $zero, ($at)
.L0040F7D8:
/* 0040F7D8 8F84886C */  lw     $a0, %got(syms)($gp)
/* 0040F7DC 8C840000 */  lw    $a0, ($a0)
/* 0040F7E0 10800005 */  beqz  $a0, .L0040F7F8
/* 0040F7E4 00000000 */   nop   
/* 0040F7E8 8F998674 */  lw    $t9, %call16(free_tree)($gp)
/* 0040F7EC 0320F809 */  jalr  $t9
/* 0040F7F0 00000000 */   nop   
/* 0040F7F4 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0040F7F8:
/* 0040F7F8 100011C8 */  b     .L00413F1C
/* 0040F7FC 00001025 */   move  $v0, $zero
.L0040F800:
/* 0040F800 8F998658 */  lw    $t9, %call16(build_u)($gp)
/* 0040F804 27A401C8 */  addiu $a0, $sp, 0x1c8
/* 0040F808 0320F809 */  jalr  $t9
/* 0040F80C 00000000 */   nop   
/* 0040F810 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040F814 00402025 */  move  $a0, $v0
/* 0040F818 27A21650 */  addiu $v0, $sp, 0x1650
/* 0040F81C 8F998018 */  lw    $t9, %got(func_0040E238)($gp)
/* 0040F820 2739E238 */  addiu $t9, %lo(func_0040E238) # addiu $t9, $t9, -0x1dc8
/* 0040F824 0320F809 */  jalr  $t9
/* 0040F828 00000000 */   nop   
/* 0040F82C 1000FF5F */  b     .L0040F5AC
/* 0040F830 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0040F834:
/* 0040F834 8F998658 */  lw    $t9, %call16(build_u)($gp)
/* 0040F838 27A401C8 */  addiu $a0, $sp, 0x1c8
/* 0040F83C 0320F809 */  jalr  $t9
/* 0040F840 00000000 */   nop   
/* 0040F844 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040F848 00402025 */  move  $a0, $v0
/* 0040F84C 27A21650 */  addiu $v0, $sp, 0x1650
/* 0040F850 8F998018 */  lw    $t9, %got(func_0040E238)($gp)
/* 0040F854 2739E238 */  addiu $t9, %lo(func_0040E238) # addiu $t9, $t9, -0x1dc8
/* 0040F858 0320F809 */  jalr  $t9
/* 0040F85C 00000000 */   nop   
/* 0040F860 1000FF52 */  b     .L0040F5AC
/* 0040F864 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0040F868:
/* 0040F868 8F998658 */  lw    $t9, %call16(build_u)($gp)
/* 0040F86C 27A401C8 */  addiu $a0, $sp, 0x1c8
/* 0040F870 0320F809 */  jalr  $t9
/* 0040F874 00000000 */   nop   
/* 0040F878 8FAE01F4 */  lw    $t6, 0x1f4($sp)
/* 0040F87C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040F880 00409825 */  move  $s3, $v0
/* 0040F884 15C00004 */  bnez  $t6, .L0040F898
/* 0040F888 00000000 */   nop   
/* 0040F88C AFA201F4 */  sw    $v0, 0x1f4($sp)
/* 0040F890 10000008 */  b     .L0040F8B4
/* 0040F894 AFA2164C */   sw    $v0, 0x164c($sp)
.L0040F898:
/* 0040F898 8F998018 */  lw    $t9, %got(func_0040E238)($gp)
/* 0040F89C 02602025 */  move  $a0, $s3
/* 0040F8A0 27A21650 */  addiu $v0, $sp, 0x1650
/* 0040F8A4 2739E238 */  addiu $t9, %lo(func_0040E238) # addiu $t9, $t9, -0x1dc8
/* 0040F8A8 0320F809 */  jalr  $t9
/* 0040F8AC 00000000 */   nop   
/* 0040F8B0 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0040F8B4:
/* 0040F8B4 93AF01C8 */  lbu   $t7, 0x1c8($sp)
/* 0040F8B8 24010051 */  li    $at, 81
/* 0040F8BC 8FB901CC */  lw    $t9, 0x1cc($sp)
/* 0040F8C0 15E10004 */  bne   $t7, $at, .L0040F8D4
/* 0040F8C4 93AA01C8 */   lbu   $t2, 0x1c8($sp)
/* 0040F8C8 8F818968 */  lw     $at, %got(current_line)($gp)
/* 0040F8CC 1000FF37 */  b     .L0040F5AC
/* 0040F8D0 AC390000 */   sw    $t9, ($at)
.L0040F8D4:
/* 0040F8D4 24010013 */  li    $at, 19
/* 0040F8D8 1541002B */  bne   $t2, $at, .L0040F988
/* 0040F8DC 00000000 */   nop   
/* 0040F8E0 93B81653 */  lbu   $t8, 0x1653($sp)
/* 0040F8E4 8FAB01C4 */  lw    $t3, 0x1c4($sp)
/* 0040F8E8 8FA901F4 */  lw    $t1, 0x1f4($sp)
/* 0040F8EC 1300FF2F */  beqz  $t8, .L0040F5AC
/* 0040F8F0 AFAB01DC */   sw    $t3, 0x1dc($sp)
/* 0040F8F4 8D22000C */  lw    $v0, 0xc($t1)
/* 0040F8F8 1040FF2C */  beqz  $v0, .L0040F5AC
/* 0040F8FC 00000000 */   nop   
/* 0040F900 904C0020 */  lbu   $t4, 0x20($v0)
/* 0040F904 24010021 */  li    $at, 33
/* 0040F908 24050020 */  li    $a1, 32
/* 0040F90C 1581FF27 */  bne   $t4, $at, .L0040F5AC
/* 0040F910 00000000 */   nop   
/* 0040F914 8FB001D8 */  lw    $s0, 0x1d8($sp)
/* 0040F918 24010020 */  li    $at, 32
/* 0040F91C 24030020 */  li    $v1, 32
/* 0040F920 01701021 */  addu  $v0, $t3, $s0
/* 0040F924 904DFFFF */  lbu   $t5, -1($v0)
/* 0040F928 15A10006 */  bne   $t5, $at, .L0040F944
/* 0040F92C 00000000 */   nop   
/* 0040F930 904EFFFE */  lbu   $t6, -2($v0)
.L0040F934:
/* 0040F934 2610FFFF */  addiu $s0, $s0, -1
/* 0040F938 2442FFFF */  addiu $v0, $v0, -1
/* 0040F93C 506EFFFD */  beql  $v1, $t6, .L0040F934
/* 0040F940 904EFFFE */   lbu   $t6, -2($v0)
.L0040F944:
/* 0040F944 8F918950 */  lw     $s1, %got(err)($gp)
/* 0040F948 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 0040F94C 24060001 */  li    $a2, 1
/* 0040F950 8E310000 */  lw    $s1, ($s1)
/* 0040F954 2407000A */  li    $a3, 10
/* 0040F958 0320F809 */  jalr  $t9
/* 0040F95C 02202025 */   move  $a0, $s1
/* 0040F960 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040F964 02202025 */  move  $a0, $s1
/* 0040F968 8FA501C4 */  lw    $a1, 0x1c4($sp)
/* 0040F96C 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0040F970 24060400 */  li    $a2, 1024
/* 0040F974 02003825 */  move  $a3, $s0
/* 0040F978 0320F809 */  jalr  $t9
/* 0040F97C 00000000 */   nop   
/* 0040F980 1000FF0A */  b     .L0040F5AC
/* 0040F984 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0040F988:
/* 0040F988 8F818A38 */  lw     $at, %got(opt_parms)($gp)
/* 0040F98C 240F0001 */  li    $t7, 1
/* 0040F990 24190001 */  li    $t9, 1
/* 0040F994 A0200000 */  sb    $zero, ($at)
/* 0040F998 8F818A3C */  lw     $at, %got(ignore_vreg)($gp)
/* 0040F99C A3B90127 */  sb    $t9, 0x127($sp)
/* 0040F9A0 1000FF02 */  b     .L0040F5AC
/* 0040F9A4 A02F0000 */   sb    $t7, ($at)
.L0040F9A8:
/* 0040F9A8 8F998658 */  lw    $t9, %call16(build_u)($gp)
/* 0040F9AC 27A401C8 */  addiu $a0, $sp, 0x1c8
/* 0040F9B0 0320F809 */  jalr  $t9
/* 0040F9B4 00000000 */   nop   
/* 0040F9B8 8FAA01AC */  lw    $t2, 0x1ac($sp)
/* 0040F9BC 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040F9C0 24010001 */  li    $at, 1
/* 0040F9C4 AC4A0008 */  sw    $t2, 8($v0)
/* 0040F9C8 8FB801CC */  lw    $t8, 0x1cc($sp)
/* 0040F9CC AFA201AC */  sw    $v0, 0x1ac($sp)
/* 0040F9D0 8FA901D0 */  lw    $t1, 0x1d0($sp)
/* 0040F9D4 57010004 */  bnel  $t8, $at, .L0040F9E8
/* 0040F9D8 8C430024 */   lw    $v1, 0x24($v0)
/* 0040F9DC 1000FEF3 */  b     .L0040F5AC
/* 0040F9E0 AFA9017C */   sw    $t1, 0x17c($sp)
/* 0040F9E4 8C430024 */  lw    $v1, 0x24($v0)
.L0040F9E8:
/* 0040F9E8 24010004 */  li    $at, 4
/* 0040F9EC 54610009 */  bnel  $v1, $at, .L0040FA14
/* 0040F9F0 24010005 */   li    $at, 5
/* 0040F9F4 8F818A74 */  lw     $at, %got(reversed_stack)($gp)
/* 0040F9F8 240C0001 */  li    $t4, 1
/* 0040F9FC 240BFFFC */  li    $t3, -4
/* 0040FA00 A02C0000 */  sb    $t4, ($at)
/* 0040FA04 8F818A7C */  lw     $at, %got(first_pmt_offset)($gp)
/* 0040FA08 1000FEE8 */  b     .L0040F5AC
/* 0040FA0C AC2B0000 */   sw    $t3, ($at)
/* 0040FA10 24010005 */  li    $at, 5
.L0040FA14:
/* 0040FA14 14610005 */  bne   $v1, $at, .L0040FA2C
/* 0040FA18 00000000 */   nop   
/* 0040FA1C 8F818A78 */  lw     $at, %got(resident_text)($gp)
/* 0040FA20 240D0001 */  li    $t5, 1
/* 0040FA24 1000FEE1 */  b     .L0040F5AC
/* 0040FA28 A02D0000 */   sb    $t5, ($at)
.L0040FA2C:
/* 0040FA2C 14600010 */  bnez  $v1, .L0040FA70
/* 0040FA30 24010007 */   li    $at, 7
/* 0040FA34 8FAE01D0 */  lw    $t6, 0x1d0($sp)
/* 0040FA38 8F8189A4 */  lw     $at, %got(source_language)($gp)
/* 0040FA3C AC2E0000 */  sw    $t6, ($at)
/* 0040FA40 24010004 */  li    $at, 4
/* 0040FA44 15C1FED9 */  bne   $t6, $at, .L0040F5AC
/* 0040FA48 00000000 */   nop   
/* 0040FA4C 8F828A44 */  lw     $v0, %got(glevel)($gp)
/* 0040FA50 90420000 */  lbu   $v0, ($v0)
/* 0040FA54 1040FED5 */  beqz  $v0, .L0040F5AC
/* 0040FA58 2C410003 */   sltiu $at, $v0, 3
/* 0040FA5C 1020FED3 */  beqz  $at, .L0040F5AC
/* 0040FA60 00000000 */   nop   
/* 0040FA64 8F818A38 */  lw     $at, %got(opt_parms)($gp)
/* 0040FA68 1000FED0 */  b     .L0040F5AC
/* 0040FA6C A0200000 */   sb    $zero, ($at)
.L0040FA70:
/* 0040FA70 54610006 */  bnel  $v1, $at, .L0040FA8C
/* 0040FA74 24010002 */   li    $at, 2
/* 0040FA78 8F818A54 */  lw     $at, %got(has_cia_in_file)($gp)
/* 0040FA7C 240F0001 */  li    $t7, 1
/* 0040FA80 1000FECA */  b     .L0040F5AC
/* 0040FA84 A02F0000 */   sb    $t7, ($at)
/* 0040FA88 24010002 */  li    $at, 2
.L0040FA8C:
/* 0040FA8C 1461FEC7 */  bne   $v1, $at, .L0040F5AC
/* 0040FA90 00000000 */   nop   
/* 0040FA94 8C590028 */  lw    $t9, 0x28($v0)
/* 0040FA98 8F8189D4 */  lw     $at, %got(stack_limit_bn)($gp)
/* 0040FA9C 1000FEC3 */  b     .L0040F5AC
/* 0040FAA0 AC390000 */   sw    $t9, ($at)
.L0040FAA4:
/* 0040FAA4 97AA1648 */  lhu   $t2, 0x1648($sp)
/* 0040FAA8 27A401C8 */  addiu $a0, $sp, 0x1c8
/* 0040FAAC 2418FFFF */  li    $t8, -1
/* 0040FAB0 014002B6 */  tne   $t2, $zero, 0xa
/* 0040FAB4 8F998658 */  lw    $t9, %call16(build_u)($gp)
/* 0040FAB8 AFA001F0 */  sw    $zero, 0x1f0($sp)
/* 0040FABC AFA001EC */  sw    $zero, 0x1ec($sp)
/* 0040FAC0 AFA00188 */  sw    $zero, 0x188($sp)
/* 0040FAC4 AFA00184 */  sw    $zero, 0x184($sp)
/* 0040FAC8 A3A00127 */  sb    $zero, 0x127($sp)
/* 0040FACC AFA001BC */  sw    $zero, 0x1bc($sp)
/* 0040FAD0 AFA001B0 */  sw    $zero, 0x1b0($sp)
/* 0040FAD4 AFA001B8 */  sw    $zero, 0x1b8($sp)
/* 0040FAD8 AFA001AC */  sw    $zero, 0x1ac($sp)
/* 0040FADC AFA001A8 */  sw    $zero, 0x1a8($sp)
/* 0040FAE0 A3A00182 */  sb    $zero, 0x182($sp)
/* 0040FAE4 A3A0017B */  sb    $zero, 0x17b($sp)
/* 0040FAE8 AFB8017C */  sw    $t8, 0x17c($sp)
/* 0040FAEC A3A00166 */  sb    $zero, 0x166($sp)
/* 0040FAF0 A3A00165 */  sb    $zero, 0x165($sp)
/* 0040FAF4 A3A00183 */  sb    $zero, 0x183($sp)
/* 0040FAF8 0320F809 */  jalr  $t9
/* 0040FAFC A3A0015F */   sb    $zero, 0x15f($sp)
/* 0040FB00 8FA901F4 */  lw    $t1, 0x1f4($sp)
/* 0040FB04 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040FB08 AFA201C0 */  sw    $v0, 0x1c0($sp)
/* 0040FB0C 15200009 */  bnez  $t1, .L0040FB34
/* 0040FB10 00000000 */   nop   
/* 0040FB14 AFA2164C */  sw    $v0, 0x164c($sp)
/* 0040FB18 AFA201F4 */  sw    $v0, 0x1f4($sp)
/* 0040FB1C AFA00158 */  sw    $zero, 0x158($sp)
/* 0040FB20 A3A00128 */  sb    $zero, 0x128($sp)
/* 0040FB24 A3A00134 */  sb    $zero, 0x134($sp)
/* 0040FB28 A3A00140 */  sb    $zero, 0x140($sp)
/* 0040FB2C 1000000D */  b     .L0040FB64
/* 0040FB30 A3A0014C */   sb    $zero, 0x14c($sp)
.L0040FB34:
/* 0040FB34 8F998018 */  lw    $t9, %got(func_0040E238)($gp)
/* 0040FB38 8FA401C0 */  lw    $a0, 0x1c0($sp)
/* 0040FB3C 27A21650 */  addiu $v0, $sp, 0x1650
/* 0040FB40 2739E238 */  addiu $t9, %lo(func_0040E238) # addiu $t9, $t9, -0x1dc8
/* 0040FB44 0320F809 */  jalr  $t9
/* 0040FB48 00000000 */   nop   
/* 0040FB4C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040FB50 AFA00158 */  sw    $zero, 0x158($sp)
/* 0040FB54 A3A00128 */  sb    $zero, 0x128($sp)
/* 0040FB58 A3A00134 */  sb    $zero, 0x134($sp)
/* 0040FB5C A3A00140 */  sb    $zero, 0x140($sp)
/* 0040FB60 A3A0014C */  sb    $zero, 0x14c($sp)
.L0040FB64:
/* 0040FB64 8F998664 */  lw    $t9, %call16(build_op)($gp)
/* 0040FB68 24040042 */  li    $a0, 66
/* 0040FB6C 0320F809 */  jalr  $t9
/* 0040FB70 00000000 */   nop   
/* 0040FB74 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040FB78 AFA201A4 */  sw    $v0, 0x1a4($sp)
/* 0040FB7C A4400022 */  sh    $zero, 0x22($v0)
/* 0040FB80 8F8189B4 */  lw     $at, %got(pseudo_leaf)($gp)
/* 0040FB84 AC400028 */  sw    $zero, 0x28($v0)
/* 0040FB88 240C0001 */  li    $t4, 1
/* 0040FB8C A02C0000 */  sb    $t4, ($at)
/* 0040FB90 8F8189F4 */  lw     $at, %got(framesz_relocatable)($gp)
/* 0040FB94 8F998564 */  lw    $t9, %call16(gen_sym)($gp)
/* 0040FB98 27A401C8 */  addiu $a0, $sp, 0x1c8
/* 0040FB9C A0200000 */  sb    $zero, ($at)
/* 0040FBA0 8F8189A8 */  lw     $at, %got(use_fp)($gp)
/* 0040FBA4 A0200000 */  sb    $zero, ($at)
/* 0040FBA8 8F8189AC */  lw     $at, %got(will_use_real_fp_for_proc)($gp)
/* 0040FBAC 0320F809 */  jalr  $t9
/* 0040FBB0 A0200000 */   sb    $zero, ($at)
/* 0040FBB4 8FA801D4 */  lw    $t0, 0x1d4($sp)
/* 0040FBB8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040FBBC 310B0004 */  andi  $t3, $t0, 4
/* 0040FBC0 000B682B */  sltu  $t5, $zero, $t3
/* 0040FBC4 1000FE79 */  b     .L0040F5AC
/* 0040FBC8 A3AD0167 */   sb    $t5, 0x167($sp)
.L0040FBCC:
/* 0040FBCC 8F998658 */  lw    $t9, %call16(build_u)($gp)
/* 0040FBD0 240E0001 */  li    $t6, 1
/* 0040FBD4 A3AE0182 */  sb    $t6, 0x182($sp)
/* 0040FBD8 0320F809 */  jalr  $t9
/* 0040FBDC 27A401C8 */   addiu $a0, $sp, 0x1c8
/* 0040FBE0 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040FBE4 00402025 */  move  $a0, $v0
/* 0040FBE8 27A21650 */  addiu $v0, $sp, 0x1650
/* 0040FBEC 8F998018 */  lw    $t9, %got(func_0040E238)($gp)
/* 0040FBF0 2739E238 */  addiu $t9, %lo(func_0040E238) # addiu $t9, $t9, -0x1dc8
/* 0040FBF4 0320F809 */  jalr  $t9
/* 0040FBF8 00000000 */   nop   
/* 0040FBFC 1000FE6B */  b     .L0040F5AC
/* 0040FC00 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0040FC04:
/* 0040FC04 8F998018 */  lw    $t9, %got(func_0040E238)($gp)
/* 0040FC08 8FA401A4 */  lw    $a0, 0x1a4($sp)
/* 0040FC0C 27A21650 */  addiu $v0, $sp, 0x1650
/* 0040FC10 2739E238 */  addiu $t9, %lo(func_0040E238) # addiu $t9, $t9, -0x1dc8
/* 0040FC14 0320F809 */  jalr  $t9
/* 0040FC18 00000000 */   nop   
/* 0040FC1C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040FC20 27A401C8 */  addiu $a0, $sp, 0x1c8
/* 0040FC24 8F998658 */  lw    $t9, %call16(build_u)($gp)
/* 0040FC28 0320F809 */  jalr  $t9
/* 0040FC2C 00000000 */   nop   
/* 0040FC30 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040FC34 00402025 */  move  $a0, $v0
/* 0040FC38 27A21650 */  addiu $v0, $sp, 0x1650
/* 0040FC3C 8F998018 */  lw    $t9, %got(func_0040E238)($gp)
/* 0040FC40 2739E238 */  addiu $t9, %lo(func_0040E238) # addiu $t9, $t9, -0x1dc8
/* 0040FC44 0320F809 */  jalr  $t9
/* 0040FC48 00000000 */   nop   
/* 0040FC4C 8FAF01F0 */  lw    $t7, 0x1f0($sp)
/* 0040FC50 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040FC54 51E00023 */  beql  $t7, $zero, .L0040FCE4
/* 0040FC58 93A90127 */   lbu   $t1, 0x127($sp)
/* 0040FC5C 8F998664 */  lw    $t9, %call16(build_op)($gp)
/* 0040FC60 2404001B */  li    $a0, 27
/* 0040FC64 0320F809 */  jalr  $t9
/* 0040FC68 00000000 */   nop   
/* 0040FC6C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040FC70 90590021 */  lbu   $t9, 0x21($v0)
/* 0040FC74 8F898A00 */  lw     $t1, %got(n_fp_parm_regs)($gp)
/* 0040FC78 332AFF1F */  andi  $t2, $t9, 0xff1f
/* 0040FC7C 8F8D89FC */  lw     $t5, %got(n_parm_regs)($gp)
/* 0040FC80 355800C0 */  ori   $t8, $t2, 0xc0
/* 0040FC84 A0580021 */  sb    $t8, 0x21($v0)
/* 0040FC88 8D2C0000 */  lw    $t4, ($t1)
/* 0040FC8C 8DAD0000 */  lw    $t5, ($t5)
/* 0040FC90 8FAF01EC */  lw    $t7, 0x1ec($sp)
/* 0040FC94 000C58C0 */  sll   $t3, $t4, 3
/* 0040FC98 000D7080 */  sll   $t6, $t5, 2
/* 0040FC9C 01CB082A */  slt   $at, $t6, $t3
/* 0040FCA0 10200002 */  beqz  $at, .L0040FCAC
/* 0040FCA4 240A0001 */   li    $t2, 1
/* 0040FCA8 01607025 */  move  $t6, $t3
.L0040FCAC:
/* 0040FCAC 01EE082A */  slt   $at, $t7, $t6
/* 0040FCB0 50200003 */  beql  $at, $zero, .L0040FCC0
/* 0040FCB4 AC4F0028 */   sw    $t7, 0x28($v0)
/* 0040FCB8 01C07825 */  move  $t7, $t6
/* 0040FCBC AC4F0028 */  sw    $t7, 0x28($v0)
.L0040FCC0:
/* 0040FCC0 AC400024 */  sw    $zero, 0x24($v0)
/* 0040FCC4 93B90182 */  lbu   $t9, 0x182($sp)
/* 0040FCC8 53200003 */  beql  $t9, $zero, .L0040FCD8
/* 0040FCCC 8FB801B0 */   lw    $t8, 0x1b0($sp)
/* 0040FCD0 AC4A0024 */  sw    $t2, 0x24($v0)
/* 0040FCD4 8FB801B0 */  lw    $t8, 0x1b0($sp)
.L0040FCD8:
/* 0040FCD8 AC580008 */  sw    $t8, 8($v0)
/* 0040FCDC AFA201B0 */  sw    $v0, 0x1b0($sp)
/* 0040FCE0 93A90127 */  lbu   $t1, 0x127($sp)
.L0040FCE4:
/* 0040FCE4 55200007 */  bnel  $t1, $zero, .L0040FD04
/* 0040FCE8 8FAD01B8 */   lw    $t5, 0x1b8($sp)
/* 0040FCEC 8F818A38 */  lw     $at, %got(opt_parms)($gp)
/* 0040FCF0 240C0001 */  li    $t4, 1
/* 0040FCF4 A02C0000 */  sb    $t4, ($at)
/* 0040FCF8 8F818A3C */  lw     $at, %got(ignore_vreg)($gp)
/* 0040FCFC A0200000 */  sb    $zero, ($at)
/* 0040FD00 8FAD01B8 */  lw    $t5, 0x1b8($sp)
.L0040FD04:
/* 0040FD04 51A00032 */  beql  $t5, $zero, .L0040FDD0
/* 0040FD08 8FAB01BC */   lw    $t3, 0x1bc($sp)
/* 0040FD0C 8F998484 */  lw    $t9, %call16(map_pdefs_to_regs)($gp)
/* 0040FD10 01A02025 */  move  $a0, $t5
/* 0040FD14 8FA5017C */  lw    $a1, 0x17c($sp)
/* 0040FD18 0320F809 */  jalr  $t9
/* 0040FD1C 00000000 */   nop   
/* 0040FD20 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040FD24 93AE0182 */  lbu   $t6, 0x182($sp)
/* 0040FD28 8F8B8A38 */  lw     $t3, %got(opt_parms)($gp)
/* 0040FD2C 916B0000 */  lbu   $t3, ($t3)
/* 0040FD30 5160001E */  beql  $t3, $zero, .L0040FDAC
/* 0040FD34 93AD017B */   lbu   $t5, 0x17b($sp)
/* 0040FD38 15C0000A */  bnez  $t6, .L0040FD64
/* 0040FD3C 8FAF01F0 */   lw    $t7, 0x1f0($sp)
/* 0040FD40 15E00004 */  bnez  $t7, .L0040FD54
/* 0040FD44 8FB9017C */   lw    $t9, 0x17c($sp)
/* 0040FD48 2401FFFF */  li    $at, -1
/* 0040FD4C 17210005 */  bne   $t9, $at, .L0040FD64
/* 0040FD50 00000000 */   nop   
.L0040FD54:
/* 0040FD54 8F8A89B4 */  lw     $t2, %got(pseudo_leaf)($gp)
/* 0040FD58 914A0000 */  lbu   $t2, ($t2)
/* 0040FD5C 51400013 */  beql  $t2, $zero, .L0040FDAC
/* 0040FD60 93AD017B */   lbu   $t5, 0x17b($sp)
.L0040FD64:
/* 0040FD64 8F9889A4 */  lw     $t8, %got(source_language)($gp)
/* 0040FD68 24010004 */  li    $at, 4
/* 0040FD6C 93A90167 */  lbu   $t1, 0x167($sp)
/* 0040FD70 8F180000 */  lw    $t8, ($t8)
/* 0040FD74 93AC0165 */  lbu   $t4, 0x165($sp)
/* 0040FD78 17010003 */  bne   $t8, $at, .L0040FD88
/* 0040FD7C 00000000 */   nop   
/* 0040FD80 5520000A */  bnel  $t1, $zero, .L0040FDAC
/* 0040FD84 93AD017B */   lbu   $t5, 0x17b($sp)
.L0040FD88:
/* 0040FD88 55800008 */  bnel  $t4, $zero, .L0040FDAC
/* 0040FD8C 93AD017B */   lbu   $t5, 0x17b($sp)
/* 0040FD90 8F998018 */  lw    $t9, %got(func_0040EED4)($gp)
/* 0040FD94 27A21650 */  addiu $v0, $sp, 0x1650
/* 0040FD98 2739EED4 */  addiu $t9, %lo(func_0040EED4) # addiu $t9, $t9, -0x112c
/* 0040FD9C 0320F809 */  jalr  $t9
/* 0040FDA0 00000000 */   nop   
/* 0040FDA4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040FDA8 93AD017B */  lbu   $t5, 0x17b($sp)
.L0040FDAC:
/* 0040FDAC 51A00008 */  beql  $t5, $zero, .L0040FDD0
/* 0040FDB0 8FAB01BC */   lw    $t3, 0x1bc($sp)
/* 0040FDB4 8F998018 */  lw    $t9, %got(func_0040F328)($gp)
/* 0040FDB8 27A21650 */  addiu $v0, $sp, 0x1650
/* 0040FDBC 2739F328 */  addiu $t9, %lo(func_0040F328) # addiu $t9, $t9, -0xcd8
/* 0040FDC0 0320F809 */  jalr  $t9
/* 0040FDC4 00000000 */   nop   
/* 0040FDC8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040FDCC 8FAB01BC */  lw    $t3, 0x1bc($sp)
.L0040FDD0:
/* 0040FDD0 11600013 */  beqz  $t3, .L0040FE20
/* 0040FDD4 00000000 */   nop   
/* 0040FDD8 8F8E8A84 */  lw     $t6, %got(domtag)($gp)
/* 0040FDDC 91CE0000 */  lbu   $t6, ($t6)
/* 0040FDE0 11C00008 */  beqz  $t6, .L0040FE04
/* 0040FDE4 00000000 */   nop   
/* 0040FDE8 8F998018 */  lw    $t9, %got(func_0040EF8C)($gp)
/* 0040FDEC 01602025 */  move  $a0, $t3
/* 0040FDF0 27A21650 */  addiu $v0, $sp, 0x1650
/* 0040FDF4 2739EF8C */  addiu $t9, %lo(func_0040EF8C) # addiu $t9, $t9, -0x1074
/* 0040FDF8 0320F809 */  jalr  $t9
/* 0040FDFC 00000000 */   nop   
/* 0040FE00 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0040FE04:
/* 0040FE04 8F998018 */  lw    $t9, %got(func_0040E280)($gp)
/* 0040FE08 8FA401C0 */  lw    $a0, 0x1c0($sp)
/* 0040FE0C 8FA501BC */  lw    $a1, 0x1bc($sp)
/* 0040FE10 2739E280 */  addiu $t9, %lo(func_0040E280) # addiu $t9, $t9, -0x1d80
/* 0040FE14 0320F809 */  jalr  $t9
/* 0040FE18 27A21650 */   addiu $v0, $sp, 0x1650
/* 0040FE1C 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0040FE20:
/* 0040FE20 8F84886C */  lw     $a0, %got(syms)($gp)
/* 0040FE24 8C840000 */  lw    $a0, ($a0)
/* 0040FE28 50800012 */  beql  $a0, $zero, .L0040FE74
/* 0040FE2C 8FAF01B0 */   lw    $t7, 0x1b0($sp)
/* 0040FE30 8F998018 */  lw    $t9, %got(func_0040EFBC)($gp)
/* 0040FE34 27A21650 */  addiu $v0, $sp, 0x1650
/* 0040FE38 2739EFBC */  addiu $t9, %lo(func_0040EFBC) # addiu $t9, $t9, -0x1044
/* 0040FE3C 0320F809 */  jalr  $t9
/* 0040FE40 00000000 */   nop   
/* 0040FE44 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040FE48 8FA401C0 */  lw    $a0, 0x1c0($sp)
/* 0040FE4C 27A21650 */  addiu $v0, $sp, 0x1650
/* 0040FE50 8F998018 */  lw    $t9, %got(func_0040E280)($gp)
/* 0040FE54 8F85886C */  lw     $a1, %got(syms)($gp)
/* 0040FE58 2739E280 */  addiu $t9, %lo(func_0040E280) # addiu $t9, $t9, -0x1d80
/* 0040FE5C 0320F809 */  jalr  $t9
/* 0040FE60 8CA50000 */   lw    $a1, ($a1)
/* 0040FE64 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040FE68 8F81886C */  lw     $at, %got(syms)($gp)
/* 0040FE6C AC200000 */  sw    $zero, ($at)
/* 0040FE70 8FAF01B0 */  lw    $t7, 0x1b0($sp)
.L0040FE74:
/* 0040FE74 51E00009 */  beql  $t7, $zero, .L0040FE9C
/* 0040FE78 8FB901AC */   lw    $t9, 0x1ac($sp)
/* 0040FE7C 8F998018 */  lw    $t9, %got(func_0040E280)($gp)
/* 0040FE80 8FA401C0 */  lw    $a0, 0x1c0($sp)
/* 0040FE84 01E02825 */  move  $a1, $t7
/* 0040FE88 2739E280 */  addiu $t9, %lo(func_0040E280) # addiu $t9, $t9, -0x1d80
/* 0040FE8C 0320F809 */  jalr  $t9
/* 0040FE90 27A21650 */   addiu $v0, $sp, 0x1650
/* 0040FE94 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040FE98 8FB901AC */  lw    $t9, 0x1ac($sp)
.L0040FE9C:
/* 0040FE9C 13200008 */  beqz  $t9, .L0040FEC0
/* 0040FEA0 03202825 */   move  $a1, $t9
/* 0040FEA4 8F998018 */  lw    $t9, %got(func_0040E280)($gp)
/* 0040FEA8 8FA401C0 */  lw    $a0, 0x1c0($sp)
/* 0040FEAC 27A21650 */  addiu $v0, $sp, 0x1650
/* 0040FEB0 2739E280 */  addiu $t9, %lo(func_0040E280) # addiu $t9, $t9, -0x1d80
/* 0040FEB4 0320F809 */  jalr  $t9
/* 0040FEB8 00000000 */   nop   
/* 0040FEBC 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0040FEC0:
/* 0040FEC0 8FAA01A8 */  lw    $t2, 0x1a8($sp)
/* 0040FEC4 8FB201C0 */  lw    $s2, 0x1c0($sp)
/* 0040FEC8 8FA901A4 */  lw    $t1, 0x1a4($sp)
/* 0040FECC 1140000C */  beqz  $t2, .L0040FF00
/* 0040FED0 00000000 */   nop   
/* 0040FED4 1249000A */  beq   $s2, $t1, .L0040FF00
/* 0040FED8 24020031 */   li    $v0, 49
/* 0040FEDC 924C0020 */  lbu   $t4, 0x20($s2)
.L0040FEE0:
/* 0040FEE0 8FAD01A8 */  lw    $t5, 0x1a8($sp)
/* 0040FEE4 544C0003 */  bnel  $v0, $t4, .L0040FEF4
/* 0040FEE8 8E520008 */   lw    $s2, 8($s2)
/* 0040FEEC AE4D0004 */  sw    $t5, 4($s2)
/* 0040FEF0 8E520008 */  lw    $s2, 8($s2)
.L0040FEF4:
/* 0040FEF4 8FAE01A4 */  lw    $t6, 0x1a4($sp)
/* 0040FEF8 564EFFF9 */  bnel  $s2, $t6, .L0040FEE0
/* 0040FEFC 924C0020 */   lbu   $t4, 0x20($s2)
.L0040FF00:
/* 0040FF00 10001006 */  b     .L00413F1C
/* 0040FF04 8FA2164C */   lw    $v0, 0x164c($sp)
.L0040FF08:
/* 0040FF08 8F998658 */  lw    $t9, %call16(build_u)($gp)
/* 0040FF0C 27A401C8 */  addiu $a0, $sp, 0x1c8
/* 0040FF10 0320F809 */  jalr  $t9
/* 0040FF14 00000000 */   nop   
/* 0040FF18 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040FF1C 00409825 */  move  $s3, $v0
/* 0040FF20 00402025 */  move  $a0, $v0
/* 0040FF24 8F998018 */  lw    $t9, %got(func_0040F0B8)($gp)
/* 0040FF28 27A21650 */  addiu $v0, $sp, 0x1650
/* 0040FF2C 2739F0B8 */  addiu $t9, %lo(func_0040F0B8) # addiu $t9, $t9, -0xf48
/* 0040FF30 0320F809 */  jalr  $t9
/* 0040FF34 00000000 */   nop   
/* 0040FF38 966B0022 */  lhu   $t3, 0x22($s3)
/* 0040FF3C 24010001 */  li    $at, 1
/* 0040FF40 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040FF44 1161FD99 */  beq   $t3, $at, .L0040F5AC
/* 0040FF48 240F0001 */   li    $t7, 1
/* 0040FF4C 1000FD97 */  b     .L0040F5AC
/* 0040FF50 A3AF017B */   sb    $t7, 0x17b($sp)
.L0040FF54:
/* 0040FF54 8F998A74 */  lw     $t9, %got(reversed_stack)($gp)
/* 0040FF58 93A301C9 */  lbu   $v1, 0x1c9($sp)
/* 0040FF5C 93390000 */  lbu   $t9, ($t9)
/* 0040FF60 00031E00 */  sll   $v1, $v1, 0x18
/* 0040FF64 00031F42 */  srl   $v1, $v1, 0x1d
/* 0040FF68 1320000F */  beqz  $t9, .L0040FFA8
/* 0040FF6C 38630001 */   xori  $v1, $v1, 1
/* 0040FF70 93A301C9 */  lbu   $v1, 0x1c9($sp)
/* 0040FF74 8FAA01D0 */  lw    $t2, 0x1d0($sp)
/* 0040FF78 8FB80184 */  lw    $t8, 0x184($sp)
/* 0040FF7C 00031E00 */  sll   $v1, $v1, 0x18
/* 0040FF80 00031F42 */  srl   $v1, $v1, 0x1d
/* 0040FF84 38630001 */  xori  $v1, $v1, 1
/* 0040FF88 0003182B */  sltu  $v1, $zero, $v1
/* 0040FF8C 54600004 */  bnel  $v1, $zero, .L0040FFA0
/* 0040FF90 006002B4 */   teq   $v1, $zero, 0xa
/* 0040FF94 0158182A */  slt   $v1, $t2, $t8
/* 0040FF98 38630001 */  xori  $v1, $v1, 1
/* 0040FF9C 006002B4 */  teq   $v1, $zero, 0xa
.L0040FFA0:
/* 0040FFA0 10000009 */  b     .L0040FFC8
/* 0040FFA4 00000000 */   nop   
.L0040FFA8:
/* 0040FFA8 0003182B */  sltu  $v1, $zero, $v1
/* 0040FFAC 14600005 */  bnez  $v1, .L0040FFC4
/* 0040FFB0 8FAC0188 */   lw    $t4, 0x188($sp)
/* 0040FFB4 8FA901D0 */  lw    $t1, 0x1d0($sp)
/* 0040FFB8 000C6823 */  negu  $t5, $t4
/* 0040FFBC 012D182A */  slt   $v1, $t1, $t5
/* 0040FFC0 38630001 */  xori  $v1, $v1, 1
.L0040FFC4:
/* 0040FFC4 006002B4 */  teq   $v1, $zero, 0xa
.L0040FFC8:
/* 0040FFC8 8F998658 */  lw    $t9, %call16(build_u)($gp)
/* 0040FFCC 27A401C8 */  addiu $a0, $sp, 0x1c8
/* 0040FFD0 0320F809 */  jalr  $t9
/* 0040FFD4 00000000 */   nop   
/* 0040FFD8 93AE01C9 */  lbu   $t6, 0x1c9($sp)
/* 0040FFDC 24010002 */  li    $at, 2
/* 0040FFE0 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0040FFE4 000E5E00 */  sll   $t3, $t6, 0x18
/* 0040FFE8 000B7F42 */  srl   $t7, $t3, 0x1d
/* 0040FFEC 15E10002 */  bne   $t7, $at, .L0040FFF8
/* 0040FFF0 8FB901B8 */   lw    $t9, 0x1b8($sp)
/* 0040FFF4 AC590000 */  sw    $t9, ($v0)
.L0040FFF8:
/* 0040FFF8 8FAA01B0 */  lw    $t2, 0x1b0($sp)
/* 0040FFFC AC4A0008 */  sw    $t2, 8($v0)
/* 00410000 1000FD6A */  b     .L0040F5AC
/* 00410004 AFA201B0 */   sw    $v0, 0x1b0($sp)
.L00410008:
/* 00410008 8F998658 */  lw    $t9, %call16(build_u)($gp)
/* 0041000C 2418FFFF */  li    $t8, -1
/* 00410010 AFB801D8 */  sw    $t8, 0x1d8($sp)
/* 00410014 0320F809 */  jalr  $t9
/* 00410018 27A401C8 */   addiu $a0, $sp, 0x1c8
/* 0041001C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00410020 00402025 */  move  $a0, $v0
/* 00410024 27A21650 */  addiu $v0, $sp, 0x1650
/* 00410028 8F998018 */  lw    $t9, %got(func_0040EC54)($gp)
/* 0041002C 2739EC54 */  addiu $t9, %lo(func_0040EC54) # addiu $t9, $t9, -0x13ac
/* 00410030 0320F809 */  jalr  $t9
/* 00410034 00000000 */   nop   
/* 00410038 1000FD5C */  b     .L0040F5AC
/* 0041003C 8FBC00CC */   lw    $gp, 0xcc($sp)
.L00410040:
/* 00410040 8F998658 */  lw    $t9, %call16(build_u)($gp)
/* 00410044 27A401C8 */  addiu $a0, $sp, 0x1c8
/* 00410048 0320F809 */  jalr  $t9
/* 0041004C 00000000 */   nop   
/* 00410050 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00410054 00402025 */  move  $a0, $v0
/* 00410058 27A21650 */  addiu $v0, $sp, 0x1650
/* 0041005C 8F998018 */  lw    $t9, %got(func_0040E238)($gp)
/* 00410060 2739E238 */  addiu $t9, %lo(func_0040E238) # addiu $t9, $t9, -0x1dc8
/* 00410064 0320F809 */  jalr  $t9
/* 00410068 00000000 */   nop   
/* 0041006C 1000FD4F */  b     .L0040F5AC
/* 00410070 8FBC00CC */   lw    $gp, 0xcc($sp)
.L00410074:
/* 00410074 97AC1648 */  lhu   $t4, 0x1648($sp)
/* 00410078 018002B6 */  tne   $t4, $zero, 0xa
/* 0041007C 8F998664 */  lw    $t9, %call16(build_op)($gp)
/* 00410080 24040088 */  li    $a0, 136
/* 00410084 0320F809 */  jalr  $t9
/* 00410088 00000000 */   nop   
/* 0041008C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00410090 8FA901A4 */  lw    $t1, 0x1a4($sp)
/* 00410094 00402025 */  move  $a0, $v0
/* 00410098 8F998018 */  lw    $t9, %got(func_0040E238)($gp)
/* 0041009C AC490004 */  sw    $t1, 4($v0)
/* 004100A0 27A21650 */  addiu $v0, $sp, 0x1650
/* 004100A4 2739E238 */  addiu $t9, %lo(func_0040E238) # addiu $t9, $t9, -0x1dc8
/* 004100A8 0320F809 */  jalr  $t9
/* 004100AC 00000000 */   nop   
/* 004100B0 1000FD3E */  b     .L0040F5AC
/* 004100B4 8FBC00CC */   lw    $gp, 0xcc($sp)
.L004100B8:
/* 004100B8 97AD1648 */  lhu   $t5, 0x1648($sp)
/* 004100BC 01A002B6 */  tne   $t5, $zero, 0xa
/* 004100C0 8F998658 */  lw    $t9, %call16(build_u)($gp)
/* 004100C4 27A401C8 */  addiu $a0, $sp, 0x1c8
/* 004100C8 0320F809 */  jalr  $t9
/* 004100CC 00000000 */   nop   
/* 004100D0 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004100D4 00409825 */  move  $s3, $v0
/* 004100D8 8FA401CC */  lw    $a0, 0x1cc($sp)
/* 004100DC 8F9981BC */  lw    $t9, %call16(find_label)($gp)
/* 004100E0 0320F809 */  jalr  $t9
/* 004100E4 00000000 */   nop   
/* 004100E8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004100EC AE620004 */  sw    $v0, 4($s3)
/* 004100F0 27A21650 */  addiu $v0, $sp, 0x1650
/* 004100F4 8F998018 */  lw    $t9, %got(func_0040E238)($gp)
/* 004100F8 02602025 */  move  $a0, $s3
/* 004100FC 2739E238 */  addiu $t9, %lo(func_0040E238) # addiu $t9, $t9, -0x1dc8
/* 00410100 0320F809 */  jalr  $t9
/* 00410104 00000000 */   nop   
/* 00410108 1000FD28 */  b     .L0040F5AC
/* 0041010C 8FBC00CC */   lw    $gp, 0xcc($sp)
.L00410110:
/* 00410110 97A41648 */  lhu   $a0, 0x1648($sp)
/* 00410114 8F998018 */  lw    $t9, %got(func_0040E2AC)($gp)
/* 00410118 27AF1004 */  addiu $t7, $sp, 0x1004
/* 0041011C 00045880 */  sll   $t3, $a0, 2
/* 00410120 2487FFFF */  addiu $a3, $a0, -1
/* 00410124 2739E2AC */  addiu $t9, %lo(func_0040E2AC) # addiu $t9, $t9, -0x1d54
/* 00410128 AFA700F4 */  sw    $a3, 0xf4($sp)
/* 0041012C 016FB821 */  addu  $s7, $t3, $t7
/* 00410130 0320F809 */  jalr  $t9
/* 00410134 27A21650 */   addiu $v0, $sp, 0x1650
/* 00410138 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0041013C 27A401C8 */  addiu $a0, $sp, 0x1c8
/* 00410140 8EE50000 */  lw    $a1, ($s7)
/* 00410144 8F99865C */  lw    $t9, %call16(build_u1)($gp)
/* 00410148 0320F809 */  jalr  $t9
/* 0041014C 00000000 */   nop   
/* 00410150 8FA700F4 */  lw    $a3, 0xf4($sp)
/* 00410154 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00410158 30E3FFFF */  andi  $v1, $a3, 0xffff
/* 0041015C 006002B6 */  tne   $v1, $zero, 0xa
/* 00410160 8F998018 */  lw    $t9, %got(func_0040E238)($gp)
/* 00410164 00402025 */  move  $a0, $v0
/* 00410168 27A21650 */  addiu $v0, $sp, 0x1650
/* 0041016C 2739E238 */  addiu $t9, %lo(func_0040E238) # addiu $t9, $t9, -0x1dc8
/* 00410170 0320F809 */  jalr  $t9
/* 00410174 A7A31648 */   sh    $v1, 0x1648($sp)
/* 00410178 1000FD0C */  b     .L0040F5AC
/* 0041017C 8FBC00CC */   lw    $gp, 0xcc($sp)
.L00410180:
/* 00410180 97B91648 */  lhu   $t9, 0x1648($sp)
/* 00410184 27B81004 */  addiu $t8, $sp, 0x1004
/* 00410188 27A21650 */  addiu $v0, $sp, 0x1650
/* 0041018C 03202025 */  move  $a0, $t9
/* 00410190 00195080 */  sll   $t2, $t9, 2
/* 00410194 2727FFFF */  addiu $a3, $t9, -1
/* 00410198 8F998018 */  lw    $t9, %got(func_0040E2AC)($gp)
/* 0041019C AFA700F4 */  sw    $a3, 0xf4($sp)
/* 004101A0 0158B821 */  addu  $s7, $t2, $t8
/* 004101A4 2739E2AC */  addiu $t9, %lo(func_0040E2AC) # addiu $t9, $t9, -0x1d54
/* 004101A8 0320F809 */  jalr  $t9
/* 004101AC 00000000 */   nop   
/* 004101B0 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004101B4 8FA401CC */  lw    $a0, 0x1cc($sp)
/* 004101B8 8F9981BC */  lw    $t9, %call16(find_label)($gp)
/* 004101BC 0320F809 */  jalr  $t9
/* 004101C0 00000000 */   nop   
/* 004101C4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004101C8 27A401C8 */  addiu $a0, $sp, 0x1c8
/* 004101CC 8EE50000 */  lw    $a1, ($s7)
/* 004101D0 8F998660 */  lw    $t9, %call16(build_u2)($gp)
/* 004101D4 00403025 */  move  $a2, $v0
/* 004101D8 0320F809 */  jalr  $t9
/* 004101DC 00000000 */   nop   
/* 004101E0 8FA700F4 */  lw    $a3, 0xf4($sp)
/* 004101E4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004101E8 00409825 */  move  $s3, $v0
/* 004101EC 30E3FFFF */  andi  $v1, $a3, 0xffff
/* 004101F0 006002B6 */  tne   $v1, $zero, 0xa
/* 004101F4 8F9983F4 */  lw    $t9, %call16(is_constant)($gp)
/* 004101F8 8C440000 */  lw    $a0, ($v0)
/* 004101FC A7A31648 */  sh    $v1, 0x1648($sp)
/* 00410200 0320F809 */  jalr  $t9
/* 00410204 00000000 */   nop   
/* 00410208 10400015 */  beqz  $v0, .L00410260
/* 0041020C 8FBC00CC */   lw    $gp, 0xcc($sp)
/* 00410210 8F998690 */  lw    $t9, %call16(is_zero)($gp)
/* 00410214 8E640000 */  lw    $a0, ($s3)
/* 00410218 0320F809 */  jalr  $t9
/* 0041021C 00000000 */   nop   
/* 00410220 93AC01C8 */  lbu   $t4, 0x1c8($sp)
/* 00410224 2C4D0001 */  sltiu $t5, $v0, 1
/* 00410228 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0041022C 3989007F */  xori  $t1, $t4, 0x7f
/* 00410230 2D290001 */  sltiu $t1, $t1, 1
/* 00410234 112D0007 */  beq   $t1, $t5, .L00410254
/* 00410238 240B0088 */   li    $t3, 136
/* 0041023C 8F998674 */  lw    $t9, %call16(free_tree)($gp)
/* 00410240 02602025 */  move  $a0, $s3
/* 00410244 0320F809 */  jalr  $t9
/* 00410248 00000000 */   nop   
/* 0041024C 1000FCD7 */  b     .L0040F5AC
/* 00410250 8FBC00CC */   lw    $gp, 0xcc($sp)
.L00410254:
/* 00410254 A26B0020 */  sb    $t3, 0x20($s3)
/* 00410258 10000024 */  b     .L004102EC
/* 0041025C AE600000 */   sw    $zero, ($s3)
.L00410260:
/* 00410260 8E620000 */  lw    $v0, ($s3)
/* 00410264 24010050 */  li    $at, 80
/* 00410268 904F0020 */  lbu   $t7, 0x20($v0)
/* 0041026C 15E1001F */  bne   $t7, $at, .L004102EC
/* 00410270 00000000 */   nop   
/* 00410274 8F99867C */  lw    $t9, %call16(dup_tree)($gp)
/* 00410278 00408025 */  move  $s0, $v0
/* 0041027C 8C440000 */  lw    $a0, ($v0)
/* 00410280 0320F809 */  jalr  $t9
/* 00410284 00000000 */   nop   
/* 00410288 926E0020 */  lbu   $t6, 0x20($s3)
/* 0041028C 2401007F */  li    $at, 127
/* 00410290 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00410294 15C10004 */  bne   $t6, $at, .L004102A8
/* 00410298 AE620000 */   sw    $v0, ($s3)
/* 0041029C 240A0026 */  li    $t2, 38
/* 004102A0 10000003 */  b     .L004102B0
/* 004102A4 A26A0020 */   sb    $t2, 0x20($s3)
.L004102A8:
/* 004102A8 2418007F */  li    $t8, 127
/* 004102AC A2780020 */  sb    $t8, 0x20($s3)
.L004102B0:
/* 004102B0 96620022 */  lhu   $v0, 0x22($s3)
/* 004102B4 24010001 */  li    $at, 1
/* 004102B8 10400007 */  beqz  $v0, .L004102D8
/* 004102BC 00000000 */   nop   
/* 004102C0 14410004 */  bne   $v0, $at, .L004102D4
/* 004102C4 240C0001 */   li    $t4, 1
/* 004102C8 24190002 */  li    $t9, 2
/* 004102CC 10000002 */  b     .L004102D8
/* 004102D0 A6790022 */   sh    $t9, 0x22($s3)
.L004102D4:
/* 004102D4 A66C0022 */  sh    $t4, 0x22($s3)
.L004102D8:
/* 004102D8 8F998674 */  lw    $t9, %call16(free_tree)($gp)
/* 004102DC 02002025 */  move  $a0, $s0
/* 004102E0 0320F809 */  jalr  $t9
/* 004102E4 00000000 */   nop   
/* 004102E8 8FBC00CC */  lw    $gp, 0xcc($sp)
.L004102EC:
/* 004102EC 8F998018 */  lw    $t9, %got(func_0040E238)($gp)
/* 004102F0 02602025 */  move  $a0, $s3
/* 004102F4 27A21650 */  addiu $v0, $sp, 0x1650
/* 004102F8 2739E238 */  addiu $t9, %lo(func_0040E238) # addiu $t9, $t9, -0x1dc8
/* 004102FC 0320F809 */  jalr  $t9
/* 00410300 00000000 */   nop   
/* 00410304 1000FCA9 */  b     .L0040F5AC
/* 00410308 8FBC00CC */   lw    $gp, 0xcc($sp)
.L0041030C:
/* 0041030C 97A91648 */  lhu   $t1, 0x1648($sp)
/* 00410310 012002B6 */  tne   $t1, $zero, 0xa
/* 00410314 8F9981BC */  lw    $t9, %call16(find_label)($gp)
/* 00410318 8FA401CC */  lw    $a0, 0x1cc($sp)
/* 0041031C 0320F809 */  jalr  $t9
/* 00410320 00000000 */   nop   
/* 00410324 27AD01C8 */  addiu $t5, $sp, 0x1c8
/* 00410328 8DAF0000 */  lw    $t7, ($t5)
/* 0041032C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00410330 00409825 */  move  $s3, $v0
/* 00410334 AC4F0020 */  sw    $t7, 0x20($v0)
/* 00410338 8DAB0004 */  lw    $t3, 4($t5)
/* 0041033C 8F998018 */  lw    $t9, %got(func_0040E238)($gp)
/* 00410340 00402025 */  move  $a0, $v0
/* 00410344 AC4B0024 */  sw    $t3, 0x24($v0)
/* 00410348 8DAF0008 */  lw    $t7, 8($t5)
/* 0041034C 2739E238 */  addiu $t9, %lo(func_0040E238) # addiu $t9, $t9, -0x1dc8
/* 00410350 AC4F0028 */  sw    $t7, 0x28($v0)
/* 00410354 8DAB000C */  lw    $t3, 0xc($t5)
/* 00410358 AC4B002C */  sw    $t3, 0x2c($v0)
/* 0041035C 8DAF0010 */  lw    $t7, 0x10($t5)
/* 00410360 AC4F0030 */  sw    $t7, 0x30($v0)
/* 00410364 8DAB0014 */  lw    $t3, 0x14($t5)
/* 00410368 AC4B0034 */  sw    $t3, 0x34($v0)
/* 0041036C 8DAF0018 */  lw    $t7, 0x18($t5)
/* 00410370 AC4F0038 */  sw    $t7, 0x38($v0)
/* 00410374 8DAB001C */  lw    $t3, 0x1c($t5)
/* 00410378 AC400030 */  sw    $zero, 0x30($v0)
/* 0041037C AC4B003C */  sw    $t3, 0x3c($v0)
/* 00410380 0320F809 */  jalr  $t9
/* 00410384 27A21650 */   addiu $v0, $sp, 0x1650
/* 00410388 97AE01CA */  lhu   $t6, 0x1ca($sp)
/* 0041038C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00410390 31CA0008 */  andi  $t2, $t6, 8
/* 00410394 51400009 */  beql  $t2, $zero, .L004103BC
/* 00410398 97B801CA */   lhu   $t8, 0x1ca($sp)
/* 0041039C 8F998018 */  lw    $t9, %got(func_0040F1BC)($gp)
/* 004103A0 02602025 */  move  $a0, $s3
/* 004103A4 27A21650 */  addiu $v0, $sp, 0x1650
/* 004103A8 2739F1BC */  addiu $t9, %lo(func_0040F1BC) # addiu $t9, $t9, -0xe44
/* 004103AC 0320F809 */  jalr  $t9
/* 004103B0 00000000 */   nop   
/* 004103B4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004103B8 97B801CA */  lhu   $t8, 0x1ca($sp)
.L004103BC:
/* 004103BC 240C0001 */  li    $t4, 1
/* 004103C0 33190002 */  andi  $t9, $t8, 2
/* 004103C4 1320FC79 */  beqz  $t9, .L0040F5AC
/* 004103C8 00000000 */   nop   
/* 004103CC 1000FC77 */  b     .L0040F5AC
/* 004103D0 A3AC0166 */   sb    $t4, 0x166($sp)
.L004103D4:
/* 004103D4 97A91648 */  lhu   $t1, 0x1648($sp)
/* 004103D8 012002B6 */  tne   $t1, $zero, 0xa
/* 004103DC 8F9981B8 */  lw    $t9, %call16(search_label)($gp)
/* 004103E0 8FA401CC */  lw    $a0, 0x1cc($sp)
/* 004103E4 0320F809 */  jalr  $t9
/* 004103E8 00000000 */   nop   
/* 004103EC 14400040 */  bnez  $v0, .L004104F0
/* 004103F0 8FBC00CC */   lw    $gp, 0xcc($sp)
/* 004103F4 8F8D8038 */  lw    $t5, %got(RO_10009098)($gp)
/* 004103F8 24040004 */  li    $a0, 4
/* 004103FC 24050581 */  li    $a1, 1409
/* 00410400 25AD9098 */  addiu $t5, %lo(RO_10009098) # addiu $t5, $t5, -0x6f68
/* 00410404 25AA0048 */  addiu $t2, $t5, 0x48
/* 00410408 03A07025 */  move  $t6, $sp
.L0041040C:
/* 0041040C 89AF0000 */  lwl   $t7, ($t5)
/* 00410410 99AF0003 */  lwr   $t7, 3($t5)
/* 00410414 25AD000C */  addiu $t5, $t5, 0xc
/* 00410418 25CE000C */  addiu $t6, $t6, 0xc
/* 0041041C A9CFFFFC */  swl   $t7, -4($t6)
/* 00410420 B9CFFFFF */  swr   $t7, -1($t6)
/* 00410424 89ABFFF8 */  lwl   $t3, -8($t5)
/* 00410428 99ABFFFB */  lwr   $t3, -5($t5)
/* 0041042C A9CB0000 */  swl   $t3, ($t6)
/* 00410430 B9CB0003 */  swr   $t3, 3($t6)
/* 00410434 89AFFFFC */  lwl   $t7, -4($t5)
/* 00410438 99AFFFFF */  lwr   $t7, -1($t5)
/* 0041043C A9CF0004 */  swl   $t7, 4($t6)
/* 00410440 15AAFFF2 */  bne   $t5, $t2, .L0041040C
/* 00410444 B9CF0007 */   swr   $t7, 7($t6)
/* 00410448 89AF0000 */  lwl   $t7, ($t5)
/* 0041044C 99AF0003 */  lwr   $t7, 3($t5)
/* 00410450 8F988038 */  lw    $t8, %got(RO_10009048)($gp)
/* 00410454 03A04825 */  move  $t1, $sp
/* 00410458 A9CF0008 */  swl   $t7, 8($t6)
/* 0041045C B9CF000B */  swr   $t7, 0xb($t6)
/* 00410460 89AB0004 */  lwl   $t3, 4($t5)
/* 00410464 99AB0007 */  lwr   $t3, 7($t5)
/* 00410468 27189048 */  addiu $t8, %lo(RO_10009048) # addiu $t8, $t8, -0x6fb8
/* 0041046C 270A0048 */  addiu $t2, $t8, 0x48
/* 00410470 A9CB000C */  swl   $t3, 0xc($t6)
/* 00410474 B9CB000F */  swr   $t3, 0xf($t6)
.L00410478:
/* 00410478 8B0C0000 */  lwl   $t4, ($t8)
/* 0041047C 9B0C0003 */  lwr   $t4, 3($t8)
/* 00410480 2718000C */  addiu $t8, $t8, 0xc
/* 00410484 2529000C */  addiu $t1, $t1, 0xc
/* 00410488 A92C004C */  swl   $t4, 0x4c($t1)
/* 0041048C B92C004F */  swr   $t4, 0x4f($t1)
/* 00410490 8B19FFF8 */  lwl   $t9, -8($t8)
/* 00410494 9B19FFFB */  lwr   $t9, -5($t8)
/* 00410498 A9390050 */  swl   $t9, 0x50($t1)
/* 0041049C B9390053 */  swr   $t9, 0x53($t1)
/* 004104A0 8B0CFFFC */  lwl   $t4, -4($t8)
/* 004104A4 9B0CFFFF */  lwr   $t4, -1($t8)
/* 004104A8 A92C0054 */  swl   $t4, 0x54($t1)
/* 004104AC 170AFFF2 */  bne   $t8, $t2, .L00410478
/* 004104B0 B92C0057 */   swr   $t4, 0x57($t1)
/* 004104B4 8B0C0000 */  lwl   $t4, ($t8)
/* 004104B8 9B0C0003 */  lwr   $t4, 3($t8)
/* 004104BC A92C0058 */  swl   $t4, 0x58($t1)
/* 004104C0 B92C005B */  swr   $t4, 0x5b($t1)
/* 004104C4 8B190004 */  lwl   $t9, 4($t8)
/* 004104C8 9B190007 */  lwr   $t9, 7($t8)
/* 004104CC A939005C */  swl   $t9, 0x5c($t1)
/* 004104D0 B939005F */  swr   $t9, 0x5f($t1)
/* 004104D4 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 004104D8 8FA7000C */  lw    $a3, 0xc($sp)
/* 004104DC 8FA60008 */  lw    $a2, 8($sp)
/* 004104E0 0320F809 */  jalr  $t9
/* 004104E4 00000000 */   nop   
/* 004104E8 1000FC30 */  b     .L0040F5AC
/* 004104EC 8FBC00CC */   lw    $gp, 0xcc($sp)
.L004104F0:
/* 004104F0 97AD01CA */  lhu   $t5, 0x1ca($sp)
/* 004104F4 A44D0022 */  sh    $t5, 0x22($v0)
/* 004104F8 8FAE01D0 */  lw    $t6, 0x1d0($sp)
/* 004104FC 1000FC2B */  b     .L0040F5AC
/* 00410500 AC4E0028 */   sw    $t6, 0x28($v0)
.L00410504:
/* 00410504 97AB1648 */  lhu   $t3, 0x1648($sp)
/* 00410508 016002B6 */  tne   $t3, $zero, 0xa
/* 0041050C 8F9981BC */  lw    $t9, %call16(find_label)($gp)
/* 00410510 8FA401CC */  lw    $a0, 0x1cc($sp)
/* 00410514 2415FFFF */  li    $s5, -1
/* 00410518 0320F809 */  jalr  $t9
/* 0041051C 2414FFFF */   li    $s4, -1
/* 00410520 27AF01C8 */  addiu $t7, $sp, 0x1c8
/* 00410524 8DF80000 */  lw    $t8, ($t7)
/* 00410528 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0041052C 24090001 */  li    $t1, 1
/* 00410530 AC580020 */  sw    $t8, 0x20($v0)
/* 00410534 8DEA0004 */  lw    $t2, 4($t7)
/* 00410538 8F998018 */  lw    $t9, %got(func_0040E238)($gp)
/* 0041053C 00409825 */  move  $s3, $v0
/* 00410540 AC4A0024 */  sw    $t2, 0x24($v0)
/* 00410544 8DF80008 */  lw    $t8, 8($t7)
/* 00410548 00402025 */  move  $a0, $v0
/* 0041054C 2739E238 */  addiu $t9, %lo(func_0040E238) # addiu $t9, $t9, -0x1dc8
/* 00410550 AC580028 */  sw    $t8, 0x28($v0)
/* 00410554 8DEA000C */  lw    $t2, 0xc($t7)
/* 00410558 AC4A002C */  sw    $t2, 0x2c($v0)
/* 0041055C 8DF80010 */  lw    $t8, 0x10($t7)
/* 00410560 AC580030 */  sw    $t8, 0x30($v0)
/* 00410564 8DEA0014 */  lw    $t2, 0x14($t7)
/* 00410568 AC4A0034 */  sw    $t2, 0x34($v0)
/* 0041056C 8DF80018 */  lw    $t8, 0x18($t7)
/* 00410570 AC580038 */  sw    $t8, 0x38($v0)
/* 00410574 8DEA001C */  lw    $t2, 0x1c($t7)
/* 00410578 AC40002C */  sw    $zero, 0x2c($v0)
/* 0041057C AC490030 */  sw    $t1, 0x30($v0)
/* 00410580 AC4A003C */  sw    $t2, 0x3c($v0)
/* 00410584 0320F809 */  jalr  $t9
/* 00410588 27A21650 */   addiu $v0, $sp, 0x1650
/* 0041058C 8FB901F4 */  lw    $t9, 0x1f4($sp)
/* 00410590 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00410594 24110001 */  li    $s1, 1
/* 00410598 13200014 */  beqz  $t9, .L004105EC
/* 0041059C 03209025 */   move  $s2, $t9
/* 004105A0 932C0020 */  lbu   $t4, 0x20($t9)
/* 004105A4 2401008C */  li    $at, 140
/* 004105A8 55810006 */  bnel  $t4, $at, .L004105C4
/* 004105AC 8E52000C */   lw    $s2, 0xc($s2)
/* 004105B0 8E6D0024 */  lw    $t5, 0x24($s3)
/* 004105B4 8F2E0024 */  lw    $t6, 0x24($t9)
/* 004105B8 11AE000C */  beq   $t5, $t6, .L004105EC
/* 004105BC 00000000 */   nop   
/* 004105C0 8E52000C */  lw    $s2, 0xc($s2)
.L004105C4:
/* 004105C4 12400009 */  beqz  $s2, .L004105EC
/* 004105C8 00000000 */   nop   
/* 004105CC 924B0020 */  lbu   $t3, 0x20($s2)
/* 004105D0 2401008C */  li    $at, 140
/* 004105D4 5561FFFB */  bnel  $t3, $at, .L004105C4
/* 004105D8 8E52000C */   lw    $s2, 0xc($s2)
/* 004105DC 8E6F0024 */  lw    $t7, 0x24($s3)
/* 004105E0 8E4A0024 */  lw    $t2, 0x24($s2)
/* 004105E4 55EAFFF7 */  bnel  $t7, $t2, .L004105C4
/* 004105E8 8E52000C */   lw    $s2, 0xc($s2)
.L004105EC:
/* 004105EC 5240009A */  beql  $s2, $zero, .L00410858
/* 004105F0 8FB301D0 */   lw    $s3, 0x1d0($sp)
/* 004105F4 8E420000 */  lw    $v0, ($s2)
/* 004105F8 24010004 */  li    $at, 4
/* 004105FC 90580020 */  lbu   $t8, 0x20($v0)
/* 00410600 5701002E */  bnel  $t8, $at, .L004106BC
/* 00410604 8E42000C */   lw    $v0, 0xc($s2)
/* 00410608 8C430004 */  lw    $v1, 4($v0)
/* 0041060C 24010049 */  li    $at, 73
/* 00410610 90690020 */  lbu   $t1, 0x20($v1)
/* 00410614 55210013 */  bnel  $t1, $at, .L00410664
/* 00410618 8C430000 */   lw    $v1, ($v0)
/* 0041061C 906C0021 */  lbu   $t4, 0x21($v1)
/* 00410620 3C010501 */  lui   $at, 0x501
/* 00410624 3199001F */  andi  $t9, $t4, 0x1f
/* 00410628 2F2D0020 */  sltiu $t5, $t9, 0x20
/* 0041062C 000D7023 */  negu  $t6, $t5
/* 00410630 01C15824 */  and   $t3, $t6, $at
/* 00410634 032B7804 */  sllv  $t7, $t3, $t9
/* 00410638 05E30005 */  bgezl $t7, .L00410650
/* 0041063C 8C740030 */   lw    $s4, 0x30($v1)
/* 00410640 8C750030 */  lw    $s5, 0x30($v1)
/* 00410644 10000083 */  b     .L00410854
/* 00410648 8C740034 */   lw    $s4, 0x34($v1)
/* 0041064C 8C740030 */  lw    $s4, 0x30($v1)
.L00410650:
/* 00410650 06820081 */  bltzl $s4, .L00410858
/* 00410654 8FB301D0 */   lw    $s3, 0x1d0($sp)
/* 00410658 1000007E */  b     .L00410854
/* 0041065C 0000A825 */   move  $s5, $zero
/* 00410660 8C430000 */  lw    $v1, ($v0)
.L00410664:
/* 00410664 24010049 */  li    $at, 73
/* 00410668 906A0020 */  lbu   $t2, 0x20($v1)
/* 0041066C 5541007A */  bnel  $t2, $at, .L00410858
/* 00410670 8FB301D0 */   lw    $s3, 0x1d0($sp)
/* 00410674 90780021 */  lbu   $t8, 0x21($v1)
/* 00410678 3C010501 */  lui   $at, 0x501
/* 0041067C 3309001F */  andi  $t1, $t8, 0x1f
/* 00410680 2D2C0020 */  sltiu $t4, $t1, 0x20
/* 00410684 000C6823 */  negu  $t5, $t4
/* 00410688 01A17024 */  and   $t6, $t5, $at
/* 0041068C 012E5804 */  sllv  $t3, $t6, $t1
/* 00410690 05630005 */  bgezl $t3, .L004106A8
/* 00410694 8C740030 */   lw    $s4, 0x30($v1)
/* 00410698 8C750030 */  lw    $s5, 0x30($v1)
/* 0041069C 1000006D */  b     .L00410854
/* 004106A0 8C740034 */   lw    $s4, 0x34($v1)
/* 004106A4 8C740030 */  lw    $s4, 0x30($v1)
.L004106A8:
/* 004106A8 0682006B */  bltzl $s4, .L00410858
/* 004106AC 8FB301D0 */   lw    $s3, 0x1d0($sp)
/* 004106B0 10000068 */  b     .L00410854
/* 004106B4 0000A825 */   move  $s5, $zero
/* 004106B8 8E42000C */  lw    $v0, 0xc($s2)
.L004106BC:
/* 004106BC 24010026 */  li    $at, 38
/* 004106C0 90590020 */  lbu   $t9, 0x20($v0)
/* 004106C4 57210064 */  bnel  $t9, $at, .L00410858
/* 004106C8 8FB301D0 */   lw    $s3, 0x1d0($sp)
/* 004106CC 8C44000C */  lw    $a0, 0xc($v0)
/* 004106D0 2401007B */  li    $at, 123
/* 004106D4 908F0020 */  lbu   $t7, 0x20($a0)
/* 004106D8 55E1005F */  bnel  $t7, $at, .L00410858
/* 004106DC 8FB301D0 */   lw    $s3, 0x1d0($sp)
/* 004106E0 8C8A0000 */  lw    $t2, ($a0)
/* 004106E4 24010004 */  li    $at, 4
/* 004106E8 91580020 */  lbu   $t8, 0x20($t2)
/* 004106EC 5701005A */  bnel  $t8, $at, .L00410858
/* 004106F0 8FB301D0 */   lw    $s3, 0x1d0($sp)
/* 004106F4 8C4C0000 */  lw    $t4, ($v0)
/* 004106F8 24010052 */  li    $at, 82
/* 004106FC 8D830000 */  lw    $v1, ($t4)
/* 00410700 906D0020 */  lbu   $t5, 0x20($v1)
/* 00410704 55A10004 */  bnel  $t5, $at, .L00410718
/* 00410708 8C730000 */   lw    $s3, ($v1)
/* 0041070C 10000002 */  b     .L00410718
/* 00410710 00609825 */   move  $s3, $v1
/* 00410714 8C730000 */  lw    $s3, ($v1)
.L00410718:
/* 00410718 908E0021 */  lbu   $t6, 0x21($a0)
/* 0041071C 92790021 */  lbu   $t9, 0x21($s3)
/* 00410720 00808025 */  move  $s0, $a0
/* 00410724 000E4E00 */  sll   $t1, $t6, 0x18
/* 00410728 00197E00 */  sll   $t7, $t9, 0x18
/* 0041072C 000F5742 */  srl   $t2, $t7, 0x1d
/* 00410730 00095F42 */  srl   $t3, $t1, 0x1d
/* 00410734 556A0048 */  bnel  $t3, $t2, .L00410858
/* 00410738 8FB301D0 */   lw    $s3, 0x1d0($sp)
/* 0041073C 8C980024 */  lw    $t8, 0x24($a0)
/* 00410740 8E6C0024 */  lw    $t4, 0x24($s3)
/* 00410744 570C0044 */  bnel  $t8, $t4, .L00410858
/* 00410748 8FB301D0 */   lw    $s3, 0x1d0($sp)
/* 0041074C 8F82898C */  lw     $v0, %got(lsb_first)($gp)
/* 00410750 90420000 */  lbu   $v0, ($v0)
/* 00410754 10400005 */  beqz  $v0, .L0041076C
/* 00410758 00000000 */   nop   
/* 0041075C 8C8D002C */  lw    $t5, 0x2c($a0)
/* 00410760 8E6E002C */  lw    $t6, 0x2c($s3)
/* 00410764 51AE000C */  beql  $t5, $t6, .L00410798
/* 00410768 8E6C0028 */   lw    $t4, 0x28($s3)
.L0041076C:
/* 0041076C 5440003A */  bnel  $v0, $zero, .L00410858
/* 00410770 8FB301D0 */   lw    $s3, 0x1d0($sp)
/* 00410774 8E09002C */  lw    $t1, 0x2c($s0)
/* 00410778 8E190028 */  lw    $t9, 0x28($s0)
/* 0041077C 8E6B002C */  lw    $t3, 0x2c($s3)
/* 00410780 8E6A0028 */  lw    $t2, 0x28($s3)
/* 00410784 01397821 */  addu  $t7, $t1, $t9
/* 00410788 016AC021 */  addu  $t8, $t3, $t2
/* 0041078C 55F80032 */  bnel  $t7, $t8, .L00410858
/* 00410790 8FB301D0 */   lw    $s3, 0x1d0($sp)
/* 00410794 8E6C0028 */  lw    $t4, 0x28($s3)
.L00410798:
/* 00410798 8E0D0028 */  lw    $t5, 0x28($s0)
/* 0041079C 558D002E */  bnel  $t4, $t5, .L00410858
/* 004107A0 8FB301D0 */   lw    $s3, 0x1d0($sp)
/* 004107A4 8E030000 */  lw    $v1, ($s0)
/* 004107A8 24010049 */  li    $at, 73
/* 004107AC 8C620000 */  lw    $v0, ($v1)
/* 004107B0 904E0020 */  lbu   $t6, 0x20($v0)
/* 004107B4 55C10013 */  bnel  $t6, $at, .L00410804
/* 004107B8 8C620004 */   lw    $v0, 4($v1)
/* 004107BC 90490021 */  lbu   $t1, 0x21($v0)
/* 004107C0 3C010501 */  lui   $at, 0x501
/* 004107C4 3139001F */  andi  $t9, $t1, 0x1f
/* 004107C8 2F2B0020 */  sltiu $t3, $t9, 0x20
/* 004107CC 000B5023 */  negu  $t2, $t3
/* 004107D0 01417824 */  and   $t7, $t2, $at
/* 004107D4 032FC004 */  sllv  $t8, $t7, $t9
/* 004107D8 07030005 */  bgezl $t8, .L004107F0
/* 004107DC 8C540030 */   lw    $s4, 0x30($v0)
/* 004107E0 8C550030 */  lw    $s5, 0x30($v0)
/* 004107E4 1000001B */  b     .L00410854
/* 004107E8 8C540034 */   lw    $s4, 0x34($v0)
/* 004107EC 8C540030 */  lw    $s4, 0x30($v0)
.L004107F0:
/* 004107F0 06820019 */  bltzl $s4, .L00410858
/* 004107F4 8FB301D0 */   lw    $s3, 0x1d0($sp)
/* 004107F8 10000016 */  b     .L00410854
/* 004107FC 0000A825 */   move  $s5, $zero
/* 00410800 8C620004 */  lw    $v0, 4($v1)
.L00410804:
/* 00410804 24010049 */  li    $at, 73
/* 00410808 904C0020 */  lbu   $t4, 0x20($v0)
/* 0041080C 55810012 */  bnel  $t4, $at, .L00410858
/* 00410810 8FB301D0 */   lw    $s3, 0x1d0($sp)
/* 00410814 904D0021 */  lbu   $t5, 0x21($v0)
/* 00410818 3C010501 */  lui   $at, 0x501
/* 0041081C 31AE001F */  andi  $t6, $t5, 0x1f
/* 00410820 2DC90020 */  sltiu $t1, $t6, 0x20
/* 00410824 00095823 */  negu  $t3, $t1
/* 00410828 01615024 */  and   $t2, $t3, $at
/* 0041082C 01CA7804 */  sllv  $t7, $t2, $t6
/* 00410830 05E30005 */  bgezl $t7, .L00410848
/* 00410834 8C540030 */   lw    $s4, 0x30($v0)
/* 00410838 8C550030 */  lw    $s5, 0x30($v0)
/* 0041083C 10000005 */  b     .L00410854
/* 00410840 8C540034 */   lw    $s4, 0x34($v0)
/* 00410844 8C540030 */  lw    $s4, 0x30($v0)
.L00410848:
/* 00410848 06820003 */  bltzl $s4, .L00410858
/* 0041084C 8FB301D0 */   lw    $s3, 0x1d0($sp)
/* 00410850 0000A825 */  move  $s5, $zero
.L00410854:
/* 00410854 8FB301D0 */  lw    $s3, 0x1d0($sp)
.L00410858:
/* 00410858 12600071 */  beqz  $s3, .L00410A20
/* 0041085C 00000000 */   nop   
/* 00410860 26730001 */  addiu $s3, $s3, 1
.L00410864:
/* 00410864 8F998654 */  lw    $t9, %call16(new_tree)($gp)
/* 00410868 0320F809 */  jalr  $t9
/* 0041086C 00000000 */   nop   
/* 00410870 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00410874 00408025 */  move  $s0, $v0
/* 00410878 24440020 */  addiu $a0, $v0, 0x20
/* 0041087C 8F9986E4 */  lw    $t9, %call16(readuinstr)($gp)
/* 00410880 00002825 */  move  $a1, $zero
/* 00410884 0320F809 */  jalr  $t9
/* 00410888 00000000 */   nop   
/* 0041088C 92190020 */  lbu   $t9, 0x20($s0)
/* 00410890 24010088 */  li    $at, 136
/* 00410894 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00410898 1321003E */  beq   $t9, $at, .L00410994
/* 0041089C 24040004 */   li    $a0, 4
/* 004108A0 8F988038 */  lw    $t8, %got(RO_10008FF8)($gp)
/* 004108A4 2405060F */  li    $a1, 1551
/* 004108A8 03A04825 */  move  $t1, $sp
/* 004108AC 27188FF8 */  addiu $t8, %lo(RO_10008FF8) # addiu $t8, $t8, -0x7008
/* 004108B0 270B0048 */  addiu $t3, $t8, 0x48
.L004108B4:
/* 004108B4 8B0D0000 */  lwl   $t5, ($t8)
/* 004108B8 9B0D0003 */  lwr   $t5, 3($t8)
/* 004108BC 2718000C */  addiu $t8, $t8, 0xc
/* 004108C0 2529000C */  addiu $t1, $t1, 0xc
/* 004108C4 A92DFFFC */  swl   $t5, -4($t1)
/* 004108C8 B92DFFFF */  swr   $t5, -1($t1)
/* 004108CC 8B0CFFF8 */  lwl   $t4, -8($t8)
/* 004108D0 9B0CFFFB */  lwr   $t4, -5($t8)
/* 004108D4 A92C0000 */  swl   $t4, ($t1)
/* 004108D8 B92C0003 */  swr   $t4, 3($t1)
/* 004108DC 8B0DFFFC */  lwl   $t5, -4($t8)
/* 004108E0 9B0DFFFF */  lwr   $t5, -1($t8)
/* 004108E4 A92D0004 */  swl   $t5, 4($t1)
/* 004108E8 170BFFF2 */  bne   $t8, $t3, .L004108B4
/* 004108EC B92D0007 */   swr   $t5, 7($t1)
/* 004108F0 8B0D0000 */  lwl   $t5, ($t8)
/* 004108F4 9B0D0003 */  lwr   $t5, 3($t8)
/* 004108F8 8F8A8038 */  lw    $t2, %got(RO_10008FA8)($gp)
/* 004108FC 03A0C825 */  move  $t9, $sp
/* 00410900 A92D0008 */  swl   $t5, 8($t1)
/* 00410904 B92D000B */  swr   $t5, 0xb($t1)
/* 00410908 8B0C0004 */  lwl   $t4, 4($t8)
/* 0041090C 9B0C0007 */  lwr   $t4, 7($t8)
/* 00410910 254A8FA8 */  addiu $t2, %lo(RO_10008FA8) # addiu $t2, $t2, -0x7058
/* 00410914 254B0048 */  addiu $t3, $t2, 0x48
/* 00410918 A92C000C */  swl   $t4, 0xc($t1)
/* 0041091C B92C000F */  swr   $t4, 0xf($t1)
.L00410920:
/* 00410920 894F0000 */  lwl   $t7, ($t2)
/* 00410924 994F0003 */  lwr   $t7, 3($t2)
/* 00410928 254A000C */  addiu $t2, $t2, 0xc
/* 0041092C 2739000C */  addiu $t9, $t9, 0xc
/* 00410930 AB2F004C */  swl   $t7, 0x4c($t9)
/* 00410934 BB2F004F */  swr   $t7, 0x4f($t9)
/* 00410938 894EFFF8 */  lwl   $t6, -8($t2)
/* 0041093C 994EFFFB */  lwr   $t6, -5($t2)
/* 00410940 AB2E0050 */  swl   $t6, 0x50($t9)
/* 00410944 BB2E0053 */  swr   $t6, 0x53($t9)
/* 00410948 894FFFFC */  lwl   $t7, -4($t2)
/* 0041094C 994FFFFF */  lwr   $t7, -1($t2)
/* 00410950 AB2F0054 */  swl   $t7, 0x54($t9)
/* 00410954 154BFFF2 */  bne   $t2, $t3, .L00410920
/* 00410958 BB2F0057 */   swr   $t7, 0x57($t9)
/* 0041095C 894F0000 */  lwl   $t7, ($t2)
/* 00410960 994F0003 */  lwr   $t7, 3($t2)
/* 00410964 AB2F0058 */  swl   $t7, 0x58($t9)
/* 00410968 BB2F005B */  swr   $t7, 0x5b($t9)
/* 0041096C 894E0004 */  lwl   $t6, 4($t2)
/* 00410970 994E0007 */  lwr   $t6, 7($t2)
/* 00410974 AB2E005C */  swl   $t6, 0x5c($t9)
/* 00410978 BB2E005F */  swr   $t6, 0x5f($t9)
/* 0041097C 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 00410980 8FA7000C */  lw    $a3, 0xc($sp)
/* 00410984 8FA60008 */  lw    $a2, 8($sp)
/* 00410988 0320F809 */  jalr  $t9
/* 0041098C 00000000 */   nop   
/* 00410990 8FBC00CC */  lw    $gp, 0xcc($sp)
.L00410994:
/* 00410994 12400013 */  beqz  $s2, .L004109E4
/* 00410998 00000000 */   nop   
/* 0041099C 8E420034 */  lw    $v0, 0x34($s2)
/* 004109A0 00002825 */  move  $a1, $zero
/* 004109A4 00511821 */  addu  $v1, $v0, $s1
/* 004109A8 2463FFFF */  addiu $v1, $v1, -1
/* 004109AC 0062082A */  slt   $at, $v1, $v0
/* 004109B0 10200003 */  beqz  $at, .L004109C0
/* 004109B4 0074C024 */   and   $t8, $v1, $s4
/* 004109B8 10000001 */  b     .L004109C0
/* 004109BC 24050001 */   li    $a1, 1
.L004109C0:
/* 004109C0 54780007 */  bnel  $v1, $t8, .L004109E0
/* 004109C4 8E4D0028 */   lw    $t5, 0x28($s2)
/* 004109C8 8E490030 */  lw    $t1, 0x30($s2)
/* 004109CC 01251021 */  addu  $v0, $t1, $a1
/* 004109D0 00556024 */  and   $t4, $v0, $s5
/* 004109D4 104C0003 */  beq   $v0, $t4, .L004109E4
/* 004109D8 00000000 */   nop   
/* 004109DC 8E4D0028 */  lw    $t5, 0x28($s2)
.L004109E0:
/* 004109E0 AE0D0024 */  sw    $t5, 0x24($s0)
.L004109E4:
/* 004109E4 8F9981BC */  lw    $t9, %call16(find_label)($gp)
/* 004109E8 8E040024 */  lw    $a0, 0x24($s0)
/* 004109EC 0320F809 */  jalr  $t9
/* 004109F0 00000000 */   nop   
/* 004109F4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004109F8 AE020004 */  sw    $v0, 4($s0)
/* 004109FC 27A21650 */  addiu $v0, $sp, 0x1650
/* 00410A00 8F998018 */  lw    $t9, %got(func_0040E238)($gp)
/* 00410A04 02002025 */  move  $a0, $s0
/* 00410A08 2739E238 */  addiu $t9, %lo(func_0040E238) # addiu $t9, $t9, -0x1dc8
/* 00410A0C 0320F809 */  jalr  $t9
/* 00410A10 00000000 */   nop   
/* 00410A14 26310001 */  addiu $s1, $s1, 1
/* 00410A18 1633FF92 */  bne   $s1, $s3, .L00410864
/* 00410A1C 8FBC00CC */   lw    $gp, 0xcc($sp)
.L00410A20:
/* 00410A20 8F998664 */  lw    $t9, %call16(build_op)($gp)
/* 00410A24 24040011 */  li    $a0, 17
/* 00410A28 0320F809 */  jalr  $t9
/* 00410A2C 00000000 */   nop   
/* 00410A30 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00410A34 AC400028 */  sw    $zero, 0x28($v0)
/* 00410A38 8FAB01CC */  lw    $t3, 0x1cc($sp)
/* 00410A3C 8F998018 */  lw    $t9, %got(func_0040E238)($gp)
/* 00410A40 00402025 */  move  $a0, $v0
/* 00410A44 AC4B0024 */  sw    $t3, 0x24($v0)
/* 00410A48 2739E238 */  addiu $t9, %lo(func_0040E238) # addiu $t9, $t9, -0x1dc8
/* 00410A4C 0320F809 */  jalr  $t9
/* 00410A50 27A21650 */   addiu $v0, $sp, 0x1650
/* 00410A54 1000FAD5 */  b     .L0040F5AC
/* 00410A58 8FBC00CC */   lw    $gp, 0xcc($sp)
.L00410A5C:
/* 00410A5C 97AA1648 */  lhu   $t2, 0x1648($sp)
/* 00410A60 27B91004 */  addiu $t9, $sp, 0x1004
/* 00410A64 27AE09C4 */  addiu $t6, $sp, 0x9c4
/* 00410A68 000A9080 */  sll   $s2, $t2, 2
/* 00410A6C 0259B821 */  addu  $s7, $s2, $t9
/* 00410A70 8EEF0000 */  lw    $t7, ($s7)
/* 00410A74 024EA021 */  addu  $s4, $s2, $t6
/* 00410A78 2547FFFF */  addiu $a3, $t2, -1
/* 00410A7C 55E00076 */  bnel  $t7, $zero, .L00410C58
/* 00410A80 8E8E0000 */   lw    $t6, ($s4)
/* 00410A84 8F9981B8 */  lw    $t9, %call16(search_label)($gp)
/* 00410A88 8FA401CC */  lw    $a0, 0x1cc($sp)
/* 00410A8C AFA700F4 */  sw    $a3, 0xf4($sp)
/* 00410A90 0320F809 */  jalr  $t9
/* 00410A94 00000000 */   nop   
/* 00410A98 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00410A9C 1040006D */  beqz  $v0, .L00410C54
/* 00410AA0 8FA700F4 */   lw    $a3, 0xf4($sp)
/* 00410AA4 8F998654 */  lw    $t9, %call16(new_tree)($gp)
/* 00410AA8 AFA700F4 */  sw    $a3, 0xf4($sp)
/* 00410AAC 0320F809 */  jalr  $t9
/* 00410AB0 00000000 */   nop   
/* 00410AB4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00410AB8 8FA700F4 */  lw    $a3, 0xf4($sp)
/* 00410ABC 24180088 */  li    $t8, 136
/* 00410AC0 A0580020 */  sb    $t8, 0x20($v0)
/* 00410AC4 8FAB01DC */  lw    $t3, 0x1dc($sp)
/* 00410AC8 8E890000 */  lw    $t1, ($s4)
/* 00410ACC 8FAC01E0 */  lw    $t4, 0x1e0($sp)
/* 00410AD0 24180000 */  li    $t8, 0
/* 00410AD4 012B7823 */  subu  $t7, $t1, $t3
/* 00410AD8 030C082A */  slt   $at, $t8, $t4
/* 00410ADC 00409825 */  move  $s3, $v0
/* 00410AE0 01E02825 */  move  $a1, $t7
/* 00410AE4 1420000F */  bnez  $at, .L00410B24
/* 00410AE8 8FAD01E4 */   lw    $t5, 0x1e4($sp)
/* 00410AEC 0198082A */  slt   $at, $t4, $t8
/* 00410AF0 14200003 */  bnez  $at, .L00410B00
/* 00410AF4 01ED082B */   sltu  $at, $t7, $t5
/* 00410AF8 1420000A */  bnez  $at, .L00410B24
/* 00410AFC 00000000 */   nop   
.L00410B00:
/* 00410B00 8F9981BC */  lw    $t9, %call16(find_label)($gp)
/* 00410B04 8FA401D0 */  lw    $a0, 0x1d0($sp)
/* 00410B08 AFA700F4 */  sw    $a3, 0xf4($sp)
/* 00410B0C 0320F809 */  jalr  $t9
/* 00410B10 00000000 */   nop   
/* 00410B14 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00410B18 8FA700F4 */  lw    $a3, 0xf4($sp)
/* 00410B1C 10000044 */  b     .L00410C30
/* 00410B20 AE620004 */   sw    $v0, 4($s3)
.L00410B24:
/* 00410B24 8F9981BC */  lw    $t9, %call16(find_label)($gp)
/* 00410B28 8FA401CC */  lw    $a0, 0x1cc($sp)
/* 00410B2C AFA50174 */  sw    $a1, 0x174($sp)
/* 00410B30 0320F809 */  jalr  $t9
/* 00410B34 AFA700F4 */   sw    $a3, 0xf4($sp)
/* 00410B38 90490020 */  lbu   $t1, 0x20($v0)
/* 00410B3C 240A0011 */  li    $t2, 17
/* 00410B40 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00410B44 8FA50174 */  lw    $a1, 0x174($sp)
/* 00410B48 8FA700F4 */  lw    $a3, 0xf4($sp)
/* 00410B4C 00408025 */  move  $s0, $v0
/* 00410B50 012A02B6 */  tne   $t1, $t2, 0xa
/* 00410B54 24A50001 */  addiu $a1, $a1, 1
/* 00410B58 30A20003 */  andi  $v0, $a1, 3
/* 00410B5C 00021023 */  negu  $v0, $v0
/* 00410B60 1040000E */  beqz  $v0, .L00410B9C
/* 00410B64 00452021 */   addu  $a0, $v0, $a1
/* 00410B68 8E100008 */  lw    $s0, 8($s0)
.L00410B6C:
/* 00410B6C 24A5FFFF */  addiu $a1, $a1, -1
/* 00410B70 0010182B */  sltu  $v1, $zero, $s0
/* 00410B74 50600005 */  beql  $v1, $zero, .L00410B8C
/* 00410B78 006002B4 */   teq   $v1, $zero, 0xa
/* 00410B7C 92030020 */  lbu   $v1, 0x20($s0)
/* 00410B80 38630088 */  xori  $v1, $v1, 0x88
/* 00410B84 2C630001 */  sltiu $v1, $v1, 1
/* 00410B88 006002B4 */  teq   $v1, $zero, 0xa
.L00410B8C:
/* 00410B8C 5485FFF7 */  bnel  $a0, $a1, .L00410B6C
/* 00410B90 8E100008 */   lw    $s0, 8($s0)
/* 00410B94 50A00025 */  beql  $a1, $zero, .L00410C2C
/* 00410B98 8E0B0004 */   lw    $t3, 4($s0)
.L00410B9C:
/* 00410B9C 8E100008 */  lw    $s0, 8($s0)
.L00410BA0:
/* 00410BA0 24A5FFFC */  addiu $a1, $a1, -4
/* 00410BA4 0010182B */  sltu  $v1, $zero, $s0
/* 00410BA8 50600005 */  beql  $v1, $zero, .L00410BC0
/* 00410BAC 006002B4 */   teq   $v1, $zero, 0xa
/* 00410BB0 92030020 */  lbu   $v1, 0x20($s0)
/* 00410BB4 38630088 */  xori  $v1, $v1, 0x88
/* 00410BB8 2C630001 */  sltiu $v1, $v1, 1
/* 00410BBC 006002B4 */  teq   $v1, $zero, 0xa
.L00410BC0:
/* 00410BC0 8E100008 */  lw    $s0, 8($s0)
/* 00410BC4 0010182B */  sltu  $v1, $zero, $s0
/* 00410BC8 50600005 */  beql  $v1, $zero, .L00410BE0
/* 00410BCC 006002B4 */   teq   $v1, $zero, 0xa
/* 00410BD0 92030020 */  lbu   $v1, 0x20($s0)
/* 00410BD4 38630088 */  xori  $v1, $v1, 0x88
/* 00410BD8 2C630001 */  sltiu $v1, $v1, 1
/* 00410BDC 006002B4 */  teq   $v1, $zero, 0xa
.L00410BE0:
/* 00410BE0 8E100008 */  lw    $s0, 8($s0)
/* 00410BE4 0010182B */  sltu  $v1, $zero, $s0
/* 00410BE8 50600005 */  beql  $v1, $zero, .L00410C00
/* 00410BEC 006002B4 */   teq   $v1, $zero, 0xa
/* 00410BF0 92030020 */  lbu   $v1, 0x20($s0)
/* 00410BF4 38630088 */  xori  $v1, $v1, 0x88
/* 00410BF8 2C630001 */  sltiu $v1, $v1, 1
/* 00410BFC 006002B4 */  teq   $v1, $zero, 0xa
.L00410C00:
/* 00410C00 8E100008 */  lw    $s0, 8($s0)
/* 00410C04 0010182B */  sltu  $v1, $zero, $s0
/* 00410C08 50600005 */  beql  $v1, $zero, .L00410C20
/* 00410C0C 006002B4 */   teq   $v1, $zero, 0xa
/* 00410C10 92030020 */  lbu   $v1, 0x20($s0)
/* 00410C14 38630088 */  xori  $v1, $v1, 0x88
/* 00410C18 2C630001 */  sltiu $v1, $v1, 1
/* 00410C1C 006002B4 */  teq   $v1, $zero, 0xa
.L00410C20:
/* 00410C20 54A0FFDF */  bnel  $a1, $zero, .L00410BA0
/* 00410C24 8E100008 */   lw    $s0, 8($s0)
/* 00410C28 8E0B0004 */  lw    $t3, 4($s0)
.L00410C2C:
/* 00410C2C AE6B0004 */  sw    $t3, 4($s3)
.L00410C30:
/* 00410C30 8F998018 */  lw    $t9, %got(func_0040E238)($gp)
/* 00410C34 02602025 */  move  $a0, $s3
/* 00410C38 27A21650 */  addiu $v0, $sp, 0x1650
/* 00410C3C 2739E238 */  addiu $t9, %lo(func_0040E238) # addiu $t9, $t9, -0x1dc8
/* 00410C40 0320F809 */  jalr  $t9
/* 00410C44 AFA700F4 */   sw    $a3, 0xf4($sp)
/* 00410C48 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00410C4C 1000014B */  b     .L0041117C
/* 00410C50 8FA700F4 */   lw    $a3, 0xf4($sp)
.L00410C54:
/* 00410C54 8E8E0000 */  lw    $t6, ($s4)
.L00410C58:
/* 00410C58 8FAD01DC */  lw    $t5, 0x1dc($sp)
/* 00410C5C 8F998018 */  lw    $t9, %got(func_0040E2AC)($gp)
/* 00410C60 27A90384 */  addiu $t1, $sp, 0x384
/* 00410C64 01CD5823 */  subu  $t3, $t6, $t5
/* 00410C68 AE8B0000 */  sw    $t3, ($s4)
/* 00410C6C 02497021 */  addu  $t6, $s2, $t1
/* 00410C70 ADC00000 */  sw    $zero, ($t6)
/* 00410C74 2739E2AC */  addiu $t9, %lo(func_0040E2AC) # addiu $t9, $t9, -0x1d54
/* 00410C78 AFA700F4 */  sw    $a3, 0xf4($sp)
/* 00410C7C 97A41648 */  lhu   $a0, 0x1648($sp)
/* 00410C80 0320F809 */  jalr  $t9
/* 00410C84 27A21650 */   addiu $v0, $sp, 0x1650
/* 00410C88 93B801C9 */  lbu   $t8, 0x1c9($sp)
/* 00410C8C 3C010501 */  lui   $at, 0x501
/* 00410C90 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00410C94 3319001F */  andi  $t9, $t8, 0x1f
/* 00410C98 2F2C0020 */  sltiu $t4, $t9, 0x20
/* 00410C9C 000C6823 */  negu  $t5, $t4
/* 00410CA0 01A15024 */  and   $t2, $t5, $at
/* 00410CA4 032A5804 */  sllv  $t3, $t2, $t9
/* 00410CA8 8FA700F4 */  lw    $a3, 0xf4($sp)
/* 00410CAC 05610003 */  bgez  $t3, .L00410CBC
/* 00410CB0 8EF20000 */   lw    $s2, ($s7)
/* 00410CB4 10000002 */  b     .L00410CC0
/* 00410CB8 24110007 */   li    $s1, 7
.L00410CBC:
/* 00410CBC 24110008 */  li    $s1, 8
.L00410CC0:
/* 00410CC0 92420021 */  lbu   $v0, 0x21($s2)
/* 00410CC4 92450020 */  lbu   $a1, 0x20($s2)
/* 00410CC8 24010004 */  li    $at, 4
/* 00410CCC 00027EC0 */  sll   $t7, $v0, 0x1b
/* 00410CD0 000F4EC2 */  srl   $t1, $t7, 0x1b
/* 00410CD4 02297026 */  xor   $t6, $s1, $t1
/* 00410CD8 31D8001F */  andi  $t8, $t6, 0x1f
/* 00410CDC 03026026 */  xor   $t4, $t8, $v0
/* 00410CE0 14A1004A */  bne   $a1, $at, .L00410E0C
/* 00410CE4 A24C0021 */   sb    $t4, 0x21($s2)
/* 00410CE8 8E420004 */  lw    $v0, 4($s2)
/* 00410CEC 24010049 */  li    $at, 73
/* 00410CF0 8FAA01E0 */  lw    $t2, 0x1e0($sp)
/* 00410CF4 904D0020 */  lbu   $t5, 0x20($v0)
/* 00410CF8 8FAB01E4 */  lw    $t3, 0x1e4($sp)
/* 00410CFC 8FAE01D8 */  lw    $t6, 0x1d8($sp)
/* 00410D00 15A10011 */  bne   $t5, $at, .L00410D48
/* 00410D04 8FAF01DC */   lw    $t7, 0x1dc($sp)
/* 00410D08 8C430030 */  lw    $v1, 0x30($v0)
/* 00410D0C 016F082B */  sltu  $at, $t3, $t7
/* 00410D10 014EC023 */  subu  $t8, $t2, $t6
/* 00410D14 0301C023 */  subu  $t8, $t8, $at
/* 00410D18 000367C3 */  sra   $t4, $v1, 0x1f
/* 00410D1C 030C082A */  slt   $at, $t8, $t4
/* 00410D20 016FC823 */  subu  $t9, $t3, $t7
/* 00410D24 14200008 */  bnez  $at, .L00410D48
/* 00410D28 00606825 */   move  $t5, $v1
/* 00410D2C 0198082A */  slt   $at, $t4, $t8
/* 00410D30 14200003 */  bnez  $at, .L00410D40
/* 00410D34 032D082B */   sltu  $at, $t9, $t5
/* 00410D38 54200004 */  bnel  $at, $zero, .L00410D4C
/* 00410D3C 8E420000 */   lw    $v0, ($s2)
.L00410D40:
/* 00410D40 1C600019 */  bgtz  $v1, .L00410DA8
/* 00410D44 00000000 */   nop   
.L00410D48:
/* 00410D48 8E420000 */  lw    $v0, ($s2)
.L00410D4C:
/* 00410D4C 24010049 */  li    $at, 73
/* 00410D50 8FAA01E0 */  lw    $t2, 0x1e0($sp)
/* 00410D54 90490020 */  lbu   $t1, 0x20($v0)
/* 00410D58 8FAB01E4 */  lw    $t3, 0x1e4($sp)
/* 00410D5C 8FAE01D8 */  lw    $t6, 0x1d8($sp)
/* 00410D60 1521002A */  bne   $t1, $at, .L00410E0C
/* 00410D64 8FAF01DC */   lw    $t7, 0x1dc($sp)
/* 00410D68 8C430030 */  lw    $v1, 0x30($v0)
/* 00410D6C 016F082B */  sltu  $at, $t3, $t7
/* 00410D70 014EC023 */  subu  $t8, $t2, $t6
/* 00410D74 0301C023 */  subu  $t8, $t8, $at
/* 00410D78 000367C3 */  sra   $t4, $v1, 0x1f
/* 00410D7C 030C082A */  slt   $at, $t8, $t4
/* 00410D80 016FC823 */  subu  $t9, $t3, $t7
/* 00410D84 14200021 */  bnez  $at, .L00410E0C
/* 00410D88 00606825 */   move  $t5, $v1
/* 00410D8C 0198082A */  slt   $at, $t4, $t8
/* 00410D90 14200003 */  bnez  $at, .L00410DA0
/* 00410D94 032D082B */   sltu  $at, $t9, $t5
/* 00410D98 5420001D */  bnel  $at, $zero, .L00410E10
/* 00410D9C 8FA901F4 */   lw    $t1, 0x1f4($sp)
.L00410DA0:
/* 00410DA0 5860001B */  blezl $v1, .L00410E10
/* 00410DA4 8FA901F4 */   lw    $t1, 0x1f4($sp)
.L00410DA8:
/* 00410DA8 8F9981BC */  lw    $t9, %call16(find_label)($gp)
/* 00410DAC 8FA401CC */  lw    $a0, 0x1cc($sp)
/* 00410DB0 AFA700F4 */  sw    $a3, 0xf4($sp)
/* 00410DB4 0320F809 */  jalr  $t9
/* 00410DB8 00000000 */   nop   
/* 00410DBC 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00410DC0 27A401C8 */  addiu $a0, $sp, 0x1c8
/* 00410DC4 02402825 */  move  $a1, $s2
/* 00410DC8 8F998660 */  lw    $t9, %call16(build_u2)($gp)
/* 00410DCC 00403025 */  move  $a2, $v0
/* 00410DD0 0320F809 */  jalr  $t9
/* 00410DD4 00000000 */   nop   
/* 00410DD8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00410DDC 00402025 */  move  $a0, $v0
/* 00410DE0 27A21650 */  addiu $v0, $sp, 0x1650
/* 00410DE4 8F998018 */  lw    $t9, %got(func_0040E238)($gp)
/* 00410DE8 2739E238 */  addiu $t9, %lo(func_0040E238) # addiu $t9, $t9, -0x1dc8
/* 00410DEC 0320F809 */  jalr  $t9
/* 00410DF0 00000000 */   nop   
/* 00410DF4 8FA700F4 */  lw    $a3, 0xf4($sp)
/* 00410DF8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00410DFC 30E2FFFF */  andi  $v0, $a3, 0xffff
/* 00410E00 004002B6 */  tne   $v0, $zero, 0xa
/* 00410E04 1000F9E9 */  b     .L0040F5AC
/* 00410E08 A7A21648 */   sh    $v0, 0x1648($sp)
.L00410E0C:
/* 00410E0C 8FA901F4 */  lw    $t1, 0x1f4($sp)
.L00410E10:
/* 00410E10 2401007B */  li    $at, 123
/* 00410E14 912A0020 */  lbu   $t2, 0x20($t1)
/* 00410E18 15410098 */  bne   $t2, $at, .L0041107C
/* 00410E1C 00000000 */   nop   
/* 00410E20 8D240000 */  lw    $a0, ($t1)
/* 00410E24 24010004 */  li    $at, 4
/* 00410E28 908B0020 */  lbu   $t3, 0x20($a0)
/* 00410E2C 15610093 */  bne   $t3, $at, .L0041107C
/* 00410E30 00000000 */   nop   
/* 00410E34 8C820000 */  lw    $v0, ($a0)
/* 00410E38 24010049 */  li    $at, 73
/* 00410E3C 8FB801E0 */  lw    $t8, 0x1e0($sp)
/* 00410E40 904E0020 */  lbu   $t6, 0x20($v0)
/* 00410E44 8FB901E4 */  lw    $t9, 0x1e4($sp)
/* 00410E48 8FAC01D8 */  lw    $t4, 0x1d8($sp)
/* 00410E4C 15C10011 */  bne   $t6, $at, .L00410E94
/* 00410E50 8FAD01DC */   lw    $t5, 0x1dc($sp)
/* 00410E54 8C430030 */  lw    $v1, 0x30($v0)
/* 00410E58 032D082B */  sltu  $at, $t9, $t5
/* 00410E5C 030C5023 */  subu  $t2, $t8, $t4
/* 00410E60 01415023 */  subu  $t2, $t2, $at
/* 00410E64 000377C3 */  sra   $t6, $v1, 0x1f
/* 00410E68 014E082A */  slt   $at, $t2, $t6
/* 00410E6C 032D5823 */  subu  $t3, $t9, $t5
/* 00410E70 14200008 */  bnez  $at, .L00410E94
/* 00410E74 00607825 */   move  $t7, $v1
/* 00410E78 01CA082A */  slt   $at, $t6, $t2
/* 00410E7C 14200003 */  bnez  $at, .L00410E8C
/* 00410E80 016F082B */   sltu  $at, $t3, $t7
/* 00410E84 54200004 */  bnel  $at, $zero, .L00410E98
/* 00410E88 8C820004 */   lw    $v0, 4($a0)
.L00410E8C:
/* 00410E8C 5C600019 */  bgtzl $v1, .L00410EF4
/* 00410E90 24010052 */   li    $at, 82
.L00410E94:
/* 00410E94 8C820004 */  lw    $v0, 4($a0)
.L00410E98:
/* 00410E98 24010049 */  li    $at, 73
/* 00410E9C 8FB801E0 */  lw    $t8, 0x1e0($sp)
/* 00410EA0 90490020 */  lbu   $t1, 0x20($v0)
/* 00410EA4 8FB901E4 */  lw    $t9, 0x1e4($sp)
/* 00410EA8 8FAC01D8 */  lw    $t4, 0x1d8($sp)
/* 00410EAC 15210073 */  bne   $t1, $at, .L0041107C
/* 00410EB0 8FAD01DC */   lw    $t5, 0x1dc($sp)
/* 00410EB4 8C430030 */  lw    $v1, 0x30($v0)
/* 00410EB8 032D082B */  sltu  $at, $t9, $t5
/* 00410EBC 030C5023 */  subu  $t2, $t8, $t4
/* 00410EC0 01415023 */  subu  $t2, $t2, $at
/* 00410EC4 000377C3 */  sra   $t6, $v1, 0x1f
/* 00410EC8 014E082A */  slt   $at, $t2, $t6
/* 00410ECC 032D5823 */  subu  $t3, $t9, $t5
/* 00410ED0 1420006A */  bnez  $at, .L0041107C
/* 00410ED4 00607825 */   move  $t7, $v1
/* 00410ED8 01CA082A */  slt   $at, $t6, $t2
/* 00410EDC 14200003 */  bnez  $at, .L00410EEC
/* 00410EE0 016F082B */   sltu  $at, $t3, $t7
/* 00410EE4 14200065 */  bnez  $at, .L0041107C
/* 00410EE8 00000000 */   nop   
.L00410EEC:
/* 00410EEC 18600063 */  blez  $v1, .L0041107C
/* 00410EF0 24010052 */   li    $at, 82
.L00410EF4:
/* 00410EF4 14A10003 */  bne   $a1, $at, .L00410F04
/* 00410EF8 8FA901F4 */   lw    $t1, 0x1f4($sp)
/* 00410EFC 10000002 */  b     .L00410F08
/* 00410F00 02409825 */   move  $s3, $s2
.L00410F04:
/* 00410F04 8E530000 */  lw    $s3, ($s2)
.L00410F08:
/* 00410F08 91380021 */  lbu   $t8, 0x21($t1)
/* 00410F0C 926D0021 */  lbu   $t5, 0x21($s3)
/* 00410F10 24010001 */  li    $at, 1
/* 00410F14 0018CE00 */  sll   $t9, $t8, 0x18
/* 00410F18 000D5600 */  sll   $t2, $t5, 0x18
/* 00410F1C 000A5F42 */  srl   $t3, $t2, 0x1d
/* 00410F20 00196742 */  srl   $t4, $t9, 0x1d
/* 00410F24 158B0055 */  bne   $t4, $t3, .L0041107C
/* 00410F28 00000000 */   nop   
/* 00410F2C 14A1000B */  bne   $a1, $at, .L00410F5C
/* 00410F30 8FA901F4 */   lw    $t1, 0x1f4($sp)
/* 00410F34 8E420004 */  lw    $v0, 4($s2)
/* 00410F38 50400009 */  beql  $v0, $zero, .L00410F60
/* 00410F3C 8D380024 */   lw    $t8, 0x24($t1)
/* 00410F40 904E0020 */  lbu   $t6, 0x20($v0)
/* 00410F44 24010049 */  li    $at, 73
/* 00410F48 55C10005 */  bnel  $t6, $at, .L00410F60
/* 00410F4C 8D380024 */   lw    $t8, 0x24($t1)
/* 00410F50 8C4F0030 */  lw    $t7, 0x30($v0)
/* 00410F54 05E00049 */  bltz  $t7, .L0041107C
/* 00410F58 00000000 */   nop   
.L00410F5C:
/* 00410F5C 8D380024 */  lw    $t8, 0x24($t1)
.L00410F60:
/* 00410F60 8E790024 */  lw    $t9, 0x24($s3)
/* 00410F64 17190045 */  bne   $t8, $t9, .L0041107C
/* 00410F68 00000000 */   nop   
/* 00410F6C 8F82898C */  lw     $v0, %got(lsb_first)($gp)
/* 00410F70 90420000 */  lbu   $v0, ($v0)
/* 00410F74 10400009 */  beqz  $v0, .L00410F9C
/* 00410F78 00000000 */   nop   
/* 00410F7C 8D2A0030 */  lw    $t2, 0x30($t1)
/* 00410F80 8E6C0030 */  lw    $t4, 0x30($s3)
/* 00410F84 8D2B0034 */  lw    $t3, 0x34($t1)
/* 00410F88 8E6D0034 */  lw    $t5, 0x34($s3)
/* 00410F8C 154C0003 */  bne   $t2, $t4, .L00410F9C
/* 00410F90 00000000 */   nop   
/* 00410F94 516D0018 */  beql  $t3, $t5, .L00410FF8
/* 00410F98 8FA901F4 */   lw    $t1, 0x1f4($sp)
.L00410F9C:
/* 00410F9C 14400037 */  bnez  $v0, .L0041107C
/* 00410FA0 8FAE01F4 */   lw    $t6, 0x1f4($sp)
/* 00410FA4 8DD90034 */  lw    $t9, 0x34($t6)
/* 00410FA8 8DCB003C */  lw    $t3, 0x3c($t6)
/* 00410FAC 8DD80030 */  lw    $t8, 0x30($t6)
/* 00410FB0 8DCA0038 */  lw    $t2, 0x38($t6)
/* 00410FB4 032B6821 */  addu  $t5, $t9, $t3
/* 00410FB8 8E79003C */  lw    $t9, 0x3c($s3)
/* 00410FBC 8E6F0034 */  lw    $t7, 0x34($s3)
/* 00410FC0 01AB082B */  sltu  $at, $t5, $t3
/* 00410FC4 00386021 */  addu  $t4, $at, $t8
/* 00410FC8 8E6E0030 */  lw    $t6, 0x30($s3)
/* 00410FCC 8E780038 */  lw    $t8, 0x38($s3)
/* 00410FD0 01F95821 */  addu  $t3, $t7, $t9
/* 00410FD4 018A6021 */  addu  $t4, $t4, $t2
/* 00410FD8 0179082B */  sltu  $at, $t3, $t9
/* 00410FDC 002E5021 */  addu  $t2, $at, $t6
/* 00410FE0 01585021 */  addu  $t2, $t2, $t8
/* 00410FE4 158A0025 */  bne   $t4, $t2, .L0041107C
/* 00410FE8 00000000 */   nop   
/* 00410FEC 15AB0023 */  bne   $t5, $t3, .L0041107C
/* 00410FF0 00000000 */   nop   
/* 00410FF4 8FA901F4 */  lw    $t1, 0x1f4($sp)
.L00410FF8:
/* 00410FF8 8E6E0038 */  lw    $t6, 0x38($s3)
/* 00410FFC 8E6F003C */  lw    $t7, 0x3c($s3)
/* 00411000 8D380038 */  lw    $t8, 0x38($t1)
/* 00411004 8D39003C */  lw    $t9, 0x3c($t1)
/* 00411008 15D8001C */  bne   $t6, $t8, .L0041107C
/* 0041100C 00000000 */   nop   
/* 00411010 15F9001A */  bne   $t7, $t9, .L0041107C
/* 00411014 00000000 */   nop   
/* 00411018 8F9981BC */  lw    $t9, %call16(find_label)($gp)
/* 0041101C 8FA401CC */  lw    $a0, 0x1cc($sp)
/* 00411020 AFA700F4 */  sw    $a3, 0xf4($sp)
/* 00411024 0320F809 */  jalr  $t9
/* 00411028 00000000 */   nop   
/* 0041102C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00411030 27A401C8 */  addiu $a0, $sp, 0x1c8
/* 00411034 02402825 */  move  $a1, $s2
/* 00411038 8F998660 */  lw    $t9, %call16(build_u2)($gp)
/* 0041103C 00403025 */  move  $a2, $v0
/* 00411040 0320F809 */  jalr  $t9
/* 00411044 00000000 */   nop   
/* 00411048 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0041104C 00402025 */  move  $a0, $v0
/* 00411050 27A21650 */  addiu $v0, $sp, 0x1650
/* 00411054 8F998018 */  lw    $t9, %got(func_0040E238)($gp)
/* 00411058 2739E238 */  addiu $t9, %lo(func_0040E238) # addiu $t9, $t9, -0x1dc8
/* 0041105C 0320F809 */  jalr  $t9
/* 00411060 00000000 */   nop   
/* 00411064 8FA700F4 */  lw    $a3, 0xf4($sp)
/* 00411068 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0041106C 30E2FFFF */  andi  $v0, $a3, 0xffff
/* 00411070 004002B6 */  tne   $v0, $zero, 0xa
/* 00411074 1000F94D */  b     .L0040F5AC
/* 00411078 A7A21648 */   sh    $v0, 0x1648($sp)
.L0041107C:
/* 0041107C 8F99867C */  lw    $t9, %call16(dup_tree)($gp)
/* 00411080 02402025 */  move  $a0, $s2
/* 00411084 AFA700F4 */  sw    $a3, 0xf4($sp)
/* 00411088 0320F809 */  jalr  $t9
/* 0041108C 00000000 */   nop   
/* 00411090 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00411094 8FAD01E4 */  lw    $t5, 0x1e4($sp)
/* 00411098 8FAB01DC */  lw    $t3, 0x1dc($sp)
/* 0041109C 8F998684 */  lw    $t9, %call16(ivalue)($gp)
/* 004110A0 00408025 */  move  $s0, $v0
/* 004110A4 01AB7823 */  subu  $t7, $t5, $t3
/* 004110A8 25E60001 */  addiu $a2, $t7, 1
/* 004110AC 02202025 */  move  $a0, $s1
/* 004110B0 0320F809 */  jalr  $t9
/* 004110B4 00002825 */   move  $a1, $zero
/* 004110B8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004110BC 2404004E */  li    $a0, 78
/* 004110C0 02002825 */  move  $a1, $s0
/* 004110C4 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 004110C8 00403025 */  move  $a2, $v0
/* 004110CC 0320F809 */  jalr  $t9
/* 004110D0 00000000 */   nop   
/* 004110D4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004110D8 00408025 */  move  $s0, $v0
/* 004110DC 8FA401D0 */  lw    $a0, 0x1d0($sp)
/* 004110E0 8F9981BC */  lw    $t9, %call16(find_label)($gp)
/* 004110E4 0320F809 */  jalr  $t9
/* 004110E8 00000000 */   nop   
/* 004110EC 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004110F0 24040026 */  li    $a0, 38
/* 004110F4 02002825 */  move  $a1, $s0
/* 004110F8 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 004110FC 00403025 */  move  $a2, $v0
/* 00411100 0320F809 */  jalr  $t9
/* 00411104 00000000 */   nop   
/* 00411108 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0041110C A4400022 */  sh    $zero, 0x22($v0)
/* 00411110 00402025 */  move  $a0, $v0
/* 00411114 8F998018 */  lw    $t9, %got(func_0040E238)($gp)
/* 00411118 27A21650 */  addiu $v0, $sp, 0x1650
/* 0041111C 2739E238 */  addiu $t9, %lo(func_0040E238) # addiu $t9, $t9, -0x1dc8
/* 00411120 0320F809 */  jalr  $t9
/* 00411124 00000000 */   nop   
/* 00411128 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0041112C 8FA401CC */  lw    $a0, 0x1cc($sp)
/* 00411130 8F9981BC */  lw    $t9, %call16(find_label)($gp)
/* 00411134 0320F809 */  jalr  $t9
/* 00411138 00000000 */   nop   
/* 0041113C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00411140 27A401C8 */  addiu $a0, $sp, 0x1c8
/* 00411144 02402825 */  move  $a1, $s2
/* 00411148 8F998660 */  lw    $t9, %call16(build_u2)($gp)
/* 0041114C 00403025 */  move  $a2, $v0
/* 00411150 0320F809 */  jalr  $t9
/* 00411154 00000000 */   nop   
/* 00411158 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0041115C 00402025 */  move  $a0, $v0
/* 00411160 27A21650 */  addiu $v0, $sp, 0x1650
/* 00411164 8F998018 */  lw    $t9, %got(func_0040E238)($gp)
/* 00411168 2739E238 */  addiu $t9, %lo(func_0040E238) # addiu $t9, $t9, -0x1dc8
/* 0041116C 0320F809 */  jalr  $t9
/* 00411170 00000000 */   nop   
/* 00411174 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00411178 8FA700F4 */  lw    $a3, 0xf4($sp)
.L0041117C:
/* 0041117C 30E2FFFF */  andi  $v0, $a3, 0xffff
/* 00411180 004002B6 */  tne   $v0, $zero, 0xa
/* 00411184 1000F909 */  b     .L0040F5AC
/* 00411188 A7A21648 */   sh    $v0, 0x1648($sp)
.L0041118C:
/* 0041118C 8F998658 */  lw    $t9, %call16(build_u)($gp)
/* 00411190 27A401C8 */  addiu $a0, $sp, 0x1c8
/* 00411194 0320F809 */  jalr  $t9
/* 00411198 00000000 */   nop   
/* 0041119C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004111A0 00402025 */  move  $a0, $v0
/* 004111A4 27A21650 */  addiu $v0, $sp, 0x1650
/* 004111A8 8F998018 */  lw    $t9, %got(func_0040E238)($gp)
/* 004111AC 2739E238 */  addiu $t9, %lo(func_0040E238) # addiu $t9, $t9, -0x1dc8
/* 004111B0 0320F809 */  jalr  $t9
/* 004111B4 00000000 */   nop   
/* 004111B8 1000F8FC */  b     .L0040F5AC
/* 004111BC 8FBC00CC */   lw    $gp, 0xcc($sp)
.L004111C0:
/* 004111C0 8F898A7C */  lw     $t1, %got(first_pmt_offset)($gp)
/* 004111C4 8FA801D4 */  lw    $t0, 0x1d4($sp)
/* 004111C8 8FAA01D0 */  lw    $t2, 0x1d0($sp)
/* 004111CC 8D290000 */  lw    $t1, ($t1)
/* 004111D0 8FAE01EC */  lw    $t6, 0x1ec($sp)
/* 004111D4 01096023 */  subu  $t4, $t0, $t1
/* 004111D8 05810002 */  bgez  $t4, .L004111E4
/* 004111DC 01806825 */   move  $t5, $t4
/* 004111E0 000C6823 */  negu  $t5, $t4
.L004111E4:
/* 004111E4 01AA5821 */  addu  $t3, $t5, $t2
/* 004111E8 01CB082A */  slt   $at, $t6, $t3
/* 004111EC 50200003 */  beql  $at, $zero, .L004111FC
/* 004111F0 97B81648 */   lhu   $t8, 0x1648($sp)
/* 004111F4 01607025 */  move  $t6, $t3
/* 004111F8 97B81648 */  lhu   $t8, 0x1648($sp)
.L004111FC:
/* 004111FC 240F0001 */  li    $t7, 1
/* 00411200 AFAE01EC */  sw    $t6, 0x1ec($sp)
/* 00411204 17000054 */  bnez  $t8, .L00411358
/* 00411208 A3AF015F */   sb    $t7, 0x15f($sp)
/* 0041120C 8F9989A4 */  lw     $t9, %got(source_language)($gp)
/* 00411210 24010003 */  li    $at, 3
/* 00411214 24090002 */  li    $t1, 2
/* 00411218 8F390000 */  lw    $t9, ($t9)
/* 0041121C 2406006E */  li    $a2, 110
/* 00411220 2407006E */  li    $a3, 110
/* 00411224 5721004D */  bnel  $t9, $at, .L0041135C
/* 00411228 97A41648 */   lhu   $a0, 0x1648($sp)
/* 0041122C 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 00411230 8F848950 */  lw     $a0, %got(err)($gp)
/* 00411234 8F858038 */  lw    $a1, %got(RO_10008F3A)($gp)
/* 00411238 A7A91648 */  sh    $t1, 0x1648($sp)
/* 0041123C 8C840000 */  lw    $a0, ($a0)
/* 00411240 0320F809 */  jalr  $t9
/* 00411244 24A58F3A */   addiu $a1, %lo(RO_10008F3A) # addiu $a1, $a1, -0x70c6
/* 00411248 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0041124C 8F9987CC */  lw    $t9, %call16(writeln)($gp)
/* 00411250 8F848950 */  lw     $a0, %got(err)($gp)
/* 00411254 0320F809 */  jalr  $t9
/* 00411258 8C840000 */   lw    $a0, ($a0)
/* 0041125C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00411260 24040004 */  li    $a0, 4
/* 00411264 240506AC */  li    $a1, 1708
/* 00411268 8F8C8038 */  lw    $t4, %got(RO_10008EEA)($gp)
/* 0041126C 03A05825 */  move  $t3, $sp
/* 00411270 258C8EEA */  addiu $t4, %lo(RO_10008EEA) # addiu $t4, $t4, -0x7116
/* 00411274 258E0048 */  addiu $t6, $t4, 0x48
.L00411278:
/* 00411278 898A0000 */  lwl   $t2, ($t4)
/* 0041127C 998A0003 */  lwr   $t2, 3($t4)
/* 00411280 258C000C */  addiu $t4, $t4, 0xc
/* 00411284 256B000C */  addiu $t3, $t3, 0xc
/* 00411288 A96AFFFC */  swl   $t2, -4($t3)
/* 0041128C B96AFFFF */  swr   $t2, -1($t3)
/* 00411290 898DFFF8 */  lwl   $t5, -8($t4)
/* 00411294 998DFFFB */  lwr   $t5, -5($t4)
/* 00411298 A96D0000 */  swl   $t5, ($t3)
/* 0041129C B96D0003 */  swr   $t5, 3($t3)
/* 004112A0 898AFFFC */  lwl   $t2, -4($t4)
/* 004112A4 998AFFFF */  lwr   $t2, -1($t4)
/* 004112A8 A96A0004 */  swl   $t2, 4($t3)
/* 004112AC 158EFFF2 */  bne   $t4, $t6, .L00411278
/* 004112B0 B96A0007 */   swr   $t2, 7($t3)
/* 004112B4 898A0000 */  lwl   $t2, ($t4)
/* 004112B8 998A0003 */  lwr   $t2, 3($t4)
/* 004112BC 8F8F8038 */  lw    $t7, %got(RO_10008E9A)($gp)
/* 004112C0 03A04825 */  move  $t1, $sp
/* 004112C4 A96A0008 */  swl   $t2, 8($t3)
/* 004112C8 B96A000B */  swr   $t2, 0xb($t3)
/* 004112CC 898D0004 */  lwl   $t5, 4($t4)
/* 004112D0 998D0007 */  lwr   $t5, 7($t4)
/* 004112D4 25EF8E9A */  addiu $t7, %lo(RO_10008E9A) # addiu $t7, $t7, -0x7166
/* 004112D8 25EE0048 */  addiu $t6, $t7, 0x48
/* 004112DC A96D000C */  swl   $t5, 0xc($t3)
/* 004112E0 B96D000F */  swr   $t5, 0xf($t3)
.L004112E4:
/* 004112E4 89F90000 */  lwl   $t9, ($t7)
/* 004112E8 99F90003 */  lwr   $t9, 3($t7)
/* 004112EC 25EF000C */  addiu $t7, $t7, 0xc
/* 004112F0 2529000C */  addiu $t1, $t1, 0xc
/* 004112F4 A939004C */  swl   $t9, 0x4c($t1)
/* 004112F8 B939004F */  swr   $t9, 0x4f($t1)
/* 004112FC 89F8FFF8 */  lwl   $t8, -8($t7)
/* 00411300 99F8FFFB */  lwr   $t8, -5($t7)
/* 00411304 A9380050 */  swl   $t8, 0x50($t1)
/* 00411308 B9380053 */  swr   $t8, 0x53($t1)
/* 0041130C 89F9FFFC */  lwl   $t9, -4($t7)
/* 00411310 99F9FFFF */  lwr   $t9, -1($t7)
/* 00411314 A9390054 */  swl   $t9, 0x54($t1)
/* 00411318 15EEFFF2 */  bne   $t7, $t6, .L004112E4
/* 0041131C B9390057 */   swr   $t9, 0x57($t1)
/* 00411320 89F90000 */  lwl   $t9, ($t7)
/* 00411324 99F90003 */  lwr   $t9, 3($t7)
/* 00411328 A9390058 */  swl   $t9, 0x58($t1)
/* 0041132C B939005B */  swr   $t9, 0x5b($t1)
/* 00411330 89F80004 */  lwl   $t8, 4($t7)
/* 00411334 99F80007 */  lwr   $t8, 7($t7)
/* 00411338 A938005C */  swl   $t8, 0x5c($t1)
/* 0041133C B938005F */  swr   $t8, 0x5f($t1)
/* 00411340 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 00411344 8FA7000C */  lw    $a3, 0xc($sp)
/* 00411348 8FA60008 */  lw    $a2, 8($sp)
/* 0041134C 0320F809 */  jalr  $t9
/* 00411350 00000000 */   nop   
/* 00411354 8FBC00CC */  lw    $gp, 0xcc($sp)
.L00411358:
/* 00411358 97A41648 */  lhu   $a0, 0x1648($sp)
.L0041135C:
/* 0041135C 8F998018 */  lw    $t9, %got(func_0040E2AC)($gp)
/* 00411360 27AD1004 */  addiu $t5, $sp, 0x1004
/* 00411364 00045880 */  sll   $t3, $a0, 2
/* 00411368 2487FFFF */  addiu $a3, $a0, -1
/* 0041136C 2739E2AC */  addiu $t9, %lo(func_0040E2AC) # addiu $t9, $t9, -0x1d54
/* 00411370 AFA700F4 */  sw    $a3, 0xf4($sp)
/* 00411374 016DB821 */  addu  $s7, $t3, $t5
/* 00411378 0320F809 */  jalr  $t9
/* 0041137C 27A21650 */   addiu $v0, $sp, 0x1650
/* 00411380 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00411384 27A401C8 */  addiu $a0, $sp, 0x1c8
/* 00411388 8EE50000 */  lw    $a1, ($s7)
/* 0041138C 8F99865C */  lw    $t9, %call16(build_u1)($gp)
/* 00411390 0320F809 */  jalr  $t9
/* 00411394 00000000 */   nop   
/* 00411398 8FA700F4 */  lw    $a3, 0xf4($sp)
/* 0041139C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004113A0 30E3FFFF */  andi  $v1, $a3, 0xffff
/* 004113A4 006002B6 */  tne   $v1, $zero, 0xa
/* 004113A8 8F998018 */  lw    $t9, %got(func_0040E24C)($gp)
/* 004113AC 00402025 */  move  $a0, $v0
/* 004113B0 27A21650 */  addiu $v0, $sp, 0x1650
/* 004113B4 2739E24C */  addiu $t9, %lo(func_0040E24C) # addiu $t9, $t9, -0x1db4
/* 004113B8 0320F809 */  jalr  $t9
/* 004113BC A7A31648 */   sh    $v1, 0x1648($sp)
/* 004113C0 1000F87A */  b     .L0040F5AC
/* 004113C4 8FBC00CC */   lw    $gp, 0xcc($sp)
.L004113C8:
/* 004113C8 8F8A8A7C */  lw     $t2, %got(first_pmt_offset)($gp)
/* 004113CC 8FA801D4 */  lw    $t0, 0x1d4($sp)
/* 004113D0 8FA901D0 */  lw    $t1, 0x1d0($sp)
/* 004113D4 8D4A0000 */  lw    $t2, ($t2)
/* 004113D8 8FB901EC */  lw    $t9, 0x1ec($sp)
/* 004113DC 010A7023 */  subu  $t6, $t0, $t2
/* 004113E0 05C10002 */  bgez  $t6, .L004113EC
/* 004113E4 01C07825 */   move  $t7, $t6
/* 004113E8 000E7823 */  negu  $t7, $t6
.L004113EC:
/* 004113EC 01E9C021 */  addu  $t8, $t7, $t1
/* 004113F0 0338082A */  slt   $at, $t9, $t8
/* 004113F4 50200003 */  beql  $at, $zero, .L00411404
/* 004113F8 97AB1648 */   lhu   $t3, 0x1648($sp)
/* 004113FC 0300C825 */  move  $t9, $t8
/* 00411400 97AB1648 */  lhu   $t3, 0x1648($sp)
.L00411404:
/* 00411404 AFB901EC */  sw    $t9, 0x1ec($sp)
/* 00411408 97AD01CA */  lhu   $t5, 0x1ca($sp)
/* 0041140C 016002B6 */  tne   $t3, $zero, 0xa
/* 00411410 8F998658 */  lw    $t9, %call16(build_u)($gp)
/* 00411414 000D6080 */  sll   $t4, $t5, 2
/* 00411418 AFAC01D8 */  sw    $t4, 0x1d8($sp)
/* 0041141C 0320F809 */  jalr  $t9
/* 00411420 27A401C8 */   addiu $a0, $sp, 0x1c8
/* 00411424 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00411428 00402025 */  move  $a0, $v0
/* 0041142C 27A21650 */  addiu $v0, $sp, 0x1650
/* 00411430 8F998018 */  lw    $t9, %got(func_0040E238)($gp)
/* 00411434 2739E238 */  addiu $t9, %lo(func_0040E238) # addiu $t9, $t9, -0x1dc8
/* 00411438 0320F809 */  jalr  $t9
/* 0041143C 00000000 */   nop   
/* 00411440 1000F85A */  b     .L0040F5AC
/* 00411444 8FBC00CC */   lw    $gp, 0xcc($sp)
.L00411448:
/* 00411448 97AA1648 */  lhu   $t2, 0x1648($sp)
/* 0041144C 014002B6 */  tne   $t2, $zero, 0xa
/* 00411450 8F998658 */  lw    $t9, %call16(build_u)($gp)
/* 00411454 27A401C8 */  addiu $a0, $sp, 0x1c8
/* 00411458 0320F809 */  jalr  $t9
/* 0041145C 00000000 */   nop   
/* 00411460 8FA801D4 */  lw    $t0, 0x1d4($sp)
/* 00411464 8FAE01F0 */  lw    $t6, 0x1f0($sp)
/* 00411468 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0041146C 31090002 */  andi  $t1, $t0, 2
/* 00411470 25CF0001 */  addiu $t7, $t6, 1
/* 00411474 00409825 */  move  $s3, $v0
/* 00411478 15200003 */  bnez  $t1, .L00411488
/* 0041147C AFAF01F0 */   sw    $t7, 0x1f0($sp)
/* 00411480 8F8189B4 */  lw     $at, %got(pseudo_leaf)($gp)
/* 00411484 A0200000 */  sb    $zero, ($at)
.L00411488:
/* 00411488 8F998018 */  lw    $t9, %got(func_0040E238)($gp)
/* 0041148C 02602025 */  move  $a0, $s3
/* 00411490 27A21650 */  addiu $v0, $sp, 0x1650
/* 00411494 2739E238 */  addiu $t9, %lo(func_0040E238) # addiu $t9, $t9, -0x1dc8
/* 00411498 0320F809 */  jalr  $t9
/* 0041149C 00000000 */   nop   
/* 004114A0 1000F842 */  b     .L0040F5AC
/* 004114A4 8FBC00CC */   lw    $gp, 0xcc($sp)
.L004114A8:
/* 004114A8 97A41648 */  lhu   $a0, 0x1648($sp)
/* 004114AC 27AB1004 */  addiu $t3, $sp, 0x1004
/* 004114B0 27A21650 */  addiu $v0, $sp, 0x1650
/* 004114B4 0004C880 */  sll   $t9, $a0, 2
/* 004114B8 032BB821 */  addu  $s7, $t9, $t3
/* 004114BC 8F998018 */  lw    $t9, %got(func_0040E2AC)($gp)
/* 004114C0 2487FFFF */  addiu $a3, $a0, -1
/* 004114C4 AFA700F4 */  sw    $a3, 0xf4($sp)
/* 004114C8 2739E2AC */  addiu $t9, %lo(func_0040E2AC) # addiu $t9, $t9, -0x1d54
/* 004114CC 0320F809 */  jalr  $t9
/* 004114D0 00000000 */   nop   
/* 004114D4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004114D8 27A401C8 */  addiu $a0, $sp, 0x1c8
/* 004114DC 8EE50000 */  lw    $a1, ($s7)
/* 004114E0 8F99865C */  lw    $t9, %call16(build_u1)($gp)
/* 004114E4 0320F809 */  jalr  $t9
/* 004114E8 00000000 */   nop   
/* 004114EC 8FA700F4 */  lw    $a3, 0xf4($sp)
/* 004114F0 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004114F4 8FA801D4 */  lw    $t0, 0x1d4($sp)
/* 004114F8 30E3FFFF */  andi  $v1, $a3, 0xffff
/* 004114FC 00409825 */  move  $s3, $v0
/* 00411500 006002B6 */  tne   $v1, $zero, 0xa
/* 00411504 310D0080 */  andi  $t5, $t0, 0x80
/* 00411508 15A00006 */  bnez  $t5, .L00411524
/* 0041150C A7A31648 */   sh    $v1, 0x1648($sp)
/* 00411510 8FAC01F0 */  lw    $t4, 0x1f0($sp)
/* 00411514 8F8189B4 */  lw     $at, %got(pseudo_leaf)($gp)
/* 00411518 258A0001 */  addiu $t2, $t4, 1
/* 0041151C AFAA01F0 */  sw    $t2, 0x1f0($sp)
/* 00411520 A0200000 */  sb    $zero, ($at)
.L00411524:
/* 00411524 8F998018 */  lw    $t9, %got(func_0040E238)($gp)
/* 00411528 02602025 */  move  $a0, $s3
/* 0041152C 27A21650 */  addiu $v0, $sp, 0x1650
/* 00411530 2739E238 */  addiu $t9, %lo(func_0040E238) # addiu $t9, $t9, -0x1dc8
/* 00411534 0320F809 */  jalr  $t9
/* 00411538 00000000 */   nop   
/* 0041153C 1000F81B */  b     .L0040F5AC
/* 00411540 8FBC00CC */   lw    $gp, 0xcc($sp)
.L00411544:
/* 00411544 97A41648 */  lhu   $a0, 0x1648($sp)
/* 00411548 27A91004 */  addiu $t1, $sp, 0x1004
/* 0041154C 27A21650 */  addiu $v0, $sp, 0x1650
/* 00411550 00047880 */  sll   $t7, $a0, 2
/* 00411554 01E9C821 */  addu  $t9, $t7, $t1
/* 00411558 0320B825 */  move  $s7, $t9
/* 0041155C 2736FFFC */  addiu $s6, $t9, -4
/* 00411560 8F998018 */  lw    $t9, %got(func_0040E2AC)($gp)
/* 00411564 2487FFFF */  addiu $a3, $a0, -1
/* 00411568 AFA700F4 */  sw    $a3, 0xf4($sp)
/* 0041156C 2739E2AC */  addiu $t9, %lo(func_0040E2AC) # addiu $t9, $t9, -0x1d54
/* 00411570 0320F809 */  jalr  $t9
/* 00411574 00000000 */   nop   
/* 00411578 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0041157C 8FA400F4 */  lw    $a0, 0xf4($sp)
/* 00411580 27A21650 */  addiu $v0, $sp, 0x1650
/* 00411584 8F998018 */  lw    $t9, %got(func_0040E2AC)($gp)
/* 00411588 2739E2AC */  addiu $t9, %lo(func_0040E2AC) # addiu $t9, $t9, -0x1d54
/* 0041158C 0320F809 */  jalr  $t9
/* 00411590 00000000 */   nop   
/* 00411594 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00411598 27A401C8 */  addiu $a0, $sp, 0x1c8
/* 0041159C 8EC50000 */  lw    $a1, ($s6)
/* 004115A0 8F998660 */  lw    $t9, %call16(build_u2)($gp)
/* 004115A4 8EE60000 */  lw    $a2, ($s7)
/* 004115A8 0320F809 */  jalr  $t9
/* 004115AC 00000000 */   nop   
/* 004115B0 97AB1648 */  lhu   $t3, 0x1648($sp)
/* 004115B4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004115B8 2578FFFE */  addiu $t8, $t3, -2
/* 004115BC 330DFFFF */  andi  $t5, $t8, 0xffff
/* 004115C0 A7B81648 */  sh    $t8, 0x1648($sp)
/* 004115C4 01A002B6 */  tne   $t5, $zero, 0xa
/* 004115C8 8F998018 */  lw    $t9, %got(func_0040E238)($gp)
/* 004115CC 00402025 */  move  $a0, $v0
/* 004115D0 27A21650 */  addiu $v0, $sp, 0x1650
/* 004115D4 2739E238 */  addiu $t9, %lo(func_0040E238) # addiu $t9, $t9, -0x1dc8
/* 004115D8 0320F809 */  jalr  $t9
/* 004115DC 00000000 */   nop   
/* 004115E0 1000F7F2 */  b     .L0040F5AC
/* 004115E4 8FBC00CC */   lw    $gp, 0xcc($sp)
.L004115E8:
/* 004115E8 97AC1648 */  lhu   $t4, 0x1648($sp)
/* 004115EC 93A901C8 */  lbu   $t1, 0x1c8($sp)
/* 004115F0 27AF1004 */  addiu $t7, $sp, 0x1004
/* 004115F4 2401007B */  li    $at, 123
/* 004115F8 000C5080 */  sll   $t2, $t4, 2
/* 004115FC 014FB821 */  addu  $s7, $t2, $t7
/* 00411600 15210002 */  bne   $t1, $at, .L0041160C
/* 00411604 2587FFFF */   addiu $a3, $t4, -1
/* 00411608 AFA001D8 */  sw    $zero, 0x1d8($sp)
.L0041160C:
/* 0041160C 93AE01C8 */  lbu   $t6, 0x1c8($sp)
/* 00411610 93B901C9 */  lbu   $t9, 0x1c9($sp)
/* 00411614 2401007B */  li    $at, 123
/* 00411618 15C10007 */  bne   $t6, $at, .L00411638
/* 0041161C 00195E00 */   sll   $t3, $t9, 0x18
/* 00411620 000BC742 */  srl   $t8, $t3, 0x1d
/* 00411624 24010003 */  li    $at, 3
/* 00411628 17010003 */  bne   $t8, $at, .L00411638
/* 0041162C 8FA801D4 */   lw    $t0, 0x1d4($sp)
/* 00411630 00084080 */  sll   $t0, $t0, 2
/* 00411634 AFA801D4 */  sw    $t0, 0x1d4($sp)
.L00411638:
/* 00411638 93AD01C8 */  lbu   $t5, 0x1c8($sp)
/* 0041163C 2401007B */  li    $at, 123
/* 00411640 8FA801D4 */  lw    $t0, 0x1d4($sp)
/* 00411644 55A1001B */  bnel  $t5, $at, .L004116B4
/* 00411648 93AF01C8 */   lbu   $t7, 0x1c8($sp)
/* 0041164C 93AA01C9 */  lbu   $t2, 0x1c9($sp)
/* 00411650 24010002 */  li    $at, 2
/* 00411654 AFA801D4 */  sw    $t0, 0x1d4($sp)
/* 00411658 000A7E00 */  sll   $t7, $t2, 0x18
/* 0041165C 000F6742 */  srl   $t4, $t7, 0x1d
/* 00411660 55810014 */  bnel  $t4, $at, .L004116B4
/* 00411664 93AF01C8 */   lbu   $t7, 0x1c8($sp)
/* 00411668 8FA901CC */  lw    $t1, 0x1cc($sp)
/* 0041166C AFA801D4 */  sw    $t0, 0x1d4($sp)
/* 00411670 8FB801D0 */  lw    $t8, 0x1d0($sp)
/* 00411674 1520000E */  bnez  $t1, .L004116B0
/* 00411678 8FAA01EC */   lw    $t2, 0x1ec($sp)
/* 0041167C 8F8E8A7C */  lw     $t6, %got(first_pmt_offset)($gp)
/* 00411680 8DCE0000 */  lw    $t6, ($t6)
/* 00411684 010EC823 */  subu  $t9, $t0, $t6
/* 00411688 07210002 */  bgez  $t9, .L00411694
/* 0041168C 03205825 */   move  $t3, $t9
/* 00411690 00195823 */  negu  $t3, $t9
.L00411694:
/* 00411694 01786821 */  addu  $t5, $t3, $t8
/* 00411698 014D082A */  slt   $at, $t2, $t5
/* 0041169C 50200003 */  beql  $at, $zero, .L004116AC
/* 004116A0 AFAA01EC */   sw    $t2, 0x1ec($sp)
/* 004116A4 01A05025 */  move  $t2, $t5
/* 004116A8 AFAA01EC */  sw    $t2, 0x1ec($sp)
.L004116AC:
/* 004116AC AFA801D4 */  sw    $t0, 0x1d4($sp)
.L004116B0:
/* 004116B0 93AF01C8 */  lbu   $t7, 0x1c8($sp)
.L004116B4:
/* 004116B4 24010005 */  li    $at, 5
/* 004116B8 11E10003 */  beq   $t7, $at, .L004116C8
/* 004116BC 2401007C */   li    $at, 124
/* 004116C0 15E10004 */  bne   $t7, $at, .L004116D4
/* 004116C4 00000000 */   nop   
.L004116C8:
/* 004116C8 8F8189A8 */  lw     $at, %got(use_fp)($gp)
/* 004116CC 240C0001 */  li    $t4, 1
/* 004116D0 A02C0000 */  sb    $t4, ($at)
.L004116D4:
/* 004116D4 8F998018 */  lw    $t9, %got(func_0040E2AC)($gp)
/* 004116D8 97A41648 */  lhu   $a0, 0x1648($sp)
/* 004116DC 27A21650 */  addiu $v0, $sp, 0x1650
/* 004116E0 2739E2AC */  addiu $t9, %lo(func_0040E2AC) # addiu $t9, $t9, -0x1d54
/* 004116E4 0320F809 */  jalr  $t9
/* 004116E8 AFA700F4 */   sw    $a3, 0xf4($sp)
/* 004116EC 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004116F0 8EF00000 */  lw    $s0, ($s7)
/* 004116F4 27A401C8 */  addiu $a0, $sp, 0x1c8
/* 004116F8 8F99865C */  lw    $t9, %call16(build_u1)($gp)
/* 004116FC 02002825 */  move  $a1, $s0
/* 00411700 0320F809 */  jalr  $t9
/* 00411704 00000000 */   nop   
/* 00411708 93A901C8 */  lbu   $t1, 0x1c8($sp)
/* 0041170C 2401007B */  li    $at, 123
/* 00411710 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00411714 8FA700F4 */  lw    $a3, 0xf4($sp)
/* 00411718 15210021 */  bne   $t1, $at, .L004117A0
/* 0041171C 00409825 */   move  $s3, $v0
/* 00411720 920E0020 */  lbu   $t6, 0x20($s0)
/* 00411724 24010052 */  li    $at, 82
/* 00411728 8FA801D4 */  lw    $t0, 0x1d4($sp)
/* 0041172C 55C1001D */  bnel  $t6, $at, .L004117A4
/* 00411730 93AC01C8 */   lbu   $t4, 0x1c8($sp)
/* 00411734 8E19002C */  lw    $t9, 0x2c($s0)
/* 00411738 93B801C9 */  lbu   $t8, 0x1c9($sp)
/* 0041173C 55190019 */  bnel  $t0, $t9, .L004117A4
/* 00411740 93AC01C8 */   lbu   $t4, 0x1c8($sp)
/* 00411744 92020021 */  lbu   $v0, 0x21($s0)
/* 00411748 330D001F */  andi  $t5, $t8, 0x1f
/* 0041174C 00186600 */  sll   $t4, $t8, 0x18
/* 00411750 304B001F */  andi  $t3, $v0, 0x1f
/* 00411754 156D0012 */  bne   $t3, $t5, .L004117A0
/* 00411758 00025600 */   sll   $t2, $v0, 0x18
/* 0041175C 000A7F42 */  srl   $t7, $t2, 0x1d
/* 00411760 000C4F42 */  srl   $t1, $t4, 0x1d
/* 00411764 15E9000E */  bne   $t7, $t1, .L004117A0
/* 00411768 8FAE01CC */   lw    $t6, 0x1cc($sp)
/* 0041176C 8E190024 */  lw    $t9, 0x24($s0)
/* 00411770 8FAB01D0 */  lw    $t3, 0x1d0($sp)
/* 00411774 55D9000B */  bnel  $t6, $t9, .L004117A4
/* 00411778 93AC01C8 */   lbu   $t4, 0x1c8($sp)
/* 0041177C 8E0D0028 */  lw    $t5, 0x28($s0)
/* 00411780 97AA01CA */  lhu   $t2, 0x1ca($sp)
/* 00411784 156D0006 */  bne   $t3, $t5, .L004117A0
/* 00411788 31580001 */   andi  $t8, $t2, 1
/* 0041178C 17000004 */  bnez  $t8, .L004117A0
/* 00411790 30E2FFFF */   andi  $v0, $a3, 0xffff
/* 00411794 004002B6 */  tne   $v0, $zero, 0xa
/* 00411798 1000F784 */  b     .L0040F5AC
/* 0041179C A7A21648 */   sh    $v0, 0x1648($sp)
.L004117A0:
/* 004117A0 93AC01C8 */  lbu   $t4, 0x1c8($sp)
.L004117A4:
/* 004117A4 A7A71648 */  sh    $a3, 0x1648($sp)
/* 004117A8 24010005 */  li    $at, 5
/* 004117AC 15810054 */  bne   $t4, $at, .L00411900
/* 004117B0 97AF1648 */   lhu   $t7, 0x1648($sp)
/* 004117B4 11E00052 */  beqz  $t7, .L00411900
/* 004117B8 24060086 */   li    $a2, 134
/* 004117BC 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 004117C0 8F848950 */  lw     $a0, %got(err)($gp)
/* 004117C4 8F858038 */  lw    $a1, %got(RO_10008E14)($gp)
/* 004117C8 24070086 */  li    $a3, 134
/* 004117CC 8C840000 */  lw    $a0, ($a0)
/* 004117D0 0320F809 */  jalr  $t9
/* 004117D4 24A58E14 */   addiu $a1, %lo(RO_10008E14) # addiu $a1, $a1, -0x71ec
/* 004117D8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004117DC 8F9987CC */  lw    $t9, %call16(writeln)($gp)
/* 004117E0 8F848950 */  lw     $a0, %got(err)($gp)
/* 004117E4 0320F809 */  jalr  $t9
/* 004117E8 8C840000 */   lw    $a0, ($a0)
/* 004117EC 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004117F0 8F998084 */  lw    $t9, %call16(fflush)($gp)
/* 004117F4 8F848950 */  lw     $a0, %got(err)($gp)
/* 004117F8 0320F809 */  jalr  $t9
/* 004117FC 8C840000 */   lw    $a0, ($a0)
/* 00411800 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00411804 24040004 */  li    $a0, 4
/* 00411808 2405070F */  li    $a1, 1807
/* 0041180C 8F898038 */  lw    $t1, %got(RO_10008DC4)($gp)
/* 00411810 03A05825 */  move  $t3, $sp
/* 00411814 25298DC4 */  addiu $t1, %lo(RO_10008DC4) # addiu $t1, $t1, -0x723c
/* 00411818 252D0048 */  addiu $t5, $t1, 0x48
.L0041181C:
/* 0041181C 89390000 */  lwl   $t9, ($t1)
/* 00411820 99390003 */  lwr   $t9, 3($t1)
/* 00411824 2529000C */  addiu $t1, $t1, 0xc
/* 00411828 256B000C */  addiu $t3, $t3, 0xc
/* 0041182C A979FFFC */  swl   $t9, -4($t3)
/* 00411830 B979FFFF */  swr   $t9, -1($t3)
/* 00411834 892EFFF8 */  lwl   $t6, -8($t1)
/* 00411838 992EFFFB */  lwr   $t6, -5($t1)
/* 0041183C A96E0000 */  swl   $t6, ($t3)
/* 00411840 B96E0003 */  swr   $t6, 3($t3)
/* 00411844 8939FFFC */  lwl   $t9, -4($t1)
/* 00411848 9939FFFF */  lwr   $t9, -1($t1)
/* 0041184C A9790004 */  swl   $t9, 4($t3)
/* 00411850 152DFFF2 */  bne   $t1, $t5, .L0041181C
/* 00411854 B9790007 */   swr   $t9, 7($t3)
/* 00411858 89390000 */  lwl   $t9, ($t1)
/* 0041185C 99390003 */  lwr   $t9, 3($t1)
/* 00411860 8F8A8038 */  lw    $t2, %got(RO_10008D74)($gp)
/* 00411864 03A07825 */  move  $t7, $sp
/* 00411868 A9790008 */  swl   $t9, 8($t3)
/* 0041186C B979000B */  swr   $t9, 0xb($t3)
/* 00411870 892E0004 */  lwl   $t6, 4($t1)
/* 00411874 992E0007 */  lwr   $t6, 7($t1)
/* 00411878 254A8D74 */  addiu $t2, %lo(RO_10008D74) # addiu $t2, $t2, -0x728c
/* 0041187C 254D0048 */  addiu $t5, $t2, 0x48
/* 00411880 A96E000C */  swl   $t6, 0xc($t3)
/* 00411884 B96E000F */  swr   $t6, 0xf($t3)
.L00411888:
/* 00411888 894C0000 */  lwl   $t4, ($t2)
/* 0041188C 994C0003 */  lwr   $t4, 3($t2)
/* 00411890 254A000C */  addiu $t2, $t2, 0xc
/* 00411894 25EF000C */  addiu $t7, $t7, 0xc
/* 00411898 A9EC004C */  swl   $t4, 0x4c($t7)
/* 0041189C B9EC004F */  swr   $t4, 0x4f($t7)
/* 004118A0 8958FFF8 */  lwl   $t8, -8($t2)
/* 004118A4 9958FFFB */  lwr   $t8, -5($t2)
/* 004118A8 A9F80050 */  swl   $t8, 0x50($t7)
/* 004118AC B9F80053 */  swr   $t8, 0x53($t7)
/* 004118B0 894CFFFC */  lwl   $t4, -4($t2)
/* 004118B4 994CFFFF */  lwr   $t4, -1($t2)
/* 004118B8 A9EC0054 */  swl   $t4, 0x54($t7)
/* 004118BC 154DFFF2 */  bne   $t2, $t5, .L00411888
/* 004118C0 B9EC0057 */   swr   $t4, 0x57($t7)
/* 004118C4 894C0000 */  lwl   $t4, ($t2)
/* 004118C8 994C0003 */  lwr   $t4, 3($t2)
/* 004118CC A9EC0058 */  swl   $t4, 0x58($t7)
/* 004118D0 B9EC005B */  swr   $t4, 0x5b($t7)
/* 004118D4 89580004 */  lwl   $t8, 4($t2)
/* 004118D8 99580007 */  lwr   $t8, 7($t2)
/* 004118DC A9F8005C */  swl   $t8, 0x5c($t7)
/* 004118E0 B9F8005F */  swr   $t8, 0x5f($t7)
/* 004118E4 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 004118E8 8FA7000C */  lw    $a3, 0xc($sp)
/* 004118EC 8FA60008 */  lw    $a2, 8($sp)
/* 004118F0 0320F809 */  jalr  $t9
/* 004118F4 00000000 */   nop   
/* 004118F8 10000003 */  b     .L00411908
/* 004118FC 8FBC00CC */   lw    $gp, 0xcc($sp)
.L00411900:
/* 00411900 97A91648 */  lhu   $t1, 0x1648($sp)
/* 00411904 012002B6 */  tne   $t1, $zero, 0xa
.L00411908:
/* 00411908 8F998018 */  lw    $t9, %got(func_0040E24C)($gp)
/* 0041190C 02602025 */  move  $a0, $s3
/* 00411910 27A21650 */  addiu $v0, $sp, 0x1650
/* 00411914 2739E24C */  addiu $t9, %lo(func_0040E24C) # addiu $t9, $t9, -0x1db4
/* 00411918 0320F809 */  jalr  $t9
/* 0041191C 00000000 */   nop   
/* 00411920 92620020 */  lbu   $v0, 0x20($s3)
/* 00411924 2401007B */  li    $at, 123
/* 00411928 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0041192C 54410010 */  bnel  $v0, $at, .L00411970
/* 00411930 24010005 */   li    $at, 5
/* 00411934 926B0021 */  lbu   $t3, 0x21($s3)
/* 00411938 24010002 */  li    $at, 2
/* 0041193C 000B7600 */  sll   $t6, $t3, 0x18
/* 00411940 000ECF42 */  srl   $t9, $t6, 0x1d
/* 00411944 5721000A */  bnel  $t9, $at, .L00411970
/* 00411948 24010005 */   li    $at, 5
/* 0041194C 8F998018 */  lw    $t9, %got(func_0040E474)($gp)
/* 00411950 02602025 */  move  $a0, $s3
/* 00411954 27A21650 */  addiu $v0, $sp, 0x1650
/* 00411958 2739E474 */  addiu $t9, %lo(func_0040E474) # addiu $t9, $t9, -0x1b8c
/* 0041195C 0320F809 */  jalr  $t9
/* 00411960 00000000 */   nop   
/* 00411964 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00411968 92620020 */  lbu   $v0, 0x20($s3)
/* 0041196C 24010005 */  li    $at, 5
.L00411970:
/* 00411970 10410003 */  beq   $v0, $at, .L00411980
/* 00411974 2401007C */   li    $at, 124
/* 00411978 1441F70C */  bne   $v0, $at, .L0040F5AC
/* 0041197C 00000000 */   nop   
.L00411980:
/* 00411980 8F8D8A28 */  lw     $t5, %got(addr_dtype)($gp)
/* 00411984 92620021 */  lbu   $v0, 0x21($s3)
/* 00411988 91AD0000 */  lbu   $t5, ($t5)
/* 0041198C 000256C0 */  sll   $t2, $v0, 0x1b
/* 00411990 000A7EC2 */  srl   $t7, $t2, 0x1b
/* 00411994 01AFC026 */  xor   $t8, $t5, $t7
/* 00411998 330C001F */  andi  $t4, $t8, 0x1f
/* 0041199C 01824826 */  xor   $t1, $t4, $v0
/* 004119A0 1000F702 */  b     .L0040F5AC
/* 004119A4 A2690021 */   sb    $t1, 0x21($s3)
.L004119A8:
/* 004119A8 97AB1648 */  lhu   $t3, 0x1648($sp)
/* 004119AC 8F988A50 */  lw     $t8, %got(nooffsetopt)($gp)
/* 004119B0 27B91004 */  addiu $t9, $sp, 0x1004
/* 004119B4 000B7080 */  sll   $t6, $t3, 2
/* 004119B8 93180000 */  lbu   $t8, ($t8)
/* 004119BC 01D9B821 */  addu  $s7, $t6, $t9
/* 004119C0 25CDFFFC */  addiu $t5, $t6, -4
/* 004119C4 27AF09C4 */  addiu $t7, $sp, 0x9c4
/* 004119C8 AFA001D8 */  sw    $zero, 0x1d8($sp)
/* 004119CC 01AF8821 */  addu  $s1, $t5, $t7
/* 004119D0 13000008 */  beqz  $t8, .L004119F4
/* 004119D4 26F6FFFC */   addiu $s6, $s7, -4
/* 004119D8 8F998018 */  lw    $t9, %got(func_0040E2AC)($gp)
/* 004119DC 2564FFFF */  addiu $a0, $t3, -1
/* 004119E0 27A21650 */  addiu $v0, $sp, 0x1650
/* 004119E4 2739E2AC */  addiu $t9, %lo(func_0040E2AC) # addiu $t9, $t9, -0x1d54
/* 004119E8 0320F809 */  jalr  $t9
/* 004119EC 00000000 */   nop   
/* 004119F0 8FBC00CC */  lw    $gp, 0xcc($sp)
.L004119F4:
/* 004119F4 8ECC0000 */  lw    $t4, ($s6)
/* 004119F8 8FA801D4 */  lw    $t0, 0x1d4($sp)
/* 004119FC 5580001F */  bnel  $t4, $zero, .L00411A7C
/* 00411A00 8E2E0000 */   lw    $t6, ($s1)
/* 00411A04 8FA801D4 */  lw    $t0, 0x1d4($sp)
/* 00411A08 8E290000 */  lw    $t1, ($s1)
/* 00411A0C 8F9989DC */  lw     $t9, %got(basicint)($gp)
/* 00411A10 24018000 */  li    $at, -32768
/* 00411A14 0128F021 */  addu  $fp, $t1, $t0
/* 00411A18 33C8FFFF */  andi  $t0, $fp, 0xffff
/* 00411A1C 93390000 */  lbu   $t9, ($t9)
/* 00411A20 39088000 */  xori  $t0, $t0, 0x8000
/* 00411A24 01014021 */  addu  $t0, $t0, $at
/* 00411A28 24010001 */  li    $at, 1
/* 00411A2C 1721000A */  bne   $t9, $at, .L00411A58
/* 00411A30 00002025 */   move  $a0, $zero
/* 00411A34 8F998688 */  lw    $t9, %call16(dwvalue)($gp)
/* 00411A38 03C83823 */  subu  $a3, $fp, $t0
/* 00411A3C 000737C3 */  sra   $a2, $a3, 0x1f
/* 00411A40 2404000F */  li    $a0, 15
/* 00411A44 0320F809 */  jalr  $t9
/* 00411A48 AFA801D4 */   sw    $t0, 0x1d4($sp)
/* 00411A4C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00411A50 1000000C */  b     .L00411A84
/* 00411A54 AEC20000 */   sw    $v0, ($s6)
.L00411A58:
/* 00411A58 8F998684 */  lw    $t9, %call16(ivalue)($gp)
/* 00411A5C 00002825 */  move  $a1, $zero
/* 00411A60 03C83023 */  subu  $a2, $fp, $t0
/* 00411A64 0320F809 */  jalr  $t9
/* 00411A68 AFA801D4 */   sw    $t0, 0x1d4($sp)
/* 00411A6C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00411A70 10000004 */  b     .L00411A84
/* 00411A74 AEC20000 */   sw    $v0, ($s6)
/* 00411A78 8E2E0000 */  lw    $t6, ($s1)
.L00411A7C:
/* 00411A7C 010E4021 */  addu  $t0, $t0, $t6
/* 00411A80 AFA801D4 */  sw    $t0, 0x1d4($sp)
.L00411A84:
/* 00411A84 8F998018 */  lw    $t9, %got(func_0040E2AC)($gp)
/* 00411A88 AE200000 */  sw    $zero, ($s1)
/* 00411A8C 97A41648 */  lhu   $a0, 0x1648($sp)
/* 00411A90 2739E2AC */  addiu $t9, %lo(func_0040E2AC) # addiu $t9, $t9, -0x1d54
/* 00411A94 0320F809 */  jalr  $t9
/* 00411A98 27A21650 */   addiu $v0, $sp, 0x1650
/* 00411A9C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00411AA0 27A401C8 */  addiu $a0, $sp, 0x1c8
/* 00411AA4 8EC50000 */  lw    $a1, ($s6)
/* 00411AA8 8F998660 */  lw    $t9, %call16(build_u2)($gp)
/* 00411AAC 8EE60000 */  lw    $a2, ($s7)
/* 00411AB0 0320F809 */  jalr  $t9
/* 00411AB4 00000000 */   nop   
/* 00411AB8 97AD1648 */  lhu   $t5, 0x1648($sp)
/* 00411ABC 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00411AC0 25AFFFFE */  addiu $t7, $t5, -2
/* 00411AC4 31F8FFFF */  andi  $t8, $t7, 0xffff
/* 00411AC8 A7AF1648 */  sh    $t7, 0x1648($sp)
/* 00411ACC 030002B6 */  tne   $t8, $zero, 0xa
/* 00411AD0 8F998018 */  lw    $t9, %got(func_0040E24C)($gp)
/* 00411AD4 00402025 */  move  $a0, $v0
/* 00411AD8 27A21650 */  addiu $v0, $sp, 0x1650
/* 00411ADC 2739E24C */  addiu $t9, %lo(func_0040E24C) # addiu $t9, $t9, -0x1db4
/* 00411AE0 0320F809 */  jalr  $t9
/* 00411AE4 00000000 */   nop   
/* 00411AE8 1000F6B0 */  b     .L0040F5AC
/* 00411AEC 8FBC00CC */   lw    $gp, 0xcc($sp)
.L00411AF0:
/* 00411AF0 8F8B8A50 */  lw     $t3, %got(nooffsetopt)($gp)
/* 00411AF4 8FA801D4 */  lw    $t0, 0x1d4($sp)
/* 00411AF8 916B0000 */  lbu   $t3, ($t3)
/* 00411AFC AFA801D8 */  sw    $t0, 0x1d8($sp)
/* 00411B00 51600009 */  beql  $t3, $zero, .L00411B28
/* 00411B04 97AC1648 */   lhu   $t4, 0x1648($sp)
/* 00411B08 8F998018 */  lw    $t9, %got(func_0040E2AC)($gp)
/* 00411B0C 97A41648 */  lhu   $a0, 0x1648($sp)
/* 00411B10 27A21650 */  addiu $v0, $sp, 0x1650
/* 00411B14 2739E2AC */  addiu $t9, %lo(func_0040E2AC) # addiu $t9, $t9, -0x1d54
/* 00411B18 0320F809 */  jalr  $t9
/* 00411B1C 2484FFFF */   addiu $a0, $a0, -1
/* 00411B20 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00411B24 97AC1648 */  lhu   $t4, 0x1648($sp)
.L00411B28:
/* 00411B28 24090002 */  li    $t1, 2
/* 00411B2C 2D810002 */  sltiu $at, $t4, 2
/* 00411B30 50200003 */  beql  $at, $zero, .L00411B40
/* 00411B34 97B91648 */   lhu   $t9, 0x1648($sp)
/* 00411B38 A7A91648 */  sh    $t1, 0x1648($sp)
/* 00411B3C 97B91648 */  lhu   $t9, 0x1648($sp)
.L00411B40:
/* 00411B40 27AD1004 */  addiu $t5, $sp, 0x1004
/* 00411B44 27B809C4 */  addiu $t8, $sp, 0x9c4
/* 00411B48 00195080 */  sll   $t2, $t9, 2
/* 00411B4C 254EFFFC */  addiu $t6, $t2, -4
/* 00411B50 01CDB021 */  addu  $s6, $t6, $t5
/* 00411B54 8ECB0000 */  lw    $t3, ($s6)
/* 00411B58 254FFFFC */  addiu $t7, $t2, -4
/* 00411B5C 01F88821 */  addu  $s1, $t7, $t8
/* 00411B60 1560001E */  bnez  $t3, .L00411BDC
/* 00411B64 014DB821 */   addu  $s7, $t2, $t5
/* 00411B68 8E2C0000 */  lw    $t4, ($s1)
/* 00411B6C 8FA901CC */  lw    $t1, 0x1cc($sp)
/* 00411B70 8F9989DC */  lw     $t9, %got(basicint)($gp)
/* 00411B74 24018000 */  li    $at, -32768
/* 00411B78 0189F021 */  addu  $fp, $t4, $t1
/* 00411B7C 33C8FFFF */  andi  $t0, $fp, 0xffff
/* 00411B80 93390000 */  lbu   $t9, ($t9)
/* 00411B84 39088000 */  xori  $t0, $t0, 0x8000
/* 00411B88 01014021 */  addu  $t0, $t0, $at
/* 00411B8C 24010001 */  li    $at, 1
/* 00411B90 1721000A */  bne   $t9, $at, .L00411BBC
/* 00411B94 00002025 */   move  $a0, $zero
/* 00411B98 8F998688 */  lw    $t9, %call16(dwvalue)($gp)
/* 00411B9C 03C83823 */  subu  $a3, $fp, $t0
/* 00411BA0 000737C3 */  sra   $a2, $a3, 0x1f
/* 00411BA4 2404000F */  li    $a0, 15
/* 00411BA8 0320F809 */  jalr  $t9
/* 00411BAC AFA801D4 */   sw    $t0, 0x1d4($sp)
/* 00411BB0 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00411BB4 1000000D */  b     .L00411BEC
/* 00411BB8 AEC20000 */   sw    $v0, ($s6)
.L00411BBC:
/* 00411BBC 8F998684 */  lw    $t9, %call16(ivalue)($gp)
/* 00411BC0 00002825 */  move  $a1, $zero
/* 00411BC4 03C83023 */  subu  $a2, $fp, $t0
/* 00411BC8 0320F809 */  jalr  $t9
/* 00411BCC AFA801D4 */   sw    $t0, 0x1d4($sp)
/* 00411BD0 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00411BD4 10000005 */  b     .L00411BEC
/* 00411BD8 AEC20000 */   sw    $v0, ($s6)
.L00411BDC:
/* 00411BDC 8FAD01CC */  lw    $t5, 0x1cc($sp)
/* 00411BE0 8E2A0000 */  lw    $t2, ($s1)
/* 00411BE4 01AA4021 */  addu  $t0, $t5, $t2
/* 00411BE8 AFA801D4 */  sw    $t0, 0x1d4($sp)
.L00411BEC:
/* 00411BEC 8F998018 */  lw    $t9, %got(func_0040E2AC)($gp)
/* 00411BF0 AE200000 */  sw    $zero, ($s1)
/* 00411BF4 97A41648 */  lhu   $a0, 0x1648($sp)
/* 00411BF8 2739E2AC */  addiu $t9, %lo(func_0040E2AC) # addiu $t9, $t9, -0x1d54
/* 00411BFC 0320F809 */  jalr  $t9
/* 00411C00 27A21650 */   addiu $v0, $sp, 0x1650
/* 00411C04 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00411C08 27A401C8 */  addiu $a0, $sp, 0x1c8
/* 00411C0C 8EC50000 */  lw    $a1, ($s6)
/* 00411C10 8F998660 */  lw    $t9, %call16(build_u2)($gp)
/* 00411C14 8EE60000 */  lw    $a2, ($s7)
/* 00411C18 0320F809 */  jalr  $t9
/* 00411C1C 00000000 */   nop   
/* 00411C20 97AF1648 */  lhu   $t7, 0x1648($sp)
/* 00411C24 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00411C28 25F8FFFE */  addiu $t8, $t7, -2
/* 00411C2C 330BFFFF */  andi  $t3, $t8, 0xffff
/* 00411C30 A7B81648 */  sh    $t8, 0x1648($sp)
/* 00411C34 016002B6 */  tne   $t3, $zero, 0xa
/* 00411C38 8F998018 */  lw    $t9, %got(func_0040E24C)($gp)
/* 00411C3C 00402025 */  move  $a0, $v0
/* 00411C40 27A21650 */  addiu $v0, $sp, 0x1650
/* 00411C44 2739E24C */  addiu $t9, %lo(func_0040E24C) # addiu $t9, $t9, -0x1db4
/* 00411C48 0320F809 */  jalr  $t9
/* 00411C4C 00000000 */   nop   
/* 00411C50 1000F656 */  b     .L0040F5AC
/* 00411C54 8FBC00CC */   lw    $gp, 0xcc($sp)
.L00411C58:
/* 00411C58 8F998018 */  lw    $t9, %got(func_0040E2AC)($gp)
/* 00411C5C 97A41648 */  lhu   $a0, 0x1648($sp)
/* 00411C60 27A21650 */  addiu $v0, $sp, 0x1650
/* 00411C64 2739E2AC */  addiu $t9, %lo(func_0040E2AC) # addiu $t9, $t9, -0x1d54
/* 00411C68 0320F809 */  jalr  $t9
/* 00411C6C 2484FFFF */   addiu $a0, $a0, -1
/* 00411C70 97AC1648 */  lhu   $t4, 0x1648($sp)
/* 00411C74 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00411C78 24090002 */  li    $t1, 2
/* 00411C7C 2D810002 */  sltiu $at, $t4, 2
/* 00411C80 10200002 */  beqz  $at, .L00411C8C
/* 00411C84 27AE09C4 */   addiu $t6, $sp, 0x9c4
/* 00411C88 A7A91648 */  sh    $t1, 0x1648($sp)
.L00411C8C:
/* 00411C8C 97A41648 */  lhu   $a0, 0x1648($sp)
/* 00411C90 27AF1004 */  addiu $t7, $sp, 0x1004
/* 00411C94 27A21650 */  addiu $v0, $sp, 0x1650
/* 00411C98 0004C880 */  sll   $t9, $a0, 2
/* 00411C9C 032E6821 */  addu  $t5, $t9, $t6
/* 00411CA0 8F998018 */  lw    $t9, %got(func_0040E2AC)($gp)
/* 00411CA4 0004C080 */  sll   $t8, $a0, 2
/* 00411CA8 270BFFFC */  addiu $t3, $t8, -4
/* 00411CAC 00045080 */  sll   $t2, $a0, 2
/* 00411CB0 2739E2AC */  addiu $t9, %lo(func_0040E2AC) # addiu $t9, $t9, -0x1d54
/* 00411CB4 ADA0FFFC */  sw    $zero, -4($t5)
/* 00411CB8 014FB821 */  addu  $s7, $t2, $t7
/* 00411CBC 0320F809 */  jalr  $t9
/* 00411CC0 016FB021 */   addu  $s6, $t3, $t7
/* 00411CC4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00411CC8 27A401C8 */  addiu $a0, $sp, 0x1c8
/* 00411CCC 8EC50000 */  lw    $a1, ($s6)
/* 00411CD0 8F998660 */  lw    $t9, %call16(build_u2)($gp)
/* 00411CD4 8EE60000 */  lw    $a2, ($s7)
/* 00411CD8 0320F809 */  jalr  $t9
/* 00411CDC 00000000 */   nop   
/* 00411CE0 97A31648 */  lhu   $v1, 0x1648($sp)
/* 00411CE4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00411CE8 2463FFFE */  addiu $v1, $v1, -2
/* 00411CEC 3063FFFF */  andi  $v1, $v1, 0xffff
/* 00411CF0 006002B6 */  tne   $v1, $zero, 0xa
/* 00411CF4 8F998018 */  lw    $t9, %got(func_0040E24C)($gp)
/* 00411CF8 00402025 */  move  $a0, $v0
/* 00411CFC 27A21650 */  addiu $v0, $sp, 0x1650
/* 00411D00 2739E24C */  addiu $t9, %lo(func_0040E24C) # addiu $t9, $t9, -0x1db4
/* 00411D04 0320F809 */  jalr  $t9
/* 00411D08 A7A31648 */   sh    $v1, 0x1648($sp)
/* 00411D0C 1000F627 */  b     .L0040F5AC
/* 00411D10 8FBC00CC */   lw    $gp, 0xcc($sp)
.L00411D14:
/* 00411D14 8F998664 */  lw    $t9, %call16(build_op)($gp)
/* 00411D18 24040052 */  li    $a0, 82
/* 00411D1C 0320F809 */  jalr  $t9
/* 00411D20 00000000 */   nop   
/* 00411D24 904C0021 */  lbu   $t4, 0x21($v0)
/* 00411D28 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00411D2C 27A401C8 */  addiu $a0, $sp, 0x1c8
/* 00411D30 3189FF1F */  andi  $t1, $t4, 0xff1f
/* 00411D34 35230060 */  ori   $v1, $t1, 0x60
/* 00411D38 A0430021 */  sb    $v1, 0x21($v0)
/* 00411D3C 97AE01CA */  lhu   $t6, 0x1ca($sp)
/* 00411D40 00037EC0 */  sll   $t7, $v1, 0x1b
/* 00411D44 000F66C2 */  srl   $t4, $t7, 0x1b
/* 00411D48 000E6880 */  sll   $t5, $t6, 2
/* 00411D4C AC4D002C */  sw    $t5, 0x2c($v0)
/* 00411D50 8FAA01D0 */  lw    $t2, 0x1d0($sp)
/* 00411D54 00402825 */  move  $a1, $v0
/* 00411D58 AC4A0028 */  sw    $t2, 0x28($v0)
/* 00411D5C 93AB01C9 */  lbu   $t3, 0x1c9($sp)
/* 00411D60 016C4826 */  xor   $t1, $t3, $t4
/* 00411D64 3139001F */  andi  $t9, $t1, 0x1f
/* 00411D68 03237026 */  xor   $t6, $t9, $v1
/* 00411D6C A04E0021 */  sb    $t6, 0x21($v0)
/* 00411D70 8FAD01CC */  lw    $t5, 0x1cc($sp)
/* 00411D74 A4400022 */  sh    $zero, 0x22($v0)
/* 00411D78 AC4D0024 */  sw    $t5, 0x24($v0)
/* 00411D7C 8F99865C */  lw    $t9, %call16(build_u1)($gp)
/* 00411D80 0320F809 */  jalr  $t9
/* 00411D84 00000000 */   nop   
/* 00411D88 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00411D8C 240A007B */  li    $t2, 123
/* 00411D90 A04A0020 */  sb    $t2, 0x20($v0)
/* 00411D94 8F998018 */  lw    $t9, %got(func_0040E238)($gp)
/* 00411D98 AC400030 */  sw    $zero, 0x30($v0)
/* 00411D9C A4400022 */  sh    $zero, 0x22($v0)
/* 00411DA0 00402025 */  move  $a0, $v0
/* 00411DA4 2739E238 */  addiu $t9, %lo(func_0040E238) # addiu $t9, $t9, -0x1dc8
/* 00411DA8 0320F809 */  jalr  $t9
/* 00411DAC 27A21650 */   addiu $v0, $sp, 0x1650
/* 00411DB0 1000F5FE */  b     .L0040F5AC
/* 00411DB4 8FBC00CC */   lw    $gp, 0xcc($sp)
.L00411DB8:
/* 00411DB8 8F998658 */  lw    $t9, %call16(build_u)($gp)
/* 00411DBC 27A401C8 */  addiu $a0, $sp, 0x1c8
/* 00411DC0 0320F809 */  jalr  $t9
/* 00411DC4 00000000 */   nop   
/* 00411DC8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00411DCC 24180052 */  li    $t8, 82
/* 00411DD0 A0580020 */  sb    $t8, 0x20($v0)
/* 00411DD4 AC400030 */  sw    $zero, 0x30($v0)
/* 00411DD8 A4400022 */  sh    $zero, 0x22($v0)
/* 00411DDC 8F998664 */  lw    $t9, %call16(build_op)($gp)
/* 00411DE0 00408025 */  move  $s0, $v0
/* 00411DE4 2404007B */  li    $a0, 123
/* 00411DE8 0320F809 */  jalr  $t9
/* 00411DEC 00000000 */   nop   
/* 00411DF0 904F0021 */  lbu   $t7, 0x21($v0)
/* 00411DF4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00411DF8 00402025 */  move  $a0, $v0
/* 00411DFC 31EBFF1F */  andi  $t3, $t7, 0xff1f
/* 00411E00 35630060 */  ori   $v1, $t3, 0x60
/* 00411E04 A0430021 */  sb    $v1, 0x21($v0)
/* 00411E08 97A901CA */  lhu   $t1, 0x1ca($sp)
/* 00411E0C AC400030 */  sw    $zero, 0x30($v0)
/* 00411E10 0003C6C0 */  sll   $t8, $v1, 0x1b
/* 00411E14 0009C880 */  sll   $t9, $t1, 2
/* 00411E18 AC59002C */  sw    $t9, 0x2c($v0)
/* 00411E1C 8FAE01D0 */  lw    $t6, 0x1d0($sp)
/* 00411E20 00187EC2 */  srl   $t7, $t8, 0x1b
/* 00411E24 AC4E0028 */  sw    $t6, 0x28($v0)
/* 00411E28 93AA01C9 */  lbu   $t2, 0x1c9($sp)
/* 00411E2C 014F5826 */  xor   $t3, $t2, $t7
/* 00411E30 316C001F */  andi  $t4, $t3, 0x1f
/* 00411E34 01834826 */  xor   $t1, $t4, $v1
/* 00411E38 A0490021 */  sb    $t1, 0x21($v0)
/* 00411E3C 8FB901CC */  lw    $t9, 0x1cc($sp)
/* 00411E40 A4400022 */  sh    $zero, 0x22($v0)
/* 00411E44 AC500000 */  sw    $s0, ($v0)
/* 00411E48 AC590024 */  sw    $t9, 0x24($v0)
/* 00411E4C 8F998018 */  lw    $t9, %got(func_0040E238)($gp)
/* 00411E50 27A21650 */  addiu $v0, $sp, 0x1650
/* 00411E54 2739E238 */  addiu $t9, %lo(func_0040E238) # addiu $t9, $t9, -0x1dc8
/* 00411E58 0320F809 */  jalr  $t9
/* 00411E5C 00000000 */   nop   
/* 00411E60 1000F5D2 */  b     .L0040F5AC
/* 00411E64 8FBC00CC */   lw    $gp, 0xcc($sp)
.L00411E68:
/* 00411E68 93AE01C9 */  lbu   $t6, 0x1c9($sp)
/* 00411E6C 3C01004E */  lui   $at, 0x4e
/* 00411E70 34218000 */  ori   $at, $at, 0x8000
/* 00411E74 31CD001F */  andi  $t5, $t6, 0x1f
/* 00411E78 2DB80020 */  sltiu $t8, $t5, 0x20
/* 00411E7C 00185023 */  negu  $t2, $t8
/* 00411E80 01417824 */  and   $t7, $t2, $at
/* 00411E84 01AF5804 */  sllv  $t3, $t7, $t5
/* 00411E88 05610008 */  bgez  $t3, .L00411EAC
/* 00411E8C 8FAC01C4 */   lw    $t4, 0x1c4($sp)
/* 00411E90 8F9987E8 */  lw    $t9, %call16(new)($gp)
/* 00411E94 AFAC01DC */  sw    $t4, 0x1dc($sp)
/* 00411E98 24040400 */  li    $a0, 1024
/* 00411E9C 0320F809 */  jalr  $t9
/* 00411EA0 00002825 */   move  $a1, $zero
/* 00411EA4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00411EA8 AFA201C4 */  sw    $v0, 0x1c4($sp)
.L00411EAC:
/* 00411EAC 8F998658 */  lw    $t9, %call16(build_u)($gp)
/* 00411EB0 27A401C8 */  addiu $a0, $sp, 0x1c8
/* 00411EB4 0320F809 */  jalr  $t9
/* 00411EB8 00000000 */   nop   
/* 00411EBC 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00411EC0 24090049 */  li    $t1, 73
/* 00411EC4 A0490020 */  sb    $t1, 0x20($v0)
/* 00411EC8 93B901C9 */  lbu   $t9, 0x1c9($sp)
/* 00411ECC 24010002 */  li    $at, 2
/* 00411ED0 00408025 */  move  $s0, $v0
/* 00411ED4 332E001F */  andi  $t6, $t9, 0x1f
/* 00411ED8 11C10004 */  beq   $t6, $at, .L00411EEC
/* 00411EDC 24180047 */   li    $t8, 71
/* 00411EE0 2401000A */  li    $at, 10
/* 00411EE4 15C10016 */  bne   $t6, $at, .L00411F40
/* 00411EE8 93AF01C9 */   lbu   $t7, 0x1c9($sp)
.L00411EEC:
/* 00411EEC A0580020 */  sb    $t8, 0x20($v0)
/* 00411EF0 8FAA01D8 */  lw    $t2, 0x1d8($sp)
/* 00411EF4 8F8F8A28 */  lw     $t7, %got(addr_dtype)($gp)
/* 00411EF8 90430021 */  lbu   $v1, 0x21($v0)
/* 00411EFC AC4A0024 */  sw    $t2, 0x24($v0)
/* 00411F00 91EF0000 */  lbu   $t7, ($t7)
/* 00411F04 00036EC0 */  sll   $t5, $v1, 0x1b
/* 00411F08 000D5EC2 */  srl   $t3, $t5, 0x1b
/* 00411F0C 01EB6026 */  xor   $t4, $t7, $t3
/* 00411F10 3189001F */  andi  $t1, $t4, 0x1f
/* 00411F14 01237026 */  xor   $t6, $t1, $v1
/* 00411F18 8F8D8A2C */  lw     $t5, %got(unitsperaddr)($gp)
/* 00411F1C 31D8FF1F */  andi  $t8, $t6, 0xff1f
/* 00411F20 A04E0021 */  sb    $t6, 0x21($v0)
/* 00411F24 370A0080 */  ori   $t2, $t8, 0x80
/* 00411F28 A04A0021 */  sb    $t2, 0x21($v0)
/* 00411F2C AC40002C */  sw    $zero, 0x2c($v0)
/* 00411F30 AC400030 */  sw    $zero, 0x30($v0)
/* 00411F34 8DAD0000 */  lw    $t5, ($t5)
/* 00411F38 10000015 */  b     .L00411F90
/* 00411F3C AC4D0028 */   sw    $t5, 0x28($v0)
.L00411F40:
/* 00411F40 31EB001F */  andi  $t3, $t7, 0x1f
/* 00411F44 24010003 */  li    $at, 3
/* 00411F48 15610011 */  bne   $t3, $at, .L00411F90
/* 00411F4C 00000000 */   nop   
/* 00411F50 8F9981BC */  lw    $t9, %call16(find_label)($gp)
/* 00411F54 8FA401D8 */  lw    $a0, 0x1d8($sp)
/* 00411F58 0320F809 */  jalr  $t9
/* 00411F5C 00000000 */   nop   
/* 00411F60 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00411F64 2404000B */  li    $a0, 11
/* 00411F68 00402825 */  move  $a1, $v0
/* 00411F6C 8F998668 */  lw    $t9, %call16(build_1op)($gp)
/* 00411F70 0320F809 */  jalr  $t9
/* 00411F74 00000000 */   nop   
/* 00411F78 904C0021 */  lbu   $t4, 0x21($v0)
/* 00411F7C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00411F80 00408025 */  move  $s0, $v0
/* 00411F84 3189FFE0 */  andi  $t1, $t4, 0xffe0
/* 00411F88 35390003 */  ori   $t9, $t1, 3
/* 00411F8C A0590021 */  sb    $t9, 0x21($v0)
.L00411F90:
/* 00411F90 8F998664 */  lw    $t9, %call16(build_op)($gp)
/* 00411F94 2404007B */  li    $a0, 123
/* 00411F98 0320F809 */  jalr  $t9
/* 00411F9C 00000000 */   nop   
/* 00411FA0 90430021 */  lbu   $v1, 0x21($v0)
/* 00411FA4 93B801C9 */  lbu   $t8, 0x1c9($sp)
/* 00411FA8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00411FAC 000356C0 */  sll   $t2, $v1, 0x1b
/* 00411FB0 000A6EC2 */  srl   $t5, $t2, 0x1b
/* 00411FB4 030D7826 */  xor   $t7, $t8, $t5
/* 00411FB8 31EB001F */  andi  $t3, $t7, 0x1f
/* 00411FBC 01634826 */  xor   $t1, $t3, $v1
/* 00411FC0 3139FF1F */  andi  $t9, $t1, 0xff1f
/* 00411FC4 A0490021 */  sb    $t1, 0x21($v0)
/* 00411FC8 372E0060 */  ori   $t6, $t9, 0x60
/* 00411FCC A04E0021 */  sb    $t6, 0x21($v0)
/* 00411FD0 8FAA01CC */  lw    $t2, 0x1cc($sp)
/* 00411FD4 AC400030 */  sw    $zero, 0x30($v0)
/* 00411FD8 8F998018 */  lw    $t9, %got(func_0040E238)($gp)
/* 00411FDC 000AC080 */  sll   $t8, $t2, 2
/* 00411FE0 AC58002C */  sw    $t8, 0x2c($v0)
/* 00411FE4 8FAD01D0 */  lw    $t5, 0x1d0($sp)
/* 00411FE8 AC500000 */  sw    $s0, ($v0)
/* 00411FEC 00402025 */  move  $a0, $v0
/* 00411FF0 2739E238 */  addiu $t9, %lo(func_0040E238) # addiu $t9, $t9, -0x1dc8
/* 00411FF4 AC4D0028 */  sw    $t5, 0x28($v0)
/* 00411FF8 0320F809 */  jalr  $t9
/* 00411FFC 27A21650 */   addiu $v0, $sp, 0x1650
/* 00412000 1000F56A */  b     .L0040F5AC
/* 00412004 8FBC00CC */   lw    $gp, 0xcc($sp)
.L00412008:
/* 00412008 8F998658 */  lw    $t9, %call16(build_u)($gp)
/* 0041200C 27A401C8 */  addiu $a0, $sp, 0x1c8
/* 00412010 0320F809 */  jalr  $t9
/* 00412014 00000000 */   nop   
/* 00412018 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0041201C 90430021 */  lbu   $v1, 0x21($v0)
/* 00412020 240F0047 */  li    $t7, 71
/* 00412024 8F8B8A28 */  lw     $t3, %got(addr_dtype)($gp)
/* 00412028 A04F0020 */  sb    $t7, 0x20($v0)
/* 0041202C 000366C0 */  sll   $t4, $v1, 0x1b
/* 00412030 916B0000 */  lbu   $t3, ($t3)
/* 00412034 000C4EC2 */  srl   $t1, $t4, 0x1b
/* 00412038 24010002 */  li    $at, 2
/* 0041203C 0169C826 */  xor   $t9, $t3, $t1
/* 00412040 332E001F */  andi  $t6, $t9, 0x1f
/* 00412044 01C35026 */  xor   $t2, $t6, $v1
/* 00412048 A04A0021 */  sb    $t2, 0x21($v0)
/* 0041204C 93B801C9 */  lbu   $t8, 0x1c9($sp)
/* 00412050 00408025 */  move  $s0, $v0
/* 00412054 00186E00 */  sll   $t5, $t8, 0x18
/* 00412058 000D7F42 */  srl   $t7, $t5, 0x1d
/* 0041205C 15E10008 */  bne   $t7, $at, .L00412080
/* 00412060 00000000 */   nop   
/* 00412064 8F998018 */  lw    $t9, %got(func_0040E474)($gp)
/* 00412068 00402025 */  move  $a0, $v0
/* 0041206C 27A21650 */  addiu $v0, $sp, 0x1650
/* 00412070 2739E474 */  addiu $t9, %lo(func_0040E474) # addiu $t9, $t9, -0x1b8c
/* 00412074 0320F809 */  jalr  $t9
/* 00412078 00000000 */   nop   
/* 0041207C 8FBC00CC */  lw    $gp, 0xcc($sp)
.L00412080:
/* 00412080 8F998664 */  lw    $t9, %call16(build_op)($gp)
/* 00412084 2404007B */  li    $a0, 123
/* 00412088 0320F809 */  jalr  $t9
/* 0041208C 00000000 */   nop   
/* 00412090 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00412094 90430021 */  lbu   $v1, 0x21($v0)
/* 00412098 00402025 */  move  $a0, $v0
/* 0041209C 8F8C8A28 */  lw     $t4, %got(addr_dtype)($gp)
/* 004120A0 00035EC0 */  sll   $t3, $v1, 0x1b
/* 004120A4 000B4EC2 */  srl   $t1, $t3, 0x1b
/* 004120A8 918C0000 */  lbu   $t4, ($t4)
/* 004120AC 8F858A2C */  lw     $a1, %got(unitsperaddr)($gp)
/* 004120B0 0189C826 */  xor   $t9, $t4, $t1
/* 004120B4 332E001F */  andi  $t6, $t9, 0x1f
/* 004120B8 01C3C026 */  xor   $t8, $t6, $v1
/* 004120BC 330DFF1F */  andi  $t5, $t8, 0xff1f
/* 004120C0 A0580021 */  sb    $t8, 0x21($v0)
/* 004120C4 35AF0060 */  ori   $t7, $t5, 0x60
/* 004120C8 A04F0021 */  sb    $t7, 0x21($v0)
/* 004120CC 8FAB01D0 */  lw    $t3, 0x1d0($sp)
/* 004120D0 8CA50000 */  lw    $a1, ($a1)
/* 004120D4 8F998018 */  lw    $t9, %got(func_0040E238)($gp)
/* 004120D8 AC400030 */  sw    $zero, 0x30($v0)
/* 004120DC 01650019 */  multu $t3, $a1
/* 004120E0 AC500000 */  sw    $s0, ($v0)
/* 004120E4 AC450028 */  sw    $a1, 0x28($v0)
/* 004120E8 2739E238 */  addiu $t9, %lo(func_0040E238) # addiu $t9, $t9, -0x1dc8
/* 004120EC 00006012 */  mflo  $t4
/* 004120F0 AC4C002C */  sw    $t4, 0x2c($v0)
/* 004120F4 27A21650 */  addiu $v0, $sp, 0x1650
/* 004120F8 0320F809 */  jalr  $t9
/* 004120FC AE050028 */   sw    $a1, 0x28($s0)
/* 00412100 1000F52A */  b     .L0040F5AC
/* 00412104 8FBC00CC */   lw    $gp, 0xcc($sp)
.L00412108:
/* 00412108 97B21648 */  lhu   $s2, 0x1648($sp)
/* 0041210C 27B91004 */  addiu $t9, $sp, 0x1004
/* 00412110 8FA901C4 */  lw    $t1, 0x1c4($sp)
/* 00412114 00129080 */  sll   $s2, $s2, 2
/* 00412118 0259B821 */  addu  $s7, $s2, $t9
/* 0041211C 8F9987E8 */  lw    $t9, %call16(new)($gp)
/* 00412120 27AE09C4 */  addiu $t6, $sp, 0x9c4
/* 00412124 27AA0384 */  addiu $t2, $sp, 0x384
/* 00412128 024AA821 */  addu  $s5, $s2, $t2
/* 0041212C 024EA021 */  addu  $s4, $s2, $t6
/* 00412130 24040400 */  li    $a0, 1024
/* 00412134 00002825 */  move  $a1, $zero
/* 00412138 0320F809 */  jalr  $t9
/* 0041213C AFA901DC */   sw    $t1, 0x1dc($sp)
/* 00412140 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00412144 AFA201C4 */  sw    $v0, 0x1c4($sp)
/* 00412148 27A401C8 */  addiu $a0, $sp, 0x1c8
/* 0041214C 8F998658 */  lw    $t9, %call16(build_u)($gp)
/* 00412150 0320F809 */  jalr  $t9
/* 00412154 00000000 */   nop   
/* 00412158 97B81648 */  lhu   $t8, 0x1648($sp)
/* 0041215C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00412160 26F70004 */  addiu $s7, $s7, 4
/* 00412164 270D0001 */  addiu $t5, $t8, 1
/* 00412168 A7AD1648 */  sh    $t5, 0x1648($sp)
/* 0041216C 26940004 */  addiu $s4, $s4, 4
/* 00412170 26B50004 */  addiu $s5, $s5, 4
/* 00412174 AEE20000 */  sw    $v0, ($s7)
/* 00412178 AE800000 */  sw    $zero, ($s4)
/* 0041217C 1000F50B */  b     .L0040F5AC
/* 00412180 AEA00000 */   sw    $zero, ($s5)
.L00412184:
/* 00412184 8F8F8A28 */  lw     $t7, %got(addr_dtype)($gp)
/* 00412188 93AB01C9 */  lbu   $t3, 0x1c9($sp)
/* 0041218C 97B21648 */  lhu   $s2, 0x1648($sp)
/* 00412190 91EF0000 */  lbu   $t7, ($t7)
/* 00412194 000B66C0 */  sll   $t4, $t3, 0x1b
/* 00412198 000C4EC2 */  srl   $t1, $t4, 0x1b
/* 0041219C 01E9C826 */  xor   $t9, $t7, $t1
/* 004121A0 332E001F */  andi  $t6, $t9, 0x1f
/* 004121A4 8F998658 */  lw    $t9, %call16(build_u)($gp)
/* 004121A8 00129080 */  sll   $s2, $s2, 2
/* 004121AC 27AC0384 */  addiu $t4, $sp, 0x384
/* 004121B0 27B81004 */  addiu $t8, $sp, 0x1004
/* 004121B4 27AD09C4 */  addiu $t5, $sp, 0x9c4
/* 004121B8 01CB5026 */  xor   $t2, $t6, $t3
/* 004121BC A3AA01C9 */  sb    $t2, 0x1c9($sp)
/* 004121C0 024DA021 */  addu  $s4, $s2, $t5
/* 004121C4 0258B821 */  addu  $s7, $s2, $t8
/* 004121C8 024CA821 */  addu  $s5, $s2, $t4
/* 004121CC 0320F809 */  jalr  $t9
/* 004121D0 27A401C8 */   addiu $a0, $sp, 0x1c8
/* 004121D4 93AF01C9 */  lbu   $t7, 0x1c9($sp)
/* 004121D8 24010001 */  li    $at, 1
/* 004121DC 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004121E0 000F4E00 */  sll   $t1, $t7, 0x18
/* 004121E4 0009CF42 */  srl   $t9, $t1, 0x1d
/* 004121E8 17210014 */  bne   $t9, $at, .L0041223C
/* 004121EC 00409825 */   move  $s3, $v0
/* 004121F0 8F8E8A74 */  lw     $t6, %got(reversed_stack)($gp)
/* 004121F4 8FB801D8 */  lw    $t8, 0x1d8($sp)
/* 004121F8 8FAD0188 */  lw    $t5, 0x188($sp)
/* 004121FC 91CE0000 */  lbu   $t6, ($t6)
/* 00412200 8FAB01D8 */  lw    $t3, 0x1d8($sp)
/* 00412204 8FAA0184 */  lw    $t2, 0x184($sp)
/* 00412208 11C00007 */  beqz  $t6, .L00412228
/* 0041220C 030D082A */   slt   $at, $t8, $t5
/* 00412210 014B082A */  slt   $at, $t2, $t3
/* 00412214 10200002 */  beqz  $at, .L00412220
/* 00412218 00000000 */   nop   
/* 0041221C 01605025 */  move  $t2, $t3
.L00412220:
/* 00412220 10000013 */  b     .L00412270
/* 00412224 AFAA0184 */   sw    $t2, 0x184($sp)
.L00412228:
/* 00412228 10200002 */  beqz  $at, .L00412234
/* 0041222C 00000000 */   nop   
/* 00412230 03006825 */  move  $t5, $t8
.L00412234:
/* 00412234 1000000E */  b     .L00412270
/* 00412238 AFAD0188 */   sw    $t5, 0x188($sp)
.L0041223C:
/* 0041223C 93AC01C9 */  lbu   $t4, 0x1c9($sp)
/* 00412240 24010002 */  li    $at, 2
/* 00412244 000C7E00 */  sll   $t7, $t4, 0x18
/* 00412248 000F4F42 */  srl   $t1, $t7, 0x1d
/* 0041224C 55210009 */  bnel  $t1, $at, .L00412274
/* 00412250 97B91648 */   lhu   $t9, 0x1648($sp)
/* 00412254 8F998018 */  lw    $t9, %got(func_0040E474)($gp)
/* 00412258 02602025 */  move  $a0, $s3
/* 0041225C 27A21650 */  addiu $v0, $sp, 0x1650
/* 00412260 2739E474 */  addiu $t9, %lo(func_0040E474) # addiu $t9, $t9, -0x1b8c
/* 00412264 0320F809 */  jalr  $t9
/* 00412268 00000000 */   nop   
/* 0041226C 8FBC00CC */  lw    $gp, 0xcc($sp)
.L00412270:
/* 00412270 97B91648 */  lhu   $t9, 0x1648($sp)
.L00412274:
/* 00412274 26F70004 */  addiu $s7, $s7, 4
/* 00412278 26940004 */  addiu $s4, $s4, 4
/* 0041227C 272E0001 */  addiu $t6, $t9, 1
/* 00412280 A7AE1648 */  sh    $t6, 0x1648($sp)
/* 00412284 26B50004 */  addiu $s5, $s5, 4
/* 00412288 AEF30000 */  sw    $s3, ($s7)
/* 0041228C AE800000 */  sw    $zero, ($s4)
/* 00412290 1000F4C6 */  b     .L0040F5AC
/* 00412294 AEA00000 */   sw    $zero, ($s5)
.L00412298:
/* 00412298 97AB1648 */  lhu   $t3, 0x1648($sp)
/* 0041229C 27B809C4 */  addiu $t8, $sp, 0x9c4
/* 004122A0 27AD0384 */  addiu $t5, $sp, 0x384
/* 004122A4 256A0001 */  addiu $t2, $t3, 1
/* 004122A8 3152FFFF */  andi  $s2, $t2, 0xffff
/* 004122AC 00129080 */  sll   $s2, $s2, 2
/* 004122B0 A7AA1648 */  sh    $t2, 0x1648($sp)
/* 004122B4 0258A021 */  addu  $s4, $s2, $t8
/* 004122B8 AE800000 */  sw    $zero, ($s4)
/* 004122BC 024D6021 */  addu  $t4, $s2, $t5
/* 004122C0 AD800000 */  sw    $zero, ($t4)
/* 004122C4 97AF1648 */  lhu   $t7, 0x1648($sp)
/* 004122C8 27A901F7 */  addiu $t1, $sp, 0x1f7
/* 004122CC 24190011 */  li    $t9, 17
/* 004122D0 01E91021 */  addu  $v0, $t7, $t1
/* 004122D4 A0590000 */  sb    $t9, ($v0)
/* 004122D8 93AB01C9 */  lbu   $t3, 0x1c9($sp)
/* 004122DC 3C01004E */  lui   $at, 0x4e
/* 004122E0 27AE1004 */  addiu $t6, $sp, 0x1004
/* 004122E4 316A001F */  andi  $t2, $t3, 0x1f
/* 004122E8 2D580020 */  sltiu $t8, $t2, 0x20
/* 004122EC 00186823 */  negu  $t5, $t8
/* 004122F0 01A16024 */  and   $t4, $t5, $at
/* 004122F4 014C7804 */  sllv  $t7, $t4, $t2
/* 004122F8 05E10010 */  bgez  $t7, .L0041233C
/* 004122FC 024EB821 */   addu  $s7, $s2, $t6
/* 00412300 8F9987E8 */  lw    $t9, %call16(new)($gp)
/* 00412304 8FA901C4 */  lw    $t1, 0x1c4($sp)
/* 00412308 24040400 */  li    $a0, 1024
/* 0041230C 00002825 */  move  $a1, $zero
/* 00412310 0320F809 */  jalr  $t9
/* 00412314 AFA901DC */   sw    $t1, 0x1dc($sp)
/* 00412318 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0041231C AFA201C4 */  sw    $v0, 0x1c4($sp)
/* 00412320 27A401C8 */  addiu $a0, $sp, 0x1c8
/* 00412324 8F998658 */  lw    $t9, %call16(build_u)($gp)
/* 00412328 0320F809 */  jalr  $t9
/* 0041232C 00000000 */   nop   
/* 00412330 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00412334 1000F49D */  b     .L0040F5AC
/* 00412338 AEE20000 */   sw    $v0, ($s7)
.L0041233C:
/* 0041233C 93B901C9 */  lbu   $t9, 0x1c9($sp)
/* 00412340 24010002 */  li    $at, 2
/* 00412344 332E001F */  andi  $t6, $t9, 0x1f
/* 00412348 11C10003 */  beq   $t6, $at, .L00412358
/* 0041234C 2401000A */   li    $at, 10
/* 00412350 15C10017 */  bne   $t6, $at, .L004123B0
/* 00412354 93B801C9 */   lbu   $t8, 0x1c9($sp)
.L00412358:
/* 00412358 8F998664 */  lw    $t9, %call16(build_op)($gp)
/* 0041235C 24040047 */  li    $a0, 71
/* 00412360 0320F809 */  jalr  $t9
/* 00412364 00000000 */   nop   
/* 00412368 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0041236C 90580021 */  lbu   $t8, 0x21($v0)
/* 00412370 8FAB01D8 */  lw    $t3, 0x1d8($sp)
/* 00412374 8F8A8A28 */  lw     $t2, %got(addr_dtype)($gp)
/* 00412378 330DFF1F */  andi  $t5, $t8, 0xff1f
/* 0041237C 35A30080 */  ori   $v1, $t5, 0x80
/* 00412380 A0430021 */  sb    $v1, 0x21($v0)
/* 00412384 AC4B0024 */  sw    $t3, 0x24($v0)
/* 00412388 914A0000 */  lbu   $t2, ($t2)
/* 0041238C 00037EC0 */  sll   $t7, $v1, 0x1b
/* 00412390 000F4EC2 */  srl   $t1, $t7, 0x1b
/* 00412394 0149C826 */  xor   $t9, $t2, $t1
/* 00412398 332E001F */  andi  $t6, $t9, 0x1f
/* 0041239C 01C35826 */  xor   $t3, $t6, $v1
/* 004123A0 A04B0021 */  sb    $t3, 0x21($v0)
/* 004123A4 AC40002C */  sw    $zero, 0x2c($v0)
/* 004123A8 1000F480 */  b     .L0040F5AC
/* 004123AC AEE20000 */   sw    $v0, ($s7)
.L004123B0:
/* 004123B0 330D001F */  andi  $t5, $t8, 0x1f
/* 004123B4 24010003 */  li    $at, 3
/* 004123B8 15A10012 */  bne   $t5, $at, .L00412404
/* 004123BC 93A901C9 */   lbu   $t1, 0x1c9($sp)
/* 004123C0 8F9981BC */  lw    $t9, %call16(find_label)($gp)
/* 004123C4 8FA401D8 */  lw    $a0, 0x1d8($sp)
/* 004123C8 0320F809 */  jalr  $t9
/* 004123CC 00000000 */   nop   
/* 004123D0 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004123D4 2404000B */  li    $a0, 11
/* 004123D8 00402825 */  move  $a1, $v0
/* 004123DC 8F998668 */  lw    $t9, %call16(build_1op)($gp)
/* 004123E0 0320F809 */  jalr  $t9
/* 004123E4 00000000 */   nop   
/* 004123E8 904C0021 */  lbu   $t4, 0x21($v0)
/* 004123EC 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004123F0 318FFFE0 */  andi  $t7, $t4, 0xffe0
/* 004123F4 35EA0003 */  ori   $t2, $t7, 3
/* 004123F8 A04A0021 */  sb    $t2, 0x21($v0)
/* 004123FC 1000F46B */  b     .L0040F5AC
/* 00412400 AEE20000 */   sw    $v0, ($s7)
.L00412404:
/* 00412404 3139001F */  andi  $t9, $t1, 0x1f
/* 00412408 2F2E0020 */  sltiu $t6, $t9, 0x20
/* 0041240C 000E5823 */  negu  $t3, $t6
/* 00412410 3C010500 */  lui   $at, 0x500
/* 00412414 0161C024 */  and   $t8, $t3, $at
/* 00412418 03386804 */  sllv  $t5, $t8, $t9
/* 0041241C 05A30009 */  bgezl $t5, .L00412444
/* 00412420 AEE00000 */   sw    $zero, ($s7)
/* 00412424 8F998658 */  lw    $t9, %call16(build_u)($gp)
/* 00412428 27A401C8 */  addiu $a0, $sp, 0x1c8
/* 0041242C 0320F809 */  jalr  $t9
/* 00412430 00000000 */   nop   
/* 00412434 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00412438 1000F45C */  b     .L0040F5AC
/* 0041243C AEE20000 */   sw    $v0, ($s7)
/* 00412440 AEE00000 */  sw    $zero, ($s7)
.L00412444:
/* 00412444 8FAC01D8 */  lw    $t4, 0x1d8($sp)
/* 00412448 AE8C0000 */  sw    $t4, ($s4)
/* 0041244C 93AF01C9 */  lbu   $t7, 0x1c9($sp)
/* 00412450 31EA001F */  andi  $t2, $t7, 0x1f
/* 00412454 1000F455 */  b     .L0040F5AC
/* 00412458 A04A0000 */   sb    $t2, ($v0)
.L0041245C:
/* 0041245C 97A21648 */  lhu   $v0, 0x1648($sp)
/* 00412460 27A909C4 */  addiu $t1, $sp, 0x9c4
/* 00412464 27AB0384 */  addiu $t3, $sp, 0x384
/* 00412468 24420001 */  addiu $v0, $v0, 1
/* 0041246C 3042FFFF */  andi  $v0, $v0, 0xffff
/* 00412470 00029080 */  sll   $s2, $v0, 2
/* 00412474 02497021 */  addu  $t6, $s2, $t1
/* 00412478 ADC00000 */  sw    $zero, ($t6)
/* 0041247C 024BC021 */  addu  $t8, $s2, $t3
/* 00412480 27AD01F7 */  addiu $t5, $sp, 0x1f7
/* 00412484 AF000000 */  sw    $zero, ($t8)
/* 00412488 004D6021 */  addu  $t4, $v0, $t5
/* 0041248C 24190011 */  li    $t9, 17
/* 00412490 A1990000 */  sb    $t9, ($t4)
/* 00412494 8F998658 */  lw    $t9, %call16(build_u)($gp)
/* 00412498 27AF1004 */  addiu $t7, $sp, 0x1004
/* 0041249C 024FB821 */  addu  $s7, $s2, $t7
/* 004124A0 A7A21648 */  sh    $v0, 0x1648($sp)
/* 004124A4 0320F809 */  jalr  $t9
/* 004124A8 27A401C8 */   addiu $a0, $sp, 0x1c8
/* 004124AC 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004124B0 1000F43E */  b     .L0040F5AC
/* 004124B4 AEE20000 */   sw    $v0, ($s7)
.L004124B8:
/* 004124B8 97B21648 */  lhu   $s2, 0x1648($sp)
/* 004124BC 93AB01C8 */  lbu   $t3, 0x1c8($sp)
/* 004124C0 27AA1004 */  addiu $t2, $sp, 0x1004
/* 004124C4 00129080 */  sll   $s2, $s2, 2
/* 004124C8 27A909C4 */  addiu $t1, $sp, 0x9c4
/* 004124CC 27AE0384 */  addiu $t6, $sp, 0x384
/* 004124D0 24010052 */  li    $at, 82
/* 004124D4 024EA821 */  addu  $s5, $s2, $t6
/* 004124D8 0249A021 */  addu  $s4, $s2, $t1
/* 004124DC 15610009 */  bne   $t3, $at, .L00412504
/* 004124E0 024AB821 */   addu  $s7, $s2, $t2
/* 004124E4 93B801C9 */  lbu   $t8, 0x1c9($sp)
/* 004124E8 8FA801D4 */  lw    $t0, 0x1d4($sp)
/* 004124EC 24010003 */  li    $at, 3
/* 004124F0 00186E00 */  sll   $t5, $t8, 0x18
/* 004124F4 000DCF42 */  srl   $t9, $t5, 0x1d
/* 004124F8 17210002 */  bne   $t9, $at, .L00412504
/* 004124FC 00084080 */   sll   $t0, $t0, 2
/* 00412500 AFA801D4 */  sw    $t0, 0x1d4($sp)
.L00412504:
/* 00412504 8F998658 */  lw    $t9, %call16(build_u)($gp)
/* 00412508 27A401C8 */  addiu $a0, $sp, 0x1c8
/* 0041250C 0320F809 */  jalr  $t9
/* 00412510 00000000 */   nop   
/* 00412514 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00412518 AC400030 */  sw    $zero, 0x30($v0)
/* 0041251C 97AC1648 */  lhu   $t4, 0x1648($sp)
/* 00412520 24010052 */  li    $at, 82
/* 00412524 00409825 */  move  $s3, $v0
/* 00412528 258F0001 */  addiu $t7, $t4, 1
/* 0041252C A7AF1648 */  sh    $t7, 0x1648($sp)
/* 00412530 AEE20004 */  sw    $v0, 4($s7)
/* 00412534 AE800004 */  sw    $zero, 4($s4)
/* 00412538 AEA00004 */  sw    $zero, 4($s5)
/* 0041253C 904A0020 */  lbu   $t2, 0x20($v0)
/* 00412540 26F70004 */  addiu $s7, $s7, 4
/* 00412544 26940004 */  addiu $s4, $s4, 4
/* 00412548 1541000E */  bne   $t2, $at, .L00412584
/* 0041254C 26B50004 */   addiu $s5, $s5, 4
/* 00412550 90490021 */  lbu   $t1, 0x21($v0)
/* 00412554 24010002 */  li    $at, 2
/* 00412558 00097600 */  sll   $t6, $t1, 0x18
/* 0041255C 000E5F42 */  srl   $t3, $t6, 0x1d
/* 00412560 55610009 */  bnel  $t3, $at, .L00412588
/* 00412564 92620020 */   lbu   $v0, 0x20($s3)
/* 00412568 8F998018 */  lw    $t9, %got(func_0040E474)($gp)
/* 0041256C 00402025 */  move  $a0, $v0
/* 00412570 27A21650 */  addiu $v0, $sp, 0x1650
/* 00412574 2739E474 */  addiu $t9, %lo(func_0040E474) # addiu $t9, $t9, -0x1b8c
/* 00412578 0320F809 */  jalr  $t9
/* 0041257C 00000000 */   nop   
/* 00412580 8FBC00CC */  lw    $gp, 0xcc($sp)
.L00412584:
/* 00412584 92620020 */  lbu   $v0, 0x20($s3)
.L00412588:
/* 00412588 2401004B */  li    $at, 75
/* 0041258C 10410003 */  beq   $v0, $at, .L0041259C
/* 00412590 24010048 */   li    $at, 72
/* 00412594 1441F405 */  bne   $v0, $at, .L0040F5AC
/* 00412598 00000000 */   nop   
.L0041259C:
/* 0041259C 8F988A28 */  lw     $t8, %got(addr_dtype)($gp)
/* 004125A0 92620021 */  lbu   $v0, 0x21($s3)
/* 004125A4 93180000 */  lbu   $t8, ($t8)
/* 004125A8 00026EC0 */  sll   $t5, $v0, 0x1b
/* 004125AC 000DCEC2 */  srl   $t9, $t5, 0x1b
/* 004125B0 03196026 */  xor   $t4, $t8, $t9
/* 004125B4 318F001F */  andi  $t7, $t4, 0x1f
/* 004125B8 01E25026 */  xor   $t2, $t7, $v0
/* 004125BC 1000F3FB */  b     .L0040F5AC
/* 004125C0 A26A0021 */   sb    $t2, 0x21($s3)
.L004125C4:
/* 004125C4 97A41648 */  lhu   $a0, 0x1648($sp)
/* 004125C8 8F998018 */  lw    $t9, %got(func_0040E2AC)($gp)
/* 004125CC 27AB1004 */  addiu $t3, $sp, 0x1004
/* 004125D0 00047080 */  sll   $t6, $a0, 2
/* 004125D4 2487FFFF */  addiu $a3, $a0, -1
/* 004125D8 2739E2AC */  addiu $t9, %lo(func_0040E2AC) # addiu $t9, $t9, -0x1d54
/* 004125DC AFA700F4 */  sw    $a3, 0xf4($sp)
/* 004125E0 01CBB821 */  addu  $s7, $t6, $t3
/* 004125E4 0320F809 */  jalr  $t9
/* 004125E8 27A21650 */   addiu $v0, $sp, 0x1650
/* 004125EC 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004125F0 240D000A */  li    $t5, 10
/* 004125F4 AFAD01CC */  sw    $t5, 0x1cc($sp)
/* 004125F8 8F99865C */  lw    $t9, %call16(build_u1)($gp)
/* 004125FC 8EE50000 */  lw    $a1, ($s7)
/* 00412600 27A401C8 */  addiu $a0, $sp, 0x1c8
/* 00412604 0320F809 */  jalr  $t9
/* 00412608 00000000 */   nop   
/* 0041260C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00412610 8FA700F4 */  lw    $a3, 0xf4($sp)
/* 00412614 00402025 */  move  $a0, $v0
/* 00412618 8F998018 */  lw    $t9, %got(func_0040E238)($gp)
/* 0041261C 27A21650 */  addiu $v0, $sp, 0x1650
/* 00412620 A7A71648 */  sh    $a3, 0x1648($sp)
/* 00412624 2739E238 */  addiu $t9, %lo(func_0040E238) # addiu $t9, $t9, -0x1dc8
/* 00412628 0320F809 */  jalr  $t9
/* 0041262C 00000000 */   nop   
/* 00412630 1000F3DE */  b     .L0040F5AC
/* 00412634 8FBC00CC */   lw    $gp, 0xcc($sp)
.L00412638:
/* 00412638 97B81648 */  lhu   $t8, 0x1648($sp)
/* 0041263C 27AC1004 */  addiu $t4, $sp, 0x1004
/* 00412640 27A21650 */  addiu $v0, $sp, 0x1650
/* 00412644 0018C880 */  sll   $t9, $t8, 2
/* 00412648 032CB821 */  addu  $s7, $t9, $t4
/* 0041264C 8F998018 */  lw    $t9, %got(func_0040E2AC)($gp)
/* 00412650 26F6FFFC */  addiu $s6, $s7, -4
/* 00412654 2704FFFF */  addiu $a0, $t8, -1
/* 00412658 2739E2AC */  addiu $t9, %lo(func_0040E2AC) # addiu $t9, $t9, -0x1d54
/* 0041265C 0320F809 */  jalr  $t9
/* 00412660 00000000 */   nop   
/* 00412664 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00412668 97A41648 */  lhu   $a0, 0x1648($sp)
/* 0041266C 27A21650 */  addiu $v0, $sp, 0x1650
/* 00412670 8F998018 */  lw    $t9, %got(func_0040E2AC)($gp)
/* 00412674 2739E2AC */  addiu $t9, %lo(func_0040E2AC) # addiu $t9, $t9, -0x1d54
/* 00412678 0320F809 */  jalr  $t9
/* 0041267C 00000000 */   nop   
/* 00412680 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00412684 27A401C8 */  addiu $a0, $sp, 0x1c8
/* 00412688 8EC50000 */  lw    $a1, ($s6)
/* 0041268C 8F998660 */  lw    $t9, %call16(build_u2)($gp)
/* 00412690 8EE60000 */  lw    $a2, ($s7)
/* 00412694 0320F809 */  jalr  $t9
/* 00412698 00000000 */   nop   
/* 0041269C 97AA1648 */  lhu   $t2, 0x1648($sp)
/* 004126A0 3C01000C */  lui   $at, 0xc
/* 004126A4 34218000 */  ori   $at, $at, 0x8000
/* 004126A8 254EFFFE */  addiu $t6, $t2, -2
/* 004126AC A7AE1648 */  sh    $t6, 0x1648($sp)
/* 004126B0 904B0021 */  lbu   $t3, 0x21($v0)
/* 004126B4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004126B8 00409825 */  move  $s3, $v0
/* 004126BC 3169001F */  andi  $t1, $t3, 0x1f
/* 004126C0 2D2D0020 */  sltiu $t5, $t1, 0x20
/* 004126C4 000DC023 */  negu  $t8, $t5
/* 004126C8 0301C824 */  and   $t9, $t8, $at
/* 004126CC 01396004 */  sllv  $t4, $t9, $t1
/* 004126D0 05810009 */  bgez  $t4, .L004126F8
/* 004126D4 93AF01C8 */   lbu   $t7, 0x1c8($sp)
/* 004126D8 8F998018 */  lw    $t9, %got(func_0040E238)($gp)
/* 004126DC 00402025 */  move  $a0, $v0
/* 004126E0 27A21650 */  addiu $v0, $sp, 0x1650
/* 004126E4 2739E238 */  addiu $t9, %lo(func_0040E238) # addiu $t9, $t9, -0x1dc8
/* 004126E8 0320F809 */  jalr  $t9
/* 004126EC 00000000 */   nop   
/* 004126F0 1000F3AE */  b     .L0040F5AC
/* 004126F4 8FBC00CC */   lw    $gp, 0xcc($sp)
.L004126F8:
/* 004126F8 8F8A8868 */  lw     $t2, %got(trap_to_compare)($gp)
/* 004126FC 8F998668 */  lw    $t9, %call16(build_1op)($gp)
/* 00412700 2404000F */  li    $a0, 15
/* 00412704 254AFF80 */  addiu $t2, $t2, -0x80
/* 00412708 01EA7021 */  addu  $t6, $t7, $t2
/* 0041270C 91CB0000 */  lbu   $t3, ($t6)
/* 00412710 02602825 */  move  $a1, $s3
/* 00412714 0320F809 */  jalr  $t9
/* 00412718 A26B0020 */   sb    $t3, 0x20($s3)
/* 0041271C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00412720 8FAD01CC */  lw    $t5, 0x1cc($sp)
/* 00412724 00402025 */  move  $a0, $v0
/* 00412728 8F998018 */  lw    $t9, %got(func_0040E238)($gp)
/* 0041272C AC4D0024 */  sw    $t5, 0x24($v0)
/* 00412730 27A21650 */  addiu $v0, $sp, 0x1650
/* 00412734 2739E238 */  addiu $t9, %lo(func_0040E238) # addiu $t9, $t9, -0x1dc8
/* 00412738 0320F809 */  jalr  $t9
/* 0041273C 00000000 */   nop   
/* 00412740 1000F39A */  b     .L0040F5AC
/* 00412744 8FBC00CC */   lw    $gp, 0xcc($sp)
.L00412748:
/* 00412748 93B801D0 */  lbu   $t8, 0x1d0($sp)
/* 0041274C 8F898860 */  lw     $t1, %got(similar_data_types)($gp)
/* 00412750 93AA01C9 */  lbu   $t2, 0x1c9($sp)
/* 00412754 0018C880 */  sll   $t9, $t8, 2
/* 00412758 03296021 */  addu  $t4, $t9, $t1
/* 0041275C 8D8F0000 */  lw    $t7, ($t4)
/* 00412760 314E001F */  andi  $t6, $t2, 0x1f
/* 00412764 2DCB0020 */  sltiu $t3, $t6, 0x20
/* 00412768 000B6823 */  negu  $t5, $t3
/* 0041276C 01EDC824 */  and   $t9, $t7, $t5
/* 00412770 01D94804 */  sllv  $t1, $t9, $t6
/* 00412774 05210020 */  bgez  $t1, .L004127F8
/* 00412778 97AC01CA */   lhu   $t4, 0x1ca($sp)
/* 0041277C 318A0002 */  andi  $t2, $t4, 2
/* 00412780 1140000B */  beqz  $t2, .L004127B0
/* 00412784 2F0B0020 */   sltiu $t3, $t8, 0x20
/* 00412788 3C010600 */  lui   $at, 0x600
/* 0041278C 000B7823 */  negu  $t7, $t3
/* 00412790 01E1C824 */  and   $t9, $t7, $at
/* 00412794 01A15024 */  and   $t2, $t5, $at
/* 00412798 01CA5804 */  sllv  $t3, $t2, $t6
/* 0041279C 03194804 */  sllv  $t1, $t9, $t8
/* 004127A0 292C0000 */  slti  $t4, $t1, 0
/* 004127A4 296F0000 */  slti  $t7, $t3, 0
/* 004127A8 558F0014 */  bnel  $t4, $t7, .L004127FC
/* 004127AC 97A41648 */   lhu   $a0, 0x1648($sp)
.L004127B0:
/* 004127B0 8F9989D8 */  lw     $t9, %got(opcode_arch)($gp)
/* 004127B4 24010001 */  li    $at, 1
/* 004127B8 93B801D0 */  lbu   $t8, 0x1d0($sp)
/* 004127BC 93390000 */  lbu   $t9, ($t9)
/* 004127C0 93AB01C9 */  lbu   $t3, 0x1c9($sp)
/* 004127C4 1721F379 */  bne   $t9, $at, .L0040F5AC
/* 004127C8 00000000 */   nop   
/* 004127CC 8F8D8864 */  lw     $t5, %got(similar_data_types_dw)($gp)
/* 004127D0 00184880 */  sll   $t1, $t8, 2
/* 004127D4 316C001F */  andi  $t4, $t3, 0x1f
/* 004127D8 012D5021 */  addu  $t2, $t1, $t5
/* 004127DC 8D4E0000 */  lw    $t6, ($t2)
/* 004127E0 2D8F0020 */  sltiu $t7, $t4, 0x20
/* 004127E4 000FC823 */  negu  $t9, $t7
/* 004127E8 01D9C024 */  and   $t8, $t6, $t9
/* 004127EC 01984804 */  sllv  $t1, $t8, $t4
/* 004127F0 0520F36E */  bltz  $t1, .L0040F5AC
/* 004127F4 00000000 */   nop   
.L004127F8:
/* 004127F8 97A41648 */  lhu   $a0, 0x1648($sp)
.L004127FC:
/* 004127FC 8F998018 */  lw    $t9, %got(func_0040E2AC)($gp)
/* 00412800 27AB1004 */  addiu $t3, $sp, 0x1004
/* 00412804 00045080 */  sll   $t2, $a0, 2
/* 00412808 2739E2AC */  addiu $t9, %lo(func_0040E2AC) # addiu $t9, $t9, -0x1d54
/* 0041280C 014BB821 */  addu  $s7, $t2, $t3
/* 00412810 0320F809 */  jalr  $t9
/* 00412814 27A21650 */   addiu $v0, $sp, 0x1650
/* 00412818 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0041281C 27A401C8 */  addiu $a0, $sp, 0x1c8
/* 00412820 8EE50000 */  lw    $a1, ($s7)
/* 00412824 8F99865C */  lw    $t9, %call16(build_u1)($gp)
/* 00412828 0320F809 */  jalr  $t9
/* 0041282C 00000000 */   nop   
/* 00412830 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00412834 1000F35D */  b     .L0040F5AC
/* 00412838 AEE20000 */   sw    $v0, ($s7)
.L0041283C:
/* 0041283C 97A41648 */  lhu   $a0, 0x1648($sp)
/* 00412840 27B91004 */  addiu $t9, $sp, 0x1004
/* 00412844 27A21650 */  addiu $v0, $sp, 0x1650
/* 00412848 00047080 */  sll   $t6, $a0, 2
/* 0041284C 01D9B821 */  addu  $s7, $t6, $t9
/* 00412850 8F998018 */  lw    $t9, %got(func_0040E2AC)($gp)
/* 00412854 2739E2AC */  addiu $t9, %lo(func_0040E2AC) # addiu $t9, $t9, -0x1d54
/* 00412858 0320F809 */  jalr  $t9
/* 0041285C 00000000 */   nop   
/* 00412860 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00412864 27A401C8 */  addiu $a0, $sp, 0x1c8
/* 00412868 8EE50000 */  lw    $a1, ($s7)
/* 0041286C 8F99865C */  lw    $t9, %call16(build_u1)($gp)
/* 00412870 0320F809 */  jalr  $t9
/* 00412874 00000000 */   nop   
/* 00412878 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0041287C 1000F34B */  b     .L0040F5AC
/* 00412880 AEE20000 */   sw    $v0, ($s7)
.L00412884:
/* 00412884 97B81648 */  lhu   $t8, 0x1648($sp)
/* 00412888 97AD01CA */  lhu   $t5, 0x1ca($sp)
/* 0041288C 27AC1004 */  addiu $t4, $sp, 0x1004
/* 00412890 27A909C4 */  addiu $t1, $sp, 0x9c4
/* 00412894 00189080 */  sll   $s2, $t8, 2
/* 00412898 31AA0002 */  andi  $t2, $t5, 2
/* 0041289C 024CB821 */  addu  $s7, $s2, $t4
/* 004128A0 1140000C */  beqz  $t2, .L004128D4
/* 004128A4 0249A021 */   addu  $s4, $s2, $t1
/* 004128A8 8E8B0000 */  lw    $t3, ($s4)
/* 004128AC 3C018000 */  lui   $at, 0x8000
/* 004128B0 55610009 */  bnel  $t3, $at, .L004128D8
/* 004128B4 8E8F0000 */   lw    $t7, ($s4)
/* 004128B8 8F998018 */  lw    $t9, %got(func_0040E2AC)($gp)
/* 004128BC 03002025 */  move  $a0, $t8
/* 004128C0 27A21650 */  addiu $v0, $sp, 0x1650
/* 004128C4 2739E2AC */  addiu $t9, %lo(func_0040E2AC) # addiu $t9, $t9, -0x1d54
/* 004128C8 0320F809 */  jalr  $t9
/* 004128CC 00000000 */   nop   
/* 004128D0 8FBC00CC */  lw    $gp, 0xcc($sp)
.L004128D4:
/* 004128D4 8E8F0000 */  lw    $t7, ($s4)
.L004128D8:
/* 004128D8 8EF00000 */  lw    $s0, ($s7)
/* 004128DC 000F7023 */  negu  $t6, $t7
/* 004128E0 1200F332 */  beqz  $s0, .L0040F5AC
/* 004128E4 AE8E0000 */   sw    $t6, ($s4)
/* 004128E8 8F99865C */  lw    $t9, %call16(build_u1)($gp)
/* 004128EC 27A401C8 */  addiu $a0, $sp, 0x1c8
/* 004128F0 02002825 */  move  $a1, $s0
/* 004128F4 0320F809 */  jalr  $t9
/* 004128F8 00000000 */   nop   
/* 004128FC 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00412900 1000F32A */  b     .L0040F5AC
/* 00412904 AEE20000 */   sw    $v0, ($s7)
.L00412908:
/* 00412908 97B21648 */  lhu   $s2, 0x1648($sp)
/* 0041290C 97AD01CA */  lhu   $t5, 0x1ca($sp)
/* 00412910 27B909C4 */  addiu $t9, $sp, 0x9c4
/* 00412914 00129080 */  sll   $s2, $s2, 2
/* 00412918 0259A021 */  addu  $s4, $s2, $t9
/* 0041291C 8E850000 */  lw    $a1, ($s4)
/* 00412920 8FAC01CC */  lw    $t4, 0x1cc($sp)
/* 00412924 27A90384 */  addiu $t1, $sp, 0x384
/* 00412928 31AA0002 */  andi  $t2, $t5, 2
/* 0041292C 0249A821 */  addu  $s5, $s2, $t1
/* 00412930 11400010 */  beqz  $t2, .L00412974
/* 00412934 00ACF021 */   addu  $fp, $a1, $t4
/* 00412938 8F9983EC */  lw    $t9, %call16(add_overflow)($gp)
/* 0041293C 93A401C9 */  lbu   $a0, 0x1c9($sp)
/* 00412940 01803025 */  move  $a2, $t4
/* 00412944 0320F809 */  jalr  $t9
/* 00412948 3084001F */   andi  $a0, $a0, 0x1f
/* 0041294C 10400009 */  beqz  $v0, .L00412974
/* 00412950 8FBC00CC */   lw    $gp, 0xcc($sp)
/* 00412954 8F998018 */  lw    $t9, %got(func_0040E2AC)($gp)
/* 00412958 97A41648 */  lhu   $a0, 0x1648($sp)
/* 0041295C 27A21650 */  addiu $v0, $sp, 0x1650
/* 00412960 2739E2AC */  addiu $t9, %lo(func_0040E2AC) # addiu $t9, $t9, -0x1d54
/* 00412964 0320F809 */  jalr  $t9
/* 00412968 00000000 */   nop   
/* 0041296C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00412970 8FBE01CC */  lw    $fp, 0x1cc($sp)
.L00412974:
/* 00412974 AE9E0000 */  sw    $fp, ($s4)
/* 00412978 97B801CA */  lhu   $t8, 0x1ca($sp)
/* 0041297C 8EAB0000 */  lw    $t3, ($s5)
/* 00412980 01787825 */  or    $t7, $t3, $t8
/* 00412984 1000F309 */  b     .L0040F5AC
/* 00412988 AEAF0000 */   sw    $t7, ($s5)
.L0041298C:
/* 0041298C 97B21648 */  lhu   $s2, 0x1648($sp)
/* 00412990 97AD01CA */  lhu   $t5, 0x1ca($sp)
/* 00412994 27AE09C4 */  addiu $t6, $sp, 0x9c4
/* 00412998 00129080 */  sll   $s2, $s2, 2
/* 0041299C 024EA021 */  addu  $s4, $s2, $t6
/* 004129A0 8E850000 */  lw    $a1, ($s4)
/* 004129A4 8FB901CC */  lw    $t9, 0x1cc($sp)
/* 004129A8 27A90384 */  addiu $t1, $sp, 0x384
/* 004129AC 31AA0002 */  andi  $t2, $t5, 2
/* 004129B0 0249A821 */  addu  $s5, $s2, $t1
/* 004129B4 11400011 */  beqz  $t2, .L004129FC
/* 004129B8 00B9F023 */   subu  $fp, $a1, $t9
/* 004129BC 03203025 */  move  $a2, $t9
/* 004129C0 8F9983F0 */  lw    $t9, %call16(sub_overflow)($gp)
/* 004129C4 93A401C9 */  lbu   $a0, 0x1c9($sp)
/* 004129C8 0320F809 */  jalr  $t9
/* 004129CC 3084001F */   andi  $a0, $a0, 0x1f
/* 004129D0 1040000A */  beqz  $v0, .L004129FC
/* 004129D4 8FBC00CC */   lw    $gp, 0xcc($sp)
/* 004129D8 8F998018 */  lw    $t9, %got(func_0040E2AC)($gp)
/* 004129DC 97A41648 */  lhu   $a0, 0x1648($sp)
/* 004129E0 27A21650 */  addiu $v0, $sp, 0x1650
/* 004129E4 2739E2AC */  addiu $t9, %lo(func_0040E2AC) # addiu $t9, $t9, -0x1d54
/* 004129E8 0320F809 */  jalr  $t9
/* 004129EC 00000000 */   nop   
/* 004129F0 8FBE01CC */  lw    $fp, 0x1cc($sp)
/* 004129F4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004129F8 001EF023 */  negu  $fp, $fp
.L004129FC:
/* 004129FC AE9E0000 */  sw    $fp, ($s4)
/* 00412A00 97AB01CA */  lhu   $t3, 0x1ca($sp)
/* 00412A04 8EAC0000 */  lw    $t4, ($s5)
/* 00412A08 018BC025 */  or    $t8, $t4, $t3
/* 00412A0C 1000F2E7 */  b     .L0040F5AC
/* 00412A10 AEB80000 */   sw    $t8, ($s5)
.L00412A14:
/* 00412A14 8F8A8A50 */  lw     $t2, %got(nooffsetopt)($gp)
/* 00412A18 97AF1648 */  lhu   $t7, 0x1648($sp)
/* 00412A1C 27AE1004 */  addiu $t6, $sp, 0x1004
/* 00412A20 914A0000 */  lbu   $t2, ($t2)
/* 00412A24 000F9080 */  sll   $s2, $t7, 2
/* 00412A28 27A909C4 */  addiu $t1, $sp, 0x9c4
/* 00412A2C 27AD0384 */  addiu $t5, $sp, 0x384
/* 00412A30 AFA001D8 */  sw    $zero, 0x1d8($sp)
/* 00412A34 024DA821 */  addu  $s5, $s2, $t5
/* 00412A38 0249A021 */  addu  $s4, $s2, $t1
/* 00412A3C 11400008 */  beqz  $t2, .L00412A60
/* 00412A40 024EB821 */   addu  $s7, $s2, $t6
/* 00412A44 8F998018 */  lw    $t9, %got(func_0040E2AC)($gp)
/* 00412A48 01E02025 */  move  $a0, $t7
/* 00412A4C 27A21650 */  addiu $v0, $sp, 0x1650
/* 00412A50 2739E2AC */  addiu $t9, %lo(func_0040E2AC) # addiu $t9, $t9, -0x1d54
/* 00412A54 0320F809 */  jalr  $t9
/* 00412A58 00000000 */   nop   
/* 00412A5C 8FBC00CC */  lw    $gp, 0xcc($sp)
.L00412A60:
/* 00412A60 8EF00000 */  lw    $s0, ($s7)
/* 00412A64 AEA00000 */  sw    $zero, ($s5)
/* 00412A68 24018000 */  li    $at, -32768
/* 00412A6C 2E020001 */  sltiu $v0, $s0, 1
/* 00412A70 10400020 */  beqz  $v0, .L00412AF4
/* 00412A74 8FA801D4 */   lw    $t0, 0x1d4($sp)
/* 00412A78 8F8289DC */  lw     $v0, %got(basicint)($gp)
/* 00412A7C 8FA801D4 */  lw    $t0, 0x1d4($sp)
/* 00412A80 8E990000 */  lw    $t9, ($s4)
/* 00412A84 90420000 */  lbu   $v0, ($v0)
/* 00412A88 AE800000 */  sw    $zero, ($s4)
/* 00412A8C 0328F021 */  addu  $fp, $t9, $t0
/* 00412A90 33C8FFFF */  andi  $t0, $fp, 0xffff
/* 00412A94 38420001 */  xori  $v0, $v0, 1
/* 00412A98 39088000 */  xori  $t0, $t0, 0x8000
/* 00412A9C 2C420001 */  sltiu $v0, $v0, 1
/* 00412AA0 1040000A */  beqz  $v0, .L00412ACC
/* 00412AA4 01014021 */   addu  $t0, $t0, $at
/* 00412AA8 8F998688 */  lw    $t9, %call16(dwvalue)($gp)
/* 00412AAC 03C83823 */  subu  $a3, $fp, $t0
/* 00412AB0 000737C3 */  sra   $a2, $a3, 0x1f
/* 00412AB4 2404000F */  li    $a0, 15
/* 00412AB8 0320F809 */  jalr  $t9
/* 00412ABC AFA801D4 */   sw    $t0, 0x1d4($sp)
/* 00412AC0 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00412AC4 10000009 */  b     .L00412AEC
/* 00412AC8 AEE20000 */   sw    $v0, ($s7)
.L00412ACC:
/* 00412ACC 8F998684 */  lw    $t9, %call16(ivalue)($gp)
/* 00412AD0 00002025 */  move  $a0, $zero
/* 00412AD4 00002825 */  move  $a1, $zero
/* 00412AD8 03C83023 */  subu  $a2, $fp, $t0
/* 00412ADC 0320F809 */  jalr  $t9
/* 00412AE0 AFA801D4 */   sw    $t0, 0x1d4($sp)
/* 00412AE4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00412AE8 AEE20000 */  sw    $v0, ($s7)
.L00412AEC:
/* 00412AEC 10000005 */  b     .L00412B04
/* 00412AF0 8EF00000 */   lw    $s0, ($s7)
.L00412AF4:
/* 00412AF4 8E8B0000 */  lw    $t3, ($s4)
/* 00412AF8 AE800000 */  sw    $zero, ($s4)
/* 00412AFC 010B4021 */  addu  $t0, $t0, $t3
/* 00412B00 AFA801D4 */  sw    $t0, 0x1d4($sp)
.L00412B04:
/* 00412B04 8F99865C */  lw    $t9, %call16(build_u1)($gp)
/* 00412B08 27A401C8 */  addiu $a0, $sp, 0x1c8
/* 00412B0C 02002825 */  move  $a1, $s0
/* 00412B10 0320F809 */  jalr  $t9
/* 00412B14 00000000 */   nop   
/* 00412B18 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00412B1C 1000F2A3 */  b     .L0040F5AC
/* 00412B20 AEE20000 */   sw    $v0, ($s7)
.L00412B24:
/* 00412B24 8F8A8A50 */  lw     $t2, %got(nooffsetopt)($gp)
/* 00412B28 97B81648 */  lhu   $t8, 0x1648($sp)
/* 00412B2C 8FA801D4 */  lw    $t0, 0x1d4($sp)
/* 00412B30 914A0000 */  lbu   $t2, ($t2)
/* 00412B34 00189080 */  sll   $s2, $t8, 2
/* 00412B38 27AE1004 */  addiu $t6, $sp, 0x1004
/* 00412B3C 27A909C4 */  addiu $t1, $sp, 0x9c4
/* 00412B40 27AD0384 */  addiu $t5, $sp, 0x384
/* 00412B44 024DA821 */  addu  $s5, $s2, $t5
/* 00412B48 0249A021 */  addu  $s4, $s2, $t1
/* 00412B4C 024EB821 */  addu  $s7, $s2, $t6
/* 00412B50 11400008 */  beqz  $t2, .L00412B74
/* 00412B54 AFA801D8 */   sw    $t0, 0x1d8($sp)
/* 00412B58 8F998018 */  lw    $t9, %got(func_0040E2AC)($gp)
/* 00412B5C 03002025 */  move  $a0, $t8
/* 00412B60 27A21650 */  addiu $v0, $sp, 0x1650
/* 00412B64 2739E2AC */  addiu $t9, %lo(func_0040E2AC) # addiu $t9, $t9, -0x1d54
/* 00412B68 0320F809 */  jalr  $t9
/* 00412B6C 00000000 */   nop   
/* 00412B70 8FBC00CC */  lw    $gp, 0xcc($sp)
.L00412B74:
/* 00412B74 8EF00000 */  lw    $s0, ($s7)
/* 00412B78 AEA00000 */  sw    $zero, ($s5)
/* 00412B7C 8FB901CC */  lw    $t9, 0x1cc($sp)
/* 00412B80 2E020001 */  sltiu $v0, $s0, 1
/* 00412B84 10400020 */  beqz  $v0, .L00412C08
/* 00412B88 8FAB01CC */   lw    $t3, 0x1cc($sp)
/* 00412B8C 8F8289DC */  lw     $v0, %got(basicint)($gp)
/* 00412B90 8E8F0000 */  lw    $t7, ($s4)
/* 00412B94 24018000 */  li    $at, -32768
/* 00412B98 90420000 */  lbu   $v0, ($v0)
/* 00412B9C 01F9F021 */  addu  $fp, $t7, $t9
/* 00412BA0 33C8FFFF */  andi  $t0, $fp, 0xffff
/* 00412BA4 38420001 */  xori  $v0, $v0, 1
/* 00412BA8 39088000 */  xori  $t0, $t0, 0x8000
/* 00412BAC 2C420001 */  sltiu $v0, $v0, 1
/* 00412BB0 01014021 */  addu  $t0, $t0, $at
/* 00412BB4 1040000A */  beqz  $v0, .L00412BE0
/* 00412BB8 AE800000 */   sw    $zero, ($s4)
/* 00412BBC 8F998688 */  lw    $t9, %call16(dwvalue)($gp)
/* 00412BC0 03C83823 */  subu  $a3, $fp, $t0
/* 00412BC4 000737C3 */  sra   $a2, $a3, 0x1f
/* 00412BC8 2404000F */  li    $a0, 15
/* 00412BCC 0320F809 */  jalr  $t9
/* 00412BD0 AFA801D4 */   sw    $t0, 0x1d4($sp)
/* 00412BD4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00412BD8 10000009 */  b     .L00412C00
/* 00412BDC AEE20000 */   sw    $v0, ($s7)
.L00412BE0:
/* 00412BE0 8F998684 */  lw    $t9, %call16(ivalue)($gp)
/* 00412BE4 00002025 */  move  $a0, $zero
/* 00412BE8 00002825 */  move  $a1, $zero
/* 00412BEC 03C83023 */  subu  $a2, $fp, $t0
/* 00412BF0 0320F809 */  jalr  $t9
/* 00412BF4 AFA801D4 */   sw    $t0, 0x1d4($sp)
/* 00412BF8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00412BFC AEE20000 */  sw    $v0, ($s7)
.L00412C00:
/* 00412C00 10000005 */  b     .L00412C18
/* 00412C04 8EF00000 */   lw    $s0, ($s7)
.L00412C08:
/* 00412C08 8E8E0000 */  lw    $t6, ($s4)
/* 00412C0C AE800000 */  sw    $zero, ($s4)
/* 00412C10 016E4021 */  addu  $t0, $t3, $t6
/* 00412C14 AFA801D4 */  sw    $t0, 0x1d4($sp)
.L00412C18:
/* 00412C18 8F99865C */  lw    $t9, %call16(build_u1)($gp)
/* 00412C1C 27A401C8 */  addiu $a0, $sp, 0x1c8
/* 00412C20 02002825 */  move  $a1, $s0
/* 00412C24 0320F809 */  jalr  $t9
/* 00412C28 00000000 */   nop   
/* 00412C2C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00412C30 1000F25E */  b     .L0040F5AC
/* 00412C34 AEE20000 */   sw    $v0, ($s7)
.L00412C38:
/* 00412C38 97A41648 */  lhu   $a0, 0x1648($sp)
/* 00412C3C 8F998018 */  lw    $t9, %got(func_0040E2AC)($gp)
/* 00412C40 27A91004 */  addiu $t1, $sp, 0x1004
/* 00412C44 00049080 */  sll   $s2, $a0, 2
/* 00412C48 27AD09C4 */  addiu $t5, $sp, 0x9c4
/* 00412C4C 27AA0384 */  addiu $t2, $sp, 0x384
/* 00412C50 2739E2AC */  addiu $t9, %lo(func_0040E2AC) # addiu $t9, $t9, -0x1d54
/* 00412C54 024AA821 */  addu  $s5, $s2, $t2
/* 00412C58 024DA021 */  addu  $s4, $s2, $t5
/* 00412C5C 0249B821 */  addu  $s7, $s2, $t1
/* 00412C60 0320F809 */  jalr  $t9
/* 00412C64 27A21650 */   addiu $v0, $sp, 0x1650
/* 00412C68 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00412C6C 27A401C8 */  addiu $a0, $sp, 0x1c8
/* 00412C70 8EE50000 */  lw    $a1, ($s7)
/* 00412C74 8F99865C */  lw    $t9, %call16(build_u1)($gp)
/* 00412C78 0320F809 */  jalr  $t9
/* 00412C7C 00000000 */   nop   
/* 00412C80 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00412C84 AEE20000 */  sw    $v0, ($s7)
/* 00412C88 AE800000 */  sw    $zero, ($s4)
/* 00412C8C 1000F247 */  b     .L0040F5AC
/* 00412C90 AEA00000 */   sw    $zero, ($s5)
.L00412C94:
/* 00412C94 97B81648 */  lhu   $t8, 0x1648($sp)
/* 00412C98 27AE1004 */  addiu $t6, $sp, 0x1004
/* 00412C9C 27A909C4 */  addiu $t1, $sp, 0x9c4
/* 00412CA0 270F0001 */  addiu $t7, $t8, 1
/* 00412CA4 31F9FFFF */  andi  $t9, $t7, 0xffff
/* 00412CA8 00196080 */  sll   $t4, $t9, 2
/* 00412CAC 258BFFFC */  addiu $t3, $t4, -4
/* 00412CB0 A7AF1648 */  sh    $t7, 0x1648($sp)
/* 00412CB4 016EB021 */  addu  $s6, $t3, $t6
/* 00412CB8 8ECA0000 */  lw    $t2, ($s6)
/* 00412CBC 31F2FFFF */  andi  $s2, $t7, 0xffff
/* 00412CC0 00129080 */  sll   $s2, $s2, 2
/* 00412CC4 27AD0384 */  addiu $t5, $sp, 0x384
/* 00412CC8 024DA821 */  addu  $s5, $s2, $t5
/* 00412CCC 024EB821 */  addu  $s7, $s2, $t6
/* 00412CD0 15400009 */  bnez  $t2, .L00412CF8
/* 00412CD4 0249A021 */   addu  $s4, $s2, $t1
/* 00412CD8 AEE00000 */  sw    $zero, ($s7)
/* 00412CDC 97B81648 */  lhu   $t8, 0x1648($sp)
/* 00412CE0 27AC09C4 */  addiu $t4, $sp, 0x9c4
/* 00412CE4 0018C880 */  sll   $t9, $t8, 2
/* 00412CE8 032C5821 */  addu  $t3, $t9, $t4
/* 00412CEC 8D6FFFFC */  lw    $t7, -4($t3)
/* 00412CF0 1000000F */  b     .L00412D30
/* 00412CF4 AE8F0000 */   sw    $t7, ($s4)
.L00412CF8:
/* 00412CF8 8F998018 */  lw    $t9, %got(func_0040E2AC)($gp)
/* 00412CFC 97A41648 */  lhu   $a0, 0x1648($sp)
/* 00412D00 27A21650 */  addiu $v0, $sp, 0x1650
/* 00412D04 2739E2AC */  addiu $t9, %lo(func_0040E2AC) # addiu $t9, $t9, -0x1d54
/* 00412D08 0320F809 */  jalr  $t9
/* 00412D0C 2484FFFF */   addiu $a0, $a0, -1
/* 00412D10 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00412D14 8EC40000 */  lw    $a0, ($s6)
/* 00412D18 8F99867C */  lw    $t9, %call16(dup_tree)($gp)
/* 00412D1C 0320F809 */  jalr  $t9
/* 00412D20 00000000 */   nop   
/* 00412D24 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00412D28 AEE20000 */  sw    $v0, ($s7)
/* 00412D2C AE800000 */  sw    $zero, ($s4)
.L00412D30:
/* 00412D30 1000F21E */  b     .L0040F5AC
/* 00412D34 AEA00000 */   sw    $zero, ($s5)
.L00412D38:
/* 00412D38 97AE1648 */  lhu   $t6, 0x1648($sp)
/* 00412D3C 97AA01CA */  lhu   $t2, 0x1ca($sp)
/* 00412D40 27A91004 */  addiu $t1, $sp, 0x1004
/* 00412D44 27AD09C4 */  addiu $t5, $sp, 0x9c4
/* 00412D48 000E9080 */  sll   $s2, $t6, 2
/* 00412D4C 31580002 */  andi  $t8, $t2, 2
/* 00412D50 0000F025 */  move  $fp, $zero
/* 00412D54 AFA0018C */  sw    $zero, 0x18c($sp)
/* 00412D58 0249B821 */  addu  $s7, $s2, $t1
/* 00412D5C 024DA021 */  addu  $s4, $s2, $t5
/* 00412D60 1300002E */  beqz  $t8, .L00412E1C
/* 00412D64 25C7FFFF */   addiu $a3, $t6, -1
/* 00412D68 000EC880 */  sll   $t9, $t6, 2
/* 00412D6C 03296021 */  addu  $t4, $t9, $t1
/* 00412D70 8D82FFFC */  lw    $v0, -4($t4)
/* 00412D74 93AD01C9 */  lbu   $t5, 0x1c9($sp)
/* 00412D78 50400007 */  beql  $v0, $zero, .L00412D98
/* 00412D7C 8EF00000 */   lw    $s0, ($s7)
/* 00412D80 904B0021 */  lbu   $t3, 0x21($v0)
/* 00412D84 31AA001F */  andi  $t2, $t5, 0x1f
/* 00412D88 316F001F */  andi  $t7, $t3, 0x1f
/* 00412D8C 15EA0014 */  bne   $t7, $t2, .L00412DE0
/* 00412D90 00000000 */   nop   
/* 00412D94 8EF00000 */  lw    $s0, ($s7)
.L00412D98:
/* 00412D98 97AC1648 */  lhu   $t4, 0x1648($sp)
/* 00412D9C 93B901C9 */  lbu   $t9, 0x1c9($sp)
/* 00412DA0 12000005 */  beqz  $s0, .L00412DB8
/* 00412DA4 000C5880 */   sll   $t3, $t4, 2
/* 00412DA8 92180021 */  lbu   $t8, 0x21($s0)
/* 00412DAC 3329001F */  andi  $t1, $t9, 0x1f
/* 00412DB0 330E001F */  andi  $t6, $t8, 0x1f
/* 00412DB4 15C9000A */  bne   $t6, $t1, .L00412DE0
.L00412DB8:
/* 00412DB8 27AD0384 */   addiu $t5, $sp, 0x384
/* 00412DBC 016D7821 */  addu  $t7, $t3, $t5
/* 00412DC0 8DEAFFFC */  lw    $t2, -4($t7)
/* 00412DC4 97B801CA */  lhu   $t8, 0x1ca($sp)
/* 00412DC8 024DC821 */  addu  $t9, $s2, $t5
/* 00412DCC 15580004 */  bne   $t2, $t8, .L00412DE0
/* 00412DD0 00000000 */   nop   
/* 00412DD4 8F2E0000 */  lw    $t6, ($t9)
/* 00412DD8 11D80010 */  beq   $t6, $t8, .L00412E1C
/* 00412DDC 00000000 */   nop   
.L00412DE0:
/* 00412DE0 8F998018 */  lw    $t9, %got(func_0040E2AC)($gp)
/* 00412DE4 00E02025 */  move  $a0, $a3
/* 00412DE8 27A21650 */  addiu $v0, $sp, 0x1650
/* 00412DEC 2739E2AC */  addiu $t9, %lo(func_0040E2AC) # addiu $t9, $t9, -0x1d54
/* 00412DF0 0320F809 */  jalr  $t9
/* 00412DF4 AFA700F4 */   sw    $a3, 0xf4($sp)
/* 00412DF8 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00412DFC 97A41648 */  lhu   $a0, 0x1648($sp)
/* 00412E00 27A21650 */  addiu $v0, $sp, 0x1650
/* 00412E04 8F998018 */  lw    $t9, %got(func_0040E2AC)($gp)
/* 00412E08 2739E2AC */  addiu $t9, %lo(func_0040E2AC) # addiu $t9, $t9, -0x1d54
/* 00412E0C 0320F809 */  jalr  $t9
/* 00412E10 00000000 */   nop   
/* 00412E14 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00412E18 8FA700F4 */  lw    $a3, 0xf4($sp)
.L00412E1C:
/* 00412E1C 100001DB */  b     .L0041358C
/* 00412E20 93A201C8 */   lbu   $v0, 0x1c8($sp)
.L00412E24:
/* 00412E24 97AB01CA */  lhu   $t3, 0x1ca($sp)
/* 00412E28 00079880 */  sll   $s3, $a3, 2
/* 00412E2C 27AC0384 */  addiu $t4, $sp, 0x384
/* 00412E30 316F0002 */  andi  $t7, $t3, 2
/* 00412E34 026C1821 */  addu  $v1, $s3, $t4
/* 00412E38 11E00021 */  beqz  $t7, .L00412EC0
/* 00412E3C 02698821 */   addu  $s1, $s3, $t1
/* 00412E40 97AA1648 */  lhu   $t2, 0x1648($sp)
/* 00412E44 93A401C9 */  lbu   $a0, 0x1c9($sp)
/* 00412E48 8E860000 */  lw    $a2, ($s4)
/* 00412E4C 000A6880 */  sll   $t5, $t2, 2
/* 00412E50 01A9C821 */  addu  $t9, $t5, $t1
/* 00412E54 8F25FFFC */  lw    $a1, -4($t9)
/* 00412E58 8F9983EC */  lw    $t9, %call16(add_overflow)($gp)
/* 00412E5C AFA700F4 */  sw    $a3, 0xf4($sp)
/* 00412E60 AFA300DC */  sw    $v1, 0xdc($sp)
/* 00412E64 0320F809 */  jalr  $t9
/* 00412E68 3084001F */   andi  $a0, $a0, 0x1f
/* 00412E6C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00412E70 8FA300DC */  lw    $v1, 0xdc($sp)
/* 00412E74 10400012 */  beqz  $v0, .L00412EC0
/* 00412E78 8FA700F4 */   lw    $a3, 0xf4($sp)
/* 00412E7C 8C6E0000 */  lw    $t6, ($v1)
/* 00412E80 8E3E0000 */  lw    $fp, ($s1)
/* 00412E84 8F998018 */  lw    $t9, %got(func_0040E2AC)($gp)
/* 00412E88 AFAE018C */  sw    $t6, 0x18c($sp)
/* 00412E8C AE200000 */  sw    $zero, ($s1)
/* 00412E90 AC600000 */  sw    $zero, ($v1)
/* 00412E94 2739E2AC */  addiu $t9, %lo(func_0040E2AC) # addiu $t9, $t9, -0x1d54
/* 00412E98 AFA700F4 */  sw    $a3, 0xf4($sp)
/* 00412E9C AFA300DC */  sw    $v1, 0xdc($sp)
/* 00412EA0 97A41648 */  lhu   $a0, 0x1648($sp)
/* 00412EA4 0320F809 */  jalr  $t9
/* 00412EA8 27A21650 */   addiu $v0, $sp, 0x1650
/* 00412EAC 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00412EB0 8FA300DC */  lw    $v1, 0xdc($sp)
/* 00412EB4 8FA700F4 */  lw    $a3, 0xf4($sp)
/* 00412EB8 1000000F */  b     .L00412EF8
/* 00412EBC 8EF00000 */   lw    $s0, ($s7)
.L00412EC0:
/* 00412EC0 8E380000 */  lw    $t8, ($s1)
/* 00412EC4 8E8C0000 */  lw    $t4, ($s4)
/* 00412EC8 AE200000 */  sw    $zero, ($s1)
/* 00412ECC 27AF0384 */  addiu $t7, $sp, 0x384
/* 00412ED0 AE800000 */  sw    $zero, ($s4)
/* 00412ED4 024F5021 */  addu  $t2, $s2, $t7
/* 00412ED8 8D4D0000 */  lw    $t5, ($t2)
/* 00412EDC 8C6B0000 */  lw    $t3, ($v1)
/* 00412EE0 97B901CA */  lhu   $t9, 0x1ca($sp)
/* 00412EE4 030CF021 */  addu  $fp, $t8, $t4
/* 00412EE8 016D4825 */  or    $t1, $t3, $t5
/* 00412EEC 01397025 */  or    $t6, $t1, $t9
/* 00412EF0 AFAE018C */  sw    $t6, 0x18c($sp)
/* 00412EF4 8EF00000 */  lw    $s0, ($s7)
.L00412EF8:
/* 00412EF8 16000008 */  bnez  $s0, .L00412F1C
/* 00412EFC 97AA1648 */   lhu   $t2, 0x1648($sp)
/* 00412F00 AE3E0000 */  sw    $fp, ($s1)
/* 00412F04 97AC01CA */  lhu   $t4, 0x1ca($sp)
/* 00412F08 8C780000 */  lw    $t8, ($v1)
/* 00412F0C 030C7825 */  or    $t7, $t8, $t4
/* 00412F10 AC6F0000 */  sw    $t7, ($v1)
/* 00412F14 1000F1A5 */  b     .L0040F5AC
/* 00412F18 A7A71648 */   sh    $a3, 0x1648($sp)
.L00412F1C:
/* 00412F1C 000A5880 */  sll   $t3, $t2, 2
/* 00412F20 256DFFFC */  addiu $t5, $t3, -4
/* 00412F24 27A91004 */  addiu $t1, $sp, 0x1004
/* 00412F28 01A9B021 */  addu  $s6, $t5, $t1
/* 00412F2C 8ECE0000 */  lw    $t6, ($s6)
/* 00412F30 27B90384 */  addiu $t9, $sp, 0x384
/* 00412F34 0259A821 */  addu  $s5, $s2, $t9
/* 00412F38 15C001CF */  bnez  $t6, .L00413678
/* 00412F3C 0269C021 */   addu  $t8, $s3, $t1
/* 00412F40 AF100000 */  sw    $s0, ($t8)
/* 00412F44 AE3E0000 */  sw    $fp, ($s1)
/* 00412F48 97AF01CA */  lhu   $t7, 0x1ca($sp)
/* 00412F4C 8EAC0000 */  lw    $t4, ($s5)
/* 00412F50 2673FFFC */  addiu $s3, $s3, -4
/* 00412F54 018F5025 */  or    $t2, $t4, $t7
/* 00412F58 AC6A0000 */  sw    $t2, ($v1)
/* 00412F5C 1000F193 */  b     .L0040F5AC
/* 00412F60 A7A71648 */   sh    $a3, 0x1648($sp)
/* 00412F64 93B901C8 */  lbu   $t9, 0x1c8($sp)
.L00412F68:
/* 00412F68 00079880 */  sll   $s3, $a3, 2
/* 00412F6C 27AB09C4 */  addiu $t3, $sp, 0x9c4
/* 00412F70 27AD0384 */  addiu $t5, $sp, 0x384
/* 00412F74 24010009 */  li    $at, 9
/* 00412F78 026D1821 */  addu  $v1, $s3, $t5
/* 00412F7C 17210003 */  bne   $t9, $at, .L00412F8C
/* 00412F80 026B8821 */   addu  $s1, $s3, $t3
/* 00412F84 240E007D */  li    $t6, 125
/* 00412F88 A3AE01C8 */  sb    $t6, 0x1c8($sp)
.L00412F8C:
/* 00412F8C 97A901CA */  lhu   $t1, 0x1ca($sp)
/* 00412F90 31380002 */  andi  $t8, $t1, 2
/* 00412F94 53000022 */  beql  $t8, $zero, .L00413020
/* 00412F98 8E390000 */   lw    $t9, ($s1)
/* 00412F9C 97AC1648 */  lhu   $t4, 0x1648($sp)
/* 00412FA0 8F9983F0 */  lw    $t9, %call16(sub_overflow)($gp)
/* 00412FA4 27AA09C4 */  addiu $t2, $sp, 0x9c4
/* 00412FA8 000C7880 */  sll   $t7, $t4, 2
/* 00412FAC 93A401C9 */  lbu   $a0, 0x1c9($sp)
/* 00412FB0 01EA5821 */  addu  $t3, $t7, $t2
/* 00412FB4 8D65FFFC */  lw    $a1, -4($t3)
/* 00412FB8 8E860000 */  lw    $a2, ($s4)
/* 00412FBC AFA700F4 */  sw    $a3, 0xf4($sp)
/* 00412FC0 AFA300DC */  sw    $v1, 0xdc($sp)
/* 00412FC4 0320F809 */  jalr  $t9
/* 00412FC8 3084001F */   andi  $a0, $a0, 0x1f
/* 00412FCC 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00412FD0 8FA300DC */  lw    $v1, 0xdc($sp)
/* 00412FD4 10400011 */  beqz  $v0, .L0041301C
/* 00412FD8 8FA700F4 */   lw    $a3, 0xf4($sp)
/* 00412FDC 8C6D0000 */  lw    $t5, ($v1)
/* 00412FE0 8F998018 */  lw    $t9, %got(func_0040E2AC)($gp)
/* 00412FE4 8E3E0000 */  lw    $fp, ($s1)
/* 00412FE8 AFAD018C */  sw    $t5, 0x18c($sp)
/* 00412FEC AE200000 */  sw    $zero, ($s1)
/* 00412FF0 2739E2AC */  addiu $t9, %lo(func_0040E2AC) # addiu $t9, $t9, -0x1d54
/* 00412FF4 AFA700F4 */  sw    $a3, 0xf4($sp)
/* 00412FF8 AFA300DC */  sw    $v1, 0xdc($sp)
/* 00412FFC 97A41648 */  lhu   $a0, 0x1648($sp)
/* 00413000 0320F809 */  jalr  $t9
/* 00413004 27A21650 */   addiu $v0, $sp, 0x1650
/* 00413008 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0041300C 8FA300DC */  lw    $v1, 0xdc($sp)
/* 00413010 8FA700F4 */  lw    $a3, 0xf4($sp)
/* 00413014 1000000F */  b     .L00413054
/* 00413018 8EF00000 */   lw    $s0, ($s7)
.L0041301C:
/* 0041301C 8E390000 */  lw    $t9, ($s1)
.L00413020:
/* 00413020 8E8E0000 */  lw    $t6, ($s4)
/* 00413024 AE200000 */  sw    $zero, ($s1)
/* 00413028 27B80384 */  addiu $t8, $sp, 0x384
/* 0041302C AE800000 */  sw    $zero, ($s4)
/* 00413030 02586021 */  addu  $t4, $s2, $t8
/* 00413034 8D8F0000 */  lw    $t7, ($t4)
/* 00413038 8C690000 */  lw    $t1, ($v1)
/* 0041303C 97AB01CA */  lhu   $t3, 0x1ca($sp)
/* 00413040 032EF023 */  subu  $fp, $t9, $t6
/* 00413044 012F5025 */  or    $t2, $t1, $t7
/* 00413048 014B6825 */  or    $t5, $t2, $t3
/* 0041304C AFAD018C */  sw    $t5, 0x18c($sp)
/* 00413050 8EF00000 */  lw    $s0, ($s7)
.L00413054:
/* 00413054 56000009 */  bnel  $s0, $zero, .L0041307C
/* 00413058 97AC1648 */   lhu   $t4, 0x1648($sp)
/* 0041305C AE3E0000 */  sw    $fp, ($s1)
/* 00413060 97AE01CA */  lhu   $t6, 0x1ca($sp)
/* 00413064 8C790000 */  lw    $t9, ($v1)
/* 00413068 032EC025 */  or    $t8, $t9, $t6
/* 0041306C AC780000 */  sw    $t8, ($v1)
/* 00413070 1000F14E */  b     .L0040F5AC
/* 00413074 A7A71648 */   sh    $a3, 0x1648($sp)
/* 00413078 97AC1648 */  lhu   $t4, 0x1648($sp)
.L0041307C:
/* 0041307C 27AA1004 */  addiu $t2, $sp, 0x1004
/* 00413080 2404005E */  li    $a0, 94
/* 00413084 000C4880 */  sll   $t1, $t4, 2
/* 00413088 252FFFFC */  addiu $t7, $t1, -4
/* 0041308C 01EAB021 */  addu  $s6, $t7, $t2
/* 00413090 8ECB0000 */  lw    $t3, ($s6)
/* 00413094 27B91004 */  addiu $t9, $sp, 0x1004
/* 00413098 55600014 */  bnel  $t3, $zero, .L004130EC
/* 0041309C 27AC0384 */   addiu $t4, $sp, 0x384
/* 004130A0 AE3E0000 */  sw    $fp, ($s1)
/* 004130A4 8FAD018C */  lw    $t5, 0x18c($sp)
/* 004130A8 02799021 */  addu  $s2, $s3, $t9
/* 004130AC 8F998668 */  lw    $t9, %call16(build_1op)($gp)
/* 004130B0 AC6D0000 */  sw    $t5, ($v1)
/* 004130B4 AFA700F4 */  sw    $a3, 0xf4($sp)
/* 004130B8 0320F809 */  jalr  $t9
/* 004130BC 02002825 */   move  $a1, $s0
/* 004130C0 8FA700F4 */  lw    $a3, 0xf4($sp)
/* 004130C4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004130C8 AE420000 */  sw    $v0, ($s2)
/* 004130CC 8EEE0000 */  lw    $t6, ($s7)
/* 004130D0 26F7FFFC */  addiu $s7, $s7, -4
/* 004130D4 2652FFFC */  addiu $s2, $s2, -4
/* 004130D8 95D80022 */  lhu   $t8, 0x22($t6)
/* 004130DC A4580022 */  sh    $t8, 0x22($v0)
/* 004130E0 1000F132 */  b     .L0040F5AC
/* 004130E4 A7A71648 */   sh    $a3, 0x1648($sp)
/* 004130E8 27AC0384 */  addiu $t4, $sp, 0x384
.L004130EC:
/* 004130EC 10000162 */  b     .L00413678
/* 004130F0 024CA821 */   addu  $s5, $s2, $t4
.L004130F4:
/* 004130F4 97A901CA */  lhu   $t1, 0x1ca($sp)
/* 004130F8 97AB1648 */  lhu   $t3, 0x1648($sp)
/* 004130FC 27AA0384 */  addiu $t2, $sp, 0x384
/* 00413100 312F0002 */  andi  $t7, $t1, 2
/* 00413104 11E00006 */  beqz  $t7, .L00413120
/* 00413108 000B6880 */   sll   $t5, $t3, 2
/* 0041310C 25B9FFFC */  addiu $t9, $t5, -4
/* 00413110 27AE1004 */  addiu $t6, $sp, 0x1004
/* 00413114 032EB021 */  addu  $s6, $t9, $t6
/* 00413118 10000157 */  b     .L00413678
/* 0041311C 024AA821 */   addu  $s5, $s2, $t2
.L00413120:
/* 00413120 8EF80000 */  lw    $t8, ($s7)
/* 00413124 97AF1648 */  lhu   $t7, 0x1648($sp)
/* 00413128 27AD1004 */  addiu $t5, $sp, 0x1004
/* 0041312C 1700001A */  bnez  $t8, .L00413198
/* 00413130 000F5080 */   sll   $t2, $t7, 2
/* 00413134 00079880 */  sll   $s3, $a3, 2
/* 00413138 27AC09C4 */  addiu $t4, $sp, 0x9c4
/* 0041313C 026C8821 */  addu  $s1, $s3, $t4
/* 00413140 8E290000 */  lw    $t1, ($s1)
/* 00413144 8E8F0000 */  lw    $t7, ($s4)
/* 00413148 AE200000 */  sw    $zero, ($s1)
/* 0041314C 97AE1648 */  lhu   $t6, 0x1648($sp)
/* 00413150 012F0019 */  multu $t1, $t7
/* 00413154 27AA1004 */  addiu $t2, $sp, 0x1004
/* 00413158 026A5821 */  addu  $t3, $s3, $t2
/* 0041315C 8D6D0000 */  lw    $t5, ($t3)
/* 00413160 000EC080 */  sll   $t8, $t6, 2
/* 00413164 270CFFFC */  addiu $t4, $t8, -4
/* 00413168 27A91004 */  addiu $t1, $sp, 0x1004
/* 0041316C 0189B021 */  addu  $s6, $t4, $t1
/* 00413170 27B90384 */  addiu $t9, $sp, 0x384
/* 00413174 0000F012 */  mflo  $fp
/* 00413178 15A00005 */  bnez  $t5, .L00413190
/* 0041317C 00000000 */   nop   
/* 00413180 A7A71648 */  sh    $a3, 0x1648($sp)
/* 00413184 2694FFFC */  addiu $s4, $s4, -4
/* 00413188 1000F108 */  b     .L0040F5AC
/* 0041318C AE9E0000 */   sw    $fp, ($s4)
.L00413190:
/* 00413190 10000139 */  b     .L00413678
/* 00413194 0259A821 */   addu  $s5, $s2, $t9
.L00413198:
/* 00413198 254BFFFC */  addiu $t3, $t2, -4
/* 0041319C 016DB021 */  addu  $s6, $t3, $t5
/* 004131A0 8ECE0000 */  lw    $t6, ($s6)
/* 004131A4 27B90384 */  addiu $t9, $sp, 0x384
/* 004131A8 0259A821 */  addu  $s5, $s2, $t9
/* 004131AC 15C00132 */  bnez  $t6, .L00413678
/* 004131B0 27AC09C4 */   addiu $t4, $sp, 0x9c4
/* 004131B4 014C4821 */  addu  $t1, $t2, $t4
/* 004131B8 8D2FFFFC */  lw    $t7, -4($t1)
/* 004131BC 8E980000 */  lw    $t8, ($s4)
/* 004131C0 AE800000 */  sw    $zero, ($s4)
/* 004131C4 030F0019 */  multu $t8, $t7
/* 004131C8 0000F012 */  mflo  $fp
/* 004131CC 1000012A */  b     .L00413678
/* 004131D0 00000000 */   nop   
/* 004131D4 8E8A0000 */  lw    $t2, ($s4)
.L004131D8:
/* 004131D8 8FAC01CC */  lw    $t4, 0x1cc($sp)
/* 004131DC 97AB1648 */  lhu   $t3, 0x1648($sp)
/* 004131E0 27AE09C4 */  addiu $t6, $sp, 0x9c4
/* 004131E4 014C0019 */  multu $t2, $t4
/* 004131E8 000B6880 */  sll   $t5, $t3, 2
/* 004131EC 25B9FFFC */  addiu $t9, $t5, -4
/* 004131F0 032E8821 */  addu  $s1, $t9, $t6
/* 004131F4 8E380000 */  lw    $t8, ($s1)
/* 004131F8 8EF00000 */  lw    $s0, ($s7)
/* 004131FC AE200000 */  sw    $zero, ($s1)
/* 00413200 AE800000 */  sw    $zero, ($s4)
/* 00413204 00004812 */  mflo  $t1
/* 00413208 0309F021 */  addu  $fp, $t8, $t1
/* 0041320C 56000006 */  bnel  $s0, $zero, .L00413228
/* 00413210 97AB1648 */   lhu   $t3, 0x1648($sp)
/* 00413214 A7A71648 */  sh    $a3, 0x1648($sp)
/* 00413218 2694FFFC */  addiu $s4, $s4, -4
/* 0041321C 1000F0E3 */  b     .L0040F5AC
/* 00413220 AE9E0000 */   sw    $fp, ($s4)
/* 00413224 97AB1648 */  lhu   $t3, 0x1648($sp)
.L00413228:
/* 00413228 8FAA01CC */  lw    $t2, 0x1cc($sp)
/* 0041322C 27AF0384 */  addiu $t7, $sp, 0x384
/* 00413230 000B6880 */  sll   $t5, $t3, 2
/* 00413234 25B9FFFC */  addiu $t9, $t5, -4
/* 00413238 27AE1004 */  addiu $t6, $sp, 0x1004
/* 0041323C 24010001 */  li    $at, 1
/* 00413240 032EB021 */  addu  $s6, $t9, $t6
/* 00413244 11410013 */  beq   $t2, $at, .L00413294
/* 00413248 024FA821 */   addu  $s5, $s2, $t7
/* 0041324C 8F998684 */  lw    $t9, %call16(ivalue)($gp)
/* 00413250 24040008 */  li    $a0, 8
/* 00413254 00002825 */  move  $a1, $zero
/* 00413258 01403025 */  move  $a2, $t2
/* 0041325C 0320F809 */  jalr  $t9
/* 00413260 AFA700F4 */   sw    $a3, 0xf4($sp)
/* 00413264 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00413268 2404005B */  li    $a0, 91
/* 0041326C 02002825 */  move  $a1, $s0
/* 00413270 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 00413274 00403025 */  move  $a2, $v0
/* 00413278 0320F809 */  jalr  $t9
/* 0041327C 00000000 */   nop   
/* 00413280 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00413284 8FA700F4 */  lw    $a3, 0xf4($sp)
/* 00413288 AEE20000 */  sw    $v0, ($s7)
/* 0041328C 97AC01CA */  lhu   $t4, 0x1ca($sp)
/* 00413290 A44C0022 */  sh    $t4, 0x22($v0)
.L00413294:
/* 00413294 24180001 */  li    $t8, 1
/* 00413298 100000F7 */  b     .L00413678
/* 0041329C A3B801C8 */   sb    $t8, 0x1c8($sp)
.L004132A0:
/* 004132A0 97A21648 */  lhu   $v0, 0x1648($sp)
.L004132A4:
/* 004132A4 8EEC0000 */  lw    $t4, ($s7)
/* 004132A8 27A90384 */  addiu $t1, $sp, 0x384
/* 004132AC 00027880 */  sll   $t7, $v0, 2
/* 004132B0 0002C880 */  sll   $t9, $v0, 2
/* 004132B4 272EFFFC */  addiu $t6, $t9, -4
/* 004132B8 25EBFFFC */  addiu $t3, $t7, -4
/* 004132BC 27AD1004 */  addiu $t5, $sp, 0x1004
/* 004132C0 27AA09C4 */  addiu $t2, $sp, 0x9c4
/* 004132C4 01CA8821 */  addu  $s1, $t6, $t2
/* 004132C8 016DB021 */  addu  $s6, $t3, $t5
/* 004132CC 15800004 */  bnez  $t4, .L004132E0
/* 004132D0 0249A821 */   addu  $s5, $s2, $t1
/* 004132D4 8E220000 */  lw    $v0, ($s1)
/* 004132D8 1000000E */  b     .L00413314
/* 004132DC 0040F025 */   move  $fp, $v0
.L004132E0:
/* 004132E0 8ED80000 */  lw    $t8, ($s6)
/* 004132E4 57000005 */  bnel  $t8, $zero, .L004132FC
/* 004132E8 8E220000 */   lw    $v0, ($s1)
/* 004132EC 8E9E0000 */  lw    $fp, ($s4)
/* 004132F0 10000008 */  b     .L00413314
/* 004132F4 8E220000 */   lw    $v0, ($s1)
/* 004132F8 8E220000 */  lw    $v0, ($s1)
.L004132FC:
/* 004132FC 8E890000 */  lw    $t1, ($s4)
/* 00413300 0040F025 */  move  $fp, $v0
/* 00413304 0122082A */  slt   $at, $t1, $v0
/* 00413308 50200003 */  beql  $at, $zero, .L00413318
/* 0041330C 005E7823 */   subu  $t7, $v0, $fp
/* 00413310 0120F025 */  move  $fp, $t1
.L00413314:
/* 00413314 005E7823 */  subu  $t7, $v0, $fp
.L00413318:
/* 00413318 AE2F0000 */  sw    $t7, ($s1)
/* 0041331C 8E8B0000 */  lw    $t3, ($s4)
/* 00413320 017E6823 */  subu  $t5, $t3, $fp
/* 00413324 AE8D0000 */  sw    $t5, ($s4)
/* 00413328 100000D3 */  b     .L00413678
/* 0041332C 0000F025 */   move  $fp, $zero
/* 00413330 97A21648 */  lhu   $v0, 0x1648($sp)
.L00413334:
/* 00413334 27AA09C4 */  addiu $t2, $sp, 0x9c4
/* 00413338 27AC0384 */  addiu $t4, $sp, 0x384
/* 0041333C 0002C880 */  sll   $t9, $v0, 2
/* 00413340 272EFFFC */  addiu $t6, $t9, -4
/* 00413344 01CA8821 */  addu  $s1, $t6, $t2
/* 00413348 8E2B0000 */  lw    $t3, ($s1)
/* 0041334C 0002C080 */  sll   $t8, $v0, 2
/* 00413350 2709FFFC */  addiu $t1, $t8, -4
/* 00413354 27AF1004 */  addiu $t7, $sp, 0x1004
/* 00413358 012FB021 */  addu  $s6, $t1, $t7
/* 0041335C 11600016 */  beqz  $t3, .L004133B8
/* 00413360 024CA821 */   addu  $s5, $s2, $t4
/* 00413364 8E8D0000 */  lw    $t5, ($s4)
/* 00413368 55A00014 */  bnel  $t5, $zero, .L004133BC
/* 0041336C 93B801C9 */   lbu   $t8, 0x1c9($sp)
/* 00413370 8F998410 */  lw    $t9, %call16(swap_tree)($gp)
/* 00413374 02C02025 */  move  $a0, $s6
/* 00413378 02E02825 */  move  $a1, $s7
/* 0041337C 0320F809 */  jalr  $t9
/* 00413380 AFA700F4 */   sw    $a3, 0xf4($sp)
/* 00413384 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00413388 02202025 */  move  $a0, $s1
/* 0041338C 02802825 */  move  $a1, $s4
/* 00413390 8F998414 */  lw    $t9, %call16(swap_int)($gp)
/* 00413394 0320F809 */  jalr  $t9
/* 00413398 00000000 */   nop   
/* 0041339C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004133A0 93B901C8 */  lbu   $t9, 0x1c8($sp)
/* 004133A4 8FA700F4 */  lw    $a3, 0xf4($sp)
/* 004133A8 8F8E891C */  lw     $t6, %got(reverse)($gp)
/* 004133AC 032E5021 */  addu  $t2, $t9, $t6
/* 004133B0 914C0000 */  lbu   $t4, ($t2)
/* 004133B4 A3AC01C8 */  sb    $t4, 0x1c8($sp)
.L004133B8:
/* 004133B8 93B801C9 */  lbu   $t8, 0x1c9($sp)
.L004133BC:
/* 004133BC 24010006 */  li    $at, 6
/* 004133C0 3309001F */  andi  $t1, $t8, 0x1f
/* 004133C4 152100AC */  bne   $t1, $at, .L00413678
/* 004133C8 00000000 */   nop   
/* 004133CC 8EF00000 */  lw    $s0, ($s7)
/* 004133D0 52000007 */  beql  $s0, $zero, .L004133F0
/* 004133D4 8E850000 */   lw    $a1, ($s4)
/* 004133D8 920F0021 */  lbu   $t7, 0x21($s0)
/* 004133DC 24010006 */  li    $at, 6
/* 004133E0 31EB001F */  andi  $t3, $t7, 0x1f
/* 004133E4 156100A4 */  bne   $t3, $at, .L00413678
/* 004133E8 00000000 */   nop   
/* 004133EC 8E850000 */  lw    $a1, ($s4)
.L004133F0:
/* 004133F0 24010001 */  li    $at, 1
/* 004133F4 93AD01C8 */  lbu   $t5, 0x1c8($sp)
/* 004133F8 14A10006 */  bne   $a1, $at, .L00413414
/* 004133FC 2401004E */   li    $at, 78
/* 00413400 15A10004 */  bne   $t5, $at, .L00413414
/* 00413404 2419004D */   li    $t9, 77
/* 00413408 A3B901C8 */  sb    $t9, 0x1c8($sp)
/* 0041340C 1000009A */  b     .L00413678
/* 00413410 AE800000 */   sw    $zero, ($s4)
.L00413414:
/* 00413414 24010001 */  li    $at, 1
/* 00413418 14A10007 */  bne   $a1, $at, .L00413438
/* 0041341C 93AE01C8 */   lbu   $t6, 0x1c8($sp)
/* 00413420 24010028 */  li    $at, 40
/* 00413424 15C10004 */  bne   $t6, $at, .L00413438
/* 00413428 240A0029 */   li    $t2, 41
/* 0041342C A3AA01C8 */  sb    $t2, 0x1c8($sp)
/* 00413430 10000091 */  b     .L00413678
/* 00413434 AE800000 */   sw    $zero, ($s4)
.L00413438:
/* 00413438 2401FFFF */  li    $at, -1
/* 0041343C 14A10007 */  bne   $a1, $at, .L0041345C
/* 00413440 93AC01C8 */   lbu   $t4, 0x1c8($sp)
/* 00413444 2401004D */  li    $at, 77
/* 00413448 15810004 */  bne   $t4, $at, .L0041345C
/* 0041344C 2418004E */   li    $t8, 78
/* 00413450 A3B801C8 */  sb    $t8, 0x1c8($sp)
/* 00413454 10000088 */  b     .L00413678
/* 00413458 AE800000 */   sw    $zero, ($s4)
.L0041345C:
/* 0041345C 2401FFFF */  li    $at, -1
/* 00413460 14A10085 */  bne   $a1, $at, .L00413678
/* 00413464 93A901C8 */   lbu   $t1, 0x1c8($sp)
/* 00413468 24010029 */  li    $at, 41
/* 0041346C 15210082 */  bne   $t1, $at, .L00413678
/* 00413470 240F0028 */   li    $t7, 40
/* 00413474 A3AF01C8 */  sb    $t7, 0x1c8($sp)
/* 00413478 1000007F */  b     .L00413678
/* 0041347C AE800000 */   sw    $zero, ($s4)
.L00413480:
/* 00413480 97AD1648 */  lhu   $t5, 0x1648($sp)
/* 00413484 27AB0384 */  addiu $t3, $sp, 0x384
/* 00413488 27AA1004 */  addiu $t2, $sp, 0x1004
/* 0041348C 000DC880 */  sll   $t9, $t5, 2
/* 00413490 272EFFFC */  addiu $t6, $t9, -4
/* 00413494 01CAB021 */  addu  $s6, $t6, $t2
/* 00413498 10000077 */  b     .L00413678
/* 0041349C 024BA821 */   addu  $s5, $s2, $t3
/* 004134A0 8E8C0000 */  lw    $t4, ($s4)
.L004134A4:
/* 004134A4 27A90384 */  addiu $t1, $sp, 0x384
/* 004134A8 27B91004 */  addiu $t9, $sp, 0x1004
/* 004134AC 3198001F */  andi  $t8, $t4, 0x1f
/* 004134B0 AE980000 */  sw    $t8, ($s4)
/* 004134B4 97AF1648 */  lhu   $t7, 0x1648($sp)
/* 004134B8 0249A821 */  addu  $s5, $s2, $t1
/* 004134BC 000F5880 */  sll   $t3, $t7, 2
/* 004134C0 256DFFFC */  addiu $t5, $t3, -4
/* 004134C4 1000006C */  b     .L00413678
/* 004134C8 01B9B021 */   addu  $s6, $t5, $t9
.L004134CC:
/* 004134CC 97AA1648 */  lhu   $t2, 0x1648($sp)
/* 004134D0 8EEF0000 */  lw    $t7, ($s7)
/* 004134D4 27AE0384 */  addiu $t6, $sp, 0x384
/* 004134D8 000A6080 */  sll   $t4, $t2, 2
/* 004134DC 2598FFFC */  addiu $t8, $t4, -4
/* 004134E0 27A91004 */  addiu $t1, $sp, 0x1004
/* 004134E4 0309B021 */  addu  $s6, $t8, $t1
/* 004134E8 15E00063 */  bnez  $t7, .L00413678
/* 004134EC 024EA821 */   addu  $s5, $s2, $t6
/* 004134F0 8E850000 */  lw    $a1, ($s4)
/* 004134F4 10A00060 */  beqz  $a1, .L00413678
/* 004134F8 00000000 */   nop   
/* 004134FC 8EC20000 */  lw    $v0, ($s6)
/* 00413500 1040005D */  beqz  $v0, .L00413678
/* 00413504 00000000 */   nop   
/* 00413508 904B0021 */  lbu   $t3, 0x21($v0)
/* 0041350C 24010008 */  li    $at, 8
/* 00413510 2599FFFC */  addiu $t9, $t4, -4
/* 00413514 316D001F */  andi  $t5, $t3, 0x1f
/* 00413518 11A10057 */  beq   $t5, $at, .L00413678
/* 0041351C 27AE09C4 */   addiu $t6, $sp, 0x9c4
/* 00413520 032E8821 */  addu  $s1, $t9, $t6
/* 00413524 8E2A0000 */  lw    $t2, ($s1)
/* 00413528 0145001A */  div   $zero, $t2, $a1
/* 0041352C 0000C010 */  mfhi  $t8
/* 00413530 03054826 */  xor   $t1, $t8, $a1
/* 00413534 14A00002 */  bnez  $a1, .L00413540
/* 00413538 00000000 */   nop   
/* 0041353C 0007000D */  break 7
.L00413540:
/* 00413540 2401FFFF */  li    $at, -1
/* 00413544 14A10004 */  bne   $a1, $at, .L00413558
/* 00413548 3C018000 */   lui   $at, 0x8000
/* 0041354C 15410002 */  bne   $t2, $at, .L00413558
/* 00413550 00000000 */   nop   
/* 00413554 0006000D */  break 6
.L00413558:
/* 00413558 05210002 */  bgez  $t1, .L00413564
/* 0041355C 00000000 */   nop   
/* 00413560 0305C021 */  addu  $t8, $t8, $a1
.L00413564:
/* 00413564 10000044 */  b     .L00413678
/* 00413568 AE380000 */   sw    $t8, ($s1)
.L0041356C:
/* 0041356C 97AB1648 */  lhu   $t3, 0x1648($sp)
.L00413570:
/* 00413570 27AF0384 */  addiu $t7, $sp, 0x384
/* 00413574 27B91004 */  addiu $t9, $sp, 0x1004
/* 00413578 000B6880 */  sll   $t5, $t3, 2
/* 0041357C 25ACFFFC */  addiu $t4, $t5, -4
/* 00413580 0199B021 */  addu  $s6, $t4, $t9
/* 00413584 1000003C */  b     .L00413678
/* 00413588 024FA821 */   addu  $s5, $s2, $t7
.L0041358C:
/* 0041358C 2C410042 */  sltiu $at, $v0, 0x42
/* 00413590 14200011 */  bnez  $at, .L004135D8
/* 00413594 2C410060 */   sltiu $at, $v0, 0x60
/* 00413598 14200007 */  bnez  $at, .L004135B8
/* 0041359C 2C410075 */   sltiu $at, $v0, 0x75
/* 004135A0 14200030 */  bnez  $at, .L00413664
/* 004135A4 2401007D */   li    $at, 125
/* 004135A8 5041FE6F */  beql  $v0, $at, .L00412F68
/* 004135AC 93B901C8 */   lbu   $t9, 0x1c8($sp)
/* 004135B0 1000FFEF */  b     .L00413570
/* 004135B4 97AB1648 */   lhu   $t3, 0x1648($sp)
.L004135B8:
/* 004135B8 2C41004F */  sltiu $at, $v0, 0x4f
/* 004135BC 1020001F */  beqz  $at, .L0041363C
/* 004135C0 244EFFAB */   addiu $t6, $v0, -0x55
/* 004135C4 2C41004D */  sltiu $at, $v0, 0x4d
/* 004135C8 5020FF5A */  beql  $at, $zero, .L00413334
/* 004135CC 97A21648 */   lhu   $v0, 0x1648($sp)
/* 004135D0 1000FFE7 */  b     .L00413570
/* 004135D4 97AB1648 */   lhu   $t3, 0x1648($sp)
.L004135D8:
/* 004135D8 2C41000A */  sltiu $at, $v0, 0xa
/* 004135DC 1420000A */  bnez  $at, .L00413608
/* 004135E0 24010023 */   li    $at, 35
/* 004135E4 5041FF2F */  beql  $v0, $at, .L004132A4
/* 004135E8 97A21648 */   lhu   $v0, 0x1648($sp)
/* 004135EC 2C41002A */  sltiu $at, $v0, 0x2a
/* 004135F0 1020000D */  beqz  $at, .L00413628
/* 004135F4 2C410028 */   sltiu $at, $v0, 0x28
/* 004135F8 5020FF4E */  beql  $at, $zero, .L00413334
/* 004135FC 97A21648 */   lhu   $v0, 0x1648($sp)
/* 00413600 1000FFDB */  b     .L00413570
/* 00413604 97AB1648 */   lhu   $t3, 0x1648($sp)
.L00413608:
/* 00413608 24010001 */  li    $at, 1
/* 0041360C 1041FE05 */  beq   $v0, $at, .L00412E24
/* 00413610 27A909C4 */   addiu $t1, $sp, 0x9c4
/* 00413614 24010009 */  li    $at, 9
/* 00413618 5041FE53 */  beql  $v0, $at, .L00412F68
/* 0041361C 93B901C8 */   lbu   $t9, 0x1c8($sp)
/* 00413620 1000FFD3 */  b     .L00413570
/* 00413624 97AB1648 */   lhu   $t3, 0x1648($sp)
.L00413628:
/* 00413628 24010041 */  li    $at, 65
/* 0041362C 5041FEEA */  beql  $v0, $at, .L004131D8
/* 00413630 8E8A0000 */   lw    $t2, ($s4)
/* 00413634 1000FFCE */  b     .L00413570
/* 00413638 97AB1648 */   lhu   $t3, 0x1648($sp)
.L0041363C:
/* 0041363C 2DC1000B */  sltiu $at, $t6, 0xb
/* 00413640 5020FFCB */  beql  $at, $zero, .L00413570
/* 00413644 97AB1648 */   lhu   $t3, 0x1648($sp)
/* 00413648 8F818038 */  lw    $at, %got(jtbl_100090E8)($gp)
/* 0041364C 000E7080 */  sll   $t6, $t6, 2
/* 00413650 002E0821 */  addu  $at, $at, $t6
/* 00413654 8C2E90E8 */  lw    $t6, %lo(jtbl_100090E8)($at)
/* 00413658 01DC7021 */  addu  $t6, $t6, $gp
/* 0041365C 01C00008 */  jr    $t6
/* 00413660 00000000 */   nop   
.L00413664:
/* 00413664 2C410073 */  sltiu $at, $v0, 0x73
/* 00413668 5020FF8E */  beql  $at, $zero, .L004134A4
/* 0041366C 8E8C0000 */   lw    $t4, ($s4)
/* 00413670 1000FFBF */  b     .L00413570
/* 00413674 97AB1648 */   lhu   $t3, 0x1648($sp)
.L00413678:
/* 00413678 8F998018 */  lw    $t9, %got(func_0040E2AC)($gp)
/* 0041367C 97A41648 */  lhu   $a0, 0x1648($sp)
/* 00413680 27A21650 */  addiu $v0, $sp, 0x1650
/* 00413684 2739E2AC */  addiu $t9, %lo(func_0040E2AC) # addiu $t9, $t9, -0x1d54
/* 00413688 0320F809 */  jalr  $t9
/* 0041368C AFA700F4 */   sw    $a3, 0xf4($sp)
/* 00413690 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00413694 8FA400F4 */  lw    $a0, 0xf4($sp)
/* 00413698 27A21650 */  addiu $v0, $sp, 0x1650
/* 0041369C 8F998018 */  lw    $t9, %got(func_0040E2AC)($gp)
/* 004136A0 2739E2AC */  addiu $t9, %lo(func_0040E2AC) # addiu $t9, $t9, -0x1d54
/* 004136A4 0320F809 */  jalr  $t9
/* 004136A8 00000000 */   nop   
/* 004136AC 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004136B0 27A401C8 */  addiu $a0, $sp, 0x1c8
/* 004136B4 8EC50000 */  lw    $a1, ($s6)
/* 004136B8 8F998660 */  lw    $t9, %call16(build_u2)($gp)
/* 004136BC 8EE60000 */  lw    $a2, ($s7)
/* 004136C0 0320F809 */  jalr  $t9
/* 004136C4 00000000 */   nop   
/* 004136C8 8FA700F4 */  lw    $a3, 0xf4($sp)
/* 004136CC 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004136D0 26F7FFFC */  addiu $s7, $s7, -4
/* 004136D4 A7A71648 */  sh    $a3, 0x1648($sp)
/* 004136D8 AEE20000 */  sw    $v0, ($s7)
/* 004136DC AE9EFFFC */  sw    $fp, -4($s4)
/* 004136E0 8FAA018C */  lw    $t2, 0x18c($sp)
/* 004136E4 2694FFFC */  addiu $s4, $s4, -4
/* 004136E8 26B5FFFC */  addiu $s5, $s5, -4
/* 004136EC 1000EFAF */  b     .L0040F5AC
/* 004136F0 AEAA0000 */   sw    $t2, ($s5)
.L004136F4:
/* 004136F4 97A91648 */  lhu   $t1, 0x1648($sp)
/* 004136F8 97AC01CA */  lhu   $t4, 0x1ca($sp)
/* 004136FC 27AF1004 */  addiu $t7, $sp, 0x1004
/* 00413700 0009C080 */  sll   $t8, $t1, 2
/* 00413704 030F1021 */  addu  $v0, $t8, $t7
/* 00413708 27AB09C4 */  addiu $t3, $sp, 0x9c4
/* 0041370C 27AD0384 */  addiu $t5, $sp, 0x384
/* 00413710 31990002 */  andi  $t9, $t4, 2
/* 00413714 030DA821 */  addu  $s5, $t8, $t5
/* 00413718 030BA021 */  addu  $s4, $t8, $t3
/* 0041371C 2456FFFC */  addiu $s6, $v0, -4
/* 00413720 2453FFF8 */  addiu $s3, $v0, -8
/* 00413724 1320003F */  beqz  $t9, .L00413824
/* 00413728 030FB821 */   addu  $s7, $t8, $t7
/* 0041372C 8EC20000 */  lw    $v0, ($s6)
/* 00413730 93A901C9 */  lbu   $t1, 0x1c9($sp)
/* 00413734 50400007 */  beql  $v0, $zero, .L00413754
/* 00413738 8EF00000 */   lw    $s0, ($s7)
/* 0041373C 904E0021 */  lbu   $t6, 0x21($v0)
/* 00413740 312B001F */  andi  $t3, $t1, 0x1f
/* 00413744 31CA001F */  andi  $t2, $t6, 0x1f
/* 00413748 554B0020 */  bnel  $t2, $t3, .L004137CC
/* 0041374C 97A41648 */   lhu   $a0, 0x1648($sp)
/* 00413750 8EF00000 */  lw    $s0, ($s7)
.L00413754:
/* 00413754 93AF01C9 */  lbu   $t7, 0x1c9($sp)
/* 00413758 52000007 */  beql  $s0, $zero, .L00413778
/* 0041375C 8E660000 */   lw    $a2, ($s3)
/* 00413760 920D0021 */  lbu   $t5, 0x21($s0)
/* 00413764 31EC001F */  andi  $t4, $t7, 0x1f
/* 00413768 31B8001F */  andi  $t8, $t5, 0x1f
/* 0041376C 570C0017 */  bnel  $t8, $t4, .L004137CC
/* 00413770 97A41648 */   lhu   $a0, 0x1648($sp)
/* 00413774 8E660000 */  lw    $a2, ($s3)
.L00413778:
/* 00413778 97AB1648 */  lhu   $t3, 0x1648($sp)
/* 0041377C 93A901C9 */  lbu   $t1, 0x1c9($sp)
/* 00413780 10C00005 */  beqz  $a2, .L00413798
/* 00413784 000B6880 */   sll   $t5, $t3, 2
/* 00413788 90D90021 */  lbu   $t9, 0x21($a2)
/* 0041378C 312A001F */  andi  $t2, $t1, 0x1f
/* 00413790 332E001F */  andi  $t6, $t9, 0x1f
/* 00413794 15CA000C */  bne   $t6, $t2, .L004137C8
.L00413798:
/* 00413798 27AF0384 */   addiu $t7, $sp, 0x384
/* 0041379C 01AF1021 */  addu  $v0, $t5, $t7
/* 004137A0 8C58FFF8 */  lw    $t8, -8($v0)
/* 004137A4 97AC01CA */  lhu   $t4, 0x1ca($sp)
/* 004137A8 570C0008 */  bnel  $t8, $t4, .L004137CC
/* 004137AC 97A41648 */   lhu   $a0, 0x1648($sp)
/* 004137B0 8C59FFFC */  lw    $t9, -4($v0)
/* 004137B4 572C0005 */  bnel  $t9, $t4, .L004137CC
/* 004137B8 97A41648 */   lhu   $a0, 0x1648($sp)
/* 004137BC 8EA90000 */  lw    $t1, ($s5)
/* 004137C0 512C0019 */  beql  $t1, $t4, .L00413828
/* 004137C4 8E660000 */   lw    $a2, ($s3)
.L004137C8:
/* 004137C8 97A41648 */  lhu   $a0, 0x1648($sp)
.L004137CC:
/* 004137CC 8F998018 */  lw    $t9, %got(func_0040E2AC)($gp)
/* 004137D0 27A21650 */  addiu $v0, $sp, 0x1650
/* 004137D4 2487FFFF */  addiu $a3, $a0, -1
/* 004137D8 2739E2AC */  addiu $t9, %lo(func_0040E2AC) # addiu $t9, $t9, -0x1d54
/* 004137DC 0320F809 */  jalr  $t9
/* 004137E0 AFA700F4 */   sw    $a3, 0xf4($sp)
/* 004137E4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004137E8 8FA400F4 */  lw    $a0, 0xf4($sp)
/* 004137EC 27A21650 */  addiu $v0, $sp, 0x1650
/* 004137F0 8F998018 */  lw    $t9, %got(func_0040E2AC)($gp)
/* 004137F4 2739E2AC */  addiu $t9, %lo(func_0040E2AC) # addiu $t9, $t9, -0x1d54
/* 004137F8 0320F809 */  jalr  $t9
/* 004137FC 00000000 */   nop   
/* 00413800 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00413804 97A41648 */  lhu   $a0, 0x1648($sp)
/* 00413808 27A21650 */  addiu $v0, $sp, 0x1650
/* 0041380C 8F998018 */  lw    $t9, %got(func_0040E2AC)($gp)
/* 00413810 2484FFFE */  addiu $a0, $a0, -2
/* 00413814 2739E2AC */  addiu $t9, %lo(func_0040E2AC) # addiu $t9, $t9, -0x1d54
/* 00413818 0320F809 */  jalr  $t9
/* 0041381C 00000000 */   nop   
/* 00413820 8FBC00CC */  lw    $gp, 0xcc($sp)
.L00413824:
/* 00413824 8E660000 */  lw    $a2, ($s3)
.L00413828:
/* 00413828 97AA1648 */  lhu   $t2, 0x1648($sp)
/* 0041382C 14C0001B */  bnez  $a2, .L0041389C
/* 00413830 2552FFFE */   addiu $s2, $t2, -2
/* 00413834 8ECB0000 */  lw    $t3, ($s6)
/* 00413838 000A6880 */  sll   $t5, $t2, 2
/* 0041383C 25AFFFFC */  addiu $t7, $t5, -4
/* 00413840 15600016 */  bnez  $t3, .L0041389C
/* 00413844 27B809C4 */   addiu $t8, $sp, 0x9c4
/* 00413848 25B9FFF8 */  addiu $t9, $t5, -8
/* 0041384C 03381021 */  addu  $v0, $t9, $t8
/* 00413850 01F88821 */  addu  $s1, $t7, $t8
/* 00413854 8E290000 */  lw    $t1, ($s1)
/* 00413858 8C4C0000 */  lw    $t4, ($v0)
/* 0041385C 8E8B0000 */  lw    $t3, ($s4)
/* 00413860 AC400000 */  sw    $zero, ($v0)
/* 00413864 012C0019 */  multu $t1, $t4
/* 00413868 AE200000 */  sw    $zero, ($s1)
/* 0041386C 8EF30000 */  lw    $s3, ($s7)
/* 00413870 AE800000 */  sw    $zero, ($s4)
/* 00413874 A7B21648 */  sh    $s2, 0x1648($sp)
/* 00413878 26F7FFF8 */  addiu $s7, $s7, -8
/* 0041387C 2694FFF8 */  addiu $s4, $s4, -8
/* 00413880 26B5FFF8 */  addiu $s5, $s5, -8
/* 00413884 AEA00000 */  sw    $zero, ($s5)
/* 00413888 AEF30000 */  sw    $s3, ($s7)
/* 0041388C 00007012 */  mflo  $t6
/* 00413890 016EF021 */  addu  $fp, $t3, $t6
/* 00413894 1000EF45 */  b     .L0040F5AC
/* 00413898 AE9E0000 */   sw    $fp, ($s4)
.L0041389C:
/* 0041389C 97AA1648 */  lhu   $t2, 0x1648($sp)
/* 004138A0 14C00010 */  bnez  $a2, .L004138E4
/* 004138A4 2547FFFF */   addiu $a3, $t2, -1
/* 004138A8 000A7880 */  sll   $t7, $t2, 2
/* 004138AC 27B909C4 */  addiu $t9, $sp, 0x9c4
/* 004138B0 25EDFFFC */  addiu $t5, $t7, -4
/* 004138B4 01B98821 */  addu  $s1, $t5, $t9
/* 004138B8 01F94821 */  addu  $t1, $t7, $t9
/* 004138BC 8D2CFFF8 */  lw    $t4, -8($t1)
/* 004138C0 8E380000 */  lw    $t8, ($s1)
/* 004138C4 8E8E0000 */  lw    $t6, ($s4)
/* 004138C8 AE200000 */  sw    $zero, ($s1)
/* 004138CC 030C0019 */  multu $t8, $t4
/* 004138D0 AE800000 */  sw    $zero, ($s4)
/* 004138D4 00005812 */  mflo  $t3
/* 004138D8 01CBF021 */  addu  $fp, $t6, $t3
/* 004138DC 10000016 */  b     .L00413938
/* 004138E0 00000000 */   nop   
.L004138E4:
/* 004138E4 8ECA0000 */  lw    $t2, ($s6)
/* 004138E8 55400012 */  bnel  $t2, $zero, .L00413934
/* 004138EC 8E9E0000 */   lw    $fp, ($s4)
/* 004138F0 97AD1648 */  lhu   $t5, 0x1648($sp)
/* 004138F4 27A909C4 */  addiu $t1, $sp, 0x9c4
/* 004138F8 8E8A0000 */  lw    $t2, ($s4)
/* 004138FC 000D7880 */  sll   $t7, $t5, 2
/* 00413900 25F9FFF8 */  addiu $t9, $t7, -8
/* 00413904 03291021 */  addu  $v0, $t9, $t1
/* 00413908 01E9C021 */  addu  $t8, $t7, $t1
/* 0041390C 8F0CFFFC */  lw    $t4, -4($t8)
/* 00413910 8C4E0000 */  lw    $t6, ($v0)
/* 00413914 AC400000 */  sw    $zero, ($v0)
/* 00413918 AE800000 */  sw    $zero, ($s4)
/* 0041391C 018E0019 */  multu $t4, $t6
/* 00413920 00005812 */  mflo  $t3
/* 00413924 014BF021 */  addu  $fp, $t2, $t3
/* 00413928 10000003 */  b     .L00413938
/* 0041392C 00000000 */   nop   
/* 00413930 8E9E0000 */  lw    $fp, ($s4)
.L00413934:
/* 00413934 AE800000 */  sw    $zero, ($s4)
.L00413938:
/* 00413938 8F998018 */  lw    $t9, %got(func_0040E2AC)($gp)
/* 0041393C 02402025 */  move  $a0, $s2
/* 00413940 27A21650 */  addiu $v0, $sp, 0x1650
/* 00413944 2739E2AC */  addiu $t9, %lo(func_0040E2AC) # addiu $t9, $t9, -0x1d54
/* 00413948 0320F809 */  jalr  $t9
/* 0041394C AFA700F4 */   sw    $a3, 0xf4($sp)
/* 00413950 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00413954 8FA400F4 */  lw    $a0, 0xf4($sp)
/* 00413958 27A21650 */  addiu $v0, $sp, 0x1650
/* 0041395C 8F998018 */  lw    $t9, %got(func_0040E2AC)($gp)
/* 00413960 2739E2AC */  addiu $t9, %lo(func_0040E2AC) # addiu $t9, $t9, -0x1d54
/* 00413964 0320F809 */  jalr  $t9
/* 00413968 00000000 */   nop   
/* 0041396C 8E660000 */  lw    $a2, ($s3)
/* 00413970 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00413974 14C00009 */  bnez  $a2, .L0041399C
/* 00413978 00000000 */   nop   
/* 0041397C 97AD1648 */  lhu   $t5, 0x1648($sp)
/* 00413980 27AF09C4 */  addiu $t7, $sp, 0x9c4
/* 00413984 24010001 */  li    $at, 1
/* 00413988 000DC880 */  sll   $t9, $t5, 2
/* 0041398C 032F4821 */  addu  $t1, $t9, $t7
/* 00413990 8D38FFF8 */  lw    $t8, -8($t1)
/* 00413994 5301000B */  beql  $t8, $at, .L004139C4
/* 00413998 8EF00000 */   lw    $s0, ($s7)
.L0041399C:
/* 0041399C 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 004139A0 2404005B */  li    $a0, 91
/* 004139A4 8EC50000 */  lw    $a1, ($s6)
/* 004139A8 0320F809 */  jalr  $t9
/* 004139AC 00000000 */   nop   
/* 004139B0 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004139B4 AEC20000 */  sw    $v0, ($s6)
/* 004139B8 97AC01CA */  lhu   $t4, 0x1ca($sp)
/* 004139BC A44C0022 */  sh    $t4, 0x22($v0)
/* 004139C0 8EF00000 */  lw    $s0, ($s7)
.L004139C4:
/* 004139C4 5200000A */  beql  $s0, $zero, .L004139F0
/* 004139C8 8ED30000 */   lw    $s3, ($s6)
/* 004139CC 8F99866C */  lw    $t9, %call16(build_2op)($gp)
/* 004139D0 24040001 */  li    $a0, 1
/* 004139D4 02002825 */  move  $a1, $s0
/* 004139D8 0320F809 */  jalr  $t9
/* 004139DC 8EC60000 */   lw    $a2, ($s6)
/* 004139E0 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 004139E4 10000002 */  b     .L004139F0
/* 004139E8 00409825 */   move  $s3, $v0
/* 004139EC 8ED30000 */  lw    $s3, ($s6)
.L004139F0:
/* 004139F0 A7B21648 */  sh    $s2, 0x1648($sp)
/* 004139F4 26F7FFF8 */  addiu $s7, $s7, -8
/* 004139F8 2694FFF8 */  addiu $s4, $s4, -8
/* 004139FC 26B5FFF8 */  addiu $s5, $s5, -8
/* 00413A00 AEF30000 */  sw    $s3, ($s7)
/* 00413A04 AE9E0000 */  sw    $fp, ($s4)
/* 00413A08 1000EEE8 */  b     .L0040F5AC
/* 00413A0C AEA00000 */   sw    $zero, ($s5)
.L00413A10:
/* 00413A10 97AE1648 */  lhu   $t6, 0x1648($sp)
/* 00413A14 27B909C4 */  addiu $t9, $sp, 0x9c4
/* 00413A18 27AD1004 */  addiu $t5, $sp, 0x1004
/* 00413A1C 000E9080 */  sll   $s2, $t6, 2
/* 00413A20 2649FFFC */  addiu $t1, $s2, -4
/* 00413A24 01398821 */  addu  $s1, $t1, $t9
/* 00413A28 0259A021 */  addu  $s4, $s2, $t9
/* 00413A2C 8F998410 */  lw    $t9, %call16(swap_tree)($gp)
/* 00413A30 264BFFFC */  addiu $t3, $s2, -4
/* 00413A34 2658FFFC */  addiu $t8, $s2, -4
/* 00413A38 27AF0384 */  addiu $t7, $sp, 0x384
/* 00413A3C 024FA821 */  addu  $s5, $s2, $t7
/* 00413A40 030F8021 */  addu  $s0, $t8, $t7
/* 00413A44 016D2021 */  addu  $a0, $t3, $t5
/* 00413A48 0320F809 */  jalr  $t9
/* 00413A4C 024D2821 */   addu  $a1, $s2, $t5
/* 00413A50 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00413A54 02202025 */  move  $a0, $s1
/* 00413A58 02802825 */  move  $a1, $s4
/* 00413A5C 8F998414 */  lw    $t9, %call16(swap_int)($gp)
/* 00413A60 0320F809 */  jalr  $t9
/* 00413A64 00000000 */   nop   
/* 00413A68 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00413A6C 02002025 */  move  $a0, $s0
/* 00413A70 02A02825 */  move  $a1, $s5
/* 00413A74 8F998414 */  lw    $t9, %call16(swap_int)($gp)
/* 00413A78 0320F809 */  jalr  $t9
/* 00413A7C 00000000 */   nop   
/* 00413A80 1000EECA */  b     .L0040F5AC
/* 00413A84 8FBC00CC */   lw    $gp, 0xcc($sp)
.L00413A88:
/* 00413A88 97AC1648 */  lhu   $t4, 0x1648($sp)
/* 00413A8C 8F998018 */  lw    $t9, %got(func_0040F230)($gp)
/* 00413A90 27AB1004 */  addiu $t3, $sp, 0x1004
/* 00413A94 000C7080 */  sll   $t6, $t4, 2
/* 00413A98 01CBB821 */  addu  $s7, $t6, $t3
/* 00413A9C 8EE40000 */  lw    $a0, ($s7)
/* 00413AA0 2587FFFF */  addiu $a3, $t4, -1
/* 00413AA4 2739F230 */  addiu $t9, %lo(func_0040F230) # addiu $t9, $t9, -0xdd0
/* 00413AA8 AFA700F4 */  sw    $a3, 0xf4($sp)
/* 00413AAC 0320F809 */  jalr  $t9
/* 00413AB0 27A21650 */   addiu $v0, $sp, 0x1650
/* 00413AB4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00413AB8 14400003 */  bnez  $v0, .L00413AC8
/* 00413ABC 8FA700F4 */   lw    $a3, 0xf4($sp)
/* 00413AC0 1000EEBA */  b     .L0040F5AC
/* 00413AC4 A7A71648 */   sh    $a3, 0x1648($sp)
.L00413AC8:
/* 00413AC8 8F998018 */  lw    $t9, %got(func_0040E2AC)($gp)
/* 00413ACC 97A41648 */  lhu   $a0, 0x1648($sp)
/* 00413AD0 27A21650 */  addiu $v0, $sp, 0x1650
/* 00413AD4 2739E2AC */  addiu $t9, %lo(func_0040E2AC) # addiu $t9, $t9, -0x1d54
/* 00413AD8 0320F809 */  jalr  $t9
/* 00413ADC AFA700F4 */   sw    $a3, 0xf4($sp)
/* 00413AE0 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00413AE4 27A401C8 */  addiu $a0, $sp, 0x1c8
/* 00413AE8 8EE50000 */  lw    $a1, ($s7)
/* 00413AEC 8F99865C */  lw    $t9, %call16(build_u1)($gp)
/* 00413AF0 0320F809 */  jalr  $t9
/* 00413AF4 00000000 */   nop   
/* 00413AF8 8FA700F4 */  lw    $a3, 0xf4($sp)
/* 00413AFC 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00413B00 240D007B */  li    $t5, 123
/* 00413B04 A7A71648 */  sh    $a3, 0x1648($sp)
/* 00413B08 90490021 */  lbu   $t1, 0x21($v0)
/* 00413B0C 8C450000 */  lw    $a1, ($v0)
/* 00413B10 A04D0020 */  sb    $t5, 0x20($v0)
/* 00413B14 3139FF1F */  andi  $t9, $t1, 0xff1f
/* 00413B18 37230060 */  ori   $v1, $t9, 0x60
/* 00413B1C A0430021 */  sb    $v1, 0x21($v0)
/* 00413B20 AC40002C */  sw    $zero, 0x2c($v0)
/* 00413B24 AC400030 */  sw    $zero, 0x30($v0)
/* 00413B28 8CB80028 */  lw    $t8, 0x28($a1)
/* 00413B2C 00035EC0 */  sll   $t3, $v1, 0x1b
/* 00413B30 000B66C2 */  srl   $t4, $t3, 0x1b
/* 00413B34 AC580028 */  sw    $t8, 0x28($v0)
/* 00413B38 90AE0021 */  lbu   $t6, 0x21($a1)
/* 00413B3C 00402025 */  move  $a0, $v0
/* 00413B40 01CC6826 */  xor   $t5, $t6, $t4
/* 00413B44 31A9001F */  andi  $t1, $t5, 0x1f
/* 00413B48 0123C826 */  xor   $t9, $t1, $v1
/* 00413B4C A0590021 */  sb    $t9, 0x21($v0)
/* 00413B50 8F998018 */  lw    $t9, %got(func_0040E238)($gp)
/* 00413B54 8CAA0024 */  lw    $t2, 0x24($a1)
/* 00413B58 2739E238 */  addiu $t9, %lo(func_0040E238) # addiu $t9, $t9, -0x1dc8
/* 00413B5C AC4A0024 */  sw    $t2, 0x24($v0)
/* 00413B60 0320F809 */  jalr  $t9
/* 00413B64 27A21650 */   addiu $v0, $sp, 0x1650
/* 00413B68 1000EE90 */  b     .L0040F5AC
/* 00413B6C 8FBC00CC */   lw    $gp, 0xcc($sp)
.L00413B70:
/* 00413B70 97A71648 */  lhu   $a3, 0x1648($sp)
/* 00413B74 24E7FFFF */  addiu $a3, $a3, -1
/* 00413B78 1000EE8C */  b     .L0040F5AC
/* 00413B7C A7A71648 */   sh    $a3, 0x1648($sp)
.L00413B80:
/* 00413B80 97B81648 */  lhu   $t8, 0x1648($sp)
/* 00413B84 8FAF01C4 */  lw    $t7, 0x1c4($sp)
/* 00413B88 24040400 */  li    $a0, 1024
/* 00413B8C 030002B6 */  tne   $t8, $zero, 0xa
/* 00413B90 8F9987E8 */  lw    $t9, %call16(new)($gp)
/* 00413B94 8FAB01D0 */  lw    $t3, 0x1d0($sp)
/* 00413B98 240E0001 */  li    $t6, 1
/* 00413B9C AFAF01DC */  sw    $t7, 0x1dc($sp)
/* 00413BA0 A3AE0183 */  sb    $t6, 0x183($sp)
/* 00413BA4 00002825 */  move  $a1, $zero
/* 00413BA8 0320F809 */  jalr  $t9
/* 00413BAC AFAB01D8 */   sw    $t3, 0x1d8($sp)
/* 00413BB0 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00413BB4 AFA201C4 */  sw    $v0, 0x1c4($sp)
/* 00413BB8 27A401C8 */  addiu $a0, $sp, 0x1c8
/* 00413BBC 8F998658 */  lw    $t9, %call16(build_u)($gp)
/* 00413BC0 0320F809 */  jalr  $t9
/* 00413BC4 00000000 */   nop   
/* 00413BC8 944C0022 */  lhu   $t4, 0x22($v0)
/* 00413BCC 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00413BD0 00409825 */  move  $s3, $v0
/* 00413BD4 15800003 */  bnez  $t4, .L00413BE4
/* 00413BD8 93AD015F */   lbu   $t5, 0x15f($sp)
/* 00413BDC 11A00006 */  beqz  $t5, .L00413BF8
/* 00413BE0 00000000 */   nop   
.L00413BE4:
/* 00413BE4 8FA901F0 */  lw    $t1, 0x1f0($sp)
/* 00413BE8 8F8189B4 */  lw     $at, %got(pseudo_leaf)($gp)
/* 00413BEC 25390001 */  addiu $t9, $t1, 1
/* 00413BF0 AFB901F0 */  sw    $t9, 0x1f0($sp)
/* 00413BF4 A0200000 */  sb    $zero, ($at)
.L00413BF8:
/* 00413BF8 8F998018 */  lw    $t9, %got(func_0040E238)($gp)
/* 00413BFC 02602025 */  move  $a0, $s3
/* 00413C00 27A21650 */  addiu $v0, $sp, 0x1650
/* 00413C04 2739E238 */  addiu $t9, %lo(func_0040E238) # addiu $t9, $t9, -0x1dc8
/* 00413C08 0320F809 */  jalr  $t9
/* 00413C0C 00000000 */   nop   
/* 00413C10 1000EE66 */  b     .L0040F5AC
/* 00413C14 8FBC00CC */   lw    $gp, 0xcc($sp)
.L00413C18:
/* 00413C18 8FAA01CC */  lw    $t2, 0x1cc($sp)
/* 00413C1C 1000EE63 */  b     .L0040F5AC
/* 00413C20 AFAA0160 */   sw    $t2, 0x160($sp)
.L00413C24:
/* 00413C24 8F998658 */  lw    $t9, %call16(build_u)($gp)
/* 00413C28 8FB80160 */  lw    $t8, 0x160($sp)
/* 00413C2C 27A401C8 */  addiu $a0, $sp, 0x1c8
/* 00413C30 0320F809 */  jalr  $t9
/* 00413C34 AFB801CC */   sw    $t8, 0x1cc($sp)
/* 00413C38 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00413C3C 00402025 */  move  $a0, $v0
/* 00413C40 27A21650 */  addiu $v0, $sp, 0x1650
/* 00413C44 8F998018 */  lw    $t9, %got(func_0040E238)($gp)
/* 00413C48 2739E238 */  addiu $t9, %lo(func_0040E238) # addiu $t9, $t9, -0x1dc8
/* 00413C4C 0320F809 */  jalr  $t9
/* 00413C50 00000000 */   nop   
/* 00413C54 1000EE55 */  b     .L0040F5AC
/* 00413C58 8FBC00CC */   lw    $gp, 0xcc($sp)
.L00413C5C:
/* 00413C5C 8F998658 */  lw    $t9, %call16(build_u)($gp)
/* 00413C60 27A401C8 */  addiu $a0, $sp, 0x1c8
/* 00413C64 0320F809 */  jalr  $t9
/* 00413C68 00000000 */   nop   
/* 00413C6C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00413C70 00402025 */  move  $a0, $v0
/* 00413C74 27A21650 */  addiu $v0, $sp, 0x1650
/* 00413C78 8F998018 */  lw    $t9, %got(func_0040E238)($gp)
/* 00413C7C 2739E238 */  addiu $t9, %lo(func_0040E238) # addiu $t9, $t9, -0x1dc8
/* 00413C80 0320F809 */  jalr  $t9
/* 00413C84 00000000 */   nop   
/* 00413C88 97AB01CA */  lhu   $t3, 0x1ca($sp)
/* 00413C8C 8FAF01CC */  lw    $t7, 0x1cc($sp)
/* 00413C90 24010003 */  li    $at, 3
/* 00413C94 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00413C98 1561EE44 */  bne   $t3, $at, .L0040F5AC
/* 00413C9C AFAF0158 */   sw    $t7, 0x158($sp)
/* 00413CA0 8FAE01CC */  lw    $t6, 0x1cc($sp)
/* 00413CA4 8F818970 */  lw     $at, %got(non_local_mtag)($gp)
/* 00413CA8 1000EE40 */  b     .L0040F5AC
/* 00413CAC AC2E0000 */   sw    $t6, ($at)
.L00413CB0:
/* 00413CB0 8F998658 */  lw    $t9, %call16(build_u)($gp)
/* 00413CB4 27A401C8 */  addiu $a0, $sp, 0x1c8
/* 00413CB8 0320F809 */  jalr  $t9
/* 00413CBC 00000000 */   nop   
/* 00413CC0 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00413CC4 00402025 */  move  $a0, $v0
/* 00413CC8 27A21650 */  addiu $v0, $sp, 0x1650
/* 00413CCC 8F998018 */  lw    $t9, %got(func_0040E238)($gp)
/* 00413CD0 2739E238 */  addiu $t9, %lo(func_0040E238) # addiu $t9, $t9, -0x1dc8
/* 00413CD4 0320F809 */  jalr  $t9
/* 00413CD8 00000000 */   nop   
/* 00413CDC 1000EE33 */  b     .L0040F5AC
/* 00413CE0 8FBC00CC */   lw    $gp, 0xcc($sp)
.L00413CE4:
/* 00413CE4 8F8C8038 */  lw    $t4, %got(RO_10008D24)($gp)
/* 00413CE8 24040004 */  li    $a0, 4
/* 00413CEC 24050A42 */  li    $a1, 2626
/* 00413CF0 258C8D24 */  addiu $t4, %lo(RO_10008D24) # addiu $t4, $t4, -0x72dc
/* 00413CF4 258A0048 */  addiu $t2, $t4, 0x48
/* 00413CF8 03A0C825 */  move  $t9, $sp
.L00413CFC:
/* 00413CFC 89890000 */  lwl   $t1, ($t4)
/* 00413D00 99890003 */  lwr   $t1, 3($t4)
/* 00413D04 258C000C */  addiu $t4, $t4, 0xc
/* 00413D08 2739000C */  addiu $t9, $t9, 0xc
/* 00413D0C AB29FFFC */  swl   $t1, -4($t9)
/* 00413D10 BB29FFFF */  swr   $t1, -1($t9)
/* 00413D14 898DFFF8 */  lwl   $t5, -8($t4)
/* 00413D18 998DFFFB */  lwr   $t5, -5($t4)
/* 00413D1C AB2D0000 */  swl   $t5, ($t9)
/* 00413D20 BB2D0003 */  swr   $t5, 3($t9)
/* 00413D24 8989FFFC */  lwl   $t1, -4($t4)
/* 00413D28 9989FFFF */  lwr   $t1, -1($t4)
/* 00413D2C AB290004 */  swl   $t1, 4($t9)
/* 00413D30 158AFFF2 */  bne   $t4, $t2, .L00413CFC
/* 00413D34 BB290007 */   swr   $t1, 7($t9)
/* 00413D38 89890000 */  lwl   $t1, ($t4)
/* 00413D3C 99890003 */  lwr   $t1, 3($t4)
/* 00413D40 8F988038 */  lw    $t8, %got(RO_10008CD4)($gp)
/* 00413D44 03A07025 */  move  $t6, $sp
/* 00413D48 AB290008 */  swl   $t1, 8($t9)
/* 00413D4C BB29000B */  swr   $t1, 0xb($t9)
/* 00413D50 898D0004 */  lwl   $t5, 4($t4)
/* 00413D54 998D0007 */  lwr   $t5, 7($t4)
/* 00413D58 27188CD4 */  addiu $t8, %lo(RO_10008CD4) # addiu $t8, $t8, -0x732c
/* 00413D5C 270A0048 */  addiu $t2, $t8, 0x48
/* 00413D60 AB2D000C */  swl   $t5, 0xc($t9)
/* 00413D64 BB2D000F */  swr   $t5, 0xf($t9)
.L00413D68:
/* 00413D68 8B0B0000 */  lwl   $t3, ($t8)
/* 00413D6C 9B0B0003 */  lwr   $t3, 3($t8)
/* 00413D70 2718000C */  addiu $t8, $t8, 0xc
/* 00413D74 25CE000C */  addiu $t6, $t6, 0xc
/* 00413D78 A9CB004C */  swl   $t3, 0x4c($t6)
/* 00413D7C B9CB004F */  swr   $t3, 0x4f($t6)
/* 00413D80 8B0FFFF8 */  lwl   $t7, -8($t8)
/* 00413D84 9B0FFFFB */  lwr   $t7, -5($t8)
/* 00413D88 A9CF0050 */  swl   $t7, 0x50($t6)
/* 00413D8C B9CF0053 */  swr   $t7, 0x53($t6)
/* 00413D90 8B0BFFFC */  lwl   $t3, -4($t8)
/* 00413D94 9B0BFFFF */  lwr   $t3, -1($t8)
/* 00413D98 A9CB0054 */  swl   $t3, 0x54($t6)
/* 00413D9C 170AFFF2 */  bne   $t8, $t2, .L00413D68
/* 00413DA0 B9CB0057 */   swr   $t3, 0x57($t6)
/* 00413DA4 8B0B0000 */  lwl   $t3, ($t8)
/* 00413DA8 9B0B0003 */  lwr   $t3, 3($t8)
/* 00413DAC A9CB0058 */  swl   $t3, 0x58($t6)
/* 00413DB0 B9CB005B */  swr   $t3, 0x5b($t6)
/* 00413DB4 8B0F0004 */  lwl   $t7, 4($t8)
/* 00413DB8 9B0F0007 */  lwr   $t7, 7($t8)
/* 00413DBC A9CF005C */  swl   $t7, 0x5c($t6)
/* 00413DC0 B9CF005F */  swr   $t7, 0x5f($t6)
/* 00413DC4 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 00413DC8 8FA7000C */  lw    $a3, 0xc($sp)
/* 00413DCC 8FA60008 */  lw    $a2, 8($sp)
/* 00413DD0 0320F809 */  jalr  $t9
/* 00413DD4 00000000 */   nop   
/* 00413DD8 1000EDF4 */  b     .L0040F5AC
/* 00413DDC 8FBC00CC */   lw    $gp, 0xcc($sp)
.L00413DE0:
/* 00413DE0 8F8C8038 */  lw    $t4, %got(RO_10008C84)($gp)
/* 00413DE4 24040004 */  li    $a0, 4
/* 00413DE8 24050A4A */  li    $a1, 2634
/* 00413DEC 258C8C84 */  addiu $t4, %lo(RO_10008C84) # addiu $t4, $t4, -0x737c
/* 00413DF0 258A0048 */  addiu $t2, $t4, 0x48
/* 00413DF4 03A04825 */  move  $t1, $sp
.L00413DF8:
/* 00413DF8 898D0000 */  lwl   $t5, ($t4)
/* 00413DFC 998D0003 */  lwr   $t5, 3($t4)
/* 00413E00 258C000C */  addiu $t4, $t4, 0xc
/* 00413E04 2529000C */  addiu $t1, $t1, 0xc
/* 00413E08 A92DFFFC */  swl   $t5, -4($t1)
/* 00413E0C B92DFFFF */  swr   $t5, -1($t1)
/* 00413E10 8999FFF8 */  lwl   $t9, -8($t4)
/* 00413E14 9999FFFB */  lwr   $t9, -5($t4)
/* 00413E18 A9390000 */  swl   $t9, ($t1)
/* 00413E1C B9390003 */  swr   $t9, 3($t1)
/* 00413E20 898DFFFC */  lwl   $t5, -4($t4)
/* 00413E24 998DFFFF */  lwr   $t5, -1($t4)
/* 00413E28 A92D0004 */  swl   $t5, 4($t1)
/* 00413E2C 158AFFF2 */  bne   $t4, $t2, .L00413DF8
/* 00413E30 B92D0007 */   swr   $t5, 7($t1)
/* 00413E34 898D0000 */  lwl   $t5, ($t4)
/* 00413E38 998D0003 */  lwr   $t5, 3($t4)
/* 00413E3C 8F988038 */  lw    $t8, %got(RO_10008C34)($gp)
/* 00413E40 03A05825 */  move  $t3, $sp
/* 00413E44 A92D0008 */  swl   $t5, 8($t1)
/* 00413E48 B92D000B */  swr   $t5, 0xb($t1)
/* 00413E4C 89990004 */  lwl   $t9, 4($t4)
/* 00413E50 99990007 */  lwr   $t9, 7($t4)
/* 00413E54 27188C34 */  addiu $t8, %lo(RO_10008C34) # addiu $t8, $t8, -0x73cc
/* 00413E58 270A0048 */  addiu $t2, $t8, 0x48
/* 00413E5C A939000C */  swl   $t9, 0xc($t1)
/* 00413E60 B939000F */  swr   $t9, 0xf($t1)
.L00413E64:
/* 00413E64 8B0F0000 */  lwl   $t7, ($t8)
/* 00413E68 9B0F0003 */  lwr   $t7, 3($t8)
/* 00413E6C 2718000C */  addiu $t8, $t8, 0xc
/* 00413E70 256B000C */  addiu $t3, $t3, 0xc
/* 00413E74 A96F004C */  swl   $t7, 0x4c($t3)
/* 00413E78 B96F004F */  swr   $t7, 0x4f($t3)
/* 00413E7C 8B0EFFF8 */  lwl   $t6, -8($t8)
/* 00413E80 9B0EFFFB */  lwr   $t6, -5($t8)
/* 00413E84 A96E0050 */  swl   $t6, 0x50($t3)
/* 00413E88 B96E0053 */  swr   $t6, 0x53($t3)
/* 00413E8C 8B0FFFFC */  lwl   $t7, -4($t8)
/* 00413E90 9B0FFFFF */  lwr   $t7, -1($t8)
/* 00413E94 A96F0054 */  swl   $t7, 0x54($t3)
/* 00413E98 170AFFF2 */  bne   $t8, $t2, .L00413E64
/* 00413E9C B96F0057 */   swr   $t7, 0x57($t3)
/* 00413EA0 8B0F0000 */  lwl   $t7, ($t8)
/* 00413EA4 9B0F0003 */  lwr   $t7, 3($t8)
/* 00413EA8 A96F0058 */  swl   $t7, 0x58($t3)
/* 00413EAC B96F005B */  swr   $t7, 0x5b($t3)
/* 00413EB0 8B0E0004 */  lwl   $t6, 4($t8)
/* 00413EB4 9B0E0007 */  lwr   $t6, 7($t8)
/* 00413EB8 A96E005C */  swl   $t6, 0x5c($t3)
/* 00413EBC B96E005F */  swr   $t6, 0x5f($t3)
/* 00413EC0 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 00413EC4 8FA7000C */  lw    $a3, 0xc($sp)
/* 00413EC8 8FA60008 */  lw    $a2, 8($sp)
/* 00413ECC 0320F809 */  jalr  $t9
/* 00413ED0 00000000 */   nop   
/* 00413ED4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00413ED8 27A501C8 */  addiu $a1, $sp, 0x1c8
/* 00413EDC 8F99863C */  lw    $t9, %call16(print_ucode)($gp)
/* 00413EE0 8F848950 */  lw     $a0, %got(err)($gp)
/* 00413EE4 0320F809 */  jalr  $t9
/* 00413EE8 00000000 */   nop   
/* 00413EEC 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00413EF0 8F9987CC */  lw    $t9, %call16(writeln)($gp)
/* 00413EF4 8F848950 */  lw     $a0, %got(err)($gp)
/* 00413EF8 0320F809 */  jalr  $t9
/* 00413EFC 8C840000 */   lw    $a0, ($a0)
/* 00413F00 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 00413F04 8F998084 */  lw    $t9, %call16(fflush)($gp)
/* 00413F08 8F848950 */  lw     $a0, %got(err)($gp)
/* 00413F0C 0320F809 */  jalr  $t9
/* 00413F10 8C840000 */   lw    $a0, ($a0)
/* 00413F14 1000EDA5 */  b     .L0040F5AC
/* 00413F18 8FBC00CC */   lw    $gp, 0xcc($sp)
.L00413F1C:
/* 00413F1C 8FBF00D4 */  lw    $ra, 0xd4($sp)
/* 00413F20 8FB000AC */  lw    $s0, 0xac($sp)
/* 00413F24 8FB100B0 */  lw    $s1, 0xb0($sp)
/* 00413F28 8FB200B4 */  lw    $s2, 0xb4($sp)
/* 00413F2C 8FB300B8 */  lw    $s3, 0xb8($sp)
/* 00413F30 8FB400BC */  lw    $s4, 0xbc($sp)
/* 00413F34 8FB500C0 */  lw    $s5, 0xc0($sp)
/* 00413F38 8FB600C4 */  lw    $s6, 0xc4($sp)
/* 00413F3C 8FB700C8 */  lw    $s7, 0xc8($sp)
/* 00413F40 8FBE00D0 */  lw    $fp, 0xd0($sp)
/* 00413F44 03E00008 */  jr    $ra
/* 00413F48 27BD1650 */   addiu $sp, $sp, 0x1650
    .type build_tree, @function
    .size build_tree, .-build_tree
    .end build_tree
)"");
