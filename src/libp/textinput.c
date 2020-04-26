#include <stdio.h>
#include <string.h>

#if 0
.rdata
RO_1000F7B0:
    # 00493C50 read_double
    .asciz "Warning: read of double attempted from unopened file.\n"

RO_1000F7E8:
    # 00493C50 read_double
    .asciz "Digit expected in read_double; input is '%c'.\n"

RO_1000F818:
    # 00493C50 read_double
    .asciz "Digit expected in read_double; input is '%c'.\n"

RO_1000F848:
    # 00493C50 read_double
    .asciz "Digit expected in exponent in read_double; input is '%c'.\n"

RO_1000F884:
    # 0049462C read_int64
    .asciz "Warning: read of int64 attempted from unopened file.\n"

RO_1000F8BC:
    # 0049462C read_int64
    .asciz "Digit expected in read_integer64; input is '%c'.\n"

RO_1000F8F0:
    # 0049462C read_int64
    .asciz "Digit expected in read_integer64; input is '%c'.\n"

RO_1000F924:
    # 0049462C read_int64
    .asciz "Overflow in read_integer64.\n"

RO_1000F944:
    # 00494D90 read_int64_range
    .asciz "Exceeds range in read_integer64; input is '%d'.\n"

RO_1000F978:
    # 00494E5C read_card64
    .asciz "Warning: read of cardinal attempted from unopened file.\n"

RO_1000F9B4:
    # 00494E5C read_card64
    .asciz "Digit expected in read_cardinal64; input is '%c'.\n"

RO_1000F9E8:
    # 00494E5C read_card64
    .asciz "Digit expected in read_cardinal64; input is '%c'.\n"

RO_1000FA1C:
    # 00494E5C read_card64
    .asciz "Overflow in read_cardinal64.\n"
#endif


/*
004931EC read_integer
004937BC read_cardinal
00493C50 read_double
0049462C read_int64
00494E5C read_card64
*/
static unsigned char D_10011B70[] = {
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x0a,0x0b,0x0c,0x0d,0x0e,0x0f,0x10,0x11,0x12,0x13,0x14,0x15,0x16,0x17,0x18,0x19,0x1a,0x1b,0x1c,0x1d,0x1e,0x1f,0x20,0x21,0x22,0x23,0xff,0xff,0xff,0xff,0xff,0xff,0x0a,0x0b,0x0c,0x0d,0x0e,0x0f,0x10,0x11,0x12,0x13,0x14,0x15,0x16,0x17,0x18,0x19,0x1a,0x1b,0x1c,0x1d,0x1e,0x1f,0x20,0x21,0x22,0x23,0xff,0xff,0xff,0xff,0xff};

/*
00492410 eof
004924BC eoln
00492588 peek_char
004931EC read_integer
004937BC read_cardinal
00493C50 read_double
0049462C read_int64
00494E5C read_card64
*/
static int B_1001C2C0;

/*
00497C90 rewrite
00498034 reset
00498640 exit
*/
int _libp_pascal_file_counter;

/*
004931EC read_integer
004937BC read_cardinal
00493C50 read_double
0049462C read_int64
00494E5C read_card64
*/
int _libp_ansi_pascal;

/*
00434434 func_00434434
*/
int eof(FILE *file) {
    if (file == NULL) {
        return 1;
    }

#ifdef __sgi
    if (file->_flag & _IOWRT) {
        return 1;
    }
    if (file->_cnt >= 1) {
        return 0;
    }
    B_1001C2C0 = __filbuf(file);
    if (B_1001C2C0 == EOF) {
        return 1;
    }
    ungetc(B_1001C2C0, file);
    return 0;
#else
    B_1001C2C0 = getc(file);
    if (B_1001C2C0 == EOF) {
        return 1;
    }
    ungetc(B_1001C2C0, file);
    return 0;
#endif
}

/*
0041FD3C genloadnum
0042BF08 reemit
*/
int eoln(FILE *file) {
    if (file == NULL) {
        return 1;
    }
#ifdef __sgi
    if (file->_flag & _IOWRT) {
        return 1;
    }
    if (file->_cnt < 1) {
        B_1001C2C0 = __filbuf(file);
        if (B_1001C2C0 == EOF) {
            return 1;
        } else {
            ungetc(B_1001C2C0, file);
        }
    }
    return *file->_ptr == '\n';
#else
    B_1001C2C0 = getc(file);
    if (B_1001C2C0 == EOF) {
        return 1;
    }
    ungetc(B_1001C2C0, file);
    return B_1001C2C0 == '\n';
#endif
}

/*
0041FD3C genloadnum
00480818 eopage
*/
char peek_char(FILE *file) {
    int ch;

    if (file == NULL) {
        return ' ';
    }
#ifdef __sgi
    if (file->_cnt <= 0) {
        B_1001C2C0 = __filbuf(file);
        if (B_1001C2C0 == EOF) {
            return ' ';
        }
        ungetc(B_1001C2C0, file);
    }
    return *file->_ptr == '\n' ? ' ' : (char)*file->_ptr;
#else
    B_1001C2C0 = ch = getc(file);
    if (ch == EOF) {
        return 1;
    }
    ungetc(ch, file);
    return ch == '\n' ? ' ' : (char)ch;
#endif
}

/*
0041FD3C genloadnum
0042BF08 reemit
00480854 readpage
*/
void next_char(FILE *file) {
    if (file != NULL) {
        getc(file);
    }
}

/*
0041FD3C genloadnum
0042BF08 reemit
*/
char read_char(FILE *file) {
    int ch;

    if (file == NULL) {
        return ' ';
    }

    ch = getc(file);
    return (ch == '\n' || ch == EOF) ? ' ' : (char)ch;
}

// unused
char read_char_range(FILE *file, unsigned int min, unsigned int max) {
    int ch;

    if (file == NULL) {
        ch = ' ';
    } else {
        ch = getc(file);
        if (ch == '\n' || ch == EOF) {
            ch = ' ';
        }
    }
    if ((unsigned int)ch < min || (unsigned int)ch > max) {
        fprintf(stderr, "Exceeds range in read_char; input is '%c'.\n", ch);
    }
    return ch;
}

/*
0041FD3C genloadnum
0042BF08 reemit
00434434 func_00434434
*/
void readln(FILE *file) {
    int ch;

    if (file == NULL) {
        fprintf(stderr, "Warning: readln attempted from unopened file.\n");
        return;
    }

    ch = getc(file);
    if (ch != '\n' && ch != EOF) {
        ch = getc(file);
    }
}

/*
00434434 func_00434434
*/
void read_string(FILE *file, char *str, int maxlen) {
    int ch;

    if (file == NULL) {
        fprintf(stderr, "Warning: read of a string attempted from unopened file.\n");
        *str = '\0';
        return;
    }

    ch = getc(file);
    while (ch != '\n' && ch != EOF && maxlen > 0) {
        *str++ = (char)ch;
        --maxlen;
        ch = getc(file);
    }
    if (ch == '\n') {
        ungetc(ch, file);
    }
    while (maxlen > 0) {
        *str++ = ' ';
        --maxlen;
    }
}

// unused
int read_boolean(FILE *file) {
    int ch;
    char buf[138];
    char *pos;

    if (file == NULL) {
        fprintf(stderr, "Warning: read of a boolean attempted from unopened file.\n");
        return 0;
    }

    ch = getc(file);
    while (ch == ' ' || ch == '\t' || ch == '\n') {
        ch = getc(file);
    }

    pos = buf;
    while ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        if (ch >= 'A' && ch <= 'Z') {
            ch += ('a' - 'A');
        }
        *pos++ = (char)ch;
        ch = getc(file);
    }

    ungetc(ch, file);
    *pos = '\0';
    if (strcmp(buf, "false") == 0) {
        return 0;
    } else if (strcmp(buf, "true") == 0) {
        return 1;
    }
    fprintf(stderr, "Illegal boolean value '%s'.\n", buf);
    return 0;
}

// unused
int read_enum(FILE *file, int arg1_unused, unsigned char total_enum_values, const char *enumtbl) {
    int ch;
    char buf[136];
    char *pos;
    int enumval;

    if (file == NULL) {
        fprintf(stderr, "Warning: read of enumerated type attempted from unopened file.\n");
        return 0;
    }

    ch = getc(file);
    while (ch == ' ' || ch == '\t' || ch == '\n') {
        ch = getc(file);
    }

    pos = buf;
    while ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9') || ch == '$' || ch == '_') {
        *pos++ = (char)ch;
        ch = getc(file);
    }

    ungetc(ch, file);
    *pos = '\0';
    for (enumval = total_enum_values; enumval >= 0; enumval--) {
        if (strcmp(enumtbl, buf) == 0) {
            return total_enum_values - enumval;
        }
        while (*enumtbl++ != '\0') {
        }
        while (*enumtbl == ' ') {
            enumtbl++;
        }
    }
    fprintf(stderr, "Enumerated value '%s' not within type.\n", buf);
    return 0;
}

/*
00493734 read_integer_range
00494D90 read_int64_range
*/
int read_integer(FILE *file, unsigned int radix) {
    int ch;
    int first_ch;
    int overflowed;
    unsigned int digit;
    int reached_eof;
    unsigned int value;
    int new_radix = 0;

    if (file == NULL) {
         fprintf(stderr, "Warning: read of integer attempted from unopened file.\n");
         return 0;
    }

    ch = getc(file);

    while (ch == ' ' || ch == '\t' || ch == '\n') {
        ch = getc(file);
    }

    first_ch = ch;
    if (ch == '-' || ch == '+') {
        ch = getc(file);
    }

    overflowed = 0;
    if (radix == 10) {
        digit = ch - '0';
        if (digit >= 10) {
            fprintf(stderr, "Digit expected in read_integer; input is '%c'.\n", '0' + digit);
            return 0;
        }
        value = digit;
        for (;;) {
#ifdef __sgi
            if (file->_cnt <= 0) {
                B_1001C2C0 = __filbuf(file);
                if (B_1001C2C0 == EOF) {
                    break;
                } else {
                    ungetc(B_1001C2C0, file);
                }
            }
            digit = *file->_ptr - '0';
            if (digit < 10) {
                if (value >= 0xF3333334U) {
                    if (value >= 0xF3333335U || digit >= (unsigned int)-7) {
                        overflowed = 1;
                    }
                }
                value = value * 10 + digit;
                file->_cnt--;
                file->_ptr++;
                continue;
            }
#else
            digit = getc(file) - '0';
            if (digit < 10) {
                if (value >= 0xF3333334U) {
                    if (value >= 0xF3333335U || digit >= (unsigned int)-7) {
                        overflowed = 1;
                    }
                }
                value = value * 10 + digit;
                continue;
            }
            ungetc(digit + '0', file);
#endif
            break;
        }
        if (digit == '#' - '0' && value >= 2 && value < 36 && _libp_ansi_pascal == 0) {
            radix = value;
#ifdef __sgi
            file->_cnt--;
            file->_ptr++;
#else
            getc(file);
#endif
            ch = getc(file);
            new_radix = 1;
        }
    } else {
        new_radix = 1;
    }

    if (new_radix) {
        value = D_10011B70[ch];
        if (value >= radix) {
            fprintf(stderr, "Digit expected in read_integer; input is '%c'.\n", ch);
            return 0;
        }
        for (;;) {
#ifdef __sgi
            if (file->_cnt <= 0) {
                B_1001C2C0 = __filbuf(file);
                if (B_1001C2C0 == EOF) {
                    break;
                } else {
                    ungetc(B_1001C2C0, file);
                }
            }
            digit = D_10011B70[*file->_ptr & 0x7f];
            if (digit < radix) {
                file->_ptr++;
                file->_cnt--;
                value = value * radix + digit;
                continue;
            }
#else
            ch = getc(file);
            digit = D_10011B70[ch & 0x7f];
            if (digit < radix) {
                value = value * radix + digit;
                continue;
            }
            ungetc(ch, file);
#endif
            break;
        }
    }

    if (overflowed || (value == 0x80000000U && first_ch != '-')) {
        fprintf(stderr, "Overflow in read_integer.\n");
    }
    return first_ch == '-' ? (int)-value : (int)value;
}

// unused
int read_integer_range(FILE *file, int min, int max, unsigned int radix) {
    int ret = read_integer(file, radix);
    if (ret < min || ret > max) {
        fprintf(stderr, "Exceeds range in read_integer; input is '%d'.\n", ret);
    }
    return ret;
}

// unused
unsigned int read_cardinal(FILE *file, unsigned int radix) {
    int ch;
    int first_ch;
    int overflowed;
    unsigned int digit;
    int reached_eof;
    unsigned int value;
    int new_radix = 0;

    if (file == NULL) {
         fprintf(stderr, "Warning: read of cardinal attempted from unopened file.\n");
         return 0;
    }

    ch = getc(file);

    while (ch == ' ' || ch == '\t' || ch == '\n') {
        ch = getc(file);
    }

    overflowed = 0;
    if (radix == 10) {
        digit = ch - '0';
        if (digit >= 10) {
            fprintf(stderr, "Digit expected in read_cardinal; input is '%c'.\n", '0' + digit);
            return 0;
        }
        value = digit;
        for (;;) {
#ifdef __sgi
            if (file->_cnt <= 0) {
                B_1001C2C0 = __filbuf(file);
                if (B_1001C2C0 == EOF) {
                    break;
                } else {
                    ungetc(B_1001C2C0, file);
                }
            }
            digit = *file->_ptr - '0';
            if (digit < 10) {
                if (value >= 0x19999999U) {
                    if (value >= 0x1999999AU || digit >= 6) {
                        overflowed = 1;
                    }
                }
                value = value * 10 + digit;
                file->_cnt--;
                file->_ptr++;
                continue;
            }
#else
            digit = getc(file) - '0';
            if (digit < 10) {
                if (value >= 0x19999999U) {
                    if (value >= 0x1999999AU || digit >= 6) {
                        overflowed = 1;
                    }
                }
                value = value * 10 + digit;
                continue;
            }
            ungetc(digit + '0', file);
#endif
            break;
        }
        if (digit == '#' - '0' && value >= 2 && value < 36 && _libp_ansi_pascal == 0) {
            radix = value;
#ifdef __sgi
            file->_cnt--;
            file->_ptr++;
#else
            getc(file);
#endif
            ch = getc(file);
            new_radix = 1;
        }
    } else {
        new_radix = 1;
    }

    if (new_radix) {
        value = D_10011B70[ch];
        if (value >= radix) {
            fprintf(stderr, "Digit expected in read_cardinal; input is '%c'.\n", ch);
            return 0;
        }
        for (;;) {
#ifdef __sgi
            if (file->_cnt <= 0) {
                B_1001C2C0 = __filbuf(file);
                if (B_1001C2C0 == EOF) {
                    break;
                } else {
                    ungetc(B_1001C2C0, file);
                }
            }
            digit = D_10011B70[*file->_ptr & 0x7f];
            if (digit < radix) {
                file->_ptr++;
                file->_cnt--;
                value = value * radix + digit;
                continue;
            }
#else
            ch = getc(file);
            digit = D_10011B70[ch & 0x7f];
            if (digit < radix) {
                value = value * radix + digit;
                continue;
            }
            ungetc(ch, file);
#endif
            break;
        }
    }

    if (overflowed) {
        fprintf(stderr, "Overflow in read_cardinal.\n");
    }
    return value;
}

#if 0
glabel read_double
    .ent read_double
    # 004945F8 read_real
/* 00493C50 3C1C0FB8 */  .cpload $t9
/* 00493C54 279C6640 */  
/* 00493C58 0399E021 */  
/* 00493C5C 27BDFF48 */  addiu $sp, $sp, -0xb8
/* 00493C60 AFB10028 */  sw    $s1, 0x28($sp)
/* 00493C64 00808825 */  move  $s1, $a0
/* 00493C68 AFBF003C */  sw    $ra, 0x3c($sp)
/* 00493C6C AFBC0038 */  sw    $gp, 0x38($sp)
/* 00493C70 AFB40034 */  sw    $s4, 0x34($sp)
/* 00493C74 AFB30030 */  sw    $s3, 0x30($sp)
/* 00493C78 AFB2002C */  sw    $s2, 0x2c($sp)
/* 00493C7C AFB00024 */  sw    $s0, 0x24($sp)
/* 00493C80 F7B60018 */  sdc1  $f22, 0x18($sp)
/* 00493C84 1480000B */  bnez  $a0, .L00493CB4
/* 00493C88 F7B40010 */   sdc1  $f20, 0x10($sp)
/* 00493C8C 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 00493C90 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 00493C94 8F858044 */  lw    $a1, %got(RO_1000F7B0)($gp)
/* 00493C98 24840020 */  addiu $a0, $a0, 0x20
/* 00493C9C 0320F809 */  jalr  $t9
/* 00493CA0 24A5F7B0 */   addiu $a1, %lo(RO_1000F7B0) # addiu $a1, $a1, -0x850
/* 00493CA4 44800800 */  mtc1  $zero, $f1
/* 00493CA8 44800000 */  mtc1  $zero, $f0
/* 00493CAC 10000248 */  b     .L004945D0
/* 00493CB0 8FBC0038 */   lw    $gp, 0x38($sp)
.L00493CB4:
/* 00493CB4 8F8E8064 */  lw     $t6, %got(__us_rsthread_stdio)($gp)
/* 00493CB8 8DCE0000 */  lw    $t6, ($t6)
/* 00493CBC 51C00009 */  beql  $t6, $zero, .L00493CE4
/* 00493CC0 8E2F0000 */   lw    $t7, ($s1)
/* 00493CC4 8F998110 */  lw    $t9, %call16(__semgetc)($gp)
/* 00493CC8 02202025 */  move  $a0, $s1
/* 00493CCC 0320F809 */  jalr  $t9
/* 00493CD0 00000000 */   nop   
/* 00493CD4 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00493CD8 10000011 */  b     .L00493D20
/* 00493CDC 00403825 */   move  $a3, $v0
/* 00493CE0 8E2F0000 */  lw    $t7, ($s1)
.L00493CE4:
/* 00493CE4 25F8FFFF */  addiu $t8, $t7, -1
/* 00493CE8 07010008 */  bgez  $t8, .L00493D0C
/* 00493CEC AE380000 */   sw    $t8, ($s1)
/* 00493CF0 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 00493CF4 02202025 */  move  $a0, $s1
/* 00493CF8 0320F809 */  jalr  $t9
/* 00493CFC 00000000 */   nop   
/* 00493D00 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00493D04 10000005 */  b     .L00493D1C
/* 00493D08 00408025 */   move  $s0, $v0
.L00493D0C:
/* 00493D0C 8E230004 */  lw    $v1, 4($s1)
/* 00493D10 90700000 */  lbu   $s0, ($v1)
/* 00493D14 24680001 */  addiu $t0, $v1, 1
/* 00493D18 AE280004 */  sw    $t0, 4($s1)
.L00493D1C:
/* 00493D1C 02003825 */  move  $a3, $s0
.L00493D20:
/* 00493D20 24120020 */  li    $s2, 32
/* 00493D24 10F20005 */  beq   $a3, $s2, .L00493D3C
/* 00493D28 24130009 */   li    $s3, 9
/* 00493D2C 10F30003 */  beq   $a3, $s3, .L00493D3C
/* 00493D30 2401000A */   li    $at, 10
/* 00493D34 54E10025 */  bnel  $a3, $at, .L00493DCC
/* 00493D38 2401002D */   li    $at, 45
.L00493D3C:
/* 00493D3C 8F898064 */  lw     $t1, %got(__us_rsthread_stdio)($gp)
/* 00493D40 24130009 */  li    $s3, 9
/* 00493D44 8D290000 */  lw    $t1, ($t1)
/* 00493D48 51200009 */  beql  $t1, $zero, .L00493D70
/* 00493D4C 8E2A0000 */   lw    $t2, ($s1)
/* 00493D50 8F998110 */  lw    $t9, %call16(__semgetc)($gp)
/* 00493D54 02202025 */  move  $a0, $s1
/* 00493D58 0320F809 */  jalr  $t9
/* 00493D5C 00000000 */   nop   
/* 00493D60 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00493D64 10000011 */  b     .L00493DAC
/* 00493D68 00403825 */   move  $a3, $v0
/* 00493D6C 8E2A0000 */  lw    $t2, ($s1)
.L00493D70:
/* 00493D70 254BFFFF */  addiu $t3, $t2, -1
/* 00493D74 05610008 */  bgez  $t3, .L00493D98
/* 00493D78 AE2B0000 */   sw    $t3, ($s1)
/* 00493D7C 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 00493D80 02202025 */  move  $a0, $s1
/* 00493D84 0320F809 */  jalr  $t9
/* 00493D88 00000000 */   nop   
/* 00493D8C 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00493D90 10000005 */  b     .L00493DA8
/* 00493D94 00408025 */   move  $s0, $v0
.L00493D98:
/* 00493D98 8E230004 */  lw    $v1, 4($s1)
/* 00493D9C 90700000 */  lbu   $s0, ($v1)
/* 00493DA0 246D0001 */  addiu $t5, $v1, 1
/* 00493DA4 AE2D0004 */  sw    $t5, 4($s1)
.L00493DA8:
/* 00493DA8 02003825 */  move  $a3, $s0
.L00493DAC:
/* 00493DAC 10F2FFE3 */  beq   $a3, $s2, .L00493D3C
/* 00493DB0 00000000 */   nop   
/* 00493DB4 10F3FFE1 */  beq   $a3, $s3, .L00493D3C
/* 00493DB8 00000000 */   nop   
/* 00493DBC 2401000A */  li    $at, 10
/* 00493DC0 10E1FFDE */  beq   $a3, $at, .L00493D3C
/* 00493DC4 00000000 */   nop   
/* 00493DC8 2401002D */  li    $at, 45
.L00493DCC:
/* 00493DCC 10E10004 */  beq   $a3, $at, .L00493DE0
/* 00493DD0 AFA700B0 */   sw    $a3, 0xb0($sp)
/* 00493DD4 2401002B */  li    $at, 43
/* 00493DD8 54E1001D */  bnel  $a3, $at, .L00493E50
/* 00493DDC 24E7FFD0 */   addiu $a3, $a3, -0x30
.L00493DE0:
/* 00493DE0 8F8E8064 */  lw     $t6, %got(__us_rsthread_stdio)($gp)
/* 00493DE4 8DCE0000 */  lw    $t6, ($t6)
/* 00493DE8 51C00009 */  beql  $t6, $zero, .L00493E10
/* 00493DEC 8E2F0000 */   lw    $t7, ($s1)
/* 00493DF0 8F998110 */  lw    $t9, %call16(__semgetc)($gp)
/* 00493DF4 02202025 */  move  $a0, $s1
/* 00493DF8 0320F809 */  jalr  $t9
/* 00493DFC 00000000 */   nop   
/* 00493E00 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00493E04 10000011 */  b     .L00493E4C
/* 00493E08 00403825 */   move  $a3, $v0
/* 00493E0C 8E2F0000 */  lw    $t7, ($s1)
.L00493E10:
/* 00493E10 25F8FFFF */  addiu $t8, $t7, -1
/* 00493E14 07010008 */  bgez  $t8, .L00493E38
/* 00493E18 AE380000 */   sw    $t8, ($s1)
/* 00493E1C 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 00493E20 02202025 */  move  $a0, $s1
/* 00493E24 0320F809 */  jalr  $t9
/* 00493E28 00000000 */   nop   
/* 00493E2C 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00493E30 10000005 */  b     .L00493E48
/* 00493E34 00408025 */   move  $s0, $v0
.L00493E38:
/* 00493E38 8E230004 */  lw    $v1, 4($s1)
/* 00493E3C 90700000 */  lbu   $s0, ($v1)
/* 00493E40 24680001 */  addiu $t0, $v1, 1
/* 00493E44 AE280004 */  sw    $t0, 4($s1)
.L00493E48:
/* 00493E48 02003825 */  move  $a3, $s0
.L00493E4C:
/* 00493E4C 24E7FFD0 */  addiu $a3, $a3, -0x30
.L00493E50:
/* 00493E50 2CE1000A */  sltiu $at, $a3, 0xa
/* 00493E54 1420000C */  bnez  $at, .L00493E88
/* 00493E58 00003025 */   move  $a2, $zero
/* 00493E5C 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 00493E60 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 00493E64 8F858044 */  lw    $a1, %got(RO_1000F7E8)($gp)
/* 00493E68 24E60030 */  addiu $a2, $a3, 0x30
/* 00493E6C 24840020 */  addiu $a0, $a0, 0x20
/* 00493E70 0320F809 */  jalr  $t9
/* 00493E74 24A5F7E8 */   addiu $a1, %lo(RO_1000F7E8) # addiu $a1, $a1, -0x818
/* 00493E78 44800800 */  mtc1  $zero, $f1
/* 00493E7C 44800000 */  mtc1  $zero, $f0
/* 00493E80 100001D3 */  b     .L004945D0
/* 00493E84 8FBC0038 */   lw    $gp, 0x38($sp)
.L00493E88:
/* 00493E88 10E00003 */  beqz  $a3, .L00493E98
/* 00493E8C 27B40074 */   addiu $s4, $sp, 0x74
/* 00493E90 A3A70074 */  sb    $a3, 0x74($sp)
/* 00493E94 27B40075 */  addiu $s4, $sp, 0x75
.L00493E98:
/* 00493E98 8F928048 */  lw    $s2, %got(B_1001C2C0)($gp)
/* 00493E9C AFA700AC */  sw    $a3, 0xac($sp)
/* 00493EA0 00009825 */  move  $s3, $zero
/* 00493EA4 2652C2C0 */  addiu $s2, %lo(B_1001C2C0) # addiu $s2, $s2, -0x3d40
.L00493EA8:
/* 00493EA8 8E290000 */  lw    $t1, ($s1)
/* 00493EAC 5D20001B */  bgtzl $t1, .L00493F1C
/* 00493EB0 8E230004 */   lw    $v1, 4($s1)
/* 00493EB4 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 00493EB8 02202025 */  move  $a0, $s1
/* 00493EBC AFA60094 */  sw    $a2, 0x94($sp)
/* 00493EC0 0320F809 */  jalr  $t9
/* 00493EC4 AFA700B4 */   sw    $a3, 0xb4($sp)
/* 00493EC8 2401FFFF */  li    $at, -1
/* 00493ECC 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00493ED0 8FA60094 */  lw    $a2, 0x94($sp)
/* 00493ED4 8FA700B4 */  lw    $a3, 0xb4($sp)
/* 00493ED8 AE420000 */  sw    $v0, ($s2)
/* 00493EDC 14410003 */  bne   $v0, $at, .L00493EEC
/* 00493EE0 00402025 */   move  $a0, $v0
/* 00493EE4 1000000A */  b     .L00493F10
/* 00493EE8 24100001 */   li    $s0, 1
.L00493EEC:
/* 00493EEC 8F99810C */  lw    $t9, %call16(ungetc)($gp)
/* 00493EF0 02202825 */  move  $a1, $s1
/* 00493EF4 00008025 */  move  $s0, $zero
/* 00493EF8 AFA60094 */  sw    $a2, 0x94($sp)
/* 00493EFC 0320F809 */  jalr  $t9
/* 00493F00 AFA700B4 */   sw    $a3, 0xb4($sp)
/* 00493F04 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00493F08 8FA60094 */  lw    $a2, 0x94($sp)
/* 00493F0C 8FA700B4 */  lw    $a3, 0xb4($sp)
.L00493F10:
/* 00493F10 5600002C */  bnezl $s0, .L00493FC4
/* 00493F14 24080001 */   li    $t0, 1
/* 00493F18 8E230004 */  lw    $v1, 4($s1)
.L00493F1C:
/* 00493F1C 2401002E */  li    $at, 46
/* 00493F20 27AB0085 */  addiu $t3, $sp, 0x85
/* 00493F24 90670000 */  lbu   $a3, ($v1)
/* 00493F28 54E10007 */  bnel  $a3, $at, .L00493F48
/* 00493F2C 24E7FFD0 */   addiu $a3, $a3, -0x30
/* 00493F30 54C00005 */  bnezl $a2, .L00493F48
/* 00493F34 24E7FFD0 */   addiu $a3, $a3, -0x30
/* 00493F38 24060001 */  li    $a2, 1
/* 00493F3C 1000001B */  b     .L00493FAC
/* 00493F40 8E240000 */   lw    $a0, ($s1)
/* 00493F44 24E7FFD0 */  addiu $a3, $a3, -0x30
.L00493F48:
/* 00493F48 2CE1000A */  sltiu $at, $a3, 0xa
/* 00493F4C 1020001C */  beqz  $at, .L00493FC0
/* 00493F50 27AC0074 */   addiu $t4, $sp, 0x74
/* 00493F54 168B0005 */  bne   $s4, $t3, .L00493F6C
/* 00493F58 00000000 */   nop   
/* 00493F5C 14C0000D */  bnez  $a2, .L00493F94
/* 00493F60 8E240000 */   lw    $a0, ($s1)
/* 00493F64 1000000B */  b     .L00493F94
/* 00493F68 26730001 */   addiu $s3, $s3, 1
.L00493F6C:
/* 00493F6C 168C0005 */  bne   $s4, $t4, .L00493F84
/* 00493F70 02669823 */   subu  $s3, $s3, $a2
/* 00493F74 54E00004 */  bnezl $a3, .L00493F88
/* 00493F78 A2870000 */   sb    $a3, ($s4)
/* 00493F7C 10000005 */  b     .L00493F94
/* 00493F80 8E240000 */   lw    $a0, ($s1)
.L00493F84:
/* 00493F84 A2870000 */  sb    $a3, ($s4)
.L00493F88:
/* 00493F88 8E230004 */  lw    $v1, 4($s1)
/* 00493F8C 8E240000 */  lw    $a0, ($s1)
/* 00493F90 26940001 */  addiu $s4, $s4, 1
.L00493F94:
/* 00493F94 8FAD00AC */  lw    $t5, 0xac($sp)
/* 00493F98 000D7080 */  sll   $t6, $t5, 2
/* 00493F9C 01CD7021 */  addu  $t6, $t6, $t5
/* 00493FA0 000E7040 */  sll   $t6, $t6, 1
/* 00493FA4 01C77821 */  addu  $t7, $t6, $a3
/* 00493FA8 AFAF00AC */  sw    $t7, 0xac($sp)
.L00493FAC:
/* 00493FAC 2498FFFF */  addiu $t8, $a0, -1
/* 00493FB0 24790001 */  addiu $t9, $v1, 1
/* 00493FB4 AE380000 */  sw    $t8, ($s1)
/* 00493FB8 1000FFBB */  b     .L00493EA8
/* 00493FBC AE390004 */   sw    $t9, 4($s1)
.L00493FC0:
/* 00493FC0 24080001 */  li    $t0, 1
.L00493FC4:
/* 00493FC4 2401FFF3 */  li    $at, -13
/* 00493FC8 14E100B6 */  bne   $a3, $at, .L004942A4
/* 00493FCC AFA80090 */   sw    $t0, 0x90($sp)
/* 00493FD0 14C000B4 */  bnez  $a2, .L004942A4
/* 00493FD4 8FA900AC */   lw    $t1, 0xac($sp)
/* 00493FD8 2D210002 */  sltiu $at, $t1, 2
/* 00493FDC 142000B1 */  bnez  $at, .L004942A4
/* 00493FE0 2D210024 */   sltiu $at, $t1, 0x24
/* 00493FE4 502000B0 */  beql  $at, $zero, .L004942A8
/* 00493FE8 24010035 */   li    $at, 53
/* 00493FEC 8F8A8CC4 */  lw     $t2, %got(_libp_ansi_pascal)($gp)
/* 00493FF0 D7B400A0 */  ldc1  $f20, 0xa0($sp)
/* 00493FF4 8D4A0000 */  lw    $t2, ($t2)
/* 00493FF8 554000AB */  bnezl $t2, .L004942A8
/* 00493FFC 24010035 */   li    $at, 53
/* 00494000 8E2B0000 */  lw    $t3, ($s1)
/* 00494004 8E2D0004 */  lw    $t5, 4($s1)
/* 00494008 8F8F8064 */  lw     $t7, %got(__us_rsthread_stdio)($gp)
/* 0049400C 256CFFFF */  addiu $t4, $t3, -1
/* 00494010 25AE0001 */  addiu $t6, $t5, 1
/* 00494014 AE2C0000 */  sw    $t4, ($s1)
/* 00494018 AE2E0004 */  sw    $t6, 4($s1)
/* 0049401C 8DEF0000 */  lw    $t7, ($t7)
/* 00494020 51E0000B */  beql  $t7, $zero, .L00494050
/* 00494024 8E380000 */   lw    $t8, ($s1)
/* 00494028 8F998110 */  lw    $t9, %call16(__semgetc)($gp)
/* 0049402C 02202025 */  move  $a0, $s1
/* 00494030 AFA60094 */  sw    $a2, 0x94($sp)
/* 00494034 0320F809 */  jalr  $t9
/* 00494038 00000000 */   nop   
/* 0049403C 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00494040 8FA60094 */  lw    $a2, 0x94($sp)
/* 00494044 10000013 */  b     .L00494094
/* 00494048 00408025 */   move  $s0, $v0
/* 0049404C 8E380000 */  lw    $t8, ($s1)
.L00494050:
/* 00494050 2719FFFF */  addiu $t9, $t8, -1
/* 00494054 0721000A */  bgez  $t9, .L00494080
/* 00494058 AE390000 */   sw    $t9, ($s1)
/* 0049405C 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 00494060 02202025 */  move  $a0, $s1
/* 00494064 AFA60094 */  sw    $a2, 0x94($sp)
/* 00494068 0320F809 */  jalr  $t9
/* 0049406C 00000000 */   nop   
/* 00494070 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00494074 8FA60094 */  lw    $a2, 0x94($sp)
/* 00494078 10000005 */  b     .L00494090
/* 0049407C 00402025 */   move  $a0, $v0
.L00494080:
/* 00494080 8E230004 */  lw    $v1, 4($s1)
/* 00494084 90640000 */  lbu   $a0, ($v1)
/* 00494088 24690001 */  addiu $t1, $v1, 1
/* 0049408C AE290004 */  sw    $t1, 4($s1)
.L00494090:
/* 00494090 00808025 */  move  $s0, $a0
.L00494094:
/* 00494094 8F8C8044 */  lw    $t4, %got(D_10011B70)($gp)
/* 00494098 320A007F */  andi  $t2, $s0, 0x7f
/* 0049409C AFAA0044 */  sw    $t2, 0x44($sp)
/* 004940A0 258C1B70 */  addiu $t4, %lo(D_10011B70) # addiu $t4, $t4, 0x1b70
/* 004940A4 014C6821 */  addu  $t5, $t2, $t4
/* 004940A8 91A20000 */  lbu   $v0, ($t5)
/* 004940AC 8FAE00AC */  lw    $t6, 0xac($sp)
/* 004940B0 01403825 */  move  $a3, $t2
/* 004940B4 004E082B */  sltu  $at, $v0, $t6
/* 004940B8 5420000D */  bnezl $at, .L004940F0
/* 004940BC 44822000 */   mtc1  $v0, $f4
/* 004940C0 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 004940C4 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 004940C8 8F858044 */  lw    $a1, %got(RO_1000F818)($gp)
/* 004940CC 01403025 */  move  $a2, $t2
/* 004940D0 24840020 */  addiu $a0, $a0, 0x20
/* 004940D4 0320F809 */  jalr  $t9
/* 004940D8 24A5F818 */   addiu $a1, %lo(RO_1000F818) # addiu $a1, $a1, -0x7e8
/* 004940DC 44800800 */  mtc1  $zero, $f1
/* 004940E0 44800000 */  mtc1  $zero, $f0
/* 004940E4 1000013A */  b     .L004945D0
/* 004940E8 8FBC0038 */   lw    $gp, 0x38($sp)
/* 004940EC 44822000 */  mtc1  $v0, $f4
.L004940F0:
/* 004940F0 3C0141F0 */  li    $at, 0x41F00000 # 30.000000
/* 004940F4 04410005 */  bgez  $v0, .L0049410C
/* 004940F8 468025A1 */   cvt.d.w $f22, $f4
/* 004940FC 44813800 */  mtc1  $at, $f7
/* 00494100 44803000 */  mtc1  $zero, $f6
/* 00494104 00000000 */  nop   
/* 00494108 4626B580 */  add.d $f22, $f22, $f6
.L0049410C:
/* 0049410C 8E2F0000 */  lw    $t7, ($s1)
/* 00494110 5DE0001B */  bgtzl $t7, .L00494180
/* 00494114 8E230004 */   lw    $v1, 4($s1)
/* 00494118 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 0049411C 02202025 */  move  $a0, $s1
/* 00494120 AFA60094 */  sw    $a2, 0x94($sp)
/* 00494124 0320F809 */  jalr  $t9
/* 00494128 AFA700B4 */   sw    $a3, 0xb4($sp)
/* 0049412C 2401FFFF */  li    $at, -1
/* 00494130 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00494134 8FA60094 */  lw    $a2, 0x94($sp)
/* 00494138 8FA700B4 */  lw    $a3, 0xb4($sp)
/* 0049413C AE420000 */  sw    $v0, ($s2)
/* 00494140 14410003 */  bne   $v0, $at, .L00494150
/* 00494144 00402025 */   move  $a0, $v0
/* 00494148 1000000A */  b     .L00494174
/* 0049414C 24100001 */   li    $s0, 1
.L00494150:
/* 00494150 8F99810C */  lw    $t9, %call16(ungetc)($gp)
/* 00494154 02202825 */  move  $a1, $s1
/* 00494158 00008025 */  move  $s0, $zero
/* 0049415C AFA60094 */  sw    $a2, 0x94($sp)
/* 00494160 0320F809 */  jalr  $t9
/* 00494164 AFA700B4 */   sw    $a3, 0xb4($sp)
/* 00494168 8FBC0038 */  lw    $gp, 0x38($sp)
/* 0049416C 8FA60094 */  lw    $a2, 0x94($sp)
/* 00494170 8FA700B4 */  lw    $a3, 0xb4($sp)
.L00494174:
/* 00494174 56000026 */  bnezl $s0, .L00494210
/* 00494178 24010023 */   li    $at, 35
/* 0049417C 8E230004 */  lw    $v1, 4($s1)
.L00494180:
/* 00494180 8F988044 */  lw    $t8, %got(D_10011B70)($gp)
/* 00494184 8FA800AC */  lw    $t0, 0xac($sp)
/* 00494188 90670000 */  lbu   $a3, ($v1)
/* 0049418C 27181B70 */  addiu $t8, %lo(D_10011B70) # addiu $t8, $t8, 0x1b70
/* 00494190 246A0001 */  addiu $t2, $v1, 1
/* 00494194 30E7007F */  andi  $a3, $a3, 0x7f
/* 00494198 00F8C821 */  addu  $t9, $a3, $t8
/* 0049419C 93220000 */  lbu   $v0, ($t9)
/* 004941A0 0048082B */  sltu  $at, $v0, $t0
/* 004941A4 50200010 */  beql  $at, $zero, .L004941E8
/* 004941A8 2401002E */   li    $at, 46
/* 004941AC 44825000 */  mtc1  $v0, $f10
/* 004941B0 4634B202 */  mul.d $f8, $f22, $f20
/* 004941B4 3C0141F0 */  li    $at, 0x41F00000 # 30.000000
/* 004941B8 04410005 */  bgez  $v0, .L004941D0
/* 004941BC 46805421 */   cvt.d.w $f16, $f10
/* 004941C0 44819800 */  mtc1  $at, $f19
/* 004941C4 44809000 */  mtc1  $zero, $f18
/* 004941C8 00000000 */  nop   
/* 004941CC 46328400 */  add.d $f16, $f16, $f18
.L004941D0:
/* 004941D0 46304580 */  add.d $f22, $f8, $f16
/* 004941D4 10C00009 */  beqz  $a2, .L004941FC
/* 004941D8 8E240000 */   lw    $a0, ($s1)
/* 004941DC 10000007 */  b     .L004941FC
/* 004941E0 2673FFFF */   addiu $s3, $s3, -1
/* 004941E4 2401002E */  li    $at, 46
.L004941E8:
/* 004941E8 54E10009 */  bnel  $a3, $at, .L00494210
/* 004941EC 24010023 */   li    $at, 35
/* 004941F0 14C00006 */  bnez  $a2, .L0049420C
/* 004941F4 24060001 */   li    $a2, 1
/* 004941F8 8E240000 */  lw    $a0, ($s1)
.L004941FC:
/* 004941FC 2489FFFF */  addiu $t1, $a0, -1
/* 00494200 AE290000 */  sw    $t1, ($s1)
/* 00494204 1000FFC1 */  b     .L0049410C
/* 00494208 AE2A0004 */   sw    $t2, 4($s1)
.L0049420C:
/* 0049420C 24010023 */  li    $at, 35
.L00494210:
/* 00494210 54E10021 */  bnel  $a3, $at, .L00494298
/* 00494214 24E7FFD0 */   addiu $a3, $a3, -0x30
/* 00494218 8E2C0000 */  lw    $t4, ($s1)
/* 0049421C 8E2E0004 */  lw    $t6, 4($s1)
/* 00494220 258DFFFF */  addiu $t5, $t4, -1
/* 00494224 25CB0001 */  addiu $t3, $t6, 1
/* 00494228 AE2D0000 */  sw    $t5, ($s1)
/* 0049422C 1DA00017 */  bgtz  $t5, .L0049428C
/* 00494230 AE2B0004 */   sw    $t3, 4($s1)
/* 00494234 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 00494238 02202025 */  move  $a0, $s1
/* 0049423C AFA700B4 */  sw    $a3, 0xb4($sp)
/* 00494240 0320F809 */  jalr  $t9
/* 00494244 00000000 */   nop   
/* 00494248 2401FFFF */  li    $at, -1
/* 0049424C 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00494250 8FA700B4 */  lw    $a3, 0xb4($sp)
/* 00494254 AE420000 */  sw    $v0, ($s2)
/* 00494258 14410003 */  bne   $v0, $at, .L00494268
/* 0049425C 00402025 */   move  $a0, $v0
/* 00494260 10000008 */  b     .L00494284
/* 00494264 24100001 */   li    $s0, 1
.L00494268:
/* 00494268 8F99810C */  lw    $t9, %call16(ungetc)($gp)
/* 0049426C 02202825 */  move  $a1, $s1
/* 00494270 00008025 */  move  $s0, $zero
/* 00494274 0320F809 */  jalr  $t9
/* 00494278 AFA700B4 */   sw    $a3, 0xb4($sp)
/* 0049427C 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00494280 8FA700B4 */  lw    $a3, 0xb4($sp)
.L00494284:
/* 00494284 56000004 */  bnezl $s0, .L00494298
/* 00494288 24E7FFD0 */   addiu $a3, $a3, -0x30
.L0049428C:
/* 0049428C 8E380004 */  lw    $t8, 4($s1)
/* 00494290 93070000 */  lbu   $a3, ($t8)
/* 00494294 24E7FFD0 */  addiu $a3, $a3, -0x30
.L00494298:
/* 00494298 AFA00090 */  sw    $zero, 0x90($sp)
/* 0049429C F7B40098 */  sdc1  $f20, 0x98($sp)
/* 004942A0 F7B600A0 */  sdc1  $f22, 0xa0($sp)
.L004942A4:
/* 004942A4 24010035 */  li    $at, 53
.L004942A8:
/* 004942A8 D7B40098 */  ldc1  $f20, 0x98($sp)
/* 004942AC 10E10004 */  beq   $a3, $at, .L004942C0
/* 004942B0 D7B600A0 */   ldc1  $f22, 0xa0($sp)
/* 004942B4 24010015 */  li    $at, 21
/* 004942B8 54E10083 */  bnel  $a3, $at, .L004944C8
/* 004942BC 8FB90090 */   lw    $t9, 0x90($sp)
.L004942C0:
/* 004942C0 8E390000 */  lw    $t9, ($s1)
/* 004942C4 8E290004 */  lw    $t1, 4($s1)
/* 004942C8 8F8C8064 */  lw     $t4, %got(__us_rsthread_stdio)($gp)
/* 004942CC 2728FFFF */  addiu $t0, $t9, -1
/* 004942D0 252A0001 */  addiu $t2, $t1, 1
/* 004942D4 AE280000 */  sw    $t0, ($s1)
/* 004942D8 AE2A0004 */  sw    $t2, 4($s1)
/* 004942DC 8D8C0000 */  lw    $t4, ($t4)
/* 004942E0 51800009 */  beql  $t4, $zero, .L00494308
/* 004942E4 8E2D0000 */   lw    $t5, ($s1)
/* 004942E8 8F998110 */  lw    $t9, %call16(__semgetc)($gp)
/* 004942EC 02202025 */  move  $a0, $s1
/* 004942F0 0320F809 */  jalr  $t9
/* 004942F4 00000000 */   nop   
/* 004942F8 8FBC0038 */  lw    $gp, 0x38($sp)
/* 004942FC 10000011 */  b     .L00494344
/* 00494300 00403825 */   move  $a3, $v0
/* 00494304 8E2D0000 */  lw    $t5, ($s1)
.L00494308:
/* 00494308 25AEFFFF */  addiu $t6, $t5, -1
/* 0049430C 05C10008 */  bgez  $t6, .L00494330
/* 00494310 AE2E0000 */   sw    $t6, ($s1)
/* 00494314 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 00494318 02202025 */  move  $a0, $s1
/* 0049431C 0320F809 */  jalr  $t9
/* 00494320 00000000 */   nop   
/* 00494324 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00494328 10000005 */  b     .L00494340
/* 0049432C 00408025 */   move  $s0, $v0
.L00494330:
/* 00494330 8E230004 */  lw    $v1, 4($s1)
/* 00494334 90700000 */  lbu   $s0, ($v1)
/* 00494338 246F0001 */  addiu $t7, $v1, 1
/* 0049433C AE2F0004 */  sw    $t7, 4($s1)
.L00494340:
/* 00494340 02003825 */  move  $a3, $s0
.L00494344:
/* 00494344 2401002D */  li    $at, 45
/* 00494348 10E10004 */  beq   $a3, $at, .L0049435C
/* 0049434C AFA70068 */   sw    $a3, 0x68($sp)
/* 00494350 2401002B */  li    $at, 43
/* 00494354 54E1001D */  bnel  $a3, $at, .L004943CC
/* 00494358 24E7FFD0 */   addiu $a3, $a3, -0x30
.L0049435C:
/* 0049435C 8F988064 */  lw     $t8, %got(__us_rsthread_stdio)($gp)
/* 00494360 8F180000 */  lw    $t8, ($t8)
/* 00494364 53000009 */  beql  $t8, $zero, .L0049438C
/* 00494368 8E390000 */   lw    $t9, ($s1)
/* 0049436C 8F998110 */  lw    $t9, %call16(__semgetc)($gp)
/* 00494370 02202025 */  move  $a0, $s1
/* 00494374 0320F809 */  jalr  $t9
/* 00494378 00000000 */   nop   
/* 0049437C 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00494380 10000011 */  b     .L004943C8
/* 00494384 00403825 */   move  $a3, $v0
/* 00494388 8E390000 */  lw    $t9, ($s1)
.L0049438C:
/* 0049438C 2728FFFF */  addiu $t0, $t9, -1
/* 00494390 05010008 */  bgez  $t0, .L004943B4
/* 00494394 AE280000 */   sw    $t0, ($s1)
/* 00494398 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 0049439C 02202025 */  move  $a0, $s1
/* 004943A0 0320F809 */  jalr  $t9
/* 004943A4 00000000 */   nop   
/* 004943A8 8FBC0038 */  lw    $gp, 0x38($sp)
/* 004943AC 10000005 */  b     .L004943C4
/* 004943B0 00408025 */   move  $s0, $v0
.L004943B4:
/* 004943B4 8E230004 */  lw    $v1, 4($s1)
/* 004943B8 90700000 */  lbu   $s0, ($v1)
/* 004943BC 246A0001 */  addiu $t2, $v1, 1
/* 004943C0 AE2A0004 */  sw    $t2, 4($s1)
.L004943C4:
/* 004943C4 02003825 */  move  $a3, $s0
.L004943C8:
/* 004943C8 24E7FFD0 */  addiu $a3, $a3, -0x30
.L004943CC:
/* 004943CC 2CE1000A */  sltiu $at, $a3, 0xa
/* 004943D0 1420000C */  bnez  $at, .L00494404
/* 004943D4 00E03025 */   move  $a2, $a3
/* 004943D8 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 004943DC 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 004943E0 8F858044 */  lw    $a1, %got(RO_1000F848)($gp)
/* 004943E4 24E60030 */  addiu $a2, $a3, 0x30
/* 004943E8 24840020 */  addiu $a0, $a0, 0x20
/* 004943EC 0320F809 */  jalr  $t9
/* 004943F0 24A5F848 */   addiu $a1, %lo(RO_1000F848) # addiu $a1, $a1, -0x7b8
/* 004943F4 44800800 */  mtc1  $zero, $f1
/* 004943F8 44800000 */  mtc1  $zero, $f0
/* 004943FC 10000074 */  b     .L004945D0
/* 00494400 8FBC0038 */   lw    $gp, 0x38($sp)
.L00494404:
/* 00494404 8E2C0000 */  lw    $t4, ($s1)
/* 00494408 5D800018 */  bgtzl $t4, .L0049446C
/* 0049440C 8E230004 */   lw    $v1, 4($s1)
/* 00494410 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 00494414 02202025 */  move  $a0, $s1
/* 00494418 AFA60064 */  sw    $a2, 0x64($sp)
/* 0049441C 0320F809 */  jalr  $t9
/* 00494420 00000000 */   nop   
/* 00494424 2401FFFF */  li    $at, -1
/* 00494428 8FBC0038 */  lw    $gp, 0x38($sp)
/* 0049442C 8FA60064 */  lw    $a2, 0x64($sp)
/* 00494430 AE420000 */  sw    $v0, ($s2)
/* 00494434 14410003 */  bne   $v0, $at, .L00494444
/* 00494438 00402025 */   move  $a0, $v0
/* 0049443C 10000008 */  b     .L00494460
/* 00494440 24100001 */   li    $s0, 1
.L00494444:
/* 00494444 8F99810C */  lw    $t9, %call16(ungetc)($gp)
/* 00494448 02202825 */  move  $a1, $s1
/* 0049444C 00008025 */  move  $s0, $zero
/* 00494450 0320F809 */  jalr  $t9
/* 00494454 AFA60064 */   sw    $a2, 0x64($sp)
/* 00494458 8FBC0038 */  lw    $gp, 0x38($sp)
/* 0049445C 8FA60064 */  lw    $a2, 0x64($sp)
.L00494460:
/* 00494460 56000012 */  bnezl $s0, .L004944AC
/* 00494464 8FB80068 */   lw    $t8, 0x68($sp)
/* 00494468 8E230004 */  lw    $v1, 4($s1)
.L0049446C:
/* 0049446C 00066880 */  sll   $t5, $a2, 2
/* 00494470 01A66821 */  addu  $t5, $t5, $a2
/* 00494474 90670000 */  lbu   $a3, ($v1)
/* 00494478 000D6840 */  sll   $t5, $t5, 1
/* 0049447C 246F0001 */  addiu $t7, $v1, 1
/* 00494480 24E7FFD0 */  addiu $a3, $a3, -0x30
/* 00494484 2CE1000A */  sltiu $at, $a3, 0xa
/* 00494488 50200008 */  beql  $at, $zero, .L004944AC
/* 0049448C 8FB80068 */   lw    $t8, 0x68($sp)
/* 00494490 8E2E0000 */  lw    $t6, ($s1)
/* 00494494 01A73021 */  addu  $a2, $t5, $a3
/* 00494498 AE2F0004 */  sw    $t7, 4($s1)
/* 0049449C 25CBFFFF */  addiu $t3, $t6, -1first_ch == '-' ? (int)-value : (int)value;
/* 004944A0 1000FFD8 */  b     .L00494404
/* 004944A4 AE2B0000 */   sw    $t3, ($s1)
/* 004944A8 8FB80068 */  lw    $t8, 0x68($sp)
.L004944AC:
/* 004944AC 2401002D */  li    $at, 45
/* 004944B0 57010004 */  bnel  $t8, $at, .L004944C4
/* 004944B4 02669821 */   addu  $s3, $s3, $a2
/* 004944B8 10000002 */  b     .L004944C4
/* 004944BC 02669823 */   subu  $s3, $s3, $a2
/* 004944C0 02669821 */  addu  $s3, $s3, $a2
.L004944C4:
/* 004944C4 8FB90090 */  lw    $t9, 0x90($sp)
.L004944C8:
/* 004944C8 27A80074 */  addiu $t0, $sp, 0x74
/* 004944CC 13200018 */  beqz  $t9, .L00494530
/* 004944D0 00000000 */   nop   
/* 004944D4 12880003 */  beq   $s4, $t0, .L004944E4
/* 004944D8 2A61FEAC */   slti  $at, $s3, -0x154
/* 004944DC 50200006 */  beql  $at, $zero, .L004944F8
/* 004944E0 2A610135 */   slti  $at, $s3, 0x135
.L004944E4:
/* 004944E4 4480B800 */  mtc1  $zero, $f23
/* 004944E8 4480B000 */  mtc1  $zero, $f22
/* 004944EC 10000031 */  b     .L004945B4
/* 004944F0 8FAC00B0 */   lw    $t4, 0xb0($sp)
/* 004944F4 2A610135 */  slti  $at, $s3, 0x135
.L004944F8:
/* 004944F8 14200005 */  bnez  $at, .L00494510
/* 004944FC 3C017FF0 */   li    $at, 0x7FF00000 # nan
/* 00494500 4481B800 */  mtc1  $at, $f23
/* 00494504 4480B000 */  mtc1  $zero, $f22
/* 00494508 1000002A */  b     .L004945B4
/* 0049450C 8FAC00B0 */   lw    $t4, 0xb0($sp)
.L00494510:
/* 00494510 8F998114 */  lw    $t9, %call16(_atod)($gp)
/* 00494514 27A40074 */  addiu $a0, $sp, 0x74
/* 00494518 02842823 */  subu  $a1, $s4, $a0
/* 0049451C 0320F809 */  jalr  $t9
/* 00494520 02603025 */   move  $a2, $s3
/* 00494524 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00494528 10000021 */  b     .L004945B0
/* 0049452C 46200586 */   mov.d $f22, $f0
.L00494530:
/* 00494530 1260001F */  beqz  $s3, .L004945B0
/* 00494534 3C013FF0 */   li    $at, 0x3FF00000 # 1.875000
/* 00494538 06610003 */  bgez  $s3, .L00494548
/* 0049453C 02601025 */   move  $v0, $s3
/* 00494540 10000001 */  b     .L00494548
/* 00494544 00131023 */   negu  $v0, $s3
.L00494548:
/* 00494548 44810800 */  mtc1  $at, $f1
/* 0049454C 3C014030 */  li    $at, 0x40300000 # 2.750000
/* 00494550 44812800 */  mtc1  $at, $f5
/* 00494554 44802000 */  mtc1  $zero, $f4
/* 00494558 44800000 */  mtc1  $zero, $f0
/* 0049455C 4624A503 */  div.d $f20, $f20, $f4
.L00494560:
/* 00494560 304A0001 */  andi  $t2, $v0, 1
/* 00494564 11400002 */  beqz  $t2, .L00494570
/* 00494568 00021042 */   srl   $v0, $v0, 1
/* 0049456C 46340002 */  mul.d $f0, $f0, $f20
.L00494570:
/* 00494570 10400003 */  beqz  $v0, .L00494580
/* 00494574 00000000 */   nop   
/* 00494578 1000FFF9 */  b     .L00494560
/* 0049457C 4634A502 */   mul.d $f20, $f20, $f20
.L00494580:
/* 00494580 06630004 */  bgezl $s3, .L00494594
/* 00494584 4620B582 */   mul.d $f22, $f22, $f0
/* 00494588 10000002 */  b     .L00494594
/* 0049458C 4620B583 */   div.d $f22, $f22, $f0
/* 00494590 4620B582 */  mul.d $f22, $f22, $f0
.L00494594:
/* 00494594 8F998118 */  lw    $t9, %call16(ldexp)($gp)
/* 00494598 4620B306 */  mov.d $f12, $f22
/* 0049459C 00133080 */  sll   $a2, $s3, 2
/* 004945A0 0320F809 */  jalr  $t9
/* 004945A4 00000000 */   nop   
/* 004945A8 8FBC0038 */  lw    $gp, 0x38($sp)
/* 004945AC 46200586 */  mov.d $f22, $f0
.L004945B0:
/* 004945B0 8FAC00B0 */  lw    $t4, 0xb0($sp)
.L004945B4:
/* 004945B4 2401002D */  li    $at, 45
/* 004945B8 55810004 */  bnel  $t4, $at, .L004945CC
/* 004945BC 4620B086 */   mov.d $f2, $f22
/* 004945C0 10000002 */  b     .L004945CC
/* 004945C4 4620B087 */   neg.d $f2, $f22
/* 004945C8 4620B086 */  mov.d $f2, $f22
.L004945CC:
/* 004945CC 46201006 */  mov.d $f0, $f2
.L004945D0:
/* 004945D0 8FBF003C */  lw    $ra, 0x3c($sp)
/* 004945D4 D7B40010 */  ldc1  $f20, 0x10($sp)
/* 004945D8 D7B60018 */  ldc1  $f22, 0x18($sp)
/* 004945DC 8FB00024 */  lw    $s0, 0x24($sp)
/* 004945E0 8FB10028 */  lw    $s1, 0x28($sp)
/* 004945E4 8FB2002C */  lw    $s2, 0x2c($sp)
/* 004945E8 8FB30030 */  lw    $s3, 0x30($sp)
/* 004945EC 8FB40034 */  lw    $s4, 0x34($sp)
/* 004945F0 03E00008 */  jr    $ra
/* 004945F4 27BD00B8 */   addiu $sp, $sp, 0xb8
    .type read_double, @function
    .size read_double, .-read_double
    .end read_double

glabel read_real
    .ent read_real
/* 004945F8 3C1C0FB8 */  .cpload $t9
/* 004945FC 279C5C98 */  
/* 00494600 0399E021 */  
/* 00494604 8F998860 */  lw    $t9, %call16(read_double)($gp)
/* 00494608 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0049460C AFBF001C */  sw    $ra, 0x1c($sp)
/* 00494610 0320F809 */  jalr  $t9
/* 00494614 AFBC0018 */   sw    $gp, 0x18($sp)
/* 00494618 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0049461C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00494620 27BD0020 */  addiu $sp, $sp, 0x20
/* 00494624 03E00008 */  jr    $ra
/* 00494628 46200020 */   cvt.s.d $f0, $f0
    .type read_real, @function
    .size read_real, .-read_real
    .end read_real

glabel read_int64
    .ent read_int64
/* 0049462C 3C1C0FB8 */  .cpload $t9
/* 00494630 279C5C64 */  
/* 00494634 0399E021 */  
/* 00494638 27BDFF80 */  addiu $sp, $sp, -0x80
/* 0049463C 8F9980A8 */  lw    $t9, %call16(__ll_mul)($gp)
/* 00494640 AFB1001C */  sw    $s1, 0x1c($sp)
/* 00494644 AFA50084 */  sw    $a1, 0x84($sp)
/* 00494648 00808825 */  move  $s1, $a0
/* 0049464C AFBF002C */  sw    $ra, 0x2c($sp)
/* 00494650 3C057FFF */  lui   $a1, 0x7fff
/* 00494654 AFBC0028 */  sw    $gp, 0x28($sp)
/* 00494658 AFB30024 */  sw    $s3, 0x24($sp)
/* 0049465C AFB20020 */  sw    $s2, 0x20($sp)
/* 00494660 AFB00018 */  sw    $s0, 0x18($sp)
/* 00494664 34A5FFFF */  ori   $a1, $a1, 0xffff
/* 00494668 24040000 */  li    $a0, 0
/* 0049466C 24060000 */  li    $a2, 0
/* 00494670 0320F809 */  jalr  $t9
/* 00494674 24070002 */   li    $a3, 2
/* 00494678 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0049467C 246F0001 */  addiu $t7, $v1, 1
/* 00494680 2DE10001 */  sltiu $at, $t7, 1
/* 00494684 8F9980A8 */  lw    $t9, %call16(__ll_mul)($gp)
/* 00494688 00417021 */  addu  $t6, $v0, $at
/* 0049468C 3C057FFF */  lui   $a1, 0x7fff
/* 00494690 AFAE0048 */  sw    $t6, 0x48($sp)
/* 00494694 AFAF004C */  sw    $t7, 0x4c($sp)
/* 00494698 34A5FFFF */  ori   $a1, $a1, 0xffff
/* 0049469C 24040000 */  li    $a0, 0
/* 004946A0 24060000 */  li    $a2, 0
/* 004946A4 0320F809 */  jalr  $t9
/* 004946A8 24070002 */   li    $a3, 2
/* 004946AC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004946B0 00402025 */  move  $a0, $v0
/* 004946B4 00602825 */  move  $a1, $v1
/* 004946B8 8F9980A8 */  lw    $t9, %call16(__ll_mul)($gp)
/* 004946BC 24060000 */  li    $a2, 0
/* 004946C0 3C078000 */  lui   $a3, 0x8000
/* 004946C4 0320F809 */  jalr  $t9
/* 004946C8 00000000 */   nop   
/* 004946CC 8FB9004C */  lw    $t9, 0x4c($sp)
/* 004946D0 8FB80048 */  lw    $t8, 0x48($sp)
/* 004946D4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004946D8 00794821 */  addu  $t1, $v1, $t9
/* 004946DC 0139082B */  sltu  $at, $t1, $t9
/* 004946E0 00224021 */  addu  $t0, $at, $v0
/* 004946E4 01184021 */  addu  $t0, $t0, $t8
/* 004946E8 AFA80058 */  sw    $t0, 0x58($sp)
/* 004946EC 1620000B */  bnez  $s1, .L0049471C
/* 004946F0 AFA9005C */   sw    $t1, 0x5c($sp)
/* 004946F4 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 004946F8 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 004946FC 8F858044 */  lw    $a1, %got(RO_1000F884)($gp)
/* 00494700 24840020 */  addiu $a0, $a0, 0x20
/* 00494704 0320F809 */  jalr  $t9
/* 00494708 24A5F884 */   addiu $a1, %lo(RO_1000F884) # addiu $a1, $a1, -0x77c
/* 0049470C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00494710 24020000 */  li    $v0, 0
/* 00494714 10000197 */  b     .L00494D74
/* 00494718 24030000 */   li    $v1, 0
.L0049471C:
/* 0049471C 8F8A8064 */  lw     $t2, %got(__us_rsthread_stdio)($gp)
/* 00494720 8D4A0000 */  lw    $t2, ($t2)
/* 00494724 51400009 */  beql  $t2, $zero, .L0049474C
/* 00494728 8E2B0000 */   lw    $t3, ($s1)
/* 0049472C 8F998110 */  lw    $t9, %call16(__semgetc)($gp)
/* 00494730 02202025 */  move  $a0, $s1
/* 00494734 0320F809 */  jalr  $t9
/* 00494738 00000000 */   nop   
/* 0049473C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00494740 10000011 */  b     .L00494788
/* 00494744 00409025 */   move  $s2, $v0
/* 00494748 8E2B0000 */  lw    $t3, ($s1)
.L0049474C:
/* 0049474C 256CFFFF */  addiu $t4, $t3, -1
/* 00494750 05810008 */  bgez  $t4, .L00494774
/* 00494754 AE2C0000 */   sw    $t4, ($s1)
/* 00494758 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 0049475C 02202025 */  move  $a0, $s1
/* 00494760 0320F809 */  jalr  $t9
/* 00494764 00000000 */   nop   
/* 00494768 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0049476C 10000005 */  b     .L00494784
/* 00494770 00408025 */   move  $s0, $v0
.L00494774:
/* 00494774 8E220004 */  lw    $v0, 4($s1)
/* 00494778 90500000 */  lbu   $s0, ($v0)
/* 0049477C 244E0001 */  addiu $t6, $v0, 1
/* 00494780 AE2E0004 */  sw    $t6, 4($s1)
.L00494784:
/* 00494784 02009025 */  move  $s2, $s0
.L00494788:
/* 00494788 24130020 */  li    $s3, 32
/* 0049478C 12530005 */  beq   $s2, $s3, .L004947A4
/* 00494790 24010009 */   li    $at, 9
/* 00494794 12410003 */  beq   $s2, $at, .L004947A4
/* 00494798 2401000A */   li    $at, 10
/* 0049479C 56410025 */  bnel  $s2, $at, .L00494834
/* 004947A0 2401002D */   li    $at, 45
.L004947A4:
/* 004947A4 8F8F8064 */  lw     $t7, %got(__us_rsthread_stdio)($gp)
/* 004947A8 8DEF0000 */  lw    $t7, ($t7)
/* 004947AC 51E00009 */  beql  $t7, $zero, .L004947D4
/* 004947B0 8E380000 */   lw    $t8, ($s1)
/* 004947B4 8F998110 */  lw    $t9, %call16(__semgetc)($gp)
/* 004947B8 02202025 */  move  $a0, $s1
/* 004947BC 0320F809 */  jalr  $t9
/* 004947C0 00000000 */   nop   
/* 004947C4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004947C8 10000011 */  b     .L00494810
/* 004947CC 00409025 */   move  $s2, $v0
/* 004947D0 8E380000 */  lw    $t8, ($s1)
.L004947D4:
/* 004947D4 2719FFFF */  addiu $t9, $t8, -1
/* 004947D8 07210008 */  bgez  $t9, .L004947FC
/* 004947DC AE390000 */   sw    $t9, ($s1)
/* 004947E0 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 004947E4 02202025 */  move  $a0, $s1
/* 004947E8 0320F809 */  jalr  $t9
/* 004947EC 00000000 */   nop   
/* 004947F0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004947F4 10000005 */  b     .L0049480C
/* 004947F8 00408025 */   move  $s0, $v0
.L004947FC:
/* 004947FC 8E220004 */  lw    $v0, 4($s1)
/* 00494800 90500000 */  lbu   $s0, ($v0)
/* 00494804 24490001 */  addiu $t1, $v0, 1
/* 00494808 AE290004 */  sw    $t1, 4($s1)
.L0049480C:
/* 0049480C 02009025 */  move  $s2, $s0
.L00494810:
/* 00494810 1253FFE4 */  beq   $s2, $s3, .L004947A4
/* 00494814 00000000 */   nop   
/* 00494818 24010009 */  li    $at, 9
/* 0049481C 1241FFE1 */  beq   $s2, $at, .L004947A4
/* 00494820 00000000 */   nop   
/* 00494824 2401000A */  li    $at, 10
/* 00494828 1241FFDE */  beq   $s2, $at, .L004947A4
/* 0049482C 00000000 */   nop   
/* 00494830 2401002D */  li    $at, 45
.L00494834:
/* 00494834 12410004 */  beq   $s2, $at, .L00494848
/* 00494838 AFB20078 */   sw    $s2, 0x78($sp)
/* 0049483C 2401002B */  li    $at, 43
/* 00494840 5641001D */  bnel  $s2, $at, .L004948B8
/* 00494844 8FAF0084 */   lw    $t7, 0x84($sp)
.L00494848:
/* 00494848 8F8A8064 */  lw     $t2, %got(__us_rsthread_stdio)($gp)
/* 0049484C 8D4A0000 */  lw    $t2, ($t2)
/* 00494850 51400009 */  beql  $t2, $zero, .L00494878
/* 00494854 8E2B0000 */   lw    $t3, ($s1)
/* 00494858 8F998110 */  lw    $t9, %call16(__semgetc)($gp)
/* 0049485C 02202025 */  move  $a0, $s1
/* 00494860 0320F809 */  jalr  $t9
/* 00494864 00000000 */   nop   
/* 00494868 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0049486C 10000011 */  b     .L004948B4
/* 00494870 00409025 */   move  $s2, $v0
/* 00494874 8E2B0000 */  lw    $t3, ($s1)
.L00494878:
/* 00494878 256CFFFF */  addiu $t4, $t3, -1
/* 0049487C 05810008 */  bgez  $t4, .L004948A0
/* 00494880 AE2C0000 */   sw    $t4, ($s1)
/* 00494884 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 00494888 02202025 */  move  $a0, $s1
/* 0049488C 0320F809 */  jalr  $t9
/* 00494890 00000000 */   nop   
/* 00494894 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00494898 10000005 */  b     .L004948B0
/* 0049489C 00408025 */   move  $s0, $v0
.L004948A0:
/* 004948A0 8E220004 */  lw    $v0, 4($s1)
/* 004948A4 90500000 */  lbu   $s0, ($v0)
/* 004948A8 244E0001 */  addiu $t6, $v0, 1
/* 004948AC AE2E0004 */  sw    $t6, 4($s1)
.L004948B0:
/* 004948B0 02009025 */  move  $s2, $s0
.L004948B4:
/* 004948B4 8FAF0084 */  lw    $t7, 0x84($sp)
.L004948B8:
/* 004948B8 2401000A */  li    $at, 10
/* 004948BC AFA00064 */  sw    $zero, 0x64($sp)
/* 004948C0 15E100AA */  bne   $t7, $at, .L00494B6C
/* 004948C4 00000000 */   nop   
/* 004948C8 2652FFD0 */  addiu $s2, $s2, -0x30
/* 004948CC 2E41000A */  sltiu $at, $s2, 0xa
/* 004948D0 1420000C */  bnez  $at, .L00494904
/* 004948D4 0240C825 */   move  $t9, $s2
/* 004948D8 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 004948DC 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 004948E0 8F858044 */  lw    $a1, %got(RO_1000F8BC)($gp)
/* 004948E4 26460030 */  addiu $a2, $s2, 0x30
/* 004948E8 24840020 */  addiu $a0, $a0, 0x20
/* 004948EC 0320F809 */  jalr  $t9
/* 004948F0 24A5F8BC */   addiu $a1, %lo(RO_1000F8BC) # addiu $a1, $a1, -0x744
/* 004948F4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004948F8 24020000 */  li    $v0, 0
/* 004948FC 1000011D */  b     .L00494D74
/* 00494900 24030000 */   li    $v1, 0
.L00494904:
/* 00494904 8F938048 */  lw    $s3, %got(B_1001C2C0)($gp)
/* 00494908 24180000 */  li    $t8, 0
/* 0049490C AFB80070 */  sw    $t8, 0x70($sp)
/* 00494910 AFB20074 */  sw    $s2, 0x74($sp)
/* 00494914 2673C2C0 */  addiu $s3, %lo(B_1001C2C0) # addiu $s3, $s3, -0x3d40
.L00494918:
/* 00494918 8E280000 */  lw    $t0, ($s1)
/* 0049491C 5D000015 */  bgtzl $t0, .L00494974
/* 00494920 8E290004 */   lw    $t1, 4($s1)
/* 00494924 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 00494928 02202025 */  move  $a0, $s1
/* 0049492C 0320F809 */  jalr  $t9
/* 00494930 00000000 */   nop   
/* 00494934 2401FFFF */  li    $at, -1
/* 00494938 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0049493C AE620000 */  sw    $v0, ($s3)
/* 00494940 14410003 */  bne   $v0, $at, .L00494950
/* 00494944 00402025 */   move  $a0, $v0
/* 00494948 10000007 */  b     .L00494968
/* 0049494C 24100001 */   li    $s0, 1
.L00494950:
/* 00494950 8F99810C */  lw    $t9, %call16(ungetc)($gp)
/* 00494954 02202825 */  move  $a1, $s1
/* 00494958 00008025 */  move  $s0, $zero
/* 0049495C 0320F809 */  jalr  $t9
/* 00494960 00000000 */   nop   
/* 00494964 8FBC0028 */  lw    $gp, 0x28($sp)
.L00494968:
/* 00494968 5600004E */  bnezl $s0, .L00494AA4
/* 0049496C 2401FFF3 */   li    $at, -13
/* 00494970 8E290004 */  lw    $t1, 4($s1)
.L00494974:
/* 00494974 8FA40058 */  lw    $a0, 0x58($sp)
/* 00494978 91320000 */  lbu   $s2, ($t1)
/* 0049497C 2652FFD0 */  addiu $s2, $s2, -0x30
/* 00494980 2E41000A */  sltiu $at, $s2, 0xa
/* 00494984 50200047 */  beql  $at, $zero, .L00494AA4
/* 00494988 2401FFF3 */   li    $at, -13
/* 0049498C 8F99811C */  lw    $t9, %call16(__ll_div)($gp)
/* 00494990 8FA5005C */  lw    $a1, 0x5c($sp)
/* 00494994 24060000 */  li    $a2, 0
/* 00494998 0320F809 */  jalr  $t9
/* 0049499C 2407000A */   li    $a3, 10
/* 004949A0 8FAA0070 */  lw    $t2, 0x70($sp)
/* 004949A4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004949A8 8FAB0074 */  lw    $t3, 0x74($sp)
/* 004949AC 0142082B */  sltu  $at, $t2, $v0
/* 004949B0 14200026 */  bnez  $at, .L00494A4C
/* 004949B4 004A082B */   sltu  $at, $v0, $t2
/* 004949B8 14200004 */  bnez  $at, .L004949CC
/* 004949BC 8FA40058 */   lw    $a0, 0x58($sp)
/* 004949C0 0163082B */  sltu  $at, $t3, $v1
/* 004949C4 14200021 */  bnez  $at, .L00494A4C
/* 004949C8 00000000 */   nop   
.L004949CC:
/* 004949CC 8F99811C */  lw    $t9, %call16(__ll_div)($gp)
/* 004949D0 8FA5005C */  lw    $a1, 0x5c($sp)
/* 004949D4 24060000 */  li    $a2, 0
/* 004949D8 0320F809 */  jalr  $t9
/* 004949DC 2407000A */   li    $a3, 10
/* 004949E0 8FAC0070 */  lw    $t4, 0x70($sp)
/* 004949E4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004949E8 8FAD0074 */  lw    $t5, 0x74($sp)
/* 004949EC 004C082B */  sltu  $at, $v0, $t4
/* 004949F0 14200014 */  bnez  $at, .L00494A44
/* 004949F4 0182082B */   sltu  $at, $t4, $v0
/* 004949F8 14200004 */  bnez  $at, .L00494A0C
/* 004949FC 8FA40058 */   lw    $a0, 0x58($sp)
/* 00494A00 006D082B */  sltu  $at, $v1, $t5
/* 00494A04 54200010 */  bnezl $at, .L00494A48
/* 00494A08 24180001 */   li    $t8, 1
.L00494A0C:
/* 00494A0C 8F998120 */  lw    $t9, %call16(__ll_rem)($gp)
/* 00494A10 8FA5005C */  lw    $a1, 0x5c($sp)
/* 00494A14 24060000 */  li    $a2, 0
/* 00494A18 0320F809 */  jalr  $t9
/* 00494A1C 2407000A */   li    $a3, 10
/* 00494A20 240E0000 */  li    $t6, 0
/* 00494A24 01C2082A */  slt   $at, $t6, $v0
/* 00494A28 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00494A2C 14200007 */  bnez  $at, .L00494A4C
/* 00494A30 02407825 */   move  $t7, $s2
/* 00494A34 004E082A */  slt   $at, $v0, $t6
/* 00494A38 14200002 */  bnez  $at, .L00494A44
/* 00494A3C 006F082B */   sltu  $at, $v1, $t7
/* 00494A40 10200002 */  beqz  $at, .L00494A4C
.L00494A44:
/* 00494A44 24180001 */   li    $t8, 1
.L00494A48:
/* 00494A48 AFB80064 */  sw    $t8, 0x64($sp)
.L00494A4C:
/* 00494A4C 8F9980A8 */  lw    $t9, %call16(__ll_mul)($gp)
/* 00494A50 8FA40070 */  lw    $a0, 0x70($sp)
/* 00494A54 8FA50074 */  lw    $a1, 0x74($sp)
/* 00494A58 24060000 */  li    $a2, 0
/* 00494A5C 0320F809 */  jalr  $t9
/* 00494A60 2407000A */   li    $a3, 10
/* 00494A64 00725821 */  addu  $t3, $v1, $s2
/* 00494A68 0172082B */  sltu  $at, $t3, $s2
/* 00494A6C 00225021 */  addu  $t2, $at, $v0
/* 00494A70 24080000 */  li    $t0, 0
/* 00494A74 01485021 */  addu  $t2, $t2, $t0
/* 00494A78 AFAA0070 */  sw    $t2, 0x70($sp)
/* 00494A7C AFAB0074 */  sw    $t3, 0x74($sp)
/* 00494A80 8E390000 */  lw    $t9, ($s1)
/* 00494A84 8E2D0004 */  lw    $t5, 4($s1)
/* 00494A88 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00494A8C 272CFFFF */  addiu $t4, $t9, -1
/* 00494A90 25AE0001 */  addiu $t6, $t5, 1
/* 00494A94 AE2C0000 */  sw    $t4, ($s1)
/* 00494A98 1000FF9F */  b     .L00494918
/* 00494A9C AE2E0004 */   sw    $t6, 4($s1)
/* 00494AA0 2401FFF3 */  li    $at, -13
.L00494AA4:
/* 00494AA4 16410094 */  bne   $s2, $at, .L00494CF8
/* 00494AA8 8FB80070 */   lw    $t8, 0x70($sp)
/* 00494AAC 8FB90074 */  lw    $t9, 0x74($sp)
/* 00494AB0 17000003 */  bnez  $t8, .L00494AC0
/* 00494AB4 2F210002 */   sltiu $at, $t9, 2
/* 00494AB8 54200090 */  bnezl $at, .L00494CFC
/* 00494ABC 8FAC0064 */   lw    $t4, 0x64($sp)
.L00494AC0:
/* 00494AC0 1700008D */  bnez  $t8, .L00494CF8
/* 00494AC4 2F210024 */   sltiu $at, $t9, 0x24
/* 00494AC8 5020008C */  beql  $at, $zero, .L00494CFC
/* 00494ACC 8FAC0064 */   lw    $t4, 0x64($sp)
/* 00494AD0 8F8F8CC4 */  lw     $t7, %got(_libp_ansi_pascal)($gp)
/* 00494AD4 8FA90074 */  lw    $t1, 0x74($sp)
/* 00494AD8 8DEF0000 */  lw    $t7, ($t7)
/* 00494ADC 55E00087 */  bnezl $t7, .L00494CFC
/* 00494AE0 8FAC0064 */   lw    $t4, 0x64($sp)
/* 00494AE4 AFA90084 */  sw    $t1, 0x84($sp)
/* 00494AE8 8E2B0000 */  lw    $t3, ($s1)
/* 00494AEC 8E2D0004 */  lw    $t5, 4($s1)
/* 00494AF0 8F988064 */  lw     $t8, %got(__us_rsthread_stdio)($gp)
/* 00494AF4 256CFFFF */  addiu $t4, $t3, -1
/* 00494AF8 25AE0001 */  addiu $t6, $t5, 1
/* 00494AFC AE2C0000 */  sw    $t4, ($s1)
/* 00494B00 AE2E0004 */  sw    $t6, 4($s1)
/* 00494B04 8F180000 */  lw    $t8, ($t8)
/* 00494B08 53000009 */  beql  $t8, $zero, .L00494B30
/* 00494B0C 8E390000 */   lw    $t9, ($s1)
/* 00494B10 8F998110 */  lw    $t9, %call16(__semgetc)($gp)
/* 00494B14 02202025 */  move  $a0, $s1
/* 00494B18 0320F809 */  jalr  $t9
/* 00494B1C 00000000 */   nop   
/* 00494B20 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00494B24 10000011 */  b     .L00494B6C
/* 00494B28 00409025 */   move  $s2, $v0
/* 00494B2C 8E390000 */  lw    $t9, ($s1)
.L00494B30:
/* 00494B30 272FFFFF */  addiu $t7, $t9, -1
/* 00494B34 05E10008 */  bgez  $t7, .L00494B58
/* 00494B38 AE2F0000 */   sw    $t7, ($s1)
/* 00494B3C 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 00494B40 02202025 */  move  $a0, $s1
/* 00494B44 0320F809 */  jalr  $t9
/* 00494B48 00000000 */   nop   
/* 00494B4C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00494B50 10000005 */  b     .L00494B68
/* 00494B54 00408025 */   move  $s0, $v0
.L00494B58:
/* 00494B58 8E220004 */  lw    $v0, 4($s1)
/* 00494B5C 90500000 */  lbu   $s0, ($v0)
/* 00494B60 24490001 */  addiu $t1, $v0, 1
/* 00494B64 AE290004 */  sw    $t1, 4($s1)
.L00494B68:
/* 00494B68 02009025 */  move  $s2, $s0
.L00494B6C:
/* 00494B6C 8F8A8044 */  lw    $t2, %got(D_10011B70)($gp)
/* 00494B70 8F938048 */  lw    $s3, %got(B_1001C2C0)($gp)
/* 00494B74 8FAD0084 */  lw    $t5, 0x84($sp)
/* 00494B78 254A1B70 */  addiu $t2, %lo(D_10011B70) # addiu $t2, $t2, 0x1b70
/* 00494B7C 024A5821 */  addu  $t3, $s2, $t2
/* 00494B80 916C0000 */  lbu   $t4, ($t3)
/* 00494B84 240E0000 */  li    $t6, 0
/* 00494B88 24180000 */  li    $t8, 0
/* 00494B8C 01D8082B */  sltu  $at, $t6, $t8
/* 00494B90 AFAE0068 */  sw    $t6, 0x68($sp)
/* 00494B94 AFB80030 */  sw    $t8, 0x30($sp)
/* 00494B98 2673C2C0 */  addiu $s3, %lo(B_1001C2C0) # addiu $s3, $s3, -0x3d40
/* 00494B9C AFAD0034 */  sw    $t5, 0x34($sp)
/* 00494BA0 14200011 */  bnez  $at, .L00494BE8
/* 00494BA4 AFAC006C */   sw    $t4, 0x6c($sp)
/* 00494BA8 030E082B */  sltu  $at, $t8, $t6
/* 00494BAC 14200003 */  bnez  $at, .L00494BBC
/* 00494BB0 018D082B */   sltu  $at, $t4, $t5
/* 00494BB4 5420000D */  bnezl $at, .L00494BEC
/* 00494BB8 8FAA0068 */   lw    $t2, 0x68($sp)
.L00494BBC:
/* 00494BBC 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 00494BC0 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 00494BC4 8F858044 */  lw    $a1, %got(RO_1000F8F0)($gp)
/* 00494BC8 02403025 */  move  $a2, $s2
/* 00494BCC 24840020 */  addiu $a0, $a0, 0x20
/* 00494BD0 0320F809 */  jalr  $t9
/* 00494BD4 24A5F8F0 */   addiu $a1, %lo(RO_1000F8F0) # addiu $a1, $a1, -0x710
/* 00494BD8 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00494BDC 24020000 */  li    $v0, 0
/* 00494BE0 10000064 */  b     .L00494D74
/* 00494BE4 24030000 */   li    $v1, 0
.L00494BE8:
/* 00494BE8 8FAA0068 */  lw    $t2, 0x68($sp)
.L00494BEC:
/* 00494BEC 8FAB006C */  lw    $t3, 0x6c($sp)
/* 00494BF0 AFAA0070 */  sw    $t2, 0x70($sp)
/* 00494BF4 AFAB0074 */  sw    $t3, 0x74($sp)
.L00494BF8:
/* 00494BF8 8E2C0000 */  lw    $t4, ($s1)
/* 00494BFC 5D800015 */  bgtzl $t4, .L00494C54
/* 00494C00 8E2E0004 */   lw    $t6, 4($s1)
/* 00494C04 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 00494C08 02202025 */  move  $a0, $s1
/* 00494C0C 0320F809 */  jalr  $t9
/* 00494C10 00000000 */   nop   
/* 00494C14 2401FFFF */  li    $at, -1
/* 00494C18 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00494C1C AE620000 */  sw    $v0, ($s3)
/* 00494C20 14410003 */  bne   $v0, $at, .L00494C30
/* 00494C24 00402025 */   move  $a0, $v0
/* 00494C28 10000007 */  b     .L00494C48
/* 00494C2C 24100001 */   li    $s0, 1
.L00494C30:
/* 00494C30 8F99810C */  lw    $t9, %call16(ungetc)($gp)
/* 00494C34 02202825 */  move  $a1, $s1
/* 00494C38 00008025 */  move  $s0, $zero
/* 00494C3C 0320F809 */  jalr  $t9
/* 00494C40 00000000 */   nop   
/* 00494C44 8FBC0028 */  lw    $gp, 0x28($sp)
.L00494C48:
/* 00494C48 5600002C */  bnezl $s0, .L00494CFC
/* 00494C4C 8FAC0064 */   lw    $t4, 0x64($sp)
/* 00494C50 8E2E0004 */  lw    $t6, 4($s1)
.L00494C54:
/* 00494C54 8F8F8044 */  lw    $t7, %got(D_10011B70)($gp)
/* 00494C58 8FAC0030 */  lw    $t4, 0x30($sp)
/* 00494C5C 91D20000 */  lbu   $s2, ($t6)
/* 00494C60 25EF1B70 */  addiu $t7, %lo(D_10011B70) # addiu $t7, $t7, 0x1b70
/* 00494C64 24180000 */  li    $t8, 0
/* 00494C68 3252007F */  andi  $s2, $s2, 0x7f
/* 00494C6C 024F6821 */  addu  $t5, $s2, $t7
/* 00494C70 91A80000 */  lbu   $t0, ($t5)
/* 00494C74 0198082B */  sltu  $at, $t4, $t8
/* 00494C78 AFB80068 */  sw    $t8, 0x68($sp)
/* 00494C7C 8FAD0034 */  lw    $t5, 0x34($sp)
/* 00494C80 0100C825 */  move  $t9, $t0
/* 00494C84 1420001C */  bnez  $at, .L00494CF8
/* 00494C88 AFA8006C */   sw    $t0, 0x6c($sp)
/* 00494C8C 030C082B */  sltu  $at, $t8, $t4
/* 00494C90 14200004 */  bnez  $at, .L00494CA4
/* 00494C94 8FA40070 */   lw    $a0, 0x70($sp)
/* 00494C98 010D082B */  sltu  $at, $t0, $t5
/* 00494C9C 50200017 */  beql  $at, $zero, .L00494CFC
/* 00494CA0 8FAC0064 */   lw    $t4, 0x64($sp)
.L00494CA4:
/* 00494CA4 8F9980A8 */  lw    $t9, %call16(__ll_mul)($gp)
/* 00494CA8 8FA50074 */  lw    $a1, 0x74($sp)
/* 00494CAC 8FA60030 */  lw    $a2, 0x30($sp)
/* 00494CB0 0320F809 */  jalr  $t9
/* 00494CB4 8FA70034 */   lw    $a3, 0x34($sp)
/* 00494CB8 8FAF006C */  lw    $t7, 0x6c($sp)
/* 00494CBC 8FAE0068 */  lw    $t6, 0x68($sp)
/* 00494CC0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00494CC4 006F4821 */  addu  $t1, $v1, $t7
/* 00494CC8 012F082B */  sltu  $at, $t1, $t7
/* 00494CCC 00224021 */  addu  $t0, $at, $v0
/* 00494CD0 010E4021 */  addu  $t0, $t0, $t6
/* 00494CD4 AFA80070 */  sw    $t0, 0x70($sp)
/* 00494CD8 AFA90074 */  sw    $t1, 0x74($sp)
/* 00494CDC 8E380000 */  lw    $t8, ($s1)
/* 00494CE0 8E2A0004 */  lw    $t2, 4($s1)
/* 00494CE4 2719FFFF */  addiu $t9, $t8, -1
/* 00494CE8 254B0001 */  addiu $t3, $t2, 1
/* 00494CEC AE390000 */  sw    $t9, ($s1)
/* 00494CF0 1000FFC1 */  b     .L00494BF8
/* 00494CF4 AE2B0004 */   sw    $t3, 4($s1)
.L00494CF8:
/* 00494CF8 8FAC0064 */  lw    $t4, 0x64($sp)
.L00494CFC:
/* 00494CFC 8FAE0058 */  lw    $t6, 0x58($sp)
/* 00494D00 8FA80070 */  lw    $t0, 0x70($sp)
/* 00494D04 15800008 */  bnez  $t4, .L00494D28
/* 00494D08 8FA90074 */   lw    $t1, 0x74($sp)
/* 00494D0C 15C8000D */  bne   $t6, $t0, .L00494D44
/* 00494D10 8FAF005C */   lw    $t7, 0x5c($sp)
/* 00494D14 15E9000B */  bne   $t7, $t1, .L00494D44
/* 00494D18 8FAD0078 */   lw    $t5, 0x78($sp)
/* 00494D1C 2401002D */  li    $at, 45
/* 00494D20 51A10009 */  beql  $t5, $at, .L00494D48
/* 00494D24 8FB80078 */   lw    $t8, 0x78($sp)
.L00494D28:
/* 00494D28 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 00494D2C 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 00494D30 8F858044 */  lw    $a1, %got(RO_1000F924)($gp)
/* 00494D34 24840020 */  addiu $a0, $a0, 0x20
/* 00494D38 0320F809 */  jalr  $t9
/* 00494D3C 24A5F924 */   addiu $a1, %lo(RO_1000F924) # addiu $a1, $a1, -0x6dc
/* 00494D40 8FBC0028 */  lw    $gp, 0x28($sp)
.L00494D44:
/* 00494D44 8FB80078 */  lw    $t8, 0x78($sp)
.L00494D48:
/* 00494D48 2401002D */  li    $at, 45
/* 00494D4C 8FA20070 */  lw    $v0, 0x70($sp)
/* 00494D50 17010008 */  bne   $t8, $at, .L00494D74
/* 00494D54 8FA30074 */   lw    $v1, 0x74($sp)
/* 00494D58 8FA20070 */  lw    $v0, 0x70($sp)
/* 00494D5C 8FA30074 */  lw    $v1, 0x74($sp)
/* 00494D60 00401027 */  not   $v0, $v0
/* 00494D64 2C610001 */  sltiu $at, $v1, 1
/* 00494D68 00411021 */  addu  $v0, $v0, $at
/* 00494D6C 10000001 */  b     .L00494D74
/* 00494D70 00031823 */   negu  $v1, $v1
.L00494D74:
/* 00494D74 8FBF002C */  lw    $ra, 0x2c($sp)
/* 00494D78 8FB00018 */  lw    $s0, 0x18($sp)
/* 00494D7C 8FB1001C */  lw    $s1, 0x1c($sp)
/* 00494D80 8FB20020 */  lw    $s2, 0x20($sp)
/* 00494D84 8FB30024 */  lw    $s3, 0x24($sp)
/* 00494D88 03E00008 */  jr    $ra
/* 00494D8C 27BD0080 */   addiu $sp, $sp, 0x80
    .type read_int64, @function
    .size read_int64, .-read_int64
    .end read_int64

glabel read_int64_range
    .ent read_int64_range
/* 00494D90 3C1C0FB8 */  .cpload $t9
/* 00494D94 279C5500 */  
/* 00494D98 0399E021 */  
/* 00494D9C 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 00494DA0 8F99885C */  lw    $t9, %call16(read_integer)($gp)
/* 00494DA4 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00494DA8 AFA60038 */  sw    $a2, 0x38($sp)
/* 00494DAC AFA7003C */  sw    $a3, 0x3c($sp)
/* 00494DB0 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00494DB4 8FA7004C */  lw    $a3, 0x4c($sp)
/* 00494DB8 0320F809 */  jalr  $t9
/* 00494DBC 8FA60048 */   lw    $a2, 0x48($sp)
/* 00494DC0 8FA80038 */  lw    $t0, 0x38($sp)
/* 00494DC4 000277C3 */  sra   $t6, $v0, 0x1f
/* 00494DC8 AFAE0020 */  sw    $t6, 0x20($sp)
/* 00494DCC 01C8082A */  slt   $at, $t6, $t0
/* 00494DD0 01C0C025 */  move  $t8, $t6
/* 00494DD4 AFAE0028 */  sw    $t6, 0x28($sp)
/* 00494DD8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00494DDC AFA20024 */  sw    $v0, 0x24($sp)
/* 00494DE0 0040C825 */  move  $t9, $v0
/* 00494DE4 AFA2002C */  sw    $v0, 0x2c($sp)
/* 00494DE8 1420000E */  bnez  $at, .L00494E24
/* 00494DEC 8FA9003C */   lw    $t1, 0x3c($sp)
/* 00494DF0 010E082A */  slt   $at, $t0, $t6
/* 00494DF4 14200003 */  bnez  $at, .L00494E04
/* 00494DF8 8FAA0040 */   lw    $t2, 0x40($sp)
/* 00494DFC 0049082B */  sltu  $at, $v0, $t1
/* 00494E00 14200008 */  bnez  $at, .L00494E24
.L00494E04:
/* 00494E04 030A082A */   slt   $at, $t8, $t2
/* 00494E08 1420000F */  bnez  $at, .L00494E48
/* 00494E0C 8FAB0044 */   lw    $t3, 0x44($sp)
/* 00494E10 0158082A */  slt   $at, $t2, $t8
/* 00494E14 14200003 */  bnez  $at, .L00494E24
/* 00494E18 0179082B */   sltu  $at, $t3, $t9
/* 00494E1C 5020000B */  beql  $at, $zero, .L00494E4C
/* 00494E20 8FBF001C */   lw    $ra, 0x1c($sp)
.L00494E24:
/* 00494E24 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 00494E28 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 00494E2C 8F858044 */  lw    $a1, %got(RO_1000F944)($gp)
/* 00494E30 8FA60028 */  lw    $a2, 0x28($sp)
/* 00494E34 8FA7002C */  lw    $a3, 0x2c($sp)
/* 00494E38 24840020 */  addiu $a0, $a0, 0x20
/* 00494E3C 0320F809 */  jalr  $t9
/* 00494E40 24A5F944 */   addiu $a1, %lo(RO_1000F944) # addiu $a1, $a1, -0x6bc
/* 00494E44 8FBC0018 */  lw    $gp, 0x18($sp)
.L00494E48:
/* 00494E48 8FBF001C */  lw    $ra, 0x1c($sp)
.L00494E4C:
/* 00494E4C 8FA20028 */  lw    $v0, 0x28($sp)
/* 00494E50 8FA3002C */  lw    $v1, 0x2c($sp)
/* 00494E54 03E00008 */  jr    $ra
/* 00494E58 27BD0030 */   addiu $sp, $sp, 0x30
    .type read_int64_range, @function
    .size read_int64_range, .-read_int64_range
    .end read_int64_range

glabel read_card64
    .ent read_card64
/* 00494E5C 3C1C0FB8 */  .cpload $t9
/* 00494E60 279C5434 */  
/* 00494E64 0399E021 */  
/* 00494E68 27BDFF80 */  addiu $sp, $sp, -0x80
/* 00494E6C 8F9980A8 */  lw    $t9, %call16(__ll_mul)($gp)
/* 00494E70 AFB40024 */  sw    $s4, 0x24($sp)
/* 00494E74 00A0A025 */  move  $s4, $a1
/* 00494E78 AFB10018 */  sw    $s1, 0x18($sp)
/* 00494E7C 00808825 */  move  $s1, $a0
/* 00494E80 AFBF002C */  sw    $ra, 0x2c($sp)
/* 00494E84 3C057FFF */  lui   $a1, 0x7fff
/* 00494E88 AFBC0028 */  sw    $gp, 0x28($sp)
/* 00494E8C AFB30020 */  sw    $s3, 0x20($sp)
/* 00494E90 AFB2001C */  sw    $s2, 0x1c($sp)
/* 00494E94 AFB00014 */  sw    $s0, 0x14($sp)
/* 00494E98 34A5FFFF */  ori   $a1, $a1, 0xffff
/* 00494E9C 24040000 */  li    $a0, 0
/* 00494EA0 24060000 */  li    $a2, 0
/* 00494EA4 0320F809 */  jalr  $t9
/* 00494EA8 24070002 */   li    $a3, 2
/* 00494EAC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00494EB0 246F0001 */  addiu $t7, $v1, 1
/* 00494EB4 2DE10001 */  sltiu $at, $t7, 1
/* 00494EB8 8F9980A8 */  lw    $t9, %call16(__ll_mul)($gp)
/* 00494EBC 00417021 */  addu  $t6, $v0, $at
/* 00494EC0 3C057FFF */  lui   $a1, 0x7fff
/* 00494EC4 AFAE0048 */  sw    $t6, 0x48($sp)
/* 00494EC8 AFAF004C */  sw    $t7, 0x4c($sp)
/* 00494ECC 34A5FFFF */  ori   $a1, $a1, 0xffff
/* 00494ED0 24040000 */  li    $a0, 0
/* 00494ED4 24060000 */  li    $a2, 0
/* 00494ED8 0320F809 */  jalr  $t9
/* 00494EDC 24070002 */   li    $a3, 2
/* 00494EE0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00494EE4 8FA7005C */  lw    $a3, 0x5c($sp)
/* 00494EE8 8FA60058 */  lw    $a2, 0x58($sp)
/* 00494EEC 8F9980A8 */  lw    $t9, %call16(__ll_mul)($gp)
/* 00494EF0 24E70001 */  addiu $a3, $a3, 1
/* 00494EF4 2CE10001 */  sltiu $at, $a3, 1
/* 00494EF8 00402025 */  move  $a0, $v0
/* 00494EFC 00602825 */  move  $a1, $v1
/* 00494F00 0320F809 */  jalr  $t9
/* 00494F04 00C13021 */   addu  $a2, $a2, $at
/* 00494F08 8FB9004C */  lw    $t9, 0x4c($sp)
/* 00494F0C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00494F10 8FB80048 */  lw    $t8, 0x48($sp)
/* 00494F14 00792821 */  addu  $a1, $v1, $t9
/* 00494F18 00B9082B */  sltu  $at, $a1, $t9
/* 00494F1C 8F9980A8 */  lw    $t9, %call16(__ll_mul)($gp)
/* 00494F20 00222021 */  addu  $a0, $at, $v0
/* 00494F24 24060000 */  li    $a2, 0
/* 00494F28 24070002 */  li    $a3, 2
/* 00494F2C 0320F809 */  jalr  $t9
/* 00494F30 00982021 */   addu  $a0, $a0, $t8
/* 00494F34 24690001 */  addiu $t1, $v1, 1
/* 00494F38 2D210001 */  sltiu $at, $t1, 1
/* 00494F3C 00414021 */  addu  $t0, $v0, $at
/* 00494F40 AFA80060 */  sw    $t0, 0x60($sp)
/* 00494F44 AFA90064 */  sw    $t1, 0x64($sp)
/* 00494F48 1620000B */  bnez  $s1, .L00494F78
/* 00494F4C 8FBC0028 */   lw    $gp, 0x28($sp)
/* 00494F50 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 00494F54 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 00494F58 8F858044 */  lw    $a1, %got(RO_1000F978)($gp)
/* 00494F5C 24840020 */  addiu $a0, $a0, 0x20
/* 00494F60 0320F809 */  jalr  $t9
/* 00494F64 24A5F978 */   addiu $a1, %lo(RO_1000F978) # addiu $a1, $a1, -0x688
/* 00494F68 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00494F6C 24020000 */  li    $v0, 0
/* 00494F70 1000014F */  b     .L004954B0
/* 00494F74 24030000 */   li    $v1, 0
.L00494F78:
/* 00494F78 8F8A8064 */  lw     $t2, %got(__us_rsthread_stdio)($gp)
/* 00494F7C 8D4A0000 */  lw    $t2, ($t2)
/* 00494F80 51400009 */  beql  $t2, $zero, .L00494FA8
/* 00494F84 8E2B0000 */   lw    $t3, ($s1)
/* 00494F88 8F998110 */  lw    $t9, %call16(__semgetc)($gp)
/* 00494F8C 02202025 */  move  $a0, $s1
/* 00494F90 0320F809 */  jalr  $t9
/* 00494F94 00000000 */   nop   
/* 00494F98 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00494F9C 10000011 */  b     .L00494FE4
/* 00494FA0 00409025 */   move  $s2, $v0
/* 00494FA4 8E2B0000 */  lw    $t3, ($s1)
.L00494FA8:
/* 00494FA8 256CFFFF */  addiu $t4, $t3, -1
/* 00494FAC 05810008 */  bgez  $t4, .L00494FD0
/* 00494FB0 AE2C0000 */   sw    $t4, ($s1)
/* 00494FB4 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 00494FB8 02202025 */  move  $a0, $s1
/* 00494FBC 0320F809 */  jalr  $t9
/* 00494FC0 00000000 */   nop   
/* 00494FC4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00494FC8 10000005 */  b     .L00494FE0
/* 00494FCC 00408025 */   move  $s0, $v0
.L00494FD0:
/* 00494FD0 8E220004 */  lw    $v0, 4($s1)
/* 00494FD4 90500000 */  lbu   $s0, ($v0)
/* 00494FD8 244E0001 */  addiu $t6, $v0, 1
/* 00494FDC AE2E0004 */  sw    $t6, 4($s1)
.L00494FE0:
/* 00494FE0 02009025 */  move  $s2, $s0
.L00494FE4:
/* 00494FE4 24010020 */  li    $at, 32
/* 00494FE8 12410005 */  beq   $s2, $at, .L00495000
/* 00494FEC 24010009 */   li    $at, 9
/* 00494FF0 12410003 */  beq   $s2, $at, .L00495000
/* 00494FF4 2413000A */   li    $s3, 10
/* 00494FF8 16530025 */  bne   $s2, $s3, .L00495090
/* 00494FFC 00000000 */   nop   
.L00495000:
/* 00495000 8F8F8064 */  lw     $t7, %got(__us_rsthread_stdio)($gp)
/* 00495004 2413000A */  li    $s3, 10
/* 00495008 8DEF0000 */  lw    $t7, ($t7)
/* 0049500C 51E00009 */  beql  $t7, $zero, .L00495034
/* 00495010 8E380000 */   lw    $t8, ($s1)
/* 00495014 8F998110 */  lw    $t9, %call16(__semgetc)($gp)
/* 00495018 02202025 */  move  $a0, $s1
/* 0049501C 0320F809 */  jalr  $t9
/* 00495020 00000000 */   nop   
/* 00495024 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00495028 10000011 */  b     .L00495070
/* 0049502C 00409025 */   move  $s2, $v0
/* 00495030 8E380000 */  lw    $t8, ($s1)
.L00495034:
/* 00495034 2719FFFF */  addiu $t9, $t8, -1
/* 00495038 07210008 */  bgez  $t9, .L0049505C
/* 0049503C AE390000 */   sw    $t9, ($s1)
/* 00495040 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 00495044 02202025 */  move  $a0, $s1
/* 00495048 0320F809 */  jalr  $t9
/* 0049504C 00000000 */   nop   
/* 00495050 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00495054 10000005 */  b     .L0049506C
/* 00495058 00408025 */   move  $s0, $v0
.L0049505C:
/* 0049505C 8E220004 */  lw    $v0, 4($s1)
/* 00495060 90500000 */  lbu   $s0, ($v0)
/* 00495064 24490001 */  addiu $t1, $v0, 1
/* 00495068 AE290004 */  sw    $t1, 4($s1)
.L0049506C:
/* 0049506C 02009025 */  move  $s2, $s0
.L00495070:
/* 00495070 24010020 */  li    $at, 32
/* 00495074 1241FFE2 */  beq   $s2, $at, .L00495000
/* 00495078 00000000 */   nop   
/* 0049507C 24010009 */  li    $at, 9
/* 00495080 1241FFDF */  beq   $s2, $at, .L00495000
/* 00495084 00000000 */   nop   
/* 00495088 1253FFDD */  beq   $s2, $s3, .L00495000
/* 0049508C 00000000 */   nop   
.L00495090:
/* 00495090 169300AF */  bne   $s4, $s3, .L00495350
/* 00495094 AFA0006C */   sw    $zero, 0x6c($sp)
/* 00495098 2652FFD0 */  addiu $s2, $s2, -0x30
/* 0049509C 2E41000A */  sltiu $at, $s2, 0xa
/* 004950A0 1420000C */  bnez  $at, .L004950D4
/* 004950A4 240A0000 */   li    $t2, 0
/* 004950A8 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 004950AC 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 004950B0 8F858044 */  lw    $a1, %got(RO_1000F9B4)($gp)
/* 004950B4 26460030 */  addiu $a2, $s2, 0x30
/* 004950B8 24840020 */  addiu $a0, $a0, 0x20
/* 004950BC 0320F809 */  jalr  $t9
/* 004950C0 24A5F9B4 */   addiu $a1, %lo(RO_1000F9B4) # addiu $a1, $a1, -0x64c
/* 004950C4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004950C8 24020000 */  li    $v0, 0
/* 004950CC 100000F8 */  b     .L004954B0
/* 004950D0 24030000 */   li    $v1, 0
.L004950D4:
/* 004950D4 8F938048 */  lw    $s3, %got(B_1001C2C0)($gp)
/* 004950D8 AFAA0070 */  sw    $t2, 0x70($sp)
/* 004950DC AFB20074 */  sw    $s2, 0x74($sp)
/* 004950E0 2673C2C0 */  addiu $s3, %lo(B_1001C2C0) # addiu $s3, $s3, -0x3d40
.L004950E4:
/* 004950E4 8E2C0000 */  lw    $t4, ($s1)
/* 004950E8 5D800015 */  bgtzl $t4, .L00495140
/* 004950EC 8E2D0004 */   lw    $t5, 4($s1)
/* 004950F0 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 004950F4 02202025 */  move  $a0, $s1
/* 004950F8 0320F809 */  jalr  $t9
/* 004950FC 00000000 */   nop   
/* 00495100 2401FFFF */  li    $at, -1
/* 00495104 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00495108 AE620000 */  sw    $v0, ($s3)
/* 0049510C 14410003 */  bne   $v0, $at, .L0049511C
/* 00495110 00402025 */   move  $a0, $v0
/* 00495114 10000007 */  b     .L00495134
/* 00495118 24100001 */   li    $s0, 1
.L0049511C:
/* 0049511C 8F99810C */  lw    $t9, %call16(ungetc)($gp)
/* 00495120 02202825 */  move  $a1, $s1
/* 00495124 00008025 */  move  $s0, $zero
/* 00495128 0320F809 */  jalr  $t9
/* 0049512C 00000000 */   nop   
/* 00495130 8FBC0028 */  lw    $gp, 0x28($sp)
.L00495134:
/* 00495134 56000052 */  bnezl $s0, .L00495280
/* 00495138 2401FFF3 */   li    $at, -13
/* 0049513C 8E2D0004 */  lw    $t5, 4($s1)
.L00495140:
/* 00495140 8FA40060 */  lw    $a0, 0x60($sp)
/* 00495144 91B20000 */  lbu   $s2, ($t5)
/* 00495148 2652FFD0 */  addiu $s2, $s2, -0x30
/* 0049514C 2E41000A */  sltiu $at, $s2, 0xa
/* 00495150 5020004B */  beql  $at, $zero, .L00495280
/* 00495154 2401FFF3 */   li    $at, -13
/* 00495158 8F998124 */  lw    $t9, %call16(__ull_div)($gp)
/* 0049515C 8FA50064 */  lw    $a1, 0x64($sp)
/* 00495160 24060000 */  li    $a2, 0
/* 00495164 0320F809 */  jalr  $t9
/* 00495168 2407000A */   li    $a3, 10
/* 0049516C 8FAE0070 */  lw    $t6, 0x70($sp)
/* 00495170 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00495174 8FAF0074 */  lw    $t7, 0x74($sp)
/* 00495178 01C2082B */  sltu  $at, $t6, $v0
/* 0049517C 14200026 */  bnez  $at, .L00495218
/* 00495180 004E082B */   sltu  $at, $v0, $t6
/* 00495184 14200004 */  bnez  $at, .L00495198
/* 00495188 8FA40060 */   lw    $a0, 0x60($sp)
/* 0049518C 01E3082B */  sltu  $at, $t7, $v1
/* 00495190 14200021 */  bnez  $at, .L00495218
/* 00495194 00000000 */   nop   
.L00495198:
/* 00495198 8F998124 */  lw    $t9, %call16(__ull_div)($gp)
/* 0049519C 8FA50064 */  lw    $a1, 0x64($sp)
/* 004951A0 24060000 */  li    $a2, 0
/* 004951A4 0320F809 */  jalr  $t9
/* 004951A8 2407000A */   li    $a3, 10
/* 004951AC 8FB80070 */  lw    $t8, 0x70($sp)
/* 004951B0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004951B4 8FB90074 */  lw    $t9, 0x74($sp)
/* 004951B8 0058082B */  sltu  $at, $v0, $t8
/* 004951BC 14200014 */  bnez  $at, .L00495210
/* 004951C0 0302082B */   sltu  $at, $t8, $v0
/* 004951C4 14200004 */  bnez  $at, .L004951D8
/* 004951C8 8FA40060 */   lw    $a0, 0x60($sp)
/* 004951CC 0079082B */  sltu  $at, $v1, $t9
/* 004951D0 54200010 */  bnezl $at, .L00495214
/* 004951D4 240A0001 */   li    $t2, 1
.L004951D8:
/* 004951D8 8F998128 */  lw    $t9, %call16(__ull_rem)($gp)
/* 004951DC 8FA50064 */  lw    $a1, 0x64($sp)
/* 004951E0 24060000 */  li    $a2, 0
/* 004951E4 0320F809 */  jalr  $t9
/* 004951E8 2407000A */   li    $a3, 10
/* 004951EC 24080000 */  li    $t0, 0
/* 004951F0 0102082B */  sltu  $at, $t0, $v0
/* 004951F4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004951F8 14200007 */  bnez  $at, .L00495218
/* 004951FC 02404825 */   move  $t1, $s2
/* 00495200 0048082B */  sltu  $at, $v0, $t0
/* 00495204 14200002 */  bnez  $at, .L00495210
/* 00495208 0069082B */   sltu  $at, $v1, $t1
/* 0049520C 10200002 */  beqz  $at, .L00495218
.L00495210:
/* 00495210 240A0001 */   li    $t2, 1
.L00495214:
/* 00495214 AFAA006C */  sw    $t2, 0x6c($sp)
.L00495218:
/* 00495218 8F9980A8 */  lw    $t9, %call16(__ll_mul)($gp)
/* 0049521C 240C0000 */  li    $t4, 0
/* 00495220 AFAC0030 */  sw    $t4, 0x30($sp)
/* 00495224 8FA40070 */  lw    $a0, 0x70($sp)
/* 00495228 8FA50074 */  lw    $a1, 0x74($sp)
/* 0049522C 24060000 */  li    $a2, 0
/* 00495230 2407000A */  li    $a3, 10
/* 00495234 0320F809 */  jalr  $t9
/* 00495238 AFB20034 */   sw    $s2, 0x34($sp)
/* 0049523C 8FAF0034 */  lw    $t7, 0x34($sp)
/* 00495240 8FAE0030 */  lw    $t6, 0x30($sp)
/* 00495244 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00495248 006FC821 */  addu  $t9, $v1, $t7
/* 0049524C 032F082B */  sltu  $at, $t9, $t7
/* 00495250 0022C021 */  addu  $t8, $at, $v0
/* 00495254 030EC021 */  addu  $t8, $t8, $t6
/* 00495258 AFB80070 */  sw    $t8, 0x70($sp)
/* 0049525C AFB90074 */  sw    $t9, 0x74($sp)
/* 00495260 8E2B0000 */  lw    $t3, ($s1)
/* 00495264 8E290004 */  lw    $t1, 4($s1)
/* 00495268 2568FFFF */  addiu $t0, $t3, -1
/* 0049526C 252A0001 */  addiu $t2, $t1, 1
/* 00495270 AE280000 */  sw    $t0, ($s1)
/* 00495274 1000FF9B */  b     .L004950E4
/* 00495278 AE2A0004 */   sw    $t2, 4($s1)
/* 0049527C 2401FFF3 */  li    $at, -13
.L00495280:
/* 00495280 1641000F */  bne   $s2, $at, .L004952C0
/* 00495284 8FAC0070 */   lw    $t4, 0x70($sp)
/* 00495288 8FAD0074 */  lw    $t5, 0x74($sp)
/* 0049528C 15800003 */  bnez  $t4, .L0049529C
/* 00495290 2DA10002 */   sltiu $at, $t5, 2
/* 00495294 5420000B */  bnezl $at, .L004952C4
/* 00495298 8FA20070 */   lw    $v0, 0x70($sp)
.L0049529C:
/* 0049529C 15800008 */  bnez  $t4, .L004952C0
/* 004952A0 2DA10024 */   sltiu $at, $t5, 0x24
/* 004952A4 50200007 */  beql  $at, $zero, .L004952C4
/* 004952A8 8FA20070 */   lw    $v0, 0x70($sp)
/* 004952AC 8F8E8CC4 */  lw     $t6, %got(_libp_ansi_pascal)($gp)
/* 004952B0 8FB40074 */  lw    $s4, 0x74($sp)
/* 004952B4 8DCE0000 */  lw    $t6, ($t6)
/* 004952B8 51C00005 */  beql  $t6, $zero, .L004952D0
/* 004952BC 8E2F0000 */   lw    $t7, ($s1)
.L004952C0:
/* 004952C0 8FA20070 */  lw    $v0, 0x70($sp)
.L004952C4:
/* 004952C4 1000007A */  b     .L004954B0
/* 004952C8 8FA30074 */   lw    $v1, 0x74($sp)
/* 004952CC 8E2F0000 */  lw    $t7, ($s1)
.L004952D0:
/* 004952D0 8E280004 */  lw    $t0, 4($s1)
/* 004952D4 8F8A8064 */  lw     $t2, %got(__us_rsthread_stdio)($gp)
/* 004952D8 25EBFFFF */  addiu $t3, $t7, -1
/* 004952DC 25090001 */  addiu $t1, $t0, 1
/* 004952E0 AE2B0000 */  sw    $t3, ($s1)
/* 004952E4 AE290004 */  sw    $t1, 4($s1)
/* 004952E8 8D4A0000 */  lw    $t2, ($t2)
/* 004952EC 51400009 */  beql  $t2, $zero, .L00495314
/* 004952F0 8E2C0000 */   lw    $t4, ($s1)
/* 004952F4 8F998110 */  lw    $t9, %call16(__semgetc)($gp)
/* 004952F8 02202025 */  move  $a0, $s1
/* 004952FC 0320F809 */  jalr  $t9
/* 00495300 00000000 */   nop   
/* 00495304 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00495308 10000011 */  b     .L00495350
/* 0049530C 00409025 */   move  $s2, $v0
/* 00495310 8E2C0000 */  lw    $t4, ($s1)
.L00495314:
/* 00495314 258DFFFF */  addiu $t5, $t4, -1
/* 00495318 05A10008 */  bgez  $t5, .L0049533C
/* 0049531C AE2D0000 */   sw    $t5, ($s1)
/* 00495320 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 00495324 02202025 */  move  $a0, $s1
/* 00495328 0320F809 */  jalr  $t9
/* 0049532C 00000000 */   nop   
/* 00495330 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00495334 10000005 */  b     .L0049534C
/* 00495338 00408025 */   move  $s0, $v0
.L0049533C:
/* 0049533C 8E220004 */  lw    $v0, 4($s1)
/* 00495340 90500000 */  lbu   $s0, ($v0)
/* 00495344 24580001 */  addiu $t8, $v0, 1
/* 00495348 AE380004 */  sw    $t8, 4($s1)
.L0049534C:
/* 0049534C 02009025 */  move  $s2, $s0
.L00495350:
/* 00495350 8F998044 */  lw    $t9, %got(D_10011B70)($gp)
/* 00495354 8F938048 */  lw    $s3, %got(B_1001C2C0)($gp)
/* 00495358 24080000 */  li    $t0, 0
/* 0049535C 27391B70 */  addiu $t9, %lo(D_10011B70) # addiu $t9, $t9, 0x1b70
/* 00495360 02597821 */  addu  $t7, $s2, $t9
/* 00495364 91F00000 */  lbu   $s0, ($t7)
/* 00495368 2673C2C0 */  addiu $s3, %lo(B_1001C2C0) # addiu $s3, $s3, -0x3d40
/* 0049536C 0214082B */  sltu  $at, $s0, $s4
/* 00495370 5420000D */  bnezl $at, .L004953A8
/* 00495374 AFA80070 */   sw    $t0, 0x70($sp)
/* 00495378 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 0049537C 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 00495380 8F858044 */  lw    $a1, %got(RO_1000F9E8)($gp)
/* 00495384 02403025 */  move  $a2, $s2
/* 00495388 24840020 */  addiu $a0, $a0, 0x20
/* 0049538C 0320F809 */  jalr  $t9
/* 00495390 24A5F9E8 */   addiu $a1, %lo(RO_1000F9E8) # addiu $a1, $a1, -0x618
/* 00495394 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00495398 24020000 */  li    $v0, 0
/* 0049539C 10000044 */  b     .L004954B0
/* 004953A0 24030000 */   li    $v1, 0
/* 004953A4 AFA80070 */  sw    $t0, 0x70($sp)
.L004953A8:
/* 004953A8 AFB00074 */  sw    $s0, 0x74($sp)
.L004953AC:
/* 004953AC 8E2B0000 */  lw    $t3, ($s1)
/* 004953B0 5D600015 */  bgtzl $t3, .L00495408
/* 004953B4 8E2A0004 */   lw    $t2, 4($s1)
/* 004953B8 8F99812C */  lw    $t9, %call16(__filbuf)($gp)
/* 004953BC 02202025 */  move  $a0, $s1
/* 004953C0 0320F809 */  jalr  $t9
/* 004953C4 00000000 */   nop   
/* 004953C8 2401FFFF */  li    $at, -1
/* 004953CC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004953D0 AE620000 */  sw    $v0, ($s3)
/* 004953D4 14410003 */  bne   $v0, $at, .L004953E4
/* 004953D8 00402025 */   move  $a0, $v0
/* 004953DC 10000007 */  b     .L004953FC
/* 004953E0 24100001 */   li    $s0, 1
.L004953E4:
/* 004953E4 8F99810C */  lw    $t9, %call16(ungetc)($gp)
/* 004953E8 02202825 */  move  $a1, $s1
/* 004953EC 00008025 */  move  $s0, $zero
/* 004953F0 0320F809 */  jalr  $t9
/* 004953F4 00000000 */   nop   
/* 004953F8 8FBC0028 */  lw    $gp, 0x28($sp)
.L004953FC:
/* 004953FC 56000021 */  bnezl $s0, .L00495484
/* 00495400 8FAC006C */   lw    $t4, 0x6c($sp)
/* 00495404 8E2A0004 */  lw    $t2, 4($s1)
.L00495408:
/* 00495408 8F8C8044 */  lw    $t4, %got(D_10011B70)($gp)
/* 0049540C 8FA40070 */  lw    $a0, 0x70($sp)
/* 00495410 91520000 */  lbu   $s2, ($t2)
/* 00495414 258C1B70 */  addiu $t4, %lo(D_10011B70) # addiu $t4, $t4, 0x1b70
/* 00495418 3252007F */  andi  $s2, $s2, 0x7f
/* 0049541C 024C6821 */  addu  $t5, $s2, $t4
/* 00495420 91B00000 */  lbu   $s0, ($t5)
/* 00495424 0214082B */  sltu  $at, $s0, $s4
/* 00495428 50200016 */  beql  $at, $zero, .L00495484
/* 0049542C 8FAC006C */   lw    $t4, 0x6c($sp)
/* 00495430 8F9980A8 */  lw    $t9, %call16(__ll_mul)($gp)
/* 00495434 8FA50074 */  lw    $a1, 0x74($sp)
/* 00495438 02803825 */  move  $a3, $s4
/* 0049543C 0320F809 */  jalr  $t9
/* 00495440 24060000 */   li    $a2, 0
/* 00495444 0070C821 */  addu  $t9, $v1, $s0
/* 00495448 0330082B */  sltu  $at, $t9, $s0
/* 0049544C 0022C021 */  addu  $t8, $at, $v0
/* 00495450 240E0000 */  li    $t6, 0
/* 00495454 030EC021 */  addu  $t8, $t8, $t6
/* 00495458 AFB80070 */  sw    $t8, 0x70($sp)
/* 0049545C AFB90074 */  sw    $t9, 0x74($sp)
/* 00495460 8E280000 */  lw    $t0, ($s1)
/* 00495464 8E2B0004 */  lw    $t3, 4($s1)
/* 00495468 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0049546C 2509FFFF */  addiu $t1, $t0, -1
/* 00495470 256A0001 */  addiu $t2, $t3, 1
/* 00495474 AE290000 */  sw    $t1, ($s1)
/* 00495478 1000FFCC */  b     .L004953AC
/* 0049547C AE2A0004 */   sw    $t2, 4($s1)
/* 00495480 8FAC006C */  lw    $t4, 0x6c($sp)
.L00495484:
/* 00495484 51800009 */  beql  $t4, $zero, .L004954AC
/* 00495488 8FA20070 */   lw    $v0, 0x70($sp)
/* 0049548C 8F99807C */  lw    $t9, %call16(fprintf)($gp)
/* 00495490 8F848054 */  lw     $a0, %got(__iob)($gp)
/* 00495494 8F858044 */  lw    $a1, %got(RO_1000FA1C)($gp)
/* 00495498 24840020 */  addiu $a0, $a0, 0x20
/* 0049549C 0320F809 */  jalr  $t9
/* 004954A0 24A5FA1C */   addiu $a1, %lo(RO_1000FA1C) # addiu $a1, $a1, -0x5e4
/* 004954A4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004954A8 8FA20070 */  lw    $v0, 0x70($sp)
.L004954AC:
/* 004954AC 8FA30074 */  lw    $v1, 0x74($sp)
.L004954B0:
/* 004954B0 8FBF002C */  lw    $ra, 0x2c($sp)
/* 004954B4 8FB00014 */  lw    $s0, 0x14($sp)
/* 004954B8 8FB10018 */  lw    $s1, 0x18($sp)
/* 004954BC 8FB2001C */  lw    $s2, 0x1c($sp)
/* 004954C0 8FB30020 */  lw    $s3, 0x20($sp)
/* 004954C4 8FB40024 */  lw    $s4, 0x24($sp)
/* 004954C8 03E00008 */  jr    $ra
/* 004954CC 27BD0080 */   addiu $sp, $sp, 0x80
    .type read_card64, @function
    .size read_card64, .-read_card64
    .end read_card64
)"");
#endif

