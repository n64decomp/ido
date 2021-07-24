__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
RO_1000C5E0:
    # 0043DA98 get_data_area
    .ascii "illegal data area specified for symbol                                          "

RO_1000C630:
    # 0043DA98 get_data_area
    .ascii "symbol.p                                                                        "

RO_1000C680:
    # 0043DD04 make_new_sym
    .ascii "Insufficiant memory                                                             "

RO_1000C6D0:
    # 0043DD04 make_new_sym
    .ascii "symbol.p                                                                        "

RO_1000C720:
    # 0043DFB0 gen_sym
    .ascii "illegal symbol type                                                             "

RO_1000C770:
    # 0043DFB0 gen_sym
    .ascii "symbol.p                                                                        "

RO_1000C7C0:
    # 0043DFB0 gen_sym
    .ascii "Exception variable symbol not found                                             "

RO_1000C810:
    # 0043DFB0 gen_sym
    .ascii "symbol.p                                                                        "

RO_1000C860:
    # 0043DFB0 gen_sym
    .ascii "Insufficiant memory                                                             "

RO_1000C8B0:
    # 0043DFB0 gen_sym
    .ascii "symbol.p                                                                        "

RO_1000C900:
    # 0043DFB0 gen_sym
    .ascii "aliased symbol not found                                                        "

RO_1000C950:
    # 0043DFB0 gen_sym
    .ascii "symbol.p                                                                        "

    .balign 4
jtbl_1000C9A0:
    # 0043DFB0 gen_sym
    .gpword .L0043E010
    .gpword .L0043E5E0
    .gpword .L0043E5E0
    .gpword .L0043E2DC
    .gpword .L0043E5E0
    .gpword .L0043E5E0
    .gpword .L0043E2DC
    .gpword .L0043E5E0
    .gpword .L0043E5E0
    .gpword .L0043E2DC
    .gpword .L0043E4A0

    .balign 4
jtbl_1000C9CC:
    # 0043DFB0 gen_sym
    .gpword .L0043E424
    .gpword .L0043E5E0
    .gpword .L0043E2DC
    .gpword .L0043E71C

RO_1000C9DC:
    # 0043EA6C complex_insert_init
    .ascii "initialization of overlapping data. Not handled correctly                       "

RO_1000CA2C:
    # 0043EA6C complex_insert_init
    .ascii "symbol.p                                                                        "

RO_1000CA7C:
    # 0043EA6C complex_insert_init
    .ascii "Initialization of overlapping data. Not handled correctly                       "

RO_1000CACC:
    # 0043EA6C complex_insert_init
    .ascii "symbol.p                                                                        "

RO_1000CB1C:
    # 0043EA6C complex_insert_init
    .ascii "Illegal complex_init:  illegal overlapping FORTRAN DATA statements?             "

RO_1000CB6C:
    # 0043EA6C complex_insert_init
    .ascii "symbol.p                                                                        "

RO_1000CBBC:
    # 0043F460 append_init
    .ascii "illegal inits                                                                   "

RO_1000CC0C:
    # 0043F460 append_init
    .ascii "symbol.p                                                                        "

RO_1000CC5C:
    # 0043F460 append_init
    .ascii "Insufficiant memory                                                             "

RO_1000CCAC:
    # 0043F460 append_init
    .ascii "symbol.p                                                                        "

    .balign 4
jtbl_1000CCFC:
    # 0043F460 append_init
    .gpword .L0043F4C0
    .gpword .L0043F528
    .gpword .L0043F4C0
    .gpword .L0043F4C0
    .gpword .L0043F528
    .gpword .L0043F528
    .gpword .L0043F4C0
    .gpword .L0043F4C0
    .gpword .L0043F528
    .gpword .L0043F528
    .gpword .L0043F4C0

RO_1000CD28:
    # 0043FA38 choose_area
    .ascii "symbol.p"

    .balign 4
jtbl_1000CD30:
    # 0043FA38 choose_area
    .gpword .L0043FA7C
    .gpword .L0043FAC8
    .gpword .L0043FAE4
    .gpword .L0043FB00
    .gpword .L0043FB1C
    .gpword .L0043FB38

RO_1000CD48:
    # 0043FBF8 emit_init
    .ascii "illegal value in .space - illegal initialization bounds                         "

RO_1000CD98:
    # 0043FBF8 emit_init
    .ascii "symbol.p                                                                        "

RO_1000CDE8:
    # 0043FBF8 emit_init
    .ascii "Fortran error - Duplicate initialization -- illegal DATA statements             "

RO_1000CE38:
    # 0043FBF8 emit_init
    .ascii "symbol.p                                                                        "

RO_1000CE88:
    # 0043FBF8 emit_init
    .ascii "Illegal shift in INIT. Shift ignored                                            "

RO_1000CED8:
    # 0043FBF8 emit_init
    .ascii "symbol.p                                                                        "

RO_1000CF28:
    # 0043FBF8 emit_init
    .ascii "illegal value in .space - illegal initialization bounds                         "

RO_1000CF78:
    # 0043FBF8 emit_init
    .ascii "symbol.p                                                                        "

RO_1000CFC8:
    # 0043FBF8 emit_init
    .ascii "Fortran error - Duplicate initialization (ovelapping DATA statements)           "

RO_1000D018:
    # 0043FBF8 emit_init
    .ascii "symbol.p                                                                        "

RO_1000D068:
    # 00440398 emit_symbol
    .ascii "illegal symbol type                                                             "

RO_1000D0B8:
    # 00440398 emit_symbol
    .ascii "symbol.p                                                                        "

    .balign 4
jtbl_1000D108:
    # 00440398 emit_symbol
    .gpword .L004403EC
    .gpword .L00440444
    .gpword .L00440710
    .gpword .L00440444
    .gpword .L00440710
    .gpword .L00440710
    .gpword .L00440510
    .gpword .L00440618
    .gpword .L00440710
    .gpword .L004405D0

RO_1000D130:
    # 00440800 output_entry_point
    .ascii "symbol not found                                                                "

RO_1000D180:
    # 00440800 output_entry_point
    .ascii "symbol.p                                                                        "

RO_1000D1D0:
    # 004409C0 change_label_number
    .ascii "label not found in symbol table                                                 "

RO_1000D220:
    # 004409C0 change_label_number
    .ascii "symbol.p                                                                        "

.data
# 10016770
glabel headof_inordered_inits
    # 0043F460 append_init
    # 00440724 output_decls
    .byte 0x00,0x00,0x00,0x00
    .type headof_inordered_inits, @object
    .size headof_inordered_inits, .-headof_inordered_inits # 4

# 10016774
glabel tailof_inordered_inits
    # 0043F460 append_init
    # 00440724 output_decls
    .byte 0x00,0x00,0x00,0x00
    .type tailof_inordered_inits, @object
    .size tailof_inordered_inits, .-tailof_inordered_inits # 4

# 10016778
glabel last_inits_handled
    # 0043E7D8 some_init_overlap
    # 0043E938 complex_init_duplicate_p
    # 0043F460 append_init
    .byte 0x00,0x00,0x00,0x00
    .type last_inits_handled, @object
    .size last_inits_handled, .-last_inits_handled # 4

# 1001677C
glabel last_inits_handled_blkno
    # 0043E7D8 some_init_overlap
    # 0043E938 complex_init_duplicate_p
    # 0043F460 append_init
    .byte 0x00,0x00,0x00,0x00
    .type last_inits_handled_blkno, @object
    .size last_inits_handled_blkno, .-last_inits_handled_blkno # 4



.bss
    .balign 16
# 100226D8
glabel sym_hash_tab
    # 0043DD04 make_new_sym
    # 0043DF04 lookup_sym
    # 0043DF7C clear_sym_tab
    # 00440724 output_decls
    .space 1024
    .size sym_hash_tab, 1024
    .type sym_hash_tab, @object


.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
glabel sym_hash
    .ent sym_hash
    # 0043DD04 make_new_sym
    # 0043DF04 lookup_sym
/* 0043DA90 03E00008 */  jr    $ra
/* 0043DA94 308200FF */   andi  $v0, $a0, 0xff
    .type sym_hash, @function
    .size sym_hash, .-sym_hash
    .end sym_hash

glabel get_data_area
    .ent get_data_area
    # 0043DFB0 gen_sym
/* 0043DA98 3C1C0FBE */  .cpload $t9
/* 0043DA9C 279C1FB8 */  
/* 0043DAA0 0399E021 */  
/* 0043DAA4 27BDFF40 */  addiu $sp, $sp, -0xc0
/* 0043DAA8 AFBF00B4 */  sw    $ra, 0xb4($sp)
/* 0043DAAC AFBC00B0 */  sw    $gp, 0xb0($sp)
/* 0043DAB0 94820002 */  lhu   $v0, 2($a0)
/* 0043DAB4 24010001 */  li    $at, 1
/* 0043DAB8 304200F0 */  andi  $v0, $v0, 0xf0
/* 0043DABC 00021102 */  srl   $v0, $v0, 4
/* 0043DAC0 14400003 */  bnez  $v0, .L0043DAD0
/* 0043DAC4 00000000 */   nop   
/* 0043DAC8 10000057 */  b     .L0043DC28
/* 0043DACC 00001025 */   move  $v0, $zero
.L0043DAD0:
/* 0043DAD0 54410004 */  bnel  $v0, $at, .L0043DAE4
/* 0043DAD4 24010002 */   li    $at, 2
/* 0043DAD8 10000053 */  b     .L0043DC28
/* 0043DADC 24020001 */   li    $v0, 1
/* 0043DAE0 24010002 */  li    $at, 2
.L0043DAE4:
/* 0043DAE4 54410004 */  bnel  $v0, $at, .L0043DAF8
/* 0043DAE8 24010003 */   li    $at, 3
/* 0043DAEC 1000004E */  b     .L0043DC28
/* 0043DAF0 24020002 */   li    $v0, 2
/* 0043DAF4 24010003 */  li    $at, 3
.L0043DAF8:
/* 0043DAF8 54410004 */  bnel  $v0, $at, .L0043DB0C
/* 0043DAFC 24010004 */   li    $at, 4
/* 0043DB00 10000049 */  b     .L0043DC28
/* 0043DB04 24020003 */   li    $v0, 3
/* 0043DB08 24010004 */  li    $at, 4
.L0043DB0C:
/* 0043DB0C 54410004 */  bnel  $v0, $at, .L0043DB20
/* 0043DB10 24010005 */   li    $at, 5
/* 0043DB14 10000044 */  b     .L0043DC28
/* 0043DB18 24020004 */   li    $v0, 4
/* 0043DB1C 24010005 */  li    $at, 5
.L0043DB20:
/* 0043DB20 14410003 */  bne   $v0, $at, .L0043DB30
/* 0043DB24 24040004 */   li    $a0, 4
/* 0043DB28 1000003F */  b     .L0043DC28
/* 0043DB2C 24020005 */   li    $v0, 5
.L0043DB30:
/* 0043DB30 8F8E8038 */  lw    $t6, %got(RO_1000C630)($gp)
/* 0043DB34 24050088 */  li    $a1, 136
/* 0043DB38 03A0C825 */  move  $t9, $sp
/* 0043DB3C 25CEC630 */  addiu $t6, %lo(RO_1000C630) # addiu $t6, $t6, -0x39d0
/* 0043DB40 25C80048 */  addiu $t0, $t6, 0x48
.L0043DB44:
/* 0043DB44 89D80000 */  lwl   $t8, ($t6)
/* 0043DB48 99D80003 */  lwr   $t8, 3($t6)
/* 0043DB4C 25CE000C */  addiu $t6, $t6, 0xc
/* 0043DB50 2739000C */  addiu $t9, $t9, 0xc
/* 0043DB54 AB38FFFC */  swl   $t8, -4($t9)
/* 0043DB58 BB38FFFF */  swr   $t8, -1($t9)
/* 0043DB5C 89CFFFF8 */  lwl   $t7, -8($t6)
/* 0043DB60 99CFFFFB */  lwr   $t7, -5($t6)
/* 0043DB64 AB2F0000 */  swl   $t7, ($t9)
/* 0043DB68 BB2F0003 */  swr   $t7, 3($t9)
/* 0043DB6C 89D8FFFC */  lwl   $t8, -4($t6)
/* 0043DB70 99D8FFFF */  lwr   $t8, -1($t6)
/* 0043DB74 AB380004 */  swl   $t8, 4($t9)
/* 0043DB78 15C8FFF2 */  bne   $t6, $t0, .L0043DB44
/* 0043DB7C BB380007 */   swr   $t8, 7($t9)
/* 0043DB80 89D80000 */  lwl   $t8, ($t6)
/* 0043DB84 99D80003 */  lwr   $t8, 3($t6)
/* 0043DB88 8F898038 */  lw    $t1, %got(RO_1000C5E0)($gp)
/* 0043DB8C 03A06025 */  move  $t4, $sp
/* 0043DB90 AB380008 */  swl   $t8, 8($t9)
/* 0043DB94 BB38000B */  swr   $t8, 0xb($t9)
/* 0043DB98 89CF0004 */  lwl   $t7, 4($t6)
/* 0043DB9C 99CF0007 */  lwr   $t7, 7($t6)
/* 0043DBA0 2529C5E0 */  addiu $t1, %lo(RO_1000C5E0) # addiu $t1, $t1, -0x3a20
/* 0043DBA4 252D0048 */  addiu $t5, $t1, 0x48
/* 0043DBA8 AB2F000C */  swl   $t7, 0xc($t9)
/* 0043DBAC BB2F000F */  swr   $t7, 0xf($t9)
.L0043DBB0:
/* 0043DBB0 892B0000 */  lwl   $t3, ($t1)
/* 0043DBB4 992B0003 */  lwr   $t3, 3($t1)
/* 0043DBB8 2529000C */  addiu $t1, $t1, 0xc
/* 0043DBBC 258C000C */  addiu $t4, $t4, 0xc
/* 0043DBC0 A98B004C */  swl   $t3, 0x4c($t4)
/* 0043DBC4 B98B004F */  swr   $t3, 0x4f($t4)
/* 0043DBC8 892AFFF8 */  lwl   $t2, -8($t1)
/* 0043DBCC 992AFFFB */  lwr   $t2, -5($t1)
/* 0043DBD0 A98A0050 */  swl   $t2, 0x50($t4)
/* 0043DBD4 B98A0053 */  swr   $t2, 0x53($t4)
/* 0043DBD8 892BFFFC */  lwl   $t3, -4($t1)
/* 0043DBDC 992BFFFF */  lwr   $t3, -1($t1)
/* 0043DBE0 A98B0054 */  swl   $t3, 0x54($t4)
/* 0043DBE4 152DFFF2 */  bne   $t1, $t5, .L0043DBB0
/* 0043DBE8 B98B0057 */   swr   $t3, 0x57($t4)
/* 0043DBEC 892B0000 */  lwl   $t3, ($t1)
/* 0043DBF0 992B0003 */  lwr   $t3, 3($t1)
/* 0043DBF4 A98B0058 */  swl   $t3, 0x58($t4)
/* 0043DBF8 B98B005B */  swr   $t3, 0x5b($t4)
/* 0043DBFC 892A0004 */  lwl   $t2, 4($t1)
/* 0043DC00 992A0007 */  lwr   $t2, 7($t1)
/* 0043DC04 A98A005C */  swl   $t2, 0x5c($t4)
/* 0043DC08 B98A005F */  swr   $t2, 0x5f($t4)
/* 0043DC0C 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 0043DC10 8FA7000C */  lw    $a3, 0xc($sp)
/* 0043DC14 8FA60008 */  lw    $a2, 8($sp)
/* 0043DC18 0320F809 */  jalr  $t9
/* 0043DC1C 00000000 */   nop   
/* 0043DC20 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 0043DC24 93A200BF */  lbu   $v0, 0xbf($sp)
.L0043DC28:
/* 0043DC28 8FBF00B4 */  lw    $ra, 0xb4($sp)
/* 0043DC2C 27BD00C0 */  addiu $sp, $sp, 0xc0
/* 0043DC30 03E00008 */  jr    $ra
/* 0043DC34 00000000 */   nop   
    .type get_data_area, @function
    .size get_data_area, .-get_data_area
    .end get_data_area

glabel get_sym_type
    .ent get_sym_type
    # 0043DFB0 gen_sym
/* 0043DC38 90820000 */  lbu   $v0, ($a0)
/* 0043DC3C 24010053 */  li    $at, 83
/* 0043DC40 10410003 */  beq   $v0, $at, .L0043DC50
/* 0043DC44 24010027 */   li    $at, 39
/* 0043DC48 54410004 */  bnel  $v0, $at, .L0043DC5C
/* 0043DC4C 2401002A */   li    $at, 42
.L0043DC50:
/* 0043DC50 03E00008 */  jr    $ra
/* 0043DC54 24020004 */   li    $v0, 4

/* 0043DC58 2401002A */  li    $at, 42
.L0043DC5C:
/* 0043DC5C 54410004 */  bnel  $v0, $at, .L0043DC70
/* 0043DC60 24010098 */   li    $at, 152
/* 0043DC64 03E00008 */  jr    $ra
/* 0043DC68 24020002 */   li    $v0, 2

/* 0043DC6C 24010098 */  li    $at, 152
.L0043DC70:
/* 0043DC70 54410004 */  bnel  $v0, $at, .L0043DC84
/* 0043DC74 24010099 */   li    $at, 153
/* 0043DC78 03E00008 */  jr    $ra
/* 0043DC7C 24020003 */   li    $v0, 3

/* 0043DC80 24010099 */  li    $at, 153
.L0043DC84:
/* 0043DC84 54410004 */  bnel  $v0, $at, .L0043DC98
/* 0043DC88 24010096 */   li    $at, 150
/* 0043DC8C 03E00008 */  jr    $ra
/* 0043DC90 24020006 */   li    $v0, 6

/* 0043DC94 24010096 */  li    $at, 150
.L0043DC98:
/* 0043DC98 54410004 */  bnel  $v0, $at, .L0043DCAC
/* 0043DC9C 24010024 */   li    $at, 36
/* 0043DCA0 03E00008 */  jr    $ra
/* 0043DCA4 24020005 */   li    $v0, 5

/* 0043DCA8 24010024 */  li    $at, 36
.L0043DCAC:
/* 0043DCAC 54410004 */  bnel  $v0, $at, .L0043DCC0
/* 0043DCB0 24010006 */   li    $at, 6
/* 0043DCB4 03E00008 */  jr    $ra
/* 0043DCB8 24020001 */   li    $v0, 1

/* 0043DCBC 24010006 */  li    $at, 6
.L0043DCC0:
/* 0043DCC0 54410004 */  bnel  $v0, $at, .L0043DCD4
/* 0043DCC4 24010014 */   li    $at, 20
/* 0043DCC8 03E00008 */  jr    $ra
/* 0043DCCC 24020008 */   li    $v0, 8

/* 0043DCD0 24010014 */  li    $at, 20
.L0043DCD4:
/* 0043DCD4 54410004 */  bnel  $v0, $at, .L0043DCE8
/* 0043DCD8 24010021 */   li    $at, 33
/* 0043DCDC 03E00008 */  jr    $ra
/* 0043DCE0 24020007 */   li    $v0, 7

/* 0043DCE4 24010021 */  li    $at, 33
.L0043DCE8:
/* 0043DCE8 54410004 */  bnel  $v0, $at, .L0043DCFC
/* 0043DCEC 00001025 */   move  $v0, $zero
/* 0043DCF0 03E00008 */  jr    $ra
/* 0043DCF4 24020009 */   li    $v0, 9

/* 0043DCF8 00001025 */  move  $v0, $zero
.L0043DCFC:
/* 0043DCFC 03E00008 */  jr    $ra
/* 0043DD00 00000000 */   nop   
    .type get_sym_type, @function
    .size get_sym_type, .-get_sym_type
    .end get_sym_type

glabel make_new_sym
    .ent make_new_sym
    # 0043DFB0 gen_sym
/* 0043DD04 3C1C0FBE */  .cpload $t9
/* 0043DD08 279C1D4C */  
/* 0043DD0C 0399E021 */  
/* 0043DD10 27BDFF40 */  addiu $sp, $sp, -0xc0
/* 0043DD14 8F9987E8 */  lw    $t9, %call16(new)($gp)
/* 0043DD18 AFBF00B4 */  sw    $ra, 0xb4($sp)
/* 0043DD1C AFA400C0 */  sw    $a0, 0xc0($sp)
/* 0043DD20 AFA500C4 */  sw    $a1, 0xc4($sp)
/* 0043DD24 AFBC00B0 */  sw    $gp, 0xb0($sp)
/* 0043DD28 AFA600C8 */  sw    $a2, 0xc8($sp)
/* 0043DD2C 24050001 */  li    $a1, 1
/* 0043DD30 0320F809 */  jalr  $t9
/* 0043DD34 2404002C */   li    $a0, 44
/* 0043DD38 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 0043DD3C 14400041 */  bnez  $v0, .L0043DE44
/* 0043DD40 00401825 */   move  $v1, $v0
/* 0043DD44 8F8E8038 */  lw    $t6, %got(RO_1000C6D0)($gp)
/* 0043DD48 24040004 */  li    $a0, 4
/* 0043DD4C 240500AE */  li    $a1, 174
/* 0043DD50 25CEC6D0 */  addiu $t6, %lo(RO_1000C6D0) # addiu $t6, $t6, -0x3930
/* 0043DD54 25C80048 */  addiu $t0, $t6, 0x48
/* 0043DD58 03A0C825 */  move  $t9, $sp
.L0043DD5C:
/* 0043DD5C 89D80000 */  lwl   $t8, ($t6)
/* 0043DD60 99D80003 */  lwr   $t8, 3($t6)
/* 0043DD64 25CE000C */  addiu $t6, $t6, 0xc
/* 0043DD68 2739000C */  addiu $t9, $t9, 0xc
/* 0043DD6C AB38FFFC */  swl   $t8, -4($t9)
/* 0043DD70 BB38FFFF */  swr   $t8, -1($t9)
/* 0043DD74 89CFFFF8 */  lwl   $t7, -8($t6)
/* 0043DD78 99CFFFFB */  lwr   $t7, -5($t6)
/* 0043DD7C AB2F0000 */  swl   $t7, ($t9)
/* 0043DD80 BB2F0003 */  swr   $t7, 3($t9)
/* 0043DD84 89D8FFFC */  lwl   $t8, -4($t6)
/* 0043DD88 99D8FFFF */  lwr   $t8, -1($t6)
/* 0043DD8C AB380004 */  swl   $t8, 4($t9)
/* 0043DD90 15C8FFF2 */  bne   $t6, $t0, .L0043DD5C
/* 0043DD94 BB380007 */   swr   $t8, 7($t9)
/* 0043DD98 89D80000 */  lwl   $t8, ($t6)
/* 0043DD9C 99D80003 */  lwr   $t8, 3($t6)
/* 0043DDA0 8F898038 */  lw    $t1, %got(RO_1000C680)($gp)
/* 0043DDA4 03A06025 */  move  $t4, $sp
/* 0043DDA8 AB380008 */  swl   $t8, 8($t9)
/* 0043DDAC BB38000B */  swr   $t8, 0xb($t9)
/* 0043DDB0 89CF0004 */  lwl   $t7, 4($t6)
/* 0043DDB4 99CF0007 */  lwr   $t7, 7($t6)
/* 0043DDB8 2529C680 */  addiu $t1, %lo(RO_1000C680) # addiu $t1, $t1, -0x3980
/* 0043DDBC 252D0048 */  addiu $t5, $t1, 0x48
/* 0043DDC0 AB2F000C */  swl   $t7, 0xc($t9)
/* 0043DDC4 BB2F000F */  swr   $t7, 0xf($t9)
.L0043DDC8:
/* 0043DDC8 892B0000 */  lwl   $t3, ($t1)
/* 0043DDCC 992B0003 */  lwr   $t3, 3($t1)
/* 0043DDD0 2529000C */  addiu $t1, $t1, 0xc
/* 0043DDD4 258C000C */  addiu $t4, $t4, 0xc
/* 0043DDD8 A98B004C */  swl   $t3, 0x4c($t4)
/* 0043DDDC B98B004F */  swr   $t3, 0x4f($t4)
/* 0043DDE0 892AFFF8 */  lwl   $t2, -8($t1)
/* 0043DDE4 992AFFFB */  lwr   $t2, -5($t1)
/* 0043DDE8 A98A0050 */  swl   $t2, 0x50($t4)
/* 0043DDEC B98A0053 */  swr   $t2, 0x53($t4)
/* 0043DDF0 892BFFFC */  lwl   $t3, -4($t1)
/* 0043DDF4 992BFFFF */  lwr   $t3, -1($t1)
/* 0043DDF8 A98B0054 */  swl   $t3, 0x54($t4)
/* 0043DDFC 152DFFF2 */  bne   $t1, $t5, .L0043DDC8
/* 0043DE00 B98B0057 */   swr   $t3, 0x57($t4)
/* 0043DE04 892B0000 */  lwl   $t3, ($t1)
/* 0043DE08 992B0003 */  lwr   $t3, 3($t1)
/* 0043DE0C A98B0058 */  swl   $t3, 0x58($t4)
/* 0043DE10 B98B005B */  swr   $t3, 0x5b($t4)
/* 0043DE14 892A0004 */  lwl   $t2, 4($t1)
/* 0043DE18 992A0007 */  lwr   $t2, 7($t1)
/* 0043DE1C A98A005C */  swl   $t2, 0x5c($t4)
/* 0043DE20 B98A005F */  swr   $t2, 0x5f($t4)
/* 0043DE24 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 0043DE28 8FA7000C */  lw    $a3, 0xc($sp)
/* 0043DE2C 8FA60008 */  lw    $a2, 8($sp)
/* 0043DE30 0320F809 */  jalr  $t9
/* 0043DE34 AFA300B8 */   sw    $v1, 0xb8($sp)
/* 0043DE38 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 0043DE3C 1000001F */  b     .L0043DEBC
/* 0043DE40 8FA200B8 */   lw    $v0, 0xb8($sp)
.L0043DE44:
/* 0043DE44 8F998548 */  lw    $t9, %call16(sym_hash)($gp)
/* 0043DE48 8FA400C0 */  lw    $a0, 0xc0($sp)
/* 0043DE4C AFA300B8 */  sw    $v1, 0xb8($sp)
/* 0043DE50 0320F809 */  jalr  $t9
/* 0043DE54 00000000 */   nop   
/* 0043DE58 8FA300B8 */  lw    $v1, 0xb8($sp)
/* 0043DE5C 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 0043DE60 304800FF */  andi  $t0, $v0, 0xff
/* 0043DE64 00087080 */  sll   $t6, $t0, 2
/* 0043DE68 8F998BD8 */  lw     $t9, %got(sym_hash_tab)($gp)
/* 0043DE6C 93B800C7 */  lbu   $t8, 0xc7($sp)
/* 0043DE70 8FAD00C0 */  lw    $t5, 0xc0($sp)
/* 0043DE74 01D92021 */  addu  $a0, $t6, $t9
/* 0043DE78 8C8F0000 */  lw    $t7, ($a0)
/* 0043DE7C 93A900CB */  lbu   $t1, 0xcb($sp)
/* 0043DE80 A060000D */  sb    $zero, 0xd($v1)
/* 0043DE84 A060000E */  sb    $zero, 0xe($v1)
/* 0043DE88 AC600010 */  sw    $zero, 0x10($v1)
/* 0043DE8C AC600014 */  sw    $zero, 0x14($v1)
/* 0043DE90 AC60001C */  sw    $zero, 0x1c($v1)
/* 0043DE94 AC600020 */  sw    $zero, 0x20($v1)
/* 0043DE98 AC600024 */  sw    $zero, 0x24($v1)
/* 0043DE9C AC600028 */  sw    $zero, 0x28($v1)
/* 0043DEA0 AC600004 */  sw    $zero, 4($v1)
/* 0043DEA4 AC830000 */  sw    $v1, ($a0)
/* 0043DEA8 00601025 */  move  $v0, $v1
/* 0043DEAC A078000C */  sb    $t8, 0xc($v1)
/* 0043DEB0 AC6D0000 */  sw    $t5, ($v1)
/* 0043DEB4 AC6F0008 */  sw    $t7, 8($v1)
/* 0043DEB8 A0690018 */  sb    $t1, 0x18($v1)
.L0043DEBC:
/* 0043DEBC 8FBF00B4 */  lw    $ra, 0xb4($sp)
/* 0043DEC0 27BD00C0 */  addiu $sp, $sp, 0xc0
/* 0043DEC4 03E00008 */  jr    $ra
/* 0043DEC8 00000000 */   nop   
    .type make_new_sym, @function
    .size make_new_sym, .-make_new_sym
    .end make_new_sym

glabel change_sym_type
    .ent change_sym_type
    # 0043DFB0 gen_sym
/* 0043DECC 24010001 */  li    $at, 1
/* 0043DED0 AFA40000 */  sw    $a0, ($sp)
/* 0043DED4 10810007 */  beq   $a0, $at, .L0043DEF4
/* 0043DED8 AFA50004 */   sw    $a1, 4($sp)
/* 0043DEDC 24010004 */  li    $at, 4
/* 0043DEE0 14810006 */  bne   $a0, $at, .L0043DEFC
/* 0043DEE4 00801025 */   move  $v0, $a0
/* 0043DEE8 24010007 */  li    $at, 7
/* 0043DEEC 14A10003 */  bne   $a1, $at, .L0043DEFC
/* 0043DEF0 00000000 */   nop   
.L0043DEF4:
/* 0043DEF4 03E00008 */  jr    $ra
/* 0043DEF8 00A01025 */   move  $v0, $a1

.L0043DEFC:
/* 0043DEFC 03E00008 */  jr    $ra
/* 0043DF00 00000000 */   nop   
    .type change_sym_type, @function
    .size change_sym_type, .-change_sym_type
    .end change_sym_type

glabel lookup_sym
    .ent lookup_sym
    # 0043DFB0 gen_sym
    # 0043E730 set_lex_level
    # 0043E784 set_size
    # 0043F9E4 add_init
    # 00440800 output_entry_point
    # 004409C0 change_label_number
    # 00440B04 set_mtag
    # 00440B60 get_mtag
    # 00440BAC get_sym_kind
/* 0043DF04 3C1C0FBE */  .cpload $t9
/* 0043DF08 279C1B4C */  
/* 0043DF0C 0399E021 */  
/* 0043DF10 8F998548 */  lw    $t9, %call16(sym_hash)($gp)
/* 0043DF14 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0043DF18 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0043DF1C AFBC0018 */  sw    $gp, 0x18($sp)
/* 0043DF20 0320F809 */  jalr  $t9
/* 0043DF24 AFA40020 */   sw    $a0, 0x20($sp)
/* 0043DF28 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043DF2C 304E00FF */  andi  $t6, $v0, 0xff
/* 0043DF30 000E7880 */  sll   $t7, $t6, 2
/* 0043DF34 8F988BD8 */  lw     $t8, %got(sym_hash_tab)($gp)
/* 0043DF38 8FA40020 */  lw    $a0, 0x20($sp)
/* 0043DF3C 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0043DF40 01F8C821 */  addu  $t9, $t7, $t8
/* 0043DF44 8F230000 */  lw    $v1, ($t9)
/* 0043DF48 5060000A */  beql  $v1, $zero, .L0043DF74
/* 0043DF4C 00601025 */   move  $v0, $v1
/* 0043DF50 8C680000 */  lw    $t0, ($v1)
.L0043DF54:
/* 0043DF54 54880004 */  bnel  $a0, $t0, .L0043DF68
/* 0043DF58 8C630008 */   lw    $v1, 8($v1)
/* 0043DF5C 10000005 */  b     .L0043DF74
/* 0043DF60 00601025 */   move  $v0, $v1
/* 0043DF64 8C630008 */  lw    $v1, 8($v1)
.L0043DF68:
/* 0043DF68 5460FFFA */  bnel  $v1, $zero, .L0043DF54
/* 0043DF6C 8C680000 */   lw    $t0, ($v1)
/* 0043DF70 00601025 */  move  $v0, $v1
.L0043DF74:
/* 0043DF74 03E00008 */  jr    $ra
/* 0043DF78 27BD0020 */   addiu $sp, $sp, 0x20
    .type lookup_sym, @function
    .size lookup_sym, .-lookup_sym
    .end lookup_sym

glabel clear_sym_tab
    .ent clear_sym_tab
    # 0044BF18 main
/* 0043DF7C 3C1C0FBE */  .cpload $t9
/* 0043DF80 279C1AD4 */  
/* 0043DF84 0399E021 */  
/* 0043DF88 8F838BD8 */  lw     $v1, %got(sym_hash_tab)($gp)
/* 0043DF8C 24620400 */  addiu $v0, $v1, 0x400
.L0043DF90:
/* 0043DF90 24630010 */  addiu $v1, $v1, 0x10
/* 0043DF94 AC60FFF0 */  sw    $zero, -0x10($v1)
/* 0043DF98 AC60FFF4 */  sw    $zero, -0xc($v1)
/* 0043DF9C AC60FFF8 */  sw    $zero, -8($v1)
/* 0043DFA0 1462FFFB */  bne   $v1, $v0, .L0043DF90
/* 0043DFA4 AC60FFFC */   sw    $zero, -4($v1)
/* 0043DFA8 03E00008 */  jr    $ra
/* 0043DFAC 00000000 */   nop   
    .type clear_sym_tab, @function
    .size clear_sym_tab, .-clear_sym_tab
    .end clear_sym_tab

glabel gen_sym
    .ent gen_sym
    # 0040F4C8 build_tree
/* 0043DFB0 3C1C0FBE */  .cpload $t9
/* 0043DFB4 279C1AA0 */  
/* 0043DFB8 0399E021 */  
/* 0043DFBC 27BDFF38 */  addiu $sp, $sp, -0xc8
/* 0043DFC0 AFBF00B4 */  sw    $ra, 0xb4($sp)
/* 0043DFC4 AFBC00B0 */  sw    $gp, 0xb0($sp)
/* 0043DFC8 AFB000AC */  sw    $s0, 0xac($sp)
/* 0043DFCC 90820000 */  lbu   $v0, ($a0)
/* 0043DFD0 00808025 */  move  $s0, $a0
/* 0043DFD4 2C41002C */  sltiu $at, $v0, 0x2c
/* 0043DFD8 142001C0 */  bnez  $at, .L0043E6DC
/* 0043DFDC 24010053 */   li    $at, 83
/* 0043DFE0 104100BE */  beq   $v0, $at, .L0043E2DC
/* 0043DFE4 244EFF6A */   addiu $t6, $v0, -0x96
/* 0043DFE8 2DC10004 */  sltiu $at, $t6, 4
/* 0043DFEC 1020017C */  beqz  $at, .L0043E5E0
/* 0043DFF0 00000000 */   nop   
/* 0043DFF4 8F818038 */  lw    $at, %got(jtbl_1000C9CC)($gp)
/* 0043DFF8 000E7080 */  sll   $t6, $t6, 2
/* 0043DFFC 002E0821 */  addu  $at, $at, $t6
/* 0043E000 8C2EC9CC */  lw    $t6, %lo(jtbl_1000C9CC)($at)
/* 0043E004 01DC7021 */  addu  $t6, $t6, $gp
/* 0043E008 01C00008 */  jr    $t6
/* 0043E00C 00000000 */   nop   
.L0043E010:
/* 0043E010 8E0F000C */  lw    $t7, 0xc($s0)
/* 0043E014 24070009 */  li    $a3, 9
/* 0043E018 31F80001 */  andi  $t8, $t7, 1
/* 0043E01C 13000003 */  beqz  $t8, .L0043E02C
/* 0043E020 00000000 */   nop   
/* 0043E024 10000001 */  b     .L0043E02C
/* 0043E028 2407000A */   li    $a3, 10
.L0043E02C:
/* 0043E02C 8F998554 */  lw    $t9, %call16(make_new_sym)($gp)
/* 0043E030 8E040004 */  lw    $a0, 4($s0)
/* 0043E034 00E02825 */  move  $a1, $a3
/* 0043E038 0320F809 */  jalr  $t9
/* 0043E03C 00003025 */   move  $a2, $zero
/* 0043E040 100001B6 */  b     .L0043E71C
/* 0043E044 8FBC00B0 */   lw    $gp, 0xb0($sp)
/* 0043E048 96190002 */  lhu   $t9, 2($s0)
.L0043E04C:
/* 0043E04C 24030001 */  li    $v1, 1
/* 0043E050 33280001 */  andi  $t0, $t9, 1
/* 0043E054 1468000B */  bne   $v1, $t0, .L0043E084
/* 0043E058 00000000 */   nop   
/* 0043E05C 8E090008 */  lw    $t1, 8($s0)
/* 0043E060 15200008 */  bnez  $t1, .L0043E084
/* 0043E064 00000000 */   nop   
/* 0043E068 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 0043E06C 24040012 */  li    $a0, 18
/* 0043E070 8E050004 */  lw    $a1, 4($s0)
/* 0043E074 0320F809 */  jalr  $t9
/* 0043E078 00000000 */   nop   
/* 0043E07C 100001A7 */  b     .L0043E71C
/* 0043E080 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L0043E084:
/* 0043E084 8F99855C */  lw    $t9, %call16(lookup_sym)($gp)
/* 0043E088 8E040008 */  lw    $a0, 8($s0)
/* 0043E08C 0320F809 */  jalr  $t9
/* 0043E090 00000000 */   nop   
/* 0043E094 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 0043E098 14400040 */  bnez  $v0, .L0043E19C
/* 0043E09C 00401825 */   move  $v1, $v0
/* 0043E0A0 8F8A8038 */  lw    $t2, %got(RO_1000C950)($gp)
/* 0043E0A4 24040004 */  li    $a0, 4
/* 0043E0A8 24050101 */  li    $a1, 257
/* 0043E0AC 254AC950 */  addiu $t2, %lo(RO_1000C950) # addiu $t2, $t2, -0x36b0
/* 0043E0B0 254E0048 */  addiu $t6, $t2, 0x48
/* 0043E0B4 03A06825 */  move  $t5, $sp
.L0043E0B8:
/* 0043E0B8 894C0000 */  lwl   $t4, ($t2)
/* 0043E0BC 994C0003 */  lwr   $t4, 3($t2)
/* 0043E0C0 254A000C */  addiu $t2, $t2, 0xc
/* 0043E0C4 25AD000C */  addiu $t5, $t5, 0xc
/* 0043E0C8 A9ACFFFC */  swl   $t4, -4($t5)
/* 0043E0CC B9ACFFFF */  swr   $t4, -1($t5)
/* 0043E0D0 894BFFF8 */  lwl   $t3, -8($t2)
/* 0043E0D4 994BFFFB */  lwr   $t3, -5($t2)
/* 0043E0D8 A9AB0000 */  swl   $t3, ($t5)
/* 0043E0DC B9AB0003 */  swr   $t3, 3($t5)
/* 0043E0E0 894CFFFC */  lwl   $t4, -4($t2)
/* 0043E0E4 994CFFFF */  lwr   $t4, -1($t2)
/* 0043E0E8 A9AC0004 */  swl   $t4, 4($t5)
/* 0043E0EC 154EFFF2 */  bne   $t2, $t6, .L0043E0B8
/* 0043E0F0 B9AC0007 */   swr   $t4, 7($t5)
/* 0043E0F4 894C0000 */  lwl   $t4, ($t2)
/* 0043E0F8 994C0003 */  lwr   $t4, 3($t2)
/* 0043E0FC 8F8F8038 */  lw    $t7, %got(RO_1000C900)($gp)
/* 0043E100 03A04025 */  move  $t0, $sp
/* 0043E104 A9AC0008 */  swl   $t4, 8($t5)
/* 0043E108 B9AC000B */  swr   $t4, 0xb($t5)
/* 0043E10C 894B0004 */  lwl   $t3, 4($t2)
/* 0043E110 994B0007 */  lwr   $t3, 7($t2)
/* 0043E114 25EFC900 */  addiu $t7, %lo(RO_1000C900) # addiu $t7, $t7, -0x3700
/* 0043E118 25E90048 */  addiu $t1, $t7, 0x48
/* 0043E11C A9AB000C */  swl   $t3, 0xc($t5)
/* 0043E120 B9AB000F */  swr   $t3, 0xf($t5)
.L0043E124:
/* 0043E124 89F90000 */  lwl   $t9, ($t7)
/* 0043E128 99F90003 */  lwr   $t9, 3($t7)
/* 0043E12C 25EF000C */  addiu $t7, $t7, 0xc
/* 0043E130 2508000C */  addiu $t0, $t0, 0xc
/* 0043E134 A919004C */  swl   $t9, 0x4c($t0)
/* 0043E138 B919004F */  swr   $t9, 0x4f($t0)
/* 0043E13C 89F8FFF8 */  lwl   $t8, -8($t7)
/* 0043E140 99F8FFFB */  lwr   $t8, -5($t7)
/* 0043E144 A9180050 */  swl   $t8, 0x50($t0)
/* 0043E148 B9180053 */  swr   $t8, 0x53($t0)
/* 0043E14C 89F9FFFC */  lwl   $t9, -4($t7)
/* 0043E150 99F9FFFF */  lwr   $t9, -1($t7)
/* 0043E154 A9190054 */  swl   $t9, 0x54($t0)
/* 0043E158 15E9FFF2 */  bne   $t7, $t1, .L0043E124
/* 0043E15C B9190057 */   swr   $t9, 0x57($t0)
/* 0043E160 89F90000 */  lwl   $t9, ($t7)
/* 0043E164 99F90003 */  lwr   $t9, 3($t7)
/* 0043E168 A9190058 */  swl   $t9, 0x58($t0)
/* 0043E16C B919005B */  swr   $t9, 0x5b($t0)
/* 0043E170 89F80004 */  lwl   $t8, 4($t7)
/* 0043E174 99F80007 */  lwr   $t8, 7($t7)
/* 0043E178 A918005C */  swl   $t8, 0x5c($t0)
/* 0043E17C B918005F */  swr   $t8, 0x5f($t0)
/* 0043E180 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 0043E184 8FA7000C */  lw    $a3, 0xc($sp)
/* 0043E188 8FA60008 */  lw    $a2, 8($sp)
/* 0043E18C 0320F809 */  jalr  $t9
/* 0043E190 00000000 */   nop   
/* 0043E194 10000161 */  b     .L0043E71C
/* 0043E198 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L0043E19C:
/* 0043E19C 8F9987E8 */  lw    $t9, %call16(new)($gp)
/* 0043E1A0 2404000C */  li    $a0, 12
/* 0043E1A4 00002825 */  move  $a1, $zero
/* 0043E1A8 0320F809 */  jalr  $t9
/* 0043E1AC AFA300C4 */   sw    $v1, 0xc4($sp)
/* 0043E1B0 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 0043E1B4 14400040 */  bnez  $v0, .L0043E2B8
/* 0043E1B8 8FA300C4 */   lw    $v1, 0xc4($sp)
/* 0043E1BC 8F8E8038 */  lw    $t6, %got(RO_1000C8B0)($gp)
/* 0043E1C0 24040004 */  li    $a0, 4
/* 0043E1C4 24050106 */  li    $a1, 262
/* 0043E1C8 25CEC8B0 */  addiu $t6, %lo(RO_1000C8B0) # addiu $t6, $t6, -0x3750
/* 0043E1CC 25CC0048 */  addiu $t4, $t6, 0x48
/* 0043E1D0 03A05825 */  move  $t3, $sp
.L0043E1D4:
/* 0043E1D4 89CD0000 */  lwl   $t5, ($t6)
/* 0043E1D8 99CD0003 */  lwr   $t5, 3($t6)
/* 0043E1DC 25CE000C */  addiu $t6, $t6, 0xc
/* 0043E1E0 256B000C */  addiu $t3, $t3, 0xc
/* 0043E1E4 A96DFFFC */  swl   $t5, -4($t3)
/* 0043E1E8 B96DFFFF */  swr   $t5, -1($t3)
/* 0043E1EC 89CAFFF8 */  lwl   $t2, -8($t6)
/* 0043E1F0 99CAFFFB */  lwr   $t2, -5($t6)
/* 0043E1F4 A96A0000 */  swl   $t2, ($t3)
/* 0043E1F8 B96A0003 */  swr   $t2, 3($t3)
/* 0043E1FC 89CDFFFC */  lwl   $t5, -4($t6)
/* 0043E200 99CDFFFF */  lwr   $t5, -1($t6)
/* 0043E204 A96D0004 */  swl   $t5, 4($t3)
/* 0043E208 15CCFFF2 */  bne   $t6, $t4, .L0043E1D4
/* 0043E20C B96D0007 */   swr   $t5, 7($t3)
/* 0043E210 89CD0000 */  lwl   $t5, ($t6)
/* 0043E214 99CD0003 */  lwr   $t5, 3($t6)
/* 0043E218 8F898038 */  lw    $t1, %got(RO_1000C860)($gp)
/* 0043E21C 03A0C025 */  move  $t8, $sp
/* 0043E220 A96D0008 */  swl   $t5, 8($t3)
/* 0043E224 B96D000B */  swr   $t5, 0xb($t3)
/* 0043E228 89CA0004 */  lwl   $t2, 4($t6)
/* 0043E22C 99CA0007 */  lwr   $t2, 7($t6)
/* 0043E230 2529C860 */  addiu $t1, %lo(RO_1000C860) # addiu $t1, $t1, -0x37a0
/* 0043E234 25390048 */  addiu $t9, $t1, 0x48
/* 0043E238 A96A000C */  swl   $t2, 0xc($t3)
/* 0043E23C B96A000F */  swr   $t2, 0xf($t3)
.L0043E240:
/* 0043E240 89280000 */  lwl   $t0, ($t1)
/* 0043E244 99280003 */  lwr   $t0, 3($t1)
/* 0043E248 2529000C */  addiu $t1, $t1, 0xc
/* 0043E24C 2718000C */  addiu $t8, $t8, 0xc
/* 0043E250 AB08004C */  swl   $t0, 0x4c($t8)
/* 0043E254 BB08004F */  swr   $t0, 0x4f($t8)
/* 0043E258 892FFFF8 */  lwl   $t7, -8($t1)
/* 0043E25C 992FFFFB */  lwr   $t7, -5($t1)
/* 0043E260 AB0F0050 */  swl   $t7, 0x50($t8)
/* 0043E264 BB0F0053 */  swr   $t7, 0x53($t8)
/* 0043E268 8928FFFC */  lwl   $t0, -4($t1)
/* 0043E26C 9928FFFF */  lwr   $t0, -1($t1)
/* 0043E270 AB080054 */  swl   $t0, 0x54($t8)
/* 0043E274 1539FFF2 */  bne   $t1, $t9, .L0043E240
/* 0043E278 BB080057 */   swr   $t0, 0x57($t8)
/* 0043E27C 89280000 */  lwl   $t0, ($t1)
/* 0043E280 99280003 */  lwr   $t0, 3($t1)
/* 0043E284 AB080058 */  swl   $t0, 0x58($t8)
/* 0043E288 BB08005B */  swr   $t0, 0x5b($t8)
/* 0043E28C 892F0004 */  lwl   $t7, 4($t1)
/* 0043E290 992F0007 */  lwr   $t7, 7($t1)
/* 0043E294 AB0F005C */  swl   $t7, 0x5c($t8)
/* 0043E298 BB0F005F */  swr   $t7, 0x5f($t8)
/* 0043E29C 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 0043E2A0 8FA7000C */  lw    $a3, 0xc($sp)
/* 0043E2A4 8FA60008 */  lw    $a2, 8($sp)
/* 0043E2A8 0320F809 */  jalr  $t9
/* 0043E2AC 00000000 */   nop   
/* 0043E2B0 1000011A */  b     .L0043E71C
/* 0043E2B4 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L0043E2B8:
/* 0043E2B8 8E0C0004 */  lw    $t4, 4($s0)
/* 0043E2BC AC4C0000 */  sw    $t4, ($v0)
/* 0043E2C0 960E0002 */  lhu   $t6, 2($s0)
/* 0043E2C4 31CB0001 */  andi  $t3, $t6, 1
/* 0043E2C8 AC4B0004 */  sw    $t3, 4($v0)
/* 0043E2CC 8C6A0028 */  lw    $t2, 0x28($v1)
/* 0043E2D0 AC4A0008 */  sw    $t2, 8($v0)
/* 0043E2D4 10000111 */  b     .L0043E71C
/* 0043E2D8 AC620028 */   sw    $v0, 0x28($v1)
.L0043E2DC:
/* 0043E2DC 960D0002 */  lhu   $t5, 2($s0)
/* 0043E2E0 241900F4 */  li    $t9, 244
/* 0043E2E4 01B902B0 */  tge   $t5, $t9, 0xa
/* 0043E2E8 8F99855C */  lw    $t9, %call16(lookup_sym)($gp)
/* 0043E2EC 8E040004 */  lw    $a0, 4($s0)
/* 0043E2F0 0320F809 */  jalr  $t9
/* 0043E2F4 00000000 */   nop   
/* 0043E2F8 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 0043E2FC 02002025 */  move  $a0, $s0
/* 0043E300 AFA200C4 */  sw    $v0, 0xc4($sp)
/* 0043E304 8F998550 */  lw    $t9, %call16(get_sym_type)($gp)
/* 0043E308 0320F809 */  jalr  $t9
/* 0043E30C 00000000 */   nop   
/* 0043E310 8FA300C4 */  lw    $v1, 0xc4($sp)
/* 0043E314 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 0043E318 304700FF */  andi  $a3, $v0, 0xff
/* 0043E31C 14600026 */  bnez  $v1, .L0043E3B8
/* 0043E320 00000000 */   nop   
/* 0043E324 8F99854C */  lw    $t9, %call16(get_data_area)($gp)
/* 0043E328 02002025 */  move  $a0, $s0
/* 0043E32C A3A700BF */  sb    $a3, 0xbf($sp)
/* 0043E330 0320F809 */  jalr  $t9
/* 0043E334 00000000 */   nop   
/* 0043E338 93A700BF */  lbu   $a3, 0xbf($sp)
/* 0043E33C 24030001 */  li    $v1, 1
/* 0043E340 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 0043E344 14E30004 */  bne   $a3, $v1, .L0043E358
/* 0043E348 304600FF */   andi  $a2, $v0, 0xff
/* 0043E34C 304900FF */  andi  $t1, $v0, 0xff
/* 0043E350 512300F3 */  beql  $t1, $v1, .L0043E720
/* 0043E354 8FBF00B4 */   lw    $ra, 0xb4($sp)
.L0043E358:
/* 0043E358 8F998554 */  lw    $t9, %call16(make_new_sym)($gp)
/* 0043E35C 8E040004 */  lw    $a0, 4($s0)
/* 0043E360 00E02825 */  move  $a1, $a3
/* 0043E364 0320F809 */  jalr  $t9
/* 0043E368 00000000 */   nop   
/* 0043E36C 92040000 */  lbu   $a0, ($s0)
/* 0043E370 24010053 */  li    $at, 83
/* 0043E374 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 0043E378 10810006 */  beq   $a0, $at, .L0043E394
/* 0043E37C 00401825 */   move  $v1, $v0
/* 0043E380 24010027 */  li    $at, 39
/* 0043E384 10810003 */  beq   $a0, $at, .L0043E394
/* 0043E388 2401002A */   li    $at, 42
/* 0043E38C 5481001C */  bnel  $a0, $at, .L0043E400
/* 0043E390 8E020008 */   lw    $v0, 8($s0)
.L0043E394:
/* 0043E394 96180002 */  lhu   $t8, 2($s0)
/* 0043E398 2401FF0F */  li    $at, -241
/* 0043E39C 03017824 */  and   $t7, $t8, $at
/* 0043E3A0 2DE10002 */  sltiu $at, $t7, 2
/* 0043E3A4 10200002 */  beqz  $at, .L0043E3B0
/* 0043E3A8 00000000 */   nop   
/* 0043E3AC 240F0002 */  li    $t7, 2
.L0043E3B0:
/* 0043E3B0 10000012 */  b     .L0043E3FC
/* 0043E3B4 A04F000E */   sb    $t7, 0xe($v0)
.L0043E3B8:
/* 0043E3B8 8F998558 */  lw    $t9, %call16(change_sym_type)($gp)
/* 0043E3BC 00E02025 */  move  $a0, $a3
/* 0043E3C0 9065000C */  lbu   $a1, 0xc($v1)
/* 0043E3C4 0320F809 */  jalr  $t9
/* 0043E3C8 AFA300C4 */   sw    $v1, 0xc4($sp)
/* 0043E3CC 8FA300C4 */  lw    $v1, 0xc4($sp)
/* 0043E3D0 2401FF0F */  li    $at, -241
/* 0043E3D4 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 0043E3D8 A062000C */  sb    $v0, 0xc($v1)
/* 0043E3DC 96080002 */  lhu   $t0, 2($s0)
/* 0043E3E0 906E000E */  lbu   $t6, 0xe($v1)
/* 0043E3E4 01016024 */  and   $t4, $t0, $at
/* 0043E3E8 01CC082B */  sltu  $at, $t6, $t4
/* 0043E3EC 50200003 */  beql  $at, $zero, .L0043E3FC
/* 0043E3F0 A06E000E */   sb    $t6, 0xe($v1)
/* 0043E3F4 01807025 */  move  $t6, $t4
/* 0043E3F8 A06E000E */  sb    $t6, 0xe($v1)
.L0043E3FC:
/* 0043E3FC 8E020008 */  lw    $v0, 8($s0)
.L0043E400:
/* 0043E400 504000C7 */  beql  $v0, $zero, .L0043E720
/* 0043E404 8FBF00B4 */   lw    $ra, 0xb4($sp)
/* 0043E408 8C6B0010 */  lw    $t3, 0x10($v1)
/* 0043E40C 0162082A */  slt   $at, $t3, $v0
/* 0043E410 10200002 */  beqz  $at, .L0043E41C
/* 0043E414 00000000 */   nop   
/* 0043E418 00405825 */  move  $t3, $v0
.L0043E41C:
/* 0043E41C 100000BF */  b     .L0043E71C
/* 0043E420 AC6B0010 */   sw    $t3, 0x10($v1)
.L0043E424:
/* 0043E424 8F99855C */  lw    $t9, %call16(lookup_sym)($gp)
/* 0043E428 8E040004 */  lw    $a0, 4($s0)
/* 0043E42C 0320F809 */  jalr  $t9
/* 0043E430 00000000 */   nop   
/* 0043E434 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 0043E438 02002025 */  move  $a0, $s0
/* 0043E43C AFA200C4 */  sw    $v0, 0xc4($sp)
/* 0043E440 8F998550 */  lw    $t9, %call16(get_sym_type)($gp)
/* 0043E444 0320F809 */  jalr  $t9
/* 0043E448 00000000 */   nop   
/* 0043E44C 8FA300C4 */  lw    $v1, 0xc4($sp)
/* 0043E450 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 0043E454 304700FF */  andi  $a3, $v0, 0xff
/* 0043E458 14600008 */  bnez  $v1, .L0043E47C
/* 0043E45C 00000000 */   nop   
/* 0043E460 8F998554 */  lw    $t9, %call16(make_new_sym)($gp)
/* 0043E464 8E040004 */  lw    $a0, 4($s0)
/* 0043E468 00E02825 */  move  $a1, $a3
/* 0043E46C 0320F809 */  jalr  $t9
/* 0043E470 00003025 */   move  $a2, $zero
/* 0043E474 100000A9 */  b     .L0043E71C
/* 0043E478 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L0043E47C:
/* 0043E47C 8F998558 */  lw    $t9, %call16(change_sym_type)($gp)
/* 0043E480 00E02025 */  move  $a0, $a3
/* 0043E484 9065000C */  lbu   $a1, 0xc($v1)
/* 0043E488 0320F809 */  jalr  $t9
/* 0043E48C AFA300C4 */   sw    $v1, 0xc4($sp)
/* 0043E490 8FA300C4 */  lw    $v1, 0xc4($sp)
/* 0043E494 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 0043E498 100000A0 */  b     .L0043E71C
/* 0043E49C A062000C */   sb    $v0, 0xc($v1)
.L0043E4A0:
/* 0043E4A0 8F99855C */  lw    $t9, %call16(lookup_sym)($gp)
/* 0043E4A4 8E040004 */  lw    $a0, 4($s0)
/* 0043E4A8 0320F809 */  jalr  $t9
/* 0043E4AC 00000000 */   nop   
/* 0043E4B0 14400040 */  bnez  $v0, .L0043E5B4
/* 0043E4B4 8FBC00B0 */   lw    $gp, 0xb0($sp)
/* 0043E4B8 8F8A8038 */  lw    $t2, %got(RO_1000C810)($gp)
/* 0043E4BC 24040004 */  li    $a0, 4
/* 0043E4C0 24050136 */  li    $a1, 310
/* 0043E4C4 254AC810 */  addiu $t2, %lo(RO_1000C810) # addiu $t2, $t2, -0x37f0
/* 0043E4C8 25580048 */  addiu $t8, $t2, 0x48
/* 0043E4CC 03A04825 */  move  $t1, $sp
.L0043E4D0:
/* 0043E4D0 89590000 */  lwl   $t9, ($t2)
/* 0043E4D4 99590003 */  lwr   $t9, 3($t2)
/* 0043E4D8 254A000C */  addiu $t2, $t2, 0xc
/* 0043E4DC 2529000C */  addiu $t1, $t1, 0xc
/* 0043E4E0 A939FFFC */  swl   $t9, -4($t1)
/* 0043E4E4 B939FFFF */  swr   $t9, -1($t1)
/* 0043E4E8 894DFFF8 */  lwl   $t5, -8($t2)
/* 0043E4EC 994DFFFB */  lwr   $t5, -5($t2)
/* 0043E4F0 A92D0000 */  swl   $t5, ($t1)
/* 0043E4F4 B92D0003 */  swr   $t5, 3($t1)
/* 0043E4F8 8959FFFC */  lwl   $t9, -4($t2)
/* 0043E4FC 9959FFFF */  lwr   $t9, -1($t2)
/* 0043E500 A9390004 */  swl   $t9, 4($t1)
/* 0043E504 1558FFF2 */  bne   $t2, $t8, .L0043E4D0
/* 0043E508 B9390007 */   swr   $t9, 7($t1)
/* 0043E50C 89590000 */  lwl   $t9, ($t2)
/* 0043E510 99590003 */  lwr   $t9, 3($t2)
/* 0043E514 8F8F8038 */  lw    $t7, %got(RO_1000C7C0)($gp)
/* 0043E518 03A07025 */  move  $t6, $sp
/* 0043E51C A9390008 */  swl   $t9, 8($t1)
/* 0043E520 B939000B */  swr   $t9, 0xb($t1)
/* 0043E524 894D0004 */  lwl   $t5, 4($t2)
/* 0043E528 994D0007 */  lwr   $t5, 7($t2)
/* 0043E52C 25EFC7C0 */  addiu $t7, %lo(RO_1000C7C0) # addiu $t7, $t7, -0x3840
/* 0043E530 25EB0048 */  addiu $t3, $t7, 0x48
/* 0043E534 A92D000C */  swl   $t5, 0xc($t1)
/* 0043E538 B92D000F */  swr   $t5, 0xf($t1)
.L0043E53C:
/* 0043E53C 89EC0000 */  lwl   $t4, ($t7)
/* 0043E540 99EC0003 */  lwr   $t4, 3($t7)
/* 0043E544 25EF000C */  addiu $t7, $t7, 0xc
/* 0043E548 25CE000C */  addiu $t6, $t6, 0xc
/* 0043E54C A9CC004C */  swl   $t4, 0x4c($t6)
/* 0043E550 B9CC004F */  swr   $t4, 0x4f($t6)
/* 0043E554 89E8FFF8 */  lwl   $t0, -8($t7)
/* 0043E558 99E8FFFB */  lwr   $t0, -5($t7)
/* 0043E55C A9C80050 */  swl   $t0, 0x50($t6)
/* 0043E560 B9C80053 */  swr   $t0, 0x53($t6)
/* 0043E564 89ECFFFC */  lwl   $t4, -4($t7)
/* 0043E568 99ECFFFF */  lwr   $t4, -1($t7)
/* 0043E56C A9CC0054 */  swl   $t4, 0x54($t6)
/* 0043E570 15EBFFF2 */  bne   $t7, $t3, .L0043E53C
/* 0043E574 B9CC0057 */   swr   $t4, 0x57($t6)
/* 0043E578 89EC0000 */  lwl   $t4, ($t7)
/* 0043E57C 99EC0003 */  lwr   $t4, 3($t7)
/* 0043E580 A9CC0058 */  swl   $t4, 0x58($t6)
/* 0043E584 B9CC005B */  swr   $t4, 0x5b($t6)
/* 0043E588 89E80004 */  lwl   $t0, 4($t7)
/* 0043E58C 99E80007 */  lwr   $t0, 7($t7)
/* 0043E590 A9C8005C */  swl   $t0, 0x5c($t6)
/* 0043E594 B9C8005F */  swr   $t0, 0x5f($t6)
/* 0043E598 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 0043E59C 8FA7000C */  lw    $a3, 0xc($sp)
/* 0043E5A0 8FA60008 */  lw    $a2, 8($sp)
/* 0043E5A4 0320F809 */  jalr  $t9
/* 0043E5A8 00000000 */   nop   
/* 0043E5AC 1000005B */  b     .L0043E71C
/* 0043E5B0 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L0043E5B4:
/* 0043E5B4 8F98896C */  lw     $t8, %got(excpt)($gp)
/* 0043E5B8 93180000 */  lbu   $t8, ($t8)
/* 0043E5BC 53000058 */  beql  $t8, $zero, .L0043E720
/* 0043E5C0 8FBF00B4 */   lw    $ra, 0xb4($sp)
/* 0043E5C4 8F99828C */  lw    $t9, %call16(demit_edata)($gp)
/* 0043E5C8 8E040008 */  lw    $a0, 8($s0)
/* 0043E5CC 24050001 */  li    $a1, 1
/* 0043E5D0 0320F809 */  jalr  $t9
/* 0043E5D4 8E060004 */   lw    $a2, 4($s0)
/* 0043E5D8 10000050 */  b     .L0043E71C
/* 0043E5DC 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L0043E5E0:
/* 0043E5E0 8F8A8038 */  lw    $t2, %got(RO_1000C770)($gp)
/* 0043E5E4 24040004 */  li    $a0, 4
/* 0043E5E8 24050147 */  li    $a1, 327
/* 0043E5EC 254AC770 */  addiu $t2, %lo(RO_1000C770) # addiu $t2, $t2, -0x3890
/* 0043E5F0 254B0048 */  addiu $t3, $t2, 0x48
/* 0043E5F4 03A0C825 */  move  $t9, $sp
.L0043E5F8:
/* 0043E5F8 894D0000 */  lwl   $t5, ($t2)
/* 0043E5FC 994D0003 */  lwr   $t5, 3($t2)
/* 0043E600 254A000C */  addiu $t2, $t2, 0xc
/* 0043E604 2739000C */  addiu $t9, $t9, 0xc
/* 0043E608 AB2DFFFC */  swl   $t5, -4($t9)
/* 0043E60C BB2DFFFF */  swr   $t5, -1($t9)
/* 0043E610 8949FFF8 */  lwl   $t1, -8($t2)
/* 0043E614 9949FFFB */  lwr   $t1, -5($t2)
/* 0043E618 AB290000 */  swl   $t1, ($t9)
/* 0043E61C BB290003 */  swr   $t1, 3($t9)
/* 0043E620 894DFFFC */  lwl   $t5, -4($t2)
/* 0043E624 994DFFFF */  lwr   $t5, -1($t2)
/* 0043E628 AB2D0004 */  swl   $t5, 4($t9)
/* 0043E62C 154BFFF2 */  bne   $t2, $t3, .L0043E5F8
/* 0043E630 BB2D0007 */   swr   $t5, 7($t9)
/* 0043E634 894D0000 */  lwl   $t5, ($t2)
/* 0043E638 994D0003 */  lwr   $t5, 3($t2)
/* 0043E63C 8F8F8038 */  lw    $t7, %got(RO_1000C720)($gp)
/* 0043E640 03A06025 */  move  $t4, $sp
/* 0043E644 AB2D0008 */  swl   $t5, 8($t9)
/* 0043E648 BB2D000B */  swr   $t5, 0xb($t9)
/* 0043E64C 89490004 */  lwl   $t1, 4($t2)
/* 0043E650 99490007 */  lwr   $t1, 7($t2)
/* 0043E654 25EFC720 */  addiu $t7, %lo(RO_1000C720) # addiu $t7, $t7, -0x38e0
/* 0043E658 25F80048 */  addiu $t8, $t7, 0x48
/* 0043E65C AB29000C */  swl   $t1, 0xc($t9)
/* 0043E660 BB29000F */  swr   $t1, 0xf($t9)
.L0043E664:
/* 0043E664 89E80000 */  lwl   $t0, ($t7)
/* 0043E668 99E80003 */  lwr   $t0, 3($t7)
/* 0043E66C 25EF000C */  addiu $t7, $t7, 0xc
/* 0043E670 258C000C */  addiu $t4, $t4, 0xc
/* 0043E674 A988004C */  swl   $t0, 0x4c($t4)
/* 0043E678 B988004F */  swr   $t0, 0x4f($t4)
/* 0043E67C 89EEFFF8 */  lwl   $t6, -8($t7)
/* 0043E680 99EEFFFB */  lwr   $t6, -5($t7)
/* 0043E684 A98E0050 */  swl   $t6, 0x50($t4)
/* 0043E688 B98E0053 */  swr   $t6, 0x53($t4)
/* 0043E68C 89E8FFFC */  lwl   $t0, -4($t7)
/* 0043E690 99E8FFFF */  lwr   $t0, -1($t7)
/* 0043E694 A9880054 */  swl   $t0, 0x54($t4)
/* 0043E698 15F8FFF2 */  bne   $t7, $t8, .L0043E664
/* 0043E69C B9880057 */   swr   $t0, 0x57($t4)
/* 0043E6A0 89E80000 */  lwl   $t0, ($t7)
/* 0043E6A4 99E80003 */  lwr   $t0, 3($t7)
/* 0043E6A8 A9880058 */  swl   $t0, 0x58($t4)
/* 0043E6AC B988005B */  swr   $t0, 0x5b($t4)
/* 0043E6B0 89EE0004 */  lwl   $t6, 4($t7)
/* 0043E6B4 99EE0007 */  lwr   $t6, 7($t7)
/* 0043E6B8 A98E005C */  swl   $t6, 0x5c($t4)
/* 0043E6BC B98E005F */  swr   $t6, 0x5f($t4)
/* 0043E6C0 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 0043E6C4 8FA7000C */  lw    $a3, 0xc($sp)
/* 0043E6C8 8FA60008 */  lw    $a2, 8($sp)
/* 0043E6CC 0320F809 */  jalr  $t9
/* 0043E6D0 00000000 */   nop   
/* 0043E6D4 10000011 */  b     .L0043E71C
/* 0043E6D8 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L0043E6DC:
/* 0043E6DC 24010006 */  li    $at, 6
/* 0043E6E0 5041FE5A */  beql  $v0, $at, .L0043E04C
/* 0043E6E4 96190002 */   lhu   $t9, 2($s0)
/* 0043E6E8 24010014 */  li    $at, 20
/* 0043E6EC 1041FEFB */  beq   $v0, $at, .L0043E2DC
/* 0043E6F0 244BFFDF */   addiu $t3, $v0, -0x21
/* 0043E6F4 2D61000B */  sltiu $at, $t3, 0xb
/* 0043E6F8 1020FFB9 */  beqz  $at, .L0043E5E0
/* 0043E6FC 00000000 */   nop   
/* 0043E700 8F818038 */  lw    $at, %got(jtbl_1000C9A0)($gp)
/* 0043E704 000B5880 */  sll   $t3, $t3, 2
/* 0043E708 002B0821 */  addu  $at, $at, $t3
/* 0043E70C 8C2BC9A0 */  lw    $t3, %lo(jtbl_1000C9A0)($at)
/* 0043E710 017C5821 */  addu  $t3, $t3, $gp
/* 0043E714 01600008 */  jr    $t3
/* 0043E718 00000000 */   nop   
.L0043E71C:
/* 0043E71C 8FBF00B4 */  lw    $ra, 0xb4($sp)
.L0043E720:
/* 0043E720 8FB000AC */  lw    $s0, 0xac($sp)
/* 0043E724 27BD00C8 */  addiu $sp, $sp, 0xc8
/* 0043E728 03E00008 */  jr    $ra
/* 0043E72C 00000000 */   nop   
    .type gen_sym, @function
    .size gen_sym, .-gen_sym
    .end gen_sym

glabel set_lex_level
    .ent set_lex_level
/* 0043E730 3C1C0FBE */  .cpload $t9
/* 0043E734 279C1320 */  
/* 0043E738 0399E021 */  
/* 0043E73C 8F99855C */  lw    $t9, %call16(lookup_sym)($gp)
/* 0043E740 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0043E744 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0043E748 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0043E74C 0320F809 */  jalr  $t9
/* 0043E750 AFA50024 */   sw    $a1, 0x24($sp)
/* 0043E754 904E000D */  lbu   $t6, 0xd($v0)
/* 0043E758 8FAF0024 */  lw    $t7, 0x24($sp)
/* 0043E75C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043E760 01EE082B */  sltu  $at, $t7, $t6
/* 0043E764 50200003 */  beql  $at, $zero, .L0043E774
/* 0043E768 A04F000D */   sb    $t7, 0xd($v0)
/* 0043E76C 01C07825 */  move  $t7, $t6
/* 0043E770 A04F000D */  sb    $t7, 0xd($v0)
.L0043E774:
/* 0043E774 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0043E778 27BD0020 */  addiu $sp, $sp, 0x20
/* 0043E77C 03E00008 */  jr    $ra
/* 0043E780 00000000 */   nop   
    .type set_lex_level, @function
    .size set_lex_level, .-set_lex_level
    .end set_lex_level

glabel set_size
    .ent set_size
    # 0040F4C8 build_tree
/* 0043E784 3C1C0FBE */  .cpload $t9
/* 0043E788 279C12CC */  
/* 0043E78C 0399E021 */  
/* 0043E790 8F99855C */  lw    $t9, %call16(lookup_sym)($gp)
/* 0043E794 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0043E798 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0043E79C AFBC0018 */  sw    $gp, 0x18($sp)
/* 0043E7A0 0320F809 */  jalr  $t9
/* 0043E7A4 AFA50024 */   sw    $a1, 0x24($sp)
/* 0043E7A8 8C4E0010 */  lw    $t6, 0x10($v0)
/* 0043E7AC 8FAF0024 */  lw    $t7, 0x24($sp)
/* 0043E7B0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043E7B4 01EE082B */  sltu  $at, $t7, $t6
/* 0043E7B8 50200003 */  beql  $at, $zero, .L0043E7C8
/* 0043E7BC AC4F0010 */   sw    $t7, 0x10($v0)
/* 0043E7C0 01C07825 */  move  $t7, $t6
/* 0043E7C4 AC4F0010 */  sw    $t7, 0x10($v0)
.L0043E7C8:
/* 0043E7C8 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0043E7CC 27BD0020 */  addiu $sp, $sp, 0x20
/* 0043E7D0 03E00008 */  jr    $ra
/* 0043E7D4 00000000 */   nop   
    .type set_size, @function
    .size set_size, .-set_size
    .end set_size

glabel some_init_overlap
    .ent some_init_overlap
    # 0043F460 append_init
/* 0043E7D8 3C1C0FBE */  .cpload $t9
/* 0043E7DC 279C1278 */  
/* 0043E7E0 0399E021 */  
/* 0043E7E4 8C83001C */  lw    $v1, 0x1c($a0)
/* 0043E7E8 AFA60008 */  sw    $a2, 8($sp)
/* 0043E7EC AFA7000C */  sw    $a3, 0xc($sp)
/* 0043E7F0 54600004 */  bnel  $v1, $zero, .L0043E804
/* 0043E7F4 8C850020 */   lw    $a1, 0x20($a0)
/* 0043E7F8 03E00008 */  jr    $ra
/* 0043E7FC 00001025 */   move  $v0, $zero

/* 0043E800 8C850020 */  lw    $a1, 0x20($a0)
.L0043E804:
/* 0043E804 8FA60014 */  lw    $a2, 0x14($sp)
/* 0043E808 24080002 */  li    $t0, 2
/* 0043E80C 8CAE0010 */  lw    $t6, 0x10($a1)
/* 0043E810 8CAF0008 */  lw    $t7, 8($a1)
/* 0043E814 00A01025 */  move  $v0, $a1
/* 0043E818 01CFC021 */  addu  $t8, $t6, $t7
/* 0043E81C 00D8082A */  slt   $at, $a2, $t8
/* 0043E820 14200004 */  bnez  $at, .L0043E834
/* 0043E824 00000000 */   nop   
/* 0043E828 00401825 */  move  $v1, $v0
/* 0043E82C 1000001E */  b     .L0043E8A8
/* 0043E830 8F8989A4 */   lw     $t1, %got(source_language)($gp)
.L0043E834:
/* 0043E834 8F8989A4 */  lw     $t1, %got(source_language)($gp)
/* 0043E838 24080002 */  li    $t0, 2
/* 0043E83C 8D390000 */  lw    $t9, ($t1)
/* 0043E840 15190015 */  bne   $t0, $t9, .L0043E898
/* 0043E844 00000000 */   nop   
/* 0043E848 8F82890C */  lw     $v0, %got(last_inits_handled)($gp)
/* 0043E84C 8C420000 */  lw    $v0, ($v0)
/* 0043E850 10400011 */  beqz  $v0, .L0043E898
/* 0043E854 00000000 */   nop   
/* 0043E858 8C4A0020 */  lw    $t2, 0x20($v0)
/* 0043E85C 1140000E */  beqz  $t2, .L0043E898
/* 0043E860 00000000 */   nop   
/* 0043E864 8F8C8910 */  lw     $t4, %got(last_inits_handled_blkno)($gp)
/* 0043E868 8FAB000C */  lw    $t3, 0xc($sp)
/* 0043E86C 8D8C0000 */  lw    $t4, ($t4)
/* 0043E870 156C0009 */  bne   $t3, $t4, .L0043E898
/* 0043E874 00000000 */   nop   
/* 0043E878 8C4D0010 */  lw    $t5, 0x10($v0)
/* 0043E87C 8C4E0008 */  lw    $t6, 8($v0)
/* 0043E880 01AE7821 */  addu  $t7, $t5, $t6
/* 0043E884 00CF082A */  slt   $at, $a2, $t7
/* 0043E888 14200003 */  bnez  $at, .L0043E898
/* 0043E88C 00000000 */   nop   
/* 0043E890 10000005 */  b     .L0043E8A8
/* 0043E894 00401825 */   move  $v1, $v0
.L0043E898:
/* 0043E898 8F818910 */  lw     $at, %got(last_inits_handled_blkno)($gp)
/* 0043E89C AC200000 */  sw    $zero, ($at)
/* 0043E8A0 8F81890C */  lw     $at, %got(last_inits_handled)($gp)
/* 0043E8A4 AC200000 */  sw    $zero, ($at)
.L0043E8A8:
/* 0043E8A8 00001025 */  move  $v0, $zero
/* 0043E8AC 8FA70010 */  lw    $a3, 0x10($sp)
/* 0043E8B0 8FA40018 */  lw    $a0, 0x18($sp)
/* 0043E8B4 8C780010 */  lw    $t8, 0x10($v1)
.L0043E8B8:
/* 0043E8B8 8C790008 */  lw    $t9, 8($v1)
/* 0043E8BC 03195021 */  addu  $t2, $t8, $t9
/* 0043E8C0 00CA082A */  slt   $at, $a2, $t2
/* 0043E8C4 50200007 */  beql  $at, $zero, .L0043E8E4
/* 0043E8C8 8D2D0000 */   lw    $t5, ($t1)
/* 0043E8CC 8C6B000C */  lw    $t3, 0xc($v1)
/* 0043E8D0 00876021 */  addu  $t4, $a0, $a3
/* 0043E8D4 016C082A */  slt   $at, $t3, $t4
/* 0043E8D8 1420000B */  bnez  $at, .L0043E908
/* 0043E8DC 00000000 */   nop   
/* 0043E8E0 8D2D0000 */  lw    $t5, ($t1)
.L0043E8E4:
/* 0043E8E4 150D000A */  bne   $t0, $t5, .L0043E910
/* 0043E8E8 00000000 */   nop   
/* 0043E8EC 8C6E000C */  lw    $t6, 0xc($v1)
/* 0043E8F0 00877821 */  addu  $t7, $a0, $a3
/* 0043E8F4 01CF082A */  slt   $at, $t6, $t7
/* 0043E8F8 14200005 */  bnez  $at, .L0043E910
/* 0043E8FC 00000000 */   nop   
/* 0043E900 10000003 */  b     .L0043E910
/* 0043E904 24020001 */   li    $v0, 1
.L0043E908:
/* 0043E908 03E00008 */  jr    $ra
/* 0043E90C 00601025 */   move  $v0, $v1

.L0043E910:
/* 0043E910 54650004 */  bnel  $v1, $a1, .L0043E924
/* 0043E914 8C630020 */   lw    $v1, 0x20($v1)
/* 0043E918 10000002 */  b     .L0043E924
/* 0043E91C 24020001 */   li    $v0, 1
/* 0043E920 8C630020 */  lw    $v1, 0x20($v1)
.L0043E924:
/* 0043E924 5040FFE4 */  beql  $v0, $zero, .L0043E8B8
/* 0043E928 8C780010 */   lw    $t8, 0x10($v1)
/* 0043E92C 00001025 */  move  $v0, $zero
/* 0043E930 03E00008 */  jr    $ra
/* 0043E934 00000000 */   nop   
    .type some_init_overlap, @function
    .size some_init_overlap, .-some_init_overlap
    .end some_init_overlap

glabel complex_init_duplicate_p
    .ent complex_init_duplicate_p
    # 0043EA6C complex_insert_init
/* 0043E938 3C1C0FBE */  .cpload $t9
/* 0043E93C 279C1118 */  
/* 0043E940 0399E021 */  
/* 0043E944 8F9987E8 */  lw    $t9, %call16(new)($gp)
/* 0043E948 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0043E94C AFBF001C */  sw    $ra, 0x1c($sp)
/* 0043E950 AFA50024 */  sw    $a1, 0x24($sp)
/* 0043E954 00803025 */  move  $a2, $a0
/* 0043E958 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0043E95C AFA60020 */  sw    $a2, 0x20($sp)
/* 0043E960 24040028 */  li    $a0, 40
/* 0043E964 0320F809 */  jalr  $t9
/* 0043E968 24050001 */   li    $a1, 1
/* 0043E96C 8FA60020 */  lw    $a2, 0x20($sp)
/* 0043E970 8FA30024 */  lw    $v1, 0x24($sp)
/* 0043E974 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043E978 8CCE0020 */  lw    $t6, 0x20($a2)
/* 0043E97C AC4E0020 */  sw    $t6, 0x20($v0)
/* 0043E980 8CD80000 */  lw    $t8, ($a2)
/* 0043E984 AC580000 */  sw    $t8, ($v0)
/* 0043E988 8CCF0004 */  lw    $t7, 4($a2)
/* 0043E98C AC4F0004 */  sw    $t7, 4($v0)
/* 0043E990 8CD80008 */  lw    $t8, 8($a2)
/* 0043E994 AC580008 */  sw    $t8, 8($v0)
/* 0043E998 8CCF000C */  lw    $t7, 0xc($a2)
/* 0043E99C AC4F000C */  sw    $t7, 0xc($v0)
/* 0043E9A0 8CD80010 */  lw    $t8, 0x10($a2)
/* 0043E9A4 AC580010 */  sw    $t8, 0x10($v0)
/* 0043E9A8 8CCF0014 */  lw    $t7, 0x14($a2)
/* 0043E9AC AC4F0014 */  sw    $t7, 0x14($v0)
/* 0043E9B0 8CD80018 */  lw    $t8, 0x18($a2)
/* 0043E9B4 AC580018 */  sw    $t8, 0x18($v0)
/* 0043E9B8 8CCF001C */  lw    $t7, 0x1c($a2)
/* 0043E9BC AC4F001C */  sw    $t7, 0x1c($v0)
/* 0043E9C0 ACC20020 */  sw    $v0, 0x20($a2)
/* 0043E9C4 8C790020 */  lw    $t9, 0x20($v1)
/* 0043E9C8 14D90002 */  bne   $a2, $t9, .L0043E9D4
/* 0043E9CC 00000000 */   nop   
/* 0043E9D0 AC620020 */  sw    $v0, 0x20($v1)
.L0043E9D4:
/* 0043E9D4 8F8889A4 */  lw     $t0, %got(source_language)($gp)
/* 0043E9D8 24010002 */  li    $at, 2
/* 0043E9DC 8D080000 */  lw    $t0, ($t0)
/* 0043E9E0 55010007 */  bnel  $t0, $at, .L0043EA00
/* 0043E9E4 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0043E9E8 8F81890C */  lw     $at, %got(last_inits_handled)($gp)
/* 0043E9EC AC220000 */  sw    $v0, ($at)
/* 0043E9F0 8C490004 */  lw    $t1, 4($v0)
/* 0043E9F4 8F818910 */  lw     $at, %got(last_inits_handled_blkno)($gp)
/* 0043E9F8 AC290000 */  sw    $t1, ($at)
/* 0043E9FC 8FBF001C */  lw    $ra, 0x1c($sp)
.L0043EA00:
/* 0043EA00 27BD0020 */  addiu $sp, $sp, 0x20
/* 0043EA04 03E00008 */  jr    $ra
/* 0043EA08 00000000 */   nop   
    .type complex_init_duplicate_p, @function
    .size complex_init_duplicate_p, .-complex_init_duplicate_p
    .end complex_init_duplicate_p

glabel integral_type
    .ent integral_type
/* 0043EA0C AFA40000 */  sw    $a0, ($sp)
/* 0043EA10 93A20001 */  lbu   $v0, 1($sp)
/* 0043EA14 AFA50004 */  sw    $a1, 4($sp)
/* 0043EA18 AFA60008 */  sw    $a2, 8($sp)
/* 0043EA1C 3042001F */  andi  $v0, $v0, 0x1f
/* 0043EA20 1040000E */  beqz  $v0, .L0043EA5C
/* 0043EA24 AFA7000C */   sw    $a3, 0xc($sp)
/* 0043EA28 24010004 */  li    $at, 4
/* 0043EA2C 1041000B */  beq   $v0, $at, .L0043EA5C
/* 0043EA30 24010008 */   li    $at, 8
/* 0043EA34 10410009 */  beq   $v0, $at, .L0043EA5C
/* 0043EA38 24010006 */   li    $at, 6
/* 0043EA3C 10410007 */  beq   $v0, $at, .L0043EA5C
/* 0043EA40 24010002 */   li    $at, 2
/* 0043EA44 10410005 */  beq   $v0, $at, .L0043EA5C
/* 0043EA48 24010003 */   li    $at, 3
/* 0043EA4C 10410003 */  beq   $v0, $at, .L0043EA5C
/* 0043EA50 2401000A */   li    $at, 10
/* 0043EA54 14410003 */  bne   $v0, $at, .L0043EA64
/* 0043EA58 00001825 */   move  $v1, $zero
.L0043EA5C:
/* 0043EA5C 03E00008 */  jr    $ra
/* 0043EA60 24020001 */   li    $v0, 1

.L0043EA64:
/* 0043EA64 03E00008 */  jr    $ra
/* 0043EA68 00601025 */   move  $v0, $v1
    .type integral_type, @function
    .size integral_type, .-integral_type
    .end integral_type

glabel complex_insert_init
    .ent complex_insert_init
    # 0043F460 append_init
/* 0043EA6C 3C1C0FBE */  .cpload $t9
/* 0043EA70 279C0FE4 */  
/* 0043EA74 0399E021 */  
/* 0043EA78 27BDFEB0 */  addiu $sp, $sp, -0x150
/* 0043EA7C AFBF00D4 */  sw    $ra, 0xd4($sp)
/* 0043EA80 AFBE00D0 */  sw    $fp, 0xd0($sp)
/* 0043EA84 AFBC00CC */  sw    $gp, 0xcc($sp)
/* 0043EA88 AFB700C8 */  sw    $s7, 0xc8($sp)
/* 0043EA8C AFB600C4 */  sw    $s6, 0xc4($sp)
/* 0043EA90 AFB500C0 */  sw    $s5, 0xc0($sp)
/* 0043EA94 AFB400BC */  sw    $s4, 0xbc($sp)
/* 0043EA98 AFB300B8 */  sw    $s3, 0xb8($sp)
/* 0043EA9C AFB200B4 */  sw    $s2, 0xb4($sp)
/* 0043EAA0 AFB100B0 */  sw    $s1, 0xb0($sp)
/* 0043EAA4 AFB000AC */  sw    $s0, 0xac($sp)
/* 0043EAA8 AFA60158 */  sw    $a2, 0x158($sp)
/* 0043EAAC AFA7015C */  sw    $a3, 0x15c($sp)
/* 0043EAB0 AFA00130 */  sw    $zero, 0x130($sp)
/* 0043EAB4 AFA00134 */  sw    $zero, 0x134($sp)
/* 0043EAB8 AFA00138 */  sw    $zero, 0x138($sp)
/* 0043EABC AFA0013C */  sw    $zero, 0x13c($sp)
/* 0043EAC0 AFA00140 */  sw    $zero, 0x140($sp)
/* 0043EAC4 AFA00144 */  sw    $zero, 0x144($sp)
/* 0043EAC8 AFA00148 */  sw    $zero, 0x148($sp)
/* 0043EACC AFA0014C */  sw    $zero, 0x14c($sp)
/* 0043EAD0 AFA00110 */  sw    $zero, 0x110($sp)
/* 0043EAD4 AFA00118 */  sw    $zero, 0x118($sp)
/* 0043EAD8 AFA0011C */  sw    $zero, 0x11c($sp)
/* 0043EADC AFA00120 */  sw    $zero, 0x120($sp)
/* 0043EAE0 27AF0158 */  addiu $t7, $sp, 0x158
/* 0043EAE4 8DF90000 */  lw    $t9, ($t7)
/* 0043EAE8 27AE0130 */  addiu $t6, $sp, 0x130
/* 0043EAEC 27AA0110 */  addiu $t2, $sp, 0x110
/* 0043EAF0 ADD90000 */  sw    $t9, ($t6)
/* 0043EAF4 8DF80004 */  lw    $t8, 4($t7)
/* 0043EAF8 00809025 */  move  $s2, $a0
/* 0043EAFC 00A0B025 */  move  $s6, $a1
/* 0043EB00 ADD80004 */  sw    $t8, 4($t6)
/* 0043EB04 8DF90008 */  lw    $t9, 8($t7)
/* 0043EB08 ADD90008 */  sw    $t9, 8($t6)
/* 0043EB0C 8DF8000C */  lw    $t8, 0xc($t7)
/* 0043EB10 ADD8000C */  sw    $t8, 0xc($t6)
/* 0043EB14 8DF90010 */  lw    $t9, 0x10($t7)
/* 0043EB18 ADD90010 */  sw    $t9, 0x10($t6)
/* 0043EB1C 8DF80014 */  lw    $t8, 0x14($t7)
/* 0043EB20 ADD80014 */  sw    $t8, 0x14($t6)
/* 0043EB24 8DF90018 */  lw    $t9, 0x18($t7)
/* 0043EB28 ADD90018 */  sw    $t9, 0x18($t6)
/* 0043EB2C 8DF8001C */  lw    $t8, 0x1c($t7)
/* 0043EB30 ADD8001C */  sw    $t8, 0x1c($t6)
/* 0043EB34 8C8C0000 */  lw    $t4, ($a0)
/* 0043EB38 AD4C0000 */  sw    $t4, ($t2)
/* 0043EB3C 8C8B0004 */  lw    $t3, 4($a0)
/* 0043EB40 AD4B0004 */  sw    $t3, 4($t2)
/* 0043EB44 8C8C0008 */  lw    $t4, 8($a0)
/* 0043EB48 AD4C0008 */  sw    $t4, 8($t2)
/* 0043EB4C 8C8B000C */  lw    $t3, 0xc($a0)
/* 0043EB50 AD4B000C */  sw    $t3, 0xc($t2)
/* 0043EB54 8C8C0010 */  lw    $t4, 0x10($a0)
/* 0043EB58 AD4C0010 */  sw    $t4, 0x10($t2)
/* 0043EB5C 8C8B0014 */  lw    $t3, 0x14($a0)
/* 0043EB60 AD4B0014 */  sw    $t3, 0x14($t2)
/* 0043EB64 8C8C0018 */  lw    $t4, 0x18($a0)
/* 0043EB68 AD4C0018 */  sw    $t4, 0x18($t2)
/* 0043EB6C 8C8B001C */  lw    $t3, 0x1c($a0)
/* 0043EB70 AD4B001C */  sw    $t3, 0x1c($t2)
/* 0043EB74 8FAE0118 */  lw    $t6, 0x118($sp)
/* 0043EB78 8FAD0138 */  lw    $t5, 0x138($sp)
/* 0043EB7C 93AF0131 */  lbu   $t7, 0x131($sp)
/* 0043EB80 51AE0045 */  beql  $t5, $t6, .L0043EC98
/* 0043EB84 8FA30140 */   lw    $v1, 0x140($sp)
/* 0043EB88 93B90111 */  lbu   $t9, 0x111($sp)
/* 0043EB8C 31F8001F */  andi  $t8, $t7, 0x1f
/* 0043EB90 24040004 */  li    $a0, 4
/* 0043EB94 332A001F */  andi  $t2, $t9, 0x1f
/* 0043EB98 530A003F */  beql  $t8, $t2, .L0043EC98
/* 0043EB9C 8FA30140 */   lw    $v1, 0x140($sp)
/* 0043EBA0 8F8B8038 */  lw    $t3, %got(RO_1000CB6C)($gp)
/* 0043EBA4 240501CF */  li    $a1, 463
/* 0043EBA8 03A07025 */  move  $t6, $sp
/* 0043EBAC 256BCB6C */  addiu $t3, %lo(RO_1000CB6C) # addiu $t3, $t3, -0x3494
/* 0043EBB0 256F0048 */  addiu $t7, $t3, 0x48
.L0043EBB4:
/* 0043EBB4 896D0000 */  lwl   $t5, ($t3)
/* 0043EBB8 996D0003 */  lwr   $t5, 3($t3)
/* 0043EBBC 256B000C */  addiu $t3, $t3, 0xc
/* 0043EBC0 25CE000C */  addiu $t6, $t6, 0xc
/* 0043EBC4 A9CDFFFC */  swl   $t5, -4($t6)
/* 0043EBC8 B9CDFFFF */  swr   $t5, -1($t6)
/* 0043EBCC 896CFFF8 */  lwl   $t4, -8($t3)
/* 0043EBD0 996CFFFB */  lwr   $t4, -5($t3)
/* 0043EBD4 A9CC0000 */  swl   $t4, ($t6)
/* 0043EBD8 B9CC0003 */  swr   $t4, 3($t6)
/* 0043EBDC 896DFFFC */  lwl   $t5, -4($t3)
/* 0043EBE0 996DFFFF */  lwr   $t5, -1($t3)
/* 0043EBE4 A9CD0004 */  swl   $t5, 4($t6)
/* 0043EBE8 156FFFF2 */  bne   $t3, $t7, .L0043EBB4
/* 0043EBEC B9CD0007 */   swr   $t5, 7($t6)
/* 0043EBF0 896D0000 */  lwl   $t5, ($t3)
/* 0043EBF4 996D0003 */  lwr   $t5, 3($t3)
/* 0043EBF8 8F998038 */  lw    $t9, %got(RO_1000CB1C)($gp)
/* 0043EBFC 03A07825 */  move  $t7, $sp
/* 0043EC00 A9CD0008 */  swl   $t5, 8($t6)
/* 0043EC04 B9CD000B */  swr   $t5, 0xb($t6)
/* 0043EC08 896C0004 */  lwl   $t4, 4($t3)
/* 0043EC0C 996C0007 */  lwr   $t4, 7($t3)
/* 0043EC10 2739CB1C */  addiu $t9, %lo(RO_1000CB1C) # addiu $t9, $t9, -0x34e4
/* 0043EC14 272B0048 */  addiu $t3, $t9, 0x48
/* 0043EC18 A9CC000C */  swl   $t4, 0xc($t6)
/* 0043EC1C B9CC000F */  swr   $t4, 0xf($t6)
.L0043EC20:
/* 0043EC20 8B2A0000 */  lwl   $t2, ($t9)
/* 0043EC24 9B2A0003 */  lwr   $t2, 3($t9)
/* 0043EC28 2739000C */  addiu $t9, $t9, 0xc
/* 0043EC2C 25EF000C */  addiu $t7, $t7, 0xc
/* 0043EC30 A9EA004C */  swl   $t2, 0x4c($t7)
/* 0043EC34 B9EA004F */  swr   $t2, 0x4f($t7)
/* 0043EC38 8B38FFF8 */  lwl   $t8, -8($t9)
/* 0043EC3C 9B38FFFB */  lwr   $t8, -5($t9)
/* 0043EC40 A9F80050 */  swl   $t8, 0x50($t7)
/* 0043EC44 B9F80053 */  swr   $t8, 0x53($t7)
/* 0043EC48 8B2AFFFC */  lwl   $t2, -4($t9)
/* 0043EC4C 9B2AFFFF */  lwr   $t2, -1($t9)
/* 0043EC50 A9EA0054 */  swl   $t2, 0x54($t7)
/* 0043EC54 172BFFF2 */  bne   $t9, $t3, .L0043EC20
/* 0043EC58 B9EA0057 */   swr   $t2, 0x57($t7)
/* 0043EC5C 8B2A0000 */  lwl   $t2, ($t9)
/* 0043EC60 9B2A0003 */  lwr   $t2, 3($t9)
/* 0043EC64 A9EA0058 */  swl   $t2, 0x58($t7)
/* 0043EC68 B9EA005B */  swr   $t2, 0x5b($t7)
/* 0043EC6C 8B380004 */  lwl   $t8, 4($t9)
/* 0043EC70 9B380007 */  lwr   $t8, 7($t9)
/* 0043EC74 A9F8005C */  swl   $t8, 0x5c($t7)
/* 0043EC78 B9F8005F */  swr   $t8, 0x5f($t7)
/* 0043EC7C 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 0043EC80 8FA7000C */  lw    $a3, 0xc($sp)
/* 0043EC84 8FA60008 */  lw    $a2, 8($sp)
/* 0043EC88 0320F809 */  jalr  $t9
/* 0043EC8C 00000000 */   nop   
/* 0043EC90 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0043EC94 8FA30140 */  lw    $v1, 0x140($sp)
.L0043EC98:
/* 0043EC98 8FBE0138 */  lw    $fp, 0x138($sp)
/* 0043EC9C 8FB3013C */  lw    $s3, 0x13c($sp)
/* 0043ECA0 24150009 */  li    $s5, 9
/* 0043ECA4 007E8021 */  addu  $s0, $v1, $fp
/* 0043ECA8 0270082A */  slt   $at, $s3, $s0
/* 0043ECAC 502001E1 */  beql  $at, $zero, .L0043F434
/* 0043ECB0 8FBF00D4 */   lw    $ra, 0xd4($sp)
/* 0043ECB4 8E4D0000 */  lw    $t5, ($s2)
.L0043ECB8:
/* 0043ECB8 27AE0110 */  addiu $t6, $sp, 0x110
/* 0043ECBC ADCD0000 */  sw    $t5, ($t6)
/* 0043ECC0 8E4C0004 */  lw    $t4, 4($s2)
/* 0043ECC4 ADCC0004 */  sw    $t4, 4($t6)
/* 0043ECC8 8E4D0008 */  lw    $t5, 8($s2)
/* 0043ECCC ADCD0008 */  sw    $t5, 8($t6)
/* 0043ECD0 8E4C000C */  lw    $t4, 0xc($s2)
/* 0043ECD4 ADCC000C */  sw    $t4, 0xc($t6)
/* 0043ECD8 8E4D0010 */  lw    $t5, 0x10($s2)
/* 0043ECDC ADCD0010 */  sw    $t5, 0x10($t6)
/* 0043ECE0 8E4C0014 */  lw    $t4, 0x14($s2)
/* 0043ECE4 ADCC0014 */  sw    $t4, 0x14($t6)
/* 0043ECE8 8E4D0018 */  lw    $t5, 0x18($s2)
/* 0043ECEC ADCD0018 */  sw    $t5, 0x18($t6)
/* 0043ECF0 8E4C001C */  lw    $t4, 0x1c($s2)
/* 0043ECF4 ADCC001C */  sw    $t4, 0x1c($t6)
/* 0043ECF8 8FAB011C */  lw    $t3, 0x11c($sp)
/* 0043ECFC 8FB70118 */  lw    $s7, 0x118($sp)
/* 0043ED00 8FB4011C */  lw    $s4, 0x11c($sp)
/* 0043ED04 0173082A */  slt   $at, $t3, $s3
/* 0043ED08 10200075 */  beqz  $at, .L0043EEE0
/* 0043ED0C 00000000 */   nop   
/* 0043ED10 8F998570 */  lw    $t9, %call16(complex_init_duplicate_p)($gp)
/* 0043ED14 0160A025 */  move  $s4, $t3
/* 0043ED18 02402025 */  move  $a0, $s2
/* 0043ED1C 0320F809 */  jalr  $t9
/* 0043ED20 02C02825 */   move  $a1, $s6
/* 0043ED24 93B90131 */  lbu   $t9, 0x131($sp)
/* 0043ED28 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0043ED2C 332F001F */  andi  $t7, $t9, 0x1f
/* 0043ED30 56AF0013 */  bnel  $s5, $t7, .L0043ED80
/* 0043ED34 0274C823 */   subu  $t9, $s3, $s4
/* 0043ED38 93B80111 */  lbu   $t8, 0x111($sp)
/* 0043ED3C 330A001F */  andi  $t2, $t8, 0x1f
/* 0043ED40 56AA000F */  bnel  $s5, $t2, .L0043ED80
/* 0043ED44 0274C823 */   subu  $t9, $s3, $s4
/* 0043ED48 8E510020 */  lw    $s1, 0x20($s2)
/* 0043ED4C 02741023 */  subu  $v0, $s3, $s4
/* 0043ED50 AE33000C */  sw    $s3, 0xc($s1)
/* 0043ED54 AE330010 */  sw    $s3, 0x10($s1)
/* 0043ED58 8E4E0008 */  lw    $t6, 8($s2)
/* 0043ED5C 01C26023 */  subu  $t4, $t6, $v0
/* 0043ED60 AE2C0008 */  sw    $t4, 8($s1)
/* 0043ED64 8E4D0008 */  lw    $t5, 8($s2)
/* 0043ED68 01A25823 */  subu  $t3, $t5, $v0
/* 0043ED6C AE2B0018 */  sw    $t3, 0x18($s1)
/* 0043ED70 AE420008 */  sw    $v0, 8($s2)
/* 0043ED74 10000057 */  b     .L0043EED4
/* 0043ED78 AE420018 */   sw    $v0, 0x18($s2)
/* 0043ED7C 0274C823 */  subu  $t9, $s3, $s4
.L0043ED80:
/* 0043ED80 0337001A */  div   $zero, $t9, $s7
/* 0043ED84 00001012 */  mflo  $v0
/* 0043ED88 244FFFFF */  addiu $t7, $v0, -1
/* 0043ED8C 8E4E0020 */  lw    $t6, 0x20($s2)
/* 0043ED90 01F70019 */  multu $t7, $s7
/* 0043ED94 16E00002 */  bnez  $s7, .L0043EDA0
/* 0043ED98 00000000 */   nop   
/* 0043ED9C 0007000D */  break 7
.L0043EDA0:
/* 0043EDA0 2401FFFF */  li    $at, -1
/* 0043EDA4 16E10004 */  bne   $s7, $at, .L0043EDB8
/* 0043EDA8 3C018000 */   lui   $at, 0x8000
/* 0043EDAC 17210002 */  bne   $t9, $at, .L0043EDB8
/* 0043EDB0 00000000 */   nop   
/* 0043EDB4 0006000D */  break 6
.L0043EDB8:
/* 0043EDB8 0000C012 */  mflo  $t8
/* 0043EDBC 02985021 */  addu  $t2, $s4, $t8
/* 0043EDC0 AE4A0010 */  sw    $t2, 0x10($s2)
/* 0043EDC4 00570019 */  multu $v0, $s7
/* 0043EDC8 ADD3000C */  sw    $s3, 0xc($t6)
/* 0043EDCC 00006012 */  mflo  $t4
/* 0043EDD0 01946821 */  addu  $t5, $t4, $s4
/* 0043EDD4 526D0040 */  beql  $s3, $t5, .L0043EED8
/* 0043EDD8 8E520020 */   lw    $s2, 0x20($s2)
/* 0043EDDC 8F8B8038 */  lw    $t3, %got(RO_1000CACC)($gp)
/* 0043EDE0 24040002 */  li    $a0, 2
/* 0043EDE4 240501EB */  li    $a1, 491
/* 0043EDE8 256BCACC */  addiu $t3, %lo(RO_1000CACC) # addiu $t3, $t3, -0x3534
/* 0043EDEC 256A0048 */  addiu $t2, $t3, 0x48
/* 0043EDF0 03A0C025 */  move  $t8, $sp
.L0043EDF4:
/* 0043EDF4 896F0000 */  lwl   $t7, ($t3)
/* 0043EDF8 996F0003 */  lwr   $t7, 3($t3)
/* 0043EDFC 256B000C */  addiu $t3, $t3, 0xc
/* 0043EE00 2718000C */  addiu $t8, $t8, 0xc
/* 0043EE04 AB0FFFFC */  swl   $t7, -4($t8)
/* 0043EE08 BB0FFFFF */  swr   $t7, -1($t8)
/* 0043EE0C 8979FFF8 */  lwl   $t9, -8($t3)
/* 0043EE10 9979FFFB */  lwr   $t9, -5($t3)
/* 0043EE14 AB190000 */  swl   $t9, ($t8)
/* 0043EE18 BB190003 */  swr   $t9, 3($t8)
/* 0043EE1C 896FFFFC */  lwl   $t7, -4($t3)
/* 0043EE20 996FFFFF */  lwr   $t7, -1($t3)
/* 0043EE24 AB0F0004 */  swl   $t7, 4($t8)
/* 0043EE28 156AFFF2 */  bne   $t3, $t2, .L0043EDF4
/* 0043EE2C BB0F0007 */   swr   $t7, 7($t8)
/* 0043EE30 896F0000 */  lwl   $t7, ($t3)
/* 0043EE34 996F0003 */  lwr   $t7, 3($t3)
/* 0043EE38 8F8E8038 */  lw    $t6, %got(RO_1000CA7C)($gp)
/* 0043EE3C 03A05025 */  move  $t2, $sp
/* 0043EE40 AB0F0008 */  swl   $t7, 8($t8)
/* 0043EE44 BB0F000B */  swr   $t7, 0xb($t8)
/* 0043EE48 89790004 */  lwl   $t9, 4($t3)
/* 0043EE4C 99790007 */  lwr   $t9, 7($t3)
/* 0043EE50 25CECA7C */  addiu $t6, %lo(RO_1000CA7C) # addiu $t6, $t6, -0x3584
/* 0043EE54 25CB0048 */  addiu $t3, $t6, 0x48
/* 0043EE58 AB19000C */  swl   $t9, 0xc($t8)
/* 0043EE5C BB19000F */  swr   $t9, 0xf($t8)
.L0043EE60:
/* 0043EE60 89CD0000 */  lwl   $t5, ($t6)
/* 0043EE64 99CD0003 */  lwr   $t5, 3($t6)
/* 0043EE68 25CE000C */  addiu $t6, $t6, 0xc
/* 0043EE6C 254A000C */  addiu $t2, $t2, 0xc
/* 0043EE70 A94D004C */  swl   $t5, 0x4c($t2)
/* 0043EE74 B94D004F */  swr   $t5, 0x4f($t2)
/* 0043EE78 89CCFFF8 */  lwl   $t4, -8($t6)
/* 0043EE7C 99CCFFFB */  lwr   $t4, -5($t6)
/* 0043EE80 A94C0050 */  swl   $t4, 0x50($t2)
/* 0043EE84 B94C0053 */  swr   $t4, 0x53($t2)
/* 0043EE88 89CDFFFC */  lwl   $t5, -4($t6)
/* 0043EE8C 99CDFFFF */  lwr   $t5, -1($t6)
/* 0043EE90 A94D0054 */  swl   $t5, 0x54($t2)
/* 0043EE94 15CBFFF2 */  bne   $t6, $t3, .L0043EE60
/* 0043EE98 B94D0057 */   swr   $t5, 0x57($t2)
/* 0043EE9C 89CD0000 */  lwl   $t5, ($t6)
/* 0043EEA0 99CD0003 */  lwr   $t5, 3($t6)
/* 0043EEA4 A94D0058 */  swl   $t5, 0x58($t2)
/* 0043EEA8 B94D005B */  swr   $t5, 0x5b($t2)
/* 0043EEAC 89CC0004 */  lwl   $t4, 4($t6)
/* 0043EEB0 99CC0007 */  lwr   $t4, 7($t6)
/* 0043EEB4 A94C005C */  swl   $t4, 0x5c($t2)
/* 0043EEB8 B94C005F */  swr   $t4, 0x5f($t2)
/* 0043EEBC 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 0043EEC0 8FA7000C */  lw    $a3, 0xc($sp)
/* 0043EEC4 8FA60008 */  lw    $a2, 8($sp)
/* 0043EEC8 0320F809 */  jalr  $t9
/* 0043EECC 00000000 */   nop   
/* 0043EED0 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0043EED4:
/* 0043EED4 8E520020 */  lw    $s2, 0x20($s2)
.L0043EED8:
/* 0043EED8 10000152 */  b     .L0043F424
/* 0043EEDC 8FA30140 */   lw    $v1, 0x140($sp)
.L0043EEE0:
/* 0043EEE0 1693009F */  bne   $s4, $s3, .L0043F160
/* 0043EEE4 8FB70118 */   lw    $s7, 0x118($sp)
/* 0043EEE8 8FA20120 */  lw    $v0, 0x120($sp)
/* 0043EEEC AFB3013C */  sw    $s3, 0x13c($sp)
/* 0043EEF0 27B80148 */  addiu $t8, $sp, 0x148
/* 0043EEF4 0043082A */  slt   $at, $v0, $v1
/* 0043EEF8 1020000D */  beqz  $at, .L0043EF30
/* 0043EEFC 00000000 */   nop   
/* 0043EF00 8F0F0000 */  lw    $t7, ($t8)
/* 0043EF04 00579821 */  addu  $s3, $v0, $s7
/* 0043EF08 AE4F0018 */  sw    $t7, 0x18($s2)
/* 0043EF0C 8F190004 */  lw    $t9, 4($t8)
/* 0043EF10 AE59001C */  sw    $t9, 0x1c($s2)
/* 0043EF14 8ECB0020 */  lw    $t3, 0x20($s6)
/* 0043EF18 164B0003 */  bne   $s2, $t3, .L0043EF28
/* 0043EF1C 00000000 */   nop   
/* 0043EF20 10000143 */  b     .L0043F430
/* 0043EF24 AE430010 */   sw    $v1, 0x10($s2)
.L0043EF28:
/* 0043EF28 1000013E */  b     .L0043F424
/* 0043EF2C 8E520020 */   lw    $s2, 0x20($s2)
.L0043EF30:
/* 0043EF30 14430071 */  bne   $v0, $v1, .L0043F0F8
/* 0043EF34 00000000 */   nop   
/* 0043EF38 93AE0131 */  lbu   $t6, 0x131($sp)
/* 0043EF3C AFBE0138 */  sw    $fp, 0x138($sp)
/* 0043EF40 31CA001F */  andi  $t2, $t6, 0x1f
/* 0043EF44 56AA005B */  bnel  $s5, $t2, .L0043F0B4
/* 0043EF48 27AC0130 */   addiu $t4, $sp, 0x130
/* 0043EF4C 93AC0111 */  lbu   $t4, 0x111($sp)
/* 0043EF50 AFBE0138 */  sw    $fp, 0x138($sp)
/* 0043EF54 03D7082A */  slt   $at, $fp, $s7
/* 0043EF58 318D001F */  andi  $t5, $t4, 0x1f
/* 0043EF5C 56AD0055 */  bnel  $s5, $t5, .L0043F0B4
/* 0043EF60 27AC0130 */   addiu $t4, $sp, 0x130
/* 0043EF64 10200052 */  beqz  $at, .L0043F0B0
/* 0043EF68 AFBE0138 */   sw    $fp, 0x138($sp)
/* 0043EF6C 8F998570 */  lw    $t9, %call16(complex_init_duplicate_p)($gp)
/* 0043EF70 02402025 */  move  $a0, $s2
/* 0043EF74 02C02825 */  move  $a1, $s6
/* 0043EF78 0320F809 */  jalr  $t9
/* 0043EF7C 24100001 */   li    $s0, 1
/* 0043EF80 8E58000C */  lw    $t8, 0xc($s2)
/* 0043EF84 8E510020 */  lw    $s1, 0x20($s2)
/* 0043EF88 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0043EF8C 031EC821 */  addu  $t9, $t8, $fp
/* 0043EF90 AE39000C */  sw    $t9, 0xc($s1)
/* 0043EF94 AE390010 */  sw    $t9, 0x10($s1)
/* 0043EF98 8F9987E8 */  lw    $t9, %call16(new)($gp)
/* 0043EF9C 24040400 */  li    $a0, 1024
/* 0043EFA0 00002825 */  move  $a1, $zero
/* 0043EFA4 0320F809 */  jalr  $t9
/* 0043EFA8 00000000 */   nop   
/* 0043EFAC 8E270018 */  lw    $a3, 0x18($s1)
/* 0043EFB0 27C40001 */  addiu $a0, $fp, 1
/* 0043EFB4 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0043EFB8 00E4082B */  sltu  $at, $a3, $a0
/* 0043EFBC 14200025 */  bnez  $at, .L0043F054
/* 0043EFC0 AFBE0138 */   sw    $fp, 0x138($sp)
/* 0043EFC4 24E70001 */  addiu $a3, $a3, 1
/* 0043EFC8 00E44023 */  subu  $t0, $a3, $a0
/* 0043EFCC 31080003 */  andi  $t0, $t0, 3
/* 0043EFD0 1100000C */  beqz  $t0, .L0043F004
/* 0043EFD4 00802825 */   move  $a1, $a0
/* 0043EFD8 01043021 */  addu  $a2, $t0, $a0
/* 0043EFDC 00501821 */  addu  $v1, $v0, $s0
.L0043EFE0:
/* 0043EFE0 8E2B001C */  lw    $t3, 0x1c($s1)
/* 0043EFE4 26100001 */  addiu $s0, $s0, 1
/* 0043EFE8 24630001 */  addiu $v1, $v1, 1
/* 0043EFEC 01657021 */  addu  $t6, $t3, $a1
/* 0043EFF0 91CAFFFF */  lbu   $t2, -1($t6)
/* 0043EFF4 24A50001 */  addiu $a1, $a1, 1
/* 0043EFF8 14C5FFF9 */  bne   $a2, $a1, .L0043EFE0
/* 0043EFFC A06AFFFE */   sb    $t2, -2($v1)
/* 0043F000 10A70014 */  beq   $a1, $a3, .L0043F054
.L0043F004:
/* 0043F004 00501821 */   addu  $v1, $v0, $s0
.L0043F008:
/* 0043F008 8E2C001C */  lw    $t4, 0x1c($s1)
/* 0043F00C 24630004 */  addiu $v1, $v1, 4
/* 0043F010 01856821 */  addu  $t5, $t4, $a1
/* 0043F014 91B8FFFF */  lbu   $t8, -1($t5)
/* 0043F018 A078FFFB */  sb    $t8, -5($v1)
/* 0043F01C 8E39001C */  lw    $t9, 0x1c($s1)
/* 0043F020 03257821 */  addu  $t7, $t9, $a1
/* 0043F024 91EB0000 */  lbu   $t3, ($t7)
/* 0043F028 A06BFFFC */  sb    $t3, -4($v1)
/* 0043F02C 8E2E001C */  lw    $t6, 0x1c($s1)
/* 0043F030 01C55021 */  addu  $t2, $t6, $a1
/* 0043F034 914C0001 */  lbu   $t4, 1($t2)
/* 0043F038 A06CFFFD */  sb    $t4, -3($v1)
/* 0043F03C 8E2D001C */  lw    $t5, 0x1c($s1)
/* 0043F040 01A5C021 */  addu  $t8, $t5, $a1
/* 0043F044 93190002 */  lbu   $t9, 2($t8)
/* 0043F048 24A50004 */  addiu $a1, $a1, 4
/* 0043F04C 14A7FFEE */  bne   $a1, $a3, .L0043F008
/* 0043F050 A079FFFE */   sb    $t9, -2($v1)
.L0043F054:
/* 0043F054 AE22001C */  sw    $v0, 0x1c($s1)
/* 0043F058 27AF0130 */  addiu $t7, $sp, 0x130
/* 0043F05C 8DEE0000 */  lw    $t6, ($t7)
/* 0043F060 8FAA0138 */  lw    $t2, 0x138($sp)
/* 0043F064 AE4E0000 */  sw    $t6, ($s2)
/* 0043F068 8DEB0004 */  lw    $t3, 4($t7)
/* 0043F06C 02EA1823 */  subu  $v1, $s7, $t2
/* 0043F070 AE4B0004 */  sw    $t3, 4($s2)
/* 0043F074 8DEE0008 */  lw    $t6, 8($t7)
/* 0043F078 AE4E0008 */  sw    $t6, 8($s2)
/* 0043F07C 8DEB000C */  lw    $t3, 0xc($t7)
/* 0043F080 AE4B000C */  sw    $t3, 0xc($s2)
/* 0043F084 8DEE0010 */  lw    $t6, 0x10($t7)
/* 0043F088 AE4E0010 */  sw    $t6, 0x10($s2)
/* 0043F08C 8DEB0014 */  lw    $t3, 0x14($t7)
/* 0043F090 AE4B0014 */  sw    $t3, 0x14($s2)
/* 0043F094 8DEE0018 */  lw    $t6, 0x18($t7)
/* 0043F098 AE4E0018 */  sw    $t6, 0x18($s2)
/* 0043F09C 8DEB001C */  lw    $t3, 0x1c($t7)
/* 0043F0A0 AE4B001C */  sw    $t3, 0x1c($s2)
/* 0043F0A4 AE230008 */  sw    $v1, 8($s1)
/* 0043F0A8 100000E1 */  b     .L0043F430
/* 0043F0AC AE230018 */   sw    $v1, 0x18($s1)
.L0043F0B0:
/* 0043F0B0 27AC0130 */  addiu $t4, $sp, 0x130
.L0043F0B4:
/* 0043F0B4 8D980000 */  lw    $t8, ($t4)
/* 0043F0B8 AE580000 */  sw    $t8, ($s2)
/* 0043F0BC 8D8D0004 */  lw    $t5, 4($t4)
/* 0043F0C0 AE4D0004 */  sw    $t5, 4($s2)
/* 0043F0C4 8D980008 */  lw    $t8, 8($t4)
/* 0043F0C8 AE580008 */  sw    $t8, 8($s2)
/* 0043F0CC 8D8D000C */  lw    $t5, 0xc($t4)
/* 0043F0D0 AE4D000C */  sw    $t5, 0xc($s2)
/* 0043F0D4 8D980010 */  lw    $t8, 0x10($t4)
/* 0043F0D8 AE580010 */  sw    $t8, 0x10($s2)
/* 0043F0DC 8D8D0014 */  lw    $t5, 0x14($t4)
/* 0043F0E0 AE4D0014 */  sw    $t5, 0x14($s2)
/* 0043F0E4 8D980018 */  lw    $t8, 0x18($t4)
/* 0043F0E8 AE580018 */  sw    $t8, 0x18($s2)
/* 0043F0EC 8D8D001C */  lw    $t5, 0x1c($t4)
/* 0043F0F0 100000CF */  b     .L0043F430
/* 0043F0F4 AE4D001C */   sw    $t5, 0x1c($s2)
.L0043F0F8:
/* 0043F0F8 8F998570 */  lw    $t9, %call16(complex_init_duplicate_p)($gp)
/* 0043F0FC AFBE0138 */  sw    $fp, 0x138($sp)
/* 0043F100 02402025 */  move  $a0, $s2
/* 0043F104 0320F809 */  jalr  $t9
/* 0043F108 02C02825 */   move  $a1, $s6
/* 0043F10C 27B90130 */  addiu $t9, $sp, 0x130
/* 0043F110 8F2B0000 */  lw    $t3, ($t9)
/* 0043F114 8E4E0020 */  lw    $t6, 0x20($s2)
/* 0043F118 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0043F11C AE4B0000 */  sw    $t3, ($s2)
/* 0043F120 8F2F0004 */  lw    $t7, 4($t9)
/* 0043F124 AE4F0004 */  sw    $t7, 4($s2)
/* 0043F128 8F2B0008 */  lw    $t3, 8($t9)
/* 0043F12C AE4B0008 */  sw    $t3, 8($s2)
/* 0043F130 8F2F000C */  lw    $t7, 0xc($t9)
/* 0043F134 AE4F000C */  sw    $t7, 0xc($s2)
/* 0043F138 8F2B0010 */  lw    $t3, 0x10($t9)
/* 0043F13C AE4B0010 */  sw    $t3, 0x10($s2)
/* 0043F140 8F2F0014 */  lw    $t7, 0x14($t9)
/* 0043F144 AE4F0014 */  sw    $t7, 0x14($s2)
/* 0043F148 8F2B0018 */  lw    $t3, 0x18($t9)
/* 0043F14C AE4B0018 */  sw    $t3, 0x18($s2)
/* 0043F150 8F2F001C */  lw    $t7, 0x1c($t9)
/* 0043F154 AE4F001C */  sw    $t7, 0x1c($s2)
/* 0043F158 100000B5 */  b     .L0043F430
/* 0043F15C ADD0000C */   sw    $s0, 0xc($t6)
.L0043F160:
/* 0043F160 8F998570 */  lw    $t9, %call16(complex_init_duplicate_p)($gp)
/* 0043F164 02402025 */  move  $a0, $s2
/* 0043F168 02C02825 */  move  $a1, $s6
/* 0043F16C AFB3013C */  sw    $s3, 0x13c($sp)
/* 0043F170 0320F809 */  jalr  $t9
/* 0043F174 AFBE0138 */   sw    $fp, 0x138($sp)
/* 0043F178 27AA0130 */  addiu $t2, $sp, 0x130
/* 0043F17C 8D4D0000 */  lw    $t5, ($t2)
/* 0043F180 93B80131 */  lbu   $t8, 0x131($sp)
/* 0043F184 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0043F188 AE4D0000 */  sw    $t5, ($s2)
/* 0043F18C 8D4C0004 */  lw    $t4, 4($t2)
/* 0043F190 3319001F */  andi  $t9, $t8, 0x1f
/* 0043F194 AE4C0004 */  sw    $t4, 4($s2)
/* 0043F198 8D4D0008 */  lw    $t5, 8($t2)
/* 0043F19C AE4D0008 */  sw    $t5, 8($s2)
/* 0043F1A0 8D4C000C */  lw    $t4, 0xc($t2)
/* 0043F1A4 AE4C000C */  sw    $t4, 0xc($s2)
/* 0043F1A8 8D4D0010 */  lw    $t5, 0x10($t2)
/* 0043F1AC AE4D0010 */  sw    $t5, 0x10($s2)
/* 0043F1B0 8D4C0014 */  lw    $t4, 0x14($t2)
/* 0043F1B4 AE4C0014 */  sw    $t4, 0x14($s2)
/* 0043F1B8 8D4D0018 */  lw    $t5, 0x18($t2)
/* 0043F1BC AE4D0018 */  sw    $t5, 0x18($s2)
/* 0043F1C0 8D4C001C */  lw    $t4, 0x1c($t2)
/* 0043F1C4 16B9003E */  bne   $s5, $t9, .L0043F2C0
/* 0043F1C8 AE4C001C */   sw    $t4, 0x1c($s2)
/* 0043F1CC 93AF0111 */  lbu   $t7, 0x111($sp)
/* 0043F1D0 8FB3013C */  lw    $s3, 0x13c($sp)
/* 0043F1D4 8FBE0138 */  lw    $fp, 0x138($sp)
/* 0043F1D8 31EB001F */  andi  $t3, $t7, 0x1f
/* 0043F1DC 56AB0039 */  bnel  $s5, $t3, .L0043F2C4
/* 0043F1E0 8FB3013C */   lw    $s3, 0x13c($sp)
/* 0043F1E4 02931023 */  subu  $v0, $s4, $s3
/* 0043F1E8 8F9987E8 */  lw    $t9, %call16(new)($gp)
/* 0043F1EC 02629821 */  addu  $s3, $s3, $v0
/* 0043F1F0 00408825 */  move  $s1, $v0
/* 0043F1F4 AE420008 */  sw    $v0, 8($s2)
/* 0043F1F8 AE420018 */  sw    $v0, 0x18($s2)
/* 0043F1FC 03C2F023 */  subu  $fp, $fp, $v0
/* 0043F200 AFB30140 */  sw    $s3, 0x140($sp)
/* 0043F204 24040400 */  li    $a0, 1024
/* 0043F208 00002825 */  move  $a1, $zero
/* 0043F20C 0320F809 */  jalr  $t9
/* 0043F210 24100001 */   li    $s0, 1
/* 0043F214 8FAE0148 */  lw    $t6, 0x148($sp)
/* 0043F218 26280001 */  addiu $t0, $s1, 1
/* 0043F21C 8FBC00CC */  lw    $gp, 0xcc($sp)
/* 0043F220 01C8082B */  sltu  $at, $t6, $t0
/* 0043F224 14200021 */  bnez  $at, .L0043F2AC
/* 0043F228 25C70001 */   addiu $a3, $t6, 1
/* 0043F22C 00E84823 */  subu  $t1, $a3, $t0
/* 0043F230 31290003 */  andi  $t1, $t1, 3
/* 0043F234 1120000E */  beqz  $t1, .L0043F270
/* 0043F238 01002825 */   move  $a1, $t0
/* 0043F23C 8FAA014C */  lw    $t2, 0x14c($sp)
/* 0043F240 01283021 */  addu  $a2, $t1, $t0
/* 0043F244 00501821 */  addu  $v1, $v0, $s0
/* 0043F248 01482021 */  addu  $a0, $t2, $t0
.L0043F24C:
/* 0043F24C 908CFFFF */  lbu   $t4, -1($a0)
/* 0043F250 24A50001 */  addiu $a1, $a1, 1
/* 0043F254 26100001 */  addiu $s0, $s0, 1
/* 0043F258 24630001 */  addiu $v1, $v1, 1
/* 0043F25C 24840001 */  addiu $a0, $a0, 1
/* 0043F260 14C5FFFA */  bne   $a2, $a1, .L0043F24C
/* 0043F264 A06CFFFE */   sb    $t4, -2($v1)
/* 0043F268 50A70011 */  beql  $a1, $a3, .L0043F2B0
/* 0043F26C 8FAE0140 */   lw    $t6, 0x140($sp)
.L0043F270:
/* 0043F270 8FAD014C */  lw    $t5, 0x14c($sp)
/* 0043F274 00501821 */  addu  $v1, $v0, $s0
/* 0043F278 01A52021 */  addu  $a0, $t5, $a1
.L0043F27C:
/* 0043F27C 9098FFFF */  lbu   $t8, -1($a0)
/* 0043F280 24A50004 */  addiu $a1, $a1, 4
/* 0043F284 24630004 */  addiu $v1, $v1, 4
/* 0043F288 A078FFFB */  sb    $t8, -5($v1)
/* 0043F28C 90990000 */  lbu   $t9, ($a0)
/* 0043F290 24840004 */  addiu $a0, $a0, 4
/* 0043F294 A079FFFC */  sb    $t9, -4($v1)
/* 0043F298 908FFFFD */  lbu   $t7, -3($a0)
/* 0043F29C A06FFFFD */  sb    $t7, -3($v1)
/* 0043F2A0 908BFFFE */  lbu   $t3, -2($a0)
/* 0043F2A4 14A7FFF5 */  bne   $a1, $a3, .L0043F27C
/* 0043F2A8 A06BFFFE */   sb    $t3, -2($v1)
.L0043F2AC:
/* 0043F2AC 8FAE0140 */  lw    $t6, 0x140($sp)
.L0043F2B0:
/* 0043F2B0 AFA2014C */  sw    $v0, 0x14c($sp)
/* 0043F2B4 AFBE0148 */  sw    $fp, 0x148($sp)
/* 0043F2B8 10000058 */  b     .L0043F41C
/* 0043F2BC 01DE8021 */   addu  $s0, $t6, $fp
.L0043F2C0:
/* 0043F2C0 8FB3013C */  lw    $s3, 0x13c($sp)
.L0043F2C4:
/* 0043F2C4 8FBE0138 */  lw    $fp, 0x138($sp)
/* 0043F2C8 8E4F0020 */  lw    $t7, 0x20($s2)
/* 0043F2CC 02935023 */  subu  $t2, $s4, $s3
/* 0043F2D0 015E001A */  div   $zero, $t2, $fp
/* 0043F2D4 00006012 */  mflo  $t4
/* 0043F2D8 258DFFFF */  addiu $t5, $t4, -1
/* 0043F2DC 17C00002 */  bnez  $fp, .L0043F2E8
/* 0043F2E0 00000000 */   nop   
/* 0043F2E4 0007000D */  break 7
.L0043F2E8:
/* 0043F2E8 2401FFFF */  li    $at, -1
/* 0043F2EC 17C10004 */  bne   $fp, $at, .L0043F300
/* 0043F2F0 3C018000 */   lui   $at, 0x8000
/* 0043F2F4 15410002 */  bne   $t2, $at, .L0043F300
/* 0043F2F8 00000000 */   nop   
/* 0043F2FC 0006000D */  break 6
.L0043F300:
/* 0043F300 01BE0019 */  multu $t5, $fp
/* 0043F304 24040002 */  li    $a0, 2
/* 0043F308 0000C012 */  mflo  $t8
/* 0043F30C 0278C821 */  addu  $t9, $s3, $t8
/* 0043F310 AE590010 */  sw    $t9, 0x10($s2)
/* 0043F314 ADF4000C */  sw    $s4, 0xc($t7)
/* 0043F318 8E4B0010 */  lw    $t3, 0x10($s2)
/* 0043F31C 017E9821 */  addu  $s3, $t3, $fp
/* 0043F320 5274003F */  beql  $s3, $s4, .L0043F420
/* 0043F324 8E520020 */   lw    $s2, 0x20($s2)
/* 0043F328 8F8E8038 */  lw    $t6, %got(RO_1000CA2C)($gp)
/* 0043F32C 2405024F */  li    $a1, 591
/* 0043F330 03A06825 */  move  $t5, $sp
/* 0043F334 25CECA2C */  addiu $t6, %lo(RO_1000CA2C) # addiu $t6, $t6, -0x35d4
/* 0043F338 25D80048 */  addiu $t8, $t6, 0x48
.L0043F33C:
/* 0043F33C 89CC0000 */  lwl   $t4, ($t6)
/* 0043F340 99CC0003 */  lwr   $t4, 3($t6)
/* 0043F344 25CE000C */  addiu $t6, $t6, 0xc
/* 0043F348 25AD000C */  addiu $t5, $t5, 0xc
/* 0043F34C A9ACFFFC */  swl   $t4, -4($t5)
/* 0043F350 B9ACFFFF */  swr   $t4, -1($t5)
/* 0043F354 89CAFFF8 */  lwl   $t2, -8($t6)
/* 0043F358 99CAFFFB */  lwr   $t2, -5($t6)
/* 0043F35C A9AA0000 */  swl   $t2, ($t5)
/* 0043F360 B9AA0003 */  swr   $t2, 3($t5)
/* 0043F364 89CCFFFC */  lwl   $t4, -4($t6)
/* 0043F368 99CCFFFF */  lwr   $t4, -1($t6)
/* 0043F36C A9AC0004 */  swl   $t4, 4($t5)
/* 0043F370 15D8FFF2 */  bne   $t6, $t8, .L0043F33C
/* 0043F374 B9AC0007 */   swr   $t4, 7($t5)
/* 0043F378 89CC0000 */  lwl   $t4, ($t6)
/* 0043F37C 99CC0003 */  lwr   $t4, 3($t6)
/* 0043F380 8F998038 */  lw    $t9, %got(RO_1000C9DC)($gp)
/* 0043F384 03A0C025 */  move  $t8, $sp
/* 0043F388 A9AC0008 */  swl   $t4, 8($t5)
/* 0043F38C B9AC000B */  swr   $t4, 0xb($t5)
/* 0043F390 89CA0004 */  lwl   $t2, 4($t6)
/* 0043F394 99CA0007 */  lwr   $t2, 7($t6)
/* 0043F398 2739C9DC */  addiu $t9, %lo(RO_1000C9DC) # addiu $t9, $t9, -0x3624
/* 0043F39C 272E0048 */  addiu $t6, $t9, 0x48
/* 0043F3A0 A9AA000C */  swl   $t2, 0xc($t5)
/* 0043F3A4 B9AA000F */  swr   $t2, 0xf($t5)
.L0043F3A8:
/* 0043F3A8 8B2B0000 */  lwl   $t3, ($t9)
/* 0043F3AC 9B2B0003 */  lwr   $t3, 3($t9)
/* 0043F3B0 2739000C */  addiu $t9, $t9, 0xc
/* 0043F3B4 2718000C */  addiu $t8, $t8, 0xc
/* 0043F3B8 AB0B004C */  swl   $t3, 0x4c($t8)
/* 0043F3BC BB0B004F */  swr   $t3, 0x4f($t8)
/* 0043F3C0 8B2FFFF8 */  lwl   $t7, -8($t9)
/* 0043F3C4 9B2FFFFB */  lwr   $t7, -5($t9)
/* 0043F3C8 AB0F0050 */  swl   $t7, 0x50($t8)
/* 0043F3CC BB0F0053 */  swr   $t7, 0x53($t8)
/* 0043F3D0 8B2BFFFC */  lwl   $t3, -4($t9)
/* 0043F3D4 9B2BFFFF */  lwr   $t3, -1($t9)
/* 0043F3D8 AB0B0054 */  swl   $t3, 0x54($t8)
/* 0043F3DC 172EFFF2 */  bne   $t9, $t6, .L0043F3A8
/* 0043F3E0 BB0B0057 */   swr   $t3, 0x57($t8)
/* 0043F3E4 8B2B0000 */  lwl   $t3, ($t9)
/* 0043F3E8 9B2B0003 */  lwr   $t3, 3($t9)
/* 0043F3EC AB0B0058 */  swl   $t3, 0x58($t8)
/* 0043F3F0 BB0B005B */  swr   $t3, 0x5b($t8)
/* 0043F3F4 8B2F0004 */  lwl   $t7, 4($t9)
/* 0043F3F8 9B2F0007 */  lwr   $t7, 7($t9)
/* 0043F3FC AB0F005C */  swl   $t7, 0x5c($t8)
/* 0043F400 BB0F005F */  swr   $t7, 0x5f($t8)
/* 0043F404 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 0043F408 8FA7000C */  lw    $a3, 0xc($sp)
/* 0043F40C 8FA60008 */  lw    $a2, 8($sp)
/* 0043F410 0320F809 */  jalr  $t9
/* 0043F414 00000000 */   nop   
/* 0043F418 8FBC00CC */  lw    $gp, 0xcc($sp)
.L0043F41C:
/* 0043F41C 8E520020 */  lw    $s2, 0x20($s2)
.L0043F420:
/* 0043F420 8FA30140 */  lw    $v1, 0x140($sp)
.L0043F424:
/* 0043F424 0270082A */  slt   $at, $s3, $s0
/* 0043F428 5420FE23 */  bnel  $at, $zero, .L0043ECB8
/* 0043F42C 8E4D0000 */   lw    $t5, ($s2)
.L0043F430:
/* 0043F430 8FBF00D4 */  lw    $ra, 0xd4($sp)
.L0043F434:
/* 0043F434 8FB000AC */  lw    $s0, 0xac($sp)
/* 0043F438 8FB100B0 */  lw    $s1, 0xb0($sp)
/* 0043F43C 8FB200B4 */  lw    $s2, 0xb4($sp)
/* 0043F440 8FB300B8 */  lw    $s3, 0xb8($sp)
/* 0043F444 8FB400BC */  lw    $s4, 0xbc($sp)
/* 0043F448 8FB500C0 */  lw    $s5, 0xc0($sp)
/* 0043F44C 8FB600C4 */  lw    $s6, 0xc4($sp)
/* 0043F450 8FB700C8 */  lw    $s7, 0xc8($sp)
/* 0043F454 8FBE00D0 */  lw    $fp, 0xd0($sp)
/* 0043F458 03E00008 */  jr    $ra
/* 0043F45C 27BD0150 */   addiu $sp, $sp, 0x150
    .type complex_insert_init, @function
    .size complex_insert_init, .-complex_insert_init
    .end complex_insert_init

glabel append_init
    .ent append_init
    # 0043F9E4 add_init
/* 0043F460 3C1C0FBE */  .cpload $t9
/* 0043F464 279C05F0 */  
/* 0043F468 0399E021 */  
/* 0043F46C 27BDFF40 */  addiu $sp, $sp, -0xc0
/* 0043F470 AFBF00BC */  sw    $ra, 0xbc($sp)
/* 0043F474 AFBC00B8 */  sw    $gp, 0xb8($sp)
/* 0043F478 AFB100B4 */  sw    $s1, 0xb4($sp)
/* 0043F47C AFB000B0 */  sw    $s0, 0xb0($sp)
/* 0043F480 AFA500C4 */  sw    $a1, 0xc4($sp)
/* 0043F484 90A20001 */  lbu   $v0, 1($a1)
/* 0043F488 00808825 */  move  $s1, $a0
/* 0043F48C 3042001F */  andi  $v0, $v0, 0x1f
/* 0043F490 304200FF */  andi  $v0, $v0, 0xff
/* 0043F494 244FFFFA */  addiu $t7, $v0, -6
/* 0043F498 2DE1000B */  sltiu $at, $t7, 0xb
/* 0043F49C 50200023 */  beql  $at, $zero, .L0043F52C
/* 0043F4A0 00008025 */   move  $s0, $zero
/* 0043F4A4 8F818038 */  lw    $at, %got(jtbl_1000CCFC)($gp)
/* 0043F4A8 000F7880 */  sll   $t7, $t7, 2
/* 0043F4AC 002F0821 */  addu  $at, $at, $t7
/* 0043F4B0 8C2FCCFC */  lw    $t7, %lo(jtbl_1000CCFC)($at)
/* 0043F4B4 01FC7821 */  addu  $t7, $t7, $gp
/* 0043F4B8 01E00008 */  jr    $t7
/* 0043F4BC 00000000 */   nop   
.L0043F4C0:
/* 0043F4C0 8FB800C4 */  lw    $t8, 0xc4($sp)
/* 0043F4C4 02202025 */  move  $a0, $s1
/* 0043F4C8 8F0D0000 */  lw    $t5, ($t8)
/* 0043F4CC AFAD0008 */  sw    $t5, 8($sp)
/* 0043F4D0 8F190004 */  lw    $t9, 4($t8)
/* 0043F4D4 8FA60008 */  lw    $a2, 8($sp)
/* 0043F4D8 AFB9000C */  sw    $t9, 0xc($sp)
/* 0043F4DC 8F0D0008 */  lw    $t5, 8($t8)
/* 0043F4E0 8FA7000C */  lw    $a3, 0xc($sp)
/* 0043F4E4 AFAD0010 */  sw    $t5, 0x10($sp)
/* 0043F4E8 8F19000C */  lw    $t9, 0xc($t8)
/* 0043F4EC AFB90014 */  sw    $t9, 0x14($sp)
/* 0043F4F0 8F0D0010 */  lw    $t5, 0x10($t8)
/* 0043F4F4 AFAD0018 */  sw    $t5, 0x18($sp)
/* 0043F4F8 8F190014 */  lw    $t9, 0x14($t8)
/* 0043F4FC AFB9001C */  sw    $t9, 0x1c($sp)
/* 0043F500 8F0D0018 */  lw    $t5, 0x18($t8)
/* 0043F504 AFAD0020 */  sw    $t5, 0x20($sp)
/* 0043F508 8F19001C */  lw    $t9, 0x1c($t8)
/* 0043F50C AFB90024 */  sw    $t9, 0x24($sp)
/* 0043F510 8F99856C */  lw    $t9, %call16(some_init_overlap)($gp)
/* 0043F514 0320F809 */  jalr  $t9
/* 0043F518 00000000 */   nop   
/* 0043F51C 8FBC00B8 */  lw    $gp, 0xb8($sp)
/* 0043F520 10000002 */  b     .L0043F52C
/* 0043F524 00408025 */   move  $s0, $v0
.L0043F528:
/* 0043F528 00008025 */  move  $s0, $zero
.L0043F52C:
/* 0043F52C 12000019 */  beqz  $s0, .L0043F594
/* 0043F530 8FAE00C4 */   lw    $t6, 0xc4($sp)
/* 0043F534 8DD80000 */  lw    $t8, ($t6)
/* 0043F538 8F998574 */  lw    $t9, %call16(complex_insert_init)($gp)
/* 0043F53C 02002025 */  move  $a0, $s0
/* 0043F540 AFB80008 */  sw    $t8, 8($sp)
/* 0043F544 8DCF0004 */  lw    $t7, 4($t6)
/* 0043F548 8FA60008 */  lw    $a2, 8($sp)
/* 0043F54C 02202825 */  move  $a1, $s1
/* 0043F550 AFAF000C */  sw    $t7, 0xc($sp)
/* 0043F554 8DD80008 */  lw    $t8, 8($t6)
/* 0043F558 8FA7000C */  lw    $a3, 0xc($sp)
/* 0043F55C AFB80010 */  sw    $t8, 0x10($sp)
/* 0043F560 8DCF000C */  lw    $t7, 0xc($t6)
/* 0043F564 AFAF0014 */  sw    $t7, 0x14($sp)
/* 0043F568 8DD80010 */  lw    $t8, 0x10($t6)
/* 0043F56C AFB80018 */  sw    $t8, 0x18($sp)
/* 0043F570 8DCF0014 */  lw    $t7, 0x14($t6)
/* 0043F574 AFAF001C */  sw    $t7, 0x1c($sp)
/* 0043F578 8DD80018 */  lw    $t8, 0x18($t6)
/* 0043F57C AFB80020 */  sw    $t8, 0x20($sp)
/* 0043F580 8DCF001C */  lw    $t7, 0x1c($t6)
/* 0043F584 0320F809 */  jalr  $t9
/* 0043F588 AFAF0024 */   sw    $t7, 0x24($sp)
/* 0043F58C 10000110 */  b     .L0043F9D0
/* 0043F590 8FBC00B8 */   lw    $gp, 0xb8($sp)
.L0043F594:
/* 0043F594 8F9987E8 */  lw    $t9, %call16(new)($gp)
/* 0043F598 24040028 */  li    $a0, 40
/* 0043F59C 24050001 */  li    $a1, 1
/* 0043F5A0 0320F809 */  jalr  $t9
/* 0043F5A4 00000000 */   nop   
/* 0043F5A8 8FBC00B8 */  lw    $gp, 0xb8($sp)
/* 0043F5AC 14400040 */  bnez  $v0, .L0043F6B0
/* 0043F5B0 8FA700C4 */   lw    $a3, 0xc4($sp)
/* 0043F5B4 8F998038 */  lw    $t9, %got(RO_1000CCAC)($gp)
/* 0043F5B8 24040004 */  li    $a0, 4
/* 0043F5BC 24050275 */  li    $a1, 629
/* 0043F5C0 2739CCAC */  addiu $t9, %lo(RO_1000CCAC) # addiu $t9, $t9, -0x3354
/* 0043F5C4 27380048 */  addiu $t8, $t9, 0x48
/* 0043F5C8 03A07825 */  move  $t7, $sp
.L0043F5CC:
/* 0043F5CC 8B2E0000 */  lwl   $t6, ($t9)
/* 0043F5D0 9B2E0003 */  lwr   $t6, 3($t9)
/* 0043F5D4 2739000C */  addiu $t9, $t9, 0xc
/* 0043F5D8 25EF000C */  addiu $t7, $t7, 0xc
/* 0043F5DC A9EEFFFC */  swl   $t6, -4($t7)
/* 0043F5E0 B9EEFFFF */  swr   $t6, -1($t7)
/* 0043F5E4 8B2DFFF8 */  lwl   $t5, -8($t9)
/* 0043F5E8 9B2DFFFB */  lwr   $t5, -5($t9)
/* 0043F5EC A9ED0000 */  swl   $t5, ($t7)
/* 0043F5F0 B9ED0003 */  swr   $t5, 3($t7)
/* 0043F5F4 8B2EFFFC */  lwl   $t6, -4($t9)
/* 0043F5F8 9B2EFFFF */  lwr   $t6, -1($t9)
/* 0043F5FC A9EE0004 */  swl   $t6, 4($t7)
/* 0043F600 1738FFF2 */  bne   $t9, $t8, .L0043F5CC
/* 0043F604 B9EE0007 */   swr   $t6, 7($t7)
/* 0043F608 8B2E0000 */  lwl   $t6, ($t9)
/* 0043F60C 9B2E0003 */  lwr   $t6, 3($t9)
/* 0043F610 8F988038 */  lw    $t8, %got(RO_1000CC5C)($gp)
/* 0043F614 A9EE0008 */  swl   $t6, 8($t7)
/* 0043F618 B9EE000B */  swr   $t6, 0xb($t7)
/* 0043F61C 8B2D0004 */  lwl   $t5, 4($t9)
/* 0043F620 9B2D0007 */  lwr   $t5, 7($t9)
/* 0043F624 2718CC5C */  addiu $t8, %lo(RO_1000CC5C) # addiu $t8, $t8, -0x33a4
/* 0043F628 270E0048 */  addiu $t6, $t8, 0x48
/* 0043F62C A9ED000C */  swl   $t5, 0xc($t7)
/* 0043F630 B9ED000F */  swr   $t5, 0xf($t7)
/* 0043F634 03A06825 */  move  $t5, $sp
.L0043F638:
/* 0043F638 8B0F0000 */  lwl   $t7, ($t8)
/* 0043F63C 9B0F0003 */  lwr   $t7, 3($t8)
/* 0043F640 2718000C */  addiu $t8, $t8, 0xc
/* 0043F644 25AD000C */  addiu $t5, $t5, 0xc
/* 0043F648 A9AF004C */  swl   $t7, 0x4c($t5)
/* 0043F64C B9AF004F */  swr   $t7, 0x4f($t5)
/* 0043F650 8B19FFF8 */  lwl   $t9, -8($t8)
/* 0043F654 9B19FFFB */  lwr   $t9, -5($t8)
/* 0043F658 A9B90050 */  swl   $t9, 0x50($t5)
/* 0043F65C B9B90053 */  swr   $t9, 0x53($t5)
/* 0043F660 8B0FFFFC */  lwl   $t7, -4($t8)
/* 0043F664 9B0FFFFF */  lwr   $t7, -1($t8)
/* 0043F668 A9AF0054 */  swl   $t7, 0x54($t5)
/* 0043F66C 170EFFF2 */  bne   $t8, $t6, .L0043F638
/* 0043F670 B9AF0057 */   swr   $t7, 0x57($t5)
/* 0043F674 8B0F0000 */  lwl   $t7, ($t8)
/* 0043F678 9B0F0003 */  lwr   $t7, 3($t8)
/* 0043F67C A9AF0058 */  swl   $t7, 0x58($t5)
/* 0043F680 B9AF005B */  swr   $t7, 0x5b($t5)
/* 0043F684 8B190004 */  lwl   $t9, 4($t8)
/* 0043F688 9B190007 */  lwr   $t9, 7($t8)
/* 0043F68C A9B9005C */  swl   $t9, 0x5c($t5)
/* 0043F690 B9B9005F */  swr   $t9, 0x5f($t5)
/* 0043F694 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 0043F698 8FA7000C */  lw    $a3, 0xc($sp)
/* 0043F69C 8FA60008 */  lw    $a2, 8($sp)
/* 0043F6A0 0320F809 */  jalr  $t9
/* 0043F6A4 00000000 */   nop   
/* 0043F6A8 100000C9 */  b     .L0043F9D0
/* 0043F6AC 8FBC00B8 */   lw    $gp, 0xb8($sp)
.L0043F6B0:
/* 0043F6B0 8F838904 */  lw     $v1, %got(headof_inordered_inits)($gp)
/* 0043F6B4 8C6E0000 */  lw    $t6, ($v1)
/* 0043F6B8 55C00006 */  bnel  $t6, $zero, .L0043F6D4
/* 0043F6BC 8E380024 */   lw    $t8, 0x24($s1)
/* 0043F6C0 8F848908 */  lw     $a0, %got(tailof_inordered_inits)($gp)
/* 0043F6C4 AC710000 */  sw    $s1, ($v1)
/* 0043F6C8 1000000A */  b     .L0043F6F4
/* 0043F6CC AC910000 */   sw    $s1, ($a0)
/* 0043F6D0 8E380024 */  lw    $t8, 0x24($s1)
.L0043F6D4:
/* 0043F6D4 57000008 */  bnel  $t8, $zero, .L0043F6F8
/* 0043F6D8 8CF90000 */   lw    $t9, ($a3)
/* 0043F6DC 8F848908 */  lw     $a0, %got(tailof_inordered_inits)($gp)
/* 0043F6E0 8C830000 */  lw    $v1, ($a0)
/* 0043F6E4 52230004 */  beql  $s1, $v1, .L0043F6F8
/* 0043F6E8 8CF90000 */   lw    $t9, ($a3)
/* 0043F6EC AC710024 */  sw    $s1, 0x24($v1)
/* 0043F6F0 AC910000 */  sw    $s1, ($a0)
.L0043F6F4:
/* 0043F6F4 8CF90000 */  lw    $t9, ($a3)
.L0043F6F8:
/* 0043F6F8 8F8689A4 */  lw     $a2, %got(source_language)($gp)
/* 0043F6FC 240A0002 */  li    $t2, 2
/* 0043F700 AC590000 */  sw    $t9, ($v0)
/* 0043F704 8CED0004 */  lw    $t5, 4($a3)
/* 0043F708 AC4D0004 */  sw    $t5, 4($v0)
/* 0043F70C 8CF90008 */  lw    $t9, 8($a3)
/* 0043F710 AC590008 */  sw    $t9, 8($v0)
/* 0043F714 8CED000C */  lw    $t5, 0xc($a3)
/* 0043F718 AC4D000C */  sw    $t5, 0xc($v0)
/* 0043F71C 8CF90010 */  lw    $t9, 0x10($a3)
/* 0043F720 AC590010 */  sw    $t9, 0x10($v0)
/* 0043F724 8CED0014 */  lw    $t5, 0x14($a3)
/* 0043F728 AC4D0014 */  sw    $t5, 0x14($v0)
/* 0043F72C 8CF90018 */  lw    $t9, 0x18($a3)
/* 0043F730 AC590018 */  sw    $t9, 0x18($v0)
/* 0043F734 8CED001C */  lw    $t5, 0x1c($a3)
/* 0043F738 AC400020 */  sw    $zero, 0x20($v0)
/* 0043F73C AC4D001C */  sw    $t5, 0x1c($v0)
/* 0043F740 8CC60000 */  lw    $a2, ($a2)
/* 0043F744 15460019 */  bne   $t2, $a2, .L0043F7AC
/* 0043F748 00000000 */   nop   
/* 0043F74C 8E2B001C */  lw    $t3, 0x1c($s1)
/* 0043F750 11600016 */  beqz  $t3, .L0043F7AC
/* 0043F754 00000000 */   nop   
/* 0043F758 8F83890C */  lw     $v1, %got(last_inits_handled)($gp)
/* 0043F75C 01608025 */  move  $s0, $t3
/* 0043F760 8C630000 */  lw    $v1, ($v1)
/* 0043F764 10600011 */  beqz  $v1, .L0043F7AC
/* 0043F768 00000000 */   nop   
/* 0043F76C 8C6F0020 */  lw    $t7, 0x20($v1)
/* 0043F770 11E0000E */  beqz  $t7, .L0043F7AC
/* 0043F774 00000000 */   nop   
/* 0043F778 8F988910 */  lw     $t8, %got(last_inits_handled_blkno)($gp)
/* 0043F77C 8CEE0004 */  lw    $t6, 4($a3)
/* 0043F780 8F180000 */  lw    $t8, ($t8)
/* 0043F784 15D80009 */  bne   $t6, $t8, .L0043F7AC
/* 0043F788 00000000 */   nop   
/* 0043F78C 8C790010 */  lw    $t9, 0x10($v1)
/* 0043F790 8C6F0008 */  lw    $t7, 8($v1)
/* 0043F794 8CED000C */  lw    $t5, 0xc($a3)
/* 0043F798 032F7021 */  addu  $t6, $t9, $t7
/* 0043F79C 01AE082A */  slt   $at, $t5, $t6
/* 0043F7A0 14200002 */  bnez  $at, .L0043F7AC
/* 0043F7A4 00000000 */   nop   
/* 0043F7A8 00608025 */  move  $s0, $v1
.L0043F7AC:
/* 0043F7AC 8F81890C */  lw     $at, %got(last_inits_handled)($gp)
/* 0043F7B0 AC220000 */  sw    $v0, ($at)
/* 0043F7B4 8C580004 */  lw    $t8, 4($v0)
/* 0043F7B8 8F818910 */  lw     $at, %got(last_inits_handled_blkno)($gp)
/* 0043F7BC AC380000 */  sw    $t8, ($at)
/* 0043F7C0 8E2B001C */  lw    $t3, 0x1c($s1)
/* 0043F7C4 55600005 */  bnel  $t3, $zero, .L0043F7DC
/* 0043F7C8 8E290020 */   lw    $t1, 0x20($s1)
/* 0043F7CC AE22001C */  sw    $v0, 0x1c($s1)
/* 0043F7D0 1000007F */  b     .L0043F9D0
/* 0043F7D4 AE220020 */   sw    $v0, 0x20($s1)
/* 0043F7D8 8E290020 */  lw    $t1, 0x20($s1)
.L0043F7DC:
/* 0043F7DC 8CE5000C */  lw    $a1, 0xc($a3)
/* 0043F7E0 8D39000C */  lw    $t9, 0xc($t1)
/* 0043F7E4 0325082A */  slt   $at, $t9, $a1
/* 0043F7E8 50200005 */  beql  $at, $zero, .L0043F800
/* 0043F7EC 8D6C000C */   lw    $t4, 0xc($t3)
/* 0043F7F0 AD220020 */  sw    $v0, 0x20($t1)
/* 0043F7F4 10000076 */  b     .L0043F9D0
/* 0043F7F8 AE220020 */   sw    $v0, 0x20($s1)
/* 0043F7FC 8D6C000C */  lw    $t4, 0xc($t3)
.L0043F800:
/* 0043F800 00AC082A */  slt   $at, $a1, $t4
/* 0043F804 10200004 */  beqz  $at, .L0043F818
/* 0043F808 00000000 */   nop   
/* 0043F80C AC4B0020 */  sw    $t3, 0x20($v0)
/* 0043F810 1000006F */  b     .L0043F9D0
/* 0043F814 AE22001C */   sw    $v0, 0x1c($s1)
.L0043F818:
/* 0043F818 51460003 */  beql  $t2, $a2, .L0043F828
/* 0043F81C 8E0F000C */   lw    $t7, 0xc($s0)
/* 0043F820 01608025 */  move  $s0, $t3
/* 0043F824 8E0F000C */  lw    $t7, 0xc($s0)
.L0043F828:
/* 0043F828 50AF0021 */  beql  $a1, $t7, .L0043F8B0
/* 0043F82C 24070001 */   li    $a3, 1
/* 0043F830 1209001E */  beq   $s0, $t1, .L0043F8AC
/* 0043F834 24070001 */   li    $a3, 1
/* 0043F838 8F8889BC */  lw     $t0, %got(apc)($gp)
.L0043F83C:
/* 0043F83C 8E040020 */  lw    $a0, 0x20($s0)
/* 0043F840 8C83000C */  lw    $v1, 0xc($a0)
/* 0043F844 00A3082A */  slt   $at, $a1, $v1
/* 0043F848 10200004 */  beqz  $at, .L0043F85C
/* 0043F84C 00000000 */   nop   
/* 0043F850 AC440020 */  sw    $a0, 0x20($v0)
/* 0043F854 1000005E */  b     .L0043F9D0
/* 0043F858 AE020020 */   sw    $v0, 0x20($s0)
.L0043F85C:
/* 0043F85C 14A30011 */  bne   $a1, $v1, .L0043F8A4
/* 0043F860 00000000 */   nop   
/* 0043F864 14E60004 */  bne   $a3, $a2, .L0043F878
/* 0043F868 00000000 */   nop   
/* 0043F86C 910D0000 */  lbu   $t5, ($t0)
/* 0043F870 15A00003 */  bnez  $t5, .L0043F880
/* 0043F874 00000000 */   nop   
.L0043F878:
/* 0043F878 1546000A */  bne   $t2, $a2, .L0043F8A4
/* 0043F87C 00000000 */   nop   
.L0043F880:
/* 0043F880 55240005 */  bnel  $t1, $a0, .L0043F898
/* 0043F884 8C8E0020 */   lw    $t6, 0x20($a0)
/* 0043F888 AE020020 */  sw    $v0, 0x20($s0)
/* 0043F88C 10000050 */  b     .L0043F9D0
/* 0043F890 AE220020 */   sw    $v0, 0x20($s1)
/* 0043F894 8C8E0020 */  lw    $t6, 0x20($a0)
.L0043F898:
/* 0043F898 AC4E0020 */  sw    $t6, 0x20($v0)
/* 0043F89C 1000004C */  b     .L0043F9D0
/* 0043F8A0 AE020020 */   sw    $v0, 0x20($s0)
.L0043F8A4:
/* 0043F8A4 1489FFE5 */  bne   $a0, $t1, .L0043F83C
/* 0043F8A8 00808025 */   move  $s0, $a0
.L0043F8AC:
/* 0043F8AC 24070001 */  li    $a3, 1
.L0043F8B0:
/* 0043F8B0 10E60003 */  beq   $a3, $a2, .L0043F8C0
/* 0043F8B4 00000000 */   nop   
/* 0043F8B8 15460007 */  bne   $t2, $a2, .L0043F8D8
/* 0043F8BC 00000000 */   nop   
.L0043F8C0:
/* 0043F8C0 15850005 */  bne   $t4, $a1, .L0043F8D8
/* 0043F8C4 00000000 */   nop   
/* 0043F8C8 8D780020 */  lw    $t8, 0x20($t3)
/* 0043F8CC AC580020 */  sw    $t8, 0x20($v0)
/* 0043F8D0 1000003F */  b     .L0043F9D0
/* 0043F8D4 AE22001C */   sw    $v0, 0x1c($s1)
.L0043F8D8:
/* 0043F8D8 8F998038 */  lw    $t9, %got(RO_1000CC0C)($gp)
/* 0043F8DC 24040004 */  li    $a0, 4
/* 0043F8E0 240502CB */  li    $a1, 715
/* 0043F8E4 2739CC0C */  addiu $t9, %lo(RO_1000CC0C) # addiu $t9, $t9, -0x33f4
/* 0043F8E8 27380048 */  addiu $t8, $t9, 0x48
/* 0043F8EC 03A07025 */  move  $t6, $sp
.L0043F8F0:
/* 0043F8F0 8B2D0000 */  lwl   $t5, ($t9)
/* 0043F8F4 9B2D0003 */  lwr   $t5, 3($t9)
/* 0043F8F8 2739000C */  addiu $t9, $t9, 0xc
/* 0043F8FC 25CE000C */  addiu $t6, $t6, 0xc
/* 0043F900 A9CDFFFC */  swl   $t5, -4($t6)
/* 0043F904 B9CDFFFF */  swr   $t5, -1($t6)
/* 0043F908 8B2FFFF8 */  lwl   $t7, -8($t9)
/* 0043F90C 9B2FFFFB */  lwr   $t7, -5($t9)
/* 0043F910 A9CF0000 */  swl   $t7, ($t6)
/* 0043F914 B9CF0003 */  swr   $t7, 3($t6)
/* 0043F918 8B2DFFFC */  lwl   $t5, -4($t9)
/* 0043F91C 9B2DFFFF */  lwr   $t5, -1($t9)
/* 0043F920 A9CD0004 */  swl   $t5, 4($t6)
/* 0043F924 1738FFF2 */  bne   $t9, $t8, .L0043F8F0
/* 0043F928 B9CD0007 */   swr   $t5, 7($t6)
/* 0043F92C 8B2D0000 */  lwl   $t5, ($t9)
/* 0043F930 9B2D0003 */  lwr   $t5, 3($t9)
/* 0043F934 8F988038 */  lw    $t8, %got(RO_1000CBBC)($gp)
/* 0043F938 A9CD0008 */  swl   $t5, 8($t6)
/* 0043F93C B9CD000B */  swr   $t5, 0xb($t6)
/* 0043F940 8B2F0004 */  lwl   $t7, 4($t9)
/* 0043F944 9B2F0007 */  lwr   $t7, 7($t9)
/* 0043F948 2718CBBC */  addiu $t8, %lo(RO_1000CBBC) # addiu $t8, $t8, -0x3444
/* 0043F94C 270D0048 */  addiu $t5, $t8, 0x48
/* 0043F950 A9CF000C */  swl   $t7, 0xc($t6)
/* 0043F954 B9CF000F */  swr   $t7, 0xf($t6)
/* 0043F958 03A07825 */  move  $t7, $sp
.L0043F95C:
/* 0043F95C 8B0E0000 */  lwl   $t6, ($t8)
/* 0043F960 9B0E0003 */  lwr   $t6, 3($t8)
/* 0043F964 2718000C */  addiu $t8, $t8, 0xc
/* 0043F968 25EF000C */  addiu $t7, $t7, 0xc
/* 0043F96C A9EE004C */  swl   $t6, 0x4c($t7)
/* 0043F970 B9EE004F */  swr   $t6, 0x4f($t7)
/* 0043F974 8B19FFF8 */  lwl   $t9, -8($t8)
/* 0043F978 9B19FFFB */  lwr   $t9, -5($t8)
/* 0043F97C A9F90050 */  swl   $t9, 0x50($t7)
/* 0043F980 B9F90053 */  swr   $t9, 0x53($t7)
/* 0043F984 8B0EFFFC */  lwl   $t6, -4($t8)
/* 0043F988 9B0EFFFF */  lwr   $t6, -1($t8)
/* 0043F98C A9EE0054 */  swl   $t6, 0x54($t7)
/* 0043F990 170DFFF2 */  bne   $t8, $t5, .L0043F95C
/* 0043F994 B9EE0057 */   swr   $t6, 0x57($t7)
/* 0043F998 8B0E0000 */  lwl   $t6, ($t8)
/* 0043F99C 9B0E0003 */  lwr   $t6, 3($t8)
/* 0043F9A0 A9EE0058 */  swl   $t6, 0x58($t7)
/* 0043F9A4 B9EE005B */  swr   $t6, 0x5b($t7)
/* 0043F9A8 8B190004 */  lwl   $t9, 4($t8)
/* 0043F9AC 9B190007 */  lwr   $t9, 7($t8)
/* 0043F9B0 A9F9005C */  swl   $t9, 0x5c($t7)
/* 0043F9B4 B9F9005F */  swr   $t9, 0x5f($t7)
/* 0043F9B8 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 0043F9BC 8FA7000C */  lw    $a3, 0xc($sp)
/* 0043F9C0 8FA60008 */  lw    $a2, 8($sp)
/* 0043F9C4 0320F809 */  jalr  $t9
/* 0043F9C8 00000000 */   nop   
/* 0043F9CC 8FBC00B8 */  lw    $gp, 0xb8($sp)
.L0043F9D0:
/* 0043F9D0 8FBF00BC */  lw    $ra, 0xbc($sp)
/* 0043F9D4 8FB000B0 */  lw    $s0, 0xb0($sp)
/* 0043F9D8 8FB100B4 */  lw    $s1, 0xb4($sp)
/* 0043F9DC 03E00008 */  jr    $ra
/* 0043F9E0 27BD00C0 */   addiu $sp, $sp, 0xc0
    .type append_init, @function
    .size append_init, .-append_init
    .end append_init

glabel add_init
    .ent add_init
    # 0040F4C8 build_tree
/* 0043F9E4 3C1C0FBE */  .cpload $t9
/* 0043F9E8 279C006C */  
/* 0043F9EC 0399E021 */  
/* 0043F9F0 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0043F9F4 8F99855C */  lw    $t9, %call16(lookup_sym)($gp)
/* 0043F9F8 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0043F9FC AFBC0018 */  sw    $gp, 0x18($sp)
/* 0043FA00 AFA40020 */  sw    $a0, 0x20($sp)
/* 0043FA04 0320F809 */  jalr  $t9
/* 0043FA08 8C840004 */   lw    $a0, 4($a0)
/* 0043FA0C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043FA10 00402025 */  move  $a0, $v0
/* 0043FA14 8FA50020 */  lw    $a1, 0x20($sp)
/* 0043FA18 8F998578 */  lw    $t9, %call16(append_init)($gp)
/* 0043FA1C 0320F809 */  jalr  $t9
/* 0043FA20 00000000 */   nop   
/* 0043FA24 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0043FA28 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043FA2C 27BD0020 */  addiu $sp, $sp, 0x20
/* 0043FA30 03E00008 */  jr    $ra
/* 0043FA34 00000000 */   nop   
    .type add_init, @function
    .size add_init, .-add_init
    .end add_init

glabel choose_area
    .ent choose_area
    # 00440398 emit_symbol
/* 0043FA38 3C1C0FBE */  .cpload $t9
/* 0043FA3C 279C0018 */  
/* 0043FA40 0399E021 */  
/* 0043FA44 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0043FA48 308200FF */  andi  $v0, $a0, 0xff
/* 0043FA4C 2C410006 */  sltiu $at, $v0, 6
/* 0043FA50 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0043FA54 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0043FA58 10200042 */  beqz  $at, .L0043FB64
/* 0043FA5C AFA40020 */   sw    $a0, 0x20($sp)
/* 0043FA60 8F818038 */  lw    $at, %got(jtbl_1000CD30)($gp)
/* 0043FA64 00027080 */  sll   $t6, $v0, 2
/* 0043FA68 002E0821 */  addu  $at, $at, $t6
/* 0043FA6C 8C2ECD30 */  lw    $t6, %lo(jtbl_1000CD30)($at)
/* 0043FA70 01DC7021 */  addu  $t6, $t6, $gp
/* 0043FA74 01C00008 */  jr    $t6
/* 0043FA78 00000000 */   nop   
.L0043FA7C:
/* 0043FA7C 8F8F8990 */  lw     $t7, %got(sdata_max)($gp)
/* 0043FA80 8DEF0000 */  lw    $t7, ($t7)
/* 0043FA84 01E5082A */  slt   $at, $t7, $a1
/* 0043FA88 10200008 */  beqz  $at, .L0043FAAC
/* 0043FA8C 00000000 */   nop   
/* 0043FA90 8F998280 */  lw    $t9, %call16(demit_dir0)($gp)
/* 0043FA94 2404000A */  li    $a0, 10
/* 0043FA98 00002825 */  move  $a1, $zero
/* 0043FA9C 0320F809 */  jalr  $t9
/* 0043FAA0 00000000 */   nop   
/* 0043FAA4 10000037 */  b     .L0043FB84
/* 0043FAA8 8FBC0018 */   lw    $gp, 0x18($sp)
.L0043FAAC:
/* 0043FAAC 8F998280 */  lw    $t9, %call16(demit_dir0)($gp)
/* 0043FAB0 24040019 */  li    $a0, 25
/* 0043FAB4 00002825 */  move  $a1, $zero
/* 0043FAB8 0320F809 */  jalr  $t9
/* 0043FABC 00000000 */   nop   
/* 0043FAC0 10000030 */  b     .L0043FB84
/* 0043FAC4 8FBC0018 */   lw    $gp, 0x18($sp)
.L0043FAC8:
/* 0043FAC8 8F998280 */  lw    $t9, %call16(demit_dir0)($gp)
/* 0043FACC 2404001A */  li    $a0, 26
/* 0043FAD0 00002825 */  move  $a1, $zero
/* 0043FAD4 0320F809 */  jalr  $t9
/* 0043FAD8 00000000 */   nop   
/* 0043FADC 10000029 */  b     .L0043FB84
/* 0043FAE0 8FBC0018 */   lw    $gp, 0x18($sp)
.L0043FAE4:
/* 0043FAE4 8F998280 */  lw    $t9, %call16(demit_dir0)($gp)
/* 0043FAE8 24040019 */  li    $a0, 25
/* 0043FAEC 00002825 */  move  $a1, $zero
/* 0043FAF0 0320F809 */  jalr  $t9
/* 0043FAF4 00000000 */   nop   
/* 0043FAF8 10000022 */  b     .L0043FB84
/* 0043FAFC 8FBC0018 */   lw    $gp, 0x18($sp)
.L0043FB00:
/* 0043FB00 8F998280 */  lw    $t9, %call16(demit_dir0)($gp)
/* 0043FB04 2404000A */  li    $a0, 10
/* 0043FB08 00002825 */  move  $a1, $zero
/* 0043FB0C 0320F809 */  jalr  $t9
/* 0043FB10 00000000 */   nop   
/* 0043FB14 1000001B */  b     .L0043FB84
/* 0043FB18 8FBC0018 */   lw    $gp, 0x18($sp)
.L0043FB1C:
/* 0043FB1C 8F998280 */  lw    $t9, %call16(demit_dir0)($gp)
/* 0043FB20 24040015 */  li    $a0, 21
/* 0043FB24 00002825 */  move  $a1, $zero
/* 0043FB28 0320F809 */  jalr  $t9
/* 0043FB2C 00000000 */   nop   
/* 0043FB30 10000014 */  b     .L0043FB84
/* 0043FB34 8FBC0018 */   lw    $gp, 0x18($sp)
.L0043FB38:
/* 0043FB38 8F98896C */  lw     $t8, %got(excpt)($gp)
/* 0043FB3C 93180000 */  lbu   $t8, ($t8)
/* 0043FB40 53000011 */  beql  $t8, $zero, .L0043FB88
/* 0043FB44 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0043FB48 8F99828C */  lw    $t9, %call16(demit_edata)($gp)
/* 0043FB4C 00002025 */  move  $a0, $zero
/* 0043FB50 00002825 */  move  $a1, $zero
/* 0043FB54 0320F809 */  jalr  $t9
/* 0043FB58 00003025 */   move  $a2, $zero
/* 0043FB5C 10000009 */  b     .L0043FB84
/* 0043FB60 8FBC0018 */   lw    $gp, 0x18($sp)
.L0043FB64:
/* 0043FB64 8F998808 */  lw    $t9, %call16(caseerror)($gp)
/* 0043FB68 8F868038 */  lw    $a2, %got(RO_1000CD28)($gp)
/* 0043FB6C 24040001 */  li    $a0, 1
/* 0043FB70 240502DA */  li    $a1, 730
/* 0043FB74 24070008 */  li    $a3, 8
/* 0043FB78 0320F809 */  jalr  $t9
/* 0043FB7C 24C6CD28 */   addiu $a2, %lo(RO_1000CD28) # addiu $a2, $a2, -0x32d8
/* 0043FB80 8FBC0018 */  lw    $gp, 0x18($sp)
.L0043FB84:
/* 0043FB84 8FBF001C */  lw    $ra, 0x1c($sp)
.L0043FB88:
/* 0043FB88 27BD0020 */  addiu $sp, $sp, 0x20
/* 0043FB8C 03E00008 */  jr    $ra
/* 0043FB90 00000000 */   nop   
    .type choose_area, @function
    .size choose_area, .-choose_area
    .end choose_area

glabel force_alignment
    .ent force_alignment
    # 00440398 emit_symbol
/* 0043FB94 3C1C0FBE */  .cpload $t9
/* 0043FB98 279CFEBC */  
/* 0043FB9C 0399E021 */  
/* 0043FBA0 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0043FBA4 308700FF */  andi  $a3, $a0, 0xff
/* 0043FBA8 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0043FBAC AFBC0018 */  sw    $gp, 0x18($sp)
/* 0043FBB0 10E00007 */  beqz  $a3, .L0043FBD0
/* 0043FBB4 AFA40020 */   sw    $a0, 0x20($sp)
/* 0043FBB8 8F998284 */  lw    $t9, %call16(demit_dir1)($gp)
/* 0043FBBC 24040004 */  li    $a0, 4
/* 0043FBC0 00002825 */  move  $a1, $zero
/* 0043FBC4 0320F809 */  jalr  $t9
/* 0043FBC8 00E03025 */   move  $a2, $a3
/* 0043FBCC 8FBC0018 */  lw    $gp, 0x18($sp)
.L0043FBD0:
/* 0043FBD0 8F998284 */  lw    $t9, %call16(demit_dir1)($gp)
/* 0043FBD4 24040004 */  li    $a0, 4
/* 0043FBD8 00002825 */  move  $a1, $zero
/* 0043FBDC 0320F809 */  jalr  $t9
/* 0043FBE0 00003025 */   move  $a2, $zero
/* 0043FBE4 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0043FBE8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0043FBEC 27BD0020 */  addiu $sp, $sp, 0x20
/* 0043FBF0 03E00008 */  jr    $ra
/* 0043FBF4 00000000 */   nop   
    .type force_alignment, @function
    .size force_alignment, .-force_alignment
    .end force_alignment

glabel emit_init
    .ent emit_init
    # 00440398 emit_symbol
/* 0043FBF8 3C1C0FBE */  .cpload $t9
/* 0043FBFC 279CFE58 */  
/* 0043FC00 0399E021 */  
/* 0043FC04 27BDFF28 */  addiu $sp, $sp, -0xd8
/* 0043FC08 8F998280 */  lw    $t9, %call16(demit_dir0)($gp)
/* 0043FC0C AFA400D8 */  sw    $a0, 0xd8($sp)
/* 0043FC10 8FAE00D8 */  lw    $t6, 0xd8($sp)
/* 0043FC14 AFBF00D4 */  sw    $ra, 0xd4($sp)
/* 0043FC18 AFBC00D0 */  sw    $gp, 0xd0($sp)
/* 0043FC1C AFB700CC */  sw    $s7, 0xcc($sp)
/* 0043FC20 AFB600C8 */  sw    $s6, 0xc8($sp)
/* 0043FC24 AFB500C4 */  sw    $s5, 0xc4($sp)
/* 0043FC28 AFB400C0 */  sw    $s4, 0xc0($sp)
/* 0043FC2C AFB300BC */  sw    $s3, 0xbc($sp)
/* 0043FC30 AFB200B8 */  sw    $s2, 0xb8($sp)
/* 0043FC34 AFB100B4 */  sw    $s1, 0xb4($sp)
/* 0043FC38 AFB000B0 */  sw    $s0, 0xb0($sp)
/* 0043FC3C 00002025 */  move  $a0, $zero
/* 0043FC40 0320F809 */  jalr  $t9
/* 0043FC44 8DC50000 */   lw    $a1, ($t6)
/* 0043FC48 8FAF00D8 */  lw    $t7, 0xd8($sp)
/* 0043FC4C 8FBC00D0 */  lw    $gp, 0xd0($sp)
/* 0043FC50 8DF00028 */  lw    $s0, 0x28($t7)
/* 0043FC54 52000015 */  beql  $s0, $zero, .L0043FCAC
/* 0043FC58 8FB900D8 */   lw    $t9, 0xd8($sp)
/* 0043FC5C 24110001 */  li    $s1, 1
/* 0043FC60 8E180004 */  lw    $t8, 4($s0)
.L0043FC64:
/* 0043FC64 16380007 */  bne   $s1, $t8, .L0043FC84
/* 0043FC68 00000000 */   nop   
/* 0043FC6C 8F998290 */  lw    $t9, %call16(demit_weakext)($gp)
/* 0043FC70 8E040000 */  lw    $a0, ($s0)
/* 0043FC74 00002825 */  move  $a1, $zero
/* 0043FC78 0320F809 */  jalr  $t9
/* 0043FC7C 00000000 */   nop   
/* 0043FC80 8FBC00D0 */  lw    $gp, 0xd0($sp)
.L0043FC84:
/* 0043FC84 8F998280 */  lw    $t9, %call16(demit_dir0)($gp)
/* 0043FC88 00002025 */  move  $a0, $zero
/* 0043FC8C 8E050000 */  lw    $a1, ($s0)
/* 0043FC90 0320F809 */  jalr  $t9
/* 0043FC94 00000000 */   nop   
/* 0043FC98 8E100008 */  lw    $s0, 8($s0)
/* 0043FC9C 8FBC00D0 */  lw    $gp, 0xd0($sp)
/* 0043FCA0 5600FFF0 */  bnel  $s0, $zero, .L0043FC64
/* 0043FCA4 8E180004 */   lw    $t8, 4($s0)
/* 0043FCA8 8FB900D8 */  lw    $t9, 0xd8($sp)
.L0043FCAC:
/* 0043FCAC 3C15FFFF */  lui   $s5, 0xffff
/* 0043FCB0 00008025 */  move  $s0, $zero
/* 0043FCB4 8F33001C */  lw    $s3, 0x1c($t9)
/* 0043FCB8 36B50001 */  ori   $s5, $s5, 1
/* 0043FCBC 24170002 */  li    $s7, 2
/* 0043FCC0 1260011A */  beqz  $s3, .L0044012C
/* 0043FCC4 3C140001 */   lui   $s4, 1
.L0043FCC8:
/* 0043FCC8 8F9986B0 */  lw    $t9, %call16(find_val_type)($gp)
/* 0043FCCC 8E760008 */  lw    $s6, 8($s3)
/* 0043FCD0 92640001 */  lbu   $a0, 1($s3)
/* 0043FCD4 02C02825 */  move  $a1, $s6
/* 0043FCD8 0320F809 */  jalr  $t9
/* 0043FCDC 3084001F */   andi  $a0, $a0, 0x1f
/* 0043FCE0 8E68000C */  lw    $t0, 0xc($s3)
/* 0043FCE4 8FBC00D0 */  lw    $gp, 0xd0($sp)
/* 0043FCE8 305200FF */  andi  $s2, $v0, 0xff
/* 0043FCEC 01103023 */  subu  $a2, $t0, $s0
/* 0043FCF0 50C0008C */  beql  $a2, $zero, .L0043FF24
/* 0043FCF4 24010008 */   li    $at, 8
/* 0043FCF8 04C10083 */  bgez  $a2, .L0043FF08
/* 0043FCFC 00000000 */   nop   
/* 0043FD00 8F8989A4 */  lw     $t1, %got(source_language)($gp)
/* 0043FD04 24050325 */  li    $a1, 805
/* 0043FD08 24040004 */  li    $a0, 4
/* 0043FD0C 8D290000 */  lw    $t1, ($t1)
/* 0043FD10 16E9003F */  bne   $s7, $t1, .L0043FE10
/* 0043FD14 00000000 */   nop   
/* 0043FD18 8F8A8038 */  lw    $t2, %got(RO_1000D018)($gp)
/* 0043FD1C 24040002 */  li    $a0, 2
/* 0043FD20 03A06825 */  move  $t5, $sp
/* 0043FD24 254AD018 */  addiu $t2, %lo(RO_1000D018) # addiu $t2, $t2, -0x2fe8
/* 0043FD28 254E0048 */  addiu $t6, $t2, 0x48
.L0043FD2C:
/* 0043FD2C 894C0000 */  lwl   $t4, ($t2)
/* 0043FD30 994C0003 */  lwr   $t4, 3($t2)
/* 0043FD34 254A000C */  addiu $t2, $t2, 0xc
/* 0043FD38 25AD000C */  addiu $t5, $t5, 0xc
/* 0043FD3C A9ACFFFC */  swl   $t4, -4($t5)
/* 0043FD40 B9ACFFFF */  swr   $t4, -1($t5)
/* 0043FD44 894BFFF8 */  lwl   $t3, -8($t2)
/* 0043FD48 994BFFFB */  lwr   $t3, -5($t2)
/* 0043FD4C A9AB0000 */  swl   $t3, ($t5)
/* 0043FD50 B9AB0003 */  swr   $t3, 3($t5)
/* 0043FD54 894CFFFC */  lwl   $t4, -4($t2)
/* 0043FD58 994CFFFF */  lwr   $t4, -1($t2)
/* 0043FD5C A9AC0004 */  swl   $t4, 4($t5)
/* 0043FD60 154EFFF2 */  bne   $t2, $t6, .L0043FD2C
/* 0043FD64 B9AC0007 */   swr   $t4, 7($t5)
/* 0043FD68 894C0000 */  lwl   $t4, ($t2)
/* 0043FD6C 994C0003 */  lwr   $t4, 3($t2)
/* 0043FD70 8F8F8038 */  lw    $t7, %got(RO_1000CFC8)($gp)
/* 0043FD74 03A04025 */  move  $t0, $sp
/* 0043FD78 A9AC0008 */  swl   $t4, 8($t5)
/* 0043FD7C B9AC000B */  swr   $t4, 0xb($t5)
/* 0043FD80 894B0004 */  lwl   $t3, 4($t2)
/* 0043FD84 994B0007 */  lwr   $t3, 7($t2)
/* 0043FD88 25EFCFC8 */  addiu $t7, %lo(RO_1000CFC8) # addiu $t7, $t7, -0x3038
/* 0043FD8C 25E90048 */  addiu $t1, $t7, 0x48
/* 0043FD90 A9AB000C */  swl   $t3, 0xc($t5)
/* 0043FD94 B9AB000F */  swr   $t3, 0xf($t5)
.L0043FD98:
/* 0043FD98 89F90000 */  lwl   $t9, ($t7)
/* 0043FD9C 99F90003 */  lwr   $t9, 3($t7)
/* 0043FDA0 25EF000C */  addiu $t7, $t7, 0xc
/* 0043FDA4 2508000C */  addiu $t0, $t0, 0xc
/* 0043FDA8 A919004C */  swl   $t9, 0x4c($t0)
/* 0043FDAC B919004F */  swr   $t9, 0x4f($t0)
/* 0043FDB0 89F8FFF8 */  lwl   $t8, -8($t7)
/* 0043FDB4 99F8FFFB */  lwr   $t8, -5($t7)
/* 0043FDB8 A9180050 */  swl   $t8, 0x50($t0)
/* 0043FDBC B9180053 */  swr   $t8, 0x53($t0)
/* 0043FDC0 89F9FFFC */  lwl   $t9, -4($t7)
/* 0043FDC4 99F9FFFF */  lwr   $t9, -1($t7)
/* 0043FDC8 A9190054 */  swl   $t9, 0x54($t0)
/* 0043FDCC 15E9FFF2 */  bne   $t7, $t1, .L0043FD98
/* 0043FDD0 B9190057 */   swr   $t9, 0x57($t0)
/* 0043FDD4 89F90000 */  lwl   $t9, ($t7)
/* 0043FDD8 99F90003 */  lwr   $t9, 3($t7)
/* 0043FDDC A9190058 */  swl   $t9, 0x58($t0)
/* 0043FDE0 B919005B */  swr   $t9, 0x5b($t0)
/* 0043FDE4 89F80004 */  lwl   $t8, 4($t7)
/* 0043FDE8 99F80007 */  lwr   $t8, 7($t7)
/* 0043FDEC A918005C */  swl   $t8, 0x5c($t0)
/* 0043FDF0 B918005F */  swr   $t8, 0x5f($t0)
/* 0043FDF4 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 0043FDF8 8FA7000C */  lw    $a3, 0xc($sp)
/* 0043FDFC 8FA60008 */  lw    $a2, 8($sp)
/* 0043FE00 0320F809 */  jalr  $t9
/* 0043FE04 00000000 */   nop   
/* 0043FE08 1000003E */  b     .L0043FF04
/* 0043FE0C 8FBC00D0 */   lw    $gp, 0xd0($sp)
.L0043FE10:
/* 0043FE10 8F8E8038 */  lw    $t6, %got(RO_1000CF78)($gp)
/* 0043FE14 2405032A */  li    $a1, 810
/* 0043FE18 03A05825 */  move  $t3, $sp
/* 0043FE1C 25CECF78 */  addiu $t6, %lo(RO_1000CF78) # addiu $t6, $t6, -0x3088
/* 0043FE20 25CC0048 */  addiu $t4, $t6, 0x48
.L0043FE24:
/* 0043FE24 89CD0000 */  lwl   $t5, ($t6)
/* 0043FE28 99CD0003 */  lwr   $t5, 3($t6)
/* 0043FE2C 25CE000C */  addiu $t6, $t6, 0xc
/* 0043FE30 256B000C */  addiu $t3, $t3, 0xc
/* 0043FE34 A96DFFFC */  swl   $t5, -4($t3)
/* 0043FE38 B96DFFFF */  swr   $t5, -1($t3)
/* 0043FE3C 89CAFFF8 */  lwl   $t2, -8($t6)
/* 0043FE40 99CAFFFB */  lwr   $t2, -5($t6)
/* 0043FE44 A96A0000 */  swl   $t2, ($t3)
/* 0043FE48 B96A0003 */  swr   $t2, 3($t3)
/* 0043FE4C 89CDFFFC */  lwl   $t5, -4($t6)
/* 0043FE50 99CDFFFF */  lwr   $t5, -1($t6)
/* 0043FE54 A96D0004 */  swl   $t5, 4($t3)
/* 0043FE58 15CCFFF2 */  bne   $t6, $t4, .L0043FE24
/* 0043FE5C B96D0007 */   swr   $t5, 7($t3)
/* 0043FE60 89CD0000 */  lwl   $t5, ($t6)
/* 0043FE64 99CD0003 */  lwr   $t5, 3($t6)
/* 0043FE68 8F898038 */  lw    $t1, %got(RO_1000CF28)($gp)
/* 0043FE6C 03A0C025 */  move  $t8, $sp
/* 0043FE70 A96D0008 */  swl   $t5, 8($t3)
/* 0043FE74 B96D000B */  swr   $t5, 0xb($t3)
/* 0043FE78 89CA0004 */  lwl   $t2, 4($t6)
/* 0043FE7C 99CA0007 */  lwr   $t2, 7($t6)
/* 0043FE80 2529CF28 */  addiu $t1, %lo(RO_1000CF28) # addiu $t1, $t1, -0x30d8
/* 0043FE84 25390048 */  addiu $t9, $t1, 0x48
/* 0043FE88 A96A000C */  swl   $t2, 0xc($t3)
/* 0043FE8C B96A000F */  swr   $t2, 0xf($t3)
.L0043FE90:
/* 0043FE90 89280000 */  lwl   $t0, ($t1)
/* 0043FE94 99280003 */  lwr   $t0, 3($t1)
/* 0043FE98 2529000C */  addiu $t1, $t1, 0xc
/* 0043FE9C 2718000C */  addiu $t8, $t8, 0xc
/* 0043FEA0 AB08004C */  swl   $t0, 0x4c($t8)
/* 0043FEA4 BB08004F */  swr   $t0, 0x4f($t8)
/* 0043FEA8 892FFFF8 */  lwl   $t7, -8($t1)
/* 0043FEAC 992FFFFB */  lwr   $t7, -5($t1)
/* 0043FEB0 AB0F0050 */  swl   $t7, 0x50($t8)
/* 0043FEB4 BB0F0053 */  swr   $t7, 0x53($t8)
/* 0043FEB8 8928FFFC */  lwl   $t0, -4($t1)
/* 0043FEBC 9928FFFF */  lwr   $t0, -1($t1)
/* 0043FEC0 AB080054 */  swl   $t0, 0x54($t8)
/* 0043FEC4 1539FFF2 */  bne   $t1, $t9, .L0043FE90
/* 0043FEC8 BB080057 */   swr   $t0, 0x57($t8)
/* 0043FECC 89280000 */  lwl   $t0, ($t1)
/* 0043FED0 99280003 */  lwr   $t0, 3($t1)
/* 0043FED4 AB080058 */  swl   $t0, 0x58($t8)
/* 0043FED8 BB08005B */  swr   $t0, 0x5b($t8)
/* 0043FEDC 892F0004 */  lwl   $t7, 4($t1)
/* 0043FEE0 992F0007 */  lwr   $t7, 7($t1)
/* 0043FEE4 AB0F005C */  swl   $t7, 0x5c($t8)
/* 0043FEE8 BB0F005F */  swr   $t7, 0x5f($t8)
/* 0043FEEC 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 0043FEF0 8FA7000C */  lw    $a3, 0xc($sp)
/* 0043FEF4 8FA60008 */  lw    $a2, 8($sp)
/* 0043FEF8 0320F809 */  jalr  $t9
/* 0043FEFC 00000000 */   nop   
/* 0043FF00 8FBC00D0 */  lw    $gp, 0xd0($sp)
.L0043FF04:
/* 0043FF04 00003025 */  move  $a2, $zero
.L0043FF08:
/* 0043FF08 8F998284 */  lw    $t9, %call16(demit_dir1)($gp)
/* 0043FF0C 24040014 */  li    $a0, 20
/* 0043FF10 00002825 */  move  $a1, $zero
/* 0043FF14 0320F809 */  jalr  $t9
/* 0043FF18 00000000 */   nop   
/* 0043FF1C 8FBC00D0 */  lw    $gp, 0xd0($sp)
/* 0043FF20 24010008 */  li    $at, 8
.L0043FF24:
/* 0043FF24 56410053 */  bnel  $s2, $at, .L00440074
/* 0043FF28 8E630010 */   lw    $v1, 0x10($s3)
/* 0043FF2C 96620002 */  lhu   $v0, 2($s3)
/* 0043FF30 10400047 */  beqz  $v0, .L00440050
/* 0043FF34 00000000 */   nop   
/* 0043FF38 16D70008 */  bne   $s6, $s7, .L0043FF5C
/* 0043FF3C 24040002 */   li    $a0, 2
/* 0043FF40 8F998284 */  lw    $t9, %call16(demit_dir1)($gp)
/* 0043FF44 24040039 */  li    $a0, 57
/* 0043FF48 00002825 */  move  $a1, $zero
/* 0043FF4C 0320F809 */  jalr  $t9
/* 0043FF50 00403025 */   move  $a2, $v0
/* 0043FF54 1000003E */  b     .L00440050
/* 0043FF58 8FBC00D0 */   lw    $gp, 0xd0($sp)
.L0043FF5C:
/* 0043FF5C 8F8C8038 */  lw    $t4, %got(RO_1000CED8)($gp)
/* 0043FF60 24050339 */  li    $a1, 825
/* 0043FF64 03A05025 */  move  $t2, $sp
/* 0043FF68 258CCED8 */  addiu $t4, %lo(RO_1000CED8) # addiu $t4, $t4, -0x3128
/* 0043FF6C 258D0048 */  addiu $t5, $t4, 0x48
.L0043FF70:
/* 0043FF70 898B0000 */  lwl   $t3, ($t4)
/* 0043FF74 998B0003 */  lwr   $t3, 3($t4)
/* 0043FF78 258C000C */  addiu $t4, $t4, 0xc
/* 0043FF7C 254A000C */  addiu $t2, $t2, 0xc
/* 0043FF80 A94BFFFC */  swl   $t3, -4($t2)
/* 0043FF84 B94BFFFF */  swr   $t3, -1($t2)
/* 0043FF88 898EFFF8 */  lwl   $t6, -8($t4)
/* 0043FF8C 998EFFFB */  lwr   $t6, -5($t4)
/* 0043FF90 A94E0000 */  swl   $t6, ($t2)
/* 0043FF94 B94E0003 */  swr   $t6, 3($t2)
/* 0043FF98 898BFFFC */  lwl   $t3, -4($t4)
/* 0043FF9C 998BFFFF */  lwr   $t3, -1($t4)
/* 0043FFA0 A94B0004 */  swl   $t3, 4($t2)
/* 0043FFA4 158DFFF2 */  bne   $t4, $t5, .L0043FF70
/* 0043FFA8 B94B0007 */   swr   $t3, 7($t2)
/* 0043FFAC 898B0000 */  lwl   $t3, ($t4)
/* 0043FFB0 998B0003 */  lwr   $t3, 3($t4)
/* 0043FFB4 8F998038 */  lw    $t9, %got(RO_1000CE88)($gp)
/* 0043FFB8 03A07825 */  move  $t7, $sp
/* 0043FFBC A94B0008 */  swl   $t3, 8($t2)
/* 0043FFC0 B94B000B */  swr   $t3, 0xb($t2)
/* 0043FFC4 898E0004 */  lwl   $t6, 4($t4)
/* 0043FFC8 998E0007 */  lwr   $t6, 7($t4)
/* 0043FFCC 2739CE88 */  addiu $t9, %lo(RO_1000CE88) # addiu $t9, $t9, -0x3178
/* 0043FFD0 27280048 */  addiu $t0, $t9, 0x48
/* 0043FFD4 A94E000C */  swl   $t6, 0xc($t2)
/* 0043FFD8 B94E000F */  swr   $t6, 0xf($t2)
.L0043FFDC:
/* 0043FFDC 8B380000 */  lwl   $t8, ($t9)
/* 0043FFE0 9B380003 */  lwr   $t8, 3($t9)
/* 0043FFE4 2739000C */  addiu $t9, $t9, 0xc
/* 0043FFE8 25EF000C */  addiu $t7, $t7, 0xc
/* 0043FFEC A9F8004C */  swl   $t8, 0x4c($t7)
/* 0043FFF0 B9F8004F */  swr   $t8, 0x4f($t7)
/* 0043FFF4 8B29FFF8 */  lwl   $t1, -8($t9)
/* 0043FFF8 9B29FFFB */  lwr   $t1, -5($t9)
/* 0043FFFC A9E90050 */  swl   $t1, 0x50($t7)
/* 00440000 B9E90053 */  swr   $t1, 0x53($t7)
/* 00440004 8B38FFFC */  lwl   $t8, -4($t9)
/* 00440008 9B38FFFF */  lwr   $t8, -1($t9)
/* 0044000C A9F80054 */  swl   $t8, 0x54($t7)
/* 00440010 1728FFF2 */  bne   $t9, $t0, .L0043FFDC
/* 00440014 B9F80057 */   swr   $t8, 0x57($t7)
/* 00440018 8B380000 */  lwl   $t8, ($t9)
/* 0044001C 9B380003 */  lwr   $t8, 3($t9)
/* 00440020 A9F80058 */  swl   $t8, 0x58($t7)
/* 00440024 B9F8005B */  swr   $t8, 0x5b($t7)
/* 00440028 8B290004 */  lwl   $t1, 4($t9)
/* 0044002C 9B290007 */  lwr   $t1, 7($t9)
/* 00440030 A9E9005C */  swl   $t1, 0x5c($t7)
/* 00440034 B9E9005F */  swr   $t1, 0x5f($t7)
/* 00440038 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 0044003C 8FA7000C */  lw    $a3, 0xc($sp)
/* 00440040 8FA60008 */  lw    $a2, 8($sp)
/* 00440044 0320F809 */  jalr  $t9
/* 00440048 00000000 */   nop   
/* 0044004C 8FBC00D0 */  lw    $gp, 0xd0($sp)
.L00440050:
/* 00440050 8F9986AC */  lw    $t9, %call16(emit_label_val)($gp)
/* 00440054 00002025 */  move  $a0, $zero
/* 00440058 8E650018 */  lw    $a1, 0x18($s3)
/* 0044005C 8E660014 */  lw    $a2, 0x14($s3)
/* 00440060 0320F809 */  jalr  $t9
/* 00440064 02C03825 */   move  $a3, $s6
/* 00440068 1000002B */  b     .L00440118
/* 0044006C 8FBC00D0 */   lw    $gp, 0xd0($sp)
/* 00440070 8E630010 */  lw    $v1, 0x10($s3)
.L00440074:
/* 00440074 8E62000C */  lw    $v0, 0xc($s3)
/* 00440078 1062001F */  beq   $v1, $v0, .L004400F8
/* 0044007C 00626823 */   subu  $t5, $v1, $v0
/* 00440080 01B6001A */  div   $zero, $t5, $s6
/* 00440084 16C00002 */  bnez  $s6, .L00440090
/* 00440088 00000000 */   nop   
/* 0044008C 0007000D */  break 7
.L00440090:
/* 00440090 2401FFFF */  li    $at, -1
/* 00440094 16C10004 */  bne   $s6, $at, .L004400A8
/* 00440098 3C018000 */   lui   $at, 0x8000
/* 0044009C 15A10002 */  bne   $t5, $at, .L004400A8
/* 004400A0 00000000 */   nop   
/* 004400A4 0006000D */  break 6
.L004400A8:
/* 004400A8 00008012 */  mflo  $s0
/* 004400AC 26100001 */  addiu $s0, $s0, 1
/* 004400B0 0214082A */  slt   $at, $s0, $s4
/* 004400B4 1420000D */  bnez  $at, .L004400EC
/* 004400B8 0214082A */   slt   $at, $s0, $s4
/* 004400BC 1420000B */  bnez  $at, .L004400EC
/* 004400C0 26710018 */   addiu $s1, $s3, 0x18
.L004400C4:
/* 004400C4 8F9986A8 */  lw    $t9, %call16(emit_val)($gp)
/* 004400C8 00002025 */  move  $a0, $zero
/* 004400CC 02402825 */  move  $a1, $s2
/* 004400D0 02203025 */  move  $a2, $s1
/* 004400D4 0320F809 */  jalr  $t9
/* 004400D8 3407FFFF */   li    $a3, 65535
/* 004400DC 02158021 */  addu  $s0, $s0, $s5
/* 004400E0 0214082A */  slt   $at, $s0, $s4
/* 004400E4 1020FFF7 */  beqz  $at, .L004400C4
/* 004400E8 8FBC00D0 */   lw    $gp, 0xd0($sp)
.L004400EC:
/* 004400EC 02003825 */  move  $a3, $s0
/* 004400F0 10000003 */  b     .L00440100
/* 004400F4 26710018 */   addiu $s1, $s3, 0x18
.L004400F8:
/* 004400F8 24070001 */  li    $a3, 1
/* 004400FC 26710018 */  addiu $s1, $s3, 0x18
.L00440100:
/* 00440100 8F9986A8 */  lw    $t9, %call16(emit_val)($gp)
/* 00440104 00002025 */  move  $a0, $zero
/* 00440108 02402825 */  move  $a1, $s2
/* 0044010C 0320F809 */  jalr  $t9
/* 00440110 02203025 */   move  $a2, $s1
/* 00440114 8FBC00D0 */  lw    $gp, 0xd0($sp)
.L00440118:
/* 00440118 8E6C0010 */  lw    $t4, 0x10($s3)
/* 0044011C 8E730020 */  lw    $s3, 0x20($s3)
/* 00440120 01968021 */  addu  $s0, $t4, $s6
/* 00440124 1660FEE8 */  bnez  $s3, .L0043FCC8
/* 00440128 00000000 */   nop   
.L0044012C:
/* 0044012C 8FAA00D8 */  lw    $t2, 0xd8($sp)
/* 00440130 24170002 */  li    $s7, 2
/* 00440134 8D4E0010 */  lw    $t6, 0x10($t2)
/* 00440138 01D03023 */  subu  $a2, $t6, $s0
/* 0044013C 50C0008C */  beql  $a2, $zero, .L00440370
/* 00440140 8FBF00D4 */   lw    $ra, 0xd4($sp)
/* 00440144 04C10083 */  bgez  $a2, .L00440354
/* 00440148 00000000 */   nop   
/* 0044014C 8F8B89A4 */  lw     $t3, %got(source_language)($gp)
/* 00440150 24050364 */  li    $a1, 868
/* 00440154 24040002 */  li    $a0, 2
/* 00440158 8D6B0000 */  lw    $t3, ($t3)
/* 0044015C 16EB003F */  bne   $s7, $t3, .L0044025C
/* 00440160 00000000 */   nop   
/* 00440164 8F888038 */  lw    $t0, %got(RO_1000CE38)($gp)
/* 00440168 24040002 */  li    $a0, 2
/* 0044016C 03A04825 */  move  $t1, $sp
/* 00440170 2508CE38 */  addiu $t0, %lo(RO_1000CE38) # addiu $t0, $t0, -0x31c8
/* 00440174 25180048 */  addiu $t8, $t0, 0x48
.L00440178:
/* 00440178 890F0000 */  lwl   $t7, ($t0)
/* 0044017C 990F0003 */  lwr   $t7, 3($t0)
/* 00440180 2508000C */  addiu $t0, $t0, 0xc
/* 00440184 2529000C */  addiu $t1, $t1, 0xc
/* 00440188 A92FFFFC */  swl   $t7, -4($t1)
/* 0044018C B92FFFFF */  swr   $t7, -1($t1)
/* 00440190 8919FFF8 */  lwl   $t9, -8($t0)
/* 00440194 9919FFFB */  lwr   $t9, -5($t0)
/* 00440198 A9390000 */  swl   $t9, ($t1)
/* 0044019C B9390003 */  swr   $t9, 3($t1)
/* 004401A0 890FFFFC */  lwl   $t7, -4($t0)
/* 004401A4 990FFFFF */  lwr   $t7, -1($t0)
/* 004401A8 A92F0004 */  swl   $t7, 4($t1)
/* 004401AC 1518FFF2 */  bne   $t0, $t8, .L00440178
/* 004401B0 B92F0007 */   swr   $t7, 7($t1)
/* 004401B4 890F0000 */  lwl   $t7, ($t0)
/* 004401B8 990F0003 */  lwr   $t7, 3($t0)
/* 004401BC 8F8D8038 */  lw    $t5, %got(RO_1000CDE8)($gp)
/* 004401C0 03A07025 */  move  $t6, $sp
/* 004401C4 A92F0008 */  swl   $t7, 8($t1)
/* 004401C8 B92F000B */  swr   $t7, 0xb($t1)
/* 004401CC 89190004 */  lwl   $t9, 4($t0)
/* 004401D0 99190007 */  lwr   $t9, 7($t0)
/* 004401D4 25ADCDE8 */  addiu $t5, %lo(RO_1000CDE8) # addiu $t5, $t5, -0x3218
/* 004401D8 25AB0048 */  addiu $t3, $t5, 0x48
/* 004401DC A939000C */  swl   $t9, 0xc($t1)
/* 004401E0 B939000F */  swr   $t9, 0xf($t1)
.L004401E4:
/* 004401E4 89AA0000 */  lwl   $t2, ($t5)
/* 004401E8 99AA0003 */  lwr   $t2, 3($t5)
/* 004401EC 25AD000C */  addiu $t5, $t5, 0xc
/* 004401F0 25CE000C */  addiu $t6, $t6, 0xc
/* 004401F4 A9CA004C */  swl   $t2, 0x4c($t6)
/* 004401F8 B9CA004F */  swr   $t2, 0x4f($t6)
/* 004401FC 89ACFFF8 */  lwl   $t4, -8($t5)
/* 00440200 99ACFFFB */  lwr   $t4, -5($t5)
/* 00440204 A9CC0050 */  swl   $t4, 0x50($t6)
/* 00440208 B9CC0053 */  swr   $t4, 0x53($t6)
/* 0044020C 89AAFFFC */  lwl   $t2, -4($t5)
/* 00440210 99AAFFFF */  lwr   $t2, -1($t5)
/* 00440214 A9CA0054 */  swl   $t2, 0x54($t6)
/* 00440218 15ABFFF2 */  bne   $t5, $t3, .L004401E4
/* 0044021C B9CA0057 */   swr   $t2, 0x57($t6)
/* 00440220 89AA0000 */  lwl   $t2, ($t5)
/* 00440224 99AA0003 */  lwr   $t2, 3($t5)
/* 00440228 A9CA0058 */  swl   $t2, 0x58($t6)
/* 0044022C B9CA005B */  swr   $t2, 0x5b($t6)
/* 00440230 89AC0004 */  lwl   $t4, 4($t5)
/* 00440234 99AC0007 */  lwr   $t4, 7($t5)
/* 00440238 A9CC005C */  swl   $t4, 0x5c($t6)
/* 0044023C B9CC005F */  swr   $t4, 0x5f($t6)
/* 00440240 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 00440244 8FA7000C */  lw    $a3, 0xc($sp)
/* 00440248 8FA60008 */  lw    $a2, 8($sp)
/* 0044024C 0320F809 */  jalr  $t9
/* 00440250 00000000 */   nop   
/* 00440254 1000003E */  b     .L00440350
/* 00440258 8FBC00D0 */   lw    $gp, 0xd0($sp)
.L0044025C:
/* 0044025C 8F988038 */  lw    $t8, %got(RO_1000CD98)($gp)
/* 00440260 24050369 */  li    $a1, 873
/* 00440264 03A0C825 */  move  $t9, $sp
/* 00440268 2718CD98 */  addiu $t8, %lo(RO_1000CD98) # addiu $t8, $t8, -0x3268
/* 0044026C 270F0048 */  addiu $t7, $t8, 0x48
.L00440270:
/* 00440270 8B090000 */  lwl   $t1, ($t8)
/* 00440274 9B090003 */  lwr   $t1, 3($t8)
/* 00440278 2718000C */  addiu $t8, $t8, 0xc
/* 0044027C 2739000C */  addiu $t9, $t9, 0xc
/* 00440280 AB29FFFC */  swl   $t1, -4($t9)
/* 00440284 BB29FFFF */  swr   $t1, -1($t9)
/* 00440288 8B08FFF8 */  lwl   $t0, -8($t8)
/* 0044028C 9B08FFFB */  lwr   $t0, -5($t8)
/* 00440290 AB280000 */  swl   $t0, ($t9)
/* 00440294 BB280003 */  swr   $t0, 3($t9)
/* 00440298 8B09FFFC */  lwl   $t1, -4($t8)
/* 0044029C 9B09FFFF */  lwr   $t1, -1($t8)
/* 004402A0 AB290004 */  swl   $t1, 4($t9)
/* 004402A4 170FFFF2 */  bne   $t8, $t7, .L00440270
/* 004402A8 BB290007 */   swr   $t1, 7($t9)
/* 004402AC 8B090000 */  lwl   $t1, ($t8)
/* 004402B0 9B090003 */  lwr   $t1, 3($t8)
/* 004402B4 8F8B8038 */  lw    $t3, %got(RO_1000CD48)($gp)
/* 004402B8 03A06025 */  move  $t4, $sp
/* 004402BC AB290008 */  swl   $t1, 8($t9)
/* 004402C0 BB29000B */  swr   $t1, 0xb($t9)
/* 004402C4 8B080004 */  lwl   $t0, 4($t8)
/* 004402C8 9B080007 */  lwr   $t0, 7($t8)
/* 004402CC 256BCD48 */  addiu $t3, %lo(RO_1000CD48) # addiu $t3, $t3, -0x32b8
/* 004402D0 256A0048 */  addiu $t2, $t3, 0x48
/* 004402D4 AB28000C */  swl   $t0, 0xc($t9)
/* 004402D8 BB28000F */  swr   $t0, 0xf($t9)
.L004402DC:
/* 004402DC 896E0000 */  lwl   $t6, ($t3)
/* 004402E0 996E0003 */  lwr   $t6, 3($t3)
/* 004402E4 256B000C */  addiu $t3, $t3, 0xc
/* 004402E8 258C000C */  addiu $t4, $t4, 0xc
/* 004402EC A98E004C */  swl   $t6, 0x4c($t4)
/* 004402F0 B98E004F */  swr   $t6, 0x4f($t4)
/* 004402F4 896DFFF8 */  lwl   $t5, -8($t3)
/* 004402F8 996DFFFB */  lwr   $t5, -5($t3)
/* 004402FC A98D0050 */  swl   $t5, 0x50($t4)
/* 00440300 B98D0053 */  swr   $t5, 0x53($t4)
/* 00440304 896EFFFC */  lwl   $t6, -4($t3)
/* 00440308 996EFFFF */  lwr   $t6, -1($t3)
/* 0044030C A98E0054 */  swl   $t6, 0x54($t4)
/* 00440310 156AFFF2 */  bne   $t3, $t2, .L004402DC
/* 00440314 B98E0057 */   swr   $t6, 0x57($t4)
/* 00440318 896E0000 */  lwl   $t6, ($t3)
/* 0044031C 996E0003 */  lwr   $t6, 3($t3)
/* 00440320 A98E0058 */  swl   $t6, 0x58($t4)
/* 00440324 B98E005B */  swr   $t6, 0x5b($t4)
/* 00440328 896D0004 */  lwl   $t5, 4($t3)
/* 0044032C 996D0007 */  lwr   $t5, 7($t3)
/* 00440330 A98D005C */  swl   $t5, 0x5c($t4)
/* 00440334 B98D005F */  swr   $t5, 0x5f($t4)
/* 00440338 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 0044033C 8FA7000C */  lw    $a3, 0xc($sp)
/* 00440340 8FA60008 */  lw    $a2, 8($sp)
/* 00440344 0320F809 */  jalr  $t9
/* 00440348 00000000 */   nop   
/* 0044034C 8FBC00D0 */  lw    $gp, 0xd0($sp)
.L00440350:
/* 00440350 00003025 */  move  $a2, $zero
.L00440354:
/* 00440354 8F998284 */  lw    $t9, %call16(demit_dir1)($gp)
/* 00440358 24040014 */  li    $a0, 20
/* 0044035C 00002825 */  move  $a1, $zero
/* 00440360 0320F809 */  jalr  $t9
/* 00440364 00000000 */   nop   
/* 00440368 8FBC00D0 */  lw    $gp, 0xd0($sp)
/* 0044036C 8FBF00D4 */  lw    $ra, 0xd4($sp)
.L00440370:
/* 00440370 8FB000B0 */  lw    $s0, 0xb0($sp)
/* 00440374 8FB100B4 */  lw    $s1, 0xb4($sp)
/* 00440378 8FB200B8 */  lw    $s2, 0xb8($sp)
/* 0044037C 8FB300BC */  lw    $s3, 0xbc($sp)
/* 00440380 8FB400C0 */  lw    $s4, 0xc0($sp)
/* 00440384 8FB500C4 */  lw    $s5, 0xc4($sp)
/* 00440388 8FB600C8 */  lw    $s6, 0xc8($sp)
/* 0044038C 8FB700CC */  lw    $s7, 0xcc($sp)
/* 00440390 03E00008 */  jr    $ra
/* 00440394 27BD00D8 */   addiu $sp, $sp, 0xd8
    .type emit_init, @function
    .size emit_init, .-emit_init
    .end emit_init

glabel emit_symbol
    .ent emit_symbol
    # 00440724 output_decls
/* 00440398 3C1C0FBE */  .cpload $t9
/* 0044039C 279CF6B8 */  
/* 004403A0 0399E021 */  
/* 004403A4 27BDFF40 */  addiu $sp, $sp, -0xc0
/* 004403A8 AFBF00BC */  sw    $ra, 0xbc($sp)
/* 004403AC AFBC00B8 */  sw    $gp, 0xb8($sp)
/* 004403B0 AFB100B4 */  sw    $s1, 0xb4($sp)
/* 004403B4 AFB000B0 */  sw    $s0, 0xb0($sp)
/* 004403B8 9083000C */  lbu   $v1, 0xc($a0)
/* 004403BC 00808825 */  move  $s1, $a0
/* 004403C0 246EFFFF */  addiu $t6, $v1, -1
/* 004403C4 2DC1000A */  sltiu $at, $t6, 0xa
/* 004403C8 10200093 */  beqz  $at, .L00440618
/* 004403CC 00000000 */   nop   
/* 004403D0 8F818038 */  lw    $at, %got(jtbl_1000D108)($gp)
/* 004403D4 000E7080 */  sll   $t6, $t6, 2
/* 004403D8 002E0821 */  addu  $at, $at, $t6
/* 004403DC 8C2ED108 */  lw    $t6, %lo(jtbl_1000D108)($at)
/* 004403E0 01DC7021 */  addu  $t6, $t6, $gp
/* 004403E4 01C00008 */  jr    $t6
/* 004403E8 00000000 */   nop   
.L004403EC:
/* 004403EC 8E300010 */  lw    $s0, 0x10($s1)
/* 004403F0 520000C8 */  beql  $s0, $zero, .L00440714
/* 004403F4 8FBF00BC */   lw    $ra, 0xbc($sp)
/* 004403F8 922F0018 */  lbu   $t7, 0x18($s1)
/* 004403FC 24010002 */  li    $at, 2
/* 00440400 02003025 */  move  $a2, $s0
/* 00440404 15E10008 */  bne   $t7, $at, .L00440428
/* 00440408 2404002D */   li    $a0, 45
/* 0044040C 8F998288 */  lw    $t9, %call16(demit_dir2)($gp)
/* 00440410 2404002D */  li    $a0, 45
/* 00440414 8E250000 */  lw    $a1, ($s1)
/* 00440418 0320F809 */  jalr  $t9
/* 0044041C 24070001 */   li    $a3, 1
/* 00440420 100000BB */  b     .L00440710
/* 00440424 8FBC00B8 */   lw    $gp, 0xb8($sp)
.L00440428:
/* 00440428 8F998288 */  lw    $t9, %call16(demit_dir2)($gp)
/* 0044042C 8E250000 */  lw    $a1, ($s1)
/* 00440430 02003025 */  move  $a2, $s0
/* 00440434 0320F809 */  jalr  $t9
/* 00440438 00003825 */   move  $a3, $zero
/* 0044043C 100000B4 */  b     .L00440710
/* 00440440 8FBC00B8 */   lw    $gp, 0xb8($sp)
.L00440444:
/* 00440444 24010002 */  li    $at, 2
/* 00440448 54610008 */  bnel  $v1, $at, .L0044046C
/* 0044044C 8E300010 */   lw    $s0, 0x10($s1)
/* 00440450 8F998280 */  lw    $t9, %call16(demit_dir0)($gp)
/* 00440454 24040002 */  li    $a0, 2
/* 00440458 8E250000 */  lw    $a1, ($s1)
/* 0044045C 0320F809 */  jalr  $t9
/* 00440460 00000000 */   nop   
/* 00440464 8FBC00B8 */  lw    $gp, 0xb8($sp)
/* 00440468 8E300010 */  lw    $s0, 0x10($s1)
.L0044046C:
/* 0044046C 520000A9 */  beql  $s0, $zero, .L00440714
/* 00440470 8FBF00BC */   lw    $ra, 0xbc($sp)
/* 00440474 8E38001C */  lw    $t8, 0x1c($s1)
/* 00440478 17000014 */  bnez  $t8, .L004404CC
/* 0044047C 00000000 */   nop   
/* 00440480 92390018 */  lbu   $t9, 0x18($s1)
/* 00440484 24010002 */  li    $at, 2
/* 00440488 02003025 */  move  $a2, $s0
/* 0044048C 17210008 */  bne   $t9, $at, .L004404B0
/* 00440490 24040009 */   li    $a0, 9
/* 00440494 8F998288 */  lw    $t9, %call16(demit_dir2)($gp)
/* 00440498 24040009 */  li    $a0, 9
/* 0044049C 8E250000 */  lw    $a1, ($s1)
/* 004404A0 0320F809 */  jalr  $t9
/* 004404A4 24070001 */   li    $a3, 1
/* 004404A8 10000099 */  b     .L00440710
/* 004404AC 8FBC00B8 */   lw    $gp, 0xb8($sp)
.L004404B0:
/* 004404B0 8F998288 */  lw    $t9, %call16(demit_dir2)($gp)
/* 004404B4 8E250000 */  lw    $a1, ($s1)
/* 004404B8 02003025 */  move  $a2, $s0
/* 004404BC 0320F809 */  jalr  $t9
/* 004404C0 00003825 */   move  $a3, $zero
/* 004404C4 10000092 */  b     .L00440710
/* 004404C8 8FBC00B8 */   lw    $gp, 0xb8($sp)
.L004404CC:
/* 004404CC 8F998580 */  lw    $t9, %call16(choose_area)($gp)
/* 004404D0 92240018 */  lbu   $a0, 0x18($s1)
/* 004404D4 02002825 */  move  $a1, $s0
/* 004404D8 0320F809 */  jalr  $t9
/* 004404DC 00000000 */   nop   
/* 004404E0 8FBC00B8 */  lw    $gp, 0xb8($sp)
/* 004404E4 9224000E */  lbu   $a0, 0xe($s1)
/* 004404E8 8F998584 */  lw    $t9, %call16(force_alignment)($gp)
/* 004404EC 0320F809 */  jalr  $t9
/* 004404F0 00000000 */   nop   
/* 004404F4 8FBC00B8 */  lw    $gp, 0xb8($sp)
/* 004404F8 02202025 */  move  $a0, $s1
/* 004404FC 8F998588 */  lw    $t9, %call16(emit_init)($gp)
/* 00440500 0320F809 */  jalr  $t9
/* 00440504 00000000 */   nop   
/* 00440508 10000081 */  b     .L00440710
/* 0044050C 8FBC00B8 */   lw    $gp, 0xb8($sp)
.L00440510:
/* 00440510 8E28001C */  lw    $t0, 0x1c($s1)
/* 00440514 15000017 */  bnez  $t0, .L00440574
/* 00440518 00000000 */   nop   
/* 0044051C 8E300010 */  lw    $s0, 0x10($s1)
/* 00440520 5200007C */  beql  $s0, $zero, .L00440714
/* 00440524 8FBF00BC */   lw    $ra, 0xbc($sp)
/* 00440528 92290018 */  lbu   $t1, 0x18($s1)
/* 0044052C 24010002 */  li    $at, 2
/* 00440530 02003025 */  move  $a2, $s0
/* 00440534 15210008 */  bne   $t1, $at, .L00440558
/* 00440538 24040008 */   li    $a0, 8
/* 0044053C 8F998288 */  lw    $t9, %call16(demit_dir2)($gp)
/* 00440540 24040008 */  li    $a0, 8
/* 00440544 8E250000 */  lw    $a1, ($s1)
/* 00440548 0320F809 */  jalr  $t9
/* 0044054C 24070001 */   li    $a3, 1
/* 00440550 1000006F */  b     .L00440710
/* 00440554 8FBC00B8 */   lw    $gp, 0xb8($sp)
.L00440558:
/* 00440558 8F998288 */  lw    $t9, %call16(demit_dir2)($gp)
/* 0044055C 8E250000 */  lw    $a1, ($s1)
/* 00440560 02003025 */  move  $a2, $s0
/* 00440564 0320F809 */  jalr  $t9
/* 00440568 00003825 */   move  $a3, $zero
/* 0044056C 10000068 */  b     .L00440710
/* 00440570 8FBC00B8 */   lw    $gp, 0xb8($sp)
.L00440574:
/* 00440574 8F998280 */  lw    $t9, %call16(demit_dir0)($gp)
/* 00440578 24040002 */  li    $a0, 2
/* 0044057C 8E250000 */  lw    $a1, ($s1)
/* 00440580 0320F809 */  jalr  $t9
/* 00440584 00000000 */   nop   
/* 00440588 8FBC00B8 */  lw    $gp, 0xb8($sp)
/* 0044058C 92240018 */  lbu   $a0, 0x18($s1)
/* 00440590 8E250010 */  lw    $a1, 0x10($s1)
/* 00440594 8F998580 */  lw    $t9, %call16(choose_area)($gp)
/* 00440598 0320F809 */  jalr  $t9
/* 0044059C 00000000 */   nop   
/* 004405A0 8FBC00B8 */  lw    $gp, 0xb8($sp)
/* 004405A4 24040003 */  li    $a0, 3
/* 004405A8 8F998584 */  lw    $t9, %call16(force_alignment)($gp)
/* 004405AC 0320F809 */  jalr  $t9
/* 004405B0 00000000 */   nop   
/* 004405B4 8FBC00B8 */  lw    $gp, 0xb8($sp)
/* 004405B8 02202025 */  move  $a0, $s1
/* 004405BC 8F998588 */  lw    $t9, %call16(emit_init)($gp)
/* 004405C0 0320F809 */  jalr  $t9
/* 004405C4 00000000 */   nop   
/* 004405C8 10000051 */  b     .L00440710
/* 004405CC 8FBC00B8 */   lw    $gp, 0xb8($sp)
.L004405D0:
/* 004405D0 8E300028 */  lw    $s0, 0x28($s1)
/* 004405D4 5200004F */  beql  $s0, $zero, .L00440714
/* 004405D8 8FBF00BC */   lw    $ra, 0xbc($sp)
/* 004405DC 8E0A0004 */  lw    $t2, 4($s0)
.L004405E0:
/* 004405E0 24010001 */  li    $at, 1
/* 004405E4 55410008 */  bnel  $t2, $at, .L00440608
/* 004405E8 8E100008 */   lw    $s0, 8($s0)
/* 004405EC 8F998290 */  lw    $t9, %call16(demit_weakext)($gp)
/* 004405F0 8E040000 */  lw    $a0, ($s0)
/* 004405F4 8E250000 */  lw    $a1, ($s1)
/* 004405F8 0320F809 */  jalr  $t9
/* 004405FC 00000000 */   nop   
/* 00440600 8FBC00B8 */  lw    $gp, 0xb8($sp)
/* 00440604 8E100008 */  lw    $s0, 8($s0)
.L00440608:
/* 00440608 5600FFF5 */  bnel  $s0, $zero, .L004405E0
/* 0044060C 8E0A0004 */   lw    $t2, 4($s0)
/* 00440610 10000040 */  b     .L00440714
/* 00440614 8FBF00BC */   lw    $ra, 0xbc($sp)
.L00440618:
/* 00440618 8F8B8038 */  lw    $t3, %got(RO_1000D0B8)($gp)
/* 0044061C 24040004 */  li    $a0, 4
/* 00440620 240503BC */  li    $a1, 956
/* 00440624 256BD0B8 */  addiu $t3, %lo(RO_1000D0B8) # addiu $t3, $t3, -0x2f48
/* 00440628 256F0048 */  addiu $t7, $t3, 0x48
/* 0044062C 03A07025 */  move  $t6, $sp
.L00440630:
/* 00440630 896D0000 */  lwl   $t5, ($t3)
/* 00440634 996D0003 */  lwr   $t5, 3($t3)
/* 00440638 256B000C */  addiu $t3, $t3, 0xc
/* 0044063C 25CE000C */  addiu $t6, $t6, 0xc
/* 00440640 A9CDFFFC */  swl   $t5, -4($t6)
/* 00440644 B9CDFFFF */  swr   $t5, -1($t6)
/* 00440648 896CFFF8 */  lwl   $t4, -8($t3)
/* 0044064C 996CFFFB */  lwr   $t4, -5($t3)
/* 00440650 A9CC0000 */  swl   $t4, ($t6)
/* 00440654 B9CC0003 */  swr   $t4, 3($t6)
/* 00440658 896DFFFC */  lwl   $t5, -4($t3)
/* 0044065C 996DFFFF */  lwr   $t5, -1($t3)
/* 00440660 A9CD0004 */  swl   $t5, 4($t6)
/* 00440664 156FFFF2 */  bne   $t3, $t7, .L00440630
/* 00440668 B9CD0007 */   swr   $t5, 7($t6)
/* 0044066C 896D0000 */  lwl   $t5, ($t3)
/* 00440670 996D0003 */  lwr   $t5, 3($t3)
/* 00440674 8F988038 */  lw    $t8, %got(RO_1000D068)($gp)
/* 00440678 03A04825 */  move  $t1, $sp
/* 0044067C A9CD0008 */  swl   $t5, 8($t6)
/* 00440680 B9CD000B */  swr   $t5, 0xb($t6)
/* 00440684 896C0004 */  lwl   $t4, 4($t3)
/* 00440688 996C0007 */  lwr   $t4, 7($t3)
/* 0044068C 2718D068 */  addiu $t8, %lo(RO_1000D068) # addiu $t8, $t8, -0x2f98
/* 00440690 270A0048 */  addiu $t2, $t8, 0x48
/* 00440694 A9CC000C */  swl   $t4, 0xc($t6)
/* 00440698 B9CC000F */  swr   $t4, 0xf($t6)
.L0044069C:
/* 0044069C 8B080000 */  lwl   $t0, ($t8)
/* 004406A0 9B080003 */  lwr   $t0, 3($t8)
/* 004406A4 2718000C */  addiu $t8, $t8, 0xc
/* 004406A8 2529000C */  addiu $t1, $t1, 0xc
/* 004406AC A928004C */  swl   $t0, 0x4c($t1)
/* 004406B0 B928004F */  swr   $t0, 0x4f($t1)
/* 004406B4 8B19FFF8 */  lwl   $t9, -8($t8)
/* 004406B8 9B19FFFB */  lwr   $t9, -5($t8)
/* 004406BC A9390050 */  swl   $t9, 0x50($t1)
/* 004406C0 B9390053 */  swr   $t9, 0x53($t1)
/* 004406C4 8B08FFFC */  lwl   $t0, -4($t8)
/* 004406C8 9B08FFFF */  lwr   $t0, -1($t8)
/* 004406CC A9280054 */  swl   $t0, 0x54($t1)
/* 004406D0 170AFFF2 */  bne   $t8, $t2, .L0044069C
/* 004406D4 B9280057 */   swr   $t0, 0x57($t1)
/* 004406D8 8B080000 */  lwl   $t0, ($t8)
/* 004406DC 9B080003 */  lwr   $t0, 3($t8)
/* 004406E0 A9280058 */  swl   $t0, 0x58($t1)
/* 004406E4 B928005B */  swr   $t0, 0x5b($t1)
/* 004406E8 8B190004 */  lwl   $t9, 4($t8)
/* 004406EC 9B190007 */  lwr   $t9, 7($t8)
/* 004406F0 A939005C */  swl   $t9, 0x5c($t1)
/* 004406F4 B939005F */  swr   $t9, 0x5f($t1)
/* 004406F8 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 004406FC 8FA7000C */  lw    $a3, 0xc($sp)
/* 00440700 8FA60008 */  lw    $a2, 8($sp)
/* 00440704 0320F809 */  jalr  $t9
/* 00440708 00000000 */   nop   
/* 0044070C 8FBC00B8 */  lw    $gp, 0xb8($sp)
.L00440710:
/* 00440710 8FBF00BC */  lw    $ra, 0xbc($sp)
.L00440714:
/* 00440714 8FB000B0 */  lw    $s0, 0xb0($sp)
/* 00440718 8FB100B4 */  lw    $s1, 0xb4($sp)
/* 0044071C 03E00008 */  jr    $ra
/* 00440720 27BD00C0 */   addiu $sp, $sp, 0xc0
    .type emit_symbol, @function
    .size emit_symbol, .-emit_symbol
    .end emit_symbol

glabel output_decls
    .ent output_decls
    # 0044BF18 main
/* 00440724 3C1C0FBE */  .cpload $t9
/* 00440728 279CF32C */  
/* 0044072C 0399E021 */  
/* 00440730 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 00440734 AFB30024 */  sw    $s3, 0x24($sp)
/* 00440738 8F938904 */  lw     $s3, %got(headof_inordered_inits)($gp)
/* 0044073C AFB00018 */  sw    $s0, 0x18($sp)
/* 00440740 AFBF002C */  sw    $ra, 0x2c($sp)
/* 00440744 8E700000 */  lw    $s0, ($s3)
/* 00440748 AFBC0028 */  sw    $gp, 0x28($sp)
/* 0044074C AFB20020 */  sw    $s2, 0x20($sp)
/* 00440750 1200000B */  beqz  $s0, .L00440780
/* 00440754 AFB1001C */   sw    $s1, 0x1c($sp)
/* 00440758 2411FFFF */  li    $s1, -1
.L0044075C:
/* 0044075C 8F99858C */  lw    $t9, %call16(emit_symbol)($gp)
/* 00440760 02002025 */  move  $a0, $s0
/* 00440764 0320F809 */  jalr  $t9
/* 00440768 00000000 */   nop   
/* 0044076C AE110000 */  sw    $s1, ($s0)
/* 00440770 8E100024 */  lw    $s0, 0x24($s0)
/* 00440774 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00440778 1600FFF8 */  bnez  $s0, .L0044075C
/* 0044077C 00000000 */   nop   
.L00440780:
/* 00440780 8F818908 */  lw     $at, %got(tailof_inordered_inits)($gp)
/* 00440784 8F928BD8 */  lw     $s2, %got(sym_hash_tab)($gp)
/* 00440788 AE600000 */  sw    $zero, ($s3)
/* 0044078C 2411FFFF */  li    $s1, -1
/* 00440790 AC200000 */  sw    $zero, ($at)
/* 00440794 26530400 */  addiu $s3, $s2, 0x400
/* 00440798 8E420000 */  lw    $v0, ($s2)
.L0044079C:
/* 0044079C 5040000F */  beql  $v0, $zero, .L004407DC
/* 004407A0 26520004 */   addiu $s2, $s2, 4
/* 004407A4 1040000C */  beqz  $v0, .L004407D8
/* 004407A8 00408025 */   move  $s0, $v0
/* 004407AC 8E0E0000 */  lw    $t6, ($s0)
.L004407B0:
/* 004407B0 522E0007 */  beql  $s1, $t6, .L004407D0
/* 004407B4 8E100008 */   lw    $s0, 8($s0)
/* 004407B8 8F99858C */  lw    $t9, %call16(emit_symbol)($gp)
/* 004407BC 02002025 */  move  $a0, $s0
/* 004407C0 0320F809 */  jalr  $t9
/* 004407C4 00000000 */   nop   
/* 004407C8 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004407CC 8E100008 */  lw    $s0, 8($s0)
.L004407D0:
/* 004407D0 5600FFF7 */  bnel  $s0, $zero, .L004407B0
/* 004407D4 8E0E0000 */   lw    $t6, ($s0)
.L004407D8:
/* 004407D8 26520004 */  addiu $s2, $s2, 4
.L004407DC:
/* 004407DC 5653FFEF */  bnel  $s2, $s3, .L0044079C
/* 004407E0 8E420000 */   lw    $v0, ($s2)
/* 004407E4 8FBF002C */  lw    $ra, 0x2c($sp)
/* 004407E8 8FB00018 */  lw    $s0, 0x18($sp)
/* 004407EC 8FB1001C */  lw    $s1, 0x1c($sp)
/* 004407F0 8FB20020 */  lw    $s2, 0x20($sp)
/* 004407F4 8FB30024 */  lw    $s3, 0x24($sp)
/* 004407F8 03E00008 */  jr    $ra
/* 004407FC 27BD0030 */   addiu $sp, $sp, 0x30
    .type output_decls, @function
    .size output_decls, .-output_decls
    .end output_decls

glabel output_entry_point
    .ent output_entry_point
    # 00420810 gen_entry_exit
/* 00440800 3C1C0FBE */  .cpload $t9
/* 00440804 279CF250 */  
/* 00440808 0399E021 */  
/* 0044080C 27BDFF40 */  addiu $sp, $sp, -0xc0
/* 00440810 8F99855C */  lw    $t9, %call16(lookup_sym)($gp)
/* 00440814 AFBF00BC */  sw    $ra, 0xbc($sp)
/* 00440818 AFB000AC */  sw    $s0, 0xac($sp)
/* 0044081C 00808025 */  move  $s0, $a0
/* 00440820 AFBC00B8 */  sw    $gp, 0xb8($sp)
/* 00440824 AFB200B4 */  sw    $s2, 0xb4($sp)
/* 00440828 0320F809 */  jalr  $t9
/* 0044082C AFB100B0 */   sw    $s1, 0xb0($sp)
/* 00440830 8FBC00B8 */  lw    $gp, 0xb8($sp)
/* 00440834 14400040 */  bnez  $v0, .L00440938
/* 00440838 00409025 */   move  $s2, $v0
/* 0044083C 8F8E8038 */  lw    $t6, %got(RO_1000D180)($gp)
/* 00440840 24040004 */  li    $a0, 4
/* 00440844 240503E7 */  li    $a1, 999
/* 00440848 25CED180 */  addiu $t6, %lo(RO_1000D180) # addiu $t6, $t6, -0x2e80
/* 0044084C 25C80048 */  addiu $t0, $t6, 0x48
/* 00440850 03A0C825 */  move  $t9, $sp
.L00440854:
/* 00440854 89D80000 */  lwl   $t8, ($t6)
/* 00440858 99D80003 */  lwr   $t8, 3($t6)
/* 0044085C 25CE000C */  addiu $t6, $t6, 0xc
/* 00440860 2739000C */  addiu $t9, $t9, 0xc
/* 00440864 AB38FFFC */  swl   $t8, -4($t9)
/* 00440868 BB38FFFF */  swr   $t8, -1($t9)
/* 0044086C 89CFFFF8 */  lwl   $t7, -8($t6)
/* 00440870 99CFFFFB */  lwr   $t7, -5($t6)
/* 00440874 AB2F0000 */  swl   $t7, ($t9)
/* 00440878 BB2F0003 */  swr   $t7, 3($t9)
/* 0044087C 89D8FFFC */  lwl   $t8, -4($t6)
/* 00440880 99D8FFFF */  lwr   $t8, -1($t6)
/* 00440884 AB380004 */  swl   $t8, 4($t9)
/* 00440888 15C8FFF2 */  bne   $t6, $t0, .L00440854
/* 0044088C BB380007 */   swr   $t8, 7($t9)
/* 00440890 89D80000 */  lwl   $t8, ($t6)
/* 00440894 99D80003 */  lwr   $t8, 3($t6)
/* 00440898 8F898038 */  lw    $t1, %got(RO_1000D130)($gp)
/* 0044089C 03A06025 */  move  $t4, $sp
/* 004408A0 AB380008 */  swl   $t8, 8($t9)
/* 004408A4 BB38000B */  swr   $t8, 0xb($t9)
/* 004408A8 89CF0004 */  lwl   $t7, 4($t6)
/* 004408AC 99CF0007 */  lwr   $t7, 7($t6)
/* 004408B0 2529D130 */  addiu $t1, %lo(RO_1000D130) # addiu $t1, $t1, -0x2ed0
/* 004408B4 252D0048 */  addiu $t5, $t1, 0x48
/* 004408B8 AB2F000C */  swl   $t7, 0xc($t9)
/* 004408BC BB2F000F */  swr   $t7, 0xf($t9)
.L004408C0:
/* 004408C0 892B0000 */  lwl   $t3, ($t1)
/* 004408C4 992B0003 */  lwr   $t3, 3($t1)
/* 004408C8 2529000C */  addiu $t1, $t1, 0xc
/* 004408CC 258C000C */  addiu $t4, $t4, 0xc
/* 004408D0 A98B004C */  swl   $t3, 0x4c($t4)
/* 004408D4 B98B004F */  swr   $t3, 0x4f($t4)
/* 004408D8 892AFFF8 */  lwl   $t2, -8($t1)
/* 004408DC 992AFFFB */  lwr   $t2, -5($t1)
/* 004408E0 A98A0050 */  swl   $t2, 0x50($t4)
/* 004408E4 B98A0053 */  swr   $t2, 0x53($t4)
/* 004408E8 892BFFFC */  lwl   $t3, -4($t1)
/* 004408EC 992BFFFF */  lwr   $t3, -1($t1)
/* 004408F0 A98B0054 */  swl   $t3, 0x54($t4)
/* 004408F4 152DFFF2 */  bne   $t1, $t5, .L004408C0
/* 004408F8 B98B0057 */   swr   $t3, 0x57($t4)
/* 004408FC 892B0000 */  lwl   $t3, ($t1)
/* 00440900 992B0003 */  lwr   $t3, 3($t1)
/* 00440904 A98B0058 */  swl   $t3, 0x58($t4)
/* 00440908 B98B005B */  swr   $t3, 0x5b($t4)
/* 0044090C 892A0004 */  lwl   $t2, 4($t1)
/* 00440910 992A0007 */  lwr   $t2, 7($t1)
/* 00440914 A98A005C */  swl   $t2, 0x5c($t4)
/* 00440918 B98A005F */  swr   $t2, 0x5f($t4)
/* 0044091C 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 00440920 8FA7000C */  lw    $a3, 0xc($sp)
/* 00440924 8FA60008 */  lw    $a2, 8($sp)
/* 00440928 0320F809 */  jalr  $t9
/* 0044092C 00000000 */   nop   
/* 00440930 1000001D */  b     .L004409A8
/* 00440934 8FBC00B8 */   lw    $gp, 0xb8($sp)
.L00440938:
/* 00440938 8F998280 */  lw    $t9, %call16(demit_dir0)($gp)
/* 0044093C 00002025 */  move  $a0, $zero
/* 00440940 02002825 */  move  $a1, $s0
/* 00440944 0320F809 */  jalr  $t9
/* 00440948 00000000 */   nop   
/* 0044094C 8E500028 */  lw    $s0, 0x28($s2)
/* 00440950 8FBC00B8 */  lw    $gp, 0xb8($sp)
/* 00440954 2411000A */  li    $s1, 10
/* 00440958 52000014 */  beql  $s0, $zero, .L004409AC
/* 0044095C 8FBF00BC */   lw    $ra, 0xbc($sp)
/* 00440960 9248000C */  lbu   $t0, 0xc($s2)
.L00440964:
/* 00440964 16280007 */  bne   $s1, $t0, .L00440984
/* 00440968 00000000 */   nop   
/* 0044096C 8F998280 */  lw    $t9, %call16(demit_dir0)($gp)
/* 00440970 24040002 */  li    $a0, 2
/* 00440974 8E050000 */  lw    $a1, ($s0)
/* 00440978 0320F809 */  jalr  $t9
/* 0044097C 00000000 */   nop   
/* 00440980 8FBC00B8 */  lw    $gp, 0xb8($sp)
.L00440984:
/* 00440984 8F998280 */  lw    $t9, %call16(demit_dir0)($gp)
/* 00440988 00002025 */  move  $a0, $zero
/* 0044098C 8E050000 */  lw    $a1, ($s0)
/* 00440990 0320F809 */  jalr  $t9
/* 00440994 00000000 */   nop   
/* 00440998 8E100008 */  lw    $s0, 8($s0)
/* 0044099C 8FBC00B8 */  lw    $gp, 0xb8($sp)
/* 004409A0 5600FFF0 */  bnel  $s0, $zero, .L00440964
/* 004409A4 9248000C */   lbu   $t0, 0xc($s2)
.L004409A8:
/* 004409A8 8FBF00BC */  lw    $ra, 0xbc($sp)
.L004409AC:
/* 004409AC 8FB000AC */  lw    $s0, 0xac($sp)
/* 004409B0 8FB100B0 */  lw    $s1, 0xb0($sp)
/* 004409B4 8FB200B4 */  lw    $s2, 0xb4($sp)
/* 004409B8 03E00008 */  jr    $ra
/* 004409BC 27BD00C0 */   addiu $sp, $sp, 0xc0
    .type output_entry_point, @function
    .size output_entry_point, .-output_entry_point
    .end output_entry_point

glabel change_label_number
    .ent change_label_number
/* 004409C0 3C1C0FBE */  .cpload $t9
/* 004409C4 279CF090 */  
/* 004409C8 0399E021 */  
/* 004409CC 8F99855C */  lw    $t9, %call16(lookup_sym)($gp)
/* 004409D0 27BDFF48 */  addiu $sp, $sp, -0xb8
/* 004409D4 AFBF00B4 */  sw    $ra, 0xb4($sp)
/* 004409D8 AFBC00B0 */  sw    $gp, 0xb0($sp)
/* 004409DC 0320F809 */  jalr  $t9
/* 004409E0 AFA500BC */   sw    $a1, 0xbc($sp)
/* 004409E4 14400040 */  bnez  $v0, .L00440AE8
/* 004409E8 8FBC00B0 */   lw    $gp, 0xb0($sp)
/* 004409EC 8F8E8038 */  lw    $t6, %got(RO_1000D220)($gp)
/* 004409F0 24040004 */  li    $a0, 4
/* 004409F4 240503FA */  li    $a1, 1018
/* 004409F8 25CED220 */  addiu $t6, %lo(RO_1000D220) # addiu $t6, $t6, -0x2de0
/* 004409FC 25C80048 */  addiu $t0, $t6, 0x48
/* 00440A00 03A0C825 */  move  $t9, $sp
.L00440A04:
/* 00440A04 89D80000 */  lwl   $t8, ($t6)
/* 00440A08 99D80003 */  lwr   $t8, 3($t6)
/* 00440A0C 25CE000C */  addiu $t6, $t6, 0xc
/* 00440A10 2739000C */  addiu $t9, $t9, 0xc
/* 00440A14 AB38FFFC */  swl   $t8, -4($t9)
/* 00440A18 BB38FFFF */  swr   $t8, -1($t9)
/* 00440A1C 89CFFFF8 */  lwl   $t7, -8($t6)
/* 00440A20 99CFFFFB */  lwr   $t7, -5($t6)
/* 00440A24 AB2F0000 */  swl   $t7, ($t9)
/* 00440A28 BB2F0003 */  swr   $t7, 3($t9)
/* 00440A2C 89D8FFFC */  lwl   $t8, -4($t6)
/* 00440A30 99D8FFFF */  lwr   $t8, -1($t6)
/* 00440A34 AB380004 */  swl   $t8, 4($t9)
/* 00440A38 15C8FFF2 */  bne   $t6, $t0, .L00440A04
/* 00440A3C BB380007 */   swr   $t8, 7($t9)
/* 00440A40 89D80000 */  lwl   $t8, ($t6)
/* 00440A44 99D80003 */  lwr   $t8, 3($t6)
/* 00440A48 8F898038 */  lw    $t1, %got(RO_1000D1D0)($gp)
/* 00440A4C 03A06025 */  move  $t4, $sp
/* 00440A50 AB380008 */  swl   $t8, 8($t9)
/* 00440A54 BB38000B */  swr   $t8, 0xb($t9)
/* 00440A58 89CF0004 */  lwl   $t7, 4($t6)
/* 00440A5C 99CF0007 */  lwr   $t7, 7($t6)
/* 00440A60 2529D1D0 */  addiu $t1, %lo(RO_1000D1D0) # addiu $t1, $t1, -0x2e30
/* 00440A64 252D0048 */  addiu $t5, $t1, 0x48
/* 00440A68 AB2F000C */  swl   $t7, 0xc($t9)
/* 00440A6C BB2F000F */  swr   $t7, 0xf($t9)
.L00440A70:
/* 00440A70 892B0000 */  lwl   $t3, ($t1)
/* 00440A74 992B0003 */  lwr   $t3, 3($t1)
/* 00440A78 2529000C */  addiu $t1, $t1, 0xc
/* 00440A7C 258C000C */  addiu $t4, $t4, 0xc
/* 00440A80 A98B004C */  swl   $t3, 0x4c($t4)
/* 00440A84 B98B004F */  swr   $t3, 0x4f($t4)
/* 00440A88 892AFFF8 */  lwl   $t2, -8($t1)
/* 00440A8C 992AFFFB */  lwr   $t2, -5($t1)
/* 00440A90 A98A0050 */  swl   $t2, 0x50($t4)
/* 00440A94 B98A0053 */  swr   $t2, 0x53($t4)
/* 00440A98 892BFFFC */  lwl   $t3, -4($t1)
/* 00440A9C 992BFFFF */  lwr   $t3, -1($t1)
/* 00440AA0 A98B0054 */  swl   $t3, 0x54($t4)
/* 00440AA4 152DFFF2 */  bne   $t1, $t5, .L00440A70
/* 00440AA8 B98B0057 */   swr   $t3, 0x57($t4)
/* 00440AAC 892B0000 */  lwl   $t3, ($t1)
/* 00440AB0 992B0003 */  lwr   $t3, 3($t1)
/* 00440AB4 A98B0058 */  swl   $t3, 0x58($t4)
/* 00440AB8 B98B005B */  swr   $t3, 0x5b($t4)
/* 00440ABC 892A0004 */  lwl   $t2, 4($t1)
/* 00440AC0 992A0007 */  lwr   $t2, 7($t1)
/* 00440AC4 A98A005C */  swl   $t2, 0x5c($t4)
/* 00440AC8 B98A005F */  swr   $t2, 0x5f($t4)
/* 00440ACC 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 00440AD0 8FA7000C */  lw    $a3, 0xc($sp)
/* 00440AD4 8FA60008 */  lw    $a2, 8($sp)
/* 00440AD8 0320F809 */  jalr  $t9
/* 00440ADC 00000000 */   nop   
/* 00440AE0 10000004 */  b     .L00440AF4
/* 00440AE4 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L00440AE8:
/* 00440AE8 8FA800BC */  lw    $t0, 0xbc($sp)
/* 00440AEC 00087023 */  negu  $t6, $t0
/* 00440AF0 AC4E0004 */  sw    $t6, 4($v0)
.L00440AF4:
/* 00440AF4 8FBF00B4 */  lw    $ra, 0xb4($sp)
/* 00440AF8 27BD00B8 */  addiu $sp, $sp, 0xb8
/* 00440AFC 03E00008 */  jr    $ra
/* 00440B00 00000000 */   nop   
    .type change_label_number, @function
    .size change_label_number, .-change_label_number
    .end change_label_number

glabel set_mtag
    .ent set_mtag
    # 0040EFBC func_0040EFBC
/* 00440B04 3C1C0FBE */  .cpload $t9
/* 00440B08 279CEF4C */  
/* 00440B0C 0399E021 */  
/* 00440B10 8F99855C */  lw    $t9, %call16(lookup_sym)($gp)
/* 00440B14 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00440B18 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00440B1C AFBC0018 */  sw    $gp, 0x18($sp)
/* 00440B20 0320F809 */  jalr  $t9
/* 00440B24 AFA50024 */   sw    $a1, 0x24($sp)
/* 00440B28 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00440B2C 10400008 */  beqz  $v0, .L00440B50
/* 00440B30 8FA50024 */   lw    $a1, 0x24($sp)
/* 00440B34 8C4E0014 */  lw    $t6, 0x14($v0)
/* 00440B38 55C00006 */  bnel  $t6, $zero, .L00440B54
/* 00440B3C 8FBF001C */   lw    $ra, 0x1c($sp)
/* 00440B40 8CAF0000 */  lw    $t7, ($a1)
/* 00440B44 25F90001 */  addiu $t9, $t7, 1
/* 00440B48 ACB90000 */  sw    $t9, ($a1)
/* 00440B4C AC590014 */  sw    $t9, 0x14($v0)
.L00440B50:
/* 00440B50 8FBF001C */  lw    $ra, 0x1c($sp)
.L00440B54:
/* 00440B54 27BD0020 */  addiu $sp, $sp, 0x20
/* 00440B58 03E00008 */  jr    $ra
/* 00440B5C 00000000 */   nop   
    .type set_mtag, @function
    .size set_mtag, .-set_mtag
    .end set_mtag

glabel get_mtag
    .ent get_mtag
    # 00447768 check_reg
/* 00440B60 3C1C0FBE */  .cpload $t9
/* 00440B64 279CEEF0 */  
/* 00440B68 0399E021 */  
/* 00440B6C 8F99855C */  lw    $t9, %call16(lookup_sym)($gp)
/* 00440B70 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00440B74 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00440B78 0320F809 */  jalr  $t9
/* 00440B7C AFBC0018 */   sw    $gp, 0x18($sp)
/* 00440B80 10400003 */  beqz  $v0, .L00440B90
/* 00440B84 8FBC0018 */   lw    $gp, 0x18($sp)
/* 00440B88 10000003 */  b     .L00440B98
/* 00440B8C 8C430014 */   lw    $v1, 0x14($v0)
.L00440B90:
/* 00440B90 8F838970 */  lw     $v1, %got(non_local_mtag)($gp)
/* 00440B94 8C630000 */  lw    $v1, ($v1)
.L00440B98:
/* 00440B98 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00440B9C 27BD0020 */  addiu $sp, $sp, 0x20
/* 00440BA0 00601025 */  move  $v0, $v1
/* 00440BA4 03E00008 */  jr    $ra
/* 00440BA8 00000000 */   nop   
    .type get_mtag, @function
    .size get_mtag, .-get_mtag
    .end get_mtag

glabel get_sym_kind
    .ent get_sym_kind
    # 0042670C loadstore
    # 00428D14 eval_mov
    # 0042BDAC eval
/* 00440BAC 3C1C0FBE */  .cpload $t9
/* 00440BB0 279CEEA4 */  
/* 00440BB4 0399E021 */  
/* 00440BB8 8F99855C */  lw    $t9, %call16(lookup_sym)($gp)
/* 00440BBC 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00440BC0 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00440BC4 0320F809 */  jalr  $t9
/* 00440BC8 AFBC0018 */   sw    $gp, 0x18($sp)
/* 00440BCC 10400003 */  beqz  $v0, .L00440BDC
/* 00440BD0 8FBC0018 */   lw    $gp, 0x18($sp)
/* 00440BD4 10000002 */  b     .L00440BE0
/* 00440BD8 9043000C */   lbu   $v1, 0xc($v0)
.L00440BDC:
/* 00440BDC 00001825 */  move  $v1, $zero
.L00440BE0:
/* 00440BE0 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00440BE4 27BD0020 */  addiu $sp, $sp, 0x20
/* 00440BE8 00601025 */  move  $v0, $v1
/* 00440BEC 03E00008 */  jr    $ra
/* 00440BF0 00000000 */   nop   
    .type get_sym_kind, @function
    .size get_sym_kind, .-get_sym_kind
    .end get_sym_kind
)"");
