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

#include "debug.h"

/*
00456A2C oneproc
*/
static void one_block(bool *elim_dead_code) { // originally embedded func
    struct Statement *statpos;
    struct GraphnodeList *graphnode_list;

    if (filteringout || *elim_dead_code) {
        curgraphnode = NULL;

        // remove dead code, skip to the next label or the end of the function
        while (!(OPC == Uaent || OPC == Uend || OPC == Ulab)) {
            if (!optab[OPC].executable) {
                copyline();
            } else if (OPC == Ubgnb || OPC == Udef || OPC == Uendb) {
                readnxtinst();
                if (outofmem) {
                    return;
                }
                stattail->graphnode = stattail->prev->graphnode;
            } else if (OPC == Uclab) {
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
        }
    }

    if (OPC != Uend) {
        if (!(OPC == Uaent || OPC == Ulab) || (OPC == Ulab && (stattail->opc == Ufjp || stattail->opc == Utjp))) {
            appendgraph();
            if (outofmem) {
                return;
            }

            if (curgraphnode != NULL) {
                graphnode_list = (struct GraphnodeList *)alloc_new(sizeof(struct GraphnodeList), &perm_heap);
                graphtail->predecessors = graphnode_list;
                graphnode_list->graphnode = curgraphnode;
                graphnode_list->next = NULL;

                graphnode_list = (struct GraphnodeList *)alloc_new(sizeof(struct GraphnodeList), &perm_heap);
                graphnode_list->graphnode = graphtail;
                graphnode_list->next = curgraphnode->successors;
                curgraphnode->successors = graphnode_list;
            }
            curgraphnode = graphtail;

            if (OPC == Ulab) {
                graphtail->num = (unsigned short)curstaticno++;
                extendstat(Unop);
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

        if (!(OPC == Uaent || OPC == Ulab)) {
            curgraphnode->num = (unsigned short)curstaticno++;
        }

        switch (OPC) {
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
            while (!endblock) {
                if (!optab[OPC].executable) {
                    copyline();
                } else {
                    readnxtinst();
                    if (outofmem) {
                        return;
                    }
                }
                getop();
            }

            *elim_dead_code = (OPC == Uijp || OPC == Uret || OPC == Uujp || OPC == Uxjp) || (OPC == Ucup && IS_RETURN_ATTR(EXTRNAL));
            switch (OPC) {
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
                    while (!optab[OPC].executable && OPC != Uend) {
                        copyline();
                        getop();
                    }
                    break;

                default:
                    break;
            }
        } else {
            *elim_dead_code = (OPC == Uijp || OPC == Uret || OPC == Uujp || OPC == Uxjp) || (OPC == Ucup && IS_RETURN_ATTR(EXTRNAL));
            endblock = false;

            getop();
            while (!optab[OPC].executable && OPC != Uend) {
                copyline();
                getop();
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
    bool elim_dead_code;
    union Bcode u_copy;

    curproc = getproc(IONE);
    usefp = IS_FRAMEPTR_ATTR(EXTRNAL);
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
                if (!optab[OPC].executable) {
                    copyline();
                } else if (OPC == Ulab && IS_EXTERNAL_ATTR(LEXLEV)) {
                    uwrite(&u);
                }
            } while (OPC != Uend);

        } else {
            endblock = false;
            inlopt = true;
            loc_not_yet_seen = false;

            getop();
            while (!optab[OPC].executable) {
                copyline();
                getop();
            }

            if (OPC == Ulab) {
                appendgraph();
                if (outofmem) {
                    return;
                }
                curgraphnode = graphtail;
                graphtail->num = 0;
                extendstat(Unop);
                curgraphnode->stat_tail = curgraphnode->stat_head;
                init_node_vectors(curgraphnode);
                curstaticno = 1;
            }

            elim_dead_code = false;
            filteringout = false;
            while (OPC != Uend) {
                one_block(&elim_dead_code);
                loc_not_yet_seen = true;
                if (outofmem) {
                    goto done;
                }
            }
            if (ustackbot != ustack) {
                stackerror();
            }
            //ncdebug();

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
                if (curproc->feedback_data != NULL) {
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
            //ncdebug();
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
            //ncdebug();
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
            //ncdebug();

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
#ifdef UOPT_DEBUG
            ncdebug();
            ucode_output_clear();
            ucode_input_clear();
#endif
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
            if (Ueof == OPC) {
                write_string(err.c_file, "uopt: Error: unexpected EOF in input ucode; giving up.", 0x36, 0x36);
                writeln(err.c_file);
                fflush(err.c_file);
                abort();
            }
            uwrite(&u);
        } while (Ustp != OPC);
    } else {
        getop();
        while (Ueof != OPC) {
            while (Uent != OPC && Ustp != OPC) {
                copyline();
                getop();
            }
            if (Uent == OPC) {
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
