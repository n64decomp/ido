#ifdef __sgi

#include <stdio.h>
#include <unistd.h>

extern unsigned char _smbuf[];

unsigned char *_stdbuf[] = {_sibuf, _sobuf};

FILE _iob[] = {
    {0, NULL, NULL, _IOREAD, STDIN_FILENO},
    {0, _sobuf, NULL, _IOWRT, STDOUT_FILENO},
    {0, _smbuf + 0x10, NULL, _IOWRT | _IONBF, STDERR_FILENO}
};

#endif
