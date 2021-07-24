__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
RO_10009380:
    # 00414040 init_ibuffer
    .ascii "Insufficiant memory                                                             "

RO_100093D0:
    # 00414040 init_ibuffer
    .ascii "emit.p                                                                          "

RO_10009420:
    # 004141CC grow_ibuffer
    .ascii "Insufficiant memory                                                             "

RO_10009470:
    # 004141CC grow_ibuffer
    .ascii "emit.p                                                                          "

RO_100094C0:
    # 0041462C create_local_label
    .ascii "local label out of range                                                        "

RO_10009510:
    # 0041462C create_local_label
    .ascii "emit.p                                                                          "

RO_10009560:
    # 004147EC emit_rob
    .ascii "emit_rob: "

RO_1000956A:
    # 00414B14 emit_rab
    .ascii "emit_rab: "

RO_10009574:
    # 00414E38 emit_rrab
    .ascii "emit_rab: "

RO_1000957E:
    # 0041514C emit_rllb
    .ascii "emit_rllb: "

RO_10009589:
    # 00415494 emit_ra
    .ascii "emit_ra: "

RO_10009592:
    # 00415764 emit_ri_
    .ascii "emit_ri: "

RO_1000959B:
    # 00415A80 emit_rfi
    .ascii "                "

RO_100095AB:
    # 00415A80 emit_rfi
    .ascii "emit_rfi: "

RO_100095B5:
    # 00415FDC emit_rrfi
    .ascii "emit_rl: "

RO_100095BE:
    # 00416278 emit_rrr
    .ascii "emit_rrr: "

RO_100095C8:
    # 00416580 emit_rri_
    .ascii "emit_rri: "

RO_100095D2:
    # 0041687C emit_rrri
    .ascii "emit_rrri: "

RO_100095DD:
    # 00416B70 emit_rr
    .ascii "emit_rr: "

RO_100095E6:
    # 00416DFC emit_a
    .ascii "emit_a: "

RO_100095EE:
    # 0041705C emit_r
    .ascii "emit_r: "

RO_100095F6:
    # 004172AC emit_i
    .ascii "emit_i: "

RO_100095FE:
    # 004174CC emit_rrl
    .ascii "emit_rrl: "

RO_10009608:
    # 0041777C emit_rrll
    .ascii "emit_rrll: "

RO_10009613:
    # 00417A44 emit_rl
    .ascii "emit_rl: "

RO_1000961C:
    # 00417CB8 emit_rll
    .ascii "emit_rll: "

RO_10009626:
    # 00417F44 emit_l
    .ascii "emit_l: "

RO_1000962E:
    # 00418150 emit_ll
    .ascii "emit_ll: "

RO_10009637:
    # 00418374 emit_ril
    .ascii "emit_ril: "

RO_10009641:
    # 0041860C emit_rill
    .ascii "emit_rill: "

RO_1000964C:
    # 00418968 emit_itext
    .ascii "                "

RO_1000965C:
    # 00418B9C demit_itext
    .ascii "                "

    .balign 4
jtbl_1000966C:
    # 00418FCC emit_dir2
    .gpword .L00419094
    .gpword .L004190C0

    .balign 4
jtbl_10009674:
    # 0041A618 demit_dir2
    .gpword .L0041A6B4
    .gpword .L0041A738
    .gpword .L0041A738
    .gpword .L0041A70C

.data
D_10012570:
    # 004147EC emit_rob
    # 00414B14 emit_rab
    # 00414E38 emit_rrab
    # 0041514C emit_rllb
    # 00415494 emit_ra
    # 00415764 emit_ri_
    # 00415A80 emit_rfi
    # 00415FDC emit_rrfi
    # 00416278 emit_rrr
    # 00416580 emit_rri_
    # 0041687C emit_rrri
    # 00416B70 emit_rr
    # 00416DFC emit_a
    # 0041705C emit_r
    # 004172AC emit_i
    # 004174CC emit_rrl
    # 0041777C emit_rrll
    # 00417A44 emit_rl
    # 00417CB8 emit_rll
    # 00417F44 emit_l
    # 00418150 emit_ll
    # 00418374 emit_ril
    # 0041860C emit_rill
    .ascii "zabs\x00   zadd\x00   zaddu\x00  zand\x00   zb\x00 zbc0f\x00  zbc0t\x00  zbc1f\x00  zbc1t\x00  zbc2f\x00  zbc2t\x00  zlgota\x00 z12\x00zbeq\x00   zbge\x00   zbgeu\x00  zbgez\x00  zbgt\x00   zbgtu\x00  zbgtz\x00  zble\x00   zbleu\x00  zblez\x00  zblt\x00   zbltu\x00  zbltz\x00  zbne\x00   zbreak\x00 zc0\x00zc1\x00zc2\x00z31\x00zdiv\x00   zdivu\x00  zj\x00 zjal\x00   zla\x00zlb\x00zlbu\x00   zlh\x00zlhu\x00   zli\x00zlw\x00zjr\x00zlwc1\x00  zlwc2\x00  zpref\x00  zmfhi\x00  zmflo\x00  zmove\x00  zjalr\x00  zswc1\x00  zswc2\x00  z53\x00zmthi\x00  zmtlo\x00  zmul\x00   zmulo\x00  zmulou\x00 zmult\x00  zmultu\x00 zneg\x00   znop\x00   znor\x00   zor\x00zrem\x00   zremu\x00  zrfe\x00   zrol\x00   zror\x00   zsb\x00zseq\x00   zsge\x00   zsgeu\x00  zsgt\x00   zsgtu\x00  zsh\x00zsle\x00   zsleu\x00  zsll\x00   zslt\x00   zsltu\x00  zsne\x00   zsra\x00   zsrl\x00   zsub\x00   zsubu\x00  zsw\x00zsyscall\x00   zxor\x00   znot\x00   zlwl\x00   zlwr\x00   zswl\x00   zswr\x00   zvcall\x00 zmfc0\x00  zmfc1\x00  zmfc2\x00  z99\x00zmtc0\x00  zmtc1\x00  zmtc2\x00  zsync\x00  ztlbr\x00  ztlbwi\x00 ztlbwr\x00 ztlbp\x00  zld\x00zsd\x00z110\x00   zldc1\x00  zldc2\x00  ztlbr1\x00 ztlbp1\x00 zsdc1\x00  zsdc2\x00  z117\x00   fl_s\x00   fl_d\x00   fl_e\x00   fs_s\x00   fs_d\x00   fs_e\x00   fadd_s\x00 fadd_d\x00 fadd_e\x00 fsub_s\x00 fsub_d\x00 fsub_e\x00 fmul_s\x00 fmul_d\x00 fmul_e\x00 fdiv_s\x00 fdiv_d\x00 fdiv_e\x00 fsqrt_s\x00fsqrt_d\x00fsqrt_e\x00fmov_s\x00 fmov_d\x00 fmov_e\x00 fabs_s\x00 fabs_d\x00 fabs_e\x00 fcvt_s_d\x00   fcvt_s_e\x00   fcvt_s_w\x00   fcvt_d_s\x00   fcvt_d_e\x00   fcvt_d_w\x00   fcvt_e_s\x00   fcvt_e_d\x00   fcvt_e_w\x00   fcvt_w_s\x00   fcvt_w_d\x00   fcvt_w_e\x00   fc_f_s\x00 fc_f_d\x00 fc_f_e\x00 fc_un_s\x00fc_un_d\x00fc_un_e\x00fc_eq_s\x00fc_eq_d\x00fc_eq_e\x00fc_ueq_s\x00   fc_ueq_d\x00   fc_ueq_e\x00   fc_olt_s\x00   fc_olt_d\x00   fc_olt_e\x00   fc_ult_s\x00   fc_ult_d\x00   fc_ult_e\x00   fc_ole_s\x00   fc_ole_d\x00   fc_ole_e\x00   fc_ule_s\x00   fc_ule_d\x00   fc_ule_e\x00   fc_sf_s\x00fc_sf_d\x00fc_sf_e\x00fc_ngle_s\x00  fc_ngle_d\x00  fc_ngle_e\x00  fc_seq_s\x00   fc_seq_d\x00   fc_seq_e\x00   fc_ngl_s\x00   fc_ngl_d\x00   fc_ngl_e\x00   fc_lt_s\x00fc_lt_d\x00fc_lt_e\x00fc_nge_s\x00   fc_nge_d\x00   fc_nge_e\x00   fc_le_s\x00fc_le_d\x00fc_le_e\x00fc_ngt_s\x00   fc_ngt_d\x00   fc_ngt_e\x00   zlui\x00   zulw\x00   zulh\x00   zulhu\x00  zusw\x00   zush\x00   zaddi\x00  zaddiu\x00 zslti\x00  zsltiu\x00 zandi\x00  zori\x00   zxori\x00  z218\x00   znegu\x00  zbeqz\x00  zbnez\x00  fneg_s\x00 fneg_d\x00 fneg_e\x00 zcfc1\x00  zctc1\x00  zbal\x00   zbgezal\x00zbltzal\x00zmtc1_d\x00zmfc1_d\x00ztrunc_w_s\x00 ztrunc_w_d\x00 ztrunc_w_e\x00 zround_w_s\x00 zround_w_d\x00 zround_w_e\x00 zaddou\x00 zsubou\x00 ztruncu_w_s\x00ztruncu_w_d\x00ztruncu_w_e\x00zroundu_w_s\x00zroundu_w_d\x00zroundu_w_e\x00zcfc0\x00  zcfc2\x00  z248\x00   zctc0\x00  zctc2\x00  z251\x00   fli_s\x00  fli_d\x00  fli_e\x00  ztlt\x00   ztltu\x00  ztge\x00   ztgeu\x00  zteq\x00   ztne\x00   zll\x00zsc\x00zceil_w_s\x00  zceil_w_d\x00  zceil_w_e\x00  zceilu_w_s\x00 zceilu_w_d\x00 zceilu_w_e\x00 zfloor_w_s\x00 zfloor_w_d\x00 zfloor_w_e\x00 zflooru_w_s\x00zflooru_w_d\x00zflooru_w_e\x00zbeql\x00  zbeqzl\x00 zbnel\x00  zbnezl\x00 zblel\x00  zbleul\x00 zblezl\x00 zbgtl\x00  zbgtul\x00 zbgtzl\x00 zbltl\x00  zbltul\x00 zbltzl\x00 zbltzall\x00   zbgel\x00  zbgeul\x00 zbgezl\x00 zbgezall\x00   zbc0fl\x00 zbc0tl\x00 zbc1fl\x00 zbc1tl\x00 zbc2fl\x00 zbc2tl\x00 z299\x00   z300\x00   zldl\x00   zldr\x00   zlld\x00   zlwu\x00   zsdl\x00   zsdr\x00   zscd\x00   zdaddi\x00 zdaddiu\x00zdadd\x00  zdaddu\x00 zdsub\x00  zdsubu\x00 zdsll\x00  zdsrl\x00  zdsra\x00  zdsllv\x00 zdsrlv\x00 zdsrav\x00 zdmult\x00 zdmultu\x00zddiv\x00  zddivu\x00 zlsc1\x00  zssc1\x00  zdmtc1\x00 zdmfc1\x00 zdmtc0\x00 zdmfc0\x00 zdmtc2\x00 zdmfc2\x00 zdli\x00   zdla\x00   zeret\x00  ztrunc_l_s\x00 zround_l_s\x00 zceil_l_s\x00  zfloor_l_s\x00 ztrunc_l_d\x00 zround_l_d\x00 zceil_l_d\x00  zfloor_l_d\x00 ztrunc_l_e\x00 zround_l_e\x00 zceil_l_e\x00  zfloor_l_e\x00 fcvt_l_s\x00   fcvt_l_d\x00   fcvt_l_e\x00   fcvt_l_w\x00   fcvt_s_l\x00   fcvt_d_l\x00   fcvt_e_l\x00   fcvt_w_l\x00   zcache\x00 zcia\x00   zuld\x00   zusd\x00   zdabs\x00  zdneg\x00  zdnegu\x00 zdmul\x00  zdmulo\x00 zdmulou\x00zdrem\x00  zdremu\x00 zdrol\x00  zdror\x00  zdaddou\x00zdsubou\x00zulwu\x00  zmovt\x00  zmovf\x00  zmovn\x00  zmovz\x00  fmadd_s\x00fmadd_d\x00fmadd_e\x00fmsub_s\x00fmsub_d\x00fmsub_e\x00fnmadd_s\x00   fnmadd_d\x00   fnmadd_e\x00   fnmsub_s\x00   fnmsub_d\x00   fnmsub_e\x00   frecip_s\x00   frecip_d\x00   frsqrt_s\x00   frsqrt_d\x00   fmovt_s\x00fmovt_d\x00fmovf_s\x00fmovf_d\x00fmovn_s\x00fmovn_d\x00fmovz_s\x00fmovz_d\x00zlwxc1\x00 zldxc1\x00 zswxc1\x00 zsdxc1\x00 zpfetch\x00zdctr\x00  zdctw\x00  ztlbw\x00  znada\x00  zssnop\x00 zdsll32\x00zdsrl32\x00zdsra32\x00zbc3f\x00  zbc3t\x00  zc3\x00zlwc3\x00  zswc3\x00  zmfc3\x00  zmtc3\x00  zcfc3\x00  zctc3\x00  zsllv\x00  zsrlv\x00  zsrav\x00  zmfpc\x00  zmtpc\x00  zmfps\x00  zmtps\x00  zbad\x00\x00  "

D_1001340C:
    # 004147EC emit_rob
    # 00414B14 emit_rab
    # 00414E38 emit_rrab
    # 0041514C emit_rllb
    # 00415494 emit_ra
    # 00415764 emit_ri_
    # 00415A80 emit_rfi
    # 00415FDC emit_rrfi
    # 00416278 emit_rrr
    # 00416580 emit_rri_
    # 0041687C emit_rrri
    # 00416B70 emit_rr
    # 0041705C emit_r
    # 004174CC emit_rrl
    # 0041777C emit_rrll
    # 00417A44 emit_rl
    # 00417CB8 emit_rll
    # 00418374 emit_ril
    # 0041860C emit_rill
    .ascii "xr0\x00xr1\x00xr2\x00xr3\x00xr4\x00xr5\x00xr6\x00xr7\x00xr8\x00xr9\x00xr10\x00   xr11\x00   xr12\x00   xr13\x00   xr14\x00   xr15\x00   xr16\x00   xr17\x00   xr18\x00   xr19\x00   xr20\x00   xr21\x00   xr22\x00   xr23\x00   xr24\x00   xr25\x00   xr26\x00   xr27\x00   xr28\x00   xr29\x00   xr30\x00   xr31\x00   xfr0\x00   xfr1\x00   xfr2\x00   xfr3\x00   xfr4\x00   xfr5\x00   xfr6\x00   xfr7\x00   xfr8\x00   xfr9\x00   xfr10\x00  xfr11\x00  xfr12\x00  xfr13\x00  xfr14\x00  xfr15\x00  xfr16\x00  xfr17\x00  xfr18\x00  xfr19\x00  xfr20\x00  xfr21\x00  xfr22\x00  xfr23\x00  xfr24\x00  xfr25\x00  xfr26\x00  xfr27\x00  xfr28\x00  xfr29\x00  xfr30\x00  xfr31\x00  xfcc0\x00  xfcc1\x00  xfcc2\x00  xfcc3\x00  xfcc4\x00  xfcc5\x00  xfcc6\x00  xfcc7\x00  xnoreg\x00\x00"

D_1001362C:
    # 00418DD0 emit_dir0
    .byte 0x00,0x01,0x00,0x00,0x80,0x00,0x00,0x00

D_10013634:
    # 0041A3F8 demit_dir0
    .byte 0x00,0x01,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00




.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
glabel save_i_ptrs
    .ent save_i_ptrs
    # 0042BDAC eval
/* 00413F50 3C1C0FC1 */  .cpload $t9
/* 00413F54 279CBB00 */  
/* 00413F58 0399E021 */  
/* 00413F5C 8F8E897C */  lw     $t6, %got(i_ptr)($gp)
/* 00413F60 8F818980 */  lw     $at, %got(old_i_ptr)($gp)
/* 00413F64 8F8F8984 */  lw     $t7, %got(d_ptr)($gp)
/* 00413F68 8DCE0000 */  lw    $t6, ($t6)
/* 00413F6C 8DEF0000 */  lw    $t7, ($t7)
/* 00413F70 AC2E0000 */  sw    $t6, ($at)
/* 00413F74 8F818988 */  lw     $at, %got(old_d_ptr)($gp)
/* 00413F78 03E00008 */  jr    $ra
/* 00413F7C AC2F0000 */   sw    $t7, ($at)
    .type save_i_ptrs, @function
    .size save_i_ptrs, .-save_i_ptrs
    .end save_i_ptrs

glabel restore_i_ptrs
    .ent restore_i_ptrs
    # 0042BDAC eval
/* 00413F80 3C1C0FC1 */  .cpload $t9
/* 00413F84 279CBAD0 */  
/* 00413F88 0399E021 */  
/* 00413F8C 8F828980 */  lw     $v0, %got(old_i_ptr)($gp)
/* 00413F90 8F99897C */  lw     $t9, %got(i_ptr)($gp)
/* 00413F94 8F8E8978 */  lw     $t6, %got(ibuffer)($gp)
/* 00413F98 8C420000 */  lw    $v0, ($v0)
/* 00413F9C 8F390000 */  lw    $t9, ($t9)
/* 00413FA0 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00413FA4 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00413FA8 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00413FAC 8DCF0000 */  lw    $t7, ($t6)
/* 00413FB0 03223023 */  subu  $a2, $t9, $v0
/* 00413FB4 8F9980C4 */  lw    $t9, %call16(memset)($gp)
/* 00413FB8 0002C100 */  sll   $t8, $v0, 4
/* 00413FBC 01F82021 */  addu  $a0, $t7, $t8
/* 00413FC0 2484FFF0 */  addiu $a0, $a0, -0x10
/* 00413FC4 00063100 */  sll   $a2, $a2, 4
/* 00413FC8 0320F809 */  jalr  $t9
/* 00413FCC 00002825 */   move  $a1, $zero
/* 00413FD0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00413FD4 00002825 */  move  $a1, $zero
/* 00413FD8 8F828984 */  lw     $v0, %got(d_ptr)($gp)
/* 00413FDC 8F8B8988 */  lw     $t3, %got(old_d_ptr)($gp)
/* 00413FE0 8F888978 */  lw     $t0, %got(ibuffer)($gp)
/* 00413FE4 8C420000 */  lw    $v0, ($v0)
/* 00413FE8 8D6B0000 */  lw    $t3, ($t3)
/* 00413FEC 8D090000 */  lw    $t1, ($t0)
/* 00413FF0 8F9980C4 */  lw    $t9, %call16(memset)($gp)
/* 00413FF4 00025100 */  sll   $t2, $v0, 4
/* 00413FF8 01623023 */  subu  $a2, $t3, $v0
/* 00413FFC 00063100 */  sll   $a2, $a2, 4
/* 00414000 012A2021 */  addu  $a0, $t1, $t2
/* 00414004 2484FFF0 */  addiu $a0, $a0, -0x10
/* 00414008 0320F809 */  jalr  $t9
/* 0041400C 24C60010 */   addiu $a2, $a2, 0x10
/* 00414010 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00414014 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00414018 8F8C8980 */  lw     $t4, %got(old_i_ptr)($gp)
/* 0041401C 8F81897C */  lw     $at, %got(i_ptr)($gp)
/* 00414020 8F8D8988 */  lw     $t5, %got(old_d_ptr)($gp)
/* 00414024 8D8C0000 */  lw    $t4, ($t4)
/* 00414028 8DAD0000 */  lw    $t5, ($t5)
/* 0041402C AC2C0000 */  sw    $t4, ($at)
/* 00414030 8F818984 */  lw     $at, %got(d_ptr)($gp)
/* 00414034 27BD0020 */  addiu $sp, $sp, 0x20
/* 00414038 03E00008 */  jr    $ra
/* 0041403C AC2D0000 */   sw    $t5, ($at)
    .type restore_i_ptrs, @function
    .size restore_i_ptrs, .-restore_i_ptrs
    .end restore_i_ptrs

glabel init_ibuffer
    .ent init_ibuffer
    # 0044BF18 main
/* 00414040 3C1C0FC1 */  .cpload $t9
/* 00414044 279CBA10 */  
/* 00414048 0399E021 */  
/* 0041404C 8F828974 */  lw     $v0, %got(ibuffer_size)($gp)
/* 00414050 3406FDE8 */  li    $a2, 65000
/* 00414054 27BDFF40 */  addiu $sp, $sp, -0xc0
/* 00414058 AC460000 */  sw    $a2, ($v0)
/* 0041405C 8F9980BC */  lw    $t9, %call16(malloc)($gp)
/* 00414060 AFBF00B4 */  sw    $ra, 0xb4($sp)
/* 00414064 00062100 */  sll   $a0, $a2, 4
/* 00414068 AFBC00B0 */  sw    $gp, 0xb0($sp)
/* 0041406C 0320F809 */  jalr  $t9
/* 00414070 AFA400BC */   sw    $a0, 0xbc($sp)
/* 00414074 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00414078 8FA600BC */  lw    $a2, 0xbc($sp)
/* 0041407C 00002825 */  move  $a1, $zero
/* 00414080 8F838978 */  lw     $v1, %got(ibuffer)($gp)
/* 00414084 AC620000 */  sw    $v0, ($v1)
/* 00414088 8F9980C4 */  lw    $t9, %call16(memset)($gp)
/* 0041408C 8C640000 */  lw    $a0, ($v1)
/* 00414090 0320F809 */  jalr  $t9
/* 00414094 00000000 */   nop   
/* 00414098 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 0041409C 24040004 */  li    $a0, 4
/* 004140A0 8F8F8978 */  lw     $t7, %got(ibuffer)($gp)
/* 004140A4 8DF80000 */  lw    $t8, ($t7)
/* 004140A8 1700003E */  bnez  $t8, .L004141A4
/* 004140AC 00000000 */   nop   
/* 004140B0 8F998038 */  lw    $t9, %got(RO_100093D0)($gp)
/* 004140B4 24050060 */  li    $a1, 96
/* 004140B8 03A05025 */  move  $t2, $sp
/* 004140BC 273993D0 */  addiu $t9, %lo(RO_100093D0) # addiu $t9, $t9, -0x6c30
/* 004140C0 272B0048 */  addiu $t3, $t9, 0x48
.L004140C4:
/* 004140C4 8B290000 */  lwl   $t1, ($t9)
/* 004140C8 9B290003 */  lwr   $t1, 3($t9)
/* 004140CC 2739000C */  addiu $t9, $t9, 0xc
/* 004140D0 254A000C */  addiu $t2, $t2, 0xc
/* 004140D4 A949FFFC */  swl   $t1, -4($t2)
/* 004140D8 B949FFFF */  swr   $t1, -1($t2)
/* 004140DC 8B28FFF8 */  lwl   $t0, -8($t9)
/* 004140E0 9B28FFFB */  lwr   $t0, -5($t9)
/* 004140E4 A9480000 */  swl   $t0, ($t2)
/* 004140E8 B9480003 */  swr   $t0, 3($t2)
/* 004140EC 8B29FFFC */  lwl   $t1, -4($t9)
/* 004140F0 9B29FFFF */  lwr   $t1, -1($t9)
/* 004140F4 A9490004 */  swl   $t1, 4($t2)
/* 004140F8 172BFFF2 */  bne   $t9, $t3, .L004140C4
/* 004140FC B9490007 */   swr   $t1, 7($t2)
/* 00414100 8B290000 */  lwl   $t1, ($t9)
/* 00414104 9B290003 */  lwr   $t1, 3($t9)
/* 00414108 8F8C8038 */  lw    $t4, %got(RO_10009380)($gp)
/* 0041410C 03A07825 */  move  $t7, $sp
/* 00414110 A9490008 */  swl   $t1, 8($t2)
/* 00414114 B949000B */  swr   $t1, 0xb($t2)
/* 00414118 8B280004 */  lwl   $t0, 4($t9)
/* 0041411C 9B280007 */  lwr   $t0, 7($t9)
/* 00414120 258C9380 */  addiu $t4, %lo(RO_10009380) # addiu $t4, $t4, -0x6c80
/* 00414124 25980048 */  addiu $t8, $t4, 0x48
/* 00414128 A948000C */  swl   $t0, 0xc($t2)
/* 0041412C B948000F */  swr   $t0, 0xf($t2)
.L00414130:
/* 00414130 898E0000 */  lwl   $t6, ($t4)
/* 00414134 998E0003 */  lwr   $t6, 3($t4)
/* 00414138 258C000C */  addiu $t4, $t4, 0xc
/* 0041413C 25EF000C */  addiu $t7, $t7, 0xc
/* 00414140 A9EE004C */  swl   $t6, 0x4c($t7)
/* 00414144 B9EE004F */  swr   $t6, 0x4f($t7)
/* 00414148 898DFFF8 */  lwl   $t5, -8($t4)
/* 0041414C 998DFFFB */  lwr   $t5, -5($t4)
/* 00414150 A9ED0050 */  swl   $t5, 0x50($t7)
/* 00414154 B9ED0053 */  swr   $t5, 0x53($t7)
/* 00414158 898EFFFC */  lwl   $t6, -4($t4)
/* 0041415C 998EFFFF */  lwr   $t6, -1($t4)
/* 00414160 A9EE0054 */  swl   $t6, 0x54($t7)
/* 00414164 1598FFF2 */  bne   $t4, $t8, .L00414130
/* 00414168 B9EE0057 */   swr   $t6, 0x57($t7)
/* 0041416C 898E0000 */  lwl   $t6, ($t4)
/* 00414170 998E0003 */  lwr   $t6, 3($t4)
/* 00414174 A9EE0058 */  swl   $t6, 0x58($t7)
/* 00414178 B9EE005B */  swr   $t6, 0x5b($t7)
/* 0041417C 898D0004 */  lwl   $t5, 4($t4)
/* 00414180 998D0007 */  lwr   $t5, 7($t4)
/* 00414184 A9ED005C */  swl   $t5, 0x5c($t7)
/* 00414188 B9ED005F */  swr   $t5, 0x5f($t7)
/* 0041418C 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 00414190 8FA7000C */  lw    $a3, 0xc($sp)
/* 00414194 8FA60008 */  lw    $a2, 8($sp)
/* 00414198 0320F809 */  jalr  $t9
/* 0041419C 00000000 */   nop   
/* 004141A0 8FBC00B0 */  lw    $gp, 0xb0($sp)
.L004141A4:
/* 004141A4 8F81897C */  lw     $at, %got(i_ptr)($gp)
/* 004141A8 8F998974 */  lw     $t9, %got(ibuffer_size)($gp)
/* 004141AC 240B0001 */  li    $t3, 1
/* 004141B0 8FBF00B4 */  lw    $ra, 0xb4($sp)
/* 004141B4 AC2B0000 */  sw    $t3, ($at)
/* 004141B8 8F818984 */  lw     $at, %got(d_ptr)($gp)
/* 004141BC 8F390000 */  lw    $t9, ($t9)
/* 004141C0 27BD00C0 */  addiu $sp, $sp, 0xc0
/* 004141C4 03E00008 */  jr    $ra
/* 004141C8 AC390000 */   sw    $t9, ($at)
    .type init_ibuffer, @function
    .size init_ibuffer, .-init_ibuffer
    .end init_ibuffer

glabel grow_ibuffer
    .ent grow_ibuffer
    # 004147EC emit_rob
    # 00414B14 emit_rab
    # 00414E38 emit_rrab
    # 0041514C emit_rllb
    # 00415494 emit_ra
    # 00415764 emit_ri_
    # 00415A80 emit_rfi
    # 00415FDC emit_rrfi
    # 00416278 emit_rrr
    # 00416580 emit_rri_
    # 0041687C emit_rrri
    # 00416B70 emit_rr
    # 00416DFC emit_a
    # 0041705C emit_r
    # 004172AC emit_i
    # 004174CC emit_rrl
    # 0041777C emit_rrll
    # 00417A44 emit_rl
    # 00417CB8 emit_rll
    # 00417F44 emit_l
    # 00418150 emit_ll
    # 00418374 emit_ril
    # 0041860C emit_rill
    # 004188BC define_label
    # 00418968 emit_itext
    # 00418B9C demit_itext
    # 00418DD0 emit_dir0
    # 00418F10 emit_dir1
    # 00418FCC emit_dir2
    # 00419154 emit_alias
    # 0041926C emit_regmask
    # 0041933C emit_loopno
    # 004193FC emit_dir_ll
    # 0041951C demit_rob_
    # 004196EC demit_ri
    # 00419894 demit_rr
    # 00419A00 demit_a
    # 00419BA0 demit_regmask
    # 00419C70 demit_rrr
    # 00419E0C demit_rri
    # 00419F88 demit_rrll
    # 0041A110 demit_i
    # 0041A288 demit_ra
    # 0041A3F8 demit_dir0
    # 0041A524 demit_dir1
    # 0041A618 demit_dir2
    # 0041A7D4 demit_edata
    # 0041A894 demit_weakext
    # 0041AA24 ddefine_label
    # 0041AAD0 define_exception_label
    # 0041AB64 append_i
    # 0041ABF4 append_d
/* 004141CC 3C1C0FC1 */  .cpload $t9
/* 004141D0 279CB884 */  
/* 004141D4 0399E021 */  
/* 004141D8 8F828974 */  lw     $v0, %got(ibuffer_size)($gp)
/* 004141DC 8F9980BC */  lw    $t9, %call16(malloc)($gp)
/* 004141E0 27BDFF20 */  addiu $sp, $sp, -0xe0
/* 004141E4 8C420000 */  lw    $v0, ($v0)
/* 004141E8 AFBF00B4 */  sw    $ra, 0xb4($sp)
/* 004141EC AFBC00B0 */  sw    $gp, 0xb0($sp)
/* 004141F0 00021040 */  sll   $v0, $v0, 1
/* 004141F4 00023100 */  sll   $a2, $v0, 4
/* 004141F8 00C02025 */  move  $a0, $a2
/* 004141FC AFA600BC */  sw    $a2, 0xbc($sp)
/* 00414200 0320F809 */  jalr  $t9
/* 00414204 AFA200D0 */   sw    $v0, 0xd0($sp)
/* 00414208 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 0041420C 8FA600BC */  lw    $a2, 0xbc($sp)
/* 00414210 00402025 */  move  $a0, $v0
/* 00414214 8F9980C4 */  lw    $t9, %call16(memset)($gp)
/* 00414218 00002825 */  move  $a1, $zero
/* 0041421C AFA200D4 */  sw    $v0, 0xd4($sp)
/* 00414220 0320F809 */  jalr  $t9
/* 00414224 00000000 */   nop   
/* 00414228 8FAB00D4 */  lw    $t3, 0xd4($sp)
/* 0041422C 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00414230 24040004 */  li    $a0, 4
/* 00414234 1560003F */  bnez  $t3, .L00414334
/* 00414238 00000000 */   nop   
/* 0041423C 8F8E8038 */  lw    $t6, %got(RO_10009470)($gp)
/* 00414240 24050070 */  li    $a1, 112
/* 00414244 03A0C825 */  move  $t9, $sp
/* 00414248 25CE9470 */  addiu $t6, %lo(RO_10009470) # addiu $t6, $t6, -0x6b90
/* 0041424C 25CD0048 */  addiu $t5, $t6, 0x48
.L00414250:
/* 00414250 89D80000 */  lwl   $t8, ($t6)
/* 00414254 99D80003 */  lwr   $t8, 3($t6)
/* 00414258 25CE000C */  addiu $t6, $t6, 0xc
/* 0041425C 2739000C */  addiu $t9, $t9, 0xc
/* 00414260 AB38FFFC */  swl   $t8, -4($t9)
/* 00414264 BB38FFFF */  swr   $t8, -1($t9)
/* 00414268 89CFFFF8 */  lwl   $t7, -8($t6)
/* 0041426C 99CFFFFB */  lwr   $t7, -5($t6)
/* 00414270 AB2F0000 */  swl   $t7, ($t9)
/* 00414274 BB2F0003 */  swr   $t7, 3($t9)
/* 00414278 89D8FFFC */  lwl   $t8, -4($t6)
/* 0041427C 99D8FFFF */  lwr   $t8, -1($t6)
/* 00414280 AB380004 */  swl   $t8, 4($t9)
/* 00414284 15CDFFF2 */  bne   $t6, $t5, .L00414250
/* 00414288 BB380007 */   swr   $t8, 7($t9)
/* 0041428C 89D80000 */  lwl   $t8, ($t6)
/* 00414290 99D80003 */  lwr   $t8, 3($t6)
/* 00414294 8F8D8038 */  lw    $t5, %got(RO_10009420)($gp)
/* 00414298 AB380008 */  swl   $t8, 8($t9)
/* 0041429C BB38000B */  swr   $t8, 0xb($t9)
/* 004142A0 89CF0004 */  lwl   $t7, 4($t6)
/* 004142A4 99CF0007 */  lwr   $t7, 7($t6)
/* 004142A8 25AD9420 */  addiu $t5, %lo(RO_10009420) # addiu $t5, $t5, -0x6be0
/* 004142AC 25B80048 */  addiu $t8, $t5, 0x48
/* 004142B0 AB2F000C */  swl   $t7, 0xc($t9)
/* 004142B4 BB2F000F */  swr   $t7, 0xf($t9)
/* 004142B8 03A07825 */  move  $t7, $sp
.L004142BC:
/* 004142BC 89B90000 */  lwl   $t9, ($t5)
/* 004142C0 99B90003 */  lwr   $t9, 3($t5)
/* 004142C4 25AD000C */  addiu $t5, $t5, 0xc
/* 004142C8 25EF000C */  addiu $t7, $t7, 0xc
/* 004142CC A9F9004C */  swl   $t9, 0x4c($t7)
/* 004142D0 B9F9004F */  swr   $t9, 0x4f($t7)
/* 004142D4 89AEFFF8 */  lwl   $t6, -8($t5)
/* 004142D8 99AEFFFB */  lwr   $t6, -5($t5)
/* 004142DC A9EE0050 */  swl   $t6, 0x50($t7)
/* 004142E0 B9EE0053 */  swr   $t6, 0x53($t7)
/* 004142E4 89B9FFFC */  lwl   $t9, -4($t5)
/* 004142E8 99B9FFFF */  lwr   $t9, -1($t5)
/* 004142EC A9F90054 */  swl   $t9, 0x54($t7)
/* 004142F0 15B8FFF2 */  bne   $t5, $t8, .L004142BC
/* 004142F4 B9F90057 */   swr   $t9, 0x57($t7)
/* 004142F8 89B90000 */  lwl   $t9, ($t5)
/* 004142FC 99B90003 */  lwr   $t9, 3($t5)
/* 00414300 A9F90058 */  swl   $t9, 0x58($t7)
/* 00414304 B9F9005B */  swr   $t9, 0x5b($t7)
/* 00414308 89AE0004 */  lwl   $t6, 4($t5)
/* 0041430C 99AE0007 */  lwr   $t6, 7($t5)
/* 00414310 A9EE005C */  swl   $t6, 0x5c($t7)
/* 00414314 B9EE005F */  swr   $t6, 0x5f($t7)
/* 00414318 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 0041431C 8FA7000C */  lw    $a3, 0xc($sp)
/* 00414320 8FA60008 */  lw    $a2, 8($sp)
/* 00414324 0320F809 */  jalr  $t9
/* 00414328 AFAB00D4 */   sw    $t3, 0xd4($sp)
/* 0041432C 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 00414330 8FAB00D4 */  lw    $t3, 0xd4($sp)
.L00414334:
/* 00414334 8F89897C */  lw     $t1, %got(i_ptr)($gp)
/* 00414338 8D290000 */  lw    $t1, ($t1)
/* 0041433C 1120004E */  beqz  $t1, .L00414478
/* 00414340 25290001 */   addiu $t1, $t1, 1
/* 00414344 2526FFFF */  addiu $a2, $t1, -1
/* 00414348 30C60003 */  andi  $a2, $a2, 3
/* 0041434C 10C00015 */  beqz  $a2, .L004143A4
/* 00414350 24040001 */   li    $a0, 1
/* 00414354 00041900 */  sll   $v1, $a0, 4
/* 00414358 01631021 */  addu  $v0, $t3, $v1
/* 0041435C 24C50001 */  addiu $a1, $a2, 1
/* 00414360 8F868978 */  lw     $a2, %got(ibuffer)($gp)
/* 00414364 2442FFF0 */  addiu $v0, $v0, -0x10
.L00414368:
/* 00414368 8CD80000 */  lw    $t8, ($a2)
/* 0041436C 24840001 */  addiu $a0, $a0, 1
/* 00414370 24420010 */  addiu $v0, $v0, 0x10
/* 00414374 03036821 */  addu  $t5, $t8, $v1
/* 00414378 8DAEFFF0 */  lw    $t6, -0x10($t5)
/* 0041437C 24630010 */  addiu $v1, $v1, 0x10
/* 00414380 AC4EFFF0 */  sw    $t6, -0x10($v0)
/* 00414384 8DAFFFF4 */  lw    $t7, -0xc($t5)
/* 00414388 AC4FFFF4 */  sw    $t7, -0xc($v0)
/* 0041438C 8DAEFFF8 */  lw    $t6, -8($t5)
/* 00414390 AC4EFFF8 */  sw    $t6, -8($v0)
/* 00414394 8DAFFFFC */  lw    $t7, -4($t5)
/* 00414398 14A4FFF3 */  bne   $a1, $a0, .L00414368
/* 0041439C AC4FFFFC */   sw    $t7, -4($v0)
/* 004143A0 10890035 */  beq   $a0, $t1, .L00414478
.L004143A4:
/* 004143A4 00041900 */   sll   $v1, $a0, 4
/* 004143A8 01632821 */  addu  $a1, $t3, $v1
/* 004143AC 24A2FFF0 */  addiu $v0, $a1, -0x10
/* 004143B0 24A70010 */  addiu $a3, $a1, 0x10
/* 004143B4 24A80020 */  addiu $t0, $a1, 0x20
/* 004143B8 8F868978 */  lw     $a2, %got(ibuffer)($gp)
/* 004143BC 00095100 */  sll   $t2, $t1, 4
.L004143C0:
/* 004143C0 8CD90000 */  lw    $t9, ($a2)
/* 004143C4 8CCE0000 */  lw    $t6, ($a2)
/* 004143C8 24A50040 */  addiu $a1, $a1, 0x40
/* 004143CC 0323C021 */  addu  $t8, $t9, $v1
/* 004143D0 8F0FFFF0 */  lw    $t7, -0x10($t8)
/* 004143D4 01C3C821 */  addu  $t9, $t6, $v1
/* 004143D8 24420040 */  addiu $v0, $v0, 0x40
/* 004143DC AC4FFFC0 */  sw    $t7, -0x40($v0)
/* 004143E0 8F0DFFF4 */  lw    $t5, -0xc($t8)
/* 004143E4 24E70040 */  addiu $a3, $a3, 0x40
/* 004143E8 25080040 */  addiu $t0, $t0, 0x40
/* 004143EC AC4DFFC4 */  sw    $t5, -0x3c($v0)
/* 004143F0 8F0FFFF8 */  lw    $t7, -8($t8)
/* 004143F4 AC4FFFC8 */  sw    $t7, -0x38($v0)
/* 004143F8 8F0DFFFC */  lw    $t5, -4($t8)
/* 004143FC 8CCF0000 */  lw    $t7, ($a2)
/* 00414400 AC4DFFCC */  sw    $t5, -0x34($v0)
/* 00414404 8F2D0000 */  lw    $t5, ($t9)
/* 00414408 01E37021 */  addu  $t6, $t7, $v1
/* 0041440C ACADFFC0 */  sw    $t5, -0x40($a1)
/* 00414410 8F380004 */  lw    $t8, 4($t9)
/* 00414414 ACB8FFC4 */  sw    $t8, -0x3c($a1)
/* 00414418 8F2D0008 */  lw    $t5, 8($t9)
/* 0041441C ACADFFC8 */  sw    $t5, -0x38($a1)
/* 00414420 8F38000C */  lw    $t8, 0xc($t9)
/* 00414424 8CCD0000 */  lw    $t5, ($a2)
/* 00414428 ACB8FFCC */  sw    $t8, -0x34($a1)
/* 0041442C 8DD80010 */  lw    $t8, 0x10($t6)
/* 00414430 01A37821 */  addu  $t7, $t5, $v1
/* 00414434 24630040 */  addiu $v1, $v1, 0x40
/* 00414438 ACF8FFC0 */  sw    $t8, -0x40($a3)
/* 0041443C 8DD90014 */  lw    $t9, 0x14($t6)
/* 00414440 ACF9FFC4 */  sw    $t9, -0x3c($a3)
/* 00414444 8DD80018 */  lw    $t8, 0x18($t6)
/* 00414448 ACF8FFC8 */  sw    $t8, -0x38($a3)
/* 0041444C 8DD9001C */  lw    $t9, 0x1c($t6)
/* 00414450 ACF9FFCC */  sw    $t9, -0x34($a3)
/* 00414454 8DF90020 */  lw    $t9, 0x20($t7)
/* 00414458 AD19FFC0 */  sw    $t9, -0x40($t0)
/* 0041445C 8DEE0024 */  lw    $t6, 0x24($t7)
/* 00414460 AD0EFFC4 */  sw    $t6, -0x3c($t0)
/* 00414464 8DF90028 */  lw    $t9, 0x28($t7)
/* 00414468 AD19FFC8 */  sw    $t9, -0x38($t0)
/* 0041446C 8DEE002C */  lw    $t6, 0x2c($t7)
/* 00414470 146AFFD3 */  bne   $v1, $t2, .L004143C0
/* 00414474 AD0EFFCC */   sw    $t6, -0x34($t0)
.L00414478:
/* 00414478 8F8C8984 */  lw     $t4, %got(d_ptr)($gp)
/* 0041447C 8F898974 */  lw     $t1, %got(ibuffer_size)($gp)
/* 00414480 8F868978 */  lw     $a2, %got(ibuffer)($gp)
/* 00414484 8D880000 */  lw    $t0, ($t4)
/* 00414488 8D290000 */  lw    $t1, ($t1)
/* 0041448C 8FA500D0 */  lw    $a1, 0xd0($sp)
/* 00414490 0128082B */  sltu  $at, $t1, $t0
/* 00414494 1420004C */  bnez  $at, .L004145C8
/* 00414498 2508FFFF */   addiu $t0, $t0, -1
/* 0041449C 01285023 */  subu  $t2, $t1, $t0
/* 004144A0 314A0003 */  andi  $t2, $t2, 3
/* 004144A4 000A5023 */  negu  $t2, $t2
/* 004144A8 11400016 */  beqz  $t2, .L00414504
/* 004144AC 01202025 */   move  $a0, $t1
/* 004144B0 0005C100 */  sll   $t8, $a1, 4
/* 004144B4 01781021 */  addu  $v0, $t3, $t8
/* 004144B8 2442FFF0 */  addiu $v0, $v0, -0x10
/* 004144BC 01493821 */  addu  $a3, $t2, $t1
/* 004144C0 00091900 */  sll   $v1, $t1, 4
.L004144C4:
/* 004144C4 8CCD0000 */  lw    $t5, ($a2)
/* 004144C8 2484FFFF */  addiu $a0, $a0, -1
/* 004144CC 24A5FFFF */  addiu $a1, $a1, -1
/* 004144D0 01A37821 */  addu  $t7, $t5, $v1
/* 004144D4 8DF9FFF0 */  lw    $t9, -0x10($t7)
/* 004144D8 2463FFF0 */  addiu $v1, $v1, -0x10
/* 004144DC 2442FFF0 */  addiu $v0, $v0, -0x10
/* 004144E0 AC590010 */  sw    $t9, 0x10($v0)
/* 004144E4 8DEEFFF4 */  lw    $t6, -0xc($t7)
/* 004144E8 AC4E0014 */  sw    $t6, 0x14($v0)
/* 004144EC 8DF9FFF8 */  lw    $t9, -8($t7)
/* 004144F0 AC590018 */  sw    $t9, 0x18($v0)
/* 004144F4 8DEEFFFC */  lw    $t6, -4($t7)
/* 004144F8 14E4FFF2 */  bne   $a3, $a0, .L004144C4
/* 004144FC AC4E001C */   sw    $t6, 0x1c($v0)
/* 00414500 10880031 */  beq   $a0, $t0, .L004145C8
.L00414504:
/* 00414504 0005C100 */   sll   $t8, $a1, 4
/* 00414508 01781021 */  addu  $v0, $t3, $t8
/* 0041450C 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00414510 00041900 */  sll   $v1, $a0, 4
/* 00414514 00083900 */  sll   $a3, $t0, 4
.L00414518:
/* 00414518 8CCD0000 */  lw    $t5, ($a2)
/* 0041451C 8CD80000 */  lw    $t8, ($a2)
/* 00414520 24A5FFFC */  addiu $a1, $a1, -4
/* 00414524 01A37821 */  addu  $t7, $t5, $v1
/* 00414528 8DF9FFF0 */  lw    $t9, -0x10($t7)
/* 0041452C 03036821 */  addu  $t5, $t8, $v1
/* 00414530 2442FFC0 */  addiu $v0, $v0, -0x40
/* 00414534 AC590040 */  sw    $t9, 0x40($v0)
/* 00414538 8DEEFFF4 */  lw    $t6, -0xc($t7)
/* 0041453C AC4E0044 */  sw    $t6, 0x44($v0)
/* 00414540 8DF9FFF8 */  lw    $t9, -8($t7)
/* 00414544 AC590048 */  sw    $t9, 0x48($v0)
/* 00414548 8DEEFFFC */  lw    $t6, -4($t7)
/* 0041454C 8CD90000 */  lw    $t9, ($a2)
/* 00414550 AC4E004C */  sw    $t6, 0x4c($v0)
/* 00414554 8DAEFFE0 */  lw    $t6, -0x20($t5)
/* 00414558 0323C021 */  addu  $t8, $t9, $v1
/* 0041455C AC4E0030 */  sw    $t6, 0x30($v0)
/* 00414560 8DAFFFE4 */  lw    $t7, -0x1c($t5)
/* 00414564 AC4F0034 */  sw    $t7, 0x34($v0)
/* 00414568 8DAEFFE8 */  lw    $t6, -0x18($t5)
/* 0041456C AC4E0038 */  sw    $t6, 0x38($v0)
/* 00414570 8DAFFFEC */  lw    $t7, -0x14($t5)
/* 00414574 8CCE0000 */  lw    $t6, ($a2)
/* 00414578 AC4F003C */  sw    $t7, 0x3c($v0)
/* 0041457C 8F0FFFD0 */  lw    $t7, -0x30($t8)
/* 00414580 01C3C821 */  addu  $t9, $t6, $v1
/* 00414584 2463FFC0 */  addiu $v1, $v1, -0x40
/* 00414588 AC4F0020 */  sw    $t7, 0x20($v0)
/* 0041458C 8F0DFFD4 */  lw    $t5, -0x2c($t8)
/* 00414590 AC4D0024 */  sw    $t5, 0x24($v0)
/* 00414594 8F0FFFD8 */  lw    $t7, -0x28($t8)
/* 00414598 AC4F0028 */  sw    $t7, 0x28($v0)
/* 0041459C 8F0DFFDC */  lw    $t5, -0x24($t8)
/* 004145A0 AC4D002C */  sw    $t5, 0x2c($v0)
/* 004145A4 8F2DFFC0 */  lw    $t5, -0x40($t9)
/* 004145A8 AC4D0010 */  sw    $t5, 0x10($v0)
/* 004145AC 8F38FFC4 */  lw    $t8, -0x3c($t9)
/* 004145B0 AC580014 */  sw    $t8, 0x14($v0)
/* 004145B4 8F2DFFC8 */  lw    $t5, -0x38($t9)
/* 004145B8 AC4D0018 */  sw    $t5, 0x18($v0)
/* 004145BC 8F38FFCC */  lw    $t8, -0x34($t9)
/* 004145C0 1467FFD5 */  bne   $v1, $a3, .L00414518
/* 004145C4 AC58001C */   sw    $t8, 0x1c($v0)
.L004145C8:
/* 004145C8 8F9980C0 */  lw    $t9, %call16(free)($gp)
/* 004145CC 24A50001 */  addiu $a1, $a1, 1
/* 004145D0 AFA500D8 */  sw    $a1, 0xd8($sp)
/* 004145D4 8CC40000 */  lw    $a0, ($a2)
/* 004145D8 0320F809 */  jalr  $t9
/* 004145DC AFAB00D4 */   sw    $t3, 0xd4($sp)
/* 004145E0 8FBC00B0 */  lw    $gp, 0xb0($sp)
/* 004145E4 8FAB00D4 */  lw    $t3, 0xd4($sp)
/* 004145E8 8FAF00D0 */  lw    $t7, 0xd0($sp)
/* 004145EC 8F868978 */  lw     $a2, %got(ibuffer)($gp)
/* 004145F0 8F818974 */  lw     $at, %got(ibuffer_size)($gp)
/* 004145F4 8F828988 */  lw     $v0, %got(old_d_ptr)($gp)
/* 004145F8 8F8C8984 */  lw     $t4, %got(d_ptr)($gp)
/* 004145FC ACCB0000 */  sw    $t3, ($a2)
/* 00414600 AC2F0000 */  sw    $t7, ($at)
/* 00414604 8FA500D8 */  lw    $a1, 0xd8($sp)
/* 00414608 8C4E0000 */  lw    $t6, ($v0)
/* 0041460C 8D980000 */  lw    $t8, ($t4)
/* 00414610 8FBF00B4 */  lw    $ra, 0xb4($sp)
/* 00414614 01C5C821 */  addu  $t9, $t6, $a1
/* 00414618 03386823 */  subu  $t5, $t9, $t8
/* 0041461C 27BD00E0 */  addiu $sp, $sp, 0xe0
/* 00414620 AC4D0000 */  sw    $t5, ($v0)
/* 00414624 03E00008 */  jr    $ra
/* 00414628 AD850000 */   sw    $a1, ($t4)
    .type grow_ibuffer, @function
    .size grow_ibuffer, .-grow_ibuffer
    .end grow_ibuffer

glabel create_local_label
    .ent create_local_label
    # 0041514C emit_rllb
    # 0041777C emit_rrll
    # 00417CB8 emit_rll
    # 00418150 emit_ll
    # 0041860C emit_rill
    # 004188BC define_label
    # 004193FC emit_dir_ll
    # 00419F88 demit_rrll
    # 0041AA24 ddefine_label
    # 00436758 emit_list
/* 0041462C 3C1C0FC1 */  .cpload $t9
/* 00414630 279CB424 */  
/* 00414634 0399E021 */  
/* 00414638 27BDFF40 */  addiu $sp, $sp, -0xc0
/* 0041463C AFBF00B4 */  sw    $ra, 0xb4($sp)
/* 00414640 10800006 */  beqz  $a0, .L0041465C
/* 00414644 AFBC00B0 */   sw    $gp, 0xb0($sp)
/* 00414648 3C017FFF */  lui   $at, 0x7fff
/* 0041464C 3421FFFF */  ori   $at, $at, 0xffff
/* 00414650 0081082A */  slt   $at, $a0, $at
/* 00414654 14200040 */  bnez  $at, .L00414758
/* 00414658 00000000 */   nop   
.L0041465C:
/* 0041465C 8F8E8038 */  lw    $t6, %got(RO_10009510)($gp)
/* 00414660 24040004 */  li    $a0, 4
/* 00414664 24050086 */  li    $a1, 134
/* 00414668 25CE9510 */  addiu $t6, %lo(RO_10009510) # addiu $t6, $t6, -0x6af0
/* 0041466C 25C80048 */  addiu $t0, $t6, 0x48
/* 00414670 03A0C825 */  move  $t9, $sp
.L00414674:
/* 00414674 89D80000 */  lwl   $t8, ($t6)
/* 00414678 99D80003 */  lwr   $t8, 3($t6)
/* 0041467C 25CE000C */  addiu $t6, $t6, 0xc
/* 00414680 2739000C */  addiu $t9, $t9, 0xc
/* 00414684 AB38FFFC */  swl   $t8, -4($t9)
/* 00414688 BB38FFFF */  swr   $t8, -1($t9)
/* 0041468C 89CFFFF8 */  lwl   $t7, -8($t6)
/* 00414690 99CFFFFB */  lwr   $t7, -5($t6)
/* 00414694 AB2F0000 */  swl   $t7, ($t9)
/* 00414698 BB2F0003 */  swr   $t7, 3($t9)
/* 0041469C 89D8FFFC */  lwl   $t8, -4($t6)
/* 004146A0 99D8FFFF */  lwr   $t8, -1($t6)
/* 004146A4 AB380004 */  swl   $t8, 4($t9)
/* 004146A8 15C8FFF2 */  bne   $t6, $t0, .L00414674
/* 004146AC BB380007 */   swr   $t8, 7($t9)
/* 004146B0 89D80000 */  lwl   $t8, ($t6)
/* 004146B4 99D80003 */  lwr   $t8, 3($t6)
/* 004146B8 8F898038 */  lw    $t1, %got(RO_100094C0)($gp)
/* 004146BC 03A06025 */  move  $t4, $sp
/* 004146C0 AB380008 */  swl   $t8, 8($t9)
/* 004146C4 BB38000B */  swr   $t8, 0xb($t9)
/* 004146C8 89CF0004 */  lwl   $t7, 4($t6)
/* 004146CC 99CF0007 */  lwr   $t7, 7($t6)
/* 004146D0 252994C0 */  addiu $t1, %lo(RO_100094C0) # addiu $t1, $t1, -0x6b40
/* 004146D4 252D0048 */  addiu $t5, $t1, 0x48
/* 004146D8 AB2F000C */  swl   $t7, 0xc($t9)
/* 004146DC BB2F000F */  swr   $t7, 0xf($t9)
.L004146E0:
/* 004146E0 892B0000 */  lwl   $t3, ($t1)
/* 004146E4 992B0003 */  lwr   $t3, 3($t1)
/* 004146E8 2529000C */  addiu $t1, $t1, 0xc
/* 004146EC 258C000C */  addiu $t4, $t4, 0xc
/* 004146F0 A98B004C */  swl   $t3, 0x4c($t4)
/* 004146F4 B98B004F */  swr   $t3, 0x4f($t4)
/* 004146F8 892AFFF8 */  lwl   $t2, -8($t1)
/* 004146FC 992AFFFB */  lwr   $t2, -5($t1)
/* 00414700 A98A0050 */  swl   $t2, 0x50($t4)
/* 00414704 B98A0053 */  swr   $t2, 0x53($t4)
/* 00414708 892BFFFC */  lwl   $t3, -4($t1)
/* 0041470C 992BFFFF */  lwr   $t3, -1($t1)
/* 00414710 A98B0054 */  swl   $t3, 0x54($t4)
/* 00414714 152DFFF2 */  bne   $t1, $t5, .L004146E0
/* 00414718 B98B0057 */   swr   $t3, 0x57($t4)
/* 0041471C 892B0000 */  lwl   $t3, ($t1)
/* 00414720 992B0003 */  lwr   $t3, 3($t1)
/* 00414724 A98B0058 */  swl   $t3, 0x58($t4)
/* 00414728 B98B005B */  swr   $t3, 0x5b($t4)
/* 0041472C 892A0004 */  lwl   $t2, 4($t1)
/* 00414730 992A0007 */  lwr   $t2, 7($t1)
/* 00414734 A98A005C */  swl   $t2, 0x5c($t4)
/* 00414738 B98A005F */  swr   $t2, 0x5f($t4)
/* 0041473C 8F998540 */  lw    $t9, %call16(report_error)($gp)
/* 00414740 8FA7000C */  lw    $a3, 0xc($sp)
/* 00414744 8FA60008 */  lw    $a2, 8($sp)
/* 00414748 0320F809 */  jalr  $t9
/* 0041474C 00000000 */   nop   
/* 00414750 10000003 */  b     .L00414760
/* 00414754 8FBC00B0 */   lw    $gp, 0xb0($sp)
.L00414758:
/* 00414758 10000002 */  b     .L00414764
/* 0041475C 00041023 */   negu  $v0, $a0
.L00414760:
/* 00414760 8FA200BC */  lw    $v0, 0xbc($sp)
.L00414764:
/* 00414764 8FBF00B4 */  lw    $ra, 0xb4($sp)
/* 00414768 27BD00C0 */  addiu $sp, $sp, 0xc0
/* 0041476C 03E00008 */  jr    $ra
/* 00414770 00000000 */   nop   
    .type create_local_label, @function
    .size create_local_label, .-create_local_label
    .end create_local_label

glabel emit_vers
    .ent emit_vers
    # 0044BF18 main
/* 00414774 3C1C0FC1 */  .cpload $t9
/* 00414778 279CB2DC */  
/* 0041477C 0399E021 */  
/* 00414780 8F848984 */  lw     $a0, %got(d_ptr)($gp)
/* 00414784 8F838978 */  lw     $v1, %got(ibuffer)($gp)
/* 00414788 240A0007 */  li    $t2, 7
/* 0041478C 8C8F0000 */  lw    $t7, ($a0)
/* 00414790 8C6E0000 */  lw    $t6, ($v1)
/* 00414794 000FC100 */  sll   $t8, $t7, 4
/* 00414798 01D81021 */  addu  $v0, $t6, $t8
/* 0041479C 9059FFF5 */  lbu   $t9, -0xb($v0)
/* 004147A0 240E000A */  li    $t6, 10
/* 004147A4 2442FFF0 */  addiu $v0, $v0, -0x10
/* 004147A8 3328FFC0 */  andi  $t0, $t9, 0xffc0
/* 004147AC 3509002A */  ori   $t1, $t0, 0x2a
/* 004147B0 A0490005 */  sb    $t1, 5($v0)
/* 004147B4 8C8C0000 */  lw    $t4, ($a0)
/* 004147B8 8C6B0000 */  lw    $t3, ($v1)
/* 004147BC 000C6900 */  sll   $t5, $t4, 4
/* 004147C0 016D7821 */  addu  $t7, $t3, $t5
/* 004147C4 ADEAFFF8 */  sw    $t2, -8($t7)
/* 004147C8 8C990000 */  lw    $t9, ($a0)
/* 004147CC 8C780000 */  lw    $t8, ($v1)
/* 004147D0 00194100 */  sll   $t0, $t9, 4
/* 004147D4 03084821 */  addu  $t1, $t8, $t0
/* 004147D8 AD2EFFFC */  sw    $t6, -4($t1)
/* 004147DC 8C8C0000 */  lw    $t4, ($a0)
/* 004147E0 258BFFFF */  addiu $t3, $t4, -1
/* 004147E4 03E00008 */  jr    $ra
/* 004147E8 AC8B0000 */   sw    $t3, ($a0)
    .type emit_vers, @function
    .size emit_vers, .-emit_vers
    .end emit_vers

glabel emit_rob
    .ent emit_rob
    # 00421170 gen_entry
    # 004219E8 gen_reg_save_restore
    # 00422764 gen_reg_save
    # 00424934 restore_from_temp
    # 0042670C loadstore
    # 00428D14 eval_mov
    # 0042A1AC eval_irel
    # 0042BA08 load_pmov_regs
    # 0042BDAC eval
    # 00440EA0 gen_store
/* 004147EC 3C1C0FC1 */  .cpload $t9
/* 004147F0 279CB264 */  
/* 004147F4 0399E021 */  
/* 004147F8 8F88897C */  lw     $t0, %got(i_ptr)($gp)
/* 004147FC 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 00414800 8F898978 */  lw     $t1, %got(ibuffer)($gp)
/* 00414804 8D0F0000 */  lw    $t7, ($t0)
/* 00414808 AFBF0024 */  sw    $ra, 0x24($sp)
/* 0041480C 8D2E0000 */  lw    $t6, ($t1)
/* 00414810 000FC100 */  sll   $t8, $t7, 4
/* 00414814 AFBC0020 */  sw    $gp, 0x20($sp)
/* 00414818 AFB0001C */  sw    $s0, 0x1c($sp)
/* 0041481C AFA40028 */  sw    $a0, 0x28($sp)
/* 00414820 AFA5002C */  sw    $a1, 0x2c($sp)
/* 00414824 AFA60030 */  sw    $a2, 0x30($sp)
/* 00414828 AFA70034 */  sw    $a3, 0x34($sp)
/* 0041482C 01D81021 */  addu  $v0, $t6, $t8
/* 00414830 9059FFF5 */  lbu   $t9, -0xb($v0)
/* 00414834 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00414838 3C01FFFC */  lui   $at, 0xfffc
/* 0041483C 332BFFC0 */  andi  $t3, $t9, 0xffc0
/* 00414840 356C0017 */  ori   $t4, $t3, 0x17
/* 00414844 A04C0005 */  sb    $t4, 5($v0)
/* 00414848 8D0F0000 */  lw    $t7, ($t0)
/* 0041484C 8D2D0000 */  lw    $t5, ($t1)
/* 00414850 97B8002A */  lhu   $t8, 0x2a($sp)
/* 00414854 000F7100 */  sll   $t6, $t7, 4
/* 00414858 01AE1021 */  addu  $v0, $t5, $t6
/* 0041485C 944AFFF6 */  lhu   $t2, -0xa($v0)
/* 00414860 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00414864 34213FFF */  ori   $at, $at, 0x3fff
/* 00414868 000ACD80 */  sll   $t9, $t2, 0x16
/* 0041486C 00195DC2 */  srl   $t3, $t9, 0x17
/* 00414870 030B6026 */  xor   $t4, $t8, $t3
/* 00414874 000C7DC0 */  sll   $t7, $t4, 0x17
/* 00414878 000F6D82 */  srl   $t5, $t7, 0x16
/* 0041487C 01AA7026 */  xor   $t6, $t5, $t2
/* 00414880 A44E0006 */  sh    $t6, 6($v0)
/* 00414884 8D180000 */  lw    $t8, ($t0)
/* 00414888 8D390000 */  lw    $t9, ($t1)
/* 0041488C 00185900 */  sll   $t3, $t8, 4
/* 00414890 032B1021 */  addu  $v0, $t9, $t3
/* 00414894 8C4CFFF8 */  lw    $t4, -8($v0)
/* 00414898 2442FFF0 */  addiu $v0, $v0, -0x10
/* 0041489C 01817824 */  and   $t7, $t4, $at
/* 004148A0 AC4F0008 */  sw    $t7, 8($v0)
/* 004148A4 8D0E0000 */  lw    $t6, ($t0)
/* 004148A8 8D2D0000 */  lw    $t5, ($t1)
/* 004148AC 93B9002F */  lbu   $t9, 0x2f($sp)
/* 004148B0 000EC100 */  sll   $t8, $t6, 4
/* 004148B4 01B81021 */  addu  $v0, $t5, $t8
/* 004148B8 8C43FFF8 */  lw    $v1, -8($v0)
/* 004148BC 2442FFF0 */  addiu $v0, $v0, -0x10
/* 004148C0 3C01FE3F */  lui   $at, 0xfe3f
/* 004148C4 00035E42 */  srl   $t3, $v1, 0x19
/* 004148C8 032B6026 */  xor   $t4, $t9, $t3
/* 004148CC 000C7E40 */  sll   $t7, $t4, 0x19
/* 004148D0 01E37026 */  xor   $t6, $t7, $v1
/* 004148D4 AC4E0008 */  sw    $t6, 8($v0)
/* 004148D8 8D180000 */  lw    $t8, ($t0)
/* 004148DC 8D2D0000 */  lw    $t5, ($t1)
/* 004148E0 93AB0037 */  lbu   $t3, 0x37($sp)
/* 004148E4 0018C900 */  sll   $t9, $t8, 4
/* 004148E8 01B91021 */  addu  $v0, $t5, $t9
/* 004148EC 8C43FFF8 */  lw    $v1, -8($v0)
/* 004148F0 2442FFF0 */  addiu $v0, $v0, -0x10
/* 004148F4 3421FFFF */  ori   $at, $at, 0xffff
/* 004148F8 000361C0 */  sll   $t4, $v1, 7
/* 004148FC 000C7E42 */  srl   $t7, $t4, 0x19
/* 00414900 016F7026 */  xor   $t6, $t3, $t7
/* 00414904 000EC640 */  sll   $t8, $t6, 0x19
/* 00414908 001869C2 */  srl   $t5, $t8, 7
/* 0041490C 01A3C826 */  xor   $t9, $t5, $v1
/* 00414910 AC590008 */  sw    $t9, 8($v0)
/* 00414914 8D0B0000 */  lw    $t3, ($t0)
/* 00414918 8D2C0000 */  lw    $t4, ($t1)
/* 0041491C 000B7900 */  sll   $t7, $t3, 4
/* 00414920 018F7021 */  addu  $t6, $t4, $t7
/* 00414924 ADC0FFF0 */  sw    $zero, -0x10($t6)
/* 00414928 8D0D0000 */  lw    $t5, ($t0)
/* 0041492C 8D380000 */  lw    $t8, ($t1)
/* 00414930 8FAB0038 */  lw    $t3, 0x38($sp)
/* 00414934 000DC900 */  sll   $t9, $t5, 4
/* 00414938 03191021 */  addu  $v0, $t8, $t9
/* 0041493C 8C43FFF8 */  lw    $v1, -8($v0)
/* 00414940 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00414944 00036480 */  sll   $t4, $v1, 0x12
/* 00414948 000C7C82 */  srl   $t7, $t4, 0x12
/* 0041494C 016F7026 */  xor   $t6, $t3, $t7
/* 00414950 31CD3FFF */  andi  $t5, $t6, 0x3fff
/* 00414954 01A3C026 */  xor   $t8, $t5, $v1
/* 00414958 AC580008 */  sw    $t8, 8($v0)
/* 0041495C 8D0B0000 */  lw    $t3, ($t0)
/* 00414960 8D2C0000 */  lw    $t4, ($t1)
/* 00414964 8FB90030 */  lw    $t9, 0x30($sp)
/* 00414968 000B7900 */  sll   $t7, $t3, 4
/* 0041496C 018F7021 */  addu  $t6, $t4, $t7
/* 00414970 ADD9FFFC */  sw    $t9, -4($t6)
/* 00414974 8D180000 */  lw    $t8, ($t0)
/* 00414978 8D2D0000 */  lw    $t5, ($t1)
/* 0041497C 8F998984 */  lw     $t9, %got(d_ptr)($gp)
/* 00414980 00185900 */  sll   $t3, $t8, 4
/* 00414984 01AB1021 */  addu  $v0, $t5, $t3
/* 00414988 8C4CFFF4 */  lw    $t4, -0xc($v0)
/* 0041498C 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00414990 01817824 */  and   $t7, $t4, $at
/* 00414994 AC4F0004 */  sw    $t7, 4($v0)
/* 00414998 8D030000 */  lw    $v1, ($t0)
/* 0041499C 8F390000 */  lw    $t9, ($t9)
/* 004149A0 17230007 */  bne   $t9, $v1, .L004149C0
/* 004149A4 00000000 */   nop   
/* 004149A8 8F9981D4 */  lw    $t9, %call16(grow_ibuffer)($gp)
/* 004149AC 0320F809 */  jalr  $t9
/* 004149B0 00000000 */   nop   
/* 004149B4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004149B8 8F88897C */  lw     $t0, %got(i_ptr)($gp)
/* 004149BC 8D030000 */  lw    $v1, ($t0)
.L004149C0:
/* 004149C0 8F9889E0 */  lw     $t8, %got(debug_ugen)($gp)
/* 004149C4 246E0001 */  addiu $t6, $v1, 1
/* 004149C8 AD0E0000 */  sw    $t6, ($t0)
/* 004149CC 93180000 */  lbu   $t8, ($t8)
/* 004149D0 2406000A */  li    $a2, 10
/* 004149D4 5300004B */  beql  $t8, $zero, .L00414B04
/* 004149D8 8FBF0024 */   lw    $ra, 0x24($sp)
/* 004149DC 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 004149E0 8F848954 */  lw     $a0, %got(output)($gp)
/* 004149E4 8F858038 */  lw    $a1, %got(RO_10009560)($gp)
/* 004149E8 2407000A */  li    $a3, 10
/* 004149EC 8C840000 */  lw    $a0, ($a0)
/* 004149F0 0320F809 */  jalr  $t9
/* 004149F4 24A59560 */   addiu $a1, %lo(RO_10009560) # addiu $a1, $a1, -0x6aa0
/* 004149F8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004149FC 240D000A */  li    $t5, 10
/* 00414A00 AFAD0010 */  sw    $t5, 0x10($sp)
/* 00414A04 8F908954 */  lw     $s0, %got(output)($gp)
/* 00414A08 8F9987D8 */  lw    $t9, %call16(write_enum)($gp)
/* 00414A0C 8F868038 */  lw    $a2, %got(D_10012570)($gp)
/* 00414A10 8E100000 */  lw    $s0, ($s0)
/* 00414A14 97A5002A */  lhu   $a1, 0x2a($sp)
/* 00414A18 00003825 */  move  $a3, $zero
/* 00414A1C 24C62570 */  addiu $a2, %lo(D_10012570) # addiu $a2, $a2, 0x2570
/* 00414A20 0320F809 */  jalr  $t9
/* 00414A24 02002025 */   move  $a0, $s0
/* 00414A28 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00414A2C 02002025 */  move  $a0, $s0
/* 00414A30 24050020 */  li    $a1, 32
/* 00414A34 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 00414A38 24060001 */  li    $a2, 1
/* 00414A3C 2407000A */  li    $a3, 10
/* 00414A40 0320F809 */  jalr  $t9
/* 00414A44 00000000 */   nop   
/* 00414A48 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00414A4C 240B000A */  li    $t3, 10
/* 00414A50 AFAB0010 */  sw    $t3, 0x10($sp)
/* 00414A54 8F9987D8 */  lw    $t9, %call16(write_enum)($gp)
/* 00414A58 8F868038 */  lw    $a2, %got(D_1001340C)($gp)
/* 00414A5C 02002025 */  move  $a0, $s0
/* 00414A60 93A5002F */  lbu   $a1, 0x2f($sp)
/* 00414A64 00003825 */  move  $a3, $zero
/* 00414A68 0320F809 */  jalr  $t9
/* 00414A6C 24C6340C */   addiu $a2, %lo(D_1001340C) # addiu $a2, $a2, 0x340c
/* 00414A70 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00414A74 02002025 */  move  $a0, $s0
/* 00414A78 8FA50030 */  lw    $a1, 0x30($sp)
/* 00414A7C 8F9987DC */  lw    $t9, %call16(write_integer)($gp)
/* 00414A80 2406000C */  li    $a2, 12
/* 00414A84 2407000A */  li    $a3, 10
/* 00414A88 0320F809 */  jalr  $t9
/* 00414A8C 00000000 */   nop   
/* 00414A90 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00414A94 24050020 */  li    $a1, 32
/* 00414A98 24060001 */  li    $a2, 1
/* 00414A9C 8F908954 */  lw     $s0, %got(output)($gp)
/* 00414AA0 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 00414AA4 2407000A */  li    $a3, 10
/* 00414AA8 8E100000 */  lw    $s0, ($s0)
/* 00414AAC 0320F809 */  jalr  $t9
/* 00414AB0 02002025 */   move  $a0, $s0
/* 00414AB4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00414AB8 240C000A */  li    $t4, 10
/* 00414ABC AFAC0010 */  sw    $t4, 0x10($sp)
/* 00414AC0 8F9987D8 */  lw    $t9, %call16(write_enum)($gp)
/* 00414AC4 8F868038 */  lw    $a2, %got(D_1001340C)($gp)
/* 00414AC8 02002025 */  move  $a0, $s0
/* 00414ACC 93A50037 */  lbu   $a1, 0x37($sp)
/* 00414AD0 00003825 */  move  $a3, $zero
/* 00414AD4 0320F809 */  jalr  $t9
/* 00414AD8 24C6340C */   addiu $a2, %lo(D_1001340C) # addiu $a2, $a2, 0x340c
/* 00414ADC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00414AE0 02002025 */  move  $a0, $s0
/* 00414AE4 8F9987CC */  lw    $t9, %call16(writeln)($gp)
/* 00414AE8 0320F809 */  jalr  $t9
/* 00414AEC 00000000 */   nop   
/* 00414AF0 97AF002A */  lhu   $t7, 0x2a($sp)
/* 00414AF4 241901AD */  li    $t9, 429
/* 00414AF8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00414AFC 01F902B4 */  teq   $t7, $t9, 0xa
/* 00414B00 8FBF0024 */  lw    $ra, 0x24($sp)
.L00414B04:
/* 00414B04 8FB0001C */  lw    $s0, 0x1c($sp)
/* 00414B08 27BD0028 */  addiu $sp, $sp, 0x28
/* 00414B0C 03E00008 */  jr    $ra
/* 00414B10 00000000 */   nop   
    .type emit_rob, @function
    .size emit_rob, .-emit_rob
    .end emit_rob

glabel emit_rab
    .ent emit_rab
    # 00426B44 func_00426B44
    # 00426C54 func_00426C54
    # 00426EF0 iloadistore
/* 00414B14 3C1C0FC1 */  .cpload $t9
/* 00414B18 279CAF3C */  
/* 00414B1C 0399E021 */  
/* 00414B20 8F88897C */  lw     $t0, %got(i_ptr)($gp)
/* 00414B24 8F898978 */  lw     $t1, %got(ibuffer)($gp)
/* 00414B28 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 00414B2C 8D0F0000 */  lw    $t7, ($t0)
/* 00414B30 8D2E0000 */  lw    $t6, ($t1)
/* 00414B34 AFBF0024 */  sw    $ra, 0x24($sp)
/* 00414B38 000FC100 */  sll   $t8, $t7, 4
/* 00414B3C AFBC0020 */  sw    $gp, 0x20($sp)
/* 00414B40 AFB0001C */  sw    $s0, 0x1c($sp)
/* 00414B44 AFA40028 */  sw    $a0, 0x28($sp)
/* 00414B48 AFA5002C */  sw    $a1, 0x2c($sp)
/* 00414B4C AFA60030 */  sw    $a2, 0x30($sp)
/* 00414B50 01D81021 */  addu  $v0, $t6, $t8
/* 00414B54 9059FFF5 */  lbu   $t9, -0xb($v0)
/* 00414B58 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00414B5C 3C01FFFC */  lui   $at, 0xfffc
/* 00414B60 332BFFC0 */  andi  $t3, $t9, 0xffc0
/* 00414B64 356C0017 */  ori   $t4, $t3, 0x17
/* 00414B68 A04C0005 */  sb    $t4, 5($v0)
/* 00414B6C 8D0F0000 */  lw    $t7, ($t0)
/* 00414B70 8D2D0000 */  lw    $t5, ($t1)
/* 00414B74 97B8002A */  lhu   $t8, 0x2a($sp)
/* 00414B78 000F7100 */  sll   $t6, $t7, 4
/* 00414B7C 01AE1021 */  addu  $v0, $t5, $t6
/* 00414B80 944AFFF6 */  lhu   $t2, -0xa($v0)
/* 00414B84 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00414B88 34213FFF */  ori   $at, $at, 0x3fff
/* 00414B8C 000ACD80 */  sll   $t9, $t2, 0x16
/* 00414B90 00195DC2 */  srl   $t3, $t9, 0x17
/* 00414B94 030B6026 */  xor   $t4, $t8, $t3
/* 00414B98 000C7DC0 */  sll   $t7, $t4, 0x17
/* 00414B9C 000F6D82 */  srl   $t5, $t7, 0x16
/* 00414BA0 01AA7026 */  xor   $t6, $t5, $t2
/* 00414BA4 A44E0006 */  sh    $t6, 6($v0)
/* 00414BA8 8D180000 */  lw    $t8, ($t0)
/* 00414BAC 8D390000 */  lw    $t9, ($t1)
/* 00414BB0 00185900 */  sll   $t3, $t8, 4
/* 00414BB4 032B1021 */  addu  $v0, $t9, $t3
/* 00414BB8 8C4CFFF8 */  lw    $t4, -8($v0)
/* 00414BBC 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00414BC0 01817824 */  and   $t7, $t4, $at
/* 00414BC4 AC4F0008 */  sw    $t7, 8($v0)
/* 00414BC8 8D0E0000 */  lw    $t6, ($t0)
/* 00414BCC 8D2D0000 */  lw    $t5, ($t1)
/* 00414BD0 93B9002F */  lbu   $t9, 0x2f($sp)
/* 00414BD4 000EC100 */  sll   $t8, $t6, 4
/* 00414BD8 01B81021 */  addu  $v0, $t5, $t8
/* 00414BDC 8C43FFF8 */  lw    $v1, -8($v0)
/* 00414BE0 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00414BE4 3C01FE3F */  lui   $at, 0xfe3f
/* 00414BE8 00035E42 */  srl   $t3, $v1, 0x19
/* 00414BEC 032B6026 */  xor   $t4, $t9, $t3
/* 00414BF0 000C7E40 */  sll   $t7, $t4, 0x19
/* 00414BF4 01E37026 */  xor   $t6, $t7, $v1
/* 00414BF8 AC4E0008 */  sw    $t6, 8($v0)
/* 00414BFC 8D180000 */  lw    $t8, ($t0)
/* 00414C00 8D2D0000 */  lw    $t5, ($t1)
/* 00414C04 93AB003B */  lbu   $t3, 0x3b($sp)
/* 00414C08 0018C900 */  sll   $t9, $t8, 4
/* 00414C0C 01B91021 */  addu  $v0, $t5, $t9
/* 00414C10 8C43FFF8 */  lw    $v1, -8($v0)
/* 00414C14 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00414C18 3421FFFF */  ori   $at, $at, 0xffff
/* 00414C1C 000361C0 */  sll   $t4, $v1, 7
/* 00414C20 000C7E42 */  srl   $t7, $t4, 0x19
/* 00414C24 016F7026 */  xor   $t6, $t3, $t7
/* 00414C28 000EC640 */  sll   $t8, $t6, 0x19
/* 00414C2C 001869C2 */  srl   $t5, $t8, 7
/* 00414C30 01A3C826 */  xor   $t9, $t5, $v1
/* 00414C34 AC590008 */  sw    $t9, 8($v0)
/* 00414C38 8D0B0000 */  lw    $t3, ($t0)
/* 00414C3C 8D2C0000 */  lw    $t4, ($t1)
/* 00414C40 000B7900 */  sll   $t7, $t3, 4
/* 00414C44 018F7021 */  addu  $t6, $t4, $t7
/* 00414C48 ADC7FFF0 */  sw    $a3, -0x10($t6)
/* 00414C4C 8D0D0000 */  lw    $t5, ($t0)
/* 00414C50 8D380000 */  lw    $t8, ($t1)
/* 00414C54 8FAB003C */  lw    $t3, 0x3c($sp)
/* 00414C58 000DC900 */  sll   $t9, $t5, 4
/* 00414C5C 03191021 */  addu  $v0, $t8, $t9
/* 00414C60 8C43FFF8 */  lw    $v1, -8($v0)
/* 00414C64 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00414C68 00036480 */  sll   $t4, $v1, 0x12
/* 00414C6C 000C7C82 */  srl   $t7, $t4, 0x12
/* 00414C70 016F7026 */  xor   $t6, $t3, $t7
/* 00414C74 31CD3FFF */  andi  $t5, $t6, 0x3fff
/* 00414C78 01A3C026 */  xor   $t8, $t5, $v1
/* 00414C7C AC580008 */  sw    $t8, 8($v0)
/* 00414C80 8D0B0000 */  lw    $t3, ($t0)
/* 00414C84 8D2C0000 */  lw    $t4, ($t1)
/* 00414C88 8FB90030 */  lw    $t9, 0x30($sp)
/* 00414C8C 000B7900 */  sll   $t7, $t3, 4
/* 00414C90 018F7021 */  addu  $t6, $t4, $t7
/* 00414C94 ADD9FFFC */  sw    $t9, -4($t6)
/* 00414C98 8D180000 */  lw    $t8, ($t0)
/* 00414C9C 8D2D0000 */  lw    $t5, ($t1)
/* 00414CA0 8F998984 */  lw     $t9, %got(d_ptr)($gp)
/* 00414CA4 00185900 */  sll   $t3, $t8, 4
/* 00414CA8 01AB1021 */  addu  $v0, $t5, $t3
/* 00414CAC 8C4CFFF4 */  lw    $t4, -0xc($v0)
/* 00414CB0 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00414CB4 01817824 */  and   $t7, $t4, $at
/* 00414CB8 AC4F0004 */  sw    $t7, 4($v0)
/* 00414CBC 8D030000 */  lw    $v1, ($t0)
/* 00414CC0 8F390000 */  lw    $t9, ($t9)
/* 00414CC4 17230007 */  bne   $t9, $v1, .L00414CE4
/* 00414CC8 00000000 */   nop   
/* 00414CCC 8F9981D4 */  lw    $t9, %call16(grow_ibuffer)($gp)
/* 00414CD0 0320F809 */  jalr  $t9
/* 00414CD4 00000000 */   nop   
/* 00414CD8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00414CDC 8F88897C */  lw     $t0, %got(i_ptr)($gp)
/* 00414CE0 8D030000 */  lw    $v1, ($t0)
.L00414CE4:
/* 00414CE4 8F9889E0 */  lw     $t8, %got(debug_ugen)($gp)
/* 00414CE8 246E0001 */  addiu $t6, $v1, 1
/* 00414CEC AD0E0000 */  sw    $t6, ($t0)
/* 00414CF0 93180000 */  lbu   $t8, ($t8)
/* 00414CF4 2406000A */  li    $a2, 10
/* 00414CF8 5300004B */  beql  $t8, $zero, .L00414E28
/* 00414CFC 8FBF0024 */   lw    $ra, 0x24($sp)
/* 00414D00 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 00414D04 8F848954 */  lw     $a0, %got(output)($gp)
/* 00414D08 8F858038 */  lw    $a1, %got(RO_1000956A)($gp)
/* 00414D0C 2407000A */  li    $a3, 10
/* 00414D10 8C840000 */  lw    $a0, ($a0)
/* 00414D14 0320F809 */  jalr  $t9
/* 00414D18 24A5956A */   addiu $a1, %lo(RO_1000956A) # addiu $a1, $a1, -0x6a96
/* 00414D1C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00414D20 240D000A */  li    $t5, 10
/* 00414D24 AFAD0010 */  sw    $t5, 0x10($sp)
/* 00414D28 8F908954 */  lw     $s0, %got(output)($gp)
/* 00414D2C 8F9987D8 */  lw    $t9, %call16(write_enum)($gp)
/* 00414D30 8F868038 */  lw    $a2, %got(D_10012570)($gp)
/* 00414D34 8E100000 */  lw    $s0, ($s0)
/* 00414D38 97A5002A */  lhu   $a1, 0x2a($sp)
/* 00414D3C 00003825 */  move  $a3, $zero
/* 00414D40 24C62570 */  addiu $a2, %lo(D_10012570) # addiu $a2, $a2, 0x2570
/* 00414D44 0320F809 */  jalr  $t9
/* 00414D48 02002025 */   move  $a0, $s0
/* 00414D4C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00414D50 02002025 */  move  $a0, $s0
/* 00414D54 24050020 */  li    $a1, 32
/* 00414D58 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 00414D5C 24060001 */  li    $a2, 1
/* 00414D60 2407000A */  li    $a3, 10
/* 00414D64 0320F809 */  jalr  $t9
/* 00414D68 00000000 */   nop   
/* 00414D6C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00414D70 240B000A */  li    $t3, 10
/* 00414D74 AFAB0010 */  sw    $t3, 0x10($sp)
/* 00414D78 8F9987D8 */  lw    $t9, %call16(write_enum)($gp)
/* 00414D7C 8F868038 */  lw    $a2, %got(D_1001340C)($gp)
/* 00414D80 02002025 */  move  $a0, $s0
/* 00414D84 93A5002F */  lbu   $a1, 0x2f($sp)
/* 00414D88 00003825 */  move  $a3, $zero
/* 00414D8C 0320F809 */  jalr  $t9
/* 00414D90 24C6340C */   addiu $a2, %lo(D_1001340C) # addiu $a2, $a2, 0x340c
/* 00414D94 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00414D98 02002025 */  move  $a0, $s0
/* 00414D9C 8FA50030 */  lw    $a1, 0x30($sp)
/* 00414DA0 8F9987DC */  lw    $t9, %call16(write_integer)($gp)
/* 00414DA4 2406000C */  li    $a2, 12
/* 00414DA8 2407000A */  li    $a3, 10
/* 00414DAC 0320F809 */  jalr  $t9
/* 00414DB0 00000000 */   nop   
/* 00414DB4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00414DB8 24050020 */  li    $a1, 32
/* 00414DBC 24060001 */  li    $a2, 1
/* 00414DC0 8F908954 */  lw     $s0, %got(output)($gp)
/* 00414DC4 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 00414DC8 2407000A */  li    $a3, 10
/* 00414DCC 8E100000 */  lw    $s0, ($s0)
/* 00414DD0 0320F809 */  jalr  $t9
/* 00414DD4 02002025 */   move  $a0, $s0
/* 00414DD8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00414DDC 240C000A */  li    $t4, 10
/* 00414DE0 AFAC0010 */  sw    $t4, 0x10($sp)
/* 00414DE4 8F9987D8 */  lw    $t9, %call16(write_enum)($gp)
/* 00414DE8 8F868038 */  lw    $a2, %got(D_1001340C)($gp)
/* 00414DEC 02002025 */  move  $a0, $s0
/* 00414DF0 93A5003B */  lbu   $a1, 0x3b($sp)
/* 00414DF4 00003825 */  move  $a3, $zero
/* 00414DF8 0320F809 */  jalr  $t9
/* 00414DFC 24C6340C */   addiu $a2, %lo(D_1001340C) # addiu $a2, $a2, 0x340c
/* 00414E00 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00414E04 02002025 */  move  $a0, $s0
/* 00414E08 8F9987CC */  lw    $t9, %call16(writeln)($gp)
/* 00414E0C 0320F809 */  jalr  $t9
/* 00414E10 00000000 */   nop   
/* 00414E14 97AF002A */  lhu   $t7, 0x2a($sp)
/* 00414E18 241901AD */  li    $t9, 429
/* 00414E1C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00414E20 01F902B4 */  teq   $t7, $t9, 0xa
/* 00414E24 8FBF0024 */  lw    $ra, 0x24($sp)
.L00414E28:
/* 00414E28 8FB0001C */  lw    $s0, 0x1c($sp)
/* 00414E2C 27BD0028 */  addiu $sp, $sp, 0x28
/* 00414E30 03E00008 */  jr    $ra
/* 00414E34 00000000 */   nop   
    .type emit_rab, @function
    .size emit_rab, .-emit_rab
    .end emit_rab

glabel emit_rrab
    .ent emit_rrab
    # 0042670C loadstore
    # 00427538 func_00427538
    # 00427620 rloadrstore
/* 00414E38 3C1C0FC1 */  .cpload $t9
/* 00414E3C 279CAC18 */  
/* 00414E40 0399E021 */  
/* 00414E44 8F88897C */  lw     $t0, %got(i_ptr)($gp)
/* 00414E48 8F898978 */  lw     $t1, %got(ibuffer)($gp)
/* 00414E4C 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 00414E50 8D0F0000 */  lw    $t7, ($t0)
/* 00414E54 8D2E0000 */  lw    $t6, ($t1)
/* 00414E58 AFBF0024 */  sw    $ra, 0x24($sp)
/* 00414E5C 000FC100 */  sll   $t8, $t7, 4
/* 00414E60 AFBC0020 */  sw    $gp, 0x20($sp)
/* 00414E64 AFB0001C */  sw    $s0, 0x1c($sp)
/* 00414E68 AFA40028 */  sw    $a0, 0x28($sp)
/* 00414E6C AFA5002C */  sw    $a1, 0x2c($sp)
/* 00414E70 AFA60030 */  sw    $a2, 0x30($sp)
/* 00414E74 01D81021 */  addu  $v0, $t6, $t8
/* 00414E78 9059FFF5 */  lbu   $t9, -0xb($v0)
/* 00414E7C 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00414E80 3C01FFFC */  lui   $at, 0xfffc
/* 00414E84 332BFFC0 */  andi  $t3, $t9, 0xffc0
/* 00414E88 356C0017 */  ori   $t4, $t3, 0x17
/* 00414E8C A04C0005 */  sb    $t4, 5($v0)
/* 00414E90 8D0F0000 */  lw    $t7, ($t0)
/* 00414E94 8D2D0000 */  lw    $t5, ($t1)
/* 00414E98 97B8002A */  lhu   $t8, 0x2a($sp)
/* 00414E9C 000F7100 */  sll   $t6, $t7, 4
/* 00414EA0 01AE1021 */  addu  $v0, $t5, $t6
/* 00414EA4 944AFFF6 */  lhu   $t2, -0xa($v0)
/* 00414EA8 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00414EAC 34213FFF */  ori   $at, $at, 0x3fff
/* 00414EB0 000ACD80 */  sll   $t9, $t2, 0x16
/* 00414EB4 00195DC2 */  srl   $t3, $t9, 0x17
/* 00414EB8 030B6026 */  xor   $t4, $t8, $t3
/* 00414EBC 000C7DC0 */  sll   $t7, $t4, 0x17
/* 00414EC0 000F6D82 */  srl   $t5, $t7, 0x16
/* 00414EC4 01AA7026 */  xor   $t6, $t5, $t2
/* 00414EC8 A44E0006 */  sh    $t6, 6($v0)
/* 00414ECC 8D180000 */  lw    $t8, ($t0)
/* 00414ED0 8D390000 */  lw    $t9, ($t1)
/* 00414ED4 00185900 */  sll   $t3, $t8, 4
/* 00414ED8 032B1021 */  addu  $v0, $t9, $t3
/* 00414EDC 8C4CFFF8 */  lw    $t4, -8($v0)
/* 00414EE0 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00414EE4 01817824 */  and   $t7, $t4, $at
/* 00414EE8 35ED4000 */  ori   $t5, $t7, 0x4000
/* 00414EEC AC4D0008 */  sw    $t5, 8($v0)
/* 00414EF0 8D180000 */  lw    $t8, ($t0)
/* 00414EF4 8D2E0000 */  lw    $t6, ($t1)
/* 00414EF8 93AB002F */  lbu   $t3, 0x2f($sp)
/* 00414EFC 0018C900 */  sll   $t9, $t8, 4
/* 00414F00 01D91021 */  addu  $v0, $t6, $t9
/* 00414F04 8C43FFF8 */  lw    $v1, -8($v0)
/* 00414F08 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00414F0C 2401C000 */  li    $at, -16384
/* 00414F10 00036642 */  srl   $t4, $v1, 0x19
/* 00414F14 016C7826 */  xor   $t7, $t3, $t4
/* 00414F18 000F6E40 */  sll   $t5, $t7, 0x19
/* 00414F1C 01A3C026 */  xor   $t8, $t5, $v1
/* 00414F20 AC580008 */  sw    $t8, 8($v0)
/* 00414F24 8D190000 */  lw    $t9, ($t0)
/* 00414F28 8D2E0000 */  lw    $t6, ($t1)
/* 00414F2C 93AC003B */  lbu   $t4, 0x3b($sp)
/* 00414F30 00195900 */  sll   $t3, $t9, 4
/* 00414F34 01CB1021 */  addu  $v0, $t6, $t3
/* 00414F38 8C43FFF8 */  lw    $v1, -8($v0)
/* 00414F3C 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00414F40 000379C0 */  sll   $t7, $v1, 7
/* 00414F44 000F6E42 */  srl   $t5, $t7, 0x19
/* 00414F48 018DC026 */  xor   $t8, $t4, $t5
/* 00414F4C 0018CE40 */  sll   $t9, $t8, 0x19
/* 00414F50 001971C2 */  srl   $t6, $t9, 7
/* 00414F54 01C35826 */  xor   $t3, $t6, $v1
/* 00414F58 AC4B0008 */  sw    $t3, 8($v0)
/* 00414F5C 8D0C0000 */  lw    $t4, ($t0)
/* 00414F60 8D2F0000 */  lw    $t7, ($t1)
/* 00414F64 000C6900 */  sll   $t5, $t4, 4
/* 00414F68 01EDC021 */  addu  $t8, $t7, $t5
/* 00414F6C AF07FFF0 */  sw    $a3, -0x10($t8)
/* 00414F70 8D0E0000 */  lw    $t6, ($t0)
/* 00414F74 8D390000 */  lw    $t9, ($t1)
/* 00414F78 000E5900 */  sll   $t3, $t6, 4
/* 00414F7C 032B1021 */  addu  $v0, $t9, $t3
/* 00414F80 8C4CFFF8 */  lw    $t4, -8($v0)
/* 00414F84 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00414F88 01817824 */  and   $t7, $t4, $at
/* 00414F8C AC4F0008 */  sw    $t7, 8($v0)
/* 00414F90 8D0E0000 */  lw    $t6, ($t0)
/* 00414F94 8D380000 */  lw    $t8, ($t1)
/* 00414F98 8FAD0030 */  lw    $t5, 0x30($sp)
/* 00414F9C 000EC900 */  sll   $t9, $t6, 4
/* 00414FA0 03195821 */  addu  $t3, $t8, $t9
/* 00414FA4 AD6DFFFC */  sw    $t5, -4($t3)
/* 00414FA8 8D0F0000 */  lw    $t7, ($t0)
/* 00414FAC 8D2C0000 */  lw    $t4, ($t1)
/* 00414FB0 3C01FE3F */  lui   $at, 0xfe3f
/* 00414FB4 000F7100 */  sll   $t6, $t7, 4
/* 00414FB8 018E1021 */  addu  $v0, $t4, $t6
/* 00414FBC 8C58FFF4 */  lw    $t8, -0xc($v0)
/* 00414FC0 3421FFFF */  ori   $at, $at, 0xffff
/* 00414FC4 8F8B8984 */  lw     $t3, %got(d_ptr)($gp)
/* 00414FC8 0301C824 */  and   $t9, $t8, $at
/* 00414FCC 3C010180 */  lui   $at, 0x180
/* 00414FD0 03216825 */  or    $t5, $t9, $at
/* 00414FD4 AC4DFFF4 */  sw    $t5, -0xc($v0)
/* 00414FD8 8D030000 */  lw    $v1, ($t0)
/* 00414FDC 8D6B0000 */  lw    $t3, ($t3)
/* 00414FE0 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00414FE4 15630007 */  bne   $t3, $v1, .L00415004
/* 00414FE8 00000000 */   nop   
/* 00414FEC 8F9981D4 */  lw    $t9, %call16(grow_ibuffer)($gp)
/* 00414FF0 0320F809 */  jalr  $t9
/* 00414FF4 00000000 */   nop   
/* 00414FF8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00414FFC 8F88897C */  lw     $t0, %got(i_ptr)($gp)
/* 00415000 8D030000 */  lw    $v1, ($t0)
.L00415004:
/* 00415004 8F8C89E0 */  lw     $t4, %got(debug_ugen)($gp)
/* 00415008 246F0001 */  addiu $t7, $v1, 1
/* 0041500C AD0F0000 */  sw    $t7, ($t0)
/* 00415010 918C0000 */  lbu   $t4, ($t4)
/* 00415014 2406000A */  li    $a2, 10
/* 00415018 51800048 */  beql  $t4, $zero, .L0041513C
/* 0041501C 8FBF0024 */   lw    $ra, 0x24($sp)
/* 00415020 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 00415024 8F848954 */  lw     $a0, %got(output)($gp)
/* 00415028 8F858038 */  lw    $a1, %got(RO_10009574)($gp)
/* 0041502C 2407000A */  li    $a3, 10
/* 00415030 8C840000 */  lw    $a0, ($a0)
/* 00415034 0320F809 */  jalr  $t9
/* 00415038 24A59574 */   addiu $a1, %lo(RO_10009574) # addiu $a1, $a1, -0x6a8c
/* 0041503C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00415040 240E000A */  li    $t6, 10
/* 00415044 AFAE0010 */  sw    $t6, 0x10($sp)
/* 00415048 8F908954 */  lw     $s0, %got(output)($gp)
/* 0041504C 8F9987D8 */  lw    $t9, %call16(write_enum)($gp)
/* 00415050 8F868038 */  lw    $a2, %got(D_10012570)($gp)
/* 00415054 8E100000 */  lw    $s0, ($s0)
/* 00415058 97A5002A */  lhu   $a1, 0x2a($sp)
/* 0041505C 00003825 */  move  $a3, $zero
/* 00415060 24C62570 */  addiu $a2, %lo(D_10012570) # addiu $a2, $a2, 0x2570
/* 00415064 0320F809 */  jalr  $t9
/* 00415068 02002025 */   move  $a0, $s0
/* 0041506C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00415070 02002025 */  move  $a0, $s0
/* 00415074 24050020 */  li    $a1, 32
/* 00415078 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 0041507C 24060001 */  li    $a2, 1
/* 00415080 2407000A */  li    $a3, 10
/* 00415084 0320F809 */  jalr  $t9
/* 00415088 00000000 */   nop   
/* 0041508C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00415090 2418000A */  li    $t8, 10
/* 00415094 AFB80010 */  sw    $t8, 0x10($sp)
/* 00415098 8F9987D8 */  lw    $t9, %call16(write_enum)($gp)
/* 0041509C 8F868038 */  lw    $a2, %got(D_1001340C)($gp)
/* 004150A0 02002025 */  move  $a0, $s0
/* 004150A4 93A5002F */  lbu   $a1, 0x2f($sp)
/* 004150A8 00003825 */  move  $a3, $zero
/* 004150AC 0320F809 */  jalr  $t9
/* 004150B0 24C6340C */   addiu $a2, %lo(D_1001340C) # addiu $a2, $a2, 0x340c
/* 004150B4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004150B8 02002025 */  move  $a0, $s0
/* 004150BC 8FA50030 */  lw    $a1, 0x30($sp)
/* 004150C0 8F9987DC */  lw    $t9, %call16(write_integer)($gp)
/* 004150C4 2406000C */  li    $a2, 12
/* 004150C8 2407000A */  li    $a3, 10
/* 004150CC 0320F809 */  jalr  $t9
/* 004150D0 00000000 */   nop   
/* 004150D4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004150D8 24050020 */  li    $a1, 32
/* 004150DC 24060001 */  li    $a2, 1
/* 004150E0 8F908954 */  lw     $s0, %got(output)($gp)
/* 004150E4 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 004150E8 2407000A */  li    $a3, 10
/* 004150EC 8E100000 */  lw    $s0, ($s0)
/* 004150F0 0320F809 */  jalr  $t9
/* 004150F4 02002025 */   move  $a0, $s0
/* 004150F8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004150FC 2419000A */  li    $t9, 10
/* 00415100 AFB90010 */  sw    $t9, 0x10($sp)
/* 00415104 8F9987D8 */  lw    $t9, %call16(write_enum)($gp)
/* 00415108 8F868038 */  lw    $a2, %got(D_1001340C)($gp)
/* 0041510C 02002025 */  move  $a0, $s0
/* 00415110 93A5003B */  lbu   $a1, 0x3b($sp)
/* 00415114 00003825 */  move  $a3, $zero
/* 00415118 0320F809 */  jalr  $t9
/* 0041511C 24C6340C */   addiu $a2, %lo(D_1001340C) # addiu $a2, $a2, 0x340c
/* 00415120 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00415124 02002025 */  move  $a0, $s0
/* 00415128 8F9987CC */  lw    $t9, %call16(writeln)($gp)
/* 0041512C 0320F809 */  jalr  $t9
/* 00415130 00000000 */   nop   
/* 00415134 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00415138 8FBF0024 */  lw    $ra, 0x24($sp)
.L0041513C:
/* 0041513C 8FB0001C */  lw    $s0, 0x1c($sp)
/* 00415140 27BD0028 */  addiu $sp, $sp, 0x28
/* 00415144 03E00008 */  jr    $ra
/* 00415148 00000000 */   nop   
    .type emit_rrab, @function
    .size emit_rrab, .-emit_rrab
    .end emit_rrab

glabel emit_rllb
    .ent emit_rllb
    # 0042BDAC eval
/* 0041514C 3C1C0FC1 */  .cpload $t9
/* 00415150 279CA904 */  
/* 00415154 0399E021 */  
/* 00415158 8F88897C */  lw     $t0, %got(i_ptr)($gp)
/* 0041515C 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 00415160 8F898978 */  lw     $t1, %got(ibuffer)($gp)
/* 00415164 8D0F0000 */  lw    $t7, ($t0)
/* 00415168 AFBF0024 */  sw    $ra, 0x24($sp)
/* 0041516C 8D2E0000 */  lw    $t6, ($t1)
/* 00415170 000FC100 */  sll   $t8, $t7, 4
/* 00415174 AFBC0020 */  sw    $gp, 0x20($sp)
/* 00415178 AFB0001C */  sw    $s0, 0x1c($sp)
/* 0041517C AFA40028 */  sw    $a0, 0x28($sp)
/* 00415180 AFA5002C */  sw    $a1, 0x2c($sp)
/* 00415184 AFA60030 */  sw    $a2, 0x30($sp)
/* 00415188 AFA70034 */  sw    $a3, 0x34($sp)
/* 0041518C 01D81821 */  addu  $v1, $t6, $t8
/* 00415190 9079FFF5 */  lbu   $t9, -0xb($v1)
/* 00415194 2463FFF0 */  addiu $v1, $v1, -0x10
/* 00415198 3C01FFFC */  lui   $at, 0xfffc
/* 0041519C 332BFFC0 */  andi  $t3, $t9, 0xffc0
/* 004151A0 356C0017 */  ori   $t4, $t3, 0x17
/* 004151A4 A06C0005 */  sb    $t4, 5($v1)
/* 004151A8 8D0F0000 */  lw    $t7, ($t0)
/* 004151AC 8D2D0000 */  lw    $t5, ($t1)
/* 004151B0 97B8002A */  lhu   $t8, 0x2a($sp)
/* 004151B4 000F7100 */  sll   $t6, $t7, 4
/* 004151B8 01AE1821 */  addu  $v1, $t5, $t6
/* 004151BC 946AFFF6 */  lhu   $t2, -0xa($v1)
/* 004151C0 2463FFF0 */  addiu $v1, $v1, -0x10
/* 004151C4 34213FFF */  ori   $at, $at, 0x3fff
/* 004151C8 000ACD80 */  sll   $t9, $t2, 0x16
/* 004151CC 00195DC2 */  srl   $t3, $t9, 0x17
/* 004151D0 030B6026 */  xor   $t4, $t8, $t3
/* 004151D4 000C7DC0 */  sll   $t7, $t4, 0x17
/* 004151D8 000F6D82 */  srl   $t5, $t7, 0x16
/* 004151DC 01AA7026 */  xor   $t6, $t5, $t2
/* 004151E0 A46E0006 */  sh    $t6, 6($v1)
/* 004151E4 8D180000 */  lw    $t8, ($t0)
/* 004151E8 8D390000 */  lw    $t9, ($t1)
/* 004151EC 00185900 */  sll   $t3, $t8, 4
/* 004151F0 032B1821 */  addu  $v1, $t9, $t3
/* 004151F4 8C6CFFF8 */  lw    $t4, -8($v1)
/* 004151F8 2463FFF0 */  addiu $v1, $v1, -0x10
/* 004151FC 01817824 */  and   $t7, $t4, $at
/* 00415200 AC6F0008 */  sw    $t7, 8($v1)
/* 00415204 8D0E0000 */  lw    $t6, ($t0)
/* 00415208 8D2D0000 */  lw    $t5, ($t1)
/* 0041520C 93B9002F */  lbu   $t9, 0x2f($sp)
/* 00415210 000EC100 */  sll   $t8, $t6, 4
/* 00415214 01B81821 */  addu  $v1, $t5, $t8
/* 00415218 8C62FFF8 */  lw    $v0, -8($v1)
/* 0041521C 2463FFF0 */  addiu $v1, $v1, -0x10
/* 00415220 00025E42 */  srl   $t3, $v0, 0x19
/* 00415224 032B6026 */  xor   $t4, $t9, $t3
/* 00415228 000C7E40 */  sll   $t7, $t4, 0x19
/* 0041522C 01E27026 */  xor   $t6, $t7, $v0
/* 00415230 AC6E0008 */  sw    $t6, 8($v1)
/* 00415234 8D180000 */  lw    $t8, ($t0)
/* 00415238 8D2D0000 */  lw    $t5, ($t1)
/* 0041523C 93AB003B */  lbu   $t3, 0x3b($sp)
/* 00415240 0018C900 */  sll   $t9, $t8, 4
/* 00415244 01B91821 */  addu  $v1, $t5, $t9
/* 00415248 8C62FFF8 */  lw    $v0, -8($v1)
/* 0041524C 2463FFF0 */  addiu $v1, $v1, -0x10
/* 00415250 000261C0 */  sll   $t4, $v0, 7
/* 00415254 000C7E42 */  srl   $t7, $t4, 0x19
/* 00415258 016F7026 */  xor   $t6, $t3, $t7
/* 0041525C 000EC640 */  sll   $t8, $t6, 0x19
/* 00415260 001869C2 */  srl   $t5, $t8, 7
/* 00415264 01A2C826 */  xor   $t9, $t5, $v0
/* 00415268 AC790008 */  sw    $t9, 8($v1)
/* 0041526C 8F9981D8 */  lw    $t9, %call16(create_local_label)($gp)
/* 00415270 8FA40034 */  lw    $a0, 0x34($sp)
/* 00415274 0320F809 */  jalr  $t9
/* 00415278 00000000 */   nop   
/* 0041527C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00415280 2401C000 */  li    $at, -16384
/* 00415284 8F88897C */  lw     $t0, %got(i_ptr)($gp)
/* 00415288 8F898978 */  lw     $t1, %got(ibuffer)($gp)
/* 0041528C 8D0B0000 */  lw    $t3, ($t0)
/* 00415290 8D2C0000 */  lw    $t4, ($t1)
/* 00415294 000B7900 */  sll   $t7, $t3, 4
/* 00415298 018F7021 */  addu  $t6, $t4, $t7
/* 0041529C ADC2FFF0 */  sw    $v0, -0x10($t6)
/* 004152A0 8D0D0000 */  lw    $t5, ($t0)
/* 004152A4 8D380000 */  lw    $t8, ($t1)
/* 004152A8 000DC900 */  sll   $t9, $t5, 4
/* 004152AC 03191821 */  addu  $v1, $t8, $t9
/* 004152B0 8C6BFFF8 */  lw    $t3, -8($v1)
/* 004152B4 2463FFF0 */  addiu $v1, $v1, -0x10
/* 004152B8 01616024 */  and   $t4, $t3, $at
/* 004152BC AC6C0008 */  sw    $t4, 8($v1)
/* 004152C0 8D0D0000 */  lw    $t5, ($t0)
/* 004152C4 8D2E0000 */  lw    $t6, ($t1)
/* 004152C8 8FAF0030 */  lw    $t7, 0x30($sp)
/* 004152CC 000DC100 */  sll   $t8, $t5, 4
/* 004152D0 01D8C821 */  addu  $t9, $t6, $t8
/* 004152D4 AF2FFFFC */  sw    $t7, -4($t9)
/* 004152D8 8D0C0000 */  lw    $t4, ($t0)
/* 004152DC 8D2B0000 */  lw    $t3, ($t1)
/* 004152E0 3C01FE3F */  lui   $at, 0xfe3f
/* 004152E4 000C6900 */  sll   $t5, $t4, 4
/* 004152E8 016D1821 */  addu  $v1, $t3, $t5
/* 004152EC 8C6EFFF4 */  lw    $t6, -0xc($v1)
/* 004152F0 3421FFFF */  ori   $at, $at, 0xffff
/* 004152F4 8F8F8984 */  lw     $t7, %got(d_ptr)($gp)
/* 004152F8 01C1C024 */  and   $t8, $t6, $at
/* 004152FC AC78FFF4 */  sw    $t8, -0xc($v1)
/* 00415300 8D040000 */  lw    $a0, ($t0)
/* 00415304 8DEF0000 */  lw    $t7, ($t7)
/* 00415308 2463FFF0 */  addiu $v1, $v1, -0x10
/* 0041530C 15E40007 */  bne   $t7, $a0, .L0041532C
/* 00415310 00000000 */   nop   
/* 00415314 8F9981D4 */  lw    $t9, %call16(grow_ibuffer)($gp)
/* 00415318 0320F809 */  jalr  $t9
/* 0041531C 00000000 */   nop   
/* 00415320 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00415324 8F88897C */  lw     $t0, %got(i_ptr)($gp)
/* 00415328 8D040000 */  lw    $a0, ($t0)
.L0041532C:
/* 0041532C 8F8C89E0 */  lw     $t4, %got(debug_ugen)($gp)
/* 00415330 24990001 */  addiu $t9, $a0, 1
/* 00415334 AD190000 */  sw    $t9, ($t0)
/* 00415338 918C0000 */  lbu   $t4, ($t4)
/* 0041533C 2406000B */  li    $a2, 11
/* 00415340 51800050 */  beql  $t4, $zero, .L00415484
/* 00415344 8FBF0024 */   lw    $ra, 0x24($sp)
/* 00415348 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0041534C 8F848954 */  lw     $a0, %got(output)($gp)
/* 00415350 8F858038 */  lw    $a1, %got(RO_1000957E)($gp)
/* 00415354 2407000B */  li    $a3, 11
/* 00415358 8C840000 */  lw    $a0, ($a0)
/* 0041535C 0320F809 */  jalr  $t9
/* 00415360 24A5957E */   addiu $a1, %lo(RO_1000957E) # addiu $a1, $a1, -0x6a82
/* 00415364 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00415368 240B000A */  li    $t3, 10
/* 0041536C AFAB0010 */  sw    $t3, 0x10($sp)
/* 00415370 8F908954 */  lw     $s0, %got(output)($gp)
/* 00415374 8F9987D8 */  lw    $t9, %call16(write_enum)($gp)
/* 00415378 8F868038 */  lw    $a2, %got(D_10012570)($gp)
/* 0041537C 8E100000 */  lw    $s0, ($s0)
/* 00415380 97A5002A */  lhu   $a1, 0x2a($sp)
/* 00415384 00003825 */  move  $a3, $zero
/* 00415388 24C62570 */  addiu $a2, %lo(D_10012570) # addiu $a2, $a2, 0x2570
/* 0041538C 0320F809 */  jalr  $t9
/* 00415390 02002025 */   move  $a0, $s0
/* 00415394 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00415398 02002025 */  move  $a0, $s0
/* 0041539C 24050020 */  li    $a1, 32
/* 004153A0 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 004153A4 24060001 */  li    $a2, 1
/* 004153A8 2407000A */  li    $a3, 10
/* 004153AC 0320F809 */  jalr  $t9
/* 004153B0 00000000 */   nop   
/* 004153B4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004153B8 240D000A */  li    $t5, 10
/* 004153BC AFAD0010 */  sw    $t5, 0x10($sp)
/* 004153C0 8F9987D8 */  lw    $t9, %call16(write_enum)($gp)
/* 004153C4 8F868038 */  lw    $a2, %got(D_1001340C)($gp)
/* 004153C8 02002025 */  move  $a0, $s0
/* 004153CC 93A5002F */  lbu   $a1, 0x2f($sp)
/* 004153D0 00003825 */  move  $a3, $zero
/* 004153D4 0320F809 */  jalr  $t9
/* 004153D8 24C6340C */   addiu $a2, %lo(D_1001340C) # addiu $a2, $a2, 0x340c
/* 004153DC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004153E0 02002025 */  move  $a0, $s0
/* 004153E4 8FA50030 */  lw    $a1, 0x30($sp)
/* 004153E8 8F9987DC */  lw    $t9, %call16(write_integer)($gp)
/* 004153EC 2406000C */  li    $a2, 12
/* 004153F0 2407000A */  li    $a3, 10
/* 004153F4 0320F809 */  jalr  $t9
/* 004153F8 00000000 */   nop   
/* 004153FC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00415400 8FA50034 */  lw    $a1, 0x34($sp)
/* 00415404 2406000C */  li    $a2, 12
/* 00415408 8F9987E0 */  lw    $t9, %call16(write_cardinal)($gp)
/* 0041540C 8F848954 */  lw     $a0, %got(output)($gp)
/* 00415410 2407000A */  li    $a3, 10
/* 00415414 0320F809 */  jalr  $t9
/* 00415418 8C840000 */   lw    $a0, ($a0)
/* 0041541C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00415420 24050020 */  li    $a1, 32
/* 00415424 24060001 */  li    $a2, 1
/* 00415428 8F908954 */  lw     $s0, %got(output)($gp)
/* 0041542C 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 00415430 2407000A */  li    $a3, 10
/* 00415434 8E100000 */  lw    $s0, ($s0)
/* 00415438 0320F809 */  jalr  $t9
/* 0041543C 02002025 */   move  $a0, $s0
/* 00415440 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00415444 240E000A */  li    $t6, 10
/* 00415448 AFAE0010 */  sw    $t6, 0x10($sp)
/* 0041544C 8F9987D8 */  lw    $t9, %call16(write_enum)($gp)
/* 00415450 8F868038 */  lw    $a2, %got(D_1001340C)($gp)
/* 00415454 02002025 */  move  $a0, $s0
/* 00415458 93A5003B */  lbu   $a1, 0x3b($sp)
/* 0041545C 00003825 */  move  $a3, $zero
/* 00415460 0320F809 */  jalr  $t9
/* 00415464 24C6340C */   addiu $a2, %lo(D_1001340C) # addiu $a2, $a2, 0x340c
/* 00415468 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041546C 02002025 */  move  $a0, $s0
/* 00415470 8F9987CC */  lw    $t9, %call16(writeln)($gp)
/* 00415474 0320F809 */  jalr  $t9
/* 00415478 00000000 */   nop   
/* 0041547C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00415480 8FBF0024 */  lw    $ra, 0x24($sp)
.L00415484:
/* 00415484 8FB0001C */  lw    $s0, 0x1c($sp)
/* 00415488 27BD0028 */  addiu $sp, $sp, 0x28
/* 0041548C 03E00008 */  jr    $ra
/* 00415490 00000000 */   nop   
    .type emit_rllb, @function
    .size emit_rllb, .-emit_rllb
    .end emit_rllb

glabel emit_ra
    .ent emit_ra
    # 0042670C loadstore
    # 00428D14 eval_mov
    # 0042BDAC eval
/* 00415494 3C1C0FC1 */  .cpload $t9
/* 00415498 279CA5BC */  
/* 0041549C 0399E021 */  
/* 004154A0 8F88897C */  lw     $t0, %got(i_ptr)($gp)
/* 004154A4 8F898978 */  lw     $t1, %got(ibuffer)($gp)
/* 004154A8 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 004154AC 8D0F0000 */  lw    $t7, ($t0)
/* 004154B0 8D2E0000 */  lw    $t6, ($t1)
/* 004154B4 AFBF0024 */  sw    $ra, 0x24($sp)
/* 004154B8 000FC100 */  sll   $t8, $t7, 4
/* 004154BC AFBC0020 */  sw    $gp, 0x20($sp)
/* 004154C0 AFB0001C */  sw    $s0, 0x1c($sp)
/* 004154C4 AFA40028 */  sw    $a0, 0x28($sp)
/* 004154C8 AFA5002C */  sw    $a1, 0x2c($sp)
/* 004154CC AFA70034 */  sw    $a3, 0x34($sp)
/* 004154D0 01D81021 */  addu  $v0, $t6, $t8
/* 004154D4 9059FFF5 */  lbu   $t9, -0xb($v0)
/* 004154D8 2442FFF0 */  addiu $v0, $v0, -0x10
/* 004154DC 3C01FFFC */  lui   $at, 0xfffc
/* 004154E0 332BFFC0 */  andi  $t3, $t9, 0xffc0
/* 004154E4 356C0017 */  ori   $t4, $t3, 0x17
/* 004154E8 A04C0005 */  sb    $t4, 5($v0)
/* 004154EC 8D0F0000 */  lw    $t7, ($t0)
/* 004154F0 8D2D0000 */  lw    $t5, ($t1)
/* 004154F4 97B8002A */  lhu   $t8, 0x2a($sp)
/* 004154F8 000F7100 */  sll   $t6, $t7, 4
/* 004154FC 01AE1021 */  addu  $v0, $t5, $t6
/* 00415500 944AFFF6 */  lhu   $t2, -0xa($v0)
/* 00415504 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00415508 34213FFF */  ori   $at, $at, 0x3fff
/* 0041550C 000ACD80 */  sll   $t9, $t2, 0x16
/* 00415510 00195DC2 */  srl   $t3, $t9, 0x17
/* 00415514 030B6026 */  xor   $t4, $t8, $t3
/* 00415518 000C7DC0 */  sll   $t7, $t4, 0x17
/* 0041551C 000F6D82 */  srl   $t5, $t7, 0x16
/* 00415520 01AA7026 */  xor   $t6, $t5, $t2
/* 00415524 A44E0006 */  sh    $t6, 6($v0)
/* 00415528 8D180000 */  lw    $t8, ($t0)
/* 0041552C 8D390000 */  lw    $t9, ($t1)
/* 00415530 00185900 */  sll   $t3, $t8, 4
/* 00415534 032B1021 */  addu  $v0, $t9, $t3
/* 00415538 8C4CFFF8 */  lw    $t4, -8($v0)
/* 0041553C 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00415540 01817824 */  and   $t7, $t4, $at
/* 00415544 35ED4000 */  ori   $t5, $t7, 0x4000
/* 00415548 AC4D0008 */  sw    $t5, 8($v0)
/* 0041554C 8D180000 */  lw    $t8, ($t0)
/* 00415550 8D2E0000 */  lw    $t6, ($t1)
/* 00415554 93AB002F */  lbu   $t3, 0x2f($sp)
/* 00415558 0018C900 */  sll   $t9, $t8, 4
/* 0041555C 01D91021 */  addu  $v0, $t6, $t9
/* 00415560 8C43FFF8 */  lw    $v1, -8($v0)
/* 00415564 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00415568 3C01FE03 */  lui   $at, 0xfe03
/* 0041556C 00036642 */  srl   $t4, $v1, 0x19
/* 00415570 016C7826 */  xor   $t7, $t3, $t4
/* 00415574 000F6E40 */  sll   $t5, $t7, 0x19
/* 00415578 01A3C026 */  xor   $t8, $t5, $v1
/* 0041557C AC580008 */  sw    $t8, 8($v0)
/* 00415580 8D190000 */  lw    $t9, ($t0)
/* 00415584 8D2E0000 */  lw    $t6, ($t1)
/* 00415588 3421FFFF */  ori   $at, $at, 0xffff
/* 0041558C 00195900 */  sll   $t3, $t9, 4
/* 00415590 01CB1021 */  addu  $v0, $t6, $t3
/* 00415594 8C4CFFF8 */  lw    $t4, -8($v0)
/* 00415598 2442FFF0 */  addiu $v0, $v0, -0x10
/* 0041559C 01817824 */  and   $t7, $t4, $at
/* 004155A0 3C010120 */  lui   $at, 0x120
/* 004155A4 01E16825 */  or    $t5, $t7, $at
/* 004155A8 AC4D0008 */  sw    $t5, 8($v0)
/* 004155AC 8D190000 */  lw    $t9, ($t0)
/* 004155B0 8D380000 */  lw    $t8, ($t1)
/* 004155B4 3C01FE3F */  lui   $at, 0xfe3f
/* 004155B8 00197100 */  sll   $t6, $t9, 4
/* 004155BC 030E5821 */  addu  $t3, $t8, $t6
/* 004155C0 AD66FFF0 */  sw    $a2, -0x10($t3)
/* 004155C4 8D0F0000 */  lw    $t7, ($t0)
/* 004155C8 8D2C0000 */  lw    $t4, ($t1)
/* 004155CC 8FB90038 */  lw    $t9, 0x38($sp)
/* 004155D0 000F6900 */  sll   $t5, $t7, 4
/* 004155D4 018D1021 */  addu  $v0, $t4, $t5
/* 004155D8 8C43FFF8 */  lw    $v1, -8($v0)
/* 004155DC 2442FFF0 */  addiu $v0, $v0, -0x10
/* 004155E0 3421FFFF */  ori   $at, $at, 0xffff
/* 004155E4 0003C480 */  sll   $t8, $v1, 0x12
/* 004155E8 00187482 */  srl   $t6, $t8, 0x12
/* 004155EC 032E5826 */  xor   $t3, $t9, $t6
/* 004155F0 316F3FFF */  andi  $t7, $t3, 0x3fff
/* 004155F4 01E36026 */  xor   $t4, $t7, $v1
/* 004155F8 AC4C0008 */  sw    $t4, 8($v0)
/* 004155FC 8D190000 */  lw    $t9, ($t0)
/* 00415600 8D380000 */  lw    $t8, ($t1)
/* 00415604 8FAD0034 */  lw    $t5, 0x34($sp)
/* 00415608 00197100 */  sll   $t6, $t9, 4
/* 0041560C 030E5821 */  addu  $t3, $t8, $t6
/* 00415610 AD6DFFFC */  sw    $t5, -4($t3)
/* 00415614 8D0C0000 */  lw    $t4, ($t0)
/* 00415618 8D2F0000 */  lw    $t7, ($t1)
/* 0041561C 8F8D8984 */  lw     $t5, %got(d_ptr)($gp)
/* 00415620 000CC900 */  sll   $t9, $t4, 4
/* 00415624 01F91021 */  addu  $v0, $t7, $t9
/* 00415628 8C58FFF4 */  lw    $t8, -0xc($v0)
/* 0041562C 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00415630 03017024 */  and   $t6, $t8, $at
/* 00415634 AC4E0004 */  sw    $t6, 4($v0)
/* 00415638 8D030000 */  lw    $v1, ($t0)
/* 0041563C 8DAD0000 */  lw    $t5, ($t5)
/* 00415640 15A30007 */  bne   $t5, $v1, .L00415660
/* 00415644 00000000 */   nop   
/* 00415648 8F9981D4 */  lw    $t9, %call16(grow_ibuffer)($gp)
/* 0041564C 0320F809 */  jalr  $t9
/* 00415650 00000000 */   nop   
/* 00415654 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00415658 8F88897C */  lw     $t0, %got(i_ptr)($gp)
/* 0041565C 8D030000 */  lw    $v1, ($t0)
.L00415660:
/* 00415660 8F8F89E0 */  lw     $t7, %got(debug_ugen)($gp)
/* 00415664 246B0001 */  addiu $t3, $v1, 1
/* 00415668 AD0B0000 */  sw    $t3, ($t0)
/* 0041566C 91EF0000 */  lbu   $t7, ($t7)
/* 00415670 8F818A90 */  lw     $at, %got(uses_gp)($gp)
/* 00415674 240C0001 */  li    $t4, 1
/* 00415678 11E00035 */  beqz  $t7, .L00415750
/* 0041567C A02C0000 */   sb    $t4, ($at)
/* 00415680 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 00415684 8F848954 */  lw     $a0, %got(output)($gp)
/* 00415688 8F858038 */  lw    $a1, %got(RO_10009589)($gp)
/* 0041568C 24060009 */  li    $a2, 9
/* 00415690 24070009 */  li    $a3, 9
/* 00415694 8C840000 */  lw    $a0, ($a0)
/* 00415698 0320F809 */  jalr  $t9
/* 0041569C 24A59589 */   addiu $a1, %lo(RO_10009589) # addiu $a1, $a1, -0x6a77
/* 004156A0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004156A4 2419000A */  li    $t9, 10
/* 004156A8 AFB90010 */  sw    $t9, 0x10($sp)
/* 004156AC 8F908954 */  lw     $s0, %got(output)($gp)
/* 004156B0 8F9987D8 */  lw    $t9, %call16(write_enum)($gp)
/* 004156B4 8F868038 */  lw    $a2, %got(D_10012570)($gp)
/* 004156B8 8E100000 */  lw    $s0, ($s0)
/* 004156BC 97A5002A */  lhu   $a1, 0x2a($sp)
/* 004156C0 00003825 */  move  $a3, $zero
/* 004156C4 24C62570 */  addiu $a2, %lo(D_10012570) # addiu $a2, $a2, 0x2570
/* 004156C8 0320F809 */  jalr  $t9
/* 004156CC 02002025 */   move  $a0, $s0
/* 004156D0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004156D4 02002025 */  move  $a0, $s0
/* 004156D8 24050020 */  li    $a1, 32
/* 004156DC 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 004156E0 24060001 */  li    $a2, 1
/* 004156E4 2407000A */  li    $a3, 10
/* 004156E8 0320F809 */  jalr  $t9
/* 004156EC 00000000 */   nop   
/* 004156F0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004156F4 2418000A */  li    $t8, 10
/* 004156F8 AFB80010 */  sw    $t8, 0x10($sp)
/* 004156FC 8F9987D8 */  lw    $t9, %call16(write_enum)($gp)
/* 00415700 8F868038 */  lw    $a2, %got(D_1001340C)($gp)
/* 00415704 02002025 */  move  $a0, $s0
/* 00415708 93A5002F */  lbu   $a1, 0x2f($sp)
/* 0041570C 00003825 */  move  $a3, $zero
/* 00415710 0320F809 */  jalr  $t9
/* 00415714 24C6340C */   addiu $a2, %lo(D_1001340C) # addiu $a2, $a2, 0x340c
/* 00415718 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041571C 02002025 */  move  $a0, $s0
/* 00415720 8FA50034 */  lw    $a1, 0x34($sp)
/* 00415724 8F9987DC */  lw    $t9, %call16(write_integer)($gp)
/* 00415728 2406000C */  li    $a2, 12
/* 0041572C 2407000A */  li    $a3, 10
/* 00415730 0320F809 */  jalr  $t9
/* 00415734 00000000 */   nop   
/* 00415738 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041573C 8F9987CC */  lw    $t9, %call16(writeln)($gp)
/* 00415740 8F848954 */  lw     $a0, %got(output)($gp)
/* 00415744 0320F809 */  jalr  $t9
/* 00415748 8C840000 */   lw    $a0, ($a0)
/* 0041574C 8FBC0020 */  lw    $gp, 0x20($sp)
.L00415750:
/* 00415750 8FBF0024 */  lw    $ra, 0x24($sp)
/* 00415754 8FB0001C */  lw    $s0, 0x1c($sp)
/* 00415758 27BD0028 */  addiu $sp, $sp, 0x28
/* 0041575C 03E00008 */  jr    $ra
/* 00415760 00000000 */   nop   
    .type emit_ra, @function
    .size emit_ra, .-emit_ra
    .end emit_ra

glabel emit_ri_
    .ent emit_ri_
    # 00415A08 emit_rii
    # 0041CC60 func_0041CC60
    # 0041CCD0 func_0041CCD0
    # 0041CD64 func_0041CD64
    # 0041CE18 func_0041CE18
    # 0041CECC func_0041CECC
    # 0041CF80 func_0041CF80
    # 0041D034 emit_trap_ri
    # 0041D534 func_0041D534
    # 0041D958 func_0041D958
    # 0041E800 func_0041E800
    # 0041EA00 func_0041EA00
    # 0041EC08 func_0041EC08
    # 0041EE78 func_0041EE78
    # 0041F194 func_0041F194
    # 00420810 gen_entry_exit
    # 00421170 gen_entry
    # 00423290 move_dreg_to_regs
    # 00424240 trap
    # 004285F0 eval_fp_cond
    # 0042A1AC eval_irel
    # 0042BDAC eval
    # 00433494 eval_flt_int_cvt
    # 00434374 func_00434374
/* 00415764 3C1C0FC1 */  .cpload $t9
/* 00415768 279CA2EC */  
/* 0041576C 0399E021 */  
/* 00415770 8F88897C */  lw     $t0, %got(i_ptr)($gp)
/* 00415774 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 00415778 8F838978 */  lw     $v1, %got(ibuffer)($gp)
/* 0041577C 8D0F0000 */  lw    $t7, ($t0)
/* 00415780 AFBF0024 */  sw    $ra, 0x24($sp)
/* 00415784 8C6E0000 */  lw    $t6, ($v1)
/* 00415788 000FC100 */  sll   $t8, $t7, 4
/* 0041578C AFBC0020 */  sw    $gp, 0x20($sp)
/* 00415790 AFB0001C */  sw    $s0, 0x1c($sp)
/* 00415794 AFA40028 */  sw    $a0, 0x28($sp)
/* 00415798 AFA5002C */  sw    $a1, 0x2c($sp)
/* 0041579C AFA60030 */  sw    $a2, 0x30($sp)
/* 004157A0 AFA70034 */  sw    $a3, 0x34($sp)
/* 004157A4 01D81021 */  addu  $v0, $t6, $t8
/* 004157A8 9059FFF5 */  lbu   $t9, -0xb($v0)
/* 004157AC 2442FFF0 */  addiu $v0, $v0, -0x10
/* 004157B0 3C01FFFC */  lui   $at, 0xfffc
/* 004157B4 332DFFC0 */  andi  $t5, $t9, 0xffc0
/* 004157B8 35AF0017 */  ori   $t7, $t5, 0x17
/* 004157BC A04F0005 */  sb    $t7, 5($v0)
/* 004157C0 8D180000 */  lw    $t8, ($t0)
/* 004157C4 8C6E0000 */  lw    $t6, ($v1)
/* 004157C8 97AD002A */  lhu   $t5, 0x2a($sp)
/* 004157CC 0018C900 */  sll   $t9, $t8, 4
/* 004157D0 01D91021 */  addu  $v0, $t6, $t9
/* 004157D4 9449FFF6 */  lhu   $t1, -0xa($v0)
/* 004157D8 2442FFF0 */  addiu $v0, $v0, -0x10
/* 004157DC 34213FFF */  ori   $at, $at, 0x3fff
/* 004157E0 00097D80 */  sll   $t7, $t1, 0x16
/* 004157E4 000FC5C2 */  srl   $t8, $t7, 0x17
/* 004157E8 01B87026 */  xor   $t6, $t5, $t8
/* 004157EC 000ECDC0 */  sll   $t9, $t6, 0x17
/* 004157F0 00197D82 */  srl   $t7, $t9, 0x16
/* 004157F4 01E96826 */  xor   $t5, $t7, $t1
/* 004157F8 A44D0006 */  sh    $t5, 6($v0)
/* 004157FC 8D0E0000 */  lw    $t6, ($t0)
/* 00415800 8C780000 */  lw    $t8, ($v1)
/* 00415804 000EC900 */  sll   $t9, $t6, 4
/* 00415808 03191021 */  addu  $v0, $t8, $t9
/* 0041580C 8C4FFFF8 */  lw    $t7, -8($v0)
/* 00415810 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00415814 01E16824 */  and   $t5, $t7, $at
/* 00415818 35AE8000 */  ori   $t6, $t5, 0x8000
/* 0041581C AC4E0008 */  sw    $t6, 8($v0)
/* 00415820 8D190000 */  lw    $t9, ($t0)
/* 00415824 8C780000 */  lw    $t8, ($v1)
/* 00415828 93AD002F */  lbu   $t5, 0x2f($sp)
/* 0041582C 00197900 */  sll   $t7, $t9, 4
/* 00415830 030F1021 */  addu  $v0, $t8, $t7
/* 00415834 8C4AFFF8 */  lw    $t2, -8($v0)
/* 00415838 2442FFF0 */  addiu $v0, $v0, -0x10
/* 0041583C 3C01FE03 */  lui   $at, 0xfe03
/* 00415840 000A7642 */  srl   $t6, $t2, 0x19
/* 00415844 01AEC826 */  xor   $t9, $t5, $t6
/* 00415848 0019C640 */  sll   $t8, $t9, 0x19
/* 0041584C 030A7826 */  xor   $t7, $t8, $t2
/* 00415850 AC4F0008 */  sw    $t7, 8($v0)
/* 00415854 8D0E0000 */  lw    $t6, ($t0)
/* 00415858 8C6D0000 */  lw    $t5, ($v1)
/* 0041585C 3421FFFF */  ori   $at, $at, 0xffff
/* 00415860 000EC900 */  sll   $t9, $t6, 4
/* 00415864 01B91021 */  addu  $v0, $t5, $t9
/* 00415868 8C58FFF8 */  lw    $t8, -8($v0)
/* 0041586C 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00415870 03017824 */  and   $t7, $t8, $at
/* 00415874 3C010120 */  lui   $at, 0x120
/* 00415878 01E17025 */  or    $t6, $t7, $at
/* 0041587C AC4E0008 */  sw    $t6, 8($v0)
/* 00415880 8D190000 */  lw    $t9, ($t0)
/* 00415884 8C6D0000 */  lw    $t5, ($v1)
/* 00415888 0019C100 */  sll   $t8, $t9, 4
/* 0041588C 01B87821 */  addu  $t7, $t5, $t8
/* 00415890 ADE0FFF0 */  sw    $zero, -0x10($t7)
/* 00415894 8D0D0000 */  lw    $t5, ($t0)
/* 00415898 8C790000 */  lw    $t9, ($v1)
/* 0041589C 8FAE0030 */  lw    $t6, 0x30($sp)
/* 004158A0 000DC100 */  sll   $t8, $t5, 4
/* 004158A4 03387821 */  addu  $t7, $t9, $t8
/* 004158A8 ADEEFFFC */  sw    $t6, -4($t7)
/* 004158AC 8D190000 */  lw    $t9, ($t0)
/* 004158B0 8C6D0000 */  lw    $t5, ($v1)
/* 004158B4 0019C100 */  sll   $t8, $t9, 4
/* 004158B8 01B81021 */  addu  $v0, $t5, $t8
/* 004158BC 8C4BFFF4 */  lw    $t3, -0xc($v0)
/* 004158C0 2442FFF0 */  addiu $v0, $v0, -0x10
/* 004158C4 000B71C0 */  sll   $t6, $t3, 7
/* 004158C8 000E7F42 */  srl   $t7, $t6, 0x1d
/* 004158CC 00EFC826 */  xor   $t9, $a3, $t7
/* 004158D0 00196F40 */  sll   $t5, $t9, 0x1d
/* 004158D4 000DC1C2 */  srl   $t8, $t5, 7
/* 004158D8 8F8F8984 */  lw     $t7, %got(d_ptr)($gp)
/* 004158DC 030B7026 */  xor   $t6, $t8, $t3
/* 004158E0 AC4E0004 */  sw    $t6, 4($v0)
/* 004158E4 8D0C0000 */  lw    $t4, ($t0)
/* 004158E8 8DEF0000 */  lw    $t7, ($t7)
/* 004158EC 15EC0007 */  bne   $t7, $t4, .L0041590C
/* 004158F0 00000000 */   nop   
/* 004158F4 8F9981D4 */  lw    $t9, %call16(grow_ibuffer)($gp)
/* 004158F8 0320F809 */  jalr  $t9
/* 004158FC 00000000 */   nop   
/* 00415900 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00415904 8F88897C */  lw     $t0, %got(i_ptr)($gp)
/* 00415908 8D0C0000 */  lw    $t4, ($t0)
.L0041590C:
/* 0041590C 8F8D89E0 */  lw     $t5, %got(debug_ugen)($gp)
/* 00415910 25990001 */  addiu $t9, $t4, 1
/* 00415914 AD190000 */  sw    $t9, ($t0)
/* 00415918 91AD0000 */  lbu   $t5, ($t5)
/* 0041591C 24060009 */  li    $a2, 9
/* 00415920 51A00035 */  beql  $t5, $zero, .L004159F8
/* 00415924 8FBF0024 */   lw    $ra, 0x24($sp)
/* 00415928 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0041592C 8F848954 */  lw     $a0, %got(output)($gp)
/* 00415930 8F858038 */  lw    $a1, %got(RO_10009592)($gp)
/* 00415934 24070009 */  li    $a3, 9
/* 00415938 8C840000 */  lw    $a0, ($a0)
/* 0041593C 0320F809 */  jalr  $t9
/* 00415940 24A59592 */   addiu $a1, %lo(RO_10009592) # addiu $a1, $a1, -0x6a6e
/* 00415944 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00415948 2418000A */  li    $t8, 10
/* 0041594C AFB80010 */  sw    $t8, 0x10($sp)
/* 00415950 8F908954 */  lw     $s0, %got(output)($gp)
/* 00415954 8F9987D8 */  lw    $t9, %call16(write_enum)($gp)
/* 00415958 8F868038 */  lw    $a2, %got(D_10012570)($gp)
/* 0041595C 8E100000 */  lw    $s0, ($s0)
/* 00415960 97A5002A */  lhu   $a1, 0x2a($sp)
/* 00415964 00003825 */  move  $a3, $zero
/* 00415968 24C62570 */  addiu $a2, %lo(D_10012570) # addiu $a2, $a2, 0x2570
/* 0041596C 0320F809 */  jalr  $t9
/* 00415970 02002025 */   move  $a0, $s0
/* 00415974 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00415978 02002025 */  move  $a0, $s0
/* 0041597C 24050020 */  li    $a1, 32
/* 00415980 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 00415984 24060001 */  li    $a2, 1
/* 00415988 2407000A */  li    $a3, 10
/* 0041598C 0320F809 */  jalr  $t9
/* 00415990 00000000 */   nop   
/* 00415994 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00415998 240E000A */  li    $t6, 10
/* 0041599C AFAE0010 */  sw    $t6, 0x10($sp)
/* 004159A0 8F9987D8 */  lw    $t9, %call16(write_enum)($gp)
/* 004159A4 8F868038 */  lw    $a2, %got(D_1001340C)($gp)
/* 004159A8 02002025 */  move  $a0, $s0
/* 004159AC 93A5002F */  lbu   $a1, 0x2f($sp)
/* 004159B0 00003825 */  move  $a3, $zero
/* 004159B4 0320F809 */  jalr  $t9
/* 004159B8 24C6340C */   addiu $a2, %lo(D_1001340C) # addiu $a2, $a2, 0x340c
/* 004159BC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004159C0 02002025 */  move  $a0, $s0
/* 004159C4 8FA50030 */  lw    $a1, 0x30($sp)
/* 004159C8 8F9987DC */  lw    $t9, %call16(write_integer)($gp)
/* 004159CC 2406000C */  li    $a2, 12
/* 004159D0 2407000A */  li    $a3, 10
/* 004159D4 0320F809 */  jalr  $t9
/* 004159D8 00000000 */   nop   
/* 004159DC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004159E0 8F9987CC */  lw    $t9, %call16(writeln)($gp)
/* 004159E4 8F848954 */  lw     $a0, %got(output)($gp)
/* 004159E8 0320F809 */  jalr  $t9
/* 004159EC 8C840000 */   lw    $a0, ($a0)
/* 004159F0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004159F4 8FBF0024 */  lw    $ra, 0x24($sp)
.L004159F8:
/* 004159F8 8FB0001C */  lw    $s0, 0x1c($sp)
/* 004159FC 27BD0028 */  addiu $sp, $sp, 0x28
/* 00415A00 03E00008 */  jr    $ra
/* 00415A04 00000000 */   nop   
    .type emit_ri_, @function
    .size emit_ri_, .-emit_ri_
    .end emit_ri_

glabel emit_rii
    .ent emit_rii
    # 0041C388 emit_branch_rill
    # 0041FC98 dw_emit_rri
    # 0042BDAC eval
    # 00433494 eval_flt_int_cvt
/* 00415A08 3C1C0FC1 */  .cpload $t9
/* 00415A0C 279CA048 */  
/* 00415A10 0399E021 */  
/* 00415A14 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00415A18 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 00415A1C AFBF001C */  sw    $ra, 0x1c($sp)
/* 00415A20 AFA40020 */  sw    $a0, 0x20($sp)
/* 00415A24 AFA50024 */  sw    $a1, 0x24($sp)
/* 00415A28 AFA7002C */  sw    $a3, 0x2c($sp)
/* 00415A2C AFBC0018 */  sw    $gp, 0x18($sp)
/* 00415A30 AFA60028 */  sw    $a2, 0x28($sp)
/* 00415A34 00003825 */  move  $a3, $zero
/* 00415A38 93A50027 */  lbu   $a1, 0x27($sp)
/* 00415A3C 0320F809 */  jalr  $t9
/* 00415A40 97A40022 */   lhu   $a0, 0x22($sp)
/* 00415A44 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00415A48 97A40022 */  lhu   $a0, 0x22($sp)
/* 00415A4C 93A50027 */  lbu   $a1, 0x27($sp)
/* 00415A50 8F9981F4 */  lw    $t9, %call16(emit_ri_)($gp)
/* 00415A54 8FA6002C */  lw    $a2, 0x2c($sp)
/* 00415A58 00003825 */  move  $a3, $zero
/* 00415A5C 0320F809 */  jalr  $t9
/* 00415A60 00000000 */   nop   
/* 00415A64 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00415A68 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00415A6C 240E0001 */  li    $t6, 1
/* 00415A70 8F818A90 */  lw     $at, %got(uses_gp)($gp)
/* 00415A74 27BD0020 */  addiu $sp, $sp, 0x20
/* 00415A78 03E00008 */  jr    $ra
/* 00415A7C A02E0000 */   sb    $t6, ($at)
    .type emit_rii, @function
    .size emit_rii, .-emit_rii
    .end emit_rii

glabel emit_rfi
    .ent emit_rfi
    # 0042BDAC eval
    # 00433070 load_fp_literal
    # 004330EC eval_int_flt_cvt
    # 00433494 eval_flt_int_cvt
/* 00415A80 3C1C0FC1 */  .cpload $t9
/* 00415A84 279C9FD0 */  
/* 00415A88 0399E021 */  
/* 00415A8C 27BDFFB8 */  addiu $sp, $sp, -0x48
/* 00415A90 AFB20024 */  sw    $s2, 0x24($sp)
/* 00415A94 8F92897C */  lw     $s2, %got(i_ptr)($gp)
/* 00415A98 AFB0001C */  sw    $s0, 0x1c($sp)
/* 00415A9C 8F908978 */  lw     $s0, %got(ibuffer)($gp)
/* 00415AA0 8E4F0000 */  lw    $t7, ($s2)
/* 00415AA4 AFBF003C */  sw    $ra, 0x3c($sp)
/* 00415AA8 8E0E0000 */  lw    $t6, ($s0)
/* 00415AAC 000FC100 */  sll   $t8, $t7, 4
/* 00415AB0 AFBC0038 */  sw    $gp, 0x38($sp)
/* 00415AB4 AFB60034 */  sw    $s6, 0x34($sp)
/* 00415AB8 AFB50030 */  sw    $s5, 0x30($sp)
/* 00415ABC AFB4002C */  sw    $s4, 0x2c($sp)
/* 00415AC0 AFB30028 */  sw    $s3, 0x28($sp)
/* 00415AC4 AFB10020 */  sw    $s1, 0x20($sp)
/* 00415AC8 AFA40048 */  sw    $a0, 0x48($sp)
/* 00415ACC AFA5004C */  sw    $a1, 0x4c($sp)
/* 00415AD0 01D81021 */  addu  $v0, $t6, $t8
/* 00415AD4 9059FFF5 */  lbu   $t9, -0xb($v0)
/* 00415AD8 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00415ADC 3C01FFFC */  lui   $at, 0xfffc
/* 00415AE0 3329FFC0 */  andi  $t1, $t9, 0xffc0
/* 00415AE4 352A0017 */  ori   $t2, $t1, 0x17
/* 00415AE8 A04A0005 */  sb    $t2, 5($v0)
/* 00415AEC 8E4C0000 */  lw    $t4, ($s2)
/* 00415AF0 8E0B0000 */  lw    $t3, ($s0)
/* 00415AF4 97AF004A */  lhu   $t7, 0x4a($sp)
/* 00415AF8 000C6900 */  sll   $t5, $t4, 4
/* 00415AFC 016D1021 */  addu  $v0, $t3, $t5
/* 00415B00 9447FFF6 */  lhu   $a3, -0xa($v0)
/* 00415B04 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00415B08 34213FFF */  ori   $at, $at, 0x3fff
/* 00415B0C 00077580 */  sll   $t6, $a3, 0x16
/* 00415B10 000EC5C2 */  srl   $t8, $t6, 0x17
/* 00415B14 01F8C826 */  xor   $t9, $t7, $t8
/* 00415B18 00194DC0 */  sll   $t1, $t9, 0x17
/* 00415B1C 00095582 */  srl   $t2, $t1, 0x16
/* 00415B20 01476026 */  xor   $t4, $t2, $a3
/* 00415B24 A44C0006 */  sh    $t4, 6($v0)
/* 00415B28 8E4D0000 */  lw    $t5, ($s2)
/* 00415B2C 8E0B0000 */  lw    $t3, ($s0)
/* 00415B30 00C08825 */  move  $s1, $a2
/* 00415B34 000D7100 */  sll   $t6, $t5, 4
/* 00415B38 016E1021 */  addu  $v0, $t3, $t6
/* 00415B3C 8C4FFFF8 */  lw    $t7, -8($v0)
/* 00415B40 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00415B44 8F968984 */  lw     $s6, %got(d_ptr)($gp)
/* 00415B48 01E1C024 */  and   $t8, $t7, $at
/* 00415B4C 37198000 */  ori   $t9, $t8, 0x8000
/* 00415B50 AC590008 */  sw    $t9, 8($v0)
/* 00415B54 8E4A0000 */  lw    $t2, ($s2)
/* 00415B58 8E090000 */  lw    $t1, ($s0)
/* 00415B5C 93AD004F */  lbu   $t5, 0x4f($sp)
/* 00415B60 000A6100 */  sll   $t4, $t2, 4
/* 00415B64 012C1021 */  addu  $v0, $t1, $t4
/* 00415B68 8C48FFF8 */  lw    $t0, -8($v0)
/* 00415B6C 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00415B70 3C01FE03 */  lui   $at, 0xfe03
/* 00415B74 00085E42 */  srl   $t3, $t0, 0x19
/* 00415B78 01AB7026 */  xor   $t6, $t5, $t3
/* 00415B7C 000E7E40 */  sll   $t7, $t6, 0x19
/* 00415B80 01E8C026 */  xor   $t8, $t7, $t0
/* 00415B84 AC580008 */  sw    $t8, 8($v0)
/* 00415B88 8E4A0000 */  lw    $t2, ($s2)
/* 00415B8C 8E190000 */  lw    $t9, ($s0)
/* 00415B90 3421FFFF */  ori   $at, $at, 0xffff
/* 00415B94 000A4900 */  sll   $t1, $t2, 4
/* 00415B98 03291021 */  addu  $v0, $t9, $t1
/* 00415B9C 8C4CFFF8 */  lw    $t4, -8($v0)
/* 00415BA0 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00415BA4 01816824 */  and   $t5, $t4, $at
/* 00415BA8 3C010120 */  lui   $at, 0x120
/* 00415BAC 01A15825 */  or    $t3, $t5, $at
/* 00415BB0 AC4B0008 */  sw    $t3, 8($v0)
/* 00415BB4 8E4F0000 */  lw    $t7, ($s2)
/* 00415BB8 8E0E0000 */  lw    $t6, ($s0)
/* 00415BBC 3C01FE3F */  lui   $at, 0xfe3f
/* 00415BC0 000FC100 */  sll   $t8, $t7, 4
/* 00415BC4 01D85021 */  addu  $t2, $t6, $t8
/* 00415BC8 AD40FFF0 */  sw    $zero, -0x10($t2)
/* 00415BCC 8E4C0000 */  lw    $t4, ($s2)
/* 00415BD0 8E090000 */  lw    $t1, ($s0)
/* 00415BD4 8E390000 */  lw    $t9, ($s1)
/* 00415BD8 000C6900 */  sll   $t5, $t4, 4
/* 00415BDC 012D5821 */  addu  $t3, $t1, $t5
/* 00415BE0 AD79FFFC */  sw    $t9, -4($t3)
/* 00415BE4 8E4E0000 */  lw    $t6, ($s2)
/* 00415BE8 8E0F0000 */  lw    $t7, ($s0)
/* 00415BEC 3421FFFF */  ori   $at, $at, 0xffff
/* 00415BF0 000EC100 */  sll   $t8, $t6, 4
/* 00415BF4 01F81021 */  addu  $v0, $t7, $t8
/* 00415BF8 8C4AFFF4 */  lw    $t2, -0xc($v0)
/* 00415BFC 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00415C00 01416024 */  and   $t4, $t2, $at
/* 00415C04 AC4C0004 */  sw    $t4, 4($v0)
/* 00415C08 8E430000 */  lw    $v1, ($s2)
/* 00415C0C 8EC90000 */  lw    $t1, ($s6)
/* 00415C10 55230007 */  bnel  $t1, $v1, .L00415C30
/* 00415C14 246D0001 */   addiu $t5, $v1, 1
/* 00415C18 8F9981D4 */  lw    $t9, %call16(grow_ibuffer)($gp)
/* 00415C1C 0320F809 */  jalr  $t9
/* 00415C20 00000000 */   nop   
/* 00415C24 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00415C28 8E430000 */  lw    $v1, ($s2)
/* 00415C2C 246D0001 */  addiu $t5, $v1, 1
.L00415C30:
/* 00415C30 AE4D0000 */  sw    $t5, ($s2)
/* 00415C34 8E220000 */  lw    $v0, ($s1)
/* 00415C38 24130001 */  li    $s3, 1
/* 00415C3C 24140011 */  li    $s4, 17
/* 00415C40 04410003 */  bgez  $v0, .L00415C50
/* 00415C44 0002C903 */   sra   $t9, $v0, 4
/* 00415C48 2441000F */  addiu $at, $v0, 0xf
/* 00415C4C 0001C903 */  sra   $t9, $at, 4
.L00415C50:
/* 00415C50 304B000F */  andi  $t3, $v0, 0xf
/* 00415C54 AFB90044 */  sw    $t9, 0x44($sp)
/* 00415C58 1320003C */  beqz  $t9, .L00415D4C
/* 00415C5C AFAB0040 */   sw    $t3, 0x40($sp)
/* 00415C60 27350001 */  addiu $s5, $t9, 1
.L00415C64:
/* 00415C64 00131900 */  sll   $v1, $s3, 4
/* 00415C68 2463FFF0 */  addiu $v1, $v1, -0x10
/* 00415C6C 24020001 */  li    $v0, 1
.L00415C70:
/* 00415C70 8E2F0004 */  lw    $t7, 4($s1)
/* 00415C74 8E4D0000 */  lw    $t5, ($s2)
/* 00415C78 8E090000 */  lw    $t1, ($s0)
/* 00415C7C 01E3C021 */  addu  $t8, $t7, $v1
/* 00415C80 03025021 */  addu  $t2, $t8, $v0
/* 00415C84 914CFFFF */  lbu   $t4, -1($t2)
/* 00415C88 000DC900 */  sll   $t9, $t5, 4
/* 00415C8C 01395821 */  addu  $t3, $t1, $t9
/* 00415C90 01627021 */  addu  $t6, $t3, $v0
/* 00415C94 A1CCFFEF */  sb    $t4, -0x11($t6)
/* 00415C98 8E2F0004 */  lw    $t7, 4($s1)
/* 00415C9C 8E590000 */  lw    $t9, ($s2)
/* 00415CA0 8E090000 */  lw    $t1, ($s0)
/* 00415CA4 01E3C021 */  addu  $t8, $t7, $v1
/* 00415CA8 03025021 */  addu  $t2, $t8, $v0
/* 00415CAC 914D0000 */  lbu   $t5, ($t2)
/* 00415CB0 00195900 */  sll   $t3, $t9, 4
/* 00415CB4 012B6021 */  addu  $t4, $t1, $t3
/* 00415CB8 01827021 */  addu  $t6, $t4, $v0
/* 00415CBC A1CDFFF0 */  sb    $t5, -0x10($t6)
/* 00415CC0 8E2F0004 */  lw    $t7, 4($s1)
/* 00415CC4 8E4B0000 */  lw    $t3, ($s2)
/* 00415CC8 8E090000 */  lw    $t1, ($s0)
/* 00415CCC 01E3C021 */  addu  $t8, $t7, $v1
/* 00415CD0 03025021 */  addu  $t2, $t8, $v0
/* 00415CD4 91590001 */  lbu   $t9, 1($t2)
/* 00415CD8 000B6100 */  sll   $t4, $t3, 4
/* 00415CDC 012C6821 */  addu  $t5, $t1, $t4
/* 00415CE0 01A27021 */  addu  $t6, $t5, $v0
/* 00415CE4 A1D9FFF1 */  sb    $t9, -0xf($t6)
/* 00415CE8 8E4C0000 */  lw    $t4, ($s2)
/* 00415CEC 8E2F0004 */  lw    $t7, 4($s1)
/* 00415CF0 8E090000 */  lw    $t1, ($s0)
/* 00415CF4 000C6900 */  sll   $t5, $t4, 4
/* 00415CF8 01E3C021 */  addu  $t8, $t7, $v1
/* 00415CFC 03025021 */  addu  $t2, $t8, $v0
/* 00415D00 012DC821 */  addu  $t9, $t1, $t5
/* 00415D04 914B0002 */  lbu   $t3, 2($t2)
/* 00415D08 03227021 */  addu  $t6, $t9, $v0
/* 00415D0C 24420004 */  addiu $v0, $v0, 4
/* 00415D10 1454FFD7 */  bne   $v0, $s4, .L00415C70
/* 00415D14 A1CBFFF2 */   sb    $t3, -0xe($t6)
/* 00415D18 8E430000 */  lw    $v1, ($s2)
/* 00415D1C 8ECF0000 */  lw    $t7, ($s6)
/* 00415D20 55E30007 */  bnel  $t7, $v1, .L00415D40
/* 00415D24 24780001 */   addiu $t8, $v1, 1
/* 00415D28 8F9981D4 */  lw    $t9, %call16(grow_ibuffer)($gp)
/* 00415D2C 0320F809 */  jalr  $t9
/* 00415D30 00000000 */   nop   
/* 00415D34 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00415D38 8E430000 */  lw    $v1, ($s2)
/* 00415D3C 24780001 */  addiu $t8, $v1, 1
.L00415D40:
/* 00415D40 26730001 */  addiu $s3, $s3, 1
/* 00415D44 1675FFC7 */  bne   $s3, $s5, .L00415C64
/* 00415D48 AE580000 */   sw    $t8, ($s2)
.L00415D4C:
/* 00415D4C 8F8C89E0 */  lw     $t4, %got(debug_ugen)($gp)
/* 00415D50 8F818A90 */  lw     $at, %got(uses_gp)($gp)
/* 00415D54 240A0001 */  li    $t2, 1
/* 00415D58 918C0000 */  lbu   $t4, ($t4)
/* 00415D5C 2406000A */  li    $a2, 10
/* 00415D60 A02A0000 */  sb    $t2, ($at)
/* 00415D64 5180002C */  beql  $t4, $zero, .L00415E18
/* 00415D68 8FB90040 */   lw    $t9, 0x40($sp)
/* 00415D6C 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 00415D70 8F948954 */  lw     $s4, %got(output)($gp)
/* 00415D74 8F858038 */  lw    $a1, %got(RO_100095AB)($gp)
/* 00415D78 2407000A */  li    $a3, 10
/* 00415D7C 8E840000 */  lw    $a0, ($s4)
/* 00415D80 0320F809 */  jalr  $t9
/* 00415D84 24A595AB */   addiu $a1, %lo(RO_100095AB) # addiu $a1, $a1, -0x6a55
/* 00415D88 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00415D8C 8E930000 */  lw    $s3, ($s4)
/* 00415D90 2409000A */  li    $t1, 10
/* 00415D94 8F9987D8 */  lw    $t9, %call16(write_enum)($gp)
/* 00415D98 8F868038 */  lw    $a2, %got(D_10012570)($gp)
/* 00415D9C AFA90010 */  sw    $t1, 0x10($sp)
/* 00415DA0 97A5004A */  lhu   $a1, 0x4a($sp)
/* 00415DA4 00003825 */  move  $a3, $zero
/* 00415DA8 02602025 */  move  $a0, $s3
/* 00415DAC 0320F809 */  jalr  $t9
/* 00415DB0 24C62570 */   addiu $a2, %lo(D_10012570) # addiu $a2, $a2, 0x2570
/* 00415DB4 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00415DB8 02602025 */  move  $a0, $s3
/* 00415DBC 24050020 */  li    $a1, 32
/* 00415DC0 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 00415DC4 24060001 */  li    $a2, 1
/* 00415DC8 2407000A */  li    $a3, 10
/* 00415DCC 0320F809 */  jalr  $t9
/* 00415DD0 00000000 */   nop   
/* 00415DD4 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00415DD8 240D000A */  li    $t5, 10
/* 00415DDC AFAD0010 */  sw    $t5, 0x10($sp)
/* 00415DE0 8F9987D8 */  lw    $t9, %call16(write_enum)($gp)
/* 00415DE4 8F868038 */  lw    $a2, %got(D_1001340C)($gp)
/* 00415DE8 02602025 */  move  $a0, $s3
/* 00415DEC 93A5004F */  lbu   $a1, 0x4f($sp)
/* 00415DF0 00003825 */  move  $a3, $zero
/* 00415DF4 0320F809 */  jalr  $t9
/* 00415DF8 24C6340C */   addiu $a2, %lo(D_1001340C) # addiu $a2, $a2, 0x340c
/* 00415DFC 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00415E00 02602025 */  move  $a0, $s3
/* 00415E04 8F9987CC */  lw    $t9, %call16(writeln)($gp)
/* 00415E08 0320F809 */  jalr  $t9
/* 00415E0C 00000000 */   nop   
/* 00415E10 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00415E14 8FB90040 */  lw    $t9, 0x40($sp)
.L00415E18:
/* 00415E18 53200067 */  beql  $t9, $zero, .L00415FB8
/* 00415E1C 8FBF003C */   lw    $ra, 0x3c($sp)
/* 00415E20 8F8A8038 */  lw    $t2, %got(RO_1000959B)($gp)
/* 00415E24 8E4E0000 */  lw    $t6, ($s2)
/* 00415E28 8E0B0000 */  lw    $t3, ($s0)
/* 00415E2C 254A959B */  addiu $t2, %lo(RO_1000959B) # addiu $t2, $t2, -0x6a65
/* 00415E30 89490000 */  lwl   $t1, ($t2)
/* 00415E34 99490003 */  lwr   $t1, 3($t2)
/* 00415E38 000E7900 */  sll   $t7, $t6, 4
/* 00415E3C 016FC021 */  addu  $t8, $t3, $t7
/* 00415E40 AB09FFF0 */  swl   $t1, -0x10($t8)
/* 00415E44 BB09FFF3 */  swr   $t1, -0xd($t8)
/* 00415E48 894C0004 */  lwl   $t4, 4($t2)
/* 00415E4C 994C0007 */  lwr   $t4, 7($t2)
/* 00415E50 AB0CFFF4 */  swl   $t4, -0xc($t8)
/* 00415E54 BB0CFFF7 */  swr   $t4, -9($t8)
/* 00415E58 89490008 */  lwl   $t1, 8($t2)
/* 00415E5C 9949000B */  lwr   $t1, 0xb($t2)
/* 00415E60 AB09FFF8 */  swl   $t1, -8($t8)
/* 00415E64 BB09FFFB */  swr   $t1, -5($t8)
/* 00415E68 894C000C */  lwl   $t4, 0xc($t2)
/* 00415E6C 994C000F */  lwr   $t4, 0xf($t2)
/* 00415E70 AB0CFFFC */  swl   $t4, -4($t8)
/* 00415E74 BB0CFFFF */  swr   $t4, -1($t8)
/* 00415E78 8FAD0040 */  lw    $t5, 0x40($sp)
/* 00415E7C 11A00042 */  beqz  $t5, .L00415F88
/* 00415E80 25B50001 */   addiu $s5, $t5, 1
/* 00415E84 26A4FFFF */  addiu $a0, $s5, -1
/* 00415E88 30840003 */  andi  $a0, $a0, 3
/* 00415E8C 10800012 */  beqz  $a0, .L00415ED8
/* 00415E90 24130001 */   li    $s3, 1
/* 00415E94 8FA20044 */  lw    $v0, 0x44($sp)
/* 00415E98 24830001 */  addiu $v1, $a0, 1
/* 00415E9C 00021100 */  sll   $v0, $v0, 4
.L00415EA0:
/* 00415EA0 8E390004 */  lw    $t9, 4($s1)
/* 00415EA4 8E4A0000 */  lw    $t2, ($s2)
/* 00415EA8 8E180000 */  lw    $t8, ($s0)
/* 00415EAC 03227021 */  addu  $t6, $t9, $v0
/* 00415EB0 000A6100 */  sll   $t4, $t2, 4
/* 00415EB4 01D35821 */  addu  $t3, $t6, $s3
/* 00415EB8 030C4821 */  addu  $t1, $t8, $t4
/* 00415EBC 916FFFFF */  lbu   $t7, -1($t3)
/* 00415EC0 01336821 */  addu  $t5, $t1, $s3
/* 00415EC4 26730001 */  addiu $s3, $s3, 1
/* 00415EC8 1473FFF5 */  bne   $v1, $s3, .L00415EA0
/* 00415ECC A1AFFFEF */   sb    $t7, -0x11($t5)
/* 00415ED0 5275002E */  beql  $s3, $s5, .L00415F8C
/* 00415ED4 8E430000 */   lw    $v1, ($s2)
.L00415ED8:
/* 00415ED8 8FA20044 */  lw    $v0, 0x44($sp)
/* 00415EDC 00021100 */  sll   $v0, $v0, 4
.L00415EE0:
/* 00415EE0 8E390004 */  lw    $t9, 4($s1)
/* 00415EE4 8E4C0000 */  lw    $t4, ($s2)
/* 00415EE8 8E180000 */  lw    $t8, ($s0)
/* 00415EEC 03227021 */  addu  $t6, $t9, $v0
/* 00415EF0 01D35821 */  addu  $t3, $t6, $s3
/* 00415EF4 916AFFFF */  lbu   $t2, -1($t3)
/* 00415EF8 000C4900 */  sll   $t1, $t4, 4
/* 00415EFC 03097821 */  addu  $t7, $t8, $t1
/* 00415F00 01F36821 */  addu  $t5, $t7, $s3
/* 00415F04 A1AAFFEF */  sb    $t2, -0x11($t5)
/* 00415F08 8E390004 */  lw    $t9, 4($s1)
/* 00415F0C 8E490000 */  lw    $t1, ($s2)
/* 00415F10 8E180000 */  lw    $t8, ($s0)
/* 00415F14 03227021 */  addu  $t6, $t9, $v0
/* 00415F18 01D35821 */  addu  $t3, $t6, $s3
/* 00415F1C 916C0000 */  lbu   $t4, ($t3)
/* 00415F20 00097900 */  sll   $t7, $t1, 4
/* 00415F24 030F5021 */  addu  $t2, $t8, $t7
/* 00415F28 01536821 */  addu  $t5, $t2, $s3
/* 00415F2C A1ACFFF0 */  sb    $t4, -0x10($t5)
/* 00415F30 8E390004 */  lw    $t9, 4($s1)
/* 00415F34 8E4F0000 */  lw    $t7, ($s2)
/* 00415F38 8E180000 */  lw    $t8, ($s0)
/* 00415F3C 03227021 */  addu  $t6, $t9, $v0
/* 00415F40 01D35821 */  addu  $t3, $t6, $s3
/* 00415F44 91690001 */  lbu   $t1, 1($t3)
/* 00415F48 000F5100 */  sll   $t2, $t7, 4
/* 00415F4C 030A6021 */  addu  $t4, $t8, $t2
/* 00415F50 01936821 */  addu  $t5, $t4, $s3
/* 00415F54 A1A9FFF1 */  sb    $t1, -0xf($t5)
/* 00415F58 8E4A0000 */  lw    $t2, ($s2)
/* 00415F5C 8E390004 */  lw    $t9, 4($s1)
/* 00415F60 8E180000 */  lw    $t8, ($s0)
/* 00415F64 000A6100 */  sll   $t4, $t2, 4
/* 00415F68 03227021 */  addu  $t6, $t9, $v0
/* 00415F6C 01D35821 */  addu  $t3, $t6, $s3
/* 00415F70 030C4821 */  addu  $t1, $t8, $t4
/* 00415F74 916F0002 */  lbu   $t7, 2($t3)
/* 00415F78 01336821 */  addu  $t5, $t1, $s3
/* 00415F7C 26730004 */  addiu $s3, $s3, 4
/* 00415F80 1675FFD7 */  bne   $s3, $s5, .L00415EE0
/* 00415F84 A1AFFFF2 */   sb    $t7, -0xe($t5)
.L00415F88:
/* 00415F88 8E430000 */  lw    $v1, ($s2)
.L00415F8C:
/* 00415F8C 8ED90000 */  lw    $t9, ($s6)
/* 00415F90 57230007 */  bnel  $t9, $v1, .L00415FB0
/* 00415F94 246E0001 */   addiu $t6, $v1, 1
/* 00415F98 8F9981D4 */  lw    $t9, %call16(grow_ibuffer)($gp)
/* 00415F9C 0320F809 */  jalr  $t9
/* 00415FA0 00000000 */   nop   
/* 00415FA4 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00415FA8 8E430000 */  lw    $v1, ($s2)
/* 00415FAC 246E0001 */  addiu $t6, $v1, 1
.L00415FB0:
/* 00415FB0 AE4E0000 */  sw    $t6, ($s2)
/* 00415FB4 8FBF003C */  lw    $ra, 0x3c($sp)
.L00415FB8:
/* 00415FB8 8FB0001C */  lw    $s0, 0x1c($sp)
/* 00415FBC 8FB10020 */  lw    $s1, 0x20($sp)
/* 00415FC0 8FB20024 */  lw    $s2, 0x24($sp)
/* 00415FC4 8FB30028 */  lw    $s3, 0x28($sp)
/* 00415FC8 8FB4002C */  lw    $s4, 0x2c($sp)
/* 00415FCC 8FB50030 */  lw    $s5, 0x30($sp)
/* 00415FD0 8FB60034 */  lw    $s6, 0x34($sp)
/* 00415FD4 03E00008 */  jr    $ra
/* 00415FD8 27BD0048 */   addiu $sp, $sp, 0x48
    .type emit_rfi, @function
    .size emit_rfi, .-emit_rfi
    .end emit_rfi

glabel emit_rrfi
    .ent emit_rrfi
    # 0042BDAC eval
/* 00415FDC 3C1C0FC1 */  .cpload $t9
/* 00415FE0 279C9A74 */  
/* 00415FE4 0399E021 */  
/* 00415FE8 8F87897C */  lw     $a3, %got(i_ptr)($gp)
/* 00415FEC 8F838978 */  lw     $v1, %got(ibuffer)($gp)
/* 00415FF0 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 00415FF4 8CEF0000 */  lw    $t7, ($a3)
/* 00415FF8 8C6E0000 */  lw    $t6, ($v1)
/* 00415FFC AFBF0024 */  sw    $ra, 0x24($sp)
/* 00416000 000FC100 */  sll   $t8, $t7, 4
/* 00416004 AFBC0020 */  sw    $gp, 0x20($sp)
/* 00416008 AFB0001C */  sw    $s0, 0x1c($sp)
/* 0041600C AFA40028 */  sw    $a0, 0x28($sp)
/* 00416010 AFA5002C */  sw    $a1, 0x2c($sp)
/* 00416014 AFA60030 */  sw    $a2, 0x30($sp)
/* 00416018 01D81021 */  addu  $v0, $t6, $t8
/* 0041601C 9059FFF5 */  lbu   $t9, -0xb($v0)
/* 00416020 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00416024 3C01FFFC */  lui   $at, 0xfffc
/* 00416028 332BFFC0 */  andi  $t3, $t9, 0xffc0
/* 0041602C 356C0017 */  ori   $t4, $t3, 0x17
/* 00416030 A04C0005 */  sb    $t4, 5($v0)
/* 00416034 8CEF0000 */  lw    $t7, ($a3)
/* 00416038 8C6D0000 */  lw    $t5, ($v1)
/* 0041603C 97B8002A */  lhu   $t8, 0x2a($sp)
/* 00416040 000F7100 */  sll   $t6, $t7, 4
/* 00416044 01AE1021 */  addu  $v0, $t5, $t6
/* 00416048 9448FFF6 */  lhu   $t0, -0xa($v0)
/* 0041604C 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00416050 34213FFF */  ori   $at, $at, 0x3fff
/* 00416054 0008CD80 */  sll   $t9, $t0, 0x16
/* 00416058 00195DC2 */  srl   $t3, $t9, 0x17
/* 0041605C 030B6026 */  xor   $t4, $t8, $t3
/* 00416060 000C7DC0 */  sll   $t7, $t4, 0x17
/* 00416064 000F6D82 */  srl   $t5, $t7, 0x16
/* 00416068 01A87026 */  xor   $t6, $t5, $t0
/* 0041606C A44E0006 */  sh    $t6, 6($v0)
/* 00416070 8CF80000 */  lw    $t8, ($a3)
/* 00416074 8C790000 */  lw    $t9, ($v1)
/* 00416078 00185900 */  sll   $t3, $t8, 4
/* 0041607C 032B1021 */  addu  $v0, $t9, $t3
/* 00416080 8C4CFFF8 */  lw    $t4, -8($v0)
/* 00416084 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00416088 01817824 */  and   $t7, $t4, $at
/* 0041608C 35ED8000 */  ori   $t5, $t7, 0x8000
/* 00416090 AC4D0008 */  sw    $t5, 8($v0)
/* 00416094 8CF80000 */  lw    $t8, ($a3)
/* 00416098 8C6E0000 */  lw    $t6, ($v1)
/* 0041609C 93AB002F */  lbu   $t3, 0x2f($sp)
/* 004160A0 0018C900 */  sll   $t9, $t8, 4
/* 004160A4 01D91021 */  addu  $v0, $t6, $t9
/* 004160A8 8C49FFF8 */  lw    $t1, -8($v0)
/* 004160AC 2442FFF0 */  addiu $v0, $v0, -0x10
/* 004160B0 3C01FE03 */  lui   $at, 0xfe03
/* 004160B4 00096642 */  srl   $t4, $t1, 0x19
/* 004160B8 016C7826 */  xor   $t7, $t3, $t4
/* 004160BC 000F6E40 */  sll   $t5, $t7, 0x19
/* 004160C0 01A9C026 */  xor   $t8, $t5, $t1
/* 004160C4 AC580008 */  sw    $t8, 8($v0)
/* 004160C8 8CF90000 */  lw    $t9, ($a3)
/* 004160CC 8C6E0000 */  lw    $t6, ($v1)
/* 004160D0 3421FFFF */  ori   $at, $at, 0xffff
/* 004160D4 00195900 */  sll   $t3, $t9, 4
/* 004160D8 01CB1021 */  addu  $v0, $t6, $t3
/* 004160DC 8C4CFFF8 */  lw    $t4, -8($v0)
/* 004160E0 2442FFF0 */  addiu $v0, $v0, -0x10
/* 004160E4 01817824 */  and   $t7, $t4, $at
/* 004160E8 3C010120 */  lui   $at, 0x120
/* 004160EC 01E16825 */  or    $t5, $t7, $at
/* 004160F0 AC4D0008 */  sw    $t5, 8($v0)
/* 004160F4 8CEE0000 */  lw    $t6, ($a3)
/* 004160F8 8C790000 */  lw    $t9, ($v1)
/* 004160FC 8FB80030 */  lw    $t8, 0x30($sp)
/* 00416100 000E5900 */  sll   $t3, $t6, 4
/* 00416104 032B6021 */  addu  $t4, $t9, $t3
/* 00416108 AD98FFF0 */  sw    $t8, -0x10($t4)
/* 0041610C 8CED0000 */  lw    $t5, ($a3)
/* 00416110 8C6F0000 */  lw    $t7, ($v1)
/* 00416114 3C01FE3F */  lui   $at, 0xfe3f
/* 00416118 000D7100 */  sll   $t6, $t5, 4
/* 0041611C 01EEC821 */  addu  $t9, $t7, $t6
/* 00416120 AF20FFFC */  sw    $zero, -4($t9)
/* 00416124 8CF80000 */  lw    $t8, ($a3)
/* 00416128 8C6B0000 */  lw    $t3, ($v1)
/* 0041612C 3421FFFF */  ori   $at, $at, 0xffff
/* 00416130 00186100 */  sll   $t4, $t8, 4
/* 00416134 016C1021 */  addu  $v0, $t3, $t4
/* 00416138 8C4DFFF4 */  lw    $t5, -0xc($v0)
/* 0041613C 8F998984 */  lw     $t9, %got(d_ptr)($gp)
/* 00416140 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00416144 01A17824 */  and   $t7, $t5, $at
/* 00416148 3C010180 */  lui   $at, 0x180
/* 0041614C 01E17025 */  or    $t6, $t7, $at
/* 00416150 AC4E0004 */  sw    $t6, 4($v0)
/* 00416154 8CEA0000 */  lw    $t2, ($a3)
/* 00416158 8F390000 */  lw    $t9, ($t9)
/* 0041615C 172A0007 */  bne   $t9, $t2, .L0041617C
/* 00416160 00000000 */   nop   
/* 00416164 8F9981D4 */  lw    $t9, %call16(grow_ibuffer)($gp)
/* 00416168 0320F809 */  jalr  $t9
/* 0041616C 00000000 */   nop   
/* 00416170 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00416174 8F87897C */  lw     $a3, %got(i_ptr)($gp)
/* 00416178 8CEA0000 */  lw    $t2, ($a3)
.L0041617C:
/* 0041617C 8F8B89E0 */  lw     $t3, %got(debug_ugen)($gp)
/* 00416180 25580001 */  addiu $t8, $t2, 1
/* 00416184 ACF80000 */  sw    $t8, ($a3)
/* 00416188 916B0000 */  lbu   $t3, ($t3)
/* 0041618C 24060009 */  li    $a2, 9
/* 00416190 51600035 */  beql  $t3, $zero, .L00416268
/* 00416194 8FBF0024 */   lw    $ra, 0x24($sp)
/* 00416198 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0041619C 8F848954 */  lw     $a0, %got(output)($gp)
/* 004161A0 8F858038 */  lw    $a1, %got(RO_100095B5)($gp)
/* 004161A4 24070009 */  li    $a3, 9
/* 004161A8 8C840000 */  lw    $a0, ($a0)
/* 004161AC 0320F809 */  jalr  $t9
/* 004161B0 24A595B5 */   addiu $a1, %lo(RO_100095B5) # addiu $a1, $a1, -0x6a4b
/* 004161B4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004161B8 240C000A */  li    $t4, 10
/* 004161BC AFAC0010 */  sw    $t4, 0x10($sp)
/* 004161C0 8F908954 */  lw     $s0, %got(output)($gp)
/* 004161C4 8F9987D8 */  lw    $t9, %call16(write_enum)($gp)
/* 004161C8 8F868038 */  lw    $a2, %got(D_10012570)($gp)
/* 004161CC 8E100000 */  lw    $s0, ($s0)
/* 004161D0 97A5002A */  lhu   $a1, 0x2a($sp)
/* 004161D4 00003825 */  move  $a3, $zero
/* 004161D8 24C62570 */  addiu $a2, %lo(D_10012570) # addiu $a2, $a2, 0x2570
/* 004161DC 0320F809 */  jalr  $t9
/* 004161E0 02002025 */   move  $a0, $s0
/* 004161E4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004161E8 02002025 */  move  $a0, $s0
/* 004161EC 24050020 */  li    $a1, 32
/* 004161F0 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 004161F4 24060001 */  li    $a2, 1
/* 004161F8 2407000A */  li    $a3, 10
/* 004161FC 0320F809 */  jalr  $t9
/* 00416200 00000000 */   nop   
/* 00416204 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00416208 240D000A */  li    $t5, 10
/* 0041620C AFAD0010 */  sw    $t5, 0x10($sp)
/* 00416210 8F9987D8 */  lw    $t9, %call16(write_enum)($gp)
/* 00416214 8F868038 */  lw    $a2, %got(D_1001340C)($gp)
/* 00416218 02002025 */  move  $a0, $s0
/* 0041621C 93A5002F */  lbu   $a1, 0x2f($sp)
/* 00416220 00003825 */  move  $a3, $zero
/* 00416224 0320F809 */  jalr  $t9
/* 00416228 24C6340C */   addiu $a2, %lo(D_1001340C) # addiu $a2, $a2, 0x340c
/* 0041622C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00416230 02002025 */  move  $a0, $s0
/* 00416234 8FA50030 */  lw    $a1, 0x30($sp)
/* 00416238 8F9987E0 */  lw    $t9, %call16(write_cardinal)($gp)
/* 0041623C 2406000C */  li    $a2, 12
/* 00416240 2407000A */  li    $a3, 10
/* 00416244 0320F809 */  jalr  $t9
/* 00416248 00000000 */   nop   
/* 0041624C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00416250 8F9987CC */  lw    $t9, %call16(writeln)($gp)
/* 00416254 8F848954 */  lw     $a0, %got(output)($gp)
/* 00416258 0320F809 */  jalr  $t9
/* 0041625C 8C840000 */   lw    $a0, ($a0)
/* 00416260 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00416264 8FBF0024 */  lw    $ra, 0x24($sp)
.L00416268:
/* 00416268 8FB0001C */  lw    $s0, 0x1c($sp)
/* 0041626C 27BD0028 */  addiu $sp, $sp, 0x28
/* 00416270 03E00008 */  jr    $ra
/* 00416274 00000000 */   nop   
    .type emit_rrfi, @function
    .size emit_rrfi, .-emit_rrfi
    .end emit_rrfi

glabel emit_rrr
    .ent emit_rrr
    # 0041D1E8 func_0041D1E8
    # 0041D39C func_0041D39C
    # 0041D534 func_0041D534
    # 0041D958 func_0041D958
    # 0041DDE0 func_0041DDE0
    # 0041DF18 func_0041DF18
    # 0041E05C func_0041E05C
    # 0041E1C0 func_0041E1C0
    # 0041E304 func_0041E304
    # 0041E468 dw_emit_rrr
    # 0041E800 func_0041E800
    # 0041EA00 func_0041EA00
    # 0041EC08 func_0041EC08
    # 0041EE78 func_0041EE78
    # 0041F194 func_0041F194
    # 0041FC98 dw_emit_rri
    # 00420360 func_00420360
    # 0042A1AC eval_irel
    # 0042BDAC eval
    # 004330EC eval_int_flt_cvt
    # 00433494 eval_flt_int_cvt
/* 00416278 3C1C0FC1 */  .cpload $t9
/* 0041627C 279C97D8 */  
/* 00416280 0399E021 */  
/* 00416284 8F89897C */  lw     $t1, %got(i_ptr)($gp)
/* 00416288 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0041628C 8F888978 */  lw     $t0, %got(ibuffer)($gp)
/* 00416290 8D2F0000 */  lw    $t7, ($t1)
/* 00416294 AFBF0024 */  sw    $ra, 0x24($sp)
/* 00416298 8D0E0000 */  lw    $t6, ($t0)
/* 0041629C 000FC100 */  sll   $t8, $t7, 4
/* 004162A0 AFBC0020 */  sw    $gp, 0x20($sp)
/* 004162A4 AFB0001C */  sw    $s0, 0x1c($sp)
/* 004162A8 AFA40028 */  sw    $a0, 0x28($sp)
/* 004162AC AFA5002C */  sw    $a1, 0x2c($sp)
/* 004162B0 AFA60030 */  sw    $a2, 0x30($sp)
/* 004162B4 AFA70034 */  sw    $a3, 0x34($sp)
/* 004162B8 01D81021 */  addu  $v0, $t6, $t8
/* 004162BC 9059FFF5 */  lbu   $t9, -0xb($v0)
/* 004162C0 2442FFF0 */  addiu $v0, $v0, -0x10
/* 004162C4 3C01FFFC */  lui   $at, 0xfffc
/* 004162C8 332BFFC0 */  andi  $t3, $t9, 0xffc0
/* 004162CC 356C0017 */  ori   $t4, $t3, 0x17
/* 004162D0 A04C0005 */  sb    $t4, 5($v0)
/* 004162D4 8D2F0000 */  lw    $t7, ($t1)
/* 004162D8 8D0D0000 */  lw    $t5, ($t0)
/* 004162DC 97B8002A */  lhu   $t8, 0x2a($sp)
/* 004162E0 000F7100 */  sll   $t6, $t7, 4
/* 004162E4 01AE1021 */  addu  $v0, $t5, $t6
/* 004162E8 944AFFF6 */  lhu   $t2, -0xa($v0)
/* 004162EC 2442FFF0 */  addiu $v0, $v0, -0x10
/* 004162F0 34213FFF */  ori   $at, $at, 0x3fff
/* 004162F4 000ACD80 */  sll   $t9, $t2, 0x16
/* 004162F8 00195DC2 */  srl   $t3, $t9, 0x17
/* 004162FC 030B6026 */  xor   $t4, $t8, $t3
/* 00416300 000C7DC0 */  sll   $t7, $t4, 0x17
/* 00416304 000F6D82 */  srl   $t5, $t7, 0x16
/* 00416308 01AA7026 */  xor   $t6, $t5, $t2
/* 0041630C A44E0006 */  sh    $t6, 6($v0)
/* 00416310 8D380000 */  lw    $t8, ($t1)
/* 00416314 8D190000 */  lw    $t9, ($t0)
/* 00416318 00185900 */  sll   $t3, $t8, 4
/* 0041631C 032B1021 */  addu  $v0, $t9, $t3
/* 00416320 8C4CFFF8 */  lw    $t4, -8($v0)
/* 00416324 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00416328 01817824 */  and   $t7, $t4, $at
/* 0041632C 35EDC000 */  ori   $t5, $t7, 0xc000
/* 00416330 AC4D0008 */  sw    $t5, 8($v0)
/* 00416334 8D380000 */  lw    $t8, ($t1)
/* 00416338 8D0E0000 */  lw    $t6, ($t0)
/* 0041633C 0018C900 */  sll   $t9, $t8, 4
/* 00416340 01D95821 */  addu  $t3, $t6, $t9
/* 00416344 AD60FFF0 */  sw    $zero, -0x10($t3)
/* 00416348 8D2F0000 */  lw    $t7, ($t1)
/* 0041634C 8D0C0000 */  lw    $t4, ($t0)
/* 00416350 93B8002F */  lbu   $t8, 0x2f($sp)
/* 00416354 000F6900 */  sll   $t5, $t7, 4
/* 00416358 018D1021 */  addu  $v0, $t4, $t5
/* 0041635C 8C43FFF8 */  lw    $v1, -8($v0)
/* 00416360 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00416364 00037642 */  srl   $t6, $v1, 0x19
/* 00416368 030EC826 */  xor   $t9, $t8, $t6
/* 0041636C 00195E40 */  sll   $t3, $t9, 0x19
/* 00416370 01637826 */  xor   $t7, $t3, $v1
/* 00416374 AC4F0008 */  sw    $t7, 8($v0)
/* 00416378 8D2D0000 */  lw    $t5, ($t1)
/* 0041637C 8D0C0000 */  lw    $t4, ($t0)
/* 00416380 93AE0033 */  lbu   $t6, 0x33($sp)
/* 00416384 000DC100 */  sll   $t8, $t5, 4
/* 00416388 01981021 */  addu  $v0, $t4, $t8
/* 0041638C 8C43FFF8 */  lw    $v1, -8($v0)
/* 00416390 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00416394 0003C9C0 */  sll   $t9, $v1, 7
/* 00416398 00195E42 */  srl   $t3, $t9, 0x19
/* 0041639C 01CB7826 */  xor   $t7, $t6, $t3
/* 004163A0 000F6E40 */  sll   $t5, $t7, 0x19
/* 004163A4 000D61C2 */  srl   $t4, $t5, 7
/* 004163A8 0183C026 */  xor   $t8, $t4, $v1
/* 004163AC AC580008 */  sw    $t8, 8($v0)
/* 004163B0 8D2E0000 */  lw    $t6, ($t1)
/* 004163B4 8D190000 */  lw    $t9, ($t0)
/* 004163B8 93AF0037 */  lbu   $t7, 0x37($sp)
/* 004163BC 000E5900 */  sll   $t3, $t6, 4
/* 004163C0 032B1021 */  addu  $v0, $t9, $t3
/* 004163C4 8C43FFF8 */  lw    $v1, -8($v0)
/* 004163C8 2442FFF0 */  addiu $v0, $v0, -0x10
/* 004163CC 00036C80 */  sll   $t5, $v1, 0x12
/* 004163D0 000D6642 */  srl   $t4, $t5, 0x19
/* 004163D4 01ECC026 */  xor   $t8, $t7, $t4
/* 004163D8 00187640 */  sll   $t6, $t8, 0x19
/* 004163DC 000ECC82 */  srl   $t9, $t6, 0x12
/* 004163E0 8F8D8984 */  lw     $t5, %got(d_ptr)($gp)
/* 004163E4 03235826 */  xor   $t3, $t9, $v1
/* 004163E8 AC4B0008 */  sw    $t3, 8($v0)
/* 004163EC 8D220000 */  lw    $v0, ($t1)
/* 004163F0 8DAD0000 */  lw    $t5, ($t5)
/* 004163F4 15A20007 */  bne   $t5, $v0, .L00416414
/* 004163F8 00000000 */   nop   
/* 004163FC 8F9981D4 */  lw    $t9, %call16(grow_ibuffer)($gp)
/* 00416400 0320F809 */  jalr  $t9
/* 00416404 00000000 */   nop   
/* 00416408 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041640C 8F89897C */  lw     $t1, %got(i_ptr)($gp)
/* 00416410 8D220000 */  lw    $v0, ($t1)
.L00416414:
/* 00416414 8F8C89E0 */  lw     $t4, %got(debug_ugen)($gp)
/* 00416418 244F0001 */  addiu $t7, $v0, 1
/* 0041641C AD2F0000 */  sw    $t7, ($t1)
/* 00416420 918C0000 */  lbu   $t4, ($t4)
/* 00416424 2406000A */  li    $a2, 10
/* 00416428 51800051 */  beql  $t4, $zero, .L00416570
/* 0041642C 8FBF0024 */   lw    $ra, 0x24($sp)
/* 00416430 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 00416434 8F848954 */  lw     $a0, %got(output)($gp)
/* 00416438 8F858038 */  lw    $a1, %got(RO_100095BE)($gp)
/* 0041643C 2407000A */  li    $a3, 10
/* 00416440 8C840000 */  lw    $a0, ($a0)
/* 00416444 0320F809 */  jalr  $t9
/* 00416448 24A595BE */   addiu $a1, %lo(RO_100095BE) # addiu $a1, $a1, -0x6a42
/* 0041644C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00416450 2418000A */  li    $t8, 10
/* 00416454 AFB80010 */  sw    $t8, 0x10($sp)
/* 00416458 8F908954 */  lw     $s0, %got(output)($gp)
/* 0041645C 8F9987D8 */  lw    $t9, %call16(write_enum)($gp)
/* 00416460 8F868038 */  lw    $a2, %got(D_10012570)($gp)
/* 00416464 8E100000 */  lw    $s0, ($s0)
/* 00416468 97A5002A */  lhu   $a1, 0x2a($sp)
/* 0041646C 00003825 */  move  $a3, $zero
/* 00416470 24C62570 */  addiu $a2, %lo(D_10012570) # addiu $a2, $a2, 0x2570
/* 00416474 0320F809 */  jalr  $t9
/* 00416478 02002025 */   move  $a0, $s0
/* 0041647C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00416480 02002025 */  move  $a0, $s0
/* 00416484 24050020 */  li    $a1, 32
/* 00416488 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 0041648C 24060001 */  li    $a2, 1
/* 00416490 2407000A */  li    $a3, 10
/* 00416494 0320F809 */  jalr  $t9
/* 00416498 00000000 */   nop   
/* 0041649C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004164A0 240E000A */  li    $t6, 10
/* 004164A4 AFAE0010 */  sw    $t6, 0x10($sp)
/* 004164A8 8F9987D8 */  lw    $t9, %call16(write_enum)($gp)
/* 004164AC 8F868038 */  lw    $a2, %got(D_1001340C)($gp)
/* 004164B0 02002025 */  move  $a0, $s0
/* 004164B4 93A5002F */  lbu   $a1, 0x2f($sp)
/* 004164B8 00003825 */  move  $a3, $zero
/* 004164BC 0320F809 */  jalr  $t9
/* 004164C0 24C6340C */   addiu $a2, %lo(D_1001340C) # addiu $a2, $a2, 0x340c
/* 004164C4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004164C8 02002025 */  move  $a0, $s0
/* 004164CC 24050020 */  li    $a1, 32
/* 004164D0 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 004164D4 24060001 */  li    $a2, 1
/* 004164D8 2407000A */  li    $a3, 10
/* 004164DC 0320F809 */  jalr  $t9
/* 004164E0 00000000 */   nop   
/* 004164E4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004164E8 2419000A */  li    $t9, 10
/* 004164EC AFB90010 */  sw    $t9, 0x10($sp)
/* 004164F0 8F9987D8 */  lw    $t9, %call16(write_enum)($gp)
/* 004164F4 8F868038 */  lw    $a2, %got(D_1001340C)($gp)
/* 004164F8 02002025 */  move  $a0, $s0
/* 004164FC 93A50033 */  lbu   $a1, 0x33($sp)
/* 00416500 00003825 */  move  $a3, $zero
/* 00416504 0320F809 */  jalr  $t9
/* 00416508 24C6340C */   addiu $a2, %lo(D_1001340C) # addiu $a2, $a2, 0x340c
/* 0041650C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00416510 02002025 */  move  $a0, $s0
/* 00416514 24050020 */  li    $a1, 32
/* 00416518 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 0041651C 24060001 */  li    $a2, 1
/* 00416520 2407000A */  li    $a3, 10
/* 00416524 0320F809 */  jalr  $t9
/* 00416528 00000000 */   nop   
/* 0041652C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00416530 240B000A */  li    $t3, 10
/* 00416534 AFAB0010 */  sw    $t3, 0x10($sp)
/* 00416538 8F9987D8 */  lw    $t9, %call16(write_enum)($gp)
/* 0041653C 8F868038 */  lw    $a2, %got(D_1001340C)($gp)
/* 00416540 02002025 */  move  $a0, $s0
/* 00416544 93A50037 */  lbu   $a1, 0x37($sp)
/* 00416548 00003825 */  move  $a3, $zero
/* 0041654C 0320F809 */  jalr  $t9
/* 00416550 24C6340C */   addiu $a2, %lo(D_1001340C) # addiu $a2, $a2, 0x340c
/* 00416554 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00416558 02002025 */  move  $a0, $s0
/* 0041655C 8F9987CC */  lw    $t9, %call16(writeln)($gp)
/* 00416560 0320F809 */  jalr  $t9
/* 00416564 00000000 */   nop   
/* 00416568 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041656C 8FBF0024 */  lw    $ra, 0x24($sp)
.L00416570:
/* 00416570 8FB0001C */  lw    $s0, 0x1c($sp)
/* 00416574 27BD0028 */  addiu $sp, $sp, 0x28
/* 00416578 03E00008 */  jr    $ra
/* 0041657C 00000000 */   nop   
    .type emit_rrr, @function
    .size emit_rrr, .-emit_rrr
    .end emit_rrr

glabel emit_rri_
    .ent emit_rri_
    # 0041C694 func_0041C694
    # 0041C710 func_0041C710
    # 0041C7AC func_0041C7AC
    # 0041C86C func_0041C86C
    # 0041C92C func_0041C92C
    # 0041C9EC func_0041C9EC
    # 0041CAAC emit_trap_rri
    # 0041D534 func_0041D534
    # 0041D958 func_0041D958
    # 0041DDE0 func_0041DDE0
    # 0041E800 func_0041E800
    # 0041EA00 func_0041EA00
    # 0041EC08 func_0041EC08
    # 0041EE78 func_0041EE78
    # 0041F194 func_0041F194
    # 0041F368 func_0041F368
    # 0041F4F0 func_0041F4F0
    # 0041F678 func_0041F678
    # 0041F800 func_0041F800
    # 0041F988 func_0041F988
    # 0041FB10 func_0041FB10
    # 0041FC98 dw_emit_rri
    # 00420360 func_00420360
    # 00423290 move_dreg_to_regs
    # 0042670C loadstore
    # 00428D14 eval_mov
    # 0042A1AC eval_irel
    # 0042A9A8 load_parm_vreg
    # 0042BDAC eval
    # 00433494 eval_flt_int_cvt
    # 004340D4 func_004340D4
    # 00434430 func_00434430
    # 00434618 func_00434618
/* 00416580 3C1C0FC1 */  .cpload $t9
/* 00416584 279C94D0 */  
/* 00416588 0399E021 */  
/* 0041658C 8F89897C */  lw     $t1, %got(i_ptr)($gp)
/* 00416590 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 00416594 8F838978 */  lw     $v1, %got(ibuffer)($gp)
/* 00416598 8D2F0000 */  lw    $t7, ($t1)
/* 0041659C AFBF0024 */  sw    $ra, 0x24($sp)
/* 004165A0 8C6E0000 */  lw    $t6, ($v1)
/* 004165A4 000FC100 */  sll   $t8, $t7, 4
/* 004165A8 AFBC0020 */  sw    $gp, 0x20($sp)
/* 004165AC AFB0001C */  sw    $s0, 0x1c($sp)
/* 004165B0 AFA40028 */  sw    $a0, 0x28($sp)
/* 004165B4 AFA5002C */  sw    $a1, 0x2c($sp)
/* 004165B8 AFA60030 */  sw    $a2, 0x30($sp)
/* 004165BC AFA70034 */  sw    $a3, 0x34($sp)
/* 004165C0 01D81021 */  addu  $v0, $t6, $t8
/* 004165C4 9059FFF5 */  lbu   $t9, -0xb($v0)
/* 004165C8 2442FFF0 */  addiu $v0, $v0, -0x10
/* 004165CC 3C01FFFC */  lui   $at, 0xfffc
/* 004165D0 332CFFC0 */  andi  $t4, $t9, 0xffc0
/* 004165D4 358D0017 */  ori   $t5, $t4, 0x17
/* 004165D8 A04D0005 */  sb    $t5, 5($v0)
/* 004165DC 8D2E0000 */  lw    $t6, ($t1)
/* 004165E0 8C6F0000 */  lw    $t7, ($v1)
/* 004165E4 97B9002A */  lhu   $t9, 0x2a($sp)
/* 004165E8 000EC100 */  sll   $t8, $t6, 4
/* 004165EC 01F81021 */  addu  $v0, $t7, $t8
/* 004165F0 944AFFF6 */  lhu   $t2, -0xa($v0)
/* 004165F4 2442FFF0 */  addiu $v0, $v0, -0x10
/* 004165F8 34213FFF */  ori   $at, $at, 0x3fff
/* 004165FC 000A6580 */  sll   $t4, $t2, 0x16
/* 00416600 000C6DC2 */  srl   $t5, $t4, 0x17
/* 00416604 032D7026 */  xor   $t6, $t9, $t5
/* 00416608 000E7DC0 */  sll   $t7, $t6, 0x17
/* 0041660C 000FC582 */  srl   $t8, $t7, 0x16
/* 00416610 030A6026 */  xor   $t4, $t8, $t2
/* 00416614 A44C0006 */  sh    $t4, 6($v0)
/* 00416618 8D2D0000 */  lw    $t5, ($t1)
/* 0041661C 8C790000 */  lw    $t9, ($v1)
/* 00416620 000D7100 */  sll   $t6, $t5, 4
/* 00416624 032E1021 */  addu  $v0, $t9, $t6
/* 00416628 8C4FFFF8 */  lw    $t7, -8($v0)
/* 0041662C 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00416630 01E1C024 */  and   $t8, $t7, $at
/* 00416634 3C010001 */  lui   $at, 1
/* 00416638 03016025 */  or    $t4, $t8, $at
/* 0041663C AC4C0008 */  sw    $t4, 8($v0)
/* 00416640 8D390000 */  lw    $t9, ($t1)
/* 00416644 8C6D0000 */  lw    $t5, ($v1)
/* 00416648 00197100 */  sll   $t6, $t9, 4
/* 0041664C 01AE7821 */  addu  $t7, $t5, $t6
/* 00416650 ADE0FFF0 */  sw    $zero, -0x10($t7)
/* 00416654 8D2C0000 */  lw    $t4, ($t1)
/* 00416658 8C780000 */  lw    $t8, ($v1)
/* 0041665C 93AD002F */  lbu   $t5, 0x2f($sp)
/* 00416660 000CC900 */  sll   $t9, $t4, 4
/* 00416664 03191021 */  addu  $v0, $t8, $t9
/* 00416668 8C48FFF8 */  lw    $t0, -8($v0)
/* 0041666C 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00416670 00087642 */  srl   $t6, $t0, 0x19
/* 00416674 01AE7826 */  xor   $t7, $t5, $t6
/* 00416678 000F6640 */  sll   $t4, $t7, 0x19
/* 0041667C 0188C026 */  xor   $t8, $t4, $t0
/* 00416680 AC580008 */  sw    $t8, 8($v0)
/* 00416684 8D2D0000 */  lw    $t5, ($t1)
/* 00416688 8C790000 */  lw    $t9, ($v1)
/* 0041668C 93AF0033 */  lbu   $t7, 0x33($sp)
/* 00416690 000D7100 */  sll   $t6, $t5, 4
/* 00416694 032E1021 */  addu  $v0, $t9, $t6
/* 00416698 8C48FFF8 */  lw    $t0, -8($v0)
/* 0041669C 2442FFF0 */  addiu $v0, $v0, -0x10
/* 004166A0 000861C0 */  sll   $t4, $t0, 7
/* 004166A4 000CC642 */  srl   $t8, $t4, 0x19
/* 004166A8 01F86826 */  xor   $t5, $t7, $t8
/* 004166AC 000DCE40 */  sll   $t9, $t5, 0x19
/* 004166B0 001971C2 */  srl   $t6, $t9, 7
/* 004166B4 01C86026 */  xor   $t4, $t6, $t0
/* 004166B8 AC4C0008 */  sw    $t4, 8($v0)
/* 004166BC 8D2D0000 */  lw    $t5, ($t1)
/* 004166C0 8C780000 */  lw    $t8, ($v1)
/* 004166C4 8FAF0034 */  lw    $t7, 0x34($sp)
/* 004166C8 000DC900 */  sll   $t9, $t5, 4
/* 004166CC 03197021 */  addu  $t6, $t8, $t9
/* 004166D0 ADCFFFFC */  sw    $t7, -4($t6)
/* 004166D4 8D2D0000 */  lw    $t5, ($t1)
/* 004166D8 8C6C0000 */  lw    $t4, ($v1)
/* 004166DC 93B9003B */  lbu   $t9, 0x3b($sp)
/* 004166E0 000DC100 */  sll   $t8, $t5, 4
/* 004166E4 01981021 */  addu  $v0, $t4, $t8
/* 004166E8 8C4BFFF4 */  lw    $t3, -0xc($v0)
/* 004166EC 2442FFF0 */  addiu $v0, $v0, -0x10
/* 004166F0 000B79C0 */  sll   $t7, $t3, 7
/* 004166F4 000F7742 */  srl   $t6, $t7, 0x1d
/* 004166F8 032E6826 */  xor   $t5, $t9, $t6
/* 004166FC 000D6740 */  sll   $t4, $t5, 0x1d
/* 00416700 000CC1C2 */  srl   $t8, $t4, 7
/* 00416704 8F998984 */  lw     $t9, %got(d_ptr)($gp)
/* 00416708 030B7826 */  xor   $t7, $t8, $t3
/* 0041670C AC4F0004 */  sw    $t7, 4($v0)
/* 00416710 8D220000 */  lw    $v0, ($t1)
/* 00416714 8F390000 */  lw    $t9, ($t9)
/* 00416718 17220007 */  bne   $t9, $v0, .L00416738
/* 0041671C 00000000 */   nop   
/* 00416720 8F9981D4 */  lw    $t9, %call16(grow_ibuffer)($gp)
/* 00416724 0320F809 */  jalr  $t9
/* 00416728 00000000 */   nop   
/* 0041672C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00416730 8F89897C */  lw     $t1, %got(i_ptr)($gp)
/* 00416734 8D220000 */  lw    $v0, ($t1)
.L00416738:
/* 00416738 8F8D89E0 */  lw     $t5, %got(debug_ugen)($gp)
/* 0041673C 244E0001 */  addiu $t6, $v0, 1
/* 00416740 AD2E0000 */  sw    $t6, ($t1)
/* 00416744 91AD0000 */  lbu   $t5, ($t5)
/* 00416748 2406000A */  li    $a2, 10
/* 0041674C 51A00047 */  beql  $t5, $zero, .L0041686C
/* 00416750 8FBF0024 */   lw    $ra, 0x24($sp)
/* 00416754 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 00416758 8F848954 */  lw     $a0, %got(output)($gp)
/* 0041675C 8F858038 */  lw    $a1, %got(RO_100095C8)($gp)
/* 00416760 2407000A */  li    $a3, 10
/* 00416764 8C840000 */  lw    $a0, ($a0)
/* 00416768 0320F809 */  jalr  $t9
/* 0041676C 24A595C8 */   addiu $a1, %lo(RO_100095C8) # addiu $a1, $a1, -0x6a38
/* 00416770 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00416774 240C000A */  li    $t4, 10
/* 00416778 AFAC0010 */  sw    $t4, 0x10($sp)
/* 0041677C 8F908954 */  lw     $s0, %got(output)($gp)
/* 00416780 8F9987D8 */  lw    $t9, %call16(write_enum)($gp)
/* 00416784 8F868038 */  lw    $a2, %got(D_10012570)($gp)
/* 00416788 8E100000 */  lw    $s0, ($s0)
/* 0041678C 97A5002A */  lhu   $a1, 0x2a($sp)
/* 00416790 00003825 */  move  $a3, $zero
/* 00416794 24C62570 */  addiu $a2, %lo(D_10012570) # addiu $a2, $a2, 0x2570
/* 00416798 0320F809 */  jalr  $t9
/* 0041679C 02002025 */   move  $a0, $s0
/* 004167A0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004167A4 02002025 */  move  $a0, $s0
/* 004167A8 24050020 */  li    $a1, 32
/* 004167AC 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 004167B0 24060001 */  li    $a2, 1
/* 004167B4 2407000A */  li    $a3, 10
/* 004167B8 0320F809 */  jalr  $t9
/* 004167BC 00000000 */   nop   
/* 004167C0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004167C4 2418000A */  li    $t8, 10
/* 004167C8 AFB80010 */  sw    $t8, 0x10($sp)
/* 004167CC 8F9987D8 */  lw    $t9, %call16(write_enum)($gp)
/* 004167D0 8F868038 */  lw    $a2, %got(D_1001340C)($gp)
/* 004167D4 02002025 */  move  $a0, $s0
/* 004167D8 93A5002F */  lbu   $a1, 0x2f($sp)
/* 004167DC 00003825 */  move  $a3, $zero
/* 004167E0 0320F809 */  jalr  $t9
/* 004167E4 24C6340C */   addiu $a2, %lo(D_1001340C) # addiu $a2, $a2, 0x340c
/* 004167E8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004167EC 02002025 */  move  $a0, $s0
/* 004167F0 24050020 */  li    $a1, 32
/* 004167F4 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 004167F8 24060001 */  li    $a2, 1
/* 004167FC 2407000A */  li    $a3, 10
/* 00416800 0320F809 */  jalr  $t9
/* 00416804 00000000 */   nop   
/* 00416808 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041680C 240F000A */  li    $t7, 10
/* 00416810 AFAF0010 */  sw    $t7, 0x10($sp)
/* 00416814 8F9987D8 */  lw    $t9, %call16(write_enum)($gp)
/* 00416818 8F868038 */  lw    $a2, %got(D_1001340C)($gp)
/* 0041681C 02002025 */  move  $a0, $s0
/* 00416820 93A50033 */  lbu   $a1, 0x33($sp)
/* 00416824 00003825 */  move  $a3, $zero
/* 00416828 0320F809 */  jalr  $t9
/* 0041682C 24C6340C */   addiu $a2, %lo(D_1001340C) # addiu $a2, $a2, 0x340c
/* 00416830 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00416834 02002025 */  move  $a0, $s0
/* 00416838 8FA50034 */  lw    $a1, 0x34($sp)
/* 0041683C 8F9987DC */  lw    $t9, %call16(write_integer)($gp)
/* 00416840 2406000C */  li    $a2, 12
/* 00416844 2407000A */  li    $a3, 10
/* 00416848 0320F809 */  jalr  $t9
/* 0041684C 00000000 */   nop   
/* 00416850 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00416854 8F9987CC */  lw    $t9, %call16(writeln)($gp)
/* 00416858 8F848954 */  lw     $a0, %got(output)($gp)
/* 0041685C 0320F809 */  jalr  $t9
/* 00416860 8C840000 */   lw    $a0, ($a0)
/* 00416864 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00416868 8FBF0024 */  lw    $ra, 0x24($sp)
.L0041686C:
/* 0041686C 8FB0001C */  lw    $s0, 0x1c($sp)
/* 00416870 27BD0028 */  addiu $sp, $sp, 0x28
/* 00416874 03E00008 */  jr    $ra
/* 00416878 00000000 */   nop   
    .type emit_rri_, @function
    .size emit_rri_, .-emit_rri_
    .end emit_rri_

glabel emit_rrri
    .ent emit_rrri
    # 0042670C loadstore
    # 00428D14 eval_mov
    # 0042BDAC eval
/* 0041687C 3C1C0FC1 */  .cpload $t9
/* 00416880 279C91D4 */  
/* 00416884 0399E021 */  
/* 00416888 8F89897C */  lw     $t1, %got(i_ptr)($gp)
/* 0041688C 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 00416890 8F838978 */  lw     $v1, %got(ibuffer)($gp)
/* 00416894 8D2F0000 */  lw    $t7, ($t1)
/* 00416898 AFBF0024 */  sw    $ra, 0x24($sp)
/* 0041689C 8C6E0000 */  lw    $t6, ($v1)
/* 004168A0 000FC100 */  sll   $t8, $t7, 4
/* 004168A4 AFBC0020 */  sw    $gp, 0x20($sp)
/* 004168A8 AFB0001C */  sw    $s0, 0x1c($sp)
/* 004168AC AFA40028 */  sw    $a0, 0x28($sp)
/* 004168B0 AFA5002C */  sw    $a1, 0x2c($sp)
/* 004168B4 AFA60030 */  sw    $a2, 0x30($sp)
/* 004168B8 AFA70034 */  sw    $a3, 0x34($sp)
/* 004168BC 01D81021 */  addu  $v0, $t6, $t8
/* 004168C0 9059FFF5 */  lbu   $t9, -0xb($v0)
/* 004168C4 2442FFF0 */  addiu $v0, $v0, -0x10
/* 004168C8 3C01FFFC */  lui   $at, 0xfffc
/* 004168CC 332CFFC0 */  andi  $t4, $t9, 0xffc0
/* 004168D0 358D0017 */  ori   $t5, $t4, 0x17
/* 004168D4 A04D0005 */  sb    $t5, 5($v0)
/* 004168D8 8D2E0000 */  lw    $t6, ($t1)
/* 004168DC 8C6F0000 */  lw    $t7, ($v1)
/* 004168E0 97B9002A */  lhu   $t9, 0x2a($sp)
/* 004168E4 000EC100 */  sll   $t8, $t6, 4
/* 004168E8 01F81021 */  addu  $v0, $t7, $t8
/* 004168EC 944AFFF6 */  lhu   $t2, -0xa($v0)
/* 004168F0 2442FFF0 */  addiu $v0, $v0, -0x10
/* 004168F4 34213FFF */  ori   $at, $at, 0x3fff
/* 004168F8 000A6580 */  sll   $t4, $t2, 0x16
/* 004168FC 000C6DC2 */  srl   $t5, $t4, 0x17
/* 00416900 032D7026 */  xor   $t6, $t9, $t5
/* 00416904 000E7DC0 */  sll   $t7, $t6, 0x17
/* 00416908 000FC582 */  srl   $t8, $t7, 0x16
/* 0041690C 030A6026 */  xor   $t4, $t8, $t2
/* 00416910 A44C0006 */  sh    $t4, 6($v0)
/* 00416914 8D2D0000 */  lw    $t5, ($t1)
/* 00416918 8C790000 */  lw    $t9, ($v1)
/* 0041691C 000D7100 */  sll   $t6, $t5, 4
/* 00416920 032E1021 */  addu  $v0, $t9, $t6
/* 00416924 8C4FFFF8 */  lw    $t7, -8($v0)
/* 00416928 2442FFF0 */  addiu $v0, $v0, -0x10
/* 0041692C 01E1C024 */  and   $t8, $t7, $at
/* 00416930 3C010001 */  lui   $at, 1
/* 00416934 03016025 */  or    $t4, $t8, $at
/* 00416938 AC4C0008 */  sw    $t4, 8($v0)
/* 0041693C 8D2E0000 */  lw    $t6, ($t1)
/* 00416940 8C790000 */  lw    $t9, ($v1)
/* 00416944 8FAD0034 */  lw    $t5, 0x34($sp)
/* 00416948 000E7900 */  sll   $t7, $t6, 4
/* 0041694C 032FC021 */  addu  $t8, $t9, $t7
/* 00416950 AF0DFFF0 */  sw    $t5, -0x10($t8)
/* 00416954 8D2E0000 */  lw    $t6, ($t1)
/* 00416958 8C6C0000 */  lw    $t4, ($v1)
/* 0041695C 93AF002F */  lbu   $t7, 0x2f($sp)
/* 00416960 000EC900 */  sll   $t9, $t6, 4
/* 00416964 01991021 */  addu  $v0, $t4, $t9
/* 00416968 8C48FFF8 */  lw    $t0, -8($v0)
/* 0041696C 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00416970 3C01FE3F */  lui   $at, 0xfe3f
/* 00416974 00086E42 */  srl   $t5, $t0, 0x19
/* 00416978 01EDC026 */  xor   $t8, $t7, $t5
/* 0041697C 00187640 */  sll   $t6, $t8, 0x19
/* 00416980 01C86026 */  xor   $t4, $t6, $t0
/* 00416984 AC4C0008 */  sw    $t4, 8($v0)
/* 00416988 8D2F0000 */  lw    $t7, ($t1)
/* 0041698C 8C790000 */  lw    $t9, ($v1)
/* 00416990 93B80033 */  lbu   $t8, 0x33($sp)
/* 00416994 000F6900 */  sll   $t5, $t7, 4
/* 00416998 032D1021 */  addu  $v0, $t9, $t5
/* 0041699C 8C48FFF8 */  lw    $t0, -8($v0)
/* 004169A0 2442FFF0 */  addiu $v0, $v0, -0x10
/* 004169A4 3421FFFF */  ori   $at, $at, 0xffff
/* 004169A8 000871C0 */  sll   $t6, $t0, 7
/* 004169AC 000E6642 */  srl   $t4, $t6, 0x19
/* 004169B0 030C7826 */  xor   $t7, $t8, $t4
/* 004169B4 000FCE40 */  sll   $t9, $t7, 0x19
/* 004169B8 001969C2 */  srl   $t5, $t9, 7
/* 004169BC 01A87026 */  xor   $t6, $t5, $t0
/* 004169C0 AC4E0008 */  sw    $t6, 8($v0)
/* 004169C4 8D2C0000 */  lw    $t4, ($t1)
/* 004169C8 8C780000 */  lw    $t8, ($v1)
/* 004169CC 000C7900 */  sll   $t7, $t4, 4
/* 004169D0 030FC821 */  addu  $t9, $t8, $t7
/* 004169D4 AF20FFFC */  sw    $zero, -4($t9)
/* 004169D8 8D2E0000 */  lw    $t6, ($t1)
/* 004169DC 8C6D0000 */  lw    $t5, ($v1)
/* 004169E0 000E6100 */  sll   $t4, $t6, 4
/* 004169E4 01AC1021 */  addu  $v0, $t5, $t4
/* 004169E8 8C58FFF4 */  lw    $t8, -0xc($v0)
/* 004169EC 8F8E8984 */  lw     $t6, %got(d_ptr)($gp)
/* 004169F0 2442FFF0 */  addiu $v0, $v0, -0x10
/* 004169F4 03017824 */  and   $t7, $t8, $at
/* 004169F8 3C010180 */  lui   $at, 0x180
/* 004169FC 01E1C825 */  or    $t9, $t7, $at
/* 00416A00 AC590004 */  sw    $t9, 4($v0)
/* 00416A04 8D2B0000 */  lw    $t3, ($t1)
/* 00416A08 8DCE0000 */  lw    $t6, ($t6)
/* 00416A0C 15CB0007 */  bne   $t6, $t3, .L00416A2C
/* 00416A10 00000000 */   nop   
/* 00416A14 8F9981D4 */  lw    $t9, %call16(grow_ibuffer)($gp)
/* 00416A18 0320F809 */  jalr  $t9
/* 00416A1C 00000000 */   nop   
/* 00416A20 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00416A24 8F89897C */  lw     $t1, %got(i_ptr)($gp)
/* 00416A28 8D2B0000 */  lw    $t3, ($t1)
.L00416A2C:
/* 00416A2C 8F8C89E0 */  lw     $t4, %got(debug_ugen)($gp)
/* 00416A30 256D0001 */  addiu $t5, $t3, 1
/* 00416A34 AD2D0000 */  sw    $t5, ($t1)
/* 00416A38 918C0000 */  lbu   $t4, ($t4)
/* 00416A3C 2406000B */  li    $a2, 11
/* 00416A40 51800047 */  beql  $t4, $zero, .L00416B60
/* 00416A44 8FBF0024 */   lw    $ra, 0x24($sp)
/* 00416A48 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 00416A4C 8F848954 */  lw     $a0, %got(output)($gp)
/* 00416A50 8F858038 */  lw    $a1, %got(RO_100095D2)($gp)
/* 00416A54 2407000B */  li    $a3, 11
/* 00416A58 8C840000 */  lw    $a0, ($a0)
/* 00416A5C 0320F809 */  jalr  $t9
/* 00416A60 24A595D2 */   addiu $a1, %lo(RO_100095D2) # addiu $a1, $a1, -0x6a2e
/* 00416A64 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00416A68 2418000A */  li    $t8, 10
/* 00416A6C AFB80010 */  sw    $t8, 0x10($sp)
/* 00416A70 8F908954 */  lw     $s0, %got(output)($gp)
/* 00416A74 8F9987D8 */  lw    $t9, %call16(write_enum)($gp)
/* 00416A78 8F868038 */  lw    $a2, %got(D_10012570)($gp)
/* 00416A7C 8E100000 */  lw    $s0, ($s0)
/* 00416A80 97A5002A */  lhu   $a1, 0x2a($sp)
/* 00416A84 00003825 */  move  $a3, $zero
/* 00416A88 24C62570 */  addiu $a2, %lo(D_10012570) # addiu $a2, $a2, 0x2570
/* 00416A8C 0320F809 */  jalr  $t9
/* 00416A90 02002025 */   move  $a0, $s0
/* 00416A94 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00416A98 02002025 */  move  $a0, $s0
/* 00416A9C 24050020 */  li    $a1, 32
/* 00416AA0 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 00416AA4 24060001 */  li    $a2, 1
/* 00416AA8 2407000A */  li    $a3, 10
/* 00416AAC 0320F809 */  jalr  $t9
/* 00416AB0 00000000 */   nop   
/* 00416AB4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00416AB8 240F000A */  li    $t7, 10
/* 00416ABC AFAF0010 */  sw    $t7, 0x10($sp)
/* 00416AC0 8F9987D8 */  lw    $t9, %call16(write_enum)($gp)
/* 00416AC4 8F868038 */  lw    $a2, %got(D_1001340C)($gp)
/* 00416AC8 02002025 */  move  $a0, $s0
/* 00416ACC 93A5002F */  lbu   $a1, 0x2f($sp)
/* 00416AD0 00003825 */  move  $a3, $zero
/* 00416AD4 0320F809 */  jalr  $t9
/* 00416AD8 24C6340C */   addiu $a2, %lo(D_1001340C) # addiu $a2, $a2, 0x340c
/* 00416ADC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00416AE0 02002025 */  move  $a0, $s0
/* 00416AE4 24050020 */  li    $a1, 32
/* 00416AE8 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 00416AEC 24060001 */  li    $a2, 1
/* 00416AF0 2407000A */  li    $a3, 10
/* 00416AF4 0320F809 */  jalr  $t9
/* 00416AF8 00000000 */   nop   
/* 00416AFC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00416B00 2419000A */  li    $t9, 10
/* 00416B04 AFB90010 */  sw    $t9, 0x10($sp)
/* 00416B08 8F9987D8 */  lw    $t9, %call16(write_enum)($gp)
/* 00416B0C 8F868038 */  lw    $a2, %got(D_1001340C)($gp)
/* 00416B10 02002025 */  move  $a0, $s0
/* 00416B14 93A50033 */  lbu   $a1, 0x33($sp)
/* 00416B18 00003825 */  move  $a3, $zero
/* 00416B1C 0320F809 */  jalr  $t9
/* 00416B20 24C6340C */   addiu $a2, %lo(D_1001340C) # addiu $a2, $a2, 0x340c
/* 00416B24 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00416B28 02002025 */  move  $a0, $s0
/* 00416B2C 8FA50034 */  lw    $a1, 0x34($sp)
/* 00416B30 8F9987E0 */  lw    $t9, %call16(write_cardinal)($gp)
/* 00416B34 2406000C */  li    $a2, 12
/* 00416B38 2407000A */  li    $a3, 10
/* 00416B3C 0320F809 */  jalr  $t9
/* 00416B40 00000000 */   nop   
/* 00416B44 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00416B48 8F9987CC */  lw    $t9, %call16(writeln)($gp)
/* 00416B4C 8F848954 */  lw     $a0, %got(output)($gp)
/* 00416B50 0320F809 */  jalr  $t9
/* 00416B54 8C840000 */   lw    $a0, ($a0)
/* 00416B58 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00416B5C 8FBF0024 */  lw    $ra, 0x24($sp)
.L00416B60:
/* 00416B60 8FB0001C */  lw    $s0, 0x1c($sp)
/* 00416B64 27BD0028 */  addiu $sp, $sp, 0x28
/* 00416B68 03E00008 */  jr    $ra
/* 00416B6C 00000000 */   nop   
    .type emit_rrri, @function
    .size emit_rrri, .-emit_rrri
    .end emit_rrri

glabel emit_rr
    .ent emit_rr
    # 0041D534 func_0041D534
    # 0041D958 func_0041D958
    # 0041E468 dw_emit_rrr
    # 0041FC98 dw_emit_rri
    # 00420360 func_00420360
    # 00420524 func_00420524
    # 00420654 func_00420654
    # 004206C0 dw_emit_rr
    # 00421170 gen_entry
    # 004219E8 gen_reg_save_restore
    # 00422764 gen_reg_save
    # 00423518 move_two_regs
    # 00423D28 jump
    # 00424240 trap
    # 00425AA0 move_to_dest
    # 00426EF0 iloadistore
    # 00427620 rloadrstore
    # 004285F0 eval_fp_cond
    # 004287AC eval_fp_min_max
    # 00428C38 copy
    # 0042BDAC eval
    # 004330EC eval_int_flt_cvt
    # 00433494 eval_flt_int_cvt
    # 00434878 eval_flt_flt_cvt
    # 00439F88 copy_reg
/* 00416B70 3C1C0FC1 */  .cpload $t9
/* 00416B74 279C8EE0 */  
/* 00416B78 0399E021 */  
/* 00416B7C 8F88897C */  lw     $t0, %got(i_ptr)($gp)
/* 00416B80 8F878978 */  lw     $a3, %got(ibuffer)($gp)
/* 00416B84 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 00416B88 8D0F0000 */  lw    $t7, ($t0)
/* 00416B8C 8CEE0000 */  lw    $t6, ($a3)
/* 00416B90 AFBF0024 */  sw    $ra, 0x24($sp)
/* 00416B94 000FC100 */  sll   $t8, $t7, 4
/* 00416B98 AFBC0020 */  sw    $gp, 0x20($sp)
/* 00416B9C AFB0001C */  sw    $s0, 0x1c($sp)
/* 00416BA0 AFA40028 */  sw    $a0, 0x28($sp)
/* 00416BA4 AFA5002C */  sw    $a1, 0x2c($sp)
/* 00416BA8 AFA60030 */  sw    $a2, 0x30($sp)
/* 00416BAC 01D81021 */  addu  $v0, $t6, $t8
/* 00416BB0 9059FFF5 */  lbu   $t9, -0xb($v0)
/* 00416BB4 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00416BB8 3C01FFFC */  lui   $at, 0xfffc
/* 00416BBC 332BFFC0 */  andi  $t3, $t9, 0xffc0
/* 00416BC0 356C0017 */  ori   $t4, $t3, 0x17
/* 00416BC4 A04C0005 */  sb    $t4, 5($v0)
/* 00416BC8 8D0F0000 */  lw    $t7, ($t0)
/* 00416BCC 8CED0000 */  lw    $t5, ($a3)
/* 00416BD0 97B8002A */  lhu   $t8, 0x2a($sp)
/* 00416BD4 000F7100 */  sll   $t6, $t7, 4
/* 00416BD8 01AE1021 */  addu  $v0, $t5, $t6
/* 00416BDC 9449FFF6 */  lhu   $t1, -0xa($v0)
/* 00416BE0 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00416BE4 34213FFF */  ori   $at, $at, 0x3fff
/* 00416BE8 0009CD80 */  sll   $t9, $t1, 0x16
/* 00416BEC 00195DC2 */  srl   $t3, $t9, 0x17
/* 00416BF0 030B6026 */  xor   $t4, $t8, $t3
/* 00416BF4 000C7DC0 */  sll   $t7, $t4, 0x17
/* 00416BF8 000F6D82 */  srl   $t5, $t7, 0x16
/* 00416BFC 01A97026 */  xor   $t6, $t5, $t1
/* 00416C00 A44E0006 */  sh    $t6, 6($v0)
/* 00416C04 8D180000 */  lw    $t8, ($t0)
/* 00416C08 8CF90000 */  lw    $t9, ($a3)
/* 00416C0C 00185900 */  sll   $t3, $t8, 4
/* 00416C10 032B1021 */  addu  $v0, $t9, $t3
/* 00416C14 8C4CFFF8 */  lw    $t4, -8($v0)
/* 00416C18 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00416C1C 01817824 */  and   $t7, $t4, $at
/* 00416C20 3C010001 */  lui   $at, 1
/* 00416C24 34214000 */  ori   $at, $at, 0x4000
/* 00416C28 01E16825 */  or    $t5, $t7, $at
/* 00416C2C AC4D0008 */  sw    $t5, 8($v0)
/* 00416C30 8D180000 */  lw    $t8, ($t0)
/* 00416C34 8CEE0000 */  lw    $t6, ($a3)
/* 00416C38 0018C900 */  sll   $t9, $t8, 4
/* 00416C3C 01D95821 */  addu  $t3, $t6, $t9
/* 00416C40 AD60FFF0 */  sw    $zero, -0x10($t3)
/* 00416C44 8D0F0000 */  lw    $t7, ($t0)
/* 00416C48 8CEC0000 */  lw    $t4, ($a3)
/* 00416C4C 93B8002F */  lbu   $t8, 0x2f($sp)
/* 00416C50 000F6900 */  sll   $t5, $t7, 4
/* 00416C54 018D1021 */  addu  $v0, $t4, $t5
/* 00416C58 8C43FFF8 */  lw    $v1, -8($v0)
/* 00416C5C 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00416C60 00037642 */  srl   $t6, $v1, 0x19
/* 00416C64 030EC826 */  xor   $t9, $t8, $t6
/* 00416C68 00195E40 */  sll   $t3, $t9, 0x19
/* 00416C6C 01637826 */  xor   $t7, $t3, $v1
/* 00416C70 AC4F0008 */  sw    $t7, 8($v0)
/* 00416C74 8D0D0000 */  lw    $t5, ($t0)
/* 00416C78 8CEC0000 */  lw    $t4, ($a3)
/* 00416C7C 93AE0033 */  lbu   $t6, 0x33($sp)
/* 00416C80 000DC100 */  sll   $t8, $t5, 4
/* 00416C84 01981021 */  addu  $v0, $t4, $t8
/* 00416C88 8C43FFF8 */  lw    $v1, -8($v0)
/* 00416C8C 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00416C90 0003C9C0 */  sll   $t9, $v1, 7
/* 00416C94 00195E42 */  srl   $t3, $t9, 0x19
/* 00416C98 01CB7826 */  xor   $t7, $t6, $t3
/* 00416C9C 000F6E40 */  sll   $t5, $t7, 0x19
/* 00416CA0 000D61C2 */  srl   $t4, $t5, 7
/* 00416CA4 8F998984 */  lw     $t9, %got(d_ptr)($gp)
/* 00416CA8 0183C026 */  xor   $t8, $t4, $v1
/* 00416CAC AC580008 */  sw    $t8, 8($v0)
/* 00416CB0 8D0A0000 */  lw    $t2, ($t0)
/* 00416CB4 8F390000 */  lw    $t9, ($t9)
/* 00416CB8 172A0007 */  bne   $t9, $t2, .L00416CD8
/* 00416CBC 00000000 */   nop   
/* 00416CC0 8F9981D4 */  lw    $t9, %call16(grow_ibuffer)($gp)
/* 00416CC4 0320F809 */  jalr  $t9
/* 00416CC8 00000000 */   nop   
/* 00416CCC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00416CD0 8F88897C */  lw     $t0, %got(i_ptr)($gp)
/* 00416CD4 8D0A0000 */  lw    $t2, ($t0)
.L00416CD8:
/* 00416CD8 8F8B89E0 */  lw     $t3, %got(debug_ugen)($gp)
/* 00416CDC 254E0001 */  addiu $t6, $t2, 1
/* 00416CE0 AD0E0000 */  sw    $t6, ($t0)
/* 00416CE4 916B0000 */  lbu   $t3, ($t3)
/* 00416CE8 24060009 */  li    $a2, 9
/* 00416CEC 5160003F */  beql  $t3, $zero, .L00416DEC
/* 00416CF0 8FBF0024 */   lw    $ra, 0x24($sp)
/* 00416CF4 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 00416CF8 8F848954 */  lw     $a0, %got(output)($gp)
/* 00416CFC 8F858038 */  lw    $a1, %got(RO_100095DD)($gp)
/* 00416D00 24070009 */  li    $a3, 9
/* 00416D04 8C840000 */  lw    $a0, ($a0)
/* 00416D08 0320F809 */  jalr  $t9
/* 00416D0C 24A595DD */   addiu $a1, %lo(RO_100095DD) # addiu $a1, $a1, -0x6a23
/* 00416D10 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00416D14 240F000A */  li    $t7, 10
/* 00416D18 AFAF0010 */  sw    $t7, 0x10($sp)
/* 00416D1C 8F908954 */  lw     $s0, %got(output)($gp)
/* 00416D20 8F9987D8 */  lw    $t9, %call16(write_enum)($gp)
/* 00416D24 8F868038 */  lw    $a2, %got(D_10012570)($gp)
/* 00416D28 8E100000 */  lw    $s0, ($s0)
/* 00416D2C 97A5002A */  lhu   $a1, 0x2a($sp)
/* 00416D30 00003825 */  move  $a3, $zero
/* 00416D34 24C62570 */  addiu $a2, %lo(D_10012570) # addiu $a2, $a2, 0x2570
/* 00416D38 0320F809 */  jalr  $t9
/* 00416D3C 02002025 */   move  $a0, $s0
/* 00416D40 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00416D44 02002025 */  move  $a0, $s0
/* 00416D48 24050020 */  li    $a1, 32
/* 00416D4C 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 00416D50 24060001 */  li    $a2, 1
/* 00416D54 2407000A */  li    $a3, 10
/* 00416D58 0320F809 */  jalr  $t9
/* 00416D5C 00000000 */   nop   
/* 00416D60 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00416D64 240D000A */  li    $t5, 10
/* 00416D68 AFAD0010 */  sw    $t5, 0x10($sp)
/* 00416D6C 8F9987D8 */  lw    $t9, %call16(write_enum)($gp)
/* 00416D70 8F868038 */  lw    $a2, %got(D_1001340C)($gp)
/* 00416D74 02002025 */  move  $a0, $s0
/* 00416D78 93A5002F */  lbu   $a1, 0x2f($sp)
/* 00416D7C 00003825 */  move  $a3, $zero
/* 00416D80 0320F809 */  jalr  $t9
/* 00416D84 24C6340C */   addiu $a2, %lo(D_1001340C) # addiu $a2, $a2, 0x340c
/* 00416D88 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00416D8C 02002025 */  move  $a0, $s0
/* 00416D90 24050020 */  li    $a1, 32
/* 00416D94 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 00416D98 24060001 */  li    $a2, 1
/* 00416D9C 2407000A */  li    $a3, 10
/* 00416DA0 0320F809 */  jalr  $t9
/* 00416DA4 00000000 */   nop   
/* 00416DA8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00416DAC 240C000A */  li    $t4, 10
/* 00416DB0 AFAC0010 */  sw    $t4, 0x10($sp)
/* 00416DB4 8F9987D8 */  lw    $t9, %call16(write_enum)($gp)
/* 00416DB8 8F868038 */  lw    $a2, %got(D_1001340C)($gp)
/* 00416DBC 02002025 */  move  $a0, $s0
/* 00416DC0 93A50033 */  lbu   $a1, 0x33($sp)
/* 00416DC4 00003825 */  move  $a3, $zero
/* 00416DC8 0320F809 */  jalr  $t9
/* 00416DCC 24C6340C */   addiu $a2, %lo(D_1001340C) # addiu $a2, $a2, 0x340c
/* 00416DD0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00416DD4 02002025 */  move  $a0, $s0
/* 00416DD8 8F9987CC */  lw    $t9, %call16(writeln)($gp)
/* 00416DDC 0320F809 */  jalr  $t9
/* 00416DE0 00000000 */   nop   
/* 00416DE4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00416DE8 8FBF0024 */  lw    $ra, 0x24($sp)
.L00416DEC:
/* 00416DEC 8FB0001C */  lw    $s0, 0x1c($sp)
/* 00416DF0 27BD0028 */  addiu $sp, $sp, 0x28
/* 00416DF4 03E00008 */  jr    $ra
/* 00416DF8 00000000 */   nop   
    .type emit_rr, @function
    .size emit_rr, .-emit_rr
    .end emit_rr

glabel emit_a
    .ent emit_a
    # 0042BDAC eval
/* 00416DFC 3C1C0FC1 */  .cpload $t9
/* 00416E00 279C8C54 */  
/* 00416E04 0399E021 */  
/* 00416E08 8F88897C */  lw     $t0, %got(i_ptr)($gp)
/* 00416E0C 8F838978 */  lw     $v1, %got(ibuffer)($gp)
/* 00416E10 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 00416E14 8D0F0000 */  lw    $t7, ($t0)
/* 00416E18 8C6E0000 */  lw    $t6, ($v1)
/* 00416E1C AFBF0024 */  sw    $ra, 0x24($sp)
/* 00416E20 000FC100 */  sll   $t8, $t7, 4
/* 00416E24 AFBC0020 */  sw    $gp, 0x20($sp)
/* 00416E28 AFA40030 */  sw    $a0, 0x30($sp)
/* 00416E2C AFA60038 */  sw    $a2, 0x38($sp)
/* 00416E30 AFA7003C */  sw    $a3, 0x3c($sp)
/* 00416E34 01D81021 */  addu  $v0, $t6, $t8
/* 00416E38 9059FFF5 */  lbu   $t9, -0xb($v0)
/* 00416E3C 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00416E40 3C01FFFC */  lui   $at, 0xfffc
/* 00416E44 332CFFC0 */  andi  $t4, $t9, 0xffc0
/* 00416E48 358D0017 */  ori   $t5, $t4, 0x17
/* 00416E4C A04D0005 */  sb    $t5, 5($v0)
/* 00416E50 8D0E0000 */  lw    $t6, ($t0)
/* 00416E54 8C6F0000 */  lw    $t7, ($v1)
/* 00416E58 97B90032 */  lhu   $t9, 0x32($sp)
/* 00416E5C 000EC100 */  sll   $t8, $t6, 4
/* 00416E60 01F81021 */  addu  $v0, $t7, $t8
/* 00416E64 9449FFF6 */  lhu   $t1, -0xa($v0)
/* 00416E68 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00416E6C 34213FFF */  ori   $at, $at, 0x3fff
/* 00416E70 00096580 */  sll   $t4, $t1, 0x16
/* 00416E74 000C6DC2 */  srl   $t5, $t4, 0x17
/* 00416E78 032D7026 */  xor   $t6, $t9, $t5
/* 00416E7C 000E7DC0 */  sll   $t7, $t6, 0x17
/* 00416E80 000FC582 */  srl   $t8, $t7, 0x16
/* 00416E84 03096026 */  xor   $t4, $t8, $t1
/* 00416E88 A44C0006 */  sh    $t4, 6($v0)
/* 00416E8C 8D0D0000 */  lw    $t5, ($t0)
/* 00416E90 8C790000 */  lw    $t9, ($v1)
/* 00416E94 000D7100 */  sll   $t6, $t5, 4
/* 00416E98 032E1021 */  addu  $v0, $t9, $t6
/* 00416E9C 8C4FFFF8 */  lw    $t7, -8($v0)
/* 00416EA0 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00416EA4 01E1C024 */  and   $t8, $t7, $at
/* 00416EA8 3C010001 */  lui   $at, 1
/* 00416EAC 34218000 */  ori   $at, $at, 0x8000
/* 00416EB0 03016025 */  or    $t4, $t8, $at
/* 00416EB4 AC4C0008 */  sw    $t4, 8($v0)
/* 00416EB8 8D190000 */  lw    $t9, ($t0)
/* 00416EBC 8C6D0000 */  lw    $t5, ($v1)
/* 00416EC0 3C0101FF */  lui   $at, 0x1ff
/* 00416EC4 00197100 */  sll   $t6, $t9, 4
/* 00416EC8 01AE7821 */  addu  $t7, $t5, $t6
/* 00416ECC ADE5FFF0 */  sw    $a1, -0x10($t7)
/* 00416ED0 8D190000 */  lw    $t9, ($t0)
/* 00416ED4 8C6C0000 */  lw    $t4, ($v1)
/* 00416ED8 8FB80038 */  lw    $t8, 0x38($sp)
/* 00416EDC 00196900 */  sll   $t5, $t9, 4
/* 00416EE0 018D7021 */  addu  $t6, $t4, $t5
/* 00416EE4 ADD8FFFC */  sw    $t8, -4($t6)
/* 00416EE8 8D190000 */  lw    $t9, ($t0)
/* 00416EEC 8C6F0000 */  lw    $t7, ($v1)
/* 00416EF0 3421FFFF */  ori   $at, $at, 0xffff
/* 00416EF4 00196100 */  sll   $t4, $t9, 4
/* 00416EF8 01EC1021 */  addu  $v0, $t7, $t4
/* 00416EFC 8C4DFFF8 */  lw    $t5, -8($v0)
/* 00416F00 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00416F04 01A1C024 */  and   $t8, $t5, $at
/* 00416F08 3C019000 */  lui   $at, 0x9000
/* 00416F0C 03017025 */  or    $t6, $t8, $at
/* 00416F10 AC4E0008 */  sw    $t6, 8($v0)
/* 00416F14 8D0F0000 */  lw    $t7, ($t0)
/* 00416F18 8C790000 */  lw    $t9, ($v1)
/* 00416F1C 3C01FE03 */  lui   $at, 0xfe03
/* 00416F20 000F6100 */  sll   $t4, $t7, 4
/* 00416F24 032C1021 */  addu  $v0, $t9, $t4
/* 00416F28 8C4DFFF8 */  lw    $t5, -8($v0)
/* 00416F2C 3421FFFF */  ori   $at, $at, 0xffff
/* 00416F30 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00416F34 01A1C024 */  and   $t8, $t5, $at
/* 00416F38 3C010120 */  lui   $at, 0x120
/* 00416F3C 03017025 */  or    $t6, $t8, $at
/* 00416F40 AC4E0008 */  sw    $t6, 8($v0)
/* 00416F44 8D190000 */  lw    $t9, ($t0)
/* 00416F48 8C6F0000 */  lw    $t7, ($v1)
/* 00416F4C 00196100 */  sll   $t4, $t9, 4
/* 00416F50 01EC1021 */  addu  $v0, $t7, $t4
/* 00416F54 8C4AFFF4 */  lw    $t2, -0xc($v0)
/* 00416F58 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00416F5C 000A69C0 */  sll   $t5, $t2, 7
/* 00416F60 000DC742 */  srl   $t8, $t5, 0x1d
/* 00416F64 00F87026 */  xor   $t6, $a3, $t8
/* 00416F68 000ECF40 */  sll   $t9, $t6, 0x1d
/* 00416F6C 001979C2 */  srl   $t7, $t9, 7
/* 00416F70 8F8D8984 */  lw     $t5, %got(d_ptr)($gp)
/* 00416F74 01EA6026 */  xor   $t4, $t7, $t2
/* 00416F78 AC4C0004 */  sw    $t4, 4($v0)
/* 00416F7C 8D0B0000 */  lw    $t3, ($t0)
/* 00416F80 8DAD0000 */  lw    $t5, ($t5)
/* 00416F84 15AB0007 */  bne   $t5, $t3, .L00416FA4
/* 00416F88 00000000 */   nop   
/* 00416F8C 8F9981D4 */  lw    $t9, %call16(grow_ibuffer)($gp)
/* 00416F90 0320F809 */  jalr  $t9
/* 00416F94 00000000 */   nop   
/* 00416F98 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00416F9C 8F88897C */  lw     $t0, %got(i_ptr)($gp)
/* 00416FA0 8D0B0000 */  lw    $t3, ($t0)
.L00416FA4:
/* 00416FA4 8F9989E0 */  lw     $t9, %got(debug_ugen)($gp)
/* 00416FA8 25780001 */  addiu $t8, $t3, 1
/* 00416FAC AD180000 */  sw    $t8, ($t0)
/* 00416FB0 93390000 */  lbu   $t9, ($t9)
/* 00416FB4 8F818A94 */  lw     $at, %got(has_calls)($gp)
/* 00416FB8 240E0001 */  li    $t6, 1
/* 00416FBC 13200023 */  beqz  $t9, .L0041704C
/* 00416FC0 A02E0000 */   sb    $t6, ($at)
/* 00416FC4 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 00416FC8 8F848954 */  lw     $a0, %got(output)($gp)
/* 00416FCC 8F858038 */  lw    $a1, %got(RO_100095E6)($gp)
/* 00416FD0 24060008 */  li    $a2, 8
/* 00416FD4 24070008 */  li    $a3, 8
/* 00416FD8 8C840000 */  lw    $a0, ($a0)
/* 00416FDC 0320F809 */  jalr  $t9
/* 00416FE0 24A595E6 */   addiu $a1, %lo(RO_100095E6) # addiu $a1, $a1, -0x6a1a
/* 00416FE4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00416FE8 240F000A */  li    $t7, 10
/* 00416FEC AFAF0010 */  sw    $t7, 0x10($sp)
/* 00416FF0 8F848954 */  lw     $a0, %got(output)($gp)
/* 00416FF4 8F9987D8 */  lw    $t9, %call16(write_enum)($gp)
/* 00416FF8 8F868038 */  lw    $a2, %got(D_10012570)($gp)
/* 00416FFC 8C840000 */  lw    $a0, ($a0)
/* 00417000 97A50032 */  lhu   $a1, 0x32($sp)
/* 00417004 00003825 */  move  $a3, $zero
/* 00417008 24C62570 */  addiu $a2, %lo(D_10012570) # addiu $a2, $a2, 0x2570
/* 0041700C 0320F809 */  jalr  $t9
/* 00417010 AFA40028 */   sw    $a0, 0x28($sp)
/* 00417014 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00417018 8FA40028 */  lw    $a0, 0x28($sp)
/* 0041701C 8FA50038 */  lw    $a1, 0x38($sp)
/* 00417020 8F9987DC */  lw    $t9, %call16(write_integer)($gp)
/* 00417024 2406000C */  li    $a2, 12
/* 00417028 2407000A */  li    $a3, 10
/* 0041702C 0320F809 */  jalr  $t9
/* 00417030 00000000 */   nop   
/* 00417034 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00417038 8F9987CC */  lw    $t9, %call16(writeln)($gp)
/* 0041703C 8F848954 */  lw     $a0, %got(output)($gp)
/* 00417040 0320F809 */  jalr  $t9
/* 00417044 8C840000 */   lw    $a0, ($a0)
/* 00417048 8FBC0020 */  lw    $gp, 0x20($sp)
.L0041704C:
/* 0041704C 8FBF0024 */  lw    $ra, 0x24($sp)
/* 00417050 27BD0030 */  addiu $sp, $sp, 0x30
/* 00417054 03E00008 */  jr    $ra
/* 00417058 00000000 */   nop   
    .type emit_a, @function
    .size emit_a, .-emit_a
    .end emit_a

glabel emit_r
    .ent emit_r
    # 00420810 gen_entry_exit
    # 0042BDAC eval
/* 0041705C 3C1C0FC1 */  .cpload $t9
/* 00417060 279C89F4 */  
/* 00417064 0399E021 */  
/* 00417068 8F86897C */  lw     $a2, %got(i_ptr)($gp)
/* 0041706C 8F838978 */  lw     $v1, %got(ibuffer)($gp)
/* 00417070 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 00417074 8CCF0000 */  lw    $t7, ($a2)
/* 00417078 8C6E0000 */  lw    $t6, ($v1)
/* 0041707C AFBF0024 */  sw    $ra, 0x24($sp)
/* 00417080 000FC100 */  sll   $t8, $t7, 4
/* 00417084 AFBC0020 */  sw    $gp, 0x20($sp)
/* 00417088 AFB0001C */  sw    $s0, 0x1c($sp)
/* 0041708C AFA40028 */  sw    $a0, 0x28($sp)
/* 00417090 AFA5002C */  sw    $a1, 0x2c($sp)
/* 00417094 01D81021 */  addu  $v0, $t6, $t8
/* 00417098 9059FFF5 */  lbu   $t9, -0xb($v0)
/* 0041709C 2442FFF0 */  addiu $v0, $v0, -0x10
/* 004170A0 3C01FFFC */  lui   $at, 0xfffc
/* 004170A4 332AFFC0 */  andi  $t2, $t9, 0xffc0
/* 004170A8 354B0017 */  ori   $t3, $t2, 0x17
/* 004170AC A04B0005 */  sb    $t3, 5($v0)
/* 004170B0 8CCD0000 */  lw    $t5, ($a2)
/* 004170B4 8C6C0000 */  lw    $t4, ($v1)
/* 004170B8 97AE002A */  lhu   $t6, 0x2a($sp)
/* 004170BC 000D7900 */  sll   $t7, $t5, 4
/* 004170C0 018F1021 */  addu  $v0, $t4, $t7
/* 004170C4 9447FFF6 */  lhu   $a3, -0xa($v0)
/* 004170C8 2442FFF0 */  addiu $v0, $v0, -0x10
/* 004170CC 34213FFF */  ori   $at, $at, 0x3fff
/* 004170D0 0007C580 */  sll   $t8, $a3, 0x16
/* 004170D4 0018CDC2 */  srl   $t9, $t8, 0x17
/* 004170D8 01D95026 */  xor   $t2, $t6, $t9
/* 004170DC 000A5DC0 */  sll   $t3, $t2, 0x17
/* 004170E0 000B6D82 */  srl   $t5, $t3, 0x16
/* 004170E4 01A76026 */  xor   $t4, $t5, $a3
/* 004170E8 A44C0006 */  sh    $t4, 6($v0)
/* 004170EC 8CD80000 */  lw    $t8, ($a2)
/* 004170F0 8C6F0000 */  lw    $t7, ($v1)
/* 004170F4 00187100 */  sll   $t6, $t8, 4
/* 004170F8 01EE1021 */  addu  $v0, $t7, $t6
/* 004170FC 8C59FFF8 */  lw    $t9, -8($v0)
/* 00417100 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00417104 03215024 */  and   $t2, $t9, $at
/* 00417108 3C010001 */  lui   $at, 1
/* 0041710C 3421C000 */  ori   $at, $at, 0xc000
/* 00417110 01415825 */  or    $t3, $t2, $at
/* 00417114 AC4B0008 */  sw    $t3, 8($v0)
/* 00417118 8CCC0000 */  lw    $t4, ($a2)
/* 0041711C 8C6D0000 */  lw    $t5, ($v1)
/* 00417120 93AF002F */  lbu   $t7, 0x2f($sp)
/* 00417124 000CC100 */  sll   $t8, $t4, 4
/* 00417128 01B81021 */  addu  $v0, $t5, $t8
/* 0041712C 8C48FFF8 */  lw    $t0, -8($v0)
/* 00417130 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00417134 3C01FE03 */  lui   $at, 0xfe03
/* 00417138 00087642 */  srl   $t6, $t0, 0x19
/* 0041713C 01EEC826 */  xor   $t9, $t7, $t6
/* 00417140 00195640 */  sll   $t2, $t9, 0x19
/* 00417144 01485826 */  xor   $t3, $t2, $t0
/* 00417148 AC4B0008 */  sw    $t3, 8($v0)
/* 0041714C 8CCD0000 */  lw    $t5, ($a2)
/* 00417150 8C6C0000 */  lw    $t4, ($v1)
/* 00417154 3421FFFF */  ori   $at, $at, 0xffff
/* 00417158 000DC100 */  sll   $t8, $t5, 4
/* 0041715C 01981021 */  addu  $v0, $t4, $t8
/* 00417160 8C4FFFF8 */  lw    $t7, -8($v0)
/* 00417164 8F988984 */  lw     $t8, %got(d_ptr)($gp)
/* 00417168 2442FFF0 */  addiu $v0, $v0, -0x10
/* 0041716C 01E17024 */  and   $t6, $t7, $at
/* 00417170 3C010120 */  lui   $at, 0x120
/* 00417174 01C1C825 */  or    $t9, $t6, $at
/* 00417178 AC590008 */  sw    $t9, 8($v0)
/* 0041717C 8CCB0000 */  lw    $t3, ($a2)
/* 00417180 8C6A0000 */  lw    $t2, ($v1)
/* 00417184 000B6900 */  sll   $t5, $t3, 4
/* 00417188 014D6021 */  addu  $t4, $t2, $t5
/* 0041718C AD80FFF0 */  sw    $zero, -0x10($t4)
/* 00417190 8CC90000 */  lw    $t1, ($a2)
/* 00417194 8F180000 */  lw    $t8, ($t8)
/* 00417198 57090008 */  bnel  $t8, $t1, .L004171BC
/* 0041719C 97AE002A */   lhu   $t6, 0x2a($sp)
/* 004171A0 8F9981D4 */  lw    $t9, %call16(grow_ibuffer)($gp)
/* 004171A4 0320F809 */  jalr  $t9
/* 004171A8 00000000 */   nop   
/* 004171AC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004171B0 8F86897C */  lw     $a2, %got(i_ptr)($gp)
/* 004171B4 8CC90000 */  lw    $t1, ($a2)
/* 004171B8 97AE002A */  lhu   $t6, 0x2a($sp)
.L004171BC:
/* 004171BC 252F0001 */  addiu $t7, $t1, 1
/* 004171C0 24010023 */  li    $at, 35
/* 004171C4 15C10004 */  bne   $t6, $at, .L004171D8
/* 004171C8 ACCF0000 */   sw    $t7, ($a2)
/* 004171CC 8F818A94 */  lw     $at, %got(has_calls)($gp)
/* 004171D0 24190001 */  li    $t9, 1
/* 004171D4 A0390000 */  sb    $t9, ($at)
.L004171D8:
/* 004171D8 8F8B89E0 */  lw     $t3, %got(debug_ugen)($gp)
/* 004171DC 24060008 */  li    $a2, 8
/* 004171E0 916B0000 */  lbu   $t3, ($t3)
/* 004171E4 5160002D */  beql  $t3, $zero, .L0041729C
/* 004171E8 8FBF0024 */   lw    $ra, 0x24($sp)
/* 004171EC 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 004171F0 8F848954 */  lw     $a0, %got(output)($gp)
/* 004171F4 8F858038 */  lw    $a1, %got(RO_100095EE)($gp)
/* 004171F8 24070008 */  li    $a3, 8
/* 004171FC 8C840000 */  lw    $a0, ($a0)
/* 00417200 0320F809 */  jalr  $t9
/* 00417204 24A595EE */   addiu $a1, %lo(RO_100095EE) # addiu $a1, $a1, -0x6a12
/* 00417208 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041720C 240A000A */  li    $t2, 10
/* 00417210 AFAA0010 */  sw    $t2, 0x10($sp)
/* 00417214 8F908954 */  lw     $s0, %got(output)($gp)
/* 00417218 8F9987D8 */  lw    $t9, %call16(write_enum)($gp)
/* 0041721C 8F868038 */  lw    $a2, %got(D_10012570)($gp)
/* 00417220 8E100000 */  lw    $s0, ($s0)
/* 00417224 97A5002A */  lhu   $a1, 0x2a($sp)
/* 00417228 00003825 */  move  $a3, $zero
/* 0041722C 24C62570 */  addiu $a2, %lo(D_10012570) # addiu $a2, $a2, 0x2570
/* 00417230 0320F809 */  jalr  $t9
/* 00417234 02002025 */   move  $a0, $s0
/* 00417238 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041723C 02002025 */  move  $a0, $s0
/* 00417240 24050020 */  li    $a1, 32
/* 00417244 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 00417248 24060001 */  li    $a2, 1
/* 0041724C 2407000A */  li    $a3, 10
/* 00417250 0320F809 */  jalr  $t9
/* 00417254 00000000 */   nop   
/* 00417258 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041725C 240D000A */  li    $t5, 10
/* 00417260 AFAD0010 */  sw    $t5, 0x10($sp)
/* 00417264 8F9987D8 */  lw    $t9, %call16(write_enum)($gp)
/* 00417268 8F868038 */  lw    $a2, %got(D_1001340C)($gp)
/* 0041726C 02002025 */  move  $a0, $s0
/* 00417270 93A5002F */  lbu   $a1, 0x2f($sp)
/* 00417274 00003825 */  move  $a3, $zero
/* 00417278 0320F809 */  jalr  $t9
/* 0041727C 24C6340C */   addiu $a2, %lo(D_1001340C) # addiu $a2, $a2, 0x340c
/* 00417280 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00417284 02002025 */  move  $a0, $s0
/* 00417288 8F9987CC */  lw    $t9, %call16(writeln)($gp)
/* 0041728C 0320F809 */  jalr  $t9
/* 00417290 00000000 */   nop   
/* 00417294 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00417298 8FBF0024 */  lw    $ra, 0x24($sp)
.L0041729C:
/* 0041729C 8FB0001C */  lw    $s0, 0x1c($sp)
/* 004172A0 27BD0028 */  addiu $sp, $sp, 0x28
/* 004172A4 03E00008 */  jr    $ra
/* 004172A8 00000000 */   nop   
    .type emit_r, @function
    .size emit_r, .-emit_r
    .end emit_r

glabel emit_i
    .ent emit_i
    # 00424240 trap
    # 0042BDAC eval
    # 004340D4 func_004340D4
/* 004172AC 3C1C0FC1 */  .cpload $t9
/* 004172B0 279C87A4 */  
/* 004172B4 0399E021 */  
/* 004172B8 8F86897C */  lw     $a2, %got(i_ptr)($gp)
/* 004172BC 8F838978 */  lw     $v1, %got(ibuffer)($gp)
/* 004172C0 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 004172C4 8CCF0000 */  lw    $t7, ($a2)
/* 004172C8 8C6E0000 */  lw    $t6, ($v1)
/* 004172CC AFBF0024 */  sw    $ra, 0x24($sp)
/* 004172D0 000FC100 */  sll   $t8, $t7, 4
/* 004172D4 AFBC0020 */  sw    $gp, 0x20($sp)
/* 004172D8 AFA40030 */  sw    $a0, 0x30($sp)
/* 004172DC AFA50034 */  sw    $a1, 0x34($sp)
/* 004172E0 01D81021 */  addu  $v0, $t6, $t8
/* 004172E4 9059FFF5 */  lbu   $t9, -0xb($v0)
/* 004172E8 2442FFF0 */  addiu $v0, $v0, -0x10
/* 004172EC 3C01FFFC */  lui   $at, 0xfffc
/* 004172F0 3329FFC0 */  andi  $t1, $t9, 0xffc0
/* 004172F4 352A0017 */  ori   $t2, $t1, 0x17
/* 004172F8 A04A0005 */  sb    $t2, 5($v0)
/* 004172FC 8CCC0000 */  lw    $t4, ($a2)
/* 00417300 8C6B0000 */  lw    $t3, ($v1)
/* 00417304 97AF0032 */  lhu   $t7, 0x32($sp)
/* 00417308 000C6900 */  sll   $t5, $t4, 4
/* 0041730C 016D1021 */  addu  $v0, $t3, $t5
/* 00417310 9447FFF6 */  lhu   $a3, -0xa($v0)
/* 00417314 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00417318 34213FFF */  ori   $at, $at, 0x3fff
/* 0041731C 00077580 */  sll   $t6, $a3, 0x16
/* 00417320 000EC5C2 */  srl   $t8, $t6, 0x17
/* 00417324 01F8C826 */  xor   $t9, $t7, $t8
/* 00417328 00194DC0 */  sll   $t1, $t9, 0x17
/* 0041732C 00095582 */  srl   $t2, $t1, 0x16
/* 00417330 01476026 */  xor   $t4, $t2, $a3
/* 00417334 A44C0006 */  sh    $t4, 6($v0)
/* 00417338 8CCD0000 */  lw    $t5, ($a2)
/* 0041733C 8C6B0000 */  lw    $t3, ($v1)
/* 00417340 000D7100 */  sll   $t6, $t5, 4
/* 00417344 016E1021 */  addu  $v0, $t3, $t6
/* 00417348 8C4FFFF8 */  lw    $t7, -8($v0)
/* 0041734C 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00417350 01E1C024 */  and   $t8, $t7, $at
/* 00417354 3C010003 */  lui   $at, 3
/* 00417358 34214000 */  ori   $at, $at, 0x4000
/* 0041735C 0301C825 */  or    $t9, $t8, $at
/* 00417360 AC590008 */  sw    $t9, 8($v0)
/* 00417364 8CCC0000 */  lw    $t4, ($a2)
/* 00417368 8C6A0000 */  lw    $t2, ($v1)
/* 0041736C 8FA90034 */  lw    $t1, 0x34($sp)
/* 00417370 000C6900 */  sll   $t5, $t4, 4
/* 00417374 014D5821 */  addu  $t3, $t2, $t5
/* 00417378 AD69FFFC */  sw    $t1, -4($t3)
/* 0041737C 8CCF0000 */  lw    $t7, ($a2)
/* 00417380 8C6E0000 */  lw    $t6, ($v1)
/* 00417384 3C0101FF */  lui   $at, 0x1ff
/* 00417388 000FC100 */  sll   $t8, $t7, 4
/* 0041738C 01D81021 */  addu  $v0, $t6, $t8
/* 00417390 8C59FFF8 */  lw    $t9, -8($v0)
/* 00417394 3421FFFF */  ori   $at, $at, 0xffff
/* 00417398 2442FFF0 */  addiu $v0, $v0, -0x10
/* 0041739C 03216024 */  and   $t4, $t9, $at
/* 004173A0 3C019000 */  lui   $at, 0x9000
/* 004173A4 01815025 */  or    $t2, $t4, $at
/* 004173A8 AC4A0008 */  sw    $t2, 8($v0)
/* 004173AC 8CC90000 */  lw    $t1, ($a2)
/* 004173B0 8C6D0000 */  lw    $t5, ($v1)
/* 004173B4 3C01FE03 */  lui   $at, 0xfe03
/* 004173B8 00095900 */  sll   $t3, $t1, 4
/* 004173BC 01AB1021 */  addu  $v0, $t5, $t3
/* 004173C0 8C4FFFF8 */  lw    $t7, -8($v0)
/* 004173C4 3421FFFF */  ori   $at, $at, 0xffff
/* 004173C8 8F8D8984 */  lw     $t5, %got(d_ptr)($gp)
/* 004173CC 01E17024 */  and   $t6, $t7, $at
/* 004173D0 3C010120 */  lui   $at, 0x120
/* 004173D4 01C1C025 */  or    $t8, $t6, $at
/* 004173D8 AC58FFF8 */  sw    $t8, -8($v0)
/* 004173DC 8CCC0000 */  lw    $t4, ($a2)
/* 004173E0 8C790000 */  lw    $t9, ($v1)
/* 004173E4 2442FFF0 */  addiu $v0, $v0, -0x10
/* 004173E8 000C5100 */  sll   $t2, $t4, 4
/* 004173EC 032A4821 */  addu  $t1, $t9, $t2
/* 004173F0 AD20FFF0 */  sw    $zero, -0x10($t1)
/* 004173F4 8CC80000 */  lw    $t0, ($a2)
/* 004173F8 8DAD0000 */  lw    $t5, ($t5)
/* 004173FC 15A80007 */  bne   $t5, $t0, .L0041741C
/* 00417400 00000000 */   nop   
/* 00417404 8F9981D4 */  lw    $t9, %call16(grow_ibuffer)($gp)
/* 00417408 0320F809 */  jalr  $t9
/* 0041740C 00000000 */   nop   
/* 00417410 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00417414 8F86897C */  lw     $a2, %got(i_ptr)($gp)
/* 00417418 8CC80000 */  lw    $t0, ($a2)
.L0041741C:
/* 0041741C 8F8F89E0 */  lw     $t7, %got(debug_ugen)($gp)
/* 00417420 250B0001 */  addiu $t3, $t0, 1
/* 00417424 ACCB0000 */  sw    $t3, ($a2)
/* 00417428 91EF0000 */  lbu   $t7, ($t7)
/* 0041742C 24060008 */  li    $a2, 8
/* 00417430 51E00023 */  beql  $t7, $zero, .L004174C0
/* 00417434 8FBF0024 */   lw    $ra, 0x24($sp)
/* 00417438 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 0041743C 8F848954 */  lw     $a0, %got(output)($gp)
/* 00417440 8F858038 */  lw    $a1, %got(RO_100095F6)($gp)
/* 00417444 24070008 */  li    $a3, 8
/* 00417448 8C840000 */  lw    $a0, ($a0)
/* 0041744C 0320F809 */  jalr  $t9
/* 00417450 24A595F6 */   addiu $a1, %lo(RO_100095F6) # addiu $a1, $a1, -0x6a0a
/* 00417454 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00417458 240E000A */  li    $t6, 10
/* 0041745C AFAE0010 */  sw    $t6, 0x10($sp)
/* 00417460 8F848954 */  lw     $a0, %got(output)($gp)
/* 00417464 8F9987D8 */  lw    $t9, %call16(write_enum)($gp)
/* 00417468 8F868038 */  lw    $a2, %got(D_10012570)($gp)
/* 0041746C 8C840000 */  lw    $a0, ($a0)
/* 00417470 97A50032 */  lhu   $a1, 0x32($sp)
/* 00417474 00003825 */  move  $a3, $zero
/* 00417478 24C62570 */  addiu $a2, %lo(D_10012570) # addiu $a2, $a2, 0x2570
/* 0041747C 0320F809 */  jalr  $t9
/* 00417480 AFA40028 */   sw    $a0, 0x28($sp)
/* 00417484 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00417488 8FA40028 */  lw    $a0, 0x28($sp)
/* 0041748C 8FA50034 */  lw    $a1, 0x34($sp)
/* 00417490 8F9987DC */  lw    $t9, %call16(write_integer)($gp)
/* 00417494 2406000C */  li    $a2, 12
/* 00417498 2407000A */  li    $a3, 10
/* 0041749C 0320F809 */  jalr  $t9
/* 004174A0 00000000 */   nop   
/* 004174A4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004174A8 8F9987CC */  lw    $t9, %call16(writeln)($gp)
/* 004174AC 8F848954 */  lw     $a0, %got(output)($gp)
/* 004174B0 0320F809 */  jalr  $t9
/* 004174B4 8C840000 */   lw    $a0, ($a0)
/* 004174B8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004174BC 8FBF0024 */  lw    $ra, 0x24($sp)
.L004174C0:
/* 004174C0 27BD0030 */  addiu $sp, $sp, 0x30
/* 004174C4 03E00008 */  jr    $ra
/* 004174C8 00000000 */   nop   
    .type emit_i, @function
    .size emit_i, .-emit_i
    .end emit_i

glabel emit_rrl
    .ent emit_rrl
/* 004174CC 3C1C0FC1 */  .cpload $t9
/* 004174D0 279C8584 */  
/* 004174D4 0399E021 */  
/* 004174D8 8F89897C */  lw     $t1, %got(i_ptr)($gp)
/* 004174DC 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 004174E0 8F888978 */  lw     $t0, %got(ibuffer)($gp)
/* 004174E4 8D2F0000 */  lw    $t7, ($t1)
/* 004174E8 AFBF0024 */  sw    $ra, 0x24($sp)
/* 004174EC 8D0E0000 */  lw    $t6, ($t0)
/* 004174F0 000FC100 */  sll   $t8, $t7, 4
/* 004174F4 AFBC0020 */  sw    $gp, 0x20($sp)
/* 004174F8 AFB0001C */  sw    $s0, 0x1c($sp)
/* 004174FC AFA40028 */  sw    $a0, 0x28($sp)
/* 00417500 AFA5002C */  sw    $a1, 0x2c($sp)
/* 00417504 AFA60030 */  sw    $a2, 0x30($sp)
/* 00417508 AFA70034 */  sw    $a3, 0x34($sp)
/* 0041750C 01D81021 */  addu  $v0, $t6, $t8
/* 00417510 9059FFF5 */  lbu   $t9, -0xb($v0)
/* 00417514 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00417518 3C01FFFC */  lui   $at, 0xfffc
/* 0041751C 332CFFC0 */  andi  $t4, $t9, 0xffc0
/* 00417520 358D0017 */  ori   $t5, $t4, 0x17
/* 00417524 A04D0005 */  sb    $t5, 5($v0)
/* 00417528 8D2E0000 */  lw    $t6, ($t1)
/* 0041752C 8D0F0000 */  lw    $t7, ($t0)
/* 00417530 97B9002A */  lhu   $t9, 0x2a($sp)
/* 00417534 000EC100 */  sll   $t8, $t6, 4
/* 00417538 01F81021 */  addu  $v0, $t7, $t8
/* 0041753C 944AFFF6 */  lhu   $t2, -0xa($v0)
/* 00417540 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00417544 34213FFF */  ori   $at, $at, 0x3fff
/* 00417548 000A6580 */  sll   $t4, $t2, 0x16
/* 0041754C 000C6DC2 */  srl   $t5, $t4, 0x17
/* 00417550 032D7026 */  xor   $t6, $t9, $t5
/* 00417554 000E7DC0 */  sll   $t7, $t6, 0x17
/* 00417558 000FC582 */  srl   $t8, $t7, 0x16
/* 0041755C 030A6026 */  xor   $t4, $t8, $t2
/* 00417560 A44C0006 */  sh    $t4, 6($v0)
/* 00417564 8D2D0000 */  lw    $t5, ($t1)
/* 00417568 8D190000 */  lw    $t9, ($t0)
/* 0041756C 000D7100 */  sll   $t6, $t5, 4
/* 00417570 032E1021 */  addu  $v0, $t9, $t6
/* 00417574 8C4FFFF8 */  lw    $t7, -8($v0)
/* 00417578 2442FFF0 */  addiu $v0, $v0, -0x10
/* 0041757C 01E1C024 */  and   $t8, $t7, $at
/* 00417580 3C010002 */  lui   $at, 2
/* 00417584 03016025 */  or    $t4, $t8, $at
/* 00417588 AC4C0008 */  sw    $t4, 8($v0)
/* 0041758C 8D390000 */  lw    $t9, ($t1)
/* 00417590 8D0D0000 */  lw    $t5, ($t0)
/* 00417594 93AF002F */  lbu   $t7, 0x2f($sp)
/* 00417598 00197100 */  sll   $t6, $t9, 4
/* 0041759C 01AE1021 */  addu  $v0, $t5, $t6
/* 004175A0 8C43FFF8 */  lw    $v1, -8($v0)
/* 004175A4 2442FFF0 */  addiu $v0, $v0, -0x10
/* 004175A8 0003C642 */  srl   $t8, $v1, 0x19
/* 004175AC 01F86026 */  xor   $t4, $t7, $t8
/* 004175B0 000CCE40 */  sll   $t9, $t4, 0x19
/* 004175B4 03236826 */  xor   $t5, $t9, $v1
/* 004175B8 AC4D0008 */  sw    $t5, 8($v0)
/* 004175BC 8D2F0000 */  lw    $t7, ($t1)
/* 004175C0 8D0E0000 */  lw    $t6, ($t0)
/* 004175C4 93AC0033 */  lbu   $t4, 0x33($sp)
/* 004175C8 000FC100 */  sll   $t8, $t7, 4
/* 004175CC 01D81021 */  addu  $v0, $t6, $t8
/* 004175D0 8C43FFF8 */  lw    $v1, -8($v0)
/* 004175D4 2442FFF0 */  addiu $v0, $v0, -0x10
/* 004175D8 0003C9C0 */  sll   $t9, $v1, 7
/* 004175DC 00196E42 */  srl   $t5, $t9, 0x19
/* 004175E0 018D7826 */  xor   $t7, $t4, $t5
/* 004175E4 000F7640 */  sll   $t6, $t7, 0x19
/* 004175E8 000EC1C2 */  srl   $t8, $t6, 7
/* 004175EC 0303C826 */  xor   $t9, $t8, $v1
/* 004175F0 AC590008 */  sw    $t9, 8($v0)
/* 004175F4 8D2F0000 */  lw    $t7, ($t1)
/* 004175F8 8D0D0000 */  lw    $t5, ($t0)
/* 004175FC 8FAC0034 */  lw    $t4, 0x34($sp)
/* 00417600 000F7100 */  sll   $t6, $t7, 4
/* 00417604 8F998984 */  lw     $t9, %got(d_ptr)($gp)
/* 00417608 01AEC021 */  addu  $t8, $t5, $t6
/* 0041760C AF0CFFF0 */  sw    $t4, -0x10($t8)
/* 00417610 8D2B0000 */  lw    $t3, ($t1)
/* 00417614 8F390000 */  lw    $t9, ($t9)
/* 00417618 172B0007 */  bne   $t9, $t3, .L00417638
/* 0041761C 00000000 */   nop   
/* 00417620 8F9981D4 */  lw    $t9, %call16(grow_ibuffer)($gp)
/* 00417624 0320F809 */  jalr  $t9
/* 00417628 00000000 */   nop   
/* 0041762C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00417630 8F89897C */  lw     $t1, %got(i_ptr)($gp)
/* 00417634 8D2B0000 */  lw    $t3, ($t1)
.L00417638:
/* 00417638 8F8D89E0 */  lw     $t5, %got(debug_ugen)($gp)
/* 0041763C 256F0001 */  addiu $t7, $t3, 1
/* 00417640 AD2F0000 */  sw    $t7, ($t1)
/* 00417644 91AD0000 */  lbu   $t5, ($t5)
/* 00417648 2406000A */  li    $a2, 10
/* 0041764C 51A00047 */  beql  $t5, $zero, .L0041776C
/* 00417650 8FBF0024 */   lw    $ra, 0x24($sp)
/* 00417654 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 00417658 8F848954 */  lw     $a0, %got(output)($gp)
/* 0041765C 8F858038 */  lw    $a1, %got(RO_100095FE)($gp)
/* 00417660 2407000A */  li    $a3, 10
/* 00417664 8C840000 */  lw    $a0, ($a0)
/* 00417668 0320F809 */  jalr  $t9
/* 0041766C 24A595FE */   addiu $a1, %lo(RO_100095FE) # addiu $a1, $a1, -0x6a02
/* 00417670 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00417674 240E000A */  li    $t6, 10
/* 00417678 AFAE0010 */  sw    $t6, 0x10($sp)
/* 0041767C 8F908954 */  lw     $s0, %got(output)($gp)
/* 00417680 8F9987D8 */  lw    $t9, %call16(write_enum)($gp)
/* 00417684 8F868038 */  lw    $a2, %got(D_10012570)($gp)
/* 00417688 8E100000 */  lw    $s0, ($s0)
/* 0041768C 97A5002A */  lhu   $a1, 0x2a($sp)
/* 00417690 00003825 */  move  $a3, $zero
/* 00417694 24C62570 */  addiu $a2, %lo(D_10012570) # addiu $a2, $a2, 0x2570
/* 00417698 0320F809 */  jalr  $t9
/* 0041769C 02002025 */   move  $a0, $s0
/* 004176A0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004176A4 02002025 */  move  $a0, $s0
/* 004176A8 24050020 */  li    $a1, 32
/* 004176AC 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 004176B0 24060001 */  li    $a2, 1
/* 004176B4 2407000A */  li    $a3, 10
/* 004176B8 0320F809 */  jalr  $t9
/* 004176BC 00000000 */   nop   
/* 004176C0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004176C4 240C000A */  li    $t4, 10
/* 004176C8 AFAC0010 */  sw    $t4, 0x10($sp)
/* 004176CC 8F9987D8 */  lw    $t9, %call16(write_enum)($gp)
/* 004176D0 8F868038 */  lw    $a2, %got(D_1001340C)($gp)
/* 004176D4 02002025 */  move  $a0, $s0
/* 004176D8 93A5002F */  lbu   $a1, 0x2f($sp)
/* 004176DC 00003825 */  move  $a3, $zero
/* 004176E0 0320F809 */  jalr  $t9
/* 004176E4 24C6340C */   addiu $a2, %lo(D_1001340C) # addiu $a2, $a2, 0x340c
/* 004176E8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004176EC 02002025 */  move  $a0, $s0
/* 004176F0 24050020 */  li    $a1, 32
/* 004176F4 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 004176F8 24060001 */  li    $a2, 1
/* 004176FC 2407000A */  li    $a3, 10
/* 00417700 0320F809 */  jalr  $t9
/* 00417704 00000000 */   nop   
/* 00417708 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041770C 2418000A */  li    $t8, 10
/* 00417710 AFB80010 */  sw    $t8, 0x10($sp)
/* 00417714 8F9987D8 */  lw    $t9, %call16(write_enum)($gp)
/* 00417718 8F868038 */  lw    $a2, %got(D_1001340C)($gp)
/* 0041771C 02002025 */  move  $a0, $s0
/* 00417720 93A50033 */  lbu   $a1, 0x33($sp)
/* 00417724 00003825 */  move  $a3, $zero
/* 00417728 0320F809 */  jalr  $t9
/* 0041772C 24C6340C */   addiu $a2, %lo(D_1001340C) # addiu $a2, $a2, 0x340c
/* 00417730 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00417734 02002025 */  move  $a0, $s0
/* 00417738 8FA50034 */  lw    $a1, 0x34($sp)
/* 0041773C 8F9987E0 */  lw    $t9, %call16(write_cardinal)($gp)
/* 00417740 2406000C */  li    $a2, 12
/* 00417744 2407000A */  li    $a3, 10
/* 00417748 0320F809 */  jalr  $t9
/* 0041774C 00000000 */   nop   
/* 00417750 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00417754 8F9987CC */  lw    $t9, %call16(writeln)($gp)
/* 00417758 8F848954 */  lw     $a0, %got(output)($gp)
/* 0041775C 0320F809 */  jalr  $t9
/* 00417760 8C840000 */   lw    $a0, ($a0)
/* 00417764 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00417768 8FBF0024 */  lw    $ra, 0x24($sp)
.L0041776C:
/* 0041776C 8FB0001C */  lw    $s0, 0x1c($sp)
/* 00417770 27BD0028 */  addiu $sp, $sp, 0x28
/* 00417774 03E00008 */  jr    $ra
/* 00417778 00000000 */   nop   
    .type emit_rrl, @function
    .size emit_rrl, .-emit_rrl
    .end emit_rrl

glabel emit_rrll
    .ent emit_rrll
    # 0041AF70 func_0041AF70
    # 0041AFE4 func_0041AFE4
    # 0041B07C func_0041B07C
    # 0041B1BC func_0041B1BC
    # 0041B2FC func_0041B2FC
    # 0041B43C func_0041B43C
    # 0041B57C func_0041B57C
    # 0041B6BC func_0041B6BC
    # 0041B7FC func_0041B7FC
    # 0041B93C func_0041B93C
    # 0041BA7C emit_branch_rrll
    # 0041C388 emit_branch_rill
    # 0041C710 func_0041C710
    # 0041C7AC func_0041C7AC
    # 0041C86C func_0041C86C
    # 0041C92C func_0041C92C
    # 0041C9EC func_0041C9EC
    # 0041DF18 func_0041DF18
    # 0041E05C func_0041E05C
    # 0041E1C0 func_0041E1C0
    # 0041E304 func_0041E304
    # 00421170 gen_entry
    # 00423D28 jump
    # 00428D14 eval_mov
    # 0042A1AC eval_irel
    # 0042BDAC eval
    # 004330EC eval_int_flt_cvt
    # 004340D4 func_004340D4
/* 0041777C 3C1C0FC1 */  .cpload $t9
/* 00417780 279C82D4 */  
/* 00417784 0399E021 */  
/* 00417788 8F88897C */  lw     $t0, %got(i_ptr)($gp)
/* 0041778C 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 00417790 8F8A8978 */  lw     $t2, %got(ibuffer)($gp)
/* 00417794 8D0F0000 */  lw    $t7, ($t0)
/* 00417798 AFBF0024 */  sw    $ra, 0x24($sp)
/* 0041779C 8D4E0000 */  lw    $t6, ($t2)
/* 004177A0 000FC100 */  sll   $t8, $t7, 4
/* 004177A4 AFBC0020 */  sw    $gp, 0x20($sp)
/* 004177A8 AFB0001C */  sw    $s0, 0x1c($sp)
/* 004177AC AFA40028 */  sw    $a0, 0x28($sp)
/* 004177B0 AFA5002C */  sw    $a1, 0x2c($sp)
/* 004177B4 AFA60030 */  sw    $a2, 0x30($sp)
/* 004177B8 AFA70034 */  sw    $a3, 0x34($sp)
/* 004177BC 01D81021 */  addu  $v0, $t6, $t8
/* 004177C0 9059FFF5 */  lbu   $t9, -0xb($v0)
/* 004177C4 2442FFF0 */  addiu $v0, $v0, -0x10
/* 004177C8 3C01FFFC */  lui   $at, 0xfffc
/* 004177CC 332BFFC0 */  andi  $t3, $t9, 0xffc0
/* 004177D0 356C0017 */  ori   $t4, $t3, 0x17
/* 004177D4 A04C0005 */  sb    $t4, 5($v0)
/* 004177D8 8D0F0000 */  lw    $t7, ($t0)
/* 004177DC 8D4D0000 */  lw    $t5, ($t2)
/* 004177E0 97B8002A */  lhu   $t8, 0x2a($sp)
/* 004177E4 000F7100 */  sll   $t6, $t7, 4
/* 004177E8 01AE1021 */  addu  $v0, $t5, $t6
/* 004177EC 9449FFF6 */  lhu   $t1, -0xa($v0)
/* 004177F0 2442FFF0 */  addiu $v0, $v0, -0x10
/* 004177F4 34213FFF */  ori   $at, $at, 0x3fff
/* 004177F8 0009CD80 */  sll   $t9, $t1, 0x16
/* 004177FC 00195DC2 */  srl   $t3, $t9, 0x17
/* 00417800 030B6026 */  xor   $t4, $t8, $t3
/* 00417804 000C7DC0 */  sll   $t7, $t4, 0x17
/* 00417808 000F6D82 */  srl   $t5, $t7, 0x16
/* 0041780C 01A97026 */  xor   $t6, $t5, $t1
/* 00417810 A44E0006 */  sh    $t6, 6($v0)
/* 00417814 8D180000 */  lw    $t8, ($t0)
/* 00417818 8D590000 */  lw    $t9, ($t2)
/* 0041781C 00185900 */  sll   $t3, $t8, 4
/* 00417820 032B1021 */  addu  $v0, $t9, $t3
/* 00417824 8C4CFFF8 */  lw    $t4, -8($v0)
/* 00417828 2442FFF0 */  addiu $v0, $v0, -0x10
/* 0041782C 01817824 */  and   $t7, $t4, $at
/* 00417830 3C010002 */  lui   $at, 2
/* 00417834 01E16825 */  or    $t5, $t7, $at
/* 00417838 AC4D0008 */  sw    $t5, 8($v0)
/* 0041783C 8D180000 */  lw    $t8, ($t0)
/* 00417840 8D4E0000 */  lw    $t6, ($t2)
/* 00417844 93AB002F */  lbu   $t3, 0x2f($sp)
/* 00417848 0018C900 */  sll   $t9, $t8, 4
/* 0041784C 01D91021 */  addu  $v0, $t6, $t9
/* 00417850 8C43FFF8 */  lw    $v1, -8($v0)
/* 00417854 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00417858 00036642 */  srl   $t4, $v1, 0x19
/* 0041785C 016C7826 */  xor   $t7, $t3, $t4
/* 00417860 000F6E40 */  sll   $t5, $t7, 0x19
/* 00417864 01A3C026 */  xor   $t8, $t5, $v1
/* 00417868 AC580008 */  sw    $t8, 8($v0)
/* 0041786C 8D190000 */  lw    $t9, ($t0)
/* 00417870 8D4E0000 */  lw    $t6, ($t2)
/* 00417874 93AC0033 */  lbu   $t4, 0x33($sp)
/* 00417878 00195900 */  sll   $t3, $t9, 4
/* 0041787C 01CB1021 */  addu  $v0, $t6, $t3
/* 00417880 8C43FFF8 */  lw    $v1, -8($v0)
/* 00417884 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00417888 000379C0 */  sll   $t7, $v1, 7
/* 0041788C 000F6E42 */  srl   $t5, $t7, 0x19
/* 00417890 018DC026 */  xor   $t8, $t4, $t5
/* 00417894 0018CE40 */  sll   $t9, $t8, 0x19
/* 00417898 001971C2 */  srl   $t6, $t9, 7
/* 0041789C 01C35826 */  xor   $t3, $t6, $v1
/* 004178A0 AC4B0008 */  sw    $t3, 8($v0)
/* 004178A4 8F9981D8 */  lw    $t9, %call16(create_local_label)($gp)
/* 004178A8 8FA40034 */  lw    $a0, 0x34($sp)
/* 004178AC 0320F809 */  jalr  $t9
/* 004178B0 00000000 */   nop   
/* 004178B4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004178B8 8F88897C */  lw     $t0, %got(i_ptr)($gp)
/* 004178BC 8F8A8978 */  lw     $t2, %got(ibuffer)($gp)
/* 004178C0 8F998984 */  lw     $t9, %got(d_ptr)($gp)
/* 004178C4 8D0C0000 */  lw    $t4, ($t0)
/* 004178C8 8D4F0000 */  lw    $t7, ($t2)
/* 004178CC 000C6900 */  sll   $t5, $t4, 4
/* 004178D0 01EDC021 */  addu  $t8, $t7, $t5
/* 004178D4 AF02FFF0 */  sw    $v0, -0x10($t8)
/* 004178D8 8D030000 */  lw    $v1, ($t0)
/* 004178DC 8F390000 */  lw    $t9, ($t9)
/* 004178E0 17230007 */  bne   $t9, $v1, .L00417900
/* 004178E4 00000000 */   nop   
/* 004178E8 8F9981D4 */  lw    $t9, %call16(grow_ibuffer)($gp)
/* 004178EC 0320F809 */  jalr  $t9
/* 004178F0 00000000 */   nop   
/* 004178F4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004178F8 8F88897C */  lw     $t0, %got(i_ptr)($gp)
/* 004178FC 8D030000 */  lw    $v1, ($t0)
.L00417900:
/* 00417900 8F8B89E0 */  lw     $t3, %got(debug_ugen)($gp)
/* 00417904 246E0001 */  addiu $t6, $v1, 1
/* 00417908 AD0E0000 */  sw    $t6, ($t0)
/* 0041790C 916B0000 */  lbu   $t3, ($t3)
/* 00417910 2406000B */  li    $a2, 11
/* 00417914 51600047 */  beql  $t3, $zero, .L00417A34
/* 00417918 8FBF0024 */   lw    $ra, 0x24($sp)
/* 0041791C 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 00417920 8F848954 */  lw     $a0, %got(output)($gp)
/* 00417924 8F858038 */  lw    $a1, %got(RO_10009608)($gp)
/* 00417928 2407000B */  li    $a3, 11
/* 0041792C 8C840000 */  lw    $a0, ($a0)
/* 00417930 0320F809 */  jalr  $t9
/* 00417934 24A59608 */   addiu $a1, %lo(RO_10009608) # addiu $a1, $a1, -0x69f8
/* 00417938 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041793C 240C000A */  li    $t4, 10
/* 00417940 AFAC0010 */  sw    $t4, 0x10($sp)
/* 00417944 8F908954 */  lw     $s0, %got(output)($gp)
/* 00417948 8F9987D8 */  lw    $t9, %call16(write_enum)($gp)
/* 0041794C 8F868038 */  lw    $a2, %got(D_10012570)($gp)
/* 00417950 8E100000 */  lw    $s0, ($s0)
/* 00417954 97A5002A */  lhu   $a1, 0x2a($sp)
/* 00417958 00003825 */  move  $a3, $zero
/* 0041795C 24C62570 */  addiu $a2, %lo(D_10012570) # addiu $a2, $a2, 0x2570
/* 00417960 0320F809 */  jalr  $t9
/* 00417964 02002025 */   move  $a0, $s0
/* 00417968 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041796C 02002025 */  move  $a0, $s0
/* 00417970 24050020 */  li    $a1, 32
/* 00417974 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 00417978 24060001 */  li    $a2, 1
/* 0041797C 2407000A */  li    $a3, 10
/* 00417980 0320F809 */  jalr  $t9
/* 00417984 00000000 */   nop   
/* 00417988 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041798C 240F000A */  li    $t7, 10
/* 00417990 AFAF0010 */  sw    $t7, 0x10($sp)
/* 00417994 8F9987D8 */  lw    $t9, %call16(write_enum)($gp)
/* 00417998 8F868038 */  lw    $a2, %got(D_1001340C)($gp)
/* 0041799C 02002025 */  move  $a0, $s0
/* 004179A0 93A5002F */  lbu   $a1, 0x2f($sp)
/* 004179A4 00003825 */  move  $a3, $zero
/* 004179A8 0320F809 */  jalr  $t9
/* 004179AC 24C6340C */   addiu $a2, %lo(D_1001340C) # addiu $a2, $a2, 0x340c
/* 004179B0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004179B4 02002025 */  move  $a0, $s0
/* 004179B8 24050020 */  li    $a1, 32
/* 004179BC 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 004179C0 24060001 */  li    $a2, 1
/* 004179C4 2407000A */  li    $a3, 10
/* 004179C8 0320F809 */  jalr  $t9
/* 004179CC 00000000 */   nop   
/* 004179D0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004179D4 240D000A */  li    $t5, 10
/* 004179D8 AFAD0010 */  sw    $t5, 0x10($sp)
/* 004179DC 8F9987D8 */  lw    $t9, %call16(write_enum)($gp)
/* 004179E0 8F868038 */  lw    $a2, %got(D_1001340C)($gp)
/* 004179E4 02002025 */  move  $a0, $s0
/* 004179E8 93A50033 */  lbu   $a1, 0x33($sp)
/* 004179EC 00003825 */  move  $a3, $zero
/* 004179F0 0320F809 */  jalr  $t9
/* 004179F4 24C6340C */   addiu $a2, %lo(D_1001340C) # addiu $a2, $a2, 0x340c
/* 004179F8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004179FC 02002025 */  move  $a0, $s0
/* 00417A00 8FA50034 */  lw    $a1, 0x34($sp)
/* 00417A04 8F9987E0 */  lw    $t9, %call16(write_cardinal)($gp)
/* 00417A08 2406000C */  li    $a2, 12
/* 00417A0C 2407000A */  li    $a3, 10
/* 00417A10 0320F809 */  jalr  $t9
/* 00417A14 00000000 */   nop   
/* 00417A18 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00417A1C 8F9987CC */  lw    $t9, %call16(writeln)($gp)
/* 00417A20 8F848954 */  lw     $a0, %got(output)($gp)
/* 00417A24 0320F809 */  jalr  $t9
/* 00417A28 8C840000 */   lw    $a0, ($a0)
/* 00417A2C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00417A30 8FBF0024 */  lw    $ra, 0x24($sp)
.L00417A34:
/* 00417A34 8FB0001C */  lw    $s0, 0x1c($sp)
/* 00417A38 27BD0028 */  addiu $sp, $sp, 0x28
/* 00417A3C 03E00008 */  jr    $ra
/* 00417A40 00000000 */   nop   
    .type emit_rrll, @function
    .size emit_rrll, .-emit_rrll
    .end emit_rrll

glabel emit_rl
    .ent emit_rl
/* 00417A44 3C1C0FC1 */  .cpload $t9
/* 00417A48 279C800C */  
/* 00417A4C 0399E021 */  
/* 00417A50 8F87897C */  lw     $a3, %got(i_ptr)($gp)
/* 00417A54 8F838978 */  lw     $v1, %got(ibuffer)($gp)
/* 00417A58 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 00417A5C 8CEF0000 */  lw    $t7, ($a3)
/* 00417A60 8C6E0000 */  lw    $t6, ($v1)
/* 00417A64 AFBF0024 */  sw    $ra, 0x24($sp)
/* 00417A68 000FC100 */  sll   $t8, $t7, 4
/* 00417A6C AFBC0020 */  sw    $gp, 0x20($sp)
/* 00417A70 AFB0001C */  sw    $s0, 0x1c($sp)
/* 00417A74 AFA40028 */  sw    $a0, 0x28($sp)
/* 00417A78 AFA5002C */  sw    $a1, 0x2c($sp)
/* 00417A7C AFA60030 */  sw    $a2, 0x30($sp)
/* 00417A80 01D81021 */  addu  $v0, $t6, $t8
/* 00417A84 9059FFF5 */  lbu   $t9, -0xb($v0)
/* 00417A88 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00417A8C 3C01FFFC */  lui   $at, 0xfffc
/* 00417A90 332BFFC0 */  andi  $t3, $t9, 0xffc0
/* 00417A94 356C0017 */  ori   $t4, $t3, 0x17
/* 00417A98 A04C0005 */  sb    $t4, 5($v0)
/* 00417A9C 8CEF0000 */  lw    $t7, ($a3)
/* 00417AA0 8C6D0000 */  lw    $t5, ($v1)
/* 00417AA4 97B8002A */  lhu   $t8, 0x2a($sp)
/* 00417AA8 000F7100 */  sll   $t6, $t7, 4
/* 00417AAC 01AE1021 */  addu  $v0, $t5, $t6
/* 00417AB0 9448FFF6 */  lhu   $t0, -0xa($v0)
/* 00417AB4 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00417AB8 34213FFF */  ori   $at, $at, 0x3fff
/* 00417ABC 0008CD80 */  sll   $t9, $t0, 0x16
/* 00417AC0 00195DC2 */  srl   $t3, $t9, 0x17
/* 00417AC4 030B6026 */  xor   $t4, $t8, $t3
/* 00417AC8 000C7DC0 */  sll   $t7, $t4, 0x17
/* 00417ACC 000F6D82 */  srl   $t5, $t7, 0x16
/* 00417AD0 01A87026 */  xor   $t6, $t5, $t0
/* 00417AD4 A44E0006 */  sh    $t6, 6($v0)
/* 00417AD8 8CF80000 */  lw    $t8, ($a3)
/* 00417ADC 8C790000 */  lw    $t9, ($v1)
/* 00417AE0 00185900 */  sll   $t3, $t8, 4
/* 00417AE4 032B6021 */  addu  $t4, $t9, $t3
/* 00417AE8 AD80FFFC */  sw    $zero, -4($t4)
/* 00417AEC 8CED0000 */  lw    $t5, ($a3)
/* 00417AF0 8C6F0000 */  lw    $t7, ($v1)
/* 00417AF4 000D7100 */  sll   $t6, $t5, 4
/* 00417AF8 01EE1021 */  addu  $v0, $t7, $t6
/* 00417AFC 8C58FFF8 */  lw    $t8, -8($v0)
/* 00417B00 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00417B04 0301C824 */  and   $t9, $t8, $at
/* 00417B08 3C010002 */  lui   $at, 2
/* 00417B0C 34214000 */  ori   $at, $at, 0x4000
/* 00417B10 03215825 */  or    $t3, $t9, $at
/* 00417B14 AC4B0008 */  sw    $t3, 8($v0)
/* 00417B18 8CED0000 */  lw    $t5, ($a3)
/* 00417B1C 8C6C0000 */  lw    $t4, ($v1)
/* 00417B20 93AE002F */  lbu   $t6, 0x2f($sp)
/* 00417B24 000D7900 */  sll   $t7, $t5, 4
/* 00417B28 018F1021 */  addu  $v0, $t4, $t7
/* 00417B2C 8C49FFF8 */  lw    $t1, -8($v0)
/* 00417B30 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00417B34 3C01FE03 */  lui   $at, 0xfe03
/* 00417B38 0009C642 */  srl   $t8, $t1, 0x19
/* 00417B3C 01D8C826 */  xor   $t9, $t6, $t8
/* 00417B40 00195E40 */  sll   $t3, $t9, 0x19
/* 00417B44 01696826 */  xor   $t5, $t3, $t1
/* 00417B48 AC4D0008 */  sw    $t5, 8($v0)
/* 00417B4C 8CEF0000 */  lw    $t7, ($a3)
/* 00417B50 8C6C0000 */  lw    $t4, ($v1)
/* 00417B54 3421FFFF */  ori   $at, $at, 0xffff
/* 00417B58 000F7100 */  sll   $t6, $t7, 4
/* 00417B5C 018E1021 */  addu  $v0, $t4, $t6
/* 00417B60 8C58FFF8 */  lw    $t8, -8($v0)
/* 00417B64 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00417B68 0301C824 */  and   $t9, $t8, $at
/* 00417B6C 3C010120 */  lui   $at, 0x120
/* 00417B70 03215825 */  or    $t3, $t9, $at
/* 00417B74 AC4B0008 */  sw    $t3, 8($v0)
/* 00417B78 8CEC0000 */  lw    $t4, ($a3)
/* 00417B7C 8C6F0000 */  lw    $t7, ($v1)
/* 00417B80 8FAD0030 */  lw    $t5, 0x30($sp)
/* 00417B84 000C7100 */  sll   $t6, $t4, 4
/* 00417B88 8F998984 */  lw     $t9, %got(d_ptr)($gp)
/* 00417B8C 01EEC021 */  addu  $t8, $t7, $t6
/* 00417B90 AF0DFFF0 */  sw    $t5, -0x10($t8)
/* 00417B94 8CEA0000 */  lw    $t2, ($a3)
/* 00417B98 8F390000 */  lw    $t9, ($t9)
/* 00417B9C 172A0007 */  bne   $t9, $t2, .L00417BBC
/* 00417BA0 00000000 */   nop   
/* 00417BA4 8F9981D4 */  lw    $t9, %call16(grow_ibuffer)($gp)
/* 00417BA8 0320F809 */  jalr  $t9
/* 00417BAC 00000000 */   nop   
/* 00417BB0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00417BB4 8F87897C */  lw     $a3, %got(i_ptr)($gp)
/* 00417BB8 8CEA0000 */  lw    $t2, ($a3)
.L00417BBC:
/* 00417BBC 8F8C89E0 */  lw     $t4, %got(debug_ugen)($gp)
/* 00417BC0 254B0001 */  addiu $t3, $t2, 1
/* 00417BC4 ACEB0000 */  sw    $t3, ($a3)
/* 00417BC8 918C0000 */  lbu   $t4, ($t4)
/* 00417BCC 24060009 */  li    $a2, 9
/* 00417BD0 51800035 */  beql  $t4, $zero, .L00417CA8
/* 00417BD4 8FBF0024 */   lw    $ra, 0x24($sp)
/* 00417BD8 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 00417BDC 8F848954 */  lw     $a0, %got(output)($gp)
/* 00417BE0 8F858038 */  lw    $a1, %got(RO_10009613)($gp)
/* 00417BE4 24070009 */  li    $a3, 9
/* 00417BE8 8C840000 */  lw    $a0, ($a0)
/* 00417BEC 0320F809 */  jalr  $t9
/* 00417BF0 24A59613 */   addiu $a1, %lo(RO_10009613) # addiu $a1, $a1, -0x69ed
/* 00417BF4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00417BF8 240F000A */  li    $t7, 10
/* 00417BFC AFAF0010 */  sw    $t7, 0x10($sp)
/* 00417C00 8F908954 */  lw     $s0, %got(output)($gp)
/* 00417C04 8F9987D8 */  lw    $t9, %call16(write_enum)($gp)
/* 00417C08 8F868038 */  lw    $a2, %got(D_10012570)($gp)
/* 00417C0C 8E100000 */  lw    $s0, ($s0)
/* 00417C10 97A5002A */  lhu   $a1, 0x2a($sp)
/* 00417C14 00003825 */  move  $a3, $zero
/* 00417C18 24C62570 */  addiu $a2, %lo(D_10012570) # addiu $a2, $a2, 0x2570
/* 00417C1C 0320F809 */  jalr  $t9
/* 00417C20 02002025 */   move  $a0, $s0
/* 00417C24 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00417C28 02002025 */  move  $a0, $s0
/* 00417C2C 24050020 */  li    $a1, 32
/* 00417C30 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 00417C34 24060001 */  li    $a2, 1
/* 00417C38 2407000A */  li    $a3, 10
/* 00417C3C 0320F809 */  jalr  $t9
/* 00417C40 00000000 */   nop   
/* 00417C44 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00417C48 240E000A */  li    $t6, 10
/* 00417C4C AFAE0010 */  sw    $t6, 0x10($sp)
/* 00417C50 8F9987D8 */  lw    $t9, %call16(write_enum)($gp)
/* 00417C54 8F868038 */  lw    $a2, %got(D_1001340C)($gp)
/* 00417C58 02002025 */  move  $a0, $s0
/* 00417C5C 93A5002F */  lbu   $a1, 0x2f($sp)
/* 00417C60 00003825 */  move  $a3, $zero
/* 00417C64 0320F809 */  jalr  $t9
/* 00417C68 24C6340C */   addiu $a2, %lo(D_1001340C) # addiu $a2, $a2, 0x340c
/* 00417C6C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00417C70 02002025 */  move  $a0, $s0
/* 00417C74 8FA50030 */  lw    $a1, 0x30($sp)
/* 00417C78 8F9987E0 */  lw    $t9, %call16(write_cardinal)($gp)
/* 00417C7C 2406000C */  li    $a2, 12
/* 00417C80 2407000A */  li    $a3, 10
/* 00417C84 0320F809 */  jalr  $t9
/* 00417C88 00000000 */   nop   
/* 00417C8C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00417C90 8F9987CC */  lw    $t9, %call16(writeln)($gp)
/* 00417C94 8F848954 */  lw     $a0, %got(output)($gp)
/* 00417C98 0320F809 */  jalr  $t9
/* 00417C9C 8C840000 */   lw    $a0, ($a0)
/* 00417CA0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00417CA4 8FBF0024 */  lw    $ra, 0x24($sp)
.L00417CA8:
/* 00417CA8 8FB0001C */  lw    $s0, 0x1c($sp)
/* 00417CAC 27BD0028 */  addiu $sp, $sp, 0x28
/* 00417CB0 03E00008 */  jr    $ra
/* 00417CB4 00000000 */   nop   
    .type emit_rl, @function
    .size emit_rl, .-emit_rl
    .end emit_rl

glabel emit_rll
    .ent emit_rll
    # 0041D534 func_0041D534
    # 0041D958 func_0041D958
    # 0041EE78 func_0041EE78
    # 0041F368 func_0041F368
    # 0041F4F0 func_0041F4F0
    # 0041F678 func_0041F678
    # 0041F800 func_0041F800
    # 0041F988 func_0041F988
    # 0041FB10 func_0041FB10
    # 0042BDAC eval
/* 00417CB8 3C1C0FC0 */  .cpload $t9
/* 00417CBC 279C7D98 */  
/* 00417CC0 0399E021 */  
/* 00417CC4 8F83897C */  lw     $v1, %got(i_ptr)($gp)
/* 00417CC8 8F898978 */  lw     $t1, %got(ibuffer)($gp)
/* 00417CCC 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 00417CD0 8C6F0000 */  lw    $t7, ($v1)
/* 00417CD4 8D2E0000 */  lw    $t6, ($t1)
/* 00417CD8 AFBF0024 */  sw    $ra, 0x24($sp)
/* 00417CDC 000FC100 */  sll   $t8, $t7, 4
/* 00417CE0 AFBC0020 */  sw    $gp, 0x20($sp)
/* 00417CE4 AFB0001C */  sw    $s0, 0x1c($sp)
/* 00417CE8 AFA40028 */  sw    $a0, 0x28($sp)
/* 00417CEC AFA5002C */  sw    $a1, 0x2c($sp)
/* 00417CF0 AFA60030 */  sw    $a2, 0x30($sp)
/* 00417CF4 01D81021 */  addu  $v0, $t6, $t8
/* 00417CF8 9059FFF5 */  lbu   $t9, -0xb($v0)
/* 00417CFC 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00417D00 3C01FFFC */  lui   $at, 0xfffc
/* 00417D04 332AFFC0 */  andi  $t2, $t9, 0xffc0
/* 00417D08 354B0017 */  ori   $t3, $t2, 0x17
/* 00417D0C A04B0005 */  sb    $t3, 5($v0)
/* 00417D10 8C6D0000 */  lw    $t5, ($v1)
/* 00417D14 8D2C0000 */  lw    $t4, ($t1)
/* 00417D18 97AE002A */  lhu   $t6, 0x2a($sp)
/* 00417D1C 000D7900 */  sll   $t7, $t5, 4
/* 00417D20 018F1021 */  addu  $v0, $t4, $t7
/* 00417D24 9447FFF6 */  lhu   $a3, -0xa($v0)
/* 00417D28 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00417D2C 34213FFF */  ori   $at, $at, 0x3fff
/* 00417D30 0007C580 */  sll   $t8, $a3, 0x16
/* 00417D34 0018CDC2 */  srl   $t9, $t8, 0x17
/* 00417D38 01D95026 */  xor   $t2, $t6, $t9
/* 00417D3C 000A5DC0 */  sll   $t3, $t2, 0x17
/* 00417D40 000B6D82 */  srl   $t5, $t3, 0x16
/* 00417D44 01A76026 */  xor   $t4, $t5, $a3
/* 00417D48 A44C0006 */  sh    $t4, 6($v0)
/* 00417D4C 8C780000 */  lw    $t8, ($v1)
/* 00417D50 8D2F0000 */  lw    $t7, ($t1)
/* 00417D54 00187100 */  sll   $t6, $t8, 4
/* 00417D58 01EEC821 */  addu  $t9, $t7, $t6
/* 00417D5C AF20FFFC */  sw    $zero, -4($t9)
/* 00417D60 8C6B0000 */  lw    $t3, ($v1)
/* 00417D64 8D2A0000 */  lw    $t2, ($t1)
/* 00417D68 000B6900 */  sll   $t5, $t3, 4
/* 00417D6C 014D1021 */  addu  $v0, $t2, $t5
/* 00417D70 8C4CFFF8 */  lw    $t4, -8($v0)
/* 00417D74 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00417D78 0181C024 */  and   $t8, $t4, $at
/* 00417D7C 3C010002 */  lui   $at, 2
/* 00417D80 34214000 */  ori   $at, $at, 0x4000
/* 00417D84 03017825 */  or    $t7, $t8, $at
/* 00417D88 AC4F0008 */  sw    $t7, 8($v0)
/* 00417D8C 8C790000 */  lw    $t9, ($v1)
/* 00417D90 8D2E0000 */  lw    $t6, ($t1)
/* 00417D94 93AA002F */  lbu   $t2, 0x2f($sp)
/* 00417D98 00195900 */  sll   $t3, $t9, 4
/* 00417D9C 01CB1021 */  addu  $v0, $t6, $t3
/* 00417DA0 8C48FFF8 */  lw    $t0, -8($v0)
/* 00417DA4 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00417DA8 3C01FE03 */  lui   $at, 0xfe03
/* 00417DAC 00086E42 */  srl   $t5, $t0, 0x19
/* 00417DB0 014D6026 */  xor   $t4, $t2, $t5
/* 00417DB4 000CC640 */  sll   $t8, $t4, 0x19
/* 00417DB8 03087826 */  xor   $t7, $t8, $t0
/* 00417DBC AC4F0008 */  sw    $t7, 8($v0)
/* 00417DC0 8C6E0000 */  lw    $t6, ($v1)
/* 00417DC4 8D390000 */  lw    $t9, ($t1)
/* 00417DC8 3421FFFF */  ori   $at, $at, 0xffff
/* 00417DCC 000E5900 */  sll   $t3, $t6, 4
/* 00417DD0 032B1021 */  addu  $v0, $t9, $t3
/* 00417DD4 8C4AFFF8 */  lw    $t2, -8($v0)
/* 00417DD8 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00417DDC 01416824 */  and   $t5, $t2, $at
/* 00417DE0 3C010120 */  lui   $at, 0x120
/* 00417DE4 01A16025 */  or    $t4, $t5, $at
/* 00417DE8 AC4C0008 */  sw    $t4, 8($v0)
/* 00417DEC 8F9981D8 */  lw    $t9, %call16(create_local_label)($gp)
/* 00417DF0 8FA40030 */  lw    $a0, 0x30($sp)
/* 00417DF4 0320F809 */  jalr  $t9
/* 00417DF8 00000000 */   nop   
/* 00417DFC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00417E00 8F83897C */  lw     $v1, %got(i_ptr)($gp)
/* 00417E04 8F898978 */  lw     $t1, %got(ibuffer)($gp)
/* 00417E08 8F8B8984 */  lw     $t3, %got(d_ptr)($gp)
/* 00417E0C 8C6F0000 */  lw    $t7, ($v1)
/* 00417E10 8D380000 */  lw    $t8, ($t1)
/* 00417E14 000F7100 */  sll   $t6, $t7, 4
/* 00417E18 030EC821 */  addu  $t9, $t8, $t6
/* 00417E1C AF22FFF0 */  sw    $v0, -0x10($t9)
/* 00417E20 8C640000 */  lw    $a0, ($v1)
/* 00417E24 8D6B0000 */  lw    $t3, ($t3)
/* 00417E28 15640007 */  bne   $t3, $a0, .L00417E48
/* 00417E2C 00000000 */   nop   
/* 00417E30 8F9981D4 */  lw    $t9, %call16(grow_ibuffer)($gp)
/* 00417E34 0320F809 */  jalr  $t9
/* 00417E38 00000000 */   nop   
/* 00417E3C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00417E40 8F83897C */  lw     $v1, %got(i_ptr)($gp)
/* 00417E44 8C640000 */  lw    $a0, ($v1)
.L00417E48:
/* 00417E48 8F8D89E0 */  lw     $t5, %got(debug_ugen)($gp)
/* 00417E4C 248A0001 */  addiu $t2, $a0, 1
/* 00417E50 AC6A0000 */  sw    $t2, ($v1)
/* 00417E54 91AD0000 */  lbu   $t5, ($t5)
/* 00417E58 2406000A */  li    $a2, 10
/* 00417E5C 51A00035 */  beql  $t5, $zero, .L00417F34
/* 00417E60 8FBF0024 */   lw    $ra, 0x24($sp)
/* 00417E64 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 00417E68 8F848954 */  lw     $a0, %got(output)($gp)
/* 00417E6C 8F858038 */  lw    $a1, %got(RO_1000961C)($gp)
/* 00417E70 2407000A */  li    $a3, 10
/* 00417E74 8C840000 */  lw    $a0, ($a0)
/* 00417E78 0320F809 */  jalr  $t9
/* 00417E7C 24A5961C */   addiu $a1, %lo(RO_1000961C) # addiu $a1, $a1, -0x69e4
/* 00417E80 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00417E84 240C000A */  li    $t4, 10
/* 00417E88 AFAC0010 */  sw    $t4, 0x10($sp)
/* 00417E8C 8F908954 */  lw     $s0, %got(output)($gp)
/* 00417E90 8F9987D8 */  lw    $t9, %call16(write_enum)($gp)
/* 00417E94 8F868038 */  lw    $a2, %got(D_10012570)($gp)
/* 00417E98 8E100000 */  lw    $s0, ($s0)
/* 00417E9C 97A5002A */  lhu   $a1, 0x2a($sp)
/* 00417EA0 00003825 */  move  $a3, $zero
/* 00417EA4 24C62570 */  addiu $a2, %lo(D_10012570) # addiu $a2, $a2, 0x2570
/* 00417EA8 0320F809 */  jalr  $t9
/* 00417EAC 02002025 */   move  $a0, $s0
/* 00417EB0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00417EB4 02002025 */  move  $a0, $s0
/* 00417EB8 24050020 */  li    $a1, 32
/* 00417EBC 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 00417EC0 24060001 */  li    $a2, 1
/* 00417EC4 2407000A */  li    $a3, 10
/* 00417EC8 0320F809 */  jalr  $t9
/* 00417ECC 00000000 */   nop   
/* 00417ED0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00417ED4 240F000A */  li    $t7, 10
/* 00417ED8 AFAF0010 */  sw    $t7, 0x10($sp)
/* 00417EDC 8F9987D8 */  lw    $t9, %call16(write_enum)($gp)
/* 00417EE0 8F868038 */  lw    $a2, %got(D_1001340C)($gp)
/* 00417EE4 02002025 */  move  $a0, $s0
/* 00417EE8 93A5002F */  lbu   $a1, 0x2f($sp)
/* 00417EEC 00003825 */  move  $a3, $zero
/* 00417EF0 0320F809 */  jalr  $t9
/* 00417EF4 24C6340C */   addiu $a2, %lo(D_1001340C) # addiu $a2, $a2, 0x340c
/* 00417EF8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00417EFC 02002025 */  move  $a0, $s0
/* 00417F00 8FA50030 */  lw    $a1, 0x30($sp)
/* 00417F04 8F9987E0 */  lw    $t9, %call16(write_cardinal)($gp)
/* 00417F08 2406000C */  li    $a2, 12
/* 00417F0C 2407000A */  li    $a3, 10
/* 00417F10 0320F809 */  jalr  $t9
/* 00417F14 00000000 */   nop   
/* 00417F18 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00417F1C 8F9987CC */  lw    $t9, %call16(writeln)($gp)
/* 00417F20 8F848954 */  lw     $a0, %got(output)($gp)
/* 00417F24 0320F809 */  jalr  $t9
/* 00417F28 8C840000 */   lw    $a0, ($a0)
/* 00417F2C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00417F30 8FBF0024 */  lw    $ra, 0x24($sp)
.L00417F34:
/* 00417F34 8FB0001C */  lw    $s0, 0x1c($sp)
/* 00417F38 27BD0028 */  addiu $sp, $sp, 0x28
/* 00417F3C 03E00008 */  jr    $ra
/* 00417F40 00000000 */   nop   
    .type emit_rll, @function
    .size emit_rll, .-emit_rll
    .end emit_rll

glabel emit_l
    .ent emit_l
/* 00417F44 3C1C0FC0 */  .cpload $t9
/* 00417F48 279C7B0C */  
/* 00417F4C 0399E021 */  
/* 00417F50 8F86897C */  lw     $a2, %got(i_ptr)($gp)
/* 00417F54 8F838978 */  lw     $v1, %got(ibuffer)($gp)
/* 00417F58 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 00417F5C 8CCF0000 */  lw    $t7, ($a2)
/* 00417F60 8C6E0000 */  lw    $t6, ($v1)
/* 00417F64 AFBF0024 */  sw    $ra, 0x24($sp)
/* 00417F68 000FC100 */  sll   $t8, $t7, 4
/* 00417F6C AFBC0020 */  sw    $gp, 0x20($sp)
/* 00417F70 AFA40030 */  sw    $a0, 0x30($sp)
/* 00417F74 AFA50034 */  sw    $a1, 0x34($sp)
/* 00417F78 01D81021 */  addu  $v0, $t6, $t8
/* 00417F7C 9059FFF5 */  lbu   $t9, -0xb($v0)
/* 00417F80 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00417F84 3C01FFFC */  lui   $at, 0xfffc
/* 00417F88 3329FFC0 */  andi  $t1, $t9, 0xffc0
/* 00417F8C 352A0017 */  ori   $t2, $t1, 0x17
/* 00417F90 A04A0005 */  sb    $t2, 5($v0)
/* 00417F94 8CCC0000 */  lw    $t4, ($a2)
/* 00417F98 8C6B0000 */  lw    $t3, ($v1)
/* 00417F9C 97AF0032 */  lhu   $t7, 0x32($sp)
/* 00417FA0 000C6900 */  sll   $t5, $t4, 4
/* 00417FA4 016D1021 */  addu  $v0, $t3, $t5
/* 00417FA8 9447FFF6 */  lhu   $a3, -0xa($v0)
/* 00417FAC 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00417FB0 34213FFF */  ori   $at, $at, 0x3fff
/* 00417FB4 00077580 */  sll   $t6, $a3, 0x16
/* 00417FB8 000EC5C2 */  srl   $t8, $t6, 0x17
/* 00417FBC 01F8C826 */  xor   $t9, $t7, $t8
/* 00417FC0 00194DC0 */  sll   $t1, $t9, 0x17
/* 00417FC4 00095582 */  srl   $t2, $t1, 0x16
/* 00417FC8 01476026 */  xor   $t4, $t2, $a3
/* 00417FCC A44C0006 */  sh    $t4, 6($v0)
/* 00417FD0 8CCD0000 */  lw    $t5, ($a2)
/* 00417FD4 8C6B0000 */  lw    $t3, ($v1)
/* 00417FD8 000D7100 */  sll   $t6, $t5, 4
/* 00417FDC 016E1021 */  addu  $v0, $t3, $t6
/* 00417FE0 8C4FFFF8 */  lw    $t7, -8($v0)
/* 00417FE4 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00417FE8 01E1C024 */  and   $t8, $t7, $at
/* 00417FEC 3C010002 */  lui   $at, 2
/* 00417FF0 34218000 */  ori   $at, $at, 0x8000
/* 00417FF4 0301C825 */  or    $t9, $t8, $at
/* 00417FF8 AC590008 */  sw    $t9, 8($v0)
/* 00417FFC 8CCC0000 */  lw    $t4, ($a2)
/* 00418000 8C6A0000 */  lw    $t2, ($v1)
/* 00418004 8FA90034 */  lw    $t1, 0x34($sp)
/* 00418008 000C6900 */  sll   $t5, $t4, 4
/* 0041800C 014D5821 */  addu  $t3, $t2, $t5
/* 00418010 AD69FFF0 */  sw    $t1, -0x10($t3)
/* 00418014 8CCF0000 */  lw    $t7, ($a2)
/* 00418018 8C6E0000 */  lw    $t6, ($v1)
/* 0041801C 3C0101FF */  lui   $at, 0x1ff
/* 00418020 000FC100 */  sll   $t8, $t7, 4
/* 00418024 01D81021 */  addu  $v0, $t6, $t8
/* 00418028 8C59FFF8 */  lw    $t9, -8($v0)
/* 0041802C 3421FFFF */  ori   $at, $at, 0xffff
/* 00418030 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00418034 03216024 */  and   $t4, $t9, $at
/* 00418038 3C019000 */  lui   $at, 0x9000
/* 0041803C 01815025 */  or    $t2, $t4, $at
/* 00418040 AC4A0008 */  sw    $t2, 8($v0)
/* 00418044 8CC90000 */  lw    $t1, ($a2)
/* 00418048 8C6D0000 */  lw    $t5, ($v1)
/* 0041804C 3C01FE03 */  lui   $at, 0xfe03
/* 00418050 00095900 */  sll   $t3, $t1, 4
/* 00418054 01AB1021 */  addu  $v0, $t5, $t3
/* 00418058 8C4FFFF8 */  lw    $t7, -8($v0)
/* 0041805C 3421FFFF */  ori   $at, $at, 0xffff
/* 00418060 8F998984 */  lw     $t9, %got(d_ptr)($gp)
/* 00418064 01E17024 */  and   $t6, $t7, $at
/* 00418068 3C010120 */  lui   $at, 0x120
/* 0041806C 01C1C025 */  or    $t8, $t6, $at
/* 00418070 AC58FFF8 */  sw    $t8, -8($v0)
/* 00418074 8CC80000 */  lw    $t0, ($a2)
/* 00418078 8F390000 */  lw    $t9, ($t9)
/* 0041807C 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00418080 17280007 */  bne   $t9, $t0, .L004180A0
/* 00418084 00000000 */   nop   
/* 00418088 8F9981D4 */  lw    $t9, %call16(grow_ibuffer)($gp)
/* 0041808C 0320F809 */  jalr  $t9
/* 00418090 00000000 */   nop   
/* 00418094 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00418098 8F86897C */  lw     $a2, %got(i_ptr)($gp)
/* 0041809C 8CC80000 */  lw    $t0, ($a2)
.L004180A0:
/* 004180A0 8F8A89E0 */  lw     $t2, %got(debug_ugen)($gp)
/* 004180A4 250C0001 */  addiu $t4, $t0, 1
/* 004180A8 ACCC0000 */  sw    $t4, ($a2)
/* 004180AC 914A0000 */  lbu   $t2, ($t2)
/* 004180B0 24060008 */  li    $a2, 8
/* 004180B4 51400023 */  beql  $t2, $zero, .L00418144
/* 004180B8 8FBF0024 */   lw    $ra, 0x24($sp)
/* 004180BC 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 004180C0 8F848954 */  lw     $a0, %got(output)($gp)
/* 004180C4 8F858038 */  lw    $a1, %got(RO_10009626)($gp)
/* 004180C8 24070008 */  li    $a3, 8
/* 004180CC 8C840000 */  lw    $a0, ($a0)
/* 004180D0 0320F809 */  jalr  $t9
/* 004180D4 24A59626 */   addiu $a1, %lo(RO_10009626) # addiu $a1, $a1, -0x69da
/* 004180D8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004180DC 2409000A */  li    $t1, 10
/* 004180E0 AFA90010 */  sw    $t1, 0x10($sp)
/* 004180E4 8F848954 */  lw     $a0, %got(output)($gp)
/* 004180E8 8F9987D8 */  lw    $t9, %call16(write_enum)($gp)
/* 004180EC 8F868038 */  lw    $a2, %got(D_10012570)($gp)
/* 004180F0 8C840000 */  lw    $a0, ($a0)
/* 004180F4 97A50032 */  lhu   $a1, 0x32($sp)
/* 004180F8 00003825 */  move  $a3, $zero
/* 004180FC 24C62570 */  addiu $a2, %lo(D_10012570) # addiu $a2, $a2, 0x2570
/* 00418100 0320F809 */  jalr  $t9
/* 00418104 AFA40028 */   sw    $a0, 0x28($sp)
/* 00418108 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041810C 8FA40028 */  lw    $a0, 0x28($sp)
/* 00418110 8FA50034 */  lw    $a1, 0x34($sp)
/* 00418114 8F9987E0 */  lw    $t9, %call16(write_cardinal)($gp)
/* 00418118 2406000C */  li    $a2, 12
/* 0041811C 2407000A */  li    $a3, 10
/* 00418120 0320F809 */  jalr  $t9
/* 00418124 00000000 */   nop   
/* 00418128 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041812C 8F9987CC */  lw    $t9, %call16(writeln)($gp)
/* 00418130 8F848954 */  lw     $a0, %got(output)($gp)
/* 00418134 0320F809 */  jalr  $t9
/* 00418138 8C840000 */   lw    $a0, ($a0)
/* 0041813C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00418140 8FBF0024 */  lw    $ra, 0x24($sp)
.L00418144:
/* 00418144 27BD0030 */  addiu $sp, $sp, 0x30
/* 00418148 03E00008 */  jr    $ra
/* 0041814C 00000000 */   nop   
    .type emit_l, @function
    .size emit_l, .-emit_l
    .end emit_l

glabel emit_ll
    .ent emit_ll
    # 0041D534 func_0041D534
    # 0041D958 func_0041D958
    # 00423D28 jump
    # 00424240 trap
    # 004285F0 eval_fp_cond
    # 004287AC eval_fp_min_max
    # 0042A1AC eval_irel
    # 0042BDAC eval
    # 00433494 eval_flt_int_cvt
/* 00418150 3C1C0FC0 */  .cpload $t9
/* 00418154 279C7900 */  
/* 00418158 0399E021 */  
/* 0041815C 8F86897C */  lw     $a2, %got(i_ptr)($gp)
/* 00418160 8F878978 */  lw     $a3, %got(ibuffer)($gp)
/* 00418164 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 00418168 8CCF0000 */  lw    $t7, ($a2)
/* 0041816C 8CEE0000 */  lw    $t6, ($a3)
/* 00418170 AFBF0024 */  sw    $ra, 0x24($sp)
/* 00418174 000FC100 */  sll   $t8, $t7, 4
/* 00418178 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0041817C AFA40038 */  sw    $a0, 0x38($sp)
/* 00418180 AFA5003C */  sw    $a1, 0x3c($sp)
/* 00418184 01D81821 */  addu  $v1, $t6, $t8
/* 00418188 9079FFF5 */  lbu   $t9, -0xb($v1)
/* 0041818C 2463FFF0 */  addiu $v1, $v1, -0x10
/* 00418190 3C01FFFC */  lui   $at, 0xfffc
/* 00418194 3328FFC0 */  andi  $t0, $t9, 0xffc0
/* 00418198 35090017 */  ori   $t1, $t0, 0x17
/* 0041819C A0690005 */  sb    $t1, 5($v1)
/* 004181A0 8CCB0000 */  lw    $t3, ($a2)
/* 004181A4 8CEA0000 */  lw    $t2, ($a3)
/* 004181A8 97AD003A */  lhu   $t5, 0x3a($sp)
/* 004181AC 000B6100 */  sll   $t4, $t3, 4
/* 004181B0 014C1821 */  addu  $v1, $t2, $t4
/* 004181B4 9462FFF6 */  lhu   $v0, -0xa($v1)
/* 004181B8 2463FFF0 */  addiu $v1, $v1, -0x10
/* 004181BC 34213FFF */  ori   $at, $at, 0x3fff
/* 004181C0 00027D80 */  sll   $t7, $v0, 0x16
/* 004181C4 000F75C2 */  srl   $t6, $t7, 0x17
/* 004181C8 01AEC026 */  xor   $t8, $t5, $t6
/* 004181CC 0018CDC0 */  sll   $t9, $t8, 0x17
/* 004181D0 00194582 */  srl   $t0, $t9, 0x16
/* 004181D4 01024826 */  xor   $t1, $t0, $v0
/* 004181D8 A4690006 */  sh    $t1, 6($v1)
/* 004181DC 8CCA0000 */  lw    $t2, ($a2)
/* 004181E0 8CEB0000 */  lw    $t3, ($a3)
/* 004181E4 000A6100 */  sll   $t4, $t2, 4
/* 004181E8 016C1821 */  addu  $v1, $t3, $t4
/* 004181EC 8C6FFFF8 */  lw    $t7, -8($v1)
/* 004181F0 2463FFF0 */  addiu $v1, $v1, -0x10
/* 004181F4 01E16824 */  and   $t5, $t7, $at
/* 004181F8 3C010002 */  lui   $at, 2
/* 004181FC 34218000 */  ori   $at, $at, 0x8000
/* 00418200 01A17025 */  or    $t6, $t5, $at
/* 00418204 AC6E0008 */  sw    $t6, 8($v1)
/* 00418208 8F9981D8 */  lw    $t9, %call16(create_local_label)($gp)
/* 0041820C 8FA4003C */  lw    $a0, 0x3c($sp)
/* 00418210 0320F809 */  jalr  $t9
/* 00418214 00000000 */   nop   
/* 00418218 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041821C 3C0101FF */  lui   $at, 0x1ff
/* 00418220 3421FFFF */  ori   $at, $at, 0xffff
/* 00418224 8F86897C */  lw     $a2, %got(i_ptr)($gp)
/* 00418228 8F878978 */  lw     $a3, %got(ibuffer)($gp)
/* 0041822C 8CD90000 */  lw    $t9, ($a2)
/* 00418230 8CF80000 */  lw    $t8, ($a3)
/* 00418234 00194100 */  sll   $t0, $t9, 4
/* 00418238 03084821 */  addu  $t1, $t8, $t0
/* 0041823C AD22FFF0 */  sw    $v0, -0x10($t1)
/* 00418240 8CCB0000 */  lw    $t3, ($a2)
/* 00418244 8CEA0000 */  lw    $t2, ($a3)
/* 00418248 000B6100 */  sll   $t4, $t3, 4
/* 0041824C 014C1821 */  addu  $v1, $t2, $t4
/* 00418250 8C6FFFF8 */  lw    $t7, -8($v1)
/* 00418254 2463FFF0 */  addiu $v1, $v1, -0x10
/* 00418258 8F8C8984 */  lw     $t4, %got(d_ptr)($gp)
/* 0041825C 01E16824 */  and   $t5, $t7, $at
/* 00418260 3C019000 */  lui   $at, 0x9000
/* 00418264 01A17025 */  or    $t6, $t5, $at
/* 00418268 AC6E0008 */  sw    $t6, 8($v1)
/* 0041826C 8CD80000 */  lw    $t8, ($a2)
/* 00418270 8CF90000 */  lw    $t9, ($a3)
/* 00418274 3C01FE03 */  lui   $at, 0xfe03
/* 00418278 00184100 */  sll   $t0, $t8, 4
/* 0041827C 03281821 */  addu  $v1, $t9, $t0
/* 00418280 8C69FFF8 */  lw    $t1, -8($v1)
/* 00418284 3421FFFF */  ori   $at, $at, 0xffff
/* 00418288 2463FFF0 */  addiu $v1, $v1, -0x10
/* 0041828C 01215824 */  and   $t3, $t1, $at
/* 00418290 3C010120 */  lui   $at, 0x120
/* 00418294 01615025 */  or    $t2, $t3, $at
/* 00418298 AC6A0008 */  sw    $t2, 8($v1)
/* 0041829C 8CC40000 */  lw    $a0, ($a2)
/* 004182A0 8D8C0000 */  lw    $t4, ($t4)
/* 004182A4 15840007 */  bne   $t4, $a0, .L004182C4
/* 004182A8 00000000 */   nop   
/* 004182AC 8F9981D4 */  lw    $t9, %call16(grow_ibuffer)($gp)
/* 004182B0 0320F809 */  jalr  $t9
/* 004182B4 00000000 */   nop   
/* 004182B8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004182BC 8F86897C */  lw     $a2, %got(i_ptr)($gp)
/* 004182C0 8CC40000 */  lw    $a0, ($a2)
.L004182C4:
/* 004182C4 8F8D89E0 */  lw     $t5, %got(debug_ugen)($gp)
/* 004182C8 248F0001 */  addiu $t7, $a0, 1
/* 004182CC ACCF0000 */  sw    $t7, ($a2)
/* 004182D0 91AD0000 */  lbu   $t5, ($t5)
/* 004182D4 24060009 */  li    $a2, 9
/* 004182D8 51A00023 */  beql  $t5, $zero, .L00418368
/* 004182DC 8FBF0024 */   lw    $ra, 0x24($sp)
/* 004182E0 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 004182E4 8F848954 */  lw     $a0, %got(output)($gp)
/* 004182E8 8F858038 */  lw    $a1, %got(RO_1000962E)($gp)
/* 004182EC 24070009 */  li    $a3, 9
/* 004182F0 8C840000 */  lw    $a0, ($a0)
/* 004182F4 0320F809 */  jalr  $t9
/* 004182F8 24A5962E */   addiu $a1, %lo(RO_1000962E) # addiu $a1, $a1, -0x69d2
/* 004182FC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00418300 240E000A */  li    $t6, 10
/* 00418304 AFAE0010 */  sw    $t6, 0x10($sp)
/* 00418308 8F848954 */  lw     $a0, %got(output)($gp)
/* 0041830C 8F9987D8 */  lw    $t9, %call16(write_enum)($gp)
/* 00418310 8F868038 */  lw    $a2, %got(D_10012570)($gp)
/* 00418314 8C840000 */  lw    $a0, ($a0)
/* 00418318 97A5003A */  lhu   $a1, 0x3a($sp)
/* 0041831C 00003825 */  move  $a3, $zero
/* 00418320 24C62570 */  addiu $a2, %lo(D_10012570) # addiu $a2, $a2, 0x2570
/* 00418324 0320F809 */  jalr  $t9
/* 00418328 AFA4002C */   sw    $a0, 0x2c($sp)
/* 0041832C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00418330 8FA4002C */  lw    $a0, 0x2c($sp)
/* 00418334 8FA5003C */  lw    $a1, 0x3c($sp)
/* 00418338 8F9987E0 */  lw    $t9, %call16(write_cardinal)($gp)
/* 0041833C 2406000C */  li    $a2, 12
/* 00418340 2407000A */  li    $a3, 10
/* 00418344 0320F809 */  jalr  $t9
/* 00418348 00000000 */   nop   
/* 0041834C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00418350 8F9987CC */  lw    $t9, %call16(writeln)($gp)
/* 00418354 8F848954 */  lw     $a0, %got(output)($gp)
/* 00418358 0320F809 */  jalr  $t9
/* 0041835C 8C840000 */   lw    $a0, ($a0)
/* 00418360 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00418364 8FBF0024 */  lw    $ra, 0x24($sp)
.L00418368:
/* 00418368 27BD0038 */  addiu $sp, $sp, 0x38
/* 0041836C 03E00008 */  jr    $ra
/* 00418370 00000000 */   nop   
    .type emit_ll, @function
    .size emit_ll, .-emit_ll
    .end emit_ll

glabel emit_ril
    .ent emit_ril
/* 00418374 3C1C0FC0 */  .cpload $t9
/* 00418378 279C76DC */  
/* 0041837C 0399E021 */  
/* 00418380 8F88897C */  lw     $t0, %got(i_ptr)($gp)
/* 00418384 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 00418388 8F838978 */  lw     $v1, %got(ibuffer)($gp)
/* 0041838C 8D0F0000 */  lw    $t7, ($t0)
/* 00418390 AFBF0024 */  sw    $ra, 0x24($sp)
/* 00418394 8C6E0000 */  lw    $t6, ($v1)
/* 00418398 000FC100 */  sll   $t8, $t7, 4
/* 0041839C AFBC0020 */  sw    $gp, 0x20($sp)
/* 004183A0 AFB0001C */  sw    $s0, 0x1c($sp)
/* 004183A4 AFA40028 */  sw    $a0, 0x28($sp)
/* 004183A8 AFA5002C */  sw    $a1, 0x2c($sp)
/* 004183AC AFA60030 */  sw    $a2, 0x30($sp)
/* 004183B0 AFA70034 */  sw    $a3, 0x34($sp)
/* 004183B4 01D81021 */  addu  $v0, $t6, $t8
/* 004183B8 9059FFF5 */  lbu   $t9, -0xb($v0)
/* 004183BC 2442FFF0 */  addiu $v0, $v0, -0x10
/* 004183C0 3C01FE03 */  lui   $at, 0xfe03
/* 004183C4 332CFFC0 */  andi  $t4, $t9, 0xffc0
/* 004183C8 358D0017 */  ori   $t5, $t4, 0x17
/* 004183CC A04D0005 */  sb    $t5, 5($v0)
/* 004183D0 8D0E0000 */  lw    $t6, ($t0)
/* 004183D4 8C6F0000 */  lw    $t7, ($v1)
/* 004183D8 97B9002A */  lhu   $t9, 0x2a($sp)
/* 004183DC 000EC100 */  sll   $t8, $t6, 4
/* 004183E0 01F81021 */  addu  $v0, $t7, $t8
/* 004183E4 9449FFF6 */  lhu   $t1, -0xa($v0)
/* 004183E8 2442FFF0 */  addiu $v0, $v0, -0x10
/* 004183EC 3421FFFF */  ori   $at, $at, 0xffff
/* 004183F0 00096580 */  sll   $t4, $t1, 0x16
/* 004183F4 000C6DC2 */  srl   $t5, $t4, 0x17
/* 004183F8 032D7026 */  xor   $t6, $t9, $t5
/* 004183FC 000E7DC0 */  sll   $t7, $t6, 0x17
/* 00418400 000FC582 */  srl   $t8, $t7, 0x16
/* 00418404 03096026 */  xor   $t4, $t8, $t1
/* 00418408 A44C0006 */  sh    $t4, 6($v0)
/* 0041840C 8D0D0000 */  lw    $t5, ($t0)
/* 00418410 8C790000 */  lw    $t9, ($v1)
/* 00418414 93AF002F */  lbu   $t7, 0x2f($sp)
/* 00418418 000D7100 */  sll   $t6, $t5, 4
/* 0041841C 032E1021 */  addu  $v0, $t9, $t6
/* 00418420 8C4AFFF8 */  lw    $t2, -8($v0)
/* 00418424 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00418428 000AC642 */  srl   $t8, $t2, 0x19
/* 0041842C 01F86026 */  xor   $t4, $t7, $t8
/* 00418430 000C6E40 */  sll   $t5, $t4, 0x19
/* 00418434 01AAC826 */  xor   $t9, $t5, $t2
/* 00418438 AC590008 */  sw    $t9, 8($v0)
/* 0041843C 8D0F0000 */  lw    $t7, ($t0)
/* 00418440 8C6E0000 */  lw    $t6, ($v1)
/* 00418444 000FC100 */  sll   $t8, $t7, 4
/* 00418448 01D81021 */  addu  $v0, $t6, $t8
/* 0041844C 8C4CFFF8 */  lw    $t4, -8($v0)
/* 00418450 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00418454 01816824 */  and   $t5, $t4, $at
/* 00418458 3C010120 */  lui   $at, 0x120
/* 0041845C 01A1C825 */  or    $t9, $t5, $at
/* 00418460 AC590008 */  sw    $t9, 8($v0)
/* 00418464 8D180000 */  lw    $t8, ($t0)
/* 00418468 8C6E0000 */  lw    $t6, ($v1)
/* 0041846C 8FAF0030 */  lw    $t7, 0x30($sp)
/* 00418470 00186100 */  sll   $t4, $t8, 4
/* 00418474 01CC6821 */  addu  $t5, $t6, $t4
/* 00418478 ADAFFFFC */  sw    $t7, -4($t5)
/* 0041847C 8D180000 */  lw    $t8, ($t0)
/* 00418480 8C790000 */  lw    $t9, ($v1)
/* 00418484 3C01FFFC */  lui   $at, 0xfffc
/* 00418488 00187100 */  sll   $t6, $t8, 4
/* 0041848C 032E1021 */  addu  $v0, $t9, $t6
/* 00418490 8C4CFFF8 */  lw    $t4, -8($v0)
/* 00418494 34213FFF */  ori   $at, $at, 0x3fff
/* 00418498 2442FFF0 */  addiu $v0, $v0, -0x10
/* 0041849C 01817824 */  and   $t7, $t4, $at
/* 004184A0 3C010003 */  lui   $at, 3
/* 004184A4 01E16825 */  or    $t5, $t7, $at
/* 004184A8 AC4D0008 */  sw    $t5, 8($v0)
/* 004184AC 8D0E0000 */  lw    $t6, ($t0)
/* 004184B0 8C790000 */  lw    $t9, ($v1)
/* 004184B4 8FB80034 */  lw    $t8, 0x34($sp)
/* 004184B8 000E6100 */  sll   $t4, $t6, 4
/* 004184BC 8F8D8984 */  lw     $t5, %got(d_ptr)($gp)
/* 004184C0 032C7821 */  addu  $t7, $t9, $t4
/* 004184C4 ADF8FFF0 */  sw    $t8, -0x10($t7)
/* 004184C8 8D0B0000 */  lw    $t3, ($t0)
/* 004184CC 8DAD0000 */  lw    $t5, ($t5)
/* 004184D0 15AB0007 */  bne   $t5, $t3, .L004184F0
/* 004184D4 00000000 */   nop   
/* 004184D8 8F9981D4 */  lw    $t9, %call16(grow_ibuffer)($gp)
/* 004184DC 0320F809 */  jalr  $t9
/* 004184E0 00000000 */   nop   
/* 004184E4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004184E8 8F88897C */  lw     $t0, %got(i_ptr)($gp)
/* 004184EC 8D0B0000 */  lw    $t3, ($t0)
.L004184F0:
/* 004184F0 8F9989E0 */  lw     $t9, %got(debug_ugen)($gp)
/* 004184F4 256E0001 */  addiu $t6, $t3, 1
/* 004184F8 AD0E0000 */  sw    $t6, ($t0)
/* 004184FC 93390000 */  lbu   $t9, ($t9)
/* 00418500 2406000A */  li    $a2, 10
/* 00418504 5320003D */  beql  $t9, $zero, .L004185FC
/* 00418508 8FBF0024 */   lw    $ra, 0x24($sp)
/* 0041850C 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 00418510 8F848954 */  lw     $a0, %got(output)($gp)
/* 00418514 8F858038 */  lw    $a1, %got(RO_10009637)($gp)
/* 00418518 2407000A */  li    $a3, 10
/* 0041851C 8C840000 */  lw    $a0, ($a0)
/* 00418520 0320F809 */  jalr  $t9
/* 00418524 24A59637 */   addiu $a1, %lo(RO_10009637) # addiu $a1, $a1, -0x69c9
/* 00418528 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041852C 240C000A */  li    $t4, 10
/* 00418530 AFAC0010 */  sw    $t4, 0x10($sp)
/* 00418534 8F908954 */  lw     $s0, %got(output)($gp)
/* 00418538 8F9987D8 */  lw    $t9, %call16(write_enum)($gp)
/* 0041853C 8F868038 */  lw    $a2, %got(D_10012570)($gp)
/* 00418540 8E100000 */  lw    $s0, ($s0)
/* 00418544 97A5002A */  lhu   $a1, 0x2a($sp)
/* 00418548 00003825 */  move  $a3, $zero
/* 0041854C 24C62570 */  addiu $a2, %lo(D_10012570) # addiu $a2, $a2, 0x2570
/* 00418550 0320F809 */  jalr  $t9
/* 00418554 02002025 */   move  $a0, $s0
/* 00418558 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041855C 02002025 */  move  $a0, $s0
/* 00418560 24050020 */  li    $a1, 32
/* 00418564 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 00418568 24060001 */  li    $a2, 1
/* 0041856C 2407000A */  li    $a3, 10
/* 00418570 0320F809 */  jalr  $t9
/* 00418574 00000000 */   nop   
/* 00418578 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041857C 2418000A */  li    $t8, 10
/* 00418580 AFB80010 */  sw    $t8, 0x10($sp)
/* 00418584 8F9987D8 */  lw    $t9, %call16(write_enum)($gp)
/* 00418588 8F868038 */  lw    $a2, %got(D_1001340C)($gp)
/* 0041858C 02002025 */  move  $a0, $s0
/* 00418590 93A5002F */  lbu   $a1, 0x2f($sp)
/* 00418594 00003825 */  move  $a3, $zero
/* 00418598 0320F809 */  jalr  $t9
/* 0041859C 24C6340C */   addiu $a2, %lo(D_1001340C) # addiu $a2, $a2, 0x340c
/* 004185A0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004185A4 02002025 */  move  $a0, $s0
/* 004185A8 8FA50030 */  lw    $a1, 0x30($sp)
/* 004185AC 8F9987DC */  lw    $t9, %call16(write_integer)($gp)
/* 004185B0 2406000C */  li    $a2, 12
/* 004185B4 2407000A */  li    $a3, 10
/* 004185B8 0320F809 */  jalr  $t9
/* 004185BC 00000000 */   nop   
/* 004185C0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004185C4 8FA50034 */  lw    $a1, 0x34($sp)
/* 004185C8 2406000C */  li    $a2, 12
/* 004185CC 8F9987E0 */  lw    $t9, %call16(write_cardinal)($gp)
/* 004185D0 8F848954 */  lw     $a0, %got(output)($gp)
/* 004185D4 2407000A */  li    $a3, 10
/* 004185D8 0320F809 */  jalr  $t9
/* 004185DC 8C840000 */   lw    $a0, ($a0)
/* 004185E0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004185E4 8F9987CC */  lw    $t9, %call16(writeln)($gp)
/* 004185E8 8F848954 */  lw     $a0, %got(output)($gp)
/* 004185EC 0320F809 */  jalr  $t9
/* 004185F0 8C840000 */   lw    $a0, ($a0)
/* 004185F4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004185F8 8FBF0024 */  lw    $ra, 0x24($sp)
.L004185FC:
/* 004185FC 8FB0001C */  lw    $s0, 0x1c($sp)
/* 00418600 27BD0028 */  addiu $sp, $sp, 0x28
/* 00418604 03E00008 */  jr    $ra
/* 00418608 00000000 */   nop   
    .type emit_ril, @function
    .size emit_ril, .-emit_ril
    .end emit_ril

glabel emit_rill
    .ent emit_rill
    # 0041BCC0 func_0041BCC0
    # 0041BD30 func_0041BD30
    # 0041BDC8 func_0041BDC8
    # 0041BE80 func_0041BE80
    # 0041BF38 func_0041BF38
    # 0041BFF0 func_0041BFF0
    # 0041C0A8 func_0041C0A8
    # 0041C160 func_0041C160
    # 0041C218 func_0041C218
    # 0041C2D0 func_0041C2D0
    # 0041C388 emit_branch_rill
    # 0041CCD0 func_0041CCD0
    # 0041CD64 func_0041CD64
    # 0041CE18 func_0041CE18
    # 0041CECC func_0041CECC
    # 0041CF80 func_0041CF80
    # 0041F368 func_0041F368
    # 0041F4F0 func_0041F4F0
    # 0041F678 func_0041F678
    # 0041F800 func_0041F800
    # 0041F988 func_0041F988
    # 0041FB10 func_0041FB10
    # 00423D28 jump
    # 0042BDAC eval
/* 0041860C 3C1C0FC0 */  .cpload $t9
/* 00418610 279C7444 */  
/* 00418614 0399E021 */  
/* 00418618 8F83897C */  lw     $v1, %got(i_ptr)($gp)
/* 0041861C 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 00418620 8F8A8978 */  lw     $t2, %got(ibuffer)($gp)
/* 00418624 8C6F0000 */  lw    $t7, ($v1)
/* 00418628 AFBF0024 */  sw    $ra, 0x24($sp)
/* 0041862C 8D4E0000 */  lw    $t6, ($t2)
/* 00418630 000FC100 */  sll   $t8, $t7, 4
/* 00418634 AFBC0020 */  sw    $gp, 0x20($sp)
/* 00418638 AFB0001C */  sw    $s0, 0x1c($sp)
/* 0041863C AFA40028 */  sw    $a0, 0x28($sp)
/* 00418640 AFA5002C */  sw    $a1, 0x2c($sp)
/* 00418644 AFA60030 */  sw    $a2, 0x30($sp)
/* 00418648 AFA70034 */  sw    $a3, 0x34($sp)
/* 0041864C 01D81021 */  addu  $v0, $t6, $t8
/* 00418650 9059FFF5 */  lbu   $t9, -0xb($v0)
/* 00418654 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00418658 3C01FE03 */  lui   $at, 0xfe03
/* 0041865C 332BFFC0 */  andi  $t3, $t9, 0xffc0
/* 00418660 356C0017 */  ori   $t4, $t3, 0x17
/* 00418664 A04C0005 */  sb    $t4, 5($v0)
/* 00418668 8C6F0000 */  lw    $t7, ($v1)
/* 0041866C 8D4D0000 */  lw    $t5, ($t2)
/* 00418670 97B8002A */  lhu   $t8, 0x2a($sp)
/* 00418674 000F7100 */  sll   $t6, $t7, 4
/* 00418678 01AE1021 */  addu  $v0, $t5, $t6
/* 0041867C 9448FFF6 */  lhu   $t0, -0xa($v0)
/* 00418680 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00418684 3421FFFF */  ori   $at, $at, 0xffff
/* 00418688 0008CD80 */  sll   $t9, $t0, 0x16
/* 0041868C 00195DC2 */  srl   $t3, $t9, 0x17
/* 00418690 030B6026 */  xor   $t4, $t8, $t3
/* 00418694 000C7DC0 */  sll   $t7, $t4, 0x17
/* 00418698 000F6D82 */  srl   $t5, $t7, 0x16
/* 0041869C 01A87026 */  xor   $t6, $t5, $t0
/* 004186A0 A44E0006 */  sh    $t6, 6($v0)
/* 004186A4 8C780000 */  lw    $t8, ($v1)
/* 004186A8 8D590000 */  lw    $t9, ($t2)
/* 004186AC 93AC002F */  lbu   $t4, 0x2f($sp)
/* 004186B0 00185900 */  sll   $t3, $t8, 4
/* 004186B4 032B1021 */  addu  $v0, $t9, $t3
/* 004186B8 8C49FFF8 */  lw    $t1, -8($v0)
/* 004186BC 2442FFF0 */  addiu $v0, $v0, -0x10
/* 004186C0 00097E42 */  srl   $t7, $t1, 0x19
/* 004186C4 018F6826 */  xor   $t5, $t4, $t7
/* 004186C8 000D7640 */  sll   $t6, $t5, 0x19
/* 004186CC 01C9C026 */  xor   $t8, $t6, $t1
/* 004186D0 AC580008 */  sw    $t8, 8($v0)
/* 004186D4 8C6B0000 */  lw    $t3, ($v1)
/* 004186D8 8D590000 */  lw    $t9, ($t2)
/* 004186DC 000B6100 */  sll   $t4, $t3, 4
/* 004186E0 032C1021 */  addu  $v0, $t9, $t4
/* 004186E4 8C4FFFF8 */  lw    $t7, -8($v0)
/* 004186E8 2442FFF0 */  addiu $v0, $v0, -0x10
/* 004186EC 01E16824 */  and   $t5, $t7, $at
/* 004186F0 3C010120 */  lui   $at, 0x120
/* 004186F4 01A17025 */  or    $t6, $t5, $at
/* 004186F8 AC4E0008 */  sw    $t6, 8($v0)
/* 004186FC 8C790000 */  lw    $t9, ($v1)
/* 00418700 8D4B0000 */  lw    $t3, ($t2)
/* 00418704 8FB80030 */  lw    $t8, 0x30($sp)
/* 00418708 00196100 */  sll   $t4, $t9, 4
/* 0041870C 016C7821 */  addu  $t7, $t3, $t4
/* 00418710 ADF8FFFC */  sw    $t8, -4($t7)
/* 00418714 8C6E0000 */  lw    $t6, ($v1)
/* 00418718 8D4D0000 */  lw    $t5, ($t2)
/* 0041871C 3C01FFFC */  lui   $at, 0xfffc
/* 00418720 000EC900 */  sll   $t9, $t6, 4
/* 00418724 01B91021 */  addu  $v0, $t5, $t9
/* 00418728 8C4BFFF8 */  lw    $t3, -8($v0)
/* 0041872C 34213FFF */  ori   $at, $at, 0x3fff
/* 00418730 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00418734 01616024 */  and   $t4, $t3, $at
/* 00418738 3C010003 */  lui   $at, 3
/* 0041873C 0181C025 */  or    $t8, $t4, $at
/* 00418740 AC580008 */  sw    $t8, 8($v0)
/* 00418744 8F9981D8 */  lw    $t9, %call16(create_local_label)($gp)
/* 00418748 8FA40034 */  lw    $a0, 0x34($sp)
/* 0041874C 0320F809 */  jalr  $t9
/* 00418750 00000000 */   nop   
/* 00418754 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00418758 8F83897C */  lw     $v1, %got(i_ptr)($gp)
/* 0041875C 8F8A8978 */  lw     $t2, %got(ibuffer)($gp)
/* 00418760 8F8B8984 */  lw     $t3, %got(d_ptr)($gp)
/* 00418764 8C6E0000 */  lw    $t6, ($v1)
/* 00418768 8D4F0000 */  lw    $t7, ($t2)
/* 0041876C 000E6900 */  sll   $t5, $t6, 4
/* 00418770 01EDC821 */  addu  $t9, $t7, $t5
/* 00418774 AF22FFF0 */  sw    $v0, -0x10($t9)
/* 00418778 8C640000 */  lw    $a0, ($v1)
/* 0041877C 8D6B0000 */  lw    $t3, ($t3)
/* 00418780 15640007 */  bne   $t3, $a0, .L004187A0
/* 00418784 00000000 */   nop   
/* 00418788 8F9981D4 */  lw    $t9, %call16(grow_ibuffer)($gp)
/* 0041878C 0320F809 */  jalr  $t9
/* 00418790 00000000 */   nop   
/* 00418794 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00418798 8F83897C */  lw     $v1, %got(i_ptr)($gp)
/* 0041879C 8C640000 */  lw    $a0, ($v1)
.L004187A0:
/* 004187A0 8F9889E0 */  lw     $t8, %got(debug_ugen)($gp)
/* 004187A4 248C0001 */  addiu $t4, $a0, 1
/* 004187A8 AC6C0000 */  sw    $t4, ($v1)
/* 004187AC 93180000 */  lbu   $t8, ($t8)
/* 004187B0 2406000B */  li    $a2, 11
/* 004187B4 5300003D */  beql  $t8, $zero, .L004188AC
/* 004187B8 8FBF0024 */   lw    $ra, 0x24($sp)
/* 004187BC 8F9987D4 */  lw    $t9, %call16(write_string)($gp)
/* 004187C0 8F848954 */  lw     $a0, %got(output)($gp)
/* 004187C4 8F858038 */  lw    $a1, %got(RO_10009641)($gp)
/* 004187C8 2407000B */  li    $a3, 11
/* 004187CC 8C840000 */  lw    $a0, ($a0)
/* 004187D0 0320F809 */  jalr  $t9
/* 004187D4 24A59641 */   addiu $a1, %lo(RO_10009641) # addiu $a1, $a1, -0x69bf
/* 004187D8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004187DC 240E000A */  li    $t6, 10
/* 004187E0 AFAE0010 */  sw    $t6, 0x10($sp)
/* 004187E4 8F908954 */  lw     $s0, %got(output)($gp)
/* 004187E8 8F9987D8 */  lw    $t9, %call16(write_enum)($gp)
/* 004187EC 8F868038 */  lw    $a2, %got(D_10012570)($gp)
/* 004187F0 8E100000 */  lw    $s0, ($s0)
/* 004187F4 97A5002A */  lhu   $a1, 0x2a($sp)
/* 004187F8 00003825 */  move  $a3, $zero
/* 004187FC 24C62570 */  addiu $a2, %lo(D_10012570) # addiu $a2, $a2, 0x2570
/* 00418800 0320F809 */  jalr  $t9
/* 00418804 02002025 */   move  $a0, $s0
/* 00418808 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041880C 02002025 */  move  $a0, $s0
/* 00418810 24050020 */  li    $a1, 32
/* 00418814 8F9987D0 */  lw    $t9, %call16(write_char)($gp)
/* 00418818 24060001 */  li    $a2, 1
/* 0041881C 2407000A */  li    $a3, 10
/* 00418820 0320F809 */  jalr  $t9
/* 00418824 00000000 */   nop   
/* 00418828 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041882C 240F000A */  li    $t7, 10
/* 00418830 AFAF0010 */  sw    $t7, 0x10($sp)
/* 00418834 8F9987D8 */  lw    $t9, %call16(write_enum)($gp)
/* 00418838 8F868038 */  lw    $a2, %got(D_1001340C)($gp)
/* 0041883C 02002025 */  move  $a0, $s0
/* 00418840 93A5002F */  lbu   $a1, 0x2f($sp)
/* 00418844 00003825 */  move  $a3, $zero
/* 00418848 0320F809 */  jalr  $t9
/* 0041884C 24C6340C */   addiu $a2, %lo(D_1001340C) # addiu $a2, $a2, 0x340c
/* 00418850 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00418854 02002025 */  move  $a0, $s0
/* 00418858 8FA50030 */  lw    $a1, 0x30($sp)
/* 0041885C 8F9987DC */  lw    $t9, %call16(write_integer)($gp)
/* 00418860 2406000C */  li    $a2, 12
/* 00418864 2407000A */  li    $a3, 10
/* 00418868 0320F809 */  jalr  $t9
/* 0041886C 00000000 */   nop   
/* 00418870 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00418874 8FA50034 */  lw    $a1, 0x34($sp)
/* 00418878 2406000C */  li    $a2, 12
/* 0041887C 8F9987E0 */  lw    $t9, %call16(write_cardinal)($gp)
/* 00418880 8F848954 */  lw     $a0, %got(output)($gp)
/* 00418884 2407000A */  li    $a3, 10
/* 00418888 0320F809 */  jalr  $t9
/* 0041888C 8C840000 */   lw    $a0, ($a0)
/* 00418890 8FBC0020 */  lw    $gp, 0x20($sp)
/* 00418894 8F9987CC */  lw    $t9, %call16(writeln)($gp)
/* 00418898 8F848954 */  lw     $a0, %got(output)($gp)
/* 0041889C 0320F809 */  jalr  $t9
/* 004188A0 8C840000 */   lw    $a0, ($a0)
/* 004188A4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 004188A8 8FBF0024 */  lw    $ra, 0x24($sp)
.L004188AC:
/* 004188AC 8FB0001C */  lw    $s0, 0x1c($sp)
/* 004188B0 27BD0028 */  addiu $sp, $sp, 0x28
/* 004188B4 03E00008 */  jr    $ra
/* 004188B8 00000000 */   nop   
    .type emit_rill, @function
    .size emit_rill, .-emit_rill
    .end emit_rill

glabel define_label
    .ent define_label
    # 0041AFE4 func_0041AFE4
    # 0041B07C func_0041B07C
    # 0041B1BC func_0041B1BC
    # 0041B2FC func_0041B2FC
    # 0041B43C func_0041B43C
    # 0041B57C func_0041B57C
    # 0041B6BC func_0041B6BC
    # 0041B7FC func_0041B7FC
    # 0041B93C func_0041B93C
    # 0041BD30 func_0041BD30
    # 0041BDC8 func_0041BDC8
    # 0041BE80 func_0041BE80
    # 0041BF38 func_0041BF38
    # 0041BFF0 func_0041BFF0
    # 0041C0A8 func_0041C0A8
    # 0041C160 func_0041C160
    # 0041C218 func_0041C218
    # 0041C2D0 func_0041C2D0
    # 0041C710 func_0041C710
    # 0041C7AC func_0041C7AC
    # 0041C86C func_0041C86C
    # 0041C92C func_0041C92C
    # 0041C9EC func_0041C9EC
    # 0041CCD0 func_0041CCD0
    # 0041CD64 func_0041CD64
    # 0041CE18 func_0041CE18
    # 0041CECC func_0041CECC
    # 0041CF80 func_0041CF80
    # 0041D534 func_0041D534
    # 0041D958 func_0041D958
    # 0041DF18 func_0041DF18
    # 0041E05C func_0041E05C
    # 0041E1C0 func_0041E1C0
    # 0041E304 func_0041E304
    # 0041EE78 func_0041EE78
    # 0041F368 func_0041F368
    # 0041F4F0 func_0041F4F0
    # 0041F678 func_0041F678
    # 0041F800 func_0041F800
    # 0041F988 func_0041F988
    # 0041FB10 func_0041FB10
    # 00420590 func_00420590
    # 00420810 gen_entry_exit
    # 00421170 gen_entry
    # 00424240 trap
    # 004285F0 eval_fp_cond
    # 004287AC eval_fp_min_max
    # 00428D14 eval_mov
    # 0042A1AC eval_irel
    # 0042BDAC eval
    # 004330EC eval_int_flt_cvt
    # 00433494 eval_flt_int_cvt
    # 004340D4 func_004340D4
/* 004188BC 3C1C0FC0 */  .cpload $t9
/* 004188C0 279C7194 */  
/* 004188C4 0399E021 */  
/* 004188C8 8F98897C */  lw     $t8, %got(i_ptr)($gp)
/* 004188CC 8F8E8978 */  lw     $t6, %got(ibuffer)($gp)
/* 004188D0 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 004188D4 8F180000 */  lw    $t8, ($t8)
/* 004188D8 AFBF001C */  sw    $ra, 0x1c($sp)
/* 004188DC AFBC0018 */  sw    $gp, 0x18($sp)
/* 004188E0 8DCF0000 */  lw    $t7, ($t6)
/* 004188E4 0018C900 */  sll   $t9, $t8, 4
/* 004188E8 01F91021 */  addu  $v0, $t7, $t9
/* 004188EC 9048FFF5 */  lbu   $t0, -0xb($v0)
/* 004188F0 2442FFF0 */  addiu $v0, $v0, -0x10
/* 004188F4 3109FFC0 */  andi  $t1, $t0, 0xffc0
/* 004188F8 A0490005 */  sb    $t1, 5($v0)
/* 004188FC 8F9981D8 */  lw    $t9, %call16(create_local_label)($gp)
/* 00418900 0320F809 */  jalr  $t9
/* 00418904 00000000 */   nop   
/* 00418908 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041890C 8F84897C */  lw     $a0, %got(i_ptr)($gp)
/* 00418910 8F8A8978 */  lw     $t2, %got(ibuffer)($gp)
/* 00418914 8F988984 */  lw     $t8, %got(d_ptr)($gp)
/* 00418918 8C8C0000 */  lw    $t4, ($a0)
/* 0041891C 8D4B0000 */  lw    $t3, ($t2)
/* 00418920 000C6900 */  sll   $t5, $t4, 4
/* 00418924 016D7021 */  addu  $t6, $t3, $t5
/* 00418928 ADC2FFF0 */  sw    $v0, -0x10($t6)
/* 0041892C 8C830000 */  lw    $v1, ($a0)
/* 00418930 8F180000 */  lw    $t8, ($t8)
/* 00418934 57030008 */  bnel  $t8, $v1, .L00418958
/* 00418938 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0041893C 8F9981D4 */  lw    $t9, %call16(grow_ibuffer)($gp)
/* 00418940 0320F809 */  jalr  $t9
/* 00418944 00000000 */   nop   
/* 00418948 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041894C 8F84897C */  lw     $a0, %got(i_ptr)($gp)
/* 00418950 8C830000 */  lw    $v1, ($a0)
/* 00418954 8FBF001C */  lw    $ra, 0x1c($sp)
.L00418958:
/* 00418958 246F0001 */  addiu $t7, $v1, 1
/* 0041895C AC8F0000 */  sw    $t7, ($a0)
/* 00418960 03E00008 */  jr    $ra
/* 00418964 27BD0020 */   addiu $sp, $sp, 0x20
    .type define_label, @function
    .size define_label, .-define_label
    .end define_label

glabel emit_itext
    .ent emit_itext
    # 0042BDAC eval
/* 00418968 3C1C0FC0 */  .cpload $t9
/* 0041896C 279C70E8 */  
/* 00418970 0399E021 */  
/* 00418974 8F85897C */  lw     $a1, %got(i_ptr)($gp)
/* 00418978 8F838978 */  lw     $v1, %got(ibuffer)($gp)
/* 0041897C 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00418980 8CAF0000 */  lw    $t7, ($a1)
/* 00418984 8C6E0000 */  lw    $t6, ($v1)
/* 00418988 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0041898C 000FC100 */  sll   $t8, $t7, 4
/* 00418990 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00418994 01D81021 */  addu  $v0, $t6, $t8
/* 00418998 9059FFF5 */  lbu   $t9, -0xb($v0)
/* 0041899C 2442FFF0 */  addiu $v0, $v0, -0x10
/* 004189A0 3329FFC0 */  andi  $t1, $t9, 0xffc0
/* 004189A4 352A0015 */  ori   $t2, $t1, 0x15
/* 004189A8 A04A0005 */  sb    $t2, 5($v0)
/* 004189AC 8CAC0000 */  lw    $t4, ($a1)
/* 004189B0 8C6B0000 */  lw    $t3, ($v1)
/* 004189B4 000C6900 */  sll   $t5, $t4, 4
/* 004189B8 016D7821 */  addu  $t7, $t3, $t5
/* 004189BC ADE0FFF0 */  sw    $zero, -0x10($t7)
/* 004189C0 8CB90000 */  lw    $t9, ($a1)
/* 004189C4 8C780000 */  lw    $t8, ($v1)
/* 004189C8 8C8E0000 */  lw    $t6, ($a0)
/* 004189CC 00194900 */  sll   $t1, $t9, 4
/* 004189D0 8F8C8984 */  lw     $t4, %got(d_ptr)($gp)
/* 004189D4 03095021 */  addu  $t2, $t8, $t1
/* 004189D8 AD4EFFF8 */  sw    $t6, -8($t2)
/* 004189DC 8CA60000 */  lw    $a2, ($a1)
/* 004189E0 8D8C0000 */  lw    $t4, ($t4)
/* 004189E4 1586000A */  bne   $t4, $a2, .L00418A10
/* 004189E8 00000000 */   nop   
/* 004189EC 8F9981D4 */  lw    $t9, %call16(grow_ibuffer)($gp)
/* 004189F0 AFA40020 */  sw    $a0, 0x20($sp)
/* 004189F4 0320F809 */  jalr  $t9
/* 004189F8 00000000 */   nop   
/* 004189FC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00418A00 8FA40020 */  lw    $a0, 0x20($sp)
/* 00418A04 8F85897C */  lw     $a1, %got(i_ptr)($gp)
/* 00418A08 8F838978 */  lw     $v1, %got(ibuffer)($gp)
/* 00418A0C 8CA60000 */  lw    $a2, ($a1)
.L00418A10:
/* 00418A10 8F898038 */  lw    $t1, %got(RO_1000964C)($gp)
/* 00418A14 24CB0001 */  addiu $t3, $a2, 1
/* 00418A18 ACAB0000 */  sw    $t3, ($a1)
/* 00418A1C 8CAF0000 */  lw    $t7, ($a1)
/* 00418A20 2529964C */  addiu $t1, %lo(RO_1000964C) # addiu $t1, $t1, -0x69b4
/* 00418A24 8C6D0000 */  lw    $t5, ($v1)
/* 00418A28 892A0000 */  lwl   $t2, ($t1)
/* 00418A2C 992A0003 */  lwr   $t2, 3($t1)
/* 00418A30 000FC900 */  sll   $t9, $t7, 4
/* 00418A34 01B9C021 */  addu  $t8, $t5, $t9
/* 00418A38 AB0AFFF0 */  swl   $t2, -0x10($t8)
/* 00418A3C BB0AFFF3 */  swr   $t2, -0xd($t8)
/* 00418A40 892E0004 */  lwl   $t6, 4($t1)
/* 00418A44 992E0007 */  lwr   $t6, 7($t1)
/* 00418A48 AB0EFFF4 */  swl   $t6, -0xc($t8)
/* 00418A4C BB0EFFF7 */  swr   $t6, -9($t8)
/* 00418A50 892A0008 */  lwl   $t2, 8($t1)
/* 00418A54 992A000B */  lwr   $t2, 0xb($t1)
/* 00418A58 AB0AFFF8 */  swl   $t2, -8($t8)
/* 00418A5C BB0AFFFB */  swr   $t2, -5($t8)
/* 00418A60 892E000C */  lwl   $t6, 0xc($t1)
/* 00418A64 992E000F */  lwr   $t6, 0xf($t1)
/* 00418A68 AB0EFFFC */  swl   $t6, -4($t8)
/* 00418A6C BB0EFFFF */  swr   $t6, -1($t8)
/* 00418A70 8C870000 */  lw    $a3, ($a0)
/* 00418A74 10E00039 */  beqz  $a3, .L00418B5C
/* 00418A78 24E70001 */   addiu $a3, $a3, 1
/* 00418A7C 24E8FFFF */  addiu $t0, $a3, -1
/* 00418A80 31080003 */  andi  $t0, $t0, 3
/* 00418A84 1100000F */  beqz  $t0, .L00418AC4
/* 00418A88 24020001 */   li    $v0, 1
/* 00418A8C 25060001 */  addiu $a2, $t0, 1
.L00418A90:
/* 00418A90 8CB90000 */  lw    $t9, ($a1)
/* 00418A94 8C8C0004 */  lw    $t4, 4($a0)
/* 00418A98 8C6D0000 */  lw    $t5, ($v1)
/* 00418A9C 0019C100 */  sll   $t8, $t9, 4
/* 00418AA0 01825821 */  addu  $t3, $t4, $v0
/* 00418AA4 01B84821 */  addu  $t1, $t5, $t8
/* 00418AA8 916FFFFF */  lbu   $t7, -1($t3)
/* 00418AAC 01227021 */  addu  $t6, $t1, $v0
/* 00418AB0 24420001 */  addiu $v0, $v0, 1
/* 00418AB4 14C2FFF6 */  bne   $a2, $v0, .L00418A90
/* 00418AB8 A1CFFFEF */   sb    $t7, -0x11($t6)
/* 00418ABC 10470027 */  beq   $v0, $a3, .L00418B5C
/* 00418AC0 00000000 */   nop   
.L00418AC4:
/* 00418AC4 8C8A0004 */  lw    $t2, 4($a0)
/* 00418AC8 8CAD0000 */  lw    $t5, ($a1)
/* 00418ACC 8C790000 */  lw    $t9, ($v1)
/* 00418AD0 01426021 */  addu  $t4, $t2, $v0
/* 00418AD4 918BFFFF */  lbu   $t3, -1($t4)
/* 00418AD8 000DC100 */  sll   $t8, $t5, 4
/* 00418ADC 03384821 */  addu  $t1, $t9, $t8
/* 00418AE0 01227821 */  addu  $t7, $t1, $v0
/* 00418AE4 A1EBFFEF */  sb    $t3, -0x11($t7)
/* 00418AE8 8C8E0004 */  lw    $t6, 4($a0)
/* 00418AEC 8CB90000 */  lw    $t9, ($a1)
/* 00418AF0 8C6D0000 */  lw    $t5, ($v1)
/* 00418AF4 01C25021 */  addu  $t2, $t6, $v0
/* 00418AF8 914C0000 */  lbu   $t4, ($t2)
/* 00418AFC 0019C100 */  sll   $t8, $t9, 4
/* 00418B00 01B84821 */  addu  $t1, $t5, $t8
/* 00418B04 01225821 */  addu  $t3, $t1, $v0
/* 00418B08 A16CFFF0 */  sb    $t4, -0x10($t3)
/* 00418B0C 8C8F0004 */  lw    $t7, 4($a0)
/* 00418B10 8CAD0000 */  lw    $t5, ($a1)
/* 00418B14 8C790000 */  lw    $t9, ($v1)
/* 00418B18 01E27021 */  addu  $t6, $t7, $v0
/* 00418B1C 91CA0001 */  lbu   $t2, 1($t6)
/* 00418B20 000DC100 */  sll   $t8, $t5, 4
/* 00418B24 03384821 */  addu  $t1, $t9, $t8
/* 00418B28 01226021 */  addu  $t4, $t1, $v0
/* 00418B2C A18AFFF1 */  sb    $t2, -0xf($t4)
/* 00418B30 8CB90000 */  lw    $t9, ($a1)
/* 00418B34 8C6D0000 */  lw    $t5, ($v1)
/* 00418B38 8C8B0004 */  lw    $t3, 4($a0)
/* 00418B3C 0019C100 */  sll   $t8, $t9, 4
/* 00418B40 01B84821 */  addu  $t1, $t5, $t8
/* 00418B44 01627821 */  addu  $t7, $t3, $v0
/* 00418B48 91EE0002 */  lbu   $t6, 2($t7)
/* 00418B4C 01225021 */  addu  $t2, $t1, $v0
/* 00418B50 24420004 */  addiu $v0, $v0, 4
/* 00418B54 1447FFDB */  bne   $v0, $a3, .L00418AC4
/* 00418B58 A14EFFF2 */   sb    $t6, -0xe($t2)
.L00418B5C:
/* 00418B5C 8F8C8984 */  lw     $t4, %got(d_ptr)($gp)
/* 00418B60 8CA60000 */  lw    $a2, ($a1)
/* 00418B64 8D8C0000 */  lw    $t4, ($t4)
/* 00418B68 55860008 */  bnel  $t4, $a2, .L00418B8C
/* 00418B6C 8FBF001C */   lw    $ra, 0x1c($sp)
/* 00418B70 8F9981D4 */  lw    $t9, %call16(grow_ibuffer)($gp)
/* 00418B74 0320F809 */  jalr  $t9
/* 00418B78 00000000 */   nop   
/* 00418B7C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00418B80 8F85897C */  lw     $a1, %got(i_ptr)($gp)
/* 00418B84 8CA60000 */  lw    $a2, ($a1)
/* 00418B88 8FBF001C */  lw    $ra, 0x1c($sp)
.L00418B8C:
/* 00418B8C 24CB0001 */  addiu $t3, $a2, 1
/* 00418B90 ACAB0000 */  sw    $t3, ($a1)
/* 00418B94 03E00008 */  jr    $ra
/* 00418B98 27BD0020 */   addiu $sp, $sp, 0x20
    .type emit_itext, @function
    .size emit_itext, .-emit_itext
    .end emit_itext

glabel demit_itext
    .ent demit_itext
    # 00420810 gen_entry_exit
/* 00418B9C 3C1C0FC0 */  .cpload $t9
/* 00418BA0 279C6EB4 */  
/* 00418BA4 0399E021 */  
/* 00418BA8 8F858984 */  lw     $a1, %got(d_ptr)($gp)
/* 00418BAC 8F838978 */  lw     $v1, %got(ibuffer)($gp)
/* 00418BB0 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00418BB4 8CAF0000 */  lw    $t7, ($a1)
/* 00418BB8 8C6E0000 */  lw    $t6, ($v1)
/* 00418BBC AFBF001C */  sw    $ra, 0x1c($sp)
/* 00418BC0 000FC100 */  sll   $t8, $t7, 4
/* 00418BC4 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00418BC8 01D81021 */  addu  $v0, $t6, $t8
/* 00418BCC 9059FFF5 */  lbu   $t9, -0xb($v0)
/* 00418BD0 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00418BD4 3329FFC0 */  andi  $t1, $t9, 0xffc0
/* 00418BD8 352A0015 */  ori   $t2, $t1, 0x15
/* 00418BDC A04A0005 */  sb    $t2, 5($v0)
/* 00418BE0 8CAC0000 */  lw    $t4, ($a1)
/* 00418BE4 8C6B0000 */  lw    $t3, ($v1)
/* 00418BE8 000C6900 */  sll   $t5, $t4, 4
/* 00418BEC 016D7821 */  addu  $t7, $t3, $t5
/* 00418BF0 ADE0FFF0 */  sw    $zero, -0x10($t7)
/* 00418BF4 8CB90000 */  lw    $t9, ($a1)
/* 00418BF8 8C780000 */  lw    $t8, ($v1)
/* 00418BFC 8C8E0000 */  lw    $t6, ($a0)
/* 00418C00 00194900 */  sll   $t1, $t9, 4
/* 00418C04 8F8C897C */  lw     $t4, %got(i_ptr)($gp)
/* 00418C08 03095021 */  addu  $t2, $t8, $t1
/* 00418C0C AD4EFFF8 */  sw    $t6, -8($t2)
/* 00418C10 8CA60000 */  lw    $a2, ($a1)
/* 00418C14 8D8C0000 */  lw    $t4, ($t4)
/* 00418C18 1586000A */  bne   $t4, $a2, .L00418C44
/* 00418C1C 00000000 */   nop   
/* 00418C20 8F9981D4 */  lw    $t9, %call16(grow_ibuffer)($gp)
/* 00418C24 AFA40020 */  sw    $a0, 0x20($sp)
/* 00418C28 0320F809 */  jalr  $t9
/* 00418C2C 00000000 */   nop   
/* 00418C30 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00418C34 8FA40020 */  lw    $a0, 0x20($sp)
/* 00418C38 8F858984 */  lw     $a1, %got(d_ptr)($gp)
/* 00418C3C 8F838978 */  lw     $v1, %got(ibuffer)($gp)
/* 00418C40 8CA60000 */  lw    $a2, ($a1)
.L00418C44:
/* 00418C44 8F898038 */  lw    $t1, %got(RO_1000965C)($gp)
/* 00418C48 24CBFFFF */  addiu $t3, $a2, -1
/* 00418C4C ACAB0000 */  sw    $t3, ($a1)
/* 00418C50 8CAF0000 */  lw    $t7, ($a1)
/* 00418C54 2529965C */  addiu $t1, %lo(RO_1000965C) # addiu $t1, $t1, -0x69a4
/* 00418C58 8C6D0000 */  lw    $t5, ($v1)
/* 00418C5C 892A0000 */  lwl   $t2, ($t1)
/* 00418C60 992A0003 */  lwr   $t2, 3($t1)
/* 00418C64 000FC900 */  sll   $t9, $t7, 4
/* 00418C68 01B9C021 */  addu  $t8, $t5, $t9
/* 00418C6C AB0AFFF0 */  swl   $t2, -0x10($t8)
/* 00418C70 BB0AFFF3 */  swr   $t2, -0xd($t8)
/* 00418C74 892E0004 */  lwl   $t6, 4($t1)
/* 00418C78 992E0007 */  lwr   $t6, 7($t1)
/* 00418C7C AB0EFFF4 */  swl   $t6, -0xc($t8)
/* 00418C80 BB0EFFF7 */  swr   $t6, -9($t8)
/* 00418C84 892A0008 */  lwl   $t2, 8($t1)
/* 00418C88 992A000B */  lwr   $t2, 0xb($t1)
/* 00418C8C AB0AFFF8 */  swl   $t2, -8($t8)
/* 00418C90 BB0AFFFB */  swr   $t2, -5($t8)
/* 00418C94 892E000C */  lwl   $t6, 0xc($t1)
/* 00418C98 992E000F */  lwr   $t6, 0xf($t1)
/* 00418C9C AB0EFFFC */  swl   $t6, -4($t8)
/* 00418CA0 BB0EFFFF */  swr   $t6, -1($t8)
/* 00418CA4 8C870000 */  lw    $a3, ($a0)
/* 00418CA8 10E00039 */  beqz  $a3, .L00418D90
/* 00418CAC 24E70001 */   addiu $a3, $a3, 1
/* 00418CB0 24E8FFFF */  addiu $t0, $a3, -1
/* 00418CB4 31080003 */  andi  $t0, $t0, 3
/* 00418CB8 1100000F */  beqz  $t0, .L00418CF8
/* 00418CBC 24020001 */   li    $v0, 1
/* 00418CC0 25060001 */  addiu $a2, $t0, 1
.L00418CC4:
/* 00418CC4 8CB90000 */  lw    $t9, ($a1)
/* 00418CC8 8C8C0004 */  lw    $t4, 4($a0)
/* 00418CCC 8C6D0000 */  lw    $t5, ($v1)
/* 00418CD0 0019C100 */  sll   $t8, $t9, 4
/* 00418CD4 01825821 */  addu  $t3, $t4, $v0
/* 00418CD8 01B84821 */  addu  $t1, $t5, $t8
/* 00418CDC 916FFFFF */  lbu   $t7, -1($t3)
/* 00418CE0 01227021 */  addu  $t6, $t1, $v0
/* 00418CE4 24420001 */  addiu $v0, $v0, 1
/* 00418CE8 14C2FFF6 */  bne   $a2, $v0, .L00418CC4
/* 00418CEC A1CFFFEF */   sb    $t7, -0x11($t6)
/* 00418CF0 10470027 */  beq   $v0, $a3, .L00418D90
/* 00418CF4 00000000 */   nop   
.L00418CF8:
/* 00418CF8 8C8A0004 */  lw    $t2, 4($a0)
/* 00418CFC 8CAD0000 */  lw    $t5, ($a1)
/* 00418D00 8C790000 */  lw    $t9, ($v1)
/* 00418D04 01426021 */  addu  $t4, $t2, $v0
/* 00418D08 918BFFFF */  lbu   $t3, -1($t4)
/* 00418D0C 000DC100 */  sll   $t8, $t5, 4
/* 00418D10 03384821 */  addu  $t1, $t9, $t8
/* 00418D14 01227821 */  addu  $t7, $t1, $v0
/* 00418D18 A1EBFFEF */  sb    $t3, -0x11($t7)
/* 00418D1C 8C8E0004 */  lw    $t6, 4($a0)
/* 00418D20 8CB90000 */  lw    $t9, ($a1)
/* 00418D24 8C6D0000 */  lw    $t5, ($v1)
/* 00418D28 01C25021 */  addu  $t2, $t6, $v0
/* 00418D2C 914C0000 */  lbu   $t4, ($t2)
/* 00418D30 0019C100 */  sll   $t8, $t9, 4
/* 00418D34 01B84821 */  addu  $t1, $t5, $t8
/* 00418D38 01225821 */  addu  $t3, $t1, $v0
/* 00418D3C A16CFFF0 */  sb    $t4, -0x10($t3)
/* 00418D40 8C8F0004 */  lw    $t7, 4($a0)
/* 00418D44 8CAD0000 */  lw    $t5, ($a1)
/* 00418D48 8C790000 */  lw    $t9, ($v1)
/* 00418D4C 01E27021 */  addu  $t6, $t7, $v0
/* 00418D50 91CA0001 */  lbu   $t2, 1($t6)
/* 00418D54 000DC100 */  sll   $t8, $t5, 4
/* 00418D58 03384821 */  addu  $t1, $t9, $t8
/* 00418D5C 01226021 */  addu  $t4, $t1, $v0
/* 00418D60 A18AFFF1 */  sb    $t2, -0xf($t4)
/* 00418D64 8CB90000 */  lw    $t9, ($a1)
/* 00418D68 8C6D0000 */  lw    $t5, ($v1)
/* 00418D6C 8C8B0004 */  lw    $t3, 4($a0)
/* 00418D70 0019C100 */  sll   $t8, $t9, 4
/* 00418D74 01B84821 */  addu  $t1, $t5, $t8
/* 00418D78 01627821 */  addu  $t7, $t3, $v0
/* 00418D7C 91EE0002 */  lbu   $t6, 2($t7)
/* 00418D80 01225021 */  addu  $t2, $t1, $v0
/* 00418D84 24420004 */  addiu $v0, $v0, 4
/* 00418D88 1447FFDB */  bne   $v0, $a3, .L00418CF8
/* 00418D8C A14EFFF2 */   sb    $t6, -0xe($t2)
.L00418D90:
/* 00418D90 8F8C897C */  lw     $t4, %got(i_ptr)($gp)
/* 00418D94 8CA60000 */  lw    $a2, ($a1)
/* 00418D98 8D8C0000 */  lw    $t4, ($t4)
/* 00418D9C 55860008 */  bnel  $t4, $a2, .L00418DC0
/* 00418DA0 8FBF001C */   lw    $ra, 0x1c($sp)
/* 00418DA4 8F9981D4 */  lw    $t9, %call16(grow_ibuffer)($gp)
/* 00418DA8 0320F809 */  jalr  $t9
/* 00418DAC 00000000 */   nop   
/* 00418DB0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00418DB4 8F858984 */  lw     $a1, %got(d_ptr)($gp)
/* 00418DB8 8CA60000 */  lw    $a2, ($a1)
/* 00418DBC 8FBF001C */  lw    $ra, 0x1c($sp)
.L00418DC0:
/* 00418DC0 24CBFFFF */  addiu $t3, $a2, -1
/* 00418DC4 ACAB0000 */  sw    $t3, ($a1)
/* 00418DC8 03E00008 */  jr    $ra
/* 00418DCC 27BD0020 */   addiu $sp, $sp, 0x20
    .type demit_itext, @function
    .size demit_itext, .-demit_itext
    .end demit_itext

glabel emit_dir0
    .ent emit_dir0
    # 0041A940 emit_cpload
    # 0041D1E8 func_0041D1E8
    # 0041D39C func_0041D39C
    # 0041DDE0 func_0041DDE0
    # 0041E468 dw_emit_rrr
    # 0041E800 func_0041E800
    # 0041EA00 func_0041EA00
    # 0041F194 func_0041F194
    # 00420360 func_00420360
    # 00421170 gen_entry
    # 00422764 gen_reg_save
    # 00426EF0 iloadistore
    # 00427538 func_00427538
    # 00427620 rloadrstore
    # 00428D14 eval_mov
    # 0042A1AC eval_irel
    # 0042BDAC eval
    # 00433494 eval_flt_int_cvt
    # 0043DFB0 gen_sym
/* 00418DD0 3C1C0FC0 */  .cpload $t9
/* 00418DD4 279C6C80 */  
/* 00418DD8 0399E021 */  
/* 00418DDC 8F87897C */  lw     $a3, %got(i_ptr)($gp)
/* 00418DE0 8F868978 */  lw     $a2, %got(ibuffer)($gp)
/* 00418DE4 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00418DE8 8CEF0000 */  lw    $t7, ($a3)
/* 00418DEC 8CCE0000 */  lw    $t6, ($a2)
/* 00418DF0 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00418DF4 000FC100 */  sll   $t8, $t7, 4
/* 00418DF8 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00418DFC AFA40020 */  sw    $a0, 0x20($sp)
/* 00418E00 01D81021 */  addu  $v0, $t6, $t8
/* 00418E04 9043FFF5 */  lbu   $v1, -0xb($v0)
/* 00418E08 2C8C0040 */  sltiu $t4, $a0, 0x40
/* 00418E0C 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00418E10 0003CE80 */  sll   $t9, $v1, 0x1a
/* 00418E14 00194682 */  srl   $t0, $t9, 0x1a
/* 00418E18 00884826 */  xor   $t1, $a0, $t0
/* 00418E1C 312A003F */  andi  $t2, $t1, 0x3f
/* 00418E20 01435826 */  xor   $t3, $t2, $v1
/* 00418E24 11800009 */  beqz  $t4, .L00418E4C
/* 00418E28 A04B0005 */   sb    $t3, 5($v0)
/* 00418E2C 8F8E8038 */  lw    $t6, %got(D_1001362C)($gp)
/* 00418E30 00046943 */  sra   $t5, $a0, 5
/* 00418E34 000D7880 */  sll   $t7, $t5, 2
/* 00418E38 25CE362C */  addiu $t6, %lo(D_1001362C) # addiu $t6, $t6, 0x362c
/* 00418E3C 01CFC021 */  addu  $t8, $t6, $t7
/* 00418E40 8F190000 */  lw    $t9, ($t8)
/* 00418E44 00994004 */  sllv  $t0, $t9, $a0
/* 00418E48 290C0000 */  slti  $t4, $t0, 0
.L00418E4C:
/* 00418E4C 5180000D */  beql  $t4, $zero, .L00418E84
/* 00418E50 8CEC0000 */   lw    $t4, ($a3)
/* 00418E54 8CEB0000 */  lw    $t3, ($a3)
/* 00418E58 8CCA0000 */  lw    $t2, ($a2)
/* 00418E5C 000B6900 */  sll   $t5, $t3, 4
/* 00418E60 014D7021 */  addu  $t6, $t2, $t5
/* 00418E64 ADC0FFF0 */  sw    $zero, -0x10($t6)
/* 00418E68 8CF80000 */  lw    $t8, ($a3)
/* 00418E6C 8CCF0000 */  lw    $t7, ($a2)
/* 00418E70 0018C900 */  sll   $t9, $t8, 4
/* 00418E74 01F94021 */  addu  $t0, $t7, $t9
/* 00418E78 10000010 */  b     .L00418EBC
/* 00418E7C AD05FFF8 */   sw    $a1, -8($t0)
/* 00418E80 8CEC0000 */  lw    $t4, ($a3)
.L00418E84:
/* 00418E84 8CC90000 */  lw    $t1, ($a2)
/* 00418E88 000C5900 */  sll   $t3, $t4, 4
/* 00418E8C 012B5021 */  addu  $t2, $t1, $t3
/* 00418E90 AD45FFF0 */  sw    $a1, -0x10($t2)
/* 00418E94 8CEE0000 */  lw    $t6, ($a3)
/* 00418E98 8CCD0000 */  lw    $t5, ($a2)
/* 00418E9C 000EC100 */  sll   $t8, $t6, 4
/* 00418EA0 01B87821 */  addu  $t7, $t5, $t8
/* 00418EA4 ADE0FFF8 */  sw    $zero, -8($t7)
/* 00418EA8 8CE80000 */  lw    $t0, ($a3)
/* 00418EAC 8CD90000 */  lw    $t9, ($a2)
/* 00418EB0 00086100 */  sll   $t4, $t0, 4
/* 00418EB4 032C4821 */  addu  $t1, $t9, $t4
/* 00418EB8 AD20FFF8 */  sw    $zero, -8($t1)
.L00418EBC:
/* 00418EBC 8CEA0000 */  lw    $t2, ($a3)
/* 00418EC0 8CCB0000 */  lw    $t3, ($a2)
/* 00418EC4 8F988984 */  lw     $t8, %got(d_ptr)($gp)
/* 00418EC8 000A7100 */  sll   $t6, $t2, 4
/* 00418ECC 016E6821 */  addu  $t5, $t3, $t6
/* 00418ED0 ADA0FFFC */  sw    $zero, -4($t5)
/* 00418ED4 8CE20000 */  lw    $v0, ($a3)
/* 00418ED8 8F180000 */  lw    $t8, ($t8)
/* 00418EDC 57020008 */  bnel  $t8, $v0, .L00418F00
/* 00418EE0 8FBF001C */   lw    $ra, 0x1c($sp)
/* 00418EE4 8F9981D4 */  lw    $t9, %call16(grow_ibuffer)($gp)
/* 00418EE8 0320F809 */  jalr  $t9
/* 00418EEC 00000000 */   nop   
/* 00418EF0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00418EF4 8F87897C */  lw     $a3, %got(i_ptr)($gp)
/* 00418EF8 8CE20000 */  lw    $v0, ($a3)
/* 00418EFC 8FBF001C */  lw    $ra, 0x1c($sp)
.L00418F00:
/* 00418F00 244F0001 */  addiu $t7, $v0, 1
/* 00418F04 ACEF0000 */  sw    $t7, ($a3)
/* 00418F08 03E00008 */  jr    $ra
/* 00418F0C 27BD0020 */   addiu $sp, $sp, 0x20
    .type emit_dir0, @function
    .size emit_dir0, .-emit_dir0
    .end emit_dir0

glabel emit_dir1
    .ent emit_dir1
    # 00421170 gen_entry
    # 0042BDAC eval
/* 00418F10 3C1C0FC0 */  .cpload $t9
/* 00418F14 279C6B40 */  
/* 00418F18 0399E021 */  
/* 00418F1C 8F89897C */  lw     $t1, %got(i_ptr)($gp)
/* 00418F20 8F888978 */  lw     $t0, %got(ibuffer)($gp)
/* 00418F24 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00418F28 8D2F0000 */  lw    $t7, ($t1)
/* 00418F2C 8D0E0000 */  lw    $t6, ($t0)
/* 00418F30 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00418F34 000FC100 */  sll   $t8, $t7, 4
/* 00418F38 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00418F3C AFA40020 */  sw    $a0, 0x20($sp)
/* 00418F40 01D81021 */  addu  $v0, $t6, $t8
/* 00418F44 9043FFF5 */  lbu   $v1, -0xb($v0)
/* 00418F48 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00418F4C 0003CE80 */  sll   $t9, $v1, 0x1a
/* 00418F50 00195682 */  srl   $t2, $t9, 0x1a
/* 00418F54 008A5826 */  xor   $t3, $a0, $t2
/* 00418F58 316C003F */  andi  $t4, $t3, 0x3f
/* 00418F5C 01836826 */  xor   $t5, $t4, $v1
/* 00418F60 A04D0005 */  sb    $t5, 5($v0)
/* 00418F64 8D2E0000 */  lw    $t6, ($t1)
/* 00418F68 8D0F0000 */  lw    $t7, ($t0)
/* 00418F6C 000EC100 */  sll   $t8, $t6, 4
/* 00418F70 01F8C821 */  addu  $t9, $t7, $t8
/* 00418F74 AF26FFF8 */  sw    $a2, -8($t9)
/* 00418F78 8D2B0000 */  lw    $t3, ($t1)
/* 00418F7C 8D0A0000 */  lw    $t2, ($t0)
/* 00418F80 8F8E8984 */  lw     $t6, %got(d_ptr)($gp)
/* 00418F84 000B6100 */  sll   $t4, $t3, 4
/* 00418F88 014C6821 */  addu  $t5, $t2, $t4
/* 00418F8C ADA5FFF0 */  sw    $a1, -0x10($t5)
/* 00418F90 8D270000 */  lw    $a3, ($t1)
/* 00418F94 8DCE0000 */  lw    $t6, ($t6)
/* 00418F98 55C70008 */  bnel  $t6, $a3, .L00418FBC
/* 00418F9C 8FBF001C */   lw    $ra, 0x1c($sp)
/* 00418FA0 8F9981D4 */  lw    $t9, %call16(grow_ibuffer)($gp)
/* 00418FA4 0320F809 */  jalr  $t9
/* 00418FA8 00000000 */   nop   
/* 00418FAC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00418FB0 8F89897C */  lw     $t1, %got(i_ptr)($gp)
/* 00418FB4 8D270000 */  lw    $a3, ($t1)
/* 00418FB8 8FBF001C */  lw    $ra, 0x1c($sp)
.L00418FBC:
/* 00418FBC 24EF0001 */  addiu $t7, $a3, 1
/* 00418FC0 AD2F0000 */  sw    $t7, ($t1)
/* 00418FC4 03E00008 */  jr    $ra
/* 00418FC8 27BD0020 */   addiu $sp, $sp, 0x20
    .type emit_dir1, @function
    .size emit_dir1, .-emit_dir1
    .end emit_dir1

glabel emit_dir2
    .ent emit_dir2
    # 0042BDAC eval
/* 00418FCC 3C1C0FC0 */  .cpload $t9
/* 00418FD0 279C6A84 */  
/* 00418FD4 0399E021 */  
/* 00418FD8 8F89897C */  lw     $t1, %got(i_ptr)($gp)
/* 00418FDC 8F888978 */  lw     $t0, %got(ibuffer)($gp)
/* 00418FE0 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00418FE4 8D2F0000 */  lw    $t7, ($t1)
/* 00418FE8 8D0E0000 */  lw    $t6, ($t0)
/* 00418FEC AFBF001C */  sw    $ra, 0x1c($sp)
/* 00418FF0 000FC100 */  sll   $t8, $t7, 4
/* 00418FF4 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00418FF8 AFA40020 */  sw    $a0, 0x20($sp)
/* 00418FFC 01D81021 */  addu  $v0, $t6, $t8
/* 00419000 9043FFF5 */  lbu   $v1, -0xb($v0)
/* 00419004 2401001C */  li    $at, 28
/* 00419008 2442FFF0 */  addiu $v0, $v0, -0x10
/* 0041900C 0003CE80 */  sll   $t9, $v1, 0x1a
/* 00419010 00195682 */  srl   $t2, $t9, 0x1a
/* 00419014 008A5826 */  xor   $t3, $a0, $t2
/* 00419018 316C003F */  andi  $t4, $t3, 0x3f
/* 0041901C 01836826 */  xor   $t5, $t4, $v1
/* 00419020 A04D0005 */  sb    $t5, 5($v0)
/* 00419024 8D2E0000 */  lw    $t6, ($t1)
/* 00419028 8D0F0000 */  lw    $t7, ($t0)
/* 0041902C 248AFFCE */  addiu $t2, $a0, -0x32
/* 00419030 000EC100 */  sll   $t8, $t6, 4
/* 00419034 01F8C821 */  addu  $t9, $t7, $t8
/* 00419038 1081000B */  beq   $a0, $at, .L00419068
/* 0041903C AF25FFF0 */   sw    $a1, -0x10($t9)
/* 00419040 2D410002 */  sltiu $at, $t2, 2
/* 00419044 5020002A */  beql  $at, $zero, .L004190F0
/* 00419048 8D2B0000 */   lw    $t3, ($t1)
/* 0041904C 8F818038 */  lw    $at, %got(jtbl_1000966C)($gp)
/* 00419050 000A5080 */  sll   $t2, $t2, 2
/* 00419054 002A0821 */  addu  $at, $at, $t2
/* 00419058 8C2A966C */  lw    $t2, %lo(jtbl_1000966C)($at)
/* 0041905C 015C5021 */  addu  $t2, $t2, $gp
/* 00419060 01400008 */  jr    $t2
/* 00419064 00000000 */   nop   
.L00419068:
/* 00419068 8D2C0000 */  lw    $t4, ($t1)
/* 0041906C 8D0B0000 */  lw    $t3, ($t0)
/* 00419070 000C6900 */  sll   $t5, $t4, 4
/* 00419074 016D7021 */  addu  $t6, $t3, $t5
/* 00419078 ADC6FFF8 */  sw    $a2, -8($t6)
/* 0041907C 8D380000 */  lw    $t8, ($t1)
/* 00419080 8D0F0000 */  lw    $t7, ($t0)
/* 00419084 0018C900 */  sll   $t9, $t8, 4
/* 00419088 01F95021 */  addu  $t2, $t7, $t9
/* 0041908C 10000021 */  b     .L00419114
/* 00419090 AD47FFFC */   sw    $a3, -4($t2)
.L00419094:
/* 00419094 8D2B0000 */  lw    $t3, ($t1)
/* 00419098 8D0C0000 */  lw    $t4, ($t0)
/* 0041909C 000B6900 */  sll   $t5, $t3, 4
/* 004190A0 018D7021 */  addu  $t6, $t4, $t5
/* 004190A4 ADC6FFF8 */  sw    $a2, -8($t6)
/* 004190A8 8D2F0000 */  lw    $t7, ($t1)
/* 004190AC 8D180000 */  lw    $t8, ($t0)
/* 004190B0 000FC900 */  sll   $t9, $t7, 4
/* 004190B4 03195021 */  addu  $t2, $t8, $t9
/* 004190B8 10000016 */  b     .L00419114
/* 004190BC AD47FFFC */   sw    $a3, -4($t2)
.L004190C0:
/* 004190C0 8D2C0000 */  lw    $t4, ($t1)
/* 004190C4 8D0B0000 */  lw    $t3, ($t0)
/* 004190C8 000C6900 */  sll   $t5, $t4, 4
/* 004190CC 016D7021 */  addu  $t6, $t3, $t5
/* 004190D0 ADC6FFF8 */  sw    $a2, -8($t6)
/* 004190D4 8D380000 */  lw    $t8, ($t1)
/* 004190D8 8D0F0000 */  lw    $t7, ($t0)
/* 004190DC 0018C900 */  sll   $t9, $t8, 4
/* 004190E0 01F95021 */  addu  $t2, $t7, $t9
/* 004190E4 1000000B */  b     .L00419114
/* 004190E8 AD47FFFC */   sw    $a3, -4($t2)
/* 004190EC 8D2B0000 */  lw    $t3, ($t1)
.L004190F0:
/* 004190F0 8D0C0000 */  lw    $t4, ($t0)
/* 004190F4 000B6900 */  sll   $t5, $t3, 4
/* 004190F8 018D7021 */  addu  $t6, $t4, $t5
/* 004190FC ADC6FFF8 */  sw    $a2, -8($t6)
/* 00419100 8D2F0000 */  lw    $t7, ($t1)
/* 00419104 8D180000 */  lw    $t8, ($t0)
/* 00419108 000FC900 */  sll   $t9, $t7, 4
/* 0041910C 03195021 */  addu  $t2, $t8, $t9
/* 00419110 AD47FFFC */  sw    $a3, -4($t2)
.L00419114:
/* 00419114 8F8B8984 */  lw     $t3, %got(d_ptr)($gp)
/* 00419118 8D220000 */  lw    $v0, ($t1)
/* 0041911C 8D6B0000 */  lw    $t3, ($t3)
/* 00419120 55620008 */  bnel  $t3, $v0, .L00419144
/* 00419124 8FBF001C */   lw    $ra, 0x1c($sp)
/* 00419128 8F9981D4 */  lw    $t9, %call16(grow_ibuffer)($gp)
/* 0041912C 0320F809 */  jalr  $t9
/* 00419130 00000000 */   nop   
/* 00419134 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00419138 8F89897C */  lw     $t1, %got(i_ptr)($gp)
/* 0041913C 8D220000 */  lw    $v0, ($t1)
/* 00419140 8FBF001C */  lw    $ra, 0x1c($sp)
.L00419144:
/* 00419144 244C0001 */  addiu $t4, $v0, 1
/* 00419148 AD2C0000 */  sw    $t4, ($t1)
/* 0041914C 03E00008 */  jr    $ra
/* 00419150 27BD0020 */   addiu $sp, $sp, 0x20
    .type emit_dir2, @function
    .size emit_dir2, .-emit_dir2
    .end emit_dir2

glabel emit_alias
    .ent emit_alias
    # 00428D14 eval_mov
    # 0042BDAC eval
/* 00419154 3C1C0FC0 */  .cpload $t9
/* 00419158 279C68FC */  
/* 0041915C 0399E021 */  
/* 00419160 8F89897C */  lw     $t1, %got(i_ptr)($gp)
/* 00419164 8F888978 */  lw     $t0, %got(ibuffer)($gp)
/* 00419168 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0041916C 8D2F0000 */  lw    $t7, ($t1)
/* 00419170 8D0E0000 */  lw    $t6, ($t0)
/* 00419174 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00419178 000FC100 */  sll   $t8, $t7, 4
/* 0041917C AFBC0018 */  sw    $gp, 0x18($sp)
/* 00419180 AFA40020 */  sw    $a0, 0x20($sp)
/* 00419184 AFA50024 */  sw    $a1, 0x24($sp)
/* 00419188 AFA60028 */  sw    $a2, 0x28($sp)
/* 0041918C 01D81021 */  addu  $v0, $t6, $t8
/* 00419190 9047FFF5 */  lbu   $a3, -0xb($v0)
/* 00419194 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00419198 0007CE80 */  sll   $t9, $a3, 0x1a
/* 0041919C 00195E82 */  srl   $t3, $t9, 0x1a
/* 004191A0 008B6026 */  xor   $t4, $a0, $t3
/* 004191A4 318D003F */  andi  $t5, $t4, 0x3f
/* 004191A8 01A77826 */  xor   $t7, $t5, $a3
/* 004191AC A04F0005 */  sb    $t7, 5($v0)
/* 004191B0 8D380000 */  lw    $t8, ($t1)
/* 004191B4 8D0E0000 */  lw    $t6, ($t0)
/* 004191B8 0018C900 */  sll   $t9, $t8, 4
/* 004191BC 01D95821 */  addu  $t3, $t6, $t9
/* 004191C0 AD60FFF0 */  sw    $zero, -0x10($t3)
/* 004191C4 8D2D0000 */  lw    $t5, ($t1)
/* 004191C8 8D0C0000 */  lw    $t4, ($t0)
/* 004191CC 000D7900 */  sll   $t7, $t5, 4
/* 004191D0 018F1021 */  addu  $v0, $t4, $t7
/* 004191D4 8C43FFF4 */  lw    $v1, -0xc($v0)
/* 004191D8 2442FFF0 */  addiu $v0, $v0, -0x10
/* 004191DC 0003C400 */  sll   $t8, $v1, 0x10
/* 004191E0 00187642 */  srl   $t6, $t8, 0x19
/* 004191E4 00AEC826 */  xor   $t9, $a1, $t6
/* 004191E8 00195E40 */  sll   $t3, $t9, 0x19
/* 004191EC 000B6C02 */  srl   $t5, $t3, 0x10
/* 004191F0 01A36026 */  xor   $t4, $t5, $v1
/* 004191F4 AC4C0004 */  sw    $t4, 4($v0)
/* 004191F8 8D380000 */  lw    $t8, ($t1)
/* 004191FC 8D0F0000 */  lw    $t7, ($t0)
/* 00419200 00187100 */  sll   $t6, $t8, 4
/* 00419204 01EE1021 */  addu  $v0, $t7, $t6
/* 00419208 8C43FFF4 */  lw    $v1, -0xc($v0)
/* 0041920C 8F8E8984 */  lw     $t6, %got(d_ptr)($gp)
/* 00419210 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00419214 0003CDC0 */  sll   $t9, $v1, 0x17
/* 00419218 00195E42 */  srl   $t3, $t9, 0x19
/* 0041921C 00CB6826 */  xor   $t5, $a2, $t3
/* 00419220 000D6640 */  sll   $t4, $t5, 0x19
/* 00419224 000CC5C2 */  srl   $t8, $t4, 0x17
/* 00419228 03037826 */  xor   $t7, $t8, $v1
/* 0041922C AC4F0004 */  sw    $t7, 4($v0)
/* 00419230 8D2A0000 */  lw    $t2, ($t1)
/* 00419234 8DCE0000 */  lw    $t6, ($t6)
/* 00419238 55CA0008 */  bnel  $t6, $t2, .L0041925C
/* 0041923C 8FBF001C */   lw    $ra, 0x1c($sp)
/* 00419240 8F9981D4 */  lw    $t9, %call16(grow_ibuffer)($gp)
/* 00419244 0320F809 */  jalr  $t9
/* 00419248 00000000 */   nop   
/* 0041924C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00419250 8F89897C */  lw     $t1, %got(i_ptr)($gp)
/* 00419254 8D2A0000 */  lw    $t2, ($t1)
/* 00419258 8FBF001C */  lw    $ra, 0x1c($sp)
.L0041925C:
/* 0041925C 25590001 */  addiu $t9, $t2, 1
/* 00419260 AD390000 */  sw    $t9, ($t1)
/* 00419264 03E00008 */  jr    $ra
/* 00419268 27BD0020 */   addiu $sp, $sp, 0x20
    .type emit_alias, @function
    .size emit_alias, .-emit_alias
    .end emit_alias

glabel emit_regmask
    .ent emit_regmask
    # 0042BDAC eval
/* 0041926C 3C1C0FC0 */  .cpload $t9
/* 00419270 279C67E4 */  
/* 00419274 0399E021 */  
/* 00419278 8F88897C */  lw     $t0, %got(i_ptr)($gp)
/* 0041927C 8F878978 */  lw     $a3, %got(ibuffer)($gp)
/* 00419280 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00419284 8D0F0000 */  lw    $t7, ($t0)
/* 00419288 8CEE0000 */  lw    $t6, ($a3)
/* 0041928C AFBF001C */  sw    $ra, 0x1c($sp)
/* 00419290 000FC100 */  sll   $t8, $t7, 4
/* 00419294 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00419298 AFA40020 */  sw    $a0, 0x20($sp)
/* 0041929C 01D81021 */  addu  $v0, $t6, $t8
/* 004192A0 9043FFF5 */  lbu   $v1, -0xb($v0)
/* 004192A4 2442FFF0 */  addiu $v0, $v0, -0x10
/* 004192A8 0003CE80 */  sll   $t9, $v1, 0x1a
/* 004192AC 00195682 */  srl   $t2, $t9, 0x1a
/* 004192B0 008A5826 */  xor   $t3, $a0, $t2
/* 004192B4 316C003F */  andi  $t4, $t3, 0x3f
/* 004192B8 01836826 */  xor   $t5, $t4, $v1
/* 004192BC A04D0005 */  sb    $t5, 5($v0)
/* 004192C0 8D0E0000 */  lw    $t6, ($t0)
/* 004192C4 8CEF0000 */  lw    $t7, ($a3)
/* 004192C8 000EC100 */  sll   $t8, $t6, 4
/* 004192CC 01F8C821 */  addu  $t9, $t7, $t8
/* 004192D0 AF20FFF0 */  sw    $zero, -0x10($t9)
/* 004192D4 8D0B0000 */  lw    $t3, ($t0)
/* 004192D8 8CEA0000 */  lw    $t2, ($a3)
/* 004192DC 000B6100 */  sll   $t4, $t3, 4
/* 004192E0 014C6821 */  addu  $t5, $t2, $t4
/* 004192E4 ADA5FFF8 */  sw    $a1, -8($t5)
/* 004192E8 8D0F0000 */  lw    $t7, ($t0)
/* 004192EC 8CEE0000 */  lw    $t6, ($a3)
/* 004192F0 8F8B8984 */  lw     $t3, %got(d_ptr)($gp)
/* 004192F4 000FC100 */  sll   $t8, $t7, 4
/* 004192F8 01D8C821 */  addu  $t9, $t6, $t8
/* 004192FC AF26FFFC */  sw    $a2, -4($t9)
/* 00419300 8D090000 */  lw    $t1, ($t0)
/* 00419304 8D6B0000 */  lw    $t3, ($t3)
/* 00419308 55690008 */  bnel  $t3, $t1, .L0041932C
/* 0041930C 8FBF001C */   lw    $ra, 0x1c($sp)
/* 00419310 8F9981D4 */  lw    $t9, %call16(grow_ibuffer)($gp)
/* 00419314 0320F809 */  jalr  $t9
/* 00419318 00000000 */   nop   
/* 0041931C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00419320 8F88897C */  lw     $t0, %got(i_ptr)($gp)
/* 00419324 8D090000 */  lw    $t1, ($t0)
/* 00419328 8FBF001C */  lw    $ra, 0x1c($sp)
.L0041932C:
/* 0041932C 252A0001 */  addiu $t2, $t1, 1
/* 00419330 AD0A0000 */  sw    $t2, ($t0)
/* 00419334 03E00008 */  jr    $ra
/* 00419338 27BD0020 */   addiu $sp, $sp, 0x20
    .type emit_regmask, @function
    .size emit_regmask, .-emit_regmask
    .end emit_regmask

glabel emit_loopno
    .ent emit_loopno
    # 0042BDAC eval
/* 0041933C 3C1C0FC0 */  .cpload $t9
/* 00419340 279C6714 */  
/* 00419344 0399E021 */  
/* 00419348 8F86897C */  lw     $a2, %got(i_ptr)($gp)
/* 0041934C 8F838978 */  lw     $v1, %got(ibuffer)($gp)
/* 00419350 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00419354 8CCF0000 */  lw    $t7, ($a2)
/* 00419358 8C6E0000 */  lw    $t6, ($v1)
/* 0041935C AFBF001C */  sw    $ra, 0x1c($sp)
/* 00419360 000FC100 */  sll   $t8, $t7, 4
/* 00419364 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00419368 01D81021 */  addu  $v0, $t6, $t8
/* 0041936C 9059FFF5 */  lbu   $t9, -0xb($v0)
/* 00419370 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00419374 3328FFC0 */  andi  $t0, $t9, 0xffc0
/* 00419378 35090013 */  ori   $t1, $t0, 0x13
/* 0041937C A0490005 */  sb    $t1, 5($v0)
/* 00419380 8CCB0000 */  lw    $t3, ($a2)
/* 00419384 8C6A0000 */  lw    $t2, ($v1)
/* 00419388 000B6100 */  sll   $t4, $t3, 4
/* 0041938C 014C6821 */  addu  $t5, $t2, $t4
/* 00419390 ADA4FFF8 */  sw    $a0, -8($t5)
/* 00419394 8CCE0000 */  lw    $t6, ($a2)
/* 00419398 8C6F0000 */  lw    $t7, ($v1)
/* 0041939C 8F8C8984 */  lw     $t4, %got(d_ptr)($gp)
/* 004193A0 000EC100 */  sll   $t8, $t6, 4
/* 004193A4 01F8C821 */  addu  $t9, $t7, $t8
/* 004193A8 AF25FFFC */  sw    $a1, -4($t9)
/* 004193AC 8CC90000 */  lw    $t1, ($a2)
/* 004193B0 8C680000 */  lw    $t0, ($v1)
/* 004193B4 00095900 */  sll   $t3, $t1, 4
/* 004193B8 010B5021 */  addu  $t2, $t0, $t3
/* 004193BC AD40FFF0 */  sw    $zero, -0x10($t2)
/* 004193C0 8CC70000 */  lw    $a3, ($a2)
/* 004193C4 8D8C0000 */  lw    $t4, ($t4)
/* 004193C8 55870008 */  bnel  $t4, $a3, .L004193EC
/* 004193CC 8FBF001C */   lw    $ra, 0x1c($sp)
/* 004193D0 8F9981D4 */  lw    $t9, %call16(grow_ibuffer)($gp)
/* 004193D4 0320F809 */  jalr  $t9
/* 004193D8 00000000 */   nop   
/* 004193DC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004193E0 8F86897C */  lw     $a2, %got(i_ptr)($gp)
/* 004193E4 8CC70000 */  lw    $a3, ($a2)
/* 004193E8 8FBF001C */  lw    $ra, 0x1c($sp)
.L004193EC:
/* 004193EC 24ED0001 */  addiu $t5, $a3, 1
/* 004193F0 ACCD0000 */  sw    $t5, ($a2)
/* 004193F4 03E00008 */  jr    $ra
/* 004193F8 27BD0020 */   addiu $sp, $sp, 0x20
    .type emit_loopno, @function
    .size emit_loopno, .-emit_loopno
    .end emit_loopno

glabel emit_dir_ll
    .ent emit_dir_ll
    # 0042BDAC eval
/* 004193FC 3C1C0FC0 */  .cpload $t9
/* 00419400 279C6654 */  
/* 00419404 0399E021 */  
/* 00419408 8F8E89E4 */  lw     $t6, %got(pic_level)($gp)
/* 0041940C 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00419410 24010002 */  li    $at, 2
/* 00419414 8DCE0000 */  lw    $t6, ($t6)
/* 00419418 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0041941C AFBC0018 */  sw    $gp, 0x18($sp)
/* 00419420 15C1000D */  bne   $t6, $at, .L00419458
/* 00419424 00A03825 */   move  $a3, $a1
/* 00419428 8F85897C */  lw     $a1, %got(i_ptr)($gp)
/* 0041942C 8F868978 */  lw     $a2, %got(ibuffer)($gp)
/* 00419430 8CB80000 */  lw    $t8, ($a1)
/* 00419434 8CCF0000 */  lw    $t7, ($a2)
/* 00419438 0018C900 */  sll   $t9, $t8, 4
/* 0041943C 01F91021 */  addu  $v0, $t7, $t9
/* 00419440 9048FFF5 */  lbu   $t0, -0xb($v0)
/* 00419444 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00419448 3109FFC0 */  andi  $t1, $t0, 0xffc0
/* 0041944C 352A0010 */  ori   $t2, $t1, 0x10
/* 00419450 1000000C */  b     .L00419484
/* 00419454 A04A0005 */   sb    $t2, 5($v0)
.L00419458:
/* 00419458 8F85897C */  lw     $a1, %got(i_ptr)($gp)
/* 0041945C 8F868978 */  lw     $a2, %got(ibuffer)($gp)
/* 00419460 8CAC0000 */  lw    $t4, ($a1)
/* 00419464 8CCB0000 */  lw    $t3, ($a2)
/* 00419468 000C6900 */  sll   $t5, $t4, 4
/* 0041946C 016D1021 */  addu  $v0, $t3, $t5
/* 00419470 904EFFF5 */  lbu   $t6, -0xb($v0)
/* 00419474 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00419478 31D8FFC0 */  andi  $t8, $t6, 0xffc0
/* 0041947C 370F0016 */  ori   $t7, $t8, 0x16
/* 00419480 A04F0005 */  sb    $t7, 5($v0)
.L00419484:
/* 00419484 8CA80000 */  lw    $t0, ($a1)
/* 00419488 8CD90000 */  lw    $t9, ($a2)
/* 0041948C 00084900 */  sll   $t1, $t0, 4
/* 00419490 03295021 */  addu  $t2, $t9, $t1
/* 00419494 AD47FFF8 */  sw    $a3, -8($t2)
/* 00419498 8F9981D8 */  lw    $t9, %call16(create_local_label)($gp)
/* 0041949C 0320F809 */  jalr  $t9
/* 004194A0 00000000 */   nop   
/* 004194A4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004194A8 24180001 */  li    $t8, 1
/* 004194AC 8F85897C */  lw     $a1, %got(i_ptr)($gp)
/* 004194B0 8F868978 */  lw     $a2, %got(ibuffer)($gp)
/* 004194B4 8F8A8984 */  lw     $t2, %got(d_ptr)($gp)
/* 004194B8 8CAB0000 */  lw    $t3, ($a1)
/* 004194BC 8CCC0000 */  lw    $t4, ($a2)
/* 004194C0 000B6900 */  sll   $t5, $t3, 4
/* 004194C4 018D7021 */  addu  $t6, $t4, $t5
/* 004194C8 ADC2FFF0 */  sw    $v0, -0x10($t6)
/* 004194CC 8CA80000 */  lw    $t0, ($a1)
/* 004194D0 8CCF0000 */  lw    $t7, ($a2)
/* 004194D4 0008C900 */  sll   $t9, $t0, 4
/* 004194D8 01F94821 */  addu  $t1, $t7, $t9
/* 004194DC AD38FFFC */  sw    $t8, -4($t1)
/* 004194E0 8CA30000 */  lw    $v1, ($a1)
/* 004194E4 8D4A0000 */  lw    $t2, ($t2)
/* 004194E8 55430008 */  bnel  $t2, $v1, .L0041950C
/* 004194EC 8FBF001C */   lw    $ra, 0x1c($sp)
/* 004194F0 8F9981D4 */  lw    $t9, %call16(grow_ibuffer)($gp)
/* 004194F4 0320F809 */  jalr  $t9
/* 004194F8 00000000 */   nop   
/* 004194FC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00419500 8F85897C */  lw     $a1, %got(i_ptr)($gp)
/* 00419504 8CA30000 */  lw    $v1, ($a1)
/* 00419508 8FBF001C */  lw    $ra, 0x1c($sp)
.L0041950C:
/* 0041950C 246B0001 */  addiu $t3, $v1, 1
/* 00419510 ACAB0000 */  sw    $t3, ($a1)
/* 00419514 03E00008 */  jr    $ra
/* 00419518 27BD0020 */   addiu $sp, $sp, 0x20
    .type emit_dir_ll, @function
    .size emit_dir_ll, .-emit_dir_ll
    .end emit_dir_ll

glabel demit_rob_
    .ent demit_rob_
    # 00420810 gen_entry_exit
    # 00421564 home_parameters
    # 004219E8 gen_reg_save_restore
/* 0041951C 3C1C0FC0 */  .cpload $t9
/* 00419520 279C6534 */  
/* 00419524 0399E021 */  
/* 00419528 8F898984 */  lw     $t1, %got(d_ptr)($gp)
/* 0041952C 8F838978 */  lw     $v1, %got(ibuffer)($gp)
/* 00419530 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00419534 8D2F0000 */  lw    $t7, ($t1)
/* 00419538 8C6E0000 */  lw    $t6, ($v1)
/* 0041953C AFBF001C */  sw    $ra, 0x1c($sp)
/* 00419540 000FC100 */  sll   $t8, $t7, 4
/* 00419544 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00419548 AFA40020 */  sw    $a0, 0x20($sp)
/* 0041954C AFA50024 */  sw    $a1, 0x24($sp)
/* 00419550 AFA7002C */  sw    $a3, 0x2c($sp)
/* 00419554 01D81021 */  addu  $v0, $t6, $t8
/* 00419558 9059FFF5 */  lbu   $t9, -0xb($v0)
/* 0041955C 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00419560 3C01FFFC */  lui   $at, 0xfffc
/* 00419564 332CFFC0 */  andi  $t4, $t9, 0xffc0
/* 00419568 358D0017 */  ori   $t5, $t4, 0x17
/* 0041956C A04D0005 */  sb    $t5, 5($v0)
/* 00419570 8D2E0000 */  lw    $t6, ($t1)
/* 00419574 8C6F0000 */  lw    $t7, ($v1)
/* 00419578 34213FFF */  ori   $at, $at, 0x3fff
/* 0041957C 000EC100 */  sll   $t8, $t6, 4
/* 00419580 01F81021 */  addu  $v0, $t7, $t8
/* 00419584 944AFFF6 */  lhu   $t2, -0xa($v0)
/* 00419588 2442FFF0 */  addiu $v0, $v0, -0x10
/* 0041958C 000ACD80 */  sll   $t9, $t2, 0x16
/* 00419590 001965C2 */  srl   $t4, $t9, 0x17
/* 00419594 008C6826 */  xor   $t5, $a0, $t4
/* 00419598 000D75C0 */  sll   $t6, $t5, 0x17
/* 0041959C 000E7D82 */  srl   $t7, $t6, 0x16
/* 004195A0 01EAC026 */  xor   $t8, $t7, $t2
/* 004195A4 A4580006 */  sh    $t8, 6($v0)
/* 004195A8 8D2C0000 */  lw    $t4, ($t1)
/* 004195AC 8C790000 */  lw    $t9, ($v1)
/* 004195B0 000C6900 */  sll   $t5, $t4, 4
/* 004195B4 032D1021 */  addu  $v0, $t9, $t5
/* 004195B8 8C4EFFF8 */  lw    $t6, -8($v0)
/* 004195BC 2442FFF0 */  addiu $v0, $v0, -0x10
/* 004195C0 01C17824 */  and   $t7, $t6, $at
/* 004195C4 AC4F0008 */  sw    $t7, 8($v0)
/* 004195C8 8D2C0000 */  lw    $t4, ($t1)
/* 004195CC 8C780000 */  lw    $t8, ($v1)
/* 004195D0 2401C000 */  li    $at, -16384
/* 004195D4 000CC900 */  sll   $t9, $t4, 4
/* 004195D8 03196821 */  addu  $t5, $t8, $t9
/* 004195DC ADA0FFF0 */  sw    $zero, -0x10($t5)
/* 004195E0 8D2F0000 */  lw    $t7, ($t1)
/* 004195E4 8C6E0000 */  lw    $t6, ($v1)
/* 004195E8 000F6100 */  sll   $t4, $t7, 4
/* 004195EC 01CC1021 */  addu  $v0, $t6, $t4
/* 004195F0 8C48FFF8 */  lw    $t0, -8($v0)
/* 004195F4 2442FFF0 */  addiu $v0, $v0, -0x10
/* 004195F8 0008C642 */  srl   $t8, $t0, 0x19
/* 004195FC 00B8C826 */  xor   $t9, $a1, $t8
/* 00419600 00196E40 */  sll   $t5, $t9, 0x19
/* 00419604 01A87826 */  xor   $t7, $t5, $t0
/* 00419608 AC4F0008 */  sw    $t7, 8($v0)
/* 0041960C 8D2C0000 */  lw    $t4, ($t1)
/* 00419610 8C6E0000 */  lw    $t6, ($v1)
/* 00419614 000CC100 */  sll   $t8, $t4, 4
/* 00419618 01D81021 */  addu  $v0, $t6, $t8
/* 0041961C 8C48FFF8 */  lw    $t0, -8($v0)
/* 00419620 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00419624 0008C9C0 */  sll   $t9, $t0, 7
/* 00419628 00196E42 */  srl   $t5, $t9, 0x19
/* 0041962C 00ED7826 */  xor   $t7, $a3, $t5
/* 00419630 000F6640 */  sll   $t4, $t7, 0x19
/* 00419634 000C71C2 */  srl   $t6, $t4, 7
/* 00419638 01C8C026 */  xor   $t8, $t6, $t0
/* 0041963C AC580008 */  sw    $t8, 8($v0)
/* 00419640 8D2D0000 */  lw    $t5, ($t1)
/* 00419644 8C790000 */  lw    $t9, ($v1)
/* 00419648 000D7900 */  sll   $t7, $t5, 4
/* 0041964C 032F1021 */  addu  $v0, $t9, $t7
/* 00419650 8C4CFFF8 */  lw    $t4, -8($v0)
/* 00419654 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00419658 01817024 */  and   $t6, $t4, $at
/* 0041965C AC4E0008 */  sw    $t6, 8($v0)
/* 00419660 8D2D0000 */  lw    $t5, ($t1)
/* 00419664 8C780000 */  lw    $t8, ($v1)
/* 00419668 000DC900 */  sll   $t9, $t5, 4
/* 0041966C 03197821 */  addu  $t7, $t8, $t9
/* 00419670 ADE6FFFC */  sw    $a2, -4($t7)
/* 00419674 8D2E0000 */  lw    $t6, ($t1)
/* 00419678 8C6C0000 */  lw    $t4, ($v1)
/* 0041967C 93B80033 */  lbu   $t8, 0x33($sp)
/* 00419680 000E6900 */  sll   $t5, $t6, 4
/* 00419684 018D1021 */  addu  $v0, $t4, $t5
/* 00419688 8C4BFFF4 */  lw    $t3, -0xc($v0)
/* 0041968C 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00419690 000BC9C0 */  sll   $t9, $t3, 7
/* 00419694 00197F42 */  srl   $t7, $t9, 0x1d
/* 00419698 030F7026 */  xor   $t6, $t8, $t7
/* 0041969C 000E6740 */  sll   $t4, $t6, 0x1d
/* 004196A0 000C69C2 */  srl   $t5, $t4, 7
/* 004196A4 8F98897C */  lw     $t8, %got(i_ptr)($gp)
/* 004196A8 01ABC826 */  xor   $t9, $t5, $t3
/* 004196AC AC590004 */  sw    $t9, 4($v0)
/* 004196B0 8D220000 */  lw    $v0, ($t1)
/* 004196B4 8F180000 */  lw    $t8, ($t8)
/* 004196B8 57020008 */  bnel  $t8, $v0, .L004196DC
/* 004196BC 8FBF001C */   lw    $ra, 0x1c($sp)
/* 004196C0 8F9981D4 */  lw    $t9, %call16(grow_ibuffer)($gp)
/* 004196C4 0320F809 */  jalr  $t9
/* 004196C8 00000000 */   nop   
/* 004196CC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004196D0 8F898984 */  lw     $t1, %got(d_ptr)($gp)
/* 004196D4 8D220000 */  lw    $v0, ($t1)
/* 004196D8 8FBF001C */  lw    $ra, 0x1c($sp)
.L004196DC:
/* 004196DC 244FFFFF */  addiu $t7, $v0, -1
/* 004196E0 AD2F0000 */  sw    $t7, ($t1)
/* 004196E4 03E00008 */  jr    $ra
/* 004196E8 27BD0020 */   addiu $sp, $sp, 0x20
    .type demit_rob_, @function
    .size demit_rob_, .-demit_rob_
    .end demit_rob_

glabel demit_ri
    .ent demit_ri
    # 00420810 gen_entry_exit
/* 004196EC 3C1C0FC0 */  .cpload $t9
/* 004196F0 279C6364 */  
/* 004196F4 0399E021 */  
/* 004196F8 8F888984 */  lw     $t0, %got(d_ptr)($gp)
/* 004196FC 8F838978 */  lw     $v1, %got(ibuffer)($gp)
/* 00419700 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00419704 8D0F0000 */  lw    $t7, ($t0)
/* 00419708 8C6E0000 */  lw    $t6, ($v1)
/* 0041970C AFBF001C */  sw    $ra, 0x1c($sp)
/* 00419710 000FC100 */  sll   $t8, $t7, 4
/* 00419714 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00419718 AFA40020 */  sw    $a0, 0x20($sp)
/* 0041971C AFA50024 */  sw    $a1, 0x24($sp)
/* 00419720 AFA7002C */  sw    $a3, 0x2c($sp)
/* 00419724 01D81021 */  addu  $v0, $t6, $t8
/* 00419728 9059FFF5 */  lbu   $t9, -0xb($v0)
/* 0041972C 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00419730 3C01FFFC */  lui   $at, 0xfffc
/* 00419734 332DFFC0 */  andi  $t5, $t9, 0xffc0
/* 00419738 35AF0017 */  ori   $t7, $t5, 0x17
/* 0041973C A04F0005 */  sb    $t7, 5($v0)
/* 00419740 8D180000 */  lw    $t8, ($t0)
/* 00419744 8C6E0000 */  lw    $t6, ($v1)
/* 00419748 34213FFF */  ori   $at, $at, 0x3fff
/* 0041974C 0018C900 */  sll   $t9, $t8, 4
/* 00419750 01D91021 */  addu  $v0, $t6, $t9
/* 00419754 9449FFF6 */  lhu   $t1, -0xa($v0)
/* 00419758 2442FFF0 */  addiu $v0, $v0, -0x10
/* 0041975C 00096D80 */  sll   $t5, $t1, 0x16
/* 00419760 000D7DC2 */  srl   $t7, $t5, 0x17
/* 00419764 008FC026 */  xor   $t8, $a0, $t7
/* 00419768 001875C0 */  sll   $t6, $t8, 0x17
/* 0041976C 000ECD82 */  srl   $t9, $t6, 0x16
/* 00419770 03296826 */  xor   $t5, $t9, $t1
/* 00419774 A44D0006 */  sh    $t5, 6($v0)
/* 00419778 8D180000 */  lw    $t8, ($t0)
/* 0041977C 8C6F0000 */  lw    $t7, ($v1)
/* 00419780 00187100 */  sll   $t6, $t8, 4
/* 00419784 01EE1021 */  addu  $v0, $t7, $t6
/* 00419788 8C59FFF8 */  lw    $t9, -8($v0)
/* 0041978C 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00419790 03216824 */  and   $t5, $t9, $at
/* 00419794 35B88000 */  ori   $t8, $t5, 0x8000
/* 00419798 AC580008 */  sw    $t8, 8($v0)
/* 0041979C 8D0E0000 */  lw    $t6, ($t0)
/* 004197A0 8C6F0000 */  lw    $t7, ($v1)
/* 004197A4 3C01FE03 */  lui   $at, 0xfe03
/* 004197A8 000EC900 */  sll   $t9, $t6, 4
/* 004197AC 01F91021 */  addu  $v0, $t7, $t9
/* 004197B0 8C4AFFF8 */  lw    $t2, -8($v0)
/* 004197B4 2442FFF0 */  addiu $v0, $v0, -0x10
/* 004197B8 3421FFFF */  ori   $at, $at, 0xffff
/* 004197BC 000A6E42 */  srl   $t5, $t2, 0x19
/* 004197C0 00ADC026 */  xor   $t8, $a1, $t5
/* 004197C4 00187640 */  sll   $t6, $t8, 0x19
/* 004197C8 01CA7826 */  xor   $t7, $t6, $t2
/* 004197CC AC4F0008 */  sw    $t7, 8($v0)
/* 004197D0 8D0D0000 */  lw    $t5, ($t0)
/* 004197D4 8C790000 */  lw    $t9, ($v1)
/* 004197D8 000DC100 */  sll   $t8, $t5, 4
/* 004197DC 03381021 */  addu  $v0, $t9, $t8
/* 004197E0 8C4EFFF8 */  lw    $t6, -8($v0)
/* 004197E4 2442FFF0 */  addiu $v0, $v0, -0x10
/* 004197E8 01C17824 */  and   $t7, $t6, $at
/* 004197EC 3C010120 */  lui   $at, 0x120
/* 004197F0 01E16825 */  or    $t5, $t7, $at
/* 004197F4 AC4D0008 */  sw    $t5, 8($v0)
/* 004197F8 8D180000 */  lw    $t8, ($t0)
/* 004197FC 8C790000 */  lw    $t9, ($v1)
/* 00419800 00187100 */  sll   $t6, $t8, 4
/* 00419804 032E7821 */  addu  $t7, $t9, $t6
/* 00419808 ADE0FFF0 */  sw    $zero, -0x10($t7)
/* 0041980C 8D180000 */  lw    $t8, ($t0)
/* 00419810 8C6D0000 */  lw    $t5, ($v1)
/* 00419814 0018C900 */  sll   $t9, $t8, 4
/* 00419818 01B97021 */  addu  $t6, $t5, $t9
/* 0041981C ADC6FFFC */  sw    $a2, -4($t6)
/* 00419820 8D180000 */  lw    $t8, ($t0)
/* 00419824 8C6F0000 */  lw    $t7, ($v1)
/* 00419828 00186900 */  sll   $t5, $t8, 4
/* 0041982C 01ED1021 */  addu  $v0, $t7, $t5
/* 00419830 8C4BFFF4 */  lw    $t3, -0xc($v0)
/* 00419834 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00419838 000BC9C0 */  sll   $t9, $t3, 7
/* 0041983C 00197742 */  srl   $t6, $t9, 0x1d
/* 00419840 00EEC026 */  xor   $t8, $a3, $t6
/* 00419844 00187F40 */  sll   $t7, $t8, 0x1d
/* 00419848 000F69C2 */  srl   $t5, $t7, 7
/* 0041984C 8F8E897C */  lw     $t6, %got(i_ptr)($gp)
/* 00419850 01ABC826 */  xor   $t9, $t5, $t3
/* 00419854 AC590004 */  sw    $t9, 4($v0)
/* 00419858 8D0C0000 */  lw    $t4, ($t0)
/* 0041985C 8DCE0000 */  lw    $t6, ($t6)
/* 00419860 55CC0008 */  bnel  $t6, $t4, .L00419884
/* 00419864 8FBF001C */   lw    $ra, 0x1c($sp)
/* 00419868 8F9981D4 */  lw    $t9, %call16(grow_ibuffer)($gp)
/* 0041986C 0320F809 */  jalr  $t9
/* 00419870 00000000 */   nop   
/* 00419874 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00419878 8F888984 */  lw     $t0, %got(d_ptr)($gp)
/* 0041987C 8D0C0000 */  lw    $t4, ($t0)
/* 00419880 8FBF001C */  lw    $ra, 0x1c($sp)
.L00419884:
/* 00419884 2598FFFF */  addiu $t8, $t4, -1
/* 00419888 AD180000 */  sw    $t8, ($t0)
/* 0041988C 03E00008 */  jr    $ra
/* 00419890 27BD0020 */   addiu $sp, $sp, 0x20
    .type demit_ri, @function
    .size demit_ri, .-demit_ri
    .end demit_ri

glabel demit_rr
    .ent demit_rr
    # 00420810 gen_entry_exit
    # 00421170 gen_entry
    # 004219E8 gen_reg_save_restore
/* 00419894 3C1C0FC0 */  .cpload $t9
/* 00419898 279C61BC */  
/* 0041989C 0399E021 */  
/* 004198A0 8F888984 */  lw     $t0, %got(d_ptr)($gp)
/* 004198A4 8F878978 */  lw     $a3, %got(ibuffer)($gp)
/* 004198A8 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 004198AC 8D0F0000 */  lw    $t7, ($t0)
/* 004198B0 8CEE0000 */  lw    $t6, ($a3)
/* 004198B4 AFBF001C */  sw    $ra, 0x1c($sp)
/* 004198B8 000FC100 */  sll   $t8, $t7, 4
/* 004198BC AFBC0018 */  sw    $gp, 0x18($sp)
/* 004198C0 AFA40020 */  sw    $a0, 0x20($sp)
/* 004198C4 AFA50024 */  sw    $a1, 0x24($sp)
/* 004198C8 AFA60028 */  sw    $a2, 0x28($sp)
/* 004198CC 01D81021 */  addu  $v0, $t6, $t8
/* 004198D0 9059FFF5 */  lbu   $t9, -0xb($v0)
/* 004198D4 2442FFF0 */  addiu $v0, $v0, -0x10
/* 004198D8 3C01FFFC */  lui   $at, 0xfffc
/* 004198DC 332BFFC0 */  andi  $t3, $t9, 0xffc0
/* 004198E0 356C0017 */  ori   $t4, $t3, 0x17
/* 004198E4 A04C0005 */  sb    $t4, 5($v0)
/* 004198E8 8D0F0000 */  lw    $t7, ($t0)
/* 004198EC 8CED0000 */  lw    $t5, ($a3)
/* 004198F0 34213FFF */  ori   $at, $at, 0x3fff
/* 004198F4 000F7100 */  sll   $t6, $t7, 4
/* 004198F8 01AE1021 */  addu  $v0, $t5, $t6
/* 004198FC 9449FFF6 */  lhu   $t1, -0xa($v0)
/* 00419900 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00419904 0009C580 */  sll   $t8, $t1, 0x16
/* 00419908 0018CDC2 */  srl   $t9, $t8, 0x17
/* 0041990C 00995826 */  xor   $t3, $a0, $t9
/* 00419910 000B65C0 */  sll   $t4, $t3, 0x17
/* 00419914 000C7D82 */  srl   $t7, $t4, 0x16
/* 00419918 01E96826 */  xor   $t5, $t7, $t1
/* 0041991C A44D0006 */  sh    $t5, 6($v0)
/* 00419920 8D180000 */  lw    $t8, ($t0)
/* 00419924 8CEE0000 */  lw    $t6, ($a3)
/* 00419928 0018C900 */  sll   $t9, $t8, 4
/* 0041992C 01D91021 */  addu  $v0, $t6, $t9
/* 00419930 8C4BFFF8 */  lw    $t3, -8($v0)
/* 00419934 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00419938 01616024 */  and   $t4, $t3, $at
/* 0041993C 3C010001 */  lui   $at, 1
/* 00419940 34214000 */  ori   $at, $at, 0x4000
/* 00419944 01817825 */  or    $t7, $t4, $at
/* 00419948 AC4F0008 */  sw    $t7, 8($v0)
/* 0041994C 8D180000 */  lw    $t8, ($t0)
/* 00419950 8CED0000 */  lw    $t5, ($a3)
/* 00419954 00187100 */  sll   $t6, $t8, 4
/* 00419958 01AE1021 */  addu  $v0, $t5, $t6
/* 0041995C 8C43FFF8 */  lw    $v1, -8($v0)
/* 00419960 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00419964 0003CE42 */  srl   $t9, $v1, 0x19
/* 00419968 00B95826 */  xor   $t3, $a1, $t9
/* 0041996C 000B6640 */  sll   $t4, $t3, 0x19
/* 00419970 01837826 */  xor   $t7, $t4, $v1
/* 00419974 AC4F0008 */  sw    $t7, 8($v0)
/* 00419978 8D0D0000 */  lw    $t5, ($t0)
/* 0041997C 8CF80000 */  lw    $t8, ($a3)
/* 00419980 000D7100 */  sll   $t6, $t5, 4
/* 00419984 030E1021 */  addu  $v0, $t8, $t6
/* 00419988 8C43FFF8 */  lw    $v1, -8($v0)
/* 0041998C 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00419990 0003C9C0 */  sll   $t9, $v1, 7
/* 00419994 00195E42 */  srl   $t3, $t9, 0x19
/* 00419998 00CB6026 */  xor   $t4, $a2, $t3
/* 0041999C 000C7E40 */  sll   $t7, $t4, 0x19
/* 004199A0 000F69C2 */  srl   $t5, $t7, 7
/* 004199A4 01A3C026 */  xor   $t8, $t5, $v1
/* 004199A8 AC580008 */  sw    $t8, 8($v0)
/* 004199AC 8D190000 */  lw    $t9, ($t0)
/* 004199B0 8CEE0000 */  lw    $t6, ($a3)
/* 004199B4 8F8F897C */  lw     $t7, %got(i_ptr)($gp)
/* 004199B8 00195900 */  sll   $t3, $t9, 4
/* 004199BC 01CB6021 */  addu  $t4, $t6, $t3
/* 004199C0 AD80FFF0 */  sw    $zero, -0x10($t4)
/* 004199C4 8D0A0000 */  lw    $t2, ($t0)
/* 004199C8 8DEF0000 */  lw    $t7, ($t7)
/* 004199CC 55EA0008 */  bnel  $t7, $t2, .L004199F0
/* 004199D0 8FBF001C */   lw    $ra, 0x1c($sp)
/* 004199D4 8F9981D4 */  lw    $t9, %call16(grow_ibuffer)($gp)
/* 004199D8 0320F809 */  jalr  $t9
/* 004199DC 00000000 */   nop   
/* 004199E0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004199E4 8F888984 */  lw     $t0, %got(d_ptr)($gp)
/* 004199E8 8D0A0000 */  lw    $t2, ($t0)
/* 004199EC 8FBF001C */  lw    $ra, 0x1c($sp)
.L004199F0:
/* 004199F0 254DFFFF */  addiu $t5, $t2, -1
/* 004199F4 AD0D0000 */  sw    $t5, ($t0)
/* 004199F8 03E00008 */  jr    $ra
/* 004199FC 27BD0020 */   addiu $sp, $sp, 0x20
    .type demit_rr, @function
    .size demit_rr, .-demit_rr
    .end demit_rr

glabel demit_a
    .ent demit_a
    # 00420810 gen_entry_exit
/* 00419A00 3C1C0FC0 */  .cpload $t9
/* 00419A04 279C6050 */  
/* 00419A08 0399E021 */  
/* 00419A0C 8F878984 */  lw     $a3, %got(d_ptr)($gp)
/* 00419A10 8F838978 */  lw     $v1, %got(ibuffer)($gp)
/* 00419A14 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00419A18 8CEF0000 */  lw    $t7, ($a3)
/* 00419A1C 8C6E0000 */  lw    $t6, ($v1)
/* 00419A20 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00419A24 000FC100 */  sll   $t8, $t7, 4
/* 00419A28 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00419A2C AFA40020 */  sw    $a0, 0x20($sp)
/* 00419A30 01D81021 */  addu  $v0, $t6, $t8
/* 00419A34 9059FFF5 */  lbu   $t9, -0xb($v0)
/* 00419A38 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00419A3C 3C01FFFC */  lui   $at, 0xfffc
/* 00419A40 332AFFC0 */  andi  $t2, $t9, 0xffc0
/* 00419A44 354B0017 */  ori   $t3, $t2, 0x17
/* 00419A48 A04B0005 */  sb    $t3, 5($v0)
/* 00419A4C 8CED0000 */  lw    $t5, ($a3)
/* 00419A50 8C6C0000 */  lw    $t4, ($v1)
/* 00419A54 34213FFF */  ori   $at, $at, 0x3fff
/* 00419A58 000D7900 */  sll   $t7, $t5, 4
/* 00419A5C 018F1021 */  addu  $v0, $t4, $t7
/* 00419A60 9448FFF6 */  lhu   $t0, -0xa($v0)
/* 00419A64 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00419A68 00087580 */  sll   $t6, $t0, 0x16
/* 00419A6C 000EC5C2 */  srl   $t8, $t6, 0x17
/* 00419A70 0098C826 */  xor   $t9, $a0, $t8
/* 00419A74 001955C0 */  sll   $t2, $t9, 0x17
/* 00419A78 000A5D82 */  srl   $t3, $t2, 0x16
/* 00419A7C 01686826 */  xor   $t5, $t3, $t0
/* 00419A80 A44D0006 */  sh    $t5, 6($v0)
/* 00419A84 8CEF0000 */  lw    $t7, ($a3)
/* 00419A88 8C6C0000 */  lw    $t4, ($v1)
/* 00419A8C 000F7100 */  sll   $t6, $t7, 4
/* 00419A90 018E1021 */  addu  $v0, $t4, $t6
/* 00419A94 8C58FFF8 */  lw    $t8, -8($v0)
/* 00419A98 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00419A9C 0301C824 */  and   $t9, $t8, $at
/* 00419AA0 3C010001 */  lui   $at, 1
/* 00419AA4 34218000 */  ori   $at, $at, 0x8000
/* 00419AA8 03215025 */  or    $t2, $t9, $at
/* 00419AAC AC4A0008 */  sw    $t2, 8($v0)
/* 00419AB0 8CED0000 */  lw    $t5, ($a3)
/* 00419AB4 8C6B0000 */  lw    $t3, ($v1)
/* 00419AB8 3C0101FF */  lui   $at, 0x1ff
/* 00419ABC 000D7900 */  sll   $t7, $t5, 4
/* 00419AC0 016F6021 */  addu  $t4, $t3, $t7
/* 00419AC4 AD85FFF0 */  sw    $a1, -0x10($t4)
/* 00419AC8 8CF80000 */  lw    $t8, ($a3)
/* 00419ACC 8C6E0000 */  lw    $t6, ($v1)
/* 00419AD0 3421FFFF */  ori   $at, $at, 0xffff
/* 00419AD4 0018C900 */  sll   $t9, $t8, 4
/* 00419AD8 01D95021 */  addu  $t2, $t6, $t9
/* 00419ADC AD46FFFC */  sw    $a2, -4($t2)
/* 00419AE0 8CEB0000 */  lw    $t3, ($a3)
/* 00419AE4 8C6D0000 */  lw    $t5, ($v1)
/* 00419AE8 000B7900 */  sll   $t7, $t3, 4
/* 00419AEC 01AF1021 */  addu  $v0, $t5, $t7
/* 00419AF0 8C4CFFF8 */  lw    $t4, -8($v0)
/* 00419AF4 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00419AF8 0181C024 */  and   $t8, $t4, $at
/* 00419AFC 3C019000 */  lui   $at, 0x9000
/* 00419B00 03017025 */  or    $t6, $t8, $at
/* 00419B04 AC4E0008 */  sw    $t6, 8($v0)
/* 00419B08 8CEA0000 */  lw    $t2, ($a3)
/* 00419B0C 8C790000 */  lw    $t9, ($v1)
/* 00419B10 3C01FE03 */  lui   $at, 0xfe03
/* 00419B14 000A5900 */  sll   $t3, $t2, 4
/* 00419B18 032B1021 */  addu  $v0, $t9, $t3
/* 00419B1C 8C4DFFF8 */  lw    $t5, -8($v0)
/* 00419B20 3421FFFF */  ori   $at, $at, 0xffff
/* 00419B24 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00419B28 01A17824 */  and   $t7, $t5, $at
/* 00419B2C 3C010120 */  lui   $at, 0x120
/* 00419B30 01E16025 */  or    $t4, $t7, $at
/* 00419B34 AC4C0008 */  sw    $t4, 8($v0)
/* 00419B38 8CEE0000 */  lw    $t6, ($a3)
/* 00419B3C 8C780000 */  lw    $t8, ($v1)
/* 00419B40 3C01FE3F */  lui   $at, 0xfe3f
/* 00419B44 000E5100 */  sll   $t2, $t6, 4
/* 00419B48 030A1021 */  addu  $v0, $t8, $t2
/* 00419B4C 8C59FFF4 */  lw    $t9, -0xc($v0)
/* 00419B50 3421FFFF */  ori   $at, $at, 0xffff
/* 00419B54 8F8D897C */  lw     $t5, %got(i_ptr)($gp)
/* 00419B58 03215824 */  and   $t3, $t9, $at
/* 00419B5C AC4BFFF4 */  sw    $t3, -0xc($v0)
/* 00419B60 8CE90000 */  lw    $t1, ($a3)
/* 00419B64 8DAD0000 */  lw    $t5, ($t5)
/* 00419B68 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00419B6C 55A90008 */  bnel  $t5, $t1, .L00419B90
/* 00419B70 8FBF001C */   lw    $ra, 0x1c($sp)
/* 00419B74 8F9981D4 */  lw    $t9, %call16(grow_ibuffer)($gp)
/* 00419B78 0320F809 */  jalr  $t9
/* 00419B7C 00000000 */   nop   
/* 00419B80 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00419B84 8F878984 */  lw     $a3, %got(d_ptr)($gp)
/* 00419B88 8CE90000 */  lw    $t1, ($a3)
/* 00419B8C 8FBF001C */  lw    $ra, 0x1c($sp)
.L00419B90:
/* 00419B90 252FFFFF */  addiu $t7, $t1, -1
/* 00419B94 ACEF0000 */  sw    $t7, ($a3)
/* 00419B98 03E00008 */  jr    $ra
/* 00419B9C 27BD0020 */   addiu $sp, $sp, 0x20
    .type demit_a, @function
    .size demit_a, .-demit_a
    .end demit_a

glabel demit_regmask
    .ent demit_regmask
    # 00420810 gen_entry_exit
/* 00419BA0 3C1C0FC0 */  .cpload $t9
/* 00419BA4 279C5EB0 */  
/* 00419BA8 0399E021 */  
/* 00419BAC 8F888984 */  lw     $t0, %got(d_ptr)($gp)
/* 00419BB0 8F878978 */  lw     $a3, %got(ibuffer)($gp)
/* 00419BB4 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00419BB8 8D0F0000 */  lw    $t7, ($t0)
/* 00419BBC 8CEE0000 */  lw    $t6, ($a3)
/* 00419BC0 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00419BC4 000FC100 */  sll   $t8, $t7, 4
/* 00419BC8 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00419BCC AFA40020 */  sw    $a0, 0x20($sp)
/* 00419BD0 01D81021 */  addu  $v0, $t6, $t8
/* 00419BD4 9043FFF5 */  lbu   $v1, -0xb($v0)
/* 00419BD8 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00419BDC 0003CE80 */  sll   $t9, $v1, 0x1a
/* 00419BE0 00195682 */  srl   $t2, $t9, 0x1a
/* 00419BE4 008A5826 */  xor   $t3, $a0, $t2
/* 00419BE8 316C003F */  andi  $t4, $t3, 0x3f
/* 00419BEC 01836826 */  xor   $t5, $t4, $v1
/* 00419BF0 A04D0005 */  sb    $t5, 5($v0)
/* 00419BF4 8D0E0000 */  lw    $t6, ($t0)
/* 00419BF8 8CEF0000 */  lw    $t7, ($a3)
/* 00419BFC 000EC100 */  sll   $t8, $t6, 4
/* 00419C00 01F8C821 */  addu  $t9, $t7, $t8
/* 00419C04 AF20FFF0 */  sw    $zero, -0x10($t9)
/* 00419C08 8D0B0000 */  lw    $t3, ($t0)
/* 00419C0C 8CEA0000 */  lw    $t2, ($a3)
/* 00419C10 000B6100 */  sll   $t4, $t3, 4
/* 00419C14 014C6821 */  addu  $t5, $t2, $t4
/* 00419C18 ADA5FFF8 */  sw    $a1, -8($t5)
/* 00419C1C 8D0F0000 */  lw    $t7, ($t0)
/* 00419C20 8CEE0000 */  lw    $t6, ($a3)
/* 00419C24 8F8B897C */  lw     $t3, %got(i_ptr)($gp)
/* 00419C28 000FC100 */  sll   $t8, $t7, 4
/* 00419C2C 01D8C821 */  addu  $t9, $t6, $t8
/* 00419C30 AF26FFFC */  sw    $a2, -4($t9)
/* 00419C34 8D090000 */  lw    $t1, ($t0)
/* 00419C38 8D6B0000 */  lw    $t3, ($t3)
/* 00419C3C 552B0008 */  bnel  $t1, $t3, .L00419C60
/* 00419C40 8FBF001C */   lw    $ra, 0x1c($sp)
/* 00419C44 8F9981D4 */  lw    $t9, %call16(grow_ibuffer)($gp)
/* 00419C48 0320F809 */  jalr  $t9
/* 00419C4C 00000000 */   nop   
/* 00419C50 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00419C54 8F888984 */  lw     $t0, %got(d_ptr)($gp)
/* 00419C58 8D090000 */  lw    $t1, ($t0)
/* 00419C5C 8FBF001C */  lw    $ra, 0x1c($sp)
.L00419C60:
/* 00419C60 252AFFFF */  addiu $t2, $t1, -1
/* 00419C64 AD0A0000 */  sw    $t2, ($t0)
/* 00419C68 03E00008 */  jr    $ra
/* 00419C6C 27BD0020 */   addiu $sp, $sp, 0x20
    .type demit_regmask, @function
    .size demit_regmask, .-demit_regmask
    .end demit_regmask

glabel demit_rrr
    .ent demit_rrr
    # 00420810 gen_entry_exit
/* 00419C70 3C1C0FC0 */  .cpload $t9
/* 00419C74 279C5DE0 */  
/* 00419C78 0399E021 */  
/* 00419C7C 8F898984 */  lw     $t1, %got(d_ptr)($gp)
/* 00419C80 8F888978 */  lw     $t0, %got(ibuffer)($gp)
/* 00419C84 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00419C88 8D2F0000 */  lw    $t7, ($t1)
/* 00419C8C 8D0E0000 */  lw    $t6, ($t0)
/* 00419C90 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00419C94 000FC100 */  sll   $t8, $t7, 4
/* 00419C98 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00419C9C AFA40020 */  sw    $a0, 0x20($sp)
/* 00419CA0 AFA50024 */  sw    $a1, 0x24($sp)
/* 00419CA4 AFA60028 */  sw    $a2, 0x28($sp)
/* 00419CA8 AFA7002C */  sw    $a3, 0x2c($sp)
/* 00419CAC 01D81021 */  addu  $v0, $t6, $t8
/* 00419CB0 9059FFF5 */  lbu   $t9, -0xb($v0)
/* 00419CB4 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00419CB8 3C01FFFC */  lui   $at, 0xfffc
/* 00419CBC 332BFFC0 */  andi  $t3, $t9, 0xffc0
/* 00419CC0 356C0017 */  ori   $t4, $t3, 0x17
/* 00419CC4 A04C0005 */  sb    $t4, 5($v0)
/* 00419CC8 8D2F0000 */  lw    $t7, ($t1)
/* 00419CCC 8D0D0000 */  lw    $t5, ($t0)
/* 00419CD0 34213FFF */  ori   $at, $at, 0x3fff
/* 00419CD4 000F7100 */  sll   $t6, $t7, 4
/* 00419CD8 01AE1021 */  addu  $v0, $t5, $t6
/* 00419CDC 944AFFF6 */  lhu   $t2, -0xa($v0)
/* 00419CE0 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00419CE4 000AC580 */  sll   $t8, $t2, 0x16
/* 00419CE8 0018CDC2 */  srl   $t9, $t8, 0x17
/* 00419CEC 00995826 */  xor   $t3, $a0, $t9
/* 00419CF0 000B65C0 */  sll   $t4, $t3, 0x17
/* 00419CF4 000C7D82 */  srl   $t7, $t4, 0x16
/* 00419CF8 01EA6826 */  xor   $t5, $t7, $t2
/* 00419CFC A44D0006 */  sh    $t5, 6($v0)
/* 00419D00 8D380000 */  lw    $t8, ($t1)
/* 00419D04 8D0E0000 */  lw    $t6, ($t0)
/* 00419D08 0018C900 */  sll   $t9, $t8, 4
/* 00419D0C 01D91021 */  addu  $v0, $t6, $t9
/* 00419D10 8C4BFFF8 */  lw    $t3, -8($v0)
/* 00419D14 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00419D18 01616024 */  and   $t4, $t3, $at
/* 00419D1C 358FC000 */  ori   $t7, $t4, 0xc000
/* 00419D20 AC4F0008 */  sw    $t7, 8($v0)
/* 00419D24 8D380000 */  lw    $t8, ($t1)
/* 00419D28 8D0D0000 */  lw    $t5, ($t0)
/* 00419D2C 00187100 */  sll   $t6, $t8, 4
/* 00419D30 01AEC821 */  addu  $t9, $t5, $t6
/* 00419D34 AF20FFF0 */  sw    $zero, -0x10($t9)
/* 00419D38 8D2C0000 */  lw    $t4, ($t1)
/* 00419D3C 8D0B0000 */  lw    $t3, ($t0)
/* 00419D40 000C7900 */  sll   $t7, $t4, 4
/* 00419D44 016F1021 */  addu  $v0, $t3, $t7
/* 00419D48 8C43FFF8 */  lw    $v1, -8($v0)
/* 00419D4C 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00419D50 0003C642 */  srl   $t8, $v1, 0x19
/* 00419D54 00B86826 */  xor   $t5, $a1, $t8
/* 00419D58 000D7640 */  sll   $t6, $t5, 0x19
/* 00419D5C 01C3C826 */  xor   $t9, $t6, $v1
/* 00419D60 AC590008 */  sw    $t9, 8($v0)
/* 00419D64 8D2B0000 */  lw    $t3, ($t1)
/* 00419D68 8D0C0000 */  lw    $t4, ($t0)
/* 00419D6C 000B7900 */  sll   $t7, $t3, 4
/* 00419D70 018F1021 */  addu  $v0, $t4, $t7
/* 00419D74 8C43FFF8 */  lw    $v1, -8($v0)
/* 00419D78 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00419D7C 0003C1C0 */  sll   $t8, $v1, 7
/* 00419D80 00186E42 */  srl   $t5, $t8, 0x19
/* 00419D84 00CD7026 */  xor   $t6, $a2, $t5
/* 00419D88 000ECE40 */  sll   $t9, $t6, 0x19
/* 00419D8C 001959C2 */  srl   $t3, $t9, 7
/* 00419D90 01636026 */  xor   $t4, $t3, $v1
/* 00419D94 AC4C0008 */  sw    $t4, 8($v0)
/* 00419D98 8D380000 */  lw    $t8, ($t1)
/* 00419D9C 8D0F0000 */  lw    $t7, ($t0)
/* 00419DA0 00186900 */  sll   $t5, $t8, 4
/* 00419DA4 01ED1021 */  addu  $v0, $t7, $t5
/* 00419DA8 8C43FFF8 */  lw    $v1, -8($v0)
/* 00419DAC 8F8D897C */  lw     $t5, %got(i_ptr)($gp)
/* 00419DB0 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00419DB4 00037480 */  sll   $t6, $v1, 0x12
/* 00419DB8 000ECE42 */  srl   $t9, $t6, 0x19
/* 00419DBC 00F95826 */  xor   $t3, $a3, $t9
/* 00419DC0 000B6640 */  sll   $t4, $t3, 0x19
/* 00419DC4 000CC482 */  srl   $t8, $t4, 0x12
/* 00419DC8 03037826 */  xor   $t7, $t8, $v1
/* 00419DCC AC4F0008 */  sw    $t7, 8($v0)
/* 00419DD0 8D220000 */  lw    $v0, ($t1)
/* 00419DD4 8DAD0000 */  lw    $t5, ($t5)
/* 00419DD8 55A20008 */  bnel  $t5, $v0, .L00419DFC
/* 00419DDC 8FBF001C */   lw    $ra, 0x1c($sp)
/* 00419DE0 8F9981D4 */  lw    $t9, %call16(grow_ibuffer)($gp)
/* 00419DE4 0320F809 */  jalr  $t9
/* 00419DE8 00000000 */   nop   
/* 00419DEC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00419DF0 8F898984 */  lw     $t1, %got(d_ptr)($gp)
/* 00419DF4 8D220000 */  lw    $v0, ($t1)
/* 00419DF8 8FBF001C */  lw    $ra, 0x1c($sp)
.L00419DFC:
/* 00419DFC 244EFFFF */  addiu $t6, $v0, -1
/* 00419E00 AD2E0000 */  sw    $t6, ($t1)
/* 00419E04 03E00008 */  jr    $ra
/* 00419E08 27BD0020 */   addiu $sp, $sp, 0x20
    .type demit_rrr, @function
    .size demit_rrr, .-demit_rrr
    .end demit_rrr

glabel demit_rri
    .ent demit_rri
    # 00420810 gen_entry_exit
/* 00419E0C 3C1C0FC0 */  .cpload $t9
/* 00419E10 279C5C44 */  
/* 00419E14 0399E021 */  
/* 00419E18 8F898984 */  lw     $t1, %got(d_ptr)($gp)
/* 00419E1C 8F888978 */  lw     $t0, %got(ibuffer)($gp)
/* 00419E20 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00419E24 8D2F0000 */  lw    $t7, ($t1)
/* 00419E28 8D0E0000 */  lw    $t6, ($t0)
/* 00419E2C AFBF001C */  sw    $ra, 0x1c($sp)
/* 00419E30 000FC100 */  sll   $t8, $t7, 4
/* 00419E34 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00419E38 AFA40020 */  sw    $a0, 0x20($sp)
/* 00419E3C AFA50024 */  sw    $a1, 0x24($sp)
/* 00419E40 AFA60028 */  sw    $a2, 0x28($sp)
/* 00419E44 01D81021 */  addu  $v0, $t6, $t8
/* 00419E48 9059FFF5 */  lbu   $t9, -0xb($v0)
/* 00419E4C 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00419E50 3C01FFFC */  lui   $at, 0xfffc
/* 00419E54 332CFFC0 */  andi  $t4, $t9, 0xffc0
/* 00419E58 358D0017 */  ori   $t5, $t4, 0x17
/* 00419E5C A04D0005 */  sb    $t5, 5($v0)
/* 00419E60 8D2E0000 */  lw    $t6, ($t1)
/* 00419E64 8D0F0000 */  lw    $t7, ($t0)
/* 00419E68 34213FFF */  ori   $at, $at, 0x3fff
/* 00419E6C 000EC100 */  sll   $t8, $t6, 4
/* 00419E70 01F81021 */  addu  $v0, $t7, $t8
/* 00419E74 944AFFF6 */  lhu   $t2, -0xa($v0)
/* 00419E78 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00419E7C 000ACD80 */  sll   $t9, $t2, 0x16
/* 00419E80 001965C2 */  srl   $t4, $t9, 0x17
/* 00419E84 008C6826 */  xor   $t5, $a0, $t4
/* 00419E88 000D75C0 */  sll   $t6, $t5, 0x17
/* 00419E8C 000E7D82 */  srl   $t7, $t6, 0x16
/* 00419E90 01EAC026 */  xor   $t8, $t7, $t2
/* 00419E94 A4580006 */  sh    $t8, 6($v0)
/* 00419E98 8D2C0000 */  lw    $t4, ($t1)
/* 00419E9C 8D190000 */  lw    $t9, ($t0)
/* 00419EA0 000C6900 */  sll   $t5, $t4, 4
/* 00419EA4 032D1021 */  addu  $v0, $t9, $t5
/* 00419EA8 8C4EFFF8 */  lw    $t6, -8($v0)
/* 00419EAC 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00419EB0 01C17824 */  and   $t7, $t6, $at
/* 00419EB4 3C010001 */  lui   $at, 1
/* 00419EB8 01E1C025 */  or    $t8, $t7, $at
/* 00419EBC AC580008 */  sw    $t8, 8($v0)
/* 00419EC0 8D390000 */  lw    $t9, ($t1)
/* 00419EC4 8D0C0000 */  lw    $t4, ($t0)
/* 00419EC8 00196900 */  sll   $t5, $t9, 4
/* 00419ECC 018D1021 */  addu  $v0, $t4, $t5
/* 00419ED0 8C43FFF8 */  lw    $v1, -8($v0)
/* 00419ED4 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00419ED8 00037642 */  srl   $t6, $v1, 0x19
/* 00419EDC 00AE7826 */  xor   $t7, $a1, $t6
/* 00419EE0 000FC640 */  sll   $t8, $t7, 0x19
/* 00419EE4 0303C826 */  xor   $t9, $t8, $v1
/* 00419EE8 AC590008 */  sw    $t9, 8($v0)
/* 00419EEC 8D2D0000 */  lw    $t5, ($t1)
/* 00419EF0 8D0C0000 */  lw    $t4, ($t0)
/* 00419EF4 000D7100 */  sll   $t6, $t5, 4
/* 00419EF8 018E1021 */  addu  $v0, $t4, $t6
/* 00419EFC 8C43FFF8 */  lw    $v1, -8($v0)
/* 00419F00 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00419F04 000379C0 */  sll   $t7, $v1, 7
/* 00419F08 000FC642 */  srl   $t8, $t7, 0x19
/* 00419F0C 00D8C826 */  xor   $t9, $a2, $t8
/* 00419F10 00196E40 */  sll   $t5, $t9, 0x19
/* 00419F14 000D61C2 */  srl   $t4, $t5, 7
/* 00419F18 01837026 */  xor   $t6, $t4, $v1
/* 00419F1C AC4E0008 */  sw    $t6, 8($v0)
/* 00419F20 8D380000 */  lw    $t8, ($t1)
/* 00419F24 8D0F0000 */  lw    $t7, ($t0)
/* 00419F28 0018C900 */  sll   $t9, $t8, 4
/* 00419F2C 01F96821 */  addu  $t5, $t7, $t9
/* 00419F30 ADA0FFF0 */  sw    $zero, -0x10($t5)
/* 00419F34 8D2E0000 */  lw    $t6, ($t1)
/* 00419F38 8D0C0000 */  lw    $t4, ($t0)
/* 00419F3C 8F99897C */  lw     $t9, %got(i_ptr)($gp)
/* 00419F40 000EC100 */  sll   $t8, $t6, 4
/* 00419F44 01987821 */  addu  $t7, $t4, $t8
/* 00419F48 ADE7FFFC */  sw    $a3, -4($t7)
/* 00419F4C 8D2B0000 */  lw    $t3, ($t1)
/* 00419F50 8F390000 */  lw    $t9, ($t9)
/* 00419F54 572B0008 */  bnel  $t9, $t3, .L00419F78
/* 00419F58 8FBF001C */   lw    $ra, 0x1c($sp)
/* 00419F5C 8F9981D4 */  lw    $t9, %call16(grow_ibuffer)($gp)
/* 00419F60 0320F809 */  jalr  $t9
/* 00419F64 00000000 */   nop   
/* 00419F68 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00419F6C 8F898984 */  lw     $t1, %got(d_ptr)($gp)
/* 00419F70 8D2B0000 */  lw    $t3, ($t1)
/* 00419F74 8FBF001C */  lw    $ra, 0x1c($sp)
.L00419F78:
/* 00419F78 256DFFFF */  addiu $t5, $t3, -1
/* 00419F7C AD2D0000 */  sw    $t5, ($t1)
/* 00419F80 03E00008 */  jr    $ra
/* 00419F84 27BD0020 */   addiu $sp, $sp, 0x20
    .type demit_rri, @function
    .size demit_rri, .-demit_rri
    .end demit_rri

glabel demit_rrll
    .ent demit_rrll
    # 00420810 gen_entry_exit
/* 00419F88 3C1C0FC0 */  .cpload $t9
/* 00419F8C 279C5AC8 */  
/* 00419F90 0399E021 */  
/* 00419F94 8F888984 */  lw     $t0, %got(d_ptr)($gp)
/* 00419F98 8F8A8978 */  lw     $t2, %got(ibuffer)($gp)
/* 00419F9C 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00419FA0 8D0F0000 */  lw    $t7, ($t0)
/* 00419FA4 8D4E0000 */  lw    $t6, ($t2)
/* 00419FA8 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00419FAC 000FC100 */  sll   $t8, $t7, 4
/* 00419FB0 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00419FB4 AFA40020 */  sw    $a0, 0x20($sp)
/* 00419FB8 AFA50024 */  sw    $a1, 0x24($sp)
/* 00419FBC AFA60028 */  sw    $a2, 0x28($sp)
/* 00419FC0 01D81021 */  addu  $v0, $t6, $t8
/* 00419FC4 9059FFF5 */  lbu   $t9, -0xb($v0)
/* 00419FC8 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00419FCC 3C01FFFC */  lui   $at, 0xfffc
/* 00419FD0 332BFFC0 */  andi  $t3, $t9, 0xffc0
/* 00419FD4 356C0017 */  ori   $t4, $t3, 0x17
/* 00419FD8 A04C0005 */  sb    $t4, 5($v0)
/* 00419FDC 8D0F0000 */  lw    $t7, ($t0)
/* 00419FE0 8D4D0000 */  lw    $t5, ($t2)
/* 00419FE4 97B80022 */  lhu   $t8, 0x22($sp)
/* 00419FE8 000F7100 */  sll   $t6, $t7, 4
/* 00419FEC 01AE1021 */  addu  $v0, $t5, $t6
/* 00419FF0 9449FFF6 */  lhu   $t1, -0xa($v0)
/* 00419FF4 2442FFF0 */  addiu $v0, $v0, -0x10
/* 00419FF8 34213FFF */  ori   $at, $at, 0x3fff
/* 00419FFC 0009CD80 */  sll   $t9, $t1, 0x16
/* 0041A000 00195DC2 */  srl   $t3, $t9, 0x17
/* 0041A004 030B6026 */  xor   $t4, $t8, $t3
/* 0041A008 000C7DC0 */  sll   $t7, $t4, 0x17
/* 0041A00C 000F6D82 */  srl   $t5, $t7, 0x16
/* 0041A010 01A97026 */  xor   $t6, $t5, $t1
/* 0041A014 A44E0006 */  sh    $t6, 6($v0)
/* 0041A018 8D180000 */  lw    $t8, ($t0)
/* 0041A01C 8D590000 */  lw    $t9, ($t2)
/* 0041A020 00E02025 */  move  $a0, $a3
/* 0041A024 00185900 */  sll   $t3, $t8, 4
/* 0041A028 032B1021 */  addu  $v0, $t9, $t3
/* 0041A02C 8C4CFFF8 */  lw    $t4, -8($v0)
/* 0041A030 2442FFF0 */  addiu $v0, $v0, -0x10
/* 0041A034 01817824 */  and   $t7, $t4, $at
/* 0041A038 3C010002 */  lui   $at, 2
/* 0041A03C 01E16825 */  or    $t5, $t7, $at
/* 0041A040 AC4D0008 */  sw    $t5, 8($v0)
/* 0041A044 8D180000 */  lw    $t8, ($t0)
/* 0041A048 8D4E0000 */  lw    $t6, ($t2)
/* 0041A04C 0018C900 */  sll   $t9, $t8, 4
/* 0041A050 01D91021 */  addu  $v0, $t6, $t9
/* 0041A054 8C43FFF8 */  lw    $v1, -8($v0)
/* 0041A058 2442FFF0 */  addiu $v0, $v0, -0x10
/* 0041A05C 00035E42 */  srl   $t3, $v1, 0x19
/* 0041A060 00AB6026 */  xor   $t4, $a1, $t3
/* 0041A064 000C7E40 */  sll   $t7, $t4, 0x19
/* 0041A068 01E36826 */  xor   $t5, $t7, $v1
/* 0041A06C AC4D0008 */  sw    $t5, 8($v0)
/* 0041A070 8D0E0000 */  lw    $t6, ($t0)
/* 0041A074 8D580000 */  lw    $t8, ($t2)
/* 0041A078 000EC900 */  sll   $t9, $t6, 4
/* 0041A07C 03191021 */  addu  $v0, $t8, $t9
/* 0041A080 8C43FFF8 */  lw    $v1, -8($v0)
/* 0041A084 2442FFF0 */  addiu $v0, $v0, -0x10
/* 0041A088 000359C0 */  sll   $t3, $v1, 7
/* 0041A08C 000B6642 */  srl   $t4, $t3, 0x19
/* 0041A090 00CC7826 */  xor   $t7, $a2, $t4
/* 0041A094 000F6E40 */  sll   $t5, $t7, 0x19
/* 0041A098 000D71C2 */  srl   $t6, $t5, 7
/* 0041A09C 01C3C026 */  xor   $t8, $t6, $v1
/* 0041A0A0 AC580008 */  sw    $t8, 8($v0)
/* 0041A0A4 8F9981D8 */  lw    $t9, %call16(create_local_label)($gp)
/* 0041A0A8 0320F809 */  jalr  $t9
/* 0041A0AC 00000000 */   nop   
/* 0041A0B0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041A0B4 8F888984 */  lw     $t0, %got(d_ptr)($gp)
/* 0041A0B8 8F8A8978 */  lw     $t2, %got(ibuffer)($gp)
/* 0041A0BC 8F8D897C */  lw     $t5, %got(i_ptr)($gp)
/* 0041A0C0 8D0B0000 */  lw    $t3, ($t0)
/* 0041A0C4 8D590000 */  lw    $t9, ($t2)
/* 0041A0C8 000B6100 */  sll   $t4, $t3, 4
/* 0041A0CC 032C7821 */  addu  $t7, $t9, $t4
/* 0041A0D0 ADE2FFF0 */  sw    $v0, -0x10($t7)
/* 0041A0D4 8D030000 */  lw    $v1, ($t0)
/* 0041A0D8 8DAD0000 */  lw    $t5, ($t5)
/* 0041A0DC 546D0008 */  bnel  $v1, $t5, .L0041A100
/* 0041A0E0 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0041A0E4 8F9981D4 */  lw    $t9, %call16(grow_ibuffer)($gp)
/* 0041A0E8 0320F809 */  jalr  $t9
/* 0041A0EC 00000000 */   nop   
/* 0041A0F0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041A0F4 8F888984 */  lw     $t0, %got(d_ptr)($gp)
/* 0041A0F8 8D030000 */  lw    $v1, ($t0)
/* 0041A0FC 8FBF001C */  lw    $ra, 0x1c($sp)
.L0041A100:
/* 0041A100 246EFFFF */  addiu $t6, $v1, -1
/* 0041A104 AD0E0000 */  sw    $t6, ($t0)
/* 0041A108 03E00008 */  jr    $ra
/* 0041A10C 27BD0020 */   addiu $sp, $sp, 0x20
    .type demit_rrll, @function
    .size demit_rrll, .-demit_rrll
    .end demit_rrll

glabel demit_i
    .ent demit_i
    # 00420810 gen_entry_exit
/* 0041A110 3C1C0FC0 */  .cpload $t9
/* 0041A114 279C5940 */  
/* 0041A118 0399E021 */  
/* 0041A11C 8F868984 */  lw     $a2, %got(d_ptr)($gp)
/* 0041A120 8F838978 */  lw     $v1, %got(ibuffer)($gp)
/* 0041A124 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0041A128 8CCF0000 */  lw    $t7, ($a2)
/* 0041A12C 8C6E0000 */  lw    $t6, ($v1)
/* 0041A130 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0041A134 000FC100 */  sll   $t8, $t7, 4
/* 0041A138 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0041A13C AFA40020 */  sw    $a0, 0x20($sp)
/* 0041A140 01D81021 */  addu  $v0, $t6, $t8
/* 0041A144 9059FFF5 */  lbu   $t9, -0xb($v0)
/* 0041A148 2442FFF0 */  addiu $v0, $v0, -0x10
/* 0041A14C 3C01FFFC */  lui   $at, 0xfffc
/* 0041A150 3329FFC0 */  andi  $t1, $t9, 0xffc0
/* 0041A154 352A0017 */  ori   $t2, $t1, 0x17
/* 0041A158 A04A0005 */  sb    $t2, 5($v0)
/* 0041A15C 8CCC0000 */  lw    $t4, ($a2)
/* 0041A160 8C6B0000 */  lw    $t3, ($v1)
/* 0041A164 34213FFF */  ori   $at, $at, 0x3fff
/* 0041A168 000C6900 */  sll   $t5, $t4, 4
/* 0041A16C 016D1021 */  addu  $v0, $t3, $t5
/* 0041A170 9447FFF6 */  lhu   $a3, -0xa($v0)
/* 0041A174 2442FFF0 */  addiu $v0, $v0, -0x10
/* 0041A178 00077D80 */  sll   $t7, $a3, 0x16
/* 0041A17C 000F75C2 */  srl   $t6, $t7, 0x17
/* 0041A180 008EC026 */  xor   $t8, $a0, $t6
/* 0041A184 0018CDC0 */  sll   $t9, $t8, 0x17
/* 0041A188 00194D82 */  srl   $t1, $t9, 0x16
/* 0041A18C 01275026 */  xor   $t2, $t1, $a3
/* 0041A190 A44A0006 */  sh    $t2, 6($v0)
/* 0041A194 8CCB0000 */  lw    $t3, ($a2)
/* 0041A198 8C6C0000 */  lw    $t4, ($v1)
/* 0041A19C 000B6900 */  sll   $t5, $t3, 4
/* 0041A1A0 018D1021 */  addu  $v0, $t4, $t5
/* 0041A1A4 8C4FFFF8 */  lw    $t7, -8($v0)
/* 0041A1A8 2442FFF0 */  addiu $v0, $v0, -0x10
/* 0041A1AC 01E17024 */  and   $t6, $t7, $at
/* 0041A1B0 3C010003 */  lui   $at, 3
/* 0041A1B4 34214000 */  ori   $at, $at, 0x4000
/* 0041A1B8 01C1C025 */  or    $t8, $t6, $at
/* 0041A1BC AC580008 */  sw    $t8, 8($v0)
/* 0041A1C0 8CC90000 */  lw    $t1, ($a2)
/* 0041A1C4 8C790000 */  lw    $t9, ($v1)
/* 0041A1C8 3C0101FF */  lui   $at, 0x1ff
/* 0041A1CC 00095100 */  sll   $t2, $t1, 4
/* 0041A1D0 032A5821 */  addu  $t3, $t9, $t2
/* 0041A1D4 AD65FFFC */  sw    $a1, -4($t3)
/* 0041A1D8 8CCD0000 */  lw    $t5, ($a2)
/* 0041A1DC 8C6C0000 */  lw    $t4, ($v1)
/* 0041A1E0 3421FFFF */  ori   $at, $at, 0xffff
/* 0041A1E4 000D7900 */  sll   $t7, $t5, 4
/* 0041A1E8 018F1021 */  addu  $v0, $t4, $t7
/* 0041A1EC 8C4EFFF8 */  lw    $t6, -8($v0)
/* 0041A1F0 2442FFF0 */  addiu $v0, $v0, -0x10
/* 0041A1F4 01C1C024 */  and   $t8, $t6, $at
/* 0041A1F8 3C019000 */  lui   $at, 0x9000
/* 0041A1FC 03014825 */  or    $t1, $t8, $at
/* 0041A200 AC490008 */  sw    $t1, 8($v0)
/* 0041A204 8CCA0000 */  lw    $t2, ($a2)
/* 0041A208 8C790000 */  lw    $t9, ($v1)
/* 0041A20C 3C01FE03 */  lui   $at, 0xfe03
/* 0041A210 000A5900 */  sll   $t3, $t2, 4
/* 0041A214 032B1021 */  addu  $v0, $t9, $t3
/* 0041A218 8C4DFFF8 */  lw    $t5, -8($v0)
/* 0041A21C 3421FFFF */  ori   $at, $at, 0xffff
/* 0041A220 8F99897C */  lw     $t9, %got(i_ptr)($gp)
/* 0041A224 01A16024 */  and   $t4, $t5, $at
/* 0041A228 3C010120 */  lui   $at, 0x120
/* 0041A22C 01817825 */  or    $t7, $t4, $at
/* 0041A230 AC4FFFF8 */  sw    $t7, -8($v0)
/* 0041A234 8CD80000 */  lw    $t8, ($a2)
/* 0041A238 8C6E0000 */  lw    $t6, ($v1)
/* 0041A23C 2442FFF0 */  addiu $v0, $v0, -0x10
/* 0041A240 00184900 */  sll   $t1, $t8, 4
/* 0041A244 01C95021 */  addu  $t2, $t6, $t1
/* 0041A248 AD40FFF0 */  sw    $zero, -0x10($t2)
/* 0041A24C 8CC80000 */  lw    $t0, ($a2)
/* 0041A250 8F390000 */  lw    $t9, ($t9)
/* 0041A254 55190008 */  bnel  $t0, $t9, .L0041A278
/* 0041A258 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0041A25C 8F9981D4 */  lw    $t9, %call16(grow_ibuffer)($gp)
/* 0041A260 0320F809 */  jalr  $t9
/* 0041A264 00000000 */   nop   
/* 0041A268 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041A26C 8F868984 */  lw     $a2, %got(d_ptr)($gp)
/* 0041A270 8CC80000 */  lw    $t0, ($a2)
/* 0041A274 8FBF001C */  lw    $ra, 0x1c($sp)
.L0041A278:
/* 0041A278 250BFFFF */  addiu $t3, $t0, -1
/* 0041A27C ACCB0000 */  sw    $t3, ($a2)
/* 0041A280 03E00008 */  jr    $ra
/* 0041A284 27BD0020 */   addiu $sp, $sp, 0x20
    .type demit_i, @function
    .size demit_i, .-demit_i
    .end demit_i

glabel demit_ra
    .ent demit_ra
    # 00420810 gen_entry_exit
/* 0041A288 3C1C0FC0 */  .cpload $t9
/* 0041A28C 279C57C8 */  
/* 0041A290 0399E021 */  
/* 0041A294 8F888984 */  lw     $t0, %got(d_ptr)($gp)
/* 0041A298 8F838978 */  lw     $v1, %got(ibuffer)($gp)
/* 0041A29C 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0041A2A0 8D0F0000 */  lw    $t7, ($t0)
/* 0041A2A4 8C6E0000 */  lw    $t6, ($v1)
/* 0041A2A8 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0041A2AC 000FC100 */  sll   $t8, $t7, 4
/* 0041A2B0 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0041A2B4 AFA40020 */  sw    $a0, 0x20($sp)
/* 0041A2B8 AFA50024 */  sw    $a1, 0x24($sp)
/* 0041A2BC 01D81021 */  addu  $v0, $t6, $t8
/* 0041A2C0 9059FFF5 */  lbu   $t9, -0xb($v0)
/* 0041A2C4 2442FFF0 */  addiu $v0, $v0, -0x10
/* 0041A2C8 3C01FFFC */  lui   $at, 0xfffc
/* 0041A2CC 332CFFC0 */  andi  $t4, $t9, 0xffc0
/* 0041A2D0 358D0017 */  ori   $t5, $t4, 0x17
/* 0041A2D4 A04D0005 */  sb    $t5, 5($v0)
/* 0041A2D8 8D0E0000 */  lw    $t6, ($t0)
/* 0041A2DC 8C6F0000 */  lw    $t7, ($v1)
/* 0041A2E0 34213FFF */  ori   $at, $at, 0x3fff
/* 0041A2E4 000EC100 */  sll   $t8, $t6, 4
/* 0041A2E8 01F81021 */  addu  $v0, $t7, $t8
/* 0041A2EC 9449FFF6 */  lhu   $t1, -0xa($v0)
/* 0041A2F0 2442FFF0 */  addiu $v0, $v0, -0x10
/* 0041A2F4 0009CD80 */  sll   $t9, $t1, 0x16
/* 0041A2F8 001965C2 */  srl   $t4, $t9, 0x17
/* 0041A2FC 008C6826 */  xor   $t5, $a0, $t4
/* 0041A300 000D75C0 */  sll   $t6, $t5, 0x17
/* 0041A304 000E7D82 */  srl   $t7, $t6, 0x16
/* 0041A308 01E9C026 */  xor   $t8, $t7, $t1
/* 0041A30C A4580006 */  sh    $t8, 6($v0)
/* 0041A310 8D0C0000 */  lw    $t4, ($t0)
/* 0041A314 8C790000 */  lw    $t9, ($v1)
/* 0041A318 000C6900 */  sll   $t5, $t4, 4
/* 0041A31C 032D1021 */  addu  $v0, $t9, $t5
/* 0041A320 8C4EFFF8 */  lw    $t6, -8($v0)
/* 0041A324 2442FFF0 */  addiu $v0, $v0, -0x10
/* 0041A328 01C17824 */  and   $t7, $t6, $at
/* 0041A32C 35F84000 */  ori   $t8, $t7, 0x4000
/* 0041A330 AC580008 */  sw    $t8, 8($v0)
/* 0041A334 8D190000 */  lw    $t9, ($t0)
/* 0041A338 8C6C0000 */  lw    $t4, ($v1)
/* 0041A33C 3C01FE03 */  lui   $at, 0xfe03
/* 0041A340 00196900 */  sll   $t5, $t9, 4
/* 0041A344 018D1021 */  addu  $v0, $t4, $t5
/* 0041A348 8C4AFFF8 */  lw    $t2, -8($v0)
/* 0041A34C 2442FFF0 */  addiu $v0, $v0, -0x10
/* 0041A350 3421FFFF */  ori   $at, $at, 0xffff
/* 0041A354 000A7642 */  srl   $t6, $t2, 0x19
/* 0041A358 00AE7826 */  xor   $t7, $a1, $t6
/* 0041A35C 000FC640 */  sll   $t8, $t7, 0x19
/* 0041A360 030AC826 */  xor   $t9, $t8, $t2
/* 0041A364 AC590008 */  sw    $t9, 8($v0)
/* 0041A368 8D0D0000 */  lw    $t5, ($t0)
/* 0041A36C 8C6C0000 */  lw    $t4, ($v1)
/* 0041A370 000D7100 */  sll   $t6, $t5, 4
/* 0041A374 018E1021 */  addu  $v0, $t4, $t6
/* 0041A378 8C4FFFF8 */  lw    $t7, -8($v0)
/* 0041A37C 2442FFF0 */  addiu $v0, $v0, -0x10
/* 0041A380 01E1C024 */  and   $t8, $t7, $at
/* 0041A384 3C010120 */  lui   $at, 0x120
/* 0041A388 0301C825 */  or    $t9, $t8, $at
/* 0041A38C AC590008 */  sw    $t9, 8($v0)
/* 0041A390 8D0C0000 */  lw    $t4, ($t0)
/* 0041A394 8C6D0000 */  lw    $t5, ($v1)
/* 0041A398 000C7100 */  sll   $t6, $t4, 4
/* 0041A39C 01AE7821 */  addu  $t7, $t5, $t6
/* 0041A3A0 ADE6FFF0 */  sw    $a2, -0x10($t7)
/* 0041A3A4 8D190000 */  lw    $t9, ($t0)
/* 0041A3A8 8C780000 */  lw    $t8, ($v1)
/* 0041A3AC 8F8E897C */  lw     $t6, %got(i_ptr)($gp)
/* 0041A3B0 00196100 */  sll   $t4, $t9, 4
/* 0041A3B4 030C6821 */  addu  $t5, $t8, $t4
/* 0041A3B8 ADA7FFFC */  sw    $a3, -4($t5)
/* 0041A3BC 8D0B0000 */  lw    $t3, ($t0)
/* 0041A3C0 8DCE0000 */  lw    $t6, ($t6)
/* 0041A3C4 556E0008 */  bnel  $t3, $t6, .L0041A3E8
/* 0041A3C8 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0041A3CC 8F9981D4 */  lw    $t9, %call16(grow_ibuffer)($gp)
/* 0041A3D0 0320F809 */  jalr  $t9
/* 0041A3D4 00000000 */   nop   
/* 0041A3D8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041A3DC 8F888984 */  lw     $t0, %got(d_ptr)($gp)
/* 0041A3E0 8D0B0000 */  lw    $t3, ($t0)
/* 0041A3E4 8FBF001C */  lw    $ra, 0x1c($sp)
.L0041A3E8:
/* 0041A3E8 256FFFFF */  addiu $t7, $t3, -1
/* 0041A3EC AD0F0000 */  sw    $t7, ($t0)
/* 0041A3F0 03E00008 */  jr    $ra
/* 0041A3F4 27BD0020 */   addiu $sp, $sp, 0x20
    .type demit_ra, @function
    .size demit_ra, .-demit_ra
    .end demit_ra

glabel demit_dir0
    .ent demit_dir0
    # 0041A940 emit_cpload
    # 00420810 gen_entry_exit
    # 004219E8 gen_reg_save_restore
    # 0042BDAC eval
    # 004366E8 select_data_section
    # 004367DC output_pool
    # 0043FA38 choose_area
    # 0043FBF8 emit_init
    # 00440398 emit_symbol
    # 00440800 output_entry_point
    # 0044EC1C emit_val
/* 0041A3F8 3C1C0FC0 */  .cpload $t9
/* 0041A3FC 279C5658 */  
/* 0041A400 0399E021 */  
/* 0041A404 8F878984 */  lw     $a3, %got(d_ptr)($gp)
/* 0041A408 8F868978 */  lw     $a2, %got(ibuffer)($gp)
/* 0041A40C 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0041A410 8CEF0000 */  lw    $t7, ($a3)
/* 0041A414 8CCE0000 */  lw    $t6, ($a2)
/* 0041A418 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0041A41C 000FC100 */  sll   $t8, $t7, 4
/* 0041A420 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0041A424 AFA40020 */  sw    $a0, 0x20($sp)
/* 0041A428 01D81021 */  addu  $v0, $t6, $t8
/* 0041A42C 9043FFF5 */  lbu   $v1, -0xb($v0)
/* 0041A430 2C8C0040 */  sltiu $t4, $a0, 0x40
/* 0041A434 2442FFF0 */  addiu $v0, $v0, -0x10
/* 0041A438 0003CE80 */  sll   $t9, $v1, 0x1a
/* 0041A43C 00194682 */  srl   $t0, $t9, 0x1a
/* 0041A440 00884826 */  xor   $t1, $a0, $t0
/* 0041A444 312A003F */  andi  $t2, $t1, 0x3f
/* 0041A448 01435826 */  xor   $t3, $t2, $v1
/* 0041A44C 11800009 */  beqz  $t4, .L0041A474
/* 0041A450 A04B0005 */   sb    $t3, 5($v0)
/* 0041A454 8F8E8038 */  lw    $t6, %got(D_10013634)($gp)
/* 0041A458 00046943 */  sra   $t5, $a0, 5
/* 0041A45C 000D7880 */  sll   $t7, $t5, 2
/* 0041A460 25CE3634 */  addiu $t6, %lo(D_10013634) # addiu $t6, $t6, 0x3634
/* 0041A464 01CFC021 */  addu  $t8, $t6, $t7
/* 0041A468 8F190000 */  lw    $t9, ($t8)
/* 0041A46C 00994004 */  sllv  $t0, $t9, $a0
/* 0041A470 290C0000 */  slti  $t4, $t0, 0
.L0041A474:
/* 0041A474 5180000D */  beql  $t4, $zero, .L0041A4AC
/* 0041A478 8CEC0000 */   lw    $t4, ($a3)
/* 0041A47C 8CEB0000 */  lw    $t3, ($a3)
/* 0041A480 8CCA0000 */  lw    $t2, ($a2)
/* 0041A484 000B6900 */  sll   $t5, $t3, 4
/* 0041A488 014D7021 */  addu  $t6, $t2, $t5
/* 0041A48C ADC0FFF0 */  sw    $zero, -0x10($t6)
/* 0041A490 8CF80000 */  lw    $t8, ($a3)
/* 0041A494 8CCF0000 */  lw    $t7, ($a2)
/* 0041A498 0018C900 */  sll   $t9, $t8, 4
/* 0041A49C 01F94021 */  addu  $t0, $t7, $t9
/* 0041A4A0 1000000B */  b     .L0041A4D0
/* 0041A4A4 AD05FFF8 */   sw    $a1, -8($t0)
/* 0041A4A8 8CEC0000 */  lw    $t4, ($a3)
.L0041A4AC:
/* 0041A4AC 8CC90000 */  lw    $t1, ($a2)
/* 0041A4B0 000C5900 */  sll   $t3, $t4, 4
/* 0041A4B4 012B5021 */  addu  $t2, $t1, $t3
/* 0041A4B8 AD45FFF0 */  sw    $a1, -0x10($t2)
/* 0041A4BC 8CEE0000 */  lw    $t6, ($a3)
/* 0041A4C0 8CCD0000 */  lw    $t5, ($a2)
/* 0041A4C4 000EC100 */  sll   $t8, $t6, 4
/* 0041A4C8 01B87821 */  addu  $t7, $t5, $t8
/* 0041A4CC ADE0FFF8 */  sw    $zero, -8($t7)
.L0041A4D0:
/* 0041A4D0 8CE80000 */  lw    $t0, ($a3)
/* 0041A4D4 8CD90000 */  lw    $t9, ($a2)
/* 0041A4D8 8F8B897C */  lw     $t3, %got(i_ptr)($gp)
/* 0041A4DC 00086100 */  sll   $t4, $t0, 4
/* 0041A4E0 032C4821 */  addu  $t1, $t9, $t4
/* 0041A4E4 AD20FFFC */  sw    $zero, -4($t1)
/* 0041A4E8 8CE20000 */  lw    $v0, ($a3)
/* 0041A4EC 8D6B0000 */  lw    $t3, ($t3)
/* 0041A4F0 55620008 */  bnel  $t3, $v0, .L0041A514
/* 0041A4F4 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0041A4F8 8F9981D4 */  lw    $t9, %call16(grow_ibuffer)($gp)
/* 0041A4FC 0320F809 */  jalr  $t9
/* 0041A500 00000000 */   nop   
/* 0041A504 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041A508 8F878984 */  lw     $a3, %got(d_ptr)($gp)
/* 0041A50C 8CE20000 */  lw    $v0, ($a3)
/* 0041A510 8FBF001C */  lw    $ra, 0x1c($sp)
.L0041A514:
/* 0041A514 244AFFFF */  addiu $t2, $v0, -1
/* 0041A518 ACEA0000 */  sw    $t2, ($a3)
/* 0041A51C 03E00008 */  jr    $ra
/* 0041A520 27BD0020 */   addiu $sp, $sp, 0x20
    .type demit_dir0, @function
    .size demit_dir0, .-demit_dir0
    .end demit_dir0

glabel demit_dir1
    .ent demit_dir1
    # 00420810 gen_entry_exit
    # 0042BDAC eval
    # 004367DC output_pool
    # 0043FB94 force_alignment
    # 0043FBF8 emit_init
/* 0041A524 3C1C0FC0 */  .cpload $t9
/* 0041A528 279C552C */  
/* 0041A52C 0399E021 */  
/* 0041A530 8F878984 */  lw     $a3, %got(d_ptr)($gp)
/* 0041A534 8F888978 */  lw     $t0, %got(ibuffer)($gp)
/* 0041A538 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0041A53C 8CEF0000 */  lw    $t7, ($a3)
/* 0041A540 8D0E0000 */  lw    $t6, ($t0)
/* 0041A544 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0041A548 000FC100 */  sll   $t8, $t7, 4
/* 0041A54C AFBC0018 */  sw    $gp, 0x18($sp)
/* 0041A550 AFA40020 */  sw    $a0, 0x20($sp)
/* 0041A554 01D81021 */  addu  $v0, $t6, $t8
/* 0041A558 9043FFF5 */  lbu   $v1, -0xb($v0)
/* 0041A55C 2401001B */  li    $at, 27
/* 0041A560 2442FFF0 */  addiu $v0, $v0, -0x10
/* 0041A564 0003CE80 */  sll   $t9, $v1, 0x1a
/* 0041A568 00194E82 */  srl   $t1, $t9, 0x1a
/* 0041A56C 00895026 */  xor   $t2, $a0, $t1
/* 0041A570 314B003F */  andi  $t3, $t2, 0x3f
/* 0041A574 01636026 */  xor   $t4, $t3, $v1
/* 0041A578 A04C0005 */  sb    $t4, 5($v0)
/* 0041A57C 8CEF0000 */  lw    $t7, ($a3)
/* 0041A580 8D0D0000 */  lw    $t5, ($t0)
/* 0041A584 000F7100 */  sll   $t6, $t7, 4
/* 0041A588 01AEC021 */  addu  $t8, $t5, $t6
/* 0041A58C 1481000A */  bne   $a0, $at, .L0041A5B8
/* 0041A590 AF05FFF0 */   sw    $a1, -0x10($t8)
/* 0041A594 8CE90000 */  lw    $t1, ($a3)
.L0041A598:
/* 0041A598 8D190000 */  lw    $t9, ($t0)
/* 0041A59C 00095100 */  sll   $t2, $t1, 4
/* 0041A5A0 032A5821 */  addu  $t3, $t9, $t2
/* 0041A5A4 1000000C */  b     .L0041A5D8
/* 0041A5A8 AD66FFF8 */   sw    $a2, -8($t3)
/* 0041A5AC 2401001B */  li    $at, 27
/* 0041A5B0 5081FFF9 */  beql  $a0, $at, .L0041A598
/* 0041A5B4 8CE90000 */   lw    $t1, ($a3)
.L0041A5B8:
/* 0041A5B8 2401003C */  li    $at, 60
/* 0041A5BC 5081FFF6 */  beql  $a0, $at, .L0041A598
/* 0041A5C0 8CE90000 */   lw    $t1, ($a3)
/* 0041A5C4 8CEF0000 */  lw    $t7, ($a3)
/* 0041A5C8 8D0C0000 */  lw    $t4, ($t0)
/* 0041A5CC 000F6900 */  sll   $t5, $t7, 4
/* 0041A5D0 018D7021 */  addu  $t6, $t4, $t5
/* 0041A5D4 ADC6FFF8 */  sw    $a2, -8($t6)
.L0041A5D8:
/* 0041A5D8 8F98897C */  lw     $t8, %got(i_ptr)($gp)
/* 0041A5DC 8CE20000 */  lw    $v0, ($a3)
/* 0041A5E0 8F180000 */  lw    $t8, ($t8)
/* 0041A5E4 57020008 */  bnel  $t8, $v0, .L0041A608
/* 0041A5E8 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0041A5EC 8F9981D4 */  lw    $t9, %call16(grow_ibuffer)($gp)
/* 0041A5F0 0320F809 */  jalr  $t9
/* 0041A5F4 00000000 */   nop   
/* 0041A5F8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041A5FC 8F878984 */  lw     $a3, %got(d_ptr)($gp)
/* 0041A600 8CE20000 */  lw    $v0, ($a3)
/* 0041A604 8FBF001C */  lw    $ra, 0x1c($sp)
.L0041A608:
/* 0041A608 2449FFFF */  addiu $t1, $v0, -1
/* 0041A60C ACE90000 */  sw    $t1, ($a3)
/* 0041A610 03E00008 */  jr    $ra
/* 0041A614 27BD0020 */   addiu $sp, $sp, 0x20
    .type demit_dir1, @function
    .size demit_dir1, .-demit_dir1
    .end demit_dir1

glabel demit_dir2
    .ent demit_dir2
    # 00420810 gen_entry_exit
    # 0042BDAC eval
    # 00440398 emit_symbol
/* 0041A618 3C1C0FC0 */  .cpload $t9
/* 0041A61C 279C5438 */  
/* 0041A620 0399E021 */  
/* 0041A624 8F898984 */  lw     $t1, %got(d_ptr)($gp)
/* 0041A628 8F888978 */  lw     $t0, %got(ibuffer)($gp)
/* 0041A62C 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0041A630 8D2F0000 */  lw    $t7, ($t1)
/* 0041A634 8D0E0000 */  lw    $t6, ($t0)
/* 0041A638 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0041A63C 000FC100 */  sll   $t8, $t7, 4
/* 0041A640 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0041A644 AFA40020 */  sw    $a0, 0x20($sp)
/* 0041A648 01D81021 */  addu  $v0, $t6, $t8
/* 0041A64C 9043FFF5 */  lbu   $v1, -0xb($v0)
/* 0041A650 2C81001D */  sltiu $at, $a0, 0x1d
/* 0041A654 2442FFF0 */  addiu $v0, $v0, -0x10
/* 0041A658 0003CE80 */  sll   $t9, $v1, 0x1a
/* 0041A65C 00195682 */  srl   $t2, $t9, 0x1a
/* 0041A660 008A5826 */  xor   $t3, $a0, $t2
/* 0041A664 316C003F */  andi  $t4, $t3, 0x3f
/* 0041A668 01836826 */  xor   $t5, $t4, $v1
/* 0041A66C A04D0005 */  sb    $t5, 5($v0)
/* 0041A670 8D2E0000 */  lw    $t6, ($t1)
/* 0041A674 8D0F0000 */  lw    $t7, ($t0)
/* 0041A678 248AFFD6 */  addiu $t2, $a0, -0x2a
/* 0041A67C 000EC100 */  sll   $t8, $t6, 4
/* 0041A680 01F8C821 */  addu  $t9, $t7, $t8
/* 0041A684 14200037 */  bnez  $at, .L0041A764
/* 0041A688 AF25FFF0 */   sw    $a1, -0x10($t9)
/* 0041A68C 2D410004 */  sltiu $at, $t2, 4
/* 0041A690 5020002A */  beql  $at, $zero, .L0041A73C
/* 0041A694 8D2B0000 */   lw    $t3, ($t1)
/* 0041A698 8F818038 */  lw    $at, %got(jtbl_10009674)($gp)
/* 0041A69C 000A5080 */  sll   $t2, $t2, 2
/* 0041A6A0 002A0821 */  addu  $at, $at, $t2
/* 0041A6A4 8C2A9674 */  lw    $t2, %lo(jtbl_10009674)($at)
/* 0041A6A8 015C5021 */  addu  $t2, $t2, $gp
/* 0041A6AC 01400008 */  jr    $t2
/* 0041A6B0 00000000 */   nop   
.L0041A6B4:
/* 0041A6B4 8D2C0000 */  lw    $t4, ($t1)
/* 0041A6B8 8D0B0000 */  lw    $t3, ($t0)
/* 0041A6BC 000C6900 */  sll   $t5, $t4, 4
/* 0041A6C0 016D7021 */  addu  $t6, $t3, $t5
/* 0041A6C4 ADC6FFF8 */  sw    $a2, -8($t6)
/* 0041A6C8 8D380000 */  lw    $t8, ($t1)
/* 0041A6CC 8D0F0000 */  lw    $t7, ($t0)
/* 0041A6D0 0018C900 */  sll   $t9, $t8, 4
/* 0041A6D4 01F95021 */  addu  $t2, $t7, $t9
/* 0041A6D8 1000002E */  b     .L0041A794
/* 0041A6DC AD47FFFC */   sw    $a3, -4($t2)
/* 0041A6E0 8D2B0000 */  lw    $t3, ($t1)
.L0041A6E4:
/* 0041A6E4 8D0C0000 */  lw    $t4, ($t0)
/* 0041A6E8 000B6900 */  sll   $t5, $t3, 4
/* 0041A6EC 018D7021 */  addu  $t6, $t4, $t5
/* 0041A6F0 ADC6FFF8 */  sw    $a2, -8($t6)
/* 0041A6F4 8D2F0000 */  lw    $t7, ($t1)
/* 0041A6F8 8D180000 */  lw    $t8, ($t0)
/* 0041A6FC 000FC900 */  sll   $t9, $t7, 4
/* 0041A700 03195021 */  addu  $t2, $t8, $t9
/* 0041A704 10000023 */  b     .L0041A794
/* 0041A708 AD47FFFC */   sw    $a3, -4($t2)
.L0041A70C:
/* 0041A70C 8D2C0000 */  lw    $t4, ($t1)
.L0041A710:
/* 0041A710 8D0B0000 */  lw    $t3, ($t0)
/* 0041A714 000C6900 */  sll   $t5, $t4, 4
/* 0041A718 016D7021 */  addu  $t6, $t3, $t5
/* 0041A71C ADC6FFF8 */  sw    $a2, -8($t6)
/* 0041A720 8D380000 */  lw    $t8, ($t1)
/* 0041A724 8D0F0000 */  lw    $t7, ($t0)
/* 0041A728 0018C900 */  sll   $t9, $t8, 4
/* 0041A72C 01F95021 */  addu  $t2, $t7, $t9
/* 0041A730 10000018 */  b     .L0041A794
/* 0041A734 AD47FFFC */   sw    $a3, -4($t2)
.L0041A738:
/* 0041A738 8D2B0000 */  lw    $t3, ($t1)
.L0041A73C:
/* 0041A73C 8D0C0000 */  lw    $t4, ($t0)
/* 0041A740 000B6900 */  sll   $t5, $t3, 4
/* 0041A744 018D7021 */  addu  $t6, $t4, $t5
/* 0041A748 ADC6FFF8 */  sw    $a2, -8($t6)
/* 0041A74C 8D2F0000 */  lw    $t7, ($t1)
/* 0041A750 8D180000 */  lw    $t8, ($t0)
/* 0041A754 000FC900 */  sll   $t9, $t7, 4
/* 0041A758 03195021 */  addu  $t2, $t8, $t9
/* 0041A75C 1000000D */  b     .L0041A794
/* 0041A760 AD47FFFC */   sw    $a3, -4($t2)
.L0041A764:
/* 0041A764 2C81000A */  sltiu $at, $a0, 0xa
/* 0041A768 10200005 */  beqz  $at, .L0041A780
/* 0041A76C 2C810008 */   sltiu $at, $a0, 8
/* 0041A770 5020FFE7 */  beql  $at, $zero, .L0041A710
/* 0041A774 8D2C0000 */   lw    $t4, ($t1)
/* 0041A778 1000FFF0 */  b     .L0041A73C
/* 0041A77C 8D2B0000 */   lw    $t3, ($t1)
.L0041A780:
/* 0041A780 2401001C */  li    $at, 28
/* 0041A784 5081FFD7 */  beql  $a0, $at, .L0041A6E4
/* 0041A788 8D2B0000 */   lw    $t3, ($t1)
/* 0041A78C 1000FFEB */  b     .L0041A73C
/* 0041A790 8D2B0000 */   lw    $t3, ($t1)
.L0041A794:
/* 0041A794 8F8B897C */  lw     $t3, %got(i_ptr)($gp)
/* 0041A798 8D220000 */  lw    $v0, ($t1)
/* 0041A79C 8D6B0000 */  lw    $t3, ($t3)
/* 0041A7A0 55620008 */  bnel  $t3, $v0, .L0041A7C4
/* 0041A7A4 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0041A7A8 8F9981D4 */  lw    $t9, %call16(grow_ibuffer)($gp)
/* 0041A7AC 0320F809 */  jalr  $t9
/* 0041A7B0 00000000 */   nop   
/* 0041A7B4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041A7B8 8F898984 */  lw     $t1, %got(d_ptr)($gp)
/* 0041A7BC 8D220000 */  lw    $v0, ($t1)
/* 0041A7C0 8FBF001C */  lw    $ra, 0x1c($sp)
.L0041A7C4:
/* 0041A7C4 244CFFFF */  addiu $t4, $v0, -1
/* 0041A7C8 AD2C0000 */  sw    $t4, ($t1)
/* 0041A7CC 03E00008 */  jr    $ra
/* 0041A7D0 27BD0020 */   addiu $sp, $sp, 0x20
    .type demit_dir2, @function
    .size demit_dir2, .-demit_dir2
    .end demit_dir2

glabel demit_edata
    .ent demit_edata
    # 0043DFB0 gen_sym
    # 0043FA38 choose_area
/* 0041A7D4 3C1C0FC0 */  .cpload $t9
/* 0041A7D8 279C527C */  
/* 0041A7DC 0399E021 */  
/* 0041A7E0 8F878984 */  lw     $a3, %got(d_ptr)($gp)
/* 0041A7E4 8F838978 */  lw     $v1, %got(ibuffer)($gp)
/* 0041A7E8 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0041A7EC 8CEF0000 */  lw    $t7, ($a3)
/* 0041A7F0 8C6E0000 */  lw    $t6, ($v1)
/* 0041A7F4 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0041A7F8 000FC100 */  sll   $t8, $t7, 4
/* 0041A7FC AFBC0018 */  sw    $gp, 0x18($sp)
/* 0041A800 01D81021 */  addu  $v0, $t6, $t8
/* 0041A804 9059FFF5 */  lbu   $t9, -0xb($v0)
/* 0041A808 2442FFF0 */  addiu $v0, $v0, -0x10
/* 0041A80C 3329FFC0 */  andi  $t1, $t9, 0xffc0
/* 0041A810 352A003D */  ori   $t2, $t1, 0x3d
/* 0041A814 A04A0005 */  sb    $t2, 5($v0)
/* 0041A818 8CEC0000 */  lw    $t4, ($a3)
/* 0041A81C 8C6B0000 */  lw    $t3, ($v1)
/* 0041A820 000C6900 */  sll   $t5, $t4, 4
/* 0041A824 016D7821 */  addu  $t7, $t3, $t5
/* 0041A828 ADE4FFF0 */  sw    $a0, -0x10($t7)
/* 0041A82C 8CF80000 */  lw    $t8, ($a3)
/* 0041A830 8C6E0000 */  lw    $t6, ($v1)
/* 0041A834 8F8F897C */  lw     $t7, %got(i_ptr)($gp)
/* 0041A838 0018C900 */  sll   $t9, $t8, 4
/* 0041A83C 01D94821 */  addu  $t1, $t6, $t9
/* 0041A840 AD25FFF8 */  sw    $a1, -8($t1)
/* 0041A844 8CEC0000 */  lw    $t4, ($a3)
/* 0041A848 8C6A0000 */  lw    $t2, ($v1)
/* 0041A84C 000C5900 */  sll   $t3, $t4, 4
/* 0041A850 014B6821 */  addu  $t5, $t2, $t3
/* 0041A854 ADA6FFFC */  sw    $a2, -4($t5)
/* 0041A858 8CE80000 */  lw    $t0, ($a3)
/* 0041A85C 8DEF0000 */  lw    $t7, ($t7)
/* 0041A860 55E80008 */  bnel  $t7, $t0, .L0041A884
/* 0041A864 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0041A868 8F9981D4 */  lw    $t9, %call16(grow_ibuffer)($gp)
/* 0041A86C 0320F809 */  jalr  $t9
/* 0041A870 00000000 */   nop   
/* 0041A874 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041A878 8F878984 */  lw     $a3, %got(d_ptr)($gp)
/* 0041A87C 8CE80000 */  lw    $t0, ($a3)
/* 0041A880 8FBF001C */  lw    $ra, 0x1c($sp)
.L0041A884:
/* 0041A884 2518FFFF */  addiu $t8, $t0, -1
/* 0041A888 ACF80000 */  sw    $t8, ($a3)
/* 0041A88C 03E00008 */  jr    $ra
/* 0041A890 27BD0020 */   addiu $sp, $sp, 0x20
    .type demit_edata, @function
    .size demit_edata, .-demit_edata
    .end demit_edata

glabel demit_weakext
    .ent demit_weakext
    # 0043FBF8 emit_init
    # 00440398 emit_symbol
/* 0041A894 3C1C0FC0 */  .cpload $t9
/* 0041A898 279C51BC */  
/* 0041A89C 0399E021 */  
/* 0041A8A0 8F878984 */  lw     $a3, %got(d_ptr)($gp)
/* 0041A8A4 8F868978 */  lw     $a2, %got(ibuffer)($gp)
/* 0041A8A8 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0041A8AC 8CEF0000 */  lw    $t7, ($a3)
/* 0041A8B0 8CCE0000 */  lw    $t6, ($a2)
/* 0041A8B4 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0041A8B8 000FC100 */  sll   $t8, $t7, 4
/* 0041A8BC AFBC0018 */  sw    $gp, 0x18($sp)
/* 0041A8C0 01D81021 */  addu  $v0, $t6, $t8
/* 0041A8C4 9059FFF5 */  lbu   $t9, -0xb($v0)
/* 0041A8C8 2442FFF0 */  addiu $v0, $v0, -0x10
/* 0041A8CC 3328FFC0 */  andi  $t0, $t9, 0xffc0
/* 0041A8D0 35090012 */  ori   $t1, $t0, 0x12
/* 0041A8D4 A0490005 */  sb    $t1, 5($v0)
/* 0041A8D8 8CEB0000 */  lw    $t3, ($a3)
/* 0041A8DC 8CCA0000 */  lw    $t2, ($a2)
/* 0041A8E0 8F88897C */  lw     $t0, %got(i_ptr)($gp)
/* 0041A8E4 000B6100 */  sll   $t4, $t3, 4
/* 0041A8E8 014C6821 */  addu  $t5, $t2, $t4
/* 0041A8EC ADA4FFF0 */  sw    $a0, -0x10($t5)
/* 0041A8F0 8CEE0000 */  lw    $t6, ($a3)
/* 0041A8F4 8CCF0000 */  lw    $t7, ($a2)
/* 0041A8F8 000EC100 */  sll   $t8, $t6, 4
/* 0041A8FC 01F8C821 */  addu  $t9, $t7, $t8
/* 0041A900 AF25FFF8 */  sw    $a1, -8($t9)
/* 0041A904 8CE30000 */  lw    $v1, ($a3)
/* 0041A908 8D080000 */  lw    $t0, ($t0)
/* 0041A90C 55030008 */  bnel  $t0, $v1, .L0041A930
/* 0041A910 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0041A914 8F9981D4 */  lw    $t9, %call16(grow_ibuffer)($gp)
/* 0041A918 0320F809 */  jalr  $t9
/* 0041A91C 00000000 */   nop   
/* 0041A920 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041A924 8F878984 */  lw     $a3, %got(d_ptr)($gp)
/* 0041A928 8CE30000 */  lw    $v1, ($a3)
/* 0041A92C 8FBF001C */  lw    $ra, 0x1c($sp)
.L0041A930:
/* 0041A930 2469FFFF */  addiu $t1, $v1, -1
/* 0041A934 ACE90000 */  sw    $t1, ($a3)
/* 0041A938 03E00008 */  jr    $ra
/* 0041A93C 27BD0020 */   addiu $sp, $sp, 0x20
    .type demit_weakext, @function
    .size demit_weakext, .-demit_weakext
    .end demit_weakext

glabel emit_cpload
    .ent emit_cpload
    # 00420810 gen_entry_exit
    # 00421170 gen_entry
/* 0041A940 3C1C0FC0 */  .cpload $t9
/* 0041A944 279C5110 */  
/* 0041A948 0399E021 */  
/* 0041A94C 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 0041A950 AFA00024 */  sw    $zero, 0x24($sp)
/* 0041A954 93AE0025 */  lbu   $t6, 0x25($sp)
/* 0041A958 0004CE40 */  sll   $t9, $a0, 0x19
/* 0041A95C AFBF001C */  sw    $ra, 0x1c($sp)
/* 0041A960 31CFFFC0 */  andi  $t7, $t6, 0xffc0
/* 0041A964 35F80003 */  ori   $t8, $t7, 3
/* 0041A968 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0041A96C AFA40030 */  sw    $a0, 0x30($sp)
/* 0041A970 AFA7003C */  sw    $a3, 0x3c($sp)
/* 0041A974 A3B80025 */  sb    $t8, 0x25($sp)
/* 0041A978 AFB90028 */  sw    $t9, 0x28($sp)
/* 0041A97C AFA5002C */  sw    $a1, 0x2c($sp)
/* 0041A980 10E00013 */  beqz  $a3, .L0041A9D0
/* 0041A984 AFA60020 */   sw    $a2, 0x20($sp)
/* 0041A988 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 0041A98C 24040020 */  li    $a0, 32
/* 0041A990 24050002 */  li    $a1, 2
/* 0041A994 0320F809 */  jalr  $t9
/* 0041A998 00000000 */   nop   
/* 0041A99C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041A9A0 27A40020 */  addiu $a0, $sp, 0x20
/* 0041A9A4 8F9982A0 */  lw    $t9, %call16(append_i)($gp)
/* 0041A9A8 0320F809 */  jalr  $t9
/* 0041A9AC 00000000 */   nop   
/* 0041A9B0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041A9B4 24040020 */  li    $a0, 32
/* 0041A9B8 24050001 */  li    $a1, 1
/* 0041A9BC 8F99823C */  lw    $t9, %call16(emit_dir0)($gp)
/* 0041A9C0 0320F809 */  jalr  $t9
/* 0041A9C4 00000000 */   nop   
/* 0041A9C8 10000012 */  b     .L0041AA14
/* 0041A9CC 8FBC0018 */   lw    $gp, 0x18($sp)
.L0041A9D0:
/* 0041A9D0 8F998280 */  lw    $t9, %call16(demit_dir0)($gp)
/* 0041A9D4 24040020 */  li    $a0, 32
/* 0041A9D8 24050002 */  li    $a1, 2
/* 0041A9DC 0320F809 */  jalr  $t9
/* 0041A9E0 00000000 */   nop   
/* 0041A9E4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041A9E8 27A40020 */  addiu $a0, $sp, 0x20
/* 0041A9EC 8F9982A4 */  lw    $t9, %call16(append_d)($gp)
/* 0041A9F0 0320F809 */  jalr  $t9
/* 0041A9F4 00000000 */   nop   
/* 0041A9F8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041A9FC 24040020 */  li    $a0, 32
/* 0041AA00 24050001 */  li    $a1, 1
/* 0041AA04 8F998280 */  lw    $t9, %call16(demit_dir0)($gp)
/* 0041AA08 0320F809 */  jalr  $t9
/* 0041AA0C 00000000 */   nop   
/* 0041AA10 8FBC0018 */  lw    $gp, 0x18($sp)
.L0041AA14:
/* 0041AA14 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0041AA18 27BD0030 */  addiu $sp, $sp, 0x30
/* 0041AA1C 03E00008 */  jr    $ra
/* 0041AA20 00000000 */   nop   
    .type emit_cpload, @function
    .size emit_cpload, .-emit_cpload
    .end emit_cpload

glabel ddefine_label
    .ent ddefine_label
    # 00420810 gen_entry_exit
/* 0041AA24 3C1C0FC0 */  .cpload $t9
/* 0041AA28 279C502C */  
/* 0041AA2C 0399E021 */  
/* 0041AA30 8F988984 */  lw     $t8, %got(d_ptr)($gp)
/* 0041AA34 8F8E8978 */  lw     $t6, %got(ibuffer)($gp)
/* 0041AA38 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0041AA3C 8F180000 */  lw    $t8, ($t8)
/* 0041AA40 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0041AA44 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0041AA48 8DCF0000 */  lw    $t7, ($t6)
/* 0041AA4C 0018C900 */  sll   $t9, $t8, 4
/* 0041AA50 01F91021 */  addu  $v0, $t7, $t9
/* 0041AA54 9048FFF5 */  lbu   $t0, -0xb($v0)
/* 0041AA58 2442FFF0 */  addiu $v0, $v0, -0x10
/* 0041AA5C 3109FFC0 */  andi  $t1, $t0, 0xffc0
/* 0041AA60 A0490005 */  sb    $t1, 5($v0)
/* 0041AA64 8F9981D8 */  lw    $t9, %call16(create_local_label)($gp)
/* 0041AA68 0320F809 */  jalr  $t9
/* 0041AA6C 00000000 */   nop   
/* 0041AA70 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041AA74 8F848984 */  lw     $a0, %got(d_ptr)($gp)
/* 0041AA78 8F8A8978 */  lw     $t2, %got(ibuffer)($gp)
/* 0041AA7C 8F98897C */  lw     $t8, %got(i_ptr)($gp)
/* 0041AA80 8C8C0000 */  lw    $t4, ($a0)
/* 0041AA84 8D4B0000 */  lw    $t3, ($t2)
/* 0041AA88 000C6900 */  sll   $t5, $t4, 4
/* 0041AA8C 016D7021 */  addu  $t6, $t3, $t5
/* 0041AA90 ADC2FFF0 */  sw    $v0, -0x10($t6)
/* 0041AA94 8C830000 */  lw    $v1, ($a0)
/* 0041AA98 8F180000 */  lw    $t8, ($t8)
/* 0041AA9C 54780008 */  bnel  $v1, $t8, .L0041AAC0
/* 0041AAA0 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0041AAA4 8F9981D4 */  lw    $t9, %call16(grow_ibuffer)($gp)
/* 0041AAA8 0320F809 */  jalr  $t9
/* 0041AAAC 00000000 */   nop   
/* 0041AAB0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041AAB4 8F848984 */  lw     $a0, %got(d_ptr)($gp)
/* 0041AAB8 8C830000 */  lw    $v1, ($a0)
/* 0041AABC 8FBF001C */  lw    $ra, 0x1c($sp)
.L0041AAC0:
/* 0041AAC0 246FFFFF */  addiu $t7, $v1, -1
/* 0041AAC4 AC8F0000 */  sw    $t7, ($a0)
/* 0041AAC8 03E00008 */  jr    $ra
/* 0041AACC 27BD0020 */   addiu $sp, $sp, 0x20
    .type ddefine_label, @function
    .size ddefine_label, .-ddefine_label
    .end ddefine_label

glabel define_exception_label
    .ent define_exception_label
    # 0042BDAC eval
/* 0041AAD0 3C1C0FC0 */  .cpload $t9
/* 0041AAD4 279C4F80 */  
/* 0041AAD8 0399E021 */  
/* 0041AADC 8F85897C */  lw     $a1, %got(i_ptr)($gp)
/* 0041AAE0 8F868978 */  lw     $a2, %got(ibuffer)($gp)
/* 0041AAE4 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0041AAE8 8CAF0000 */  lw    $t7, ($a1)
/* 0041AAEC 8CCE0000 */  lw    $t6, ($a2)
/* 0041AAF0 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0041AAF4 000FC100 */  sll   $t8, $t7, 4
/* 0041AAF8 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0041AAFC 01D81021 */  addu  $v0, $t6, $t8
/* 0041AB00 9059FFF5 */  lbu   $t9, -0xb($v0)
/* 0041AB04 8F8D8984 */  lw     $t5, %got(d_ptr)($gp)
/* 0041AB08 2442FFF0 */  addiu $v0, $v0, -0x10
/* 0041AB0C 3328FFC0 */  andi  $t0, $t9, 0xffc0
/* 0041AB10 A0480005 */  sb    $t0, 5($v0)
/* 0041AB14 8CAA0000 */  lw    $t2, ($a1)
/* 0041AB18 8CC90000 */  lw    $t1, ($a2)
/* 0041AB1C 000A5900 */  sll   $t3, $t2, 4
/* 0041AB20 012B6021 */  addu  $t4, $t1, $t3
/* 0041AB24 AD84FFF0 */  sw    $a0, -0x10($t4)
/* 0041AB28 8CA30000 */  lw    $v1, ($a1)
/* 0041AB2C 8DAD0000 */  lw    $t5, ($t5)
/* 0041AB30 55A30008 */  bnel  $t5, $v1, .L0041AB54
/* 0041AB34 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0041AB38 8F9981D4 */  lw    $t9, %call16(grow_ibuffer)($gp)
/* 0041AB3C 0320F809 */  jalr  $t9
/* 0041AB40 00000000 */   nop   
/* 0041AB44 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041AB48 8F85897C */  lw     $a1, %got(i_ptr)($gp)
/* 0041AB4C 8CA30000 */  lw    $v1, ($a1)
/* 0041AB50 8FBF001C */  lw    $ra, 0x1c($sp)
.L0041AB54:
/* 0041AB54 246F0001 */  addiu $t7, $v1, 1
/* 0041AB58 ACAF0000 */  sw    $t7, ($a1)
/* 0041AB5C 03E00008 */  jr    $ra
/* 0041AB60 27BD0020 */   addiu $sp, $sp, 0x20
    .type define_exception_label, @function
    .size define_exception_label, .-define_exception_label
    .end define_exception_label

glabel append_i
    .ent append_i
    # 0041A940 emit_cpload
    # 0041AD28 emit_vreg
    # 0041AE78 emit_cpalias
    # 0041AEDC emit_cpadd
    # 00422DB8 emit_file
    # 0042BDAC eval
/* 0041AB64 3C1C0FC0 */  .cpload $t9
/* 0041AB68 279C4EEC */  
/* 0041AB6C 0399E021 */  
/* 0041AB70 8F83897C */  lw     $v1, %got(i_ptr)($gp)
/* 0041AB74 8F8E8978 */  lw     $t6, %got(ibuffer)($gp)
/* 0041AB78 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0041AB7C 8C780000 */  lw    $t8, ($v1)
/* 0041AB80 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0041AB84 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0041AB88 8DCF0000 */  lw    $t7, ($t6)
/* 0041AB8C 8C8A0000 */  lw    $t2, ($a0)
/* 0041AB90 0018C900 */  sll   $t9, $t8, 4
/* 0041AB94 01F94021 */  addu  $t0, $t7, $t9
/* 0041AB98 AD0AFFF0 */  sw    $t2, -0x10($t0)
/* 0041AB9C 8C890004 */  lw    $t1, 4($a0)
/* 0041ABA0 8F8B8984 */  lw     $t3, %got(d_ptr)($gp)
/* 0041ABA4 AD09FFF4 */  sw    $t1, -0xc($t0)
/* 0041ABA8 8C8A0008 */  lw    $t2, 8($a0)
/* 0041ABAC AD0AFFF8 */  sw    $t2, -8($t0)
/* 0041ABB0 8C89000C */  lw    $t1, 0xc($a0)
/* 0041ABB4 AD09FFFC */  sw    $t1, -4($t0)
/* 0041ABB8 8C620000 */  lw    $v0, ($v1)
/* 0041ABBC 8D6B0000 */  lw    $t3, ($t3)
/* 0041ABC0 55620008 */  bnel  $t3, $v0, .L0041ABE4
/* 0041ABC4 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0041ABC8 8F9981D4 */  lw    $t9, %call16(grow_ibuffer)($gp)
/* 0041ABCC 0320F809 */  jalr  $t9
/* 0041ABD0 00000000 */   nop   
/* 0041ABD4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041ABD8 8F83897C */  lw     $v1, %got(i_ptr)($gp)
/* 0041ABDC 8C620000 */  lw    $v0, ($v1)
/* 0041ABE0 8FBF001C */  lw    $ra, 0x1c($sp)
.L0041ABE4:
/* 0041ABE4 244C0001 */  addiu $t4, $v0, 1
/* 0041ABE8 AC6C0000 */  sw    $t4, ($v1)
/* 0041ABEC 03E00008 */  jr    $ra
/* 0041ABF0 27BD0020 */   addiu $sp, $sp, 0x20
    .type append_i, @function
    .size append_i, .-append_i
    .end append_i

glabel append_d
    .ent append_d
    # 0041A940 emit_cpload
    # 0041AE14 demit_cpalias
    # 00422CCC demit_mask
    # 00422D3C demit_frame
    # 00422DB8 emit_file
    # 004230DC emit_optimize_level
    # 0044E9D0 emit_composite_val
    # 0044EC1C emit_val
    # 0044F0BC emit_label_val
/* 0041ABF4 3C1C0FC0 */  .cpload $t9
/* 0041ABF8 279C4E5C */  
/* 0041ABFC 0399E021 */  
/* 0041AC00 8F838984 */  lw     $v1, %got(d_ptr)($gp)
/* 0041AC04 8F8E8978 */  lw     $t6, %got(ibuffer)($gp)
/* 0041AC08 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0041AC0C 8C780000 */  lw    $t8, ($v1)
/* 0041AC10 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0041AC14 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0041AC18 8DCF0000 */  lw    $t7, ($t6)
/* 0041AC1C 8C8A0000 */  lw    $t2, ($a0)
/* 0041AC20 0018C900 */  sll   $t9, $t8, 4
/* 0041AC24 01F94021 */  addu  $t0, $t7, $t9
/* 0041AC28 AD0AFFF0 */  sw    $t2, -0x10($t0)
/* 0041AC2C 8C890004 */  lw    $t1, 4($a0)
/* 0041AC30 8F8B897C */  lw     $t3, %got(i_ptr)($gp)
/* 0041AC34 AD09FFF4 */  sw    $t1, -0xc($t0)
/* 0041AC38 8C8A0008 */  lw    $t2, 8($a0)
/* 0041AC3C AD0AFFF8 */  sw    $t2, -8($t0)
/* 0041AC40 8C89000C */  lw    $t1, 0xc($a0)
/* 0041AC44 AD09FFFC */  sw    $t1, -4($t0)
/* 0041AC48 8C620000 */  lw    $v0, ($v1)
/* 0041AC4C 8D6B0000 */  lw    $t3, ($t3)
/* 0041AC50 55620008 */  bnel  $t3, $v0, .L0041AC74
/* 0041AC54 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0041AC58 8F9981D4 */  lw    $t9, %call16(grow_ibuffer)($gp)
/* 0041AC5C 0320F809 */  jalr  $t9
/* 0041AC60 00000000 */   nop   
/* 0041AC64 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041AC68 8F838984 */  lw     $v1, %got(d_ptr)($gp)
/* 0041AC6C 8C620000 */  lw    $v0, ($v1)
/* 0041AC70 8FBF001C */  lw    $ra, 0x1c($sp)
.L0041AC74:
/* 0041AC74 244CFFFF */  addiu $t4, $v0, -1
/* 0041AC78 AC6C0000 */  sw    $t4, ($v1)
/* 0041AC7C 03E00008 */  jr    $ra
/* 0041AC80 27BD0020 */   addiu $sp, $sp, 0x20
    .type append_d, @function
    .size append_d, .-append_d
    .end append_d

glabel clear_ibuffer
    .ent clear_ibuffer
    # 0044BF18 main
/* 0041AC84 3C1C0FC0 */  .cpload $t9
/* 0041AC88 279C4DCC */  
/* 0041AC8C 0399E021 */  
/* 0041AC90 8F86897C */  lw     $a2, %got(i_ptr)($gp)
/* 0041AC94 8F9980C4 */  lw    $t9, %call16(memset)($gp)
/* 0041AC98 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0041AC9C 8F8E8978 */  lw     $t6, %got(ibuffer)($gp)
/* 0041ACA0 8CC60000 */  lw    $a2, ($a2)
/* 0041ACA4 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0041ACA8 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0041ACAC 00002825 */  move  $a1, $zero
/* 0041ACB0 8DC40000 */  lw    $a0, ($t6)
/* 0041ACB4 0320F809 */  jalr  $t9
/* 0041ACB8 00063100 */   sll   $a2, $a2, 4
/* 0041ACBC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041ACC0 00002825 */  move  $a1, $zero
/* 0041ACC4 8F828984 */  lw     $v0, %got(d_ptr)($gp)
/* 0041ACC8 8F8F8978 */  lw     $t7, %got(ibuffer)($gp)
/* 0041ACCC 8F888974 */  lw     $t0, %got(ibuffer_size)($gp)
/* 0041ACD0 8C420000 */  lw    $v0, ($v0)
/* 0041ACD4 8DF80000 */  lw    $t8, ($t7)
/* 0041ACD8 8D080000 */  lw    $t0, ($t0)
/* 0041ACDC 0002C900 */  sll   $t9, $v0, 4
/* 0041ACE0 03192021 */  addu  $a0, $t8, $t9
/* 0041ACE4 8F9980C4 */  lw    $t9, %call16(memset)($gp)
/* 0041ACE8 01023023 */  subu  $a2, $t0, $v0
/* 0041ACEC 00063100 */  sll   $a2, $a2, 4
/* 0041ACF0 24C60010 */  addiu $a2, $a2, 0x10
/* 0041ACF4 0320F809 */  jalr  $t9
/* 0041ACF8 2484FFF0 */   addiu $a0, $a0, -0x10
/* 0041ACFC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041AD00 24090001 */  li    $t1, 1
/* 0041AD04 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0041AD08 8F81897C */  lw     $at, %got(i_ptr)($gp)
/* 0041AD0C 8F8A8974 */  lw     $t2, %got(ibuffer_size)($gp)
/* 0041AD10 AC290000 */  sw    $t1, ($at)
/* 0041AD14 8F818984 */  lw     $at, %got(d_ptr)($gp)
/* 0041AD18 8D4A0000 */  lw    $t2, ($t2)
/* 0041AD1C 27BD0020 */  addiu $sp, $sp, 0x20
/* 0041AD20 03E00008 */  jr    $ra
/* 0041AD24 AC2A0000 */   sw    $t2, ($at)
    .type clear_ibuffer, @function
    .size clear_ibuffer, .-clear_ibuffer
    .end clear_ibuffer

glabel emit_vreg
    .ent emit_vreg
    # 0042BDAC eval
/* 0041AD28 3C1C0FC0 */  .cpload $t9
/* 0041AD2C 279C4D28 */  
/* 0041AD30 0399E021 */  
/* 0041AD34 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 0041AD38 AFA00024 */  sw    $zero, 0x24($sp)
/* 0041AD3C 00803825 */  move  $a3, $a0
/* 0041AD40 93AE0025 */  lbu   $t6, 0x25($sp)
/* 0041AD44 0007CE40 */  sll   $t9, $a3, 0x19
/* 0041AD48 AFB90028 */  sw    $t9, 0x28($sp)
/* 0041AD4C 8F9982A0 */  lw    $t9, %call16(append_i)($gp)
/* 0041AD50 31CFFFC0 */  andi  $t7, $t6, 0xffc0
/* 0041AD54 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0041AD58 AFA40030 */  sw    $a0, 0x30($sp)
/* 0041AD5C 35F80025 */  ori   $t8, $t7, 0x25
/* 0041AD60 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0041AD64 A3B80025 */  sb    $t8, 0x25($sp)
/* 0041AD68 AFA5002C */  sw    $a1, 0x2c($sp)
/* 0041AD6C AFA60020 */  sw    $a2, 0x20($sp)
/* 0041AD70 0320F809 */  jalr  $t9
/* 0041AD74 27A40020 */   addiu $a0, $sp, 0x20
/* 0041AD78 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0041AD7C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041AD80 27BD0030 */  addiu $sp, $sp, 0x30
/* 0041AD84 03E00008 */  jr    $ra
/* 0041AD88 00000000 */   nop   
    .type emit_vreg, @function
    .size emit_vreg, .-emit_vreg
    .end emit_vreg

glabel emit_pic
    .ent emit_pic
    # 0044BF18 main
/* 0041AD8C 3C1C0FC0 */  .cpload $t9
/* 0041AD90 279C4CC4 */  
/* 0041AD94 0399E021 */  
/* 0041AD98 8F858984 */  lw     $a1, %got(d_ptr)($gp)
/* 0041AD9C 8F838978 */  lw     $v1, %got(ibuffer)($gp)
/* 0041ADA0 3C01FFFF */  lui   $at, 0xffff
/* 0041ADA4 8CAF0000 */  lw    $t7, ($a1)
/* 0041ADA8 8C6E0000 */  lw    $t6, ($v1)
/* 0041ADAC 34213FFF */  ori   $at, $at, 0x3fff
/* 0041ADB0 000FC100 */  sll   $t8, $t7, 4
/* 0041ADB4 01D81021 */  addu  $v0, $t6, $t8
/* 0041ADB8 9059FFF5 */  lbu   $t9, -0xb($v0)
/* 0041ADBC 2442FFF0 */  addiu $v0, $v0, -0x10
/* 0041ADC0 3328FFC0 */  andi  $t0, $t9, 0xffc0
/* 0041ADC4 3509002F */  ori   $t1, $t0, 0x2f
/* 0041ADC8 A0490005 */  sb    $t1, 5($v0)
/* 0041ADCC 8CAB0000 */  lw    $t3, ($a1)
/* 0041ADD0 8C6A0000 */  lw    $t2, ($v1)
/* 0041ADD4 000B6100 */  sll   $t4, $t3, 4
/* 0041ADD8 014C1021 */  addu  $v0, $t2, $t4
/* 0041ADDC 8C4DFFF4 */  lw    $t5, -0xc($v0)
/* 0041ADE0 2442FFF0 */  addiu $v0, $v0, -0x10
/* 0041ADE4 01A17824 */  and   $t7, $t5, $at
/* 0041ADE8 35EE8000 */  ori   $t6, $t7, 0x8000
/* 0041ADEC AC4E0004 */  sw    $t6, 4($v0)
/* 0041ADF0 8CB90000 */  lw    $t9, ($a1)
/* 0041ADF4 8C780000 */  lw    $t8, ($v1)
/* 0041ADF8 00194100 */  sll   $t0, $t9, 4
/* 0041ADFC 03084821 */  addu  $t1, $t8, $t0
/* 0041AE00 AD24FFFC */  sw    $a0, -4($t1)
/* 0041AE04 8CAB0000 */  lw    $t3, ($a1)
/* 0041AE08 256AFFFF */  addiu $t2, $t3, -1
/* 0041AE0C 03E00008 */  jr    $ra
/* 0041AE10 ACAA0000 */   sw    $t2, ($a1)
    .type emit_pic, @function
    .size emit_pic, .-emit_pic
    .end emit_pic

glabel demit_cpalias
    .ent demit_cpalias
    # 004219E8 gen_reg_save_restore
/* 0041AE14 3C1C0FC0 */  .cpload $t9
/* 0041AE18 279C4C3C */  
/* 0041AE1C 0399E021 */  
/* 0041AE20 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 0041AE24 AFA00024 */  sw    $zero, 0x24($sp)
/* 0041AE28 00802825 */  move  $a1, $a0
/* 0041AE2C 93AE0025 */  lbu   $t6, 0x25($sp)
/* 0041AE30 0005CE40 */  sll   $t9, $a1, 0x19
/* 0041AE34 AFB90028 */  sw    $t9, 0x28($sp)
/* 0041AE38 8F9982A4 */  lw    $t9, %call16(append_d)($gp)
/* 0041AE3C 31CFFFC0 */  andi  $t7, $t6, 0xffc0
/* 0041AE40 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0041AE44 AFA40030 */  sw    $a0, 0x30($sp)
/* 0041AE48 35F80021 */  ori   $t8, $t7, 0x21
/* 0041AE4C AFBC0018 */  sw    $gp, 0x18($sp)
/* 0041AE50 AFA0002C */  sw    $zero, 0x2c($sp)
/* 0041AE54 A3B80025 */  sb    $t8, 0x25($sp)
/* 0041AE58 AFA00020 */  sw    $zero, 0x20($sp)
/* 0041AE5C 0320F809 */  jalr  $t9
/* 0041AE60 27A40020 */   addiu $a0, $sp, 0x20
/* 0041AE64 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0041AE68 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041AE6C 27BD0030 */  addiu $sp, $sp, 0x30
/* 0041AE70 03E00008 */  jr    $ra
/* 0041AE74 00000000 */   nop   
    .type demit_cpalias, @function
    .size demit_cpalias, .-demit_cpalias
    .end demit_cpalias

glabel emit_cpalias
    .ent emit_cpalias
    # 00422764 gen_reg_save
/* 0041AE78 3C1C0FC0 */  .cpload $t9
/* 0041AE7C 279C4BD8 */  
/* 0041AE80 0399E021 */  
/* 0041AE84 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 0041AE88 AFA00024 */  sw    $zero, 0x24($sp)
/* 0041AE8C 00802825 */  move  $a1, $a0
/* 0041AE90 93AE0025 */  lbu   $t6, 0x25($sp)
/* 0041AE94 0005CE40 */  sll   $t9, $a1, 0x19
/* 0041AE98 AFB90028 */  sw    $t9, 0x28($sp)
/* 0041AE9C 8F9982A0 */  lw    $t9, %call16(append_i)($gp)
/* 0041AEA0 31CFFFC0 */  andi  $t7, $t6, 0xffc0
/* 0041AEA4 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0041AEA8 AFA40030 */  sw    $a0, 0x30($sp)
/* 0041AEAC 35F80021 */  ori   $t8, $t7, 0x21
/* 0041AEB0 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0041AEB4 AFA0002C */  sw    $zero, 0x2c($sp)
/* 0041AEB8 A3B80025 */  sb    $t8, 0x25($sp)
/* 0041AEBC AFA00020 */  sw    $zero, 0x20($sp)
/* 0041AEC0 0320F809 */  jalr  $t9
/* 0041AEC4 27A40020 */   addiu $a0, $sp, 0x20
/* 0041AEC8 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0041AECC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041AED0 27BD0030 */  addiu $sp, $sp, 0x30
/* 0041AED4 03E00008 */  jr    $ra
/* 0041AED8 00000000 */   nop   
    .type emit_cpalias, @function
    .size emit_cpalias, .-emit_cpalias
    .end emit_cpalias

glabel emit_cpadd
    .ent emit_cpadd
    # 0042BDAC eval
/* 0041AEDC 3C1C0FC0 */  .cpload $t9
/* 0041AEE0 279C4B74 */  
/* 0041AEE4 0399E021 */  
/* 0041AEE8 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 0041AEEC AFA00024 */  sw    $zero, 0x24($sp)
/* 0041AEF0 00802825 */  move  $a1, $a0
/* 0041AEF4 93AE0025 */  lbu   $t6, 0x25($sp)
/* 0041AEF8 0005CE40 */  sll   $t9, $a1, 0x19
/* 0041AEFC AFB90028 */  sw    $t9, 0x28($sp)
/* 0041AF00 8F9982A0 */  lw    $t9, %call16(append_i)($gp)
/* 0041AF04 8F818A90 */  lw     $at, %got(uses_gp)($gp)
/* 0041AF08 31CFFFC0 */  andi  $t7, $t6, 0xffc0
/* 0041AF0C AFBF001C */  sw    $ra, 0x1c($sp)
/* 0041AF10 AFA40030 */  sw    $a0, 0x30($sp)
/* 0041AF14 35F80011 */  ori   $t8, $t7, 0x11
/* 0041AF18 24080001 */  li    $t0, 1
/* 0041AF1C AFBC0018 */  sw    $gp, 0x18($sp)
/* 0041AF20 AFA0002C */  sw    $zero, 0x2c($sp)
/* 0041AF24 A3B80025 */  sb    $t8, 0x25($sp)
/* 0041AF28 AFA00020 */  sw    $zero, 0x20($sp)
/* 0041AF2C 27A40020 */  addiu $a0, $sp, 0x20
/* 0041AF30 0320F809 */  jalr  $t9
/* 0041AF34 A0280000 */   sb    $t0, ($at)
/* 0041AF38 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0041AF3C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041AF40 27BD0030 */  addiu $sp, $sp, 0x30
/* 0041AF44 03E00008 */  jr    $ra
/* 0041AF48 00000000 */   nop   
    .type emit_cpadd, @function
    .size emit_cpadd, .-emit_cpadd
    .end emit_cpadd
)"");
