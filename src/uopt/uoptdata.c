#include "uoptdata.h"

/*
0041EC10 igen3
0041EE30 outparlod
0041EF64 gen_cvtl
0041EFD4 gen_cvt
0041F048 genrop
0041F6F0 base_in_reg
0041FB20 spilltemplodstr
0041FC80 genloadaddr
0041FD3C genloadnum
0042018C genloadrnum
0042020C gen_static_link
004205F8 genrlodrstr
00420A3C prolog
00421C00 epilog
00422AF0 func_00422AF0
00422D04 func_00422D04
004230F0 func_004230F0
00426FA4 func_00426FA4
0042933C func_0042933C
0042A1C8 func_0042A1C8
0042A4CC func_0042A4CC
0042A7D0 func_0042A7D0
0042AADC func_0042AADC
0042B2C0 func_0042B2C0
0042B890 func_0042B890
0042BB4C func_0042BB4C
0042BF08 reemit
00439C40 getop
0043A0CC copyline
0043A7DC createcvtl
0043B504 func_0043B504
0043C248 func_0043C248
0043C56C func_0043C56C
0043CE64 func_0043CE64
0043CFCC readnxtinst
00456310 func_00456310
00456A2C oneproc
0045806C main
00459400 updatelab
0045A3DC check_gp_relative
0045A480 oneinstruction
0045B508 oneprocprepass
0045C150 prepass
0047F8E4 getfloatval
0047FE1C func_0047FE1C
0047FF7C skipproc
*/
union Bcode u;

/*
00414108 func_00414108
0041FD3C genloadnum
0042BD94 func_0042BD94
0042BF08 reemit
0043771C optinit
00439C40 getop
0043A0CC copyline
0043B084 func_0043B084
0043C248 func_0043C248
0043C56C func_0043C56C
0043CFCC readnxtinst
0045806C main
0045B508 oneprocprepass
0045C150 prepass
0047CAEC realhash
0047FF7C skipproc
*/
char *ustrptr;

/*
004175BC copypropagate
0041A2A0 printmtyp
0041A410 printitab
0041AC2C printtab
0041B580 printbv
0041B8C8 printlinfo
0041BC58 printhoist
0041BEF4 printprecm
0041C1B0 printcm
0041C688 printscm
0041C914 printregs
0041D560 printinterproc
0041D758 printsav
0041DDD4 printstat
0041EA88 print_loop_relations
00434720 processargs
00455518 func_00455518
00456A2C oneproc
0045806C main
00467C34 needsplit
00467F04 split
00469280 globalcolor
004713E8 loopunroll
004761D0 tail_recursion
0047DBB4 getoption
*/
struct PascalFile list;

/*
0041FD3C genloadnum
0042BF08 reemit
00439188 procinit
0043CFCC readnxtinst
*/
struct PascalFile strp;

// unused
int sym[2]; // unknown type

/*
00434720 processargs
0045C150 prepass
0047FF7C skipproc
*/
char sourcename[1024];

/*
00434720 processargs
*/
char uopt_uname[1024];

/*
00434720 processargs
0047DBB4 getoption
*/
char listname[1024];

/*
00434720 processargs
00439188 procinit
*/
char strpname[1024];

/*
00434720 processargs
00439B60 write_updated_st
*/
char symname[1024];

/*
00439188 procinit
0043A0CC copyline
00456A2C oneproc
0047FE1C func_0047FE1C
0047FF7C skipproc
*/
union Bcode lastcopiedu;

/*
0040C254 setbit
0040C4C4 checkbvlist
0040F610 formbvlivran
0040F7B8 checkinitbvlivran
00414108 func_00414108
0042020C gen_static_link
00425618 func_00425618
00426DE8 func_00426DE8
0042EB10 incorp_feedback
0042F424 appendgraph
0042F6CC controlflow
00430680 func_00430680
00434434 func_00434434
0043771C optinit
00439188 procinit
0043A0CC copyline
0043A88C insert_outparlist
0043AA18 appendstorelist
0043AAF4 appendbbvarlst
0043B15C func_0043B15C
0043B2B8 func_0043B2B8
0043C248 func_0043C248
0043C56C func_0043C56C
0043CA8C func_0043CA8C
0043CFCC readnxtinst
00444984 appendichain
00445AEC trep_image
00445E44 exprimage
0044EDF8 ilodfold
00453B04 func_00453B04
00456310 func_00456310
00456A2C oneproc
0045877C searchmtag_parm
00458998 func_00458998
00458B88 assign_mtag
004590C8 searchproc
00459360 insertijplab
00459400 updatelab
00459C9C enterfsymtab
00459E84 enter_gp_rel_tab
0045A25C insertcallee
0045B978 mergecallees
0045BCA8 func_0045BCA8
0045C150 prepass
0045DA18 formlivbb
0045E5C4 func_0045E5C4
0045FBB4 func_0045FBB4
0046123C func_0046123C
00464AD4 alloc_livbb
00464BFC localcolor
00465CB8 insintf
00465E50 spilltemps
00467F04 split
00469198 put_in_fallthru_bb
0046920C put_in_jump_bb
00469280 globalcolor
0046F994 create_edge
0046FA20 new_header_node
0046FB40 record_labels
004713E8 loopunroll
00474FC8 func_00474FC8
00475680 getexpsources
0047606C func_0047606C
004761D0 tail_recursion
00476CA0 gettemp
00477E20 func_00477E20
0047BEF4 appendchain
0047CDA4 extendstat
0047CF0C newbit
0047DBB4 getoption
*/
struct AllocBlock *perm_heap;

/*
0043771C optinit
00456A2C oneproc
*/
struct AllocBlock *heapptr;

/*
0040F8D0 resetsubdelete
00410204 codemotion
0041297C func_0041297C
00412B18 func_00412B18
00413000 exprdelete
00413684 func_00413684
00414108 func_00414108
0041550C func_0041550C
00422D04 func_00422D04
004230F0 func_004230F0
00424FFC func_00424FFC
00425618 func_00425618
00426FA4 func_00426FA4
0043005C func_0043005C
00430BF4 func_00430BF4
00430FF4 func_00430FF4
004376E0 func_004376E0
00439C40 getop
0043A8F0 constexp
0043ABD0 incroccurrence
0043AF30 treekilled
0043CFCC readnxtinst
00445E44 exprimage
0044821C expr_has_direct_usage
00448530 has_direct_induct_usage
00448928 check_loop_induct_usages
00454F00 func_00454F00
00456310 func_00456310
00456A2C oneproc
0045CBDC cupaltered
0045CD78 expaltered
0045E0B8 varappear
0045E5C4 func_0045E5C4
0045FBB4 func_0045FBB4
00461084 func_00461084
00470570 expr_instr
004712A4 reset_images
00474DC0 func_00474DC0
0047606C func_0047606C
0047847C func_0047847C
00478820 func_00478820
00478C14 func_00478C14
004793C4 func_004793C4
0047966C func_0047966C
00479778 func_00479778
00479B80 func_00479B80
0047C6E8 decreasecount
0047C960 increasecount
0047D000 exproccurred
0047D188 iexproccurred
0047D878 deccount
0047E938 checkincre
0047EBB0 findincre
0047ED9C countvars
0047EEA4 hasvolatile
0047EF74 has_volt_ovfw
0047F0AC has_ilod
*/
struct optabrec optab[0x9C];

/*
00439C40 getop
0043CFCC readnxtinst
00456310 func_00456310
00456A2C oneproc
*/
bool endblock;

/*
004137DC func_004137DC
004150E4 func_004150E4
0041550C func_0041550C
0041AC2C printtab
00425618 func_00425618
00439188 procinit
00439FA4 formal_parm_vreg
0043B334 func_0043B334
0043B504 func_0043B504
0043CBFC func_0043CBFC
0044EDF8 ilodfold
00459564 update_veqv_in_table
0045FBB4 func_0045FBB4
00464B68 r2_overlap_r3
0046BA10 change_to_const_eq
0046BD90 change_to_var_eq
0046C710 unroll_searchloop
0047090C form_bop
00470AAC form_rem
00470DD8 form_neq0
00470F88 form_neg
00473504 func_00473504
00473D84 func_00473D84
00475E38 func_00475E38
00476E40 func_00476E40
0047BEF4 appendchain
0047BFEC findsimilar
0047D610 searchvar
0047E100 enter_const
0047E24C enter_lda
0047E3BC binopwithconst
*/
void *table[9113]; // TODO: fix type

/*
0043771C optinit
00439188 procinit
00439C40 getop
0043CFCC readnxtinst
00456A2C oneproc
*/
struct UstackEntry *ustackbot;

/*
0043771C optinit
00439188 procinit
00439C40 getop
0043B15C func_0043B15C
0043B1DC func_0043B1DC
0043B23C func_0043B23C
0043CE64 func_0043CE64
0043CFCC readnxtinst
00456A2C oneproc
*/
struct UstackEntry *ustack;

/*
0043771C optinit
00439188 procinit
0043CFCC readnxtinst
*/
struct ParstackEntry *parstackbot;

/*
0043771C optinit
00439188 procinit
0043B2B8 func_0043B2B8
0043CFCC readnxtinst
*/
struct ParstackEntry *parstack;

/*
0041FC80 genloadaddr
004205F8 genrlodrstr
0042A1C8 func_0042A1C8
0042A4CC func_0042A4CC
0042A7D0 func_0042A7D0
00439188 procinit
0043CFCC readnxtinst
0045E5C4 func_0045E5C4
0045FBB4 func_0045FBB4
0046123C func_0046123C
00465E50 spilltemps
004713E8 loopunroll
004761D0 tail_recursion
00476CA0 gettemp
*/
int tempdisp;

/*
00439188 procinit
00465E18 func_00465E18
00465E50 spilltemps
00476AA0 findbbtemps
00476CA0 gettemp
*/
struct Temploc *templochead;

/*
00439188 procinit
00465E50 spilltemps
00476CA0 gettemp
*/
struct Temploc *temploctail;

/*
004175BC copypropagate
0042020C gen_static_link
0042BF08 reemit
00431508 func_00431508
004324F4 findinduct
0043771C optinit
0043A0CC copyline
0043CFCC readnxtinst
004471AC codeimage
0044B4F4 clkilled
0044CD14 listplkilled
0044D4B4 listpskilled
00454D08 func_00454D08
0045C8A0 lvalaltered
0045CD78 expaltered
0045D208 patchvectors
004638C0 regdataflow
004710F0 str_to_temporary
004737E0 par_to_str
00473D84 func_00473D84
0047CE98 blktolev
*/
int curlevel;

/*
0041550C func_0041550C
004175BC copypropagate
0041EC10 igen3
0041EE30 outparlod
0041FB20 spilltemplodstr
0041FC80 genloadaddr
0042020C gen_static_link
004205F8 genrlodrstr
00420A3C prolog
00421C00 epilog
004230F0 func_004230F0
00426FA4 func_00426FA4
0042A1C8 func_0042A1C8
0042A4CC func_0042A4CC
0042A7D0 func_0042A7D0
0042B2C0 func_0042B2C0
0042B890 func_0042B890
0042BB4C func_0042BB4C
0042BF08 reemit
00439FA4 formal_parm_vreg
0043A0CC copyline
0043ABD0 incroccurrence
0043CBFC func_0043CBFC
0043CFCC readnxtinst
004494A4 aliaswithptr
00458998 func_00458998
0045DA18 formlivbb
00464BFC localcolor
00468A14 cupcosts
00469280 globalcolor
004710F0 str_to_temporary
004737E0 par_to_str
00473F04 pmov_to_mov
00475B80 next_stmt_is_ret1
00475C80 next_stmt_is_ret
00475DD0 no_ref_param
00475E38 func_00475E38
004761D0 tail_recursion
0047D610 searchvar
0047FF7C skipproc
*/
int curblk;

/*
004175BC copypropagate
0042BF08 reemit
0042F6CC controlflow
0043A0CC copyline
00456A2C oneproc
00458678 mtagwarning
0045B508 oneprocprepass
0045C804 proc_suppressed
004713E8 loopunroll
0047B320 stackerror
0047B3F8 boundswarning
0047B51C ovfwwarning
0047BDF8 dbgerror
0047FF7C skipproc
*/
char entnam0[1024];

/*
004175BC copypropagate
0042BF08 reemit
0042F6CC controlflow
0043A0CC copyline
00456A2C oneproc
00458678 mtagwarning
0045B508 oneprocprepass
0045C804 proc_suppressed
004713E8 loopunroll
0047B320 stackerror
0047B3F8 boundswarning
0047B51C ovfwwarning
0047BDF8 dbgerror
0047FF7C skipproc
*/
size_t entnam0len;

/*
00414108 func_00414108
0041C914 printregs
0041FD3C genloadnum
00439188 procinit
0043B084 func_0043B084
0047F8E4 getfloatval
*/
struct RealstoreData *realstore;

/*
00439188 procinit
0043C248 func_0043C248
0043C56C func_0043C56C
0043CFCC readnxtinst
*/
struct RealstoreData *currealpool;

/*
00439188 procinit
0043C248 func_0043C248
0043C56C func_0043C56C
0043CFCC readnxtinst
*/
int realdispdiv;

/*
00439188 procinit
0043C248 func_0043C248
0043C56C func_0043C56C
0043CFCC readnxtinst
*/
unsigned char realdispmod;

/*
0041FD3C genloadnum
0042BF08 reemit
00439188 procinit
0043CFCC readnxtinst
*/
int strpdisplace;

/*
0043771C optinit
00452DAC constarith
00456310 func_00456310
00456A2C oneproc
*/
bool filteringout;

/*
004175BC copypropagate
00456A2C oneproc
*/
long time1;

/*
0045806C main
*/
long timer;

/*
004175BC copypropagate
00456A2C oneproc
*/
long lasttime;

/*
00410204 codemotion
004175BC copypropagate
0041B8C8 printlinfo
0041BC58 printhoist
0041BEF4 printprecm
0041C1B0 printcm
0041C688 printscm
0041C914 printregs
0041D758 printsav
0042020C gen_static_link
00420A3C prolog
00421C00 epilog
0042BF08 reemit
0042F0FC bb_frequencies
0042F310 ingraph
0042F424 appendgraph
0042F6CC controlflow
004324F4 findinduct
00439188 procinit
0043CFCC readnxtinst
00455D38 analoop
0045D208 patchvectors
0045FBB4 func_0045FBB4
00461778 func_00461778
00461AAC makelivranges
004638C0 regdataflow
00464BFC localcolor
00465E50 spilltemps
00468A14 cupcosts
00469280 globalcolor
004713E8 loopunroll
00474110 opt_saved_regs
00475680 getexpsources
004761D0 tail_recursion
00479DC4 eliminduct
*/
struct Graphnode *graphhead;

/*
00410204 codemotion
004175BC copypropagate
0042F424 appendgraph
0042F5D4 func_0042F5D4
0042F6CC controlflow
004324F4 findinduct
00439188 procinit
0043CA8C func_0043CA8C
0043CFCC readnxtinst
00456310 func_00456310
00456A2C oneproc
004638C0 regdataflow
004713E8 loopunroll
00474110 opt_saved_regs
00475680 getexpsources
00479DC4 eliminduct
*/
struct Graphnode *graphtail;

/*
00439188 procinit
0043AA18 appendstorelist
0043AAF4 appendbbvarlst
0043ABD0 incroccurrence
0043B334 func_0043B334
0043B504 func_0043B504
0043CA8C func_0043CA8C
0043CBFC func_0043CBFC
0043CE64 func_0043CE64
0043CFCC readnxtinst
00445E44 exprimage
004471AC codeimage
0044B25C movkillprev
0044B308 strkillprev
0044B448 lodkillprev
0044C4D8 cupkillprev
0044C648 ciakillprev
0044D6EC parkillprev
00452DAC constarith
00456310 func_00456310
00456A2C oneproc
0046C710 unroll_searchloop
0046D158 unroll_check_istr_propcopy
0046D2C0 unroll_check_irst_propcopy
0046D428 oneloopblockexpr
0046E77C oneloopblockstmt
0046FA20 new_header_node
0046FC38 new_set_of_labels
0046FCD4 link_jump_in_loop
00470048 pre_loopblock
00470248 post_loopblock
0047090C form_bop
00470AAC form_rem
00470DD8 form_neq0
00470F88 form_neg
004710F0 str_to_temporary
004713E8 loopunroll
00473504 func_00473504
004737E0 par_to_str
00473D84 func_00473D84
00473F04 pmov_to_mov
004761D0 tail_recursion
0047CDA4 extendstat
0047E3BC binopwithconst
*/
struct Graphnode *curgraphnode;

/*
0042F6CC controlflow
00439188 procinit
0043CFCC readnxtinst
00445E44 exprimage
00455D38 analoop
00456310 func_00456310
00456A2C oneproc
00461AAC makelivranges
00464BFC localcolor
00467008 updatelivran
0046791C whyuncolored
00467F04 split
00468A14 cupcosts
00469280 globalcolor
0046FA20 new_header_node
004713E8 loopunroll
004761D0 tail_recursion
*/
unsigned int curstaticno;

/*
00448C94 find_ix_loadstores
00453B04 func_00453B04
00475680 getexpsources
*/
int curloopno;

/*
00439188 procinit
004761D0 tail_recursion
0047CDA4 extendstat
*/
struct Var *stathead;

/*
00439188 procinit
0043AA18 appendstorelist
0043CFCC readnxtinst
00456310 func_00456310
0046E77C oneloopblockstmt
0046FCD4 link_jump_in_loop
00470048 pre_loopblock
00470248 post_loopblock
004704B0 termination_test
004710F0 str_to_temporary
004713E8 loopunroll
004737E0 par_to_str
00473F04 pmov_to_mov
004761D0 tail_recursion
0047CDA4 extendstat
*/
struct Var *stattail;

/*
0043A0A8 func_0043A0A8
0047CE98 blktolev
*/
int blklev[128];

/*
0042020C gen_static_link
00420A3C prolog
0042BF08 reemit
00439188 procinit
0043CBFC func_0043CBFC
0043CFCC readnxtinst
0045DA18 formlivbb
004638C0 regdataflow
00464BFC localcolor
*/
int staticlinkloc;

/*
0040F8D0 resetsubdelete
004120E0 entryav
004121E4 entryant
0041297C func_0041297C
00412B18 func_00412B18
00413000 exprdelete
00413510 func_00413510
004135CC func_004135CC
0041550C func_0041550C
0041AC2C printtab
0042305C func_0042305C
004230F0 func_004230F0
00424FFC func_00424FFC
0043771C optinit
00445AEC trep_image
0044821C expr_has_direct_usage
0044EDF8 ilodfold
0045E0B8 varappear
0045E5C4 func_0045E5C4
00461AAC makelivranges
00477E20 func_00477E20
0047847C func_0047847C
004787B0 func_004787B0
00478820 func_00478820
004793C4 func_004793C4
00479778 func_00479778
00479B80 func_00479B80
0047C6E8 decreasecount
0047D000 exproccurred
0047D878 deccount
*/
void *nocopy; // TODO: fix type (0x40 bytes allocated)

/*
004230F0 func_004230F0
00426FA4 func_00426FA4
0042B2C0 func_0042B2C0
0043771C optinit
0045E5C4 func_0045E5C4
0045FBB4 func_0045FBB4
0046123C func_0046123C
00474FC8 func_00474FC8
*/
void *nota_candof; // TODO: fix type (0x1C bytes allocated)

/*
004150E4 func_004150E4
0041550C func_0041550C
0043771C optinit
*/
void *constprop; // TODO: fix type (0x10 bytes allocated)

/*
0042BF08 reemit
0045A480 oneinstruction
0045C150 prepass
0046FC38 new_set_of_labels
004713E8 loopunroll
004761D0 tail_recursion
*/
int maxlabnam;

/*
0043771C optinit
00464718 gettolivbb
00464AD4 alloc_livbb
00464BFC localcolor
004669A8 addadjacents
00469280 globalcolor
*/
struct livbb *dft_livbb;

/*
00410204 codemotion
004123C4 varinsert
004175BC copypropagate
0041A410 printitab
0041B580 printbv
004324F4 findinduct
00439188 procinit
00448530 has_direct_induct_usage
00448928 check_loop_induct_usages
0045D208 patchvectors
00461AAC makelivranges
004638C0 regdataflow
00464BFC localcolor
00465E50 spilltemps
00469280 globalcolor
00474FC8 func_00474FC8
00477E20 func_00477E20
00478ED4 func_00478ED4
00478FA0 func_00478FA0
00479DC4 eliminduct
0047CF0C newbit
*/
int bitposcount;

/*
004150E4 func_004150E4
0041550C func_0041550C
004175BC copypropagate
0041C914 printregs
00469280 globalcolor
*/
int oldbitposcount;

/*
0041C914 printregs
0042AADC func_0042AADC
0045E1F8 caninsertearly
00461AAC makelivranges
00465E50 spilltemps
00476AA0 findbbtemps
*/
int firstconstbit;

/*
004175BC copypropagate
0041C914 printregs
00439188 procinit
00445E44 exprimage
004638C0 regdataflow
*/
int r2bitpos[3];


/*
00410204 codemotion
004175BC copypropagate
0041B8C8 printlinfo
004324F4 findinduct
00439188 procinit
00444A84 isearchloop
0045D208 patchvectors
00461AAC makelivranges
004638C0 regdataflow
00478FA0 func_00478FA0
00479DC4 eliminduct
*/
struct BitVector varbits;

/*
004175BC copypropagate
0041C1B0 printcm
00439188 procinit
004638C0 regdataflow
00479DC4 eliminduct
*/
struct BitVector mvarbits;

/*
004175BC copypropagate
00439188 procinit
004638C0 regdataflow
00479DC4 eliminduct
*/
struct BitVector fsymbits;

/*
00410204 codemotion
004175BC copypropagate
004324F4 findinduct
00439188 procinit
00444A84 isearchloop
0045D208 patchvectors
00475680 getexpsources
00478ED4 func_00478ED4
00479DC4 eliminduct
*/
struct BitVector asgnbits;

/*
00410204 codemotion
0041B8C8 printlinfo
004324F4 findinduct
00439188 procinit
00444A84 isearchloop
00461AAC makelivranges
00479DC4 eliminduct
*/
struct BitVector slvarbits;

/*
00410204 codemotion
004175BC copypropagate
00439188 procinit
00444A84 isearchloop
00479DC4 eliminduct
*/
struct BitVector slasgnbits;

/*
00410204 codemotion
004123C4 varinsert
004175BC copypropagate
0041B8C8 printlinfo
0042AADC func_0042AADC
00439188 procinit
00446E18 searchstore
0045D208 patchvectors
0045E1F8 caninsertearly
00461AAC makelivranges
00475680 getexpsources
00479DC4 eliminduct
*/
struct BitVector storeop;

/*
00410204 codemotion
004175BC copypropagate
0041B8C8 printlinfo
0042AADC func_0042AADC
004324F4 findinduct
00439188 procinit
00446E18 searchstore
0045D208 patchvectors
00461AAC makelivranges
00474FC8 func_00474FC8
00475680 getexpsources
*/
struct BitVector trapop;

/*
00410204 codemotion
004175BC copypropagate
004324F4 findinduct
00439188 procinit
00446E18 searchstore
*/
struct BitVector trapconstop;

/*
0041550C func_0041550C
0041B8C8 printlinfo
0041C1B0 printcm
004324F4 findinduct
00439188 procinit
00444A84 isearchloop
00477E20 func_00477E20
00479DC4 eliminduct
0047E8C8 in_indmults
*/
struct BitVector indmults;

/*
00410204 codemotion
0041550C func_0041550C
004175BC copypropagate
0041B8C8 printlinfo
004324F4 findinduct
00439188 procinit
00444A84 isearchloop
00445E44 exprimage
004471AC codeimage
*/
struct BitVector boolexp;

/*
00410204 codemotion
00477E20 func_00477E20
00479B80 func_00479B80
00479DC4 eliminduct
*/
struct BitVector savedexp;

/*
004324F4 findinduct
00439188 procinit
00445AEC trep_image
00479DC4 eliminduct
*/
struct BitVector trepexp;

/*
00479778 func_00479778
00479DC4 eliminduct
*/
struct BitVector used_trepexp;

/*
004175BC copypropagate
0041C1B0 printcm
00439188 procinit
00461AAC makelivranges
004638C0 regdataflow
00464BFC localcolor
*/
struct BitVector outmodebits;

/*
004175BC copypropagate
0041C1B0 printcm
00439188 procinit
004638C0 regdataflow
*/
struct BitVector notinmodebits;

/*
00431508 func_00431508
00439188 procinit
00479DC4 eliminduct
*/
struct BitVector varfactor_muls;

/*
0041C688 printscm
00439188 procinit
0045E5C4 func_0045E5C4
0045FBB4 func_0045FBB4
004638C0 regdataflow
00465E50 spilltemps
00475680 getexpsources
00476AA0 findbbtemps
*/
struct BitVector coloreditems;

/*
004175BC copypropagate
004324F4 findinduct
00439188 procinit
00445E44 exprimage
004471AC codeimage
00469280 globalcolor
*/
struct BitVector vareqv;

/*
004175BC copypropagate
00439188 procinit
00445E44 exprimage
004471AC codeimage
00469280 globalcolor
00479DC4 eliminduct
*/
struct BitVector asgneqv;

/*
00439188 procinit
0045DA18 formlivbb
0045FBB4 func_0045FBB4
00461AAC makelivranges
004638C0 regdataflow
00464BFC localcolor
00469280 globalcolor
*/
struct BitVector coloredparms;

/*
0041C914 printregs
00439188 procinit
00461AAC makelivranges
004638C0 regdataflow
00464BFC localcolor
00469280 globalcolor
*/
struct BitVector iscolored12;

/*
00439188 procinit
0045DA18 formlivbb
00461AAC makelivranges
004638C0 regdataflow
00464BFC localcolor
00465E50 spilltemps
00469280 globalcolor
*/
struct BitVector iscolored[2];

/*
00410204 codemotion
004175BC copypropagate
004324F4 findinduct
0045FBB4 func_0045FBB4
00461AAC makelivranges
004638C0 regdataflow
00475680 getexpsources
00479DC4 eliminduct
*/
struct BitVector old;

// unused
struct BitVector workbvect;

/*
00410204 codemotion
004123C4 varinsert
004175BC copypropagate
0041A410 printitab
0041C914 printregs
004230F0 func_004230F0
00426FA4 func_00426FA4
0042AADC func_0042AADC
0042B2C0 func_0042B2C0
004324F4 findinduct
00439188 procinit
00448530 has_direct_induct_usage
00448928 check_loop_induct_usages
0045D208 patchvectors
0045DA18 formlivbb
0045E1F8 caninsertearly
0045E5C4 func_0045E5C4
0045FBB4 func_0045FBB4
0046123C func_0046123C
00461AAC makelivranges
004638C0 regdataflow
00464BFC localcolor
00465E50 spilltemps
00469280 globalcolor
00474FC8 func_00474FC8
00476AA0 findbbtemps
00477E20 func_00477E20
00478ED4 func_00478ED4
00478FA0 func_00478FA0
00479DC4 eliminduct
0047CF0C newbit
*/
struct BittabItem *bittab;

/*
00439188 procinit
0047CF0C newbit
*/
int bittabsize;

/*
004175BC copypropagate
00420A3C prolog
00421C00 epilog
00439188 procinit
0043A0CC copyline
0045DA18 formlivbb
004761D0 tail_recursion
0047DBB4 getoption
*/
void *pdeftab; // TODO: fix type

/*
00439188 procinit
0043A0CC copyline
0047DBB4 getoption
*/
int pdeftabsize;

/*
0041EC10 igen3
0041EE30 outparlod
0041FB20 spilltemplodstr
0041FC80 genloadaddr
0042020C gen_static_link
004205F8 genrlodrstr
004230F0 func_004230F0
00426FA4 func_00426FA4
0042A1C8 func_0042A1C8
0042A4CC func_0042A4CC
0042A7D0 func_0042A7D0
0042B2C0 func_0042B2C0
0042B890 func_0042B890
0042BB4C func_0042BB4C
0042BF08 reemit
00439188 procinit
0047DBB4 getoption
*/
int highestmdef;

/*
00420A3C prolog
00421C00 epilog
00439188 procinit
0043A0CC copyline
0045DA18 formlivbb
004761D0 tail_recursion
0047DBB4 getoption
*/
int pdefmax;

/*
00439188 procinit
0043A0CC copyline
*/
int pdefno;

/*
00410204 codemotion
0042020C gen_static_link
00430680 func_00430680
004324F4 findinduct
00439188 procinit
00444984 appendichain
00444A84 isearchloop
00445AEC trep_image
00446E18 searchstore
*/
void *itable[1619]; // TODO: fix type

/*
00453B04 func_00453B04
00456A2C oneproc
00475680 getexpsources
*/
void *toplevelloops; // TODO: fix type (some linked list of 20 bytes data + 4 byte next ptr)

/*
0042AADC func_0042AADC
0042B890 func_0042B890
0042BE58 func_0042BE58
00448C94 find_ix_loadstores
0046123C func_0046123C
00474FC8 func_00474FC8
0047558C func_0047558C
00475680 getexpsources
004804CC check_ix_candidate
00480540 check_loop_nest_ix_cand
00480624 check_ix_source
00480698 get_ix_source
*/
void *looptab; // TODO: fix type

/*
00434720 processargs
0043771C optinit
004394FC procinit_regs
*/
int actnuminteeregs;

/*
00434720 processargs
0043771C optinit
004394FC procinit_regs
*/
int actnuminterregs;

/*
00439188 procinit
00445E44 exprimage
*/
struct BitVector setofr2bbs[3];

/*
00465E50 spilltemps
00476AA0 findbbtemps
*/
struct BitVector setofspills;

/*
0041C914 printregs
0041F138 inreg
0042020C gen_static_link
00420A3C prolog
00421C00 epilog
0042BF08 reemit
0043771C optinit
004394FC procinit_regs
00461AAC makelivranges
00464BFC localcolor
00466544 updatecolorsleft
00469280 globalcolor
*/
int firsterreg[2];

/*
0041D758 printsav
00420A3C prolog
0042A1C8 func_0042A1C8
0042A4CC func_0042A4CC
0042A7D0 func_0042A7D0
0042BF08 reemit
0043771C optinit
004394FC procinit_regs
00466544 updatecolorsleft
00469280 globalcolor
00474110 opt_saved_regs
*/
int firsteereg[2];

/*
00420A3C prolog
0042BF08 reemit
0043771C optinit
004394FC procinit_regs
00461AAC makelivranges
00466544 updatecolorsleft
00469280 globalcolor
*/
int lasterreg[2];

/*
0041C914 printregs
0041D560 printinterproc
0041F138 inreg
0042020C gen_static_link
00420A3C prolog
00421C00 epilog
0042A1C8 func_0042A1C8
0042A4CC func_0042A4CC
0042BF08 reemit
0043771C optinit
004394FC procinit_regs
00461AAC makelivranges
00466544 updatecolorsleft
00469280 globalcolor
00474110 opt_saved_regs
*/
int lasteereg[2];

/*
00420A3C prolog
00421C00 epilog
0042269C gen_outparcode
0042BF08 reemit
0043771C optinit
0045FBB4 func_0045FBB4
00461AAC makelivranges
00464BFC localcolor
00469280 globalcolor
*/
int firstparmreg[2];

/*
0043771C optinit
004394FC procinit_regs
*/
int numoferregs[2];

/*
0043771C optinit
004394FC procinit_regs
0046732C isconstrained
*/
int regsinclass[2];

/*
00420A3C prolog
004394FC procinit_regs
00461AAC makelivranges
00469280 globalcolor
*/
int highesterreg[2];

/*
0041F138 inreg
00420A3C prolog
0042A7D0 func_0042A7D0
004394FC procinit_regs
00461AAC makelivranges
00469280 globalcolor
*/
int highesteereg[2];

/*
0042BF08 reemit
0043771C optinit
004394FC procinit_regs
00469280 globalcolor
*/
int regsinclass1;

/*
0043771C optinit
004394FC procinit_regs
*/
long long int seterregs[2];

/*
00420A3C prolog
00421C00 epilog
0043771C optinit
004394FC procinit_regs
*/
long long int seteeregs[2];

/*
0043771C optinit
004394FC procinit_regs
00467C34 needsplit
00467F04 split
*/
long long int setregs[2];

/*
00420A3C prolog
004394FC procinit_regs
00469280 globalcolor
*/
long long int usedeeregs[2];

/*
004394FC procinit_regs
00461AAC makelivranges
*/
long long int dftregsused;

/*
004394FC procinit_regs
00468A14 cupcosts
00469280 globalcolor
*/
long long int regscantpass;

/*
00420A3C prolog
0042A7D0 func_0042A7D0
0042BF08 reemit
00474110 opt_saved_regs
*/
int ugen_saved_eeregs;

/*
0043771C optinit
004676CC compute_save
00468A14 cupcosts
00469280 globalcolor
0047DBB4 getoption
*/
float movcostused;

/*
00439188 procinit
0043A0CC copyline
*/
bool passedbyfp;

/*
00420A3C prolog
00421C00 epilog
00439188 procinit
0043A0CC copyline
0045FBB4 func_0045FBB4
00461AAC makelivranges
00464BFC localcolor
*/
int offsetpassedbyint;

/*
00465E50 spilltemps
00476CA0 gettemp
*/
int tempcount;

/*
004175BC copypropagate
00439188 procinit
0043A0CC copyline
0043CFCC readnxtinst
0044B4F4 clkilled
0044BDFC cskilled
*/
void *aentptr; // TODO: fix type (some struct ptr)

/*
0042269C gen_outparcode
0042BF08 reemit
00439188 procinit
00439C40 getop
0043CFCC readnxtinst
*/
void *curmst; // TODO: fix type (some struct ptr)

// unused
int parnumber;

/*
00453430 func_00453430
00455D38 analoop
00474110 opt_saved_regs
*/
int numintval;

/*
00425618 func_00425618
00426FA4 func_00426FA4
00451764 func_00451764
0045FBB4 func_0045FBB4
*/
int noop;

/*
004175BC copypropagate
0042BF08 reemit
0043A0CC copyline
0043CFCC readnxtinst
00452DAC constarith
*/
int curlocpg;

/*
004175BC copypropagate
0042BF08 reemit
0042F374 init_graphnode
0043A0CC copyline
0043CFCC readnxtinst
00452DAC constarith
0047B3F8 boundswarning
0047B51C ovfwwarning
*/
int curlocln;

/*
0043CFCC readnxtinst
00456A2C oneproc
*/
bool loc_not_yet_seen;

/*
0040C254 setbit
0040C4C4 checkbvlist
0043A0CC copyline
0047CF0C newbit
*/
int bitvectorsize;

/*
0040F610 formbvlivran
0040F7B8 checkinitbvlivran
00455D38 analoop
00456A2C oneproc
00461AAC makelivranges
*/
int bvlivransize;

/*
00434720 processargs
0043771C optinit
0045806C main
*/
bool suppressopt;

/*
00434720 processargs
0043771C optinit
0045806C main
*/
bool o0o1specified;

/*
00410204 codemotion
004175BC copypropagate
0041EC10 igen3
0041F22C base_noalias
0041F530 base_gp_noalias
0041F5E4 base_sp_noalias
00420A3C prolog
0042BF08 reemit
00431508 func_00431508
004324F4 findinduct
00434720 processargs
0043771C optinit
0043A0CC copyline
0043CFCC readnxtinst
004471AC codeimage
0044938C overlapping
004494A4 aliaswithptr
0044962C pointtoheap
004496F0 slkilled
0044A5C8 smkilled
0044AAD0 sskilled
0044B4F4 clkilled
0044BD00 cmkilled
0044BDFC cskilled
0044C6D4 func_0044C6D4
0044CD14 listplkilled
0044CE80 func_0044CE80
0044D0C4 func_0044D0C4
0044D4B4 listpskilled
00454D08 func_00454D08
00455060 func_00455060
00458B88 assign_mtag
004590C8 searchproc
0045A480 oneinstruction
0045B508 oneprocprepass
0045BCA8 func_0045BCA8
0045BE98 processcallgraph
0045C8A0 lvalaltered
0045CD78 expaltered
0045D208 patchvectors
0045DA18 formlivbb
00461778 func_00461778
00461AAC makelivranges
004638C0 regdataflow
00468A14 cupcosts
00474110 opt_saved_regs
004761D0 tail_recursion
0047DBB4 getoption
*/
unsigned char lang;

/*
004496F0 slkilled
0044AAD0 sskilled
0044EDF8 ilodfold
00456A2C oneproc
00459698 make_subloc_veqv
00459828 insertvar
0045C150 prepass
*/
bool inlopt;

/*
004175BC copypropagate
00434720 processargs
00455518 func_00455518
00456A2C oneproc
0045806C main
004713E8 loopunroll
004761D0 tail_recursion
0047DBB4 getoption
*/
bool listwritten;

/*
00434720 processargs
*/
bool symwritten;

/*
0042BF08 reemit
00434720 processargs
0043771C optinit
00453C20 func_00453C20
00453ECC func_00453ECC
00456A2C oneproc
00469280 globalcolor
*/
bool usefeedback;

/*
00439C40 getop
0043CFCC readnxtinst
00456310 func_00456310
*/
int varrefs;

// unused
int totalvarref;

/*
00434720 processargs
0043771C optinit
00456310 func_00456310
*/
int varreflimit;

/*
00439C40 getop
00456310 func_00456310
*/
int curvarreflimit;

/*
004175BC copypropagate
0043771C optinit
0047DBB4 getoption
*/
bool docopyprog;

/*
004175BC copypropagate
00434720 processargs
0043771C optinit
00479DC4 eliminduct
0047DBB4 getoption
*/
bool dordstore;

/*
0043771C optinit
0047DBB4 getoption
*/
bool doscm;

/*
00410204 codemotion
0043771C optinit
0047DBB4 getoption
*/
bool docm;

/*
0041A410 printitab
0041AC2C printtab
0041B8C8 printlinfo
0041BC58 printhoist
0041BEF4 printprecm
0041C1B0 printcm
0041C688 printscm
0041C914 printregs
0041D560 printinterproc
0041D758 printsav
00434720 processargs
0043771C optinit
0043A0CC copyline
004713E8 loopunroll
*/
char proc_to_print[1024];

/*
0041A410 printitab
0041AC2C printtab
0041B8C8 printlinfo
0041BC58 printhoist
0041BEF4 printprecm
0041C1B0 printcm
0041C688 printscm
0041C914 printregs
0041D560 printinterproc
0041D758 printsav
0043A0CC copyline
004713E8 loopunroll
*/
bool at_proc_to_print;

/*
00434434 func_00434434
0043771C optinit
00456A2C oneproc
0045B508 oneprocprepass
0045C804 proc_suppressed
*/
struct StrList *ctrl_head;

/*
00410204 codemotion
004324F4 findinduct
0043771C optinit
00456A2C oneproc
00467C34 needsplit
00467F04 split
00469280 globalcolor
004713E8 loopunroll
0047DBB4 getoption
*/
int dbugno;

/*
0042BF08 reemit
00434720 processargs
0043771C optinit
*/
bool genbbnum;

/*
0041550C func_0041550C
00434720 processargs
0043771C optinit
0043ABD0 incroccurrence
0043CFCC readnxtinst
*/
bool doingcopy;

/*
00434720 processargs
0043771C optinit
0044F738 linearize
*/
bool doassoc;

/*
00434720 processargs
0043771C optinit
0045FBB4 func_0045FBB4
00461AAC makelivranges
00464BFC localcolor
*/
bool doprecolor;

/*
00434720 processargs
0043771C optinit
00469280 globalcolor
*/
bool dorlodrstropt;

/*
00434720 processargs
0043771C optinit
004669A8 addadjacents
*/
bool doheurab;

/*
00434720 processargs
0043771C optinit
00466DF8 allpreppout
00469280 globalcolor
*/
bool docreatebb;

/*
0042B1A8 func_0042B1A8
0042BF08 reemit
00434720 processargs
0043771C optinit
00474110 opt_saved_regs
*/
bool do_opt_saved_regs;

/*
00434720 processargs
0043771C optinit
0045E45C func_0045E45C
0047E6D8 constinreg
0047E87C ldainreg
*/
bool do_const_in_reg;

/*
00410204 codemotion
0041C1B0 printcm
004324F4 findinduct
00434720 processargs
0043771C optinit
*/
bool docodehoist;

/*
00431508 func_00431508
00434720 processargs
0043771C optinit
*/
bool dorecur;

/*
0041EC10 igen3
0041FB20 spilltemplodstr
0042B2C0 func_0042B2C0
0042B890 func_0042B890
0042BB4C func_0042BB4C
00434720 processargs
0043771C optinit
*/
bool dogenvreg;

/*
00434720 processargs
0043771C optinit
004761D0 tail_recursion
*/
bool dotail;

/*
00434720 processargs
0043771C optinit
004584D0 init_mtagtab
0045877C searchmtag_parm
00458B88 assign_mtag
*/
bool domtag;

/*
00434720 processargs
0043771C optinit
004394FC procinit_regs
00461778 func_00461778
*/
bool usingregoption;

/*
00434720 processargs
0043771C optinit
004394FC procinit_regs
0043A0CC copyline
0047DBB4 getoption
*/
bool no_r23;

/*
0043771C optinit
004394FC procinit_regs
0043A0CC copyline
*/
bool no_r3;

/*
004175BC copypropagate
00434720 processargs
0043771C optinit
00467C34 needsplit
00467F04 split
00469280 globalcolor
*/
bool dowhyuncolor;

/*
0041F22C base_noalias
00434720 processargs
0043771C optinit
004494A4 aliaswithptr
004496F0 slkilled
0044A5C8 smkilled
0044AAD0 sskilled
00458B88 assign_mtag
0045A480 oneinstruction
*/
bool nof77alias;

/*
0041F22C base_noalias
0041F5E4 base_sp_noalias
00434720 processargs
0043771C optinit
004494A4 aliaswithptr
004496F0 slkilled
0044A5C8 smkilled
0044AAD0 sskilled
0045A480 oneinstruction
*/
bool nopalias;

/*
00434720 processargs
0043771C optinit
0045A480 oneinstruction
0047DBB4 getoption
*/
bool fortran_lang;

/*
00410204 codemotion
00434720 processargs
0043771C optinit
*/
bool moremotion;

/*
00434720 processargs
0043771C optinit
00456A2C oneproc
0045806C main
*/
bool verbose;

/*
00420A3C prolog
00434720 processargs
0043771C optinit
004737E0 par_to_str
0047F400 fitparmreg
*/
bool bigendian;

/*
004394FC procinit_regs
0043CFCC readnxtinst
00456A2C oneproc
*/
bool usefp;

/*
00420A3C prolog
0042BF08 reemit
004394FC procinit_regs
0045A480 oneinstruction
0045B508 oneprocprepass
0045C150 prepass
00461AAC makelivranges
00469280 globalcolor
*/
bool someusefp;

/*
00434720 processargs
0043771C optinit
004590C8 searchproc
0045A3DC check_gp_relative
0045A480 oneinstruction
00469280 globalcolor
0047FF7C skipproc
*/
bool o3opt;

/*
00434720 processargs
0043771C optinit
00469280 globalcolor
*/
bool update_sym_file;

/*
00434720 processargs
0043771C optinit
00456A2C oneproc
0045806C main
00458678 mtagwarning
0045A480 oneinstruction
0047B3F8 boundswarning
0047B51C ovfwwarning
0047FF7C skipproc
*/
bool warned;

/*
0041D560 printinterproc
0041F138 inreg
00420A3C prolog
00421C00 epilog
0042BF08 reemit
00439188 procinit
004394FC procinit_regs
0043A0CC copyline
00456A2C oneproc
0045DA18 formlivbb
0045DFAC passedinreg
0045FBB4 func_0045FBB4
00461AAC makelivranges
00464BFC localcolor
00469280 globalcolor
*/
bool allcallersave;

/*
00420A3C prolog
00421C00 epilog
0042BF08 reemit
00439188 procinit
00456A2C oneproc
00469280 globalcolor
*/
bool propagate_ee_saves;

/*
00434720 processargs
0043771C optinit
0043CFCC readnxtinst
004496F0 slkilled
*/
bool f77_static_flag;

/*
00434720 processargs
0043771C optinit
*/
bool kpic_flag;

/*
00434720 processargs
0043771C optinit
0043CFCC readnxtinst
00451764 func_00451764
00452DAC constarith
*/
bool dokpicopt;

/*
0040F610 formbvlivran
00410204 codemotion
004137DC func_004137DC
00414108 func_00414108
004150E4 func_004150E4
0041550C func_0041550C
004175BC copypropagate
0042F424 appendgraph
00439188 procinit
0043AA18 appendstorelist
0043AAF4 appendbbvarlst
0043B504 func_0043B504
0043CA8C func_0043CA8C
0043CBFC func_0043CBFC
0043CFCC readnxtinst
00444984 appendichain
00444A84 isearchloop
00445E44 exprimage
00446E18 searchstore
004471AC codeimage
0044EDF8 ilodfold
0044F1B8 istrfold
0044F738 linearize
0044FF6C mergeconst
004510A0 distrlaw
00451764 func_00451764
00452DAC constarith
00456310 func_00456310
00456A2C oneproc
0045D208 patchvectors
0045DA18 formlivbb
0045E45C func_0045E45C
0045E5C4 func_0045E5C4
0045FBB4 func_0045FBB4
00461084 func_00461084
0046123C func_0046123C
00461640 func_00461640
00461AAC makelivranges
004638C0 regdataflow
00464AD4 alloc_livbb
00465CB8 insintf
00465E50 spilltemps
00467F04 split
00469280 globalcolor
00475680 getexpsources
0047BEF4 appendchain
0047CDA4 extendstat
0047F26C alloc_realloc
*/
bool outofmem;

/*
0042AADC func_0042AADC
0042BF08 reemit
00434720 processargs
0043771C optinit
0043CFCC readnxtinst
00456A2C oneproc
0045FBB4 func_0045FBB4
0046123C func_0046123C
00474FC8 func_00474FC8
00475680 getexpsources
*/
unsigned char mipsflag;

/*
00420A3C prolog
0042BF08 reemit
00434720 processargs
0043771C optinit
0045DA18 formlivbb
0045DFAC passedinreg
00461AAC makelivranges
00464BFC localcolor
0047E6D8 constinreg
*/
bool mips3_64data;

/*
00434720 processargs
0043771C optinit
0045DA18 formlivbb
0045E5C4 func_0045E5C4
0045FBB4 func_0045FBB4
00461084 func_00461084
0046123C func_0046123C
00461640 func_00461640
00461AAC makelivranges
*/
bool dwopcode;

/*
00434720 processargs
0043771C optinit
0045A3DC check_gp_relative
0045A480 oneinstruction
*/
int g_num;

/*
0042A1C8 func_0042A1C8
0042A4CC func_0042A4CC
0042A7D0 func_0042A7D0
00434720 processargs
0043771C optinit
0045E5C4 func_0045E5C4
0045FBB4 func_0045FBB4
00461AAC makelivranges
0046C710 unroll_searchloop
00473504 func_00473504
0047F400 fitparmreg
*/
int int_reg_size;

/*
004394FC procinit_regs
0045D208 patchvectors
0046732C isconstrained
*/
bool leaf_for_ugen;

/*
004175BC copypropagate
00439188 procinit
0043CFCC readnxtinst
004638C0 regdataflow
00479DC4 eliminduct
*/
bool has_exc_handler;

/*
00439188 procinit
0043CFCC readnxtinst
004761D0 tail_recursion
0047DBB4 getoption
*/
bool can_elim_tail;

/*
0041F22C base_noalias
0041F5E4 base_sp_noalias
00439188 procinit
0043CFCC readnxtinst
004494A4 aliaswithptr
004496F0 slkilled
0044A5C8 smkilled
0044AAD0 sskilled
0044B4F4 clkilled
0044BDFC cskilled
00458B88 assign_mtag
*/
bool use_c_semantics;

/*
0041EC10 igen3
0041EE30 outparlod
0041FB20 spilltemplodstr
0042020C gen_static_link
004205F8 genrlodrstr
004230F0 func_004230F0
00426FA4 func_00426FA4
0042A1C8 func_0042A1C8
0042A4CC func_0042A4CC
0042A7D0 func_0042A7D0
0042B2C0 func_0042B2C0
0042B890 func_0042B890
0042BB4C func_0042BB4C
0043771C optinit
0045E5C4 func_0045E5C4
0045FBB4 func_0045FBB4
0046123C func_0046123C
00465E50 spilltemps
004713E8 loopunroll
004761D0 tail_recursion
00476CA0 gettemp
0047DBB4 getoption
*/
bool stack_reversed;

/*
0041550C func_0041550C
00434720 processargs
0043771C optinit
0043CFCC readnxtinst
*/
bool strictieee;

/*
00434720 processargs
0043771C optinit
*/
bool fp32reg;

/*
00434720 processargs
0043771C optinit
004713E8 loopunroll
*/
bool multibbunroll;

/*
00434720 processargs
0043771C optinit
00456A2C oneproc
0045806C main
00458678 mtagwarning
0045A480 oneinstruction
0047B3F8 boundswarning
0047B51C ovfwwarning
0047FF7C skipproc
*/
unsigned char warn_flag;

/*
004175BC copypropagate
00421C00 epilog
0043A0CC copyline
00456A2C oneproc
*/
unsigned char entflag;

/*
00434720 processargs
0043771C optinit
004713E8 loopunroll
*/
int unroll_times;

/*
00434720 processargs
0043771C optinit
004713E8 loopunroll
*/
int unroll_limit;

/*
00434720 processargs
0043771C optinit
00456A2C oneproc
0045B508 oneprocprepass
*/
int sizethreshold;

/*
00459FB0 insertlda
0045BF44 checkforvreg
0045C150 prepass
*/
void *ldatab[3113]; // TODO: fix type (0x10 bytes allocated)

/*
00410204 codemotion
0041550C func_0041550C
004175BC copypropagate
0041D560 printinterproc
0042020C gen_static_link
00420A3C prolog
00421C00 epilog
0042BF08 reemit
0042F0FC bb_frequencies
004324F4 findinduct
00439188 procinit
004394FC procinit_regs
00439C40 getop
0043A0CC copyline
0043ABD0 incroccurrence
0043CFCC readnxtinst
0044B4F4 clkilled
0044BDFC cskilled
0044EDF8 ilodfold
0044F1B8 istrfold
00453C20 func_00453C20
00453ECC func_00453ECC
00456A2C oneproc
004584D0 init_mtagtab
0045A480 oneinstruction
0045B508 oneprocprepass
00461AAC makelivranges
00469280 globalcolor
004737E0 par_to_str
00474110 opt_saved_regs
00475FE8 fix_par_vreg
0047D838 entervregveqv
0047FF7C skipproc
*/
struct Proc *curproc;

/*
004175BC copypropagate
00431508 func_00431508
004324F4 findinduct
0043CFCC readnxtinst
004471AC codeimage
0044B4F4 clkilled
0044BDFC cskilled
0044CD14 listplkilled
0044D4B4 listpskilled
00454D08 func_00454D08
0045A480 oneinstruction
0045C150 prepass
0045C620 furthervarintree
0045C8A0 lvalaltered
0045CD78 expaltered
0045D208 patchvectors
004638C0 regdataflow
*/
struct Proc *indirprocs;

/*
0043CFCC readnxtinst
0045C150 prepass
00469280 globalcolor
*/
struct Proc *ciaprocs;

/*
004175BC copypropagate
0043771C optinit
0045C8A0 lvalaltered
0045D208 patchvectors
*/
void *gsptr; // TODO: fix type (0x34 bytes allocated)
