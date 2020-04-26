#include <stdio.h>

#include "libp.h"

/*
004205F8 genrlodrstr
0042BF08 reemit
0042EB10 incorp_feedback
0042EF10 func_0042EF10
0042F6CC controlflow
00434720 processargs
0043771C optinit
0043A0CC copyline
00444A84 isearchloop
00456A2C oneproc
0045806C main
00458678 mtagwarning
0045A480 oneinstruction
0045B508 oneprocprepass
0045C150 prepass
0047B320 stackerror
0047B3F8 boundswarning
0047B51C ovfwwarning
0047BDF8 dbgerror
0047FF7C skipproc
*/
struct PascalFile err = {
#ifdef __sgi
    stderr,
#else
    NULL, // Initialize at program startup
#endif
    NULL
};
