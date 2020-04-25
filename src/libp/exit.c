#ifdef __sgi
#include <stdio.h>
#include <stddef.h>
#include <unistd.h>
#include <rld_interface.h>
#include <sys/prctl.h>

static const char RO_1000FCD0[] = "@(#)$Header: IRIX 6.4:1263370533 built 11/12/96 at slayer:/slayer_xlv0/ficussg-nov05/root $";

int _libp_pascal_file_counter; // really a common variable declared in every libp file

extern unsigned long _DYNAMIC_LINK;
    /* Identifies the link type of a program */
    /* or shared library.  0 for non_shared, */
    /* 1 for call_shared and 2 for shared */

extern void _cleanup(void);
extern ptrdiff_t _prctl(unsigned option, ...);

/*
0040B7D0 func_0040B7D0
0040B930 read_feedback_file
0040BCA0 path_blockno
0045806C main
00480700 abort
00487120 uputinit
00487218 uputint
00487328 uputflush
00487458 uputkill
0048752C ugetinit
00487668 ugetint
004878AC ugetclose
00488A48 st_setmsgname
00488AF0 st_error
0048A430 _md_st_internal
0048A4EC _md_st_error
0048AD70 st_internal
00497C90 rewrite
00497F70 clock
004983F0 _getbuf
*/
void exit(int status) {
    char tmp[28];
    int i;

    for (i = _libp_pascal_file_counter; i != 0; i--) {
        sprintf(tmp, "/tmp/pas%d.%d", i, getpid());
        unlink(tmp);
    }

    if (_prctl(PR_GETNSHARE) < 2) {
        _exithandle();
        if (&_DYNAMIC_LINK != NULL) {
            _rld_new_interface(_SHUT_DOWN);
        }
    }
    _cleanup();
    _exit(status);
}
#endif
