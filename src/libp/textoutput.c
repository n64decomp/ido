#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*
00495CCC write_integer
00495E20 write_cardinal
00497824 write_card64
004979D4 write_int64
*/
static char D_10011BF0[] = "0123456789abcdefghijklmnopqrstuvwxyz";

/*
00495AE8 write_string
00495CCC write_integer
00495E20 write_cardinal
00495F50 write_real
00496AE0 write_double
00497700 write_boolean
00497824 write_card64
004979D4 write_int64
*/
static void fwrite_wrapper(FILE *file, const char *buf, ssize_t len) {
#ifdef __sgi
    const char *end;

    if ((file->_flag & _IOWRT) != 0) {
        while ((file->_cnt -= len) < 0) {
            file->_cnt += len;
            if (file->_cnt > 0) {
                end = buf + file->_cnt;
                while (buf != end) {
                    *file->_ptr++ = *buf++;
                }
                len -= file->_cnt;
            }
            file->_cnt = -1;
            __flsbuf(*buf++, file);
            if (--len == 0) {
                return;
            }
        }

        end = buf + len;
        while (buf != end) {
            *file->_ptr++ = *buf++;
        }
    }
#else
    fwrite(buf, 1, len, file);
#endif
}

/*
004958F8 write_char
00495AE8 write_string
00495CCC write_integer
00495E20 write_cardinal
00495F50 write_real
00496AE0 write_double
00497700 write_boolean
00497824 write_card64
004979D4 write_int64
*/
static void write_repeated_char(FILE *file, unsigned char byte, ssize_t len) {
#ifdef __sgi
    ssize_t cnt;

    if ((file->_flag & _IOWRT) != 0) {
        while ((file->_cnt -= len) < 0) {
            file->_cnt += len;
            if (file->_cnt > 0) {
                cnt = file->_cnt;
                while (cnt--) {
                    *file->_ptr++ = byte;
                }
                len -= file->_cnt;
            }
            file->_cnt = -1;
            __flsbuf(byte, file);
            if (--len == 0) {
                return;
            }
        }

        while (len--) {
            *file->_ptr++ = byte;
        }
    }
#else
    while (len--) {
        putc(byte, file);
    }
#endif
}

/*
004175BC copypropagate
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
004205F8 genrlodrstr
0042BF08 reemit
0042EB10 incorp_feedback
0042EF10 func_0042EF10
0042F6CC controlflow
00434720 processargs
0043A0CC copyline
00444A84 isearchloop
00455518 func_00455518
00456A2C oneproc
0045806C main
00458678 mtagwarning
0045A480 oneinstruction
0045B508 oneprocprepass
0045C150 prepass
00467C34 needsplit
00467F04 split
00469280 globalcolor
004713E8 loopunroll
004761D0 tail_recursion
0047B320 stackerror
0047B3F8 boundswarning
0047B51C ovfwwarning
0047BDF8 dbgerror
0047FF7C skipproc
*/
void writeln(FILE *file) {
#ifdef __sgi
    if ((file->_flag & _IOWRT) == 0) {
        fprintf(stderr, "writeln called on file not open for writing.\n");
        return;
    }
#endif

    putc('\n', file);
}

void page(FILE *file) {
    putc('\f', file);
}

/*
004175BC copypropagate
0041A2A0 printmtyp
0041A410 printitab
0041AC2C printtab
0041B580 printbv
0041C914 printregs
0041EA88 print_loop_relations
00434720 processargs
0043CFCC readnxtinst
00456A2C oneproc
0045806C main
00467C34 needsplit
00467F04 split
00469280 globalcolor
004713E8 loopunroll
0047FF7C skipproc
*/
void write_char(FILE *file, unsigned char arg1, ssize_t count) {
    if (count >= 2) {
        write_repeated_char(file, ' ', count - 1);
        putc(arg1, file);
        return;
    }
    if (count < -1) {
        putc(arg1, file);
        write_repeated_char(file, ' ', -1 - count);
        return;
    }
    putc(arg1, file);
}

/*
004175BC copypropagate
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
004205F8 genrlodrstr
0042BF08 reemit
0042EB10 incorp_feedback
0042EF10 func_0042EF10
0042F6CC controlflow
00434720 processargs
0043771C optinit
0043A0CC copyline
00444A84 isearchloop
00455518 func_00455518
00456A2C oneproc
0045806C main
00458678 mtagwarning
0045A480 oneinstruction
0045B508 oneprocprepass
0045C150 prepass
00467C34 needsplit
00467F04 split
00469280 globalcolor
004713E8 loopunroll
004761D0 tail_recursion
0047B320 stackerror
0047B3F8 boundswarning
0047B51C ovfwwarning
0047BDF8 dbgerror
0047FF7C skipproc
00495BB8 write_enum
*/
void write_string(FILE *file, const char *str, size_t len, size_t len_to_print) {
    const char *end;

    if (len_to_print == 0) {
        end = str + len;
        while (str != end && end[-1] == ' ') {
            --end;
        }
        len_to_print = end - str;
    } else if (len < len_to_print) {
        write_repeated_char(file, ' ', len_to_print - len);
        len_to_print = len;
    }
    if (len_to_print > 0) {
        fwrite_wrapper(file, str, len_to_print);
    }
}

/*
0041A410 printitab
0041AC2C printtab
0041C914 printregs
0047B51C ovfwwarning
*/

void write_enum(FILE *file, int value, const char *enumtbl, size_t len_to_print) {
    const char *pos = (const char *)enumtbl;
    int i;

    for (i = value; i != 0; i--) {
        while (0U < *pos++) {
        }
        if (*pos == 0) {
            fprintf(stderr, "Enumerated value '%d' not within type.\n", value);
            return;
        }
    }

    while (*pos == ' ') {
        ++pos;
    }

    write_string(file, pos, strlen(pos), len_to_print);
}

/*
004175BC copypropagate
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
0042BF08 reemit
0042EB10 incorp_feedback
0042EF10 func_0042EF10
00455518 func_00455518
00456A2C oneproc
0045806C main
00458678 mtagwarning
00467C34 needsplit
00467F04 split
00469280 globalcolor
004713E8 loopunroll
004761D0 tail_recursion
0047B3F8 boundswarning
0047B51C ovfwwarning
0047BDF8 dbgerror
0047FF7C skipproc
*/
void write_integer(FILE *file, int val, int len_to_print, unsigned int radix) {
    char buf[0x21];
    int written_len;
    int len_to_print_left_adjusted;
    unsigned int abs_val;
    char *pos;

    if (radix < 2U) {
        fprintf(stderr, "illegal radix specified for integer write: %d\n", radix);
        return;
    }
    if (val < 0) {
        abs_val = (unsigned int) -val;
    } else {
        abs_val = val;
    }
    pos = buf + sizeof(buf);
    do {
        *--pos = D_10011BF0[abs_val % radix];
        abs_val = abs_val / radix;
    } while (abs_val != 0);
    if (val < 0) {
        *--pos = '-';
    }
    written_len = buf + sizeof(buf) - pos;
    if (written_len < len_to_print) {
        write_repeated_char(file, ' ', len_to_print - written_len);
    }
    fwrite_wrapper(file, pos, written_len);
    len_to_print_left_adjusted = -len_to_print;
    if (written_len < len_to_print_left_adjusted) {
        write_repeated_char(file, ' ', len_to_print_left_adjusted - written_len);
    }
}

/*
0041EA88 print_loop_relations
0042F6CC controlflow
00456A2C oneproc
004713E8 loopunroll
*/
void write_cardinal(FILE *file, unsigned int val, int len_to_print, unsigned int radix) {
    char buf[0x20];
    char *pos;
    int written_len;
    int len_to_print_left_adjusted;

    if (radix == 0) {
        fprintf(stderr, "illegal radix specified for cardinal write: %d\n", (int)radix);
        return;
    }
    pos = buf + sizeof(buf);
    do {
        *--pos = D_10011BF0[val % radix];
        val = val / radix;
    } while (val != 0);
    written_len = buf + sizeof(buf) - pos;
    if (written_len < len_to_print) {
        write_repeated_char(file, ' ', len_to_print - written_len);
    }
    fwrite_wrapper(file, pos, buf + sizeof(buf) - pos);
    len_to_print_left_adjusted = -len_to_print;
    if (written_len < len_to_print_left_adjusted) {
        write_repeated_char(file, ' ', len_to_print_left_adjusted - written_len);
    }
}

/*
0041C914 printregs
0041DDD4 printstat
*/
void write_real(FILE *file, float val, int arg2, int arg3) {
    int decpt;
    int sign;
    unsigned int ndigits;
    char *str;
    double temp_f12;
    int temp_a2_2;
    int temp_t8_2;
    unsigned int temp_a3;
    int temp_v0;
    int temp_v1_2;
    int phi_a3;

    if (arg3 <= 0) {
        temp_v0 = arg2 - 6;
        if (temp_v0 >= 3) {
            ndigits = temp_v0;
        } else {
            ndigits = 2U;
        }
        temp_f12 = (double)val;
        if (0.0 == temp_f12) {
            fwrite_wrapper(file, " 0.", 3);
            write_repeated_char(file, '0', ndigits - 1);
            fwrite_wrapper(file, "e+000", 4);
            return;
        }
        str = ecvt(temp_f12, ndigits, &decpt, &sign);
        if (*str == 'I' || *str == 'N' || *str == 'i' || *str == 'n') {
            ndigits = strlen(str);
            write_repeated_char(file, ' ', arg2 - ndigits);
            fwrite_wrapper(file, str, ndigits);
        } else {
            decpt--;
            putc(sign != 0 ? '-' : ' ', file);
            putc(*str, file);
            str++;
            putc('.', file);
            fwrite_wrapper(file, str, ndigits - 1);
            putc('e', file);
            if (decpt < 0) {
                decpt = -decpt;
                putc('-', file);
            } else {
                putc('+', file);
            }
            putc('0' + decpt / 10, file);
            putc('0' + decpt % 10, file);
        }
    } else {
        str = fcvt((double) val, arg3, &decpt, &sign);
        ndigits = strlen(str);
        temp_v1_2 = sign != 0;
        if (decpt <= 0) {
            sign = temp_v1_2;
            temp_a2_2 = ((arg2 - temp_v1_2) - arg3) - 2;
            if (temp_a2_2 > 0) {
                write_repeated_char(file, ' ', temp_a2_2);
            }
            if (sign != 0) {
                putc('-', file);
            }
            putc('0', file);
            putc('.', file);
            temp_t8_2 = -decpt;
            decpt = temp_t8_2;
            phi_a3 = arg3;
            if (temp_t8_2 < arg3) {
                write_repeated_char(file, '0', temp_t8_2);
                temp_a3 = arg3 - decpt;
                if (temp_a3 < ndigits) {
                    ndigits = temp_a3;
                }
                fwrite_wrapper(file, str, ndigits);
                phi_a3 = temp_a3 - ndigits;
            }
            write_repeated_char(file, '0', phi_a3);
            temp_a2_2 = ((-arg2 - sign) - arg3) - 2;
            if (temp_a2_2 > 0) {
                write_repeated_char(file, ' ', temp_a2_2);
                return;
            }
        } else {
            temp_a2_2 = (((arg2 - temp_v1_2) - decpt) - arg3) - 1;
            sign = temp_v1_2;
            if (temp_a2_2 > 0) {
                write_repeated_char(file, ' ', temp_a2_2);
            }
            if (sign != 0) {
                putc('-', file);
            }
            if (decpt >= ndigits) {
                fwrite_wrapper(file, str, ndigits);
                write_repeated_char(file, '0', decpt - ndigits);
                putc('.', file);
                write_repeated_char(file, '0', arg3);
            } else {
                fwrite_wrapper(file, str, decpt);
                str = str + decpt;
                ndigits = ndigits - decpt;
                putc('.', file);
                if (ndigits >= arg3) {
                    fwrite_wrapper(file, str, arg3);
                } else {
                    fwrite_wrapper(file, str, ndigits);
                    write_repeated_char(file, '0', arg3 - ndigits);
                }
            }
            temp_a2_2 = (((-arg2 - sign) - decpt) - arg3) - 1;
            if (temp_a2_2 > 0) {
                write_repeated_char(file, ' ', temp_a2_2);
            }
        }
    }
}

// unused
void write_double(void *file, double arg3, int arg4, int arg5) {
    int decpt;
    int sign;
    unsigned int ndigits;
    char *str;
    char *temp_ret_3;
    int temp_a2;
    int temp_a2_2;
    int temp_t9_2;
    unsigned int temp_a3;
    int temp_v0;
    int temp_v1_2;
    int phi_a3;

    if (arg5 <= 0) {
        temp_v0 = arg4 - 7;
        if (temp_v0 >= 3) {
            ndigits = temp_v0;
        } else {
            ndigits = 2U;
        }
        if (arg3 == 0.0) {
            fwrite_wrapper(file, " 0.", 3);
            write_repeated_char(file, '0', ndigits - 1);
            fwrite_wrapper(file, "e+000", 5);
            return;
        }
        str = ecvt(arg3, ndigits, &decpt, &sign);
        if (*str == 'I' || *str == 'N' || *str == 'i' || *str == 'n') {
            ndigits = strlen(str);
            write_repeated_char(file, ' ', arg4 - ndigits);
            fwrite_wrapper(file, str, ndigits);
        } else {
            decpt--;
            putc(sign != 0 ? '-' : ' ', file);
            putc(*str, file);
            str++;
            putc('.', file);
            fwrite_wrapper(file, str, ndigits - 1);
            putc('e', file);
            if (decpt < 0) {
                decpt = -decpt;
                putc('-', file);
            } else {
                putc('+', file);
            }
            putc('0' + decpt / 100, file);
            decpt = decpt % 100;
            putc('0' + decpt / 10, file);
            putc('0' + decpt % 10, file);
        }
        return;
    }
    temp_ret_3 = fcvt(arg3, arg5, &decpt, &sign);
    str = temp_ret_3;
    ndigits = strlen(temp_ret_3);
    temp_v1_2 = sign != 0;
    if (decpt <= 0) {
        sign = temp_v1_2;
        temp_a2 = ((arg4 - temp_v1_2) - arg5) - 2;
        if (temp_a2 > 0) {
            write_repeated_char(file, ' ', temp_a2);
        }
        if (sign != 0) {
            putc('-', file);
        }
        putc('0', file);
        putc('.', file);
        temp_t9_2 = -decpt;
        decpt = temp_t9_2;
        phi_a3 = arg5;
        if (temp_t9_2 < arg5) {
            write_repeated_char(file, '0', temp_t9_2);
            temp_a3 = arg5 - decpt;
            if (temp_a3 < ndigits) {
                ndigits = temp_a3;
            }
            fwrite_wrapper(file, str, ndigits);
            phi_a3 = temp_a3 - ndigits;
        }
        write_repeated_char(file, '0', phi_a3);
        temp_a2_2 = ((-arg4 - sign) - arg5) - 2;
        if (temp_a2_2 > 0) {
            write_repeated_char(file, ' ', temp_a2_2);
            return;
        }
    } else {
        temp_a2_2 = (((arg4 - temp_v1_2) - decpt) - arg5) - 1;
        sign = temp_v1_2;
        write_repeated_char(file, ' ', temp_a2_2);
        if (temp_v1_2 != 0) {
            putc('-', file);
        }
        if (decpt >= ndigits) {
            fwrite_wrapper(file, str, ndigits);
            write_repeated_char(file, '0', decpt - ndigits);
            putc('.', file);
            write_repeated_char(file, '0', arg5);
        } else {
            fwrite_wrapper(file, str, decpt);
            str = str + decpt;
            ndigits = ndigits - decpt;
            putc('.', file);
            if (ndigits >= arg5) {
                fwrite_wrapper(file, str, arg5);
            } else {
                fwrite_wrapper(file, str, ndigits);
                write_repeated_char(file, '0', arg5 - ndigits);
            }
        }
        temp_a2_2 = (((-arg4 - sign) - decpt) - arg5) - 1;
        if (temp_a2_2 > 0) {
            write_repeated_char(file, ' ', temp_a2_2);
        }
    }
}

/*
0041C914 printregs
*/
void write_boolean(FILE *file, int val, int len_to_print) {
    int len_to_print_left_adjusted;

    if (val) {
        if (len_to_print >= 5) {
            write_repeated_char(file, ' ', len_to_print - 4);
        }
        fwrite_wrapper(file, "true", 4);
        len_to_print_left_adjusted = -len_to_print;
        if (len_to_print_left_adjusted >= 5) {
            write_repeated_char(file, ' ', len_to_print_left_adjusted - 4);
        }
    } else {
        if (len_to_print >= 6) {
            write_repeated_char(file, ' ', len_to_print - 5);
        }
        fwrite_wrapper(file, "false", 5);
        len_to_print_left_adjusted = -len_to_print;
        if (len_to_print_left_adjusted >= 6) {
            write_repeated_char(file, ' ', len_to_print_left_adjusted - 5);
        }
    }
}

// unused
void write_card64(FILE *file, unsigned long long int val, int len_to_print, unsigned int radix) {
    char buf[0x40];
    int written_len;
    int len_to_print_left_adjusted;
    unsigned int temp_t0;
    unsigned int temp_t6;
    char *pos;

    if (radix == 0) {
        fprintf(stderr, "illegal radix specified for cardinal64 write: %d\n", (int)radix);
        return;
    }
    pos = buf + sizeof(buf);
    do {
        *--pos = D_10011BF0[val % radix];
        val = val / radix;
    } while (val != 0);
    written_len = buf + sizeof(buf) - pos;

    // This part seems very buggy...
    temp_t6 = written_len < 0 ? -1 : 0;
    temp_t0 = len_to_print < 0 ? -1 : 0;
    if (len_to_print < 0 || (len_to_print >= 0 && written_len >= 0)) {
        if (len_to_print < 0 || written_len < len_to_print) {
            write_repeated_char(file, ' ', (temp_t0 - temp_t6) - (len_to_print < written_len));
        }
    }

    fwrite_wrapper(file, pos, written_len);
    len_to_print_left_adjusted = -len_to_print;
    if (written_len < len_to_print_left_adjusted) {
        write_repeated_char(file, ' ', len_to_print_left_adjusted - written_len);
    }
}

// unused
void write_int64(FILE *file, long long int val, int len_to_print, unsigned int radix) {
    char buf[0x41];
    int written_len;
    int len_to_print_left_adjusted;
    unsigned long long int abs_val;
    unsigned int temp_t0;
    unsigned int temp_t6;
    char *pos;

    if (radix < 2U) {
        fprintf(stderr, "illegal radix specified for integer64 write: %d\n", (int)radix);
        return;
    }
    if (val < 0) {
        abs_val = (unsigned long long int) -val;
    }
    pos = buf + sizeof(buf);
    do {
        *--pos = D_10011BF0[abs_val % radix];
        abs_val = abs_val / radix;
    } while (abs_val != 0);
    if (val < 0) {
        *--pos = '-';
    }
    written_len = buf + sizeof(buf) - pos;

    // This part seems very buggy...
    temp_t6 = written_len < 0 ? -1 : 0;
    temp_t0 = len_to_print < 0 ? -1 : 0;
    if (len_to_print < 0 || (len_to_print >= 0 && written_len >= 0)) {
        if (len_to_print < 0 || written_len < len_to_print) {
            write_repeated_char(file, ' ', (temp_t0 - temp_t6) - (len_to_print < written_len));
        }
    }

    fwrite_wrapper(file, pos, written_len);
    len_to_print_left_adjusted = -len_to_print;
    if (written_len < len_to_print_left_adjusted) {
        write_repeated_char(file, ' ', len_to_print_left_adjusted - written_len);
    }
}
