#ifndef LIBMLD_H
#define LIBMLD_H

extern char *st_errname;

// stio.c
int st_readbinary(const char filename[128], char how);
int st_writebinary(const char filename[128], int flags);

#endif
