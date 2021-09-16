#include "libmld.h"
#if 0
__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm
)"");
#endif

#if 0
.rdata
RO_1000F430:
    # 00491140 swap_aux
    .asciz "swap of auxs not supported when destsex != hostsex\n"

    .balign 4
jtbl_1000F464:
    # 00491140 swap_aux
    .gpword .L004911C8
    .gpword .L004912E8
    .gpword .L0049135C
    .gpword .L0049135C
    .gpword .L0049135C
    .gpword .L0049135C
    .gpword .L0049135C
#endif


#if 0
__asm__(R""(

.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
glabel swap_filehdr
    .ent swap_filehdr
/* 0048F150 AFA50004 */  sw    $a1, 4($sp)
/* 0048F154 94820000 */  lhu   $v0, ($a0)
/* 0048F158 8C850004 */  lw    $a1, 4($a0)
/* 0048F15C 94830002 */  lhu   $v1, 2($a0)
/* 0048F160 00027A00 */  sll   $t7, $v0, 8
/* 0048F164 0002C202 */  srl   $t8, $v0, 8
/* 0048F168 01F8C825 */  or    $t9, $t7, $t8
/* 0048F16C 3C0800FF */  lui   $t0, 0xff
/* 0048F170 00057200 */  sll   $t6, $a1, 8
/* 0048F174 8C860008 */  lw    $a2, 8($a0)
/* 0048F178 A4990000 */  sh    $t9, ($a0)
/* 0048F17C 01C87824 */  and   $t7, $t6, $t0
/* 0048F180 00056E00 */  sll   $t5, $a1, 0x18
/* 0048F184 01AFC025 */  or    $t8, $t5, $t7
/* 0048F188 0005CA03 */  sra   $t9, $a1, 8
/* 0048F18C 00035200 */  sll   $t2, $v1, 8
/* 0048F190 00035A02 */  srl   $t3, $v1, 8
/* 0048F194 014B6025 */  or    $t4, $t2, $t3
/* 0048F198 3329FF00 */  andi  $t1, $t9, 0xff00
/* 0048F19C 03095025 */  or    $t2, $t8, $t1
/* 0048F1A0 00066A00 */  sll   $t5, $a2, 8
/* 0048F1A4 8C87000C */  lw    $a3, 0xc($a0)
/* 0048F1A8 01A87824 */  and   $t7, $t5, $t0
/* 0048F1AC 00067600 */  sll   $t6, $a2, 0x18
/* 0048F1B0 A48C0002 */  sh    $t4, 2($a0)
/* 0048F1B4 01CFC825 */  or    $t9, $t6, $t7
/* 0048F1B8 00055E02 */  srl   $t3, $a1, 0x18
/* 0048F1BC 0006C203 */  sra   $t8, $a2, 8
/* 0048F1C0 014B6025 */  or    $t4, $t2, $t3
/* 0048F1C4 3309FF00 */  andi  $t1, $t8, 0xff00
/* 0048F1C8 03295025 */  or    $t2, $t9, $t1
/* 0048F1CC 00077200 */  sll   $t6, $a3, 8
/* 0048F1D0 AC8C0004 */  sw    $t4, 4($a0)
/* 0048F1D4 01C87824 */  and   $t7, $t6, $t0
/* 0048F1D8 00065E02 */  srl   $t3, $a2, 0x18
/* 0048F1DC 0007CA03 */  sra   $t9, $a3, 8
/* 0048F1E0 00076E00 */  sll   $t5, $a3, 0x18
/* 0048F1E4 014B6025 */  or    $t4, $t2, $t3
/* 0048F1E8 01AFC025 */  or    $t8, $t5, $t7
/* 0048F1EC 3329FF00 */  andi  $t1, $t9, 0xff00
/* 0048F1F0 03095025 */  or    $t2, $t8, $t1
/* 0048F1F4 94820010 */  lhu   $v0, 0x10($a0)
/* 0048F1F8 94980012 */  lhu   $t8, 0x12($a0)
/* 0048F1FC AC8C0008 */  sw    $t4, 8($a0)
/* 0048F200 00075E02 */  srl   $t3, $a3, 0x18
/* 0048F204 014B6025 */  or    $t4, $t2, $t3
/* 0048F208 304E00FF */  andi  $t6, $v0, 0xff
/* 0048F20C 000E6A00 */  sll   $t5, $t6, 8
/* 0048F210 00027A02 */  srl   $t7, $v0, 8
/* 0048F214 00185202 */  srl   $t2, $t8, 8
/* 0048F218 00184A00 */  sll   $t1, $t8, 8
/* 0048F21C 01AFC825 */  or    $t9, $t5, $t7
/* 0048F220 012A5825 */  or    $t3, $t1, $t2
/* 0048F224 AC8C000C */  sw    $t4, 0xc($a0)
/* 0048F228 A4990010 */  sh    $t9, 0x10($a0)
/* 0048F22C 03E00008 */  jr    $ra
/* 0048F230 A48B0012 */   sh    $t3, 0x12($a0)
    .type swap_filehdr, @function
    .size swap_filehdr, .-swap_filehdr
    .end swap_filehdr

glabel swap_aouthdr
    .ent swap_aouthdr
/* 0048F234 AFA50004 */  sw    $a1, 4($sp)
/* 0048F238 84820000 */  lh    $v0, ($a0)
/* 0048F23C 84830002 */  lh    $v1, 2($a0)
/* 0048F240 8C850004 */  lw    $a1, 4($a0)
/* 0048F244 3058FFFF */  andi  $t8, $v0, 0xffff
/* 0048F248 0018CA02 */  srl   $t9, $t8, 8
/* 0048F24C 00027A00 */  sll   $t7, $v0, 8
/* 0048F250 01F94825 */  or    $t1, $t7, $t9
/* 0048F254 306CFFFF */  andi  $t4, $v1, 0xffff
/* 0048F258 3C0800FF */  lui   $t0, 0xff
/* 0048F25C 000C6A02 */  srl   $t5, $t4, 8
/* 0048F260 00035A00 */  sll   $t3, $v1, 8
/* 0048F264 00057A00 */  sll   $t7, $a1, 8
/* 0048F268 8C860008 */  lw    $a2, 8($a0)
/* 0048F26C A4890000 */  sh    $t1, ($a0)
/* 0048F270 016D7025 */  or    $t6, $t3, $t5
/* 0048F274 01E8C824 */  and   $t9, $t7, $t0
/* 0048F278 0005C600 */  sll   $t8, $a1, 0x18
/* 0048F27C 03194825 */  or    $t1, $t8, $t9
/* 0048F280 00055203 */  sra   $t2, $a1, 8
/* 0048F284 314CFF00 */  andi  $t4, $t2, 0xff00
/* 0048F288 A48E0002 */  sh    $t6, 2($a0)
/* 0048F28C 012C5825 */  or    $t3, $t1, $t4
/* 0048F290 00056E02 */  srl   $t5, $a1, 0x18
/* 0048F294 0006C200 */  sll   $t8, $a2, 8
/* 0048F298 8C87000C */  lw    $a3, 0xc($a0)
/* 0048F29C 016D7025 */  or    $t6, $t3, $t5
/* 0048F2A0 0308C824 */  and   $t9, $t8, $t0
/* 0048F2A4 00067E00 */  sll   $t7, $a2, 0x18
/* 0048F2A8 01F95025 */  or    $t2, $t7, $t9
/* 0048F2AC 00064A03 */  sra   $t1, $a2, 8
/* 0048F2B0 312CFF00 */  andi  $t4, $t1, 0xff00
/* 0048F2B4 AC8E0004 */  sw    $t6, 4($a0)
/* 0048F2B8 014C5825 */  or    $t3, $t2, $t4
/* 0048F2BC 00066E02 */  srl   $t5, $a2, 0x18
/* 0048F2C0 00077A00 */  sll   $t7, $a3, 8
/* 0048F2C4 8C820010 */  lw    $v0, 0x10($a0)
/* 0048F2C8 016D7025 */  or    $t6, $t3, $t5
/* 0048F2CC 01E8C824 */  and   $t9, $t7, $t0
/* 0048F2D0 0007C600 */  sll   $t8, $a3, 0x18
/* 0048F2D4 03194825 */  or    $t1, $t8, $t9
/* 0048F2D8 00075203 */  sra   $t2, $a3, 8
/* 0048F2DC 314CFF00 */  andi  $t4, $t2, 0xff00
/* 0048F2E0 AC8E0008 */  sw    $t6, 8($a0)
/* 0048F2E4 012C5825 */  or    $t3, $t1, $t4
/* 0048F2E8 00076E02 */  srl   $t5, $a3, 0x18
/* 0048F2EC 0002C200 */  sll   $t8, $v0, 8
/* 0048F2F0 8C830014 */  lw    $v1, 0x14($a0)
/* 0048F2F4 016D7025 */  or    $t6, $t3, $t5
/* 0048F2F8 0308C824 */  and   $t9, $t8, $t0
/* 0048F2FC 00027E00 */  sll   $t7, $v0, 0x18
/* 0048F300 01F95025 */  or    $t2, $t7, $t9
/* 0048F304 00024A03 */  sra   $t1, $v0, 8
/* 0048F308 312CFF00 */  andi  $t4, $t1, 0xff00
/* 0048F30C AC8E000C */  sw    $t6, 0xc($a0)
/* 0048F310 014C5825 */  or    $t3, $t2, $t4
/* 0048F314 00026E02 */  srl   $t5, $v0, 0x18
/* 0048F318 00037A00 */  sll   $t7, $v1, 8
/* 0048F31C 8C850018 */  lw    $a1, 0x18($a0)
/* 0048F320 016D7025 */  or    $t6, $t3, $t5
/* 0048F324 01E8C824 */  and   $t9, $t7, $t0
/* 0048F328 0003C600 */  sll   $t8, $v1, 0x18
/* 0048F32C 03194825 */  or    $t1, $t8, $t9
/* 0048F330 00035203 */  sra   $t2, $v1, 8
/* 0048F334 314CFF00 */  andi  $t4, $t2, 0xff00
/* 0048F338 AC8E0010 */  sw    $t6, 0x10($a0)
/* 0048F33C 012C5825 */  or    $t3, $t1, $t4
/* 0048F340 00036E02 */  srl   $t5, $v1, 0x18
/* 0048F344 0005C200 */  sll   $t8, $a1, 8
/* 0048F348 8C86001C */  lw    $a2, 0x1c($a0)
/* 0048F34C 016D7025 */  or    $t6, $t3, $t5
/* 0048F350 0308C824 */  and   $t9, $t8, $t0
/* 0048F354 00057E00 */  sll   $t7, $a1, 0x18
/* 0048F358 01F95025 */  or    $t2, $t7, $t9
/* 0048F35C 00054A03 */  sra   $t1, $a1, 8
/* 0048F360 312CFF00 */  andi  $t4, $t1, 0xff00
/* 0048F364 AC8E0014 */  sw    $t6, 0x14($a0)
/* 0048F368 014C5825 */  or    $t3, $t2, $t4
/* 0048F36C 00056E02 */  srl   $t5, $a1, 0x18
/* 0048F370 00067A00 */  sll   $t7, $a2, 8
/* 0048F374 8C820020 */  lw    $v0, 0x20($a0)
/* 0048F378 016D7025 */  or    $t6, $t3, $t5
/* 0048F37C 01E8C824 */  and   $t9, $t7, $t0
/* 0048F380 0006C600 */  sll   $t8, $a2, 0x18
/* 0048F384 03194825 */  or    $t1, $t8, $t9
/* 0048F388 00065203 */  sra   $t2, $a2, 8
/* 0048F38C 314CFF00 */  andi  $t4, $t2, 0xff00
/* 0048F390 AC8E0018 */  sw    $t6, 0x18($a0)
/* 0048F394 012C5825 */  or    $t3, $t1, $t4
/* 0048F398 00066E02 */  srl   $t5, $a2, 0x18
/* 0048F39C 0002C200 */  sll   $t8, $v0, 8
/* 0048F3A0 8C830024 */  lw    $v1, 0x24($a0)
/* 0048F3A4 016D7025 */  or    $t6, $t3, $t5
/* 0048F3A8 0308C824 */  and   $t9, $t8, $t0
/* 0048F3AC 00027E00 */  sll   $t7, $v0, 0x18
/* 0048F3B0 01F95025 */  or    $t2, $t7, $t9
/* 0048F3B4 00024A03 */  sra   $t1, $v0, 8
/* 0048F3B8 312CFF00 */  andi  $t4, $t1, 0xff00
/* 0048F3BC AC8E001C */  sw    $t6, 0x1c($a0)
/* 0048F3C0 014C5825 */  or    $t3, $t2, $t4
/* 0048F3C4 00026E02 */  srl   $t5, $v0, 0x18
/* 0048F3C8 00037A00 */  sll   $t7, $v1, 8
/* 0048F3CC 8C850028 */  lw    $a1, 0x28($a0)
/* 0048F3D0 016D7025 */  or    $t6, $t3, $t5
/* 0048F3D4 01E8C824 */  and   $t9, $t7, $t0
/* 0048F3D8 0003C600 */  sll   $t8, $v1, 0x18
/* 0048F3DC 03194825 */  or    $t1, $t8, $t9
/* 0048F3E0 00035203 */  sra   $t2, $v1, 8
/* 0048F3E4 314CFF00 */  andi  $t4, $t2, 0xff00
/* 0048F3E8 AC8E0020 */  sw    $t6, 0x20($a0)
/* 0048F3EC 012C5825 */  or    $t3, $t1, $t4
/* 0048F3F0 00036E02 */  srl   $t5, $v1, 0x18
/* 0048F3F4 0005C200 */  sll   $t8, $a1, 8
/* 0048F3F8 8C86002C */  lw    $a2, 0x2c($a0)
/* 0048F3FC 01AB7025 */  or    $t6, $t5, $t3
/* 0048F400 0308C824 */  and   $t9, $t8, $t0
/* 0048F404 00057E00 */  sll   $t7, $a1, 0x18
/* 0048F408 01F95025 */  or    $t2, $t7, $t9
/* 0048F40C 00054A03 */  sra   $t1, $a1, 8
/* 0048F410 312CFF00 */  andi  $t4, $t1, 0xff00
/* 0048F414 AC8E0024 */  sw    $t6, 0x24($a0)
/* 0048F418 014C6825 */  or    $t5, $t2, $t4
/* 0048F41C 00055E02 */  srl   $t3, $a1, 0x18
/* 0048F420 00067A00 */  sll   $t7, $a2, 8
/* 0048F424 8C820030 */  lw    $v0, 0x30($a0)
/* 0048F428 016D7025 */  or    $t6, $t3, $t5
/* 0048F42C 01E8C824 */  and   $t9, $t7, $t0
/* 0048F430 0006C600 */  sll   $t8, $a2, 0x18
/* 0048F434 03194825 */  or    $t1, $t8, $t9
/* 0048F438 00065203 */  sra   $t2, $a2, 8
/* 0048F43C 314CFF00 */  andi  $t4, $t2, 0xff00
/* 0048F440 AC8E0028 */  sw    $t6, 0x28($a0)
/* 0048F444 012C5825 */  or    $t3, $t1, $t4
/* 0048F448 00066E02 */  srl   $t5, $a2, 0x18
/* 0048F44C 0002C200 */  sll   $t8, $v0, 8
/* 0048F450 8C830034 */  lw    $v1, 0x34($a0)
/* 0048F454 01AB7025 */  or    $t6, $t5, $t3
/* 0048F458 0308C824 */  and   $t9, $t8, $t0
/* 0048F45C 00027E00 */  sll   $t7, $v0, 0x18
/* 0048F460 01F95025 */  or    $t2, $t7, $t9
/* 0048F464 00024A03 */  sra   $t1, $v0, 8
/* 0048F468 312CFF00 */  andi  $t4, $t1, 0xff00
/* 0048F46C AC8E002C */  sw    $t6, 0x2c($a0)
/* 0048F470 014C6825 */  or    $t5, $t2, $t4
/* 0048F474 00025E02 */  srl   $t3, $v0, 0x18
/* 0048F478 016D7025 */  or    $t6, $t3, $t5
/* 0048F47C 00037A00 */  sll   $t7, $v1, 8
/* 0048F480 01E8C824 */  and   $t9, $t7, $t0
/* 0048F484 00035203 */  sra   $t2, $v1, 8
/* 0048F488 0003C600 */  sll   $t8, $v1, 0x18
/* 0048F48C 03194825 */  or    $t1, $t8, $t9
/* 0048F490 314CFF00 */  andi  $t4, $t2, 0xff00
/* 0048F494 AC8E0030 */  sw    $t6, 0x30($a0)
/* 0048F498 012C5825 */  or    $t3, $t1, $t4
/* 0048F49C 00036E02 */  srl   $t5, $v1, 0x18
/* 0048F4A0 016D7025 */  or    $t6, $t3, $t5
/* 0048F4A4 03E00008 */  jr    $ra
/* 0048F4A8 AC8E0034 */   sw    $t6, 0x34($a0)
    .type swap_aouthdr, @function
    .size swap_aouthdr, .-swap_aouthdr
    .end swap_aouthdr

glabel swap_scnhdr
    .ent swap_scnhdr
/* 0048F4AC AFA50004 */  sw    $a1, 4($sp)
/* 0048F4B0 8C820008 */  lw    $v0, 8($a0)
/* 0048F4B4 3C0800FF */  lui   $t0, 0xff
/* 0048F4B8 8C83000C */  lw    $v1, 0xc($a0)
/* 0048F4BC 00027A00 */  sll   $t7, $v0, 8
/* 0048F4C0 01E8C024 */  and   $t8, $t7, $t0
/* 0048F4C4 00027600 */  sll   $t6, $v0, 0x18
/* 0048F4C8 01D8C825 */  or    $t9, $t6, $t8
/* 0048F4CC 00024A03 */  sra   $t1, $v0, 8
/* 0048F4D0 312AFF00 */  andi  $t2, $t1, 0xff00
/* 0048F4D4 032A5825 */  or    $t3, $t9, $t2
/* 0048F4D8 00026602 */  srl   $t4, $v0, 0x18
/* 0048F4DC 00037200 */  sll   $t6, $v1, 8
/* 0048F4E0 8C850010 */  lw    $a1, 0x10($a0)
/* 0048F4E4 016C6825 */  or    $t5, $t3, $t4
/* 0048F4E8 01C8C024 */  and   $t8, $t6, $t0
/* 0048F4EC 00037E00 */  sll   $t7, $v1, 0x18
/* 0048F4F0 01F84825 */  or    $t1, $t7, $t8
/* 0048F4F4 0003CA03 */  sra   $t9, $v1, 8
/* 0048F4F8 332AFF00 */  andi  $t2, $t9, 0xff00
/* 0048F4FC AC8D0008 */  sw    $t5, 8($a0)
/* 0048F500 012A5825 */  or    $t3, $t1, $t2
/* 0048F504 00036602 */  srl   $t4, $v1, 0x18
/* 0048F508 00057A00 */  sll   $t7, $a1, 8
/* 0048F50C 8C860014 */  lw    $a2, 0x14($a0)
/* 0048F510 016C6825 */  or    $t5, $t3, $t4
/* 0048F514 01E8C024 */  and   $t8, $t7, $t0
/* 0048F518 00057600 */  sll   $t6, $a1, 0x18
/* 0048F51C 01D8C825 */  or    $t9, $t6, $t8
/* 0048F520 00054A03 */  sra   $t1, $a1, 8
/* 0048F524 312AFF00 */  andi  $t2, $t1, 0xff00
/* 0048F528 AC8D000C */  sw    $t5, 0xc($a0)
/* 0048F52C 032A5825 */  or    $t3, $t9, $t2
/* 0048F530 00056602 */  srl   $t4, $a1, 0x18
/* 0048F534 00067200 */  sll   $t6, $a2, 8
/* 0048F538 8C820018 */  lw    $v0, 0x18($a0)
/* 0048F53C 016C6825 */  or    $t5, $t3, $t4
/* 0048F540 01C8C024 */  and   $t8, $t6, $t0
/* 0048F544 00067E00 */  sll   $t7, $a2, 0x18
/* 0048F548 01F84825 */  or    $t1, $t7, $t8
/* 0048F54C 0006CA03 */  sra   $t9, $a2, 8
/* 0048F550 332AFF00 */  andi  $t2, $t9, 0xff00
/* 0048F554 AC8D0010 */  sw    $t5, 0x10($a0)
/* 0048F558 012A5825 */  or    $t3, $t1, $t2
/* 0048F55C 00066602 */  srl   $t4, $a2, 0x18
/* 0048F560 00027A00 */  sll   $t7, $v0, 8
/* 0048F564 8C83001C */  lw    $v1, 0x1c($a0)
/* 0048F568 016C6825 */  or    $t5, $t3, $t4
/* 0048F56C 01E8C024 */  and   $t8, $t7, $t0
/* 0048F570 00027600 */  sll   $t6, $v0, 0x18
/* 0048F574 01D8C825 */  or    $t9, $t6, $t8
/* 0048F578 00024A03 */  sra   $t1, $v0, 8
/* 0048F57C 312AFF00 */  andi  $t2, $t1, 0xff00
/* 0048F580 AC8D0014 */  sw    $t5, 0x14($a0)
/* 0048F584 032A5825 */  or    $t3, $t9, $t2
/* 0048F588 00026602 */  srl   $t4, $v0, 0x18
/* 0048F58C 00037200 */  sll   $t6, $v1, 8
/* 0048F590 94850020 */  lhu   $a1, 0x20($a0)
/* 0048F594 016C6825 */  or    $t5, $t3, $t4
/* 0048F598 01C8C024 */  and   $t8, $t6, $t0
/* 0048F59C 00037E00 */  sll   $t7, $v1, 0x18
/* 0048F5A0 01F84825 */  or    $t1, $t7, $t8
/* 0048F5A4 0003CA03 */  sra   $t9, $v1, 8
/* 0048F5A8 94860022 */  lhu   $a2, 0x22($a0)
/* 0048F5AC 332AFF00 */  andi  $t2, $t9, 0xff00
/* 0048F5B0 8C870024 */  lw    $a3, 0x24($a0)
/* 0048F5B4 AC8D0018 */  sw    $t5, 0x18($a0)
/* 0048F5B8 012A5825 */  or    $t3, $t1, $t2
/* 0048F5BC 00036602 */  srl   $t4, $v1, 0x18
/* 0048F5C0 016C6825 */  or    $t5, $t3, $t4
/* 0048F5C4 0005C202 */  srl   $t8, $a1, 8
/* 0048F5C8 00057A00 */  sll   $t7, $a1, 8
/* 0048F5CC 01F8C825 */  or    $t9, $t7, $t8
/* 0048F5D0 00065A02 */  srl   $t3, $a2, 8
/* 0048F5D4 00065200 */  sll   $t2, $a2, 8
/* 0048F5D8 AC8D001C */  sw    $t5, 0x1c($a0)
/* 0048F5DC A4990020 */  sh    $t9, 0x20($a0)
/* 0048F5E0 014B6025 */  or    $t4, $t2, $t3
/* 0048F5E4 00077200 */  sll   $t6, $a3, 8
/* 0048F5E8 01C87824 */  and   $t7, $t6, $t0
/* 0048F5EC 0007CA03 */  sra   $t9, $a3, 8
/* 0048F5F0 00076E00 */  sll   $t5, $a3, 0x18
/* 0048F5F4 01AFC025 */  or    $t8, $t5, $t7
/* 0048F5F8 3329FF00 */  andi  $t1, $t9, 0xff00
/* 0048F5FC A48C0022 */  sh    $t4, 0x22($a0)
/* 0048F600 03095025 */  or    $t2, $t8, $t1
/* 0048F604 00075E02 */  srl   $t3, $a3, 0x18
/* 0048F608 014B6025 */  or    $t4, $t2, $t3
/* 0048F60C 03E00008 */  jr    $ra
/* 0048F610 AC8C0024 */   sw    $t4, 0x24($a0)
    .type swap_scnhdr, @function
    .size swap_scnhdr, .-swap_scnhdr
    .end swap_scnhdr

glabel swap_libscn
    .ent swap_libscn
/* 0048F614 AFA50004 */  sw    $a1, 4($sp)
/* 0048F618 8C820000 */  lw    $v0, ($a0)
/* 0048F61C 8C830004 */  lw    $v1, 4($a0)
/* 0048F620 3C0700FF */  lui   $a3, 0xff
/* 0048F624 00027A00 */  sll   $t7, $v0, 8
/* 0048F628 01E7C024 */  and   $t8, $t7, $a3
/* 0048F62C 00027600 */  sll   $t6, $v0, 0x18
/* 0048F630 01D8C825 */  or    $t9, $t6, $t8
/* 0048F634 00024203 */  sra   $t0, $v0, 8
/* 0048F638 3109FF00 */  andi  $t1, $t0, 0xff00
/* 0048F63C 8C850008 */  lw    $a1, 8($a0)
/* 0048F640 03295025 */  or    $t2, $t9, $t1
/* 0048F644 00025E02 */  srl   $t3, $v0, 0x18
/* 0048F648 00037A00 */  sll   $t7, $v1, 8
/* 0048F64C 014B6025 */  or    $t4, $t2, $t3
/* 0048F650 01E77024 */  and   $t6, $t7, $a3
/* 0048F654 00034203 */  sra   $t0, $v1, 8
/* 0048F658 00036E00 */  sll   $t5, $v1, 0x18
/* 0048F65C 01AEC025 */  or    $t8, $t5, $t6
/* 0048F660 3119FF00 */  andi  $t9, $t0, 0xff00
/* 0048F664 03194825 */  or    $t1, $t8, $t9
/* 0048F668 8C86000C */  lw    $a2, 0xc($a0)
/* 0048F66C AC8C0000 */  sw    $t4, ($a0)
/* 0048F670 00035602 */  srl   $t2, $v1, 0x18
/* 0048F674 00057A00 */  sll   $t7, $a1, 8
/* 0048F678 012A5825 */  or    $t3, $t1, $t2
/* 0048F67C 01E76824 */  and   $t5, $t7, $a3
/* 0048F680 00056600 */  sll   $t4, $a1, 0x18
/* 0048F684 00054203 */  sra   $t0, $a1, 8
/* 0048F688 3118FF00 */  andi  $t8, $t0, 0xff00
/* 0048F68C 018D7025 */  or    $t6, $t4, $t5
/* 0048F690 01D8C825 */  or    $t9, $t6, $t8
/* 0048F694 00054E02 */  srl   $t1, $a1, 0x18
/* 0048F698 8C820010 */  lw    $v0, 0x10($a0)
/* 0048F69C AC8B0004 */  sw    $t3, 4($a0)
/* 0048F6A0 03295025 */  or    $t2, $t9, $t1
/* 0048F6A4 00067A00 */  sll   $t7, $a2, 8
/* 0048F6A8 01E76024 */  and   $t4, $t7, $a3
/* 0048F6AC 00065E00 */  sll   $t3, $a2, 0x18
/* 0048F6B0 00064203 */  sra   $t0, $a2, 8
/* 0048F6B4 310EFF00 */  andi  $t6, $t0, 0xff00
/* 0048F6B8 016C6825 */  or    $t5, $t3, $t4
/* 0048F6BC 8C830014 */  lw    $v1, 0x14($a0)
/* 0048F6C0 AC8A0008 */  sw    $t2, 8($a0)
/* 0048F6C4 01AEC025 */  or    $t8, $t5, $t6
/* 0048F6C8 0006CE02 */  srl   $t9, $a2, 0x18
/* 0048F6CC 00027A00 */  sll   $t7, $v0, 8
/* 0048F6D0 03194825 */  or    $t1, $t8, $t9
/* 0048F6D4 01E75824 */  and   $t3, $t7, $a3
/* 0048F6D8 00025600 */  sll   $t2, $v0, 0x18
/* 0048F6DC 014B6025 */  or    $t4, $t2, $t3
/* 0048F6E0 00024203 */  sra   $t0, $v0, 8
/* 0048F6E4 8C850018 */  lw    $a1, 0x18($a0)
/* 0048F6E8 AC89000C */  sw    $t1, 0xc($a0)
/* 0048F6EC 310DFF00 */  andi  $t5, $t0, 0xff00
/* 0048F6F0 00037A00 */  sll   $t7, $v1, 8
/* 0048F6F4 018D7025 */  or    $t6, $t4, $t5
/* 0048F6F8 01E75024 */  and   $t2, $t7, $a3
/* 0048F6FC 0002C602 */  srl   $t8, $v0, 0x18
/* 0048F700 00034E00 */  sll   $t1, $v1, 0x18
/* 0048F704 01D8C825 */  or    $t9, $t6, $t8
/* 0048F708 012A5825 */  or    $t3, $t1, $t2
/* 0048F70C 00034203 */  sra   $t0, $v1, 8
/* 0048F710 310CFF00 */  andi  $t4, $t0, 0xff00
/* 0048F714 8C86001C */  lw    $a2, 0x1c($a0)
/* 0048F718 AC990010 */  sw    $t9, 0x10($a0)
/* 0048F71C 016C6825 */  or    $t5, $t3, $t4
/* 0048F720 00057A00 */  sll   $t7, $a1, 8
/* 0048F724 01E74824 */  and   $t1, $t7, $a3
/* 0048F728 00037602 */  srl   $t6, $v1, 0x18
/* 0048F72C 0005CE00 */  sll   $t9, $a1, 0x18
/* 0048F730 00054203 */  sra   $t0, $a1, 8
/* 0048F734 01AEC025 */  or    $t8, $t5, $t6
/* 0048F738 310BFF00 */  andi  $t3, $t0, 0xff00
/* 0048F73C 03295025 */  or    $t2, $t9, $t1
/* 0048F740 014B6025 */  or    $t4, $t2, $t3
/* 0048F744 AC980014 */  sw    $t8, 0x14($a0)
/* 0048F748 00067A00 */  sll   $t7, $a2, 8
/* 0048F74C 01E7C824 */  and   $t9, $t7, $a3
/* 0048F750 00056E02 */  srl   $t5, $a1, 0x18
/* 0048F754 0006C600 */  sll   $t8, $a2, 0x18
/* 0048F758 00064203 */  sra   $t0, $a2, 8
/* 0048F75C 018D7025 */  or    $t6, $t4, $t5
/* 0048F760 310AFF00 */  andi  $t2, $t0, 0xff00
/* 0048F764 03194825 */  or    $t1, $t8, $t9
/* 0048F768 012A5825 */  or    $t3, $t1, $t2
/* 0048F76C 00066602 */  srl   $t4, $a2, 0x18
/* 0048F770 016C6825 */  or    $t5, $t3, $t4
/* 0048F774 AC8E0018 */  sw    $t6, 0x18($a0)
/* 0048F778 03E00008 */  jr    $ra
/* 0048F77C AC8D001C */   sw    $t5, 0x1c($a0)
    .type swap_libscn, @function
    .size swap_libscn, .-swap_libscn
    .end swap_libscn
)"");
#endif

/*
0048D0E0 st_readst
*/
void swap_hdr(HDRR *phdr, int hostsex) {
    phdr->magic         = swap_half(phdr->magic);        
    phdr->vstamp        = swap_half(phdr->vstamp);       
    phdr->ilineMax      = swap_word(phdr->ilineMax);
    phdr->cbLine        = swap_word(phdr->cbLine);
    phdr->cbLineOffset  = swap_word(phdr->cbLineOffset);
    phdr->idnMax        = swap_word(phdr->idnMax);
    phdr->cbDnOffset    = swap_word(phdr->cbDnOffset);
    phdr->ipdMax        = swap_word(phdr->ipdMax);
    phdr->cbPdOffset    = swap_word(phdr->cbPdOffset);
    phdr->isymMax       = swap_word(phdr->isymMax);
    phdr->cbSymOffset   = swap_word(phdr->cbSymOffset);
    phdr->ioptMax       = swap_word(phdr->ioptMax);
    phdr->cbOptOffset   = swap_word(phdr->cbOptOffset);
    phdr->iauxMax       = swap_word(phdr->iauxMax);
    phdr->cbAuxOffset   = swap_word(phdr->cbAuxOffset);
    phdr->issMax        = swap_word(phdr->issMax);
    phdr->cbSsOffset    = swap_word(phdr->cbSsOffset);
    phdr->issExtMax     = swap_word(phdr->issExtMax);
    phdr->cbSsExtOffset = swap_word(phdr->cbSsExtOffset);
    phdr->ifdMax        = swap_word(phdr->ifdMax);
    phdr->cbFdOffset    = swap_word(phdr->cbFdOffset);
    phdr->crfd          = swap_word(phdr->crfd);
    phdr->cbRfdOffset   = swap_word(phdr->cbRfdOffset);
    phdr->iextMax       = swap_word(phdr->iextMax);
    phdr->cbExtOffset   = swap_word(phdr->cbExtOffset);
}

/*
0048D0E0 st_readst
*/
void swap_fd(FDR *pfd, int count, int destsex) {
    int i;

    for (i = 0; i < count; i++) {
        pfd[i].adr                = swap_word(pfd[i].adr);
        pfd[i].rss                = swap_word(pfd[i].rss);
        pfd[i].issBase            = swap_word(pfd[i].issBase);
        pfd[i].cbSs               = swap_word(pfd[i].cbSs);
        pfd[i].isymBase           = swap_word(pfd[i].isymBase);
        pfd[i].csym               = swap_word(pfd[i].csym);
        pfd[i].ilineBase          = swap_word(pfd[i].ilineBase);
        pfd[i].cline              = swap_word(pfd[i].cline);
        pfd[i].ioptBase           = swap_word(pfd[i].ioptBase);
        pfd[i].copt               = swap_word(pfd[i].copt);
        pfd[i].ipdFirst           = swap_half(pfd[i].ipdFirst);
        pfd[i].cpd                = swap_half(pfd[i].cpd);
        pfd[i].iauxBase           = swap_word(pfd[i].iauxBase);
        pfd[i].caux               = swap_word(pfd[i].caux);
        pfd[i].rfdBase            = swap_word(pfd[i].rfdBase);
        pfd[i].crfd               = swap_word(pfd[i].crfd);
        *((int*)&pfd[i].crfd + 1) = swap_word(*((int*)&pfd[i].crfd + 1));
        pfd[i].cbLineOffset       = swap_word(pfd[i].cbLineOffset);
        pfd[i].cbLine             = swap_word(pfd[i].cbLine);
    }
}

/*
0048D0E0 st_readst
*/
void swap_fi(pFIT pfi, int count, int destsex) {
    int i;

    for (i = 0; i < count; i++) {
        pfi[i] = swap_word(pfi[i]);
    }
}

/*
0048D0E0 st_readst
*/
void swap_sym(SYMR *psym, int count, int destsex) {
    int i;

    for (i = 0; i < count; i++) {
        psym[i].iss = swap_word(psym[i].iss);
        psym[i].value = swap_word(psym[i].value);
        // swap bitfields
        *((int*)&psym[i].value + 1) = swap_word(*((int*)&psym[i].value + 1));
    }
}

/*
0048D0E0 st_readst
*/
void swap_ext(EXTR *pext, int count, int destsex) {
    for (int i = 0; i < count; i++) {
        // swap bitfields
        *((short*)&pext[i]) = swap_half(*((short*)&pext[i]));
        pext[i].ifd = swap_half(pext[i].ifd);
        swap_sym(&pext[i].asym, 1, destsex);
    }
}

/*
0048D0E0 st_readst
*/
void swap_pd(PDR *pdr, int count, int destsex) {
    int i;

    for (i = 0; i < count; i++) {
        pdr[i].adr          = swap_word(pdr[i].adr);
        pdr[i].isym         = swap_word(pdr[i].isym);
        pdr[i].iline        = swap_word(pdr[i].iline);
        pdr[i].regmask      = swap_word(pdr[i].regmask);
        pdr[i].regoffset    = swap_word(pdr[i].regoffset);
        pdr[i].iopt         = swap_word(pdr[i].iopt);
        pdr[i].fregmask     = swap_word(pdr[i].fregmask);
        pdr[i].fregoffset   = swap_word(pdr[i].fregoffset);
        pdr[i].frameoffset  = swap_word(pdr[i].frameoffset);
        pdr[i].framereg     = swap_half(pdr[i].framereg);
        pdr[i].pcreg        = swap_half(pdr[i].pcreg);
        pdr[i].lnLow        = swap_word(pdr[i].lnLow);
        pdr[i].lnHigh       = swap_word(pdr[i].lnHigh);
        pdr[i].cbLineOffset = swap_word(pdr[i].cbLineOffset);
    }
}

/*
0048D0E0 st_readst
*/
void swap_dn(DNR *dn, int count, int destsex) {
    int i;

    for (i = 0; i < count; i++) {
        dn[i].rfd   = swap_word(dn[i].rfd);
        dn[i].index = swap_word(dn[i].index);
    }
}

#if 0
__asm__(R""(
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

glabel swap_rpd
    .ent swap_rpd
/* 00490D00 18A0006D */  blez  $a1, .L00490EB8
/* 00490D04 AFA60008 */   sw    $a2, 8($sp)
/* 00490D08 00057080 */  sll   $t6, $a1, 2
/* 00490D0C 01C57021 */  addu  $t6, $t6, $a1
/* 00490D10 000E70C0 */  sll   $t6, $t6, 3
/* 00490D14 01C43021 */  addu  $a2, $t6, $a0
/* 00490D18 00801025 */  move  $v0, $a0
/* 00490D1C 3C0800FF */  lui   $t0, 0xff
/* 00490D20 3C0700FF */  lui   $a3, 0xff
.L00490D24:
/* 00490D24 8C430000 */  lw    $v1, ($v0)
/* 00490D28 8C440004 */  lw    $a0, 4($v0)
/* 00490D2C 24420028 */  addiu $v0, $v0, 0x28
/* 00490D30 00037E02 */  srl   $t7, $v1, 0x18
/* 00490D34 0003C600 */  sll   $t8, $v1, 0x18
/* 00490D38 00034A00 */  sll   $t1, $v1, 8
/* 00490D3C 01275024 */  and   $t2, $t1, $a3
/* 00490D40 01F8C825 */  or    $t9, $t7, $t8
/* 00490D44 032A5825 */  or    $t3, $t9, $t2
/* 00490D48 00036202 */  srl   $t4, $v1, 8
/* 00490D4C 0004C200 */  sll   $t8, $a0, 8
/* 00490D50 8C43FFE0 */  lw    $v1, -0x20($v0)
/* 00490D54 318DFF00 */  andi  $t5, $t4, 0xff00
/* 00490D58 03084824 */  and   $t1, $t8, $t0
/* 00490D5C 00047E00 */  sll   $t7, $a0, 0x18
/* 00490D60 016D7025 */  or    $t6, $t3, $t5
/* 00490D64 01E9C825 */  or    $t9, $t7, $t1
/* 00490D68 00045203 */  sra   $t2, $a0, 8
/* 00490D6C 314CFF00 */  andi  $t4, $t2, 0xff00
/* 00490D70 032C5825 */  or    $t3, $t9, $t4
/* 00490D74 00046E02 */  srl   $t5, $a0, 0x18
/* 00490D78 00037A00 */  sll   $t7, $v1, 8
/* 00490D7C 8C44FFE4 */  lw    $a0, -0x1c($v0)
/* 00490D80 AC4EFFD8 */  sw    $t6, -0x28($v0)
/* 00490D84 01E84824 */  and   $t1, $t7, $t0
/* 00490D88 0003C600 */  sll   $t8, $v1, 0x18
/* 00490D8C 01AB7025 */  or    $t6, $t5, $t3
/* 00490D90 03095025 */  or    $t2, $t8, $t1
/* 00490D94 0003CA03 */  sra   $t9, $v1, 8
/* 00490D98 332CFF00 */  andi  $t4, $t9, 0xff00
/* 00490D9C 014C6825 */  or    $t5, $t2, $t4
/* 00490DA0 00035E02 */  srl   $t3, $v1, 0x18
/* 00490DA4 0004C200 */  sll   $t8, $a0, 8
/* 00490DA8 8C43FFE8 */  lw    $v1, -0x18($v0)
/* 00490DAC AC4EFFDC */  sw    $t6, -0x24($v0)
/* 00490DB0 03084824 */  and   $t1, $t8, $t0
/* 00490DB4 00047E00 */  sll   $t7, $a0, 0x18
/* 00490DB8 016D7025 */  or    $t6, $t3, $t5
/* 00490DBC 01E9C825 */  or    $t9, $t7, $t1
/* 00490DC0 00045203 */  sra   $t2, $a0, 8
/* 00490DC4 314CFF00 */  andi  $t4, $t2, 0xff00
/* 00490DC8 032C5825 */  or    $t3, $t9, $t4
/* 00490DCC 00046E02 */  srl   $t5, $a0, 0x18
/* 00490DD0 00037A00 */  sll   $t7, $v1, 8
/* 00490DD4 8C44FFEC */  lw    $a0, -0x14($v0)
/* 00490DD8 AC4EFFE0 */  sw    $t6, -0x20($v0)
/* 00490DDC 01E84824 */  and   $t1, $t7, $t0
/* 00490DE0 0003C600 */  sll   $t8, $v1, 0x18
/* 00490DE4 01AB7025 */  or    $t6, $t5, $t3
/* 00490DE8 03095025 */  or    $t2, $t8, $t1
/* 00490DEC 0003CA03 */  sra   $t9, $v1, 8
/* 00490DF0 332CFF00 */  andi  $t4, $t9, 0xff00
/* 00490DF4 014C6825 */  or    $t5, $t2, $t4
/* 00490DF8 00035E02 */  srl   $t3, $v1, 0x18
/* 00490DFC AC4EFFE4 */  sw    $t6, -0x1c($v0)
/* 00490E00 0004C200 */  sll   $t8, $a0, 8
/* 00490E04 8443FFF0 */  lh    $v1, -0x10($v0)
/* 00490E08 016D7025 */  or    $t6, $t3, $t5
/* 00490E0C 03084824 */  and   $t1, $t8, $t0
/* 00490E10 00045203 */  sra   $t2, $a0, 8
/* 00490E14 00047E00 */  sll   $t7, $a0, 0x18
/* 00490E18 01E9C825 */  or    $t9, $t7, $t1
/* 00490E1C 314CFF00 */  andi  $t4, $t2, 0xff00
/* 00490E20 032C5825 */  or    $t3, $t9, $t4
/* 00490E24 00046E02 */  srl   $t5, $a0, 0x18
/* 00490E28 AC4EFFE8 */  sw    $t6, -0x18($v0)
/* 00490E2C 00037A00 */  sll   $t7, $v1, 8
/* 00490E30 8C44FFF4 */  lw    $a0, -0xc($v0)
/* 00490E34 01AB7025 */  or    $t6, $t5, $t3
/* 00490E38 01E84824 */  and   $t1, $t7, $t0
/* 00490E3C 0003C600 */  sll   $t8, $v1, 0x18
/* 00490E40 03095025 */  or    $t2, $t8, $t1
/* 00490E44 0003CA03 */  sra   $t9, $v1, 8
/* 00490E48 332CFF00 */  andi  $t4, $t9, 0xff00
/* 00490E4C 00035E02 */  srl   $t3, $v1, 0x18
/* 00490E50 AC4EFFEC */  sw    $t6, -0x14($v0)
/* 00490E54 014C6825 */  or    $t5, $t2, $t4
/* 00490E58 0004C200 */  sll   $t8, $a0, 8
/* 00490E5C 8C43FFFC */  lw    $v1, -4($v0)
/* 00490E60 016D7025 */  or    $t6, $t3, $t5
/* 00490E64 03084824 */  and   $t1, $t8, $t0
/* 00490E68 00047E00 */  sll   $t7, $a0, 0x18
/* 00490E6C 01E9C825 */  or    $t9, $t7, $t1
/* 00490E70 00045203 */  sra   $t2, $a0, 8
/* 00490E74 314CFF00 */  andi  $t4, $t2, 0xff00
/* 00490E78 A44EFFF0 */  sh    $t6, -0x10($v0)
/* 00490E7C 032C5825 */  or    $t3, $t9, $t4
/* 00490E80 00046E02 */  srl   $t5, $a0, 0x18
/* 00490E84 01AB7025 */  or    $t6, $t5, $t3
/* 00490E88 00037A00 */  sll   $t7, $v1, 8
/* 00490E8C 01E84824 */  and   $t1, $t7, $t0
/* 00490E90 0003CA03 */  sra   $t9, $v1, 8
/* 00490E94 0003C600 */  sll   $t8, $v1, 0x18
/* 00490E98 03095025 */  or    $t2, $t8, $t1
/* 00490E9C 332CFF00 */  andi  $t4, $t9, 0xff00
/* 00490EA0 AC4EFFF4 */  sw    $t6, -0xc($v0)
/* 00490EA4 014C6825 */  or    $t5, $t2, $t4
/* 00490EA8 00035E02 */  srl   $t3, $v1, 0x18
/* 00490EAC 016D7025 */  or    $t6, $t3, $t5
/* 00490EB0 1446FF9C */  bne   $v0, $a2, .L00490D24
/* 00490EB4 AC4EFFFC */   sw    $t6, -4($v0)
.L00490EB8:
/* 00490EB8 03E00008 */  jr    $ra
/* 00490EBC 00000000 */   nop   
    .type swap_rpd, @function
    .size swap_rpd, .-swap_rpd
    .end swap_rpd
)"");
#endif

/*
0048D0E0 st_readst
*/
void swap_opt(OPTR *popt, int count, int destsex) {
    int i;

    for (i = 0; i < count; i++) {
        // swap bitfields
        *((int*)&popt[i]) = swap_word(*((int*)&popt[i]));
        *((int*)&popt[i] + 1) = swap_word(*((int*)&popt[i]) + 1);
        popt[i].offset = swap_word(popt[i].offset);
    }
}

#if 0
glabel swap_aux
    .ent swap_aux
/* 00491140 3C1C0FB9 */  .cpload $t9
/* 00491144 279C9150 */  
/* 00491148 0399E021 */  
/* 0049114C 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 00491150 8F9987CC */  lw    $t9, %call16(gethostsex)($gp)
/* 00491154 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00491158 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0049115C AFA50034 */  sw    $a1, 0x34($sp)
/* 00491160 AFA60038 */  sw    $a2, 0x38($sp)
/* 00491164 0320F809 */  jalr  $t9
/* 00491168 AFA40030 */   sw    $a0, 0x30($sp)
/* 0049116C 8FAE0038 */  lw    $t6, 0x38($sp)
/* 00491170 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00491174 8FA40030 */  lw    $a0, 0x30($sp)
/* 00491178 11C20009 */  beq   $t6, $v0, .L004911A0
/* 0049117C 8FAF0034 */   lw    $t7, 0x34($sp)
/* 00491180 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 00491184 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 00491188 8F858044 */  lw    $a1, %got(RO_1000F430)($gp)
/* 0049118C 24840020 */  addiu $a0, $a0, 0x20
/* 00491190 0320F809 */  jalr  $t9
/* 00491194 24A5F430 */   addiu $a1, %lo(RO_1000F430) # addiu $a1, $a1, -0xbd0
/* 00491198 1000007C */  b     .L0049138C
/* 0049119C 8FBC0018 */   lw    $gp, 0x18($sp)
.L004911A0:
/* 004911A0 2DE10007 */  sltiu $at, $t7, 7
/* 004911A4 5020006E */  beql  $at, $zero, .L00491360
/* 004911A8 8C820000 */   lw    $v0, ($a0)
/* 004911AC 8F818044 */  lw    $at, %got(jtbl_1000F464)($gp)
/* 004911B0 000F7880 */  sll   $t7, $t7, 2
/* 004911B4 002F0821 */  addu  $at, $at, $t7
/* 004911B8 8C2FF464 */  lw    $t7, %lo(jtbl_1000F464)($at)
/* 004911BC 01FC7821 */  addu  $t7, $t7, $gp
/* 004911C0 01E00008 */  jr    $t7
/* 004911C4 00000000 */   nop   
.L004911C8:
/* 004911C8 8C880000 */  lw    $t0, ($a0)
/* 004911CC 27B8002C */  addiu $t8, $sp, 0x2c
/* 004911D0 3C0100FF */  lui   $at, 0xff
/* 004911D4 AF080000 */  sw    $t0, ($t8)
/* 004911D8 8FA9002C */  lw    $t1, 0x2c($sp)
/* 004911DC 00095A00 */  sll   $t3, $t1, 8
/* 004911E0 01616024 */  and   $t4, $t3, $at
/* 004911E4 00095600 */  sll   $t2, $t1, 0x18
/* 004911E8 00097202 */  srl   $t6, $t1, 8
/* 004911EC 31CFFF00 */  andi  $t7, $t6, 0xff00
/* 004911F0 014C6825 */  or    $t5, $t2, $t4
/* 004911F4 01AFC025 */  or    $t8, $t5, $t7
/* 004911F8 0009CE02 */  srl   $t9, $t1, 0x18
/* 004911FC 03194025 */  or    $t0, $t8, $t9
/* 00491200 AFA8002C */  sw    $t0, 0x2c($sp)
/* 00491204 908C0003 */  lbu   $t4, 3($a0)
/* 00491208 00085F02 */  srl   $t3, $t0, 0x1c
/* 0049120C 316A000F */  andi  $t2, $t3, 0xf
/* 00491210 318EFFF0 */  andi  $t6, $t4, 0xfff0
/* 00491214 014E4025 */  or    $t0, $t2, $t6
/* 00491218 A0880003 */  sb    $t0, 3($a0)
/* 0049121C 93A9002C */  lbu   $t1, 0x2c($sp)
/* 00491220 310B000F */  andi  $t3, $t0, 0xf
/* 00491224 908F0002 */  lbu   $t7, 2($a0)
/* 00491228 0009C900 */  sll   $t9, $t1, 4
/* 0049122C 032B6025 */  or    $t4, $t9, $t3
/* 00491230 A08C0003 */  sb    $t4, 3($a0)
/* 00491234 93AA002D */  lbu   $t2, 0x2d($sp)
/* 00491238 31E9FFF0 */  andi  $t1, $t7, 0xfff0
/* 0049123C 90880001 */  lbu   $t0, 1($a0)
/* 00491240 000A7102 */  srl   $t6, $t2, 4
/* 00491244 31CD000F */  andi  $t5, $t6, 0xf
/* 00491248 01A95025 */  or    $t2, $t5, $t1
/* 0049124C A08A0002 */  sb    $t2, 2($a0)
/* 00491250 97B9002C */  lhu   $t9, 0x2c($sp)
/* 00491254 314E000F */  andi  $t6, $t2, 0xf
/* 00491258 908A0000 */  lbu   $t2, ($a0)
/* 0049125C 00196100 */  sll   $t4, $t9, 4
/* 00491260 018E7825 */  or    $t7, $t4, $t6
/* 00491264 A08F0002 */  sb    $t7, 2($a0)
/* 00491268 97AD002E */  lhu   $t5, 0x2e($sp)
/* 0049126C 3119FFF0 */  andi  $t9, $t0, 0xfff0
/* 00491270 000D4B02 */  srl   $t1, $t5, 0xc
/* 00491274 3138000F */  andi  $t8, $t1, 0xf
/* 00491278 03196825 */  or    $t5, $t8, $t9
/* 0049127C A08D0001 */  sb    $t5, 1($a0)
/* 00491280 93AC002E */  lbu   $t4, 0x2e($sp)
/* 00491284 31A9000F */  andi  $t1, $t5, 0xf
/* 00491288 000C7900 */  sll   $t7, $t4, 4
/* 0049128C 01E94025 */  or    $t0, $t7, $t1
/* 00491290 A0880001 */  sb    $t0, 1($a0)
/* 00491294 93B8002F */  lbu   $t8, 0x2f($sp)
/* 00491298 314CFFC0 */  andi  $t4, $t2, 0xffc0
/* 0049129C 0018C882 */  srl   $t9, $t8, 2
/* 004912A0 332B003F */  andi  $t3, $t9, 0x3f
/* 004912A4 016CC825 */  or    $t9, $t3, $t4
/* 004912A8 A0990000 */  sb    $t9, ($a0)
/* 004912AC 8FAD002C */  lw    $t5, 0x2c($sp)
/* 004912B0 332A00BF */  andi  $t2, $t9, 0xbf
/* 004912B4 000D7F80 */  sll   $t7, $t5, 0x1e
/* 004912B8 000F4FC2 */  srl   $t1, $t7, 0x1f
/* 004912BC 00094180 */  sll   $t0, $t1, 6
/* 004912C0 31180040 */  andi  $t8, $t0, 0x40
/* 004912C4 030A4825 */  or    $t1, $t8, $t2
/* 004912C8 A0890000 */  sb    $t1, ($a0)
/* 004912CC 8FAE002C */  lw    $t6, 0x2c($sp)
/* 004912D0 3128007F */  andi  $t0, $t1, 0x7f
/* 004912D4 000E69C0 */  sll   $t5, $t6, 7
/* 004912D8 31AF0080 */  andi  $t7, $t5, 0x80
/* 004912DC 01E8C825 */  or    $t9, $t7, $t0
/* 004912E0 1000002A */  b     .L0049138C
/* 004912E4 A0990000 */   sb    $t9, ($a0)
.L004912E8:
/* 004912E8 8C8B0000 */  lw    $t3, ($a0)
/* 004912EC 27B80024 */  addiu $t8, $sp, 0x24
/* 004912F0 3C0100FF */  lui   $at, 0xff
/* 004912F4 AF0B0000 */  sw    $t3, ($t8)
/* 004912F8 8FAC0024 */  lw    $t4, 0x24($sp)
/* 004912FC 000C6A00 */  sll   $t5, $t4, 8
/* 00491300 01A14824 */  and   $t1, $t5, $at
/* 00491304 000C7600 */  sll   $t6, $t4, 0x18
/* 00491308 000C4202 */  srl   $t0, $t4, 8
/* 0049130C 3119FF00 */  andi  $t9, $t0, 0xff00
/* 00491310 01C97825 */  or    $t7, $t6, $t1
/* 00491314 01F9C025 */  or    $t8, $t7, $t9
/* 00491318 000C5602 */  srl   $t2, $t4, 0x18
/* 0049131C 030A5825 */  or    $t3, $t8, $t2
/* 00491320 AFAB0024 */  sw    $t3, 0x24($sp)
/* 00491324 8C820000 */  lw    $v0, ($a0)
/* 00491328 000B6B02 */  srl   $t5, $t3, 0xc
/* 0049132C 01A27026 */  xor   $t6, $t5, $v0
/* 00491330 000E4B00 */  sll   $t1, $t6, 0xc
/* 00491334 00094302 */  srl   $t0, $t1, 0xc
/* 00491338 01027826 */  xor   $t7, $t0, $v0
/* 0049133C AC8F0000 */  sw    $t7, ($a0)
/* 00491340 948B0000 */  lhu   $t3, ($a0)
/* 00491344 8FB90024 */  lw    $t9, 0x24($sp)
/* 00491348 316D000F */  andi  $t5, $t3, 0xf
/* 0049134C 00195100 */  sll   $t2, $t9, 4
/* 00491350 014D7025 */  or    $t6, $t2, $t5
/* 00491354 1000000D */  b     .L0049138C
/* 00491358 A48E0000 */   sh    $t6, ($a0)
.L0049135C:
/* 0049135C 8C820000 */  lw    $v0, ($a0)
.L00491360:
/* 00491360 3C0100FF */  lui   $at, 0xff
/* 00491364 00024200 */  sll   $t0, $v0, 8
/* 00491368 01017824 */  and   $t7, $t0, $at
/* 0049136C 00024E00 */  sll   $t1, $v0, 0x18
/* 00491370 00026203 */  sra   $t4, $v0, 8
/* 00491374 3198FF00 */  andi  $t8, $t4, 0xff00
/* 00491378 012FC825 */  or    $t9, $t1, $t7
/* 0049137C 03385825 */  or    $t3, $t9, $t8
/* 00491380 00025602 */  srl   $t2, $v0, 0x18
/* 00491384 016A6825 */  or    $t5, $t3, $t2
/* 00491388 AC8D0000 */  sw    $t5, ($a0)
.L0049138C:
/* 0049138C 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00491390 27BD0030 */  addiu $sp, $sp, 0x30
/* 00491394 03E00008 */  jr    $ra
/* 00491398 00000000 */   nop   
    .type swap_aux, @function
    .size swap_aux, .-swap_aux
    .end swap_aux

glabel swap_reloc
    .ent swap_reloc
/* 0049139C 3C1C0FB9 */  .cpload $t9
/* 004913A0 279C8EF4 */  
/* 004913A4 0399E021 */  
/* 004913A8 27BDFFC0 */  addiu $sp, $sp, -0x40
/* 004913AC 8F9987CC */  lw    $t9, %call16(gethostsex)($gp)
/* 004913B0 AFBF0024 */  sw    $ra, 0x24($sp)
/* 004913B4 AFB1001C */  sw    $s1, 0x1c($sp)
/* 004913B8 AFB00018 */  sw    $s0, 0x18($sp)
/* 004913BC 00A08025 */  move  $s0, $a1
/* 004913C0 00C08825 */  move  $s1, $a2
/* 004913C4 AFBC0020 */  sw    $gp, 0x20($sp)
/* 004913C8 0320F809 */  jalr  $t9
/* 004913CC AFA40040 */   sw    $a0, 0x40($sp)
/* 004913D0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004913D4 1A000072 */  blez  $s0, .L004915A0
/* 004913D8 8FA40040 */   lw    $a0, 0x40($sp)
/* 004913DC 001070C0 */  sll   $t6, $s0, 3
/* 004913E0 01C43821 */  addu  $a3, $t6, $a0
/* 004913E4 00801825 */  move  $v1, $a0
/* 004913E8 3C0800FF */  lui   $t0, 0xff
/* 004913EC 3C0600FF */  lui   $a2, 0xff
/* 004913F0 27A50030 */  addiu $a1, $sp, 0x30
/* 004913F4 8C780000 */  lw    $t8, ($v1)
.L004913F8:
/* 004913F8 ACB80000 */  sw    $t8, ($a1)
/* 004913FC 8C6F0004 */  lw    $t7, 4($v1)
/* 00491400 ACAF0004 */  sw    $t7, 4($a1)
/* 00491404 8FB90030 */  lw    $t9, 0x30($sp)
/* 00491408 00195200 */  sll   $t2, $t9, 8
/* 0049140C 01485824 */  and   $t3, $t2, $t0
/* 00491410 00194E00 */  sll   $t1, $t9, 0x18
/* 00491414 00196A03 */  sra   $t5, $t9, 8
/* 00491418 31AEFF00 */  andi  $t6, $t5, 0xff00
/* 0049141C 012B6025 */  or    $t4, $t1, $t3
/* 00491420 018E7825 */  or    $t7, $t4, $t6
/* 00491424 00195602 */  srl   $t2, $t9, 0x18
/* 00491428 01EA4825 */  or    $t1, $t7, $t2
/* 0049142C 1622002E */  bne   $s1, $v0, .L004914E8
/* 00491430 AFA90030 */   sw    $t1, 0x30($sp)
/* 00491434 8CB90000 */  lw    $t9, ($a1)
/* 00491438 3C0100FF */  lui   $at, 0xff
/* 0049143C 3421FFFF */  ori   $at, $at, 0xffff
/* 00491440 AC790000 */  sw    $t9, ($v1)
/* 00491444 8CAB0004 */  lw    $t3, 4($a1)
/* 00491448 AC6B0004 */  sw    $t3, 4($v1)
/* 0049144C 8FAD0034 */  lw    $t5, 0x34($sp)
/* 00491450 000D7200 */  sll   $t6, $t5, 8
/* 00491454 01C6C024 */  and   $t8, $t6, $a2
/* 00491458 000D6600 */  sll   $t4, $t5, 0x18
/* 0049145C 000D5202 */  srl   $t2, $t5, 8
/* 00491460 3149FF00 */  andi  $t1, $t2, 0xff00
/* 00491464 01987825 */  or    $t7, $t4, $t8
/* 00491468 01E95825 */  or    $t3, $t7, $t1
/* 0049146C 000DCE02 */  srl   $t9, $t5, 0x18
/* 00491470 01797025 */  or    $t6, $t3, $t9
/* 00491474 AFAE0034 */  sw    $t6, 0x34($sp)
/* 00491478 906A0007 */  lbu   $t2, 7($v1)
/* 0049147C 000E67C2 */  srl   $t4, $t6, 0x1f
/* 00491480 31980001 */  andi  $t8, $t4, 1
/* 00491484 314FFFFE */  andi  $t7, $t2, 0xfffe
/* 00491488 030F5025 */  or    $t2, $t8, $t7
/* 0049148C A06A0007 */  sb    $t2, 7($v1)
/* 00491490 8FAD0034 */  lw    $t5, 0x34($sp)
/* 00491494 315800C1 */  andi  $t8, $t2, 0xc1
/* 00491498 000D5840 */  sll   $t3, $t5, 1
/* 0049149C 000BCF02 */  srl   $t9, $t3, 0x1c
/* 004914A0 00197040 */  sll   $t6, $t9, 1
/* 004914A4 31CC003E */  andi  $t4, $t6, 0x3e
/* 004914A8 01985025 */  or    $t2, $t4, $t8
/* 004914AC A06A0007 */  sb    $t2, 7($v1)
/* 004914B0 93AB0034 */  lbu   $t3, 0x34($sp)
/* 004914B4 314C003F */  andi  $t4, $t2, 0x3f
/* 004914B8 000B7180 */  sll   $t6, $t3, 6
/* 004914BC 01CCC025 */  or    $t8, $t6, $t4
/* 004914C0 A0780007 */  sb    $t8, 7($v1)
/* 004914C4 8C640004 */  lw    $a0, 4($v1)
/* 004914C8 8FAF0034 */  lw    $t7, 0x34($sp)
/* 004914CC 00046A02 */  srl   $t5, $a0, 8
/* 004914D0 01E14824 */  and   $t1, $t7, $at
/* 004914D4 012D5826 */  xor   $t3, $t1, $t5
/* 004914D8 000BCA00 */  sll   $t9, $t3, 8
/* 004914DC 03245026 */  xor   $t2, $t9, $a0
/* 004914E0 1000002C */  b     .L00491594
/* 004914E4 AC6A0004 */   sw    $t2, 4($v1)
.L004914E8:
/* 004914E8 8C6C0004 */  lw    $t4, 4($v1)
/* 004914EC 93A90034 */  lbu   $t1, 0x34($sp)
/* 004914F0 000C79C0 */  sll   $t7, $t4, 7
/* 004914F4 312DFF7F */  andi  $t5, $t1, 0xff7f
/* 004914F8 01ED5825 */  or    $t3, $t7, $t5
/* 004914FC A3AB0034 */  sb    $t3, 0x34($sp)
/* 00491500 8C790004 */  lw    $t9, 4($v1)
/* 00491504 01607825 */  move  $t7, $t3
/* 00491508 31ED0087 */  andi  $t5, $t7, 0x87
/* 0049150C 00195680 */  sll   $t2, $t9, 0x1a
/* 00491510 000A66C2 */  srl   $t4, $t2, 0x1b
/* 00491514 000CC0C0 */  sll   $t8, $t4, 3
/* 00491518 33090078 */  andi  $t1, $t8, 0x78
/* 0049151C 012DC025 */  or    $t8, $t1, $t5
/* 00491520 A3B80034 */  sb    $t8, 0x34($sp)
/* 00491524 906A0007 */  lbu   $t2, 7($v1)
/* 00491528 330B00F8 */  andi  $t3, $t8, 0xf8
/* 0049152C 000A7182 */  srl   $t6, $t2, 6
/* 00491530 31CC0007 */  andi  $t4, $t6, 7
/* 00491534 018B7825 */  or    $t7, $t4, $t3
/* 00491538 A3AF0034 */  sb    $t7, 0x34($sp)
/* 0049153C 8C690004 */  lw    $t1, 4($v1)
/* 00491540 8FAA0034 */  lw    $t2, 0x34($sp)
/* 00491544 00096A02 */  srl   $t5, $t1, 8
/* 00491548 01AA7026 */  xor   $t6, $t5, $t2
/* 0049154C 000ECA00 */  sll   $t9, $t6, 8
/* 00491550 0019C202 */  srl   $t8, $t9, 8
/* 00491554 030A6026 */  xor   $t4, $t8, $t2
/* 00491558 000C7A00 */  sll   $t7, $t4, 8
/* 0049155C 01E64824 */  and   $t1, $t7, $a2
/* 00491560 000C5E00 */  sll   $t3, $t4, 0x18
/* 00491564 000C7202 */  srl   $t6, $t4, 8
/* 00491568 31D9FF00 */  andi  $t9, $t6, 0xff00
/* 0049156C 01696825 */  or    $t5, $t3, $t1
/* 00491570 01B9C025 */  or    $t8, $t5, $t9
/* 00491574 000C5602 */  srl   $t2, $t4, 0x18
/* 00491578 AFAC0034 */  sw    $t4, 0x34($sp)
/* 0049157C 030A7825 */  or    $t7, $t8, $t2
/* 00491580 AFAF0034 */  sw    $t7, 0x34($sp)
/* 00491584 8CA90000 */  lw    $t1, ($a1)
/* 00491588 AC690000 */  sw    $t1, ($v1)
/* 0049158C 8CAB0004 */  lw    $t3, 4($a1)
/* 00491590 AC6B0004 */  sw    $t3, 4($v1)
.L00491594:
/* 00491594 24630008 */  addiu $v1, $v1, 8
/* 00491598 5467FF97 */  bnel  $v1, $a3, .L004913F8
/* 0049159C 8C780000 */   lw    $t8, ($v1)
.L004915A0:
/* 004915A0 8FBF0024 */  lw    $ra, 0x24($sp)
/* 004915A4 8FB00018 */  lw    $s0, 0x18($sp)
/* 004915A8 8FB1001C */  lw    $s1, 0x1c($sp)
/* 004915AC 03E00008 */  jr    $ra
/* 004915B0 27BD0040 */   addiu $sp, $sp, 0x40
    .type swap_reloc, @function
    .size swap_reloc, .-swap_reloc
    .end swap_reloc

glabel swap_ranlib
    .ent swap_ranlib
/* 004915B4 18A0001C */  blez  $a1, .L00491628
/* 004915B8 00801025 */   move  $v0, $a0
/* 004915BC 000570C0 */  sll   $t6, $a1, 3
/* 004915C0 01C43021 */  addu  $a2, $t6, $a0
/* 004915C4 3C0700FF */  lui   $a3, 0xff
.L004915C8:
/* 004915C8 8C430000 */  lw    $v1, ($v0)
/* 004915CC 8C440004 */  lw    $a0, 4($v0)
/* 004915D0 24420008 */  addiu $v0, $v0, 8
/* 004915D4 0003C200 */  sll   $t8, $v1, 8
/* 004915D8 0307C824 */  and   $t9, $t8, $a3
/* 004915DC 00037E00 */  sll   $t7, $v1, 0x18
/* 004915E0 01F94025 */  or    $t0, $t7, $t9
/* 004915E4 00034A03 */  sra   $t1, $v1, 8
/* 004915E8 312AFF00 */  andi  $t2, $t1, 0xff00
/* 004915EC 010A5825 */  or    $t3, $t0, $t2
/* 004915F0 0004C200 */  sll   $t8, $a0, 8
/* 004915F4 03077824 */  and   $t7, $t8, $a3
/* 004915F8 00036602 */  srl   $t4, $v1, 0x18
/* 004915FC 00044A03 */  sra   $t1, $a0, 8
/* 00491600 00047600 */  sll   $t6, $a0, 0x18
/* 00491604 018B6825 */  or    $t5, $t4, $t3
/* 00491608 01CFC825 */  or    $t9, $t6, $t7
/* 0049160C 3128FF00 */  andi  $t0, $t1, 0xff00
/* 00491610 03285025 */  or    $t2, $t9, $t0
/* 00491614 00046602 */  srl   $t4, $a0, 0x18
/* 00491618 018A5825 */  or    $t3, $t4, $t2
/* 0049161C AC4DFFF8 */  sw    $t5, -8($v0)
/* 00491620 1446FFE9 */  bne   $v0, $a2, .L004915C8
/* 00491624 AC4BFFFC */   sw    $t3, -4($v0)
.L00491628:
/* 00491628 03E00008 */  jr    $ra
/* 0049162C 00000000 */   nop   
    .type swap_ranlib, @function
    .size swap_ranlib, .-swap_ranlib
    .end swap_ranlib

glabel swap_gpt
    .ent swap_gpt
/* 00491630 18A0001D */  blez  $a1, .L004916A8
/* 00491634 AFA60008 */   sw    $a2, 8($sp)
/* 00491638 000570C0 */  sll   $t6, $a1, 3
/* 0049163C 01C43021 */  addu  $a2, $t6, $a0
/* 00491640 00801025 */  move  $v0, $a0
/* 00491644 3C0700FF */  lui   $a3, 0xff
.L00491648:
/* 00491648 8C430000 */  lw    $v1, ($v0)
/* 0049164C 8C440004 */  lw    $a0, 4($v0)
/* 00491650 24420008 */  addiu $v0, $v0, 8
/* 00491654 0003C200 */  sll   $t8, $v1, 8
/* 00491658 0307C824 */  and   $t9, $t8, $a3
/* 0049165C 00037E00 */  sll   $t7, $v1, 0x18
/* 00491660 01F94025 */  or    $t0, $t7, $t9
/* 00491664 00034A03 */  sra   $t1, $v1, 8
/* 00491668 312AFF00 */  andi  $t2, $t1, 0xff00
/* 0049166C 010A5825 */  or    $t3, $t0, $t2
/* 00491670 0004C200 */  sll   $t8, $a0, 8
/* 00491674 03077824 */  and   $t7, $t8, $a3
/* 00491678 00036602 */  srl   $t4, $v1, 0x18
/* 0049167C 00044A03 */  sra   $t1, $a0, 8
/* 00491680 00047600 */  sll   $t6, $a0, 0x18
/* 00491684 018B6825 */  or    $t5, $t4, $t3
/* 00491688 01CFC825 */  or    $t9, $t6, $t7
/* 0049168C 3128FF00 */  andi  $t0, $t1, 0xff00
/* 00491690 03285025 */  or    $t2, $t9, $t0
/* 00491694 00046602 */  srl   $t4, $a0, 0x18
/* 00491698 018A5825 */  or    $t3, $t4, $t2
/* 0049169C AC4DFFF8 */  sw    $t5, -8($v0)
/* 004916A0 1446FFE9 */  bne   $v0, $a2, .L00491648
/* 004916A4 AC4BFFFC */   sw    $t3, -4($v0)
.L004916A8:
/* 004916A8 03E00008 */  jr    $ra
/* 004916AC 00000000 */   nop   
    .type swap_gpt, @function
    .size swap_gpt, .-swap_gpt
    .end swap_gpt

glabel swap_dynamic
    .ent swap_dynamic
/* 004916B0 AFA50004 */  sw    $a1, 4($sp)
/* 004916B4 8C820000 */  lw    $v0, ($a0)
/* 004916B8 8C830004 */  lw    $v1, 4($a0)
/* 004916BC 3C0100FF */  lui   $at, 0xff
/* 004916C0 00027A00 */  sll   $t7, $v0, 8
/* 004916C4 01E1C024 */  and   $t8, $t7, $at
/* 004916C8 00027600 */  sll   $t6, $v0, 0x18
/* 004916CC 00024203 */  sra   $t0, $v0, 8
/* 004916D0 3109FF00 */  andi  $t1, $t0, 0xff00
/* 004916D4 01D8C825 */  or    $t9, $t6, $t8
/* 004916D8 03295025 */  or    $t2, $t9, $t1
/* 004916DC 3C0500FF */  lui   $a1, 0xff
/* 004916E0 00037A00 */  sll   $t7, $v1, 8
/* 004916E4 01E57024 */  and   $t6, $t7, $a1
/* 004916E8 00025E02 */  srl   $t3, $v0, 0x18
/* 004916EC 00034202 */  srl   $t0, $v1, 8
/* 004916F0 00036E00 */  sll   $t5, $v1, 0x18
/* 004916F4 014B6025 */  or    $t4, $t2, $t3
/* 004916F8 01AEC025 */  or    $t8, $t5, $t6
/* 004916FC 3119FF00 */  andi  $t9, $t0, 0xff00
/* 00491700 03194825 */  or    $t1, $t8, $t9
/* 00491704 00035602 */  srl   $t2, $v1, 0x18
/* 00491708 012A5825 */  or    $t3, $t1, $t2
/* 0049170C AC8C0000 */  sw    $t4, ($a0)
/* 00491710 000B7A00 */  sll   $t7, $t3, 8
/* 00491714 01E56824 */  and   $t5, $t7, $a1
/* 00491718 000B6600 */  sll   $t4, $t3, 0x18
/* 0049171C 000B4202 */  srl   $t0, $t3, 8
/* 00491720 3118FF00 */  andi  $t8, $t0, 0xff00
/* 00491724 018D7025 */  or    $t6, $t4, $t5
/* 00491728 01D8C825 */  or    $t9, $t6, $t8
/* 0049172C 000B4E02 */  srl   $t1, $t3, 0x18
/* 00491730 AC8B0004 */  sw    $t3, 4($a0)
/* 00491734 03295025 */  or    $t2, $t9, $t1
/* 00491738 03E00008 */  jr    $ra
/* 0049173C AC8A0004 */   sw    $t2, 4($a0)
    .type swap_dynamic, @function
    .size swap_dynamic, .-swap_dynamic
    .end swap_dynamic

glabel swap_rel_dyn
    .ent swap_rel_dyn
/* 00491740 AFA50004 */  sw    $a1, 4($sp)
/* 00491744 8C820000 */  lw    $v0, ($a0)
/* 00491748 8C830004 */  lw    $v1, 4($a0)
/* 0049174C 3C0500FF */  lui   $a1, 0xff
/* 00491750 00027A00 */  sll   $t7, $v0, 8
/* 00491754 01E5C024 */  and   $t8, $t7, $a1
/* 00491758 00027600 */  sll   $t6, $v0, 0x18
/* 0049175C 00024202 */  srl   $t0, $v0, 8
/* 00491760 3109FF00 */  andi  $t1, $t0, 0xff00
/* 00491764 01D8C825 */  or    $t9, $t6, $t8
/* 00491768 03295025 */  or    $t2, $t9, $t1
/* 0049176C 00037A00 */  sll   $t7, $v1, 8
/* 00491770 01E57024 */  and   $t6, $t7, $a1
/* 00491774 00025E02 */  srl   $t3, $v0, 0x18
/* 00491778 00034202 */  srl   $t0, $v1, 8
/* 0049177C 00036E00 */  sll   $t5, $v1, 0x18
/* 00491780 014B6025 */  or    $t4, $t2, $t3
/* 00491784 01AEC025 */  or    $t8, $t5, $t6
/* 00491788 3119FF00 */  andi  $t9, $t0, 0xff00
/* 0049178C 03194825 */  or    $t1, $t8, $t9
/* 00491790 00035602 */  srl   $t2, $v1, 0x18
/* 00491794 012A5825 */  or    $t3, $t1, $t2
/* 00491798 AC8C0000 */  sw    $t4, ($a0)
/* 0049179C 03E00008 */  jr    $ra
/* 004917A0 AC8B0004 */   sw    $t3, 4($a0)
    .type swap_rel_dyn, @function
    .size swap_rel_dyn, .-swap_rel_dyn
    .end swap_rel_dyn

glabel swap_reginfo
    .ent swap_reginfo
/* 004917A4 AFA50004 */  sw    $a1, 4($sp)
/* 004917A8 8C820000 */  lw    $v0, ($a0)
/* 004917AC 8C830004 */  lw    $v1, 4($a0)
/* 004917B0 3C0700FF */  lui   $a3, 0xff
/* 004917B4 00027A00 */  sll   $t7, $v0, 8
/* 004917B8 01E7C024 */  and   $t8, $t7, $a3
/* 004917BC 00027600 */  sll   $t6, $v0, 0x18
/* 004917C0 00024202 */  srl   $t0, $v0, 8
/* 004917C4 3109FF00 */  andi  $t1, $t0, 0xff00
/* 004917C8 01D8C825 */  or    $t9, $t6, $t8
/* 004917CC 03295025 */  or    $t2, $t9, $t1
/* 004917D0 00025E02 */  srl   $t3, $v0, 0x18
/* 004917D4 8C850008 */  lw    $a1, 8($a0)
/* 004917D8 014B6025 */  or    $t4, $t2, $t3
/* 004917DC 0003C200 */  sll   $t8, $v1, 8
/* 004917E0 00037E00 */  sll   $t7, $v1, 0x18
/* 004917E4 00036E02 */  srl   $t5, $v1, 0x18
/* 004917E8 01AF7025 */  or    $t6, $t5, $t7
/* 004917EC 03074024 */  and   $t0, $t8, $a3
/* 004917F0 00034A02 */  srl   $t1, $v1, 8
/* 004917F4 8C86000C */  lw    $a2, 0xc($a0)
/* 004917F8 AC8C0000 */  sw    $t4, ($a0)
/* 004917FC 312AFF00 */  andi  $t2, $t1, 0xff00
/* 00491800 01C8C825 */  or    $t9, $t6, $t0
/* 00491804 032A5825 */  or    $t3, $t9, $t2
/* 00491808 00056602 */  srl   $t4, $a1, 0x18
/* 0049180C 00056E00 */  sll   $t5, $a1, 0x18
/* 00491810 018D7825 */  or    $t7, $t4, $t5
/* 00491814 0005C200 */  sll   $t8, $a1, 8
/* 00491818 8C820010 */  lw    $v0, 0x10($a0)
/* 0049181C AC8B0004 */  sw    $t3, 4($a0)
/* 00491820 03077024 */  and   $t6, $t8, $a3
/* 00491824 00054A02 */  srl   $t1, $a1, 8
/* 00491828 3139FF00 */  andi  $t9, $t1, 0xff00
/* 0049182C 01EE4025 */  or    $t0, $t7, $t6
/* 00491830 00065E02 */  srl   $t3, $a2, 0x18
/* 00491834 00066600 */  sll   $t4, $a2, 0x18
/* 00491838 01195025 */  or    $t2, $t0, $t9
/* 0049183C 016C6825 */  or    $t5, $t3, $t4
/* 00491840 0006C200 */  sll   $t8, $a2, 8
/* 00491844 AC8A0008 */  sw    $t2, 8($a0)
/* 00491848 03077824 */  and   $t7, $t8, $a3
/* 0049184C 8C830014 */  lw    $v1, 0x14($a0)
/* 00491850 01AF7025 */  or    $t6, $t5, $t7
/* 00491854 00064A02 */  srl   $t1, $a2, 8
/* 00491858 00025602 */  srl   $t2, $v0, 0x18
/* 0049185C 00025E00 */  sll   $t3, $v0, 0x18
/* 00491860 3128FF00 */  andi  $t0, $t1, 0xff00
/* 00491864 014B6025 */  or    $t4, $t2, $t3
/* 00491868 0002C200 */  sll   $t8, $v0, 8
/* 0049186C 01C8C825 */  or    $t9, $t6, $t0
/* 00491870 03076824 */  and   $t5, $t8, $a3
/* 00491874 018D7825 */  or    $t7, $t4, $t5
/* 00491878 AC99000C */  sw    $t9, 0xc($a0)
/* 0049187C 3C0100FF */  lui   $at, 0xff
/* 00491880 00024A02 */  srl   $t1, $v0, 8
/* 00491884 00035200 */  sll   $t2, $v1, 8
/* 00491888 312EFF00 */  andi  $t6, $t1, 0xff00
/* 0049188C 01415824 */  and   $t3, $t2, $at
/* 00491890 0003CE00 */  sll   $t9, $v1, 0x18
/* 00491894 00036203 */  sra   $t4, $v1, 8
/* 00491898 01EE4025 */  or    $t0, $t7, $t6
/* 0049189C 318DFF00 */  andi  $t5, $t4, 0xff00
/* 004918A0 032BC025 */  or    $t8, $t9, $t3
/* 004918A4 030D4825 */  or    $t1, $t8, $t5
/* 004918A8 00037E02 */  srl   $t7, $v1, 0x18
/* 004918AC 012F7025 */  or    $t6, $t1, $t7
/* 004918B0 AC880010 */  sw    $t0, 0x10($a0)
/* 004918B4 03E00008 */  jr    $ra
/* 004918B8 AC8E0014 */   sw    $t6, 0x14($a0)
    .type swap_reginfo, @function
    .size swap_reginfo, .-swap_reginfo
    .end swap_reginfo

glabel swap_dynsym
    .ent swap_dynsym
/* 004918BC AFA50004 */  sw    $a1, 4($sp)
/* 004918C0 8C820000 */  lw    $v0, ($a0)
/* 004918C4 8C830004 */  lw    $v1, 4($a0)
/* 004918C8 3C0700FF */  lui   $a3, 0xff
/* 004918CC 00027A00 */  sll   $t7, $v0, 8
/* 004918D0 01E7C024 */  and   $t8, $t7, $a3
/* 004918D4 00027600 */  sll   $t6, $v0, 0x18
/* 004918D8 00024202 */  srl   $t0, $v0, 8
/* 004918DC 3109FF00 */  andi  $t1, $t0, 0xff00
/* 004918E0 01D8C825 */  or    $t9, $t6, $t8
/* 004918E4 03295025 */  or    $t2, $t9, $t1
/* 004918E8 00037A00 */  sll   $t7, $v1, 8
/* 004918EC 01E77024 */  and   $t6, $t7, $a3
/* 004918F0 00025E02 */  srl   $t3, $v0, 0x18
/* 004918F4 00034202 */  srl   $t0, $v1, 8
/* 004918F8 00036E00 */  sll   $t5, $v1, 0x18
/* 004918FC 014B6025 */  or    $t4, $t2, $t3
/* 00491900 01AEC025 */  or    $t8, $t5, $t6
/* 00491904 3119FF00 */  andi  $t9, $t0, 0xff00
/* 00491908 8C850008 */  lw    $a1, 8($a0)
/* 0049190C 03194825 */  or    $t1, $t8, $t9
/* 00491910 00035602 */  srl   $t2, $v1, 0x18
/* 00491914 012A5825 */  or    $t3, $t1, $t2
/* 00491918 AC8B0004 */  sw    $t3, 4($a0)
/* 0049191C 948B000E */  lhu   $t3, 0xe($a0)
/* 00491920 AC8C0000 */  sw    $t4, ($a0)
/* 00491924 00057A00 */  sll   $t7, $a1, 8
/* 00491928 01E76824 */  and   $t5, $t7, $a3
/* 0049192C 00056600 */  sll   $t4, $a1, 0x18
/* 00491930 018D7025 */  or    $t6, $t4, $t5
/* 00491934 00054202 */  srl   $t0, $a1, 8
/* 00491938 3118FF00 */  andi  $t8, $t0, 0xff00
/* 0049193C 01D8C825 */  or    $t9, $t6, $t8
/* 00491940 00054E02 */  srl   $t1, $a1, 0x18
/* 00491944 000B6202 */  srl   $t4, $t3, 8
/* 00491948 000B7A00 */  sll   $t7, $t3, 8
/* 0049194C 03295025 */  or    $t2, $t9, $t1
/* 00491950 01EC6825 */  or    $t5, $t7, $t4
/* 00491954 AC8A0008 */  sw    $t2, 8($a0)
/* 00491958 03E00008 */  jr    $ra
/* 0049195C A48D000E */   sh    $t5, 0xe($a0)
    .type swap_dynsym, @function
    .size swap_dynsym, .-swap_dynsym
    .end swap_dynsym

glabel swap_conflict
    .ent swap_conflict
/* 00491960 AFA50004 */  sw    $a1, 4($sp)
/* 00491964 8C820000 */  lw    $v0, ($a0)
/* 00491968 3C0100FF */  lui   $at, 0xff
/* 0049196C 00027602 */  srl   $t6, $v0, 0x18
/* 00491970 00027E00 */  sll   $t7, $v0, 0x18
/* 00491974 0002CA00 */  sll   $t9, $v0, 8
/* 00491978 03214024 */  and   $t0, $t9, $at
/* 0049197C 01CFC025 */  or    $t8, $t6, $t7
/* 00491980 00025202 */  srl   $t2, $v0, 8
/* 00491984 314BFF00 */  andi  $t3, $t2, 0xff00
/* 00491988 03084825 */  or    $t1, $t8, $t0
/* 0049198C 012B6025 */  or    $t4, $t1, $t3
/* 00491990 03E00008 */  jr    $ra
/* 00491994 AC8C0000 */   sw    $t4, ($a0)
    .type swap_conflict, @function
    .size swap_conflict, .-swap_conflict
    .end swap_conflict

glabel swap_got
    .ent swap_got
/* 00491998 AFA50004 */  sw    $a1, 4($sp)
/* 0049199C 8C820000 */  lw    $v0, ($a0)
/* 004919A0 3C0100FF */  lui   $at, 0xff
/* 004919A4 00027A00 */  sll   $t7, $v0, 8
/* 004919A8 01E1C024 */  and   $t8, $t7, $at
/* 004919AC 00027600 */  sll   $t6, $v0, 0x18
/* 004919B0 00024202 */  srl   $t0, $v0, 8
/* 004919B4 3109FF00 */  andi  $t1, $t0, 0xff00
/* 004919B8 01D8C825 */  or    $t9, $t6, $t8
/* 004919BC 03295025 */  or    $t2, $t9, $t1
/* 004919C0 00025E02 */  srl   $t3, $v0, 0x18
/* 004919C4 014B6025 */  or    $t4, $t2, $t3
/* 004919C8 03E00008 */  jr    $ra
/* 004919CC AC8C0000 */   sw    $t4, ($a0)
    .type swap_got, @function
    .size swap_got, .-swap_got
    .end swap_got

glabel swap_liblist
    .ent swap_liblist
/* 004919D0 AFA50004 */  sw    $a1, 4($sp)
/* 004919D4 8C820000 */  lw    $v0, ($a0)
/* 004919D8 8C830004 */  lw    $v1, 4($a0)
/* 004919DC 3C0700FF */  lui   $a3, 0xff
/* 004919E0 00027A00 */  sll   $t7, $v0, 8
/* 004919E4 01E7C024 */  and   $t8, $t7, $a3
/* 004919E8 00027600 */  sll   $t6, $v0, 0x18
/* 004919EC 00024202 */  srl   $t0, $v0, 8
/* 004919F0 3109FF00 */  andi  $t1, $t0, 0xff00
/* 004919F4 01D8C825 */  or    $t9, $t6, $t8
/* 004919F8 8C850008 */  lw    $a1, 8($a0)
/* 004919FC 03295025 */  or    $t2, $t9, $t1
/* 00491A00 00025E02 */  srl   $t3, $v0, 0x18
/* 00491A04 00037A00 */  sll   $t7, $v1, 8
/* 00491A08 014B6025 */  or    $t4, $t2, $t3
/* 00491A0C 01E77024 */  and   $t6, $t7, $a3
/* 00491A10 00036E00 */  sll   $t5, $v1, 0x18
/* 00491A14 01AEC025 */  or    $t8, $t5, $t6
/* 00491A18 00034202 */  srl   $t0, $v1, 8
/* 00491A1C 8C86000C */  lw    $a2, 0xc($a0)
/* 00491A20 AC8C0000 */  sw    $t4, ($a0)
/* 00491A24 3119FF00 */  andi  $t9, $t0, 0xff00
/* 00491A28 00057A00 */  sll   $t7, $a1, 8
/* 00491A2C 03194825 */  or    $t1, $t8, $t9
/* 00491A30 01E76824 */  and   $t5, $t7, $a3
/* 00491A34 00035602 */  srl   $t2, $v1, 0x18
/* 00491A38 00056600 */  sll   $t4, $a1, 0x18
/* 00491A3C 012A5825 */  or    $t3, $t1, $t2
/* 00491A40 018D7025 */  or    $t6, $t4, $t5
/* 00491A44 00054202 */  srl   $t0, $a1, 8
/* 00491A48 3118FF00 */  andi  $t8, $t0, 0xff00
/* 00491A4C 8C820010 */  lw    $v0, 0x10($a0)
/* 00491A50 AC8B0004 */  sw    $t3, 4($a0)
/* 00491A54 01D8C825 */  or    $t9, $t6, $t8
/* 00491A58 00067A00 */  sll   $t7, $a2, 8
/* 00491A5C 01E76024 */  and   $t4, $t7, $a3
/* 00491A60 00054E02 */  srl   $t1, $a1, 0x18
/* 00491A64 00065E00 */  sll   $t3, $a2, 0x18
/* 00491A68 00064202 */  srl   $t0, $a2, 8
/* 00491A6C 03295025 */  or    $t2, $t9, $t1
/* 00491A70 310EFF00 */  andi  $t6, $t0, 0xff00
/* 00491A74 016C6825 */  or    $t5, $t3, $t4
/* 00491A78 01AEC025 */  or    $t8, $t5, $t6
/* 00491A7C AC8A0008 */  sw    $t2, 8($a0)
/* 00491A80 00027A00 */  sll   $t7, $v0, 8
/* 00491A84 01E75824 */  and   $t3, $t7, $a3
/* 00491A88 0006CE02 */  srl   $t9, $a2, 0x18
/* 00491A8C 00025600 */  sll   $t2, $v0, 0x18
/* 00491A90 00024202 */  srl   $t0, $v0, 8
/* 00491A94 03194825 */  or    $t1, $t8, $t9
/* 00491A98 310DFF00 */  andi  $t5, $t0, 0xff00
/* 00491A9C 014B6025 */  or    $t4, $t2, $t3
/* 00491AA0 018D7025 */  or    $t6, $t4, $t5
/* 00491AA4 0002C602 */  srl   $t8, $v0, 0x18
/* 00491AA8 01D8C825 */  or    $t9, $t6, $t8
/* 00491AAC AC89000C */  sw    $t1, 0xc($a0)
/* 00491AB0 03E00008 */  jr    $ra
/* 00491AB4 AC990010 */   sw    $t9, 0x10($a0)
    .type swap_liblist, @function
    .size swap_liblist, .-swap_liblist
    .end swap_liblist

glabel swap_msym
    .ent swap_msym
/* 00491AB8 AFA50004 */  sw    $a1, 4($sp)
/* 00491ABC 8C820000 */  lw    $v0, ($a0)
/* 00491AC0 8C830004 */  lw    $v1, 4($a0)
/* 00491AC4 3C0500FF */  lui   $a1, 0xff
/* 00491AC8 00027A00 */  sll   $t7, $v0, 8
/* 00491ACC 01E5C024 */  and   $t8, $t7, $a1
/* 00491AD0 00027600 */  sll   $t6, $v0, 0x18
/* 00491AD4 00024202 */  srl   $t0, $v0, 8
/* 00491AD8 3109FF00 */  andi  $t1, $t0, 0xff00
/* 00491ADC 01D8C825 */  or    $t9, $t6, $t8
/* 00491AE0 03295025 */  or    $t2, $t9, $t1
/* 00491AE4 00037A00 */  sll   $t7, $v1, 8
/* 00491AE8 01E57024 */  and   $t6, $t7, $a1
/* 00491AEC 00025E02 */  srl   $t3, $v0, 0x18
/* 00491AF0 00034202 */  srl   $t0, $v1, 8
/* 00491AF4 00036E00 */  sll   $t5, $v1, 0x18
/* 00491AF8 014B6025 */  or    $t4, $t2, $t3
/* 00491AFC 01AEC025 */  or    $t8, $t5, $t6
/* 00491B00 3119FF00 */  andi  $t9, $t0, 0xff00
/* 00491B04 03194825 */  or    $t1, $t8, $t9
/* 00491B08 00035602 */  srl   $t2, $v1, 0x18
/* 00491B0C 012A5825 */  or    $t3, $t1, $t2
/* 00491B10 AC8C0000 */  sw    $t4, ($a0)
/* 00491B14 03E00008 */  jr    $ra
/* 00491B18 AC8B0004 */   sw    $t3, 4($a0)
    .type swap_msym, @function
    .size swap_msym, .-swap_msym
    .end swap_msym

glabel swap_ehdr
    .ent swap_ehdr
/* 00491B1C 94820010 */  lhu   $v0, 0x10($a0)
/* 00491B20 94830012 */  lhu   $v1, 0x12($a0)
/* 00491B24 8C850014 */  lw    $a1, 0x14($a0)
/* 00491B28 00027A00 */  sll   $t7, $v0, 8
/* 00491B2C 0002C202 */  srl   $t8, $v0, 8
/* 00491B30 01F8C825 */  or    $t9, $t7, $t8
/* 00491B34 00035A00 */  sll   $t3, $v1, 8
/* 00491B38 00036202 */  srl   $t4, $v1, 8
/* 00491B3C 016C6825 */  or    $t5, $t3, $t4
/* 00491B40 3C0900FF */  lui   $t1, 0xff
/* 00491B44 00057A00 */  sll   $t7, $a1, 8
/* 00491B48 8C860018 */  lw    $a2, 0x18($a0)
/* 00491B4C A4990010 */  sh    $t9, 0x10($a0)
/* 00491B50 01E9C024 */  and   $t8, $t7, $t1
/* 00491B54 00057600 */  sll   $t6, $a1, 0x18
/* 00491B58 00055202 */  srl   $t2, $a1, 8
/* 00491B5C A48D0012 */  sh    $t5, 0x12($a0)
/* 00491B60 314BFF00 */  andi  $t3, $t2, 0xff00
/* 00491B64 01D8C825 */  or    $t9, $t6, $t8
/* 00491B68 032B6025 */  or    $t4, $t9, $t3
/* 00491B6C 00056E02 */  srl   $t5, $a1, 0x18
/* 00491B70 018D7825 */  or    $t7, $t4, $t5
/* 00491B74 0006C200 */  sll   $t8, $a2, 8
/* 00491B78 8C87001C */  lw    $a3, 0x1c($a0)
/* 00491B7C 03095024 */  and   $t2, $t8, $t1
/* 00491B80 00065A02 */  srl   $t3, $a2, 8
/* 00491B84 00067600 */  sll   $t6, $a2, 0x18
/* 00491B88 AC8F0014 */  sw    $t7, 0x14($a0)
/* 00491B8C 01CAC825 */  or    $t9, $t6, $t2
/* 00491B90 316CFF00 */  andi  $t4, $t3, 0xff00
/* 00491B94 032C6825 */  or    $t5, $t9, $t4
/* 00491B98 00067E02 */  srl   $t7, $a2, 0x18
/* 00491B9C 01AFC025 */  or    $t8, $t5, $t7
/* 00491BA0 00075200 */  sll   $t2, $a3, 8
/* 00491BA4 8C820020 */  lw    $v0, 0x20($a0)
/* 00491BA8 01495824 */  and   $t3, $t2, $t1
/* 00491BAC 00076202 */  srl   $t4, $a3, 8
/* 00491BB0 00077600 */  sll   $t6, $a3, 0x18
/* 00491BB4 AC980018 */  sw    $t8, 0x18($a0)
/* 00491BB8 01CBC825 */  or    $t9, $t6, $t3
/* 00491BBC 318DFF00 */  andi  $t5, $t4, 0xff00
/* 00491BC0 032D7825 */  or    $t7, $t9, $t5
/* 00491BC4 0007C602 */  srl   $t8, $a3, 0x18
/* 00491BC8 01F85025 */  or    $t2, $t7, $t8
/* 00491BCC 00025A00 */  sll   $t3, $v0, 8
/* 00491BD0 8C830024 */  lw    $v1, 0x24($a0)
/* 00491BD4 01696024 */  and   $t4, $t3, $t1
/* 00491BD8 00026A02 */  srl   $t5, $v0, 8
/* 00491BDC 00027600 */  sll   $t6, $v0, 0x18
/* 00491BE0 AC8A001C */  sw    $t2, 0x1c($a0)
/* 00491BE4 01CCC825 */  or    $t9, $t6, $t4
/* 00491BE8 31AFFF00 */  andi  $t7, $t5, 0xff00
/* 00491BEC 032FC025 */  or    $t8, $t9, $t7
/* 00491BF0 00025602 */  srl   $t2, $v0, 0x18
/* 00491BF4 030A5825 */  or    $t3, $t8, $t2
/* 00491BF8 00036200 */  sll   $t4, $v1, 8
/* 00491BFC 01896824 */  and   $t5, $t4, $t1
/* 00491C00 00037A02 */  srl   $t7, $v1, 8
/* 00491C04 00037600 */  sll   $t6, $v1, 0x18
/* 00491C08 AC8B0020 */  sw    $t3, 0x20($a0)
/* 00491C0C 01CDC825 */  or    $t9, $t6, $t5
/* 00491C10 31F8FF00 */  andi  $t8, $t7, 0xff00
/* 00491C14 94850028 */  lhu   $a1, 0x28($a0)
/* 00491C18 9486002A */  lhu   $a2, 0x2a($a0)
/* 00491C1C 03385025 */  or    $t2, $t9, $t8
/* 00491C20 00035E02 */  srl   $t3, $v1, 0x18
/* 00491C24 014B6025 */  or    $t4, $t2, $t3
/* 00491C28 9487002C */  lhu   $a3, 0x2c($a0)
/* 00491C2C 9488002E */  lhu   $t0, 0x2e($a0)
/* 00491C30 AC8C0024 */  sw    $t4, 0x24($a0)
/* 00491C34 00056A00 */  sll   $t5, $a1, 8
/* 00491C38 00057A02 */  srl   $t7, $a1, 8
/* 00491C3C 00065A02 */  srl   $t3, $a2, 8
/* 00491C40 00065200 */  sll   $t2, $a2, 8
/* 00491C44 01AFC825 */  or    $t9, $t5, $t7
/* 00491C48 014B6025 */  or    $t4, $t2, $t3
/* 00491C4C 94820030 */  lhu   $v0, 0x30($a0)
/* 00491C50 94980032 */  lhu   $t8, 0x32($a0)
/* 00491C54 A4990028 */  sh    $t9, 0x28($a0)
/* 00491C58 A48C002A */  sh    $t4, 0x2a($a0)
/* 00491C5C 00077A02 */  srl   $t7, $a3, 8
/* 00491C60 00076A00 */  sll   $t5, $a3, 8
/* 00491C64 00085A02 */  srl   $t3, $t0, 8
/* 00491C68 00085200 */  sll   $t2, $t0, 8
/* 00491C6C 01AFC825 */  or    $t9, $t5, $t7
/* 00491C70 014B6025 */  or    $t4, $t2, $t3
/* 00491C74 304E00FF */  andi  $t6, $v0, 0xff
/* 00491C78 A499002C */  sh    $t9, 0x2c($a0)
/* 00491C7C A48C002E */  sh    $t4, 0x2e($a0)
/* 00491C80 000E6A00 */  sll   $t5, $t6, 8
/* 00491C84 00027A02 */  srl   $t7, $v0, 8
/* 00491C88 00185A02 */  srl   $t3, $t8, 8
/* 00491C8C 00185200 */  sll   $t2, $t8, 8
/* 00491C90 01AFC825 */  or    $t9, $t5, $t7
/* 00491C94 014B6025 */  or    $t4, $t2, $t3
/* 00491C98 A4990030 */  sh    $t9, 0x30($a0)
/* 00491C9C 03E00008 */  jr    $ra
/* 00491CA0 A48C0032 */   sh    $t4, 0x32($a0)
    .type swap_ehdr, @function
    .size swap_ehdr, .-swap_ehdr
    .end swap_ehdr

glabel swap_phdr
    .ent swap_phdr
/* 00491CA4 8C820000 */  lw    $v0, ($a0)
/* 00491CA8 8C830004 */  lw    $v1, 4($a0)
/* 00491CAC 3C0700FF */  lui   $a3, 0xff
/* 00491CB0 00027A00 */  sll   $t7, $v0, 8
/* 00491CB4 01E7C024 */  and   $t8, $t7, $a3
/* 00491CB8 00027600 */  sll   $t6, $v0, 0x18
/* 00491CBC 01D8C825 */  or    $t9, $t6, $t8
/* 00491CC0 00024202 */  srl   $t0, $v0, 8
/* 00491CC4 3109FF00 */  andi  $t1, $t0, 0xff00
/* 00491CC8 8C850008 */  lw    $a1, 8($a0)
/* 00491CCC 03295025 */  or    $t2, $t9, $t1
/* 00491CD0 00025E02 */  srl   $t3, $v0, 0x18
/* 00491CD4 00037A00 */  sll   $t7, $v1, 8
/* 00491CD8 014B6025 */  or    $t4, $t2, $t3
/* 00491CDC 01E77024 */  and   $t6, $t7, $a3
/* 00491CE0 00034202 */  srl   $t0, $v1, 8
/* 00491CE4 00036E00 */  sll   $t5, $v1, 0x18
/* 00491CE8 01AEC025 */  or    $t8, $t5, $t6
/* 00491CEC 3119FF00 */  andi  $t9, $t0, 0xff00
/* 00491CF0 03194825 */  or    $t1, $t8, $t9
/* 00491CF4 8C86000C */  lw    $a2, 0xc($a0)
/* 00491CF8 AC8C0000 */  sw    $t4, ($a0)
/* 00491CFC 00035602 */  srl   $t2, $v1, 0x18
/* 00491D00 00057A00 */  sll   $t7, $a1, 8
/* 00491D04 012A5825 */  or    $t3, $t1, $t2
/* 00491D08 01E76824 */  and   $t5, $t7, $a3
/* 00491D0C 00056600 */  sll   $t4, $a1, 0x18
/* 00491D10 00054202 */  srl   $t0, $a1, 8
/* 00491D14 3118FF00 */  andi  $t8, $t0, 0xff00
/* 00491D18 018D7025 */  or    $t6, $t4, $t5
/* 00491D1C 01D8C825 */  or    $t9, $t6, $t8
/* 00491D20 00054E02 */  srl   $t1, $a1, 0x18
/* 00491D24 8C820010 */  lw    $v0, 0x10($a0)
/* 00491D28 AC8B0004 */  sw    $t3, 4($a0)
/* 00491D2C 03295025 */  or    $t2, $t9, $t1
/* 00491D30 00067A00 */  sll   $t7, $a2, 8
/* 00491D34 01E76024 */  and   $t4, $t7, $a3
/* 00491D38 00065E00 */  sll   $t3, $a2, 0x18
/* 00491D3C 00064202 */  srl   $t0, $a2, 8
/* 00491D40 310EFF00 */  andi  $t6, $t0, 0xff00
/* 00491D44 016C6825 */  or    $t5, $t3, $t4
/* 00491D48 8C830014 */  lw    $v1, 0x14($a0)
/* 00491D4C AC8A0008 */  sw    $t2, 8($a0)
/* 00491D50 01AEC025 */  or    $t8, $t5, $t6
/* 00491D54 0006CE02 */  srl   $t9, $a2, 0x18
/* 00491D58 00027A00 */  sll   $t7, $v0, 8
/* 00491D5C 03194825 */  or    $t1, $t8, $t9
/* 00491D60 01E75824 */  and   $t3, $t7, $a3
/* 00491D64 00025600 */  sll   $t2, $v0, 0x18
/* 00491D68 014B6025 */  or    $t4, $t2, $t3
/* 00491D6C 00024202 */  srl   $t0, $v0, 8
/* 00491D70 8C850018 */  lw    $a1, 0x18($a0)
/* 00491D74 AC89000C */  sw    $t1, 0xc($a0)
/* 00491D78 310DFF00 */  andi  $t5, $t0, 0xff00
/* 00491D7C 00037A00 */  sll   $t7, $v1, 8
/* 00491D80 018D7025 */  or    $t6, $t4, $t5
/* 00491D84 01E75024 */  and   $t2, $t7, $a3
/* 00491D88 0002C602 */  srl   $t8, $v0, 0x18
/* 00491D8C 00034E00 */  sll   $t1, $v1, 0x18
/* 00491D90 01D8C825 */  or    $t9, $t6, $t8
/* 00491D94 012A5825 */  or    $t3, $t1, $t2
/* 00491D98 00034202 */  srl   $t0, $v1, 8
/* 00491D9C 310CFF00 */  andi  $t4, $t0, 0xff00
/* 00491DA0 8C86001C */  lw    $a2, 0x1c($a0)
/* 00491DA4 AC990010 */  sw    $t9, 0x10($a0)
/* 00491DA8 016C6825 */  or    $t5, $t3, $t4
/* 00491DAC 00057A00 */  sll   $t7, $a1, 8
/* 00491DB0 01E74824 */  and   $t1, $t7, $a3
/* 00491DB4 00037602 */  srl   $t6, $v1, 0x18
/* 00491DB8 0005CE00 */  sll   $t9, $a1, 0x18
/* 00491DBC 00054202 */  srl   $t0, $a1, 8
/* 00491DC0 01AEC025 */  or    $t8, $t5, $t6
/* 00491DC4 310BFF00 */  andi  $t3, $t0, 0xff00
/* 00491DC8 03295025 */  or    $t2, $t9, $t1
/* 00491DCC 014B6025 */  or    $t4, $t2, $t3
/* 00491DD0 AC980014 */  sw    $t8, 0x14($a0)
/* 00491DD4 00067A00 */  sll   $t7, $a2, 8
/* 00491DD8 01E7C824 */  and   $t9, $t7, $a3
/* 00491DDC 00056E02 */  srl   $t5, $a1, 0x18
/* 00491DE0 0006C600 */  sll   $t8, $a2, 0x18
/* 00491DE4 00064202 */  srl   $t0, $a2, 8
/* 00491DE8 018D7025 */  or    $t6, $t4, $t5
/* 00491DEC 310AFF00 */  andi  $t2, $t0, 0xff00
/* 00491DF0 03194825 */  or    $t1, $t8, $t9
/* 00491DF4 012A5825 */  or    $t3, $t1, $t2
/* 00491DF8 00066602 */  srl   $t4, $a2, 0x18
/* 00491DFC 016C6825 */  or    $t5, $t3, $t4
/* 00491E00 AC8E0018 */  sw    $t6, 0x18($a0)
/* 00491E04 03E00008 */  jr    $ra
/* 00491E08 AC8D001C */   sw    $t5, 0x1c($a0)
    .type swap_phdr, @function
    .size swap_phdr, .-swap_phdr
    .end swap_phdr

glabel swap_shdr
    .ent swap_shdr
/* 00491E0C 8C820000 */  lw    $v0, ($a0)
/* 00491E10 8C830004 */  lw    $v1, 4($a0)
/* 00491E14 3C0700FF */  lui   $a3, 0xff
/* 00491E18 00027A00 */  sll   $t7, $v0, 8
/* 00491E1C 01E7C024 */  and   $t8, $t7, $a3
/* 00491E20 00027600 */  sll   $t6, $v0, 0x18
/* 00491E24 00024202 */  srl   $t0, $v0, 8
/* 00491E28 3109FF00 */  andi  $t1, $t0, 0xff00
/* 00491E2C 01D8C825 */  or    $t9, $t6, $t8
/* 00491E30 03295025 */  or    $t2, $t9, $t1
/* 00491E34 00025E02 */  srl   $t3, $v0, 0x18
/* 00491E38 8C850008 */  lw    $a1, 8($a0)
/* 00491E3C 014B6025 */  or    $t4, $t2, $t3
/* 00491E40 00037A00 */  sll   $t7, $v1, 8
/* 00491E44 01E77024 */  and   $t6, $t7, $a3
/* 00491E48 00034202 */  srl   $t0, $v1, 8
/* 00491E4C 00036E00 */  sll   $t5, $v1, 0x18
/* 00491E50 01AEC025 */  or    $t8, $t5, $t6
/* 00491E54 3119FF00 */  andi  $t9, $t0, 0xff00
/* 00491E58 8C86000C */  lw    $a2, 0xc($a0)
/* 00491E5C AC8C0000 */  sw    $t4, ($a0)
/* 00491E60 03194825 */  or    $t1, $t8, $t9
/* 00491E64 00035602 */  srl   $t2, $v1, 0x18
/* 00491E68 00057A00 */  sll   $t7, $a1, 8
/* 00491E6C 012A5825 */  or    $t3, $t1, $t2
/* 00491E70 01E76824 */  and   $t5, $t7, $a3
/* 00491E74 00056600 */  sll   $t4, $a1, 0x18
/* 00491E78 018D7025 */  or    $t6, $t4, $t5
/* 00491E7C 00054202 */  srl   $t0, $a1, 8
/* 00491E80 3118FF00 */  andi  $t8, $t0, 0xff00
/* 00491E84 8C820010 */  lw    $v0, 0x10($a0)
/* 00491E88 AC8B0004 */  sw    $t3, 4($a0)
/* 00491E8C 01D8C825 */  or    $t9, $t6, $t8
/* 00491E90 00054E02 */  srl   $t1, $a1, 0x18
/* 00491E94 00067A00 */  sll   $t7, $a2, 8
/* 00491E98 03295025 */  or    $t2, $t9, $t1
/* 00491E9C 01E76024 */  and   $t4, $t7, $a3
/* 00491EA0 00065E00 */  sll   $t3, $a2, 0x18
/* 00491EA4 00064202 */  srl   $t0, $a2, 8
/* 00491EA8 310EFF00 */  andi  $t6, $t0, 0xff00
/* 00491EAC 016C6825 */  or    $t5, $t3, $t4
/* 00491EB0 01AEC025 */  or    $t8, $t5, $t6
/* 00491EB4 8C830014 */  lw    $v1, 0x14($a0)
/* 00491EB8 AC8A0008 */  sw    $t2, 8($a0)
/* 00491EBC 0006CE02 */  srl   $t9, $a2, 0x18
/* 00491EC0 00027A00 */  sll   $t7, $v0, 8
/* 00491EC4 03194825 */  or    $t1, $t8, $t9
/* 00491EC8 01E75824 */  and   $t3, $t7, $a3
/* 00491ECC 00025600 */  sll   $t2, $v0, 0x18
/* 00491ED0 00024202 */  srl   $t0, $v0, 8
/* 00491ED4 310DFF00 */  andi  $t5, $t0, 0xff00
/* 00491ED8 014B6025 */  or    $t4, $t2, $t3
/* 00491EDC 018D7025 */  or    $t6, $t4, $t5
/* 00491EE0 0002C602 */  srl   $t8, $v0, 0x18
/* 00491EE4 8C850018 */  lw    $a1, 0x18($a0)
/* 00491EE8 AC89000C */  sw    $t1, 0xc($a0)
/* 00491EEC 01D8C825 */  or    $t9, $t6, $t8
/* 00491EF0 00037A00 */  sll   $t7, $v1, 8
/* 00491EF4 01E75024 */  and   $t2, $t7, $a3
/* 00491EF8 00034E00 */  sll   $t1, $v1, 0x18
/* 00491EFC 00034202 */  srl   $t0, $v1, 8
/* 00491F00 310CFF00 */  andi  $t4, $t0, 0xff00
/* 00491F04 012A5825 */  or    $t3, $t1, $t2
/* 00491F08 8C86001C */  lw    $a2, 0x1c($a0)
/* 00491F0C AC990010 */  sw    $t9, 0x10($a0)
/* 00491F10 016C6825 */  or    $t5, $t3, $t4
/* 00491F14 00037602 */  srl   $t6, $v1, 0x18
/* 00491F18 00057A00 */  sll   $t7, $a1, 8
/* 00491F1C 01AEC025 */  or    $t8, $t5, $t6
/* 00491F20 01E74824 */  and   $t1, $t7, $a3
/* 00491F24 0005CE00 */  sll   $t9, $a1, 0x18
/* 00491F28 03295025 */  or    $t2, $t9, $t1
/* 00491F2C 00054202 */  srl   $t0, $a1, 8
/* 00491F30 8C820020 */  lw    $v0, 0x20($a0)
/* 00491F34 AC980014 */  sw    $t8, 0x14($a0)
/* 00491F38 310BFF00 */  andi  $t3, $t0, 0xff00
/* 00491F3C 00067A00 */  sll   $t7, $a2, 8
/* 00491F40 014B6025 */  or    $t4, $t2, $t3
/* 00491F44 01E7C824 */  and   $t9, $t7, $a3
/* 00491F48 00056E02 */  srl   $t5, $a1, 0x18
/* 00491F4C 0006C600 */  sll   $t8, $a2, 0x18
/* 00491F50 018D7025 */  or    $t6, $t4, $t5
/* 00491F54 03194825 */  or    $t1, $t8, $t9
/* 00491F58 00064202 */  srl   $t0, $a2, 8
/* 00491F5C 310AFF00 */  andi  $t2, $t0, 0xff00
/* 00491F60 8C830024 */  lw    $v1, 0x24($a0)
/* 00491F64 AC8E0018 */  sw    $t6, 0x18($a0)
/* 00491F68 012A5825 */  or    $t3, $t1, $t2
/* 00491F6C 00027A00 */  sll   $t7, $v0, 8
/* 00491F70 01E7C024 */  and   $t8, $t7, $a3
/* 00491F74 00066602 */  srl   $t4, $a2, 0x18
/* 00491F78 00027600 */  sll   $t6, $v0, 0x18
/* 00491F7C 00024202 */  srl   $t0, $v0, 8
/* 00491F80 016C6825 */  or    $t5, $t3, $t4
/* 00491F84 3109FF00 */  andi  $t1, $t0, 0xff00
/* 00491F88 01D8C825 */  or    $t9, $t6, $t8
/* 00491F8C 03295025 */  or    $t2, $t9, $t1
/* 00491F90 AC8D001C */  sw    $t5, 0x1c($a0)
/* 00491F94 00037A00 */  sll   $t7, $v1, 8
/* 00491F98 01E77024 */  and   $t6, $t7, $a3
/* 00491F9C 00025E02 */  srl   $t3, $v0, 0x18
/* 00491FA0 00036E00 */  sll   $t5, $v1, 0x18
/* 00491FA4 00034202 */  srl   $t0, $v1, 8
/* 00491FA8 014B6025 */  or    $t4, $t2, $t3
/* 00491FAC 3119FF00 */  andi  $t9, $t0, 0xff00
/* 00491FB0 01AEC025 */  or    $t8, $t5, $t6
/* 00491FB4 03194825 */  or    $t1, $t8, $t9
/* 00491FB8 00035602 */  srl   $t2, $v1, 0x18
/* 00491FBC 012A5825 */  or    $t3, $t1, $t2
/* 00491FC0 AC8C0020 */  sw    $t4, 0x20($a0)
/* 00491FC4 03E00008 */  jr    $ra
/* 00491FC8 AC8B0024 */   sw    $t3, 0x24($a0)
    .type swap_shdr, @function
    .size swap_shdr, .-swap_shdr
    .end swap_shdr
)"");
#endif
