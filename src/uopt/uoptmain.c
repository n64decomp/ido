#include <stdlib.h>
#include <stdio.h>
#include "libp/libp.h"
#include "libu/libu.h"
#include "common.h"
#include "uoptdata.h"
#include "uoptutil.h"
#include "uoptinit.h"
#include "uoptinput.h"
#include "uoptdbg.h"
#include "uoptloc.h"
#include "uoptitab.h"
#include "uoptmtag.h"
#include "uoptppss.h"
#include "uopttail.h"
#include "uoptloop.h"
#include "uoptroll.h"
#include "uoptprep.h"
#include "uoptcopy.h"
#include "uoptind.h"
#include "uoptcm.h"
#include "uopttrep.h"
#include "uoptscm.h"
#include "uoptcontrolflow.h"
#include "uoptvarusage.h"
#include "uoptreg1.h"
#include "uoptreg2.h"
#include "uoptemit.h"
#include "opt_saved_regs.h"

/*
00456A2C oneproc
*/
static void func_00456310(bool *sp4F) { // originally embedded func
    enum Uopcode op;
    struct Var *statpos;
    struct GraphnodeList *graphnode_list;

    if (filteringout || *sp4F) {
        curgraphnode = NULL;
        op = u.Ucode.Opc;
        while (!(op == Uaent || op == Uend || op == Ulab)) {
            if (!optab[op].unk1) {
                copyline();
            } else if (op == Ubgnb || op == Udef || op == Uendb) {
                readnxtinst();
                if (outofmem) {
                    return;
                }
                stattail->graphnode = stattail->prev->graphnode;
            } else if (op == Uclab) {
                statpos = stattail;
                readnxtinst();
                if (outofmem) {
                    return;
                }
                do {
                    statpos = statpos->next;
                    statpos->graphnode = statpos->prev->graphnode;
                } while (statpos != stattail);
            }
            getop();
            op = u.Ucode.Opc;
        }
    }
    if (op != Uend) {
        if (!(op == Uaent || op == Ulab) || (op == Ulab && (stattail->unk0 == 0x26 || stattail->unk0 == 0x7f))) { // stattail->unk0 is Ufjp or Utjp?
            appendgraph();
            if (outofmem) {
                return;
            }
            if (curgraphnode != NULL) {
                graphnode_list = (struct GraphnodeList *)alloc_new(sizeof(struct GraphnodeList), &perm_heap);
                graphtail->unk14 = graphnode_list;
                graphnode_list->graphnode = curgraphnode;
                graphnode_list->next = NULL;

                graphnode_list = (struct GraphnodeList *)alloc_new(sizeof(struct GraphnodeList), &perm_heap);
                graphnode_list->graphnode = graphtail;
                graphnode_list->next = curgraphnode->unk18;
                curgraphnode->unk18 = graphnode_list;
            }
            curgraphnode = graphtail;
            if (op == Ulab) {
                graphtail->num = (unsigned short)curstaticno++;
                extendstat(0x60); // Unop?
                curgraphnode->stat_tail = stattail;
                init_node_vectors(curgraphnode);
            }
        }
        varrefs = 0;
        curvarreflimit = varreflimit;
        readnxtinst();
        if (outofmem) {
            return;
        }
        op = u.Ucode.Opc; // this can be removed if readnxtinst doesn't change u
        if (!(op == Uaent || op == Ulab)) {
            curgraphnode->num = (unsigned short)curstaticno++;
        }
        switch (op) {
            case Ucia:
            case Ucup:
            case Ufjp:
            case Uicuf:
            case Uijp:
            case Uret:
            case Utjp:
            case Uujp:
            case Uxjp:
                endblock = true;
                break;
            default:
                endblock = false;
                break;
        }
        if (!endblock) {
            getop();
            op = u.Ucode.Opc;
            while (!endblock) {
                if (!optab[op].unk1) {
                    copyline();
                } else {
                    readnxtinst();
                    if (outofmem) {
                        return;
                    }
                }
                getop();
                op = u.Ucode.Opc;
            }
            *sp4F = (op == Uijp || op == Uret || op == Uujp || op == Uxjp) || (op == Ucup && (u.intarray[3] & 2) != 0);
            switch (op) {
                case Ucia:
                case Ucup:
                case Ufjp:
                case Uicuf:
                case Uijp:
                case Uret:
                case Utjp:
                case Uujp:
                case Uxjp:
                case Urcuf:
                    readnxtinst();
                    if (outofmem) {
                        return;
                    }
                    endblock = false;

                    getop();
                    op = u.Ucode.Opc;
                    while (!optab[op].unk1 && op != Uend) {
                        copyline();
                        getop();
                        op = u.Ucode.Opc;
                    }
                    break;
            }
        } else {
            *sp4F = (op == Uijp || op == Uret || op == Uujp || op == Uxjp) || (op == Ucup && (u.intarray[3] & 2) != 0);
            endblock = false;

            getop();
            op = u.Ucode.Opc;
            while (!optab[op].unk1 && op != Uend) {
                copyline();
                getop();
                op = u.Ucode.Opc;
            }
        }
        filteringout = false;
        constarith();
        if (outofmem) {
            return;
        }
        curgraphnode->stat_tail = stattail;
        codeimage();
    }
}

/*
0045806C main
*/
void oneproc(void) {
    bool sp4F;
    union Bcode u_copy;

    curproc = getproc(u.Ucode.I1);
    usefp = (u.intarray[3] & 2) != 0;
    procinit();
    lasttime = getclock();
    copyline();
    init_mtagtab();
    if (sizethreshold < curproc->num_bbs) {
        skipproc(1);
    } else if (ctrl_head != NULL && proc_suppressed()) {
        skipproc(2);
    } else if (entflag & 0x100) { // note: entflag is unsigned 8-bit, so this is always false
        skipproc(3);
    } else {
        entervregveqv();
        if (verbose) {
            write_string(err.c_file, entnam0, 1024, entnam0len);
            fflush(err.c_file);
        }
        if (!curproc->unkD) {
            if (verbose) {
                write_string(err.c_file, "(deleted) ", 10, 10);
                fflush(err.c_file);
            }
            do {
                getop();
                if (!optab[u.Ucode.Opc].unk1) {
                    copyline();
                } else if (u.Ucode.Opc == Ulab && (u.Ucode.Lexlev & 4)) {
                    uwrite(&u);
                }
            } while (u.Ucode.Opc != Uend);
        } else {
            endblock = false;
            inlopt = true;
            loc_not_yet_seen = false;
            getop();
            while (!optab[u.Ucode.Opc].unk1) {
                copyline();
                getop();
            }
            if (u.Ucode.Opc == Ulab) {
                appendgraph();
                if (outofmem) {
                    return;
                }
                curgraphnode = graphtail;
                graphtail->num = 0;
                extendstat(0x60);
                curgraphnode->stat_tail = curgraphnode->stat_head;
                init_node_vectors(curgraphnode);
                curstaticno = 1;
            }
            sp4F = false;
            filteringout = false;
            while (u.Ucode.Opc != Uend) {
                func_00456310(&sp4F);
                loc_not_yet_seen = true;
                if (outofmem) {
                    goto done;
                }
            }
            if (ustackbot != ustack) {
                stackerror();
            }
            u_copy = u;
            lastcopiedu.Ucode.Opc = Uend;
            if (verbose) {
                write_char(err.c_file, '(', 1);
                write_cardinal(err.c_file, curstaticno, 1, 10);
                write_char(err.c_file, ')', 1);
                if (allcallersave) {
                    if (propagate_ee_saves) {
                        write_string(err.c_file, "i ", 2, 2);
                    } else {
                        write_string(err.c_file, "f ", 2, 2);
                    }
                } else {
                    write_char(err.c_file, ' ', 1);
                }
                fflush(err.c_file);
            }
            time1 = getclock();
            if (listwritten) {
                write_string(list.c_file, " * * ", 5, 5);
                write_integer(list.c_file, (time1 - lasttime) / 1000, 4, 10);
                write_char(list.c_file, '.', 1);
                write_integer(list.c_file, (time1 - lasttime) % 1000, 3, 10);
                write_string(list.c_file, " SECONDS IN LOCAL OPTIMIZATION OF ", 34, 34);
                write_string(list.c_file, entnam0, 1024, entnam0len);
                writeln(list.c_file);
            }
            lopttime += time1 - lasttime;
            lasttime = time1;
            if (dbugno == 1) {
                printtab();
            }
            if (usefeedback) {
                if (curproc->unk34 != NULL) {
                    bb_frequencies();
                } else if (warn_flag != 1) {
                    warned = true;
                    writeln(err.c_file);
                    write_string(err.c_file, "uopt: Warning: feedback data for procedure ", 43, 43);
                    write_string(err.c_file, entnam0, 1024, entnam0len);
                    write_string(err.c_file, " not found in feedback file", 27, 27);
                    writeln(err.c_file);
                    fflush(err.c_file);
                }
            }
            tail_recursion();
            controlflow();
            analoop();
            if (dbugno == 8) {
                print_loop_relations(toplevelloops, 0);
            }
            loopunroll();
            if (dbugno == 8) {
                print_loop_relations(toplevelloops, 0);
            }
            inlopt = false;
            patchvectors();
            procinit_regs();
            if (outofmem) {
                goto done;
            }
            time1 = getclock();
            if (listwritten) {
                write_string(list.c_file, " * * ", 5, 5);
                write_integer(list.c_file, (time1 - lasttime) / 1000, 4, 10);
                write_char(list.c_file, '.', 1);
                write_integer(list.c_file, (time1 - lasttime) % 1000, 3, 10);
                write_string(list.c_file, " SECONDS IN Patchvectors OF ", 28, 28);
                write_string(list.c_file, entnam0, 1024, entnam0len);
                writeln(list.c_file);
            }
            lasttime = time1;
            copypropagate();
            if (outofmem) {
                goto done;
            }
            time1 = getclock();
            if (listwritten) {
                write_string(list.c_file, " * * ", 5, 5);
                write_integer(list.c_file, (time1 - lasttime) / 1000, 4, 10);
                write_char(list.c_file, '.', 1);
                write_integer(list.c_file, (time1 - lasttime) % 1000, 3, 10);
                write_string(list.c_file, " SECONDS IN REMOVAL OF REDUNDANT STORES OF ", 43, 43);
                write_string(list.c_file, entnam0, 1024, entnam0len);
                writeln(list.c_file);
            }
            lasttime = time1;
            if (dbugno > 0) {
                printitab();
            }
            if (dbugno == 2) {
                printlinfo();
            }
            findinduct();
            if (outofmem) {
                goto done;
            }
            codemotion();
            if (outofmem) {
                goto done;
            }
            if (dbugno == 3) {
                printcm();
            }
            time1 = getclock();
            if (listwritten) {
                write_string(list.c_file, " * * ", 5, 5);
                write_integer(list.c_file, (time1 - lasttime) / 1000, 4, 10);
                write_char(list.c_file, '.', 1);
                write_integer(list.c_file, (time1 - lasttime) % 1000, 3, 10);
                write_string(list.c_file, " SECONDS IN CODE MOTION OF ", 27, 27);
                write_string(list.c_file, entnam0, 1024, entnam0len);
                writeln(list.c_file);
            }
            lasttime = time1;
            eliminduct();
            time1 = getclock();
            if (listwritten) {
                write_string(list.c_file, " * * ", 5, 5);
                write_integer(list.c_file, (time1 - lasttime) / 1000, 4, 10);
                write_char(list.c_file, '.', 1);
                write_integer(list.c_file, (time1 - lasttime) % 1000, 3, 10);
                write_string(list.c_file, " SECONDS IN INDUCTION VARIABLE ELIM. OF ", 40, 40);
                write_string(list.c_file, entnam0, 1024, entnam0len);
                writeln(list.c_file);
            }
            lasttime = time1;
            getexpsources();
            if (outofmem) {
                goto done;
            }
            if (dbugno == 4) {
                printscm();
            }
            if (mipsflag == 3) {
                find_ix_loadstores();
            }
            bvlivransize = ((curstaticno - 1) >> 7) + 1;
            makelivranges();
            if (outofmem) {
                goto done;
            }
            regdataflow();
            if (outofmem) {
                goto done;
            }
            localcolor();
            if (outofmem) {
                goto done;
            }
            spilltemps();
            if (outofmem) {
                goto done;
            }
            time1 = getclock();
            if (listwritten) {
                write_string(list.c_file, " * * ", 5, 5);
                write_integer(list.c_file, (time1 - lasttime) / 1000, 4, 10);
                write_char(list.c_file, '.', 1);
                write_integer(list.c_file, (time1 - lasttime) % 1000, 3, 10);
                write_string(list.c_file, " SECONDS IN reg alloc preparation of ", 37, 37);
                write_string(list.c_file, entnam0, 1024, entnam0len);
                writeln(list.c_file);
            }
            regaloctime += time1 - lasttime;
            lasttime = time1;
            globalcolor();
            if (outofmem) {
                goto done;
            }
            time1 = getclock();
            if (listwritten) {
                write_string(list.c_file, " * * ", 5, 5);
                write_integer(list.c_file, (time1 - lasttime) / 1000, 4, 10);
                write_char(list.c_file, '.', 1);
                write_integer(list.c_file, (time1 - lasttime) % 1000, 3, 10);
                write_string(list.c_file, " SECONDS IN global coloring of ", 31, 31);
                write_string(list.c_file, entnam0, 1024, entnam0len);
                writeln(list.c_file);
            }
            regaloctime += time1 - lasttime;
            lasttime = time1;
            if (dbugno == 5) {
                printregs();
            }
            opt_saved_regs();
            reemit();
            if (dbugno == 2) {
                printtab();
            }
            if (dbugno == 7) {
                printinterproc();
                printsav();
            }
            time1 = getclock();
            if (listwritten) {
                write_string(list.c_file, " * * ", 5, 5);
                write_integer(list.c_file, (time1 - lasttime) / 1000, 4, 10);
                write_char(list.c_file, '.', 1);
                write_integer(list.c_file, (time1 - lasttime) % 1000, 3, 10);
                write_string(list.c_file, " SECONDS IN REEMISSION OF ", 26, 26);
                write_string(list.c_file, entnam0, 1024, entnam0len);
                writeln(list.c_file);
            }
            u = u_copy;
            copyline();

            done:
            if (outofmem) {
                skipproc(0);
            }
        }
    }
    alloc_release(&perm_heap, heapptr);
    heapptr = alloc_mark(&perm_heap);
}

int main1(int argc, char *argv[]) {
    timer = getclock();
    optinit();
    if (suppressopt) {
        if (!o0o1specified && warn_flag != 2) {
            writeln(err.c_file);
            write_string(err.c_file, "uopt: Warning: file not optimized; use -g3 if both optimization and debug wanted", 0x50, 0x50);
            writeln(err.c_file);
            fflush(err.c_file);
            warned = true;
        }
        do {
            readuinstr(&u, ustrptr);
            if (Ueof == u.Ucode.Opc) {
                write_string(err.c_file, "uopt: Error: unexpected EOF in input ucode; giving up.", 0x36, 0x36);
                writeln(err.c_file);
                fflush(err.c_file);
                abort();
            }
            uwrite(&u);
        } while (Ustp != u.Ucode.Opc);
    } else {
        getop();
        while (Ueof != u.Ucode.Opc) {
            while (Uent != u.Ucode.Opc && Ustp != u.Ucode.Opc) {
                copyline();
                getop();
            }
            if (Uent == u.Ucode.Opc) {
                oneproc();
            } else {
                copyline();
            }
            getop();
        }
    }
    if (verbose) {
        writeln(err.c_file);
    }
    uputclose();
    write_updated_st();
    timer = (getclock() - timer);
    if (listwritten) {
        write_string(list.c_file, " * * ", 5, 5);
        write_integer(list.c_file, timer / 1000, 4, 10);
        write_char(list.c_file, '.', 1);
        write_integer(list.c_file, timer % 1000, 3, 10);
        write_string(list.c_file, " SECONDS IN WHOLE UCODE TO UCODE OPTIMIZATION", 0x2D, 0x2D);
        writeln(list.c_file);
    }
    if (listwritten) {
        printstat();
    }
    if (warned && warn_flag == 2) {
        exit(1);
    }
    return 0;
}
