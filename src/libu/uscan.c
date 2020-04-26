#include <stdlib.h>
#include "libp/libp.h"

#ifdef __sgi
/*
0042EB10 incorp_feedback
0042EF10 func_0042EF10
0042F6CC controlflow
00434720 processargs
0043A0CC copyline
0045806C main
0045B508 oneprocprepass
0045C150 prepass
0047B320 stackerror
0047BDF8 dbgerror
0047FF7C skipproc
*/
void abort(void) {
    exit(-1);
}
#endif

/*
00434720 processargs
*/
void openstdout(struct PascalFile *file) {
}

// unused
void openstdout(struct PascalFile *file) {
}

// unused
void openinput(struct PascalFile *file, char caller_stack) {
    reset(file, &caller_stack, 1024, 0);
}

// unused
void openoutput(struct PascalFile *file, char caller_stack) {
    rewrite(file, &caller_stack, 1024, 0);
}

/*
00410204 codemotion
004175BC copypropagate
00456A2C oneproc
0045806C main
004638C0 regdataflow
00475680 getexpsources
00479DC4 eliminduct
*/
long getclock(void) {
    return clock(1);
}

// unused
int eopage(struct PascalFile *file) {
    return peek_char(file->c_file) == '\f';
}

// unused
int readpage(struct PascalFile *file) {
    next_char(file->c_file);
}

// unused
void printdate(struct PascalFile *file) {
}

// unused
void printtime(struct PascalFile *file) {
}
