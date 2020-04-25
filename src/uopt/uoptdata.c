__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm



.bss
    .balign 4
# 1001C2F8
glabel ustrptr
    # 00414108 func_00414108
    # 0041FD3C genloadnum
    # 0042BD94 func_0042BD94
    # 0042BF08 reemit
    # 0043771C optinit
    # 00439C40 getop
    # 0043A0CC copyline
    # 0043B084 func_0043B084
    # 0043C248 func_0043C248
    # 0043C56C func_0043C56C
    # 0043CFCC readnxtinst
    # 0045806C main
    # 0045B508 oneprocprepass
    # 0045C150 prepass
    # 0047CAEC realhash
    # 0047FF7C skipproc
    .space 4
    .size ustrptr, 4
    .type ustrptr, @object

    .balign 4
# 1001C300
glabel perm_heap
    # 0040C254 setbit
    # 0040C4C4 checkbvlist
    # 0040F610 formbvlivran
    # 0040F7B8 checkinitbvlivran
    # 00414108 func_00414108
    # 0042020C gen_static_link
    # 00425618 func_00425618
    # 00426DE8 func_00426DE8
    # 0042EB10 incorp_feedback
    # 0042F424 appendgraph
    # 0042F6CC controlflow
    # 00430680 func_00430680
    # 00434434 func_00434434
    # 0043771C optinit
    # 00439188 procinit
    # 0043A0CC copyline
    # 0043A88C insert_outparlist
    # 0043AA18 appendstorelist
    # 0043AAF4 appendbbvarlst
    # 0043B15C func_0043B15C
    # 0043B2B8 func_0043B2B8
    # 0043C248 func_0043C248
    # 0043C56C func_0043C56C
    # 0043CA8C func_0043CA8C
    # 0043CFCC readnxtinst
    # 00444984 appendichain
    # 00445AEC trep_image
    # 00445E44 exprimage
    # 0044EDF8 ilodfold
    # 00453B04 func_00453B04
    # 00456310 func_00456310
    # 00456A2C oneproc
    # 0045877C searchmtag_parm
    # 00458998 func_00458998
    # 00458B88 assign_mtag
    # 004590C8 searchproc
    # 00459360 insertijplab
    # 00459400 updatelab
    # 00459C9C enterfsymtab
    # 00459E84 enter_gp_rel_tab
    # 0045A25C insertcallee
    # 0045B978 mergecallees
    # 0045BCA8 func_0045BCA8
    # 0045C150 prepass
    # 0045DA18 formlivbb
    # 0045E5C4 func_0045E5C4
    # 0045FBB4 func_0045FBB4
    # 0046123C func_0046123C
    # 00464AD4 alloc_livbb
    # 00464BFC localcolor
    # 00465CB8 insintf
    # 00465E50 spilltemps
    # 00467F04 split
    # 00469198 put_in_fallthru_bb
    # 0046920C put_in_jump_bb
    # 00469280 globalcolor
    # 0046F994 create_edge
    # 0046FA20 new_header_node
    # 0046FB40 record_labels
    # 004713E8 loopunroll
    # 00474FC8 func_00474FC8
    # 00475680 getexpsources
    # 0047606C func_0047606C
    # 004761D0 tail_recursion
    # 00476CA0 gettemp
    # 00477E20 func_00477E20
    # 0047BEF4 appendchain
    # 0047CDA4 extendstat
    # 0047CF0C newbit
    # 0047DBB4 getoption
    .space 4
    .size perm_heap, 4
    .type perm_heap, @object

    .balign 4
# 1001C304
glabel heapptr
    # 0043771C optinit
    # 00456A2C oneproc
    .space 4
    .size heapptr, 4
    .type heapptr, @object

    .balign 4
# 1001C308
glabel endblock
    # 00439C40 getop
    # 0043CFCC readnxtinst
    # 00456310 func_00456310
    # 00456A2C oneproc
    .space 4
    .size endblock, 4
    .type endblock, @object

    .balign 4
# 1001C30C
glabel ustackbot
    # 0043771C optinit
    # 00439188 procinit
    # 00439C40 getop
    # 0043CFCC readnxtinst
    # 00456A2C oneproc
    .space 4
    .size ustackbot, 4
    .type ustackbot, @object

    .balign 4
# 1001C310
glabel ustack
    # 0043771C optinit
    # 00439188 procinit
    # 00439C40 getop
    # 0043B15C func_0043B15C
    # 0043B1DC func_0043B1DC
    # 0043B23C func_0043B23C
    # 0043CE64 func_0043CE64
    # 0043CFCC readnxtinst
    # 00456A2C oneproc
    .space 4
    .size ustack, 4
    .type ustack, @object

    .balign 4
# 1001C314
glabel parstackbot
    # 0043771C optinit
    # 00439188 procinit
    # 0043CFCC readnxtinst
    .space 4
    .size parstackbot, 4
    .type parstackbot, @object

    .balign 4
# 1001C318
glabel parstack
    # 0043771C optinit
    # 00439188 procinit
    # 0043B2B8 func_0043B2B8
    # 0043CFCC readnxtinst
    .space 4
    .size parstack, 4
    .type parstack, @object

    .balign 4
# 1001C31C
glabel tempdisp
    # 0041FC80 genloadaddr
    # 004205F8 genrlodrstr
    # 0042A1C8 func_0042A1C8
    # 0042A4CC func_0042A4CC
    # 0042A7D0 func_0042A7D0
    # 00439188 procinit
    # 0043CFCC readnxtinst
    # 0045E5C4 func_0045E5C4
    # 0045FBB4 func_0045FBB4
    # 0046123C func_0046123C
    # 00465E50 spilltemps
    # 004713E8 loopunroll
    # 004761D0 tail_recursion
    # 00476CA0 gettemp
    .space 4
    .size tempdisp, 4
    .type tempdisp, @object

    .balign 4
# 1001C320
glabel templochead
    # 00439188 procinit
    # 00465E18 func_00465E18
    # 00465E50 spilltemps
    # 00476AA0 findbbtemps
    # 00476CA0 gettemp
    .space 4
    .size templochead, 4
    .type templochead, @object

    .balign 4
# 1001C324
glabel temploctail
    # 00439188 procinit
    # 00465E50 spilltemps
    # 00476CA0 gettemp
    .space 4
    .size temploctail, 4
    .type temploctail, @object

    .balign 4
# 1001C328
glabel curlevel
    # 004175BC copypropagate
    # 0042020C gen_static_link
    # 0042BF08 reemit
    # 00431508 func_00431508
    # 004324F4 findinduct
    # 0043771C optinit
    # 0043A0CC copyline
    # 0043CFCC readnxtinst
    # 004471AC codeimage
    # 0044B4F4 clkilled
    # 0044CD14 listplkilled
    # 0044D4B4 listpskilled
    # 00454D08 func_00454D08
    # 0045C8A0 lvalaltered
    # 0045CD78 expaltered
    # 0045D208 patchvectors
    # 004638C0 regdataflow
    # 004710F0 str_to_temporary
    # 004737E0 par_to_str
    # 00473D84 func_00473D84
    # 0047CE98 blktolev
    .space 4
    .size curlevel, 4
    .type curlevel, @object

    .balign 4
# 1001C32C
glabel curblk
    # 0041550C func_0041550C
    # 004175BC copypropagate
    # 0041EC10 igen3
    # 0041EE30 outparlod
    # 0041FB20 spilltemplodstr
    # 0041FC80 genloadaddr
    # 0042020C gen_static_link
    # 004205F8 genrlodrstr
    # 00420A3C prolog
    # 00421C00 epilog
    # 004230F0 func_004230F0
    # 00426FA4 func_00426FA4
    # 0042A1C8 func_0042A1C8
    # 0042A4CC func_0042A4CC
    # 0042A7D0 func_0042A7D0
    # 0042B2C0 func_0042B2C0
    # 0042B890 func_0042B890
    # 0042BB4C func_0042BB4C
    # 0042BF08 reemit
    # 00439FA4 formal_parm_vreg
    # 0043A0CC copyline
    # 0043ABD0 incroccurrence
    # 0043CBFC func_0043CBFC
    # 0043CFCC readnxtinst
    # 004494A4 aliaswithptr
    # 00458998 func_00458998
    # 0045DA18 formlivbb
    # 00464BFC localcolor
    # 00468A14 cupcosts
    # 00469280 globalcolor
    # 004710F0 str_to_temporary
    # 004737E0 par_to_str
    # 00473F04 pmov_to_mov
    # 00475B80 next_stmt_is_ret1
    # 00475C80 next_stmt_is_ret
    # 00475DD0 no_ref_param
    # 00475E38 func_00475E38
    # 004761D0 tail_recursion
    # 0047D610 searchvar
    # 0047FF7C skipproc
    .space 4
    .size curblk, 4
    .type curblk, @object

    .balign 4
# 1001C330
glabel entnam0len
    # 004175BC copypropagate
    # 0042BF08 reemit
    # 0042F6CC controlflow
    # 0043A0CC copyline
    # 00456A2C oneproc
    # 00458678 mtagwarning
    # 0045B508 oneprocprepass
    # 0045C804 proc_suppressed
    # 004713E8 loopunroll
    # 0047B320 stackerror
    # 0047B3F8 boundswarning
    # 0047B51C ovfwwarning
    # 0047BDF8 dbgerror
    # 0047FF7C skipproc
    .space 4
    .size entnam0len, 4
    .type entnam0len, @object

    .balign 4
# 1001C334
glabel realstore
    # 00414108 func_00414108
    # 0041C914 printregs
    # 0041FD3C genloadnum
    # 00439188 procinit
    # 0043B084 func_0043B084
    # 0047F8E4 getfloatval
    .space 4
    .size realstore, 4
    .type realstore, @object

    .balign 4
# 1001C338
glabel currealpool
    # 00439188 procinit
    # 0043C248 func_0043C248
    # 0043C56C func_0043C56C
    # 0043CFCC readnxtinst
    .space 4
    .size currealpool, 4
    .type currealpool, @object

    .balign 4
# 1001C33C
glabel realdispdiv
    # 00439188 procinit
    # 0043C248 func_0043C248
    # 0043C56C func_0043C56C
    # 0043CFCC readnxtinst
    .space 4
    .size realdispdiv, 4
    .type realdispdiv, @object

    .balign 4
# 1001C340
glabel realdispmod
    # 00439188 procinit
    # 0043C248 func_0043C248
    # 0043C56C func_0043C56C
    # 0043CFCC readnxtinst
    .space 4
    .size realdispmod, 4
    .type realdispmod, @object

    .balign 4
# 1001C344
glabel strpdisplace
    # 0041FD3C genloadnum
    # 0042BF08 reemit
    # 00439188 procinit
    # 0043CFCC readnxtinst
    .space 4
    .size strpdisplace, 4
    .type strpdisplace, @object

    .balign 4
# 1001C348
glabel filteringout
    # 0043771C optinit
    # 00452DAC constarith
    # 00456310 func_00456310
    # 00456A2C oneproc
    .space 4
    .size filteringout, 4
    .type filteringout, @object

    .balign 4
# 1001C34C
glabel time1
    # 004175BC copypropagate
    # 00456A2C oneproc
    .space 4
    .size time1, 4
    .type time1, @object

    .balign 4
# 1001C350
glabel timer
    # 0045806C main
    .space 4
    .size timer, 4
    .type timer, @object

    .balign 4
# 1001C354
glabel lasttime
    # 004175BC copypropagate
    # 00456A2C oneproc
    .space 4
    .size lasttime, 4
    .type lasttime, @object

    .balign 4
# 1001C358
glabel graphhead
    # 00410204 codemotion
    # 004175BC copypropagate
    # 0041B8C8 printlinfo
    # 0041BC58 printhoist
    # 0041BEF4 printprecm
    # 0041C1B0 printcm
    # 0041C688 printscm
    # 0041C914 printregs
    # 0041D758 printsav
    # 0042020C gen_static_link
    # 00420A3C prolog
    # 00421C00 epilog
    # 0042BF08 reemit
    # 0042F0FC bb_frequencies
    # 0042F310 ingraph
    # 0042F424 appendgraph
    # 0042F6CC controlflow
    # 004324F4 findinduct
    # 00439188 procinit
    # 0043CFCC readnxtinst
    # 00455D38 analoop
    # 0045D208 patchvectors
    # 0045FBB4 func_0045FBB4
    # 00461778 func_00461778
    # 00461AAC makelivranges
    # 004638C0 regdataflow
    # 00464BFC localcolor
    # 00465E50 spilltemps
    # 00468A14 cupcosts
    # 00469280 globalcolor
    # 004713E8 loopunroll
    # 00474110 opt_saved_regs
    # 00475680 getexpsources
    # 004761D0 tail_recursion
    # 00479DC4 eliminduct
    .space 4
    .size graphhead, 4
    .type graphhead, @object

    .balign 4
# 1001C35C
glabel graphtail
    # 00410204 codemotion
    # 004175BC copypropagate
    # 0042F424 appendgraph
    # 0042F5D4 func_0042F5D4
    # 0042F6CC controlflow
    # 004324F4 findinduct
    # 00439188 procinit
    # 0043CA8C func_0043CA8C
    # 0043CFCC readnxtinst
    # 00456310 func_00456310
    # 00456A2C oneproc
    # 004638C0 regdataflow
    # 004713E8 loopunroll
    # 00474110 opt_saved_regs
    # 00475680 getexpsources
    # 00479DC4 eliminduct
    .space 4
    .size graphtail, 4
    .type graphtail, @object

    .balign 4
# 1001C360
glabel curgraphnode
    # 00439188 procinit
    # 0043AA18 appendstorelist
    # 0043AAF4 appendbbvarlst
    # 0043ABD0 incroccurrence
    # 0043B334 func_0043B334
    # 0043B504 func_0043B504
    # 0043CA8C func_0043CA8C
    # 0043CBFC func_0043CBFC
    # 0043CE64 func_0043CE64
    # 0043CFCC readnxtinst
    # 00445E44 exprimage
    # 004471AC codeimage
    # 0044B25C movkillprev
    # 0044B308 strkillprev
    # 0044B448 lodkillprev
    # 0044C4D8 cupkillprev
    # 0044C648 ciakillprev
    # 0044D6EC parkillprev
    # 00452DAC constarith
    # 00456310 func_00456310
    # 00456A2C oneproc
    # 0046C710 unroll_searchloop
    # 0046D158 unroll_check_istr_propcopy
    # 0046D2C0 unroll_check_irst_propcopy
    # 0046D428 oneloopblockexpr
    # 0046E77C oneloopblockstmt
    # 0046FA20 new_header_node
    # 0046FC38 new_set_of_labels
    # 0046FCD4 link_jump_in_loop
    # 00470048 pre_loopblock
    # 00470248 post_loopblock
    # 0047090C form_bop
    # 00470AAC form_rem
    # 00470DD8 form_neq0
    # 00470F88 form_neg
    # 004710F0 str_to_temporary
    # 004713E8 loopunroll
    # 00473504 func_00473504
    # 004737E0 par_to_str
    # 00473D84 func_00473D84
    # 00473F04 pmov_to_mov
    # 004761D0 tail_recursion
    # 0047CDA4 extendstat
    # 0047E3BC binopwithconst
    .space 4
    .size curgraphnode, 4
    .type curgraphnode, @object

    .balign 4
# 1001C364
glabel curstaticno
    # 0042F6CC controlflow
    # 00439188 procinit
    # 0043CFCC readnxtinst
    # 00445E44 exprimage
    # 00455D38 analoop
    # 00456310 func_00456310
    # 00456A2C oneproc
    # 00461AAC makelivranges
    # 00464BFC localcolor
    # 00467008 updatelivran
    # 0046791C whyuncolored
    # 00467F04 split
    # 00468A14 cupcosts
    # 00469280 globalcolor
    # 0046FA20 new_header_node
    # 004713E8 loopunroll
    # 004761D0 tail_recursion
    .space 4
    .size curstaticno, 4
    .type curstaticno, @object

    .balign 4
# 1001C368
glabel curloopno
    # 00448C94 find_ix_loadstores
    # 00453B04 func_00453B04
    # 00475680 getexpsources
    .space 4
    .size curloopno, 4
    .type curloopno, @object

    .balign 4
# 1001C36C
glabel stathead
    # 00439188 procinit
    # 004761D0 tail_recursion
    # 0047CDA4 extendstat
    .space 4
    .size stathead, 4
    .type stathead, @object

    .balign 4
# 1001C370
glabel stattail
    # 00439188 procinit
    # 0043AA18 appendstorelist
    # 0043CFCC readnxtinst
    # 00456310 func_00456310
    # 0046E77C oneloopblockstmt
    # 0046FCD4 link_jump_in_loop
    # 00470048 pre_loopblock
    # 00470248 post_loopblock
    # 004704B0 termination_test
    # 004710F0 str_to_temporary
    # 004713E8 loopunroll
    # 004737E0 par_to_str
    # 00473F04 pmov_to_mov
    # 004761D0 tail_recursion
    # 0047CDA4 extendstat
    .space 4
    .size stattail, 4
    .type stattail, @object

    .balign 4
# 1001C378
glabel staticlinkloc
    # 0042020C gen_static_link
    # 00420A3C prolog
    # 0042BF08 reemit
    # 00439188 procinit
    # 0043CBFC func_0043CBFC
    # 0043CFCC readnxtinst
    # 0045DA18 formlivbb
    # 004638C0 regdataflow
    # 00464BFC localcolor
    .space 4
    .size staticlinkloc, 4
    .type staticlinkloc, @object

    .balign 4
# 1001C37C
glabel nocopy
    # 0040F8D0 resetsubdelete
    # 004120E0 entryav
    # 004121E4 entryant
    # 0041297C func_0041297C
    # 00412B18 func_00412B18
    # 00413000 exprdelete
    # 00413510 func_00413510
    # 004135CC func_004135CC
    # 0041550C func_0041550C
    # 0041AC2C printtab
    # 0042305C func_0042305C
    # 004230F0 func_004230F0
    # 00424FFC func_00424FFC
    # 0043771C optinit
    # 00445AEC trep_image
    # 0044821C expr_has_direct_usage
    # 0044EDF8 ilodfold
    # 0045E0B8 varappear
    # 0045E5C4 func_0045E5C4
    # 00461AAC makelivranges
    # 00477E20 func_00477E20
    # 0047847C func_0047847C
    # 004787B0 func_004787B0
    # 00478820 func_00478820
    # 004793C4 func_004793C4
    # 00479778 func_00479778
    # 00479B80 func_00479B80
    # 0047C6E8 decreasecount
    # 0047D000 exproccurred
    # 0047D878 deccount
    .space 4
    .size nocopy, 4
    .type nocopy, @object

    .balign 4
# 1001C380
glabel nota_candof
    # 004230F0 func_004230F0
    # 00426FA4 func_00426FA4
    # 0042B2C0 func_0042B2C0
    # 0043771C optinit
    # 0045E5C4 func_0045E5C4
    # 0045FBB4 func_0045FBB4
    # 0046123C func_0046123C
    # 00474FC8 func_00474FC8
    .space 4
    .size nota_candof, 4
    .type nota_candof, @object

    .balign 4
# 1001C384
glabel constprop
    # 004150E4 func_004150E4
    # 0041550C func_0041550C
    # 0043771C optinit
    .space 4
    .size constprop, 4
    .type constprop, @object

    .balign 4
# 1001C388
glabel maxlabnam
    # 0042BF08 reemit
    # 0045A480 oneinstruction
    # 0045C150 prepass
    # 0046FC38 new_set_of_labels
    # 004713E8 loopunroll
    # 004761D0 tail_recursion
    .space 4
    .size maxlabnam, 4
    .type maxlabnam, @object

    .balign 4
# 1001C38C
glabel dft_livbb
    # 0043771C optinit
    # 00464718 gettolivbb
    # 00464AD4 alloc_livbb
    # 00464BFC localcolor
    # 004669A8 addadjacents
    # 00469280 globalcolor
    .space 4
    .size dft_livbb, 4
    .type dft_livbb, @object

    .balign 4
# 1001C390
glabel bitposcount
    # 00410204 codemotion
    # 004123C4 varinsert
    # 004175BC copypropagate
    # 0041A410 printitab
    # 0041B580 printbv
    # 004324F4 findinduct
    # 00439188 procinit
    # 00448530 has_direct_induct_usage
    # 00448928 check_loop_induct_usages
    # 0045D208 patchvectors
    # 00461AAC makelivranges
    # 004638C0 regdataflow
    # 00464BFC localcolor
    # 00465E50 spilltemps
    # 00469280 globalcolor
    # 00474FC8 func_00474FC8
    # 00477E20 func_00477E20
    # 00478ED4 func_00478ED4
    # 00478FA0 func_00478FA0
    # 00479DC4 eliminduct
    # 0047CF0C newbit
    .space 4
    .size bitposcount, 4
    .type bitposcount, @object

    .balign 4
# 1001C394
glabel oldbitposcount
    # 004150E4 func_004150E4
    # 0041550C func_0041550C
    # 004175BC copypropagate
    # 0041C914 printregs
    # 00469280 globalcolor
    .space 4
    .size oldbitposcount, 4
    .type oldbitposcount, @object

    .balign 4
# 1001C398
glabel firstconstbit
    # 0041C914 printregs
    # 0042AADC func_0042AADC
    # 0045E1F8 caninsertearly
    # 00461AAC makelivranges
    # 00465E50 spilltemps
    # 00476AA0 findbbtemps
    .space 4
    .size firstconstbit, 4
    .type firstconstbit, @object

    .balign 4
# 1001C3A0
glabel bittab
    # 00410204 codemotion
    # 004123C4 varinsert
    # 004175BC copypropagate
    # 0041A410 printitab
    # 0041C914 printregs
    # 004230F0 func_004230F0
    # 00426FA4 func_00426FA4
    # 0042AADC func_0042AADC
    # 0042B2C0 func_0042B2C0
    # 004324F4 findinduct
    # 00439188 procinit
    # 00448530 has_direct_induct_usage
    # 00448928 check_loop_induct_usages
    # 0045D208 patchvectors
    # 0045DA18 formlivbb
    # 0045E1F8 caninsertearly
    # 0045E5C4 func_0045E5C4
    # 0045FBB4 func_0045FBB4
    # 0046123C func_0046123C
    # 00461AAC makelivranges
    # 004638C0 regdataflow
    # 00464BFC localcolor
    # 00465E50 spilltemps
    # 00469280 globalcolor
    # 00474FC8 func_00474FC8
    # 00476AA0 findbbtemps
    # 00477E20 func_00477E20
    # 00478ED4 func_00478ED4
    # 00478FA0 func_00478FA0
    # 00479DC4 eliminduct
    # 0047CF0C newbit
    .space 4
    .size bittab, 4
    .type bittab, @object

    .balign 4
# 1001C3A4
glabel bittabsize
    # 00439188 procinit
    # 0047CF0C newbit
    .space 4
    .size bittabsize, 4
    .type bittabsize, @object

    .balign 4
# 1001C3A8
glabel pdeftab
    # 004175BC copypropagate
    # 00420A3C prolog
    # 00421C00 epilog
    # 00439188 procinit
    # 0043A0CC copyline
    # 0045DA18 formlivbb
    # 004761D0 tail_recursion
    # 0047DBB4 getoption
    .space 4
    .size pdeftab, 4
    .type pdeftab, @object

    .balign 4
# 1001C3AC
glabel pdeftabsize
    # 00439188 procinit
    # 0043A0CC copyline
    # 0047DBB4 getoption
    .space 4
    .size pdeftabsize, 4
    .type pdeftabsize, @object

    .balign 4
# 1001C3B0
glabel highestmdef
    # 0041EC10 igen3
    # 0041EE30 outparlod
    # 0041FB20 spilltemplodstr
    # 0041FC80 genloadaddr
    # 0042020C gen_static_link
    # 004205F8 genrlodrstr
    # 004230F0 func_004230F0
    # 00426FA4 func_00426FA4
    # 0042A1C8 func_0042A1C8
    # 0042A4CC func_0042A4CC
    # 0042A7D0 func_0042A7D0
    # 0042B2C0 func_0042B2C0
    # 0042B890 func_0042B890
    # 0042BB4C func_0042BB4C
    # 0042BF08 reemit
    # 00439188 procinit
    # 0047DBB4 getoption
    .space 4
    .size highestmdef, 4
    .type highestmdef, @object

    .balign 4
# 1001C3B4
glabel pdefmax
    # 00420A3C prolog
    # 00421C00 epilog
    # 00439188 procinit
    # 0043A0CC copyline
    # 0045DA18 formlivbb
    # 004761D0 tail_recursion
    # 0047DBB4 getoption
    .space 4
    .size pdefmax, 4
    .type pdefmax, @object

    .balign 4
# 1001C3B8
glabel pdefno
    # 00439188 procinit
    # 0043A0CC copyline
    .space 4
    .size pdefno, 4
    .type pdefno, @object

    .balign 4
# 1001C3BC
glabel toplevelloops
    # 00453B04 func_00453B04
    # 00456A2C oneproc
    # 00475680 getexpsources
    .space 4
    .size toplevelloops, 4
    .type toplevelloops, @object

    .balign 4
# 1001C3C0
glabel looptab
    # 0042AADC func_0042AADC
    # 0042B890 func_0042B890
    # 0042BE58 func_0042BE58
    # 00448C94 find_ix_loadstores
    # 0046123C func_0046123C
    # 00474FC8 func_00474FC8
    # 0047558C func_0047558C
    # 00475680 getexpsources
    # 004804CC check_ix_candidate
    # 00480540 check_loop_nest_ix_cand
    # 00480624 check_ix_source
    # 00480698 get_ix_source
    .space 4
    .size looptab, 4
    .type looptab, @object

    .balign 4
# 1001C3C4
glabel actnuminteeregs
    # 00434720 processargs
    # 0043771C optinit
    # 004394FC procinit_regs
    .space 4
    .size actnuminteeregs, 4
    .type actnuminteeregs, @object

    .balign 4
# 1001C3C8
glabel actnuminterregs
    # 00434720 processargs
    # 0043771C optinit
    # 004394FC procinit_regs
    .space 4
    .size actnuminterregs, 4
    .type actnuminterregs, @object

    .balign 4
# 1001C3D0
glabel regsinclass1
    # 0042BF08 reemit
    # 0043771C optinit
    # 004394FC procinit_regs
    # 00469280 globalcolor
    .space 4
    .size regsinclass1, 4
    .type regsinclass1, @object

    .balign 4
# 1001C3D8
glabel ugen_saved_eeregs
    # 00420A3C prolog
    # 0042A7D0 func_0042A7D0
    # 0042BF08 reemit
    # 00474110 opt_saved_regs
    .space 4
    .size ugen_saved_eeregs, 4
    .type ugen_saved_eeregs, @object

    .balign 4
# 1001C3DC
glabel movcostused
    # 0043771C optinit
    # 004676CC compute_save
    # 00468A14 cupcosts
    # 00469280 globalcolor
    # 0047DBB4 getoption
    .space 4
    .size movcostused, 4
    .type movcostused, @object

    .balign 4
# 1001C3E0
glabel passedbyfp
    # 00439188 procinit
    # 0043A0CC copyline
    .space 4
    .size passedbyfp, 4
    .type passedbyfp, @object

    .balign 4
# 1001C3E4
glabel offsetpassedbyint
    # 00420A3C prolog
    # 00421C00 epilog
    # 00439188 procinit
    # 0043A0CC copyline
    # 0045FBB4 func_0045FBB4
    # 00461AAC makelivranges
    # 00464BFC localcolor
    .space 4
    .size offsetpassedbyint, 4
    .type offsetpassedbyint, @object

    .balign 4
# 1001C3E8
glabel tempcount
    # 00465E50 spilltemps
    # 00476CA0 gettemp
    .space 4
    .size tempcount, 4
    .type tempcount, @object

    .balign 4
# 1001C3EC
glabel aentptr
    # 004175BC copypropagate
    # 00439188 procinit
    # 0043A0CC copyline
    # 0043CFCC readnxtinst
    # 0044B4F4 clkilled
    # 0044BDFC cskilled
    .space 4
    .size aentptr, 4
    .type aentptr, @object

    .balign 4
# 1001C3F0
glabel curmst
    # 0042269C gen_outparcode
    # 0042BF08 reemit
    # 00439188 procinit
    # 00439C40 getop
    # 0043CFCC readnxtinst
    .space 4
    .size curmst, 4
    .type curmst, @object

    .balign 4
# 1001C3F4
glabel parnumber
    .space 4
    .size parnumber, 4
    .type parnumber, @object

    .balign 4
# 1001C3F8
glabel numintval
    # 00453430 func_00453430
    # 00455D38 analoop
    # 00474110 opt_saved_regs
    .space 4
    .size numintval, 4
    .type numintval, @object

    .balign 4
# 1001C3FC
glabel noop
    # 00425618 func_00425618
    # 00426FA4 func_00426FA4
    # 00451764 func_00451764
    # 0045FBB4 func_0045FBB4
    .space 4
    .size noop, 4
    .type noop, @object

    .balign 4
# 1001C400
glabel curlocpg
    # 004175BC copypropagate
    # 0042BF08 reemit
    # 0043A0CC copyline
    # 0043CFCC readnxtinst
    # 00452DAC constarith
    .space 4
    .size curlocpg, 4
    .type curlocpg, @object

    .balign 4
# 1001C404
glabel curlocln
    # 004175BC copypropagate
    # 0042BF08 reemit
    # 0042F374 init_graphnode
    # 0043A0CC copyline
    # 0043CFCC readnxtinst
    # 00452DAC constarith
    # 0047B3F8 boundswarning
    # 0047B51C ovfwwarning
    .space 4
    .size curlocln, 4
    .type curlocln, @object

    .balign 4
# 1001C408
glabel loc_not_yet_seen
    # 0043CFCC readnxtinst
    # 00456A2C oneproc
    .space 4
    .size loc_not_yet_seen, 4
    .type loc_not_yet_seen, @object

    .balign 4
# 1001C40C
glabel bitvectorsize
    # 0040C254 setbit
    # 0040C4C4 checkbvlist
    # 0043A0CC copyline
    # 0047CF0C newbit
    .space 4
    .size bitvectorsize, 4
    .type bitvectorsize, @object

    .balign 4
# 1001C410
glabel bvlivransize
    # 0040F610 formbvlivran
    # 0040F7B8 checkinitbvlivran
    # 00455D38 analoop
    # 00456A2C oneproc
    # 00461AAC makelivranges
    .space 4
    .size bvlivransize, 4
    .type bvlivransize, @object

    .balign 4
# 1001C414
glabel suppressopt
    # 00434720 processargs
    # 0043771C optinit
    # 0045806C main
    .space 4
    .size suppressopt, 4
    .type suppressopt, @object

    .balign 4
# 1001C418
glabel o0o1specified
    # 00434720 processargs
    # 0043771C optinit
    # 0045806C main
    .space 4
    .size o0o1specified, 4
    .type o0o1specified, @object

    .balign 4
# 1001C41C
glabel lang
    # 00410204 codemotion
    # 004175BC copypropagate
    # 0041EC10 igen3
    # 0041F22C base_noalias
    # 0041F530 base_gp_noalias
    # 0041F5E4 base_sp_noalias
    # 00420A3C prolog
    # 0042BF08 reemit
    # 00431508 func_00431508
    # 004324F4 findinduct
    # 00434720 processargs
    # 0043771C optinit
    # 0043A0CC copyline
    # 0043CFCC readnxtinst
    # 004471AC codeimage
    # 0044938C overlapping
    # 004494A4 aliaswithptr
    # 0044962C pointtoheap
    # 004496F0 slkilled
    # 0044A5C8 smkilled
    # 0044AAD0 sskilled
    # 0044B4F4 clkilled
    # 0044BD00 cmkilled
    # 0044BDFC cskilled
    # 0044C6D4 func_0044C6D4
    # 0044CD14 listplkilled
    # 0044CE80 func_0044CE80
    # 0044D0C4 func_0044D0C4
    # 0044D4B4 listpskilled
    # 00454D08 func_00454D08
    # 00455060 func_00455060
    # 00458B88 assign_mtag
    # 004590C8 searchproc
    # 0045A480 oneinstruction
    # 0045B508 oneprocprepass
    # 0045BCA8 func_0045BCA8
    # 0045BE98 processcallgraph
    # 0045C8A0 lvalaltered
    # 0045CD78 expaltered
    # 0045D208 patchvectors
    # 0045DA18 formlivbb
    # 00461778 func_00461778
    # 00461AAC makelivranges
    # 004638C0 regdataflow
    # 00468A14 cupcosts
    # 00474110 opt_saved_regs
    # 004761D0 tail_recursion
    # 0047DBB4 getoption
    .space 4
    .size lang, 4
    .type lang, @object

    .balign 4
# 1001C420
glabel inlopt
    # 004496F0 slkilled
    # 0044AAD0 sskilled
    # 0044EDF8 ilodfold
    # 00456A2C oneproc
    # 00459698 make_subloc_veqv
    # 00459828 insertvar
    # 0045C150 prepass
    .space 4
    .size inlopt, 4
    .type inlopt, @object

    .balign 4
# 1001C424
glabel listwritten
    # 004175BC copypropagate
    # 00434720 processargs
    # 00455518 func_00455518
    # 00456A2C oneproc
    # 0045806C main
    # 004713E8 loopunroll
    # 004761D0 tail_recursion
    # 0047DBB4 getoption
    .space 4
    .size listwritten, 4
    .type listwritten, @object

    .balign 4
# 1001C428
glabel symwritten
    # 00434720 processargs
    .space 4
    .size symwritten, 4
    .type symwritten, @object

    .balign 4
# 1001C42C
glabel usefeedback
    # 0042BF08 reemit
    # 00434720 processargs
    # 0043771C optinit
    # 00453C20 func_00453C20
    # 00453ECC func_00453ECC
    # 00456A2C oneproc
    # 00469280 globalcolor
    .space 4
    .size usefeedback, 4
    .type usefeedback, @object

    .balign 4
# 1001C430
glabel varrefs
    # 00439C40 getop
    # 0043CFCC readnxtinst
    # 00456310 func_00456310
    .space 4
    .size varrefs, 4
    .type varrefs, @object

    .balign 4
# 1001C434
glabel totalvarref
    .space 4
    .size totalvarref, 4
    .type totalvarref, @object

    .balign 4
# 1001C438
glabel varreflimit
    # 00434720 processargs
    # 0043771C optinit
    # 00456310 func_00456310
    .space 4
    .size varreflimit, 4
    .type varreflimit, @object

    .balign 4
# 1001C43C
glabel curvarreflimit
    # 00439C40 getop
    # 00456310 func_00456310
    .space 4
    .size curvarreflimit, 4
    .type curvarreflimit, @object

    .balign 4
# 1001C440
glabel docopyprog
    # 004175BC copypropagate
    # 0043771C optinit
    # 0047DBB4 getoption
    .space 4
    .size docopyprog, 4
    .type docopyprog, @object

    .balign 4
# 1001C444
glabel dordstore
    # 004175BC copypropagate
    # 00434720 processargs
    # 0043771C optinit
    # 00479DC4 eliminduct
    # 0047DBB4 getoption
    .space 4
    .size dordstore, 4
    .type dordstore, @object

    .balign 4
# 1001C448
glabel doscm
    # 0043771C optinit
    # 0047DBB4 getoption
    .space 4
    .size doscm, 4
    .type doscm, @object

    .balign 4
# 1001C44C
glabel docm
    # 00410204 codemotion
    # 0043771C optinit
    # 0047DBB4 getoption
    .space 4
    .size docm, 4
    .type docm, @object

    .balign 4
# 1001C450
glabel at_proc_to_print
    # 0041A410 printitab
    # 0041AC2C printtab
    # 0041B8C8 printlinfo
    # 0041BC58 printhoist
    # 0041BEF4 printprecm
    # 0041C1B0 printcm
    # 0041C688 printscm
    # 0041C914 printregs
    # 0041D560 printinterproc
    # 0041D758 printsav
    # 0043A0CC copyline
    # 004713E8 loopunroll
    .space 4
    .size at_proc_to_print, 4
    .type at_proc_to_print, @object

    .balign 4
# 1001C454
glabel ctrl_head
    # 00434434 func_00434434
    # 0043771C optinit
    # 00456A2C oneproc
    # 0045B508 oneprocprepass
    # 0045C804 proc_suppressed
    .space 4
    .size ctrl_head, 4
    .type ctrl_head, @object

    .balign 4
# 1001C458
glabel dbugno
    # 00410204 codemotion
    # 004324F4 findinduct
    # 0043771C optinit
    # 00456A2C oneproc
    # 00467C34 needsplit
    # 00467F04 split
    # 00469280 globalcolor
    # 004713E8 loopunroll
    # 0047DBB4 getoption
    .space 4
    .size dbugno, 4
    .type dbugno, @object

    .balign 4
# 1001C45C
glabel genbbnum
    # 0042BF08 reemit
    # 00434720 processargs
    # 0043771C optinit
    .space 4
    .size genbbnum, 4
    .type genbbnum, @object

    .balign 4
# 1001C460
glabel doingcopy
    # 0041550C func_0041550C
    # 00434720 processargs
    # 0043771C optinit
    # 0043ABD0 incroccurrence
    # 0043CFCC readnxtinst
    .space 4
    .size doingcopy, 4
    .type doingcopy, @object

    .balign 4
# 1001C464
glabel doassoc
    # 00434720 processargs
    # 0043771C optinit
    # 0044F738 linearize
    .space 4
    .size doassoc, 4
    .type doassoc, @object

    .balign 4
# 1001C468
glabel doprecolor
    # 00434720 processargs
    # 0043771C optinit
    # 0045FBB4 func_0045FBB4
    # 00461AAC makelivranges
    # 00464BFC localcolor
    .space 4
    .size doprecolor, 4
    .type doprecolor, @object

    .balign 4
# 1001C46C
glabel dorlodrstropt
    # 00434720 processargs
    # 0043771C optinit
    # 00469280 globalcolor
    .space 4
    .size dorlodrstropt, 4
    .type dorlodrstropt, @object

    .balign 4
# 1001C470
glabel doheurab
    # 00434720 processargs
    # 0043771C optinit
    # 004669A8 addadjacents
    .space 4
    .size doheurab, 4
    .type doheurab, @object

    .balign 4
# 1001C474
glabel docreatebb
    # 00434720 processargs
    # 0043771C optinit
    # 00466DF8 allpreppout
    # 00469280 globalcolor
    .space 4
    .size docreatebb, 4
    .type docreatebb, @object

    .balign 4
# 1001C478
glabel do_opt_saved_regs
    # 0042B1A8 func_0042B1A8
    # 0042BF08 reemit
    # 00434720 processargs
    # 0043771C optinit
    # 00474110 opt_saved_regs
    .space 4
    .size do_opt_saved_regs, 4
    .type do_opt_saved_regs, @object

    .balign 4
# 1001C47C
glabel do_const_in_reg
    # 00434720 processargs
    # 0043771C optinit
    # 0045E45C func_0045E45C
    # 0047E6D8 constinreg
    # 0047E87C ldainreg
    .space 4
    .size do_const_in_reg, 4
    .type do_const_in_reg, @object

    .balign 4
# 1001C480
glabel docodehoist
    # 00410204 codemotion
    # 0041C1B0 printcm
    # 004324F4 findinduct
    # 00434720 processargs
    # 0043771C optinit
    .space 4
    .size docodehoist, 4
    .type docodehoist, @object

    .balign 4
# 1001C484
glabel dorecur
    # 00431508 func_00431508
    # 00434720 processargs
    # 0043771C optinit
    .space 4
    .size dorecur, 4
    .type dorecur, @object

    .balign 4
# 1001C488
glabel dogenvreg
    # 0041EC10 igen3
    # 0041FB20 spilltemplodstr
    # 0042B2C0 func_0042B2C0
    # 0042B890 func_0042B890
    # 0042BB4C func_0042BB4C
    # 00434720 processargs
    # 0043771C optinit
    .space 4
    .size dogenvreg, 4
    .type dogenvreg, @object

    .balign 4
# 1001C48C
glabel dotail
    # 00434720 processargs
    # 0043771C optinit
    # 004761D0 tail_recursion
    .space 4
    .size dotail, 4
    .type dotail, @object

    .balign 4
# 1001C490
glabel domtag
    # 00434720 processargs
    # 0043771C optinit
    # 004584D0 init_mtagtab
    # 0045877C searchmtag_parm
    # 00458B88 assign_mtag
    .space 4
    .size domtag, 4
    .type domtag, @object

    .balign 4
# 1001C494
glabel usingregoption
    # 00434720 processargs
    # 0043771C optinit
    # 004394FC procinit_regs
    # 00461778 func_00461778
    .space 4
    .size usingregoption, 4
    .type usingregoption, @object

    .balign 4
# 1001C498
glabel no_r23
    # 00434720 processargs
    # 0043771C optinit
    # 004394FC procinit_regs
    # 0043A0CC copyline
    # 0047DBB4 getoption
    .space 4
    .size no_r23, 4
    .type no_r23, @object

    .balign 4
# 1001C49C
glabel no_r3
    # 0043771C optinit
    # 004394FC procinit_regs
    # 0043A0CC copyline
    .space 4
    .size no_r3, 4
    .type no_r3, @object

    .balign 4
# 1001C4A0
glabel dowhyuncolor
    # 004175BC copypropagate
    # 00434720 processargs
    # 0043771C optinit
    # 00467C34 needsplit
    # 00467F04 split
    # 00469280 globalcolor
    .space 4
    .size dowhyuncolor, 4
    .type dowhyuncolor, @object

    .balign 4
# 1001C4A4
glabel nof77alias
    # 0041F22C base_noalias
    # 00434720 processargs
    # 0043771C optinit
    # 004494A4 aliaswithptr
    # 004496F0 slkilled
    # 0044A5C8 smkilled
    # 0044AAD0 sskilled
    # 00458B88 assign_mtag
    # 0045A480 oneinstruction
    .space 4
    .size nof77alias, 4
    .type nof77alias, @object

    .balign 4
# 1001C4A8
glabel nopalias
    # 0041F22C base_noalias
    # 0041F5E4 base_sp_noalias
    # 00434720 processargs
    # 0043771C optinit
    # 004494A4 aliaswithptr
    # 004496F0 slkilled
    # 0044A5C8 smkilled
    # 0044AAD0 sskilled
    # 0045A480 oneinstruction
    .space 4
    .size nopalias, 4
    .type nopalias, @object

    .balign 4
# 1001C4AC
glabel fortran_lang
    # 00434720 processargs
    # 0043771C optinit
    # 0045A480 oneinstruction
    # 0047DBB4 getoption
    .space 4
    .size fortran_lang, 4
    .type fortran_lang, @object

    .balign 4
# 1001C4B0
glabel moremotion
    # 00410204 codemotion
    # 00434720 processargs
    # 0043771C optinit
    .space 4
    .size moremotion, 4
    .type moremotion, @object

    .balign 4
# 1001C4B4
glabel verbose
    # 00434720 processargs
    # 0043771C optinit
    # 00456A2C oneproc
    # 0045806C main
    .space 4
    .size verbose, 4
    .type verbose, @object

    .balign 4
# 1001C4B8
glabel bigendian
    # 00420A3C prolog
    # 00434720 processargs
    # 0043771C optinit
    # 004737E0 par_to_str
    # 0047F400 fitparmreg
    .space 4
    .size bigendian, 4
    .type bigendian, @object

    .balign 4
# 1001C4BC
glabel usefp
    # 004394FC procinit_regs
    # 0043CFCC readnxtinst
    # 00456A2C oneproc
    .space 4
    .size usefp, 4
    .type usefp, @object

    .balign 4
# 1001C4C0
glabel someusefp
    # 00420A3C prolog
    # 0042BF08 reemit
    # 004394FC procinit_regs
    # 0045A480 oneinstruction
    # 0045B508 oneprocprepass
    # 0045C150 prepass
    # 00461AAC makelivranges
    # 00469280 globalcolor
    .space 4
    .size someusefp, 4
    .type someusefp, @object

    .balign 4
# 1001C4C4
glabel o3opt
    # 00434720 processargs
    # 0043771C optinit
    # 004590C8 searchproc
    # 0045A3DC check_gp_relative
    # 0045A480 oneinstruction
    # 00469280 globalcolor
    # 0047FF7C skipproc
    .space 4
    .size o3opt, 4
    .type o3opt, @object

    .balign 4
# 1001C4C8
glabel update_sym_file
    # 00434720 processargs
    # 0043771C optinit
    # 00469280 globalcolor
    .space 4
    .size update_sym_file, 4
    .type update_sym_file, @object

    .balign 4
# 1001C4CC
glabel warned
    # 00434720 processargs
    # 0043771C optinit
    # 00456A2C oneproc
    # 0045806C main
    # 00458678 mtagwarning
    # 0045A480 oneinstruction
    # 0047B3F8 boundswarning
    # 0047B51C ovfwwarning
    # 0047FF7C skipproc
    .space 4
    .size warned, 4
    .type warned, @object

    .balign 4
# 1001C4D0
glabel allcallersave
    # 0041D560 printinterproc
    # 0041F138 inreg
    # 00420A3C prolog
    # 00421C00 epilog
    # 0042BF08 reemit
    # 00439188 procinit
    # 004394FC procinit_regs
    # 0043A0CC copyline
    # 00456A2C oneproc
    # 0045DA18 formlivbb
    # 0045DFAC passedinreg
    # 0045FBB4 func_0045FBB4
    # 00461AAC makelivranges
    # 00464BFC localcolor
    # 00469280 globalcolor
    .space 4
    .size allcallersave, 4
    .type allcallersave, @object

    .balign 4
# 1001C4D4
glabel propagate_ee_saves
    # 00420A3C prolog
    # 00421C00 epilog
    # 0042BF08 reemit
    # 00439188 procinit
    # 00456A2C oneproc
    # 00469280 globalcolor
    .space 4
    .size propagate_ee_saves, 4
    .type propagate_ee_saves, @object

    .balign 4
# 1001C4D8
glabel f77_static_flag
    # 00434720 processargs
    # 0043771C optinit
    # 0043CFCC readnxtinst
    # 004496F0 slkilled
    .space 4
    .size f77_static_flag, 4
    .type f77_static_flag, @object

    .balign 4
# 1001C4DC
glabel kpic_flag
    # 00434720 processargs
    # 0043771C optinit
    .space 4
    .size kpic_flag, 4
    .type kpic_flag, @object

    .balign 4
# 1001C4E0
glabel dokpicopt
    # 00434720 processargs
    # 0043771C optinit
    # 0043CFCC readnxtinst
    # 00451764 func_00451764
    # 00452DAC constarith
    .space 4
    .size dokpicopt, 4
    .type dokpicopt, @object

    .balign 4
# 1001C4E4
glabel outofmem
    # 0040F610 formbvlivran
    # 00410204 codemotion
    # 004137DC func_004137DC
    # 00414108 func_00414108
    # 004150E4 func_004150E4
    # 0041550C func_0041550C
    # 004175BC copypropagate
    # 0042F424 appendgraph
    # 00439188 procinit
    # 0043AA18 appendstorelist
    # 0043AAF4 appendbbvarlst
    # 0043B504 func_0043B504
    # 0043CA8C func_0043CA8C
    # 0043CBFC func_0043CBFC
    # 0043CFCC readnxtinst
    # 00444984 appendichain
    # 00444A84 isearchloop
    # 00445E44 exprimage
    # 00446E18 searchstore
    # 004471AC codeimage
    # 0044EDF8 ilodfold
    # 0044F1B8 istrfold
    # 0044F738 linearize
    # 0044FF6C mergeconst
    # 004510A0 distrlaw
    # 00451764 func_00451764
    # 00452DAC constarith
    # 00456310 func_00456310
    # 00456A2C oneproc
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
    # 00464AD4 alloc_livbb
    # 00465CB8 insintf
    # 00465E50 spilltemps
    # 00467F04 split
    # 00469280 globalcolor
    # 00475680 getexpsources
    # 0047BEF4 appendchain
    # 0047CDA4 extendstat
    # 0047F26C alloc_realloc
    .space 4
    .size outofmem, 4
    .type outofmem, @object

    .balign 4
# 1001C4E8
glabel mipsflag
    # 0042AADC func_0042AADC
    # 0042BF08 reemit
    # 00434720 processargs
    # 0043771C optinit
    # 0043CFCC readnxtinst
    # 00456A2C oneproc
    # 0045FBB4 func_0045FBB4
    # 0046123C func_0046123C
    # 00474FC8 func_00474FC8
    # 00475680 getexpsources
    .space 4
    .size mipsflag, 4
    .type mipsflag, @object

    .balign 4
# 1001C4EC
glabel mips3_64data
    # 00420A3C prolog
    # 0042BF08 reemit
    # 00434720 processargs
    # 0043771C optinit
    # 0045DA18 formlivbb
    # 0045DFAC passedinreg
    # 00461AAC makelivranges
    # 00464BFC localcolor
    # 0047E6D8 constinreg
    .space 4
    .size mips3_64data, 4
    .type mips3_64data, @object

    .balign 4
# 1001C4F0
glabel dwopcode
    # 00434720 processargs
    # 0043771C optinit
    # 0045DA18 formlivbb
    # 0045E5C4 func_0045E5C4
    # 0045FBB4 func_0045FBB4
    # 00461084 func_00461084
    # 0046123C func_0046123C
    # 00461640 func_00461640
    # 00461AAC makelivranges
    .space 4
    .size dwopcode, 4
    .type dwopcode, @object

    .balign 4
# 1001C4F4
glabel g_num
    # 00434720 processargs
    # 0043771C optinit
    # 0045A3DC check_gp_relative
    # 0045A480 oneinstruction
    .space 4
    .size g_num, 4
    .type g_num, @object

    .balign 4
# 1001C4F8
glabel int_reg_size
    # 0042A1C8 func_0042A1C8
    # 0042A4CC func_0042A4CC
    # 0042A7D0 func_0042A7D0
    # 00434720 processargs
    # 0043771C optinit
    # 0045E5C4 func_0045E5C4
    # 0045FBB4 func_0045FBB4
    # 00461AAC makelivranges
    # 0046C710 unroll_searchloop
    # 00473504 func_00473504
    # 0047F400 fitparmreg
    .space 4
    .size int_reg_size, 4
    .type int_reg_size, @object

    .balign 4
# 1001C4FC
glabel leaf_for_ugen
    # 004394FC procinit_regs
    # 0045D208 patchvectors
    # 0046732C isconstrained
    .space 4
    .size leaf_for_ugen, 4
    .type leaf_for_ugen, @object

    .balign 4
# 1001C500
glabel has_exc_handler
    # 004175BC copypropagate
    # 00439188 procinit
    # 0043CFCC readnxtinst
    # 004638C0 regdataflow
    # 00479DC4 eliminduct
    .space 4
    .size has_exc_handler, 4
    .type has_exc_handler, @object

    .balign 4
# 1001C504
glabel can_elim_tail
    # 00439188 procinit
    # 0043CFCC readnxtinst
    # 004761D0 tail_recursion
    # 0047DBB4 getoption
    .space 4
    .size can_elim_tail, 4
    .type can_elim_tail, @object

    .balign 4
# 1001C508
glabel use_c_semantics
    # 0041F22C base_noalias
    # 0041F5E4 base_sp_noalias
    # 00439188 procinit
    # 0043CFCC readnxtinst
    # 004494A4 aliaswithptr
    # 004496F0 slkilled
    # 0044A5C8 smkilled
    # 0044AAD0 sskilled
    # 0044B4F4 clkilled
    # 0044BDFC cskilled
    # 00458B88 assign_mtag
    .space 4
    .size use_c_semantics, 4
    .type use_c_semantics, @object

    .balign 4
# 1001C50C
glabel stack_reversed
    # 0041EC10 igen3
    # 0041EE30 outparlod
    # 0041FB20 spilltemplodstr
    # 0042020C gen_static_link
    # 004205F8 genrlodrstr
    # 004230F0 func_004230F0
    # 00426FA4 func_00426FA4
    # 0042A1C8 func_0042A1C8
    # 0042A4CC func_0042A4CC
    # 0042A7D0 func_0042A7D0
    # 0042B2C0 func_0042B2C0
    # 0042B890 func_0042B890
    # 0042BB4C func_0042BB4C
    # 0043771C optinit
    # 0045E5C4 func_0045E5C4
    # 0045FBB4 func_0045FBB4
    # 0046123C func_0046123C
    # 00465E50 spilltemps
    # 004713E8 loopunroll
    # 004761D0 tail_recursion
    # 00476CA0 gettemp
    # 0047DBB4 getoption
    .space 4
    .size stack_reversed, 4
    .type stack_reversed, @object

    .balign 4
# 1001C510
glabel strictieee
    # 0041550C func_0041550C
    # 00434720 processargs
    # 0043771C optinit
    # 0043CFCC readnxtinst
    .space 4
    .size strictieee, 4
    .type strictieee, @object

    .balign 4
# 1001C514
glabel fp32reg
    # 00434720 processargs
    # 0043771C optinit
    .space 4
    .size fp32reg, 4
    .type fp32reg, @object

    .balign 4
# 1001C518
glabel multibbunroll
    # 00434720 processargs
    # 0043771C optinit
    # 004713E8 loopunroll
    .space 4
    .size multibbunroll, 4
    .type multibbunroll, @object

    .balign 4
# 1001C51C
glabel warn_flag
    # 00434720 processargs
    # 0043771C optinit
    # 00456A2C oneproc
    # 0045806C main
    # 00458678 mtagwarning
    # 0045A480 oneinstruction
    # 0047B3F8 boundswarning
    # 0047B51C ovfwwarning
    # 0047FF7C skipproc
    .space 4
    .size warn_flag, 4
    .type warn_flag, @object

    .balign 4
# 1001C520
glabel entflag
    # 004175BC copypropagate
    # 00421C00 epilog
    # 0043A0CC copyline
    # 00456A2C oneproc
    .space 4
    .size entflag, 4
    .type entflag, @object

    .balign 4
# 1001C524
glabel unroll_times
    # 00434720 processargs
    # 0043771C optinit
    # 004713E8 loopunroll
    .space 4
    .size unroll_times, 4
    .type unroll_times, @object

    .balign 4
# 1001C528
glabel unroll_limit
    # 00434720 processargs
    # 0043771C optinit
    # 004713E8 loopunroll
    .space 4
    .size unroll_limit, 4
    .type unroll_limit, @object

    .balign 4
# 1001C52C
glabel sizethreshold
    # 00434720 processargs
    # 0043771C optinit
    # 00456A2C oneproc
    # 0045B508 oneprocprepass
    .space 4
    .size sizethreshold, 4
    .type sizethreshold, @object

    .balign 4
# 1001C530
glabel curproc
    # 00410204 codemotion
    # 0041550C func_0041550C
    # 004175BC copypropagate
    # 0041D560 printinterproc
    # 0042020C gen_static_link
    # 00420A3C prolog
    # 00421C00 epilog
    # 0042BF08 reemit
    # 0042F0FC bb_frequencies
    # 004324F4 findinduct
    # 00439188 procinit
    # 004394FC procinit_regs
    # 00439C40 getop
    # 0043A0CC copyline
    # 0043ABD0 incroccurrence
    # 0043CFCC readnxtinst
    # 0044B4F4 clkilled
    # 0044BDFC cskilled
    # 0044EDF8 ilodfold
    # 0044F1B8 istrfold
    # 00453C20 func_00453C20
    # 00453ECC func_00453ECC
    # 00456A2C oneproc
    # 004584D0 init_mtagtab
    # 0045A480 oneinstruction
    # 0045B508 oneprocprepass
    # 00461AAC makelivranges
    # 00469280 globalcolor
    # 004737E0 par_to_str
    # 00474110 opt_saved_regs
    # 00475FE8 fix_par_vreg
    # 0047D838 entervregveqv
    # 0047FF7C skipproc
    .space 4
    .size curproc, 4
    .type curproc, @object

    .balign 4
# 1001C538
glabel indirprocs
    # 004175BC copypropagate
    # 00431508 func_00431508
    # 004324F4 findinduct
    # 0043CFCC readnxtinst
    # 004471AC codeimage
    # 0044B4F4 clkilled
    # 0044BDFC cskilled
    # 0044CD14 listplkilled
    # 0044D4B4 listpskilled
    # 00454D08 func_00454D08
    # 0045A480 oneinstruction
    # 0045C150 prepass
    # 0045C620 furthervarintree
    # 0045C8A0 lvalaltered
    # 0045CD78 expaltered
    # 0045D208 patchvectors
    # 004638C0 regdataflow
    .space 4
    .size indirprocs, 4
    .type indirprocs, @object

    .balign 4
# 1001C53C
glabel ciaprocs
    # 0043CFCC readnxtinst
    # 0045C150 prepass
    # 00469280 globalcolor
    .space 4
    .size ciaprocs, 4
    .type ciaprocs, @object

    .balign 4
# 1001C540
glabel gsptr
    # 004175BC copypropagate
    # 0043771C optinit
    # 0045C8A0 lvalaltered
    # 0045D208 patchvectors
    .space 4
    .size gsptr, 4
    .type gsptr, @object

    .balign 8
# 1001C6A0
glabel list
    # 004175BC copypropagate
    # 0041A2A0 printmtyp
    # 0041A410 printitab
    # 0041AC2C printtab
    # 0041B580 printbv
    # 0041B8C8 printlinfo
    # 0041BC58 printhoist
    # 0041BEF4 printprecm
    # 0041C1B0 printcm
    # 0041C688 printscm
    # 0041C914 printregs
    # 0041D560 printinterproc
    # 0041D758 printsav
    # 0041DDD4 printstat
    # 0041EA88 print_loop_relations
    # 00434720 processargs
    # 00455518 func_00455518
    # 00456A2C oneproc
    # 0045806C main
    # 00467C34 needsplit
    # 00467F04 split
    # 00469280 globalcolor
    # 004713E8 loopunroll
    # 004761D0 tail_recursion
    # 0047DBB4 getoption
    .space 8
    .size list, 8
    .type list, @object

    .balign 8
# 1001C6A8
glabel strp
    # 0041FD3C genloadnum
    # 0042BF08 reemit
    # 00439188 procinit
    # 0043CFCC readnxtinst
    .space 8
    .size strp, 8
    .type strp, @object

    .balign 8
# 1001C6B0
glabel sym
    .space 8
    .size sym, 8
    .type sym, @object

    .balign 8
# 1001C6B8
glabel varbits
    # 00410204 codemotion
    # 004175BC copypropagate
    # 0041B8C8 printlinfo
    # 004324F4 findinduct
    # 00439188 procinit
    # 00444A84 isearchloop
    # 0045D208 patchvectors
    # 00461AAC makelivranges
    # 004638C0 regdataflow
    # 00478FA0 func_00478FA0
    # 00479DC4 eliminduct
    .space 8
    .size varbits, 8
    .type varbits, @object

    .balign 8
# 1001C6C0
glabel mvarbits
    # 004175BC copypropagate
    # 0041C1B0 printcm
    # 00439188 procinit
    # 004638C0 regdataflow
    # 00479DC4 eliminduct
    .space 8
    .size mvarbits, 8
    .type mvarbits, @object

    .balign 8
# 1001C6C8
glabel fsymbits
    # 004175BC copypropagate
    # 00439188 procinit
    # 004638C0 regdataflow
    # 00479DC4 eliminduct
    .space 8
    .size fsymbits, 8
    .type fsymbits, @object

    .balign 8
# 1001C6D0
glabel asgnbits
    # 00410204 codemotion
    # 004175BC copypropagate
    # 004324F4 findinduct
    # 00439188 procinit
    # 00444A84 isearchloop
    # 0045D208 patchvectors
    # 00475680 getexpsources
    # 00478ED4 func_00478ED4
    # 00479DC4 eliminduct
    .space 8
    .size asgnbits, 8
    .type asgnbits, @object

    .balign 8
# 1001C6D8
glabel slvarbits
    # 00410204 codemotion
    # 0041B8C8 printlinfo
    # 004324F4 findinduct
    # 00439188 procinit
    # 00444A84 isearchloop
    # 00461AAC makelivranges
    # 00479DC4 eliminduct
    .space 8
    .size slvarbits, 8
    .type slvarbits, @object

    .balign 8
# 1001C6E0
glabel slasgnbits
    # 00410204 codemotion
    # 004175BC copypropagate
    # 00439188 procinit
    # 00444A84 isearchloop
    # 00479DC4 eliminduct
    .space 8
    .size slasgnbits, 8
    .type slasgnbits, @object

    .balign 8
# 1001C6E8
glabel storeop
    # 00410204 codemotion
    # 004123C4 varinsert
    # 004175BC copypropagate
    # 0041B8C8 printlinfo
    # 0042AADC func_0042AADC
    # 00439188 procinit
    # 00446E18 searchstore
    # 0045D208 patchvectors
    # 0045E1F8 caninsertearly
    # 00461AAC makelivranges
    # 00475680 getexpsources
    # 00479DC4 eliminduct
    .space 8
    .size storeop, 8
    .type storeop, @object

    .balign 8
# 1001C6F0
glabel trapop
    # 00410204 codemotion
    # 004175BC copypropagate
    # 0041B8C8 printlinfo
    # 0042AADC func_0042AADC
    # 004324F4 findinduct
    # 00439188 procinit
    # 00446E18 searchstore
    # 0045D208 patchvectors
    # 00461AAC makelivranges
    # 00474FC8 func_00474FC8
    # 00475680 getexpsources
    .space 8
    .size trapop, 8
    .type trapop, @object

    .balign 8
# 1001C6F8
glabel trapconstop
    # 00410204 codemotion
    # 004175BC copypropagate
    # 004324F4 findinduct
    # 00439188 procinit
    # 00446E18 searchstore
    .space 8
    .size trapconstop, 8
    .type trapconstop, @object

    .balign 8
# 1001C700
glabel indmults
    # 0041550C func_0041550C
    # 0041B8C8 printlinfo
    # 0041C1B0 printcm
    # 004324F4 findinduct
    # 00439188 procinit
    # 00444A84 isearchloop
    # 00477E20 func_00477E20
    # 00479DC4 eliminduct
    # 0047E8C8 in_indmults
    .space 8
    .size indmults, 8
    .type indmults, @object

    .balign 8
# 1001C708
glabel boolexp
    # 00410204 codemotion
    # 0041550C func_0041550C
    # 004175BC copypropagate
    # 0041B8C8 printlinfo
    # 004324F4 findinduct
    # 00439188 procinit
    # 00444A84 isearchloop
    # 00445E44 exprimage
    # 004471AC codeimage
    .space 8
    .size boolexp, 8
    .type boolexp, @object

    .balign 8
# 1001C710
glabel savedexp
    # 00410204 codemotion
    # 00477E20 func_00477E20
    # 00479B80 func_00479B80
    # 00479DC4 eliminduct
    .space 8
    .size savedexp, 8
    .type savedexp, @object

    .balign 8
# 1001C718
glabel trepexp
    # 004324F4 findinduct
    # 00439188 procinit
    # 00445AEC trep_image
    # 00479DC4 eliminduct
    .space 8
    .size trepexp, 8
    .type trepexp, @object

    .balign 8
# 1001C720
glabel used_trepexp
    # 00479778 func_00479778
    # 00479DC4 eliminduct
    .space 8
    .size used_trepexp, 8
    .type used_trepexp, @object

    .balign 8
# 1001C728
glabel outmodebits
    # 004175BC copypropagate
    # 0041C1B0 printcm
    # 00439188 procinit
    # 00461AAC makelivranges
    # 004638C0 regdataflow
    # 00464BFC localcolor
    .space 8
    .size outmodebits, 8
    .type outmodebits, @object

    .balign 8
# 1001C730
glabel notinmodebits
    # 004175BC copypropagate
    # 0041C1B0 printcm
    # 00439188 procinit
    # 004638C0 regdataflow
    .space 8
    .size notinmodebits, 8
    .type notinmodebits, @object

    .balign 8
# 1001C738
glabel varfactor_muls
    # 00431508 func_00431508
    # 00439188 procinit
    # 00479DC4 eliminduct
    .space 8
    .size varfactor_muls, 8
    .type varfactor_muls, @object

    .balign 8
# 1001C740
glabel coloreditems
    # 0041C688 printscm
    # 00439188 procinit
    # 0045E5C4 func_0045E5C4
    # 0045FBB4 func_0045FBB4
    # 004638C0 regdataflow
    # 00465E50 spilltemps
    # 00475680 getexpsources
    # 00476AA0 findbbtemps
    .space 8
    .size coloreditems, 8
    .type coloreditems, @object

    .balign 8
# 1001C748
glabel vareqv
    # 004175BC copypropagate
    # 004324F4 findinduct
    # 00439188 procinit
    # 00445E44 exprimage
    # 004471AC codeimage
    # 00469280 globalcolor
    .space 8
    .size vareqv, 8
    .type vareqv, @object

    .balign 8
# 1001C750
glabel asgneqv
    # 004175BC copypropagate
    # 00439188 procinit
    # 00445E44 exprimage
    # 004471AC codeimage
    # 00469280 globalcolor
    # 00479DC4 eliminduct
    .space 8
    .size asgneqv, 8
    .type asgneqv, @object

    .balign 8
# 1001C758
glabel coloredparms
    # 00439188 procinit
    # 0045DA18 formlivbb
    # 0045FBB4 func_0045FBB4
    # 00461AAC makelivranges
    # 004638C0 regdataflow
    # 00464BFC localcolor
    # 00469280 globalcolor
    .space 8
    .size coloredparms, 8
    .type coloredparms, @object

    .balign 8
# 1001C760
glabel iscolored12
    # 0041C914 printregs
    # 00439188 procinit
    # 00461AAC makelivranges
    # 004638C0 regdataflow
    # 00464BFC localcolor
    # 00469280 globalcolor
    .space 8
    .size iscolored12, 8
    .type iscolored12, @object

    .balign 8
# 1001C768
glabel old
    # 00410204 codemotion
    # 004175BC copypropagate
    # 004324F4 findinduct
    # 0045FBB4 func_0045FBB4
    # 00461AAC makelivranges
    # 004638C0 regdataflow
    # 00475680 getexpsources
    # 00479DC4 eliminduct
    .space 8
    .size old, 8
    .type old, @object

    .balign 8
# 1001C770
glabel workbvect
    .space 8
    .size workbvect, 8
    .type workbvect, @object

    .balign 8
# 1001C778
glabel setofspills
    # 00465E50 spilltemps
    # 00476AA0 findbbtemps
    .space 8
    .size setofspills, 8
    .type setofspills, @object

    .balign 8
# 1001C780
glabel firsterreg
    # 0041C914 printregs
    # 0041F138 inreg
    # 0042020C gen_static_link
    # 00420A3C prolog
    # 00421C00 epilog
    # 0042BF08 reemit
    # 0043771C optinit
    # 004394FC procinit_regs
    # 00461AAC makelivranges
    # 00464BFC localcolor
    # 00466544 updatecolorsleft
    # 00469280 globalcolor
    .space 8
    .size firsterreg, 8
    .type firsterreg, @object

    .balign 8
# 1001C788
glabel firsteereg
    # 0041D758 printsav
    # 00420A3C prolog
    # 0042A1C8 func_0042A1C8
    # 0042A4CC func_0042A4CC
    # 0042A7D0 func_0042A7D0
    # 0042BF08 reemit
    # 0043771C optinit
    # 004394FC procinit_regs
    # 00466544 updatecolorsleft
    # 00469280 globalcolor
    # 00474110 opt_saved_regs
    .space 8
    .size firsteereg, 8
    .type firsteereg, @object

    .balign 8
# 1001C790
glabel lasterreg
    # 00420A3C prolog
    # 0042BF08 reemit
    # 0043771C optinit
    # 004394FC procinit_regs
    # 00461AAC makelivranges
    # 00466544 updatecolorsleft
    # 00469280 globalcolor
    .space 8
    .size lasterreg, 8
    .type lasterreg, @object

    .balign 8
# 1001C798
glabel lasteereg
    # 0041C914 printregs
    # 0041D560 printinterproc
    # 0041F138 inreg
    # 0042020C gen_static_link
    # 00420A3C prolog
    # 00421C00 epilog
    # 0042A1C8 func_0042A1C8
    # 0042A4CC func_0042A4CC
    # 0042BF08 reemit
    # 0043771C optinit
    # 004394FC procinit_regs
    # 00461AAC makelivranges
    # 00466544 updatecolorsleft
    # 00469280 globalcolor
    # 00474110 opt_saved_regs
    .space 8
    .size lasteereg, 8
    .type lasteereg, @object

    .balign 8
# 1001C7A0
glabel firstparmreg
    # 00420A3C prolog
    # 00421C00 epilog
    # 0042269C gen_outparcode
    # 0042BF08 reemit
    # 0043771C optinit
    # 0045FBB4 func_0045FBB4
    # 00461AAC makelivranges
    # 00464BFC localcolor
    # 00469280 globalcolor
    .space 8
    .size firstparmreg, 8
    .type firstparmreg, @object

    .balign 8
# 1001C7A8
glabel numoferregs
    # 0043771C optinit
    # 004394FC procinit_regs
    .space 8
    .size numoferregs, 8
    .type numoferregs, @object

    .balign 8
# 1001C7B0
glabel regsinclass
    # 0043771C optinit
    # 004394FC procinit_regs
    # 0046732C isconstrained
    .space 8
    .size regsinclass, 8
    .type regsinclass, @object

    .balign 8
# 1001C7B8
glabel highesterreg
    # 00420A3C prolog
    # 004394FC procinit_regs
    # 00461AAC makelivranges
    # 00469280 globalcolor
    .space 8
    .size highesterreg, 8
    .type highesterreg, @object

    .balign 8
# 1001C7C0
glabel highesteereg
    # 0041F138 inreg
    # 00420A3C prolog
    # 0042A7D0 func_0042A7D0
    # 004394FC procinit_regs
    # 00461AAC makelivranges
    # 00469280 globalcolor
    .space 8
    .size highesteereg, 8
    .type highesteereg, @object

    .balign 8
# 1001C7C8
glabel dftregsused
    # 004394FC procinit_regs
    # 00461AAC makelivranges
    .space 8
    .size dftregsused, 8
    .type dftregsused, @object

    .balign 8
# 1001C7D0
glabel regscantpass
    # 004394FC procinit_regs
    # 00468A14 cupcosts
    # 00469280 globalcolor
    .space 8
    .size regscantpass, 8
    .type regscantpass, @object

    .balign 8
# 1001C800
glabel r2bitpos
    # 004175BC copypropagate
    # 0041C914 printregs
    # 00439188 procinit
    # 00445E44 exprimage
    # 004638C0 regdataflow
    .space 12
    .size r2bitpos, 12
    .type r2bitpos, @object

    .balign 16
# 1001C810
glabel iscolored
    # 00439188 procinit
    # 0045DA18 formlivbb
    # 00461AAC makelivranges
    # 004638C0 regdataflow
    # 00464BFC localcolor
    # 00465E50 spilltemps
    # 00469280 globalcolor
    .space 16
    .size iscolored, 16
    .type iscolored, @object

    .balign 16
# 1001C820
glabel seterregs
    # 0043771C optinit
    # 004394FC procinit_regs
    .space 16
    .size seterregs, 16
    .type seterregs, @object

    .balign 16
# 1001C830
glabel seteeregs
    # 00420A3C prolog
    # 00421C00 epilog
    # 0043771C optinit
    # 004394FC procinit_regs
    .space 16
    .size seteeregs, 16
    .type seteeregs, @object

    .balign 16
# 1001C840
glabel setregs
    # 0043771C optinit
    # 004394FC procinit_regs
    # 00467C34 needsplit
    # 00467F04 split
    .space 16
    .size setregs, 16
    .type setregs, @object

    .balign 16
# 1001C850
glabel usedeeregs
    # 00420A3C prolog
    # 004394FC procinit_regs
    # 00469280 globalcolor
    .space 16
    .size usedeeregs, 16
    .type usedeeregs, @object

    .balign 16
# 1001C878
glabel setofr2bbs
    # 00439188 procinit
    # 00445E44 exprimage
    .space 24
    .size setofr2bbs, 24
    .type setofr2bbs, @object

    .balign 16
# 1001C900
glabel u
    # 0041EC10 igen3
    # 0041EE30 outparlod
    # 0041EF64 gen_cvtl
    # 0041EFD4 gen_cvt
    # 0041F048 genrop
    # 0041F6F0 base_in_reg
    # 0041FB20 spilltemplodstr
    # 0041FC80 genloadaddr
    # 0041FD3C genloadnum
    # 0042018C genloadrnum
    # 0042020C gen_static_link
    # 004205F8 genrlodrstr
    # 00420A3C prolog
    # 00421C00 epilog
    # 00422AF0 func_00422AF0
    # 00422D04 func_00422D04
    # 004230F0 func_004230F0
    # 00426FA4 func_00426FA4
    # 0042933C func_0042933C
    # 0042A1C8 func_0042A1C8
    # 0042A4CC func_0042A4CC
    # 0042A7D0 func_0042A7D0
    # 0042AADC func_0042AADC
    # 0042B2C0 func_0042B2C0
    # 0042B890 func_0042B890
    # 0042BB4C func_0042BB4C
    # 0042BF08 reemit
    # 00439C40 getop
    # 0043A0CC copyline
    # 0043A7DC createcvtl
    # 0043B504 func_0043B504
    # 0043C248 func_0043C248
    # 0043C56C func_0043C56C
    # 0043CE64 func_0043CE64
    # 0043CFCC readnxtinst
    # 00456310 func_00456310
    # 00456A2C oneproc
    # 0045806C main
    # 00459400 updatelab
    # 0045A3DC check_gp_relative
    # 0045A480 oneinstruction
    # 0045B508 oneprocprepass
    # 0045C150 prepass
    # 0047F8E4 getfloatval
    # 0047FE1C func_0047FE1C
    # 0047FF7C skipproc
    .space 32
    .size u, 32
    .type u, @object

    .balign 16
# 1001C920
glabel lastcopiedu
    # 00439188 procinit
    # 0043A0CC copyline
    # 00456A2C oneproc
    # 0047FE1C func_0047FE1C
    # 0047FF7C skipproc
    .space 32
    .size lastcopiedu, 32
    .type lastcopiedu, @object

    .balign 16
# 1001CC00
glabel optab
    # 0040F8D0 resetsubdelete
    # 00410204 codemotion
    # 0041297C func_0041297C
    # 00412B18 func_00412B18
    # 00413000 exprdelete
    # 00413684 func_00413684
    # 00414108 func_00414108
    # 0041550C func_0041550C
    # 00422D04 func_00422D04
    # 004230F0 func_004230F0
    # 00424FFC func_00424FFC
    # 00425618 func_00425618
    # 00426FA4 func_00426FA4
    # 0043005C func_0043005C
    # 00430BF4 func_00430BF4
    # 00430FF4 func_00430FF4
    # 004376E0 func_004376E0
    # 00439C40 getop
    # 0043A8F0 constexp
    # 0043ABD0 incroccurrence
    # 0043AF30 treekilled
    # 0043CFCC readnxtinst
    # 00445E44 exprimage
    # 0044821C expr_has_direct_usage
    # 00448530 has_direct_induct_usage
    # 00448928 check_loop_induct_usages
    # 00454F00 func_00454F00
    # 00456310 func_00456310
    # 00456A2C oneproc
    # 0045CBDC cupaltered
    # 0045CD78 expaltered
    # 0045E0B8 varappear
    # 0045E5C4 func_0045E5C4
    # 0045FBB4 func_0045FBB4
    # 00461084 func_00461084
    # 00470570 expr_instr
    # 004712A4 reset_images
    # 00474DC0 func_00474DC0
    # 0047606C func_0047606C
    # 0047847C func_0047847C
    # 00478820 func_00478820
    # 00478C14 func_00478C14
    # 004793C4 func_004793C4
    # 0047966C func_0047966C
    # 00479778 func_00479778
    # 00479B80 func_00479B80
    # 0047C6E8 decreasecount
    # 0047C960 increasecount
    # 0047D000 exproccurred
    # 0047D188 iexproccurred
    # 0047D878 deccount
    # 0047E938 checkincre
    # 0047EBB0 findincre
    # 0047ED9C countvars
    # 0047EEA4 hasvolatile
    # 0047EF74 has_volt_ovfw
    # 0047F0AC has_ilod
    .space 468
    .size optab, 468
    .type optab, @object

    .balign 16
# 1001CDD8
glabel blklev
    # 0043A0A8 func_0043A0A8
    # 0047CE98 blktolev
    .space 512
    .size blklev, 512
    .type blklev, @object

    .balign 16
# 1001D700
glabel sourcename
    # 00434720 processargs
    # 0045C150 prepass
    # 0047FF7C skipproc
    .space 1024
    .size sourcename, 1024
    .type sourcename, @object

    .balign 16
# 1001DB00
glabel uopt_uname
    # 00434720 processargs
    .space 1024
    .size uopt_uname, 1024
    .type uopt_uname, @object

    .balign 16
# 1001DF00
glabel listname
    # 00434720 processargs
    # 0047DBB4 getoption
    .space 1024
    .size listname, 1024
    .type listname, @object

    .balign 16
# 1001E300
glabel strpname
    # 00434720 processargs
    # 00439188 procinit
    .space 1024
    .size strpname, 1024
    .type strpname, @object

    .balign 16
# 1001E700
glabel symname
    # 00434720 processargs
    # 00439B60 write_updated_st
    .space 1024
    .size symname, 1024
    .type symname, @object

    .balign 16
# 1001EB00
glabel entnam0
    # 004175BC copypropagate
    # 0042BF08 reemit
    # 0042F6CC controlflow
    # 0043A0CC copyline
    # 00456A2C oneproc
    # 00458678 mtagwarning
    # 0045B508 oneprocprepass
    # 0045C804 proc_suppressed
    # 004713E8 loopunroll
    # 0047B320 stackerror
    # 0047B3F8 boundswarning
    # 0047B51C ovfwwarning
    # 0047BDF8 dbgerror
    # 0047FF7C skipproc
    .space 1024
    .size entnam0, 1024
    .type entnam0, @object

    .balign 16
# 1001EF00
glabel proc_to_print
    # 0041A410 printitab
    # 0041AC2C printtab
    # 0041B8C8 printlinfo
    # 0041BC58 printhoist
    # 0041BEF4 printprecm
    # 0041C1B0 printcm
    # 0041C688 printscm
    # 0041C914 printregs
    # 0041D560 printinterproc
    # 0041D758 printsav
    # 00434720 processargs
    # 0043771C optinit
    # 0043A0CC copyline
    # 004713E8 loopunroll
    .space 1024
    .size proc_to_print, 1024
    .type proc_to_print, @object

    .balign 16
# 1001FE98
glabel itable
    # 00410204 codemotion
    # 0042020C gen_static_link
    # 00430680 func_00430680
    # 004324F4 findinduct
    # 00439188 procinit
    # 00444984 appendichain
    # 00444A84 isearchloop
    # 00445AEC trep_image
    # 00446E18 searchstore
    .space 6476
    .size itable, 6476
    .type itable, @object

    .balign 16
# 100217E8
glabel ldatab
    # 00459FB0 insertlda
    # 0045BF44 checkforvreg
    # 0045C150 prepass
    .space 12452
    .size ldatab, 12452
    .type ldatab, @object

    .balign 16
# 10024890
glabel table
    # 004137DC func_004137DC
    # 004150E4 func_004150E4
    # 0041550C func_0041550C
    # 0041AC2C printtab
    # 00425618 func_00425618
    # 00439188 procinit
    # 00439FA4 formal_parm_vreg
    # 0043B334 func_0043B334
    # 0043B504 func_0043B504
    # 0043CBFC func_0043CBFC
    # 0044EDF8 ilodfold
    # 00459564 update_veqv_in_table
    # 0045FBB4 func_0045FBB4
    # 00464B68 r2_overlap_r3
    # 0046BA10 change_to_const_eq
    # 0046BD90 change_to_var_eq
    # 0046C710 unroll_searchloop
    # 0047090C form_bop
    # 00470AAC form_rem
    # 00470DD8 form_neq0
    # 00470F88 form_neg
    # 00473504 func_00473504
    # 00473D84 func_00473D84
    # 00475E38 func_00475E38
    # 00476E40 func_00476E40
    # 0047BEF4 appendchain
    # 0047BFEC findsimilar
    # 0047D610 searchvar
    # 0047E100 enter_const
    # 0047E24C enter_lda
    # 0047E3BC binopwithconst
    .space 36452
    .size table, 36452
    .type table, @object


.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
)"");
