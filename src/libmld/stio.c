__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
RO_1000F270:
    # 0048D0E0 st_readst
    .asciz "bad magic in hdr. expected 0x%x, got 0x%x\n"

RO_1000F29C:
    # 0048D0E0 st_readst
    .asciz "st_readst: dense number incompatible from versions less than 1.30, please recompile from scratch and use compatible components\n"

RO_1000F31C:
    # 0048E078 func_0048E078
    .asciz "st_read: error seeking\n"

RO_1000F334:
    # 0048E078 func_0048E078
    .asciz "st_read: error reading\n"

RO_1000F34C:
    # 0048E148 st_writebinary
    .asciz "cannot open symbol table file %s\n"

RO_1000F370:
    # 0048E1D8 st_writest
    .asciz "w"

RO_1000F374:
    # 0048E1D8 st_writest
    .asciz "st_writest: cannot write to file number %d\n"

RO_1000F3A0:
    # 0048E1D8 st_writest
    .asciz "cannot write round bytes for lines\n"

RO_1000F3C4:
    # 0048E1D8 st_writest
    .asciz "cannot write round bytes for strings\n"

RO_1000F3EC:
    # 0048E1D8 st_writest
    .asciz "cannot write round bytes for strings\n"

RO_1000F414:
    # 0048E1D8 st_writest
    .asciz "cannot write symbol header\n"

.data
# 10011B40
glabel stmagic
    # 0048E1D8 st_writest
    # 0048F128 st_setstmagic
    .ascii "p\t"
    .type stmagic, @object
    .size stmagic, .-stmagic # 2
    .space 2

# 10011B44
glabel msg_werr
    # 0048E1D8 st_writest
    .ascii "cannot write pfield\x00"
    .type msg_werr, @object
    .size msg_werr, .-msg_werr # 20

# 10011B58
glabel msg_err
    # 0048E1D8 st_writest
    .ascii "cannot write cur table\n\x00"
    .type msg_err, @object
    .size msg_err, .-msg_err # 24


.bss
B_1001C2B0:
    # 0048E1D8 st_writest
    .space 16



.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
glabel st_readbinary
    .ent st_readbinary
    # 00434720 processargs
/* 0048D050 3C1C0FB9 */  .cpload $t9
/* 0048D054 279CD240 */  
/* 0048D058 0399E021 */  
/* 0048D05C 8F99808C */  lw    $t9, %call16(open)($gp)
/* 0048D060 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 0048D064 AFBF0024 */  sw    $ra, 0x24($sp)
/* 0048D068 AFA50034 */  sw    $a1, 0x34($sp)
/* 0048D06C AFBC0020 */  sw    $gp, 0x20($sp)
/* 0048D070 00002825 */  move  $a1, $zero
/* 0048D074 0320F809 */  jalr  $t9
/* 0048D078 00003025 */   move  $a2, $zero
/* 0048D07C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0048D080 04410003 */  bgez  $v0, .L0048D090
/* 0048D084 00402025 */   move  $a0, $v0
/* 0048D088 10000011 */  b     .L0048D0D0
/* 0048D08C 2402FFFE */   li    $v0, -2
.L0048D090:
/* 0048D090 8F99880C */  lw    $t9, %call16(st_readst)($gp)
/* 0048D094 240EFFFF */  li    $t6, -1
/* 0048D098 AFAE0010 */  sw    $t6, 0x10($sp)
/* 0048D09C 83A50037 */  lb    $a1, 0x37($sp)
/* 0048D0A0 00003025 */  move  $a2, $zero
/* 0048D0A4 00003825 */  move  $a3, $zero
/* 0048D0A8 0320F809 */  jalr  $t9
/* 0048D0AC AFA4002C */   sw    $a0, 0x2c($sp)
/* 0048D0B0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0048D0B4 8FA4002C */  lw    $a0, 0x2c($sp)
/* 0048D0B8 AFA20028 */  sw    $v0, 0x28($sp)
/* 0048D0BC 8F998098 */  lw    $t9, %call16(close)($gp)
/* 0048D0C0 0320F809 */  jalr  $t9
/* 0048D0C4 00000000 */   nop   
/* 0048D0C8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0048D0CC 8FA20028 */  lw    $v0, 0x28($sp)
.L0048D0D0:
/* 0048D0D0 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0048D0D4 27BD0030 */  addiu $sp, $sp, 0x30
/* 0048D0D8 03E00008 */  jr    $ra
/* 0048D0DC 00000000 */   nop   
    .type st_readbinary, @function
    .size st_readbinary, .-st_readbinary
    .end st_readbinary

glabel st_readst
    .ent st_readst
    # 0048D050 st_readbinary
/* 0048D0E0 3C1C0FB9 */  .cpload $t9
/* 0048D0E4 279CD1B0 */  
/* 0048D0E8 0399E021 */  
/* 0048D0EC 27BDFEE0 */  addiu $sp, $sp, -0x120
/* 0048D0F0 AFA50124 */  sw    $a1, 0x124($sp)
/* 0048D0F4 00052E00 */  sll   $a1, $a1, 0x18
/* 0048D0F8 00052E03 */  sra   $a1, $a1, 0x18
/* 0048D0FC AFB00020 */  sw    $s0, 0x20($sp)
/* 0048D100 24010072 */  li    $at, 114
/* 0048D104 00E08025 */  move  $s0, $a3
/* 0048D108 AFBF0034 */  sw    $ra, 0x34($sp)
/* 0048D10C AFBC0030 */  sw    $gp, 0x30($sp)
/* 0048D110 AFB3002C */  sw    $s3, 0x2c($sp)
/* 0048D114 AFB20028 */  sw    $s2, 0x28($sp)
/* 0048D118 AFB10024 */  sw    $s1, 0x24($sp)
/* 0048D11C AFA40120 */  sw    $a0, 0x120($sp)
/* 0048D120 AFA60128 */  sw    $a2, 0x128($sp)
/* 0048D124 14A10003 */  bne   $a1, $at, .L0048D134
/* 0048D128 AFA0009C */   sw    $zero, 0x9c($sp)
/* 0048D12C 10000002 */  b     .L0048D138
/* 0048D130 00001025 */   move  $v0, $zero
.L0048D134:
/* 0048D134 24020001 */  li    $v0, 1
.L0048D138:
/* 0048D138 10400002 */  beqz  $v0, .L0048D144
/* 0048D13C 240EFFFF */   li    $t6, -1
/* 0048D140 AFAE0130 */  sw    $t6, 0x130($sp)
.L0048D144:
/* 0048D144 1600000A */  bnez  $s0, .L0048D170
/* 0048D148 00000000 */   nop   
/* 0048D14C 8F9980EC */  lw    $t9, %call16(calloc)($gp)
/* 0048D150 240400BC */  li    $a0, 188
/* 0048D154 24050001 */  li    $a1, 1
/* 0048D158 0320F809 */  jalr  $t9
/* 0048D15C 00000000 */   nop   
/* 0048D160 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0048D164 8F938CB8 */  lw     $s3, %got(st_pchdr)($gp)
/* 0048D168 10000003 */  b     .L0048D178
/* 0048D16C AE620000 */   sw    $v0, ($s3)
.L0048D170:
/* 0048D170 8F938CB8 */  lw     $s3, %got(st_pchdr)($gp)
/* 0048D174 AE700000 */  sw    $s0, ($s3)
.L0048D178:
/* 0048D178 8E620000 */  lw    $v0, ($s3)
/* 0048D17C 8FB90130 */  lw    $t9, 0x130($sp)
/* 0048D180 8C4F0054 */  lw    $t7, 0x54($v0)
/* 0048D184 01E0C027 */  not   $t8, $t7
/* 0048D188 03197024 */  and   $t6, $t8, $t9
/* 0048D18C 12000004 */  beqz  $s0, .L0048D1A0
/* 0048D190 AFAE0130 */   sw    $t6, 0x130($sp)
/* 0048D194 31CF0008 */  andi  $t7, $t6, 8
/* 0048D198 11E0005C */  beqz  $t7, .L0048D30C
/* 0048D19C 27AE00C0 */   addiu $t6, $sp, 0xc0
.L0048D1A0:
/* 0048D1A0 8F9980F4 */  lw    $t9, %call16(lseek)($gp)
/* 0048D1A4 8FA40120 */  lw    $a0, 0x120($sp)
/* 0048D1A8 00002825 */  move  $a1, $zero
/* 0048D1AC 0320F809 */  jalr  $t9
/* 0048D1B0 24060001 */   li    $a2, 1
/* 0048D1B4 8FB90130 */  lw    $t9, 0x130($sp)
/* 0048D1B8 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0048D1BC 8FB80128 */  lw    $t8, 0x128($sp)
/* 0048D1C0 372E0208 */  ori   $t6, $t9, 0x208
/* 0048D1C4 8F998094 */  lw    $t9, %call16(read)($gp)
/* 0048D1C8 27B000C0 */  addiu $s0, $sp, 0xc0
/* 0048D1CC AFAE0130 */  sw    $t6, 0x130($sp)
/* 0048D1D0 02002825 */  move  $a1, $s0
/* 0048D1D4 8FA40120 */  lw    $a0, 0x120($sp)
/* 0048D1D8 24060060 */  li    $a2, 96
/* 0048D1DC 0320F809 */  jalr  $t9
/* 0048D1E0 00588823 */   subu  $s1, $v0, $t8
/* 0048D1E4 24010060 */  li    $at, 96
/* 0048D1E8 10410003 */  beq   $v0, $at, .L0048D1F8
/* 0048D1EC 8FBC0030 */   lw    $gp, 0x30($sp)
/* 0048D1F0 1000039A */  b     .L0048E05C
/* 0048D1F4 2402FFFD */   li    $v0, -3
.L0048D1F8:
/* 0048D1F8 87A600C0 */  lh    $a2, 0xc0($sp)
/* 0048D1FC 24017009 */  li    $at, 28681
/* 0048D200 10C1001B */  beq   $a2, $at, .L0048D270
/* 0048D204 24017109 */   li    $at, 28937
/* 0048D208 10C10019 */  beq   $a2, $at, .L0048D270
/* 0048D20C 24010970 */   li    $at, 2416
/* 0048D210 10C10003 */  beq   $a2, $at, .L0048D220
/* 0048D214 24010971 */   li    $at, 2417
/* 0048D218 14C1000F */  bne   $a2, $at, .L0048D258
/* 0048D21C 00000000 */   nop   
.L0048D220:
/* 0048D220 8F9987CC */  lw    $t9, %call16(gethostsex)($gp)
/* 0048D224 0320F809 */  jalr  $t9
/* 0048D228 00000000 */   nop   
/* 0048D22C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0048D230 02002025 */  move  $a0, $s0
/* 0048D234 00402825 */  move  $a1, $v0
/* 0048D238 8F998818 */  lw    $t9, %call16(swap_hdr)($gp)
/* 0048D23C 0320F809 */  jalr  $t9
/* 0048D240 00000000 */   nop   
/* 0048D244 8E780000 */  lw    $t8, ($s3)
/* 0048D248 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0048D24C 240F0001 */  li    $t7, 1
/* 0048D250 10000007 */  b     .L0048D270
/* 0048D254 AF0F0058 */   sw    $t7, 0x58($t8)
.L0048D258:
/* 0048D258 8F998788 */  lw    $t9, %call16(st_error)($gp)
/* 0048D25C 8F848044 */  lw    $a0, %got(RO_1000F270)($gp)
/* 0048D260 24057009 */  li    $a1, 28681
/* 0048D264 0320F809 */  jalr  $t9
/* 0048D268 2484F270 */   addiu $a0, %lo(RO_1000F270) # addiu $a0, $a0, -0xd90
/* 0048D26C 8FBC0030 */  lw    $gp, 0x30($sp)
.L0048D270:
/* 0048D270 87B900C2 */  lh    $t9, 0xc2($sp)
/* 0048D274 8FAE00D0 */  lw    $t6, 0xd0($sp)
/* 0048D278 2B21011E */  slti  $at, $t9, 0x11e
/* 0048D27C 50200009 */  beql  $at, $zero, .L0048D2A4
/* 0048D280 8FAF0130 */   lw    $t7, 0x130($sp)
/* 0048D284 51C00007 */  beql  $t6, $zero, .L0048D2A4
/* 0048D288 8FAF0130 */   lw    $t7, 0x130($sp)
/* 0048D28C 8F9987F0 */  lw    $t9, %call16(st_internal)($gp)
/* 0048D290 8F848044 */  lw    $a0, %got(RO_1000F29C)($gp)
/* 0048D294 0320F809 */  jalr  $t9
/* 0048D298 2484F29C */   addiu $a0, %lo(RO_1000F29C) # addiu $a0, $a0, -0xd64
/* 0048D29C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0048D2A0 8FAF0130 */  lw    $t7, 0x130($sp)
.L0048D2A4:
/* 0048D2A4 240DFFFF */  li    $t5, -1
/* 0048D2A8 00009025 */  move  $s2, $zero
/* 0048D2AC 15ED0009 */  bne   $t7, $t5, .L0048D2D4
/* 0048D2B0 00000000 */   nop   
/* 0048D2B4 8F99883C */  lw    $t9, %call16(ldfsymorder)($gp)
/* 0048D2B8 02002025 */  move  $a0, $s0
/* 0048D2BC 02202825 */  move  $a1, $s1
/* 0048D2C0 0320F809 */  jalr  $t9
/* 0048D2C4 00000000 */   nop   
/* 0048D2C8 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0048D2CC 10000001 */  b     .L0048D2D4
/* 0048D2D0 00409025 */   move  $s2, $v0
.L0048D2D4:
/* 0048D2D4 8E780000 */  lw    $t8, ($s3)
/* 0048D2D8 02007825 */  move  $t7, $s0
/* 0048D2DC 26010060 */  addiu $at, $s0, 0x60
.L0048D2E0:
/* 0048D2E0 8DEE0000 */  lw    $t6, ($t7)
/* 0048D2E4 25EF000C */  addiu $t7, $t7, 0xc
/* 0048D2E8 2718000C */  addiu $t8, $t8, 0xc
/* 0048D2EC AF0E0050 */  sw    $t6, 0x50($t8)
/* 0048D2F0 8DF9FFF8 */  lw    $t9, -8($t7)
/* 0048D2F4 AF190054 */  sw    $t9, 0x54($t8)
/* 0048D2F8 8DEEFFFC */  lw    $t6, -4($t7)
/* 0048D2FC 15E1FFF8 */  bne   $t7, $at, .L0048D2E0
/* 0048D300 AF0E0058 */   sw    $t6, 0x58($t8)
/* 0048D304 1000000E */  b     .L0048D340
/* 0048D308 8FB90130 */   lw    $t9, 0x130($sp)
.L0048D30C:
/* 0048D30C 00009025 */  move  $s2, $zero
/* 0048D310 0040C825 */  move  $t9, $v0
/* 0048D314 24410060 */  addiu $at, $v0, 0x60
.L0048D318:
/* 0048D318 8F38005C */  lw    $t8, 0x5c($t9)
/* 0048D31C 2739000C */  addiu $t9, $t9, 0xc
/* 0048D320 25CE000C */  addiu $t6, $t6, 0xc
/* 0048D324 ADD8FFF4 */  sw    $t8, -0xc($t6)
/* 0048D328 8F2F0054 */  lw    $t7, 0x54($t9)
/* 0048D32C ADCFFFF8 */  sw    $t7, -8($t6)
/* 0048D330 8F380058 */  lw    $t8, 0x58($t9)
/* 0048D334 1721FFF8 */  bne   $t9, $at, .L0048D318
/* 0048D338 ADD8FFFC */   sw    $t8, -4($t6)
/* 0048D33C 8FB90130 */  lw    $t9, 0x130($sp)
.L0048D340:
/* 0048D340 332E0002 */  andi  $t6, $t9, 2
/* 0048D344 11C0000D */  beqz  $t6, .L0048D37C
/* 0048D348 AFAE0068 */   sw    $t6, 0x68($sp)
/* 0048D34C 8E6F0000 */  lw    $t7, ($s3)
/* 0048D350 8DE40014 */  lw    $a0, 0x14($t7)
/* 0048D354 5480000A */  bnezl $a0, .L0048D380
/* 0048D358 8FB90130 */   lw    $t9, 0x130($sp)
/* 0048D35C 8F9987B0 */  lw    $t9, %call16(st_malloc)($gp)
/* 0048D360 27A500A0 */  addiu $a1, $sp, 0xa0
/* 0048D364 2406000C */  li    $a2, 12
/* 0048D368 0320F809 */  jalr  $t9
/* 0048D36C 8FA700E0 */   lw    $a3, 0xe0($sp)
/* 0048D370 8E780000 */  lw    $t8, ($s3)
/* 0048D374 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0048D378 AF020014 */  sw    $v0, 0x14($t8)
.L0048D37C:
/* 0048D37C 8FB90130 */  lw    $t9, 0x130($sp)
.L0048D380:
/* 0048D380 27B100A0 */  addiu $s1, $sp, 0xa0
/* 0048D384 332E0400 */  andi  $t6, $t9, 0x400
/* 0048D388 11C0000D */  beqz  $t6, .L0048D3C0
/* 0048D38C AFAE0064 */   sw    $t6, 0x64($sp)
/* 0048D390 8E6F0000 */  lw    $t7, ($s3)
/* 0048D394 8DE40030 */  lw    $a0, 0x30($t7)
/* 0048D398 5480000A */  bnezl $a0, .L0048D3C4
/* 0048D39C 8FB90130 */   lw    $t9, 0x130($sp)
/* 0048D3A0 8F9987B0 */  lw    $t9, %call16(st_malloc)($gp)
/* 0048D3A4 02202825 */  move  $a1, $s1
/* 0048D3A8 24060004 */  li    $a2, 4
/* 0048D3AC 0320F809 */  jalr  $t9
/* 0048D3B0 8FA700F0 */   lw    $a3, 0xf0($sp)
/* 0048D3B4 8E780000 */  lw    $t8, ($s3)
/* 0048D3B8 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0048D3BC AF020030 */  sw    $v0, 0x30($t8)
.L0048D3C0:
/* 0048D3C0 8FB90130 */  lw    $t9, 0x130($sp)
.L0048D3C4:
/* 0048D3C4 332E0080 */  andi  $t6, $t9, 0x80
/* 0048D3C8 11C0000D */  beqz  $t6, .L0048D400
/* 0048D3CC AFAE0060 */   sw    $t6, 0x60($sp)
/* 0048D3D0 8E6F0000 */  lw    $t7, ($s3)
/* 0048D3D4 8DE40034 */  lw    $a0, 0x34($t7)
/* 0048D3D8 5480000A */  bnezl $a0, .L0048D404
/* 0048D3DC 8FB90130 */   lw    $t9, 0x130($sp)
/* 0048D3E0 8F9987B0 */  lw    $t9, %call16(st_malloc)($gp)
/* 0048D3E4 02202825 */  move  $a1, $s1
/* 0048D3E8 24060001 */  li    $a2, 1
/* 0048D3EC 0320F809 */  jalr  $t9
/* 0048D3F0 8FA700F8 */   lw    $a3, 0xf8($sp)
/* 0048D3F4 8E780000 */  lw    $t8, ($s3)
/* 0048D3F8 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0048D3FC AF020034 */  sw    $v0, 0x34($t8)
.L0048D400:
/* 0048D400 8FB90130 */  lw    $t9, 0x130($sp)
.L0048D404:
/* 0048D404 332E0004 */  andi  $t6, $t9, 4
/* 0048D408 11C00009 */  beqz  $t6, .L0048D430
/* 0048D40C AFAE005C */   sw    $t6, 0x5c($sp)
/* 0048D410 8F9987B0 */  lw    $t9, %call16(st_malloc)($gp)
/* 0048D414 00002025 */  move  $a0, $zero
/* 0048D418 02202825 */  move  $a1, $s1
/* 0048D41C 24060001 */  li    $a2, 1
/* 0048D420 0320F809 */  jalr  $t9
/* 0048D424 8FA700C8 */   lw    $a3, 0xc8($sp)
/* 0048D428 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0048D42C AFA2009C */  sw    $v0, 0x9c($sp)
.L0048D430:
/* 0048D430 8FAF005C */  lw    $t7, 0x5c($sp)
/* 0048D434 51E0000E */  beql  $t7, $zero, .L0048D470
/* 0048D438 8FAE0130 */   lw    $t6, 0x130($sp)
/* 0048D43C 8E780000 */  lw    $t8, ($s3)
/* 0048D440 8F040048 */  lw    $a0, 0x48($t8)
/* 0048D444 5480000A */  bnezl $a0, .L0048D470
/* 0048D448 8FAE0130 */   lw    $t6, 0x130($sp)
/* 0048D44C 8F9987B0 */  lw    $t9, %call16(st_malloc)($gp)
/* 0048D450 02202825 */  move  $a1, $s1
/* 0048D454 24060004 */  li    $a2, 4
/* 0048D458 0320F809 */  jalr  $t9
/* 0048D45C 8FA700C4 */   lw    $a3, 0xc4($sp)
/* 0048D460 8E790000 */  lw    $t9, ($s3)
/* 0048D464 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0048D468 AF220048 */  sw    $v0, 0x48($t9)
/* 0048D46C 8FAE0130 */  lw    $t6, 0x130($sp)
.L0048D470:
/* 0048D470 31CF0020 */  andi  $t7, $t6, 0x20
/* 0048D474 11E0000D */  beqz  $t7, .L0048D4AC
/* 0048D478 AFAF0058 */   sw    $t7, 0x58($sp)
/* 0048D47C 8E780000 */  lw    $t8, ($s3)
/* 0048D480 8F040044 */  lw    $a0, 0x44($t8)
/* 0048D484 5480000A */  bnezl $a0, .L0048D4B0
/* 0048D488 8FAE0130 */   lw    $t6, 0x130($sp)
/* 0048D48C 8F9987B0 */  lw    $t9, %call16(st_malloc)($gp)
/* 0048D490 02202825 */  move  $a1, $s1
/* 0048D494 2406000C */  li    $a2, 12
/* 0048D498 0320F809 */  jalr  $t9
/* 0048D49C 8FA700E8 */   lw    $a3, 0xe8($sp)
/* 0048D4A0 8E790000 */  lw    $t9, ($s3)
/* 0048D4A4 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0048D4A8 AF220044 */  sw    $v0, 0x44($t9)
.L0048D4AC:
/* 0048D4AC 8FAE0130 */  lw    $t6, 0x130($sp)
.L0048D4B0:
/* 0048D4B0 31CF0040 */  andi  $t7, $t6, 0x40
/* 0048D4B4 11E0000D */  beqz  $t7, .L0048D4EC
/* 0048D4B8 AFAF0054 */   sw    $t7, 0x54($sp)
/* 0048D4BC 8E780000 */  lw    $t8, ($s3)
/* 0048D4C0 8F04004C */  lw    $a0, 0x4c($t8)
/* 0048D4C4 5480000A */  bnezl $a0, .L0048D4F0
/* 0048D4C8 8FAE0130 */   lw    $t6, 0x130($sp)
/* 0048D4CC 8F9987B0 */  lw    $t9, %call16(st_malloc)($gp)
/* 0048D4D0 02202825 */  move  $a1, $s1
/* 0048D4D4 24060004 */  li    $a2, 4
/* 0048D4D8 0320F809 */  jalr  $t9
/* 0048D4DC 8FA70110 */   lw    $a3, 0x110($sp)
/* 0048D4E0 8E790000 */  lw    $t9, ($s3)
/* 0048D4E4 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0048D4E8 AF22004C */  sw    $v0, 0x4c($t9)
.L0048D4EC:
/* 0048D4EC 8FAE0130 */  lw    $t6, 0x130($sp)
.L0048D4F0:
/* 0048D4F0 31CF0100 */  andi  $t7, $t6, 0x100
/* 0048D4F4 11E0000D */  beqz  $t7, .L0048D52C
/* 0048D4F8 AFAF0050 */   sw    $t7, 0x50($sp)
/* 0048D4FC 8E780000 */  lw    $t8, ($s3)
/* 0048D500 8F040050 */  lw    $a0, 0x50($t8)
/* 0048D504 5480000A */  bnezl $a0, .L0048D530
/* 0048D508 8FAE0130 */   lw    $t6, 0x130($sp)
/* 0048D50C 8F9987B0 */  lw    $t9, %call16(st_malloc)($gp)
/* 0048D510 02202825 */  move  $a1, $s1
/* 0048D514 24060034 */  li    $a2, 52
/* 0048D518 0320F809 */  jalr  $t9
/* 0048D51C 8FA700D8 */   lw    $a3, 0xd8($sp)
/* 0048D520 8E790000 */  lw    $t9, ($s3)
/* 0048D524 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0048D528 AF220050 */  sw    $v0, 0x50($t9)
.L0048D52C:
/* 0048D52C 8FAE0130 */  lw    $t6, 0x130($sp)
.L0048D530:
/* 0048D530 31CF0001 */  andi  $t7, $t6, 1
/* 0048D534 11E0000E */  beqz  $t7, .L0048D570
/* 0048D538 AFAF004C */   sw    $t7, 0x4c($sp)
/* 0048D53C 8E780000 */  lw    $t8, ($s3)
/* 0048D540 02202825 */  move  $a1, $s1
/* 0048D544 8F040018 */  lw    $a0, 0x18($t8)
/* 0048D548 5480000A */  bnezl $a0, .L0048D574
/* 0048D54C 8FAE0130 */   lw    $t6, 0x130($sp)
/* 0048D550 8F9987B0 */  lw    $t9, %call16(st_malloc)($gp)
/* 0048D554 8FA70118 */  lw    $a3, 0x118($sp)
/* 0048D558 24060010 */  li    $a2, 16
/* 0048D55C 0320F809 */  jalr  $t9
/* 0048D560 24E70001 */   addiu $a3, $a3, 1
/* 0048D564 8E790000 */  lw    $t9, ($s3)
/* 0048D568 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0048D56C AF220018 */  sw    $v0, 0x18($t9)
.L0048D570:
/* 0048D570 8FAE0130 */  lw    $t6, 0x130($sp)
.L0048D574:
/* 0048D574 31CF0800 */  andi  $t7, $t6, 0x800
/* 0048D578 11E0000E */  beqz  $t7, .L0048D5B4
/* 0048D57C AFAF0048 */   sw    $t7, 0x48($sp)
/* 0048D580 8E780000 */  lw    $t8, ($s3)
/* 0048D584 02202825 */  move  $a1, $s1
/* 0048D588 8F040024 */  lw    $a0, 0x24($t8)
/* 0048D58C 5480000A */  bnezl $a0, .L0048D5B8
/* 0048D590 8FAE0130 */   lw    $t6, 0x130($sp)
/* 0048D594 8F9987B0 */  lw    $t9, %call16(st_malloc)($gp)
/* 0048D598 8FA70100 */  lw    $a3, 0x100($sp)
/* 0048D59C 24060001 */  li    $a2, 1
/* 0048D5A0 0320F809 */  jalr  $t9
/* 0048D5A4 24E70008 */   addiu $a3, $a3, 8
/* 0048D5A8 8E790000 */  lw    $t9, ($s3)
/* 0048D5AC 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0048D5B0 AF220024 */  sw    $v0, 0x24($t9)
.L0048D5B4:
/* 0048D5B4 8FAE0130 */  lw    $t6, 0x130($sp)
.L0048D5B8:
/* 0048D5B8 31CF0010 */  andi  $t7, $t6, 0x10
/* 0048D5BC 11E0000D */  beqz  $t7, .L0048D5F4
/* 0048D5C0 AFAF0044 */   sw    $t7, 0x44($sp)
/* 0048D5C4 8E780000 */  lw    $t8, ($s3)
/* 0048D5C8 8F040038 */  lw    $a0, 0x38($t8)
/* 0048D5CC 5480000A */  bnezl $a0, .L0048D5F8
/* 0048D5D0 8FAE0130 */   lw    $t6, 0x130($sp)
/* 0048D5D4 8F9987B0 */  lw    $t9, %call16(st_malloc)($gp)
/* 0048D5D8 02202825 */  move  $a1, $s1
/* 0048D5DC 24060008 */  li    $a2, 8
/* 0048D5E0 0320F809 */  jalr  $t9
/* 0048D5E4 8FA700D0 */   lw    $a3, 0xd0($sp)
/* 0048D5E8 8E790000 */  lw    $t9, ($s3)
/* 0048D5EC 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0048D5F0 AF220038 */  sw    $v0, 0x38($t9)
.L0048D5F4:
/* 0048D5F4 8FAE0130 */  lw    $t6, 0x130($sp)
.L0048D5F8:
/* 0048D5F8 31CF0200 */  andi  $t7, $t6, 0x200
/* 0048D5FC 11E0000D */  beqz  $t7, .L0048D634
/* 0048D600 AFAF0040 */   sw    $t7, 0x40($sp)
/* 0048D604 8E780000 */  lw    $t8, ($s3)
/* 0048D608 8F040008 */  lw    $a0, 8($t8)
/* 0048D60C 5480000A */  bnezl $a0, .L0048D638
/* 0048D610 8FAE0040 */   lw    $t6, 0x40($sp)
/* 0048D614 8F9987B0 */  lw    $t9, %call16(st_malloc)($gp)
/* 0048D618 02202825 */  move  $a1, $s1
/* 0048D61C 24060048 */  li    $a2, 72
/* 0048D620 0320F809 */  jalr  $t9
/* 0048D624 8FA70108 */   lw    $a3, 0x108($sp)
/* 0048D628 8E790000 */  lw    $t9, ($s3)
/* 0048D62C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0048D630 AF220008 */  sw    $v0, 8($t9)
.L0048D634:
/* 0048D634 8FAE0040 */  lw    $t6, 0x40($sp)
.L0048D638:
/* 0048D638 000E782B */  sltu  $t7, $zero, $t6
/* 0048D63C 51E0001A */  beql  $t7, $zero, .L0048D6A8
/* 0048D640 8FB8004C */   lw    $t8, 0x4c($sp)
/* 0048D644 8E780000 */  lw    $t8, ($s3)
/* 0048D648 8F100004 */  lw    $s0, 4($t8)
/* 0048D64C 56000016 */  bnezl $s0, .L0048D6A8
/* 0048D650 8FB8004C */   lw    $t8, 0x4c($sp)
/* 0048D654 11E0000D */  beqz  $t7, .L0048D68C
/* 0048D658 00000000 */   nop   
/* 0048D65C 1600000B */  bnez  $s0, .L0048D68C
/* 0048D660 02002025 */   move  $a0, $s0
/* 0048D664 8F9987B0 */  lw    $t9, %call16(st_malloc)($gp)
/* 0048D668 02202825 */  move  $a1, $s1
/* 0048D66C 24060040 */  li    $a2, 64
/* 0048D670 0320F809 */  jalr  $t9
/* 0048D674 8FA70108 */   lw    $a3, 0x108($sp)
/* 0048D678 8E790000 */  lw    $t9, ($s3)
/* 0048D67C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0048D680 AF220004 */  sw    $v0, 4($t9)
/* 0048D684 8E6E0000 */  lw    $t6, ($s3)
/* 0048D688 8DD00004 */  lw    $s0, 4($t6)
.L0048D68C:
/* 0048D68C 8F9980BC */  lw    $t9, %call16(bzero)($gp)
/* 0048D690 8FA50108 */  lw    $a1, 0x108($sp)
/* 0048D694 02002025 */  move  $a0, $s0
/* 0048D698 0320F809 */  jalr  $t9
/* 0048D69C 00052980 */   sll   $a1, $a1, 6
/* 0048D6A0 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0048D6A4 8FB8004C */  lw    $t8, 0x4c($sp)
.L0048D6A8:
/* 0048D6A8 8FAF0118 */  lw    $t7, 0x118($sp)
/* 0048D6AC 53000007 */  beql  $t8, $zero, .L0048D6CC
/* 0048D6B0 8FB80048 */   lw    $t8, 0x48($sp)
/* 0048D6B4 8E790000 */  lw    $t9, ($s3)
/* 0048D6B8 AF2F0020 */  sw    $t7, 0x20($t9)
/* 0048D6BC 8E620000 */  lw    $v0, ($s3)
/* 0048D6C0 8C4E0020 */  lw    $t6, 0x20($v0)
/* 0048D6C4 AC4E001C */  sw    $t6, 0x1c($v0)
/* 0048D6C8 8FB80048 */  lw    $t8, 0x48($sp)
.L0048D6CC:
/* 0048D6CC 8FAF0100 */  lw    $t7, 0x100($sp)
/* 0048D6D0 53000007 */  beql  $t8, $zero, .L0048D6F0
/* 0048D6D4 8FB80044 */   lw    $t8, 0x44($sp)
/* 0048D6D8 8E790000 */  lw    $t9, ($s3)
/* 0048D6DC AF2F002C */  sw    $t7, 0x2c($t9)
/* 0048D6E0 8E620000 */  lw    $v0, ($s3)
/* 0048D6E4 8C4E002C */  lw    $t6, 0x2c($v0)
/* 0048D6E8 AC4E0028 */  sw    $t6, 0x28($v0)
/* 0048D6EC 8FB80044 */  lw    $t8, 0x44($sp)
.L0048D6F0:
/* 0048D6F0 8FAF00D0 */  lw    $t7, 0xd0($sp)
/* 0048D6F4 53000007 */  beql  $t8, $zero, .L0048D714
/* 0048D6F8 8FB80040 */   lw    $t8, 0x40($sp)
/* 0048D6FC 8E790000 */  lw    $t9, ($s3)
/* 0048D700 AF2F0040 */  sw    $t7, 0x40($t9)
/* 0048D704 8E620000 */  lw    $v0, ($s3)
/* 0048D708 8C4E0040 */  lw    $t6, 0x40($v0)
/* 0048D70C AC4E003C */  sw    $t6, 0x3c($v0)
/* 0048D710 8FB80040 */  lw    $t8, 0x40($sp)
.L0048D714:
/* 0048D714 8FAF0108 */  lw    $t7, 0x108($sp)
/* 0048D718 53000007 */  beql  $t8, $zero, .L0048D738
/* 0048D71C 8FB8005C */   lw    $t8, 0x5c($sp)
/* 0048D720 8E790000 */  lw    $t9, ($s3)
/* 0048D724 AF2F0010 */  sw    $t7, 0x10($t9)
/* 0048D728 8E620000 */  lw    $v0, ($s3)
/* 0048D72C 8C4E0010 */  lw    $t6, 0x10($v0)
/* 0048D730 AC4E000C */  sw    $t6, 0xc($v0)
/* 0048D734 8FB8005C */  lw    $t8, 0x5c($sp)
.L0048D738:
/* 0048D738 8FAF00CC */  lw    $t7, 0xcc($sp)
/* 0048D73C 8FB90128 */  lw    $t9, 0x128($sp)
/* 0048D740 1300000D */  beqz  $t8, .L0048D778
/* 0048D744 8FA7009C */   lw    $a3, 0x9c($sp)
/* 0048D748 01F93021 */  addu  $a2, $t7, $t9
/* 0048D74C 8F998038 */  lw    $t9, %got(func_0048E078)($gp)
/* 0048D750 8FAE00C8 */  lw    $t6, 0xc8($sp)
/* 0048D754 8FA40120 */  lw    $a0, 0x120($sp)
/* 0048D758 2739E078 */  addiu $t9, %lo(func_0048E078) # addiu $t9, $t9, -0x1f88
/* 0048D75C 02402825 */  move  $a1, $s2
/* 0048D760 0320F809 */  jalr  $t9
/* 0048D764 AFAE0010 */   sw    $t6, 0x10($sp)
/* 0048D768 10400003 */  beqz  $v0, .L0048D778
/* 0048D76C 8FBC0030 */   lw    $gp, 0x30($sp)
/* 0048D770 1000023B */  b     .L0048E060
/* 0048D774 8FBF0034 */   lw    $ra, 0x34($sp)
.L0048D778:
/* 0048D778 8FB80050 */  lw    $t8, 0x50($sp)
/* 0048D77C 8FA40120 */  lw    $a0, 0x120($sp)
/* 0048D780 02402825 */  move  $a1, $s2
/* 0048D784 13000013 */  beqz  $t8, .L0048D7D4
/* 0048D788 8FAF00DC */   lw    $t7, 0xdc($sp)
/* 0048D78C 8FB90128 */  lw    $t9, 0x128($sp)
/* 0048D790 8FB800D8 */  lw    $t8, 0xd8($sp)
/* 0048D794 8E6E0000 */  lw    $t6, ($s3)
/* 0048D798 01F93021 */  addu  $a2, $t7, $t9
/* 0048D79C 00187880 */  sll   $t7, $t8, 2
/* 0048D7A0 8F998038 */  lw    $t9, %got(func_0048E078)($gp)
/* 0048D7A4 01F87823 */  subu  $t7, $t7, $t8
/* 0048D7A8 000F7880 */  sll   $t7, $t7, 2
/* 0048D7AC 01F87821 */  addu  $t7, $t7, $t8
/* 0048D7B0 000F7880 */  sll   $t7, $t7, 2
/* 0048D7B4 8DC70050 */  lw    $a3, 0x50($t6)
/* 0048D7B8 2739E078 */  addiu $t9, %lo(func_0048E078) # addiu $t9, $t9, -0x1f88
/* 0048D7BC 0320F809 */  jalr  $t9
/* 0048D7C0 AFAF0010 */   sw    $t7, 0x10($sp)
/* 0048D7C4 10400003 */  beqz  $v0, .L0048D7D4
/* 0048D7C8 8FBC0030 */   lw    $gp, 0x30($sp)
/* 0048D7CC 10000224 */  b     .L0048E060
/* 0048D7D0 8FBF0034 */   lw    $ra, 0x34($sp)
.L0048D7D4:
/* 0048D7D4 8FB90068 */  lw    $t9, 0x68($sp)
/* 0048D7D8 8FA40120 */  lw    $a0, 0x120($sp)
/* 0048D7DC 02402825 */  move  $a1, $s2
/* 0048D7E0 13200011 */  beqz  $t9, .L0048D828
/* 0048D7E4 8FAE00E4 */   lw    $t6, 0xe4($sp)
/* 0048D7E8 8FB80128 */  lw    $t8, 0x128($sp)
/* 0048D7EC 8FB900E0 */  lw    $t9, 0xe0($sp)
/* 0048D7F0 8E6F0000 */  lw    $t7, ($s3)
/* 0048D7F4 01D83021 */  addu  $a2, $t6, $t8
/* 0048D7F8 00197080 */  sll   $t6, $t9, 2
/* 0048D7FC 01D97023 */  subu  $t6, $t6, $t9
/* 0048D800 8F998038 */  lw    $t9, %got(func_0048E078)($gp)
/* 0048D804 000E7080 */  sll   $t6, $t6, 2
/* 0048D808 8DE70014 */  lw    $a3, 0x14($t7)
/* 0048D80C 2739E078 */  addiu $t9, %lo(func_0048E078) # addiu $t9, $t9, -0x1f88
/* 0048D810 0320F809 */  jalr  $t9
/* 0048D814 AFAE0010 */   sw    $t6, 0x10($sp)
/* 0048D818 10400003 */  beqz  $v0, .L0048D828
/* 0048D81C 8FBC0030 */   lw    $gp, 0x30($sp)
/* 0048D820 1000020F */  b     .L0048E060
/* 0048D824 8FBF0034 */   lw    $ra, 0x34($sp)
.L0048D828:
/* 0048D828 8FB80058 */  lw    $t8, 0x58($sp)
/* 0048D82C 8FA40120 */  lw    $a0, 0x120($sp)
/* 0048D830 02402825 */  move  $a1, $s2
/* 0048D834 13000011 */  beqz  $t8, .L0048D87C
/* 0048D838 8FAF00EC */   lw    $t7, 0xec($sp)
/* 0048D83C 8FB90128 */  lw    $t9, 0x128($sp)
/* 0048D840 8FB800E8 */  lw    $t8, 0xe8($sp)
/* 0048D844 8E6E0000 */  lw    $t6, ($s3)
/* 0048D848 01F93021 */  addu  $a2, $t7, $t9
/* 0048D84C 8F998038 */  lw    $t9, %got(func_0048E078)($gp)
/* 0048D850 00187880 */  sll   $t7, $t8, 2
/* 0048D854 01F87823 */  subu  $t7, $t7, $t8
/* 0048D858 000F7880 */  sll   $t7, $t7, 2
/* 0048D85C 8DC70044 */  lw    $a3, 0x44($t6)
/* 0048D860 2739E078 */  addiu $t9, %lo(func_0048E078) # addiu $t9, $t9, -0x1f88
/* 0048D864 0320F809 */  jalr  $t9
/* 0048D868 AFAF0010 */   sw    $t7, 0x10($sp)
/* 0048D86C 10400003 */  beqz  $v0, .L0048D87C
/* 0048D870 8FBC0030 */   lw    $gp, 0x30($sp)
/* 0048D874 100001FA */  b     .L0048E060
/* 0048D878 8FBF0034 */   lw    $ra, 0x34($sp)
.L0048D87C:
/* 0048D87C 8FB90064 */  lw    $t9, 0x64($sp)
/* 0048D880 8FA40120 */  lw    $a0, 0x120($sp)
/* 0048D884 8FAE00F4 */  lw    $t6, 0xf4($sp)
/* 0048D888 1320000F */  beqz  $t9, .L0048D8C8
/* 0048D88C 8FB80128 */   lw    $t8, 0x128($sp)
/* 0048D890 8FB900F0 */  lw    $t9, 0xf0($sp)
/* 0048D894 01D83021 */  addu  $a2, $t6, $t8
/* 0048D898 8E6F0000 */  lw    $t7, ($s3)
/* 0048D89C 00197080 */  sll   $t6, $t9, 2
/* 0048D8A0 8F998038 */  lw    $t9, %got(func_0048E078)($gp)
/* 0048D8A4 8DE70030 */  lw    $a3, 0x30($t7)
/* 0048D8A8 AFAE0010 */  sw    $t6, 0x10($sp)
/* 0048D8AC 2739E078 */  addiu $t9, %lo(func_0048E078) # addiu $t9, $t9, -0x1f88
/* 0048D8B0 0320F809 */  jalr  $t9
/* 0048D8B4 02402825 */   move  $a1, $s2
/* 0048D8B8 10400003 */  beqz  $v0, .L0048D8C8
/* 0048D8BC 8FBC0030 */   lw    $gp, 0x30($sp)
/* 0048D8C0 100001E7 */  b     .L0048E060
/* 0048D8C4 8FBF0034 */   lw    $ra, 0x34($sp)
.L0048D8C8:
/* 0048D8C8 8FB80060 */  lw    $t8, 0x60($sp)
/* 0048D8CC 8FA40120 */  lw    $a0, 0x120($sp)
/* 0048D8D0 8FAF00FC */  lw    $t7, 0xfc($sp)
/* 0048D8D4 1300000E */  beqz  $t8, .L0048D910
/* 0048D8D8 8FB90128 */   lw    $t9, 0x128($sp)
/* 0048D8DC 01F93021 */  addu  $a2, $t7, $t9
/* 0048D8E0 8F998038 */  lw    $t9, %got(func_0048E078)($gp)
/* 0048D8E4 8E6E0000 */  lw    $t6, ($s3)
/* 0048D8E8 8FB800F8 */  lw    $t8, 0xf8($sp)
/* 0048D8EC 2739E078 */  addiu $t9, %lo(func_0048E078) # addiu $t9, $t9, -0x1f88
/* 0048D8F0 8DC70034 */  lw    $a3, 0x34($t6)
/* 0048D8F4 02402825 */  move  $a1, $s2
/* 0048D8F8 0320F809 */  jalr  $t9
/* 0048D8FC AFB80010 */   sw    $t8, 0x10($sp)
/* 0048D900 10400003 */  beqz  $v0, .L0048D910
/* 0048D904 8FBC0030 */   lw    $gp, 0x30($sp)
/* 0048D908 100001D5 */  b     .L0048E060
/* 0048D90C 8FBF0034 */   lw    $ra, 0x34($sp)
.L0048D910:
/* 0048D910 8FAF0048 */  lw    $t7, 0x48($sp)
/* 0048D914 8FA40120 */  lw    $a0, 0x120($sp)
/* 0048D918 8FB90104 */  lw    $t9, 0x104($sp)
/* 0048D91C 11E0000E */  beqz  $t7, .L0048D958
/* 0048D920 8FAE0128 */   lw    $t6, 0x128($sp)
/* 0048D924 032E3021 */  addu  $a2, $t9, $t6
/* 0048D928 8F998038 */  lw    $t9, %got(func_0048E078)($gp)
/* 0048D92C 8E780000 */  lw    $t8, ($s3)
/* 0048D930 8FAF0100 */  lw    $t7, 0x100($sp)
/* 0048D934 2739E078 */  addiu $t9, %lo(func_0048E078) # addiu $t9, $t9, -0x1f88
/* 0048D938 8F070024 */  lw    $a3, 0x24($t8)
/* 0048D93C 02402825 */  move  $a1, $s2
/* 0048D940 0320F809 */  jalr  $t9
/* 0048D944 AFAF0010 */   sw    $t7, 0x10($sp)
/* 0048D948 10400003 */  beqz  $v0, .L0048D958
/* 0048D94C 8FBC0030 */   lw    $gp, 0x30($sp)
/* 0048D950 100001C3 */  b     .L0048E060
/* 0048D954 8FBF0034 */   lw    $ra, 0x34($sp)
.L0048D958:
/* 0048D958 8FB90040 */  lw    $t9, 0x40($sp)
/* 0048D95C 8FA40120 */  lw    $a0, 0x120($sp)
/* 0048D960 02402825 */  move  $a1, $s2
/* 0048D964 13200011 */  beqz  $t9, .L0048D9AC
/* 0048D968 8FAE010C */   lw    $t6, 0x10c($sp)
/* 0048D96C 8FB80128 */  lw    $t8, 0x128($sp)
/* 0048D970 8FB90108 */  lw    $t9, 0x108($sp)
/* 0048D974 8E6F0000 */  lw    $t7, ($s3)
/* 0048D978 01D83021 */  addu  $a2, $t6, $t8
/* 0048D97C 001970C0 */  sll   $t6, $t9, 3
/* 0048D980 01D97021 */  addu  $t6, $t6, $t9
/* 0048D984 8F998038 */  lw    $t9, %got(func_0048E078)($gp)
/* 0048D988 000E70C0 */  sll   $t6, $t6, 3
/* 0048D98C 8DE70008 */  lw    $a3, 8($t7)
/* 0048D990 2739E078 */  addiu $t9, %lo(func_0048E078) # addiu $t9, $t9, -0x1f88
/* 0048D994 0320F809 */  jalr  $t9
/* 0048D998 AFAE0010 */   sw    $t6, 0x10($sp)
/* 0048D99C 10400003 */  beqz  $v0, .L0048D9AC
/* 0048D9A0 8FBC0030 */   lw    $gp, 0x30($sp)
/* 0048D9A4 100001AE */  b     .L0048E060
/* 0048D9A8 8FBF0034 */   lw    $ra, 0x34($sp)
.L0048D9AC:
/* 0048D9AC 8FB80054 */  lw    $t8, 0x54($sp)
/* 0048D9B0 8FA40120 */  lw    $a0, 0x120($sp)
/* 0048D9B4 02402825 */  move  $a1, $s2
/* 0048D9B8 1300000F */  beqz  $t8, .L0048D9F8
/* 0048D9BC 8FAF0114 */   lw    $t7, 0x114($sp)
/* 0048D9C0 8FB90128 */  lw    $t9, 0x128($sp)
/* 0048D9C4 8E6E0000 */  lw    $t6, ($s3)
/* 0048D9C8 8FB80110 */  lw    $t8, 0x110($sp)
/* 0048D9CC 01F93021 */  addu  $a2, $t7, $t9
/* 0048D9D0 8F998038 */  lw    $t9, %got(func_0048E078)($gp)
/* 0048D9D4 8DC7004C */  lw    $a3, 0x4c($t6)
/* 0048D9D8 00187880 */  sll   $t7, $t8, 2
/* 0048D9DC 2739E078 */  addiu $t9, %lo(func_0048E078) # addiu $t9, $t9, -0x1f88
/* 0048D9E0 0320F809 */  jalr  $t9
/* 0048D9E4 AFAF0010 */   sw    $t7, 0x10($sp)
/* 0048D9E8 10400003 */  beqz  $v0, .L0048D9F8
/* 0048D9EC 8FBC0030 */   lw    $gp, 0x30($sp)
/* 0048D9F0 1000019B */  b     .L0048E060
/* 0048D9F4 8FBF0034 */   lw    $ra, 0x34($sp)
.L0048D9F8:
/* 0048D9F8 8FB9004C */  lw    $t9, 0x4c($sp)
/* 0048D9FC 8FA40120 */  lw    $a0, 0x120($sp)
/* 0048DA00 8FAE011C */  lw    $t6, 0x11c($sp)
/* 0048DA04 1320000F */  beqz  $t9, .L0048DA44
/* 0048DA08 8FB80128 */   lw    $t8, 0x128($sp)
/* 0048DA0C 8FB90118 */  lw    $t9, 0x118($sp)
/* 0048DA10 01D83021 */  addu  $a2, $t6, $t8
/* 0048DA14 8E6F0000 */  lw    $t7, ($s3)
/* 0048DA18 00197100 */  sll   $t6, $t9, 4
/* 0048DA1C 8F998038 */  lw    $t9, %got(func_0048E078)($gp)
/* 0048DA20 8DE70018 */  lw    $a3, 0x18($t7)
/* 0048DA24 AFAE0010 */  sw    $t6, 0x10($sp)
/* 0048DA28 2739E078 */  addiu $t9, %lo(func_0048E078) # addiu $t9, $t9, -0x1f88
/* 0048DA2C 0320F809 */  jalr  $t9
/* 0048DA30 02402825 */   move  $a1, $s2
/* 0048DA34 10400003 */  beqz  $v0, .L0048DA44
/* 0048DA38 8FBC0030 */   lw    $gp, 0x30($sp)
/* 0048DA3C 10000188 */  b     .L0048E060
/* 0048DA40 8FBF0034 */   lw    $ra, 0x34($sp)
.L0048DA44:
/* 0048DA44 8FB80044 */  lw    $t8, 0x44($sp)
/* 0048DA48 8FA40120 */  lw    $a0, 0x120($sp)
/* 0048DA4C 02402825 */  move  $a1, $s2
/* 0048DA50 1300000F */  beqz  $t8, .L0048DA90
/* 0048DA54 8FAF00D4 */   lw    $t7, 0xd4($sp)
/* 0048DA58 8FB90128 */  lw    $t9, 0x128($sp)
/* 0048DA5C 8E6E0000 */  lw    $t6, ($s3)
/* 0048DA60 8FB800D0 */  lw    $t8, 0xd0($sp)
/* 0048DA64 01F93021 */  addu  $a2, $t7, $t9
/* 0048DA68 8F998038 */  lw    $t9, %got(func_0048E078)($gp)
/* 0048DA6C 8DC70038 */  lw    $a3, 0x38($t6)
/* 0048DA70 001878C0 */  sll   $t7, $t8, 3
/* 0048DA74 2739E078 */  addiu $t9, %lo(func_0048E078) # addiu $t9, $t9, -0x1f88
/* 0048DA78 0320F809 */  jalr  $t9
/* 0048DA7C AFAF0010 */   sw    $t7, 0x10($sp)
/* 0048DA80 10400003 */  beqz  $v0, .L0048DA90
/* 0048DA84 8FBC0030 */   lw    $gp, 0x30($sp)
/* 0048DA88 10000175 */  b     .L0048E060
/* 0048DA8C 8FBF0034 */   lw    $ra, 0x34($sp)
.L0048DA90:
/* 0048DA90 8E790000 */  lw    $t9, ($s3)
/* 0048DA94 8FB80050 */  lw    $t8, 0x50($sp)
/* 0048DA98 8F2E0058 */  lw    $t6, 0x58($t9)
/* 0048DA9C 51C0006A */  beql  $t6, $zero, .L0048DC48
/* 0048DAA0 8FA30108 */   lw    $v1, 0x108($sp)
/* 0048DAA4 5300000E */  beql  $t8, $zero, .L0048DAE0
/* 0048DAA8 8FB90068 */   lw    $t9, 0x68($sp)
/* 0048DAAC 8F9987CC */  lw    $t9, %call16(gethostsex)($gp)
/* 0048DAB0 0320F809 */  jalr  $t9
/* 0048DAB4 00000000 */   nop   
/* 0048DAB8 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0048DABC 8E6F0000 */  lw    $t7, ($s3)
/* 0048DAC0 8FA500D8 */  lw    $a1, 0xd8($sp)
/* 0048DAC4 8F99882C */  lw    $t9, %call16(swap_pd)($gp)
/* 0048DAC8 00403025 */  move  $a2, $v0
/* 0048DACC 8DE40050 */  lw    $a0, 0x50($t7)
/* 0048DAD0 0320F809 */  jalr  $t9
/* 0048DAD4 00000000 */   nop   
/* 0048DAD8 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0048DADC 8FB90068 */  lw    $t9, 0x68($sp)
.L0048DAE0:
/* 0048DAE0 5320000E */  beql  $t9, $zero, .L0048DB1C
/* 0048DAE4 8FB80058 */   lw    $t8, 0x58($sp)
/* 0048DAE8 8F9987CC */  lw    $t9, %call16(gethostsex)($gp)
/* 0048DAEC 0320F809 */  jalr  $t9
/* 0048DAF0 00000000 */   nop   
/* 0048DAF4 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0048DAF8 8E6E0000 */  lw    $t6, ($s3)
/* 0048DAFC 8FA500E0 */  lw    $a1, 0xe0($sp)
/* 0048DB00 8F998824 */  lw    $t9, %call16(swap_sym)($gp)
/* 0048DB04 00403025 */  move  $a2, $v0
/* 0048DB08 8DC40014 */  lw    $a0, 0x14($t6)
/* 0048DB0C 0320F809 */  jalr  $t9
/* 0048DB10 00000000 */   nop   
/* 0048DB14 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0048DB18 8FB80058 */  lw    $t8, 0x58($sp)
.L0048DB1C:
/* 0048DB1C 5300000E */  beql  $t8, $zero, .L0048DB58
/* 0048DB20 8FB90040 */   lw    $t9, 0x40($sp)
/* 0048DB24 8F9987CC */  lw    $t9, %call16(gethostsex)($gp)
/* 0048DB28 0320F809 */  jalr  $t9
/* 0048DB2C 00000000 */   nop   
/* 0048DB30 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0048DB34 8E6F0000 */  lw    $t7, ($s3)
/* 0048DB38 8FA500E8 */  lw    $a1, 0xe8($sp)
/* 0048DB3C 8F998834 */  lw    $t9, %call16(swap_opt)($gp)
/* 0048DB40 00403025 */  move  $a2, $v0
/* 0048DB44 8DE40044 */  lw    $a0, 0x44($t7)
/* 0048DB48 0320F809 */  jalr  $t9
/* 0048DB4C 00000000 */   nop   
/* 0048DB50 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0048DB54 8FB90040 */  lw    $t9, 0x40($sp)
.L0048DB58:
/* 0048DB58 5320000E */  beql  $t9, $zero, .L0048DB94
/* 0048DB5C 8FB80054 */   lw    $t8, 0x54($sp)
/* 0048DB60 8F9987CC */  lw    $t9, %call16(gethostsex)($gp)
/* 0048DB64 0320F809 */  jalr  $t9
/* 0048DB68 00000000 */   nop   
/* 0048DB6C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0048DB70 8E6E0000 */  lw    $t6, ($s3)
/* 0048DB74 8FA50108 */  lw    $a1, 0x108($sp)
/* 0048DB78 8F99881C */  lw    $t9, %call16(swap_fd)($gp)
/* 0048DB7C 00403025 */  move  $a2, $v0
/* 0048DB80 8DC40008 */  lw    $a0, 8($t6)
/* 0048DB84 0320F809 */  jalr  $t9
/* 0048DB88 00000000 */   nop   
/* 0048DB8C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0048DB90 8FB80054 */  lw    $t8, 0x54($sp)
.L0048DB94:
/* 0048DB94 5300000E */  beql  $t8, $zero, .L0048DBD0
/* 0048DB98 8FB9004C */   lw    $t9, 0x4c($sp)
/* 0048DB9C 8F9987CC */  lw    $t9, %call16(gethostsex)($gp)
/* 0048DBA0 0320F809 */  jalr  $t9
/* 0048DBA4 00000000 */   nop   
/* 0048DBA8 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0048DBAC 8E6F0000 */  lw    $t7, ($s3)
/* 0048DBB0 8FA50110 */  lw    $a1, 0x110($sp)
/* 0048DBB4 8F998820 */  lw    $t9, %call16(swap_fi)($gp)
/* 0048DBB8 00403025 */  move  $a2, $v0
/* 0048DBBC 8DE4004C */  lw    $a0, 0x4c($t7)
/* 0048DBC0 0320F809 */  jalr  $t9
/* 0048DBC4 00000000 */   nop   
/* 0048DBC8 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0048DBCC 8FB9004C */  lw    $t9, 0x4c($sp)
.L0048DBD0:
/* 0048DBD0 5320000E */  beql  $t9, $zero, .L0048DC0C
/* 0048DBD4 8FB80044 */   lw    $t8, 0x44($sp)
/* 0048DBD8 8F9987CC */  lw    $t9, %call16(gethostsex)($gp)
/* 0048DBDC 0320F809 */  jalr  $t9
/* 0048DBE0 00000000 */   nop   
/* 0048DBE4 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0048DBE8 8E6E0000 */  lw    $t6, ($s3)
/* 0048DBEC 8FA50118 */  lw    $a1, 0x118($sp)
/* 0048DBF0 8F998828 */  lw    $t9, %call16(swap_ext)($gp)
/* 0048DBF4 00403025 */  move  $a2, $v0
/* 0048DBF8 8DC40018 */  lw    $a0, 0x18($t6)
/* 0048DBFC 0320F809 */  jalr  $t9
/* 0048DC00 00000000 */   nop   
/* 0048DC04 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0048DC08 8FB80044 */  lw    $t8, 0x44($sp)
.L0048DC0C:
/* 0048DC0C 5300000E */  beql  $t8, $zero, .L0048DC48
/* 0048DC10 8FA30108 */   lw    $v1, 0x108($sp)
/* 0048DC14 8F9987CC */  lw    $t9, %call16(gethostsex)($gp)
/* 0048DC18 0320F809 */  jalr  $t9
/* 0048DC1C 00000000 */   nop   
/* 0048DC20 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0048DC24 8E6F0000 */  lw    $t7, ($s3)
/* 0048DC28 8FA500D0 */  lw    $a1, 0xd0($sp)
/* 0048DC2C 8F998830 */  lw    $t9, %call16(swap_dn)($gp)
/* 0048DC30 00403025 */  move  $a2, $v0
/* 0048DC34 8DE40038 */  lw    $a0, 0x38($t7)
/* 0048DC38 0320F809 */  jalr  $t9
/* 0048DC3C 00000000 */   nop   
/* 0048DC40 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0048DC44 8FA30108 */  lw    $v1, 0x108($sp)
.L0048DC48:
/* 0048DC48 00008025 */  move  $s0, $zero
/* 0048DC4C 00009025 */  move  $s2, $zero
/* 0048DC50 18600088 */  blez  $v1, .L0048DE74
/* 0048DC54 00008825 */   move  $s1, $zero
.L0048DC58:
/* 0048DC58 8F9987BC */  lw    $t9, %call16(st_pcfd_ifd)($gp)
/* 0048DC5C 02402025 */  move  $a0, $s2
/* 0048DC60 0320F809 */  jalr  $t9
/* 0048DC64 00000000 */   nop   
/* 0048DC68 8E790000 */  lw    $t9, ($s3)
/* 0048DC6C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0048DC70 8F2E0008 */  lw    $t6, 8($t9)
/* 0048DC74 01D1C021 */  addu  $t8, $t6, $s1
/* 0048DC78 AC580000 */  sw    $t8, ($v0)
/* 0048DC7C 8FAF0068 */  lw    $t7, 0x68($sp)
/* 0048DC80 51E00011 */  beql  $t7, $zero, .L0048DCC8
/* 0048DC84 8FB90064 */   lw    $t9, 0x64($sp)
/* 0048DC88 8F190014 */  lw    $t9, 0x14($t8)
/* 0048DC8C 03001825 */  move  $v1, $t8
/* 0048DC90 5B20000D */  blezl $t9, .L0048DCC8
/* 0048DC94 8FB90064 */   lw    $t9, 0x64($sp)
/* 0048DC98 8C6F0010 */  lw    $t7, 0x10($v1)
/* 0048DC9C 8E6E0000 */  lw    $t6, ($s3)
/* 0048DCA0 000FC880 */  sll   $t9, $t7, 2
/* 0048DCA4 8DD80014 */  lw    $t8, 0x14($t6)
/* 0048DCA8 032FC823 */  subu  $t9, $t9, $t7
/* 0048DCAC 8C4F003C */  lw    $t7, 0x3c($v0)
/* 0048DCB0 0019C880 */  sll   $t9, $t9, 2
/* 0048DCB4 03197021 */  addu  $t6, $t8, $t9
/* 0048DCB8 35F80002 */  ori   $t8, $t7, 2
/* 0048DCBC AC4E0004 */  sw    $t6, 4($v0)
/* 0048DCC0 AC58003C */  sw    $t8, 0x3c($v0)
/* 0048DCC4 8FB90064 */  lw    $t9, 0x64($sp)
.L0048DCC8:
/* 0048DCC8 5320000F */  beql  $t9, $zero, .L0048DD08
/* 0048DCCC 8FAE0058 */   lw    $t6, 0x58($sp)
/* 0048DCD0 8C430000 */  lw    $v1, ($v0)
/* 0048DCD4 8C6E0030 */  lw    $t6, 0x30($v1)
/* 0048DCD8 59C0000B */  blezl $t6, .L0048DD08
/* 0048DCDC 8FAE0058 */   lw    $t6, 0x58($sp)
/* 0048DCE0 8E6F0000 */  lw    $t7, ($s3)
/* 0048DCE4 8C79002C */  lw    $t9, 0x2c($v1)
/* 0048DCE8 8DF80030 */  lw    $t8, 0x30($t7)
/* 0048DCEC 00197080 */  sll   $t6, $t9, 2
/* 0048DCF0 8C59003C */  lw    $t9, 0x3c($v0)
/* 0048DCF4 030E7821 */  addu  $t7, $t8, $t6
/* 0048DCF8 AC4F000C */  sw    $t7, 0xc($v0)
/* 0048DCFC 37380400 */  ori   $t8, $t9, 0x400
/* 0048DD00 AC58003C */  sw    $t8, 0x3c($v0)
/* 0048DD04 8FAE0058 */  lw    $t6, 0x58($sp)
.L0048DD08:
/* 0048DD08 51C00011 */  beql  $t6, $zero, .L0048DD50
/* 0048DD0C 8FAF0054 */   lw    $t7, 0x54($sp)
/* 0048DD10 8C430000 */  lw    $v1, ($v0)
/* 0048DD14 8C6F0024 */  lw    $t7, 0x24($v1)
/* 0048DD18 59E0000D */  blezl $t7, .L0048DD50
/* 0048DD1C 8FAF0054 */   lw    $t7, 0x54($sp)
/* 0048DD20 8C6E0020 */  lw    $t6, 0x20($v1)
/* 0048DD24 8E790000 */  lw    $t9, ($s3)
/* 0048DD28 000E7880 */  sll   $t7, $t6, 2
/* 0048DD2C 8F380044 */  lw    $t8, 0x44($t9)
/* 0048DD30 01EE7823 */  subu  $t7, $t7, $t6
/* 0048DD34 8C4E003C */  lw    $t6, 0x3c($v0)
/* 0048DD38 000F7880 */  sll   $t7, $t7, 2
/* 0048DD3C 030FC821 */  addu  $t9, $t8, $t7
/* 0048DD40 35D80020 */  ori   $t8, $t6, 0x20
/* 0048DD44 AC59001C */  sw    $t9, 0x1c($v0)
/* 0048DD48 AC58003C */  sw    $t8, 0x3c($v0)
/* 0048DD4C 8FAF0054 */  lw    $t7, 0x54($sp)
.L0048DD50:
/* 0048DD50 51E0000F */  beql  $t7, $zero, .L0048DD90
/* 0048DD54 8FB90060 */   lw    $t9, 0x60($sp)
/* 0048DD58 8C430000 */  lw    $v1, ($v0)
/* 0048DD5C 8C790038 */  lw    $t9, 0x38($v1)
/* 0048DD60 5B20000B */  blezl $t9, .L0048DD90
/* 0048DD64 8FB90060 */   lw    $t9, 0x60($sp)
/* 0048DD68 8E6E0000 */  lw    $t6, ($s3)
/* 0048DD6C 8C6F0034 */  lw    $t7, 0x34($v1)
/* 0048DD70 8DD8004C */  lw    $t8, 0x4c($t6)
/* 0048DD74 000FC880 */  sll   $t9, $t7, 2
/* 0048DD78 8C4F003C */  lw    $t7, 0x3c($v0)
/* 0048DD7C 03197021 */  addu  $t6, $t8, $t9
/* 0048DD80 AC4E002C */  sw    $t6, 0x2c($v0)
/* 0048DD84 35F80040 */  ori   $t8, $t7, 0x40
/* 0048DD88 AC58003C */  sw    $t8, 0x3c($v0)
/* 0048DD8C 8FB90060 */  lw    $t9, 0x60($sp)
.L0048DD90:
/* 0048DD90 5320000E */  beql  $t9, $zero, .L0048DDCC
/* 0048DD94 8FB90050 */   lw    $t9, 0x50($sp)
/* 0048DD98 8C430000 */  lw    $v1, ($v0)
/* 0048DD9C 8C6E000C */  lw    $t6, 0xc($v1)
/* 0048DDA0 59C0000A */  blezl $t6, .L0048DDCC
/* 0048DDA4 8FB90050 */   lw    $t9, 0x50($sp)
/* 0048DDA8 8E6F0000 */  lw    $t7, ($s3)
/* 0048DDAC 8C790008 */  lw    $t9, 8($v1)
/* 0048DDB0 8DF80034 */  lw    $t8, 0x34($t7)
/* 0048DDB4 8C4F003C */  lw    $t7, 0x3c($v0)
/* 0048DDB8 03197021 */  addu  $t6, $t8, $t9
/* 0048DDBC 35F80080 */  ori   $t8, $t7, 0x80
/* 0048DDC0 AC4E0014 */  sw    $t6, 0x14($v0)
/* 0048DDC4 AC58003C */  sw    $t8, 0x3c($v0)
/* 0048DDC8 8FB90050 */  lw    $t9, 0x50($sp)
.L0048DDCC:
/* 0048DDCC 53200014 */  beql  $t9, $zero, .L0048DE20
/* 0048DDD0 8FAE005C */   lw    $t6, 0x5c($sp)
/* 0048DDD4 8C430000 */  lw    $v1, ($v0)
/* 0048DDD8 0010C880 */  sll   $t9, $s0, 2
/* 0048DDDC 946E002A */  lhu   $t6, 0x2a($v1)
/* 0048DDE0 51C0000F */  beql  $t6, $zero, .L0048DE20
/* 0048DDE4 8FAE005C */   lw    $t6, 0x5c($sp)
/* 0048DDE8 8E6F0000 */  lw    $t7, ($s3)
/* 0048DDEC 0330C823 */  subu  $t9, $t9, $s0
/* 0048DDF0 0019C880 */  sll   $t9, $t9, 2
/* 0048DDF4 8DF80050 */  lw    $t8, 0x50($t7)
/* 0048DDF8 0330C821 */  addu  $t9, $t9, $s0
/* 0048DDFC 0019C880 */  sll   $t9, $t9, 2
/* 0048DE00 03197021 */  addu  $t6, $t8, $t9
/* 0048DE04 8C58003C */  lw    $t8, 0x3c($v0)
/* 0048DE08 AC4E0034 */  sw    $t6, 0x34($v0)
/* 0048DE0C 946F002A */  lhu   $t7, 0x2a($v1)
/* 0048DE10 37190100 */  ori   $t9, $t8, 0x100
/* 0048DE14 AC59003C */  sw    $t9, 0x3c($v0)
/* 0048DE18 020F8021 */  addu  $s0, $s0, $t7
/* 0048DE1C 8FAE005C */  lw    $t6, 0x5c($sp)
.L0048DE20:
/* 0048DE20 51C0000F */  beql  $t6, $zero, .L0048DE60
/* 0048DE24 8FA30108 */   lw    $v1, 0x108($sp)
/* 0048DE28 8C430000 */  lw    $v1, ($v0)
/* 0048DE2C 8C6F001C */  lw    $t7, 0x1c($v1)
/* 0048DE30 59E0000B */  blezl $t7, .L0048DE60
/* 0048DE34 8FA30108 */   lw    $v1, 0x108($sp)
/* 0048DE38 8E780000 */  lw    $t8, ($s3)
/* 0048DE3C 8C6E0018 */  lw    $t6, 0x18($v1)
/* 0048DE40 8F190048 */  lw    $t9, 0x48($t8)
/* 0048DE44 000E7880 */  sll   $t7, $t6, 2
/* 0048DE48 8C4E003C */  lw    $t6, 0x3c($v0)
/* 0048DE4C 032FC021 */  addu  $t8, $t9, $t7
/* 0048DE50 AC580024 */  sw    $t8, 0x24($v0)
/* 0048DE54 35D90004 */  ori   $t9, $t6, 4
/* 0048DE58 AC59003C */  sw    $t9, 0x3c($v0)
/* 0048DE5C 8FA30108 */  lw    $v1, 0x108($sp)
.L0048DE60:
/* 0048DE60 26520001 */  addiu $s2, $s2, 1
/* 0048DE64 26310048 */  addiu $s1, $s1, 0x48
/* 0048DE68 0243082A */  slt   $at, $s2, $v1
/* 0048DE6C 1420FF7A */  bnez  $at, .L0048DC58
/* 0048DE70 00000000 */   nop   
.L0048DE74:
/* 0048DE74 8FAF005C */  lw    $t7, 0x5c($sp)
/* 0048DE78 2472FFFF */  addiu $s2, $v1, -1
/* 0048DE7C 51E0006A */  beql  $t7, $zero, .L0048E028
/* 0048DE80 8E620000 */   lw    $v0, ($s3)
/* 0048DE84 06420068 */  bltzl $s2, .L0048E028
/* 0048DE88 8E620000 */   lw    $v0, ($s3)
.L0048DE8C:
/* 0048DE8C 8F9987BC */  lw    $t9, %call16(st_pcfd_ifd)($gp)
/* 0048DE90 02402025 */  move  $a0, $s2
/* 0048DE94 0320F809 */  jalr  $t9
/* 0048DE98 00000000 */   nop   
/* 0048DE9C 8C430000 */  lw    $v1, ($v0)
/* 0048DEA0 2652FFFF */  addiu $s2, $s2, -1
/* 0048DEA4 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0048DEA8 8C78001C */  lw    $t8, 0x1c($v1)
/* 0048DEAC 240BFFF8 */  li    $t3, -8
/* 0048DEB0 240DFFFF */  li    $t5, -1
/* 0048DEB4 13000059 */  beqz  $t8, .L0048E01C
/* 0048DEB8 00408825 */   move  $s1, $v0
/* 0048DEBC 946F002A */  lhu   $t7, 0x2a($v1)
/* 0048DEC0 8C6E0040 */  lw    $t6, 0x40($v1)
/* 0048DEC4 8FB9009C */  lw    $t9, 0x9c($sp)
/* 0048DEC8 0000F825 */  move  $ra, $zero
/* 0048DECC 11E00053 */  beqz  $t7, .L0048E01C
/* 0048DED0 01D94021 */   addu  $t0, $t6, $t9
/* 0048DED4 00008025 */  move  $s0, $zero
.L0048DED8:
/* 0048DED8 8C4A0034 */  lw    $t2, 0x34($v0)
/* 0048DEDC 27FF0001 */  addiu $ra, $ra, 1
/* 0048DEE0 01501821 */  addu  $v1, $t2, $s0
/* 0048DEE4 8C670008 */  lw    $a3, 8($v1)
/* 0048DEE8 51A70008 */  beql  $t5, $a3, .L0048DF0C
/* 0048DEEC 8E2E0000 */   lw    $t6, ($s1)
/* 0048DEF0 8C6C0028 */  lw    $t4, 0x28($v1)
/* 0048DEF4 51AC0005 */  beql  $t5, $t4, .L0048DF0C
/* 0048DEF8 8E2E0000 */   lw    $t6, ($s1)
/* 0048DEFC 8C78002C */  lw    $t8, 0x2c($v1)
/* 0048DF00 55B80005 */  bnel  $t5, $t8, .L0048DF18
/* 0048DF04 8C430000 */   lw    $v1, ($v0)
/* 0048DF08 8E2E0000 */  lw    $t6, ($s1)
.L0048DF0C:
/* 0048DF0C 10000040 */  b     .L0048E010
/* 0048DF10 95C6002A */   lhu   $a2, 0x2a($t6)
/* 0048DF14 8C430000 */  lw    $v1, ($v0)
.L0048DF18:
/* 0048DF18 00002825 */  move  $a1, $zero
/* 0048DF1C 9479002A */  lhu   $t9, 0x2a($v1)
/* 0048DF20 8C69001C */  lw    $t1, 0x1c($v1)
/* 0048DF24 53200017 */  beql  $t9, $zero, .L0048DF84
/* 0048DF28 00E9082A */   slt   $at, $a3, $t1
/* 0048DF2C 8E2F0000 */  lw    $t7, ($s1)
/* 0048DF30 01402025 */  move  $a0, $t2
/* 0048DF34 95E6002A */  lhu   $a2, 0x2a($t7)
.L0048DF38:
/* 0048DF38 8C830008 */  lw    $v1, 8($a0)
/* 0048DF3C 24A50001 */  addiu $a1, $a1, 1
/* 0048DF40 00E3082A */  slt   $at, $a3, $v1
/* 0048DF44 5020000C */  beql  $at, $zero, .L0048DF78
/* 0048DF48 00A6082B */   sltu  $at, $a1, $a2
/* 0048DF4C 8C980028 */  lw    $t8, 0x28($a0)
/* 0048DF50 51B80009 */  beql  $t5, $t8, .L0048DF78
/* 0048DF54 00A6082B */   sltu  $at, $a1, $a2
/* 0048DF58 8C8E002C */  lw    $t6, 0x2c($a0)
/* 0048DF5C 0069082A */  slt   $at, $v1, $t1
/* 0048DF60 51AE0005 */  beql  $t5, $t6, .L0048DF78
/* 0048DF64 00A6082B */   sltu  $at, $a1, $a2
/* 0048DF68 50200003 */  beql  $at, $zero, .L0048DF78
/* 0048DF6C 00A6082B */   sltu  $at, $a1, $a2
/* 0048DF70 00604825 */  move  $t1, $v1
/* 0048DF74 00A6082B */  sltu  $at, $a1, $a2
.L0048DF78:
/* 0048DF78 1420FFEF */  bnez  $at, .L0048DF38
/* 0048DF7C 24840034 */   addiu $a0, $a0, 0x34
/* 0048DF80 00E9082A */  slt   $at, $a3, $t1
.L0048DF84:
/* 0048DF84 01803025 */  move  $a2, $t4
/* 0048DF88 1020001F */  beqz  $at, .L0048E008
/* 0048DF8C 00E02825 */   move  $a1, $a3
/* 0048DF90 81030000 */  lb    $v1, ($t0)
.L0048DF94:
/* 0048DF94 25080001 */  addiu $t0, $t0, 1
/* 0048DF98 00033903 */  sra   $a3, $v1, 4
/* 0048DF9C 00073E00 */  sll   $a3, $a3, 0x18
/* 0048DFA0 00073E03 */  sra   $a3, $a3, 0x18
/* 0048DFA4 14EB000B */  bne   $a3, $t3, .L0048DFD4
/* 0048DFA8 3064000F */   andi  $a0, $v1, 0xf
/* 0048DFAC 81190001 */  lb    $t9, 1($t0)
/* 0048DFB0 81180000 */  lb    $t8, ($t0)
/* 0048DFB4 25080002 */  addiu $t0, $t0, 2
/* 0048DFB8 332F00FF */  andi  $t7, $t9, 0xff
/* 0048DFBC 00187200 */  sll   $t6, $t8, 8
/* 0048DFC0 01EE1825 */  or    $v1, $t7, $t6
/* 0048DFC4 00031C00 */  sll   $v1, $v1, 0x10
/* 0048DFC8 00031C03 */  sra   $v1, $v1, 0x10
/* 0048DFCC 10000002 */  b     .L0048DFD8
/* 0048DFD0 00C33021 */   addu  $a2, $a2, $v1
.L0048DFD4:
/* 0048DFD4 00C73021 */  addu  $a2, $a2, $a3
.L0048DFD8:
/* 0048DFD8 04800008 */  bltz  $a0, .L0048DFFC
/* 0048DFDC 00051880 */   sll   $v1, $a1, 2
.L0048DFE0:
/* 0048DFE0 8C590024 */  lw    $t9, 0x24($v0)
/* 0048DFE4 2484FFFF */  addiu $a0, $a0, -1
/* 0048DFE8 24A50001 */  addiu $a1, $a1, 1
/* 0048DFEC 0323C021 */  addu  $t8, $t9, $v1
/* 0048DFF0 AF060000 */  sw    $a2, ($t8)
/* 0048DFF4 0481FFFA */  bgez  $a0, .L0048DFE0
/* 0048DFF8 24630004 */   addiu $v1, $v1, 4
.L0048DFFC:
/* 0048DFFC 00A9082A */  slt   $at, $a1, $t1
/* 0048E000 5420FFE4 */  bnezl $at, .L0048DF94
/* 0048E004 81030000 */   lb    $v1, ($t0)
.L0048E008:
/* 0048E008 8E2F0000 */  lw    $t7, ($s1)
/* 0048E00C 95E6002A */  lhu   $a2, 0x2a($t7)
.L0048E010:
/* 0048E010 03E6082B */  sltu  $at, $ra, $a2
/* 0048E014 1420FFB0 */  bnez  $at, .L0048DED8
/* 0048E018 26100034 */   addiu $s0, $s0, 0x34
.L0048E01C:
/* 0048E01C 0641FF9B */  bgez  $s2, .L0048DE8C
/* 0048E020 00000000 */   nop   
/* 0048E024 8E620000 */  lw    $v0, ($s3)
.L0048E028:
/* 0048E028 8FB90130 */  lw    $t9, 0x130($sp)
/* 0048E02C 8C4E0054 */  lw    $t6, 0x54($v0)
/* 0048E030 01D9C025 */  or    $t8, $t6, $t9
/* 0048E034 AC580054 */  sw    $t8, 0x54($v0)
/* 0048E038 8FAF009C */  lw    $t7, 0x9c($sp)
/* 0048E03C 51E00007 */  beql  $t7, $zero, .L0048E05C
/* 0048E040 00001025 */   move  $v0, $zero
/* 0048E044 8F9980B8 */  lw    $t9, %call16(free)($gp)
/* 0048E048 01E02025 */  move  $a0, $t7
/* 0048E04C 0320F809 */  jalr  $t9
/* 0048E050 00000000 */   nop   
/* 0048E054 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0048E058 00001025 */  move  $v0, $zero
.L0048E05C:
/* 0048E05C 8FBF0034 */  lw    $ra, 0x34($sp)
.L0048E060:
/* 0048E060 8FB00020 */  lw    $s0, 0x20($sp)
/* 0048E064 8FB10024 */  lw    $s1, 0x24($sp)
/* 0048E068 8FB20028 */  lw    $s2, 0x28($sp)
/* 0048E06C 8FB3002C */  lw    $s3, 0x2c($sp)
/* 0048E070 03E00008 */  jr    $ra
/* 0048E074 27BD0120 */   addiu $sp, $sp, 0x120
    .type st_readst, @function
    .size st_readst, .-st_readst
    .end st_readst

    .type func_0048E078, @function
func_0048E078:
    # 0048D0E0 st_readst
/* 0048E078 3C1C0FB9 */  .cpload $t9
/* 0048E07C 279CC218 */  
/* 0048E080 0399E021 */  
/* 0048E084 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0048E088 8FAE0030 */  lw    $t6, 0x30($sp)
/* 0048E08C AFBF001C */  sw    $ra, 0x1c($sp)
/* 0048E090 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0048E094 AFA40020 */  sw    $a0, 0x20($sp)
/* 0048E098 AFA60028 */  sw    $a2, 0x28($sp)
/* 0048E09C 15C00003 */  bnez  $t6, .L0048E0AC
/* 0048E0A0 AFA7002C */   sw    $a3, 0x2c($sp)
/* 0048E0A4 10000024 */  b     .L0048E138
/* 0048E0A8 00001025 */   move  $v0, $zero
.L0048E0AC:
/* 0048E0AC 14A00011 */  bnez  $a1, .L0048E0F4
/* 0048E0B0 00000000 */   nop   
/* 0048E0B4 8F9980F4 */  lw    $t9, %call16(lseek)($gp)
/* 0048E0B8 8FA40020 */  lw    $a0, 0x20($sp)
/* 0048E0BC 8FA50028 */  lw    $a1, 0x28($sp)
/* 0048E0C0 0320F809 */  jalr  $t9
/* 0048E0C4 00003025 */   move  $a2, $zero
/* 0048E0C8 8FAF0028 */  lw    $t7, 0x28($sp)
/* 0048E0CC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048E0D0 104F0008 */  beq   $v0, $t7, .L0048E0F4
/* 0048E0D4 00000000 */   nop   
/* 0048E0D8 8F998838 */  lw    $t9, %call16(st_warning)($gp)
/* 0048E0DC 8F848044 */  lw    $a0, %got(RO_1000F31C)($gp)
/* 0048E0E0 0320F809 */  jalr  $t9
/* 0048E0E4 2484F31C */   addiu $a0, %lo(RO_1000F31C) # addiu $a0, $a0, -0xce4
/* 0048E0E8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048E0EC 10000012 */  b     .L0048E138
/* 0048E0F0 2402FFFB */   li    $v0, -5
.L0048E0F4:
/* 0048E0F4 8F998094 */  lw    $t9, %call16(read)($gp)
/* 0048E0F8 8FA40020 */  lw    $a0, 0x20($sp)
/* 0048E0FC 8FA5002C */  lw    $a1, 0x2c($sp)
/* 0048E100 0320F809 */  jalr  $t9
/* 0048E104 8FA60030 */   lw    $a2, 0x30($sp)
/* 0048E108 8FB80030 */  lw    $t8, 0x30($sp)
/* 0048E10C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048E110 50580009 */  beql  $v0, $t8, .L0048E138
/* 0048E114 00001025 */   move  $v0, $zero
/* 0048E118 8F998838 */  lw    $t9, %call16(st_warning)($gp)
/* 0048E11C 8F848044 */  lw    $a0, %got(RO_1000F334)($gp)
/* 0048E120 0320F809 */  jalr  $t9
/* 0048E124 2484F334 */   addiu $a0, %lo(RO_1000F334) # addiu $a0, $a0, -0xccc
/* 0048E128 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048E12C 10000002 */  b     .L0048E138
/* 0048E130 2402FFFA */   li    $v0, -6
/* 0048E134 00001025 */  move  $v0, $zero
.L0048E138:
/* 0048E138 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0048E13C 27BD0020 */  addiu $sp, $sp, 0x20
/* 0048E140 03E00008 */  jr    $ra
/* 0048E144 00000000 */   nop   

glabel st_writebinary
    .ent st_writebinary
    # 00439B60 write_updated_st
/* 0048E148 3C1C0FB9 */  .cpload $t9
/* 0048E14C 279CC148 */  
/* 0048E150 0399E021 */  
/* 0048E154 8F99808C */  lw    $t9, %call16(open)($gp)
/* 0048E158 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0048E15C AFBF001C */  sw    $ra, 0x1c($sp)
/* 0048E160 AFA5002C */  sw    $a1, 0x2c($sp)
/* 0048E164 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0048E168 AFA40028 */  sw    $a0, 0x28($sp)
/* 0048E16C 24050102 */  li    $a1, 258
/* 0048E170 0320F809 */  jalr  $t9
/* 0048E174 240601B6 */   li    $a2, 438
/* 0048E178 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048E17C 04410007 */  bgez  $v0, .L0048E19C
/* 0048E180 AFA20024 */   sw    $v0, 0x24($sp)
/* 0048E184 8F998788 */  lw    $t9, %call16(st_error)($gp)
/* 0048E188 8F848044 */  lw    $a0, %got(RO_1000F34C)($gp)
/* 0048E18C 8FA50028 */  lw    $a1, 0x28($sp)
/* 0048E190 0320F809 */  jalr  $t9
/* 0048E194 2484F34C */   addiu $a0, %lo(RO_1000F34C) # addiu $a0, $a0, -0xcb4
/* 0048E198 8FBC0018 */  lw    $gp, 0x18($sp)
.L0048E19C:
/* 0048E19C 8F998814 */  lw    $t9, %call16(st_writest)($gp)
/* 0048E1A0 8FA40024 */  lw    $a0, 0x24($sp)
/* 0048E1A4 8FA5002C */  lw    $a1, 0x2c($sp)
/* 0048E1A8 0320F809 */  jalr  $t9
/* 0048E1AC 00000000 */   nop   
/* 0048E1B0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048E1B4 8FA40024 */  lw    $a0, 0x24($sp)
/* 0048E1B8 8F998098 */  lw    $t9, %call16(close)($gp)
/* 0048E1BC 0320F809 */  jalr  $t9
/* 0048E1C0 00000000 */   nop   
/* 0048E1C4 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0048E1C8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048E1CC 27BD0028 */  addiu $sp, $sp, 0x28
/* 0048E1D0 03E00008 */  jr    $ra
/* 0048E1D4 00000000 */   nop   
    .type st_writebinary, @function
    .size st_writebinary, .-st_writebinary
    .end st_writebinary

glabel st_writest
    .ent st_writest
    # 0048E148 st_writebinary
/* 0048E1D8 3C1C0FB9 */  .cpload $t9
/* 0048E1DC 279CC0B8 */  
/* 0048E1E0 0399E021 */  
/* 0048E1E4 27BDFE28 */  addiu $sp, $sp, -0x1d8
/* 0048E1E8 8F9980BC */  lw    $t9, %call16(bzero)($gp)
/* 0048E1EC AFB00014 */  sw    $s0, 0x14($sp)
/* 0048E1F0 00808025 */  move  $s0, $a0
/* 0048E1F4 AFBF003C */  sw    $ra, 0x3c($sp)
/* 0048E1F8 AFA501DC */  sw    $a1, 0x1dc($sp)
/* 0048E1FC AFBE0038 */  sw    $fp, 0x38($sp)
/* 0048E200 AFBC0034 */  sw    $gp, 0x34($sp)
/* 0048E204 AFB70030 */  sw    $s7, 0x30($sp)
/* 0048E208 AFB6002C */  sw    $s6, 0x2c($sp)
/* 0048E20C AFB50028 */  sw    $s5, 0x28($sp)
/* 0048E210 AFB40024 */  sw    $s4, 0x24($sp)
/* 0048E214 AFB30020 */  sw    $s3, 0x20($sp)
/* 0048E218 AFB2001C */  sw    $s2, 0x1c($sp)
/* 0048E21C AFB10018 */  sw    $s1, 0x18($sp)
/* 0048E220 24050048 */  li    $a1, 72
/* 0048E224 27A4018C */  addiu $a0, $sp, 0x18c
/* 0048E228 0320F809 */  jalr  $t9
/* 0048E22C AFA00120 */   sw    $zero, 0x120($sp)
/* 0048E230 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048E234 27A40128 */  addiu $a0, $sp, 0x128
/* 0048E238 24050060 */  li    $a1, 96
/* 0048E23C 8F9980BC */  lw    $t9, %call16(bzero)($gp)
/* 0048E240 0320F809 */  jalr  $t9
/* 0048E244 00000000 */   nop   
/* 0048E248 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048E24C 8F998790 */  lw    $t9, %call16(st_ifdmax)($gp)
/* 0048E250 0320F809 */  jalr  $t9
/* 0048E254 00000000 */   nop   
/* 0048E258 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048E25C AFA20114 */  sw    $v0, 0x114($sp)
/* 0048E260 02002025 */  move  $a0, $s0
/* 0048E264 8F9980F4 */  lw    $t9, %call16(lseek)($gp)
/* 0048E268 00002825 */  move  $a1, $zero
/* 0048E26C 24060001 */  li    $a2, 1
/* 0048E270 0320F809 */  jalr  $t9
/* 0048E274 00000000 */   nop   
/* 0048E278 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048E27C AFA20110 */  sw    $v0, 0x110($sp)
/* 0048E280 02002025 */  move  $a0, $s0
/* 0048E284 8F9980F4 */  lw    $t9, %call16(lseek)($gp)
/* 0048E288 24050060 */  li    $a1, 96
/* 0048E28C 24060001 */  li    $a2, 1
/* 0048E290 0320F809 */  jalr  $t9
/* 0048E294 00000000 */   nop   
/* 0048E298 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048E29C 8FAE0114 */  lw    $t6, 0x114($sp)
/* 0048E2A0 AFA2011C */  sw    $v0, 0x11c($sp)
/* 0048E2A4 8F8F8CB8 */  lw     $t7, %got(st_pchdr)($gp)
/* 0048E2A8 02002025 */  move  $a0, $s0
/* 0048E2AC 8DEF0000 */  lw    $t7, ($t7)
/* 0048E2B0 ADEE000C */  sw    $t6, 0xc($t7)
/* 0048E2B4 8F9980FC */  lw    $t9, %call16(dup)($gp)
/* 0048E2B8 0320F809 */  jalr  $t9
/* 0048E2BC 00000000 */   nop   
/* 0048E2C0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048E2C4 00402025 */  move  $a0, $v0
/* 0048E2C8 8F9980F8 */  lw    $t9, %call16(fdopen)($gp)
/* 0048E2CC 8F858044 */  lw    $a1, %got(RO_1000F370)($gp)
/* 0048E2D0 0320F809 */  jalr  $t9
/* 0048E2D4 24A5F370 */   addiu $a1, %lo(RO_1000F370) # addiu $a1, $a1, -0xc90
/* 0048E2D8 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048E2DC 8FAB0120 */  lw    $t3, 0x120($sp)
/* 0048E2E0 14400009 */  bnez  $v0, .L0048E308
/* 0048E2E4 AFA2010C */   sw    $v0, 0x10c($sp)
/* 0048E2E8 8F998788 */  lw    $t9, %call16(st_error)($gp)
/* 0048E2EC 8F848044 */  lw    $a0, %got(RO_1000F374)($gp)
/* 0048E2F0 02002825 */  move  $a1, $s0
/* 0048E2F4 AFAB0120 */  sw    $t3, 0x120($sp)
/* 0048E2F8 0320F809 */  jalr  $t9
/* 0048E2FC 2484F374 */   addiu $a0, %lo(RO_1000F374) # addiu $a0, $a0, -0xc8c
/* 0048E300 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048E304 8FAB0120 */  lw    $t3, 0x120($sp)
.L0048E308:
/* 0048E308 8FB801DC */  lw    $t8, 0x1dc($sp)
/* 0048E30C 33190004 */  andi  $t9, $t8, 4
/* 0048E310 532000DA */  beql  $t9, $zero, .L0048E67C
/* 0048E314 8FAE01DC */   lw    $t6, 0x1dc($sp)
/* 0048E318 8FAC0114 */  lw    $t4, 0x114($sp)
/* 0048E31C 2416FFFF */  li    $s6, -1
/* 0048E320 598000B8 */  blezl $t4, .L0048E604
/* 0048E324 8FAC012C */   lw    $t4, 0x12c($sp)
/* 0048E328 AFA00118 */  sw    $zero, 0x118($sp)
/* 0048E32C 27BE0068 */  addiu $fp, $sp, 0x68
.L0048E330:
/* 0048E330 8F9987BC */  lw    $t9, %call16(st_pcfd_ifd)($gp)
/* 0048E334 8FA40118 */  lw    $a0, 0x118($sp)
/* 0048E338 AFA00124 */  sw    $zero, 0x124($sp)
/* 0048E33C 0320F809 */  jalr  $t9
/* 0048E340 AFAB0120 */   sw    $t3, 0x120($sp)
/* 0048E344 8C4D0000 */  lw    $t5, ($v0)
/* 0048E348 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048E34C 8FAA0124 */  lw    $t2, 0x124($sp)
/* 0048E350 AFAD0188 */  sw    $t5, 0x188($sp)
/* 0048E354 8DA3001C */  lw    $v1, 0x1c($t5)
/* 0048E358 8FAB0120 */  lw    $t3, 0x120($sp)
/* 0048E35C 00404825 */  move  $t1, $v0
/* 0048E360 506000A3 */  beql  $v1, $zero, .L0048E5F0
/* 0048E364 8FA20118 */   lw    $v0, 0x118($sp)
/* 0048E368 8C4F0024 */  lw    $t7, 0x24($v0)
/* 0048E36C 8FB8012C */  lw    $t8, 0x12c($sp)
/* 0048E370 51E0009F */  beql  $t7, $zero, .L0048E5F0
/* 0048E374 8FA20118 */   lw    $v0, 0x118($sp)
/* 0048E378 ADB80018 */  sw    $t8, 0x18($t5)
/* 0048E37C 8FAC012C */  lw    $t4, 0x12c($sp)
/* 0048E380 8FAE0188 */  lw    $t6, 0x188($sp)
/* 0048E384 01836821 */  addu  $t5, $t4, $v1
/* 0048E388 AFAD012C */  sw    $t5, 0x12c($sp)
/* 0048E38C ADCB0040 */  sw    $t3, 0x40($t6)
/* 0048E390 8FAF0188 */  lw    $t7, 0x188($sp)
/* 0048E394 AFA00108 */  sw    $zero, 0x108($sp)
/* 0048E398 95F1002A */  lhu   $s1, 0x2a($t7)
/* 0048E39C 52200092 */  beql  $s1, $zero, .L0048E5E8
/* 0048E3A0 8FB80188 */   lw    $t8, 0x188($sp)
/* 0048E3A4 AFA00058 */  sw    $zero, 0x58($sp)
.L0048E3A8:
/* 0048E3A8 8D380034 */  lw    $t8, 0x34($t1)
/* 0048E3AC 8FB90058 */  lw    $t9, 0x58($sp)
/* 0048E3B0 03194021 */  addu  $t0, $t8, $t9
/* 0048E3B4 8D0C0008 */  lw    $t4, 8($t0)
/* 0048E3B8 52CC0083 */  beql  $s6, $t4, .L0048E5C8
/* 0048E3BC 8FB90108 */   lw    $t9, 0x108($sp)
/* 0048E3C0 8D0D0028 */  lw    $t5, 0x28($t0)
/* 0048E3C4 52CD0080 */  beql  $s6, $t5, .L0048E5C8
/* 0048E3C8 8FB90108 */   lw    $t9, 0x108($sp)
/* 0048E3CC 8D0E002C */  lw    $t6, 0x2c($t0)
/* 0048E3D0 8FAF0188 */  lw    $t7, 0x188($sp)
/* 0048E3D4 52CE007C */  beql  $s6, $t6, .L0048E5C8
/* 0048E3D8 8FB90108 */   lw    $t9, 0x108($sp)
/* 0048E3DC 8DF80040 */  lw    $t8, 0x40($t7)
/* 0048E3E0 00002025 */  move  $a0, $zero
/* 0048E3E4 0178C823 */  subu  $t9, $t3, $t8
/* 0048E3E8 AD190030 */  sw    $t9, 0x30($t0)
/* 0048E3EC 8FAC0188 */  lw    $t4, 0x188($sp)
/* 0048E3F0 9591002A */  lhu   $s1, 0x2a($t4)
/* 0048E3F4 8D85001C */  lw    $a1, 0x1c($t4)
/* 0048E3F8 12200015 */  beqz  $s1, .L0048E450
/* 0048E3FC 00000000 */   nop   
/* 0048E400 8D060008 */  lw    $a2, 8($t0)
/* 0048E404 8D230034 */  lw    $v1, 0x34($t1)
.L0048E408:
/* 0048E408 8C620008 */  lw    $v0, 8($v1)
/* 0048E40C 24840001 */  addiu $a0, $a0, 1
/* 0048E410 00C2082A */  slt   $at, $a2, $v0
/* 0048E414 5020000C */  beql  $at, $zero, .L0048E448
/* 0048E418 0091082B */   sltu  $at, $a0, $s1
/* 0048E41C 8C6D0028 */  lw    $t5, 0x28($v1)
/* 0048E420 52CD0009 */  beql  $s6, $t5, .L0048E448
/* 0048E424 0091082B */   sltu  $at, $a0, $s1
/* 0048E428 8C6E002C */  lw    $t6, 0x2c($v1)
/* 0048E42C 0045082A */  slt   $at, $v0, $a1
/* 0048E430 52CE0005 */  beql  $s6, $t6, .L0048E448
/* 0048E434 0091082B */   sltu  $at, $a0, $s1
/* 0048E438 50200003 */  beql  $at, $zero, .L0048E448
/* 0048E43C 0091082B */   sltu  $at, $a0, $s1
/* 0048E440 00402825 */  move  $a1, $v0
/* 0048E444 0091082B */  sltu  $at, $a0, $s1
.L0048E448:
/* 0048E448 1420FFEF */  bnez  $at, .L0048E408
/* 0048E44C 24630034 */   addiu $v1, $v1, 0x34
.L0048E450:
/* 0048E450 58A0005D */  blezl $a1, .L0048E5C8
/* 0048E454 8FB90108 */   lw    $t9, 0x108($sp)
/* 0048E458 8D060008 */  lw    $a2, 8($t0)
/* 0048E45C 02C09025 */  move  $s2, $s6
/* 0048E460 0000A025 */  move  $s4, $zero
/* 0048E464 04C00057 */  bltz  $a2, .L0048E5C4
/* 0048E468 00067880 */   sll   $t7, $a2, 2
/* 0048E46C 8D220024 */  lw    $v0, 0x24($t1)
/* 0048E470 0005B880 */  sll   $s7, $a1, 2
/* 0048E474 8D150028 */  lw    $s5, 0x28($t0)
/* 0048E478 004F9821 */  addu  $s3, $v0, $t7
/* 0048E47C 00571821 */  addu  $v1, $v0, $s7
/* 0048E480 0073082B */  sltu  $at, $v1, $s3
/* 0048E484 1420004F */  bnez  $at, .L0048E5C4
/* 0048E488 03C08025 */   move  $s0, $fp
.L0048E48C:
/* 0048E48C 16630003 */  bne   $s3, $v1, .L0048E49C
/* 0048E490 24010008 */   li    $at, 8
/* 0048E494 10000009 */  b     .L0048E4BC
/* 0048E498 24030001 */   li    $v1, 1
.L0048E49C:
/* 0048E49C 8E620000 */  lw    $v0, ($s3)
/* 0048E4A0 14400003 */  bnez  $v0, .L0048E4B0
/* 0048E4A4 00402025 */   move  $a0, $v0
/* 0048E4A8 10000001 */  b     .L0048E4B0
/* 0048E4AC 8D040028 */   lw    $a0, 0x28($t0)
.L0048E4B0:
/* 0048E4B0 00951823 */  subu  $v1, $a0, $s5
/* 0048E4B4 00031C00 */  sll   $v1, $v1, 0x10
/* 0048E4B8 00031C03 */  sra   $v1, $v1, 0x10
.L0048E4BC:
/* 0048E4BC 14600003 */  bnez  $v1, .L0048E4CC
/* 0048E4C0 03C02025 */   move  $a0, $fp
/* 0048E4C4 1641001A */  bne   $s2, $at, .L0048E530
/* 0048E4C8 26020003 */   addiu $v0, $s0, 3
.L0048E4CC:
/* 0048E4CC 1256000A */  beq   $s2, $s6, .L0048E4F8
/* 0048E4D0 02A3A821 */   addu  $s5, $s5, $v1
/* 0048E4D4 2A81FFF9 */  slti  $at, $s4, -7
/* 0048E4D8 14200007 */  bnez  $at, .L0048E4F8
/* 0048E4DC 2A810008 */   slti  $at, $s4, 8
/* 0048E4E0 10200005 */  beqz  $at, .L0048E4F8
/* 0048E4E4 00146100 */   sll   $t4, $s4, 4
/* 0048E4E8 01926825 */  or    $t5, $t4, $s2
/* 0048E4EC A20D0000 */  sb    $t5, ($s0)
/* 0048E4F0 1000000A */  b     .L0048E51C
/* 0048E4F4 26100001 */   addiu $s0, $s0, 1
.L0048E4F8:
/* 0048E4F8 12560008 */  beq   $s2, $s6, .L0048E51C
/* 0048E4FC 0014C203 */   sra   $t8, $s4, 8
/* 0048E500 A2120000 */  sb    $s2, ($s0)
/* 0048E504 820E0000 */  lb    $t6, ($s0)
/* 0048E508 A2180001 */  sb    $t8, 1($s0)
/* 0048E50C A2140002 */  sb    $s4, 2($s0)
/* 0048E510 35CF0080 */  ori   $t7, $t6, 0x80
/* 0048E514 A20F0000 */  sb    $t7, ($s0)
/* 0048E518 26100003 */  addiu $s0, $s0, 3
.L0048E51C:
/* 0048E51C 0003A400 */  sll   $s4, $v1, 0x10
/* 0048E520 00009025 */  move  $s2, $zero
/* 0048E524 0014A403 */  sra   $s4, $s4, 0x10
/* 0048E528 10000002 */  b     .L0048E534
/* 0048E52C 26020003 */   addiu $v0, $s0, 3
.L0048E530:
/* 0048E530 26520001 */  addiu $s2, $s2, 1
.L0048E534:
/* 0048E534 27AC00E8 */  addiu $t4, $sp, 0xe8
/* 0048E538 004C082B */  sltu  $at, $v0, $t4
/* 0048E53C 10200008 */  beqz  $at, .L0048E560
/* 0048E540 021E8823 */   subu  $s1, $s0, $fp
/* 0048E544 8D2D0024 */  lw    $t5, 0x24($t1)
/* 0048E548 021E7023 */  subu  $t6, $s0, $fp
/* 0048E54C 01B71821 */  addu  $v1, $t5, $s7
/* 0048E550 56630017 */  bnel  $s3, $v1, .L0048E5B0
/* 0048E554 26730004 */   addiu $s3, $s3, 4
/* 0048E558 59C00015 */  blezl $t6, .L0048E5B0
/* 0048E55C 26730004 */   addiu $s3, $s3, 4
.L0048E560:
/* 0048E560 8F998100 */  lw    $t9, %call16(fwrite)($gp)
/* 0048E564 02202825 */  move  $a1, $s1
/* 0048E568 24060001 */  li    $a2, 1
/* 0048E56C 8FA7010C */  lw    $a3, 0x10c($sp)
/* 0048E570 AFA800FC */  sw    $t0, 0xfc($sp)
/* 0048E574 AFA901D4 */  sw    $t1, 0x1d4($sp)
/* 0048E578 AFAA0124 */  sw    $t2, 0x124($sp)
/* 0048E57C 0320F809 */  jalr  $t9
/* 0048E580 AFAB0120 */   sw    $t3, 0x120($sp)
/* 0048E584 8FA901D4 */  lw    $t1, 0x1d4($sp)
/* 0048E588 8FAA0124 */  lw    $t2, 0x124($sp)
/* 0048E58C 8FAB0120 */  lw    $t3, 0x120($sp)
/* 0048E590 8D2F0024 */  lw    $t7, 0x24($t1)
/* 0048E594 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048E598 8FA800FC */  lw    $t0, 0xfc($sp)
/* 0048E59C 03C08025 */  move  $s0, $fp
/* 0048E5A0 01515021 */  addu  $t2, $t2, $s1
/* 0048E5A4 01715821 */  addu  $t3, $t3, $s1
/* 0048E5A8 01F71821 */  addu  $v1, $t7, $s7
/* 0048E5AC 26730004 */  addiu $s3, $s3, 4
.L0048E5B0:
/* 0048E5B0 0073082B */  sltu  $at, $v1, $s3
/* 0048E5B4 1020FFB5 */  beqz  $at, .L0048E48C
/* 0048E5B8 00000000 */   nop   
/* 0048E5BC 8FB80188 */  lw    $t8, 0x188($sp)
/* 0048E5C0 9711002A */  lhu   $s1, 0x2a($t8)
.L0048E5C4:
/* 0048E5C4 8FB90108 */  lw    $t9, 0x108($sp)
.L0048E5C8:
/* 0048E5C8 8FAD0058 */  lw    $t5, 0x58($sp)
/* 0048E5CC 272C0001 */  addiu $t4, $t9, 1
/* 0048E5D0 0191082B */  sltu  $at, $t4, $s1
/* 0048E5D4 25AE0034 */  addiu $t6, $t5, 0x34
/* 0048E5D8 AFAE0058 */  sw    $t6, 0x58($sp)
/* 0048E5DC 1420FF72 */  bnez  $at, .L0048E3A8
/* 0048E5E0 AFAC0108 */   sw    $t4, 0x108($sp)
/* 0048E5E4 8FB80188 */  lw    $t8, 0x188($sp)
.L0048E5E8:
/* 0048E5E8 AF0A0044 */  sw    $t2, 0x44($t8)
/* 0048E5EC 8FA20118 */  lw    $v0, 0x118($sp)
.L0048E5F0:
/* 0048E5F0 8FB90114 */  lw    $t9, 0x114($sp)
/* 0048E5F4 24420001 */  addiu $v0, $v0, 1
/* 0048E5F8 1459FF4D */  bne   $v0, $t9, .L0048E330
/* 0048E5FC AFA20118 */   sw    $v0, 0x118($sp)
/* 0048E600 8FAC012C */  lw    $t4, 0x12c($sp)
.L0048E604:
/* 0048E604 000B8023 */  negu  $s0, $t3
/* 0048E608 32100003 */  andi  $s0, $s0, 3
/* 0048E60C 5180001B */  beql  $t4, $zero, .L0048E67C
/* 0048E610 8FAE01DC */   lw    $t6, 0x1dc($sp)
/* 0048E614 12000015 */  beqz  $s0, .L0048E66C
/* 0048E618 24050001 */   li    $a1, 1
/* 0048E61C 8F998100 */  lw    $t9, %call16(fwrite)($gp)
/* 0048E620 8F848048 */  lw    $a0, %got(B_1001C2B0)($gp)
/* 0048E624 02003025 */  move  $a2, $s0
/* 0048E628 8FA7010C */  lw    $a3, 0x10c($sp)
/* 0048E62C AFAB0120 */  sw    $t3, 0x120($sp)
/* 0048E630 0320F809 */  jalr  $t9
/* 0048E634 2484C2B0 */   addiu $a0, %lo(B_1001C2B0) # addiu $a0, $a0, -0x3d50
/* 0048E638 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048E63C 10500008 */  beq   $v0, $s0, .L0048E660
/* 0048E640 8FAB0120 */   lw    $t3, 0x120($sp)
/* 0048E644 8F998788 */  lw    $t9, %call16(st_error)($gp)
/* 0048E648 8F848044 */  lw    $a0, %got(RO_1000F3A0)($gp)
/* 0048E64C AFAB0120 */  sw    $t3, 0x120($sp)
/* 0048E650 0320F809 */  jalr  $t9
/* 0048E654 2484F3A0 */   addiu $a0, %lo(RO_1000F3A0) # addiu $a0, $a0, -0xc60
/* 0048E658 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048E65C 8FAB0120 */  lw    $t3, 0x120($sp)
.L0048E660:
/* 0048E660 256B0003 */  addiu $t3, $t3, 3
/* 0048E664 2401FFFC */  li    $at, -4
/* 0048E668 01615824 */  and   $t3, $t3, $at
.L0048E66C:
/* 0048E66C 8FAD011C */  lw    $t5, 0x11c($sp)
/* 0048E670 AFAB0130 */  sw    $t3, 0x130($sp)
/* 0048E674 AFAD0134 */  sw    $t5, 0x134($sp)
/* 0048E678 8FAE01DC */  lw    $t6, 0x1dc($sp)
.L0048E67C:
/* 0048E67C 31CF0100 */  andi  $t7, $t6, 0x100
/* 0048E680 51E00047 */  beql  $t7, $zero, .L0048E7A0
/* 0048E684 8FAC01DC */   lw    $t4, 0x1dc($sp)
/* 0048E688 8FB8011C */  lw    $t8, 0x11c($sp)
/* 0048E68C 8FAC0114 */  lw    $t4, 0x114($sp)
/* 0048E690 24100034 */  li    $s0, 52
/* 0048E694 030BC821 */  addu  $t9, $t8, $t3
/* 0048E698 AFB9011C */  sw    $t9, 0x11c($sp)
/* 0048E69C 1980003A */  blez  $t4, .L0048E788
/* 0048E6A0 00005825 */   move  $t3, $zero
/* 0048E6A4 AFA00118 */  sw    $zero, 0x118($sp)
/* 0048E6A8 8F928900 */  lw     $s2, %got(msg_werr)($gp)
.L0048E6AC:
/* 0048E6AC 8F9987BC */  lw    $t9, %call16(st_pcfd_ifd)($gp)
/* 0048E6B0 8FA40118 */  lw    $a0, 0x118($sp)
/* 0048E6B4 AFAB0120 */  sw    $t3, 0x120($sp)
/* 0048E6B8 0320F809 */  jalr  $t9
/* 0048E6BC 00000000 */   nop   
/* 0048E6C0 8C4D0000 */  lw    $t5, ($v0)
/* 0048E6C4 97AE01B4 */  lhu   $t6, 0x1b4($sp)
/* 0048E6C8 97AF01B6 */  lhu   $t7, 0x1b6($sp)
/* 0048E6CC 8FAB0120 */  lw    $t3, 0x120($sp)
/* 0048E6D0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048E6D4 AFAD0188 */  sw    $t5, 0x188($sp)
/* 0048E6D8 01CFC021 */  addu  $t8, $t6, $t7
/* 0048E6DC A5B80028 */  sh    $t8, 0x28($t5)
/* 0048E6E0 8FAC0188 */  lw    $t4, 0x188($sp)
/* 0048E6E4 02002825 */  move  $a1, $s0
/* 0048E6E8 9591002A */  lhu   $s1, 0x2a($t4)
/* 0048E6EC 02300019 */  multu $s1, $s0
/* 0048E6F0 02203025 */  move  $a2, $s1
/* 0048E6F4 00002012 */  mflo  $a0
/* 0048E6F8 01645821 */  addu  $t3, $t3, $a0
/* 0048E6FC 52200014 */  beql  $s1, $zero, .L0048E750
/* 0048E700 97AF01B4 */   lhu   $t7, 0x1b4($sp)
/* 0048E704 8F998100 */  lw    $t9, %call16(fwrite)($gp)
/* 0048E708 8C440034 */  lw    $a0, 0x34($v0)
/* 0048E70C AFAB0120 */  sw    $t3, 0x120($sp)
/* 0048E710 0320F809 */  jalr  $t9
/* 0048E714 8FA7010C */   lw    $a3, 0x10c($sp)
/* 0048E718 8FAD0188 */  lw    $t5, 0x188($sp)
/* 0048E71C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048E720 8FAB0120 */  lw    $t3, 0x120($sp)
/* 0048E724 95AE002A */  lhu   $t6, 0x2a($t5)
/* 0048E728 504E0009 */  beql  $v0, $t6, .L0048E750
/* 0048E72C 97AF01B4 */   lhu   $t7, 0x1b4($sp)
/* 0048E730 8F998788 */  lw    $t9, %call16(st_error)($gp)
/* 0048E734 02402025 */  move  $a0, $s2
/* 0048E738 AFAB0120 */  sw    $t3, 0x120($sp)
/* 0048E73C 0320F809 */  jalr  $t9
/* 0048E740 00000000 */   nop   
/* 0048E744 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048E748 8FAB0120 */  lw    $t3, 0x120($sp)
/* 0048E74C 97AF01B4 */  lhu   $t7, 0x1b4($sp)
.L0048E750:
/* 0048E750 97B801B6 */  lhu   $t8, 0x1b6($sp)
/* 0048E754 8FAC0188 */  lw    $t4, 0x188($sp)
/* 0048E758 8FA30118 */  lw    $v1, 0x118($sp)
/* 0048E75C 01F8C821 */  addu  $t9, $t7, $t8
/* 0048E760 A7B901B4 */  sh    $t9, 0x1b4($sp)
/* 0048E764 8FAD0140 */  lw    $t5, 0x140($sp)
/* 0048E768 9582002A */  lhu   $v0, 0x2a($t4)
/* 0048E76C 8FAF0114 */  lw    $t7, 0x114($sp)
/* 0048E770 24630001 */  addiu $v1, $v1, 1
/* 0048E774 01A27021 */  addu  $t6, $t5, $v0
/* 0048E778 AFAE0140 */  sw    $t6, 0x140($sp)
/* 0048E77C AFA30118 */  sw    $v1, 0x118($sp)
/* 0048E780 146FFFCA */  bne   $v1, $t7, .L0048E6AC
/* 0048E784 A7A201B6 */   sh    $v0, 0x1b6($sp)
.L0048E788:
/* 0048E788 8FB80140 */  lw    $t8, 0x140($sp)
/* 0048E78C 8FB9011C */  lw    $t9, 0x11c($sp)
/* 0048E790 53000003 */  beql  $t8, $zero, .L0048E7A0
/* 0048E794 8FAC01DC */   lw    $t4, 0x1dc($sp)
/* 0048E798 AFB90144 */  sw    $t9, 0x144($sp)
/* 0048E79C 8FAC01DC */  lw    $t4, 0x1dc($sp)
.L0048E7A0:
/* 0048E7A0 8F928900 */  lw     $s2, %got(msg_werr)($gp)
/* 0048E7A4 318D0002 */  andi  $t5, $t4, 2
/* 0048E7A8 51A00045 */  beql  $t5, $zero, .L0048E8C0
/* 0048E7AC 8FAC01DC */   lw    $t4, 0x1dc($sp)
/* 0048E7B0 8FAE011C */  lw    $t6, 0x11c($sp)
/* 0048E7B4 8FB80114 */  lw    $t8, 0x114($sp)
/* 0048E7B8 2410000C */  li    $s0, 12
/* 0048E7BC 01CB7821 */  addu  $t7, $t6, $t3
/* 0048E7C0 AFAF011C */  sw    $t7, 0x11c($sp)
/* 0048E7C4 1B000038 */  blez  $t8, .L0048E8A8
/* 0048E7C8 00005825 */   move  $t3, $zero
/* 0048E7CC AFA00118 */  sw    $zero, 0x118($sp)
.L0048E7D0:
/* 0048E7D0 8F9987BC */  lw    $t9, %call16(st_pcfd_ifd)($gp)
/* 0048E7D4 8FA40118 */  lw    $a0, 0x118($sp)
/* 0048E7D8 AFAB0120 */  sw    $t3, 0x120($sp)
/* 0048E7DC 0320F809 */  jalr  $t9
/* 0048E7E0 00000000 */   nop   
/* 0048E7E4 8C590000 */  lw    $t9, ($v0)
/* 0048E7E8 8FAC019C */  lw    $t4, 0x19c($sp)
/* 0048E7EC 8FAD01A0 */  lw    $t5, 0x1a0($sp)
/* 0048E7F0 8FAB0120 */  lw    $t3, 0x120($sp)
/* 0048E7F4 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048E7F8 AFB90188 */  sw    $t9, 0x188($sp)
/* 0048E7FC 018D7021 */  addu  $t6, $t4, $t5
/* 0048E800 AF2E0010 */  sw    $t6, 0x10($t9)
/* 0048E804 8FB80188 */  lw    $t8, 0x188($sp)
/* 0048E808 02002825 */  move  $a1, $s0
/* 0048E80C 8F060014 */  lw    $a2, 0x14($t8)
/* 0048E810 00D00019 */  multu $a2, $s0
/* 0048E814 00002012 */  mflo  $a0
/* 0048E818 01645821 */  addu  $t3, $t3, $a0
/* 0048E81C 50C00014 */  beql  $a2, $zero, .L0048E870
/* 0048E820 8FAD019C */   lw    $t5, 0x19c($sp)
/* 0048E824 8F998100 */  lw    $t9, %call16(fwrite)($gp)
/* 0048E828 8C440004 */  lw    $a0, 4($v0)
/* 0048E82C AFAB0120 */  sw    $t3, 0x120($sp)
/* 0048E830 0320F809 */  jalr  $t9
/* 0048E834 8FA7010C */   lw    $a3, 0x10c($sp)
/* 0048E838 8FB90188 */  lw    $t9, 0x188($sp)
/* 0048E83C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048E840 8FAB0120 */  lw    $t3, 0x120($sp)
/* 0048E844 8F2C0014 */  lw    $t4, 0x14($t9)
/* 0048E848 504C0009 */  beql  $v0, $t4, .L0048E870
/* 0048E84C 8FAD019C */   lw    $t5, 0x19c($sp)
/* 0048E850 8F998788 */  lw    $t9, %call16(st_error)($gp)
/* 0048E854 02402025 */  move  $a0, $s2
/* 0048E858 AFAB0120 */  sw    $t3, 0x120($sp)
/* 0048E85C 0320F809 */  jalr  $t9
/* 0048E860 00000000 */   nop   
/* 0048E864 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048E868 8FAB0120 */  lw    $t3, 0x120($sp)
/* 0048E86C 8FAD019C */  lw    $t5, 0x19c($sp)
.L0048E870:
/* 0048E870 8FAE01A0 */  lw    $t6, 0x1a0($sp)
/* 0048E874 8FB80188 */  lw    $t8, 0x188($sp)
/* 0048E878 8FB90148 */  lw    $t9, 0x148($sp)
/* 0048E87C 01AE7821 */  addu  $t7, $t5, $t6
/* 0048E880 AFAF019C */  sw    $t7, 0x19c($sp)
/* 0048E884 8FAD0118 */  lw    $t5, 0x118($sp)
/* 0048E888 8F040014 */  lw    $a0, 0x14($t8)
/* 0048E88C 8FAF0114 */  lw    $t7, 0x114($sp)
/* 0048E890 25AE0001 */  addiu $t6, $t5, 1
/* 0048E894 03246021 */  addu  $t4, $t9, $a0
/* 0048E898 AFAC0148 */  sw    $t4, 0x148($sp)
/* 0048E89C AFAE0118 */  sw    $t6, 0x118($sp)
/* 0048E8A0 15CFFFCB */  bne   $t6, $t7, .L0048E7D0
/* 0048E8A4 AFA401A0 */   sw    $a0, 0x1a0($sp)
.L0048E8A8:
/* 0048E8A8 8FB80148 */  lw    $t8, 0x148($sp)
/* 0048E8AC 8FB9011C */  lw    $t9, 0x11c($sp)
/* 0048E8B0 53000003 */  beql  $t8, $zero, .L0048E8C0
/* 0048E8B4 8FAC01DC */   lw    $t4, 0x1dc($sp)
/* 0048E8B8 AFB9014C */  sw    $t9, 0x14c($sp)
/* 0048E8BC 8FAC01DC */  lw    $t4, 0x1dc($sp)
.L0048E8C0:
/* 0048E8C0 2410000C */  li    $s0, 12
/* 0048E8C4 318D0020 */  andi  $t5, $t4, 0x20
/* 0048E8C8 51A00044 */  beql  $t5, $zero, .L0048E9DC
/* 0048E8CC 8FAC01DC */   lw    $t4, 0x1dc($sp)
/* 0048E8D0 8FAE011C */  lw    $t6, 0x11c($sp)
/* 0048E8D4 8FB80114 */  lw    $t8, 0x114($sp)
/* 0048E8D8 01CB7821 */  addu  $t7, $t6, $t3
/* 0048E8DC AFAF011C */  sw    $t7, 0x11c($sp)
/* 0048E8E0 1B000038 */  blez  $t8, .L0048E9C4
/* 0048E8E4 00005825 */   move  $t3, $zero
/* 0048E8E8 AFA00118 */  sw    $zero, 0x118($sp)
.L0048E8EC:
/* 0048E8EC 8F9987BC */  lw    $t9, %call16(st_pcfd_ifd)($gp)
/* 0048E8F0 8FA40118 */  lw    $a0, 0x118($sp)
/* 0048E8F4 AFAB0120 */  sw    $t3, 0x120($sp)
/* 0048E8F8 0320F809 */  jalr  $t9
/* 0048E8FC 00000000 */   nop   
/* 0048E900 8C590000 */  lw    $t9, ($v0)
/* 0048E904 8FAC01AC */  lw    $t4, 0x1ac($sp)
/* 0048E908 8FAD01B0 */  lw    $t5, 0x1b0($sp)
/* 0048E90C 8FAB0120 */  lw    $t3, 0x120($sp)
/* 0048E910 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048E914 AFB90188 */  sw    $t9, 0x188($sp)
/* 0048E918 018D7021 */  addu  $t6, $t4, $t5
/* 0048E91C AF2E0020 */  sw    $t6, 0x20($t9)
/* 0048E920 8FB80188 */  lw    $t8, 0x188($sp)
/* 0048E924 02002825 */  move  $a1, $s0
/* 0048E928 8F060024 */  lw    $a2, 0x24($t8)
/* 0048E92C 00D00019 */  multu $a2, $s0
/* 0048E930 00002012 */  mflo  $a0
/* 0048E934 01645821 */  addu  $t3, $t3, $a0
/* 0048E938 50C00014 */  beql  $a2, $zero, .L0048E98C
/* 0048E93C 8FAD01AC */   lw    $t5, 0x1ac($sp)
/* 0048E940 8F998100 */  lw    $t9, %call16(fwrite)($gp)
/* 0048E944 8C44001C */  lw    $a0, 0x1c($v0)
/* 0048E948 AFAB0120 */  sw    $t3, 0x120($sp)
/* 0048E94C 0320F809 */  jalr  $t9
/* 0048E950 8FA7010C */   lw    $a3, 0x10c($sp)
/* 0048E954 8FB90188 */  lw    $t9, 0x188($sp)
/* 0048E958 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048E95C 8FAB0120 */  lw    $t3, 0x120($sp)
/* 0048E960 8F2C0024 */  lw    $t4, 0x24($t9)
/* 0048E964 504C0009 */  beql  $v0, $t4, .L0048E98C
/* 0048E968 8FAD01AC */   lw    $t5, 0x1ac($sp)
/* 0048E96C 8F998788 */  lw    $t9, %call16(st_error)($gp)
/* 0048E970 02402025 */  move  $a0, $s2
/* 0048E974 AFAB0120 */  sw    $t3, 0x120($sp)
/* 0048E978 0320F809 */  jalr  $t9
/* 0048E97C 00000000 */   nop   
/* 0048E980 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048E984 8FAB0120 */  lw    $t3, 0x120($sp)
/* 0048E988 8FAD01AC */  lw    $t5, 0x1ac($sp)
.L0048E98C:
/* 0048E98C 8FAE01B0 */  lw    $t6, 0x1b0($sp)
/* 0048E990 8FB80188 */  lw    $t8, 0x188($sp)
/* 0048E994 8FB90150 */  lw    $t9, 0x150($sp)
/* 0048E998 01AE7821 */  addu  $t7, $t5, $t6
/* 0048E99C AFAF01AC */  sw    $t7, 0x1ac($sp)
/* 0048E9A0 8FAD0118 */  lw    $t5, 0x118($sp)
/* 0048E9A4 8F040024 */  lw    $a0, 0x24($t8)
/* 0048E9A8 8FAF0114 */  lw    $t7, 0x114($sp)
/* 0048E9AC 25AE0001 */  addiu $t6, $t5, 1
/* 0048E9B0 03246021 */  addu  $t4, $t9, $a0
/* 0048E9B4 AFAC0150 */  sw    $t4, 0x150($sp)
/* 0048E9B8 AFAE0118 */  sw    $t6, 0x118($sp)
/* 0048E9BC 15CFFFCB */  bne   $t6, $t7, .L0048E8EC
/* 0048E9C0 AFA401B0 */   sw    $a0, 0x1b0($sp)
.L0048E9C4:
/* 0048E9C4 8FB80150 */  lw    $t8, 0x150($sp)
/* 0048E9C8 8FB9011C */  lw    $t9, 0x11c($sp)
/* 0048E9CC 53000003 */  beql  $t8, $zero, .L0048E9DC
/* 0048E9D0 8FAC01DC */   lw    $t4, 0x1dc($sp)
/* 0048E9D4 AFB90154 */  sw    $t9, 0x154($sp)
/* 0048E9D8 8FAC01DC */  lw    $t4, 0x1dc($sp)
.L0048E9DC:
/* 0048E9DC 318D0400 */  andi  $t5, $t4, 0x400
/* 0048E9E0 51A00042 */  beql  $t5, $zero, .L0048EAEC
/* 0048E9E4 8FAC01DC */   lw    $t4, 0x1dc($sp)
/* 0048E9E8 8FAE011C */  lw    $t6, 0x11c($sp)
/* 0048E9EC 8FB80114 */  lw    $t8, 0x114($sp)
/* 0048E9F0 01CB7821 */  addu  $t7, $t6, $t3
/* 0048E9F4 AFAF011C */  sw    $t7, 0x11c($sp)
/* 0048E9F8 1B000036 */  blez  $t8, .L0048EAD4
/* 0048E9FC 00005825 */   move  $t3, $zero
/* 0048EA00 AFA00118 */  sw    $zero, 0x118($sp)
.L0048EA04:
/* 0048EA04 8F9987BC */  lw    $t9, %call16(st_pcfd_ifd)($gp)
/* 0048EA08 8FA40118 */  lw    $a0, 0x118($sp)
/* 0048EA0C AFAB0120 */  sw    $t3, 0x120($sp)
/* 0048EA10 0320F809 */  jalr  $t9
/* 0048EA14 00000000 */   nop   
/* 0048EA18 8C590000 */  lw    $t9, ($v0)
/* 0048EA1C 8FAC01B8 */  lw    $t4, 0x1b8($sp)
/* 0048EA20 8FAD01BC */  lw    $t5, 0x1bc($sp)
/* 0048EA24 8FAB0120 */  lw    $t3, 0x120($sp)
/* 0048EA28 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048EA2C AFB90188 */  sw    $t9, 0x188($sp)
/* 0048EA30 018D7021 */  addu  $t6, $t4, $t5
/* 0048EA34 AF2E002C */  sw    $t6, 0x2c($t9)
/* 0048EA38 8FB80188 */  lw    $t8, 0x188($sp)
/* 0048EA3C 24050004 */  li    $a1, 4
/* 0048EA40 8F060030 */  lw    $a2, 0x30($t8)
/* 0048EA44 00062080 */  sll   $a0, $a2, 2
/* 0048EA48 10C00013 */  beqz  $a2, .L0048EA98
/* 0048EA4C 01645821 */   addu  $t3, $t3, $a0
/* 0048EA50 8F998100 */  lw    $t9, %call16(fwrite)($gp)
/* 0048EA54 8C44000C */  lw    $a0, 0xc($v0)
/* 0048EA58 AFAB0120 */  sw    $t3, 0x120($sp)
/* 0048EA5C 0320F809 */  jalr  $t9
/* 0048EA60 8FA7010C */   lw    $a3, 0x10c($sp)
/* 0048EA64 8FB90188 */  lw    $t9, 0x188($sp)
/* 0048EA68 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048EA6C 8FAB0120 */  lw    $t3, 0x120($sp)
/* 0048EA70 8F2C0030 */  lw    $t4, 0x30($t9)
/* 0048EA74 504C0009 */  beql  $v0, $t4, .L0048EA9C
/* 0048EA78 8FAD01B8 */   lw    $t5, 0x1b8($sp)
/* 0048EA7C 8F998788 */  lw    $t9, %call16(st_error)($gp)
/* 0048EA80 02402025 */  move  $a0, $s2
/* 0048EA84 AFAB0120 */  sw    $t3, 0x120($sp)
/* 0048EA88 0320F809 */  jalr  $t9
/* 0048EA8C 00000000 */   nop   
/* 0048EA90 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048EA94 8FAB0120 */  lw    $t3, 0x120($sp)
.L0048EA98:
/* 0048EA98 8FAD01B8 */  lw    $t5, 0x1b8($sp)
.L0048EA9C:
/* 0048EA9C 8FAE01BC */  lw    $t6, 0x1bc($sp)
/* 0048EAA0 8FB80188 */  lw    $t8, 0x188($sp)
/* 0048EAA4 8FB90158 */  lw    $t9, 0x158($sp)
/* 0048EAA8 01AE7821 */  addu  $t7, $t5, $t6
/* 0048EAAC AFAF01B8 */  sw    $t7, 0x1b8($sp)
/* 0048EAB0 8FAD0118 */  lw    $t5, 0x118($sp)
/* 0048EAB4 8F040030 */  lw    $a0, 0x30($t8)
/* 0048EAB8 8FAF0114 */  lw    $t7, 0x114($sp)
/* 0048EABC 25AE0001 */  addiu $t6, $t5, 1
/* 0048EAC0 03246021 */  addu  $t4, $t9, $a0
/* 0048EAC4 AFAC0158 */  sw    $t4, 0x158($sp)
/* 0048EAC8 AFAE0118 */  sw    $t6, 0x118($sp)
/* 0048EACC 15CFFFCD */  bne   $t6, $t7, .L0048EA04
/* 0048EAD0 AFA401BC */   sw    $a0, 0x1bc($sp)
.L0048EAD4:
/* 0048EAD4 8FB80158 */  lw    $t8, 0x158($sp)
/* 0048EAD8 8FB9011C */  lw    $t9, 0x11c($sp)
/* 0048EADC 53000003 */  beql  $t8, $zero, .L0048EAEC
/* 0048EAE0 8FAC01DC */   lw    $t4, 0x1dc($sp)
/* 0048EAE4 AFB9015C */  sw    $t9, 0x15c($sp)
/* 0048EAE8 8FAC01DC */  lw    $t4, 0x1dc($sp)
.L0048EAEC:
/* 0048EAEC 318D0080 */  andi  $t5, $t4, 0x80
/* 0048EAF0 51A00058 */  beql  $t5, $zero, .L0048EC54
/* 0048EAF4 8FB901DC */   lw    $t9, 0x1dc($sp)
/* 0048EAF8 8FAE011C */  lw    $t6, 0x11c($sp)
/* 0048EAFC 8FB80114 */  lw    $t8, 0x114($sp)
/* 0048EB00 01CB7821 */  addu  $t7, $t6, $t3
/* 0048EB04 AFAF011C */  sw    $t7, 0x11c($sp)
/* 0048EB08 1B000035 */  blez  $t8, .L0048EBE0
/* 0048EB0C 00005825 */   move  $t3, $zero
/* 0048EB10 AFA00118 */  sw    $zero, 0x118($sp)
.L0048EB14:
/* 0048EB14 8F9987BC */  lw    $t9, %call16(st_pcfd_ifd)($gp)
/* 0048EB18 8FA40118 */  lw    $a0, 0x118($sp)
/* 0048EB1C AFAB0120 */  sw    $t3, 0x120($sp)
/* 0048EB20 0320F809 */  jalr  $t9
/* 0048EB24 00000000 */   nop   
/* 0048EB28 8C590000 */  lw    $t9, ($v0)
/* 0048EB2C 8FAC0194 */  lw    $t4, 0x194($sp)
/* 0048EB30 8FAD0198 */  lw    $t5, 0x198($sp)
/* 0048EB34 8FAB0120 */  lw    $t3, 0x120($sp)
/* 0048EB38 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048EB3C AFB90188 */  sw    $t9, 0x188($sp)
/* 0048EB40 018D7021 */  addu  $t6, $t4, $t5
/* 0048EB44 AF2E0008 */  sw    $t6, 8($t9)
/* 0048EB48 8FB80188 */  lw    $t8, 0x188($sp)
/* 0048EB4C 24050001 */  li    $a1, 1
/* 0048EB50 8F06000C */  lw    $a2, 0xc($t8)
/* 0048EB54 10C00013 */  beqz  $a2, .L0048EBA4
/* 0048EB58 01665821 */   addu  $t3, $t3, $a2
/* 0048EB5C 8F998100 */  lw    $t9, %call16(fwrite)($gp)
/* 0048EB60 8C440014 */  lw    $a0, 0x14($v0)
/* 0048EB64 AFAB0120 */  sw    $t3, 0x120($sp)
/* 0048EB68 0320F809 */  jalr  $t9
/* 0048EB6C 8FA7010C */   lw    $a3, 0x10c($sp)
/* 0048EB70 8FB90188 */  lw    $t9, 0x188($sp)
/* 0048EB74 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048EB78 8FAB0120 */  lw    $t3, 0x120($sp)
/* 0048EB7C 8F2C000C */  lw    $t4, 0xc($t9)
/* 0048EB80 504C0009 */  beql  $v0, $t4, .L0048EBA8
/* 0048EB84 8FAD0194 */   lw    $t5, 0x194($sp)
/* 0048EB88 8F998788 */  lw    $t9, %call16(st_error)($gp)
/* 0048EB8C 02402025 */  move  $a0, $s2
/* 0048EB90 AFAB0120 */  sw    $t3, 0x120($sp)
/* 0048EB94 0320F809 */  jalr  $t9
/* 0048EB98 00000000 */   nop   
/* 0048EB9C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048EBA0 8FAB0120 */  lw    $t3, 0x120($sp)
.L0048EBA4:
/* 0048EBA4 8FAD0194 */  lw    $t5, 0x194($sp)
.L0048EBA8:
/* 0048EBA8 8FAE0198 */  lw    $t6, 0x198($sp)
/* 0048EBAC 8FB80188 */  lw    $t8, 0x188($sp)
/* 0048EBB0 8FB90160 */  lw    $t9, 0x160($sp)
/* 0048EBB4 01AE7821 */  addu  $t7, $t5, $t6
/* 0048EBB8 AFAF0194 */  sw    $t7, 0x194($sp)
/* 0048EBBC 8FAD0118 */  lw    $t5, 0x118($sp)
/* 0048EBC0 8F04000C */  lw    $a0, 0xc($t8)
/* 0048EBC4 8FAF0114 */  lw    $t7, 0x114($sp)
/* 0048EBC8 25AE0001 */  addiu $t6, $t5, 1
/* 0048EBCC 03246021 */  addu  $t4, $t9, $a0
/* 0048EBD0 AFAC0160 */  sw    $t4, 0x160($sp)
/* 0048EBD4 AFAE0118 */  sw    $t6, 0x118($sp)
/* 0048EBD8 15CFFFCE */  bne   $t6, $t7, .L0048EB14
/* 0048EBDC AFA40198 */   sw    $a0, 0x198($sp)
.L0048EBE0:
/* 0048EBE0 000B8023 */  negu  $s0, $t3
/* 0048EBE4 32100003 */  andi  $s0, $s0, 3
/* 0048EBE8 12000015 */  beqz  $s0, .L0048EC40
/* 0048EBEC 24050001 */   li    $a1, 1
/* 0048EBF0 8F998100 */  lw    $t9, %call16(fwrite)($gp)
/* 0048EBF4 8F848048 */  lw    $a0, %got(B_1001C2B0)($gp)
/* 0048EBF8 02003025 */  move  $a2, $s0
/* 0048EBFC 8FA7010C */  lw    $a3, 0x10c($sp)
/* 0048EC00 AFAB0120 */  sw    $t3, 0x120($sp)
/* 0048EC04 0320F809 */  jalr  $t9
/* 0048EC08 2484C2B0 */   addiu $a0, %lo(B_1001C2B0) # addiu $a0, $a0, -0x3d50
/* 0048EC0C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048EC10 10500008 */  beq   $v0, $s0, .L0048EC34
/* 0048EC14 8FAB0120 */   lw    $t3, 0x120($sp)
/* 0048EC18 8F998788 */  lw    $t9, %call16(st_error)($gp)
/* 0048EC1C 8F848044 */  lw    $a0, %got(RO_1000F3C4)($gp)
/* 0048EC20 AFAB0120 */  sw    $t3, 0x120($sp)
/* 0048EC24 0320F809 */  jalr  $t9
/* 0048EC28 2484F3C4 */   addiu $a0, %lo(RO_1000F3C4) # addiu $a0, $a0, -0xc3c
/* 0048EC2C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048EC30 8FAB0120 */  lw    $t3, 0x120($sp)
.L0048EC34:
/* 0048EC34 256B0003 */  addiu $t3, $t3, 3
/* 0048EC38 2401FFFC */  li    $at, -4
/* 0048EC3C 01615824 */  and   $t3, $t3, $at
.L0048EC40:
/* 0048EC40 11600003 */  beqz  $t3, .L0048EC50
/* 0048EC44 AFAB0160 */   sw    $t3, 0x160($sp)
/* 0048EC48 8FB8011C */  lw    $t8, 0x11c($sp)
/* 0048EC4C AFB80164 */  sw    $t8, 0x164($sp)
.L0048EC50:
/* 0048EC50 8FB901DC */  lw    $t9, 0x1dc($sp)
.L0048EC54:
/* 0048EC54 332C0800 */  andi  $t4, $t9, 0x800
/* 0048EC58 5180003D */  beql  $t4, $zero, .L0048ED50
/* 0048EC5C 8FAD01DC */   lw    $t5, 0x1dc($sp)
/* 0048EC60 8F888CB8 */  lw     $t0, %got(st_pchdr)($gp)
/* 0048EC64 8FAE011C */  lw    $t6, 0x11c($sp)
/* 0048EC68 8D020000 */  lw    $v0, ($t0)
/* 0048EC6C 01CB7821 */  addu  $t7, $t6, $t3
/* 0048EC70 00005825 */  move  $t3, $zero
/* 0048EC74 8C4D0028 */  lw    $t5, 0x28($v0)
/* 0048EC78 AFAF011C */  sw    $t7, 0x11c($sp)
/* 0048EC7C 11A0001A */  beqz  $t5, .L0048ECE8
/* 0048EC80 AFAD0168 */   sw    $t5, 0x168($sp)
/* 0048EC84 8C4B0028 */  lw    $t3, 0x28($v0)
/* 0048EC88 AFAF016C */  sw    $t7, 0x16c($sp)
/* 0048EC8C 8C430028 */  lw    $v1, 0x28($v0)
/* 0048EC90 24050001 */  li    $a1, 1
/* 0048EC94 10600014 */  beqz  $v1, .L0048ECE8
/* 0048EC98 00603025 */   move  $a2, $v1
/* 0048EC9C 8F998100 */  lw    $t9, %call16(fwrite)($gp)
/* 0048ECA0 8C440024 */  lw    $a0, 0x24($v0)
/* 0048ECA4 AFAB0120 */  sw    $t3, 0x120($sp)
/* 0048ECA8 0320F809 */  jalr  $t9
/* 0048ECAC 8FA7010C */   lw    $a3, 0x10c($sp)
/* 0048ECB0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048ECB4 8FAB0120 */  lw    $t3, 0x120($sp)
/* 0048ECB8 8F998CB8 */  lw     $t9, %got(st_pchdr)($gp)
/* 0048ECBC 8F390000 */  lw    $t9, ($t9)
/* 0048ECC0 8F2C0028 */  lw    $t4, 0x28($t9)
/* 0048ECC4 504C0009 */  beql  $v0, $t4, .L0048ECEC
/* 0048ECC8 000B8023 */   negu  $s0, $t3
/* 0048ECCC 8F998788 */  lw    $t9, %call16(st_error)($gp)
/* 0048ECD0 8F848904 */  lw     $a0, %got(msg_err)($gp)
/* 0048ECD4 AFAB0120 */  sw    $t3, 0x120($sp)
/* 0048ECD8 0320F809 */  jalr  $t9
/* 0048ECDC 00000000 */   nop   
/* 0048ECE0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048ECE4 8FAB0120 */  lw    $t3, 0x120($sp)
.L0048ECE8:
/* 0048ECE8 000B8023 */  negu  $s0, $t3
.L0048ECEC:
/* 0048ECEC 32100003 */  andi  $s0, $s0, 3
/* 0048ECF0 12000015 */  beqz  $s0, .L0048ED48
/* 0048ECF4 24050001 */   li    $a1, 1
/* 0048ECF8 8F998100 */  lw    $t9, %call16(fwrite)($gp)
/* 0048ECFC 8F848048 */  lw    $a0, %got(B_1001C2B0)($gp)
/* 0048ED00 02003025 */  move  $a2, $s0
/* 0048ED04 8FA7010C */  lw    $a3, 0x10c($sp)
/* 0048ED08 AFAB0120 */  sw    $t3, 0x120($sp)
/* 0048ED0C 0320F809 */  jalr  $t9
/* 0048ED10 2484C2B0 */   addiu $a0, %lo(B_1001C2B0) # addiu $a0, $a0, -0x3d50
/* 0048ED14 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048ED18 10500008 */  beq   $v0, $s0, .L0048ED3C
/* 0048ED1C 8FAB0120 */   lw    $t3, 0x120($sp)
/* 0048ED20 8F998788 */  lw    $t9, %call16(st_error)($gp)
/* 0048ED24 8F848044 */  lw    $a0, %got(RO_1000F3EC)($gp)
/* 0048ED28 AFAB0120 */  sw    $t3, 0x120($sp)
/* 0048ED2C 0320F809 */  jalr  $t9
/* 0048ED30 2484F3EC */   addiu $a0, %lo(RO_1000F3EC) # addiu $a0, $a0, -0xc14
/* 0048ED34 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048ED38 8FAB0120 */  lw    $t3, 0x120($sp)
.L0048ED3C:
/* 0048ED3C 256B0003 */  addiu $t3, $t3, 3
/* 0048ED40 2401FFFC */  li    $at, -4
/* 0048ED44 01615824 */  and   $t3, $t3, $at
.L0048ED48:
/* 0048ED48 AFAB0168 */  sw    $t3, 0x168($sp)
/* 0048ED4C 8FAD01DC */  lw    $t5, 0x1dc($sp)
.L0048ED50:
/* 0048ED50 8F888CB8 */  lw     $t0, %got(st_pchdr)($gp)
/* 0048ED54 8F918904 */  lw     $s1, %got(msg_err)($gp)
/* 0048ED58 31AE0200 */  andi  $t6, $t5, 0x200
/* 0048ED5C 51C00028 */  beql  $t6, $zero, .L0048EE00
/* 0048ED60 8FB801DC */   lw    $t8, 0x1dc($sp)
/* 0048ED64 8D020000 */  lw    $v0, ($t0)
/* 0048ED68 8FAF011C */  lw    $t7, 0x11c($sp)
/* 0048ED6C 8C58000C */  lw    $t8, 0xc($v0)
/* 0048ED70 01EBC821 */  addu  $t9, $t7, $t3
/* 0048ED74 AFB9011C */  sw    $t9, 0x11c($sp)
/* 0048ED78 00005825 */  move  $t3, $zero
/* 0048ED7C 1300001E */  beqz  $t8, .L0048EDF8
/* 0048ED80 AFB80170 */   sw    $t8, 0x170($sp)
/* 0048ED84 8C4B000C */  lw    $t3, 0xc($v0)
/* 0048ED88 AFB90174 */  sw    $t9, 0x174($sp)
/* 0048ED8C 8C43000C */  lw    $v1, 0xc($v0)
/* 0048ED90 01600821 */  move  $at, $t3
/* 0048ED94 000B58C0 */  sll   $t3, $t3, 3
/* 0048ED98 01615821 */  addu  $t3, $t3, $at
/* 0048ED9C 10600016 */  beqz  $v1, .L0048EDF8
/* 0048EDA0 000B58C0 */   sll   $t3, $t3, 3
/* 0048EDA4 8F998100 */  lw    $t9, %call16(fwrite)($gp)
/* 0048EDA8 8C440008 */  lw    $a0, 8($v0)
/* 0048EDAC AFAB0120 */  sw    $t3, 0x120($sp)
/* 0048EDB0 24050048 */  li    $a1, 72
/* 0048EDB4 00603025 */  move  $a2, $v1
/* 0048EDB8 0320F809 */  jalr  $t9
/* 0048EDBC 8FA7010C */   lw    $a3, 0x10c($sp)
/* 0048EDC0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048EDC4 8FAB0120 */  lw    $t3, 0x120($sp)
/* 0048EDC8 8F8D8CB8 */  lw     $t5, %got(st_pchdr)($gp)
/* 0048EDCC 8DAD0000 */  lw    $t5, ($t5)
/* 0048EDD0 8DAE000C */  lw    $t6, 0xc($t5)
/* 0048EDD4 104E0008 */  beq   $v0, $t6, .L0048EDF8
/* 0048EDD8 00000000 */   nop   
/* 0048EDDC 8F998788 */  lw    $t9, %call16(st_error)($gp)
/* 0048EDE0 02202025 */  move  $a0, $s1
/* 0048EDE4 AFAB0120 */  sw    $t3, 0x120($sp)
/* 0048EDE8 0320F809 */  jalr  $t9
/* 0048EDEC 00000000 */   nop   
/* 0048EDF0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048EDF4 8FAB0120 */  lw    $t3, 0x120($sp)
.L0048EDF8:
/* 0048EDF8 8F888CB8 */  lw     $t0, %got(st_pchdr)($gp)
/* 0048EDFC 8FB801DC */  lw    $t8, 0x1dc($sp)
.L0048EE00:
/* 0048EE00 8FAC011C */  lw    $t4, 0x11c($sp)
/* 0048EE04 330F0040 */  andi  $t7, $t8, 0x40
/* 0048EE08 51E00042 */  beql  $t7, $zero, .L0048EF14
/* 0048EE0C 8FB801DC */   lw    $t8, 0x1dc($sp)
/* 0048EE10 8FAD0114 */  lw    $t5, 0x114($sp)
/* 0048EE14 018BC821 */  addu  $t9, $t4, $t3
/* 0048EE18 AFB9011C */  sw    $t9, 0x11c($sp)
/* 0048EE1C 19A00037 */  blez  $t5, .L0048EEFC
/* 0048EE20 00005825 */   move  $t3, $zero
/* 0048EE24 AFA00118 */  sw    $zero, 0x118($sp)
.L0048EE28:
/* 0048EE28 8F9987BC */  lw    $t9, %call16(st_pcfd_ifd)($gp)
/* 0048EE2C 8FA40118 */  lw    $a0, 0x118($sp)
/* 0048EE30 AFAB0120 */  sw    $t3, 0x120($sp)
/* 0048EE34 0320F809 */  jalr  $t9
/* 0048EE38 00000000 */   nop   
/* 0048EE3C 8C4E0000 */  lw    $t6, ($v0)
/* 0048EE40 8FB801C0 */  lw    $t8, 0x1c0($sp)
/* 0048EE44 8FAF01C4 */  lw    $t7, 0x1c4($sp)
/* 0048EE48 8FAB0120 */  lw    $t3, 0x120($sp)
/* 0048EE4C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048EE50 AFAE0188 */  sw    $t6, 0x188($sp)
/* 0048EE54 030F6021 */  addu  $t4, $t8, $t7
/* 0048EE58 ADCC0034 */  sw    $t4, 0x34($t6)
/* 0048EE5C 8FAD0188 */  lw    $t5, 0x188($sp)
/* 0048EE60 24050004 */  li    $a1, 4
/* 0048EE64 8DA60038 */  lw    $a2, 0x38($t5)
/* 0048EE68 00062080 */  sll   $a0, $a2, 2
/* 0048EE6C 10C00013 */  beqz  $a2, .L0048EEBC
/* 0048EE70 01645821 */   addu  $t3, $t3, $a0
/* 0048EE74 8F998100 */  lw    $t9, %call16(fwrite)($gp)
/* 0048EE78 8C44002C */  lw    $a0, 0x2c($v0)
/* 0048EE7C AFAB0120 */  sw    $t3, 0x120($sp)
/* 0048EE80 0320F809 */  jalr  $t9
/* 0048EE84 8FA7010C */   lw    $a3, 0x10c($sp)
/* 0048EE88 8FAE0188 */  lw    $t6, 0x188($sp)
/* 0048EE8C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048EE90 8FAB0120 */  lw    $t3, 0x120($sp)
/* 0048EE94 8DD80038 */  lw    $t8, 0x38($t6)
/* 0048EE98 50580009 */  beql  $v0, $t8, .L0048EEC0
/* 0048EE9C 8FAF01C0 */   lw    $t7, 0x1c0($sp)
/* 0048EEA0 8F998788 */  lw    $t9, %call16(st_error)($gp)
/* 0048EEA4 02402025 */  move  $a0, $s2
/* 0048EEA8 AFAB0120 */  sw    $t3, 0x120($sp)
/* 0048EEAC 0320F809 */  jalr  $t9
/* 0048EEB0 00000000 */   nop   
/* 0048EEB4 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048EEB8 8FAB0120 */  lw    $t3, 0x120($sp)
.L0048EEBC:
/* 0048EEBC 8FAF01C0 */  lw    $t7, 0x1c0($sp)
.L0048EEC0:
/* 0048EEC0 8FAC01C4 */  lw    $t4, 0x1c4($sp)
/* 0048EEC4 8FAD0188 */  lw    $t5, 0x188($sp)
/* 0048EEC8 8FAE0178 */  lw    $t6, 0x178($sp)
/* 0048EECC 01ECC821 */  addu  $t9, $t7, $t4
/* 0048EED0 AFB901C0 */  sw    $t9, 0x1c0($sp)
/* 0048EED4 8FAF0118 */  lw    $t7, 0x118($sp)
/* 0048EED8 8DA40038 */  lw    $a0, 0x38($t5)
/* 0048EEDC 8FB90114 */  lw    $t9, 0x114($sp)
/* 0048EEE0 25EC0001 */  addiu $t4, $t7, 1
/* 0048EEE4 01C4C021 */  addu  $t8, $t6, $a0
/* 0048EEE8 AFB80178 */  sw    $t8, 0x178($sp)
/* 0048EEEC AFAC0118 */  sw    $t4, 0x118($sp)
/* 0048EEF0 1599FFCD */  bne   $t4, $t9, .L0048EE28
/* 0048EEF4 AFA401C4 */   sw    $a0, 0x1c4($sp)
/* 0048EEF8 8F888CB8 */  lw     $t0, %got(st_pchdr)($gp)
.L0048EEFC:
/* 0048EEFC 8FAD0178 */  lw    $t5, 0x178($sp)
/* 0048EF00 8FAE011C */  lw    $t6, 0x11c($sp)
/* 0048EF04 51A00003 */  beql  $t5, $zero, .L0048EF14
/* 0048EF08 8FB801DC */   lw    $t8, 0x1dc($sp)
/* 0048EF0C AFAE017C */  sw    $t6, 0x17c($sp)
/* 0048EF10 8FB801DC */  lw    $t8, 0x1dc($sp)
.L0048EF14:
/* 0048EF14 330F0001 */  andi  $t7, $t8, 1
/* 0048EF18 51E00025 */  beql  $t7, $zero, .L0048EFB0
/* 0048EF1C 8FAC01DC */   lw    $t4, 0x1dc($sp)
/* 0048EF20 8D020000 */  lw    $v0, ($t0)
/* 0048EF24 8FB9011C */  lw    $t9, 0x11c($sp)
/* 0048EF28 8C4C001C */  lw    $t4, 0x1c($v0)
/* 0048EF2C 032B6821 */  addu  $t5, $t9, $t3
/* 0048EF30 AFAD011C */  sw    $t5, 0x11c($sp)
/* 0048EF34 00005825 */  move  $t3, $zero
/* 0048EF38 1180001B */  beqz  $t4, .L0048EFA8
/* 0048EF3C AFAC0180 */   sw    $t4, 0x180($sp)
/* 0048EF40 8C4B001C */  lw    $t3, 0x1c($v0)
/* 0048EF44 AFAD0184 */  sw    $t5, 0x184($sp)
/* 0048EF48 8C43001C */  lw    $v1, 0x1c($v0)
/* 0048EF4C 24050010 */  li    $a1, 16
/* 0048EF50 000B5900 */  sll   $t3, $t3, 4
/* 0048EF54 10600014 */  beqz  $v1, .L0048EFA8
/* 0048EF58 00603025 */   move  $a2, $v1
/* 0048EF5C 8F998100 */  lw    $t9, %call16(fwrite)($gp)
/* 0048EF60 8C440018 */  lw    $a0, 0x18($v0)
/* 0048EF64 AFAB0120 */  sw    $t3, 0x120($sp)
/* 0048EF68 0320F809 */  jalr  $t9
/* 0048EF6C 8FA7010C */   lw    $a3, 0x10c($sp)
/* 0048EF70 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048EF74 8FAB0120 */  lw    $t3, 0x120($sp)
/* 0048EF78 8F988CB8 */  lw     $t8, %got(st_pchdr)($gp)
/* 0048EF7C 8F180000 */  lw    $t8, ($t8)
/* 0048EF80 8F0F001C */  lw    $t7, 0x1c($t8)
/* 0048EF84 104F0008 */  beq   $v0, $t7, .L0048EFA8
/* 0048EF88 00000000 */   nop   
/* 0048EF8C 8F998788 */  lw    $t9, %call16(st_error)($gp)
/* 0048EF90 02202025 */  move  $a0, $s1
/* 0048EF94 AFAB0120 */  sw    $t3, 0x120($sp)
/* 0048EF98 0320F809 */  jalr  $t9
/* 0048EF9C 00000000 */   nop   
/* 0048EFA0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048EFA4 8FAB0120 */  lw    $t3, 0x120($sp)
.L0048EFA8:
/* 0048EFA8 8F888CB8 */  lw     $t0, %got(st_pchdr)($gp)
/* 0048EFAC 8FAC01DC */  lw    $t4, 0x1dc($sp)
.L0048EFB0:
/* 0048EFB0 31990010 */  andi  $t9, $t4, 0x10
/* 0048EFB4 1320002C */  beqz  $t9, .L0048F068
/* 0048EFB8 00000000 */   nop   
/* 0048EFBC 8D020000 */  lw    $v0, ($t0)
/* 0048EFC0 8C4E003C */  lw    $t6, 0x3c($v0)
/* 0048EFC4 11C00028 */  beqz  $t6, .L0048F068
/* 0048EFC8 00000000 */   nop   
/* 0048EFCC 8C4D0038 */  lw    $t5, 0x38($v0)
/* 0048EFD0 ADA00000 */  sw    $zero, ($t5)
/* 0048EFD4 8D180000 */  lw    $t8, ($t0)
/* 0048EFD8 8F0F0038 */  lw    $t7, 0x38($t8)
/* 0048EFDC ADE00004 */  sw    $zero, 4($t7)
/* 0048EFE0 8D0C0000 */  lw    $t4, ($t0)
/* 0048EFE4 8D990038 */  lw    $t9, 0x38($t4)
/* 0048EFE8 AF200008 */  sw    $zero, 8($t9)
/* 0048EFEC 8D0E0000 */  lw    $t6, ($t0)
/* 0048EFF0 8DCD0038 */  lw    $t5, 0x38($t6)
/* 0048EFF4 ADA0000C */  sw    $zero, 0xc($t5)
/* 0048EFF8 8D020000 */  lw    $v0, ($t0)
/* 0048EFFC 8FAF011C */  lw    $t7, 0x11c($sp)
/* 0048F000 8C58003C */  lw    $t8, 0x3c($v0)
/* 0048F004 01EB6021 */  addu  $t4, $t7, $t3
/* 0048F008 AFAC011C */  sw    $t4, 0x11c($sp)
/* 0048F00C 13000016 */  beqz  $t8, .L0048F068
/* 0048F010 AFB80138 */   sw    $t8, 0x138($sp)
/* 0048F014 AFAC013C */  sw    $t4, 0x13c($sp)
/* 0048F018 8C43003C */  lw    $v1, 0x3c($v0)
/* 0048F01C 24050008 */  li    $a1, 8
/* 0048F020 10600011 */  beqz  $v1, .L0048F068
/* 0048F024 00000000 */   nop   
/* 0048F028 8F998100 */  lw    $t9, %call16(fwrite)($gp)
/* 0048F02C 8C440038 */  lw    $a0, 0x38($v0)
/* 0048F030 00603025 */  move  $a2, $v1
/* 0048F034 0320F809 */  jalr  $t9
/* 0048F038 8FA7010C */   lw    $a3, 0x10c($sp)
/* 0048F03C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048F040 8F8E8CB8 */  lw     $t6, %got(st_pchdr)($gp)
/* 0048F044 8DCE0000 */  lw    $t6, ($t6)
/* 0048F048 8DCD003C */  lw    $t5, 0x3c($t6)
/* 0048F04C 104D0006 */  beq   $v0, $t5, .L0048F068
/* 0048F050 00000000 */   nop   
/* 0048F054 8F998788 */  lw    $t9, %call16(st_error)($gp)
/* 0048F058 02202025 */  move  $a0, $s1
/* 0048F05C 0320F809 */  jalr  $t9
/* 0048F060 00000000 */   nop   
/* 0048F064 8FBC0034 */  lw    $gp, 0x34($sp)
.L0048F068:
/* 0048F068 8F9980A0 */  lw    $t9, %call16(fflush)($gp)
/* 0048F06C 8FA4010C */  lw    $a0, 0x10c($sp)
/* 0048F070 0320F809 */  jalr  $t9
/* 0048F074 00000000 */   nop   
/* 0048F078 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048F07C 8FA4010C */  lw    $a0, 0x10c($sp)
/* 0048F080 8FA50110 */  lw    $a1, 0x110($sp)
/* 0048F084 8F998104 */  lw    $t9, %call16(fseek)($gp)
/* 0048F088 00003025 */  move  $a2, $zero
/* 0048F08C 0320F809 */  jalr  $t9
/* 0048F090 00000000 */   nop   
/* 0048F094 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048F098 2418070A */  li    $t8, 1802
/* 0048F09C A7B8012A */  sh    $t8, 0x12a($sp)
/* 0048F0A0 8F8F88FC */  lw     $t7, %got(stmagic)($gp)
/* 0048F0A4 8F998100 */  lw    $t9, %call16(fwrite)($gp)
/* 0048F0A8 27A40128 */  addiu $a0, $sp, 0x128
/* 0048F0AC 85EF0000 */  lh    $t7, ($t7)
/* 0048F0B0 24050001 */  li    $a1, 1
/* 0048F0B4 24060060 */  li    $a2, 96
/* 0048F0B8 8FA7010C */  lw    $a3, 0x10c($sp)
/* 0048F0BC 0320F809 */  jalr  $t9
/* 0048F0C0 A7AF0128 */   sh    $t7, 0x128($sp)
/* 0048F0C4 24010060 */  li    $at, 96
/* 0048F0C8 10410006 */  beq   $v0, $at, .L0048F0E4
/* 0048F0CC 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0048F0D0 8F998788 */  lw    $t9, %call16(st_error)($gp)
/* 0048F0D4 8F848044 */  lw    $a0, %got(RO_1000F414)($gp)
/* 0048F0D8 0320F809 */  jalr  $t9
/* 0048F0DC 2484F414 */   addiu $a0, %lo(RO_1000F414) # addiu $a0, $a0, -0xbec
/* 0048F0E0 8FBC0034 */  lw    $gp, 0x34($sp)
.L0048F0E4:
/* 0048F0E4 8F998108 */  lw    $t9, %call16(fclose)($gp)
/* 0048F0E8 8FA4010C */  lw    $a0, 0x10c($sp)
/* 0048F0EC 0320F809 */  jalr  $t9
/* 0048F0F0 00000000 */   nop   
/* 0048F0F4 8FBF003C */  lw    $ra, 0x3c($sp)
/* 0048F0F8 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0048F0FC 8FB00014 */  lw    $s0, 0x14($sp)
/* 0048F100 8FB10018 */  lw    $s1, 0x18($sp)
/* 0048F104 8FB2001C */  lw    $s2, 0x1c($sp)
/* 0048F108 8FB30020 */  lw    $s3, 0x20($sp)
/* 0048F10C 8FB40024 */  lw    $s4, 0x24($sp)
/* 0048F110 8FB50028 */  lw    $s5, 0x28($sp)
/* 0048F114 8FB6002C */  lw    $s6, 0x2c($sp)
/* 0048F118 8FB70030 */  lw    $s7, 0x30($sp)
/* 0048F11C 8FBE0038 */  lw    $fp, 0x38($sp)
/* 0048F120 03E00008 */  jr    $ra
/* 0048F124 27BD01D8 */   addiu $sp, $sp, 0x1d8
    .type st_writest, @function
    .size st_writest, .-st_writest
    .end st_writest

glabel st_setstmagic
    .ent st_setstmagic
/* 0048F128 3C1C0FB9 */  .cpload $t9
/* 0048F12C 279CB168 */  
/* 0048F130 0399E021 */  
/* 0048F134 AFA40000 */  sw    $a0, ($sp)
/* 0048F138 8F8188FC */  lw     $at, %got(stmagic)($gp)
/* 0048F13C 00042400 */  sll   $a0, $a0, 0x10
/* 0048F140 00042403 */  sra   $a0, $a0, 0x10
/* 0048F144 03E00008 */  jr    $ra
/* 0048F148 A4240000 */   sh    $a0, ($at)
    .type st_setstmagic, @function
    .size st_setstmagic, .-st_setstmagic
    .end st_setstmagic
)"");
