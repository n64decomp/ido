#include <stdio.h>

struct PascalFile {
    FILE *c_file;
    char *path;
};

extern int _libp_pascal_file_counter; // really a common variable declared in every libp file

size_t calc_size(FILE *unused, size_t size);
void _getbuf(FILE *file, size_t size);
void caseerror(int page, int line, const char *filename, size_t filename_len);
void assert_err(const char *str, size_t len);
long clock(int unused);
void next_char(FILE *file);
char peek_char(FILE *file);
void reset(struct PascalFile *file, const char *path, int pathlen, size_t bufsize);
void rewrite(struct PascalFile *file, const char *path, size_t pathlen, size_t size);
