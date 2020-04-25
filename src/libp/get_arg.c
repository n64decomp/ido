extern unsigned int __Argc;
extern char *__Argv[];

/*
00434720 processargs
*/
void get_arg(unsigned int arg_index, char *buf, size_t buflen) {
    char *bufend;
    char *str;
    char ch;

    bufend = buf + buflen;
    if (arg_index < __Argc) {
        str = __Argv[arg_index];
        while (buf != bufend) {
            ch = *str++;
            if (ch == '\0') {
                break;
            }
            *buf++ = ch;
        }
    }
    while (buf != bufend) {
        *buf++ = ' ';
    }
}
