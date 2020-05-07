#include "ucode.h"
#include "libp/libp.h"
#include "uoptdata.h"

__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
RO_1000A708:
    # 0041A410 printitab
    .ascii "    "

RO_1000A70C:
    # 0041A410 printitab
    .ascii "\"\"\" "

RO_1000A710:
    # 0041A410 printitab
    .ascii "vreg"

RO_1000A714:
    # 0041A410 printitab
    .ascii "} "

RO_1000A716:
    # 0041A410 printitab
    .ascii "} "

RO_1000A718:
    # 0041A410 printitab
    .ascii "ILDA"

RO_1000A71C:
    # 0041A410 printitab
    .ascii "} "

RO_1000A71E:
    # 0041A410 printitab
    .ascii "uoptdbg.p"

RO_1000A727:
    # 0041A410 printitab
    .ascii "isrconst "

RO_1000A730:
    # 0041A410 printitab
    .ascii "dumped  "

RO_1000A738:
    # 0041A410 printitab
    .ascii "empty   "

RO_1000A740:
    # 0041A410 printitab
    .ascii "isop    "

RO_1000A748:
    # 0041A410 printitab
    .ascii "issvar   "

RO_1000A751:
    # 0041A410 printitab
    .ascii "isilda   "

RO_1000A75A:
    # 0041A410 printitab
    .ascii "isvar   "

RO_1000A762:
    # 0041A410 printitab
    .ascii "islda   "

RO_1000A76A:
    # 0041A410 printitab
    .ascii "isconst "

RO_1000A772:
    # 0041A410 printitab
    .ascii "kind    op      l      r  "

RO_1000A78C:
    # 0041A410 printitab
    .ascii "  bit "

RO_1000A792:
    # 0041A410 printitab
    .ascii " index    "

    .balign 4
jtbl_1000A79C:
    # 0041A410 printitab
    .gpword .L0041A6E8
    .gpword .L0041A634
    .gpword .L0041A610
    .gpword .L0041A658
    .gpword .L0041A6C4
    .gpword .L0041A67C
    .gpword .L0041A6A0
    .gpword .L0041A70C
    .gpword .L0041A730

RO_1000A7C0:
    # 0041AC2C printtab
    .ascii " [nil]"

RO_1000A7C6:
    # 0041AC2C printtab
    .ascii " ["

RO_1000A7C8:
    # 0041AC2C printtab
    .ascii " [nil]"

RO_1000A7CE:
    # 0041AC2C printtab
    .ascii " ["

RO_1000A7D0:
    # 0041AC2C printtab
    .ascii "] "

RO_1000A7D2:
    # 0041AC2C printtab
    .ascii "] "

RO_1000A7D4:
    # 0041AC2C printtab
    .ascii "ILDA"

RO_1000A7D8:
    # 0041AC2C printtab
    .ascii "nil]"

RO_1000A7DC:
    # 0041AC2C printtab
    .ascii "] ["

RO_1000A7DF:
    # 0041AC2C printtab
    .ascii "nil] ["

RO_1000A7E5:
    # 0041AC2C printtab
    .ascii "uoptdbg.p"

RO_1000A7EE:
    # 0041AC2C printtab
    .ascii "isrconst "

RO_1000A7F7:
    # 0041AC2C printtab
    .ascii "dumped  "

RO_1000A7FF:
    # 0041AC2C printtab
    .ascii "empty   "

RO_1000A807:
    # 0041AC2C printtab
    .ascii "isop    "

RO_1000A80F:
    # 0041AC2C printtab
    .ascii "issvar   "

RO_1000A818:
    # 0041AC2C printtab
    .ascii "isilda   "

RO_1000A821:
    # 0041AC2C printtab
    .ascii "isvar   "

RO_1000A829:
    # 0041AC2C printtab
    .ascii "islda   "

RO_1000A831:
    # 0041AC2C printtab
    .ascii "isconst "

RO_1000A839:
    # 0041AC2C printtab
    .asciz "] "

    .balign 4
jtbl_1000A83C:
    # 0041AC2C printtab
    .gpword .L0041AE7C
    .gpword .L0041ADC8
    .gpword .L0041AD84
    .gpword .L0041ADEC
    .gpword .L0041AE58
    .gpword .L0041AE10
    .gpword .L0041AE34
    .gpword .L0041AEA0
    .gpword .L0041AEC4

RO_1000A860:
    # 0041B580 printbv
    .ascii ".."

RO_1000A862:
    # 0041B580 printbv
    .ascii ".."

RO_1000A864:
    # 0041B580 printbv
    .ascii ") ["

RO_1000A867:
    # 0041B8C8 printlinfo
    .ascii "indmults ****"

RO_1000A874:
    # 0041B8C8 printlinfo
    .ascii "boolexp ****"

RO_1000A880:
    # 0041B8C8 printlinfo
    .ascii "trapop ****"

RO_1000A88B:
    # 0041B8C8 printlinfo
    .ascii "storeop ****"

RO_1000A897:
    # 0041B8C8 printlinfo
    .ascii "slvarbits ****"

RO_1000A8A5:
    # 0041B8C8 printlinfo
    .ascii "varbits ****"

RO_1000A8B1:
    # 0041B8C8 printlinfo
    .ascii "indiracc --"

RO_1000A8BC:
    # 0041B8C8 printlinfo
    .ascii "expoccur --"

RO_1000A8C7:
    # 0041B8C8 printlinfo
    .ascii "absalters --"

RO_1000A8D3:
    # 0041B8C8 printlinfo
    .ascii "pavlocs --"

RO_1000A8DD:
    # 0041B8C8 printlinfo
    .ascii "alters --"

RO_1000A8E6:
    # 0041B8C8 printlinfo
    .ascii "avlocs --"

RO_1000A8EF:
    # 0041B8C8 printlinfo
    .ascii "antlocs --"

RO_1000A8F9:
    # 0041B8C8 printlinfo
    .ascii " ! ! ! ! !"

RO_1000A903:
    # 0041B8C8 printlinfo
    .ascii "! ! ! ! ! node"

RO_1000A911:
    # 0041BC58 printhoist
    .ascii "hoistedexp --"

RO_1000A91E:
    # 0041BC58 printhoist
    .ascii "pavout --"

RO_1000A927:
    # 0041BC58 printhoist
    .ascii "pavin --"

RO_1000A92F:
    # 0041BC58 printhoist
    .ascii "antout --"

RO_1000A938:
    # 0041BC58 printhoist
    .ascii "antin --"

RO_1000A940:
    # 0041BC58 printhoist
    .ascii "alters --"

RO_1000A949:
    # 0041BC58 printhoist
    .ascii "avlocs --"

RO_1000A952:
    # 0041BC58 printhoist
    .ascii "antlocs --"

RO_1000A95C:
    # 0041BC58 printhoist
    .ascii " ! ! ! ! !"

RO_1000A966:
    # 0041BC58 printhoist
    .ascii "! ! ! ! ! node"

RO_1000A974:
    # 0041BEF4 printprecm
    .ascii "pavout --"

RO_1000A97D:
    # 0041BEF4 printprecm
    .ascii "pavin --"

RO_1000A985:
    # 0041BEF4 printprecm
    .ascii "avout --"

RO_1000A98D:
    # 0041BEF4 printprecm
    .ascii "avin --"

RO_1000A994:
    # 0041BEF4 printprecm
    .ascii "absalters --"

RO_1000A9A0:
    # 0041BEF4 printprecm
    .ascii "pavlocs --"

RO_1000A9AA:
    # 0041BEF4 printprecm
    .ascii "alters --"

RO_1000A9B3:
    # 0041BEF4 printprecm
    .ascii "avlocs --"

RO_1000A9BC:
    # 0041BEF4 printprecm
    .ascii "antlocs --"

RO_1000A9C6:
    # 0041BEF4 printprecm
    .ascii " ! ! ! ! !"

RO_1000A9D0:
    # 0041BEF4 printprecm
    .ascii "! ! ! ! ! node"

RO_1000A9DE:
    # 0041C1B0 printcm
    .ascii "notinmodebits ****"

RO_1000A9F0:
    # 0041C1B0 printcm
    .ascii "outmodebits ****"

RO_1000AA00:
    # 0041C1B0 printcm
    .ascii "mvarbits ****"

RO_1000AA0D:
    # 0041C1B0 printcm
    .ascii "indmults ****"

RO_1000AA1A:
    # 0041C1B0 printcm
    .ascii "subinsert --"

RO_1000AA26:
    # 0041C1B0 printcm
    .ascii "subdelete --"

RO_1000AA32:
    # 0041C1B0 printcm
    .ascii "delete --"

RO_1000AA3B:
    # 0041C1B0 printcm
    .ascii "insert --"

RO_1000AA44:
    # 0041C1B0 printcm
    .ascii "hoistedexp --"

RO_1000AA51:
    # 0041C1B0 printcm
    .ascii "ppout --"

RO_1000AA59:
    # 0041C1B0 printcm
    .ascii "ppin --"

RO_1000AA60:
    # 0041C1B0 printcm
    .ascii "cand --"

RO_1000AA67:
    # 0041C1B0 printcm
    .ascii "iv --"

RO_1000AA6C:
    # 0041C1B0 printcm
    .ascii "antout --"

RO_1000AA75:
    # 0041C1B0 printcm
    .ascii "antin --"

RO_1000AA7D:
    # 0041C1B0 printcm
    .ascii "absalters --"

RO_1000AA89:
    # 0041C1B0 printcm
    .ascii "alters --"

RO_1000AA92:
    # 0041C1B0 printcm
    .ascii "avlocs --"

RO_1000AA9B:
    # 0041C1B0 printcm
    .ascii "antlocs --"

RO_1000AAA5:
    # 0041C1B0 printcm
    .ascii " ! ! ! ! !"

RO_1000AAAF:
    # 0041C1B0 printcm
    .ascii "! ! ! ! ! node"

RO_1000AABD:
    # 0041C688 printscm
    .ascii "coloreditems ****"

RO_1000AACE:
    # 0041C688 printscm
    .ascii "region --"

RO_1000AAD7:
    # 0041C688 printscm
    .ascii "sink --"

RO_1000AADE:
    # 0041C688 printscm
    .ascii "source --"

RO_1000AAE7:
    # 0041C688 printscm
    .ascii "absalters --"

RO_1000AAF3:
    # 0041C688 printscm
    .ascii "alters --"

RO_1000AAFC:
    # 0041C688 printscm
    .ascii "avlocs --"

RO_1000AB05:
    # 0041C688 printscm
    .ascii "antlocs --"

RO_1000AB0F:
    # 0041C688 printscm
    .ascii " ! ! ! ! !"

RO_1000AB19:
    # 0041C688 printscm
    .ascii "! ! ! ! ! node"

RO_1000AB27:
    # 0041C914 printregs
    .ascii "ppin \" \" "

RO_1000AB30:
    # 0041C914 printregs
    .ascii "indiracc \" \" "

RO_1000AB3D:
    # 0041C914 printregs
    .ascii "liveout \" \" "

RO_1000AB49:
    # 0041C914 printregs
    .ascii "active \" \" "

RO_1000AB54:
    # 0041C914 printregs
    .ascii "loclive \" \" "

RO_1000AB60:
    # 0041C914 printregs
    .ascii "locdef \" \" "

RO_1000AB6B:
    # 0041C914 printregs
    .ascii "appear \" \" "

RO_1000AB76:
    # 0041C914 printregs
    .ascii "regsused[2]: ["

RO_1000AB84:
    # 0041C914 printregs
    .ascii "regsused[1]: ["

RO_1000AB92:
    # 0041C914 printregs
    .ascii " loopdepth "

RO_1000AB9D:
    # 0041C914 printregs
    .ascii "% % % node"

RO_1000ABA7:
    # 0041C914 printregs
    .ascii "- live bb (default) "

RO_1000ABBB:
    # 0041C914 printregs
    .ascii "firstisstr deadout needreglod needregsave "

RO_1000ABE5:
    # 0041C914 printregs
    .ascii "- live bb -"

RO_1000ABF0:
    # 0041C914 printregs
    .ascii ":::interfere with:::"

RO_1000AC04:
    # 0041C914 printregs
    .ascii "forbidden: ["

RO_1000AC10:
    # 0041C914 printregs
    .ascii "adjsave, hasstore:"

RO_1000AC22:
    # 0041C914 printregs
    .ascii "const------>"

RO_1000AC2E:
    # 0041C914 printregs
    .ascii ">>>active<<<{"

RO_1000AC3B:
    # 0041D560 printinterproc
    .ascii "========= parregs ========="

RO_1000AC56:
    # 0041D560 printinterproc
    .ascii "********* regstaken *********"

RO_1000AC73:
    # 0041D758 printsav
    .ascii " lodinsertout:"

RO_1000AC81:
    # 0041D758 printsav
    .ascii " strinsertin:"

RO_1000AC8E:
    # 0041D758 printsav
    .ascii " eeavout:"

RO_1000AC97:
    # 0041D758 printsav
    .ascii " eeavin:"

RO_1000AC9F:
    # 0041D758 printsav
    .ascii " eeantout:"

RO_1000ACA9:
    # 0041D758 printsav
    .ascii " eeantin:"

RO_1000ACB2:
    # 0041D758 printsav
    .ascii " av:"

RO_1000ACB6:
    # 0041D758 printsav
    .ascii " ant:"

RO_1000ACBB:
    # 0041D758 printsav
    .ascii " app:"

RO_1000ACC0:
    # 0041D758 printsav
    .ascii " loopdepth "

RO_1000ACCB:
    # 0041D758 printsav
    .ascii "$ $ $ node"

RO_1000ACD5:
    # 0041DDD4 printstat
    .ascii " flow analysis"

RO_1000ACE3:
    # 0041DDD4 printstat
    .ascii " out of"

RO_1000ACEA:
    # 0041DDD4 printstat
    .ascii "Average data flow iterations:"

RO_1000AD07:
    # 0041DDD4 printstat
    .ascii " regaloctime="

RO_1000AD14:
    # 0041DDD4 printstat
    .ascii " dataflowtime="

RO_1000AD22:
    # 0041DDD4 printstat
    .ascii "lopttime="

RO_1000AD2B:
    # 0041DDD4 printstat
    .ascii "numcalloverheadlr="

RO_1000AD3D:
    # 0041DDD4 printstat
    .ascii " numnotwellformedlr="

RO_1000AD51:
    # 0041DDD4 printstat
    .ascii "numsparselr="

RO_1000AD5D:
    # 0041DDD4 printstat
    .ascii " aliasedoc="

RO_1000AD68:
    # 0041DDD4 printstat
    .ascii "num0occurlr="

RO_1000AD74:
    # 0041DDD4 printstat
    .ascii " numcantcoloredlr="

RO_1000AD86:
    # 0041DDD4 printstat
    .ascii "numcoloredlr="

RO_1000AD93:
    # 0041DDD4 printstat
    .ascii " allococ"

RO_1000AD9B:
    # 0041DDD4 printstat
    .ascii "numoc="

RO_1000ADA1:
    # 0041DDD4 printstat
    .ascii " numsplitlu="

RO_1000ADAD:
    # 0041DDD4 printstat
    .ascii "numlu="

RO_1000ADB3:
    # 0041DDD4 printstat
    .ascii " finalnumlr="

RO_1000ADBF:
    # 0041DDD4 printstat
    .ascii "numlr="

RO_1000ADC5:
    # 0041DDD4 printstat
    .ascii " aliasedlu="

RO_1000ADD0:
    # 0041DDD4 printstat
    .ascii "aliasedlr="

RO_1000ADDA:
    # 0041DDD4 printstat
    .ascii " contiglr="

RO_1000ADE4:
    # 0041DDD4 printstat
    .ascii "numcalls="

RO_1000ADED:
    # 0041DDD4 printstat
    .ascii " rstrs"

RO_1000ADF3:
    # 0041DDD4 printstat
    .ascii " rlods"

RO_1000ADF9:
    # 0041DDD4 printstat
    .ascii " totexprsav="

RO_1000AE05:
    # 0041DDD4 printstat
    .ascii "totexpsav="

RO_1000AE0F:
    # 0041DDD4 printstat
    .ascii " totexprref="

RO_1000AE1B:
    # 0041DDD4 printstat
    .ascii "totexpref="

RO_1000AE25:
    # 0041DDD4 printstat
    .ascii " totvarrsav="

RO_1000AE31:
    # 0041DDD4 printstat
    .ascii "totvarsav="

RO_1000AE3B:
    # 0041DDD4 printstat
    .ascii " totvarrref="

RO_1000AE47:
    # 0041DDD4 printstat
    .ascii "totvarref="

RO_1000AE51:
    # 0041DDD4 printstat
    .ascii " numstr="

RO_1000AE59:
    # 0041DDD4 printstat
    .ascii "total numexpr="

RO_1000AE67:
    # 0041DDD4 printstat
    .ascii " numsrinc="

RO_1000AE71:
    # 0041DDD4 printstat
    .ascii "numtstrep="

RO_1000AE7B:
    # 0041DDD4 printstat
    .ascii " numinsert="

RO_1000AE86:
    # 0041DDD4 printstat
    .ascii "numgcse="

RO_1000AE8E:
    # 0041DDD4 printstat
    .ascii " numrdstr="

RO_1000AE98:
    # 0041DDD4 printstat
    .ascii "numgcopy="

RO_1000AEA1:
    # 0041DDD4 printstat
    .ascii " numlrdstr="

RO_1000AEAC:
    # 0041DDD4 printstat
    .asciz "numlcse="

.data
D_1000FF70:
    # 0041A410 printitab
    # 0041AC2C printtab
    .ascii "uabs\x00   uadd\x00   uadj\x00   uaent\x00  uand\x00   uaos\x00   uasym\x00  ubgn\x00   ubgnb\x00  ubsub\x00  ucg1\x00   ucg2\x00   uchkh\x00  uchkl\x00  uchkn\x00  uchkt\x00  ucia\x00   uclab\x00  uclbd\x00  ucomm\x00  ucsym\x00  uctrl\x00  ucubd\x00  ucup\x00   ucvt\x00   ucvtl\x00  udec\x00   udef\x00   udif\x00   udiv\x00   udup\x00   uend\x00   uendb\x00  uent\x00   ueof\x00   uequ\x00   uesym\x00  ufill\x00  ufjp\x00   ufsym\x00  ugeq\x00   ugrt\x00   ugsym\x00  uhsym\x00  uicuf\x00  uidx\x00   uiequ\x00  uigeq\x00  uigrt\x00  uijp\x00   uilda\x00  uildv\x00  uileq\x00  uiles\x00  uilod\x00  uinc\x00   uineq\x00  uinit\x00  uinn\x00   uint\x00   uior\x00   uisld\x00  uisst\x00  uistr\x00  uistv\x00  uixa\x00   ulab\x00   ulbd\x00   ulbdy\x00  ulbgn\x00  ulca\x00   ulda\x00   uldap\x00  uldc\x00   uldef\x00  uldsp\x00  ulend\x00  uleq\x00   ules\x00   ulex\x00   ulnot\x00  uloc\x00   ulod\x00   ulsym\x00  ultrm\x00  umax\x00   umin\x00   umod\x00   umov\x00   umovv\x00  umpmv\x00  umpy\x00   umst\x00   umus\x00   uneg\x00   uneq\x00   unop\x00   unot\x00   uodd\x00   uoptn\x00  upar\x00   updef\x00  upmov\x00  upop\x00   uregs\x00  urem\x00   uret\x00   urlda\x00  urldc\x00  urlod\x00  urnd\x00   urpar\x00  urstr\x00  usdef\x00  usgs\x00   ushl\x00   ushr\x00   usign\x00  usqr\x00   usqrt\x00  ussym\x00  ustep\x00  ustp\x00   ustr\x00   ustsp\x00  usub\x00   uswp\x00   utjp\x00   utpeq\x00  utpge\x00  utpgt\x00  utple\x00  utplt\x00  utpne\x00  utyp\x00   uubd\x00   uujp\x00   uunal\x00  uuni\x00   uvreg\x00  uxjp\x00   uxor\x00   uxpar\x00  umtag\x00  ualia\x00  uildi\x00  uisti\x00  uirld\x00  uirst\x00  uldrc\x00  umsym\x00  urcuf\x00  uksym\x00  uosym\x00  uirlv\x00  uirsv\x00\x00 "

D_10010450:
    # 0041C914 printregs
    .ascii "notloopfirstbb\x00 loopfirstbb\x00canunroll\x00\x00 \x00\x00\x00\x00\x00\x00\x00\x00"



.bss
    .balign 4
# 1001C544
glabel numlcse
    # 0041DDD4 printstat
    # 0043771C optinit
    # 0047C960 increasecount
    .space 4
    .size numlcse, 4
    .type numlcse, @object

    .balign 4
# 1001C548
glabel numlrdstr
    # 0041DDD4 printstat
    # 0043771C optinit
    .space 4
    .size numlrdstr, 4
    .type numlrdstr, @object

    .balign 4
# 1001C54C
glabel numgcopy
    # 0041DDD4 printstat
    # 0043771C optinit
    .space 4
    .size numgcopy, 4
    .type numgcopy, @object

    .balign 4
# 1001C550
glabel numrdstr
    # 004175BC copypropagate
    # 0041DDD4 printstat
    # 0043771C optinit
    .space 4
    .size numrdstr, 4
    .type numrdstr, @object

    .balign 4
# 1001C554
glabel numgcse
    # 0041DDD4 printstat
    # 0043771C optinit
    .space 4
    .size numgcse, 4
    .type numgcse, @object

    .balign 4
# 1001C558
glabel numinsert
    # 00410204 codemotion
    # 0041DDD4 printstat
    # 0043771C optinit
    .space 4
    .size numinsert, 4
    .type numinsert, @object

    .balign 4
# 1001C55C
glabel numtstrep
    # 0041DDD4 printstat
    # 0043771C optinit
    # 00479778 func_00479778
    .space 4
    .size numtstrep, 4
    .type numtstrep, @object

    .balign 4
# 1001C560
glabel numsrinc
    # 0041DDD4 printstat
    # 0043771C optinit
    .space 4
    .size numsrinc, 4
    .type numsrinc, @object

    .balign 4
# 1001C564
glabel numexpr
    # 0041DDD4 printstat
    # 0043771C optinit
    .space 4
    .size numexpr, 4
    .type numexpr, @object

    .balign 4
# 1001C568
glabel numstr
    # 0041DDD4 printstat
    # 0043771C optinit
    .space 4
    .size numstr, 4
    .type numstr, @object

    .balign 4
# 1001C56C
glabel totvarref
    # 0041DDD4 printstat
    # 0043771C optinit
    .space 4
    .size totvarref, 4
    .type totvarref, @object

    .balign 4
# 1001C570
glabel totvarrref
    # 0041DDD4 printstat
    # 0043771C optinit
    .space 4
    .size totvarrref, 4
    .type totvarrref, @object

    .balign 4
# 1001C574
glabel totvarsav
    # 0041DDD4 printstat
    # 0043771C optinit
    .space 4
    .size totvarsav, 4
    .type totvarsav, @object

    .balign 4
# 1001C578
glabel totvarrsav
    # 0041DDD4 printstat
    # 0043771C optinit
    .space 4
    .size totvarrsav, 4
    .type totvarrsav, @object

    .balign 4
# 1001C57C
glabel totexpref
    # 0041DDD4 printstat
    # 0043771C optinit
    .space 4
    .size totexpref, 4
    .type totexpref, @object

    .balign 4
# 1001C580
glabel totexprref
    # 0041DDD4 printstat
    # 0043771C optinit
    .space 4
    .size totexprref, 4
    .type totexprref, @object

    .balign 4
# 1001C584
glabel totexpsav
    # 0041DDD4 printstat
    # 0043771C optinit
    .space 4
    .size totexpsav, 4
    .type totexpsav, @object

    .balign 4
# 1001C588
glabel totexprsav
    # 0041DDD4 printstat
    # 0043771C optinit
    .space 4
    .size totexprsav, 4
    .type totexprsav, @object

    .balign 4
# 1001C58C
glabel totvarrlods
    # 0041DDD4 printstat
    # 004205F8 genrlodrstr
    # 0043771C optinit
    .space 4
    .size totvarrlods, 4
    .type totvarrlods, @object

    .balign 4
# 1001C590
glabel totvarrstrs
    # 0041DDD4 printstat
    # 004205F8 genrlodrstr
    # 0043771C optinit
    .space 4
    .size totvarrstrs, 4
    .type totvarrstrs, @object

    .balign 4
# 1001C594
glabel totexprlods
    # 0041DDD4 printstat
    # 004205F8 genrlodrstr
    # 0043771C optinit
    .space 4
    .size totexprlods, 4
    .type totexprlods, @object

    .balign 4
# 1001C598
glabel totexprstrs
    # 0041DDD4 printstat
    # 004205F8 genrlodrstr
    # 0043771C optinit
    .space 4
    .size totexprstrs, 4
    .type totexprstrs, @object

    .balign 4
# 1001C59C
glabel lopttime
    # 0041DDD4 printstat
    # 0043771C optinit
    # 00456A2C oneproc
    .space 4
    .size lopttime, 4
    .type lopttime, @object

    .balign 4
# 1001C5A0
glabel dataflowtime
    # 00410204 codemotion
    # 004175BC copypropagate
    # 0041DDD4 printstat
    # 0043771C optinit
    # 004638C0 regdataflow
    # 00479DC4 eliminduct
    .space 4
    .size dataflowtime, 4
    .type dataflowtime, @object

    .balign 4
# 1001C5A4
glabel dataflowiter
    # 00410204 codemotion
    # 004175BC copypropagate
    # 0041DDD4 printstat
    # 0043771C optinit
    # 004638C0 regdataflow
    # 00475680 getexpsources
    # 00479DC4 eliminduct
    .space 4
    .size dataflowiter, 4
    .type dataflowiter, @object

    .balign 4
# 1001C5A8
glabel numdataflow
    # 00410204 codemotion
    # 004175BC copypropagate
    # 0041DDD4 printstat
    # 0043771C optinit
    # 004638C0 regdataflow
    # 00475680 getexpsources
    # 00479DC4 eliminduct
    .space 4
    .size numdataflow, 4
    .type numdataflow, @object

    .balign 4
# 1001C5AC
glabel regaloctime
    # 0041DDD4 printstat
    # 0043771C optinit
    # 00456A2C oneproc
    .space 4
    .size regaloctime, 4
    .type regaloctime, @object

    .balign 4
# 1001C5B0
glabel lastdftime
    # 00410204 codemotion
    # 004175BC copypropagate
    # 004638C0 regdataflow
    # 00475680 getexpsources
    # 00479DC4 eliminduct
    .space 4
    .size lastdftime, 4
    .type lastdftime, @object

    .balign 4
# 1001C5B4
glabel numlr
    # 0041DDD4 printstat
    # 00465E50 spilltemps
    .space 4
    .size numlr, 4
    .type numlr, @object

    .balign 4
# 1001C5B8
glabel finalnumlr
    # 0041DDD4 printstat
    # 00465E50 spilltemps
    # 00467F04 split
    .space 4
    .size finalnumlr, 4
    .type finalnumlr, @object

    .balign 4
# 1001C5BC
glabel numlu
    # 0041DDD4 printstat
    # 0045DA18 formlivbb
    # 00461AAC makelivranges
    # 00464BFC localcolor
    .space 4
    .size numlu, 4
    .type numlu, @object

    .balign 4
# 1001C5C0
glabel numoc
    # 0041DDD4 printstat
    .space 4
    .size numoc, 4
    .type numoc, @object

    .balign 4
# 1001C5C4
glabel numsplitlu
    # 0041DDD4 printstat
    # 00465E50 spilltemps
    # 00467F04 split
    .space 4
    .size numsplitlu, 4
    .type numsplitlu, @object

    .balign 4
# 1001C5C8
glabel numcalls
    # 0041DDD4 printstat
    # 0042BF08 reemit
    .space 4
    .size numcalls, 4
    .type numcalls, @object

    .balign 4
# 1001C5CC
glabel contiglr
    # 0041DDD4 printstat
    # 00465E50 spilltemps
    # 0046791C whyuncolored
    # 00467C34 needsplit
    # 00467F04 split
    # 00469280 globalcolor
    .space 4
    .size contiglr, 4
    .type contiglr, @object

    .balign 4
# 1001C5D0
glabel aliasedlr
    # 004175BC copypropagate
    # 0041DDD4 printstat
    .space 4
    .size aliasedlr, 4
    .type aliasedlr, @object

    .balign 4
# 1001C5D4
glabel aliasedlu
    # 004175BC copypropagate
    # 0041DDD4 printstat
    .space 4
    .size aliasedlu, 4
    .type aliasedlu, @object

    .balign 4
# 1001C5D8
glabel aliasedoc
    # 004175BC copypropagate
    # 0041DDD4 printstat
    .space 4
    .size aliasedoc, 4
    .type aliasedoc, @object

    .balign 4
# 1001C5DC
glabel numcoloredlr
    # 0041DDD4 printstat
    # 00465E50 spilltemps
    # 00469280 globalcolor
    .space 4
    .size numcoloredlr, 4
    .type numcoloredlr, @object

    .balign 4
# 1001C5E0
glabel numcantcoloredlr
    # 0041DDD4 printstat
    # 00465E50 spilltemps
    # 00467C34 needsplit
    .space 4
    .size numcantcoloredlr, 4
    .type numcantcoloredlr, @object

    .balign 4
# 1001C5E4
glabel num0occurlr
    # 0041DDD4 printstat
    # 00465E50 spilltemps
    # 0046791C whyuncolored
    # 00467F04 split
    .space 4
    .size num0occurlr, 4
    .type num0occurlr, @object

    .balign 4
# 1001C5E8
glabel numcalloverheadlr
    # 0041DDD4 printstat
    # 00465E50 spilltemps
    # 00467F04 split
    # 00469280 globalcolor
    .space 4
    .size numcalloverheadlr, 4
    .type numcalloverheadlr, @object

    .balign 4
# 1001C5EC
glabel numsparselr
    # 0041DDD4 printstat
    # 00465E50 spilltemps
    # 0046791C whyuncolored
    .space 4
    .size numsparselr, 4
    .type numsparselr, @object

    .balign 4
# 1001C5F0
glabel numnotwellformedlr
    # 0041DDD4 printstat
    # 00465E50 spilltemps
    # 0046791C whyuncolored
    .space 4
    .size numnotwellformedlr, 4
    .type numnotwellformedlr, @object

    .balign 4
# 1001C5F4
glabel allococ
    # 0041DDD4 printstat
    # 00465E50 spilltemps
    # 00467B8C inc_allococ
    .space 4
    .size allococ, 4
    .type allococ, @object


)"");

/*
0041A410 printitab
0041AC2C printtab
*/
void printmtyp(enum Memtype type) {
    switch ((enum Memtype)(unsigned char)type) {
        case Zmt: write_char(list.c_file, 'Z', 1); break;
        case Pmt: write_char(list.c_file, 'P', 1); break;
        case Tmt: write_char(list.c_file, 'T', 1); break;
        case Smt: write_char(list.c_file, 'S', 1); break;
        case Mmt: write_char(list.c_file, 'M', 1); break;
        case Rmt: write_char(list.c_file, 'R', 1); break;
        case Amt: write_char(list.c_file, 'A', 1); break;
        default: caseerror(1, 42, "uoptdbg.p", 9);
    }
}

/*
00456A2C oneproc
*/
#if 0
void printitab(void) {
    int i;

    if (proc_to_print[0] == ' ' || at_proc_to_print) {
        write_string(list.c_file, " index    ", 0xA, 0xA);
        write_string(list.c_file, "  bit ", 6, 6);
        write_string(list.c_file, "kind    op      l      r  ", 0x1A, 0x1A);
        writeln(list.c_file);

        for (i = 0; i < bitposcount; i++) {
            write_char(list.c_file, '{', 1);
            ...
        }
    }
}
#endif

__asm__(R""(

.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text

glabel printitab
    .ent printitab
    # 00456A2C oneproc
/* 0041A410 3C1C0FC0 */  .cpload $t9
/* 0041A414 279CFE80 */  
/* 0041A418 0399E021 */  
/* 0041A41C 8F8E8DE8 */  lw     $t6, %got(proc_to_print)($gp)
/* 0041A420 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 0041A424 24010020 */  li    $at, 32
/* 0041A428 91CE0000 */  lbu   $t6, ($t6)
/* 0041A42C AFBF0034 */  sw    $ra, 0x34($sp)
/* 0041A430 AFBC0030 */  sw    $gp, 0x30($sp)
/* 0041A434 AFB4002C */  sw    $s4, 0x2c($sp)
/* 0041A438 AFB30028 */  sw    $s3, 0x28($sp)
/* 0041A43C AFB20024 */  sw    $s2, 0x24($sp)
/* 0041A440 AFB10020 */  sw    $s1, 0x20($sp)
/* 0041A444 11C10005 */  beq   $t6, $at, .L0041A45C
/* 0041A448 AFB0001C */   sw    $s0, 0x1c($sp)
/* 0041A44C 8F8F8A8C */  lw     $t7, %got(at_proc_to_print)($gp)
/* 0041A450 91EF0000 */  lbu   $t7, ($t7)
/* 0041A454 51E001EE */  beql  $t7, $zero, .L0041AC10
/* 0041A458 8FBF0034 */   lw    $ra, 0x34($sp)
.L0041A45C:
/* 0041A45C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041A460 8F928CCC */  lw     $s2, %got(list)($gp)
/* 0041A464 8F858044 */  lw    $a1, %got(RO_1000A792)($gp)
/* 0041A468 0000A025 */  move  $s4, $zero
/* 0041A46C 2406000A */  li    $a2, 10
/* 0041A470 2407000A */  li    $a3, 10
/* 0041A474 8E440000 */  lw    $a0, ($s2)
/* 0041A478 0320F809 */  jalr  $t9
/* 0041A47C 24A5A792 */   addiu $a1, %lo(RO_1000A792) # addiu $a1, $a1, -0x586e
/* 0041A480 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041A484 8E440000 */  lw    $a0, ($s2)
/* 0041A488 24060006 */  li    $a2, 6
/* 0041A48C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041A490 8F858044 */  lw    $a1, %got(RO_1000A78C)($gp)
/* 0041A494 24070006 */  li    $a3, 6
/* 0041A498 0320F809 */  jalr  $t9
/* 0041A49C 24A5A78C */   addiu $a1, %lo(RO_1000A78C) # addiu $a1, $a1, -0x5874
/* 0041A4A0 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041A4A4 8E440000 */  lw    $a0, ($s2)
/* 0041A4A8 2406001A */  li    $a2, 26
/* 0041A4AC 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041A4B0 8F858044 */  lw    $a1, %got(RO_1000A772)($gp)
/* 0041A4B4 2407001A */  li    $a3, 26
/* 0041A4B8 0320F809 */  jalr  $t9
/* 0041A4BC 24A5A772 */   addiu $a1, %lo(RO_1000A772) # addiu $a1, $a1, -0x588e
/* 0041A4C0 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041A4C4 8E440000 */  lw    $a0, ($s2)
/* 0041A4C8 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041A4CC 0320F809 */  jalr  $t9
/* 0041A4D0 00000000 */   nop   
/* 0041A4D4 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041A4D8 001498C0 */  sll   $s3, $s4, 3
/* 0041A4DC 8F9889E0 */  lw     $t8, %got(bitposcount)($gp)
/* 0041A4E0 8F180000 */  lw    $t8, ($t8)
/* 0041A4E4 530001CA */  beql  $t8, $zero, .L0041AC10
/* 0041A4E8 8FBF0034 */   lw    $ra, 0x34($sp)
.L0041A4EC:
/* 0041A4EC 8F9989EC */  lw     $t9, %got(bittab)($gp)
/* 0041A4F0 8E500000 */  lw    $s0, ($s2)
/* 0041A4F4 2405007B */  li    $a1, 123
/* 0041A4F8 8F390000 */  lw    $t9, ($t9)
/* 0041A4FC 24060001 */  li    $a2, 1
/* 0041A500 2407000A */  li    $a3, 10
/* 0041A504 03334021 */  addu  $t0, $t9, $s3
/* 0041A508 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041A50C 8D110000 */  lw    $s1, ($t0)
/* 0041A510 02002025 */  move  $a0, $s0
/* 0041A514 0320F809 */  jalr  $t9
/* 0041A518 00000000 */   nop   
/* 0041A51C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041A520 02002025 */  move  $a0, $s0
/* 0041A524 96250004 */  lhu   $a1, 4($s1)
/* 0041A528 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041A52C 24060004 */  li    $a2, 4
/* 0041A530 2407000A */  li    $a3, 10
/* 0041A534 0320F809 */  jalr  $t9
/* 0041A538 00000000 */   nop   
/* 0041A53C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041A540 8E500000 */  lw    $s0, ($s2)
/* 0041A544 2405007C */  li    $a1, 124
/* 0041A548 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041A54C 24060001 */  li    $a2, 1
/* 0041A550 2407000A */  li    $a3, 10
/* 0041A554 0320F809 */  jalr  $t9
/* 0041A558 02002025 */   move  $a0, $s0
/* 0041A55C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041A560 02002025 */  move  $a0, $s0
/* 0041A564 96250006 */  lhu   $a1, 6($s1)
/* 0041A568 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041A56C 24060001 */  li    $a2, 1
/* 0041A570 2407000A */  li    $a3, 10
/* 0041A574 0320F809 */  jalr  $t9
/* 0041A578 00000000 */   nop   
/* 0041A57C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041A580 8E500000 */  lw    $s0, ($s2)
/* 0041A584 2405007D */  li    $a1, 125
/* 0041A588 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041A58C 24060001 */  li    $a2, 1
/* 0041A590 2407000A */  li    $a3, 10
/* 0041A594 0320F809 */  jalr  $t9
/* 0041A598 02002025 */   move  $a0, $s0
/* 0041A59C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041A5A0 02002025 */  move  $a0, $s0
/* 0041A5A4 96250002 */  lhu   $a1, 2($s1)
/* 0041A5A8 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041A5AC 24060007 */  li    $a2, 7
/* 0041A5B0 2407000A */  li    $a3, 10
/* 0041A5B4 0320F809 */  jalr  $t9
/* 0041A5B8 00000000 */   nop   
/* 0041A5BC 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041A5C0 8E500000 */  lw    $s0, ($s2)
/* 0041A5C4 24050020 */  li    $a1, 32
/* 0041A5C8 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041A5CC 24060001 */  li    $a2, 1
/* 0041A5D0 2407000A */  li    $a3, 10
/* 0041A5D4 0320F809 */  jalr  $t9
/* 0041A5D8 02002025 */   move  $a0, $s0
/* 0041A5DC 92220000 */  lbu   $v0, ($s1)
/* 0041A5E0 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041A5E4 24040001 */  li    $a0, 1
/* 0041A5E8 2C410009 */  sltiu $at, $v0, 9
/* 0041A5EC 10200059 */  beqz  $at, .L0041A754
/* 0041A5F0 24050046 */   li    $a1, 70
/* 0041A5F4 8F818044 */  lw    $at, %got(jtbl_1000A79C)($gp)
/* 0041A5F8 00024880 */  sll   $t1, $v0, 2
/* 0041A5FC 00290821 */  addu  $at, $at, $t1
/* 0041A600 8C29A79C */  lw    $t1, %lo(jtbl_1000A79C)($at)
/* 0041A604 013C4821 */  addu  $t1, $t1, $gp
/* 0041A608 01200008 */  jr    $t1
/* 0041A60C 00000000 */   nop   
.L0041A610:
/* 0041A610 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041A614 8F858044 */  lw    $a1, %got(RO_1000A76A)($gp)
/* 0041A618 02002025 */  move  $a0, $s0
/* 0041A61C 24060008 */  li    $a2, 8
/* 0041A620 24070008 */  li    $a3, 8
/* 0041A624 0320F809 */  jalr  $t9
/* 0041A628 24A5A76A */   addiu $a1, %lo(RO_1000A76A) # addiu $a1, $a1, -0x5896
/* 0041A62C 1000004F */  b     .L0041A76C
/* 0041A630 8FBC0030 */   lw    $gp, 0x30($sp)
.L0041A634:
/* 0041A634 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041A638 8F858044 */  lw    $a1, %got(RO_1000A762)($gp)
/* 0041A63C 02002025 */  move  $a0, $s0
/* 0041A640 24060008 */  li    $a2, 8
/* 0041A644 24070008 */  li    $a3, 8
/* 0041A648 0320F809 */  jalr  $t9
/* 0041A64C 24A5A762 */   addiu $a1, %lo(RO_1000A762) # addiu $a1, $a1, -0x589e
/* 0041A650 10000046 */  b     .L0041A76C
/* 0041A654 8FBC0030 */   lw    $gp, 0x30($sp)
.L0041A658:
/* 0041A658 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041A65C 8F858044 */  lw    $a1, %got(RO_1000A75A)($gp)
/* 0041A660 02002025 */  move  $a0, $s0
/* 0041A664 24060008 */  li    $a2, 8
/* 0041A668 24070008 */  li    $a3, 8
/* 0041A66C 0320F809 */  jalr  $t9
/* 0041A670 24A5A75A */   addiu $a1, %lo(RO_1000A75A) # addiu $a1, $a1, -0x58a6
/* 0041A674 1000003D */  b     .L0041A76C
/* 0041A678 8FBC0030 */   lw    $gp, 0x30($sp)
.L0041A67C:
/* 0041A67C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041A680 8F858044 */  lw    $a1, %got(RO_1000A751)($gp)
/* 0041A684 02002025 */  move  $a0, $s0
/* 0041A688 24060009 */  li    $a2, 9
/* 0041A68C 24070009 */  li    $a3, 9
/* 0041A690 0320F809 */  jalr  $t9
/* 0041A694 24A5A751 */   addiu $a1, %lo(RO_1000A751) # addiu $a1, $a1, -0x58af
/* 0041A698 10000034 */  b     .L0041A76C
/* 0041A69C 8FBC0030 */   lw    $gp, 0x30($sp)
.L0041A6A0:
/* 0041A6A0 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041A6A4 8F858044 */  lw    $a1, %got(RO_1000A748)($gp)
/* 0041A6A8 02002025 */  move  $a0, $s0
/* 0041A6AC 24060009 */  li    $a2, 9
/* 0041A6B0 24070009 */  li    $a3, 9
/* 0041A6B4 0320F809 */  jalr  $t9
/* 0041A6B8 24A5A748 */   addiu $a1, %lo(RO_1000A748) # addiu $a1, $a1, -0x58b8
/* 0041A6BC 1000002B */  b     .L0041A76C
/* 0041A6C0 8FBC0030 */   lw    $gp, 0x30($sp)
.L0041A6C4:
/* 0041A6C4 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041A6C8 8F858044 */  lw    $a1, %got(RO_1000A740)($gp)
/* 0041A6CC 02002025 */  move  $a0, $s0
/* 0041A6D0 24060008 */  li    $a2, 8
/* 0041A6D4 24070008 */  li    $a3, 8
/* 0041A6D8 0320F809 */  jalr  $t9
/* 0041A6DC 24A5A740 */   addiu $a1, %lo(RO_1000A740) # addiu $a1, $a1, -0x58c0
/* 0041A6E0 10000022 */  b     .L0041A76C
/* 0041A6E4 8FBC0030 */   lw    $gp, 0x30($sp)
.L0041A6E8:
/* 0041A6E8 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041A6EC 8F858044 */  lw    $a1, %got(RO_1000A738)($gp)
/* 0041A6F0 02002025 */  move  $a0, $s0
/* 0041A6F4 24060008 */  li    $a2, 8
/* 0041A6F8 24070008 */  li    $a3, 8
/* 0041A6FC 0320F809 */  jalr  $t9
/* 0041A700 24A5A738 */   addiu $a1, %lo(RO_1000A738) # addiu $a1, $a1, -0x58c8
/* 0041A704 10000019 */  b     .L0041A76C
/* 0041A708 8FBC0030 */   lw    $gp, 0x30($sp)
.L0041A70C:
/* 0041A70C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041A710 8F858044 */  lw    $a1, %got(RO_1000A730)($gp)
/* 0041A714 02002025 */  move  $a0, $s0
/* 0041A718 24060008 */  li    $a2, 8
/* 0041A71C 24070008 */  li    $a3, 8
/* 0041A720 0320F809 */  jalr  $t9
/* 0041A724 24A5A730 */   addiu $a1, %lo(RO_1000A730) # addiu $a1, $a1, -0x58d0
/* 0041A728 10000010 */  b     .L0041A76C
/* 0041A72C 8FBC0030 */   lw    $gp, 0x30($sp)
.L0041A730:
/* 0041A730 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041A734 8F858044 */  lw    $a1, %got(RO_1000A727)($gp)
/* 0041A738 02002025 */  move  $a0, $s0
/* 0041A73C 24060009 */  li    $a2, 9
/* 0041A740 24070009 */  li    $a3, 9
/* 0041A744 0320F809 */  jalr  $t9
/* 0041A748 24A5A727 */   addiu $a1, %lo(RO_1000A727) # addiu $a1, $a1, -0x58d9
/* 0041A74C 10000007 */  b     .L0041A76C
/* 0041A750 8FBC0030 */   lw    $gp, 0x30($sp)
.L0041A754:
/* 0041A754 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 0041A758 8F868044 */  lw    $a2, %got(RO_1000A71E)($gp)
/* 0041A75C 24070009 */  li    $a3, 9
/* 0041A760 0320F809 */  jalr  $t9
/* 0041A764 24C6A71E */   addiu $a2, %lo(RO_1000A71E) # addiu $a2, $a2, -0x58e2
/* 0041A768 8FBC0030 */  lw    $gp, 0x30($sp)
.L0041A76C:
/* 0041A76C 92220000 */  lbu   $v0, ($s1)
/* 0041A770 24010004 */  li    $at, 4
/* 0041A774 00003825 */  move  $a3, $zero
/* 0041A778 14410062 */  bne   $v0, $at, .L0041A904
/* 0041A77C 240A000A */   li    $t2, 10
/* 0041A780 8F998870 */  lw    $t9, %call16(write_enum)($gp)
/* 0041A784 8E500000 */  lw    $s0, ($s2)
/* 0041A788 8F868044 */  lw    $a2, %got(D_1000FF70)($gp)
/* 0041A78C 92250010 */  lbu   $a1, 0x10($s1)
/* 0041A790 AFAA0010 */  sw    $t2, 0x10($sp)
/* 0041A794 02002025 */  move  $a0, $s0
/* 0041A798 0320F809 */  jalr  $t9
/* 0041A79C 24C6FF70 */   addiu $a2, %lo(D_1000FF70) # addiu $a2, $a2, -0x90
/* 0041A7A0 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041A7A4 02002025 */  move  $a0, $s0
/* 0041A7A8 2405007B */  li    $a1, 123
/* 0041A7AC 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041A7B0 24060001 */  li    $a2, 1
/* 0041A7B4 2407000A */  li    $a3, 10
/* 0041A7B8 0320F809 */  jalr  $t9
/* 0041A7BC 00000000 */   nop   
/* 0041A7C0 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041A7C4 8E2B0014 */  lw    $t3, 0x14($s1)
/* 0041A7C8 02002025 */  move  $a0, $s0
/* 0041A7CC 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041A7D0 24060004 */  li    $a2, 4
/* 0041A7D4 2407000A */  li    $a3, 10
/* 0041A7D8 0320F809 */  jalr  $t9
/* 0041A7DC 95650004 */   lhu   $a1, 4($t3)
/* 0041A7E0 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041A7E4 8E500000 */  lw    $s0, ($s2)
/* 0041A7E8 2405007C */  li    $a1, 124
/* 0041A7EC 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041A7F0 24060001 */  li    $a2, 1
/* 0041A7F4 2407000A */  li    $a3, 10
/* 0041A7F8 0320F809 */  jalr  $t9
/* 0041A7FC 02002025 */   move  $a0, $s0
/* 0041A800 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041A804 8E2C0014 */  lw    $t4, 0x14($s1)
/* 0041A808 02002025 */  move  $a0, $s0
/* 0041A80C 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041A810 24060001 */  li    $a2, 1
/* 0041A814 2407000A */  li    $a3, 10
/* 0041A818 0320F809 */  jalr  $t9
/* 0041A81C 95850006 */   lhu   $a1, 6($t4)
/* 0041A820 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041A824 8E440000 */  lw    $a0, ($s2)
/* 0041A828 24060002 */  li    $a2, 2
/* 0041A82C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041A830 8F858044 */  lw    $a1, %got(RO_1000A71C)($gp)
/* 0041A834 24070002 */  li    $a3, 2
/* 0041A838 0320F809 */  jalr  $t9
/* 0041A83C 24A5A71C */   addiu $a1, %lo(RO_1000A71C) # addiu $a1, $a1, -0x58e4
/* 0041A840 8E2D0018 */  lw    $t5, 0x18($s1)
/* 0041A844 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041A848 2405007B */  li    $a1, 123
/* 0041A84C 11A00027 */  beqz  $t5, .L0041A8EC
/* 0041A850 24060001 */   li    $a2, 1
/* 0041A854 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041A858 8E500000 */  lw    $s0, ($s2)
/* 0041A85C 2407000A */  li    $a3, 10
/* 0041A860 0320F809 */  jalr  $t9
/* 0041A864 02002025 */   move  $a0, $s0
/* 0041A868 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041A86C 8E2E0018 */  lw    $t6, 0x18($s1)
/* 0041A870 02002025 */  move  $a0, $s0
/* 0041A874 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041A878 24060004 */  li    $a2, 4
/* 0041A87C 2407000A */  li    $a3, 10
/* 0041A880 0320F809 */  jalr  $t9
/* 0041A884 95C50004 */   lhu   $a1, 4($t6)
/* 0041A888 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041A88C 8E500000 */  lw    $s0, ($s2)
/* 0041A890 2405007C */  li    $a1, 124
/* 0041A894 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041A898 24060001 */  li    $a2, 1
/* 0041A89C 2407000A */  li    $a3, 10
/* 0041A8A0 0320F809 */  jalr  $t9
/* 0041A8A4 02002025 */   move  $a0, $s0
/* 0041A8A8 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041A8AC 8E2F0018 */  lw    $t7, 0x18($s1)
/* 0041A8B0 02002025 */  move  $a0, $s0
/* 0041A8B4 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041A8B8 24060001 */  li    $a2, 1
/* 0041A8BC 2407000A */  li    $a3, 10
/* 0041A8C0 0320F809 */  jalr  $t9
/* 0041A8C4 95E50006 */   lhu   $a1, 6($t7)
/* 0041A8C8 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041A8CC 8E440000 */  lw    $a0, ($s2)
/* 0041A8D0 2405007D */  li    $a1, 125
/* 0041A8D4 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041A8D8 24060001 */  li    $a2, 1
/* 0041A8DC 2407000A */  li    $a3, 10
/* 0041A8E0 0320F809 */  jalr  $t9
/* 0041A8E4 00000000 */   nop   
/* 0041A8E8 8FBC0030 */  lw    $gp, 0x30($sp)
.L0041A8EC:
/* 0041A8EC 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041A8F0 8E440000 */  lw    $a0, ($s2)
/* 0041A8F4 0320F809 */  jalr  $t9
/* 0041A8F8 00000000 */   nop   
/* 0041A8FC 100000BD */  b     .L0041ABF4
/* 0041A900 8FBC0030 */   lw    $gp, 0x30($sp)
.L0041A904:
/* 0041A904 24010005 */  li    $at, 5
/* 0041A908 14410038 */  bne   $v0, $at, .L0041A9EC
/* 0041A90C 2C480020 */   sltiu $t0, $v0, 0x20
/* 0041A910 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041A914 8F858044 */  lw    $a1, %got(RO_1000A718)($gp)
/* 0041A918 8E440000 */  lw    $a0, ($s2)
/* 0041A91C 24060004 */  li    $a2, 4
/* 0041A920 24070004 */  li    $a3, 4
/* 0041A924 0320F809 */  jalr  $t9
/* 0041A928 24A5A718 */   addiu $a1, %lo(RO_1000A718) # addiu $a1, $a1, -0x58e8
/* 0041A92C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041A930 8E500000 */  lw    $s0, ($s2)
/* 0041A934 2405007B */  li    $a1, 123
/* 0041A938 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041A93C 24060001 */  li    $a2, 1
/* 0041A940 2407000A */  li    $a3, 10
/* 0041A944 0320F809 */  jalr  $t9
/* 0041A948 02002025 */   move  $a0, $s0
/* 0041A94C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041A950 8E380020 */  lw    $t8, 0x20($s1)
/* 0041A954 02002025 */  move  $a0, $s0
/* 0041A958 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041A95C 24060004 */  li    $a2, 4
/* 0041A960 2407000A */  li    $a3, 10
/* 0041A964 0320F809 */  jalr  $t9
/* 0041A968 97050004 */   lhu   $a1, 4($t8)
/* 0041A96C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041A970 8E500000 */  lw    $s0, ($s2)
/* 0041A974 2405007C */  li    $a1, 124
/* 0041A978 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041A97C 24060001 */  li    $a2, 1
/* 0041A980 2407000A */  li    $a3, 10
/* 0041A984 0320F809 */  jalr  $t9
/* 0041A988 02002025 */   move  $a0, $s0
/* 0041A98C 8E390020 */  lw    $t9, 0x20($s1)
/* 0041A990 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041A994 02002025 */  move  $a0, $s0
/* 0041A998 97250006 */  lhu   $a1, 6($t9)
/* 0041A99C 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041A9A0 24060001 */  li    $a2, 1
/* 0041A9A4 2407000A */  li    $a3, 10
/* 0041A9A8 0320F809 */  jalr  $t9
/* 0041A9AC 00000000 */   nop   
/* 0041A9B0 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041A9B4 8E440000 */  lw    $a0, ($s2)
/* 0041A9B8 24060002 */  li    $a2, 2
/* 0041A9BC 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041A9C0 8F858044 */  lw    $a1, %got(RO_1000A716)($gp)
/* 0041A9C4 24070002 */  li    $a3, 2
/* 0041A9C8 0320F809 */  jalr  $t9
/* 0041A9CC 24A5A716 */   addiu $a1, %lo(RO_1000A716) # addiu $a1, $a1, -0x58ea
/* 0041A9D0 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041A9D4 8E440000 */  lw    $a0, ($s2)
/* 0041A9D8 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041A9DC 0320F809 */  jalr  $t9
/* 0041A9E0 00000000 */   nop   
/* 0041A9E4 10000083 */  b     .L0041ABF4
/* 0041A9E8 8FBC0030 */   lw    $gp, 0x30($sp)
.L0041A9EC:
/* 0041A9EC 00084823 */  negu  $t1, $t0
/* 0041A9F0 3C011200 */  lui   $at, 0x1200
/* 0041A9F4 01215024 */  and   $t2, $t1, $at
/* 0041A9F8 004A5804 */  sllv  $t3, $t2, $v0
/* 0041A9FC 0561007D */  bgez  $t3, .L0041ABF4
/* 0041AA00 00000000 */   nop   
/* 0041AA04 8F99822C */  lw    $t9, %call16(printmtyp)($gp)
/* 0041AA08 92240016 */  lbu   $a0, 0x16($s1)
/* 0041AA0C 0320F809 */  jalr  $t9
/* 0041AA10 30840007 */   andi  $a0, $a0, 7
/* 0041AA14 922C0000 */  lbu   $t4, ($s1)
/* 0041AA18 24010006 */  li    $at, 6
/* 0041AA1C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041AA20 15810028 */  bne   $t4, $at, .L0041AAC4
/* 0041AA24 2405007B */   li    $a1, 123
/* 0041AA28 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041AA2C 8E500000 */  lw    $s0, ($s2)
/* 0041AA30 24060001 */  li    $a2, 1
/* 0041AA34 2407000A */  li    $a3, 10
/* 0041AA38 0320F809 */  jalr  $t9
/* 0041AA3C 02002025 */   move  $a0, $s0
/* 0041AA40 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041AA44 8E2D001C */  lw    $t5, 0x1c($s1)
/* 0041AA48 02002025 */  move  $a0, $s0
/* 0041AA4C 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041AA50 24060004 */  li    $a2, 4
/* 0041AA54 2407000A */  li    $a3, 10
/* 0041AA58 0320F809 */  jalr  $t9
/* 0041AA5C 95A50004 */   lhu   $a1, 4($t5)
/* 0041AA60 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041AA64 8E500000 */  lw    $s0, ($s2)
/* 0041AA68 2405007C */  li    $a1, 124
/* 0041AA6C 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041AA70 24060001 */  li    $a2, 1
/* 0041AA74 2407000A */  li    $a3, 10
/* 0041AA78 0320F809 */  jalr  $t9
/* 0041AA7C 02002025 */   move  $a0, $s0
/* 0041AA80 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041AA84 8E2E001C */  lw    $t6, 0x1c($s1)
/* 0041AA88 02002025 */  move  $a0, $s0
/* 0041AA8C 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041AA90 24060001 */  li    $a2, 1
/* 0041AA94 2407000A */  li    $a3, 10
/* 0041AA98 0320F809 */  jalr  $t9
/* 0041AA9C 95C50006 */   lhu   $a1, 6($t6)
/* 0041AAA0 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041AAA4 8E440000 */  lw    $a0, ($s2)
/* 0041AAA8 24060002 */  li    $a2, 2
/* 0041AAAC 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041AAB0 8F858044 */  lw    $a1, %got(RO_1000A714)($gp)
/* 0041AAB4 24070002 */  li    $a3, 2
/* 0041AAB8 0320F809 */  jalr  $t9
/* 0041AABC 24A5A714 */   addiu $a1, %lo(RO_1000A714) # addiu $a1, $a1, -0x58ec
/* 0041AAC0 8FBC0030 */  lw    $gp, 0x30($sp)
.L0041AAC4:
/* 0041AAC4 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041AAC8 8E250014 */  lw    $a1, 0x14($s1)
/* 0041AACC 8E440000 */  lw    $a0, ($s2)
/* 0041AAD0 24060005 */  li    $a2, 5
/* 0041AAD4 2407000A */  li    $a3, 10
/* 0041AAD8 0320F809 */  jalr  $t9
/* 0041AADC 00052AC2 */   srl   $a1, $a1, 0xb
/* 0041AAE0 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041AAE4 8E500000 */  lw    $s0, ($s2)
/* 0041AAE8 24050020 */  li    $a1, 32
/* 0041AAEC 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041AAF0 24060001 */  li    $a2, 1
/* 0041AAF4 2407000A */  li    $a3, 10
/* 0041AAF8 0320F809 */  jalr  $t9
/* 0041AAFC 02002025 */   move  $a0, $s0
/* 0041AB00 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041AB04 02002025 */  move  $a0, $s0
/* 0041AB08 8E250010 */  lw    $a1, 0x10($s1)
/* 0041AB0C 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041AB10 24060005 */  li    $a2, 5
/* 0041AB14 2407000A */  li    $a3, 10
/* 0041AB18 0320F809 */  jalr  $t9
/* 0041AB1C 00000000 */   nop   
/* 0041AB20 922F0019 */  lbu   $t7, 0x19($s1)
/* 0041AB24 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041AB28 24060004 */  li    $a2, 4
/* 0041AB2C 11E0000D */  beqz  $t7, .L0041AB64
/* 0041AB30 24070004 */   li    $a3, 4
/* 0041AB34 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041AB38 8F858044 */  lw    $a1, %got(RO_1000A710)($gp)
/* 0041AB3C 8E440000 */  lw    $a0, ($s2)
/* 0041AB40 0320F809 */  jalr  $t9
/* 0041AB44 24A5A710 */   addiu $a1, %lo(RO_1000A710) # addiu $a1, $a1, -0x58f0
/* 0041AB48 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041AB4C 8E440000 */  lw    $a0, ($s2)
/* 0041AB50 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041AB54 0320F809 */  jalr  $t9
/* 0041AB58 00000000 */   nop   
/* 0041AB5C 10000006 */  b     .L0041AB78
/* 0041AB60 8FBC0030 */   lw    $gp, 0x30($sp)
.L0041AB64:
/* 0041AB64 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041AB68 8E440000 */  lw    $a0, ($s2)
/* 0041AB6C 0320F809 */  jalr  $t9
/* 0041AB70 00000000 */   nop   
/* 0041AB74 8FBC0030 */  lw    $gp, 0x30($sp)
.L0041AB78:
/* 0041AB78 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041AB7C 8F858044 */  lw    $a1, %got(RO_1000A70C)($gp)
/* 0041AB80 8E440000 */  lw    $a0, ($s2)
/* 0041AB84 24060004 */  li    $a2, 4
/* 0041AB88 24070004 */  li    $a3, 4
/* 0041AB8C 0320F809 */  jalr  $t9
/* 0041AB90 24A5A70C */   addiu $a1, %lo(RO_1000A70C) # addiu $a1, $a1, -0x58f4
/* 0041AB94 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041AB98 8E440000 */  lw    $a0, ($s2)
/* 0041AB9C 24060004 */  li    $a2, 4
/* 0041ABA0 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041ABA4 8F858044 */  lw    $a1, %got(RO_1000A708)($gp)
/* 0041ABA8 24070004 */  li    $a3, 4
/* 0041ABAC 0320F809 */  jalr  $t9
/* 0041ABB0 24A5A708 */   addiu $a1, %lo(RO_1000A708) # addiu $a1, $a1, -0x58f8
/* 0041ABB4 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041ABB8 8E440000 */  lw    $a0, ($s2)
/* 0041ABBC 96250024 */  lhu   $a1, 0x24($s1)
/* 0041ABC0 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041ABC4 24060007 */  li    $a2, 7
/* 0041ABC8 2407000A */  li    $a3, 10
/* 0041ABCC 0320F809 */  jalr  $t9
/* 0041ABD0 00000000 */   nop   
/* 0041ABD4 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041ABD8 8E440000 */  lw    $a0, ($s2)
/* 0041ABDC 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041ABE0 0320F809 */  jalr  $t9
/* 0041ABE4 00000000 */   nop   
/* 0041ABE8 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041ABEC 26940001 */  addiu $s4, $s4, 1
/* 0041ABF0 26730008 */  addiu $s3, $s3, 8
.L0041ABF4:
/* 0041ABF4 8F9889E0 */  lw     $t8, %got(bitposcount)($gp)
/* 0041ABF8 26940001 */  addiu $s4, $s4, 1
/* 0041ABFC 26730008 */  addiu $s3, $s3, 8
/* 0041AC00 8F180000 */  lw    $t8, ($t8)
/* 0041AC04 1698FE39 */  bne   $s4, $t8, .L0041A4EC
/* 0041AC08 00000000 */   nop   
/* 0041AC0C 8FBF0034 */  lw    $ra, 0x34($sp)
.L0041AC10:
/* 0041AC10 8FB0001C */  lw    $s0, 0x1c($sp)
/* 0041AC14 8FB10020 */  lw    $s1, 0x20($sp)
/* 0041AC18 8FB20024 */  lw    $s2, 0x24($sp)
/* 0041AC1C 8FB30028 */  lw    $s3, 0x28($sp)
/* 0041AC20 8FB4002C */  lw    $s4, 0x2c($sp)
/* 0041AC24 03E00008 */  jr    $ra
/* 0041AC28 27BD0038 */   addiu $sp, $sp, 0x38
    .type printitab, @function
    .size printitab, .-printitab
    .end printitab

glabel printtab
    .ent printtab
    # 00456A2C oneproc
/* 0041AC2C 3C1C0FC0 */  .cpload $t9
/* 0041AC30 279CF664 */  
/* 0041AC34 0399E021 */  
/* 0041AC38 27BDFFB8 */  addiu $sp, $sp, -0x48
/* 0041AC3C 8F8E8DE8 */  lw     $t6, %got(proc_to_print)($gp)
/* 0041AC40 24010020 */  li    $at, 32
/* 0041AC44 AFBF0044 */  sw    $ra, 0x44($sp)
/* 0041AC48 91CE0000 */  lbu   $t6, ($t6)
/* 0041AC4C AFBE0040 */  sw    $fp, 0x40($sp)
/* 0041AC50 AFBC003C */  sw    $gp, 0x3c($sp)
/* 0041AC54 AFB70038 */  sw    $s7, 0x38($sp)
/* 0041AC58 AFB60034 */  sw    $s6, 0x34($sp)
/* 0041AC5C AFB50030 */  sw    $s5, 0x30($sp)
/* 0041AC60 AFB4002C */  sw    $s4, 0x2c($sp)
/* 0041AC64 AFB30028 */  sw    $s3, 0x28($sp)
/* 0041AC68 AFB20024 */  sw    $s2, 0x24($sp)
/* 0041AC6C AFB10020 */  sw    $s1, 0x20($sp)
/* 0041AC70 11C10005 */  beq   $t6, $at, .L0041AC88
/* 0041AC74 AFB0001C */   sw    $s0, 0x1c($sp)
/* 0041AC78 8F8F8A8C */  lw     $t7, %got(at_proc_to_print)($gp)
/* 0041AC7C 91EF0000 */  lbu   $t7, ($t7)
/* 0041AC80 51E00234 */  beql  $t7, $zero, .L0041B554
/* 0041AC84 8FBF0044 */   lw    $ra, 0x44($sp)
.L0041AC88:
/* 0041AC88 8F948044 */  lw    $s4, %got(D_1000FF70)($gp)
/* 0041AC8C 8F9E8DF8 */  lw     $fp, %got(table)($gp)
/* 0041AC90 8F9789CC */  lw     $s7, %got(nocopy)($gp)
/* 0041AC94 24160006 */  li    $s6, 6
/* 0041AC98 24150005 */  li    $s5, 5
/* 0041AC9C 24130004 */  li    $s3, 4
/* 0041ACA0 8F918CCC */  lw     $s1, %got(list)($gp)
/* 0041ACA4 2694FF70 */  addiu $s4, %lo(D_1000FF70) # addiu $s4, $s4, -0x90
/* 0041ACA8 8FC20000 */  lw    $v0, ($fp)
.L0041ACAC:
/* 0041ACAC 10400221 */  beqz  $v0, .L0041B534
/* 0041ACB0 00409025 */   move  $s2, $v0
.L0041ACB4:
/* 0041ACB4 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041ACB8 8E300000 */  lw    $s0, ($s1)
/* 0041ACBC 2405005B */  li    $a1, 91
/* 0041ACC0 24060001 */  li    $a2, 1
/* 0041ACC4 2407000A */  li    $a3, 10
/* 0041ACC8 0320F809 */  jalr  $t9
/* 0041ACCC 02002025 */   move  $a0, $s0
/* 0041ACD0 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041ACD4 02002025 */  move  $a0, $s0
/* 0041ACD8 96450008 */  lhu   $a1, 8($s2)
/* 0041ACDC 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041ACE0 02603025 */  move  $a2, $s3
/* 0041ACE4 2407000A */  li    $a3, 10
/* 0041ACE8 0320F809 */  jalr  $t9
/* 0041ACEC 00000000 */   nop   
/* 0041ACF0 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041ACF4 8E300000 */  lw    $s0, ($s1)
/* 0041ACF8 2405002C */  li    $a1, 44
/* 0041ACFC 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041AD00 24060001 */  li    $a2, 1
/* 0041AD04 2407000A */  li    $a3, 10
/* 0041AD08 0320F809 */  jalr  $t9
/* 0041AD0C 02002025 */   move  $a0, $s0
/* 0041AD10 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041AD14 02002025 */  move  $a0, $s0
/* 0041AD18 8E45000C */  lw    $a1, 0xc($s2)
/* 0041AD1C 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041AD20 24060001 */  li    $a2, 1
/* 0041AD24 2407000A */  li    $a3, 10
/* 0041AD28 0320F809 */  jalr  $t9
/* 0041AD2C 00000000 */   nop   
/* 0041AD30 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041AD34 8E240000 */  lw    $a0, ($s1)
/* 0041AD38 24060002 */  li    $a2, 2
/* 0041AD3C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041AD40 8F858044 */  lw    $a1, %got(RO_1000A839)($gp)
/* 0041AD44 24070002 */  li    $a3, 2
/* 0041AD48 0320F809 */  jalr  $t9
/* 0041AD4C 24A5A839 */   addiu $a1, %lo(RO_1000A839) # addiu $a1, $a1, -0x57c7
/* 0041AD50 92420000 */  lbu   $v0, ($s2)
/* 0041AD54 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041AD58 24040001 */  li    $a0, 1
/* 0041AD5C 2C410009 */  sltiu $at, $v0, 9
/* 0041AD60 10200069 */  beqz  $at, .L0041AF08
/* 0041AD64 24050087 */   li    $a1, 135
/* 0041AD68 8F818044 */  lw    $at, %got(jtbl_1000A83C)($gp)
/* 0041AD6C 0002C080 */  sll   $t8, $v0, 2
/* 0041AD70 00380821 */  addu  $at, $at, $t8
/* 0041AD74 8C38A83C */  lw    $t8, %lo(jtbl_1000A83C)($at)
/* 0041AD78 031CC021 */  addu  $t8, $t8, $gp
/* 0041AD7C 03000008 */  jr    $t8
/* 0041AD80 00000000 */   nop   
.L0041AD84:
/* 0041AD84 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041AD88 8F858044 */  lw    $a1, %got(RO_1000A831)($gp)
/* 0041AD8C 8E240000 */  lw    $a0, ($s1)
/* 0041AD90 24060008 */  li    $a2, 8
/* 0041AD94 24070008 */  li    $a3, 8
/* 0041AD98 0320F809 */  jalr  $t9
/* 0041AD9C 24A5A831 */   addiu $a1, %lo(RO_1000A831) # addiu $a1, $a1, -0x57cf
/* 0041ADA0 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041ADA4 8E240000 */  lw    $a0, ($s1)
/* 0041ADA8 8E450020 */  lw    $a1, 0x20($s2)
/* 0041ADAC 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041ADB0 2406000C */  li    $a2, 12
/* 0041ADB4 2407000A */  li    $a3, 10
/* 0041ADB8 0320F809 */  jalr  $t9
/* 0041ADBC 00000000 */   nop   
/* 0041ADC0 10000057 */  b     .L0041AF20
/* 0041ADC4 8FBC003C */   lw    $gp, 0x3c($sp)
.L0041ADC8:
/* 0041ADC8 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041ADCC 8F858044 */  lw    $a1, %got(RO_1000A829)($gp)
/* 0041ADD0 8E240000 */  lw    $a0, ($s1)
/* 0041ADD4 24060008 */  li    $a2, 8
/* 0041ADD8 24070008 */  li    $a3, 8
/* 0041ADDC 0320F809 */  jalr  $t9
/* 0041ADE0 24A5A829 */   addiu $a1, %lo(RO_1000A829) # addiu $a1, $a1, -0x57d7
/* 0041ADE4 1000004E */  b     .L0041AF20
/* 0041ADE8 8FBC003C */   lw    $gp, 0x3c($sp)
.L0041ADEC:
/* 0041ADEC 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041ADF0 8F858044 */  lw    $a1, %got(RO_1000A821)($gp)
/* 0041ADF4 8E240000 */  lw    $a0, ($s1)
/* 0041ADF8 24060008 */  li    $a2, 8
/* 0041ADFC 24070008 */  li    $a3, 8
/* 0041AE00 0320F809 */  jalr  $t9
/* 0041AE04 24A5A821 */   addiu $a1, %lo(RO_1000A821) # addiu $a1, $a1, -0x57df
/* 0041AE08 10000045 */  b     .L0041AF20
/* 0041AE0C 8FBC003C */   lw    $gp, 0x3c($sp)
.L0041AE10:
/* 0041AE10 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041AE14 8F858044 */  lw    $a1, %got(RO_1000A818)($gp)
/* 0041AE18 8E240000 */  lw    $a0, ($s1)
/* 0041AE1C 24060009 */  li    $a2, 9
/* 0041AE20 24070009 */  li    $a3, 9
/* 0041AE24 0320F809 */  jalr  $t9
/* 0041AE28 24A5A818 */   addiu $a1, %lo(RO_1000A818) # addiu $a1, $a1, -0x57e8
/* 0041AE2C 1000003C */  b     .L0041AF20
/* 0041AE30 8FBC003C */   lw    $gp, 0x3c($sp)
.L0041AE34:
/* 0041AE34 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041AE38 8F858044 */  lw    $a1, %got(RO_1000A80F)($gp)
/* 0041AE3C 8E240000 */  lw    $a0, ($s1)
/* 0041AE40 24060009 */  li    $a2, 9
/* 0041AE44 24070009 */  li    $a3, 9
/* 0041AE48 0320F809 */  jalr  $t9
/* 0041AE4C 24A5A80F */   addiu $a1, %lo(RO_1000A80F) # addiu $a1, $a1, -0x57f1
/* 0041AE50 10000033 */  b     .L0041AF20
/* 0041AE54 8FBC003C */   lw    $gp, 0x3c($sp)
.L0041AE58:
/* 0041AE58 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041AE5C 8F858044 */  lw    $a1, %got(RO_1000A807)($gp)
/* 0041AE60 8E240000 */  lw    $a0, ($s1)
/* 0041AE64 24060008 */  li    $a2, 8
/* 0041AE68 24070008 */  li    $a3, 8
/* 0041AE6C 0320F809 */  jalr  $t9
/* 0041AE70 24A5A807 */   addiu $a1, %lo(RO_1000A807) # addiu $a1, $a1, -0x57f9
/* 0041AE74 1000002A */  b     .L0041AF20
/* 0041AE78 8FBC003C */   lw    $gp, 0x3c($sp)
.L0041AE7C:
/* 0041AE7C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041AE80 8F858044 */  lw    $a1, %got(RO_1000A7FF)($gp)
/* 0041AE84 8E240000 */  lw    $a0, ($s1)
/* 0041AE88 24060008 */  li    $a2, 8
/* 0041AE8C 24070008 */  li    $a3, 8
/* 0041AE90 0320F809 */  jalr  $t9
/* 0041AE94 24A5A7FF */   addiu $a1, %lo(RO_1000A7FF) # addiu $a1, $a1, -0x5801
/* 0041AE98 10000021 */  b     .L0041AF20
/* 0041AE9C 8FBC003C */   lw    $gp, 0x3c($sp)
.L0041AEA0:
/* 0041AEA0 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041AEA4 8F858044 */  lw    $a1, %got(RO_1000A7F7)($gp)
/* 0041AEA8 8E240000 */  lw    $a0, ($s1)
/* 0041AEAC 24060008 */  li    $a2, 8
/* 0041AEB0 24070008 */  li    $a3, 8
/* 0041AEB4 0320F809 */  jalr  $t9
/* 0041AEB8 24A5A7F7 */   addiu $a1, %lo(RO_1000A7F7) # addiu $a1, $a1, -0x5809
/* 0041AEBC 10000018 */  b     .L0041AF20
/* 0041AEC0 8FBC003C */   lw    $gp, 0x3c($sp)
.L0041AEC4:
/* 0041AEC4 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041AEC8 8F858044 */  lw    $a1, %got(RO_1000A7EE)($gp)
/* 0041AECC 8E240000 */  lw    $a0, ($s1)
/* 0041AED0 24060009 */  li    $a2, 9
/* 0041AED4 24070009 */  li    $a3, 9
/* 0041AED8 0320F809 */  jalr  $t9
/* 0041AEDC 24A5A7EE */   addiu $a1, %lo(RO_1000A7EE) # addiu $a1, $a1, -0x5812
/* 0041AEE0 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041AEE4 8E240000 */  lw    $a0, ($s1)
/* 0041AEE8 96450020 */  lhu   $a1, 0x20($s2)
/* 0041AEEC 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041AEF0 2406000C */  li    $a2, 12
/* 0041AEF4 2407000A */  li    $a3, 10
/* 0041AEF8 0320F809 */  jalr  $t9
/* 0041AEFC 00000000 */   nop   
/* 0041AF00 10000007 */  b     .L0041AF20
/* 0041AF04 8FBC003C */   lw    $gp, 0x3c($sp)
.L0041AF08:
/* 0041AF08 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 0041AF0C 8F868044 */  lw    $a2, %got(RO_1000A7E5)($gp)
/* 0041AF10 24070009 */  li    $a3, 9
/* 0041AF14 0320F809 */  jalr  $t9
/* 0041AF18 24C6A7E5 */   addiu $a2, %lo(RO_1000A7E5) # addiu $a2, $a2, -0x581b
/* 0041AF1C 8FBC003C */  lw    $gp, 0x3c($sp)
.L0041AF20:
/* 0041AF20 92420000 */  lbu   $v0, ($s2)
/* 0041AF24 02803025 */  move  $a2, $s4
/* 0041AF28 00003825 */  move  $a3, $zero
/* 0041AF2C 16620070 */  bne   $s3, $v0, .L0041B0F0
/* 0041AF30 2419000A */   li    $t9, 10
/* 0041AF34 AFB90010 */  sw    $t9, 0x10($sp)
/* 0041AF38 8F998870 */  lw    $t9, %call16(write_enum)($gp)
/* 0041AF3C 8E300000 */  lw    $s0, ($s1)
/* 0041AF40 92450020 */  lbu   $a1, 0x20($s2)
/* 0041AF44 0320F809 */  jalr  $t9
/* 0041AF48 02002025 */   move  $a0, $s0
/* 0041AF4C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041AF50 02002025 */  move  $a0, $s0
/* 0041AF54 2405005B */  li    $a1, 91
/* 0041AF58 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041AF5C 24060001 */  li    $a2, 1
/* 0041AF60 2407000A */  li    $a3, 10
/* 0041AF64 0320F809 */  jalr  $t9
/* 0041AF68 00000000 */   nop   
/* 0041AF6C 8E420024 */  lw    $v0, 0x24($s2)
/* 0041AF70 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041AF74 02C03025 */  move  $a2, $s6
/* 0041AF78 14400009 */  bnez  $v0, .L0041AFA0
/* 0041AF7C 02002025 */   move  $a0, $s0
/* 0041AF80 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041AF84 8F858044 */  lw    $a1, %got(RO_1000A7DF)($gp)
/* 0041AF88 02002025 */  move  $a0, $s0
/* 0041AF8C 02C03825 */  move  $a3, $s6
/* 0041AF90 0320F809 */  jalr  $t9
/* 0041AF94 24A5A7DF */   addiu $a1, %lo(RO_1000A7DF) # addiu $a1, $a1, -0x5821
/* 0041AF98 1000001F */  b     .L0041B018
/* 0041AF9C 8FBC003C */   lw    $gp, 0x3c($sp)
.L0041AFA0:
/* 0041AFA0 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041AFA4 94450008 */  lhu   $a1, 8($v0)
/* 0041AFA8 02603025 */  move  $a2, $s3
/* 0041AFAC 0320F809 */  jalr  $t9
/* 0041AFB0 2407000A */   li    $a3, 10
/* 0041AFB4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041AFB8 8E300000 */  lw    $s0, ($s1)
/* 0041AFBC 2405002C */  li    $a1, 44
/* 0041AFC0 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041AFC4 24060001 */  li    $a2, 1
/* 0041AFC8 2407000A */  li    $a3, 10
/* 0041AFCC 0320F809 */  jalr  $t9
/* 0041AFD0 02002025 */   move  $a0, $s0
/* 0041AFD4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041AFD8 8E480024 */  lw    $t0, 0x24($s2)
/* 0041AFDC 02002025 */  move  $a0, $s0
/* 0041AFE0 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041AFE4 24060001 */  li    $a2, 1
/* 0041AFE8 2407000A */  li    $a3, 10
/* 0041AFEC 0320F809 */  jalr  $t9
/* 0041AFF0 8D05000C */   lw    $a1, 0xc($t0)
/* 0041AFF4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041AFF8 8E240000 */  lw    $a0, ($s1)
/* 0041AFFC 24060003 */  li    $a2, 3
/* 0041B000 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041B004 8F858044 */  lw    $a1, %got(RO_1000A7DC)($gp)
/* 0041B008 24070003 */  li    $a3, 3
/* 0041B00C 0320F809 */  jalr  $t9
/* 0041B010 24A5A7DC */   addiu $a1, %lo(RO_1000A7DC) # addiu $a1, $a1, -0x5824
/* 0041B014 8FBC003C */  lw    $gp, 0x3c($sp)
.L0041B018:
/* 0041B018 8E420028 */  lw    $v0, 0x28($s2)
/* 0041B01C 02603825 */  move  $a3, $s3
/* 0041B020 02603025 */  move  $a2, $s3
/* 0041B024 1440000E */  bnez  $v0, .L0041B060
/* 0041B028 00000000 */   nop   
/* 0041B02C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041B030 8F858044 */  lw    $a1, %got(RO_1000A7D8)($gp)
/* 0041B034 8E240000 */  lw    $a0, ($s1)
/* 0041B038 02603025 */  move  $a2, $s3
/* 0041B03C 0320F809 */  jalr  $t9
/* 0041B040 24A5A7D8 */   addiu $a1, %lo(RO_1000A7D8) # addiu $a1, $a1, -0x5828
/* 0041B044 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041B048 8E240000 */  lw    $a0, ($s1)
/* 0041B04C 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041B050 0320F809 */  jalr  $t9
/* 0041B054 00000000 */   nop   
/* 0041B058 10000133 */  b     .L0041B528
/* 0041B05C 8FBC003C */   lw    $gp, 0x3c($sp)
.L0041B060:
/* 0041B060 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041B064 8E240000 */  lw    $a0, ($s1)
/* 0041B068 94450008 */  lhu   $a1, 8($v0)
/* 0041B06C 0320F809 */  jalr  $t9
/* 0041B070 2407000A */   li    $a3, 10
/* 0041B074 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041B078 8E300000 */  lw    $s0, ($s1)
/* 0041B07C 2405002C */  li    $a1, 44
/* 0041B080 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041B084 24060001 */  li    $a2, 1
/* 0041B088 2407000A */  li    $a3, 10
/* 0041B08C 0320F809 */  jalr  $t9
/* 0041B090 02002025 */   move  $a0, $s0
/* 0041B094 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041B098 8E490028 */  lw    $t1, 0x28($s2)
/* 0041B09C 02002025 */  move  $a0, $s0
/* 0041B0A0 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041B0A4 24060001 */  li    $a2, 1
/* 0041B0A8 2407000A */  li    $a3, 10
/* 0041B0AC 0320F809 */  jalr  $t9
/* 0041B0B0 8D25000C */   lw    $a1, 0xc($t1)
/* 0041B0B4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041B0B8 8E300000 */  lw    $s0, ($s1)
/* 0041B0BC 2405005D */  li    $a1, 93
/* 0041B0C0 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041B0C4 24060001 */  li    $a2, 1
/* 0041B0C8 2407000A */  li    $a3, 10
/* 0041B0CC 0320F809 */  jalr  $t9
/* 0041B0D0 02002025 */   move  $a0, $s0
/* 0041B0D4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041B0D8 02002025 */  move  $a0, $s0
/* 0041B0DC 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041B0E0 0320F809 */  jalr  $t9
/* 0041B0E4 00000000 */   nop   
/* 0041B0E8 1000010F */  b     .L0041B528
/* 0041B0EC 8FBC003C */   lw    $gp, 0x3c($sp)
.L0041B0F0:
/* 0041B0F0 16A20037 */  bne   $s5, $v0, .L0041B1D0
/* 0041B0F4 2C4C0020 */   sltiu $t4, $v0, 0x20
/* 0041B0F8 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041B0FC 8F858044 */  lw    $a1, %got(RO_1000A7D4)($gp)
/* 0041B100 8E240000 */  lw    $a0, ($s1)
/* 0041B104 02603025 */  move  $a2, $s3
/* 0041B108 02603825 */  move  $a3, $s3
/* 0041B10C 0320F809 */  jalr  $t9
/* 0041B110 24A5A7D4 */   addiu $a1, %lo(RO_1000A7D4) # addiu $a1, $a1, -0x582c
/* 0041B114 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041B118 8E300000 */  lw    $s0, ($s1)
/* 0041B11C 2405005B */  li    $a1, 91
/* 0041B120 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041B124 24060001 */  li    $a2, 1
/* 0041B128 2407000A */  li    $a3, 10
/* 0041B12C 0320F809 */  jalr  $t9
/* 0041B130 02002025 */   move  $a0, $s0
/* 0041B134 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041B138 8E4A0034 */  lw    $t2, 0x34($s2)
/* 0041B13C 02002025 */  move  $a0, $s0
/* 0041B140 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041B144 02603025 */  move  $a2, $s3
/* 0041B148 2407000A */  li    $a3, 10
/* 0041B14C 0320F809 */  jalr  $t9
/* 0041B150 95450008 */   lhu   $a1, 8($t2)
/* 0041B154 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041B158 8E300000 */  lw    $s0, ($s1)
/* 0041B15C 2405002C */  li    $a1, 44
/* 0041B160 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041B164 24060001 */  li    $a2, 1
/* 0041B168 2407000A */  li    $a3, 10
/* 0041B16C 0320F809 */  jalr  $t9
/* 0041B170 02002025 */   move  $a0, $s0
/* 0041B174 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041B178 8E4B0034 */  lw    $t3, 0x34($s2)
/* 0041B17C 02002025 */  move  $a0, $s0
/* 0041B180 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041B184 24060001 */  li    $a2, 1
/* 0041B188 2407000A */  li    $a3, 10
/* 0041B18C 0320F809 */  jalr  $t9
/* 0041B190 8D65000C */   lw    $a1, 0xc($t3)
/* 0041B194 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041B198 8E240000 */  lw    $a0, ($s1)
/* 0041B19C 24060002 */  li    $a2, 2
/* 0041B1A0 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041B1A4 8F858044 */  lw    $a1, %got(RO_1000A7D2)($gp)
/* 0041B1A8 24070002 */  li    $a3, 2
/* 0041B1AC 0320F809 */  jalr  $t9
/* 0041B1B0 24A5A7D2 */   addiu $a1, %lo(RO_1000A7D2) # addiu $a1, $a1, -0x582e
/* 0041B1B4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041B1B8 8E240000 */  lw    $a0, ($s1)
/* 0041B1BC 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041B1C0 0320F809 */  jalr  $t9
/* 0041B1C4 00000000 */   nop   
/* 0041B1C8 100000D7 */  b     .L0041B528
/* 0041B1CC 8FBC003C */   lw    $gp, 0x3c($sp)
.L0041B1D0:
/* 0041B1D0 000C6823 */  negu  $t5, $t4
/* 0041B1D4 3C011200 */  lui   $at, 0x1200
/* 0041B1D8 01A17024 */  and   $t6, $t5, $at
/* 0041B1DC 004E7804 */  sllv  $t7, $t6, $v0
/* 0041B1E0 05E100CC */  bgez  $t7, .L0041B514
/* 0041B1E4 00000000 */   nop   
/* 0041B1E8 8E580010 */  lw    $t8, 0x10($s2)
/* 0041B1EC 130000C9 */  beqz  $t8, .L0041B514
/* 0041B1F0 00000000 */   nop   
/* 0041B1F4 8F99822C */  lw    $t9, %call16(printmtyp)($gp)
/* 0041B1F8 9244002E */  lbu   $a0, 0x2e($s2)
/* 0041B1FC 0320F809 */  jalr  $t9
/* 0041B200 30840007 */   andi  $a0, $a0, 7
/* 0041B204 92590000 */  lbu   $t9, ($s2)
/* 0041B208 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041B20C 16D9002C */  bne   $s6, $t9, .L0041B2C0
/* 0041B210 00000000 */   nop   
/* 0041B214 8E480010 */  lw    $t0, 0x10($s2)
/* 0041B218 2405005B */  li    $a1, 91
/* 0041B21C 24060001 */  li    $a2, 1
/* 0041B220 11000027 */  beqz  $t0, .L0041B2C0
/* 0041B224 00000000 */   nop   
/* 0041B228 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041B22C 8E300000 */  lw    $s0, ($s1)
/* 0041B230 2407000A */  li    $a3, 10
/* 0041B234 0320F809 */  jalr  $t9
/* 0041B238 02002025 */   move  $a0, $s0
/* 0041B23C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041B240 8E490024 */  lw    $t1, 0x24($s2)
/* 0041B244 02002025 */  move  $a0, $s0
/* 0041B248 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041B24C 02603025 */  move  $a2, $s3
/* 0041B250 2407000A */  li    $a3, 10
/* 0041B254 0320F809 */  jalr  $t9
/* 0041B258 95250008 */   lhu   $a1, 8($t1)
/* 0041B25C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041B260 8E300000 */  lw    $s0, ($s1)
/* 0041B264 2405002C */  li    $a1, 44
/* 0041B268 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041B26C 24060001 */  li    $a2, 1
/* 0041B270 2407000A */  li    $a3, 10
/* 0041B274 0320F809 */  jalr  $t9
/* 0041B278 02002025 */   move  $a0, $s0
/* 0041B27C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041B280 8E4A0024 */  lw    $t2, 0x24($s2)
/* 0041B284 02002025 */  move  $a0, $s0
/* 0041B288 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041B28C 24060001 */  li    $a2, 1
/* 0041B290 2407000A */  li    $a3, 10
/* 0041B294 0320F809 */  jalr  $t9
/* 0041B298 8D45000C */   lw    $a1, 0xc($t2)
/* 0041B29C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041B2A0 8E240000 */  lw    $a0, ($s1)
/* 0041B2A4 24060002 */  li    $a2, 2
/* 0041B2A8 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041B2AC 8F858044 */  lw    $a1, %got(RO_1000A7D0)($gp)
/* 0041B2B0 24070002 */  li    $a3, 2
/* 0041B2B4 0320F809 */  jalr  $t9
/* 0041B2B8 24A5A7D0 */   addiu $a1, %lo(RO_1000A7D0) # addiu $a1, $a1, -0x5830
/* 0041B2BC 8FBC003C */  lw    $gp, 0x3c($sp)
.L0041B2C0:
/* 0041B2C0 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041B2C4 8E45002C */  lw    $a1, 0x2c($s2)
/* 0041B2C8 8E240000 */  lw    $a0, ($s1)
/* 0041B2CC 02A03025 */  move  $a2, $s5
/* 0041B2D0 2407000A */  li    $a3, 10
/* 0041B2D4 0320F809 */  jalr  $t9
/* 0041B2D8 00052AC2 */   srl   $a1, $a1, 0xb
/* 0041B2DC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041B2E0 8E300000 */  lw    $s0, ($s1)
/* 0041B2E4 24050020 */  li    $a1, 32
/* 0041B2E8 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041B2EC 24060001 */  li    $a2, 1
/* 0041B2F0 2407000A */  li    $a3, 10
/* 0041B2F4 0320F809 */  jalr  $t9
/* 0041B2F8 02002025 */   move  $a0, $s0
/* 0041B2FC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041B300 02002025 */  move  $a0, $s0
/* 0041B304 8E450028 */  lw    $a1, 0x28($s2)
/* 0041B308 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041B30C 02A03025 */  move  $a2, $s5
/* 0041B310 2407000A */  li    $a3, 10
/* 0041B314 0320F809 */  jalr  $t9
/* 0041B318 00000000 */   nop   
/* 0041B31C 8E4B0038 */  lw    $t3, 0x38($s2)
/* 0041B320 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041B324 02C03025 */  move  $a2, $s6
/* 0041B328 1160002D */  beqz  $t3, .L0041B3E0
/* 0041B32C 02C03825 */   move  $a3, $s6
/* 0041B330 8E4C0034 */  lw    $t4, 0x34($s2)
/* 0041B334 1180002A */  beqz  $t4, .L0041B3E0
/* 0041B338 00000000 */   nop   
/* 0041B33C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041B340 8F858044 */  lw    $a1, %got(RO_1000A7CE)($gp)
/* 0041B344 8E240000 */  lw    $a0, ($s1)
/* 0041B348 24060002 */  li    $a2, 2
/* 0041B34C 24070002 */  li    $a3, 2
/* 0041B350 0320F809 */  jalr  $t9
/* 0041B354 24A5A7CE */   addiu $a1, %lo(RO_1000A7CE) # addiu $a1, $a1, -0x5832
/* 0041B358 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041B35C 8E4D0034 */  lw    $t5, 0x34($s2)
/* 0041B360 8E240000 */  lw    $a0, ($s1)
/* 0041B364 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041B368 24060001 */  li    $a2, 1
/* 0041B36C 2407000A */  li    $a3, 10
/* 0041B370 0320F809 */  jalr  $t9
/* 0041B374 95A50008 */   lhu   $a1, 8($t5)
/* 0041B378 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041B37C 8E300000 */  lw    $s0, ($s1)
/* 0041B380 2405002C */  li    $a1, 44
/* 0041B384 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041B388 24060001 */  li    $a2, 1
/* 0041B38C 2407000A */  li    $a3, 10
/* 0041B390 0320F809 */  jalr  $t9
/* 0041B394 02002025 */   move  $a0, $s0
/* 0041B398 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041B39C 8E4E0034 */  lw    $t6, 0x34($s2)
/* 0041B3A0 02002025 */  move  $a0, $s0
/* 0041B3A4 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041B3A8 24060001 */  li    $a2, 1
/* 0041B3AC 2407000A */  li    $a3, 10
/* 0041B3B0 0320F809 */  jalr  $t9
/* 0041B3B4 8DC5000C */   lw    $a1, 0xc($t6)
/* 0041B3B8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041B3BC 8E300000 */  lw    $s0, ($s1)
/* 0041B3C0 2405005D */  li    $a1, 93
/* 0041B3C4 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041B3C8 24060001 */  li    $a2, 1
/* 0041B3CC 2407000A */  li    $a3, 10
/* 0041B3D0 0320F809 */  jalr  $t9
/* 0041B3D4 02002025 */   move  $a0, $s0
/* 0041B3D8 10000008 */  b     .L0041B3FC
/* 0041B3DC 8FBC003C */   lw    $gp, 0x3c($sp)
.L0041B3E0:
/* 0041B3E0 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041B3E4 8F858044 */  lw    $a1, %got(RO_1000A7C8)($gp)
/* 0041B3E8 8E240000 */  lw    $a0, ($s1)
/* 0041B3EC 0320F809 */  jalr  $t9
/* 0041B3F0 24A5A7C8 */   addiu $a1, %lo(RO_1000A7C8) # addiu $a1, $a1, -0x5838
/* 0041B3F4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041B3F8 8E300000 */  lw    $s0, ($s1)
.L0041B3FC:
/* 0041B3FC 8E420030 */  lw    $v0, 0x30($s2)
/* 0041B400 02002025 */  move  $a0, $s0
/* 0041B404 02C03025 */  move  $a2, $s6
/* 0041B408 10400036 */  beqz  $v0, .L0041B4E4
/* 0041B40C 00000000 */   nop   
/* 0041B410 8EEF0000 */  lw    $t7, ($s7)
/* 0041B414 11E20033 */  beq   $t7, $v0, .L0041B4E4
/* 0041B418 00000000 */   nop   
/* 0041B41C 8E580010 */  lw    $t8, 0x10($s2)
/* 0041B420 24070002 */  li    $a3, 2
/* 0041B424 1300002F */  beqz  $t8, .L0041B4E4
/* 0041B428 00000000 */   nop   
/* 0041B42C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041B430 8F858044 */  lw    $a1, %got(RO_1000A7C6)($gp)
/* 0041B434 02002025 */  move  $a0, $s0
/* 0041B438 24060002 */  li    $a2, 2
/* 0041B43C 0320F809 */  jalr  $t9
/* 0041B440 24A5A7C6 */   addiu $a1, %lo(RO_1000A7C6) # addiu $a1, $a1, -0x583a
/* 0041B444 8E590030 */  lw    $t9, 0x30($s2)
/* 0041B448 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041B44C 8E240000 */  lw    $a0, ($s1)
/* 0041B450 97250008 */  lhu   $a1, 8($t9)
/* 0041B454 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041B458 24060001 */  li    $a2, 1
/* 0041B45C 2407000A */  li    $a3, 10
/* 0041B460 0320F809 */  jalr  $t9
/* 0041B464 00000000 */   nop   
/* 0041B468 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041B46C 8E300000 */  lw    $s0, ($s1)
/* 0041B470 2405002C */  li    $a1, 44
/* 0041B474 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041B478 24060001 */  li    $a2, 1
/* 0041B47C 2407000A */  li    $a3, 10
/* 0041B480 0320F809 */  jalr  $t9
/* 0041B484 02002025 */   move  $a0, $s0
/* 0041B488 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041B48C 8E480030 */  lw    $t0, 0x30($s2)
/* 0041B490 02002025 */  move  $a0, $s0
/* 0041B494 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041B498 24060001 */  li    $a2, 1
/* 0041B49C 2407000A */  li    $a3, 10
/* 0041B4A0 0320F809 */  jalr  $t9
/* 0041B4A4 8D05000C */   lw    $a1, 0xc($t0)
/* 0041B4A8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041B4AC 8E300000 */  lw    $s0, ($s1)
/* 0041B4B0 2405005D */  li    $a1, 93
/* 0041B4B4 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041B4B8 24060001 */  li    $a2, 1
/* 0041B4BC 2407000A */  li    $a3, 10
/* 0041B4C0 0320F809 */  jalr  $t9
/* 0041B4C4 02002025 */   move  $a0, $s0
/* 0041B4C8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041B4CC 02002025 */  move  $a0, $s0
/* 0041B4D0 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041B4D4 0320F809 */  jalr  $t9
/* 0041B4D8 00000000 */   nop   
/* 0041B4DC 10000012 */  b     .L0041B528
/* 0041B4E0 8FBC003C */   lw    $gp, 0x3c($sp)
.L0041B4E4:
/* 0041B4E4 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041B4E8 8F858044 */  lw    $a1, %got(RO_1000A7C0)($gp)
/* 0041B4EC 02C03825 */  move  $a3, $s6
/* 0041B4F0 0320F809 */  jalr  $t9
/* 0041B4F4 24A5A7C0 */   addiu $a1, %lo(RO_1000A7C0) # addiu $a1, $a1, -0x5840
/* 0041B4F8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041B4FC 8E240000 */  lw    $a0, ($s1)
/* 0041B500 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041B504 0320F809 */  jalr  $t9
/* 0041B508 00000000 */   nop   
/* 0041B50C 10000006 */  b     .L0041B528
/* 0041B510 8FBC003C */   lw    $gp, 0x3c($sp)
.L0041B514:
/* 0041B514 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041B518 8E240000 */  lw    $a0, ($s1)
/* 0041B51C 0320F809 */  jalr  $t9
/* 0041B520 00000000 */   nop   
/* 0041B524 8FBC003C */  lw    $gp, 0x3c($sp)
.L0041B528:
/* 0041B528 8E52001C */  lw    $s2, 0x1c($s2)
/* 0041B52C 1640FDE1 */  bnez  $s2, .L0041ACB4
/* 0041B530 00000000 */   nop   
.L0041B534:
/* 0041B534 8F898DF8 */  lw     $t1, %got(table)($gp)
/* 0041B538 3C010001 */  lui   $at, 1
/* 0041B53C 24218E64 */  addiu $at, $at, -0x719c
/* 0041B540 27DE0004 */  addiu $fp, $fp, 4
/* 0041B544 00294821 */  addu  $t1, $at, $t1
/* 0041B548 57C9FDD8 */  bnel  $fp, $t1, .L0041ACAC
/* 0041B54C 8FC20000 */   lw    $v0, ($fp)
/* 0041B550 8FBF0044 */  lw    $ra, 0x44($sp)
.L0041B554:
/* 0041B554 8FB0001C */  lw    $s0, 0x1c($sp)
/* 0041B558 8FB10020 */  lw    $s1, 0x20($sp)
/* 0041B55C 8FB20024 */  lw    $s2, 0x24($sp)
/* 0041B560 8FB30028 */  lw    $s3, 0x28($sp)
/* 0041B564 8FB4002C */  lw    $s4, 0x2c($sp)
/* 0041B568 8FB50030 */  lw    $s5, 0x30($sp)
/* 0041B56C 8FB60034 */  lw    $s6, 0x34($sp)
/* 0041B570 8FB70038 */  lw    $s7, 0x38($sp)
/* 0041B574 8FBE0040 */  lw    $fp, 0x40($sp)
/* 0041B578 03E00008 */  jr    $ra
/* 0041B57C 27BD0048 */   addiu $sp, $sp, 0x48
    .type printtab, @function
    .size printtab, .-printtab
    .end printtab

glabel printbv
    .ent printbv
    # 0041B8C8 printlinfo
    # 0041BC58 printhoist
    # 0041BEF4 printprecm
    # 0041C1B0 printcm
    # 0041C688 printscm
    # 0041C914 printregs
    # 00469280 globalcolor
/* 0041B580 3C1C0FC0 */  .cpload $t9
/* 0041B584 279CED10 */  
/* 0041B588 0399E021 */  
/* 0041B58C 27BDFFB0 */  addiu $sp, $sp, -0x50
/* 0041B590 AFB30020 */  sw    $s3, 0x20($sp)
/* 0041B594 8F938CCC */  lw     $s3, %got(list)($gp)
/* 0041B598 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041B59C AFB00014 */  sw    $s0, 0x14($sp)
/* 0041B5A0 8E700000 */  lw    $s0, ($s3)
/* 0041B5A4 AFBE0038 */  sw    $fp, 0x38($sp)
/* 0041B5A8 0080F025 */  move  $fp, $a0
/* 0041B5AC AFBF003C */  sw    $ra, 0x3c($sp)
/* 0041B5B0 AFB50028 */  sw    $s5, 0x28($sp)
/* 0041B5B4 AFB2001C */  sw    $s2, 0x1c($sp)
/* 0041B5B8 AFBC0034 */  sw    $gp, 0x34($sp)
/* 0041B5BC AFB70030 */  sw    $s7, 0x30($sp)
/* 0041B5C0 AFB6002C */  sw    $s6, 0x2c($sp)
/* 0041B5C4 AFB40024 */  sw    $s4, 0x24($sp)
/* 0041B5C8 AFB10018 */  sw    $s1, 0x18($sp)
/* 0041B5CC 24150001 */  li    $s5, 1
/* 0041B5D0 00009025 */  move  $s2, $zero
/* 0041B5D4 AFA00048 */  sw    $zero, 0x48($sp)
/* 0041B5D8 AFA00044 */  sw    $zero, 0x44($sp)
/* 0041B5DC 24050028 */  li    $a1, 40
/* 0041B5E0 24060001 */  li    $a2, 1
/* 0041B5E4 2407000A */  li    $a3, 10
/* 0041B5E8 0320F809 */  jalr  $t9
/* 0041B5EC 02002025 */   move  $a0, $s0
/* 0041B5F0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0041B5F4 02002025 */  move  $a0, $s0
/* 0041B5F8 8FC50000 */  lw    $a1, ($fp)
/* 0041B5FC 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041B600 24060003 */  li    $a2, 3
/* 0041B604 2407000A */  li    $a3, 10
/* 0041B608 0320F809 */  jalr  $t9
/* 0041B60C 00000000 */   nop   
/* 0041B610 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0041B614 8E640000 */  lw    $a0, ($s3)
/* 0041B618 24060003 */  li    $a2, 3
/* 0041B61C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041B620 8F858044 */  lw    $a1, %got(RO_1000A864)($gp)
/* 0041B624 24070003 */  li    $a3, 3
/* 0041B628 0320F809 */  jalr  $t9
/* 0041B62C 24A5A864 */   addiu $a1, %lo(RO_1000A864) # addiu $a1, $a1, -0x579c
/* 0041B630 8FC30000 */  lw    $v1, ($fp)
/* 0041B634 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0041B638 50600077 */  beql  $v1, $zero, .L0041B818
/* 0041B63C 8FB1004C */   lw    $s1, 0x4c($sp)
/* 0041B640 8F8E89E0 */  lw     $t6, %got(bitposcount)($gp)
/* 0041B644 93B40041 */  lbu   $s4, 0x41($sp)
/* 0041B648 8FB1004C */  lw    $s1, 0x4c($sp)
/* 0041B64C 8DCE0000 */  lw    $t6, ($t6)
/* 0041B650 25CFFFFF */  addiu $t7, $t6, -1
/* 0041B654 05E10003 */  bgez  $t7, .L0041B664
/* 0041B658 000FC1C3 */   sra   $t8, $t7, 7
/* 0041B65C 25E1007F */  addiu $at, $t7, 0x7f
/* 0041B660 0001C1C3 */  sra   $t8, $at, 7
.L0041B664:
/* 0041B664 0702006C */  bltzl $t8, .L0041B818
/* 0041B668 8FB1004C */   lw    $s1, 0x4c($sp)
/* 0041B66C 8FB90048 */  lw    $t9, 0x48($sp)
.L0041B670:
/* 0041B670 8FB70044 */  lw    $s7, 0x44($sp)
/* 0041B674 2722007F */  addiu $v0, $t9, 0x7f
/* 0041B678 0059082A */  slt   $at, $v0, $t9
/* 0041B67C 14200050 */  bnez  $at, .L0041B7C0
/* 0041B680 0017B900 */   sll   $s7, $s7, 4
/* 0041B684 03208825 */  move  $s1, $t9
/* 0041B688 24560001 */  addiu $s6, $v0, 1
.L0041B68C:
/* 0041B68C 06210004 */  bgez  $s1, .L0041B6A0
/* 0041B690 3228007F */   andi  $t0, $s1, 0x7f
/* 0041B694 11000002 */  beqz  $t0, .L0041B6A0
/* 0041B698 00000000 */   nop   
/* 0041B69C 2508FF80 */  addiu $t0, $t0, -0x80
.L0041B6A0:
/* 0041B6A0 05010002 */  bgez  $t0, .L0041B6AC
/* 0041B6A4 0012102B */   sltu  $v0, $zero, $s2
/* 0041B6A8 21080080 */  addi  $t0, $t0, 0x80
.L0041B6AC:
/* 0041B6AC 2D090080 */  sltiu $t1, $t0, 0x80
/* 0041B6B0 11200009 */  beqz  $t1, .L0041B6D8
/* 0041B6B4 00000000 */   nop   
/* 0041B6B8 8FCA0004 */  lw    $t2, 4($fp)
/* 0041B6BC 00086143 */  sra   $t4, $t0, 5
/* 0041B6C0 000C6880 */  sll   $t5, $t4, 2
/* 0041B6C4 01575821 */  addu  $t3, $t2, $s7
/* 0041B6C8 016D7021 */  addu  $t6, $t3, $t5
/* 0041B6CC 8DCF0000 */  lw    $t7, ($t6)
/* 0041B6D0 010FC004 */  sllv  $t8, $t7, $t0
/* 0041B6D4 2B090000 */  slti  $t1, $t8, 0
.L0041B6D8:
/* 0041B6D8 11200022 */  beqz  $t1, .L0041B764
/* 0041B6DC 00000000 */   nop   
/* 0041B6E0 0012102B */  sltu  $v0, $zero, $s2
/* 0041B6E4 1440001D */  bnez  $v0, .L0041B75C
/* 0041B6E8 24120001 */   li    $s2, 1
/* 0041B6EC 12A0000A */  beqz  $s5, .L0041B718
/* 0041B6F0 24140001 */   li    $s4, 1
/* 0041B6F4 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041B6F8 8E640000 */  lw    $a0, ($s3)
/* 0041B6FC 02202825 */  move  $a1, $s1
/* 0041B700 24060004 */  li    $a2, 4
/* 0041B704 2407000A */  li    $a3, 10
/* 0041B708 0320F809 */  jalr  $t9
/* 0041B70C 0000A825 */   move  $s5, $zero
/* 0041B710 10000027 */  b     .L0041B7B0
/* 0041B714 8FBC0034 */   lw    $gp, 0x34($sp)
.L0041B718:
/* 0041B718 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041B71C 8E700000 */  lw    $s0, ($s3)
/* 0041B720 2405002C */  li    $a1, 44
/* 0041B724 24060001 */  li    $a2, 1
/* 0041B728 2407000A */  li    $a3, 10
/* 0041B72C 0320F809 */  jalr  $t9
/* 0041B730 02002025 */   move  $a0, $s0
/* 0041B734 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0041B738 02002025 */  move  $a0, $s0
/* 0041B73C 02202825 */  move  $a1, $s1
/* 0041B740 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041B744 24060004 */  li    $a2, 4
/* 0041B748 2407000A */  li    $a3, 10
/* 0041B74C 0320F809 */  jalr  $t9
/* 0041B750 00000000 */   nop   
/* 0041B754 10000016 */  b     .L0041B7B0
/* 0041B758 8FBC0034 */   lw    $gp, 0x34($sp)
.L0041B75C:
/* 0041B75C 10000014 */  b     .L0041B7B0
/* 0041B760 0000A025 */   move  $s4, $zero
.L0041B764:
/* 0041B764 10400012 */  beqz  $v0, .L0041B7B0
/* 0041B768 00009025 */   move  $s2, $zero
/* 0041B76C 16800010 */  bnez  $s4, .L0041B7B0
/* 0041B770 24060002 */   li    $a2, 2
/* 0041B774 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041B778 8F858044 */  lw    $a1, %got(RO_1000A862)($gp)
/* 0041B77C 8E640000 */  lw    $a0, ($s3)
/* 0041B780 24070002 */  li    $a3, 2
/* 0041B784 0320F809 */  jalr  $t9
/* 0041B788 24A5A862 */   addiu $a1, %lo(RO_1000A862) # addiu $a1, $a1, -0x579e
/* 0041B78C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0041B790 8E640000 */  lw    $a0, ($s3)
/* 0041B794 2625FFFF */  addiu $a1, $s1, -1
/* 0041B798 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041B79C 24060004 */  li    $a2, 4
/* 0041B7A0 2407000A */  li    $a3, 10
/* 0041B7A4 0320F809 */  jalr  $t9
/* 0041B7A8 00000000 */   nop   
/* 0041B7AC 8FBC0034 */  lw    $gp, 0x34($sp)
.L0041B7B0:
/* 0041B7B0 26310001 */  addiu $s1, $s1, 1
/* 0041B7B4 1636FFB5 */  bne   $s1, $s6, .L0041B68C
/* 0041B7B8 00000000 */   nop   
/* 0041B7BC 8FC30000 */  lw    $v1, ($fp)
.L0041B7C0:
/* 0041B7C0 8FAA0048 */  lw    $t2, 0x48($sp)
/* 0041B7C4 8FAB0044 */  lw    $t3, 0x44($sp)
/* 0041B7C8 AFB1004C */  sw    $s1, 0x4c($sp)
/* 0041B7CC 254C0080 */  addiu $t4, $t2, 0x80
/* 0041B7D0 256D0001 */  addiu $t5, $t3, 1
/* 0041B7D4 AFAC0048 */  sw    $t4, 0x48($sp)
/* 0041B7D8 AFAD0044 */  sw    $t5, 0x44($sp)
/* 0041B7DC 11A3000D */  beq   $t5, $v1, .L0041B814
/* 0041B7E0 A3B40041 */   sb    $s4, 0x41($sp)
/* 0041B7E4 8F8E89E0 */  lw     $t6, %got(bitposcount)($gp)
/* 0041B7E8 8DCE0000 */  lw    $t6, ($t6)
/* 0041B7EC 25CFFFFF */  addiu $t7, $t6, -1
/* 0041B7F0 05E10003 */  bgez  $t7, .L0041B800
/* 0041B7F4 000F41C3 */   sra   $t0, $t7, 7
/* 0041B7F8 25E1007F */  addiu $at, $t7, 0x7f
/* 0041B7FC 000141C3 */  sra   $t0, $at, 7
.L0041B800:
/* 0041B800 010D082A */  slt   $at, $t0, $t5
/* 0041B804 5020FF9A */  beql  $at, $zero, .L0041B670
/* 0041B808 8FB90048 */   lw    $t9, 0x48($sp)
/* 0041B80C AFB1004C */  sw    $s1, 0x4c($sp)
/* 0041B810 A3B40041 */  sb    $s4, 0x41($sp)
.L0041B814:
/* 0041B814 8FB1004C */  lw    $s1, 0x4c($sp)
.L0041B818:
/* 0041B818 12400012 */  beqz  $s2, .L0041B864
/* 0041B81C 93B40041 */   lbu   $s4, 0x41($sp)
/* 0041B820 16800010 */  bnez  $s4, .L0041B864
/* 0041B824 24060002 */   li    $a2, 2
/* 0041B828 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041B82C 8F858044 */  lw    $a1, %got(RO_1000A860)($gp)
/* 0041B830 8E640000 */  lw    $a0, ($s3)
/* 0041B834 24070002 */  li    $a3, 2
/* 0041B838 0320F809 */  jalr  $t9
/* 0041B83C 24A5A860 */   addiu $a1, %lo(RO_1000A860) # addiu $a1, $a1, -0x57a0
/* 0041B840 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0041B844 8E640000 */  lw    $a0, ($s3)
/* 0041B848 2625FFFF */  addiu $a1, $s1, -1
/* 0041B84C 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041B850 24060004 */  li    $a2, 4
/* 0041B854 2407000A */  li    $a3, 10
/* 0041B858 0320F809 */  jalr  $t9
/* 0041B85C 00000000 */   nop   
/* 0041B860 8FBC0034 */  lw    $gp, 0x34($sp)
.L0041B864:
/* 0041B864 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041B868 8E700000 */  lw    $s0, ($s3)
/* 0041B86C 2405005D */  li    $a1, 93
/* 0041B870 24060001 */  li    $a2, 1
/* 0041B874 2407000A */  li    $a3, 10
/* 0041B878 0320F809 */  jalr  $t9
/* 0041B87C 02002025 */   move  $a0, $s0
/* 0041B880 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0041B884 02002025 */  move  $a0, $s0
/* 0041B888 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041B88C 0320F809 */  jalr  $t9
/* 0041B890 00000000 */   nop   
/* 0041B894 8FBF003C */  lw    $ra, 0x3c($sp)
/* 0041B898 8FBC0034 */  lw    $gp, 0x34($sp)
/* 0041B89C 8FB00014 */  lw    $s0, 0x14($sp)
/* 0041B8A0 8FB10018 */  lw    $s1, 0x18($sp)
/* 0041B8A4 8FB2001C */  lw    $s2, 0x1c($sp)
/* 0041B8A8 8FB30020 */  lw    $s3, 0x20($sp)
/* 0041B8AC 8FB40024 */  lw    $s4, 0x24($sp)
/* 0041B8B0 8FB50028 */  lw    $s5, 0x28($sp)
/* 0041B8B4 8FB6002C */  lw    $s6, 0x2c($sp)
/* 0041B8B8 8FB70030 */  lw    $s7, 0x30($sp)
/* 0041B8BC 8FBE0038 */  lw    $fp, 0x38($sp)
/* 0041B8C0 03E00008 */  jr    $ra
/* 0041B8C4 27BD0050 */   addiu $sp, $sp, 0x50
    .type printbv, @function
    .size printbv, .-printbv
    .end printbv

glabel printlinfo
    .ent printlinfo
    # 00456A2C oneproc
/* 0041B8C8 3C1C0FC0 */  .cpload $t9
/* 0041B8CC 279CE9C8 */  
/* 0041B8D0 0399E021 */  
/* 0041B8D4 8F8E8DE8 */  lw     $t6, %got(proc_to_print)($gp)
/* 0041B8D8 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0041B8DC 24010020 */  li    $at, 32
/* 0041B8E0 91CE0000 */  lbu   $t6, ($t6)
/* 0041B8E4 AFBF0024 */  sw    $ra, 0x24($sp)
/* 0041B8E8 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0041B8EC AFB1001C */  sw    $s1, 0x1c($sp)
/* 0041B8F0 11C10005 */  beq   $t6, $at, .L0041B908
/* 0041B8F4 AFB00018 */   sw    $s0, 0x18($sp)
/* 0041B8F8 8F8F8A8C */  lw     $t7, %got(at_proc_to_print)($gp)
/* 0041B8FC 91EF0000 */  lbu   $t7, ($t7)
/* 0041B900 51E000D1 */  beql  $t7, $zero, .L0041BC48
/* 0041B904 8FBF0024 */   lw    $ra, 0x24($sp)
.L0041B908:
/* 0041B908 8F9089AC */  lw     $s0, %got(graphhead)($gp)
/* 0041B90C 8E100000 */  lw    $s0, ($s0)
/* 0041B910 1200007D */  beqz  $s0, .L0041BB08
/* 0041B914 00000000 */   nop   
/* 0041B918 8F918CCC */  lw     $s1, %got(list)($gp)
.L0041B91C:
/* 0041B91C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041B920 8F858044 */  lw    $a1, %got(RO_1000A903)($gp)
/* 0041B924 8E240000 */  lw    $a0, ($s1)
/* 0041B928 2406000E */  li    $a2, 14
/* 0041B92C 2407000E */  li    $a3, 14
/* 0041B930 0320F809 */  jalr  $t9
/* 0041B934 24A5A903 */   addiu $a1, %lo(RO_1000A903) # addiu $a1, $a1, -0x56fd
/* 0041B938 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041B93C 8E240000 */  lw    $a0, ($s1)
/* 0041B940 96050008 */  lhu   $a1, 8($s0)
/* 0041B944 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041B948 2406000C */  li    $a2, 12
/* 0041B94C 2407000A */  li    $a3, 10
/* 0041B950 0320F809 */  jalr  $t9
/* 0041B954 00000000 */   nop   
/* 0041B958 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041B95C 8E240000 */  lw    $a0, ($s1)
/* 0041B960 2406000A */  li    $a2, 10
/* 0041B964 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041B968 8F858044 */  lw    $a1, %got(RO_1000A8F9)($gp)
/* 0041B96C 2407000A */  li    $a3, 10
/* 0041B970 0320F809 */  jalr  $t9
/* 0041B974 24A5A8F9 */   addiu $a1, %lo(RO_1000A8F9) # addiu $a1, $a1, -0x5707
/* 0041B978 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041B97C 8E240000 */  lw    $a0, ($s1)
/* 0041B980 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041B984 0320F809 */  jalr  $t9
/* 0041B988 00000000 */   nop   
/* 0041B98C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041B990 8E240000 */  lw    $a0, ($s1)
/* 0041B994 2406000A */  li    $a2, 10
/* 0041B998 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041B99C 8F858044 */  lw    $a1, %got(RO_1000A8EF)($gp)
/* 0041B9A0 2407000A */  li    $a3, 10
/* 0041B9A4 0320F809 */  jalr  $t9
/* 0041B9A8 24A5A8EF */   addiu $a1, %lo(RO_1000A8EF) # addiu $a1, $a1, -0x5711
/* 0041B9AC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041B9B0 26040104 */  addiu $a0, $s0, 0x104
/* 0041B9B4 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041B9B8 0320F809 */  jalr  $t9
/* 0041B9BC 00000000 */   nop   
/* 0041B9C0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041B9C4 8E240000 */  lw    $a0, ($s1)
/* 0041B9C8 24060009 */  li    $a2, 9
/* 0041B9CC 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041B9D0 8F858044 */  lw    $a1, %got(RO_1000A8E6)($gp)
/* 0041B9D4 24070009 */  li    $a3, 9
/* 0041B9D8 0320F809 */  jalr  $t9
/* 0041B9DC 24A5A8E6 */   addiu $a1, %lo(RO_1000A8E6) # addiu $a1, $a1, -0x571a
/* 0041B9E0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041B9E4 26040114 */  addiu $a0, $s0, 0x114
/* 0041B9E8 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041B9EC 0320F809 */  jalr  $t9
/* 0041B9F0 00000000 */   nop   
/* 0041B9F4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041B9F8 8E240000 */  lw    $a0, ($s1)
/* 0041B9FC 24060009 */  li    $a2, 9
/* 0041BA00 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041BA04 8F858044 */  lw    $a1, %got(RO_1000A8DD)($gp)
/* 0041BA08 24070009 */  li    $a3, 9
/* 0041BA0C 0320F809 */  jalr  $t9
/* 0041BA10 24A5A8DD */   addiu $a1, %lo(RO_1000A8DD) # addiu $a1, $a1, -0x5723
/* 0041BA14 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041BA18 2604010C */  addiu $a0, $s0, 0x10c
/* 0041BA1C 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041BA20 0320F809 */  jalr  $t9
/* 0041BA24 00000000 */   nop   
/* 0041BA28 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041BA2C 8E240000 */  lw    $a0, ($s1)
/* 0041BA30 2406000A */  li    $a2, 10
/* 0041BA34 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041BA38 8F858044 */  lw    $a1, %got(RO_1000A8D3)($gp)
/* 0041BA3C 2407000A */  li    $a3, 10
/* 0041BA40 0320F809 */  jalr  $t9
/* 0041BA44 24A5A8D3 */   addiu $a1, %lo(RO_1000A8D3) # addiu $a1, $a1, -0x572d
/* 0041BA48 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041BA4C 26040124 */  addiu $a0, $s0, 0x124
/* 0041BA50 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041BA54 0320F809 */  jalr  $t9
/* 0041BA58 00000000 */   nop   
/* 0041BA5C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041BA60 8E240000 */  lw    $a0, ($s1)
/* 0041BA64 2406000C */  li    $a2, 12
/* 0041BA68 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041BA6C 8F858044 */  lw    $a1, %got(RO_1000A8C7)($gp)
/* 0041BA70 2407000C */  li    $a3, 12
/* 0041BA74 0320F809 */  jalr  $t9
/* 0041BA78 24A5A8C7 */   addiu $a1, %lo(RO_1000A8C7) # addiu $a1, $a1, -0x5739
/* 0041BA7C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041BA80 2604011C */  addiu $a0, $s0, 0x11c
/* 0041BA84 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041BA88 0320F809 */  jalr  $t9
/* 0041BA8C 00000000 */   nop   
/* 0041BA90 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041BA94 8E240000 */  lw    $a0, ($s1)
/* 0041BA98 2406000B */  li    $a2, 11
/* 0041BA9C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041BAA0 8F858044 */  lw    $a1, %got(RO_1000A8BC)($gp)
/* 0041BAA4 2407000B */  li    $a3, 11
/* 0041BAA8 0320F809 */  jalr  $t9
/* 0041BAAC 24A5A8BC */   addiu $a1, %lo(RO_1000A8BC) # addiu $a1, $a1, -0x5744
/* 0041BAB0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041BAB4 2604012C */  addiu $a0, $s0, 0x12c
/* 0041BAB8 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041BABC 0320F809 */  jalr  $t9
/* 0041BAC0 00000000 */   nop   
/* 0041BAC4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041BAC8 8E240000 */  lw    $a0, ($s1)
/* 0041BACC 2406000B */  li    $a2, 11
/* 0041BAD0 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041BAD4 8F858044 */  lw    $a1, %got(RO_1000A8B1)($gp)
/* 0041BAD8 2407000B */  li    $a3, 11
/* 0041BADC 0320F809 */  jalr  $t9
/* 0041BAE0 24A5A8B1 */   addiu $a1, %lo(RO_1000A8B1) # addiu $a1, $a1, -0x574f
/* 0041BAE4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041BAE8 260400F4 */  addiu $a0, $s0, 0xf4
/* 0041BAEC 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041BAF0 0320F809 */  jalr  $t9
/* 0041BAF4 00000000 */   nop   
/* 0041BAF8 8E10000C */  lw    $s0, 0xc($s0)
/* 0041BAFC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041BB00 1600FF86 */  bnez  $s0, .L0041B91C
/* 0041BB04 00000000 */   nop   
.L0041BB08:
/* 0041BB08 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041BB0C 8F918CCC */  lw     $s1, %got(list)($gp)
/* 0041BB10 8F858044 */  lw    $a1, %got(RO_1000A8A5)($gp)
/* 0041BB14 2406000C */  li    $a2, 12
/* 0041BB18 2407000C */  li    $a3, 12
/* 0041BB1C 8E240000 */  lw    $a0, ($s1)
/* 0041BB20 0320F809 */  jalr  $t9
/* 0041BB24 24A5A8A5 */   addiu $a1, %lo(RO_1000A8A5) # addiu $a1, $a1, -0x575b
/* 0041BB28 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041BB2C 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041BB30 8F848CD4 */  lw     $a0, %got(varbits)($gp)
/* 0041BB34 0320F809 */  jalr  $t9
/* 0041BB38 00000000 */   nop   
/* 0041BB3C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041BB40 8E240000 */  lw    $a0, ($s1)
/* 0041BB44 2406000E */  li    $a2, 14
/* 0041BB48 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041BB4C 8F858044 */  lw    $a1, %got(RO_1000A897)($gp)
/* 0041BB50 2407000E */  li    $a3, 14
/* 0041BB54 0320F809 */  jalr  $t9
/* 0041BB58 24A5A897 */   addiu $a1, %lo(RO_1000A897) # addiu $a1, $a1, -0x5769
/* 0041BB5C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041BB60 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041BB64 8F848CE4 */  lw     $a0, %got(slvarbits)($gp)
/* 0041BB68 0320F809 */  jalr  $t9
/* 0041BB6C 00000000 */   nop   
/* 0041BB70 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041BB74 8E240000 */  lw    $a0, ($s1)
/* 0041BB78 2406000C */  li    $a2, 12
/* 0041BB7C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041BB80 8F858044 */  lw    $a1, %got(RO_1000A88B)($gp)
/* 0041BB84 2407000C */  li    $a3, 12
/* 0041BB88 0320F809 */  jalr  $t9
/* 0041BB8C 24A5A88B */   addiu $a1, %lo(RO_1000A88B) # addiu $a1, $a1, -0x5775
/* 0041BB90 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041BB94 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041BB98 8F848CEC */  lw     $a0, %got(storeop)($gp)
/* 0041BB9C 0320F809 */  jalr  $t9
/* 0041BBA0 00000000 */   nop   
/* 0041BBA4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041BBA8 8E240000 */  lw    $a0, ($s1)
/* 0041BBAC 2406000B */  li    $a2, 11
/* 0041BBB0 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041BBB4 8F858044 */  lw    $a1, %got(RO_1000A880)($gp)
/* 0041BBB8 2407000B */  li    $a3, 11
/* 0041BBBC 0320F809 */  jalr  $t9
/* 0041BBC0 24A5A880 */   addiu $a1, %lo(RO_1000A880) # addiu $a1, $a1, -0x5780
/* 0041BBC4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041BBC8 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041BBCC 8F848CF0 */  lw     $a0, %got(trapop)($gp)
/* 0041BBD0 0320F809 */  jalr  $t9
/* 0041BBD4 00000000 */   nop   
/* 0041BBD8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041BBDC 8E240000 */  lw    $a0, ($s1)
/* 0041BBE0 2406000C */  li    $a2, 12
/* 0041BBE4 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041BBE8 8F858044 */  lw    $a1, %got(RO_1000A874)($gp)
/* 0041BBEC 2407000C */  li    $a3, 12
/* 0041BBF0 0320F809 */  jalr  $t9
/* 0041BBF4 24A5A874 */   addiu $a1, %lo(RO_1000A874) # addiu $a1, $a1, -0x578c
/* 0041BBF8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041BBFC 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041BC00 8F848CFC */  lw     $a0, %got(boolexp)($gp)
/* 0041BC04 0320F809 */  jalr  $t9
/* 0041BC08 00000000 */   nop   
/* 0041BC0C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041BC10 8E240000 */  lw    $a0, ($s1)
/* 0041BC14 2406000D */  li    $a2, 13
/* 0041BC18 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041BC1C 8F858044 */  lw    $a1, %got(RO_1000A867)($gp)
/* 0041BC20 2407000D */  li    $a3, 13
/* 0041BC24 0320F809 */  jalr  $t9
/* 0041BC28 24A5A867 */   addiu $a1, %lo(RO_1000A867) # addiu $a1, $a1, -0x5799
/* 0041BC2C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041BC30 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041BC34 8F848CF8 */  lw     $a0, %got(indmults)($gp)
/* 0041BC38 0320F809 */  jalr  $t9
/* 0041BC3C 00000000 */   nop   
/* 0041BC40 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041BC44 8FBF0024 */  lw    $ra, 0x24($sp)
.L0041BC48:
/* 0041BC48 8FB00018 */  lw    $s0, 0x18($sp)
/* 0041BC4C 8FB1001C */  lw    $s1, 0x1c($sp)
/* 0041BC50 03E00008 */  jr    $ra
/* 0041BC54 27BD0028 */   addiu $sp, $sp, 0x28
    .type printlinfo, @function
    .size printlinfo, .-printlinfo
    .end printlinfo

glabel printhoist
    .ent printhoist
    # 004324F4 findinduct
/* 0041BC58 3C1C0FC0 */  .cpload $t9
/* 0041BC5C 279CE638 */  
/* 0041BC60 0399E021 */  
/* 0041BC64 8F8E8DE8 */  lw     $t6, %got(proc_to_print)($gp)
/* 0041BC68 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0041BC6C AFB2001C */  sw    $s2, 0x1c($sp)
/* 0041BC70 91CE0000 */  lbu   $t6, ($t6)
/* 0041BC74 24010020 */  li    $at, 32
/* 0041BC78 309200FF */  andi  $s2, $a0, 0xff
/* 0041BC7C AFBF0024 */  sw    $ra, 0x24($sp)
/* 0041BC80 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0041BC84 AFB10018 */  sw    $s1, 0x18($sp)
/* 0041BC88 AFB00014 */  sw    $s0, 0x14($sp)
/* 0041BC8C 11C10005 */  beq   $t6, $at, .L0041BCA4
/* 0041BC90 AFA40028 */   sw    $a0, 0x28($sp)
/* 0041BC94 8F8F8A8C */  lw     $t7, %got(at_proc_to_print)($gp)
/* 0041BC98 91EF0000 */  lbu   $t7, ($t7)
/* 0041BC9C 51E00090 */  beql  $t7, $zero, .L0041BEE0
/* 0041BCA0 8FBF0024 */   lw    $ra, 0x24($sp)
.L0041BCA4:
/* 0041BCA4 8F9089AC */  lw     $s0, %got(graphhead)($gp)
/* 0041BCA8 8E100000 */  lw    $s0, ($s0)
/* 0041BCAC 5200008C */  beql  $s0, $zero, .L0041BEE0
/* 0041BCB0 8FBF0024 */   lw    $ra, 0x24($sp)
/* 0041BCB4 8F918CCC */  lw     $s1, %got(list)($gp)
.L0041BCB8:
/* 0041BCB8 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041BCBC 8F858044 */  lw    $a1, %got(RO_1000A966)($gp)
/* 0041BCC0 8E240000 */  lw    $a0, ($s1)
/* 0041BCC4 2406000E */  li    $a2, 14
/* 0041BCC8 2407000E */  li    $a3, 14
/* 0041BCCC 0320F809 */  jalr  $t9
/* 0041BCD0 24A5A966 */   addiu $a1, %lo(RO_1000A966) # addiu $a1, $a1, -0x569a
/* 0041BCD4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041BCD8 8E240000 */  lw    $a0, ($s1)
/* 0041BCDC 96050008 */  lhu   $a1, 8($s0)
/* 0041BCE0 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041BCE4 2406000C */  li    $a2, 12
/* 0041BCE8 2407000A */  li    $a3, 10
/* 0041BCEC 0320F809 */  jalr  $t9
/* 0041BCF0 00000000 */   nop   
/* 0041BCF4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041BCF8 8E240000 */  lw    $a0, ($s1)
/* 0041BCFC 2406000A */  li    $a2, 10
/* 0041BD00 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041BD04 8F858044 */  lw    $a1, %got(RO_1000A95C)($gp)
/* 0041BD08 2407000A */  li    $a3, 10
/* 0041BD0C 0320F809 */  jalr  $t9
/* 0041BD10 24A5A95C */   addiu $a1, %lo(RO_1000A95C) # addiu $a1, $a1, -0x56a4
/* 0041BD14 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041BD18 8E240000 */  lw    $a0, ($s1)
/* 0041BD1C 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041BD20 0320F809 */  jalr  $t9
/* 0041BD24 00000000 */   nop   
/* 0041BD28 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041BD2C 8E240000 */  lw    $a0, ($s1)
/* 0041BD30 2406000A */  li    $a2, 10
/* 0041BD34 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041BD38 8F858044 */  lw    $a1, %got(RO_1000A952)($gp)
/* 0041BD3C 2407000A */  li    $a3, 10
/* 0041BD40 0320F809 */  jalr  $t9
/* 0041BD44 24A5A952 */   addiu $a1, %lo(RO_1000A952) # addiu $a1, $a1, -0x56ae
/* 0041BD48 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041BD4C 26040104 */  addiu $a0, $s0, 0x104
/* 0041BD50 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041BD54 0320F809 */  jalr  $t9
/* 0041BD58 00000000 */   nop   
/* 0041BD5C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041BD60 8E240000 */  lw    $a0, ($s1)
/* 0041BD64 24060009 */  li    $a2, 9
/* 0041BD68 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041BD6C 8F858044 */  lw    $a1, %got(RO_1000A949)($gp)
/* 0041BD70 24070009 */  li    $a3, 9
/* 0041BD74 0320F809 */  jalr  $t9
/* 0041BD78 24A5A949 */   addiu $a1, %lo(RO_1000A949) # addiu $a1, $a1, -0x56b7
/* 0041BD7C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041BD80 26040114 */  addiu $a0, $s0, 0x114
/* 0041BD84 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041BD88 0320F809 */  jalr  $t9
/* 0041BD8C 00000000 */   nop   
/* 0041BD90 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041BD94 8E240000 */  lw    $a0, ($s1)
/* 0041BD98 24060009 */  li    $a2, 9
/* 0041BD9C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041BDA0 8F858044 */  lw    $a1, %got(RO_1000A940)($gp)
/* 0041BDA4 24070009 */  li    $a3, 9
/* 0041BDA8 0320F809 */  jalr  $t9
/* 0041BDAC 24A5A940 */   addiu $a1, %lo(RO_1000A940) # addiu $a1, $a1, -0x56c0
/* 0041BDB0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041BDB4 2604010C */  addiu $a0, $s0, 0x10c
/* 0041BDB8 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041BDBC 0320F809 */  jalr  $t9
/* 0041BDC0 00000000 */   nop   
/* 0041BDC4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041BDC8 8E240000 */  lw    $a0, ($s1)
/* 0041BDCC 24060008 */  li    $a2, 8
/* 0041BDD0 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041BDD4 8F858044 */  lw    $a1, %got(RO_1000A938)($gp)
/* 0041BDD8 24070008 */  li    $a3, 8
/* 0041BDDC 0320F809 */  jalr  $t9
/* 0041BDE0 24A5A938 */   addiu $a1, %lo(RO_1000A938) # addiu $a1, $a1, -0x56c8
/* 0041BDE4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041BDE8 26040154 */  addiu $a0, $s0, 0x154
/* 0041BDEC 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041BDF0 0320F809 */  jalr  $t9
/* 0041BDF4 00000000 */   nop   
/* 0041BDF8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041BDFC 8E240000 */  lw    $a0, ($s1)
/* 0041BE00 24060009 */  li    $a2, 9
/* 0041BE04 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041BE08 8F858044 */  lw    $a1, %got(RO_1000A92F)($gp)
/* 0041BE0C 24070009 */  li    $a3, 9
/* 0041BE10 0320F809 */  jalr  $t9
/* 0041BE14 24A5A92F */   addiu $a1, %lo(RO_1000A92F) # addiu $a1, $a1, -0x56d1
/* 0041BE18 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041BE1C 2604015C */  addiu $a0, $s0, 0x15c
/* 0041BE20 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041BE24 0320F809 */  jalr  $t9
/* 0041BE28 00000000 */   nop   
/* 0041BE2C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041BE30 8E240000 */  lw    $a0, ($s1)
/* 0041BE34 24060008 */  li    $a2, 8
/* 0041BE38 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041BE3C 8F858044 */  lw    $a1, %got(RO_1000A927)($gp)
/* 0041BE40 24070008 */  li    $a3, 8
/* 0041BE44 0320F809 */  jalr  $t9
/* 0041BE48 24A5A927 */   addiu $a1, %lo(RO_1000A927) # addiu $a1, $a1, -0x56d9
/* 0041BE4C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041BE50 26040164 */  addiu $a0, $s0, 0x164
/* 0041BE54 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041BE58 0320F809 */  jalr  $t9
/* 0041BE5C 00000000 */   nop   
/* 0041BE60 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041BE64 8E240000 */  lw    $a0, ($s1)
/* 0041BE68 24060009 */  li    $a2, 9
/* 0041BE6C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041BE70 8F858044 */  lw    $a1, %got(RO_1000A91E)($gp)
/* 0041BE74 24070009 */  li    $a3, 9
/* 0041BE78 0320F809 */  jalr  $t9
/* 0041BE7C 24A5A91E */   addiu $a1, %lo(RO_1000A91E) # addiu $a1, $a1, -0x56e2
/* 0041BE80 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041BE84 2604016C */  addiu $a0, $s0, 0x16c
/* 0041BE88 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041BE8C 0320F809 */  jalr  $t9
/* 0041BE90 00000000 */   nop   
/* 0041BE94 1240000E */  beqz  $s2, .L0041BED0
/* 0041BE98 8FBC0020 */   lw    $gp, 0x20($sp)
/* 0041BE9C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041BEA0 8F858044 */  lw    $a1, %got(RO_1000A911)($gp)
/* 0041BEA4 8E240000 */  lw    $a0, ($s1)
/* 0041BEA8 2406000D */  li    $a2, 13
/* 0041BEAC 2407000D */  li    $a3, 13
/* 0041BEB0 0320F809 */  jalr  $t9
/* 0041BEB4 24A5A911 */   addiu $a1, %lo(RO_1000A911) # addiu $a1, $a1, -0x56ef
/* 0041BEB8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041BEBC 260400FC */  addiu $a0, $s0, 0xfc
/* 0041BEC0 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041BEC4 0320F809 */  jalr  $t9
/* 0041BEC8 00000000 */   nop   
/* 0041BECC 8FBC0020 */  lw    $gp, 0x20($sp)
.L0041BED0:
/* 0041BED0 8E10000C */  lw    $s0, 0xc($s0)
/* 0041BED4 1600FF78 */  bnez  $s0, .L0041BCB8
/* 0041BED8 00000000 */   nop   
/* 0041BEDC 8FBF0024 */  lw    $ra, 0x24($sp)
.L0041BEE0:
/* 0041BEE0 8FB00014 */  lw    $s0, 0x14($sp)
/* 0041BEE4 8FB10018 */  lw    $s1, 0x18($sp)
/* 0041BEE8 8FB2001C */  lw    $s2, 0x1c($sp)
/* 0041BEEC 03E00008 */  jr    $ra
/* 0041BEF0 27BD0028 */   addiu $sp, $sp, 0x28
    .type printhoist, @function
    .size printhoist, .-printhoist
    .end printhoist

glabel printprecm
    .ent printprecm
    # 00410204 codemotion
/* 0041BEF4 3C1C0FC0 */  .cpload $t9
/* 0041BEF8 279CE39C */  
/* 0041BEFC 0399E021 */  
/* 0041BF00 8F8E8DE8 */  lw     $t6, %got(proc_to_print)($gp)
/* 0041BF04 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0041BF08 24010020 */  li    $at, 32
/* 0041BF0C 91CE0000 */  lbu   $t6, ($t6)
/* 0041BF10 AFBF0024 */  sw    $ra, 0x24($sp)
/* 0041BF14 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0041BF18 AFB1001C */  sw    $s1, 0x1c($sp)
/* 0041BF1C 11C10005 */  beq   $t6, $at, .L0041BF34
/* 0041BF20 AFB00018 */   sw    $s0, 0x18($sp)
/* 0041BF24 8F8F8A8C */  lw     $t7, %got(at_proc_to_print)($gp)
/* 0041BF28 91EF0000 */  lbu   $t7, ($t7)
/* 0041BF2C 51E0009C */  beql  $t7, $zero, .L0041C1A0
/* 0041BF30 8FBF0024 */   lw    $ra, 0x24($sp)
.L0041BF34:
/* 0041BF34 8F9089AC */  lw     $s0, %got(graphhead)($gp)
/* 0041BF38 8E100000 */  lw    $s0, ($s0)
/* 0041BF3C 52000098 */  beql  $s0, $zero, .L0041C1A0
/* 0041BF40 8FBF0024 */   lw    $ra, 0x24($sp)
/* 0041BF44 8F918CCC */  lw     $s1, %got(list)($gp)
.L0041BF48:
/* 0041BF48 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041BF4C 8F858044 */  lw    $a1, %got(RO_1000A9D0)($gp)
/* 0041BF50 8E240000 */  lw    $a0, ($s1)
/* 0041BF54 2406000E */  li    $a2, 14
/* 0041BF58 2407000E */  li    $a3, 14
/* 0041BF5C 0320F809 */  jalr  $t9
/* 0041BF60 24A5A9D0 */   addiu $a1, %lo(RO_1000A9D0) # addiu $a1, $a1, -0x5630
/* 0041BF64 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041BF68 8E240000 */  lw    $a0, ($s1)
/* 0041BF6C 96050008 */  lhu   $a1, 8($s0)
/* 0041BF70 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041BF74 2406000C */  li    $a2, 12
/* 0041BF78 2407000A */  li    $a3, 10
/* 0041BF7C 0320F809 */  jalr  $t9
/* 0041BF80 00000000 */   nop   
/* 0041BF84 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041BF88 8E240000 */  lw    $a0, ($s1)
/* 0041BF8C 2406000A */  li    $a2, 10
/* 0041BF90 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041BF94 8F858044 */  lw    $a1, %got(RO_1000A9C6)($gp)
/* 0041BF98 2407000A */  li    $a3, 10
/* 0041BF9C 0320F809 */  jalr  $t9
/* 0041BFA0 24A5A9C6 */   addiu $a1, %lo(RO_1000A9C6) # addiu $a1, $a1, -0x563a
/* 0041BFA4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041BFA8 8E240000 */  lw    $a0, ($s1)
/* 0041BFAC 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041BFB0 0320F809 */  jalr  $t9
/* 0041BFB4 00000000 */   nop   
/* 0041BFB8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041BFBC 8E240000 */  lw    $a0, ($s1)
/* 0041BFC0 2406000A */  li    $a2, 10
/* 0041BFC4 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041BFC8 8F858044 */  lw    $a1, %got(RO_1000A9BC)($gp)
/* 0041BFCC 2407000A */  li    $a3, 10
/* 0041BFD0 0320F809 */  jalr  $t9
/* 0041BFD4 24A5A9BC */   addiu $a1, %lo(RO_1000A9BC) # addiu $a1, $a1, -0x5644
/* 0041BFD8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041BFDC 26040104 */  addiu $a0, $s0, 0x104
/* 0041BFE0 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041BFE4 0320F809 */  jalr  $t9
/* 0041BFE8 00000000 */   nop   
/* 0041BFEC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041BFF0 8E240000 */  lw    $a0, ($s1)
/* 0041BFF4 24060009 */  li    $a2, 9
/* 0041BFF8 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041BFFC 8F858044 */  lw    $a1, %got(RO_1000A9B3)($gp)
/* 0041C000 24070009 */  li    $a3, 9
/* 0041C004 0320F809 */  jalr  $t9
/* 0041C008 24A5A9B3 */   addiu $a1, %lo(RO_1000A9B3) # addiu $a1, $a1, -0x564d
/* 0041C00C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C010 26040114 */  addiu $a0, $s0, 0x114
/* 0041C014 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041C018 0320F809 */  jalr  $t9
/* 0041C01C 00000000 */   nop   
/* 0041C020 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C024 8E240000 */  lw    $a0, ($s1)
/* 0041C028 24060009 */  li    $a2, 9
/* 0041C02C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041C030 8F858044 */  lw    $a1, %got(RO_1000A9AA)($gp)
/* 0041C034 24070009 */  li    $a3, 9
/* 0041C038 0320F809 */  jalr  $t9
/* 0041C03C 24A5A9AA */   addiu $a1, %lo(RO_1000A9AA) # addiu $a1, $a1, -0x5656
/* 0041C040 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C044 2604010C */  addiu $a0, $s0, 0x10c
/* 0041C048 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041C04C 0320F809 */  jalr  $t9
/* 0041C050 00000000 */   nop   
/* 0041C054 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C058 8E240000 */  lw    $a0, ($s1)
/* 0041C05C 2406000A */  li    $a2, 10
/* 0041C060 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041C064 8F858044 */  lw    $a1, %got(RO_1000A9A0)($gp)
/* 0041C068 2407000A */  li    $a3, 10
/* 0041C06C 0320F809 */  jalr  $t9
/* 0041C070 24A5A9A0 */   addiu $a1, %lo(RO_1000A9A0) # addiu $a1, $a1, -0x5660
/* 0041C074 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C078 26040124 */  addiu $a0, $s0, 0x124
/* 0041C07C 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041C080 0320F809 */  jalr  $t9
/* 0041C084 00000000 */   nop   
/* 0041C088 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C08C 8E240000 */  lw    $a0, ($s1)
/* 0041C090 2406000C */  li    $a2, 12
/* 0041C094 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041C098 8F858044 */  lw    $a1, %got(RO_1000A994)($gp)
/* 0041C09C 2407000C */  li    $a3, 12
/* 0041C0A0 0320F809 */  jalr  $t9
/* 0041C0A4 24A5A994 */   addiu $a1, %lo(RO_1000A994) # addiu $a1, $a1, -0x566c
/* 0041C0A8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C0AC 2604011C */  addiu $a0, $s0, 0x11c
/* 0041C0B0 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041C0B4 0320F809 */  jalr  $t9
/* 0041C0B8 00000000 */   nop   
/* 0041C0BC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C0C0 8E240000 */  lw    $a0, ($s1)
/* 0041C0C4 24060007 */  li    $a2, 7
/* 0041C0C8 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041C0CC 8F858044 */  lw    $a1, %got(RO_1000A98D)($gp)
/* 0041C0D0 24070007 */  li    $a3, 7
/* 0041C0D4 0320F809 */  jalr  $t9
/* 0041C0D8 24A5A98D */   addiu $a1, %lo(RO_1000A98D) # addiu $a1, $a1, -0x5673
/* 0041C0DC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C0E0 26040144 */  addiu $a0, $s0, 0x144
/* 0041C0E4 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041C0E8 0320F809 */  jalr  $t9
/* 0041C0EC 00000000 */   nop   
/* 0041C0F0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C0F4 8E240000 */  lw    $a0, ($s1)
/* 0041C0F8 24060008 */  li    $a2, 8
/* 0041C0FC 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041C100 8F858044 */  lw    $a1, %got(RO_1000A985)($gp)
/* 0041C104 24070008 */  li    $a3, 8
/* 0041C108 0320F809 */  jalr  $t9
/* 0041C10C 24A5A985 */   addiu $a1, %lo(RO_1000A985) # addiu $a1, $a1, -0x567b
/* 0041C110 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C114 2604014C */  addiu $a0, $s0, 0x14c
/* 0041C118 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041C11C 0320F809 */  jalr  $t9
/* 0041C120 00000000 */   nop   
/* 0041C124 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C128 8E240000 */  lw    $a0, ($s1)
/* 0041C12C 24060008 */  li    $a2, 8
/* 0041C130 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041C134 8F858044 */  lw    $a1, %got(RO_1000A97D)($gp)
/* 0041C138 24070008 */  li    $a3, 8
/* 0041C13C 0320F809 */  jalr  $t9
/* 0041C140 24A5A97D */   addiu $a1, %lo(RO_1000A97D) # addiu $a1, $a1, -0x5683
/* 0041C144 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C148 26040164 */  addiu $a0, $s0, 0x164
/* 0041C14C 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041C150 0320F809 */  jalr  $t9
/* 0041C154 00000000 */   nop   
/* 0041C158 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C15C 8E240000 */  lw    $a0, ($s1)
/* 0041C160 24060009 */  li    $a2, 9
/* 0041C164 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041C168 8F858044 */  lw    $a1, %got(RO_1000A974)($gp)
/* 0041C16C 24070009 */  li    $a3, 9
/* 0041C170 0320F809 */  jalr  $t9
/* 0041C174 24A5A974 */   addiu $a1, %lo(RO_1000A974) # addiu $a1, $a1, -0x568c
/* 0041C178 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C17C 2604016C */  addiu $a0, $s0, 0x16c
/* 0041C180 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041C184 0320F809 */  jalr  $t9
/* 0041C188 00000000 */   nop   
/* 0041C18C 8E10000C */  lw    $s0, 0xc($s0)
/* 0041C190 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C194 1600FF6C */  bnez  $s0, .L0041BF48
/* 0041C198 00000000 */   nop   
/* 0041C19C 8FBF0024 */  lw    $ra, 0x24($sp)
.L0041C1A0:
/* 0041C1A0 8FB00018 */  lw    $s0, 0x18($sp)
/* 0041C1A4 8FB1001C */  lw    $s1, 0x1c($sp)
/* 0041C1A8 03E00008 */  jr    $ra
/* 0041C1AC 27BD0028 */   addiu $sp, $sp, 0x28
    .type printprecm, @function
    .size printprecm, .-printprecm
    .end printprecm

glabel printcm
    .ent printcm
    # 00456A2C oneproc
/* 0041C1B0 3C1C0FC0 */  .cpload $t9
/* 0041C1B4 279CE0E0 */  
/* 0041C1B8 0399E021 */  
/* 0041C1BC 8F8E8DE8 */  lw     $t6, %got(proc_to_print)($gp)
/* 0041C1C0 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0041C1C4 24010020 */  li    $at, 32
/* 0041C1C8 91CE0000 */  lbu   $t6, ($t6)
/* 0041C1CC AFBF0024 */  sw    $ra, 0x24($sp)
/* 0041C1D0 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0041C1D4 AFB1001C */  sw    $s1, 0x1c($sp)
/* 0041C1D8 11C10005 */  beq   $t6, $at, .L0041C1F0
/* 0041C1DC AFB00018 */   sw    $s0, 0x18($sp)
/* 0041C1E0 8F8F8A8C */  lw     $t7, %got(at_proc_to_print)($gp)
/* 0041C1E4 91EF0000 */  lbu   $t7, ($t7)
/* 0041C1E8 51E00123 */  beql  $t7, $zero, .L0041C678
/* 0041C1EC 8FBF0024 */   lw    $ra, 0x24($sp)
.L0041C1F0:
/* 0041C1F0 8F9089AC */  lw     $s0, %got(graphhead)($gp)
/* 0041C1F4 8E100000 */  lw    $s0, ($s0)
/* 0041C1F8 120000E9 */  beqz  $s0, .L0041C5A0
/* 0041C1FC 00000000 */   nop   
/* 0041C200 8F918CCC */  lw     $s1, %got(list)($gp)
.L0041C204:
/* 0041C204 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041C208 8F858044 */  lw    $a1, %got(RO_1000AAAF)($gp)
/* 0041C20C 8E240000 */  lw    $a0, ($s1)
/* 0041C210 2406000E */  li    $a2, 14
/* 0041C214 2407000E */  li    $a3, 14
/* 0041C218 0320F809 */  jalr  $t9
/* 0041C21C 24A5AAAF */   addiu $a1, %lo(RO_1000AAAF) # addiu $a1, $a1, -0x5551
/* 0041C220 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C224 8E240000 */  lw    $a0, ($s1)
/* 0041C228 96050008 */  lhu   $a1, 8($s0)
/* 0041C22C 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041C230 2406000C */  li    $a2, 12
/* 0041C234 2407000A */  li    $a3, 10
/* 0041C238 0320F809 */  jalr  $t9
/* 0041C23C 00000000 */   nop   
/* 0041C240 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C244 8E240000 */  lw    $a0, ($s1)
/* 0041C248 2406000A */  li    $a2, 10
/* 0041C24C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041C250 8F858044 */  lw    $a1, %got(RO_1000AAA5)($gp)
/* 0041C254 2407000A */  li    $a3, 10
/* 0041C258 0320F809 */  jalr  $t9
/* 0041C25C 24A5AAA5 */   addiu $a1, %lo(RO_1000AAA5) # addiu $a1, $a1, -0x555b
/* 0041C260 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C264 8E240000 */  lw    $a0, ($s1)
/* 0041C268 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041C26C 0320F809 */  jalr  $t9
/* 0041C270 00000000 */   nop   
/* 0041C274 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C278 8E240000 */  lw    $a0, ($s1)
/* 0041C27C 2406000A */  li    $a2, 10
/* 0041C280 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041C284 8F858044 */  lw    $a1, %got(RO_1000AA9B)($gp)
/* 0041C288 2407000A */  li    $a3, 10
/* 0041C28C 0320F809 */  jalr  $t9
/* 0041C290 24A5AA9B */   addiu $a1, %lo(RO_1000AA9B) # addiu $a1, $a1, -0x5565
/* 0041C294 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C298 26040104 */  addiu $a0, $s0, 0x104
/* 0041C29C 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041C2A0 0320F809 */  jalr  $t9
/* 0041C2A4 00000000 */   nop   
/* 0041C2A8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C2AC 8E240000 */  lw    $a0, ($s1)
/* 0041C2B0 24060009 */  li    $a2, 9
/* 0041C2B4 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041C2B8 8F858044 */  lw    $a1, %got(RO_1000AA92)($gp)
/* 0041C2BC 24070009 */  li    $a3, 9
/* 0041C2C0 0320F809 */  jalr  $t9
/* 0041C2C4 24A5AA92 */   addiu $a1, %lo(RO_1000AA92) # addiu $a1, $a1, -0x556e
/* 0041C2C8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C2CC 26040114 */  addiu $a0, $s0, 0x114
/* 0041C2D0 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041C2D4 0320F809 */  jalr  $t9
/* 0041C2D8 00000000 */   nop   
/* 0041C2DC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C2E0 8E240000 */  lw    $a0, ($s1)
/* 0041C2E4 24060009 */  li    $a2, 9
/* 0041C2E8 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041C2EC 8F858044 */  lw    $a1, %got(RO_1000AA89)($gp)
/* 0041C2F0 24070009 */  li    $a3, 9
/* 0041C2F4 0320F809 */  jalr  $t9
/* 0041C2F8 24A5AA89 */   addiu $a1, %lo(RO_1000AA89) # addiu $a1, $a1, -0x5577
/* 0041C2FC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C300 2604010C */  addiu $a0, $s0, 0x10c
/* 0041C304 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041C308 0320F809 */  jalr  $t9
/* 0041C30C 00000000 */   nop   
/* 0041C310 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C314 8E240000 */  lw    $a0, ($s1)
/* 0041C318 2406000C */  li    $a2, 12
/* 0041C31C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041C320 8F858044 */  lw    $a1, %got(RO_1000AA7D)($gp)
/* 0041C324 2407000C */  li    $a3, 12
/* 0041C328 0320F809 */  jalr  $t9
/* 0041C32C 24A5AA7D */   addiu $a1, %lo(RO_1000AA7D) # addiu $a1, $a1, -0x5583
/* 0041C330 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C334 2604011C */  addiu $a0, $s0, 0x11c
/* 0041C338 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041C33C 0320F809 */  jalr  $t9
/* 0041C340 00000000 */   nop   
/* 0041C344 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C348 8E240000 */  lw    $a0, ($s1)
/* 0041C34C 24060008 */  li    $a2, 8
/* 0041C350 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041C354 8F858044 */  lw    $a1, %got(RO_1000AA75)($gp)
/* 0041C358 24070008 */  li    $a3, 8
/* 0041C35C 0320F809 */  jalr  $t9
/* 0041C360 24A5AA75 */   addiu $a1, %lo(RO_1000AA75) # addiu $a1, $a1, -0x558b
/* 0041C364 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C368 26040154 */  addiu $a0, $s0, 0x154
/* 0041C36C 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041C370 0320F809 */  jalr  $t9
/* 0041C374 00000000 */   nop   
/* 0041C378 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C37C 8E240000 */  lw    $a0, ($s1)
/* 0041C380 24060009 */  li    $a2, 9
/* 0041C384 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041C388 8F858044 */  lw    $a1, %got(RO_1000AA6C)($gp)
/* 0041C38C 24070009 */  li    $a3, 9
/* 0041C390 0320F809 */  jalr  $t9
/* 0041C394 24A5AA6C */   addiu $a1, %lo(RO_1000AA6C) # addiu $a1, $a1, -0x5594
/* 0041C398 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C39C 2604015C */  addiu $a0, $s0, 0x15c
/* 0041C3A0 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041C3A4 0320F809 */  jalr  $t9
/* 0041C3A8 00000000 */   nop   
/* 0041C3AC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C3B0 8E240000 */  lw    $a0, ($s1)
/* 0041C3B4 24060005 */  li    $a2, 5
/* 0041C3B8 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041C3BC 8F858044 */  lw    $a1, %got(RO_1000AA67)($gp)
/* 0041C3C0 24070005 */  li    $a3, 5
/* 0041C3C4 0320F809 */  jalr  $t9
/* 0041C3C8 24A5AA67 */   addiu $a1, %lo(RO_1000AA67) # addiu $a1, $a1, -0x5599
/* 0041C3CC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C3D0 26040134 */  addiu $a0, $s0, 0x134
/* 0041C3D4 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041C3D8 0320F809 */  jalr  $t9
/* 0041C3DC 00000000 */   nop   
/* 0041C3E0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C3E4 8E240000 */  lw    $a0, ($s1)
/* 0041C3E8 24060007 */  li    $a2, 7
/* 0041C3EC 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041C3F0 8F858044 */  lw    $a1, %got(RO_1000AA60)($gp)
/* 0041C3F4 24070007 */  li    $a3, 7
/* 0041C3F8 0320F809 */  jalr  $t9
/* 0041C3FC 24A5AA60 */   addiu $a1, %lo(RO_1000AA60) # addiu $a1, $a1, -0x55a0
/* 0041C400 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C404 2604013C */  addiu $a0, $s0, 0x13c
/* 0041C408 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041C40C 0320F809 */  jalr  $t9
/* 0041C410 00000000 */   nop   
/* 0041C414 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C418 8E240000 */  lw    $a0, ($s1)
/* 0041C41C 24060007 */  li    $a2, 7
/* 0041C420 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041C424 8F858044 */  lw    $a1, %got(RO_1000AA59)($gp)
/* 0041C428 24070007 */  li    $a3, 7
/* 0041C42C 0320F809 */  jalr  $t9
/* 0041C430 24A5AA59 */   addiu $a1, %lo(RO_1000AA59) # addiu $a1, $a1, -0x55a7
/* 0041C434 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C438 2604012C */  addiu $a0, $s0, 0x12c
/* 0041C43C 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041C440 0320F809 */  jalr  $t9
/* 0041C444 00000000 */   nop   
/* 0041C448 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C44C 8E240000 */  lw    $a0, ($s1)
/* 0041C450 24060008 */  li    $a2, 8
/* 0041C454 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041C458 8F858044 */  lw    $a1, %got(RO_1000AA51)($gp)
/* 0041C45C 24070008 */  li    $a3, 8
/* 0041C460 0320F809 */  jalr  $t9
/* 0041C464 24A5AA51 */   addiu $a1, %lo(RO_1000AA51) # addiu $a1, $a1, -0x55af
/* 0041C468 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C46C 2604016C */  addiu $a0, $s0, 0x16c
/* 0041C470 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041C474 0320F809 */  jalr  $t9
/* 0041C478 00000000 */   nop   
/* 0041C47C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C480 2406000D */  li    $a2, 13
/* 0041C484 2407000D */  li    $a3, 13
/* 0041C488 8F988ABC */  lw     $t8, %got(docodehoist)($gp)
/* 0041C48C 93180000 */  lbu   $t8, ($t8)
/* 0041C490 1300000C */  beqz  $t8, .L0041C4C4
/* 0041C494 00000000 */   nop   
/* 0041C498 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041C49C 8F858044 */  lw    $a1, %got(RO_1000AA44)($gp)
/* 0041C4A0 8E240000 */  lw    $a0, ($s1)
/* 0041C4A4 0320F809 */  jalr  $t9
/* 0041C4A8 24A5AA44 */   addiu $a1, %lo(RO_1000AA44) # addiu $a1, $a1, -0x55bc
/* 0041C4AC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C4B0 260400FC */  addiu $a0, $s0, 0xfc
/* 0041C4B4 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041C4B8 0320F809 */  jalr  $t9
/* 0041C4BC 00000000 */   nop   
/* 0041C4C0 8FBC0020 */  lw    $gp, 0x20($sp)
.L0041C4C4:
/* 0041C4C4 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041C4C8 8F858044 */  lw    $a1, %got(RO_1000AA3B)($gp)
/* 0041C4CC 8E240000 */  lw    $a0, ($s1)
/* 0041C4D0 24060009 */  li    $a2, 9
/* 0041C4D4 24070009 */  li    $a3, 9
/* 0041C4D8 0320F809 */  jalr  $t9
/* 0041C4DC 24A5AA3B */   addiu $a1, %lo(RO_1000AA3B) # addiu $a1, $a1, -0x55c5
/* 0041C4E0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C4E4 26040164 */  addiu $a0, $s0, 0x164
/* 0041C4E8 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041C4EC 0320F809 */  jalr  $t9
/* 0041C4F0 00000000 */   nop   
/* 0041C4F4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C4F8 8E240000 */  lw    $a0, ($s1)
/* 0041C4FC 24060009 */  li    $a2, 9
/* 0041C500 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041C504 8F858044 */  lw    $a1, %got(RO_1000AA32)($gp)
/* 0041C508 24070009 */  li    $a3, 9
/* 0041C50C 0320F809 */  jalr  $t9
/* 0041C510 24A5AA32 */   addiu $a1, %lo(RO_1000AA32) # addiu $a1, $a1, -0x55ce
/* 0041C514 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C518 26040124 */  addiu $a0, $s0, 0x124
/* 0041C51C 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041C520 0320F809 */  jalr  $t9
/* 0041C524 00000000 */   nop   
/* 0041C528 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C52C 8E240000 */  lw    $a0, ($s1)
/* 0041C530 2406000C */  li    $a2, 12
/* 0041C534 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041C538 8F858044 */  lw    $a1, %got(RO_1000AA26)($gp)
/* 0041C53C 2407000C */  li    $a3, 12
/* 0041C540 0320F809 */  jalr  $t9
/* 0041C544 24A5AA26 */   addiu $a1, %lo(RO_1000AA26) # addiu $a1, $a1, -0x55da
/* 0041C548 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C54C 26040144 */  addiu $a0, $s0, 0x144
/* 0041C550 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041C554 0320F809 */  jalr  $t9
/* 0041C558 00000000 */   nop   
/* 0041C55C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C560 8E240000 */  lw    $a0, ($s1)
/* 0041C564 2406000C */  li    $a2, 12
/* 0041C568 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041C56C 8F858044 */  lw    $a1, %got(RO_1000AA1A)($gp)
/* 0041C570 2407000C */  li    $a3, 12
/* 0041C574 0320F809 */  jalr  $t9
/* 0041C578 24A5AA1A */   addiu $a1, %lo(RO_1000AA1A) # addiu $a1, $a1, -0x55e6
/* 0041C57C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C580 2604014C */  addiu $a0, $s0, 0x14c
/* 0041C584 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041C588 0320F809 */  jalr  $t9
/* 0041C58C 00000000 */   nop   
/* 0041C590 8E10000C */  lw    $s0, 0xc($s0)
/* 0041C594 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C598 1600FF1A */  bnez  $s0, .L0041C204
/* 0041C59C 00000000 */   nop   
.L0041C5A0:
/* 0041C5A0 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041C5A4 8F918CCC */  lw     $s1, %got(list)($gp)
/* 0041C5A8 8F858044 */  lw    $a1, %got(RO_1000AA0D)($gp)
/* 0041C5AC 2406000D */  li    $a2, 13
/* 0041C5B0 2407000D */  li    $a3, 13
/* 0041C5B4 8E240000 */  lw    $a0, ($s1)
/* 0041C5B8 0320F809 */  jalr  $t9
/* 0041C5BC 24A5AA0D */   addiu $a1, %lo(RO_1000AA0D) # addiu $a1, $a1, -0x55f3
/* 0041C5C0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C5C4 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041C5C8 8F848CF8 */  lw     $a0, %got(indmults)($gp)
/* 0041C5CC 0320F809 */  jalr  $t9
/* 0041C5D0 00000000 */   nop   
/* 0041C5D4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C5D8 8E240000 */  lw    $a0, ($s1)
/* 0041C5DC 2406000D */  li    $a2, 13
/* 0041C5E0 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041C5E4 8F858044 */  lw    $a1, %got(RO_1000AA00)($gp)
/* 0041C5E8 2407000D */  li    $a3, 13
/* 0041C5EC 0320F809 */  jalr  $t9
/* 0041C5F0 24A5AA00 */   addiu $a1, %lo(RO_1000AA00) # addiu $a1, $a1, -0x5600
/* 0041C5F4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C5F8 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041C5FC 8F848CD8 */  lw     $a0, %got(mvarbits)($gp)
/* 0041C600 0320F809 */  jalr  $t9
/* 0041C604 00000000 */   nop   
/* 0041C608 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C60C 8E240000 */  lw    $a0, ($s1)
/* 0041C610 24060010 */  li    $a2, 16
/* 0041C614 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041C618 8F858044 */  lw    $a1, %got(RO_1000A9F0)($gp)
/* 0041C61C 24070010 */  li    $a3, 16
/* 0041C620 0320F809 */  jalr  $t9
/* 0041C624 24A5A9F0 */   addiu $a1, %lo(RO_1000A9F0) # addiu $a1, $a1, -0x5610
/* 0041C628 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C62C 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041C630 8F848D0C */  lw     $a0, %got(outmodebits)($gp)
/* 0041C634 0320F809 */  jalr  $t9
/* 0041C638 00000000 */   nop   
/* 0041C63C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C640 8E240000 */  lw    $a0, ($s1)
/* 0041C644 24060012 */  li    $a2, 18
/* 0041C648 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041C64C 8F858044 */  lw    $a1, %got(RO_1000A9DE)($gp)
/* 0041C650 24070012 */  li    $a3, 18
/* 0041C654 0320F809 */  jalr  $t9
/* 0041C658 24A5A9DE */   addiu $a1, %lo(RO_1000A9DE) # addiu $a1, $a1, -0x5622
/* 0041C65C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C660 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041C664 8F848D10 */  lw     $a0, %got(notinmodebits)($gp)
/* 0041C668 0320F809 */  jalr  $t9
/* 0041C66C 00000000 */   nop   
/* 0041C670 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C674 8FBF0024 */  lw    $ra, 0x24($sp)
.L0041C678:
/* 0041C678 8FB00018 */  lw    $s0, 0x18($sp)
/* 0041C67C 8FB1001C */  lw    $s1, 0x1c($sp)
/* 0041C680 03E00008 */  jr    $ra
/* 0041C684 27BD0028 */   addiu $sp, $sp, 0x28
    .type printcm, @function
    .size printcm, .-printcm
    .end printcm

glabel printscm
    .ent printscm
    # 00456A2C oneproc
/* 0041C688 3C1C0FC0 */  .cpload $t9
/* 0041C68C 279CDC08 */  
/* 0041C690 0399E021 */  
/* 0041C694 8F8E8DE8 */  lw     $t6, %got(proc_to_print)($gp)
/* 0041C698 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0041C69C 24010020 */  li    $at, 32
/* 0041C6A0 91CE0000 */  lbu   $t6, ($t6)
/* 0041C6A4 AFBF0024 */  sw    $ra, 0x24($sp)
/* 0041C6A8 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0041C6AC AFB1001C */  sw    $s1, 0x1c($sp)
/* 0041C6B0 11C10005 */  beq   $t6, $at, .L0041C6C8
/* 0041C6B4 AFB00018 */   sw    $s0, 0x18($sp)
/* 0041C6B8 8F8F8A8C */  lw     $t7, %got(at_proc_to_print)($gp)
/* 0041C6BC 91EF0000 */  lbu   $t7, ($t7)
/* 0041C6C0 51E00090 */  beql  $t7, $zero, .L0041C904
/* 0041C6C4 8FBF0024 */   lw    $ra, 0x24($sp)
.L0041C6C8:
/* 0041C6C8 8F9089AC */  lw     $s0, %got(graphhead)($gp)
/* 0041C6CC 8E100000 */  lw    $s0, ($s0)
/* 0041C6D0 1200007D */  beqz  $s0, .L0041C8C8
/* 0041C6D4 00000000 */   nop   
/* 0041C6D8 8F918CCC */  lw     $s1, %got(list)($gp)
.L0041C6DC:
/* 0041C6DC 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041C6E0 8F858044 */  lw    $a1, %got(RO_1000AB19)($gp)
/* 0041C6E4 8E240000 */  lw    $a0, ($s1)
/* 0041C6E8 2406000E */  li    $a2, 14
/* 0041C6EC 2407000E */  li    $a3, 14
/* 0041C6F0 0320F809 */  jalr  $t9
/* 0041C6F4 24A5AB19 */   addiu $a1, %lo(RO_1000AB19) # addiu $a1, $a1, -0x54e7
/* 0041C6F8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C6FC 8E240000 */  lw    $a0, ($s1)
/* 0041C700 96050008 */  lhu   $a1, 8($s0)
/* 0041C704 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041C708 2406000C */  li    $a2, 12
/* 0041C70C 2407000A */  li    $a3, 10
/* 0041C710 0320F809 */  jalr  $t9
/* 0041C714 00000000 */   nop   
/* 0041C718 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C71C 8E240000 */  lw    $a0, ($s1)
/* 0041C720 2406000A */  li    $a2, 10
/* 0041C724 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041C728 8F858044 */  lw    $a1, %got(RO_1000AB0F)($gp)
/* 0041C72C 2407000A */  li    $a3, 10
/* 0041C730 0320F809 */  jalr  $t9
/* 0041C734 24A5AB0F */   addiu $a1, %lo(RO_1000AB0F) # addiu $a1, $a1, -0x54f1
/* 0041C738 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C73C 8E240000 */  lw    $a0, ($s1)
/* 0041C740 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041C744 0320F809 */  jalr  $t9
/* 0041C748 00000000 */   nop   
/* 0041C74C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C750 8E240000 */  lw    $a0, ($s1)
/* 0041C754 2406000A */  li    $a2, 10
/* 0041C758 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041C75C 8F858044 */  lw    $a1, %got(RO_1000AB05)($gp)
/* 0041C760 2407000A */  li    $a3, 10
/* 0041C764 0320F809 */  jalr  $t9
/* 0041C768 24A5AB05 */   addiu $a1, %lo(RO_1000AB05) # addiu $a1, $a1, -0x54fb
/* 0041C76C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C770 26040104 */  addiu $a0, $s0, 0x104
/* 0041C774 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041C778 0320F809 */  jalr  $t9
/* 0041C77C 00000000 */   nop   
/* 0041C780 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C784 8E240000 */  lw    $a0, ($s1)
/* 0041C788 24060009 */  li    $a2, 9
/* 0041C78C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041C790 8F858044 */  lw    $a1, %got(RO_1000AAFC)($gp)
/* 0041C794 24070009 */  li    $a3, 9
/* 0041C798 0320F809 */  jalr  $t9
/* 0041C79C 24A5AAFC */   addiu $a1, %lo(RO_1000AAFC) # addiu $a1, $a1, -0x5504
/* 0041C7A0 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C7A4 26040114 */  addiu $a0, $s0, 0x114
/* 0041C7A8 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041C7AC 0320F809 */  jalr  $t9
/* 0041C7B0 00000000 */   nop   
/* 0041C7B4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C7B8 8E240000 */  lw    $a0, ($s1)
/* 0041C7BC 24060009 */  li    $a2, 9
/* 0041C7C0 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041C7C4 8F858044 */  lw    $a1, %got(RO_1000AAF3)($gp)
/* 0041C7C8 24070009 */  li    $a3, 9
/* 0041C7CC 0320F809 */  jalr  $t9
/* 0041C7D0 24A5AAF3 */   addiu $a1, %lo(RO_1000AAF3) # addiu $a1, $a1, -0x550d
/* 0041C7D4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C7D8 2604010C */  addiu $a0, $s0, 0x10c
/* 0041C7DC 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041C7E0 0320F809 */  jalr  $t9
/* 0041C7E4 00000000 */   nop   
/* 0041C7E8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C7EC 8E240000 */  lw    $a0, ($s1)
/* 0041C7F0 2406000C */  li    $a2, 12
/* 0041C7F4 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041C7F8 8F858044 */  lw    $a1, %got(RO_1000AAE7)($gp)
/* 0041C7FC 2407000C */  li    $a3, 12
/* 0041C800 0320F809 */  jalr  $t9
/* 0041C804 24A5AAE7 */   addiu $a1, %lo(RO_1000AAE7) # addiu $a1, $a1, -0x5519
/* 0041C808 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C80C 2604011C */  addiu $a0, $s0, 0x11c
/* 0041C810 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041C814 0320F809 */  jalr  $t9
/* 0041C818 00000000 */   nop   
/* 0041C81C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C820 8E240000 */  lw    $a0, ($s1)
/* 0041C824 24060009 */  li    $a2, 9
/* 0041C828 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041C82C 8F858044 */  lw    $a1, %got(RO_1000AADE)($gp)
/* 0041C830 24070009 */  li    $a3, 9
/* 0041C834 0320F809 */  jalr  $t9
/* 0041C838 24A5AADE */   addiu $a1, %lo(RO_1000AADE) # addiu $a1, $a1, -0x5522
/* 0041C83C 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C840 26040154 */  addiu $a0, $s0, 0x154
/* 0041C844 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041C848 0320F809 */  jalr  $t9
/* 0041C84C 00000000 */   nop   
/* 0041C850 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C854 8E240000 */  lw    $a0, ($s1)
/* 0041C858 24060007 */  li    $a2, 7
/* 0041C85C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041C860 8F858044 */  lw    $a1, %got(RO_1000AAD7)($gp)
/* 0041C864 24070007 */  li    $a3, 7
/* 0041C868 0320F809 */  jalr  $t9
/* 0041C86C 24A5AAD7 */   addiu $a1, %lo(RO_1000AAD7) # addiu $a1, $a1, -0x5529
/* 0041C870 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C874 26040134 */  addiu $a0, $s0, 0x134
/* 0041C878 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041C87C 0320F809 */  jalr  $t9
/* 0041C880 00000000 */   nop   
/* 0041C884 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C888 8E240000 */  lw    $a0, ($s1)
/* 0041C88C 24060009 */  li    $a2, 9
/* 0041C890 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041C894 8F858044 */  lw    $a1, %got(RO_1000AACE)($gp)
/* 0041C898 24070009 */  li    $a3, 9
/* 0041C89C 0320F809 */  jalr  $t9
/* 0041C8A0 24A5AACE */   addiu $a1, %lo(RO_1000AACE) # addiu $a1, $a1, -0x5532
/* 0041C8A4 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C8A8 2604015C */  addiu $a0, $s0, 0x15c
/* 0041C8AC 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041C8B0 0320F809 */  jalr  $t9
/* 0041C8B4 00000000 */   nop   
/* 0041C8B8 8E10000C */  lw    $s0, 0xc($s0)
/* 0041C8BC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C8C0 1600FF86 */  bnez  $s0, .L0041C6DC
/* 0041C8C4 00000000 */   nop   
.L0041C8C8:
/* 0041C8C8 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041C8CC 8F918CCC */  lw     $s1, %got(list)($gp)
/* 0041C8D0 8F858044 */  lw    $a1, %got(RO_1000AABD)($gp)
/* 0041C8D4 24060011 */  li    $a2, 17
/* 0041C8D8 24070011 */  li    $a3, 17
/* 0041C8DC 8E240000 */  lw    $a0, ($s1)
/* 0041C8E0 0320F809 */  jalr  $t9
/* 0041C8E4 24A5AABD */   addiu $a1, %lo(RO_1000AABD) # addiu $a1, $a1, -0x5543
/* 0041C8E8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C8EC 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041C8F0 8F848D18 */  lw     $a0, %got(coloreditems)($gp)
/* 0041C8F4 0320F809 */  jalr  $t9
/* 0041C8F8 00000000 */   nop   
/* 0041C8FC 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0041C900 8FBF0024 */  lw    $ra, 0x24($sp)
.L0041C904:
/* 0041C904 8FB00018 */  lw    $s0, 0x18($sp)
/* 0041C908 8FB1001C */  lw    $s1, 0x1c($sp)
/* 0041C90C 03E00008 */  jr    $ra
/* 0041C910 27BD0028 */   addiu $sp, $sp, 0x28
    .type printscm, @function
    .size printscm, .-printscm
    .end printscm

glabel printregs
    .ent printregs
    # 00456A2C oneproc
/* 0041C914 3C1C0FC0 */  .cpload $t9
/* 0041C918 279CD97C */  
/* 0041C91C 0399E021 */  
/* 0041C920 27BDFF88 */  addiu $sp, $sp, -0x78
/* 0041C924 8F8E8DE8 */  lw     $t6, %got(proc_to_print)($gp)
/* 0041C928 24010020 */  li    $at, 32
/* 0041C92C AFBF0044 */  sw    $ra, 0x44($sp)
/* 0041C930 91CE0000 */  lbu   $t6, ($t6)
/* 0041C934 AFBE0040 */  sw    $fp, 0x40($sp)
/* 0041C938 AFBC003C */  sw    $gp, 0x3c($sp)
/* 0041C93C AFB70038 */  sw    $s7, 0x38($sp)
/* 0041C940 AFB60034 */  sw    $s6, 0x34($sp)
/* 0041C944 AFB50030 */  sw    $s5, 0x30($sp)
/* 0041C948 AFB4002C */  sw    $s4, 0x2c($sp)
/* 0041C94C AFB30028 */  sw    $s3, 0x28($sp)
/* 0041C950 AFB20024 */  sw    $s2, 0x24($sp)
/* 0041C954 AFB10020 */  sw    $s1, 0x20($sp)
/* 0041C958 11C10005 */  beq   $t6, $at, .L0041C970
/* 0041C95C AFB0001C */   sw    $s0, 0x1c($sp)
/* 0041C960 8F8F8A8C */  lw     $t7, %got(at_proc_to_print)($gp)
/* 0041C964 91EF0000 */  lbu   $t7, ($t7)
/* 0041C968 51E002F2 */  beql  $t7, $zero, .L0041D534
/* 0041C96C 8FBF0044 */   lw    $ra, 0x44($sp)
.L0041C970:
/* 0041C970 8F8289E4 */  lw     $v0, %got(oldbitposcount)($gp)
/* 0041C974 0000F025 */  move  $fp, $zero
/* 0041C978 24170024 */  li    $s7, 36
/* 0041C97C 8C420000 */  lw    $v0, ($v0)
/* 0041C980 2442FFFF */  addiu $v0, $v0, -1
/* 0041C984 044001AB */  bltz  $v0, .L0041D034
/* 0041C988 24420001 */   addiu $v0, $v0, 1
/* 0041C98C AFA2004C */  sw    $v0, 0x4c($sp)
/* 0041C990 8F958CCC */  lw     $s5, %got(list)($gp)
.L0041C994:
/* 0041C994 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 0041C998 03C02025 */  move  $a0, $fp
/* 0041C99C 8F858D28 */  lw     $a1, %got(iscolored12)($gp)
/* 0041C9A0 0320F809 */  jalr  $t9
/* 0041C9A4 00000000 */   nop   
/* 0041C9A8 1440000D */  bnez  $v0, .L0041C9E0
/* 0041C9AC 8FBC003C */   lw    $gp, 0x3c($sp)
/* 0041C9B0 8F988D74 */  lw     $t8, %got(r2bitpos)($gp)
/* 0041C9B4 8F180000 */  lw    $t8, ($t8)
/* 0041C9B8 13D80009 */  beq   $fp, $t8, .L0041C9E0
/* 0041C9BC 00000000 */   nop   
/* 0041C9C0 8F998D74 */  lw     $t9, %got(r2bitpos)($gp)
/* 0041C9C4 8F390004 */  lw    $t9, 4($t9)
/* 0041C9C8 13D90005 */  beq   $fp, $t9, .L0041C9E0
/* 0041C9CC 00000000 */   nop   
/* 0041C9D0 8F898D74 */  lw     $t1, %got(r2bitpos)($gp)
/* 0041C9D4 8D290008 */  lw    $t1, 8($t1)
/* 0041C9D8 57C90193 */  bnel  $fp, $t1, .L0041D028
/* 0041C9DC 8FAD004C */   lw    $t5, 0x4c($sp)
.L0041C9E0:
/* 0041C9E0 8F8A89EC */  lw     $t2, %got(bittab)($gp)
/* 0041C9E4 001E58C0 */  sll   $t3, $fp, 3
/* 0041C9E8 8D4A0000 */  lw    $t2, ($t2)
/* 0041C9EC 014B6021 */  addu  $t4, $t2, $t3
/* 0041C9F0 8D960004 */  lw    $s6, 4($t4)
/* 0041C9F4 52C0018C */  beql  $s6, $zero, .L0041D028
/* 0041C9F8 8FAD004C */   lw    $t5, 0x4c($sp)
.L0041C9FC:
/* 0041C9FC 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041CA00 8F858044 */  lw    $a1, %got(RO_1000AC2E)($gp)
/* 0041CA04 8EA40000 */  lw    $a0, ($s5)
/* 0041CA08 2406000D */  li    $a2, 13
/* 0041CA0C 2407000D */  li    $a3, 13
/* 0041CA10 0320F809 */  jalr  $t9
/* 0041CA14 24A5AC2E */   addiu $a1, %lo(RO_1000AC2E) # addiu $a1, $a1, -0x53d2
/* 0041CA18 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CA1C 8ECD0000 */  lw    $t5, ($s6)
/* 0041CA20 8EA40000 */  lw    $a0, ($s5)
/* 0041CA24 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041CA28 24060001 */  li    $a2, 1
/* 0041CA2C 2407000A */  li    $a3, 10
/* 0041CA30 0320F809 */  jalr  $t9
/* 0041CA34 95A50004 */   lhu   $a1, 4($t5)
/* 0041CA38 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CA3C 8EB30000 */  lw    $s3, ($s5)
/* 0041CA40 2405007C */  li    $a1, 124
/* 0041CA44 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041CA48 24060001 */  li    $a2, 1
/* 0041CA4C 2407000A */  li    $a3, 10
/* 0041CA50 0320F809 */  jalr  $t9
/* 0041CA54 02602025 */   move  $a0, $s3
/* 0041CA58 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CA5C 8ECE0000 */  lw    $t6, ($s6)
/* 0041CA60 02602025 */  move  $a0, $s3
/* 0041CA64 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041CA68 24060001 */  li    $a2, 1
/* 0041CA6C 2407000A */  li    $a3, 10
/* 0041CA70 0320F809 */  jalr  $t9
/* 0041CA74 95C50006 */   lhu   $a1, 6($t6)
/* 0041CA78 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CA7C 8EB30000 */  lw    $s3, ($s5)
/* 0041CA80 2405007D */  li    $a1, 125
/* 0041CA84 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041CA88 24060001 */  li    $a2, 1
/* 0041CA8C 2407000A */  li    $a3, 10
/* 0041CA90 0320F809 */  jalr  $t9
/* 0041CA94 02602025 */   move  $a0, $s3
/* 0041CA98 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CA9C 02602025 */  move  $a0, $s3
/* 0041CAA0 8EC50004 */  lw    $a1, 4($s6)
/* 0041CAA4 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041CAA8 2406000C */  li    $a2, 12
/* 0041CAAC 2407000A */  li    $a3, 10
/* 0041CAB0 0320F809 */  jalr  $t9
/* 0041CAB4 00000000 */   nop   
/* 0041CAB8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CABC 8EA40000 */  lw    $a0, ($s5)
/* 0041CAC0 82C50020 */  lb    $a1, 0x20($s6)
/* 0041CAC4 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041CAC8 2406000C */  li    $a2, 12
/* 0041CACC 2407000A */  li    $a3, 10
/* 0041CAD0 0320F809 */  jalr  $t9
/* 0041CAD4 00000000 */   nop   
/* 0041CAD8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CADC 8EA40000 */  lw    $a0, ($s5)
/* 0041CAE0 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041CAE4 0320F809 */  jalr  $t9
/* 0041CAE8 00000000 */   nop   
/* 0041CAEC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CAF0 2406000C */  li    $a2, 12
/* 0041CAF4 2407000C */  li    $a3, 12
/* 0041CAF8 8F8F89E8 */  lw     $t7, %got(firstconstbit)($gp)
/* 0041CAFC 8DEF0000 */  lw    $t7, ($t7)
/* 0041CB00 03CF082A */  slt   $at, $fp, $t7
/* 0041CB04 1420006D */  bnez  $at, .L0041CCBC
/* 0041CB08 00000000 */   nop   
/* 0041CB0C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041CB10 8F858044 */  lw    $a1, %got(RO_1000AC22)($gp)
/* 0041CB14 8EA40000 */  lw    $a0, ($s5)
/* 0041CB18 0320F809 */  jalr  $t9
/* 0041CB1C 24A5AC22 */   addiu $a1, %lo(RO_1000AC22) # addiu $a1, $a1, -0x53de
/* 0041CB20 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CB24 8EA40000 */  lw    $a0, ($s5)
/* 0041CB28 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041CB2C 0320F809 */  jalr  $t9
/* 0041CB30 00000000 */   nop   
/* 0041CB34 8EC80000 */  lw    $t0, ($s6)
/* 0041CB38 24010002 */  li    $at, 2
/* 0041CB3C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CB40 91180000 */  lbu   $t8, ($t0)
/* 0041CB44 2406000C */  li    $a2, 12
/* 0041CB48 2407000A */  li    $a3, 10
/* 0041CB4C 53010017 */  beql  $t8, $at, .L0041CBAC
/* 0041CB50 91090001 */   lbu   $t1, 1($t0)
/* 0041CB54 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041CB58 8D05001C */  lw    $a1, 0x1c($t0)
/* 0041CB5C 8EA40000 */  lw    $a0, ($s5)
/* 0041CB60 0320F809 */  jalr  $t9
/* 0041CB64 00052AC2 */   srl   $a1, $a1, 0xb
/* 0041CB68 8ED90000 */  lw    $t9, ($s6)
/* 0041CB6C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CB70 8EA40000 */  lw    $a0, ($s5)
/* 0041CB74 8F250010 */  lw    $a1, 0x10($t9)
/* 0041CB78 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041CB7C 2406000C */  li    $a2, 12
/* 0041CB80 2407000A */  li    $a3, 10
/* 0041CB84 0320F809 */  jalr  $t9
/* 0041CB88 00000000 */   nop   
/* 0041CB8C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CB90 8EA40000 */  lw    $a0, ($s5)
/* 0041CB94 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041CB98 0320F809 */  jalr  $t9
/* 0041CB9C 00000000 */   nop   
/* 0041CBA0 10000046 */  b     .L0041CCBC
/* 0041CBA4 8FBC003C */   lw    $gp, 0x3c($sp)
/* 0041CBA8 91090001 */  lbu   $t1, 1($t0)
.L0041CBAC:
/* 0041CBAC 3C01BFA0 */  lui   $at, 0xbfa0
/* 0041CBB0 2406000C */  li    $a2, 12
/* 0041CBB4 2D2A0020 */  sltiu $t2, $t1, 0x20
/* 0041CBB8 000A5823 */  negu  $t3, $t2
/* 0041CBBC 01616024 */  and   $t4, $t3, $at
/* 0041CBC0 012C6804 */  sllv  $t5, $t4, $t1
/* 0041CBC4 05A3000E */  bgezl $t5, .L0041CC00
/* 0041CBC8 95020010 */   lhu   $v0, 0x10($t0)
/* 0041CBCC 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041CBD0 8EA40000 */  lw    $a0, ($s5)
/* 0041CBD4 8D050010 */  lw    $a1, 0x10($t0)
/* 0041CBD8 0320F809 */  jalr  $t9
/* 0041CBDC 2407000A */   li    $a3, 10
/* 0041CBE0 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CBE4 8EA40000 */  lw    $a0, ($s5)
/* 0041CBE8 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041CBEC 0320F809 */  jalr  $t9
/* 0041CBF0 00000000 */   nop   
/* 0041CBF4 10000031 */  b     .L0041CCBC
/* 0041CBF8 8FBC003C */   lw    $gp, 0x3c($sp)
/* 0041CBFC 95020010 */  lhu   $v0, 0x10($t0)
.L0041CC00:
/* 0041CC00 8F918988 */  lw     $s1, %got(realstore)($gp)
/* 0041CC04 04410003 */  bgez  $v0, .L0041CC14
/* 0041CC08 00021A03 */   sra   $v1, $v0, 8
/* 0041CC0C 244100FF */  addiu $at, $v0, 0xff
/* 0041CC10 00011A03 */  sra   $v1, $at, 8
.L0041CC14:
/* 0041CC14 304400FF */  andi  $a0, $v0, 0xff
/* 0041CC18 18600012 */  blez  $v1, .L0041CC64
/* 0041CC1C 8E310000 */   lw    $s1, ($s1)
/* 0041CC20 24740001 */  addiu $s4, $v1, 1
/* 0041CC24 2683FFFF */  addiu $v1, $s4, -1
/* 0041CC28 30630003 */  andi  $v1, $v1, 3
/* 0041CC2C 10600007 */  beqz  $v1, .L0041CC4C
/* 0041CC30 24100001 */   li    $s0, 1
/* 0041CC34 24620001 */  addiu $v0, $v1, 1
.L0041CC38:
/* 0041CC38 26100001 */  addiu $s0, $s0, 1
/* 0041CC3C 1450FFFE */  bne   $v0, $s0, .L0041CC38
/* 0041CC40 8E310100 */   lw    $s1, 0x100($s1)
/* 0041CC44 52140008 */  beql  $s0, $s4, .L0041CC68
/* 0041CC48 95140012 */   lhu   $s4, 0x12($t0)
.L0041CC4C:
/* 0041CC4C 8E310100 */  lw    $s1, 0x100($s1)
/* 0041CC50 26100004 */  addiu $s0, $s0, 4
/* 0041CC54 8E310100 */  lw    $s1, 0x100($s1)
/* 0041CC58 8E310100 */  lw    $s1, 0x100($s1)
/* 0041CC5C 1614FFFB */  bne   $s0, $s4, .L0041CC4C
/* 0041CC60 8E310100 */   lw    $s1, 0x100($s1)
.L0041CC64:
/* 0041CC64 95140012 */  lhu   $s4, 0x12($t0)
.L0041CC68:
/* 0041CC68 02249021 */  addu  $s2, $s1, $a0
/* 0041CC6C 26520001 */  addiu $s2, $s2, 1
/* 0041CC70 1A80000D */  blez  $s4, .L0041CCA8
/* 0041CC74 24100001 */   li    $s0, 1
/* 0041CC78 26940001 */  addiu $s4, $s4, 1
/* 0041CC7C 8EB30000 */  lw    $s3, ($s5)
.L0041CC80:
/* 0041CC80 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041CC84 02602025 */  move  $a0, $s3
/* 0041CC88 9245FFFF */  lbu   $a1, -1($s2)
/* 0041CC8C 24060001 */  li    $a2, 1
/* 0041CC90 0320F809 */  jalr  $t9
/* 0041CC94 2407000A */   li    $a3, 10
/* 0041CC98 26100001 */  addiu $s0, $s0, 1
/* 0041CC9C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CCA0 1614FFF7 */  bne   $s0, $s4, .L0041CC80
/* 0041CCA4 26520001 */   addiu $s2, $s2, 1
.L0041CCA8:
/* 0041CCA8 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041CCAC 8EA40000 */  lw    $a0, ($s5)
/* 0041CCB0 0320F809 */  jalr  $t9
/* 0041CCB4 00000000 */   nop   
/* 0041CCB8 8FBC003C */  lw    $gp, 0x3c($sp)
.L0041CCBC:
/* 0041CCBC 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041CCC0 8F858044 */  lw    $a1, %got(RO_1000AC10)($gp)
/* 0041CCC4 8EA40000 */  lw    $a0, ($s5)
/* 0041CCC8 24060012 */  li    $a2, 18
/* 0041CCCC 24070012 */  li    $a3, 18
/* 0041CCD0 0320F809 */  jalr  $t9
/* 0041CCD4 24A5AC10 */   addiu $a1, %lo(RO_1000AC10) # addiu $a1, $a1, -0x53f0
/* 0041CCD8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CCDC 8EA40000 */  lw    $a0, ($s5)
/* 0041CCE0 8EC50030 */  lw    $a1, 0x30($s6)
/* 0041CCE4 8F99887C */  lw    $t9, %call16(write_real)($gp)
/* 0041CCE8 2406000F */  li    $a2, 15
/* 0041CCEC 2407FFFF */  li    $a3, -1
/* 0041CCF0 0320F809 */  jalr  $t9
/* 0041CCF4 00000000 */   nop   
/* 0041CCF8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CCFC 8EB30000 */  lw    $s3, ($s5)
/* 0041CD00 92C50022 */  lbu   $a1, 0x22($s6)
/* 0041CD04 8F998880 */  lw    $t9, %call16(write_boolean)($gp)
/* 0041CD08 24060006 */  li    $a2, 6
/* 0041CD0C 2407000A */  li    $a3, 10
/* 0041CD10 0320F809 */  jalr  $t9
/* 0041CD14 02602025 */   move  $a0, $s3
/* 0041CD18 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CD1C 02602025 */  move  $a0, $s3
/* 0041CD20 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041CD24 0320F809 */  jalr  $t9
/* 0041CD28 00000000 */   nop   
/* 0041CD2C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CD30 8EA40000 */  lw    $a0, ($s5)
/* 0041CD34 2406000C */  li    $a2, 12
/* 0041CD38 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041CD3C 8F858044 */  lw    $a1, %got(RO_1000AC04)($gp)
/* 0041CD40 2407000C */  li    $a3, 12
/* 0041CD44 0320F809 */  jalr  $t9
/* 0041CD48 24A5AC04 */   addiu $a1, %lo(RO_1000AC04) # addiu $a1, $a1, -0x53fc
/* 0041CD4C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CD50 24100001 */  li    $s0, 1
/* 0041CD54 2E0E0040 */  sltiu $t6, $s0, 0x40
.L0041CD58:
/* 0041CD58 11C00006 */  beqz  $t6, .L0041CD74
/* 0041CD5C 00107943 */   sra   $t7, $s0, 5
/* 0041CD60 000FC080 */  sll   $t8, $t7, 2
/* 0041CD64 02D8C821 */  addu  $t9, $s6, $t8
/* 0041CD68 8F2A0028 */  lw    $t2, 0x28($t9)
/* 0041CD6C 020A5804 */  sllv  $t3, $t2, $s0
/* 0041CD70 296E0000 */  slti  $t6, $t3, 0
.L0041CD74:
/* 0041CD74 11C00007 */  beqz  $t6, .L0041CD94
/* 0041CD78 02002825 */   move  $a1, $s0
/* 0041CD7C 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041CD80 8EA40000 */  lw    $a0, ($s5)
/* 0041CD84 24060003 */  li    $a2, 3
/* 0041CD88 0320F809 */  jalr  $t9
/* 0041CD8C 2407000A */   li    $a3, 10
/* 0041CD90 8FBC003C */  lw    $gp, 0x3c($sp)
.L0041CD94:
/* 0041CD94 26100001 */  addiu $s0, $s0, 1
/* 0041CD98 5617FFEF */  bnel  $s0, $s7, .L0041CD58
/* 0041CD9C 2E0E0040 */   sltiu $t6, $s0, 0x40
/* 0041CDA0 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041CDA4 8EB30000 */  lw    $s3, ($s5)
/* 0041CDA8 2405005D */  li    $a1, 93
/* 0041CDAC 24060001 */  li    $a2, 1
/* 0041CDB0 2407000A */  li    $a3, 10
/* 0041CDB4 0320F809 */  jalr  $t9
/* 0041CDB8 02602025 */   move  $a0, $s3
/* 0041CDBC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CDC0 02602025 */  move  $a0, $s3
/* 0041CDC4 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041CDC8 0320F809 */  jalr  $t9
/* 0041CDCC 00000000 */   nop   
/* 0041CDD0 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CDD4 8EA40000 */  lw    $a0, ($s5)
/* 0041CDD8 24060014 */  li    $a2, 20
/* 0041CDDC 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041CDE0 8F858044 */  lw    $a1, %got(RO_1000ABF0)($gp)
/* 0041CDE4 24070014 */  li    $a3, 20
/* 0041CDE8 0320F809 */  jalr  $t9
/* 0041CDEC 24A5ABF0 */   addiu $a1, %lo(RO_1000ABF0) # addiu $a1, $a1, -0x5410
/* 0041CDF0 8ED00038 */  lw    $s0, 0x38($s6)
/* 0041CDF4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CDF8 1200000E */  beqz  $s0, .L0041CE34
/* 0041CDFC 00000000 */   nop   
/* 0041CE00 8E020000 */  lw    $v0, ($s0)
.L0041CE04:
/* 0041CE04 24060005 */  li    $a2, 5
/* 0041CE08 50400008 */  beql  $v0, $zero, .L0041CE2C
/* 0041CE0C 8E100004 */   lw    $s0, 4($s0)
/* 0041CE10 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041CE14 8EA40000 */  lw    $a0, ($s5)
/* 0041CE18 8C450004 */  lw    $a1, 4($v0)
/* 0041CE1C 0320F809 */  jalr  $t9
/* 0041CE20 2407000A */   li    $a3, 10
/* 0041CE24 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CE28 8E100004 */  lw    $s0, 4($s0)
.L0041CE2C:
/* 0041CE2C 5600FFF5 */  bnezl $s0, .L0041CE04
/* 0041CE30 8E020000 */   lw    $v0, ($s0)
.L0041CE34:
/* 0041CE34 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041CE38 8EA40000 */  lw    $a0, ($s5)
/* 0041CE3C 0320F809 */  jalr  $t9
/* 0041CE40 00000000 */   nop   
/* 0041CE44 8ED00008 */  lw    $s0, 8($s6)
/* 0041CE48 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CE4C 1200005E */  beqz  $s0, .L0041CFC8
/* 0041CE50 00000000 */   nop   
.L0041CE54:
/* 0041CE54 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041CE58 8F858044 */  lw    $a1, %got(RO_1000ABE5)($gp)
/* 0041CE5C 8EA40000 */  lw    $a0, ($s5)
/* 0041CE60 2406000B */  li    $a2, 11
/* 0041CE64 2407000B */  li    $a3, 11
/* 0041CE68 0320F809 */  jalr  $t9
/* 0041CE6C 24A5ABE5 */   addiu $a1, %lo(RO_1000ABE5) # addiu $a1, $a1, -0x541b
/* 0041CE70 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CE74 8E090000 */  lw    $t1, ($s0)
/* 0041CE78 8EA40000 */  lw    $a0, ($s5)
/* 0041CE7C 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041CE80 24060004 */  li    $a2, 4
/* 0041CE84 2407000A */  li    $a3, 10
/* 0041CE88 0320F809 */  jalr  $t9
/* 0041CE8C 95250008 */   lhu   $a1, 8($t1)
/* 0041CE90 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CE94 8EA40000 */  lw    $a0, ($s5)
/* 0041CE98 96050010 */  lhu   $a1, 0x10($s0)
/* 0041CE9C 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041CEA0 24060003 */  li    $a2, 3
/* 0041CEA4 2407000A */  li    $a3, 10
/* 0041CEA8 0320F809 */  jalr  $t9
/* 0041CEAC 00000000 */   nop   
/* 0041CEB0 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CEB4 8EA40000 */  lw    $a0, ($s5)
/* 0041CEB8 92050012 */  lbu   $a1, 0x12($s0)
/* 0041CEBC 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041CEC0 24060003 */  li    $a2, 3
/* 0041CEC4 2407000A */  li    $a3, 10
/* 0041CEC8 0320F809 */  jalr  $t9
/* 0041CECC 00000000 */   nop   
/* 0041CED0 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CED4 8EA40000 */  lw    $a0, ($s5)
/* 0041CED8 92050013 */  lbu   $a1, 0x13($s0)
/* 0041CEDC 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041CEE0 24060003 */  li    $a2, 3
/* 0041CEE4 2407000A */  li    $a3, 10
/* 0041CEE8 0320F809 */  jalr  $t9
/* 0041CEEC 00000000 */   nop   
/* 0041CEF0 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CEF4 8EA40000 */  lw    $a0, ($s5)
/* 0041CEF8 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041CEFC 0320F809 */  jalr  $t9
/* 0041CF00 00000000 */   nop   
/* 0041CF04 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CF08 8EA40000 */  lw    $a0, ($s5)
/* 0041CF0C 2406002A */  li    $a2, 42
/* 0041CF10 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041CF14 8F858044 */  lw    $a1, %got(RO_1000ABBB)($gp)
/* 0041CF18 2407002A */  li    $a3, 42
/* 0041CF1C 0320F809 */  jalr  $t9
/* 0041CF20 24A5ABBB */   addiu $a1, %lo(RO_1000ABBB) # addiu $a1, $a1, -0x5445
/* 0041CF24 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CF28 8EB30000 */  lw    $s3, ($s5)
/* 0041CF2C 92050014 */  lbu   $a1, 0x14($s0)
/* 0041CF30 8F998880 */  lw    $t9, %call16(write_boolean)($gp)
/* 0041CF34 24060006 */  li    $a2, 6
/* 0041CF38 2407000A */  li    $a3, 10
/* 0041CF3C 0320F809 */  jalr  $t9
/* 0041CF40 02602025 */   move  $a0, $s3
/* 0041CF44 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CF48 02602025 */  move  $a0, $s3
/* 0041CF4C 92050017 */  lbu   $a1, 0x17($s0)
/* 0041CF50 8F998880 */  lw    $t9, %call16(write_boolean)($gp)
/* 0041CF54 24060006 */  li    $a2, 6
/* 0041CF58 2407000A */  li    $a3, 10
/* 0041CF5C 0320F809 */  jalr  $t9
/* 0041CF60 00000000 */   nop   
/* 0041CF64 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CF68 02602025 */  move  $a0, $s3
/* 0041CF6C 92050015 */  lbu   $a1, 0x15($s0)
/* 0041CF70 8F998880 */  lw    $t9, %call16(write_boolean)($gp)
/* 0041CF74 24060006 */  li    $a2, 6
/* 0041CF78 2407000A */  li    $a3, 10
/* 0041CF7C 0320F809 */  jalr  $t9
/* 0041CF80 00000000 */   nop   
/* 0041CF84 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CF88 02602025 */  move  $a0, $s3
/* 0041CF8C 92050016 */  lbu   $a1, 0x16($s0)
/* 0041CF90 8F998880 */  lw    $t9, %call16(write_boolean)($gp)
/* 0041CF94 24060006 */  li    $a2, 6
/* 0041CF98 2407000A */  li    $a3, 10
/* 0041CF9C 0320F809 */  jalr  $t9
/* 0041CFA0 00000000 */   nop   
/* 0041CFA4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CFA8 02602025 */  move  $a0, $s3
/* 0041CFAC 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041CFB0 0320F809 */  jalr  $t9
/* 0041CFB4 00000000 */   nop   
/* 0041CFB8 8E100004 */  lw    $s0, 4($s0)
/* 0041CFBC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041CFC0 1600FFA4 */  bnez  $s0, .L0041CE54
/* 0041CFC4 00000000 */   nop   
.L0041CFC8:
/* 0041CFC8 8F9981A0 */  lw    $t9, %call16(bvectempty)($gp)
/* 0041CFCC 26D0000C */  addiu $s0, $s6, 0xc
/* 0041CFD0 02002025 */  move  $a0, $s0
/* 0041CFD4 0320F809 */  jalr  $t9
/* 0041CFD8 00000000 */   nop   
/* 0041CFDC 1440000E */  bnez  $v0, .L0041D018
/* 0041CFE0 8FBC003C */   lw    $gp, 0x3c($sp)
/* 0041CFE4 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041CFE8 8F858044 */  lw    $a1, %got(RO_1000ABA7)($gp)
/* 0041CFEC 8EA40000 */  lw    $a0, ($s5)
/* 0041CFF0 24060014 */  li    $a2, 20
/* 0041CFF4 24070014 */  li    $a3, 20
/* 0041CFF8 0320F809 */  jalr  $t9
/* 0041CFFC 24A5ABA7 */   addiu $a1, %lo(RO_1000ABA7) # addiu $a1, $a1, -0x5459
/* 0041D000 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D004 02002025 */  move  $a0, $s0
/* 0041D008 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041D00C 0320F809 */  jalr  $t9
/* 0041D010 00000000 */   nop   
/* 0041D014 8FBC003C */  lw    $gp, 0x3c($sp)
.L0041D018:
/* 0041D018 8ED60034 */  lw    $s6, 0x34($s6)
/* 0041D01C 16C0FE77 */  bnez  $s6, .L0041C9FC
/* 0041D020 00000000 */   nop   
/* 0041D024 8FAD004C */  lw    $t5, 0x4c($sp)
.L0041D028:
/* 0041D028 27DE0001 */  addiu $fp, $fp, 1
/* 0041D02C 17CDFE59 */  bne   $fp, $t5, .L0041C994
/* 0041D030 00000000 */   nop   
.L0041D034:
/* 0041D034 8F9689AC */  lw     $s6, %got(graphhead)($gp)
/* 0041D038 8F958CCC */  lw     $s5, %got(list)($gp)
/* 0041D03C 24170024 */  li    $s7, 36
/* 0041D040 8ED60000 */  lw    $s6, ($s6)
/* 0041D044 241E0090 */  li    $fp, 144
/* 0041D048 52C0013A */  beql  $s6, $zero, .L0041D534
/* 0041D04C 8FBF0044 */   lw    $ra, 0x44($sp)
.L0041D050:
/* 0041D050 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041D054 8F858044 */  lw    $a1, %got(RO_1000AB9D)($gp)
/* 0041D058 8EA40000 */  lw    $a0, ($s5)
/* 0041D05C 2406000A */  li    $a2, 10
/* 0041D060 2407000A */  li    $a3, 10
/* 0041D064 0320F809 */  jalr  $t9
/* 0041D068 24A5AB9D */   addiu $a1, %lo(RO_1000AB9D) # addiu $a1, $a1, -0x5463
/* 0041D06C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D070 8EA40000 */  lw    $a0, ($s5)
/* 0041D074 96C50008 */  lhu   $a1, 8($s6)
/* 0041D078 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041D07C 24060004 */  li    $a2, 4
/* 0041D080 2407000A */  li    $a3, 10
/* 0041D084 0320F809 */  jalr  $t9
/* 0041D088 00000000 */   nop   
/* 0041D08C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D090 8EA40000 */  lw    $a0, ($s5)
/* 0041D094 2406000B */  li    $a2, 11
/* 0041D098 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041D09C 8F858044 */  lw    $a1, %got(RO_1000AB92)($gp)
/* 0041D0A0 2407000B */  li    $a3, 11
/* 0041D0A4 0320F809 */  jalr  $t9
/* 0041D0A8 24A5AB92 */   addiu $a1, %lo(RO_1000AB92) # addiu $a1, $a1, -0x546e
/* 0041D0AC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D0B0 8EA40000 */  lw    $a0, ($s5)
/* 0041D0B4 92C5000A */  lbu   $a1, 0xa($s6)
/* 0041D0B8 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041D0BC 2406000C */  li    $a2, 12
/* 0041D0C0 2407000A */  li    $a3, 10
/* 0041D0C4 0320F809 */  jalr  $t9
/* 0041D0C8 00000000 */   nop   
/* 0041D0CC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D0D0 8EB30000 */  lw    $s3, ($s5)
/* 0041D0D4 240F000A */  li    $t7, 10
/* 0041D0D8 8F998870 */  lw    $t9, %call16(write_enum)($gp)
/* 0041D0DC 8F868044 */  lw    $a2, %got(D_10010450)($gp)
/* 0041D0E0 AFAF0010 */  sw    $t7, 0x10($sp)
/* 0041D0E4 92C50005 */  lbu   $a1, 5($s6)
/* 0041D0E8 00003825 */  move  $a3, $zero
/* 0041D0EC 02602025 */  move  $a0, $s3
/* 0041D0F0 0320F809 */  jalr  $t9
/* 0041D0F4 24C60450 */   addiu $a2, %lo(D_10010450) # addiu $a2, $a2, 0x450
/* 0041D0F8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D0FC 02602025 */  move  $a0, $s3
/* 0041D100 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041D104 0320F809 */  jalr  $t9
/* 0041D108 00000000 */   nop   
/* 0041D10C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D110 24100001 */  li    $s0, 1
/* 0041D114 26D10004 */  addiu $s1, $s6, 4
.L0041D118:
/* 0041D118 8E380040 */  lw    $t8, 0x40($s1)
/* 0041D11C 02002825 */  move  $a1, $s0
/* 0041D120 53000008 */  beql  $t8, $zero, .L0041D144
/* 0041D124 26100001 */   addiu $s0, $s0, 1
/* 0041D128 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041D12C 8EA40000 */  lw    $a0, ($s5)
/* 0041D130 24060006 */  li    $a2, 6
/* 0041D134 0320F809 */  jalr  $t9
/* 0041D138 2407000A */   li    $a3, 10
/* 0041D13C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D140 26100001 */  addiu $s0, $s0, 1
.L0041D144:
/* 0041D144 1617FFF4 */  bne   $s0, $s7, .L0041D118
/* 0041D148 26310004 */   addiu $s1, $s1, 4
/* 0041D14C 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041D150 8EA40000 */  lw    $a0, ($s5)
/* 0041D154 0320F809 */  jalr  $t9
/* 0041D158 00000000 */   nop   
/* 0041D15C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D160 8EB30000 */  lw    $s3, ($s5)
/* 0041D164 24120004 */  li    $s2, 4
/* 0041D168 26D10004 */  addiu $s1, $s6, 4
.L0041D16C:
/* 0041D16C 8E390040 */  lw    $t9, 0x40($s1)
/* 0041D170 02602025 */  move  $a0, $s3
/* 0041D174 53200028 */  beql  $t9, $zero, .L0041D218
/* 0041D178 26520004 */   addiu $s2, $s2, 4
/* 0041D17C 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041D180 2405007B */  li    $a1, 123
/* 0041D184 24060001 */  li    $a2, 1
/* 0041D188 0320F809 */  jalr  $t9
/* 0041D18C 2407000A */   li    $a3, 10
/* 0041D190 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D194 8E2A0040 */  lw    $t2, 0x40($s1)
/* 0041D198 02602025 */  move  $a0, $s3
/* 0041D19C 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041D1A0 24060001 */  li    $a2, 1
/* 0041D1A4 2407000A */  li    $a3, 10
/* 0041D1A8 0320F809 */  jalr  $t9
/* 0041D1AC 95450004 */   lhu   $a1, 4($t2)
/* 0041D1B0 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D1B4 8EB30000 */  lw    $s3, ($s5)
/* 0041D1B8 2405007C */  li    $a1, 124
/* 0041D1BC 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041D1C0 24060001 */  li    $a2, 1
/* 0041D1C4 2407000A */  li    $a3, 10
/* 0041D1C8 0320F809 */  jalr  $t9
/* 0041D1CC 02602025 */   move  $a0, $s3
/* 0041D1D0 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D1D4 8E2B0040 */  lw    $t3, 0x40($s1)
/* 0041D1D8 02602025 */  move  $a0, $s3
/* 0041D1DC 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041D1E0 24060001 */  li    $a2, 1
/* 0041D1E4 2407000A */  li    $a3, 10
/* 0041D1E8 0320F809 */  jalr  $t9
/* 0041D1EC 95650006 */   lhu   $a1, 6($t3)
/* 0041D1F0 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D1F4 8EB30000 */  lw    $s3, ($s5)
/* 0041D1F8 2405007D */  li    $a1, 125
/* 0041D1FC 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041D200 24060001 */  li    $a2, 1
/* 0041D204 2407000A */  li    $a3, 10
/* 0041D208 0320F809 */  jalr  $t9
/* 0041D20C 02602025 */   move  $a0, $s3
/* 0041D210 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D214 26520004 */  addiu $s2, $s2, 4
.L0041D218:
/* 0041D218 165EFFD4 */  bne   $s2, $fp, .L0041D16C
/* 0041D21C 26310004 */   addiu $s1, $s1, 4
/* 0041D220 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041D224 02602025 */  move  $a0, $s3
/* 0041D228 0320F809 */  jalr  $t9
/* 0041D22C 00000000 */   nop   
/* 0041D230 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D234 8EA40000 */  lw    $a0, ($s5)
/* 0041D238 2406000E */  li    $a2, 14
/* 0041D23C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041D240 8F858044 */  lw    $a1, %got(RO_1000AB84)($gp)
/* 0041D244 2407000E */  li    $a3, 14
/* 0041D248 0320F809 */  jalr  $t9
/* 0041D24C 24A5AB84 */   addiu $a1, %lo(RO_1000AB84) # addiu $a1, $a1, -0x547c
/* 0041D250 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D254 24100001 */  li    $s0, 1
/* 0041D258 8F8C8D40 */  lw     $t4, %got(lasteereg)($gp)
/* 0041D25C 8D8C0000 */  lw    $t4, ($t4)
/* 0041D260 19800017 */  blez  $t4, .L0041D2C0
/* 0041D264 AFAC004C */   sw    $t4, 0x4c($sp)
/* 0041D268 258E0001 */  addiu $t6, $t4, 1
/* 0041D26C AFAE004C */  sw    $t6, 0x4c($sp)
/* 0041D270 2E090040 */  sltiu $t1, $s0, 0x40
.L0041D274:
/* 0041D274 11200006 */  beqz  $t1, .L0041D290
/* 0041D278 00106943 */   sra   $t5, $s0, 5
/* 0041D27C 000D7880 */  sll   $t7, $t5, 2
/* 0041D280 02CFC021 */  addu  $t8, $s6, $t7
/* 0041D284 8F190034 */  lw    $t9, 0x34($t8)
/* 0041D288 02195004 */  sllv  $t2, $t9, $s0
/* 0041D28C 29490000 */  slti  $t1, $t2, 0
.L0041D290:
/* 0041D290 11200007 */  beqz  $t1, .L0041D2B0
/* 0041D294 02002825 */   move  $a1, $s0
/* 0041D298 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041D29C 8EA40000 */  lw    $a0, ($s5)
/* 0041D2A0 24060003 */  li    $a2, 3
/* 0041D2A4 0320F809 */  jalr  $t9
/* 0041D2A8 2407000A */   li    $a3, 10
/* 0041D2AC 8FBC003C */  lw    $gp, 0x3c($sp)
.L0041D2B0:
/* 0041D2B0 8FAC004C */  lw    $t4, 0x4c($sp)
/* 0041D2B4 26100001 */  addiu $s0, $s0, 1
/* 0041D2B8 560CFFEE */  bnel  $s0, $t4, .L0041D274
/* 0041D2BC 2E090040 */   sltiu $t1, $s0, 0x40
.L0041D2C0:
/* 0041D2C0 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041D2C4 8EB30000 */  lw    $s3, ($s5)
/* 0041D2C8 2405005D */  li    $a1, 93
/* 0041D2CC 24060001 */  li    $a2, 1
/* 0041D2D0 2407000A */  li    $a3, 10
/* 0041D2D4 0320F809 */  jalr  $t9
/* 0041D2D8 02602025 */   move  $a0, $s3
/* 0041D2DC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D2E0 02602025 */  move  $a0, $s3
/* 0041D2E4 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041D2E8 0320F809 */  jalr  $t9
/* 0041D2EC 00000000 */   nop   
/* 0041D2F0 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D2F4 8EA40000 */  lw    $a0, ($s5)
/* 0041D2F8 2406000E */  li    $a2, 14
/* 0041D2FC 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041D300 8F858044 */  lw    $a1, %got(RO_1000AB76)($gp)
/* 0041D304 2407000E */  li    $a3, 14
/* 0041D308 0320F809 */  jalr  $t9
/* 0041D30C 24A5AB76 */   addiu $a1, %lo(RO_1000AB76) # addiu $a1, $a1, -0x548a
/* 0041D310 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D314 8F8E8D34 */  lw     $t6, %got(firsterreg)($gp)
/* 0041D318 8F948D40 */  lw     $s4, %got(lasteereg)($gp)
/* 0041D31C 8DCE0004 */  lw    $t6, 4($t6)
/* 0041D320 8E940004 */  lw    $s4, 4($s4)
/* 0041D324 AFAE004C */  sw    $t6, 0x4c($sp)
/* 0041D328 028E082A */  slt   $at, $s4, $t6
/* 0041D32C 14200015 */  bnez  $at, .L0041D384
/* 0041D330 01C08025 */   move  $s0, $t6
/* 0041D334 26940001 */  addiu $s4, $s4, 1
/* 0041D338 2E0D0040 */  sltiu $t5, $s0, 0x40
.L0041D33C:
/* 0041D33C 11A00006 */  beqz  $t5, .L0041D358
/* 0041D340 00107943 */   sra   $t7, $s0, 5
/* 0041D344 000FC080 */  sll   $t8, $t7, 2
/* 0041D348 02D8C821 */  addu  $t9, $s6, $t8
/* 0041D34C 8F2A003C */  lw    $t2, 0x3c($t9)
/* 0041D350 020A5804 */  sllv  $t3, $t2, $s0
/* 0041D354 296D0000 */  slti  $t5, $t3, 0
.L0041D358:
/* 0041D358 11A00007 */  beqz  $t5, .L0041D378
/* 0041D35C 02002825 */   move  $a1, $s0
/* 0041D360 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041D364 8EA40000 */  lw    $a0, ($s5)
/* 0041D368 24060003 */  li    $a2, 3
/* 0041D36C 0320F809 */  jalr  $t9
/* 0041D370 2407000A */   li    $a3, 10
/* 0041D374 8FBC003C */  lw    $gp, 0x3c($sp)
.L0041D378:
/* 0041D378 26100001 */  addiu $s0, $s0, 1
/* 0041D37C 5614FFEF */  bnel  $s0, $s4, .L0041D33C
/* 0041D380 2E0D0040 */   sltiu $t5, $s0, 0x40
.L0041D384:
/* 0041D384 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041D388 8EB30000 */  lw    $s3, ($s5)
/* 0041D38C 2405005D */  li    $a1, 93
/* 0041D390 24060001 */  li    $a2, 1
/* 0041D394 2407000A */  li    $a3, 10
/* 0041D398 0320F809 */  jalr  $t9
/* 0041D39C 02602025 */   move  $a0, $s3
/* 0041D3A0 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D3A4 02602025 */  move  $a0, $s3
/* 0041D3A8 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041D3AC 0320F809 */  jalr  $t9
/* 0041D3B0 00000000 */   nop   
/* 0041D3B4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D3B8 8EA40000 */  lw    $a0, ($s5)
/* 0041D3BC 2406000B */  li    $a2, 11
/* 0041D3C0 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041D3C4 8F858044 */  lw    $a1, %got(RO_1000AB6B)($gp)
/* 0041D3C8 2407000B */  li    $a3, 11
/* 0041D3CC 0320F809 */  jalr  $t9
/* 0041D3D0 24A5AB6B */   addiu $a1, %lo(RO_1000AB6B) # addiu $a1, $a1, -0x5495
/* 0041D3D4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D3D8 26C40104 */  addiu $a0, $s6, 0x104
/* 0041D3DC 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041D3E0 0320F809 */  jalr  $t9
/* 0041D3E4 00000000 */   nop   
/* 0041D3E8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D3EC 8EA40000 */  lw    $a0, ($s5)
/* 0041D3F0 2406000B */  li    $a2, 11
/* 0041D3F4 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041D3F8 8F858044 */  lw    $a1, %got(RO_1000AB60)($gp)
/* 0041D3FC 2407000B */  li    $a3, 11
/* 0041D400 0320F809 */  jalr  $t9
/* 0041D404 24A5AB60 */   addiu $a1, %lo(RO_1000AB60) # addiu $a1, $a1, -0x54a0
/* 0041D408 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D40C 26C4010C */  addiu $a0, $s6, 0x10c
/* 0041D410 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041D414 0320F809 */  jalr  $t9
/* 0041D418 00000000 */   nop   
/* 0041D41C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D420 8EA40000 */  lw    $a0, ($s5)
/* 0041D424 2406000C */  li    $a2, 12
/* 0041D428 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041D42C 8F858044 */  lw    $a1, %got(RO_1000AB54)($gp)
/* 0041D430 2407000C */  li    $a3, 12
/* 0041D434 0320F809 */  jalr  $t9
/* 0041D438 24A5AB54 */   addiu $a1, %lo(RO_1000AB54) # addiu $a1, $a1, -0x54ac
/* 0041D43C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D440 26C40114 */  addiu $a0, $s6, 0x114
/* 0041D444 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041D448 0320F809 */  jalr  $t9
/* 0041D44C 00000000 */   nop   
/* 0041D450 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D454 8EA40000 */  lw    $a0, ($s5)
/* 0041D458 2406000B */  li    $a2, 11
/* 0041D45C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041D460 8F858044 */  lw    $a1, %got(RO_1000AB49)($gp)
/* 0041D464 2407000B */  li    $a3, 11
/* 0041D468 0320F809 */  jalr  $t9
/* 0041D46C 24A5AB49 */   addiu $a1, %lo(RO_1000AB49) # addiu $a1, $a1, -0x54b7
/* 0041D470 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D474 26C40134 */  addiu $a0, $s6, 0x134
/* 0041D478 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041D47C 0320F809 */  jalr  $t9
/* 0041D480 00000000 */   nop   
/* 0041D484 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D488 8EA40000 */  lw    $a0, ($s5)
/* 0041D48C 2406000C */  li    $a2, 12
/* 0041D490 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041D494 8F858044 */  lw    $a1, %got(RO_1000AB3D)($gp)
/* 0041D498 2407000C */  li    $a3, 12
/* 0041D49C 0320F809 */  jalr  $t9
/* 0041D4A0 24A5AB3D */   addiu $a1, %lo(RO_1000AB3D) # addiu $a1, $a1, -0x54c3
/* 0041D4A4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D4A8 26C40144 */  addiu $a0, $s6, 0x144
/* 0041D4AC 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041D4B0 0320F809 */  jalr  $t9
/* 0041D4B4 00000000 */   nop   
/* 0041D4B8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D4BC 8EA40000 */  lw    $a0, ($s5)
/* 0041D4C0 2406000D */  li    $a2, 13
/* 0041D4C4 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041D4C8 8F858044 */  lw    $a1, %got(RO_1000AB30)($gp)
/* 0041D4CC 2407000D */  li    $a3, 13
/* 0041D4D0 0320F809 */  jalr  $t9
/* 0041D4D4 24A5AB30 */   addiu $a1, %lo(RO_1000AB30) # addiu $a1, $a1, -0x54d0
/* 0041D4D8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D4DC 26C400F4 */  addiu $a0, $s6, 0xf4
/* 0041D4E0 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041D4E4 0320F809 */  jalr  $t9
/* 0041D4E8 00000000 */   nop   
/* 0041D4EC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D4F0 8EA40000 */  lw    $a0, ($s5)
/* 0041D4F4 24060009 */  li    $a2, 9
/* 0041D4F8 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041D4FC 8F858044 */  lw    $a1, %got(RO_1000AB27)($gp)
/* 0041D500 24070009 */  li    $a3, 9
/* 0041D504 0320F809 */  jalr  $t9
/* 0041D508 24A5AB27 */   addiu $a1, %lo(RO_1000AB27) # addiu $a1, $a1, -0x54d9
/* 0041D50C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D510 26C4012C */  addiu $a0, $s6, 0x12c
/* 0041D514 8F998238 */  lw    $t9, %call16(printbv)($gp)
/* 0041D518 0320F809 */  jalr  $t9
/* 0041D51C 00000000 */   nop   
/* 0041D520 8ED6000C */  lw    $s6, 0xc($s6)
/* 0041D524 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0041D528 16C0FEC9 */  bnez  $s6, .L0041D050
/* 0041D52C 00000000 */   nop   
/* 0041D530 8FBF0044 */  lw    $ra, 0x44($sp)
.L0041D534:
/* 0041D534 8FB0001C */  lw    $s0, 0x1c($sp)
/* 0041D538 8FB10020 */  lw    $s1, 0x20($sp)
/* 0041D53C 8FB20024 */  lw    $s2, 0x24($sp)
/* 0041D540 8FB30028 */  lw    $s3, 0x28($sp)
/* 0041D544 8FB4002C */  lw    $s4, 0x2c($sp)
/* 0041D548 8FB50030 */  lw    $s5, 0x30($sp)
/* 0041D54C 8FB60034 */  lw    $s6, 0x34($sp)
/* 0041D550 8FB70038 */  lw    $s7, 0x38($sp)
/* 0041D554 8FBE0040 */  lw    $fp, 0x40($sp)
/* 0041D558 03E00008 */  jr    $ra
/* 0041D55C 27BD0078 */   addiu $sp, $sp, 0x78
    .type printregs, @function
    .size printregs, .-printregs
    .end printregs

glabel printinterproc
    .ent printinterproc
    # 00456A2C oneproc
    # 00469280 globalcolor
/* 0041D560 3C1C0FC0 */  .cpload $t9
/* 0041D564 279CCD30 */  
/* 0041D568 0399E021 */  
/* 0041D56C 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 0041D570 8F8E8DE8 */  lw     $t6, %got(proc_to_print)($gp)
/* 0041D574 24010020 */  li    $at, 32
/* 0041D578 AFBF0034 */  sw    $ra, 0x34($sp)
/* 0041D57C 91CE0000 */  lbu   $t6, ($t6)
/* 0041D580 AFBC0030 */  sw    $gp, 0x30($sp)
/* 0041D584 AFB5002C */  sw    $s5, 0x2c($sp)
/* 0041D588 AFB40028 */  sw    $s4, 0x28($sp)
/* 0041D58C AFB30024 */  sw    $s3, 0x24($sp)
/* 0041D590 AFB20020 */  sw    $s2, 0x20($sp)
/* 0041D594 AFB1001C */  sw    $s1, 0x1c($sp)
/* 0041D598 11C10005 */  beq   $t6, $at, .L0041D5B0
/* 0041D59C AFB00018 */   sw    $s0, 0x18($sp)
/* 0041D5A0 8F8F8A8C */  lw     $t7, %got(at_proc_to_print)($gp)
/* 0041D5A4 91EF0000 */  lbu   $t7, ($t7)
/* 0041D5A8 51E00063 */  beql  $t7, $zero, .L0041D738
/* 0041D5AC 8FBF0034 */   lw    $ra, 0x34($sp)
.L0041D5B0:
/* 0041D5B0 8F988B0C */  lw     $t8, %got(allcallersave)($gp)
/* 0041D5B4 2406001D */  li    $a2, 29
/* 0041D5B8 93180000 */  lbu   $t8, ($t8)
/* 0041D5BC 5300005E */  beql  $t8, $zero, .L0041D738
/* 0041D5C0 8FBF0034 */   lw    $ra, 0x34($sp)
/* 0041D5C4 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041D5C8 8F928CCC */  lw     $s2, %got(list)($gp)
/* 0041D5CC 8F858044 */  lw    $a1, %got(RO_1000AC56)($gp)
/* 0041D5D0 2407001D */  li    $a3, 29
/* 0041D5D4 8E440000 */  lw    $a0, ($s2)
/* 0041D5D8 0320F809 */  jalr  $t9
/* 0041D5DC 24A5AC56 */   addiu $a1, %lo(RO_1000AC56) # addiu $a1, $a1, -0x53aa
/* 0041D5E0 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041D5E4 8E440000 */  lw    $a0, ($s2)
/* 0041D5E8 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041D5EC 0320F809 */  jalr  $t9
/* 0041D5F0 00000000 */   nop   
/* 0041D5F4 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041D5F8 24100001 */  li    $s0, 1
/* 0041D5FC 8F918D40 */  lw     $s1, %got(lasteereg)($gp)
/* 0041D600 8E340004 */  lw    $s4, 4($s1)
/* 0041D604 1A800012 */  blez  $s4, .L0041D650
/* 0041D608 26940001 */   addiu $s4, $s4, 1
/* 0041D60C 8F938B6C */  lw     $s3, %got(curproc)($gp)
/* 0041D610 8E790000 */  lw    $t9, ($s3)
.L0041D614:
/* 0041D614 02002825 */  move  $a1, $s0
/* 0041D618 8F280024 */  lw    $t0, 0x24($t9)
/* 0041D61C 01104821 */  addu  $t1, $t0, $s0
/* 0041D620 912AFFFF */  lbu   $t2, -1($t1)
/* 0041D624 51400008 */  beql  $t2, $zero, .L0041D648
/* 0041D628 26100001 */   addiu $s0, $s0, 1
/* 0041D62C 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041D630 8E440000 */  lw    $a0, ($s2)
/* 0041D634 24060003 */  li    $a2, 3
/* 0041D638 0320F809 */  jalr  $t9
/* 0041D63C 2407000A */   li    $a3, 10
/* 0041D640 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041D644 26100001 */  addiu $s0, $s0, 1
.L0041D648:
/* 0041D648 5614FFF2 */  bnel  $s0, $s4, .L0041D614
/* 0041D64C 8E790000 */   lw    $t9, ($s3)
.L0041D650:
/* 0041D650 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041D654 8F938B6C */  lw     $s3, %got(curproc)($gp)
/* 0041D658 8E440000 */  lw    $a0, ($s2)
/* 0041D65C 0320F809 */  jalr  $t9
/* 0041D660 00000000 */   nop   
/* 0041D664 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041D668 8E440000 */  lw    $a0, ($s2)
/* 0041D66C 2406001B */  li    $a2, 27
/* 0041D670 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041D674 8F858044 */  lw    $a1, %got(RO_1000AC3B)($gp)
/* 0041D678 2407001B */  li    $a3, 27
/* 0041D67C 0320F809 */  jalr  $t9
/* 0041D680 24A5AC3B */   addiu $a1, %lo(RO_1000AC3B) # addiu $a1, $a1, -0x53c5
/* 0041D684 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041D688 8E440000 */  lw    $a0, ($s2)
/* 0041D68C 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041D690 0320F809 */  jalr  $t9
/* 0041D694 00000000 */   nop   
/* 0041D698 8E340004 */  lw    $s4, 4($s1)
/* 0041D69C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041D6A0 24110004 */  li    $s1, 4
/* 0041D6A4 1A800023 */  blez  $s4, .L0041D734
/* 0041D6A8 24100001 */   li    $s0, 1
/* 0041D6AC 26940001 */  addiu $s4, $s4, 1
/* 0041D6B0 2415FFFF */  li    $s5, -1
.L0041D6B4:
/* 0041D6B4 8E6B0000 */  lw    $t3, ($s3)
/* 0041D6B8 02002825 */  move  $a1, $s0
/* 0041D6BC 8D6C0024 */  lw    $t4, 0x24($t3)
/* 0041D6C0 01916821 */  addu  $t5, $t4, $s1
/* 0041D6C4 8DAE0020 */  lw    $t6, 0x20($t5)
/* 0041D6C8 52AE0018 */  beql  $s5, $t6, .L0041D72C
/* 0041D6CC 26100001 */   addiu $s0, $s0, 1
/* 0041D6D0 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041D6D4 8E440000 */  lw    $a0, ($s2)
/* 0041D6D8 2406000C */  li    $a2, 12
/* 0041D6DC 0320F809 */  jalr  $t9
/* 0041D6E0 2407000A */   li    $a3, 10
/* 0041D6E4 8E6F0000 */  lw    $t7, ($s3)
/* 0041D6E8 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041D6EC 8E440000 */  lw    $a0, ($s2)
/* 0041D6F0 8DF80024 */  lw    $t8, 0x24($t7)
/* 0041D6F4 2406000C */  li    $a2, 12
/* 0041D6F8 2407000A */  li    $a3, 10
/* 0041D6FC 0311C821 */  addu  $t9, $t8, $s1
/* 0041D700 8F250020 */  lw    $a1, 0x20($t9)
/* 0041D704 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041D708 0320F809 */  jalr  $t9
/* 0041D70C 00000000 */   nop   
/* 0041D710 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041D714 8E440000 */  lw    $a0, ($s2)
/* 0041D718 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041D71C 0320F809 */  jalr  $t9
/* 0041D720 00000000 */   nop   
/* 0041D724 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041D728 26100001 */  addiu $s0, $s0, 1
.L0041D72C:
/* 0041D72C 1614FFE1 */  bne   $s0, $s4, .L0041D6B4
/* 0041D730 26310004 */   addiu $s1, $s1, 4
.L0041D734:
/* 0041D734 8FBF0034 */  lw    $ra, 0x34($sp)
.L0041D738:
/* 0041D738 8FB00018 */  lw    $s0, 0x18($sp)
/* 0041D73C 8FB1001C */  lw    $s1, 0x1c($sp)
/* 0041D740 8FB20020 */  lw    $s2, 0x20($sp)
/* 0041D744 8FB30024 */  lw    $s3, 0x24($sp)
/* 0041D748 8FB40028 */  lw    $s4, 0x28($sp)
/* 0041D74C 8FB5002C */  lw    $s5, 0x2c($sp)
/* 0041D750 03E00008 */  jr    $ra
/* 0041D754 27BD0038 */   addiu $sp, $sp, 0x38
    .type printinterproc, @function
    .size printinterproc, .-printinterproc
    .end printinterproc

glabel printsav
    .ent printsav
    # 00456A2C oneproc
/* 0041D758 3C1C0FC0 */  .cpload $t9
/* 0041D75C 279CCB38 */  
/* 0041D760 0399E021 */  
/* 0041D764 8F8E8DE8 */  lw     $t6, %got(proc_to_print)($gp)
/* 0041D768 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 0041D76C 24010020 */  li    $at, 32
/* 0041D770 91CE0000 */  lbu   $t6, ($t6)
/* 0041D774 AFBF002C */  sw    $ra, 0x2c($sp)
/* 0041D778 AFBC0028 */  sw    $gp, 0x28($sp)
/* 0041D77C AFB40024 */  sw    $s4, 0x24($sp)
/* 0041D780 AFB30020 */  sw    $s3, 0x20($sp)
/* 0041D784 AFB2001C */  sw    $s2, 0x1c($sp)
/* 0041D788 AFB10018 */  sw    $s1, 0x18($sp)
/* 0041D78C 11C10005 */  beq   $t6, $at, .L0041D7A4
/* 0041D790 AFB00014 */   sw    $s0, 0x14($sp)
/* 0041D794 8F8F8A8C */  lw     $t7, %got(at_proc_to_print)($gp)
/* 0041D798 91EF0000 */  lbu   $t7, ($t7)
/* 0041D79C 51E00186 */  beql  $t7, $zero, .L0041DDB8
/* 0041D7A0 8FBF002C */   lw    $ra, 0x2c($sp)
.L0041D7A4:
/* 0041D7A4 8F9289AC */  lw     $s2, %got(graphhead)($gp)
/* 0041D7A8 24130024 */  li    $s3, 36
/* 0041D7AC 8E520000 */  lw    $s2, ($s2)
/* 0041D7B0 52400181 */  beql  $s2, $zero, .L0041DDB8
/* 0041D7B4 8FBF002C */   lw    $ra, 0x2c($sp)
/* 0041D7B8 8F948D38 */  lw     $s4, %got(firsteereg)($gp)
/* 0041D7BC 8F918CCC */  lw     $s1, %got(list)($gp)
.L0041D7C0:
/* 0041D7C0 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041D7C4 8F858044 */  lw    $a1, %got(RO_1000ACCB)($gp)
/* 0041D7C8 8E240000 */  lw    $a0, ($s1)
/* 0041D7CC 2406000A */  li    $a2, 10
/* 0041D7D0 2407000A */  li    $a3, 10
/* 0041D7D4 0320F809 */  jalr  $t9
/* 0041D7D8 24A5ACCB */   addiu $a1, %lo(RO_1000ACCB) # addiu $a1, $a1, -0x5335
/* 0041D7DC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041D7E0 8E240000 */  lw    $a0, ($s1)
/* 0041D7E4 96450008 */  lhu   $a1, 8($s2)
/* 0041D7E8 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041D7EC 24060004 */  li    $a2, 4
/* 0041D7F0 2407000A */  li    $a3, 10
/* 0041D7F4 0320F809 */  jalr  $t9
/* 0041D7F8 00000000 */   nop   
/* 0041D7FC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041D800 8E240000 */  lw    $a0, ($s1)
/* 0041D804 2406000B */  li    $a2, 11
/* 0041D808 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041D80C 8F858044 */  lw    $a1, %got(RO_1000ACC0)($gp)
/* 0041D810 2407000B */  li    $a3, 11
/* 0041D814 0320F809 */  jalr  $t9
/* 0041D818 24A5ACC0 */   addiu $a1, %lo(RO_1000ACC0) # addiu $a1, $a1, -0x5340
/* 0041D81C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041D820 8E240000 */  lw    $a0, ($s1)
/* 0041D824 9245000A */  lbu   $a1, 0xa($s2)
/* 0041D828 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041D82C 2406000C */  li    $a2, 12
/* 0041D830 2407000A */  li    $a3, 10
/* 0041D834 0320F809 */  jalr  $t9
/* 0041D838 00000000 */   nop   
/* 0041D83C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041D840 8E240000 */  lw    $a0, ($s1)
/* 0041D844 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041D848 0320F809 */  jalr  $t9
/* 0041D84C 00000000 */   nop   
/* 0041D850 8E580104 */  lw    $t8, 0x104($s2)
/* 0041D854 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041D858 24060005 */  li    $a2, 5
/* 0041D85C 13000022 */  beqz  $t8, .L0041D8E8
/* 0041D860 24070005 */   li    $a3, 5
/* 0041D864 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041D868 8F858044 */  lw    $a1, %got(RO_1000ACBB)($gp)
/* 0041D86C 8E240000 */  lw    $a0, ($s1)
/* 0041D870 0320F809 */  jalr  $t9
/* 0041D874 24A5ACBB */   addiu $a1, %lo(RO_1000ACBB) # addiu $a1, $a1, -0x5345
/* 0041D878 92820003 */  lbu   $v0, 3($s4)
/* 0041D87C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041D880 2C410024 */  sltiu $at, $v0, 0x24
/* 0041D884 10200013 */  beqz  $at, .L0041D8D4
/* 0041D888 305000FF */   andi  $s0, $v0, 0xff
/* 0041D88C 8E590104 */  lw    $t9, 0x104($s2)
.L0041D890:
/* 0041D890 2608FFF3 */  addiu $t0, $s0, -0xd
/* 0041D894 2D090020 */  sltiu $t1, $t0, 0x20
/* 0041D898 00095023 */  negu  $t2, $t1
/* 0041D89C 032A5824 */  and   $t3, $t9, $t2
/* 0041D8A0 010B6004 */  sllv  $t4, $t3, $t0
/* 0041D8A4 05810007 */  bgez  $t4, .L0041D8C4
/* 0041D8A8 02002825 */   move  $a1, $s0
/* 0041D8AC 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041D8B0 8E240000 */  lw    $a0, ($s1)
/* 0041D8B4 24060006 */  li    $a2, 6
/* 0041D8B8 0320F809 */  jalr  $t9
/* 0041D8BC 2407000A */   li    $a3, 10
/* 0041D8C0 8FBC0028 */  lw    $gp, 0x28($sp)
.L0041D8C4:
/* 0041D8C4 26100001 */  addiu $s0, $s0, 1
/* 0041D8C8 321000FF */  andi  $s0, $s0, 0xff
/* 0041D8CC 5613FFF0 */  bnel  $s0, $s3, .L0041D890
/* 0041D8D0 8E590104 */   lw    $t9, 0x104($s2)
.L0041D8D4:
/* 0041D8D4 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041D8D8 8E240000 */  lw    $a0, ($s1)
/* 0041D8DC 0320F809 */  jalr  $t9
/* 0041D8E0 00000000 */   nop   
/* 0041D8E4 8FBC0028 */  lw    $gp, 0x28($sp)
.L0041D8E8:
/* 0041D8E8 8E4D010C */  lw    $t5, 0x10c($s2)
/* 0041D8EC 24060005 */  li    $a2, 5
/* 0041D8F0 24070005 */  li    $a3, 5
/* 0041D8F4 51A00023 */  beql  $t5, $zero, .L0041D984
/* 0041D8F8 8E4B0108 */   lw    $t3, 0x108($s2)
/* 0041D8FC 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041D900 8F858044 */  lw    $a1, %got(RO_1000ACB6)($gp)
/* 0041D904 8E240000 */  lw    $a0, ($s1)
/* 0041D908 0320F809 */  jalr  $t9
/* 0041D90C 24A5ACB6 */   addiu $a1, %lo(RO_1000ACB6) # addiu $a1, $a1, -0x534a
/* 0041D910 92820003 */  lbu   $v0, 3($s4)
/* 0041D914 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041D918 2C410024 */  sltiu $at, $v0, 0x24
/* 0041D91C 10200013 */  beqz  $at, .L0041D96C
/* 0041D920 305000FF */   andi  $s0, $v0, 0xff
/* 0041D924 8E4E010C */  lw    $t6, 0x10c($s2)
.L0041D928:
/* 0041D928 260FFFF3 */  addiu $t7, $s0, -0xd
/* 0041D92C 2DF80020 */  sltiu $t8, $t7, 0x20
/* 0041D930 00184823 */  negu  $t1, $t8
/* 0041D934 01C9C824 */  and   $t9, $t6, $t1
/* 0041D938 01F95004 */  sllv  $t2, $t9, $t7
/* 0041D93C 05410007 */  bgez  $t2, .L0041D95C
/* 0041D940 02002825 */   move  $a1, $s0
/* 0041D944 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041D948 8E240000 */  lw    $a0, ($s1)
/* 0041D94C 24060006 */  li    $a2, 6
/* 0041D950 0320F809 */  jalr  $t9
/* 0041D954 2407000A */   li    $a3, 10
/* 0041D958 8FBC0028 */  lw    $gp, 0x28($sp)
.L0041D95C:
/* 0041D95C 26100001 */  addiu $s0, $s0, 1
/* 0041D960 321000FF */  andi  $s0, $s0, 0xff
/* 0041D964 5613FFF0 */  bnel  $s0, $s3, .L0041D928
/* 0041D968 8E4E010C */   lw    $t6, 0x10c($s2)
.L0041D96C:
/* 0041D96C 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041D970 8E240000 */  lw    $a0, ($s1)
/* 0041D974 0320F809 */  jalr  $t9
/* 0041D978 00000000 */   nop   
/* 0041D97C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041D980 8E4B0108 */  lw    $t3, 0x108($s2)
.L0041D984:
/* 0041D984 24060004 */  li    $a2, 4
/* 0041D988 24070004 */  li    $a3, 4
/* 0041D98C 51600023 */  beql  $t3, $zero, .L0041DA1C
/* 0041D990 8E590110 */   lw    $t9, 0x110($s2)
/* 0041D994 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041D998 8F858044 */  lw    $a1, %got(RO_1000ACB2)($gp)
/* 0041D99C 8E240000 */  lw    $a0, ($s1)
/* 0041D9A0 0320F809 */  jalr  $t9
/* 0041D9A4 24A5ACB2 */   addiu $a1, %lo(RO_1000ACB2) # addiu $a1, $a1, -0x534e
/* 0041D9A8 92820003 */  lbu   $v0, 3($s4)
/* 0041D9AC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041D9B0 2C410024 */  sltiu $at, $v0, 0x24
/* 0041D9B4 10200013 */  beqz  $at, .L0041DA04
/* 0041D9B8 305000FF */   andi  $s0, $v0, 0xff
/* 0041D9BC 8E480108 */  lw    $t0, 0x108($s2)
.L0041D9C0:
/* 0041D9C0 260CFFF3 */  addiu $t4, $s0, -0xd
/* 0041D9C4 2D8D0020 */  sltiu $t5, $t4, 0x20
/* 0041D9C8 000DC023 */  negu  $t8, $t5
/* 0041D9CC 01187024 */  and   $t6, $t0, $t8
/* 0041D9D0 018E4804 */  sllv  $t1, $t6, $t4
/* 0041D9D4 05210007 */  bgez  $t1, .L0041D9F4
/* 0041D9D8 02002825 */   move  $a1, $s0
/* 0041D9DC 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041D9E0 8E240000 */  lw    $a0, ($s1)
/* 0041D9E4 24060006 */  li    $a2, 6
/* 0041D9E8 0320F809 */  jalr  $t9
/* 0041D9EC 2407000A */   li    $a3, 10
/* 0041D9F0 8FBC0028 */  lw    $gp, 0x28($sp)
.L0041D9F4:
/* 0041D9F4 26100001 */  addiu $s0, $s0, 1
/* 0041D9F8 321000FF */  andi  $s0, $s0, 0xff
/* 0041D9FC 5613FFF0 */  bnel  $s0, $s3, .L0041D9C0
/* 0041DA00 8E480108 */   lw    $t0, 0x108($s2)
.L0041DA04:
/* 0041DA04 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041DA08 8E240000 */  lw    $a0, ($s1)
/* 0041DA0C 0320F809 */  jalr  $t9
/* 0041DA10 00000000 */   nop   
/* 0041DA14 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041DA18 8E590110 */  lw    $t9, 0x110($s2)
.L0041DA1C:
/* 0041DA1C 24060009 */  li    $a2, 9
/* 0041DA20 24070009 */  li    $a3, 9
/* 0041DA24 53200023 */  beql  $t9, $zero, .L0041DAB4
/* 0041DA28 8E4E0114 */   lw    $t6, 0x114($s2)
/* 0041DA2C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041DA30 8F858044 */  lw    $a1, %got(RO_1000ACA9)($gp)
/* 0041DA34 8E240000 */  lw    $a0, ($s1)
/* 0041DA38 0320F809 */  jalr  $t9
/* 0041DA3C 24A5ACA9 */   addiu $a1, %lo(RO_1000ACA9) # addiu $a1, $a1, -0x5357
/* 0041DA40 92820003 */  lbu   $v0, 3($s4)
/* 0041DA44 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041DA48 2C410024 */  sltiu $at, $v0, 0x24
/* 0041DA4C 10200013 */  beqz  $at, .L0041DA9C
/* 0041DA50 305000FF */   andi  $s0, $v0, 0xff
/* 0041DA54 8E4F0110 */  lw    $t7, 0x110($s2)
.L0041DA58:
/* 0041DA58 260AFFF3 */  addiu $t2, $s0, -0xd
/* 0041DA5C 2D4B0020 */  sltiu $t3, $t2, 0x20
/* 0041DA60 000B6823 */  negu  $t5, $t3
/* 0041DA64 01ED4024 */  and   $t0, $t7, $t5
/* 0041DA68 0148C004 */  sllv  $t8, $t0, $t2
/* 0041DA6C 07010007 */  bgez  $t8, .L0041DA8C
/* 0041DA70 02002825 */   move  $a1, $s0
/* 0041DA74 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041DA78 8E240000 */  lw    $a0, ($s1)
/* 0041DA7C 24060006 */  li    $a2, 6
/* 0041DA80 0320F809 */  jalr  $t9
/* 0041DA84 2407000A */   li    $a3, 10
/* 0041DA88 8FBC0028 */  lw    $gp, 0x28($sp)
.L0041DA8C:
/* 0041DA8C 26100001 */  addiu $s0, $s0, 1
/* 0041DA90 321000FF */  andi  $s0, $s0, 0xff
/* 0041DA94 5613FFF0 */  bnel  $s0, $s3, .L0041DA58
/* 0041DA98 8E4F0110 */   lw    $t7, 0x110($s2)
.L0041DA9C:
/* 0041DA9C 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041DAA0 8E240000 */  lw    $a0, ($s1)
/* 0041DAA4 0320F809 */  jalr  $t9
/* 0041DAA8 00000000 */   nop   
/* 0041DAAC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041DAB0 8E4E0114 */  lw    $t6, 0x114($s2)
.L0041DAB4:
/* 0041DAB4 2406000A */  li    $a2, 10
/* 0041DAB8 2407000A */  li    $a3, 10
/* 0041DABC 51C00023 */  beql  $t6, $zero, .L0041DB4C
/* 0041DAC0 8E480128 */   lw    $t0, 0x128($s2)
/* 0041DAC4 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041DAC8 8F858044 */  lw    $a1, %got(RO_1000AC9F)($gp)
/* 0041DACC 8E240000 */  lw    $a0, ($s1)
/* 0041DAD0 0320F809 */  jalr  $t9
/* 0041DAD4 24A5AC9F */   addiu $a1, %lo(RO_1000AC9F) # addiu $a1, $a1, -0x5361
/* 0041DAD8 92820003 */  lbu   $v0, 3($s4)
/* 0041DADC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041DAE0 2C410024 */  sltiu $at, $v0, 0x24
/* 0041DAE4 10200013 */  beqz  $at, .L0041DB34
/* 0041DAE8 305000FF */   andi  $s0, $v0, 0xff
/* 0041DAEC 8E4C0114 */  lw    $t4, 0x114($s2)
.L0041DAF0:
/* 0041DAF0 2609FFF3 */  addiu $t1, $s0, -0xd
/* 0041DAF4 2D390020 */  sltiu $t9, $t1, 0x20
/* 0041DAF8 00195823 */  negu  $t3, $t9
/* 0041DAFC 018B7824 */  and   $t7, $t4, $t3
/* 0041DB00 012F6804 */  sllv  $t5, $t7, $t1
/* 0041DB04 05A10007 */  bgez  $t5, .L0041DB24
/* 0041DB08 02002825 */   move  $a1, $s0
/* 0041DB0C 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041DB10 8E240000 */  lw    $a0, ($s1)
/* 0041DB14 24060006 */  li    $a2, 6
/* 0041DB18 0320F809 */  jalr  $t9
/* 0041DB1C 2407000A */   li    $a3, 10
/* 0041DB20 8FBC0028 */  lw    $gp, 0x28($sp)
.L0041DB24:
/* 0041DB24 26100001 */  addiu $s0, $s0, 1
/* 0041DB28 321000FF */  andi  $s0, $s0, 0xff
/* 0041DB2C 5613FFF0 */  bnel  $s0, $s3, .L0041DAF0
/* 0041DB30 8E4C0114 */   lw    $t4, 0x114($s2)
.L0041DB34:
/* 0041DB34 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041DB38 8E240000 */  lw    $a0, ($s1)
/* 0041DB3C 0320F809 */  jalr  $t9
/* 0041DB40 00000000 */   nop   
/* 0041DB44 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041DB48 8E480128 */  lw    $t0, 0x128($s2)
.L0041DB4C:
/* 0041DB4C 24060008 */  li    $a2, 8
/* 0041DB50 24070008 */  li    $a3, 8
/* 0041DB54 51000023 */  beql  $t0, $zero, .L0041DBE4
/* 0041DB58 8E4F0130 */   lw    $t7, 0x130($s2)
/* 0041DB5C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041DB60 8F858044 */  lw    $a1, %got(RO_1000AC97)($gp)
/* 0041DB64 8E240000 */  lw    $a0, ($s1)
/* 0041DB68 0320F809 */  jalr  $t9
/* 0041DB6C 24A5AC97 */   addiu $a1, %lo(RO_1000AC97) # addiu $a1, $a1, -0x5369
/* 0041DB70 92820003 */  lbu   $v0, 3($s4)
/* 0041DB74 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041DB78 2C410024 */  sltiu $at, $v0, 0x24
/* 0041DB7C 10200013 */  beqz  $at, .L0041DBCC
/* 0041DB80 305000FF */   andi  $s0, $v0, 0xff
/* 0041DB84 8E4A0128 */  lw    $t2, 0x128($s2)
.L0041DB88:
/* 0041DB88 2618FFF3 */  addiu $t8, $s0, -0xd
/* 0041DB8C 2F0E0020 */  sltiu $t6, $t8, 0x20
/* 0041DB90 000EC823 */  negu  $t9, $t6
/* 0041DB94 01596024 */  and   $t4, $t2, $t9
/* 0041DB98 030C5804 */  sllv  $t3, $t4, $t8
/* 0041DB9C 05610007 */  bgez  $t3, .L0041DBBC
/* 0041DBA0 02002825 */   move  $a1, $s0
/* 0041DBA4 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041DBA8 8E240000 */  lw    $a0, ($s1)
/* 0041DBAC 24060006 */  li    $a2, 6
/* 0041DBB0 0320F809 */  jalr  $t9
/* 0041DBB4 2407000A */   li    $a3, 10
/* 0041DBB8 8FBC0028 */  lw    $gp, 0x28($sp)
.L0041DBBC:
/* 0041DBBC 26100001 */  addiu $s0, $s0, 1
/* 0041DBC0 321000FF */  andi  $s0, $s0, 0xff
/* 0041DBC4 5613FFF0 */  bnel  $s0, $s3, .L0041DB88
/* 0041DBC8 8E4A0128 */   lw    $t2, 0x128($s2)
.L0041DBCC:
/* 0041DBCC 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041DBD0 8E240000 */  lw    $a0, ($s1)
/* 0041DBD4 0320F809 */  jalr  $t9
/* 0041DBD8 00000000 */   nop   
/* 0041DBDC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041DBE0 8E4F0130 */  lw    $t7, 0x130($s2)
.L0041DBE4:
/* 0041DBE4 24060009 */  li    $a2, 9
/* 0041DBE8 24070009 */  li    $a3, 9
/* 0041DBEC 51E00023 */  beql  $t7, $zero, .L0041DC7C
/* 0041DBF0 8E4C011C */   lw    $t4, 0x11c($s2)
/* 0041DBF4 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041DBF8 8F858044 */  lw    $a1, %got(RO_1000AC8E)($gp)
/* 0041DBFC 8E240000 */  lw    $a0, ($s1)
/* 0041DC00 0320F809 */  jalr  $t9
/* 0041DC04 24A5AC8E */   addiu $a1, %lo(RO_1000AC8E) # addiu $a1, $a1, -0x5372
/* 0041DC08 92820003 */  lbu   $v0, 3($s4)
/* 0041DC0C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041DC10 2C410024 */  sltiu $at, $v0, 0x24
/* 0041DC14 10200013 */  beqz  $at, .L0041DC64
/* 0041DC18 305000FF */   andi  $s0, $v0, 0xff
/* 0041DC1C 8E490130 */  lw    $t1, 0x130($s2)
.L0041DC20:
/* 0041DC20 260DFFF3 */  addiu $t5, $s0, -0xd
/* 0041DC24 2DA80020 */  sltiu $t0, $t5, 0x20
/* 0041DC28 00087023 */  negu  $t6, $t0
/* 0041DC2C 012E5024 */  and   $t2, $t1, $t6
/* 0041DC30 01AAC804 */  sllv  $t9, $t2, $t5
/* 0041DC34 07210007 */  bgez  $t9, .L0041DC54
/* 0041DC38 02002825 */   move  $a1, $s0
/* 0041DC3C 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041DC40 8E240000 */  lw    $a0, ($s1)
/* 0041DC44 24060006 */  li    $a2, 6
/* 0041DC48 0320F809 */  jalr  $t9
/* 0041DC4C 2407000A */   li    $a3, 10
/* 0041DC50 8FBC0028 */  lw    $gp, 0x28($sp)
.L0041DC54:
/* 0041DC54 26100001 */  addiu $s0, $s0, 1
/* 0041DC58 321000FF */  andi  $s0, $s0, 0xff
/* 0041DC5C 5613FFF0 */  bnel  $s0, $s3, .L0041DC20
/* 0041DC60 8E490130 */   lw    $t1, 0x130($s2)
.L0041DC64:
/* 0041DC64 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041DC68 8E240000 */  lw    $a0, ($s1)
/* 0041DC6C 0320F809 */  jalr  $t9
/* 0041DC70 00000000 */   nop   
/* 0041DC74 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041DC78 8E4C011C */  lw    $t4, 0x11c($s2)
.L0041DC7C:
/* 0041DC7C 2406000D */  li    $a2, 13
/* 0041DC80 2407000D */  li    $a3, 13
/* 0041DC84 51800023 */  beql  $t4, $zero, .L0041DD14
/* 0041DC88 8E4A0120 */   lw    $t2, 0x120($s2)
/* 0041DC8C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041DC90 8F858044 */  lw    $a1, %got(RO_1000AC81)($gp)
/* 0041DC94 8E240000 */  lw    $a0, ($s1)
/* 0041DC98 0320F809 */  jalr  $t9
/* 0041DC9C 24A5AC81 */   addiu $a1, %lo(RO_1000AC81) # addiu $a1, $a1, -0x537f
/* 0041DCA0 92820003 */  lbu   $v0, 3($s4)
/* 0041DCA4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041DCA8 2C410024 */  sltiu $at, $v0, 0x24
/* 0041DCAC 10200013 */  beqz  $at, .L0041DCFC
/* 0041DCB0 305000FF */   andi  $s0, $v0, 0xff
/* 0041DCB4 8E58011C */  lw    $t8, 0x11c($s2)
.L0041DCB8:
/* 0041DCB8 260BFFF3 */  addiu $t3, $s0, -0xd
/* 0041DCBC 2D6F0020 */  sltiu $t7, $t3, 0x20
/* 0041DCC0 000F4023 */  negu  $t0, $t7
/* 0041DCC4 03084824 */  and   $t1, $t8, $t0
/* 0041DCC8 01697004 */  sllv  $t6, $t1, $t3
/* 0041DCCC 05C10007 */  bgez  $t6, .L0041DCEC
/* 0041DCD0 02002825 */   move  $a1, $s0
/* 0041DCD4 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041DCD8 8E240000 */  lw    $a0, ($s1)
/* 0041DCDC 24060006 */  li    $a2, 6
/* 0041DCE0 0320F809 */  jalr  $t9
/* 0041DCE4 2407000A */   li    $a3, 10
/* 0041DCE8 8FBC0028 */  lw    $gp, 0x28($sp)
.L0041DCEC:
/* 0041DCEC 26100001 */  addiu $s0, $s0, 1
/* 0041DCF0 321000FF */  andi  $s0, $s0, 0xff
/* 0041DCF4 5613FFF0 */  bnel  $s0, $s3, .L0041DCB8
/* 0041DCF8 8E58011C */   lw    $t8, 0x11c($s2)
.L0041DCFC:
/* 0041DCFC 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041DD00 8E240000 */  lw    $a0, ($s1)
/* 0041DD04 0320F809 */  jalr  $t9
/* 0041DD08 00000000 */   nop   
/* 0041DD0C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041DD10 8E4A0120 */  lw    $t2, 0x120($s2)
.L0041DD14:
/* 0041DD14 2406000E */  li    $a2, 14
/* 0041DD18 2407000E */  li    $a3, 14
/* 0041DD1C 51400023 */  beql  $t2, $zero, .L0041DDAC
/* 0041DD20 8E52000C */   lw    $s2, 0xc($s2)
/* 0041DD24 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041DD28 8F858044 */  lw    $a1, %got(RO_1000AC73)($gp)
/* 0041DD2C 8E240000 */  lw    $a0, ($s1)
/* 0041DD30 0320F809 */  jalr  $t9
/* 0041DD34 24A5AC73 */   addiu $a1, %lo(RO_1000AC73) # addiu $a1, $a1, -0x538d
/* 0041DD38 92820003 */  lbu   $v0, 3($s4)
/* 0041DD3C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041DD40 2C410024 */  sltiu $at, $v0, 0x24
/* 0041DD44 10200013 */  beqz  $at, .L0041DD94
/* 0041DD48 305000FF */   andi  $s0, $v0, 0xff
/* 0041DD4C 8E4D0120 */  lw    $t5, 0x120($s2)
.L0041DD50:
/* 0041DD50 2619FFF3 */  addiu $t9, $s0, -0xd
/* 0041DD54 2F2C0020 */  sltiu $t4, $t9, 0x20
/* 0041DD58 000C7823 */  negu  $t7, $t4
/* 0041DD5C 01AFC024 */  and   $t8, $t5, $t7
/* 0041DD60 03384004 */  sllv  $t0, $t8, $t9
/* 0041DD64 05010007 */  bgez  $t0, .L0041DD84
/* 0041DD68 02002825 */   move  $a1, $s0
/* 0041DD6C 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041DD70 8E240000 */  lw    $a0, ($s1)
/* 0041DD74 24060006 */  li    $a2, 6
/* 0041DD78 0320F809 */  jalr  $t9
/* 0041DD7C 2407000A */   li    $a3, 10
/* 0041DD80 8FBC0028 */  lw    $gp, 0x28($sp)
.L0041DD84:
/* 0041DD84 26100001 */  addiu $s0, $s0, 1
/* 0041DD88 321000FF */  andi  $s0, $s0, 0xff
/* 0041DD8C 5613FFF0 */  bnel  $s0, $s3, .L0041DD50
/* 0041DD90 8E4D0120 */   lw    $t5, 0x120($s2)
.L0041DD94:
/* 0041DD94 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041DD98 8E240000 */  lw    $a0, ($s1)
/* 0041DD9C 0320F809 */  jalr  $t9
/* 0041DDA0 00000000 */   nop   
/* 0041DDA4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0041DDA8 8E52000C */  lw    $s2, 0xc($s2)
.L0041DDAC:
/* 0041DDAC 1640FE84 */  bnez  $s2, .L0041D7C0
/* 0041DDB0 00000000 */   nop   
/* 0041DDB4 8FBF002C */  lw    $ra, 0x2c($sp)
.L0041DDB8:
/* 0041DDB8 8FB00014 */  lw    $s0, 0x14($sp)
/* 0041DDBC 8FB10018 */  lw    $s1, 0x18($sp)
/* 0041DDC0 8FB2001C */  lw    $s2, 0x1c($sp)
/* 0041DDC4 8FB30020 */  lw    $s3, 0x20($sp)
/* 0041DDC8 8FB40024 */  lw    $s4, 0x24($sp)
/* 0041DDCC 03E00008 */  jr    $ra
/* 0041DDD0 27BD0030 */   addiu $sp, $sp, 0x30
    .type printsav, @function
    .size printsav, .-printsav
    .end printsav

glabel printstat
    .ent printstat
    # 0045806C main
/* 0041DDD4 3C1C0FC0 */  .cpload $t9
/* 0041DDD8 279CC4BC */  
/* 0041DDDC 0399E021 */  
/* 0041DDE0 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0041DDE4 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041DDE8 AFB00014 */  sw    $s0, 0x14($sp)
/* 0041DDEC 8F908CCC */  lw     $s0, %got(list)($gp)
/* 0041DDF0 8F858044 */  lw    $a1, %got(RO_1000AEAC)($gp)
/* 0041DDF4 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0041DDF8 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0041DDFC 24060008 */  li    $a2, 8
/* 0041DE00 24070008 */  li    $a3, 8
/* 0041DE04 8E040000 */  lw    $a0, ($s0)
/* 0041DE08 0320F809 */  jalr  $t9
/* 0041DE0C 24A5AEAC */   addiu $a1, %lo(RO_1000AEAC) # addiu $a1, $a1, -0x5154
/* 0041DE10 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041DE14 8E040000 */  lw    $a0, ($s0)
/* 0041DE18 2406000C */  li    $a2, 12
/* 0041DE1C 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041DE20 8F858B7C */  lw     $a1, %got(numlcse)($gp)
/* 0041DE24 2407000A */  li    $a3, 10
/* 0041DE28 0320F809 */  jalr  $t9
/* 0041DE2C 8CA50000 */   lw    $a1, ($a1)
/* 0041DE30 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041DE34 8E040000 */  lw    $a0, ($s0)
/* 0041DE38 2406000B */  li    $a2, 11
/* 0041DE3C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041DE40 8F858044 */  lw    $a1, %got(RO_1000AEA1)($gp)
/* 0041DE44 2407000B */  li    $a3, 11
/* 0041DE48 0320F809 */  jalr  $t9
/* 0041DE4C 24A5AEA1 */   addiu $a1, %lo(RO_1000AEA1) # addiu $a1, $a1, -0x515f
/* 0041DE50 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041DE54 8E040000 */  lw    $a0, ($s0)
/* 0041DE58 2406000C */  li    $a2, 12
/* 0041DE5C 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041DE60 8F858B80 */  lw     $a1, %got(numlrdstr)($gp)
/* 0041DE64 2407000A */  li    $a3, 10
/* 0041DE68 0320F809 */  jalr  $t9
/* 0041DE6C 8CA50000 */   lw    $a1, ($a1)
/* 0041DE70 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041DE74 8E040000 */  lw    $a0, ($s0)
/* 0041DE78 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041DE7C 0320F809 */  jalr  $t9
/* 0041DE80 00000000 */   nop   
/* 0041DE84 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041DE88 8E040000 */  lw    $a0, ($s0)
/* 0041DE8C 24060009 */  li    $a2, 9
/* 0041DE90 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041DE94 8F858044 */  lw    $a1, %got(RO_1000AE98)($gp)
/* 0041DE98 24070009 */  li    $a3, 9
/* 0041DE9C 0320F809 */  jalr  $t9
/* 0041DEA0 24A5AE98 */   addiu $a1, %lo(RO_1000AE98) # addiu $a1, $a1, -0x5168
/* 0041DEA4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041DEA8 8E040000 */  lw    $a0, ($s0)
/* 0041DEAC 2406000C */  li    $a2, 12
/* 0041DEB0 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041DEB4 8F858B84 */  lw     $a1, %got(numgcopy)($gp)
/* 0041DEB8 2407000A */  li    $a3, 10
/* 0041DEBC 0320F809 */  jalr  $t9
/* 0041DEC0 8CA50000 */   lw    $a1, ($a1)
/* 0041DEC4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041DEC8 8E040000 */  lw    $a0, ($s0)
/* 0041DECC 2406000A */  li    $a2, 10
/* 0041DED0 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041DED4 8F858044 */  lw    $a1, %got(RO_1000AE8E)($gp)
/* 0041DED8 2407000A */  li    $a3, 10
/* 0041DEDC 0320F809 */  jalr  $t9
/* 0041DEE0 24A5AE8E */   addiu $a1, %lo(RO_1000AE8E) # addiu $a1, $a1, -0x5172
/* 0041DEE4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041DEE8 8E040000 */  lw    $a0, ($s0)
/* 0041DEEC 2406000C */  li    $a2, 12
/* 0041DEF0 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041DEF4 8F858B88 */  lw     $a1, %got(numrdstr)($gp)
/* 0041DEF8 2407000A */  li    $a3, 10
/* 0041DEFC 0320F809 */  jalr  $t9
/* 0041DF00 8CA50000 */   lw    $a1, ($a1)
/* 0041DF04 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041DF08 8E040000 */  lw    $a0, ($s0)
/* 0041DF0C 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041DF10 0320F809 */  jalr  $t9
/* 0041DF14 00000000 */   nop   
/* 0041DF18 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041DF1C 8E040000 */  lw    $a0, ($s0)
/* 0041DF20 24060008 */  li    $a2, 8
/* 0041DF24 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041DF28 8F858044 */  lw    $a1, %got(RO_1000AE86)($gp)
/* 0041DF2C 24070008 */  li    $a3, 8
/* 0041DF30 0320F809 */  jalr  $t9
/* 0041DF34 24A5AE86 */   addiu $a1, %lo(RO_1000AE86) # addiu $a1, $a1, -0x517a
/* 0041DF38 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041DF3C 8E040000 */  lw    $a0, ($s0)
/* 0041DF40 2406000C */  li    $a2, 12
/* 0041DF44 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041DF48 8F858B8C */  lw     $a1, %got(numgcse)($gp)
/* 0041DF4C 2407000A */  li    $a3, 10
/* 0041DF50 0320F809 */  jalr  $t9
/* 0041DF54 8CA50000 */   lw    $a1, ($a1)
/* 0041DF58 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041DF5C 8E040000 */  lw    $a0, ($s0)
/* 0041DF60 2406000B */  li    $a2, 11
/* 0041DF64 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041DF68 8F858044 */  lw    $a1, %got(RO_1000AE7B)($gp)
/* 0041DF6C 2407000B */  li    $a3, 11
/* 0041DF70 0320F809 */  jalr  $t9
/* 0041DF74 24A5AE7B */   addiu $a1, %lo(RO_1000AE7B) # addiu $a1, $a1, -0x5185
/* 0041DF78 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041DF7C 8E040000 */  lw    $a0, ($s0)
/* 0041DF80 2406000C */  li    $a2, 12
/* 0041DF84 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041DF88 8F858B90 */  lw     $a1, %got(numinsert)($gp)
/* 0041DF8C 2407000A */  li    $a3, 10
/* 0041DF90 0320F809 */  jalr  $t9
/* 0041DF94 8CA50000 */   lw    $a1, ($a1)
/* 0041DF98 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041DF9C 8E040000 */  lw    $a0, ($s0)
/* 0041DFA0 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041DFA4 0320F809 */  jalr  $t9
/* 0041DFA8 00000000 */   nop   
/* 0041DFAC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041DFB0 8E040000 */  lw    $a0, ($s0)
/* 0041DFB4 2406000A */  li    $a2, 10
/* 0041DFB8 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041DFBC 8F858044 */  lw    $a1, %got(RO_1000AE71)($gp)
/* 0041DFC0 2407000A */  li    $a3, 10
/* 0041DFC4 0320F809 */  jalr  $t9
/* 0041DFC8 24A5AE71 */   addiu $a1, %lo(RO_1000AE71) # addiu $a1, $a1, -0x518f
/* 0041DFCC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041DFD0 8E040000 */  lw    $a0, ($s0)
/* 0041DFD4 2406000C */  li    $a2, 12
/* 0041DFD8 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041DFDC 8F858B94 */  lw     $a1, %got(numtstrep)($gp)
/* 0041DFE0 2407000A */  li    $a3, 10
/* 0041DFE4 0320F809 */  jalr  $t9
/* 0041DFE8 8CA50000 */   lw    $a1, ($a1)
/* 0041DFEC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041DFF0 8E040000 */  lw    $a0, ($s0)
/* 0041DFF4 2406000A */  li    $a2, 10
/* 0041DFF8 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041DFFC 8F858044 */  lw    $a1, %got(RO_1000AE67)($gp)
/* 0041E000 2407000A */  li    $a3, 10
/* 0041E004 0320F809 */  jalr  $t9
/* 0041E008 24A5AE67 */   addiu $a1, %lo(RO_1000AE67) # addiu $a1, $a1, -0x5199
/* 0041E00C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E010 8E040000 */  lw    $a0, ($s0)
/* 0041E014 2406000C */  li    $a2, 12
/* 0041E018 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041E01C 8F858B98 */  lw     $a1, %got(numsrinc)($gp)
/* 0041E020 2407000A */  li    $a3, 10
/* 0041E024 0320F809 */  jalr  $t9
/* 0041E028 8CA50000 */   lw    $a1, ($a1)
/* 0041E02C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E030 8E040000 */  lw    $a0, ($s0)
/* 0041E034 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041E038 0320F809 */  jalr  $t9
/* 0041E03C 00000000 */   nop   
/* 0041E040 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E044 8E040000 */  lw    $a0, ($s0)
/* 0041E048 2406000E */  li    $a2, 14
/* 0041E04C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041E050 8F858044 */  lw    $a1, %got(RO_1000AE59)($gp)
/* 0041E054 2407000E */  li    $a3, 14
/* 0041E058 0320F809 */  jalr  $t9
/* 0041E05C 24A5AE59 */   addiu $a1, %lo(RO_1000AE59) # addiu $a1, $a1, -0x51a7
/* 0041E060 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E064 8E040000 */  lw    $a0, ($s0)
/* 0041E068 2406000C */  li    $a2, 12
/* 0041E06C 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041E070 8F858B9C */  lw     $a1, %got(numexpr)($gp)
/* 0041E074 2407000A */  li    $a3, 10
/* 0041E078 0320F809 */  jalr  $t9
/* 0041E07C 8CA50000 */   lw    $a1, ($a1)
/* 0041E080 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E084 8E040000 */  lw    $a0, ($s0)
/* 0041E088 24060008 */  li    $a2, 8
/* 0041E08C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041E090 8F858044 */  lw    $a1, %got(RO_1000AE51)($gp)
/* 0041E094 24070008 */  li    $a3, 8
/* 0041E098 0320F809 */  jalr  $t9
/* 0041E09C 24A5AE51 */   addiu $a1, %lo(RO_1000AE51) # addiu $a1, $a1, -0x51af
/* 0041E0A0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E0A4 8E040000 */  lw    $a0, ($s0)
/* 0041E0A8 2406000C */  li    $a2, 12
/* 0041E0AC 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041E0B0 8F858BA0 */  lw     $a1, %got(numstr)($gp)
/* 0041E0B4 2407000A */  li    $a3, 10
/* 0041E0B8 0320F809 */  jalr  $t9
/* 0041E0BC 8CA50000 */   lw    $a1, ($a1)
/* 0041E0C0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E0C4 8E040000 */  lw    $a0, ($s0)
/* 0041E0C8 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041E0CC 0320F809 */  jalr  $t9
/* 0041E0D0 00000000 */   nop   
/* 0041E0D4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E0D8 8E040000 */  lw    $a0, ($s0)
/* 0041E0DC 2406000A */  li    $a2, 10
/* 0041E0E0 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041E0E4 8F858044 */  lw    $a1, %got(RO_1000AE47)($gp)
/* 0041E0E8 2407000A */  li    $a3, 10
/* 0041E0EC 0320F809 */  jalr  $t9
/* 0041E0F0 24A5AE47 */   addiu $a1, %lo(RO_1000AE47) # addiu $a1, $a1, -0x51b9
/* 0041E0F4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E0F8 8E040000 */  lw    $a0, ($s0)
/* 0041E0FC 2406000C */  li    $a2, 12
/* 0041E100 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041E104 8F858BA4 */  lw     $a1, %got(totvarref)($gp)
/* 0041E108 2407000A */  li    $a3, 10
/* 0041E10C 0320F809 */  jalr  $t9
/* 0041E110 8CA50000 */   lw    $a1, ($a1)
/* 0041E114 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E118 8E040000 */  lw    $a0, ($s0)
/* 0041E11C 2406000C */  li    $a2, 12
/* 0041E120 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041E124 8F858044 */  lw    $a1, %got(RO_1000AE3B)($gp)
/* 0041E128 2407000C */  li    $a3, 12
/* 0041E12C 0320F809 */  jalr  $t9
/* 0041E130 24A5AE3B */   addiu $a1, %lo(RO_1000AE3B) # addiu $a1, $a1, -0x51c5
/* 0041E134 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E138 8E040000 */  lw    $a0, ($s0)
/* 0041E13C 2406000C */  li    $a2, 12
/* 0041E140 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041E144 8F858BA8 */  lw     $a1, %got(totvarrref)($gp)
/* 0041E148 2407000A */  li    $a3, 10
/* 0041E14C 0320F809 */  jalr  $t9
/* 0041E150 8CA50000 */   lw    $a1, ($a1)
/* 0041E154 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E158 8E040000 */  lw    $a0, ($s0)
/* 0041E15C 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041E160 0320F809 */  jalr  $t9
/* 0041E164 00000000 */   nop   
/* 0041E168 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E16C 8E040000 */  lw    $a0, ($s0)
/* 0041E170 2406000A */  li    $a2, 10
/* 0041E174 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041E178 8F858044 */  lw    $a1, %got(RO_1000AE31)($gp)
/* 0041E17C 2407000A */  li    $a3, 10
/* 0041E180 0320F809 */  jalr  $t9
/* 0041E184 24A5AE31 */   addiu $a1, %lo(RO_1000AE31) # addiu $a1, $a1, -0x51cf
/* 0041E188 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E18C 8E040000 */  lw    $a0, ($s0)
/* 0041E190 2406000C */  li    $a2, 12
/* 0041E194 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041E198 8F858BAC */  lw     $a1, %got(totvarsav)($gp)
/* 0041E19C 2407000A */  li    $a3, 10
/* 0041E1A0 0320F809 */  jalr  $t9
/* 0041E1A4 8CA50000 */   lw    $a1, ($a1)
/* 0041E1A8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E1AC 8E040000 */  lw    $a0, ($s0)
/* 0041E1B0 2406000C */  li    $a2, 12
/* 0041E1B4 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041E1B8 8F858044 */  lw    $a1, %got(RO_1000AE25)($gp)
/* 0041E1BC 2407000C */  li    $a3, 12
/* 0041E1C0 0320F809 */  jalr  $t9
/* 0041E1C4 24A5AE25 */   addiu $a1, %lo(RO_1000AE25) # addiu $a1, $a1, -0x51db
/* 0041E1C8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E1CC 8E040000 */  lw    $a0, ($s0)
/* 0041E1D0 2406000C */  li    $a2, 12
/* 0041E1D4 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041E1D8 8F858BB0 */  lw     $a1, %got(totvarrsav)($gp)
/* 0041E1DC 2407000A */  li    $a3, 10
/* 0041E1E0 0320F809 */  jalr  $t9
/* 0041E1E4 8CA50000 */   lw    $a1, ($a1)
/* 0041E1E8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E1EC 8E040000 */  lw    $a0, ($s0)
/* 0041E1F0 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041E1F4 0320F809 */  jalr  $t9
/* 0041E1F8 00000000 */   nop   
/* 0041E1FC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E200 8E040000 */  lw    $a0, ($s0)
/* 0041E204 2406000A */  li    $a2, 10
/* 0041E208 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041E20C 8F858044 */  lw    $a1, %got(RO_1000AE1B)($gp)
/* 0041E210 2407000A */  li    $a3, 10
/* 0041E214 0320F809 */  jalr  $t9
/* 0041E218 24A5AE1B */   addiu $a1, %lo(RO_1000AE1B) # addiu $a1, $a1, -0x51e5
/* 0041E21C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E220 8E040000 */  lw    $a0, ($s0)
/* 0041E224 2406000C */  li    $a2, 12
/* 0041E228 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041E22C 8F858BB4 */  lw     $a1, %got(totexpref)($gp)
/* 0041E230 2407000A */  li    $a3, 10
/* 0041E234 0320F809 */  jalr  $t9
/* 0041E238 8CA50000 */   lw    $a1, ($a1)
/* 0041E23C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E240 8E040000 */  lw    $a0, ($s0)
/* 0041E244 2406000C */  li    $a2, 12
/* 0041E248 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041E24C 8F858044 */  lw    $a1, %got(RO_1000AE0F)($gp)
/* 0041E250 2407000C */  li    $a3, 12
/* 0041E254 0320F809 */  jalr  $t9
/* 0041E258 24A5AE0F */   addiu $a1, %lo(RO_1000AE0F) # addiu $a1, $a1, -0x51f1
/* 0041E25C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E260 8E040000 */  lw    $a0, ($s0)
/* 0041E264 2406000C */  li    $a2, 12
/* 0041E268 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041E26C 8F858BB8 */  lw     $a1, %got(totexprref)($gp)
/* 0041E270 2407000A */  li    $a3, 10
/* 0041E274 0320F809 */  jalr  $t9
/* 0041E278 8CA50000 */   lw    $a1, ($a1)
/* 0041E27C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E280 8E040000 */  lw    $a0, ($s0)
/* 0041E284 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041E288 0320F809 */  jalr  $t9
/* 0041E28C 00000000 */   nop   
/* 0041E290 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E294 8E040000 */  lw    $a0, ($s0)
/* 0041E298 2406000A */  li    $a2, 10
/* 0041E29C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041E2A0 8F858044 */  lw    $a1, %got(RO_1000AE05)($gp)
/* 0041E2A4 2407000A */  li    $a3, 10
/* 0041E2A8 0320F809 */  jalr  $t9
/* 0041E2AC 24A5AE05 */   addiu $a1, %lo(RO_1000AE05) # addiu $a1, $a1, -0x51fb
/* 0041E2B0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E2B4 8E040000 */  lw    $a0, ($s0)
/* 0041E2B8 2406000C */  li    $a2, 12
/* 0041E2BC 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041E2C0 8F858BBC */  lw     $a1, %got(totexpsav)($gp)
/* 0041E2C4 2407000A */  li    $a3, 10
/* 0041E2C8 0320F809 */  jalr  $t9
/* 0041E2CC 8CA50000 */   lw    $a1, ($a1)
/* 0041E2D0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E2D4 8E040000 */  lw    $a0, ($s0)
/* 0041E2D8 2406000C */  li    $a2, 12
/* 0041E2DC 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041E2E0 8F858044 */  lw    $a1, %got(RO_1000ADF9)($gp)
/* 0041E2E4 2407000C */  li    $a3, 12
/* 0041E2E8 0320F809 */  jalr  $t9
/* 0041E2EC 24A5ADF9 */   addiu $a1, %lo(RO_1000ADF9) # addiu $a1, $a1, -0x5207
/* 0041E2F0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E2F4 8E040000 */  lw    $a0, ($s0)
/* 0041E2F8 2406000C */  li    $a2, 12
/* 0041E2FC 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041E300 8F858BC0 */  lw     $a1, %got(totexprsav)($gp)
/* 0041E304 2407000A */  li    $a3, 10
/* 0041E308 0320F809 */  jalr  $t9
/* 0041E30C 8CA50000 */   lw    $a1, ($a1)
/* 0041E310 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E314 8E040000 */  lw    $a0, ($s0)
/* 0041E318 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041E31C 0320F809 */  jalr  $t9
/* 0041E320 00000000 */   nop   
/* 0041E324 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E328 8E040000 */  lw    $a0, ($s0)
/* 0041E32C 2406000C */  li    $a2, 12
/* 0041E330 8F8E8BC4 */  lw     $t6, %got(totvarrlods)($gp)
/* 0041E334 8F8F8BCC */  lw     $t7, %got(totexprlods)($gp)
/* 0041E338 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041E33C 8DCE0000 */  lw    $t6, ($t6)
/* 0041E340 8DEF0000 */  lw    $t7, ($t7)
/* 0041E344 2407000A */  li    $a3, 10
/* 0041E348 0320F809 */  jalr  $t9
/* 0041E34C 01CF2821 */   addu  $a1, $t6, $t7
/* 0041E350 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E354 8E040000 */  lw    $a0, ($s0)
/* 0041E358 24060006 */  li    $a2, 6
/* 0041E35C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041E360 8F858044 */  lw    $a1, %got(RO_1000ADF3)($gp)
/* 0041E364 24070006 */  li    $a3, 6
/* 0041E368 0320F809 */  jalr  $t9
/* 0041E36C 24A5ADF3 */   addiu $a1, %lo(RO_1000ADF3) # addiu $a1, $a1, -0x520d
/* 0041E370 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E374 8E040000 */  lw    $a0, ($s0)
/* 0041E378 2406000C */  li    $a2, 12
/* 0041E37C 8F988BC8 */  lw     $t8, %got(totvarrstrs)($gp)
/* 0041E380 8F998BD0 */  lw     $t9, %got(totexprstrs)($gp)
/* 0041E384 2407000A */  li    $a3, 10
/* 0041E388 8F180000 */  lw    $t8, ($t8)
/* 0041E38C 8F390000 */  lw    $t9, ($t9)
/* 0041E390 03192821 */  addu  $a1, $t8, $t9
/* 0041E394 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041E398 0320F809 */  jalr  $t9
/* 0041E39C 00000000 */   nop   
/* 0041E3A0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E3A4 8E040000 */  lw    $a0, ($s0)
/* 0041E3A8 24060006 */  li    $a2, 6
/* 0041E3AC 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041E3B0 8F858044 */  lw    $a1, %got(RO_1000ADED)($gp)
/* 0041E3B4 24070006 */  li    $a3, 6
/* 0041E3B8 0320F809 */  jalr  $t9
/* 0041E3BC 24A5ADED */   addiu $a1, %lo(RO_1000ADED) # addiu $a1, $a1, -0x5213
/* 0041E3C0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E3C4 8E040000 */  lw    $a0, ($s0)
/* 0041E3C8 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041E3CC 0320F809 */  jalr  $t9
/* 0041E3D0 00000000 */   nop   
/* 0041E3D4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E3D8 8E040000 */  lw    $a0, ($s0)
/* 0041E3DC 24060009 */  li    $a2, 9
/* 0041E3E0 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041E3E4 8F858044 */  lw    $a1, %got(RO_1000ADE4)($gp)
/* 0041E3E8 24070009 */  li    $a3, 9
/* 0041E3EC 0320F809 */  jalr  $t9
/* 0041E3F0 24A5ADE4 */   addiu $a1, %lo(RO_1000ADE4) # addiu $a1, $a1, -0x521c
/* 0041E3F4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E3F8 8E040000 */  lw    $a0, ($s0)
/* 0041E3FC 2406000C */  li    $a2, 12
/* 0041E400 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041E404 8F858C00 */  lw     $a1, %got(numcalls)($gp)
/* 0041E408 2407000A */  li    $a3, 10
/* 0041E40C 0320F809 */  jalr  $t9
/* 0041E410 8CA50000 */   lw    $a1, ($a1)
/* 0041E414 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E418 8E040000 */  lw    $a0, ($s0)
/* 0041E41C 2406000A */  li    $a2, 10
/* 0041E420 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041E424 8F858044 */  lw    $a1, %got(RO_1000ADDA)($gp)
/* 0041E428 2407000A */  li    $a3, 10
/* 0041E42C 0320F809 */  jalr  $t9
/* 0041E430 24A5ADDA */   addiu $a1, %lo(RO_1000ADDA) # addiu $a1, $a1, -0x5226
/* 0041E434 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E438 8E040000 */  lw    $a0, ($s0)
/* 0041E43C 2406000C */  li    $a2, 12
/* 0041E440 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041E444 8F858C04 */  lw     $a1, %got(contiglr)($gp)
/* 0041E448 2407000A */  li    $a3, 10
/* 0041E44C 0320F809 */  jalr  $t9
/* 0041E450 8CA50000 */   lw    $a1, ($a1)
/* 0041E454 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E458 8E040000 */  lw    $a0, ($s0)
/* 0041E45C 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041E460 0320F809 */  jalr  $t9
/* 0041E464 00000000 */   nop   
/* 0041E468 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E46C 8E040000 */  lw    $a0, ($s0)
/* 0041E470 2406000A */  li    $a2, 10
/* 0041E474 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041E478 8F858044 */  lw    $a1, %got(RO_1000ADD0)($gp)
/* 0041E47C 2407000A */  li    $a3, 10
/* 0041E480 0320F809 */  jalr  $t9
/* 0041E484 24A5ADD0 */   addiu $a1, %lo(RO_1000ADD0) # addiu $a1, $a1, -0x5230
/* 0041E488 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E48C 8E040000 */  lw    $a0, ($s0)
/* 0041E490 2406000C */  li    $a2, 12
/* 0041E494 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041E498 8F858C08 */  lw     $a1, %got(aliasedlr)($gp)
/* 0041E49C 2407000A */  li    $a3, 10
/* 0041E4A0 0320F809 */  jalr  $t9
/* 0041E4A4 8CA50000 */   lw    $a1, ($a1)
/* 0041E4A8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E4AC 8E040000 */  lw    $a0, ($s0)
/* 0041E4B0 2406000B */  li    $a2, 11
/* 0041E4B4 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041E4B8 8F858044 */  lw    $a1, %got(RO_1000ADC5)($gp)
/* 0041E4BC 2407000B */  li    $a3, 11
/* 0041E4C0 0320F809 */  jalr  $t9
/* 0041E4C4 24A5ADC5 */   addiu $a1, %lo(RO_1000ADC5) # addiu $a1, $a1, -0x523b
/* 0041E4C8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E4CC 8E040000 */  lw    $a0, ($s0)
/* 0041E4D0 2406000C */  li    $a2, 12
/* 0041E4D4 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041E4D8 8F858C0C */  lw     $a1, %got(aliasedlu)($gp)
/* 0041E4DC 2407000A */  li    $a3, 10
/* 0041E4E0 0320F809 */  jalr  $t9
/* 0041E4E4 8CA50000 */   lw    $a1, ($a1)
/* 0041E4E8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E4EC 8E040000 */  lw    $a0, ($s0)
/* 0041E4F0 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041E4F4 0320F809 */  jalr  $t9
/* 0041E4F8 00000000 */   nop   
/* 0041E4FC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E500 8E040000 */  lw    $a0, ($s0)
/* 0041E504 24060006 */  li    $a2, 6
/* 0041E508 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041E50C 8F858044 */  lw    $a1, %got(RO_1000ADBF)($gp)
/* 0041E510 24070006 */  li    $a3, 6
/* 0041E514 0320F809 */  jalr  $t9
/* 0041E518 24A5ADBF */   addiu $a1, %lo(RO_1000ADBF) # addiu $a1, $a1, -0x5241
/* 0041E51C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E520 8E040000 */  lw    $a0, ($s0)
/* 0041E524 2406000C */  li    $a2, 12
/* 0041E528 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041E52C 8F858BEC */  lw     $a1, %got(numlr)($gp)
/* 0041E530 2407000A */  li    $a3, 10
/* 0041E534 0320F809 */  jalr  $t9
/* 0041E538 8CA50000 */   lw    $a1, ($a1)
/* 0041E53C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E540 8E040000 */  lw    $a0, ($s0)
/* 0041E544 2406000C */  li    $a2, 12
/* 0041E548 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041E54C 8F858044 */  lw    $a1, %got(RO_1000ADB3)($gp)
/* 0041E550 2407000C */  li    $a3, 12
/* 0041E554 0320F809 */  jalr  $t9
/* 0041E558 24A5ADB3 */   addiu $a1, %lo(RO_1000ADB3) # addiu $a1, $a1, -0x524d
/* 0041E55C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E560 8E040000 */  lw    $a0, ($s0)
/* 0041E564 2406000C */  li    $a2, 12
/* 0041E568 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041E56C 8F858BF0 */  lw     $a1, %got(finalnumlr)($gp)
/* 0041E570 2407000A */  li    $a3, 10
/* 0041E574 0320F809 */  jalr  $t9
/* 0041E578 8CA50000 */   lw    $a1, ($a1)
/* 0041E57C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E580 8E040000 */  lw    $a0, ($s0)
/* 0041E584 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041E588 0320F809 */  jalr  $t9
/* 0041E58C 00000000 */   nop   
/* 0041E590 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E594 8E040000 */  lw    $a0, ($s0)
/* 0041E598 24060006 */  li    $a2, 6
/* 0041E59C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041E5A0 8F858044 */  lw    $a1, %got(RO_1000ADAD)($gp)
/* 0041E5A4 24070006 */  li    $a3, 6
/* 0041E5A8 0320F809 */  jalr  $t9
/* 0041E5AC 24A5ADAD */   addiu $a1, %lo(RO_1000ADAD) # addiu $a1, $a1, -0x5253
/* 0041E5B0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E5B4 8E040000 */  lw    $a0, ($s0)
/* 0041E5B8 2406000C */  li    $a2, 12
/* 0041E5BC 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041E5C0 8F858BF4 */  lw     $a1, %got(numlu)($gp)
/* 0041E5C4 2407000A */  li    $a3, 10
/* 0041E5C8 0320F809 */  jalr  $t9
/* 0041E5CC 8CA50000 */   lw    $a1, ($a1)
/* 0041E5D0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E5D4 8E040000 */  lw    $a0, ($s0)
/* 0041E5D8 2406000C */  li    $a2, 12
/* 0041E5DC 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041E5E0 8F858044 */  lw    $a1, %got(RO_1000ADA1)($gp)
/* 0041E5E4 2407000C */  li    $a3, 12
/* 0041E5E8 0320F809 */  jalr  $t9
/* 0041E5EC 24A5ADA1 */   addiu $a1, %lo(RO_1000ADA1) # addiu $a1, $a1, -0x525f
/* 0041E5F0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E5F4 8E040000 */  lw    $a0, ($s0)
/* 0041E5F8 2406000C */  li    $a2, 12
/* 0041E5FC 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041E600 8F858BFC */  lw     $a1, %got(numsplitlu)($gp)
/* 0041E604 2407000A */  li    $a3, 10
/* 0041E608 0320F809 */  jalr  $t9
/* 0041E60C 8CA50000 */   lw    $a1, ($a1)
/* 0041E610 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E614 8E040000 */  lw    $a0, ($s0)
/* 0041E618 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041E61C 0320F809 */  jalr  $t9
/* 0041E620 00000000 */   nop   
/* 0041E624 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E628 8E040000 */  lw    $a0, ($s0)
/* 0041E62C 24060006 */  li    $a2, 6
/* 0041E630 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041E634 8F858044 */  lw    $a1, %got(RO_1000AD9B)($gp)
/* 0041E638 24070006 */  li    $a3, 6
/* 0041E63C 0320F809 */  jalr  $t9
/* 0041E640 24A5AD9B */   addiu $a1, %lo(RO_1000AD9B) # addiu $a1, $a1, -0x5265
/* 0041E644 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E648 8E040000 */  lw    $a0, ($s0)
/* 0041E64C 2406000C */  li    $a2, 12
/* 0041E650 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041E654 8F858BF8 */  lw     $a1, %got(numoc)($gp)
/* 0041E658 2407000A */  li    $a3, 10
/* 0041E65C 0320F809 */  jalr  $t9
/* 0041E660 8CA50000 */   lw    $a1, ($a1)
/* 0041E664 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E668 8E040000 */  lw    $a0, ($s0)
/* 0041E66C 24060008 */  li    $a2, 8
/* 0041E670 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041E674 8F858044 */  lw    $a1, %got(RO_1000AD93)($gp)
/* 0041E678 24070008 */  li    $a3, 8
/* 0041E67C 0320F809 */  jalr  $t9
/* 0041E680 24A5AD93 */   addiu $a1, %lo(RO_1000AD93) # addiu $a1, $a1, -0x526d
/* 0041E684 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E688 8E040000 */  lw    $a0, ($s0)
/* 0041E68C 2406000C */  li    $a2, 12
/* 0041E690 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041E694 8F858C2C */  lw     $a1, %got(allococ)($gp)
/* 0041E698 2407000A */  li    $a3, 10
/* 0041E69C 0320F809 */  jalr  $t9
/* 0041E6A0 8CA50000 */   lw    $a1, ($a1)
/* 0041E6A4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E6A8 8E040000 */  lw    $a0, ($s0)
/* 0041E6AC 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041E6B0 0320F809 */  jalr  $t9
/* 0041E6B4 00000000 */   nop   
/* 0041E6B8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E6BC 8E040000 */  lw    $a0, ($s0)
/* 0041E6C0 2406000D */  li    $a2, 13
/* 0041E6C4 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041E6C8 8F858044 */  lw    $a1, %got(RO_1000AD86)($gp)
/* 0041E6CC 2407000D */  li    $a3, 13
/* 0041E6D0 0320F809 */  jalr  $t9
/* 0041E6D4 24A5AD86 */   addiu $a1, %lo(RO_1000AD86) # addiu $a1, $a1, -0x527a
/* 0041E6D8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E6DC 8E040000 */  lw    $a0, ($s0)
/* 0041E6E0 2406000C */  li    $a2, 12
/* 0041E6E4 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041E6E8 8F858C14 */  lw     $a1, %got(numcoloredlr)($gp)
/* 0041E6EC 2407000A */  li    $a3, 10
/* 0041E6F0 0320F809 */  jalr  $t9
/* 0041E6F4 8CA50000 */   lw    $a1, ($a1)
/* 0041E6F8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E6FC 8E040000 */  lw    $a0, ($s0)
/* 0041E700 24060012 */  li    $a2, 18
/* 0041E704 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041E708 8F858044 */  lw    $a1, %got(RO_1000AD74)($gp)
/* 0041E70C 24070012 */  li    $a3, 18
/* 0041E710 0320F809 */  jalr  $t9
/* 0041E714 24A5AD74 */   addiu $a1, %lo(RO_1000AD74) # addiu $a1, $a1, -0x528c
/* 0041E718 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E71C 8E040000 */  lw    $a0, ($s0)
/* 0041E720 2406000C */  li    $a2, 12
/* 0041E724 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041E728 8F858C18 */  lw     $a1, %got(numcantcoloredlr)($gp)
/* 0041E72C 2407000A */  li    $a3, 10
/* 0041E730 0320F809 */  jalr  $t9
/* 0041E734 8CA50000 */   lw    $a1, ($a1)
/* 0041E738 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E73C 8E040000 */  lw    $a0, ($s0)
/* 0041E740 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041E744 0320F809 */  jalr  $t9
/* 0041E748 00000000 */   nop   
/* 0041E74C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E750 8E040000 */  lw    $a0, ($s0)
/* 0041E754 2406000C */  li    $a2, 12
/* 0041E758 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041E75C 8F858044 */  lw    $a1, %got(RO_1000AD68)($gp)
/* 0041E760 2407000C */  li    $a3, 12
/* 0041E764 0320F809 */  jalr  $t9
/* 0041E768 24A5AD68 */   addiu $a1, %lo(RO_1000AD68) # addiu $a1, $a1, -0x5298
/* 0041E76C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E770 8E040000 */  lw    $a0, ($s0)
/* 0041E774 2406000C */  li    $a2, 12
/* 0041E778 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041E77C 8F858C1C */  lw     $a1, %got(num0occurlr)($gp)
/* 0041E780 2407000A */  li    $a3, 10
/* 0041E784 0320F809 */  jalr  $t9
/* 0041E788 8CA50000 */   lw    $a1, ($a1)
/* 0041E78C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E790 8E040000 */  lw    $a0, ($s0)
/* 0041E794 2406000B */  li    $a2, 11
/* 0041E798 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041E79C 8F858044 */  lw    $a1, %got(RO_1000AD5D)($gp)
/* 0041E7A0 2407000B */  li    $a3, 11
/* 0041E7A4 0320F809 */  jalr  $t9
/* 0041E7A8 24A5AD5D */   addiu $a1, %lo(RO_1000AD5D) # addiu $a1, $a1, -0x52a3
/* 0041E7AC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E7B0 8E040000 */  lw    $a0, ($s0)
/* 0041E7B4 2406000C */  li    $a2, 12
/* 0041E7B8 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041E7BC 8F858C10 */  lw     $a1, %got(aliasedoc)($gp)
/* 0041E7C0 2407000A */  li    $a3, 10
/* 0041E7C4 0320F809 */  jalr  $t9
/* 0041E7C8 8CA50000 */   lw    $a1, ($a1)
/* 0041E7CC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E7D0 8E040000 */  lw    $a0, ($s0)
/* 0041E7D4 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041E7D8 0320F809 */  jalr  $t9
/* 0041E7DC 00000000 */   nop   
/* 0041E7E0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E7E4 8E040000 */  lw    $a0, ($s0)
/* 0041E7E8 2406000C */  li    $a2, 12
/* 0041E7EC 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041E7F0 8F858044 */  lw    $a1, %got(RO_1000AD51)($gp)
/* 0041E7F4 2407000C */  li    $a3, 12
/* 0041E7F8 0320F809 */  jalr  $t9
/* 0041E7FC 24A5AD51 */   addiu $a1, %lo(RO_1000AD51) # addiu $a1, $a1, -0x52af
/* 0041E800 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E804 8E040000 */  lw    $a0, ($s0)
/* 0041E808 2406000C */  li    $a2, 12
/* 0041E80C 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041E810 8F858C24 */  lw     $a1, %got(numsparselr)($gp)
/* 0041E814 2407000A */  li    $a3, 10
/* 0041E818 0320F809 */  jalr  $t9
/* 0041E81C 8CA50000 */   lw    $a1, ($a1)
/* 0041E820 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E824 8E040000 */  lw    $a0, ($s0)
/* 0041E828 24060014 */  li    $a2, 20
/* 0041E82C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041E830 8F858044 */  lw    $a1, %got(RO_1000AD3D)($gp)
/* 0041E834 24070014 */  li    $a3, 20
/* 0041E838 0320F809 */  jalr  $t9
/* 0041E83C 24A5AD3D */   addiu $a1, %lo(RO_1000AD3D) # addiu $a1, $a1, -0x52c3
/* 0041E840 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E844 8E040000 */  lw    $a0, ($s0)
/* 0041E848 2406000C */  li    $a2, 12
/* 0041E84C 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041E850 8F858C28 */  lw     $a1, %got(numnotwellformedlr)($gp)
/* 0041E854 2407000A */  li    $a3, 10
/* 0041E858 0320F809 */  jalr  $t9
/* 0041E85C 8CA50000 */   lw    $a1, ($a1)
/* 0041E860 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E864 8E040000 */  lw    $a0, ($s0)
/* 0041E868 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041E86C 0320F809 */  jalr  $t9
/* 0041E870 00000000 */   nop   
/* 0041E874 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E878 8E040000 */  lw    $a0, ($s0)
/* 0041E87C 24060012 */  li    $a2, 18
/* 0041E880 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041E884 8F858044 */  lw    $a1, %got(RO_1000AD2B)($gp)
/* 0041E888 24070012 */  li    $a3, 18
/* 0041E88C 0320F809 */  jalr  $t9
/* 0041E890 24A5AD2B */   addiu $a1, %lo(RO_1000AD2B) # addiu $a1, $a1, -0x52d5
/* 0041E894 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E898 8E040000 */  lw    $a0, ($s0)
/* 0041E89C 2406000C */  li    $a2, 12
/* 0041E8A0 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041E8A4 8F858C20 */  lw     $a1, %got(numcalloverheadlr)($gp)
/* 0041E8A8 2407000A */  li    $a3, 10
/* 0041E8AC 0320F809 */  jalr  $t9
/* 0041E8B0 8CA50000 */   lw    $a1, ($a1)
/* 0041E8B4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E8B8 8E040000 */  lw    $a0, ($s0)
/* 0041E8BC 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041E8C0 0320F809 */  jalr  $t9
/* 0041E8C4 00000000 */   nop   
/* 0041E8C8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E8CC 8E040000 */  lw    $a0, ($s0)
/* 0041E8D0 24060009 */  li    $a2, 9
/* 0041E8D4 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041E8D8 8F858044 */  lw    $a1, %got(RO_1000AD22)($gp)
/* 0041E8DC 24070009 */  li    $a3, 9
/* 0041E8E0 0320F809 */  jalr  $t9
/* 0041E8E4 24A5AD22 */   addiu $a1, %lo(RO_1000AD22) # addiu $a1, $a1, -0x52de
/* 0041E8E8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E8EC 8E040000 */  lw    $a0, ($s0)
/* 0041E8F0 2406000C */  li    $a2, 12
/* 0041E8F4 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041E8F8 8F858BD4 */  lw     $a1, %got(lopttime)($gp)
/* 0041E8FC 2407000A */  li    $a3, 10
/* 0041E900 0320F809 */  jalr  $t9
/* 0041E904 8CA50000 */   lw    $a1, ($a1)
/* 0041E908 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E90C 8E040000 */  lw    $a0, ($s0)
/* 0041E910 2406000E */  li    $a2, 14
/* 0041E914 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041E918 8F858044 */  lw    $a1, %got(RO_1000AD14)($gp)
/* 0041E91C 2407000E */  li    $a3, 14
/* 0041E920 0320F809 */  jalr  $t9
/* 0041E924 24A5AD14 */   addiu $a1, %lo(RO_1000AD14) # addiu $a1, $a1, -0x52ec
/* 0041E928 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E92C 8E040000 */  lw    $a0, ($s0)
/* 0041E930 2406000C */  li    $a2, 12
/* 0041E934 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041E938 8F858BD8 */  lw     $a1, %got(dataflowtime)($gp)
/* 0041E93C 2407000A */  li    $a3, 10
/* 0041E940 0320F809 */  jalr  $t9
/* 0041E944 8CA50000 */   lw    $a1, ($a1)
/* 0041E948 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E94C 8E040000 */  lw    $a0, ($s0)
/* 0041E950 2406000D */  li    $a2, 13
/* 0041E954 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041E958 8F858044 */  lw    $a1, %got(RO_1000AD07)($gp)
/* 0041E95C 2407000D */  li    $a3, 13
/* 0041E960 0320F809 */  jalr  $t9
/* 0041E964 24A5AD07 */   addiu $a1, %lo(RO_1000AD07) # addiu $a1, $a1, -0x52f9
/* 0041E968 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E96C 8E040000 */  lw    $a0, ($s0)
/* 0041E970 2406000C */  li    $a2, 12
/* 0041E974 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041E978 8F858BE4 */  lw     $a1, %got(regaloctime)($gp)
/* 0041E97C 2407000A */  li    $a3, 10
/* 0041E980 0320F809 */  jalr  $t9
/* 0041E984 8CA50000 */   lw    $a1, ($a1)
/* 0041E988 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E98C 8E040000 */  lw    $a0, ($s0)
/* 0041E990 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041E994 0320F809 */  jalr  $t9
/* 0041E998 00000000 */   nop   
/* 0041E99C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E9A0 8E040000 */  lw    $a0, ($s0)
/* 0041E9A4 2406001D */  li    $a2, 29
/* 0041E9A8 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041E9AC 8F858044 */  lw    $a1, %got(RO_1000ACEA)($gp)
/* 0041E9B0 2407001D */  li    $a3, 29
/* 0041E9B4 0320F809 */  jalr  $t9
/* 0041E9B8 24A5ACEA */   addiu $a1, %lo(RO_1000ACEA) # addiu $a1, $a1, -0x5316
/* 0041E9BC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041E9C0 8E040000 */  lw    $a0, ($s0)
/* 0041E9C4 2406000F */  li    $a2, 15
/* 0041E9C8 8F888BDC */  lw     $t0, %got(dataflowiter)($gp)
/* 0041E9CC 8F898BE0 */  lw     $t1, %got(numdataflow)($gp)
/* 0041E9D0 8F99887C */  lw    $t9, %call16(write_real)($gp)
/* 0041E9D4 8D080000 */  lw    $t0, ($t0)
/* 0041E9D8 8D290000 */  lw    $t1, ($t1)
/* 0041E9DC 2407FFFF */  li    $a3, -1
/* 0041E9E0 44882000 */  mtc1  $t0, $f4
/* 0041E9E4 44894000 */  mtc1  $t1, $f8
/* 0041E9E8 468021A0 */  cvt.s.w $f6, $f4
/* 0041E9EC 468042A0 */  cvt.s.w $f10, $f8
/* 0041E9F0 460A3403 */  div.s $f16, $f6, $f10
/* 0041E9F4 44058000 */  mfc1  $a1, $f16
/* 0041E9F8 0320F809 */  jalr  $t9
/* 0041E9FC 00000000 */   nop   
/* 0041EA00 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041EA04 8E040000 */  lw    $a0, ($s0)
/* 0041EA08 24060007 */  li    $a2, 7
/* 0041EA0C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041EA10 8F858044 */  lw    $a1, %got(RO_1000ACE3)($gp)
/* 0041EA14 24070007 */  li    $a3, 7
/* 0041EA18 0320F809 */  jalr  $t9
/* 0041EA1C 24A5ACE3 */   addiu $a1, %lo(RO_1000ACE3) # addiu $a1, $a1, -0x531d
/* 0041EA20 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041EA24 8E040000 */  lw    $a0, ($s0)
/* 0041EA28 2406000C */  li    $a2, 12
/* 0041EA2C 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041EA30 8F858BE0 */  lw     $a1, %got(numdataflow)($gp)
/* 0041EA34 2407000A */  li    $a3, 10
/* 0041EA38 0320F809 */  jalr  $t9
/* 0041EA3C 8CA50000 */   lw    $a1, ($a1)
/* 0041EA40 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041EA44 8E040000 */  lw    $a0, ($s0)
/* 0041EA48 2406000E */  li    $a2, 14
/* 0041EA4C 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0041EA50 8F858044 */  lw    $a1, %got(RO_1000ACD5)($gp)
/* 0041EA54 2407000E */  li    $a3, 14
/* 0041EA58 0320F809 */  jalr  $t9
/* 0041EA5C 24A5ACD5 */   addiu $a1, %lo(RO_1000ACD5) # addiu $a1, $a1, -0x532b
/* 0041EA60 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041EA64 8E040000 */  lw    $a0, ($s0)
/* 0041EA68 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041EA6C 0320F809 */  jalr  $t9
/* 0041EA70 00000000 */   nop   
/* 0041EA74 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0041EA78 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0041EA7C 8FB00014 */  lw    $s0, 0x14($sp)
/* 0041EA80 03E00008 */  jr    $ra
/* 0041EA84 27BD0020 */   addiu $sp, $sp, 0x20
    .type printstat, @function
    .size printstat, .-printstat
    .end printstat

glabel print_loop_relations
    .ent print_loop_relations
    # 0041EA88 print_loop_relations
    # 00456A2C oneproc
/* 0041EA88 3C1C0FC0 */  .cpload $t9
/* 0041EA8C 279CB808 */  
/* 0041EA90 0399E021 */  
/* 0041EA94 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 0041EA98 AFB50028 */  sw    $s5, 0x28($sp)
/* 0041EA9C AFB30020 */  sw    $s3, 0x20($sp)
/* 0041EAA0 00809825 */  move  $s3, $a0
/* 0041EAA4 00A0A825 */  move  $s5, $a1
/* 0041EAA8 AFBF0034 */  sw    $ra, 0x34($sp)
/* 0041EAAC AFBC0030 */  sw    $gp, 0x30($sp)
/* 0041EAB0 AFB6002C */  sw    $s6, 0x2c($sp)
/* 0041EAB4 AFB40024 */  sw    $s4, 0x24($sp)
/* 0041EAB8 AFB2001C */  sw    $s2, 0x1c($sp)
/* 0041EABC AFB10018 */  sw    $s1, 0x18($sp)
/* 0041EAC0 10800046 */  beqz  $a0, .L0041EBDC
/* 0041EAC4 AFB00014 */   sw    $s0, 0x14($sp)
/* 0041EAC8 24B60001 */  addiu $s6, $a1, 1
/* 0041EACC 8F948CCC */  lw     $s4, %got(list)($gp)
.L0041EAD0:
/* 0041EAD0 1AA0000C */  blez  $s5, .L0041EB04
/* 0041EAD4 24100001 */   li    $s0, 1
/* 0041EAD8 26B20001 */  addiu $s2, $s5, 1
/* 0041EADC 8E910000 */  lw    $s1, ($s4)
.L0041EAE0:
/* 0041EAE0 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041EAE4 02202025 */  move  $a0, $s1
/* 0041EAE8 2405002D */  li    $a1, 45
/* 0041EAEC 24060001 */  li    $a2, 1
/* 0041EAF0 0320F809 */  jalr  $t9
/* 0041EAF4 2407000A */   li    $a3, 10
/* 0041EAF8 26100001 */  addiu $s0, $s0, 1
/* 0041EAFC 1612FFF8 */  bne   $s0, $s2, .L0041EAE0
/* 0041EB00 8FBC0030 */   lw    $gp, 0x30($sp)
.L0041EB04:
/* 0041EB04 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041EB08 8E910000 */  lw    $s1, ($s4)
/* 0041EB0C 24050020 */  li    $a1, 32
/* 0041EB10 24060001 */  li    $a2, 1
/* 0041EB14 2407000A */  li    $a3, 10
/* 0041EB18 0320F809 */  jalr  $t9
/* 0041EB1C 02202025 */   move  $a0, $s1
/* 0041EB20 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041EB24 8E6E0008 */  lw    $t6, 8($s3)
/* 0041EB28 02202025 */  move  $a0, $s1
/* 0041EB2C 8F998874 */  lw    $t9, %call16(write_integer)($gp)
/* 0041EB30 24060001 */  li    $a2, 1
/* 0041EB34 2407000A */  li    $a3, 10
/* 0041EB38 0320F809 */  jalr  $t9
/* 0041EB3C 95C50008 */   lhu   $a1, 8($t6)
/* 0041EB40 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041EB44 8E910000 */  lw    $s1, ($s4)
/* 0041EB48 24050028 */  li    $a1, 40
/* 0041EB4C 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041EB50 24060001 */  li    $a2, 1
/* 0041EB54 2407000A */  li    $a3, 10
/* 0041EB58 0320F809 */  jalr  $t9
/* 0041EB5C 02202025 */   move  $a0, $s1
/* 0041EB60 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041EB64 02202025 */  move  $a0, $s1
/* 0041EB68 8E650000 */  lw    $a1, ($s3)
/* 0041EB6C 8F998878 */  lw    $t9, %call16(write_cardinal)($gp)
/* 0041EB70 24060001 */  li    $a2, 1
/* 0041EB74 2407000A */  li    $a3, 10
/* 0041EB78 0320F809 */  jalr  $t9
/* 0041EB7C 00000000 */   nop   
/* 0041EB80 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041EB84 8E910000 */  lw    $s1, ($s4)
/* 0041EB88 24050029 */  li    $a1, 41
/* 0041EB8C 8F998868 */  lw    $t9, %call16(write_char)($gp)
/* 0041EB90 24060001 */  li    $a2, 1
/* 0041EB94 2407000A */  li    $a3, 10
/* 0041EB98 0320F809 */  jalr  $t9
/* 0041EB9C 02202025 */   move  $a0, $s1
/* 0041EBA0 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041EBA4 02202025 */  move  $a0, $s1
/* 0041EBA8 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0041EBAC 0320F809 */  jalr  $t9
/* 0041EBB0 00000000 */   nop   
/* 0041EBB4 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041EBB8 8E64000C */  lw    $a0, 0xc($s3)
/* 0041EBBC 02C02825 */  move  $a1, $s6
/* 0041EBC0 8F998260 */  lw    $t9, %call16(print_loop_relations)($gp)
/* 0041EBC4 0320F809 */  jalr  $t9
/* 0041EBC8 00000000 */   nop   
/* 0041EBCC 8E730014 */  lw    $s3, 0x14($s3)
/* 0041EBD0 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0041EBD4 1660FFBE */  bnez  $s3, .L0041EAD0
/* 0041EBD8 00000000 */   nop   
.L0041EBDC:
/* 0041EBDC 8FBF0034 */  lw    $ra, 0x34($sp)
/* 0041EBE0 8FB00014 */  lw    $s0, 0x14($sp)
/* 0041EBE4 8FB10018 */  lw    $s1, 0x18($sp)
/* 0041EBE8 8FB2001C */  lw    $s2, 0x1c($sp)
/* 0041EBEC 8FB30020 */  lw    $s3, 0x20($sp)
/* 0041EBF0 8FB40024 */  lw    $s4, 0x24($sp)
/* 0041EBF4 8FB50028 */  lw    $s5, 0x28($sp)
/* 0041EBF8 8FB6002C */  lw    $s6, 0x2c($sp)
/* 0041EBFC 03E00008 */  jr    $ra
/* 0041EC00 27BD0038 */   addiu $sp, $sp, 0x38
    .type print_loop_relations, @function
    .size print_loop_relations, .-print_loop_relations
    .end print_loop_relations
)"");
