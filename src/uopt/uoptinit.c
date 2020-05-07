#include <stdio.h>
#include "common.h"
#include "uoptppss.h"
#include "uoptdbg.h"
#include "uoptcontrolflow.h"
#include "uoptdata.h"
#include "libp/libp.h"
#include "libxmalloc/xmalloc.h"

__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
RO_1000B680:
    # 00434120 func_00434120
    .ascii "no_r23                          "

RO_1000B6A0:
    # 00434120 func_00434120
    .ascii "zaloc                           "

RO_1000B6C0:
    # 00434120 func_00434120
    .ascii "zscm                            "

RO_1000B6E0:
    # 00434120 func_00434120
    .ascii "zstor                           "

RO_1000B700:
    # 00434120 func_00434120
    .ascii "zcomo                           "

RO_1000B720:
    # 00434120 func_00434120
    .ascii "zcopy                           "

RO_1000B740:
    # 00434120 func_00434120
    .ascii "zmovc                           "

RO_1000B760:
    # 00434120 func_00434120
    .ascii "zdbug                           "

RO_1000B780:
    # 00434120 func_00434120
    .ascii "zvref                           "

RO_1000B7A0:
    # 00434120 func_00434120
    .ascii "zmark                           "

RO_1000B7C0:
    # 00434720 processargs
    .ascii "uopt: st_readbinary failed on "

RO_1000B7DE:
    # 00434720 processargs
    .ascii "uopt: Warning: feedback requires both symbol table and feedback file names "

RO_1000B829:
    # 00434720 processargs
    .ascii "uoptlist                        "

RO_1000B849:
    # 00434720 processargs
    .ascii "/tmp/uoptstrings                "

RO_1000B869:
    # 00434720 processargs
    .ascii "/tmp/uoptoutput                 "

RO_1000B889:
    # 00434720 processargs
    .ascii "uopt: Warning: unrecognized option "

RO_1000B8AC:
    # 00434720 processargs
    .ascii "                                "

RO_1000B8CC:
    # 00434720 processargs
    .ascii "-regr                           "

RO_1000B8EC:
    # 00434720 processargs
    .ascii "-rege                           "

RO_1000B90C:
    # 00434720 processargs
    .ascii "-regr                           "

RO_1000B92C:
    # 00434720 processargs
    .ascii "-nomultibbunroll                "

RO_1000B94C:
    # 00434720 processargs
    .ascii "-unrolllimit                    "

RO_1000B96C:
    # 00434720 processargs
    .ascii "-loopunroll                     "

RO_1000B98C:
    # 00434720 processargs
    .ascii "-Olimit                         "

RO_1000B9AC:
    # 00434720 processargs
    .ascii "-varref                         "

RO_1000B9CC:
    # 00434720 processargs
    .ascii "-trapuv                         "

RO_1000B9EC:
    # 00434720 processargs
    .ascii "-fp32reg                        "

RO_1000BA0C:
    # 00434720 processargs
    .ascii "-strictIEEE                     "

RO_1000BA2C:
    # 00434720 processargs
    .ascii "-64data                         "

RO_1000BA4C:
    # 00434720 processargs
    .ascii "-dwopcode                       "

RO_1000BA6C:
    # 00434720 processargs
    .ascii "-mips1                          "

RO_1000BA8C:
    # 00434720 processargs
    .ascii "-mips2                          "

RO_1000BAAC:
    # 00434720 processargs
    .ascii "-mips3                          "

RO_1000BACC:
    # 00434720 processargs
    .ascii "-nokpicopt                      "

RO_1000BAEC:
    # 00434720 processargs
    .ascii "-kpicopt                        "

RO_1000BB0C:
    # 00434720 processargs
    .ascii "-pic2                           "

RO_1000BB2C:
    # 00434720 processargs
    .ascii "-mips4                          "

RO_1000BB4C:
    # 00434720 processargs
    .ascii "-static                         "

RO_1000BB6C:
    # 00434720 processargs
    .ascii "-no_r23                         "

RO_1000BB8C:
    # 00434720 processargs
    .ascii "-moremotion                     "

RO_1000BBAC:
    # 00434720 processargs
    .ascii "-fortran_lang                   "

RO_1000BBCC:
    # 00434720 processargs
    .ascii "-noPalias                       "

RO_1000BBEC:
    # 00434720 processargs
    .ascii "-f77alias                       "

RO_1000BC0C:
    # 00434720 processargs
    .ascii "-createbb                       "

RO_1000BC2C:
    # 00434720 processargs
    .ascii "-nordstore                      "

RO_1000BC4C:
    # 00434720 processargs
    .ascii "-domtag                         "

RO_1000BC6C:
    # 00434720 processargs
    .ascii "-notail                         "

RO_1000BC8C:
    # 00434720 processargs
    .ascii "-nogenvreg                      "

RO_1000BCAC:
    # 00434720 processargs
    .ascii "-norecur                        "

RO_1000BCCC:
    # 00434720 processargs
    .ascii "-docodehoist                    "

RO_1000BCEC:
    # 00434720 processargs
    .ascii "-no_const_in_reg                "

RO_1000BD0C:
    # 00434720 processargs
    .ascii "-do_opt_saved_regs              "

RO_1000BD2C:
    # 00434720 processargs
    .ascii "-noheurAB                       "

RO_1000BD4C:
    # 00434720 processargs
    .ascii "-norlodrstropt                  "

RO_1000BD6C:
    # 00434720 processargs
    .ascii "-noprecolor                     "

RO_1000BD8C:
    # 00434720 processargs
    .ascii "-dowhyuncolor                   "

RO_1000BDAC:
    # 00434720 processargs
    .ascii "-doassoc                        "

RO_1000BDCC:
    # 00434720 processargs
    .ascii "-docopy                         "

RO_1000BDEC:
    # 00434720 processargs
    .ascii "_XPG                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            "

    .balign 4
jtbl_1000C1EC:
    # 00434720 processargs
    .gpword .L00434E34
    .gpword .L00434E40

.data
D_10010810:
    # 00434434 func_00434434
    .byte 0x00,0x20,0x00,0x00,0x80,0x00,0x00,0x00

D_10010818:
    # 00434720 processargs
    .byte 0x7f,0xff,0xff,0xe0,0x7f,0xff,0xff,0xe0



.bss
    .balign 16
# 1001CA78
glabel st_str
    # 004340A0 addnullfilename
    # 00434720 processargs
    # 00439B60 write_updated_st
    .space 128
    .size st_str, 128
    .type st_str, @object


.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
glabel addnullfilename
    .ent addnullfilename
    # 00434720 processargs
    # 00439B60 write_updated_st
/* 004340A0 3C1C0FBE */  .cpload $t9
/* 004340A4 279C61F0 */  
/* 004340A8 0399E021 */  
/* 004340AC 908E0000 */  lbu   $t6, ($a0)
/* 004340B0 24070020 */  li    $a3, 32
/* 004340B4 24020001 */  li    $v0, 1
/* 004340B8 10EE0014 */  beq   $a3, $t6, .L0043410C
/* 004340BC 00000000 */   nop   
/* 004340C0 908F0000 */  lbu   $t7, ($a0)
/* 004340C4 00821821 */  addu  $v1, $a0, $v0
/* 004340C8 11E00010 */  beqz  $t7, .L0043410C
/* 004340CC 00000000 */   nop   
/* 004340D0 8F988DB8 */  lw     $t8, %got(st_str)($gp)
/* 004340D4 9065FFFF */  lbu   $a1, -1($v1)
/* 004340D8 24040400 */  li    $a0, 1024
/* 004340DC 2718FFFF */  addiu $t8, $t8, -1
/* 004340E0 00583021 */  addu  $a2, $v0, $t8
/* 004340E4 A0C50000 */  sb    $a1, ($a2)
.L004340E8:
/* 004340E8 90650000 */  lbu   $a1, ($v1)
/* 004340EC 24420001 */  addiu $v0, $v0, 1
/* 004340F0 24630001 */  addiu $v1, $v1, 1
/* 004340F4 10E50005 */  beq   $a3, $a1, .L0043410C
/* 004340F8 24C60001 */   addiu $a2, $a2, 1
/* 004340FC 10A00003 */  beqz  $a1, .L0043410C
/* 00434100 00000000 */   nop   
/* 00434104 5444FFF8 */  bnel  $v0, $a0, .L004340E8
/* 00434108 A0C50000 */   sb    $a1, ($a2)
.L0043410C:
/* 0043410C 8F998DB8 */  lw     $t9, %got(st_str)($gp)
/* 00434110 2739FFFF */  addiu $t9, $t9, -1
/* 00434114 00594021 */  addu  $t0, $v0, $t9
/* 00434118 03E00008 */  jr    $ra
/* 0043411C A1000000 */   sb    $zero, ($t0)
    .type addnullfilename, @function
    .size addnullfilename, .-addnullfilename
    .end addnullfilename

    .type func_00434120, @function
func_00434120:
    # 00434720 processargs
/* 00434120 8F8E8044 */  lw    $t6, %got(RO_1000B7A0)($gp)
/* 00434124 27A20000 */  addiu $v0, $sp, 0
/* 00434128 AFA40000 */  sw    $a0, ($sp)
/* 0043412C AFA50004 */  sw    $a1, 4($sp)
/* 00434130 AFA60008 */  sw    $a2, 8($sp)
/* 00434134 AFA7000C */  sw    $a3, 0xc($sp)
/* 00434138 00407825 */  move  $t7, $v0
/* 0043413C 20580020 */  addi  $t8, $v0, 0x20
/* 00434140 25CEB7A0 */  addiu $t6, %lo(RO_1000B7A0) # addiu $t6, $t6, -0x4860
/* 00434144 91E10000 */  lbu   $at, ($t7)
.L00434148:
/* 00434148 91D90000 */  lbu   $t9, ($t6)
/* 0043414C 21EF0001 */  addi  $t7, $t7, 1
/* 00434150 21CE0001 */  addi  $t6, $t6, 1
/* 00434154 54390006 */  bnel  $at, $t9, .L00434170
/* 00434158 24180000 */   li    $t8, 0
/* 0043415C 55F8FFFA */  bnel  $t7, $t8, .L00434148
/* 00434160 91E10000 */   lbu   $at, ($t7)
/* 00434164 10000002 */  b     .L00434170
/* 00434168 24180001 */   li    $t8, 1
/* 0043416C 24180000 */  li    $t8, 0
.L00434170:
/* 00434170 13000003 */  beqz  $t8, .L00434180
/* 00434174 00000000 */   nop   
/* 00434178 03E00008 */  jr    $ra
/* 0043417C 24020191 */   li    $v0, 401

.L00434180:
/* 00434180 8F888044 */  lw    $t0, %got(RO_1000B780)($gp)
/* 00434184 00404825 */  move  $t1, $v0
/* 00434188 204A0020 */  addi  $t2, $v0, 0x20
/* 0043418C 2508B780 */  addiu $t0, %lo(RO_1000B780) # addiu $t0, $t0, -0x4880
/* 00434190 91210000 */  lbu   $at, ($t1)
.L00434194:
/* 00434194 910B0000 */  lbu   $t3, ($t0)
/* 00434198 21290001 */  addi  $t1, $t1, 1
/* 0043419C 21080001 */  addi  $t0, $t0, 1
/* 004341A0 542B0006 */  bnel  $at, $t3, .L004341BC
/* 004341A4 240A0000 */   li    $t2, 0
/* 004341A8 552AFFFA */  bnel  $t1, $t2, .L00434194
/* 004341AC 91210000 */   lbu   $at, ($t1)
/* 004341B0 10000002 */  b     .L004341BC
/* 004341B4 240A0001 */   li    $t2, 1
/* 004341B8 240A0000 */  li    $t2, 0
.L004341BC:
/* 004341BC 11400003 */  beqz  $t2, .L004341CC
/* 004341C0 00000000 */   nop   
/* 004341C4 03E00008 */  jr    $ra
/* 004341C8 24020192 */   li    $v0, 402

.L004341CC:
/* 004341CC 8F8C8044 */  lw    $t4, %got(RO_1000B760)($gp)
/* 004341D0 00406825 */  move  $t5, $v0
/* 004341D4 204F0020 */  addi  $t7, $v0, 0x20
/* 004341D8 258CB760 */  addiu $t4, %lo(RO_1000B760) # addiu $t4, $t4, -0x48a0
/* 004341DC 91A10000 */  lbu   $at, ($t5)
.L004341E0:
/* 004341E0 918E0000 */  lbu   $t6, ($t4)
/* 004341E4 21AD0001 */  addi  $t5, $t5, 1
/* 004341E8 218C0001 */  addi  $t4, $t4, 1
/* 004341EC 542E0006 */  bnel  $at, $t6, .L00434208
/* 004341F0 240F0000 */   li    $t7, 0
/* 004341F4 55AFFFFA */  bnel  $t5, $t7, .L004341E0
/* 004341F8 91A10000 */   lbu   $at, ($t5)
/* 004341FC 10000002 */  b     .L00434208
/* 00434200 240F0001 */   li    $t7, 1
/* 00434204 240F0000 */  li    $t7, 0
.L00434208:
/* 00434208 11E00003 */  beqz  $t7, .L00434218
/* 0043420C 00000000 */   nop   
/* 00434210 03E00008 */  jr    $ra
/* 00434214 24020193 */   li    $v0, 403

.L00434218:
/* 00434218 8F998044 */  lw    $t9, %got(RO_1000B740)($gp)
/* 0043421C 0040C025 */  move  $t8, $v0
/* 00434220 20490020 */  addi  $t1, $v0, 0x20
/* 00434224 2739B740 */  addiu $t9, %lo(RO_1000B740) # addiu $t9, $t9, -0x48c0
/* 00434228 93010000 */  lbu   $at, ($t8)
.L0043422C:
/* 0043422C 93280000 */  lbu   $t0, ($t9)
/* 00434230 23180001 */  addi  $t8, $t8, 1
/* 00434234 23390001 */  addi  $t9, $t9, 1
/* 00434238 54280006 */  bnel  $at, $t0, .L00434254
/* 0043423C 24090000 */   li    $t1, 0
/* 00434240 5709FFFA */  bnel  $t8, $t1, .L0043422C
/* 00434244 93010000 */   lbu   $at, ($t8)
/* 00434248 10000002 */  b     .L00434254
/* 0043424C 24090001 */   li    $t1, 1
/* 00434250 24090000 */  li    $t1, 0
.L00434254:
/* 00434254 11200003 */  beqz  $t1, .L00434264
/* 00434258 00000000 */   nop   
/* 0043425C 03E00008 */  jr    $ra
/* 00434260 24020194 */   li    $v0, 404

.L00434264:
/* 00434264 8F8B8044 */  lw    $t3, %got(RO_1000B720)($gp)
/* 00434268 00405025 */  move  $t2, $v0
/* 0043426C 204D0020 */  addi  $t5, $v0, 0x20
/* 00434270 256BB720 */  addiu $t3, %lo(RO_1000B720) # addiu $t3, $t3, -0x48e0
/* 00434274 91410000 */  lbu   $at, ($t2)
.L00434278:
/* 00434278 916C0000 */  lbu   $t4, ($t3)
/* 0043427C 214A0001 */  addi  $t2, $t2, 1
/* 00434280 216B0001 */  addi  $t3, $t3, 1
/* 00434284 542C0006 */  bnel  $at, $t4, .L004342A0
/* 00434288 240D0000 */   li    $t5, 0
/* 0043428C 554DFFFA */  bnel  $t2, $t5, .L00434278
/* 00434290 91410000 */   lbu   $at, ($t2)
/* 00434294 10000002 */  b     .L004342A0
/* 00434298 240D0001 */   li    $t5, 1
/* 0043429C 240D0000 */  li    $t5, 0
.L004342A0:
/* 004342A0 11A00003 */  beqz  $t5, .L004342B0
/* 004342A4 00000000 */   nop   
/* 004342A8 03E00008 */  jr    $ra
/* 004342AC 24020195 */   li    $v0, 405

.L004342B0:
/* 004342B0 8F8E8044 */  lw    $t6, %got(RO_1000B700)($gp)
/* 004342B4 00407825 */  move  $t7, $v0
/* 004342B8 20580020 */  addi  $t8, $v0, 0x20
/* 004342BC 25CEB700 */  addiu $t6, %lo(RO_1000B700) # addiu $t6, $t6, -0x4900
/* 004342C0 91E10000 */  lbu   $at, ($t7)
.L004342C4:
/* 004342C4 91D90000 */  lbu   $t9, ($t6)
/* 004342C8 21EF0001 */  addi  $t7, $t7, 1
/* 004342CC 21CE0001 */  addi  $t6, $t6, 1
/* 004342D0 54390006 */  bnel  $at, $t9, .L004342EC
/* 004342D4 24180000 */   li    $t8, 0
/* 004342D8 55F8FFFA */  bnel  $t7, $t8, .L004342C4
/* 004342DC 91E10000 */   lbu   $at, ($t7)
/* 004342E0 10000002 */  b     .L004342EC
/* 004342E4 24180001 */   li    $t8, 1
/* 004342E8 24180000 */  li    $t8, 0
.L004342EC:
/* 004342EC 13000003 */  beqz  $t8, .L004342FC
/* 004342F0 00000000 */   nop   
/* 004342F4 03E00008 */  jr    $ra
/* 004342F8 24020196 */   li    $v0, 406

.L004342FC:
/* 004342FC 8F888044 */  lw    $t0, %got(RO_1000B6E0)($gp)
/* 00434300 00404825 */  move  $t1, $v0
/* 00434304 204A0020 */  addi  $t2, $v0, 0x20
/* 00434308 2508B6E0 */  addiu $t0, %lo(RO_1000B6E0) # addiu $t0, $t0, -0x4920
/* 0043430C 91210000 */  lbu   $at, ($t1)
.L00434310:
/* 00434310 910B0000 */  lbu   $t3, ($t0)
/* 00434314 21290001 */  addi  $t1, $t1, 1
/* 00434318 21080001 */  addi  $t0, $t0, 1
/* 0043431C 542B0006 */  bnel  $at, $t3, .L00434338
/* 00434320 240A0000 */   li    $t2, 0
/* 00434324 552AFFFA */  bnel  $t1, $t2, .L00434310
/* 00434328 91210000 */   lbu   $at, ($t1)
/* 0043432C 10000002 */  b     .L00434338
/* 00434330 240A0001 */   li    $t2, 1
/* 00434334 240A0000 */  li    $t2, 0
.L00434338:
/* 00434338 11400003 */  beqz  $t2, .L00434348
/* 0043433C 00000000 */   nop   
/* 00434340 03E00008 */  jr    $ra
/* 00434344 24020197 */   li    $v0, 407

.L00434348:
/* 00434348 8F8C8044 */  lw    $t4, %got(RO_1000B6C0)($gp)
/* 0043434C 00406825 */  move  $t5, $v0
/* 00434350 204F0020 */  addi  $t7, $v0, 0x20
/* 00434354 258CB6C0 */  addiu $t4, %lo(RO_1000B6C0) # addiu $t4, $t4, -0x4940
/* 00434358 91A10000 */  lbu   $at, ($t5)
.L0043435C:
/* 0043435C 918E0000 */  lbu   $t6, ($t4)
/* 00434360 21AD0001 */  addi  $t5, $t5, 1
/* 00434364 218C0001 */  addi  $t4, $t4, 1
/* 00434368 542E0006 */  bnel  $at, $t6, .L00434384
/* 0043436C 240F0000 */   li    $t7, 0
/* 00434370 55AFFFFA */  bnel  $t5, $t7, .L0043435C
/* 00434374 91A10000 */   lbu   $at, ($t5)
/* 00434378 10000002 */  b     .L00434384
/* 0043437C 240F0001 */   li    $t7, 1
/* 00434380 240F0000 */  li    $t7, 0
.L00434384:
/* 00434384 11E00003 */  beqz  $t7, .L00434394
/* 00434388 00000000 */   nop   
/* 0043438C 03E00008 */  jr    $ra
/* 00434390 24020198 */   li    $v0, 408

.L00434394:
/* 00434394 8F998044 */  lw    $t9, %got(RO_1000B6A0)($gp)
/* 00434398 0040C025 */  move  $t8, $v0
/* 0043439C 20490020 */  addi  $t1, $v0, 0x20
/* 004343A0 2739B6A0 */  addiu $t9, %lo(RO_1000B6A0) # addiu $t9, $t9, -0x4960
/* 004343A4 93010000 */  lbu   $at, ($t8)
.L004343A8:
/* 004343A8 93280000 */  lbu   $t0, ($t9)
/* 004343AC 23180001 */  addi  $t8, $t8, 1
/* 004343B0 23390001 */  addi  $t9, $t9, 1
/* 004343B4 54280006 */  bnel  $at, $t0, .L004343D0
/* 004343B8 24090000 */   li    $t1, 0
/* 004343BC 5709FFFA */  bnel  $t8, $t1, .L004343A8
/* 004343C0 93010000 */   lbu   $at, ($t8)
/* 004343C4 10000002 */  b     .L004343D0
/* 004343C8 24090001 */   li    $t1, 1
/* 004343CC 24090000 */  li    $t1, 0
.L004343D0:
/* 004343D0 11200003 */  beqz  $t1, .L004343E0
/* 004343D4 00000000 */   nop   
/* 004343D8 03E00008 */  jr    $ra
/* 004343DC 24020199 */   li    $v0, 409

.L004343E0:
/* 004343E0 8F8B8044 */  lw    $t3, %got(RO_1000B680)($gp)
/* 004343E4 00405025 */  move  $t2, $v0
/* 004343E8 204D0020 */  addi  $t5, $v0, 0x20
/* 004343EC 256BB680 */  addiu $t3, %lo(RO_1000B680) # addiu $t3, $t3, -0x4980
/* 004343F0 91410000 */  lbu   $at, ($t2)
.L004343F4:
/* 004343F4 916C0000 */  lbu   $t4, ($t3)
/* 004343F8 214A0001 */  addi  $t2, $t2, 1
/* 004343FC 216B0001 */  addi  $t3, $t3, 1
/* 00434400 542C0006 */  bnel  $at, $t4, .L0043441C
/* 00434404 240D0000 */   li    $t5, 0
/* 00434408 554DFFFA */  bnel  $t2, $t5, .L004343F4
/* 0043440C 91410000 */   lbu   $at, ($t2)
/* 00434410 10000002 */  b     .L0043441C
/* 00434414 240D0001 */   li    $t5, 1
/* 00434418 240D0000 */  li    $t5, 0
.L0043441C:
/* 0043441C 11A00003 */  beqz  $t5, .L0043442C
/* 00434420 2403FFFF */   li    $v1, -1
/* 00434424 03E00008 */  jr    $ra
/* 00434428 24020003 */   li    $v0, 3

.L0043442C:
/* 0043442C 03E00008 */  jr    $ra
/* 00434430 00601025 */   move  $v0, $v1

    .type func_00434434, @function
func_00434434:
    # 00434720 processargs
/* 00434434 3C1C0FBE */  .cpload $t9
/* 00434438 279C5E5C */  
/* 0043443C 0399E021 */  
/* 00434440 27BDFFB8 */  addiu $sp, $sp, -0x48
/* 00434444 8F99889C */  lw    $t9, %call16(reset)($gp)
/* 00434448 AFBF002C */  sw    $ra, 0x2c($sp)
/* 0043444C AFBC0028 */  sw    $gp, 0x28($sp)
/* 00434450 AFB30024 */  sw    $s3, 0x24($sp)
/* 00434454 AFB20020 */  sw    $s2, 0x20($sp)
/* 00434458 AFB1001C */  sw    $s1, 0x1c($sp)
/* 0043445C AFB00018 */  sw    $s0, 0x18($sp)
/* 00434460 AFA0003C */  sw    $zero, 0x3c($sp)
/* 00434464 AFA00040 */  sw    $zero, 0x40($sp)
/* 00434468 27A4003C */  addiu $a0, $sp, 0x3c
/* 0043446C 2445F3CC */  addiu $a1, $v0, -0xc34
/* 00434470 24060400 */  li    $a2, 1024
/* 00434474 0320F809 */  jalr  $t9
/* 00434478 00003825 */   move  $a3, $zero
/* 0043447C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00434480 8FA4003C */  lw    $a0, 0x3c($sp)
/* 00434484 8F998840 */  lw    $t9, %call16(eof)($gp)
/* 00434488 0320F809 */  jalr  $t9
/* 0043448C 00000000 */   nop   
/* 00434490 1440003E */  bnez  $v0, .L0043458C
/* 00434494 8FBC0028 */   lw    $gp, 0x28($sp)
/* 00434498 8F938954 */  lw     $s3, %got(perm_heap)($gp)
/* 0043449C 8F928A90 */  lw     $s2, %got(ctrl_head)($gp)
.L004344A0:
/* 004344A0 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 004344A4 24040408 */  li    $a0, 1032
/* 004344A8 02602825 */  move  $a1, $s3
/* 004344AC 0320F809 */  jalr  $t9
/* 004344B0 00008025 */   move  $s0, $zero
/* 004344B4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004344B8 00408825 */  move  $s1, $v0
/* 004344BC 8FA4003C */  lw    $a0, 0x3c($sp)
/* 004344C0 8F998858 */  lw    $t9, %call16(read_string)($gp)
/* 004344C4 00402825 */  move  $a1, $v0
/* 004344C8 24060400 */  li    $a2, 1024
/* 004344CC 0320F809 */  jalr  $t9
/* 004344D0 00000000 */   nop   
/* 004344D4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004344D8 8FA4003C */  lw    $a0, 0x3c($sp)
/* 004344DC 8F998854 */  lw    $t9, %call16(readln)($gp)
/* 004344E0 0320F809 */  jalr  $t9
/* 004344E4 00000000 */   nop   
/* 004344E8 922E0000 */  lbu   $t6, ($s1)
/* 004344EC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004344F0 02201025 */  move  $v0, $s1
/* 004344F4 2DCF0040 */  sltiu $t7, $t6, 0x40
/* 004344F8 11E00009 */  beqz  $t7, .L00434520
/* 004344FC 00000000 */   nop   
/* 00434500 8F888044 */  lw    $t0, %got(D_10010810)($gp)
/* 00434504 000EC143 */  sra   $t8, $t6, 5
/* 00434508 0018C880 */  sll   $t9, $t8, 2
/* 0043450C 25080810 */  addiu $t0, %lo(D_10010810) # addiu $t0, $t0, 0x810
/* 00434510 01194821 */  addu  $t1, $t0, $t9
/* 00434514 8D2A0000 */  lw    $t2, ($t1)
/* 00434518 01CA5804 */  sllv  $t3, $t2, $t6
/* 0043451C 296F0000 */  slti  $t7, $t3, 0
.L00434520:
/* 00434520 55E00012 */  bnezl $t7, .L0043456C
/* 00434524 8E4F0000 */   lw    $t7, ($s2)
/* 00434528 904D0001 */  lbu   $t5, 1($v0)
.L0043452C:
/* 0043452C 26100001 */  addiu $s0, $s0, 1
/* 00434530 24420001 */  addiu $v0, $v0, 1
/* 00434534 2DB80040 */  sltiu $t8, $t5, 0x40
/* 00434538 13000009 */  beqz  $t8, .L00434560
/* 0043453C 00000000 */   nop   
/* 00434540 8F898044 */  lw    $t1, %got(D_10010810)($gp)
/* 00434544 000D4143 */  sra   $t0, $t5, 5
/* 00434548 0008C880 */  sll   $t9, $t0, 2
/* 0043454C 25290810 */  addiu $t1, %lo(D_10010810) # addiu $t1, $t1, 0x810
/* 00434550 01395021 */  addu  $t2, $t1, $t9
/* 00434554 8D4E0000 */  lw    $t6, ($t2)
/* 00434558 01AE5804 */  sllv  $t3, $t6, $t5
/* 0043455C 29780000 */  slti  $t8, $t3, 0
.L00434560:
/* 00434560 5300FFF2 */  beql  $t8, $zero, .L0043452C
/* 00434564 904D0001 */   lbu   $t5, 1($v0)
/* 00434568 8E4F0000 */  lw    $t7, ($s2)
.L0043456C:
/* 0043456C AE510000 */  sw    $s1, ($s2)
/* 00434570 8F998840 */  lw    $t9, %call16(eof)($gp)
/* 00434574 AE300400 */  sw    $s0, 0x400($s1)
/* 00434578 8FA4003C */  lw    $a0, 0x3c($sp)
/* 0043457C 0320F809 */  jalr  $t9
/* 00434580 AE2F0404 */   sw    $t7, 0x404($s1)
/* 00434584 1040FFC6 */  beqz  $v0, .L004344A0
/* 00434588 8FBC0028 */   lw    $gp, 0x28($sp)
.L0043458C:
/* 0043458C 8FBF002C */  lw    $ra, 0x2c($sp)
/* 00434590 8FB00018 */  lw    $s0, 0x18($sp)
/* 00434594 8FB1001C */  lw    $s1, 0x1c($sp)
/* 00434598 8FB20020 */  lw    $s2, 0x20($sp)
/* 0043459C 8FB30024 */  lw    $s3, 0x24($sp)
/* 004345A0 03E00008 */  jr    $ra
/* 004345A4 27BD0048 */   addiu $sp, $sp, 0x48

    .type func_004345A8, @function
func_004345A8:
    # 00434720 processargs
/* 004345A8 908E0000 */  lbu   $t6, ($a0)
/* 004345AC 24020001 */  li    $v0, 1
/* 004345B0 00001825 */  move  $v1, $zero
/* 004345B4 2DC10030 */  sltiu $at, $t6, 0x30
/* 004345B8 14200013 */  bnez  $at, .L00434608
/* 004345BC 00000000 */   nop   
/* 004345C0 908F0000 */  lbu   $t7, ($a0)
/* 004345C4 00822821 */  addu  $a1, $a0, $v0
/* 004345C8 2402000A */  li    $v0, 10
/* 004345CC 2DE1003A */  sltiu $at, $t7, 0x3a
/* 004345D0 1020000D */  beqz  $at, .L00434608
/* 004345D4 00000000 */   nop   
/* 004345D8 90A6FFFF */  lbu   $a2, -1($a1)
.L004345DC:
/* 004345DC 00620019 */  multu $v1, $v0
/* 004345E0 24A50001 */  addiu $a1, $a1, 1
/* 004345E4 0000C012 */  mflo  $t8
/* 004345E8 03061821 */  addu  $v1, $t8, $a2
/* 004345EC 90A6FFFF */  lbu   $a2, -1($a1)
/* 004345F0 2463FFD0 */  addiu $v1, $v1, -0x30
/* 004345F4 2CC10030 */  sltiu $at, $a2, 0x30
/* 004345F8 14200003 */  bnez  $at, .L00434608
/* 004345FC 2CC1003A */   sltiu $at, $a2, 0x3a
/* 00434600 1420FFF6 */  bnez  $at, .L004345DC
/* 00434604 00000000 */   nop   
.L00434608:
/* 00434608 03E00008 */  jr    $ra
/* 0043460C 00601025 */   move  $v0, $v1

    .type func_00434610, @function
func_00434610:
    # 00434720 processargs
/* 00434610 AFA50004 */  sw    $a1, 4($sp)
/* 00434614 93AE0004 */  lbu   $t6, 4($sp)
/* 00434618 24080020 */  li    $t0, 32
/* 0043461C AFA60008 */  sw    $a2, 8($sp)
/* 00434620 AFA7000C */  sw    $a3, 0xc($sp)
/* 00434624 110E000A */  beq   $t0, $t6, .L00434650
/* 00434628 24020001 */   li    $v0, 1
/* 0043462C 27A50004 */  addiu $a1, $sp, 4
/* 00434630 90A60000 */  lbu   $a2, ($a1)
/* 00434634 24830001 */  addiu $v1, $a0, 1
.L00434638:
/* 00434638 A066FFFF */  sb    $a2, -1($v1)
/* 0043463C 90A60001 */  lbu   $a2, 1($a1)
/* 00434640 24420001 */  addiu $v0, $v0, 1
/* 00434644 24630001 */  addiu $v1, $v1, 1
/* 00434648 1506FFFB */  bne   $t0, $a2, .L00434638
/* 0043464C 24A50001 */   addiu $a1, $a1, 1
.L00434650:
/* 00434650 28410401 */  slti  $at, $v0, 0x401
/* 00434654 10200014 */  beqz  $at, .L004346A8
/* 00434658 00402825 */   move  $a1, $v0
/* 0043465C 24090401 */  li    $t1, 1025
/* 00434660 01253823 */  subu  $a3, $t1, $a1
/* 00434664 30E70003 */  andi  $a3, $a3, 3
/* 00434668 10E00007 */  beqz  $a3, .L00434688
/* 0043466C 00E53021 */   addu  $a2, $a3, $a1
/* 00434670 00821821 */  addu  $v1, $a0, $v0
.L00434674:
/* 00434674 24420001 */  addiu $v0, $v0, 1
/* 00434678 A068FFFF */  sb    $t0, -1($v1)
/* 0043467C 14C2FFFD */  bne   $a2, $v0, .L00434674
/* 00434680 24630001 */   addiu $v1, $v1, 1
/* 00434684 10490008 */  beq   $v0, $t1, .L004346A8
.L00434688:
/* 00434688 00821821 */   addu  $v1, $a0, $v0
.L0043468C:
/* 0043468C 24420004 */  addiu $v0, $v0, 4
/* 00434690 A068FFFF */  sb    $t0, -1($v1)
/* 00434694 A0680000 */  sb    $t0, ($v1)
/* 00434698 A0680001 */  sb    $t0, 1($v1)
/* 0043469C A0680002 */  sb    $t0, 2($v1)
/* 004346A0 1449FFFA */  bne   $v0, $t1, .L0043468C
/* 004346A4 24630004 */   addiu $v1, $v1, 4
.L004346A8:
/* 004346A8 03E00008 */  jr    $ra
/* 004346AC 00000000 */   nop   

    .type func_004346B0, @function
func_004346B0:
    # 00434720 processargs
/* 004346B0 AFA50004 */  sw    $a1, 4($sp)
/* 004346B4 93AE0004 */  lbu   $t6, 4($sp)
/* 004346B8 AFA7000C */  sw    $a3, 0xc($sp)
/* 004346BC 24070020 */  li    $a3, 32
/* 004346C0 00802825 */  move  $a1, $a0
/* 004346C4 AFA40000 */  sw    $a0, ($sp)
/* 004346C8 AFA60008 */  sw    $a2, 8($sp)
/* 004346CC 10EE000E */  beq   $a3, $t6, .L00434708
/* 004346D0 24030001 */   li    $v1, 1
/* 004346D4 27A20004 */  addiu $v0, $sp, 4
/* 004346D8 90440000 */  lbu   $a0, ($v0)
/* 004346DC 24A60001 */  addiu $a2, $a1, 1
.L004346E0:
/* 004346E0 90D8FFFF */  lbu   $t8, -1($a2)
/* 004346E4 50980004 */  beql  $a0, $t8, .L004346F8
/* 004346E8 90440001 */   lbu   $a0, 1($v0)
/* 004346EC 03E00008 */  jr    $ra
/* 004346F0 00001025 */   move  $v0, $zero

/* 004346F4 90440001 */  lbu   $a0, 1($v0)
.L004346F8:
/* 004346F8 24630001 */  addiu $v1, $v1, 1
/* 004346FC 24420001 */  addiu $v0, $v0, 1
/* 00434700 14E4FFF7 */  bne   $a3, $a0, .L004346E0
/* 00434704 24C60001 */   addiu $a2, $a2, 1
.L00434708:
/* 00434708 00A3C821 */  addu  $t9, $a1, $v1
/* 0043470C 9328FFFF */  lbu   $t0, -1($t9)
/* 00434710 00E81026 */  xor   $v0, $a3, $t0
/* 00434714 2C420001 */  sltiu $v0, $v0, 1
/* 00434718 03E00008 */  jr    $ra
/* 0043471C 00000000 */   nop   

glabel processargs
    .ent processargs
    # 0043771C optinit
/* 00434720 3C1C0FBE */  .cpload $t9
/* 00434724 279C5B70 */  
/* 00434728 0399E021 */  
/* 0043472C 8F818A64 */  lw     $at, %got(listwritten)($gp)
/* 00434730 27BDEB48 */  addiu $sp, $sp, -0x14b8
/* 00434734 AFB60044 */  sw    $s6, 0x44($sp)
/* 00434738 A0200000 */  sb    $zero, ($at)
/* 0043473C 8F818A68 */  lw     $at, %got(symwritten)($gp)
/* 00434740 24160020 */  li    $s6, 32
/* 00434744 8F8E8044 */  lw    $t6, %got(RO_1000BDEC)($gp)
/* 00434748 A0200000 */  sb    $zero, ($at)
/* 0043474C 8F818DD8 */  lw     $at, %got(listname)($gp)
/* 00434750 27A40081 */  addiu $a0, $sp, 0x81
/* 00434754 25CEBDEC */  addiu $t6, %lo(RO_1000BDEC) # addiu $t6, $t6, -0x4214
/* 00434758 A0360000 */  sb    $s6, ($at)
/* 0043475C 8F818DE0 */  lw     $at, %got(symname)($gp)
/* 00434760 AFBF0054 */  sw    $ra, 0x54($sp)
/* 00434764 AFBE0050 */  sw    $fp, 0x50($sp)
/* 00434768 AFBC004C */  sw    $gp, 0x4c($sp)
/* 0043476C AFB70048 */  sw    $s7, 0x48($sp)
/* 00434770 AFB50040 */  sw    $s5, 0x40($sp)
/* 00434774 AFB4003C */  sw    $s4, 0x3c($sp)
/* 00434778 AFB30038 */  sw    $s3, 0x38($sp)
/* 0043477C AFB20034 */  sw    $s2, 0x34($sp)
/* 00434780 AFB10030 */  sw    $s1, 0x30($sp)
/* 00434784 AFB0002C */  sw    $s0, 0x2c($sp)
/* 00434788 AFA00CA8 */  sw    $zero, 0xca8($sp)
/* 0043478C A3A00482 */  sb    $zero, 0x482($sp)
/* 00434790 A3A00481 */  sb    $zero, 0x481($sp)
/* 00434794 25C803FC */  addiu $t0, $t6, 0x3fc
/* 00434798 0080C825 */  move  $t9, $a0
/* 0043479C A0360000 */  sb    $s6, ($at)
.L004347A0:
/* 004347A0 89D80000 */  lwl   $t8, ($t6)
/* 004347A4 99D80003 */  lwr   $t8, 3($t6)
/* 004347A8 25CE000C */  addiu $t6, $t6, 0xc
/* 004347AC 2739000C */  addiu $t9, $t9, 0xc
/* 004347B0 AB38FFF4 */  swl   $t8, -0xc($t9)
/* 004347B4 BB38FFF7 */  swr   $t8, -9($t9)
/* 004347B8 89CFFFF8 */  lwl   $t7, -8($t6)
/* 004347BC 99CFFFFB */  lwr   $t7, -5($t6)
/* 004347C0 AB2FFFF8 */  swl   $t7, -8($t9)
/* 004347C4 BB2FFFFB */  swr   $t7, -5($t9)
/* 004347C8 89D8FFFC */  lwl   $t8, -4($t6)
/* 004347CC 99D8FFFF */  lwr   $t8, -1($t6)
/* 004347D0 AB38FFFC */  swl   $t8, -4($t9)
/* 004347D4 15C8FFF2 */  bne   $t6, $t0, .L004347A0
/* 004347D8 BB38FFFF */   swr   $t8, -1($t9)
/* 004347DC 89D80000 */  lwl   $t8, ($t6)
/* 004347E0 99D80003 */  lwr   $t8, 3($t6)
/* 004347E4 AB380000 */  swl   $t8, ($t9)
/* 004347E8 BB380003 */  swr   $t8, 3($t9)
/* 004347EC 8F9980A4 */  lw    $t9, %call16(getenv)($gp)
/* 004347F0 A3A00085 */  sb    $zero, 0x85($sp)
/* 004347F4 0320F809 */  jalr  $t9
/* 004347F8 00000000 */   nop   
/* 004347FC 10400003 */  beqz  $v0, .L0043480C
/* 00434800 8FBC004C */   lw    $gp, 0x4c($sp)
/* 00434804 24090001 */  li    $t1, 1
/* 00434808 A3A90481 */  sb    $t1, 0x481($sp)
.L0043480C:
/* 0043480C 8F828944 */  lw     $v0, %got(__Argc)($gp)
/* 00434810 8C420000 */  lw    $v0, ($v0)
/* 00434814 28410002 */  slti  $at, $v0, 2
/* 00434818 50200008 */  beql  $at, $zero, .L0043483C
/* 0043481C 24010001 */   li    $at, 1
/* 00434820 8F998728 */  lw    $t9, %call16(abort)($gp)
/* 00434824 0320F809 */  jalr  $t9
/* 00434828 00000000 */   nop   
/* 0043482C 8FBC004C */  lw    $gp, 0x4c($sp)
/* 00434830 8F828944 */  lw     $v0, %got(__Argc)($gp)
/* 00434834 8C420000 */  lw    $v0, ($v0)
/* 00434838 24010001 */  li    $at, 1
.L0043483C:
/* 0043483C 10410A8F */  beq   $v0, $at, .L0043727C
/* 00434840 24150001 */   li    $s5, 1
/* 00434844 8FBE0CA4 */  lw    $fp, 0xca4($sp)
/* 00434848 24170001 */  li    $s7, 1
/* 0043484C 27B414B8 */  addiu $s4, $sp, 0x14b8
/* 00434850 27B310B8 */  addiu $s3, $sp, 0x10b8
.L00434854:
/* 00434854 8F998890 */  lw    $t9, %call16(get_arg)($gp)
/* 00434858 02A02025 */  move  $a0, $s5
/* 0043485C 02602825 */  move  $a1, $s3
/* 00434860 0320F809 */  jalr  $t9
/* 00434864 24060400 */   li    $a2, 1024
/* 00434868 93AA10B8 */  lbu   $t2, 0x10b8($sp)
/* 0043486C 2401002D */  li    $at, 45
/* 00434870 8FBC004C */  lw    $gp, 0x4c($sp)
/* 00434874 11410051 */  beq   $t2, $at, .L004349BC
/* 00434878 93A210B9 */   lbu   $v0, 0x10b9($sp)
/* 0043487C 8FA20CA8 */  lw    $v0, 0xca8($sp)
/* 00434880 24010001 */  li    $at, 1
/* 00434884 02604025 */  move  $t0, $s3
/* 00434888 24420001 */  addiu $v0, $v0, 1
/* 0043488C 14410017 */  bne   $v0, $at, .L004348EC
/* 00434890 AFA20CA8 */   sw    $v0, 0xca8($sp)
/* 00434894 8F8B8DD0 */  lw     $t3, %got(sourcename)($gp)
/* 00434898 266E03FC */  addiu $t6, $s3, 0x3fc
.L0043489C:
/* 0043489C 890D0000 */  lwl   $t5, ($t0)
/* 004348A0 990D0003 */  lwr   $t5, 3($t0)
/* 004348A4 2508000C */  addiu $t0, $t0, 0xc
/* 004348A8 256B000C */  addiu $t3, $t3, 0xc
/* 004348AC A96DFFF4 */  swl   $t5, -0xc($t3)
/* 004348B0 B96DFFF7 */  swr   $t5, -9($t3)
/* 004348B4 890CFFF8 */  lwl   $t4, -8($t0)
/* 004348B8 990CFFFB */  lwr   $t4, -5($t0)
/* 004348BC A96CFFF8 */  swl   $t4, -8($t3)
/* 004348C0 B96CFFFB */  swr   $t4, -5($t3)
/* 004348C4 890DFFFC */  lwl   $t5, -4($t0)
/* 004348C8 990DFFFF */  lwr   $t5, -1($t0)
/* 004348CC A96DFFFC */  swl   $t5, -4($t3)
/* 004348D0 150EFFF2 */  bne   $t0, $t6, .L0043489C
/* 004348D4 B96DFFFF */   swr   $t5, -1($t3)
/* 004348D8 890D0000 */  lwl   $t5, ($t0)
/* 004348DC 990D0003 */  lwr   $t5, 3($t0)
/* 004348E0 A96D0000 */  swl   $t5, ($t3)
/* 004348E4 10000A5F */  b     .L00437264
/* 004348E8 B96D0003 */   swr   $t5, 3($t3)
.L004348EC:
/* 004348EC 8FB90CA8 */  lw    $t9, 0xca8($sp)
/* 004348F0 24010002 */  li    $at, 2
/* 004348F4 02605025 */  move  $t2, $s3
/* 004348F8 17210017 */  bne   $t9, $at, .L00434958
/* 004348FC 8FA80CA8 */   lw    $t0, 0xca8($sp)
/* 00434900 8F8F8DD4 */  lw     $t7, %got(uopt_uname)($gp)
/* 00434904 266E03FC */  addiu $t6, $s3, 0x3fc
.L00434908:
/* 00434908 89490000 */  lwl   $t1, ($t2)
/* 0043490C 99490003 */  lwr   $t1, 3($t2)
/* 00434910 254A000C */  addiu $t2, $t2, 0xc
/* 00434914 25EF000C */  addiu $t7, $t7, 0xc
/* 00434918 A9E9FFF4 */  swl   $t1, -0xc($t7)
/* 0043491C B9E9FFF7 */  swr   $t1, -9($t7)
/* 00434920 8958FFF8 */  lwl   $t8, -8($t2)
/* 00434924 9958FFFB */  lwr   $t8, -5($t2)
/* 00434928 A9F8FFF8 */  swl   $t8, -8($t7)
/* 0043492C B9F8FFFB */  swr   $t8, -5($t7)
/* 00434930 8949FFFC */  lwl   $t1, -4($t2)
/* 00434934 9949FFFF */  lwr   $t1, -1($t2)
/* 00434938 A9E9FFFC */  swl   $t1, -4($t7)
/* 0043493C 154EFFF2 */  bne   $t2, $t6, .L00434908
/* 00434940 B9E9FFFF */   swr   $t1, -1($t7)
/* 00434944 89490000 */  lwl   $t1, ($t2)
/* 00434948 99490003 */  lwr   $t1, 3($t2)
/* 0043494C A9E90000 */  swl   $t1, ($t7)
/* 00434950 10000A44 */  b     .L00437264
/* 00434954 B9E90003 */   swr   $t1, 3($t7)
.L00434958:
/* 00434958 24010003 */  li    $at, 3
/* 0043495C 15010A41 */  bne   $t0, $at, .L00437264
/* 00434960 0260C825 */   move  $t9, $s3
/* 00434964 8F8B8DDC */  lw     $t3, %got(strpname)($gp)
/* 00434968 266E03FC */  addiu $t6, $s3, 0x3fc
.L0043496C:
/* 0043496C 8B2D0000 */  lwl   $t5, ($t9)
/* 00434970 9B2D0003 */  lwr   $t5, 3($t9)
/* 00434974 2739000C */  addiu $t9, $t9, 0xc
/* 00434978 256B000C */  addiu $t3, $t3, 0xc
/* 0043497C A96DFFF4 */  swl   $t5, -0xc($t3)
/* 00434980 B96DFFF7 */  swr   $t5, -9($t3)
/* 00434984 8B2CFFF8 */  lwl   $t4, -8($t9)
/* 00434988 9B2CFFFB */  lwr   $t4, -5($t9)
/* 0043498C A96CFFF8 */  swl   $t4, -8($t3)
/* 00434990 B96CFFFB */  swr   $t4, -5($t3)
/* 00434994 8B2DFFFC */  lwl   $t5, -4($t9)
/* 00434998 9B2DFFFF */  lwr   $t5, -1($t9)
/* 0043499C A96DFFFC */  swl   $t5, -4($t3)
/* 004349A0 172EFFF2 */  bne   $t9, $t6, .L0043496C
/* 004349A4 B96DFFFF */   swr   $t5, -1($t3)
/* 004349A8 8B2D0000 */  lwl   $t5, ($t9)
/* 004349AC 9B2D0003 */  lwr   $t5, 3($t9)
/* 004349B0 A96D0000 */  swl   $t5, ($t3)
/* 004349B4 10000A2B */  b     .L00437264
/* 004349B8 B96D0003 */   swr   $t5, 3($t3)
.L004349BC:
/* 004349BC 2401002D */  li    $at, 45
/* 004349C0 144100A4 */  bne   $v0, $at, .L00434C54
/* 004349C4 93A310BA */   lbu   $v1, 0x10ba($sp)
/* 004349C8 2401002D */  li    $at, 45
/* 004349CC 146100A1 */  bne   $v1, $at, .L00434C54
/* 004349D0 93AA0481 */   lbu   $t2, 0x481($sp)
/* 004349D4 1140009F */  beqz  $t2, .L00434C54
/* 004349D8 02A02025 */   move  $a0, $s5
/* 004349DC 8F998890 */  lw    $t9, %call16(get_arg)($gp)
/* 004349E0 02602825 */  move  $a1, $s3
/* 004349E4 24060400 */  li    $a2, 1024
/* 004349E8 0320F809 */  jalr  $t9
/* 004349EC 24100400 */   li    $s0, 1024
/* 004349F0 8FBC004C */  lw    $gp, 0x4c($sp)
/* 004349F4 27AF0081 */  addiu $t7, $sp, 0x81
/* 004349F8 02604025 */  move  $t0, $s3
/* 004349FC 266E03FC */  addiu $t6, $s3, 0x3fc
.L00434A00:
/* 00434A00 89090000 */  lwl   $t1, ($t0)
/* 00434A04 99090003 */  lwr   $t1, 3($t0)
/* 00434A08 2508000C */  addiu $t0, $t0, 0xc
/* 00434A0C 25EF000C */  addiu $t7, $t7, 0xc
/* 00434A10 A9E9FFF4 */  swl   $t1, -0xc($t7)
/* 00434A14 B9E9FFF7 */  swr   $t1, -9($t7)
/* 00434A18 8918FFF8 */  lwl   $t8, -8($t0)
/* 00434A1C 9918FFFB */  lwr   $t8, -5($t0)
/* 00434A20 A9F8FFF8 */  swl   $t8, -8($t7)
/* 00434A24 B9F8FFFB */  swr   $t8, -5($t7)
/* 00434A28 8909FFFC */  lwl   $t1, -4($t0)
/* 00434A2C 9909FFFF */  lwr   $t1, -1($t0)
/* 00434A30 A9E9FFFC */  swl   $t1, -4($t7)
/* 00434A34 150EFFF2 */  bne   $t0, $t6, .L00434A00
/* 00434A38 B9E9FFFF */   swr   $t1, -1($t7)
/* 00434A3C 89090000 */  lwl   $t1, ($t0)
/* 00434A40 99090003 */  lwr   $t1, 3($t0)
/* 00434A44 27AA0080 */  addiu $t2, $sp, 0x80
/* 00434A48 A9E90000 */  swl   $t1, ($t7)
/* 00434A4C B9E90003 */  swr   $t1, 3($t7)
/* 00434A50 93B90480 */  lbu   $t9, 0x480($sp)
/* 00434A54 16D90008 */  bne   $s6, $t9, .L00434A78
/* 00434A58 00000000 */   nop   
/* 00434A5C 2610FFFF */  addiu $s0, $s0, -1
.L00434A60:
/* 00434A60 1A000005 */  blez  $s0, .L00434A78
/* 00434A64 27AB0080 */   addiu $t3, $sp, 0x80
/* 00434A68 020B6021 */  addu  $t4, $s0, $t3
/* 00434A6C 918D0000 */  lbu   $t5, ($t4)
/* 00434A70 52CDFFFB */  beql  $s6, $t5, .L00434A60
/* 00434A74 2610FFFF */   addiu $s0, $s0, -1
.L00434A78:
/* 00434A78 1A000003 */  blez  $s0, .L00434A88
/* 00434A7C 26020001 */   addiu $v0, $s0, 1
/* 00434A80 020A7021 */  addu  $t6, $s0, $t2
/* 00434A84 A1C00001 */  sb    $zero, 1($t6)
.L00434A88:
/* 00434A88 28410003 */  slti  $at, $v0, 3
/* 00434A8C 14200021 */  bnez  $at, .L00434B14
/* 00434A90 24460001 */   addiu $a2, $v0, 1
/* 00434A94 24C7FFFD */  addiu $a3, $a2, -3
/* 00434A98 30E70003 */  andi  $a3, $a3, 3
/* 00434A9C 10E0000D */  beqz  $a3, .L00434AD4
/* 00434AA0 24050003 */   li    $a1, 3
/* 00434AA4 27A810B7 */  addiu $t0, $sp, 0x10b7
/* 00434AA8 27AF0080 */  addiu $t7, $sp, 0x80
/* 00434AAC 00AF1021 */  addu  $v0, $a1, $t7
/* 00434AB0 00A81821 */  addu  $v1, $a1, $t0
/* 00434AB4 24E40003 */  addiu $a0, $a3, 3
.L00434AB8:
/* 00434AB8 90580000 */  lbu   $t8, ($v0)
/* 00434ABC 24A50001 */  addiu $a1, $a1, 1
/* 00434AC0 24630001 */  addiu $v1, $v1, 1
/* 00434AC4 24420001 */  addiu $v0, $v0, 1
/* 00434AC8 1485FFFB */  bne   $a0, $a1, .L00434AB8
/* 00434ACC A078FFFD */   sb    $t8, -3($v1)
/* 00434AD0 10A60010 */  beq   $a1, $a2, .L00434B14
.L00434AD4:
/* 00434AD4 27B90080 */   addiu $t9, $sp, 0x80
/* 00434AD8 27A910B7 */  addiu $t1, $sp, 0x10b7
/* 00434ADC 00A91821 */  addu  $v1, $a1, $t1
/* 00434AE0 00B91021 */  addu  $v0, $a1, $t9
/* 00434AE4 00D92021 */  addu  $a0, $a2, $t9
.L00434AE8:
/* 00434AE8 904B0000 */  lbu   $t3, ($v0)
/* 00434AEC 904C0001 */  lbu   $t4, 1($v0)
/* 00434AF0 904D0002 */  lbu   $t5, 2($v0)
/* 00434AF4 904A0003 */  lbu   $t2, 3($v0)
/* 00434AF8 24420004 */  addiu $v0, $v0, 4
/* 00434AFC 24630004 */  addiu $v1, $v1, 4
/* 00434B00 A06BFFFA */  sb    $t3, -6($v1)
/* 00434B04 A06CFFFB */  sb    $t4, -5($v1)
/* 00434B08 A06DFFFC */  sb    $t5, -4($v1)
/* 00434B0C 1444FFF6 */  bne   $v0, $a0, .L00434AE8
/* 00434B10 A06AFFFD */   sb    $t2, -3($v1)
.L00434B14:
/* 00434B14 8FAE0CA8 */  lw    $t6, 0xca8($sp)
/* 00434B18 24010001 */  li    $at, 1
/* 00434B1C 0260C825 */  move  $t9, $s3
/* 00434B20 25C80001 */  addiu $t0, $t6, 1
/* 00434B24 15010017 */  bne   $t0, $at, .L00434B84
/* 00434B28 AFA80CA8 */   sw    $t0, 0xca8($sp)
/* 00434B2C 8F8F8DD0 */  lw     $t7, %got(sourcename)($gp)
/* 00434B30 266B03FC */  addiu $t3, $s3, 0x3fc
.L00434B34:
/* 00434B34 8B290000 */  lwl   $t1, ($t9)
/* 00434B38 9B290003 */  lwr   $t1, 3($t9)
/* 00434B3C 2739000C */  addiu $t9, $t9, 0xc
/* 00434B40 25EF000C */  addiu $t7, $t7, 0xc
/* 00434B44 A9E9FFF4 */  swl   $t1, -0xc($t7)
/* 00434B48 B9E9FFF7 */  swr   $t1, -9($t7)
/* 00434B4C 8B38FFF8 */  lwl   $t8, -8($t9)
/* 00434B50 9B38FFFB */  lwr   $t8, -5($t9)
/* 00434B54 A9F8FFF8 */  swl   $t8, -8($t7)
/* 00434B58 B9F8FFFB */  swr   $t8, -5($t7)
/* 00434B5C 8B29FFFC */  lwl   $t1, -4($t9)
/* 00434B60 9B29FFFF */  lwr   $t1, -1($t9)
/* 00434B64 A9E9FFFC */  swl   $t1, -4($t7)
/* 00434B68 172BFFF2 */  bne   $t9, $t3, .L00434B34
/* 00434B6C B9E9FFFF */   swr   $t1, -1($t7)
/* 00434B70 8B290000 */  lwl   $t1, ($t9)
/* 00434B74 9B290003 */  lwr   $t1, 3($t9)
/* 00434B78 A9E90000 */  swl   $t1, ($t7)
/* 00434B7C 100009B9 */  b     .L00437264
/* 00434B80 B9E90003 */   swr   $t1, 3($t7)
.L00434B84:
/* 00434B84 8FAC0CA8 */  lw    $t4, 0xca8($sp)
/* 00434B88 24010002 */  li    $at, 2
/* 00434B8C 02604025 */  move  $t0, $s3
/* 00434B90 15810017 */  bne   $t4, $at, .L00434BF0
/* 00434B94 8FB90CA8 */   lw    $t9, 0xca8($sp)
/* 00434B98 8F8D8DD4 */  lw     $t5, %got(uopt_uname)($gp)
/* 00434B9C 266B03FC */  addiu $t3, $s3, 0x3fc
.L00434BA0:
/* 00434BA0 890E0000 */  lwl   $t6, ($t0)
/* 00434BA4 990E0003 */  lwr   $t6, 3($t0)
/* 00434BA8 2508000C */  addiu $t0, $t0, 0xc
/* 00434BAC 25AD000C */  addiu $t5, $t5, 0xc
/* 00434BB0 A9AEFFF4 */  swl   $t6, -0xc($t5)
/* 00434BB4 B9AEFFF7 */  swr   $t6, -9($t5)
/* 00434BB8 890AFFF8 */  lwl   $t2, -8($t0)
/* 00434BBC 990AFFFB */  lwr   $t2, -5($t0)
/* 00434BC0 A9AAFFF8 */  swl   $t2, -8($t5)
/* 00434BC4 B9AAFFFB */  swr   $t2, -5($t5)
/* 00434BC8 890EFFFC */  lwl   $t6, -4($t0)
/* 00434BCC 990EFFFF */  lwr   $t6, -1($t0)
/* 00434BD0 A9AEFFFC */  swl   $t6, -4($t5)
/* 00434BD4 150BFFF2 */  bne   $t0, $t3, .L00434BA0
/* 00434BD8 B9AEFFFF */   swr   $t6, -1($t5)
/* 00434BDC 890E0000 */  lwl   $t6, ($t0)
/* 00434BE0 990E0003 */  lwr   $t6, 3($t0)
/* 00434BE4 A9AE0000 */  swl   $t6, ($t5)
/* 00434BE8 1000099E */  b     .L00437264
/* 00434BEC B9AE0003 */   swr   $t6, 3($t5)
.L00434BF0:
/* 00434BF0 24010003 */  li    $at, 3
/* 00434BF4 1721099B */  bne   $t9, $at, .L00437264
/* 00434BF8 02606025 */   move  $t4, $s3
/* 00434BFC 8F8F8DDC */  lw     $t7, %got(strpname)($gp)
/* 00434C00 266B03FC */  addiu $t3, $s3, 0x3fc
.L00434C04:
/* 00434C04 89890000 */  lwl   $t1, ($t4)
/* 00434C08 99890003 */  lwr   $t1, 3($t4)
/* 00434C0C 258C000C */  addiu $t4, $t4, 0xc
/* 00434C10 25EF000C */  addiu $t7, $t7, 0xc
/* 00434C14 A9E9FFF4 */  swl   $t1, -0xc($t7)
/* 00434C18 B9E9FFF7 */  swr   $t1, -9($t7)
/* 00434C1C 8998FFF8 */  lwl   $t8, -8($t4)
/* 00434C20 9998FFFB */  lwr   $t8, -5($t4)
/* 00434C24 A9F8FFF8 */  swl   $t8, -8($t7)
/* 00434C28 B9F8FFFB */  swr   $t8, -5($t7)
/* 00434C2C 8989FFFC */  lwl   $t1, -4($t4)
/* 00434C30 9989FFFF */  lwr   $t1, -1($t4)
/* 00434C34 A9E9FFFC */  swl   $t1, -4($t7)
/* 00434C38 158BFFF2 */  bne   $t4, $t3, .L00434C04
/* 00434C3C B9E9FFFF */   swr   $t1, -1($t7)
/* 00434C40 89890000 */  lwl   $t1, ($t4)
/* 00434C44 99890003 */  lwr   $t1, 3($t4)
/* 00434C48 A9E90000 */  swl   $t1, ($t7)
/* 00434C4C 10000985 */  b     .L00437264
/* 00434C50 B9E90003 */   swr   $t1, 3($t7)
.L00434C54:
/* 00434C54 24010047 */  li    $at, 71
/* 00434C58 14410013 */  bne   $v0, $at, .L00434CA8
/* 00434C5C 93A310BA */   lbu   $v1, 0x10ba($sp)
/* 00434C60 14760011 */  bne   $v1, $s6, .L00434CA8
/* 00434C64 27A50CB8 */   addiu $a1, $sp, 0xcb8
/* 00434C68 8F998890 */  lw    $t9, %call16(get_arg)($gp)
/* 00434C6C 26B50001 */  addiu $s5, $s5, 1
/* 00434C70 02A02025 */  move  $a0, $s5
/* 00434C74 0320F809 */  jalr  $t9
/* 00434C78 24060400 */   li    $a2, 1024
/* 00434C7C 8FBC004C */  lw    $gp, 0x4c($sp)
/* 00434C80 27A40CB8 */  addiu $a0, $sp, 0xcb8
/* 00434C84 02801025 */  move  $v0, $s4
/* 00434C88 8F998020 */  lw    $t9, %got(func_004345A8)($gp)
/* 00434C8C 273945A8 */  addiu $t9, %lo(func_004345A8) # addiu $t9, $t9, 0x45a8
/* 00434C90 0320F809 */  jalr  $t9
/* 00434C94 00000000 */   nop   
/* 00434C98 8FBC004C */  lw    $gp, 0x4c($sp)
/* 00434C9C 8F818B30 */  lw     $at, %got(g_num)($gp)
/* 00434CA0 10000970 */  b     .L00437264
/* 00434CA4 AC220000 */   sw    $v0, ($at)
.L00434CA8:
/* 00434CA8 2401004F */  li    $at, 79
/* 00434CAC 1441000E */  bne   $v0, $at, .L00434CE8
/* 00434CB0 2468FFE0 */   addiu $t0, $v1, -0x20
/* 00434CB4 2D0D0020 */  sltiu $t5, $t0, 0x20
/* 00434CB8 000D5023 */  negu  $t2, $t5
/* 00434CBC 314EC000 */  andi  $t6, $t2, 0xc000
/* 00434CC0 010EC804 */  sllv  $t9, $t6, $t0
/* 00434CC4 07210008 */  bgez  $t9, .L00434CE8
/* 00434CC8 93A410BB */   lbu   $a0, 0x10bb($sp)
/* 00434CCC 54960007 */  bnel  $a0, $s6, .L00434CEC
/* 00434CD0 2401004F */   li    $at, 79
/* 00434CD4 8F818A54 */  lw     $at, %got(suppressopt)($gp)
/* 00434CD8 A0370000 */  sb    $s7, ($at)
/* 00434CDC 8F818A58 */  lw     $at, %got(o0o1specified)($gp)
/* 00434CE0 10000960 */  b     .L00437264
/* 00434CE4 A0370000 */   sb    $s7, ($at)
.L00434CE8:
/* 00434CE8 2401004F */  li    $at, 79
.L00434CEC:
/* 00434CEC 1441000E */  bne   $v0, $at, .L00434D28
/* 00434CF0 93A410BB */   lbu   $a0, 0x10bb($sp)
/* 00434CF4 246BFFE0 */  addiu $t3, $v1, -0x20
/* 00434CF8 2D6C0020 */  sltiu $t4, $t3, 0x20
/* 00434CFC 3C018000 */  lui   $at, 0x8000
/* 00434D00 34212000 */  ori   $at, $at, 0x2000
/* 00434D04 000C7823 */  negu  $t7, $t4
/* 00434D08 01E1C024 */  and   $t8, $t7, $at
/* 00434D0C 01784804 */  sllv  $t1, $t8, $t3
/* 00434D10 05230006 */  bgezl $t1, .L00434D2C
/* 00434D14 2401004F */   li    $at, 79
/* 00434D18 54960004 */  bnel  $a0, $s6, .L00434D2C
/* 00434D1C 2401004F */   li    $at, 79
/* 00434D20 10000950 */  b     .L00437264
/* 00434D24 A3B70482 */   sb    $s7, 0x482($sp)
.L00434D28:
/* 00434D28 2401004F */  li    $at, 79
.L00434D2C:
/* 00434D2C 1441000C */  bne   $v0, $at, .L00434D60
/* 00434D30 246DFFE0 */   addiu $t5, $v1, -0x20
/* 00434D34 2DAA0020 */  sltiu $t2, $t5, 0x20
/* 00434D38 000A7023 */  negu  $t6, $t2
/* 00434D3C 31C81800 */  andi  $t0, $t6, 0x1800
/* 00434D40 01A8C804 */  sllv  $t9, $t0, $t5
/* 00434D44 07230007 */  bgezl $t9, .L00434D64
/* 00434D48 24010067 */   li    $at, 103
/* 00434D4C 54960005 */  bnel  $a0, $s6, .L00434D64
/* 00434D50 24010067 */   li    $at, 103
/* 00434D54 8F818B00 */  lw     $at, %got(o3opt)($gp)
/* 00434D58 10000942 */  b     .L00437264
/* 00434D5C A0370000 */   sb    $s7, ($at)
.L00434D60:
/* 00434D60 24010067 */  li    $at, 103
.L00434D64:
/* 00434D64 1441000E */  bne   $v0, $at, .L00434DA0
/* 00434D68 246CFFE0 */   addiu $t4, $v1, -0x20
/* 00434D6C 2D8F0020 */  sltiu $t7, $t4, 0x20
/* 00434D70 3C018000 */  lui   $at, 0x8000
/* 00434D74 34216000 */  ori   $at, $at, 0x6000
/* 00434D78 000FC023 */  negu  $t8, $t7
/* 00434D7C 03015824 */  and   $t3, $t8, $at
/* 00434D80 018B4804 */  sllv  $t1, $t3, $t4
/* 00434D84 05230007 */  bgezl $t1, .L00434DA4
/* 00434D88 24010067 */   li    $at, 103
/* 00434D8C 54960005 */  bnel  $a0, $s6, .L00434DA4
/* 00434D90 24010067 */   li    $at, 103
/* 00434D94 8F818A54 */  lw     $at, %got(suppressopt)($gp)
/* 00434D98 10000932 */  b     .L00437264
/* 00434D9C A0370000 */   sb    $s7, ($at)
.L00434DA0:
/* 00434DA0 24010067 */  li    $at, 103
.L00434DA4:
/* 00434DA4 14410004 */  bne   $v0, $at, .L00434DB8
/* 00434DA8 24010030 */   li    $at, 48
/* 00434DAC 54610003 */  bnel  $v1, $at, .L00434DBC
/* 00434DB0 24010067 */   li    $at, 103
/* 00434DB4 1096092B */  beq   $a0, $s6, .L00437264
.L00434DB8:
/* 00434DB8 24010067 */   li    $at, 103
.L00434DBC:
/* 00434DBC 14410008 */  bne   $v0, $at, .L00434DE0
/* 00434DC0 24010033 */   li    $at, 51
/* 00434DC4 54610007 */  bnel  $v1, $at, .L00434DE4
/* 00434DC8 24010077 */   li    $at, 119
/* 00434DCC 54960005 */  bnel  $a0, $s6, .L00434DE4
/* 00434DD0 24010077 */   li    $at, 119
/* 00434DD4 8F818B04 */  lw     $at, %got(update_sym_file)($gp)
/* 00434DD8 10000922 */  b     .L00437264
/* 00434DDC A0370000 */   sb    $s7, ($at)
.L00434DE0:
/* 00434DE0 24010077 */  li    $at, 119
.L00434DE4:
/* 00434DE4 5441001B */  bnel  $v0, $at, .L00434E54
/* 00434DE8 2401006C */   li    $at, 108
/* 00434DEC 14760004 */  bne   $v1, $s6, .L00434E00
/* 00434DF0 00000000 */   nop   
/* 00434DF4 8F818B58 */  lw     $at, %got(warn_flag)($gp)
/* 00434DF8 1000091A */  b     .L00437264
/* 00434DFC A0370000 */   sb    $s7, ($at)
.L00434E00:
/* 00434E00 14960918 */  bne   $a0, $s6, .L00437264
/* 00434E04 306200FF */   andi  $v0, $v1, 0xff
/* 00434E08 244AFFCF */  addiu $t2, $v0, -0x31
/* 00434E0C 2D410002 */  sltiu $at, $t2, 2
/* 00434E10 10200914 */  beqz  $at, .L00437264
/* 00434E14 00000000 */   nop   
/* 00434E18 8F818044 */  lw    $at, %got(jtbl_1000C1EC)($gp)
/* 00434E1C 000A5080 */  sll   $t2, $t2, 2
/* 00434E20 002A0821 */  addu  $at, $at, $t2
/* 00434E24 8C2AC1EC */  lw    $t2, %lo(jtbl_1000C1EC)($at)
/* 00434E28 015C5021 */  addu  $t2, $t2, $gp
/* 00434E2C 01400008 */  jr    $t2
/* 00434E30 00000000 */   nop   
.L00434E34:
/* 00434E34 8F818B58 */  lw     $at, %got(warn_flag)($gp)
/* 00434E38 1000090A */  b     .L00437264
/* 00434E3C A0370000 */   sb    $s7, ($at)
.L00434E40:
/* 00434E40 8F818B58 */  lw     $at, %got(warn_flag)($gp)
/* 00434E44 240E0002 */  li    $t6, 2
/* 00434E48 10000906 */  b     .L00437264
/* 00434E4C A02E0000 */   sb    $t6, ($at)
/* 00434E50 2401006C */  li    $at, 108
.L00434E54:
/* 00434E54 5441000E */  bnel  $v0, $at, .L00434E90
/* 00434E58 24010074 */   li    $at, 116
/* 00434E5C 1476000B */  bne   $v1, $s6, .L00434E8C
/* 00434E60 24060400 */   li    $a2, 1024
/* 00434E64 8F998890 */  lw    $t9, %call16(get_arg)($gp)
/* 00434E68 8F818A64 */  lw     $at, %got(listwritten)($gp)
/* 00434E6C 26B50001 */  addiu $s5, $s5, 1
/* 00434E70 24080001 */  li    $t0, 1
/* 00434E74 02A02025 */  move  $a0, $s5
/* 00434E78 8F858DD8 */  lw     $a1, %got(listname)($gp)
/* 00434E7C 0320F809 */  jalr  $t9
/* 00434E80 A0280000 */   sb    $t0, ($at)
/* 00434E84 100008F7 */  b     .L00437264
/* 00434E88 8FBC004C */   lw    $gp, 0x4c($sp)
.L00434E8C:
/* 00434E8C 24010074 */  li    $at, 116
.L00434E90:
/* 00434E90 5441000E */  bnel  $v0, $at, .L00434ECC
/* 00434E94 24010066 */   li    $at, 102
/* 00434E98 1476000B */  bne   $v1, $s6, .L00434EC8
/* 00434E9C 24060400 */   li    $a2, 1024
/* 00434EA0 8F998890 */  lw    $t9, %call16(get_arg)($gp)
/* 00434EA4 8F818A68 */  lw     $at, %got(symwritten)($gp)
/* 00434EA8 26B50001 */  addiu $s5, $s5, 1
/* 00434EAC 240D0001 */  li    $t5, 1
/* 00434EB0 02A02025 */  move  $a0, $s5
/* 00434EB4 8F858DE0 */  lw     $a1, %got(symname)($gp)
/* 00434EB8 0320F809 */  jalr  $t9
/* 00434EBC A02D0000 */   sb    $t5, ($at)
/* 00434EC0 100008E8 */  b     .L00437264
/* 00434EC4 8FBC004C */   lw    $gp, 0x4c($sp)
.L00434EC8:
/* 00434EC8 24010066 */  li    $at, 102
.L00434ECC:
/* 00434ECC 5441000F */  bnel  $v0, $at, .L00434F0C
/* 00434ED0 24010069 */   li    $at, 105
/* 00434ED4 5476000D */  bnel  $v1, $s6, .L00434F0C
/* 00434ED8 24010069 */   li    $at, 105
/* 00434EDC 8F818A6C */  lw     $at, %got(usefeedback)($gp)
/* 00434EE0 24190001 */  li    $t9, 1
/* 00434EE4 26B50001 */  addiu $s5, $s5, 1
/* 00434EE8 A0390000 */  sb    $t9, ($at)
/* 00434EEC 8F998890 */  lw    $t9, %call16(get_arg)($gp)
/* 00434EF0 02A02025 */  move  $a0, $s5
/* 00434EF4 27A50484 */  addiu $a1, $sp, 0x484
/* 00434EF8 0320F809 */  jalr  $t9
/* 00434EFC 24060400 */   li    $a2, 1024
/* 00434F00 100008D8 */  b     .L00437264
/* 00434F04 8FBC004C */   lw    $gp, 0x4c($sp)
/* 00434F08 24010069 */  li    $at, 105
.L00434F0C:
/* 00434F0C 54410011 */  bnel  $v0, $at, .L00434F54
/* 00434F10 24010070 */   li    $at, 112
/* 00434F14 1476000E */  bne   $v1, $s6, .L00434F50
/* 00434F18 27A50884 */   addiu $a1, $sp, 0x884
/* 00434F1C 8F998890 */  lw    $t9, %call16(get_arg)($gp)
/* 00434F20 26B50001 */  addiu $s5, $s5, 1
/* 00434F24 02A02025 */  move  $a0, $s5
/* 00434F28 0320F809 */  jalr  $t9
/* 00434F2C 24060400 */   li    $a2, 1024
/* 00434F30 8FBC004C */  lw    $gp, 0x4c($sp)
/* 00434F34 02801025 */  move  $v0, $s4
/* 00434F38 8F998020 */  lw    $t9, %got(func_00434434)($gp)
/* 00434F3C 27394434 */  addiu $t9, %lo(func_00434434) # addiu $t9, $t9, 0x4434
/* 00434F40 0320F809 */  jalr  $t9
/* 00434F44 00000000 */   nop   
/* 00434F48 100008C6 */  b     .L00437264
/* 00434F4C 8FBC004C */   lw    $gp, 0x4c($sp)
.L00434F50:
/* 00434F50 24010070 */  li    $at, 112
.L00434F54:
/* 00434F54 5441000B */  bnel  $v0, $at, .L00434F84
/* 00434F58 24010045 */   li    $at, 69
/* 00434F5C 14760008 */  bne   $v1, $s6, .L00434F80
/* 00434F60 24060400 */   li    $a2, 1024
/* 00434F64 8F998890 */  lw    $t9, %call16(get_arg)($gp)
/* 00434F68 26B50001 */  addiu $s5, $s5, 1
/* 00434F6C 02A02025 */  move  $a0, $s5
/* 00434F70 0320F809 */  jalr  $t9
/* 00434F74 8F858DE8 */   lw     $a1, %got(proc_to_print)($gp)
/* 00434F78 100008BA */  b     .L00437264
/* 00434F7C 8FBC004C */   lw    $gp, 0x4c($sp)
.L00434F80:
/* 00434F80 24010045 */  li    $at, 69
.L00434F84:
/* 00434F84 14410008 */  bne   $v0, $at, .L00434FA8
/* 00434F88 2401004C */   li    $at, 76
/* 00434F8C 54610007 */  bnel  $v1, $at, .L00434FAC
/* 00434F90 24010045 */   li    $at, 69
/* 00434F94 54960005 */  bnel  $a0, $s6, .L00434FAC
/* 00434F98 24010045 */   li    $at, 69
/* 00434F9C 8F818AF4 */  lw     $at, %got(bigendian)($gp)
/* 00434FA0 100008B0 */  b     .L00437264
/* 00434FA4 A0200000 */   sb    $zero, ($at)
.L00434FA8:
/* 00434FA8 24010045 */  li    $at, 69
.L00434FAC:
/* 00434FAC 14410008 */  bne   $v0, $at, .L00434FD0
/* 00434FB0 24010042 */   li    $at, 66
/* 00434FB4 54610007 */  bnel  $v1, $at, .L00434FD4
/* 00434FB8 24010076 */   li    $at, 118
/* 00434FBC 54960005 */  bnel  $a0, $s6, .L00434FD4
/* 00434FC0 24010076 */   li    $at, 118
/* 00434FC4 8F818AF4 */  lw     $at, %got(bigendian)($gp)
/* 00434FC8 100008A6 */  b     .L00437264
/* 00434FCC A0370000 */   sb    $s7, ($at)
.L00434FD0:
/* 00434FD0 24010076 */  li    $at, 118
.L00434FD4:
/* 00434FD4 54410007 */  bnel  $v0, $at, .L00434FF4
/* 00434FD8 24010062 */   li    $at, 98
/* 00434FDC 54760005 */  bnel  $v1, $s6, .L00434FF4
/* 00434FE0 24010062 */   li    $at, 98
/* 00434FE4 8F818AF0 */  lw     $at, %got(verbose)($gp)
/* 00434FE8 1000089E */  b     .L00437264
/* 00434FEC A0370000 */   sb    $s7, ($at)
/* 00434FF0 24010062 */  li    $at, 98
.L00434FF4:
/* 00434FF4 14410008 */  bne   $v0, $at, .L00435018
/* 00434FF8 24010062 */   li    $at, 98
/* 00434FFC 14610006 */  bne   $v1, $at, .L00435018
/* 00435000 00000000 */   nop   
/* 00435004 14960004 */  bne   $a0, $s6, .L00435018
/* 00435008 00000000 */   nop   
/* 0043500C 8F818A98 */  lw     $at, %got(genbbnum)($gp)
/* 00435010 10000894 */  b     .L00437264
/* 00435014 A0370000 */   sb    $s7, ($at)
.L00435018:
/* 00435018 8F8F8044 */  lw    $t7, %got(RO_1000BDCC)($gp)
/* 0043501C 8F998020 */  lw    $t9, %got(func_004346B0)($gp)
/* 00435020 02602025 */  move  $a0, $s3
/* 00435024 25EFBDCC */  addiu $t7, %lo(RO_1000BDCC) # addiu $t7, $t7, -0x4234
/* 00435028 89EB0000 */  lwl   $t3, ($t7)
/* 0043502C 99EB0003 */  lwr   $t3, 3($t7)
/* 00435030 273946B0 */  addiu $t9, %lo(func_004346B0) # addiu $t9, $t9, 0x46b0
/* 00435034 02801025 */  move  $v0, $s4
/* 00435038 ABAB0004 */  swl   $t3, 4($sp)
/* 0043503C BBAB0007 */  swr   $t3, 7($sp)
/* 00435040 89F80004 */  lwl   $t8, 4($t7)
/* 00435044 99F80007 */  lwr   $t8, 7($t7)
/* 00435048 8FA50004 */  lw    $a1, 4($sp)
/* 0043504C ABB80008 */  swl   $t8, 8($sp)
/* 00435050 BBB8000B */  swr   $t8, 0xb($sp)
/* 00435054 89EB0008 */  lwl   $t3, 8($t7)
/* 00435058 99EB000B */  lwr   $t3, 0xb($t7)
/* 0043505C 8FA60008 */  lw    $a2, 8($sp)
/* 00435060 ABAB000C */  swl   $t3, 0xc($sp)
/* 00435064 BBAB000F */  swr   $t3, 0xf($sp)
/* 00435068 89F8000C */  lwl   $t8, 0xc($t7)
/* 0043506C 99F8000F */  lwr   $t8, 0xf($t7)
/* 00435070 8FA7000C */  lw    $a3, 0xc($sp)
/* 00435074 ABB80010 */  swl   $t8, 0x10($sp)
/* 00435078 BBB80013 */  swr   $t8, 0x13($sp)
/* 0043507C 89EB0010 */  lwl   $t3, 0x10($t7)
/* 00435080 99EB0013 */  lwr   $t3, 0x13($t7)
/* 00435084 ABAB0014 */  swl   $t3, 0x14($sp)
/* 00435088 BBAB0017 */  swr   $t3, 0x17($sp)
/* 0043508C 89F80014 */  lwl   $t8, 0x14($t7)
/* 00435090 99F80017 */  lwr   $t8, 0x17($t7)
/* 00435094 ABB80018 */  swl   $t8, 0x18($sp)
/* 00435098 BBB8001B */  swr   $t8, 0x1b($sp)
/* 0043509C 89EB0018 */  lwl   $t3, 0x18($t7)
/* 004350A0 99EB001B */  lwr   $t3, 0x1b($t7)
/* 004350A4 ABAB001C */  swl   $t3, 0x1c($sp)
/* 004350A8 BBAB001F */  swr   $t3, 0x1f($sp)
/* 004350AC 89F8001C */  lwl   $t8, 0x1c($t7)
/* 004350B0 99F8001F */  lwr   $t8, 0x1f($t7)
/* 004350B4 ABB80020 */  swl   $t8, 0x20($sp)
/* 004350B8 0320F809 */  jalr  $t9
/* 004350BC BBB80023 */   swr   $t8, 0x23($sp)
/* 004350C0 10400004 */  beqz  $v0, .L004350D4
/* 004350C4 8FBC004C */   lw    $gp, 0x4c($sp)
/* 004350C8 8F818A9C */  lw     $at, %got(doingcopy)($gp)
/* 004350CC 10000865 */  b     .L00437264
/* 004350D0 A0370000 */   sb    $s7, ($at)
.L004350D4:
/* 004350D4 8F8C8044 */  lw    $t4, %got(RO_1000BDAC)($gp)
/* 004350D8 8F998020 */  lw    $t9, %got(func_004346B0)($gp)
/* 004350DC 02602025 */  move  $a0, $s3
/* 004350E0 258CBDAC */  addiu $t4, %lo(RO_1000BDAC) # addiu $t4, $t4, -0x4254
/* 004350E4 898A0000 */  lwl   $t2, ($t4)
/* 004350E8 998A0003 */  lwr   $t2, 3($t4)
/* 004350EC 273946B0 */  addiu $t9, %lo(func_004346B0) # addiu $t9, $t9, 0x46b0
/* 004350F0 02801025 */  move  $v0, $s4
/* 004350F4 ABAA0004 */  swl   $t2, 4($sp)
/* 004350F8 BBAA0007 */  swr   $t2, 7($sp)
/* 004350FC 89890004 */  lwl   $t1, 4($t4)
/* 00435100 99890007 */  lwr   $t1, 7($t4)
/* 00435104 8FA50004 */  lw    $a1, 4($sp)
/* 00435108 ABA90008 */  swl   $t1, 8($sp)
/* 0043510C BBA9000B */  swr   $t1, 0xb($sp)
/* 00435110 898A0008 */  lwl   $t2, 8($t4)
/* 00435114 998A000B */  lwr   $t2, 0xb($t4)
/* 00435118 8FA60008 */  lw    $a2, 8($sp)
/* 0043511C ABAA000C */  swl   $t2, 0xc($sp)
/* 00435120 BBAA000F */  swr   $t2, 0xf($sp)
/* 00435124 8989000C */  lwl   $t1, 0xc($t4)
/* 00435128 9989000F */  lwr   $t1, 0xf($t4)
/* 0043512C 8FA7000C */  lw    $a3, 0xc($sp)
/* 00435130 ABA90010 */  swl   $t1, 0x10($sp)
/* 00435134 BBA90013 */  swr   $t1, 0x13($sp)
/* 00435138 898A0010 */  lwl   $t2, 0x10($t4)
/* 0043513C 998A0013 */  lwr   $t2, 0x13($t4)
/* 00435140 ABAA0014 */  swl   $t2, 0x14($sp)
/* 00435144 BBAA0017 */  swr   $t2, 0x17($sp)
/* 00435148 89890014 */  lwl   $t1, 0x14($t4)
/* 0043514C 99890017 */  lwr   $t1, 0x17($t4)
/* 00435150 ABA90018 */  swl   $t1, 0x18($sp)
/* 00435154 BBA9001B */  swr   $t1, 0x1b($sp)
/* 00435158 898A0018 */  lwl   $t2, 0x18($t4)
/* 0043515C 998A001B */  lwr   $t2, 0x1b($t4)
/* 00435160 ABAA001C */  swl   $t2, 0x1c($sp)
/* 00435164 BBAA001F */  swr   $t2, 0x1f($sp)
/* 00435168 8989001C */  lwl   $t1, 0x1c($t4)
/* 0043516C 9989001F */  lwr   $t1, 0x1f($t4)
/* 00435170 ABA90020 */  swl   $t1, 0x20($sp)
/* 00435174 0320F809 */  jalr  $t9
/* 00435178 BBA90023 */   swr   $t1, 0x23($sp)
/* 0043517C 10400004 */  beqz  $v0, .L00435190
/* 00435180 8FBC004C */   lw    $gp, 0x4c($sp)
/* 00435184 8F818AA0 */  lw     $at, %got(doassoc)($gp)
/* 00435188 10000836 */  b     .L00437264
/* 0043518C A0370000 */   sb    $s7, ($at)
.L00435190:
/* 00435190 8F8E8044 */  lw    $t6, %got(RO_1000BD8C)($gp)
/* 00435194 8F998020 */  lw    $t9, %got(func_004346B0)($gp)
/* 00435198 02602025 */  move  $a0, $s3
/* 0043519C 25CEBD8C */  addiu $t6, %lo(RO_1000BD8C) # addiu $t6, $t6, -0x4274
/* 004351A0 89CD0000 */  lwl   $t5, ($t6)
/* 004351A4 99CD0003 */  lwr   $t5, 3($t6)
/* 004351A8 273946B0 */  addiu $t9, %lo(func_004346B0) # addiu $t9, $t9, 0x46b0
/* 004351AC 02801025 */  move  $v0, $s4
/* 004351B0 ABAD0004 */  swl   $t5, 4($sp)
/* 004351B4 BBAD0007 */  swr   $t5, 7($sp)
/* 004351B8 89C80004 */  lwl   $t0, 4($t6)
/* 004351BC 99C80007 */  lwr   $t0, 7($t6)
/* 004351C0 8FA50004 */  lw    $a1, 4($sp)
/* 004351C4 ABA80008 */  swl   $t0, 8($sp)
/* 004351C8 BBA8000B */  swr   $t0, 0xb($sp)
/* 004351CC 89CD0008 */  lwl   $t5, 8($t6)
/* 004351D0 99CD000B */  lwr   $t5, 0xb($t6)
/* 004351D4 8FA60008 */  lw    $a2, 8($sp)
/* 004351D8 ABAD000C */  swl   $t5, 0xc($sp)
/* 004351DC BBAD000F */  swr   $t5, 0xf($sp)
/* 004351E0 89C8000C */  lwl   $t0, 0xc($t6)
/* 004351E4 99C8000F */  lwr   $t0, 0xf($t6)
/* 004351E8 8FA7000C */  lw    $a3, 0xc($sp)
/* 004351EC ABA80010 */  swl   $t0, 0x10($sp)
/* 004351F0 BBA80013 */  swr   $t0, 0x13($sp)
/* 004351F4 89CD0010 */  lwl   $t5, 0x10($t6)
/* 004351F8 99CD0013 */  lwr   $t5, 0x13($t6)
/* 004351FC ABAD0014 */  swl   $t5, 0x14($sp)
/* 00435200 BBAD0017 */  swr   $t5, 0x17($sp)
/* 00435204 89C80014 */  lwl   $t0, 0x14($t6)
/* 00435208 99C80017 */  lwr   $t0, 0x17($t6)
/* 0043520C ABA80018 */  swl   $t0, 0x18($sp)
/* 00435210 BBA8001B */  swr   $t0, 0x1b($sp)
/* 00435214 89CD0018 */  lwl   $t5, 0x18($t6)
/* 00435218 99CD001B */  lwr   $t5, 0x1b($t6)
/* 0043521C ABAD001C */  swl   $t5, 0x1c($sp)
/* 00435220 BBAD001F */  swr   $t5, 0x1f($sp)
/* 00435224 89C8001C */  lwl   $t0, 0x1c($t6)
/* 00435228 99C8001F */  lwr   $t0, 0x1f($t6)
/* 0043522C ABA80020 */  swl   $t0, 0x20($sp)
/* 00435230 0320F809 */  jalr  $t9
/* 00435234 BBA80023 */   swr   $t0, 0x23($sp)
/* 00435238 10400004 */  beqz  $v0, .L0043524C
/* 0043523C 8FBC004C */   lw    $gp, 0x4c($sp)
/* 00435240 8F818ADC */  lw     $at, %got(dowhyuncolor)($gp)
/* 00435244 10000807 */  b     .L00437264
/* 00435248 A0370000 */   sb    $s7, ($at)
.L0043524C:
/* 0043524C 8F998044 */  lw    $t9, %got(RO_1000BD6C)($gp)
/* 00435250 02602025 */  move  $a0, $s3
/* 00435254 02801025 */  move  $v0, $s4
/* 00435258 2739BD6C */  addiu $t9, %lo(RO_1000BD6C) # addiu $t9, $t9, -0x4294
/* 0043525C 8B380000 */  lwl   $t8, ($t9)
/* 00435260 9B380003 */  lwr   $t8, 3($t9)
/* 00435264 ABB80004 */  swl   $t8, 4($sp)
/* 00435268 BBB80007 */  swr   $t8, 7($sp)
/* 0043526C 8B2F0004 */  lwl   $t7, 4($t9)
/* 00435270 9B2F0007 */  lwr   $t7, 7($t9)
/* 00435274 8FA50004 */  lw    $a1, 4($sp)
/* 00435278 ABAF0008 */  swl   $t7, 8($sp)
/* 0043527C BBAF000B */  swr   $t7, 0xb($sp)
/* 00435280 8B380008 */  lwl   $t8, 8($t9)
/* 00435284 9B38000B */  lwr   $t8, 0xb($t9)
/* 00435288 8FA60008 */  lw    $a2, 8($sp)
/* 0043528C ABB8000C */  swl   $t8, 0xc($sp)
/* 00435290 BBB8000F */  swr   $t8, 0xf($sp)
/* 00435294 8B2F000C */  lwl   $t7, 0xc($t9)
/* 00435298 9B2F000F */  lwr   $t7, 0xf($t9)
/* 0043529C 8FA7000C */  lw    $a3, 0xc($sp)
/* 004352A0 ABAF0010 */  swl   $t7, 0x10($sp)
/* 004352A4 BBAF0013 */  swr   $t7, 0x13($sp)
/* 004352A8 8B380010 */  lwl   $t8, 0x10($t9)
/* 004352AC 9B380013 */  lwr   $t8, 0x13($t9)
/* 004352B0 ABB80014 */  swl   $t8, 0x14($sp)
/* 004352B4 BBB80017 */  swr   $t8, 0x17($sp)
/* 004352B8 8B2F0014 */  lwl   $t7, 0x14($t9)
/* 004352BC 9B2F0017 */  lwr   $t7, 0x17($t9)
/* 004352C0 ABAF0018 */  swl   $t7, 0x18($sp)
/* 004352C4 BBAF001B */  swr   $t7, 0x1b($sp)
/* 004352C8 8B380018 */  lwl   $t8, 0x18($t9)
/* 004352CC 9B38001B */  lwr   $t8, 0x1b($t9)
/* 004352D0 ABB8001C */  swl   $t8, 0x1c($sp)
/* 004352D4 BBB8001F */  swr   $t8, 0x1f($sp)
/* 004352D8 8B2F001C */  lwl   $t7, 0x1c($t9)
/* 004352DC 9B2F001F */  lwr   $t7, 0x1f($t9)
/* 004352E0 8F998020 */  lw    $t9, %got(func_004346B0)($gp)
/* 004352E4 ABAF0020 */  swl   $t7, 0x20($sp)
/* 004352E8 273946B0 */  addiu $t9, %lo(func_004346B0) # addiu $t9, $t9, 0x46b0
/* 004352EC 0320F809 */  jalr  $t9
/* 004352F0 BBAF0023 */   swr   $t7, 0x23($sp)
/* 004352F4 10400004 */  beqz  $v0, .L00435308
/* 004352F8 8FBC004C */   lw    $gp, 0x4c($sp)
/* 004352FC 8F818AA4 */  lw     $at, %got(doprecolor)($gp)
/* 00435300 100007D8 */  b     .L00437264
/* 00435304 A0200000 */   sb    $zero, ($at)
.L00435308:
/* 00435308 8F8B8044 */  lw    $t3, %got(RO_1000BD4C)($gp)
/* 0043530C 8F998020 */  lw    $t9, %got(func_004346B0)($gp)
/* 00435310 02602025 */  move  $a0, $s3
/* 00435314 256BBD4C */  addiu $t3, %lo(RO_1000BD4C) # addiu $t3, $t3, -0x42b4
/* 00435318 89690000 */  lwl   $t1, ($t3)
/* 0043531C 99690003 */  lwr   $t1, 3($t3)
/* 00435320 273946B0 */  addiu $t9, %lo(func_004346B0) # addiu $t9, $t9, 0x46b0
/* 00435324 02801025 */  move  $v0, $s4
/* 00435328 ABA90004 */  swl   $t1, 4($sp)
/* 0043532C BBA90007 */  swr   $t1, 7($sp)
/* 00435330 896C0004 */  lwl   $t4, 4($t3)
/* 00435334 996C0007 */  lwr   $t4, 7($t3)
/* 00435338 8FA50004 */  lw    $a1, 4($sp)
/* 0043533C ABAC0008 */  swl   $t4, 8($sp)
/* 00435340 BBAC000B */  swr   $t4, 0xb($sp)
/* 00435344 89690008 */  lwl   $t1, 8($t3)
/* 00435348 9969000B */  lwr   $t1, 0xb($t3)
/* 0043534C 8FA60008 */  lw    $a2, 8($sp)
/* 00435350 ABA9000C */  swl   $t1, 0xc($sp)
/* 00435354 BBA9000F */  swr   $t1, 0xf($sp)
/* 00435358 896C000C */  lwl   $t4, 0xc($t3)
/* 0043535C 996C000F */  lwr   $t4, 0xf($t3)
/* 00435360 8FA7000C */  lw    $a3, 0xc($sp)
/* 00435364 ABAC0010 */  swl   $t4, 0x10($sp)
/* 00435368 BBAC0013 */  swr   $t4, 0x13($sp)
/* 0043536C 89690010 */  lwl   $t1, 0x10($t3)
/* 00435370 99690013 */  lwr   $t1, 0x13($t3)
/* 00435374 ABA90014 */  swl   $t1, 0x14($sp)
/* 00435378 BBA90017 */  swr   $t1, 0x17($sp)
/* 0043537C 896C0014 */  lwl   $t4, 0x14($t3)
/* 00435380 996C0017 */  lwr   $t4, 0x17($t3)
/* 00435384 ABAC0018 */  swl   $t4, 0x18($sp)
/* 00435388 BBAC001B */  swr   $t4, 0x1b($sp)
/* 0043538C 89690018 */  lwl   $t1, 0x18($t3)
/* 00435390 9969001B */  lwr   $t1, 0x1b($t3)
/* 00435394 ABA9001C */  swl   $t1, 0x1c($sp)
/* 00435398 BBA9001F */  swr   $t1, 0x1f($sp)
/* 0043539C 896C001C */  lwl   $t4, 0x1c($t3)
/* 004353A0 996C001F */  lwr   $t4, 0x1f($t3)
/* 004353A4 ABAC0020 */  swl   $t4, 0x20($sp)
/* 004353A8 0320F809 */  jalr  $t9
/* 004353AC BBAC0023 */   swr   $t4, 0x23($sp)
/* 004353B0 10400004 */  beqz  $v0, .L004353C4
/* 004353B4 8FBC004C */   lw    $gp, 0x4c($sp)
/* 004353B8 8F818AA8 */  lw     $at, %got(dorlodrstropt)($gp)
/* 004353BC 100007A9 */  b     .L00437264
/* 004353C0 A0200000 */   sb    $zero, ($at)
.L004353C4:
/* 004353C4 8F8A8044 */  lw    $t2, %got(RO_1000BD2C)($gp)
/* 004353C8 8F998020 */  lw    $t9, %got(func_004346B0)($gp)
/* 004353CC 02602025 */  move  $a0, $s3
/* 004353D0 254ABD2C */  addiu $t2, %lo(RO_1000BD2C) # addiu $t2, $t2, -0x42d4
/* 004353D4 89480000 */  lwl   $t0, ($t2)
/* 004353D8 99480003 */  lwr   $t0, 3($t2)
/* 004353DC 273946B0 */  addiu $t9, %lo(func_004346B0) # addiu $t9, $t9, 0x46b0
/* 004353E0 02801025 */  move  $v0, $s4
/* 004353E4 ABA80004 */  swl   $t0, 4($sp)
/* 004353E8 BBA80007 */  swr   $t0, 7($sp)
/* 004353EC 894E0004 */  lwl   $t6, 4($t2)
/* 004353F0 994E0007 */  lwr   $t6, 7($t2)
/* 004353F4 8FA50004 */  lw    $a1, 4($sp)
/* 004353F8 ABAE0008 */  swl   $t6, 8($sp)
/* 004353FC BBAE000B */  swr   $t6, 0xb($sp)
/* 00435400 89480008 */  lwl   $t0, 8($t2)
/* 00435404 9948000B */  lwr   $t0, 0xb($t2)
/* 00435408 8FA60008 */  lw    $a2, 8($sp)
/* 0043540C ABA8000C */  swl   $t0, 0xc($sp)
/* 00435410 BBA8000F */  swr   $t0, 0xf($sp)
/* 00435414 894E000C */  lwl   $t6, 0xc($t2)
/* 00435418 994E000F */  lwr   $t6, 0xf($t2)
/* 0043541C 8FA7000C */  lw    $a3, 0xc($sp)
/* 00435420 ABAE0010 */  swl   $t6, 0x10($sp)
/* 00435424 BBAE0013 */  swr   $t6, 0x13($sp)
/* 00435428 89480010 */  lwl   $t0, 0x10($t2)
/* 0043542C 99480013 */  lwr   $t0, 0x13($t2)
/* 00435430 ABA80014 */  swl   $t0, 0x14($sp)
/* 00435434 BBA80017 */  swr   $t0, 0x17($sp)
/* 00435438 894E0014 */  lwl   $t6, 0x14($t2)
/* 0043543C 994E0017 */  lwr   $t6, 0x17($t2)
/* 00435440 ABAE0018 */  swl   $t6, 0x18($sp)
/* 00435444 BBAE001B */  swr   $t6, 0x1b($sp)
/* 00435448 89480018 */  lwl   $t0, 0x18($t2)
/* 0043544C 9948001B */  lwr   $t0, 0x1b($t2)
/* 00435450 ABA8001C */  swl   $t0, 0x1c($sp)
/* 00435454 BBA8001F */  swr   $t0, 0x1f($sp)
/* 00435458 894E001C */  lwl   $t6, 0x1c($t2)
/* 0043545C 994E001F */  lwr   $t6, 0x1f($t2)
/* 00435460 ABAE0020 */  swl   $t6, 0x20($sp)
/* 00435464 0320F809 */  jalr  $t9
/* 00435468 BBAE0023 */   swr   $t6, 0x23($sp)
/* 0043546C 10400004 */  beqz  $v0, .L00435480
/* 00435470 8FBC004C */   lw    $gp, 0x4c($sp)
/* 00435474 8F818AAC */  lw     $at, %got(doheurab)($gp)
/* 00435478 1000077A */  b     .L00437264
/* 0043547C A0200000 */   sb    $zero, ($at)
.L00435480:
/* 00435480 8F8D8044 */  lw    $t5, %got(RO_1000BD0C)($gp)
/* 00435484 02602025 */  move  $a0, $s3
/* 00435488 02801025 */  move  $v0, $s4
/* 0043548C 25ADBD0C */  addiu $t5, %lo(RO_1000BD0C) # addiu $t5, $t5, -0x42f4
/* 00435490 89AF0000 */  lwl   $t7, ($t5)
/* 00435494 99AF0003 */  lwr   $t7, 3($t5)
/* 00435498 ABAF0004 */  swl   $t7, 4($sp)
/* 0043549C BBAF0007 */  swr   $t7, 7($sp)
/* 004354A0 89B90004 */  lwl   $t9, 4($t5)
/* 004354A4 99B90007 */  lwr   $t9, 7($t5)
/* 004354A8 8FA50004 */  lw    $a1, 4($sp)
/* 004354AC ABB90008 */  swl   $t9, 8($sp)
/* 004354B0 BBB9000B */  swr   $t9, 0xb($sp)
/* 004354B4 89AF0008 */  lwl   $t7, 8($t5)
/* 004354B8 99AF000B */  lwr   $t7, 0xb($t5)
/* 004354BC 8FA60008 */  lw    $a2, 8($sp)
/* 004354C0 ABAF000C */  swl   $t7, 0xc($sp)
/* 004354C4 BBAF000F */  swr   $t7, 0xf($sp)
/* 004354C8 89B9000C */  lwl   $t9, 0xc($t5)
/* 004354CC 99B9000F */  lwr   $t9, 0xf($t5)
/* 004354D0 8FA7000C */  lw    $a3, 0xc($sp)
/* 004354D4 ABB90010 */  swl   $t9, 0x10($sp)
/* 004354D8 BBB90013 */  swr   $t9, 0x13($sp)
/* 004354DC 89AF0010 */  lwl   $t7, 0x10($t5)
/* 004354E0 99AF0013 */  lwr   $t7, 0x13($t5)
/* 004354E4 ABAF0014 */  swl   $t7, 0x14($sp)
/* 004354E8 BBAF0017 */  swr   $t7, 0x17($sp)
/* 004354EC 89B90014 */  lwl   $t9, 0x14($t5)
/* 004354F0 99B90017 */  lwr   $t9, 0x17($t5)
/* 004354F4 ABB90018 */  swl   $t9, 0x18($sp)
/* 004354F8 BBB9001B */  swr   $t9, 0x1b($sp)
/* 004354FC 89AF0018 */  lwl   $t7, 0x18($t5)
/* 00435500 99AF001B */  lwr   $t7, 0x1b($t5)
/* 00435504 ABAF001C */  swl   $t7, 0x1c($sp)
/* 00435508 BBAF001F */  swr   $t7, 0x1f($sp)
/* 0043550C 89B9001C */  lwl   $t9, 0x1c($t5)
/* 00435510 99B9001F */  lwr   $t9, 0x1f($t5)
/* 00435514 ABB90020 */  swl   $t9, 0x20($sp)
/* 00435518 BBB90023 */  swr   $t9, 0x23($sp)
/* 0043551C 8F998020 */  lw    $t9, %got(func_004346B0)($gp)
/* 00435520 273946B0 */  addiu $t9, %lo(func_004346B0) # addiu $t9, $t9, 0x46b0
/* 00435524 0320F809 */  jalr  $t9
/* 00435528 00000000 */   nop   
/* 0043552C 10400004 */  beqz  $v0, .L00435540
/* 00435530 8FBC004C */   lw    $gp, 0x4c($sp)
/* 00435534 8F818AB4 */  lw     $at, %got(do_opt_saved_regs)($gp)
/* 00435538 1000074A */  b     .L00437264
/* 0043553C A0370000 */   sb    $s7, ($at)
.L00435540:
/* 00435540 8F988044 */  lw    $t8, %got(RO_1000BCEC)($gp)
/* 00435544 8F998020 */  lw    $t9, %got(func_004346B0)($gp)
/* 00435548 02602025 */  move  $a0, $s3
/* 0043554C 2718BCEC */  addiu $t8, %lo(RO_1000BCEC) # addiu $t8, $t8, -0x4314
/* 00435550 8B0C0000 */  lwl   $t4, ($t8)
/* 00435554 9B0C0003 */  lwr   $t4, 3($t8)
/* 00435558 273946B0 */  addiu $t9, %lo(func_004346B0) # addiu $t9, $t9, 0x46b0
/* 0043555C 02801025 */  move  $v0, $s4
/* 00435560 ABAC0004 */  swl   $t4, 4($sp)
/* 00435564 BBAC0007 */  swr   $t4, 7($sp)
/* 00435568 8B0B0004 */  lwl   $t3, 4($t8)
/* 0043556C 9B0B0007 */  lwr   $t3, 7($t8)
/* 00435570 8FA50004 */  lw    $a1, 4($sp)
/* 00435574 ABAB0008 */  swl   $t3, 8($sp)
/* 00435578 BBAB000B */  swr   $t3, 0xb($sp)
/* 0043557C 8B0C0008 */  lwl   $t4, 8($t8)
/* 00435580 9B0C000B */  lwr   $t4, 0xb($t8)
/* 00435584 8FA60008 */  lw    $a2, 8($sp)
/* 00435588 ABAC000C */  swl   $t4, 0xc($sp)
/* 0043558C BBAC000F */  swr   $t4, 0xf($sp)
/* 00435590 8B0B000C */  lwl   $t3, 0xc($t8)
/* 00435594 9B0B000F */  lwr   $t3, 0xf($t8)
/* 00435598 8FA7000C */  lw    $a3, 0xc($sp)
/* 0043559C ABAB0010 */  swl   $t3, 0x10($sp)
/* 004355A0 BBAB0013 */  swr   $t3, 0x13($sp)
/* 004355A4 8B0C0010 */  lwl   $t4, 0x10($t8)
/* 004355A8 9B0C0013 */  lwr   $t4, 0x13($t8)
/* 004355AC ABAC0014 */  swl   $t4, 0x14($sp)
/* 004355B0 BBAC0017 */  swr   $t4, 0x17($sp)
/* 004355B4 8B0B0014 */  lwl   $t3, 0x14($t8)
/* 004355B8 9B0B0017 */  lwr   $t3, 0x17($t8)
/* 004355BC ABAB0018 */  swl   $t3, 0x18($sp)
/* 004355C0 BBAB001B */  swr   $t3, 0x1b($sp)
/* 004355C4 8B0C0018 */  lwl   $t4, 0x18($t8)
/* 004355C8 9B0C001B */  lwr   $t4, 0x1b($t8)
/* 004355CC ABAC001C */  swl   $t4, 0x1c($sp)
/* 004355D0 BBAC001F */  swr   $t4, 0x1f($sp)
/* 004355D4 8B0B001C */  lwl   $t3, 0x1c($t8)
/* 004355D8 9B0B001F */  lwr   $t3, 0x1f($t8)
/* 004355DC ABAB0020 */  swl   $t3, 0x20($sp)
/* 004355E0 0320F809 */  jalr  $t9
/* 004355E4 BBAB0023 */   swr   $t3, 0x23($sp)
/* 004355E8 10400004 */  beqz  $v0, .L004355FC
/* 004355EC 8FBC004C */   lw    $gp, 0x4c($sp)
/* 004355F0 8F818AB8 */  lw     $at, %got(do_const_in_reg)($gp)
/* 004355F4 1000071B */  b     .L00437264
/* 004355F8 A0200000 */   sb    $zero, ($at)
.L004355FC:
/* 004355FC 8F898044 */  lw    $t1, %got(RO_1000BCCC)($gp)
/* 00435600 8F998020 */  lw    $t9, %got(func_004346B0)($gp)
/* 00435604 02602025 */  move  $a0, $s3
/* 00435608 2529BCCC */  addiu $t1, %lo(RO_1000BCCC) # addiu $t1, $t1, -0x4334
/* 0043560C 892E0000 */  lwl   $t6, ($t1)
/* 00435610 992E0003 */  lwr   $t6, 3($t1)
/* 00435614 273946B0 */  addiu $t9, %lo(func_004346B0) # addiu $t9, $t9, 0x46b0
/* 00435618 02801025 */  move  $v0, $s4
/* 0043561C ABAE0004 */  swl   $t6, 4($sp)
/* 00435620 BBAE0007 */  swr   $t6, 7($sp)
/* 00435624 892A0004 */  lwl   $t2, 4($t1)
/* 00435628 992A0007 */  lwr   $t2, 7($t1)
/* 0043562C 8FA50004 */  lw    $a1, 4($sp)
/* 00435630 ABAA0008 */  swl   $t2, 8($sp)
/* 00435634 BBAA000B */  swr   $t2, 0xb($sp)
/* 00435638 892E0008 */  lwl   $t6, 8($t1)
/* 0043563C 992E000B */  lwr   $t6, 0xb($t1)
/* 00435640 8FA60008 */  lw    $a2, 8($sp)
/* 00435644 ABAE000C */  swl   $t6, 0xc($sp)
/* 00435648 BBAE000F */  swr   $t6, 0xf($sp)
/* 0043564C 892A000C */  lwl   $t2, 0xc($t1)
/* 00435650 992A000F */  lwr   $t2, 0xf($t1)
/* 00435654 8FA7000C */  lw    $a3, 0xc($sp)
/* 00435658 ABAA0010 */  swl   $t2, 0x10($sp)
/* 0043565C BBAA0013 */  swr   $t2, 0x13($sp)
/* 00435660 892E0010 */  lwl   $t6, 0x10($t1)
/* 00435664 992E0013 */  lwr   $t6, 0x13($t1)
/* 00435668 ABAE0014 */  swl   $t6, 0x14($sp)
/* 0043566C BBAE0017 */  swr   $t6, 0x17($sp)
/* 00435670 892A0014 */  lwl   $t2, 0x14($t1)
/* 00435674 992A0017 */  lwr   $t2, 0x17($t1)
/* 00435678 ABAA0018 */  swl   $t2, 0x18($sp)
/* 0043567C BBAA001B */  swr   $t2, 0x1b($sp)
/* 00435680 892E0018 */  lwl   $t6, 0x18($t1)
/* 00435684 992E001B */  lwr   $t6, 0x1b($t1)
/* 00435688 ABAE001C */  swl   $t6, 0x1c($sp)
/* 0043568C BBAE001F */  swr   $t6, 0x1f($sp)
/* 00435690 892A001C */  lwl   $t2, 0x1c($t1)
/* 00435694 992A001F */  lwr   $t2, 0x1f($t1)
/* 00435698 ABAA0020 */  swl   $t2, 0x20($sp)
/* 0043569C 0320F809 */  jalr  $t9
/* 004356A0 BBAA0023 */   swr   $t2, 0x23($sp)
/* 004356A4 10400004 */  beqz  $v0, .L004356B8
/* 004356A8 8FBC004C */   lw    $gp, 0x4c($sp)
/* 004356AC 8F818ABC */  lw     $at, %got(docodehoist)($gp)
/* 004356B0 100006EC */  b     .L00437264
/* 004356B4 A0370000 */   sb    $s7, ($at)
.L004356B8:
/* 004356B8 8F888044 */  lw    $t0, %got(RO_1000BCAC)($gp)
/* 004356BC 02602025 */  move  $a0, $s3
/* 004356C0 02801025 */  move  $v0, $s4
/* 004356C4 2508BCAC */  addiu $t0, %lo(RO_1000BCAC) # addiu $t0, $t0, -0x4354
/* 004356C8 89190000 */  lwl   $t9, ($t0)
/* 004356CC 99190003 */  lwr   $t9, 3($t0)
/* 004356D0 ABB90004 */  swl   $t9, 4($sp)
/* 004356D4 BBB90007 */  swr   $t9, 7($sp)
/* 004356D8 890D0004 */  lwl   $t5, 4($t0)
/* 004356DC 990D0007 */  lwr   $t5, 7($t0)
/* 004356E0 8FA50004 */  lw    $a1, 4($sp)
/* 004356E4 ABAD0008 */  swl   $t5, 8($sp)
/* 004356E8 BBAD000B */  swr   $t5, 0xb($sp)
/* 004356EC 89190008 */  lwl   $t9, 8($t0)
/* 004356F0 9919000B */  lwr   $t9, 0xb($t0)
/* 004356F4 8FA60008 */  lw    $a2, 8($sp)
/* 004356F8 ABB9000C */  swl   $t9, 0xc($sp)
/* 004356FC BBB9000F */  swr   $t9, 0xf($sp)
/* 00435700 890D000C */  lwl   $t5, 0xc($t0)
/* 00435704 990D000F */  lwr   $t5, 0xf($t0)
/* 00435708 8FA7000C */  lw    $a3, 0xc($sp)
/* 0043570C ABAD0010 */  swl   $t5, 0x10($sp)
/* 00435710 BBAD0013 */  swr   $t5, 0x13($sp)
/* 00435714 89190010 */  lwl   $t9, 0x10($t0)
/* 00435718 99190013 */  lwr   $t9, 0x13($t0)
/* 0043571C ABB90014 */  swl   $t9, 0x14($sp)
/* 00435720 BBB90017 */  swr   $t9, 0x17($sp)
/* 00435724 890D0014 */  lwl   $t5, 0x14($t0)
/* 00435728 990D0017 */  lwr   $t5, 0x17($t0)
/* 0043572C ABAD0018 */  swl   $t5, 0x18($sp)
/* 00435730 BBAD001B */  swr   $t5, 0x1b($sp)
/* 00435734 89190018 */  lwl   $t9, 0x18($t0)
/* 00435738 9919001B */  lwr   $t9, 0x1b($t0)
/* 0043573C ABB9001C */  swl   $t9, 0x1c($sp)
/* 00435740 BBB9001F */  swr   $t9, 0x1f($sp)
/* 00435744 890D001C */  lwl   $t5, 0x1c($t0)
/* 00435748 8F998020 */  lw    $t9, %got(func_004346B0)($gp)
/* 0043574C 990D001F */  lwr   $t5, 0x1f($t0)
/* 00435750 273946B0 */  addiu $t9, %lo(func_004346B0) # addiu $t9, $t9, 0x46b0
/* 00435754 ABAD0020 */  swl   $t5, 0x20($sp)
/* 00435758 0320F809 */  jalr  $t9
/* 0043575C BBAD0023 */   swr   $t5, 0x23($sp)
/* 00435760 10400004 */  beqz  $v0, .L00435774
/* 00435764 8FBC004C */   lw    $gp, 0x4c($sp)
/* 00435768 8F818AC0 */  lw     $at, %got(dorecur)($gp)
/* 0043576C 100006BD */  b     .L00437264
/* 00435770 A0200000 */   sb    $zero, ($at)
.L00435774:
/* 00435774 8F8F8044 */  lw    $t7, %got(RO_1000BC8C)($gp)
/* 00435778 8F998020 */  lw    $t9, %got(func_004346B0)($gp)
/* 0043577C 02602025 */  move  $a0, $s3
/* 00435780 25EFBC8C */  addiu $t7, %lo(RO_1000BC8C) # addiu $t7, $t7, -0x4374
/* 00435784 89EB0000 */  lwl   $t3, ($t7)
/* 00435788 99EB0003 */  lwr   $t3, 3($t7)
/* 0043578C 273946B0 */  addiu $t9, %lo(func_004346B0) # addiu $t9, $t9, 0x46b0
/* 00435790 02801025 */  move  $v0, $s4
/* 00435794 ABAB0004 */  swl   $t3, 4($sp)
/* 00435798 BBAB0007 */  swr   $t3, 7($sp)
/* 0043579C 89F80004 */  lwl   $t8, 4($t7)
/* 004357A0 99F80007 */  lwr   $t8, 7($t7)
/* 004357A4 8FA50004 */  lw    $a1, 4($sp)
/* 004357A8 ABB80008 */  swl   $t8, 8($sp)
/* 004357AC BBB8000B */  swr   $t8, 0xb($sp)
/* 004357B0 89EB0008 */  lwl   $t3, 8($t7)
/* 004357B4 99EB000B */  lwr   $t3, 0xb($t7)
/* 004357B8 8FA60008 */  lw    $a2, 8($sp)
/* 004357BC ABAB000C */  swl   $t3, 0xc($sp)
/* 004357C0 BBAB000F */  swr   $t3, 0xf($sp)
/* 004357C4 89F8000C */  lwl   $t8, 0xc($t7)
/* 004357C8 99F8000F */  lwr   $t8, 0xf($t7)
/* 004357CC 8FA7000C */  lw    $a3, 0xc($sp)
/* 004357D0 ABB80010 */  swl   $t8, 0x10($sp)
/* 004357D4 BBB80013 */  swr   $t8, 0x13($sp)
/* 004357D8 89EB0010 */  lwl   $t3, 0x10($t7)
/* 004357DC 99EB0013 */  lwr   $t3, 0x13($t7)
/* 004357E0 ABAB0014 */  swl   $t3, 0x14($sp)
/* 004357E4 BBAB0017 */  swr   $t3, 0x17($sp)
/* 004357E8 89F80014 */  lwl   $t8, 0x14($t7)
/* 004357EC 99F80017 */  lwr   $t8, 0x17($t7)
/* 004357F0 ABB80018 */  swl   $t8, 0x18($sp)
/* 004357F4 BBB8001B */  swr   $t8, 0x1b($sp)
/* 004357F8 89EB0018 */  lwl   $t3, 0x18($t7)
/* 004357FC 99EB001B */  lwr   $t3, 0x1b($t7)
/* 00435800 ABAB001C */  swl   $t3, 0x1c($sp)
/* 00435804 BBAB001F */  swr   $t3, 0x1f($sp)
/* 00435808 89F8001C */  lwl   $t8, 0x1c($t7)
/* 0043580C 99F8001F */  lwr   $t8, 0x1f($t7)
/* 00435810 ABB80020 */  swl   $t8, 0x20($sp)
/* 00435814 0320F809 */  jalr  $t9
/* 00435818 BBB80023 */   swr   $t8, 0x23($sp)
/* 0043581C 10400004 */  beqz  $v0, .L00435830
/* 00435820 8FBC004C */   lw    $gp, 0x4c($sp)
/* 00435824 8F818AC4 */  lw     $at, %got(dogenvreg)($gp)
/* 00435828 1000068E */  b     .L00437264
/* 0043582C A0200000 */   sb    $zero, ($at)
.L00435830:
/* 00435830 8F8C8044 */  lw    $t4, %got(RO_1000BC6C)($gp)
/* 00435834 8F998020 */  lw    $t9, %got(func_004346B0)($gp)
/* 00435838 02602025 */  move  $a0, $s3
/* 0043583C 258CBC6C */  addiu $t4, %lo(RO_1000BC6C) # addiu $t4, $t4, -0x4394
/* 00435840 898A0000 */  lwl   $t2, ($t4)
/* 00435844 998A0003 */  lwr   $t2, 3($t4)
/* 00435848 273946B0 */  addiu $t9, %lo(func_004346B0) # addiu $t9, $t9, 0x46b0
/* 0043584C 02801025 */  move  $v0, $s4
/* 00435850 ABAA0004 */  swl   $t2, 4($sp)
/* 00435854 BBAA0007 */  swr   $t2, 7($sp)
/* 00435858 89890004 */  lwl   $t1, 4($t4)
/* 0043585C 99890007 */  lwr   $t1, 7($t4)
/* 00435860 8FA50004 */  lw    $a1, 4($sp)
/* 00435864 ABA90008 */  swl   $t1, 8($sp)
/* 00435868 BBA9000B */  swr   $t1, 0xb($sp)
/* 0043586C 898A0008 */  lwl   $t2, 8($t4)
/* 00435870 998A000B */  lwr   $t2, 0xb($t4)
/* 00435874 8FA60008 */  lw    $a2, 8($sp)
/* 00435878 ABAA000C */  swl   $t2, 0xc($sp)
/* 0043587C BBAA000F */  swr   $t2, 0xf($sp)
/* 00435880 8989000C */  lwl   $t1, 0xc($t4)
/* 00435884 9989000F */  lwr   $t1, 0xf($t4)
/* 00435888 8FA7000C */  lw    $a3, 0xc($sp)
/* 0043588C ABA90010 */  swl   $t1, 0x10($sp)
/* 00435890 BBA90013 */  swr   $t1, 0x13($sp)
/* 00435894 898A0010 */  lwl   $t2, 0x10($t4)
/* 00435898 998A0013 */  lwr   $t2, 0x13($t4)
/* 0043589C ABAA0014 */  swl   $t2, 0x14($sp)
/* 004358A0 BBAA0017 */  swr   $t2, 0x17($sp)
/* 004358A4 89890014 */  lwl   $t1, 0x14($t4)
/* 004358A8 99890017 */  lwr   $t1, 0x17($t4)
/* 004358AC ABA90018 */  swl   $t1, 0x18($sp)
/* 004358B0 BBA9001B */  swr   $t1, 0x1b($sp)
/* 004358B4 898A0018 */  lwl   $t2, 0x18($t4)
/* 004358B8 998A001B */  lwr   $t2, 0x1b($t4)
/* 004358BC ABAA001C */  swl   $t2, 0x1c($sp)
/* 004358C0 BBAA001F */  swr   $t2, 0x1f($sp)
/* 004358C4 8989001C */  lwl   $t1, 0x1c($t4)
/* 004358C8 9989001F */  lwr   $t1, 0x1f($t4)
/* 004358CC ABA90020 */  swl   $t1, 0x20($sp)
/* 004358D0 0320F809 */  jalr  $t9
/* 004358D4 BBA90023 */   swr   $t1, 0x23($sp)
/* 004358D8 10400004 */  beqz  $v0, .L004358EC
/* 004358DC 8FBC004C */   lw    $gp, 0x4c($sp)
/* 004358E0 8F818AC8 */  lw     $at, %got(dotail)($gp)
/* 004358E4 1000065F */  b     .L00437264
/* 004358E8 A0200000 */   sb    $zero, ($at)
.L004358EC:
/* 004358EC 8F8E8044 */  lw    $t6, %got(RO_1000BC4C)($gp)
/* 004358F0 8F998020 */  lw    $t9, %got(func_004346B0)($gp)
/* 004358F4 02602025 */  move  $a0, $s3
/* 004358F8 25CEBC4C */  addiu $t6, %lo(RO_1000BC4C) # addiu $t6, $t6, -0x43b4
/* 004358FC 89CD0000 */  lwl   $t5, ($t6)
/* 00435900 99CD0003 */  lwr   $t5, 3($t6)
/* 00435904 273946B0 */  addiu $t9, %lo(func_004346B0) # addiu $t9, $t9, 0x46b0
/* 00435908 02801025 */  move  $v0, $s4
/* 0043590C ABAD0004 */  swl   $t5, 4($sp)
/* 00435910 BBAD0007 */  swr   $t5, 7($sp)
/* 00435914 89C80004 */  lwl   $t0, 4($t6)
/* 00435918 99C80007 */  lwr   $t0, 7($t6)
/* 0043591C 8FA50004 */  lw    $a1, 4($sp)
/* 00435920 ABA80008 */  swl   $t0, 8($sp)
/* 00435924 BBA8000B */  swr   $t0, 0xb($sp)
/* 00435928 89CD0008 */  lwl   $t5, 8($t6)
/* 0043592C 99CD000B */  lwr   $t5, 0xb($t6)
/* 00435930 8FA60008 */  lw    $a2, 8($sp)
/* 00435934 ABAD000C */  swl   $t5, 0xc($sp)
/* 00435938 BBAD000F */  swr   $t5, 0xf($sp)
/* 0043593C 89C8000C */  lwl   $t0, 0xc($t6)
/* 00435940 99C8000F */  lwr   $t0, 0xf($t6)
/* 00435944 8FA7000C */  lw    $a3, 0xc($sp)
/* 00435948 ABA80010 */  swl   $t0, 0x10($sp)
/* 0043594C BBA80013 */  swr   $t0, 0x13($sp)
/* 00435950 89CD0010 */  lwl   $t5, 0x10($t6)
/* 00435954 99CD0013 */  lwr   $t5, 0x13($t6)
/* 00435958 ABAD0014 */  swl   $t5, 0x14($sp)
/* 0043595C BBAD0017 */  swr   $t5, 0x17($sp)
/* 00435960 89C80014 */  lwl   $t0, 0x14($t6)
/* 00435964 99C80017 */  lwr   $t0, 0x17($t6)
/* 00435968 ABA80018 */  swl   $t0, 0x18($sp)
/* 0043596C BBA8001B */  swr   $t0, 0x1b($sp)
/* 00435970 89CD0018 */  lwl   $t5, 0x18($t6)
/* 00435974 99CD001B */  lwr   $t5, 0x1b($t6)
/* 00435978 ABAD001C */  swl   $t5, 0x1c($sp)
/* 0043597C BBAD001F */  swr   $t5, 0x1f($sp)
/* 00435980 89C8001C */  lwl   $t0, 0x1c($t6)
/* 00435984 99C8001F */  lwr   $t0, 0x1f($t6)
/* 00435988 ABA80020 */  swl   $t0, 0x20($sp)
/* 0043598C 0320F809 */  jalr  $t9
/* 00435990 BBA80023 */   swr   $t0, 0x23($sp)
/* 00435994 10400004 */  beqz  $v0, .L004359A8
/* 00435998 8FBC004C */   lw    $gp, 0x4c($sp)
/* 0043599C 8F818ACC */  lw     $at, %got(domtag)($gp)
/* 004359A0 10000630 */  b     .L00437264
/* 004359A4 A0370000 */   sb    $s7, ($at)
.L004359A8:
/* 004359A8 8F998044 */  lw    $t9, %got(RO_1000BC2C)($gp)
/* 004359AC 02602025 */  move  $a0, $s3
/* 004359B0 02801025 */  move  $v0, $s4
/* 004359B4 2739BC2C */  addiu $t9, %lo(RO_1000BC2C) # addiu $t9, $t9, -0x43d4
/* 004359B8 8B380000 */  lwl   $t8, ($t9)
/* 004359BC 9B380003 */  lwr   $t8, 3($t9)
/* 004359C0 ABB80004 */  swl   $t8, 4($sp)
/* 004359C4 BBB80007 */  swr   $t8, 7($sp)
/* 004359C8 8B2F0004 */  lwl   $t7, 4($t9)
/* 004359CC 9B2F0007 */  lwr   $t7, 7($t9)
/* 004359D0 8FA50004 */  lw    $a1, 4($sp)
/* 004359D4 ABAF0008 */  swl   $t7, 8($sp)
/* 004359D8 BBAF000B */  swr   $t7, 0xb($sp)
/* 004359DC 8B380008 */  lwl   $t8, 8($t9)
/* 004359E0 9B38000B */  lwr   $t8, 0xb($t9)
/* 004359E4 8FA60008 */  lw    $a2, 8($sp)
/* 004359E8 ABB8000C */  swl   $t8, 0xc($sp)
/* 004359EC BBB8000F */  swr   $t8, 0xf($sp)
/* 004359F0 8B2F000C */  lwl   $t7, 0xc($t9)
/* 004359F4 9B2F000F */  lwr   $t7, 0xf($t9)
/* 004359F8 8FA7000C */  lw    $a3, 0xc($sp)
/* 004359FC ABAF0010 */  swl   $t7, 0x10($sp)
/* 00435A00 BBAF0013 */  swr   $t7, 0x13($sp)
/* 00435A04 8B380010 */  lwl   $t8, 0x10($t9)
/* 00435A08 9B380013 */  lwr   $t8, 0x13($t9)
/* 00435A0C ABB80014 */  swl   $t8, 0x14($sp)
/* 00435A10 BBB80017 */  swr   $t8, 0x17($sp)
/* 00435A14 8B2F0014 */  lwl   $t7, 0x14($t9)
/* 00435A18 9B2F0017 */  lwr   $t7, 0x17($t9)
/* 00435A1C ABAF0018 */  swl   $t7, 0x18($sp)
/* 00435A20 BBAF001B */  swr   $t7, 0x1b($sp)
/* 00435A24 8B380018 */  lwl   $t8, 0x18($t9)
/* 00435A28 9B38001B */  lwr   $t8, 0x1b($t9)
/* 00435A2C ABB8001C */  swl   $t8, 0x1c($sp)
/* 00435A30 BBB8001F */  swr   $t8, 0x1f($sp)
/* 00435A34 8B2F001C */  lwl   $t7, 0x1c($t9)
/* 00435A38 9B2F001F */  lwr   $t7, 0x1f($t9)
/* 00435A3C 8F998020 */  lw    $t9, %got(func_004346B0)($gp)
/* 00435A40 ABAF0020 */  swl   $t7, 0x20($sp)
/* 00435A44 273946B0 */  addiu $t9, %lo(func_004346B0) # addiu $t9, $t9, 0x46b0
/* 00435A48 0320F809 */  jalr  $t9
/* 00435A4C BBAF0023 */   swr   $t7, 0x23($sp)
/* 00435A50 10400004 */  beqz  $v0, .L00435A64
/* 00435A54 8FBC004C */   lw    $gp, 0x4c($sp)
/* 00435A58 8F818A80 */  lw     $at, %got(dordstore)($gp)
/* 00435A5C 10000601 */  b     .L00437264
/* 00435A60 A0200000 */   sb    $zero, ($at)
.L00435A64:
/* 00435A64 8F8B8044 */  lw    $t3, %got(RO_1000BC0C)($gp)
/* 00435A68 8F998020 */  lw    $t9, %got(func_004346B0)($gp)
/* 00435A6C 02602025 */  move  $a0, $s3
/* 00435A70 256BBC0C */  addiu $t3, %lo(RO_1000BC0C) # addiu $t3, $t3, -0x43f4
/* 00435A74 89690000 */  lwl   $t1, ($t3)
/* 00435A78 99690003 */  lwr   $t1, 3($t3)
/* 00435A7C 273946B0 */  addiu $t9, %lo(func_004346B0) # addiu $t9, $t9, 0x46b0
/* 00435A80 02801025 */  move  $v0, $s4
/* 00435A84 ABA90004 */  swl   $t1, 4($sp)
/* 00435A88 BBA90007 */  swr   $t1, 7($sp)
/* 00435A8C 896C0004 */  lwl   $t4, 4($t3)
/* 00435A90 996C0007 */  lwr   $t4, 7($t3)
/* 00435A94 8FA50004 */  lw    $a1, 4($sp)
/* 00435A98 ABAC0008 */  swl   $t4, 8($sp)
/* 00435A9C BBAC000B */  swr   $t4, 0xb($sp)
/* 00435AA0 89690008 */  lwl   $t1, 8($t3)
/* 00435AA4 9969000B */  lwr   $t1, 0xb($t3)
/* 00435AA8 8FA60008 */  lw    $a2, 8($sp)
/* 00435AAC ABA9000C */  swl   $t1, 0xc($sp)
/* 00435AB0 BBA9000F */  swr   $t1, 0xf($sp)
/* 00435AB4 896C000C */  lwl   $t4, 0xc($t3)
/* 00435AB8 996C000F */  lwr   $t4, 0xf($t3)
/* 00435ABC 8FA7000C */  lw    $a3, 0xc($sp)
/* 00435AC0 ABAC0010 */  swl   $t4, 0x10($sp)
/* 00435AC4 BBAC0013 */  swr   $t4, 0x13($sp)
/* 00435AC8 89690010 */  lwl   $t1, 0x10($t3)
/* 00435ACC 99690013 */  lwr   $t1, 0x13($t3)
/* 00435AD0 ABA90014 */  swl   $t1, 0x14($sp)
/* 00435AD4 BBA90017 */  swr   $t1, 0x17($sp)
/* 00435AD8 896C0014 */  lwl   $t4, 0x14($t3)
/* 00435ADC 996C0017 */  lwr   $t4, 0x17($t3)
/* 00435AE0 ABAC0018 */  swl   $t4, 0x18($sp)
/* 00435AE4 BBAC001B */  swr   $t4, 0x1b($sp)
/* 00435AE8 89690018 */  lwl   $t1, 0x18($t3)
/* 00435AEC 9969001B */  lwr   $t1, 0x1b($t3)
/* 00435AF0 ABA9001C */  swl   $t1, 0x1c($sp)
/* 00435AF4 BBA9001F */  swr   $t1, 0x1f($sp)
/* 00435AF8 896C001C */  lwl   $t4, 0x1c($t3)
/* 00435AFC 996C001F */  lwr   $t4, 0x1f($t3)
/* 00435B00 ABAC0020 */  swl   $t4, 0x20($sp)
/* 00435B04 0320F809 */  jalr  $t9
/* 00435B08 BBAC0023 */   swr   $t4, 0x23($sp)
/* 00435B0C 10400004 */  beqz  $v0, .L00435B20
/* 00435B10 8FBC004C */   lw    $gp, 0x4c($sp)
/* 00435B14 8F818AB0 */  lw     $at, %got(docreatebb)($gp)
/* 00435B18 100005D2 */  b     .L00437264
/* 00435B1C A0370000 */   sb    $s7, ($at)
.L00435B20:
/* 00435B20 8F8A8044 */  lw    $t2, %got(RO_1000BBEC)($gp)
/* 00435B24 8F998020 */  lw    $t9, %got(func_004346B0)($gp)
/* 00435B28 02602025 */  move  $a0, $s3
/* 00435B2C 254ABBEC */  addiu $t2, %lo(RO_1000BBEC) # addiu $t2, $t2, -0x4414
/* 00435B30 89480000 */  lwl   $t0, ($t2)
/* 00435B34 99480003 */  lwr   $t0, 3($t2)
/* 00435B38 273946B0 */  addiu $t9, %lo(func_004346B0) # addiu $t9, $t9, 0x46b0
/* 00435B3C 02801025 */  move  $v0, $s4
/* 00435B40 ABA80004 */  swl   $t0, 4($sp)
/* 00435B44 BBA80007 */  swr   $t0, 7($sp)
/* 00435B48 894E0004 */  lwl   $t6, 4($t2)
/* 00435B4C 994E0007 */  lwr   $t6, 7($t2)
/* 00435B50 8FA50004 */  lw    $a1, 4($sp)
/* 00435B54 ABAE0008 */  swl   $t6, 8($sp)
/* 00435B58 BBAE000B */  swr   $t6, 0xb($sp)
/* 00435B5C 89480008 */  lwl   $t0, 8($t2)
/* 00435B60 9948000B */  lwr   $t0, 0xb($t2)
/* 00435B64 8FA60008 */  lw    $a2, 8($sp)
/* 00435B68 ABA8000C */  swl   $t0, 0xc($sp)
/* 00435B6C BBA8000F */  swr   $t0, 0xf($sp)
/* 00435B70 894E000C */  lwl   $t6, 0xc($t2)
/* 00435B74 994E000F */  lwr   $t6, 0xf($t2)
/* 00435B78 8FA7000C */  lw    $a3, 0xc($sp)
/* 00435B7C ABAE0010 */  swl   $t6, 0x10($sp)
/* 00435B80 BBAE0013 */  swr   $t6, 0x13($sp)
/* 00435B84 89480010 */  lwl   $t0, 0x10($t2)
/* 00435B88 99480013 */  lwr   $t0, 0x13($t2)
/* 00435B8C ABA80014 */  swl   $t0, 0x14($sp)
/* 00435B90 BBA80017 */  swr   $t0, 0x17($sp)
/* 00435B94 894E0014 */  lwl   $t6, 0x14($t2)
/* 00435B98 994E0017 */  lwr   $t6, 0x17($t2)
/* 00435B9C ABAE0018 */  swl   $t6, 0x18($sp)
/* 00435BA0 BBAE001B */  swr   $t6, 0x1b($sp)
/* 00435BA4 89480018 */  lwl   $t0, 0x18($t2)
/* 00435BA8 9948001B */  lwr   $t0, 0x1b($t2)
/* 00435BAC ABA8001C */  swl   $t0, 0x1c($sp)
/* 00435BB0 BBA8001F */  swr   $t0, 0x1f($sp)
/* 00435BB4 894E001C */  lwl   $t6, 0x1c($t2)
/* 00435BB8 994E001F */  lwr   $t6, 0x1f($t2)
/* 00435BBC ABAE0020 */  swl   $t6, 0x20($sp)
/* 00435BC0 0320F809 */  jalr  $t9
/* 00435BC4 BBAE0023 */   swr   $t6, 0x23($sp)
/* 00435BC8 10400004 */  beqz  $v0, .L00435BDC
/* 00435BCC 8FBC004C */   lw    $gp, 0x4c($sp)
/* 00435BD0 8F818AE0 */  lw     $at, %got(nof77alias)($gp)
/* 00435BD4 100005A3 */  b     .L00437264
/* 00435BD8 A0200000 */   sb    $zero, ($at)
.L00435BDC:
/* 00435BDC 8F8D8044 */  lw    $t5, %got(RO_1000BBCC)($gp)
/* 00435BE0 02602025 */  move  $a0, $s3
/* 00435BE4 02801025 */  move  $v0, $s4
/* 00435BE8 25ADBBCC */  addiu $t5, %lo(RO_1000BBCC) # addiu $t5, $t5, -0x4434
/* 00435BEC 89AF0000 */  lwl   $t7, ($t5)
/* 00435BF0 99AF0003 */  lwr   $t7, 3($t5)
/* 00435BF4 ABAF0004 */  swl   $t7, 4($sp)
/* 00435BF8 BBAF0007 */  swr   $t7, 7($sp)
/* 00435BFC 89B90004 */  lwl   $t9, 4($t5)
/* 00435C00 99B90007 */  lwr   $t9, 7($t5)
/* 00435C04 8FA50004 */  lw    $a1, 4($sp)
/* 00435C08 ABB90008 */  swl   $t9, 8($sp)
/* 00435C0C BBB9000B */  swr   $t9, 0xb($sp)
/* 00435C10 89AF0008 */  lwl   $t7, 8($t5)
/* 00435C14 99AF000B */  lwr   $t7, 0xb($t5)
/* 00435C18 8FA60008 */  lw    $a2, 8($sp)
/* 00435C1C ABAF000C */  swl   $t7, 0xc($sp)
/* 00435C20 BBAF000F */  swr   $t7, 0xf($sp)
/* 00435C24 89B9000C */  lwl   $t9, 0xc($t5)
/* 00435C28 99B9000F */  lwr   $t9, 0xf($t5)
/* 00435C2C 8FA7000C */  lw    $a3, 0xc($sp)
/* 00435C30 ABB90010 */  swl   $t9, 0x10($sp)
/* 00435C34 BBB90013 */  swr   $t9, 0x13($sp)
/* 00435C38 89AF0010 */  lwl   $t7, 0x10($t5)
/* 00435C3C 99AF0013 */  lwr   $t7, 0x13($t5)
/* 00435C40 ABAF0014 */  swl   $t7, 0x14($sp)
/* 00435C44 BBAF0017 */  swr   $t7, 0x17($sp)
/* 00435C48 89B90014 */  lwl   $t9, 0x14($t5)
/* 00435C4C 99B90017 */  lwr   $t9, 0x17($t5)
/* 00435C50 ABB90018 */  swl   $t9, 0x18($sp)
/* 00435C54 BBB9001B */  swr   $t9, 0x1b($sp)
/* 00435C58 89AF0018 */  lwl   $t7, 0x18($t5)
/* 00435C5C 99AF001B */  lwr   $t7, 0x1b($t5)
/* 00435C60 ABAF001C */  swl   $t7, 0x1c($sp)
/* 00435C64 BBAF001F */  swr   $t7, 0x1f($sp)
/* 00435C68 89B9001C */  lwl   $t9, 0x1c($t5)
/* 00435C6C 99B9001F */  lwr   $t9, 0x1f($t5)
/* 00435C70 ABB90020 */  swl   $t9, 0x20($sp)
/* 00435C74 BBB90023 */  swr   $t9, 0x23($sp)
/* 00435C78 8F998020 */  lw    $t9, %got(func_004346B0)($gp)
/* 00435C7C 273946B0 */  addiu $t9, %lo(func_004346B0) # addiu $t9, $t9, 0x46b0
/* 00435C80 0320F809 */  jalr  $t9
/* 00435C84 00000000 */   nop   
/* 00435C88 10400004 */  beqz  $v0, .L00435C9C
/* 00435C8C 8FBC004C */   lw    $gp, 0x4c($sp)
/* 00435C90 8F818AE4 */  lw     $at, %got(nopalias)($gp)
/* 00435C94 10000573 */  b     .L00437264
/* 00435C98 A0370000 */   sb    $s7, ($at)
.L00435C9C:
/* 00435C9C 8F988044 */  lw    $t8, %got(RO_1000BBAC)($gp)
/* 00435CA0 8F998020 */  lw    $t9, %got(func_004346B0)($gp)
/* 00435CA4 02602025 */  move  $a0, $s3
/* 00435CA8 2718BBAC */  addiu $t8, %lo(RO_1000BBAC) # addiu $t8, $t8, -0x4454
/* 00435CAC 8B0C0000 */  lwl   $t4, ($t8)
/* 00435CB0 9B0C0003 */  lwr   $t4, 3($t8)
/* 00435CB4 273946B0 */  addiu $t9, %lo(func_004346B0) # addiu $t9, $t9, 0x46b0
/* 00435CB8 02801025 */  move  $v0, $s4
/* 00435CBC ABAC0004 */  swl   $t4, 4($sp)
/* 00435CC0 BBAC0007 */  swr   $t4, 7($sp)
/* 00435CC4 8B0B0004 */  lwl   $t3, 4($t8)
/* 00435CC8 9B0B0007 */  lwr   $t3, 7($t8)
/* 00435CCC 8FA50004 */  lw    $a1, 4($sp)
/* 00435CD0 ABAB0008 */  swl   $t3, 8($sp)
/* 00435CD4 BBAB000B */  swr   $t3, 0xb($sp)
/* 00435CD8 8B0C0008 */  lwl   $t4, 8($t8)
/* 00435CDC 9B0C000B */  lwr   $t4, 0xb($t8)
/* 00435CE0 8FA60008 */  lw    $a2, 8($sp)
/* 00435CE4 ABAC000C */  swl   $t4, 0xc($sp)
/* 00435CE8 BBAC000F */  swr   $t4, 0xf($sp)
/* 00435CEC 8B0B000C */  lwl   $t3, 0xc($t8)
/* 00435CF0 9B0B000F */  lwr   $t3, 0xf($t8)
/* 00435CF4 8FA7000C */  lw    $a3, 0xc($sp)
/* 00435CF8 ABAB0010 */  swl   $t3, 0x10($sp)
/* 00435CFC BBAB0013 */  swr   $t3, 0x13($sp)
/* 00435D00 8B0C0010 */  lwl   $t4, 0x10($t8)
/* 00435D04 9B0C0013 */  lwr   $t4, 0x13($t8)
/* 00435D08 ABAC0014 */  swl   $t4, 0x14($sp)
/* 00435D0C BBAC0017 */  swr   $t4, 0x17($sp)
/* 00435D10 8B0B0014 */  lwl   $t3, 0x14($t8)
/* 00435D14 9B0B0017 */  lwr   $t3, 0x17($t8)
/* 00435D18 ABAB0018 */  swl   $t3, 0x18($sp)
/* 00435D1C BBAB001B */  swr   $t3, 0x1b($sp)
/* 00435D20 8B0C0018 */  lwl   $t4, 0x18($t8)
/* 00435D24 9B0C001B */  lwr   $t4, 0x1b($t8)
/* 00435D28 ABAC001C */  swl   $t4, 0x1c($sp)
/* 00435D2C BBAC001F */  swr   $t4, 0x1f($sp)
/* 00435D30 8B0B001C */  lwl   $t3, 0x1c($t8)
/* 00435D34 9B0B001F */  lwr   $t3, 0x1f($t8)
/* 00435D38 ABAB0020 */  swl   $t3, 0x20($sp)
/* 00435D3C 0320F809 */  jalr  $t9
/* 00435D40 BBAB0023 */   swr   $t3, 0x23($sp)
/* 00435D44 10400006 */  beqz  $v0, .L00435D60
/* 00435D48 8FBC004C */   lw    $gp, 0x4c($sp)
/* 00435D4C 8F818AE8 */  lw     $at, %got(fortran_lang)($gp)
/* 00435D50 A0370000 */  sb    $s7, ($at)
/* 00435D54 8F818A5C */  lw     $at, %got(lang)($gp)
/* 00435D58 10000542 */  b     .L00437264
/* 00435D5C A0370000 */   sb    $s7, ($at)
.L00435D60:
/* 00435D60 8F898044 */  lw    $t1, %got(RO_1000BB8C)($gp)
/* 00435D64 8F998020 */  lw    $t9, %got(func_004346B0)($gp)
/* 00435D68 02602025 */  move  $a0, $s3
/* 00435D6C 2529BB8C */  addiu $t1, %lo(RO_1000BB8C) # addiu $t1, $t1, -0x4474
/* 00435D70 892E0000 */  lwl   $t6, ($t1)
/* 00435D74 992E0003 */  lwr   $t6, 3($t1)
/* 00435D78 273946B0 */  addiu $t9, %lo(func_004346B0) # addiu $t9, $t9, 0x46b0
/* 00435D7C 02801025 */  move  $v0, $s4
/* 00435D80 ABAE0004 */  swl   $t6, 4($sp)
/* 00435D84 BBAE0007 */  swr   $t6, 7($sp)
/* 00435D88 892A0004 */  lwl   $t2, 4($t1)
/* 00435D8C 992A0007 */  lwr   $t2, 7($t1)
/* 00435D90 8FA50004 */  lw    $a1, 4($sp)
/* 00435D94 ABAA0008 */  swl   $t2, 8($sp)
/* 00435D98 BBAA000B */  swr   $t2, 0xb($sp)
/* 00435D9C 892E0008 */  lwl   $t6, 8($t1)
/* 00435DA0 992E000B */  lwr   $t6, 0xb($t1)
/* 00435DA4 8FA60008 */  lw    $a2, 8($sp)
/* 00435DA8 ABAE000C */  swl   $t6, 0xc($sp)
/* 00435DAC BBAE000F */  swr   $t6, 0xf($sp)
/* 00435DB0 892A000C */  lwl   $t2, 0xc($t1)
/* 00435DB4 992A000F */  lwr   $t2, 0xf($t1)
/* 00435DB8 8FA7000C */  lw    $a3, 0xc($sp)
/* 00435DBC ABAA0010 */  swl   $t2, 0x10($sp)
/* 00435DC0 BBAA0013 */  swr   $t2, 0x13($sp)
/* 00435DC4 892E0010 */  lwl   $t6, 0x10($t1)
/* 00435DC8 992E0013 */  lwr   $t6, 0x13($t1)
/* 00435DCC ABAE0014 */  swl   $t6, 0x14($sp)
/* 00435DD0 BBAE0017 */  swr   $t6, 0x17($sp)
/* 00435DD4 892A0014 */  lwl   $t2, 0x14($t1)
/* 00435DD8 992A0017 */  lwr   $t2, 0x17($t1)
/* 00435DDC ABAA0018 */  swl   $t2, 0x18($sp)
/* 00435DE0 BBAA001B */  swr   $t2, 0x1b($sp)
/* 00435DE4 892E0018 */  lwl   $t6, 0x18($t1)
/* 00435DE8 992E001B */  lwr   $t6, 0x1b($t1)
/* 00435DEC ABAE001C */  swl   $t6, 0x1c($sp)
/* 00435DF0 BBAE001F */  swr   $t6, 0x1f($sp)
/* 00435DF4 892A001C */  lwl   $t2, 0x1c($t1)
/* 00435DF8 992A001F */  lwr   $t2, 0x1f($t1)
/* 00435DFC ABAA0020 */  swl   $t2, 0x20($sp)
/* 00435E00 0320F809 */  jalr  $t9
/* 00435E04 BBAA0023 */   swr   $t2, 0x23($sp)
/* 00435E08 10400004 */  beqz  $v0, .L00435E1C
/* 00435E0C 8FBC004C */   lw    $gp, 0x4c($sp)
/* 00435E10 8F818AEC */  lw     $at, %got(moremotion)($gp)
/* 00435E14 10000513 */  b     .L00437264
/* 00435E18 A0370000 */   sb    $s7, ($at)
.L00435E1C:
/* 00435E1C 8F888044 */  lw    $t0, %got(RO_1000BB6C)($gp)
/* 00435E20 02602025 */  move  $a0, $s3
/* 00435E24 02801025 */  move  $v0, $s4
/* 00435E28 2508BB6C */  addiu $t0, %lo(RO_1000BB6C) # addiu $t0, $t0, -0x4494
/* 00435E2C 89190000 */  lwl   $t9, ($t0)
/* 00435E30 99190003 */  lwr   $t9, 3($t0)
/* 00435E34 ABB90004 */  swl   $t9, 4($sp)
/* 00435E38 BBB90007 */  swr   $t9, 7($sp)
/* 00435E3C 890D0004 */  lwl   $t5, 4($t0)
/* 00435E40 990D0007 */  lwr   $t5, 7($t0)
/* 00435E44 8FA50004 */  lw    $a1, 4($sp)
/* 00435E48 ABAD0008 */  swl   $t5, 8($sp)
/* 00435E4C BBAD000B */  swr   $t5, 0xb($sp)
/* 00435E50 89190008 */  lwl   $t9, 8($t0)
/* 00435E54 9919000B */  lwr   $t9, 0xb($t0)
/* 00435E58 8FA60008 */  lw    $a2, 8($sp)
/* 00435E5C ABB9000C */  swl   $t9, 0xc($sp)
/* 00435E60 BBB9000F */  swr   $t9, 0xf($sp)
/* 00435E64 890D000C */  lwl   $t5, 0xc($t0)
/* 00435E68 990D000F */  lwr   $t5, 0xf($t0)
/* 00435E6C 8FA7000C */  lw    $a3, 0xc($sp)
/* 00435E70 ABAD0010 */  swl   $t5, 0x10($sp)
/* 00435E74 BBAD0013 */  swr   $t5, 0x13($sp)
/* 00435E78 89190010 */  lwl   $t9, 0x10($t0)
/* 00435E7C 99190013 */  lwr   $t9, 0x13($t0)
/* 00435E80 ABB90014 */  swl   $t9, 0x14($sp)
/* 00435E84 BBB90017 */  swr   $t9, 0x17($sp)
/* 00435E88 890D0014 */  lwl   $t5, 0x14($t0)
/* 00435E8C 990D0017 */  lwr   $t5, 0x17($t0)
/* 00435E90 ABAD0018 */  swl   $t5, 0x18($sp)
/* 00435E94 BBAD001B */  swr   $t5, 0x1b($sp)
/* 00435E98 89190018 */  lwl   $t9, 0x18($t0)
/* 00435E9C 9919001B */  lwr   $t9, 0x1b($t0)
/* 00435EA0 ABB9001C */  swl   $t9, 0x1c($sp)
/* 00435EA4 BBB9001F */  swr   $t9, 0x1f($sp)
/* 00435EA8 890D001C */  lwl   $t5, 0x1c($t0)
/* 00435EAC 8F998020 */  lw    $t9, %got(func_004346B0)($gp)
/* 00435EB0 990D001F */  lwr   $t5, 0x1f($t0)
/* 00435EB4 273946B0 */  addiu $t9, %lo(func_004346B0) # addiu $t9, $t9, 0x46b0
/* 00435EB8 ABAD0020 */  swl   $t5, 0x20($sp)
/* 00435EBC 0320F809 */  jalr  $t9
/* 00435EC0 BBAD0023 */   swr   $t5, 0x23($sp)
/* 00435EC4 10400004 */  beqz  $v0, .L00435ED8
/* 00435EC8 8FBC004C */   lw    $gp, 0x4c($sp)
/* 00435ECC 8F818AD4 */  lw     $at, %got(no_r23)($gp)
/* 00435ED0 100004E4 */  b     .L00437264
/* 00435ED4 A0370000 */   sb    $s7, ($at)
.L00435ED8:
/* 00435ED8 8F8F8044 */  lw    $t7, %got(RO_1000BB4C)($gp)
/* 00435EDC 8F998020 */  lw    $t9, %got(func_004346B0)($gp)
/* 00435EE0 02602025 */  move  $a0, $s3
/* 00435EE4 25EFBB4C */  addiu $t7, %lo(RO_1000BB4C) # addiu $t7, $t7, -0x44b4
/* 00435EE8 89EB0000 */  lwl   $t3, ($t7)
/* 00435EEC 99EB0003 */  lwr   $t3, 3($t7)
/* 00435EF0 273946B0 */  addiu $t9, %lo(func_004346B0) # addiu $t9, $t9, 0x46b0
/* 00435EF4 02801025 */  move  $v0, $s4
/* 00435EF8 ABAB0004 */  swl   $t3, 4($sp)
/* 00435EFC BBAB0007 */  swr   $t3, 7($sp)
/* 00435F00 89F80004 */  lwl   $t8, 4($t7)
/* 00435F04 99F80007 */  lwr   $t8, 7($t7)
/* 00435F08 8FA50004 */  lw    $a1, 4($sp)
/* 00435F0C ABB80008 */  swl   $t8, 8($sp)
/* 00435F10 BBB8000B */  swr   $t8, 0xb($sp)
/* 00435F14 89EB0008 */  lwl   $t3, 8($t7)
/* 00435F18 99EB000B */  lwr   $t3, 0xb($t7)
/* 00435F1C 8FA60008 */  lw    $a2, 8($sp)
/* 00435F20 ABAB000C */  swl   $t3, 0xc($sp)
/* 00435F24 BBAB000F */  swr   $t3, 0xf($sp)
/* 00435F28 89F8000C */  lwl   $t8, 0xc($t7)
/* 00435F2C 99F8000F */  lwr   $t8, 0xf($t7)
/* 00435F30 8FA7000C */  lw    $a3, 0xc($sp)
/* 00435F34 ABB80010 */  swl   $t8, 0x10($sp)
/* 00435F38 BBB80013 */  swr   $t8, 0x13($sp)
/* 00435F3C 89EB0010 */  lwl   $t3, 0x10($t7)
/* 00435F40 99EB0013 */  lwr   $t3, 0x13($t7)
/* 00435F44 ABAB0014 */  swl   $t3, 0x14($sp)
/* 00435F48 BBAB0017 */  swr   $t3, 0x17($sp)
/* 00435F4C 89F80014 */  lwl   $t8, 0x14($t7)
/* 00435F50 99F80017 */  lwr   $t8, 0x17($t7)
/* 00435F54 ABB80018 */  swl   $t8, 0x18($sp)
/* 00435F58 BBB8001B */  swr   $t8, 0x1b($sp)
/* 00435F5C 89EB0018 */  lwl   $t3, 0x18($t7)
/* 00435F60 99EB001B */  lwr   $t3, 0x1b($t7)
/* 00435F64 ABAB001C */  swl   $t3, 0x1c($sp)
/* 00435F68 BBAB001F */  swr   $t3, 0x1f($sp)
/* 00435F6C 89F8001C */  lwl   $t8, 0x1c($t7)
/* 00435F70 99F8001F */  lwr   $t8, 0x1f($t7)
/* 00435F74 ABB80020 */  swl   $t8, 0x20($sp)
/* 00435F78 0320F809 */  jalr  $t9
/* 00435F7C BBB80023 */   swr   $t8, 0x23($sp)
/* 00435F80 10400004 */  beqz  $v0, .L00435F94
/* 00435F84 8FBC004C */   lw    $gp, 0x4c($sp)
/* 00435F88 8F818B14 */  lw     $at, %got(f77_static_flag)($gp)
/* 00435F8C 100004B5 */  b     .L00437264
/* 00435F90 A0370000 */   sb    $s7, ($at)
.L00435F94:
/* 00435F94 8F8C8044 */  lw    $t4, %got(RO_1000BB2C)($gp)
/* 00435F98 8F998020 */  lw    $t9, %got(func_004346B0)($gp)
/* 00435F9C 02602025 */  move  $a0, $s3
/* 00435FA0 258CBB2C */  addiu $t4, %lo(RO_1000BB2C) # addiu $t4, $t4, -0x44d4
/* 00435FA4 898A0000 */  lwl   $t2, ($t4)
/* 00435FA8 998A0003 */  lwr   $t2, 3($t4)
/* 00435FAC 273946B0 */  addiu $t9, %lo(func_004346B0) # addiu $t9, $t9, 0x46b0
/* 00435FB0 02801025 */  move  $v0, $s4
/* 00435FB4 ABAA0004 */  swl   $t2, 4($sp)
/* 00435FB8 BBAA0007 */  swr   $t2, 7($sp)
/* 00435FBC 89890004 */  lwl   $t1, 4($t4)
/* 00435FC0 99890007 */  lwr   $t1, 7($t4)
/* 00435FC4 8FA50004 */  lw    $a1, 4($sp)
/* 00435FC8 ABA90008 */  swl   $t1, 8($sp)
/* 00435FCC BBA9000B */  swr   $t1, 0xb($sp)
/* 00435FD0 898A0008 */  lwl   $t2, 8($t4)
/* 00435FD4 998A000B */  lwr   $t2, 0xb($t4)
/* 00435FD8 8FA60008 */  lw    $a2, 8($sp)
/* 00435FDC ABAA000C */  swl   $t2, 0xc($sp)
/* 00435FE0 BBAA000F */  swr   $t2, 0xf($sp)
/* 00435FE4 8989000C */  lwl   $t1, 0xc($t4)
/* 00435FE8 9989000F */  lwr   $t1, 0xf($t4)
/* 00435FEC 8FA7000C */  lw    $a3, 0xc($sp)
/* 00435FF0 ABA90010 */  swl   $t1, 0x10($sp)
/* 00435FF4 BBA90013 */  swr   $t1, 0x13($sp)
/* 00435FF8 898A0010 */  lwl   $t2, 0x10($t4)
/* 00435FFC 998A0013 */  lwr   $t2, 0x13($t4)
/* 00436000 ABAA0014 */  swl   $t2, 0x14($sp)
/* 00436004 BBAA0017 */  swr   $t2, 0x17($sp)
/* 00436008 89890014 */  lwl   $t1, 0x14($t4)
/* 0043600C 99890017 */  lwr   $t1, 0x17($t4)
/* 00436010 ABA90018 */  swl   $t1, 0x18($sp)
/* 00436014 BBA9001B */  swr   $t1, 0x1b($sp)
/* 00436018 898A0018 */  lwl   $t2, 0x18($t4)
/* 0043601C 998A001B */  lwr   $t2, 0x1b($t4)
/* 00436020 ABAA001C */  swl   $t2, 0x1c($sp)
/* 00436024 BBAA001F */  swr   $t2, 0x1f($sp)
/* 00436028 8989001C */  lwl   $t1, 0x1c($t4)
/* 0043602C 9989001F */  lwr   $t1, 0x1f($t4)
/* 00436030 ABA90020 */  swl   $t1, 0x20($sp)
/* 00436034 0320F809 */  jalr  $t9
/* 00436038 BBA90023 */   swr   $t1, 0x23($sp)
/* 0043603C 10400005 */  beqz  $v0, .L00436054
/* 00436040 8FBC004C */   lw    $gp, 0x4c($sp)
/* 00436044 8F818B24 */  lw     $at, %got(mipsflag)($gp)
/* 00436048 240E0003 */  li    $t6, 3
/* 0043604C 10000485 */  b     .L00437264
/* 00436050 A02E0000 */   sb    $t6, ($at)
.L00436054:
/* 00436054 8F888044 */  lw    $t0, %got(RO_1000BB0C)($gp)
/* 00436058 02602025 */  move  $a0, $s3
/* 0043605C 02801025 */  move  $v0, $s4
/* 00436060 2508BB0C */  addiu $t0, %lo(RO_1000BB0C) # addiu $t0, $t0, -0x44f4
/* 00436064 89190000 */  lwl   $t9, ($t0)
/* 00436068 99190003 */  lwr   $t9, 3($t0)
/* 0043606C ABB90004 */  swl   $t9, 4($sp)
/* 00436070 BBB90007 */  swr   $t9, 7($sp)
/* 00436074 890D0004 */  lwl   $t5, 4($t0)
/* 00436078 990D0007 */  lwr   $t5, 7($t0)
/* 0043607C 8FA50004 */  lw    $a1, 4($sp)
/* 00436080 ABAD0008 */  swl   $t5, 8($sp)
/* 00436084 BBAD000B */  swr   $t5, 0xb($sp)
/* 00436088 89190008 */  lwl   $t9, 8($t0)
/* 0043608C 9919000B */  lwr   $t9, 0xb($t0)
/* 00436090 8FA60008 */  lw    $a2, 8($sp)
/* 00436094 ABB9000C */  swl   $t9, 0xc($sp)
/* 00436098 BBB9000F */  swr   $t9, 0xf($sp)
/* 0043609C 890D000C */  lwl   $t5, 0xc($t0)
/* 004360A0 990D000F */  lwr   $t5, 0xf($t0)
/* 004360A4 8FA7000C */  lw    $a3, 0xc($sp)
/* 004360A8 ABAD0010 */  swl   $t5, 0x10($sp)
/* 004360AC BBAD0013 */  swr   $t5, 0x13($sp)
/* 004360B0 89190010 */  lwl   $t9, 0x10($t0)
/* 004360B4 99190013 */  lwr   $t9, 0x13($t0)
/* 004360B8 ABB90014 */  swl   $t9, 0x14($sp)
/* 004360BC BBB90017 */  swr   $t9, 0x17($sp)
/* 004360C0 890D0014 */  lwl   $t5, 0x14($t0)
/* 004360C4 990D0017 */  lwr   $t5, 0x17($t0)
/* 004360C8 ABAD0018 */  swl   $t5, 0x18($sp)
/* 004360CC BBAD001B */  swr   $t5, 0x1b($sp)
/* 004360D0 89190018 */  lwl   $t9, 0x18($t0)
/* 004360D4 9919001B */  lwr   $t9, 0x1b($t0)
/* 004360D8 ABB9001C */  swl   $t9, 0x1c($sp)
/* 004360DC BBB9001F */  swr   $t9, 0x1f($sp)
/* 004360E0 890D001C */  lwl   $t5, 0x1c($t0)
/* 004360E4 8F998020 */  lw    $t9, %got(func_004346B0)($gp)
/* 004360E8 990D001F */  lwr   $t5, 0x1f($t0)
/* 004360EC 273946B0 */  addiu $t9, %lo(func_004346B0) # addiu $t9, $t9, 0x46b0
/* 004360F0 ABAD0020 */  swl   $t5, 0x20($sp)
/* 004360F4 0320F809 */  jalr  $t9
/* 004360F8 BBAD0023 */   swr   $t5, 0x23($sp)
/* 004360FC 10400004 */  beqz  $v0, .L00436110
/* 00436100 8FBC004C */   lw    $gp, 0x4c($sp)
/* 00436104 8F818B18 */  lw     $at, %got(kpic_flag)($gp)
/* 00436108 10000456 */  b     .L00437264
/* 0043610C A0370000 */   sb    $s7, ($at)
.L00436110:
/* 00436110 8F8F8044 */  lw    $t7, %got(RO_1000BAEC)($gp)
/* 00436114 8F998020 */  lw    $t9, %got(func_004346B0)($gp)
/* 00436118 02602025 */  move  $a0, $s3
/* 0043611C 25EFBAEC */  addiu $t7, %lo(RO_1000BAEC) # addiu $t7, $t7, -0x4514
/* 00436120 89EB0000 */  lwl   $t3, ($t7)
/* 00436124 99EB0003 */  lwr   $t3, 3($t7)
/* 00436128 273946B0 */  addiu $t9, %lo(func_004346B0) # addiu $t9, $t9, 0x46b0
/* 0043612C 02801025 */  move  $v0, $s4
/* 00436130 ABAB0004 */  swl   $t3, 4($sp)
/* 00436134 BBAB0007 */  swr   $t3, 7($sp)
/* 00436138 89F80004 */  lwl   $t8, 4($t7)
/* 0043613C 99F80007 */  lwr   $t8, 7($t7)
/* 00436140 8FA50004 */  lw    $a1, 4($sp)
/* 00436144 ABB80008 */  swl   $t8, 8($sp)
/* 00436148 BBB8000B */  swr   $t8, 0xb($sp)
/* 0043614C 89EB0008 */  lwl   $t3, 8($t7)
/* 00436150 99EB000B */  lwr   $t3, 0xb($t7)
/* 00436154 8FA60008 */  lw    $a2, 8($sp)
/* 00436158 ABAB000C */  swl   $t3, 0xc($sp)
/* 0043615C BBAB000F */  swr   $t3, 0xf($sp)
/* 00436160 89F8000C */  lwl   $t8, 0xc($t7)
/* 00436164 99F8000F */  lwr   $t8, 0xf($t7)
/* 00436168 8FA7000C */  lw    $a3, 0xc($sp)
/* 0043616C ABB80010 */  swl   $t8, 0x10($sp)
/* 00436170 BBB80013 */  swr   $t8, 0x13($sp)
/* 00436174 89EB0010 */  lwl   $t3, 0x10($t7)
/* 00436178 99EB0013 */  lwr   $t3, 0x13($t7)
/* 0043617C ABAB0014 */  swl   $t3, 0x14($sp)
/* 00436180 BBAB0017 */  swr   $t3, 0x17($sp)
/* 00436184 89F80014 */  lwl   $t8, 0x14($t7)
/* 00436188 99F80017 */  lwr   $t8, 0x17($t7)
/* 0043618C ABB80018 */  swl   $t8, 0x18($sp)
/* 00436190 BBB8001B */  swr   $t8, 0x1b($sp)
/* 00436194 89EB0018 */  lwl   $t3, 0x18($t7)
/* 00436198 99EB001B */  lwr   $t3, 0x1b($t7)
/* 0043619C ABAB001C */  swl   $t3, 0x1c($sp)
/* 004361A0 BBAB001F */  swr   $t3, 0x1f($sp)
/* 004361A4 89F8001C */  lwl   $t8, 0x1c($t7)
/* 004361A8 99F8001F */  lwr   $t8, 0x1f($t7)
/* 004361AC ABB80020 */  swl   $t8, 0x20($sp)
/* 004361B0 0320F809 */  jalr  $t9
/* 004361B4 BBB80023 */   swr   $t8, 0x23($sp)
/* 004361B8 1440042A */  bnez  $v0, .L00437264
/* 004361BC 8FBC004C */   lw    $gp, 0x4c($sp)
/* 004361C0 8F8C8044 */  lw    $t4, %got(RO_1000BACC)($gp)
/* 004361C4 8F998020 */  lw    $t9, %got(func_004346B0)($gp)
/* 004361C8 02602025 */  move  $a0, $s3
/* 004361CC 258CBACC */  addiu $t4, %lo(RO_1000BACC) # addiu $t4, $t4, -0x4534
/* 004361D0 898A0000 */  lwl   $t2, ($t4)
/* 004361D4 998A0003 */  lwr   $t2, 3($t4)
/* 004361D8 273946B0 */  addiu $t9, %lo(func_004346B0) # addiu $t9, $t9, 0x46b0
/* 004361DC 02801025 */  move  $v0, $s4
/* 004361E0 ABAA0004 */  swl   $t2, 4($sp)
/* 004361E4 BBAA0007 */  swr   $t2, 7($sp)
/* 004361E8 89890004 */  lwl   $t1, 4($t4)
/* 004361EC 99890007 */  lwr   $t1, 7($t4)
/* 004361F0 8FA50004 */  lw    $a1, 4($sp)
/* 004361F4 ABA90008 */  swl   $t1, 8($sp)
/* 004361F8 BBA9000B */  swr   $t1, 0xb($sp)
/* 004361FC 898A0008 */  lwl   $t2, 8($t4)
/* 00436200 998A000B */  lwr   $t2, 0xb($t4)
/* 00436204 8FA60008 */  lw    $a2, 8($sp)
/* 00436208 ABAA000C */  swl   $t2, 0xc($sp)
/* 0043620C BBAA000F */  swr   $t2, 0xf($sp)
/* 00436210 8989000C */  lwl   $t1, 0xc($t4)
/* 00436214 9989000F */  lwr   $t1, 0xf($t4)
/* 00436218 8FA7000C */  lw    $a3, 0xc($sp)
/* 0043621C ABA90010 */  swl   $t1, 0x10($sp)
/* 00436220 BBA90013 */  swr   $t1, 0x13($sp)
/* 00436224 898A0010 */  lwl   $t2, 0x10($t4)
/* 00436228 998A0013 */  lwr   $t2, 0x13($t4)
/* 0043622C ABAA0014 */  swl   $t2, 0x14($sp)
/* 00436230 BBAA0017 */  swr   $t2, 0x17($sp)
/* 00436234 89890014 */  lwl   $t1, 0x14($t4)
/* 00436238 99890017 */  lwr   $t1, 0x17($t4)
/* 0043623C ABA90018 */  swl   $t1, 0x18($sp)
/* 00436240 BBA9001B */  swr   $t1, 0x1b($sp)
/* 00436244 898A0018 */  lwl   $t2, 0x18($t4)
/* 00436248 998A001B */  lwr   $t2, 0x1b($t4)
/* 0043624C ABAA001C */  swl   $t2, 0x1c($sp)
/* 00436250 BBAA001F */  swr   $t2, 0x1f($sp)
/* 00436254 8989001C */  lwl   $t1, 0x1c($t4)
/* 00436258 9989001F */  lwr   $t1, 0x1f($t4)
/* 0043625C ABA90020 */  swl   $t1, 0x20($sp)
/* 00436260 0320F809 */  jalr  $t9
/* 00436264 BBA90023 */   swr   $t1, 0x23($sp)
/* 00436268 10400004 */  beqz  $v0, .L0043627C
/* 0043626C 8FBC004C */   lw    $gp, 0x4c($sp)
/* 00436270 8F818B1C */  lw     $at, %got(dokpicopt)($gp)
/* 00436274 100003FB */  b     .L00437264
/* 00436278 A0200000 */   sb    $zero, ($at)
.L0043627C:
/* 0043627C 8F8E8044 */  lw    $t6, %got(RO_1000BAAC)($gp)
/* 00436280 8F998020 */  lw    $t9, %got(func_004346B0)($gp)
/* 00436284 02602025 */  move  $a0, $s3
/* 00436288 25CEBAAC */  addiu $t6, %lo(RO_1000BAAC) # addiu $t6, $t6, -0x4554
/* 0043628C 89CD0000 */  lwl   $t5, ($t6)
/* 00436290 99CD0003 */  lwr   $t5, 3($t6)
/* 00436294 273946B0 */  addiu $t9, %lo(func_004346B0) # addiu $t9, $t9, 0x46b0
/* 00436298 02801025 */  move  $v0, $s4
/* 0043629C ABAD0004 */  swl   $t5, 4($sp)
/* 004362A0 BBAD0007 */  swr   $t5, 7($sp)
/* 004362A4 89C80004 */  lwl   $t0, 4($t6)
/* 004362A8 99C80007 */  lwr   $t0, 7($t6)
/* 004362AC 8FA50004 */  lw    $a1, 4($sp)
/* 004362B0 ABA80008 */  swl   $t0, 8($sp)
/* 004362B4 BBA8000B */  swr   $t0, 0xb($sp)
/* 004362B8 89CD0008 */  lwl   $t5, 8($t6)
/* 004362BC 99CD000B */  lwr   $t5, 0xb($t6)
/* 004362C0 8FA60008 */  lw    $a2, 8($sp)
/* 004362C4 ABAD000C */  swl   $t5, 0xc($sp)
/* 004362C8 BBAD000F */  swr   $t5, 0xf($sp)
/* 004362CC 89C8000C */  lwl   $t0, 0xc($t6)
/* 004362D0 99C8000F */  lwr   $t0, 0xf($t6)
/* 004362D4 8FA7000C */  lw    $a3, 0xc($sp)
/* 004362D8 ABA80010 */  swl   $t0, 0x10($sp)
/* 004362DC BBA80013 */  swr   $t0, 0x13($sp)
/* 004362E0 89CD0010 */  lwl   $t5, 0x10($t6)
/* 004362E4 99CD0013 */  lwr   $t5, 0x13($t6)
/* 004362E8 ABAD0014 */  swl   $t5, 0x14($sp)
/* 004362EC BBAD0017 */  swr   $t5, 0x17($sp)
/* 004362F0 89C80014 */  lwl   $t0, 0x14($t6)
/* 004362F4 99C80017 */  lwr   $t0, 0x17($t6)
/* 004362F8 ABA80018 */  swl   $t0, 0x18($sp)
/* 004362FC BBA8001B */  swr   $t0, 0x1b($sp)
/* 00436300 89CD0018 */  lwl   $t5, 0x18($t6)
/* 00436304 99CD001B */  lwr   $t5, 0x1b($t6)
/* 00436308 ABAD001C */  swl   $t5, 0x1c($sp)
/* 0043630C BBAD001F */  swr   $t5, 0x1f($sp)
/* 00436310 89C8001C */  lwl   $t0, 0x1c($t6)
/* 00436314 99C8001F */  lwr   $t0, 0x1f($t6)
/* 00436318 ABA80020 */  swl   $t0, 0x20($sp)
/* 0043631C 0320F809 */  jalr  $t9
/* 00436320 BBA80023 */   swr   $t0, 0x23($sp)
/* 00436324 10400005 */  beqz  $v0, .L0043633C
/* 00436328 8FBC004C */   lw    $gp, 0x4c($sp)
/* 0043632C 8F818B24 */  lw     $at, %got(mipsflag)($gp)
/* 00436330 24190002 */  li    $t9, 2
/* 00436334 100003CB */  b     .L00437264
/* 00436338 A0390000 */   sb    $t9, ($at)
.L0043633C:
/* 0043633C 8F8F8044 */  lw    $t7, %got(RO_1000BA8C)($gp)
/* 00436340 8F998020 */  lw    $t9, %got(func_004346B0)($gp)
/* 00436344 02602025 */  move  $a0, $s3
/* 00436348 25EFBA8C */  addiu $t7, %lo(RO_1000BA8C) # addiu $t7, $t7, -0x4574
/* 0043634C 89EB0000 */  lwl   $t3, ($t7)
/* 00436350 99EB0003 */  lwr   $t3, 3($t7)
/* 00436354 273946B0 */  addiu $t9, %lo(func_004346B0) # addiu $t9, $t9, 0x46b0
/* 00436358 02801025 */  move  $v0, $s4
/* 0043635C ABAB0004 */  swl   $t3, 4($sp)
/* 00436360 BBAB0007 */  swr   $t3, 7($sp)
/* 00436364 89F80004 */  lwl   $t8, 4($t7)
/* 00436368 99F80007 */  lwr   $t8, 7($t7)
/* 0043636C 8FA50004 */  lw    $a1, 4($sp)
/* 00436370 ABB80008 */  swl   $t8, 8($sp)
/* 00436374 BBB8000B */  swr   $t8, 0xb($sp)
/* 00436378 89EB0008 */  lwl   $t3, 8($t7)
/* 0043637C 99EB000B */  lwr   $t3, 0xb($t7)
/* 00436380 8FA60008 */  lw    $a2, 8($sp)
/* 00436384 ABAB000C */  swl   $t3, 0xc($sp)
/* 00436388 BBAB000F */  swr   $t3, 0xf($sp)
/* 0043638C 89F8000C */  lwl   $t8, 0xc($t7)
/* 00436390 99F8000F */  lwr   $t8, 0xf($t7)
/* 00436394 8FA7000C */  lw    $a3, 0xc($sp)
/* 00436398 ABB80010 */  swl   $t8, 0x10($sp)
/* 0043639C BBB80013 */  swr   $t8, 0x13($sp)
/* 004363A0 89EB0010 */  lwl   $t3, 0x10($t7)
/* 004363A4 99EB0013 */  lwr   $t3, 0x13($t7)
/* 004363A8 ABAB0014 */  swl   $t3, 0x14($sp)
/* 004363AC BBAB0017 */  swr   $t3, 0x17($sp)
/* 004363B0 89F80014 */  lwl   $t8, 0x14($t7)
/* 004363B4 99F80017 */  lwr   $t8, 0x17($t7)
/* 004363B8 ABB80018 */  swl   $t8, 0x18($sp)
/* 004363BC BBB8001B */  swr   $t8, 0x1b($sp)
/* 004363C0 89EB0018 */  lwl   $t3, 0x18($t7)
/* 004363C4 99EB001B */  lwr   $t3, 0x1b($t7)
/* 004363C8 ABAB001C */  swl   $t3, 0x1c($sp)
/* 004363CC BBAB001F */  swr   $t3, 0x1f($sp)
/* 004363D0 89F8001C */  lwl   $t8, 0x1c($t7)
/* 004363D4 99F8001F */  lwr   $t8, 0x1f($t7)
/* 004363D8 ABB80020 */  swl   $t8, 0x20($sp)
/* 004363DC 0320F809 */  jalr  $t9
/* 004363E0 BBB80023 */   swr   $t8, 0x23($sp)
/* 004363E4 1440039F */  bnez  $v0, .L00437264
/* 004363E8 8FBC004C */   lw    $gp, 0x4c($sp)
/* 004363EC 8F8C8044 */  lw    $t4, %got(RO_1000BA6C)($gp)
/* 004363F0 8F998020 */  lw    $t9, %got(func_004346B0)($gp)
/* 004363F4 02602025 */  move  $a0, $s3
/* 004363F8 258CBA6C */  addiu $t4, %lo(RO_1000BA6C) # addiu $t4, $t4, -0x4594
/* 004363FC 898A0000 */  lwl   $t2, ($t4)
/* 00436400 998A0003 */  lwr   $t2, 3($t4)
/* 00436404 273946B0 */  addiu $t9, %lo(func_004346B0) # addiu $t9, $t9, 0x46b0
/* 00436408 02801025 */  move  $v0, $s4
/* 0043640C ABAA0004 */  swl   $t2, 4($sp)
/* 00436410 BBAA0007 */  swr   $t2, 7($sp)
/* 00436414 89890004 */  lwl   $t1, 4($t4)
/* 00436418 99890007 */  lwr   $t1, 7($t4)
/* 0043641C 8FA50004 */  lw    $a1, 4($sp)
/* 00436420 ABA90008 */  swl   $t1, 8($sp)
/* 00436424 BBA9000B */  swr   $t1, 0xb($sp)
/* 00436428 898A0008 */  lwl   $t2, 8($t4)
/* 0043642C 998A000B */  lwr   $t2, 0xb($t4)
/* 00436430 8FA60008 */  lw    $a2, 8($sp)
/* 00436434 ABAA000C */  swl   $t2, 0xc($sp)
/* 00436438 BBAA000F */  swr   $t2, 0xf($sp)
/* 0043643C 8989000C */  lwl   $t1, 0xc($t4)
/* 00436440 9989000F */  lwr   $t1, 0xf($t4)
/* 00436444 8FA7000C */  lw    $a3, 0xc($sp)
/* 00436448 ABA90010 */  swl   $t1, 0x10($sp)
/* 0043644C BBA90013 */  swr   $t1, 0x13($sp)
/* 00436450 898A0010 */  lwl   $t2, 0x10($t4)
/* 00436454 998A0013 */  lwr   $t2, 0x13($t4)
/* 00436458 ABAA0014 */  swl   $t2, 0x14($sp)
/* 0043645C BBAA0017 */  swr   $t2, 0x17($sp)
/* 00436460 89890014 */  lwl   $t1, 0x14($t4)
/* 00436464 99890017 */  lwr   $t1, 0x17($t4)
/* 00436468 ABA90018 */  swl   $t1, 0x18($sp)
/* 0043646C BBA9001B */  swr   $t1, 0x1b($sp)
/* 00436470 898A0018 */  lwl   $t2, 0x18($t4)
/* 00436474 998A001B */  lwr   $t2, 0x1b($t4)
/* 00436478 ABAA001C */  swl   $t2, 0x1c($sp)
/* 0043647C BBAA001F */  swr   $t2, 0x1f($sp)
/* 00436480 8989001C */  lwl   $t1, 0x1c($t4)
/* 00436484 9989001F */  lwr   $t1, 0x1f($t4)
/* 00436488 ABA90020 */  swl   $t1, 0x20($sp)
/* 0043648C 0320F809 */  jalr  $t9
/* 00436490 BBA90023 */   swr   $t1, 0x23($sp)
/* 00436494 14400373 */  bnez  $v0, .L00437264
/* 00436498 8FBC004C */   lw    $gp, 0x4c($sp)
/* 0043649C 8F8E8044 */  lw    $t6, %got(RO_1000BA4C)($gp)
/* 004364A0 8F998020 */  lw    $t9, %got(func_004346B0)($gp)
/* 004364A4 02602025 */  move  $a0, $s3
/* 004364A8 25CEBA4C */  addiu $t6, %lo(RO_1000BA4C) # addiu $t6, $t6, -0x45b4
/* 004364AC 89CD0000 */  lwl   $t5, ($t6)
/* 004364B0 99CD0003 */  lwr   $t5, 3($t6)
/* 004364B4 273946B0 */  addiu $t9, %lo(func_004346B0) # addiu $t9, $t9, 0x46b0
/* 004364B8 02801025 */  move  $v0, $s4
/* 004364BC ABAD0004 */  swl   $t5, 4($sp)
/* 004364C0 BBAD0007 */  swr   $t5, 7($sp)
/* 004364C4 89C80004 */  lwl   $t0, 4($t6)
/* 004364C8 99C80007 */  lwr   $t0, 7($t6)
/* 004364CC 8FA50004 */  lw    $a1, 4($sp)
/* 004364D0 ABA80008 */  swl   $t0, 8($sp)
/* 004364D4 BBA8000B */  swr   $t0, 0xb($sp)
/* 004364D8 89CD0008 */  lwl   $t5, 8($t6)
/* 004364DC 99CD000B */  lwr   $t5, 0xb($t6)
/* 004364E0 8FA60008 */  lw    $a2, 8($sp)
/* 004364E4 ABAD000C */  swl   $t5, 0xc($sp)
/* 004364E8 BBAD000F */  swr   $t5, 0xf($sp)
/* 004364EC 89C8000C */  lwl   $t0, 0xc($t6)
/* 004364F0 99C8000F */  lwr   $t0, 0xf($t6)
/* 004364F4 8FA7000C */  lw    $a3, 0xc($sp)
/* 004364F8 ABA80010 */  swl   $t0, 0x10($sp)
/* 004364FC BBA80013 */  swr   $t0, 0x13($sp)
/* 00436500 89CD0010 */  lwl   $t5, 0x10($t6)
/* 00436504 99CD0013 */  lwr   $t5, 0x13($t6)
/* 00436508 ABAD0014 */  swl   $t5, 0x14($sp)
/* 0043650C BBAD0017 */  swr   $t5, 0x17($sp)
/* 00436510 89C80014 */  lwl   $t0, 0x14($t6)
/* 00436514 99C80017 */  lwr   $t0, 0x17($t6)
/* 00436518 ABA80018 */  swl   $t0, 0x18($sp)
/* 0043651C BBA8001B */  swr   $t0, 0x1b($sp)
/* 00436520 89CD0018 */  lwl   $t5, 0x18($t6)
/* 00436524 99CD001B */  lwr   $t5, 0x1b($t6)
/* 00436528 ABAD001C */  swl   $t5, 0x1c($sp)
/* 0043652C BBAD001F */  swr   $t5, 0x1f($sp)
/* 00436530 89C8001C */  lwl   $t0, 0x1c($t6)
/* 00436534 99C8001F */  lwr   $t0, 0x1f($t6)
/* 00436538 ABA80020 */  swl   $t0, 0x20($sp)
/* 0043653C 0320F809 */  jalr  $t9
/* 00436540 BBA80023 */   swr   $t0, 0x23($sp)
/* 00436544 10400007 */  beqz  $v0, .L00436564
/* 00436548 8FBC004C */   lw    $gp, 0x4c($sp)
/* 0043654C 8F818B2C */  lw     $at, %got(dwopcode)($gp)
/* 00436550 24190008 */  li    $t9, 8
/* 00436554 A0370000 */  sb    $s7, ($at)
/* 00436558 8F818B34 */  lw     $at, %got(int_reg_size)($gp)
/* 0043655C 10000341 */  b     .L00437264
/* 00436560 AC390000 */   sw    $t9, ($at)
.L00436564:
/* 00436564 8F8F8044 */  lw    $t7, %got(RO_1000BA2C)($gp)
/* 00436568 8F998020 */  lw    $t9, %got(func_004346B0)($gp)
/* 0043656C 02602025 */  move  $a0, $s3
/* 00436570 25EFBA2C */  addiu $t7, %lo(RO_1000BA2C) # addiu $t7, $t7, -0x45d4
/* 00436574 89EB0000 */  lwl   $t3, ($t7)
/* 00436578 99EB0003 */  lwr   $t3, 3($t7)
/* 0043657C 273946B0 */  addiu $t9, %lo(func_004346B0) # addiu $t9, $t9, 0x46b0
/* 00436580 02801025 */  move  $v0, $s4
/* 00436584 ABAB0004 */  swl   $t3, 4($sp)
/* 00436588 BBAB0007 */  swr   $t3, 7($sp)
/* 0043658C 89F80004 */  lwl   $t8, 4($t7)
/* 00436590 99F80007 */  lwr   $t8, 7($t7)
/* 00436594 8FA50004 */  lw    $a1, 4($sp)
/* 00436598 ABB80008 */  swl   $t8, 8($sp)
/* 0043659C BBB8000B */  swr   $t8, 0xb($sp)
/* 004365A0 89EB0008 */  lwl   $t3, 8($t7)
/* 004365A4 99EB000B */  lwr   $t3, 0xb($t7)
/* 004365A8 8FA60008 */  lw    $a2, 8($sp)
/* 004365AC ABAB000C */  swl   $t3, 0xc($sp)
/* 004365B0 BBAB000F */  swr   $t3, 0xf($sp)
/* 004365B4 89F8000C */  lwl   $t8, 0xc($t7)
/* 004365B8 99F8000F */  lwr   $t8, 0xf($t7)
/* 004365BC 8FA7000C */  lw    $a3, 0xc($sp)
/* 004365C0 ABB80010 */  swl   $t8, 0x10($sp)
/* 004365C4 BBB80013 */  swr   $t8, 0x13($sp)
/* 004365C8 89EB0010 */  lwl   $t3, 0x10($t7)
/* 004365CC 99EB0013 */  lwr   $t3, 0x13($t7)
/* 004365D0 ABAB0014 */  swl   $t3, 0x14($sp)
/* 004365D4 BBAB0017 */  swr   $t3, 0x17($sp)
/* 004365D8 89F80014 */  lwl   $t8, 0x14($t7)
/* 004365DC 99F80017 */  lwr   $t8, 0x17($t7)
/* 004365E0 ABB80018 */  swl   $t8, 0x18($sp)
/* 004365E4 BBB8001B */  swr   $t8, 0x1b($sp)
/* 004365E8 89EB0018 */  lwl   $t3, 0x18($t7)
/* 004365EC 99EB001B */  lwr   $t3, 0x1b($t7)
/* 004365F0 ABAB001C */  swl   $t3, 0x1c($sp)
/* 004365F4 BBAB001F */  swr   $t3, 0x1f($sp)
/* 004365F8 89F8001C */  lwl   $t8, 0x1c($t7)
/* 004365FC 99F8001F */  lwr   $t8, 0x1f($t7)
/* 00436600 ABB80020 */  swl   $t8, 0x20($sp)
/* 00436604 0320F809 */  jalr  $t9
/* 00436608 BBB80023 */   swr   $t8, 0x23($sp)
/* 0043660C 10400009 */  beqz  $v0, .L00436634
/* 00436610 8FBC004C */   lw    $gp, 0x4c($sp)
/* 00436614 8F818B28 */  lw     $at, %got(mips3_64data)($gp)
/* 00436618 240C0008 */  li    $t4, 8
/* 0043661C A0370000 */  sb    $s7, ($at)
/* 00436620 8F818B2C */  lw     $at, %got(dwopcode)($gp)
/* 00436624 A0370000 */  sb    $s7, ($at)
/* 00436628 8F818B34 */  lw     $at, %got(int_reg_size)($gp)
/* 0043662C 1000030D */  b     .L00437264
/* 00436630 AC2C0000 */   sw    $t4, ($at)
.L00436634:
/* 00436634 8F898044 */  lw    $t1, %got(RO_1000BA0C)($gp)
/* 00436638 8F998020 */  lw    $t9, %got(func_004346B0)($gp)
/* 0043663C 02602025 */  move  $a0, $s3
/* 00436640 2529BA0C */  addiu $t1, %lo(RO_1000BA0C) # addiu $t1, $t1, -0x45f4
/* 00436644 892E0000 */  lwl   $t6, ($t1)
/* 00436648 992E0003 */  lwr   $t6, 3($t1)
/* 0043664C 273946B0 */  addiu $t9, %lo(func_004346B0) # addiu $t9, $t9, 0x46b0
/* 00436650 02801025 */  move  $v0, $s4
/* 00436654 ABAE0004 */  swl   $t6, 4($sp)
/* 00436658 BBAE0007 */  swr   $t6, 7($sp)
/* 0043665C 892A0004 */  lwl   $t2, 4($t1)
/* 00436660 992A0007 */  lwr   $t2, 7($t1)
/* 00436664 8FA50004 */  lw    $a1, 4($sp)
/* 00436668 ABAA0008 */  swl   $t2, 8($sp)
/* 0043666C BBAA000B */  swr   $t2, 0xb($sp)
/* 00436670 892E0008 */  lwl   $t6, 8($t1)
/* 00436674 992E000B */  lwr   $t6, 0xb($t1)
/* 00436678 8FA60008 */  lw    $a2, 8($sp)
/* 0043667C ABAE000C */  swl   $t6, 0xc($sp)
/* 00436680 BBAE000F */  swr   $t6, 0xf($sp)
/* 00436684 892A000C */  lwl   $t2, 0xc($t1)
/* 00436688 992A000F */  lwr   $t2, 0xf($t1)
/* 0043668C 8FA7000C */  lw    $a3, 0xc($sp)
/* 00436690 ABAA0010 */  swl   $t2, 0x10($sp)
/* 00436694 BBAA0013 */  swr   $t2, 0x13($sp)
/* 00436698 892E0010 */  lwl   $t6, 0x10($t1)
/* 0043669C 992E0013 */  lwr   $t6, 0x13($t1)
/* 004366A0 ABAE0014 */  swl   $t6, 0x14($sp)
/* 004366A4 BBAE0017 */  swr   $t6, 0x17($sp)
/* 004366A8 892A0014 */  lwl   $t2, 0x14($t1)
/* 004366AC 992A0017 */  lwr   $t2, 0x17($t1)
/* 004366B0 ABAA0018 */  swl   $t2, 0x18($sp)
/* 004366B4 BBAA001B */  swr   $t2, 0x1b($sp)
/* 004366B8 892E0018 */  lwl   $t6, 0x18($t1)
/* 004366BC 992E001B */  lwr   $t6, 0x1b($t1)
/* 004366C0 ABAE001C */  swl   $t6, 0x1c($sp)
/* 004366C4 BBAE001F */  swr   $t6, 0x1f($sp)
/* 004366C8 892A001C */  lwl   $t2, 0x1c($t1)
/* 004366CC 992A001F */  lwr   $t2, 0x1f($t1)
/* 004366D0 ABAA0020 */  swl   $t2, 0x20($sp)
/* 004366D4 0320F809 */  jalr  $t9
/* 004366D8 BBAA0023 */   swr   $t2, 0x23($sp)
/* 004366DC 10400004 */  beqz  $v0, .L004366F0
/* 004366E0 8FBC004C */   lw    $gp, 0x4c($sp)
/* 004366E4 8F818B4C */  lw     $at, %got(strictieee)($gp)
/* 004366E8 100002DE */  b     .L00437264
/* 004366EC A0370000 */   sb    $s7, ($at)
.L004366F0:
/* 004366F0 8F888044 */  lw    $t0, %got(RO_1000B9EC)($gp)
/* 004366F4 02602025 */  move  $a0, $s3
/* 004366F8 02801025 */  move  $v0, $s4
/* 004366FC 2508B9EC */  addiu $t0, %lo(RO_1000B9EC) # addiu $t0, $t0, -0x4614
/* 00436700 89190000 */  lwl   $t9, ($t0)
/* 00436704 99190003 */  lwr   $t9, 3($t0)
/* 00436708 ABB90004 */  swl   $t9, 4($sp)
/* 0043670C BBB90007 */  swr   $t9, 7($sp)
/* 00436710 890D0004 */  lwl   $t5, 4($t0)
/* 00436714 990D0007 */  lwr   $t5, 7($t0)
/* 00436718 8FA50004 */  lw    $a1, 4($sp)
/* 0043671C ABAD0008 */  swl   $t5, 8($sp)
/* 00436720 BBAD000B */  swr   $t5, 0xb($sp)
/* 00436724 89190008 */  lwl   $t9, 8($t0)
/* 00436728 9919000B */  lwr   $t9, 0xb($t0)
/* 0043672C 8FA60008 */  lw    $a2, 8($sp)
/* 00436730 ABB9000C */  swl   $t9, 0xc($sp)
/* 00436734 BBB9000F */  swr   $t9, 0xf($sp)
/* 00436738 890D000C */  lwl   $t5, 0xc($t0)
/* 0043673C 990D000F */  lwr   $t5, 0xf($t0)
/* 00436740 8FA7000C */  lw    $a3, 0xc($sp)
/* 00436744 ABAD0010 */  swl   $t5, 0x10($sp)
/* 00436748 BBAD0013 */  swr   $t5, 0x13($sp)
/* 0043674C 89190010 */  lwl   $t9, 0x10($t0)
/* 00436750 99190013 */  lwr   $t9, 0x13($t0)
/* 00436754 ABB90014 */  swl   $t9, 0x14($sp)
/* 00436758 BBB90017 */  swr   $t9, 0x17($sp)
/* 0043675C 890D0014 */  lwl   $t5, 0x14($t0)
/* 00436760 990D0017 */  lwr   $t5, 0x17($t0)
/* 00436764 ABAD0018 */  swl   $t5, 0x18($sp)
/* 00436768 BBAD001B */  swr   $t5, 0x1b($sp)
/* 0043676C 89190018 */  lwl   $t9, 0x18($t0)
/* 00436770 9919001B */  lwr   $t9, 0x1b($t0)
/* 00436774 ABB9001C */  swl   $t9, 0x1c($sp)
/* 00436778 BBB9001F */  swr   $t9, 0x1f($sp)
/* 0043677C 890D001C */  lwl   $t5, 0x1c($t0)
/* 00436780 8F998020 */  lw    $t9, %got(func_004346B0)($gp)
/* 00436784 990D001F */  lwr   $t5, 0x1f($t0)
/* 00436788 273946B0 */  addiu $t9, %lo(func_004346B0) # addiu $t9, $t9, 0x46b0
/* 0043678C ABAD0020 */  swl   $t5, 0x20($sp)
/* 00436790 0320F809 */  jalr  $t9
/* 00436794 BBAD0023 */   swr   $t5, 0x23($sp)
/* 00436798 10400004 */  beqz  $v0, .L004367AC
/* 0043679C 8FBC004C */   lw    $gp, 0x4c($sp)
/* 004367A0 8F818B50 */  lw     $at, %got(fp32reg)($gp)
/* 004367A4 100002AF */  b     .L00437264
/* 004367A8 A0370000 */   sb    $s7, ($at)
.L004367AC:
/* 004367AC 8F8F8044 */  lw    $t7, %got(RO_1000B9CC)($gp)
/* 004367B0 8F998020 */  lw    $t9, %got(func_004346B0)($gp)
/* 004367B4 02602025 */  move  $a0, $s3
/* 004367B8 25EFB9CC */  addiu $t7, %lo(RO_1000B9CC) # addiu $t7, $t7, -0x4634
/* 004367BC 89EB0000 */  lwl   $t3, ($t7)
/* 004367C0 99EB0003 */  lwr   $t3, 3($t7)
/* 004367C4 273946B0 */  addiu $t9, %lo(func_004346B0) # addiu $t9, $t9, 0x46b0
/* 004367C8 02801025 */  move  $v0, $s4
/* 004367CC ABAB0004 */  swl   $t3, 4($sp)
/* 004367D0 BBAB0007 */  swr   $t3, 7($sp)
/* 004367D4 89F80004 */  lwl   $t8, 4($t7)
/* 004367D8 99F80007 */  lwr   $t8, 7($t7)
/* 004367DC 8FA50004 */  lw    $a1, 4($sp)
/* 004367E0 ABB80008 */  swl   $t8, 8($sp)
/* 004367E4 BBB8000B */  swr   $t8, 0xb($sp)
/* 004367E8 89EB0008 */  lwl   $t3, 8($t7)
/* 004367EC 99EB000B */  lwr   $t3, 0xb($t7)
/* 004367F0 8FA60008 */  lw    $a2, 8($sp)
/* 004367F4 ABAB000C */  swl   $t3, 0xc($sp)
/* 004367F8 BBAB000F */  swr   $t3, 0xf($sp)
/* 004367FC 89F8000C */  lwl   $t8, 0xc($t7)
/* 00436800 99F8000F */  lwr   $t8, 0xf($t7)
/* 00436804 8FA7000C */  lw    $a3, 0xc($sp)
/* 00436808 ABB80010 */  swl   $t8, 0x10($sp)
/* 0043680C BBB80013 */  swr   $t8, 0x13($sp)
/* 00436810 89EB0010 */  lwl   $t3, 0x10($t7)
/* 00436814 99EB0013 */  lwr   $t3, 0x13($t7)
/* 00436818 ABAB0014 */  swl   $t3, 0x14($sp)
/* 0043681C BBAB0017 */  swr   $t3, 0x17($sp)
/* 00436820 89F80014 */  lwl   $t8, 0x14($t7)
/* 00436824 99F80017 */  lwr   $t8, 0x17($t7)
/* 00436828 ABB80018 */  swl   $t8, 0x18($sp)
/* 0043682C BBB8001B */  swr   $t8, 0x1b($sp)
/* 00436830 89EB0018 */  lwl   $t3, 0x18($t7)
/* 00436834 99EB001B */  lwr   $t3, 0x1b($t7)
/* 00436838 ABAB001C */  swl   $t3, 0x1c($sp)
/* 0043683C BBAB001F */  swr   $t3, 0x1f($sp)
/* 00436840 89F8001C */  lwl   $t8, 0x1c($t7)
/* 00436844 99F8001F */  lwr   $t8, 0x1f($t7)
/* 00436848 ABB80020 */  swl   $t8, 0x20($sp)
/* 0043684C 0320F809 */  jalr  $t9
/* 00436850 BBB80023 */   swr   $t8, 0x23($sp)
/* 00436854 14400283 */  bnez  $v0, .L00437264
/* 00436858 8FBC004C */   lw    $gp, 0x4c($sp)
/* 0043685C 8F8C8044 */  lw    $t4, %got(RO_1000B9AC)($gp)
/* 00436860 8F998020 */  lw    $t9, %got(func_004346B0)($gp)
/* 00436864 02602025 */  move  $a0, $s3
/* 00436868 258CB9AC */  addiu $t4, %lo(RO_1000B9AC) # addiu $t4, $t4, -0x4654
/* 0043686C 898A0000 */  lwl   $t2, ($t4)
/* 00436870 998A0003 */  lwr   $t2, 3($t4)
/* 00436874 273946B0 */  addiu $t9, %lo(func_004346B0) # addiu $t9, $t9, 0x46b0
/* 00436878 02801025 */  move  $v0, $s4
/* 0043687C ABAA0004 */  swl   $t2, 4($sp)
/* 00436880 BBAA0007 */  swr   $t2, 7($sp)
/* 00436884 89890004 */  lwl   $t1, 4($t4)
/* 00436888 99890007 */  lwr   $t1, 7($t4)
/* 0043688C 8FA50004 */  lw    $a1, 4($sp)
/* 00436890 ABA90008 */  swl   $t1, 8($sp)
/* 00436894 BBA9000B */  swr   $t1, 0xb($sp)
/* 00436898 898A0008 */  lwl   $t2, 8($t4)
/* 0043689C 998A000B */  lwr   $t2, 0xb($t4)
/* 004368A0 8FA60008 */  lw    $a2, 8($sp)
/* 004368A4 ABAA000C */  swl   $t2, 0xc($sp)
/* 004368A8 BBAA000F */  swr   $t2, 0xf($sp)
/* 004368AC 8989000C */  lwl   $t1, 0xc($t4)
/* 004368B0 9989000F */  lwr   $t1, 0xf($t4)
/* 004368B4 8FA7000C */  lw    $a3, 0xc($sp)
/* 004368B8 ABA90010 */  swl   $t1, 0x10($sp)
/* 004368BC BBA90013 */  swr   $t1, 0x13($sp)
/* 004368C0 898A0010 */  lwl   $t2, 0x10($t4)
/* 004368C4 998A0013 */  lwr   $t2, 0x13($t4)
/* 004368C8 ABAA0014 */  swl   $t2, 0x14($sp)
/* 004368CC BBAA0017 */  swr   $t2, 0x17($sp)
/* 004368D0 89890014 */  lwl   $t1, 0x14($t4)
/* 004368D4 99890017 */  lwr   $t1, 0x17($t4)
/* 004368D8 ABA90018 */  swl   $t1, 0x18($sp)
/* 004368DC BBA9001B */  swr   $t1, 0x1b($sp)
/* 004368E0 898A0018 */  lwl   $t2, 0x18($t4)
/* 004368E4 998A001B */  lwr   $t2, 0x1b($t4)
/* 004368E8 ABAA001C */  swl   $t2, 0x1c($sp)
/* 004368EC BBAA001F */  swr   $t2, 0x1f($sp)
/* 004368F0 8989001C */  lwl   $t1, 0x1c($t4)
/* 004368F4 9989001F */  lwr   $t1, 0x1f($t4)
/* 004368F8 ABA90020 */  swl   $t1, 0x20($sp)
/* 004368FC 0320F809 */  jalr  $t9
/* 00436900 BBA90023 */   swr   $t1, 0x23($sp)
/* 00436904 10400012 */  beqz  $v0, .L00436950
/* 00436908 8FBC004C */   lw    $gp, 0x4c($sp)
/* 0043690C 8F998890 */  lw    $t9, %call16(get_arg)($gp)
/* 00436910 26B50001 */  addiu $s5, $s5, 1
/* 00436914 02A02025 */  move  $a0, $s5
/* 00436918 27A50CB8 */  addiu $a1, $sp, 0xcb8
/* 0043691C 0320F809 */  jalr  $t9
/* 00436920 24060400 */   li    $a2, 1024
/* 00436924 8FBC004C */  lw    $gp, 0x4c($sp)
/* 00436928 27A40CB8 */  addiu $a0, $sp, 0xcb8
/* 0043692C 02801025 */  move  $v0, $s4
/* 00436930 8F998020 */  lw    $t9, %got(func_004345A8)($gp)
/* 00436934 273945A8 */  addiu $t9, %lo(func_004345A8) # addiu $t9, $t9, 0x45a8
/* 00436938 0320F809 */  jalr  $t9
/* 0043693C 00000000 */   nop   
/* 00436940 8FBC004C */  lw    $gp, 0x4c($sp)
/* 00436944 8F818A74 */  lw     $at, %got(varreflimit)($gp)
/* 00436948 10000246 */  b     .L00437264
/* 0043694C AC220000 */   sw    $v0, ($at)
.L00436950:
/* 00436950 8F8E8044 */  lw    $t6, %got(RO_1000B98C)($gp)
/* 00436954 8F998020 */  lw    $t9, %got(func_004346B0)($gp)
/* 00436958 02602025 */  move  $a0, $s3
/* 0043695C 25CEB98C */  addiu $t6, %lo(RO_1000B98C) # addiu $t6, $t6, -0x4674
/* 00436960 89CD0000 */  lwl   $t5, ($t6)
/* 00436964 99CD0003 */  lwr   $t5, 3($t6)
/* 00436968 273946B0 */  addiu $t9, %lo(func_004346B0) # addiu $t9, $t9, 0x46b0
/* 0043696C 02801025 */  move  $v0, $s4
/* 00436970 ABAD0004 */  swl   $t5, 4($sp)
/* 00436974 BBAD0007 */  swr   $t5, 7($sp)
/* 00436978 89C80004 */  lwl   $t0, 4($t6)
/* 0043697C 99C80007 */  lwr   $t0, 7($t6)
/* 00436980 8FA50004 */  lw    $a1, 4($sp)
/* 00436984 ABA80008 */  swl   $t0, 8($sp)
/* 00436988 BBA8000B */  swr   $t0, 0xb($sp)
/* 0043698C 89CD0008 */  lwl   $t5, 8($t6)
/* 00436990 99CD000B */  lwr   $t5, 0xb($t6)
/* 00436994 8FA60008 */  lw    $a2, 8($sp)
/* 00436998 ABAD000C */  swl   $t5, 0xc($sp)
/* 0043699C BBAD000F */  swr   $t5, 0xf($sp)
/* 004369A0 89C8000C */  lwl   $t0, 0xc($t6)
/* 004369A4 99C8000F */  lwr   $t0, 0xf($t6)
/* 004369A8 8FA7000C */  lw    $a3, 0xc($sp)
/* 004369AC ABA80010 */  swl   $t0, 0x10($sp)
/* 004369B0 BBA80013 */  swr   $t0, 0x13($sp)
/* 004369B4 89CD0010 */  lwl   $t5, 0x10($t6)
/* 004369B8 99CD0013 */  lwr   $t5, 0x13($t6)
/* 004369BC ABAD0014 */  swl   $t5, 0x14($sp)
/* 004369C0 BBAD0017 */  swr   $t5, 0x17($sp)
/* 004369C4 89C80014 */  lwl   $t0, 0x14($t6)
/* 004369C8 99C80017 */  lwr   $t0, 0x17($t6)
/* 004369CC ABA80018 */  swl   $t0, 0x18($sp)
/* 004369D0 BBA8001B */  swr   $t0, 0x1b($sp)
/* 004369D4 89CD0018 */  lwl   $t5, 0x18($t6)
/* 004369D8 99CD001B */  lwr   $t5, 0x1b($t6)
/* 004369DC ABAD001C */  swl   $t5, 0x1c($sp)
/* 004369E0 BBAD001F */  swr   $t5, 0x1f($sp)
/* 004369E4 89C8001C */  lwl   $t0, 0x1c($t6)
/* 004369E8 99C8001F */  lwr   $t0, 0x1f($t6)
/* 004369EC ABA80020 */  swl   $t0, 0x20($sp)
/* 004369F0 0320F809 */  jalr  $t9
/* 004369F4 BBA80023 */   swr   $t0, 0x23($sp)
/* 004369F8 10400012 */  beqz  $v0, .L00436A44
/* 004369FC 8FBC004C */   lw    $gp, 0x4c($sp)
/* 00436A00 8F998890 */  lw    $t9, %call16(get_arg)($gp)
/* 00436A04 26B50001 */  addiu $s5, $s5, 1
/* 00436A08 02A02025 */  move  $a0, $s5
/* 00436A0C 27A50CB8 */  addiu $a1, $sp, 0xcb8
/* 00436A10 0320F809 */  jalr  $t9
/* 00436A14 24060400 */   li    $a2, 1024
/* 00436A18 8FBC004C */  lw    $gp, 0x4c($sp)
/* 00436A1C 27A40CB8 */  addiu $a0, $sp, 0xcb8
/* 00436A20 02801025 */  move  $v0, $s4
/* 00436A24 8F998020 */  lw    $t9, %got(func_004345A8)($gp)
/* 00436A28 273945A8 */  addiu $t9, %lo(func_004345A8) # addiu $t9, $t9, 0x45a8
/* 00436A2C 0320F809 */  jalr  $t9
/* 00436A30 00000000 */   nop   
/* 00436A34 8FBC004C */  lw    $gp, 0x4c($sp)
/* 00436A38 8F818B68 */  lw     $at, %got(sizethreshold)($gp)
/* 00436A3C 10000209 */  b     .L00437264
/* 00436A40 AC220000 */   sw    $v0, ($at)
.L00436A44:
/* 00436A44 8F998044 */  lw    $t9, %got(RO_1000B96C)($gp)
/* 00436A48 02602025 */  move  $a0, $s3
/* 00436A4C 02801025 */  move  $v0, $s4
/* 00436A50 2739B96C */  addiu $t9, %lo(RO_1000B96C) # addiu $t9, $t9, -0x4694
/* 00436A54 8B380000 */  lwl   $t8, ($t9)
/* 00436A58 9B380003 */  lwr   $t8, 3($t9)
/* 00436A5C ABB80004 */  swl   $t8, 4($sp)
/* 00436A60 BBB80007 */  swr   $t8, 7($sp)
/* 00436A64 8B2F0004 */  lwl   $t7, 4($t9)
/* 00436A68 9B2F0007 */  lwr   $t7, 7($t9)
/* 00436A6C 8FA50004 */  lw    $a1, 4($sp)
/* 00436A70 ABAF0008 */  swl   $t7, 8($sp)
/* 00436A74 BBAF000B */  swr   $t7, 0xb($sp)
/* 00436A78 8B380008 */  lwl   $t8, 8($t9)
/* 00436A7C 9B38000B */  lwr   $t8, 0xb($t9)
/* 00436A80 8FA60008 */  lw    $a2, 8($sp)
/* 00436A84 ABB8000C */  swl   $t8, 0xc($sp)
/* 00436A88 BBB8000F */  swr   $t8, 0xf($sp)
/* 00436A8C 8B2F000C */  lwl   $t7, 0xc($t9)
/* 00436A90 9B2F000F */  lwr   $t7, 0xf($t9)
/* 00436A94 8FA7000C */  lw    $a3, 0xc($sp)
/* 00436A98 ABAF0010 */  swl   $t7, 0x10($sp)
/* 00436A9C BBAF0013 */  swr   $t7, 0x13($sp)
/* 00436AA0 8B380010 */  lwl   $t8, 0x10($t9)
/* 00436AA4 9B380013 */  lwr   $t8, 0x13($t9)
/* 00436AA8 ABB80014 */  swl   $t8, 0x14($sp)
/* 00436AAC BBB80017 */  swr   $t8, 0x17($sp)
/* 00436AB0 8B2F0014 */  lwl   $t7, 0x14($t9)
/* 00436AB4 9B2F0017 */  lwr   $t7, 0x17($t9)
/* 00436AB8 ABAF0018 */  swl   $t7, 0x18($sp)
/* 00436ABC BBAF001B */  swr   $t7, 0x1b($sp)
/* 00436AC0 8B380018 */  lwl   $t8, 0x18($t9)
/* 00436AC4 9B38001B */  lwr   $t8, 0x1b($t9)
/* 00436AC8 ABB8001C */  swl   $t8, 0x1c($sp)
/* 00436ACC BBB8001F */  swr   $t8, 0x1f($sp)
/* 00436AD0 8B2F001C */  lwl   $t7, 0x1c($t9)
/* 00436AD4 9B2F001F */  lwr   $t7, 0x1f($t9)
/* 00436AD8 8F998020 */  lw    $t9, %got(func_004346B0)($gp)
/* 00436ADC ABAF0020 */  swl   $t7, 0x20($sp)
/* 00436AE0 273946B0 */  addiu $t9, %lo(func_004346B0) # addiu $t9, $t9, 0x46b0
/* 00436AE4 0320F809 */  jalr  $t9
/* 00436AE8 BBAF0023 */   swr   $t7, 0x23($sp)
/* 00436AEC 10400012 */  beqz  $v0, .L00436B38
/* 00436AF0 8FBC004C */   lw    $gp, 0x4c($sp)
/* 00436AF4 8F998890 */  lw    $t9, %call16(get_arg)($gp)
/* 00436AF8 26B50001 */  addiu $s5, $s5, 1
/* 00436AFC 02A02025 */  move  $a0, $s5
/* 00436B00 27A50CB8 */  addiu $a1, $sp, 0xcb8
/* 00436B04 0320F809 */  jalr  $t9
/* 00436B08 24060400 */   li    $a2, 1024
/* 00436B0C 8FBC004C */  lw    $gp, 0x4c($sp)
/* 00436B10 27A40CB8 */  addiu $a0, $sp, 0xcb8
/* 00436B14 02801025 */  move  $v0, $s4
/* 00436B18 8F998020 */  lw    $t9, %got(func_004345A8)($gp)
/* 00436B1C 273945A8 */  addiu $t9, %lo(func_004345A8) # addiu $t9, $t9, 0x45a8
/* 00436B20 0320F809 */  jalr  $t9
/* 00436B24 00000000 */   nop   
/* 00436B28 8FBC004C */  lw    $gp, 0x4c($sp)
/* 00436B2C 8F818B60 */  lw     $at, %got(unroll_times)($gp)
/* 00436B30 100001CC */  b     .L00437264
/* 00436B34 AC220000 */   sw    $v0, ($at)
.L00436B38:
/* 00436B38 8F8B8044 */  lw    $t3, %got(RO_1000B94C)($gp)
/* 00436B3C 8F998020 */  lw    $t9, %got(func_004346B0)($gp)
/* 00436B40 02602025 */  move  $a0, $s3
/* 00436B44 256BB94C */  addiu $t3, %lo(RO_1000B94C) # addiu $t3, $t3, -0x46b4
/* 00436B48 89690000 */  lwl   $t1, ($t3)
/* 00436B4C 99690003 */  lwr   $t1, 3($t3)
/* 00436B50 273946B0 */  addiu $t9, %lo(func_004346B0) # addiu $t9, $t9, 0x46b0
/* 00436B54 02801025 */  move  $v0, $s4
/* 00436B58 ABA90004 */  swl   $t1, 4($sp)
/* 00436B5C BBA90007 */  swr   $t1, 7($sp)
/* 00436B60 896C0004 */  lwl   $t4, 4($t3)
/* 00436B64 996C0007 */  lwr   $t4, 7($t3)
/* 00436B68 8FA50004 */  lw    $a1, 4($sp)
/* 00436B6C ABAC0008 */  swl   $t4, 8($sp)
/* 00436B70 BBAC000B */  swr   $t4, 0xb($sp)
/* 00436B74 89690008 */  lwl   $t1, 8($t3)
/* 00436B78 9969000B */  lwr   $t1, 0xb($t3)
/* 00436B7C 8FA60008 */  lw    $a2, 8($sp)
/* 00436B80 ABA9000C */  swl   $t1, 0xc($sp)
/* 00436B84 BBA9000F */  swr   $t1, 0xf($sp)
/* 00436B88 896C000C */  lwl   $t4, 0xc($t3)
/* 00436B8C 996C000F */  lwr   $t4, 0xf($t3)
/* 00436B90 8FA7000C */  lw    $a3, 0xc($sp)
/* 00436B94 ABAC0010 */  swl   $t4, 0x10($sp)
/* 00436B98 BBAC0013 */  swr   $t4, 0x13($sp)
/* 00436B9C 89690010 */  lwl   $t1, 0x10($t3)
/* 00436BA0 99690013 */  lwr   $t1, 0x13($t3)
/* 00436BA4 ABA90014 */  swl   $t1, 0x14($sp)
/* 00436BA8 BBA90017 */  swr   $t1, 0x17($sp)
/* 00436BAC 896C0014 */  lwl   $t4, 0x14($t3)
/* 00436BB0 996C0017 */  lwr   $t4, 0x17($t3)
/* 00436BB4 ABAC0018 */  swl   $t4, 0x18($sp)
/* 00436BB8 BBAC001B */  swr   $t4, 0x1b($sp)
/* 00436BBC 89690018 */  lwl   $t1, 0x18($t3)
/* 00436BC0 9969001B */  lwr   $t1, 0x1b($t3)
/* 00436BC4 ABA9001C */  swl   $t1, 0x1c($sp)
/* 00436BC8 BBA9001F */  swr   $t1, 0x1f($sp)
/* 00436BCC 896C001C */  lwl   $t4, 0x1c($t3)
/* 00436BD0 996C001F */  lwr   $t4, 0x1f($t3)
/* 00436BD4 ABAC0020 */  swl   $t4, 0x20($sp)
/* 00436BD8 0320F809 */  jalr  $t9
/* 00436BDC BBAC0023 */   swr   $t4, 0x23($sp)
/* 00436BE0 10400012 */  beqz  $v0, .L00436C2C
/* 00436BE4 8FBC004C */   lw    $gp, 0x4c($sp)
/* 00436BE8 8F998890 */  lw    $t9, %call16(get_arg)($gp)
/* 00436BEC 26B50001 */  addiu $s5, $s5, 1
/* 00436BF0 02A02025 */  move  $a0, $s5
/* 00436BF4 27A50CB8 */  addiu $a1, $sp, 0xcb8
/* 00436BF8 0320F809 */  jalr  $t9
/* 00436BFC 24060400 */   li    $a2, 1024
/* 00436C00 8FBC004C */  lw    $gp, 0x4c($sp)
/* 00436C04 27A40CB8 */  addiu $a0, $sp, 0xcb8
/* 00436C08 02801025 */  move  $v0, $s4
/* 00436C0C 8F998020 */  lw    $t9, %got(func_004345A8)($gp)
/* 00436C10 273945A8 */  addiu $t9, %lo(func_004345A8) # addiu $t9, $t9, 0x45a8
/* 00436C14 0320F809 */  jalr  $t9
/* 00436C18 00000000 */   nop   
/* 00436C1C 8FBC004C */  lw    $gp, 0x4c($sp)
/* 00436C20 8F818B64 */  lw     $at, %got(unroll_limit)($gp)
/* 00436C24 1000018F */  b     .L00437264
/* 00436C28 AC220000 */   sw    $v0, ($at)
.L00436C2C:
/* 00436C2C 8F8A8044 */  lw    $t2, %got(RO_1000B92C)($gp)
/* 00436C30 8F998020 */  lw    $t9, %got(func_004346B0)($gp)
/* 00436C34 02602025 */  move  $a0, $s3
/* 00436C38 254AB92C */  addiu $t2, %lo(RO_1000B92C) # addiu $t2, $t2, -0x46d4
/* 00436C3C 89480000 */  lwl   $t0, ($t2)
/* 00436C40 99480003 */  lwr   $t0, 3($t2)
/* 00436C44 273946B0 */  addiu $t9, %lo(func_004346B0) # addiu $t9, $t9, 0x46b0
/* 00436C48 02801025 */  move  $v0, $s4
/* 00436C4C ABA80004 */  swl   $t0, 4($sp)
/* 00436C50 BBA80007 */  swr   $t0, 7($sp)
/* 00436C54 894E0004 */  lwl   $t6, 4($t2)
/* 00436C58 994E0007 */  lwr   $t6, 7($t2)
/* 00436C5C 8FA50004 */  lw    $a1, 4($sp)
/* 00436C60 ABAE0008 */  swl   $t6, 8($sp)
/* 00436C64 BBAE000B */  swr   $t6, 0xb($sp)
/* 00436C68 89480008 */  lwl   $t0, 8($t2)
/* 00436C6C 9948000B */  lwr   $t0, 0xb($t2)
/* 00436C70 8FA60008 */  lw    $a2, 8($sp)
/* 00436C74 ABA8000C */  swl   $t0, 0xc($sp)
/* 00436C78 BBA8000F */  swr   $t0, 0xf($sp)
/* 00436C7C 894E000C */  lwl   $t6, 0xc($t2)
/* 00436C80 994E000F */  lwr   $t6, 0xf($t2)
/* 00436C84 8FA7000C */  lw    $a3, 0xc($sp)
/* 00436C88 ABAE0010 */  swl   $t6, 0x10($sp)
/* 00436C8C BBAE0013 */  swr   $t6, 0x13($sp)
/* 00436C90 89480010 */  lwl   $t0, 0x10($t2)
/* 00436C94 99480013 */  lwr   $t0, 0x13($t2)
/* 00436C98 ABA80014 */  swl   $t0, 0x14($sp)
/* 00436C9C BBA80017 */  swr   $t0, 0x17($sp)
/* 00436CA0 894E0014 */  lwl   $t6, 0x14($t2)
/* 00436CA4 994E0017 */  lwr   $t6, 0x17($t2)
/* 00436CA8 ABAE0018 */  swl   $t6, 0x18($sp)
/* 00436CAC BBAE001B */  swr   $t6, 0x1b($sp)
/* 00436CB0 89480018 */  lwl   $t0, 0x18($t2)
/* 00436CB4 9948001B */  lwr   $t0, 0x1b($t2)
/* 00436CB8 ABA8001C */  swl   $t0, 0x1c($sp)
/* 00436CBC BBA8001F */  swr   $t0, 0x1f($sp)
/* 00436CC0 894E001C */  lwl   $t6, 0x1c($t2)
/* 00436CC4 994E001F */  lwr   $t6, 0x1f($t2)
/* 00436CC8 ABAE0020 */  swl   $t6, 0x20($sp)
/* 00436CCC 0320F809 */  jalr  $t9
/* 00436CD0 BBAE0023 */   swr   $t6, 0x23($sp)
/* 00436CD4 10400004 */  beqz  $v0, .L00436CE8
/* 00436CD8 8FBC004C */   lw    $gp, 0x4c($sp)
/* 00436CDC 8F818B54 */  lw     $at, %got(multibbunroll)($gp)
/* 00436CE0 10000160 */  b     .L00437264
/* 00436CE4 A0200000 */   sb    $zero, ($at)
.L00436CE8:
/* 00436CE8 8F8D8044 */  lw    $t5, %got(RO_1000B90C)($gp)
/* 00436CEC 02602025 */  move  $a0, $s3
/* 00436CF0 02801025 */  move  $v0, $s4
/* 00436CF4 25ADB90C */  addiu $t5, %lo(RO_1000B90C) # addiu $t5, $t5, -0x46f4
/* 00436CF8 89AF0000 */  lwl   $t7, ($t5)
/* 00436CFC 99AF0003 */  lwr   $t7, 3($t5)
/* 00436D00 ABAF0004 */  swl   $t7, 4($sp)
/* 00436D04 BBAF0007 */  swr   $t7, 7($sp)
/* 00436D08 89B90004 */  lwl   $t9, 4($t5)
/* 00436D0C 99B90007 */  lwr   $t9, 7($t5)
/* 00436D10 8FA50004 */  lw    $a1, 4($sp)
/* 00436D14 ABB90008 */  swl   $t9, 8($sp)
/* 00436D18 BBB9000B */  swr   $t9, 0xb($sp)
/* 00436D1C 89AF0008 */  lwl   $t7, 8($t5)
/* 00436D20 99AF000B */  lwr   $t7, 0xb($t5)
/* 00436D24 8FA60008 */  lw    $a2, 8($sp)
/* 00436D28 ABAF000C */  swl   $t7, 0xc($sp)
/* 00436D2C BBAF000F */  swr   $t7, 0xf($sp)
/* 00436D30 89B9000C */  lwl   $t9, 0xc($t5)
/* 00436D34 99B9000F */  lwr   $t9, 0xf($t5)
/* 00436D38 8FA7000C */  lw    $a3, 0xc($sp)
/* 00436D3C ABB90010 */  swl   $t9, 0x10($sp)
/* 00436D40 BBB90013 */  swr   $t9, 0x13($sp)
/* 00436D44 89AF0010 */  lwl   $t7, 0x10($t5)
/* 00436D48 99AF0013 */  lwr   $t7, 0x13($t5)
/* 00436D4C ABAF0014 */  swl   $t7, 0x14($sp)
/* 00436D50 BBAF0017 */  swr   $t7, 0x17($sp)
/* 00436D54 89B90014 */  lwl   $t9, 0x14($t5)
/* 00436D58 99B90017 */  lwr   $t9, 0x17($t5)
/* 00436D5C ABB90018 */  swl   $t9, 0x18($sp)
/* 00436D60 BBB9001B */  swr   $t9, 0x1b($sp)
/* 00436D64 89AF0018 */  lwl   $t7, 0x18($t5)
/* 00436D68 99AF001B */  lwr   $t7, 0x1b($t5)
/* 00436D6C ABAF001C */  swl   $t7, 0x1c($sp)
/* 00436D70 BBAF001F */  swr   $t7, 0x1f($sp)
/* 00436D74 89B9001C */  lwl   $t9, 0x1c($t5)
/* 00436D78 99B9001F */  lwr   $t9, 0x1f($t5)
/* 00436D7C ABB90020 */  swl   $t9, 0x20($sp)
/* 00436D80 BBB90023 */  swr   $t9, 0x23($sp)
/* 00436D84 8F998020 */  lw    $t9, %got(func_004346B0)($gp)
/* 00436D88 273946B0 */  addiu $t9, %lo(func_004346B0) # addiu $t9, $t9, 0x46b0
/* 00436D8C 0320F809 */  jalr  $t9
/* 00436D90 00000000 */   nop   
/* 00436D94 1440002D */  bnez  $v0, .L00436E4C
/* 00436D98 8FBC004C */   lw    $gp, 0x4c($sp)
/* 00436D9C 8F988044 */  lw    $t8, %got(RO_1000B8EC)($gp)
/* 00436DA0 8F998020 */  lw    $t9, %got(func_004346B0)($gp)
/* 00436DA4 02602025 */  move  $a0, $s3
/* 00436DA8 2718B8EC */  addiu $t8, %lo(RO_1000B8EC) # addiu $t8, $t8, -0x4714
/* 00436DAC 8B0C0000 */  lwl   $t4, ($t8)
/* 00436DB0 9B0C0003 */  lwr   $t4, 3($t8)
/* 00436DB4 273946B0 */  addiu $t9, %lo(func_004346B0) # addiu $t9, $t9, 0x46b0
/* 00436DB8 02801025 */  move  $v0, $s4
/* 00436DBC ABAC0004 */  swl   $t4, 4($sp)
/* 00436DC0 BBAC0007 */  swr   $t4, 7($sp)
/* 00436DC4 8B0B0004 */  lwl   $t3, 4($t8)
/* 00436DC8 9B0B0007 */  lwr   $t3, 7($t8)
/* 00436DCC 8FA50004 */  lw    $a1, 4($sp)
/* 00436DD0 ABAB0008 */  swl   $t3, 8($sp)
/* 00436DD4 BBAB000B */  swr   $t3, 0xb($sp)
/* 00436DD8 8B0C0008 */  lwl   $t4, 8($t8)
/* 00436DDC 9B0C000B */  lwr   $t4, 0xb($t8)
/* 00436DE0 8FA60008 */  lw    $a2, 8($sp)
/* 00436DE4 ABAC000C */  swl   $t4, 0xc($sp)
/* 00436DE8 BBAC000F */  swr   $t4, 0xf($sp)
/* 00436DEC 8B0B000C */  lwl   $t3, 0xc($t8)
/* 00436DF0 9B0B000F */  lwr   $t3, 0xf($t8)
/* 00436DF4 8FA7000C */  lw    $a3, 0xc($sp)
/* 00436DF8 ABAB0010 */  swl   $t3, 0x10($sp)
/* 00436DFC BBAB0013 */  swr   $t3, 0x13($sp)
/* 00436E00 8B0C0010 */  lwl   $t4, 0x10($t8)
/* 00436E04 9B0C0013 */  lwr   $t4, 0x13($t8)
/* 00436E08 ABAC0014 */  swl   $t4, 0x14($sp)
/* 00436E0C BBAC0017 */  swr   $t4, 0x17($sp)
/* 00436E10 8B0B0014 */  lwl   $t3, 0x14($t8)
/* 00436E14 9B0B0017 */  lwr   $t3, 0x17($t8)
/* 00436E18 ABAB0018 */  swl   $t3, 0x18($sp)
/* 00436E1C BBAB001B */  swr   $t3, 0x1b($sp)
/* 00436E20 8B0C0018 */  lwl   $t4, 0x18($t8)
/* 00436E24 9B0C001B */  lwr   $t4, 0x1b($t8)
/* 00436E28 ABAC001C */  swl   $t4, 0x1c($sp)
/* 00436E2C BBAC001F */  swr   $t4, 0x1f($sp)
/* 00436E30 8B0B001C */  lwl   $t3, 0x1c($t8)
/* 00436E34 9B0B001F */  lwr   $t3, 0x1f($t8)
/* 00436E38 ABAB0020 */  swl   $t3, 0x20($sp)
/* 00436E3C 0320F809 */  jalr  $t9
/* 00436E40 BBAB0023 */   swr   $t3, 0x23($sp)
/* 00436E44 10400046 */  beqz  $v0, .L00436F60
/* 00436E48 8FBC004C */   lw    $gp, 0x4c($sp)
.L00436E4C:
/* 00436E4C 8F998890 */  lw    $t9, %call16(get_arg)($gp)
/* 00436E50 26B50001 */  addiu $s5, $s5, 1
/* 00436E54 02A02025 */  move  $a0, $s5
/* 00436E58 27A50CB8 */  addiu $a1, $sp, 0xcb8
/* 00436E5C 0320F809 */  jalr  $t9
/* 00436E60 24060400 */   li    $a2, 1024
/* 00436E64 8FBC004C */  lw    $gp, 0x4c($sp)
/* 00436E68 27A40CB8 */  addiu $a0, $sp, 0xcb8
/* 00436E6C 02801025 */  move  $v0, $s4
/* 00436E70 8F998020 */  lw    $t9, %got(func_004345A8)($gp)
/* 00436E74 273945A8 */  addiu $t9, %lo(func_004345A8) # addiu $t9, $t9, 0x45a8
/* 00436E78 0320F809 */  jalr  $t9
/* 00436E7C 00000000 */   nop   
/* 00436E80 8FBC004C */  lw    $gp, 0x4c($sp)
/* 00436E84 0040F025 */  move  $fp, $v0
/* 00436E88 02801025 */  move  $v0, $s4
/* 00436E8C 8F898044 */  lw    $t1, %got(RO_1000B8CC)($gp)
/* 00436E90 8F998020 */  lw    $t9, %got(func_004346B0)($gp)
/* 00436E94 02602025 */  move  $a0, $s3
/* 00436E98 2529B8CC */  addiu $t1, %lo(RO_1000B8CC) # addiu $t1, $t1, -0x4734
/* 00436E9C 892E0000 */  lwl   $t6, ($t1)
/* 00436EA0 992E0003 */  lwr   $t6, 3($t1)
/* 00436EA4 273946B0 */  addiu $t9, %lo(func_004346B0) # addiu $t9, $t9, 0x46b0
/* 00436EA8 ABAE0004 */  swl   $t6, 4($sp)
/* 00436EAC BBAE0007 */  swr   $t6, 7($sp)
/* 00436EB0 892A0004 */  lwl   $t2, 4($t1)
/* 00436EB4 992A0007 */  lwr   $t2, 7($t1)
/* 00436EB8 8FA50004 */  lw    $a1, 4($sp)
/* 00436EBC ABAA0008 */  swl   $t2, 8($sp)
/* 00436EC0 BBAA000B */  swr   $t2, 0xb($sp)
/* 00436EC4 892E0008 */  lwl   $t6, 8($t1)
/* 00436EC8 992E000B */  lwr   $t6, 0xb($t1)
/* 00436ECC 8FA60008 */  lw    $a2, 8($sp)
/* 00436ED0 ABAE000C */  swl   $t6, 0xc($sp)
/* 00436ED4 BBAE000F */  swr   $t6, 0xf($sp)
/* 00436ED8 892A000C */  lwl   $t2, 0xc($t1)
/* 00436EDC 992A000F */  lwr   $t2, 0xf($t1)
/* 00436EE0 8FA7000C */  lw    $a3, 0xc($sp)
/* 00436EE4 ABAA0010 */  swl   $t2, 0x10($sp)
/* 00436EE8 BBAA0013 */  swr   $t2, 0x13($sp)
/* 00436EEC 892E0010 */  lwl   $t6, 0x10($t1)
/* 00436EF0 992E0013 */  lwr   $t6, 0x13($t1)
/* 00436EF4 ABAE0014 */  swl   $t6, 0x14($sp)
/* 00436EF8 BBAE0017 */  swr   $t6, 0x17($sp)
/* 00436EFC 892A0014 */  lwl   $t2, 0x14($t1)
/* 00436F00 992A0017 */  lwr   $t2, 0x17($t1)
/* 00436F04 ABAA0018 */  swl   $t2, 0x18($sp)
/* 00436F08 BBAA001B */  swr   $t2, 0x1b($sp)
/* 00436F0C 892E0018 */  lwl   $t6, 0x18($t1)
/* 00436F10 992E001B */  lwr   $t6, 0x1b($t1)
/* 00436F14 ABAE001C */  swl   $t6, 0x1c($sp)
/* 00436F18 BBAE001F */  swr   $t6, 0x1f($sp)
/* 00436F1C 892A001C */  lwl   $t2, 0x1c($t1)
/* 00436F20 992A001F */  lwr   $t2, 0x1f($t1)
/* 00436F24 ABAA0020 */  swl   $t2, 0x20($sp)
/* 00436F28 0320F809 */  jalr  $t9
/* 00436F2C BBAA0023 */   swr   $t2, 0x23($sp)
/* 00436F30 10400004 */  beqz  $v0, .L00436F44
/* 00436F34 8FBC004C */   lw    $gp, 0x4c($sp)
/* 00436F38 8F818A14 */  lw     $at, %got(actnuminterregs)($gp)
/* 00436F3C 10000003 */  b     .L00436F4C
/* 00436F40 AC3E0000 */   sw    $fp, ($at)
.L00436F44:
/* 00436F44 8F818A10 */  lw     $at, %got(actnuminteeregs)($gp)
/* 00436F48 AC3E0000 */  sw    $fp, ($at)
.L00436F4C:
/* 00436F4C 8F818AD0 */  lw     $at, %got(usingregoption)($gp)
/* 00436F50 A0370000 */  sb    $s7, ($at)
/* 00436F54 8F818AA4 */  lw     $at, %got(doprecolor)($gp)
/* 00436F58 100000C2 */  b     .L00437264
/* 00436F5C A0200000 */   sb    $zero, ($at)
.L00436F60:
/* 00436F60 8F8D8044 */  lw    $t5, %got(RO_1000B8AC)($gp)
/* 00436F64 93A210B9 */  lbu   $v0, 0x10b9($sp)
/* 00436F68 27A80C84 */  addiu $t0, $sp, 0xc84
/* 00436F6C 25ADB8AC */  addiu $t5, %lo(RO_1000B8AC) # addiu $t5, $t5, -0x4754
/* 00436F70 89AF0000 */  lwl   $t7, ($t5)
/* 00436F74 99AF0003 */  lwr   $t7, 3($t5)
/* 00436F78 2458FFC0 */  addiu $t8, $v0, -0x40
/* 00436F7C 2F0B0040 */  sltiu $t3, $t8, 0x40
/* 00436F80 A90F0000 */  swl   $t7, ($t0)
/* 00436F84 B90F0003 */  swr   $t7, 3($t0)
/* 00436F88 89B90004 */  lwl   $t9, 4($t5)
/* 00436F8C 99B90007 */  lwr   $t9, 7($t5)
/* 00436F90 24050002 */  li    $a1, 2
/* 00436F94 00003025 */  move  $a2, $zero
/* 00436F98 A9190004 */  swl   $t9, 4($t0)
/* 00436F9C B9190007 */  swr   $t9, 7($t0)
/* 00436FA0 89AF0008 */  lwl   $t7, 8($t5)
/* 00436FA4 99AF000B */  lwr   $t7, 0xb($t5)
/* 00436FA8 27A310B9 */  addiu $v1, $sp, 0x10b9
/* 00436FAC 27A40C85 */  addiu $a0, $sp, 0xc85
/* 00436FB0 A90F0008 */  swl   $t7, 8($t0)
/* 00436FB4 B90F000B */  swr   $t7, 0xb($t0)
/* 00436FB8 89B9000C */  lwl   $t9, 0xc($t5)
/* 00436FBC 99B9000F */  lwr   $t9, 0xf($t5)
/* 00436FC0 A919000C */  swl   $t9, 0xc($t0)
/* 00436FC4 B919000F */  swr   $t9, 0xf($t0)
/* 00436FC8 89AF0010 */  lwl   $t7, 0x10($t5)
/* 00436FCC 99AF0013 */  lwr   $t7, 0x13($t5)
/* 00436FD0 A90F0010 */  swl   $t7, 0x10($t0)
/* 00436FD4 B90F0013 */  swr   $t7, 0x13($t0)
/* 00436FD8 89B90014 */  lwl   $t9, 0x14($t5)
/* 00436FDC 99B90017 */  lwr   $t9, 0x17($t5)
/* 00436FE0 A9190014 */  swl   $t9, 0x14($t0)
/* 00436FE4 B9190017 */  swr   $t9, 0x17($t0)
/* 00436FE8 89AF0018 */  lwl   $t7, 0x18($t5)
/* 00436FEC 99AF001B */  lwr   $t7, 0x1b($t5)
/* 00436FF0 A90F0018 */  swl   $t7, 0x18($t0)
/* 00436FF4 B90F001B */  swr   $t7, 0x1b($t0)
/* 00436FF8 89B9001C */  lwl   $t9, 0x1c($t5)
/* 00436FFC 99B9001F */  lwr   $t9, 0x1f($t5)
/* 00437000 27AF10B7 */  addiu $t7, $sp, 0x10b7
/* 00437004 A919001C */  swl   $t9, 0x1c($t0)
/* 00437008 11600009 */  beqz  $t3, .L00437030
/* 0043700C B919001F */   swr   $t9, 0x1f($t0)
/* 00437010 8F8A8044 */  lw    $t2, %got(D_10010818)($gp)
/* 00437014 00186143 */  sra   $t4, $t8, 5
/* 00437018 000C4880 */  sll   $t1, $t4, 2
/* 0043701C 254A0818 */  addiu $t2, %lo(D_10010818) # addiu $t2, $t2, 0x818
/* 00437020 01497021 */  addu  $t6, $t2, $t1
/* 00437024 8DC80000 */  lw    $t0, ($t6)
/* 00437028 03086804 */  sllv  $t5, $t0, $t8
/* 0043702C 29AB0000 */  slti  $t3, $t5, 0
.L00437030:
/* 00437030 51600015 */  beql  $t3, $zero, .L00437088
/* 00437034 00AF1821 */   addu  $v1, $a1, $t7
/* 00437038 90620000 */  lbu   $v0, ($v1)
/* 0043703C A082FFFF */  sb    $v0, -1($a0)
.L00437040:
/* 00437040 90620001 */  lbu   $v0, 1($v1)
/* 00437044 24A50001 */  addiu $a1, $a1, 1
/* 00437048 24630001 */  addiu $v1, $v1, 1
/* 0043704C 244CFFC0 */  addiu $t4, $v0, -0x40
/* 00437050 2D8A0040 */  sltiu $t2, $t4, 0x40
/* 00437054 11400009 */  beqz  $t2, .L0043707C
/* 00437058 24840001 */   addiu $a0, $a0, 1
/* 0043705C 8F888044 */  lw    $t0, %got(D_10010818)($gp)
/* 00437060 000C4943 */  sra   $t1, $t4, 5
/* 00437064 00097080 */  sll   $t6, $t1, 2
/* 00437068 25080818 */  addiu $t0, %lo(D_10010818) # addiu $t0, $t0, 0x818
/* 0043706C 010EC021 */  addu  $t8, $t0, $t6
/* 00437070 8F0D0000 */  lw    $t5, ($t8)
/* 00437074 018DC804 */  sllv  $t9, $t5, $t4
/* 00437078 2B2A0000 */  slti  $t2, $t9, 0
.L0043707C:
/* 0043707C 5540FFF0 */  bnezl $t2, .L00437040
/* 00437080 A082FFFF */   sb    $v0, -1($a0)
/* 00437084 00AF1821 */  addu  $v1, $a1, $t7
.L00437088:
/* 00437088 90620000 */  lbu   $v0, ($v1)
/* 0043708C 2401003A */  li    $at, 58
/* 00437090 50410004 */  beql  $v0, $at, .L004370A4
/* 00437094 90620001 */   lbu   $v0, 1($v1)
/* 00437098 10000016 */  b     .L004370F4
/* 0043709C 24060023 */   li    $a2, 35
/* 004370A0 90620001 */  lbu   $v0, 1($v1)
.L004370A4:
/* 004370A4 24630001 */  addiu $v1, $v1, 1
/* 004370A8 0000F025 */  move  $fp, $zero
/* 004370AC 2C410030 */  sltiu $at, $v0, 0x30
/* 004370B0 1420003B */  bnez  $at, .L004371A0
/* 004370B4 2C41003A */   sltiu $at, $v0, 0x3a
/* 004370B8 10200039 */  beqz  $at, .L004371A0
/* 004370BC 001E4880 */   sll   $t1, $fp, 2
.L004370C0:
/* 004370C0 013E4821 */  addu  $t1, $t1, $fp
/* 004370C4 00094840 */  sll   $t1, $t1, 1
/* 004370C8 0122F021 */  addu  $fp, $t1, $v0
/* 004370CC 90620001 */  lbu   $v0, 1($v1)
/* 004370D0 27DEFFD0 */  addiu $fp, $fp, -0x30
/* 004370D4 24630001 */  addiu $v1, $v1, 1
/* 004370D8 2C410030 */  sltiu $at, $v0, 0x30
/* 004370DC 14200030 */  bnez  $at, .L004371A0
/* 004370E0 2C41003A */   sltiu $at, $v0, 0x3a
/* 004370E4 5420FFF6 */  bnezl $at, .L004370C0
/* 004370E8 001E4880 */   sll   $t1, $fp, 2
/* 004370EC 1000002C */  b     .L004371A0
/* 004370F0 00000000 */   nop   
.L004370F4:
/* 004370F4 8F888B58 */  lw     $t0, %got(warn_flag)($gp)
/* 004370F8 91080000 */  lbu   $t0, ($t0)
/* 004370FC 52E8000C */  beql  $s7, $t0, .L00437130
/* 00437100 93AE10B8 */   lbu   $t6, 0x10b8($sp)
/* 00437104 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 00437108 8F848908 */  lw     $a0, %got(err)($gp)
/* 0043710C 8F858044 */  lw    $a1, %got(RO_1000B889)($gp)
/* 00437110 24070023 */  li    $a3, 35
/* 00437114 8C840000 */  lw    $a0, ($a0)
/* 00437118 0320F809 */  jalr  $t9
/* 0043711C 24A5B889 */   addiu $a1, %lo(RO_1000B889) # addiu $a1, $a1, -0x4777
/* 00437120 8FBC004C */  lw    $gp, 0x4c($sp)
/* 00437124 8F818B08 */  lw     $at, %got(warned)($gp)
/* 00437128 A0370000 */  sb    $s7, ($at)
/* 0043712C 93AE10B8 */  lbu   $t6, 0x10b8($sp)
.L00437130:
/* 00437130 12CE0010 */  beq   $s6, $t6, .L00437174
/* 00437134 00000000 */   nop   
/* 00437138 8F92890C */  lw     $s2, %got(output)($gp)
/* 0043713C 27B010B8 */  addiu $s0, $sp, 0x10b8
/* 00437140 92110000 */  lbu   $s1, ($s0)
/* 00437144 8E520000 */  lw    $s2, ($s2)
.L00437148:
/* 00437148 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0043714C 02402025 */  move  $a0, $s2
/* 00437150 02202825 */  move  $a1, $s1
/* 00437154 02E03025 */  move  $a2, $s7
/* 00437158 0320F809 */  jalr  $t9
/* 0043715C 2407000A */   li    $a3, 10
/* 00437160 92110001 */  lbu   $s1, 1($s0)
/* 00437164 8FBC004C */  lw    $gp, 0x4c($sp)
/* 00437168 26100001 */  addiu $s0, $s0, 1
/* 0043716C 16D1FFF6 */  bne   $s6, $s1, .L00437148
/* 00437170 00000000 */   nop   
.L00437174:
/* 00437174 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 00437178 8F848908 */  lw     $a0, %got(err)($gp)
/* 0043717C 0320F809 */  jalr  $t9
/* 00437180 8C840000 */   lw    $a0, ($a0)
/* 00437184 8FBC004C */  lw    $gp, 0x4c($sp)
/* 00437188 8F9980A0 */  lw    $t9, %call16(fflush)($gp)
/* 0043718C 8F848908 */  lw     $a0, %got(err)($gp)
/* 00437190 0320F809 */  jalr  $t9
/* 00437194 8C840000 */   lw    $a0, ($a0)
/* 00437198 8FBC004C */  lw    $gp, 0x4c($sp)
/* 0043719C 32E600FF */  andi  $a2, $s7, 0xff
.L004371A0:
/* 004371A0 14C00030 */  bnez  $a2, .L00437264
/* 004371A4 27AD0C84 */   addiu $t5, $sp, 0xc84
/* 004371A8 89B90000 */  lwl   $t9, ($t5)
/* 004371AC 99B90003 */  lwr   $t9, 3($t5)
/* 004371B0 02801025 */  move  $v0, $s4
/* 004371B4 ABB90000 */  swl   $t9, ($sp)
/* 004371B8 BBB90003 */  swr   $t9, 3($sp)
/* 004371BC 89AC0004 */  lwl   $t4, 4($t5)
/* 004371C0 99AC0007 */  lwr   $t4, 7($t5)
/* 004371C4 8FA40000 */  lw    $a0, ($sp)
/* 004371C8 ABAC0004 */  swl   $t4, 4($sp)
/* 004371CC BBAC0007 */  swr   $t4, 7($sp)
/* 004371D0 89B90008 */  lwl   $t9, 8($t5)
/* 004371D4 99B9000B */  lwr   $t9, 0xb($t5)
/* 004371D8 8FA50004 */  lw    $a1, 4($sp)
/* 004371DC ABB90008 */  swl   $t9, 8($sp)
/* 004371E0 BBB9000B */  swr   $t9, 0xb($sp)
/* 004371E4 89AC000C */  lwl   $t4, 0xc($t5)
/* 004371E8 99AC000F */  lwr   $t4, 0xf($t5)
/* 004371EC 8FA60008 */  lw    $a2, 8($sp)
/* 004371F0 ABAC000C */  swl   $t4, 0xc($sp)
/* 004371F4 BBAC000F */  swr   $t4, 0xf($sp)
/* 004371F8 89B90010 */  lwl   $t9, 0x10($t5)
/* 004371FC 99B90013 */  lwr   $t9, 0x13($t5)
/* 00437200 8FA7000C */  lw    $a3, 0xc($sp)
/* 00437204 ABB90010 */  swl   $t9, 0x10($sp)
/* 00437208 BBB90013 */  swr   $t9, 0x13($sp)
/* 0043720C 89AC0014 */  lwl   $t4, 0x14($t5)
/* 00437210 99AC0017 */  lwr   $t4, 0x17($t5)
/* 00437214 ABAC0014 */  swl   $t4, 0x14($sp)
/* 00437218 BBAC0017 */  swr   $t4, 0x17($sp)
/* 0043721C 89B90018 */  lwl   $t9, 0x18($t5)
/* 00437220 99B9001B */  lwr   $t9, 0x1b($t5)
/* 00437224 ABB90018 */  swl   $t9, 0x18($sp)
/* 00437228 BBB9001B */  swr   $t9, 0x1b($sp)
/* 0043722C 89AC001C */  lwl   $t4, 0x1c($t5)
/* 00437230 8F998020 */  lw    $t9, %got(func_00434120)($gp)
/* 00437234 99AC001F */  lwr   $t4, 0x1f($t5)
/* 00437238 27394120 */  addiu $t9, %lo(func_00434120) # addiu $t9, $t9, 0x4120
/* 0043723C ABAC001C */  swl   $t4, 0x1c($sp)
/* 00437240 0320F809 */  jalr  $t9
/* 00437244 BBAC001F */   swr   $t4, 0x1f($sp)
/* 00437248 8FBC004C */  lw    $gp, 0x4c($sp)
/* 0043724C 00402025 */  move  $a0, $v0
/* 00437250 03C02825 */  move  $a1, $fp
/* 00437254 8F9986A4 */  lw    $t9, %call16(getoption)($gp)
/* 00437258 0320F809 */  jalr  $t9
/* 0043725C 00000000 */   nop   
/* 00437260 8FBC004C */  lw    $gp, 0x4c($sp)
.L00437264:
/* 00437264 8F8B8944 */  lw     $t3, %got(__Argc)($gp)
/* 00437268 26B50001 */  addiu $s5, $s5, 1
/* 0043726C 8D6B0000 */  lw    $t3, ($t3)
/* 00437270 16ABF578 */  bne   $s5, $t3, .L00434854
/* 00437274 00000000 */   nop   
/* 00437278 AFBE0CA4 */  sw    $fp, 0xca4($sp)
.L0043727C:
/* 0043727C 93AA0482 */  lbu   $t2, 0x482($sp)
/* 00437280 27B414B8 */  addiu $s4, $sp, 0x14b8
/* 00437284 24170001 */  li    $s7, 1
/* 00437288 51400004 */  beql  $t2, $zero, .L0043729C
/* 0043728C 8FAF0CA8 */   lw    $t7, 0xca8($sp)
/* 00437290 8F818B00 */  lw     $at, %got(o3opt)($gp)
/* 00437294 A0200000 */  sb    $zero, ($at)
/* 00437298 8FAF0CA8 */  lw    $t7, 0xca8($sp)
.L0043729C:
/* 0043729C 29E10002 */  slti  $at, $t7, 2
/* 004372A0 5020002D */  beql  $at, $zero, .L00437358
/* 004372A4 8FB80CA8 */   lw    $t8, 0xca8($sp)
/* 004372A8 8F898044 */  lw    $t1, %got(RO_1000B869)($gp)
/* 004372AC 8F998020 */  lw    $t9, %got(func_00434610)($gp)
/* 004372B0 8F848DD4 */  lw     $a0, %got(uopt_uname)($gp)
/* 004372B4 2529B869 */  addiu $t1, %lo(RO_1000B869) # addiu $t1, $t1, -0x4797
/* 004372B8 892E0000 */  lwl   $t6, ($t1)
/* 004372BC 992E0003 */  lwr   $t6, 3($t1)
/* 004372C0 27394610 */  addiu $t9, %lo(func_00434610) # addiu $t9, $t9, 0x4610
/* 004372C4 02801025 */  move  $v0, $s4
/* 004372C8 ABAE0004 */  swl   $t6, 4($sp)
/* 004372CC BBAE0007 */  swr   $t6, 7($sp)
/* 004372D0 89280004 */  lwl   $t0, 4($t1)
/* 004372D4 99280007 */  lwr   $t0, 7($t1)
/* 004372D8 8FA50004 */  lw    $a1, 4($sp)
/* 004372DC ABA80008 */  swl   $t0, 8($sp)
/* 004372E0 BBA8000B */  swr   $t0, 0xb($sp)
/* 004372E4 892E0008 */  lwl   $t6, 8($t1)
/* 004372E8 992E000B */  lwr   $t6, 0xb($t1)
/* 004372EC 8FA60008 */  lw    $a2, 8($sp)
/* 004372F0 ABAE000C */  swl   $t6, 0xc($sp)
/* 004372F4 BBAE000F */  swr   $t6, 0xf($sp)
/* 004372F8 8928000C */  lwl   $t0, 0xc($t1)
/* 004372FC 9928000F */  lwr   $t0, 0xf($t1)
/* 00437300 8FA7000C */  lw    $a3, 0xc($sp)
/* 00437304 ABA80010 */  swl   $t0, 0x10($sp)
/* 00437308 BBA80013 */  swr   $t0, 0x13($sp)
/* 0043730C 892E0010 */  lwl   $t6, 0x10($t1)
/* 00437310 992E0013 */  lwr   $t6, 0x13($t1)
/* 00437314 ABAE0014 */  swl   $t6, 0x14($sp)
/* 00437318 BBAE0017 */  swr   $t6, 0x17($sp)
/* 0043731C 89280014 */  lwl   $t0, 0x14($t1)
/* 00437320 99280017 */  lwr   $t0, 0x17($t1)
/* 00437324 ABA80018 */  swl   $t0, 0x18($sp)
/* 00437328 BBA8001B */  swr   $t0, 0x1b($sp)
/* 0043732C 892E0018 */  lwl   $t6, 0x18($t1)
/* 00437330 992E001B */  lwr   $t6, 0x1b($t1)
/* 00437334 ABAE001C */  swl   $t6, 0x1c($sp)
/* 00437338 BBAE001F */  swr   $t6, 0x1f($sp)
/* 0043733C 8928001C */  lwl   $t0, 0x1c($t1)
/* 00437340 9928001F */  lwr   $t0, 0x1f($t1)
/* 00437344 ABA80020 */  swl   $t0, 0x20($sp)
/* 00437348 0320F809 */  jalr  $t9
/* 0043734C BBA80023 */   swr   $t0, 0x23($sp)
/* 00437350 8FBC004C */  lw    $gp, 0x4c($sp)
/* 00437354 8FB80CA8 */  lw    $t8, 0xca8($sp)
.L00437358:
/* 00437358 2B010003 */  slti  $at, $t8, 3
/* 0043735C 1020002C */  beqz  $at, .L00437410
/* 00437360 00000000 */   nop   
/* 00437364 8F8D8044 */  lw    $t5, %got(RO_1000B849)($gp)
/* 00437368 8F848DDC */  lw     $a0, %got(strpname)($gp)
/* 0043736C 02801025 */  move  $v0, $s4
/* 00437370 25ADB849 */  addiu $t5, %lo(RO_1000B849) # addiu $t5, $t5, -0x47b7
/* 00437374 89B90000 */  lwl   $t9, ($t5)
/* 00437378 99B90003 */  lwr   $t9, 3($t5)
/* 0043737C ABB90004 */  swl   $t9, 4($sp)
/* 00437380 BBB90007 */  swr   $t9, 7($sp)
/* 00437384 89AC0004 */  lwl   $t4, 4($t5)
/* 00437388 99AC0007 */  lwr   $t4, 7($t5)
/* 0043738C 8FA50004 */  lw    $a1, 4($sp)
/* 00437390 ABAC0008 */  swl   $t4, 8($sp)
/* 00437394 BBAC000B */  swr   $t4, 0xb($sp)
/* 00437398 89B90008 */  lwl   $t9, 8($t5)
/* 0043739C 99B9000B */  lwr   $t9, 0xb($t5)
/* 004373A0 8FA60008 */  lw    $a2, 8($sp)
/* 004373A4 ABB9000C */  swl   $t9, 0xc($sp)
/* 004373A8 BBB9000F */  swr   $t9, 0xf($sp)
/* 004373AC 89AC000C */  lwl   $t4, 0xc($t5)
/* 004373B0 99AC000F */  lwr   $t4, 0xf($t5)
/* 004373B4 8FA7000C */  lw    $a3, 0xc($sp)
/* 004373B8 ABAC0010 */  swl   $t4, 0x10($sp)
/* 004373BC BBAC0013 */  swr   $t4, 0x13($sp)
/* 004373C0 89B90010 */  lwl   $t9, 0x10($t5)
/* 004373C4 99B90013 */  lwr   $t9, 0x13($t5)
/* 004373C8 ABB90014 */  swl   $t9, 0x14($sp)
/* 004373CC BBB90017 */  swr   $t9, 0x17($sp)
/* 004373D0 89AC0014 */  lwl   $t4, 0x14($t5)
/* 004373D4 99AC0017 */  lwr   $t4, 0x17($t5)
/* 004373D8 ABAC0018 */  swl   $t4, 0x18($sp)
/* 004373DC BBAC001B */  swr   $t4, 0x1b($sp)
/* 004373E0 89B90018 */  lwl   $t9, 0x18($t5)
/* 004373E4 99B9001B */  lwr   $t9, 0x1b($t5)
/* 004373E8 ABB9001C */  swl   $t9, 0x1c($sp)
/* 004373EC BBB9001F */  swr   $t9, 0x1f($sp)
/* 004373F0 89AC001C */  lwl   $t4, 0x1c($t5)
/* 004373F4 8F998020 */  lw    $t9, %got(func_00434610)($gp)
/* 004373F8 99AC001F */  lwr   $t4, 0x1f($t5)
/* 004373FC 27394610 */  addiu $t9, %lo(func_00434610) # addiu $t9, $t9, 0x4610
/* 00437400 ABAC0020 */  swl   $t4, 0x20($sp)
/* 00437404 0320F809 */  jalr  $t9
/* 00437408 BBAC0023 */   swr   $t4, 0x23($sp)
/* 0043740C 8FBC004C */  lw    $gp, 0x4c($sp)
.L00437410:
/* 00437410 8F908DD8 */  lw     $s0, %got(listname)($gp)
/* 00437414 920B0000 */  lbu   $t3, ($s0)
/* 00437418 16CB002D */  bne   $s6, $t3, .L004374D0
/* 0043741C 00000000 */   nop   
/* 00437420 8F8A8044 */  lw    $t2, %got(RO_1000B829)($gp)
/* 00437424 8F998020 */  lw    $t9, %got(func_00434610)($gp)
/* 00437428 02002025 */  move  $a0, $s0
/* 0043742C 254AB829 */  addiu $t2, %lo(RO_1000B829) # addiu $t2, $t2, -0x47d7
/* 00437430 89490000 */  lwl   $t1, ($t2)
/* 00437434 99490003 */  lwr   $t1, 3($t2)
/* 00437438 27394610 */  addiu $t9, %lo(func_00434610) # addiu $t9, $t9, 0x4610
/* 0043743C 02801025 */  move  $v0, $s4
/* 00437440 ABA90004 */  swl   $t1, 4($sp)
/* 00437444 BBA90007 */  swr   $t1, 7($sp)
/* 00437448 894F0004 */  lwl   $t7, 4($t2)
/* 0043744C 994F0007 */  lwr   $t7, 7($t2)
/* 00437450 8FA50004 */  lw    $a1, 4($sp)
/* 00437454 ABAF0008 */  swl   $t7, 8($sp)
/* 00437458 BBAF000B */  swr   $t7, 0xb($sp)
/* 0043745C 89490008 */  lwl   $t1, 8($t2)
/* 00437460 9949000B */  lwr   $t1, 0xb($t2)
/* 00437464 8FA60008 */  lw    $a2, 8($sp)
/* 00437468 ABA9000C */  swl   $t1, 0xc($sp)
/* 0043746C BBA9000F */  swr   $t1, 0xf($sp)
/* 00437470 894F000C */  lwl   $t7, 0xc($t2)
/* 00437474 994F000F */  lwr   $t7, 0xf($t2)
/* 00437478 8FA7000C */  lw    $a3, 0xc($sp)
/* 0043747C ABAF0010 */  swl   $t7, 0x10($sp)
/* 00437480 BBAF0013 */  swr   $t7, 0x13($sp)
/* 00437484 89490010 */  lwl   $t1, 0x10($t2)
/* 00437488 99490013 */  lwr   $t1, 0x13($t2)
/* 0043748C ABA90014 */  swl   $t1, 0x14($sp)
/* 00437490 BBA90017 */  swr   $t1, 0x17($sp)
/* 00437494 894F0014 */  lwl   $t7, 0x14($t2)
/* 00437498 994F0017 */  lwr   $t7, 0x17($t2)
/* 0043749C ABAF0018 */  swl   $t7, 0x18($sp)
/* 004374A0 BBAF001B */  swr   $t7, 0x1b($sp)
/* 004374A4 89490018 */  lwl   $t1, 0x18($t2)
/* 004374A8 9949001B */  lwr   $t1, 0x1b($t2)
/* 004374AC ABA9001C */  swl   $t1, 0x1c($sp)
/* 004374B0 BBA9001F */  swr   $t1, 0x1f($sp)
/* 004374B4 894F001C */  lwl   $t7, 0x1c($t2)
/* 004374B8 994F001F */  lwr   $t7, 0x1f($t2)
/* 004374BC ABAF0020 */  swl   $t7, 0x20($sp)
/* 004374C0 0320F809 */  jalr  $t9
/* 004374C4 BBAF0023 */   swr   $t7, 0x23($sp)
/* 004374C8 8FBC004C */  lw    $gp, 0x4c($sp)
/* 004374CC 8F908DD8 */  lw     $s0, %got(listname)($gp)
.L004374D0:
/* 004374D0 8F888A64 */  lw     $t0, %got(listwritten)($gp)
/* 004374D4 02002825 */  move  $a1, $s0
/* 004374D8 91080000 */  lbu   $t0, ($t0)
/* 004374DC 11000007 */  beqz  $t0, .L004374FC
/* 004374E0 00000000 */   nop   
/* 004374E4 8F99888C */  lw    $t9, %call16(rewrite)($gp)
/* 004374E8 8F848CCC */  lw     $a0, %got(list)($gp)
/* 004374EC 24060400 */  li    $a2, 1024
/* 004374F0 0320F809 */  jalr  $t9
/* 004374F4 00003825 */   move  $a3, $zero
/* 004374F8 8FBC004C */  lw    $gp, 0x4c($sp)
.L004374FC:
/* 004374FC 8F99872C */  lw    $t9, %call16(openstdout)($gp)
/* 00437500 8F848908 */  lw     $a0, %got(err)($gp)
/* 00437504 0320F809 */  jalr  $t9
/* 00437508 00000000 */   nop   
/* 0043750C 8FBC004C */  lw    $gp, 0x4c($sp)
/* 00437510 8F998734 */  lw    $t9, %call16(uini)($gp)
/* 00437514 0320F809 */  jalr  $t9
/* 00437518 00000000 */   nop   
/* 0043751C 8FBC004C */  lw    $gp, 0x4c($sp)
/* 00437520 8F99876C */  lw    $t9, %call16(initur)($gp)
/* 00437524 8F848DD0 */  lw     $a0, %got(sourcename)($gp)
/* 00437528 0320F809 */  jalr  $t9
/* 0043752C 00000000 */   nop   
/* 00437530 8FBC004C */  lw    $gp, 0x4c($sp)
/* 00437534 8F998738 */  lw    $t9, %call16(inituwrite)($gp)
/* 00437538 8F848DD4 */  lw     $a0, %got(uopt_uname)($gp)
/* 0043753C 0320F809 */  jalr  $t9
/* 00437540 00000000 */   nop   
/* 00437544 8FBC004C */  lw    $gp, 0x4c($sp)
/* 00437548 8F8E8A68 */  lw     $t6, %got(symwritten)($gp)
/* 0043754C 91CE0000 */  lbu   $t6, ($t6)
/* 00437550 15C0001C */  bnez  $t6, .L004375C4
/* 00437554 00000000 */   nop   
/* 00437558 8F818B04 */  lw     $at, %got(update_sym_file)($gp)
/* 0043755C 8F908A6C */  lw     $s0, %got(usefeedback)($gp)
/* 00437560 A0200000 */  sb    $zero, ($at)
/* 00437564 92180000 */  lbu   $t8, ($s0)
/* 00437568 13000016 */  beqz  $t8, .L004375C4
/* 0043756C 00000000 */   nop   
/* 00437570 8F8D8B58 */  lw     $t5, %got(warn_flag)($gp)
/* 00437574 2406004B */  li    $a2, 75
/* 00437578 91AD0000 */  lbu   $t5, ($t5)
/* 0043757C 52ED0011 */  beql  $s7, $t5, .L004375C4
/* 00437580 A2000000 */   sb    $zero, ($s0)
/* 00437584 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 00437588 8F848908 */  lw     $a0, %got(err)($gp)
/* 0043758C 8F858044 */  lw    $a1, %got(RO_1000B7DE)($gp)
/* 00437590 2407004B */  li    $a3, 75
/* 00437594 8C840000 */  lw    $a0, ($a0)
/* 00437598 0320F809 */  jalr  $t9
/* 0043759C 24A5B7DE */   addiu $a1, %lo(RO_1000B7DE) # addiu $a1, $a1, -0x4822
/* 004375A0 8FBC004C */  lw    $gp, 0x4c($sp)
/* 004375A4 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 004375A8 8F848908 */  lw     $a0, %got(err)($gp)
/* 004375AC 0320F809 */  jalr  $t9
/* 004375B0 8C840000 */   lw    $a0, ($a0)
/* 004375B4 8FBC004C */  lw    $gp, 0x4c($sp)
/* 004375B8 8F818B08 */  lw     $at, %got(warned)($gp)
/* 004375BC A0370000 */  sb    $s7, ($at)
/* 004375C0 A2000000 */  sb    $zero, ($s0)
.L004375C4:
/* 004375C4 8F908A6C */  lw     $s0, %got(usefeedback)($gp)
/* 004375C8 920C0000 */  lbu   $t4, ($s0)
/* 004375CC 15800005 */  bnez  $t4, .L004375E4
/* 004375D0 00000000 */   nop   
/* 004375D4 8F998B04 */  lw     $t9, %got(update_sym_file)($gp)
/* 004375D8 93390000 */  lbu   $t9, ($t9)
/* 004375DC 53200028 */  beql  $t9, $zero, .L00437680
/* 004375E0 920B0000 */   lbu   $t3, ($s0)
.L004375E4:
/* 004375E4 8F9982E0 */  lw    $t9, %call16(addnullfilename)($gp)
/* 004375E8 8F848DE0 */  lw     $a0, %got(symname)($gp)
/* 004375EC 0320F809 */  jalr  $t9
/* 004375F0 00000000 */   nop   
/* 004375F4 8FBC004C */  lw    $gp, 0x4c($sp)
/* 004375F8 24050072 */  li    $a1, 114
/* 004375FC 8F998808 */  lw    $t9, %call16(st_readbinary)($gp)
/* 00437600 8F848DB8 */  lw     $a0, %got(st_str)($gp)
/* 00437604 0320F809 */  jalr  $t9
/* 00437608 00000000 */   nop   
/* 0043760C 0441001B */  bgez  $v0, .L0043767C
/* 00437610 8FBC004C */   lw    $gp, 0x4c($sp)
/* 00437614 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 00437618 8F848908 */  lw     $a0, %got(err)($gp)
/* 0043761C 8F858044 */  lw    $a1, %got(RO_1000B7C0)($gp)
/* 00437620 2406001E */  li    $a2, 30
/* 00437624 2407001E */  li    $a3, 30
/* 00437628 8C840000 */  lw    $a0, ($a0)
/* 0043762C 0320F809 */  jalr  $t9
/* 00437630 24A5B7C0 */   addiu $a1, %lo(RO_1000B7C0) # addiu $a1, $a1, -0x4840
/* 00437634 8FBC004C */  lw    $gp, 0x4c($sp)
/* 00437638 24060400 */  li    $a2, 1024
/* 0043763C 24070400 */  li    $a3, 1024
/* 00437640 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 00437644 8F848908 */  lw     $a0, %got(err)($gp)
/* 00437648 8F858DE0 */  lw     $a1, %got(symname)($gp)
/* 0043764C 0320F809 */  jalr  $t9
/* 00437650 8C840000 */   lw    $a0, ($a0)
/* 00437654 8FBC004C */  lw    $gp, 0x4c($sp)
/* 00437658 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0043765C 8F848908 */  lw     $a0, %got(err)($gp)
/* 00437660 0320F809 */  jalr  $t9
/* 00437664 8C840000 */   lw    $a0, ($a0)
/* 00437668 8FBC004C */  lw    $gp, 0x4c($sp)
/* 0043766C 8F818A68 */  lw     $at, %got(symwritten)($gp)
/* 00437670 A0200000 */  sb    $zero, ($at)
/* 00437674 1000000E */  b     .L004376B0
/* 00437678 A2000000 */   sb    $zero, ($s0)
.L0043767C:
/* 0043767C 920B0000 */  lbu   $t3, ($s0)
.L00437680:
/* 00437680 5160000C */  beql  $t3, $zero, .L004376B4
/* 00437684 8FBF0054 */   lw    $ra, 0x54($sp)
/* 00437688 8F9982E0 */  lw    $t9, %call16(addnullfilename)($gp)
/* 0043768C 27A40484 */  addiu $a0, $sp, 0x484
/* 00437690 0320F809 */  jalr  $t9
/* 00437694 00000000 */   nop   
/* 00437698 8FBC004C */  lw    $gp, 0x4c($sp)
/* 0043769C 8F998174 */  lw    $t9, %call16(read_feedback_file)($gp)
/* 004376A0 8F848DB8 */  lw     $a0, %got(st_str)($gp)
/* 004376A4 0320F809 */  jalr  $t9
/* 004376A8 00000000 */   nop   
/* 004376AC 8FBC004C */  lw    $gp, 0x4c($sp)
.L004376B0:
/* 004376B0 8FBF0054 */  lw    $ra, 0x54($sp)
.L004376B4:
/* 004376B4 8FB0002C */  lw    $s0, 0x2c($sp)
/* 004376B8 8FB10030 */  lw    $s1, 0x30($sp)
/* 004376BC 8FB20034 */  lw    $s2, 0x34($sp)
/* 004376C0 8FB30038 */  lw    $s3, 0x38($sp)
/* 004376C4 8FB4003C */  lw    $s4, 0x3c($sp)
/* 004376C8 8FB50040 */  lw    $s5, 0x40($sp)
/* 004376CC 8FB60044 */  lw    $s6, 0x44($sp)
/* 004376D0 8FB70048 */  lw    $s7, 0x48($sp)
/* 004376D4 8FBE0050 */  lw    $fp, 0x50($sp)
/* 004376D8 03E00008 */  jr    $ra
/* 004376DC 27BD14B8 */   addiu $sp, $sp, 0x14b8
    .type processargs, @function
    .size processargs, .-processargs
    .end processargs
)"");

/*
0043771C optinit
*/
static void func_004376E0(enum Uopcode op, bool a, bool b, bool c) {
    optab[op].unk0 = a;
    optab[op].unk1 = b;
    optab[op].unk2 = c;
}

void processargs(void); // TODO: remove after processargs decompilation

/*
0045806C main
*/
void optinit(void) {
    func_004376E0(0, 0, 1, 0);
    func_004376E0(1, 0, 1, 1);
    func_004376E0(2, 0, 1, 0);
    func_004376E0(3, 1, 1, 0);
    func_004376E0(4, 0, 1, 1);
    func_004376E0(5, 0, 1, 0);
    func_004376E0(6, 0, 0, 0);
    func_004376E0(7, 0, 0, 0);
    func_004376E0(8, 0, 1, 0);
    func_004376E0(9, 0, 1, 1);
    func_004376E0(0xA, 0, 1, 0);
    func_004376E0(0xB, 0, 1, 0);
    func_004376E0(0xC, 0, 1, 0);
    func_004376E0(0xD, 0, 1, 0);
    func_004376E0(0xE, 0, 1, 0);
    func_004376E0(0xF, 0, 1, 0);
    func_004376E0(0x10, 1, 1, 0);
    func_004376E0(0x11, 0, 1, 0);
    func_004376E0(0x12, 0, 1, 0);
    func_004376E0(0x16, 0, 1, 0);
    func_004376E0(0x13, 0, 0, 0);
    func_004376E0(0x14, 0, 0, 0);
    func_004376E0(0x15, 0, 1, 0);
    func_004376E0(0x17, 1, 1, 0);
    func_004376E0(0x18, 0, 1, 0);
    func_004376E0(0x19, 0, 1, 0);
    func_004376E0(0x1A, 0, 1, 0);
    func_004376E0(0x1B, 0, 1, 0);
    func_004376E0(0x1C, 0, 1, 1);
    func_004376E0(0x1D, 0, 1, 1);
    func_004376E0(0x1E, 0, 1, 0);
    func_004376E0(0x1F, 1, 0, 0);
    func_004376E0(0x20, 0, 1, 0);
    func_004376E0(0x21, 0, 0, 0);
    func_004376E0(0x23, 0, 1, 1);
    func_004376E0(0x27, 0, 0, 0);
    func_004376E0(0x28, 0, 1, 1);
    func_004376E0(0x29, 0, 1, 1);
    func_004376E0(0x2B, 0, 0, 0);
    func_004376E0(0x31, 1, 1, 0);
    func_004376E0(0x5F, 0, 1, 1);
    func_004376E0(0x48, 0, 1, 0);
    func_004376E0(0x4B, 0, 1, 0);
    func_004376E0(0x4D, 0, 1, 1);
    func_004376E0(0x4E, 0, 1, 1);
    func_004376E0(0x24, 0, 0, 0);
    func_004376E0(0x26, 1, 1, 0);
    func_004376E0(0x2A, 0, 0, 0);
    func_004376E0(0x2C, 1, 1, 0);
    func_004376E0(0x2D, 0, 1, 1);
    func_004376E0(0x2E, 0, 1, 1);
    func_004376E0(0x38, 0, 1, 1);
    func_004376E0(0x34, 0, 1, 1);
    func_004376E0(0x35, 0, 1, 1);
    func_004376E0(0x2F, 0, 1, 1);
    func_004376E0(0x30, 0, 1, 1);
    func_004376E0(0x32, 0, 1, 0);
    func_004376E0(0x36, 0, 1, 0);
    func_004376E0(0x33, 0, 1, 0);
    func_004376E0(0x3D, 0, 1, 0);
    func_004376E0(0x37, 0, 1, 0);
    func_004376E0(0x39, 0, 0, 0);
    func_004376E0(0x3A, 0, 1, 1);
    func_004376E0(0x3B, 0, 1, 1);
    func_004376E0(0x3C, 0, 1, 1);
    func_004376E0(0x93, 0, 1, 0);
    func_004376E0(0x94, 0, 1, 0);
    func_004376E0(0x3E, 0, 1, 0);
    func_004376E0(0x3F, 0, 1, 0);
    func_004376E0(0x40, 0, 1, 0);
    func_004376E0(0x41, 0, 1, 1);
    func_004376E0(0x42, 1, 1, 0);
    func_004376E0(0x45, 0, 1, 0);
    func_004376E0(0x43, 0, 1, 0);
    func_004376E0(0x44, 0, 1, 0);
    func_004376E0(0x46, 0, 1, 0);
    func_004376E0(0x47, 0, 1, 0);
    func_004376E0(0x49, 0, 1, 0);
    func_004376E0(0x4A, 0, 1, 0);
    func_004376E0(0x95, 0, 1, 0);
    func_004376E0(0x4C, 0, 1, 0);
    func_004376E0(0x4F, 0, 0, 0);
    func_004376E0(0x50, 0, 1, 0);
    func_004376E0(0x51, 0, 1, 0);
    func_004376E0(0x52, 0, 1, 0);
    func_004376E0(0x53, 0, 0, 0);
    func_004376E0(0x54, 0, 1, 0);
    func_004376E0(0x55, 0, 1, 1);
    func_004376E0(0x56, 0, 1, 1);
    func_004376E0(0x57, 0, 1, 1);
    func_004376E0(0x58, 0, 1, 0);
    func_004376E0(0x59, 0, 1, 0);
    func_004376E0(0x5B, 0, 1, 1);
    func_004376E0(0x5C, 0, 1, 0);
    func_004376E0(0x96, 0, 0, 0);
    func_004376E0(0x5D, 0, 1, 1);
    func_004376E0(0x5E, 0, 1, 0);
    func_004376E0(0x61, 0, 1, 0);
    func_004376E0(0x60, 0, 0, 0);
    func_004376E0(0x62, 0, 1, 0);
    func_004376E0(0x63, 0, 0, 0);
    func_004376E0(0x8E, 0, 1, 0);
    func_004376E0(0x64, 0, 1, 0);
    func_004376E0(0x65, 0, 0, 0);
    func_004376E0(0x66, 0, 1, 0);
    func_004376E0(0x67, 0, 1, 0);
    func_004376E0(0x97, 1, 1, 0);
    func_004376E0(0x68, 0, 0, 0);
    func_004376E0(0x69, 0, 1, 1);
    func_004376E0(0x6A, 1, 1, 0);
    func_004376E0(0x6D, 0, 0, 0);
    func_004376E0(0x6E, 0, 1, 0);
    func_004376E0(0x70, 0, 0, 0);
    func_004376E0(0x71, 0, 0, 0);
    func_004376E0(0x72, 0, 1, 0);
    func_004376E0(0x73, 0, 1, 1);
    func_004376E0(0x74, 0, 1, 1);
    func_004376E0(0x75, 0, 1, 1);
    func_004376E0(0x76, 0, 1, 0);
    func_004376E0(0x77, 0, 1, 0);
    func_004376E0(0x78, 0, 0, 0);
    func_004376E0(0x79, 0, 1, 0);
    func_004376E0(0x7A, 0, 0, 0);
    func_004376E0(0x7B, 0, 1, 0);
    func_004376E0(0x7C, 0, 1, 0);
    func_004376E0(0x7D, 0, 1, 1);
    func_004376E0(0x7E, 0, 1, 0);
    func_004376E0(0x7F, 1, 1, 0);
    func_004376E0(0x80, 0, 1, 1);
    func_004376E0(0x81, 0, 1, 1);
    func_004376E0(0x82, 0, 1, 1);
    func_004376E0(0x83, 0, 1, 1);
    func_004376E0(0x84, 0, 1, 1);
    func_004376E0(0x85, 0, 1, 1);
    func_004376E0(0x86, 0, 1, 0);
    func_004376E0(0x87, 0, 1, 0);
    func_004376E0(0x88, 1, 1, 0);
    func_004376E0(0x8A, 0, 1, 1);
    func_004376E0(0x8B, 0, 0, 0);
    func_004376E0(0x8C, 1, 1, 0);
    func_004376E0(0x8D, 0, 1, 1);

    perm_heap = NULL;
    ustrptr = alloc_new(0x400, &perm_heap);
    ustackbot = alloc_new(0x10, &perm_heap);
    ustackbot[2] = 0;
    ustackbot[3] = 0;
    ustack = ustackbot;
    parstackbot = alloc_new(0xC, &perm_heap);
    parstackbot[1] = 0;
    parstackbot[2] = 0;
    parstack = parstackbot;
    curlevel = 0;
    filteringout = false;
    suppressopt = false;
    o0o1specified = false;
    lang = 2;
    doingcopy = false;
    doassoc = false;
    dowhyuncolor = false;
    doprecolor = true;
    dorlodrstropt = true;
    doheurab = true;
    do_opt_saved_regs = false;
    docreatebb = false;
    do_const_in_reg = true;
    docodehoist = false;
    dorecur = true;
    dogenvreg = true;
    dotail = true;
    domtag = false;
    usingregoption = false;
    no_r23 = false;
    nopalias = false;
    no_r3 = false;
    nof77alias = true;
    fortran_lang = false;
    moremotion = false;
    genbbnum = false;
    warn_flag = false;
    warned = false;
    f77_static_flag = false;
    kpic_flag = false;
    dokpicopt = true;
    g_num = 0;
    dwopcode = false;
    int_reg_size = 4;
    mipsflag = 0;
    mips3_64data = false;
    stack_reversed = false;
    strictieee = false;
    fp32reg = false;
    varreflimit = 0x14;
    dbugno = 0;
    proc_to_print[0] = ' ';
    ctrl_head = NULL;
    movcostused = 1.0f;
    docopyprog = true;
    dordstore = true;
    doscm = false;
    docm = true;
    verbose = false;
    bigendian = true;
    o3opt = false;
    update_sym_file = false;
    sizethreshold = 1000;
    multibbunroll = true;
    unroll_times = 4;
    unroll_limit = 0x140;
    actnuminterregs = 9;
    actnuminteeregs = 0xA;
    processargs();
    if (verbose != 0) {
        write_string(err.c_file, "uopt: ", 6, 6);
        fflush(err.c_file);
    }
    prepass();
    if (usefeedback != 0) {
        incorp_feedback();
    }
    nocopy = alloc_new(0x40, &perm_heap);
    nota_candof = alloc_new(0x1C, &perm_heap);
    constprop = alloc_new(0x10, &perm_heap);
    regsinclass1 = 0x17;
    firsterreg[0] = 1;
    firsteereg[0] = 0xE;
    firstparmreg[0] = 3;
    regsinclass[1] = 0xC;
    firsterreg[1] = 0x18;
    firstparmreg[1] = 0x1A;
    numoferregs[1] = 6;
    lasterreg[1] = (6 + 0x17);
    firsteereg[1] = (6 + 0x18);
    lasteereg[1] = 0x23;
    seterregs[2] = GENMASK(firsterreg[1], lasterreg[1] + 1);
    seterregs[3] = GENMASK(firsterreg[1] - 32, lasterreg[1] - 32 + 1);
    seteeregs[2] = GENMASK(firsteereg[1], lasteereg[1] + 1);
    seteeregs[3] = GENMASK(firsteereg[1] - 32, lasteereg[1] - 32 + 1);
    setregs[2] = (seterregs[2] | seteeregs[2]);
    setregs[3] = (seterregs[3] | seteeregs[3]);
    gsptr = alloc_new(0x34, &perm_heap);
    *(unsigned char *)gsptr = 123;
    dft_livbb = (struct livbb *)alloc_new(0x18, &perm_heap);
    dft_livbb->unk10 = 0;
    dft_livbb->unk12 = 0;
    dft_livbb->unk14 = 0;
    dft_livbb->unk0 = 0;
    dft_livbb->unk13 = 0;
    dft_livbb->unk4 = 0;
    dft_livbb->unk8 = 0;
    dft_livbb->unkC = 0;
    dft_livbb->unk15 = 0;
    dft_livbb->unk16 = 0;
    dft_livbb->unk17 = 0;
    heapptr = alloc_mark(&perm_heap);
    numlcse = 0;
    numlrdstr = 0;
    numgcopy = 0;
    numgcse = 0;
    numrdstr = 0;
    numinsert = 0;
    numtstrep = 0;
    numsrinc = 0;
    numexpr = 0;
    numstr = 0;
    totvarref = 0;
    totvarrref = 0;
    totvarsav = 0;
    totvarrsav = 0;
    totexpref = 0;
    totexprref = 0;
    totexpsav = 0;
    totexprsav = 0;
    totvarrlods = 0;
    totvarrstrs = 0;
    totexprlods = 0;
    totexprstrs = 0;
    lopttime = 0;
    dataflowtime = 0;
    dataflowiter = 0;
    numdataflow = 0;
    regaloctime = 0;
}

__asm__(R""(
.text
.set noat
.set noreorder

glabel procinit
    .ent procinit
    # 00456A2C oneproc
/* 00439188 3C1C0FBE */  .cpload $t9
/* 0043918C 279C1108 */  
/* 00439190 0399E021 */  
/* 00439194 8F818990 */  lw     $at, %got(realdispdiv)($gp)
/* 00439198 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 0043919C 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 004391A0 AC200000 */  sw    $zero, ($at)
/* 004391A4 8F818994 */  lw     $at, %got(realdispmod)($gp)
/* 004391A8 AFBF001C */  sw    $ra, 0x1c($sp)
/* 004391AC AFBC0018 */  sw    $gp, 0x18($sp)
/* 004391B0 24040104 */  li    $a0, 260
/* 004391B4 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 004391B8 0320F809 */  jalr  $t9
/* 004391BC A0200000 */   sb    $zero, ($at)
/* 004391C0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004391C4 240AFFFF */  li    $t2, -1
/* 004391C8 8F898988 */  lw     $t1, %got(realstore)($gp)
/* 004391CC 8F81898C */  lw     $at, %got(currealpool)($gp)
/* 004391D0 8F858960 */  lw     $a1, %got(ustackbot)($gp)
/* 004391D4 AD220000 */  sw    $v0, ($t1)
/* 004391D8 AC400100 */  sw    $zero, 0x100($v0)
/* 004391DC AC220000 */  sw    $v0, ($at)
/* 004391E0 8F818998 */  lw     $at, %got(strpdisplace)($gp)
/* 004391E4 8CA50000 */  lw    $a1, ($a1)
/* 004391E8 8F868968 */  lw     $a2, %got(parstackbot)($gp)
/* 004391EC AC200000 */  sw    $zero, ($at)
/* 004391F0 8F8189AC */  lw     $at, %got(graphhead)($gp)
/* 004391F4 8F878D74 */  lw     $a3, %got(r2bitpos)($gp)
/* 004391F8 8F838DF8 */  lw     $v1, %got(table)($gp)
/* 004391FC AC200000 */  sw    $zero, ($at)
/* 00439200 8F8189B0 */  lw     $at, %got(graphtail)($gp)
/* 00439204 AC200000 */  sw    $zero, ($at)
/* 00439208 8F8189B4 */  lw     $at, %got(curgraphnode)($gp)
/* 0043920C AC200000 */  sw    $zero, ($at)
/* 00439210 8F818964 */  lw     $at, %got(ustack)($gp)
/* 00439214 AC250000 */  sw    $a1, ($at)
/* 00439218 ACA00008 */  sw    $zero, 8($a1)
/* 0043921C 8F81896C */  lw     $at, %got(parstack)($gp)
/* 00439220 8CC60000 */  lw    $a2, ($a2)
/* 00439224 AC260000 */  sw    $a2, ($at)
/* 00439228 8F818A34 */  lw     $at, %got(curmst)($gp)
/* 0043922C ACC00004 */  sw    $zero, 4($a2)
/* 00439230 AC200000 */  sw    $zero, ($at)
/* 00439234 8F8189B8 */  lw     $at, %got(curstaticno)($gp)
/* 00439238 AC200000 */  sw    $zero, ($at)
/* 0043923C 8F8189E0 */  lw     $at, %got(bitposcount)($gp)
/* 00439240 AC200000 */  sw    $zero, ($at)
/* 00439244 3C010001 */  lui   $at, 1
/* 00439248 24218E64 */  addiu $at, $at, -0x719c
/* 0043924C ACEA0000 */  sw    $t2, ($a3)
/* 00439250 ACEA0004 */  sw    $t2, 4($a3)
/* 00439254 ACEA0008 */  sw    $t2, 8($a3)
/* 00439258 00231021 */  addu  $v0, $at, $v1
.L0043925C:
/* 0043925C 24630004 */  addiu $v1, $v1, 4
/* 00439260 1462FFFE */  bne   $v1, $v0, .L0043925C
/* 00439264 AC60FFFC */   sw    $zero, -4($v1)
/* 00439268 8F818DF0 */  lw     $at, %got(itable)($gp)
/* 0043926C 8F828DF0 */  lw     $v0, %got(itable)($gp)
/* 00439270 8F838DF0 */  lw     $v1, %got(itable)($gp)
/* 00439274 AC200000 */  sw    $zero, ($at)
/* 00439278 8F818DF0 */  lw     $at, %got(itable)($gp)
/* 0043927C 2442000C */  addiu $v0, $v0, 0xc
/* 00439280 2463194C */  addiu $v1, $v1, 0x194c
/* 00439284 AC200004 */  sw    $zero, 4($at)
/* 00439288 8F818DF0 */  lw     $at, %got(itable)($gp)
/* 0043928C AC200008 */  sw    $zero, 8($at)
.L00439290:
/* 00439290 24420010 */  addiu $v0, $v0, 0x10
/* 00439294 AC40FFF0 */  sw    $zero, -0x10($v0)
/* 00439298 AC40FFF4 */  sw    $zero, -0xc($v0)
/* 0043929C AC40FFF8 */  sw    $zero, -8($v0)
/* 004392A0 1443FFFB */  bne   $v0, $v1, .L00439290
/* 004392A4 AC40FFFC */   sw    $zero, -4($v0)
/* 004392A8 8F8189C0 */  lw     $at, %got(stathead)($gp)
/* 004392AC 8F888CD4 */  lw     $t0, %got(varbits)($gp)
/* 004392B0 8F898CE4 */  lw     $t1, %got(slvarbits)($gp)
/* 004392B4 AC200000 */  sw    $zero, ($at)
/* 004392B8 8F8189C4 */  lw     $at, %got(stattail)($gp)
/* 004392BC 8F8B8CD8 */  lw     $t3, %got(mvarbits)($gp)
/* 004392C0 8F8C8CDC */  lw     $t4, %got(fsymbits)($gp)
/* 004392C4 AC200000 */  sw    $zero, ($at)
/* 004392C8 8F8189EC */  lw     $at, %got(bittab)($gp)
/* 004392CC 8F8D8CE0 */  lw     $t5, %got(asgnbits)($gp)
/* 004392D0 8F9F8CE8 */  lw     $ra, %got(slasgnbits)($gp)
/* 004392D4 AC200000 */  sw    $zero, ($at)
/* 004392D8 8F8189F0 */  lw     $at, %got(bittabsize)($gp)
/* 004392DC 8F828D90 */  lw     $v0, %got(setofr2bbs)($gp)
/* 004392E0 8F838D78 */  lw     $v1, %got(iscolored)($gp)
/* 004392E4 AC200000 */  sw    $zero, ($at)
/* 004392E8 8F8189F4 */  lw     $at, %got(pdeftab)($gp)
/* 004392EC 8F8E8B6C */  lw     $t6, %got(curproc)($gp)
/* 004392F0 24180001 */  li    $t8, 1
/* 004392F4 AC200000 */  sw    $zero, ($at)
/* 004392F8 8F8189F8 */  lw     $at, %got(pdeftabsize)($gp)
/* 004392FC 24190001 */  li    $t9, 1
/* 00439300 8F848CD0 */  lw     $a0, %got(strp)($gp)
/* 00439304 AC200000 */  sw    $zero, ($at)
/* 00439308 8F8189FC */  lw     $at, %got(highestmdef)($gp)
/* 0043930C 8F858DDC */  lw     $a1, %got(strpname)($gp)
/* 00439310 24060400 */  li    $a2, 1024
/* 00439314 AC200000 */  sw    $zero, ($at)
/* 00439318 8F818A00 */  lw     $at, %got(pdefmax)($gp)
/* 0043931C 00003825 */  move  $a3, $zero
/* 00439320 AC2A0000 */  sw    $t2, ($at)
/* 00439324 8F818A04 */  lw     $at, %got(pdefno)($gp)
/* 00439328 AC200000 */  sw    $zero, ($at)
/* 0043932C 8F818CEC */  lw     $at, %got(storeop)($gp)
/* 00439330 AD000004 */  sw    $zero, 4($t0)
/* 00439334 AD000000 */  sw    $zero, ($t0)
/* 00439338 AD200004 */  sw    $zero, 4($t1)
/* 0043933C AD200000 */  sw    $zero, ($t1)
/* 00439340 AD600004 */  sw    $zero, 4($t3)
/* 00439344 AD600000 */  sw    $zero, ($t3)
/* 00439348 AD800004 */  sw    $zero, 4($t4)
/* 0043934C AD800000 */  sw    $zero, ($t4)
/* 00439350 ADA00004 */  sw    $zero, 4($t5)
/* 00439354 ADA00000 */  sw    $zero, ($t5)
/* 00439358 AFE00004 */  sw    $zero, 4($ra)
/* 0043935C AFE00000 */  sw    $zero, ($ra)
/* 00439360 AC200000 */  sw    $zero, ($at)
/* 00439364 8F818CEC */  lw     $at, %got(storeop)($gp)
/* 00439368 AC200004 */  sw    $zero, 4($at)
/* 0043936C 8F818CF0 */  lw     $at, %got(trapop)($gp)
/* 00439370 AC200000 */  sw    $zero, ($at)
/* 00439374 8F818CF0 */  lw     $at, %got(trapop)($gp)
/* 00439378 AC200004 */  sw    $zero, 4($at)
/* 0043937C 8F818CF4 */  lw     $at, %got(trapconstop)($gp)
/* 00439380 AC200000 */  sw    $zero, ($at)
/* 00439384 8F818CF4 */  lw     $at, %got(trapconstop)($gp)
/* 00439388 AC200004 */  sw    $zero, 4($at)
/* 0043938C 8F818CF8 */  lw     $at, %got(indmults)($gp)
/* 00439390 AC200000 */  sw    $zero, ($at)
/* 00439394 8F818CF8 */  lw     $at, %got(indmults)($gp)
/* 00439398 AC200004 */  sw    $zero, 4($at)
/* 0043939C 8F818CFC */  lw     $at, %got(boolexp)($gp)
/* 004393A0 AC200000 */  sw    $zero, ($at)
/* 004393A4 8F818CFC */  lw     $at, %got(boolexp)($gp)
/* 004393A8 AC200004 */  sw    $zero, 4($at)
/* 004393AC 8F818D04 */  lw     $at, %got(trepexp)($gp)
/* 004393B0 AC200000 */  sw    $zero, ($at)
/* 004393B4 8F818D04 */  lw     $at, %got(trepexp)($gp)
/* 004393B8 AC200004 */  sw    $zero, 4($at)
/* 004393BC 8F818D0C */  lw     $at, %got(outmodebits)($gp)
/* 004393C0 AC200000 */  sw    $zero, ($at)
/* 004393C4 8F818D0C */  lw     $at, %got(outmodebits)($gp)
/* 004393C8 AC200004 */  sw    $zero, 4($at)
/* 004393CC 8F818D10 */  lw     $at, %got(notinmodebits)($gp)
/* 004393D0 AC200000 */  sw    $zero, ($at)
/* 004393D4 8F818D10 */  lw     $at, %got(notinmodebits)($gp)
/* 004393D8 AC200004 */  sw    $zero, 4($at)
/* 004393DC 8F818D14 */  lw     $at, %got(varfactor_muls)($gp)
/* 004393E0 AC200000 */  sw    $zero, ($at)
/* 004393E4 8F818D14 */  lw     $at, %got(varfactor_muls)($gp)
/* 004393E8 AC200004 */  sw    $zero, 4($at)
/* 004393EC 8F818D18 */  lw     $at, %got(coloreditems)($gp)
/* 004393F0 AC200000 */  sw    $zero, ($at)
/* 004393F4 8F818D18 */  lw     $at, %got(coloreditems)($gp)
/* 004393F8 AC200004 */  sw    $zero, 4($at)
/* 004393FC 8F818D1C */  lw     $at, %got(vareqv)($gp)
/* 00439400 AC200000 */  sw    $zero, ($at)
/* 00439404 8F818D1C */  lw     $at, %got(vareqv)($gp)
/* 00439408 AC200004 */  sw    $zero, 4($at)
/* 0043940C 8F818D20 */  lw     $at, %got(asgneqv)($gp)
/* 00439410 AC200000 */  sw    $zero, ($at)
/* 00439414 8F818D20 */  lw     $at, %got(asgneqv)($gp)
/* 00439418 AC200004 */  sw    $zero, 4($at)
/* 0043941C 8F818D24 */  lw     $at, %got(coloredparms)($gp)
/* 00439420 AC200000 */  sw    $zero, ($at)
/* 00439424 8F818D24 */  lw     $at, %got(coloredparms)($gp)
/* 00439428 AC200004 */  sw    $zero, 4($at)
/* 0043942C 8F818D28 */  lw     $at, %got(iscolored12)($gp)
/* 00439430 AC200000 */  sw    $zero, ($at)
/* 00439434 8F818D28 */  lw     $at, %got(iscolored12)($gp)
/* 00439438 AC200004 */  sw    $zero, 4($at)
/* 0043943C 8F818970 */  lw     $at, %got(tempdisp)($gp)
/* 00439440 AC400004 */  sw    $zero, 4($v0)
/* 00439444 AC400000 */  sw    $zero, ($v0)
/* 00439448 AC40000C */  sw    $zero, 0xc($v0)
/* 0043944C AC400008 */  sw    $zero, 8($v0)
/* 00439450 AC400014 */  sw    $zero, 0x14($v0)
/* 00439454 AC400010 */  sw    $zero, 0x10($v0)
/* 00439458 AC600004 */  sw    $zero, 4($v1)
/* 0043945C AC600000 */  sw    $zero, ($v1)
/* 00439460 AC60000C */  sw    $zero, 0xc($v1)
/* 00439464 AC600008 */  sw    $zero, 8($v1)
/* 00439468 AC200000 */  sw    $zero, ($at)
/* 0043946C 8F818974 */  lw     $at, %got(templochead)($gp)
/* 00439470 8DCE0000 */  lw    $t6, ($t6)
/* 00439474 AC200000 */  sw    $zero, ($at)
/* 00439478 8F818978 */  lw     $at, %got(temploctail)($gp)
/* 0043947C AC200000 */  sw    $zero, ($at)
/* 00439480 8F818A30 */  lw     $at, %got(aentptr)($gp)
/* 00439484 AC200000 */  sw    $zero, ($at)
/* 00439488 8F818B0C */  lw     $at, %got(allcallersave)($gp)
/* 0043948C 91CF000C */  lbu   $t7, 0xc($t6)
/* 00439490 A02F0000 */  sb    $t7, ($at)
/* 00439494 8F818B10 */  lw     $at, %got(propagate_ee_saves)($gp)
/* 00439498 A0380000 */  sb    $t8, ($at)
/* 0043949C 8F818A24 */  lw     $at, %got(passedbyfp)($gp)
/* 004394A0 A0390000 */  sb    $t9, ($at)
/* 004394A4 8F818A28 */  lw     $at, %got(offsetpassedbyint)($gp)
/* 004394A8 8F99888C */  lw    $t9, %call16(rewrite)($gp)
/* 004394AC AC200000 */  sw    $zero, ($at)
/* 004394B0 8F8189C8 */  lw     $at, %got(staticlinkloc)($gp)
/* 004394B4 0320F809 */  jalr  $t9
/* 004394B8 AC200000 */   sw    $zero, ($at)
/* 004394BC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004394C0 240E0060 */  li    $t6, 96
/* 004394C4 240F0001 */  li    $t7, 1
/* 004394C8 8F818B20 */  lw     $at, %got(outofmem)($gp)
/* 004394CC 8FBF001C */  lw    $ra, 0x1c($sp)
/* 004394D0 A0200000 */  sb    $zero, ($at)
/* 004394D4 8F818DA8 */  lw     $at, %got(lastcopiedu)($gp)
/* 004394D8 A02E0000 */  sb    $t6, ($at)
/* 004394DC 8F818B3C */  lw     $at, %got(has_exc_handler)($gp)
/* 004394E0 A0200000 */  sb    $zero, ($at)
/* 004394E4 8F818B40 */  lw     $at, %got(can_elim_tail)($gp)
/* 004394E8 A02F0000 */  sb    $t7, ($at)
/* 004394EC 8F818B44 */  lw     $at, %got(use_c_semantics)($gp)
/* 004394F0 27BD0020 */  addiu $sp, $sp, 0x20
/* 004394F4 03E00008 */  jr    $ra
/* 004394F8 A0200000 */   sb    $zero, ($at)
    .type procinit, @function
    .size procinit, .-procinit
    .end procinit

glabel procinit_regs
    .ent procinit_regs
    # 00456A2C oneproc
/* 004394FC 3C1C0FBE */  .cpload $t9
/* 00439500 279C0D94 */  
/* 00439504 0399E021 */  
/* 00439508 8F888D34 */  lw     $t0, %got(firsterreg)($gp)
/* 0043950C 8F828A18 */  lw     $v0, %got(regsinclass1)($gp)
/* 00439510 8F8B8D5C */  lw     $t3, %got(regscantpass)($gp)
/* 00439514 8D030000 */  lw    $v1, ($t0)
/* 00439518 8D050004 */  lw    $a1, 4($t0)
/* 0043951C 8C420000 */  lw    $v0, ($v0)
/* 00439520 24640001 */  addiu $a0, $v1, 1
/* 00439524 2C6E0020 */  sltiu $t6, $v1, 0x20
/* 00439528 00607827 */  not   $t7, $v1
/* 0043952C 01EEC004 */  sllv  $t8, $t6, $t7
/* 00439530 00807027 */  not   $t6, $a0
/* 00439534 2C990020 */  sltiu $t9, $a0, 0x20
/* 00439538 01D97804 */  sllv  $t7, $t9, $t6
/* 0043953C 030FC825 */  or    $t9, $t8, $t7
/* 00439540 00A0C027 */  not   $t8, $a1
/* 00439544 2CAE0020 */  sltiu $t6, $a1, 0x20
/* 00439548 030E7804 */  sllv  $t7, $t6, $t8
/* 0043954C 24A60001 */  addiu $a2, $a1, 1
/* 00439550 032F7025 */  or    $t6, $t9, $t7
/* 00439554 00C0C827 */  not   $t9, $a2
/* 00439558 2CD80020 */  sltiu $t8, $a2, 0x20
/* 0043955C 03387804 */  sllv  $t7, $t8, $t9
/* 00439560 01CFC025 */  or    $t8, $t6, $t7
/* 00439564 00407027 */  not   $t6, $v0
/* 00439568 2C590020 */  sltiu $t9, $v0, 0x20
/* 0043956C 01D97804 */  sllv  $t7, $t9, $t6
/* 00439570 030FC825 */  or    $t9, $t8, $t7
/* 00439574 3C010004 */  lui   $at, 4
/* 00439578 03217025 */  or    $t6, $t9, $at
/* 0043957C 2478FFE0 */  addiu $t8, $v1, -0x20
/* 00439580 2F0F0020 */  sltiu $t7, $t8, 0x20
/* 00439584 AD6E0000 */  sw    $t6, ($t3)
/* 00439588 0060C827 */  not   $t9, $v1
/* 0043958C 032F7004 */  sllv  $t6, $t7, $t9
/* 00439590 2498FFE0 */  addiu $t8, $a0, -0x20
/* 00439594 2F0F0020 */  sltiu $t7, $t8, 0x20
/* 00439598 0080C827 */  not   $t9, $a0
/* 0043959C 032FC004 */  sllv  $t8, $t7, $t9
/* 004395A0 01D87825 */  or    $t7, $t6, $t8
/* 004395A4 24B9FFE0 */  addiu $t9, $a1, -0x20
/* 004395A8 2F2E0020 */  sltiu $t6, $t9, 0x20
/* 004395AC 00A0C027 */  not   $t8, $a1
/* 004395B0 030EC804 */  sllv  $t9, $t6, $t8
/* 004395B4 01F97025 */  or    $t6, $t7, $t9
/* 004395B8 24D8FFE0 */  addiu $t8, $a2, -0x20
/* 004395BC 2F0F0020 */  sltiu $t7, $t8, 0x20
/* 004395C0 00C0C827 */  not   $t9, $a2
/* 004395C4 032FC004 */  sllv  $t8, $t7, $t9
/* 004395C8 01D87825 */  or    $t7, $t6, $t8
/* 004395CC 2459FFE0 */  addiu $t9, $v0, -0x20
/* 004395D0 2F2E0020 */  sltiu $t6, $t9, 0x20
/* 004395D4 0040C027 */  not   $t8, $v0
/* 004395D8 8F878B0C */  lw     $a3, %got(allcallersave)($gp)
/* 004395DC 030EC804 */  sllv  $t9, $t6, $t8
/* 004395E0 01F97025 */  or    $t6, $t7, $t9
/* 004395E4 AD6E0004 */  sw    $t6, 4($t3)
/* 004395E8 90E70000 */  lbu   $a3, ($a3)
/* 004395EC 3C010004 */  lui   $at, 4
/* 004395F0 2C6E0020 */  sltiu $t6, $v1, 0x20
/* 004395F4 10E0000E */  beqz  $a3, .L00439630
/* 004395F8 00000000 */   nop   
/* 004395FC 8F988B6C */  lw     $t8, %got(curproc)($gp)
/* 00439600 240C0001 */  li    $t4, 1
/* 00439604 8F180000 */  lw    $t8, ($t8)
/* 00439608 8F080024 */  lw    $t0, 0x24($t8)
/* 0043960C 01034821 */  addu  $t1, $t0, $v1
/* 00439610 A12CFFFF */  sb    $t4, -1($t1)
/* 00439614 A12C0000 */  sb    $t4, ($t1)
/* 00439618 01055021 */  addu  $t2, $t0, $a1
/* 0043961C A14CFFFF */  sb    $t4, -1($t2)
/* 00439620 A14C0000 */  sb    $t4, ($t2)
/* 00439624 A10C000C */  sb    $t4, 0xc($t0)
/* 00439628 01027821 */  addu  $t7, $t0, $v0
/* 0043962C A1ECFFFF */  sb    $t4, -1($t7)
.L00439630:
/* 00439630 8F998AFC */  lw     $t9, %got(someusefp)($gp)
/* 00439634 0060C027 */  not   $t8, $v1
/* 00439638 030E7804 */  sllv  $t7, $t6, $t8
/* 0043963C 93390000 */  lbu   $t9, ($t9)
/* 00439640 240C0001 */  li    $t4, 1
/* 00439644 00807027 */  not   $t6, $a0
/* 00439648 13200034 */  beqz  $t9, .L0043971C
/* 0043964C 2C990020 */   sltiu $t9, $a0, 0x20
/* 00439650 01D9C004 */  sllv  $t8, $t9, $t6
/* 00439654 01F8C825 */  or    $t9, $t7, $t8
/* 00439658 00A07827 */  not   $t7, $a1
/* 0043965C 2CAE0020 */  sltiu $t6, $a1, 0x20
/* 00439660 01EEC004 */  sllv  $t8, $t6, $t7
/* 00439664 03387025 */  or    $t6, $t9, $t8
/* 00439668 00C0C827 */  not   $t9, $a2
/* 0043966C 2CCF0020 */  sltiu $t7, $a2, 0x20
/* 00439670 032FC004 */  sllv  $t8, $t7, $t9
/* 00439674 01D87825 */  or    $t7, $t6, $t8
/* 00439678 00407027 */  not   $t6, $v0
/* 0043967C 2C590020 */  sltiu $t9, $v0, 0x20
/* 00439680 01D9C004 */  sllv  $t8, $t9, $t6
/* 00439684 01F8C825 */  or    $t9, $t7, $t8
/* 00439688 244EFFFF */  addiu $t6, $v0, -1
/* 0043968C 2DCF0020 */  sltiu $t7, $t6, 0x20
/* 00439690 01C0C027 */  not   $t8, $t6
/* 00439694 030F7804 */  sllv  $t7, $t7, $t8
/* 00439698 032FC025 */  or    $t8, $t9, $t7
/* 0043969C 0301C825 */  or    $t9, $t8, $at
/* 004396A0 AD790000 */  sw    $t9, ($t3)
/* 004396A4 246FFFE0 */  addiu $t7, $v1, -0x20
/* 004396A8 2DF80020 */  sltiu $t8, $t7, 0x20
/* 004396AC 0060C827 */  not   $t9, $v1
/* 004396B0 03387804 */  sllv  $t7, $t8, $t9
/* 004396B4 2498FFE0 */  addiu $t8, $a0, -0x20
/* 004396B8 2F190020 */  sltiu $t9, $t8, 0x20
/* 004396BC 0080C027 */  not   $t8, $a0
/* 004396C0 0319C804 */  sllv  $t9, $t9, $t8
/* 004396C4 01F9C025 */  or    $t8, $t7, $t9
/* 004396C8 24AFFFE0 */  addiu $t7, $a1, -0x20
/* 004396CC 2DF90020 */  sltiu $t9, $t7, 0x20
/* 004396D0 00A07827 */  not   $t7, $a1
/* 004396D4 01F9C804 */  sllv  $t9, $t9, $t7
/* 004396D8 03197825 */  or    $t7, $t8, $t9
/* 004396DC 24D8FFE0 */  addiu $t8, $a2, -0x20
/* 004396E0 2F190020 */  sltiu $t9, $t8, 0x20
/* 004396E4 00C0C027 */  not   $t8, $a2
/* 004396E8 0319C804 */  sllv  $t9, $t9, $t8
/* 004396EC 01F9C025 */  or    $t8, $t7, $t9
/* 004396F0 244FFFE0 */  addiu $t7, $v0, -0x20
/* 004396F4 2DF90020 */  sltiu $t9, $t7, 0x20
/* 004396F8 00407827 */  not   $t7, $v0
/* 004396FC 01F9C804 */  sllv  $t9, $t9, $t7
/* 00439700 03197825 */  or    $t7, $t8, $t9
/* 00439704 25D8FFE0 */  addiu $t8, $t6, -0x20
/* 00439708 2F190020 */  sltiu $t9, $t8, 0x20
/* 0043970C 01C0C027 */  not   $t8, $t6
/* 00439710 03197004 */  sllv  $t6, $t9, $t8
/* 00439714 01EEC825 */  or    $t9, $t7, $t6
/* 00439718 AD790004 */  sw    $t9, 4($t3)
.L0043971C:
/* 0043971C 8F988B38 */  lw     $t8, %got(leaf_for_ugen)($gp)
/* 00439720 93180000 */  lbu   $t8, ($t8)
/* 00439724 1300001A */  beqz  $t8, .L00439790
/* 00439728 00000000 */   nop   
/* 0043972C 8F8F8AF8 */  lw     $t7, %got(usefp)($gp)
/* 00439730 2419000B */  li    $t9, 11
/* 00439734 244EFFFF */  addiu $t6, $v0, -1
/* 00439738 91EF0000 */  lbu   $t7, ($t7)
/* 0043973C 11E0000C */  beqz  $t7, .L00439770
/* 00439740 00000000 */   nop   
/* 00439744 8F848D4C */  lw     $a0, %got(regsinclass)($gp)
/* 00439748 8F858D48 */  lw     $a1, %got(numoferregs)($gp)
/* 0043974C 244EFFFE */  addiu $t6, $v0, -2
/* 00439750 AC8E0000 */  sw    $t6, ($a0)
/* 00439754 10E0000B */  beqz  $a3, .L00439784
/* 00439758 ACB90000 */   sw    $t9, ($a1)
/* 0043975C 8F988B6C */  lw     $t8, %got(curproc)($gp)
/* 00439760 8F180000 */  lw    $t8, ($t8)
/* 00439764 8F0F0024 */  lw    $t7, 0x24($t8)
/* 00439768 10000006 */  b     .L00439784
/* 0043976C A1EC000B */   sb    $t4, 0xb($t7)
.L00439770:
/* 00439770 8F848D4C */  lw     $a0, %got(regsinclass)($gp)
/* 00439774 8F858D48 */  lw     $a1, %got(numoferregs)($gp)
/* 00439778 2419000C */  li    $t9, 12
/* 0043977C AC8E0000 */  sw    $t6, ($a0)
/* 00439780 ACB90000 */  sw    $t9, ($a1)
.L00439784:
/* 00439784 8F878D40 */  lw     $a3, %got(lasteereg)($gp)
/* 00439788 10000012 */  b     .L004397D4
/* 0043978C ACE20000 */   sw    $v0, ($a3)
.L00439790:
/* 00439790 8F988AF8 */  lw     $t8, %got(usefp)($gp)
/* 00439794 93180000 */  lbu   $t8, ($t8)
/* 00439798 13000005 */  beqz  $t8, .L004397B0
/* 0043979C 00000000 */   nop   
/* 004397A0 8F848D4C */  lw     $a0, %got(regsinclass)($gp)
/* 004397A4 244FFFFE */  addiu $t7, $v0, -2
/* 004397A8 10000004 */  b     .L004397BC
/* 004397AC AC8F0000 */   sw    $t7, ($a0)
.L004397B0:
/* 004397B0 8F848D4C */  lw     $a0, %got(regsinclass)($gp)
/* 004397B4 244EFFFF */  addiu $t6, $v0, -1
/* 004397B8 AC8E0000 */  sw    $t6, ($a0)
.L004397BC:
/* 004397BC 8F858D48 */  lw     $a1, %got(numoferregs)($gp)
/* 004397C0 8F878D40 */  lw     $a3, %got(lasteereg)($gp)
/* 004397C4 8C980000 */  lw    $t8, ($a0)
/* 004397C8 2419000D */  li    $t9, 13
/* 004397CC ACB90000 */  sw    $t9, ($a1)
/* 004397D0 ACF80000 */  sw    $t8, ($a3)
.L004397D4:
/* 004397D4 8F888D3C */  lw     $t0, %got(lasterreg)($gp)
/* 004397D8 8CAF0000 */  lw    $t7, ($a1)
/* 004397DC 8F868D84 */  lw     $a2, %got(setregs)($gp)
/* 004397E0 8F898D7C */  lw     $t1, %got(seterregs)($gp)
/* 004397E4 8F8A8D80 */  lw     $t2, %got(seteeregs)($gp)
/* 004397E8 8F8B8D50 */  lw     $t3, %got(highesterreg)($gp)
/* 004397EC 8F8C8D54 */  lw     $t4, %got(highesteereg)($gp)
/* 004397F0 8F8D8D88 */  lw     $t5, %got(usedeeregs)($gp)
/* 004397F4 00607025 */  move  $t6, $v1
/* 004397F8 04610002 */  bgez  $v1, .L00439804
/* 004397FC AD0F0000 */   sw    $t7, ($t0)
/* 00439800 240E0000 */  li    $t6, 0
.L00439804:
/* 00439804 8D190000 */  lw    $t9, ($t0)
/* 00439808 27380001 */  addiu $t8, $t9, 1
/* 0043980C 2B010021 */  slti  $at, $t8, 0x21
/* 00439810 54200003 */  bnezl $at, .L00439820
/* 00439814 01D87823 */   subu  $t7, $t6, $t8
/* 00439818 24180020 */  li    $t8, 32
/* 0043981C 01D87823 */  subu  $t7, $t6, $t8
.L00439820:
/* 00439820 000FC7C3 */  sra   $t8, $t7, 0x1f
/* 00439824 01F8C004 */  sllv  $t8, $t8, $t7
/* 00439828 01D87806 */  srlv  $t7, $t8, $t6
/* 0043982C 2478FFE0 */  addiu $t8, $v1, -0x20
/* 00439830 07010002 */  bgez  $t8, .L0043983C
/* 00439834 AD2F0000 */   sw    $t7, ($t1)
/* 00439838 24180000 */  li    $t8, 0
.L0043983C:
/* 0043983C 272EFFE1 */  addiu $t6, $t9, -0x1f
/* 00439840 29C10021 */  slti  $at, $t6, 0x21
/* 00439844 54200003 */  bnezl $at, .L00439854
/* 00439848 030E7823 */   subu  $t7, $t8, $t6
/* 0043984C 240E0020 */  li    $t6, 32
/* 00439850 030E7823 */  subu  $t7, $t8, $t6
.L00439854:
/* 00439854 000FCFC3 */  sra   $t9, $t7, 0x1f
/* 00439858 8F828D38 */  lw     $v0, %got(firsteereg)($gp)
/* 0043985C 01F97004 */  sllv  $t6, $t9, $t7
/* 00439860 030EC806 */  srlv  $t9, $t6, $t8
/* 00439864 AD390004 */  sw    $t9, 4($t1)
/* 00439868 8C420000 */  lw    $v0, ($v0)
/* 0043986C 8CE40000 */  lw    $a0, ($a3)
/* 00439870 04410002 */  bgez  $v0, .L0043987C
/* 00439874 00407825 */   move  $t7, $v0
/* 00439878 240F0000 */  li    $t7, 0
.L0043987C:
/* 0043987C 248E0001 */  addiu $t6, $a0, 1
/* 00439880 29C10021 */  slti  $at, $t6, 0x21
/* 00439884 54200003 */  bnezl $at, .L00439894
/* 00439888 01EEC023 */   subu  $t8, $t7, $t6
/* 0043988C 240E0020 */  li    $t6, 32
/* 00439890 01EEC023 */  subu  $t8, $t7, $t6
.L00439894:
/* 00439894 0018CFC3 */  sra   $t9, $t8, 0x1f
/* 00439898 03197004 */  sllv  $t6, $t9, $t8
/* 0043989C 01EEC806 */  srlv  $t9, $t6, $t7
/* 004398A0 2458FFE0 */  addiu $t8, $v0, -0x20
/* 004398A4 07010002 */  bgez  $t8, .L004398B0
/* 004398A8 AD590000 */   sw    $t9, ($t2)
/* 004398AC 24180000 */  li    $t8, 0
.L004398B0:
/* 004398B0 248EFFE1 */  addiu $t6, $a0, -0x1f
/* 004398B4 29C10021 */  slti  $at, $t6, 0x21
/* 004398B8 54200003 */  bnezl $at, .L004398C8
/* 004398BC 030E7823 */   subu  $t7, $t8, $t6
/* 004398C0 240E0020 */  li    $t6, 32
/* 004398C4 030E7823 */  subu  $t7, $t8, $t6
.L004398C8:
/* 004398C8 000FCFC3 */  sra   $t9, $t7, 0x1f
/* 004398CC 01F97004 */  sllv  $t6, $t9, $t7
/* 004398D0 030EC806 */  srlv  $t9, $t6, $t8
/* 004398D4 8D4E0000 */  lw    $t6, ($t2)
/* 004398D8 8D2F0000 */  lw    $t7, ($t1)
/* 004398DC AD590004 */  sw    $t9, 4($t2)
/* 004398E0 8D390004 */  lw    $t9, 4($t1)
/* 004398E4 01EEC025 */  or    $t8, $t7, $t6
/* 004398E8 8D4F0004 */  lw    $t7, 4($t2)
/* 004398EC ACD80000 */  sw    $t8, ($a2)
/* 004398F0 24180006 */  li    $t8, 6
/* 004398F4 032F7025 */  or    $t6, $t9, $t7
/* 004398F8 ACCE0004 */  sw    $t6, 4($a2)
/* 004398FC 8D0E0004 */  lw    $t6, 4($t0)
/* 00439900 AD780000 */  sw    $t8, ($t3)
/* 00439904 8F988AD0 */  lw     $t8, %got(usingregoption)($gp)
/* 00439908 2459FFFF */  addiu $t9, $v0, -1
/* 0043990C 240F001B */  li    $t7, 27
/* 00439910 AD990000 */  sw    $t9, ($t4)
/* 00439914 ADA00000 */  sw    $zero, ($t5)
/* 00439918 ADA00004 */  sw    $zero, 4($t5)
/* 0043991C AD6F0004 */  sw    $t7, 4($t3)
/* 00439920 ADA00008 */  sw    $zero, 8($t5)
/* 00439924 ADA0000C */  sw    $zero, 0xc($t5)
/* 00439928 AD8E0004 */  sw    $t6, 4($t4)
/* 0043992C 93180000 */  lbu   $t8, ($t8)
/* 00439930 17000018 */  bnez  $t8, .L00439994
/* 00439934 00000000 */   nop   
/* 00439938 8F998AD4 */  lw     $t9, %got(no_r23)($gp)
/* 0043993C 93390000 */  lbu   $t9, ($t9)
/* 00439940 17200005 */  bnez  $t9, .L00439958
/* 00439944 00000000 */   nop   
/* 00439948 8F858D58 */  lw     $a1, %got(dftregsused)($gp)
/* 0043994C ACA00000 */  sw    $zero, ($a1)
/* 00439950 03E00008 */  jr    $ra
/* 00439954 ACA00004 */   sw    $zero, 4($a1)

.L00439958:
/* 00439958 8F8F8AD8 */  lw     $t7, %got(no_r3)($gp)
/* 0043995C 91EF0000 */  lbu   $t7, ($t7)
/* 00439960 15E00006 */  bnez  $t7, .L0043997C
/* 00439964 00000000 */   nop   
/* 00439968 8F858D58 */  lw     $a1, %got(dftregsused)($gp)
/* 0043996C 240E0400 */  li    $t6, 1024
/* 00439970 ACAE0000 */  sw    $t6, ($a1)
/* 00439974 03E00008 */  jr    $ra
/* 00439978 ACA00004 */   sw    $zero, 4($a1)

.L0043997C:
/* 0043997C 8F858D58 */  lw     $a1, %got(dftregsused)($gp)
/* 00439980 3C182000 */  lui   $t8, 0x2000
/* 00439984 37180400 */  ori   $t8, $t8, 0x400
/* 00439988 ACB80000 */  sw    $t8, ($a1)
/* 0043998C 03E00008 */  jr    $ra
/* 00439990 ACA00004 */   sw    $zero, 4($a1)

.L00439994:
/* 00439994 8F858D58 */  lw     $a1, %got(dftregsused)($gp)
/* 00439998 8F838A14 */  lw     $v1, %got(actnuminterregs)($gp)
/* 0043999C 3C191E00 */  lui   $t9, 0x1e00
/* 004399A0 ACB90000 */  sw    $t9, ($a1)
/* 004399A4 ACA00004 */  sw    $zero, 4($a1)
/* 004399A8 8C630000 */  lw    $v1, ($v1)
/* 004399AC 24070009 */  li    $a3, 9
/* 004399B0 3C0F7FFC */  lui   $t7, 0x7ffc
/* 004399B4 10E3003D */  beq   $a3, $v1, .L00439AAC
/* 004399B8 00000000 */   nop   
/* 004399BC ACAF0000 */  sw    $t7, ($a1)
/* 004399C0 1860003A */  blez  $v1, .L00439AAC
/* 004399C4 ACA00004 */   sw    $zero, 4($a1)
/* 004399C8 28610007 */  slti  $at, $v1, 7
/* 004399CC 14200002 */  bnez  $at, .L004399D8
/* 004399D0 00607025 */   move  $t6, $v1
/* 004399D4 240E0006 */  li    $t6, 6
.L004399D8:
/* 004399D8 25D80006 */  addiu $t8, $t6, 6
/* 004399DC 27190001 */  addiu $t9, $t8, 1
/* 004399E0 2B210021 */  slti  $at, $t9, 0x21
/* 004399E4 14200002 */  bnez  $at, .L004399F0
/* 004399E8 240F0007 */   li    $t7, 7
/* 004399EC 24190020 */  li    $t9, 32
.L004399F0:
/* 004399F0 01F97023 */  subu  $t6, $t7, $t9
/* 004399F4 000E7FC3 */  sra   $t7, $t6, 0x1f
/* 004399F8 01CFC804 */  sllv  $t9, $t7, $t6
/* 004399FC 001979C2 */  srl   $t7, $t9, 7
/* 00439A00 8CB90000 */  lw    $t9, ($a1)
/* 00439A04 01E07027 */  not   $t6, $t7
/* 00439A08 032E7824 */  and   $t7, $t9, $t6
/* 00439A0C 2719FFE1 */  addiu $t9, $t8, -0x1f
/* 00439A10 2B210021 */  slti  $at, $t9, 0x21
/* 00439A14 14200002 */  bnez  $at, .L00439A20
/* 00439A18 ACAF0000 */   sw    $t7, ($a1)
/* 00439A1C 24190020 */  li    $t9, 32
.L00439A20:
/* 00439A20 00197023 */  negu  $t6, $t9
/* 00439A24 000E7FC3 */  sra   $t7, $t6, 0x1f
/* 00439A28 01CFC004 */  sllv  $t8, $t7, $t6
/* 00439A2C 8CAF0004 */  lw    $t7, 4($a1)
/* 00439A30 0300C827 */  not   $t9, $t8
/* 00439A34 24010007 */  li    $at, 7
/* 00439A38 01F97024 */  and   $t6, $t7, $t9
/* 00439A3C 14610008 */  bne   $v1, $at, .L00439A60
/* 00439A40 ACAE0004 */   sw    $t6, 4($a1)
/* 00439A44 8CB80000 */  lw    $t8, ($a1)
/* 00439A48 3C01DFFF */  lui   $at, 0xdfff
/* 00439A4C 3421FFFF */  ori   $at, $at, 0xffff
/* 00439A50 03017824 */  and   $t7, $t8, $at
/* 00439A54 ACAF0000 */  sw    $t7, ($a1)
/* 00439A58 10000014 */  b     .L00439AAC
/* 00439A5C ACAE0004 */   sw    $t6, 4($a1)
.L00439A60:
/* 00439A60 24010008 */  li    $at, 8
/* 00439A64 14610009 */  bne   $v1, $at, .L00439A8C
/* 00439A68 00000000 */   nop   
/* 00439A6C 8CAE0000 */  lw    $t6, ($a1)
/* 00439A70 3C01DDFF */  lui   $at, 0xddff
/* 00439A74 8CAF0004 */  lw    $t7, 4($a1)
/* 00439A78 3421FFFF */  ori   $at, $at, 0xffff
/* 00439A7C 01C1C024 */  and   $t8, $t6, $at
/* 00439A80 ACB80000 */  sw    $t8, ($a1)
/* 00439A84 10000009 */  b     .L00439AAC
/* 00439A88 ACAF0004 */   sw    $t7, 4($a1)
.L00439A8C:
/* 00439A8C 14E30007 */  bne   $a3, $v1, .L00439AAC
/* 00439A90 3C01DDFB */   lui   $at, 0xddfb
/* 00439A94 8CB90000 */  lw    $t9, ($a1)
/* 00439A98 8CB80004 */  lw    $t8, 4($a1)
/* 00439A9C 3421FFFF */  ori   $at, $at, 0xffff
/* 00439AA0 03217024 */  and   $t6, $t9, $at
/* 00439AA4 ACAE0000 */  sw    $t6, ($a1)
/* 00439AA8 ACB80004 */  sw    $t8, 4($a1)
.L00439AAC:
/* 00439AAC 8F838A10 */  lw     $v1, %got(actnuminteeregs)($gp)
/* 00439AB0 2401000A */  li    $at, 10
/* 00439AB4 248E0001 */  addiu $t6, $a0, 1
/* 00439AB8 8C630000 */  lw    $v1, ($v1)
/* 00439ABC 1061001E */  beq   $v1, $at, .L00439B38
/* 00439AC0 00437821 */   addu  $t7, $v0, $v1
/* 00439AC4 05E10002 */  bgez  $t7, .L00439AD0
/* 00439AC8 01E0C825 */   move  $t9, $t7
/* 00439ACC 24190000 */  li    $t9, 0
.L00439AD0:
/* 00439AD0 29C10021 */  slti  $at, $t6, 0x21
/* 00439AD4 54200003 */  bnezl $at, .L00439AE4
/* 00439AD8 032EC023 */   subu  $t8, $t9, $t6
/* 00439ADC 240E0020 */  li    $t6, 32
/* 00439AE0 032EC023 */  subu  $t8, $t9, $t6
.L00439AE4:
/* 00439AE4 001877C3 */  sra   $t6, $t8, 0x1f
/* 00439AE8 030E7004 */  sllv  $t6, $t6, $t8
/* 00439AEC 032EC006 */  srlv  $t8, $t6, $t9
/* 00439AF0 8CAE0000 */  lw    $t6, ($a1)
/* 00439AF4 01D8C825 */  or    $t9, $t6, $t8
/* 00439AF8 25EEFFE0 */  addiu $t6, $t7, -0x20
/* 00439AFC 05C10002 */  bgez  $t6, .L00439B08
/* 00439B00 ACB90000 */   sw    $t9, ($a1)
/* 00439B04 240E0000 */  li    $t6, 0
.L00439B08:
/* 00439B08 2498FFE1 */  addiu $t8, $a0, -0x1f
/* 00439B0C 2B010021 */  slti  $at, $t8, 0x21
/* 00439B10 54200003 */  bnezl $at, .L00439B20
/* 00439B14 01D8C823 */   subu  $t9, $t6, $t8
/* 00439B18 24180020 */  li    $t8, 32
/* 00439B1C 01D8C823 */  subu  $t9, $t6, $t8
.L00439B20:
/* 00439B20 00197FC3 */  sra   $t7, $t9, 0x1f
/* 00439B24 032FC004 */  sllv  $t8, $t7, $t9
/* 00439B28 8CB90004 */  lw    $t9, 4($a1)
/* 00439B2C 01D87806 */  srlv  $t7, $t8, $t6
/* 00439B30 032FC025 */  or    $t8, $t9, $t7
/* 00439B34 ACB80004 */  sw    $t8, 4($a1)
.L00439B38:
/* 00439B38 8CAE0000 */  lw    $t6, ($a1)
/* 00439B3C 8CD90000 */  lw    $t9, ($a2)
/* 00439B40 8CB80004 */  lw    $t8, 4($a1)
/* 00439B44 01D97824 */  and   $t7, $t6, $t9
/* 00439B48 8CCE0004 */  lw    $t6, 4($a2)
/* 00439B4C ACAF0000 */  sw    $t7, ($a1)
/* 00439B50 030EC824 */  and   $t9, $t8, $t6
/* 00439B54 ACB90004 */  sw    $t9, 4($a1)
/* 00439B58 03E00008 */  jr    $ra
/* 00439B5C 00000000 */   nop   
    .type procinit_regs, @function
    .size procinit_regs, .-procinit_regs
    .end procinit_regs

glabel write_updated_st
    .ent write_updated_st
    # 0045806C main
/* 00439B60 3C1C0FBE */  .cpload $t9
/* 00439B64 279C0730 */  
/* 00439B68 0399E021 */  
/* 00439B6C 8F8E88DC */  lw     $t6, %got(sym_file_updated)($gp)
/* 00439B70 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00439B74 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00439B78 91CE0000 */  lbu   $t6, ($t6)
/* 00439B7C AFBC0018 */  sw    $gp, 0x18($sp)
/* 00439B80 51C0000D */  beql  $t6, $zero, .L00439BB8
/* 00439B84 8FBF001C */   lw    $ra, 0x1c($sp)
/* 00439B88 8F9982E0 */  lw    $t9, %call16(addnullfilename)($gp)
/* 00439B8C 8F848DE0 */  lw     $a0, %got(symname)($gp)
/* 00439B90 0320F809 */  jalr  $t9
/* 00439B94 00000000 */   nop   
/* 00439B98 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00439B9C 2405FFFF */  li    $a1, -1
/* 00439BA0 8F998810 */  lw    $t9, %call16(st_writebinary)($gp)
/* 00439BA4 8F848DB8 */  lw     $a0, %got(st_str)($gp)
/* 00439BA8 0320F809 */  jalr  $t9
/* 00439BAC 00000000 */   nop   
/* 00439BB0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00439BB4 8FBF001C */  lw    $ra, 0x1c($sp)
.L00439BB8:
/* 00439BB8 27BD0020 */  addiu $sp, $sp, 0x20
/* 00439BBC 03E00008 */  jr    $ra
/* 00439BC0 00000000 */   nop   
    .type write_updated_st, @function
    .size write_updated_st, .-write_updated_st
    .end write_updated_st
)"");
