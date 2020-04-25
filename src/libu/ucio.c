__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
RO_1000E8B0:
    # 00487218 uputint
    .asciz "uput: output file not initialized\n"

RO_1000E8D4:
    # 00487218 uputint
    .asciz "writing out file"

RO_1000E8E8:
    # 00487328 uputflush
    .asciz "uput: output file not initialized\n"

RO_1000E90C:
    # 00487328 uputflush
    .asciz "writing out file"

RO_1000E920:
    # 00487458 uputkill
    .asciz "uput: output file not initialized\n"

RO_1000E944:
    # 00487458 uputkill
    .asciz "uput: cannot unlink because uputinitfd was used\n"

RO_1000E978:
    # 00487668 ugetint
    .asciz "uget: input file not initialized\n"

RO_1000E99C:
    # 00487668 ugetint
    .asciz "read too much from get buffer\n"

RO_1000E9BC:
    # 00487668 ugetint
    .asciz "reading in file"

RO_1000E9CC:
    # 00487668 ugetint
    .asciz "input buffer on non-int boundry\n"

RO_1000E9F0:
    # 004878AC ugetclose
    .asciz "uget: input file not initialized\n"

.data
D_100118F0:
    # 00487624 ugetbufinit
    # 00487668 ugetint
    .byte 0x10,0x01,0x39,0x20

D_100118F4:
    # 00487624 ugetbufinit
    # 00487668 ugetint
    # 00487848 ugeteof
    .byte 0xff,0xff,0xff,0xff

D_100118F8:
    # 0048752C ugetinit
    # 0048760C ugetinitfd
    # 00487624 ugetbufinit
    # 00487668 ugetint
    # 004878AC ugetclose
    .byte 0xff,0xff,0xff,0xff

D_100118FC:
    # 00487120 uputinit
    # 00487200 uputinitfd
    # 00487218 uputint
    # 00487328 uputflush
    # 00487408 uputclose
    # 00487458 uputkill
    .byte 0xff,0xff,0xff,0xff


.bss
B_10017920:
    # 00487624 ugetbufinit
    # 00487668 ugetint
    # 00487848 ugeteof
    .space 8

B_10017928:
    # 00487218 uputint
    # 00487328 uputflush
    .space 16384

B_1001B928:
    # 00487218 uputint
    # 00487328 uputflush
    .space 8

B_1001B930:
    # 0048752C ugetinit
    .space 1024

B_1001BD30:
    # 0048752C ugetinit
    .space 8

B_1001BD38:
    # 00487120 uputinit
    # 00487458 uputkill
    .space 1024

B_1001C138:
    # 00487120 uputinit
    .space 24



.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text

glabel uputinit
    .ent uputinit
    # 00486690 inituwrite
/* 00487120 3C1C0FB9 */  .cpload $t9
/* 00487124 279C3170 */  
/* 00487128 0399E021 */  
/* 0048712C 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00487130 8F878048 */  lw    $a3, %got(B_1001BD38)($gp)
/* 00487134 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00487138 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0048713C 90820000 */  lbu   $v0, ($a0)
/* 00487140 24E7BD38 */  addiu $a3, %lo(B_1001BD38) # addiu $a3, $a3, -0x42c8
/* 00487144 00E01825 */  move  $v1, $a3
/* 00487148 1040000F */  beqz  $v0, .L00487188
/* 0048714C 24050020 */   li    $a1, 32
/* 00487150 50A2000E */  beql  $a1, $v0, .L0048718C
/* 00487154 A0600000 */   sb    $zero, ($v1)
/* 00487158 8F868048 */  lw    $a2, %got(B_1001C138)($gp)
/* 0048715C 24C6C138 */  addiu $a2, %lo(B_1001C138) # addiu $a2, $a2, -0x3ec8
/* 00487160 24630001 */  addiu $v1, $v1, 1
.L00487164:
/* 00487164 0066082B */  sltu  $at, $v1, $a2
/* 00487168 24840001 */  addiu $a0, $a0, 1
/* 0048716C 10200006 */  beqz  $at, .L00487188
/* 00487170 A062FFFF */   sb    $v0, -1($v1)
/* 00487174 90820000 */  lbu   $v0, ($a0)
/* 00487178 50400004 */  beql  $v0, $zero, .L0048718C
/* 0048717C A0600000 */   sb    $zero, ($v1)
/* 00487180 54A2FFF8 */  bnel  $a1, $v0, .L00487164
/* 00487184 24630001 */   addiu $v1, $v1, 1
.L00487188:
/* 00487188 A0600000 */  sb    $zero, ($v1)
.L0048718C:
/* 0048718C 90EE0000 */  lbu   $t6, ($a3)
/* 00487190 51C00018 */  beql  $t6, $zero, .L004871F4
/* 00487194 8FBF001C */   lw    $ra, 0x1c($sp)
/* 00487198 8F99808C */  lw    $t9, %call16(open)($gp)
/* 0048719C 00E02025 */  move  $a0, $a3
/* 004871A0 24050301 */  li    $a1, 769
/* 004871A4 0320F809 */  jalr  $t9
/* 004871A8 240601B6 */   li    $a2, 438
/* 004871AC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004871B0 8F838044 */  lw    $v1, %got(D_100118FC)($gp)
/* 004871B4 8F878048 */  lw    $a3, %got(B_1001BD38)($gp)
/* 004871B8 246318FC */  addiu $v1, %lo(D_100118FC) # addiu $v1, $v1, 0x18fc
/* 004871BC AC620000 */  sw    $v0, ($v1)
/* 004871C0 0441000B */  bgez  $v0, .L004871F0
/* 004871C4 24E7BD38 */   addiu $a3, %lo(B_1001BD38) # addiu $a3, $a3, -0x42c8
/* 004871C8 8F9980B4 */  lw    $t9, %call16(perror)($gp)
/* 004871CC 00E02025 */  move  $a0, $a3
/* 004871D0 0320F809 */  jalr  $t9
/* 004871D4 00000000 */   nop   
/* 004871D8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004871DC 24040001 */  li    $a0, 1
/* 004871E0 8F9988A8 */  lw    $t9, %call16(exit)($gp)
/* 004871E4 0320F809 */  jalr  $t9
/* 004871E8 00000000 */   nop   
/* 004871EC 8FBC0018 */  lw    $gp, 0x18($sp)
.L004871F0:
/* 004871F0 8FBF001C */  lw    $ra, 0x1c($sp)
.L004871F4:
/* 004871F4 27BD0020 */  addiu $sp, $sp, 0x20
/* 004871F8 03E00008 */  jr    $ra
/* 004871FC 00000000 */   nop   
    .type uputinit, @function
    .size uputinit, .-uputinit
    .end uputinit

glabel uputinitfd
    .ent uputinitfd
/* 00487200 3C1C0FB9 */  .cpload $t9
/* 00487204 279C3090 */  
/* 00487208 0399E021 */  
/* 0048720C 8F818044 */  lw    $at, %got(D_100118FC)($gp)
/* 00487210 03E00008 */  jr    $ra
/* 00487214 AC2418FC */   sw    $a0, %lo(D_100118FC)($at)
    .type uputinitfd, @function
    .size uputinitfd, .-uputinitfd
    .end uputinitfd

glabel uputint
    .ent uputint
    # 00486880 uwrite
/* 00487218 3C1C0FB9 */  .cpload $t9
/* 0048721C 279C3078 */  
/* 00487220 0399E021 */  
/* 00487224 8F8E8044 */  lw    $t6, %got(D_100118FC)($gp)
/* 00487228 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0048722C AFBF001C */  sw    $ra, 0x1c($sp)
/* 00487230 8DCE18FC */  lw    $t6, %lo(D_100118FC)($t6)
/* 00487234 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00487238 AFA40020 */  sw    $a0, 0x20($sp)
/* 0048723C 05C10012 */  bgez  $t6, .L00487288
/* 00487240 00000000 */   nop   
/* 00487244 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 00487248 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 0048724C 8F858044 */  lw    $a1, %got(RO_1000E8B0)($gp)
/* 00487250 24840020 */  addiu $a0, $a0, 0x20
/* 00487254 0320F809 */  jalr  $t9
/* 00487258 24A5E8B0 */   addiu $a1, %lo(RO_1000E8B0) # addiu $a1, $a1, -0x1750
/* 0048725C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00487260 8F9980A0 */  lw    $t9, %call16(fflush)($gp)
/* 00487264 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 00487268 0320F809 */  jalr  $t9
/* 0048726C 24840020 */   addiu $a0, $a0, 0x20
/* 00487270 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00487274 24040001 */  li    $a0, 1
/* 00487278 8F9988A8 */  lw    $t9, %call16(exit)($gp)
/* 0048727C 0320F809 */  jalr  $t9
/* 00487280 00000000 */   nop   
/* 00487284 8FBC0018 */  lw    $gp, 0x18($sp)
.L00487288:
/* 00487288 8F828048 */  lw    $v0, %got(B_1001B928)($gp)
/* 0048728C 8C42B928 */  lw    $v0, %lo(B_1001B928)($v0)
/* 00487290 28411000 */  slti  $at, $v0, 0x1000
/* 00487294 14200018 */  bnez  $at, .L004872F8
/* 00487298 00000000 */   nop   
/* 0048729C 8F9980AC */  lw    $t9, %call16(write)($gp)
/* 004872A0 8F848044 */  lw    $a0, %got(D_100118FC)($gp)
/* 004872A4 8F858044 */  lw    $a1, %got(B_10017928)($gp)
/* 004872A8 24064000 */  li    $a2, 16384
/* 004872AC 8C8418FC */  lw    $a0, %lo(D_100118FC)($a0)
/* 004872B0 0320F809 */  jalr  $t9
/* 004872B4 24A57928 */   addiu $a1, %lo(B_10017928) # addiu $a1, $a1, 0x7928
/* 004872B8 24014000 */  li    $at, 16384
/* 004872BC 1041000B */  beq   $v0, $at, .L004872EC
/* 004872C0 8FBC0018 */   lw    $gp, 0x18($sp)
/* 004872C4 8F9980B4 */  lw    $t9, %call16(perror)($gp)
/* 004872C8 8F848044 */  lw    $a0, %got(RO_1000E8D4)($gp)
/* 004872CC 0320F809 */  jalr  $t9
/* 004872D0 2484E8D4 */   addiu $a0, %lo(RO_1000E8D4) # addiu $a0, $a0, -0x172c
/* 004872D4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004872D8 24040001 */  li    $a0, 1
/* 004872DC 8F9988A8 */  lw    $t9, %call16(exit)($gp)
/* 004872E0 0320F809 */  jalr  $t9
/* 004872E4 00000000 */   nop   
/* 004872E8 8FBC0018 */  lw    $gp, 0x18($sp)
.L004872EC:
/* 004872EC 8F818048 */  lw    $at, %got(B_1001B928)($gp)
/* 004872F0 00001025 */  move  $v0, $zero
/* 004872F4 AC20B928 */  sw    $zero, %lo(B_1001B928)($at)
.L004872F8:
/* 004872F8 8F998044 */  lw    $t9, %got(B_10017928)($gp)
/* 004872FC 8FAF0020 */  lw    $t7, 0x20($sp)
/* 00487300 0002C080 */  sll   $t8, $v0, 2
/* 00487304 27397928 */  addiu $t9, %lo(B_10017928) # addiu $t9, $t9, 0x7928
/* 00487308 03194021 */  addu  $t0, $t8, $t9
/* 0048730C AD0F0000 */  sw    $t7, ($t0)
/* 00487310 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00487314 8F818048 */  lw    $at, %got(B_1001B928)($gp)
/* 00487318 24490001 */  addiu $t1, $v0, 1
/* 0048731C 27BD0020 */  addiu $sp, $sp, 0x20
/* 00487320 03E00008 */  jr    $ra
/* 00487324 AC29B928 */   sw    $t1, %lo(B_1001B928)($at)
    .type uputint, @function
    .size uputint, .-uputint
    .end uputint

glabel uputflush
    .ent uputflush
    # 00487408 uputclose
/* 00487328 3C1C0FB9 */  .cpload $t9
/* 0048732C 279C2F68 */  
/* 00487330 0399E021 */  
/* 00487334 8F848044 */  lw    $a0, %got(D_100118FC)($gp)
/* 00487338 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0048733C AFBF001C */  sw    $ra, 0x1c($sp)
/* 00487340 8C8418FC */  lw    $a0, %lo(D_100118FC)($a0)
/* 00487344 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00487348 04810014 */  bgez  $a0, .L0048739C
/* 0048734C 00000000 */   nop   
/* 00487350 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 00487354 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 00487358 8F858044 */  lw    $a1, %got(RO_1000E8E8)($gp)
/* 0048735C 24840020 */  addiu $a0, $a0, 0x20
/* 00487360 0320F809 */  jalr  $t9
/* 00487364 24A5E8E8 */   addiu $a1, %lo(RO_1000E8E8) # addiu $a1, $a1, -0x1718
/* 00487368 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048736C 8F9980A0 */  lw    $t9, %call16(fflush)($gp)
/* 00487370 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 00487374 0320F809 */  jalr  $t9
/* 00487378 24840020 */   addiu $a0, $a0, 0x20
/* 0048737C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00487380 24040001 */  li    $a0, 1
/* 00487384 8F9988A8 */  lw    $t9, %call16(exit)($gp)
/* 00487388 0320F809 */  jalr  $t9
/* 0048738C 00000000 */   nop   
/* 00487390 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00487394 8F848044 */  lw    $a0, %got(D_100118FC)($gp)
/* 00487398 8C8418FC */  lw    $a0, %lo(D_100118FC)($a0)
.L0048739C:
/* 0048739C 8F868048 */  lw    $a2, %got(B_1001B928)($gp)
/* 004873A0 8F9980AC */  lw    $t9, %call16(write)($gp)
/* 004873A4 8F858044 */  lw    $a1, %got(B_10017928)($gp)
/* 004873A8 8CC6B928 */  lw    $a2, %lo(B_1001B928)($a2)
/* 004873AC 24A57928 */  addiu $a1, %lo(B_10017928) # addiu $a1, $a1, 0x7928
/* 004873B0 0320F809 */  jalr  $t9
/* 004873B4 00063080 */   sll   $a2, $a2, 2
/* 004873B8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004873BC 8F8E8048 */  lw    $t6, %got(B_1001B928)($gp)
/* 004873C0 8DCEB928 */  lw    $t6, %lo(B_1001B928)($t6)
/* 004873C4 000E7880 */  sll   $t7, $t6, 2
/* 004873C8 504F000C */  beql  $v0, $t7, .L004873FC
/* 004873CC 8FBF001C */   lw    $ra, 0x1c($sp)
/* 004873D0 8F9980B4 */  lw    $t9, %call16(perror)($gp)
/* 004873D4 8F848044 */  lw    $a0, %got(RO_1000E90C)($gp)
/* 004873D8 0320F809 */  jalr  $t9
/* 004873DC 2484E90C */   addiu $a0, %lo(RO_1000E90C) # addiu $a0, $a0, -0x16f4
/* 004873E0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004873E4 24040001 */  li    $a0, 1
/* 004873E8 8F9988A8 */  lw    $t9, %call16(exit)($gp)
/* 004873EC 0320F809 */  jalr  $t9
/* 004873F0 00000000 */   nop   
/* 004873F4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004873F8 8FBF001C */  lw    $ra, 0x1c($sp)
.L004873FC:
/* 004873FC 27BD0020 */  addiu $sp, $sp, 0x20
/* 00487400 03E00008 */  jr    $ra
/* 00487404 00000000 */   nop   
    .type uputflush, @function
    .size uputflush, .-uputflush
    .end uputflush

glabel uputclose
    .ent uputclose
    # 0045806C main
/* 00487408 3C1C0FB9 */  .cpload $t9
/* 0048740C 279C2E88 */  
/* 00487410 0399E021 */  
/* 00487414 8F99874C */  lw    $t9, %call16(uputflush)($gp)
/* 00487418 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0048741C AFBF001C */  sw    $ra, 0x1c($sp)
/* 00487420 0320F809 */  jalr  $t9
/* 00487424 AFBC0018 */   sw    $gp, 0x18($sp)
/* 00487428 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048742C 8F998098 */  lw    $t9, %call16(close)($gp)
/* 00487430 8F848044 */  lw    $a0, %got(D_100118FC)($gp)
/* 00487434 0320F809 */  jalr  $t9
/* 00487438 8C8418FC */   lw    $a0, %lo(D_100118FC)($a0)
/* 0048743C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00487440 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00487444 240EFFFF */  li    $t6, -1
/* 00487448 8F818044 */  lw    $at, %got(D_100118FC)($gp)
/* 0048744C 27BD0020 */  addiu $sp, $sp, 0x20
/* 00487450 03E00008 */  jr    $ra
/* 00487454 AC2E18FC */   sw    $t6, %lo(D_100118FC)($at)
    .type uputclose, @function
    .size uputclose, .-uputclose
    .end uputclose

glabel uputkill
    .ent uputkill
    # 00486E50 stopucode
/* 00487458 3C1C0FB9 */  .cpload $t9
/* 0048745C 279C2E38 */  
/* 00487460 0399E021 */  
/* 00487464 8F8E8044 */  lw    $t6, %got(D_100118FC)($gp)
/* 00487468 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0048746C AFBF001C */  sw    $ra, 0x1c($sp)
/* 00487470 8DCE18FC */  lw    $t6, %lo(D_100118FC)($t6)
/* 00487474 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00487478 05C10012 */  bgez  $t6, .L004874C4
/* 0048747C 00000000 */   nop   
/* 00487480 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 00487484 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 00487488 8F858044 */  lw    $a1, %got(RO_1000E920)($gp)
/* 0048748C 24840020 */  addiu $a0, $a0, 0x20
/* 00487490 0320F809 */  jalr  $t9
/* 00487494 24A5E920 */   addiu $a1, %lo(RO_1000E920) # addiu $a1, $a1, -0x16e0
/* 00487498 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048749C 8F9980A0 */  lw    $t9, %call16(fflush)($gp)
/* 004874A0 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 004874A4 0320F809 */  jalr  $t9
/* 004874A8 24840020 */   addiu $a0, $a0, 0x20
/* 004874AC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004874B0 24040001 */  li    $a0, 1
/* 004874B4 8F9988A8 */  lw    $t9, %call16(exit)($gp)
/* 004874B8 0320F809 */  jalr  $t9
/* 004874BC 00000000 */   nop   
/* 004874C0 8FBC0018 */  lw    $gp, 0x18($sp)
.L004874C4:
/* 004874C4 8F848048 */  lw    $a0, %got(B_1001BD38)($gp)
/* 004874C8 2484BD38 */  addiu $a0, %lo(B_1001BD38) # addiu $a0, $a0, -0x42c8
/* 004874CC 908F0000 */  lbu   $t7, ($a0)
/* 004874D0 11E00006 */  beqz  $t7, .L004874EC
/* 004874D4 00000000 */   nop   
/* 004874D8 8F9980B0 */  lw    $t9, %call16(unlink)($gp)
/* 004874DC 0320F809 */  jalr  $t9
/* 004874E0 00000000 */   nop   
/* 004874E4 1000000D */  b     .L0048751C
/* 004874E8 8FBC0018 */   lw    $gp, 0x18($sp)
.L004874EC:
/* 004874EC 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 004874F0 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 004874F4 8F858044 */  lw    $a1, %got(RO_1000E944)($gp)
/* 004874F8 24840020 */  addiu $a0, $a0, 0x20
/* 004874FC 0320F809 */  jalr  $t9
/* 00487500 24A5E944 */   addiu $a1, %lo(RO_1000E944) # addiu $a1, $a1, -0x16bc
/* 00487504 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00487508 8F9980A0 */  lw    $t9, %call16(fflush)($gp)
/* 0048750C 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 00487510 0320F809 */  jalr  $t9
/* 00487514 24840020 */   addiu $a0, $a0, 0x20
/* 00487518 8FBC0018 */  lw    $gp, 0x18($sp)
.L0048751C:
/* 0048751C 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00487520 27BD0020 */  addiu $sp, $sp, 0x20
/* 00487524 03E00008 */  jr    $ra
/* 00487528 00000000 */   nop   
    .type uputkill, @function
    .size uputkill, .-uputkill
    .end uputkill

glabel ugetinit
    .ent ugetinit
    # 00487E48 initur
/* 0048752C 3C1C0FB9 */  .cpload $t9
/* 00487530 279C2D64 */  
/* 00487534 0399E021 */  
/* 00487538 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0048753C 8F878048 */  lw    $a3, %got(B_1001B930)($gp)
/* 00487540 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00487544 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00487548 90820000 */  lbu   $v0, ($a0)
/* 0048754C 24E7B930 */  addiu $a3, %lo(B_1001B930) # addiu $a3, $a3, -0x46d0
/* 00487550 00E01825 */  move  $v1, $a3
/* 00487554 1040000F */  beqz  $v0, .L00487594
/* 00487558 24050020 */   li    $a1, 32
/* 0048755C 50A2000E */  beql  $a1, $v0, .L00487598
/* 00487560 A0600000 */   sb    $zero, ($v1)
/* 00487564 8F868048 */  lw    $a2, %got(B_1001BD30)($gp)
/* 00487568 24C6BD30 */  addiu $a2, %lo(B_1001BD30) # addiu $a2, $a2, -0x42d0
/* 0048756C 24630001 */  addiu $v1, $v1, 1
.L00487570:
/* 00487570 0066082B */  sltu  $at, $v1, $a2
/* 00487574 24840001 */  addiu $a0, $a0, 1
/* 00487578 10200006 */  beqz  $at, .L00487594
/* 0048757C A062FFFF */   sb    $v0, -1($v1)
/* 00487580 90820000 */  lbu   $v0, ($a0)
/* 00487584 50400004 */  beql  $v0, $zero, .L00487598
/* 00487588 A0600000 */   sb    $zero, ($v1)
/* 0048758C 54A2FFF8 */  bnel  $a1, $v0, .L00487570
/* 00487590 24630001 */   addiu $v1, $v1, 1
.L00487594:
/* 00487594 A0600000 */  sb    $zero, ($v1)
.L00487598:
/* 00487598 90EE0000 */  lbu   $t6, ($a3)
/* 0048759C 51C00018 */  beql  $t6, $zero, .L00487600
/* 004875A0 8FBF001C */   lw    $ra, 0x1c($sp)
/* 004875A4 8F99808C */  lw    $t9, %call16(open)($gp)
/* 004875A8 00E02025 */  move  $a0, $a3
/* 004875AC 00002825 */  move  $a1, $zero
/* 004875B0 0320F809 */  jalr  $t9
/* 004875B4 00003025 */   move  $a2, $zero
/* 004875B8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004875BC 8F838044 */  lw    $v1, %got(D_100118F8)($gp)
/* 004875C0 8F878048 */  lw    $a3, %got(B_1001B930)($gp)
/* 004875C4 246318F8 */  addiu $v1, %lo(D_100118F8) # addiu $v1, $v1, 0x18f8
/* 004875C8 AC620000 */  sw    $v0, ($v1)
/* 004875CC 0441000B */  bgez  $v0, .L004875FC
/* 004875D0 24E7B930 */   addiu $a3, %lo(B_1001B930) # addiu $a3, $a3, -0x46d0
/* 004875D4 8F9980B4 */  lw    $t9, %call16(perror)($gp)
/* 004875D8 00E02025 */  move  $a0, $a3
/* 004875DC 0320F809 */  jalr  $t9
/* 004875E0 00000000 */   nop   
/* 004875E4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004875E8 24040001 */  li    $a0, 1
/* 004875EC 8F9988A8 */  lw    $t9, %call16(exit)($gp)
/* 004875F0 0320F809 */  jalr  $t9
/* 004875F4 00000000 */   nop   
/* 004875F8 8FBC0018 */  lw    $gp, 0x18($sp)
.L004875FC:
/* 004875FC 8FBF001C */  lw    $ra, 0x1c($sp)
.L00487600:
/* 00487600 27BD0020 */  addiu $sp, $sp, 0x20
/* 00487604 03E00008 */  jr    $ra
/* 00487608 00000000 */   nop   
    .type ugetinit, @function
    .size ugetinit, .-ugetinit
    .end ugetinit

glabel ugetinitfd
    .ent ugetinitfd
/* 0048760C 3C1C0FB9 */  .cpload $t9
/* 00487610 279C2C84 */  
/* 00487614 0399E021 */  
/* 00487618 8F818044 */  lw    $at, %got(D_100118F8)($gp)
/* 0048761C 03E00008 */  jr    $ra
/* 00487620 AC2418F8 */   sw    $a0, %lo(D_100118F8)($at)
    .type ugetinitfd, @function
    .size ugetinitfd, .-ugetinitfd
    .end ugetinitfd

glabel ugetbufinit
    .ent ugetbufinit
/* 00487624 3C1C0FB9 */  .cpload $t9
/* 00487628 279C2C6C */  
/* 0048762C 0399E021 */  
/* 00487630 8F818044 */  lw    $at, %got(D_100118F8)($gp)
/* 00487634 340EFFFF */  li    $t6, 65535
/* 00487638 AC2E18F8 */  sw    $t6, %lo(D_100118F8)($at)
/* 0048763C 8F818044 */  lw    $at, %got(D_100118F0)($gp)
/* 00487640 AC2418F0 */  sw    $a0, %lo(D_100118F0)($at)
/* 00487644 04A10003 */  bgez  $a1, .L00487654
/* 00487648 00057883 */   sra   $t7, $a1, 2
/* 0048764C 24A10003 */  addiu $at, $a1, 3
/* 00487650 00017883 */  sra   $t7, $at, 2
.L00487654:
/* 00487654 8F818044 */  lw    $at, %got(D_100118F4)($gp)
/* 00487658 AC2F18F4 */  sw    $t7, %lo(D_100118F4)($at)
/* 0048765C 8F818044 */  lw    $at, %got(B_10017920)($gp)
/* 00487660 03E00008 */  jr    $ra
/* 00487664 AC207920 */   sw    $zero, %lo(B_10017920)($at)
    .type ugetbufinit, @function
    .size ugetbufinit, .-ugetbufinit
    .end ugetbufinit

glabel ugetint
    .ent ugetint
    # 00487848 ugeteof
    # 00487B7C readuinstr
/* 00487668 3C1C0FB9 */  .cpload $t9
/* 0048766C 279C2C28 */  
/* 00487670 0399E021 */  
/* 00487674 8F8E8044 */  lw    $t6, %got(D_100118F8)($gp)
/* 00487678 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0048767C AFBF001C */  sw    $ra, 0x1c($sp)
/* 00487680 8DCE18F8 */  lw    $t6, %lo(D_100118F8)($t6)
/* 00487684 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00487688 05C10012 */  bgez  $t6, .L004876D4
/* 0048768C 00000000 */   nop   
/* 00487690 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 00487694 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 00487698 8F858044 */  lw    $a1, %got(RO_1000E978)($gp)
/* 0048769C 24840020 */  addiu $a0, $a0, 0x20
/* 004876A0 0320F809 */  jalr  $t9
/* 004876A4 24A5E978 */   addiu $a1, %lo(RO_1000E978) # addiu $a1, $a1, -0x1688
/* 004876A8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004876AC 8F9980A0 */  lw    $t9, %call16(fflush)($gp)
/* 004876B0 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 004876B4 0320F809 */  jalr  $t9
/* 004876B8 24840020 */   addiu $a0, $a0, 0x20
/* 004876BC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004876C0 24040001 */  li    $a0, 1
/* 004876C4 8F9988A8 */  lw    $t9, %call16(exit)($gp)
/* 004876C8 0320F809 */  jalr  $t9
/* 004876CC 00000000 */   nop   
/* 004876D0 8FBC0018 */  lw    $gp, 0x18($sp)
.L004876D4:
/* 004876D4 8F848044 */  lw    $a0, %got(B_10017920)($gp)
/* 004876D8 8F838044 */  lw    $v1, %got(D_100118F4)($gp)
/* 004876DC 8C847920 */  lw    $a0, %lo(B_10017920)($a0)
/* 004876E0 8C6318F4 */  lw    $v1, %lo(D_100118F4)($v1)
/* 004876E4 0083082A */  slt   $at, $a0, $v1
/* 004876E8 1420004C */  bnez  $at, .L0048781C
/* 004876EC 00000000 */   nop   
/* 004876F0 8F848044 */  lw    $a0, %got(D_100118F8)($gp)
/* 004876F4 3401FFFF */  li    $at, 65535
/* 004876F8 8C8418F8 */  lw    $a0, %lo(D_100118F8)($a0)
/* 004876FC 14810015 */  bne   $a0, $at, .L00487754
/* 00487700 00000000 */   nop   
/* 00487704 18600004 */  blez  $v1, .L00487718
/* 00487708 00000000 */   nop   
/* 0048770C 8F818044 */  lw    $at, %got(D_100118F4)($gp)
/* 00487710 1000000D */  b     .L00487748
/* 00487714 AC2018F4 */   sw    $zero, %lo(D_100118F4)($at)
.L00487718:
/* 00487718 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 0048771C 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 00487720 8F858044 */  lw    $a1, %got(RO_1000E99C)($gp)
/* 00487724 24840020 */  addiu $a0, $a0, 0x20
/* 00487728 0320F809 */  jalr  $t9
/* 0048772C 24A5E99C */   addiu $a1, %lo(RO_1000E99C) # addiu $a1, $a1, -0x1664
/* 00487730 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00487734 24040001 */  li    $a0, 1
/* 00487738 8F9988A8 */  lw    $t9, %call16(exit)($gp)
/* 0048773C 0320F809 */  jalr  $t9
/* 00487740 00000000 */   nop   
/* 00487744 8FBC0018 */  lw    $gp, 0x18($sp)
.L00487748:
/* 00487748 8F838044 */  lw    $v1, %got(D_100118F4)($gp)
/* 0048774C 1000002A */  b     .L004877F8
/* 00487750 8C6318F4 */   lw    $v1, %lo(D_100118F4)($v1)
.L00487754:
/* 00487754 8F998094 */  lw    $t9, %call16(read)($gp)
/* 00487758 8F858044 */  lw    $a1, %got(D_100118F0)($gp)
/* 0048775C 24064000 */  li    $a2, 16384
/* 00487760 0320F809 */  jalr  $t9
/* 00487764 8CA518F0 */   lw    $a1, %lo(D_100118F0)($a1)
/* 00487768 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048776C 8F818044 */  lw    $at, %got(D_100118F4)($gp)
/* 00487770 8F838044 */  lw    $v1, %got(D_100118F4)($gp)
/* 00487774 AC2218F4 */  sw    $v0, %lo(D_100118F4)($at)
/* 00487778 8C6318F4 */  lw    $v1, %lo(D_100118F4)($v1)
/* 0048777C 0463000E */  bgezl $v1, .L004877B8
/* 00487780 306F0003 */   andi  $t7, $v1, 3
/* 00487784 8F9980B4 */  lw    $t9, %call16(perror)($gp)
/* 00487788 8F848044 */  lw    $a0, %got(RO_1000E9BC)($gp)
/* 0048778C 0320F809 */  jalr  $t9
/* 00487790 2484E9BC */   addiu $a0, %lo(RO_1000E9BC) # addiu $a0, $a0, -0x1644
/* 00487794 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00487798 24040001 */  li    $a0, 1
/* 0048779C 8F9988A8 */  lw    $t9, %call16(exit)($gp)
/* 004877A0 0320F809 */  jalr  $t9
/* 004877A4 00000000 */   nop   
/* 004877A8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004877AC 8F838044 */  lw    $v1, %got(D_100118F4)($gp)
/* 004877B0 8C6318F4 */  lw    $v1, %lo(D_100118F4)($v1)
/* 004877B4 306F0003 */  andi  $t7, $v1, 3
.L004877B8:
/* 004877B8 11E0000F */  beqz  $t7, .L004877F8
/* 004877BC 00000000 */   nop   
/* 004877C0 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 004877C4 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 004877C8 8F858044 */  lw    $a1, %got(RO_1000E9CC)($gp)
/* 004877CC 24840020 */  addiu $a0, $a0, 0x20
/* 004877D0 0320F809 */  jalr  $t9
/* 004877D4 24A5E9CC */   addiu $a1, %lo(RO_1000E9CC) # addiu $a1, $a1, -0x1634
/* 004877D8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004877DC 24040001 */  li    $a0, 1
/* 004877E0 8F9988A8 */  lw    $t9, %call16(exit)($gp)
/* 004877E4 0320F809 */  jalr  $t9
/* 004877E8 00000000 */   nop   
/* 004877EC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004877F0 8F838044 */  lw    $v1, %got(D_100118F4)($gp)
/* 004877F4 8C6318F4 */  lw    $v1, %lo(D_100118F4)($v1)
.L004877F8:
/* 004877F8 04610003 */  bgez  $v1, .L00487808
/* 004877FC 0003C083 */   sra   $t8, $v1, 2
/* 00487800 24610003 */  addiu $at, $v1, 3
/* 00487804 0001C083 */  sra   $t8, $at, 2
.L00487808:
/* 00487808 8F818044 */  lw    $at, %got(D_100118F4)($gp)
/* 0048780C 00002025 */  move  $a0, $zero
/* 00487810 AC3818F4 */  sw    $t8, %lo(D_100118F4)($at)
/* 00487814 8F818044 */  lw    $at, %got(B_10017920)($gp)
/* 00487818 AC207920 */  sw    $zero, %lo(B_10017920)($at)
.L0048781C:
/* 0048781C 8F998044 */  lw    $t9, %got(D_100118F0)($gp)
/* 00487820 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00487824 00044080 */  sll   $t0, $a0, 2
/* 00487828 8F3918F0 */  lw    $t9, %lo(D_100118F0)($t9)
/* 0048782C 8F818044 */  lw    $at, %got(B_10017920)($gp)
/* 00487830 248A0001 */  addiu $t2, $a0, 1
/* 00487834 03284821 */  addu  $t1, $t9, $t0
/* 00487838 8D220000 */  lw    $v0, ($t1)
/* 0048783C 27BD0020 */  addiu $sp, $sp, 0x20
/* 00487840 03E00008 */  jr    $ra
/* 00487844 AC2A7920 */   sw    $t2, %lo(B_10017920)($at)
    .type ugetint, @function
    .size ugetint, .-ugetint
    .end ugetint

glabel ugeteof
    .ent ugeteof
    # 00487B7C readuinstr
/* 00487848 3C1C0FB9 */  .cpload $t9
/* 0048784C 279C2A48 */  
/* 00487850 0399E021 */  
/* 00487854 8F99875C */  lw    $t9, %call16(ugetint)($gp)
/* 00487858 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0048785C AFBF001C */  sw    $ra, 0x1c($sp)
/* 00487860 0320F809 */  jalr  $t9
/* 00487864 AFBC0018 */   sw    $gp, 0x18($sp)
/* 00487868 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048786C 8F8E8044 */  lw    $t6, %got(D_100118F4)($gp)
/* 00487870 8DCE18F4 */  lw    $t6, %lo(D_100118F4)($t6)
/* 00487874 15C00003 */  bnez  $t6, .L00487884
/* 00487878 00000000 */   nop   
/* 0048787C 10000007 */  b     .L0048789C
/* 00487880 24020001 */   li    $v0, 1
.L00487884:
/* 00487884 8F838044 */  lw    $v1, %got(B_10017920)($gp)
/* 00487888 00001025 */  move  $v0, $zero
/* 0048788C 24637920 */  addiu $v1, %lo(B_10017920) # addiu $v1, $v1, 0x7920
/* 00487890 8C6F0000 */  lw    $t7, ($v1)
/* 00487894 25F8FFFF */  addiu $t8, $t7, -1
/* 00487898 AC780000 */  sw    $t8, ($v1)
.L0048789C:
/* 0048789C 8FBF001C */  lw    $ra, 0x1c($sp)
/* 004878A0 27BD0020 */  addiu $sp, $sp, 0x20
/* 004878A4 03E00008 */  jr    $ra
/* 004878A8 00000000 */   nop   
    .type ugeteof, @function
    .size ugeteof, .-ugeteof
    .end ugeteof

glabel ugetclose
    .ent ugetclose
    # 00487960 resetur
/* 004878AC 3C1C0FB9 */  .cpload $t9
/* 004878B0 279C29E4 */  
/* 004878B4 0399E021 */  
/* 004878B8 8F848044 */  lw    $a0, %got(D_100118F8)($gp)
/* 004878BC 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 004878C0 AFBF001C */  sw    $ra, 0x1c($sp)
/* 004878C4 8C8418F8 */  lw    $a0, %lo(D_100118F8)($a0)
/* 004878C8 AFBC0018 */  sw    $gp, 0x18($sp)
/* 004878CC 04830015 */  bgezl $a0, .L00487924
/* 004878D0 3401FFFF */   li    $at, 65535
/* 004878D4 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 004878D8 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 004878DC 8F858044 */  lw    $a1, %got(RO_1000E9F0)($gp)
/* 004878E0 24840020 */  addiu $a0, $a0, 0x20
/* 004878E4 0320F809 */  jalr  $t9
/* 004878E8 24A5E9F0 */   addiu $a1, %lo(RO_1000E9F0) # addiu $a1, $a1, -0x1610
/* 004878EC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004878F0 8F9980A0 */  lw    $t9, %call16(fflush)($gp)
/* 004878F4 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 004878F8 0320F809 */  jalr  $t9
/* 004878FC 24840020 */   addiu $a0, $a0, 0x20
/* 00487900 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00487904 24040001 */  li    $a0, 1
/* 00487908 8F9988A8 */  lw    $t9, %call16(exit)($gp)
/* 0048790C 0320F809 */  jalr  $t9
/* 00487910 00000000 */   nop   
/* 00487914 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00487918 8F848044 */  lw    $a0, %got(D_100118F8)($gp)
/* 0048791C 8C8418F8 */  lw    $a0, %lo(D_100118F8)($a0)
/* 00487920 3401FFFF */  li    $at, 65535
.L00487924:
/* 00487924 50810006 */  beql  $a0, $at, .L00487940
/* 00487928 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0048792C 8F998098 */  lw    $t9, %call16(close)($gp)
/* 00487930 0320F809 */  jalr  $t9
/* 00487934 00000000 */   nop   
/* 00487938 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0048793C 8FBF001C */  lw    $ra, 0x1c($sp)
.L00487940:
/* 00487940 8F818044 */  lw    $at, %got(D_100118F8)($gp)
/* 00487944 240EFFFF */  li    $t6, -1
/* 00487948 27BD0020 */  addiu $sp, $sp, 0x20
/* 0048794C 03E00008 */  jr    $ra
/* 00487950 AC2E18F8 */   sw    $t6, %lo(D_100118F8)($at)
    .type ugetclose, @function
    .size ugetclose, .-ugetclose
    .end ugetclose
)"");
