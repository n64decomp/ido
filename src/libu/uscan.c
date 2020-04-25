__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm




.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
glabel abort
    .ent abort
    # 0042EB10 incorp_feedback
    # 0042EF10 func_0042EF10
    # 0042F6CC controlflow
    # 00434720 processargs
    # 0043A0CC copyline
    # 0045806C main
    # 0045B508 oneprocprepass
    # 0045C150 prepass
    # 0047B320 stackerror
    # 0047BDF8 dbgerror
    # 0047FF7C skipproc
/* 00480700 3C1C0FBA */  .cpload $t9
/* 00480704 279C9B90 */  
/* 00480708 0399E021 */  
/* 0048070C 8F9988A8 */  lw    $t9, %call16(exit)($gp)
/* 00480710 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00480714 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00480718 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0048071C 0320F809 */  jalr  $t9
/* 00480720 2404FFFF */   li    $a0, -1
/* 00480724 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00480728 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048072C 27BD0020 */  addiu $sp, $sp, 0x20
/* 00480730 03E00008 */  jr    $ra
/* 00480734 00000000 */   nop   
    .type abort, @function
    .size abort, .-abort
    .end abort

glabel openstdout
    .ent openstdout
    # 00434720 processargs
/* 00480738 03E00008 */  jr    $ra
/* 0048073C AFA40000 */   sw    $a0, ($sp)
    .type openstdout, @function
    .size openstdout, .-openstdout
    .end openstdout

glabel opnstdin
    .ent opnstdin
/* 00480740 03E00008 */  jr    $ra
/* 00480744 AFA40000 */   sw    $a0, ($sp)
    .type opnstdin, @function
    .size opnstdin, .-opnstdin
    .end opnstdin

glabel openinput
    .ent openinput
/* 00480748 3C1C0FBA */  .cpload $t9
/* 0048074C 279C9B48 */  
/* 00480750 0399E021 */  
/* 00480754 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00480758 8F99889C */  lw    $t9, %call16(reset)($gp)
/* 0048075C AFBF001C */  sw    $ra, 0x1c($sp)
/* 00480760 AFA50024 */  sw    $a1, 0x24($sp)
/* 00480764 AFA60028 */  sw    $a2, 0x28($sp)
/* 00480768 AFA7002C */  sw    $a3, 0x2c($sp)
/* 0048076C AFBC0018 */  sw    $gp, 0x18($sp)
/* 00480770 00003825 */  move  $a3, $zero
/* 00480774 24060400 */  li    $a2, 1024
/* 00480778 0320F809 */  jalr  $t9
/* 0048077C 27A50024 */   addiu $a1, $sp, 0x24
/* 00480780 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00480784 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00480788 27BD0020 */  addiu $sp, $sp, 0x20
/* 0048078C 03E00008 */  jr    $ra
/* 00480790 00000000 */   nop   
    .type openinput, @function
    .size openinput, .-openinput
    .end openinput

glabel openoutput
    .ent openoutput
/* 00480794 3C1C0FBA */  .cpload $t9
/* 00480798 279C9AFC */  
/* 0048079C 0399E021 */  
/* 004807A0 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 004807A4 8F99888C */  lw    $t9, %call16(rewrite)($gp)
/* 004807A8 AFBF001C */  sw    $ra, 0x1c($sp)
/* 004807AC AFA50024 */  sw    $a1, 0x24($sp)
/* 004807B0 AFA60028 */  sw    $a2, 0x28($sp)
/* 004807B4 AFA7002C */  sw    $a3, 0x2c($sp)
/* 004807B8 AFBC0018 */  sw    $gp, 0x18($sp)
/* 004807BC 00003825 */  move  $a3, $zero
/* 004807C0 24060400 */  li    $a2, 1024
/* 004807C4 0320F809 */  jalr  $t9
/* 004807C8 27A50024 */   addiu $a1, $sp, 0x24
/* 004807CC 8FBF001C */  lw    $ra, 0x1c($sp)
/* 004807D0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004807D4 27BD0020 */  addiu $sp, $sp, 0x20
/* 004807D8 03E00008 */  jr    $ra
/* 004807DC 00000000 */   nop   
    .type openoutput, @function
    .size openoutput, .-openoutput
    .end openoutput

glabel getclock
    .ent getclock
    # 00410204 codemotion
    # 004175BC copypropagate
    # 00456A2C oneproc
    # 0045806C main
    # 004638C0 regdataflow
    # 00475680 getexpsources
    # 00479DC4 eliminduct
/* 004807E0 3C1C0FBA */  .cpload $t9
/* 004807E4 279C9AB0 */  
/* 004807E8 0399E021 */  
/* 004807EC 8F998894 */  lw    $t9, %call16(clock)($gp)
/* 004807F0 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 004807F4 AFBF001C */  sw    $ra, 0x1c($sp)
/* 004807F8 AFBC0018 */  sw    $gp, 0x18($sp)
/* 004807FC 0320F809 */  jalr  $t9
/* 00480800 24040001 */   li    $a0, 1
/* 00480804 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00480808 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048080C 27BD0020 */  addiu $sp, $sp, 0x20
/* 00480810 03E00008 */  jr    $ra
/* 00480814 00000000 */   nop   
    .type getclock, @function
    .size getclock, .-getclock
    .end getclock

glabel eopage
    .ent eopage
/* 00480818 3C1C0FBA */  .cpload $t9
/* 0048081C 279C9A78 */  
/* 00480820 0399E021 */  
/* 00480824 8F998848 */  lw    $t9, %call16(peek_char)($gp)
/* 00480828 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0048082C AFBF001C */  sw    $ra, 0x1c($sp)
/* 00480830 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00480834 0320F809 */  jalr  $t9
/* 00480838 8C840000 */   lw    $a0, ($a0)
/* 0048083C 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00480840 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00480844 3842000C */  xori  $v0, $v0, 0xc
/* 00480848 2C420001 */  sltiu $v0, $v0, 1
/* 0048084C 03E00008 */  jr    $ra
/* 00480850 27BD0020 */   addiu $sp, $sp, 0x20
    .type eopage, @function
    .size eopage, .-eopage
    .end eopage

glabel readpage
    .ent readpage
/* 00480854 3C1C0FBA */  .cpload $t9
/* 00480858 279C9A3C */  
/* 0048085C 0399E021 */  
/* 00480860 8F99884C */  lw    $t9, %call16(next_char)($gp)
/* 00480864 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00480868 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0048086C AFBC0018 */  sw    $gp, 0x18($sp)
/* 00480870 0320F809 */  jalr  $t9
/* 00480874 8C840000 */   lw    $a0, ($a0)
/* 00480878 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0048087C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00480880 27BD0020 */  addiu $sp, $sp, 0x20
/* 00480884 03E00008 */  jr    $ra
/* 00480888 00000000 */   nop   
    .type readpage, @function
    .size readpage, .-readpage
    .end readpage

glabel printdate
    .ent printdate
/* 0048088C 03E00008 */  jr    $ra
/* 00480890 AFA40000 */   sw    $a0, ($sp)
    .type printdate, @function
    .size printdate, .-printdate
    .end printdate

glabel printtime
    .ent printtime
/* 00480894 03E00008 */  jr    $ra
/* 00480898 AFA40000 */   sw    $a0, ($sp)
    .type printtime, @function
    .size printtime, .-printtime
    .end printtime
)"");
