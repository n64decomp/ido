#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "libp/libp.h"
#include "libu/libu.h"
#include "libmld/libmld.h"
#include "libxmalloc/xmalloc.h"
#include "common.h"
#include "uoptions.h"
#include "uoptutil.h"
#include "uoptppss.h"
#include "uoptdbg.h"
#include "uoptcontrolflow.h"
#include "uoptdata.h"
#include "feedback.h"

__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm
)"");

extern int __Argc;

struct Str32 {
    char c[32];
};

/*
004340A0 addnullfilename
00434720 processargs
00439B60 write_updated_st
*/
char st_str[128];

static bool inline Str32_eq(const struct Str32 *str1, const struct Str32 *str2) {
    return memcmp(str1, str2, sizeof(str1->c)) == 0;
}

/*
00434720 processargs
00439B60 write_updated_st
*/
void addnullfilename(char *str) {
    int i;
    for (i = 0; i < 1024 && *str != ' ' && *str != '\0'; i++) {
        // note: st_str is 128 bytes
        st_str[i] = *str++;
    }
    str[i] = '\0';
}

/*
00434720 processargs
*/
static int find_uopt_option(struct Str32 s) { // originally embedded func
    static const struct Str32 zmark = {"zmark                           "};
    if (Str32_eq(&zmark, &s)) {
        return UCO_ZMARK;
    }

    static const struct Str32 zvref = {"zvref                           "};
    if (Str32_eq(&zvref, &s)) {
        return UCO_ZVREF;
    }

    static const struct Str32 zdbug = {"zdbug                           "};
    if (Str32_eq(&zdbug, &s)) {
        return UCO_ZDBUG;
    }

    static const struct Str32 zmovc = {"zmovc                           "};
    if (Str32_eq(&zmovc, &s)) {
        return UCO_ZMOVC;
    }

    static const struct Str32 zcopy = {"zcopy                           "};
    if (Str32_eq(&zcopy, &s)) {
        return UCO_ZCOPY;
    }

    static const struct Str32 zcomo = {"zcomo                           "};
    if (Str32_eq(&zcomo, &s)) {
        return UCO_ZCOMO;
    }

    static const struct Str32 zstor = {"zstor                           "};
    if (Str32_eq(&zstor, &s)) {
        return UCO_ZSTOR;
    }

    static const struct Str32 zscm = {"zscm                            "};
    if (Str32_eq(&zscm, &s)) {
        return UCO_ZSCM;
    }

    static const struct Str32 zaloc = {"zaloc                           "};
    if (Str32_eq(&zaloc, &s)) {
        return UCO_ZALOC;
    }

    static const struct Str32 no_r23 = {"no_r23                          "};
    if (Str32_eq(&no_r23, &s)) {
        return UCO_NO_R23;
    }

    return -1;
}

/*
00434720 processargs
*/
static void read_ignore_file(const char *path /* originally linked stack var */) {
    struct PascalFile file;
    struct StrList *line;
    int len;
    struct StrList *tmp;

    reset(&file, path, 1024, 0);
    while (!eof(file.c_file)) {
        line = (struct StrList *)alloc_new(sizeof(struct StrList), &perm_heap);
        read_string(file.c_file, line->str, sizeof(line->str));
        readln(file.c_file);

        len = 0;
        while (line->str[len] != ' ' && line->str[len] != '\n') {
            ++len;
        }

        tmp = ctrl_head;
        ctrl_head = line;
        line->len = len;
        line->next = tmp;
    }
}

/*
00434720 processargs
*/
static int str_to_int(const char *str) { // originally embedded func
    int v = 0;

    while (*str >= '0' && *str <= '9') {
        v = v * 10 + (*str++ - '0');
    }

    return v;
}

/*
00434720 processargs
*/
static void copy_filename(char *dest, struct Str32 src) { // originally embedded func
    int len = 0;

    while (src.c[len] != ' ') {
        *dest++ = src.c[len++];
    }

    while (len < 1024) {
        *dest++ = ' ';
        len++;
    }
}

/*
00434720 processargs
*/
static bool streq(const char *str1, struct Str32 str2) { // originally embedded func
    int pos;

    for (pos = 0; str2.c[pos] != ' '; pos++) {
        if (str1[pos] != str2.c[pos]) {
            return false;
        }
    }

    return str1[pos] == ' ';
}

/*
0043771C optinit
*/
void processargs(void) {
    int arg_index;
    char arg[1024];
    char numstr[1024];
    int arg_file_count;
    struct Str32 str_opt;
    char ignore_file[1024];
    char feedback_file[1024];
    bool sp482;
    bool xpg;
    char argz[1024];
    int arglen;
    int num;
    int pos;
    bool found_unrecognized;

    static const struct Str32 str_docopy = {"-docopy                         "};
    static const struct Str32 str_doassoc = {"-doassoc                        "};
    static const struct Str32 str_dowhyuncolor = {"-dowhyuncolor                   "};
    static const struct Str32 str_noprecolor = {"-noprecolor                     "};
    static const struct Str32 str_norlodrstropt = {"-norlodrstropt                  "};
    static const struct Str32 str_noheurAB = {"-noheurAB                       "};
    static const struct Str32 str_do_opt_saved_regs = {"-do_opt_saved_regs              "};
    static const struct Str32 str_no_const_in_reg = {"-no_const_in_reg                "};
    static const struct Str32 str_docodehoist = {"-docodehoist                    "};
    static const struct Str32 str_norecur = {"-norecur                        "};
    static const struct Str32 str_nogenvreg = {"-nogenvreg                      "};
    static const struct Str32 str_notail = {"-notail                         "};
    static const struct Str32 str_domtag = {"-domtag                         "};
    static const struct Str32 str_nordstore = {"-nordstore                      "};
    static const struct Str32 str_createbb = {"-createbb                       "};
    static const struct Str32 str_f77alias = {"-f77alias                       "};
    static const struct Str32 str_noPalias = {"-noPalias                       "};
    static const struct Str32 str_fortran_lang = {"-fortran_lang                   "};
    static const struct Str32 str_moremotion = {"-moremotion                     "};
    static const struct Str32 str_no_r23 = {"-no_r23                         "};
    static const struct Str32 str_static = {"-static                         "};
    static const struct Str32 str_mips4 = {"-mips4                          "};
    static const struct Str32 str_pic2 = {"-pic2                           "};
    static const struct Str32 str_kpicopt = {"-kpicopt                        "};
    static const struct Str32 str_nokpicopt = {"-nokpicopt                      "};
    static const struct Str32 str_mips3 = {"-mips3                          "};
    static const struct Str32 str_mips2 = {"-mips2                          "};
    static const struct Str32 str_mips1 = {"-mips1                          "};
    static const struct Str32 str_dwopcode = {"-dwopcode                       "};
    static const struct Str32 str_64data = {"-64data                         "};
    static const struct Str32 str_strictIEEE = {"-strictIEEE                     "};
    static const struct Str32 str_fp32reg = {"-fp32reg                        "};
    static const struct Str32 str_trapuv = {"-trapuv                         "};
    static const struct Str32 str_varref = {"-varref                         "};
    static const struct Str32 str_Olimit = {"-Olimit                         "};
    static const struct Str32 str_loopunroll = {"-loopunroll                     "};
    static const struct Str32 str_unrolllimit = {"-unrolllimit                    "};
    static const struct Str32 str_nomultibbunroll = {"-nomultibbunroll                "};
    static const struct Str32 str_regr = {"-regr                           "};
    static const struct Str32 str_rege = {"-rege                           "};
    static const struct Str32 str_empty = {"                                "};

    static const struct Str32 str_tmp_uoptoutput = {"/tmp/uoptoutput                 "};
    static const struct Str32 str_tmp_uoptstrings = {"/tmp/uoptstrings                "};
    static const struct Str32 str_uoptlist = {"uoptlist                        "};

    listwritten = false;
    symwritten = false;
    listname[0] = ' ';
    arg_file_count = 0;
    sp482 = false;
    xpg = false;
    symname[0] = ' ';

    if (getenv("_XPG") != NULL) {
        xpg = true;
    }

    if (__Argc < 2) {
        abort();
    }
    for (arg_index = 1; arg_index != __Argc; arg_index++) {
        get_arg(arg_index, arg, sizeof(arg));
        if (arg[0] != '-') {
            ++arg_file_count;
            if (arg_file_count == 1) {
                memcpy(sourcename, arg, sizeof(arg));
            } else if (arg_file_count == 2) {
                memcpy(uopt_uname, arg, sizeof(arg));
            } else if (arg_file_count == 3) {
                memcpy(strpname, arg, sizeof(arg));
            }
        } else {
            if (arg[1] == '-' && arg[2] == '-' && xpg) {
                get_arg(arg_index, arg, sizeof(arg));
                memcpy(argz, arg, sizeof(arg));
                arglen = sizeof(arg) - 1;
                while (arglen > 0 && argz[arglen - 1] == ' ') {
                    --arglen;
                }
                if (arglen > 0) {
                    argz[arglen] = '\0';
                }
                ++arglen;

                if (arglen >= 3) {
                    memmove(arg, argz + 2, arglen - 2);
                }
                ++arg_file_count;
                if (arg_file_count == 1) {
                    memcpy(sourcename, arg, sizeof(arg));
                } else if (arg_file_count == 2) {
                    memcpy(uopt_uname, arg, sizeof(arg));
                } else if (arg_file_count == 3) {
                    memcpy(strpname, arg, sizeof(arg));
                }
            } else if (arg[1] == 'G' && arg[2] == ' ') {
                get_arg(++arg_index, numstr, sizeof(numstr));
                g_num = str_to_int(numstr);
            } else if (arg[1] == 'O' && (arg[2] == '0' || arg[2] == '1') && arg[3] == ' ') {
                suppressopt = true;
                o0o1specified = true;
            } else if (arg[1] == 'O' && (arg[2] == ' ' || arg[2] == '2') && arg[3] == ' ') {
                sp482 = true;
            } else if (arg[1] == 'O' && (arg[2] == '3' || arg[2] == '4') && arg[3] == ' ') {
                o3opt = true;
            } else if (arg[1] == 'g' && (arg[2] == ' ' || arg[2] == '1' || arg[2] == '2') && arg[3] == ' ') {
                suppressopt = true;
            } else if (arg[1] == 'g' && arg[2] == '0' && arg[3] == ' ') {
                // nothing
            } else if (arg[1] == 'g' && arg[2] == '3' && arg[3] == ' ') {
                    update_sym_file = true;
            } else if (arg[1] == 'w') {
                if (arg[2] == ' ') {
                    warn_flag = 1;
                } else if (arg[3] == ' ') {
                    switch (arg[2]) {
                        case '1':
                            warn_flag = 1;
                            break;
                        case '2':
                            warn_flag = 2;
                            break;
                    }
                }
            } else if (arg[1] == 'l' && arg[2] == ' ') {
                listwritten = true;
                get_arg(++arg_index, listname, sizeof(listname));
            } else if (arg[1] == 't' && arg[2] == ' ') {
                symwritten = true;
                get_arg(++arg_index, symname, sizeof(symname));
            } else if (arg[1] == 'f' && arg[2] == ' ') {
                usefeedback = true;
                get_arg(++arg_index, feedback_file, sizeof(feedback_file));
            } else if (arg[1] == 'i' && arg[2] == ' ') {
                get_arg(++arg_index, ignore_file, sizeof(ignore_file));
                read_ignore_file(ignore_file);
            } else if (arg[1] == 'p' && arg[2] == ' ') {
                get_arg(++arg_index, proc_to_print, sizeof(proc_to_print));
            } else if (arg[1] == 'E' && arg[2] == 'L' && arg[3] == ' ') {
                bigendian = false;
            } else if (arg[1] == 'E' && arg[2] == 'B' && arg[3] == ' ') {
                bigendian = true;
            } else if (arg[1] == 'v' && arg[2] == ' ') {
                verbose = true;
            } else if (arg[1] == 'b' && arg[2] == 'b' && arg[3] == ' ') {
                genbbnum = true;
            } else if (streq(arg, str_docopy)) {
                doingcopy = true;
            } else if (streq(arg, str_doassoc)) {
                doassoc = true;
            } else if (streq(arg, str_dowhyuncolor)) {
                dowhyuncolor = true;
            } else if (streq(arg, str_noprecolor)) {
                doprecolor = false;
            } else if (streq(arg, str_norlodrstropt)) {
                dorlodrstropt = false;
            } else if (streq(arg, str_noheurAB)) {
                doheurab = false;
            } else if (streq(arg, str_do_opt_saved_regs)) {
                do_opt_saved_regs = true;
            } else if (streq(arg, str_no_const_in_reg)) {
                do_const_in_reg = false;
            } else if (streq(arg, str_docodehoist)) {
                do_const_in_reg = true;
            } else if (streq(arg, str_norecur)) {
                dorecur = false;
            } else if (streq(arg, str_nogenvreg)) {
                dogenvreg = false;
            } else if (streq(arg, str_notail)) {
                dotail = false;
            } else if (streq(arg, str_domtag)) {
                domtag = true;
            } else if (streq(arg, str_nordstore)) {
                dordstore = false;
            } else if (streq(arg, str_createbb)) {
                docreatebb = true;
            } else if (streq(arg, str_f77alias)) {
                nof77alias = false;
            } else if (streq(arg, str_noPalias)) {
                nopalias = true;
            } else if (streq(arg, str_fortran_lang)) {
                fortran_lang = true;
            } else if (streq(arg, str_moremotion)) {
                moremotion = true;
            } else if (streq(arg, str_no_r23)) {
                no_r23 = true;
            } else if (streq(arg, str_static)) {
                f77_static_flag = true;
            } else if (streq(arg, str_mips4)) {
                mipsflag = 3;
            } else if (streq(arg, str_pic2)) {
                kpic_flag = true;
            } else if (streq(arg, str_kpicopt)) {
                // nothing
            } else if (streq(arg, str_nokpicopt)) {
                dokpicopt = false;
            } else if (streq(arg, str_mips3)) {
                mipsflag = 2;
            } else if (streq(arg, str_mips2)) {
                // nothing
            } else if (streq(arg, str_mips1)) {
                // nothing
            } else if (streq(arg, str_dwopcode)) {
                dwopcode = true;
                int_reg_size = 8;
            } else if (streq(arg, str_64data)) {
                mips3_64data = true;
                dwopcode = true;
                int_reg_size = 8;
            } else if (streq(arg, str_strictIEEE)) {
                strictieee = true;
            } else if (streq(arg, str_fp32reg)) {
                fp32reg = true;
            } else if (streq(arg, str_trapuv)) {
                // do nothing
            } else if (streq(arg, str_varref)) {
                get_arg(++arg_index, numstr, sizeof(numstr));
                varreflimit = str_to_int(numstr);
            } else if (streq(arg, str_Olimit)) {
                get_arg(++arg_index, numstr, sizeof(numstr));
                sizethreshold = str_to_int(numstr);
            } else if (streq(arg, str_loopunroll)) {
                get_arg(++arg_index, numstr, sizeof(numstr));
                unroll_times = str_to_int(numstr);
            } else if (streq(arg, str_unrolllimit)) {
                get_arg(++arg_index, numstr, sizeof(numstr));
                unroll_limit = str_to_int(numstr);
            } else if (streq(arg, str_nomultibbunroll)) {
                multibbunroll = false;
            } else if (streq(arg, str_regr) || streq(arg, str_rege)) {
                get_arg(++arg_index, numstr, sizeof(numstr));
                num = str_to_int(numstr);
                if (streq(arg, str_regr)) {
                    actnuminterregs = num;
                } else {
                    actnuminteeregs = num;
                }
                usingregoption = true;
                doprecolor = false;
            } else {
                found_unrecognized = false;
                str_opt = str_empty;
                pos = 1;
                while ((arg[pos] >= 'A' && arg[pos] <= 'Z') || (arg[pos] >= 'a' && arg[pos] <= 'z')) {
                    str_opt.c[pos - 1] = arg[pos];
                    pos++;
                }
                if (arg[pos] == ':') {
                    pos++;
                    num = 0;
                    while (arg[pos] >= '0' && arg[pos] <= '9') {
                        num = num * 10 + (arg[pos++] - '0');
                    }
                } else {
                    if (warn_flag != 0) {
                        write_string(err.c_file, "uopt: Warning: unrecognized option ", 35, 35);
                        warned = true;
                    }
                    pos = 0;
                    while (arg[pos] != ' ') {
                        //! @bug: writing to output instead of err
                        write_char(output.c_file, arg[pos++], 1);
                    }
                    writeln(err.c_file);
                    fflush(err.c_file);
                    found_unrecognized = true;
                }
                if (!found_unrecognized) {
                    getoption(find_uopt_option(str_opt), num);
                }
            }
        }
    }

    if (sp482) {
        o3opt = false;
    }
    if (arg_file_count < 2) {
        copy_filename(uopt_uname, str_tmp_uoptoutput);
    }
    if (arg_file_count < 3) {
        copy_filename(strpname, str_tmp_uoptstrings);
    }
    if (listname[0] == ' ') {
        copy_filename(listname, str_uoptlist);
    }
    if (listwritten) {
        rewrite(&list, listname, 1024, 0);
    }
    openstdout(&err);
    uini();
    initur(sourcename);
    inituwrite(uopt_uname);
    if (!symwritten) {
        update_sym_file = false;
        if (usefeedback) {
            if (warn_flag != 1) {
                write_string(err.c_file, "uopt: Warning: feedback requires both symbol table and feedback file names ", 75, 75);
                writeln(err.c_file);
                warned = true;
            }
            usefeedback = false;
        }
    }
    if (usefeedback || update_sym_file) {
        addnullfilename(symname);
        if (st_readbinary(st_str, 'r') < 0) {
            write_string(err.c_file, "uopt: st_readbinary failed on ", 30, 30);
            write_string(err.c_file, symname, sizeof(symname), sizeof(symname));
            writeln(err.c_file);
            symwritten = false;
            usefeedback = false;
            return;
        }
    }
    if (usefeedback) {
        addnullfilename(feedback_file);
        read_feedback_file(st_str);
    }
}

/*
0043771C optinit
*/
static void func_004376E0(enum Uopcode op, bool a, bool b, bool c) {
    optab[op].unk0 = a;
    optab[op].unk1 = b;
    optab[op].unk2 = c;
}
/*
0045806C main
*/
void optinit(void) {
    func_004376E0(0, 0, 1, 0);
    func_004376E0(1, 0, 1, 1);
    func_004376E0(2, 0, 1, 0);
    func_004376E0(3, 1, 1, 0);
    func_004376E0(4, 0, 1, 1);
    func_004376E0(5, 0, 1, 0);
    func_004376E0(6, 0, 0, 0);
    func_004376E0(7, 0, 0, 0);
    func_004376E0(8, 0, 1, 0);
    func_004376E0(9, 0, 1, 1);
    func_004376E0(0xA, 0, 1, 0);
    func_004376E0(0xB, 0, 1, 0);
    func_004376E0(0xC, 0, 1, 0);
    func_004376E0(0xD, 0, 1, 0);
    func_004376E0(0xE, 0, 1, 0);
    func_004376E0(0xF, 0, 1, 0);
    func_004376E0(0x10, 1, 1, 0);
    func_004376E0(0x11, 0, 1, 0);
    func_004376E0(0x12, 0, 1, 0);
    func_004376E0(0x16, 0, 1, 0);
    func_004376E0(0x13, 0, 0, 0);
    func_004376E0(0x14, 0, 0, 0);
    func_004376E0(0x15, 0, 1, 0);
    func_004376E0(0x17, 1, 1, 0);
    func_004376E0(0x18, 0, 1, 0);
    func_004376E0(0x19, 0, 1, 0);
    func_004376E0(0x1A, 0, 1, 0);
    func_004376E0(0x1B, 0, 1, 0);
    func_004376E0(0x1C, 0, 1, 1);
    func_004376E0(0x1D, 0, 1, 1);
    func_004376E0(0x1E, 0, 1, 0);
    func_004376E0(0x1F, 1, 0, 0);
    func_004376E0(0x20, 0, 1, 0);
    func_004376E0(0x21, 0, 0, 0);
    func_004376E0(0x23, 0, 1, 1);
    func_004376E0(0x27, 0, 0, 0);
    func_004376E0(0x28, 0, 1, 1);
    func_004376E0(0x29, 0, 1, 1);
    func_004376E0(0x2B, 0, 0, 0);
    func_004376E0(0x31, 1, 1, 0);
    func_004376E0(0x5F, 0, 1, 1);
    func_004376E0(0x48, 0, 1, 0);
    func_004376E0(0x4B, 0, 1, 0);
    func_004376E0(0x4D, 0, 1, 1);
    func_004376E0(0x4E, 0, 1, 1);
    func_004376E0(0x24, 0, 0, 0);
    func_004376E0(0x26, 1, 1, 0);
    func_004376E0(0x2A, 0, 0, 0);
    func_004376E0(0x2C, 1, 1, 0);
    func_004376E0(0x2D, 0, 1, 1);
    func_004376E0(0x2E, 0, 1, 1);
    func_004376E0(0x38, 0, 1, 1);
    func_004376E0(0x34, 0, 1, 1);
    func_004376E0(0x35, 0, 1, 1);
    func_004376E0(0x2F, 0, 1, 1);
    func_004376E0(0x30, 0, 1, 1);
    func_004376E0(0x32, 0, 1, 0);
    func_004376E0(0x36, 0, 1, 0);
    func_004376E0(0x33, 0, 1, 0);
    func_004376E0(0x3D, 0, 1, 0);
    func_004376E0(0x37, 0, 1, 0);
    func_004376E0(0x39, 0, 0, 0);
    func_004376E0(0x3A, 0, 1, 1);
    func_004376E0(0x3B, 0, 1, 1);
    func_004376E0(0x3C, 0, 1, 1);
    func_004376E0(0x93, 0, 1, 0);
    func_004376E0(0x94, 0, 1, 0);
    func_004376E0(0x3E, 0, 1, 0);
    func_004376E0(0x3F, 0, 1, 0);
    func_004376E0(0x40, 0, 1, 0);
    func_004376E0(0x41, 0, 1, 1);
    func_004376E0(0x42, 1, 1, 0);
    func_004376E0(0x45, 0, 1, 0);
    func_004376E0(0x43, 0, 1, 0);
    func_004376E0(0x44, 0, 1, 0);
    func_004376E0(0x46, 0, 1, 0);
    func_004376E0(0x47, 0, 1, 0);
    func_004376E0(0x49, 0, 1, 0);
    func_004376E0(0x4A, 0, 1, 0);
    func_004376E0(0x95, 0, 1, 0);
    func_004376E0(0x4C, 0, 1, 0);
    func_004376E0(0x4F, 0, 0, 0);
    func_004376E0(0x50, 0, 1, 0);
    func_004376E0(0x51, 0, 1, 0);
    func_004376E0(0x52, 0, 1, 0);
    func_004376E0(0x53, 0, 0, 0);
    func_004376E0(0x54, 0, 1, 0);
    func_004376E0(0x55, 0, 1, 1);
    func_004376E0(0x56, 0, 1, 1);
    func_004376E0(0x57, 0, 1, 1);
    func_004376E0(0x58, 0, 1, 0);
    func_004376E0(0x59, 0, 1, 0);
    func_004376E0(0x5B, 0, 1, 1);
    func_004376E0(0x5C, 0, 1, 0);
    func_004376E0(0x96, 0, 0, 0);
    func_004376E0(0x5D, 0, 1, 1);
    func_004376E0(0x5E, 0, 1, 0);
    func_004376E0(0x61, 0, 1, 0);
    func_004376E0(0x60, 0, 0, 0);
    func_004376E0(0x62, 0, 1, 0);
    func_004376E0(0x63, 0, 0, 0);
    func_004376E0(0x8E, 0, 1, 0);
    func_004376E0(0x64, 0, 1, 0);
    func_004376E0(0x65, 0, 0, 0);
    func_004376E0(0x66, 0, 1, 0);
    func_004376E0(0x67, 0, 1, 0);
    func_004376E0(0x97, 1, 1, 0);
    func_004376E0(0x68, 0, 0, 0);
    func_004376E0(0x69, 0, 1, 1);
    func_004376E0(0x6A, 1, 1, 0);
    func_004376E0(0x6D, 0, 0, 0);
    func_004376E0(0x6E, 0, 1, 0);
    func_004376E0(0x70, 0, 0, 0);
    func_004376E0(0x71, 0, 0, 0);
    func_004376E0(0x72, 0, 1, 0);
    func_004376E0(0x73, 0, 1, 1);
    func_004376E0(0x74, 0, 1, 1);
    func_004376E0(0x75, 0, 1, 1);
    func_004376E0(0x76, 0, 1, 0);
    func_004376E0(0x77, 0, 1, 0);
    func_004376E0(0x78, 0, 0, 0);
    func_004376E0(0x79, 0, 1, 0);
    func_004376E0(0x7A, 0, 0, 0);
    func_004376E0(0x7B, 0, 1, 0);
    func_004376E0(0x7C, 0, 1, 0);
    func_004376E0(0x7D, 0, 1, 1);
    func_004376E0(0x7E, 0, 1, 0);
    func_004376E0(0x7F, 1, 1, 0);
    func_004376E0(0x80, 0, 1, 1);
    func_004376E0(0x81, 0, 1, 1);
    func_004376E0(0x82, 0, 1, 1);
    func_004376E0(0x83, 0, 1, 1);
    func_004376E0(0x84, 0, 1, 1);
    func_004376E0(0x85, 0, 1, 1);
    func_004376E0(0x86, 0, 1, 0);
    func_004376E0(0x87, 0, 1, 0);
    func_004376E0(0x88, 1, 1, 0);
    func_004376E0(0x8A, 0, 1, 1);
    func_004376E0(0x8B, 0, 0, 0);
    func_004376E0(0x8C, 1, 1, 0);
    func_004376E0(0x8D, 0, 1, 1);

    perm_heap = NULL;
    ustrptr = alloc_new(0x400, &perm_heap);
    ustackbot = alloc_new(0x10, &perm_heap);
    ustackbot[2] = 0;
    ustackbot[3] = 0;
    ustack = ustackbot;
    parstackbot = alloc_new(0xC, &perm_heap);
    parstackbot[1] = 0;
    parstackbot[2] = 0;
    parstack = parstackbot;
    curlevel = 0;
    filteringout = false;
    suppressopt = false;
    o0o1specified = false;
    lang = 2;
    doingcopy = false;
    doassoc = false;
    dowhyuncolor = false;
    doprecolor = true;
    dorlodrstropt = true;
    doheurab = true;
    do_opt_saved_regs = false;
    docreatebb = false;
    do_const_in_reg = true;
    docodehoist = false;
    dorecur = true;
    dogenvreg = true;
    dotail = true;
    domtag = false;
    usingregoption = false;
    no_r23 = false;
    nopalias = false;
    no_r3 = false;
    nof77alias = true;
    fortran_lang = false;
    moremotion = false;
    genbbnum = false;
    warn_flag = false;
    warned = false;
    f77_static_flag = false;
    kpic_flag = false;
    dokpicopt = true;
    g_num = 0;
    dwopcode = false;
    int_reg_size = 4;
    mipsflag = 0;
    mips3_64data = false;
    stack_reversed = false;
    strictieee = false;
    fp32reg = false;
    varreflimit = 0x14;
    dbugno = 0;
    proc_to_print[0] = ' ';
    ctrl_head = NULL;
    movcostused = 1.0f;
    docopyprog = true;
    dordstore = true;
    doscm = false;
    docm = true;
    verbose = false;
    bigendian = true;
    o3opt = false;
    update_sym_file = false;
    sizethreshold = 1000;
    multibbunroll = true;
    unroll_times = 4;
    unroll_limit = 0x140;
    actnuminterregs = 9;
    actnuminteeregs = 0xA;
    processargs();
    if (verbose != 0) {
        write_string(err.c_file, "uopt: ", 6, 6);
        fflush(err.c_file);
    }
    prepass();
    if (usefeedback != 0) {
        incorp_feedback();
    }
    nocopy = alloc_new(0x40, &perm_heap);
    nota_candof = alloc_new(0x1C, &perm_heap);
    constprop = alloc_new(0x10, &perm_heap);
    regsinclass1 = 0x17;
    firsterreg[0] = 1;
    firsteereg[0] = 0xE;
    firstparmreg[0] = 3;
    regsinclass[1] = 0xC;
    firsterreg[1] = 0x18;
    firstparmreg[1] = 0x1A;
    numoferregs[1] = 6;
    lasterreg[1] = (6 + 0x17);
    firsteereg[1] = (6 + 0x18);
    lasteereg[1] = 0x23;
    seterregs[2] = GENMASK(firsterreg[1], lasterreg[1] + 1);
    seterregs[3] = GENMASK(firsterreg[1] - 32, lasterreg[1] - 32 + 1);
    seteeregs[2] = GENMASK(firsteereg[1], lasteereg[1] + 1);
    seteeregs[3] = GENMASK(firsteereg[1] - 32, lasteereg[1] - 32 + 1);
    setregs[2] = (seterregs[2] | seteeregs[2]);
    setregs[3] = (seterregs[3] | seteeregs[3]);
    gsptr = alloc_new(0x34, &perm_heap);
    *(unsigned char *)gsptr = 123;
    dft_livbb = (struct livbb *)alloc_new(0x18, &perm_heap);
    dft_livbb->unk10 = 0;
    dft_livbb->unk12 = 0;
    dft_livbb->unk14 = 0;
    dft_livbb->unk0 = 0;
    dft_livbb->unk13 = 0;
    dft_livbb->unk4 = 0;
    dft_livbb->unk8 = 0;
    dft_livbb->unkC = 0;
    dft_livbb->unk15 = 0;
    dft_livbb->unk16 = 0;
    dft_livbb->unk17 = 0;
    heapptr = alloc_mark(&perm_heap);
    numlcse = 0;
    numlrdstr = 0;
    numgcopy = 0;
    numgcse = 0;
    numrdstr = 0;
    numinsert = 0;
    numtstrep = 0;
    numsrinc = 0;
    numexpr = 0;
    numstr = 0;
    totvarref = 0;
    totvarrref = 0;
    totvarsav = 0;
    totvarrsav = 0;
    totexpref = 0;
    totexprref = 0;
    totexpsav = 0;
    totexprsav = 0;
    totvarrlods = 0;
    totvarrstrs = 0;
    totexprlods = 0;
    totexprstrs = 0;
    lopttime = 0;
    dataflowtime = 0;
    dataflowiter = 0;
    numdataflow = 0;
    regaloctime = 0;
}

__asm__(R""(
.text
.set noat
.set noreorder

glabel procinit
    .ent procinit
    # 00456A2C oneproc
/* 00439188 3C1C0FBE */  .cpload $t9
/* 0043918C 279C1108 */  
/* 00439190 0399E021 */  
/* 00439194 8F818990 */  lw     $at, %got(realdispdiv)($gp)
/* 00439198 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 0043919C 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 004391A0 AC200000 */  sw    $zero, ($at)
/* 004391A4 8F818994 */  lw     $at, %got(realdispmod)($gp)
/* 004391A8 AFBF001C */  sw    $ra, 0x1c($sp)
/* 004391AC AFBC0018 */  sw    $gp, 0x18($sp)
/* 004391B0 24040104 */  li    $a0, 260
/* 004391B4 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 004391B8 0320F809 */  jalr  $t9
/* 004391BC A0200000 */   sb    $zero, ($at)
/* 004391C0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004391C4 240AFFFF */  li    $t2, -1
/* 004391C8 8F898988 */  lw     $t1, %got(realstore)($gp)
/* 004391CC 8F81898C */  lw     $at, %got(currealpool)($gp)
/* 004391D0 8F858960 */  lw     $a1, %got(ustackbot)($gp)
/* 004391D4 AD220000 */  sw    $v0, ($t1)
/* 004391D8 AC400100 */  sw    $zero, 0x100($v0)
/* 004391DC AC220000 */  sw    $v0, ($at)
/* 004391E0 8F818998 */  lw     $at, %got(strpdisplace)($gp)
/* 004391E4 8CA50000 */  lw    $a1, ($a1)
/* 004391E8 8F868968 */  lw     $a2, %got(parstackbot)($gp)
/* 004391EC AC200000 */  sw    $zero, ($at)
/* 004391F0 8F8189AC */  lw     $at, %got(graphhead)($gp)
/* 004391F4 8F878D74 */  lw     $a3, %got(r2bitpos)($gp)
/* 004391F8 8F838DF8 */  lw     $v1, %got(table)($gp)
/* 004391FC AC200000 */  sw    $zero, ($at)
/* 00439200 8F8189B0 */  lw     $at, %got(graphtail)($gp)
/* 00439204 AC200000 */  sw    $zero, ($at)
/* 00439208 8F8189B4 */  lw     $at, %got(curgraphnode)($gp)
/* 0043920C AC200000 */  sw    $zero, ($at)
/* 00439210 8F818964 */  lw     $at, %got(ustack)($gp)
/* 00439214 AC250000 */  sw    $a1, ($at)
/* 00439218 ACA00008 */  sw    $zero, 8($a1)
/* 0043921C 8F81896C */  lw     $at, %got(parstack)($gp)
/* 00439220 8CC60000 */  lw    $a2, ($a2)
/* 00439224 AC260000 */  sw    $a2, ($at)
/* 00439228 8F818A34 */  lw     $at, %got(curmst)($gp)
/* 0043922C ACC00004 */  sw    $zero, 4($a2)
/* 00439230 AC200000 */  sw    $zero, ($at)
/* 00439234 8F8189B8 */  lw     $at, %got(curstaticno)($gp)
/* 00439238 AC200000 */  sw    $zero, ($at)
/* 0043923C 8F8189E0 */  lw     $at, %got(bitposcount)($gp)
/* 00439240 AC200000 */  sw    $zero, ($at)
/* 00439244 3C010001 */  lui   $at, 1
/* 00439248 24218E64 */  addiu $at, $at, -0x719c
/* 0043924C ACEA0000 */  sw    $t2, ($a3)
/* 00439250 ACEA0004 */  sw    $t2, 4($a3)
/* 00439254 ACEA0008 */  sw    $t2, 8($a3)
/* 00439258 00231021 */  addu  $v0, $at, $v1
.L0043925C:
/* 0043925C 24630004 */  addiu $v1, $v1, 4
/* 00439260 1462FFFE */  bne   $v1, $v0, .L0043925C
/* 00439264 AC60FFFC */   sw    $zero, -4($v1)
/* 00439268 8F818DF0 */  lw     $at, %got(itable)($gp)
/* 0043926C 8F828DF0 */  lw     $v0, %got(itable)($gp)
/* 00439270 8F838DF0 */  lw     $v1, %got(itable)($gp)
/* 00439274 AC200000 */  sw    $zero, ($at)
/* 00439278 8F818DF0 */  lw     $at, %got(itable)($gp)
/* 0043927C 2442000C */  addiu $v0, $v0, 0xc
/* 00439280 2463194C */  addiu $v1, $v1, 0x194c
/* 00439284 AC200004 */  sw    $zero, 4($at)
/* 00439288 8F818DF0 */  lw     $at, %got(itable)($gp)
/* 0043928C AC200008 */  sw    $zero, 8($at)
.L00439290:
/* 00439290 24420010 */  addiu $v0, $v0, 0x10
/* 00439294 AC40FFF0 */  sw    $zero, -0x10($v0)
/* 00439298 AC40FFF4 */  sw    $zero, -0xc($v0)
/* 0043929C AC40FFF8 */  sw    $zero, -8($v0)
/* 004392A0 1443FFFB */  bne   $v0, $v1, .L00439290
/* 004392A4 AC40FFFC */   sw    $zero, -4($v0)
/* 004392A8 8F8189C0 */  lw     $at, %got(stathead)($gp)
/* 004392AC 8F888CD4 */  lw     $t0, %got(varbits)($gp)
/* 004392B0 8F898CE4 */  lw     $t1, %got(slvarbits)($gp)
/* 004392B4 AC200000 */  sw    $zero, ($at)
/* 004392B8 8F8189C4 */  lw     $at, %got(stattail)($gp)
/* 004392BC 8F8B8CD8 */  lw     $t3, %got(mvarbits)($gp)
/* 004392C0 8F8C8CDC */  lw     $t4, %got(fsymbits)($gp)
/* 004392C4 AC200000 */  sw    $zero, ($at)
/* 004392C8 8F8189EC */  lw     $at, %got(bittab)($gp)
/* 004392CC 8F8D8CE0 */  lw     $t5, %got(asgnbits)($gp)
/* 004392D0 8F9F8CE8 */  lw     $ra, %got(slasgnbits)($gp)
/* 004392D4 AC200000 */  sw    $zero, ($at)
/* 004392D8 8F8189F0 */  lw     $at, %got(bittabsize)($gp)
/* 004392DC 8F828D90 */  lw     $v0, %got(setofr2bbs)($gp)
/* 004392E0 8F838D78 */  lw     $v1, %got(iscolored)($gp)
/* 004392E4 AC200000 */  sw    $zero, ($at)
/* 004392E8 8F8189F4 */  lw     $at, %got(pdeftab)($gp)
/* 004392EC 8F8E8B6C */  lw     $t6, %got(curproc)($gp)
/* 004392F0 24180001 */  li    $t8, 1
/* 004392F4 AC200000 */  sw    $zero, ($at)
/* 004392F8 8F8189F8 */  lw     $at, %got(pdeftabsize)($gp)
/* 004392FC 24190001 */  li    $t9, 1
/* 00439300 8F848CD0 */  lw     $a0, %got(strp)($gp)
/* 00439304 AC200000 */  sw    $zero, ($at)
/* 00439308 8F8189FC */  lw     $at, %got(highestmdef)($gp)
/* 0043930C 8F858DDC */  lw     $a1, %got(strpname)($gp)
/* 00439310 24060400 */  li    $a2, 1024
/* 00439314 AC200000 */  sw    $zero, ($at)
/* 00439318 8F818A00 */  lw     $at, %got(pdefmax)($gp)
/* 0043931C 00003825 */  move  $a3, $zero
/* 00439320 AC2A0000 */  sw    $t2, ($at)
/* 00439324 8F818A04 */  lw     $at, %got(pdefno)($gp)
/* 00439328 AC200000 */  sw    $zero, ($at)
/* 0043932C 8F818CEC */  lw     $at, %got(storeop)($gp)
/* 00439330 AD000004 */  sw    $zero, 4($t0)
/* 00439334 AD000000 */  sw    $zero, ($t0)
/* 00439338 AD200004 */  sw    $zero, 4($t1)
/* 0043933C AD200000 */  sw    $zero, ($t1)
/* 00439340 AD600004 */  sw    $zero, 4($t3)
/* 00439344 AD600000 */  sw    $zero, ($t3)
/* 00439348 AD800004 */  sw    $zero, 4($t4)
/* 0043934C AD800000 */  sw    $zero, ($t4)
/* 00439350 ADA00004 */  sw    $zero, 4($t5)
/* 00439354 ADA00000 */  sw    $zero, ($t5)
/* 00439358 AFE00004 */  sw    $zero, 4($ra)
/* 0043935C AFE00000 */  sw    $zero, ($ra)
/* 00439360 AC200000 */  sw    $zero, ($at)
/* 00439364 8F818CEC */  lw     $at, %got(storeop)($gp)
/* 00439368 AC200004 */  sw    $zero, 4($at)
/* 0043936C 8F818CF0 */  lw     $at, %got(trapop)($gp)
/* 00439370 AC200000 */  sw    $zero, ($at)
/* 00439374 8F818CF0 */  lw     $at, %got(trapop)($gp)
/* 00439378 AC200004 */  sw    $zero, 4($at)
/* 0043937C 8F818CF4 */  lw     $at, %got(trapconstop)($gp)
/* 00439380 AC200000 */  sw    $zero, ($at)
/* 00439384 8F818CF4 */  lw     $at, %got(trapconstop)($gp)
/* 00439388 AC200004 */  sw    $zero, 4($at)
/* 0043938C 8F818CF8 */  lw     $at, %got(indmults)($gp)
/* 00439390 AC200000 */  sw    $zero, ($at)
/* 00439394 8F818CF8 */  lw     $at, %got(indmults)($gp)
/* 00439398 AC200004 */  sw    $zero, 4($at)
/* 0043939C 8F818CFC */  lw     $at, %got(boolexp)($gp)
/* 004393A0 AC200000 */  sw    $zero, ($at)
/* 004393A4 8F818CFC */  lw     $at, %got(boolexp)($gp)
/* 004393A8 AC200004 */  sw    $zero, 4($at)
/* 004393AC 8F818D04 */  lw     $at, %got(trepexp)($gp)
/* 004393B0 AC200000 */  sw    $zero, ($at)
/* 004393B4 8F818D04 */  lw     $at, %got(trepexp)($gp)
/* 004393B8 AC200004 */  sw    $zero, 4($at)
/* 004393BC 8F818D0C */  lw     $at, %got(outmodebits)($gp)
/* 004393C0 AC200000 */  sw    $zero, ($at)
/* 004393C4 8F818D0C */  lw     $at, %got(outmodebits)($gp)
/* 004393C8 AC200004 */  sw    $zero, 4($at)
/* 004393CC 8F818D10 */  lw     $at, %got(notinmodebits)($gp)
/* 004393D0 AC200000 */  sw    $zero, ($at)
/* 004393D4 8F818D10 */  lw     $at, %got(notinmodebits)($gp)
/* 004393D8 AC200004 */  sw    $zero, 4($at)
/* 004393DC 8F818D14 */  lw     $at, %got(varfactor_muls)($gp)
/* 004393E0 AC200000 */  sw    $zero, ($at)
/* 004393E4 8F818D14 */  lw     $at, %got(varfactor_muls)($gp)
/* 004393E8 AC200004 */  sw    $zero, 4($at)
/* 004393EC 8F818D18 */  lw     $at, %got(coloreditems)($gp)
/* 004393F0 AC200000 */  sw    $zero, ($at)
/* 004393F4 8F818D18 */  lw     $at, %got(coloreditems)($gp)
/* 004393F8 AC200004 */  sw    $zero, 4($at)
/* 004393FC 8F818D1C */  lw     $at, %got(vareqv)($gp)
/* 00439400 AC200000 */  sw    $zero, ($at)
/* 00439404 8F818D1C */  lw     $at, %got(vareqv)($gp)
/* 00439408 AC200004 */  sw    $zero, 4($at)
/* 0043940C 8F818D20 */  lw     $at, %got(asgneqv)($gp)
/* 00439410 AC200000 */  sw    $zero, ($at)
/* 00439414 8F818D20 */  lw     $at, %got(asgneqv)($gp)
/* 00439418 AC200004 */  sw    $zero, 4($at)
/* 0043941C 8F818D24 */  lw     $at, %got(coloredparms)($gp)
/* 00439420 AC200000 */  sw    $zero, ($at)
/* 00439424 8F818D24 */  lw     $at, %got(coloredparms)($gp)
/* 00439428 AC200004 */  sw    $zero, 4($at)
/* 0043942C 8F818D28 */  lw     $at, %got(iscolored12)($gp)
/* 00439430 AC200000 */  sw    $zero, ($at)
/* 00439434 8F818D28 */  lw     $at, %got(iscolored12)($gp)
/* 00439438 AC200004 */  sw    $zero, 4($at)
/* 0043943C 8F818970 */  lw     $at, %got(tempdisp)($gp)
/* 00439440 AC400004 */  sw    $zero, 4($v0)
/* 00439444 AC400000 */  sw    $zero, ($v0)
/* 00439448 AC40000C */  sw    $zero, 0xc($v0)
/* 0043944C AC400008 */  sw    $zero, 8($v0)
/* 00439450 AC400014 */  sw    $zero, 0x14($v0)
/* 00439454 AC400010 */  sw    $zero, 0x10($v0)
/* 00439458 AC600004 */  sw    $zero, 4($v1)
/* 0043945C AC600000 */  sw    $zero, ($v1)
/* 00439460 AC60000C */  sw    $zero, 0xc($v1)
/* 00439464 AC600008 */  sw    $zero, 8($v1)
/* 00439468 AC200000 */  sw    $zero, ($at)
/* 0043946C 8F818974 */  lw     $at, %got(templochead)($gp)
/* 00439470 8DCE0000 */  lw    $t6, ($t6)
/* 00439474 AC200000 */  sw    $zero, ($at)
/* 00439478 8F818978 */  lw     $at, %got(temploctail)($gp)
/* 0043947C AC200000 */  sw    $zero, ($at)
/* 00439480 8F818A30 */  lw     $at, %got(aentptr)($gp)
/* 00439484 AC200000 */  sw    $zero, ($at)
/* 00439488 8F818B0C */  lw     $at, %got(allcallersave)($gp)
/* 0043948C 91CF000C */  lbu   $t7, 0xc($t6)
/* 00439490 A02F0000 */  sb    $t7, ($at)
/* 00439494 8F818B10 */  lw     $at, %got(propagate_ee_saves)($gp)
/* 00439498 A0380000 */  sb    $t8, ($at)
/* 0043949C 8F818A24 */  lw     $at, %got(passedbyfp)($gp)
/* 004394A0 A0390000 */  sb    $t9, ($at)
/* 004394A4 8F818A28 */  lw     $at, %got(offsetpassedbyint)($gp)
/* 004394A8 8F99888C */  lw    $t9, %call16(rewrite)($gp)
/* 004394AC AC200000 */  sw    $zero, ($at)
/* 004394B0 8F8189C8 */  lw     $at, %got(staticlinkloc)($gp)
/* 004394B4 0320F809 */  jalr  $t9
/* 004394B8 AC200000 */   sw    $zero, ($at)
/* 004394BC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004394C0 240E0060 */  li    $t6, 96
/* 004394C4 240F0001 */  li    $t7, 1
/* 004394C8 8F818B20 */  lw     $at, %got(outofmem)($gp)
/* 004394CC 8FBF001C */  lw    $ra, 0x1c($sp)
/* 004394D0 A0200000 */  sb    $zero, ($at)
/* 004394D4 8F818DA8 */  lw     $at, %got(lastcopiedu)($gp)
/* 004394D8 A02E0000 */  sb    $t6, ($at)
/* 004394DC 8F818B3C */  lw     $at, %got(has_exc_handler)($gp)
/* 004394E0 A0200000 */  sb    $zero, ($at)
/* 004394E4 8F818B40 */  lw     $at, %got(can_elim_tail)($gp)
/* 004394E8 A02F0000 */  sb    $t7, ($at)
/* 004394EC 8F818B44 */  lw     $at, %got(use_c_semantics)($gp)
/* 004394F0 27BD0020 */  addiu $sp, $sp, 0x20
/* 004394F4 03E00008 */  jr    $ra
/* 004394F8 A0200000 */   sb    $zero, ($at)
    .type procinit, @function
    .size procinit, .-procinit
    .end procinit

glabel procinit_regs
    .ent procinit_regs
    # 00456A2C oneproc
/* 004394FC 3C1C0FBE */  .cpload $t9
/* 00439500 279C0D94 */  
/* 00439504 0399E021 */  
/* 00439508 8F888D34 */  lw     $t0, %got(firsterreg)($gp)
/* 0043950C 8F828A18 */  lw     $v0, %got(regsinclass1)($gp)
/* 00439510 8F8B8D5C */  lw     $t3, %got(regscantpass)($gp)
/* 00439514 8D030000 */  lw    $v1, ($t0)
/* 00439518 8D050004 */  lw    $a1, 4($t0)
/* 0043951C 8C420000 */  lw    $v0, ($v0)
/* 00439520 24640001 */  addiu $a0, $v1, 1
/* 00439524 2C6E0020 */  sltiu $t6, $v1, 0x20
/* 00439528 00607827 */  not   $t7, $v1
/* 0043952C 01EEC004 */  sllv  $t8, $t6, $t7
/* 00439530 00807027 */  not   $t6, $a0
/* 00439534 2C990020 */  sltiu $t9, $a0, 0x20
/* 00439538 01D97804 */  sllv  $t7, $t9, $t6
/* 0043953C 030FC825 */  or    $t9, $t8, $t7
/* 00439540 00A0C027 */  not   $t8, $a1
/* 00439544 2CAE0020 */  sltiu $t6, $a1, 0x20
/* 00439548 030E7804 */  sllv  $t7, $t6, $t8
/* 0043954C 24A60001 */  addiu $a2, $a1, 1
/* 00439550 032F7025 */  or    $t6, $t9, $t7
/* 00439554 00C0C827 */  not   $t9, $a2
/* 00439558 2CD80020 */  sltiu $t8, $a2, 0x20
/* 0043955C 03387804 */  sllv  $t7, $t8, $t9
/* 00439560 01CFC025 */  or    $t8, $t6, $t7
/* 00439564 00407027 */  not   $t6, $v0
/* 00439568 2C590020 */  sltiu $t9, $v0, 0x20
/* 0043956C 01D97804 */  sllv  $t7, $t9, $t6
/* 00439570 030FC825 */  or    $t9, $t8, $t7
/* 00439574 3C010004 */  lui   $at, 4
/* 00439578 03217025 */  or    $t6, $t9, $at
/* 0043957C 2478FFE0 */  addiu $t8, $v1, -0x20
/* 00439580 2F0F0020 */  sltiu $t7, $t8, 0x20
/* 00439584 AD6E0000 */  sw    $t6, ($t3)
/* 00439588 0060C827 */  not   $t9, $v1
/* 0043958C 032F7004 */  sllv  $t6, $t7, $t9
/* 00439590 2498FFE0 */  addiu $t8, $a0, -0x20
/* 00439594 2F0F0020 */  sltiu $t7, $t8, 0x20
/* 00439598 0080C827 */  not   $t9, $a0
/* 0043959C 032FC004 */  sllv  $t8, $t7, $t9
/* 004395A0 01D87825 */  or    $t7, $t6, $t8
/* 004395A4 24B9FFE0 */  addiu $t9, $a1, -0x20
/* 004395A8 2F2E0020 */  sltiu $t6, $t9, 0x20
/* 004395AC 00A0C027 */  not   $t8, $a1
/* 004395B0 030EC804 */  sllv  $t9, $t6, $t8
/* 004395B4 01F97025 */  or    $t6, $t7, $t9
/* 004395B8 24D8FFE0 */  addiu $t8, $a2, -0x20
/* 004395BC 2F0F0020 */  sltiu $t7, $t8, 0x20
/* 004395C0 00C0C827 */  not   $t9, $a2
/* 004395C4 032FC004 */  sllv  $t8, $t7, $t9
/* 004395C8 01D87825 */  or    $t7, $t6, $t8
/* 004395CC 2459FFE0 */  addiu $t9, $v0, -0x20
/* 004395D0 2F2E0020 */  sltiu $t6, $t9, 0x20
/* 004395D4 0040C027 */  not   $t8, $v0
/* 004395D8 8F878B0C */  lw     $a3, %got(allcallersave)($gp)
/* 004395DC 030EC804 */  sllv  $t9, $t6, $t8
/* 004395E0 01F97025 */  or    $t6, $t7, $t9
/* 004395E4 AD6E0004 */  sw    $t6, 4($t3)
/* 004395E8 90E70000 */  lbu   $a3, ($a3)
/* 004395EC 3C010004 */  lui   $at, 4
/* 004395F0 2C6E0020 */  sltiu $t6, $v1, 0x20
/* 004395F4 10E0000E */  beqz  $a3, .L00439630
/* 004395F8 00000000 */   nop   
/* 004395FC 8F988B6C */  lw     $t8, %got(curproc)($gp)
/* 00439600 240C0001 */  li    $t4, 1
/* 00439604 8F180000 */  lw    $t8, ($t8)
/* 00439608 8F080024 */  lw    $t0, 0x24($t8)
/* 0043960C 01034821 */  addu  $t1, $t0, $v1
/* 00439610 A12CFFFF */  sb    $t4, -1($t1)
/* 00439614 A12C0000 */  sb    $t4, ($t1)
/* 00439618 01055021 */  addu  $t2, $t0, $a1
/* 0043961C A14CFFFF */  sb    $t4, -1($t2)
/* 00439620 A14C0000 */  sb    $t4, ($t2)
/* 00439624 A10C000C */  sb    $t4, 0xc($t0)
/* 00439628 01027821 */  addu  $t7, $t0, $v0
/* 0043962C A1ECFFFF */  sb    $t4, -1($t7)
.L00439630:
/* 00439630 8F998AFC */  lw     $t9, %got(someusefp)($gp)
/* 00439634 0060C027 */  not   $t8, $v1
/* 00439638 030E7804 */  sllv  $t7, $t6, $t8
/* 0043963C 93390000 */  lbu   $t9, ($t9)
/* 00439640 240C0001 */  li    $t4, 1
/* 00439644 00807027 */  not   $t6, $a0
/* 00439648 13200034 */  beqz  $t9, .L0043971C
/* 0043964C 2C990020 */   sltiu $t9, $a0, 0x20
/* 00439650 01D9C004 */  sllv  $t8, $t9, $t6
/* 00439654 01F8C825 */  or    $t9, $t7, $t8
/* 00439658 00A07827 */  not   $t7, $a1
/* 0043965C 2CAE0020 */  sltiu $t6, $a1, 0x20
/* 00439660 01EEC004 */  sllv  $t8, $t6, $t7
/* 00439664 03387025 */  or    $t6, $t9, $t8
/* 00439668 00C0C827 */  not   $t9, $a2
/* 0043966C 2CCF0020 */  sltiu $t7, $a2, 0x20
/* 00439670 032FC004 */  sllv  $t8, $t7, $t9
/* 00439674 01D87825 */  or    $t7, $t6, $t8
/* 00439678 00407027 */  not   $t6, $v0
/* 0043967C 2C590020 */  sltiu $t9, $v0, 0x20
/* 00439680 01D9C004 */  sllv  $t8, $t9, $t6
/* 00439684 01F8C825 */  or    $t9, $t7, $t8
/* 00439688 244EFFFF */  addiu $t6, $v0, -1
/* 0043968C 2DCF0020 */  sltiu $t7, $t6, 0x20
/* 00439690 01C0C027 */  not   $t8, $t6
/* 00439694 030F7804 */  sllv  $t7, $t7, $t8
/* 00439698 032FC025 */  or    $t8, $t9, $t7
/* 0043969C 0301C825 */  or    $t9, $t8, $at
/* 004396A0 AD790000 */  sw    $t9, ($t3)
/* 004396A4 246FFFE0 */  addiu $t7, $v1, -0x20
/* 004396A8 2DF80020 */  sltiu $t8, $t7, 0x20
/* 004396AC 0060C827 */  not   $t9, $v1
/* 004396B0 03387804 */  sllv  $t7, $t8, $t9
/* 004396B4 2498FFE0 */  addiu $t8, $a0, -0x20
/* 004396B8 2F190020 */  sltiu $t9, $t8, 0x20
/* 004396BC 0080C027 */  not   $t8, $a0
/* 004396C0 0319C804 */  sllv  $t9, $t9, $t8
/* 004396C4 01F9C025 */  or    $t8, $t7, $t9
/* 004396C8 24AFFFE0 */  addiu $t7, $a1, -0x20
/* 004396CC 2DF90020 */  sltiu $t9, $t7, 0x20
/* 004396D0 00A07827 */  not   $t7, $a1
/* 004396D4 01F9C804 */  sllv  $t9, $t9, $t7
/* 004396D8 03197825 */  or    $t7, $t8, $t9
/* 004396DC 24D8FFE0 */  addiu $t8, $a2, -0x20
/* 004396E0 2F190020 */  sltiu $t9, $t8, 0x20
/* 004396E4 00C0C027 */  not   $t8, $a2
/* 004396E8 0319C804 */  sllv  $t9, $t9, $t8
/* 004396EC 01F9C025 */  or    $t8, $t7, $t9
/* 004396F0 244FFFE0 */  addiu $t7, $v0, -0x20
/* 004396F4 2DF90020 */  sltiu $t9, $t7, 0x20
/* 004396F8 00407827 */  not   $t7, $v0
/* 004396FC 01F9C804 */  sllv  $t9, $t9, $t7
/* 00439700 03197825 */  or    $t7, $t8, $t9
/* 00439704 25D8FFE0 */  addiu $t8, $t6, -0x20
/* 00439708 2F190020 */  sltiu $t9, $t8, 0x20
/* 0043970C 01C0C027 */  not   $t8, $t6
/* 00439710 03197004 */  sllv  $t6, $t9, $t8
/* 00439714 01EEC825 */  or    $t9, $t7, $t6
/* 00439718 AD790004 */  sw    $t9, 4($t3)
.L0043971C:
/* 0043971C 8F988B38 */  lw     $t8, %got(leaf_for_ugen)($gp)
/* 00439720 93180000 */  lbu   $t8, ($t8)
/* 00439724 1300001A */  beqz  $t8, .L00439790
/* 00439728 00000000 */   nop   
/* 0043972C 8F8F8AF8 */  lw     $t7, %got(usefp)($gp)
/* 00439730 2419000B */  li    $t9, 11
/* 00439734 244EFFFF */  addiu $t6, $v0, -1
/* 00439738 91EF0000 */  lbu   $t7, ($t7)
/* 0043973C 11E0000C */  beqz  $t7, .L00439770
/* 00439740 00000000 */   nop   
/* 00439744 8F848D4C */  lw     $a0, %got(regsinclass)($gp)
/* 00439748 8F858D48 */  lw     $a1, %got(numoferregs)($gp)
/* 0043974C 244EFFFE */  addiu $t6, $v0, -2
/* 00439750 AC8E0000 */  sw    $t6, ($a0)
/* 00439754 10E0000B */  beqz  $a3, .L00439784
/* 00439758 ACB90000 */   sw    $t9, ($a1)
/* 0043975C 8F988B6C */  lw     $t8, %got(curproc)($gp)
/* 00439760 8F180000 */  lw    $t8, ($t8)
/* 00439764 8F0F0024 */  lw    $t7, 0x24($t8)
/* 00439768 10000006 */  b     .L00439784
/* 0043976C A1EC000B */   sb    $t4, 0xb($t7)
.L00439770:
/* 00439770 8F848D4C */  lw     $a0, %got(regsinclass)($gp)
/* 00439774 8F858D48 */  lw     $a1, %got(numoferregs)($gp)
/* 00439778 2419000C */  li    $t9, 12
/* 0043977C AC8E0000 */  sw    $t6, ($a0)
/* 00439780 ACB90000 */  sw    $t9, ($a1)
.L00439784:
/* 00439784 8F878D40 */  lw     $a3, %got(lasteereg)($gp)
/* 00439788 10000012 */  b     .L004397D4
/* 0043978C ACE20000 */   sw    $v0, ($a3)
.L00439790:
/* 00439790 8F988AF8 */  lw     $t8, %got(usefp)($gp)
/* 00439794 93180000 */  lbu   $t8, ($t8)
/* 00439798 13000005 */  beqz  $t8, .L004397B0
/* 0043979C 00000000 */   nop   
/* 004397A0 8F848D4C */  lw     $a0, %got(regsinclass)($gp)
/* 004397A4 244FFFFE */  addiu $t7, $v0, -2
/* 004397A8 10000004 */  b     .L004397BC
/* 004397AC AC8F0000 */   sw    $t7, ($a0)
.L004397B0:
/* 004397B0 8F848D4C */  lw     $a0, %got(regsinclass)($gp)
/* 004397B4 244EFFFF */  addiu $t6, $v0, -1
/* 004397B8 AC8E0000 */  sw    $t6, ($a0)
.L004397BC:
/* 004397BC 8F858D48 */  lw     $a1, %got(numoferregs)($gp)
/* 004397C0 8F878D40 */  lw     $a3, %got(lasteereg)($gp)
/* 004397C4 8C980000 */  lw    $t8, ($a0)
/* 004397C8 2419000D */  li    $t9, 13
/* 004397CC ACB90000 */  sw    $t9, ($a1)
/* 004397D0 ACF80000 */  sw    $t8, ($a3)
.L004397D4:
/* 004397D4 8F888D3C */  lw     $t0, %got(lasterreg)($gp)
/* 004397D8 8CAF0000 */  lw    $t7, ($a1)
/* 004397DC 8F868D84 */  lw     $a2, %got(setregs)($gp)
/* 004397E0 8F898D7C */  lw     $t1, %got(seterregs)($gp)
/* 004397E4 8F8A8D80 */  lw     $t2, %got(seteeregs)($gp)
/* 004397E8 8F8B8D50 */  lw     $t3, %got(highesterreg)($gp)
/* 004397EC 8F8C8D54 */  lw     $t4, %got(highesteereg)($gp)
/* 004397F0 8F8D8D88 */  lw     $t5, %got(usedeeregs)($gp)
/* 004397F4 00607025 */  move  $t6, $v1
/* 004397F8 04610002 */  bgez  $v1, .L00439804
/* 004397FC AD0F0000 */   sw    $t7, ($t0)
/* 00439800 240E0000 */  li    $t6, 0
.L00439804:
/* 00439804 8D190000 */  lw    $t9, ($t0)
/* 00439808 27380001 */  addiu $t8, $t9, 1
/* 0043980C 2B010021 */  slti  $at, $t8, 0x21
/* 00439810 54200003 */  bnezl $at, .L00439820
/* 00439814 01D87823 */   subu  $t7, $t6, $t8
/* 00439818 24180020 */  li    $t8, 32
/* 0043981C 01D87823 */  subu  $t7, $t6, $t8
.L00439820:
/* 00439820 000FC7C3 */  sra   $t8, $t7, 0x1f
/* 00439824 01F8C004 */  sllv  $t8, $t8, $t7
/* 00439828 01D87806 */  srlv  $t7, $t8, $t6
/* 0043982C 2478FFE0 */  addiu $t8, $v1, -0x20
/* 00439830 07010002 */  bgez  $t8, .L0043983C
/* 00439834 AD2F0000 */   sw    $t7, ($t1)
/* 00439838 24180000 */  li    $t8, 0
.L0043983C:
/* 0043983C 272EFFE1 */  addiu $t6, $t9, -0x1f
/* 00439840 29C10021 */  slti  $at, $t6, 0x21
/* 00439844 54200003 */  bnezl $at, .L00439854
/* 00439848 030E7823 */   subu  $t7, $t8, $t6
/* 0043984C 240E0020 */  li    $t6, 32
/* 00439850 030E7823 */  subu  $t7, $t8, $t6
.L00439854:
/* 00439854 000FCFC3 */  sra   $t9, $t7, 0x1f
/* 00439858 8F828D38 */  lw     $v0, %got(firsteereg)($gp)
/* 0043985C 01F97004 */  sllv  $t6, $t9, $t7
/* 00439860 030EC806 */  srlv  $t9, $t6, $t8
/* 00439864 AD390004 */  sw    $t9, 4($t1)
/* 00439868 8C420000 */  lw    $v0, ($v0)
/* 0043986C 8CE40000 */  lw    $a0, ($a3)
/* 00439870 04410002 */  bgez  $v0, .L0043987C
/* 00439874 00407825 */   move  $t7, $v0
/* 00439878 240F0000 */  li    $t7, 0
.L0043987C:
/* 0043987C 248E0001 */  addiu $t6, $a0, 1
/* 00439880 29C10021 */  slti  $at, $t6, 0x21
/* 00439884 54200003 */  bnezl $at, .L00439894
/* 00439888 01EEC023 */   subu  $t8, $t7, $t6
/* 0043988C 240E0020 */  li    $t6, 32
/* 00439890 01EEC023 */  subu  $t8, $t7, $t6
.L00439894:
/* 00439894 0018CFC3 */  sra   $t9, $t8, 0x1f
/* 00439898 03197004 */  sllv  $t6, $t9, $t8
/* 0043989C 01EEC806 */  srlv  $t9, $t6, $t7
/* 004398A0 2458FFE0 */  addiu $t8, $v0, -0x20
/* 004398A4 07010002 */  bgez  $t8, .L004398B0
/* 004398A8 AD590000 */   sw    $t9, ($t2)
/* 004398AC 24180000 */  li    $t8, 0
.L004398B0:
/* 004398B0 248EFFE1 */  addiu $t6, $a0, -0x1f
/* 004398B4 29C10021 */  slti  $at, $t6, 0x21
/* 004398B8 54200003 */  bnezl $at, .L004398C8
/* 004398BC 030E7823 */   subu  $t7, $t8, $t6
/* 004398C0 240E0020 */  li    $t6, 32
/* 004398C4 030E7823 */  subu  $t7, $t8, $t6
.L004398C8:
/* 004398C8 000FCFC3 */  sra   $t9, $t7, 0x1f
/* 004398CC 01F97004 */  sllv  $t6, $t9, $t7
/* 004398D0 030EC806 */  srlv  $t9, $t6, $t8
/* 004398D4 8D4E0000 */  lw    $t6, ($t2)
/* 004398D8 8D2F0000 */  lw    $t7, ($t1)
/* 004398DC AD590004 */  sw    $t9, 4($t2)
/* 004398E0 8D390004 */  lw    $t9, 4($t1)
/* 004398E4 01EEC025 */  or    $t8, $t7, $t6
/* 004398E8 8D4F0004 */  lw    $t7, 4($t2)
/* 004398EC ACD80000 */  sw    $t8, ($a2)
/* 004398F0 24180006 */  li    $t8, 6
/* 004398F4 032F7025 */  or    $t6, $t9, $t7
/* 004398F8 ACCE0004 */  sw    $t6, 4($a2)
/* 004398FC 8D0E0004 */  lw    $t6, 4($t0)
/* 00439900 AD780000 */  sw    $t8, ($t3)
/* 00439904 8F988AD0 */  lw     $t8, %got(usingregoption)($gp)
/* 00439908 2459FFFF */  addiu $t9, $v0, -1
/* 0043990C 240F001B */  li    $t7, 27
/* 00439910 AD990000 */  sw    $t9, ($t4)
/* 00439914 ADA00000 */  sw    $zero, ($t5)
/* 00439918 ADA00004 */  sw    $zero, 4($t5)
/* 0043991C AD6F0004 */  sw    $t7, 4($t3)
/* 00439920 ADA00008 */  sw    $zero, 8($t5)
/* 00439924 ADA0000C */  sw    $zero, 0xc($t5)
/* 00439928 AD8E0004 */  sw    $t6, 4($t4)
/* 0043992C 93180000 */  lbu   $t8, ($t8)
/* 00439930 17000018 */  bnez  $t8, .L00439994
/* 00439934 00000000 */   nop   
/* 00439938 8F998AD4 */  lw     $t9, %got(no_r23)($gp)
/* 0043993C 93390000 */  lbu   $t9, ($t9)
/* 00439940 17200005 */  bnez  $t9, .L00439958
/* 00439944 00000000 */   nop   
/* 00439948 8F858D58 */  lw     $a1, %got(dftregsused)($gp)
/* 0043994C ACA00000 */  sw    $zero, ($a1)
/* 00439950 03E00008 */  jr    $ra
/* 00439954 ACA00004 */   sw    $zero, 4($a1)

.L00439958:
/* 00439958 8F8F8AD8 */  lw     $t7, %got(no_r3)($gp)
/* 0043995C 91EF0000 */  lbu   $t7, ($t7)
/* 00439960 15E00006 */  bnez  $t7, .L0043997C
/* 00439964 00000000 */   nop   
/* 00439968 8F858D58 */  lw     $a1, %got(dftregsused)($gp)
/* 0043996C 240E0400 */  li    $t6, 1024
/* 00439970 ACAE0000 */  sw    $t6, ($a1)
/* 00439974 03E00008 */  jr    $ra
/* 00439978 ACA00004 */   sw    $zero, 4($a1)

.L0043997C:
/* 0043997C 8F858D58 */  lw     $a1, %got(dftregsused)($gp)
/* 00439980 3C182000 */  lui   $t8, 0x2000
/* 00439984 37180400 */  ori   $t8, $t8, 0x400
/* 00439988 ACB80000 */  sw    $t8, ($a1)
/* 0043998C 03E00008 */  jr    $ra
/* 00439990 ACA00004 */   sw    $zero, 4($a1)

.L00439994:
/* 00439994 8F858D58 */  lw     $a1, %got(dftregsused)($gp)
/* 00439998 8F838A14 */  lw     $v1, %got(actnuminterregs)($gp)
/* 0043999C 3C191E00 */  lui   $t9, 0x1e00
/* 004399A0 ACB90000 */  sw    $t9, ($a1)
/* 004399A4 ACA00004 */  sw    $zero, 4($a1)
/* 004399A8 8C630000 */  lw    $v1, ($v1)
/* 004399AC 24070009 */  li    $a3, 9
/* 004399B0 3C0F7FFC */  lui   $t7, 0x7ffc
/* 004399B4 10E3003D */  beq   $a3, $v1, .L00439AAC
/* 004399B8 00000000 */   nop   
/* 004399BC ACAF0000 */  sw    $t7, ($a1)
/* 004399C0 1860003A */  blez  $v1, .L00439AAC
/* 004399C4 ACA00004 */   sw    $zero, 4($a1)
/* 004399C8 28610007 */  slti  $at, $v1, 7
/* 004399CC 14200002 */  bnez  $at, .L004399D8
/* 004399D0 00607025 */   move  $t6, $v1
/* 004399D4 240E0006 */  li    $t6, 6
.L004399D8:
/* 004399D8 25D80006 */  addiu $t8, $t6, 6
/* 004399DC 27190001 */  addiu $t9, $t8, 1
/* 004399E0 2B210021 */  slti  $at, $t9, 0x21
/* 004399E4 14200002 */  bnez  $at, .L004399F0
/* 004399E8 240F0007 */   li    $t7, 7
/* 004399EC 24190020 */  li    $t9, 32
.L004399F0:
/* 004399F0 01F97023 */  subu  $t6, $t7, $t9
/* 004399F4 000E7FC3 */  sra   $t7, $t6, 0x1f
/* 004399F8 01CFC804 */  sllv  $t9, $t7, $t6
/* 004399FC 001979C2 */  srl   $t7, $t9, 7
/* 00439A00 8CB90000 */  lw    $t9, ($a1)
/* 00439A04 01E07027 */  not   $t6, $t7
/* 00439A08 032E7824 */  and   $t7, $t9, $t6
/* 00439A0C 2719FFE1 */  addiu $t9, $t8, -0x1f
/* 00439A10 2B210021 */  slti  $at, $t9, 0x21
/* 00439A14 14200002 */  bnez  $at, .L00439A20
/* 00439A18 ACAF0000 */   sw    $t7, ($a1)
/* 00439A1C 24190020 */  li    $t9, 32
.L00439A20:
/* 00439A20 00197023 */  negu  $t6, $t9
/* 00439A24 000E7FC3 */  sra   $t7, $t6, 0x1f
/* 00439A28 01CFC004 */  sllv  $t8, $t7, $t6
/* 00439A2C 8CAF0004 */  lw    $t7, 4($a1)
/* 00439A30 0300C827 */  not   $t9, $t8
/* 00439A34 24010007 */  li    $at, 7
/* 00439A38 01F97024 */  and   $t6, $t7, $t9
/* 00439A3C 14610008 */  bne   $v1, $at, .L00439A60
/* 00439A40 ACAE0004 */   sw    $t6, 4($a1)
/* 00439A44 8CB80000 */  lw    $t8, ($a1)
/* 00439A48 3C01DFFF */  lui   $at, 0xdfff
/* 00439A4C 3421FFFF */  ori   $at, $at, 0xffff
/* 00439A50 03017824 */  and   $t7, $t8, $at
/* 00439A54 ACAF0000 */  sw    $t7, ($a1)
/* 00439A58 10000014 */  b     .L00439AAC
/* 00439A5C ACAE0004 */   sw    $t6, 4($a1)
.L00439A60:
/* 00439A60 24010008 */  li    $at, 8
/* 00439A64 14610009 */  bne   $v1, $at, .L00439A8C
/* 00439A68 00000000 */   nop   
/* 00439A6C 8CAE0000 */  lw    $t6, ($a1)
/* 00439A70 3C01DDFF */  lui   $at, 0xddff
/* 00439A74 8CAF0004 */  lw    $t7, 4($a1)
/* 00439A78 3421FFFF */  ori   $at, $at, 0xffff
/* 00439A7C 01C1C024 */  and   $t8, $t6, $at
/* 00439A80 ACB80000 */  sw    $t8, ($a1)
/* 00439A84 10000009 */  b     .L00439AAC
/* 00439A88 ACAF0004 */   sw    $t7, 4($a1)
.L00439A8C:
/* 00439A8C 14E30007 */  bne   $a3, $v1, .L00439AAC
/* 00439A90 3C01DDFB */   lui   $at, 0xddfb
/* 00439A94 8CB90000 */  lw    $t9, ($a1)
/* 00439A98 8CB80004 */  lw    $t8, 4($a1)
/* 00439A9C 3421FFFF */  ori   $at, $at, 0xffff
/* 00439AA0 03217024 */  and   $t6, $t9, $at
/* 00439AA4 ACAE0000 */  sw    $t6, ($a1)
/* 00439AA8 ACB80004 */  sw    $t8, 4($a1)
.L00439AAC:
/* 00439AAC 8F838A10 */  lw     $v1, %got(actnuminteeregs)($gp)
/* 00439AB0 2401000A */  li    $at, 10
/* 00439AB4 248E0001 */  addiu $t6, $a0, 1
/* 00439AB8 8C630000 */  lw    $v1, ($v1)
/* 00439ABC 1061001E */  beq   $v1, $at, .L00439B38
/* 00439AC0 00437821 */   addu  $t7, $v0, $v1
/* 00439AC4 05E10002 */  bgez  $t7, .L00439AD0
/* 00439AC8 01E0C825 */   move  $t9, $t7
/* 00439ACC 24190000 */  li    $t9, 0
.L00439AD0:
/* 00439AD0 29C10021 */  slti  $at, $t6, 0x21
/* 00439AD4 54200003 */  bnezl $at, .L00439AE4
/* 00439AD8 032EC023 */   subu  $t8, $t9, $t6
/* 00439ADC 240E0020 */  li    $t6, 32
/* 00439AE0 032EC023 */  subu  $t8, $t9, $t6
.L00439AE4:
/* 00439AE4 001877C3 */  sra   $t6, $t8, 0x1f
/* 00439AE8 030E7004 */  sllv  $t6, $t6, $t8
/* 00439AEC 032EC006 */  srlv  $t8, $t6, $t9
/* 00439AF0 8CAE0000 */  lw    $t6, ($a1)
/* 00439AF4 01D8C825 */  or    $t9, $t6, $t8
/* 00439AF8 25EEFFE0 */  addiu $t6, $t7, -0x20
/* 00439AFC 05C10002 */  bgez  $t6, .L00439B08
/* 00439B00 ACB90000 */   sw    $t9, ($a1)
/* 00439B04 240E0000 */  li    $t6, 0
.L00439B08:
/* 00439B08 2498FFE1 */  addiu $t8, $a0, -0x1f
/* 00439B0C 2B010021 */  slti  $at, $t8, 0x21
/* 00439B10 54200003 */  bnezl $at, .L00439B20
/* 00439B14 01D8C823 */   subu  $t9, $t6, $t8
/* 00439B18 24180020 */  li    $t8, 32
/* 00439B1C 01D8C823 */  subu  $t9, $t6, $t8
.L00439B20:
/* 00439B20 00197FC3 */  sra   $t7, $t9, 0x1f
/* 00439B24 032FC004 */  sllv  $t8, $t7, $t9
/* 00439B28 8CB90004 */  lw    $t9, 4($a1)
/* 00439B2C 01D87806 */  srlv  $t7, $t8, $t6
/* 00439B30 032FC025 */  or    $t8, $t9, $t7
/* 00439B34 ACB80004 */  sw    $t8, 4($a1)
.L00439B38:
/* 00439B38 8CAE0000 */  lw    $t6, ($a1)
/* 00439B3C 8CD90000 */  lw    $t9, ($a2)
/* 00439B40 8CB80004 */  lw    $t8, 4($a1)
/* 00439B44 01D97824 */  and   $t7, $t6, $t9
/* 00439B48 8CCE0004 */  lw    $t6, 4($a2)
/* 00439B4C ACAF0000 */  sw    $t7, ($a1)
/* 00439B50 030EC824 */  and   $t9, $t8, $t6
/* 00439B54 ACB90004 */  sw    $t9, 4($a1)
/* 00439B58 03E00008 */  jr    $ra
/* 00439B5C 00000000 */   nop   
    .type procinit_regs, @function
    .size procinit_regs, .-procinit_regs
    .end procinit_regs

glabel write_updated_st
    .ent write_updated_st
    # 0045806C main
/* 00439B60 3C1C0FBE */  .cpload $t9
/* 00439B64 279C0730 */  
/* 00439B68 0399E021 */  
/* 00439B6C 8F8E88DC */  lw     $t6, %got(sym_file_updated)($gp)
/* 00439B70 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 00439B74 AFBF001C */  sw    $ra, 0x1c($sp)
/* 00439B78 91CE0000 */  lbu   $t6, ($t6)
/* 00439B7C AFBC0018 */  sw    $gp, 0x18($sp)
/* 00439B80 51C0000D */  beql  $t6, $zero, .L00439BB8
/* 00439B84 8FBF001C */   lw    $ra, 0x1c($sp)
/* 00439B88 8F9982E0 */  lw    $t9, %call16(addnullfilename)($gp)
/* 00439B8C 8F848DE0 */  lw     $a0, %got(symname)($gp)
/* 00439B90 0320F809 */  jalr  $t9
/* 00439B94 00000000 */   nop   
/* 00439B98 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00439B9C 2405FFFF */  li    $a1, -1
/* 00439BA0 8F998810 */  lw    $t9, %call16(st_writebinary)($gp)
/* 00439BA4 8F848DB8 */  lw     $a0, %got(st_str)($gp)
/* 00439BA8 0320F809 */  jalr  $t9
/* 00439BAC 00000000 */   nop   
/* 00439BB0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00439BB4 8FBF001C */  lw    $ra, 0x1c($sp)
.L00439BB8:
/* 00439BB8 27BD0020 */  addiu $sp, $sp, 0x20
/* 00439BBC 03E00008 */  jr    $ra
/* 00439BC0 00000000 */   nop   
    .type write_updated_st, @function
    .size write_updated_st, .-write_updated_st
    .end write_updated_st
)"");
