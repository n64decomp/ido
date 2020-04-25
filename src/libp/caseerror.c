__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
RO_1000FC60:
    # 004984F0 caseerror
    .asciz "No case matches value in case statement on page %d line %d file %s.\n"

RO_1000FCA8:
    # 00498590 assert_err
    .asciz "assertion failed %s \n"




.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
glabel caseerror
    .ent caseerror
    # 0040F8D0 resetsubdelete
    # 0040FD80 trap_implying
    # 0040FF80 trap_implying_v
    # 00410204 codemotion
    # 004120E0 entryav
    # 004121E4 entryant
    # 0041297C func_0041297C
    # 00412B18 func_00412B18
    # 00413000 exprdelete
    # 00413510 func_00413510
    # 004135CC func_004135CC
    # 00413684 func_00413684
    # 004137DC func_004137DC
    # 00414108 func_00414108
    # 0041550C func_0041550C
    # 004175BC copypropagate
    # 0041A2A0 printmtyp
    # 0041A410 printitab
    # 0041AC2C printtab
    # 004205F8 genrlodrstr
    # 00422D04 func_00422D04
    # 004230F0 func_004230F0
    # 00424FFC func_00424FFC
    # 00425618 func_00425618
    # 00426DE8 func_00426DE8
    # 00426FA4 func_00426FA4
    # 0043005C func_0043005C
    # 00430680 func_00430680
    # 00430D74 func_00430D74
    # 004310EC func_004310EC
    # 00431508 func_00431508
    # 00433B00 ivfactor
    # 00439C40 getop
    # 0043ABD0 incroccurrence
    # 0043B504 func_0043B504
    # 0043CFCC readnxtinst
    # 00444A84 isearchloop
    # 00445E44 exprimage
    # 00446E18 searchstore
    # 004494A4 aliaswithptr
    # 0044B4F4 clkilled
    # 0044BDFC cskilled
    # 0044DF30 binaryovfw
    # 0044E410 unaryovfw
    # 0044E604 binaryfold
    # 0044F3C0 unaryfold
    # 0044F738 linearize
    # 0044FF6C mergeconst
    # 00451764 func_00451764
    # 00452DAC constarith
    # 00454F00 func_00454F00
    # 00458B88 assign_mtag
    # 00459698 make_subloc_veqv
    # 00459828 insertvar
    # 00459FB0 insertlda
    # 0045A480 oneinstruction
    # 0045C540 varintree
    # 0045CBDC cupaltered
    # 0045CD78 expaltered
    # 0045E0B8 varappear
    # 0045E5C4 func_0045E5C4
    # 0045FBB4 func_0045FBB4
    # 00461084 func_00461084
    # 00465E50 spilltemps
    # 0046C710 unroll_searchloop
    # 0046D428 oneloopblockexpr
    # 0046E77C oneloopblockstmt
    # 0046FCD4 link_jump_in_loop
    # 00470570 expr_instr
    # 004712A4 reset_images
    # 004736E0 func_004736E0
    # 00474DC0 func_00474DC0
    # 0047606C func_0047606C
    # 00476AA0 findbbtemps
    # 00476ECC func_00476ECC
    # 00477118 func_00477118
    # 00477854 func_00477854
    # 00477B0C func_00477B0C
    # 0047847C func_0047847C
    # 004793C4 func_004793C4
    # 0047966C func_0047966C
    # 00479B80 func_00479B80
    # 0047BFEC findsimilar
    # 0047C284 copycoderep
    # 0047C6E8 decreasecount
    # 0047C960 increasecount
    # 0047D000 exproccurred
    # 0047D188 iexproccurred
    # 0047D878 deccount
    # 0047DBB4 getoption
    # 0047E3BC binopwithconst
    # 0047E6D8 constinreg
    # 0047E938 checkincre
    # 0047EBB0 findincre
    # 0047ED9C countvars
    # 0047F4C0 trap_imply
    # 0047F620 trapstat_imply
    # 0047FE1C func_0047FE1C
/* 004984F0 3C1C0FB8 */  .cpload $t9
/* 004984F4 279C1DA0 */  
/* 004984F8 0399E021 */  
/* 004984FC 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 00498500 8F9980C8 */  lw    $t9, %call16(malloc)($gp)
/* 00498504 AFBF0024 */  sw    $ra, 0x24($sp)
/* 00498508 AFA40030 */  sw    $a0, 0x30($sp)
/* 0049850C AFBC0020 */  sw    $gp, 0x20($sp)
/* 00498510 AFA50034 */  sw    $a1, 0x34($sp)
/* 00498514 AFA60038 */  sw    $a2, 0x38($sp)
/* 00498518 AFA7003C */  sw    $a3, 0x3c($sp)
/* 0049851C 0320F809 */  jalr  $t9
/* 00498520 24E40001 */   addiu $a0, $a3, 1
/* 00498524 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00498528 00402025 */  move  $a0, $v0
/* 0049852C 8FA50038 */  lw    $a1, 0x38($sp)
/* 00498530 8F998138 */  lw    $t9, %call16(memcpy)($gp)
/* 00498534 8FA6003C */  lw    $a2, 0x3c($sp)
/* 00498538 AFA2002C */  sw    $v0, 0x2c($sp)
/* 0049853C 0320F809 */  jalr  $t9
/* 00498540 00000000 */   nop   
/* 00498544 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00498548 8FA3002C */  lw    $v1, 0x2c($sp)
/* 0049854C 8FAE003C */  lw    $t6, 0x3c($sp)
/* 00498550 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 00498554 8F858044 */  lw    $a1, %got(RO_1000FC60)($gp)
/* 00498558 006E7821 */  addu  $t7, $v1, $t6
/* 0049855C A1E00000 */  sb    $zero, ($t7)
/* 00498560 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 00498564 8FA70034 */  lw    $a3, 0x34($sp)
/* 00498568 8FA60030 */  lw    $a2, 0x30($sp)
/* 0049856C AFA30010 */  sw    $v1, 0x10($sp)
/* 00498570 24840020 */  addiu $a0, $a0, 0x20
/* 00498574 0320F809 */  jalr  $t9
/* 00498578 24A5FC60 */   addiu $a1, %lo(RO_1000FC60) # addiu $a1, $a1, -0x3a0
/* 0049857C 8FBF0024 */  lw    $ra, 0x24($sp)
/* 00498580 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00498584 27BD0030 */  addiu $sp, $sp, 0x30
/* 00498588 03E00008 */  jr    $ra
/* 0049858C 00000000 */   nop   
    .type caseerror, @function
    .size caseerror, .-caseerror
    .end caseerror

glabel assert_err
    .ent assert_err
/* 00498590 3C1C0FB8 */  .cpload $t9
/* 00498594 279C1D00 */  
/* 00498598 0399E021 */  
/* 0049859C 8F9980C8 */  lw    $t9, %call16(malloc)($gp)
/* 004985A0 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 004985A4 AFBF001C */  sw    $ra, 0x1c($sp)
/* 004985A8 AFA40028 */  sw    $a0, 0x28($sp)
/* 004985AC AFBC0018 */  sw    $gp, 0x18($sp)
/* 004985B0 AFA5002C */  sw    $a1, 0x2c($sp)
/* 004985B4 0320F809 */  jalr  $t9
/* 004985B8 24A40001 */   addiu $a0, $a1, 1
/* 004985BC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004985C0 00402025 */  move  $a0, $v0
/* 004985C4 8FA50028 */  lw    $a1, 0x28($sp)
/* 004985C8 8F998138 */  lw    $t9, %call16(memcpy)($gp)
/* 004985CC 8FA6002C */  lw    $a2, 0x2c($sp)
/* 004985D0 AFA20024 */  sw    $v0, 0x24($sp)
/* 004985D4 0320F809 */  jalr  $t9
/* 004985D8 00000000 */   nop   
/* 004985DC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004985E0 8FA60024 */  lw    $a2, 0x24($sp)
/* 004985E4 8FAE002C */  lw    $t6, 0x2c($sp)
/* 004985E8 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 004985EC 8F858044 */  lw    $a1, %got(RO_1000FCA8)($gp)
/* 004985F0 00CE7821 */  addu  $t7, $a2, $t6
/* 004985F4 A1E00000 */  sb    $zero, ($t7)
/* 004985F8 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 004985FC 24840020 */  addiu $a0, $a0, 0x20
/* 00498600 24A5FCA8 */  addiu $a1, %lo(RO_1000FCA8) # addiu $a1, $a1, -0x358
/* 00498604 0320F809 */  jalr  $t9
/* 00498608 00000000 */   nop   
/* 0049860C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00498610 8F9980A0 */  lw    $t9, %call16(fflush)($gp)
/* 00498614 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 00498618 0320F809 */  jalr  $t9
/* 0049861C 24840020 */   addiu $a0, $a0, 0x20
/* 00498620 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00498624 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00498628 27BD0028 */  addiu $sp, $sp, 0x28
/* 0049862C 03E00008 */  jr    $ra
/* 00498630 00000000 */   nop   
    .type assert_err, @function
    .size assert_err, .-assert_err
    .end assert_err
)"");
