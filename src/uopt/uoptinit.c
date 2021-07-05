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
    bool o2;
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
    o2 = false;
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
                o2 = true;
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
                    if (warn_flag != 1) {
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

    if (o2) {
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
static void set_optab_entry(enum Uopcode op, bool ends_bb, bool b, bool is_binary_op) {
    optab[op].ends_bb = ends_bb;
    optab[op].unk1 = b; // true = actual code, false = meta?
    optab[op].is_binary_op = is_binary_op;
}
/*
0045806C main
*/
void optinit(void) {
    set_optab_entry(Uabs,  0, 1, 0);
    set_optab_entry(Uadd,  0, 1, 1);
    set_optab_entry(Uadj,  0, 1, 0);
    set_optab_entry(Uaent, 1, 1, 0);
    set_optab_entry(Uand,  0, 1, 1);
    set_optab_entry(Uaos,  0, 1, 0);
    set_optab_entry(Uasym, 0, 0, 0);
    set_optab_entry(Ubgn,  0, 0, 0);
    set_optab_entry(Ubgnb, 0, 1, 0);
    set_optab_entry(Ubsub, 0, 1, 1);
    set_optab_entry(Ucg1,  0, 1, 0);
    set_optab_entry(Ucg2,  0, 1, 0);
    set_optab_entry(Uchkh, 0, 1, 0);
    set_optab_entry(Uchkl, 0, 1, 0);
    set_optab_entry(Uchkn, 0, 1, 0);
    set_optab_entry(Uchkt, 0, 1, 0);
    set_optab_entry(Ucia,  1, 1, 0);
    set_optab_entry(Uclab, 0, 1, 0);
    set_optab_entry(Uclbd, 0, 1, 0);
    set_optab_entry(Ucubd, 0, 1, 0);
    set_optab_entry(Ucomm, 0, 0, 0);
    set_optab_entry(Ucsym, 0, 0, 0);
    set_optab_entry(Uctrl, 0, 1, 0);
    set_optab_entry(Ucup,  1, 1, 0);
    set_optab_entry(Ucvt,  0, 1, 0);
    set_optab_entry(Ucvtl, 0, 1, 0);
    set_optab_entry(Udec,  0, 1, 0);
    set_optab_entry(Udef,  0, 1, 0);
    set_optab_entry(Udif,  0, 1, 1);
    set_optab_entry(Udiv,  0, 1, 1);
    set_optab_entry(Udup,  0, 1, 0);
    set_optab_entry(Uend,  1, 0, 0);
    set_optab_entry(Uendb, 0, 1, 0);
    set_optab_entry(Uent,  0, 0, 0);
    set_optab_entry(Uequ,  0, 1, 1);
    set_optab_entry(Ufsym, 0, 0, 0);
    set_optab_entry(Ugeq,  0, 1, 1);
    set_optab_entry(Ugrt,  0, 1, 1);
    set_optab_entry(Uhsym, 0, 0, 0);
    set_optab_entry(Uijp,  1, 1, 0);
    set_optab_entry(Uneq,  0, 1, 1);
    set_optab_entry(Uldap, 0, 1, 0);
    set_optab_entry(Uldsp, 0, 1, 0);
    set_optab_entry(Uleq,  0, 1, 1);
    set_optab_entry(Ules,  0, 1, 1);
    set_optab_entry(Uesym, 0, 0, 0);
    set_optab_entry(Ufjp,  1, 1, 0);
    set_optab_entry(Ugsym, 0, 0, 0);
    set_optab_entry(Uicuf, 1, 1, 0);
    set_optab_entry(Uidx,  0, 1, 1);
    set_optab_entry(Uiequ, 0, 1, 1);
    set_optab_entry(Uineq, 0, 1, 1);
    set_optab_entry(Uileq, 0, 1, 1);
    set_optab_entry(Uiles, 0, 1, 1);
    set_optab_entry(Uigeq, 0, 1, 1);
    set_optab_entry(Uigrt, 0, 1, 1);
    set_optab_entry(Uilda, 0, 1, 0);
    set_optab_entry(Uilod, 0, 1, 0);
    set_optab_entry(Uildv, 0, 1, 0);
    set_optab_entry(Uisld, 0, 1, 0);
    set_optab_entry(Uinc,  0, 1, 0);
    set_optab_entry(Uinit, 0, 0, 0);
    set_optab_entry(Uinn,  0, 1, 1);
    set_optab_entry(Uint,  0, 1, 1);
    set_optab_entry(Uior,  0, 1, 1);
    set_optab_entry(Uirld, 0, 1, 0);
    set_optab_entry(Uirst, 0, 1, 0);
    set_optab_entry(Uisst, 0, 1, 0);
    set_optab_entry(Uistr, 0, 1, 0);
    set_optab_entry(Uistv, 0, 1, 0);
    set_optab_entry(Uixa,  0, 1, 1);
    set_optab_entry(Ulab,  1, 1, 0);
    set_optab_entry(Ulbgn, 0, 1, 0);
    set_optab_entry(Ulbd,  0, 1, 0);
    set_optab_entry(Ulbdy, 0, 1, 0);
    set_optab_entry(Ulca,  0, 1, 0);
    set_optab_entry(Ulda,  0, 1, 0);
    set_optab_entry(Uldc,  0, 1, 0);
    set_optab_entry(Uldef, 0, 1, 0);
    set_optab_entry(Uldrc, 0, 1, 0);
    set_optab_entry(Ulend, 0, 1, 0);
    set_optab_entry(Ulex,  0, 0, 0);
    set_optab_entry(Ulnot, 0, 1, 0);
    set_optab_entry(Uloc,  0, 1, 0);
    set_optab_entry(Ulod,  0, 1, 0);
    set_optab_entry(Ulsym, 0, 0, 0);
    set_optab_entry(Ultrm, 0, 1, 0);
    set_optab_entry(Umax,  0, 1, 1);
    set_optab_entry(Umin,  0, 1, 1);
    set_optab_entry(Umod,  0, 1, 1);
    set_optab_entry(Umov,  0, 1, 0);
    set_optab_entry(Umovv, 0, 1, 0);
    set_optab_entry(Umpy,  0, 1, 1);
    set_optab_entry(Umst,  0, 1, 0);
    set_optab_entry(Umsym, 0, 0, 0);
    set_optab_entry(Umus,  0, 1, 1);
    set_optab_entry(Uneg,  0, 1, 0);
    set_optab_entry(Unot,  0, 1, 0);
    set_optab_entry(Unop,  0, 0, 0);
    set_optab_entry(Uodd,  0, 1, 0);
    set_optab_entry(Uoptn, 0, 0, 0);
    set_optab_entry(Uxpar, 0, 1, 0);
    set_optab_entry(Upar,  0, 1, 0);
    set_optab_entry(Updef, 0, 0, 0);
    set_optab_entry(Upmov, 0, 1, 0);
    set_optab_entry(Upop,  0, 1, 0);
    set_optab_entry(Urcuf, 1, 1, 0);
    set_optab_entry(Uregs, 0, 0, 0);
    set_optab_entry(Urem,  0, 1, 1);
    set_optab_entry(Uret,  1, 1, 0);
    set_optab_entry(Urlod, 0, 0, 0);
    set_optab_entry(Urnd,  0, 1, 0);
    set_optab_entry(Urstr, 0, 0, 0);
    set_optab_entry(Usdef, 0, 0, 0);
    set_optab_entry(Usgs,  0, 1, 0);
    set_optab_entry(Ushl,  0, 1, 1);
    set_optab_entry(Ushr,  0, 1, 1);
    set_optab_entry(Usign, 0, 1, 1);
    set_optab_entry(Usqr,  0, 1, 0);
    set_optab_entry(Usqrt, 0, 1, 0);
    set_optab_entry(Ussym, 0, 0, 0);
    set_optab_entry(Ustep, 0, 1, 0);
    set_optab_entry(Ustp,  0, 0, 0);
    set_optab_entry(Ustr,  0, 1, 0);
    set_optab_entry(Ustsp, 0, 1, 0);
    set_optab_entry(Usub,  0, 1, 1);
    set_optab_entry(Uswp,  0, 1, 0);
    set_optab_entry(Utjp,  1, 1, 0);
    set_optab_entry(Utpeq, 0, 1, 1);
    set_optab_entry(Utpge, 0, 1, 1);
    set_optab_entry(Utpgt, 0, 1, 1);
    set_optab_entry(Utple, 0, 1, 1);
    set_optab_entry(Utplt, 0, 1, 1);
    set_optab_entry(Utpne, 0, 1, 1);
    set_optab_entry(Utyp,  0, 1, 0);
    set_optab_entry(Uubd,  0, 1, 0);
    set_optab_entry(Uujp,  1, 1, 0);
    set_optab_entry(Uuni,  0, 1, 1);
    set_optab_entry(Uvreg, 0, 0, 0);
    set_optab_entry(Uxjp,  1, 1, 0);
    set_optab_entry(Uxor,  0, 1, 1);

    perm_heap = NULL;
    ustrptr = alloc_new(0x400, &perm_heap);
    ustackbot = (struct UstackEntry *)alloc_new(sizeof(struct UstackEntry), &perm_heap);
    ustackbot->up = NULL;
    ustackbot->down = NULL;
    ustack = ustackbot;
    parstackbot = (struct ParstackEntry *)alloc_new(sizeof(struct ParstackEntry), &perm_heap);
    parstackbot->up = NULL;
    parstackbot->down = NULL;
    parstack = parstackbot;
    curlevel = 0;
    filteringout = false;
    suppressopt = false;
    o0o1specified = false;
    lang = LANG_C;
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
    unroll_limit = 320;
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
    nocopy = alloc_new(sizeof (struct Expression), &perm_heap);
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
    seterregs[1] = GENMASK(firsterreg[1], lasterreg[1] + 1);
    seteeregs[1] = GENMASK(firsteereg[1], lasteereg[1] + 1);
    setregs[1] = (seterregs[1] | seteeregs[1]);
    gsptr = alloc_new(0x34, &perm_heap);
    *(unsigned char *)gsptr = 123;
    dft_livbb = (struct livbb *)alloc_new(0x18, &perm_heap);
    dft_livbb->unk10 = 0;
    dft_livbb->unk12 = 0;
    dft_livbb->firstisstr = false;
    dft_livbb->unk0 = NULL;
    dft_livbb->unk13 = 0;
    dft_livbb->next = NULL;
    dft_livbb->unk8 = 0;
    dft_livbb->unkC = 0;
    dft_livbb->needreglod = false;
    dft_livbb->needregsave = false;
    dft_livbb->deadout = false;
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

/*
00456A2C oneproc
*/
void procinit(void) {
    int i;

    realdispdiv = 0;
    realdispmod = 0;
    realstore = (struct RealstoreData *)alloc_new(sizeof(struct RealstoreData), &perm_heap);
    realstore->next = NULL;
    currealpool = realstore;
    strpdisplace = 0;
    graphhead = NULL;
    graphtail = NULL;
    curgraphnode = NULL;
    ustack = ustackbot;
    ustackbot->up = NULL;
    parstack = parstackbot;
    parstackbot->up = NULL;
    curmst = NULL;
    curstaticno = 0;
    bitposcount = 0;
    r2bitpos[0] = -1;
    r2bitpos[1] = -1;
    r2bitpos[2] = -1;
    for (i = 0; i < sizeof(table) / sizeof(table[0]); i++) {
        table[i] = NULL;
    }
    for (i = 0; i < sizeof(itable) / sizeof(itable[0]); i++) {
        itable[i] = NULL;
    }
    stathead = NULL;
    stattail = NULL;
    bittab = NULL;
    bittabsize = 0;
    pdeftab = NULL;
    pdeftabsize = 0;
    highestmdef = 0;
    pdefmax = -1;
    pdefno = 0;
    varbits.blocks = NULL;
    varbits.num_blocks = 0;
    slvarbits.blocks = NULL;
    slvarbits.num_blocks = 0;
    mvarbits.blocks = NULL;
    mvarbits.num_blocks = 0;
    fsymbits.blocks = NULL;
    fsymbits.num_blocks = 0;
    asgnbits.blocks = NULL;
    asgnbits.num_blocks = 0;
    slasgnbits.blocks = NULL;
    slasgnbits.num_blocks = 0;
    storeop.num_blocks = 0;
    storeop.blocks = NULL;
    trapop.num_blocks = 0;
    trapop.blocks = NULL;
    trapconstop.num_blocks = 0;
    trapconstop.blocks = NULL;
    indmults.num_blocks = 0;
    indmults.blocks = NULL;
    boolexp.num_blocks = 0;
    boolexp.blocks = NULL;
    trepexp.num_blocks = 0;
    trepexp.blocks = NULL;
    outmodebits.num_blocks = 0;
    outmodebits.blocks = NULL;
    notinmodebits.num_blocks = 0;
    notinmodebits.blocks = NULL;
    varfactor_muls.num_blocks = 0;
    varfactor_muls.blocks = NULL;
    coloreditems.num_blocks = 0;
    coloreditems.blocks = NULL;
    vareqv.num_blocks = 0;
    vareqv.blocks = NULL;
    asgneqv.num_blocks = 0;
    asgneqv.blocks = NULL;
    coloredparms.num_blocks = 0;
    coloredparms.blocks = NULL;
    iscolored12.num_blocks = 0;
    iscolored12.blocks = NULL;
    setofr2bbs[0].blocks = NULL;
    setofr2bbs[0].num_blocks = 0;
    setofr2bbs[1].blocks = NULL;
    setofr2bbs[1].num_blocks = 0;
    setofr2bbs[2].blocks = NULL;
    setofr2bbs[2].num_blocks = 0;
    iscolored[0].blocks = NULL;
    iscolored[0].num_blocks = 0;
    iscolored[1].blocks = NULL;
    iscolored[1].num_blocks = 0;
    tempdisp = 0;
    templochead = NULL;
    temploctail = NULL;
    aentptr = NULL;
    allcallersave = curproc->o3opt;
    propagate_ee_saves = true;
    passedbyfp = true;
    offsetpassedbyint = 0;
    staticlinkloc = 0;
    rewrite(&strp, strpname, 1024, 0);
    outofmem = false;
    lastcopiedu.Ucode.Opc = Unop;
    has_exc_handler = false;
    can_elim_tail = true;
    use_c_semantics = false;
}

#define BIT(pos) ((unsigned long long int)((unsigned int)(pos) < 64) << (~(pos) & 0x3f))

/*
00456A2C oneproc
*/
void procinit_regs(void) {
    regscantpass = BIT(firsterreg[0]) | BIT(firsterreg[0] + 1) |
                   BIT(firsterreg[1]) | BIT(firsterreg[1] + 1) |
                   BIT(regsinclass1) | BIT(13);

    if (allcallersave) {
        curproc->regstaken_parregs->regstaken[firsterreg[0] - 1] = true;
        curproc->regstaken_parregs->regstaken[firsterreg[0]] = true;
        curproc->regstaken_parregs->regstaken[firsterreg[1] - 1] = true;
        curproc->regstaken_parregs->regstaken[firsterreg[1]] = true;
        curproc->regstaken_parregs->regstaken[13 - 1] = true;
        curproc->regstaken_parregs->regstaken[regsinclass1 - 1] = true;
    }

    if (someusefp) {
        regscantpass = BIT(firsterreg[0]) | BIT(firsterreg[0] + 1) |
                       BIT(firsterreg[1]) | BIT(firsterreg[1] + 1) |
                       BIT(regsinclass1) | BIT(regsinclass1 - 1) | BIT(13);
    }

    if (leaf_for_ugen) {
        if (usefp) {
            regsinclass[0] = regsinclass1 - 2;
            numoferregs[0] = 11;
            if (allcallersave) {
                curproc->regstaken_parregs->regstaken[12 - 1] = true;
            }
        } else {
            regsinclass[0] = regsinclass1 - 1;
            numoferregs[0] = 12;
        }
        lasteereg[0] = regsinclass1;
    } else {
        if (usefp) {
            regsinclass[0] = regsinclass1 - 2;
        } else {
            regsinclass[0] = regsinclass1 - 1;
        }
        numoferregs[0] = 13;
        lasteereg[0] = regsinclass[0];
    }
    lasterreg[0] = numoferregs[0];
    seterregs[0] = GENMASK(firsterreg[0], lasterreg[0] + 1);
    seteeregs[0] = GENMASK(firsteereg[0], lasteereg[0] + 1);
    setregs[0] = (seterregs[0] | seteeregs[0]);
    highesterreg[0] = 6;
    highesteereg[0] = firsteereg[0] - 1;
    usedeeregs[0] = 0;
    highesterreg[1] = 27;
    usedeeregs[1] = 0;
    highesteereg[1] = lasterreg[1];
    if (!usingregoption) {
        if (!no_r23) {
            dftregsused = 0;
            return;
        }
        if (!no_r3) {
            dftregsused = BIT(21);
            return;
        }
        dftregsused = BIT(2) | BIT(21);
    }
    dftregsused = GENMASK(3, 6 + 1);
    if (actnuminterregs != 9) {
        dftregsused = GENMASK(1, 13 + 1);
        if (actnuminterregs > 0) {
            dftregsused = GENMASK(7, MIN(actnuminterregs, 6) + 6 + 1);
            if (actnuminterregs == 7) {
                dftregsused &= ~BIT(2);
            } else if (actnuminterregs == 8) {
                dftregsused &= ~(BIT(2) | BIT(6));
            } else if (actnuminterregs == 9) {
                dftregsused &= ~(BIT(2) | BIT(6) | BIT(13));
            }
        }
    }
    if (actnuminteeregs != 10) {
        dftregsused = GENMASK(firsteereg[0] + actnuminteeregs, lasteereg[0] + 1);
    }
    dftregsused &= setregs[0];
}

/*
0045806C main
*/
void write_updated_st(void) {
    if (sym_file_updated) {
        addnullfilename(symname);
        st_writebinary(st_str, -1);
    }
}
