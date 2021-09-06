#include <stdlib.h>

#include "libmld/libmld.h"
#include "uoptdata.h"
#include "uoptutil.h"
#include "uoptppss.h"
#include "uoptfeedback.h"

struct padded_string {
    size_t length;
    char padded_name[];
};

/*
0043771C optinit
   XXX: untested
*/
void incorp_feedback(void) {
    struct f_header *fh; // a2, sp7C
    void *sp64;
    int proc_count;
    int f_argc; //s5
    int callee_count;
    int block;
    struct Proc **procs;
    char *data;
    struct f_per_proc *callee;

    fh = (struct f_header *)feedback;
    data = (char*)(feedback + sizeof (struct f_header));
    f_argc = fh->argc;
    while (f_argc > 0) {
        data += (((struct padded_string *)data)->length & ~3) + sizeof(int);
        data += sizeof(int);
        f_argc--;
    }

    procs = alloc_new(fh->proc_count * sizeof (struct FeedbackInfo *), &perm_heap);
    sp64 = xmalloc(fh->proc_count);
    proc_count = 0;
    do {
        procs[proc_count] = NULL;
        block = path_blockno(data + 4, ((struct padded_string *)data)->length);
        if (block != -1) {
            procs[proc_count] = getproc(block);
        }
        data += (((struct padded_string *)data)->length & ~3) + sizeof(int);
        data += sizeof(int);
        proc_count++;
    } while (proc_count < fh->proc_count);

    callee_count = fh->callee_count;
    while (callee_count > 0) {
        callee = (struct f_per_proc *)data;
        if (callee->magic != PROC_FEEDBACK) {
            write_string(err.c_file, "uopt: Internal error: Callee record magic number mismatch in feedback file.", 75, 75);
            writeln(err.c_file);
            write_string(err.c_file, "                      Expected: ", 32, 32);
            write_integer(err.c_file, PROC_FEEDBACK, 1, 16);
            write_string(err.c_file, " Got: ", 6, 6);
            write_integer(err.c_file, callee->magic, 1, 16);
            writeln(err.c_file);
            fflush(err.c_file);
            abort();
        }

        if (procs[callee->n_id] != NULL) {
            procs[callee->n_id]->feedback_data = callee;
        }

        data += callee->caller_count * sizeof(struct f_per_call) + callee->bb_count * sizeof(struct f_per_bb) + sizeof(struct f_per_proc);
        callee_count--;
    }

    if (data != (char *)feedback_end) {
        write_string(err.c_file, "uopt: Internal error: Feedback file length doesn't match its structure.", 71, 71);
        writeln(err.c_file);
        fflush(err.c_file);
        abort();
    }
    st_free();
    xfree(sp64);
}

/*
0042F0FC bb_frequencies
*/
int empty_bb(struct Graphnode *node) {
    struct Statement *stat;

    stat = node->stat_head;

    while (stat != node->stat_tail) {
        if (stat->opc != Ubgnb &&
                stat->opc != Uclab &&
                stat->opc != Udef &&
                stat->opc != Uendb &&
                stat->opc != Ulab &&
                stat->opc != Uloc &&
                stat->opc != Unop) {
            return false;
        }
    }

    return true;
}

/*
0042F0FC bb_frequencies
*/
void func_0042EF10(struct f_per_bb *bb) {
    if (bb->magic != BB_FEEDBACK) {
        write_string(err.c_file, " uopt: Internal error: Basic block record magic number mismatch in feedback file.", 81, 81);
        writeln(err.c_file);
        write_string(err.c_file, "                \t    Expected: ", 31, 31);
        write_integer(err.c_file, BB_FEEDBACK, 1, 16);
        write_string(err.c_file, " Got: ", 6, 6);
        write_integer(err.c_file, bb->magic, 1, 16);
        writeln(err.c_file);
        fflush(err.c_file);
        abort();
    }
}

/*
0042F044 func_0042F044
0042F0FC bb_frequencies
*/
struct Graphnode *func_0042F044(struct Graphnode *node) {
    struct Statement *stat = node->stat_tail;

    do {
        stat = stat->next;
    } while (stat != NULL && node == stat->graphnode);

    if (stat == NULL) {
        return NULL;
    }

    if (stat->graphnode->predecessors != NULL && stat->graphnode->predecessors->next == NULL &&
            stat->graphnode->predecessors->graphnode == node && node->successors->next == NULL) {
        stat->graphnode->unk2C = node->unk2C;
        return func_0042F044(stat->graphnode);
    }
    return stat->graphnode;
}

/*
00456A2C oneproc
   XXX: untested
*/
void bb_frequencies(void) {
    unsigned char *data;
    struct Graphnode *node;
    struct f_per_bb *bb;
    unsigned int count;
    unsigned int freq;

    data = (void *)curproc->feedback_data;
    bb = (struct f_per_bb *)(data + (curproc->feedback_data->caller_count * sizeof(struct f_per_call)) + sizeof(struct f_per_proc));
    node = graphhead;
    freq = bb->bb_freq;
    count = curproc->feedback_data->bb_count;
    while (count > 0 && node != NULL) {
        if (node->bvs.init.line == 0) {
            node->unk2C = bb->bb_freq;
            node = func_0042F044(node);
        } else if (empty_bb(node) && node != graphhead) {
            node->unk2C = MIN(bb->bb_freq, freq);
            node = func_0042F044(node);
        } else if (bb->relative_line + curproc->feedback_data->start_line < node->bvs.init.line) {
            func_0042EF10(bb);
            bb++;
            count--;
        } else if (node->bvs.init.line < bb->relative_line + curproc->feedback_data->start_line) {
            node->unk2C = freq;
            node = func_0042F044(node);
        } else {
            func_0042EF10(bb);
            freq = bb->bb_freq;
            bb++;
            count--;
            node->unk2C = freq;
            node = func_0042F044(node);
        }
    }

    while (node != NULL) {
        node->unk2C = freq;
        node = func_0042F044(node);
    }
}

/*
0043CA8C func_0043CA8C
0043CFCC readnxtinst
*/
struct Graphnode *ingraph(int blockno) {
    struct Graphnode *graphnode = graphhead;
    bool found = false;

    while (!found && graphnode != NULL) {
        if (blockno == graphnode->blockno) {
            found = true;
        } else {
            graphnode = graphnode->next;
        }
    }

    return found ? graphnode : NULL;
}

/*
0042F424 appendgraph
0046FA20 new_header_node
004713E8 loopunroll
004761D0 tail_recursion
*/
void init_graphnode(struct Graphnode *node) {
#ifdef AVOID_UB
    *node = (struct Graphnode) {0};
#endif
    node->unkBb8 = 0;
    node->blockno = 0;
    node->predecessors = NULL;
    node->successors = NULL;
    node->next = NULL;
    node->terminal = false;
    node->unk7 = 0;
    node->interprocedural_controlflow = false;
    node->unk5 = 0;
    node->unkBb4 = 0;
    node->stat_head = NULL;
    node->stat_tail = NULL;
    node->varlisthead = NULL;
    node->varlisttail = NULL;
    node->liveunit = NULL;
    node->fallthrough_bbs = NULL;
    node->jump_bbs = NULL;
    node->bvs.init.line = curlocln;
}

/*
0042F6CC controlflow
004471AC codeimage
00456310 one_block
00456A2C oneproc
004713E8 loopunroll
004761D0 tail_recursion
*/
void init_node_vectors(struct Graphnode *graphnode) {
    struct BitVector empty = {0, NULL};

    graphnode->bvs.stage1.alters = empty;
    graphnode->bvs.stage1.antlocs = empty;
    graphnode->bvs.stage1.avlocs = empty;
    graphnode->bvs.stage1.absalters = empty;
    graphnode->bvs.stage1.u.precm.pavlocs = empty;
    graphnode->bvs.stage1.u.precm.expoccur = empty;

    graphnode->indiracc = empty;
}

/*
0043CA8C func_0043CA8C
0043CFCC readnxtinst
00456310 one_block
00456A2C oneproc
*/
void appendgraph(void) {
    struct Graphnode *node;

    if (graphhead == NULL) {
        node = (struct Graphnode *)alloc_new(sizeof(struct Graphnode), &perm_heap);
        graphhead = node;
    } else {
        node = (struct Graphnode *)alloc_new(sizeof(struct Graphnode), &perm_heap);
        graphtail->next = node;
    }
    graphtail = node;
    if (graphtail == NULL) {
        outofmem = true;
        return;
    }
    init_graphnode(graphtail);
}

/*
0042F4DC visit_successors
0042F6CC controlflow
*/
static void visit_successors(struct Graphnode *node) { // inner function
    struct GraphnodeList *succ;

    if (node->unk7 == 0) {
        node->unk7 = 1;
        succ = node->successors;
        while (succ != NULL) {
            visit_successors(succ->graphnode);
            succ = succ->next;
        }
    }
}

/*
0042F558 visit_predecessors
0042F6CC controlflow
*/
static void visit_predecessors(struct Graphnode *node) { // inner function
    struct GraphnodeList *pred;

    node->terminal = true;
    pred = node->predecessors;

    while (pred != NULL) {
        if (pred->graphnode->terminal == false) {
            visit_predecessors(pred->graphnode);
        }
        pred = pred->next;
    }
}

/*
0042F5D4 depth_first_order
0042F6CC controlflow
*/
static void depth_first_order(struct Graphnode *node) { // inner function
    struct GraphnodeList *succ;
    bool found;

    if (node->unk7 != 2) {
        graphtail->next = node;
        graphtail = node;
        node->unk7 = 2;

        // visit the successor directly after node first, then visit the other successors
        succ = node->successors;
        found = false;
        while (succ != NULL && !found) {
            if ((node->num + 1) == succ->graphnode->num) {
                depth_first_order(succ->graphnode);
                found = true;
            }
            succ = succ->next;
        }

        succ = node->successors;
        while (succ != NULL) {
            depth_first_order(succ->graphnode);
            succ = succ->next;
        }
    }
}

/*
00456A2C oneproc
*/
void controlflow() {
    struct Graphnode *curnode;
    struct Graphnode *unvisited_node;
    struct Graphnode *new_node;

    struct GraphnodeList *succ;
    struct GraphnodeList *pred;
    struct GraphnodeList *prev_pred;

    struct GraphnodeList *interproc_targets;
    struct GraphnodeList *new_list;

    struct Statement *stat;
    struct Statement *last_reached_stat;

    bool done;
    int i;

    visit_successors(graphhead);
    interproc_targets = NULL;

    curnode = graphhead->next;
    while (curnode != NULL) {
        if (curnode->interprocedural_controlflow) {
            visit_successors(curnode);
            // interproc_targets := GraphnodeList.create(curnode, interproc_targets);
            new_list = new(sizeof(struct GraphnodeList), false);
            new_list->graphnode = curnode;
            new_list->next = interproc_targets;
            interproc_targets = new_list;
        }
        curnode = curnode->next;
    }

    // erase any nodes that weren't reached from the entry
    for (curnode = graphhead; curnode != NULL; curnode = curnode->next) {
        if (curnode->unk7 == 0) {
            if (curnode->stat_head != NULL && curnode->stat_head->opc == Uclab && curnode->stat_head->u.label.unk1C == false) {
                curnode->successors = NULL;
            }

            // remove the unreached node from predecessors
            succ = curnode->successors;
            while (succ != NULL) {
                pred = succ->graphnode->predecessors;
                if (curnode == pred->graphnode) {
                    succ->graphnode->predecessors = pred->next;
                } else {
                    while (curnode != pred->graphnode) {
                        prev_pred = pred;
                        pred = pred->next;
                    }
                    prev_pred->next = pred->next;
                }
                succ = succ->next;
            }

            // erase the statements in the node
            if (curnode->stat_head != NULL) {
                last_reached_stat = curnode->stat_head->prev;

                stat = last_reached_stat->next;
                //! always the same as curnode?
                unvisited_node = stat->graphnode;
                done = false;

                do {
                    // don't erase switch definitions and memory definitions
                    if (stat->opc != Uclab && stat->opc != Udef) {
                        if (Uxjp == stat->opc) {
                            stat->u.xjp.case_stmts->u.label.unk1C = false;
                        }

                        last_reached_stat->next = stat->next;
                        if (stat->next != NULL) {
                            stat->next->prev = last_reached_stat;
                        }

                        if (stat->opc == Uisst || stat->opc == Ustr) {
                            if (!stat->outpar) {
                                decreasecount(stat->expr->data.isvar_issvar.assigned_value);
                            }
                            if (stat->opc == Uisst) {
                                decreasecount(stat->u.store.expr);
                            }
                        } else {
                            switch (stat->opc) {
                                // emulating 'stat->opc not in [Uaent, Ubgnb, ...]'
                                case Uaent:
                                case Ubgnb:
                                case Ucia:
                                case Uclab:
                                case Uclbd:
                                case Uctrl:
                                case Ucubd:
                                case Ucup:
                                case Udef:
                                case Udup:
                                case Uendb:
                                case Uicuf:
                                case Ulab:
                                case Ulbdy:
                                case Ulbgn:
                                case Ulend:
                                case Uloc:
                                case Ultrm:
                                case Umst:
                                case Unop:
                                case Uret:
                                case Ustep:
                                case Uswp:
                                case Uujp:
                                case Uxpar:
                                    break;

                                default:
                                    decreasecount(stat->expr);
                                    switch (stat->opc) {
                                        // emulating 'stat->opc in [Uistr, Uistv, ...]'
                                        case Uistr:
                                        case Uistv:
                                        case Umov:
                                        case Umovv:
                                        case Utpeq:
                                        case Utpge:
                                        case Utpgt:
                                        case Utple:
                                        case Utplt:
                                        case Utpne:
                                        case Uirst:
                                        case Uirsv:
                                            decreasecount(stat->u.store.expr);
                                            break;

                                        default:
                                            break;
                                    }
                                    break;
                            }
                        }
                    } else {
                        // move Uclab and Udef to the previous graphnode
                        stat->graphnode = last_reached_stat->graphnode;
                        if (stat->opc == Uclab) {
                            int length = stat->u.label.length;
                            for (i = 0; i < length; i++) {
                                stat = stat->next;
                                stat->graphnode = last_reached_stat->graphnode;
                            }
                        }
                        last_reached_stat = stat;
                    }

                    stat = stat->next;
                    if (stat != NULL) {
                        done = (stat->graphnode != unvisited_node);
                    }
                } while (stat != NULL && done == false);
            }
        } else if (curnode->blockno != 0 && curnode->stat_head == NULL) {
            writeln(err.c_file);
            write_string(err.c_file, "uopt: Internal: ", 16, 16);
            write_string(err.c_file, entnam0, 1024, entnam0len);
            write_string(err.c_file, ": label L", 9, 9);
            write_cardinal(err.c_file, curnode->blockno, 0, 10);
            write_string(err.c_file, " undefined.", 11, 11);
            writeln(err.c_file);
            fflush(err.c_file);
            abort();
        }
    }

    succ = graphhead->successors;
    graphhead->unk7 = 2;
    graphtail = graphhead;
    while (succ != NULL) {
        depth_first_order(succ->graphnode);
        succ = succ->next;
    }

    while (interproc_targets != NULL) {
        depth_first_order(interproc_targets->graphnode);
        interproc_targets = interproc_targets->next;
    }

    graphtail->next = NULL;
    curnode = graphhead;
    curnode->prev = NULL;
    while (curnode != NULL) {
        if (curnode->next != NULL) {
            curnode->next->prev = curnode;
        }

        if (curnode->terminal == false) {
            if (curnode->successors == NULL) {
                visit_predecessors(curnode);
            }
        }

        // curnode->stat_tail->opc in [Ucia, Ucup, Uicuf]
        if (curnode->stat_tail->opc == Ucia || curnode->stat_tail->opc == Ucup || curnode->stat_tail->opc == Uicuf ) {
            if (curnode->successors != NULL &&
                    curnode->successors->graphnode->blockno != 0 &&
                    curnode->successors->graphnode->predecessors->next != NULL)  {

                new_node = alloc_new(sizeof(struct Graphnode), &perm_heap);
                *new_node = *curnode;

                curnode->next = new_node;
                if (new_node->next != NULL) {
                    new_node->next->prev = new_node;
                }

                new_node->prev = curnode;
                new_node->blockno = 0;
                new_node->num = curstaticno++;

                new_node->predecessors = alloc_new(sizeof(struct GraphnodeList), &perm_heap);
                new_node->predecessors->graphnode = curnode;
                new_node->predecessors->next = NULL;

                curnode->successors = alloc_new(sizeof(struct GraphnodeList), &perm_heap);
                curnode->successors->graphnode = new_node;
                curnode->successors->next = NULL;

                pred = new_node->successors->graphnode->predecessors;
                while (curnode != pred->graphnode) {
                    pred = pred->next;
                }

                pred->graphnode = new_node;
                new_node->interprocedural_controlflow = false;
                stat = alloc_new(sizeof(struct Statement), &perm_heap);
                new_node->stat_head = stat;
                stat->prev = curnode->stat_tail;
                stat->next = curnode->stat_tail->next;
                curnode->stat_tail->next = new_node->stat_head;
                stat->next->prev = new_node->stat_head;
                stat->opc = Unop;
                stat->graphnode = new_node;
                new_node->varlisthead = NULL;
                new_node->varlisttail = NULL;
                new_node->stat_tail = new_node->stat_head;

                init_node_vectors(new_node);
                if (curnode == graphtail) {
                    graphtail = new_node;
                }
            }
        }
        curnode = curnode->next;
    }
}
