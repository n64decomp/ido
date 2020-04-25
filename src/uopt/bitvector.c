__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm




.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
glabel initbv
    .ent initbv
    # 00410204 codemotion
    # 004175BC copypropagate
    # 004324F4 findinduct
    # 00448C94 find_ix_loadstores
    # 00455D38 analoop
    # 00461AAC makelivranges
    # 004638C0 regdataflow
    # 00464BFC localcolor
    # 00465E50 spilltemps
    # 00475680 getexpsources
    # 00476AA0 findbbtemps
    # 00479DC4 eliminduct
/* 0040C150 AFA50004 */  sw    $a1, 4($sp)
/* 0040C154 AFA60008 */  sw    $a2, 8($sp)
/* 0040C158 AFA7000C */  sw    $a3, 0xc($sp)
/* 0040C15C 8C830000 */  lw    $v1, ($a0)
/* 0040C160 8C820004 */  lw    $v0, 4($a0)
/* 0040C164 2463FFFF */  addiu $v1, $v1, -1
/* 0040C168 04600038 */  bltz  $v1, .L0040C24C
/* 0040C16C 24630001 */   addiu $v1, $v1, 1
/* 0040C170 30670003 */  andi  $a3, $v1, 3
/* 0040C174 10E00010 */  beqz  $a3, .L0040C1B8
/* 0040C178 00002025 */   move  $a0, $zero
/* 0040C17C 00007100 */  sll   $t6, $zero, 4
/* 0040C180 004E2821 */  addu  $a1, $v0, $t6
/* 0040C184 00E03025 */  move  $a2, $a3
.L0040C188:
/* 0040C188 8FAF0004 */  lw    $t7, 4($sp)
/* 0040C18C 8FB80008 */  lw    $t8, 8($sp)
/* 0040C190 8FB9000C */  lw    $t9, 0xc($sp)
/* 0040C194 8FA80010 */  lw    $t0, 0x10($sp)
/* 0040C198 24840001 */  addiu $a0, $a0, 1
/* 0040C19C 24A50010 */  addiu $a1, $a1, 0x10
/* 0040C1A0 ACAFFFF0 */  sw    $t7, -0x10($a1)
/* 0040C1A4 ACB8FFF4 */  sw    $t8, -0xc($a1)
/* 0040C1A8 ACB9FFF8 */  sw    $t9, -8($a1)
/* 0040C1AC 14C4FFF6 */  bne   $a2, $a0, .L0040C188
/* 0040C1B0 ACA8FFFC */   sw    $t0, -4($a1)
/* 0040C1B4 10830025 */  beq   $a0, $v1, .L0040C24C
.L0040C1B8:
/* 0040C1B8 00044900 */   sll   $t1, $a0, 4
/* 0040C1BC 00492821 */  addu  $a1, $v0, $t1
.L0040C1C0:
/* 0040C1C0 8FAA0004 */  lw    $t2, 4($sp)
/* 0040C1C4 8FAB0008 */  lw    $t3, 8($sp)
/* 0040C1C8 8FAC000C */  lw    $t4, 0xc($sp)
/* 0040C1CC 8FAD0010 */  lw    $t5, 0x10($sp)
/* 0040C1D0 8FAE0004 */  lw    $t6, 4($sp)
/* 0040C1D4 8FAF0008 */  lw    $t7, 8($sp)
/* 0040C1D8 ACAA0000 */  sw    $t2, ($a1)
/* 0040C1DC ACAB0004 */  sw    $t3, 4($a1)
/* 0040C1E0 ACAC0008 */  sw    $t4, 8($a1)
/* 0040C1E4 ACAD000C */  sw    $t5, 0xc($a1)
/* 0040C1E8 ACAE0010 */  sw    $t6, 0x10($a1)
/* 0040C1EC ACAF0014 */  sw    $t7, 0x14($a1)
/* 0040C1F0 8FAF0010 */  lw    $t7, 0x10($sp)
/* 0040C1F4 8FAE000C */  lw    $t6, 0xc($sp)
/* 0040C1F8 8FAD0008 */  lw    $t5, 8($sp)
/* 0040C1FC 8FAC0004 */  lw    $t4, 4($sp)
/* 0040C200 8FAB0010 */  lw    $t3, 0x10($sp)
/* 0040C204 8FAA000C */  lw    $t2, 0xc($sp)
/* 0040C208 8FB8000C */  lw    $t8, 0xc($sp)
/* 0040C20C 8FB90010 */  lw    $t9, 0x10($sp)
/* 0040C210 8FA80004 */  lw    $t0, 4($sp)
/* 0040C214 8FA90008 */  lw    $t1, 8($sp)
/* 0040C218 24840004 */  addiu $a0, $a0, 4
/* 0040C21C 24A50040 */  addiu $a1, $a1, 0x40
/* 0040C220 ACAFFFFC */  sw    $t7, -4($a1)
/* 0040C224 ACAEFFF8 */  sw    $t6, -8($a1)
/* 0040C228 ACADFFF4 */  sw    $t5, -0xc($a1)
/* 0040C22C ACACFFF0 */  sw    $t4, -0x10($a1)
/* 0040C230 ACABFFEC */  sw    $t3, -0x14($a1)
/* 0040C234 ACAAFFE8 */  sw    $t2, -0x18($a1)
/* 0040C238 ACB8FFD8 */  sw    $t8, -0x28($a1)
/* 0040C23C ACB9FFDC */  sw    $t9, -0x24($a1)
/* 0040C240 ACA8FFE0 */  sw    $t0, -0x20($a1)
/* 0040C244 1483FFDE */  bne   $a0, $v1, .L0040C1C0
/* 0040C248 ACA9FFE4 */   sw    $t1, -0x1c($a1)
.L0040C24C:
/* 0040C24C 03E00008 */  jr    $ra
/* 0040C250 00000000 */   nop   
    .type initbv, @function
    .size initbv, .-initbv
    .end initbv

glabel setbit
    .ent setbit
    # 0040FB70 setsubinsert
    # 00410204 codemotion
    # 004122D8 vardelete
    # 004123C4 varinsert
    # 00414108 func_00414108
    # 004150E4 func_004150E4
    # 0041550C func_0041550C
    # 004175BC copypropagate
    # 00430FF4 func_00430FF4
    # 00431508 func_00431508
    # 004324F4 findinduct
    # 00444A84 isearchloop
    # 00445AEC trep_image
    # 00445E44 exprimage
    # 00446E18 searchstore
    # 004471AC codeimage
    # 00447F90 check_loop_coincidence
    # 00448928 check_loop_induct_usages
    # 00448C94 find_ix_loadstores
    # 0045CD78 expaltered
    # 0045D208 patchvectors
    # 0045DA18 formlivbb
    # 0045E45C func_0045E45C
    # 0045E5C4 func_0045E5C4
    # 0045FBB4 func_0045FBB4
    # 00461084 func_00461084
    # 0046123C func_0046123C
    # 00461640 func_00461640
    # 00461AAC makelivranges
    # 004638C0 regdataflow
    # 00465E50 spilltemps
    # 00467F04 split
    # 00469280 globalcolor
    # 0046BA10 change_to_const_eq
    # 0046BD90 change_to_var_eq
    # 00476AA0 findbbtemps
    # 00477E20 func_00477E20
    # 00478B8C func_00478B8C
    # 00478ED4 func_00478ED4
    # 00478FA0 func_00478FA0
    # 00479778 func_00479778
    # 00479DC4 eliminduct
/* 0040C254 3C1C0FC1 */  .cpload $t9
/* 0040C258 279CE03C */  
/* 0040C25C 0399E021 */  
/* 0040C260 27BDFFB0 */  addiu $sp, $sp, -0x50
/* 0040C264 8F868A4C */  lw     $a2, %got(bitvectorsize)($gp)
/* 0040C268 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0040C26C AFBC0018 */  sw    $gp, 0x18($sp)
/* 0040C270 AFB00014 */  sw    $s0, 0x14($sp)
/* 0040C274 AFA50054 */  sw    $a1, 0x54($sp)
/* 0040C278 8C8E0000 */  lw    $t6, ($a0)
/* 0040C27C 8CC60000 */  lw    $a2, ($a2)
/* 0040C280 00808025 */  move  $s0, $a0
/* 0040C284 AFAE0024 */  sw    $t6, 0x24($sp)
/* 0040C288 01C6082A */  slt   $at, $t6, $a2
/* 0040C28C 50200036 */  beql  $at, $zero, .L0040C368
/* 0040C290 8FAB0054 */   lw    $t3, 0x54($sp)
/* 0040C294 8F9986E8 */  lw    $t9, %call16(alloc_realloc)($gp)
/* 0040C298 8C840004 */  lw    $a0, 4($a0)
/* 0040C29C 01C02825 */  move  $a1, $t6
/* 0040C2A0 0320F809 */  jalr  $t9
/* 0040C2A4 8F878954 */   lw     $a3, %got(perm_heap)($gp)
/* 0040C2A8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0040C2AC AE020004 */  sw    $v0, 4($s0)
/* 0040C2B0 8E070000 */  lw    $a3, ($s0)
/* 0040C2B4 8F898A4C */  lw     $t1, %got(bitvectorsize)($gp)
/* 0040C2B8 8D290000 */  lw    $t1, ($t1)
/* 0040C2BC 2526FFFF */  addiu $a2, $t1, -1
/* 0040C2C0 00C7082A */  slt   $at, $a2, $a3
/* 0040C2C4 14200026 */  bnez  $at, .L0040C360
/* 0040C2C8 24C60001 */   addiu $a2, $a2, 1
/* 0040C2CC 00C74023 */  subu  $t0, $a2, $a3
/* 0040C2D0 31080003 */  andi  $t0, $t0, 3
/* 0040C2D4 1100000C */  beqz  $t0, .L0040C308
/* 0040C2D8 00E02025 */   move  $a0, $a3
/* 0040C2DC 0007C100 */  sll   $t8, $a3, 4
/* 0040C2E0 00581821 */  addu  $v1, $v0, $t8
/* 0040C2E4 01072821 */  addu  $a1, $t0, $a3
.L0040C2E8:
/* 0040C2E8 24840001 */  addiu $a0, $a0, 1
/* 0040C2EC AC600000 */  sw    $zero, ($v1)
/* 0040C2F0 AC600004 */  sw    $zero, 4($v1)
/* 0040C2F4 AC600008 */  sw    $zero, 8($v1)
/* 0040C2F8 AC60000C */  sw    $zero, 0xc($v1)
/* 0040C2FC 14A4FFFA */  bne   $a1, $a0, .L0040C2E8
/* 0040C300 24630010 */   addiu $v1, $v1, 0x10
/* 0040C304 10860016 */  beq   $a0, $a2, .L0040C360
.L0040C308:
/* 0040C308 0006C900 */   sll   $t9, $a2, 4
/* 0040C30C 00045100 */  sll   $t2, $a0, 4
/* 0040C310 004A1821 */  addu  $v1, $v0, $t2
/* 0040C314 03222821 */  addu  $a1, $t9, $v0
.L0040C318:
/* 0040C318 24630040 */  addiu $v1, $v1, 0x40
/* 0040C31C AC60FFC0 */  sw    $zero, -0x40($v1)
/* 0040C320 AC60FFC4 */  sw    $zero, -0x3c($v1)
/* 0040C324 AC60FFC8 */  sw    $zero, -0x38($v1)
/* 0040C328 AC60FFCC */  sw    $zero, -0x34($v1)
/* 0040C32C AC60FFD0 */  sw    $zero, -0x30($v1)
/* 0040C330 AC60FFD4 */  sw    $zero, -0x2c($v1)
/* 0040C334 AC60FFD8 */  sw    $zero, -0x28($v1)
/* 0040C338 AC60FFDC */  sw    $zero, -0x24($v1)
/* 0040C33C AC60FFE0 */  sw    $zero, -0x20($v1)
/* 0040C340 AC60FFE4 */  sw    $zero, -0x1c($v1)
/* 0040C344 AC60FFE8 */  sw    $zero, -0x18($v1)
/* 0040C348 AC60FFEC */  sw    $zero, -0x14($v1)
/* 0040C34C AC60FFF0 */  sw    $zero, -0x10($v1)
/* 0040C350 AC60FFF4 */  sw    $zero, -0xc($v1)
/* 0040C354 AC60FFF8 */  sw    $zero, -8($v1)
/* 0040C358 1465FFEF */  bne   $v1, $a1, .L0040C318
/* 0040C35C AC60FFFC */   sw    $zero, -4($v1)
.L0040C360:
/* 0040C360 AE090000 */  sw    $t1, ($s0)
/* 0040C364 8FAB0054 */  lw    $t3, 0x54($sp)
.L0040C368:
/* 0040C368 8E030004 */  lw    $v1, 4($s0)
/* 0040C36C 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0040C370 316C007F */  andi  $t4, $t3, 0x7f
/* 0040C374 2D8D0020 */  sltiu $t5, $t4, 0x20
/* 0040C378 01807027 */  not   $t6, $t4
/* 0040C37C 2598FFE0 */  addiu $t8, $t4, -0x20
/* 0040C380 2F190020 */  sltiu $t9, $t8, 0x20
/* 0040C384 01CD7804 */  sllv  $t7, $t5, $t6
/* 0040C388 258DFFC0 */  addiu $t5, $t4, -0x40
/* 0040C38C 2DB80020 */  sltiu $t8, $t5, 0x20
/* 0040C390 01D95004 */  sllv  $t2, $t9, $t6
/* 0040C394 01D8C804 */  sllv  $t9, $t8, $t6
/* 0040C398 AFB90048 */  sw    $t9, 0x48($sp)
/* 0040C39C AFAA0044 */  sw    $t2, 0x44($sp)
/* 0040C3A0 258AFFA0 */  addiu $t2, $t4, -0x60
/* 0040C3A4 000BC9C3 */  sra   $t9, $t3, 7
/* 0040C3A8 00196100 */  sll   $t4, $t9, 4
/* 0040C3AC 2D4D0020 */  sltiu $t5, $t2, 0x20
/* 0040C3B0 006C1021 */  addu  $v0, $v1, $t4
/* 0040C3B4 8C4A0000 */  lw    $t2, ($v0)
/* 0040C3B8 01CDC004 */  sllv  $t8, $t5, $t6
/* 0040C3BC AFB8004C */  sw    $t8, 0x4c($sp)
/* 0040C3C0 014F6825 */  or    $t5, $t2, $t7
/* 0040C3C4 8FB80044 */  lw    $t8, 0x44($sp)
/* 0040C3C8 8C4E0004 */  lw    $t6, 4($v0)
/* 0040C3CC AFAF0040 */  sw    $t7, 0x40($sp)
/* 0040C3D0 AC4D0000 */  sw    $t5, ($v0)
/* 0040C3D4 8FAD004C */  lw    $t5, 0x4c($sp)
/* 0040C3D8 8C4F000C */  lw    $t7, 0xc($v0)
/* 0040C3DC 8C590008 */  lw    $t9, 8($v0)
/* 0040C3E0 8FAC0048 */  lw    $t4, 0x48($sp)
/* 0040C3E4 01D85825 */  or    $t3, $t6, $t8
/* 0040C3E8 8FB00014 */  lw    $s0, 0x14($sp)
/* 0040C3EC 01ED7025 */  or    $t6, $t7, $t5
/* 0040C3F0 032C5025 */  or    $t2, $t9, $t4
/* 0040C3F4 AC4A0008 */  sw    $t2, 8($v0)
/* 0040C3F8 AC4E000C */  sw    $t6, 0xc($v0)
/* 0040C3FC AC4B0004 */  sw    $t3, 4($v0)
/* 0040C400 03E00008 */  jr    $ra
/* 0040C404 27BD0050 */   addiu $sp, $sp, 0x50
    .type setbit, @function
    .size setbit, .-setbit
    .end setbit

glabel resetbit
    .ent resetbit
    # 0040F8D0 resetsubdelete
    # 00410204 codemotion
    # 004122D8 vardelete
    # 004123C4 varinsert
    # 004127C8 checkexpoccur
    # 00412CB4 checkexp_ant_av
    # 00413000 exprdelete
    # 00413428 checkstatoccur
    # 0041550C func_0041550C
    # 004175BC copypropagate
    # 004324F4 findinduct
    # 00445E44 exprimage
    # 004471AC codeimage
    # 004638C0 regdataflow
    # 00464BFC localcolor
    # 004669A8 addadjacents
    # 00467008 updatelivran
    # 004673B0 func_004673B0
    # 00467514 contiguous
    # 00467C34 needsplit
    # 00467F04 split
    # 00469280 globalcolor
    # 0046BD90 change_to_var_eq
    # 0046C654 del_orig_cond
    # 00478B8C func_00478B8C
    # 004793C4 func_004793C4
    # 0047966C func_0047966C
    # 00479778 func_00479778
    # 00479DC4 eliminduct
/* 0040C408 8C8E0000 */  lw    $t6, ($a0)
/* 0040C40C 30B8007F */  andi  $t8, $a1, 0x7f
/* 0040C410 27BDFFF0 */  addiu $sp, $sp, -0x10
/* 0040C414 000E79C0 */  sll   $t7, $t6, 7
/* 0040C418 00AF082A */  slt   $at, $a1, $t7
/* 0040C41C 10200027 */  beqz  $at, .L0040C4BC
/* 0040C420 03004027 */   not   $t0, $t8
/* 0040C424 270AFFE0 */  addiu $t2, $t8, -0x20
/* 0040C428 2D4B0020 */  sltiu $t3, $t2, 0x20
/* 0040C42C 8C820004 */  lw    $v0, 4($a0)
/* 0040C430 010B6004 */  sllv  $t4, $t3, $t0
/* 0040C434 270DFFC0 */  addiu $t5, $t8, -0x40
/* 0040C438 2DAE0020 */  sltiu $t6, $t5, 0x20
/* 0040C43C AFAC0004 */  sw    $t4, 4($sp)
/* 0040C440 000561C3 */  sra   $t4, $a1, 7
/* 0040C444 010E7804 */  sllv  $t7, $t6, $t0
/* 0040C448 2F190020 */  sltiu $t9, $t8, 0x20
/* 0040C44C 000C6900 */  sll   $t5, $t4, 4
/* 0040C450 01194804 */  sllv  $t1, $t9, $t0
/* 0040C454 AFAF0008 */  sw    $t7, 8($sp)
/* 0040C458 004D1821 */  addu  $v1, $v0, $t5
/* 0040C45C 8C6F0000 */  lw    $t7, ($v1)
/* 0040C460 2719FFA0 */  addiu $t9, $t8, -0x60
/* 0040C464 2F2A0020 */  sltiu $t2, $t9, 0x20
/* 0040C468 010A5804 */  sllv  $t3, $t2, $t0
/* 0040C46C 01207027 */  not   $t6, $t1
/* 0040C470 8FAA0004 */  lw    $t2, 4($sp)
/* 0040C474 01EEC024 */  and   $t8, $t7, $t6
/* 0040C478 AFAB000C */  sw    $t3, 0xc($sp)
/* 0040C47C AC780000 */  sw    $t8, ($v1)
/* 0040C480 8FB8000C */  lw    $t8, 0xc($sp)
/* 0040C484 8C790004 */  lw    $t9, 4($v1)
/* 0040C488 8FAD0008 */  lw    $t5, 8($sp)
/* 0040C48C 8C6E000C */  lw    $t6, 0xc($v1)
/* 0040C490 8C6C0008 */  lw    $t4, 8($v1)
/* 0040C494 01404027 */  not   $t0, $t2
/* 0040C498 AFA90000 */  sw    $t1, ($sp)
/* 0040C49C 03005027 */  not   $t2, $t8
/* 0040C4A0 03285824 */  and   $t3, $t9, $t0
/* 0040C4A4 01A04827 */  not   $t1, $t5
/* 0040C4A8 01CAC824 */  and   $t9, $t6, $t2
/* 0040C4AC 01897824 */  and   $t7, $t4, $t1
/* 0040C4B0 AC6F0008 */  sw    $t7, 8($v1)
/* 0040C4B4 AC79000C */  sw    $t9, 0xc($v1)
/* 0040C4B8 AC6B0004 */  sw    $t3, 4($v1)
.L0040C4BC:
/* 0040C4BC 03E00008 */  jr    $ra
/* 0040C4C0 27BD0010 */   addiu $sp, $sp, 0x10
    .type resetbit, @function
    .size resetbit, .-resetbit
    .end resetbit

glabel checkbvlist
    .ent checkbvlist
    # 00410204 codemotion
    # 004175BC copypropagate
    # 004324F4 findinduct
    # 0045D208 patchvectors
    # 00461AAC makelivranges
    # 004638C0 regdataflow
    # 00465E50 spilltemps
    # 00469280 globalcolor
    # 00475680 getexpsources
    # 00479DC4 eliminduct
/* 0040C4C4 3C1C0FC1 */  .cpload $t9
/* 0040C4C8 279CDDCC */  
/* 0040C4CC 0399E021 */  
/* 0040C4D0 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0040C4D4 8F868A4C */  lw     $a2, %got(bitvectorsize)($gp)
/* 0040C4D8 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0040C4DC AFBC0018 */  sw    $gp, 0x18($sp)
/* 0040C4E0 AFB00014 */  sw    $s0, 0x14($sp)
/* 0040C4E4 8C850000 */  lw    $a1, ($a0)
/* 0040C4E8 8CC60000 */  lw    $a2, ($a2)
/* 0040C4EC 00808025 */  move  $s0, $a0
/* 0040C4F0 00A6082A */  slt   $at, $a1, $a2
/* 0040C4F4 50200036 */  beql  $at, $zero, .L0040C5D0
/* 0040C4F8 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0040C4FC 8F9986E8 */  lw    $t9, %call16(alloc_realloc)($gp)
/* 0040C500 8C840004 */  lw    $a0, 4($a0)
/* 0040C504 8F878954 */  lw     $a3, %got(perm_heap)($gp)
/* 0040C508 0320F809 */  jalr  $t9
/* 0040C50C 00000000 */   nop   
/* 0040C510 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0040C514 AE020004 */  sw    $v0, 4($s0)
/* 0040C518 8E070000 */  lw    $a3, ($s0)
/* 0040C51C 8F898A4C */  lw     $t1, %got(bitvectorsize)($gp)
/* 0040C520 8D290000 */  lw    $t1, ($t1)
/* 0040C524 2526FFFF */  addiu $a2, $t1, -1
/* 0040C528 00C7082A */  slt   $at, $a2, $a3
/* 0040C52C 14200026 */  bnez  $at, .L0040C5C8
/* 0040C530 24C60001 */   addiu $a2, $a2, 1
/* 0040C534 00C74023 */  subu  $t0, $a2, $a3
/* 0040C538 31080003 */  andi  $t0, $t0, 3
/* 0040C53C 1100000C */  beqz  $t0, .L0040C570
/* 0040C540 00E02025 */   move  $a0, $a3
/* 0040C544 00077100 */  sll   $t6, $a3, 4
/* 0040C548 004E1821 */  addu  $v1, $v0, $t6
/* 0040C54C 01072821 */  addu  $a1, $t0, $a3
.L0040C550:
/* 0040C550 24840001 */  addiu $a0, $a0, 1
/* 0040C554 AC600000 */  sw    $zero, ($v1)
/* 0040C558 AC600004 */  sw    $zero, 4($v1)
/* 0040C55C AC600008 */  sw    $zero, 8($v1)
/* 0040C560 AC60000C */  sw    $zero, 0xc($v1)
/* 0040C564 14A4FFFA */  bne   $a1, $a0, .L0040C550
/* 0040C568 24630010 */   addiu $v1, $v1, 0x10
/* 0040C56C 10860016 */  beq   $a0, $a2, .L0040C5C8
.L0040C570:
/* 0040C570 00067900 */   sll   $t7, $a2, 4
/* 0040C574 0004C100 */  sll   $t8, $a0, 4
/* 0040C578 00581821 */  addu  $v1, $v0, $t8
/* 0040C57C 01E22821 */  addu  $a1, $t7, $v0
.L0040C580:
/* 0040C580 24630040 */  addiu $v1, $v1, 0x40
/* 0040C584 AC60FFC0 */  sw    $zero, -0x40($v1)
/* 0040C588 AC60FFC4 */  sw    $zero, -0x3c($v1)
/* 0040C58C AC60FFC8 */  sw    $zero, -0x38($v1)
/* 0040C590 AC60FFCC */  sw    $zero, -0x34($v1)
/* 0040C594 AC60FFD0 */  sw    $zero, -0x30($v1)
/* 0040C598 AC60FFD4 */  sw    $zero, -0x2c($v1)
/* 0040C59C AC60FFD8 */  sw    $zero, -0x28($v1)
/* 0040C5A0 AC60FFDC */  sw    $zero, -0x24($v1)
/* 0040C5A4 AC60FFE0 */  sw    $zero, -0x20($v1)
/* 0040C5A8 AC60FFE4 */  sw    $zero, -0x1c($v1)
/* 0040C5AC AC60FFE8 */  sw    $zero, -0x18($v1)
/* 0040C5B0 AC60FFEC */  sw    $zero, -0x14($v1)
/* 0040C5B4 AC60FFF0 */  sw    $zero, -0x10($v1)
/* 0040C5B8 AC60FFF4 */  sw    $zero, -0xc($v1)
/* 0040C5BC AC60FFF8 */  sw    $zero, -8($v1)
/* 0040C5C0 1465FFEF */  bne   $v1, $a1, .L0040C580
/* 0040C5C4 AC60FFFC */   sw    $zero, -4($v1)
.L0040C5C8:
/* 0040C5C8 AE090000 */  sw    $t1, ($s0)
/* 0040C5CC 8FBF001C */  lw    $ra, 0x1c($sp)
.L0040C5D0:
/* 0040C5D0 8FB00014 */  lw    $s0, 0x14($sp)
/* 0040C5D4 27BD0020 */  addiu $sp, $sp, 0x20
/* 0040C5D8 03E00008 */  jr    $ra
/* 0040C5DC 00000000 */   nop   
    .type checkbvlist, @function
    .size checkbvlist, .-checkbvlist
    .end checkbvlist

glabel bvectcard
    .ent bvectcard
    # 004175BC copypropagate
    # 00467514 contiguous
    # 004676CC compute_save
    # 00467F04 split
/* 0040C5E0 8C850000 */  lw    $a1, ($a0)
/* 0040C5E4 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0040C5E8 8C820004 */  lw    $v0, 4($a0)
/* 0040C5EC 24A5FFFF */  addiu $a1, $a1, -1
/* 0040C5F0 04A0003F */  bltz  $a1, .L0040C6F0
/* 0040C5F4 00001825 */   move  $v1, $zero
/* 0040C5F8 24A50001 */  addiu $a1, $a1, 1
/* 0040C5FC 00054100 */  sll   $t0, $a1, 4
/* 0040C600 00003025 */  move  $a2, $zero
/* 0040C604 00403825 */  move  $a3, $v0
/* 0040C608 24040080 */  li    $a0, 128
.L0040C60C:
/* 0040C60C 8CEE0000 */  lw    $t6, ($a3)
/* 0040C610 8CEF0004 */  lw    $t7, 4($a3)
/* 0040C614 8CF80008 */  lw    $t8, 8($a3)
/* 0040C618 8CF9000C */  lw    $t9, 0xc($a3)
/* 0040C61C 00001025 */  move  $v0, $zero
/* 0040C620 AFAE0004 */  sw    $t6, 4($sp)
/* 0040C624 AFAF0008 */  sw    $t7, 8($sp)
/* 0040C628 AFB8000C */  sw    $t8, 0xc($sp)
/* 0040C62C AFB90010 */  sw    $t9, 0x10($sp)
.L0040C630:
/* 0040C630 2C490080 */  sltiu $t1, $v0, 0x80
/* 0040C634 11200008 */  beqz  $t1, .L0040C658
/* 0040C638 24590001 */   addiu $t9, $v0, 1
/* 0040C63C 00025143 */  sra   $t2, $v0, 5
/* 0040C640 000A5880 */  sll   $t3, $t2, 2
/* 0040C644 27AC0004 */  addiu $t4, $sp, 4
/* 0040C648 016C6821 */  addu  $t5, $t3, $t4
/* 0040C64C 8DAE0000 */  lw    $t6, ($t5)
/* 0040C650 004E7804 */  sllv  $t7, $t6, $v0
/* 0040C654 29E90000 */  slti  $t1, $t7, 0
.L0040C658:
/* 0040C658 2F2A0080 */  sltiu $t2, $t9, 0x80
/* 0040C65C 11400008 */  beqz  $t2, .L0040C680
/* 0040C660 00691821 */   addu  $v1, $v1, $t1
/* 0040C664 00195943 */  sra   $t3, $t9, 5
/* 0040C668 000B6080 */  sll   $t4, $t3, 2
/* 0040C66C 27AD0004 */  addiu $t5, $sp, 4
/* 0040C670 018D7021 */  addu  $t6, $t4, $t5
/* 0040C674 8DCF0000 */  lw    $t7, ($t6)
/* 0040C678 032FC004 */  sllv  $t8, $t7, $t9
/* 0040C67C 2B0A0000 */  slti  $t2, $t8, 0
.L0040C680:
/* 0040C680 244B0002 */  addiu $t3, $v0, 2
/* 0040C684 2D6C0080 */  sltiu $t4, $t3, 0x80
/* 0040C688 11800008 */  beqz  $t4, .L0040C6AC
/* 0040C68C 006A1821 */   addu  $v1, $v1, $t2
/* 0040C690 000B6943 */  sra   $t5, $t3, 5
/* 0040C694 000D7080 */  sll   $t6, $t5, 2
/* 0040C698 27AF0004 */  addiu $t7, $sp, 4
/* 0040C69C 01CFC821 */  addu  $t9, $t6, $t7
/* 0040C6A0 8F380000 */  lw    $t8, ($t9)
/* 0040C6A4 01784804 */  sllv  $t1, $t8, $t3
/* 0040C6A8 292C0000 */  slti  $t4, $t1, 0
.L0040C6AC:
/* 0040C6AC 244D0003 */  addiu $t5, $v0, 3
/* 0040C6B0 2DAE0080 */  sltiu $t6, $t5, 0x80
/* 0040C6B4 11C00008 */  beqz  $t6, .L0040C6D8
/* 0040C6B8 006C1821 */   addu  $v1, $v1, $t4
/* 0040C6BC 000D7943 */  sra   $t7, $t5, 5
/* 0040C6C0 000FC880 */  sll   $t9, $t7, 2
/* 0040C6C4 27B80004 */  addiu $t8, $sp, 4
/* 0040C6C8 03385821 */  addu  $t3, $t9, $t8
/* 0040C6CC 8D690000 */  lw    $t1, ($t3)
/* 0040C6D0 01A95004 */  sllv  $t2, $t1, $t5
/* 0040C6D4 294E0000 */  slti  $t6, $t2, 0
.L0040C6D8:
/* 0040C6D8 24420004 */  addiu $v0, $v0, 4
/* 0040C6DC 1444FFD4 */  bne   $v0, $a0, .L0040C630
/* 0040C6E0 006E1821 */   addu  $v1, $v1, $t6
/* 0040C6E4 24C60010 */  addiu $a2, $a2, 0x10
/* 0040C6E8 14C8FFC8 */  bne   $a2, $t0, .L0040C60C
/* 0040C6EC 24E70010 */   addiu $a3, $a3, 0x10
.L0040C6F0:
/* 0040C6F0 00601025 */  move  $v0, $v1
/* 0040C6F4 03E00008 */  jr    $ra
/* 0040C6F8 27BD0028 */   addiu $sp, $sp, 0x28
    .type bvectcard, @function
    .size bvectcard, .-bvectcard
    .end bvectcard

glabel bvectcopy
    .ent bvectcopy
    # 00410204 codemotion
    # 004175BC copypropagate
    # 004324F4 findinduct
    # 00455D38 analoop
    # 00461AAC makelivranges
    # 004638C0 regdataflow
    # 00465D30 intfering
    # 00467514 contiguous
    # 00469280 globalcolor
    # 00475680 getexpsources
    # 00479DC4 eliminduct
/* 0040C6FC 8CA60000 */  lw    $a2, ($a1)
/* 0040C700 8C820004 */  lw    $v0, 4($a0)
/* 0040C704 8CA30004 */  lw    $v1, 4($a1)
/* 0040C708 24C6FFFF */  addiu $a2, $a2, -1
/* 0040C70C 04C0003C */  bltz  $a2, .L0040C800
/* 0040C710 24C60001 */   addiu $a2, $a2, 1
/* 0040C714 30CA0003 */  andi  $t2, $a2, 3
/* 0040C718 11400012 */  beqz  $t2, .L0040C764
/* 0040C71C 00002025 */   move  $a0, $zero
/* 0040C720 00002900 */  sll   $a1, $zero, 4
/* 0040C724 00453821 */  addu  $a3, $v0, $a1
/* 0040C728 00654021 */  addu  $t0, $v1, $a1
/* 0040C72C 01404825 */  move  $t1, $t2
.L0040C730:
/* 0040C730 8D0E0000 */  lw    $t6, ($t0)
/* 0040C734 24840001 */  addiu $a0, $a0, 1
/* 0040C738 24E70010 */  addiu $a3, $a3, 0x10
/* 0040C73C ACEEFFF0 */  sw    $t6, -0x10($a3)
/* 0040C740 8D0F0004 */  lw    $t7, 4($t0)
/* 0040C744 25080010 */  addiu $t0, $t0, 0x10
/* 0040C748 ACEFFFF4 */  sw    $t7, -0xc($a3)
/* 0040C74C 8D18FFF8 */  lw    $t8, -8($t0)
/* 0040C750 ACF8FFF8 */  sw    $t8, -8($a3)
/* 0040C754 8D19FFFC */  lw    $t9, -4($t0)
/* 0040C758 1524FFF5 */  bne   $t1, $a0, .L0040C730
/* 0040C75C ACF9FFFC */   sw    $t9, -4($a3)
/* 0040C760 10860027 */  beq   $a0, $a2, .L0040C800
.L0040C764:
/* 0040C764 00042900 */   sll   $a1, $a0, 4
/* 0040C768 00453821 */  addu  $a3, $v0, $a1
/* 0040C76C 00654021 */  addu  $t0, $v1, $a1
.L0040C770:
/* 0040C770 8D0B0000 */  lw    $t3, ($t0)
/* 0040C774 24840004 */  addiu $a0, $a0, 4
/* 0040C778 24E70040 */  addiu $a3, $a3, 0x40
/* 0040C77C ACEBFFC0 */  sw    $t3, -0x40($a3)
/* 0040C780 8D0C0004 */  lw    $t4, 4($t0)
/* 0040C784 25080040 */  addiu $t0, $t0, 0x40
/* 0040C788 ACECFFC4 */  sw    $t4, -0x3c($a3)
/* 0040C78C 8D0DFFC8 */  lw    $t5, -0x38($t0)
/* 0040C790 ACEDFFC8 */  sw    $t5, -0x38($a3)
/* 0040C794 8D0EFFCC */  lw    $t6, -0x34($t0)
/* 0040C798 ACEEFFCC */  sw    $t6, -0x34($a3)
/* 0040C79C 8D0FFFD0 */  lw    $t7, -0x30($t0)
/* 0040C7A0 ACEFFFD0 */  sw    $t7, -0x30($a3)
/* 0040C7A4 8D18FFD4 */  lw    $t8, -0x2c($t0)
/* 0040C7A8 ACF8FFD4 */  sw    $t8, -0x2c($a3)
/* 0040C7AC 8D19FFD8 */  lw    $t9, -0x28($t0)
/* 0040C7B0 ACF9FFD8 */  sw    $t9, -0x28($a3)
/* 0040C7B4 8D0BFFDC */  lw    $t3, -0x24($t0)
/* 0040C7B8 ACEBFFDC */  sw    $t3, -0x24($a3)
/* 0040C7BC 8D0CFFE0 */  lw    $t4, -0x20($t0)
/* 0040C7C0 ACECFFE0 */  sw    $t4, -0x20($a3)
/* 0040C7C4 8D0DFFE4 */  lw    $t5, -0x1c($t0)
/* 0040C7C8 ACEDFFE4 */  sw    $t5, -0x1c($a3)
/* 0040C7CC 8D0EFFE8 */  lw    $t6, -0x18($t0)
/* 0040C7D0 ACEEFFE8 */  sw    $t6, -0x18($a3)
/* 0040C7D4 8D0FFFEC */  lw    $t7, -0x14($t0)
/* 0040C7D8 ACEFFFEC */  sw    $t7, -0x14($a3)
/* 0040C7DC 8D18FFF0 */  lw    $t8, -0x10($t0)
/* 0040C7E0 ACF8FFF0 */  sw    $t8, -0x10($a3)
/* 0040C7E4 8D19FFF4 */  lw    $t9, -0xc($t0)
/* 0040C7E8 ACF9FFF4 */  sw    $t9, -0xc($a3)
/* 0040C7EC 8D0BFFF8 */  lw    $t3, -8($t0)
/* 0040C7F0 ACEBFFF8 */  sw    $t3, -8($a3)
/* 0040C7F4 8D0CFFFC */  lw    $t4, -4($t0)
/* 0040C7F8 1486FFDD */  bne   $a0, $a2, .L0040C770
/* 0040C7FC ACECFFFC */   sw    $t4, -4($a3)
.L0040C800:
/* 0040C800 03E00008 */  jr    $ra
/* 0040C804 00000000 */   nop   
    .type bvectcopy, @function
    .size bvectcopy, .-bvectcopy
    .end bvectcopy

glabel bvcopynot
    .ent bvcopynot
    # 00410204 codemotion
    # 004324F4 findinduct
/* 0040C808 27BDFFE8 */  addiu $sp, $sp, -0x18
/* 0040C80C 8C820004 */  lw    $v0, 4($a0)
/* 0040C810 8CA30004 */  lw    $v1, 4($a1)
/* 0040C814 240EFFFF */  li    $t6, -1
/* 0040C818 240FFFFF */  li    $t7, -1
/* 0040C81C 2418FFFF */  li    $t8, -1
/* 0040C820 2419FFFF */  li    $t9, -1
/* 0040C824 AFB90010 */  sw    $t9, 0x10($sp)
/* 0040C828 AFB8000C */  sw    $t8, 0xc($sp)
/* 0040C82C AFAF0008 */  sw    $t7, 8($sp)
/* 0040C830 AFAE0004 */  sw    $t6, 4($sp)
/* 0040C834 8C860000 */  lw    $a2, ($a0)
/* 0040C838 24C6FFFF */  addiu $a2, $a2, -1
/* 0040C83C 04C00078 */  bltz  $a2, .L0040CA20
/* 0040C840 24C60001 */   addiu $a2, $a2, 1
/* 0040C844 30CA0003 */  andi  $t2, $a2, 3
/* 0040C848 1140001E */  beqz  $t2, .L0040C8C4
/* 0040C84C 00002025 */   move  $a0, $zero
/* 0040C850 00002900 */  sll   $a1, $zero, 4
/* 0040C854 00453821 */  addu  $a3, $v0, $a1
/* 0040C858 00654021 */  addu  $t0, $v1, $a1
/* 0040C85C 01404825 */  move  $t1, $t2
.L0040C860:
/* 0040C860 8D0C0000 */  lw    $t4, ($t0)
/* 0040C864 8FAB0004 */  lw    $t3, 4($sp)
/* 0040C868 8FAF0008 */  lw    $t7, 8($sp)
/* 0040C86C 01806827 */  not   $t5, $t4
/* 0040C870 016D7024 */  and   $t6, $t3, $t5
/* 0040C874 ACEE0000 */  sw    $t6, ($a3)
/* 0040C878 8D180004 */  lw    $t8, 4($t0)
/* 0040C87C 8FAB000C */  lw    $t3, 0xc($sp)
/* 0040C880 24840001 */  addiu $a0, $a0, 1
/* 0040C884 0300C827 */  not   $t9, $t8
/* 0040C888 01F96024 */  and   $t4, $t7, $t9
/* 0040C88C ACEC0004 */  sw    $t4, 4($a3)
/* 0040C890 8D0D0008 */  lw    $t5, 8($t0)
/* 0040C894 8FAF0010 */  lw    $t7, 0x10($sp)
/* 0040C898 24E70010 */  addiu $a3, $a3, 0x10
/* 0040C89C 01A07027 */  not   $t6, $t5
/* 0040C8A0 016EC024 */  and   $t8, $t3, $t6
/* 0040C8A4 ACF8FFF8 */  sw    $t8, -8($a3)
/* 0040C8A8 8D19000C */  lw    $t9, 0xc($t0)
/* 0040C8AC 25080010 */  addiu $t0, $t0, 0x10
/* 0040C8B0 03206027 */  not   $t4, $t9
/* 0040C8B4 01EC6824 */  and   $t5, $t7, $t4
/* 0040C8B8 1524FFE9 */  bne   $t1, $a0, .L0040C860
/* 0040C8BC ACEDFFFC */   sw    $t5, -4($a3)
/* 0040C8C0 10860057 */  beq   $a0, $a2, .L0040CA20
.L0040C8C4:
/* 0040C8C4 00042900 */   sll   $a1, $a0, 4
/* 0040C8C8 00453821 */  addu  $a3, $v0, $a1
/* 0040C8CC 00654021 */  addu  $t0, $v1, $a1
.L0040C8D0:
/* 0040C8D0 8D0E0000 */  lw    $t6, ($t0)
/* 0040C8D4 8FAB0004 */  lw    $t3, 4($sp)
/* 0040C8D8 8FAF0008 */  lw    $t7, 8($sp)
/* 0040C8DC 01C0C027 */  not   $t8, $t6
/* 0040C8E0 0178C824 */  and   $t9, $t3, $t8
/* 0040C8E4 ACF90000 */  sw    $t9, ($a3)
/* 0040C8E8 8D0C0004 */  lw    $t4, 4($t0)
/* 0040C8EC 8FAB000C */  lw    $t3, 0xc($sp)
/* 0040C8F0 24840004 */  addiu $a0, $a0, 4
/* 0040C8F4 01806827 */  not   $t5, $t4
/* 0040C8F8 01ED7024 */  and   $t6, $t7, $t5
/* 0040C8FC ACEE0004 */  sw    $t6, 4($a3)
/* 0040C900 8D180008 */  lw    $t8, 8($t0)
/* 0040C904 8FAF0010 */  lw    $t7, 0x10($sp)
/* 0040C908 24E70040 */  addiu $a3, $a3, 0x40
/* 0040C90C 0300C827 */  not   $t9, $t8
/* 0040C910 01796024 */  and   $t4, $t3, $t9
/* 0040C914 ACECFFC8 */  sw    $t4, -0x38($a3)
/* 0040C918 8D0D000C */  lw    $t5, 0xc($t0)
/* 0040C91C 8FAB0004 */  lw    $t3, 4($sp)
/* 0040C920 25080040 */  addiu $t0, $t0, 0x40
/* 0040C924 01A07027 */  not   $t6, $t5
/* 0040C928 01EEC024 */  and   $t8, $t7, $t6
/* 0040C92C ACF8FFCC */  sw    $t8, -0x34($a3)
/* 0040C930 8D19FFD0 */  lw    $t9, -0x30($t0)
/* 0040C934 8FAF0008 */  lw    $t7, 8($sp)
/* 0040C938 03206027 */  not   $t4, $t9
/* 0040C93C 016C6824 */  and   $t5, $t3, $t4
/* 0040C940 ACEDFFD0 */  sw    $t5, -0x30($a3)
/* 0040C944 8D0EFFD4 */  lw    $t6, -0x2c($t0)
/* 0040C948 8FAB000C */  lw    $t3, 0xc($sp)
/* 0040C94C 01C0C027 */  not   $t8, $t6
/* 0040C950 01F8C824 */  and   $t9, $t7, $t8
/* 0040C954 ACF9FFD4 */  sw    $t9, -0x2c($a3)
/* 0040C958 8D0CFFD8 */  lw    $t4, -0x28($t0)
/* 0040C95C 8FAF0010 */  lw    $t7, 0x10($sp)
/* 0040C960 01806827 */  not   $t5, $t4
/* 0040C964 016D7024 */  and   $t6, $t3, $t5
/* 0040C968 ACEEFFD8 */  sw    $t6, -0x28($a3)
/* 0040C96C 8D18FFDC */  lw    $t8, -0x24($t0)
/* 0040C970 8FAB0004 */  lw    $t3, 4($sp)
/* 0040C974 0300C827 */  not   $t9, $t8
/* 0040C978 01F96024 */  and   $t4, $t7, $t9
/* 0040C97C ACECFFDC */  sw    $t4, -0x24($a3)
/* 0040C980 8D0DFFE0 */  lw    $t5, -0x20($t0)
/* 0040C984 8FAF0008 */  lw    $t7, 8($sp)
/* 0040C988 01A07027 */  not   $t6, $t5
/* 0040C98C 016EC024 */  and   $t8, $t3, $t6
/* 0040C990 ACF8FFE0 */  sw    $t8, -0x20($a3)
/* 0040C994 8D19FFE4 */  lw    $t9, -0x1c($t0)
/* 0040C998 8FAB000C */  lw    $t3, 0xc($sp)
/* 0040C99C 03206027 */  not   $t4, $t9
/* 0040C9A0 01EC6824 */  and   $t5, $t7, $t4
/* 0040C9A4 ACEDFFE4 */  sw    $t5, -0x1c($a3)
/* 0040C9A8 8D0EFFE8 */  lw    $t6, -0x18($t0)
/* 0040C9AC 8FAF0010 */  lw    $t7, 0x10($sp)
/* 0040C9B0 01C0C027 */  not   $t8, $t6
/* 0040C9B4 0178C824 */  and   $t9, $t3, $t8
/* 0040C9B8 ACF9FFE8 */  sw    $t9, -0x18($a3)
/* 0040C9BC 8D0CFFEC */  lw    $t4, -0x14($t0)
/* 0040C9C0 8FAB0004 */  lw    $t3, 4($sp)
/* 0040C9C4 01806827 */  not   $t5, $t4
/* 0040C9C8 01ED7024 */  and   $t6, $t7, $t5
/* 0040C9CC ACEEFFEC */  sw    $t6, -0x14($a3)
/* 0040C9D0 8D18FFF0 */  lw    $t8, -0x10($t0)
/* 0040C9D4 8FAF0008 */  lw    $t7, 8($sp)
/* 0040C9D8 0300C827 */  not   $t9, $t8
/* 0040C9DC 01796024 */  and   $t4, $t3, $t9
/* 0040C9E0 ACECFFF0 */  sw    $t4, -0x10($a3)
/* 0040C9E4 8D0DFFF4 */  lw    $t5, -0xc($t0)
/* 0040C9E8 8FAB000C */  lw    $t3, 0xc($sp)
/* 0040C9EC 01A07027 */  not   $t6, $t5
/* 0040C9F0 01EEC024 */  and   $t8, $t7, $t6
/* 0040C9F4 ACF8FFF4 */  sw    $t8, -0xc($a3)
/* 0040C9F8 8D19FFF8 */  lw    $t9, -8($t0)
/* 0040C9FC 8FAF0010 */  lw    $t7, 0x10($sp)
/* 0040CA00 03206027 */  not   $t4, $t9
/* 0040CA04 016C6824 */  and   $t5, $t3, $t4
/* 0040CA08 ACEDFFF8 */  sw    $t5, -8($a3)
/* 0040CA0C 8D0EFFFC */  lw    $t6, -4($t0)
/* 0040CA10 01C0C027 */  not   $t8, $t6
/* 0040CA14 01F8C824 */  and   $t9, $t7, $t8
/* 0040CA18 1486FFAD */  bne   $a0, $a2, .L0040C8D0
/* 0040CA1C ACF9FFFC */   sw    $t9, -4($a3)
.L0040CA20:
/* 0040CA20 03E00008 */  jr    $ra
/* 0040CA24 27BD0018 */   addiu $sp, $sp, 0x18
    .type bvcopynot, @function
    .size bvcopynot, .-bvcopynot
    .end bvcopynot

glabel bvecteq
    .ent bvecteq
    # 00410204 codemotion
    # 004175BC copypropagate
    # 004324F4 findinduct
    # 00455D38 analoop
    # 004638C0 regdataflow
    # 00475680 getexpsources
    # 00479DC4 eliminduct
/* 0040CA28 8C880000 */  lw    $t0, ($a0)
/* 0040CA2C 24030001 */  li    $v1, 1
/* 0040CA30 00001025 */  move  $v0, $zero
/* 0040CA34 8C860004 */  lw    $a2, 4($a0)
/* 0040CA38 1900001C */  blez  $t0, .L0040CAAC
/* 0040CA3C 8CA70004 */   lw    $a3, 4($a1)
/* 0040CA40 00001900 */  sll   $v1, $zero, 4
/* 0040CA44 00E32021 */  addu  $a0, $a3, $v1
/* 0040CA48 00C32821 */  addu  $a1, $a2, $v1
/* 0040CA4C 8C990008 */  lw    $t9, 8($a0)
.L0040CA50:
/* 0040CA50 8CA90008 */  lw    $t1, 8($a1)
/* 0040CA54 8C8E000C */  lw    $t6, 0xc($a0)
/* 0040CA58 8CAF000C */  lw    $t7, 0xc($a1)
/* 0040CA5C 03295026 */  xor   $t2, $t9, $t1
/* 0040CA60 8C8C0004 */  lw    $t4, 4($a0)
/* 0040CA64 8CAD0004 */  lw    $t5, 4($a1)
/* 0040CA68 01CFC026 */  xor   $t8, $t6, $t7
/* 0040CA6C 8CA90000 */  lw    $t1, ($a1)
/* 0040CA70 8C990000 */  lw    $t9, ($a0)
/* 0040CA74 030A5825 */  or    $t3, $t8, $t2
/* 0040CA78 018D7026 */  xor   $t6, $t4, $t5
/* 0040CA7C 016E7825 */  or    $t7, $t3, $t6
/* 0040CA80 0329C026 */  xor   $t8, $t9, $t1
/* 0040CA84 01F81825 */  or    $v1, $t7, $t8
/* 0040CA88 24420001 */  addiu $v0, $v0, 1
/* 0040CA8C 2C630001 */  sltiu $v1, $v1, 1
/* 0040CA90 0048082A */  slt   $at, $v0, $t0
/* 0040CA94 306300FF */  andi  $v1, $v1, 0xff
/* 0040CA98 24840010 */  addiu $a0, $a0, 0x10
/* 0040CA9C 10200003 */  beqz  $at, .L0040CAAC
/* 0040CAA0 24A50010 */   addiu $a1, $a1, 0x10
/* 0040CAA4 5460FFEA */  bnezl $v1, .L0040CA50
/* 0040CAA8 8C990008 */   lw    $t9, 8($a0)
.L0040CAAC:
/* 0040CAAC 03E00008 */  jr    $ra
/* 0040CAB0 00601025 */   move  $v0, $v1
    .type bvecteq, @function
    .size bvecteq, .-bvecteq
    .end bvecteq

glabel bvectempty
    .ent bvectempty
    # 0041C914 printregs
    # 004324F4 findinduct
    # 00464BFC localcolor
    # 00465D30 intfering
    # 00467008 updatelivran
    # 00467514 contiguous
    # 00467F04 split
    # 00468A14 cupcosts
    # 00469280 globalcolor
    # 00479DC4 eliminduct
/* 0040CAB4 8C860000 */  lw    $a2, ($a0)
/* 0040CAB8 24030001 */  li    $v1, 1
/* 0040CABC 00001025 */  move  $v0, $zero
/* 0040CAC0 18C00012 */  blez  $a2, .L0040CB0C
/* 0040CAC4 8C850004 */   lw    $a1, 4($a0)
/* 0040CAC8 00007100 */  sll   $t6, $zero, 4
/* 0040CACC 00AE2021 */  addu  $a0, $a1, $t6
/* 0040CAD0 8C8F000C */  lw    $t7, 0xc($a0)
.L0040CAD4:
/* 0040CAD4 8C980008 */  lw    $t8, 8($a0)
/* 0040CAD8 8C880004 */  lw    $t0, 4($a0)
/* 0040CADC 8C8A0000 */  lw    $t2, ($a0)
/* 0040CAE0 01F8C825 */  or    $t9, $t7, $t8
/* 0040CAE4 03284825 */  or    $t1, $t9, $t0
/* 0040CAE8 24420001 */  addiu $v0, $v0, 1
/* 0040CAEC 012A1825 */  or    $v1, $t1, $t2
/* 0040CAF0 2C630001 */  sltiu $v1, $v1, 1
/* 0040CAF4 0046082A */  slt   $at, $v0, $a2
/* 0040CAF8 306300FF */  andi  $v1, $v1, 0xff
/* 0040CAFC 10200003 */  beqz  $at, .L0040CB0C
/* 0040CB00 24840010 */   addiu $a0, $a0, 0x10
/* 0040CB04 5460FFF3 */  bnezl $v1, .L0040CAD4
/* 0040CB08 8C8F000C */   lw    $t7, 0xc($a0)
.L0040CB0C:
/* 0040CB0C 03E00008 */  jr    $ra
/* 0040CB10 00601025 */   move  $v0, $v1
    .type bvectempty, @function
    .size bvectempty, .-bvectempty
    .end bvectempty

glabel bvectunion
    .ent bvectunion
    # 00410204 codemotion
    # 004175BC copypropagate
    # 004324F4 findinduct
    # 00461AAC makelivranges
    # 004638C0 regdataflow
    # 00464BFC localcolor
    # 00475680 getexpsources
    # 00479DC4 eliminduct
/* 0040CB14 8CA60000 */  lw    $a2, ($a1)
/* 0040CB18 8C820004 */  lw    $v0, 4($a0)
/* 0040CB1C 8CA30004 */  lw    $v1, 4($a1)
/* 0040CB20 24C6FFFF */  addiu $a2, $a2, -1
/* 0040CB24 04C00064 */  bltz  $a2, .L0040CCB8
/* 0040CB28 24C60001 */   addiu $a2, $a2, 1
/* 0040CB2C 30CA0003 */  andi  $t2, $a2, 3
/* 0040CB30 1140001A */  beqz  $t2, .L0040CB9C
/* 0040CB34 00002025 */   move  $a0, $zero
/* 0040CB38 00002900 */  sll   $a1, $zero, 4
/* 0040CB3C 00453821 */  addu  $a3, $v0, $a1
/* 0040CB40 00654021 */  addu  $t0, $v1, $a1
/* 0040CB44 01404825 */  move  $t1, $t2
.L0040CB48:
/* 0040CB48 8CEE0000 */  lw    $t6, ($a3)
/* 0040CB4C 8D0F0000 */  lw    $t7, ($t0)
/* 0040CB50 8CF90004 */  lw    $t9, 4($a3)
/* 0040CB54 8CED0008 */  lw    $t5, 8($a3)
/* 0040CB58 01CFC025 */  or    $t8, $t6, $t7
/* 0040CB5C ACF80000 */  sw    $t8, ($a3)
/* 0040CB60 8D0B0004 */  lw    $t3, 4($t0)
/* 0040CB64 8CF8000C */  lw    $t8, 0xc($a3)
/* 0040CB68 24840001 */  addiu $a0, $a0, 1
/* 0040CB6C 032B6025 */  or    $t4, $t9, $t3
/* 0040CB70 ACEC0004 */  sw    $t4, 4($a3)
/* 0040CB74 8D0E0008 */  lw    $t6, 8($t0)
/* 0040CB78 24E70010 */  addiu $a3, $a3, 0x10
/* 0040CB7C 25080010 */  addiu $t0, $t0, 0x10
/* 0040CB80 01AE7825 */  or    $t7, $t5, $t6
/* 0040CB84 ACEFFFF8 */  sw    $t7, -8($a3)
/* 0040CB88 8D19FFFC */  lw    $t9, -4($t0)
/* 0040CB8C 03195825 */  or    $t3, $t8, $t9
/* 0040CB90 1524FFED */  bne   $t1, $a0, .L0040CB48
/* 0040CB94 ACEBFFFC */   sw    $t3, -4($a3)
/* 0040CB98 10860047 */  beq   $a0, $a2, .L0040CCB8
.L0040CB9C:
/* 0040CB9C 00042900 */   sll   $a1, $a0, 4
/* 0040CBA0 00453821 */  addu  $a3, $v0, $a1
/* 0040CBA4 00654021 */  addu  $t0, $v1, $a1
.L0040CBA8:
/* 0040CBA8 8CEC0000 */  lw    $t4, ($a3)
/* 0040CBAC 8D0D0000 */  lw    $t5, ($t0)
/* 0040CBB0 8CEF0004 */  lw    $t7, 4($a3)
/* 0040CBB4 8CEB0008 */  lw    $t3, 8($a3)
/* 0040CBB8 018D7025 */  or    $t6, $t4, $t5
/* 0040CBBC ACEE0000 */  sw    $t6, ($a3)
/* 0040CBC0 8D180004 */  lw    $t8, 4($t0)
/* 0040CBC4 8CEE000C */  lw    $t6, 0xc($a3)
/* 0040CBC8 24840004 */  addiu $a0, $a0, 4
/* 0040CBCC 01F8C825 */  or    $t9, $t7, $t8
/* 0040CBD0 ACF90004 */  sw    $t9, 4($a3)
/* 0040CBD4 8D0C0008 */  lw    $t4, 8($t0)
/* 0040CBD8 8CF90010 */  lw    $t9, 0x10($a3)
/* 0040CBDC 24E70040 */  addiu $a3, $a3, 0x40
/* 0040CBE0 016C6825 */  or    $t5, $t3, $t4
/* 0040CBE4 ACEDFFC8 */  sw    $t5, -0x38($a3)
/* 0040CBE8 8D0F000C */  lw    $t7, 0xc($t0)
/* 0040CBEC 8CEDFFD4 */  lw    $t5, -0x2c($a3)
/* 0040CBF0 25080040 */  addiu $t0, $t0, 0x40
/* 0040CBF4 01CFC025 */  or    $t8, $t6, $t7
/* 0040CBF8 ACF8FFCC */  sw    $t8, -0x34($a3)
/* 0040CBFC 8D0BFFD0 */  lw    $t3, -0x30($t0)
/* 0040CC00 8CF8FFD8 */  lw    $t8, -0x28($a3)
/* 0040CC04 032B6025 */  or    $t4, $t9, $t3
/* 0040CC08 ACECFFD0 */  sw    $t4, -0x30($a3)
/* 0040CC0C 8D0EFFD4 */  lw    $t6, -0x2c($t0)
/* 0040CC10 8CECFFDC */  lw    $t4, -0x24($a3)
/* 0040CC14 01AE7825 */  or    $t7, $t5, $t6
/* 0040CC18 ACEFFFD4 */  sw    $t7, -0x2c($a3)
/* 0040CC1C 8D19FFD8 */  lw    $t9, -0x28($t0)
/* 0040CC20 8CEFFFE0 */  lw    $t7, -0x20($a3)
/* 0040CC24 03195825 */  or    $t3, $t8, $t9
/* 0040CC28 ACEBFFD8 */  sw    $t3, -0x28($a3)
/* 0040CC2C 8D0DFFDC */  lw    $t5, -0x24($t0)
/* 0040CC30 8CEBFFE4 */  lw    $t3, -0x1c($a3)
/* 0040CC34 018D7025 */  or    $t6, $t4, $t5
/* 0040CC38 ACEEFFDC */  sw    $t6, -0x24($a3)
/* 0040CC3C 8D18FFE0 */  lw    $t8, -0x20($t0)
/* 0040CC40 8CEEFFE8 */  lw    $t6, -0x18($a3)
/* 0040CC44 01F8C825 */  or    $t9, $t7, $t8
/* 0040CC48 ACF9FFE0 */  sw    $t9, -0x20($a3)
/* 0040CC4C 8D0CFFE4 */  lw    $t4, -0x1c($t0)
/* 0040CC50 8CF9FFEC */  lw    $t9, -0x14($a3)
/* 0040CC54 016C6825 */  or    $t5, $t3, $t4
/* 0040CC58 ACEDFFE4 */  sw    $t5, -0x1c($a3)
/* 0040CC5C 8D0FFFE8 */  lw    $t7, -0x18($t0)
/* 0040CC60 8CEDFFF0 */  lw    $t5, -0x10($a3)
/* 0040CC64 01CFC025 */  or    $t8, $t6, $t7
/* 0040CC68 ACF8FFE8 */  sw    $t8, -0x18($a3)
/* 0040CC6C 8D0BFFEC */  lw    $t3, -0x14($t0)
/* 0040CC70 8CF8FFF4 */  lw    $t8, -0xc($a3)
/* 0040CC74 032B6025 */  or    $t4, $t9, $t3
/* 0040CC78 ACECFFEC */  sw    $t4, -0x14($a3)
/* 0040CC7C 8D0EFFF0 */  lw    $t6, -0x10($t0)
/* 0040CC80 8CECFFF8 */  lw    $t4, -8($a3)
/* 0040CC84 01AE7825 */  or    $t7, $t5, $t6
/* 0040CC88 ACEFFFF0 */  sw    $t7, -0x10($a3)
/* 0040CC8C 8D19FFF4 */  lw    $t9, -0xc($t0)
/* 0040CC90 8CEFFFFC */  lw    $t7, -4($a3)
/* 0040CC94 03195825 */  or    $t3, $t8, $t9
/* 0040CC98 ACEBFFF4 */  sw    $t3, -0xc($a3)
/* 0040CC9C 8D0DFFF8 */  lw    $t5, -8($t0)
/* 0040CCA0 018D7025 */  or    $t6, $t4, $t5
/* 0040CCA4 ACEEFFF8 */  sw    $t6, -8($a3)
/* 0040CCA8 8D18FFFC */  lw    $t8, -4($t0)
/* 0040CCAC 01F8C825 */  or    $t9, $t7, $t8
/* 0040CCB0 1486FFBD */  bne   $a0, $a2, .L0040CBA8
/* 0040CCB4 ACF9FFFC */   sw    $t9, -4($a3)
.L0040CCB8:
/* 0040CCB8 03E00008 */  jr    $ra
/* 0040CCBC 00000000 */   nop   
    .type bvectunion, @function
    .size bvectunion, .-bvectunion
    .end bvectunion

glabel bvectintsect
    .ent bvectintsect
    # 00410204 codemotion
    # 004175BC copypropagate
    # 004324F4 findinduct
    # 00455D38 analoop
    # 00461AAC makelivranges
    # 004638C0 regdataflow
    # 00465D30 intfering
    # 00475680 getexpsources
    # 00479DC4 eliminduct
/* 0040CCC0 8C860000 */  lw    $a2, ($a0)
/* 0040CCC4 8C820004 */  lw    $v0, 4($a0)
/* 0040CCC8 8CA30004 */  lw    $v1, 4($a1)
/* 0040CCCC 24C6FFFF */  addiu $a2, $a2, -1
/* 0040CCD0 04C00064 */  bltz  $a2, .L0040CE64
/* 0040CCD4 24C60001 */   addiu $a2, $a2, 1
/* 0040CCD8 30CA0003 */  andi  $t2, $a2, 3
/* 0040CCDC 1140001A */  beqz  $t2, .L0040CD48
/* 0040CCE0 00002025 */   move  $a0, $zero
/* 0040CCE4 00002900 */  sll   $a1, $zero, 4
/* 0040CCE8 00453821 */  addu  $a3, $v0, $a1
/* 0040CCEC 00654021 */  addu  $t0, $v1, $a1
/* 0040CCF0 01404825 */  move  $t1, $t2
.L0040CCF4:
/* 0040CCF4 8CEE0000 */  lw    $t6, ($a3)
/* 0040CCF8 8D0F0000 */  lw    $t7, ($t0)
/* 0040CCFC 8CF90004 */  lw    $t9, 4($a3)
/* 0040CD00 8CED0008 */  lw    $t5, 8($a3)
/* 0040CD04 01CFC024 */  and   $t8, $t6, $t7
/* 0040CD08 ACF80000 */  sw    $t8, ($a3)
/* 0040CD0C 8D0B0004 */  lw    $t3, 4($t0)
/* 0040CD10 8CF8000C */  lw    $t8, 0xc($a3)
/* 0040CD14 24840001 */  addiu $a0, $a0, 1
/* 0040CD18 032B6024 */  and   $t4, $t9, $t3
/* 0040CD1C ACEC0004 */  sw    $t4, 4($a3)
/* 0040CD20 8D0E0008 */  lw    $t6, 8($t0)
/* 0040CD24 24E70010 */  addiu $a3, $a3, 0x10
/* 0040CD28 25080010 */  addiu $t0, $t0, 0x10
/* 0040CD2C 01AE7824 */  and   $t7, $t5, $t6
/* 0040CD30 ACEFFFF8 */  sw    $t7, -8($a3)
/* 0040CD34 8D19FFFC */  lw    $t9, -4($t0)
/* 0040CD38 03195824 */  and   $t3, $t8, $t9
/* 0040CD3C 1524FFED */  bne   $t1, $a0, .L0040CCF4
/* 0040CD40 ACEBFFFC */   sw    $t3, -4($a3)
/* 0040CD44 10860047 */  beq   $a0, $a2, .L0040CE64
.L0040CD48:
/* 0040CD48 00042900 */   sll   $a1, $a0, 4
/* 0040CD4C 00453821 */  addu  $a3, $v0, $a1
/* 0040CD50 00654021 */  addu  $t0, $v1, $a1
.L0040CD54:
/* 0040CD54 8CEC0000 */  lw    $t4, ($a3)
/* 0040CD58 8D0D0000 */  lw    $t5, ($t0)
/* 0040CD5C 8CEF0004 */  lw    $t7, 4($a3)
/* 0040CD60 8CEB0008 */  lw    $t3, 8($a3)
/* 0040CD64 018D7024 */  and   $t6, $t4, $t5
/* 0040CD68 ACEE0000 */  sw    $t6, ($a3)
/* 0040CD6C 8D180004 */  lw    $t8, 4($t0)
/* 0040CD70 8CEE000C */  lw    $t6, 0xc($a3)
/* 0040CD74 24840004 */  addiu $a0, $a0, 4
/* 0040CD78 01F8C824 */  and   $t9, $t7, $t8
/* 0040CD7C ACF90004 */  sw    $t9, 4($a3)
/* 0040CD80 8D0C0008 */  lw    $t4, 8($t0)
/* 0040CD84 8CF90010 */  lw    $t9, 0x10($a3)
/* 0040CD88 24E70040 */  addiu $a3, $a3, 0x40
/* 0040CD8C 016C6824 */  and   $t5, $t3, $t4
/* 0040CD90 ACEDFFC8 */  sw    $t5, -0x38($a3)
/* 0040CD94 8D0F000C */  lw    $t7, 0xc($t0)
/* 0040CD98 8CEDFFD4 */  lw    $t5, -0x2c($a3)
/* 0040CD9C 25080040 */  addiu $t0, $t0, 0x40
/* 0040CDA0 01CFC024 */  and   $t8, $t6, $t7
/* 0040CDA4 ACF8FFCC */  sw    $t8, -0x34($a3)
/* 0040CDA8 8D0BFFD0 */  lw    $t3, -0x30($t0)
/* 0040CDAC 8CF8FFD8 */  lw    $t8, -0x28($a3)
/* 0040CDB0 032B6024 */  and   $t4, $t9, $t3
/* 0040CDB4 ACECFFD0 */  sw    $t4, -0x30($a3)
/* 0040CDB8 8D0EFFD4 */  lw    $t6, -0x2c($t0)
/* 0040CDBC 8CECFFDC */  lw    $t4, -0x24($a3)
/* 0040CDC0 01AE7824 */  and   $t7, $t5, $t6
/* 0040CDC4 ACEFFFD4 */  sw    $t7, -0x2c($a3)
/* 0040CDC8 8D19FFD8 */  lw    $t9, -0x28($t0)
/* 0040CDCC 8CEFFFE0 */  lw    $t7, -0x20($a3)
/* 0040CDD0 03195824 */  and   $t3, $t8, $t9
/* 0040CDD4 ACEBFFD8 */  sw    $t3, -0x28($a3)
/* 0040CDD8 8D0DFFDC */  lw    $t5, -0x24($t0)
/* 0040CDDC 8CEBFFE4 */  lw    $t3, -0x1c($a3)
/* 0040CDE0 018D7024 */  and   $t6, $t4, $t5
/* 0040CDE4 ACEEFFDC */  sw    $t6, -0x24($a3)
/* 0040CDE8 8D18FFE0 */  lw    $t8, -0x20($t0)
/* 0040CDEC 8CEEFFE8 */  lw    $t6, -0x18($a3)
/* 0040CDF0 01F8C824 */  and   $t9, $t7, $t8
/* 0040CDF4 ACF9FFE0 */  sw    $t9, -0x20($a3)
/* 0040CDF8 8D0CFFE4 */  lw    $t4, -0x1c($t0)
/* 0040CDFC 8CF9FFEC */  lw    $t9, -0x14($a3)
/* 0040CE00 016C6824 */  and   $t5, $t3, $t4
/* 0040CE04 ACEDFFE4 */  sw    $t5, -0x1c($a3)
/* 0040CE08 8D0FFFE8 */  lw    $t7, -0x18($t0)
/* 0040CE0C 8CEDFFF0 */  lw    $t5, -0x10($a3)
/* 0040CE10 01CFC024 */  and   $t8, $t6, $t7
/* 0040CE14 ACF8FFE8 */  sw    $t8, -0x18($a3)
/* 0040CE18 8D0BFFEC */  lw    $t3, -0x14($t0)
/* 0040CE1C 8CF8FFF4 */  lw    $t8, -0xc($a3)
/* 0040CE20 032B6024 */  and   $t4, $t9, $t3
/* 0040CE24 ACECFFEC */  sw    $t4, -0x14($a3)
/* 0040CE28 8D0EFFF0 */  lw    $t6, -0x10($t0)
/* 0040CE2C 8CECFFF8 */  lw    $t4, -8($a3)
/* 0040CE30 01AE7824 */  and   $t7, $t5, $t6
/* 0040CE34 ACEFFFF0 */  sw    $t7, -0x10($a3)
/* 0040CE38 8D19FFF4 */  lw    $t9, -0xc($t0)
/* 0040CE3C 8CEFFFFC */  lw    $t7, -4($a3)
/* 0040CE40 03195824 */  and   $t3, $t8, $t9
/* 0040CE44 ACEBFFF4 */  sw    $t3, -0xc($a3)
/* 0040CE48 8D0DFFF8 */  lw    $t5, -8($t0)
/* 0040CE4C 018D7024 */  and   $t6, $t4, $t5
/* 0040CE50 ACEEFFF8 */  sw    $t6, -8($a3)
/* 0040CE54 8D18FFFC */  lw    $t8, -4($t0)
/* 0040CE58 01F8C824 */  and   $t9, $t7, $t8
/* 0040CE5C 1486FFBD */  bne   $a0, $a2, .L0040CD54
/* 0040CE60 ACF9FFFC */   sw    $t9, -4($a3)
.L0040CE64:
/* 0040CE64 03E00008 */  jr    $ra
/* 0040CE68 00000000 */   nop   
    .type bvectintsect, @function
    .size bvectintsect, .-bvectintsect
    .end bvectintsect

glabel bvectminus
    .ent bvectminus
    # 00410204 codemotion
    # 004175BC copypropagate
    # 004324F4 findinduct
    # 00461AAC makelivranges
    # 004638C0 regdataflow
    # 00469280 globalcolor
    # 00475680 getexpsources
    # 00479DC4 eliminduct
/* 0040CE6C 8C860000 */  lw    $a2, ($a0)
/* 0040CE70 8C820004 */  lw    $v0, 4($a0)
/* 0040CE74 8CA30004 */  lw    $v1, 4($a1)
/* 0040CE78 24C6FFFF */  addiu $a2, $a2, -1
/* 0040CE7C 04C00078 */  bltz  $a2, .L0040D060
/* 0040CE80 24C60001 */   addiu $a2, $a2, 1
/* 0040CE84 30CA0003 */  andi  $t2, $a2, 3
/* 0040CE88 1140001E */  beqz  $t2, .L0040CF04
/* 0040CE8C 00002025 */   move  $a0, $zero
/* 0040CE90 00002900 */  sll   $a1, $zero, 4
/* 0040CE94 00453821 */  addu  $a3, $v0, $a1
/* 0040CE98 00654021 */  addu  $t0, $v1, $a1
/* 0040CE9C 01404825 */  move  $t1, $t2
.L0040CEA0:
/* 0040CEA0 8D0F0000 */  lw    $t7, ($t0)
/* 0040CEA4 8CEE0000 */  lw    $t6, ($a3)
/* 0040CEA8 8CEB0004 */  lw    $t3, 4($a3)
/* 0040CEAC 01E0C027 */  not   $t8, $t7
/* 0040CEB0 01D8C824 */  and   $t9, $t6, $t8
/* 0040CEB4 ACF90000 */  sw    $t9, ($a3)
/* 0040CEB8 8D0C0004 */  lw    $t4, 4($t0)
/* 0040CEBC 8CEE0008 */  lw    $t6, 8($a3)
/* 0040CEC0 24840001 */  addiu $a0, $a0, 1
/* 0040CEC4 01806827 */  not   $t5, $t4
/* 0040CEC8 016D7824 */  and   $t7, $t3, $t5
/* 0040CECC ACEF0004 */  sw    $t7, 4($a3)
/* 0040CED0 8D180008 */  lw    $t8, 8($t0)
/* 0040CED4 8CEB000C */  lw    $t3, 0xc($a3)
/* 0040CED8 24E70010 */  addiu $a3, $a3, 0x10
/* 0040CEDC 0300C827 */  not   $t9, $t8
/* 0040CEE0 01D96024 */  and   $t4, $t6, $t9
/* 0040CEE4 ACECFFF8 */  sw    $t4, -8($a3)
/* 0040CEE8 8D0D000C */  lw    $t5, 0xc($t0)
/* 0040CEEC 25080010 */  addiu $t0, $t0, 0x10
/* 0040CEF0 01A07827 */  not   $t7, $t5
/* 0040CEF4 016FC024 */  and   $t8, $t3, $t7
/* 0040CEF8 1524FFE9 */  bne   $t1, $a0, .L0040CEA0
/* 0040CEFC ACF8FFFC */   sw    $t8, -4($a3)
/* 0040CF00 10860057 */  beq   $a0, $a2, .L0040D060
.L0040CF04:
/* 0040CF04 00042900 */   sll   $a1, $a0, 4
/* 0040CF08 00453821 */  addu  $a3, $v0, $a1
/* 0040CF0C 00654021 */  addu  $t0, $v1, $a1
.L0040CF10:
/* 0040CF10 8D190000 */  lw    $t9, ($t0)
/* 0040CF14 8CEE0000 */  lw    $t6, ($a3)
/* 0040CF18 8CEB0004 */  lw    $t3, 4($a3)
/* 0040CF1C 03206027 */  not   $t4, $t9
/* 0040CF20 01CC6824 */  and   $t5, $t6, $t4
/* 0040CF24 ACED0000 */  sw    $t5, ($a3)
/* 0040CF28 8D0F0004 */  lw    $t7, 4($t0)
/* 0040CF2C 8CEE0008 */  lw    $t6, 8($a3)
/* 0040CF30 24840004 */  addiu $a0, $a0, 4
/* 0040CF34 01E0C027 */  not   $t8, $t7
/* 0040CF38 0178C824 */  and   $t9, $t3, $t8
/* 0040CF3C ACF90004 */  sw    $t9, 4($a3)
/* 0040CF40 8D0C0008 */  lw    $t4, 8($t0)
/* 0040CF44 8CEB000C */  lw    $t3, 0xc($a3)
/* 0040CF48 24E70040 */  addiu $a3, $a3, 0x40
/* 0040CF4C 01806827 */  not   $t5, $t4
/* 0040CF50 01CD7824 */  and   $t7, $t6, $t5
/* 0040CF54 ACEFFFC8 */  sw    $t7, -0x38($a3)
/* 0040CF58 8D18000C */  lw    $t8, 0xc($t0)
/* 0040CF5C 8CEEFFD0 */  lw    $t6, -0x30($a3)
/* 0040CF60 25080040 */  addiu $t0, $t0, 0x40
/* 0040CF64 0300C827 */  not   $t9, $t8
/* 0040CF68 01796024 */  and   $t4, $t3, $t9
/* 0040CF6C ACECFFCC */  sw    $t4, -0x34($a3)
/* 0040CF70 8D0DFFD0 */  lw    $t5, -0x30($t0)
/* 0040CF74 8CEBFFD4 */  lw    $t3, -0x2c($a3)
/* 0040CF78 01A07827 */  not   $t7, $t5
/* 0040CF7C 01CFC024 */  and   $t8, $t6, $t7
/* 0040CF80 ACF8FFD0 */  sw    $t8, -0x30($a3)
/* 0040CF84 8D19FFD4 */  lw    $t9, -0x2c($t0)
/* 0040CF88 8CEEFFD8 */  lw    $t6, -0x28($a3)
/* 0040CF8C 03206027 */  not   $t4, $t9
/* 0040CF90 016C6824 */  and   $t5, $t3, $t4
/* 0040CF94 ACEDFFD4 */  sw    $t5, -0x2c($a3)
/* 0040CF98 8D0FFFD8 */  lw    $t7, -0x28($t0)
/* 0040CF9C 8CEBFFDC */  lw    $t3, -0x24($a3)
/* 0040CFA0 01E0C027 */  not   $t8, $t7
/* 0040CFA4 01D8C824 */  and   $t9, $t6, $t8
/* 0040CFA8 ACF9FFD8 */  sw    $t9, -0x28($a3)
/* 0040CFAC 8D0CFFDC */  lw    $t4, -0x24($t0)
/* 0040CFB0 8CEEFFE0 */  lw    $t6, -0x20($a3)
/* 0040CFB4 01806827 */  not   $t5, $t4
/* 0040CFB8 016D7824 */  and   $t7, $t3, $t5
/* 0040CFBC ACEFFFDC */  sw    $t7, -0x24($a3)
/* 0040CFC0 8D18FFE0 */  lw    $t8, -0x20($t0)
/* 0040CFC4 8CEBFFE4 */  lw    $t3, -0x1c($a3)
/* 0040CFC8 0300C827 */  not   $t9, $t8
/* 0040CFCC 01D96024 */  and   $t4, $t6, $t9
/* 0040CFD0 ACECFFE0 */  sw    $t4, -0x20($a3)
/* 0040CFD4 8D0DFFE4 */  lw    $t5, -0x1c($t0)
/* 0040CFD8 8CEEFFE8 */  lw    $t6, -0x18($a3)
/* 0040CFDC 01A07827 */  not   $t7, $t5
/* 0040CFE0 016FC024 */  and   $t8, $t3, $t7
/* 0040CFE4 ACF8FFE4 */  sw    $t8, -0x1c($a3)
/* 0040CFE8 8D19FFE8 */  lw    $t9, -0x18($t0)
/* 0040CFEC 8CEBFFEC */  lw    $t3, -0x14($a3)
/* 0040CFF0 03206027 */  not   $t4, $t9
/* 0040CFF4 01CC6824 */  and   $t5, $t6, $t4
/* 0040CFF8 ACEDFFE8 */  sw    $t5, -0x18($a3)
/* 0040CFFC 8D0FFFEC */  lw    $t7, -0x14($t0)
/* 0040D000 8CEEFFF0 */  lw    $t6, -0x10($a3)
/* 0040D004 01E0C027 */  not   $t8, $t7
/* 0040D008 0178C824 */  and   $t9, $t3, $t8
/* 0040D00C ACF9FFEC */  sw    $t9, -0x14($a3)
/* 0040D010 8D0CFFF0 */  lw    $t4, -0x10($t0)
/* 0040D014 8CEBFFF4 */  lw    $t3, -0xc($a3)
/* 0040D018 01806827 */  not   $t5, $t4
/* 0040D01C 01CD7824 */  and   $t7, $t6, $t5
/* 0040D020 ACEFFFF0 */  sw    $t7, -0x10($a3)
/* 0040D024 8D18FFF4 */  lw    $t8, -0xc($t0)
/* 0040D028 8CEEFFF8 */  lw    $t6, -8($a3)
/* 0040D02C 0300C827 */  not   $t9, $t8
/* 0040D030 01796024 */  and   $t4, $t3, $t9
/* 0040D034 ACECFFF4 */  sw    $t4, -0xc($a3)
/* 0040D038 8D0DFFF8 */  lw    $t5, -8($t0)
/* 0040D03C 8CEBFFFC */  lw    $t3, -4($a3)
/* 0040D040 01A07827 */  not   $t7, $t5
/* 0040D044 01CFC024 */  and   $t8, $t6, $t7
/* 0040D048 ACF8FFF8 */  sw    $t8, -8($a3)
/* 0040D04C 8D19FFFC */  lw    $t9, -4($t0)
/* 0040D050 03206027 */  not   $t4, $t9
/* 0040D054 016C6824 */  and   $t5, $t3, $t4
/* 0040D058 1486FFAD */  bne   $a0, $a2, .L0040CF10
/* 0040D05C ACEDFFFC */   sw    $t5, -4($a3)
.L0040D060:
/* 0040D060 03E00008 */  jr    $ra
/* 0040D064 00000000 */   nop   
    .type bvectminus, @function
    .size bvectminus, .-bvectminus
    .end bvectminus

glabel unionminus
    .ent unionminus
    # 00410204 codemotion
    # 004324F4 findinduct
    # 004638C0 regdataflow
    # 00475680 getexpsources
/* 0040D068 8C880000 */  lw    $t0, ($a0)
/* 0040D06C 8C820004 */  lw    $v0, 4($a0)
/* 0040D070 8CA30004 */  lw    $v1, 4($a1)
/* 0040D074 2508FFFF */  addiu $t0, $t0, -1
/* 0040D078 050000A5 */  bltz  $t0, .L0040D310
/* 0040D07C 8CC70004 */   lw    $a3, 4($a2)
/* 0040D080 25080001 */  addiu $t0, $t0, 1
/* 0040D084 310C0003 */  andi  $t4, $t0, 3
/* 0040D088 11800028 */  beqz  $t4, .L0040D12C
/* 0040D08C 00002025 */   move  $a0, $zero
/* 0040D090 00002900 */  sll   $a1, $zero, 4
/* 0040D094 00453021 */  addu  $a2, $v0, $a1
/* 0040D098 00654821 */  addu  $t1, $v1, $a1
/* 0040D09C 00E55021 */  addu  $t2, $a3, $a1
/* 0040D0A0 01805825 */  move  $t3, $t4
.L0040D0A4:
/* 0040D0A4 8D4F0000 */  lw    $t7, ($t2)
/* 0040D0A8 8D2E0000 */  lw    $t6, ($t1)
/* 0040D0AC 8CCD0000 */  lw    $t5, ($a2)
/* 0040D0B0 01E0C027 */  not   $t8, $t7
/* 0040D0B4 01D8C824 */  and   $t9, $t6, $t8
/* 0040D0B8 01B97825 */  or    $t7, $t5, $t9
/* 0040D0BC ACCF0000 */  sw    $t7, ($a2)
/* 0040D0C0 8D580004 */  lw    $t8, 4($t2)
/* 0040D0C4 8D2E0004 */  lw    $t6, 4($t1)
/* 0040D0C8 8CCF0004 */  lw    $t7, 4($a2)
/* 0040D0CC 03006827 */  not   $t5, $t8
/* 0040D0D0 01CDC824 */  and   $t9, $t6, $t5
/* 0040D0D4 01F9C025 */  or    $t8, $t7, $t9
/* 0040D0D8 ACD80004 */  sw    $t8, 4($a2)
/* 0040D0DC 8D4D0008 */  lw    $t5, 8($t2)
/* 0040D0E0 8D2E0008 */  lw    $t6, 8($t1)
/* 0040D0E4 8CD80008 */  lw    $t8, 8($a2)
/* 0040D0E8 01A07827 */  not   $t7, $t5
/* 0040D0EC 01CFC824 */  and   $t9, $t6, $t7
/* 0040D0F0 03196825 */  or    $t5, $t8, $t9
/* 0040D0F4 ACCD0008 */  sw    $t5, 8($a2)
/* 0040D0F8 8D4F000C */  lw    $t7, 0xc($t2)
/* 0040D0FC 8D2E000C */  lw    $t6, 0xc($t1)
/* 0040D100 8CCD000C */  lw    $t5, 0xc($a2)
/* 0040D104 01E0C027 */  not   $t8, $t7
/* 0040D108 01D8C824 */  and   $t9, $t6, $t8
/* 0040D10C 24840001 */  addiu $a0, $a0, 1
/* 0040D110 01B97825 */  or    $t7, $t5, $t9
/* 0040D114 ACCF000C */  sw    $t7, 0xc($a2)
/* 0040D118 24C60010 */  addiu $a2, $a2, 0x10
/* 0040D11C 25290010 */  addiu $t1, $t1, 0x10
/* 0040D120 1564FFE0 */  bne   $t3, $a0, .L0040D0A4
/* 0040D124 254A0010 */   addiu $t2, $t2, 0x10
/* 0040D128 10880079 */  beq   $a0, $t0, .L0040D310
.L0040D12C:
/* 0040D12C 00042900 */   sll   $a1, $a0, 4
/* 0040D130 00453021 */  addu  $a2, $v0, $a1
/* 0040D134 00654821 */  addu  $t1, $v1, $a1
/* 0040D138 00E55021 */  addu  $t2, $a3, $a1
.L0040D13C:
/* 0040D13C 8D580000 */  lw    $t8, ($t2)
/* 0040D140 8D2E0000 */  lw    $t6, ($t1)
/* 0040D144 8CCF0000 */  lw    $t7, ($a2)
/* 0040D148 03006827 */  not   $t5, $t8
/* 0040D14C 01CDC824 */  and   $t9, $t6, $t5
/* 0040D150 01F9C025 */  or    $t8, $t7, $t9
/* 0040D154 ACD80000 */  sw    $t8, ($a2)
/* 0040D158 8D4D0004 */  lw    $t5, 4($t2)
/* 0040D15C 8D2E0004 */  lw    $t6, 4($t1)
/* 0040D160 8CD80004 */  lw    $t8, 4($a2)
/* 0040D164 01A07827 */  not   $t7, $t5
/* 0040D168 01CFC824 */  and   $t9, $t6, $t7
/* 0040D16C 03196825 */  or    $t5, $t8, $t9
/* 0040D170 ACCD0004 */  sw    $t5, 4($a2)
/* 0040D174 8D4F0008 */  lw    $t7, 8($t2)
/* 0040D178 8D2E0008 */  lw    $t6, 8($t1)
/* 0040D17C 8CCD0008 */  lw    $t5, 8($a2)
/* 0040D180 01E0C027 */  not   $t8, $t7
/* 0040D184 01D8C824 */  and   $t9, $t6, $t8
/* 0040D188 01B97825 */  or    $t7, $t5, $t9
/* 0040D18C ACCF0008 */  sw    $t7, 8($a2)
/* 0040D190 8D58000C */  lw    $t8, 0xc($t2)
/* 0040D194 8D2E000C */  lw    $t6, 0xc($t1)
/* 0040D198 8CCF000C */  lw    $t7, 0xc($a2)
/* 0040D19C 03006827 */  not   $t5, $t8
/* 0040D1A0 01CDC824 */  and   $t9, $t6, $t5
/* 0040D1A4 01F9C025 */  or    $t8, $t7, $t9
/* 0040D1A8 ACD8000C */  sw    $t8, 0xc($a2)
/* 0040D1AC 8D4D0010 */  lw    $t5, 0x10($t2)
/* 0040D1B0 8D2E0010 */  lw    $t6, 0x10($t1)
/* 0040D1B4 8CD80010 */  lw    $t8, 0x10($a2)
/* 0040D1B8 01A07827 */  not   $t7, $t5
/* 0040D1BC 01CFC824 */  and   $t9, $t6, $t7
/* 0040D1C0 03196825 */  or    $t5, $t8, $t9
/* 0040D1C4 ACCD0010 */  sw    $t5, 0x10($a2)
/* 0040D1C8 8D4F0014 */  lw    $t7, 0x14($t2)
/* 0040D1CC 8D2E0014 */  lw    $t6, 0x14($t1)
/* 0040D1D0 8CCD0014 */  lw    $t5, 0x14($a2)
/* 0040D1D4 01E0C027 */  not   $t8, $t7
/* 0040D1D8 01D8C824 */  and   $t9, $t6, $t8
/* 0040D1DC 01B97825 */  or    $t7, $t5, $t9
/* 0040D1E0 ACCF0014 */  sw    $t7, 0x14($a2)
/* 0040D1E4 8D580018 */  lw    $t8, 0x18($t2)
/* 0040D1E8 8D2E0018 */  lw    $t6, 0x18($t1)
/* 0040D1EC 8CCF0018 */  lw    $t7, 0x18($a2)
/* 0040D1F0 03006827 */  not   $t5, $t8
/* 0040D1F4 01CDC824 */  and   $t9, $t6, $t5
/* 0040D1F8 01F9C025 */  or    $t8, $t7, $t9
/* 0040D1FC ACD80018 */  sw    $t8, 0x18($a2)
/* 0040D200 8D4D001C */  lw    $t5, 0x1c($t2)
/* 0040D204 8D2E001C */  lw    $t6, 0x1c($t1)
/* 0040D208 8CD8001C */  lw    $t8, 0x1c($a2)
/* 0040D20C 01A07827 */  not   $t7, $t5
/* 0040D210 01CFC824 */  and   $t9, $t6, $t7
/* 0040D214 03196825 */  or    $t5, $t8, $t9
/* 0040D218 ACCD001C */  sw    $t5, 0x1c($a2)
/* 0040D21C 8D4F0020 */  lw    $t7, 0x20($t2)
/* 0040D220 8D2E0020 */  lw    $t6, 0x20($t1)
/* 0040D224 8CCD0020 */  lw    $t5, 0x20($a2)
/* 0040D228 01E0C027 */  not   $t8, $t7
/* 0040D22C 01D8C824 */  and   $t9, $t6, $t8
/* 0040D230 01B97825 */  or    $t7, $t5, $t9
/* 0040D234 ACCF0020 */  sw    $t7, 0x20($a2)
/* 0040D238 8D580024 */  lw    $t8, 0x24($t2)
/* 0040D23C 8D2E0024 */  lw    $t6, 0x24($t1)
/* 0040D240 8CCF0024 */  lw    $t7, 0x24($a2)
/* 0040D244 03006827 */  not   $t5, $t8
/* 0040D248 01CDC824 */  and   $t9, $t6, $t5
/* 0040D24C 01F9C025 */  or    $t8, $t7, $t9
/* 0040D250 ACD80024 */  sw    $t8, 0x24($a2)
/* 0040D254 8D4D0028 */  lw    $t5, 0x28($t2)
/* 0040D258 8D2E0028 */  lw    $t6, 0x28($t1)
/* 0040D25C 8CD80028 */  lw    $t8, 0x28($a2)
/* 0040D260 01A07827 */  not   $t7, $t5
/* 0040D264 01CFC824 */  and   $t9, $t6, $t7
/* 0040D268 03196825 */  or    $t5, $t8, $t9
/* 0040D26C ACCD0028 */  sw    $t5, 0x28($a2)
/* 0040D270 8D4F002C */  lw    $t7, 0x2c($t2)
/* 0040D274 8D2E002C */  lw    $t6, 0x2c($t1)
/* 0040D278 8CCD002C */  lw    $t5, 0x2c($a2)
/* 0040D27C 01E0C027 */  not   $t8, $t7
/* 0040D280 01D8C824 */  and   $t9, $t6, $t8
/* 0040D284 01B97825 */  or    $t7, $t5, $t9
/* 0040D288 ACCF002C */  sw    $t7, 0x2c($a2)
/* 0040D28C 8D580030 */  lw    $t8, 0x30($t2)
/* 0040D290 8D2E0030 */  lw    $t6, 0x30($t1)
/* 0040D294 8CCF0030 */  lw    $t7, 0x30($a2)
/* 0040D298 03006827 */  not   $t5, $t8
/* 0040D29C 01CDC824 */  and   $t9, $t6, $t5
/* 0040D2A0 01F9C025 */  or    $t8, $t7, $t9
/* 0040D2A4 ACD80030 */  sw    $t8, 0x30($a2)
/* 0040D2A8 8D4D0034 */  lw    $t5, 0x34($t2)
/* 0040D2AC 8D2E0034 */  lw    $t6, 0x34($t1)
/* 0040D2B0 8CD80034 */  lw    $t8, 0x34($a2)
/* 0040D2B4 01A07827 */  not   $t7, $t5
/* 0040D2B8 01CFC824 */  and   $t9, $t6, $t7
/* 0040D2BC 03196825 */  or    $t5, $t8, $t9
/* 0040D2C0 ACCD0034 */  sw    $t5, 0x34($a2)
/* 0040D2C4 8D4F0038 */  lw    $t7, 0x38($t2)
/* 0040D2C8 8D2E0038 */  lw    $t6, 0x38($t1)
/* 0040D2CC 8CCD0038 */  lw    $t5, 0x38($a2)
/* 0040D2D0 01E0C027 */  not   $t8, $t7
/* 0040D2D4 01D8C824 */  and   $t9, $t6, $t8
/* 0040D2D8 01B97825 */  or    $t7, $t5, $t9
/* 0040D2DC ACCF0038 */  sw    $t7, 0x38($a2)
/* 0040D2E0 8D58003C */  lw    $t8, 0x3c($t2)
/* 0040D2E4 8D2E003C */  lw    $t6, 0x3c($t1)
/* 0040D2E8 8CCF003C */  lw    $t7, 0x3c($a2)
/* 0040D2EC 03006827 */  not   $t5, $t8
/* 0040D2F0 01CDC824 */  and   $t9, $t6, $t5
/* 0040D2F4 24840004 */  addiu $a0, $a0, 4
/* 0040D2F8 01F9C025 */  or    $t8, $t7, $t9
/* 0040D2FC ACD8003C */  sw    $t8, 0x3c($a2)
/* 0040D300 24C60040 */  addiu $a2, $a2, 0x40
/* 0040D304 25290040 */  addiu $t1, $t1, 0x40
/* 0040D308 1488FF8C */  bne   $a0, $t0, .L0040D13C
/* 0040D30C 254A0040 */   addiu $t2, $t2, 0x40
.L0040D310:
/* 0040D310 03E00008 */  jr    $ra
/* 0040D314 00000000 */   nop   
    .type unionminus, @function
    .size unionminus, .-unionminus
    .end unionminus

glabel minusminus
    .ent minusminus
    # 00410204 codemotion
    # 004175BC copypropagate
    # 004324F4 findinduct
    # 00479DC4 eliminduct
/* 0040D318 8C880000 */  lw    $t0, ($a0)
/* 0040D31C 8C820004 */  lw    $v0, 4($a0)
/* 0040D320 8CA30004 */  lw    $v1, 4($a1)
/* 0040D324 2508FFFF */  addiu $t0, $t0, -1
/* 0040D328 050000B9 */  bltz  $t0, .L0040D610
/* 0040D32C 8CC70004 */   lw    $a3, 4($a2)
/* 0040D330 25080001 */  addiu $t0, $t0, 1
/* 0040D334 310C0003 */  andi  $t4, $t0, 3
/* 0040D338 1180002C */  beqz  $t4, .L0040D3EC
/* 0040D33C 00002025 */   move  $a0, $zero
/* 0040D340 00002900 */  sll   $a1, $zero, 4
/* 0040D344 00453021 */  addu  $a2, $v0, $a1
/* 0040D348 00654821 */  addu  $t1, $v1, $a1
/* 0040D34C 00E55021 */  addu  $t2, $a3, $a1
/* 0040D350 01805825 */  move  $t3, $t4
.L0040D354:
/* 0040D354 8D4F0000 */  lw    $t7, ($t2)
/* 0040D358 8D2E0000 */  lw    $t6, ($t1)
/* 0040D35C 24840001 */  addiu $a0, $a0, 1
/* 0040D360 01E0C027 */  not   $t8, $t7
/* 0040D364 8CCF0000 */  lw    $t7, ($a2)
/* 0040D368 01D8C824 */  and   $t9, $t6, $t8
/* 0040D36C 03206827 */  not   $t5, $t9
/* 0040D370 01ED7024 */  and   $t6, $t7, $t5
/* 0040D374 ACCE0000 */  sw    $t6, ($a2)
/* 0040D378 8D590004 */  lw    $t9, 4($t2)
/* 0040D37C 8D380004 */  lw    $t8, 4($t1)
/* 0040D380 24C60010 */  addiu $a2, $a2, 0x10
/* 0040D384 03207827 */  not   $t7, $t9
/* 0040D388 8CD9FFF4 */  lw    $t9, -0xc($a2)
/* 0040D38C 030F6824 */  and   $t5, $t8, $t7
/* 0040D390 01A07027 */  not   $t6, $t5
/* 0040D394 032EC024 */  and   $t8, $t9, $t6
/* 0040D398 ACD8FFF4 */  sw    $t8, -0xc($a2)
/* 0040D39C 8D4D0008 */  lw    $t5, 8($t2)
/* 0040D3A0 8D2F0008 */  lw    $t7, 8($t1)
/* 0040D3A4 25290010 */  addiu $t1, $t1, 0x10
/* 0040D3A8 01A0C827 */  not   $t9, $t5
/* 0040D3AC 8CCDFFF8 */  lw    $t5, -8($a2)
/* 0040D3B0 01F97024 */  and   $t6, $t7, $t9
/* 0040D3B4 01C0C027 */  not   $t8, $t6
/* 0040D3B8 01B87824 */  and   $t7, $t5, $t8
/* 0040D3BC ACCFFFF8 */  sw    $t7, -8($a2)
/* 0040D3C0 8D4E000C */  lw    $t6, 0xc($t2)
/* 0040D3C4 8D39FFFC */  lw    $t9, -4($t1)
/* 0040D3C8 254A0010 */  addiu $t2, $t2, 0x10
/* 0040D3CC 01C06827 */  not   $t5, $t6
/* 0040D3D0 8CCEFFFC */  lw    $t6, -4($a2)
/* 0040D3D4 032DC024 */  and   $t8, $t9, $t5
/* 0040D3D8 03007827 */  not   $t7, $t8
/* 0040D3DC 01CFC824 */  and   $t9, $t6, $t7
/* 0040D3E0 1564FFDC */  bne   $t3, $a0, .L0040D354
/* 0040D3E4 ACD9FFFC */   sw    $t9, -4($a2)
/* 0040D3E8 10880089 */  beq   $a0, $t0, .L0040D610
.L0040D3EC:
/* 0040D3EC 00042900 */   sll   $a1, $a0, 4
/* 0040D3F0 00453021 */  addu  $a2, $v0, $a1
/* 0040D3F4 00654821 */  addu  $t1, $v1, $a1
/* 0040D3F8 00E55021 */  addu  $t2, $a3, $a1
.L0040D3FC:
/* 0040D3FC 8D580000 */  lw    $t8, ($t2)
/* 0040D400 8D2D0000 */  lw    $t5, ($t1)
/* 0040D404 24840004 */  addiu $a0, $a0, 4
/* 0040D408 03007027 */  not   $t6, $t8
/* 0040D40C 8CD80000 */  lw    $t8, ($a2)
/* 0040D410 01AE7824 */  and   $t7, $t5, $t6
/* 0040D414 01E0C827 */  not   $t9, $t7
/* 0040D418 03196824 */  and   $t5, $t8, $t9
/* 0040D41C ACCD0000 */  sw    $t5, ($a2)
/* 0040D420 8D4F0004 */  lw    $t7, 4($t2)
/* 0040D424 8D2E0004 */  lw    $t6, 4($t1)
/* 0040D428 24C60040 */  addiu $a2, $a2, 0x40
/* 0040D42C 01E0C027 */  not   $t8, $t7
/* 0040D430 8CCFFFC4 */  lw    $t7, -0x3c($a2)
/* 0040D434 01D8C824 */  and   $t9, $t6, $t8
/* 0040D438 03206827 */  not   $t5, $t9
/* 0040D43C 01ED7024 */  and   $t6, $t7, $t5
/* 0040D440 ACCEFFC4 */  sw    $t6, -0x3c($a2)
/* 0040D444 8D590008 */  lw    $t9, 8($t2)
/* 0040D448 8D380008 */  lw    $t8, 8($t1)
/* 0040D44C 25290040 */  addiu $t1, $t1, 0x40
/* 0040D450 03207827 */  not   $t7, $t9
/* 0040D454 8CD9FFC8 */  lw    $t9, -0x38($a2)
/* 0040D458 030F6824 */  and   $t5, $t8, $t7
/* 0040D45C 01A07027 */  not   $t6, $t5
/* 0040D460 032EC024 */  and   $t8, $t9, $t6
/* 0040D464 ACD8FFC8 */  sw    $t8, -0x38($a2)
/* 0040D468 8D4D000C */  lw    $t5, 0xc($t2)
/* 0040D46C 8D2FFFCC */  lw    $t7, -0x34($t1)
/* 0040D470 254A0040 */  addiu $t2, $t2, 0x40
/* 0040D474 01A0C827 */  not   $t9, $t5
/* 0040D478 8CCDFFCC */  lw    $t5, -0x34($a2)
/* 0040D47C 01F97024 */  and   $t6, $t7, $t9
/* 0040D480 01C0C027 */  not   $t8, $t6
/* 0040D484 01B87824 */  and   $t7, $t5, $t8
/* 0040D488 ACCFFFCC */  sw    $t7, -0x34($a2)
/* 0040D48C 8D4EFFD0 */  lw    $t6, -0x30($t2)
/* 0040D490 8D39FFD0 */  lw    $t9, -0x30($t1)
/* 0040D494 01C06827 */  not   $t5, $t6
/* 0040D498 8CCEFFD0 */  lw    $t6, -0x30($a2)
/* 0040D49C 032DC024 */  and   $t8, $t9, $t5
/* 0040D4A0 03007827 */  not   $t7, $t8
/* 0040D4A4 01CFC824 */  and   $t9, $t6, $t7
/* 0040D4A8 ACD9FFD0 */  sw    $t9, -0x30($a2)
/* 0040D4AC 8D58FFD4 */  lw    $t8, -0x2c($t2)
/* 0040D4B0 8D2DFFD4 */  lw    $t5, -0x2c($t1)
/* 0040D4B4 03007027 */  not   $t6, $t8
/* 0040D4B8 8CD8FFD4 */  lw    $t8, -0x2c($a2)
/* 0040D4BC 01AE7824 */  and   $t7, $t5, $t6
/* 0040D4C0 01E0C827 */  not   $t9, $t7
/* 0040D4C4 03196824 */  and   $t5, $t8, $t9
/* 0040D4C8 ACCDFFD4 */  sw    $t5, -0x2c($a2)
/* 0040D4CC 8D4FFFD8 */  lw    $t7, -0x28($t2)
/* 0040D4D0 8D2EFFD8 */  lw    $t6, -0x28($t1)
/* 0040D4D4 01E0C027 */  not   $t8, $t7
/* 0040D4D8 8CCFFFD8 */  lw    $t7, -0x28($a2)
/* 0040D4DC 01D8C824 */  and   $t9, $t6, $t8
/* 0040D4E0 03206827 */  not   $t5, $t9
/* 0040D4E4 01ED7024 */  and   $t6, $t7, $t5
/* 0040D4E8 ACCEFFD8 */  sw    $t6, -0x28($a2)
/* 0040D4EC 8D59FFDC */  lw    $t9, -0x24($t2)
/* 0040D4F0 8D38FFDC */  lw    $t8, -0x24($t1)
/* 0040D4F4 03207827 */  not   $t7, $t9
/* 0040D4F8 8CD9FFDC */  lw    $t9, -0x24($a2)
/* 0040D4FC 030F6824 */  and   $t5, $t8, $t7
/* 0040D500 01A07027 */  not   $t6, $t5
/* 0040D504 032EC024 */  and   $t8, $t9, $t6
/* 0040D508 ACD8FFDC */  sw    $t8, -0x24($a2)
/* 0040D50C 8D4DFFE0 */  lw    $t5, -0x20($t2)
/* 0040D510 8D2FFFE0 */  lw    $t7, -0x20($t1)
/* 0040D514 01A0C827 */  not   $t9, $t5
/* 0040D518 8CCDFFE0 */  lw    $t5, -0x20($a2)
/* 0040D51C 01F97024 */  and   $t6, $t7, $t9
/* 0040D520 01C0C027 */  not   $t8, $t6
/* 0040D524 01B87824 */  and   $t7, $t5, $t8
/* 0040D528 ACCFFFE0 */  sw    $t7, -0x20($a2)
/* 0040D52C 8D4EFFE4 */  lw    $t6, -0x1c($t2)
/* 0040D530 8D39FFE4 */  lw    $t9, -0x1c($t1)
/* 0040D534 01C06827 */  not   $t5, $t6
/* 0040D538 8CCEFFE4 */  lw    $t6, -0x1c($a2)
/* 0040D53C 032DC024 */  and   $t8, $t9, $t5
/* 0040D540 03007827 */  not   $t7, $t8
/* 0040D544 01CFC824 */  and   $t9, $t6, $t7
/* 0040D548 ACD9FFE4 */  sw    $t9, -0x1c($a2)
/* 0040D54C 8D58FFE8 */  lw    $t8, -0x18($t2)
/* 0040D550 8D2DFFE8 */  lw    $t5, -0x18($t1)
/* 0040D554 03007027 */  not   $t6, $t8
/* 0040D558 8CD8FFE8 */  lw    $t8, -0x18($a2)
/* 0040D55C 01AE7824 */  and   $t7, $t5, $t6
/* 0040D560 01E0C827 */  not   $t9, $t7
/* 0040D564 03196824 */  and   $t5, $t8, $t9
/* 0040D568 ACCDFFE8 */  sw    $t5, -0x18($a2)
/* 0040D56C 8D4FFFEC */  lw    $t7, -0x14($t2)
/* 0040D570 8D2EFFEC */  lw    $t6, -0x14($t1)
/* 0040D574 01E0C027 */  not   $t8, $t7
/* 0040D578 8CCFFFEC */  lw    $t7, -0x14($a2)
/* 0040D57C 01D8C824 */  and   $t9, $t6, $t8
/* 0040D580 03206827 */  not   $t5, $t9
/* 0040D584 01ED7024 */  and   $t6, $t7, $t5
/* 0040D588 ACCEFFEC */  sw    $t6, -0x14($a2)
/* 0040D58C 8D59FFF0 */  lw    $t9, -0x10($t2)
/* 0040D590 8D38FFF0 */  lw    $t8, -0x10($t1)
/* 0040D594 03207827 */  not   $t7, $t9
/* 0040D598 8CD9FFF0 */  lw    $t9, -0x10($a2)
/* 0040D59C 030F6824 */  and   $t5, $t8, $t7
/* 0040D5A0 01A07027 */  not   $t6, $t5
/* 0040D5A4 032EC024 */  and   $t8, $t9, $t6
/* 0040D5A8 ACD8FFF0 */  sw    $t8, -0x10($a2)
/* 0040D5AC 8D4DFFF4 */  lw    $t5, -0xc($t2)
/* 0040D5B0 8D2FFFF4 */  lw    $t7, -0xc($t1)
/* 0040D5B4 01A0C827 */  not   $t9, $t5
/* 0040D5B8 8CCDFFF4 */  lw    $t5, -0xc($a2)
/* 0040D5BC 01F97024 */  and   $t6, $t7, $t9
/* 0040D5C0 01C0C027 */  not   $t8, $t6
/* 0040D5C4 01B87824 */  and   $t7, $t5, $t8
/* 0040D5C8 ACCFFFF4 */  sw    $t7, -0xc($a2)
/* 0040D5CC 8D4EFFF8 */  lw    $t6, -8($t2)
/* 0040D5D0 8D39FFF8 */  lw    $t9, -8($t1)
/* 0040D5D4 01C06827 */  not   $t5, $t6
/* 0040D5D8 8CCEFFF8 */  lw    $t6, -8($a2)
/* 0040D5DC 032DC024 */  and   $t8, $t9, $t5
/* 0040D5E0 03007827 */  not   $t7, $t8
/* 0040D5E4 01CFC824 */  and   $t9, $t6, $t7
/* 0040D5E8 ACD9FFF8 */  sw    $t9, -8($a2)
/* 0040D5EC 8D58FFFC */  lw    $t8, -4($t2)
/* 0040D5F0 8D2DFFFC */  lw    $t5, -4($t1)
/* 0040D5F4 03007027 */  not   $t6, $t8
/* 0040D5F8 8CD8FFFC */  lw    $t8, -4($a2)
/* 0040D5FC 01AE7824 */  and   $t7, $t5, $t6
/* 0040D600 01E0C827 */  not   $t9, $t7
/* 0040D604 03196824 */  and   $t5, $t8, $t9
/* 0040D608 1488FF7C */  bne   $a0, $t0, .L0040D3FC
/* 0040D60C ACCDFFFC */   sw    $t5, -4($a2)
.L0040D610:
/* 0040D610 03E00008 */  jr    $ra
/* 0040D614 00000000 */   nop   
    .type minusminus, @function
    .size minusminus, .-minusminus
    .end minusminus

glabel unionintsect
    .ent unionintsect
    # 00410204 codemotion
    # 004324F4 findinduct
    # 004638C0 regdataflow
/* 0040D618 8C880000 */  lw    $t0, ($a0)
/* 0040D61C 8C820004 */  lw    $v0, 4($a0)
/* 0040D620 8CA30004 */  lw    $v1, 4($a1)
/* 0040D624 2508FFFF */  addiu $t0, $t0, -1
/* 0040D628 05000091 */  bltz  $t0, .L0040D870
/* 0040D62C 8CC70004 */   lw    $a3, 4($a2)
/* 0040D630 25080001 */  addiu $t0, $t0, 1
/* 0040D634 310C0003 */  andi  $t4, $t0, 3
/* 0040D638 11800024 */  beqz  $t4, .L0040D6CC
/* 0040D63C 00002025 */   move  $a0, $zero
/* 0040D640 00002900 */  sll   $a1, $zero, 4
/* 0040D644 00453021 */  addu  $a2, $v0, $a1
/* 0040D648 00654821 */  addu  $t1, $v1, $a1
/* 0040D64C 00E55021 */  addu  $t2, $a3, $a1
/* 0040D650 01805825 */  move  $t3, $t4
.L0040D654:
/* 0040D654 8D2E0000 */  lw    $t6, ($t1)
/* 0040D658 8D4F0000 */  lw    $t7, ($t2)
/* 0040D65C 8CD90000 */  lw    $t9, ($a2)
/* 0040D660 24840001 */  addiu $a0, $a0, 1
/* 0040D664 01CFC024 */  and   $t8, $t6, $t7
/* 0040D668 03386825 */  or    $t5, $t9, $t8
/* 0040D66C ACCD0000 */  sw    $t5, ($a2)
/* 0040D670 8D4F0004 */  lw    $t7, 4($t2)
/* 0040D674 8D2E0004 */  lw    $t6, 4($t1)
/* 0040D678 8CD80004 */  lw    $t8, 4($a2)
/* 0040D67C 24C60010 */  addiu $a2, $a2, 0x10
/* 0040D680 01CFC824 */  and   $t9, $t6, $t7
/* 0040D684 03196825 */  or    $t5, $t8, $t9
/* 0040D688 ACCDFFF4 */  sw    $t5, -0xc($a2)
/* 0040D68C 8D4F0008 */  lw    $t7, 8($t2)
/* 0040D690 8D2E0008 */  lw    $t6, 8($t1)
/* 0040D694 8CD9FFF8 */  lw    $t9, -8($a2)
/* 0040D698 25290010 */  addiu $t1, $t1, 0x10
/* 0040D69C 01CFC024 */  and   $t8, $t6, $t7
/* 0040D6A0 03386825 */  or    $t5, $t9, $t8
/* 0040D6A4 ACCDFFF8 */  sw    $t5, -8($a2)
/* 0040D6A8 8D4F000C */  lw    $t7, 0xc($t2)
/* 0040D6AC 8D2EFFFC */  lw    $t6, -4($t1)
/* 0040D6B0 8CD8FFFC */  lw    $t8, -4($a2)
/* 0040D6B4 254A0010 */  addiu $t2, $t2, 0x10
/* 0040D6B8 01CFC824 */  and   $t9, $t6, $t7
/* 0040D6BC 03196825 */  or    $t5, $t8, $t9
/* 0040D6C0 1564FFE4 */  bne   $t3, $a0, .L0040D654
/* 0040D6C4 ACCDFFFC */   sw    $t5, -4($a2)
/* 0040D6C8 10880069 */  beq   $a0, $t0, .L0040D870
.L0040D6CC:
/* 0040D6CC 00042900 */   sll   $a1, $a0, 4
/* 0040D6D0 00453021 */  addu  $a2, $v0, $a1
/* 0040D6D4 00654821 */  addu  $t1, $v1, $a1
/* 0040D6D8 00E55021 */  addu  $t2, $a3, $a1
.L0040D6DC:
/* 0040D6DC 8D2E0000 */  lw    $t6, ($t1)
/* 0040D6E0 8D4F0000 */  lw    $t7, ($t2)
/* 0040D6E4 8CD90000 */  lw    $t9, ($a2)
/* 0040D6E8 24840004 */  addiu $a0, $a0, 4
/* 0040D6EC 01CFC024 */  and   $t8, $t6, $t7
/* 0040D6F0 03386825 */  or    $t5, $t9, $t8
/* 0040D6F4 ACCD0000 */  sw    $t5, ($a2)
/* 0040D6F8 8D4F0004 */  lw    $t7, 4($t2)
/* 0040D6FC 8D2E0004 */  lw    $t6, 4($t1)
/* 0040D700 8CD80004 */  lw    $t8, 4($a2)
/* 0040D704 24C60040 */  addiu $a2, $a2, 0x40
/* 0040D708 01CFC824 */  and   $t9, $t6, $t7
/* 0040D70C 03196825 */  or    $t5, $t8, $t9
/* 0040D710 ACCDFFC4 */  sw    $t5, -0x3c($a2)
/* 0040D714 8D4F0008 */  lw    $t7, 8($t2)
/* 0040D718 8D2E0008 */  lw    $t6, 8($t1)
/* 0040D71C 8CD9FFC8 */  lw    $t9, -0x38($a2)
/* 0040D720 25290040 */  addiu $t1, $t1, 0x40
/* 0040D724 01CFC024 */  and   $t8, $t6, $t7
/* 0040D728 03386825 */  or    $t5, $t9, $t8
/* 0040D72C ACCDFFC8 */  sw    $t5, -0x38($a2)
/* 0040D730 8D4F000C */  lw    $t7, 0xc($t2)
/* 0040D734 8D2EFFCC */  lw    $t6, -0x34($t1)
/* 0040D738 8CD8FFCC */  lw    $t8, -0x34($a2)
/* 0040D73C 254A0040 */  addiu $t2, $t2, 0x40
/* 0040D740 01CFC824 */  and   $t9, $t6, $t7
/* 0040D744 03196825 */  or    $t5, $t8, $t9
/* 0040D748 ACCDFFCC */  sw    $t5, -0x34($a2)
/* 0040D74C 8D4FFFD0 */  lw    $t7, -0x30($t2)
/* 0040D750 8D2EFFD0 */  lw    $t6, -0x30($t1)
/* 0040D754 8CD9FFD0 */  lw    $t9, -0x30($a2)
/* 0040D758 01CFC024 */  and   $t8, $t6, $t7
/* 0040D75C 03386825 */  or    $t5, $t9, $t8
/* 0040D760 ACCDFFD0 */  sw    $t5, -0x30($a2)
/* 0040D764 8D4FFFD4 */  lw    $t7, -0x2c($t2)
/* 0040D768 8D2EFFD4 */  lw    $t6, -0x2c($t1)
/* 0040D76C 8CD8FFD4 */  lw    $t8, -0x2c($a2)
/* 0040D770 01CFC824 */  and   $t9, $t6, $t7
/* 0040D774 03196825 */  or    $t5, $t8, $t9
/* 0040D778 ACCDFFD4 */  sw    $t5, -0x2c($a2)
/* 0040D77C 8D4FFFD8 */  lw    $t7, -0x28($t2)
/* 0040D780 8D2EFFD8 */  lw    $t6, -0x28($t1)
/* 0040D784 8CD9FFD8 */  lw    $t9, -0x28($a2)
/* 0040D788 01CFC024 */  and   $t8, $t6, $t7
/* 0040D78C 03386825 */  or    $t5, $t9, $t8
/* 0040D790 ACCDFFD8 */  sw    $t5, -0x28($a2)
/* 0040D794 8D4FFFDC */  lw    $t7, -0x24($t2)
/* 0040D798 8D2EFFDC */  lw    $t6, -0x24($t1)
/* 0040D79C 8CD8FFDC */  lw    $t8, -0x24($a2)
/* 0040D7A0 01CFC824 */  and   $t9, $t6, $t7
/* 0040D7A4 03196825 */  or    $t5, $t8, $t9
/* 0040D7A8 ACCDFFDC */  sw    $t5, -0x24($a2)
/* 0040D7AC 8D4FFFE0 */  lw    $t7, -0x20($t2)
/* 0040D7B0 8D2EFFE0 */  lw    $t6, -0x20($t1)
/* 0040D7B4 8CD9FFE0 */  lw    $t9, -0x20($a2)
/* 0040D7B8 01CFC024 */  and   $t8, $t6, $t7
/* 0040D7BC 03386825 */  or    $t5, $t9, $t8
/* 0040D7C0 ACCDFFE0 */  sw    $t5, -0x20($a2)
/* 0040D7C4 8D4FFFE4 */  lw    $t7, -0x1c($t2)
/* 0040D7C8 8D2EFFE4 */  lw    $t6, -0x1c($t1)
/* 0040D7CC 8CD8FFE4 */  lw    $t8, -0x1c($a2)
/* 0040D7D0 01CFC824 */  and   $t9, $t6, $t7
/* 0040D7D4 03196825 */  or    $t5, $t8, $t9
/* 0040D7D8 ACCDFFE4 */  sw    $t5, -0x1c($a2)
/* 0040D7DC 8D4FFFE8 */  lw    $t7, -0x18($t2)
/* 0040D7E0 8D2EFFE8 */  lw    $t6, -0x18($t1)
/* 0040D7E4 8CD9FFE8 */  lw    $t9, -0x18($a2)
/* 0040D7E8 01CFC024 */  and   $t8, $t6, $t7
/* 0040D7EC 03386825 */  or    $t5, $t9, $t8
/* 0040D7F0 ACCDFFE8 */  sw    $t5, -0x18($a2)
/* 0040D7F4 8D4FFFEC */  lw    $t7, -0x14($t2)
/* 0040D7F8 8D2EFFEC */  lw    $t6, -0x14($t1)
/* 0040D7FC 8CD8FFEC */  lw    $t8, -0x14($a2)
/* 0040D800 01CFC824 */  and   $t9, $t6, $t7
/* 0040D804 03196825 */  or    $t5, $t8, $t9
/* 0040D808 ACCDFFEC */  sw    $t5, -0x14($a2)
/* 0040D80C 8D4FFFF0 */  lw    $t7, -0x10($t2)
/* 0040D810 8D2EFFF0 */  lw    $t6, -0x10($t1)
/* 0040D814 8CD9FFF0 */  lw    $t9, -0x10($a2)
/* 0040D818 01CFC024 */  and   $t8, $t6, $t7
/* 0040D81C 03386825 */  or    $t5, $t9, $t8
/* 0040D820 ACCDFFF0 */  sw    $t5, -0x10($a2)
/* 0040D824 8D4FFFF4 */  lw    $t7, -0xc($t2)
/* 0040D828 8D2EFFF4 */  lw    $t6, -0xc($t1)
/* 0040D82C 8CD8FFF4 */  lw    $t8, -0xc($a2)
/* 0040D830 01CFC824 */  and   $t9, $t6, $t7
/* 0040D834 03196825 */  or    $t5, $t8, $t9
/* 0040D838 ACCDFFF4 */  sw    $t5, -0xc($a2)
/* 0040D83C 8D4FFFF8 */  lw    $t7, -8($t2)
/* 0040D840 8D2EFFF8 */  lw    $t6, -8($t1)
/* 0040D844 8CD9FFF8 */  lw    $t9, -8($a2)
/* 0040D848 01CFC024 */  and   $t8, $t6, $t7
/* 0040D84C 03386825 */  or    $t5, $t9, $t8
/* 0040D850 ACCDFFF8 */  sw    $t5, -8($a2)
/* 0040D854 8D4FFFFC */  lw    $t7, -4($t2)
/* 0040D858 8D2EFFFC */  lw    $t6, -4($t1)
/* 0040D85C 8CD8FFFC */  lw    $t8, -4($a2)
/* 0040D860 01CFC824 */  and   $t9, $t6, $t7
/* 0040D864 03196825 */  or    $t5, $t8, $t9
/* 0040D868 1488FF9C */  bne   $a0, $t0, .L0040D6DC
/* 0040D86C ACCDFFFC */   sw    $t5, -4($a2)
.L0040D870:
/* 0040D870 03E00008 */  jr    $ra
/* 0040D874 00000000 */   nop   
    .type unionintsect, @function
    .size unionintsect, .-unionintsect
    .end unionintsect

glabel uintsectminus
    .ent uintsectminus
    # 00410204 codemotion
    # 004638C0 regdataflow
/* 0040D878 8C8A0000 */  lw    $t2, ($a0)
/* 0040D87C 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 0040D880 8C820004 */  lw    $v0, 4($a0)
/* 0040D884 254AFFFF */  addiu $t2, $t2, -1
/* 0040D888 8CA30004 */  lw    $v1, 4($a1)
/* 0040D88C 8CC80004 */  lw    $t0, 4($a2)
/* 0040D890 054000D2 */  bltz  $t2, .L0040DBDC
/* 0040D894 8CE90004 */   lw    $t1, 4($a3)
/* 0040D898 254A0001 */  addiu $t2, $t2, 1
/* 0040D89C 314E0003 */  andi  $t6, $t2, 3
/* 0040D8A0 AFAE0004 */  sw    $t6, 4($sp)
/* 0040D8A4 11C00032 */  beqz  $t6, .L0040D970
/* 0040D8A8 00002025 */   move  $a0, $zero
/* 0040D8AC 00002900 */  sll   $a1, $zero, 4
/* 0040D8B0 00453021 */  addu  $a2, $v0, $a1
/* 0040D8B4 00653821 */  addu  $a3, $v1, $a1
/* 0040D8B8 01055821 */  addu  $t3, $t0, $a1
/* 0040D8BC 01256021 */  addu  $t4, $t1, $a1
/* 0040D8C0 01C06825 */  move  $t5, $t6
.L0040D8C4:
/* 0040D8C4 8D990000 */  lw    $t9, ($t4)
/* 0040D8C8 8D780000 */  lw    $t8, ($t3)
/* 0040D8CC 24840001 */  addiu $a0, $a0, 1
/* 0040D8D0 03207027 */  not   $t6, $t9
/* 0040D8D4 8CF90000 */  lw    $t9, ($a3)
/* 0040D8D8 030E7824 */  and   $t7, $t8, $t6
/* 0040D8DC 8CCE0000 */  lw    $t6, ($a2)
/* 0040D8E0 032FC024 */  and   $t8, $t9, $t7
/* 0040D8E4 24C60010 */  addiu $a2, $a2, 0x10
/* 0040D8E8 01D8C825 */  or    $t9, $t6, $t8
/* 0040D8EC ACD9FFF0 */  sw    $t9, -0x10($a2)
/* 0040D8F0 8D8E0004 */  lw    $t6, 4($t4)
/* 0040D8F4 8D6F0004 */  lw    $t7, 4($t3)
/* 0040D8F8 24E70010 */  addiu $a3, $a3, 0x10
/* 0040D8FC 01C0C027 */  not   $t8, $t6
/* 0040D900 8CEEFFF4 */  lw    $t6, -0xc($a3)
/* 0040D904 01F8C824 */  and   $t9, $t7, $t8
/* 0040D908 8CD8FFF4 */  lw    $t8, -0xc($a2)
/* 0040D90C 01D97824 */  and   $t7, $t6, $t9
/* 0040D910 256B0010 */  addiu $t3, $t3, 0x10
/* 0040D914 030F7025 */  or    $t6, $t8, $t7
/* 0040D918 ACCEFFF4 */  sw    $t6, -0xc($a2)
/* 0040D91C 8D980008 */  lw    $t8, 8($t4)
/* 0040D920 8D79FFF8 */  lw    $t9, -8($t3)
/* 0040D924 258C0010 */  addiu $t4, $t4, 0x10
/* 0040D928 03007827 */  not   $t7, $t8
/* 0040D92C 8CF8FFF8 */  lw    $t8, -8($a3)
/* 0040D930 032F7024 */  and   $t6, $t9, $t7
/* 0040D934 8CCFFFF8 */  lw    $t7, -8($a2)
/* 0040D938 030EC824 */  and   $t9, $t8, $t6
/* 0040D93C 01F9C025 */  or    $t8, $t7, $t9
/* 0040D940 ACD8FFF8 */  sw    $t8, -8($a2)
/* 0040D944 8D8FFFFC */  lw    $t7, -4($t4)
/* 0040D948 8D6EFFFC */  lw    $t6, -4($t3)
/* 0040D94C 01E0C827 */  not   $t9, $t7
/* 0040D950 8CEFFFFC */  lw    $t7, -4($a3)
/* 0040D954 01D9C024 */  and   $t8, $t6, $t9
/* 0040D958 8CD9FFFC */  lw    $t9, -4($a2)
/* 0040D95C 01F87024 */  and   $t6, $t7, $t8
/* 0040D960 032E7825 */  or    $t7, $t9, $t6
/* 0040D964 15A4FFD7 */  bne   $t5, $a0, .L0040D8C4
/* 0040D968 ACCFFFFC */   sw    $t7, -4($a2)
/* 0040D96C 108A009B */  beq   $a0, $t2, .L0040DBDC
.L0040D970:
/* 0040D970 00042900 */   sll   $a1, $a0, 4
/* 0040D974 00453021 */  addu  $a2, $v0, $a1
/* 0040D978 00653821 */  addu  $a3, $v1, $a1
/* 0040D97C 01055821 */  addu  $t3, $t0, $a1
/* 0040D980 01256021 */  addu  $t4, $t1, $a1
.L0040D984:
/* 0040D984 8D990000 */  lw    $t9, ($t4)
/* 0040D988 8D780000 */  lw    $t8, ($t3)
/* 0040D98C 24840004 */  addiu $a0, $a0, 4
/* 0040D990 03207027 */  not   $t6, $t9
/* 0040D994 8CF90000 */  lw    $t9, ($a3)
/* 0040D998 030E7824 */  and   $t7, $t8, $t6
/* 0040D99C 8CCE0000 */  lw    $t6, ($a2)
/* 0040D9A0 032FC024 */  and   $t8, $t9, $t7
/* 0040D9A4 24C60040 */  addiu $a2, $a2, 0x40
/* 0040D9A8 01D8C825 */  or    $t9, $t6, $t8
/* 0040D9AC ACD9FFC0 */  sw    $t9, -0x40($a2)
/* 0040D9B0 8D8E0004 */  lw    $t6, 4($t4)
/* 0040D9B4 8D6F0004 */  lw    $t7, 4($t3)
/* 0040D9B8 24E70040 */  addiu $a3, $a3, 0x40
/* 0040D9BC 01C0C027 */  not   $t8, $t6
/* 0040D9C0 8CEEFFC4 */  lw    $t6, -0x3c($a3)
/* 0040D9C4 01F8C824 */  and   $t9, $t7, $t8
/* 0040D9C8 8CD8FFC4 */  lw    $t8, -0x3c($a2)
/* 0040D9CC 01D97824 */  and   $t7, $t6, $t9
/* 0040D9D0 256B0040 */  addiu $t3, $t3, 0x40
/* 0040D9D4 030F7025 */  or    $t6, $t8, $t7
/* 0040D9D8 ACCEFFC4 */  sw    $t6, -0x3c($a2)
/* 0040D9DC 8D980008 */  lw    $t8, 8($t4)
/* 0040D9E0 8D79FFC8 */  lw    $t9, -0x38($t3)
/* 0040D9E4 258C0040 */  addiu $t4, $t4, 0x40
/* 0040D9E8 03007827 */  not   $t7, $t8
/* 0040D9EC 8CF8FFC8 */  lw    $t8, -0x38($a3)
/* 0040D9F0 032F7024 */  and   $t6, $t9, $t7
/* 0040D9F4 8CCFFFC8 */  lw    $t7, -0x38($a2)
/* 0040D9F8 030EC824 */  and   $t9, $t8, $t6
/* 0040D9FC 01F9C025 */  or    $t8, $t7, $t9
/* 0040DA00 ACD8FFC8 */  sw    $t8, -0x38($a2)
/* 0040DA04 8D8FFFCC */  lw    $t7, -0x34($t4)
/* 0040DA08 8D6EFFCC */  lw    $t6, -0x34($t3)
/* 0040DA0C 01E0C827 */  not   $t9, $t7
/* 0040DA10 8CEFFFCC */  lw    $t7, -0x34($a3)
/* 0040DA14 01D9C024 */  and   $t8, $t6, $t9
/* 0040DA18 8CD9FFCC */  lw    $t9, -0x34($a2)
/* 0040DA1C 01F87024 */  and   $t6, $t7, $t8
/* 0040DA20 032E7825 */  or    $t7, $t9, $t6
/* 0040DA24 ACCFFFCC */  sw    $t7, -0x34($a2)
/* 0040DA28 8D99FFD0 */  lw    $t9, -0x30($t4)
/* 0040DA2C 8D78FFD0 */  lw    $t8, -0x30($t3)
/* 0040DA30 03207027 */  not   $t6, $t9
/* 0040DA34 8CF9FFD0 */  lw    $t9, -0x30($a3)
/* 0040DA38 030E7824 */  and   $t7, $t8, $t6
/* 0040DA3C 8CCEFFD0 */  lw    $t6, -0x30($a2)
/* 0040DA40 032FC024 */  and   $t8, $t9, $t7
/* 0040DA44 01D8C825 */  or    $t9, $t6, $t8
/* 0040DA48 ACD9FFD0 */  sw    $t9, -0x30($a2)
/* 0040DA4C 8D8EFFD4 */  lw    $t6, -0x2c($t4)
/* 0040DA50 8D6FFFD4 */  lw    $t7, -0x2c($t3)
/* 0040DA54 01C0C027 */  not   $t8, $t6
/* 0040DA58 8CEEFFD4 */  lw    $t6, -0x2c($a3)
/* 0040DA5C 01F8C824 */  and   $t9, $t7, $t8
/* 0040DA60 8CD8FFD4 */  lw    $t8, -0x2c($a2)
/* 0040DA64 01D97824 */  and   $t7, $t6, $t9
/* 0040DA68 030F7025 */  or    $t6, $t8, $t7
/* 0040DA6C ACCEFFD4 */  sw    $t6, -0x2c($a2)
/* 0040DA70 8D98FFD8 */  lw    $t8, -0x28($t4)
/* 0040DA74 8D79FFD8 */  lw    $t9, -0x28($t3)
/* 0040DA78 03007827 */  not   $t7, $t8
/* 0040DA7C 8CF8FFD8 */  lw    $t8, -0x28($a3)
/* 0040DA80 032F7024 */  and   $t6, $t9, $t7
/* 0040DA84 8CCFFFD8 */  lw    $t7, -0x28($a2)
/* 0040DA88 030EC824 */  and   $t9, $t8, $t6
/* 0040DA8C 01F9C025 */  or    $t8, $t7, $t9
/* 0040DA90 ACD8FFD8 */  sw    $t8, -0x28($a2)
/* 0040DA94 8D8FFFDC */  lw    $t7, -0x24($t4)
/* 0040DA98 8D6EFFDC */  lw    $t6, -0x24($t3)
/* 0040DA9C 01E0C827 */  not   $t9, $t7
/* 0040DAA0 8CEFFFDC */  lw    $t7, -0x24($a3)
/* 0040DAA4 01D9C024 */  and   $t8, $t6, $t9
/* 0040DAA8 8CD9FFDC */  lw    $t9, -0x24($a2)
/* 0040DAAC 01F87024 */  and   $t6, $t7, $t8
/* 0040DAB0 032E7825 */  or    $t7, $t9, $t6
/* 0040DAB4 ACCFFFDC */  sw    $t7, -0x24($a2)
/* 0040DAB8 8D99FFE0 */  lw    $t9, -0x20($t4)
/* 0040DABC 8D78FFE0 */  lw    $t8, -0x20($t3)
/* 0040DAC0 03207027 */  not   $t6, $t9
/* 0040DAC4 8CF9FFE0 */  lw    $t9, -0x20($a3)
/* 0040DAC8 030E7824 */  and   $t7, $t8, $t6
/* 0040DACC 8CCEFFE0 */  lw    $t6, -0x20($a2)
/* 0040DAD0 032FC024 */  and   $t8, $t9, $t7
/* 0040DAD4 01D8C825 */  or    $t9, $t6, $t8
/* 0040DAD8 ACD9FFE0 */  sw    $t9, -0x20($a2)
/* 0040DADC 8D8EFFE4 */  lw    $t6, -0x1c($t4)
/* 0040DAE0 8D6FFFE4 */  lw    $t7, -0x1c($t3)
/* 0040DAE4 01C0C027 */  not   $t8, $t6
/* 0040DAE8 8CEEFFE4 */  lw    $t6, -0x1c($a3)
/* 0040DAEC 01F8C824 */  and   $t9, $t7, $t8
/* 0040DAF0 8CD8FFE4 */  lw    $t8, -0x1c($a2)
/* 0040DAF4 01D97824 */  and   $t7, $t6, $t9
/* 0040DAF8 030F7025 */  or    $t6, $t8, $t7
/* 0040DAFC ACCEFFE4 */  sw    $t6, -0x1c($a2)
/* 0040DB00 8D98FFE8 */  lw    $t8, -0x18($t4)
/* 0040DB04 8D79FFE8 */  lw    $t9, -0x18($t3)
/* 0040DB08 03007827 */  not   $t7, $t8
/* 0040DB0C 8CF8FFE8 */  lw    $t8, -0x18($a3)
/* 0040DB10 032F7024 */  and   $t6, $t9, $t7
/* 0040DB14 8CCFFFE8 */  lw    $t7, -0x18($a2)
/* 0040DB18 030EC824 */  and   $t9, $t8, $t6
/* 0040DB1C 01F9C025 */  or    $t8, $t7, $t9
/* 0040DB20 ACD8FFE8 */  sw    $t8, -0x18($a2)
/* 0040DB24 8D8FFFEC */  lw    $t7, -0x14($t4)
/* 0040DB28 8D6EFFEC */  lw    $t6, -0x14($t3)
/* 0040DB2C 01E0C827 */  not   $t9, $t7
/* 0040DB30 8CEFFFEC */  lw    $t7, -0x14($a3)
/* 0040DB34 01D9C024 */  and   $t8, $t6, $t9
/* 0040DB38 8CD9FFEC */  lw    $t9, -0x14($a2)
/* 0040DB3C 01F87024 */  and   $t6, $t7, $t8
/* 0040DB40 032E7825 */  or    $t7, $t9, $t6
/* 0040DB44 ACCFFFEC */  sw    $t7, -0x14($a2)
/* 0040DB48 8D99FFF0 */  lw    $t9, -0x10($t4)
/* 0040DB4C 8D78FFF0 */  lw    $t8, -0x10($t3)
/* 0040DB50 03207027 */  not   $t6, $t9
/* 0040DB54 8CF9FFF0 */  lw    $t9, -0x10($a3)
/* 0040DB58 030E7824 */  and   $t7, $t8, $t6
/* 0040DB5C 8CCEFFF0 */  lw    $t6, -0x10($a2)
/* 0040DB60 032FC024 */  and   $t8, $t9, $t7
/* 0040DB64 01D8C825 */  or    $t9, $t6, $t8
/* 0040DB68 ACD9FFF0 */  sw    $t9, -0x10($a2)
/* 0040DB6C 8D8EFFF4 */  lw    $t6, -0xc($t4)
/* 0040DB70 8D6FFFF4 */  lw    $t7, -0xc($t3)
/* 0040DB74 01C0C027 */  not   $t8, $t6
/* 0040DB78 8CEEFFF4 */  lw    $t6, -0xc($a3)
/* 0040DB7C 01F8C824 */  and   $t9, $t7, $t8
/* 0040DB80 8CD8FFF4 */  lw    $t8, -0xc($a2)
/* 0040DB84 01D97824 */  and   $t7, $t6, $t9
/* 0040DB88 030F7025 */  or    $t6, $t8, $t7
/* 0040DB8C ACCEFFF4 */  sw    $t6, -0xc($a2)
/* 0040DB90 8D98FFF8 */  lw    $t8, -8($t4)
/* 0040DB94 8D79FFF8 */  lw    $t9, -8($t3)
/* 0040DB98 03007827 */  not   $t7, $t8
/* 0040DB9C 8CF8FFF8 */  lw    $t8, -8($a3)
/* 0040DBA0 032F7024 */  and   $t6, $t9, $t7
/* 0040DBA4 8CCFFFF8 */  lw    $t7, -8($a2)
/* 0040DBA8 030EC824 */  and   $t9, $t8, $t6
/* 0040DBAC 01F9C025 */  or    $t8, $t7, $t9
/* 0040DBB0 ACD8FFF8 */  sw    $t8, -8($a2)
/* 0040DBB4 8D8FFFFC */  lw    $t7, -4($t4)
/* 0040DBB8 8D6EFFFC */  lw    $t6, -4($t3)
/* 0040DBBC 01E0C827 */  not   $t9, $t7
/* 0040DBC0 8CEFFFFC */  lw    $t7, -4($a3)
/* 0040DBC4 01D9C024 */  and   $t8, $t6, $t9
/* 0040DBC8 8CD9FFFC */  lw    $t9, -4($a2)
/* 0040DBCC 01F87024 */  and   $t6, $t7, $t8
/* 0040DBD0 032E7825 */  or    $t7, $t9, $t6
/* 0040DBD4 148AFF6B */  bne   $a0, $t2, .L0040D984
/* 0040DBD8 ACCFFFFC */   sw    $t7, -4($a2)
.L0040DBDC:
/* 0040DBDC 03E00008 */  jr    $ra
/* 0040DBE0 27BD0038 */   addiu $sp, $sp, 0x38
    .type uintsectminus, @function
    .size uintsectminus, .-uintsectminus
    .end uintsectminus

glabel intsectunion
    .ent intsectunion
    # 004324F4 findinduct
/* 0040DBE4 8C880000 */  lw    $t0, ($a0)
/* 0040DBE8 8C820004 */  lw    $v0, 4($a0)
/* 0040DBEC 8CA30004 */  lw    $v1, 4($a1)
/* 0040DBF0 2508FFFF */  addiu $t0, $t0, -1
/* 0040DBF4 05000091 */  bltz  $t0, .L0040DE3C
/* 0040DBF8 8CC70004 */   lw    $a3, 4($a2)
/* 0040DBFC 25080001 */  addiu $t0, $t0, 1
/* 0040DC00 310C0003 */  andi  $t4, $t0, 3
/* 0040DC04 11800024 */  beqz  $t4, .L0040DC98
/* 0040DC08 00002025 */   move  $a0, $zero
/* 0040DC0C 00002900 */  sll   $a1, $zero, 4
/* 0040DC10 00453021 */  addu  $a2, $v0, $a1
/* 0040DC14 00654821 */  addu  $t1, $v1, $a1
/* 0040DC18 00E55021 */  addu  $t2, $a3, $a1
/* 0040DC1C 01805825 */  move  $t3, $t4
.L0040DC20:
/* 0040DC20 8D2E0000 */  lw    $t6, ($t1)
/* 0040DC24 8D4F0000 */  lw    $t7, ($t2)
/* 0040DC28 8CD90000 */  lw    $t9, ($a2)
/* 0040DC2C 24840001 */  addiu $a0, $a0, 1
/* 0040DC30 01CFC025 */  or    $t8, $t6, $t7
/* 0040DC34 03386824 */  and   $t5, $t9, $t8
/* 0040DC38 ACCD0000 */  sw    $t5, ($a2)
/* 0040DC3C 8D4F0004 */  lw    $t7, 4($t2)
/* 0040DC40 8D2E0004 */  lw    $t6, 4($t1)
/* 0040DC44 8CD80004 */  lw    $t8, 4($a2)
/* 0040DC48 24C60010 */  addiu $a2, $a2, 0x10
/* 0040DC4C 01CFC825 */  or    $t9, $t6, $t7
/* 0040DC50 03196824 */  and   $t5, $t8, $t9
/* 0040DC54 ACCDFFF4 */  sw    $t5, -0xc($a2)
/* 0040DC58 8D4F0008 */  lw    $t7, 8($t2)
/* 0040DC5C 8D2E0008 */  lw    $t6, 8($t1)
/* 0040DC60 8CD9FFF8 */  lw    $t9, -8($a2)
/* 0040DC64 25290010 */  addiu $t1, $t1, 0x10
/* 0040DC68 01CFC025 */  or    $t8, $t6, $t7
/* 0040DC6C 03386824 */  and   $t5, $t9, $t8
/* 0040DC70 ACCDFFF8 */  sw    $t5, -8($a2)
/* 0040DC74 8D4F000C */  lw    $t7, 0xc($t2)
/* 0040DC78 8D2EFFFC */  lw    $t6, -4($t1)
/* 0040DC7C 8CD8FFFC */  lw    $t8, -4($a2)
/* 0040DC80 254A0010 */  addiu $t2, $t2, 0x10
/* 0040DC84 01CFC825 */  or    $t9, $t6, $t7
/* 0040DC88 03196824 */  and   $t5, $t8, $t9
/* 0040DC8C 1564FFE4 */  bne   $t3, $a0, .L0040DC20
/* 0040DC90 ACCDFFFC */   sw    $t5, -4($a2)
/* 0040DC94 10880069 */  beq   $a0, $t0, .L0040DE3C
.L0040DC98:
/* 0040DC98 00042900 */   sll   $a1, $a0, 4
/* 0040DC9C 00453021 */  addu  $a2, $v0, $a1
/* 0040DCA0 00654821 */  addu  $t1, $v1, $a1
/* 0040DCA4 00E55021 */  addu  $t2, $a3, $a1
.L0040DCA8:
/* 0040DCA8 8D2E0000 */  lw    $t6, ($t1)
/* 0040DCAC 8D4F0000 */  lw    $t7, ($t2)
/* 0040DCB0 8CD90000 */  lw    $t9, ($a2)
/* 0040DCB4 24840004 */  addiu $a0, $a0, 4
/* 0040DCB8 01CFC025 */  or    $t8, $t6, $t7
/* 0040DCBC 03386824 */  and   $t5, $t9, $t8
/* 0040DCC0 ACCD0000 */  sw    $t5, ($a2)
/* 0040DCC4 8D4F0004 */  lw    $t7, 4($t2)
/* 0040DCC8 8D2E0004 */  lw    $t6, 4($t1)
/* 0040DCCC 8CD80004 */  lw    $t8, 4($a2)
/* 0040DCD0 24C60040 */  addiu $a2, $a2, 0x40
/* 0040DCD4 01CFC825 */  or    $t9, $t6, $t7
/* 0040DCD8 03196824 */  and   $t5, $t8, $t9
/* 0040DCDC ACCDFFC4 */  sw    $t5, -0x3c($a2)
/* 0040DCE0 8D4F0008 */  lw    $t7, 8($t2)
/* 0040DCE4 8D2E0008 */  lw    $t6, 8($t1)
/* 0040DCE8 8CD9FFC8 */  lw    $t9, -0x38($a2)
/* 0040DCEC 25290040 */  addiu $t1, $t1, 0x40
/* 0040DCF0 01CFC025 */  or    $t8, $t6, $t7
/* 0040DCF4 03386824 */  and   $t5, $t9, $t8
/* 0040DCF8 ACCDFFC8 */  sw    $t5, -0x38($a2)
/* 0040DCFC 8D4F000C */  lw    $t7, 0xc($t2)
/* 0040DD00 8D2EFFCC */  lw    $t6, -0x34($t1)
/* 0040DD04 8CD8FFCC */  lw    $t8, -0x34($a2)
/* 0040DD08 254A0040 */  addiu $t2, $t2, 0x40
/* 0040DD0C 01CFC825 */  or    $t9, $t6, $t7
/* 0040DD10 03196824 */  and   $t5, $t8, $t9
/* 0040DD14 ACCDFFCC */  sw    $t5, -0x34($a2)
/* 0040DD18 8D4FFFD0 */  lw    $t7, -0x30($t2)
/* 0040DD1C 8D2EFFD0 */  lw    $t6, -0x30($t1)
/* 0040DD20 8CD9FFD0 */  lw    $t9, -0x30($a2)
/* 0040DD24 01CFC025 */  or    $t8, $t6, $t7
/* 0040DD28 03386824 */  and   $t5, $t9, $t8
/* 0040DD2C ACCDFFD0 */  sw    $t5, -0x30($a2)
/* 0040DD30 8D4FFFD4 */  lw    $t7, -0x2c($t2)
/* 0040DD34 8D2EFFD4 */  lw    $t6, -0x2c($t1)
/* 0040DD38 8CD8FFD4 */  lw    $t8, -0x2c($a2)
/* 0040DD3C 01CFC825 */  or    $t9, $t6, $t7
/* 0040DD40 03196824 */  and   $t5, $t8, $t9
/* 0040DD44 ACCDFFD4 */  sw    $t5, -0x2c($a2)
/* 0040DD48 8D4FFFD8 */  lw    $t7, -0x28($t2)
/* 0040DD4C 8D2EFFD8 */  lw    $t6, -0x28($t1)
/* 0040DD50 8CD9FFD8 */  lw    $t9, -0x28($a2)
/* 0040DD54 01CFC025 */  or    $t8, $t6, $t7
/* 0040DD58 03386824 */  and   $t5, $t9, $t8
/* 0040DD5C ACCDFFD8 */  sw    $t5, -0x28($a2)
/* 0040DD60 8D4FFFDC */  lw    $t7, -0x24($t2)
/* 0040DD64 8D2EFFDC */  lw    $t6, -0x24($t1)
/* 0040DD68 8CD8FFDC */  lw    $t8, -0x24($a2)
/* 0040DD6C 01CFC825 */  or    $t9, $t6, $t7
/* 0040DD70 03196824 */  and   $t5, $t8, $t9
/* 0040DD74 ACCDFFDC */  sw    $t5, -0x24($a2)
/* 0040DD78 8D4FFFE0 */  lw    $t7, -0x20($t2)
/* 0040DD7C 8D2EFFE0 */  lw    $t6, -0x20($t1)
/* 0040DD80 8CD9FFE0 */  lw    $t9, -0x20($a2)
/* 0040DD84 01CFC025 */  or    $t8, $t6, $t7
/* 0040DD88 03386824 */  and   $t5, $t9, $t8
/* 0040DD8C ACCDFFE0 */  sw    $t5, -0x20($a2)
/* 0040DD90 8D4FFFE4 */  lw    $t7, -0x1c($t2)
/* 0040DD94 8D2EFFE4 */  lw    $t6, -0x1c($t1)
/* 0040DD98 8CD8FFE4 */  lw    $t8, -0x1c($a2)
/* 0040DD9C 01CFC825 */  or    $t9, $t6, $t7
/* 0040DDA0 03196824 */  and   $t5, $t8, $t9
/* 0040DDA4 ACCDFFE4 */  sw    $t5, -0x1c($a2)
/* 0040DDA8 8D4FFFE8 */  lw    $t7, -0x18($t2)
/* 0040DDAC 8D2EFFE8 */  lw    $t6, -0x18($t1)
/* 0040DDB0 8CD9FFE8 */  lw    $t9, -0x18($a2)
/* 0040DDB4 01CFC025 */  or    $t8, $t6, $t7
/* 0040DDB8 03386824 */  and   $t5, $t9, $t8
/* 0040DDBC ACCDFFE8 */  sw    $t5, -0x18($a2)
/* 0040DDC0 8D4FFFEC */  lw    $t7, -0x14($t2)
/* 0040DDC4 8D2EFFEC */  lw    $t6, -0x14($t1)
/* 0040DDC8 8CD8FFEC */  lw    $t8, -0x14($a2)
/* 0040DDCC 01CFC825 */  or    $t9, $t6, $t7
/* 0040DDD0 03196824 */  and   $t5, $t8, $t9
/* 0040DDD4 ACCDFFEC */  sw    $t5, -0x14($a2)
/* 0040DDD8 8D4FFFF0 */  lw    $t7, -0x10($t2)
/* 0040DDDC 8D2EFFF0 */  lw    $t6, -0x10($t1)
/* 0040DDE0 8CD9FFF0 */  lw    $t9, -0x10($a2)
/* 0040DDE4 01CFC025 */  or    $t8, $t6, $t7
/* 0040DDE8 03386824 */  and   $t5, $t9, $t8
/* 0040DDEC ACCDFFF0 */  sw    $t5, -0x10($a2)
/* 0040DDF0 8D4FFFF4 */  lw    $t7, -0xc($t2)
/* 0040DDF4 8D2EFFF4 */  lw    $t6, -0xc($t1)
/* 0040DDF8 8CD8FFF4 */  lw    $t8, -0xc($a2)
/* 0040DDFC 01CFC825 */  or    $t9, $t6, $t7
/* 0040DE00 03196824 */  and   $t5, $t8, $t9
/* 0040DE04 ACCDFFF4 */  sw    $t5, -0xc($a2)
/* 0040DE08 8D4FFFF8 */  lw    $t7, -8($t2)
/* 0040DE0C 8D2EFFF8 */  lw    $t6, -8($t1)
/* 0040DE10 8CD9FFF8 */  lw    $t9, -8($a2)
/* 0040DE14 01CFC025 */  or    $t8, $t6, $t7
/* 0040DE18 03386824 */  and   $t5, $t9, $t8
/* 0040DE1C ACCDFFF8 */  sw    $t5, -8($a2)
/* 0040DE20 8D4FFFFC */  lw    $t7, -4($t2)
/* 0040DE24 8D2EFFFC */  lw    $t6, -4($t1)
/* 0040DE28 8CD8FFFC */  lw    $t8, -4($a2)
/* 0040DE2C 01CFC825 */  or    $t9, $t6, $t7
/* 0040DE30 03196824 */  and   $t5, $t8, $t9
/* 0040DE34 1488FF9C */  bne   $a0, $t0, .L0040DCA8
/* 0040DE38 ACCDFFFC */   sw    $t5, -4($a2)
.L0040DE3C:
/* 0040DE3C 03E00008 */  jr    $ra
/* 0040DE40 00000000 */   nop   
    .type intsectunion, @function
    .size intsectunion, .-intsectunion
    .end intsectunion

glabel unionnot
    .ent unionnot
    # 00475680 getexpsources
/* 0040DE44 27BDFFE8 */  addiu $sp, $sp, -0x18
/* 0040DE48 8C820004 */  lw    $v0, 4($a0)
/* 0040DE4C 8CA30004 */  lw    $v1, 4($a1)
/* 0040DE50 240EFFFF */  li    $t6, -1
/* 0040DE54 240FFFFF */  li    $t7, -1
/* 0040DE58 2418FFFF */  li    $t8, -1
/* 0040DE5C 2419FFFF */  li    $t9, -1
/* 0040DE60 AFB90010 */  sw    $t9, 0x10($sp)
/* 0040DE64 AFB8000C */  sw    $t8, 0xc($sp)
/* 0040DE68 AFAF0008 */  sw    $t7, 8($sp)
/* 0040DE6C AFAE0004 */  sw    $t6, 4($sp)
/* 0040DE70 8C860000 */  lw    $a2, ($a0)
/* 0040DE74 24C6FFFF */  addiu $a2, $a2, -1
/* 0040DE78 04C000A0 */  bltz  $a2, .L0040E0FC
/* 0040DE7C 24C60001 */   addiu $a2, $a2, 1
/* 0040DE80 30CA0003 */  andi  $t2, $a2, 3
/* 0040DE84 11400026 */  beqz  $t2, .L0040DF20
/* 0040DE88 00002025 */   move  $a0, $zero
/* 0040DE8C 00002900 */  sll   $a1, $zero, 4
/* 0040DE90 00453821 */  addu  $a3, $v0, $a1
/* 0040DE94 00654021 */  addu  $t0, $v1, $a1
/* 0040DE98 01404825 */  move  $t1, $t2
.L0040DE9C:
/* 0040DE9C 8D0C0000 */  lw    $t4, ($t0)
/* 0040DEA0 8FAB0004 */  lw    $t3, 4($sp)
/* 0040DEA4 8CEF0000 */  lw    $t7, ($a3)
/* 0040DEA8 01806827 */  not   $t5, $t4
/* 0040DEAC 016D7024 */  and   $t6, $t3, $t5
/* 0040DEB0 01EEC025 */  or    $t8, $t7, $t6
/* 0040DEB4 ACF80000 */  sw    $t8, ($a3)
/* 0040DEB8 8D0C0004 */  lw    $t4, 4($t0)
/* 0040DEBC 8FB90008 */  lw    $t9, 8($sp)
/* 0040DEC0 8CEF0004 */  lw    $t7, 4($a3)
/* 0040DEC4 01805827 */  not   $t3, $t4
/* 0040DEC8 032B6824 */  and   $t5, $t9, $t3
/* 0040DECC 01ED7025 */  or    $t6, $t7, $t5
/* 0040DED0 ACEE0004 */  sw    $t6, 4($a3)
/* 0040DED4 8D0C0008 */  lw    $t4, 8($t0)
/* 0040DED8 8FB8000C */  lw    $t8, 0xc($sp)
/* 0040DEDC 8CEF0008 */  lw    $t7, 8($a3)
/* 0040DEE0 0180C827 */  not   $t9, $t4
/* 0040DEE4 03195824 */  and   $t3, $t8, $t9
/* 0040DEE8 01EB6825 */  or    $t5, $t7, $t3
/* 0040DEEC ACED0008 */  sw    $t5, 8($a3)
/* 0040DEF0 8D0C000C */  lw    $t4, 0xc($t0)
/* 0040DEF4 8FAE0010 */  lw    $t6, 0x10($sp)
/* 0040DEF8 8CEF000C */  lw    $t7, 0xc($a3)
/* 0040DEFC 0180C027 */  not   $t8, $t4
/* 0040DF00 01D8C824 */  and   $t9, $t6, $t8
/* 0040DF04 24840001 */  addiu $a0, $a0, 1
/* 0040DF08 01F95825 */  or    $t3, $t7, $t9
/* 0040DF0C ACEB000C */  sw    $t3, 0xc($a3)
/* 0040DF10 24E70010 */  addiu $a3, $a3, 0x10
/* 0040DF14 1524FFE1 */  bne   $t1, $a0, .L0040DE9C
/* 0040DF18 25080010 */   addiu $t0, $t0, 0x10
/* 0040DF1C 10860077 */  beq   $a0, $a2, .L0040E0FC
.L0040DF20:
/* 0040DF20 00042900 */   sll   $a1, $a0, 4
/* 0040DF24 00453821 */  addu  $a3, $v0, $a1
/* 0040DF28 00654021 */  addu  $t0, $v1, $a1
.L0040DF2C:
/* 0040DF2C 8D0C0000 */  lw    $t4, ($t0)
/* 0040DF30 8FAD0004 */  lw    $t5, 4($sp)
/* 0040DF34 8CEF0000 */  lw    $t7, ($a3)
/* 0040DF38 01807027 */  not   $t6, $t4
/* 0040DF3C 01AEC024 */  and   $t8, $t5, $t6
/* 0040DF40 01F8C825 */  or    $t9, $t7, $t8
/* 0040DF44 ACF90000 */  sw    $t9, ($a3)
/* 0040DF48 8D0C0004 */  lw    $t4, 4($t0)
/* 0040DF4C 8FAB0008 */  lw    $t3, 8($sp)
/* 0040DF50 8CEF0004 */  lw    $t7, 4($a3)
/* 0040DF54 01806827 */  not   $t5, $t4
/* 0040DF58 016D7024 */  and   $t6, $t3, $t5
/* 0040DF5C 01EEC025 */  or    $t8, $t7, $t6
/* 0040DF60 ACF80004 */  sw    $t8, 4($a3)
/* 0040DF64 8D0C0008 */  lw    $t4, 8($t0)
/* 0040DF68 8FB9000C */  lw    $t9, 0xc($sp)
/* 0040DF6C 8CEF0008 */  lw    $t7, 8($a3)
/* 0040DF70 01805827 */  not   $t3, $t4
/* 0040DF74 032B6824 */  and   $t5, $t9, $t3
/* 0040DF78 01ED7025 */  or    $t6, $t7, $t5
/* 0040DF7C ACEE0008 */  sw    $t6, 8($a3)
/* 0040DF80 8D0C000C */  lw    $t4, 0xc($t0)
/* 0040DF84 8FB80010 */  lw    $t8, 0x10($sp)
/* 0040DF88 8CEF000C */  lw    $t7, 0xc($a3)
/* 0040DF8C 0180C827 */  not   $t9, $t4
/* 0040DF90 03195824 */  and   $t3, $t8, $t9
/* 0040DF94 01EB6825 */  or    $t5, $t7, $t3
/* 0040DF98 ACED000C */  sw    $t5, 0xc($a3)
/* 0040DF9C 8D0C0010 */  lw    $t4, 0x10($t0)
/* 0040DFA0 8FAE0004 */  lw    $t6, 4($sp)
/* 0040DFA4 8CEF0010 */  lw    $t7, 0x10($a3)
/* 0040DFA8 0180C027 */  not   $t8, $t4
/* 0040DFAC 01D8C824 */  and   $t9, $t6, $t8
/* 0040DFB0 01F95825 */  or    $t3, $t7, $t9
/* 0040DFB4 ACEB0010 */  sw    $t3, 0x10($a3)
/* 0040DFB8 8D0C0014 */  lw    $t4, 0x14($t0)
/* 0040DFBC 8FAD0008 */  lw    $t5, 8($sp)
/* 0040DFC0 8CEF0014 */  lw    $t7, 0x14($a3)
/* 0040DFC4 01807027 */  not   $t6, $t4
/* 0040DFC8 01AEC024 */  and   $t8, $t5, $t6
/* 0040DFCC 01F8C825 */  or    $t9, $t7, $t8
/* 0040DFD0 ACF90014 */  sw    $t9, 0x14($a3)
/* 0040DFD4 8D0C0018 */  lw    $t4, 0x18($t0)
/* 0040DFD8 8FAB000C */  lw    $t3, 0xc($sp)
/* 0040DFDC 8CEF0018 */  lw    $t7, 0x18($a3)
/* 0040DFE0 01806827 */  not   $t5, $t4
/* 0040DFE4 016D7024 */  and   $t6, $t3, $t5
/* 0040DFE8 01EEC025 */  or    $t8, $t7, $t6
/* 0040DFEC ACF80018 */  sw    $t8, 0x18($a3)
/* 0040DFF0 8D0C001C */  lw    $t4, 0x1c($t0)
/* 0040DFF4 8FB90010 */  lw    $t9, 0x10($sp)
/* 0040DFF8 8CEF001C */  lw    $t7, 0x1c($a3)
/* 0040DFFC 01805827 */  not   $t3, $t4
/* 0040E000 032B6824 */  and   $t5, $t9, $t3
/* 0040E004 01ED7025 */  or    $t6, $t7, $t5
/* 0040E008 ACEE001C */  sw    $t6, 0x1c($a3)
/* 0040E00C 8D0C0020 */  lw    $t4, 0x20($t0)
/* 0040E010 8FB80004 */  lw    $t8, 4($sp)
/* 0040E014 8CEF0020 */  lw    $t7, 0x20($a3)
/* 0040E018 0180C827 */  not   $t9, $t4
/* 0040E01C 03195824 */  and   $t3, $t8, $t9
/* 0040E020 01EB6825 */  or    $t5, $t7, $t3
/* 0040E024 ACED0020 */  sw    $t5, 0x20($a3)
/* 0040E028 8D0C0024 */  lw    $t4, 0x24($t0)
/* 0040E02C 8FAE0008 */  lw    $t6, 8($sp)
/* 0040E030 8CEF0024 */  lw    $t7, 0x24($a3)
/* 0040E034 0180C027 */  not   $t8, $t4
/* 0040E038 01D8C824 */  and   $t9, $t6, $t8
/* 0040E03C 01F95825 */  or    $t3, $t7, $t9
/* 0040E040 ACEB0024 */  sw    $t3, 0x24($a3)
/* 0040E044 8D0C0028 */  lw    $t4, 0x28($t0)
/* 0040E048 8FAD000C */  lw    $t5, 0xc($sp)
/* 0040E04C 8CEF0028 */  lw    $t7, 0x28($a3)
/* 0040E050 01807027 */  not   $t6, $t4
/* 0040E054 01AEC024 */  and   $t8, $t5, $t6
/* 0040E058 01F8C825 */  or    $t9, $t7, $t8
/* 0040E05C ACF90028 */  sw    $t9, 0x28($a3)
/* 0040E060 8D0C002C */  lw    $t4, 0x2c($t0)
/* 0040E064 8FAB0010 */  lw    $t3, 0x10($sp)
/* 0040E068 8CEF002C */  lw    $t7, 0x2c($a3)
/* 0040E06C 01806827 */  not   $t5, $t4
/* 0040E070 016D7024 */  and   $t6, $t3, $t5
/* 0040E074 01EEC025 */  or    $t8, $t7, $t6
/* 0040E078 ACF8002C */  sw    $t8, 0x2c($a3)
/* 0040E07C 8D0C0030 */  lw    $t4, 0x30($t0)
/* 0040E080 8FB90004 */  lw    $t9, 4($sp)
/* 0040E084 8CEF0030 */  lw    $t7, 0x30($a3)
/* 0040E088 01805827 */  not   $t3, $t4
/* 0040E08C 032B6824 */  and   $t5, $t9, $t3
/* 0040E090 01ED7025 */  or    $t6, $t7, $t5
/* 0040E094 ACEE0030 */  sw    $t6, 0x30($a3)
/* 0040E098 8D0C0034 */  lw    $t4, 0x34($t0)
/* 0040E09C 8FB80008 */  lw    $t8, 8($sp)
/* 0040E0A0 8CEF0034 */  lw    $t7, 0x34($a3)
/* 0040E0A4 0180C827 */  not   $t9, $t4
/* 0040E0A8 03195824 */  and   $t3, $t8, $t9
/* 0040E0AC 01EB6825 */  or    $t5, $t7, $t3
/* 0040E0B0 ACED0034 */  sw    $t5, 0x34($a3)
/* 0040E0B4 8D0C0038 */  lw    $t4, 0x38($t0)
/* 0040E0B8 8FAE000C */  lw    $t6, 0xc($sp)
/* 0040E0BC 8CEF0038 */  lw    $t7, 0x38($a3)
/* 0040E0C0 0180C027 */  not   $t8, $t4
/* 0040E0C4 01D8C824 */  and   $t9, $t6, $t8
/* 0040E0C8 01F95825 */  or    $t3, $t7, $t9
/* 0040E0CC ACEB0038 */  sw    $t3, 0x38($a3)
/* 0040E0D0 8D0C003C */  lw    $t4, 0x3c($t0)
/* 0040E0D4 8FAD0010 */  lw    $t5, 0x10($sp)
/* 0040E0D8 8CEF003C */  lw    $t7, 0x3c($a3)
/* 0040E0DC 01807027 */  not   $t6, $t4
/* 0040E0E0 01AEC024 */  and   $t8, $t5, $t6
/* 0040E0E4 24840004 */  addiu $a0, $a0, 4
/* 0040E0E8 01F8C825 */  or    $t9, $t7, $t8
/* 0040E0EC ACF9003C */  sw    $t9, 0x3c($a3)
/* 0040E0F0 24E70040 */  addiu $a3, $a3, 0x40
/* 0040E0F4 1486FF8D */  bne   $a0, $a2, .L0040DF2C
/* 0040E0F8 25080040 */   addiu $t0, $t0, 0x40
.L0040E0FC:
/* 0040E0FC 03E00008 */  jr    $ra
/* 0040E100 27BD0018 */   addiu $sp, $sp, 0x18
    .type unionnot, @function
    .size unionnot, .-unionnot
    .end unionnot

glabel uminusminus
    .ent uminusminus
    # 004638C0 regdataflow
/* 0040E104 8C8A0000 */  lw    $t2, ($a0)
/* 0040E108 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 0040E10C 8C820004 */  lw    $v0, 4($a0)
/* 0040E110 254AFFFF */  addiu $t2, $t2, -1
/* 0040E114 8CA30004 */  lw    $v1, 4($a1)
/* 0040E118 8CC80004 */  lw    $t0, 4($a2)
/* 0040E11C 054000E6 */  bltz  $t2, .L0040E4B8
/* 0040E120 8CE90004 */   lw    $t1, 4($a3)
/* 0040E124 254A0001 */  addiu $t2, $t2, 1
/* 0040E128 314E0003 */  andi  $t6, $t2, 3
/* 0040E12C AFAE0004 */  sw    $t6, 4($sp)
/* 0040E130 11C00036 */  beqz  $t6, .L0040E20C
/* 0040E134 00002025 */   move  $a0, $zero
/* 0040E138 00002900 */  sll   $a1, $zero, 4
/* 0040E13C 00453021 */  addu  $a2, $v0, $a1
/* 0040E140 00653821 */  addu  $a3, $v1, $a1
/* 0040E144 01055821 */  addu  $t3, $t0, $a1
/* 0040E148 01256021 */  addu  $t4, $t1, $a1
/* 0040E14C 01C06825 */  move  $t5, $t6
.L0040E150:
/* 0040E150 8D790000 */  lw    $t9, ($t3)
/* 0040E154 8CF80000 */  lw    $t8, ($a3)
/* 0040E158 24840001 */  addiu $a0, $a0, 1
/* 0040E15C 03207027 */  not   $t6, $t9
/* 0040E160 8D990000 */  lw    $t9, ($t4)
/* 0040E164 030E7824 */  and   $t7, $t8, $t6
/* 0040E168 24C60010 */  addiu $a2, $a2, 0x10
/* 0040E16C 0320C027 */  not   $t8, $t9
/* 0040E170 8CD9FFF0 */  lw    $t9, -0x10($a2)
/* 0040E174 01F87024 */  and   $t6, $t7, $t8
/* 0040E178 24E70010 */  addiu $a3, $a3, 0x10
/* 0040E17C 032E7825 */  or    $t7, $t9, $t6
/* 0040E180 ACCFFFF0 */  sw    $t7, -0x10($a2)
/* 0040E184 8D790004 */  lw    $t9, 4($t3)
/* 0040E188 8CF8FFF4 */  lw    $t8, -0xc($a3)
/* 0040E18C 256B0010 */  addiu $t3, $t3, 0x10
/* 0040E190 03207027 */  not   $t6, $t9
/* 0040E194 8D990004 */  lw    $t9, 4($t4)
/* 0040E198 030E7824 */  and   $t7, $t8, $t6
/* 0040E19C 258C0010 */  addiu $t4, $t4, 0x10
/* 0040E1A0 0320C027 */  not   $t8, $t9
/* 0040E1A4 8CD9FFF4 */  lw    $t9, -0xc($a2)
/* 0040E1A8 01F87024 */  and   $t6, $t7, $t8
/* 0040E1AC 032E7825 */  or    $t7, $t9, $t6
/* 0040E1B0 ACCFFFF4 */  sw    $t7, -0xc($a2)
/* 0040E1B4 8D79FFF8 */  lw    $t9, -8($t3)
/* 0040E1B8 8CF8FFF8 */  lw    $t8, -8($a3)
/* 0040E1BC 03207027 */  not   $t6, $t9
/* 0040E1C0 8D99FFF8 */  lw    $t9, -8($t4)
/* 0040E1C4 030E7824 */  and   $t7, $t8, $t6
/* 0040E1C8 0320C027 */  not   $t8, $t9
/* 0040E1CC 8CD9FFF8 */  lw    $t9, -8($a2)
/* 0040E1D0 01F87024 */  and   $t6, $t7, $t8
/* 0040E1D4 032E7825 */  or    $t7, $t9, $t6
/* 0040E1D8 ACCFFFF8 */  sw    $t7, -8($a2)
/* 0040E1DC 8D79FFFC */  lw    $t9, -4($t3)
/* 0040E1E0 8CF8FFFC */  lw    $t8, -4($a3)
/* 0040E1E4 03207027 */  not   $t6, $t9
/* 0040E1E8 8D99FFFC */  lw    $t9, -4($t4)
/* 0040E1EC 030E7824 */  and   $t7, $t8, $t6
/* 0040E1F0 0320C027 */  not   $t8, $t9
/* 0040E1F4 8CD9FFFC */  lw    $t9, -4($a2)
/* 0040E1F8 01F87024 */  and   $t6, $t7, $t8
/* 0040E1FC 032E7825 */  or    $t7, $t9, $t6
/* 0040E200 15A4FFD3 */  bne   $t5, $a0, .L0040E150
/* 0040E204 ACCFFFFC */   sw    $t7, -4($a2)
/* 0040E208 108A00AB */  beq   $a0, $t2, .L0040E4B8
.L0040E20C:
/* 0040E20C 00042900 */   sll   $a1, $a0, 4
/* 0040E210 00453021 */  addu  $a2, $v0, $a1
/* 0040E214 00653821 */  addu  $a3, $v1, $a1
/* 0040E218 01055821 */  addu  $t3, $t0, $a1
/* 0040E21C 01256021 */  addu  $t4, $t1, $a1
.L0040E220:
/* 0040E220 8D790000 */  lw    $t9, ($t3)
/* 0040E224 8CF80000 */  lw    $t8, ($a3)
/* 0040E228 24840004 */  addiu $a0, $a0, 4
/* 0040E22C 03207027 */  not   $t6, $t9
/* 0040E230 8D990000 */  lw    $t9, ($t4)
/* 0040E234 030E7824 */  and   $t7, $t8, $t6
/* 0040E238 24C60040 */  addiu $a2, $a2, 0x40
/* 0040E23C 0320C027 */  not   $t8, $t9
/* 0040E240 8CD9FFC0 */  lw    $t9, -0x40($a2)
/* 0040E244 01F87024 */  and   $t6, $t7, $t8
/* 0040E248 24E70040 */  addiu $a3, $a3, 0x40
/* 0040E24C 032E7825 */  or    $t7, $t9, $t6
/* 0040E250 ACCFFFC0 */  sw    $t7, -0x40($a2)
/* 0040E254 8D790004 */  lw    $t9, 4($t3)
/* 0040E258 8CF8FFC4 */  lw    $t8, -0x3c($a3)
/* 0040E25C 256B0040 */  addiu $t3, $t3, 0x40
/* 0040E260 03207027 */  not   $t6, $t9
/* 0040E264 8D990004 */  lw    $t9, 4($t4)
/* 0040E268 030E7824 */  and   $t7, $t8, $t6
/* 0040E26C 258C0040 */  addiu $t4, $t4, 0x40
/* 0040E270 0320C027 */  not   $t8, $t9
/* 0040E274 8CD9FFC4 */  lw    $t9, -0x3c($a2)
/* 0040E278 01F87024 */  and   $t6, $t7, $t8
/* 0040E27C 032E7825 */  or    $t7, $t9, $t6
/* 0040E280 ACCFFFC4 */  sw    $t7, -0x3c($a2)
/* 0040E284 8D79FFC8 */  lw    $t9, -0x38($t3)
/* 0040E288 8CF8FFC8 */  lw    $t8, -0x38($a3)
/* 0040E28C 03207027 */  not   $t6, $t9
/* 0040E290 8D99FFC8 */  lw    $t9, -0x38($t4)
/* 0040E294 030E7824 */  and   $t7, $t8, $t6
/* 0040E298 0320C027 */  not   $t8, $t9
/* 0040E29C 8CD9FFC8 */  lw    $t9, -0x38($a2)
/* 0040E2A0 01F87024 */  and   $t6, $t7, $t8
/* 0040E2A4 032E7825 */  or    $t7, $t9, $t6
/* 0040E2A8 ACCFFFC8 */  sw    $t7, -0x38($a2)
/* 0040E2AC 8D79FFCC */  lw    $t9, -0x34($t3)
/* 0040E2B0 8CF8FFCC */  lw    $t8, -0x34($a3)
/* 0040E2B4 03207027 */  not   $t6, $t9
/* 0040E2B8 8D99FFCC */  lw    $t9, -0x34($t4)
/* 0040E2BC 030E7824 */  and   $t7, $t8, $t6
/* 0040E2C0 0320C027 */  not   $t8, $t9
/* 0040E2C4 8CD9FFCC */  lw    $t9, -0x34($a2)
/* 0040E2C8 01F87024 */  and   $t6, $t7, $t8
/* 0040E2CC 032E7825 */  or    $t7, $t9, $t6
/* 0040E2D0 ACCFFFCC */  sw    $t7, -0x34($a2)
/* 0040E2D4 8D79FFD0 */  lw    $t9, -0x30($t3)
/* 0040E2D8 8CF8FFD0 */  lw    $t8, -0x30($a3)
/* 0040E2DC 03207027 */  not   $t6, $t9
/* 0040E2E0 8D99FFD0 */  lw    $t9, -0x30($t4)
/* 0040E2E4 030E7824 */  and   $t7, $t8, $t6
/* 0040E2E8 0320C027 */  not   $t8, $t9
/* 0040E2EC 8CD9FFD0 */  lw    $t9, -0x30($a2)
/* 0040E2F0 01F87024 */  and   $t6, $t7, $t8
/* 0040E2F4 032E7825 */  or    $t7, $t9, $t6
/* 0040E2F8 ACCFFFD0 */  sw    $t7, -0x30($a2)
/* 0040E2FC 8D79FFD4 */  lw    $t9, -0x2c($t3)
/* 0040E300 8CF8FFD4 */  lw    $t8, -0x2c($a3)
/* 0040E304 03207027 */  not   $t6, $t9
/* 0040E308 8D99FFD4 */  lw    $t9, -0x2c($t4)
/* 0040E30C 030E7824 */  and   $t7, $t8, $t6
/* 0040E310 0320C027 */  not   $t8, $t9
/* 0040E314 8CD9FFD4 */  lw    $t9, -0x2c($a2)
/* 0040E318 01F87024 */  and   $t6, $t7, $t8
/* 0040E31C 032E7825 */  or    $t7, $t9, $t6
/* 0040E320 ACCFFFD4 */  sw    $t7, -0x2c($a2)
/* 0040E324 8D79FFD8 */  lw    $t9, -0x28($t3)
/* 0040E328 8CF8FFD8 */  lw    $t8, -0x28($a3)
/* 0040E32C 03207027 */  not   $t6, $t9
/* 0040E330 8D99FFD8 */  lw    $t9, -0x28($t4)
/* 0040E334 030E7824 */  and   $t7, $t8, $t6
/* 0040E338 0320C027 */  not   $t8, $t9
/* 0040E33C 8CD9FFD8 */  lw    $t9, -0x28($a2)
/* 0040E340 01F87024 */  and   $t6, $t7, $t8
/* 0040E344 032E7825 */  or    $t7, $t9, $t6
/* 0040E348 ACCFFFD8 */  sw    $t7, -0x28($a2)
/* 0040E34C 8D79FFDC */  lw    $t9, -0x24($t3)
/* 0040E350 8CF8FFDC */  lw    $t8, -0x24($a3)
/* 0040E354 03207027 */  not   $t6, $t9
/* 0040E358 8D99FFDC */  lw    $t9, -0x24($t4)
/* 0040E35C 030E7824 */  and   $t7, $t8, $t6
/* 0040E360 0320C027 */  not   $t8, $t9
/* 0040E364 8CD9FFDC */  lw    $t9, -0x24($a2)
/* 0040E368 01F87024 */  and   $t6, $t7, $t8
/* 0040E36C 032E7825 */  or    $t7, $t9, $t6
/* 0040E370 ACCFFFDC */  sw    $t7, -0x24($a2)
/* 0040E374 8D79FFE0 */  lw    $t9, -0x20($t3)
/* 0040E378 8CF8FFE0 */  lw    $t8, -0x20($a3)
/* 0040E37C 03207027 */  not   $t6, $t9
/* 0040E380 8D99FFE0 */  lw    $t9, -0x20($t4)
/* 0040E384 030E7824 */  and   $t7, $t8, $t6
/* 0040E388 0320C027 */  not   $t8, $t9
/* 0040E38C 8CD9FFE0 */  lw    $t9, -0x20($a2)
/* 0040E390 01F87024 */  and   $t6, $t7, $t8
/* 0040E394 032E7825 */  or    $t7, $t9, $t6
/* 0040E398 ACCFFFE0 */  sw    $t7, -0x20($a2)
/* 0040E39C 8D79FFE4 */  lw    $t9, -0x1c($t3)
/* 0040E3A0 8CF8FFE4 */  lw    $t8, -0x1c($a3)
/* 0040E3A4 03207027 */  not   $t6, $t9
/* 0040E3A8 8D99FFE4 */  lw    $t9, -0x1c($t4)
/* 0040E3AC 030E7824 */  and   $t7, $t8, $t6
/* 0040E3B0 0320C027 */  not   $t8, $t9
/* 0040E3B4 8CD9FFE4 */  lw    $t9, -0x1c($a2)
/* 0040E3B8 01F87024 */  and   $t6, $t7, $t8
/* 0040E3BC 032E7825 */  or    $t7, $t9, $t6
/* 0040E3C0 ACCFFFE4 */  sw    $t7, -0x1c($a2)
/* 0040E3C4 8D79FFE8 */  lw    $t9, -0x18($t3)
/* 0040E3C8 8CF8FFE8 */  lw    $t8, -0x18($a3)
/* 0040E3CC 03207027 */  not   $t6, $t9
/* 0040E3D0 8D99FFE8 */  lw    $t9, -0x18($t4)
/* 0040E3D4 030E7824 */  and   $t7, $t8, $t6
/* 0040E3D8 0320C027 */  not   $t8, $t9
/* 0040E3DC 8CD9FFE8 */  lw    $t9, -0x18($a2)
/* 0040E3E0 01F87024 */  and   $t6, $t7, $t8
/* 0040E3E4 032E7825 */  or    $t7, $t9, $t6
/* 0040E3E8 ACCFFFE8 */  sw    $t7, -0x18($a2)
/* 0040E3EC 8D79FFEC */  lw    $t9, -0x14($t3)
/* 0040E3F0 8CF8FFEC */  lw    $t8, -0x14($a3)
/* 0040E3F4 03207027 */  not   $t6, $t9
/* 0040E3F8 8D99FFEC */  lw    $t9, -0x14($t4)
/* 0040E3FC 030E7824 */  and   $t7, $t8, $t6
/* 0040E400 0320C027 */  not   $t8, $t9
/* 0040E404 8CD9FFEC */  lw    $t9, -0x14($a2)
/* 0040E408 01F87024 */  and   $t6, $t7, $t8
/* 0040E40C 032E7825 */  or    $t7, $t9, $t6
/* 0040E410 ACCFFFEC */  sw    $t7, -0x14($a2)
/* 0040E414 8D79FFF0 */  lw    $t9, -0x10($t3)
/* 0040E418 8CF8FFF0 */  lw    $t8, -0x10($a3)
/* 0040E41C 03207027 */  not   $t6, $t9
/* 0040E420 8D99FFF0 */  lw    $t9, -0x10($t4)
/* 0040E424 030E7824 */  and   $t7, $t8, $t6
/* 0040E428 0320C027 */  not   $t8, $t9
/* 0040E42C 8CD9FFF0 */  lw    $t9, -0x10($a2)
/* 0040E430 01F87024 */  and   $t6, $t7, $t8
/* 0040E434 032E7825 */  or    $t7, $t9, $t6
/* 0040E438 ACCFFFF0 */  sw    $t7, -0x10($a2)
/* 0040E43C 8D79FFF4 */  lw    $t9, -0xc($t3)
/* 0040E440 8CF8FFF4 */  lw    $t8, -0xc($a3)
/* 0040E444 03207027 */  not   $t6, $t9
/* 0040E448 8D99FFF4 */  lw    $t9, -0xc($t4)
/* 0040E44C 030E7824 */  and   $t7, $t8, $t6
/* 0040E450 0320C027 */  not   $t8, $t9
/* 0040E454 8CD9FFF4 */  lw    $t9, -0xc($a2)
/* 0040E458 01F87024 */  and   $t6, $t7, $t8
/* 0040E45C 032E7825 */  or    $t7, $t9, $t6
/* 0040E460 ACCFFFF4 */  sw    $t7, -0xc($a2)
/* 0040E464 8D79FFF8 */  lw    $t9, -8($t3)
/* 0040E468 8CF8FFF8 */  lw    $t8, -8($a3)
/* 0040E46C 03207027 */  not   $t6, $t9
/* 0040E470 8D99FFF8 */  lw    $t9, -8($t4)
/* 0040E474 030E7824 */  and   $t7, $t8, $t6
/* 0040E478 0320C027 */  not   $t8, $t9
/* 0040E47C 8CD9FFF8 */  lw    $t9, -8($a2)
/* 0040E480 01F87024 */  and   $t6, $t7, $t8
/* 0040E484 032E7825 */  or    $t7, $t9, $t6
/* 0040E488 ACCFFFF8 */  sw    $t7, -8($a2)
/* 0040E48C 8D79FFFC */  lw    $t9, -4($t3)
/* 0040E490 8CF8FFFC */  lw    $t8, -4($a3)
/* 0040E494 03207027 */  not   $t6, $t9
/* 0040E498 8D99FFFC */  lw    $t9, -4($t4)
/* 0040E49C 030E7824 */  and   $t7, $t8, $t6
/* 0040E4A0 0320C027 */  not   $t8, $t9
/* 0040E4A4 8CD9FFFC */  lw    $t9, -4($a2)
/* 0040E4A8 01F87024 */  and   $t6, $t7, $t8
/* 0040E4AC 032E7825 */  or    $t7, $t9, $t6
/* 0040E4B0 148AFF5B */  bne   $a0, $t2, .L0040E220
/* 0040E4B4 ACCFFFFC */   sw    $t7, -4($a2)
.L0040E4B8:
/* 0040E4B8 03E00008 */  jr    $ra
/* 0040E4BC 27BD0038 */   addiu $sp, $sp, 0x38
    .type uminusminus, @function
    .size uminusminus, .-uminusminus
    .end uminusminus

glabel bvectglop
    .ent bvectglop
    # 00410204 codemotion
    # 004175BC copypropagate
    # 004324F4 findinduct
    # 00479DC4 eliminduct
/* 0040E4C0 8C8A0000 */  lw    $t2, ($a0)
/* 0040E4C4 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 0040E4C8 8C820004 */  lw    $v0, 4($a0)
/* 0040E4CC 254AFFFF */  addiu $t2, $t2, -1
/* 0040E4D0 8CA30004 */  lw    $v1, 4($a1)
/* 0040E4D4 8CC80004 */  lw    $t0, 4($a2)
/* 0040E4D8 054000AA */  bltz  $t2, .L0040E784
/* 0040E4DC 8CE90004 */   lw    $t1, 4($a3)
/* 0040E4E0 254A0001 */  addiu $t2, $t2, 1
/* 0040E4E4 314E0003 */  andi  $t6, $t2, 3
/* 0040E4E8 AFAE0004 */  sw    $t6, 4($sp)
/* 0040E4EC 11C0002A */  beqz  $t6, .L0040E598
/* 0040E4F0 00002025 */   move  $a0, $zero
/* 0040E4F4 00002900 */  sll   $a1, $zero, 4
/* 0040E4F8 00453021 */  addu  $a2, $v0, $a1
/* 0040E4FC 00653821 */  addu  $a3, $v1, $a1
/* 0040E500 01055821 */  addu  $t3, $t0, $a1
/* 0040E504 01256021 */  addu  $t4, $t1, $a1
/* 0040E508 01C06825 */  move  $t5, $t6
.L0040E50C:
/* 0040E50C 8D990000 */  lw    $t9, ($t4)
/* 0040E510 8D780000 */  lw    $t8, ($t3)
/* 0040E514 24840001 */  addiu $a0, $a0, 1
/* 0040E518 03207027 */  not   $t6, $t9
/* 0040E51C 8CF90000 */  lw    $t9, ($a3)
/* 0040E520 030E7824 */  and   $t7, $t8, $t6
/* 0040E524 24C60010 */  addiu $a2, $a2, 0x10
/* 0040E528 032FC025 */  or    $t8, $t9, $t7
/* 0040E52C ACD8FFF0 */  sw    $t8, -0x10($a2)
/* 0040E530 8D990004 */  lw    $t9, 4($t4)
/* 0040E534 8D6E0004 */  lw    $t6, 4($t3)
/* 0040E538 24E70010 */  addiu $a3, $a3, 0x10
/* 0040E53C 03207827 */  not   $t7, $t9
/* 0040E540 8CF9FFF4 */  lw    $t9, -0xc($a3)
/* 0040E544 01CFC024 */  and   $t8, $t6, $t7
/* 0040E548 256B0010 */  addiu $t3, $t3, 0x10
/* 0040E54C 03387025 */  or    $t6, $t9, $t8
/* 0040E550 ACCEFFF4 */  sw    $t6, -0xc($a2)
/* 0040E554 8D990008 */  lw    $t9, 8($t4)
/* 0040E558 8D6FFFF8 */  lw    $t7, -8($t3)
/* 0040E55C 258C0010 */  addiu $t4, $t4, 0x10
/* 0040E560 0320C027 */  not   $t8, $t9
/* 0040E564 8CF9FFF8 */  lw    $t9, -8($a3)
/* 0040E568 01F87024 */  and   $t6, $t7, $t8
/* 0040E56C 032E7825 */  or    $t7, $t9, $t6
/* 0040E570 ACCFFFF8 */  sw    $t7, -8($a2)
/* 0040E574 8D99FFFC */  lw    $t9, -4($t4)
/* 0040E578 8D78FFFC */  lw    $t8, -4($t3)
/* 0040E57C 03207027 */  not   $t6, $t9
/* 0040E580 8CF9FFFC */  lw    $t9, -4($a3)
/* 0040E584 030E7824 */  and   $t7, $t8, $t6
/* 0040E588 032FC025 */  or    $t8, $t9, $t7
/* 0040E58C 15A4FFDF */  bne   $t5, $a0, .L0040E50C
/* 0040E590 ACD8FFFC */   sw    $t8, -4($a2)
/* 0040E594 108A007B */  beq   $a0, $t2, .L0040E784
.L0040E598:
/* 0040E598 00042900 */   sll   $a1, $a0, 4
/* 0040E59C 00453021 */  addu  $a2, $v0, $a1
/* 0040E5A0 00653821 */  addu  $a3, $v1, $a1
/* 0040E5A4 01055821 */  addu  $t3, $t0, $a1
/* 0040E5A8 01256021 */  addu  $t4, $t1, $a1
.L0040E5AC:
/* 0040E5AC 8D990000 */  lw    $t9, ($t4)
/* 0040E5B0 8D6E0000 */  lw    $t6, ($t3)
/* 0040E5B4 24840004 */  addiu $a0, $a0, 4
/* 0040E5B8 03207827 */  not   $t7, $t9
/* 0040E5BC 8CF90000 */  lw    $t9, ($a3)
/* 0040E5C0 01CFC024 */  and   $t8, $t6, $t7
/* 0040E5C4 24C60040 */  addiu $a2, $a2, 0x40
/* 0040E5C8 03387025 */  or    $t6, $t9, $t8
/* 0040E5CC ACCEFFC0 */  sw    $t6, -0x40($a2)
/* 0040E5D0 8D990004 */  lw    $t9, 4($t4)
/* 0040E5D4 8D6F0004 */  lw    $t7, 4($t3)
/* 0040E5D8 24E70040 */  addiu $a3, $a3, 0x40
/* 0040E5DC 0320C027 */  not   $t8, $t9
/* 0040E5E0 8CF9FFC4 */  lw    $t9, -0x3c($a3)
/* 0040E5E4 01F87024 */  and   $t6, $t7, $t8
/* 0040E5E8 256B0040 */  addiu $t3, $t3, 0x40
/* 0040E5EC 032E7825 */  or    $t7, $t9, $t6
/* 0040E5F0 ACCFFFC4 */  sw    $t7, -0x3c($a2)
/* 0040E5F4 8D990008 */  lw    $t9, 8($t4)
/* 0040E5F8 8D78FFC8 */  lw    $t8, -0x38($t3)
/* 0040E5FC 258C0040 */  addiu $t4, $t4, 0x40
/* 0040E600 03207027 */  not   $t6, $t9
/* 0040E604 8CF9FFC8 */  lw    $t9, -0x38($a3)
/* 0040E608 030E7824 */  and   $t7, $t8, $t6
/* 0040E60C 032FC025 */  or    $t8, $t9, $t7
/* 0040E610 ACD8FFC8 */  sw    $t8, -0x38($a2)
/* 0040E614 8D99FFCC */  lw    $t9, -0x34($t4)
/* 0040E618 8D6EFFCC */  lw    $t6, -0x34($t3)
/* 0040E61C 03207827 */  not   $t7, $t9
/* 0040E620 8CF9FFCC */  lw    $t9, -0x34($a3)
/* 0040E624 01CFC024 */  and   $t8, $t6, $t7
/* 0040E628 03387025 */  or    $t6, $t9, $t8
/* 0040E62C ACCEFFCC */  sw    $t6, -0x34($a2)
/* 0040E630 8D99FFD0 */  lw    $t9, -0x30($t4)
/* 0040E634 8D6FFFD0 */  lw    $t7, -0x30($t3)
/* 0040E638 0320C027 */  not   $t8, $t9
/* 0040E63C 8CF9FFD0 */  lw    $t9, -0x30($a3)
/* 0040E640 01F87024 */  and   $t6, $t7, $t8
/* 0040E644 032E7825 */  or    $t7, $t9, $t6
/* 0040E648 ACCFFFD0 */  sw    $t7, -0x30($a2)
/* 0040E64C 8D99FFD4 */  lw    $t9, -0x2c($t4)
/* 0040E650 8D78FFD4 */  lw    $t8, -0x2c($t3)
/* 0040E654 03207027 */  not   $t6, $t9
/* 0040E658 8CF9FFD4 */  lw    $t9, -0x2c($a3)
/* 0040E65C 030E7824 */  and   $t7, $t8, $t6
/* 0040E660 032FC025 */  or    $t8, $t9, $t7
/* 0040E664 ACD8FFD4 */  sw    $t8, -0x2c($a2)
/* 0040E668 8D99FFD8 */  lw    $t9, -0x28($t4)
/* 0040E66C 8D6EFFD8 */  lw    $t6, -0x28($t3)
/* 0040E670 03207827 */  not   $t7, $t9
/* 0040E674 8CF9FFD8 */  lw    $t9, -0x28($a3)
/* 0040E678 01CFC024 */  and   $t8, $t6, $t7
/* 0040E67C 03387025 */  or    $t6, $t9, $t8
/* 0040E680 ACCEFFD8 */  sw    $t6, -0x28($a2)
/* 0040E684 8D99FFDC */  lw    $t9, -0x24($t4)
/* 0040E688 8D6FFFDC */  lw    $t7, -0x24($t3)
/* 0040E68C 0320C027 */  not   $t8, $t9
/* 0040E690 8CF9FFDC */  lw    $t9, -0x24($a3)
/* 0040E694 01F87024 */  and   $t6, $t7, $t8
/* 0040E698 032E7825 */  or    $t7, $t9, $t6
/* 0040E69C ACCFFFDC */  sw    $t7, -0x24($a2)
/* 0040E6A0 8D99FFE0 */  lw    $t9, -0x20($t4)
/* 0040E6A4 8D78FFE0 */  lw    $t8, -0x20($t3)
/* 0040E6A8 03207027 */  not   $t6, $t9
/* 0040E6AC 8CF9FFE0 */  lw    $t9, -0x20($a3)
/* 0040E6B0 030E7824 */  and   $t7, $t8, $t6
/* 0040E6B4 032FC025 */  or    $t8, $t9, $t7
/* 0040E6B8 ACD8FFE0 */  sw    $t8, -0x20($a2)
/* 0040E6BC 8D99FFE4 */  lw    $t9, -0x1c($t4)
/* 0040E6C0 8D6EFFE4 */  lw    $t6, -0x1c($t3)
/* 0040E6C4 03207827 */  not   $t7, $t9
/* 0040E6C8 8CF9FFE4 */  lw    $t9, -0x1c($a3)
/* 0040E6CC 01CFC024 */  and   $t8, $t6, $t7
/* 0040E6D0 03387025 */  or    $t6, $t9, $t8
/* 0040E6D4 ACCEFFE4 */  sw    $t6, -0x1c($a2)
/* 0040E6D8 8D99FFE8 */  lw    $t9, -0x18($t4)
/* 0040E6DC 8D6FFFE8 */  lw    $t7, -0x18($t3)
/* 0040E6E0 0320C027 */  not   $t8, $t9
/* 0040E6E4 8CF9FFE8 */  lw    $t9, -0x18($a3)
/* 0040E6E8 01F87024 */  and   $t6, $t7, $t8
/* 0040E6EC 032E7825 */  or    $t7, $t9, $t6
/* 0040E6F0 ACCFFFE8 */  sw    $t7, -0x18($a2)
/* 0040E6F4 8D99FFEC */  lw    $t9, -0x14($t4)
/* 0040E6F8 8D78FFEC */  lw    $t8, -0x14($t3)
/* 0040E6FC 03207027 */  not   $t6, $t9
/* 0040E700 8CF9FFEC */  lw    $t9, -0x14($a3)
/* 0040E704 030E7824 */  and   $t7, $t8, $t6
/* 0040E708 032FC025 */  or    $t8, $t9, $t7
/* 0040E70C ACD8FFEC */  sw    $t8, -0x14($a2)
/* 0040E710 8D99FFF0 */  lw    $t9, -0x10($t4)
/* 0040E714 8D6EFFF0 */  lw    $t6, -0x10($t3)
/* 0040E718 03207827 */  not   $t7, $t9
/* 0040E71C 8CF9FFF0 */  lw    $t9, -0x10($a3)
/* 0040E720 01CFC024 */  and   $t8, $t6, $t7
/* 0040E724 03387025 */  or    $t6, $t9, $t8
/* 0040E728 ACCEFFF0 */  sw    $t6, -0x10($a2)
/* 0040E72C 8D99FFF4 */  lw    $t9, -0xc($t4)
/* 0040E730 8D6FFFF4 */  lw    $t7, -0xc($t3)
/* 0040E734 0320C027 */  not   $t8, $t9
/* 0040E738 8CF9FFF4 */  lw    $t9, -0xc($a3)
/* 0040E73C 01F87024 */  and   $t6, $t7, $t8
/* 0040E740 032E7825 */  or    $t7, $t9, $t6
/* 0040E744 ACCFFFF4 */  sw    $t7, -0xc($a2)
/* 0040E748 8D99FFF8 */  lw    $t9, -8($t4)
/* 0040E74C 8D78FFF8 */  lw    $t8, -8($t3)
/* 0040E750 03207027 */  not   $t6, $t9
/* 0040E754 8CF9FFF8 */  lw    $t9, -8($a3)
/* 0040E758 030E7824 */  and   $t7, $t8, $t6
/* 0040E75C 032FC025 */  or    $t8, $t9, $t7
/* 0040E760 ACD8FFF8 */  sw    $t8, -8($a2)
/* 0040E764 8D99FFFC */  lw    $t9, -4($t4)
/* 0040E768 8D6EFFFC */  lw    $t6, -4($t3)
/* 0040E76C 03207827 */  not   $t7, $t9
/* 0040E770 8CF9FFFC */  lw    $t9, -4($a3)
/* 0040E774 01CFC024 */  and   $t8, $t6, $t7
/* 0040E778 03387025 */  or    $t6, $t9, $t8
/* 0040E77C 148AFF8B */  bne   $a0, $t2, .L0040E5AC
/* 0040E780 ACCEFFFC */   sw    $t6, -4($a2)
.L0040E784:
/* 0040E784 03E00008 */  jr    $ra
/* 0040E788 27BD0038 */   addiu $sp, $sp, 0x38
    .type bvectglop, @function
    .size bvectglop, .-bvectglop
    .end bvectglop

glabel bvecthoistglop
    .ent bvecthoistglop
    # 004324F4 findinduct
/* 0040E78C 8C8A0000 */  lw    $t2, ($a0)
/* 0040E790 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 0040E794 8C820004 */  lw    $v0, 4($a0)
/* 0040E798 254AFFFF */  addiu $t2, $t2, -1
/* 0040E79C 8CA30004 */  lw    $v1, 4($a1)
/* 0040E7A0 8CC80004 */  lw    $t0, 4($a2)
/* 0040E7A4 054000D2 */  bltz  $t2, .L0040EAF0
/* 0040E7A8 8CE90004 */   lw    $t1, 4($a3)
/* 0040E7AC 254A0001 */  addiu $t2, $t2, 1
/* 0040E7B0 314E0003 */  andi  $t6, $t2, 3
/* 0040E7B4 AFAE0004 */  sw    $t6, 4($sp)
/* 0040E7B8 11C00032 */  beqz  $t6, .L0040E884
/* 0040E7BC 00002025 */   move  $a0, $zero
/* 0040E7C0 00002900 */  sll   $a1, $zero, 4
/* 0040E7C4 00453021 */  addu  $a2, $v0, $a1
/* 0040E7C8 00653821 */  addu  $a3, $v1, $a1
/* 0040E7CC 01055821 */  addu  $t3, $t0, $a1
/* 0040E7D0 01256021 */  addu  $t4, $t1, $a1
/* 0040E7D4 01C06825 */  move  $t5, $t6
.L0040E7D8:
/* 0040E7D8 8D990000 */  lw    $t9, ($t4)
/* 0040E7DC 8D780000 */  lw    $t8, ($t3)
/* 0040E7E0 24840001 */  addiu $a0, $a0, 1
/* 0040E7E4 03207027 */  not   $t6, $t9
/* 0040E7E8 8CF90000 */  lw    $t9, ($a3)
/* 0040E7EC 030E7824 */  and   $t7, $t8, $t6
/* 0040E7F0 8CCE0000 */  lw    $t6, ($a2)
/* 0040E7F4 032FC025 */  or    $t8, $t9, $t7
/* 0040E7F8 24C60010 */  addiu $a2, $a2, 0x10
/* 0040E7FC 01D8C824 */  and   $t9, $t6, $t8
/* 0040E800 ACD9FFF0 */  sw    $t9, -0x10($a2)
/* 0040E804 8D8E0004 */  lw    $t6, 4($t4)
/* 0040E808 8D6F0004 */  lw    $t7, 4($t3)
/* 0040E80C 24E70010 */  addiu $a3, $a3, 0x10
/* 0040E810 01C0C027 */  not   $t8, $t6
/* 0040E814 8CEEFFF4 */  lw    $t6, -0xc($a3)
/* 0040E818 01F8C824 */  and   $t9, $t7, $t8
/* 0040E81C 8CD8FFF4 */  lw    $t8, -0xc($a2)
/* 0040E820 01D97825 */  or    $t7, $t6, $t9
/* 0040E824 256B0010 */  addiu $t3, $t3, 0x10
/* 0040E828 030F7024 */  and   $t6, $t8, $t7
/* 0040E82C ACCEFFF4 */  sw    $t6, -0xc($a2)
/* 0040E830 8D980008 */  lw    $t8, 8($t4)
/* 0040E834 8D79FFF8 */  lw    $t9, -8($t3)
/* 0040E838 258C0010 */  addiu $t4, $t4, 0x10
/* 0040E83C 03007827 */  not   $t7, $t8
/* 0040E840 8CF8FFF8 */  lw    $t8, -8($a3)
/* 0040E844 032F7024 */  and   $t6, $t9, $t7
/* 0040E848 8CCFFFF8 */  lw    $t7, -8($a2)
/* 0040E84C 030EC825 */  or    $t9, $t8, $t6
/* 0040E850 01F9C024 */  and   $t8, $t7, $t9
/* 0040E854 ACD8FFF8 */  sw    $t8, -8($a2)
/* 0040E858 8D8FFFFC */  lw    $t7, -4($t4)
/* 0040E85C 8D6EFFFC */  lw    $t6, -4($t3)
/* 0040E860 01E0C827 */  not   $t9, $t7
/* 0040E864 8CEFFFFC */  lw    $t7, -4($a3)
/* 0040E868 01D9C024 */  and   $t8, $t6, $t9
/* 0040E86C 8CD9FFFC */  lw    $t9, -4($a2)
/* 0040E870 01F87025 */  or    $t6, $t7, $t8
/* 0040E874 032E7824 */  and   $t7, $t9, $t6
/* 0040E878 15A4FFD7 */  bne   $t5, $a0, .L0040E7D8
/* 0040E87C ACCFFFFC */   sw    $t7, -4($a2)
/* 0040E880 108A009B */  beq   $a0, $t2, .L0040EAF0
.L0040E884:
/* 0040E884 00042900 */   sll   $a1, $a0, 4
/* 0040E888 00453021 */  addu  $a2, $v0, $a1
/* 0040E88C 00653821 */  addu  $a3, $v1, $a1
/* 0040E890 01055821 */  addu  $t3, $t0, $a1
/* 0040E894 01256021 */  addu  $t4, $t1, $a1
.L0040E898:
/* 0040E898 8D990000 */  lw    $t9, ($t4)
/* 0040E89C 8D780000 */  lw    $t8, ($t3)
/* 0040E8A0 24840004 */  addiu $a0, $a0, 4
/* 0040E8A4 03207027 */  not   $t6, $t9
/* 0040E8A8 8CF90000 */  lw    $t9, ($a3)
/* 0040E8AC 030E7824 */  and   $t7, $t8, $t6
/* 0040E8B0 8CCE0000 */  lw    $t6, ($a2)
/* 0040E8B4 032FC025 */  or    $t8, $t9, $t7
/* 0040E8B8 24C60040 */  addiu $a2, $a2, 0x40
/* 0040E8BC 01D8C824 */  and   $t9, $t6, $t8
/* 0040E8C0 ACD9FFC0 */  sw    $t9, -0x40($a2)
/* 0040E8C4 8D8E0004 */  lw    $t6, 4($t4)
/* 0040E8C8 8D6F0004 */  lw    $t7, 4($t3)
/* 0040E8CC 24E70040 */  addiu $a3, $a3, 0x40
/* 0040E8D0 01C0C027 */  not   $t8, $t6
/* 0040E8D4 8CEEFFC4 */  lw    $t6, -0x3c($a3)
/* 0040E8D8 01F8C824 */  and   $t9, $t7, $t8
/* 0040E8DC 8CD8FFC4 */  lw    $t8, -0x3c($a2)
/* 0040E8E0 01D97825 */  or    $t7, $t6, $t9
/* 0040E8E4 256B0040 */  addiu $t3, $t3, 0x40
/* 0040E8E8 030F7024 */  and   $t6, $t8, $t7
/* 0040E8EC ACCEFFC4 */  sw    $t6, -0x3c($a2)
/* 0040E8F0 8D980008 */  lw    $t8, 8($t4)
/* 0040E8F4 8D79FFC8 */  lw    $t9, -0x38($t3)
/* 0040E8F8 258C0040 */  addiu $t4, $t4, 0x40
/* 0040E8FC 03007827 */  not   $t7, $t8
/* 0040E900 8CF8FFC8 */  lw    $t8, -0x38($a3)
/* 0040E904 032F7024 */  and   $t6, $t9, $t7
/* 0040E908 8CCFFFC8 */  lw    $t7, -0x38($a2)
/* 0040E90C 030EC825 */  or    $t9, $t8, $t6
/* 0040E910 01F9C024 */  and   $t8, $t7, $t9
/* 0040E914 ACD8FFC8 */  sw    $t8, -0x38($a2)
/* 0040E918 8D8FFFCC */  lw    $t7, -0x34($t4)
/* 0040E91C 8D6EFFCC */  lw    $t6, -0x34($t3)
/* 0040E920 01E0C827 */  not   $t9, $t7
/* 0040E924 8CEFFFCC */  lw    $t7, -0x34($a3)
/* 0040E928 01D9C024 */  and   $t8, $t6, $t9
/* 0040E92C 8CD9FFCC */  lw    $t9, -0x34($a2)
/* 0040E930 01F87025 */  or    $t6, $t7, $t8
/* 0040E934 032E7824 */  and   $t7, $t9, $t6
/* 0040E938 ACCFFFCC */  sw    $t7, -0x34($a2)
/* 0040E93C 8D99FFD0 */  lw    $t9, -0x30($t4)
/* 0040E940 8D78FFD0 */  lw    $t8, -0x30($t3)
/* 0040E944 03207027 */  not   $t6, $t9
/* 0040E948 8CF9FFD0 */  lw    $t9, -0x30($a3)
/* 0040E94C 030E7824 */  and   $t7, $t8, $t6
/* 0040E950 8CCEFFD0 */  lw    $t6, -0x30($a2)
/* 0040E954 032FC025 */  or    $t8, $t9, $t7
/* 0040E958 01D8C824 */  and   $t9, $t6, $t8
/* 0040E95C ACD9FFD0 */  sw    $t9, -0x30($a2)
/* 0040E960 8D8EFFD4 */  lw    $t6, -0x2c($t4)
/* 0040E964 8D6FFFD4 */  lw    $t7, -0x2c($t3)
/* 0040E968 01C0C027 */  not   $t8, $t6
/* 0040E96C 8CEEFFD4 */  lw    $t6, -0x2c($a3)
/* 0040E970 01F8C824 */  and   $t9, $t7, $t8
/* 0040E974 8CD8FFD4 */  lw    $t8, -0x2c($a2)
/* 0040E978 01D97825 */  or    $t7, $t6, $t9
/* 0040E97C 030F7024 */  and   $t6, $t8, $t7
/* 0040E980 ACCEFFD4 */  sw    $t6, -0x2c($a2)
/* 0040E984 8D98FFD8 */  lw    $t8, -0x28($t4)
/* 0040E988 8D79FFD8 */  lw    $t9, -0x28($t3)
/* 0040E98C 03007827 */  not   $t7, $t8
/* 0040E990 8CF8FFD8 */  lw    $t8, -0x28($a3)
/* 0040E994 032F7024 */  and   $t6, $t9, $t7
/* 0040E998 8CCFFFD8 */  lw    $t7, -0x28($a2)
/* 0040E99C 030EC825 */  or    $t9, $t8, $t6
/* 0040E9A0 01F9C024 */  and   $t8, $t7, $t9
/* 0040E9A4 ACD8FFD8 */  sw    $t8, -0x28($a2)
/* 0040E9A8 8D8FFFDC */  lw    $t7, -0x24($t4)
/* 0040E9AC 8D6EFFDC */  lw    $t6, -0x24($t3)
/* 0040E9B0 01E0C827 */  not   $t9, $t7
/* 0040E9B4 8CEFFFDC */  lw    $t7, -0x24($a3)
/* 0040E9B8 01D9C024 */  and   $t8, $t6, $t9
/* 0040E9BC 8CD9FFDC */  lw    $t9, -0x24($a2)
/* 0040E9C0 01F87025 */  or    $t6, $t7, $t8
/* 0040E9C4 032E7824 */  and   $t7, $t9, $t6
/* 0040E9C8 ACCFFFDC */  sw    $t7, -0x24($a2)
/* 0040E9CC 8D99FFE0 */  lw    $t9, -0x20($t4)
/* 0040E9D0 8D78FFE0 */  lw    $t8, -0x20($t3)
/* 0040E9D4 03207027 */  not   $t6, $t9
/* 0040E9D8 8CF9FFE0 */  lw    $t9, -0x20($a3)
/* 0040E9DC 030E7824 */  and   $t7, $t8, $t6
/* 0040E9E0 8CCEFFE0 */  lw    $t6, -0x20($a2)
/* 0040E9E4 032FC025 */  or    $t8, $t9, $t7
/* 0040E9E8 01D8C824 */  and   $t9, $t6, $t8
/* 0040E9EC ACD9FFE0 */  sw    $t9, -0x20($a2)
/* 0040E9F0 8D8EFFE4 */  lw    $t6, -0x1c($t4)
/* 0040E9F4 8D6FFFE4 */  lw    $t7, -0x1c($t3)
/* 0040E9F8 01C0C027 */  not   $t8, $t6
/* 0040E9FC 8CEEFFE4 */  lw    $t6, -0x1c($a3)
/* 0040EA00 01F8C824 */  and   $t9, $t7, $t8
/* 0040EA04 8CD8FFE4 */  lw    $t8, -0x1c($a2)
/* 0040EA08 01D97825 */  or    $t7, $t6, $t9
/* 0040EA0C 030F7024 */  and   $t6, $t8, $t7
/* 0040EA10 ACCEFFE4 */  sw    $t6, -0x1c($a2)
/* 0040EA14 8D98FFE8 */  lw    $t8, -0x18($t4)
/* 0040EA18 8D79FFE8 */  lw    $t9, -0x18($t3)
/* 0040EA1C 03007827 */  not   $t7, $t8
/* 0040EA20 8CF8FFE8 */  lw    $t8, -0x18($a3)
/* 0040EA24 032F7024 */  and   $t6, $t9, $t7
/* 0040EA28 8CCFFFE8 */  lw    $t7, -0x18($a2)
/* 0040EA2C 030EC825 */  or    $t9, $t8, $t6
/* 0040EA30 01F9C024 */  and   $t8, $t7, $t9
/* 0040EA34 ACD8FFE8 */  sw    $t8, -0x18($a2)
/* 0040EA38 8D8FFFEC */  lw    $t7, -0x14($t4)
/* 0040EA3C 8D6EFFEC */  lw    $t6, -0x14($t3)
/* 0040EA40 01E0C827 */  not   $t9, $t7
/* 0040EA44 8CEFFFEC */  lw    $t7, -0x14($a3)
/* 0040EA48 01D9C024 */  and   $t8, $t6, $t9
/* 0040EA4C 8CD9FFEC */  lw    $t9, -0x14($a2)
/* 0040EA50 01F87025 */  or    $t6, $t7, $t8
/* 0040EA54 032E7824 */  and   $t7, $t9, $t6
/* 0040EA58 ACCFFFEC */  sw    $t7, -0x14($a2)
/* 0040EA5C 8D99FFF0 */  lw    $t9, -0x10($t4)
/* 0040EA60 8D78FFF0 */  lw    $t8, -0x10($t3)
/* 0040EA64 03207027 */  not   $t6, $t9
/* 0040EA68 8CF9FFF0 */  lw    $t9, -0x10($a3)
/* 0040EA6C 030E7824 */  and   $t7, $t8, $t6
/* 0040EA70 8CCEFFF0 */  lw    $t6, -0x10($a2)
/* 0040EA74 032FC025 */  or    $t8, $t9, $t7
/* 0040EA78 01D8C824 */  and   $t9, $t6, $t8
/* 0040EA7C ACD9FFF0 */  sw    $t9, -0x10($a2)
/* 0040EA80 8D8EFFF4 */  lw    $t6, -0xc($t4)
/* 0040EA84 8D6FFFF4 */  lw    $t7, -0xc($t3)
/* 0040EA88 01C0C027 */  not   $t8, $t6
/* 0040EA8C 8CEEFFF4 */  lw    $t6, -0xc($a3)
/* 0040EA90 01F8C824 */  and   $t9, $t7, $t8
/* 0040EA94 8CD8FFF4 */  lw    $t8, -0xc($a2)
/* 0040EA98 01D97825 */  or    $t7, $t6, $t9
/* 0040EA9C 030F7024 */  and   $t6, $t8, $t7
/* 0040EAA0 ACCEFFF4 */  sw    $t6, -0xc($a2)
/* 0040EAA4 8D98FFF8 */  lw    $t8, -8($t4)
/* 0040EAA8 8D79FFF8 */  lw    $t9, -8($t3)
/* 0040EAAC 03007827 */  not   $t7, $t8
/* 0040EAB0 8CF8FFF8 */  lw    $t8, -8($a3)
/* 0040EAB4 032F7024 */  and   $t6, $t9, $t7
/* 0040EAB8 8CCFFFF8 */  lw    $t7, -8($a2)
/* 0040EABC 030EC825 */  or    $t9, $t8, $t6
/* 0040EAC0 01F9C024 */  and   $t8, $t7, $t9
/* 0040EAC4 ACD8FFF8 */  sw    $t8, -8($a2)
/* 0040EAC8 8D8FFFFC */  lw    $t7, -4($t4)
/* 0040EACC 8D6EFFFC */  lw    $t6, -4($t3)
/* 0040EAD0 01E0C827 */  not   $t9, $t7
/* 0040EAD4 8CEFFFFC */  lw    $t7, -4($a3)
/* 0040EAD8 01D9C024 */  and   $t8, $t6, $t9
/* 0040EADC 8CD9FFFC */  lw    $t9, -4($a2)
/* 0040EAE0 01F87025 */  or    $t6, $t7, $t8
/* 0040EAE4 032E7824 */  and   $t7, $t9, $t6
/* 0040EAE8 148AFF6B */  bne   $a0, $t2, .L0040E898
/* 0040EAEC ACCFFFFC */   sw    $t7, -4($a2)
.L0040EAF0:
/* 0040EAF0 03E00008 */  jr    $ra
/* 0040EAF4 27BD0038 */   addiu $sp, $sp, 0x38
    .type bvecthoistglop, @function
    .size bvecthoistglop, .-bvecthoistglop
    .end bvecthoistglop

glabel bvectpp1
    .ent bvectpp1
    # 00410204 codemotion
/* 0040EAF8 27BDFFB0 */  addiu $sp, $sp, -0x50
/* 0040EAFC AFB1000C */  sw    $s1, 0xc($sp)
/* 0040EB00 AFB00008 */  sw    $s0, 8($sp)
/* 0040EB04 8C8B0000 */  lw    $t3, ($a0)
/* 0040EB08 8FAE0060 */  lw    $t6, 0x60($sp)
/* 0040EB0C 8C820004 */  lw    $v0, 4($a0)
/* 0040EB10 256BFFFF */  addiu $t3, $t3, -1
/* 0040EB14 8CA30004 */  lw    $v1, 4($a1)
/* 0040EB18 8CC80004 */  lw    $t0, 4($a2)
/* 0040EB1C 8CE90004 */  lw    $t1, 4($a3)
/* 0040EB20 056000D6 */  bltz  $t3, .L0040EE7C
/* 0040EB24 8DCA0004 */   lw    $t2, 4($t6)
/* 0040EB28 256B0001 */  addiu $t3, $t3, 1
/* 0040EB2C 316F0003 */  andi  $t7, $t3, 3
/* 0040EB30 AFAF0014 */  sw    $t7, 0x14($sp)
/* 0040EB34 11E00034 */  beqz  $t7, .L0040EC08
/* 0040EB38 00002025 */   move  $a0, $zero
/* 0040EB3C 00002900 */  sll   $a1, $zero, 4
/* 0040EB40 00453021 */  addu  $a2, $v0, $a1
/* 0040EB44 00653821 */  addu  $a3, $v1, $a1
/* 0040EB48 01056021 */  addu  $t4, $t0, $a1
/* 0040EB4C 01456821 */  addu  $t5, $t2, $a1
/* 0040EB50 01258021 */  addu  $s0, $t1, $a1
/* 0040EB54 01E08825 */  move  $s1, $t7
.L0040EB58:
/* 0040EB58 8E0E0000 */  lw    $t6, ($s0)
/* 0040EB5C 8DB90000 */  lw    $t9, ($t5)
/* 0040EB60 24840001 */  addiu $a0, $a0, 1
/* 0040EB64 01C07827 */  not   $t7, $t6
/* 0040EB68 8D8E0000 */  lw    $t6, ($t4)
/* 0040EB6C 032FC024 */  and   $t8, $t9, $t7
/* 0040EB70 8CEF0000 */  lw    $t7, ($a3)
/* 0040EB74 01D8C825 */  or    $t9, $t6, $t8
/* 0040EB78 24C60010 */  addiu $a2, $a2, 0x10
/* 0040EB7C 01F97024 */  and   $t6, $t7, $t9
/* 0040EB80 ACCEFFF0 */  sw    $t6, -0x10($a2)
/* 0040EB84 8E0F0004 */  lw    $t7, 4($s0)
/* 0040EB88 8DB80004 */  lw    $t8, 4($t5)
/* 0040EB8C 24E70010 */  addiu $a3, $a3, 0x10
/* 0040EB90 01E0C827 */  not   $t9, $t7
/* 0040EB94 8D8F0004 */  lw    $t7, 4($t4)
/* 0040EB98 03197024 */  and   $t6, $t8, $t9
/* 0040EB9C 8CF9FFF4 */  lw    $t9, -0xc($a3)
/* 0040EBA0 01EEC025 */  or    $t8, $t7, $t6
/* 0040EBA4 258C0010 */  addiu $t4, $t4, 0x10
/* 0040EBA8 03387824 */  and   $t7, $t9, $t8
/* 0040EBAC ACCFFFF4 */  sw    $t7, -0xc($a2)
/* 0040EBB0 8E190008 */  lw    $t9, 8($s0)
/* 0040EBB4 8DAE0008 */  lw    $t6, 8($t5)
/* 0040EBB8 25AD0010 */  addiu $t5, $t5, 0x10
/* 0040EBBC 0320C027 */  not   $t8, $t9
/* 0040EBC0 8D99FFF8 */  lw    $t9, -8($t4)
/* 0040EBC4 01D87824 */  and   $t7, $t6, $t8
/* 0040EBC8 8CF8FFF8 */  lw    $t8, -8($a3)
/* 0040EBCC 032F7025 */  or    $t6, $t9, $t7
/* 0040EBD0 26100010 */  addiu $s0, $s0, 0x10
/* 0040EBD4 030EC824 */  and   $t9, $t8, $t6
/* 0040EBD8 ACD9FFF8 */  sw    $t9, -8($a2)
/* 0040EBDC 8E18FFFC */  lw    $t8, -4($s0)
/* 0040EBE0 8DAFFFFC */  lw    $t7, -4($t5)
/* 0040EBE4 03007027 */  not   $t6, $t8
/* 0040EBE8 8D98FFFC */  lw    $t8, -4($t4)
/* 0040EBEC 01EEC824 */  and   $t9, $t7, $t6
/* 0040EBF0 8CEEFFFC */  lw    $t6, -4($a3)
/* 0040EBF4 03197825 */  or    $t7, $t8, $t9
/* 0040EBF8 01CFC024 */  and   $t8, $t6, $t7
/* 0040EBFC 1624FFD6 */  bne   $s1, $a0, .L0040EB58
/* 0040EC00 ACD8FFFC */   sw    $t8, -4($a2)
/* 0040EC04 108B009D */  beq   $a0, $t3, .L0040EE7C
.L0040EC08:
/* 0040EC08 00042900 */   sll   $a1, $a0, 4
/* 0040EC0C 00453021 */  addu  $a2, $v0, $a1
/* 0040EC10 00653821 */  addu  $a3, $v1, $a1
/* 0040EC14 01056021 */  addu  $t4, $t0, $a1
/* 0040EC18 01456821 */  addu  $t5, $t2, $a1
/* 0040EC1C 01258021 */  addu  $s0, $t1, $a1
.L0040EC20:
/* 0040EC20 8E0E0000 */  lw    $t6, ($s0)
/* 0040EC24 8DB90000 */  lw    $t9, ($t5)
/* 0040EC28 24840004 */  addiu $a0, $a0, 4
/* 0040EC2C 01C07827 */  not   $t7, $t6
/* 0040EC30 8D8E0000 */  lw    $t6, ($t4)
/* 0040EC34 032FC024 */  and   $t8, $t9, $t7
/* 0040EC38 8CEF0000 */  lw    $t7, ($a3)
/* 0040EC3C 01D8C825 */  or    $t9, $t6, $t8
/* 0040EC40 24C60040 */  addiu $a2, $a2, 0x40
/* 0040EC44 01F97024 */  and   $t6, $t7, $t9
/* 0040EC48 ACCEFFC0 */  sw    $t6, -0x40($a2)
/* 0040EC4C 8E0F0004 */  lw    $t7, 4($s0)
/* 0040EC50 8DB80004 */  lw    $t8, 4($t5)
/* 0040EC54 24E70040 */  addiu $a3, $a3, 0x40
/* 0040EC58 01E0C827 */  not   $t9, $t7
/* 0040EC5C 8D8F0004 */  lw    $t7, 4($t4)
/* 0040EC60 03197024 */  and   $t6, $t8, $t9
/* 0040EC64 8CF9FFC4 */  lw    $t9, -0x3c($a3)
/* 0040EC68 01EEC025 */  or    $t8, $t7, $t6
/* 0040EC6C 258C0040 */  addiu $t4, $t4, 0x40
/* 0040EC70 03387824 */  and   $t7, $t9, $t8
/* 0040EC74 ACCFFFC4 */  sw    $t7, -0x3c($a2)
/* 0040EC78 8E190008 */  lw    $t9, 8($s0)
/* 0040EC7C 8DAE0008 */  lw    $t6, 8($t5)
/* 0040EC80 25AD0040 */  addiu $t5, $t5, 0x40
/* 0040EC84 0320C027 */  not   $t8, $t9
/* 0040EC88 8D99FFC8 */  lw    $t9, -0x38($t4)
/* 0040EC8C 01D87824 */  and   $t7, $t6, $t8
/* 0040EC90 8CF8FFC8 */  lw    $t8, -0x38($a3)
/* 0040EC94 032F7025 */  or    $t6, $t9, $t7
/* 0040EC98 26100040 */  addiu $s0, $s0, 0x40
/* 0040EC9C 030EC824 */  and   $t9, $t8, $t6
/* 0040ECA0 ACD9FFC8 */  sw    $t9, -0x38($a2)
/* 0040ECA4 8E18FFCC */  lw    $t8, -0x34($s0)
/* 0040ECA8 8DAFFFCC */  lw    $t7, -0x34($t5)
/* 0040ECAC 03007027 */  not   $t6, $t8
/* 0040ECB0 8D98FFCC */  lw    $t8, -0x34($t4)
/* 0040ECB4 01EEC824 */  and   $t9, $t7, $t6
/* 0040ECB8 8CEEFFCC */  lw    $t6, -0x34($a3)
/* 0040ECBC 03197825 */  or    $t7, $t8, $t9
/* 0040ECC0 01CFC024 */  and   $t8, $t6, $t7
/* 0040ECC4 ACD8FFCC */  sw    $t8, -0x34($a2)
/* 0040ECC8 8E0EFFD0 */  lw    $t6, -0x30($s0)
/* 0040ECCC 8DB9FFD0 */  lw    $t9, -0x30($t5)
/* 0040ECD0 01C07827 */  not   $t7, $t6
/* 0040ECD4 8D8EFFD0 */  lw    $t6, -0x30($t4)
/* 0040ECD8 032FC024 */  and   $t8, $t9, $t7
/* 0040ECDC 8CEFFFD0 */  lw    $t7, -0x30($a3)
/* 0040ECE0 01D8C825 */  or    $t9, $t6, $t8
/* 0040ECE4 01F97024 */  and   $t6, $t7, $t9
/* 0040ECE8 ACCEFFD0 */  sw    $t6, -0x30($a2)
/* 0040ECEC 8E0FFFD4 */  lw    $t7, -0x2c($s0)
/* 0040ECF0 8DB8FFD4 */  lw    $t8, -0x2c($t5)
/* 0040ECF4 01E0C827 */  not   $t9, $t7
/* 0040ECF8 8D8FFFD4 */  lw    $t7, -0x2c($t4)
/* 0040ECFC 03197024 */  and   $t6, $t8, $t9
/* 0040ED00 8CF9FFD4 */  lw    $t9, -0x2c($a3)
/* 0040ED04 01EEC025 */  or    $t8, $t7, $t6
/* 0040ED08 03387824 */  and   $t7, $t9, $t8
/* 0040ED0C ACCFFFD4 */  sw    $t7, -0x2c($a2)
/* 0040ED10 8E19FFD8 */  lw    $t9, -0x28($s0)
/* 0040ED14 8DAEFFD8 */  lw    $t6, -0x28($t5)
/* 0040ED18 0320C027 */  not   $t8, $t9
/* 0040ED1C 8D99FFD8 */  lw    $t9, -0x28($t4)
/* 0040ED20 01D87824 */  and   $t7, $t6, $t8
/* 0040ED24 8CF8FFD8 */  lw    $t8, -0x28($a3)
/* 0040ED28 032F7025 */  or    $t6, $t9, $t7
/* 0040ED2C 030EC824 */  and   $t9, $t8, $t6
/* 0040ED30 ACD9FFD8 */  sw    $t9, -0x28($a2)
/* 0040ED34 8E18FFDC */  lw    $t8, -0x24($s0)
/* 0040ED38 8DAFFFDC */  lw    $t7, -0x24($t5)
/* 0040ED3C 03007027 */  not   $t6, $t8
/* 0040ED40 8D98FFDC */  lw    $t8, -0x24($t4)
/* 0040ED44 01EEC824 */  and   $t9, $t7, $t6
/* 0040ED48 8CEEFFDC */  lw    $t6, -0x24($a3)
/* 0040ED4C 03197825 */  or    $t7, $t8, $t9
/* 0040ED50 01CFC024 */  and   $t8, $t6, $t7
/* 0040ED54 ACD8FFDC */  sw    $t8, -0x24($a2)
/* 0040ED58 8E0EFFE0 */  lw    $t6, -0x20($s0)
/* 0040ED5C 8DB9FFE0 */  lw    $t9, -0x20($t5)
/* 0040ED60 01C07827 */  not   $t7, $t6
/* 0040ED64 8D8EFFE0 */  lw    $t6, -0x20($t4)
/* 0040ED68 032FC024 */  and   $t8, $t9, $t7
/* 0040ED6C 8CEFFFE0 */  lw    $t7, -0x20($a3)
/* 0040ED70 01D8C825 */  or    $t9, $t6, $t8
/* 0040ED74 01F97024 */  and   $t6, $t7, $t9
/* 0040ED78 ACCEFFE0 */  sw    $t6, -0x20($a2)
/* 0040ED7C 8E0FFFE4 */  lw    $t7, -0x1c($s0)
/* 0040ED80 8DB8FFE4 */  lw    $t8, -0x1c($t5)
/* 0040ED84 01E0C827 */  not   $t9, $t7
/* 0040ED88 8D8FFFE4 */  lw    $t7, -0x1c($t4)
/* 0040ED8C 03197024 */  and   $t6, $t8, $t9
/* 0040ED90 8CF9FFE4 */  lw    $t9, -0x1c($a3)
/* 0040ED94 01EEC025 */  or    $t8, $t7, $t6
/* 0040ED98 03387824 */  and   $t7, $t9, $t8
/* 0040ED9C ACCFFFE4 */  sw    $t7, -0x1c($a2)
/* 0040EDA0 8E19FFE8 */  lw    $t9, -0x18($s0)
/* 0040EDA4 8DAEFFE8 */  lw    $t6, -0x18($t5)
/* 0040EDA8 0320C027 */  not   $t8, $t9
/* 0040EDAC 8D99FFE8 */  lw    $t9, -0x18($t4)
/* 0040EDB0 01D87824 */  and   $t7, $t6, $t8
/* 0040EDB4 8CF8FFE8 */  lw    $t8, -0x18($a3)
/* 0040EDB8 032F7025 */  or    $t6, $t9, $t7
/* 0040EDBC 030EC824 */  and   $t9, $t8, $t6
/* 0040EDC0 ACD9FFE8 */  sw    $t9, -0x18($a2)
/* 0040EDC4 8E18FFEC */  lw    $t8, -0x14($s0)
/* 0040EDC8 8DAFFFEC */  lw    $t7, -0x14($t5)
/* 0040EDCC 03007027 */  not   $t6, $t8
/* 0040EDD0 8D98FFEC */  lw    $t8, -0x14($t4)
/* 0040EDD4 01EEC824 */  and   $t9, $t7, $t6
/* 0040EDD8 8CEEFFEC */  lw    $t6, -0x14($a3)
/* 0040EDDC 03197825 */  or    $t7, $t8, $t9
/* 0040EDE0 01CFC024 */  and   $t8, $t6, $t7
/* 0040EDE4 ACD8FFEC */  sw    $t8, -0x14($a2)
/* 0040EDE8 8E0EFFF0 */  lw    $t6, -0x10($s0)
/* 0040EDEC 8DB9FFF0 */  lw    $t9, -0x10($t5)
/* 0040EDF0 01C07827 */  not   $t7, $t6
/* 0040EDF4 8D8EFFF0 */  lw    $t6, -0x10($t4)
/* 0040EDF8 032FC024 */  and   $t8, $t9, $t7
/* 0040EDFC 8CEFFFF0 */  lw    $t7, -0x10($a3)
/* 0040EE00 01D8C825 */  or    $t9, $t6, $t8
/* 0040EE04 01F97024 */  and   $t6, $t7, $t9
/* 0040EE08 ACCEFFF0 */  sw    $t6, -0x10($a2)
/* 0040EE0C 8E0FFFF4 */  lw    $t7, -0xc($s0)
/* 0040EE10 8DB8FFF4 */  lw    $t8, -0xc($t5)
/* 0040EE14 01E0C827 */  not   $t9, $t7
/* 0040EE18 8D8FFFF4 */  lw    $t7, -0xc($t4)
/* 0040EE1C 03197024 */  and   $t6, $t8, $t9
/* 0040EE20 8CF9FFF4 */  lw    $t9, -0xc($a3)
/* 0040EE24 01EEC025 */  or    $t8, $t7, $t6
/* 0040EE28 03387824 */  and   $t7, $t9, $t8
/* 0040EE2C ACCFFFF4 */  sw    $t7, -0xc($a2)
/* 0040EE30 8E19FFF8 */  lw    $t9, -8($s0)
/* 0040EE34 8DAEFFF8 */  lw    $t6, -8($t5)
/* 0040EE38 0320C027 */  not   $t8, $t9
/* 0040EE3C 8D99FFF8 */  lw    $t9, -8($t4)
/* 0040EE40 01D87824 */  and   $t7, $t6, $t8
/* 0040EE44 8CF8FFF8 */  lw    $t8, -8($a3)
/* 0040EE48 032F7025 */  or    $t6, $t9, $t7
/* 0040EE4C 030EC824 */  and   $t9, $t8, $t6
/* 0040EE50 ACD9FFF8 */  sw    $t9, -8($a2)
/* 0040EE54 8E18FFFC */  lw    $t8, -4($s0)
/* 0040EE58 8DAFFFFC */  lw    $t7, -4($t5)
/* 0040EE5C 03007027 */  not   $t6, $t8
/* 0040EE60 8D98FFFC */  lw    $t8, -4($t4)
/* 0040EE64 01EEC824 */  and   $t9, $t7, $t6
/* 0040EE68 8CEEFFFC */  lw    $t6, -4($a3)
/* 0040EE6C 03197825 */  or    $t7, $t8, $t9
/* 0040EE70 01CFC024 */  and   $t8, $t6, $t7
/* 0040EE74 148BFF6A */  bne   $a0, $t3, .L0040EC20
/* 0040EE78 ACD8FFFC */   sw    $t8, -4($a2)
.L0040EE7C:
/* 0040EE7C 8FB00008 */  lw    $s0, 8($sp)
/* 0040EE80 8FB1000C */  lw    $s1, 0xc($sp)
/* 0040EE84 03E00008 */  jr    $ra
/* 0040EE88 27BD0050 */   addiu $sp, $sp, 0x50
    .type bvectpp1, @function
    .size bvectpp1, .-bvectpp1
    .end bvectpp1

glabel bvectpp2
    .ent bvectpp2
    # 00410204 codemotion
/* 0040EE8C 8C880000 */  lw    $t0, ($a0)
/* 0040EE90 8C820004 */  lw    $v0, 4($a0)
/* 0040EE94 8CA30004 */  lw    $v1, 4($a1)
/* 0040EE98 2508FFFF */  addiu $t0, $t0, -1
/* 0040EE9C 05000091 */  bltz  $t0, .L0040F0E4
/* 0040EEA0 8CC70004 */   lw    $a3, 4($a2)
/* 0040EEA4 25080001 */  addiu $t0, $t0, 1
/* 0040EEA8 310C0003 */  andi  $t4, $t0, 3
/* 0040EEAC 11800024 */  beqz  $t4, .L0040EF40
/* 0040EEB0 00002025 */   move  $a0, $zero
/* 0040EEB4 00002900 */  sll   $a1, $zero, 4
/* 0040EEB8 00453021 */  addu  $a2, $v0, $a1
/* 0040EEBC 00654821 */  addu  $t1, $v1, $a1
/* 0040EEC0 00E55021 */  addu  $t2, $a3, $a1
/* 0040EEC4 01805825 */  move  $t3, $t4
.L0040EEC8:
/* 0040EEC8 8D2E0000 */  lw    $t6, ($t1)
/* 0040EECC 8D4F0000 */  lw    $t7, ($t2)
/* 0040EED0 8CD90000 */  lw    $t9, ($a2)
/* 0040EED4 24840001 */  addiu $a0, $a0, 1
/* 0040EED8 01CFC025 */  or    $t8, $t6, $t7
/* 0040EEDC 03386824 */  and   $t5, $t9, $t8
/* 0040EEE0 ACCD0000 */  sw    $t5, ($a2)
/* 0040EEE4 8D4F0004 */  lw    $t7, 4($t2)
/* 0040EEE8 8D2E0004 */  lw    $t6, 4($t1)
/* 0040EEEC 8CD80004 */  lw    $t8, 4($a2)
/* 0040EEF0 24C60010 */  addiu $a2, $a2, 0x10
/* 0040EEF4 01CFC825 */  or    $t9, $t6, $t7
/* 0040EEF8 03196824 */  and   $t5, $t8, $t9
/* 0040EEFC ACCDFFF4 */  sw    $t5, -0xc($a2)
/* 0040EF00 8D4F0008 */  lw    $t7, 8($t2)
/* 0040EF04 8D2E0008 */  lw    $t6, 8($t1)
/* 0040EF08 8CD9FFF8 */  lw    $t9, -8($a2)
/* 0040EF0C 25290010 */  addiu $t1, $t1, 0x10
/* 0040EF10 01CFC025 */  or    $t8, $t6, $t7
/* 0040EF14 03386824 */  and   $t5, $t9, $t8
/* 0040EF18 ACCDFFF8 */  sw    $t5, -8($a2)
/* 0040EF1C 8D4F000C */  lw    $t7, 0xc($t2)
/* 0040EF20 8D2EFFFC */  lw    $t6, -4($t1)
/* 0040EF24 8CD8FFFC */  lw    $t8, -4($a2)
/* 0040EF28 254A0010 */  addiu $t2, $t2, 0x10
/* 0040EF2C 01CFC825 */  or    $t9, $t6, $t7
/* 0040EF30 03196824 */  and   $t5, $t8, $t9
/* 0040EF34 1564FFE4 */  bne   $t3, $a0, .L0040EEC8
/* 0040EF38 ACCDFFFC */   sw    $t5, -4($a2)
/* 0040EF3C 10880069 */  beq   $a0, $t0, .L0040F0E4
.L0040EF40:
/* 0040EF40 00042900 */   sll   $a1, $a0, 4
/* 0040EF44 00453021 */  addu  $a2, $v0, $a1
/* 0040EF48 00654821 */  addu  $t1, $v1, $a1
/* 0040EF4C 00E55021 */  addu  $t2, $a3, $a1
.L0040EF50:
/* 0040EF50 8D2E0000 */  lw    $t6, ($t1)
/* 0040EF54 8D4F0000 */  lw    $t7, ($t2)
/* 0040EF58 8CD90000 */  lw    $t9, ($a2)
/* 0040EF5C 24840004 */  addiu $a0, $a0, 4
/* 0040EF60 01CFC025 */  or    $t8, $t6, $t7
/* 0040EF64 03386824 */  and   $t5, $t9, $t8
/* 0040EF68 ACCD0000 */  sw    $t5, ($a2)
/* 0040EF6C 8D4F0004 */  lw    $t7, 4($t2)
/* 0040EF70 8D2E0004 */  lw    $t6, 4($t1)
/* 0040EF74 8CD80004 */  lw    $t8, 4($a2)
/* 0040EF78 24C60040 */  addiu $a2, $a2, 0x40
/* 0040EF7C 01CFC825 */  or    $t9, $t6, $t7
/* 0040EF80 03196824 */  and   $t5, $t8, $t9
/* 0040EF84 ACCDFFC4 */  sw    $t5, -0x3c($a2)
/* 0040EF88 8D4F0008 */  lw    $t7, 8($t2)
/* 0040EF8C 8D2E0008 */  lw    $t6, 8($t1)
/* 0040EF90 8CD9FFC8 */  lw    $t9, -0x38($a2)
/* 0040EF94 25290040 */  addiu $t1, $t1, 0x40
/* 0040EF98 01CFC025 */  or    $t8, $t6, $t7
/* 0040EF9C 03386824 */  and   $t5, $t9, $t8
/* 0040EFA0 ACCDFFC8 */  sw    $t5, -0x38($a2)
/* 0040EFA4 8D4F000C */  lw    $t7, 0xc($t2)
/* 0040EFA8 8D2EFFCC */  lw    $t6, -0x34($t1)
/* 0040EFAC 8CD8FFCC */  lw    $t8, -0x34($a2)
/* 0040EFB0 254A0040 */  addiu $t2, $t2, 0x40
/* 0040EFB4 01CFC825 */  or    $t9, $t6, $t7
/* 0040EFB8 03196824 */  and   $t5, $t8, $t9
/* 0040EFBC ACCDFFCC */  sw    $t5, -0x34($a2)
/* 0040EFC0 8D4FFFD0 */  lw    $t7, -0x30($t2)
/* 0040EFC4 8D2EFFD0 */  lw    $t6, -0x30($t1)
/* 0040EFC8 8CD9FFD0 */  lw    $t9, -0x30($a2)
/* 0040EFCC 01CFC025 */  or    $t8, $t6, $t7
/* 0040EFD0 03386824 */  and   $t5, $t9, $t8
/* 0040EFD4 ACCDFFD0 */  sw    $t5, -0x30($a2)
/* 0040EFD8 8D4FFFD4 */  lw    $t7, -0x2c($t2)
/* 0040EFDC 8D2EFFD4 */  lw    $t6, -0x2c($t1)
/* 0040EFE0 8CD8FFD4 */  lw    $t8, -0x2c($a2)
/* 0040EFE4 01CFC825 */  or    $t9, $t6, $t7
/* 0040EFE8 03196824 */  and   $t5, $t8, $t9
/* 0040EFEC ACCDFFD4 */  sw    $t5, -0x2c($a2)
/* 0040EFF0 8D4FFFD8 */  lw    $t7, -0x28($t2)
/* 0040EFF4 8D2EFFD8 */  lw    $t6, -0x28($t1)
/* 0040EFF8 8CD9FFD8 */  lw    $t9, -0x28($a2)
/* 0040EFFC 01CFC025 */  or    $t8, $t6, $t7
/* 0040F000 03386824 */  and   $t5, $t9, $t8
/* 0040F004 ACCDFFD8 */  sw    $t5, -0x28($a2)
/* 0040F008 8D4FFFDC */  lw    $t7, -0x24($t2)
/* 0040F00C 8D2EFFDC */  lw    $t6, -0x24($t1)
/* 0040F010 8CD8FFDC */  lw    $t8, -0x24($a2)
/* 0040F014 01CFC825 */  or    $t9, $t6, $t7
/* 0040F018 03196824 */  and   $t5, $t8, $t9
/* 0040F01C ACCDFFDC */  sw    $t5, -0x24($a2)
/* 0040F020 8D4FFFE0 */  lw    $t7, -0x20($t2)
/* 0040F024 8D2EFFE0 */  lw    $t6, -0x20($t1)
/* 0040F028 8CD9FFE0 */  lw    $t9, -0x20($a2)
/* 0040F02C 01CFC025 */  or    $t8, $t6, $t7
/* 0040F030 03386824 */  and   $t5, $t9, $t8
/* 0040F034 ACCDFFE0 */  sw    $t5, -0x20($a2)
/* 0040F038 8D4FFFE4 */  lw    $t7, -0x1c($t2)
/* 0040F03C 8D2EFFE4 */  lw    $t6, -0x1c($t1)
/* 0040F040 8CD8FFE4 */  lw    $t8, -0x1c($a2)
/* 0040F044 01CFC825 */  or    $t9, $t6, $t7
/* 0040F048 03196824 */  and   $t5, $t8, $t9
/* 0040F04C ACCDFFE4 */  sw    $t5, -0x1c($a2)
/* 0040F050 8D4FFFE8 */  lw    $t7, -0x18($t2)
/* 0040F054 8D2EFFE8 */  lw    $t6, -0x18($t1)
/* 0040F058 8CD9FFE8 */  lw    $t9, -0x18($a2)
/* 0040F05C 01CFC025 */  or    $t8, $t6, $t7
/* 0040F060 03386824 */  and   $t5, $t9, $t8
/* 0040F064 ACCDFFE8 */  sw    $t5, -0x18($a2)
/* 0040F068 8D4FFFEC */  lw    $t7, -0x14($t2)
/* 0040F06C 8D2EFFEC */  lw    $t6, -0x14($t1)
/* 0040F070 8CD8FFEC */  lw    $t8, -0x14($a2)
/* 0040F074 01CFC825 */  or    $t9, $t6, $t7
/* 0040F078 03196824 */  and   $t5, $t8, $t9
/* 0040F07C ACCDFFEC */  sw    $t5, -0x14($a2)
/* 0040F080 8D4FFFF0 */  lw    $t7, -0x10($t2)
/* 0040F084 8D2EFFF0 */  lw    $t6, -0x10($t1)
/* 0040F088 8CD9FFF0 */  lw    $t9, -0x10($a2)
/* 0040F08C 01CFC025 */  or    $t8, $t6, $t7
/* 0040F090 03386824 */  and   $t5, $t9, $t8
/* 0040F094 ACCDFFF0 */  sw    $t5, -0x10($a2)
/* 0040F098 8D4FFFF4 */  lw    $t7, -0xc($t2)
/* 0040F09C 8D2EFFF4 */  lw    $t6, -0xc($t1)
/* 0040F0A0 8CD8FFF4 */  lw    $t8, -0xc($a2)
/* 0040F0A4 01CFC825 */  or    $t9, $t6, $t7
/* 0040F0A8 03196824 */  and   $t5, $t8, $t9
/* 0040F0AC ACCDFFF4 */  sw    $t5, -0xc($a2)
/* 0040F0B0 8D4FFFF8 */  lw    $t7, -8($t2)
/* 0040F0B4 8D2EFFF8 */  lw    $t6, -8($t1)
/* 0040F0B8 8CD9FFF8 */  lw    $t9, -8($a2)
/* 0040F0BC 01CFC025 */  or    $t8, $t6, $t7
/* 0040F0C0 03386824 */  and   $t5, $t9, $t8
/* 0040F0C4 ACCDFFF8 */  sw    $t5, -8($a2)
/* 0040F0C8 8D4FFFFC */  lw    $t7, -4($t2)
/* 0040F0CC 8D2EFFFC */  lw    $t6, -4($t1)
/* 0040F0D0 8CD8FFFC */  lw    $t8, -4($a2)
/* 0040F0D4 01CFC825 */  or    $t9, $t6, $t7
/* 0040F0D8 03196824 */  and   $t5, $t8, $t9
/* 0040F0DC 1488FF9C */  bne   $a0, $t0, .L0040EF50
/* 0040F0E0 ACCDFFFC */   sw    $t5, -4($a2)
.L0040F0E4:
/* 0040F0E4 03E00008 */  jr    $ra
/* 0040F0E8 00000000 */   nop   
    .type bvectpp2, @function
    .size bvectpp2, .-bvectpp2
    .end bvectpp2

glabel bvectinsert
    .ent bvectinsert
    # 00410204 codemotion
/* 0040F0EC 27BDFFB0 */  addiu $sp, $sp, -0x50
/* 0040F0F0 AFB1000C */  sw    $s1, 0xc($sp)
/* 0040F0F4 AFB00008 */  sw    $s0, 8($sp)
/* 0040F0F8 8C8B0000 */  lw    $t3, ($a0)
/* 0040F0FC 8FAE0060 */  lw    $t6, 0x60($sp)
/* 0040F100 8C820004 */  lw    $v0, 4($a0)
/* 0040F104 256BFFFF */  addiu $t3, $t3, -1
/* 0040F108 8CA30004 */  lw    $v1, 4($a1)
/* 0040F10C 8CC80004 */  lw    $t0, 4($a2)
/* 0040F110 8CE90004 */  lw    $t1, 4($a3)
/* 0040F114 0560013A */  bltz  $t3, .L0040F600
/* 0040F118 8DCA0004 */   lw    $t2, 4($t6)
/* 0040F11C 256B0001 */  addiu $t3, $t3, 1
/* 0040F120 316F0003 */  andi  $t7, $t3, 3
/* 0040F124 AFAF0014 */  sw    $t7, 0x14($sp)
/* 0040F128 11E00048 */  beqz  $t7, .L0040F24C
/* 0040F12C 00002025 */   move  $a0, $zero
/* 0040F130 00002900 */  sll   $a1, $zero, 4
/* 0040F134 00453021 */  addu  $a2, $v0, $a1
/* 0040F138 00653821 */  addu  $a3, $v1, $a1
/* 0040F13C 01056021 */  addu  $t4, $t0, $a1
/* 0040F140 01256821 */  addu  $t5, $t1, $a1
/* 0040F144 01458021 */  addu  $s0, $t2, $a1
/* 0040F148 01E08825 */  move  $s1, $t7
.L0040F14C:
/* 0040F14C 8D8E0000 */  lw    $t6, ($t4)
/* 0040F150 8CF90000 */  lw    $t9, ($a3)
/* 0040F154 24840001 */  addiu $a0, $a0, 1
/* 0040F158 01C07827 */  not   $t7, $t6
/* 0040F15C 032FC024 */  and   $t8, $t9, $t7
/* 0040F160 ACD80000 */  sw    $t8, ($a2)
/* 0040F164 8D990004 */  lw    $t9, 4($t4)
/* 0040F168 8CEE0004 */  lw    $t6, 4($a3)
/* 0040F16C 24C60010 */  addiu $a2, $a2, 0x10
/* 0040F170 03207827 */  not   $t7, $t9
/* 0040F174 01CFC024 */  and   $t8, $t6, $t7
/* 0040F178 ACD8FFF4 */  sw    $t8, -0xc($a2)
/* 0040F17C 8D8E0008 */  lw    $t6, 8($t4)
/* 0040F180 8CF90008 */  lw    $t9, 8($a3)
/* 0040F184 24E70010 */  addiu $a3, $a3, 0x10
/* 0040F188 01C07827 */  not   $t7, $t6
/* 0040F18C 032FC024 */  and   $t8, $t9, $t7
/* 0040F190 ACD8FFF8 */  sw    $t8, -8($a2)
/* 0040F194 8D99000C */  lw    $t9, 0xc($t4)
/* 0040F198 8CEEFFFC */  lw    $t6, -4($a3)
/* 0040F19C 258C0010 */  addiu $t4, $t4, 0x10
/* 0040F1A0 03207827 */  not   $t7, $t9
/* 0040F1A4 01CFC024 */  and   $t8, $t6, $t7
/* 0040F1A8 ACD8FFFC */  sw    $t8, -4($a2)
/* 0040F1AC 8DAE0000 */  lw    $t6, ($t5)
/* 0040F1B0 8CD9FFF0 */  lw    $t9, -0x10($a2)
/* 0040F1B4 25AD0010 */  addiu $t5, $t5, 0x10
/* 0040F1B8 01C07827 */  not   $t7, $t6
/* 0040F1BC 032FC024 */  and   $t8, $t9, $t7
/* 0040F1C0 03207025 */  move  $t6, $t9
/* 0040F1C4 8E190000 */  lw    $t9, ($s0)
/* 0040F1C8 26100010 */  addiu $s0, $s0, 0x10
/* 0040F1CC 01D97824 */  and   $t7, $t6, $t9
/* 0040F1D0 030F7025 */  or    $t6, $t8, $t7
/* 0040F1D4 ACCEFFF0 */  sw    $t6, -0x10($a2)
/* 0040F1D8 8DB8FFF4 */  lw    $t8, -0xc($t5)
/* 0040F1DC 8CD9FFF4 */  lw    $t9, -0xc($a2)
/* 0040F1E0 03007827 */  not   $t7, $t8
/* 0040F1E4 032F7024 */  and   $t6, $t9, $t7
/* 0040F1E8 0320C025 */  move  $t8, $t9
/* 0040F1EC 8E19FFF4 */  lw    $t9, -0xc($s0)
/* 0040F1F0 03197824 */  and   $t7, $t8, $t9
/* 0040F1F4 01CFC025 */  or    $t8, $t6, $t7
/* 0040F1F8 ACD8FFF4 */  sw    $t8, -0xc($a2)
/* 0040F1FC 8DAEFFF8 */  lw    $t6, -8($t5)
/* 0040F200 8CD9FFF8 */  lw    $t9, -8($a2)
/* 0040F204 01C07827 */  not   $t7, $t6
/* 0040F208 032FC024 */  and   $t8, $t9, $t7
/* 0040F20C 03207025 */  move  $t6, $t9
/* 0040F210 8E19FFF8 */  lw    $t9, -8($s0)
/* 0040F214 01D97824 */  and   $t7, $t6, $t9
/* 0040F218 030F7025 */  or    $t6, $t8, $t7
/* 0040F21C ACCEFFF8 */  sw    $t6, -8($a2)
/* 0040F220 8DB8FFFC */  lw    $t8, -4($t5)
/* 0040F224 8CD9FFFC */  lw    $t9, -4($a2)
/* 0040F228 03007827 */  not   $t7, $t8
/* 0040F22C 032F7024 */  and   $t6, $t9, $t7
/* 0040F230 0320C025 */  move  $t8, $t9
/* 0040F234 8E19FFFC */  lw    $t9, -4($s0)
/* 0040F238 03197824 */  and   $t7, $t8, $t9
/* 0040F23C 01CFC025 */  or    $t8, $t6, $t7
/* 0040F240 1624FFC2 */  bne   $s1, $a0, .L0040F14C
/* 0040F244 ACD8FFFC */   sw    $t8, -4($a2)
/* 0040F248 108B00ED */  beq   $a0, $t3, .L0040F600
.L0040F24C:
/* 0040F24C 00042900 */   sll   $a1, $a0, 4
/* 0040F250 00453021 */  addu  $a2, $v0, $a1
/* 0040F254 00653821 */  addu  $a3, $v1, $a1
/* 0040F258 01056021 */  addu  $t4, $t0, $a1
/* 0040F25C 01256821 */  addu  $t5, $t1, $a1
/* 0040F260 01458021 */  addu  $s0, $t2, $a1
.L0040F264:
/* 0040F264 8D8E0000 */  lw    $t6, ($t4)
/* 0040F268 8CF90000 */  lw    $t9, ($a3)
/* 0040F26C 24840004 */  addiu $a0, $a0, 4
/* 0040F270 01C07827 */  not   $t7, $t6
/* 0040F274 032FC024 */  and   $t8, $t9, $t7
/* 0040F278 ACD80000 */  sw    $t8, ($a2)
/* 0040F27C 8D990004 */  lw    $t9, 4($t4)
/* 0040F280 8CEE0004 */  lw    $t6, 4($a3)
/* 0040F284 24C60040 */  addiu $a2, $a2, 0x40
/* 0040F288 03207827 */  not   $t7, $t9
/* 0040F28C 01CFC024 */  and   $t8, $t6, $t7
/* 0040F290 ACD8FFC4 */  sw    $t8, -0x3c($a2)
/* 0040F294 8D8E0008 */  lw    $t6, 8($t4)
/* 0040F298 8CF90008 */  lw    $t9, 8($a3)
/* 0040F29C 24E70040 */  addiu $a3, $a3, 0x40
/* 0040F2A0 01C07827 */  not   $t7, $t6
/* 0040F2A4 032FC024 */  and   $t8, $t9, $t7
/* 0040F2A8 ACD8FFC8 */  sw    $t8, -0x38($a2)
/* 0040F2AC 8D99000C */  lw    $t9, 0xc($t4)
/* 0040F2B0 8CEEFFCC */  lw    $t6, -0x34($a3)
/* 0040F2B4 258C0040 */  addiu $t4, $t4, 0x40
/* 0040F2B8 03207827 */  not   $t7, $t9
/* 0040F2BC 01CFC024 */  and   $t8, $t6, $t7
/* 0040F2C0 ACD8FFCC */  sw    $t8, -0x34($a2)
/* 0040F2C4 8DAE0000 */  lw    $t6, ($t5)
/* 0040F2C8 8CD9FFC0 */  lw    $t9, -0x40($a2)
/* 0040F2CC 25AD0040 */  addiu $t5, $t5, 0x40
/* 0040F2D0 01C07827 */  not   $t7, $t6
/* 0040F2D4 032FC024 */  and   $t8, $t9, $t7
/* 0040F2D8 03207025 */  move  $t6, $t9
/* 0040F2DC 8E190000 */  lw    $t9, ($s0)
/* 0040F2E0 26100040 */  addiu $s0, $s0, 0x40
/* 0040F2E4 01D97824 */  and   $t7, $t6, $t9
/* 0040F2E8 030F7025 */  or    $t6, $t8, $t7
/* 0040F2EC ACCEFFC0 */  sw    $t6, -0x40($a2)
/* 0040F2F0 8DB8FFC4 */  lw    $t8, -0x3c($t5)
/* 0040F2F4 8CD9FFC4 */  lw    $t9, -0x3c($a2)
/* 0040F2F8 03007827 */  not   $t7, $t8
/* 0040F2FC 032F7024 */  and   $t6, $t9, $t7
/* 0040F300 0320C025 */  move  $t8, $t9
/* 0040F304 8E19FFC4 */  lw    $t9, -0x3c($s0)
/* 0040F308 03197824 */  and   $t7, $t8, $t9
/* 0040F30C 01CFC025 */  or    $t8, $t6, $t7
/* 0040F310 ACD8FFC4 */  sw    $t8, -0x3c($a2)
/* 0040F314 8DAEFFC8 */  lw    $t6, -0x38($t5)
/* 0040F318 8CD9FFC8 */  lw    $t9, -0x38($a2)
/* 0040F31C 01C07827 */  not   $t7, $t6
/* 0040F320 032FC024 */  and   $t8, $t9, $t7
/* 0040F324 03207025 */  move  $t6, $t9
/* 0040F328 8E19FFC8 */  lw    $t9, -0x38($s0)
/* 0040F32C 01D97824 */  and   $t7, $t6, $t9
/* 0040F330 030F7025 */  or    $t6, $t8, $t7
/* 0040F334 ACCEFFC8 */  sw    $t6, -0x38($a2)
/* 0040F338 8DB8FFCC */  lw    $t8, -0x34($t5)
/* 0040F33C 8CD9FFCC */  lw    $t9, -0x34($a2)
/* 0040F340 03007827 */  not   $t7, $t8
/* 0040F344 032F7024 */  and   $t6, $t9, $t7
/* 0040F348 0320C025 */  move  $t8, $t9
/* 0040F34C 8E19FFCC */  lw    $t9, -0x34($s0)
/* 0040F350 03197824 */  and   $t7, $t8, $t9
/* 0040F354 01CFC025 */  or    $t8, $t6, $t7
/* 0040F358 ACD8FFCC */  sw    $t8, -0x34($a2)
/* 0040F35C 8D8EFFD0 */  lw    $t6, -0x30($t4)
/* 0040F360 8CF9FFD0 */  lw    $t9, -0x30($a3)
/* 0040F364 01C07827 */  not   $t7, $t6
/* 0040F368 032FC024 */  and   $t8, $t9, $t7
/* 0040F36C ACD8FFD0 */  sw    $t8, -0x30($a2)
/* 0040F370 8D99FFD4 */  lw    $t9, -0x2c($t4)
/* 0040F374 8CEEFFD4 */  lw    $t6, -0x2c($a3)
/* 0040F378 03207827 */  not   $t7, $t9
/* 0040F37C 01CFC024 */  and   $t8, $t6, $t7
/* 0040F380 ACD8FFD4 */  sw    $t8, -0x2c($a2)
/* 0040F384 8D8EFFD8 */  lw    $t6, -0x28($t4)
/* 0040F388 8CF9FFD8 */  lw    $t9, -0x28($a3)
/* 0040F38C 01C07827 */  not   $t7, $t6
/* 0040F390 032FC024 */  and   $t8, $t9, $t7
/* 0040F394 ACD8FFD8 */  sw    $t8, -0x28($a2)
/* 0040F398 8D99FFDC */  lw    $t9, -0x24($t4)
/* 0040F39C 8CEEFFDC */  lw    $t6, -0x24($a3)
/* 0040F3A0 03207827 */  not   $t7, $t9
/* 0040F3A4 01CFC024 */  and   $t8, $t6, $t7
/* 0040F3A8 ACD8FFDC */  sw    $t8, -0x24($a2)
/* 0040F3AC 8DAEFFD0 */  lw    $t6, -0x30($t5)
/* 0040F3B0 8CD9FFD0 */  lw    $t9, -0x30($a2)
/* 0040F3B4 01C07827 */  not   $t7, $t6
/* 0040F3B8 032FC024 */  and   $t8, $t9, $t7
/* 0040F3BC 03207025 */  move  $t6, $t9
/* 0040F3C0 8E19FFD0 */  lw    $t9, -0x30($s0)
/* 0040F3C4 01D97824 */  and   $t7, $t6, $t9
/* 0040F3C8 030F7025 */  or    $t6, $t8, $t7
/* 0040F3CC ACCEFFD0 */  sw    $t6, -0x30($a2)
/* 0040F3D0 8DB8FFD4 */  lw    $t8, -0x2c($t5)
/* 0040F3D4 8CD9FFD4 */  lw    $t9, -0x2c($a2)
/* 0040F3D8 03007827 */  not   $t7, $t8
/* 0040F3DC 032F7024 */  and   $t6, $t9, $t7
/* 0040F3E0 0320C025 */  move  $t8, $t9
/* 0040F3E4 8E19FFD4 */  lw    $t9, -0x2c($s0)
/* 0040F3E8 03197824 */  and   $t7, $t8, $t9
/* 0040F3EC 01CFC025 */  or    $t8, $t6, $t7
/* 0040F3F0 ACD8FFD4 */  sw    $t8, -0x2c($a2)
/* 0040F3F4 8DAEFFD8 */  lw    $t6, -0x28($t5)
/* 0040F3F8 8CD9FFD8 */  lw    $t9, -0x28($a2)
/* 0040F3FC 01C07827 */  not   $t7, $t6
/* 0040F400 032FC024 */  and   $t8, $t9, $t7
/* 0040F404 03207025 */  move  $t6, $t9
/* 0040F408 8E19FFD8 */  lw    $t9, -0x28($s0)
/* 0040F40C 01D97824 */  and   $t7, $t6, $t9
/* 0040F410 030F7025 */  or    $t6, $t8, $t7
/* 0040F414 ACCEFFD8 */  sw    $t6, -0x28($a2)
/* 0040F418 8DB8FFDC */  lw    $t8, -0x24($t5)
/* 0040F41C 8CD9FFDC */  lw    $t9, -0x24($a2)
/* 0040F420 03007827 */  not   $t7, $t8
/* 0040F424 032F7024 */  and   $t6, $t9, $t7
/* 0040F428 0320C025 */  move  $t8, $t9
/* 0040F42C 8E19FFDC */  lw    $t9, -0x24($s0)
/* 0040F430 03197824 */  and   $t7, $t8, $t9
/* 0040F434 01CFC025 */  or    $t8, $t6, $t7
/* 0040F438 ACD8FFDC */  sw    $t8, -0x24($a2)
/* 0040F43C 8D8EFFE0 */  lw    $t6, -0x20($t4)
/* 0040F440 8CF9FFE0 */  lw    $t9, -0x20($a3)
/* 0040F444 01C07827 */  not   $t7, $t6
/* 0040F448 032FC024 */  and   $t8, $t9, $t7
/* 0040F44C ACD8FFE0 */  sw    $t8, -0x20($a2)
/* 0040F450 8D99FFE4 */  lw    $t9, -0x1c($t4)
/* 0040F454 8CEEFFE4 */  lw    $t6, -0x1c($a3)
/* 0040F458 03207827 */  not   $t7, $t9
/* 0040F45C 01CFC024 */  and   $t8, $t6, $t7
/* 0040F460 ACD8FFE4 */  sw    $t8, -0x1c($a2)
/* 0040F464 8D8EFFE8 */  lw    $t6, -0x18($t4)
/* 0040F468 8CF9FFE8 */  lw    $t9, -0x18($a3)
/* 0040F46C 01C07827 */  not   $t7, $t6
/* 0040F470 032FC024 */  and   $t8, $t9, $t7
/* 0040F474 ACD8FFE8 */  sw    $t8, -0x18($a2)
/* 0040F478 8D99FFEC */  lw    $t9, -0x14($t4)
/* 0040F47C 8CEEFFEC */  lw    $t6, -0x14($a3)
/* 0040F480 03207827 */  not   $t7, $t9
/* 0040F484 01CFC024 */  and   $t8, $t6, $t7
/* 0040F488 ACD8FFEC */  sw    $t8, -0x14($a2)
/* 0040F48C 8DAEFFE0 */  lw    $t6, -0x20($t5)
/* 0040F490 8CD9FFE0 */  lw    $t9, -0x20($a2)
/* 0040F494 01C07827 */  not   $t7, $t6
/* 0040F498 032FC024 */  and   $t8, $t9, $t7
/* 0040F49C 03207025 */  move  $t6, $t9
/* 0040F4A0 8E19FFE0 */  lw    $t9, -0x20($s0)
/* 0040F4A4 01D97824 */  and   $t7, $t6, $t9
/* 0040F4A8 030F7025 */  or    $t6, $t8, $t7
/* 0040F4AC ACCEFFE0 */  sw    $t6, -0x20($a2)
/* 0040F4B0 8DB8FFE4 */  lw    $t8, -0x1c($t5)
/* 0040F4B4 8CD9FFE4 */  lw    $t9, -0x1c($a2)
/* 0040F4B8 03007827 */  not   $t7, $t8
/* 0040F4BC 032F7024 */  and   $t6, $t9, $t7
/* 0040F4C0 0320C025 */  move  $t8, $t9
/* 0040F4C4 8E19FFE4 */  lw    $t9, -0x1c($s0)
/* 0040F4C8 03197824 */  and   $t7, $t8, $t9
/* 0040F4CC 01CFC025 */  or    $t8, $t6, $t7
/* 0040F4D0 ACD8FFE4 */  sw    $t8, -0x1c($a2)
/* 0040F4D4 8DAEFFE8 */  lw    $t6, -0x18($t5)
/* 0040F4D8 8CD9FFE8 */  lw    $t9, -0x18($a2)
/* 0040F4DC 01C07827 */  not   $t7, $t6
/* 0040F4E0 032FC024 */  and   $t8, $t9, $t7
/* 0040F4E4 03207025 */  move  $t6, $t9
/* 0040F4E8 8E19FFE8 */  lw    $t9, -0x18($s0)
/* 0040F4EC 01D97824 */  and   $t7, $t6, $t9
/* 0040F4F0 030F7025 */  or    $t6, $t8, $t7
/* 0040F4F4 ACCEFFE8 */  sw    $t6, -0x18($a2)
/* 0040F4F8 8DB8FFEC */  lw    $t8, -0x14($t5)
/* 0040F4FC 8CD9FFEC */  lw    $t9, -0x14($a2)
/* 0040F500 03007827 */  not   $t7, $t8
/* 0040F504 032F7024 */  and   $t6, $t9, $t7
/* 0040F508 0320C025 */  move  $t8, $t9
/* 0040F50C 8E19FFEC */  lw    $t9, -0x14($s0)
/* 0040F510 03197824 */  and   $t7, $t8, $t9
/* 0040F514 01CFC025 */  or    $t8, $t6, $t7
/* 0040F518 ACD8FFEC */  sw    $t8, -0x14($a2)
/* 0040F51C 8D8EFFF0 */  lw    $t6, -0x10($t4)
/* 0040F520 8CF9FFF0 */  lw    $t9, -0x10($a3)
/* 0040F524 01C07827 */  not   $t7, $t6
/* 0040F528 032FC024 */  and   $t8, $t9, $t7
/* 0040F52C ACD8FFF0 */  sw    $t8, -0x10($a2)
/* 0040F530 8D99FFF4 */  lw    $t9, -0xc($t4)
/* 0040F534 8CEEFFF4 */  lw    $t6, -0xc($a3)
/* 0040F538 03207827 */  not   $t7, $t9
/* 0040F53C 01CFC024 */  and   $t8, $t6, $t7
/* 0040F540 ACD8FFF4 */  sw    $t8, -0xc($a2)
/* 0040F544 8D8EFFF8 */  lw    $t6, -8($t4)
/* 0040F548 8CF9FFF8 */  lw    $t9, -8($a3)
/* 0040F54C 01C07827 */  not   $t7, $t6
/* 0040F550 032FC024 */  and   $t8, $t9, $t7
/* 0040F554 ACD8FFF8 */  sw    $t8, -8($a2)
/* 0040F558 8D99FFFC */  lw    $t9, -4($t4)
/* 0040F55C 8CEEFFFC */  lw    $t6, -4($a3)
/* 0040F560 03207827 */  not   $t7, $t9
/* 0040F564 01CFC024 */  and   $t8, $t6, $t7
/* 0040F568 ACD8FFFC */  sw    $t8, -4($a2)
/* 0040F56C 8DAEFFF0 */  lw    $t6, -0x10($t5)
/* 0040F570 8CD9FFF0 */  lw    $t9, -0x10($a2)
/* 0040F574 01C07827 */  not   $t7, $t6
/* 0040F578 032FC024 */  and   $t8, $t9, $t7
/* 0040F57C 03207025 */  move  $t6, $t9
/* 0040F580 8E19FFF0 */  lw    $t9, -0x10($s0)
/* 0040F584 01D97824 */  and   $t7, $t6, $t9
/* 0040F588 030F7025 */  or    $t6, $t8, $t7
/* 0040F58C ACCEFFF0 */  sw    $t6, -0x10($a2)
/* 0040F590 8DB8FFF4 */  lw    $t8, -0xc($t5)
/* 0040F594 8CD9FFF4 */  lw    $t9, -0xc($a2)
/* 0040F598 03007827 */  not   $t7, $t8
/* 0040F59C 032F7024 */  and   $t6, $t9, $t7
/* 0040F5A0 0320C025 */  move  $t8, $t9
/* 0040F5A4 8E19FFF4 */  lw    $t9, -0xc($s0)
/* 0040F5A8 03197824 */  and   $t7, $t8, $t9
/* 0040F5AC 01CFC025 */  or    $t8, $t6, $t7
/* 0040F5B0 ACD8FFF4 */  sw    $t8, -0xc($a2)
/* 0040F5B4 8DAEFFF8 */  lw    $t6, -8($t5)
/* 0040F5B8 8CD9FFF8 */  lw    $t9, -8($a2)
/* 0040F5BC 01C07827 */  not   $t7, $t6
/* 0040F5C0 032FC024 */  and   $t8, $t9, $t7
/* 0040F5C4 03207025 */  move  $t6, $t9
/* 0040F5C8 8E19FFF8 */  lw    $t9, -8($s0)
/* 0040F5CC 01D97824 */  and   $t7, $t6, $t9
/* 0040F5D0 030F7025 */  or    $t6, $t8, $t7
/* 0040F5D4 ACCEFFF8 */  sw    $t6, -8($a2)
/* 0040F5D8 8DB8FFFC */  lw    $t8, -4($t5)
/* 0040F5DC 8CD9FFFC */  lw    $t9, -4($a2)
/* 0040F5E0 03007827 */  not   $t7, $t8
/* 0040F5E4 032F7024 */  and   $t6, $t9, $t7
/* 0040F5E8 0320C025 */  move  $t8, $t9
/* 0040F5EC 8E19FFFC */  lw    $t9, -4($s0)
/* 0040F5F0 03197824 */  and   $t7, $t8, $t9
/* 0040F5F4 01CFC025 */  or    $t8, $t6, $t7
/* 0040F5F8 148BFF1A */  bne   $a0, $t3, .L0040F264
/* 0040F5FC ACD8FFFC */   sw    $t8, -4($a2)
.L0040F600:
/* 0040F600 8FB00008 */  lw    $s0, 8($sp)
/* 0040F604 8FB1000C */  lw    $s1, 0xc($sp)
/* 0040F608 03E00008 */  jr    $ra
/* 0040F60C 27BD0050 */   addiu $sp, $sp, 0x50
    .type bvectinsert, @function
    .size bvectinsert, .-bvectinsert
    .end bvectinsert

glabel formbvlivran
    .ent formbvlivran
    # 00448C94 find_ix_loadstores
    # 0045DA18 formlivbb
    # 00464BFC localcolor
    # 00467F04 split
/* 0040F610 3C1C0FC1 */  .cpload $t9
/* 0040F614 279CAC80 */  
/* 0040F618 0399E021 */  
/* 0040F61C 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0040F620 AFA40020 */  sw    $a0, 0x20($sp)
/* 0040F624 8F848A50 */  lw     $a0, %got(bvlivransize)($gp)
/* 0040F628 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 0040F62C AFBF001C */  sw    $ra, 0x1c($sp)
/* 0040F630 8C840000 */  lw    $a0, ($a0)
/* 0040F634 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0040F638 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 0040F63C 0320F809 */  jalr  $t9
/* 0040F640 00042100 */   sll   $a0, $a0, 4
/* 0040F644 8FA90020 */  lw    $t1, 0x20($sp)
/* 0040F648 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0040F64C 14400005 */  bnez  $v0, .L0040F664
/* 0040F650 AD220004 */   sw    $v0, 4($t1)
/* 0040F654 8F818B20 */  lw     $at, %got(outofmem)($gp)
/* 0040F658 240E0001 */  li    $t6, 1
/* 0040F65C 1000002B */  b     .L0040F70C
/* 0040F660 A02E0000 */   sb    $t6, ($at)
.L0040F664:
/* 0040F664 8F888A50 */  lw     $t0, %got(bvlivransize)($gp)
/* 0040F668 8D270004 */  lw    $a3, 4($t1)
/* 0040F66C 8D080000 */  lw    $t0, ($t0)
/* 0040F670 2505FFFF */  addiu $a1, $t0, -1
/* 0040F674 04A00024 */  bltz  $a1, .L0040F708
/* 0040F678 24A50001 */   addiu $a1, $a1, 1
/* 0040F67C 30A60003 */  andi  $a2, $a1, 3
/* 0040F680 10C0000C */  beqz  $a2, .L0040F6B4
/* 0040F684 00001825 */   move  $v1, $zero
/* 0040F688 00007900 */  sll   $t7, $zero, 4
/* 0040F68C 00EF1021 */  addu  $v0, $a3, $t7
/* 0040F690 00C02025 */  move  $a0, $a2
.L0040F694:
/* 0040F694 24630001 */  addiu $v1, $v1, 1
/* 0040F698 AC400000 */  sw    $zero, ($v0)
/* 0040F69C AC400004 */  sw    $zero, 4($v0)
/* 0040F6A0 AC400008 */  sw    $zero, 8($v0)
/* 0040F6A4 AC40000C */  sw    $zero, 0xc($v0)
/* 0040F6A8 1483FFFA */  bne   $a0, $v1, .L0040F694
/* 0040F6AC 24420010 */   addiu $v0, $v0, 0x10
/* 0040F6B0 10650015 */  beq   $v1, $a1, .L0040F708
.L0040F6B4:
/* 0040F6B4 0003C100 */   sll   $t8, $v1, 4
/* 0040F6B8 00F81021 */  addu  $v0, $a3, $t8
.L0040F6BC:
/* 0040F6BC 24630004 */  addiu $v1, $v1, 4
/* 0040F6C0 AC400000 */  sw    $zero, ($v0)
/* 0040F6C4 AC400004 */  sw    $zero, 4($v0)
/* 0040F6C8 AC400008 */  sw    $zero, 8($v0)
/* 0040F6CC AC40000C */  sw    $zero, 0xc($v0)
/* 0040F6D0 AC400010 */  sw    $zero, 0x10($v0)
/* 0040F6D4 AC400014 */  sw    $zero, 0x14($v0)
/* 0040F6D8 AC400018 */  sw    $zero, 0x18($v0)
/* 0040F6DC AC40001C */  sw    $zero, 0x1c($v0)
/* 0040F6E0 AC400020 */  sw    $zero, 0x20($v0)
/* 0040F6E4 AC400024 */  sw    $zero, 0x24($v0)
/* 0040F6E8 AC400028 */  sw    $zero, 0x28($v0)
/* 0040F6EC AC40002C */  sw    $zero, 0x2c($v0)
/* 0040F6F0 AC400030 */  sw    $zero, 0x30($v0)
/* 0040F6F4 AC400034 */  sw    $zero, 0x34($v0)
/* 0040F6F8 AC400038 */  sw    $zero, 0x38($v0)
/* 0040F6FC AC40003C */  sw    $zero, 0x3c($v0)
/* 0040F700 1465FFEE */  bne   $v1, $a1, .L0040F6BC
/* 0040F704 24420040 */   addiu $v0, $v0, 0x40
.L0040F708:
/* 0040F708 AD280000 */  sw    $t0, ($t1)
.L0040F70C:
/* 0040F70C 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0040F710 27BD0020 */  addiu $sp, $sp, 0x20
/* 0040F714 03E00008 */  jr    $ra
/* 0040F718 00000000 */   nop   
    .type formbvlivran, @function
    .size formbvlivran, .-formbvlivran
    .end formbvlivran

glabel setbitbb
    .ent setbitbb
    # 00455D38 analoop
    # 0045DA18 formlivbb
    # 004638C0 regdataflow
    # 00464BFC localcolor
    # 004669A8 addadjacents
    # 00467F04 split
/* 0040F71C 30AE007F */  andi  $t6, $a1, 0x7f
/* 0040F720 25C8FFE0 */  addiu $t0, $t6, -0x20
/* 0040F724 2D090020 */  sltiu $t1, $t0, 0x20
/* 0040F728 01C0C027 */  not   $t8, $t6
/* 0040F72C 8C820004 */  lw    $v0, 4($a0)
/* 0040F730 27BDFFF0 */  addiu $sp, $sp, -0x10
/* 0040F734 03095004 */  sllv  $t2, $t1, $t8
/* 0040F738 AFAA0004 */  sw    $t2, 4($sp)
/* 0040F73C 25CBFFC0 */  addiu $t3, $t6, -0x40
/* 0040F740 2D6C0020 */  sltiu $t4, $t3, 0x20
/* 0040F744 2DCF0020 */  sltiu $t7, $t6, 0x20
/* 0040F748 000551C3 */  sra   $t2, $a1, 7
/* 0040F74C 030FC804 */  sllv  $t9, $t7, $t8
/* 0040F750 000A5900 */  sll   $t3, $t2, 4
/* 0040F754 25CFFFA0 */  addiu $t7, $t6, -0x60
/* 0040F758 030C6804 */  sllv  $t5, $t4, $t8
/* 0040F75C 004B1821 */  addu  $v1, $v0, $t3
/* 0040F760 8C6C0000 */  lw    $t4, ($v1)
/* 0040F764 2DE80020 */  sltiu $t0, $t7, 0x20
/* 0040F768 03084804 */  sllv  $t1, $t0, $t8
/* 0040F76C AFA9000C */  sw    $t1, 0xc($sp)
/* 0040F770 AFAD0008 */  sw    $t5, 8($sp)
/* 0040F774 01996825 */  or    $t5, $t4, $t9
/* 0040F778 8FAC000C */  lw    $t4, 0xc($sp)
/* 0040F77C 8FA90008 */  lw    $t1, 8($sp)
/* 0040F780 8C780008 */  lw    $t8, 8($v1)
/* 0040F784 8FAF0004 */  lw    $t7, 4($sp)
/* 0040F788 8C6E0004 */  lw    $t6, 4($v1)
/* 0040F78C 8C6B000C */  lw    $t3, 0xc($v1)
/* 0040F790 AFB90000 */  sw    $t9, ($sp)
/* 0040F794 03095025 */  or    $t2, $t8, $t1
/* 0040F798 01CF4025 */  or    $t0, $t6, $t7
/* 0040F79C 016CC825 */  or    $t9, $t3, $t4
/* 0040F7A0 AC79000C */  sw    $t9, 0xc($v1)
/* 0040F7A4 AC680004 */  sw    $t0, 4($v1)
/* 0040F7A8 AC6A0008 */  sw    $t2, 8($v1)
/* 0040F7AC AC6D0000 */  sw    $t5, ($v1)
/* 0040F7B0 03E00008 */  jr    $ra
/* 0040F7B4 27BD0010 */   addiu $sp, $sp, 0x10
    .type setbitbb, @function
    .size setbitbb, .-setbitbb
    .end setbitbb

glabel checkinitbvlivran
    .ent checkinitbvlivran
    # 00455D38 analoop
    # 004638C0 regdataflow
/* 0040F7B8 3C1C0FC1 */  .cpload $t9
/* 0040F7BC 279CAAD8 */  
/* 0040F7C0 0399E021 */  
/* 0040F7C4 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0040F7C8 8F838A50 */  lw     $v1, %got(bvlivransize)($gp)
/* 0040F7CC AFBF0024 */  sw    $ra, 0x24($sp)
/* 0040F7D0 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0040F7D4 AFB1001C */  sw    $s1, 0x1c($sp)
/* 0040F7D8 AFB00018 */  sw    $s0, 0x18($sp)
/* 0040F7DC 8C850000 */  lw    $a1, ($a0)
/* 0040F7E0 8C630000 */  lw    $v1, ($v1)
/* 0040F7E4 00808025 */  move  $s0, $a0
/* 0040F7E8 00A3082A */  slt   $at, $a1, $v1
/* 0040F7EC 1020000B */  beqz  $at, .L0040F81C
/* 0040F7F0 00608825 */   move  $s1, $v1
/* 0040F7F4 8F9986E8 */  lw    $t9, %call16(alloc_realloc)($gp)
/* 0040F7F8 8C840004 */  lw    $a0, 4($a0)
/* 0040F7FC 02203025 */  move  $a2, $s1
/* 0040F800 0320F809 */  jalr  $t9
/* 0040F804 8F878954 */   lw     $a3, %got(perm_heap)($gp)
/* 0040F808 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0040F80C AE020004 */  sw    $v0, 4($s0)
/* 0040F810 8F838A50 */  lw     $v1, %got(bvlivransize)($gp)
/* 0040F814 8C630000 */  lw    $v1, ($v1)
/* 0040F818 00608825 */  move  $s1, $v1
.L0040F81C:
/* 0040F81C 2465FFFF */  addiu $a1, $v1, -1
/* 0040F820 04A00025 */  bltz  $a1, .L0040F8B8
/* 0040F824 8E070004 */   lw    $a3, 4($s0)
/* 0040F828 24A50001 */  addiu $a1, $a1, 1
/* 0040F82C 30A60003 */  andi  $a2, $a1, 3
/* 0040F830 10C0000C */  beqz  $a2, .L0040F864
/* 0040F834 00001825 */   move  $v1, $zero
/* 0040F838 00007100 */  sll   $t6, $zero, 4
/* 0040F83C 00EE1021 */  addu  $v0, $a3, $t6
/* 0040F840 00C02025 */  move  $a0, $a2
.L0040F844:
/* 0040F844 24630001 */  addiu $v1, $v1, 1
/* 0040F848 AC400000 */  sw    $zero, ($v0)
/* 0040F84C AC400004 */  sw    $zero, 4($v0)
/* 0040F850 AC400008 */  sw    $zero, 8($v0)
/* 0040F854 AC40000C */  sw    $zero, 0xc($v0)
/* 0040F858 1483FFFA */  bne   $a0, $v1, .L0040F844
/* 0040F85C 24420010 */   addiu $v0, $v0, 0x10
/* 0040F860 10650015 */  beq   $v1, $a1, .L0040F8B8
.L0040F864:
/* 0040F864 00037900 */   sll   $t7, $v1, 4
/* 0040F868 00EF1021 */  addu  $v0, $a3, $t7
.L0040F86C:
/* 0040F86C 24630004 */  addiu $v1, $v1, 4
/* 0040F870 AC400000 */  sw    $zero, ($v0)
/* 0040F874 AC400004 */  sw    $zero, 4($v0)
/* 0040F878 AC400008 */  sw    $zero, 8($v0)
/* 0040F87C AC40000C */  sw    $zero, 0xc($v0)
/* 0040F880 AC400010 */  sw    $zero, 0x10($v0)
/* 0040F884 AC400014 */  sw    $zero, 0x14($v0)
/* 0040F888 AC400018 */  sw    $zero, 0x18($v0)
/* 0040F88C AC40001C */  sw    $zero, 0x1c($v0)
/* 0040F890 AC400020 */  sw    $zero, 0x20($v0)
/* 0040F894 AC400024 */  sw    $zero, 0x24($v0)
/* 0040F898 AC400028 */  sw    $zero, 0x28($v0)
/* 0040F89C AC40002C */  sw    $zero, 0x2c($v0)
/* 0040F8A0 AC400030 */  sw    $zero, 0x30($v0)
/* 0040F8A4 AC400034 */  sw    $zero, 0x34($v0)
/* 0040F8A8 AC400038 */  sw    $zero, 0x38($v0)
/* 0040F8AC AC40003C */  sw    $zero, 0x3c($v0)
/* 0040F8B0 1465FFEE */  bne   $v1, $a1, .L0040F86C
/* 0040F8B4 24420040 */   addiu $v0, $v0, 0x40
.L0040F8B8:
/* 0040F8B8 AE110000 */  sw    $s1, ($s0)
/* 0040F8BC 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0040F8C0 8FB1001C */  lw    $s1, 0x1c($sp)
/* 0040F8C4 8FB00018 */  lw    $s0, 0x18($sp)
/* 0040F8C8 03E00008 */  jr    $ra
/* 0040F8CC 27BD0028 */   addiu $sp, $sp, 0x28
    .type checkinitbvlivran, @function
    .size checkinitbvlivran, .-checkinitbvlivran
    .end checkinitbvlivran
)"");
