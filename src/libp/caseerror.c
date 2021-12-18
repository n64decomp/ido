#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*
0040F8D0 resetsubdelete
0040FD80 trap_implying
0040FF80 trap_implying_v
00410204 codemotion
004120E0 entryav
004121E4 entryant
0041297C exprant
00412B18 exprav
00413000 exprdelete
00413510 func_00413510
004135CC func_004135CC
00413684 func_00413684
004137DC func_004137DC
00414108 func_00414108
0041550C func_0041550C
004175BC copypropagate
0041A2A0 printmtyp
0041A410 printitab
0041AC2C printtab
004205F8 genrlodrstr
00422D04 func_00422D04
004230F0 func_004230F0
00424FFC func_00424FFC
00425618 func_00425618
00426DE8 func_00426DE8
00426FA4 func_00426FA4
0043005C func_0043005C
00430680 func_00430680
00430D74 func_00430D74
004310EC func_004310EC
00431508 candidate
00433B00 ivfactor
00439C40 getop
0043ABD0 incroccurrence
0043B504 func_0043B504
0043CFCC readnxtinst
00444A84 isearchloop
00445E44 exprimage
00446E18 searchstore
004494A4 aliaswithptr
0044B4F4 clkilled
0044BDFC cskilled
0044DF30 binaryovfw
0044E410 unaryovfw
0044E604 binaryfold
0044F3C0 unaryfold
0044F738 linearize
0044FF6C mergeconst
00451764 restructure
00452DAC constarith
00454F00 func_00454F00
00458B88 assign_mtag
00459698 make_subloc_veqv
00459828 insertvar
00459FB0 insertlda
0045A480 oneinstruction
0045C540 varintree
0045CBDC cupaltered
0045CD78 expaltered
0045E0B8 varappear
0045E5C4 func_0045E5C4
0045FBB4 func_0045FBB4
00461084 func_00461084
00465E50 spilltemps
0046C710 unroll_searchloop
0046D428 oneloopblockexpr
0046E77C oneloopblockstmt
0046FCD4 link_jump_in_loop
00470570 expr_instr
004712A4 reset_images
004736E0 func_004736E0
00474DC0 func_00474DC0
0047606C func_0047606C
00476AA0 findbbtemps
00476ECC func_00476ECC
00477118 func_00477118
00477854 func_00477854
00477B0C func_00477B0C
0047847C func_0047847C
004793C4 func_004793C4
0047966C func_0047966C
00479B80 func_00479B80
0047BFEC findsimilar
0047C284 copycoderep
0047C6E8 decreasecount
0047C960 increasecount
0047D000 exproccurred
0047D188 iexproccurred
0047D878 deccount
0047DBB4 getoption
0047E3BC binopwithconst
0047E6D8 constinreg
0047E938 checkincre
0047EBB0 findincre
0047ED9C countvars
0047F4C0 trap_imply
0047F620 trapstat_imply
0047FE1C func_0047FE1C
*/
void caseerror(int page, int line, const char *filename, size_t filename_len) {
    char *c_str = malloc(filename_len + 1);
    memcpy(c_str, filename, filename_len);
    c_str[filename_len] = '\0';
    fprintf(stderr, "No case matches value in case statement on page %d line %d file %s.\n", page, line, c_str);
}

void assert_err(const char *str, size_t len) {
    char *c_str = malloc(len + 1);
    memcpy(c_str, str, len);
    c_str[len] = '\0';
    fprintf(stderr, "assertion failed %s \n", c_str);
    fflush(stderr);
}
