__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm



.bss
    .balign 4
# 10021220
glabel current_line
    # 0040ADA0 warning
    # 0040F4C8 build_tree
    # 0042BDAC eval
    # 00438AE0 cross_jump
    # 0043D650 reset_errors
    # 0043D690 report_error
    # 004432FC translate
    .space 4
    .size current_line, 4
    .type current_line, @object

    .balign 4
# 10021228
glabel excpt
    # 00420810 gen_entry_exit
    # 0043DFB0 gen_sym
    # 0043FA38 choose_area
    # 0044BF18 main
    .space 4
    .size excpt, 4
    .type excpt, @object

    .balign 4
# 1002122C
glabel non_local_mtag
    # 0040EFBC func_0040EFBC
    # 0040F4C8 build_tree
    # 00440B60 get_mtag
    # 0044BF18 main
    .space 4
    .size non_local_mtag, 4
    .type non_local_mtag, @object

    .balign 4
# 10021230
glabel ibuffer_size
    # 00414040 init_ibuffer
    # 004141CC grow_ibuffer
    # 0041AC84 clear_ibuffer
    # 0044BF18 main
    .space 4
    .size ibuffer_size, 4
    .type ibuffer_size, @object

    .balign 4
# 10021234
glabel ibuffer
    # 00413F80 restore_i_ptrs
    # 00414040 init_ibuffer
    # 004141CC grow_ibuffer
    # 00414774 emit_vers
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
    # 0041AC84 clear_ibuffer
    # 0041AD8C emit_pic
    # 004219E8 gen_reg_save_restore
    # 00422764 gen_reg_save
    # 0042BDAC eval
    # 0044BF18 main
    .space 4
    .size ibuffer, 4
    .type ibuffer, @object

    .balign 4
# 10021238
glabel i_ptr
    # 00413F50 save_i_ptrs
    # 00413F80 restore_i_ptrs
    # 00414040 init_ibuffer
    # 004141CC grow_ibuffer
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
    # 0041AC84 clear_ibuffer
    # 00420810 gen_entry_exit
    # 0042BDAC eval
    # 0044BF18 main
    .space 4
    .size i_ptr, 4
    .type i_ptr, @object

    .balign 4
# 1002123C
glabel old_i_ptr
    # 00413F50 save_i_ptrs
    # 00413F80 restore_i_ptrs
    .space 4
    .size old_i_ptr, 4
    .type old_i_ptr, @object

    .balign 4
# 10021240
glabel d_ptr
    # 00413F50 save_i_ptrs
    # 00413F80 restore_i_ptrs
    # 00414040 init_ibuffer
    # 004141CC grow_ibuffer
    # 00414774 emit_vers
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
    # 0041AC84 clear_ibuffer
    # 0041AD8C emit_pic
    # 0044BF18 main
    .space 4
    .size d_ptr, 4
    .type d_ptr, @object

    .balign 4
# 10021244
glabel old_d_ptr
    # 00413F50 save_i_ptrs
    # 00413F80 restore_i_ptrs
    # 004141CC grow_ibuffer
    .space 4
    .size old_d_ptr, 4
    .type old_d_ptr, @object

    .balign 4
# 10021248
glabel lsb_first
    # 0040E474 func_0040E474
    # 0040E884 func_0040E884
    # 0040F4C8 build_tree
    # 0041B07C func_0041B07C
    # 0041B1BC func_0041B1BC
    # 0041B2FC func_0041B2FC
    # 0041B43C func_0041B43C
    # 0041B57C func_0041B57C
    # 0041B6BC func_0041B6BC
    # 0041B7FC func_0041B7FC
    # 0041B93C func_0041B93C
    # 0041D1E8 func_0041D1E8
    # 0041D39C func_0041D39C
    # 0041D534 func_0041D534
    # 0041D958 func_0041D958
    # 0041DF18 func_0041DF18
    # 0041E05C func_0041E05C
    # 0041E1C0 func_0041E1C0
    # 0041E304 func_0041E304
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
    # 00426C54 func_00426C54
    # 00426EF0 iloadistore
    # 00427620 rloadrstore
    # 00427B44 loadstore_for_two_words
    # 00427CE4 unaligned_loadstore_for_two_fp_w
    # 00427E8C loadstore_for_two_fp_words
    # 00427FB8 func_00427FB8
    # 00428D14 eval_mov
    # 0042BDAC eval
    # 00434374 func_00434374
    # 00434430 func_00434430
    # 00434618 func_00434618
    # 0044196C get_set_const
    # 0044202C set_rewrite
    # 00442968 set_rewrite_indexed
    # 004432FC translate
    # 00447E14 load_cse
    # 004488F4 translate_cvtl
    # 0044BF18 main
    # 0044EC1C emit_val
    .space 4
    .size lsb_first, 4
    .type lsb_first, @object

    .balign 4
# 1002124C
glabel sdata_max
    # 004366E8 select_data_section
    # 00436D00 add_to_pool
    # 0043FA38 choose_area
    # 0044BF18 main
    .space 4
    .size sdata_max, 4
    .type sdata_max, @object

    .balign 4
# 10021250
glabel ascii_out
    # 00420810 gen_entry_exit
    # 0042BDAC eval
    # 0044BF18 main
    .space 4
    .size ascii_out, 4
    .type ascii_out, @object

    .balign 4
# 10021254
glabel ms_stamp
    # 0040F4C8 build_tree
    .space 4
    .size ms_stamp, 4
    .type ms_stamp, @object

    .balign 4
# 10021258
glabel ls_stamp
    # 0040F4C8 build_tree
    .space 4
    .size ls_stamp, 4
    .type ls_stamp, @object

    .balign 4
# 1002125C
glabel fp_initialized
    # 0044BF18 main
    .space 4
    .size fp_initialized, 4
    .type fp_initialized, @object

    .balign 4
# 10021260
glabel source_language
    # 0040BC48 put_sym
    # 0040F4C8 build_tree
    # 0042A9A8 load_parm_vreg
    # 0042BDAC eval
    # 0043E7D8 some_init_overlap
    # 0043E938 complex_init_duplicate_p
    # 0043F460 append_init
    # 0043FBF8 emit_init
    # 004432FC translate
    # 00447E14 load_cse
    .space 4
    .size source_language, 4
    .type source_language, @object

    .balign 4
# 10021264
glabel use_fp
    # 0040F4C8 build_tree
    # 0042BDAC eval
    # 004432FC translate
    .space 4
    .size use_fp, 4
    .type use_fp, @object

    .balign 4
# 10021268
glabel will_use_real_fp_for_proc
    # 0040F4C8 build_tree
    .space 4
    .size will_use_real_fp_for_proc, 4
    .type will_use_real_fp_for_proc, @object

    .balign 4
# 1002126C
glabel no_jal_use_jalr_only
    # 0042BDAC eval
    # 0044BF18 main
    .space 4
    .size no_jal_use_jalr_only, 4
    .type no_jal_use_jalr_only, @object

    .balign 4
# 10021270
glabel pseudo_leaf
    # 0040F4C8 build_tree
    # 0042AEE8 get_saved_regs_size
    # 0042BDAC eval
    # 00443284 translate_tree
    # 004432FC translate
    .space 4
    .size pseudo_leaf, 4
    .type pseudo_leaf, @object

    .balign 4
# 10021274
glabel isa
    # 00420810 gen_entry_exit
    # 00424934 restore_from_temp
    # 00425D78 lsopc
    # 0042BDAC eval
    # 0043A888 spill_reg
    # 0043BAA8 get_free_fp_reg
    # 004488F4 translate_cvtl
    # 0044BF18 main
    .space 4
    .size isa, 4
    .type isa, @object

    .balign 4
# 10021278
glabel apc
    # 0043F460 append_init
    # 0044BF18 main
    .space 4
    .size apc, 4
    .type apc, @object

    .balign 4
# 1002127C
glabel align8
    # 00426EF0 iloadistore
    # 00428384 unaligned_loadstore
    # 0044BF18 main
    .space 4
    .size align8, 4
    .type align8, @object

    .balign 4
# 10021280
glabel align16
    # 00426EF0 iloadistore
    # 00428384 unaligned_loadstore
    # 0044BF18 main
    .space 4
    .size align16, 4
    .type align16, @object

    .balign 4
# 10021284
glabel align32
    # 00426EF0 iloadistore
    # 00427620 rloadrstore
    # 00428384 unaligned_loadstore
    # 0044BF18 main
    .space 4
    .size align32, 4
    .type align32, @object

    .balign 4
# 10021288
glabel align64
    # 00426EF0 iloadistore
    # 0044BF18 main
    .space 4
    .size align64, 4
    .type align64, @object

    .balign 4
# 1002128C
glabel mscoff
    # 00422DB8 emit_file
    # 0044BF18 main
    .space 4
    .size mscoff, 4
    .type mscoff, @object

    .balign 4
# 10021290
glabel stack_limit_bn
    # 0040F4C8 build_tree
    # 00420810 gen_entry_exit
    # 0042BDAC eval
    .space 4
    .size stack_limit_bn, 4
    .type stack_limit_bn, @object

    .balign 4
# 10021294
glabel opcode_arch
    # 0040F4C8 build_tree
    # 0041BA7C emit_branch_rrll
    # 0041C388 emit_branch_rill
    # 0041CAAC emit_trap_rri
    # 0041D034 emit_trap_ri
    # 0041E468 dw_emit_rrr
    # 0041FC98 dw_emit_rri
    # 004206C0 dw_emit_rr
    # 00423290 move_dreg_to_regs
    # 00423AA4 uop_to_asm
    # 00424240 trap
    # 00424934 restore_from_temp
    # 004258CC get_dest
    # 00425AA0 move_to_dest
    # 00426EF0 iloadistore
    # 00427620 rloadrstore
    # 00428190 func_00428190
    # 00428D14 eval_mov
    # 0042BDAC eval
    # 00433494 eval_flt_int_cvt
    # 004340D4 func_004340D4
    # 00434500 func_00434500
    # 00434618 func_00434618
    # 0043A5E8 spill
    # 0043ADE8 get_reg
    # 0043AE78 get_reg1
    # 0043B6AC get_two_free_regs
    # 0043B854 get_one_free_reg
    # 0043BA20 get_free_reg
    # 0043BE04 dec_usage
    # 0043C098 free_reg
    # 0043C994 remove_from_free_list
    # 00440EA0 gen_store
    # 00441308 spill_to_temp
    # 00447884 assign_vreg
    # 0044BF18 main
    .space 4
    .size opcode_arch, 4
    .type opcode_arch, @object

    .balign 4
# 10021298
glabel basicint
    # 0040E884 func_0040E884
    # 0040F4C8 build_tree
    # 00421564 home_parameters
    # 004219E8 gen_reg_save_restore
    # 00422764 gen_reg_save
    # 00425D78 lsopc
    # 0042670C loadstore
    # 00428D14 eval_mov
    # 0042AEE8 get_saved_regs_size
    # 0042BDAC eval
    # 00438E30 parm_reg
    # 00438ECC map_pdefs_to_regs
    # 00438FEC map_pars_to_regs
    # 00439334 check_amt
    # 00439418 check_amt_ref
    # 0044BF18 main
    .space 4
    .size basicint, 4
    .type basicint, @object

    .balign 4
# 1002129C
glabel debug_ugen
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
    # 0042BDAC eval
    # 0043D690 report_error
    # 0044BF18 main
    .space 4
    .size debug_ugen, 4
    .type debug_ugen, @object

    .balign 4
# 100212A0
glabel pic_level
    # 004193FC emit_dir_ll
    # 00420810 gen_entry_exit
    # 00421170 gen_entry
    # 004219E8 gen_reg_save_restore
    # 00422764 gen_reg_save
    # 0042670C loadstore
    # 0042AEE8 get_saved_regs_size
    # 0042BDAC eval
    # 0044BF18 main
    .space 4
    .size pic_level, 4
    .type pic_level, @object

    .balign 4
# 100212A4
glabel cpalias_ok
    # 0042AEE8 get_saved_regs_size
    # 0044BF18 main
    .space 4
    .size cpalias_ok, 4
    .type cpalias_ok, @object

    .balign 4
# 100212A8
glabel saw_cap_g
    # 0044BF18 main
    .space 4
    .size saw_cap_g, 4
    .type saw_cap_g, @object

    .balign 4
# 100212AC
glabel use_cpalias
    # 004219E8 gen_reg_save_restore
    # 00422764 gen_reg_save
    # 0042AEE8 get_saved_regs_size
    # 0042BDAC eval
    .space 4
    .size use_cpalias, 4
    .type use_cpalias, @object

    .balign 4
# 100212B0
glabel framesz_relocatable
    # 0040F4C8 build_tree
    # 00420810 gen_entry_exit
    # 0042BDAC eval
    .space 4
    .size framesz_relocatable, 4
    .type framesz_relocatable, @object

    .balign 4
# 100212B8
glabel current_linen
    # 0040CF50 print_source
    .space 4
    .size current_linen, 4
    .type current_linen, @object

    .balign 4
# 100212C0
glabel n_parm_regs
    # 0040F4C8 build_tree
    # 00421564 home_parameters
    # 004248B4 is_parm_reg
    # 0042AB24 in_parm_regs
    # 0042B1D8 unhome_parms
    # 0042B410 home_parms
    # 0042BA08 load_pmov_regs
    # 00438ECC map_pdefs_to_regs
    # 00438FEC map_pars_to_regs
    # 00439334 check_amt
    # 00439418 check_amt_ref
    # 00439AE0 init_regs
    # 004432FC translate
    # 0044B384 func_0044B384
    # 0044BF18 main
    .space 4
    .size n_parm_regs, 4
    .type n_parm_regs, @object

    .balign 4
# 100212C4
glabel n_fp_parm_regs
    # 0040E884 func_0040E884
    # 0040F4C8 build_tree
    # 00421564 home_parameters
    # 004248B4 is_parm_reg
    # 0042AB24 in_parm_regs
    # 00438ECC map_pdefs_to_regs
    # 00438FEC map_pars_to_regs
    # 00439334 check_amt
    # 00439418 check_amt_ref
    # 00439AE0 init_regs
    # 004432FC translate
    # 00447884 assign_vreg
    # 0044B640 func_0044B640
    # 0044BF18 main
    .space 4
    .size n_fp_parm_regs, 4
    .type n_fp_parm_regs, @object

    .balign 4
# 100212C8
glabel n_saved_regs
    # 004219E8 gen_reg_save_restore
    # 00422764 gen_reg_save
    # 00424838 is_saved_reg
    # 00439AE0 init_regs
    # 004432FC translate
    # 0044B384 func_0044B384
    # 0044BF18 main
    .space 4
    .size n_saved_regs, 4
    .type n_saved_regs, @object

    .balign 4
# 100212CC
glabel n_saved_fp_regs
    # 004219E8 gen_reg_save_restore
    # 00422764 gen_reg_save
    # 00424838 is_saved_reg
    # 0042BDAC eval
    # 00439AE0 init_regs
    # 004432FC translate
    # 0044B640 func_0044B640
    # 0044BF18 main
    .space 4
    .size n_saved_fp_regs, 4
    .type n_saved_fp_regs, @object

    .balign 4
# 100212D0
glabel n_unsaved_regs
    # 00439AE0 init_regs
    # 004432FC translate
    # 0044B384 func_0044B384
    # 0044BF18 main
    .space 4
    .size n_unsaved_regs, 4
    .type n_unsaved_regs, @object

    .balign 4
# 100212D4
glabel n_unsaved_fp_regs
    # 00439AE0 init_regs
    # 004432FC translate
    # 0044B640 func_0044B640
    # 0044BF18 main
    .space 4
    .size n_unsaved_fp_regs, 4
    .type n_unsaved_fp_regs, @object

    .balign 4
# 100212D8
glabel n_cg_regs
    # 00439AE0 init_regs
    # 0044B384 func_0044B384
    # 0044BF18 main
    .space 4
    .size n_cg_regs, 4
    .type n_cg_regs, @object

    .balign 4
# 100212DC
glabel n_fp_cg_regs
    # 00439AE0 init_regs
    # 0044B640 func_0044B640
    # 0044BF18 main
    .space 4
    .size n_fp_cg_regs, 4
    .type n_fp_cg_regs, @object

    .balign 4
# 100212E0
glabel ufsa
    # 0042AEE8 get_saved_regs_size
    # 0042BDAC eval
    # 0044BF18 main
    .space 4
    .size ufsa, 4
    .type ufsa, @object

    .balign 4
# 100212E4
glabel ufsm
    # 0042AEE8 get_saved_regs_size
    # 0042BDAC eval
    # 00439AE0 init_regs
    # 0044BF18 main
    .space 4
    .size ufsm, 4
    .type ufsm, @object

    .balign 4
# 100212E8
glabel fp32regs
    # 00439AE0 init_regs
    # 0044BF18 main
    .space 4
    .size fp32regs, 4
    .type fp32regs, @object

    .balign 4
# 100212F0
glabel addr_dtype
    # 0040F4C8 build_tree
    # 004395DC fix_amt_ref
    # 00442968 set_rewrite_indexed
    # 004432FC translate
    # 0044A28C build_1op
    # 0044A3D4 build_2op
    # 0044ADF4 result_type
    # 0044BF18 main
    .space 4
    .size addr_dtype, 4
    .type addr_dtype, @object

    .balign 4
# 100212F4
glabel unitsperaddr
    # 0040E884 func_0040E884
    # 0040F4C8 build_tree
    # 004395DC fix_amt_ref
    # 0044BF18 main
    .space 4
    .size unitsperaddr, 4
    .type unitsperaddr, @object

    .balign 4
# 100212F8
glabel opt_cse
    # 0042BDAC eval
    # 00438C40 set_opts
    # 004432FC translate
    .space 4
    .size opt_cse, 4
    .type opt_cse, @object

    .balign 4
# 100212FC
glabel opt_labels
    # 00438C40 set_opts
    # 0044BF18 main
    .space 4
    .size opt_labels, 4
    .type opt_labels, @object

    .balign 4
# 10021300
glabel opt_parms
    # 0040F328 func_0040F328
    # 0040F4C8 build_tree
    # 00438C40 set_opts
    .space 4
    .size opt_parms, 4
    .type opt_parms, @object

    .balign 4
# 10021304
glabel ignore_vreg
    # 0040F4C8 build_tree
    # 0042AEE8 get_saved_regs_size
    # 00438C40 set_opts
    # 004432FC translate
    # 00447768 check_reg
    .space 4
    .size ignore_vreg, 4
    .type ignore_vreg, @object

    .balign 4
# 10021308
glabel tail_call_opt
    # 00438C40 set_opts
    # 004432FC translate
    # 0044BF18 main
    .space 4
    .size tail_call_opt, 4
    .type tail_call_opt, @object

    .balign 4
# 1002130C
glabel glevel
    # 0040F4C8 build_tree
    # 0042BDAC eval
    # 00438C40 set_opts
    .space 4
    .size glevel, 4
    .type glevel, @object

    .balign 4
# 10021310
glabel olevel
    # 00420810 gen_entry_exit
    # 0042BDAC eval
    # 00438C40 set_opts
    # 004432FC translate
    .space 4
    .size olevel, 4
    .type olevel, @object

    .balign 4
# 10021314
glabel sgi_unsigned_conv
    # 0044BF18 main
    .space 4
    .size sgi_unsigned_conv, 4
    .type sgi_unsigned_conv, @object

    .balign 4
# 10021318
glabel nooffsetopt
    # 0040F4C8 build_tree
    # 004432FC translate
    # 0044BF18 main
    .space 4
    .size nooffsetopt, 4
    .type nooffsetopt, @object

    .balign 4
# 1002131C
glabel has_cia_in_file
    # 0040F4C8 build_tree
    # 0042BDAC eval
    .space 4
    .size has_cia_in_file, 4
    .type has_cia_in_file, @object

    .balign 4
# 10021320
glabel tree_heap
    # 00449F9C new_tree
    # 0044BF18 main
    .space 4
    .size tree_heap, 4
    .type tree_heap, @object

    .balign 4
# 10021324
glabel tree_heap_mark
    # 0044BF18 main
    .space 4
    .size tree_heap_mark, 4
    .type tree_heap_mark, @object

    .balign 4
# 10021328
glabel frame_pointer
    # 00420810 gen_entry_exit
    # 00421170 gen_entry
    # 004219E8 gen_reg_save_restore
    # 00422764 gen_reg_save
    # 00424934 restore_from_temp
    # 0042670C loadstore
    # 00428D14 eval_mov
    # 0042BDAC eval
    # 00440EA0 gen_store
    .space 4
    .size frame_pointer, 4
    .type frame_pointer, @object

    .balign 4
# 1002132C
glabel aframe_pointer
    .space 4
    .size aframe_pointer, 4
    .type aframe_pointer, @object

    .balign 4
# 10021330
glabel frame_size
    # 0042BDAC eval
    # 004350E0 frame_offset
    # 00435134 frame_offset1
    .space 4
    .size frame_size, 4
    .type frame_size, @object

    .balign 4
# 10021334
glabel use_real_fp_for_all
    # 0042BDAC eval
    # 004432FC translate
    # 0044BF18 main
    .space 4
    .size use_real_fp_for_all, 4
    .type use_real_fp_for_all, @object

    .balign 4
# 10021338
glabel use_real_fp_for_proc
    # 0042AEE8 get_saved_regs_size
    # 0042BDAC eval
    # 004432FC translate
    # 00447884 assign_vreg
    .space 4
    .size use_real_fp_for_proc, 4
    .type use_real_fp_for_proc, @object

    .balign 4
# 1002133C
glabel home_vararg_reg
    # 00421170 gen_entry
    # 00421564 home_parameters
    # 0042BDAC eval
    .space 4
    .size home_vararg_reg, 4
    .type home_vararg_reg, @object

    .balign 4
# 10021340
glabel reversed_stack
    # 0040EC54 func_0040EC54
    # 0040F0B8 func_0040F0B8
    # 0040F4C8 build_tree
    # 00420810 gen_entry_exit
    # 00421170 gen_entry
    # 00421564 home_parameters
    # 004219E8 gen_reg_save_restore
    # 00422764 gen_reg_save
    # 00424934 restore_from_temp
    # 0042BDAC eval
    # 004350E0 frame_offset
    # 00435134 frame_offset1
    # 00440EA0 gen_store
    .space 4
    .size reversed_stack, 4
    .type reversed_stack, @object

    .balign 4
# 10021344
glabel resident_text
    # 0040F4C8 build_tree
    # 0042BDAC eval
    .space 4
    .size resident_text, 4
    .type resident_text, @object

    .balign 4
# 10021348
glabel first_pmt_offset
    # 0040E474 func_0040E474
    # 0040E884 func_0040E884
    # 0040F4C8 build_tree
    # 0042BDAC eval
    # 00438ECC map_pdefs_to_regs
    # 00438FEC map_pars_to_regs
    .space 4
    .size first_pmt_offset, 4
    .type first_pmt_offset, @object

    .balign 4
# 1002134C
glabel getfilename
    .space 4
    .size getfilename, 4
    .type getfilename, @object

    .balign 4
# 10021350
glabel strp
    # 0040E1F8 init_build
    .space 4
    .size strp, 4
    .type strp, @object

    .balign 4
# 10021358
glabel domtag
    # 0040E0B0 set_domtag
    # 0040E0CC get_domtag
    # 0040F4C8 build_tree
    .space 4
    .size domtag, 4
    .type domtag, @object

    .balign 4
# 1002135C
glabel init_dynmem
    # 00420810 gen_entry_exit
    # 00421170 gen_entry
    # 0044BF18 main
    .space 4
    .size init_dynmem, 4
    .type init_dynmem, @object

    .balign 4
# 10021360
glabel max_stack
    # 00420810 gen_entry_exit
    # 0042BDAC eval
    # 0044BF18 main
    .space 4
    .size max_stack, 4
    .type max_stack, @object

    .balign 4
# 10021364
glabel uses_gp
    # 00415494 emit_ra
    # 00415A08 emit_rii
    # 00415A80 emit_rfi
    # 0041AEDC emit_cpadd
    # 00420810 gen_entry_exit
    # 0042BDAC eval
    .space 4
    .size uses_gp, 4
    .type uses_gp, @object

    .balign 4
# 10021368
glabel has_calls
    # 00416DFC emit_a
    # 0041705C emit_r
    # 0042BDAC eval
    .space 4
    .size has_calls, 4
    .type has_calls, @object

    .balign 4
# 10021370
glabel num_i_ptr_indexes
    # 004219E8 gen_reg_save_restore
    # 00422764 gen_reg_save
    # 0042BDAC eval
    .space 4
    .size num_i_ptr_indexes, 4
    .type num_i_ptr_indexes, @object

    .balign 8
# 10021460
glabel in_file
    # 0040C0B4 put_string
    # 0040C210 write_instruction
    # 0040D350 write_directive
    # 0040DFB0 output_inst_ascii
    .space 8
    .size in_file, 8
    .type in_file, @object

    .balign 8
# 10021468
glabel source_file
    # 0040CF50 print_source
    .space 8
    .size source_file, 8
    .type source_file, @object

    .balign 8
# 10021470
glabel val64
    # 0040C210 write_instruction
    # 0040D350 write_directive
    .space 8
    .size val64, 8
    .type val64, @object

    .balign 8
# 10021490
glabel ugen_fp_callee_saved
    # 0042AB88 gen_regs
    # 0042BDAC eval
    # 0043BAA8 get_free_fp_reg
    .space 12
    .size ugen_fp_callee_saved, 12
    .type ugen_fp_callee_saved, @object

    .balign 8
# 100214A0
glabel saved_regs
    # 00421508 clear_saved_regs
    # 00421530 is_empty_saved_regs
    # 00421564 home_parameters
    # 004219E8 gen_reg_save_restore
    # 00422764 gen_reg_save
    # 0042A64C save_vreg
    # 0042AB88 gen_regs
    # 0042B1D8 unhome_parms
    # 0042B410 home_parms
    # 0042BDAC eval
    # 0043BAA8 get_free_fp_reg
    .space 12
    .size saved_regs, 12
    .type saved_regs, @object

    .balign 16
# 100215E0
glabel current_file
    .space 80
    .size current_file, 80
    .type current_file, @object

    .balign 16
# 10021630
glabel i_ptrs_for_gp_offset
    # 004219E8 gen_reg_save_restore
    # 00422764 gen_reg_save
    # 0042BDAC eval
    .space 80
    .size i_ptrs_for_gp_offset, 80
    .type i_ptrs_for_gp_offset, @object

    .balign 16
# 10021B70
glabel regs
    # 00423290 move_dreg_to_regs
    # 00428190 func_00428190
    # 0042BDAC eval
    # 00439910 find_non_special_reg
    # 00439AB4 kind_of_register
    # 00439AE0 init_regs
    # 00439F4C fill_reg
    # 00439F88 copy_reg
    # 0043A020 dump_reg
    # 0043A1B8 print_regs
    # 0043A32C remove_direg
    # 0043A408 remove_head
    # 0043A45C append_to_list
    # 0043A500 remove_from_list
    # 0043A5E8 spill
    # 0043AB48 get_one_reg
    # 0043AD54 get_two_regs
    # 0043AE78 get_reg1
    # 0043B0F8 get_fp_reg
    # 0043B30C get_fp_reg1
    # 0043B408 can_get_two_regs
    # 0043B478 spill_two_regs
    # 0043B6AC get_two_free_regs
    # 0043B854 get_one_free_reg
    # 0043BAA8 get_free_fp_reg
    # 0043BC80 content_of
    # 0043BDCC inc_usage
    # 0043BE04 dec_usage
    # 0043C098 free_reg
    # 0043C410 free_fp_reg
    # 0043C5D4 force_free_reg
    # 0043C674 add_to_free_list
    # 0043C804 add_to_fp_free_list
    # 0043C994 remove_from_free_list
    # 0043CCA0 remove_from_fp_free_list
    # 0043CE28 is_available
    # 0043D0C0 usage_count
    # 0043D1A4 get_free_fp_reg_special
    # 0043D3F8 get_free_reg_special
    .space 876
    .size regs, 876
    .type regs, @object

    .balign 16
# 10021EE0
glabel label_hash_table
    # 0040E0E4 search_label
    # 0040E144 find_label
    # 0040F4C8 build_tree
    .space 1012
    .size label_hash_table, 1012
    .type label_hash_table, @object

    .balign 16
# 100222D8
glabel source_file_name
    # 0040CF50 print_source
    .space 1024
    .size source_file_name, 1024
    .type source_file_name, @object


.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
)"");
