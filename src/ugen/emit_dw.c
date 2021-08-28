__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
    .balign 4
jtbl_10009690:
    # 0041BA7C emit_branch_rrll
    .gpword .L0041BB34
    .gpword .L0041BC30
    .gpword .L0041BC54
    .gpword .L0041BC78
    .gpword .L0041BB58
    .gpword .L0041BB7C
    .gpword .L0041BC78
    .gpword .L0041BBE8
    .gpword .L0041BC0C
    .gpword .L0041BC78
    .gpword .L0041BBA0
    .gpword .L0041BBC4
    .gpword .L0041BC78
    .gpword .L0041BB10

    .balign 4
jtbl_100096C8:
    # 0041C388 emit_branch_rill
    .gpword .L0041C44C
    .gpword .L0041C564
    .gpword .L0041C58C
    .gpword .L0041C5B4
    .gpword .L0041C474
    .gpword .L0041C49C
    .gpword .L0041C5B4
    .gpword .L0041C514
    .gpword .L0041C53C
    .gpword .L0041C5B4
    .gpword .L0041C4C4
    .gpword .L0041C4EC
    .gpword .L0041C5B4
    .gpword .L0041C424

    .balign 4
jtbl_10009700:
    # 0041CAAC emit_trap_rri
    .gpword .L0041CBD0
    .gpword .L0041CBF4
    .gpword .L0041CB88
    .gpword .L0041CBAC
    .gpword .L0041CB64
    .gpword .L0041CB40

    .balign 4
jtbl_10009718:
    # 0041D034 emit_trap_ri
    .gpword .L0041D158
    .gpword .L0041D17C
    .gpword .L0041D110
    .gpword .L0041D134
    .gpword .L0041D0EC
    .gpword .L0041D0C8

RO_10009730:
    # 0041E468 dw_emit_rrr
    .asciz "emit_dw.p"

    .balign 4
jtbl_1000973C:
    # 0041E468 dw_emit_rrr
    .gpword .L0041E684
    .gpword .L0041E664
    .gpword .L0041E684
    .gpword .L0041E664
    .gpword .L0041E6E4
    .gpword .L0041E6C4
    .gpword .L0041E6A4
    .gpword .L0041E6E4
    .gpword .L0041E6C4
    .gpword .L0041E6A4

    .balign 4
jtbl_10009764:
    # 0041E468 dw_emit_rrr
    .gpword .L0041E550
    .gpword .L0041E550
    .gpword .L0041E508

    .balign 4
jtbl_10009770:
    # 0041E468 dw_emit_rrr
    .gpword .L0041E5D0
    .gpword .L0041E5F0
    .gpword .L0041E5F0
    .gpword .L0041E5F0
    .gpword .L0041E5F0
    .gpword .L0041E748
    .gpword .L0041E5F0
    .gpword .L0041E5F0
    .gpword .L0041E590
    .gpword .L0041E5F0
    .gpword .L0041E5F0
    .gpword .L0041E5D0
    .gpword .L0041E5B0
    .gpword .L0041E5B0
    .gpword .L0041E570
    .gpword .L0041E570
    .gpword .L0041E748
    .gpword .L0041E748
    .gpword .L0041E508

    .balign 4
jtbl_100097BC:
    # 0041E468 dw_emit_rrr
    .gpword .L0041E550
    .gpword .L0041E570

    .balign 4
jtbl_100097C4:
    # 0041FC98 dw_emit_rri
    .gpword .L0041FFE8
    .gpword .L0041FFE8
    .gpword .L0041FD48

    .balign 4
jtbl_100097D0:
    # 0041FC98 dw_emit_rri
    .gpword .L0041FF08
    .gpword .L0041FE28

    .balign 4
jtbl_100097D8:
    # 0041FC98 dw_emit_rri
    .gpword .L00420098
    .gpword .L004200F8
    .gpword .L004200C8
    .gpword .L00420128
    .gpword .L004200C8
    .gpword .L004201E8
    .gpword .L00420188
    .gpword .L00420158
    .gpword .L00420048
    .gpword .L004201B8
    .gpword .L00420158
    .gpword .L00420098
    .gpword .L00420070
    .gpword .L00420070
    .gpword .L00420018
    .gpword .L00420018
    .gpword .L004201E8
    .gpword .L004201E8
    .gpword .L0041FE28

    .balign 4
jtbl_10009824:
    # 0041FC98 dw_emit_rri
    .gpword .L0041FFE8
    .gpword .L00420018




.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
    .type func_0041AF70, @function
func_0041AF70:
    # 0041BA7C emit_branch_rrll
/* 0041AF70 3C1C0FC0 */  .cpload $t9
/* 0041AF74 279C4AE0 */  
/* 0041AF78 0399E021 */  
/* 0041AF7C 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0041AF80 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041AF84 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0041AF88 AFA40020 */  sw    $a0, 0x20($sp)
/* 0041AF8C AFA50024 */  sw    $a1, 0x24($sp)
/* 0041AF90 AFA60028 */  sw    $a2, 0x28($sp)
/* 0041AF94 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0041AF98 8FA70028 */  lw    $a3, 0x28($sp)
/* 0041AF9C 93A60027 */  lbu   $a2, 0x27($sp)
/* 0041AFA0 93A50023 */  lbu   $a1, 0x23($sp)
/* 0041AFA4 0320F809 */  jalr  $t9
/* 0041AFA8 2404001A */   li    $a0, 26
/* 0041AFAC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041AFB0 93A50023 */  lbu   $a1, 0x23($sp)
/* 0041AFB4 93A60027 */  lbu   $a2, 0x27($sp)
/* 0041AFB8 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041AFBC 2404001A */  li    $a0, 26
/* 0041AFC0 8FA70028 */  lw    $a3, 0x28($sp)
/* 0041AFC4 24A50001 */  addiu $a1, $a1, 1
/* 0041AFC8 0320F809 */  jalr  $t9
/* 0041AFCC 24C60001 */   addiu $a2, $a2, 1
/* 0041AFD0 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0041AFD4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041AFD8 27BD0020 */  addiu $sp, $sp, 0x20
/* 0041AFDC 03E00008 */  jr    $ra
/* 0041AFE0 00000000 */   nop   

    .type func_0041AFE4, @function
func_0041AFE4:
    # 0041BA7C emit_branch_rrll
/* 0041AFE4 3C1C0FC0 */  .cpload $t9
/* 0041AFE8 279C4A6C */  
/* 0041AFEC 0399E021 */  
/* 0041AFF0 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0041AFF4 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 0041AFF8 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0041AFFC AFBC0018 */  sw    $gp, 0x18($sp)
/* 0041B000 AFA40028 */  sw    $a0, 0x28($sp)
/* 0041B004 AFA5002C */  sw    $a1, 0x2c($sp)
/* 0041B008 0320F809 */  jalr  $t9
/* 0041B00C AFA60030 */   sw    $a2, 0x30($sp)
/* 0041B010 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041B014 AFA20020 */  sw    $v0, 0x20($sp)
/* 0041B018 2404001A */  li    $a0, 26
/* 0041B01C 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041B020 93A5002B */  lbu   $a1, 0x2b($sp)
/* 0041B024 93A6002F */  lbu   $a2, 0x2f($sp)
/* 0041B028 0320F809 */  jalr  $t9
/* 0041B02C 00403825 */   move  $a3, $v0
/* 0041B030 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041B034 93A5002B */  lbu   $a1, 0x2b($sp)
/* 0041B038 93A6002F */  lbu   $a2, 0x2f($sp)
/* 0041B03C 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041B040 2404000D */  li    $a0, 13
/* 0041B044 8FA70030 */  lw    $a3, 0x30($sp)
/* 0041B048 24A50001 */  addiu $a1, $a1, 1
/* 0041B04C 0320F809 */  jalr  $t9
/* 0041B050 24C60001 */   addiu $a2, $a2, 1
/* 0041B054 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041B058 8FA40020 */  lw    $a0, 0x20($sp)
/* 0041B05C 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 0041B060 0320F809 */  jalr  $t9
/* 0041B064 00000000 */   nop   
/* 0041B068 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0041B06C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041B070 27BD0028 */  addiu $sp, $sp, 0x28
/* 0041B074 03E00008 */  jr    $ra
/* 0041B078 00000000 */   nop   

    .type func_0041B07C, @function
func_0041B07C:
    # 0041BA7C emit_branch_rrll
/* 0041B07C 3C1C0FC0 */  .cpload $t9
/* 0041B080 279C49D4 */  
/* 0041B084 0399E021 */  
/* 0041B088 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 0041B08C 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 0041B090 AFBF0024 */  sw    $ra, 0x24($sp)
/* 0041B094 AFB1001C */  sw    $s1, 0x1c($sp)
/* 0041B098 AFB00018 */  sw    $s0, 0x18($sp)
/* 0041B09C 309000FF */  andi  $s0, $a0, 0xff
/* 0041B0A0 30B100FF */  andi  $s1, $a1, 0xff
/* 0041B0A4 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0041B0A8 AFA40038 */  sw    $a0, 0x38($sp)
/* 0041B0AC AFA5003C */  sw    $a1, 0x3c($sp)
/* 0041B0B0 0320F809 */  jalr  $t9
/* 0041B0B4 AFA60040 */   sw    $a2, 0x40($sp)
/* 0041B0B8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041B0BC AFA20030 */  sw    $v0, 0x30($sp)
/* 0041B0C0 26050001 */  addiu $a1, $s0, 1
/* 0041B0C4 8F8E898C */  lw     $t6, %got(lsb_first)($gp)
/* 0041B0C8 26260001 */  addiu $a2, $s1, 1
/* 0041B0CC 8FA70040 */  lw    $a3, 0x40($sp)
/* 0041B0D0 91CE0000 */  lbu   $t6, ($t6)
/* 0041B0D4 24040011 */  li    $a0, 17
/* 0041B0D8 11C00018 */  beqz  $t6, .L0041B13C
/* 0041B0DC 00000000 */   nop   
/* 0041B0E0 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041B0E4 24040011 */  li    $a0, 17
/* 0041B0E8 AFA5002C */  sw    $a1, 0x2c($sp)
/* 0041B0EC 0320F809 */  jalr  $t9
/* 0041B0F0 AFA60028 */   sw    $a2, 0x28($sp)
/* 0041B0F4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041B0F8 8FA5002C */  lw    $a1, 0x2c($sp)
/* 0041B0FC 8FA60028 */  lw    $a2, 0x28($sp)
/* 0041B100 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041B104 24040017 */  li    $a0, 23
/* 0041B108 8FA70030 */  lw    $a3, 0x30($sp)
/* 0041B10C 0320F809 */  jalr  $t9
/* 0041B110 00000000 */   nop   
/* 0041B114 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041B118 24040012 */  li    $a0, 18
/* 0041B11C 02002825 */  move  $a1, $s0
/* 0041B120 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041B124 02203025 */  move  $a2, $s1
/* 0041B128 8FA70040 */  lw    $a3, 0x40($sp)
/* 0041B12C 0320F809 */  jalr  $t9
/* 0041B130 00000000 */   nop   
/* 0041B134 10000017 */  b     .L0041B194
/* 0041B138 8FBC0020 */   lw    $gp, 0x20($sp)
.L0041B13C:
/* 0041B13C 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041B140 02002825 */  move  $a1, $s0
/* 0041B144 02203025 */  move  $a2, $s1
/* 0041B148 0320F809 */  jalr  $t9
/* 0041B14C 8FA70040 */   lw    $a3, 0x40($sp)
/* 0041B150 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041B154 24040017 */  li    $a0, 23
/* 0041B158 02002825 */  move  $a1, $s0
/* 0041B15C 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041B160 02203025 */  move  $a2, $s1
/* 0041B164 8FA70030 */  lw    $a3, 0x30($sp)
/* 0041B168 0320F809 */  jalr  $t9
/* 0041B16C 00000000 */   nop   
/* 0041B170 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041B174 24040012 */  li    $a0, 18
/* 0041B178 26050001 */  addiu $a1, $s0, 1
/* 0041B17C 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041B180 26260001 */  addiu $a2, $s1, 1
/* 0041B184 8FA70040 */  lw    $a3, 0x40($sp)
/* 0041B188 0320F809 */  jalr  $t9
/* 0041B18C 00000000 */   nop   
/* 0041B190 8FBC0020 */  lw    $gp, 0x20($sp)
.L0041B194:
/* 0041B194 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 0041B198 8FA40030 */  lw    $a0, 0x30($sp)
/* 0041B19C 0320F809 */  jalr  $t9
/* 0041B1A0 00000000 */   nop   
/* 0041B1A4 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0041B1A8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041B1AC 8FB00018 */  lw    $s0, 0x18($sp)
/* 0041B1B0 8FB1001C */  lw    $s1, 0x1c($sp)
/* 0041B1B4 03E00008 */  jr    $ra
/* 0041B1B8 27BD0038 */   addiu $sp, $sp, 0x38

    .type func_0041B1BC, @function
func_0041B1BC:
    # 0041BA7C emit_branch_rrll
/* 0041B1BC 3C1C0FC0 */  .cpload $t9
/* 0041B1C0 279C4894 */  
/* 0041B1C4 0399E021 */  
/* 0041B1C8 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 0041B1CC 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 0041B1D0 AFBF0024 */  sw    $ra, 0x24($sp)
/* 0041B1D4 AFB1001C */  sw    $s1, 0x1c($sp)
/* 0041B1D8 AFB00018 */  sw    $s0, 0x18($sp)
/* 0041B1DC 309000FF */  andi  $s0, $a0, 0xff
/* 0041B1E0 30B100FF */  andi  $s1, $a1, 0xff
/* 0041B1E4 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0041B1E8 AFA40038 */  sw    $a0, 0x38($sp)
/* 0041B1EC AFA5003C */  sw    $a1, 0x3c($sp)
/* 0041B1F0 0320F809 */  jalr  $t9
/* 0041B1F4 AFA60040 */   sw    $a2, 0x40($sp)
/* 0041B1F8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041B1FC AFA20030 */  sw    $v0, 0x30($sp)
/* 0041B200 26050001 */  addiu $a1, $s0, 1
/* 0041B204 8F8E898C */  lw     $t6, %got(lsb_first)($gp)
/* 0041B208 26260001 */  addiu $a2, $s1, 1
/* 0041B20C 8FA70040 */  lw    $a3, 0x40($sp)
/* 0041B210 91CE0000 */  lbu   $t6, ($t6)
/* 0041B214 24040012 */  li    $a0, 18
/* 0041B218 11C00018 */  beqz  $t6, .L0041B27C
/* 0041B21C 00000000 */   nop   
/* 0041B220 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041B224 24040012 */  li    $a0, 18
/* 0041B228 AFA5002C */  sw    $a1, 0x2c($sp)
/* 0041B22C 0320F809 */  jalr  $t9
/* 0041B230 AFA60028 */   sw    $a2, 0x28($sp)
/* 0041B234 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041B238 8FA5002C */  lw    $a1, 0x2c($sp)
/* 0041B23C 8FA60028 */  lw    $a2, 0x28($sp)
/* 0041B240 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041B244 24040018 */  li    $a0, 24
/* 0041B248 8FA70030 */  lw    $a3, 0x30($sp)
/* 0041B24C 0320F809 */  jalr  $t9
/* 0041B250 00000000 */   nop   
/* 0041B254 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041B258 24040012 */  li    $a0, 18
/* 0041B25C 02002825 */  move  $a1, $s0
/* 0041B260 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041B264 02203025 */  move  $a2, $s1
/* 0041B268 8FA70040 */  lw    $a3, 0x40($sp)
/* 0041B26C 0320F809 */  jalr  $t9
/* 0041B270 00000000 */   nop   
/* 0041B274 10000017 */  b     .L0041B2D4
/* 0041B278 8FBC0020 */   lw    $gp, 0x20($sp)
.L0041B27C:
/* 0041B27C 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041B280 02002825 */  move  $a1, $s0
/* 0041B284 02203025 */  move  $a2, $s1
/* 0041B288 0320F809 */  jalr  $t9
/* 0041B28C 8FA70040 */   lw    $a3, 0x40($sp)
/* 0041B290 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041B294 24040018 */  li    $a0, 24
/* 0041B298 02002825 */  move  $a1, $s0
/* 0041B29C 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041B2A0 02203025 */  move  $a2, $s1
/* 0041B2A4 8FA70030 */  lw    $a3, 0x30($sp)
/* 0041B2A8 0320F809 */  jalr  $t9
/* 0041B2AC 00000000 */   nop   
/* 0041B2B0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041B2B4 24040012 */  li    $a0, 18
/* 0041B2B8 26050001 */  addiu $a1, $s0, 1
/* 0041B2BC 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041B2C0 26260001 */  addiu $a2, $s1, 1
/* 0041B2C4 8FA70040 */  lw    $a3, 0x40($sp)
/* 0041B2C8 0320F809 */  jalr  $t9
/* 0041B2CC 00000000 */   nop   
/* 0041B2D0 8FBC0020 */  lw    $gp, 0x20($sp)
.L0041B2D4:
/* 0041B2D4 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 0041B2D8 8FA40030 */  lw    $a0, 0x30($sp)
/* 0041B2DC 0320F809 */  jalr  $t9
/* 0041B2E0 00000000 */   nop   
/* 0041B2E4 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0041B2E8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041B2EC 8FB00018 */  lw    $s0, 0x18($sp)
/* 0041B2F0 8FB1001C */  lw    $s1, 0x1c($sp)
/* 0041B2F4 03E00008 */  jr    $ra
/* 0041B2F8 27BD0038 */   addiu $sp, $sp, 0x38

    .type func_0041B2FC, @function
func_0041B2FC:
    # 0041BA7C emit_branch_rrll
/* 0041B2FC 3C1C0FC0 */  .cpload $t9
/* 0041B300 279C4754 */  
/* 0041B304 0399E021 */  
/* 0041B308 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 0041B30C 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 0041B310 AFBF0024 */  sw    $ra, 0x24($sp)
/* 0041B314 AFB1001C */  sw    $s1, 0x1c($sp)
/* 0041B318 AFB00018 */  sw    $s0, 0x18($sp)
/* 0041B31C 309000FF */  andi  $s0, $a0, 0xff
/* 0041B320 30B100FF */  andi  $s1, $a1, 0xff
/* 0041B324 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0041B328 AFA40038 */  sw    $a0, 0x38($sp)
/* 0041B32C AFA5003C */  sw    $a1, 0x3c($sp)
/* 0041B330 0320F809 */  jalr  $t9
/* 0041B334 AFA60040 */   sw    $a2, 0x40($sp)
/* 0041B338 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041B33C AFA20030 */  sw    $v0, 0x30($sp)
/* 0041B340 26050001 */  addiu $a1, $s0, 1
/* 0041B344 8F8E898C */  lw     $t6, %got(lsb_first)($gp)
/* 0041B348 26260001 */  addiu $a2, $s1, 1
/* 0041B34C 8FA70040 */  lw    $a3, 0x40($sp)
/* 0041B350 91CE0000 */  lbu   $t6, ($t6)
/* 0041B354 24040017 */  li    $a0, 23
/* 0041B358 11C00018 */  beqz  $t6, .L0041B3BC
/* 0041B35C 00000000 */   nop   
/* 0041B360 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041B364 24040017 */  li    $a0, 23
/* 0041B368 AFA5002C */  sw    $a1, 0x2c($sp)
/* 0041B36C 0320F809 */  jalr  $t9
/* 0041B370 AFA60028 */   sw    $a2, 0x28($sp)
/* 0041B374 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041B378 8FA5002C */  lw    $a1, 0x2c($sp)
/* 0041B37C 8FA60028 */  lw    $a2, 0x28($sp)
/* 0041B380 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041B384 24040011 */  li    $a0, 17
/* 0041B388 8FA70030 */  lw    $a3, 0x30($sp)
/* 0041B38C 0320F809 */  jalr  $t9
/* 0041B390 00000000 */   nop   
/* 0041B394 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041B398 24040018 */  li    $a0, 24
/* 0041B39C 02002825 */  move  $a1, $s0
/* 0041B3A0 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041B3A4 02203025 */  move  $a2, $s1
/* 0041B3A8 8FA70040 */  lw    $a3, 0x40($sp)
/* 0041B3AC 0320F809 */  jalr  $t9
/* 0041B3B0 00000000 */   nop   
/* 0041B3B4 10000017 */  b     .L0041B414
/* 0041B3B8 8FBC0020 */   lw    $gp, 0x20($sp)
.L0041B3BC:
/* 0041B3BC 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041B3C0 02002825 */  move  $a1, $s0
/* 0041B3C4 02203025 */  move  $a2, $s1
/* 0041B3C8 0320F809 */  jalr  $t9
/* 0041B3CC 8FA70040 */   lw    $a3, 0x40($sp)
/* 0041B3D0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041B3D4 24040011 */  li    $a0, 17
/* 0041B3D8 02002825 */  move  $a1, $s0
/* 0041B3DC 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041B3E0 02203025 */  move  $a2, $s1
/* 0041B3E4 8FA70030 */  lw    $a3, 0x30($sp)
/* 0041B3E8 0320F809 */  jalr  $t9
/* 0041B3EC 00000000 */   nop   
/* 0041B3F0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041B3F4 24040018 */  li    $a0, 24
/* 0041B3F8 26050001 */  addiu $a1, $s0, 1
/* 0041B3FC 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041B400 26260001 */  addiu $a2, $s1, 1
/* 0041B404 8FA70040 */  lw    $a3, 0x40($sp)
/* 0041B408 0320F809 */  jalr  $t9
/* 0041B40C 00000000 */   nop   
/* 0041B410 8FBC0020 */  lw    $gp, 0x20($sp)
.L0041B414:
/* 0041B414 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 0041B418 8FA40030 */  lw    $a0, 0x30($sp)
/* 0041B41C 0320F809 */  jalr  $t9
/* 0041B420 00000000 */   nop   
/* 0041B424 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0041B428 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041B42C 8FB00018 */  lw    $s0, 0x18($sp)
/* 0041B430 8FB1001C */  lw    $s1, 0x1c($sp)
/* 0041B434 03E00008 */  jr    $ra
/* 0041B438 27BD0038 */   addiu $sp, $sp, 0x38

    .type func_0041B43C, @function
func_0041B43C:
    # 0041BA7C emit_branch_rrll
/* 0041B43C 3C1C0FC0 */  .cpload $t9
/* 0041B440 279C4614 */  
/* 0041B444 0399E021 */  
/* 0041B448 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 0041B44C 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 0041B450 AFBF0024 */  sw    $ra, 0x24($sp)
/* 0041B454 AFB1001C */  sw    $s1, 0x1c($sp)
/* 0041B458 AFB00018 */  sw    $s0, 0x18($sp)
/* 0041B45C 309000FF */  andi  $s0, $a0, 0xff
/* 0041B460 30B100FF */  andi  $s1, $a1, 0xff
/* 0041B464 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0041B468 AFA40038 */  sw    $a0, 0x38($sp)
/* 0041B46C AFA5003C */  sw    $a1, 0x3c($sp)
/* 0041B470 0320F809 */  jalr  $t9
/* 0041B474 AFA60040 */   sw    $a2, 0x40($sp)
/* 0041B478 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041B47C AFA20030 */  sw    $v0, 0x30($sp)
/* 0041B480 26050001 */  addiu $a1, $s0, 1
/* 0041B484 8F8E898C */  lw     $t6, %got(lsb_first)($gp)
/* 0041B488 26260001 */  addiu $a2, $s1, 1
/* 0041B48C 8FA70040 */  lw    $a3, 0x40($sp)
/* 0041B490 91CE0000 */  lbu   $t6, ($t6)
/* 0041B494 24040018 */  li    $a0, 24
/* 0041B498 11C00018 */  beqz  $t6, .L0041B4FC
/* 0041B49C 00000000 */   nop   
/* 0041B4A0 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041B4A4 24040018 */  li    $a0, 24
/* 0041B4A8 AFA5002C */  sw    $a1, 0x2c($sp)
/* 0041B4AC 0320F809 */  jalr  $t9
/* 0041B4B0 AFA60028 */   sw    $a2, 0x28($sp)
/* 0041B4B4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041B4B8 8FA5002C */  lw    $a1, 0x2c($sp)
/* 0041B4BC 8FA60028 */  lw    $a2, 0x28($sp)
/* 0041B4C0 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041B4C4 24040012 */  li    $a0, 18
/* 0041B4C8 8FA70030 */  lw    $a3, 0x30($sp)
/* 0041B4CC 0320F809 */  jalr  $t9
/* 0041B4D0 00000000 */   nop   
/* 0041B4D4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041B4D8 24040018 */  li    $a0, 24
/* 0041B4DC 02002825 */  move  $a1, $s0
/* 0041B4E0 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041B4E4 02203025 */  move  $a2, $s1
/* 0041B4E8 8FA70040 */  lw    $a3, 0x40($sp)
/* 0041B4EC 0320F809 */  jalr  $t9
/* 0041B4F0 00000000 */   nop   
/* 0041B4F4 10000017 */  b     .L0041B554
/* 0041B4F8 8FBC0020 */   lw    $gp, 0x20($sp)
.L0041B4FC:
/* 0041B4FC 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041B500 02002825 */  move  $a1, $s0
/* 0041B504 02203025 */  move  $a2, $s1
/* 0041B508 0320F809 */  jalr  $t9
/* 0041B50C 8FA70040 */   lw    $a3, 0x40($sp)
/* 0041B510 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041B514 24040012 */  li    $a0, 18
/* 0041B518 02002825 */  move  $a1, $s0
/* 0041B51C 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041B520 02203025 */  move  $a2, $s1
/* 0041B524 8FA70030 */  lw    $a3, 0x30($sp)
/* 0041B528 0320F809 */  jalr  $t9
/* 0041B52C 00000000 */   nop   
/* 0041B530 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041B534 24040018 */  li    $a0, 24
/* 0041B538 26050001 */  addiu $a1, $s0, 1
/* 0041B53C 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041B540 26260001 */  addiu $a2, $s1, 1
/* 0041B544 8FA70040 */  lw    $a3, 0x40($sp)
/* 0041B548 0320F809 */  jalr  $t9
/* 0041B54C 00000000 */   nop   
/* 0041B550 8FBC0020 */  lw    $gp, 0x20($sp)
.L0041B554:
/* 0041B554 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 0041B558 8FA40030 */  lw    $a0, 0x30($sp)
/* 0041B55C 0320F809 */  jalr  $t9
/* 0041B560 00000000 */   nop   
/* 0041B564 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0041B568 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041B56C 8FB00018 */  lw    $s0, 0x18($sp)
/* 0041B570 8FB1001C */  lw    $s1, 0x1c($sp)
/* 0041B574 03E00008 */  jr    $ra
/* 0041B578 27BD0038 */   addiu $sp, $sp, 0x38

    .type func_0041B57C, @function
func_0041B57C:
    # 0041BA7C emit_branch_rrll
/* 0041B57C 3C1C0FC0 */  .cpload $t9
/* 0041B580 279C44D4 */  
/* 0041B584 0399E021 */  
/* 0041B588 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 0041B58C 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 0041B590 AFBF0024 */  sw    $ra, 0x24($sp)
/* 0041B594 AFB1001C */  sw    $s1, 0x1c($sp)
/* 0041B598 AFB00018 */  sw    $s0, 0x18($sp)
/* 0041B59C 309000FF */  andi  $s0, $a0, 0xff
/* 0041B5A0 30B100FF */  andi  $s1, $a1, 0xff
/* 0041B5A4 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0041B5A8 AFA40038 */  sw    $a0, 0x38($sp)
/* 0041B5AC AFA5003C */  sw    $a1, 0x3c($sp)
/* 0041B5B0 0320F809 */  jalr  $t9
/* 0041B5B4 AFA60040 */   sw    $a2, 0x40($sp)
/* 0041B5B8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041B5BC AFA20030 */  sw    $v0, 0x30($sp)
/* 0041B5C0 26050001 */  addiu $a1, $s0, 1
/* 0041B5C4 8F8E898C */  lw     $t6, %got(lsb_first)($gp)
/* 0041B5C8 26260001 */  addiu $a2, $s1, 1
/* 0041B5CC 8FA70040 */  lw    $a3, 0x40($sp)
/* 0041B5D0 91CE0000 */  lbu   $t6, ($t6)
/* 0041B5D4 24040017 */  li    $a0, 23
/* 0041B5D8 11C00018 */  beqz  $t6, .L0041B63C
/* 0041B5DC 00000000 */   nop   
/* 0041B5E0 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041B5E4 24040017 */  li    $a0, 23
/* 0041B5E8 AFA5002C */  sw    $a1, 0x2c($sp)
/* 0041B5EC 0320F809 */  jalr  $t9
/* 0041B5F0 AFA60028 */   sw    $a2, 0x28($sp)
/* 0041B5F4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041B5F8 8FA5002C */  lw    $a1, 0x2c($sp)
/* 0041B5FC 8FA60028 */  lw    $a2, 0x28($sp)
/* 0041B600 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041B604 24040011 */  li    $a0, 17
/* 0041B608 8FA70030 */  lw    $a3, 0x30($sp)
/* 0041B60C 0320F809 */  jalr  $t9
/* 0041B610 00000000 */   nop   
/* 0041B614 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041B618 24040015 */  li    $a0, 21
/* 0041B61C 02002825 */  move  $a1, $s0
/* 0041B620 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041B624 02203025 */  move  $a2, $s1
/* 0041B628 8FA70040 */  lw    $a3, 0x40($sp)
/* 0041B62C 0320F809 */  jalr  $t9
/* 0041B630 00000000 */   nop   
/* 0041B634 10000017 */  b     .L0041B694
/* 0041B638 8FBC0020 */   lw    $gp, 0x20($sp)
.L0041B63C:
/* 0041B63C 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041B640 02002825 */  move  $a1, $s0
/* 0041B644 02203025 */  move  $a2, $s1
/* 0041B648 0320F809 */  jalr  $t9
/* 0041B64C 8FA70040 */   lw    $a3, 0x40($sp)
/* 0041B650 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041B654 24040011 */  li    $a0, 17
/* 0041B658 02002825 */  move  $a1, $s0
/* 0041B65C 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041B660 02203025 */  move  $a2, $s1
/* 0041B664 8FA70030 */  lw    $a3, 0x30($sp)
/* 0041B668 0320F809 */  jalr  $t9
/* 0041B66C 00000000 */   nop   
/* 0041B670 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041B674 24040015 */  li    $a0, 21
/* 0041B678 26050001 */  addiu $a1, $s0, 1
/* 0041B67C 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041B680 26260001 */  addiu $a2, $s1, 1
/* 0041B684 8FA70040 */  lw    $a3, 0x40($sp)
/* 0041B688 0320F809 */  jalr  $t9
/* 0041B68C 00000000 */   nop   
/* 0041B690 8FBC0020 */  lw    $gp, 0x20($sp)
.L0041B694:
/* 0041B694 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 0041B698 8FA40030 */  lw    $a0, 0x30($sp)
/* 0041B69C 0320F809 */  jalr  $t9
/* 0041B6A0 00000000 */   nop   
/* 0041B6A4 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0041B6A8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041B6AC 8FB00018 */  lw    $s0, 0x18($sp)
/* 0041B6B0 8FB1001C */  lw    $s1, 0x1c($sp)
/* 0041B6B4 03E00008 */  jr    $ra
/* 0041B6B8 27BD0038 */   addiu $sp, $sp, 0x38

    .type func_0041B6BC, @function
func_0041B6BC:
    # 0041BA7C emit_branch_rrll
/* 0041B6BC 3C1C0FC0 */  .cpload $t9
/* 0041B6C0 279C4394 */  
/* 0041B6C4 0399E021 */  
/* 0041B6C8 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 0041B6CC 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 0041B6D0 AFBF0024 */  sw    $ra, 0x24($sp)
/* 0041B6D4 AFB1001C */  sw    $s1, 0x1c($sp)
/* 0041B6D8 AFB00018 */  sw    $s0, 0x18($sp)
/* 0041B6DC 309000FF */  andi  $s0, $a0, 0xff
/* 0041B6E0 30B100FF */  andi  $s1, $a1, 0xff
/* 0041B6E4 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0041B6E8 AFA40038 */  sw    $a0, 0x38($sp)
/* 0041B6EC AFA5003C */  sw    $a1, 0x3c($sp)
/* 0041B6F0 0320F809 */  jalr  $t9
/* 0041B6F4 AFA60040 */   sw    $a2, 0x40($sp)
/* 0041B6F8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041B6FC AFA20030 */  sw    $v0, 0x30($sp)
/* 0041B700 26050001 */  addiu $a1, $s0, 1
/* 0041B704 8F8E898C */  lw     $t6, %got(lsb_first)($gp)
/* 0041B708 26260001 */  addiu $a2, $s1, 1
/* 0041B70C 8FA70040 */  lw    $a3, 0x40($sp)
/* 0041B710 91CE0000 */  lbu   $t6, ($t6)
/* 0041B714 24040018 */  li    $a0, 24
/* 0041B718 11C00018 */  beqz  $t6, .L0041B77C
/* 0041B71C 00000000 */   nop   
/* 0041B720 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041B724 24040018 */  li    $a0, 24
/* 0041B728 AFA5002C */  sw    $a1, 0x2c($sp)
/* 0041B72C 0320F809 */  jalr  $t9
/* 0041B730 AFA60028 */   sw    $a2, 0x28($sp)
/* 0041B734 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041B738 8FA5002C */  lw    $a1, 0x2c($sp)
/* 0041B73C 8FA60028 */  lw    $a2, 0x28($sp)
/* 0041B740 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041B744 24040012 */  li    $a0, 18
/* 0041B748 8FA70030 */  lw    $a3, 0x30($sp)
/* 0041B74C 0320F809 */  jalr  $t9
/* 0041B750 00000000 */   nop   
/* 0041B754 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041B758 24040015 */  li    $a0, 21
/* 0041B75C 02002825 */  move  $a1, $s0
/* 0041B760 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041B764 02203025 */  move  $a2, $s1
/* 0041B768 8FA70040 */  lw    $a3, 0x40($sp)
/* 0041B76C 0320F809 */  jalr  $t9
/* 0041B770 00000000 */   nop   
/* 0041B774 10000017 */  b     .L0041B7D4
/* 0041B778 8FBC0020 */   lw    $gp, 0x20($sp)
.L0041B77C:
/* 0041B77C 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041B780 02002825 */  move  $a1, $s0
/* 0041B784 02203025 */  move  $a2, $s1
/* 0041B788 0320F809 */  jalr  $t9
/* 0041B78C 8FA70040 */   lw    $a3, 0x40($sp)
/* 0041B790 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041B794 24040012 */  li    $a0, 18
/* 0041B798 02002825 */  move  $a1, $s0
/* 0041B79C 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041B7A0 02203025 */  move  $a2, $s1
/* 0041B7A4 8FA70030 */  lw    $a3, 0x30($sp)
/* 0041B7A8 0320F809 */  jalr  $t9
/* 0041B7AC 00000000 */   nop   
/* 0041B7B0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041B7B4 24040015 */  li    $a0, 21
/* 0041B7B8 26050001 */  addiu $a1, $s0, 1
/* 0041B7BC 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041B7C0 26260001 */  addiu $a2, $s1, 1
/* 0041B7C4 8FA70040 */  lw    $a3, 0x40($sp)
/* 0041B7C8 0320F809 */  jalr  $t9
/* 0041B7CC 00000000 */   nop   
/* 0041B7D0 8FBC0020 */  lw    $gp, 0x20($sp)
.L0041B7D4:
/* 0041B7D4 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 0041B7D8 8FA40030 */  lw    $a0, 0x30($sp)
/* 0041B7DC 0320F809 */  jalr  $t9
/* 0041B7E0 00000000 */   nop   
/* 0041B7E4 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0041B7E8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041B7EC 8FB00018 */  lw    $s0, 0x18($sp)
/* 0041B7F0 8FB1001C */  lw    $s1, 0x1c($sp)
/* 0041B7F4 03E00008 */  jr    $ra
/* 0041B7F8 27BD0038 */   addiu $sp, $sp, 0x38

    .type func_0041B7FC, @function
func_0041B7FC:
    # 0041BA7C emit_branch_rrll
/* 0041B7FC 3C1C0FC0 */  .cpload $t9
/* 0041B800 279C4254 */  
/* 0041B804 0399E021 */  
/* 0041B808 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 0041B80C 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 0041B810 AFBF0024 */  sw    $ra, 0x24($sp)
/* 0041B814 AFB1001C */  sw    $s1, 0x1c($sp)
/* 0041B818 AFB00018 */  sw    $s0, 0x18($sp)
/* 0041B81C 309000FF */  andi  $s0, $a0, 0xff
/* 0041B820 30B100FF */  andi  $s1, $a1, 0xff
/* 0041B824 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0041B828 AFA40038 */  sw    $a0, 0x38($sp)
/* 0041B82C AFA5003C */  sw    $a1, 0x3c($sp)
/* 0041B830 0320F809 */  jalr  $t9
/* 0041B834 AFA60040 */   sw    $a2, 0x40($sp)
/* 0041B838 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041B83C AFA20030 */  sw    $v0, 0x30($sp)
/* 0041B840 26050001 */  addiu $a1, $s0, 1
/* 0041B844 8F8E898C */  lw     $t6, %got(lsb_first)($gp)
/* 0041B848 26260001 */  addiu $a2, $s1, 1
/* 0041B84C 8FA70040 */  lw    $a3, 0x40($sp)
/* 0041B850 91CE0000 */  lbu   $t6, ($t6)
/* 0041B854 24040011 */  li    $a0, 17
/* 0041B858 11C00018 */  beqz  $t6, .L0041B8BC
/* 0041B85C 00000000 */   nop   
/* 0041B860 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041B864 24040011 */  li    $a0, 17
/* 0041B868 AFA5002C */  sw    $a1, 0x2c($sp)
/* 0041B86C 0320F809 */  jalr  $t9
/* 0041B870 AFA60028 */   sw    $a2, 0x28($sp)
/* 0041B874 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041B878 8FA5002C */  lw    $a1, 0x2c($sp)
/* 0041B87C 8FA60028 */  lw    $a2, 0x28($sp)
/* 0041B880 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041B884 24040017 */  li    $a0, 23
/* 0041B888 8FA70030 */  lw    $a3, 0x30($sp)
/* 0041B88C 0320F809 */  jalr  $t9
/* 0041B890 00000000 */   nop   
/* 0041B894 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041B898 2404000F */  li    $a0, 15
/* 0041B89C 02002825 */  move  $a1, $s0
/* 0041B8A0 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041B8A4 02203025 */  move  $a2, $s1
/* 0041B8A8 8FA70040 */  lw    $a3, 0x40($sp)
/* 0041B8AC 0320F809 */  jalr  $t9
/* 0041B8B0 00000000 */   nop   
/* 0041B8B4 10000017 */  b     .L0041B914
/* 0041B8B8 8FBC0020 */   lw    $gp, 0x20($sp)
.L0041B8BC:
/* 0041B8BC 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041B8C0 02002825 */  move  $a1, $s0
/* 0041B8C4 02203025 */  move  $a2, $s1
/* 0041B8C8 0320F809 */  jalr  $t9
/* 0041B8CC 8FA70040 */   lw    $a3, 0x40($sp)
/* 0041B8D0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041B8D4 24040017 */  li    $a0, 23
/* 0041B8D8 02002825 */  move  $a1, $s0
/* 0041B8DC 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041B8E0 02203025 */  move  $a2, $s1
/* 0041B8E4 8FA70030 */  lw    $a3, 0x30($sp)
/* 0041B8E8 0320F809 */  jalr  $t9
/* 0041B8EC 00000000 */   nop   
/* 0041B8F0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041B8F4 2404000F */  li    $a0, 15
/* 0041B8F8 26050001 */  addiu $a1, $s0, 1
/* 0041B8FC 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041B900 26260001 */  addiu $a2, $s1, 1
/* 0041B904 8FA70040 */  lw    $a3, 0x40($sp)
/* 0041B908 0320F809 */  jalr  $t9
/* 0041B90C 00000000 */   nop   
/* 0041B910 8FBC0020 */  lw    $gp, 0x20($sp)
.L0041B914:
/* 0041B914 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 0041B918 8FA40030 */  lw    $a0, 0x30($sp)
/* 0041B91C 0320F809 */  jalr  $t9
/* 0041B920 00000000 */   nop   
/* 0041B924 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0041B928 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041B92C 8FB00018 */  lw    $s0, 0x18($sp)
/* 0041B930 8FB1001C */  lw    $s1, 0x1c($sp)
/* 0041B934 03E00008 */  jr    $ra
/* 0041B938 27BD0038 */   addiu $sp, $sp, 0x38

    .type func_0041B93C, @function
func_0041B93C:
    # 0041BA7C emit_branch_rrll
/* 0041B93C 3C1C0FC0 */  .cpload $t9
/* 0041B940 279C4114 */  
/* 0041B944 0399E021 */  
/* 0041B948 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 0041B94C 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 0041B950 AFBF0024 */  sw    $ra, 0x24($sp)
/* 0041B954 AFB1001C */  sw    $s1, 0x1c($sp)
/* 0041B958 AFB00018 */  sw    $s0, 0x18($sp)
/* 0041B95C 309000FF */  andi  $s0, $a0, 0xff
/* 0041B960 30B100FF */  andi  $s1, $a1, 0xff
/* 0041B964 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0041B968 AFA40038 */  sw    $a0, 0x38($sp)
/* 0041B96C AFA5003C */  sw    $a1, 0x3c($sp)
/* 0041B970 0320F809 */  jalr  $t9
/* 0041B974 AFA60040 */   sw    $a2, 0x40($sp)
/* 0041B978 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041B97C AFA20030 */  sw    $v0, 0x30($sp)
/* 0041B980 26050001 */  addiu $a1, $s0, 1
/* 0041B984 8F8E898C */  lw     $t6, %got(lsb_first)($gp)
/* 0041B988 26260001 */  addiu $a2, $s1, 1
/* 0041B98C 8FA70040 */  lw    $a3, 0x40($sp)
/* 0041B990 91CE0000 */  lbu   $t6, ($t6)
/* 0041B994 24040012 */  li    $a0, 18
/* 0041B998 11C00018 */  beqz  $t6, .L0041B9FC
/* 0041B99C 00000000 */   nop   
/* 0041B9A0 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041B9A4 24040012 */  li    $a0, 18
/* 0041B9A8 AFA5002C */  sw    $a1, 0x2c($sp)
/* 0041B9AC 0320F809 */  jalr  $t9
/* 0041B9B0 AFA60028 */   sw    $a2, 0x28($sp)
/* 0041B9B4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041B9B8 8FA5002C */  lw    $a1, 0x2c($sp)
/* 0041B9BC 8FA60028 */  lw    $a2, 0x28($sp)
/* 0041B9C0 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041B9C4 24040018 */  li    $a0, 24
/* 0041B9C8 8FA70030 */  lw    $a3, 0x30($sp)
/* 0041B9CC 0320F809 */  jalr  $t9
/* 0041B9D0 00000000 */   nop   
/* 0041B9D4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041B9D8 2404000F */  li    $a0, 15
/* 0041B9DC 02002825 */  move  $a1, $s0
/* 0041B9E0 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041B9E4 02203025 */  move  $a2, $s1
/* 0041B9E8 8FA70040 */  lw    $a3, 0x40($sp)
/* 0041B9EC 0320F809 */  jalr  $t9
/* 0041B9F0 00000000 */   nop   
/* 0041B9F4 10000017 */  b     .L0041BA54
/* 0041B9F8 8FBC0020 */   lw    $gp, 0x20($sp)
.L0041B9FC:
/* 0041B9FC 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041BA00 02002825 */  move  $a1, $s0
/* 0041BA04 02203025 */  move  $a2, $s1
/* 0041BA08 0320F809 */  jalr  $t9
/* 0041BA0C 8FA70040 */   lw    $a3, 0x40($sp)
/* 0041BA10 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041BA14 24040018 */  li    $a0, 24
/* 0041BA18 02002825 */  move  $a1, $s0
/* 0041BA1C 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041BA20 02203025 */  move  $a2, $s1
/* 0041BA24 8FA70030 */  lw    $a3, 0x30($sp)
/* 0041BA28 0320F809 */  jalr  $t9
/* 0041BA2C 00000000 */   nop   
/* 0041BA30 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041BA34 2404000F */  li    $a0, 15
/* 0041BA38 26050001 */  addiu $a1, $s0, 1
/* 0041BA3C 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041BA40 26260001 */  addiu $a2, $s1, 1
/* 0041BA44 8FA70040 */  lw    $a3, 0x40($sp)
/* 0041BA48 0320F809 */  jalr  $t9
/* 0041BA4C 00000000 */   nop   
/* 0041BA50 8FBC0020 */  lw    $gp, 0x20($sp)
.L0041BA54:
/* 0041BA54 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 0041BA58 8FA40030 */  lw    $a0, 0x30($sp)
/* 0041BA5C 0320F809 */  jalr  $t9
/* 0041BA60 00000000 */   nop   
/* 0041BA64 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0041BA68 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041BA6C 8FB00018 */  lw    $s0, 0x18($sp)
/* 0041BA70 8FB1001C */  lw    $s1, 0x1c($sp)
/* 0041BA74 03E00008 */  jr    $ra
/* 0041BA78 27BD0038 */   addiu $sp, $sp, 0x38

glabel emit_branch_rrll
    .ent emit_branch_rrll
    # 00423D28 jump
    # 0042BDAC eval
/* 0041BA7C 3C1C0FC0 */  .cpload $t9
/* 0041BA80 279C3FD4 */  
/* 0041BA84 0399E021 */  
/* 0041BA88 8F8E89D8 */  lw     $t6, %got(opcode_arch)($gp)
/* 0041BA8C 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 0041BA90 AFB1001C */  sw    $s1, 0x1c($sp)
/* 0041BA94 91CE0000 */  lbu   $t6, ($t6)
/* 0041BA98 AFB00018 */  sw    $s0, 0x18($sp)
/* 0041BA9C 30B000FF */  andi  $s0, $a1, 0xff
/* 0041BAA0 30D100FF */  andi  $s1, $a2, 0xff
/* 0041BAA4 AFBF0024 */  sw    $ra, 0x24($sp)
/* 0041BAA8 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0041BAAC AFA40030 */  sw    $a0, 0x30($sp)
/* 0041BAB0 AFA50034 */  sw    $a1, 0x34($sp)
/* 0041BAB4 15C00077 */  bnez  $t6, .L0041BC94
/* 0041BAB8 AFA60038 */   sw    $a2, 0x38($sp)
/* 0041BABC 8FAF0040 */  lw    $t7, 0x40($sp)
/* 0041BAC0 3C010501 */  lui   $at, 0x501
/* 0041BAC4 3082FFFF */  andi  $v0, $a0, 0xffff
/* 0041BAC8 91F80021 */  lbu   $t8, 0x21($t7)
/* 0041BACC 244CFFF3 */  addiu $t4, $v0, -0xd
/* 0041BAD0 3319001F */  andi  $t9, $t8, 0x1f
/* 0041BAD4 2F280020 */  sltiu $t0, $t9, 0x20
/* 0041BAD8 00084823 */  negu  $t1, $t0
/* 0041BADC 01215024 */  and   $t2, $t1, $at
/* 0041BAE0 032A5804 */  sllv  $t3, $t2, $t9
/* 0041BAE4 0561006B */  bgez  $t3, .L0041BC94
/* 0041BAE8 2D81000E */   sltiu $at, $t4, 0xe
/* 0041BAEC 10200062 */  beqz  $at, .L0041BC78
/* 0041BAF0 00000000 */   nop   
/* 0041BAF4 8F818038 */  lw    $at, %got(jtbl_10009690)($gp)
/* 0041BAF8 000C6080 */  sll   $t4, $t4, 2
/* 0041BAFC 002C0821 */  addu  $at, $at, $t4
/* 0041BB00 8C2C9690 */  lw    $t4, %lo(jtbl_10009690)($at)
/* 0041BB04 019C6021 */  addu  $t4, $t4, $gp
/* 0041BB08 01800008 */  jr    $t4
/* 0041BB0C 00000000 */   nop   
.L0041BB10:
/* 0041BB10 8F99801C */  lw    $t9, %got(func_0041AF70)($gp)
/* 0041BB14 02002025 */  move  $a0, $s0
/* 0041BB18 02202825 */  move  $a1, $s1
/* 0041BB1C 2739AF70 */  addiu $t9, %lo(func_0041AF70) # addiu $t9, $t9, -0x5090
/* 0041BB20 00E03025 */  move  $a2, $a3
/* 0041BB24 0320F809 */  jalr  $t9
/* 0041BB28 27A20030 */   addiu $v0, $sp, 0x30
/* 0041BB2C 1000005F */  b     .L0041BCAC
/* 0041BB30 8FBC0020 */   lw    $gp, 0x20($sp)
.L0041BB34:
/* 0041BB34 8F99801C */  lw    $t9, %got(func_0041AFE4)($gp)
/* 0041BB38 02002025 */  move  $a0, $s0
/* 0041BB3C 02202825 */  move  $a1, $s1
/* 0041BB40 2739AFE4 */  addiu $t9, %lo(func_0041AFE4) # addiu $t9, $t9, -0x501c
/* 0041BB44 00E03025 */  move  $a2, $a3
/* 0041BB48 0320F809 */  jalr  $t9
/* 0041BB4C 27A20030 */   addiu $v0, $sp, 0x30
/* 0041BB50 10000056 */  b     .L0041BCAC
/* 0041BB54 8FBC0020 */   lw    $gp, 0x20($sp)
.L0041BB58:
/* 0041BB58 8F99801C */  lw    $t9, %got(func_0041B07C)($gp)
/* 0041BB5C 02002025 */  move  $a0, $s0
/* 0041BB60 02202825 */  move  $a1, $s1
/* 0041BB64 2739B07C */  addiu $t9, %lo(func_0041B07C) # addiu $t9, $t9, -0x4f84
/* 0041BB68 00E03025 */  move  $a2, $a3
/* 0041BB6C 0320F809 */  jalr  $t9
/* 0041BB70 27A20030 */   addiu $v0, $sp, 0x30
/* 0041BB74 1000004D */  b     .L0041BCAC
/* 0041BB78 8FBC0020 */   lw    $gp, 0x20($sp)
.L0041BB7C:
/* 0041BB7C 8F99801C */  lw    $t9, %got(func_0041B1BC)($gp)
/* 0041BB80 02002025 */  move  $a0, $s0
/* 0041BB84 02202825 */  move  $a1, $s1
/* 0041BB88 2739B1BC */  addiu $t9, %lo(func_0041B1BC) # addiu $t9, $t9, -0x4e44
/* 0041BB8C 00E03025 */  move  $a2, $a3
/* 0041BB90 0320F809 */  jalr  $t9
/* 0041BB94 27A20030 */   addiu $v0, $sp, 0x30
/* 0041BB98 10000044 */  b     .L0041BCAC
/* 0041BB9C 8FBC0020 */   lw    $gp, 0x20($sp)
.L0041BBA0:
/* 0041BBA0 8F99801C */  lw    $t9, %got(func_0041B2FC)($gp)
/* 0041BBA4 02002025 */  move  $a0, $s0
/* 0041BBA8 02202825 */  move  $a1, $s1
/* 0041BBAC 2739B2FC */  addiu $t9, %lo(func_0041B2FC) # addiu $t9, $t9, -0x4d04
/* 0041BBB0 00E03025 */  move  $a2, $a3
/* 0041BBB4 0320F809 */  jalr  $t9
/* 0041BBB8 27A20030 */   addiu $v0, $sp, 0x30
/* 0041BBBC 1000003B */  b     .L0041BCAC
/* 0041BBC0 8FBC0020 */   lw    $gp, 0x20($sp)
.L0041BBC4:
/* 0041BBC4 8F99801C */  lw    $t9, %got(func_0041B43C)($gp)
/* 0041BBC8 02002025 */  move  $a0, $s0
/* 0041BBCC 02202825 */  move  $a1, $s1
/* 0041BBD0 2739B43C */  addiu $t9, %lo(func_0041B43C) # addiu $t9, $t9, -0x4bc4
/* 0041BBD4 00E03025 */  move  $a2, $a3
/* 0041BBD8 0320F809 */  jalr  $t9
/* 0041BBDC 27A20030 */   addiu $v0, $sp, 0x30
/* 0041BBE0 10000032 */  b     .L0041BCAC
/* 0041BBE4 8FBC0020 */   lw    $gp, 0x20($sp)
.L0041BBE8:
/* 0041BBE8 8F99801C */  lw    $t9, %got(func_0041B57C)($gp)
/* 0041BBEC 02002025 */  move  $a0, $s0
/* 0041BBF0 02202825 */  move  $a1, $s1
/* 0041BBF4 2739B57C */  addiu $t9, %lo(func_0041B57C) # addiu $t9, $t9, -0x4a84
/* 0041BBF8 00E03025 */  move  $a2, $a3
/* 0041BBFC 0320F809 */  jalr  $t9
/* 0041BC00 27A20030 */   addiu $v0, $sp, 0x30
/* 0041BC04 10000029 */  b     .L0041BCAC
/* 0041BC08 8FBC0020 */   lw    $gp, 0x20($sp)
.L0041BC0C:
/* 0041BC0C 8F99801C */  lw    $t9, %got(func_0041B6BC)($gp)
/* 0041BC10 02002025 */  move  $a0, $s0
/* 0041BC14 02202825 */  move  $a1, $s1
/* 0041BC18 2739B6BC */  addiu $t9, %lo(func_0041B6BC) # addiu $t9, $t9, -0x4944
/* 0041BC1C 00E03025 */  move  $a2, $a3
/* 0041BC20 0320F809 */  jalr  $t9
/* 0041BC24 27A20030 */   addiu $v0, $sp, 0x30
/* 0041BC28 10000020 */  b     .L0041BCAC
/* 0041BC2C 8FBC0020 */   lw    $gp, 0x20($sp)
.L0041BC30:
/* 0041BC30 8F99801C */  lw    $t9, %got(func_0041B7FC)($gp)
/* 0041BC34 02002025 */  move  $a0, $s0
/* 0041BC38 02202825 */  move  $a1, $s1
/* 0041BC3C 2739B7FC */  addiu $t9, %lo(func_0041B7FC) # addiu $t9, $t9, -0x4804
/* 0041BC40 00E03025 */  move  $a2, $a3
/* 0041BC44 0320F809 */  jalr  $t9
/* 0041BC48 27A20030 */   addiu $v0, $sp, 0x30
/* 0041BC4C 10000017 */  b     .L0041BCAC
/* 0041BC50 8FBC0020 */   lw    $gp, 0x20($sp)
.L0041BC54:
/* 0041BC54 8F99801C */  lw    $t9, %got(func_0041B93C)($gp)
/* 0041BC58 02002025 */  move  $a0, $s0
/* 0041BC5C 02202825 */  move  $a1, $s1
/* 0041BC60 2739B93C */  addiu $t9, %lo(func_0041B93C) # addiu $t9, $t9, -0x46c4
/* 0041BC64 00E03025 */  move  $a2, $a3
/* 0041BC68 0320F809 */  jalr  $t9
/* 0041BC6C 27A20030 */   addiu $v0, $sp, 0x30
/* 0041BC70 1000000E */  b     .L0041BCAC
/* 0041BC74 8FBC0020 */   lw    $gp, 0x20($sp)
.L0041BC78:
/* 0041BC78 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041BC7C 02002825 */  move  $a1, $s0
/* 0041BC80 02203025 */  move  $a2, $s1
/* 0041BC84 0320F809 */  jalr  $t9
/* 0041BC88 00000000 */   nop   
/* 0041BC8C 10000007 */  b     .L0041BCAC
/* 0041BC90 8FBC0020 */   lw    $gp, 0x20($sp)
.L0041BC94:
/* 0041BC94 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041BC98 02002825 */  move  $a1, $s0
/* 0041BC9C 02203025 */  move  $a2, $s1
/* 0041BCA0 0320F809 */  jalr  $t9
/* 0041BCA4 00000000 */   nop   
/* 0041BCA8 8FBC0020 */  lw    $gp, 0x20($sp)
.L0041BCAC:
/* 0041BCAC 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0041BCB0 8FB00018 */  lw    $s0, 0x18($sp)
/* 0041BCB4 8FB1001C */  lw    $s1, 0x1c($sp)
/* 0041BCB8 03E00008 */  jr    $ra
/* 0041BCBC 27BD0030 */   addiu $sp, $sp, 0x30
    .type emit_branch_rrll, @function
    .size emit_branch_rrll, .-emit_branch_rrll
    .end emit_branch_rrll

    .type func_0041BCC0, @function
func_0041BCC0:
    # 0041C388 emit_branch_rill
/* 0041BCC0 3C1C0FC0 */  .cpload $t9
/* 0041BCC4 279C3D90 */  
/* 0041BCC8 0399E021 */  
/* 0041BCCC 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0041BCD0 8F99822C */  lw    $t9, %call16(emit_rill)($gp)
/* 0041BCD4 AFA60028 */  sw    $a2, 0x28($sp)
/* 0041BCD8 00A03025 */  move  $a2, $a1
/* 0041BCDC AFBF001C */  sw    $ra, 0x1c($sp)
/* 0041BCE0 AFA40020 */  sw    $a0, 0x20($sp)
/* 0041BCE4 AFA50024 */  sw    $a1, 0x24($sp)
/* 0041BCE8 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0041BCEC AFA7002C */  sw    $a3, 0x2c($sp)
/* 0041BCF0 93A50023 */  lbu   $a1, 0x23($sp)
/* 0041BCF4 0320F809 */  jalr  $t9
/* 0041BCF8 2404001A */   li    $a0, 26
/* 0041BCFC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041BD00 93A50023 */  lbu   $a1, 0x23($sp)
/* 0041BD04 2404001A */  li    $a0, 26
/* 0041BD08 8F99822C */  lw    $t9, %call16(emit_rill)($gp)
/* 0041BD0C 8FA60028 */  lw    $a2, 0x28($sp)
/* 0041BD10 8FA7002C */  lw    $a3, 0x2c($sp)
/* 0041BD14 0320F809 */  jalr  $t9
/* 0041BD18 24A50001 */   addiu $a1, $a1, 1
/* 0041BD1C 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0041BD20 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041BD24 27BD0020 */  addiu $sp, $sp, 0x20
/* 0041BD28 03E00008 */  jr    $ra
/* 0041BD2C 00000000 */   nop   

    .type func_0041BD30, @function
func_0041BD30:
    # 0041C388 emit_branch_rill
/* 0041BD30 3C1C0FC0 */  .cpload $t9
/* 0041BD34 279C3D20 */  
/* 0041BD38 0399E021 */  
/* 0041BD3C 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0041BD40 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 0041BD44 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0041BD48 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0041BD4C AFA40028 */  sw    $a0, 0x28($sp)
/* 0041BD50 AFA5002C */  sw    $a1, 0x2c($sp)
/* 0041BD54 AFA60030 */  sw    $a2, 0x30($sp)
/* 0041BD58 0320F809 */  jalr  $t9
/* 0041BD5C AFA70034 */   sw    $a3, 0x34($sp)
/* 0041BD60 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041BD64 AFA20020 */  sw    $v0, 0x20($sp)
/* 0041BD68 2404001A */  li    $a0, 26
/* 0041BD6C 8F99822C */  lw    $t9, %call16(emit_rill)($gp)
/* 0041BD70 93A5002B */  lbu   $a1, 0x2b($sp)
/* 0041BD74 8FA6002C */  lw    $a2, 0x2c($sp)
/* 0041BD78 0320F809 */  jalr  $t9
/* 0041BD7C 00403825 */   move  $a3, $v0
/* 0041BD80 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041BD84 93A5002B */  lbu   $a1, 0x2b($sp)
/* 0041BD88 2404000D */  li    $a0, 13
/* 0041BD8C 8F99822C */  lw    $t9, %call16(emit_rill)($gp)
/* 0041BD90 8FA60030 */  lw    $a2, 0x30($sp)
/* 0041BD94 8FA70034 */  lw    $a3, 0x34($sp)
/* 0041BD98 0320F809 */  jalr  $t9
/* 0041BD9C 24A50001 */   addiu $a1, $a1, 1
/* 0041BDA0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041BDA4 8FA40020 */  lw    $a0, 0x20($sp)
/* 0041BDA8 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 0041BDAC 0320F809 */  jalr  $t9
/* 0041BDB0 00000000 */   nop   
/* 0041BDB4 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0041BDB8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041BDBC 27BD0028 */  addiu $sp, $sp, 0x28
/* 0041BDC0 03E00008 */  jr    $ra
/* 0041BDC4 00000000 */   nop   

    .type func_0041BDC8, @function
func_0041BDC8:
    # 0041C388 emit_branch_rill
/* 0041BDC8 3C1C0FC0 */  .cpload $t9
/* 0041BDCC 279C3C88 */  
/* 0041BDD0 0399E021 */  
/* 0041BDD4 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0041BDD8 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 0041BDDC AFBF001C */  sw    $ra, 0x1c($sp)
/* 0041BDE0 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0041BDE4 AFA40028 */  sw    $a0, 0x28($sp)
/* 0041BDE8 AFA5002C */  sw    $a1, 0x2c($sp)
/* 0041BDEC AFA60030 */  sw    $a2, 0x30($sp)
/* 0041BDF0 0320F809 */  jalr  $t9
/* 0041BDF4 AFA70034 */   sw    $a3, 0x34($sp)
/* 0041BDF8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041BDFC AFA20020 */  sw    $v0, 0x20($sp)
/* 0041BE00 24040011 */  li    $a0, 17
/* 0041BE04 8F99822C */  lw    $t9, %call16(emit_rill)($gp)
/* 0041BE08 93A5002B */  lbu   $a1, 0x2b($sp)
/* 0041BE0C 8FA6002C */  lw    $a2, 0x2c($sp)
/* 0041BE10 0320F809 */  jalr  $t9
/* 0041BE14 8FA70034 */   lw    $a3, 0x34($sp)
/* 0041BE18 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041BE1C 24040017 */  li    $a0, 23
/* 0041BE20 93A5002B */  lbu   $a1, 0x2b($sp)
/* 0041BE24 8F99822C */  lw    $t9, %call16(emit_rill)($gp)
/* 0041BE28 8FA6002C */  lw    $a2, 0x2c($sp)
/* 0041BE2C 8FA70020 */  lw    $a3, 0x20($sp)
/* 0041BE30 0320F809 */  jalr  $t9
/* 0041BE34 00000000 */   nop   
/* 0041BE38 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041BE3C 93A5002B */  lbu   $a1, 0x2b($sp)
/* 0041BE40 24040012 */  li    $a0, 18
/* 0041BE44 8F99822C */  lw    $t9, %call16(emit_rill)($gp)
/* 0041BE48 8FA60030 */  lw    $a2, 0x30($sp)
/* 0041BE4C 8FA70034 */  lw    $a3, 0x34($sp)
/* 0041BE50 0320F809 */  jalr  $t9
/* 0041BE54 24A50001 */   addiu $a1, $a1, 1
/* 0041BE58 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041BE5C 8FA40020 */  lw    $a0, 0x20($sp)
/* 0041BE60 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 0041BE64 0320F809 */  jalr  $t9
/* 0041BE68 00000000 */   nop   
/* 0041BE6C 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0041BE70 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041BE74 27BD0028 */  addiu $sp, $sp, 0x28
/* 0041BE78 03E00008 */  jr    $ra
/* 0041BE7C 00000000 */   nop   

    .type func_0041BE80, @function
func_0041BE80:
    # 0041C388 emit_branch_rill
/* 0041BE80 3C1C0FC0 */  .cpload $t9
/* 0041BE84 279C3BD0 */  
/* 0041BE88 0399E021 */  
/* 0041BE8C 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0041BE90 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 0041BE94 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0041BE98 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0041BE9C AFA40028 */  sw    $a0, 0x28($sp)
/* 0041BEA0 AFA5002C */  sw    $a1, 0x2c($sp)
/* 0041BEA4 AFA60030 */  sw    $a2, 0x30($sp)
/* 0041BEA8 0320F809 */  jalr  $t9
/* 0041BEAC AFA70034 */   sw    $a3, 0x34($sp)
/* 0041BEB0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041BEB4 AFA20020 */  sw    $v0, 0x20($sp)
/* 0041BEB8 24040012 */  li    $a0, 18
/* 0041BEBC 8F99822C */  lw    $t9, %call16(emit_rill)($gp)
/* 0041BEC0 93A5002B */  lbu   $a1, 0x2b($sp)
/* 0041BEC4 8FA6002C */  lw    $a2, 0x2c($sp)
/* 0041BEC8 0320F809 */  jalr  $t9
/* 0041BECC 8FA70034 */   lw    $a3, 0x34($sp)
/* 0041BED0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041BED4 24040018 */  li    $a0, 24
/* 0041BED8 93A5002B */  lbu   $a1, 0x2b($sp)
/* 0041BEDC 8F99822C */  lw    $t9, %call16(emit_rill)($gp)
/* 0041BEE0 8FA6002C */  lw    $a2, 0x2c($sp)
/* 0041BEE4 8FA70020 */  lw    $a3, 0x20($sp)
/* 0041BEE8 0320F809 */  jalr  $t9
/* 0041BEEC 00000000 */   nop   
/* 0041BEF0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041BEF4 93A5002B */  lbu   $a1, 0x2b($sp)
/* 0041BEF8 24040012 */  li    $a0, 18
/* 0041BEFC 8F99822C */  lw    $t9, %call16(emit_rill)($gp)
/* 0041BF00 8FA60030 */  lw    $a2, 0x30($sp)
/* 0041BF04 8FA70034 */  lw    $a3, 0x34($sp)
/* 0041BF08 0320F809 */  jalr  $t9
/* 0041BF0C 24A50001 */   addiu $a1, $a1, 1
/* 0041BF10 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041BF14 8FA40020 */  lw    $a0, 0x20($sp)
/* 0041BF18 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 0041BF1C 0320F809 */  jalr  $t9
/* 0041BF20 00000000 */   nop   
/* 0041BF24 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0041BF28 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041BF2C 27BD0028 */  addiu $sp, $sp, 0x28
/* 0041BF30 03E00008 */  jr    $ra
/* 0041BF34 00000000 */   nop   

    .type func_0041BF38, @function
func_0041BF38:
    # 0041C388 emit_branch_rill
/* 0041BF38 3C1C0FC0 */  .cpload $t9
/* 0041BF3C 279C3B18 */  
/* 0041BF40 0399E021 */  
/* 0041BF44 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0041BF48 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 0041BF4C AFBF001C */  sw    $ra, 0x1c($sp)
/* 0041BF50 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0041BF54 AFA40028 */  sw    $a0, 0x28($sp)
/* 0041BF58 AFA5002C */  sw    $a1, 0x2c($sp)
/* 0041BF5C AFA60030 */  sw    $a2, 0x30($sp)
/* 0041BF60 0320F809 */  jalr  $t9
/* 0041BF64 AFA70034 */   sw    $a3, 0x34($sp)
/* 0041BF68 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041BF6C AFA20020 */  sw    $v0, 0x20($sp)
/* 0041BF70 24040011 */  li    $a0, 17
/* 0041BF74 8F99822C */  lw    $t9, %call16(emit_rill)($gp)
/* 0041BF78 93A5002B */  lbu   $a1, 0x2b($sp)
/* 0041BF7C 8FA6002C */  lw    $a2, 0x2c($sp)
/* 0041BF80 0320F809 */  jalr  $t9
/* 0041BF84 8FA70034 */   lw    $a3, 0x34($sp)
/* 0041BF88 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041BF8C 24040017 */  li    $a0, 23
/* 0041BF90 93A5002B */  lbu   $a1, 0x2b($sp)
/* 0041BF94 8F99822C */  lw    $t9, %call16(emit_rill)($gp)
/* 0041BF98 8FA6002C */  lw    $a2, 0x2c($sp)
/* 0041BF9C 8FA70020 */  lw    $a3, 0x20($sp)
/* 0041BFA0 0320F809 */  jalr  $t9
/* 0041BFA4 00000000 */   nop   
/* 0041BFA8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041BFAC 93A5002B */  lbu   $a1, 0x2b($sp)
/* 0041BFB0 2404000F */  li    $a0, 15
/* 0041BFB4 8F99822C */  lw    $t9, %call16(emit_rill)($gp)
/* 0041BFB8 8FA60030 */  lw    $a2, 0x30($sp)
/* 0041BFBC 8FA70034 */  lw    $a3, 0x34($sp)
/* 0041BFC0 0320F809 */  jalr  $t9
/* 0041BFC4 24A50001 */   addiu $a1, $a1, 1
/* 0041BFC8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041BFCC 8FA40020 */  lw    $a0, 0x20($sp)
/* 0041BFD0 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 0041BFD4 0320F809 */  jalr  $t9
/* 0041BFD8 00000000 */   nop   
/* 0041BFDC 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0041BFE0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041BFE4 27BD0028 */  addiu $sp, $sp, 0x28
/* 0041BFE8 03E00008 */  jr    $ra
/* 0041BFEC 00000000 */   nop   

    .type func_0041BFF0, @function
func_0041BFF0:
    # 0041C388 emit_branch_rill
/* 0041BFF0 3C1C0FC0 */  .cpload $t9
/* 0041BFF4 279C3A60 */  
/* 0041BFF8 0399E021 */  
/* 0041BFFC 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0041C000 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 0041C004 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0041C008 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0041C00C AFA40028 */  sw    $a0, 0x28($sp)
/* 0041C010 AFA5002C */  sw    $a1, 0x2c($sp)
/* 0041C014 AFA60030 */  sw    $a2, 0x30($sp)
/* 0041C018 0320F809 */  jalr  $t9
/* 0041C01C AFA70034 */   sw    $a3, 0x34($sp)
/* 0041C020 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041C024 AFA20020 */  sw    $v0, 0x20($sp)
/* 0041C028 24040012 */  li    $a0, 18
/* 0041C02C 8F99822C */  lw    $t9, %call16(emit_rill)($gp)
/* 0041C030 93A5002B */  lbu   $a1, 0x2b($sp)
/* 0041C034 8FA6002C */  lw    $a2, 0x2c($sp)
/* 0041C038 0320F809 */  jalr  $t9
/* 0041C03C 8FA70034 */   lw    $a3, 0x34($sp)
/* 0041C040 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041C044 24040018 */  li    $a0, 24
/* 0041C048 93A5002B */  lbu   $a1, 0x2b($sp)
/* 0041C04C 8F99822C */  lw    $t9, %call16(emit_rill)($gp)
/* 0041C050 8FA6002C */  lw    $a2, 0x2c($sp)
/* 0041C054 8FA70020 */  lw    $a3, 0x20($sp)
/* 0041C058 0320F809 */  jalr  $t9
/* 0041C05C 00000000 */   nop   
/* 0041C060 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041C064 93A5002B */  lbu   $a1, 0x2b($sp)
/* 0041C068 2404000F */  li    $a0, 15
/* 0041C06C 8F99822C */  lw    $t9, %call16(emit_rill)($gp)
/* 0041C070 8FA60030 */  lw    $a2, 0x30($sp)
/* 0041C074 8FA70034 */  lw    $a3, 0x34($sp)
/* 0041C078 0320F809 */  jalr  $t9
/* 0041C07C 24A50001 */   addiu $a1, $a1, 1
/* 0041C080 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041C084 8FA40020 */  lw    $a0, 0x20($sp)
/* 0041C088 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 0041C08C 0320F809 */  jalr  $t9
/* 0041C090 00000000 */   nop   
/* 0041C094 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0041C098 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041C09C 27BD0028 */  addiu $sp, $sp, 0x28
/* 0041C0A0 03E00008 */  jr    $ra
/* 0041C0A4 00000000 */   nop   

    .type func_0041C0A8, @function
func_0041C0A8:
    # 0041C388 emit_branch_rill
/* 0041C0A8 3C1C0FC0 */  .cpload $t9
/* 0041C0AC 279C39A8 */  
/* 0041C0B0 0399E021 */  
/* 0041C0B4 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0041C0B8 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 0041C0BC AFBF001C */  sw    $ra, 0x1c($sp)
/* 0041C0C0 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0041C0C4 AFA40028 */  sw    $a0, 0x28($sp)
/* 0041C0C8 AFA5002C */  sw    $a1, 0x2c($sp)
/* 0041C0CC AFA60030 */  sw    $a2, 0x30($sp)
/* 0041C0D0 0320F809 */  jalr  $t9
/* 0041C0D4 AFA70034 */   sw    $a3, 0x34($sp)
/* 0041C0D8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041C0DC AFA20020 */  sw    $v0, 0x20($sp)
/* 0041C0E0 24040017 */  li    $a0, 23
/* 0041C0E4 8F99822C */  lw    $t9, %call16(emit_rill)($gp)
/* 0041C0E8 93A5002B */  lbu   $a1, 0x2b($sp)
/* 0041C0EC 8FA6002C */  lw    $a2, 0x2c($sp)
/* 0041C0F0 0320F809 */  jalr  $t9
/* 0041C0F4 8FA70034 */   lw    $a3, 0x34($sp)
/* 0041C0F8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041C0FC 24040011 */  li    $a0, 17
/* 0041C100 93A5002B */  lbu   $a1, 0x2b($sp)
/* 0041C104 8F99822C */  lw    $t9, %call16(emit_rill)($gp)
/* 0041C108 8FA6002C */  lw    $a2, 0x2c($sp)
/* 0041C10C 8FA70020 */  lw    $a3, 0x20($sp)
/* 0041C110 0320F809 */  jalr  $t9
/* 0041C114 00000000 */   nop   
/* 0041C118 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041C11C 93A5002B */  lbu   $a1, 0x2b($sp)
/* 0041C120 24040018 */  li    $a0, 24
/* 0041C124 8F99822C */  lw    $t9, %call16(emit_rill)($gp)
/* 0041C128 8FA60030 */  lw    $a2, 0x30($sp)
/* 0041C12C 8FA70034 */  lw    $a3, 0x34($sp)
/* 0041C130 0320F809 */  jalr  $t9
/* 0041C134 24A50001 */   addiu $a1, $a1, 1
/* 0041C138 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041C13C 8FA40020 */  lw    $a0, 0x20($sp)
/* 0041C140 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 0041C144 0320F809 */  jalr  $t9
/* 0041C148 00000000 */   nop   
/* 0041C14C 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0041C150 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041C154 27BD0028 */  addiu $sp, $sp, 0x28
/* 0041C158 03E00008 */  jr    $ra
/* 0041C15C 00000000 */   nop   

    .type func_0041C160, @function
func_0041C160:
    # 0041C388 emit_branch_rill
/* 0041C160 3C1C0FC0 */  .cpload $t9
/* 0041C164 279C38F0 */  
/* 0041C168 0399E021 */  
/* 0041C16C 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0041C170 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 0041C174 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0041C178 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0041C17C AFA40028 */  sw    $a0, 0x28($sp)
/* 0041C180 AFA5002C */  sw    $a1, 0x2c($sp)
/* 0041C184 AFA60030 */  sw    $a2, 0x30($sp)
/* 0041C188 0320F809 */  jalr  $t9
/* 0041C18C AFA70034 */   sw    $a3, 0x34($sp)
/* 0041C190 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041C194 AFA20020 */  sw    $v0, 0x20($sp)
/* 0041C198 24040018 */  li    $a0, 24
/* 0041C19C 8F99822C */  lw    $t9, %call16(emit_rill)($gp)
/* 0041C1A0 93A5002B */  lbu   $a1, 0x2b($sp)
/* 0041C1A4 8FA6002C */  lw    $a2, 0x2c($sp)
/* 0041C1A8 0320F809 */  jalr  $t9
/* 0041C1AC 8FA70034 */   lw    $a3, 0x34($sp)
/* 0041C1B0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041C1B4 24040012 */  li    $a0, 18
/* 0041C1B8 93A5002B */  lbu   $a1, 0x2b($sp)
/* 0041C1BC 8F99822C */  lw    $t9, %call16(emit_rill)($gp)
/* 0041C1C0 8FA6002C */  lw    $a2, 0x2c($sp)
/* 0041C1C4 8FA70020 */  lw    $a3, 0x20($sp)
/* 0041C1C8 0320F809 */  jalr  $t9
/* 0041C1CC 00000000 */   nop   
/* 0041C1D0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041C1D4 93A5002B */  lbu   $a1, 0x2b($sp)
/* 0041C1D8 24040018 */  li    $a0, 24
/* 0041C1DC 8F99822C */  lw    $t9, %call16(emit_rill)($gp)
/* 0041C1E0 8FA60030 */  lw    $a2, 0x30($sp)
/* 0041C1E4 8FA70034 */  lw    $a3, 0x34($sp)
/* 0041C1E8 0320F809 */  jalr  $t9
/* 0041C1EC 24A50001 */   addiu $a1, $a1, 1
/* 0041C1F0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041C1F4 8FA40020 */  lw    $a0, 0x20($sp)
/* 0041C1F8 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 0041C1FC 0320F809 */  jalr  $t9
/* 0041C200 00000000 */   nop   
/* 0041C204 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0041C208 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041C20C 27BD0028 */  addiu $sp, $sp, 0x28
/* 0041C210 03E00008 */  jr    $ra
/* 0041C214 00000000 */   nop   

    .type func_0041C218, @function
func_0041C218:
    # 0041C388 emit_branch_rill
/* 0041C218 3C1C0FC0 */  .cpload $t9
/* 0041C21C 279C3838 */  
/* 0041C220 0399E021 */  
/* 0041C224 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0041C228 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 0041C22C AFBF001C */  sw    $ra, 0x1c($sp)
/* 0041C230 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0041C234 AFA40028 */  sw    $a0, 0x28($sp)
/* 0041C238 AFA5002C */  sw    $a1, 0x2c($sp)
/* 0041C23C AFA60030 */  sw    $a2, 0x30($sp)
/* 0041C240 0320F809 */  jalr  $t9
/* 0041C244 AFA70034 */   sw    $a3, 0x34($sp)
/* 0041C248 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041C24C AFA20020 */  sw    $v0, 0x20($sp)
/* 0041C250 24040017 */  li    $a0, 23
/* 0041C254 8F99822C */  lw    $t9, %call16(emit_rill)($gp)
/* 0041C258 93A5002B */  lbu   $a1, 0x2b($sp)
/* 0041C25C 8FA6002C */  lw    $a2, 0x2c($sp)
/* 0041C260 0320F809 */  jalr  $t9
/* 0041C264 8FA70034 */   lw    $a3, 0x34($sp)
/* 0041C268 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041C26C 24040011 */  li    $a0, 17
/* 0041C270 93A5002B */  lbu   $a1, 0x2b($sp)
/* 0041C274 8F99822C */  lw    $t9, %call16(emit_rill)($gp)
/* 0041C278 8FA6002C */  lw    $a2, 0x2c($sp)
/* 0041C27C 8FA70020 */  lw    $a3, 0x20($sp)
/* 0041C280 0320F809 */  jalr  $t9
/* 0041C284 00000000 */   nop   
/* 0041C288 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041C28C 93A5002B */  lbu   $a1, 0x2b($sp)
/* 0041C290 24040015 */  li    $a0, 21
/* 0041C294 8F99822C */  lw    $t9, %call16(emit_rill)($gp)
/* 0041C298 8FA60030 */  lw    $a2, 0x30($sp)
/* 0041C29C 8FA70034 */  lw    $a3, 0x34($sp)
/* 0041C2A0 0320F809 */  jalr  $t9
/* 0041C2A4 24A50001 */   addiu $a1, $a1, 1
/* 0041C2A8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041C2AC 8FA40020 */  lw    $a0, 0x20($sp)
/* 0041C2B0 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 0041C2B4 0320F809 */  jalr  $t9
/* 0041C2B8 00000000 */   nop   
/* 0041C2BC 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0041C2C0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041C2C4 27BD0028 */  addiu $sp, $sp, 0x28
/* 0041C2C8 03E00008 */  jr    $ra
/* 0041C2CC 00000000 */   nop   

    .type func_0041C2D0, @function
func_0041C2D0:
    # 0041C388 emit_branch_rill
/* 0041C2D0 3C1C0FC0 */  .cpload $t9
/* 0041C2D4 279C3780 */  
/* 0041C2D8 0399E021 */  
/* 0041C2DC 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0041C2E0 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 0041C2E4 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0041C2E8 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0041C2EC AFA40028 */  sw    $a0, 0x28($sp)
/* 0041C2F0 AFA5002C */  sw    $a1, 0x2c($sp)
/* 0041C2F4 AFA60030 */  sw    $a2, 0x30($sp)
/* 0041C2F8 0320F809 */  jalr  $t9
/* 0041C2FC AFA70034 */   sw    $a3, 0x34($sp)
/* 0041C300 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041C304 AFA20020 */  sw    $v0, 0x20($sp)
/* 0041C308 24040018 */  li    $a0, 24
/* 0041C30C 8F99822C */  lw    $t9, %call16(emit_rill)($gp)
/* 0041C310 93A5002B */  lbu   $a1, 0x2b($sp)
/* 0041C314 8FA6002C */  lw    $a2, 0x2c($sp)
/* 0041C318 0320F809 */  jalr  $t9
/* 0041C31C 8FA70034 */   lw    $a3, 0x34($sp)
/* 0041C320 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041C324 24040012 */  li    $a0, 18
/* 0041C328 93A5002B */  lbu   $a1, 0x2b($sp)
/* 0041C32C 8F99822C */  lw    $t9, %call16(emit_rill)($gp)
/* 0041C330 8FA6002C */  lw    $a2, 0x2c($sp)
/* 0041C334 8FA70020 */  lw    $a3, 0x20($sp)
/* 0041C338 0320F809 */  jalr  $t9
/* 0041C33C 00000000 */   nop   
/* 0041C340 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041C344 93A5002B */  lbu   $a1, 0x2b($sp)
/* 0041C348 24040015 */  li    $a0, 21
/* 0041C34C 8F99822C */  lw    $t9, %call16(emit_rill)($gp)
/* 0041C350 8FA60030 */  lw    $a2, 0x30($sp)
/* 0041C354 8FA70034 */  lw    $a3, 0x34($sp)
/* 0041C358 0320F809 */  jalr  $t9
/* 0041C35C 24A50001 */   addiu $a1, $a1, 1
/* 0041C360 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041C364 8FA40020 */  lw    $a0, 0x20($sp)
/* 0041C368 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 0041C36C 0320F809 */  jalr  $t9
/* 0041C370 00000000 */   nop   
/* 0041C374 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0041C378 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041C37C 27BD0028 */  addiu $sp, $sp, 0x28
/* 0041C380 03E00008 */  jr    $ra
/* 0041C384 00000000 */   nop   

glabel emit_branch_rill
    .ent emit_branch_rill
    # 00420590 func_00420590
    # 00423D28 jump
    # 0042BDAC eval
    # 00433494 eval_flt_int_cvt
/* 0041C388 3C1C0FC0 */  .cpload $t9
/* 0041C38C 279C36C8 */  
/* 0041C390 0399E021 */  
/* 0041C394 8F8289D8 */  lw     $v0, %got(opcode_arch)($gp)
/* 0041C398 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 0041C39C AFB2001C */  sw    $s2, 0x1c($sp)
/* 0041C3A0 90420000 */  lbu   $v0, ($v0)
/* 0041C3A4 AFB10018 */  sw    $s1, 0x18($sp)
/* 0041C3A8 AFB00014 */  sw    $s0, 0x14($sp)
/* 0041C3AC 00C08025 */  move  $s0, $a2
/* 0041C3B0 30B100FF */  andi  $s1, $a1, 0xff
/* 0041C3B4 00E09025 */  move  $s2, $a3
/* 0041C3B8 AFBF0024 */  sw    $ra, 0x24($sp)
/* 0041C3BC AFBC0020 */  sw    $gp, 0x20($sp)
/* 0041C3C0 AFA40038 */  sw    $a0, 0x38($sp)
/* 0041C3C4 14400083 */  bnez  $v0, .L0041C5D4
/* 0041C3C8 AFA5003C */   sw    $a1, 0x3c($sp)
/* 0041C3CC 8FAE004C */  lw    $t6, 0x4c($sp)
/* 0041C3D0 3C010501 */  lui   $at, 0x501
/* 0041C3D4 91CF0021 */  lbu   $t7, 0x21($t6)
/* 0041C3D8 31F8001F */  andi  $t8, $t7, 0x1f
/* 0041C3DC 2F190020 */  sltiu $t9, $t8, 0x20
/* 0041C3E0 00194023 */  negu  $t0, $t9
/* 0041C3E4 01014824 */  and   $t1, $t0, $at
/* 0041C3E8 03095004 */  sllv  $t2, $t1, $t8
/* 0041C3EC 0543007A */  bgezl $t2, .L0041C5D8
/* 0041C3F0 24010001 */   li    $at, 1
/* 0041C3F4 97A2003A */  lhu   $v0, 0x3a($sp)
/* 0041C3F8 244BFFF3 */  addiu $t3, $v0, -0xd
/* 0041C3FC 2D61000E */  sltiu $at, $t3, 0xe
/* 0041C400 1020006C */  beqz  $at, .L0041C5B4
/* 0041C404 00000000 */   nop   
/* 0041C408 8F818038 */  lw    $at, %got(jtbl_100096C8)($gp)
/* 0041C40C 000B5880 */  sll   $t3, $t3, 2
/* 0041C410 002B0821 */  addu  $at, $at, $t3
/* 0041C414 8C2B96C8 */  lw    $t3, %lo(jtbl_100096C8)($at)
/* 0041C418 017C5821 */  addu  $t3, $t3, $gp
/* 0041C41C 01600008 */  jr    $t3
/* 0041C420 00000000 */   nop   
.L0041C424:
/* 0041C424 8F99801C */  lw    $t9, %got(func_0041BCC0)($gp)
/* 0041C428 02202025 */  move  $a0, $s1
/* 0041C42C 02002825 */  move  $a1, $s0
/* 0041C430 2739BCC0 */  addiu $t9, %lo(func_0041BCC0) # addiu $t9, $t9, -0x4340
/* 0041C434 02403025 */  move  $a2, $s2
/* 0041C438 8FA70048 */  lw    $a3, 0x48($sp)
/* 0041C43C 0320F809 */  jalr  $t9
/* 0041C440 27A20038 */   addiu $v0, $sp, 0x38
/* 0041C444 1000008D */  b     .L0041C67C
/* 0041C448 8FBC0020 */   lw    $gp, 0x20($sp)
.L0041C44C:
/* 0041C44C 8F99801C */  lw    $t9, %got(func_0041BD30)($gp)
/* 0041C450 02202025 */  move  $a0, $s1
/* 0041C454 02002825 */  move  $a1, $s0
/* 0041C458 2739BD30 */  addiu $t9, %lo(func_0041BD30) # addiu $t9, $t9, -0x42d0
/* 0041C45C 02403025 */  move  $a2, $s2
/* 0041C460 8FA70048 */  lw    $a3, 0x48($sp)
/* 0041C464 0320F809 */  jalr  $t9
/* 0041C468 27A20038 */   addiu $v0, $sp, 0x38
/* 0041C46C 10000083 */  b     .L0041C67C
/* 0041C470 8FBC0020 */   lw    $gp, 0x20($sp)
.L0041C474:
/* 0041C474 8F99801C */  lw    $t9, %got(func_0041BDC8)($gp)
/* 0041C478 02202025 */  move  $a0, $s1
/* 0041C47C 02002825 */  move  $a1, $s0
/* 0041C480 2739BDC8 */  addiu $t9, %lo(func_0041BDC8) # addiu $t9, $t9, -0x4238
/* 0041C484 02403025 */  move  $a2, $s2
/* 0041C488 8FA70048 */  lw    $a3, 0x48($sp)
/* 0041C48C 0320F809 */  jalr  $t9
/* 0041C490 27A20038 */   addiu $v0, $sp, 0x38
/* 0041C494 10000079 */  b     .L0041C67C
/* 0041C498 8FBC0020 */   lw    $gp, 0x20($sp)
.L0041C49C:
/* 0041C49C 8F99801C */  lw    $t9, %got(func_0041BE80)($gp)
/* 0041C4A0 02202025 */  move  $a0, $s1
/* 0041C4A4 02002825 */  move  $a1, $s0
/* 0041C4A8 2739BE80 */  addiu $t9, %lo(func_0041BE80) # addiu $t9, $t9, -0x4180
/* 0041C4AC 02403025 */  move  $a2, $s2
/* 0041C4B0 8FA70048 */  lw    $a3, 0x48($sp)
/* 0041C4B4 0320F809 */  jalr  $t9
/* 0041C4B8 27A20038 */   addiu $v0, $sp, 0x38
/* 0041C4BC 1000006F */  b     .L0041C67C
/* 0041C4C0 8FBC0020 */   lw    $gp, 0x20($sp)
.L0041C4C4:
/* 0041C4C4 8F99801C */  lw    $t9, %got(func_0041C0A8)($gp)
/* 0041C4C8 02202025 */  move  $a0, $s1
/* 0041C4CC 02002825 */  move  $a1, $s0
/* 0041C4D0 2739C0A8 */  addiu $t9, %lo(func_0041C0A8) # addiu $t9, $t9, -0x3f58
/* 0041C4D4 02403025 */  move  $a2, $s2
/* 0041C4D8 8FA70048 */  lw    $a3, 0x48($sp)
/* 0041C4DC 0320F809 */  jalr  $t9
/* 0041C4E0 27A20038 */   addiu $v0, $sp, 0x38
/* 0041C4E4 10000065 */  b     .L0041C67C
/* 0041C4E8 8FBC0020 */   lw    $gp, 0x20($sp)
.L0041C4EC:
/* 0041C4EC 8F99801C */  lw    $t9, %got(func_0041C160)($gp)
/* 0041C4F0 02202025 */  move  $a0, $s1
/* 0041C4F4 02002825 */  move  $a1, $s0
/* 0041C4F8 2739C160 */  addiu $t9, %lo(func_0041C160) # addiu $t9, $t9, -0x3ea0
/* 0041C4FC 02403025 */  move  $a2, $s2
/* 0041C500 8FA70048 */  lw    $a3, 0x48($sp)
/* 0041C504 0320F809 */  jalr  $t9
/* 0041C508 27A20038 */   addiu $v0, $sp, 0x38
/* 0041C50C 1000005B */  b     .L0041C67C
/* 0041C510 8FBC0020 */   lw    $gp, 0x20($sp)
.L0041C514:
/* 0041C514 8F99801C */  lw    $t9, %got(func_0041C218)($gp)
/* 0041C518 02202025 */  move  $a0, $s1
/* 0041C51C 02002825 */  move  $a1, $s0
/* 0041C520 2739C218 */  addiu $t9, %lo(func_0041C218) # addiu $t9, $t9, -0x3de8
/* 0041C524 02403025 */  move  $a2, $s2
/* 0041C528 8FA70048 */  lw    $a3, 0x48($sp)
/* 0041C52C 0320F809 */  jalr  $t9
/* 0041C530 27A20038 */   addiu $v0, $sp, 0x38
/* 0041C534 10000051 */  b     .L0041C67C
/* 0041C538 8FBC0020 */   lw    $gp, 0x20($sp)
.L0041C53C:
/* 0041C53C 8F99801C */  lw    $t9, %got(func_0041C2D0)($gp)
/* 0041C540 02202025 */  move  $a0, $s1
/* 0041C544 02002825 */  move  $a1, $s0
/* 0041C548 2739C2D0 */  addiu $t9, %lo(func_0041C2D0) # addiu $t9, $t9, -0x3d30
/* 0041C54C 02403025 */  move  $a2, $s2
/* 0041C550 8FA70048 */  lw    $a3, 0x48($sp)
/* 0041C554 0320F809 */  jalr  $t9
/* 0041C558 27A20038 */   addiu $v0, $sp, 0x38
/* 0041C55C 10000047 */  b     .L0041C67C
/* 0041C560 8FBC0020 */   lw    $gp, 0x20($sp)
.L0041C564:
/* 0041C564 8F99801C */  lw    $t9, %got(func_0041BF38)($gp)
/* 0041C568 02202025 */  move  $a0, $s1
/* 0041C56C 02002825 */  move  $a1, $s0
/* 0041C570 2739BF38 */  addiu $t9, %lo(func_0041BF38) # addiu $t9, $t9, -0x40c8
/* 0041C574 02403025 */  move  $a2, $s2
/* 0041C578 8FA70048 */  lw    $a3, 0x48($sp)
/* 0041C57C 0320F809 */  jalr  $t9
/* 0041C580 27A20038 */   addiu $v0, $sp, 0x38
/* 0041C584 1000003D */  b     .L0041C67C
/* 0041C588 8FBC0020 */   lw    $gp, 0x20($sp)
.L0041C58C:
/* 0041C58C 8F99801C */  lw    $t9, %got(func_0041BFF0)($gp)
/* 0041C590 02202025 */  move  $a0, $s1
/* 0041C594 02002825 */  move  $a1, $s0
/* 0041C598 2739BFF0 */  addiu $t9, %lo(func_0041BFF0) # addiu $t9, $t9, -0x4010
/* 0041C59C 02403025 */  move  $a2, $s2
/* 0041C5A0 8FA70048 */  lw    $a3, 0x48($sp)
/* 0041C5A4 0320F809 */  jalr  $t9
/* 0041C5A8 27A20038 */   addiu $v0, $sp, 0x38
/* 0041C5AC 10000033 */  b     .L0041C67C
/* 0041C5B0 8FBC0020 */   lw    $gp, 0x20($sp)
.L0041C5B4:
/* 0041C5B4 8F99822C */  lw    $t9, %call16(emit_rill)($gp)
/* 0041C5B8 97A4003A */  lhu   $a0, 0x3a($sp)
/* 0041C5BC 02202825 */  move  $a1, $s1
/* 0041C5C0 02403025 */  move  $a2, $s2
/* 0041C5C4 0320F809 */  jalr  $t9
/* 0041C5C8 8FA70048 */   lw    $a3, 0x48($sp)
/* 0041C5CC 1000002B */  b     .L0041C67C
/* 0041C5D0 8FBC0020 */   lw    $gp, 0x20($sp)
.L0041C5D4:
/* 0041C5D4 24010001 */  li    $at, 1
.L0041C5D8:
/* 0041C5D8 14410022 */  bne   $v0, $at, .L0041C664
/* 0041C5DC 97A4003A */   lhu   $a0, 0x3a($sp)
/* 0041C5E0 12000020 */  beqz  $s0, .L0041C664
/* 0041C5E4 24050001 */   li    $a1, 1
/* 0041C5E8 8F9984FC */  lw    $t9, %call16(get_free_reg)($gp)
/* 0041C5EC AFB00030 */  sw    $s0, 0x30($sp)
/* 0041C5F0 AFB20034 */  sw    $s2, 0x34($sp)
/* 0041C5F4 0320F809 */  jalr  $t9
/* 0041C5F8 00002025 */   move  $a0, $zero
/* 0041C5FC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C600 305000FF */  andi  $s0, $v0, 0xff
/* 0041C604 304400FF */  andi  $a0, $v0, 0xff
/* 0041C608 8F998510 */  lw    $t9, %call16(free_reg)($gp)
/* 0041C60C 0320F809 */  jalr  $t9
/* 0041C610 00000000 */   nop   
/* 0041C614 27AC0030 */  addiu $t4, $sp, 0x30
/* 0041C618 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C61C 8D860000 */  lw    $a2, ($t4)
/* 0041C620 2404014C */  li    $a0, 332
/* 0041C624 8F9981F8 */  lw    $t9, %call16(emit_rii)($gp)
/* 0041C628 AFA60008 */  sw    $a2, 8($sp)
/* 0041C62C 8D870004 */  lw    $a3, 4($t4)
/* 0041C630 02002825 */  move  $a1, $s0
/* 0041C634 0320F809 */  jalr  $t9
/* 0041C638 AFA7000C */   sw    $a3, 0xc($sp)
/* 0041C63C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C640 97A4003A */  lhu   $a0, 0x3a($sp)
/* 0041C644 02202825 */  move  $a1, $s1
/* 0041C648 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041C64C 02003025 */  move  $a2, $s0
/* 0041C650 8FA70048 */  lw    $a3, 0x48($sp)
/* 0041C654 0320F809 */  jalr  $t9
/* 0041C658 00000000 */   nop   
/* 0041C65C 10000007 */  b     .L0041C67C
/* 0041C660 8FBC0020 */   lw    $gp, 0x20($sp)
.L0041C664:
/* 0041C664 8F99822C */  lw    $t9, %call16(emit_rill)($gp)
/* 0041C668 02202825 */  move  $a1, $s1
/* 0041C66C 02403025 */  move  $a2, $s2
/* 0041C670 0320F809 */  jalr  $t9
/* 0041C674 8FA70048 */   lw    $a3, 0x48($sp)
/* 0041C678 8FBC0020 */  lw    $gp, 0x20($sp)
.L0041C67C:
/* 0041C67C 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0041C680 8FB00014 */  lw    $s0, 0x14($sp)
/* 0041C684 8FB10018 */  lw    $s1, 0x18($sp)
/* 0041C688 8FB2001C */  lw    $s2, 0x1c($sp)
/* 0041C68C 03E00008 */  jr    $ra
/* 0041C690 27BD0038 */   addiu $sp, $sp, 0x38
    .type emit_branch_rill, @function
    .size emit_branch_rill, .-emit_branch_rill
    .end emit_branch_rill

    .type func_0041C694, @function
func_0041C694:
    # 0041CAAC emit_trap_rri
/* 0041C694 3C1C0FC0 */  .cpload $t9
/* 0041C698 279C33BC */  
/* 0041C69C 0399E021 */  
/* 0041C6A0 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0041C6A4 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041C6A8 AFBF0024 */  sw    $ra, 0x24($sp)
/* 0041C6AC AFA40028 */  sw    $a0, 0x28($sp)
/* 0041C6B0 AFA5002C */  sw    $a1, 0x2c($sp)
/* 0041C6B4 AFA60030 */  sw    $a2, 0x30($sp)
/* 0041C6B8 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0041C6BC 8FA70030 */  lw    $a3, 0x30($sp)
/* 0041C6C0 93A6002F */  lbu   $a2, 0x2f($sp)
/* 0041C6C4 93A5002B */  lbu   $a1, 0x2b($sp)
/* 0041C6C8 24040104 */  li    $a0, 260
/* 0041C6CC 0320F809 */  jalr  $t9
/* 0041C6D0 AFA00010 */   sw    $zero, 0x10($sp)
/* 0041C6D4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C6D8 93A5002B */  lbu   $a1, 0x2b($sp)
/* 0041C6DC 93A6002F */  lbu   $a2, 0x2f($sp)
/* 0041C6E0 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041C6E4 24040104 */  li    $a0, 260
/* 0041C6E8 8FA70030 */  lw    $a3, 0x30($sp)
/* 0041C6EC AFA00010 */  sw    $zero, 0x10($sp)
/* 0041C6F0 24A50001 */  addiu $a1, $a1, 1
/* 0041C6F4 0320F809 */  jalr  $t9
/* 0041C6F8 24C60001 */   addiu $a2, $a2, 1
/* 0041C6FC 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0041C700 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C704 27BD0028 */  addiu $sp, $sp, 0x28
/* 0041C708 03E00008 */  jr    $ra
/* 0041C70C 00000000 */   nop   

    .type func_0041C710, @function
func_0041C710:
    # 0041CAAC emit_trap_rri
/* 0041C710 3C1C0FC0 */  .cpload $t9
/* 0041C714 279C3340 */  
/* 0041C718 0399E021 */  
/* 0041C71C 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 0041C720 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 0041C724 AFBF0024 */  sw    $ra, 0x24($sp)
/* 0041C728 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0041C72C AFA40030 */  sw    $a0, 0x30($sp)
/* 0041C730 AFA50034 */  sw    $a1, 0x34($sp)
/* 0041C734 0320F809 */  jalr  $t9
/* 0041C738 AFA60038 */   sw    $a2, 0x38($sp)
/* 0041C73C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C740 AFA20028 */  sw    $v0, 0x28($sp)
/* 0041C744 2404001A */  li    $a0, 26
/* 0041C748 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041C74C 93A50033 */  lbu   $a1, 0x33($sp)
/* 0041C750 93A60037 */  lbu   $a2, 0x37($sp)
/* 0041C754 0320F809 */  jalr  $t9
/* 0041C758 00403825 */   move  $a3, $v0
/* 0041C75C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C760 93A50033 */  lbu   $a1, 0x33($sp)
/* 0041C764 93A60037 */  lbu   $a2, 0x37($sp)
/* 0041C768 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041C76C 24040103 */  li    $a0, 259
/* 0041C770 8FA70038 */  lw    $a3, 0x38($sp)
/* 0041C774 AFA00010 */  sw    $zero, 0x10($sp)
/* 0041C778 24A50001 */  addiu $a1, $a1, 1
/* 0041C77C 0320F809 */  jalr  $t9
/* 0041C780 24C60001 */   addiu $a2, $a2, 1
/* 0041C784 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C788 8FA40028 */  lw    $a0, 0x28($sp)
/* 0041C78C 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 0041C790 0320F809 */  jalr  $t9
/* 0041C794 00000000 */   nop   
/* 0041C798 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0041C79C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C7A0 27BD0030 */  addiu $sp, $sp, 0x30
/* 0041C7A4 03E00008 */  jr    $ra
/* 0041C7A8 00000000 */   nop   

    .type func_0041C7AC, @function
func_0041C7AC:
    # 0041CAAC emit_trap_rri
/* 0041C7AC 3C1C0FC0 */  .cpload $t9
/* 0041C7B0 279C32A4 */  
/* 0041C7B4 0399E021 */  
/* 0041C7B8 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 0041C7BC 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 0041C7C0 AFBF0024 */  sw    $ra, 0x24($sp)
/* 0041C7C4 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0041C7C8 AFA40030 */  sw    $a0, 0x30($sp)
/* 0041C7CC AFA50034 */  sw    $a1, 0x34($sp)
/* 0041C7D0 0320F809 */  jalr  $t9
/* 0041C7D4 AFA60038 */   sw    $a2, 0x38($sp)
/* 0041C7D8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C7DC AFA20028 */  sw    $v0, 0x28($sp)
/* 0041C7E0 240400FF */  li    $a0, 255
/* 0041C7E4 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041C7E8 93A50033 */  lbu   $a1, 0x33($sp)
/* 0041C7EC 93A60037 */  lbu   $a2, 0x37($sp)
/* 0041C7F0 8FA70038 */  lw    $a3, 0x38($sp)
/* 0041C7F4 0320F809 */  jalr  $t9
/* 0041C7F8 AFA00010 */   sw    $zero, 0x10($sp)
/* 0041C7FC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C800 24040011 */  li    $a0, 17
/* 0041C804 93A50033 */  lbu   $a1, 0x33($sp)
/* 0041C808 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041C80C 93A60037 */  lbu   $a2, 0x37($sp)
/* 0041C810 8FA70028 */  lw    $a3, 0x28($sp)
/* 0041C814 0320F809 */  jalr  $t9
/* 0041C818 00000000 */   nop   
/* 0041C81C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C820 93A50033 */  lbu   $a1, 0x33($sp)
/* 0041C824 93A60037 */  lbu   $a2, 0x37($sp)
/* 0041C828 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041C82C 24040100 */  li    $a0, 256
/* 0041C830 8FA70038 */  lw    $a3, 0x38($sp)
/* 0041C834 AFA00010 */  sw    $zero, 0x10($sp)
/* 0041C838 24A50001 */  addiu $a1, $a1, 1
/* 0041C83C 0320F809 */  jalr  $t9
/* 0041C840 24C60001 */   addiu $a2, $a2, 1
/* 0041C844 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C848 8FA40028 */  lw    $a0, 0x28($sp)
/* 0041C84C 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 0041C850 0320F809 */  jalr  $t9
/* 0041C854 00000000 */   nop   
/* 0041C858 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0041C85C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C860 27BD0030 */  addiu $sp, $sp, 0x30
/* 0041C864 03E00008 */  jr    $ra
/* 0041C868 00000000 */   nop   

    .type func_0041C86C, @function
func_0041C86C:
    # 0041CAAC emit_trap_rri
/* 0041C86C 3C1C0FC0 */  .cpload $t9
/* 0041C870 279C31E4 */  
/* 0041C874 0399E021 */  
/* 0041C878 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 0041C87C 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 0041C880 AFBF0024 */  sw    $ra, 0x24($sp)
/* 0041C884 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0041C888 AFA40030 */  sw    $a0, 0x30($sp)
/* 0041C88C AFA50034 */  sw    $a1, 0x34($sp)
/* 0041C890 0320F809 */  jalr  $t9
/* 0041C894 AFA60038 */   sw    $a2, 0x38($sp)
/* 0041C898 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C89C AFA20028 */  sw    $v0, 0x28($sp)
/* 0041C8A0 24040100 */  li    $a0, 256
/* 0041C8A4 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041C8A8 93A50033 */  lbu   $a1, 0x33($sp)
/* 0041C8AC 93A60037 */  lbu   $a2, 0x37($sp)
/* 0041C8B0 8FA70038 */  lw    $a3, 0x38($sp)
/* 0041C8B4 0320F809 */  jalr  $t9
/* 0041C8B8 AFA00010 */   sw    $zero, 0x10($sp)
/* 0041C8BC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C8C0 24040012 */  li    $a0, 18
/* 0041C8C4 93A50033 */  lbu   $a1, 0x33($sp)
/* 0041C8C8 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041C8CC 93A60037 */  lbu   $a2, 0x37($sp)
/* 0041C8D0 8FA70028 */  lw    $a3, 0x28($sp)
/* 0041C8D4 0320F809 */  jalr  $t9
/* 0041C8D8 00000000 */   nop   
/* 0041C8DC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C8E0 93A50033 */  lbu   $a1, 0x33($sp)
/* 0041C8E4 93A60037 */  lbu   $a2, 0x37($sp)
/* 0041C8E8 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041C8EC 24040018 */  li    $a0, 24
/* 0041C8F0 8FA70038 */  lw    $a3, 0x38($sp)
/* 0041C8F4 AFA00010 */  sw    $zero, 0x10($sp)
/* 0041C8F8 24A50001 */  addiu $a1, $a1, 1
/* 0041C8FC 0320F809 */  jalr  $t9
/* 0041C900 24C60001 */   addiu $a2, $a2, 1
/* 0041C904 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C908 8FA40028 */  lw    $a0, 0x28($sp)
/* 0041C90C 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 0041C910 0320F809 */  jalr  $t9
/* 0041C914 00000000 */   nop   
/* 0041C918 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0041C91C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C920 27BD0030 */  addiu $sp, $sp, 0x30
/* 0041C924 03E00008 */  jr    $ra
/* 0041C928 00000000 */   nop   

    .type func_0041C92C, @function
func_0041C92C:
    # 0041CAAC emit_trap_rri
/* 0041C92C 3C1C0FC0 */  .cpload $t9
/* 0041C930 279C3124 */  
/* 0041C934 0399E021 */  
/* 0041C938 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 0041C93C 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 0041C940 AFBF0024 */  sw    $ra, 0x24($sp)
/* 0041C944 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0041C948 AFA40030 */  sw    $a0, 0x30($sp)
/* 0041C94C AFA50034 */  sw    $a1, 0x34($sp)
/* 0041C950 0320F809 */  jalr  $t9
/* 0041C954 AFA60038 */   sw    $a2, 0x38($sp)
/* 0041C958 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C95C AFA20028 */  sw    $v0, 0x28($sp)
/* 0041C960 240400FF */  li    $a0, 255
/* 0041C964 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041C968 93A50037 */  lbu   $a1, 0x37($sp)
/* 0041C96C 93A60033 */  lbu   $a2, 0x33($sp)
/* 0041C970 8FA70038 */  lw    $a3, 0x38($sp)
/* 0041C974 0320F809 */  jalr  $t9
/* 0041C978 AFA00010 */   sw    $zero, 0x10($sp)
/* 0041C97C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C980 24040017 */  li    $a0, 23
/* 0041C984 93A50033 */  lbu   $a1, 0x33($sp)
/* 0041C988 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041C98C 93A60037 */  lbu   $a2, 0x37($sp)
/* 0041C990 8FA70028 */  lw    $a3, 0x28($sp)
/* 0041C994 0320F809 */  jalr  $t9
/* 0041C998 00000000 */   nop   
/* 0041C99C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C9A0 93A50033 */  lbu   $a1, 0x33($sp)
/* 0041C9A4 93A60037 */  lbu   $a2, 0x37($sp)
/* 0041C9A8 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041C9AC 24040102 */  li    $a0, 258
/* 0041C9B0 8FA70038 */  lw    $a3, 0x38($sp)
/* 0041C9B4 AFA00010 */  sw    $zero, 0x10($sp)
/* 0041C9B8 24A50001 */  addiu $a1, $a1, 1
/* 0041C9BC 0320F809 */  jalr  $t9
/* 0041C9C0 24C60001 */   addiu $a2, $a2, 1
/* 0041C9C4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C9C8 8FA40028 */  lw    $a0, 0x28($sp)
/* 0041C9CC 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 0041C9D0 0320F809 */  jalr  $t9
/* 0041C9D4 00000000 */   nop   
/* 0041C9D8 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0041C9DC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C9E0 27BD0030 */  addiu $sp, $sp, 0x30
/* 0041C9E4 03E00008 */  jr    $ra
/* 0041C9E8 00000000 */   nop   

    .type func_0041C9EC, @function
func_0041C9EC:
    # 0041CAAC emit_trap_rri
/* 0041C9EC 3C1C0FC0 */  .cpload $t9
/* 0041C9F0 279C3064 */  
/* 0041C9F4 0399E021 */  
/* 0041C9F8 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 0041C9FC 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 0041CA00 AFBF0024 */  sw    $ra, 0x24($sp)
/* 0041CA04 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0041CA08 AFA40030 */  sw    $a0, 0x30($sp)
/* 0041CA0C AFA50034 */  sw    $a1, 0x34($sp)
/* 0041CA10 0320F809 */  jalr  $t9
/* 0041CA14 AFA60038 */   sw    $a2, 0x38($sp)
/* 0041CA18 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041CA1C AFA20028 */  sw    $v0, 0x28($sp)
/* 0041CA20 24040100 */  li    $a0, 256
/* 0041CA24 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041CA28 93A50037 */  lbu   $a1, 0x37($sp)
/* 0041CA2C 93A60033 */  lbu   $a2, 0x33($sp)
/* 0041CA30 8FA70038 */  lw    $a3, 0x38($sp)
/* 0041CA34 0320F809 */  jalr  $t9
/* 0041CA38 AFA00010 */   sw    $zero, 0x10($sp)
/* 0041CA3C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041CA40 24040018 */  li    $a0, 24
/* 0041CA44 93A50033 */  lbu   $a1, 0x33($sp)
/* 0041CA48 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041CA4C 93A60037 */  lbu   $a2, 0x37($sp)
/* 0041CA50 8FA70028 */  lw    $a3, 0x28($sp)
/* 0041CA54 0320F809 */  jalr  $t9
/* 0041CA58 00000000 */   nop   
/* 0041CA5C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041CA60 93A50033 */  lbu   $a1, 0x33($sp)
/* 0041CA64 93A60037 */  lbu   $a2, 0x37($sp)
/* 0041CA68 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041CA6C 24040102 */  li    $a0, 258
/* 0041CA70 8FA70038 */  lw    $a3, 0x38($sp)
/* 0041CA74 AFA00010 */  sw    $zero, 0x10($sp)
/* 0041CA78 24A50001 */  addiu $a1, $a1, 1
/* 0041CA7C 0320F809 */  jalr  $t9
/* 0041CA80 24C60001 */   addiu $a2, $a2, 1
/* 0041CA84 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041CA88 8FA40028 */  lw    $a0, 0x28($sp)
/* 0041CA8C 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 0041CA90 0320F809 */  jalr  $t9
/* 0041CA94 00000000 */   nop   
/* 0041CA98 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0041CA9C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041CAA0 27BD0030 */  addiu $sp, $sp, 0x30
/* 0041CAA4 03E00008 */  jr    $ra
/* 0041CAA8 00000000 */   nop   

glabel emit_trap_rri
    .ent emit_trap_rri
    # 00424240 trap
/* 0041CAAC 3C1C0FC0 */  .cpload $t9
/* 0041CAB0 279C2FA4 */  
/* 0041CAB4 0399E021 */  
/* 0041CAB8 8F8E89D8 */  lw     $t6, %got(opcode_arch)($gp)
/* 0041CABC 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 0041CAC0 AFB10024 */  sw    $s1, 0x24($sp)
/* 0041CAC4 91CE0000 */  lbu   $t6, ($t6)
/* 0041CAC8 AFB00020 */  sw    $s0, 0x20($sp)
/* 0041CACC 30B000FF */  andi  $s0, $a1, 0xff
/* 0041CAD0 30D100FF */  andi  $s1, $a2, 0xff
/* 0041CAD4 AFBF002C */  sw    $ra, 0x2c($sp)
/* 0041CAD8 AFBC0028 */  sw    $gp, 0x28($sp)
/* 0041CADC AFA40038 */  sw    $a0, 0x38($sp)
/* 0041CAE0 AFA5003C */  sw    $a1, 0x3c($sp)
/* 0041CAE4 15C00053 */  bnez  $t6, .L0041CC34
/* 0041CAE8 AFA60040 */   sw    $a2, 0x40($sp)
/* 0041CAEC 8FAF0048 */  lw    $t7, 0x48($sp)
/* 0041CAF0 3C010501 */  lui   $at, 0x501
/* 0041CAF4 3082FFFF */  andi  $v0, $a0, 0xffff
/* 0041CAF8 91F80021 */  lbu   $t8, 0x21($t7)
/* 0041CAFC 244CFF01 */  addiu $t4, $v0, -0xff
/* 0041CB00 3319001F */  andi  $t9, $t8, 0x1f
/* 0041CB04 2F280020 */  sltiu $t0, $t9, 0x20
/* 0041CB08 00084823 */  negu  $t1, $t0
/* 0041CB0C 01215024 */  and   $t2, $t1, $at
/* 0041CB10 032A5804 */  sllv  $t3, $t2, $t9
/* 0041CB14 05610047 */  bgez  $t3, .L0041CC34
/* 0041CB18 2D810006 */   sltiu $at, $t4, 6
/* 0041CB1C 1020003E */  beqz  $at, .L0041CC18
/* 0041CB20 00000000 */   nop   
/* 0041CB24 8F818038 */  lw    $at, %got(jtbl_10009700)($gp)
/* 0041CB28 000C6080 */  sll   $t4, $t4, 2
/* 0041CB2C 002C0821 */  addu  $at, $at, $t4
/* 0041CB30 8C2C9700 */  lw    $t4, %lo(jtbl_10009700)($at)
/* 0041CB34 019C6021 */  addu  $t4, $t4, $gp
/* 0041CB38 01800008 */  jr    $t4
/* 0041CB3C 00000000 */   nop   
.L0041CB40:
/* 0041CB40 8F99801C */  lw    $t9, %got(func_0041C694)($gp)
/* 0041CB44 02002025 */  move  $a0, $s0
/* 0041CB48 02202825 */  move  $a1, $s1
/* 0041CB4C 2739C694 */  addiu $t9, %lo(func_0041C694) # addiu $t9, $t9, -0x396c
/* 0041CB50 00E03025 */  move  $a2, $a3
/* 0041CB54 0320F809 */  jalr  $t9
/* 0041CB58 27A20038 */   addiu $v0, $sp, 0x38
/* 0041CB5C 1000003B */  b     .L0041CC4C
/* 0041CB60 8FBC0028 */   lw    $gp, 0x28($sp)
.L0041CB64:
/* 0041CB64 8F99801C */  lw    $t9, %got(func_0041C710)($gp)
/* 0041CB68 02002025 */  move  $a0, $s0
/* 0041CB6C 02202825 */  move  $a1, $s1
/* 0041CB70 2739C710 */  addiu $t9, %lo(func_0041C710) # addiu $t9, $t9, -0x38f0
/* 0041CB74 00E03025 */  move  $a2, $a3
/* 0041CB78 0320F809 */  jalr  $t9
/* 0041CB7C 27A20038 */   addiu $v0, $sp, 0x38
/* 0041CB80 10000032 */  b     .L0041CC4C
/* 0041CB84 8FBC0028 */   lw    $gp, 0x28($sp)
.L0041CB88:
/* 0041CB88 8F99801C */  lw    $t9, %got(func_0041C92C)($gp)
/* 0041CB8C 02002025 */  move  $a0, $s0
/* 0041CB90 02202825 */  move  $a1, $s1
/* 0041CB94 2739C92C */  addiu $t9, %lo(func_0041C92C) # addiu $t9, $t9, -0x36d4
/* 0041CB98 00E03025 */  move  $a2, $a3
/* 0041CB9C 0320F809 */  jalr  $t9
/* 0041CBA0 27A20038 */   addiu $v0, $sp, 0x38
/* 0041CBA4 10000029 */  b     .L0041CC4C
/* 0041CBA8 8FBC0028 */   lw    $gp, 0x28($sp)
.L0041CBAC:
/* 0041CBAC 8F99801C */  lw    $t9, %got(func_0041C9EC)($gp)
/* 0041CBB0 02002025 */  move  $a0, $s0
/* 0041CBB4 02202825 */  move  $a1, $s1
/* 0041CBB8 2739C9EC */  addiu $t9, %lo(func_0041C9EC) # addiu $t9, $t9, -0x3614
/* 0041CBBC 00E03025 */  move  $a2, $a3
/* 0041CBC0 0320F809 */  jalr  $t9
/* 0041CBC4 27A20038 */   addiu $v0, $sp, 0x38
/* 0041CBC8 10000020 */  b     .L0041CC4C
/* 0041CBCC 8FBC0028 */   lw    $gp, 0x28($sp)
.L0041CBD0:
/* 0041CBD0 8F99801C */  lw    $t9, %got(func_0041C7AC)($gp)
/* 0041CBD4 02002025 */  move  $a0, $s0
/* 0041CBD8 02202825 */  move  $a1, $s1
/* 0041CBDC 2739C7AC */  addiu $t9, %lo(func_0041C7AC) # addiu $t9, $t9, -0x3854
/* 0041CBE0 00E03025 */  move  $a2, $a3
/* 0041CBE4 0320F809 */  jalr  $t9
/* 0041CBE8 27A20038 */   addiu $v0, $sp, 0x38
/* 0041CBEC 10000017 */  b     .L0041CC4C
/* 0041CBF0 8FBC0028 */   lw    $gp, 0x28($sp)
.L0041CBF4:
/* 0041CBF4 8F99801C */  lw    $t9, %got(func_0041C86C)($gp)
/* 0041CBF8 02002025 */  move  $a0, $s0
/* 0041CBFC 02202825 */  move  $a1, $s1
/* 0041CC00 2739C86C */  addiu $t9, %lo(func_0041C86C) # addiu $t9, $t9, -0x3794
/* 0041CC04 00E03025 */  move  $a2, $a3
/* 0041CC08 0320F809 */  jalr  $t9
/* 0041CC0C 27A20038 */   addiu $v0, $sp, 0x38
/* 0041CC10 1000000E */  b     .L0041CC4C
/* 0041CC14 8FBC0028 */   lw    $gp, 0x28($sp)
.L0041CC18:
/* 0041CC18 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041CC1C 02002825 */  move  $a1, $s0
/* 0041CC20 02203025 */  move  $a2, $s1
/* 0041CC24 0320F809 */  jalr  $t9
/* 0041CC28 AFA00010 */   sw    $zero, 0x10($sp)
/* 0041CC2C 10000007 */  b     .L0041CC4C
/* 0041CC30 8FBC0028 */   lw    $gp, 0x28($sp)
.L0041CC34:
/* 0041CC34 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041CC38 02002825 */  move  $a1, $s0
/* 0041CC3C 02203025 */  move  $a2, $s1
/* 0041CC40 0320F809 */  jalr  $t9
/* 0041CC44 AFA00010 */   sw    $zero, 0x10($sp)
/* 0041CC48 8FBC0028 */  lw    $gp, 0x28($sp)
.L0041CC4C:
/* 0041CC4C 8FBF002C */  lw    $ra, 0x2c($sp)
/* 0041CC50 8FB00020 */  lw    $s0, 0x20($sp)
/* 0041CC54 8FB10024 */  lw    $s1, 0x24($sp)
/* 0041CC58 03E00008 */  jr    $ra
/* 0041CC5C 27BD0038 */   addiu $sp, $sp, 0x38
    .type emit_trap_rri, @function
    .size emit_trap_rri, .-emit_trap_rri
    .end emit_trap_rri

    .type func_0041CC60, @function
func_0041CC60:
    # 0041D034 emit_trap_ri
/* 0041CC60 3C1C0FC0 */  .cpload $t9
/* 0041CC64 279C2DF0 */  
/* 0041CC68 0399E021 */  
/* 0041CC6C 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0041CC70 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 0041CC74 AFA60028 */  sw    $a2, 0x28($sp)
/* 0041CC78 00A03025 */  move  $a2, $a1
/* 0041CC7C AFBF001C */  sw    $ra, 0x1c($sp)
/* 0041CC80 AFA40020 */  sw    $a0, 0x20($sp)
/* 0041CC84 AFA50024 */  sw    $a1, 0x24($sp)
/* 0041CC88 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0041CC8C 93A50023 */  lbu   $a1, 0x23($sp)
/* 0041CC90 24040104 */  li    $a0, 260
/* 0041CC94 0320F809 */  jalr  $t9
/* 0041CC98 00003825 */   move  $a3, $zero
/* 0041CC9C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041CCA0 93A50023 */  lbu   $a1, 0x23($sp)
/* 0041CCA4 24040104 */  li    $a0, 260
/* 0041CCA8 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 0041CCAC 8FA60028 */  lw    $a2, 0x28($sp)
/* 0041CCB0 00003825 */  move  $a3, $zero
/* 0041CCB4 0320F809 */  jalr  $t9
/* 0041CCB8 24A50001 */   addiu $a1, $a1, 1
/* 0041CCBC 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0041CCC0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041CCC4 27BD0020 */  addiu $sp, $sp, 0x20
/* 0041CCC8 03E00008 */  jr    $ra
/* 0041CCCC 00000000 */   nop   

    .type func_0041CCD0, @function
func_0041CCD0:
    # 0041D034 emit_trap_ri
/* 0041CCD0 3C1C0FC0 */  .cpload $t9
/* 0041CCD4 279C2D80 */  
/* 0041CCD8 0399E021 */  
/* 0041CCDC 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0041CCE0 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 0041CCE4 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0041CCE8 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0041CCEC AFA40028 */  sw    $a0, 0x28($sp)
/* 0041CCF0 AFA5002C */  sw    $a1, 0x2c($sp)
/* 0041CCF4 0320F809 */  jalr  $t9
/* 0041CCF8 AFA60030 */   sw    $a2, 0x30($sp)
/* 0041CCFC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041CD00 AFA20020 */  sw    $v0, 0x20($sp)
/* 0041CD04 2404001A */  li    $a0, 26
/* 0041CD08 8F99822C */  lw    $t9, %call16(emit_rill)($gp)
/* 0041CD0C 93A5002B */  lbu   $a1, 0x2b($sp)
/* 0041CD10 8FA6002C */  lw    $a2, 0x2c($sp)
/* 0041CD14 0320F809 */  jalr  $t9
/* 0041CD18 00403825 */   move  $a3, $v0
/* 0041CD1C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041CD20 93A5002B */  lbu   $a1, 0x2b($sp)
/* 0041CD24 24040103 */  li    $a0, 259
/* 0041CD28 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 0041CD2C 8FA60030 */  lw    $a2, 0x30($sp)
/* 0041CD30 00003825 */  move  $a3, $zero
/* 0041CD34 0320F809 */  jalr  $t9
/* 0041CD38 24A50001 */   addiu $a1, $a1, 1
/* 0041CD3C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041CD40 8FA40020 */  lw    $a0, 0x20($sp)
/* 0041CD44 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 0041CD48 0320F809 */  jalr  $t9
/* 0041CD4C 00000000 */   nop   
/* 0041CD50 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0041CD54 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041CD58 27BD0028 */  addiu $sp, $sp, 0x28
/* 0041CD5C 03E00008 */  jr    $ra
/* 0041CD60 00000000 */   nop   

    .type func_0041CD64, @function
func_0041CD64:
    # 0041D034 emit_trap_ri
/* 0041CD64 3C1C0FC0 */  .cpload $t9
/* 0041CD68 279C2CEC */  
/* 0041CD6C 0399E021 */  
/* 0041CD70 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0041CD74 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 0041CD78 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0041CD7C AFBC0018 */  sw    $gp, 0x18($sp)
/* 0041CD80 AFA40028 */  sw    $a0, 0x28($sp)
/* 0041CD84 AFA5002C */  sw    $a1, 0x2c($sp)
/* 0041CD88 0320F809 */  jalr  $t9
/* 0041CD8C AFA60030 */   sw    $a2, 0x30($sp)
/* 0041CD90 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041CD94 AFA20020 */  sw    $v0, 0x20($sp)
/* 0041CD98 240400FF */  li    $a0, 255
/* 0041CD9C 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 0041CDA0 93A5002B */  lbu   $a1, 0x2b($sp)
/* 0041CDA4 8FA6002C */  lw    $a2, 0x2c($sp)
/* 0041CDA8 0320F809 */  jalr  $t9
/* 0041CDAC 00003825 */   move  $a3, $zero
/* 0041CDB0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041CDB4 24040011 */  li    $a0, 17
/* 0041CDB8 93A5002B */  lbu   $a1, 0x2b($sp)
/* 0041CDBC 8F99822C */  lw    $t9, %call16(emit_rill)($gp)
/* 0041CDC0 8FA6002C */  lw    $a2, 0x2c($sp)
/* 0041CDC4 8FA70020 */  lw    $a3, 0x20($sp)
/* 0041CDC8 0320F809 */  jalr  $t9
/* 0041CDCC 00000000 */   nop   
/* 0041CDD0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041CDD4 93A5002B */  lbu   $a1, 0x2b($sp)
/* 0041CDD8 24040100 */  li    $a0, 256
/* 0041CDDC 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 0041CDE0 8FA60030 */  lw    $a2, 0x30($sp)
/* 0041CDE4 00003825 */  move  $a3, $zero
/* 0041CDE8 0320F809 */  jalr  $t9
/* 0041CDEC 24A50001 */   addiu $a1, $a1, 1
/* 0041CDF0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041CDF4 8FA40020 */  lw    $a0, 0x20($sp)
/* 0041CDF8 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 0041CDFC 0320F809 */  jalr  $t9
/* 0041CE00 00000000 */   nop   
/* 0041CE04 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0041CE08 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041CE0C 27BD0028 */  addiu $sp, $sp, 0x28
/* 0041CE10 03E00008 */  jr    $ra
/* 0041CE14 00000000 */   nop   

    .type func_0041CE18, @function
func_0041CE18:
    # 0041D034 emit_trap_ri
/* 0041CE18 3C1C0FC0 */  .cpload $t9
/* 0041CE1C 279C2C38 */  
/* 0041CE20 0399E021 */  
/* 0041CE24 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0041CE28 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 0041CE2C AFBF001C */  sw    $ra, 0x1c($sp)
/* 0041CE30 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0041CE34 AFA40028 */  sw    $a0, 0x28($sp)
/* 0041CE38 AFA5002C */  sw    $a1, 0x2c($sp)
/* 0041CE3C 0320F809 */  jalr  $t9
/* 0041CE40 AFA60030 */   sw    $a2, 0x30($sp)
/* 0041CE44 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041CE48 AFA20020 */  sw    $v0, 0x20($sp)
/* 0041CE4C 24040100 */  li    $a0, 256
/* 0041CE50 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 0041CE54 93A5002B */  lbu   $a1, 0x2b($sp)
/* 0041CE58 8FA6002C */  lw    $a2, 0x2c($sp)
/* 0041CE5C 0320F809 */  jalr  $t9
/* 0041CE60 00003825 */   move  $a3, $zero
/* 0041CE64 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041CE68 24040012 */  li    $a0, 18
/* 0041CE6C 93A5002B */  lbu   $a1, 0x2b($sp)
/* 0041CE70 8F99822C */  lw    $t9, %call16(emit_rill)($gp)
/* 0041CE74 8FA6002C */  lw    $a2, 0x2c($sp)
/* 0041CE78 8FA70020 */  lw    $a3, 0x20($sp)
/* 0041CE7C 0320F809 */  jalr  $t9
/* 0041CE80 00000000 */   nop   
/* 0041CE84 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041CE88 93A5002B */  lbu   $a1, 0x2b($sp)
/* 0041CE8C 24040018 */  li    $a0, 24
/* 0041CE90 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 0041CE94 8FA60030 */  lw    $a2, 0x30($sp)
/* 0041CE98 00003825 */  move  $a3, $zero
/* 0041CE9C 0320F809 */  jalr  $t9
/* 0041CEA0 24A50001 */   addiu $a1, $a1, 1
/* 0041CEA4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041CEA8 8FA40020 */  lw    $a0, 0x20($sp)
/* 0041CEAC 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 0041CEB0 0320F809 */  jalr  $t9
/* 0041CEB4 00000000 */   nop   
/* 0041CEB8 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0041CEBC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041CEC0 27BD0028 */  addiu $sp, $sp, 0x28
/* 0041CEC4 03E00008 */  jr    $ra
/* 0041CEC8 00000000 */   nop   

    .type func_0041CECC, @function
func_0041CECC:
    # 0041D034 emit_trap_ri
/* 0041CECC 3C1C0FC0 */  .cpload $t9
/* 0041CED0 279C2B84 */  
/* 0041CED4 0399E021 */  
/* 0041CED8 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0041CEDC 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 0041CEE0 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0041CEE4 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0041CEE8 AFA40028 */  sw    $a0, 0x28($sp)
/* 0041CEEC AFA5002C */  sw    $a1, 0x2c($sp)
/* 0041CEF0 0320F809 */  jalr  $t9
/* 0041CEF4 AFA60030 */   sw    $a2, 0x30($sp)
/* 0041CEF8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041CEFC AFA20020 */  sw    $v0, 0x20($sp)
/* 0041CF00 24040017 */  li    $a0, 23
/* 0041CF04 8F99822C */  lw    $t9, %call16(emit_rill)($gp)
/* 0041CF08 93A5002B */  lbu   $a1, 0x2b($sp)
/* 0041CF0C 8FA6002C */  lw    $a2, 0x2c($sp)
/* 0041CF10 0320F809 */  jalr  $t9
/* 0041CF14 00403825 */   move  $a3, $v0
/* 0041CF18 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041CF1C 24040104 */  li    $a0, 260
/* 0041CF20 93A5002B */  lbu   $a1, 0x2b($sp)
/* 0041CF24 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 0041CF28 8FA6002C */  lw    $a2, 0x2c($sp)
/* 0041CF2C 00003825 */  move  $a3, $zero
/* 0041CF30 0320F809 */  jalr  $t9
/* 0041CF34 00000000 */   nop   
/* 0041CF38 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041CF3C 93A5002B */  lbu   $a1, 0x2b($sp)
/* 0041CF40 24040102 */  li    $a0, 258
/* 0041CF44 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 0041CF48 8FA60030 */  lw    $a2, 0x30($sp)
/* 0041CF4C 00003825 */  move  $a3, $zero
/* 0041CF50 0320F809 */  jalr  $t9
/* 0041CF54 24A50001 */   addiu $a1, $a1, 1
/* 0041CF58 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041CF5C 8FA40020 */  lw    $a0, 0x20($sp)
/* 0041CF60 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 0041CF64 0320F809 */  jalr  $t9
/* 0041CF68 00000000 */   nop   
/* 0041CF6C 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0041CF70 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041CF74 27BD0028 */  addiu $sp, $sp, 0x28
/* 0041CF78 03E00008 */  jr    $ra
/* 0041CF7C 00000000 */   nop   

    .type func_0041CF80, @function
func_0041CF80:
    # 0041D034 emit_trap_ri
/* 0041CF80 3C1C0FC0 */  .cpload $t9
/* 0041CF84 279C2AD0 */  
/* 0041CF88 0399E021 */  
/* 0041CF8C 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0041CF90 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 0041CF94 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0041CF98 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0041CF9C AFA40028 */  sw    $a0, 0x28($sp)
/* 0041CFA0 AFA5002C */  sw    $a1, 0x2c($sp)
/* 0041CFA4 0320F809 */  jalr  $t9
/* 0041CFA8 AFA60030 */   sw    $a2, 0x30($sp)
/* 0041CFAC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041CFB0 AFA20020 */  sw    $v0, 0x20($sp)
/* 0041CFB4 24040018 */  li    $a0, 24
/* 0041CFB8 8F99822C */  lw    $t9, %call16(emit_rill)($gp)
/* 0041CFBC 93A5002B */  lbu   $a1, 0x2b($sp)
/* 0041CFC0 8FA6002C */  lw    $a2, 0x2c($sp)
/* 0041CFC4 0320F809 */  jalr  $t9
/* 0041CFC8 00403825 */   move  $a3, $v0
/* 0041CFCC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041CFD0 24040104 */  li    $a0, 260
/* 0041CFD4 93A5002B */  lbu   $a1, 0x2b($sp)
/* 0041CFD8 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 0041CFDC 8FA6002C */  lw    $a2, 0x2c($sp)
/* 0041CFE0 00003825 */  move  $a3, $zero
/* 0041CFE4 0320F809 */  jalr  $t9
/* 0041CFE8 00000000 */   nop   
/* 0041CFEC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041CFF0 93A5002B */  lbu   $a1, 0x2b($sp)
/* 0041CFF4 24040102 */  li    $a0, 258
/* 0041CFF8 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 0041CFFC 8FA60030 */  lw    $a2, 0x30($sp)
/* 0041D000 00003825 */  move  $a3, $zero
/* 0041D004 0320F809 */  jalr  $t9
/* 0041D008 24A50001 */   addiu $a1, $a1, 1
/* 0041D00C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041D010 8FA40020 */  lw    $a0, 0x20($sp)
/* 0041D014 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 0041D018 0320F809 */  jalr  $t9
/* 0041D01C 00000000 */   nop   
/* 0041D020 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0041D024 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041D028 27BD0028 */  addiu $sp, $sp, 0x28
/* 0041D02C 03E00008 */  jr    $ra
/* 0041D030 00000000 */   nop   

glabel emit_trap_ri
    .ent emit_trap_ri
    # 00424240 trap
/* 0041D034 3C1C0FC0 */  .cpload $t9
/* 0041D038 279C2A1C */  
/* 0041D03C 0399E021 */  
/* 0041D040 8F8E89D8 */  lw     $t6, %got(opcode_arch)($gp)
/* 0041D044 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 0041D048 AFB1001C */  sw    $s1, 0x1c($sp)
/* 0041D04C 91CE0000 */  lbu   $t6, ($t6)
/* 0041D050 AFB00018 */  sw    $s0, 0x18($sp)
/* 0041D054 30B000FF */  andi  $s0, $a1, 0xff
/* 0041D058 00E08825 */  move  $s1, $a3
/* 0041D05C AFBF0024 */  sw    $ra, 0x24($sp)
/* 0041D060 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0041D064 AFA40030 */  sw    $a0, 0x30($sp)
/* 0041D068 AFA50034 */  sw    $a1, 0x34($sp)
/* 0041D06C 15C00053 */  bnez  $t6, .L0041D1BC
/* 0041D070 AFA60038 */   sw    $a2, 0x38($sp)
/* 0041D074 8FAF0040 */  lw    $t7, 0x40($sp)
/* 0041D078 3C010501 */  lui   $at, 0x501
/* 0041D07C 3082FFFF */  andi  $v0, $a0, 0xffff
/* 0041D080 91F80021 */  lbu   $t8, 0x21($t7)
/* 0041D084 244CFF01 */  addiu $t4, $v0, -0xff
/* 0041D088 3319001F */  andi  $t9, $t8, 0x1f
/* 0041D08C 2F280020 */  sltiu $t0, $t9, 0x20
/* 0041D090 00084823 */  negu  $t1, $t0
/* 0041D094 01215024 */  and   $t2, $t1, $at
/* 0041D098 032A5804 */  sllv  $t3, $t2, $t9
/* 0041D09C 05610047 */  bgez  $t3, .L0041D1BC
/* 0041D0A0 2D810006 */   sltiu $at, $t4, 6
/* 0041D0A4 1020003E */  beqz  $at, .L0041D1A0
/* 0041D0A8 00000000 */   nop   
/* 0041D0AC 8F818038 */  lw    $at, %got(jtbl_10009718)($gp)
/* 0041D0B0 000C6080 */  sll   $t4, $t4, 2
/* 0041D0B4 002C0821 */  addu  $at, $at, $t4
/* 0041D0B8 8C2C9718 */  lw    $t4, %lo(jtbl_10009718)($at)
/* 0041D0BC 019C6021 */  addu  $t4, $t4, $gp
/* 0041D0C0 01800008 */  jr    $t4
/* 0041D0C4 00000000 */   nop   
.L0041D0C8:
/* 0041D0C8 8F99801C */  lw    $t9, %got(func_0041CC60)($gp)
/* 0041D0CC 02002025 */  move  $a0, $s0
/* 0041D0D0 8FA50038 */  lw    $a1, 0x38($sp)
/* 0041D0D4 2739CC60 */  addiu $t9, %lo(func_0041CC60) # addiu $t9, $t9, -0x33a0
/* 0041D0D8 02203025 */  move  $a2, $s1
/* 0041D0DC 0320F809 */  jalr  $t9
/* 0041D0E0 27A20030 */   addiu $v0, $sp, 0x30
/* 0041D0E4 1000003B */  b     .L0041D1D4
/* 0041D0E8 8FBC0020 */   lw    $gp, 0x20($sp)
.L0041D0EC:
/* 0041D0EC 8F99801C */  lw    $t9, %got(func_0041CCD0)($gp)
/* 0041D0F0 02002025 */  move  $a0, $s0
/* 0041D0F4 8FA50038 */  lw    $a1, 0x38($sp)
/* 0041D0F8 2739CCD0 */  addiu $t9, %lo(func_0041CCD0) # addiu $t9, $t9, -0x3330
/* 0041D0FC 02203025 */  move  $a2, $s1
/* 0041D100 0320F809 */  jalr  $t9
/* 0041D104 27A20030 */   addiu $v0, $sp, 0x30
/* 0041D108 10000032 */  b     .L0041D1D4
/* 0041D10C 8FBC0020 */   lw    $gp, 0x20($sp)
.L0041D110:
/* 0041D110 8F99801C */  lw    $t9, %got(func_0041CECC)($gp)
/* 0041D114 02002025 */  move  $a0, $s0
/* 0041D118 8FA50038 */  lw    $a1, 0x38($sp)
/* 0041D11C 2739CECC */  addiu $t9, %lo(func_0041CECC) # addiu $t9, $t9, -0x3134
/* 0041D120 02203025 */  move  $a2, $s1
/* 0041D124 0320F809 */  jalr  $t9
/* 0041D128 27A20030 */   addiu $v0, $sp, 0x30
/* 0041D12C 10000029 */  b     .L0041D1D4
/* 0041D130 8FBC0020 */   lw    $gp, 0x20($sp)
.L0041D134:
/* 0041D134 8F99801C */  lw    $t9, %got(func_0041CF80)($gp)
/* 0041D138 02002025 */  move  $a0, $s0
/* 0041D13C 8FA50038 */  lw    $a1, 0x38($sp)
/* 0041D140 2739CF80 */  addiu $t9, %lo(func_0041CF80) # addiu $t9, $t9, -0x3080
/* 0041D144 02203025 */  move  $a2, $s1
/* 0041D148 0320F809 */  jalr  $t9
/* 0041D14C 27A20030 */   addiu $v0, $sp, 0x30
/* 0041D150 10000020 */  b     .L0041D1D4
/* 0041D154 8FBC0020 */   lw    $gp, 0x20($sp)
.L0041D158:
/* 0041D158 8F99801C */  lw    $t9, %got(func_0041CD64)($gp)
/* 0041D15C 02002025 */  move  $a0, $s0
/* 0041D160 8FA50038 */  lw    $a1, 0x38($sp)
/* 0041D164 2739CD64 */  addiu $t9, %lo(func_0041CD64) # addiu $t9, $t9, -0x329c
/* 0041D168 02203025 */  move  $a2, $s1
/* 0041D16C 0320F809 */  jalr  $t9
/* 0041D170 27A20030 */   addiu $v0, $sp, 0x30
/* 0041D174 10000017 */  b     .L0041D1D4
/* 0041D178 8FBC0020 */   lw    $gp, 0x20($sp)
.L0041D17C:
/* 0041D17C 8F99801C */  lw    $t9, %got(func_0041CE18)($gp)
/* 0041D180 02002025 */  move  $a0, $s0
/* 0041D184 8FA50038 */  lw    $a1, 0x38($sp)
/* 0041D188 2739CE18 */  addiu $t9, %lo(func_0041CE18) # addiu $t9, $t9, -0x31e8
/* 0041D18C 02203025 */  move  $a2, $s1
/* 0041D190 0320F809 */  jalr  $t9
/* 0041D194 27A20030 */   addiu $v0, $sp, 0x30
/* 0041D198 1000000E */  b     .L0041D1D4
/* 0041D19C 8FBC0020 */   lw    $gp, 0x20($sp)
.L0041D1A0:
/* 0041D1A0 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 0041D1A4 02002825 */  move  $a1, $s0
/* 0041D1A8 02203025 */  move  $a2, $s1
/* 0041D1AC 0320F809 */  jalr  $t9
/* 0041D1B0 00003825 */   move  $a3, $zero
/* 0041D1B4 10000007 */  b     .L0041D1D4
/* 0041D1B8 8FBC0020 */   lw    $gp, 0x20($sp)
.L0041D1BC:
/* 0041D1BC 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 0041D1C0 02002825 */  move  $a1, $s0
/* 0041D1C4 02203025 */  move  $a2, $s1
/* 0041D1C8 0320F809 */  jalr  $t9
/* 0041D1CC 00003825 */   move  $a3, $zero
/* 0041D1D0 8FBC0020 */  lw    $gp, 0x20($sp)
.L0041D1D4:
/* 0041D1D4 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0041D1D8 8FB00018 */  lw    $s0, 0x18($sp)
/* 0041D1DC 8FB1001C */  lw    $s1, 0x1c($sp)
/* 0041D1E0 03E00008 */  jr    $ra
/* 0041D1E4 27BD0030 */   addiu $sp, $sp, 0x30
    .type emit_trap_ri, @function
    .size emit_trap_ri, .-emit_trap_ri
    .end emit_trap_ri

    .type func_0041D1E8, @function
func_0041D1E8:
    # 0041E468 dw_emit_rrr
/* 0041D1E8 3C1C0FC0 */  .cpload $t9
/* 0041D1EC 279C2868 */  
/* 0041D1F0 0399E021 */  
/* 0041D1F4 27BDFFC0 */  addiu $sp, $sp, -0x40
/* 0041D1F8 AFB1001C */  sw    $s1, 0x1c($sp)
/* 0041D1FC 30B100FF */  andi  $s1, $a1, 0xff
/* 0041D200 AFBF002C */  sw    $ra, 0x2c($sp)
/* 0041D204 AFBC0028 */  sw    $gp, 0x28($sp)
/* 0041D208 AFB30024 */  sw    $s3, 0x24($sp)
/* 0041D20C AFB20020 */  sw    $s2, 0x20($sp)
/* 0041D210 AFB00018 */  sw    $s0, 0x18($sp)
/* 0041D214 AFA40040 */  sw    $a0, 0x40($sp)
/* 0041D218 AFA50044 */  sw    $a1, 0x44($sp)
/* 0041D21C AFA60048 */  sw    $a2, 0x48($sp)
/* 0041D220 16270004 */  bne   $s1, $a3, .L0041D234
/* 0041D224 AFA7004C */   sw    $a3, 0x4c($sp)
/* 0041D228 30F300FF */  andi  $s3, $a3, 0xff
/* 0041D22C 10000003 */  b     .L0041D23C
/* 0041D230 30D200FF */   andi  $s2, $a2, 0xff
.L0041D234:
/* 0041D234 30D300FF */  andi  $s3, $a2, 0xff
/* 0041D238 30F200FF */  andi  $s2, $a3, 0xff
.L0041D23C:
/* 0041D23C 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 0041D240 24040020 */  li    $a0, 32
/* 0041D244 24050006 */  li    $a1, 6
/* 0041D248 0320F809 */  jalr  $t9
/* 0041D24C 00000000 */   nop   
/* 0041D250 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041D254 26300001 */  addiu $s0, $s1, 1
/* 0041D258 02603025 */  move  $a2, $s3
/* 0041D25C 8F8E898C */  lw     $t6, %got(lsb_first)($gp)
/* 0041D260 02002825 */  move  $a1, $s0
/* 0041D264 24040002 */  li    $a0, 2
/* 0041D268 91CE0000 */  lbu   $t6, ($t6)
/* 0041D26C 11C00020 */  beqz  $t6, .L0041D2F0
/* 0041D270 00000000 */   nop   
/* 0041D274 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041D278 24040002 */  li    $a0, 2
/* 0041D27C 02202825 */  move  $a1, $s1
/* 0041D280 0320F809 */  jalr  $t9
/* 0041D284 02403825 */   move  $a3, $s2
/* 0041D288 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041D28C 24040051 */  li    $a0, 81
/* 0041D290 24050001 */  li    $a1, 1
/* 0041D294 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041D298 02203025 */  move  $a2, $s1
/* 0041D29C 02403825 */  move  $a3, $s2
/* 0041D2A0 0320F809 */  jalr  $t9
/* 0041D2A4 00000000 */   nop   
/* 0041D2A8 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041D2AC 26300001 */  addiu $s0, $s1, 1
/* 0041D2B0 02002825 */  move  $a1, $s0
/* 0041D2B4 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041D2B8 97A40042 */  lhu   $a0, 0x42($sp)
/* 0041D2BC 24060001 */  li    $a2, 1
/* 0041D2C0 0320F809 */  jalr  $t9
/* 0041D2C4 26670001 */   addiu $a3, $s3, 1
/* 0041D2C8 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041D2CC 97A40042 */  lhu   $a0, 0x42($sp)
/* 0041D2D0 02002825 */  move  $a1, $s0
/* 0041D2D4 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041D2D8 02003025 */  move  $a2, $s0
/* 0041D2DC 26470001 */  addiu $a3, $s2, 1
/* 0041D2E0 0320F809 */  jalr  $t9
/* 0041D2E4 00000000 */   nop   
/* 0041D2E8 1000001F */  b     .L0041D368
/* 0041D2EC 8FBC0028 */   lw    $gp, 0x28($sp)
.L0041D2F0:
/* 0041D2F0 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041D2F4 26470001 */  addiu $a3, $s2, 1
/* 0041D2F8 AFA70030 */  sw    $a3, 0x30($sp)
/* 0041D2FC 0320F809 */  jalr  $t9
/* 0041D300 26660001 */   addiu $a2, $s3, 1
/* 0041D304 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041D308 8FA70030 */  lw    $a3, 0x30($sp)
/* 0041D30C 24040051 */  li    $a0, 81
/* 0041D310 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041D314 24050001 */  li    $a1, 1
/* 0041D318 02003025 */  move  $a2, $s0
/* 0041D31C 0320F809 */  jalr  $t9
/* 0041D320 00000000 */   nop   
/* 0041D324 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041D328 97A40042 */  lhu   $a0, 0x42($sp)
/* 0041D32C 02202825 */  move  $a1, $s1
/* 0041D330 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041D334 24060001 */  li    $a2, 1
/* 0041D338 02603825 */  move  $a3, $s3
/* 0041D33C 0320F809 */  jalr  $t9
/* 0041D340 00000000 */   nop   
/* 0041D344 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041D348 97A40042 */  lhu   $a0, 0x42($sp)
/* 0041D34C 02202825 */  move  $a1, $s1
/* 0041D350 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041D354 02203025 */  move  $a2, $s1
/* 0041D358 02403825 */  move  $a3, $s2
/* 0041D35C 0320F809 */  jalr  $t9
/* 0041D360 00000000 */   nop   
/* 0041D364 8FBC0028 */  lw    $gp, 0x28($sp)
.L0041D368:
/* 0041D368 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 0041D36C 24040020 */  li    $a0, 32
/* 0041D370 24050005 */  li    $a1, 5
/* 0041D374 0320F809 */  jalr  $t9
/* 0041D378 00000000 */   nop   
/* 0041D37C 8FBF002C */  lw    $ra, 0x2c($sp)
/* 0041D380 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041D384 8FB00018 */  lw    $s0, 0x18($sp)
/* 0041D388 8FB1001C */  lw    $s1, 0x1c($sp)
/* 0041D38C 8FB20020 */  lw    $s2, 0x20($sp)
/* 0041D390 8FB30024 */  lw    $s3, 0x24($sp)
/* 0041D394 03E00008 */  jr    $ra
/* 0041D398 27BD0040 */   addiu $sp, $sp, 0x40

    .type func_0041D39C, @function
func_0041D39C:
    # 0041E468 dw_emit_rrr
/* 0041D39C 3C1C0FC0 */  .cpload $t9
/* 0041D3A0 279C26B4 */  
/* 0041D3A4 0399E021 */  
/* 0041D3A8 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 0041D3AC 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 0041D3B0 AFB00014 */  sw    $s0, 0x14($sp)
/* 0041D3B4 30B000FF */  andi  $s0, $a1, 0xff
/* 0041D3B8 AFBF0024 */  sw    $ra, 0x24($sp)
/* 0041D3BC AFB2001C */  sw    $s2, 0x1c($sp)
/* 0041D3C0 AFB10018 */  sw    $s1, 0x18($sp)
/* 0041D3C4 AFA40038 */  sw    $a0, 0x38($sp)
/* 0041D3C8 AFA5003C */  sw    $a1, 0x3c($sp)
/* 0041D3CC 30D100FF */  andi  $s1, $a2, 0xff
/* 0041D3D0 30F200FF */  andi  $s2, $a3, 0xff
/* 0041D3D4 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0041D3D8 AFA60040 */  sw    $a2, 0x40($sp)
/* 0041D3DC AFA70044 */  sw    $a3, 0x44($sp)
/* 0041D3E0 24050006 */  li    $a1, 6
/* 0041D3E4 0320F809 */  jalr  $t9
/* 0041D3E8 24040020 */   li    $a0, 32
/* 0041D3EC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041D3F0 02403825 */  move  $a3, $s2
/* 0041D3F4 24040051 */  li    $a0, 81
/* 0041D3F8 8F8E898C */  lw     $t6, %got(lsb_first)($gp)
/* 0041D3FC 24050001 */  li    $a1, 1
/* 0041D400 26260001 */  addiu $a2, $s1, 1
/* 0041D404 91CE0000 */  lbu   $t6, ($t6)
/* 0041D408 11C00020 */  beqz  $t6, .L0041D48C
/* 0041D40C 00000000 */   nop   
/* 0041D410 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041D414 24040051 */  li    $a0, 81
/* 0041D418 24050001 */  li    $a1, 1
/* 0041D41C 0320F809 */  jalr  $t9
/* 0041D420 02203025 */   move  $a2, $s1
/* 0041D424 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041D428 24040056 */  li    $a0, 86
/* 0041D42C 02002825 */  move  $a1, $s0
/* 0041D430 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041D434 02203025 */  move  $a2, $s1
/* 0041D438 02403825 */  move  $a3, $s2
/* 0041D43C 0320F809 */  jalr  $t9
/* 0041D440 00000000 */   nop   
/* 0041D444 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041D448 26050001 */  addiu $a1, $s0, 1
/* 0041D44C AFA50030 */  sw    $a1, 0x30($sp)
/* 0041D450 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041D454 97A4003A */  lhu   $a0, 0x3a($sp)
/* 0041D458 26260001 */  addiu $a2, $s1, 1
/* 0041D45C 0320F809 */  jalr  $t9
/* 0041D460 26470001 */   addiu $a3, $s2, 1
/* 0041D464 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041D468 8FA50030 */  lw    $a1, 0x30($sp)
/* 0041D46C 97A4003A */  lhu   $a0, 0x3a($sp)
/* 0041D470 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041D474 24070001 */  li    $a3, 1
/* 0041D478 00A03025 */  move  $a2, $a1
/* 0041D47C 0320F809 */  jalr  $t9
/* 0041D480 00000000 */   nop   
/* 0041D484 1000001F */  b     .L0041D504
/* 0041D488 8FBC0020 */   lw    $gp, 0x20($sp)
.L0041D48C:
/* 0041D48C 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041D490 26470001 */  addiu $a3, $s2, 1
/* 0041D494 AFA7002C */  sw    $a3, 0x2c($sp)
/* 0041D498 0320F809 */  jalr  $t9
/* 0041D49C AFA60030 */   sw    $a2, 0x30($sp)
/* 0041D4A0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041D4A4 8FA60030 */  lw    $a2, 0x30($sp)
/* 0041D4A8 8FA7002C */  lw    $a3, 0x2c($sp)
/* 0041D4AC 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041D4B0 24040056 */  li    $a0, 86
/* 0041D4B4 26050001 */  addiu $a1, $s0, 1
/* 0041D4B8 0320F809 */  jalr  $t9
/* 0041D4BC 00000000 */   nop   
/* 0041D4C0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041D4C4 97A4003A */  lhu   $a0, 0x3a($sp)
/* 0041D4C8 02002825 */  move  $a1, $s0
/* 0041D4CC 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041D4D0 02203025 */  move  $a2, $s1
/* 0041D4D4 02403825 */  move  $a3, $s2
/* 0041D4D8 0320F809 */  jalr  $t9
/* 0041D4DC 00000000 */   nop   
/* 0041D4E0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041D4E4 97A4003A */  lhu   $a0, 0x3a($sp)
/* 0041D4E8 02002825 */  move  $a1, $s0
/* 0041D4EC 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041D4F0 02003025 */  move  $a2, $s0
/* 0041D4F4 24070001 */  li    $a3, 1
/* 0041D4F8 0320F809 */  jalr  $t9
/* 0041D4FC 00000000 */   nop   
/* 0041D500 8FBC0020 */  lw    $gp, 0x20($sp)
.L0041D504:
/* 0041D504 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 0041D508 24040020 */  li    $a0, 32
/* 0041D50C 24050005 */  li    $a1, 5
/* 0041D510 0320F809 */  jalr  $t9
/* 0041D514 00000000 */   nop   
/* 0041D518 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0041D51C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041D520 8FB00014 */  lw    $s0, 0x14($sp)
/* 0041D524 8FB10018 */  lw    $s1, 0x18($sp)
/* 0041D528 8FB2001C */  lw    $s2, 0x1c($sp)
/* 0041D52C 03E00008 */  jr    $ra
/* 0041D530 27BD0038 */   addiu $sp, $sp, 0x38

    .type func_0041D534, @function
func_0041D534:
    # 0041E468 dw_emit_rrr
/* 0041D534 3C1C0FC0 */  .cpload $t9
/* 0041D538 279C251C */  
/* 0041D53C 0399E021 */  
/* 0041D540 27BDFFB8 */  addiu $sp, $sp, -0x48
/* 0041D544 8F9984FC */  lw    $t9, %call16(get_free_reg)($gp)
/* 0041D548 AFBF0024 */  sw    $ra, 0x24($sp)
/* 0041D54C AFA40048 */  sw    $a0, 0x48($sp)
/* 0041D550 AFA5004C */  sw    $a1, 0x4c($sp)
/* 0041D554 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0041D558 AFA60050 */  sw    $a2, 0x50($sp)
/* 0041D55C AFA70054 */  sw    $a3, 0x54($sp)
/* 0041D560 AFA20044 */  sw    $v0, 0x44($sp)
/* 0041D564 24050001 */  li    $a1, 1
/* 0041D568 0320F809 */  jalr  $t9
/* 0041D56C 00002025 */   move  $a0, $zero
/* 0041D570 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041D574 A3A20043 */  sb    $v0, 0x43($sp)
/* 0041D578 304400FF */  andi  $a0, $v0, 0xff
/* 0041D57C 8F998510 */  lw    $t9, %call16(free_reg)($gp)
/* 0041D580 0320F809 */  jalr  $t9
/* 0041D584 00000000 */   nop   
/* 0041D588 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041D58C 00002025 */  move  $a0, $zero
/* 0041D590 24050001 */  li    $a1, 1
/* 0041D594 8F9984FC */  lw    $t9, %call16(get_free_reg)($gp)
/* 0041D598 0320F809 */  jalr  $t9
/* 0041D59C 00000000 */   nop   
/* 0041D5A0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041D5A4 A3A20042 */  sb    $v0, 0x42($sp)
/* 0041D5A8 304400FF */  andi  $a0, $v0, 0xff
/* 0041D5AC 8F998510 */  lw    $t9, %call16(free_reg)($gp)
/* 0041D5B0 0320F809 */  jalr  $t9
/* 0041D5B4 00000000 */   nop   
/* 0041D5B8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041D5BC 00002025 */  move  $a0, $zero
/* 0041D5C0 24050001 */  li    $a1, 1
/* 0041D5C4 8F9984FC */  lw    $t9, %call16(get_free_reg)($gp)
/* 0041D5C8 0320F809 */  jalr  $t9
/* 0041D5CC 00000000 */   nop   
/* 0041D5D0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041D5D4 A3A20041 */  sb    $v0, 0x41($sp)
/* 0041D5D8 304400FF */  andi  $a0, $v0, 0xff
/* 0041D5DC 8F998510 */  lw    $t9, %call16(free_reg)($gp)
/* 0041D5E0 0320F809 */  jalr  $t9
/* 0041D5E4 00000000 */   nop   
/* 0041D5E8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041D5EC 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 0041D5F0 0320F809 */  jalr  $t9
/* 0041D5F4 00000000 */   nop   
/* 0041D5F8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041D5FC AFA2003C */  sw    $v0, 0x3c($sp)
/* 0041D600 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 0041D604 0320F809 */  jalr  $t9
/* 0041D608 00000000 */   nop   
/* 0041D60C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041D610 AFA20038 */  sw    $v0, 0x38($sp)
/* 0041D614 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 0041D618 0320F809 */  jalr  $t9
/* 0041D61C 00000000 */   nop   
/* 0041D620 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041D624 93A60057 */  lbu   $a2, 0x57($sp)
/* 0041D628 AFA20034 */  sw    $v0, 0x34($sp)
/* 0041D62C 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041D630 2404004F */  li    $a0, 79
/* 0041D634 93A50043 */  lbu   $a1, 0x43($sp)
/* 0041D638 2407001A */  li    $a3, 26
/* 0041D63C AFA00010 */  sw    $zero, 0x10($sp)
/* 0041D640 0320F809 */  jalr  $t9
/* 0041D644 A3A60033 */   sb    $a2, 0x33($sp)
/* 0041D648 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041D64C 24040010 */  li    $a0, 16
/* 0041D650 93A50043 */  lbu   $a1, 0x43($sp)
/* 0041D654 8F998224 */  lw    $t9, %call16(emit_rll)($gp)
/* 0041D658 8FA6003C */  lw    $a2, 0x3c($sp)
/* 0041D65C 0320F809 */  jalr  $t9
/* 0041D660 00000000 */   nop   
/* 0041D664 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041D668 8FB80044 */  lw    $t8, 0x44($sp)
/* 0041D66C 2404004F */  li    $a0, 79
/* 0041D670 8F8E898C */  lw     $t6, %got(lsb_first)($gp)
/* 0041D674 91CE0000 */  lbu   $t6, ($t6)
/* 0041D678 51C00052 */  beql  $t6, $zero, .L0041D7C4
/* 0041D67C 8F190010 */   lw    $t9, 0x10($t8)
/* 0041D680 93A5004F */  lbu   $a1, 0x4f($sp)
/* 0041D684 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041D688 2404004F */  li    $a0, 79
/* 0041D68C 24A50001 */  addiu $a1, $a1, 1
/* 0041D690 AFA5002C */  sw    $a1, 0x2c($sp)
/* 0041D694 93A60053 */  lbu   $a2, 0x53($sp)
/* 0041D698 0320F809 */  jalr  $t9
/* 0041D69C 93A70057 */   lbu   $a3, 0x57($sp)
/* 0041D6A0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041D6A4 24040029 */  li    $a0, 41
/* 0041D6A8 93A5004F */  lbu   $a1, 0x4f($sp)
/* 0041D6AC 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 0041D6B0 00003025 */  move  $a2, $zero
/* 0041D6B4 00003825 */  move  $a3, $zero
/* 0041D6B8 0320F809 */  jalr  $t9
/* 0041D6BC 00000000 */   nop   
/* 0041D6C0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041D6C4 24040004 */  li    $a0, 4
/* 0041D6C8 8FA50034 */  lw    $a1, 0x34($sp)
/* 0041D6CC 8F998228 */  lw    $t9, %call16(emit_ll)($gp)
/* 0041D6D0 0320F809 */  jalr  $t9
/* 0041D6D4 00000000 */   nop   
/* 0041D6D8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041D6DC 8FA4003C */  lw    $a0, 0x3c($sp)
/* 0041D6E0 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 0041D6E4 0320F809 */  jalr  $t9
/* 0041D6E8 00000000 */   nop   
/* 0041D6EC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041D6F0 93A60053 */  lbu   $a2, 0x53($sp)
/* 0041D6F4 2404004F */  li    $a0, 79
/* 0041D6F8 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041D6FC 8FA5002C */  lw    $a1, 0x2c($sp)
/* 0041D700 93A70057 */  lbu   $a3, 0x57($sp)
/* 0041D704 0320F809 */  jalr  $t9
/* 0041D708 24C60001 */   addiu $a2, $a2, 1
/* 0041D70C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041D710 240400DC */  li    $a0, 220
/* 0041D714 93A50043 */  lbu   $a1, 0x43($sp)
/* 0041D718 8F998224 */  lw    $t9, %call16(emit_rll)($gp)
/* 0041D71C 8FA60038 */  lw    $a2, 0x38($sp)
/* 0041D720 0320F809 */  jalr  $t9
/* 0041D724 00000000 */   nop   
/* 0041D728 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041D72C 240400DB */  li    $a0, 219
/* 0041D730 93A50042 */  lbu   $a1, 0x42($sp)
/* 0041D734 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 0041D738 93A60057 */  lbu   $a2, 0x57($sp)
/* 0041D73C 0320F809 */  jalr  $t9
/* 0041D740 00000000 */   nop   
/* 0041D744 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041D748 24040054 */  li    $a0, 84
/* 0041D74C 93A50041 */  lbu   $a1, 0x41($sp)
/* 0041D750 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041D754 93A60053 */  lbu   $a2, 0x53($sp)
/* 0041D758 93A70042 */  lbu   $a3, 0x42($sp)
/* 0041D75C 0320F809 */  jalr  $t9
/* 0041D760 00000000 */   nop   
/* 0041D764 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041D768 8FA6002C */  lw    $a2, 0x2c($sp)
/* 0041D76C 24040040 */  li    $a0, 64
/* 0041D770 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041D774 93A70041 */  lbu   $a3, 0x41($sp)
/* 0041D778 00C02825 */  move  $a1, $a2
/* 0041D77C 0320F809 */  jalr  $t9
/* 0041D780 00000000 */   nop   
/* 0041D784 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041D788 8FA40038 */  lw    $a0, 0x38($sp)
/* 0041D78C 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 0041D790 0320F809 */  jalr  $t9
/* 0041D794 00000000 */   nop   
/* 0041D798 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041D79C 2404004F */  li    $a0, 79
/* 0041D7A0 93A5004F */  lbu   $a1, 0x4f($sp)
/* 0041D7A4 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041D7A8 93A60053 */  lbu   $a2, 0x53($sp)
/* 0041D7AC 93A70057 */  lbu   $a3, 0x57($sp)
/* 0041D7B0 0320F809 */  jalr  $t9
/* 0041D7B4 00000000 */   nop   
/* 0041D7B8 1000005E */  b     .L0041D934
/* 0041D7BC 8FBC0020 */   lw    $gp, 0x20($sp)
/* 0041D7C0 8F190010 */  lw    $t9, 0x10($t8)
.L0041D7C4:
/* 0041D7C4 3C010501 */  lui   $at, 0x501
/* 0041D7C8 8F280004 */  lw    $t0, 4($t9)
/* 0041D7CC 91090021 */  lbu   $t1, 0x21($t0)
/* 0041D7D0 312A001F */  andi  $t2, $t1, 0x1f
/* 0041D7D4 2D4B0020 */  sltiu $t3, $t2, 0x20
/* 0041D7D8 000B6023 */  negu  $t4, $t3
/* 0041D7DC 01816824 */  and   $t5, $t4, $at
/* 0041D7E0 014D7004 */  sllv  $t6, $t5, $t2
/* 0041D7E4 05C30005 */  bgezl $t6, .L0041D7FC
/* 0041D7E8 93A60053 */   lbu   $a2, 0x53($sp)
/* 0041D7EC 93AF0057 */  lbu   $t7, 0x57($sp)
/* 0041D7F0 25F80001 */  addiu $t8, $t7, 1
/* 0041D7F4 A3B80033 */  sb    $t8, 0x33($sp)
/* 0041D7F8 93A60053 */  lbu   $a2, 0x53($sp)
.L0041D7FC:
/* 0041D7FC 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041D800 93A5004F */  lbu   $a1, 0x4f($sp)
/* 0041D804 24C60001 */  addiu $a2, $a2, 1
/* 0041D808 AFA60028 */  sw    $a2, 0x28($sp)
/* 0041D80C 0320F809 */  jalr  $t9
/* 0041D810 93A70033 */   lbu   $a3, 0x33($sp)
/* 0041D814 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041D818 93A5004F */  lbu   $a1, 0x4f($sp)
/* 0041D81C 24040029 */  li    $a0, 41
/* 0041D820 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 0041D824 24A50001 */  addiu $a1, $a1, 1
/* 0041D828 AFA5002C */  sw    $a1, 0x2c($sp)
/* 0041D82C 00003025 */  move  $a2, $zero
/* 0041D830 0320F809 */  jalr  $t9
/* 0041D834 00003825 */   move  $a3, $zero
/* 0041D838 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041D83C 24040004 */  li    $a0, 4
/* 0041D840 8FA50034 */  lw    $a1, 0x34($sp)
/* 0041D844 8F998228 */  lw    $t9, %call16(emit_ll)($gp)
/* 0041D848 0320F809 */  jalr  $t9
/* 0041D84C 00000000 */   nop   
/* 0041D850 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041D854 8FA4003C */  lw    $a0, 0x3c($sp)
/* 0041D858 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 0041D85C 0320F809 */  jalr  $t9
/* 0041D860 00000000 */   nop   
/* 0041D864 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041D868 2404004F */  li    $a0, 79
/* 0041D86C 93A5004F */  lbu   $a1, 0x4f($sp)
/* 0041D870 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041D874 93A60053 */  lbu   $a2, 0x53($sp)
/* 0041D878 93A70033 */  lbu   $a3, 0x33($sp)
/* 0041D87C 0320F809 */  jalr  $t9
/* 0041D880 00000000 */   nop   
/* 0041D884 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041D888 240400DC */  li    $a0, 220
/* 0041D88C 93A50043 */  lbu   $a1, 0x43($sp)
/* 0041D890 8F998224 */  lw    $t9, %call16(emit_rll)($gp)
/* 0041D894 8FA60038 */  lw    $a2, 0x38($sp)
/* 0041D898 0320F809 */  jalr  $t9
/* 0041D89C 00000000 */   nop   
/* 0041D8A0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041D8A4 240400DB */  li    $a0, 219
/* 0041D8A8 93A50042 */  lbu   $a1, 0x42($sp)
/* 0041D8AC 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 0041D8B0 93A60033 */  lbu   $a2, 0x33($sp)
/* 0041D8B4 0320F809 */  jalr  $t9
/* 0041D8B8 00000000 */   nop   
/* 0041D8BC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041D8C0 24040054 */  li    $a0, 84
/* 0041D8C4 93A50041 */  lbu   $a1, 0x41($sp)
/* 0041D8C8 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041D8CC 8FA60028 */  lw    $a2, 0x28($sp)
/* 0041D8D0 93A70042 */  lbu   $a3, 0x42($sp)
/* 0041D8D4 0320F809 */  jalr  $t9
/* 0041D8D8 00000000 */   nop   
/* 0041D8DC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041D8E0 93A6004F */  lbu   $a2, 0x4f($sp)
/* 0041D8E4 24040040 */  li    $a0, 64
/* 0041D8E8 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041D8EC 93A70041 */  lbu   $a3, 0x41($sp)
/* 0041D8F0 00C02825 */  move  $a1, $a2
/* 0041D8F4 0320F809 */  jalr  $t9
/* 0041D8F8 00000000 */   nop   
/* 0041D8FC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041D900 8FA40038 */  lw    $a0, 0x38($sp)
/* 0041D904 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 0041D908 0320F809 */  jalr  $t9
/* 0041D90C 00000000 */   nop   
/* 0041D910 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041D914 2404004F */  li    $a0, 79
/* 0041D918 8FA5002C */  lw    $a1, 0x2c($sp)
/* 0041D91C 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041D920 8FA60028 */  lw    $a2, 0x28($sp)
/* 0041D924 93A70033 */  lbu   $a3, 0x33($sp)
/* 0041D928 0320F809 */  jalr  $t9
/* 0041D92C 00000000 */   nop   
/* 0041D930 8FBC0020 */  lw    $gp, 0x20($sp)
.L0041D934:
/* 0041D934 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 0041D938 8FA40034 */  lw    $a0, 0x34($sp)
/* 0041D93C 0320F809 */  jalr  $t9
/* 0041D940 00000000 */   nop   
/* 0041D944 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0041D948 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041D94C 27BD0048 */  addiu $sp, $sp, 0x48
/* 0041D950 03E00008 */  jr    $ra
/* 0041D954 00000000 */   nop   

    .type func_0041D958, @function
func_0041D958:
    # 0041E468 dw_emit_rrr
/* 0041D958 3C1C0FC0 */  .cpload $t9
/* 0041D95C 279C20F8 */  
/* 0041D960 0399E021 */  
/* 0041D964 27BDFFB8 */  addiu $sp, $sp, -0x48
/* 0041D968 8F9984FC */  lw    $t9, %call16(get_free_reg)($gp)
/* 0041D96C AFBF0024 */  sw    $ra, 0x24($sp)
/* 0041D970 AFA40048 */  sw    $a0, 0x48($sp)
/* 0041D974 AFA5004C */  sw    $a1, 0x4c($sp)
/* 0041D978 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0041D97C AFA60050 */  sw    $a2, 0x50($sp)
/* 0041D980 AFA70054 */  sw    $a3, 0x54($sp)
/* 0041D984 AFA20044 */  sw    $v0, 0x44($sp)
/* 0041D988 24050001 */  li    $a1, 1
/* 0041D98C 0320F809 */  jalr  $t9
/* 0041D990 00002025 */   move  $a0, $zero
/* 0041D994 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041D998 A3A20043 */  sb    $v0, 0x43($sp)
/* 0041D99C 304400FF */  andi  $a0, $v0, 0xff
/* 0041D9A0 8F998510 */  lw    $t9, %call16(free_reg)($gp)
/* 0041D9A4 0320F809 */  jalr  $t9
/* 0041D9A8 00000000 */   nop   
/* 0041D9AC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041D9B0 00002025 */  move  $a0, $zero
/* 0041D9B4 24050001 */  li    $a1, 1
/* 0041D9B8 8F9984FC */  lw    $t9, %call16(get_free_reg)($gp)
/* 0041D9BC 0320F809 */  jalr  $t9
/* 0041D9C0 00000000 */   nop   
/* 0041D9C4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041D9C8 A3A20042 */  sb    $v0, 0x42($sp)
/* 0041D9CC 304400FF */  andi  $a0, $v0, 0xff
/* 0041D9D0 8F998510 */  lw    $t9, %call16(free_reg)($gp)
/* 0041D9D4 0320F809 */  jalr  $t9
/* 0041D9D8 00000000 */   nop   
/* 0041D9DC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041D9E0 00002025 */  move  $a0, $zero
/* 0041D9E4 24050001 */  li    $a1, 1
/* 0041D9E8 8F9984FC */  lw    $t9, %call16(get_free_reg)($gp)
/* 0041D9EC 0320F809 */  jalr  $t9
/* 0041D9F0 00000000 */   nop   
/* 0041D9F4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041D9F8 A3A20041 */  sb    $v0, 0x41($sp)
/* 0041D9FC 304400FF */  andi  $a0, $v0, 0xff
/* 0041DA00 8F998510 */  lw    $t9, %call16(free_reg)($gp)
/* 0041DA04 0320F809 */  jalr  $t9
/* 0041DA08 00000000 */   nop   
/* 0041DA0C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041DA10 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 0041DA14 0320F809 */  jalr  $t9
/* 0041DA18 00000000 */   nop   
/* 0041DA1C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041DA20 AFA2003C */  sw    $v0, 0x3c($sp)
/* 0041DA24 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 0041DA28 0320F809 */  jalr  $t9
/* 0041DA2C 00000000 */   nop   
/* 0041DA30 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041DA34 AFA20038 */  sw    $v0, 0x38($sp)
/* 0041DA38 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 0041DA3C 0320F809 */  jalr  $t9
/* 0041DA40 00000000 */   nop   
/* 0041DA44 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041DA48 93A60057 */  lbu   $a2, 0x57($sp)
/* 0041DA4C AFA20034 */  sw    $v0, 0x34($sp)
/* 0041DA50 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041DA54 2404004F */  li    $a0, 79
/* 0041DA58 93A50043 */  lbu   $a1, 0x43($sp)
/* 0041DA5C 2407001A */  li    $a3, 26
/* 0041DA60 AFA00010 */  sw    $zero, 0x10($sp)
/* 0041DA64 0320F809 */  jalr  $t9
/* 0041DA68 A3A60033 */   sb    $a2, 0x33($sp)
/* 0041DA6C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041DA70 24040010 */  li    $a0, 16
/* 0041DA74 93A50043 */  lbu   $a1, 0x43($sp)
/* 0041DA78 8F998224 */  lw    $t9, %call16(emit_rll)($gp)
/* 0041DA7C 8FA6003C */  lw    $a2, 0x3c($sp)
/* 0041DA80 0320F809 */  jalr  $t9
/* 0041DA84 00000000 */   nop   
/* 0041DA88 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041DA8C 8FB80044 */  lw    $t8, 0x44($sp)
/* 0041DA90 8F8E898C */  lw     $t6, %got(lsb_first)($gp)
/* 0041DA94 91CE0000 */  lbu   $t6, ($t6)
/* 0041DA98 51C00061 */  beql  $t6, $zero, .L0041DC20
/* 0041DA9C 8F190010 */   lw    $t9, 0x10($t8)
/* 0041DAA0 93A60053 */  lbu   $a2, 0x53($sp)
/* 0041DAA4 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041DAA8 97A4004A */  lhu   $a0, 0x4a($sp)
/* 0041DAAC 24C60001 */  addiu $a2, $a2, 1
/* 0041DAB0 AFA6002C */  sw    $a2, 0x2c($sp)
/* 0041DAB4 93A5004F */  lbu   $a1, 0x4f($sp)
/* 0041DAB8 0320F809 */  jalr  $t9
/* 0041DABC 93A70057 */   lbu   $a3, 0x57($sp)
/* 0041DAC0 97AF004A */  lhu   $t7, 0x4a($sp)
/* 0041DAC4 24010053 */  li    $at, 83
/* 0041DAC8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041DACC 15E1000C */  bne   $t7, $at, .L0041DB00
/* 0041DAD0 24040029 */   li    $a0, 41
/* 0041DAD4 93A5004F */  lbu   $a1, 0x4f($sp)
/* 0041DAD8 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041DADC 24040053 */  li    $a0, 83
/* 0041DAE0 24A50001 */  addiu $a1, $a1, 1
/* 0041DAE4 AFA50028 */  sw    $a1, 0x28($sp)
/* 0041DAE8 8FA6002C */  lw    $a2, 0x2c($sp)
/* 0041DAEC 2407001F */  li    $a3, 31
/* 0041DAF0 0320F809 */  jalr  $t9
/* 0041DAF4 AFA00010 */   sw    $zero, 0x10($sp)
/* 0041DAF8 10000009 */  b     .L0041DB20
/* 0041DAFC 8FBC0020 */   lw    $gp, 0x20($sp)
.L0041DB00:
/* 0041DB00 93A5004F */  lbu   $a1, 0x4f($sp)
/* 0041DB04 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 0041DB08 00003025 */  move  $a2, $zero
/* 0041DB0C 24A50001 */  addiu $a1, $a1, 1
/* 0041DB10 AFA50028 */  sw    $a1, 0x28($sp)
/* 0041DB14 0320F809 */  jalr  $t9
/* 0041DB18 00003825 */   move  $a3, $zero
/* 0041DB1C 8FBC0020 */  lw    $gp, 0x20($sp)
.L0041DB20:
/* 0041DB20 8F998228 */  lw    $t9, %call16(emit_ll)($gp)
/* 0041DB24 24040004 */  li    $a0, 4
/* 0041DB28 8FA50034 */  lw    $a1, 0x34($sp)
/* 0041DB2C 0320F809 */  jalr  $t9
/* 0041DB30 00000000 */   nop   
/* 0041DB34 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041DB38 8FA4003C */  lw    $a0, 0x3c($sp)
/* 0041DB3C 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 0041DB40 0320F809 */  jalr  $t9
/* 0041DB44 00000000 */   nop   
/* 0041DB48 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041DB4C 24040054 */  li    $a0, 84
/* 0041DB50 93A5004F */  lbu   $a1, 0x4f($sp)
/* 0041DB54 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041DB58 93A60053 */  lbu   $a2, 0x53($sp)
/* 0041DB5C 93A70057 */  lbu   $a3, 0x57($sp)
/* 0041DB60 0320F809 */  jalr  $t9
/* 0041DB64 00000000 */   nop   
/* 0041DB68 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041DB6C 240400DC */  li    $a0, 220
/* 0041DB70 93A50043 */  lbu   $a1, 0x43($sp)
/* 0041DB74 8F998224 */  lw    $t9, %call16(emit_rll)($gp)
/* 0041DB78 8FA60038 */  lw    $a2, 0x38($sp)
/* 0041DB7C 0320F809 */  jalr  $t9
/* 0041DB80 00000000 */   nop   
/* 0041DB84 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041DB88 240400DB */  li    $a0, 219
/* 0041DB8C 93A50042 */  lbu   $a1, 0x42($sp)
/* 0041DB90 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 0041DB94 93A60057 */  lbu   $a2, 0x57($sp)
/* 0041DB98 0320F809 */  jalr  $t9
/* 0041DB9C 00000000 */   nop   
/* 0041DBA0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041DBA4 2404004F */  li    $a0, 79
/* 0041DBA8 93A50041 */  lbu   $a1, 0x41($sp)
/* 0041DBAC 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041DBB0 8FA6002C */  lw    $a2, 0x2c($sp)
/* 0041DBB4 93A70042 */  lbu   $a3, 0x42($sp)
/* 0041DBB8 0320F809 */  jalr  $t9
/* 0041DBBC 00000000 */   nop   
/* 0041DBC0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041DBC4 93A5004F */  lbu   $a1, 0x4f($sp)
/* 0041DBC8 24040040 */  li    $a0, 64
/* 0041DBCC 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041DBD0 93A70041 */  lbu   $a3, 0x41($sp)
/* 0041DBD4 00A03025 */  move  $a2, $a1
/* 0041DBD8 0320F809 */  jalr  $t9
/* 0041DBDC 00000000 */   nop   
/* 0041DBE0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041DBE4 8FA40038 */  lw    $a0, 0x38($sp)
/* 0041DBE8 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 0041DBEC 0320F809 */  jalr  $t9
/* 0041DBF0 00000000 */   nop   
/* 0041DBF4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041DBF8 97A4004A */  lhu   $a0, 0x4a($sp)
/* 0041DBFC 8FA50028 */  lw    $a1, 0x28($sp)
/* 0041DC00 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041DC04 8FA6002C */  lw    $a2, 0x2c($sp)
/* 0041DC08 93A70057 */  lbu   $a3, 0x57($sp)
/* 0041DC0C 0320F809 */  jalr  $t9
/* 0041DC10 00000000 */   nop   
/* 0041DC14 10000069 */  b     .L0041DDBC
/* 0041DC18 8FBC0020 */   lw    $gp, 0x20($sp)
/* 0041DC1C 8F190010 */  lw    $t9, 0x10($t8)
.L0041DC20:
/* 0041DC20 3C010501 */  lui   $at, 0x501
/* 0041DC24 8F280004 */  lw    $t0, 4($t9)
/* 0041DC28 91090021 */  lbu   $t1, 0x21($t0)
/* 0041DC2C 312A001F */  andi  $t2, $t1, 0x1f
/* 0041DC30 2D4B0020 */  sltiu $t3, $t2, 0x20
/* 0041DC34 000B6023 */  negu  $t4, $t3
/* 0041DC38 01816824 */  and   $t5, $t4, $at
/* 0041DC3C 014D7004 */  sllv  $t6, $t5, $t2
/* 0041DC40 05C30005 */  bgezl $t6, .L0041DC58
/* 0041DC44 93A5004F */   lbu   $a1, 0x4f($sp)
/* 0041DC48 93AF0057 */  lbu   $t7, 0x57($sp)
/* 0041DC4C 25F80001 */  addiu $t8, $t7, 1
/* 0041DC50 A3B80033 */  sb    $t8, 0x33($sp)
/* 0041DC54 93A5004F */  lbu   $a1, 0x4f($sp)
.L0041DC58:
/* 0041DC58 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041DC5C 97A4004A */  lhu   $a0, 0x4a($sp)
/* 0041DC60 24A50001 */  addiu $a1, $a1, 1
/* 0041DC64 AFA50028 */  sw    $a1, 0x28($sp)
/* 0041DC68 93A60053 */  lbu   $a2, 0x53($sp)
/* 0041DC6C 0320F809 */  jalr  $t9
/* 0041DC70 93A70033 */   lbu   $a3, 0x33($sp)
/* 0041DC74 97B9004A */  lhu   $t9, 0x4a($sp)
/* 0041DC78 24010053 */  li    $at, 83
/* 0041DC7C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041DC80 1721000A */  bne   $t9, $at, .L0041DCAC
/* 0041DC84 24040029 */   li    $a0, 41
/* 0041DC88 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041DC8C 24040053 */  li    $a0, 83
/* 0041DC90 93A5004F */  lbu   $a1, 0x4f($sp)
/* 0041DC94 93A60053 */  lbu   $a2, 0x53($sp)
/* 0041DC98 2407001F */  li    $a3, 31
/* 0041DC9C 0320F809 */  jalr  $t9
/* 0041DCA0 AFA00010 */   sw    $zero, 0x10($sp)
/* 0041DCA4 10000007 */  b     .L0041DCC4
/* 0041DCA8 8FBC0020 */   lw    $gp, 0x20($sp)
.L0041DCAC:
/* 0041DCAC 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 0041DCB0 93A5004F */  lbu   $a1, 0x4f($sp)
/* 0041DCB4 00003025 */  move  $a2, $zero
/* 0041DCB8 0320F809 */  jalr  $t9
/* 0041DCBC 00003825 */   move  $a3, $zero
/* 0041DCC0 8FBC0020 */  lw    $gp, 0x20($sp)
.L0041DCC4:
/* 0041DCC4 8F998228 */  lw    $t9, %call16(emit_ll)($gp)
/* 0041DCC8 24040004 */  li    $a0, 4
/* 0041DCCC 8FA50034 */  lw    $a1, 0x34($sp)
/* 0041DCD0 0320F809 */  jalr  $t9
/* 0041DCD4 00000000 */   nop   
/* 0041DCD8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041DCDC 8FA4003C */  lw    $a0, 0x3c($sp)
/* 0041DCE0 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 0041DCE4 0320F809 */  jalr  $t9
/* 0041DCE8 00000000 */   nop   
/* 0041DCEC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041DCF0 93A60053 */  lbu   $a2, 0x53($sp)
/* 0041DCF4 24040054 */  li    $a0, 84
/* 0041DCF8 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041DCFC 8FA50028 */  lw    $a1, 0x28($sp)
/* 0041DD00 93A70033 */  lbu   $a3, 0x33($sp)
/* 0041DD04 0320F809 */  jalr  $t9
/* 0041DD08 24C60001 */   addiu $a2, $a2, 1
/* 0041DD0C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041DD10 240400DC */  li    $a0, 220
/* 0041DD14 93A50043 */  lbu   $a1, 0x43($sp)
/* 0041DD18 8F998224 */  lw    $t9, %call16(emit_rll)($gp)
/* 0041DD1C 8FA60038 */  lw    $a2, 0x38($sp)
/* 0041DD20 0320F809 */  jalr  $t9
/* 0041DD24 00000000 */   nop   
/* 0041DD28 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041DD2C 240400DB */  li    $a0, 219
/* 0041DD30 93A50042 */  lbu   $a1, 0x42($sp)
/* 0041DD34 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 0041DD38 93A60033 */  lbu   $a2, 0x33($sp)
/* 0041DD3C 0320F809 */  jalr  $t9
/* 0041DD40 00000000 */   nop   
/* 0041DD44 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041DD48 2404004F */  li    $a0, 79
/* 0041DD4C 93A50041 */  lbu   $a1, 0x41($sp)
/* 0041DD50 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041DD54 93A60053 */  lbu   $a2, 0x53($sp)
/* 0041DD58 93A70042 */  lbu   $a3, 0x42($sp)
/* 0041DD5C 0320F809 */  jalr  $t9
/* 0041DD60 00000000 */   nop   
/* 0041DD64 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041DD68 8FA60028 */  lw    $a2, 0x28($sp)
/* 0041DD6C 24040040 */  li    $a0, 64
/* 0041DD70 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041DD74 93A70041 */  lbu   $a3, 0x41($sp)
/* 0041DD78 00C02825 */  move  $a1, $a2
/* 0041DD7C 0320F809 */  jalr  $t9
/* 0041DD80 00000000 */   nop   
/* 0041DD84 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041DD88 8FA40038 */  lw    $a0, 0x38($sp)
/* 0041DD8C 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 0041DD90 0320F809 */  jalr  $t9
/* 0041DD94 00000000 */   nop   
/* 0041DD98 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041DD9C 97A4004A */  lhu   $a0, 0x4a($sp)
/* 0041DDA0 93A5004F */  lbu   $a1, 0x4f($sp)
/* 0041DDA4 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041DDA8 93A60053 */  lbu   $a2, 0x53($sp)
/* 0041DDAC 93A70033 */  lbu   $a3, 0x33($sp)
/* 0041DDB0 0320F809 */  jalr  $t9
/* 0041DDB4 00000000 */   nop   
/* 0041DDB8 8FBC0020 */  lw    $gp, 0x20($sp)
.L0041DDBC:
/* 0041DDBC 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 0041DDC0 8FA40034 */  lw    $a0, 0x34($sp)
/* 0041DDC4 0320F809 */  jalr  $t9
/* 0041DDC8 00000000 */   nop   
/* 0041DDCC 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0041DDD0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041DDD4 27BD0048 */  addiu $sp, $sp, 0x48
/* 0041DDD8 03E00008 */  jr    $ra
/* 0041DDDC 00000000 */   nop   

    .type func_0041DDE0, @function
func_0041DDE0:
    # 0041E468 dw_emit_rrr
/* 0041DDE0 3C1C0FC0 */  .cpload $t9
/* 0041DDE4 279C1C70 */  
/* 0041DDE8 0399E021 */  
/* 0041DDEC 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0041DDF0 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 0041DDF4 AFB0001C */  sw    $s0, 0x1c($sp)
/* 0041DDF8 30B000FF */  andi  $s0, $a1, 0xff
/* 0041DDFC AFBF0024 */  sw    $ra, 0x24($sp)
/* 0041DE00 AFA40028 */  sw    $a0, 0x28($sp)
/* 0041DE04 AFA5002C */  sw    $a1, 0x2c($sp)
/* 0041DE08 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0041DE0C AFA60030 */  sw    $a2, 0x30($sp)
/* 0041DE10 AFA70034 */  sw    $a3, 0x34($sp)
/* 0041DE14 24050006 */  li    $a1, 6
/* 0041DE18 0320F809 */  jalr  $t9
/* 0041DE1C 24040020 */   li    $a0, 32
/* 0041DE20 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041DE24 24040059 */  li    $a0, 89
/* 0041DE28 24050001 */  li    $a1, 1
/* 0041DE2C 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041DE30 93A60033 */  lbu   $a2, 0x33($sp)
/* 0041DE34 93A70037 */  lbu   $a3, 0x37($sp)
/* 0041DE38 0320F809 */  jalr  $t9
/* 0041DE3C 00000000 */   nop   
/* 0041DE40 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041DE44 93A60033 */  lbu   $a2, 0x33($sp)
/* 0041DE48 93A70037 */  lbu   $a3, 0x37($sp)
/* 0041DE4C 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041DE50 24040059 */  li    $a0, 89
/* 0041DE54 02002825 */  move  $a1, $s0
/* 0041DE58 24C60001 */  addiu $a2, $a2, 1
/* 0041DE5C 0320F809 */  jalr  $t9
/* 0041DE60 24E70001 */   addiu $a3, $a3, 1
/* 0041DE64 97AE002A */  lhu   $t6, 0x2a($sp)
/* 0041DE68 24010047 */  li    $at, 71
/* 0041DE6C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041DE70 15C10011 */  bne   $t6, $at, .L0041DEB8
/* 0041DE74 24040040 */   li    $a0, 64
/* 0041DE78 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041DE7C 24040040 */  li    $a0, 64
/* 0041DE80 02002825 */  move  $a1, $s0
/* 0041DE84 02003025 */  move  $a2, $s0
/* 0041DE88 0320F809 */  jalr  $t9
/* 0041DE8C 24070001 */   li    $a3, 1
/* 0041DE90 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041DE94 240400D6 */  li    $a0, 214
/* 0041DE98 02002825 */  move  $a1, $s0
/* 0041DE9C 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041DEA0 02003025 */  move  $a2, $s0
/* 0041DEA4 24070001 */  li    $a3, 1
/* 0041DEA8 0320F809 */  jalr  $t9
/* 0041DEAC AFA00010 */   sw    $zero, 0x10($sp)
/* 0041DEB0 1000000F */  b     .L0041DEF0
/* 0041DEB4 8FBC0020 */   lw    $gp, 0x20($sp)
.L0041DEB8:
/* 0041DEB8 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041DEBC 02002825 */  move  $a1, $s0
/* 0041DEC0 02003025 */  move  $a2, $s0
/* 0041DEC4 0320F809 */  jalr  $t9
/* 0041DEC8 24070001 */   li    $a3, 1
/* 0041DECC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041DED0 24040051 */  li    $a0, 81
/* 0041DED4 02002825 */  move  $a1, $s0
/* 0041DED8 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041DEDC 00003025 */  move  $a2, $zero
/* 0041DEE0 02003825 */  move  $a3, $s0
/* 0041DEE4 0320F809 */  jalr  $t9
/* 0041DEE8 00000000 */   nop   
/* 0041DEEC 8FBC0020 */  lw    $gp, 0x20($sp)
.L0041DEF0:
/* 0041DEF0 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 0041DEF4 24040020 */  li    $a0, 32
/* 0041DEF8 24050005 */  li    $a1, 5
/* 0041DEFC 0320F809 */  jalr  $t9
/* 0041DF00 00000000 */   nop   
/* 0041DF04 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0041DF08 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041DF0C 8FB0001C */  lw    $s0, 0x1c($sp)
/* 0041DF10 03E00008 */  jr    $ra
/* 0041DF14 27BD0028 */   addiu $sp, $sp, 0x28

    .type func_0041DF18, @function
func_0041DF18:
    # 0041E468 dw_emit_rrr
/* 0041DF18 3C1C0FC0 */  .cpload $t9
/* 0041DF1C 279C1B38 */  
/* 0041DF20 0399E021 */  
/* 0041DF24 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 0041DF28 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 0041DF2C AFBF0024 */  sw    $ra, 0x24($sp)
/* 0041DF30 AFB1001C */  sw    $s1, 0x1c($sp)
/* 0041DF34 AFB00018 */  sw    $s0, 0x18($sp)
/* 0041DF38 30D000FF */  andi  $s0, $a2, 0xff
/* 0041DF3C 30F100FF */  andi  $s1, $a3, 0xff
/* 0041DF40 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0041DF44 AFA40038 */  sw    $a0, 0x38($sp)
/* 0041DF48 AFA5003C */  sw    $a1, 0x3c($sp)
/* 0041DF4C AFA60040 */  sw    $a2, 0x40($sp)
/* 0041DF50 0320F809 */  jalr  $t9
/* 0041DF54 AFA70044 */   sw    $a3, 0x44($sp)
/* 0041DF58 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041DF5C AFA20030 */  sw    $v0, 0x30($sp)
/* 0041DF60 93A5003F */  lbu   $a1, 0x3f($sp)
/* 0041DF64 8F8E898C */  lw     $t6, %got(lsb_first)($gp)
/* 0041DF68 26060001 */  addiu $a2, $s0, 1
/* 0041DF6C 26270001 */  addiu $a3, $s1, 1
/* 0041DF70 91CE0000 */  lbu   $t6, ($t6)
/* 0041DF74 2404004B */  li    $a0, 75
/* 0041DF78 11C00018 */  beqz  $t6, .L0041DFDC
/* 0041DF7C 00000000 */   nop   
/* 0041DF80 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041DF84 2404004B */  li    $a0, 75
/* 0041DF88 AFA6002C */  sw    $a2, 0x2c($sp)
/* 0041DF8C 0320F809 */  jalr  $t9
/* 0041DF90 AFA70028 */   sw    $a3, 0x28($sp)
/* 0041DF94 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041DF98 2404001A */  li    $a0, 26
/* 0041DF9C 8FA5002C */  lw    $a1, 0x2c($sp)
/* 0041DFA0 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041DFA4 8FA60028 */  lw    $a2, 0x28($sp)
/* 0041DFA8 8FA70030 */  lw    $a3, 0x30($sp)
/* 0041DFAC 0320F809 */  jalr  $t9
/* 0041DFB0 00000000 */   nop   
/* 0041DFB4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041DFB8 97A4003A */  lhu   $a0, 0x3a($sp)
/* 0041DFBC 93A5003F */  lbu   $a1, 0x3f($sp)
/* 0041DFC0 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041DFC4 02003025 */  move  $a2, $s0
/* 0041DFC8 02203825 */  move  $a3, $s1
/* 0041DFCC 0320F809 */  jalr  $t9
/* 0041DFD0 00000000 */   nop   
/* 0041DFD4 10000017 */  b     .L0041E034
/* 0041DFD8 8FBC0020 */   lw    $gp, 0x20($sp)
.L0041DFDC:
/* 0041DFDC 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041DFE0 93A5003F */  lbu   $a1, 0x3f($sp)
/* 0041DFE4 02003025 */  move  $a2, $s0
/* 0041DFE8 0320F809 */  jalr  $t9
/* 0041DFEC 02203825 */   move  $a3, $s1
/* 0041DFF0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041DFF4 2404001A */  li    $a0, 26
/* 0041DFF8 02002825 */  move  $a1, $s0
/* 0041DFFC 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041E000 02203025 */  move  $a2, $s1
/* 0041E004 8FA70030 */  lw    $a3, 0x30($sp)
/* 0041E008 0320F809 */  jalr  $t9
/* 0041E00C 00000000 */   nop   
/* 0041E010 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041E014 97A4003A */  lhu   $a0, 0x3a($sp)
/* 0041E018 93A5003F */  lbu   $a1, 0x3f($sp)
/* 0041E01C 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041E020 26060001 */  addiu $a2, $s0, 1
/* 0041E024 26270001 */  addiu $a3, $s1, 1
/* 0041E028 0320F809 */  jalr  $t9
/* 0041E02C 00000000 */   nop   
/* 0041E030 8FBC0020 */  lw    $gp, 0x20($sp)
.L0041E034:
/* 0041E034 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 0041E038 8FA40030 */  lw    $a0, 0x30($sp)
/* 0041E03C 0320F809 */  jalr  $t9
/* 0041E040 00000000 */   nop   
/* 0041E044 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0041E048 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041E04C 8FB00018 */  lw    $s0, 0x18($sp)
/* 0041E050 8FB1001C */  lw    $s1, 0x1c($sp)
/* 0041E054 03E00008 */  jr    $ra
/* 0041E058 27BD0038 */   addiu $sp, $sp, 0x38

    .type func_0041E05C, @function
func_0041E05C:
    # 0041E468 dw_emit_rrr
/* 0041E05C 3C1C0FC0 */  .cpload $t9
/* 0041E060 279C19F4 */  
/* 0041E064 0399E021 */  
/* 0041E068 27BDFFC0 */  addiu $sp, $sp, -0x40
/* 0041E06C AFB1001C */  sw    $s1, 0x1c($sp)
/* 0041E070 AFB00018 */  sw    $s0, 0x18($sp)
/* 0041E074 24010048 */  li    $at, 72
/* 0041E078 30D000FF */  andi  $s0, $a2, 0xff
/* 0041E07C 30F100FF */  andi  $s1, $a3, 0xff
/* 0041E080 AFBF0024 */  sw    $ra, 0x24($sp)
/* 0041E084 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0041E088 AFA40040 */  sw    $a0, 0x40($sp)
/* 0041E08C AFA50044 */  sw    $a1, 0x44($sp)
/* 0041E090 AFA60048 */  sw    $a2, 0x48($sp)
/* 0041E094 14810004 */  bne   $a0, $at, .L0041E0A8
/* 0041E098 AFA7004C */   sw    $a3, 0x4c($sp)
/* 0041E09C 240E0049 */  li    $t6, 73
/* 0041E0A0 10000003 */  b     .L0041E0B0
/* 0041E0A4 A7AE0036 */   sh    $t6, 0x36($sp)
.L0041E0A8:
/* 0041E0A8 240F004B */  li    $t7, 75
/* 0041E0AC A7AF0036 */  sh    $t7, 0x36($sp)
.L0041E0B0:
/* 0041E0B0 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 0041E0B4 0320F809 */  jalr  $t9
/* 0041E0B8 00000000 */   nop   
/* 0041E0BC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041E0C0 AFA20038 */  sw    $v0, 0x38($sp)
/* 0041E0C4 93A50047 */  lbu   $a1, 0x47($sp)
/* 0041E0C8 8F98898C */  lw     $t8, %got(lsb_first)($gp)
/* 0041E0CC 26060001 */  addiu $a2, $s0, 1
/* 0041E0D0 26270001 */  addiu $a3, $s1, 1
/* 0041E0D4 93180000 */  lbu   $t8, ($t8)
/* 0041E0D8 2404004A */  li    $a0, 74
/* 0041E0DC 13000018 */  beqz  $t8, .L0041E140
/* 0041E0E0 00000000 */   nop   
/* 0041E0E4 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041E0E8 2404004A */  li    $a0, 74
/* 0041E0EC AFA60030 */  sw    $a2, 0x30($sp)
/* 0041E0F0 0320F809 */  jalr  $t9
/* 0041E0F4 AFA7002C */   sw    $a3, 0x2c($sp)
/* 0041E0F8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041E0FC 2404001A */  li    $a0, 26
/* 0041E100 8FA50030 */  lw    $a1, 0x30($sp)
/* 0041E104 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041E108 8FA6002C */  lw    $a2, 0x2c($sp)
/* 0041E10C 8FA70038 */  lw    $a3, 0x38($sp)
/* 0041E110 0320F809 */  jalr  $t9
/* 0041E114 00000000 */   nop   
/* 0041E118 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041E11C 97A40036 */  lhu   $a0, 0x36($sp)
/* 0041E120 93A50047 */  lbu   $a1, 0x47($sp)
/* 0041E124 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041E128 02003025 */  move  $a2, $s0
/* 0041E12C 02203825 */  move  $a3, $s1
/* 0041E130 0320F809 */  jalr  $t9
/* 0041E134 00000000 */   nop   
/* 0041E138 10000017 */  b     .L0041E198
/* 0041E13C 8FBC0020 */   lw    $gp, 0x20($sp)
.L0041E140:
/* 0041E140 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041E144 93A50047 */  lbu   $a1, 0x47($sp)
/* 0041E148 02003025 */  move  $a2, $s0
/* 0041E14C 0320F809 */  jalr  $t9
/* 0041E150 02203825 */   move  $a3, $s1
/* 0041E154 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041E158 2404001A */  li    $a0, 26
/* 0041E15C 02002825 */  move  $a1, $s0
/* 0041E160 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041E164 02203025 */  move  $a2, $s1
/* 0041E168 8FA70038 */  lw    $a3, 0x38($sp)
/* 0041E16C 0320F809 */  jalr  $t9
/* 0041E170 00000000 */   nop   
/* 0041E174 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041E178 97A40036 */  lhu   $a0, 0x36($sp)
/* 0041E17C 93A50047 */  lbu   $a1, 0x47($sp)
/* 0041E180 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041E184 26060001 */  addiu $a2, $s0, 1
/* 0041E188 26270001 */  addiu $a3, $s1, 1
/* 0041E18C 0320F809 */  jalr  $t9
/* 0041E190 00000000 */   nop   
/* 0041E194 8FBC0020 */  lw    $gp, 0x20($sp)
.L0041E198:
/* 0041E198 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 0041E19C 8FA40038 */  lw    $a0, 0x38($sp)
/* 0041E1A0 0320F809 */  jalr  $t9
/* 0041E1A4 00000000 */   nop   
/* 0041E1A8 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0041E1AC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041E1B0 8FB00018 */  lw    $s0, 0x18($sp)
/* 0041E1B4 8FB1001C */  lw    $s1, 0x1c($sp)
/* 0041E1B8 03E00008 */  jr    $ra
/* 0041E1BC 27BD0040 */   addiu $sp, $sp, 0x40

    .type func_0041E1C0, @function
func_0041E1C0:
    # 0041E468 dw_emit_rrr
/* 0041E1C0 3C1C0FC0 */  .cpload $t9
/* 0041E1C4 279C1890 */  
/* 0041E1C8 0399E021 */  
/* 0041E1CC 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 0041E1D0 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 0041E1D4 AFBF0024 */  sw    $ra, 0x24($sp)
/* 0041E1D8 AFB1001C */  sw    $s1, 0x1c($sp)
/* 0041E1DC AFB00018 */  sw    $s0, 0x18($sp)
/* 0041E1E0 30D000FF */  andi  $s0, $a2, 0xff
/* 0041E1E4 30F100FF */  andi  $s1, $a3, 0xff
/* 0041E1E8 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0041E1EC AFA40038 */  sw    $a0, 0x38($sp)
/* 0041E1F0 AFA5003C */  sw    $a1, 0x3c($sp)
/* 0041E1F4 AFA60040 */  sw    $a2, 0x40($sp)
/* 0041E1F8 0320F809 */  jalr  $t9
/* 0041E1FC AFA70044 */   sw    $a3, 0x44($sp)
/* 0041E200 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041E204 AFA20030 */  sw    $v0, 0x30($sp)
/* 0041E208 93A5003F */  lbu   $a1, 0x3f($sp)
/* 0041E20C 8F8E898C */  lw     $t6, %got(lsb_first)($gp)
/* 0041E210 26060001 */  addiu $a2, $s0, 1
/* 0041E214 26270001 */  addiu $a3, $s1, 1
/* 0041E218 91CE0000 */  lbu   $t6, ($t6)
/* 0041E21C 24040051 */  li    $a0, 81
/* 0041E220 11C00018 */  beqz  $t6, .L0041E284
/* 0041E224 00000000 */   nop   
/* 0041E228 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041E22C 24040051 */  li    $a0, 81
/* 0041E230 AFA6002C */  sw    $a2, 0x2c($sp)
/* 0041E234 0320F809 */  jalr  $t9
/* 0041E238 AFA70028 */   sw    $a3, 0x28($sp)
/* 0041E23C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041E240 2404001A */  li    $a0, 26
/* 0041E244 8FA5002C */  lw    $a1, 0x2c($sp)
/* 0041E248 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041E24C 8FA60028 */  lw    $a2, 0x28($sp)
/* 0041E250 8FA70030 */  lw    $a3, 0x30($sp)
/* 0041E254 0320F809 */  jalr  $t9
/* 0041E258 00000000 */   nop   
/* 0041E25C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041E260 97A4003A */  lhu   $a0, 0x3a($sp)
/* 0041E264 93A5003F */  lbu   $a1, 0x3f($sp)
/* 0041E268 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041E26C 02003025 */  move  $a2, $s0
/* 0041E270 02203825 */  move  $a3, $s1
/* 0041E274 0320F809 */  jalr  $t9
/* 0041E278 00000000 */   nop   
/* 0041E27C 10000017 */  b     .L0041E2DC
/* 0041E280 8FBC0020 */   lw    $gp, 0x20($sp)
.L0041E284:
/* 0041E284 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041E288 93A5003F */  lbu   $a1, 0x3f($sp)
/* 0041E28C 02003025 */  move  $a2, $s0
/* 0041E290 0320F809 */  jalr  $t9
/* 0041E294 02203825 */   move  $a3, $s1
/* 0041E298 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041E29C 2404001A */  li    $a0, 26
/* 0041E2A0 02002825 */  move  $a1, $s0
/* 0041E2A4 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041E2A8 02203025 */  move  $a2, $s1
/* 0041E2AC 8FA70030 */  lw    $a3, 0x30($sp)
/* 0041E2B0 0320F809 */  jalr  $t9
/* 0041E2B4 00000000 */   nop   
/* 0041E2B8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041E2BC 97A4003A */  lhu   $a0, 0x3a($sp)
/* 0041E2C0 93A5003F */  lbu   $a1, 0x3f($sp)
/* 0041E2C4 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041E2C8 26060001 */  addiu $a2, $s0, 1
/* 0041E2CC 26270001 */  addiu $a3, $s1, 1
/* 0041E2D0 0320F809 */  jalr  $t9
/* 0041E2D4 00000000 */   nop   
/* 0041E2D8 8FBC0020 */  lw    $gp, 0x20($sp)
.L0041E2DC:
/* 0041E2DC 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 0041E2E0 8FA40030 */  lw    $a0, 0x30($sp)
/* 0041E2E4 0320F809 */  jalr  $t9
/* 0041E2E8 00000000 */   nop   
/* 0041E2EC 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0041E2F0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041E2F4 8FB00018 */  lw    $s0, 0x18($sp)
/* 0041E2F8 8FB1001C */  lw    $s1, 0x1c($sp)
/* 0041E2FC 03E00008 */  jr    $ra
/* 0041E300 27BD0038 */   addiu $sp, $sp, 0x38

    .type func_0041E304, @function
func_0041E304:
    # 0041E468 dw_emit_rrr
/* 0041E304 3C1C0FC0 */  .cpload $t9
/* 0041E308 279C174C */  
/* 0041E30C 0399E021 */  
/* 0041E310 27BDFFC0 */  addiu $sp, $sp, -0x40
/* 0041E314 AFB1001C */  sw    $s1, 0x1c($sp)
/* 0041E318 AFB00018 */  sw    $s0, 0x18($sp)
/* 0041E31C 24010050 */  li    $at, 80
/* 0041E320 30D000FF */  andi  $s0, $a2, 0xff
/* 0041E324 30F100FF */  andi  $s1, $a3, 0xff
/* 0041E328 AFBF0024 */  sw    $ra, 0x24($sp)
/* 0041E32C AFBC0020 */  sw    $gp, 0x20($sp)
/* 0041E330 AFA40040 */  sw    $a0, 0x40($sp)
/* 0041E334 AFA50044 */  sw    $a1, 0x44($sp)
/* 0041E338 AFA60048 */  sw    $a2, 0x48($sp)
/* 0041E33C 14810004 */  bne   $a0, $at, .L0041E350
/* 0041E340 AFA7004C */   sw    $a3, 0x4c($sp)
/* 0041E344 240E0051 */  li    $t6, 81
/* 0041E348 10000003 */  b     .L0041E358
/* 0041E34C A7AE0036 */   sh    $t6, 0x36($sp)
.L0041E350:
/* 0041E350 240F004E */  li    $t7, 78
/* 0041E354 A7AF0036 */  sh    $t7, 0x36($sp)
.L0041E358:
/* 0041E358 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 0041E35C 0320F809 */  jalr  $t9
/* 0041E360 00000000 */   nop   
/* 0041E364 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041E368 AFA20038 */  sw    $v0, 0x38($sp)
/* 0041E36C 93A50047 */  lbu   $a1, 0x47($sp)
/* 0041E370 8F98898C */  lw     $t8, %got(lsb_first)($gp)
/* 0041E374 26060001 */  addiu $a2, $s0, 1
/* 0041E378 26270001 */  addiu $a3, $s1, 1
/* 0041E37C 93180000 */  lbu   $t8, ($t8)
/* 0041E380 24040050 */  li    $a0, 80
/* 0041E384 13000018 */  beqz  $t8, .L0041E3E8
/* 0041E388 00000000 */   nop   
/* 0041E38C 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041E390 24040050 */  li    $a0, 80
/* 0041E394 AFA60030 */  sw    $a2, 0x30($sp)
/* 0041E398 0320F809 */  jalr  $t9
/* 0041E39C AFA7002C */   sw    $a3, 0x2c($sp)
/* 0041E3A0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041E3A4 2404001A */  li    $a0, 26
/* 0041E3A8 8FA50030 */  lw    $a1, 0x30($sp)
/* 0041E3AC 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041E3B0 8FA6002C */  lw    $a2, 0x2c($sp)
/* 0041E3B4 8FA70038 */  lw    $a3, 0x38($sp)
/* 0041E3B8 0320F809 */  jalr  $t9
/* 0041E3BC 00000000 */   nop   
/* 0041E3C0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041E3C4 97A40036 */  lhu   $a0, 0x36($sp)
/* 0041E3C8 93A50047 */  lbu   $a1, 0x47($sp)
/* 0041E3CC 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041E3D0 02003025 */  move  $a2, $s0
/* 0041E3D4 02203825 */  move  $a3, $s1
/* 0041E3D8 0320F809 */  jalr  $t9
/* 0041E3DC 00000000 */   nop   
/* 0041E3E0 10000017 */  b     .L0041E440
/* 0041E3E4 8FBC0020 */   lw    $gp, 0x20($sp)
.L0041E3E8:
/* 0041E3E8 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041E3EC 93A50047 */  lbu   $a1, 0x47($sp)
/* 0041E3F0 02003025 */  move  $a2, $s0
/* 0041E3F4 0320F809 */  jalr  $t9
/* 0041E3F8 02203825 */   move  $a3, $s1
/* 0041E3FC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041E400 2404001A */  li    $a0, 26
/* 0041E404 02002825 */  move  $a1, $s0
/* 0041E408 8F998220 */  lw    $t9, %call16(emit_rrll)($gp)
/* 0041E40C 02203025 */  move  $a2, $s1
/* 0041E410 8FA70038 */  lw    $a3, 0x38($sp)
/* 0041E414 0320F809 */  jalr  $t9
/* 0041E418 00000000 */   nop   
/* 0041E41C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041E420 97A40036 */  lhu   $a0, 0x36($sp)
/* 0041E424 93A50047 */  lbu   $a1, 0x47($sp)
/* 0041E428 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041E42C 26060001 */  addiu $a2, $s0, 1
/* 0041E430 26270001 */  addiu $a3, $s1, 1
/* 0041E434 0320F809 */  jalr  $t9
/* 0041E438 00000000 */   nop   
/* 0041E43C 8FBC0020 */  lw    $gp, 0x20($sp)
.L0041E440:
/* 0041E440 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 0041E444 8FA40038 */  lw    $a0, 0x38($sp)
/* 0041E448 0320F809 */  jalr  $t9
/* 0041E44C 00000000 */   nop   
/* 0041E450 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0041E454 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041E458 8FB00018 */  lw    $s0, 0x18($sp)
/* 0041E45C 8FB1001C */  lw    $s1, 0x1c($sp)
/* 0041E460 03E00008 */  jr    $ra
/* 0041E464 27BD0040 */   addiu $sp, $sp, 0x40

glabel dw_emit_rrr
    .ent dw_emit_rrr
    # 00428A9C eval2
/* 0041E468 3C1C0FC0 */  .cpload $t9
/* 0041E46C 279C15E8 */  
/* 0041E470 0399E021 */  
/* 0041E474 8F8E89D8 */  lw     $t6, %got(opcode_arch)($gp)
/* 0041E478 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0041E47C AFB00014 */  sw    $s0, 0x14($sp)
/* 0041E480 91CE0000 */  lbu   $t6, ($t6)
/* 0041E484 3090FFFF */  andi  $s0, $a0, 0xffff
/* 0041E488 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0041E48C AFBC0018 */  sw    $gp, 0x18($sp)
/* 0041E490 AFA40028 */  sw    $a0, 0x28($sp)
/* 0041E494 AFA5002C */  sw    $a1, 0x2c($sp)
/* 0041E498 AFA60030 */  sw    $a2, 0x30($sp)
/* 0041E49C 15C000CD */  bnez  $t6, .L0041E7D4
/* 0041E4A0 AFA70034 */   sw    $a3, 0x34($sp)
/* 0041E4A4 8FAF0038 */  lw    $t7, 0x38($sp)
/* 0041E4A8 3C010501 */  lui   $at, 0x501
/* 0041E4AC 91F80021 */  lbu   $t8, 0x21($t7)
/* 0041E4B0 3319001F */  andi  $t9, $t8, 0x1f
/* 0041E4B4 2F280020 */  sltiu $t0, $t9, 0x20
/* 0041E4B8 00084823 */  negu  $t1, $t0
/* 0041E4BC 01215024 */  and   $t2, $t1, $at
/* 0041E4C0 032A5804 */  sllv  $t3, $t2, $t9
/* 0041E4C4 056100C3 */  bgez  $t3, .L0041E7D4
/* 0041E4C8 2E010041 */   sltiu $at, $s0, 0x41
/* 0041E4CC 142000A5 */  bnez  $at, .L0041E764
/* 0041E4D0 2E01005A */   sltiu $at, $s0, 0x5a
/* 0041E4D4 142000B5 */  bnez  $at, .L0041E7AC
/* 0041E4D8 260AFFB9 */   addiu $t2, $s0, -0x47
/* 0041E4DC 260CFF12 */  addiu $t4, $s0, -0xee
/* 0041E4E0 2D810002 */  sltiu $at, $t4, 2
/* 0041E4E4 10200098 */  beqz  $at, .L0041E748
/* 0041E4E8 00000000 */   nop   
/* 0041E4EC 8F818038 */  lw    $at, %got(jtbl_100097BC)($gp)
/* 0041E4F0 000C6080 */  sll   $t4, $t4, 2
/* 0041E4F4 002C0821 */  addu  $at, $at, $t4
/* 0041E4F8 8C2C97BC */  lw    $t4, %lo(jtbl_100097BC)($at)
/* 0041E4FC 019C6021 */  addu  $t4, $t4, $gp
/* 0041E500 01800008 */  jr    $t4
/* 0041E504 00000000 */   nop   
.L0041E508:
/* 0041E508 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041E50C 02002025 */  move  $a0, $s0
/* 0041E510 93A5002F */  lbu   $a1, 0x2f($sp)
/* 0041E514 A3A60033 */  sb    $a2, 0x33($sp)
/* 0041E518 0320F809 */  jalr  $t9
/* 0041E51C A3A70037 */   sb    $a3, 0x37($sp)
/* 0041E520 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E524 93A5002F */  lbu   $a1, 0x2f($sp)
/* 0041E528 93A60033 */  lbu   $a2, 0x33($sp)
/* 0041E52C 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041E530 93A70037 */  lbu   $a3, 0x37($sp)
/* 0041E534 02002025 */  move  $a0, $s0
/* 0041E538 24A50001 */  addiu $a1, $a1, 1
/* 0041E53C 24C60001 */  addiu $a2, $a2, 1
/* 0041E540 0320F809 */  jalr  $t9
/* 0041E544 24E70001 */   addiu $a3, $a3, 1
/* 0041E548 100000A8 */  b     .L0041E7EC
/* 0041E54C 8FBC0018 */   lw    $gp, 0x18($sp)
.L0041E550:
/* 0041E550 8F99801C */  lw    $t9, %got(func_0041D1E8)($gp)
/* 0041E554 02002025 */  move  $a0, $s0
/* 0041E558 93A5002F */  lbu   $a1, 0x2f($sp)
/* 0041E55C 2739D1E8 */  addiu $t9, %lo(func_0041D1E8) # addiu $t9, $t9, -0x2e18
/* 0041E560 0320F809 */  jalr  $t9
/* 0041E564 27A20028 */   addiu $v0, $sp, 0x28
/* 0041E568 100000A0 */  b     .L0041E7EC
/* 0041E56C 8FBC0018 */   lw    $gp, 0x18($sp)
.L0041E570:
/* 0041E570 8F99801C */  lw    $t9, %got(func_0041D39C)($gp)
/* 0041E574 02002025 */  move  $a0, $s0
/* 0041E578 93A5002F */  lbu   $a1, 0x2f($sp)
/* 0041E57C 2739D39C */  addiu $t9, %lo(func_0041D39C) # addiu $t9, $t9, -0x2c64
/* 0041E580 0320F809 */  jalr  $t9
/* 0041E584 27A20028 */   addiu $v0, $sp, 0x28
/* 0041E588 10000098 */  b     .L0041E7EC
/* 0041E58C 8FBC0018 */   lw    $gp, 0x18($sp)
.L0041E590:
/* 0041E590 8F99801C */  lw    $t9, %got(func_0041D534)($gp)
/* 0041E594 02002025 */  move  $a0, $s0
/* 0041E598 93A5002F */  lbu   $a1, 0x2f($sp)
/* 0041E59C 2739D534 */  addiu $t9, %lo(func_0041D534) # addiu $t9, $t9, -0x2acc
/* 0041E5A0 0320F809 */  jalr  $t9
/* 0041E5A4 27A20028 */   addiu $v0, $sp, 0x28
/* 0041E5A8 10000090 */  b     .L0041E7EC
/* 0041E5AC 8FBC0018 */   lw    $gp, 0x18($sp)
.L0041E5B0:
/* 0041E5B0 8F99801C */  lw    $t9, %got(func_0041D958)($gp)
/* 0041E5B4 02002025 */  move  $a0, $s0
/* 0041E5B8 93A5002F */  lbu   $a1, 0x2f($sp)
/* 0041E5BC 2739D958 */  addiu $t9, %lo(func_0041D958) # addiu $t9, $t9, -0x26a8
/* 0041E5C0 0320F809 */  jalr  $t9
/* 0041E5C4 27A20028 */   addiu $v0, $sp, 0x28
/* 0041E5C8 10000088 */  b     .L0041E7EC
/* 0041E5CC 8FBC0018 */   lw    $gp, 0x18($sp)
.L0041E5D0:
/* 0041E5D0 8F99801C */  lw    $t9, %got(func_0041DDE0)($gp)
/* 0041E5D4 02002025 */  move  $a0, $s0
/* 0041E5D8 93A5002F */  lbu   $a1, 0x2f($sp)
/* 0041E5DC 2739DDE0 */  addiu $t9, %lo(func_0041DDE0) # addiu $t9, $t9, -0x2220
/* 0041E5E0 0320F809 */  jalr  $t9
/* 0041E5E4 27A20028 */   addiu $v0, $sp, 0x28
/* 0041E5E8 10000080 */  b     .L0041E7EC
/* 0041E5EC 8FBC0018 */   lw    $gp, 0x18($sp)
.L0041E5F0:
/* 0041E5F0 93AD002F */  lbu   $t5, 0x2f($sp)
/* 0041E5F4 240E0001 */  li    $t6, 1
/* 0041E5F8 24040020 */  li    $a0, 32
/* 0041E5FC 11A60003 */  beq   $t5, $a2, .L0041E60C
/* 0041E600 24050006 */   li    $a1, 6
/* 0041E604 15A7000A */  bne   $t5, $a3, .L0041E630
/* 0041E608 93AF002F */   lbu   $t7, 0x2f($sp)
.L0041E60C:
/* 0041E60C 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 0041E610 A3AE0027 */  sb    $t6, 0x27($sp)
/* 0041E614 A3A60033 */  sb    $a2, 0x33($sp)
/* 0041E618 0320F809 */  jalr  $t9
/* 0041E61C A3A70037 */   sb    $a3, 0x37($sp)
/* 0041E620 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E624 93A70037 */  lbu   $a3, 0x37($sp)
/* 0041E628 10000002 */  b     .L0041E634
/* 0041E62C 93A60033 */   lbu   $a2, 0x33($sp)
.L0041E630:
/* 0041E630 A3AF0027 */  sb    $t7, 0x27($sp)
.L0041E634:
/* 0041E634 3202FFFF */  andi  $v0, $s0, 0xffff
/* 0041E638 2458FFB8 */  addiu $t8, $v0, -0x48
/* 0041E63C 2F01000A */  sltiu $at, $t8, 0xa
/* 0041E640 10200028 */  beqz  $at, .L0041E6E4
/* 0041E644 00000000 */   nop   
/* 0041E648 8F818038 */  lw    $at, %got(jtbl_1000973C)($gp)
/* 0041E64C 0018C080 */  sll   $t8, $t8, 2
/* 0041E650 00380821 */  addu  $at, $at, $t8
/* 0041E654 8C38973C */  lw    $t8, %lo(jtbl_1000973C)($at)
/* 0041E658 031CC021 */  addu  $t8, $t8, $gp
/* 0041E65C 03000008 */  jr    $t8
/* 0041E660 00000000 */   nop   
.L0041E664:
/* 0041E664 8F99801C */  lw    $t9, %got(func_0041DF18)($gp)
/* 0041E668 02002025 */  move  $a0, $s0
/* 0041E66C 93A50027 */  lbu   $a1, 0x27($sp)
/* 0041E670 2739DF18 */  addiu $t9, %lo(func_0041DF18) # addiu $t9, $t9, -0x20e8
/* 0041E674 0320F809 */  jalr  $t9
/* 0041E678 27A20028 */   addiu $v0, $sp, 0x28
/* 0041E67C 10000021 */  b     .L0041E704
/* 0041E680 8FBC0018 */   lw    $gp, 0x18($sp)
.L0041E684:
/* 0041E684 8F99801C */  lw    $t9, %got(func_0041E05C)($gp)
/* 0041E688 02002025 */  move  $a0, $s0
/* 0041E68C 93A50027 */  lbu   $a1, 0x27($sp)
/* 0041E690 2739E05C */  addiu $t9, %lo(func_0041E05C) # addiu $t9, $t9, -0x1fa4
/* 0041E694 0320F809 */  jalr  $t9
/* 0041E698 27A20028 */   addiu $v0, $sp, 0x28
/* 0041E69C 10000019 */  b     .L0041E704
/* 0041E6A0 8FBC0018 */   lw    $gp, 0x18($sp)
.L0041E6A4:
/* 0041E6A4 8F99801C */  lw    $t9, %got(func_0041E1C0)($gp)
/* 0041E6A8 02002025 */  move  $a0, $s0
/* 0041E6AC 93A50027 */  lbu   $a1, 0x27($sp)
/* 0041E6B0 2739E1C0 */  addiu $t9, %lo(func_0041E1C0) # addiu $t9, $t9, -0x1e40
/* 0041E6B4 0320F809 */  jalr  $t9
/* 0041E6B8 27A20028 */   addiu $v0, $sp, 0x28
/* 0041E6BC 10000011 */  b     .L0041E704
/* 0041E6C0 8FBC0018 */   lw    $gp, 0x18($sp)
.L0041E6C4:
/* 0041E6C4 8F99801C */  lw    $t9, %got(func_0041E304)($gp)
/* 0041E6C8 02002025 */  move  $a0, $s0
/* 0041E6CC 93A50027 */  lbu   $a1, 0x27($sp)
/* 0041E6D0 2739E304 */  addiu $t9, %lo(func_0041E304) # addiu $t9, $t9, -0x1cfc
/* 0041E6D4 0320F809 */  jalr  $t9
/* 0041E6D8 27A20028 */   addiu $v0, $sp, 0x28
/* 0041E6DC 10000009 */  b     .L0041E704
/* 0041E6E0 8FBC0018 */   lw    $gp, 0x18($sp)
.L0041E6E4:
/* 0041E6E4 8F998808 */  lw    $t9, %call16(caseerror)($gp)
/* 0041E6E8 8F868038 */  lw    $a2, %got(RO_10009730)($gp)
/* 0041E6EC 24040001 */  li    $a0, 1
/* 0041E6F0 2405038A */  li    $a1, 906
/* 0041E6F4 24070009 */  li    $a3, 9
/* 0041E6F8 0320F809 */  jalr  $t9
/* 0041E6FC 24C69730 */   addiu $a2, %lo(RO_10009730) # addiu $a2, $a2, -0x68d0
/* 0041E700 8FBC0018 */  lw    $gp, 0x18($sp)
.L0041E704:
/* 0041E704 93A80027 */  lbu   $t0, 0x27($sp)
/* 0041E708 24010001 */  li    $at, 1
/* 0041E70C 55010038 */  bnel  $t0, $at, .L0041E7F0
/* 0041E710 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0041E714 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 0041E718 24040031 */  li    $a0, 49
/* 0041E71C 93A5002F */  lbu   $a1, 0x2f($sp)
/* 0041E720 0320F809 */  jalr  $t9
/* 0041E724 24060001 */   li    $a2, 1
/* 0041E728 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E72C 24040020 */  li    $a0, 32
/* 0041E730 24050005 */  li    $a1, 5
/* 0041E734 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 0041E738 0320F809 */  jalr  $t9
/* 0041E73C 00000000 */   nop   
/* 0041E740 1000002A */  b     .L0041E7EC
/* 0041E744 8FBC0018 */   lw    $gp, 0x18($sp)
.L0041E748:
/* 0041E748 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041E74C 02002025 */  move  $a0, $s0
/* 0041E750 93A5002F */  lbu   $a1, 0x2f($sp)
/* 0041E754 0320F809 */  jalr  $t9
/* 0041E758 00000000 */   nop   
/* 0041E75C 10000023 */  b     .L0041E7EC
/* 0041E760 8FBC0018 */   lw    $gp, 0x18($sp)
.L0041E764:
/* 0041E764 2E010004 */  sltiu $at, $s0, 4
/* 0041E768 1020000B */  beqz  $at, .L0041E798
/* 0041E76C 2609FFFF */   addiu $t1, $s0, -1
/* 0041E770 2D210003 */  sltiu $at, $t1, 3
/* 0041E774 1020FFF4 */  beqz  $at, .L0041E748
/* 0041E778 00000000 */   nop   
/* 0041E77C 8F818038 */  lw    $at, %got(jtbl_10009764)($gp)
/* 0041E780 00094880 */  sll   $t1, $t1, 2
/* 0041E784 00290821 */  addu  $at, $at, $t1
/* 0041E788 8C299764 */  lw    $t1, %lo(jtbl_10009764)($at)
/* 0041E78C 013C4821 */  addu  $t1, $t1, $gp
/* 0041E790 01200008 */  jr    $t1
/* 0041E794 00000000 */   nop   
.L0041E798:
/* 0041E798 2E01003F */  sltiu $at, $s0, 0x3f
/* 0041E79C 1020FF5A */  beqz  $at, .L0041E508
/* 0041E7A0 00000000 */   nop   
/* 0041E7A4 1000FFE8 */  b     .L0041E748
/* 0041E7A8 00000000 */   nop   
.L0041E7AC:
/* 0041E7AC 2D410013 */  sltiu $at, $t2, 0x13
/* 0041E7B0 1020FFE5 */  beqz  $at, .L0041E748
/* 0041E7B4 00000000 */   nop   
/* 0041E7B8 8F818038 */  lw    $at, %got(jtbl_10009770)($gp)
/* 0041E7BC 000A5080 */  sll   $t2, $t2, 2
/* 0041E7C0 002A0821 */  addu  $at, $at, $t2
/* 0041E7C4 8C2A9770 */  lw    $t2, %lo(jtbl_10009770)($at)
/* 0041E7C8 015C5021 */  addu  $t2, $t2, $gp
/* 0041E7CC 01400008 */  jr    $t2
/* 0041E7D0 00000000 */   nop   
.L0041E7D4:
/* 0041E7D4 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041E7D8 02002025 */  move  $a0, $s0
/* 0041E7DC 93A5002F */  lbu   $a1, 0x2f($sp)
/* 0041E7E0 0320F809 */  jalr  $t9
/* 0041E7E4 00000000 */   nop   
/* 0041E7E8 8FBC0018 */  lw    $gp, 0x18($sp)
.L0041E7EC:
/* 0041E7EC 8FBF001C */  lw    $ra, 0x1c($sp)
.L0041E7F0:
/* 0041E7F0 8FB00014 */  lw    $s0, 0x14($sp)
/* 0041E7F4 27BD0028 */  addiu $sp, $sp, 0x28
/* 0041E7F8 03E00008 */  jr    $ra
/* 0041E7FC 00000000 */   nop   
    .type dw_emit_rrr, @function
    .size dw_emit_rrr, .-dw_emit_rrr
    .end dw_emit_rrr

    .type func_0041E800, @function
func_0041E800:
    # 0041FC98 dw_emit_rri
/* 0041E800 3C1C0FC0 */  .cpload $t9
/* 0041E804 279C1250 */  
/* 0041E808 0399E021 */  
/* 0041E80C 8F8E898C */  lw     $t6, %got(lsb_first)($gp)
/* 0041E810 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 0041E814 AFBF0024 */  sw    $ra, 0x24($sp)
/* 0041E818 91CE0000 */  lbu   $t6, ($t6)
/* 0041E81C AFBC0020 */  sw    $gp, 0x20($sp)
/* 0041E820 AFB0001C */  sw    $s0, 0x1c($sp)
/* 0041E824 AFA40030 */  sw    $a0, 0x30($sp)
/* 0041E828 AFA50034 */  sw    $a1, 0x34($sp)
/* 0041E82C AFA60038 */  sw    $a2, 0x38($sp)
/* 0041E830 11C00008 */  beqz  $t6, .L0041E854
/* 0041E834 AFA7003C */   sw    $a3, 0x3c($sp)
/* 0041E838 24AF0001 */  addiu $t7, $a1, 1
/* 0041E83C 24D80001 */  addiu $t8, $a2, 1
/* 0041E840 A3AF002B */  sb    $t7, 0x2b($sp)
/* 0041E844 30B000FF */  andi  $s0, $a1, 0xff
/* 0041E848 A3B80029 */  sb    $t8, 0x29($sp)
/* 0041E84C 10000007 */  b     .L0041E86C
/* 0041E850 A3A60028 */   sb    $a2, 0x28($sp)
.L0041E854:
/* 0041E854 24B00001 */  addiu $s0, $a1, 1
/* 0041E858 24D90001 */  addiu $t9, $a2, 1
/* 0041E85C A3A5002B */  sb    $a1, 0x2b($sp)
/* 0041E860 321000FF */  andi  $s0, $s0, 0xff
/* 0041E864 A3A60029 */  sb    $a2, 0x29($sp)
/* 0041E868 A3B90028 */  sb    $t9, 0x28($sp)
.L0041E86C:
/* 0041E86C 8FA8003C */  lw    $t0, 0x3c($sp)
/* 0041E870 8FA70040 */  lw    $a3, 0x40($sp)
/* 0041E874 34018000 */  li    $at, 32768
/* 0041E878 15000028 */  bnez  $t0, .L0041E91C
/* 0041E87C 00E1082A */   slt   $at, $a3, $at
/* 0041E880 10200026 */  beqz  $at, .L0041E91C
/* 0041E884 28E18000 */   slti  $at, $a3, -0x8000
/* 0041E888 14200024 */  bnez  $at, .L0041E91C
/* 0041E88C 24040002 */   li    $a0, 2
/* 0041E890 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041E894 02002825 */  move  $a1, $s0
/* 0041E898 93A60028 */  lbu   $a2, 0x28($sp)
/* 0041E89C 0320F809 */  jalr  $t9
/* 0041E8A0 AFA00010 */   sw    $zero, 0x10($sp)
/* 0041E8A4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041E8A8 24040020 */  li    $a0, 32
/* 0041E8AC 24050006 */  li    $a1, 6
/* 0041E8B0 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 0041E8B4 0320F809 */  jalr  $t9
/* 0041E8B8 00000000 */   nop   
/* 0041E8BC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041E8C0 24040051 */  li    $a0, 81
/* 0041E8C4 24050001 */  li    $a1, 1
/* 0041E8C8 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041E8CC 02003025 */  move  $a2, $s0
/* 0041E8D0 8FA70040 */  lw    $a3, 0x40($sp)
/* 0041E8D4 0320F809 */  jalr  $t9
/* 0041E8D8 AFA00010 */   sw    $zero, 0x10($sp)
/* 0041E8DC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041E8E0 97A40032 */  lhu   $a0, 0x32($sp)
/* 0041E8E4 93A5002B */  lbu   $a1, 0x2b($sp)
/* 0041E8E8 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041E8EC 93A60029 */  lbu   $a2, 0x29($sp)
/* 0041E8F0 24070001 */  li    $a3, 1
/* 0041E8F4 0320F809 */  jalr  $t9
/* 0041E8F8 00000000 */   nop   
/* 0041E8FC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041E900 24040020 */  li    $a0, 32
/* 0041E904 24050005 */  li    $a1, 5
/* 0041E908 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 0041E90C 0320F809 */  jalr  $t9
/* 0041E910 00000000 */   nop   
/* 0041E914 10000035 */  b     .L0041E9EC
/* 0041E918 8FBC0020 */   lw    $gp, 0x20($sp)
.L0041E91C:
/* 0041E91C 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 0041E920 24040020 */  li    $a0, 32
/* 0041E924 24050006 */  li    $a1, 6
/* 0041E928 0320F809 */  jalr  $t9
/* 0041E92C 00000000 */   nop   
/* 0041E930 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041E934 24040029 */  li    $a0, 41
/* 0041E938 24050001 */  li    $a1, 1
/* 0041E93C 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 0041E940 8FA60040 */  lw    $a2, 0x40($sp)
/* 0041E944 00003825 */  move  $a3, $zero
/* 0041E948 0320F809 */  jalr  $t9
/* 0041E94C 00000000 */   nop   
/* 0041E950 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041E954 24040002 */  li    $a0, 2
/* 0041E958 02002825 */  move  $a1, $s0
/* 0041E95C 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041E960 93A60028 */  lbu   $a2, 0x28($sp)
/* 0041E964 24070001 */  li    $a3, 1
/* 0041E968 0320F809 */  jalr  $t9
/* 0041E96C 00000000 */   nop   
/* 0041E970 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041E974 24040051 */  li    $a0, 81
/* 0041E978 24050001 */  li    $a1, 1
/* 0041E97C 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041E980 02003025 */  move  $a2, $s0
/* 0041E984 24070001 */  li    $a3, 1
/* 0041E988 0320F809 */  jalr  $t9
/* 0041E98C 00000000 */   nop   
/* 0041E990 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041E994 97A40032 */  lhu   $a0, 0x32($sp)
/* 0041E998 93A5002B */  lbu   $a1, 0x2b($sp)
/* 0041E99C 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041E9A0 93A60029 */  lbu   $a2, 0x29($sp)
/* 0041E9A4 24070001 */  li    $a3, 1
/* 0041E9A8 0320F809 */  jalr  $t9
/* 0041E9AC 00000000 */   nop   
/* 0041E9B0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041E9B4 24040020 */  li    $a0, 32
/* 0041E9B8 24050005 */  li    $a1, 5
/* 0041E9BC 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 0041E9C0 0320F809 */  jalr  $t9
/* 0041E9C4 00000000 */   nop   
/* 0041E9C8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041E9CC 97A40032 */  lhu   $a0, 0x32($sp)
/* 0041E9D0 93A5002B */  lbu   $a1, 0x2b($sp)
/* 0041E9D4 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 0041E9D8 8FA6003C */  lw    $a2, 0x3c($sp)
/* 0041E9DC 00003825 */  move  $a3, $zero
/* 0041E9E0 0320F809 */  jalr  $t9
/* 0041E9E4 00000000 */   nop   
/* 0041E9E8 8FBC0020 */  lw    $gp, 0x20($sp)
.L0041E9EC:
/* 0041E9EC 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0041E9F0 8FB0001C */  lw    $s0, 0x1c($sp)
/* 0041E9F4 27BD0030 */  addiu $sp, $sp, 0x30
/* 0041E9F8 03E00008 */  jr    $ra
/* 0041E9FC 00000000 */   nop   

    .type func_0041EA00, @function
func_0041EA00:
    # 0041FC98 dw_emit_rri
/* 0041EA00 3C1C0FC0 */  .cpload $t9
/* 0041EA04 279C1050 */  
/* 0041EA08 0399E021 */  
/* 0041EA0C 8F8E898C */  lw     $t6, %got(lsb_first)($gp)
/* 0041EA10 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 0041EA14 AFBF0024 */  sw    $ra, 0x24($sp)
/* 0041EA18 91CE0000 */  lbu   $t6, ($t6)
/* 0041EA1C AFBC0020 */  sw    $gp, 0x20($sp)
/* 0041EA20 AFB0001C */  sw    $s0, 0x1c($sp)
/* 0041EA24 AFA40030 */  sw    $a0, 0x30($sp)
/* 0041EA28 AFA50034 */  sw    $a1, 0x34($sp)
/* 0041EA2C AFA60038 */  sw    $a2, 0x38($sp)
/* 0041EA30 11C00008 */  beqz  $t6, .L0041EA54
/* 0041EA34 AFA7003C */   sw    $a3, 0x3c($sp)
/* 0041EA38 24AF0001 */  addiu $t7, $a1, 1
/* 0041EA3C 24D80001 */  addiu $t8, $a2, 1
/* 0041EA40 A3AF002B */  sb    $t7, 0x2b($sp)
/* 0041EA44 A3A5002A */  sb    $a1, 0x2a($sp)
/* 0041EA48 A3B80029 */  sb    $t8, 0x29($sp)
/* 0041EA4C 10000007 */  b     .L0041EA6C
/* 0041EA50 30D000FF */   andi  $s0, $a2, 0xff
.L0041EA54:
/* 0041EA54 24B90001 */  addiu $t9, $a1, 1
/* 0041EA58 24D00001 */  addiu $s0, $a2, 1
/* 0041EA5C A3A5002B */  sb    $a1, 0x2b($sp)
/* 0041EA60 A3B9002A */  sb    $t9, 0x2a($sp)
/* 0041EA64 A3A60029 */  sb    $a2, 0x29($sp)
/* 0041EA68 321000FF */  andi  $s0, $s0, 0xff
.L0041EA6C:
/* 0041EA6C 8FA8003C */  lw    $t0, 0x3c($sp)
/* 0041EA70 8FA90040 */  lw    $t1, 0x40($sp)
/* 0041EA74 34018000 */  li    $at, 32768
/* 0041EA78 1500002A */  bnez  $t0, .L0041EB24
/* 0041EA7C 0121082A */   slt   $at, $t1, $at
/* 0041EA80 10200028 */  beqz  $at, .L0041EB24
/* 0041EA84 29218000 */   slti  $at, $t1, -0x8000
/* 0041EA88 14200026 */  bnez  $at, .L0041EB24
/* 0041EA8C 00000000 */   nop   
/* 0041EA90 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 0041EA94 24040020 */  li    $a0, 32
/* 0041EA98 24050006 */  li    $a1, 6
/* 0041EA9C 0320F809 */  jalr  $t9
/* 0041EAA0 00000000 */   nop   
/* 0041EAA4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041EAA8 24040051 */  li    $a0, 81
/* 0041EAAC 24050001 */  li    $a1, 1
/* 0041EAB0 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041EAB4 02003025 */  move  $a2, $s0
/* 0041EAB8 8FA70040 */  lw    $a3, 0x40($sp)
/* 0041EABC 0320F809 */  jalr  $t9
/* 0041EAC0 AFA00010 */   sw    $zero, 0x10($sp)
/* 0041EAC4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041EAC8 24040056 */  li    $a0, 86
/* 0041EACC 93A5002A */  lbu   $a1, 0x2a($sp)
/* 0041EAD0 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041EAD4 02003025 */  move  $a2, $s0
/* 0041EAD8 8FA70040 */  lw    $a3, 0x40($sp)
/* 0041EADC 0320F809 */  jalr  $t9
/* 0041EAE0 AFA00010 */   sw    $zero, 0x10($sp)
/* 0041EAE4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041EAE8 97A40032 */  lhu   $a0, 0x32($sp)
/* 0041EAEC 93A5002B */  lbu   $a1, 0x2b($sp)
/* 0041EAF0 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041EAF4 93A60029 */  lbu   $a2, 0x29($sp)
/* 0041EAF8 24070001 */  li    $a3, 1
/* 0041EAFC 0320F809 */  jalr  $t9
/* 0041EB00 00000000 */   nop   
/* 0041EB04 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041EB08 24040020 */  li    $a0, 32
/* 0041EB0C 24050005 */  li    $a1, 5
/* 0041EB10 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 0041EB14 0320F809 */  jalr  $t9
/* 0041EB18 00000000 */   nop   
/* 0041EB1C 10000035 */  b     .L0041EBF4
/* 0041EB20 8FBC0020 */   lw    $gp, 0x20($sp)
.L0041EB24:
/* 0041EB24 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 0041EB28 24040020 */  li    $a0, 32
/* 0041EB2C 24050006 */  li    $a1, 6
/* 0041EB30 0320F809 */  jalr  $t9
/* 0041EB34 00000000 */   nop   
/* 0041EB38 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041EB3C 24040029 */  li    $a0, 41
/* 0041EB40 24050001 */  li    $a1, 1
/* 0041EB44 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 0041EB48 8FA60040 */  lw    $a2, 0x40($sp)
/* 0041EB4C 00003825 */  move  $a3, $zero
/* 0041EB50 0320F809 */  jalr  $t9
/* 0041EB54 00000000 */   nop   
/* 0041EB58 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041EB5C 24040051 */  li    $a0, 81
/* 0041EB60 24050001 */  li    $a1, 1
/* 0041EB64 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041EB68 02003025 */  move  $a2, $s0
/* 0041EB6C 24070001 */  li    $a3, 1
/* 0041EB70 0320F809 */  jalr  $t9
/* 0041EB74 00000000 */   nop   
/* 0041EB78 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041EB7C 97A40032 */  lhu   $a0, 0x32($sp)
/* 0041EB80 93A5002B */  lbu   $a1, 0x2b($sp)
/* 0041EB84 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041EB88 93A60029 */  lbu   $a2, 0x29($sp)
/* 0041EB8C 24070001 */  li    $a3, 1
/* 0041EB90 0320F809 */  jalr  $t9
/* 0041EB94 00000000 */   nop   
/* 0041EB98 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041EB9C 24040020 */  li    $a0, 32
/* 0041EBA0 24050005 */  li    $a1, 5
/* 0041EBA4 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 0041EBA8 0320F809 */  jalr  $t9
/* 0041EBAC 00000000 */   nop   
/* 0041EBB0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041EBB4 24040056 */  li    $a0, 86
/* 0041EBB8 93A5002A */  lbu   $a1, 0x2a($sp)
/* 0041EBBC 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041EBC0 02003025 */  move  $a2, $s0
/* 0041EBC4 8FA70040 */  lw    $a3, 0x40($sp)
/* 0041EBC8 0320F809 */  jalr  $t9
/* 0041EBCC AFA00010 */   sw    $zero, 0x10($sp)
/* 0041EBD0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041EBD4 97A40032 */  lhu   $a0, 0x32($sp)
/* 0041EBD8 93A5002B */  lbu   $a1, 0x2b($sp)
/* 0041EBDC 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 0041EBE0 8FA6003C */  lw    $a2, 0x3c($sp)
/* 0041EBE4 00003825 */  move  $a3, $zero
/* 0041EBE8 0320F809 */  jalr  $t9
/* 0041EBEC 00000000 */   nop   
/* 0041EBF0 8FBC0020 */  lw    $gp, 0x20($sp)
.L0041EBF4:
/* 0041EBF4 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0041EBF8 8FB0001C */  lw    $s0, 0x1c($sp)
/* 0041EBFC 27BD0030 */  addiu $sp, $sp, 0x30
/* 0041EC00 03E00008 */  jr    $ra
/* 0041EC04 00000000 */   nop   

    .type func_0041EC08, @function
func_0041EC08:
    # 0041FC98 dw_emit_rri
/* 0041EC08 3C1C0FC0 */  .cpload $t9
/* 0041EC0C 279C0E48 */  
/* 0041EC10 0399E021 */  
/* 0041EC14 27BDFFB8 */  addiu $sp, $sp, -0x48
/* 0041EC18 AFB20024 */  sw    $s2, 0x24($sp)
/* 0041EC1C AFB4002C */  sw    $s4, 0x2c($sp)
/* 0041EC20 AFB30028 */  sw    $s3, 0x28($sp)
/* 0041EC24 AFB0001C */  sw    $s0, 0x1c($sp)
/* 0041EC28 30F2003F */  andi  $s2, $a3, 0x3f
/* 0041EC2C 24010040 */  li    $at, 64
/* 0041EC30 30B000FF */  andi  $s0, $a1, 0xff
/* 0041EC34 3093FFFF */  andi  $s3, $a0, 0xffff
/* 0041EC38 30D400FF */  andi  $s4, $a2, 0xff
/* 0041EC3C AFBF0034 */  sw    $ra, 0x34($sp)
/* 0041EC40 AFBC0030 */  sw    $gp, 0x30($sp)
/* 0041EC44 AFB10020 */  sw    $s1, 0x20($sp)
/* 0041EC48 AFA40048 */  sw    $a0, 0x48($sp)
/* 0041EC4C AFA5004C */  sw    $a1, 0x4c($sp)
/* 0041EC50 16410011 */  bne   $s2, $at, .L0041EC98
/* 0041EC54 AFA60050 */   sw    $a2, 0x50($sp)
/* 0041EC58 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 0041EC5C 24040029 */  li    $a0, 41
/* 0041EC60 02002825 */  move  $a1, $s0
/* 0041EC64 00003025 */  move  $a2, $zero
/* 0041EC68 0320F809 */  jalr  $t9
/* 0041EC6C 00003825 */   move  $a3, $zero
/* 0041EC70 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041EC74 24040029 */  li    $a0, 41
/* 0041EC78 26050001 */  addiu $a1, $s0, 1
/* 0041EC7C 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 0041EC80 00003025 */  move  $a2, $zero
/* 0041EC84 00003825 */  move  $a3, $zero
/* 0041EC88 0320F809 */  jalr  $t9
/* 0041EC8C 00000000 */   nop   
/* 0041EC90 10000071 */  b     .L0041EE58
/* 0041EC94 8FBC0030 */   lw    $gp, 0x30($sp)
.L0041EC98:
/* 0041EC98 2A410020 */  slti  $at, $s2, 0x20
/* 0041EC9C 14200025 */  bnez  $at, .L0041ED34
/* 0041ECA0 00000000 */   nop   
/* 0041ECA4 8F8E898C */  lw     $t6, %got(lsb_first)($gp)
/* 0041ECA8 02002825 */  move  $a1, $s0
/* 0041ECAC 24040029 */  li    $a0, 41
/* 0041ECB0 91CE0000 */  lbu   $t6, ($t6)
/* 0041ECB4 11C00010 */  beqz  $t6, .L0041ECF8
/* 0041ECB8 00000000 */   nop   
/* 0041ECBC 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 0041ECC0 24040029 */  li    $a0, 41
/* 0041ECC4 00003025 */  move  $a2, $zero
/* 0041ECC8 0320F809 */  jalr  $t9
/* 0041ECCC 00003825 */   move  $a3, $zero
/* 0041ECD0 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041ECD4 02602025 */  move  $a0, $s3
/* 0041ECD8 26050001 */  addiu $a1, $s0, 1
/* 0041ECDC 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041ECE0 02803025 */  move  $a2, $s4
/* 0041ECE4 2647FFE0 */  addiu $a3, $s2, -0x20
/* 0041ECE8 0320F809 */  jalr  $t9
/* 0041ECEC AFA00010 */   sw    $zero, 0x10($sp)
/* 0041ECF0 10000059 */  b     .L0041EE58
/* 0041ECF4 8FBC0030 */   lw    $gp, 0x30($sp)
.L0041ECF8:
/* 0041ECF8 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 0041ECFC 26050001 */  addiu $a1, $s0, 1
/* 0041ED00 00003025 */  move  $a2, $zero
/* 0041ED04 0320F809 */  jalr  $t9
/* 0041ED08 00003825 */   move  $a3, $zero
/* 0041ED0C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041ED10 02602025 */  move  $a0, $s3
/* 0041ED14 02002825 */  move  $a1, $s0
/* 0041ED18 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041ED1C 26860001 */  addiu $a2, $s4, 1
/* 0041ED20 2647FFE0 */  addiu $a3, $s2, -0x20
/* 0041ED24 0320F809 */  jalr  $t9
/* 0041ED28 AFA00010 */   sw    $zero, 0x10($sp)
/* 0041ED2C 1000004A */  b     .L0041EE58
/* 0041ED30 8FBC0030 */   lw    $gp, 0x30($sp)
.L0041ED34:
/* 0041ED34 8F8F898C */  lw     $t7, %got(lsb_first)($gp)
/* 0041ED38 26110001 */  addiu $s1, $s0, 1
/* 0041ED3C 26860001 */  addiu $a2, $s4, 1
/* 0041ED40 91EF0000 */  lbu   $t7, ($t7)
/* 0041ED44 02403825 */  move  $a3, $s2
/* 0041ED48 02602025 */  move  $a0, $s3
/* 0041ED4C 11E00021 */  beqz  $t7, .L0041EDD4
/* 0041ED50 02002825 */   move  $a1, $s0
/* 0041ED54 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041ED58 02602025 */  move  $a0, $s3
/* 0041ED5C 02202825 */  move  $a1, $s1
/* 0041ED60 0320F809 */  jalr  $t9
/* 0041ED64 AFA00010 */   sw    $zero, 0x10($sp)
/* 0041ED68 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041ED6C 24180020 */  li    $t8, 32
/* 0041ED70 03123823 */  subu  $a3, $t8, $s2
/* 0041ED74 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041ED78 02602025 */  move  $a0, $s3
/* 0041ED7C 02002825 */  move  $a1, $s0
/* 0041ED80 02803025 */  move  $a2, $s4
/* 0041ED84 0320F809 */  jalr  $t9
/* 0041ED88 AFA00010 */   sw    $zero, 0x10($sp)
/* 0041ED8C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041ED90 24040040 */  li    $a0, 64
/* 0041ED94 02202825 */  move  $a1, $s1
/* 0041ED98 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041ED9C 02203025 */  move  $a2, $s1
/* 0041EDA0 02003825 */  move  $a3, $s0
/* 0041EDA4 0320F809 */  jalr  $t9
/* 0041EDA8 00000000 */   nop   
/* 0041EDAC 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041EDB0 02602025 */  move  $a0, $s3
/* 0041EDB4 02002825 */  move  $a1, $s0
/* 0041EDB8 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041EDBC 02803025 */  move  $a2, $s4
/* 0041EDC0 02403825 */  move  $a3, $s2
/* 0041EDC4 0320F809 */  jalr  $t9
/* 0041EDC8 AFA00010 */   sw    $zero, 0x10($sp)
/* 0041EDCC 10000022 */  b     .L0041EE58
/* 0041EDD0 8FBC0030 */   lw    $gp, 0x30($sp)
.L0041EDD4:
/* 0041EDD4 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041EDD8 02803025 */  move  $a2, $s4
/* 0041EDDC 02403825 */  move  $a3, $s2
/* 0041EDE0 0320F809 */  jalr  $t9
/* 0041EDE4 AFA00010 */   sw    $zero, 0x10($sp)
/* 0041EDE8 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041EDEC 24190020 */  li    $t9, 32
/* 0041EDF0 03323823 */  subu  $a3, $t9, $s2
/* 0041EDF4 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041EDF8 26110001 */  addiu $s1, $s0, 1
/* 0041EDFC 26860001 */  addiu $a2, $s4, 1
/* 0041EE00 AFA6003C */  sw    $a2, 0x3c($sp)
/* 0041EE04 02202825 */  move  $a1, $s1
/* 0041EE08 02602025 */  move  $a0, $s3
/* 0041EE0C 0320F809 */  jalr  $t9
/* 0041EE10 AFA00010 */   sw    $zero, 0x10($sp)
/* 0041EE14 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041EE18 24040040 */  li    $a0, 64
/* 0041EE1C 02002825 */  move  $a1, $s0
/* 0041EE20 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041EE24 02003025 */  move  $a2, $s0
/* 0041EE28 02203825 */  move  $a3, $s1
/* 0041EE2C 0320F809 */  jalr  $t9
/* 0041EE30 00000000 */   nop   
/* 0041EE34 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041EE38 02602025 */  move  $a0, $s3
/* 0041EE3C 02202825 */  move  $a1, $s1
/* 0041EE40 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041EE44 8FA6003C */  lw    $a2, 0x3c($sp)
/* 0041EE48 02403825 */  move  $a3, $s2
/* 0041EE4C 0320F809 */  jalr  $t9
/* 0041EE50 AFA00010 */   sw    $zero, 0x10($sp)
/* 0041EE54 8FBC0030 */  lw    $gp, 0x30($sp)
.L0041EE58:
/* 0041EE58 8FBF0034 */  lw    $ra, 0x34($sp)
/* 0041EE5C 8FB0001C */  lw    $s0, 0x1c($sp)
/* 0041EE60 8FB10020 */  lw    $s1, 0x20($sp)
/* 0041EE64 8FB20024 */  lw    $s2, 0x24($sp)
/* 0041EE68 8FB30028 */  lw    $s3, 0x28($sp)
/* 0041EE6C 8FB4002C */  lw    $s4, 0x2c($sp)
/* 0041EE70 03E00008 */  jr    $ra
/* 0041EE74 27BD0048 */   addiu $sp, $sp, 0x48

    .type func_0041EE78, @function
func_0041EE78:
    # 0041FC98 dw_emit_rri
/* 0041EE78 3C1C0FC0 */  .cpload $t9
/* 0041EE7C 279C0BD8 */  
/* 0041EE80 0399E021 */  
/* 0041EE84 27BDFFC0 */  addiu $sp, $sp, -0x40
/* 0041EE88 AFB20024 */  sw    $s2, 0x24($sp)
/* 0041EE8C AFB10020 */  sw    $s1, 0x20($sp)
/* 0041EE90 30F2003F */  andi  $s2, $a3, 0x3f
/* 0041EE94 24010040 */  li    $at, 64
/* 0041EE98 30B100FF */  andi  $s1, $a1, 0xff
/* 0041EE9C AFBF002C */  sw    $ra, 0x2c($sp)
/* 0041EEA0 AFBC0028 */  sw    $gp, 0x28($sp)
/* 0041EEA4 AFB0001C */  sw    $s0, 0x1c($sp)
/* 0041EEA8 AFA40040 */  sw    $a0, 0x40($sp)
/* 0041EEAC AFA50044 */  sw    $a1, 0x44($sp)
/* 0041EEB0 16410011 */  bne   $s2, $at, .L0041EEF8
/* 0041EEB4 AFA60048 */   sw    $a2, 0x48($sp)
/* 0041EEB8 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 0041EEBC 24040029 */  li    $a0, 41
/* 0041EEC0 02202825 */  move  $a1, $s1
/* 0041EEC4 00003025 */  move  $a2, $zero
/* 0041EEC8 0320F809 */  jalr  $t9
/* 0041EECC 00003825 */   move  $a3, $zero
/* 0041EED0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041EED4 24040029 */  li    $a0, 41
/* 0041EED8 26250001 */  addiu $a1, $s1, 1
/* 0041EEDC 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 0041EEE0 00003025 */  move  $a2, $zero
/* 0041EEE4 00003825 */  move  $a3, $zero
/* 0041EEE8 0320F809 */  jalr  $t9
/* 0041EEEC 00000000 */   nop   
/* 0041EEF0 100000A2 */  b     .L0041F17C
/* 0041EEF4 8FBC0028 */   lw    $gp, 0x28($sp)
.L0041EEF8:
/* 0041EEF8 2A410020 */  slti  $at, $s2, 0x20
/* 0041EEFC 14200054 */  bnez  $at, .L0041F050
/* 0041EF00 00000000 */   nop   
/* 0041EF04 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 0041EF08 0320F809 */  jalr  $t9
/* 0041EF0C 00000000 */   nop   
/* 0041EF10 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041EF14 26300001 */  addiu $s0, $s1, 1
/* 0041EF18 AFA20038 */  sw    $v0, 0x38($sp)
/* 0041EF1C 8F8E898C */  lw     $t6, %got(lsb_first)($gp)
/* 0041EF20 02002825 */  move  $a1, $s0
/* 0041EF24 24040029 */  li    $a0, 41
/* 0041EF28 91CE0000 */  lbu   $t6, ($t6)
/* 0041EF2C 11C00025 */  beqz  $t6, .L0041EFC4
/* 0041EF30 00000000 */   nop   
/* 0041EF34 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 0041EF38 24040029 */  li    $a0, 41
/* 0041EF3C 00003025 */  move  $a2, $zero
/* 0041EF40 0320F809 */  jalr  $t9
/* 0041EF44 00003825 */   move  $a3, $zero
/* 0041EF48 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041EF4C 93A5004B */  lbu   $a1, 0x4b($sp)
/* 0041EF50 24040010 */  li    $a0, 16
/* 0041EF54 8F998224 */  lw    $t9, %call16(emit_rll)($gp)
/* 0041EF58 24A50001 */  addiu $a1, $a1, 1
/* 0041EF5C AFA50030 */  sw    $a1, 0x30($sp)
/* 0041EF60 0320F809 */  jalr  $t9
/* 0041EF64 8FA60038 */   lw    $a2, 0x38($sp)
/* 0041EF68 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041EF6C 24040029 */  li    $a0, 41
/* 0041EF70 02002825 */  move  $a1, $s0
/* 0041EF74 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 0041EF78 2406FFFF */  li    $a2, -1
/* 0041EF7C 00003825 */  move  $a3, $zero
/* 0041EF80 0320F809 */  jalr  $t9
/* 0041EF84 00000000 */   nop   
/* 0041EF88 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041EF8C 8FA40038 */  lw    $a0, 0x38($sp)
/* 0041EF90 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 0041EF94 0320F809 */  jalr  $t9
/* 0041EF98 00000000 */   nop   
/* 0041EF9C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041EFA0 97A40042 */  lhu   $a0, 0x42($sp)
/* 0041EFA4 02202825 */  move  $a1, $s1
/* 0041EFA8 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041EFAC 8FA60030 */  lw    $a2, 0x30($sp)
/* 0041EFB0 2647FFE0 */  addiu $a3, $s2, -0x20
/* 0041EFB4 0320F809 */  jalr  $t9
/* 0041EFB8 AFA00010 */   sw    $zero, 0x10($sp)
/* 0041EFBC 1000006F */  b     .L0041F17C
/* 0041EFC0 8FBC0028 */   lw    $gp, 0x28($sp)
.L0041EFC4:
/* 0041EFC4 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 0041EFC8 02202825 */  move  $a1, $s1
/* 0041EFCC 00003025 */  move  $a2, $zero
/* 0041EFD0 0320F809 */  jalr  $t9
/* 0041EFD4 00003825 */   move  $a3, $zero
/* 0041EFD8 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041EFDC 24040010 */  li    $a0, 16
/* 0041EFE0 93A5004B */  lbu   $a1, 0x4b($sp)
/* 0041EFE4 8F998224 */  lw    $t9, %call16(emit_rll)($gp)
/* 0041EFE8 8FA60038 */  lw    $a2, 0x38($sp)
/* 0041EFEC 0320F809 */  jalr  $t9
/* 0041EFF0 00000000 */   nop   
/* 0041EFF4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041EFF8 24040029 */  li    $a0, 41
/* 0041EFFC 02202825 */  move  $a1, $s1
/* 0041F000 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 0041F004 2406FFFF */  li    $a2, -1
/* 0041F008 00003825 */  move  $a3, $zero
/* 0041F00C 0320F809 */  jalr  $t9
/* 0041F010 00000000 */   nop   
/* 0041F014 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041F018 8FA40038 */  lw    $a0, 0x38($sp)
/* 0041F01C 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 0041F020 0320F809 */  jalr  $t9
/* 0041F024 00000000 */   nop   
/* 0041F028 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041F02C 97A40042 */  lhu   $a0, 0x42($sp)
/* 0041F030 26250001 */  addiu $a1, $s1, 1
/* 0041F034 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041F038 93A6004B */  lbu   $a2, 0x4b($sp)
/* 0041F03C 2647FFE0 */  addiu $a3, $s2, -0x20
/* 0041F040 0320F809 */  jalr  $t9
/* 0041F044 AFA00010 */   sw    $zero, 0x10($sp)
/* 0041F048 1000004C */  b     .L0041F17C
/* 0041F04C 8FBC0028 */   lw    $gp, 0x28($sp)
.L0041F050:
/* 0041F050 8F8F898C */  lw     $t7, %got(lsb_first)($gp)
/* 0041F054 26300001 */  addiu $s0, $s1, 1
/* 0041F058 02403825 */  move  $a3, $s2
/* 0041F05C 91EF0000 */  lbu   $t7, ($t7)
/* 0041F060 02002825 */  move  $a1, $s0
/* 0041F064 24040054 */  li    $a0, 84
/* 0041F068 11E00025 */  beqz  $t7, .L0041F100
/* 0041F06C 93A6004B */   lbu   $a2, 0x4b($sp)
/* 0041F070 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041F074 24040054 */  li    $a0, 84
/* 0041F078 02202825 */  move  $a1, $s1
/* 0041F07C 93A6004B */  lbu   $a2, 0x4b($sp)
/* 0041F080 0320F809 */  jalr  $t9
/* 0041F084 AFA00010 */   sw    $zero, 0x10($sp)
/* 0041F088 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041F08C 93A6004B */  lbu   $a2, 0x4b($sp)
/* 0041F090 26300001 */  addiu $s0, $s1, 1
/* 0041F094 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041F098 24180020 */  li    $t8, 32
/* 0041F09C 24C60001 */  addiu $a2, $a2, 1
/* 0041F0A0 AFA60030 */  sw    $a2, 0x30($sp)
/* 0041F0A4 03123823 */  subu  $a3, $t8, $s2
/* 0041F0A8 02002825 */  move  $a1, $s0
/* 0041F0AC 2404004F */  li    $a0, 79
/* 0041F0B0 0320F809 */  jalr  $t9
/* 0041F0B4 AFA00010 */   sw    $zero, 0x10($sp)
/* 0041F0B8 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041F0BC 24040040 */  li    $a0, 64
/* 0041F0C0 02202825 */  move  $a1, $s1
/* 0041F0C4 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041F0C8 02203025 */  move  $a2, $s1
/* 0041F0CC 02003825 */  move  $a3, $s0
/* 0041F0D0 0320F809 */  jalr  $t9
/* 0041F0D4 00000000 */   nop   
/* 0041F0D8 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041F0DC 97A40042 */  lhu   $a0, 0x42($sp)
/* 0041F0E0 02002825 */  move  $a1, $s0
/* 0041F0E4 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041F0E8 8FA60030 */  lw    $a2, 0x30($sp)
/* 0041F0EC 02403825 */  move  $a3, $s2
/* 0041F0F0 0320F809 */  jalr  $t9
/* 0041F0F4 AFA00010 */   sw    $zero, 0x10($sp)
/* 0041F0F8 10000020 */  b     .L0041F17C
/* 0041F0FC 8FBC0028 */   lw    $gp, 0x28($sp)
.L0041F100:
/* 0041F100 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041F104 24C60001 */  addiu $a2, $a2, 1
/* 0041F108 02403825 */  move  $a3, $s2
/* 0041F10C 0320F809 */  jalr  $t9
/* 0041F110 AFA00010 */   sw    $zero, 0x10($sp)
/* 0041F114 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041F118 24190020 */  li    $t9, 32
/* 0041F11C 03323823 */  subu  $a3, $t9, $s2
/* 0041F120 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041F124 2404004F */  li    $a0, 79
/* 0041F128 02202825 */  move  $a1, $s1
/* 0041F12C 93A6004B */  lbu   $a2, 0x4b($sp)
/* 0041F130 0320F809 */  jalr  $t9
/* 0041F134 AFA00010 */   sw    $zero, 0x10($sp)
/* 0041F138 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041F13C 24040040 */  li    $a0, 64
/* 0041F140 02002825 */  move  $a1, $s0
/* 0041F144 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041F148 02003025 */  move  $a2, $s0
/* 0041F14C 02203825 */  move  $a3, $s1
/* 0041F150 0320F809 */  jalr  $t9
/* 0041F154 00000000 */   nop   
/* 0041F158 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041F15C 97A40042 */  lhu   $a0, 0x42($sp)
/* 0041F160 02202825 */  move  $a1, $s1
/* 0041F164 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041F168 93A6004B */  lbu   $a2, 0x4b($sp)
/* 0041F16C 02403825 */  move  $a3, $s2
/* 0041F170 0320F809 */  jalr  $t9
/* 0041F174 AFA00010 */   sw    $zero, 0x10($sp)
/* 0041F178 8FBC0028 */  lw    $gp, 0x28($sp)
.L0041F17C:
/* 0041F17C 8FBF002C */  lw    $ra, 0x2c($sp)
/* 0041F180 8FB0001C */  lw    $s0, 0x1c($sp)
/* 0041F184 8FB10020 */  lw    $s1, 0x20($sp)
/* 0041F188 8FB20024 */  lw    $s2, 0x24($sp)
/* 0041F18C 03E00008 */  jr    $ra
/* 0041F190 27BD0040 */   addiu $sp, $sp, 0x40

    .type func_0041F194, @function
func_0041F194:
    # 0041FC98 dw_emit_rri
/* 0041F194 3C1C0FC0 */  .cpload $t9
/* 0041F198 279C08BC */  
/* 0041F19C 0399E021 */  
/* 0041F1A0 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0041F1A4 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 0041F1A8 AFB0001C */  sw    $s0, 0x1c($sp)
/* 0041F1AC 30B000FF */  andi  $s0, $a1, 0xff
/* 0041F1B0 AFBF0024 */  sw    $ra, 0x24($sp)
/* 0041F1B4 AFA40028 */  sw    $a0, 0x28($sp)
/* 0041F1B8 AFA5002C */  sw    $a1, 0x2c($sp)
/* 0041F1BC AFA60030 */  sw    $a2, 0x30($sp)
/* 0041F1C0 AFA70034 */  sw    $a3, 0x34($sp)
/* 0041F1C4 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0041F1C8 00003825 */  move  $a3, $zero
/* 0041F1CC 8FA60038 */  lw    $a2, 0x38($sp)
/* 0041F1D0 02002825 */  move  $a1, $s0
/* 0041F1D4 0320F809 */  jalr  $t9
/* 0041F1D8 24040029 */   li    $a0, 41
/* 0041F1DC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041F1E0 02003025 */  move  $a2, $s0
/* 0041F1E4 24040059 */  li    $a0, 89
/* 0041F1E8 8F8E898C */  lw     $t6, %got(lsb_first)($gp)
/* 0041F1EC 02002825 */  move  $a1, $s0
/* 0041F1F0 91CE0000 */  lbu   $t6, ($t6)
/* 0041F1F4 11C00008 */  beqz  $t6, .L0041F218
/* 0041F1F8 00000000 */   nop   
/* 0041F1FC 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041F200 24040059 */  li    $a0, 89
/* 0041F204 02002825 */  move  $a1, $s0
/* 0041F208 0320F809 */  jalr  $t9
/* 0041F20C 93A70033 */   lbu   $a3, 0x33($sp)
/* 0041F210 10000007 */  b     .L0041F230
/* 0041F214 8FBC0020 */   lw    $gp, 0x20($sp)
.L0041F218:
/* 0041F218 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041F21C 93A70033 */  lbu   $a3, 0x33($sp)
/* 0041F220 02003025 */  move  $a2, $s0
/* 0041F224 0320F809 */  jalr  $t9
/* 0041F228 24E70001 */   addiu $a3, $a3, 1
/* 0041F22C 8FBC0020 */  lw    $gp, 0x20($sp)
.L0041F230:
/* 0041F230 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 0041F234 24040020 */  li    $a0, 32
/* 0041F238 24050006 */  li    $a1, 6
/* 0041F23C 0320F809 */  jalr  $t9
/* 0041F240 00000000 */   nop   
/* 0041F244 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041F248 24040029 */  li    $a0, 41
/* 0041F24C 24050001 */  li    $a1, 1
/* 0041F250 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 0041F254 8FA60034 */  lw    $a2, 0x34($sp)
/* 0041F258 00003825 */  move  $a3, $zero
/* 0041F25C 0320F809 */  jalr  $t9
/* 0041F260 00000000 */   nop   
/* 0041F264 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041F268 24050001 */  li    $a1, 1
/* 0041F26C 24060001 */  li    $a2, 1
/* 0041F270 8F8F898C */  lw     $t7, %got(lsb_first)($gp)
/* 0041F274 24040059 */  li    $a0, 89
/* 0041F278 91EF0000 */  lbu   $t7, ($t7)
/* 0041F27C 11E00008 */  beqz  $t7, .L0041F2A0
/* 0041F280 00000000 */   nop   
/* 0041F284 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041F288 93A70033 */  lbu   $a3, 0x33($sp)
/* 0041F28C 24040059 */  li    $a0, 89
/* 0041F290 0320F809 */  jalr  $t9
/* 0041F294 24E70001 */   addiu $a3, $a3, 1
/* 0041F298 10000007 */  b     .L0041F2B8
/* 0041F29C 8FBC0020 */   lw    $gp, 0x20($sp)
.L0041F2A0:
/* 0041F2A0 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041F2A4 24050001 */  li    $a1, 1
/* 0041F2A8 24060001 */  li    $a2, 1
/* 0041F2AC 0320F809 */  jalr  $t9
/* 0041F2B0 93A70033 */   lbu   $a3, 0x33($sp)
/* 0041F2B4 8FBC0020 */  lw    $gp, 0x20($sp)
.L0041F2B8:
/* 0041F2B8 97B8002A */  lhu   $t8, 0x2a($sp)
/* 0041F2BC 24010047 */  li    $at, 71
/* 0041F2C0 02002825 */  move  $a1, $s0
/* 0041F2C4 17010010 */  bne   $t8, $at, .L0041F308
/* 0041F2C8 24040040 */   li    $a0, 64
/* 0041F2CC 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041F2D0 24040040 */  li    $a0, 64
/* 0041F2D4 02003025 */  move  $a2, $s0
/* 0041F2D8 0320F809 */  jalr  $t9
/* 0041F2DC 24070001 */   li    $a3, 1
/* 0041F2E0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041F2E4 240400D6 */  li    $a0, 214
/* 0041F2E8 02002825 */  move  $a1, $s0
/* 0041F2EC 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041F2F0 02003025 */  move  $a2, $s0
/* 0041F2F4 24070001 */  li    $a3, 1
/* 0041F2F8 0320F809 */  jalr  $t9
/* 0041F2FC AFA00010 */   sw    $zero, 0x10($sp)
/* 0041F300 1000000F */  b     .L0041F340
/* 0041F304 8FBC0020 */   lw    $gp, 0x20($sp)
.L0041F308:
/* 0041F308 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041F30C 02002825 */  move  $a1, $s0
/* 0041F310 02003025 */  move  $a2, $s0
/* 0041F314 0320F809 */  jalr  $t9
/* 0041F318 24070001 */   li    $a3, 1
/* 0041F31C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041F320 24040051 */  li    $a0, 81
/* 0041F324 02002825 */  move  $a1, $s0
/* 0041F328 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0041F32C 00003025 */  move  $a2, $zero
/* 0041F330 02003825 */  move  $a3, $s0
/* 0041F334 0320F809 */  jalr  $t9
/* 0041F338 00000000 */   nop   
/* 0041F33C 8FBC0020 */  lw    $gp, 0x20($sp)
.L0041F340:
/* 0041F340 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 0041F344 24040020 */  li    $a0, 32
/* 0041F348 24050005 */  li    $a1, 5
/* 0041F34C 0320F809 */  jalr  $t9
/* 0041F350 00000000 */   nop   
/* 0041F354 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0041F358 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041F35C 8FB0001C */  lw    $s0, 0x1c($sp)
/* 0041F360 03E00008 */  jr    $ra
/* 0041F364 27BD0028 */   addiu $sp, $sp, 0x28

    .type func_0041F368, @function
func_0041F368:
    # 0041FC98 dw_emit_rri
/* 0041F368 3C1C0FC0 */  .cpload $t9
/* 0041F36C 279C06E8 */  
/* 0041F370 0399E021 */  
/* 0041F374 27BDFFC0 */  addiu $sp, $sp, -0x40
/* 0041F378 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 0041F37C AFBF002C */  sw    $ra, 0x2c($sp)
/* 0041F380 AFB20024 */  sw    $s2, 0x24($sp)
/* 0041F384 AFB10020 */  sw    $s1, 0x20($sp)
/* 0041F388 30B100FF */  andi  $s1, $a1, 0xff
/* 0041F38C 30D200FF */  andi  $s2, $a2, 0xff
/* 0041F390 AFBC0028 */  sw    $gp, 0x28($sp)
/* 0041F394 AFB0001C */  sw    $s0, 0x1c($sp)
/* 0041F398 AFA40040 */  sw    $a0, 0x40($sp)
/* 0041F39C AFA50044 */  sw    $a1, 0x44($sp)
/* 0041F3A0 AFA60048 */  sw    $a2, 0x48($sp)
/* 0041F3A4 0320F809 */  jalr  $t9
/* 0041F3A8 AFA7004C */   sw    $a3, 0x4c($sp)
/* 0041F3AC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041F3B0 00408025 */  move  $s0, $v0
/* 0041F3B4 26460001 */  addiu $a2, $s2, 1
/* 0041F3B8 8F8E898C */  lw     $t6, %got(lsb_first)($gp)
/* 0041F3BC 8FA7004C */  lw    $a3, 0x4c($sp)
/* 0041F3C0 2404004B */  li    $a0, 75
/* 0041F3C4 91CE0000 */  lbu   $t6, ($t6)
/* 0041F3C8 02202825 */  move  $a1, $s1
/* 0041F3CC 11C00020 */  beqz  $t6, .L0041F450
/* 0041F3D0 00000000 */   nop   
/* 0041F3D4 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041F3D8 2404004B */  li    $a0, 75
/* 0041F3DC 02202825 */  move  $a1, $s1
/* 0041F3E0 AFA00010 */  sw    $zero, 0x10($sp)
/* 0041F3E4 0320F809 */  jalr  $t9
/* 0041F3E8 AFA60034 */   sw    $a2, 0x34($sp)
/* 0041F3EC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041F3F0 24040013 */  li    $a0, 19
/* 0041F3F4 02202825 */  move  $a1, $s1
/* 0041F3F8 8F998224 */  lw    $t9, %call16(emit_rll)($gp)
/* 0041F3FC 02003025 */  move  $a2, $s0
/* 0041F400 0320F809 */  jalr  $t9
/* 0041F404 00000000 */   nop   
/* 0041F408 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041F40C 24040018 */  li    $a0, 24
/* 0041F410 8FA50034 */  lw    $a1, 0x34($sp)
/* 0041F414 8F99822C */  lw    $t9, %call16(emit_rill)($gp)
/* 0041F418 8FA6004C */  lw    $a2, 0x4c($sp)
/* 0041F41C 02003825 */  move  $a3, $s0
/* 0041F420 0320F809 */  jalr  $t9
/* 0041F424 00000000 */   nop   
/* 0041F428 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041F42C 97A40042 */  lhu   $a0, 0x42($sp)
/* 0041F430 02202825 */  move  $a1, $s1
/* 0041F434 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041F438 02403025 */  move  $a2, $s2
/* 0041F43C 8FA70050 */  lw    $a3, 0x50($sp)
/* 0041F440 0320F809 */  jalr  $t9
/* 0041F444 AFA00010 */   sw    $zero, 0x10($sp)
/* 0041F448 1000001E */  b     .L0041F4C4
/* 0041F44C 8FBC0028 */   lw    $gp, 0x28($sp)
.L0041F450:
/* 0041F450 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041F454 02403025 */  move  $a2, $s2
/* 0041F458 8FA7004C */  lw    $a3, 0x4c($sp)
/* 0041F45C 0320F809 */  jalr  $t9
/* 0041F460 AFA00010 */   sw    $zero, 0x10($sp)
/* 0041F464 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041F468 24040013 */  li    $a0, 19
/* 0041F46C 02202825 */  move  $a1, $s1
/* 0041F470 8F998224 */  lw    $t9, %call16(emit_rll)($gp)
/* 0041F474 02003025 */  move  $a2, $s0
/* 0041F478 0320F809 */  jalr  $t9
/* 0041F47C 00000000 */   nop   
/* 0041F480 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041F484 24040018 */  li    $a0, 24
/* 0041F488 02402825 */  move  $a1, $s2
/* 0041F48C 8F99822C */  lw    $t9, %call16(emit_rill)($gp)
/* 0041F490 8FA6004C */  lw    $a2, 0x4c($sp)
/* 0041F494 02003825 */  move  $a3, $s0
/* 0041F498 0320F809 */  jalr  $t9
/* 0041F49C 00000000 */   nop   
/* 0041F4A0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041F4A4 97A40042 */  lhu   $a0, 0x42($sp)
/* 0041F4A8 02202825 */  move  $a1, $s1
/* 0041F4AC 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041F4B0 26460001 */  addiu $a2, $s2, 1
/* 0041F4B4 8FA70050 */  lw    $a3, 0x50($sp)
/* 0041F4B8 0320F809 */  jalr  $t9
/* 0041F4BC AFA00010 */   sw    $zero, 0x10($sp)
/* 0041F4C0 8FBC0028 */  lw    $gp, 0x28($sp)
.L0041F4C4:
/* 0041F4C4 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 0041F4C8 02002025 */  move  $a0, $s0
/* 0041F4CC 0320F809 */  jalr  $t9
/* 0041F4D0 00000000 */   nop   
/* 0041F4D4 8FBF002C */  lw    $ra, 0x2c($sp)
/* 0041F4D8 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041F4DC 8FB0001C */  lw    $s0, 0x1c($sp)
/* 0041F4E0 8FB10020 */  lw    $s1, 0x20($sp)
/* 0041F4E4 8FB20024 */  lw    $s2, 0x24($sp)
/* 0041F4E8 03E00008 */  jr    $ra
/* 0041F4EC 27BD0040 */   addiu $sp, $sp, 0x40

    .type func_0041F4F0, @function
func_0041F4F0:
    # 0041FC98 dw_emit_rri
/* 0041F4F0 3C1C0FC0 */  .cpload $t9
/* 0041F4F4 279C0560 */  
/* 0041F4F8 0399E021 */  
/* 0041F4FC 27BDFFC0 */  addiu $sp, $sp, -0x40
/* 0041F500 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 0041F504 AFBF002C */  sw    $ra, 0x2c($sp)
/* 0041F508 AFB20024 */  sw    $s2, 0x24($sp)
/* 0041F50C AFB10020 */  sw    $s1, 0x20($sp)
/* 0041F510 30B100FF */  andi  $s1, $a1, 0xff
/* 0041F514 30D200FF */  andi  $s2, $a2, 0xff
/* 0041F518 AFBC0028 */  sw    $gp, 0x28($sp)
/* 0041F51C AFB0001C */  sw    $s0, 0x1c($sp)
/* 0041F520 AFA40040 */  sw    $a0, 0x40($sp)
/* 0041F524 AFA50044 */  sw    $a1, 0x44($sp)
/* 0041F528 AFA60048 */  sw    $a2, 0x48($sp)
/* 0041F52C 0320F809 */  jalr  $t9
/* 0041F530 AFA7004C */   sw    $a3, 0x4c($sp)
/* 0041F534 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041F538 00408025 */  move  $s0, $v0
/* 0041F53C 26460001 */  addiu $a2, $s2, 1
/* 0041F540 8F8E898C */  lw     $t6, %got(lsb_first)($gp)
/* 0041F544 8FA7004C */  lw    $a3, 0x4c($sp)
/* 0041F548 2404004A */  li    $a0, 74
/* 0041F54C 91CE0000 */  lbu   $t6, ($t6)
/* 0041F550 02202825 */  move  $a1, $s1
/* 0041F554 11C00020 */  beqz  $t6, .L0041F5D8
/* 0041F558 00000000 */   nop   
/* 0041F55C 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041F560 2404004A */  li    $a0, 74
/* 0041F564 02202825 */  move  $a1, $s1
/* 0041F568 AFA00010 */  sw    $zero, 0x10($sp)
/* 0041F56C 0320F809 */  jalr  $t9
/* 0041F570 AFA60034 */   sw    $a2, 0x34($sp)
/* 0041F574 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041F578 24040013 */  li    $a0, 19
/* 0041F57C 02202825 */  move  $a1, $s1
/* 0041F580 8F998224 */  lw    $t9, %call16(emit_rll)($gp)
/* 0041F584 02003025 */  move  $a2, $s0
/* 0041F588 0320F809 */  jalr  $t9
/* 0041F58C 00000000 */   nop   
/* 0041F590 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041F594 24040017 */  li    $a0, 23
/* 0041F598 8FA50034 */  lw    $a1, 0x34($sp)
/* 0041F59C 8F99822C */  lw    $t9, %call16(emit_rill)($gp)
/* 0041F5A0 8FA6004C */  lw    $a2, 0x4c($sp)
/* 0041F5A4 02003825 */  move  $a3, $s0
/* 0041F5A8 0320F809 */  jalr  $t9
/* 0041F5AC 00000000 */   nop   
/* 0041F5B0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041F5B4 24040049 */  li    $a0, 73
/* 0041F5B8 02202825 */  move  $a1, $s1
/* 0041F5BC 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041F5C0 02403025 */  move  $a2, $s2
/* 0041F5C4 8FA70050 */  lw    $a3, 0x50($sp)
/* 0041F5C8 0320F809 */  jalr  $t9
/* 0041F5CC AFA00010 */   sw    $zero, 0x10($sp)
/* 0041F5D0 1000001E */  b     .L0041F64C
/* 0041F5D4 8FBC0028 */   lw    $gp, 0x28($sp)
.L0041F5D8:
/* 0041F5D8 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041F5DC 02403025 */  move  $a2, $s2
/* 0041F5E0 8FA7004C */  lw    $a3, 0x4c($sp)
/* 0041F5E4 0320F809 */  jalr  $t9
/* 0041F5E8 AFA00010 */   sw    $zero, 0x10($sp)
/* 0041F5EC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041F5F0 24040013 */  li    $a0, 19
/* 0041F5F4 02202825 */  move  $a1, $s1
/* 0041F5F8 8F998224 */  lw    $t9, %call16(emit_rll)($gp)
/* 0041F5FC 02003025 */  move  $a2, $s0
/* 0041F600 0320F809 */  jalr  $t9
/* 0041F604 00000000 */   nop   
/* 0041F608 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041F60C 24040017 */  li    $a0, 23
/* 0041F610 02402825 */  move  $a1, $s2
/* 0041F614 8F99822C */  lw    $t9, %call16(emit_rill)($gp)
/* 0041F618 8FA6004C */  lw    $a2, 0x4c($sp)
/* 0041F61C 02003825 */  move  $a3, $s0
/* 0041F620 0320F809 */  jalr  $t9
/* 0041F624 00000000 */   nop   
/* 0041F628 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041F62C 24040049 */  li    $a0, 73
/* 0041F630 02202825 */  move  $a1, $s1
/* 0041F634 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041F638 26460001 */  addiu $a2, $s2, 1
/* 0041F63C 8FA70050 */  lw    $a3, 0x50($sp)
/* 0041F640 0320F809 */  jalr  $t9
/* 0041F644 AFA00010 */   sw    $zero, 0x10($sp)
/* 0041F648 8FBC0028 */  lw    $gp, 0x28($sp)
.L0041F64C:
/* 0041F64C 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 0041F650 02002025 */  move  $a0, $s0
/* 0041F654 0320F809 */  jalr  $t9
/* 0041F658 00000000 */   nop   
/* 0041F65C 8FBF002C */  lw    $ra, 0x2c($sp)
/* 0041F660 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041F664 8FB0001C */  lw    $s0, 0x1c($sp)
/* 0041F668 8FB10020 */  lw    $s1, 0x20($sp)
/* 0041F66C 8FB20024 */  lw    $s2, 0x24($sp)
/* 0041F670 03E00008 */  jr    $ra
/* 0041F674 27BD0040 */   addiu $sp, $sp, 0x40

    .type func_0041F678, @function
func_0041F678:
    # 0041FC98 dw_emit_rri
/* 0041F678 3C1C0FC0 */  .cpload $t9
/* 0041F67C 279C03D8 */  
/* 0041F680 0399E021 */  
/* 0041F684 27BDFFC0 */  addiu $sp, $sp, -0x40
/* 0041F688 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 0041F68C AFBF002C */  sw    $ra, 0x2c($sp)
/* 0041F690 AFB20024 */  sw    $s2, 0x24($sp)
/* 0041F694 AFB10020 */  sw    $s1, 0x20($sp)
/* 0041F698 30B100FF */  andi  $s1, $a1, 0xff
/* 0041F69C 30D200FF */  andi  $s2, $a2, 0xff
/* 0041F6A0 AFBC0028 */  sw    $gp, 0x28($sp)
/* 0041F6A4 AFB0001C */  sw    $s0, 0x1c($sp)
/* 0041F6A8 AFA40040 */  sw    $a0, 0x40($sp)
/* 0041F6AC AFA50044 */  sw    $a1, 0x44($sp)
/* 0041F6B0 AFA60048 */  sw    $a2, 0x48($sp)
/* 0041F6B4 0320F809 */  jalr  $t9
/* 0041F6B8 AFA7004C */   sw    $a3, 0x4c($sp)
/* 0041F6BC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041F6C0 00408025 */  move  $s0, $v0
/* 0041F6C4 26460001 */  addiu $a2, $s2, 1
/* 0041F6C8 8F8E898C */  lw     $t6, %got(lsb_first)($gp)
/* 0041F6CC 8FA7004C */  lw    $a3, 0x4c($sp)
/* 0041F6D0 2404004A */  li    $a0, 74
/* 0041F6D4 91CE0000 */  lbu   $t6, ($t6)
/* 0041F6D8 02202825 */  move  $a1, $s1
/* 0041F6DC 11C00020 */  beqz  $t6, .L0041F760
/* 0041F6E0 00000000 */   nop   
/* 0041F6E4 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041F6E8 2404004A */  li    $a0, 74
/* 0041F6EC 02202825 */  move  $a1, $s1
/* 0041F6F0 AFA00010 */  sw    $zero, 0x10($sp)
/* 0041F6F4 0320F809 */  jalr  $t9
/* 0041F6F8 AFA60034 */   sw    $a2, 0x34($sp)
/* 0041F6FC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041F700 24040013 */  li    $a0, 19
/* 0041F704 02202825 */  move  $a1, $s1
/* 0041F708 8F998224 */  lw    $t9, %call16(emit_rll)($gp)
/* 0041F70C 02003025 */  move  $a2, $s0
/* 0041F710 0320F809 */  jalr  $t9
/* 0041F714 00000000 */   nop   
/* 0041F718 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041F71C 24040017 */  li    $a0, 23
/* 0041F720 8FA50034 */  lw    $a1, 0x34($sp)
/* 0041F724 8F99822C */  lw    $t9, %call16(emit_rill)($gp)
/* 0041F728 8FA6004C */  lw    $a2, 0x4c($sp)
/* 0041F72C 02003825 */  move  $a3, $s0
/* 0041F730 0320F809 */  jalr  $t9
/* 0041F734 00000000 */   nop   
/* 0041F738 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041F73C 2404004B */  li    $a0, 75
/* 0041F740 02202825 */  move  $a1, $s1
/* 0041F744 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041F748 02403025 */  move  $a2, $s2
/* 0041F74C 8FA70050 */  lw    $a3, 0x50($sp)
/* 0041F750 0320F809 */  jalr  $t9
/* 0041F754 AFA00010 */   sw    $zero, 0x10($sp)
/* 0041F758 1000001E */  b     .L0041F7D4
/* 0041F75C 8FBC0028 */   lw    $gp, 0x28($sp)
.L0041F760:
/* 0041F760 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041F764 02403025 */  move  $a2, $s2
/* 0041F768 8FA7004C */  lw    $a3, 0x4c($sp)
/* 0041F76C 0320F809 */  jalr  $t9
/* 0041F770 AFA00010 */   sw    $zero, 0x10($sp)
/* 0041F774 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041F778 24040013 */  li    $a0, 19
/* 0041F77C 02202825 */  move  $a1, $s1
/* 0041F780 8F998224 */  lw    $t9, %call16(emit_rll)($gp)
/* 0041F784 02003025 */  move  $a2, $s0
/* 0041F788 0320F809 */  jalr  $t9
/* 0041F78C 00000000 */   nop   
/* 0041F790 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041F794 24040017 */  li    $a0, 23
/* 0041F798 02402825 */  move  $a1, $s2
/* 0041F79C 8F99822C */  lw    $t9, %call16(emit_rill)($gp)
/* 0041F7A0 8FA6004C */  lw    $a2, 0x4c($sp)
/* 0041F7A4 02003825 */  move  $a3, $s0
/* 0041F7A8 0320F809 */  jalr  $t9
/* 0041F7AC 00000000 */   nop   
/* 0041F7B0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041F7B4 2404004B */  li    $a0, 75
/* 0041F7B8 02202825 */  move  $a1, $s1
/* 0041F7BC 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041F7C0 26460001 */  addiu $a2, $s2, 1
/* 0041F7C4 8FA70050 */  lw    $a3, 0x50($sp)
/* 0041F7C8 0320F809 */  jalr  $t9
/* 0041F7CC AFA00010 */   sw    $zero, 0x10($sp)
/* 0041F7D0 8FBC0028 */  lw    $gp, 0x28($sp)
.L0041F7D4:
/* 0041F7D4 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 0041F7D8 02002025 */  move  $a0, $s0
/* 0041F7DC 0320F809 */  jalr  $t9
/* 0041F7E0 00000000 */   nop   
/* 0041F7E4 8FBF002C */  lw    $ra, 0x2c($sp)
/* 0041F7E8 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041F7EC 8FB0001C */  lw    $s0, 0x1c($sp)
/* 0041F7F0 8FB10020 */  lw    $s1, 0x20($sp)
/* 0041F7F4 8FB20024 */  lw    $s2, 0x24($sp)
/* 0041F7F8 03E00008 */  jr    $ra
/* 0041F7FC 27BD0040 */   addiu $sp, $sp, 0x40

    .type func_0041F800, @function
func_0041F800:
    # 0041FC98 dw_emit_rri
/* 0041F800 3C1C0FC0 */  .cpload $t9
/* 0041F804 279C0250 */  
/* 0041F808 0399E021 */  
/* 0041F80C 27BDFFC0 */  addiu $sp, $sp, -0x40
/* 0041F810 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 0041F814 AFBF002C */  sw    $ra, 0x2c($sp)
/* 0041F818 AFB20024 */  sw    $s2, 0x24($sp)
/* 0041F81C AFB10020 */  sw    $s1, 0x20($sp)
/* 0041F820 30B100FF */  andi  $s1, $a1, 0xff
/* 0041F824 30D200FF */  andi  $s2, $a2, 0xff
/* 0041F828 AFBC0028 */  sw    $gp, 0x28($sp)
/* 0041F82C AFB0001C */  sw    $s0, 0x1c($sp)
/* 0041F830 AFA40040 */  sw    $a0, 0x40($sp)
/* 0041F834 AFA50044 */  sw    $a1, 0x44($sp)
/* 0041F838 AFA60048 */  sw    $a2, 0x48($sp)
/* 0041F83C 0320F809 */  jalr  $t9
/* 0041F840 AFA7004C */   sw    $a3, 0x4c($sp)
/* 0041F844 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041F848 00408025 */  move  $s0, $v0
/* 0041F84C 26460001 */  addiu $a2, $s2, 1
/* 0041F850 8F8E898C */  lw     $t6, %got(lsb_first)($gp)
/* 0041F854 8FA7004C */  lw    $a3, 0x4c($sp)
/* 0041F858 24040050 */  li    $a0, 80
/* 0041F85C 91CE0000 */  lbu   $t6, ($t6)
/* 0041F860 02202825 */  move  $a1, $s1
/* 0041F864 11C00020 */  beqz  $t6, .L0041F8E8
/* 0041F868 00000000 */   nop   
/* 0041F86C 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041F870 24040050 */  li    $a0, 80
/* 0041F874 02202825 */  move  $a1, $s1
/* 0041F878 AFA00010 */  sw    $zero, 0x10($sp)
/* 0041F87C 0320F809 */  jalr  $t9
/* 0041F880 AFA60034 */   sw    $a2, 0x34($sp)
/* 0041F884 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041F888 24040013 */  li    $a0, 19
/* 0041F88C 02202825 */  move  $a1, $s1
/* 0041F890 8F998224 */  lw    $t9, %call16(emit_rll)($gp)
/* 0041F894 02003025 */  move  $a2, $s0
/* 0041F898 0320F809 */  jalr  $t9
/* 0041F89C 00000000 */   nop   
/* 0041F8A0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041F8A4 24040011 */  li    $a0, 17
/* 0041F8A8 8FA50034 */  lw    $a1, 0x34($sp)
/* 0041F8AC 8F99822C */  lw    $t9, %call16(emit_rill)($gp)
/* 0041F8B0 8FA6004C */  lw    $a2, 0x4c($sp)
/* 0041F8B4 02003825 */  move  $a3, $s0
/* 0041F8B8 0320F809 */  jalr  $t9
/* 0041F8BC 00000000 */   nop   
/* 0041F8C0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041F8C4 2404004E */  li    $a0, 78
/* 0041F8C8 02202825 */  move  $a1, $s1
/* 0041F8CC 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041F8D0 02403025 */  move  $a2, $s2
/* 0041F8D4 8FA70050 */  lw    $a3, 0x50($sp)
/* 0041F8D8 0320F809 */  jalr  $t9
/* 0041F8DC AFA00010 */   sw    $zero, 0x10($sp)
/* 0041F8E0 1000001E */  b     .L0041F95C
/* 0041F8E4 8FBC0028 */   lw    $gp, 0x28($sp)
.L0041F8E8:
/* 0041F8E8 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041F8EC 02403025 */  move  $a2, $s2
/* 0041F8F0 8FA7004C */  lw    $a3, 0x4c($sp)
/* 0041F8F4 0320F809 */  jalr  $t9
/* 0041F8F8 AFA00010 */   sw    $zero, 0x10($sp)
/* 0041F8FC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041F900 24040013 */  li    $a0, 19
/* 0041F904 02202825 */  move  $a1, $s1
/* 0041F908 8F998224 */  lw    $t9, %call16(emit_rll)($gp)
/* 0041F90C 02003025 */  move  $a2, $s0
/* 0041F910 0320F809 */  jalr  $t9
/* 0041F914 00000000 */   nop   
/* 0041F918 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041F91C 24040011 */  li    $a0, 17
/* 0041F920 02402825 */  move  $a1, $s2
/* 0041F924 8F99822C */  lw    $t9, %call16(emit_rill)($gp)
/* 0041F928 8FA6004C */  lw    $a2, 0x4c($sp)
/* 0041F92C 02003825 */  move  $a3, $s0
/* 0041F930 0320F809 */  jalr  $t9
/* 0041F934 00000000 */   nop   
/* 0041F938 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041F93C 2404004E */  li    $a0, 78
/* 0041F940 02202825 */  move  $a1, $s1
/* 0041F944 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041F948 26460001 */  addiu $a2, $s2, 1
/* 0041F94C 8FA70050 */  lw    $a3, 0x50($sp)
/* 0041F950 0320F809 */  jalr  $t9
/* 0041F954 AFA00010 */   sw    $zero, 0x10($sp)
/* 0041F958 8FBC0028 */  lw    $gp, 0x28($sp)
.L0041F95C:
/* 0041F95C 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 0041F960 02002025 */  move  $a0, $s0
/* 0041F964 0320F809 */  jalr  $t9
/* 0041F968 00000000 */   nop   
/* 0041F96C 8FBF002C */  lw    $ra, 0x2c($sp)
/* 0041F970 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041F974 8FB0001C */  lw    $s0, 0x1c($sp)
/* 0041F978 8FB10020 */  lw    $s1, 0x20($sp)
/* 0041F97C 8FB20024 */  lw    $s2, 0x24($sp)
/* 0041F980 03E00008 */  jr    $ra
/* 0041F984 27BD0040 */   addiu $sp, $sp, 0x40

    .type func_0041F988, @function
func_0041F988:
    # 0041FC98 dw_emit_rri
/* 0041F988 3C1C0FC0 */  .cpload $t9
/* 0041F98C 279C00C8 */  
/* 0041F990 0399E021 */  
/* 0041F994 27BDFFC0 */  addiu $sp, $sp, -0x40
/* 0041F998 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 0041F99C AFBF002C */  sw    $ra, 0x2c($sp)
/* 0041F9A0 AFB20024 */  sw    $s2, 0x24($sp)
/* 0041F9A4 AFB10020 */  sw    $s1, 0x20($sp)
/* 0041F9A8 30B100FF */  andi  $s1, $a1, 0xff
/* 0041F9AC 30D200FF */  andi  $s2, $a2, 0xff
/* 0041F9B0 AFBC0028 */  sw    $gp, 0x28($sp)
/* 0041F9B4 AFB0001C */  sw    $s0, 0x1c($sp)
/* 0041F9B8 AFA40040 */  sw    $a0, 0x40($sp)
/* 0041F9BC AFA50044 */  sw    $a1, 0x44($sp)
/* 0041F9C0 AFA60048 */  sw    $a2, 0x48($sp)
/* 0041F9C4 0320F809 */  jalr  $t9
/* 0041F9C8 AFA7004C */   sw    $a3, 0x4c($sp)
/* 0041F9CC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041F9D0 00408025 */  move  $s0, $v0
/* 0041F9D4 26460001 */  addiu $a2, $s2, 1
/* 0041F9D8 8F8E898C */  lw     $t6, %got(lsb_first)($gp)
/* 0041F9DC 8FA7004C */  lw    $a3, 0x4c($sp)
/* 0041F9E0 24040050 */  li    $a0, 80
/* 0041F9E4 91CE0000 */  lbu   $t6, ($t6)
/* 0041F9E8 02202825 */  move  $a1, $s1
/* 0041F9EC 11C00020 */  beqz  $t6, .L0041FA70
/* 0041F9F0 00000000 */   nop   
/* 0041F9F4 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041F9F8 24040050 */  li    $a0, 80
/* 0041F9FC 02202825 */  move  $a1, $s1
/* 0041FA00 AFA00010 */  sw    $zero, 0x10($sp)
/* 0041FA04 0320F809 */  jalr  $t9
/* 0041FA08 AFA60034 */   sw    $a2, 0x34($sp)
/* 0041FA0C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041FA10 24040013 */  li    $a0, 19
/* 0041FA14 02202825 */  move  $a1, $s1
/* 0041FA18 8F998224 */  lw    $t9, %call16(emit_rll)($gp)
/* 0041FA1C 02003025 */  move  $a2, $s0
/* 0041FA20 0320F809 */  jalr  $t9
/* 0041FA24 00000000 */   nop   
/* 0041FA28 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041FA2C 24040011 */  li    $a0, 17
/* 0041FA30 8FA50034 */  lw    $a1, 0x34($sp)
/* 0041FA34 8F99822C */  lw    $t9, %call16(emit_rill)($gp)
/* 0041FA38 8FA6004C */  lw    $a2, 0x4c($sp)
/* 0041FA3C 02003825 */  move  $a3, $s0
/* 0041FA40 0320F809 */  jalr  $t9
/* 0041FA44 00000000 */   nop   
/* 0041FA48 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041FA4C 24040051 */  li    $a0, 81
/* 0041FA50 02202825 */  move  $a1, $s1
/* 0041FA54 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041FA58 02403025 */  move  $a2, $s2
/* 0041FA5C 8FA70050 */  lw    $a3, 0x50($sp)
/* 0041FA60 0320F809 */  jalr  $t9
/* 0041FA64 AFA00010 */   sw    $zero, 0x10($sp)
/* 0041FA68 1000001E */  b     .L0041FAE4
/* 0041FA6C 8FBC0028 */   lw    $gp, 0x28($sp)
.L0041FA70:
/* 0041FA70 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041FA74 02403025 */  move  $a2, $s2
/* 0041FA78 8FA7004C */  lw    $a3, 0x4c($sp)
/* 0041FA7C 0320F809 */  jalr  $t9
/* 0041FA80 AFA00010 */   sw    $zero, 0x10($sp)
/* 0041FA84 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041FA88 24040013 */  li    $a0, 19
/* 0041FA8C 02202825 */  move  $a1, $s1
/* 0041FA90 8F998224 */  lw    $t9, %call16(emit_rll)($gp)
/* 0041FA94 02003025 */  move  $a2, $s0
/* 0041FA98 0320F809 */  jalr  $t9
/* 0041FA9C 00000000 */   nop   
/* 0041FAA0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041FAA4 24040011 */  li    $a0, 17
/* 0041FAA8 02402825 */  move  $a1, $s2
/* 0041FAAC 8F99822C */  lw    $t9, %call16(emit_rill)($gp)
/* 0041FAB0 8FA6004C */  lw    $a2, 0x4c($sp)
/* 0041FAB4 02003825 */  move  $a3, $s0
/* 0041FAB8 0320F809 */  jalr  $t9
/* 0041FABC 00000000 */   nop   
/* 0041FAC0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041FAC4 24040051 */  li    $a0, 81
/* 0041FAC8 02202825 */  move  $a1, $s1
/* 0041FACC 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041FAD0 26460001 */  addiu $a2, $s2, 1
/* 0041FAD4 8FA70050 */  lw    $a3, 0x50($sp)
/* 0041FAD8 0320F809 */  jalr  $t9
/* 0041FADC AFA00010 */   sw    $zero, 0x10($sp)
/* 0041FAE0 8FBC0028 */  lw    $gp, 0x28($sp)
.L0041FAE4:
/* 0041FAE4 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 0041FAE8 02002025 */  move  $a0, $s0
/* 0041FAEC 0320F809 */  jalr  $t9
/* 0041FAF0 00000000 */   nop   
/* 0041FAF4 8FBF002C */  lw    $ra, 0x2c($sp)
/* 0041FAF8 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041FAFC 8FB0001C */  lw    $s0, 0x1c($sp)
/* 0041FB00 8FB10020 */  lw    $s1, 0x20($sp)
/* 0041FB04 8FB20024 */  lw    $s2, 0x24($sp)
/* 0041FB08 03E00008 */  jr    $ra
/* 0041FB0C 27BD0040 */   addiu $sp, $sp, 0x40

    .type func_0041FB10, @function
func_0041FB10:
    # 0041FC98 dw_emit_rri
/* 0041FB10 3C1C0FC0 */  .cpload $t9
/* 0041FB14 279CFF40 */  
/* 0041FB18 0399E021 */  
/* 0041FB1C 27BDFFC0 */  addiu $sp, $sp, -0x40
/* 0041FB20 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 0041FB24 AFBF002C */  sw    $ra, 0x2c($sp)
/* 0041FB28 AFB20024 */  sw    $s2, 0x24($sp)
/* 0041FB2C AFB10020 */  sw    $s1, 0x20($sp)
/* 0041FB30 30B100FF */  andi  $s1, $a1, 0xff
/* 0041FB34 30D200FF */  andi  $s2, $a2, 0xff
/* 0041FB38 AFBC0028 */  sw    $gp, 0x28($sp)
/* 0041FB3C AFB0001C */  sw    $s0, 0x1c($sp)
/* 0041FB40 AFA40040 */  sw    $a0, 0x40($sp)
/* 0041FB44 AFA50044 */  sw    $a1, 0x44($sp)
/* 0041FB48 AFA60048 */  sw    $a2, 0x48($sp)
/* 0041FB4C 0320F809 */  jalr  $t9
/* 0041FB50 AFA7004C */   sw    $a3, 0x4c($sp)
/* 0041FB54 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041FB58 00408025 */  move  $s0, $v0
/* 0041FB5C 26460001 */  addiu $a2, $s2, 1
/* 0041FB60 8F8E898C */  lw     $t6, %got(lsb_first)($gp)
/* 0041FB64 8FA7004C */  lw    $a3, 0x4c($sp)
/* 0041FB68 24040051 */  li    $a0, 81
/* 0041FB6C 91CE0000 */  lbu   $t6, ($t6)
/* 0041FB70 02202825 */  move  $a1, $s1
/* 0041FB74 11C00020 */  beqz  $t6, .L0041FBF8
/* 0041FB78 00000000 */   nop   
/* 0041FB7C 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041FB80 24040051 */  li    $a0, 81
/* 0041FB84 02202825 */  move  $a1, $s1
/* 0041FB88 AFA00010 */  sw    $zero, 0x10($sp)
/* 0041FB8C 0320F809 */  jalr  $t9
/* 0041FB90 AFA60034 */   sw    $a2, 0x34($sp)
/* 0041FB94 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041FB98 24040013 */  li    $a0, 19
/* 0041FB9C 02202825 */  move  $a1, $s1
/* 0041FBA0 8F998224 */  lw    $t9, %call16(emit_rll)($gp)
/* 0041FBA4 02003025 */  move  $a2, $s0
/* 0041FBA8 0320F809 */  jalr  $t9
/* 0041FBAC 00000000 */   nop   
/* 0041FBB0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041FBB4 24040012 */  li    $a0, 18
/* 0041FBB8 8FA50034 */  lw    $a1, 0x34($sp)
/* 0041FBBC 8F99822C */  lw    $t9, %call16(emit_rill)($gp)
/* 0041FBC0 8FA6004C */  lw    $a2, 0x4c($sp)
/* 0041FBC4 02003825 */  move  $a3, $s0
/* 0041FBC8 0320F809 */  jalr  $t9
/* 0041FBCC 00000000 */   nop   
/* 0041FBD0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041FBD4 97A40042 */  lhu   $a0, 0x42($sp)
/* 0041FBD8 02202825 */  move  $a1, $s1
/* 0041FBDC 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041FBE0 02403025 */  move  $a2, $s2
/* 0041FBE4 8FA70050 */  lw    $a3, 0x50($sp)
/* 0041FBE8 0320F809 */  jalr  $t9
/* 0041FBEC AFA00010 */   sw    $zero, 0x10($sp)
/* 0041FBF0 1000001E */  b     .L0041FC6C
/* 0041FBF4 8FBC0028 */   lw    $gp, 0x28($sp)
.L0041FBF8:
/* 0041FBF8 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041FBFC 02403025 */  move  $a2, $s2
/* 0041FC00 8FA7004C */  lw    $a3, 0x4c($sp)
/* 0041FC04 0320F809 */  jalr  $t9
/* 0041FC08 AFA00010 */   sw    $zero, 0x10($sp)
/* 0041FC0C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041FC10 24040013 */  li    $a0, 19
/* 0041FC14 02202825 */  move  $a1, $s1
/* 0041FC18 8F998224 */  lw    $t9, %call16(emit_rll)($gp)
/* 0041FC1C 02003025 */  move  $a2, $s0
/* 0041FC20 0320F809 */  jalr  $t9
/* 0041FC24 00000000 */   nop   
/* 0041FC28 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041FC2C 24040012 */  li    $a0, 18
/* 0041FC30 02402825 */  move  $a1, $s2
/* 0041FC34 8F99822C */  lw    $t9, %call16(emit_rill)($gp)
/* 0041FC38 8FA6004C */  lw    $a2, 0x4c($sp)
/* 0041FC3C 02003825 */  move  $a3, $s0
/* 0041FC40 0320F809 */  jalr  $t9
/* 0041FC44 00000000 */   nop   
/* 0041FC48 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041FC4C 97A40042 */  lhu   $a0, 0x42($sp)
/* 0041FC50 02202825 */  move  $a1, $s1
/* 0041FC54 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041FC58 26460001 */  addiu $a2, $s2, 1
/* 0041FC5C 8FA70050 */  lw    $a3, 0x50($sp)
/* 0041FC60 0320F809 */  jalr  $t9
/* 0041FC64 AFA00010 */   sw    $zero, 0x10($sp)
/* 0041FC68 8FBC0028 */  lw    $gp, 0x28($sp)
.L0041FC6C:
/* 0041FC6C 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 0041FC70 02002025 */  move  $a0, $s0
/* 0041FC74 0320F809 */  jalr  $t9
/* 0041FC78 00000000 */   nop   
/* 0041FC7C 8FBF002C */  lw    $ra, 0x2c($sp)
/* 0041FC80 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041FC84 8FB0001C */  lw    $s0, 0x1c($sp)
/* 0041FC88 8FB10020 */  lw    $s1, 0x20($sp)
/* 0041FC8C 8FB20024 */  lw    $s2, 0x24($sp)
/* 0041FC90 03E00008 */  jr    $ra
/* 0041FC94 27BD0040 */   addiu $sp, $sp, 0x40

glabel dw_emit_rri
    .ent dw_emit_rri
    # 0042BDAC eval
/* 0041FC98 3C1C0FC0 */  .cpload $t9
/* 0041FC9C 279CFDB8 */  
/* 0041FCA0 0399E021 */  
/* 0041FCA4 27BDFFC0 */  addiu $sp, $sp, -0x40
/* 0041FCA8 8F8289D8 */  lw     $v0, %got(opcode_arch)($gp)
/* 0041FCAC AFB20024 */  sw    $s2, 0x24($sp)
/* 0041FCB0 AFB10020 */  sw    $s1, 0x20($sp)
/* 0041FCB4 90420000 */  lbu   $v0, ($v0)
/* 0041FCB8 AFB0001C */  sw    $s0, 0x1c($sp)
/* 0041FCBC 3090FFFF */  andi  $s0, $a0, 0xffff
/* 0041FCC0 30B100FF */  andi  $s1, $a1, 0xff
/* 0041FCC4 30D200FF */  andi  $s2, $a2, 0xff
/* 0041FCC8 AFBF002C */  sw    $ra, 0x2c($sp)
/* 0041FCCC AFBC0028 */  sw    $gp, 0x28($sp)
/* 0041FCD0 AFA40040 */  sw    $a0, 0x40($sp)
/* 0041FCD4 AFA50044 */  sw    $a1, 0x44($sp)
/* 0041FCD8 AFA60048 */  sw    $a2, 0x48($sp)
/* 0041FCDC 1440016D */  bnez  $v0, .L00420294
/* 0041FCE0 AFA7004C */   sw    $a3, 0x4c($sp)
/* 0041FCE4 8FAE0054 */  lw    $t6, 0x54($sp)
/* 0041FCE8 3C010501 */  lui   $at, 0x501
/* 0041FCEC 91CF0021 */  lbu   $t7, 0x21($t6)
/* 0041FCF0 31F8001F */  andi  $t8, $t7, 0x1f
/* 0041FCF4 2F190020 */  sltiu $t9, $t8, 0x20
/* 0041FCF8 00194023 */  negu  $t0, $t9
/* 0041FCFC 01014824 */  and   $t1, $t0, $at
/* 0041FD00 03095004 */  sllv  $t2, $t1, $t8
/* 0041FD04 05410163 */  bgez  $t2, .L00420294
/* 0041FD08 2E010041 */   sltiu $at, $s0, 0x41
/* 0041FD0C 1420013F */  bnez  $at, .L0042020C
/* 0041FD10 2E01005A */   sltiu $at, $s0, 0x5a
/* 0041FD14 14200155 */  bnez  $at, .L0042026C
/* 0041FD18 2618FFB9 */   addiu $t8, $s0, -0x47
/* 0041FD1C 260BFF12 */  addiu $t3, $s0, -0xee
/* 0041FD20 2D610002 */  sltiu $at, $t3, 2
/* 0041FD24 10200130 */  beqz  $at, .L004201E8
/* 0041FD28 00000000 */   nop   
/* 0041FD2C 8F818038 */  lw    $at, %got(jtbl_10009824)($gp)
/* 0041FD30 000B5880 */  sll   $t3, $t3, 2
/* 0041FD34 002B0821 */  addu  $at, $at, $t3
/* 0041FD38 8C2B9824 */  lw    $t3, %lo(jtbl_10009824)($at)
/* 0041FD3C 017C5821 */  addu  $t3, $t3, $gp
/* 0041FD40 01600008 */  jr    $t3
/* 0041FD44 00000000 */   nop   
.L0041FD48:
/* 0041FD48 8F8C898C */  lw     $t4, %got(lsb_first)($gp)
/* 0041FD4C 02002025 */  move  $a0, $s0
/* 0041FD50 02202825 */  move  $a1, $s1
/* 0041FD54 918C0000 */  lbu   $t4, ($t4)
/* 0041FD58 8FAD004C */  lw    $t5, 0x4c($sp)
/* 0041FD5C 11800019 */  beqz  $t4, .L0041FDC4
/* 0041FD60 00000000 */   nop   
/* 0041FD64 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041FD68 02403025 */  move  $a2, $s2
/* 0041FD6C 8FA70050 */  lw    $a3, 0x50($sp)
/* 0041FD70 0320F809 */  jalr  $t9
/* 0041FD74 AFA00010 */   sw    $zero, 0x10($sp)
/* 0041FD78 8FA7004C */  lw    $a3, 0x4c($sp)
/* 0041FD7C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041FD80 02002025 */  move  $a0, $s0
/* 0041FD84 14E00008 */  bnez  $a3, .L0041FDA8
/* 0041FD88 00000000 */   nop   
/* 0041FD8C 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 0041FD90 24040031 */  li    $a0, 49
/* 0041FD94 26250001 */  addiu $a1, $s1, 1
/* 0041FD98 0320F809 */  jalr  $t9
/* 0041FD9C 00003025 */   move  $a2, $zero
/* 0041FDA0 10000169 */  b     .L00420348
/* 0041FDA4 8FBC0028 */   lw    $gp, 0x28($sp)
.L0041FDA8:
/* 0041FDA8 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041FDAC 26250001 */  addiu $a1, $s1, 1
/* 0041FDB0 26460001 */  addiu $a2, $s2, 1
/* 0041FDB4 0320F809 */  jalr  $t9
/* 0041FDB8 AFA00010 */   sw    $zero, 0x10($sp)
/* 0041FDBC 10000162 */  b     .L00420348
/* 0041FDC0 8FBC0028 */   lw    $gp, 0x28($sp)
.L0041FDC4:
/* 0041FDC4 15A00008 */  bnez  $t5, .L0041FDE8
/* 0041FDC8 02002025 */   move  $a0, $s0
/* 0041FDCC 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 0041FDD0 24040031 */  li    $a0, 49
/* 0041FDD4 02202825 */  move  $a1, $s1
/* 0041FDD8 0320F809 */  jalr  $t9
/* 0041FDDC 00003025 */   move  $a2, $zero
/* 0041FDE0 10000008 */  b     .L0041FE04
/* 0041FDE4 8FBC0028 */   lw    $gp, 0x28($sp)
.L0041FDE8:
/* 0041FDE8 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041FDEC 02202825 */  move  $a1, $s1
/* 0041FDF0 02403025 */  move  $a2, $s2
/* 0041FDF4 8FA7004C */  lw    $a3, 0x4c($sp)
/* 0041FDF8 0320F809 */  jalr  $t9
/* 0041FDFC AFA00010 */   sw    $zero, 0x10($sp)
/* 0041FE00 8FBC0028 */  lw    $gp, 0x28($sp)
.L0041FE04:
/* 0041FE04 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041FE08 02002025 */  move  $a0, $s0
/* 0041FE0C 26250001 */  addiu $a1, $s1, 1
/* 0041FE10 26460001 */  addiu $a2, $s2, 1
/* 0041FE14 8FA70050 */  lw    $a3, 0x50($sp)
/* 0041FE18 0320F809 */  jalr  $t9
/* 0041FE1C AFA00010 */   sw    $zero, 0x10($sp)
/* 0041FE20 10000149 */  b     .L00420348
/* 0041FE24 8FBC0028 */   lw    $gp, 0x28($sp)
.L0041FE28:
/* 0041FE28 8F8E898C */  lw     $t6, %got(lsb_first)($gp)
/* 0041FE2C 02002025 */  move  $a0, $s0
/* 0041FE30 02202825 */  move  $a1, $s1
/* 0041FE34 91CE0000 */  lbu   $t6, ($t6)
/* 0041FE38 8FAF004C */  lw    $t7, 0x4c($sp)
/* 0041FE3C 11C00019 */  beqz  $t6, .L0041FEA4
/* 0041FE40 00000000 */   nop   
/* 0041FE44 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041FE48 02403025 */  move  $a2, $s2
/* 0041FE4C 8FA70050 */  lw    $a3, 0x50($sp)
/* 0041FE50 0320F809 */  jalr  $t9
/* 0041FE54 AFA00010 */   sw    $zero, 0x10($sp)
/* 0041FE58 8FA7004C */  lw    $a3, 0x4c($sp)
/* 0041FE5C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041FE60 02002025 */  move  $a0, $s0
/* 0041FE64 14E00008 */  bnez  $a3, .L0041FE88
/* 0041FE68 00000000 */   nop   
/* 0041FE6C 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 0041FE70 24040031 */  li    $a0, 49
/* 0041FE74 26250001 */  addiu $a1, $s1, 1
/* 0041FE78 0320F809 */  jalr  $t9
/* 0041FE7C 26460001 */   addiu $a2, $s2, 1
/* 0041FE80 10000131 */  b     .L00420348
/* 0041FE84 8FBC0028 */   lw    $gp, 0x28($sp)
.L0041FE88:
/* 0041FE88 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041FE8C 26250001 */  addiu $a1, $s1, 1
/* 0041FE90 26460001 */  addiu $a2, $s2, 1
/* 0041FE94 0320F809 */  jalr  $t9
/* 0041FE98 AFA00010 */   sw    $zero, 0x10($sp)
/* 0041FE9C 1000012A */  b     .L00420348
/* 0041FEA0 8FBC0028 */   lw    $gp, 0x28($sp)
.L0041FEA4:
/* 0041FEA4 15E00008 */  bnez  $t7, .L0041FEC8
/* 0041FEA8 02002025 */   move  $a0, $s0
/* 0041FEAC 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 0041FEB0 24040031 */  li    $a0, 49
/* 0041FEB4 02202825 */  move  $a1, $s1
/* 0041FEB8 0320F809 */  jalr  $t9
/* 0041FEBC 02403025 */   move  $a2, $s2
/* 0041FEC0 10000008 */  b     .L0041FEE4
/* 0041FEC4 8FBC0028 */   lw    $gp, 0x28($sp)
.L0041FEC8:
/* 0041FEC8 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041FECC 02202825 */  move  $a1, $s1
/* 0041FED0 02403025 */  move  $a2, $s2
/* 0041FED4 8FA7004C */  lw    $a3, 0x4c($sp)
/* 0041FED8 0320F809 */  jalr  $t9
/* 0041FEDC AFA00010 */   sw    $zero, 0x10($sp)
/* 0041FEE0 8FBC0028 */  lw    $gp, 0x28($sp)
.L0041FEE4:
/* 0041FEE4 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041FEE8 02002025 */  move  $a0, $s0
/* 0041FEEC 26250001 */  addiu $a1, $s1, 1
/* 0041FEF0 26460001 */  addiu $a2, $s2, 1
/* 0041FEF4 8FA70050 */  lw    $a3, 0x50($sp)
/* 0041FEF8 0320F809 */  jalr  $t9
/* 0041FEFC AFA00010 */   sw    $zero, 0x10($sp)
/* 0041FF00 10000111 */  b     .L00420348
/* 0041FF04 8FBC0028 */   lw    $gp, 0x28($sp)
.L0041FF08:
/* 0041FF08 8F99898C */  lw     $t9, %got(lsb_first)($gp)
/* 0041FF0C 02002025 */  move  $a0, $s0
/* 0041FF10 02202825 */  move  $a1, $s1
/* 0041FF14 93390000 */  lbu   $t9, ($t9)
/* 0041FF18 8FA8004C */  lw    $t0, 0x4c($sp)
/* 0041FF1C 13200019 */  beqz  $t9, .L0041FF84
/* 0041FF20 00000000 */   nop   
/* 0041FF24 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041FF28 02403025 */  move  $a2, $s2
/* 0041FF2C 8FA70050 */  lw    $a3, 0x50($sp)
/* 0041FF30 0320F809 */  jalr  $t9
/* 0041FF34 AFA00010 */   sw    $zero, 0x10($sp)
/* 0041FF38 8FA7004C */  lw    $a3, 0x4c($sp)
/* 0041FF3C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041FF40 02002025 */  move  $a0, $s0
/* 0041FF44 14E00008 */  bnez  $a3, .L0041FF68
/* 0041FF48 00000000 */   nop   
/* 0041FF4C 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 0041FF50 2404005A */  li    $a0, 90
/* 0041FF54 26250001 */  addiu $a1, $s1, 1
/* 0041FF58 0320F809 */  jalr  $t9
/* 0041FF5C 26460001 */   addiu $a2, $s2, 1
/* 0041FF60 100000F9 */  b     .L00420348
/* 0041FF64 8FBC0028 */   lw    $gp, 0x28($sp)
.L0041FF68:
/* 0041FF68 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041FF6C 26250001 */  addiu $a1, $s1, 1
/* 0041FF70 26460001 */  addiu $a2, $s2, 1
/* 0041FF74 0320F809 */  jalr  $t9
/* 0041FF78 AFA00010 */   sw    $zero, 0x10($sp)
/* 0041FF7C 100000F2 */  b     .L00420348
/* 0041FF80 8FBC0028 */   lw    $gp, 0x28($sp)
.L0041FF84:
/* 0041FF84 15000008 */  bnez  $t0, .L0041FFA8
/* 0041FF88 02002025 */   move  $a0, $s0
/* 0041FF8C 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 0041FF90 2404005A */  li    $a0, 90
/* 0041FF94 02202825 */  move  $a1, $s1
/* 0041FF98 0320F809 */  jalr  $t9
/* 0041FF9C 02403025 */   move  $a2, $s2
/* 0041FFA0 10000008 */  b     .L0041FFC4
/* 0041FFA4 8FBC0028 */   lw    $gp, 0x28($sp)
.L0041FFA8:
/* 0041FFA8 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041FFAC 02202825 */  move  $a1, $s1
/* 0041FFB0 02403025 */  move  $a2, $s2
/* 0041FFB4 8FA7004C */  lw    $a3, 0x4c($sp)
/* 0041FFB8 0320F809 */  jalr  $t9
/* 0041FFBC AFA00010 */   sw    $zero, 0x10($sp)
/* 0041FFC0 8FBC0028 */  lw    $gp, 0x28($sp)
.L0041FFC4:
/* 0041FFC4 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0041FFC8 02002025 */  move  $a0, $s0
/* 0041FFCC 26250001 */  addiu $a1, $s1, 1
/* 0041FFD0 26460001 */  addiu $a2, $s2, 1
/* 0041FFD4 8FA70050 */  lw    $a3, 0x50($sp)
/* 0041FFD8 0320F809 */  jalr  $t9
/* 0041FFDC AFA00010 */   sw    $zero, 0x10($sp)
/* 0041FFE0 100000D9 */  b     .L00420348
/* 0041FFE4 8FBC0028 */   lw    $gp, 0x28($sp)
.L0041FFE8:
/* 0041FFE8 8F99801C */  lw    $t9, %got(func_0041E800)($gp)
/* 0041FFEC 8FA90050 */  lw    $t1, 0x50($sp)
/* 0041FFF0 02002025 */  move  $a0, $s0
/* 0041FFF4 2739E800 */  addiu $t9, %lo(func_0041E800) # addiu $t9, $t9, -0x1800
/* 0041FFF8 02202825 */  move  $a1, $s1
/* 0041FFFC 02403025 */  move  $a2, $s2
/* 00420000 8FA7004C */  lw    $a3, 0x4c($sp)
/* 00420004 27A20040 */  addiu $v0, $sp, 0x40
/* 00420008 0320F809 */  jalr  $t9
/* 0042000C AFA90010 */   sw    $t1, 0x10($sp)
/* 00420010 100000CD */  b     .L00420348
/* 00420014 8FBC0028 */   lw    $gp, 0x28($sp)
.L00420018:
/* 00420018 8F99801C */  lw    $t9, %got(func_0041EA00)($gp)
/* 0042001C 8FB80050 */  lw    $t8, 0x50($sp)
/* 00420020 02002025 */  move  $a0, $s0
/* 00420024 2739EA00 */  addiu $t9, %lo(func_0041EA00) # addiu $t9, $t9, -0x1600
/* 00420028 02202825 */  move  $a1, $s1
/* 0042002C 02403025 */  move  $a2, $s2
/* 00420030 8FA7004C */  lw    $a3, 0x4c($sp)
/* 00420034 27A20040 */  addiu $v0, $sp, 0x40
/* 00420038 0320F809 */  jalr  $t9
/* 0042003C AFB80010 */   sw    $t8, 0x10($sp)
/* 00420040 100000C1 */  b     .L00420348
/* 00420044 8FBC0028 */   lw    $gp, 0x28($sp)
.L00420048:
/* 00420048 8F99801C */  lw    $t9, %got(func_0041EC08)($gp)
/* 0042004C 02002025 */  move  $a0, $s0
/* 00420050 02202825 */  move  $a1, $s1
/* 00420054 2739EC08 */  addiu $t9, %lo(func_0041EC08) # addiu $t9, $t9, -0x13f8
/* 00420058 02403025 */  move  $a2, $s2
/* 0042005C 8FA70050 */  lw    $a3, 0x50($sp)
/* 00420060 0320F809 */  jalr  $t9
/* 00420064 27A20040 */   addiu $v0, $sp, 0x40
/* 00420068 100000B7 */  b     .L00420348
/* 0042006C 8FBC0028 */   lw    $gp, 0x28($sp)
.L00420070:
/* 00420070 8F99801C */  lw    $t9, %got(func_0041EE78)($gp)
/* 00420074 02002025 */  move  $a0, $s0
/* 00420078 02202825 */  move  $a1, $s1
/* 0042007C 2739EE78 */  addiu $t9, %lo(func_0041EE78) # addiu $t9, $t9, -0x1188
/* 00420080 02403025 */  move  $a2, $s2
/* 00420084 8FA70050 */  lw    $a3, 0x50($sp)
/* 00420088 0320F809 */  jalr  $t9
/* 0042008C 27A20040 */   addiu $v0, $sp, 0x40
/* 00420090 100000AD */  b     .L00420348
/* 00420094 8FBC0028 */   lw    $gp, 0x28($sp)
.L00420098:
/* 00420098 8F99801C */  lw    $t9, %got(func_0041F194)($gp)
/* 0042009C 8FAA0050 */  lw    $t2, 0x50($sp)
/* 004200A0 02002025 */  move  $a0, $s0
/* 004200A4 2739F194 */  addiu $t9, %lo(func_0041F194) # addiu $t9, $t9, -0xe6c
/* 004200A8 02202825 */  move  $a1, $s1
/* 004200AC 02403025 */  move  $a2, $s2
/* 004200B0 8FA7004C */  lw    $a3, 0x4c($sp)
/* 004200B4 27A20040 */  addiu $v0, $sp, 0x40
/* 004200B8 0320F809 */  jalr  $t9
/* 004200BC AFAA0010 */   sw    $t2, 0x10($sp)
/* 004200C0 100000A1 */  b     .L00420348
/* 004200C4 8FBC0028 */   lw    $gp, 0x28($sp)
.L004200C8:
/* 004200C8 8F99801C */  lw    $t9, %got(func_0041F368)($gp)
/* 004200CC 8FAB0050 */  lw    $t3, 0x50($sp)
/* 004200D0 02002025 */  move  $a0, $s0
/* 004200D4 2739F368 */  addiu $t9, %lo(func_0041F368) # addiu $t9, $t9, -0xc98
/* 004200D8 02202825 */  move  $a1, $s1
/* 004200DC 02403025 */  move  $a2, $s2
/* 004200E0 8FA7004C */  lw    $a3, 0x4c($sp)
/* 004200E4 27A20040 */  addiu $v0, $sp, 0x40
/* 004200E8 0320F809 */  jalr  $t9
/* 004200EC AFAB0010 */   sw    $t3, 0x10($sp)
/* 004200F0 10000095 */  b     .L00420348
/* 004200F4 8FBC0028 */   lw    $gp, 0x28($sp)
.L004200F8:
/* 004200F8 8F99801C */  lw    $t9, %got(func_0041F4F0)($gp)
/* 004200FC 8FAC0050 */  lw    $t4, 0x50($sp)
/* 00420100 02002025 */  move  $a0, $s0
/* 00420104 2739F4F0 */  addiu $t9, %lo(func_0041F4F0) # addiu $t9, $t9, -0xb10
/* 00420108 02202825 */  move  $a1, $s1
/* 0042010C 02403025 */  move  $a2, $s2
/* 00420110 8FA7004C */  lw    $a3, 0x4c($sp)
/* 00420114 27A20040 */  addiu $v0, $sp, 0x40
/* 00420118 0320F809 */  jalr  $t9
/* 0042011C AFAC0010 */   sw    $t4, 0x10($sp)
/* 00420120 10000089 */  b     .L00420348
/* 00420124 8FBC0028 */   lw    $gp, 0x28($sp)
.L00420128:
/* 00420128 8F99801C */  lw    $t9, %got(func_0041F678)($gp)
/* 0042012C 8FAD0050 */  lw    $t5, 0x50($sp)
/* 00420130 02002025 */  move  $a0, $s0
/* 00420134 2739F678 */  addiu $t9, %lo(func_0041F678) # addiu $t9, $t9, -0x988
/* 00420138 02202825 */  move  $a1, $s1
/* 0042013C 02403025 */  move  $a2, $s2
/* 00420140 8FA7004C */  lw    $a3, 0x4c($sp)
/* 00420144 27A20040 */  addiu $v0, $sp, 0x40
/* 00420148 0320F809 */  jalr  $t9
/* 0042014C AFAD0010 */   sw    $t5, 0x10($sp)
/* 00420150 1000007D */  b     .L00420348
/* 00420154 8FBC0028 */   lw    $gp, 0x28($sp)
.L00420158:
/* 00420158 8F99801C */  lw    $t9, %got(func_0041FB10)($gp)
/* 0042015C 8FAE0050 */  lw    $t6, 0x50($sp)
/* 00420160 02002025 */  move  $a0, $s0
/* 00420164 2739FB10 */  addiu $t9, %lo(func_0041FB10) # addiu $t9, $t9, -0x4f0
/* 00420168 02202825 */  move  $a1, $s1
/* 0042016C 02403025 */  move  $a2, $s2
/* 00420170 8FA7004C */  lw    $a3, 0x4c($sp)
/* 00420174 27A20040 */  addiu $v0, $sp, 0x40
/* 00420178 0320F809 */  jalr  $t9
/* 0042017C AFAE0010 */   sw    $t6, 0x10($sp)
/* 00420180 10000071 */  b     .L00420348
/* 00420184 8FBC0028 */   lw    $gp, 0x28($sp)
.L00420188:
/* 00420188 8F99801C */  lw    $t9, %got(func_0041F800)($gp)
/* 0042018C 8FAF0050 */  lw    $t7, 0x50($sp)
/* 00420190 02002025 */  move  $a0, $s0
/* 00420194 2739F800 */  addiu $t9, %lo(func_0041F800) # addiu $t9, $t9, -0x800
/* 00420198 02202825 */  move  $a1, $s1
/* 0042019C 02403025 */  move  $a2, $s2
/* 004201A0 8FA7004C */  lw    $a3, 0x4c($sp)
/* 004201A4 27A20040 */  addiu $v0, $sp, 0x40
/* 004201A8 0320F809 */  jalr  $t9
/* 004201AC AFAF0010 */   sw    $t7, 0x10($sp)
/* 004201B0 10000065 */  b     .L00420348
/* 004201B4 8FBC0028 */   lw    $gp, 0x28($sp)
.L004201B8:
/* 004201B8 8FB90050 */  lw    $t9, 0x50($sp)
/* 004201BC 02002025 */  move  $a0, $s0
/* 004201C0 02202825 */  move  $a1, $s1
/* 004201C4 AFB90010 */  sw    $t9, 0x10($sp)
/* 004201C8 8F99801C */  lw    $t9, %got(func_0041F988)($gp)
/* 004201CC 02403025 */  move  $a2, $s2
/* 004201D0 8FA7004C */  lw    $a3, 0x4c($sp)
/* 004201D4 2739F988 */  addiu $t9, %lo(func_0041F988) # addiu $t9, $t9, -0x678
/* 004201D8 0320F809 */  jalr  $t9
/* 004201DC 27A20040 */   addiu $v0, $sp, 0x40
/* 004201E0 10000059 */  b     .L00420348
/* 004201E4 8FBC0028 */   lw    $gp, 0x28($sp)
.L004201E8:
/* 004201E8 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 004201EC 02002025 */  move  $a0, $s0
/* 004201F0 02202825 */  move  $a1, $s1
/* 004201F4 02403025 */  move  $a2, $s2
/* 004201F8 8FA70050 */  lw    $a3, 0x50($sp)
/* 004201FC 0320F809 */  jalr  $t9
/* 00420200 AFA00010 */   sw    $zero, 0x10($sp)
/* 00420204 10000050 */  b     .L00420348
/* 00420208 8FBC0028 */   lw    $gp, 0x28($sp)
.L0042020C:
/* 0042020C 2E010004 */  sltiu $at, $s0, 4
/* 00420210 1020000C */  beqz  $at, .L00420244
/* 00420214 2609FFC1 */   addiu $t1, $s0, -0x3f
/* 00420218 2608FFFF */  addiu $t0, $s0, -1
/* 0042021C 2D010003 */  sltiu $at, $t0, 3
/* 00420220 1020FFF1 */  beqz  $at, .L004201E8
/* 00420224 00000000 */   nop   
/* 00420228 8F818038 */  lw    $at, %got(jtbl_100097C4)($gp)
/* 0042022C 00084080 */  sll   $t0, $t0, 2
/* 00420230 00280821 */  addu  $at, $at, $t0
/* 00420234 8C2897C4 */  lw    $t0, %lo(jtbl_100097C4)($at)
/* 00420238 011C4021 */  addu  $t0, $t0, $gp
/* 0042023C 01000008 */  jr    $t0
/* 00420240 00000000 */   nop   
.L00420244:
/* 00420244 2D210002 */  sltiu $at, $t1, 2
/* 00420248 1020FFE7 */  beqz  $at, .L004201E8
/* 0042024C 00000000 */   nop   
/* 00420250 8F818038 */  lw    $at, %got(jtbl_100097D0)($gp)
/* 00420254 00094880 */  sll   $t1, $t1, 2
/* 00420258 00290821 */  addu  $at, $at, $t1
/* 0042025C 8C2997D0 */  lw    $t1, %lo(jtbl_100097D0)($at)
/* 00420260 013C4821 */  addu  $t1, $t1, $gp
/* 00420264 01200008 */  jr    $t1
/* 00420268 00000000 */   nop   
.L0042026C:
/* 0042026C 2F010013 */  sltiu $at, $t8, 0x13
/* 00420270 1020FFDD */  beqz  $at, .L004201E8
/* 00420274 00000000 */   nop   
/* 00420278 8F818038 */  lw    $at, %got(jtbl_100097D8)($gp)
/* 0042027C 0018C080 */  sll   $t8, $t8, 2
/* 00420280 00380821 */  addu  $at, $at, $t8
/* 00420284 8C3897D8 */  lw    $t8, %lo(jtbl_100097D8)($at)
/* 00420288 031CC021 */  addu  $t8, $t8, $gp
/* 0042028C 03000008 */  jr    $t8
/* 00420290 00000000 */   nop   
.L00420294:
/* 00420294 24010001 */  li    $at, 1
/* 00420298 14410023 */  bne   $v0, $at, .L00420328
/* 0042029C 8FAA004C */   lw    $t2, 0x4c($sp)
/* 004202A0 11400021 */  beqz  $t2, .L00420328
/* 004202A4 00002025 */   move  $a0, $zero
/* 004202A8 8F9984FC */  lw    $t9, %call16(get_free_reg)($gp)
/* 004202AC 8FAB0050 */  lw    $t3, 0x50($sp)
/* 004202B0 AFAA0038 */  sw    $t2, 0x38($sp)
/* 004202B4 24050001 */  li    $a1, 1
/* 004202B8 0320F809 */  jalr  $t9
/* 004202BC AFAB003C */   sw    $t3, 0x3c($sp)
/* 004202C0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004202C4 A3A20037 */  sb    $v0, 0x37($sp)
/* 004202C8 304400FF */  andi  $a0, $v0, 0xff
/* 004202CC 8F998510 */  lw    $t9, %call16(free_reg)($gp)
/* 004202D0 0320F809 */  jalr  $t9
/* 004202D4 00000000 */   nop   
/* 004202D8 27AC0038 */  addiu $t4, $sp, 0x38
/* 004202DC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004202E0 8D860000 */  lw    $a2, ($t4)
/* 004202E4 2404014C */  li    $a0, 332
/* 004202E8 8F9981F8 */  lw    $t9, %call16(emit_rii)($gp)
/* 004202EC AFA60008 */  sw    $a2, 8($sp)
/* 004202F0 8D870004 */  lw    $a3, 4($t4)
/* 004202F4 93A50037 */  lbu   $a1, 0x37($sp)
/* 004202F8 0320F809 */  jalr  $t9
/* 004202FC AFA7000C */   sw    $a3, 0xc($sp)
/* 00420300 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00420304 02002025 */  move  $a0, $s0
/* 00420308 02202825 */  move  $a1, $s1
/* 0042030C 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 00420310 02403025 */  move  $a2, $s2
/* 00420314 93A70037 */  lbu   $a3, 0x37($sp)
/* 00420318 0320F809 */  jalr  $t9
/* 0042031C 00000000 */   nop   
/* 00420320 10000009 */  b     .L00420348
/* 00420324 8FBC0028 */   lw    $gp, 0x28($sp)
.L00420328:
/* 00420328 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 0042032C 02002025 */  move  $a0, $s0
/* 00420330 02202825 */  move  $a1, $s1
/* 00420334 02403025 */  move  $a2, $s2
/* 00420338 8FA70050 */  lw    $a3, 0x50($sp)
/* 0042033C 0320F809 */  jalr  $t9
/* 00420340 AFA00010 */   sw    $zero, 0x10($sp)
/* 00420344 8FBC0028 */  lw    $gp, 0x28($sp)
.L00420348:
/* 00420348 8FBF002C */  lw    $ra, 0x2c($sp)
/* 0042034C 8FB0001C */  lw    $s0, 0x1c($sp)
/* 00420350 8FB10020 */  lw    $s1, 0x20($sp)
/* 00420354 8FB20024 */  lw    $s2, 0x24($sp)
/* 00420358 03E00008 */  jr    $ra
/* 0042035C 27BD0040 */   addiu $sp, $sp, 0x40
    .type dw_emit_rri, @function
    .size dw_emit_rri, .-dw_emit_rri
    .end dw_emit_rri

    .type func_00420360, @function
func_00420360:
    # 004206C0 dw_emit_rr
/* 00420360 3C1C0FC0 */  .cpload $t9
/* 00420364 279CF6F0 */  
/* 00420368 0399E021 */  
/* 0042036C 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 00420370 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 00420374 AFB0001C */  sw    $s0, 0x1c($sp)
/* 00420378 30B000FF */  andi  $s0, $a1, 0xff
/* 0042037C AFBF0024 */  sw    $ra, 0x24($sp)
/* 00420380 AFA40030 */  sw    $a0, 0x30($sp)
/* 00420384 AFA50034 */  sw    $a1, 0x34($sp)
/* 00420388 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0042038C AFA60038 */  sw    $a2, 0x38($sp)
/* 00420390 24050006 */  li    $a1, 6
/* 00420394 0320F809 */  jalr  $t9
/* 00420398 24040020 */   li    $a0, 32
/* 0042039C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004203A0 93A6003B */  lbu   $a2, 0x3b($sp)
/* 004203A4 00003825 */  move  $a3, $zero
/* 004203A8 8F8E898C */  lw     $t6, %got(lsb_first)($gp)
/* 004203AC 24040047 */  li    $a0, 71
/* 004203B0 24050001 */  li    $a1, 1
/* 004203B4 91CE0000 */  lbu   $t6, ($t6)
/* 004203B8 24C60001 */  addiu $a2, $a2, 1
/* 004203BC 11C00029 */  beqz  $t6, .L00420464
/* 004203C0 00000000 */   nop   
/* 004203C4 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 004203C8 24040047 */  li    $a0, 71
/* 004203CC 24050001 */  li    $a1, 1
/* 004203D0 93A6003B */  lbu   $a2, 0x3b($sp)
/* 004203D4 0320F809 */  jalr  $t9
/* 004203D8 AFA00010 */   sw    $zero, 0x10($sp)
/* 004203DC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004203E0 240400DB */  li    $a0, 219
/* 004203E4 02002825 */  move  $a1, $s0
/* 004203E8 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 004203EC 93A6003B */  lbu   $a2, 0x3b($sp)
/* 004203F0 0320F809 */  jalr  $t9
/* 004203F4 00000000 */   nop   
/* 004203F8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004203FC 93A6003B */  lbu   $a2, 0x3b($sp)
/* 00420400 26050001 */  addiu $a1, $s0, 1
/* 00420404 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 00420408 AFA50028 */  sw    $a1, 0x28($sp)
/* 0042040C 2404005A */  li    $a0, 90
/* 00420410 0320F809 */  jalr  $t9
/* 00420414 24C60001 */   addiu $a2, $a2, 1
/* 00420418 97AF0032 */  lhu   $t7, 0x32($sp)
/* 0042041C 2401003D */  li    $at, 61
/* 00420420 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00420424 15E10008 */  bne   $t7, $at, .L00420448
/* 00420428 8FA50028 */   lw    $a1, 0x28($sp)
/* 0042042C 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 00420430 24040001 */  li    $a0, 1
/* 00420434 00A03025 */  move  $a2, $a1
/* 00420438 0320F809 */  jalr  $t9
/* 0042043C 24070001 */   li    $a3, 1
/* 00420440 1000002E */  b     .L004204FC
/* 00420444 8FBC0020 */   lw    $gp, 0x20($sp)
.L00420448:
/* 00420448 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 0042044C 24040002 */  li    $a0, 2
/* 00420450 00A03025 */  move  $a2, $a1
/* 00420454 0320F809 */  jalr  $t9
/* 00420458 24070001 */   li    $a3, 1
/* 0042045C 10000027 */  b     .L004204FC
/* 00420460 8FBC0020 */   lw    $gp, 0x20($sp)
.L00420464:
/* 00420464 8F998208 */  lw    $t9, %call16(emit_rri_)($gp)
/* 00420468 00003825 */  move  $a3, $zero
/* 0042046C AFA00010 */  sw    $zero, 0x10($sp)
/* 00420470 0320F809 */  jalr  $t9
/* 00420474 AFA60028 */   sw    $a2, 0x28($sp)
/* 00420478 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0042047C 8FA60028 */  lw    $a2, 0x28($sp)
/* 00420480 240400DB */  li    $a0, 219
/* 00420484 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 00420488 26050001 */  addiu $a1, $s0, 1
/* 0042048C 0320F809 */  jalr  $t9
/* 00420490 00000000 */   nop   
/* 00420494 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00420498 2404005A */  li    $a0, 90
/* 0042049C 02002825 */  move  $a1, $s0
/* 004204A0 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 004204A4 93A6003B */  lbu   $a2, 0x3b($sp)
/* 004204A8 0320F809 */  jalr  $t9
/* 004204AC 00000000 */   nop   
/* 004204B0 97B80032 */  lhu   $t8, 0x32($sp)
/* 004204B4 2401003D */  li    $at, 61
/* 004204B8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004204BC 17010009 */  bne   $t8, $at, .L004204E4
/* 004204C0 24040002 */   li    $a0, 2
/* 004204C4 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 004204C8 24040001 */  li    $a0, 1
/* 004204CC 02002825 */  move  $a1, $s0
/* 004204D0 02003025 */  move  $a2, $s0
/* 004204D4 0320F809 */  jalr  $t9
/* 004204D8 24070001 */   li    $a3, 1
/* 004204DC 10000007 */  b     .L004204FC
/* 004204E0 8FBC0020 */   lw    $gp, 0x20($sp)
.L004204E4:
/* 004204E4 8F998204 */  lw    $t9, %call16(emit_rrr)($gp)
/* 004204E8 02002825 */  move  $a1, $s0
/* 004204EC 02003025 */  move  $a2, $s0
/* 004204F0 0320F809 */  jalr  $t9
/* 004204F4 24070001 */   li    $a3, 1
/* 004204F8 8FBC0020 */  lw    $gp, 0x20($sp)
.L004204FC:
/* 004204FC 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 00420500 24040020 */  li    $a0, 32
/* 00420504 24050005 */  li    $a1, 5
/* 00420508 0320F809 */  jalr  $t9
/* 0042050C 00000000 */   nop   
/* 00420510 8FBF0024 */  lw    $ra, 0x24($sp)
/* 00420514 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00420518 8FB0001C */  lw    $s0, 0x1c($sp)
/* 0042051C 03E00008 */  jr    $ra
/* 00420520 27BD0030 */   addiu $sp, $sp, 0x30

    .type func_00420524, @function
func_00420524:
    # 004206C0 dw_emit_rr
/* 00420524 3C1C0FC0 */  .cpload $t9
/* 00420528 279CF52C */  
/* 0042052C 0399E021 */  
/* 00420530 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00420534 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 00420538 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0042053C AFA40020 */  sw    $a0, 0x20($sp)
/* 00420540 AFA50024 */  sw    $a1, 0x24($sp)
/* 00420544 AFA60028 */  sw    $a2, 0x28($sp)
/* 00420548 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0042054C 93A6002B */  lbu   $a2, 0x2b($sp)
/* 00420550 93A50027 */  lbu   $a1, 0x27($sp)
/* 00420554 0320F809 */  jalr  $t9
/* 00420558 97A40022 */   lhu   $a0, 0x22($sp)
/* 0042055C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00420560 93A50027 */  lbu   $a1, 0x27($sp)
/* 00420564 93A6002B */  lbu   $a2, 0x2b($sp)
/* 00420568 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 0042056C 97A40022 */  lhu   $a0, 0x22($sp)
/* 00420570 24A50001 */  addiu $a1, $a1, 1
/* 00420574 0320F809 */  jalr  $t9
/* 00420578 24C60001 */   addiu $a2, $a2, 1
/* 0042057C 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00420580 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00420584 27BD0020 */  addiu $sp, $sp, 0x20
/* 00420588 03E00008 */  jr    $ra
/* 0042058C 00000000 */   nop   

    .type func_00420590, @function
func_00420590:
    # 004206C0 dw_emit_rr
/* 00420590 3C1C0FC0 */  .cpload $t9
/* 00420594 279CF4C0 */  
/* 00420598 0399E021 */  
/* 0042059C 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 004205A0 8F9982D8 */  lw    $t9, %call16(dw_emit_rr)($gp)
/* 004205A4 AFBF0024 */  sw    $ra, 0x24($sp)
/* 004205A8 AFBC0020 */  sw    $gp, 0x20($sp)
/* 004205AC AFA40038 */  sw    $a0, 0x38($sp)
/* 004205B0 AFA5003C */  sw    $a1, 0x3c($sp)
/* 004205B4 AFA60040 */  sw    $a2, 0x40($sp)
/* 004205B8 8C47000C */  lw    $a3, 0xc($v0)
/* 004205BC 93A60043 */  lbu   $a2, 0x43($sp)
/* 004205C0 93A5003F */  lbu   $a1, 0x3f($sp)
/* 004205C4 24040031 */  li    $a0, 49
/* 004205C8 0320F809 */  jalr  $t9
/* 004205CC AFA7002C */   sw    $a3, 0x2c($sp)
/* 004205D0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004205D4 8F998650 */  lw    $t9, %call16(gen_label_id)($gp)
/* 004205D8 0320F809 */  jalr  $t9
/* 004205DC 00000000 */   nop   
/* 004205E0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004205E4 8FAE002C */  lw    $t6, 0x2c($sp)
/* 004205E8 AFA20030 */  sw    $v0, 0x30($sp)
/* 004205EC 8F9982C4 */  lw    $t9, %call16(emit_branch_rill)($gp)
/* 004205F0 2404000E */  li    $a0, 14
/* 004205F4 93A50043 */  lbu   $a1, 0x43($sp)
/* 004205F8 00003025 */  move  $a2, $zero
/* 004205FC 00003825 */  move  $a3, $zero
/* 00420600 AFA20010 */  sw    $v0, 0x10($sp)
/* 00420604 0320F809 */  jalr  $t9
/* 00420608 AFAE0014 */   sw    $t6, 0x14($sp)
/* 0042060C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00420610 240400DB */  li    $a0, 219
/* 00420614 93A5003F */  lbu   $a1, 0x3f($sp)
/* 00420618 8F9982D8 */  lw    $t9, %call16(dw_emit_rr)($gp)
/* 0042061C 93A60043 */  lbu   $a2, 0x43($sp)
/* 00420620 8FA7002C */  lw    $a3, 0x2c($sp)
/* 00420624 0320F809 */  jalr  $t9
/* 00420628 00000000 */   nop   
/* 0042062C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00420630 8FA40030 */  lw    $a0, 0x30($sp)
/* 00420634 8F998230 */  lw    $t9, %call16(define_label)($gp)
/* 00420638 0320F809 */  jalr  $t9
/* 0042063C 00000000 */   nop   
/* 00420640 8FBF0024 */  lw    $ra, 0x24($sp)
/* 00420644 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00420648 27BD0038 */  addiu $sp, $sp, 0x38
/* 0042064C 03E00008 */  jr    $ra
/* 00420650 00000000 */   nop   

    .type func_00420654, @function
func_00420654:
    # 004206C0 dw_emit_rr
/* 00420654 3C1C0FC0 */  .cpload $t9
/* 00420658 279CF3FC */  
/* 0042065C 0399E021 */  
/* 00420660 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00420664 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 00420668 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0042066C AFA40020 */  sw    $a0, 0x20($sp)
/* 00420670 AFA50024 */  sw    $a1, 0x24($sp)
/* 00420674 AFA60028 */  sw    $a2, 0x28($sp)
/* 00420678 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0042067C 93A6002B */  lbu   $a2, 0x2b($sp)
/* 00420680 93A50027 */  lbu   $a1, 0x27($sp)
/* 00420684 0320F809 */  jalr  $t9
/* 00420688 97A40022 */   lhu   $a0, 0x22($sp)
/* 0042068C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00420690 93A50027 */  lbu   $a1, 0x27($sp)
/* 00420694 93A6002B */  lbu   $a2, 0x2b($sp)
/* 00420698 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 0042069C 97A40022 */  lhu   $a0, 0x22($sp)
/* 004206A0 24A50001 */  addiu $a1, $a1, 1
/* 004206A4 0320F809 */  jalr  $t9
/* 004206A8 24C60001 */   addiu $a2, $a2, 1
/* 004206AC 8FBF001C */  lw    $ra, 0x1c($sp)
/* 004206B0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004206B4 27BD0020 */  addiu $sp, $sp, 0x20
/* 004206B8 03E00008 */  jr    $ra
/* 004206BC 00000000 */   nop   

glabel dw_emit_rr
    .ent dw_emit_rr
    # 00420590 func_00420590
    # 0042BDAC eval
/* 004206C0 3C1C0FC0 */  .cpload $t9
/* 004206C4 279CF390 */  
/* 004206C8 0399E021 */  
/* 004206CC 8F8E89D8 */  lw     $t6, %got(opcode_arch)($gp)
/* 004206D0 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 004206D4 AFBF001C */  sw    $ra, 0x1c($sp)
/* 004206D8 91CE0000 */  lbu   $t6, ($t6)
/* 004206DC AFBC0018 */  sw    $gp, 0x18($sp)
/* 004206E0 AFA40028 */  sw    $a0, 0x28($sp)
/* 004206E4 AFA5002C */  sw    $a1, 0x2c($sp)
/* 004206E8 AFA60030 */  sw    $a2, 0x30($sp)
/* 004206EC 15C0003F */  bnez  $t6, .L004207EC
/* 004206F0 AFA70034 */   sw    $a3, 0x34($sp)
/* 004206F4 90F80021 */  lbu   $t8, 0x21($a3)
/* 004206F8 3C010501 */  lui   $at, 0x501
/* 004206FC 3319001F */  andi  $t9, $t8, 0x1f
/* 00420700 2F280020 */  sltiu $t0, $t9, 0x20
/* 00420704 00084823 */  negu  $t1, $t0
/* 00420708 01215024 */  and   $t2, $t1, $at
/* 0042070C 032A5804 */  sllv  $t3, $t2, $t9
/* 00420710 05610036 */  bgez  $t3, .L004207EC
/* 00420714 2C81003E */   sltiu $at, $a0, 0x3e
/* 00420718 10000022 */  b     .L004207A4
/* 0042071C 00000000 */   nop   
.L00420720:
/* 00420720 8F99801C */  lw    $t9, %got(func_00420360)($gp)
/* 00420724 27A20028 */  addiu $v0, $sp, 0x28
/* 00420728 27390360 */  addiu $t9, %lo(func_00420360) # addiu $t9, $t9, 0x360
/* 0042072C 0320F809 */  jalr  $t9
/* 00420730 00000000 */   nop   
/* 00420734 10000031 */  b     .L004207FC
/* 00420738 8FBC0018 */   lw    $gp, 0x18($sp)
.L0042073C:
/* 0042073C 8F99801C */  lw    $t9, %got(func_00420524)($gp)
/* 00420740 27A20028 */  addiu $v0, $sp, 0x28
/* 00420744 27390524 */  addiu $t9, %lo(func_00420524) # addiu $t9, $t9, 0x524
/* 00420748 0320F809 */  jalr  $t9
/* 0042074C 00000000 */   nop   
/* 00420750 1000002A */  b     .L004207FC
/* 00420754 8FBC0018 */   lw    $gp, 0x18($sp)
.L00420758:
/* 00420758 8F99801C */  lw    $t9, %got(func_00420590)($gp)
/* 0042075C 27A20028 */  addiu $v0, $sp, 0x28
/* 00420760 27390590 */  addiu $t9, %lo(func_00420590) # addiu $t9, $t9, 0x590
/* 00420764 0320F809 */  jalr  $t9
/* 00420768 00000000 */   nop   
/* 0042076C 10000023 */  b     .L004207FC
/* 00420770 8FBC0018 */   lw    $gp, 0x18($sp)
.L00420774:
/* 00420774 8F99801C */  lw    $t9, %got(func_00420654)($gp)
/* 00420778 27A20028 */  addiu $v0, $sp, 0x28
/* 0042077C 27390654 */  addiu $t9, %lo(func_00420654) # addiu $t9, $t9, 0x654
/* 00420780 0320F809 */  jalr  $t9
/* 00420784 00000000 */   nop   
/* 00420788 1000001C */  b     .L004207FC
/* 0042078C 8FBC0018 */   lw    $gp, 0x18($sp)
.L00420790:
/* 00420790 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 00420794 0320F809 */  jalr  $t9
/* 00420798 00000000 */   nop   
/* 0042079C 10000017 */  b     .L004207FC
/* 004207A0 8FBC0018 */   lw    $gp, 0x18($sp)
.L004207A4:
/* 004207A4 14200008 */  bnez  $at, .L004207C8
/* 004207A8 2401005A */   li    $at, 90
/* 004207AC 1081FFE3 */  beq   $a0, $at, .L0042073C
/* 004207B0 00000000 */   nop   
/* 004207B4 240100DB */  li    $at, 219
/* 004207B8 1081FFD9 */  beq   $a0, $at, .L00420720
/* 004207BC 00000000 */   nop   
/* 004207C0 1000FFF3 */  b     .L00420790
/* 004207C4 00000000 */   nop   
.L004207C8:
/* 004207C8 1080FFE3 */  beqz  $a0, .L00420758
/* 004207CC 24010031 */   li    $at, 49
/* 004207D0 1081FFE8 */  beq   $a0, $at, .L00420774
/* 004207D4 00000000 */   nop   
/* 004207D8 2401003D */  li    $at, 61
/* 004207DC 1081FFD0 */  beq   $a0, $at, .L00420720
/* 004207E0 00000000 */   nop   
/* 004207E4 1000FFEA */  b     .L00420790
/* 004207E8 00000000 */   nop   
.L004207EC:
/* 004207EC 8F998210 */  lw    $t9, %call16(emit_rr)($gp)
/* 004207F0 0320F809 */  jalr  $t9
/* 004207F4 00000000 */   nop   
/* 004207F8 8FBC0018 */  lw    $gp, 0x18($sp)
.L004207FC:
/* 004207FC 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00420800 27BD0028 */  addiu $sp, $sp, 0x28
/* 00420804 03E00008 */  jr    $ra
/* 00420808 00000000 */   nop   
    .type dw_emit_rr, @function
    .size dw_emit_rr, .-dw_emit_rr
    .end dw_emit_rr
)"");
