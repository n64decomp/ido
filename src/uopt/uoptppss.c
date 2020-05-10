#include "uoptdata.h"
#include "uoptppss.h"

__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
RO_1000D210:
    # 00459698 make_subloc_veqv
    .asciz "uoptppss.p"

    .balign 4
jtbl_1000D21C:
    # 00459698 make_subloc_veqv
    .gpword .L0045974C
    .gpword .L004597CC
    .gpword .L00459808

RO_1000D228:
    # 00459828 insertvar
    .asciz "uoptppss.p"

    .balign 4
jtbl_1000D234:
    # 00459828 insertvar
    .gpword .L0045997C
    .gpword .L00459914
    .gpword .L00459948

RO_1000D240:
    # 00459FB0 insertlda
    .asciz "uoptppss.p"

    .balign 4
jtbl_1000D24C:
    # 00459FB0 insertlda
    .gpword .L0045A0F8
    .gpword .L0045A0F8
    .gpword .L0045A0BC

RO_1000D258:
    # 0045A480 oneinstruction
    .ascii "uopt: Warning: optimization level lowered from O3 to O2 due to presence of calls in inline assembler text"

RO_1000D2C1:
    # 0045A480 oneinstruction
    .asciz "uoptppss.p"

    .balign 4
jtbl_1000D2CC:
    # 0045A480 oneinstruction
    .gpword .L0045A608
    .gpword .L0045A618
    .gpword .L0045A62C
    .gpword .L0045A640
    .gpword .L0045A654
    .gpword .L0045A668
    .gpword .L0045A67C

    .balign 4
jtbl_1000D2E8:
    # 0045A480 oneinstruction
    .gpword .L0045B21C
    .gpword .L0045B264
    .gpword .L0045B250
    .gpword .L0045B264
    .gpword .L0045A4EC

    .balign 4
jtbl_1000D2FC:
    # 0045A480 oneinstruction
    .gpword .L0045AD9C
    .gpword .L0045AFC8
    .gpword .L0045B264
    .gpword .L0045B264
    .gpword .L0045A6C4
    .gpword .L0045B264
    .gpword .L0045B264
    .gpword .L0045AC8C

    .balign 4
jtbl_1000D31C:
    # 0045A480 oneinstruction
    .gpword .L0045A7EC
    .gpword .L0045B264
    .gpword .L0045B200
    .gpword .L0045A7B8
    .gpword .L0045B264
    .gpword .L0045B264
    .gpword .L0045A7EC
    .gpword .L0045B264
    .gpword .L0045AD58

    .balign 4
jtbl_1000D340:
    # 0045A480 oneinstruction
    .gpword .L0045AF58
    .gpword .L0045B264
    .gpword .L0045B264
    .gpword .L0045B264
    .gpword .L0045A994
    .gpword .L0045A994
    .gpword .L0045B264
    .gpword .L0045B264
    .gpword .L0045B264
    .gpword .L0045AFC8
    .gpword .L0045B264
    .gpword .L0045B264
    .gpword .L0045B264
    .gpword .L0045B264
    .gpword .L0045AB94
    .gpword .L0045AB00
    .gpword .L0045AEC0
    .gpword .L0045AFC8
    .gpword .L0045AB00

    .balign 4
jtbl_1000D38C:
    # 0045A480 oneinstruction
    .gpword .L0045A994
    .gpword .L0045A798

    .balign 4
jtbl_1000D394:
    # 0045A480 oneinstruction
    .gpword .L0045A514
    .gpword .L0045B264
    .gpword .L0045A8E8

    .balign 4
jtbl_1000D3A0:
    # 0045A480 oneinstruction
    .gpword .L0045A994
    .gpword .L0045B264
    .gpword .L0045B264
    .gpword .L0045B264
    .gpword .L0045B200
    .gpword .L0045B238
    .gpword .L0045B238
    .gpword .L0045B238
    .gpword .L0045B238
    .gpword .L0045B238
    .gpword .L0045B238

    .balign 4
jtbl_1000D3CC:
    # 0045A480 oneinstruction
    .gpword .L0045A8F0
    .gpword .L0045B200

    .balign 4
jtbl_1000D3D4:
    # 0045A480 oneinstruction
    .gpword .L0045AD58
    .gpword .L0045A798

RO_1000D3DC:
    # 0045B508 oneprocprepass
    .ascii "uopt: Error: unexpected EOF in input ucode; giving up...."

RO_1000D415:
    # 0045B508 oneprocprepass
    .ascii "uopt: Error: unexpected EOF in input ucode; giving up..."

RO_1000D44D:
    # 0045B508 oneprocprepass
    .ascii "uopt: Error: unexpected EOF in input ucode; giving up.."

RO_1000D484:
    # 0045C150 prepass
    .ascii "uopt: Error: unexpected EOF in input ucode; giving up....."

RO_1000D4BE:
    # 0045C540 varintree
    .ascii "uoptppss.p"

    .balign 4
jtbl_1000D4C8:
    # 0045C540 varintree
    .gpword .L0045C5C8
    .gpword .L0045C5D0
    .gpword .L0045C5D8

.data
# 10010D00
glabel lda_heap
    # 00459FB0 insertlda
    # 0045C150 prepass
    .byte 0x00,0x00,0x00,0x00
    .type lda_heap, @object
    .size lda_heap, .-lda_heap # 4

# 10010D04
glabel var_heap
    # 00459828 insertvar
    .byte 0x00,0x00,0x00,0x00
    .type var_heap, @object
    .size var_heap, .-var_heap # 4

D_10010D08:
    # 00459400 updatelab
    .byte 0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01

D_10010D14:
    # 0045A480 oneinstruction
    .byte 0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x80,0x00,0x00

D_10010D24:
    # 0045A480 oneinstruction
    .byte 0x00,0x00,0x00,0x04,0x00,0x00,0x20,0x00

D_10010D2C:
    # 0045C150 prepass
    .ascii " \x00\x00\x00\x00\x00\x00\x00\x00\x00\x00 \x00\x00\x00\x00\x00\x00\x00\x00"



.bss
    .balign 4
# 1001C614
glabel prochead
    # 004590C8 searchproc
    # 00459300 getproc
    # 0045A480 oneinstruction
    # 0045BE98 processcallgraph
    # 0045C150 prepass
    .space 4
    .size prochead, 4
    .type prochead, @object

    .balign 4
# 1001C618
glabel lab_just_defined
    # 0045A480 oneinstruction
    # 0045B508 oneprocprepass
    .space 4
    .size lab_just_defined, 4
    .type lab_just_defined, @object

    .balign 4
# 1001C61C
glabel in_exception_block
    # 0045A480 oneinstruction
    # 0045B508 oneprocprepass
    .space 4
    .size in_exception_block, 4
    .type in_exception_block, @object

    .balign 4
# 1001C620
glabel in_exception_frame
    # 0045A480 oneinstruction
    .space 4
    .size in_exception_frame, 4
    .type in_exception_frame, @object

    .balign 16
# 1001D1F0
glabel fsymtab
    # 00459C9C enterfsymtab
    # 00459DC8 del_fsymtab
    # 0045C150 prepass
    # 0045C6F4 in_fsym
    .space 644
    .size fsymtab, 644
    .type fsymtab, @object

    .balign 16
# 1001D478
glabel gp_rel_tab
    # 00459E84 enter_gp_rel_tab
    # 0045C150 prepass
    # 0045C77C is_gp_relative
    .space 644
    .size gp_rel_tab, 644
    .type gp_rel_tab, @object


.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text

glabel compareloc
    .ent compareloc
    # 00459698 make_subloc_veqv
    # 00459828 insertvar
    # 00459FB0 insertlda
    # 0045BF44 checkforvreg
/* 00458ED0 3C1C0FBC */  .cpload $t9
/* 00458ED4 279C13C0 */  
/* 00458ED8 0399E021 */  
/* 00458EDC 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 00458EE0 AFA5002C */  sw    $a1, 0x2c($sp)
/* 00458EE4 AFA70034 */  sw    $a3, 0x34($sp)
/* 00458EE8 93B80036 */  lbu   $t8, 0x36($sp)
/* 00458EEC 93AE002E */  lbu   $t6, 0x2e($sp)
/* 00458EF0 AFBF0024 */  sw    $ra, 0x24($sp)
/* 00458EF4 33190007 */  andi  $t9, $t8, 7
/* 00458EF8 31CF0007 */  andi  $t7, $t6, 7
/* 00458EFC 01F9082B */  sltu  $at, $t7, $t9
/* 00458F00 AFBC0020 */  sw    $gp, 0x20($sp)
/* 00458F04 AFA40028 */  sw    $a0, 0x28($sp)
/* 00458F08 10200003 */  beqz  $at, .L00458F18
/* 00458F0C AFA60030 */   sw    $a2, 0x30($sp)
/* 00458F10 10000036 */  b     .L00458FEC
/* 00458F14 24030001 */   li    $v1, 1
.L00458F18:
/* 00458F18 93A80036 */  lbu   $t0, 0x36($sp)
/* 00458F1C 93AA002E */  lbu   $t2, 0x2e($sp)
/* 00458F20 8FAC002C */  lw    $t4, 0x2c($sp)
/* 00458F24 31090007 */  andi  $t1, $t0, 7
/* 00458F28 314B0007 */  andi  $t3, $t2, 7
/* 00458F2C 012B082B */  sltu  $at, $t1, $t3
/* 00458F30 10200003 */  beqz  $at, .L00458F40
/* 00458F34 8FAE0034 */   lw    $t6, 0x34($sp)
/* 00458F38 1000002C */  b     .L00458FEC
/* 00458F3C 24030002 */   li    $v1, 2
.L00458F40:
/* 00458F40 000C6AC2 */  srl   $t5, $t4, 0xb
/* 00458F44 000EC2C2 */  srl   $t8, $t6, 0xb
/* 00458F48 01B8082B */  sltu  $at, $t5, $t8
/* 00458F4C 10200003 */  beqz  $at, .L00458F5C
/* 00458F50 8FAF0034 */   lw    $t7, 0x34($sp)
/* 00458F54 10000025 */  b     .L00458FEC
/* 00458F58 24030001 */   li    $v1, 1
.L00458F5C:
/* 00458F5C 8FA8002C */  lw    $t0, 0x2c($sp)
/* 00458F60 000FCAC2 */  srl   $t9, $t7, 0xb
/* 00458F64 27A90028 */  addiu $t1, $sp, 0x28
/* 00458F68 000852C2 */  srl   $t2, $t0, 0xb
/* 00458F6C 032A082B */  sltu  $at, $t9, $t2
/* 00458F70 50200004 */  beql  $at, $zero, .L00458F84
/* 00458F74 8D240000 */   lw    $a0, ($t1)
/* 00458F78 1000001C */  b     .L00458FEC
/* 00458F7C 24030002 */   li    $v1, 2
/* 00458F80 8D240000 */  lw    $a0, ($t1)
.L00458F84:
/* 00458F84 27AE0030 */  addiu $t6, $sp, 0x30
/* 00458F88 8F998380 */  lw    $t9, %call16(overlapping)($gp)
/* 00458F8C AFA40000 */  sw    $a0, ($sp)
/* 00458F90 8D250004 */  lw    $a1, 4($t1)
/* 00458F94 8FAF0038 */  lw    $t7, 0x38($sp)
/* 00458F98 8FA8003C */  lw    $t0, 0x3c($sp)
/* 00458F9C AFA50004 */  sw    $a1, 4($sp)
/* 00458FA0 8DC60000 */  lw    $a2, ($t6)
/* 00458FA4 AFA60008 */  sw    $a2, 8($sp)
/* 00458FA8 8DC70004 */  lw    $a3, 4($t6)
/* 00458FAC AFAF0010 */  sw    $t7, 0x10($sp)
/* 00458FB0 AFA80014 */  sw    $t0, 0x14($sp)
/* 00458FB4 0320F809 */  jalr  $t9
/* 00458FB8 AFA7000C */   sw    $a3, 0xc($sp)
/* 00458FBC 10400003 */  beqz  $v0, .L00458FCC
/* 00458FC0 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00458FC4 10000009 */  b     .L00458FEC
/* 00458FC8 00001825 */   move  $v1, $zero
.L00458FCC:
/* 00458FCC 8FB90028 */  lw    $t9, 0x28($sp)
/* 00458FD0 8FAA0030 */  lw    $t2, 0x30($sp)
/* 00458FD4 24030002 */  li    $v1, 2
/* 00458FD8 032A082A */  slt   $at, $t9, $t2
/* 00458FDC 10200003 */  beqz  $at, .L00458FEC
/* 00458FE0 00000000 */   nop   
/* 00458FE4 10000001 */  b     .L00458FEC
/* 00458FE8 24030001 */   li    $v1, 1
.L00458FEC:
/* 00458FEC 8FBF0024 */  lw    $ra, 0x24($sp)
/* 00458FF0 27BD0028 */  addiu $sp, $sp, 0x28
/* 00458FF4 00601025 */  move  $v0, $v1
/* 00458FF8 03E00008 */  jr    $ra
/* 00458FFC 00000000 */   nop   
    .type compareloc, @function
    .size compareloc, .-compareloc
    .end compareloc

glabel compareaddr
    .ent compareaddr
    # 0045C540 varintree
    # 004736E0 func_004736E0
/* 00459000 AFA50004 */  sw    $a1, 4($sp)
/* 00459004 AFA7000C */  sw    $a3, 0xc($sp)
/* 00459008 93B8000E */  lbu   $t8, 0xe($sp)
/* 0045900C 93AE0006 */  lbu   $t6, 6($sp)
/* 00459010 AFA40000 */  sw    $a0, ($sp)
/* 00459014 33190007 */  andi  $t9, $t8, 7
/* 00459018 31CF0007 */  andi  $t7, $t6, 7
/* 0045901C 01F9082B */  sltu  $at, $t7, $t9
/* 00459020 10200003 */  beqz  $at, .L00459030
/* 00459024 AFA60008 */   sw    $a2, 8($sp)
/* 00459028 03E00008 */  jr    $ra
/* 0045902C 24020001 */   li    $v0, 1

.L00459030:
/* 00459030 93A8000E */  lbu   $t0, 0xe($sp)
/* 00459034 93AA0006 */  lbu   $t2, 6($sp)
/* 00459038 8FAC0004 */  lw    $t4, 4($sp)
/* 0045903C 31090007 */  andi  $t1, $t0, 7
/* 00459040 314B0007 */  andi  $t3, $t2, 7
/* 00459044 012B082B */  sltu  $at, $t1, $t3
/* 00459048 10200003 */  beqz  $at, .L00459058
/* 0045904C 8FAE000C */   lw    $t6, 0xc($sp)
/* 00459050 03E00008 */  jr    $ra
/* 00459054 24020002 */   li    $v0, 2

.L00459058:
/* 00459058 000C6AC2 */  srl   $t5, $t4, 0xb
/* 0045905C 000EC2C2 */  srl   $t8, $t6, 0xb
/* 00459060 01B8082B */  sltu  $at, $t5, $t8
/* 00459064 10200003 */  beqz  $at, .L00459074
/* 00459068 8FAF000C */   lw    $t7, 0xc($sp)
/* 0045906C 03E00008 */  jr    $ra
/* 00459070 24020001 */   li    $v0, 1

.L00459074:
/* 00459074 8FA80004 */  lw    $t0, 4($sp)
/* 00459078 000FCAC2 */  srl   $t9, $t7, 0xb
/* 0045907C 8FA20000 */  lw    $v0, ($sp)
/* 00459080 000852C2 */  srl   $t2, $t0, 0xb
/* 00459084 032A082B */  sltu  $at, $t9, $t2
/* 00459088 10200003 */  beqz  $at, .L00459098
/* 0045908C 8FA30008 */   lw    $v1, 8($sp)
/* 00459090 03E00008 */  jr    $ra
/* 00459094 24020002 */   li    $v0, 2

.L00459098:
/* 00459098 0043082A */  slt   $at, $v0, $v1
/* 0045909C 50200004 */  beql  $at, $zero, .L004590B0
/* 004590A0 0062082A */   slt   $at, $v1, $v0
/* 004590A4 03E00008 */  jr    $ra
/* 004590A8 24020001 */   li    $v0, 1

/* 004590AC 0062082A */  slt   $at, $v1, $v0
.L004590B0:
/* 004590B0 10200003 */  beqz  $at, .L004590C0
/* 004590B4 00001825 */   move  $v1, $zero
/* 004590B8 03E00008 */  jr    $ra
/* 004590BC 24020002 */   li    $v0, 2

.L004590C0:
/* 004590C0 03E00008 */  jr    $ra
/* 004590C4 00601025 */   move  $v0, $v1
    .type compareaddr, @function
    .size compareaddr, .-compareaddr
    .end compareaddr

glabel searchproc
    .ent searchproc
    # 0045A480 oneinstruction
    # 0045B508 oneprocprepass
/* 004590C8 3C1C0FBC */  .cpload $t9
/* 004590CC 279C11C8 */  
/* 004590D0 0399E021 */  
/* 004590D4 8F888C4C */  lw     $t0, %got(prochead)($gp)
/* 004590D8 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 004590DC AFB00014 */  sw    $s0, 0x14($sp)
/* 004590E0 8D030000 */  lw    $v1, ($t0)
/* 004590E4 00808025 */  move  $s0, $a0
/* 004590E8 AFBF001C */  sw    $ra, 0x1c($sp)
/* 004590EC 2C620001 */  sltiu $v0, $v1, 1
/* 004590F0 304E00FF */  andi  $t6, $v0, 0xff
/* 004590F4 AFBC0018 */  sw    $gp, 0x18($sp)
/* 004590F8 AFA50034 */  sw    $a1, 0x34($sp)
/* 004590FC 00003825 */  move  $a3, $zero
/* 00459100 15C00019 */  bnez  $t6, .L00459168
/* 00459104 304600FF */   andi  $a2, $v0, 0xff
/* 00459108 8C620000 */  lw    $v0, ($v1)
.L0045910C:
/* 0045910C 16020003 */  bne   $s0, $v0, .L0045911C
/* 00459110 0202082A */   slt   $at, $s0, $v0
/* 00459114 10000010 */  b     .L00459158
/* 00459118 24070001 */   li    $a3, 1
.L0045911C:
/* 0045911C 50200009 */  beql  $at, $zero, .L00459144
/* 00459120 8C620030 */   lw    $v0, 0x30($v1)
/* 00459124 8C62002C */  lw    $v0, 0x2c($v1)
/* 00459128 14400003 */  bnez  $v0, .L00459138
/* 0045912C 00000000 */   nop   
/* 00459130 10000009 */  b     .L00459158
/* 00459134 24060001 */   li    $a2, 1
.L00459138:
/* 00459138 10000007 */  b     .L00459158
/* 0045913C 00401825 */   move  $v1, $v0
/* 00459140 8C620030 */  lw    $v0, 0x30($v1)
.L00459144:
/* 00459144 54400004 */  bnezl $v0, .L00459158
/* 00459148 00401825 */   move  $v1, $v0
/* 0045914C 10000002 */  b     .L00459158
/* 00459150 24060001 */   li    $a2, 1
/* 00459154 00401825 */  move  $v1, $v0
.L00459158:
/* 00459158 14E00003 */  bnez  $a3, .L00459168
/* 0045915C 00000000 */   nop   
/* 00459160 50C0FFEA */  beql  $a2, $zero, .L0045910C
/* 00459164 8C620000 */   lw    $v0, ($v1)
.L00459168:
/* 00459168 14E00040 */  bnez  $a3, .L0045926C
/* 0045916C 8FA90034 */   lw    $t1, 0x34($sp)
/* 00459170 5460000C */  bnezl $v1, .L004591A4
/* 00459174 8C6F0000 */   lw    $t7, ($v1)
/* 00459178 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 0045917C 2404003C */  li    $a0, 60
/* 00459180 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 00459184 0320F809 */  jalr  $t9
/* 00459188 00000000 */   nop   
/* 0045918C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00459190 00401825 */  move  $v1, $v0
/* 00459194 8F888C4C */  lw     $t0, %got(prochead)($gp)
/* 00459198 10000018 */  b     .L004591FC
/* 0045919C AD020000 */   sw    $v0, ($t0)
/* 004591A0 8C6F0000 */  lw    $t7, ($v1)
.L004591A4:
/* 004591A4 020F082A */  slt   $at, $s0, $t7
/* 004591A8 1020000B */  beqz  $at, .L004591D8
/* 004591AC 00000000 */   nop   
/* 004591B0 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 004591B4 2404003C */  li    $a0, 60
/* 004591B8 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 004591BC 0320F809 */  jalr  $t9
/* 004591C0 AFA30024 */   sw    $v1, 0x24($sp)
/* 004591C4 8FA30024 */  lw    $v1, 0x24($sp)
/* 004591C8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004591CC AC62002C */  sw    $v0, 0x2c($v1)
/* 004591D0 1000000A */  b     .L004591FC
/* 004591D4 00401825 */   move  $v1, $v0
.L004591D8:
/* 004591D8 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 004591DC 2404003C */  li    $a0, 60
/* 004591E0 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 004591E4 0320F809 */  jalr  $t9
/* 004591E8 AFA30024 */   sw    $v1, 0x24($sp)
/* 004591EC 8FA30024 */  lw    $v1, 0x24($sp)
/* 004591F0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004591F4 AC620030 */  sw    $v0, 0x30($v1)
/* 004591F8 00401825 */  move  $v1, $v0
.L004591FC:
/* 004591FC 8F828A5C */  lw     $v0, %got(lang)($gp)
/* 00459200 AC60002C */  sw    $zero, 0x2c($v1)
/* 00459204 AC600030 */  sw    $zero, 0x30($v1)
/* 00459208 AC700000 */  sw    $s0, ($v1)
/* 0045920C AC600004 */  sw    $zero, 4($v1)
/* 00459210 AC600028 */  sw    $zero, 0x28($v1)
/* 00459214 AC600018 */  sw    $zero, 0x18($v1)
/* 00459218 A0600008 */  sb    $zero, 8($v1)
/* 0045921C 90420000 */  lbu   $v0, ($v0)
/* 00459220 8F988B00 */  lw     $t8, %got(o3opt)($gp)
/* 00459224 8FB90034 */  lw    $t9, 0x34($sp)
/* 00459228 38420005 */  xori  $v0, $v0, 5
/* 0045922C 2C420001 */  sltiu $v0, $v0, 1
/* 00459230 A062000B */  sb    $v0, 0xb($v1)
/* 00459234 93180000 */  lbu   $t8, ($t8)
/* 00459238 A062000D */  sb    $v0, 0xd($v1)
/* 0045923C A060000E */  sb    $zero, 0xe($v1)
/* 00459240 A060000F */  sb    $zero, 0xf($v1)
/* 00459244 A0600014 */  sb    $zero, 0x14($v1)
/* 00459248 A0600015 */  sb    $zero, 0x15($v1)
/* 0045924C A4600012 */  sh    $zero, 0x12($v1)
/* 00459250 AC60001C */  sw    $zero, 0x1c($v1)
/* 00459254 AC600020 */  sw    $zero, 0x20($v1)
/* 00459258 AC600034 */  sw    $zero, 0x34($v1)
/* 0045925C AC600038 */  sw    $zero, 0x38($v1)
/* 00459260 A0790010 */  sb    $t9, 0x10($v1)
/* 00459264 10000009 */  b     .L0045928C
/* 00459268 A078000C */   sb    $t8, 0xc($v1)
.L0045926C:
/* 0045926C 24010002 */  li    $at, 2
/* 00459270 51210007 */  beql  $t1, $at, .L00459290
/* 00459274 8FBF001C */   lw    $ra, 0x1c($sp)
/* 00459278 906A0010 */  lbu   $t2, 0x10($v1)
/* 0045927C 24010002 */  li    $at, 2
/* 00459280 55410003 */  bnel  $t2, $at, .L00459290
/* 00459284 8FBF001C */   lw    $ra, 0x1c($sp)
/* 00459288 A0690010 */  sb    $t1, 0x10($v1)
.L0045928C:
/* 0045928C 8FBF001C */  lw    $ra, 0x1c($sp)
.L00459290:
/* 00459290 8FB00014 */  lw    $s0, 0x14($sp)
/* 00459294 27BD0030 */  addiu $sp, $sp, 0x30
/* 00459298 03E00008 */  jr    $ra
/* 0045929C 00601025 */   move  $v0, $v1
    .type searchproc, @function
    .size searchproc, .-searchproc
    .end searchproc

glabel change_to_o2
    .ent change_to_o2
    # 004592A0 change_to_o2
    # 0045A480 oneinstruction
/* 004592A0 3C1C0FBC */  .cpload $t9
/* 004592A4 279C0FF0 */  
/* 004592A8 0399E021 */  
/* 004592AC 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 004592B0 AFB00014 */  sw    $s0, 0x14($sp)
/* 004592B4 00808025 */  move  $s0, $a0
/* 004592B8 AFBF001C */  sw    $ra, 0x1c($sp)
/* 004592BC AFBC0018 */  sw    $gp, 0x18($sp)
/* 004592C0 5200000B */  beql  $s0, $zero, .L004592F0
/* 004592C4 8FBF001C */   lw    $ra, 0x1c($sp)
.L004592C8:
/* 004592C8 8F998438 */  lw    $t9, %call16(change_to_o2)($gp)
/* 004592CC A200000C */  sb    $zero, 0xc($s0)
/* 004592D0 8E04002C */  lw    $a0, 0x2c($s0)
/* 004592D4 0320F809 */  jalr  $t9
/* 004592D8 00000000 */   nop   
/* 004592DC 8E100030 */  lw    $s0, 0x30($s0)
/* 004592E0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004592E4 1600FFF8 */  bnez  $s0, .L004592C8
/* 004592E8 00000000 */   nop   
/* 004592EC 8FBF001C */  lw    $ra, 0x1c($sp)
.L004592F0:
/* 004592F0 8FB00014 */  lw    $s0, 0x14($sp)
/* 004592F4 27BD0020 */  addiu $sp, $sp, 0x20
/* 004592F8 03E00008 */  jr    $ra
/* 004592FC 00000000 */   nop   
    .type change_to_o2, @function
    .size change_to_o2, .-change_to_o2
    .end change_to_o2

glabel getproc
    .ent getproc
    # 004173EC func_004173EC
    # 0042EB10 incorp_feedback
    # 0043CFCC readnxtinst
    # 0044CD14 listplkilled
    # 0044D4B4 listpskilled
    # 00456A2C oneproc
/* 00459300 3C1C0FBC */  .cpload $t9
/* 00459304 279C0F90 */  
/* 00459308 0399E021 */  
/* 0045930C 8F838C4C */  lw     $v1, %got(prochead)($gp)
/* 00459310 00001025 */  move  $v0, $zero
/* 00459314 8C630000 */  lw    $v1, ($v1)
/* 00459318 1060000F */  beqz  $v1, .L00459358
/* 0045931C 00000000 */   nop   
/* 00459320 8C650000 */  lw    $a1, ($v1)
.L00459324:
/* 00459324 14850003 */  bne   $a0, $a1, .L00459334
/* 00459328 0085082A */   slt   $at, $a0, $a1
/* 0045932C 10000006 */  b     .L00459348
/* 00459330 24020001 */   li    $v0, 1
.L00459334:
/* 00459334 50200004 */  beql  $at, $zero, .L00459348
/* 00459338 8C630030 */   lw    $v1, 0x30($v1)
/* 0045933C 10000002 */  b     .L00459348
/* 00459340 8C63002C */   lw    $v1, 0x2c($v1)
/* 00459344 8C630030 */  lw    $v1, 0x30($v1)
.L00459348:
/* 00459348 14400003 */  bnez  $v0, .L00459358
/* 0045934C 00000000 */   nop   
/* 00459350 5460FFF4 */  bnezl $v1, .L00459324
/* 00459354 8C650000 */   lw    $a1, ($v1)
.L00459358:
/* 00459358 03E00008 */  jr    $ra
/* 0045935C 00601025 */   move  $v0, $v1
    .type getproc, @function
    .size getproc, .-getproc
    .end getproc

glabel insertijplab
    .ent insertijplab
    # 0045A480 oneinstruction
/* 00459360 3C1C0FBC */  .cpload $t9
/* 00459364 279C0F30 */  
/* 00459368 0399E021 */  
/* 0045936C 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00459370 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00459374 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00459378 00803025 */  move  $a2, $a0
/* 0045937C 00A03825 */  move  $a3, $a1
.L00459380:
/* 00459380 8CE20000 */  lw    $v0, ($a3)
/* 00459384 54400010 */  bnezl $v0, .L004593C8
/* 00459388 8C430000 */   lw    $v1, ($v0)
/* 0045938C 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 00459390 2404000C */  li    $a0, 12
/* 00459394 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 00459398 AFA60020 */  sw    $a2, 0x20($sp)
/* 0045939C 0320F809 */  jalr  $t9
/* 004593A0 AFA70024 */   sw    $a3, 0x24($sp)
/* 004593A4 8FA70024 */  lw    $a3, 0x24($sp)
/* 004593A8 8FA60020 */  lw    $a2, 0x20($sp)
/* 004593AC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004593B0 ACE20000 */  sw    $v0, ($a3)
/* 004593B4 AC400004 */  sw    $zero, 4($v0)
/* 004593B8 AC400008 */  sw    $zero, 8($v0)
/* 004593BC 1000000C */  b     .L004593F0
/* 004593C0 AC460000 */   sw    $a2, ($v0)
/* 004593C4 8C430000 */  lw    $v1, ($v0)
.L004593C8:
/* 004593C8 00C3082A */  slt   $at, $a2, $v1
/* 004593CC 50200004 */  beql  $at, $zero, .L004593E0
/* 004593D0 0066082A */   slt   $at, $v1, $a2
/* 004593D4 1000FFEA */  b     .L00459380
/* 004593D8 24470004 */   addiu $a3, $v0, 4
/* 004593DC 0066082A */  slt   $at, $v1, $a2
.L004593E0:
/* 004593E0 50200004 */  beql  $at, $zero, .L004593F4
/* 004593E4 8FBF001C */   lw    $ra, 0x1c($sp)
/* 004593E8 1000FFE5 */  b     .L00459380
/* 004593EC 24470008 */   addiu $a3, $v0, 8
.L004593F0:
/* 004593F0 8FBF001C */  lw    $ra, 0x1c($sp)
.L004593F4:
/* 004593F4 27BD0020 */  addiu $sp, $sp, 0x20
/* 004593F8 03E00008 */  jr    $ra
/* 004593FC 00000000 */   nop   
    .type insertijplab, @function
    .size insertijplab, .-insertijplab
    .end insertijplab

glabel updatelab
    .ent updatelab
    # 0045A480 oneinstruction
/* 00459400 3C1C0FBC */  .cpload $t9
/* 00459404 279C0E90 */  
/* 00459408 0399E021 */  
/* 0045940C 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00459410 AFB00014 */  sw    $s0, 0x14($sp)
/* 00459414 00A08025 */  move  $s0, $a1
/* 00459418 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0045941C AFBC0018 */  sw    $gp, 0x18($sp)
/* 00459420 AFA60028 */  sw    $a2, 0x28($sp)
/* 00459424 00803825 */  move  $a3, $a0
.L00459428:
/* 00459428 8E030000 */  lw    $v1, ($s0)
/* 0045942C 54600014 */  bnezl $v1, .L00459480
/* 00459430 8C620000 */   lw    $v0, ($v1)
/* 00459434 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 00459438 24040014 */  li    $a0, 20
/* 0045943C 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 00459440 A3A6002B */  sb    $a2, 0x2b($sp)
/* 00459444 0320F809 */  jalr  $t9
/* 00459448 AFA70020 */   sw    $a3, 0x20($sp)
/* 0045944C 93A6002B */  lbu   $a2, 0x2b($sp)
/* 00459450 8FA70020 */  lw    $a3, 0x20($sp)
/* 00459454 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00459458 AE020000 */  sw    $v0, ($s0)
/* 0045945C A0400009 */  sb    $zero, 9($v0)
/* 00459460 AC40000C */  sw    $zero, 0xc($v0)
/* 00459464 AC400010 */  sw    $zero, 0x10($v0)
/* 00459468 AC400004 */  sw    $zero, 4($v0)
/* 0045946C A0460008 */  sb    $a2, 8($v0)
/* 00459470 AC470000 */  sw    $a3, ($v0)
/* 00459474 10000029 */  b     .L0045951C
/* 00459478 8E040000 */   lw    $a0, ($s0)
/* 0045947C 8C620000 */  lw    $v0, ($v1)
.L00459480:
/* 00459480 00E2082B */  sltu  $at, $a3, $v0
/* 00459484 50200005 */  beql  $at, $zero, .L0045949C
/* 00459488 0047082B */   sltu  $at, $v0, $a3
/* 0045948C 2470000C */  addiu $s0, $v1, 0xc
/* 00459490 1000FFE5 */  b     .L00459428
/* 00459494 30C600FF */   andi  $a2, $a2, 0xff
/* 00459498 0047082B */  sltu  $at, $v0, $a3
.L0045949C:
/* 0045949C 10200004 */  beqz  $at, .L004594B0
/* 004594A0 00000000 */   nop   
/* 004594A4 24700010 */  addiu $s0, $v1, 0x10
/* 004594A8 1000FFDF */  b     .L00459428
/* 004594AC 30C600FF */   andi  $a2, $a2, 0xff
.L004594B0:
/* 004594B0 50C0001A */  beql  $a2, $zero, .L0045951C
/* 004594B4 00602025 */   move  $a0, $v1
/* 004594B8 906E0008 */  lbu   $t6, 8($v1)
/* 004594BC 55C00014 */  bnezl $t6, .L00459510
/* 004594C0 24080001 */   li    $t0, 1
/* 004594C4 8F8F8DA4 */  lw     $t7, %got(u)($gp)
/* 004594C8 91EF0000 */  lbu   $t7, ($t7)
/* 004594CC 25F8FFE0 */  addiu $t8, $t7, -0x20
/* 004594D0 2F190060 */  sltiu $t9, $t8, 0x60
/* 004594D4 13200009 */  beqz  $t9, .L004594FC
/* 004594D8 240F0001 */   li    $t7, 1
/* 004594DC 8F8A8044 */  lw    $t2, %got(D_10010D08)($gp)
/* 004594E0 00184143 */  sra   $t0, $t8, 5
/* 004594E4 00084880 */  sll   $t1, $t0, 2
/* 004594E8 254A0D08 */  addiu $t2, %lo(D_10010D08) # addiu $t2, $t2, 0xd08
/* 004594EC 01495821 */  addu  $t3, $t2, $t1
/* 004594F0 8D6C0000 */  lw    $t4, ($t3)
/* 004594F4 030C6804 */  sllv  $t5, $t4, $t8
/* 004594F8 29B90000 */  slti  $t9, $t5, 0
.L004594FC:
/* 004594FC 53200004 */  beql  $t9, $zero, .L00459510
/* 00459500 24080001 */   li    $t0, 1
/* 00459504 A06F0009 */  sb    $t7, 9($v1)
/* 00459508 8E030000 */  lw    $v1, ($s0)
/* 0045950C 24080001 */  li    $t0, 1
.L00459510:
/* 00459510 A0680008 */  sb    $t0, 8($v1)
/* 00459514 8E030000 */  lw    $v1, ($s0)
/* 00459518 00602025 */  move  $a0, $v1
.L0045951C:
/* 0045951C 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00459520 8FB00014 */  lw    $s0, 0x14($sp)
/* 00459524 27BD0020 */  addiu $sp, $sp, 0x20
/* 00459528 03E00008 */  jr    $ra
/* 0045952C 00801025 */   move  $v0, $a0
    .type updatelab, @function
    .size updatelab, .-updatelab
    .end updatelab

)"");

/*
00439C40 getop
*/
struct Label *searchlab(int arg0, struct Label *list) {
    while (arg0 != list->unk0) {
        list = arg0 < list->unk0 ? list->prev : list->next;
    }
    return list;
}

__asm__(R""(
.set noat
.set noreorder

glabel update_veqv_in_table
    .ent update_veqv_in_table
    # 00459698 make_subloc_veqv
    # 00459828 insertvar
/* 00459564 3C1C0FBC */  .cpload $t9
/* 00459568 279C0D2C */  
/* 0045956C 0399E021 */  
/* 00459570 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 00459574 AFB30024 */  sw    $s3, 0x24($sp)
/* 00459578 AFBF002C */  sw    $ra, 0x2c($sp)
/* 0045957C AFBC0028 */  sw    $gp, 0x28($sp)
/* 00459580 AFB20020 */  sw    $s2, 0x20($sp)
/* 00459584 AFB1001C */  sw    $s1, 0x1c($sp)
/* 00459588 AFB00018 */  sw    $s0, 0x18($sp)
/* 0045958C AFA40038 */  sw    $a0, 0x38($sp)
/* 00459590 24930004 */  addiu $s3, $a0, 4
/* 00459594 8E640000 */  lw    $a0, ($s3)
/* 00459598 8F99864C */  lw    $t9, %call16(isvarhash)($gp)
/* 0045959C AFA40000 */  sw    $a0, ($sp)
/* 004595A0 8E650004 */  lw    $a1, 4($s3)
/* 004595A4 0320F809 */  jalr  $t9
/* 004595A8 AFA50004 */   sw    $a1, 4($sp)
/* 004595AC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004595B0 3058FFFF */  andi  $t8, $v0, 0xffff
/* 004595B4 0018C880 */  sll   $t9, $t8, 2
/* 004595B8 8F888DF8 */  lw     $t0, %got(table)($gp)
/* 004595BC A7A20034 */  sh    $v0, 0x34($sp)
/* 004595C0 00009025 */  move  $s2, $zero
/* 004595C4 03284821 */  addu  $t1, $t9, $t0
/* 004595C8 8D300000 */  lw    $s0, ($t1)
/* 004595CC 24110001 */  li    $s1, 1
/* 004595D0 1200001A */  beqz  $s0, .L0045963C
/* 004595D4 00000000 */   nop   
/* 004595D8 920A0000 */  lbu   $t2, ($s0)
.L004595DC:
/* 004595DC 3C011200 */  lui   $at, 0x1200
/* 004595E0 2D4B0020 */  sltiu $t3, $t2, 0x20
/* 004595E4 000B6023 */  negu  $t4, $t3
/* 004595E8 01816824 */  and   $t5, $t4, $at
/* 004595EC 014D7004 */  sllv  $t6, $t5, $t2
/* 004595F0 05C30010 */  bgezl $t6, .L00459634
/* 004595F4 8E10001C */   lw    $s0, 0x1c($s0)
/* 004595F8 8E040028 */  lw    $a0, 0x28($s0)
/* 004595FC 8E05002C */  lw    $a1, 0x2c($s0)
/* 00459600 8F99860C */  lw    $t9, %call16(addreq)($gp)
/* 00459604 AFA40000 */  sw    $a0, ($sp)
/* 00459608 AFA50004 */  sw    $a1, 4($sp)
/* 0045960C 8E660000 */  lw    $a2, ($s3)
/* 00459610 AFA60008 */  sw    $a2, 8($sp)
/* 00459614 8E670004 */  lw    $a3, 4($s3)
/* 00459618 0320F809 */  jalr  $t9
/* 0045961C AFA7000C */   sw    $a3, 0xc($sp)
/* 00459620 10400003 */  beqz  $v0, .L00459630
/* 00459624 8FBC0028 */   lw    $gp, 0x28($sp)
/* 00459628 A2110021 */  sb    $s1, 0x21($s0)
/* 0045962C 323200FF */  andi  $s2, $s1, 0xff
.L00459630:
/* 00459630 8E10001C */  lw    $s0, 0x1c($s0)
.L00459634:
/* 00459634 5600FFE9 */  bnezl $s0, .L004595DC
/* 00459638 920A0000 */   lbu   $t2, ($s0)
.L0045963C:
/* 0045963C 56400010 */  bnezl $s2, .L00459680
/* 00459640 8FBF002C */   lw    $ra, 0x2c($sp)
/* 00459644 8F998694 */  lw    $t9, %call16(searchvar)($gp)
/* 00459648 97A40034 */  lhu   $a0, 0x34($sp)
/* 0045964C 02602825 */  move  $a1, $s3
/* 00459650 0320F809 */  jalr  $t9
/* 00459654 00000000 */   nop   
/* 00459658 8FA30038 */  lw    $v1, 0x38($sp)
/* 0045965C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00459660 8C69000C */  lw    $t1, 0xc($v1)
/* 00459664 AC400010 */  sw    $zero, 0x10($v0)
/* 00459668 A0490020 */  sb    $t1, 0x20($v0)
/* 0045966C 906B0002 */  lbu   $t3, 2($v1)
/* 00459670 A04B0022 */  sb    $t3, 0x22($v0)
/* 00459674 906C0001 */  lbu   $t4, 1($v1)
/* 00459678 A04C0021 */  sb    $t4, 0x21($v0)
/* 0045967C 8FBF002C */  lw    $ra, 0x2c($sp)
.L00459680:
/* 00459680 8FB00018 */  lw    $s0, 0x18($sp)
/* 00459684 8FB1001C */  lw    $s1, 0x1c($sp)
/* 00459688 8FB20020 */  lw    $s2, 0x20($sp)
/* 0045968C 8FB30024 */  lw    $s3, 0x24($sp)
/* 00459690 03E00008 */  jr    $ra
/* 00459694 27BD0038 */   addiu $sp, $sp, 0x38
    .type update_veqv_in_table, @function
    .size update_veqv_in_table, .-update_veqv_in_table
    .end update_veqv_in_table

glabel make_subloc_veqv
    .ent make_subloc_veqv
    # 00459698 make_subloc_veqv
    # 00459828 insertvar
/* 00459698 3C1C0FBC */  .cpload $t9
/* 0045969C 279C0BF8 */  
/* 004596A0 0399E021 */  
/* 004596A4 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 004596A8 AFB4002C */  sw    $s4, 0x2c($sp)
/* 004596AC AFB30028 */  sw    $s3, 0x28($sp)
/* 004596B0 AFB20024 */  sw    $s2, 0x24($sp)
/* 004596B4 AFB10020 */  sw    $s1, 0x20($sp)
/* 004596B8 AFB0001C */  sw    $s0, 0x1c($sp)
/* 004596BC 00E08025 */  move  $s0, $a3
/* 004596C0 00C08825 */  move  $s1, $a2
/* 004596C4 27B20038 */  addiu $s2, $sp, 0x38
/* 004596C8 24130001 */  li    $s3, 1
/* 004596CC 8F948A60 */  lw     $s4, %got(inlopt)($gp)
/* 004596D0 AFBF0034 */  sw    $ra, 0x34($sp)
/* 004596D4 AFBC0030 */  sw    $gp, 0x30($sp)
/* 004596D8 AFA40038 */  sw    $a0, 0x38($sp)
/* 004596DC AFA5003C */  sw    $a1, 0x3c($sp)
.L004596E0:
/* 004596E0 8E020000 */  lw    $v0, ($s0)
/* 004596E4 50400049 */  beql  $v0, $zero, .L0045980C
/* 004596E8 8FBF0034 */   lw    $ra, 0x34($sp)
/* 004596EC 8E440000 */  lw    $a0, ($s2)
/* 004596F0 8F99842C */  lw    $t9, %call16(compareloc)($gp)
/* 004596F4 8C48000C */  lw    $t0, 0xc($v0)
/* 004596F8 AFA40000 */  sw    $a0, ($sp)
/* 004596FC 8E450004 */  lw    $a1, 4($s2)
/* 00459700 AFA80014 */  sw    $t0, 0x14($sp)
/* 00459704 AFA50004 */  sw    $a1, 4($sp)
/* 00459708 8C460004 */  lw    $a2, 4($v0)
/* 0045970C AFA60008 */  sw    $a2, 8($sp)
/* 00459710 8C470008 */  lw    $a3, 8($v0)
/* 00459714 AFB10010 */  sw    $s1, 0x10($sp)
/* 00459718 0320F809 */  jalr  $t9
/* 0045971C AFA7000C */   sw    $a3, 0xc($sp)
/* 00459720 304300FF */  andi  $v1, $v0, 0xff
/* 00459724 2C610003 */  sltiu $at, $v1, 3
/* 00459728 1020002F */  beqz  $at, .L004597E8
/* 0045972C 8FBC0030 */   lw    $gp, 0x30($sp)
/* 00459730 8F818044 */  lw    $at, %got(jtbl_1000D21C)($gp)
/* 00459734 00034880 */  sll   $t1, $v1, 2
/* 00459738 00290821 */  addu  $at, $at, $t1
/* 0045973C 8C29D21C */  lw    $t1, %lo(jtbl_1000D21C)($at)
/* 00459740 013C4821 */  addu  $t1, $t1, $gp
/* 00459744 01200008 */  jr    $t1
/* 00459748 00000000 */   nop   
.L0045974C:
/* 0045974C 8E020000 */  lw    $v0, ($s0)
/* 00459750 904A0001 */  lbu   $t2, 1($v0)
/* 00459754 5540000D */  bnezl $t2, .L0045978C
/* 00459758 8E440000 */   lw    $a0, ($s2)
/* 0045975C A0530001 */  sb    $s3, 1($v0)
/* 00459760 8E0B0000 */  lw    $t3, ($s0)
/* 00459764 A1600002 */  sb    $zero, 2($t3)
/* 00459768 928C0000 */  lbu   $t4, ($s4)
/* 0045976C 51800007 */  beql  $t4, $zero, .L0045978C
/* 00459770 8E440000 */   lw    $a0, ($s2)
/* 00459774 8F99844C */  lw    $t9, %call16(update_veqv_in_table)($gp)
/* 00459778 8E040000 */  lw    $a0, ($s0)
/* 0045977C 0320F809 */  jalr  $t9
/* 00459780 00000000 */   nop   
/* 00459784 8FBC0030 */  lw    $gp, 0x30($sp)
/* 00459788 8E440000 */  lw    $a0, ($s2)
.L0045978C:
/* 0045978C 8F998450 */  lw    $t9, %call16(make_subloc_veqv)($gp)
/* 00459790 02203025 */  move  $a2, $s1
/* 00459794 AFA40000 */  sw    $a0, ($sp)
/* 00459798 8E450004 */  lw    $a1, 4($s2)
/* 0045979C AFA50004 */  sw    $a1, 4($sp)
/* 004597A0 8E070000 */  lw    $a3, ($s0)
/* 004597A4 0320F809 */  jalr  $t9
/* 004597A8 24E70010 */   addiu $a3, $a3, 0x10
/* 004597AC 8E580000 */  lw    $t8, ($s2)
/* 004597B0 8E4F0004 */  lw    $t7, 4($s2)
/* 004597B4 8FBC0030 */  lw    $gp, 0x30($sp)
/* 004597B8 AE580000 */  sw    $t8, ($s2)
/* 004597BC AE4F0004 */  sw    $t7, 4($s2)
/* 004597C0 8E100000 */  lw    $s0, ($s0)
/* 004597C4 1000FFC6 */  b     .L004596E0
/* 004597C8 26100014 */   addiu $s0, $s0, 0x14
.L004597CC:
/* 004597CC 8E480000 */  lw    $t0, ($s2)
/* 004597D0 8E590004 */  lw    $t9, 4($s2)
/* 004597D4 AE480000 */  sw    $t0, ($s2)
/* 004597D8 AE590004 */  sw    $t9, 4($s2)
/* 004597DC 8E100000 */  lw    $s0, ($s0)
/* 004597E0 1000FFBF */  b     .L004596E0
/* 004597E4 26100010 */   addiu $s0, $s0, 0x10
.L004597E8:
/* 004597E8 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 004597EC 8F868044 */  lw    $a2, %got(RO_1000D210)($gp)
/* 004597F0 24040001 */  li    $a0, 1
/* 004597F4 24050132 */  li    $a1, 306
/* 004597F8 2407000A */  li    $a3, 10
/* 004597FC 0320F809 */  jalr  $t9
/* 00459800 24C6D210 */   addiu $a2, %lo(RO_1000D210) # addiu $a2, $a2, -0x2df0
/* 00459804 8FBC0030 */  lw    $gp, 0x30($sp)
.L00459808:
/* 00459808 8FBF0034 */  lw    $ra, 0x34($sp)
.L0045980C:
/* 0045980C 8FB0001C */  lw    $s0, 0x1c($sp)
/* 00459810 8FB10020 */  lw    $s1, 0x20($sp)
/* 00459814 8FB20024 */  lw    $s2, 0x24($sp)
/* 00459818 8FB30028 */  lw    $s3, 0x28($sp)
/* 0045981C 8FB4002C */  lw    $s4, 0x2c($sp)
/* 00459820 03E00008 */  jr    $ra
/* 00459824 27BD0038 */   addiu $sp, $sp, 0x38
    .type make_subloc_veqv, @function
    .size make_subloc_veqv, .-make_subloc_veqv
    .end make_subloc_veqv

glabel insertvar
    .ent insertvar
    # 0044EDF8 ilodfold
    # 0044F1B8 istrfold
    # 0045A480 oneinstruction
    # 0045B508 oneprocprepass
/* 00459828 3C1C0FBC */  .cpload $t9
/* 0045982C 279C0A68 */  
/* 00459830 0399E021 */  
/* 00459834 27BDFF98 */  addiu $sp, $sp, -0x68
/* 00459838 AFB00020 */  sw    $s0, 0x20($sp)
/* 0045983C 8FB00078 */  lw    $s0, 0x78($sp)
/* 00459840 AFBF003C */  sw    $ra, 0x3c($sp)
/* 00459844 AFBC0038 */  sw    $gp, 0x38($sp)
/* 00459848 AFB50034 */  sw    $s5, 0x34($sp)
/* 0045984C AFB40030 */  sw    $s4, 0x30($sp)
/* 00459850 AFB3002C */  sw    $s3, 0x2c($sp)
/* 00459854 AFB20028 */  sw    $s2, 0x28($sp)
/* 00459858 AFB10024 */  sw    $s1, 0x24($sp)
/* 0045985C AFA40068 */  sw    $a0, 0x68($sp)
/* 00459860 AFA5006C */  sw    $a1, 0x6c($sp)
/* 00459864 AFA70074 */  sw    $a3, 0x74($sp)
/* 00459868 8E030000 */  lw    $v1, ($s0)
/* 0045986C 00C09825 */  move  $s3, $a2
/* 00459870 00008825 */  move  $s1, $zero
/* 00459874 1460000A */  bnez  $v1, .L004598A0
/* 00459878 00000000 */   nop   
/* 0045987C 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 00459880 8F8588EC */  lw     $a1, %got(var_heap)($gp)
/* 00459884 24040018 */  li    $a0, 24
/* 00459888 0320F809 */  jalr  $t9
/* 0045988C 00000000 */   nop   
/* 00459890 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00459894 AE020000 */  sw    $v0, ($s0)
/* 00459898 24110001 */  li    $s1, 1
/* 0045989C 00401825 */  move  $v1, $v0
.L004598A0:
/* 004598A0 8F9288EC */  lw     $s2, %got(var_heap)($gp)
/* 004598A4 162000E1 */  bnez  $s1, .L00459C2C
/* 004598A8 00608025 */   move  $s0, $v1
/* 004598AC 27B50068 */  addiu $s5, $sp, 0x68
/* 004598B0 8EA40000 */  lw    $a0, ($s5)
.L004598B4:
/* 004598B4 8F99842C */  lw    $t9, %call16(compareloc)($gp)
/* 004598B8 8E08000C */  lw    $t0, 0xc($s0)
/* 004598BC AFA40000 */  sw    $a0, ($sp)
/* 004598C0 8EA50004 */  lw    $a1, 4($s5)
/* 004598C4 AFA80014 */  sw    $t0, 0x14($sp)
/* 004598C8 AFA50004 */  sw    $a1, 4($sp)
/* 004598CC 8E060004 */  lw    $a2, 4($s0)
/* 004598D0 AFA60008 */  sw    $a2, 8($sp)
/* 004598D4 8E070008 */  lw    $a3, 8($s0)
/* 004598D8 AFB30010 */  sw    $s3, 0x10($sp)
/* 004598DC 0320F809 */  jalr  $t9
/* 004598E0 AFA7000C */   sw    $a3, 0xc($sp)
/* 004598E4 304300FF */  andi  $v1, $v0, 0xff
/* 004598E8 2C610003 */  sltiu $at, $v1, 3
/* 004598EC 8FBC0038 */  lw    $gp, 0x38($sp)
/* 004598F0 102000C4 */  beqz  $at, .L00459C04
/* 004598F4 8FB40068 */   lw    $s4, 0x68($sp)
/* 004598F8 8F818044 */  lw    $at, %got(jtbl_1000D234)($gp)
/* 004598FC 00034880 */  sll   $t1, $v1, 2
/* 00459900 00290821 */  addu  $at, $at, $t1
/* 00459904 8C29D234 */  lw    $t1, %lo(jtbl_1000D234)($at)
/* 00459908 013C4821 */  addu  $t1, $t1, $gp
/* 0045990C 01200008 */  jr    $t1
/* 00459910 00000000 */   nop   
.L00459914:
/* 00459914 8E030010 */  lw    $v1, 0x10($s0)
/* 00459918 14600009 */  bnez  $v1, .L00459940
/* 0045991C 00000000 */   nop   
/* 00459920 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 00459924 24040018 */  li    $a0, 24
/* 00459928 02402825 */  move  $a1, $s2
/* 0045992C 0320F809 */  jalr  $t9
/* 00459930 24110001 */   li    $s1, 1
/* 00459934 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00459938 AE020010 */  sw    $v0, 0x10($s0)
/* 0045993C 00401825 */  move  $v1, $v0
.L00459940:
/* 00459940 100000B8 */  b     .L00459C24
/* 00459944 00608025 */   move  $s0, $v1
.L00459948:
/* 00459948 8E030014 */  lw    $v1, 0x14($s0)
/* 0045994C 14600009 */  bnez  $v1, .L00459974
/* 00459950 00000000 */   nop   
/* 00459954 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 00459958 24040018 */  li    $a0, 24
/* 0045995C 02402825 */  move  $a1, $s2
/* 00459960 0320F809 */  jalr  $t9
/* 00459964 24110001 */   li    $s1, 1
/* 00459968 8FBC0038 */  lw    $gp, 0x38($sp)
/* 0045996C AE020014 */  sw    $v0, 0x14($s0)
/* 00459970 00401825 */  move  $v1, $v0
.L00459974:
/* 00459974 100000AB */  b     .L00459C24
/* 00459978 00608025 */   move  $s0, $v1
.L0045997C:
/* 0045997C 8E0A0004 */  lw    $t2, 4($s0)
/* 00459980 93AC006E */  lbu   $t4, 0x6e($sp)
/* 00459984 24010003 */  li    $at, 3
/* 00459988 168A0004 */  bne   $s4, $t2, .L0045999C
/* 0045998C 318D0007 */   andi  $t5, $t4, 7
/* 00459990 8E0B000C */  lw    $t3, 0xc($s0)
/* 00459994 526B0004 */  beql  $s3, $t3, .L004599A8
/* 00459998 93AE0077 */   lbu   $t6, 0x77($sp)
.L0045999C:
/* 0045999C 55A10048 */  bnel  $t5, $at, .L00459AC0
/* 004599A0 920D0001 */   lbu   $t5, 1($s0)
/* 004599A4 93AE0077 */  lbu   $t6, 0x77($sp)
.L004599A8:
/* 004599A8 3C01000C */  lui   $at, 0xc
/* 004599AC 2DCF0020 */  sltiu $t7, $t6, 0x20
/* 004599B0 000FC023 */  negu  $t8, $t7
/* 004599B4 0301C824 */  and   $t9, $t8, $at
/* 004599B8 01D94004 */  sllv  $t0, $t9, $t6
/* 004599BC 05010008 */  bgez  $t0, .L004599E0
/* 004599C0 93AF0077 */   lbu   $t7, 0x77($sp)
/* 004599C4 92090000 */  lbu   $t1, ($s0)
/* 004599C8 3C01000C */  lui   $at, 0xc
/* 004599CC 2D2A0020 */  sltiu $t2, $t1, 0x20
/* 004599D0 000A5823 */  negu  $t3, $t2
/* 004599D4 01616024 */  and   $t4, $t3, $at
/* 004599D8 012C6804 */  sllv  $t5, $t4, $t1
/* 004599DC 05A1000F */  bgez  $t5, .L00459A1C
.L004599E0:
/* 004599E0 2DF80020 */   sltiu $t8, $t7, 0x20
/* 004599E4 0018C823 */  negu  $t9, $t8
/* 004599E8 3C01000C */  lui   $at, 0xc
/* 004599EC 03217024 */  and   $t6, $t9, $at
/* 004599F0 01EE4004 */  sllv  $t0, $t6, $t7
/* 004599F4 05000016 */  bltz  $t0, .L00459A50
/* 004599F8 93AE0083 */   lbu   $t6, 0x83($sp)
/* 004599FC 920A0000 */  lbu   $t2, ($s0)
/* 00459A00 3C01000C */  lui   $at, 0xc
/* 00459A04 2D4B0020 */  sltiu $t3, $t2, 0x20
/* 00459A08 000B6023 */  negu  $t4, $t3
/* 00459A0C 01814824 */  and   $t1, $t4, $at
/* 00459A10 01496804 */  sllv  $t5, $t1, $t2
/* 00459A14 05A1000E */  bgez  $t5, .L00459A50
/* 00459A18 00000000 */   nop   
.L00459A1C:
/* 00459A1C 8F998A60 */  lw     $t9, %got(inlopt)($gp)
/* 00459A20 24180001 */  li    $t8, 1
/* 00459A24 A2180001 */  sb    $t8, 1($s0)
/* 00459A28 93390000 */  lbu   $t9, ($t9)
/* 00459A2C 13200021 */  beqz  $t9, .L00459AB4
/* 00459A30 00000000 */   nop   
/* 00459A34 8F99844C */  lw    $t9, %call16(update_veqv_in_table)($gp)
/* 00459A38 02002025 */  move  $a0, $s0
/* 00459A3C 0320F809 */  jalr  $t9
/* 00459A40 00000000 */   nop   
/* 00459A44 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00459A48 1000008B */  b     .L00459C78
/* 00459A4C 02001025 */   move  $v0, $s0
.L00459A50:
/* 00459A50 51C00013 */  beql  $t6, $zero, .L00459AA0
/* 00459A54 93A90087 */   lbu   $t1, 0x87($sp)
/* 00459A58 920F0002 */  lbu   $t7, 2($s0)
/* 00459A5C 55E00010 */  bnezl $t7, .L00459AA0
/* 00459A60 93A90087 */   lbu   $t1, 0x87($sp)
/* 00459A64 92080001 */  lbu   $t0, 1($s0)
/* 00459A68 5500000D */  bnezl $t0, .L00459AA0
/* 00459A6C 93A90087 */   lbu   $t1, 0x87($sp)
/* 00459A70 8F8C8A60 */  lw     $t4, %got(inlopt)($gp)
/* 00459A74 240B0001 */  li    $t3, 1
/* 00459A78 A20B0001 */  sb    $t3, 1($s0)
/* 00459A7C 918C0000 */  lbu   $t4, ($t4)
/* 00459A80 51800007 */  beql  $t4, $zero, .L00459AA0
/* 00459A84 93A90087 */   lbu   $t1, 0x87($sp)
/* 00459A88 8F99844C */  lw    $t9, %call16(update_veqv_in_table)($gp)
/* 00459A8C 02002025 */  move  $a0, $s0
/* 00459A90 0320F809 */  jalr  $t9
/* 00459A94 00000000 */   nop   
/* 00459A98 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00459A9C 93A90087 */  lbu   $t1, 0x87($sp)
.L00459AA0:
/* 00459AA0 240A0001 */  li    $t2, 1
/* 00459AA4 11200003 */  beqz  $t1, .L00459AB4
/* 00459AA8 00000000 */   nop   
/* 00459AAC A20A0002 */  sb    $t2, 2($s0)
/* 00459AB0 A2000001 */  sb    $zero, 1($s0)
.L00459AB4:
/* 00459AB4 10000070 */  b     .L00459C78
/* 00459AB8 02001025 */   move  $v0, $s0
/* 00459ABC 920D0001 */  lbu   $t5, 1($s0)
.L00459AC0:
/* 00459AC0 00001825 */  move  $v1, $zero
/* 00459AC4 02932821 */  addu  $a1, $s4, $s3
/* 00459AC8 55A00010 */  bnezl $t5, .L00459B0C
/* 00459ACC 8E020004 */   lw    $v0, 4($s0)
/* 00459AD0 8F998A60 */  lw     $t9, %got(inlopt)($gp)
/* 00459AD4 24180001 */  li    $t8, 1
/* 00459AD8 A2180001 */  sb    $t8, 1($s0)
/* 00459ADC 93390000 */  lbu   $t9, ($t9)
/* 00459AE0 5320000A */  beql  $t9, $zero, .L00459B0C
/* 00459AE4 8E020004 */   lw    $v0, 4($s0)
/* 00459AE8 8F99844C */  lw    $t9, %call16(update_veqv_in_table)($gp)
/* 00459AEC 02002025 */  move  $a0, $s0
/* 00459AF0 A3A0005E */  sb    $zero, 0x5e($sp)
/* 00459AF4 0320F809 */  jalr  $t9
/* 00459AF8 AFA50040 */   sw    $a1, 0x40($sp)
/* 00459AFC 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00459B00 93A3005E */  lbu   $v1, 0x5e($sp)
/* 00459B04 8FA50040 */  lw    $a1, 0x40($sp)
/* 00459B08 8E020004 */  lw    $v0, 4($s0)
.L00459B0C:
/* 00459B0C 8E0E000C */  lw    $t6, 0xc($s0)
/* 00459B10 00A24023 */  subu  $t0, $a1, $v0
/* 00459B14 004E7821 */  addu  $t7, $v0, $t6
/* 00459B18 01E5082A */  slt   $at, $t7, $a1
/* 00459B1C 50200004 */  beql  $at, $zero, .L00459B30
/* 00459B20 0054082A */   slt   $at, $v0, $s4
/* 00459B24 AE08000C */  sw    $t0, 0xc($s0)
/* 00459B28 24030001 */  li    $v1, 1
/* 00459B2C 0054082A */  slt   $at, $v0, $s4
.L00459B30:
/* 00459B30 5420000F */  bnezl $at, .L00459B70
/* 00459B34 0282082A */   slt   $at, $s4, $v0
/* 00459B38 5060000D */  beql  $v1, $zero, .L00459B70
/* 00459B3C 0282082A */   slt   $at, $s4, $v0
/* 00459B40 8EA40000 */  lw    $a0, ($s5)
/* 00459B44 8F998450 */  lw    $t9, %call16(make_subloc_veqv)($gp)
/* 00459B48 02603025 */  move  $a2, $s3
/* 00459B4C AFA40000 */  sw    $a0, ($sp)
/* 00459B50 8EA50004 */  lw    $a1, 4($s5)
/* 00459B54 26070014 */  addiu $a3, $s0, 0x14
/* 00459B58 0320F809 */  jalr  $t9
/* 00459B5C AFA50004 */   sw    $a1, 4($sp)
/* 00459B60 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00459B64 8FB40068 */  lw    $s4, 0x68($sp)
/* 00459B68 8E020004 */  lw    $v0, 4($s0)
/* 00459B6C 0282082A */  slt   $at, $s4, $v0
.L00459B70:
/* 00459B70 50200011 */  beql  $at, $zero, .L00459BB8
/* 00459B74 0054082A */   slt   $at, $v0, $s4
/* 00459B78 8E030010 */  lw    $v1, 0x10($s0)
/* 00459B7C 24090001 */  li    $t1, 1
/* 00459B80 A3A90083 */  sb    $t1, 0x83($sp)
/* 00459B84 14600009 */  bnez  $v1, .L00459BAC
/* 00459B88 A3A00087 */   sb    $zero, 0x87($sp)
/* 00459B8C 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 00459B90 24040018 */  li    $a0, 24
/* 00459B94 02402825 */  move  $a1, $s2
/* 00459B98 0320F809 */  jalr  $t9
/* 00459B9C 24110001 */   li    $s1, 1
/* 00459BA0 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00459BA4 AE020010 */  sw    $v0, 0x10($s0)
/* 00459BA8 00401825 */  move  $v1, $v0
.L00459BAC:
/* 00459BAC 1000001D */  b     .L00459C24
/* 00459BB0 00608025 */   move  $s0, $v1
/* 00459BB4 0054082A */  slt   $at, $v0, $s4
.L00459BB8:
/* 00459BB8 10200010 */  beqz  $at, .L00459BFC
/* 00459BBC 00000000 */   nop   
/* 00459BC0 8E030014 */  lw    $v1, 0x14($s0)
/* 00459BC4 240A0001 */  li    $t2, 1
/* 00459BC8 A3AA0083 */  sb    $t2, 0x83($sp)
/* 00459BCC 14600009 */  bnez  $v1, .L00459BF4
/* 00459BD0 A3A00087 */   sb    $zero, 0x87($sp)
/* 00459BD4 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 00459BD8 24040018 */  li    $a0, 24
/* 00459BDC 02402825 */  move  $a1, $s2
/* 00459BE0 0320F809 */  jalr  $t9
/* 00459BE4 24110001 */   li    $s1, 1
/* 00459BE8 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00459BEC AE020014 */  sw    $v0, 0x14($s0)
/* 00459BF0 00401825 */  move  $v1, $v0
.L00459BF4:
/* 00459BF4 1000000B */  b     .L00459C24
/* 00459BF8 00608025 */   move  $s0, $v1
.L00459BFC:
/* 00459BFC 1000001E */  b     .L00459C78
/* 00459C00 02001025 */   move  $v0, $s0
.L00459C04:
/* 00459C04 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 00459C08 8F868044 */  lw    $a2, %got(RO_1000D228)($gp)
/* 00459C0C 24040001 */  li    $a0, 1
/* 00459C10 24050150 */  li    $a1, 336
/* 00459C14 2407000A */  li    $a3, 10
/* 00459C18 0320F809 */  jalr  $t9
/* 00459C1C 24C6D228 */   addiu $a2, %lo(RO_1000D228) # addiu $a2, $a2, -0x2dd8
/* 00459C20 8FBC0038 */  lw    $gp, 0x38($sp)
.L00459C24:
/* 00459C24 5220FF23 */  beql  $s1, $zero, .L004598B4
/* 00459C28 8EA40000 */   lw    $a0, ($s5)
.L00459C2C:
/* 00459C2C 27B50068 */  addiu $s5, $sp, 0x68
/* 00459C30 93B90083 */  lbu   $t9, 0x83($sp)
/* 00459C34 8EB80000 */  lw    $t8, ($s5)
/* 00459C38 8EAD0004 */  lw    $t5, 4($s5)
/* 00459C3C 03201825 */  move  $v1, $t9
/* 00459C40 AE180004 */  sw    $t8, 4($s0)
/* 00459C44 13200003 */  beqz  $t9, .L00459C54
/* 00459C48 AE0D0008 */   sw    $t5, 8($s0)
/* 00459C4C 83A30087 */  lb    $v1, 0x87($sp)
/* 00459C50 2C630001 */  sltiu $v1, $v1, 1
.L00459C54:
/* 00459C54 93AE0087 */  lbu   $t6, 0x87($sp)
/* 00459C58 93AF0077 */  lbu   $t7, 0x77($sp)
/* 00459C5C A2030001 */  sb    $v1, 1($s0)
/* 00459C60 AE13000C */  sw    $s3, 0xc($s0)
/* 00459C64 AE000010 */  sw    $zero, 0x10($s0)
/* 00459C68 AE000014 */  sw    $zero, 0x14($s0)
/* 00459C6C 02001025 */  move  $v0, $s0
/* 00459C70 A20E0002 */  sb    $t6, 2($s0)
/* 00459C74 A20F0000 */  sb    $t7, ($s0)
.L00459C78:
/* 00459C78 8FBF003C */  lw    $ra, 0x3c($sp)
/* 00459C7C 8FB00020 */  lw    $s0, 0x20($sp)
/* 00459C80 8FB10024 */  lw    $s1, 0x24($sp)
/* 00459C84 8FB20028 */  lw    $s2, 0x28($sp)
/* 00459C88 8FB3002C */  lw    $s3, 0x2c($sp)
/* 00459C8C 8FB40030 */  lw    $s4, 0x30($sp)
/* 00459C90 8FB50034 */  lw    $s5, 0x34($sp)
/* 00459C94 03E00008 */  jr    $ra
/* 00459C98 27BD0068 */   addiu $sp, $sp, 0x68
    .type insertvar, @function
    .size insertvar, .-insertvar
    .end insertvar

glabel enterfsymtab
    .ent enterfsymtab
    # 0045A480 oneinstruction
/* 00459C9C 3C1C0FBC */  .cpload $t9
/* 00459CA0 279C05F4 */  
/* 00459CA4 0399E021 */  
/* 00459CA8 240100A1 */  li    $at, 161
/* 00459CAC 0081001A */  div   $zero, $a0, $at
/* 00459CB0 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 00459CB4 00007010 */  mfhi  $t6
/* 00459CB8 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00459CBC AFBC0018 */  sw    $gp, 0x18($sp)
/* 00459CC0 05C10002 */  bgez  $t6, .L00459CCC
/* 00459CC4 00803025 */   move  $a2, $a0
/* 00459CC8 21CE00A1 */  addi  $t6, $t6, 0xa1
.L00459CCC:
/* 00459CCC 8F988DC8 */  lw     $t8, %got(fsymtab)($gp)
/* 00459CD0 000E7880 */  sll   $t7, $t6, 2
/* 00459CD4 24040008 */  li    $a0, 8
/* 00459CD8 01F81821 */  addu  $v1, $t7, $t8
/* 00459CDC 8C620000 */  lw    $v0, ($v1)
/* 00459CE0 5440000E */  bnezl $v0, .L00459D1C
/* 00459CE4 8C590000 */   lw    $t9, ($v0)
/* 00459CE8 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 00459CEC 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 00459CF0 AFA30024 */  sw    $v1, 0x24($sp)
/* 00459CF4 0320F809 */  jalr  $t9
/* 00459CF8 AFA60038 */   sw    $a2, 0x38($sp)
/* 00459CFC 8FA30024 */  lw    $v1, 0x24($sp)
/* 00459D00 8FA60038 */  lw    $a2, 0x38($sp)
/* 00459D04 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00459D08 AC620000 */  sw    $v0, ($v1)
/* 00459D0C AC400004 */  sw    $zero, 4($v0)
/* 00459D10 10000029 */  b     .L00459DB8
/* 00459D14 AC460000 */   sw    $a2, ($v0)
/* 00459D18 8C590000 */  lw    $t9, ($v0)
.L00459D1C:
/* 00459D1C 00401825 */  move  $v1, $v0
/* 00459D20 24040008 */  li    $a0, 8
/* 00459D24 0326082A */  slt   $at, $t9, $a2
/* 00459D28 1020000C */  beqz  $at, .L00459D5C
/* 00459D2C 00000000 */   nop   
/* 00459D30 8C420004 */  lw    $v0, 4($v0)
/* 00459D34 10400009 */  beqz  $v0, .L00459D5C
/* 00459D38 00000000 */   nop   
/* 00459D3C 8C480000 */  lw    $t0, ($v0)
.L00459D40:
/* 00459D40 00401825 */  move  $v1, $v0
/* 00459D44 0106082A */  slt   $at, $t0, $a2
/* 00459D48 10200004 */  beqz  $at, .L00459D5C
/* 00459D4C 00000000 */   nop   
/* 00459D50 8C420004 */  lw    $v0, 4($v0)
/* 00459D54 5440FFFA */  bnezl $v0, .L00459D40
/* 00459D58 8C480000 */   lw    $t0, ($v0)
.L00459D5C:
/* 00459D5C 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 00459D60 8C690004 */  lw    $t1, 4($v1)
/* 00459D64 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 00459D68 AFA30030 */  sw    $v1, 0x30($sp)
/* 00459D6C AFA60038 */  sw    $a2, 0x38($sp)
/* 00459D70 0320F809 */  jalr  $t9
/* 00459D74 AFA9002C */   sw    $t1, 0x2c($sp)
/* 00459D78 8FA30030 */  lw    $v1, 0x30($sp)
/* 00459D7C 8FAA002C */  lw    $t2, 0x2c($sp)
/* 00459D80 8FA60038 */  lw    $a2, 0x38($sp)
/* 00459D84 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00459D88 AC620004 */  sw    $v0, 4($v1)
/* 00459D8C AC4A0004 */  sw    $t2, 4($v0)
/* 00459D90 8C640000 */  lw    $a0, ($v1)
/* 00459D94 0086082A */  slt   $at, $a0, $a2
/* 00459D98 54200006 */  bnezl $at, .L00459DB4
/* 00459D9C 8C6C0004 */   lw    $t4, 4($v1)
/* 00459DA0 8C6B0004 */  lw    $t3, 4($v1)
/* 00459DA4 AD640000 */  sw    $a0, ($t3)
/* 00459DA8 10000003 */  b     .L00459DB8
/* 00459DAC AC660000 */   sw    $a2, ($v1)
/* 00459DB0 8C6C0004 */  lw    $t4, 4($v1)
.L00459DB4:
/* 00459DB4 AD860000 */  sw    $a2, ($t4)
.L00459DB8:
/* 00459DB8 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00459DBC 27BD0038 */  addiu $sp, $sp, 0x38
/* 00459DC0 03E00008 */  jr    $ra
/* 00459DC4 00000000 */   nop   
    .type enterfsymtab, @function
    .size enterfsymtab, .-enterfsymtab
    .end enterfsymtab

glabel del_fsymtab
    .ent del_fsymtab
    # 0045A480 oneinstruction
/* 00459DC8 3C1C0FBC */  .cpload $t9
/* 00459DCC 279C04C8 */  
/* 00459DD0 0399E021 */  
/* 00459DD4 240100A1 */  li    $at, 161
/* 00459DD8 0081001A */  div   $zero, $a0, $at
/* 00459DDC 00007010 */  mfhi  $t6
/* 00459DE0 05C10002 */  bgez  $t6, .L00459DEC
/* 00459DE4 00000000 */   nop   
/* 00459DE8 21CE00A1 */  addi  $t6, $t6, 0xa1
.L00459DEC:
/* 00459DEC 8F988DC8 */  lw     $t8, %got(fsymtab)($gp)
/* 00459DF0 000E7880 */  sll   $t7, $t6, 2
/* 00459DF4 01F81021 */  addu  $v0, $t7, $t8
/* 00459DF8 8C430000 */  lw    $v1, ($v0)
/* 00459DFC 1060001F */  beqz  $v1, .L00459E7C
/* 00459E00 00000000 */   nop   
/* 00459E04 8C790000 */  lw    $t9, ($v1)
/* 00459E08 00602825 */  move  $a1, $v1
/* 00459E0C 54990005 */  bnel  $a0, $t9, .L00459E24
/* 00459E10 00A01025 */   move  $v0, $a1
/* 00459E14 8C680004 */  lw    $t0, 4($v1)
/* 00459E18 03E00008 */  jr    $ra
/* 00459E1C AC480000 */   sw    $t0, ($v0)

/* 00459E20 00A01025 */  move  $v0, $a1
.L00459E24:
/* 00459E24 8CA50004 */  lw    $a1, 4($a1)
/* 00459E28 10A0000D */  beqz  $a1, .L00459E60
/* 00459E2C 00000000 */   nop   
/* 00459E30 8CA90000 */  lw    $t1, ($a1)
/* 00459E34 0124082A */  slt   $at, $t1, $a0
/* 00459E38 10200009 */  beqz  $at, .L00459E60
/* 00459E3C 00000000 */   nop   
/* 00459E40 00A01025 */  move  $v0, $a1
.L00459E44:
/* 00459E44 8CA50004 */  lw    $a1, 4($a1)
/* 00459E48 10A00005 */  beqz  $a1, .L00459E60
/* 00459E4C 00000000 */   nop   
/* 00459E50 8CAA0000 */  lw    $t2, ($a1)
/* 00459E54 0144082A */  slt   $at, $t2, $a0
/* 00459E58 5420FFFA */  bnezl $at, .L00459E44
/* 00459E5C 00A01025 */   move  $v0, $a1
.L00459E60:
/* 00459E60 10A00006 */  beqz  $a1, .L00459E7C
/* 00459E64 00000000 */   nop   
/* 00459E68 8CAB0000 */  lw    $t3, ($a1)
/* 00459E6C 148B0003 */  bne   $a0, $t3, .L00459E7C
/* 00459E70 00000000 */   nop   
/* 00459E74 8CAC0004 */  lw    $t4, 4($a1)
/* 00459E78 AC4C0004 */  sw    $t4, 4($v0)
.L00459E7C:
/* 00459E7C 03E00008 */  jr    $ra
/* 00459E80 00000000 */   nop   
    .type del_fsymtab, @function
    .size del_fsymtab, .-del_fsymtab
    .end del_fsymtab

glabel enter_gp_rel_tab
    .ent enter_gp_rel_tab
    # 0045A3DC check_gp_relative
    # 0045A480 oneinstruction
/* 00459E84 3C1C0FBC */  .cpload $t9
/* 00459E88 279C040C */  
/* 00459E8C 0399E021 */  
/* 00459E90 240100A1 */  li    $at, 161
/* 00459E94 0081001A */  div   $zero, $a0, $at
/* 00459E98 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 00459E9C 00007010 */  mfhi  $t6
/* 00459EA0 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00459EA4 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00459EA8 05C10002 */  bgez  $t6, .L00459EB4
/* 00459EAC 00803025 */   move  $a2, $a0
/* 00459EB0 21CE00A1 */  addi  $t6, $t6, 0xa1
.L00459EB4:
/* 00459EB4 8F988DCC */  lw     $t8, %got(gp_rel_tab)($gp)
/* 00459EB8 000E7880 */  sll   $t7, $t6, 2
/* 00459EBC 24040008 */  li    $a0, 8
/* 00459EC0 01F81821 */  addu  $v1, $t7, $t8
/* 00459EC4 8C620000 */  lw    $v0, ($v1)
/* 00459EC8 5440000E */  bnezl $v0, .L00459F04
/* 00459ECC 8C590000 */   lw    $t9, ($v0)
/* 00459ED0 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 00459ED4 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 00459ED8 AFA30024 */  sw    $v1, 0x24($sp)
/* 00459EDC 0320F809 */  jalr  $t9
/* 00459EE0 AFA60038 */   sw    $a2, 0x38($sp)
/* 00459EE4 8FA30024 */  lw    $v1, 0x24($sp)
/* 00459EE8 8FA60038 */  lw    $a2, 0x38($sp)
/* 00459EEC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00459EF0 AC620000 */  sw    $v0, ($v1)
/* 00459EF4 AC400004 */  sw    $zero, 4($v0)
/* 00459EF8 10000029 */  b     .L00459FA0
/* 00459EFC AC460000 */   sw    $a2, ($v0)
/* 00459F00 8C590000 */  lw    $t9, ($v0)
.L00459F04:
/* 00459F04 00401825 */  move  $v1, $v0
/* 00459F08 24040008 */  li    $a0, 8
/* 00459F0C 0326082A */  slt   $at, $t9, $a2
/* 00459F10 1020000C */  beqz  $at, .L00459F44
/* 00459F14 00000000 */   nop   
/* 00459F18 8C420004 */  lw    $v0, 4($v0)
/* 00459F1C 10400009 */  beqz  $v0, .L00459F44
/* 00459F20 00000000 */   nop   
/* 00459F24 8C480000 */  lw    $t0, ($v0)
.L00459F28:
/* 00459F28 00401825 */  move  $v1, $v0
/* 00459F2C 0106082A */  slt   $at, $t0, $a2
/* 00459F30 10200004 */  beqz  $at, .L00459F44
/* 00459F34 00000000 */   nop   
/* 00459F38 8C420004 */  lw    $v0, 4($v0)
/* 00459F3C 5440FFFA */  bnezl $v0, .L00459F28
/* 00459F40 8C480000 */   lw    $t0, ($v0)
.L00459F44:
/* 00459F44 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 00459F48 8C690004 */  lw    $t1, 4($v1)
/* 00459F4C 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 00459F50 AFA30030 */  sw    $v1, 0x30($sp)
/* 00459F54 AFA60038 */  sw    $a2, 0x38($sp)
/* 00459F58 0320F809 */  jalr  $t9
/* 00459F5C AFA9002C */   sw    $t1, 0x2c($sp)
/* 00459F60 8FA30030 */  lw    $v1, 0x30($sp)
/* 00459F64 8FAA002C */  lw    $t2, 0x2c($sp)
/* 00459F68 8FA60038 */  lw    $a2, 0x38($sp)
/* 00459F6C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00459F70 AC620004 */  sw    $v0, 4($v1)
/* 00459F74 AC4A0004 */  sw    $t2, 4($v0)
/* 00459F78 8C640000 */  lw    $a0, ($v1)
/* 00459F7C 0086082A */  slt   $at, $a0, $a2
/* 00459F80 54200006 */  bnezl $at, .L00459F9C
/* 00459F84 8C6C0004 */   lw    $t4, 4($v1)
/* 00459F88 8C6B0004 */  lw    $t3, 4($v1)
/* 00459F8C AD640000 */  sw    $a0, ($t3)
/* 00459F90 10000003 */  b     .L00459FA0
/* 00459F94 AC660000 */   sw    $a2, ($v1)
/* 00459F98 8C6C0004 */  lw    $t4, 4($v1)
.L00459F9C:
/* 00459F9C AD860000 */  sw    $a2, ($t4)
.L00459FA0:
/* 00459FA0 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00459FA4 27BD0038 */  addiu $sp, $sp, 0x38
/* 00459FA8 03E00008 */  jr    $ra
/* 00459FAC 00000000 */   nop   
    .type enter_gp_rel_tab, @function
    .size enter_gp_rel_tab, .-enter_gp_rel_tab
    .end enter_gp_rel_tab

glabel insertlda
    .ent insertlda
    # 0045A480 oneinstruction
/* 00459FB0 3C1C0FBC */  .cpload $t9
/* 00459FB4 279C02E0 */  
/* 00459FB8 0399E021 */  
/* 00459FBC 00057AC2 */  srl   $t7, $a1, 0xb
/* 00459FC0 24010C29 */  li    $at, 3113
/* 00459FC4 01E1001A */  div   $zero, $t7, $at
/* 00459FC8 27BDFFB8 */  addiu $sp, $sp, -0x48
/* 00459FCC AFB30028 */  sw    $s3, 0x28($sp)
/* 00459FD0 0000C010 */  mfhi  $t8
/* 00459FD4 00C09825 */  move  $s3, $a2
/* 00459FD8 AFBF0034 */  sw    $ra, 0x34($sp)
/* 00459FDC AFBC0030 */  sw    $gp, 0x30($sp)
/* 00459FE0 AFB4002C */  sw    $s4, 0x2c($sp)
/* 00459FE4 AFB20024 */  sw    $s2, 0x24($sp)
/* 00459FE8 AFB10020 */  sw    $s1, 0x20($sp)
/* 00459FEC AFB0001C */  sw    $s0, 0x1c($sp)
/* 00459FF0 AFA40048 */  sw    $a0, 0x48($sp)
/* 00459FF4 07010002 */  bgez  $t8, .L0045A000
/* 00459FF8 AFA5004C */   sw    $a1, 0x4c($sp)
/* 00459FFC 23180C29 */  addi  $t8, $t8, 0xc29
.L0045A000:
/* 0045A000 8F888DF4 */  lw     $t0, %got(ldatab)($gp)
/* 0045A004 0018C880 */  sll   $t9, $t8, 2
/* 0045A008 27B40048 */  addiu $s4, $sp, 0x48
/* 0045A00C 03289021 */  addu  $s2, $t9, $t0
/* 0045A010 8E420000 */  lw    $v0, ($s2)
/* 0045A014 54400011 */  bnezl $v0, .L0045A05C
/* 0045A018 8E840000 */   lw    $a0, ($s4)
/* 0045A01C 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 0045A020 24040010 */  li    $a0, 16
/* 0045A024 8F8588E8 */  lw     $a1, %got(lda_heap)($gp)
/* 0045A028 0320F809 */  jalr  $t9
/* 0045A02C 00000000 */   nop   
/* 0045A030 27B40048 */  addiu $s4, $sp, 0x48
/* 0045A034 8E8A0000 */  lw    $t2, ($s4)
/* 0045A038 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045A03C AE420000 */  sw    $v0, ($s2)
/* 0045A040 AC4A0000 */  sw    $t2, ($v0)
/* 0045A044 8E890004 */  lw    $t1, 4($s4)
/* 0045A048 AC530008 */  sw    $s3, 8($v0)
/* 0045A04C AC40000C */  sw    $zero, 0xc($v0)
/* 0045A050 1000007A */  b     .L0045A23C
/* 0045A054 AC490004 */   sw    $t1, 4($v0)
/* 0045A058 8E840000 */  lw    $a0, ($s4)
.L0045A05C:
/* 0045A05C 8F99842C */  lw    $t9, %call16(compareloc)($gp)
/* 0045A060 8C4F0008 */  lw    $t7, 8($v0)
/* 0045A064 AFA40000 */  sw    $a0, ($sp)
/* 0045A068 8E850004 */  lw    $a1, 4($s4)
/* 0045A06C AFAF0014 */  sw    $t7, 0x14($sp)
/* 0045A070 AFA50004 */  sw    $a1, 4($sp)
/* 0045A074 8C460000 */  lw    $a2, ($v0)
/* 0045A078 AFA60008 */  sw    $a2, 8($sp)
/* 0045A07C 8C470004 */  lw    $a3, 4($v0)
/* 0045A080 AFB30010 */  sw    $s3, 0x10($sp)
/* 0045A084 0320F809 */  jalr  $t9
/* 0045A088 AFA7000C */   sw    $a3, 0xc($sp)
/* 0045A08C 304400FF */  andi  $a0, $v0, 0xff
/* 0045A090 2C810003 */  sltiu $at, $a0, 3
/* 0045A094 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045A098 10200060 */  beqz  $at, .L0045A21C
/* 0045A09C 304300FF */   andi  $v1, $v0, 0xff
/* 0045A0A0 8F818044 */  lw    $at, %got(jtbl_1000D24C)($gp)
/* 0045A0A4 0004C080 */  sll   $t8, $a0, 2
/* 0045A0A8 00380821 */  addu  $at, $at, $t8
/* 0045A0AC 8C38D24C */  lw    $t8, %lo(jtbl_1000D24C)($at)
/* 0045A0B0 031CC021 */  addu  $t8, $t8, $gp
/* 0045A0B4 03000008 */  jr    $t8
/* 0045A0B8 00000000 */   nop   
.L0045A0BC:
/* 0045A0BC 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 0045A0C0 24040010 */  li    $a0, 16
/* 0045A0C4 8F8588E8 */  lw     $a1, %got(lda_heap)($gp)
/* 0045A0C8 0320F809 */  jalr  $t9
/* 0045A0CC 00000000 */   nop   
/* 0045A0D0 8E880000 */  lw    $t0, ($s4)
/* 0045A0D4 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045A0D8 AC480000 */  sw    $t0, ($v0)
/* 0045A0DC 8E990004 */  lw    $t9, 4($s4)
/* 0045A0E0 AC530008 */  sw    $s3, 8($v0)
/* 0045A0E4 AC590004 */  sw    $t9, 4($v0)
/* 0045A0E8 8E490000 */  lw    $t1, ($s2)
/* 0045A0EC AC49000C */  sw    $t1, 0xc($v0)
/* 0045A0F0 10000052 */  b     .L0045A23C
/* 0045A0F4 AE420000 */   sw    $v0, ($s2)
.L0045A0F8:
/* 0045A0F8 24110001 */  li    $s1, 1
/* 0045A0FC 304A00FF */  andi  $t2, $v0, 0xff
/* 0045A100 15510019 */  bne   $t2, $s1, .L0045A168
/* 0045A104 8E500000 */   lw    $s0, ($s2)
/* 0045A108 02009025 */  move  $s2, $s0
.L0045A10C:
/* 0045A10C 8E10000C */  lw    $s0, 0xc($s0)
/* 0045A110 56000004 */  bnezl $s0, .L0045A124
/* 0045A114 8E840000 */   lw    $a0, ($s4)
/* 0045A118 10000010 */  b     .L0045A15C
/* 0045A11C 24030002 */   li    $v1, 2
/* 0045A120 8E840000 */  lw    $a0, ($s4)
.L0045A124:
/* 0045A124 8F99842C */  lw    $t9, %call16(compareloc)($gp)
/* 0045A128 8E060000 */  lw    $a2, ($s0)
/* 0045A12C AFA40000 */  sw    $a0, ($sp)
/* 0045A130 8E850004 */  lw    $a1, 4($s4)
/* 0045A134 8E070004 */  lw    $a3, 4($s0)
/* 0045A138 8E0F0008 */  lw    $t7, 8($s0)
/* 0045A13C AFB30010 */  sw    $s3, 0x10($sp)
/* 0045A140 AFA60008 */  sw    $a2, 8($sp)
/* 0045A144 AFA50004 */  sw    $a1, 4($sp)
/* 0045A148 AFA7000C */  sw    $a3, 0xc($sp)
/* 0045A14C 0320F809 */  jalr  $t9
/* 0045A150 AFAF0014 */   sw    $t7, 0x14($sp)
/* 0045A154 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045A158 304300FF */  andi  $v1, $v0, 0xff
.L0045A15C:
/* 0045A15C 5071FFEB */  beql  $v1, $s1, .L0045A10C
/* 0045A160 02009025 */   move  $s2, $s0
/* 0045A164 AFB2003C */  sw    $s2, 0x3c($sp)
.L0045A168:
/* 0045A168 1460001E */  bnez  $v1, .L0045A1E4
/* 0045A16C 8FB2003C */   lw    $s2, 0x3c($sp)
/* 0045A170 3C027FFF */  lui   $v0, 0x7fff
/* 0045A174 3442FFFF */  ori   $v0, $v0, 0xffff
/* 0045A178 56620004 */  bnel  $s3, $v0, .L0045A18C
/* 0045A17C 8E030008 */   lw    $v1, 8($s0)
/* 0045A180 1000000D */  b     .L0045A1B8
/* 0045A184 AE020008 */   sw    $v0, 8($s0)
/* 0045A188 8E030008 */  lw    $v1, 8($s0)
.L0045A18C:
/* 0045A18C 8FA50048 */  lw    $a1, 0x48($sp)
/* 0045A190 5043000A */  beql  $v0, $v1, .L0045A1BC
/* 0045A194 8FA50048 */   lw    $a1, 0x48($sp)
/* 0045A198 8E020000 */  lw    $v0, ($s0)
/* 0045A19C 00B32021 */  addu  $a0, $a1, $s3
/* 0045A1A0 0043C021 */  addu  $t8, $v0, $v1
/* 0045A1A4 0304082A */  slt   $at, $t8, $a0
/* 0045A1A8 50200004 */  beql  $at, $zero, .L0045A1BC
/* 0045A1AC 8FA50048 */   lw    $a1, 0x48($sp)
/* 0045A1B0 0082C823 */  subu  $t9, $a0, $v0
/* 0045A1B4 AE190008 */  sw    $t9, 8($s0)
.L0045A1B8:
/* 0045A1B8 8FA50048 */  lw    $a1, 0x48($sp)
.L0045A1BC:
/* 0045A1BC 8E020000 */  lw    $v0, ($s0)
/* 0045A1C0 00A2082A */  slt   $at, $a1, $v0
/* 0045A1C4 5020001E */  beql  $at, $zero, .L0045A240
/* 0045A1C8 8FBF0034 */   lw    $ra, 0x34($sp)
/* 0045A1CC 8E080008 */  lw    $t0, 8($s0)
/* 0045A1D0 AE050000 */  sw    $a1, ($s0)
/* 0045A1D4 01024821 */  addu  $t1, $t0, $v0
/* 0045A1D8 01255023 */  subu  $t2, $t1, $a1
/* 0045A1DC 10000017 */  b     .L0045A23C
/* 0045A1E0 AE0A0008 */   sw    $t2, 8($s0)
.L0045A1E4:
/* 0045A1E4 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 0045A1E8 24040010 */  li    $a0, 16
/* 0045A1EC 8F8588E8 */  lw     $a1, %got(lda_heap)($gp)
/* 0045A1F0 0320F809 */  jalr  $t9
/* 0045A1F4 00000000 */   nop   
/* 0045A1F8 8E8C0000 */  lw    $t4, ($s4)
/* 0045A1FC 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045A200 AE42000C */  sw    $v0, 0xc($s2)
/* 0045A204 AC4C0000 */  sw    $t4, ($v0)
/* 0045A208 8E8B0004 */  lw    $t3, 4($s4)
/* 0045A20C AC530008 */  sw    $s3, 8($v0)
/* 0045A210 AC50000C */  sw    $s0, 0xc($v0)
/* 0045A214 10000009 */  b     .L0045A23C
/* 0045A218 AC4B0004 */   sw    $t3, 4($v0)
.L0045A21C:
/* 0045A21C 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 0045A220 8F868044 */  lw    $a2, %got(RO_1000D240)($gp)
/* 0045A224 24040001 */  li    $a0, 1
/* 0045A228 24050214 */  li    $a1, 532
/* 0045A22C 2407000A */  li    $a3, 10
/* 0045A230 0320F809 */  jalr  $t9
/* 0045A234 24C6D240 */   addiu $a2, %lo(RO_1000D240) # addiu $a2, $a2, -0x2dc0
/* 0045A238 8FBC0030 */  lw    $gp, 0x30($sp)
.L0045A23C:
/* 0045A23C 8FBF0034 */  lw    $ra, 0x34($sp)
.L0045A240:
/* 0045A240 8FB0001C */  lw    $s0, 0x1c($sp)
/* 0045A244 8FB10020 */  lw    $s1, 0x20($sp)
/* 0045A248 8FB20024 */  lw    $s2, 0x24($sp)
/* 0045A24C 8FB30028 */  lw    $s3, 0x28($sp)
/* 0045A250 8FB4002C */  lw    $s4, 0x2c($sp)
/* 0045A254 03E00008 */  jr    $ra
/* 0045A258 27BD0048 */   addiu $sp, $sp, 0x48
    .type insertlda, @function
    .size insertlda, .-insertlda
    .end insertlda

glabel insertcallee
    .ent insertcallee
    # 0045A480 oneinstruction
/* 0045A25C 3C1C0FBC */  .cpload $t9
/* 0045A260 279C0034 */  
/* 0045A264 0399E021 */  
/* 0045A268 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 0045A26C AFBF001C */  sw    $ra, 0x1c($sp)
/* 0045A270 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0045A274 AFA40030 */  sw    $a0, 0x30($sp)
/* 0045A278 8CA70000 */  lw    $a3, ($a1)
/* 0045A27C 00A03025 */  move  $a2, $a1
/* 0045A280 8FB80030 */  lw    $t8, 0x30($sp)
/* 0045A284 54E00010 */  bnezl $a3, .L0045A2C8
/* 0045A288 8CF90000 */   lw    $t9, ($a3)
/* 0045A28C 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 0045A290 24040008 */  li    $a0, 8
/* 0045A294 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 0045A298 0320F809 */  jalr  $t9
/* 0045A29C AFA60034 */   sw    $a2, 0x34($sp)
/* 0045A2A0 8FA60034 */  lw    $a2, 0x34($sp)
/* 0045A2A4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0045A2A8 24040001 */  li    $a0, 1
/* 0045A2AC ACC20000 */  sw    $v0, ($a2)
/* 0045A2B0 AC400004 */  sw    $zero, 4($v0)
/* 0045A2B4 8FAE0030 */  lw    $t6, 0x30($sp)
/* 0045A2B8 8CCF0000 */  lw    $t7, ($a2)
/* 0045A2BC 10000042 */  b     .L0045A3C8
/* 0045A2C0 ADEE0000 */   sw    $t6, ($t7)
/* 0045A2C4 8CF90000 */  lw    $t9, ($a3)
.L0045A2C8:
/* 0045A2C8 8F020000 */  lw    $v0, ($t8)
/* 0045A2CC 8F230000 */  lw    $v1, ($t9)
/* 0045A2D0 0043082A */  slt   $at, $v0, $v1
/* 0045A2D4 50200010 */  beql  $at, $zero, .L0045A318
/* 0045A2D8 0062082A */   slt   $at, $v1, $v0
/* 0045A2DC 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 0045A2E0 24040008 */  li    $a0, 8
/* 0045A2E4 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 0045A2E8 0320F809 */  jalr  $t9
/* 0045A2EC AFA60034 */   sw    $a2, 0x34($sp)
/* 0045A2F0 8FA80030 */  lw    $t0, 0x30($sp)
/* 0045A2F4 8FA60034 */  lw    $a2, 0x34($sp)
/* 0045A2F8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0045A2FC AC480000 */  sw    $t0, ($v0)
/* 0045A300 8CC90000 */  lw    $t1, ($a2)
/* 0045A304 24040001 */  li    $a0, 1
/* 0045A308 AC490004 */  sw    $t1, 4($v0)
/* 0045A30C 1000002E */  b     .L0045A3C8
/* 0045A310 ACC20000 */   sw    $v0, ($a2)
/* 0045A314 0062082A */  slt   $at, $v1, $v0
.L0045A318:
/* 0045A318 1020002B */  beqz  $at, .L0045A3C8
/* 0045A31C 00002025 */   move  $a0, $zero
/* 0045A320 8CE30004 */  lw    $v1, 4($a3)
/* 0045A324 00E03025 */  move  $a2, $a3
/* 0045A328 24040008 */  li    $a0, 8
/* 0045A32C 1060000F */  beqz  $v1, .L0045A36C
/* 0045A330 00000000 */   nop   
/* 0045A334 8C6A0000 */  lw    $t2, ($v1)
/* 0045A338 8D4B0000 */  lw    $t3, ($t2)
/* 0045A33C 0162082A */  slt   $at, $t3, $v0
/* 0045A340 1020000A */  beqz  $at, .L0045A36C
/* 0045A344 00000000 */   nop   
/* 0045A348 8C630004 */  lw    $v1, 4($v1)
.L0045A34C:
/* 0045A34C 8CC60004 */  lw    $a2, 4($a2)
/* 0045A350 10600006 */  beqz  $v1, .L0045A36C
/* 0045A354 00000000 */   nop   
/* 0045A358 8C6C0000 */  lw    $t4, ($v1)
/* 0045A35C 8D8D0000 */  lw    $t5, ($t4)
/* 0045A360 01A2082A */  slt   $at, $t5, $v0
/* 0045A364 5420FFF9 */  bnezl $at, .L0045A34C
/* 0045A368 8C630004 */   lw    $v1, 4($v1)
.L0045A36C:
/* 0045A36C 10600006 */  beqz  $v1, .L0045A388
/* 0045A370 00000000 */   nop   
/* 0045A374 8C6E0000 */  lw    $t6, ($v1)
/* 0045A378 8DCF0000 */  lw    $t7, ($t6)
/* 0045A37C 004F082A */  slt   $at, $v0, $t7
/* 0045A380 1020000F */  beqz  $at, .L0045A3C0
/* 0045A384 00000000 */   nop   
.L0045A388:
/* 0045A388 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 0045A38C 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 0045A390 AFA30028 */  sw    $v1, 0x28($sp)
/* 0045A394 0320F809 */  jalr  $t9
/* 0045A398 AFA60024 */   sw    $a2, 0x24($sp)
/* 0045A39C 8FA30028 */  lw    $v1, 0x28($sp)
/* 0045A3A0 8FA60024 */  lw    $a2, 0x24($sp)
/* 0045A3A4 8FB80030 */  lw    $t8, 0x30($sp)
/* 0045A3A8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0045A3AC AC430004 */  sw    $v1, 4($v0)
/* 0045A3B0 AC580000 */  sw    $t8, ($v0)
/* 0045A3B4 24040001 */  li    $a0, 1
/* 0045A3B8 10000003 */  b     .L0045A3C8
/* 0045A3BC ACC20004 */   sw    $v0, 4($a2)
.L0045A3C0:
/* 0045A3C0 10000001 */  b     .L0045A3C8
/* 0045A3C4 00002025 */   move  $a0, $zero
.L0045A3C8:
/* 0045A3C8 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0045A3CC 27BD0030 */  addiu $sp, $sp, 0x30
/* 0045A3D0 00801025 */  move  $v0, $a0
/* 0045A3D4 03E00008 */  jr    $ra
/* 0045A3D8 00000000 */   nop   
    .type insertcallee, @function
    .size insertcallee, .-insertcallee
    .end insertcallee

glabel check_gp_relative
    .ent check_gp_relative
    # 0045A480 oneinstruction
/* 0045A3DC 3C1C0FBC */  .cpload $t9
/* 0045A3E0 279CFEB4 */  
/* 0045A3E4 0399E021 */  
/* 0045A3E8 8F8E8B00 */  lw     $t6, %got(o3opt)($gp)
/* 0045A3EC 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0045A3F0 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0045A3F4 91CE0000 */  lbu   $t6, ($t6)
/* 0045A3F8 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0045A3FC 11C0000E */  beqz  $t6, .L0045A438
/* 0045A400 00000000 */   nop   
/* 0045A404 8F838DA4 */  lw     $v1, %got(u)($gp)
/* 0045A408 24010002 */  li    $at, 2
/* 0045A40C 946F0002 */  lhu   $t7, 2($v1)
/* 0045A410 000FC102 */  srl   $t8, $t7, 4
/* 0045A414 3319000F */  andi  $t9, $t8, 0xf
/* 0045A418 57210016 */  bnel  $t9, $at, .L0045A474
/* 0045A41C 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0045A420 8F998460 */  lw    $t9, %call16(enter_gp_rel_tab)($gp)
/* 0045A424 8C640004 */  lw    $a0, 4($v1)
/* 0045A428 0320F809 */  jalr  $t9
/* 0045A42C 00000000 */   nop   
/* 0045A430 1000000F */  b     .L0045A470
/* 0045A434 8FBC0018 */   lw    $gp, 0x18($sp)
.L0045A438:
/* 0045A438 8F838DA4 */  lw     $v1, %got(u)($gp)
/* 0045A43C 8C620008 */  lw    $v0, 8($v1)
/* 0045A440 5040000C */  beql  $v0, $zero, .L0045A474
/* 0045A444 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0045A448 8F888B30 */  lw     $t0, %got(g_num)($gp)
/* 0045A44C 8D080000 */  lw    $t0, ($t0)
/* 0045A450 0102082A */  slt   $at, $t0, $v0
/* 0045A454 54200007 */  bnezl $at, .L0045A474
/* 0045A458 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0045A45C 8F998460 */  lw    $t9, %call16(enter_gp_rel_tab)($gp)
/* 0045A460 8C640004 */  lw    $a0, 4($v1)
/* 0045A464 0320F809 */  jalr  $t9
/* 0045A468 00000000 */   nop   
/* 0045A46C 8FBC0018 */  lw    $gp, 0x18($sp)
.L0045A470:
/* 0045A470 8FBF001C */  lw    $ra, 0x1c($sp)
.L0045A474:
/* 0045A474 27BD0020 */  addiu $sp, $sp, 0x20
/* 0045A478 03E00008 */  jr    $ra
/* 0045A47C 00000000 */   nop   
    .type check_gp_relative, @function
    .size check_gp_relative, .-check_gp_relative
    .end check_gp_relative

glabel oneinstruction
    .ent oneinstruction
    # 0045B508 oneprocprepass
    # 0045C150 prepass
/* 0045A480 3C1C0FBC */  .cpload $t9
/* 0045A484 279CFE10 */  
/* 0045A488 0399E021 */  
/* 0045A48C 8F8A8DA4 */  lw     $t2, %got(u)($gp)
/* 0045A490 27BDFFA0 */  addiu $sp, $sp, -0x60
/* 0045A494 AFBF002C */  sw    $ra, 0x2c($sp)
/* 0045A498 91480000 */  lbu   $t0, ($t2)
/* 0045A49C AFBC0028 */  sw    $gp, 0x28($sp)
/* 0045A4A0 01001025 */  move  $v0, $t0
/* 0045A4A4 2C410054 */  sltiu $at, $v0, 0x54
/* 0045A4A8 1420038E */  bnez  $at, .L0045B2E4
/* 0045A4AC 2C410086 */   sltiu $at, $v0, 0x86
/* 0045A4B0 1420037C */  bnez  $at, .L0045B2A4
/* 0045A4B4 2C41008D */   sltiu $at, $v0, 0x8d
/* 0045A4B8 142003D6 */  bnez  $at, .L0045B414
/* 0045A4BC 2459FF75 */   addiu $t9, $v0, -0x8b
/* 0045A4C0 244EFF69 */  addiu $t6, $v0, -0x97
/* 0045A4C4 2DC10002 */  sltiu $at, $t6, 2
/* 0045A4C8 50200367 */  beql  $at, $zero, .L0045B268
/* 0045A4CC 24010036 */   li    $at, 54
/* 0045A4D0 8F818044 */  lw    $at, %got(jtbl_1000D3D4)($gp)
/* 0045A4D4 000E7080 */  sll   $t6, $t6, 2
/* 0045A4D8 002E0821 */  addu  $at, $at, $t6
/* 0045A4DC 8C2ED3D4 */  lw    $t6, %lo(jtbl_1000D3D4)($at)
/* 0045A4E0 01DC7021 */  addu  $t6, $t6, $gp
/* 0045A4E4 01C00008 */  jr    $t6
/* 0045A4E8 00000000 */   nop   
.L0045A4EC:
/* 0045A4EC 8D4F0008 */  lw    $t7, 8($t2)
/* 0045A4F0 24010007 */  li    $at, 7
/* 0045A4F4 15E10005 */  bne   $t7, $at, .L0045A50C
/* 0045A4F8 00000000 */   nop   
/* 0045A4FC 8D58000C */  lw    $t8, 0xc($t2)
/* 0045A500 2401000A */  li    $at, 10
/* 0045A504 13010001 */  beq   $t8, $at, .L0045A50C
/* 0045A508 00000000 */   nop   
.L0045A50C:
/* 0045A50C 100003CB */  b     .L0045B43C
/* 0045A510 2503FFE0 */   addiu $v1, $t0, -0x20
.L0045A514:
/* 0045A514 8D430004 */  lw    $v1, 4($t2)
/* 0045A518 24010001 */  li    $at, 1
/* 0045A51C 14610028 */  bne   $v1, $at, .L0045A5C0
/* 0045A520 00000000 */   nop   
/* 0045A524 93B9005A */  lbu   $t9, 0x5a($sp)
/* 0045A528 8F828B6C */  lw     $v0, %got(curproc)($gp)
/* 0045A52C 24061F40 */  li    $a2, 8000
/* 0045A530 332CFFF8 */  andi  $t4, $t9, 0xfff8
/* 0045A534 8C420000 */  lw    $v0, ($v0)
/* 0045A538 358D0002 */  ori   $t5, $t4, 2
/* 0045A53C A3AD005A */  sb    $t5, 0x5a($sp)
/* 0045A540 8FAF0058 */  lw    $t7, 0x58($sp)
/* 0045A544 8C4E0000 */  lw    $t6, ($v0)
/* 0045A548 24070008 */  li    $a3, 8
/* 0045A54C 000FC2C2 */  srl   $t8, $t7, 0xb
/* 0045A550 01D8C826 */  xor   $t9, $t6, $t8
/* 0045A554 8D4E0008 */  lw    $t6, 8($t2)
/* 0045A558 001962C0 */  sll   $t4, $t9, 0xb
/* 0045A55C 018F6826 */  xor   $t5, $t4, $t7
/* 0045A560 AFAD0058 */  sw    $t5, 0x58($sp)
/* 0045A564 27B80054 */  addiu $t8, $sp, 0x54
/* 0045A568 AFAE0054 */  sw    $t6, 0x54($sp)
/* 0045A56C 8F040000 */  lw    $a0, ($t8)
/* 0045A570 8F998454 */  lw    $t9, %call16(insertvar)($gp)
/* 0045A574 240D0001 */  li    $t5, 1
/* 0045A578 AFA40000 */  sw    $a0, ($sp)
/* 0045A57C 8F050004 */  lw    $a1, 4($t8)
/* 0045A580 244F0004 */  addiu $t7, $v0, 4
/* 0045A584 AFAF0010 */  sw    $t7, 0x10($sp)
/* 0045A588 AFA0001C */  sw    $zero, 0x1c($sp)
/* 0045A58C AFAD0018 */  sw    $t5, 0x18($sp)
/* 0045A590 AFA00014 */  sw    $zero, 0x14($sp)
/* 0045A594 0320F809 */  jalr  $t9
/* 0045A598 AFA50004 */   sw    $a1, 4($sp)
/* 0045A59C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045A5A0 24090001 */  li    $t1, 1
/* 0045A5A4 8F8E8B6C */  lw     $t6, %got(curproc)($gp)
/* 0045A5A8 8F8A8DA4 */  lw     $t2, %got(u)($gp)
/* 0045A5AC 8DCE0000 */  lw    $t6, ($t6)
/* 0045A5B0 A1C9000B */  sb    $t1, 0xb($t6)
/* 0045A5B4 91480000 */  lbu   $t0, ($t2)
/* 0045A5B8 100003A0 */  b     .L0045B43C
/* 0045A5BC 2503FFE0 */   addiu $v1, $t0, -0x20
.L0045A5C0:
/* 0045A5C0 1460003E */  bnez  $v1, .L0045A6BC
/* 0045A5C4 00000000 */   nop   
/* 0045A5C8 8F988AE8 */  lw     $t8, %got(fortran_lang)($gp)
/* 0045A5CC 93180000 */  lbu   $t8, ($t8)
/* 0045A5D0 1700003A */  bnez  $t8, .L0045A6BC
/* 0045A5D4 00000000 */   nop   
/* 0045A5D8 8D420008 */  lw    $v0, 8($t2)
/* 0045A5DC 2459FFFF */  addiu $t9, $v0, -1
/* 0045A5E0 2F210007 */  sltiu $at, $t9, 7
/* 0045A5E4 1020002A */  beqz  $at, .L0045A690
/* 0045A5E8 00000000 */   nop   
/* 0045A5EC 8F818044 */  lw    $at, %got(jtbl_1000D2CC)($gp)
/* 0045A5F0 0019C880 */  sll   $t9, $t9, 2
/* 0045A5F4 00390821 */  addu  $at, $at, $t9
/* 0045A5F8 8C39D2CC */  lw    $t9, %lo(jtbl_1000D2CC)($at)
/* 0045A5FC 033CC821 */  addu  $t9, $t9, $gp
/* 0045A600 03200008 */  jr    $t9
/* 0045A604 00000000 */   nop   
.L0045A608:
/* 0045A608 8F818A5C */  lw     $at, %got(lang)($gp)
/* 0045A60C 2503FFE0 */  addiu $v1, $t0, -0x20
/* 0045A610 1000038A */  b     .L0045B43C
/* 0045A614 A0200000 */   sb    $zero, ($at)
.L0045A618:
/* 0045A618 8F818A5C */  lw     $at, %got(lang)($gp)
/* 0045A61C 24090001 */  li    $t1, 1
/* 0045A620 2503FFE0 */  addiu $v1, $t0, -0x20
/* 0045A624 10000385 */  b     .L0045B43C
/* 0045A628 A0290000 */   sb    $t1, ($at)
.L0045A62C:
/* 0045A62C 8F818A5C */  lw     $at, %got(lang)($gp)
/* 0045A630 24050002 */  li    $a1, 2
/* 0045A634 2503FFE0 */  addiu $v1, $t0, -0x20
/* 0045A638 10000380 */  b     .L0045B43C
/* 0045A63C A0250000 */   sb    $a1, ($at)
.L0045A640:
/* 0045A640 8F818A5C */  lw     $at, %got(lang)($gp)
/* 0045A644 240B0003 */  li    $t3, 3
/* 0045A648 2503FFE0 */  addiu $v1, $t0, -0x20
/* 0045A64C 1000037B */  b     .L0045B43C
/* 0045A650 A02B0000 */   sb    $t3, ($at)
.L0045A654:
/* 0045A654 8F818A5C */  lw     $at, %got(lang)($gp)
/* 0045A658 240C0004 */  li    $t4, 4
/* 0045A65C 2503FFE0 */  addiu $v1, $t0, -0x20
/* 0045A660 10000376 */  b     .L0045B43C
/* 0045A664 A02C0000 */   sb    $t4, ($at)
.L0045A668:
/* 0045A668 8F818A5C */  lw     $at, %got(lang)($gp)
/* 0045A66C 240F0005 */  li    $t7, 5
/* 0045A670 2503FFE0 */  addiu $v1, $t0, -0x20
/* 0045A674 10000371 */  b     .L0045B43C
/* 0045A678 A02F0000 */   sb    $t7, ($at)
.L0045A67C:
/* 0045A67C 8F818A5C */  lw     $at, %got(lang)($gp)
/* 0045A680 240D0006 */  li    $t5, 6
/* 0045A684 2503FFE0 */  addiu $v1, $t0, -0x20
/* 0045A688 1000036C */  b     .L0045B43C
/* 0045A68C A02D0000 */   sb    $t5, ($at)
.L0045A690:
/* 0045A690 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 0045A694 8F868044 */  lw    $a2, %got(RO_1000D2C1)($gp)
/* 0045A698 24040001 */  li    $a0, 1
/* 0045A69C 24050293 */  li    $a1, 659
/* 0045A6A0 2407000A */  li    $a3, 10
/* 0045A6A4 AFA8003C */  sw    $t0, 0x3c($sp)
/* 0045A6A8 0320F809 */  jalr  $t9
/* 0045A6AC 24C6D2C1 */   addiu $a2, %lo(RO_1000D2C1) # addiu $a2, $a2, -0x2d3f
/* 0045A6B0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045A6B4 8FA8003C */  lw    $t0, 0x3c($sp)
/* 0045A6B8 8F8A8DA4 */  lw     $t2, %got(u)($gp)
.L0045A6BC:
/* 0045A6BC 1000035F */  b     .L0045B43C
/* 0045A6C0 2503FFE0 */   addiu $v1, $t0, -0x20
.L0045A6C4:
/* 0045A6C4 93AE005A */  lbu   $t6, 0x5a($sp)
/* 0045A6C8 8D4C0004 */  lw    $t4, 4($t2)
/* 0045A6CC 8F828A5C */  lw     $v0, %got(lang)($gp)
/* 0045A6D0 31D8FFF8 */  andi  $t8, $t6, 0xfff8
/* 0045A6D4 37190004 */  ori   $t9, $t8, 4
/* 0045A6D8 A3B9005A */  sb    $t9, 0x5a($sp)
/* 0045A6DC 8FAF0058 */  lw    $t7, 0x58($sp)
/* 0045A6E0 90420000 */  lbu   $v0, ($v0)
/* 0045A6E4 24090001 */  li    $t1, 1
/* 0045A6E8 000F6AC2 */  srl   $t5, $t7, 0xb
/* 0045A6EC 018D7026 */  xor   $t6, $t4, $t5
/* 0045A6F0 000EC2C0 */  sll   $t8, $t6, 0xb
/* 0045A6F4 030FC826 */  xor   $t9, $t8, $t7
/* 0045A6F8 AFB90058 */  sw    $t9, 0x58($sp)
/* 0045A6FC 11220007 */  beq   $t1, $v0, .L0045A71C
/* 0045A700 AFA00054 */   sw    $zero, 0x54($sp)
/* 0045A704 14400013 */  bnez  $v0, .L0045A754
/* 0045A708 27B90054 */   addiu $t9, $sp, 0x54
/* 0045A70C 8F8C8AE4 */  lw     $t4, %got(nopalias)($gp)
/* 0045A710 918C0000 */  lbu   $t4, ($t4)
/* 0045A714 51800010 */  beql  $t4, $zero, .L0045A758
/* 0045A718 8F240000 */   lw    $a0, ($t9)
.L0045A71C:
/* 0045A71C 8F8D8AE0 */  lw     $t5, %got(nof77alias)($gp)
/* 0045A720 27AE0054 */  addiu $t6, $sp, 0x54
/* 0045A724 91AD0000 */  lbu   $t5, ($t5)
/* 0045A728 15A00013 */  bnez  $t5, .L0045A778
/* 0045A72C 00000000 */   nop   
/* 0045A730 8DC40000 */  lw    $a0, ($t6)
/* 0045A734 8F998464 */  lw    $t9, %call16(insertlda)($gp)
/* 0045A738 8D460008 */  lw    $a2, 8($t2)
/* 0045A73C AFA40000 */  sw    $a0, ($sp)
/* 0045A740 8DC50004 */  lw    $a1, 4($t6)
/* 0045A744 0320F809 */  jalr  $t9
/* 0045A748 AFA50004 */   sw    $a1, 4($sp)
/* 0045A74C 1000000A */  b     .L0045A778
/* 0045A750 8FBC0028 */   lw    $gp, 0x28($sp)
.L0045A754:
/* 0045A754 8F240000 */  lw    $a0, ($t9)
.L0045A758:
/* 0045A758 8D460008 */  lw    $a2, 8($t2)
/* 0045A75C AFA40000 */  sw    $a0, ($sp)
/* 0045A760 8F250004 */  lw    $a1, 4($t9)
/* 0045A764 8F998464 */  lw    $t9, %call16(insertlda)($gp)
/* 0045A768 AFA50004 */  sw    $a1, 4($sp)
/* 0045A76C 0320F809 */  jalr  $t9
/* 0045A770 00000000 */   nop   
/* 0045A774 8FBC0028 */  lw    $gp, 0x28($sp)
.L0045A778:
/* 0045A778 8F99846C */  lw    $t9, %call16(check_gp_relative)($gp)
/* 0045A77C 0320F809 */  jalr  $t9
/* 0045A780 00000000 */   nop   
/* 0045A784 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045A788 8F8A8DA4 */  lw     $t2, %got(u)($gp)
/* 0045A78C 91480000 */  lbu   $t0, ($t2)
/* 0045A790 1000032A */  b     .L0045B43C
/* 0045A794 2503FFE0 */   addiu $v1, $t0, -0x20
.L0045A798:
/* 0045A798 8F99846C */  lw    $t9, %call16(check_gp_relative)($gp)
/* 0045A79C 0320F809 */  jalr  $t9
/* 0045A7A0 00000000 */   nop   
/* 0045A7A4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045A7A8 8F8A8DA4 */  lw     $t2, %got(u)($gp)
/* 0045A7AC 91480000 */  lbu   $t0, ($t2)
/* 0045A7B0 10000322 */  b     .L0045B43C
/* 0045A7B4 2503FFE0 */   addiu $v1, $t0, -0x20
.L0045A7B8:
/* 0045A7B8 8F998458 */  lw    $t9, %call16(enterfsymtab)($gp)
/* 0045A7BC 8D440004 */  lw    $a0, 4($t2)
/* 0045A7C0 0320F809 */  jalr  $t9
/* 0045A7C4 00000000 */   nop   
/* 0045A7C8 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045A7CC 8F99846C */  lw    $t9, %call16(check_gp_relative)($gp)
/* 0045A7D0 0320F809 */  jalr  $t9
/* 0045A7D4 00000000 */   nop   
/* 0045A7D8 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045A7DC 8F8A8DA4 */  lw     $t2, %got(u)($gp)
/* 0045A7E0 91480000 */  lbu   $t0, ($t2)
/* 0045A7E4 10000315 */  b     .L0045B43C
/* 0045A7E8 2503FFE0 */   addiu $v1, $t0, -0x20
.L0045A7EC:
/* 0045A7EC 93AE005A */  lbu   $t6, 0x5a($sp)
/* 0045A7F0 8D590004 */  lw    $t9, 4($t2)
/* 0045A7F4 8D460008 */  lw    $a2, 8($t2)
/* 0045A7F8 31D8FFF8 */  andi  $t8, $t6, 0xfff8
/* 0045A7FC 370F0004 */  ori   $t7, $t8, 4
/* 0045A800 A3AF005A */  sb    $t7, 0x5a($sp)
/* 0045A804 8FAC0058 */  lw    $t4, 0x58($sp)
/* 0045A808 AFA00054 */  sw    $zero, 0x54($sp)
/* 0045A80C 000C6AC2 */  srl   $t5, $t4, 0xb
/* 0045A810 032D7026 */  xor   $t6, $t9, $t5
/* 0045A814 000EC2C0 */  sll   $t8, $t6, 0xb
/* 0045A818 030C7826 */  xor   $t7, $t8, $t4
/* 0045A81C 14C0000D */  bnez  $a2, .L0045A854
/* 0045A820 AFAF0058 */   sw    $t7, 0x58($sp)
/* 0045A824 27B90054 */  addiu $t9, $sp, 0x54
/* 0045A828 8F240000 */  lw    $a0, ($t9)
/* 0045A82C 3C067FFF */  lui   $a2, 0x7fff
/* 0045A830 34C6FFFF */  ori   $a2, $a2, 0xffff
/* 0045A834 AFA40000 */  sw    $a0, ($sp)
/* 0045A838 8F250004 */  lw    $a1, 4($t9)
/* 0045A83C 8F998464 */  lw    $t9, %call16(insertlda)($gp)
/* 0045A840 AFA50004 */  sw    $a1, 4($sp)
/* 0045A844 0320F809 */  jalr  $t9
/* 0045A848 00000000 */   nop   
/* 0045A84C 10000009 */  b     .L0045A874
/* 0045A850 8FBC0028 */   lw    $gp, 0x28($sp)
.L0045A854:
/* 0045A854 27B80054 */  addiu $t8, $sp, 0x54
/* 0045A858 8F040000 */  lw    $a0, ($t8)
/* 0045A85C 8F998464 */  lw    $t9, %call16(insertlda)($gp)
/* 0045A860 AFA40000 */  sw    $a0, ($sp)
/* 0045A864 8F050004 */  lw    $a1, 4($t8)
/* 0045A868 0320F809 */  jalr  $t9
/* 0045A86C AFA50004 */   sw    $a1, 4($sp)
/* 0045A870 8FBC0028 */  lw    $gp, 0x28($sp)
.L0045A874:
/* 0045A874 8F99846C */  lw    $t9, %call16(check_gp_relative)($gp)
/* 0045A878 0320F809 */  jalr  $t9
/* 0045A87C 00000000 */   nop   
/* 0045A880 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045A884 8F8A8DA4 */  lw     $t2, %got(u)($gp)
/* 0045A888 91480000 */  lbu   $t0, ($t2)
/* 0045A88C 100002EB */  b     .L0045B43C
/* 0045A890 2503FFE0 */   addiu $v1, $t0, -0x20
.L0045A894:
/* 0045A894 8F838B00 */  lw     $v1, %got(o3opt)($gp)
/* 0045A898 90790000 */  lbu   $t9, ($v1)
/* 0045A89C 17200010 */  bnez  $t9, .L0045A8E0
/* 0045A8A0 00000000 */   nop   
/* 0045A8A4 8D460008 */  lw    $a2, 8($t2)
/* 0045A8A8 10C0000D */  beqz  $a2, .L0045A8E0
/* 0045A8AC 00000000 */   nop   
/* 0045A8B0 8F8D8B30 */  lw     $t5, %got(g_num)($gp)
/* 0045A8B4 8DAD0000 */  lw    $t5, ($t5)
/* 0045A8B8 01A6082A */  slt   $at, $t5, $a2
/* 0045A8BC 14200008 */  bnez  $at, .L0045A8E0
/* 0045A8C0 00000000 */   nop   
/* 0045A8C4 8F998460 */  lw    $t9, %call16(enter_gp_rel_tab)($gp)
/* 0045A8C8 8D440004 */  lw    $a0, 4($t2)
/* 0045A8CC 0320F809 */  jalr  $t9
/* 0045A8D0 00000000 */   nop   
/* 0045A8D4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045A8D8 8F8A8DA4 */  lw     $t2, %got(u)($gp)
/* 0045A8DC 91480000 */  lbu   $t0, ($t2)
.L0045A8E0:
/* 0045A8E0 100002D6 */  b     .L0045B43C
/* 0045A8E4 2503FFE0 */   addiu $v1, $t0, -0x20
.L0045A8E8:
/* 0045A8E8 100002D4 */  b     .L0045B43C
/* 0045A8EC 2503FFE0 */   addiu $v1, $t0, -0x20
.L0045A8F0:
/* 0045A8F0 91430001 */  lbu   $v1, 1($t2)
/* 0045A8F4 93AC005A */  lbu   $t4, 0x5a($sp)
/* 0045A8F8 8D460008 */  lw    $a2, 8($t2)
/* 0045A8FC 00037600 */  sll   $t6, $v1, 0x18
/* 0045A900 000C7F40 */  sll   $t7, $t4, 0x1d
/* 0045A904 000FCF42 */  srl   $t9, $t7, 0x1d
/* 0045A908 000EC742 */  srl   $t8, $t6, 0x1d
/* 0045A90C 03196826 */  xor   $t5, $t8, $t9
/* 0045A910 31AE0007 */  andi  $t6, $t5, 7
/* 0045A914 01CC7826 */  xor   $t7, $t6, $t4
/* 0045A918 A3AF005A */  sb    $t7, 0x5a($sp)
/* 0045A91C 8FB90058 */  lw    $t9, 0x58($sp)
/* 0045A920 8D580004 */  lw    $t8, 4($t2)
/* 0045A924 3067001F */  andi  $a3, $v1, 0x1f
/* 0045A928 00196AC2 */  srl   $t5, $t9, 0xb
/* 0045A92C 030D7026 */  xor   $t6, $t8, $t5
/* 0045A930 8D58000C */  lw    $t8, 0xc($t2)
/* 0045A934 000E62C0 */  sll   $t4, $t6, 0xb
/* 0045A938 01997826 */  xor   $t7, $t4, $t9
/* 0045A93C 8F998B6C */  lw     $t9, %got(curproc)($gp)
/* 0045A940 AFAF0058 */  sw    $t7, 0x58($sp)
/* 0045A944 27AD0054 */  addiu $t5, $sp, 0x54
/* 0045A948 AFB80054 */  sw    $t8, 0x54($sp)
/* 0045A94C 8DA40000 */  lw    $a0, ($t5)
/* 0045A950 8F390000 */  lw    $t9, ($t9)
/* 0045A954 24180001 */  li    $t8, 1
/* 0045A958 AFA40000 */  sw    $a0, ($sp)
/* 0045A95C 8DA50004 */  lw    $a1, 4($t5)
/* 0045A960 272F0004 */  addiu $t7, $t9, 4
/* 0045A964 8F998454 */  lw    $t9, %call16(insertvar)($gp)
/* 0045A968 AFAF0010 */  sw    $t7, 0x10($sp)
/* 0045A96C AFB8001C */  sw    $t8, 0x1c($sp)
/* 0045A970 AFA00018 */  sw    $zero, 0x18($sp)
/* 0045A974 AFA00014 */  sw    $zero, 0x14($sp)
/* 0045A978 0320F809 */  jalr  $t9
/* 0045A97C AFA50004 */   sw    $a1, 4($sp)
/* 0045A980 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045A984 8F8A8DA4 */  lw     $t2, %got(u)($gp)
/* 0045A988 91480000 */  lbu   $t0, ($t2)
/* 0045A98C 100002AB */  b     .L0045B43C
/* 0045A990 2503FFE0 */   addiu $v1, $t0, -0x20
.L0045A994:
/* 0045A994 91430001 */  lbu   $v1, 1($t2)
/* 0045A998 93AD005A */  lbu   $t5, 0x5a($sp)
/* 0045A99C 240B0003 */  li    $t3, 3
/* 0045A9A0 00034E00 */  sll   $t1, $v1, 0x18
/* 0045A9A4 000D7740 */  sll   $t6, $t5, 0x1d
/* 0045A9A8 000E6742 */  srl   $t4, $t6, 0x1d
/* 0045A9AC 00094F42 */  srl   $t1, $t1, 0x1d
/* 0045A9B0 012CC826 */  xor   $t9, $t1, $t4
/* 0045A9B4 332F0007 */  andi  $t7, $t9, 7
/* 0045A9B8 01EDC026 */  xor   $t8, $t7, $t5
/* 0045A9BC A3B8005A */  sb    $t8, 0x5a($sp)
/* 0045A9C0 8FAC0058 */  lw    $t4, 0x58($sp)
/* 0045A9C4 8D4E0004 */  lw    $t6, 4($t2)
/* 0045A9C8 3067001F */  andi  $a3, $v1, 0x1f
/* 0045A9CC 000CCAC2 */  srl   $t9, $t4, 0xb
/* 0045A9D0 01D97826 */  xor   $t7, $t6, $t9
/* 0045A9D4 000F6AC0 */  sll   $t5, $t7, 0xb
/* 0045A9D8 01ACC026 */  xor   $t8, $t5, $t4
/* 0045A9DC AFB80058 */  sw    $t8, 0x58($sp)
/* 0045A9E0 93B9005A */  lbu   $t9, 0x5a($sp)
/* 0045A9E4 8D4E000C */  lw    $t6, 0xc($t2)
/* 0045A9E8 27AC0054 */  addiu $t4, $sp, 0x54
/* 0045A9EC 332F0007 */  andi  $t7, $t9, 7
/* 0045A9F0 156F0003 */  bne   $t3, $t7, .L0045AA00
/* 0045A9F4 AFAE0054 */   sw    $t6, 0x54($sp)
/* 0045A9F8 330D07FF */  andi  $t5, $t8, 0x7ff
/* 0045A9FC AFAD0058 */  sw    $t5, 0x58($sp)
.L0045AA00:
/* 0045AA00 95420002 */  lhu   $v0, 2($t2)
/* 0045AA04 250DFFE0 */  addiu $t5, $t0, -0x20
/* 0045AA08 30420001 */  andi  $v0, $v0, 1
/* 0045AA0C 0002102B */  sltu  $v0, $zero, $v0
/* 0045AA10 54400009 */  bnezl $v0, .L0045AA38
/* 0045AA14 8D990000 */   lw    $t9, ($t4)
/* 0045AA18 8F848C54 */  lw     $a0, %got(in_exception_block)($gp)
/* 0045AA1C 8C820000 */  lw    $v0, ($a0)
/* 0045AA20 0002102A */  slt   $v0, $zero, $v0
/* 0045AA24 50400004 */  beql  $v0, $zero, .L0045AA38
/* 0045AA28 8D990000 */   lw    $t9, ($t4)
/* 0045AA2C 01691026 */  xor   $v0, $t3, $t1
/* 0045AA30 0002102B */  sltu  $v0, $zero, $v0
/* 0045AA34 8D990000 */  lw    $t9, ($t4)
.L0045AA38:
/* 0045AA38 8F8F8B6C */  lw     $t7, %got(curproc)($gp)
/* 0045AA3C 8D460008 */  lw    $a2, 8($t2)
/* 0045AA40 AFB90000 */  sw    $t9, ($sp)
/* 0045AA44 8DEF0000 */  lw    $t7, ($t7)
/* 0045AA48 8D8E0004 */  lw    $t6, 4($t4)
/* 0045AA4C 2DAC0040 */  sltiu $t4, $t5, 0x40
/* 0045AA50 25F80004 */  addiu $t8, $t7, 4
/* 0045AA54 AFB80010 */  sw    $t8, 0x10($sp)
/* 0045AA58 11800009 */  beqz  $t4, .L0045AA80
/* 0045AA5C AFAE0004 */   sw    $t6, 4($sp)
/* 0045AA60 8F8F8044 */  lw    $t7, %got(D_10010D24)($gp)
/* 0045AA64 000D7143 */  sra   $t6, $t5, 5
/* 0045AA68 000EC880 */  sll   $t9, $t6, 2
/* 0045AA6C 25EF0D24 */  addiu $t7, %lo(D_10010D24) # addiu $t7, $t7, 0xd24
/* 0045AA70 01F9C021 */  addu  $t8, $t7, $t9
/* 0045AA74 8F0E0000 */  lw    $t6, ($t8)
/* 0045AA78 01AE7804 */  sllv  $t7, $t6, $t5
/* 0045AA7C 29EC0000 */  slti  $t4, $t7, 0
.L0045AA80:
/* 0045AA80 8F998454 */  lw    $t9, %call16(insertvar)($gp)
/* 0045AA84 0169C026 */  xor   $t8, $t3, $t1
/* 0045AA88 2F180001 */  sltiu $t8, $t8, 1
/* 0045AA8C AFB8001C */  sw    $t8, 0x1c($sp)
/* 0045AA90 AFAC0014 */  sw    $t4, 0x14($sp)
/* 0045AA94 AFA20018 */  sw    $v0, 0x18($sp)
/* 0045AA98 8FA40000 */  lw    $a0, ($sp)
/* 0045AA9C 0320F809 */  jalr  $t9
/* 0045AAA0 8FA50004 */   lw    $a1, 4($sp)
/* 0045AAA4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045AAA8 8F8A8DA4 */  lw     $t2, %got(u)($gp)
/* 0045AAAC 91480000 */  lbu   $t0, ($t2)
/* 0045AAB0 2503FFE0 */  addiu $v1, $t0, -0x20
/* 0045AAB4 2C6E0040 */  sltiu $t6, $v1, 0x40
/* 0045AAB8 11C00009 */  beqz  $t6, .L0045AAE0
/* 0045AABC 00000000 */   nop   
/* 0045AAC0 8F998044 */  lw    $t9, %got(D_10010D24)($gp)
/* 0045AAC4 00036943 */  sra   $t5, $v1, 5
/* 0045AAC8 000D7880 */  sll   $t7, $t5, 2
/* 0045AACC 27390D24 */  addiu $t9, %lo(D_10010D24) # addiu $t9, $t9, 0xd24
/* 0045AAD0 032F6021 */  addu  $t4, $t9, $t7
/* 0045AAD4 8D980000 */  lw    $t8, ($t4)
/* 0045AAD8 00786804 */  sllv  $t5, $t8, $v1
/* 0045AADC 29AE0000 */  slti  $t6, $t5, 0
.L0045AAE0:
/* 0045AAE0 51C00257 */  beql  $t6, $zero, .L0045B440
/* 0045AAE4 2C6C0080 */   sltiu $t4, $v1, 0x80
/* 0045AAE8 8F828B6C */  lw     $v0, %got(curproc)($gp)
/* 0045AAEC 8C420000 */  lw    $v0, ($v0)
/* 0045AAF0 8C4F0020 */  lw    $t7, 0x20($v0)
/* 0045AAF4 25EC0001 */  addiu $t4, $t7, 1
/* 0045AAF8 10000250 */  b     .L0045B43C
/* 0045AAFC AC4C0020 */   sw    $t4, 0x20($v0)
.L0045AB00:
/* 0045AB00 93B8005A */  lbu   $t8, 0x5a($sp)
/* 0045AB04 390E0048 */  xori  $t6, $t0, 0x48
/* 0045AB08 2DCE0001 */  sltiu $t6, $t6, 1
/* 0045AB0C 330DFFF8 */  andi  $t5, $t8, 0xfff8
/* 0045AB10 35B90003 */  ori   $t9, $t5, 3
/* 0045AB14 A3B9005A */  sb    $t9, 0x5a($sp)
/* 0045AB18 8FAF0058 */  lw    $t7, 0x58($sp)
/* 0045AB1C 24060004 */  li    $a2, 4
/* 0045AB20 00003825 */  move  $a3, $zero
/* 0045AB24 000F62C2 */  srl   $t4, $t7, 0xb
/* 0045AB28 01CCC026 */  xor   $t8, $t6, $t4
/* 0045AB2C 00186AC0 */  sll   $t5, $t8, 0xb
/* 0045AB30 01AFC826 */  xor   $t9, $t5, $t7
/* 0045AB34 8F8F8B6C */  lw     $t7, %got(curproc)($gp)
/* 0045AB38 240E001D */  li    $t6, 29
/* 0045AB3C AFB90058 */  sw    $t9, 0x58($sp)
/* 0045AB40 AFAE0054 */  sw    $t6, 0x54($sp)
/* 0045AB44 27AC0054 */  addiu $t4, $sp, 0x54
/* 0045AB48 8D840000 */  lw    $a0, ($t4)
/* 0045AB4C 8DEF0000 */  lw    $t7, ($t7)
/* 0045AB50 240E0001 */  li    $t6, 1
/* 0045AB54 AFA40000 */  sw    $a0, ($sp)
/* 0045AB58 8D850004 */  lw    $a1, 4($t4)
/* 0045AB5C 25F90004 */  addiu $t9, $t7, 4
/* 0045AB60 AFB90010 */  sw    $t9, 0x10($sp)
/* 0045AB64 8F998454 */  lw    $t9, %call16(insertvar)($gp)
/* 0045AB68 240C0001 */  li    $t4, 1
/* 0045AB6C AFAC0018 */  sw    $t4, 0x18($sp)
/* 0045AB70 AFA0001C */  sw    $zero, 0x1c($sp)
/* 0045AB74 AFAE0014 */  sw    $t6, 0x14($sp)
/* 0045AB78 0320F809 */  jalr  $t9
/* 0045AB7C AFA50004 */   sw    $a1, 4($sp)
/* 0045AB80 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045AB84 8F8A8DA4 */  lw     $t2, %got(u)($gp)
/* 0045AB88 91480000 */  lbu   $t0, ($t2)
/* 0045AB8C 1000022B */  b     .L0045B43C
/* 0045AB90 2503FFE0 */   addiu $v1, $t0, -0x20
.L0045AB94:
/* 0045AB94 91580001 */  lbu   $t8, 1($t2)
.L0045AB98:
/* 0045AB98 93B9005A */  lbu   $t9, 0x5a($sp)
/* 0045AB9C 240B0003 */  li    $t3, 3
/* 0045ABA0 00186E00 */  sll   $t5, $t8, 0x18
/* 0045ABA4 00197740 */  sll   $t6, $t9, 0x1d
/* 0045ABA8 000E6742 */  srl   $t4, $t6, 0x1d
/* 0045ABAC 000D7F42 */  srl   $t7, $t5, 0x1d
/* 0045ABB0 01ECC026 */  xor   $t8, $t7, $t4
/* 0045ABB4 330D0007 */  andi  $t5, $t8, 7
/* 0045ABB8 01B97026 */  xor   $t6, $t5, $t9
/* 0045ABBC A3AE005A */  sb    $t6, 0x5a($sp)
/* 0045ABC0 8FAC0058 */  lw    $t4, 0x58($sp)
/* 0045ABC4 8D4F0004 */  lw    $t7, 4($t2)
/* 0045ABC8 000CC2C2 */  srl   $t8, $t4, 0xb
/* 0045ABCC 01F86826 */  xor   $t5, $t7, $t8
/* 0045ABD0 000DCAC0 */  sll   $t9, $t5, 0xb
/* 0045ABD4 032C7026 */  xor   $t6, $t9, $t4
/* 0045ABD8 AFAE0058 */  sw    $t6, 0x58($sp)
/* 0045ABDC 93B8005A */  lbu   $t8, 0x5a($sp)
/* 0045ABE0 8D4F0010 */  lw    $t7, 0x10($t2)
/* 0045ABE4 31D907FF */  andi  $t9, $t6, 0x7ff
/* 0045ABE8 330D0007 */  andi  $t5, $t8, 7
/* 0045ABEC 156D0002 */  bne   $t3, $t5, .L0045ABF8
/* 0045ABF0 AFAF0054 */   sw    $t7, 0x54($sp)
/* 0045ABF4 AFB90058 */  sw    $t9, 0x58($sp)
.L0045ABF8:
/* 0045ABF8 8F8C8A5C */  lw     $t4, %got(lang)($gp)
/* 0045ABFC 918C0000 */  lbu   $t4, ($t4)
/* 0045AC00 556C0016 */  bnel  $t3, $t4, .L0045AC5C
/* 0045AC04 27AC0054 */   addiu $t4, $sp, 0x54
/* 0045AC08 8D4F0008 */  lw    $t7, 8($t2)
/* 0045AC0C 25F80020 */  addiu $t8, $t7, 0x20
/* 0045AC10 2F0D0020 */  sltiu $t5, $t8, 0x20
/* 0045AC14 000D7023 */  negu  $t6, $t5
/* 0045AC18 31D90001 */  andi  $t9, $t6, 1
/* 0045AC1C 03196004 */  sllv  $t4, $t9, $t8
/* 0045AC20 0581000D */  bgez  $t4, .L0045AC58
/* 0045AC24 93AF005A */   lbu   $t7, 0x5a($sp)
/* 0045AC28 24090001 */  li    $t1, 1
/* 0045AC2C 31ED0007 */  andi  $t5, $t7, 7
/* 0045AC30 152D0007 */  bne   $t1, $t5, .L0045AC50
/* 0045AC34 3C187FFF */   lui   $t8, 0x7fff
/* 0045AC38 8D43000C */  lw    $v1, 0xc($t2)
/* 0045AC3C 240EFFFC */  li    $t6, -4
/* 0045AC40 01C3C823 */  subu  $t9, $t6, $v1
/* 0045AC44 AD590008 */  sw    $t9, 8($t2)
/* 0045AC48 10000003 */  b     .L0045AC58
/* 0045AC4C AFA30054 */   sw    $v1, 0x54($sp)
.L0045AC50:
/* 0045AC50 3718FFFF */  ori   $t8, $t8, 0xffff
/* 0045AC54 AD580008 */  sw    $t8, 8($t2)
.L0045AC58:
/* 0045AC58 27AC0054 */  addiu $t4, $sp, 0x54
.L0045AC5C:
/* 0045AC5C 8D840000 */  lw    $a0, ($t4)
/* 0045AC60 8F998464 */  lw    $t9, %call16(insertlda)($gp)
/* 0045AC64 8D460008 */  lw    $a2, 8($t2)
/* 0045AC68 AFA40000 */  sw    $a0, ($sp)
/* 0045AC6C 8D850004 */  lw    $a1, 4($t4)
/* 0045AC70 0320F809 */  jalr  $t9
/* 0045AC74 AFA50004 */   sw    $a1, 4($sp)
/* 0045AC78 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045AC7C 8F8A8DA4 */  lw     $t2, %got(u)($gp)
/* 0045AC80 91480000 */  lbu   $t0, ($t2)
/* 0045AC84 100001ED */  b     .L0045B43C
/* 0045AC88 2503FFE0 */   addiu $v1, $t0, -0x20
.L0045AC8C:
/* 0045AC8C 8F998434 */  lw    $t9, %call16(searchproc)($gp)
/* 0045AC90 8D440004 */  lw    $a0, 4($t2)
/* 0045AC94 95450002 */  lhu   $a1, 2($t2)
/* 0045AC98 0320F809 */  jalr  $t9
/* 0045AC9C 00000000 */   nop   
/* 0045ACA0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045ACA4 00402025 */  move  $a0, $v0
/* 0045ACA8 AFA2005C */  sw    $v0, 0x5c($sp)
/* 0045ACAC 8F858B6C */  lw     $a1, %got(curproc)($gp)
/* 0045ACB0 8F998468 */  lw    $t9, %call16(insertcallee)($gp)
/* 0045ACB4 8CA50000 */  lw    $a1, ($a1)
/* 0045ACB8 0320F809 */  jalr  $t9
/* 0045ACBC 24A50018 */   addiu $a1, $a1, 0x18
/* 0045ACC0 8FA6005C */  lw    $a2, 0x5c($sp)
/* 0045ACC4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045ACC8 90CE0008 */  lbu   $t6, 8($a2)
/* 0045ACCC 8F8A8DA4 */  lw     $t2, %got(u)($gp)
/* 0045ACD0 11C00005 */  beqz  $t6, .L0045ACE8
/* 0045ACD4 00000000 */   nop   
/* 0045ACD8 8F828B6C */  lw     $v0, %got(curproc)($gp)
/* 0045ACDC 8C420000 */  lw    $v0, ($v0)
/* 0045ACE0 54C20005 */  bnel  $a2, $v0, .L0045ACF8
/* 0045ACE4 8D43000C */   lw    $v1, 0xc($t2)
.L0045ACE8:
/* 0045ACE8 8F828B6C */  lw     $v0, %got(curproc)($gp)
/* 0045ACEC A0C0000C */  sb    $zero, 0xc($a2)
/* 0045ACF0 8C420000 */  lw    $v0, ($v0)
/* 0045ACF4 8D43000C */  lw    $v1, 0xc($t2)
.L0045ACF8:
/* 0045ACF8 30790001 */  andi  $t9, $v1, 1
/* 0045ACFC 5320000D */  beql  $t9, $zero, .L0045AD34
/* 0045AD00 30790010 */   andi  $t9, $v1, 0x10
/* 0045AD04 8F988A5C */  lw     $t8, %got(lang)($gp)
/* 0045AD08 3C016C00 */  lui   $at, 0x6c00
/* 0045AD0C 24090001 */  li    $t1, 1
/* 0045AD10 93180000 */  lbu   $t8, ($t8)
/* 0045AD14 2F0C0020 */  sltiu $t4, $t8, 0x20
/* 0045AD18 000C7823 */  negu  $t7, $t4
/* 0045AD1C 01E16824 */  and   $t5, $t7, $at
/* 0045AD20 030D7004 */  sllv  $t6, $t5, $t8
/* 0045AD24 05C30003 */  bgezl $t6, .L0045AD34
/* 0045AD28 30790010 */   andi  $t9, $v1, 0x10
/* 0045AD2C A0C9000E */  sb    $t1, 0xe($a2)
/* 0045AD30 30790010 */  andi  $t9, $v1, 0x10
.L0045AD34:
/* 0045AD34 13200002 */  beqz  $t9, .L0045AD40
/* 0045AD38 24090001 */   li    $t1, 1
/* 0045AD3C A049000F */  sb    $t1, 0xf($v0)
.L0045AD40:
/* 0045AD40 944C0012 */  lhu   $t4, 0x12($v0)
/* 0045AD44 91480000 */  lbu   $t0, ($t2)
/* 0045AD48 258F0001 */  addiu $t7, $t4, 1
/* 0045AD4C A44F0012 */  sh    $t7, 0x12($v0)
/* 0045AD50 100001BA */  b     .L0045B43C
/* 0045AD54 2503FFE0 */   addiu $v1, $t0, -0x20
.L0045AD58:
/* 0045AD58 8F858B6C */  lw     $a1, %got(curproc)($gp)
/* 0045AD5C 8F998468 */  lw    $t9, %call16(insertcallee)($gp)
/* 0045AD60 8F848B70 */  lw     $a0, %got(indirprocs)($gp)
/* 0045AD64 8CA50000 */  lw    $a1, ($a1)
/* 0045AD68 8C840000 */  lw    $a0, ($a0)
/* 0045AD6C 0320F809 */  jalr  $t9
/* 0045AD70 24A50018 */   addiu $a1, $a1, 0x18
/* 0045AD74 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045AD78 8F828B6C */  lw     $v0, %got(curproc)($gp)
/* 0045AD7C 8F8A8DA4 */  lw     $t2, %got(u)($gp)
/* 0045AD80 8C420000 */  lw    $v0, ($v0)
/* 0045AD84 91480000 */  lbu   $t0, ($t2)
/* 0045AD88 944D0012 */  lhu   $t5, 0x12($v0)
/* 0045AD8C 2503FFE0 */  addiu $v1, $t0, -0x20
/* 0045AD90 25B80001 */  addiu $t8, $t5, 1
/* 0045AD94 100001A9 */  b     .L0045B43C
/* 0045AD98 A4580012 */   sh    $t8, 0x12($v0)
.L0045AD9C:
/* 0045AD9C 8F828B6C */  lw     $v0, %got(curproc)($gp)
/* 0045ADA0 8F8C8A5C */  lw     $t4, %got(lang)($gp)
/* 0045ADA4 240B0003 */  li    $t3, 3
/* 0045ADA8 8C420000 */  lw    $v0, ($v0)
/* 0045ADAC 944E0012 */  lhu   $t6, 0x12($v0)
/* 0045ADB0 25D90001 */  addiu $t9, $t6, 1
/* 0045ADB4 A4590012 */  sh    $t9, 0x12($v0)
/* 0045ADB8 918C0000 */  lbu   $t4, ($t4)
/* 0045ADBC 556C0033 */  bnel  $t3, $t4, .L0045AE8C
/* 0045ADC0 95590002 */   lhu   $t9, 2($t2)
/* 0045ADC4 8F838B00 */  lw     $v1, %got(o3opt)($gp)
/* 0045ADC8 906F0000 */  lbu   $t7, ($v1)
/* 0045ADCC 51E0002F */  beql  $t7, $zero, .L0045AE8C
/* 0045ADD0 95590002 */   lhu   $t9, 2($t2)
/* 0045ADD4 954D0002 */  lhu   $t5, 2($t2)
/* 0045ADD8 31B80001 */  andi  $t8, $t5, 1
/* 0045ADDC 5300002B */  beql  $t8, $zero, .L0045AE8C
/* 0045ADE0 95590002 */   lhu   $t9, 2($t2)
/* 0045ADE4 A0600000 */  sb    $zero, ($v1)
/* 0045ADE8 8F998438 */  lw    $t9, %call16(change_to_o2)($gp)
/* 0045ADEC 8F848C4C */  lw     $a0, %got(prochead)($gp)
/* 0045ADF0 0320F809 */  jalr  $t9
/* 0045ADF4 8C840000 */   lw    $a0, ($a0)
/* 0045ADF8 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045ADFC 24090001 */  li    $t1, 1
/* 0045AE00 8F8E8B58 */  lw     $t6, %got(warn_flag)($gp)
/* 0045AE04 8F8A8DA4 */  lw     $t2, %got(u)($gp)
/* 0045AE08 91CE0000 */  lbu   $t6, ($t6)
/* 0045AE0C 512E002A */  beql  $t1, $t6, .L0045AEB8
/* 0045AE10 91480000 */   lbu   $t0, ($t2)
/* 0045AE14 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0045AE18 8F848908 */  lw     $a0, %got(err)($gp)
/* 0045AE1C 0320F809 */  jalr  $t9
/* 0045AE20 8C840000 */   lw    $a0, ($a0)
/* 0045AE24 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045AE28 24060069 */  li    $a2, 105
/* 0045AE2C 24070069 */  li    $a3, 105
/* 0045AE30 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0045AE34 8F848908 */  lw     $a0, %got(err)($gp)
/* 0045AE38 8F858044 */  lw    $a1, %got(RO_1000D258)($gp)
/* 0045AE3C 8C840000 */  lw    $a0, ($a0)
/* 0045AE40 0320F809 */  jalr  $t9
/* 0045AE44 24A5D258 */   addiu $a1, %lo(RO_1000D258) # addiu $a1, $a1, -0x2da8
/* 0045AE48 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045AE4C 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0045AE50 8F848908 */  lw     $a0, %got(err)($gp)
/* 0045AE54 0320F809 */  jalr  $t9
/* 0045AE58 8C840000 */   lw    $a0, ($a0)
/* 0045AE5C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045AE60 8F9980A0 */  lw    $t9, %call16(fflush)($gp)
/* 0045AE64 8F848908 */  lw     $a0, %got(err)($gp)
/* 0045AE68 0320F809 */  jalr  $t9
/* 0045AE6C 8C840000 */   lw    $a0, ($a0)
/* 0045AE70 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045AE74 24090001 */  li    $t1, 1
/* 0045AE78 8F818B08 */  lw     $at, %got(warned)($gp)
/* 0045AE7C 8F8A8DA4 */  lw     $t2, %got(u)($gp)
/* 0045AE80 1000000C */  b     .L0045AEB4
/* 0045AE84 A0290000 */   sb    $t1, ($at)
/* 0045AE88 95590002 */  lhu   $t9, 2($t2)
.L0045AE8C:
/* 0045AE8C 332C0001 */  andi  $t4, $t9, 1
/* 0045AE90 51800009 */  beql  $t4, $zero, .L0045AEB8
/* 0045AE94 91480000 */   lbu   $t0, ($t2)
/* 0045AE98 8F998468 */  lw    $t9, %call16(insertcallee)($gp)
/* 0045AE9C 8F848B70 */  lw     $a0, %got(indirprocs)($gp)
/* 0045AEA0 24450018 */  addiu $a1, $v0, 0x18
/* 0045AEA4 0320F809 */  jalr  $t9
/* 0045AEA8 8C840000 */   lw    $a0, ($a0)
/* 0045AEAC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045AEB0 8F8A8DA4 */  lw     $t2, %got(u)($gp)
.L0045AEB4:
/* 0045AEB4 91480000 */  lbu   $t0, ($t2)
.L0045AEB8:
/* 0045AEB8 10000160 */  b     .L0045B43C
/* 0045AEBC 2503FFE0 */   addiu $v1, $t0, -0x20
.L0045AEC0:
/* 0045AEC0 91420001 */  lbu   $v0, 1($t2)
/* 0045AEC4 240B0003 */  li    $t3, 3
/* 0045AEC8 24050002 */  li    $a1, 2
/* 0045AECC 3042001F */  andi  $v0, $v0, 0x1f
/* 0045AED0 1562000B */  bne   $t3, $v0, .L0045AF00
/* 0045AED4 00000000 */   nop   
/* 0045AED8 8F858B6C */  lw     $a1, %got(curproc)($gp)
/* 0045AEDC 8F998444 */  lw    $t9, %call16(updatelab)($gp)
/* 0045AEE0 8D440010 */  lw    $a0, 0x10($t2)
/* 0045AEE4 8CA50000 */  lw    $a1, ($a1)
/* 0045AEE8 24060001 */  li    $a2, 1
/* 0045AEEC 0320F809 */  jalr  $t9
/* 0045AEF0 24A50028 */   addiu $a1, $a1, 0x28
/* 0045AEF4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045AEF8 10000014 */  b     .L0045AF4C
/* 0045AEFC 8F8A8DA4 */   lw     $t2, %got(u)($gp)
.L0045AF00:
/* 0045AF00 54A20013 */  bnel  $a1, $v0, .L0045AF50
/* 0045AF04 91480000 */   lbu   $t0, ($t2)
/* 0045AF08 8F998434 */  lw    $t9, %call16(searchproc)($gp)
/* 0045AF0C 8D440010 */  lw    $a0, 0x10($t2)
/* 0045AF10 24050002 */  li    $a1, 2
/* 0045AF14 0320F809 */  jalr  $t9
/* 0045AF18 00000000 */   nop   
/* 0045AF1C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045AF20 24090001 */  li    $t1, 1
/* 0045AF24 A049000B */  sb    $t1, 0xb($v0)
/* 0045AF28 8F858B6C */  lw     $a1, %got(curproc)($gp)
/* 0045AF2C A049000D */  sb    $t1, 0xd($v0)
/* 0045AF30 8F998468 */  lw    $t9, %call16(insertcallee)($gp)
/* 0045AF34 8CA50000 */  lw    $a1, ($a1)
/* 0045AF38 00402025 */  move  $a0, $v0
/* 0045AF3C 0320F809 */  jalr  $t9
/* 0045AF40 24A50018 */   addiu $a1, $a1, 0x18
/* 0045AF44 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045AF48 8F8A8DA4 */  lw     $t2, %got(u)($gp)
.L0045AF4C:
/* 0045AF4C 91480000 */  lbu   $t0, ($t2)
.L0045AF50:
/* 0045AF50 1000013A */  b     .L0045B43C
/* 0045AF54 2503FFE0 */   addiu $v1, $t0, -0x20
.L0045AF58:
/* 0045AF58 914F0001 */  lbu   $t7, 1($t2)
/* 0045AF5C 24050002 */  li    $a1, 2
/* 0045AF60 31ED001F */  andi  $t5, $t7, 0x1f
/* 0045AF64 54AD0016 */  bnel  $a1, $t5, .L0045AFC0
/* 0045AF68 91480000 */   lbu   $t0, ($t2)
/* 0045AF6C 8F998434 */  lw    $t9, %call16(searchproc)($gp)
/* 0045AF70 8D440018 */  lw    $a0, 0x18($t2)
/* 0045AF74 24050002 */  li    $a1, 2
/* 0045AF78 0320F809 */  jalr  $t9
/* 0045AF7C 00000000 */   nop   
/* 0045AF80 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045AF84 24090001 */  li    $t1, 1
/* 0045AF88 A049000B */  sb    $t1, 0xb($v0)
/* 0045AF8C 8F988A5C */  lw     $t8, %got(lang)($gp)
/* 0045AF90 A049000D */  sb    $t1, 0xd($v0)
/* 0045AF94 8F8A8DA4 */  lw     $t2, %got(u)($gp)
/* 0045AF98 93180000 */  lbu   $t8, ($t8)
/* 0045AF9C 55380008 */  bnel  $t1, $t8, .L0045AFC0
/* 0045AFA0 91480000 */   lbu   $t0, ($t2)
/* 0045AFA4 8F99845C */  lw    $t9, %call16(del_fsymtab)($gp)
/* 0045AFA8 8D440018 */  lw    $a0, 0x18($t2)
/* 0045AFAC 0320F809 */  jalr  $t9
/* 0045AFB0 00000000 */   nop   
/* 0045AFB4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045AFB8 8F8A8DA4 */  lw     $t2, %got(u)($gp)
/* 0045AFBC 91480000 */  lbu   $t0, ($t2)
.L0045AFC0:
/* 0045AFC0 1000011E */  b     .L0045B43C
/* 0045AFC4 2503FFE0 */   addiu $v1, $t0, -0x20
.L0045AFC8:
/* 0045AFC8 8F8289D8 */  lw     $v0, %got(maxlabnam)($gp)
/* 0045AFCC 8D430004 */  lw    $v1, 4($t2)
/* 0045AFD0 8C4E0000 */  lw    $t6, ($v0)
/* 0045AFD4 01C3082A */  slt   $at, $t6, $v1
/* 0045AFD8 50200003 */  beql  $at, $zero, .L0045AFE8
/* 0045AFDC 24010042 */   li    $at, 66
/* 0045AFE0 AC430000 */  sw    $v1, ($v0)
/* 0045AFE4 24010042 */  li    $at, 66
.L0045AFE8:
/* 0045AFE8 55010061 */  bnel  $t0, $at, .L0045B170
/* 0045AFEC 2401004A */   li    $at, 74
/* 0045AFF0 8F828B6C */  lw     $v0, %got(curproc)($gp)
/* 0045AFF4 95440002 */  lhu   $a0, 2($t2)
/* 0045AFF8 00603825 */  move  $a3, $v1
/* 0045AFFC 8C420000 */  lw    $v0, ($v0)
/* 0045B000 308F0007 */  andi  $t7, $a0, 7
/* 0045B004 24090001 */  li    $t1, 1
/* 0045B008 94590012 */  lhu   $t9, 0x12($v0)
/* 0045B00C 0004302B */  sltu  $a2, $zero, $a0
/* 0045B010 272C0001 */  addiu $t4, $t9, 1
/* 0045B014 11E00002 */  beqz  $t7, .L0045B020
/* 0045B018 A44C0012 */   sh    $t4, 0x12($v0)
/* 0045B01C A0490014 */  sb    $t1, 0x14($v0)
.L0045B020:
/* 0045B020 14C00003 */  bnez  $a2, .L0045B030
/* 0045B024 00000000 */   nop   
/* 0045B028 8D460008 */  lw    $a2, 8($t2)
/* 0045B02C 0006302B */  sltu  $a2, $zero, $a2
.L0045B030:
/* 0045B030 8F998444 */  lw    $t9, %call16(updatelab)($gp)
/* 0045B034 00E02025 */  move  $a0, $a3
/* 0045B038 24450028 */  addiu $a1, $v0, 0x28
/* 0045B03C 0320F809 */  jalr  $t9
/* 0045B040 00000000 */   nop   
/* 0045B044 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045B048 8F848C50 */  lw     $a0, %got(lab_just_defined)($gp)
/* 0045B04C 8F8A8DA4 */  lw     $t2, %got(u)($gp)
/* 0045B050 8C840000 */  lw    $a0, ($a0)
/* 0045B054 50800012 */  beql  $a0, $zero, .L0045B0A0
/* 0045B058 8D4E0004 */   lw    $t6, 4($t2)
/* 0045B05C 954D0002 */  lhu   $t5, 2($t2)
/* 0045B060 55A0000F */  bnezl $t5, .L0045B0A0
/* 0045B064 8D4E0004 */   lw    $t6, 4($t2)
/* 0045B068 8D580008 */  lw    $t8, 8($t2)
/* 0045B06C 5700000C */  bnezl $t8, .L0045B0A0
/* 0045B070 8D4E0004 */   lw    $t6, 4($t2)
/* 0045B074 8F858B6C */  lw     $a1, %got(curproc)($gp)
/* 0045B078 AC440004 */  sw    $a0, 4($v0)
/* 0045B07C 8F998444 */  lw    $t9, %call16(updatelab)($gp)
/* 0045B080 8CA50000 */  lw    $a1, ($a1)
/* 0045B084 24060001 */  li    $a2, 1
/* 0045B088 0320F809 */  jalr  $t9
/* 0045B08C 24A50028 */   addiu $a1, $a1, 0x28
/* 0045B090 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045B094 10000004 */  b     .L0045B0A8
/* 0045B098 8F8A8DA4 */   lw     $t2, %got(u)($gp)
/* 0045B09C 8D4E0004 */  lw    $t6, 4($t2)
.L0045B0A0:
/* 0045B0A0 8F818C50 */  lw     $at, %got(lab_just_defined)($gp)
/* 0045B0A4 AC2E0000 */  sw    $t6, ($at)
.L0045B0A8:
/* 0045B0A8 8F828A5C */  lw     $v0, %got(lang)($gp)
/* 0045B0AC 240B0003 */  li    $t3, 3
/* 0045B0B0 24050002 */  li    $a1, 2
/* 0045B0B4 90420000 */  lbu   $v0, ($v0)
/* 0045B0B8 51620004 */  beql  $t3, $v0, .L0045B0CC
/* 0045B0BC 95590002 */   lhu   $t9, 2($t2)
/* 0045B0C0 14A2000A */  bne   $a1, $v0, .L0045B0EC
/* 0045B0C4 00000000 */   nop   
/* 0045B0C8 95590002 */  lhu   $t9, 2($t2)
.L0045B0CC:
/* 0045B0CC 24050002 */  li    $a1, 2
/* 0045B0D0 332C0002 */  andi  $t4, $t9, 2
/* 0045B0D4 11800005 */  beqz  $t4, .L0045B0EC
/* 0045B0D8 00000000 */   nop   
/* 0045B0DC 8F848C54 */  lw     $a0, %got(in_exception_block)($gp)
/* 0045B0E0 8C8F0000 */  lw    $t7, ($a0)
/* 0045B0E4 25ED0001 */  addiu $t5, $t7, 1
/* 0045B0E8 AC8D0000 */  sw    $t5, ($a0)
.L0045B0EC:
/* 0045B0EC 11620003 */  beq   $t3, $v0, .L0045B0FC
/* 0045B0F0 8F848C54 */   lw     $a0, %got(in_exception_block)($gp)
/* 0045B0F4 14A20008 */  bne   $a1, $v0, .L0045B118
/* 0045B0F8 00000000 */   nop   
.L0045B0FC:
/* 0045B0FC 95580002 */  lhu   $t8, 2($t2)
/* 0045B100 330E0010 */  andi  $t6, $t8, 0x10
/* 0045B104 11C00004 */  beqz  $t6, .L0045B118
/* 0045B108 00000000 */   nop   
/* 0045B10C 8C990000 */  lw    $t9, ($a0)
/* 0045B110 272CFFFF */  addiu $t4, $t9, -1
/* 0045B114 AC8C0000 */  sw    $t4, ($a0)
.L0045B118:
/* 0045B118 14A20009 */  bne   $a1, $v0, .L0045B140
/* 0045B11C 00000000 */   nop   
/* 0045B120 954F0002 */  lhu   $t7, 2($t2)
/* 0045B124 31ED0080 */  andi  $t5, $t7, 0x80
/* 0045B128 11A00005 */  beqz  $t5, .L0045B140
/* 0045B12C 00000000 */   nop   
/* 0045B130 8F838C58 */  lw     $v1, %got(in_exception_frame)($gp)
/* 0045B134 8C780000 */  lw    $t8, ($v1)
/* 0045B138 270E0001 */  addiu $t6, $t8, 1
/* 0045B13C AC6E0000 */  sw    $t6, ($v1)
.L0045B140:
/* 0045B140 14A20008 */  bne   $a1, $v0, .L0045B164
/* 0045B144 8F838C58 */   lw     $v1, %got(in_exception_frame)($gp)
/* 0045B148 95590002 */  lhu   $t9, 2($t2)
/* 0045B14C 332C0100 */  andi  $t4, $t9, 0x100
/* 0045B150 11800004 */  beqz  $t4, .L0045B164
/* 0045B154 00000000 */   nop   
/* 0045B158 8C6F0000 */  lw    $t7, ($v1)
/* 0045B15C 25EDFFFF */  addiu $t5, $t7, -1
/* 0045B160 AC6D0000 */  sw    $t5, ($v1)
.L0045B164:
/* 0045B164 1000000F */  b     .L0045B1A4
/* 0045B168 91480000 */   lbu   $t0, ($t2)
/* 0045B16C 2401004A */  li    $at, 74
.L0045B170:
/* 0045B170 5501000D */  bnel  $t0, $at, .L0045B1A8
/* 0045B174 2518FFC0 */   addiu $t8, $t0, -0x40
/* 0045B178 8F858B6C */  lw     $a1, %got(curproc)($gp)
/* 0045B17C 8F998444 */  lw    $t9, %call16(updatelab)($gp)
/* 0045B180 00602025 */  move  $a0, $v1
/* 0045B184 8CA50000 */  lw    $a1, ($a1)
/* 0045B188 24060001 */  li    $a2, 1
/* 0045B18C 0320F809 */  jalr  $t9
/* 0045B190 24A50028 */   addiu $a1, $a1, 0x28
/* 0045B194 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045B198 AC400004 */  sw    $zero, 4($v0)
/* 0045B19C 8F8A8DA4 */  lw     $t2, %got(u)($gp)
/* 0045B1A0 91480000 */  lbu   $t0, ($t2)
.L0045B1A4:
/* 0045B1A4 2518FFC0 */  addiu $t8, $t0, -0x40
.L0045B1A8:
/* 0045B1A8 2F0E0020 */  sltiu $t6, $t8, 0x20
/* 0045B1AC 000EC823 */  negu  $t9, $t6
/* 0045B1B0 3C012020 */  lui   $at, 0x2020
/* 0045B1B4 03216024 */  and   $t4, $t9, $at
/* 0045B1B8 030C7804 */  sllv  $t7, $t4, $t8
/* 0045B1BC 05E1000E */  bgez  $t7, .L0045B1F8
/* 0045B1C0 00000000 */   nop   
/* 0045B1C4 954D0002 */  lhu   $t5, 2($t2)
/* 0045B1C8 31AE0008 */  andi  $t6, $t5, 8
/* 0045B1CC 11C0000A */  beqz  $t6, .L0045B1F8
/* 0045B1D0 00000000 */   nop   
/* 0045B1D4 8F858B6C */  lw     $a1, %got(curproc)($gp)
/* 0045B1D8 8F998440 */  lw    $t9, %call16(insertijplab)($gp)
/* 0045B1DC 8D440004 */  lw    $a0, 4($t2)
/* 0045B1E0 8CA50000 */  lw    $a1, ($a1)
/* 0045B1E4 0320F809 */  jalr  $t9
/* 0045B1E8 24A5001C */   addiu $a1, $a1, 0x1c
/* 0045B1EC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045B1F0 8F8A8DA4 */  lw     $t2, %got(u)($gp)
/* 0045B1F4 91480000 */  lbu   $t0, ($t2)
.L0045B1F8:
/* 0045B1F8 10000090 */  b     .L0045B43C
/* 0045B1FC 2503FFE0 */   addiu $v1, $t0, -0x20
.L0045B200:
/* 0045B200 8F828B6C */  lw     $v0, %got(curproc)($gp)
/* 0045B204 2503FFE0 */  addiu $v1, $t0, -0x20
/* 0045B208 8C420000 */  lw    $v0, ($v0)
/* 0045B20C 94590012 */  lhu   $t9, 0x12($v0)
/* 0045B210 272C0001 */  addiu $t4, $t9, 1
/* 0045B214 10000089 */  b     .L0045B43C
/* 0045B218 A44C0012 */   sh    $t4, 0x12($v0)
.L0045B21C:
/* 0045B21C 8F828B6C */  lw     $v0, %got(curproc)($gp)
/* 0045B220 24090001 */  li    $t1, 1
/* 0045B224 2503FFE0 */  addiu $v1, $t0, -0x20
/* 0045B228 8C420000 */  lw    $v0, ($v0)
/* 0045B22C A049000B */  sb    $t1, 0xb($v0)
/* 0045B230 10000082 */  b     .L0045B43C
/* 0045B234 A049000D */   sb    $t1, 0xd($v0)
.L0045B238:
/* 0045B238 8F988B6C */  lw     $t8, %got(curproc)($gp)
/* 0045B23C 24090001 */  li    $t1, 1
/* 0045B240 2503FFE0 */  addiu $v1, $t0, -0x20
/* 0045B244 8F180000 */  lw    $t8, ($t8)
/* 0045B248 1000007C */  b     .L0045B43C
/* 0045B24C A3090015 */   sb    $t1, 0x15($t8)
.L0045B250:
/* 0045B250 8F818AFC */  lw     $at, %got(someusefp)($gp)
/* 0045B254 24090001 */  li    $t1, 1
/* 0045B258 2503FFE0 */  addiu $v1, $t0, -0x20
/* 0045B25C 10000077 */  b     .L0045B43C
/* 0045B260 A0290000 */   sb    $t1, ($at)
.L0045B264:
/* 0045B264 24010036 */  li    $at, 54
.L0045B268:
/* 0045B268 11010003 */  beq   $t0, $at, .L0045B278
/* 0045B26C 2401003F */   li    $at, 63
/* 0045B270 1501000A */  bne   $t0, $at, .L0045B29C
/* 0045B274 00000000 */   nop   
.L0045B278:
/* 0045B278 8F828B6C */  lw     $v0, %got(curproc)($gp)
/* 0045B27C 8D4F000C */  lw    $t7, 0xc($t2)
/* 0045B280 8C420000 */  lw    $v0, ($v0)
/* 0045B284 8C4D0038 */  lw    $t5, 0x38($v0)
/* 0045B288 01AF082A */  slt   $at, $t5, $t7
/* 0045B28C 50200003 */  beql  $at, $zero, .L0045B29C
/* 0045B290 AC4D0038 */   sw    $t5, 0x38($v0)
/* 0045B294 01E06825 */  move  $t5, $t7
/* 0045B298 AC4D0038 */  sw    $t5, 0x38($v0)
.L0045B29C:
/* 0045B29C 10000067 */  b     .L0045B43C
/* 0045B2A0 2503FFE0 */   addiu $v1, $t0, -0x20
.L0045B2A4:
/* 0045B2A4 2C410066 */  sltiu $at, $v0, 0x66
/* 0045B2A8 14200050 */  bnez  $at, .L0045B3EC
/* 0045B2AC 244EFF9D */   addiu $t6, $v0, -0x63
/* 0045B2B0 24010071 */  li    $at, 113
/* 0045B2B4 1041FD77 */  beq   $v0, $at, .L0045A894
/* 0045B2B8 244EFF85 */   addiu $t6, $v0, -0x7b
/* 0045B2BC 2DC1000B */  sltiu $at, $t6, 0xb
/* 0045B2C0 5020FFE9 */  beql  $at, $zero, .L0045B268
/* 0045B2C4 24010036 */   li    $at, 54
/* 0045B2C8 8F818044 */  lw    $at, %got(jtbl_1000D3A0)($gp)
/* 0045B2CC 000E7080 */  sll   $t6, $t6, 2
/* 0045B2D0 002E0821 */  addu  $at, $at, $t6
/* 0045B2D4 8C2ED3A0 */  lw    $t6, %lo(jtbl_1000D3A0)($at)
/* 0045B2D8 01DC7021 */  addu  $t6, $t6, $gp
/* 0045B2DC 01C00008 */  jr    $t6
/* 0045B2E0 00000000 */   nop   
.L0045B2E4:
/* 0045B2E4 2C41002D */  sltiu $at, $v0, 0x2d
/* 0045B2E8 14200011 */  bnez  $at, .L0045B330
/* 0045B2EC 24010032 */   li    $at, 50
/* 0045B2F0 5041FE29 */  beql  $v0, $at, .L0045AB98
/* 0045B2F4 91580001 */   lbu   $t8, 1($t2)
/* 0045B2F8 2C41004C */  sltiu $at, $v0, 0x4c
/* 0045B2FC 10200031 */  beqz  $at, .L0045B3C4
/* 0045B300 244DFFAE */   addiu $t5, $v0, -0x52
/* 0045B304 2459FFC7 */  addiu $t9, $v0, -0x39
/* 0045B308 2F210013 */  sltiu $at, $t9, 0x13
/* 0045B30C 5020FFD6 */  beql  $at, $zero, .L0045B268
/* 0045B310 24010036 */   li    $at, 54
/* 0045B314 8F818044 */  lw    $at, %got(jtbl_1000D340)($gp)
/* 0045B318 0019C880 */  sll   $t9, $t9, 2
/* 0045B31C 00390821 */  addu  $at, $at, $t9
/* 0045B320 8C39D340 */  lw    $t9, %lo(jtbl_1000D340)($at)
/* 0045B324 033CC821 */  addu  $t9, $t9, $gp
/* 0045B328 03200008 */  jr    $t9
/* 0045B32C 00000000 */   nop   
.L0045B330:
/* 0045B330 2C410008 */  sltiu $at, $v0, 8
/* 0045B334 1420000F */  bnez  $at, .L0045B374
/* 0045B338 2458FFFD */   addiu $t8, $v0, -3
/* 0045B33C 2C410018 */  sltiu $at, $v0, 0x18
/* 0045B340 10200016 */  beqz  $at, .L0045B39C
/* 0045B344 244FFFDC */   addiu $t7, $v0, -0x24
/* 0045B348 244CFFF0 */  addiu $t4, $v0, -0x10
/* 0045B34C 2D810008 */  sltiu $at, $t4, 8
/* 0045B350 5020FFC5 */  beql  $at, $zero, .L0045B268
/* 0045B354 24010036 */   li    $at, 54
/* 0045B358 8F818044 */  lw    $at, %got(jtbl_1000D2FC)($gp)
/* 0045B35C 000C6080 */  sll   $t4, $t4, 2
/* 0045B360 002C0821 */  addu  $at, $at, $t4
/* 0045B364 8C2CD2FC */  lw    $t4, %lo(jtbl_1000D2FC)($at)
/* 0045B368 019C6021 */  addu  $t4, $t4, $gp
/* 0045B36C 01800008 */  jr    $t4
/* 0045B370 00000000 */   nop   
.L0045B374:
/* 0045B374 2F010005 */  sltiu $at, $t8, 5
/* 0045B378 5020FFBB */  beql  $at, $zero, .L0045B268
/* 0045B37C 24010036 */   li    $at, 54
/* 0045B380 8F818044 */  lw    $at, %got(jtbl_1000D2E8)($gp)
/* 0045B384 0018C080 */  sll   $t8, $t8, 2
/* 0045B388 00380821 */  addu  $at, $at, $t8
/* 0045B38C 8C38D2E8 */  lw    $t8, %lo(jtbl_1000D2E8)($at)
/* 0045B390 031CC021 */  addu  $t8, $t8, $gp
/* 0045B394 03000008 */  jr    $t8
/* 0045B398 00000000 */   nop   
.L0045B39C:
/* 0045B39C 2DE10009 */  sltiu $at, $t7, 9
/* 0045B3A0 5020FFB1 */  beql  $at, $zero, .L0045B268
/* 0045B3A4 24010036 */   li    $at, 54
/* 0045B3A8 8F818044 */  lw    $at, %got(jtbl_1000D31C)($gp)
/* 0045B3AC 000F7880 */  sll   $t7, $t7, 2
/* 0045B3B0 002F0821 */  addu  $at, $at, $t7
/* 0045B3B4 8C2FD31C */  lw    $t7, %lo(jtbl_1000D31C)($at)
/* 0045B3B8 01FC7821 */  addu  $t7, $t7, $gp
/* 0045B3BC 01E00008 */  jr    $t7
/* 0045B3C0 00000000 */   nop   
.L0045B3C4:
/* 0045B3C4 2DA10002 */  sltiu $at, $t5, 2
/* 0045B3C8 5020FFA7 */  beql  $at, $zero, .L0045B268
/* 0045B3CC 24010036 */   li    $at, 54
/* 0045B3D0 8F818044 */  lw    $at, %got(jtbl_1000D38C)($gp)
/* 0045B3D4 000D6880 */  sll   $t5, $t5, 2
/* 0045B3D8 002D0821 */  addu  $at, $at, $t5
/* 0045B3DC 8C2DD38C */  lw    $t5, %lo(jtbl_1000D38C)($at)
/* 0045B3E0 01BC6821 */  addu  $t5, $t5, $gp
/* 0045B3E4 01A00008 */  jr    $t5
/* 0045B3E8 00000000 */   nop   
.L0045B3EC:
/* 0045B3EC 2DC10003 */  sltiu $at, $t6, 3
/* 0045B3F0 5020FF9D */  beql  $at, $zero, .L0045B268
/* 0045B3F4 24010036 */   li    $at, 54
/* 0045B3F8 8F818044 */  lw    $at, %got(jtbl_1000D394)($gp)
/* 0045B3FC 000E7080 */  sll   $t6, $t6, 2
/* 0045B400 002E0821 */  addu  $at, $at, $t6
/* 0045B404 8C2ED394 */  lw    $t6, %lo(jtbl_1000D394)($at)
/* 0045B408 01DC7021 */  addu  $t6, $t6, $gp
/* 0045B40C 01C00008 */  jr    $t6
/* 0045B410 00000000 */   nop   
.L0045B414:
/* 0045B414 2F210002 */  sltiu $at, $t9, 2
/* 0045B418 5020FF93 */  beql  $at, $zero, .L0045B268
/* 0045B41C 24010036 */   li    $at, 54
/* 0045B420 8F818044 */  lw    $at, %got(jtbl_1000D3CC)($gp)
/* 0045B424 0019C880 */  sll   $t9, $t9, 2
/* 0045B428 00390821 */  addu  $at, $at, $t9
/* 0045B42C 8C39D3CC */  lw    $t9, %lo(jtbl_1000D3CC)($at)
/* 0045B430 033CC821 */  addu  $t9, $t9, $gp
/* 0045B434 03200008 */  jr    $t9
/* 0045B438 00000000 */   nop   
.L0045B43C:
/* 0045B43C 2C6C0080 */  sltiu $t4, $v1, 0x80
.L0045B440:
/* 0045B440 11800009 */  beqz  $t4, .L0045B468
/* 0045B444 2401008C */   li    $at, 140
/* 0045B448 8F8D8044 */  lw    $t5, %got(D_10010D14)($gp)
/* 0045B44C 0003C143 */  sra   $t8, $v1, 5
/* 0045B450 00187880 */  sll   $t7, $t8, 2
/* 0045B454 25AD0D14 */  addiu $t5, %lo(D_10010D14) # addiu $t5, $t5, 0xd14
/* 0045B458 01AF7021 */  addu  $t6, $t5, $t7
/* 0045B45C 8DD90000 */  lw    $t9, ($t6)
/* 0045B460 0079C004 */  sllv  $t8, $t9, $v1
/* 0045B464 2B0C0000 */  slti  $t4, $t8, 0
.L0045B468:
/* 0045B468 1180000C */  beqz  $t4, .L0045B49C
/* 0045B46C 00000000 */   nop   
/* 0045B470 8F858B6C */  lw     $a1, %got(curproc)($gp)
/* 0045B474 8F998444 */  lw    $t9, %call16(updatelab)($gp)
/* 0045B478 8D440004 */  lw    $a0, 4($t2)
/* 0045B47C 8CA50000 */  lw    $a1, ($a1)
/* 0045B480 24060001 */  li    $a2, 1
/* 0045B484 0320F809 */  jalr  $t9
/* 0045B488 24A50028 */   addiu $a1, $a1, 0x28
/* 0045B48C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045B490 8F888DA4 */  lw     $t0, %got(u)($gp)
/* 0045B494 1000000D */  b     .L0045B4CC
/* 0045B498 91080000 */   lbu   $t0, ($t0)
.L0045B49C:
/* 0045B49C 5501000C */  bnel  $t0, $at, .L0045B4D0
/* 0045B4A0 250FFFC0 */   addiu $t7, $t0, -0x40
/* 0045B4A4 8F858B6C */  lw     $a1, %got(curproc)($gp)
/* 0045B4A8 8F998444 */  lw    $t9, %call16(updatelab)($gp)
/* 0045B4AC 8D440008 */  lw    $a0, 8($t2)
/* 0045B4B0 8CA50000 */  lw    $a1, ($a1)
/* 0045B4B4 24060001 */  li    $a2, 1
/* 0045B4B8 0320F809 */  jalr  $t9
/* 0045B4BC 24A50028 */   addiu $a1, $a1, 0x28
/* 0045B4C0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045B4C4 8F888DA4 */  lw     $t0, %got(u)($gp)
/* 0045B4C8 91080000 */  lbu   $t0, ($t0)
.L0045B4CC:
/* 0045B4CC 250FFFC0 */  addiu $t7, $t0, -0x40
.L0045B4D0:
/* 0045B4D0 2DEE0020 */  sltiu $t6, $t7, 0x20
/* 0045B4D4 3C012C08 */  lui   $at, 0x2c08
/* 0045B4D8 34210800 */  ori   $at, $at, 0x800
/* 0045B4DC 000EC823 */  negu  $t9, $t6
/* 0045B4E0 0321C024 */  and   $t8, $t9, $at
/* 0045B4E4 01F86804 */  sllv  $t5, $t8, $t7
/* 0045B4E8 05A20004 */  bltzl $t5, .L0045B4FC
/* 0045B4EC 8FBF002C */   lw    $ra, 0x2c($sp)
/* 0045B4F0 8F818C50 */  lw     $at, %got(lab_just_defined)($gp)
/* 0045B4F4 AC200000 */  sw    $zero, ($at)
/* 0045B4F8 8FBF002C */  lw    $ra, 0x2c($sp)
.L0045B4FC:
/* 0045B4FC 27BD0060 */  addiu $sp, $sp, 0x60
/* 0045B500 03E00008 */  jr    $ra
/* 0045B504 00000000 */   nop   
    .type oneinstruction, @function
    .size oneinstruction, .-oneinstruction
    .end oneinstruction

glabel oneprocprepass
    .ent oneprocprepass
    # 0045C150 prepass
/* 0045B508 3C1C0FBC */  .cpload $t9
/* 0045B50C 279CED88 */  
/* 0045B510 0399E021 */  
/* 0045B514 27BDFF98 */  addiu $sp, $sp, -0x68
/* 0045B518 AFB10028 */  sw    $s1, 0x28($sp)
/* 0045B51C 8F918DA4 */  lw     $s1, %got(u)($gp)
/* 0045B520 8F998434 */  lw    $t9, %call16(searchproc)($gp)
/* 0045B524 AFBF0034 */  sw    $ra, 0x34($sp)
/* 0045B528 AFBC0030 */  sw    $gp, 0x30($sp)
/* 0045B52C AFB2002C */  sw    $s2, 0x2c($sp)
/* 0045B530 AFB00024 */  sw    $s0, 0x24($sp)
/* 0045B534 8E240004 */  lw    $a0, 4($s1)
/* 0045B538 0320F809 */  jalr  $t9
/* 0045B53C 96250002 */   lhu   $a1, 2($s1)
/* 0045B540 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045B544 24120001 */  li    $s2, 1
/* 0045B548 8F818B6C */  lw     $at, %got(curproc)($gp)
/* 0045B54C 8F838B6C */  lw     $v1, %got(curproc)($gp)
/* 0045B550 AC220000 */  sw    $v0, ($at)
/* 0045B554 8C630000 */  lw    $v1, ($v1)
/* 0045B558 906E000B */  lbu   $t6, 0xb($v1)
/* 0045B55C A0720008 */  sb    $s2, 8($v1)
/* 0045B560 15C00007 */  bnez  $t6, .L0045B580
/* 0045B564 00000000 */   nop   
/* 0045B568 8E2F000C */  lw    $t7, 0xc($s1)
/* 0045B56C 31F80001 */  andi  $t8, $t7, 1
/* 0045B570 13000003 */  beqz  $t8, .L0045B580
/* 0045B574 00000000 */   nop   
/* 0045B578 A072000B */  sb    $s2, 0xb($v1)
/* 0045B57C A072000D */  sb    $s2, 0xd($v1)
.L0045B580:
/* 0045B580 8F848AFC */  lw     $a0, %got(someusefp)($gp)
/* 0045B584 90820000 */  lbu   $v0, ($a0)
/* 0045B588 14400004 */  bnez  $v0, .L0045B59C
/* 0045B58C 00000000 */   nop   
/* 0045B590 8E22000C */  lw    $v0, 0xc($s1)
/* 0045B594 30420002 */  andi  $v0, $v0, 2
/* 0045B598 0002102B */  sltu  $v0, $zero, $v0
.L0045B59C:
/* 0045B59C 8F998A5C */  lw     $t9, %got(lang)($gp)
/* 0045B5A0 A0820000 */  sb    $v0, ($a0)
/* 0045B5A4 8F818C54 */  lw     $at, %got(in_exception_block)($gp)
/* 0045B5A8 93390000 */  lbu   $t9, ($t9)
/* 0045B5AC AC200000 */  sw    $zero, ($at)
/* 0045B5B0 2F290020 */  sltiu $t1, $t9, 0x20
/* 0045B5B4 00095023 */  negu  $t2, $t1
/* 0045B5B8 3C011C00 */  lui   $at, 0x1c00
/* 0045B5BC 01415824 */  and   $t3, $t2, $at
/* 0045B5C0 032B6004 */  sllv  $t4, $t3, $t9
/* 0045B5C4 05810020 */  bgez  $t4, .L0045B648
/* 0045B5C8 00000000 */   nop   
/* 0045B5CC 8E2D000C */  lw    $t5, 0xc($s1)
/* 0045B5D0 93AF0066 */  lbu   $t7, 0x66($sp)
/* 0045B5D4 24060004 */  li    $a2, 4
/* 0045B5D8 31AE0001 */  andi  $t6, $t5, 1
/* 0045B5DC 15C0001A */  bnez  $t6, .L0045B648
/* 0045B5E0 31F8FFF8 */   andi  $t8, $t7, 0xfff8
/* 0045B5E4 37090001 */  ori   $t1, $t8, 1
/* 0045B5E8 A3A90066 */  sb    $t1, 0x66($sp)
/* 0045B5EC 8FAB0064 */  lw    $t3, 0x64($sp)
/* 0045B5F0 8E2A0004 */  lw    $t2, 4($s1)
/* 0045B5F4 240FFFFC */  li    $t7, -4
/* 0045B5F8 000BCAC2 */  srl   $t9, $t3, 0xb
/* 0045B5FC 01596026 */  xor   $t4, $t2, $t9
/* 0045B600 000C6AC0 */  sll   $t5, $t4, 0xb
/* 0045B604 01AB7026 */  xor   $t6, $t5, $t3
/* 0045B608 AFAE0064 */  sw    $t6, 0x64($sp)
/* 0045B60C AFAF0060 */  sw    $t7, 0x60($sp)
/* 0045B610 27B80060 */  addiu $t8, $sp, 0x60
/* 0045B614 8F040000 */  lw    $a0, ($t8)
/* 0045B618 24790004 */  addiu $t9, $v1, 4
/* 0045B61C 00003825 */  move  $a3, $zero
/* 0045B620 AFA40000 */  sw    $a0, ($sp)
/* 0045B624 8F050004 */  lw    $a1, 4($t8)
/* 0045B628 AFB90010 */  sw    $t9, 0x10($sp)
/* 0045B62C 8F998454 */  lw    $t9, %call16(insertvar)($gp)
/* 0045B630 AFB2001C */  sw    $s2, 0x1c($sp)
/* 0045B634 AFA00018 */  sw    $zero, 0x18($sp)
/* 0045B638 AFB20014 */  sw    $s2, 0x14($sp)
/* 0045B63C 0320F809 */  jalr  $t9
/* 0045B640 AFA50004 */   sw    $a1, 4($sp)
/* 0045B644 8FBC0030 */  lw    $gp, 0x30($sp)
.L0045B648:
/* 0045B648 8F998768 */  lw    $t9, %call16(readuinstr)($gp)
/* 0045B64C 8F858950 */  lw     $a1, %got(ustrptr)($gp)
/* 0045B650 02202025 */  move  $a0, $s1
/* 0045B654 0320F809 */  jalr  $t9
/* 0045B658 8CA50000 */   lw    $a1, ($a1)
/* 0045B65C 922C0000 */  lbu   $t4, ($s1)
/* 0045B660 24010022 */  li    $at, 34
/* 0045B664 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045B668 15810017 */  bne   $t4, $at, .L0045B6C8
/* 0045B66C 24060037 */   li    $a2, 55
/* 0045B670 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0045B674 8F908908 */  lw     $s0, %got(err)($gp)
/* 0045B678 8F858044 */  lw    $a1, %got(RO_1000D44D)($gp)
/* 0045B67C 24070037 */  li    $a3, 55
/* 0045B680 8E040000 */  lw    $a0, ($s0)
/* 0045B684 0320F809 */  jalr  $t9
/* 0045B688 24A5D44D */   addiu $a1, %lo(RO_1000D44D) # addiu $a1, $a1, -0x2bb3
/* 0045B68C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045B690 8E040000 */  lw    $a0, ($s0)
/* 0045B694 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0045B698 0320F809 */  jalr  $t9
/* 0045B69C 00000000 */   nop   
/* 0045B6A0 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045B6A4 8E040000 */  lw    $a0, ($s0)
/* 0045B6A8 8F9980A0 */  lw    $t9, %call16(fflush)($gp)
/* 0045B6AC 0320F809 */  jalr  $t9
/* 0045B6B0 00000000 */   nop   
/* 0045B6B4 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045B6B8 8F998728 */  lw    $t9, %call16(abort)($gp)
/* 0045B6BC 0320F809 */  jalr  $t9
/* 0045B6C0 00000000 */   nop   
/* 0045B6C4 8FBC0030 */  lw    $gp, 0x30($sp)
.L0045B6C8:
/* 0045B6C8 8E280010 */  lw    $t0, 0x10($s1)
/* 0045B6CC 8F908908 */  lw     $s0, %got(err)($gp)
/* 0045B6D0 19000027 */  blez  $t0, .L0045B770
/* 0045B6D4 01003025 */   move  $a2, $t0
/* 0045B6D8 24C60001 */  addiu $a2, $a2, 1
/* 0045B6DC 24C7FFFF */  addiu $a3, $a2, -1
/* 0045B6E0 30E70003 */  andi  $a3, $a3, 3
/* 0045B6E4 10E00010 */  beqz  $a3, .L0045B728
/* 0045B6E8 24040001 */   li    $a0, 1
/* 0045B6EC 8F8B8950 */  lw     $t3, %got(ustrptr)($gp)
/* 0045B6F0 8F8D8DE4 */  lw     $t5, %got(entnam0)($gp)
/* 0045B6F4 24E50001 */  addiu $a1, $a3, 1
/* 0045B6F8 8D6B0000 */  lw    $t3, ($t3)
/* 0045B6FC 25ADFFFF */  addiu $t5, $t5, -1
/* 0045B700 008D1021 */  addu  $v0, $a0, $t5
/* 0045B704 01641821 */  addu  $v1, $t3, $a0
.L0045B708:
/* 0045B708 906EFFFF */  lbu   $t6, -1($v1)
/* 0045B70C 24840001 */  addiu $a0, $a0, 1
/* 0045B710 24420001 */  addiu $v0, $v0, 1
/* 0045B714 24630001 */  addiu $v1, $v1, 1
/* 0045B718 14A4FFFB */  bne   $a1, $a0, .L0045B708
/* 0045B71C A04EFFFF */   sb    $t6, -1($v0)
/* 0045B720 10860013 */  beq   $a0, $a2, .L0045B770
/* 0045B724 00000000 */   nop   
.L0045B728:
/* 0045B728 8F988950 */  lw     $t8, %got(ustrptr)($gp)
/* 0045B72C 8F8F8DE4 */  lw     $t7, %got(entnam0)($gp)
/* 0045B730 8F180000 */  lw    $t8, ($t8)
/* 0045B734 25EFFFFF */  addiu $t7, $t7, -1
/* 0045B738 008F1021 */  addu  $v0, $a0, $t7
/* 0045B73C 00CF2821 */  addu  $a1, $a2, $t7
/* 0045B740 03041821 */  addu  $v1, $t8, $a0
.L0045B744:
/* 0045B744 9069FFFF */  lbu   $t1, -1($v1)
/* 0045B748 906A0000 */  lbu   $t2, ($v1)
/* 0045B74C 90790001 */  lbu   $t9, 1($v1)
/* 0045B750 906C0002 */  lbu   $t4, 2($v1)
/* 0045B754 24420004 */  addiu $v0, $v0, 4
/* 0045B758 24630004 */  addiu $v1, $v1, 4
/* 0045B75C A049FFFC */  sb    $t1, -4($v0)
/* 0045B760 A04AFFFD */  sb    $t2, -3($v0)
/* 0045B764 A059FFFE */  sb    $t9, -2($v0)
/* 0045B768 1445FFF6 */  bne   $v0, $a1, .L0045B744
/* 0045B76C A04CFFFF */   sb    $t4, -1($v0)
.L0045B770:
/* 0045B770 8F858DE4 */  lw     $a1, %got(entnam0)($gp)
/* 0045B774 8F838984 */  lw     $v1, %got(entnam0len)($gp)
/* 0045B778 8F868950 */  lw     $a2, %got(ustrptr)($gp)
/* 0045B77C 24A5FFFF */  addiu $a1, $a1, -1
/* 0045B780 00A86821 */  addu  $t5, $a1, $t0
/* 0045B784 91AB0000 */  lbu   $t3, ($t5)
/* 0045B788 24040020 */  li    $a0, 32
/* 0045B78C AC680000 */  sw    $t0, ($v1)
/* 0045B790 01001025 */  move  $v0, $t0
/* 0045B794 148B0008 */  bne   $a0, $t3, .L0045B7B8
/* 0045B798 8CC60000 */   lw    $a2, ($a2)
/* 0045B79C 244EFFFF */  addiu $t6, $v0, -1
.L0045B7A0:
/* 0045B7A0 00AEC021 */  addu  $t8, $a1, $t6
/* 0045B7A4 930F0000 */  lbu   $t7, ($t8)
/* 0045B7A8 AC6E0000 */  sw    $t6, ($v1)
/* 0045B7AC 01C01025 */  move  $v0, $t6
/* 0045B7B0 508FFFFB */  beql  $a0, $t7, .L0045B7A0
/* 0045B7B4 244EFFFF */   addiu $t6, $v0, -1
.L0045B7B8:
/* 0045B7B8 8F998768 */  lw    $t9, %call16(readuinstr)($gp)
/* 0045B7BC 8F818C50 */  lw     $at, %got(lab_just_defined)($gp)
/* 0045B7C0 02202025 */  move  $a0, $s1
/* 0045B7C4 00C02825 */  move  $a1, $a2
/* 0045B7C8 0320F809 */  jalr  $t9
/* 0045B7CC AC200000 */   sw    $zero, ($at)
/* 0045B7D0 92220000 */  lbu   $v0, ($s1)
/* 0045B7D4 24010022 */  li    $at, 34
/* 0045B7D8 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045B7DC 14410017 */  bne   $v0, $at, .L0045B83C
/* 0045B7E0 24060038 */   li    $a2, 56
/* 0045B7E4 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0045B7E8 8F858044 */  lw    $a1, %got(RO_1000D415)($gp)
/* 0045B7EC 8E040000 */  lw    $a0, ($s0)
/* 0045B7F0 24070038 */  li    $a3, 56
/* 0045B7F4 0320F809 */  jalr  $t9
/* 0045B7F8 24A5D415 */   addiu $a1, %lo(RO_1000D415) # addiu $a1, $a1, -0x2beb
/* 0045B7FC 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045B800 8E040000 */  lw    $a0, ($s0)
/* 0045B804 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0045B808 0320F809 */  jalr  $t9
/* 0045B80C 00000000 */   nop   
/* 0045B810 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045B814 8E040000 */  lw    $a0, ($s0)
/* 0045B818 8F9980A0 */  lw    $t9, %call16(fflush)($gp)
/* 0045B81C 0320F809 */  jalr  $t9
/* 0045B820 00000000 */   nop   
/* 0045B824 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045B828 8F998728 */  lw    $t9, %call16(abort)($gp)
/* 0045B82C 0320F809 */  jalr  $t9
/* 0045B830 00000000 */   nop   
/* 0045B834 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045B838 92220000 */  lbu   $v0, ($s1)
.L0045B83C:
/* 0045B83C 2401001F */  li    $at, 31
/* 0045B840 10410028 */  beq   $v0, $at, .L0045B8E4
/* 0045B844 00000000 */   nop   
.L0045B848:
/* 0045B848 8F998470 */  lw    $t9, %call16(oneinstruction)($gp)
/* 0045B84C 0320F809 */  jalr  $t9
/* 0045B850 00000000 */   nop   
/* 0045B854 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045B858 02202025 */  move  $a0, $s1
/* 0045B85C 8F998768 */  lw    $t9, %call16(readuinstr)($gp)
/* 0045B860 8F858950 */  lw     $a1, %got(ustrptr)($gp)
/* 0045B864 0320F809 */  jalr  $t9
/* 0045B868 8CA50000 */   lw    $a1, ($a1)
/* 0045B86C 92220000 */  lbu   $v0, ($s1)
/* 0045B870 24010022 */  li    $at, 34
/* 0045B874 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045B878 14410017 */  bne   $v0, $at, .L0045B8D8
/* 0045B87C 24060039 */   li    $a2, 57
/* 0045B880 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0045B884 8F858044 */  lw    $a1, %got(RO_1000D3DC)($gp)
/* 0045B888 8E040000 */  lw    $a0, ($s0)
/* 0045B88C 24070039 */  li    $a3, 57
/* 0045B890 0320F809 */  jalr  $t9
/* 0045B894 24A5D3DC */   addiu $a1, %lo(RO_1000D3DC) # addiu $a1, $a1, -0x2c24
/* 0045B898 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045B89C 8E040000 */  lw    $a0, ($s0)
/* 0045B8A0 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0045B8A4 0320F809 */  jalr  $t9
/* 0045B8A8 00000000 */   nop   
/* 0045B8AC 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045B8B0 8E040000 */  lw    $a0, ($s0)
/* 0045B8B4 8F9980A0 */  lw    $t9, %call16(fflush)($gp)
/* 0045B8B8 0320F809 */  jalr  $t9
/* 0045B8BC 00000000 */   nop   
/* 0045B8C0 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045B8C4 8F998728 */  lw    $t9, %call16(abort)($gp)
/* 0045B8C8 0320F809 */  jalr  $t9
/* 0045B8CC 00000000 */   nop   
/* 0045B8D0 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045B8D4 92220000 */  lbu   $v0, ($s1)
.L0045B8D8:
/* 0045B8D8 2401001F */  li    $at, 31
/* 0045B8DC 1441FFDA */  bne   $v0, $at, .L0045B848
/* 0045B8E0 00000000 */   nop   
.L0045B8E4:
/* 0045B8E4 8F838B6C */  lw     $v1, %got(curproc)($gp)
/* 0045B8E8 8F898B68 */  lw     $t1, %got(sizethreshold)($gp)
/* 0045B8EC 8C630000 */  lw    $v1, ($v1)
/* 0045B8F0 8D290000 */  lw    $t1, ($t1)
/* 0045B8F4 946A0012 */  lhu   $t2, 0x12($v1)
/* 0045B8F8 012A082A */  slt   $at, $t1, $t2
/* 0045B8FC 5420000D */  bnezl $at, .L0045B934
/* 0045B900 8C620018 */   lw    $v0, 0x18($v1)
/* 0045B904 8F998A90 */  lw     $t9, %got(ctrl_head)($gp)
/* 0045B908 8F390000 */  lw    $t9, ($t9)
/* 0045B90C 53200015 */  beql  $t9, $zero, .L0045B964
/* 0045B910 8FBF0034 */   lw    $ra, 0x34($sp)
/* 0045B914 8F99849C */  lw    $t9, %call16(proc_suppressed)($gp)
/* 0045B918 0320F809 */  jalr  $t9
/* 0045B91C 00000000 */   nop   
/* 0045B920 1040000F */  beqz  $v0, .L0045B960
/* 0045B924 8FBC0030 */   lw    $gp, 0x30($sp)
/* 0045B928 8F838B6C */  lw     $v1, %got(curproc)($gp)
/* 0045B92C 8C630000 */  lw    $v1, ($v1)
/* 0045B930 8C620018 */  lw    $v0, 0x18($v1)
.L0045B934:
/* 0045B934 A072000B */  sb    $s2, 0xb($v1)
/* 0045B938 A072000D */  sb    $s2, 0xd($v1)
/* 0045B93C 50400009 */  beql  $v0, $zero, .L0045B964
/* 0045B940 8FBF0034 */   lw    $ra, 0x34($sp)
/* 0045B944 8C4C0000 */  lw    $t4, ($v0)
.L0045B948:
/* 0045B948 A192000B */  sb    $s2, 0xb($t4)
/* 0045B94C 8C4D0000 */  lw    $t5, ($v0)
/* 0045B950 A1B2000D */  sb    $s2, 0xd($t5)
/* 0045B954 8C420004 */  lw    $v0, 4($v0)
/* 0045B958 5440FFFB */  bnezl $v0, .L0045B948
/* 0045B95C 8C4C0000 */   lw    $t4, ($v0)
.L0045B960:
/* 0045B960 8FBF0034 */  lw    $ra, 0x34($sp)
.L0045B964:
/* 0045B964 8FB00024 */  lw    $s0, 0x24($sp)
/* 0045B968 8FB10028 */  lw    $s1, 0x28($sp)
/* 0045B96C 8FB2002C */  lw    $s2, 0x2c($sp)
/* 0045B970 03E00008 */  jr    $ra
/* 0045B974 27BD0068 */   addiu $sp, $sp, 0x68
    .type oneprocprepass, @function
    .size oneprocprepass, .-oneprocprepass
    .end oneprocprepass

glabel mergecallees
    .ent mergecallees
    # 0045BBEC func_0045BBEC
/* 0045B978 3C1C0FBC */  .cpload $t9
/* 0045B97C 279CE918 */  
/* 0045B980 0399E021 */  
/* 0045B984 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 0045B988 AFBF002C */  sw    $ra, 0x2c($sp)
/* 0045B98C AFBC0028 */  sw    $gp, 0x28($sp)
/* 0045B990 AFB40024 */  sw    $s4, 0x24($sp)
/* 0045B994 AFB30020 */  sw    $s3, 0x20($sp)
/* 0045B998 AFB2001C */  sw    $s2, 0x1c($sp)
/* 0045B99C AFB10018 */  sw    $s1, 0x18($sp)
/* 0045B9A0 AFB00014 */  sw    $s0, 0x14($sp)
/* 0045B9A4 8C830000 */  lw    $v1, ($a0)
/* 0045B9A8 8CAE0000 */  lw    $t6, ($a1)
/* 0045B9AC 00803025 */  move  $a2, $a0
/* 0045B9B0 8C6F0000 */  lw    $t7, ($v1)
/* 0045B9B4 8DC20000 */  lw    $v0, ($t6)
/* 0045B9B8 00A08025 */  move  $s0, $a1
/* 0045B9BC 8DE70000 */  lw    $a3, ($t7)
/* 0045B9C0 0000A025 */  move  $s4, $zero
/* 0045B9C4 24040008 */  li    $a0, 8
/* 0045B9C8 0047082A */  slt   $at, $v0, $a3
/* 0045B9CC 10200012 */  beqz  $at, .L0045BA18
/* 0045B9D0 00000000 */   nop   
/* 0045B9D4 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 0045B9D8 8F938954 */  lw     $s3, %got(perm_heap)($gp)
/* 0045B9DC 24140001 */  li    $s4, 1
/* 0045B9E0 AFA60030 */  sw    $a2, 0x30($sp)
/* 0045B9E4 0320F809 */  jalr  $t9
/* 0045B9E8 02602825 */   move  $a1, $s3
/* 0045B9EC 8E180000 */  lw    $t8, ($s0)
/* 0045B9F0 8FA60030 */  lw    $a2, 0x30($sp)
/* 0045B9F4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045B9F8 AC580000 */  sw    $t8, ($v0)
/* 0045B9FC 8CD90000 */  lw    $t9, ($a2)
/* 0045BA00 00409025 */  move  $s2, $v0
/* 0045BA04 AC590004 */  sw    $t9, 4($v0)
/* 0045BA08 8CD10000 */  lw    $s1, ($a2)
/* 0045BA0C 8E100004 */  lw    $s0, 4($s0)
/* 0045BA10 10000006 */  b     .L0045BA2C
/* 0045BA14 ACC20000 */   sw    $v0, ($a2)
.L0045BA18:
/* 0045BA18 14E20002 */  bne   $a3, $v0, .L0045BA24
/* 0045BA1C 00609025 */   move  $s2, $v1
/* 0045BA20 8E100004 */  lw    $s0, 4($s0)
.L0045BA24:
/* 0045BA24 8C710004 */  lw    $s1, 4($v1)
/* 0045BA28 8F938954 */  lw     $s3, %got(perm_heap)($gp)
.L0045BA2C:
/* 0045BA2C 1200001F */  beqz  $s0, .L0045BAAC
/* 0045BA30 00000000 */   nop   
/* 0045BA34 1220001D */  beqz  $s1, .L0045BAAC
/* 0045BA38 00000000 */   nop   
/* 0045BA3C 8E080000 */  lw    $t0, ($s0)
.L0045BA40:
/* 0045BA40 8E290000 */  lw    $t1, ($s1)
/* 0045BA44 8D020000 */  lw    $v0, ($t0)
/* 0045BA48 8D230000 */  lw    $v1, ($t1)
/* 0045BA4C 0043082A */  slt   $at, $v0, $v1
/* 0045BA50 14200006 */  bnez  $at, .L0045BA6C
/* 0045BA54 00000000 */   nop   
/* 0045BA58 14620002 */  bne   $v1, $v0, .L0045BA64
/* 0045BA5C 02209025 */   move  $s2, $s1
/* 0045BA60 8E100004 */  lw    $s0, 4($s0)
.L0045BA64:
/* 0045BA64 1000000D */  b     .L0045BA9C
/* 0045BA68 8E310004 */   lw    $s1, 4($s1)
.L0045BA6C:
/* 0045BA6C 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 0045BA70 24140001 */  li    $s4, 1
/* 0045BA74 24040008 */  li    $a0, 8
/* 0045BA78 0320F809 */  jalr  $t9
/* 0045BA7C 02602825 */   move  $a1, $s3
/* 0045BA80 AE420004 */  sw    $v0, 4($s2)
/* 0045BA84 8E0A0000 */  lw    $t2, ($s0)
/* 0045BA88 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045BA8C AC510004 */  sw    $s1, 4($v0)
/* 0045BA90 AC4A0000 */  sw    $t2, ($v0)
/* 0045BA94 00409025 */  move  $s2, $v0
/* 0045BA98 8E100004 */  lw    $s0, 4($s0)
.L0045BA9C:
/* 0045BA9C 12000003 */  beqz  $s0, .L0045BAAC
/* 0045BAA0 00000000 */   nop   
/* 0045BAA4 5620FFE6 */  bnezl $s1, .L0045BA40
/* 0045BAA8 8E080000 */   lw    $t0, ($s0)
.L0045BAAC:
/* 0045BAAC 56200013 */  bnezl $s1, .L0045BAFC
/* 0045BAB0 8FBF002C */   lw    $ra, 0x2c($sp)
/* 0045BAB4 52000011 */  beql  $s0, $zero, .L0045BAFC
/* 0045BAB8 8FBF002C */   lw    $ra, 0x2c($sp)
/* 0045BABC 24140001 */  li    $s4, 1
.L0045BAC0:
/* 0045BAC0 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 0045BAC4 24040008 */  li    $a0, 8
/* 0045BAC8 02602825 */  move  $a1, $s3
/* 0045BACC 0320F809 */  jalr  $t9
/* 0045BAD0 00000000 */   nop   
/* 0045BAD4 AE420004 */  sw    $v0, 4($s2)
/* 0045BAD8 8E0B0000 */  lw    $t3, ($s0)
/* 0045BADC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045BAE0 00409025 */  move  $s2, $v0
/* 0045BAE4 AC4B0000 */  sw    $t3, ($v0)
/* 0045BAE8 8E100004 */  lw    $s0, 4($s0)
/* 0045BAEC 1600FFF4 */  bnez  $s0, .L0045BAC0
/* 0045BAF0 00000000 */   nop   
/* 0045BAF4 AC400004 */  sw    $zero, 4($v0)
/* 0045BAF8 8FBF002C */  lw    $ra, 0x2c($sp)
.L0045BAFC:
/* 0045BAFC 02801025 */  move  $v0, $s4
/* 0045BB00 8FB40024 */  lw    $s4, 0x24($sp)
/* 0045BB04 8FB00014 */  lw    $s0, 0x14($sp)
/* 0045BB08 8FB10018 */  lw    $s1, 0x18($sp)
/* 0045BB0C 8FB2001C */  lw    $s2, 0x1c($sp)
/* 0045BB10 8FB30020 */  lw    $s3, 0x20($sp)
/* 0045BB14 03E00008 */  jr    $ra
/* 0045BB18 27BD0030 */   addiu $sp, $sp, 0x30
    .type mergecallees, @function
    .size mergecallees, .-mergecallees
    .end mergecallees

    .type func_0045BB1C, @function
func_0045BB1C:
    # 0045BB1C func_0045BB1C
    # 0045BE98 processcallgraph
/* 0045BB1C 3C1C0FBC */  .cpload $t9
/* 0045BB20 279CE774 */  
/* 0045BB24 0399E021 */  
/* 0045BB28 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0045BB2C AFB2001C */  sw    $s2, 0x1c($sp)
/* 0045BB30 AFB10018 */  sw    $s1, 0x18($sp)
/* 0045BB34 AFB00014 */  sw    $s0, 0x14($sp)
/* 0045BB38 00808025 */  move  $s0, $a0
/* 0045BB3C 24110001 */  li    $s1, 1
/* 0045BB40 00409025 */  move  $s2, $v0
/* 0045BB44 AFBF0024 */  sw    $ra, 0x24($sp)
/* 0045BB48 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0045BB4C 12000021 */  beqz  $s0, .L0045BBD4
/* 0045BB50 300400FF */   andi  $a0, $zero, 0xff
.L0045BB54:
/* 0045BB54 A200000A */  sb    $zero, 0xa($s0)
/* 0045BB58 14800014 */  bnez  $a0, .L0045BBAC
/* 0045BB5C 8E030018 */   lw    $v1, 0x18($s0)
/* 0045BB60 10600012 */  beqz  $v1, .L0045BBAC
/* 0045BB64 00000000 */   nop   
/* 0045BB68 8C620000 */  lw    $v0, ($v1)
.L0045BB6C:
/* 0045BB6C 904E0008 */  lbu   $t6, 8($v0)
/* 0045BB70 55C0000A */  bnezl $t6, .L0045BB9C
/* 0045BB74 8C630004 */   lw    $v1, 4($v1)
/* 0045BB78 920F0010 */  lbu   $t7, 0x10($s0)
/* 0045BB7C 90580010 */  lbu   $t8, 0x10($v0)
/* 0045BB80 01F8082B */  sltu  $at, $t7, $t8
/* 0045BB84 50200005 */  beql  $at, $zero, .L0045BB9C
/* 0045BB88 8C630004 */   lw    $v1, 4($v1)
/* 0045BB8C A211000A */  sb    $s1, 0xa($s0)
/* 0045BB90 10000002 */  b     .L0045BB9C
/* 0045BB94 322400FF */   andi  $a0, $s1, 0xff
/* 0045BB98 8C630004 */  lw    $v1, 4($v1)
.L0045BB9C:
/* 0045BB9C 14800003 */  bnez  $a0, .L0045BBAC
/* 0045BBA0 00000000 */   nop   
/* 0045BBA4 5460FFF1 */  bnezl $v1, .L0045BB6C
/* 0045BBA8 8C620000 */   lw    $v0, ($v1)
.L0045BBAC:
/* 0045BBAC 8F99802C */  lw    $t9, %got(func_0045BB1C)($gp)
/* 0045BBB0 8E04002C */  lw    $a0, 0x2c($s0)
/* 0045BBB4 02401025 */  move  $v0, $s2
/* 0045BBB8 2739BB1C */  addiu $t9, %lo(func_0045BB1C) # addiu $t9, $t9, -0x44e4
/* 0045BBBC 0320F809 */  jalr  $t9
/* 0045BBC0 00000000 */   nop   
/* 0045BBC4 8E100030 */  lw    $s0, 0x30($s0)
/* 0045BBC8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0045BBCC 5600FFE1 */  bnezl $s0, .L0045BB54
/* 0045BBD0 300400FF */   andi  $a0, $zero, 0xff
.L0045BBD4:
/* 0045BBD4 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0045BBD8 8FB00014 */  lw    $s0, 0x14($sp)
/* 0045BBDC 8FB10018 */  lw    $s1, 0x18($sp)
/* 0045BBE0 8FB2001C */  lw    $s2, 0x1c($sp)
/* 0045BBE4 03E00008 */  jr    $ra
/* 0045BBE8 27BD0028 */   addiu $sp, $sp, 0x28

    .type func_0045BBEC, @function
func_0045BBEC:
    # 0045BBEC func_0045BBEC
    # 0045BE98 processcallgraph
/* 0045BBEC 3C1C0FBC */  .cpload $t9
/* 0045BBF0 279CE6A4 */  
/* 0045BBF4 0399E021 */  
/* 0045BBF8 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0045BBFC AFB2001C */  sw    $s2, 0x1c($sp)
/* 0045BC00 AFB10018 */  sw    $s1, 0x18($sp)
/* 0045BC04 00808825 */  move  $s1, $a0
/* 0045BC08 00409025 */  move  $s2, $v0
/* 0045BC0C AFBF0024 */  sw    $ra, 0x24($sp)
/* 0045BC10 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0045BC14 AFB00014 */  sw    $s0, 0x14($sp)
/* 0045BC18 5220001E */  beql  $s1, $zero, .L0045BC94
/* 0045BC1C 8FBF0024 */   lw    $ra, 0x24($sp)
/* 0045BC20 8E220018 */  lw    $v0, 0x18($s1)
.L0045BC24:
/* 0045BC24 10400010 */  beqz  $v0, .L0045BC68
/* 0045BC28 00408025 */   move  $s0, $v0
/* 0045BC2C 8E0E0000 */  lw    $t6, ($s0)
.L0045BC30:
/* 0045BC30 8DC50018 */  lw    $a1, 0x18($t6)
/* 0045BC34 50A0000A */  beql  $a1, $zero, .L0045BC60
/* 0045BC38 8E100004 */   lw    $s0, 4($s0)
/* 0045BC3C 8F998478 */  lw    $t9, %call16(mergecallees)($gp)
/* 0045BC40 26240018 */  addiu $a0, $s1, 0x18
/* 0045BC44 0320F809 */  jalr  $t9
/* 0045BC48 00000000 */   nop   
/* 0045BC4C 10400003 */  beqz  $v0, .L0045BC5C
/* 0045BC50 8FBC0020 */   lw    $gp, 0x20($sp)
/* 0045BC54 240F0001 */  li    $t7, 1
/* 0045BC58 A24FFFFF */  sb    $t7, -1($s2)
.L0045BC5C:
/* 0045BC5C 8E100004 */  lw    $s0, 4($s0)
.L0045BC60:
/* 0045BC60 5600FFF3 */  bnezl $s0, .L0045BC30
/* 0045BC64 8E0E0000 */   lw    $t6, ($s0)
.L0045BC68:
/* 0045BC68 8F99802C */  lw    $t9, %got(func_0045BBEC)($gp)
/* 0045BC6C 8E24002C */  lw    $a0, 0x2c($s1)
/* 0045BC70 02401025 */  move  $v0, $s2
/* 0045BC74 2739BBEC */  addiu $t9, %lo(func_0045BBEC) # addiu $t9, $t9, -0x4414
/* 0045BC78 0320F809 */  jalr  $t9
/* 0045BC7C 00000000 */   nop   
/* 0045BC80 8E310030 */  lw    $s1, 0x30($s1)
/* 0045BC84 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0045BC88 5620FFE6 */  bnezl $s1, .L0045BC24
/* 0045BC8C 8E220018 */   lw    $v0, 0x18($s1)
/* 0045BC90 8FBF0024 */  lw    $ra, 0x24($sp)
.L0045BC94:
/* 0045BC94 8FB00014 */  lw    $s0, 0x14($sp)
/* 0045BC98 8FB10018 */  lw    $s1, 0x18($sp)
/* 0045BC9C 8FB2001C */  lw    $s2, 0x1c($sp)
/* 0045BCA0 03E00008 */  jr    $ra
/* 0045BCA4 27BD0028 */   addiu $sp, $sp, 0x28

    .type func_0045BCA8, @function
func_0045BCA8:
    # 0045BCA8 func_0045BCA8
    # 0045BE98 processcallgraph
/* 0045BCA8 3C1C0FBC */  .cpload $t9
/* 0045BCAC 279CE5E8 */  
/* 0045BCB0 0399E021 */  
/* 0045BCB4 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 0045BCB8 AFB5002C */  sw    $s5, 0x2c($sp)
/* 0045BCBC AFB40028 */  sw    $s4, 0x28($sp)
/* 0045BCC0 AFB30024 */  sw    $s3, 0x24($sp)
/* 0045BCC4 AFB20020 */  sw    $s2, 0x20($sp)
/* 0045BCC8 AFB1001C */  sw    $s1, 0x1c($sp)
/* 0045BCCC AFB00018 */  sw    $s0, 0x18($sp)
/* 0045BCD0 00808025 */  move  $s0, $a0
/* 0045BCD4 24110001 */  li    $s1, 1
/* 0045BCD8 00409025 */  move  $s2, $v0
/* 0045BCDC 2413FFFF */  li    $s3, -1
/* 0045BCE0 24140024 */  li    $s4, 36
/* 0045BCE4 8F958A5C */  lw     $s5, %got(lang)($gp)
/* 0045BCE8 AFBF0034 */  sw    $ra, 0x34($sp)
/* 0045BCEC AFBC0030 */  sw    $gp, 0x30($sp)
/* 0045BCF0 52000061 */  beql  $s0, $zero, .L0045BE78
/* 0045BCF4 8FBF0034 */   lw    $ra, 0x34($sp)
/* 0045BCF8 9202000C */  lbu   $v0, 0xc($s0)
.L0045BCFC:
/* 0045BCFC 10400005 */  beqz  $v0, .L0045BD14
/* 0045BD00 00000000 */   nop   
/* 0045BD04 920E000B */  lbu   $t6, 0xb($s0)
/* 0045BD08 2DCF0001 */  sltiu $t7, $t6, 1
/* 0045BD0C A20F000C */  sb    $t7, 0xc($s0)
/* 0045BD10 31E200FF */  andi  $v0, $t7, 0xff
.L0045BD14:
/* 0045BD14 50400019 */  beql  $v0, $zero, .L0045BD7C
/* 0045BD18 AE000024 */   sw    $zero, 0x24($s0)
/* 0045BD1C 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 0045BD20 240400B0 */  li    $a0, 176
/* 0045BD24 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 0045BD28 0320F809 */  jalr  $t9
/* 0045BD2C 00000000 */   nop   
/* 0045BD30 24030001 */  li    $v1, 1
/* 0045BD34 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045BD38 AE020024 */  sw    $v0, 0x24($s0)
/* 0045BD3C 0003C880 */  sll   $t9, $v1, 2
/* 0045BD40 24180001 */  li    $t8, 1
/* 0045BD44 AE58FFF8 */  sw    $t8, -8($s2)
/* 0045BD48 00592821 */  addu  $a1, $v0, $t9
/* 0045BD4C 00432021 */  addu  $a0, $v0, $v1
.L0045BD50:
/* 0045BD50 A080FFFF */  sb    $zero, -1($a0)
/* 0045BD54 24680001 */  addiu $t0, $v1, 1
/* 0045BD58 24630001 */  addiu $v1, $v1, 1
/* 0045BD5C ACB30020 */  sw    $s3, 0x20($a1)
/* 0045BD60 AE48FFF8 */  sw    $t0, -8($s2)
/* 0045BD64 24840001 */  addiu $a0, $a0, 1
/* 0045BD68 1683FFF9 */  bne   $s4, $v1, .L0045BD50
/* 0045BD6C 24A50004 */   addiu $a1, $a1, 4
/* 0045BD70 10000003 */  b     .L0045BD80
/* 0045BD74 9209000D */   lbu   $t1, 0xd($s0)
/* 0045BD78 AE000024 */  sw    $zero, 0x24($s0)
.L0045BD7C:
/* 0045BD7C 9209000D */  lbu   $t1, 0xd($s0)
.L0045BD80:
/* 0045BD80 5120000A */  beql  $t1, $zero, .L0045BDAC
/* 0045BD84 920B0008 */   lbu   $t3, 8($s0)
/* 0045BD88 8E020018 */  lw    $v0, 0x18($s0)
/* 0045BD8C 50400007 */  beql  $v0, $zero, .L0045BDAC
/* 0045BD90 920B0008 */   lbu   $t3, 8($s0)
/* 0045BD94 8C4A0000 */  lw    $t2, ($v0)
.L0045BD98:
/* 0045BD98 A151000D */  sb    $s1, 0xd($t2)
/* 0045BD9C 8C420004 */  lw    $v0, 4($v0)
/* 0045BDA0 5440FFFD */  bnezl $v0, .L0045BD98
/* 0045BDA4 8C4A0000 */   lw    $t2, ($v0)
/* 0045BDA8 920B0008 */  lbu   $t3, 8($s0)
.L0045BDAC:
/* 0045BDAC 8E020018 */  lw    $v0, 0x18($s0)
/* 0045BDB0 2D6C0001 */  sltiu $t4, $t3, 1
/* 0045BDB4 318300FF */  andi  $v1, $t4, 0xff
/* 0045BDB8 1460000F */  bnez  $v1, .L0045BDF8
/* 0045BDBC A20C0009 */   sb    $t4, 9($s0)
/* 0045BDC0 5040000E */  beql  $v0, $zero, .L0045BDFC
/* 0045BDC4 92AF0000 */   lbu   $t7, ($s5)
/* 0045BDC8 8C4D0000 */  lw    $t5, ($v0)
.L0045BDCC:
/* 0045BDCC 91AE0008 */  lbu   $t6, 8($t5)
/* 0045BDD0 55C00005 */  bnezl $t6, .L0045BDE8
/* 0045BDD4 8C420004 */   lw    $v0, 4($v0)
/* 0045BDD8 A2110009 */  sb    $s1, 9($s0)
/* 0045BDDC 10000002 */  b     .L0045BDE8
/* 0045BDE0 322300FF */   andi  $v1, $s1, 0xff
/* 0045BDE4 8C420004 */  lw    $v0, 4($v0)
.L0045BDE8:
/* 0045BDE8 54600004 */  bnezl $v1, .L0045BDFC
/* 0045BDEC 92AF0000 */   lbu   $t7, ($s5)
/* 0045BDF0 5440FFF6 */  bnezl $v0, .L0045BDCC
/* 0045BDF4 8C4D0000 */   lw    $t5, ($v0)
.L0045BDF8:
/* 0045BDF8 92AF0000 */  lbu   $t7, ($s5)
.L0045BDFC:
/* 0045BDFC 15E00013 */  bnez  $t7, .L0045BE4C
/* 0045BE00 00000000 */   nop   
/* 0045BE04 9203000F */  lbu   $v1, 0xf($s0)
/* 0045BE08 8E020018 */  lw    $v0, 0x18($s0)
/* 0045BE0C 1460000F */  bnez  $v1, .L0045BE4C
/* 0045BE10 00000000 */   nop   
/* 0045BE14 1040000D */  beqz  $v0, .L0045BE4C
/* 0045BE18 00000000 */   nop   
/* 0045BE1C 8C580000 */  lw    $t8, ($v0)
.L0045BE20:
/* 0045BE20 9319000F */  lbu   $t9, 0xf($t8)
/* 0045BE24 53200005 */  beql  $t9, $zero, .L0045BE3C
/* 0045BE28 8C420004 */   lw    $v0, 4($v0)
/* 0045BE2C A211000F */  sb    $s1, 0xf($s0)
/* 0045BE30 10000002 */  b     .L0045BE3C
/* 0045BE34 322300FF */   andi  $v1, $s1, 0xff
/* 0045BE38 8C420004 */  lw    $v0, 4($v0)
.L0045BE3C:
/* 0045BE3C 14600003 */  bnez  $v1, .L0045BE4C
/* 0045BE40 00000000 */   nop   
/* 0045BE44 5440FFF6 */  bnezl $v0, .L0045BE20
/* 0045BE48 8C580000 */   lw    $t8, ($v0)
.L0045BE4C:
/* 0045BE4C 8F99802C */  lw    $t9, %got(func_0045BCA8)($gp)
/* 0045BE50 8E04002C */  lw    $a0, 0x2c($s0)
/* 0045BE54 02401025 */  move  $v0, $s2
/* 0045BE58 2739BCA8 */  addiu $t9, %lo(func_0045BCA8) # addiu $t9, $t9, -0x4358
/* 0045BE5C 0320F809 */  jalr  $t9
/* 0045BE60 00000000 */   nop   
/* 0045BE64 8E100030 */  lw    $s0, 0x30($s0)
/* 0045BE68 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045BE6C 5600FFA3 */  bnezl $s0, .L0045BCFC
/* 0045BE70 9202000C */   lbu   $v0, 0xc($s0)
/* 0045BE74 8FBF0034 */  lw    $ra, 0x34($sp)
.L0045BE78:
/* 0045BE78 8FB00018 */  lw    $s0, 0x18($sp)
/* 0045BE7C 8FB1001C */  lw    $s1, 0x1c($sp)
/* 0045BE80 8FB20020 */  lw    $s2, 0x20($sp)
/* 0045BE84 8FB30024 */  lw    $s3, 0x24($sp)
/* 0045BE88 8FB40028 */  lw    $s4, 0x28($sp)
/* 0045BE8C 8FB5002C */  lw    $s5, 0x2c($sp)
/* 0045BE90 03E00008 */  jr    $ra
/* 0045BE94 27BD0038 */   addiu $sp, $sp, 0x38

glabel processcallgraph
    .ent processcallgraph
    # 0045C150 prepass
/* 0045BE98 3C1C0FBC */  .cpload $t9
/* 0045BE9C 279CE3F8 */  
/* 0045BEA0 0399E021 */  
/* 0045BEA4 8F8E8A5C */  lw     $t6, %got(lang)($gp)
/* 0045BEA8 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 0045BEAC 24010003 */  li    $at, 3
/* 0045BEB0 91CE0000 */  lbu   $t6, ($t6)
/* 0045BEB4 AFBF0024 */  sw    $ra, 0x24($sp)
/* 0045BEB8 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0045BEBC AFB1001C */  sw    $s1, 0x1c($sp)
/* 0045BEC0 15C10008 */  bne   $t6, $at, .L0045BEE4
/* 0045BEC4 AFB00018 */   sw    $s0, 0x18($sp)
/* 0045BEC8 8F99802C */  lw    $t9, %got(func_0045BB1C)($gp)
/* 0045BECC 8F908C4C */  lw     $s0, %got(prochead)($gp)
/* 0045BED0 27A20030 */  addiu $v0, $sp, 0x30
/* 0045BED4 2739BB1C */  addiu $t9, %lo(func_0045BB1C) # addiu $t9, $t9, -0x44e4
/* 0045BED8 0320F809 */  jalr  $t9
/* 0045BEDC 8E040000 */   lw    $a0, ($s0)
/* 0045BEE0 8FBC0020 */  lw    $gp, 0x20($sp)
.L0045BEE4:
/* 0045BEE4 8F908C4C */  lw     $s0, %got(prochead)($gp)
/* 0045BEE8 27B10030 */  addiu $s1, $sp, 0x30
.L0045BEEC:
/* 0045BEEC 8F99802C */  lw    $t9, %got(func_0045BBEC)($gp)
/* 0045BEF0 A3A0002F */  sb    $zero, 0x2f($sp)
/* 0045BEF4 8E040000 */  lw    $a0, ($s0)
/* 0045BEF8 2739BBEC */  addiu $t9, %lo(func_0045BBEC) # addiu $t9, $t9, -0x4414
/* 0045BEFC 0320F809 */  jalr  $t9
/* 0045BF00 02201025 */   move  $v0, $s1
/* 0045BF04 93AF002F */  lbu   $t7, 0x2f($sp)
/* 0045BF08 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0045BF0C 15E0FFF7 */  bnez  $t7, .L0045BEEC
/* 0045BF10 00000000 */   nop   
/* 0045BF14 8F99802C */  lw    $t9, %got(func_0045BCA8)($gp)
/* 0045BF18 8E040000 */  lw    $a0, ($s0)
/* 0045BF1C 02201025 */  move  $v0, $s1
/* 0045BF20 2739BCA8 */  addiu $t9, %lo(func_0045BCA8) # addiu $t9, $t9, -0x4358
/* 0045BF24 0320F809 */  jalr  $t9
/* 0045BF28 00000000 */   nop   
/* 0045BF2C 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0045BF30 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0045BF34 8FB00018 */  lw    $s0, 0x18($sp)
/* 0045BF38 8FB1001C */  lw    $s1, 0x1c($sp)
/* 0045BF3C 03E00008 */  jr    $ra
/* 0045BF40 27BD0030 */   addiu $sp, $sp, 0x30
    .type processcallgraph, @function
    .size processcallgraph, .-processcallgraph
    .end processcallgraph

glabel checkforvreg
    .ent checkforvreg
    # 0045BF44 checkforvreg
    # 0045C0E0 findallvregs
/* 0045BF44 3C1C0FBC */  .cpload $t9
/* 0045BF48 279CE34C */  
/* 0045BF4C 0399E021 */  
/* 0045BF50 27BDFFA8 */  addiu $sp, $sp, -0x58
/* 0045BF54 AFBE0040 */  sw    $fp, 0x40($sp)
/* 0045BF58 AFB70038 */  sw    $s7, 0x38($sp)
/* 0045BF5C AFB50030 */  sw    $s5, 0x30($sp)
/* 0045BF60 AFB4002C */  sw    $s4, 0x2c($sp)
/* 0045BF64 AFB20024 */  sw    $s2, 0x24($sp)
/* 0045BF68 00809025 */  move  $s2, $a0
/* 0045BF6C 93B4004E */  lbu   $s4, 0x4e($sp)
/* 0045BF70 24150001 */  li    $s5, 1
/* 0045BF74 24170C29 */  li    $s7, 3113
/* 0045BF78 8F9E8DF4 */  lw     $fp, %got(ldatab)($gp)
/* 0045BF7C AFBF0044 */  sw    $ra, 0x44($sp)
/* 0045BF80 AFBC003C */  sw    $gp, 0x3c($sp)
/* 0045BF84 AFB60034 */  sw    $s6, 0x34($sp)
/* 0045BF88 AFB30028 */  sw    $s3, 0x28($sp)
/* 0045BF8C AFB10020 */  sw    $s1, 0x20($sp)
/* 0045BF90 AFB0001C */  sw    $s0, 0x1c($sp)
.L0045BF94:
/* 0045BF94 52400047 */  beql  $s2, $zero, .L0045C0B4
/* 0045BF98 8FBF0044 */   lw    $ra, 0x44($sp)
/* 0045BF9C 924E0001 */  lbu   $t6, 1($s2)
/* 0045BFA0 0240B025 */  move  $s6, $s2
/* 0045BFA4 15C0003B */  bnez  $t6, .L0045C094
/* 0045BFA8 00000000 */   nop   
/* 0045BFAC 924F0002 */  lbu   $t7, 2($s2)
/* 0045BFB0 15E00038 */  bnez  $t7, .L0045C094
/* 0045BFB4 00000000 */   nop   
/* 0045BFB8 8E580008 */  lw    $t8, 8($s2)
/* 0045BFBC 0018CAC2 */  srl   $t9, $t8, 0xb
/* 0045BFC0 0337001A */  div   $zero, $t9, $s7
/* 0045BFC4 00001010 */  mfhi  $v0
/* 0045BFC8 00574026 */  xor   $t0, $v0, $s7
/* 0045BFCC 16E00002 */  bnez  $s7, .L0045BFD8
/* 0045BFD0 00000000 */   nop   
/* 0045BFD4 0007000D */  break 7
.L0045BFD8:
/* 0045BFD8 2401FFFF */  li    $at, -1
/* 0045BFDC 16E10004 */  bne   $s7, $at, .L0045BFF0
/* 0045BFE0 3C018000 */   lui   $at, 0x8000
/* 0045BFE4 17210002 */  bne   $t9, $at, .L0045BFF0
/* 0045BFE8 00000000 */   nop   
/* 0045BFEC 0006000D */  break 6
.L0045BFF0:
/* 0045BFF0 05030003 */  bgezl $t0, .L0045C000
/* 0045BFF4 00024880 */   sll   $t1, $v0, 2
/* 0045BFF8 00571021 */  addu  $v0, $v0, $s7
/* 0045BFFC 00024880 */  sll   $t1, $v0, 2
.L0045C000:
/* 0045C000 03C95021 */  addu  $t2, $fp, $t1
/* 0045C004 8D500000 */  lw    $s0, ($t2)
/* 0045C008 00008825 */  move  $s1, $zero
/* 0045C00C 5200001C */  beql  $s0, $zero, .L0045C080
/* 0045C010 2E230001 */   sltiu $v1, $s1, 1
/* 0045C014 26530004 */  addiu $s3, $s2, 4
/* 0045C018 8E640000 */  lw    $a0, ($s3)
.L0045C01C:
/* 0045C01C 8F99842C */  lw    $t9, %call16(compareloc)($gp)
/* 0045C020 8E4F000C */  lw    $t7, 0xc($s2)
/* 0045C024 AFA40000 */  sw    $a0, ($sp)
/* 0045C028 8E650004 */  lw    $a1, 4($s3)
/* 0045C02C 8E180008 */  lw    $t8, 8($s0)
/* 0045C030 AFA50004 */  sw    $a1, 4($sp)
/* 0045C034 8E060000 */  lw    $a2, ($s0)
/* 0045C038 AFB80014 */  sw    $t8, 0x14($sp)
/* 0045C03C AFA60008 */  sw    $a2, 8($sp)
/* 0045C040 8E070004 */  lw    $a3, 4($s0)
/* 0045C044 AFAF0010 */  sw    $t7, 0x10($sp)
/* 0045C048 0320F809 */  jalr  $t9
/* 0045C04C AFA7000C */   sw    $a3, 0xc($sp)
/* 0045C050 305900FF */  andi  $t9, $v0, 0xff
/* 0045C054 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0045C058 12B90003 */  beq   $s5, $t9, .L0045C068
/* 0045C05C 305400FF */   andi  $s4, $v0, 0xff
/* 0045C060 10000002 */  b     .L0045C06C
/* 0045C064 32B100FF */   andi  $s1, $s5, 0xff
.L0045C068:
/* 0045C068 8E10000C */  lw    $s0, 0xc($s0)
.L0045C06C:
/* 0045C06C 56200004 */  bnezl $s1, .L0045C080
/* 0045C070 2E230001 */   sltiu $v1, $s1, 1
/* 0045C074 5600FFE9 */  bnezl $s0, .L0045C01C
/* 0045C078 8E640000 */   lw    $a0, ($s3)
/* 0045C07C 2E230001 */  sltiu $v1, $s1, 1
.L0045C080:
/* 0045C080 54600004 */  bnezl $v1, .L0045C094
/* 0045C084 A2430002 */   sb    $v1, 2($s2)
/* 0045C088 3A830002 */  xori  $v1, $s4, 2
/* 0045C08C 2C630001 */  sltiu $v1, $v1, 1
/* 0045C090 A2430002 */  sb    $v1, 2($s2)
.L0045C094:
/* 0045C094 8F998480 */  lw    $t9, %call16(checkforvreg)($gp)
/* 0045C098 8E440010 */  lw    $a0, 0x10($s2)
/* 0045C09C 0320F809 */  jalr  $t9
/* 0045C0A0 00000000 */   nop   
/* 0045C0A4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0045C0A8 1000FFBA */  b     .L0045BF94
/* 0045C0AC 8ED20014 */   lw    $s2, 0x14($s6)
/* 0045C0B0 8FBF0044 */  lw    $ra, 0x44($sp)
.L0045C0B4:
/* 0045C0B4 8FB0001C */  lw    $s0, 0x1c($sp)
/* 0045C0B8 8FB10020 */  lw    $s1, 0x20($sp)
/* 0045C0BC 8FB20024 */  lw    $s2, 0x24($sp)
/* 0045C0C0 8FB30028 */  lw    $s3, 0x28($sp)
/* 0045C0C4 8FB4002C */  lw    $s4, 0x2c($sp)
/* 0045C0C8 8FB50030 */  lw    $s5, 0x30($sp)
/* 0045C0CC 8FB60034 */  lw    $s6, 0x34($sp)
/* 0045C0D0 8FB70038 */  lw    $s7, 0x38($sp)
/* 0045C0D4 8FBE0040 */  lw    $fp, 0x40($sp)
/* 0045C0D8 03E00008 */  jr    $ra
/* 0045C0DC 27BD0058 */   addiu $sp, $sp, 0x58
    .type checkforvreg, @function
    .size checkforvreg, .-checkforvreg
    .end checkforvreg

glabel findallvregs
    .ent findallvregs
    # 0045C0E0 findallvregs
    # 0045C150 prepass
/* 0045C0E0 3C1C0FBC */  .cpload $t9
/* 0045C0E4 279CE1B0 */  
/* 0045C0E8 0399E021 */  
/* 0045C0EC 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0045C0F0 AFB00014 */  sw    $s0, 0x14($sp)
/* 0045C0F4 00808025 */  move  $s0, $a0
/* 0045C0F8 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0045C0FC AFBC0018 */  sw    $gp, 0x18($sp)
/* 0045C100 5200000F */  beql  $s0, $zero, .L0045C140
/* 0045C104 8FBF001C */   lw    $ra, 0x1c($sp)
.L0045C108:
/* 0045C108 8F998480 */  lw    $t9, %call16(checkforvreg)($gp)
/* 0045C10C 8E040004 */  lw    $a0, 4($s0)
/* 0045C110 0320F809 */  jalr  $t9
/* 0045C114 00000000 */   nop   
/* 0045C118 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0045C11C 8E04002C */  lw    $a0, 0x2c($s0)
/* 0045C120 8F998484 */  lw    $t9, %call16(findallvregs)($gp)
/* 0045C124 0320F809 */  jalr  $t9
/* 0045C128 00000000 */   nop   
/* 0045C12C 8E100030 */  lw    $s0, 0x30($s0)
/* 0045C130 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0045C134 1600FFF4 */  bnez  $s0, .L0045C108
/* 0045C138 00000000 */   nop   
/* 0045C13C 8FBF001C */  lw    $ra, 0x1c($sp)
.L0045C140:
/* 0045C140 8FB00014 */  lw    $s0, 0x14($sp)
/* 0045C144 27BD0020 */  addiu $sp, $sp, 0x20
/* 0045C148 03E00008 */  jr    $ra
/* 0045C14C 00000000 */   nop   
    .type findallvregs, @function
    .size findallvregs, .-findallvregs
    .end findallvregs

glabel prepass
    .ent prepass
    # 0043771C optinit
/* 0045C150 3C1C0FBC */  .cpload $t9
/* 0045C154 279CE140 */  
/* 0045C158 0399E021 */  
/* 0045C15C 8F8189D8 */  lw     $at, %got(maxlabnam)($gp)
/* 0045C160 27BDFFC0 */  addiu $sp, $sp, -0x40
/* 0045C164 8F9988C8 */  lw    $t9, %call16(alloc_mark)($gp)
/* 0045C168 AC200000 */  sw    $zero, ($at)
/* 0045C16C 8F818AFC */  lw     $at, %got(someusefp)($gp)
/* 0045C170 AFBF0034 */  sw    $ra, 0x34($sp)
/* 0045C174 AFBC0030 */  sw    $gp, 0x30($sp)
/* 0045C178 A0200000 */  sb    $zero, ($at)
/* 0045C17C 8F818A60 */  lw     $at, %got(inlopt)($gp)
/* 0045C180 AFB5002C */  sw    $s5, 0x2c($sp)
/* 0045C184 AFB40028 */  sw    $s4, 0x28($sp)
/* 0045C188 AFB30024 */  sw    $s3, 0x24($sp)
/* 0045C18C AFB20020 */  sw    $s2, 0x20($sp)
/* 0045C190 AFB1001C */  sw    $s1, 0x1c($sp)
/* 0045C194 AFB00018 */  sw    $s0, 0x18($sp)
/* 0045C198 8F8488E8 */  lw     $a0, %got(lda_heap)($gp)
/* 0045C19C 0320F809 */  jalr  $t9
/* 0045C1A0 A0200000 */   sb    $zero, ($at)
/* 0045C1A4 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045C1A8 AFA20038 */  sw    $v0, 0x38($sp)
/* 0045C1AC 240500A1 */  li    $a1, 161
/* 0045C1B0 8F828DF4 */  lw     $v0, %got(ldatab)($gp)
/* 0045C1B4 30A80003 */  andi  $t0, $a1, 3
/* 0045C1B8 244330A4 */  addiu $v1, $v0, 0x30a4
.L0045C1BC:
/* 0045C1BC 24420004 */  addiu $v0, $v0, 4
/* 0045C1C0 1443FFFE */  bne   $v0, $v1, .L0045C1BC
/* 0045C1C4 AC40FFFC */   sw    $zero, -4($v0)
/* 0045C1C8 1100000F */  beqz  $t0, .L0045C208
/* 0045C1CC 00002025 */   move  $a0, $zero
/* 0045C1D0 8F8F8DC8 */  lw     $t7, %got(fsymtab)($gp)
/* 0045C1D4 8F988DCC */  lw     $t8, %got(gp_rel_tab)($gp)
/* 0045C1D8 00003880 */  sll   $a3, $zero, 2
/* 0045C1DC 01003025 */  move  $a2, $t0
/* 0045C1E0 00EF1821 */  addu  $v1, $a3, $t7
/* 0045C1E4 00F81021 */  addu  $v0, $a3, $t8
.L0045C1E8:
/* 0045C1E8 24840001 */  addiu $a0, $a0, 1
/* 0045C1EC AC600000 */  sw    $zero, ($v1)
/* 0045C1F0 AC400000 */  sw    $zero, ($v0)
/* 0045C1F4 24630004 */  addiu $v1, $v1, 4
/* 0045C1F8 14C4FFFB */  bne   $a2, $a0, .L0045C1E8
/* 0045C1FC 24420004 */   addiu $v0, $v0, 4
/* 0045C200 10850013 */  beq   $a0, $a1, .L0045C250
/* 0045C204 00000000 */   nop   
.L0045C208:
/* 0045C208 8F898DCC */  lw     $t1, %got(gp_rel_tab)($gp)
/* 0045C20C 8F998DC8 */  lw     $t9, %got(fsymtab)($gp)
/* 0045C210 00043880 */  sll   $a3, $a0, 2
/* 0045C214 00055080 */  sll   $t2, $a1, 2
/* 0045C218 01493021 */  addu  $a2, $t2, $t1
/* 0045C21C 00E91021 */  addu  $v0, $a3, $t1
/* 0045C220 00F91821 */  addu  $v1, $a3, $t9
.L0045C224:
/* 0045C224 24420010 */  addiu $v0, $v0, 0x10
/* 0045C228 AC600000 */  sw    $zero, ($v1)
/* 0045C22C AC40FFF0 */  sw    $zero, -0x10($v0)
/* 0045C230 AC600004 */  sw    $zero, 4($v1)
/* 0045C234 AC40FFF4 */  sw    $zero, -0xc($v0)
/* 0045C238 AC600008 */  sw    $zero, 8($v1)
/* 0045C23C AC40FFF8 */  sw    $zero, -8($v0)
/* 0045C240 AC60000C */  sw    $zero, 0xc($v1)
/* 0045C244 AC40FFFC */  sw    $zero, -4($v0)
/* 0045C248 1446FFF6 */  bne   $v0, $a2, .L0045C224
/* 0045C24C 24630010 */   addiu $v1, $v1, 0x10
.L0045C250:
/* 0045C250 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 0045C254 8F928954 */  lw     $s2, %got(perm_heap)($gp)
/* 0045C258 8F818C4C */  lw     $at, %got(prochead)($gp)
/* 0045C25C 2404003C */  li    $a0, 60
/* 0045C260 02402825 */  move  $a1, $s2
/* 0045C264 0320F809 */  jalr  $t9
/* 0045C268 AC200000 */   sw    $zero, ($at)
/* 0045C26C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045C270 24110001 */  li    $s1, 1
/* 0045C274 2413FFFF */  li    $s3, -1
/* 0045C278 8F838B70 */  lw     $v1, %got(indirprocs)($gp)
/* 0045C27C 24140002 */  li    $s4, 2
/* 0045C280 2404003C */  li    $a0, 60
/* 0045C284 AC620000 */  sw    $v0, ($v1)
/* 0045C288 AC530000 */  sw    $s3, ($v0)
/* 0045C28C AC400004 */  sw    $zero, 4($v0)
/* 0045C290 AC400028 */  sw    $zero, 0x28($v0)
/* 0045C294 A0400008 */  sb    $zero, 8($v0)
/* 0045C298 A051000B */  sb    $s1, 0xb($v0)
/* 0045C29C A040000C */  sb    $zero, 0xc($v0)
/* 0045C2A0 A051000D */  sb    $s1, 0xd($v0)
/* 0045C2A4 A040000E */  sb    $zero, 0xe($v0)
/* 0045C2A8 A040000F */  sb    $zero, 0xf($v0)
/* 0045C2AC A0400014 */  sb    $zero, 0x14($v0)
/* 0045C2B0 A0400015 */  sb    $zero, 0x15($v0)
/* 0045C2B4 A0510009 */  sb    $s1, 9($v0)
/* 0045C2B8 A051000A */  sb    $s1, 0xa($v0)
/* 0045C2BC A0540010 */  sb    $s4, 0x10($v0)
/* 0045C2C0 A4400012 */  sh    $zero, 0x12($v0)
/* 0045C2C4 AC400018 */  sw    $zero, 0x18($v0)
/* 0045C2C8 AC40001C */  sw    $zero, 0x1c($v0)
/* 0045C2CC AC400020 */  sw    $zero, 0x20($v0)
/* 0045C2D0 AC400034 */  sw    $zero, 0x34($v0)
/* 0045C2D4 AC400038 */  sw    $zero, 0x38($v0)
/* 0045C2D8 AC40002C */  sw    $zero, 0x2c($v0)
/* 0045C2DC AC400030 */  sw    $zero, 0x30($v0)
/* 0045C2E0 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 0045C2E4 02402825 */  move  $a1, $s2
/* 0045C2E8 0320F809 */  jalr  $t9
/* 0045C2EC 00000000 */   nop   
/* 0045C2F0 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045C2F4 8F838B74 */  lw     $v1, %got(ciaprocs)($gp)
/* 0045C2F8 8F958950 */  lw     $s5, %got(ustrptr)($gp)
/* 0045C2FC AC620000 */  sw    $v0, ($v1)
/* 0045C300 AC530000 */  sw    $s3, ($v0)
/* 0045C304 AC400004 */  sw    $zero, 4($v0)
/* 0045C308 AC400028 */  sw    $zero, 0x28($v0)
/* 0045C30C A0400008 */  sb    $zero, 8($v0)
/* 0045C310 A051000B */  sb    $s1, 0xb($v0)
/* 0045C314 A040000C */  sb    $zero, 0xc($v0)
/* 0045C318 A051000D */  sb    $s1, 0xd($v0)
/* 0045C31C A040000E */  sb    $zero, 0xe($v0)
/* 0045C320 A040000F */  sb    $zero, 0xf($v0)
/* 0045C324 A0400014 */  sb    $zero, 0x14($v0)
/* 0045C328 A0400015 */  sb    $zero, 0x15($v0)
/* 0045C32C A0510009 */  sb    $s1, 9($v0)
/* 0045C330 A051000A */  sb    $s1, 0xa($v0)
/* 0045C334 A0540010 */  sb    $s4, 0x10($v0)
/* 0045C338 A4400012 */  sh    $zero, 0x12($v0)
/* 0045C33C AC400018 */  sw    $zero, 0x18($v0)
/* 0045C340 AC40001C */  sw    $zero, 0x1c($v0)
/* 0045C344 AC400020 */  sw    $zero, 0x20($v0)
/* 0045C348 AC400034 */  sw    $zero, 0x34($v0)
/* 0045C34C AC400038 */  sw    $zero, 0x38($v0)
/* 0045C350 AC40002C */  sw    $zero, 0x2c($v0)
/* 0045C354 AC400030 */  sw    $zero, 0x30($v0)
/* 0045C358 8F998768 */  lw    $t9, %call16(readuinstr)($gp)
/* 0045C35C 8F918DA4 */  lw     $s1, %got(u)($gp)
/* 0045C360 8EA50000 */  lw    $a1, ($s5)
/* 0045C364 0320F809 */  jalr  $t9
/* 0045C368 02202025 */   move  $a0, $s1
/* 0045C36C 92220000 */  lbu   $v0, ($s1)
/* 0045C370 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045C374 24140022 */  li    $s4, 34
/* 0045C378 244BFFE0 */  addiu $t3, $v0, -0x20
/* 0045C37C 2D6C0060 */  sltiu $t4, $t3, 0x60
/* 0045C380 11800009 */  beqz  $t4, .L0045C3A8
/* 0045C384 2413007A */   li    $s3, 122
/* 0045C388 8F8F8044 */  lw    $t7, %got(D_10010D2C)($gp)
/* 0045C38C 000B6943 */  sra   $t5, $t3, 5
/* 0045C390 000D7080 */  sll   $t6, $t5, 2
/* 0045C394 25EF0D2C */  addiu $t7, %lo(D_10010D2C) # addiu $t7, $t7, 0xd2c
/* 0045C398 01EEC021 */  addu  $t8, $t7, $t6
/* 0045C39C 8F190000 */  lw    $t9, ($t8)
/* 0045C3A0 01795004 */  sllv  $t2, $t9, $t3
/* 0045C3A4 294C0000 */  slti  $t4, $t2, 0
.L0045C3A8:
/* 0045C3A8 15800048 */  bnez  $t4, .L0045C4CC
/* 0045C3AC 24120021 */   li    $s2, 33
/* 0045C3B0 8F908908 */  lw     $s0, %got(err)($gp)
.L0045C3B4:
/* 0045C3B4 1242002A */  beq   $s2, $v0, .L0045C460
/* 0045C3B8 00000000 */   nop   
/* 0045C3BC 12620028 */  beq   $s3, $v0, .L0045C460
/* 0045C3C0 00000000 */   nop   
.L0045C3C4:
/* 0045C3C4 8F998470 */  lw    $t9, %call16(oneinstruction)($gp)
/* 0045C3C8 0320F809 */  jalr  $t9
/* 0045C3CC 00000000 */   nop   
/* 0045C3D0 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045C3D4 02202025 */  move  $a0, $s1
/* 0045C3D8 8EA50000 */  lw    $a1, ($s5)
/* 0045C3DC 8F998768 */  lw    $t9, %call16(readuinstr)($gp)
/* 0045C3E0 0320F809 */  jalr  $t9
/* 0045C3E4 00000000 */   nop   
/* 0045C3E8 92220000 */  lbu   $v0, ($s1)
/* 0045C3EC 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045C3F0 2406003A */  li    $a2, 58
/* 0045C3F4 16820016 */  bne   $s4, $v0, .L0045C450
/* 0045C3F8 2407003A */   li    $a3, 58
/* 0045C3FC 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0045C400 8F858044 */  lw    $a1, %got(RO_1000D484)($gp)
/* 0045C404 8E040000 */  lw    $a0, ($s0)
/* 0045C408 0320F809 */  jalr  $t9
/* 0045C40C 24A5D484 */   addiu $a1, %lo(RO_1000D484) # addiu $a1, $a1, -0x2b7c
/* 0045C410 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045C414 8E040000 */  lw    $a0, ($s0)
/* 0045C418 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0045C41C 0320F809 */  jalr  $t9
/* 0045C420 00000000 */   nop   
/* 0045C424 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045C428 8E040000 */  lw    $a0, ($s0)
/* 0045C42C 8F9980A0 */  lw    $t9, %call16(fflush)($gp)
/* 0045C430 0320F809 */  jalr  $t9
/* 0045C434 00000000 */   nop   
/* 0045C438 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045C43C 8F998728 */  lw    $t9, %call16(abort)($gp)
/* 0045C440 0320F809 */  jalr  $t9
/* 0045C444 00000000 */   nop   
/* 0045C448 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045C44C 92220000 */  lbu   $v0, ($s1)
.L0045C450:
/* 0045C450 12420003 */  beq   $s2, $v0, .L0045C460
/* 0045C454 00000000 */   nop   
/* 0045C458 1662FFDA */  bne   $s3, $v0, .L0045C3C4
/* 0045C45C 00000000 */   nop   
.L0045C460:
/* 0045C460 5642000D */  bnel  $s2, $v0, .L0045C498
/* 0045C464 244DFFE0 */   addiu $t5, $v0, -0x20
/* 0045C468 8F998474 */  lw    $t9, %call16(oneprocprepass)($gp)
/* 0045C46C 0320F809 */  jalr  $t9
/* 0045C470 00000000 */   nop   
/* 0045C474 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045C478 02202025 */  move  $a0, $s1
/* 0045C47C 8EA50000 */  lw    $a1, ($s5)
/* 0045C480 8F998768 */  lw    $t9, %call16(readuinstr)($gp)
/* 0045C484 0320F809 */  jalr  $t9
/* 0045C488 00000000 */   nop   
/* 0045C48C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045C490 92220000 */  lbu   $v0, ($s1)
/* 0045C494 244DFFE0 */  addiu $t5, $v0, -0x20
.L0045C498:
/* 0045C498 2DAF0060 */  sltiu $t7, $t5, 0x60
/* 0045C49C 11E00009 */  beqz  $t7, .L0045C4C4
/* 0045C4A0 00000000 */   nop   
/* 0045C4A4 8F998044 */  lw    $t9, %got(D_10010D2C)($gp)
/* 0045C4A8 000D7143 */  sra   $t6, $t5, 5
/* 0045C4AC 000EC080 */  sll   $t8, $t6, 2
/* 0045C4B0 27390D2C */  addiu $t9, %lo(D_10010D2C) # addiu $t9, $t9, 0xd2c
/* 0045C4B4 03385821 */  addu  $t3, $t9, $t8
/* 0045C4B8 8D6A0000 */  lw    $t2, ($t3)
/* 0045C4BC 01AA4804 */  sllv  $t1, $t2, $t5
/* 0045C4C0 292F0000 */  slti  $t7, $t1, 0
.L0045C4C4:
/* 0045C4C4 11E0FFBB */  beqz  $t7, .L0045C3B4
/* 0045C4C8 00000000 */   nop   
.L0045C4CC:
/* 0045C4CC 8F99847C */  lw    $t9, %call16(processcallgraph)($gp)
/* 0045C4D0 0320F809 */  jalr  $t9
/* 0045C4D4 00000000 */   nop   
/* 0045C4D8 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045C4DC 8F998484 */  lw    $t9, %call16(findallvregs)($gp)
/* 0045C4E0 8F848C4C */  lw     $a0, %got(prochead)($gp)
/* 0045C4E4 0320F809 */  jalr  $t9
/* 0045C4E8 8C840000 */   lw    $a0, ($a0)
/* 0045C4EC 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045C4F0 8FA50038 */  lw    $a1, 0x38($sp)
/* 0045C4F4 8F9988CC */  lw    $t9, %call16(alloc_release)($gp)
/* 0045C4F8 8F8488E8 */  lw     $a0, %got(lda_heap)($gp)
/* 0045C4FC 0320F809 */  jalr  $t9
/* 0045C500 00000000 */   nop   
/* 0045C504 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045C508 8F99876C */  lw    $t9, %call16(initur)($gp)
/* 0045C50C 8F848DD0 */  lw     $a0, %got(sourcename)($gp)
/* 0045C510 0320F809 */  jalr  $t9
/* 0045C514 00000000 */   nop   
/* 0045C518 8FBF0034 */  lw    $ra, 0x34($sp)
/* 0045C51C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045C520 8FB00018 */  lw    $s0, 0x18($sp)
/* 0045C524 8FB1001C */  lw    $s1, 0x1c($sp)
/* 0045C528 8FB20020 */  lw    $s2, 0x20($sp)
/* 0045C52C 8FB30024 */  lw    $s3, 0x24($sp)
/* 0045C530 8FB40028 */  lw    $s4, 0x28($sp)
/* 0045C534 8FB5002C */  lw    $s5, 0x2c($sp)
/* 0045C538 03E00008 */  jr    $ra
/* 0045C53C 27BD0040 */   addiu $sp, $sp, 0x40
    .type prepass, @function
    .size prepass, .-prepass
    .end prepass

glabel varintree
    .ent varintree
    # 0044B4F4 clkilled
    # 0044BDFC cskilled
    # 0045C620 furthervarintree
/* 0045C540 3C1C0FBC */  .cpload $t9
/* 0045C544 279CDD50 */  
/* 0045C548 0399E021 */  
/* 0045C54C 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0045C550 AFB00018 */  sw    $s0, 0x18($sp)
/* 0045C554 00C08025 */  move  $s0, $a2
/* 0045C558 AFBF0024 */  sw    $ra, 0x24($sp)
/* 0045C55C AFBC0020 */  sw    $gp, 0x20($sp)
/* 0045C560 AFB1001C */  sw    $s1, 0x1c($sp)
/* 0045C564 AFA40028 */  sw    $a0, 0x28($sp)
/* 0045C568 10C00027 */  beqz  $a2, .L0045C608
/* 0045C56C AFA5002C */   sw    $a1, 0x2c($sp)
/* 0045C570 27B10028 */  addiu $s1, $sp, 0x28
/* 0045C574 8E240000 */  lw    $a0, ($s1)
.L0045C578:
/* 0045C578 8F998430 */  lw    $t9, %call16(compareaddr)($gp)
/* 0045C57C AFA40000 */  sw    $a0, ($sp)
/* 0045C580 8E250004 */  lw    $a1, 4($s1)
/* 0045C584 AFA50004 */  sw    $a1, 4($sp)
/* 0045C588 8E060004 */  lw    $a2, 4($s0)
/* 0045C58C AFA60008 */  sw    $a2, 8($sp)
/* 0045C590 8E070008 */  lw    $a3, 8($s0)
/* 0045C594 0320F809 */  jalr  $t9
/* 0045C598 AFA7000C */   sw    $a3, 0xc($sp)
/* 0045C59C 304300FF */  andi  $v1, $v0, 0xff
/* 0045C5A0 2C610003 */  sltiu $at, $v1, 3
/* 0045C5A4 1020000E */  beqz  $at, .L0045C5E0
/* 0045C5A8 8FBC0020 */   lw    $gp, 0x20($sp)
/* 0045C5AC 8F818044 */  lw    $at, %got(jtbl_1000D4C8)($gp)
/* 0045C5B0 00034080 */  sll   $t0, $v1, 2
/* 0045C5B4 00280821 */  addu  $at, $at, $t0
/* 0045C5B8 8C28D4C8 */  lw    $t0, %lo(jtbl_1000D4C8)($at)
/* 0045C5BC 011C4021 */  addu  $t0, $t0, $gp
/* 0045C5C0 01000008 */  jr    $t0
/* 0045C5C4 00000000 */   nop   
.L0045C5C8:
/* 0045C5C8 10000010 */  b     .L0045C60C
/* 0045C5CC 24020001 */   li    $v0, 1
.L0045C5D0:
/* 0045C5D0 1000000B */  b     .L0045C600
/* 0045C5D4 8E100010 */   lw    $s0, 0x10($s0)
.L0045C5D8:
/* 0045C5D8 10000009 */  b     .L0045C600
/* 0045C5DC 8E100014 */   lw    $s0, 0x14($s0)
.L0045C5E0:
/* 0045C5E0 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 0045C5E4 8F868044 */  lw    $a2, %got(RO_1000D4BE)($gp)
/* 0045C5E8 24040001 */  li    $a0, 1
/* 0045C5EC 240504F1 */  li    $a1, 1265
/* 0045C5F0 2407000A */  li    $a3, 10
/* 0045C5F4 0320F809 */  jalr  $t9
/* 0045C5F8 24C6D4BE */   addiu $a2, %lo(RO_1000D4BE) # addiu $a2, $a2, -0x2b42
/* 0045C5FC 8FBC0020 */  lw    $gp, 0x20($sp)
.L0045C600:
/* 0045C600 5600FFDD */  bnezl $s0, .L0045C578
/* 0045C604 8E240000 */   lw    $a0, ($s1)
.L0045C608:
/* 0045C608 00001025 */  move  $v0, $zero
.L0045C60C:
/* 0045C60C 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0045C610 8FB00018 */  lw    $s0, 0x18($sp)
/* 0045C614 8FB1001C */  lw    $s1, 0x1c($sp)
/* 0045C618 03E00008 */  jr    $ra
/* 0045C61C 27BD0028 */   addiu $sp, $sp, 0x28
    .type varintree, @function
    .size varintree, .-varintree
    .end varintree

glabel furthervarintree
    .ent furthervarintree
    # 0042020C gen_static_link
    # 0044B4F4 clkilled
    # 0044BDFC cskilled
/* 0045C620 3C1C0FBC */  .cpload $t9
/* 0045C624 279CDC70 */  
/* 0045C628 0399E021 */  
/* 0045C62C 27BDFFB0 */  addiu $sp, $sp, -0x50
/* 0045C630 AFBF002C */  sw    $ra, 0x2c($sp)
/* 0045C634 AFBC0028 */  sw    $gp, 0x28($sp)
/* 0045C638 AFB30024 */  sw    $s3, 0x24($sp)
/* 0045C63C AFB20020 */  sw    $s2, 0x20($sp)
/* 0045C640 AFB1001C */  sw    $s1, 0x1c($sp)
/* 0045C644 AFB00018 */  sw    $s0, 0x18($sp)
/* 0045C648 8C8F0028 */  lw    $t7, 0x28($a0)
/* 0045C64C 27B3003C */  addiu $s3, $sp, 0x3c
/* 0045C650 8CA20018 */  lw    $v0, 0x18($a1)
/* 0045C654 AE6F0000 */  sw    $t7, ($s3)
/* 0045C658 8C8E002C */  lw    $t6, 0x2c($a0)
/* 0045C65C 00809025 */  move  $s2, $a0
/* 0045C660 00003025 */  move  $a2, $zero
/* 0045C664 1040001B */  beqz  $v0, .L0045C6D4
/* 0045C668 AE6E0004 */   sw    $t6, 4($s3)
/* 0045C66C 8F918B70 */  lw     $s1, %got(indirprocs)($gp)
/* 0045C670 8C430000 */  lw    $v1, ($v0)
.L0045C674:
/* 0045C674 8E380000 */  lw    $t8, ($s1)
/* 0045C678 00408025 */  move  $s0, $v0
/* 0045C67C 57030004 */  bnel  $t8, $v1, .L0045C690
/* 0045C680 9259002F */   lbu   $t9, 0x2f($s2)
/* 0045C684 1000000F */  b     .L0045C6C4
/* 0045C688 24060001 */   li    $a2, 1
/* 0045C68C 9259002F */  lbu   $t9, 0x2f($s2)
.L0045C690:
/* 0045C690 90680010 */  lbu   $t0, 0x10($v1)
/* 0045C694 0328082B */  sltu  $at, $t9, $t0
/* 0045C698 1020000A */  beqz  $at, .L0045C6C4
/* 0045C69C 00000000 */   nop   
/* 0045C6A0 8E640000 */  lw    $a0, ($s3)
/* 0045C6A4 8F99848C */  lw    $t9, %call16(varintree)($gp)
/* 0045C6A8 8C660004 */  lw    $a2, 4($v1)
/* 0045C6AC AFA40000 */  sw    $a0, ($sp)
/* 0045C6B0 8E650004 */  lw    $a1, 4($s3)
/* 0045C6B4 0320F809 */  jalr  $t9
/* 0045C6B8 AFA50004 */   sw    $a1, 4($sp)
/* 0045C6BC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045C6C0 304600FF */  andi  $a2, $v0, 0xff
.L0045C6C4:
/* 0045C6C4 14C00003 */  bnez  $a2, .L0045C6D4
/* 0045C6C8 8E020004 */   lw    $v0, 4($s0)
/* 0045C6CC 5440FFE9 */  bnezl $v0, .L0045C674
/* 0045C6D0 8C430000 */   lw    $v1, ($v0)
.L0045C6D4:
/* 0045C6D4 8FBF002C */  lw    $ra, 0x2c($sp)
/* 0045C6D8 8FB00018 */  lw    $s0, 0x18($sp)
/* 0045C6DC 8FB1001C */  lw    $s1, 0x1c($sp)
/* 0045C6E0 8FB20020 */  lw    $s2, 0x20($sp)
/* 0045C6E4 8FB30024 */  lw    $s3, 0x24($sp)
/* 0045C6E8 27BD0050 */  addiu $sp, $sp, 0x50
/* 0045C6EC 03E00008 */  jr    $ra
/* 0045C6F0 00C01025 */   move  $v0, $a2
    .type furthervarintree, @function
    .size furthervarintree, .-furthervarintree
    .end furthervarintree

glabel in_fsym
    .ent in_fsym
    # 004175BC copypropagate
    # 0043CFCC readnxtinst
    # 004494A4 aliaswithptr
    # 0044B4F4 clkilled
    # 0044BD00 cmkilled
    # 0044BDFC cskilled
    # 00455518 func_00455518
    # 00458998 func_00458998
/* 0045C6F4 3C1C0FBC */  .cpload $t9
/* 0045C6F8 279CDB9C */  
/* 0045C6FC 0399E021 */  
/* 0045C700 240100A1 */  li    $at, 161
/* 0045C704 0081001A */  div   $zero, $a0, $at
/* 0045C708 00007010 */  mfhi  $t6
/* 0045C70C 05C10002 */  bgez  $t6, .L0045C718
/* 0045C710 00000000 */   nop   
/* 0045C714 21CE00A1 */  addi  $t6, $t6, 0xa1
.L0045C718:
/* 0045C718 8F988DC8 */  lw     $t8, %got(fsymtab)($gp)
/* 0045C71C 000E7880 */  sll   $t7, $t6, 2
/* 0045C720 00001825 */  move  $v1, $zero
/* 0045C724 01F8C821 */  addu  $t9, $t7, $t8
/* 0045C728 8F220000 */  lw    $v0, ($t9)
/* 0045C72C 1040000C */  beqz  $v0, .L0045C760
/* 0045C730 00000000 */   nop   
/* 0045C734 8C480000 */  lw    $t0, ($v0)
.L0045C738:
/* 0045C738 0104082A */  slt   $at, $t0, $a0
/* 0045C73C 54200004 */  bnezl $at, .L0045C750
/* 0045C740 8C420004 */   lw    $v0, 4($v0)
/* 0045C744 10000002 */  b     .L0045C750
/* 0045C748 24030001 */   li    $v1, 1
/* 0045C74C 8C420004 */  lw    $v0, 4($v0)
.L0045C750:
/* 0045C750 14600003 */  bnez  $v1, .L0045C760
/* 0045C754 00000000 */   nop   
/* 0045C758 5440FFF7 */  bnezl $v0, .L0045C738
/* 0045C75C 8C480000 */   lw    $t0, ($v0)
.L0045C760:
/* 0045C760 10600004 */  beqz  $v1, .L0045C774
/* 0045C764 00602825 */   move  $a1, $v1
/* 0045C768 8C490000 */  lw    $t1, ($v0)
/* 0045C76C 00892826 */  xor   $a1, $a0, $t1
/* 0045C770 2CA50001 */  sltiu $a1, $a1, 1
.L0045C774:
/* 0045C774 03E00008 */  jr    $ra
/* 0045C778 00A01025 */   move  $v0, $a1
    .type in_fsym, @function
    .size in_fsym, .-in_fsym
    .end in_fsym

glabel is_gp_relative
    .ent is_gp_relative
    # 0043CFCC readnxtinst
    # 00451764 func_00451764
    # 00452DAC constarith
/* 0045C77C 3C1C0FBC */  .cpload $t9
/* 0045C780 279CDB14 */  
/* 0045C784 0399E021 */  
/* 0045C788 240100A1 */  li    $at, 161
/* 0045C78C 0081001A */  div   $zero, $a0, $at
/* 0045C790 00007010 */  mfhi  $t6
/* 0045C794 05C10002 */  bgez  $t6, .L0045C7A0
/* 0045C798 00000000 */   nop   
/* 0045C79C 21CE00A1 */  addi  $t6, $t6, 0xa1
.L0045C7A0:
/* 0045C7A0 8F988DCC */  lw     $t8, %got(gp_rel_tab)($gp)
/* 0045C7A4 000E7880 */  sll   $t7, $t6, 2
/* 0045C7A8 00001825 */  move  $v1, $zero
/* 0045C7AC 01F8C821 */  addu  $t9, $t7, $t8
/* 0045C7B0 8F220000 */  lw    $v0, ($t9)
/* 0045C7B4 1040000C */  beqz  $v0, .L0045C7E8
/* 0045C7B8 00000000 */   nop   
/* 0045C7BC 8C480000 */  lw    $t0, ($v0)
.L0045C7C0:
/* 0045C7C0 0104082A */  slt   $at, $t0, $a0
/* 0045C7C4 54200004 */  bnezl $at, .L0045C7D8
/* 0045C7C8 8C420004 */   lw    $v0, 4($v0)
/* 0045C7CC 10000002 */  b     .L0045C7D8
/* 0045C7D0 24030001 */   li    $v1, 1
/* 0045C7D4 8C420004 */  lw    $v0, 4($v0)
.L0045C7D8:
/* 0045C7D8 14600003 */  bnez  $v1, .L0045C7E8
/* 0045C7DC 00000000 */   nop   
/* 0045C7E0 5440FFF7 */  bnezl $v0, .L0045C7C0
/* 0045C7E4 8C480000 */   lw    $t0, ($v0)
.L0045C7E8:
/* 0045C7E8 10600004 */  beqz  $v1, .L0045C7FC
/* 0045C7EC 00602825 */   move  $a1, $v1
/* 0045C7F0 8C490000 */  lw    $t1, ($v0)
/* 0045C7F4 00892826 */  xor   $a1, $a0, $t1
/* 0045C7F8 2CA50001 */  sltiu $a1, $a1, 1
.L0045C7FC:
/* 0045C7FC 03E00008 */  jr    $ra
/* 0045C800 00A01025 */   move  $v0, $a1
    .type is_gp_relative, @function
    .size is_gp_relative, .-is_gp_relative
    .end is_gp_relative

glabel proc_suppressed
    .ent proc_suppressed
    # 00456A2C oneproc
    # 0045B508 oneprocprepass
/* 0045C804 3C1C0FBC */  .cpload $t9
/* 0045C808 279CDA8C */  
/* 0045C80C 0399E021 */  
/* 0045C810 8F828A90 */  lw     $v0, %got(ctrl_head)($gp)
/* 0045C814 00001825 */  move  $v1, $zero
/* 0045C818 8C420000 */  lw    $v0, ($v0)
/* 0045C81C 1040001E */  beqz  $v0, .L0045C898
/* 0045C820 00000000 */   nop   
/* 0045C824 8F848984 */  lw     $a0, %got(entnam0len)($gp)
/* 0045C828 8C840000 */  lw    $a0, ($a0)
/* 0045C82C 8C4E0400 */  lw    $t6, 0x400($v0)
.L0045C830:
/* 0045C830 24050001 */  li    $a1, 1
/* 0045C834 148E0014 */  bne   $a0, $t6, .L0045C888
/* 0045C838 00000000 */   nop   
/* 0045C83C 18800012 */  blez  $a0, .L0045C888
/* 0045C840 24030001 */   li    $v1, 1
/* 0045C844 8F8F8DE4 */  lw     $t7, %got(entnam0)($gp)
/* 0045C848 00453021 */  addu  $a2, $v0, $a1
/* 0045C84C 25EFFFFF */  addiu $t7, $t7, -1
/* 0045C850 00AF3821 */  addu  $a3, $a1, $t7
/* 0045C854 90D8FFFF */  lbu   $t8, -1($a2)
.L0045C858:
/* 0045C858 90F90000 */  lbu   $t9, ($a3)
/* 0045C85C 57190006 */  bnel  $t8, $t9, .L0045C878
/* 0045C860 00001825 */   move  $v1, $zero
/* 0045C864 24A50001 */  addiu $a1, $a1, 1
/* 0045C868 24C60001 */  addiu $a2, $a2, 1
/* 0045C86C 10000002 */  b     .L0045C878
/* 0045C870 24E70001 */   addiu $a3, $a3, 1
/* 0045C874 00001825 */  move  $v1, $zero
.L0045C878:
/* 0045C878 10600003 */  beqz  $v1, .L0045C888
/* 0045C87C 0085082A */   slt   $at, $a0, $a1
/* 0045C880 5020FFF5 */  beql  $at, $zero, .L0045C858
/* 0045C884 90D8FFFF */   lbu   $t8, -1($a2)
.L0045C888:
/* 0045C888 14600003 */  bnez  $v1, .L0045C898
/* 0045C88C 8C420404 */   lw    $v0, 0x404($v0)
/* 0045C890 5440FFE7 */  bnezl $v0, .L0045C830
/* 0045C894 8C4E0400 */   lw    $t6, 0x400($v0)
.L0045C898:
/* 0045C898 03E00008 */  jr    $ra
/* 0045C89C 00601025 */   move  $v0, $v1
    .type proc_suppressed, @function
    .size proc_suppressed, .-proc_suppressed
    .end proc_suppressed
)"");
