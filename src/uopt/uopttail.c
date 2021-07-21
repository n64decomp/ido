#include "uoptdata.h"
#include "uopttail.h"
#include "uoptutil.h"
#include "uoptions.h"
#include "uoptcontrolflow.h"
#include "uoptroll.h"
#include "uoptitab.h"

/*
00475C80 next_stmt_is_ret
*/
bool next_stmt_is_ret1(struct Statement *stmt, int addr) {
    for (;;) {
        stmt = stmt->next;
        switch (stmt->opc) {
            case Ubgnb:
            case Udef:
            case Uendb:
            case Ulab:
            case Uloc:
            case Unop:
                continue;
        }
        if (stmt->opc == Uujp) {
            stmt = stmt->graphnode->successors->graphnode->stat_head;
            continue;
        }
        if (stmt->opc == Ustr) {
            if (stmt->expr->data.isvar_issvar.assigned_value->type != isvar) {
                return false;
            }
            if (stmt->expr->data.isvar_issvar.assigned_value->data.isvar_issvar.var_data.blockno != curblk) {
                return false;
            }
            if (stmt->expr->data.isvar_issvar.assigned_value->data.isvar_issvar.var_data.addr != addr) {
                return false;
            }
            if (stmt->expr->type == isvar) {
                if (stmt->expr->data.isvar_issvar.var_data.memtype == Rmt) {
                    if (stmt->expr->data.isvar_issvar.var_data.addr != r_v0) {
                        continue;
                    }
                }
            }
            return false;
        }
        return stmt->opc == Uret;
    }
}

/*
004761D0 tail_recursion
*/
bool next_stmt_is_ret(struct Statement *stmt) {
    for (;;) {
        stmt = stmt->next;
        switch (stmt->opc) {
            case Ubgnb:
            case Udef:
            case Uendb:
            case Ulab:
            case Uloc:
            case Unop:
                continue;
        }
        if (stmt->opc == Uujp) {
            stmt = stmt->graphnode->successors->graphnode->stat_head;
            continue;
        }
        if (stmt->opc == Ustr) {
            if (stmt->expr->data.isvar_issvar.assigned_value->type != isvar) {
                return false;
            }
            if (stmt->expr->data.isvar_issvar.assigned_value->data.isvar_issvar.var_data.memtype != Rmt) {
                return false;
            }
            if (stmt->expr->data.isvar_issvar.assigned_value->data.isvar_issvar.var_data.addr != r_v0) {
                return false;
            }
            if (stmt->expr->type == isvar) {
                if (stmt->expr->data.isvar_issvar.var_data.memtype == Rmt) {
                    if (stmt->expr->data.isvar_issvar.var_data.addr == r_v0) {
                        continue;
                    }
                }
            }
            if (stmt->expr->type != isvar) {
                return false;
            }
            if (stmt->expr->data.isvar_issvar.var_data.blockno != curblk) {
                return false;
            }
            return next_stmt_is_ret1(stmt, stmt->expr->data.isvar_issvar.var_data.addr);
        }
        return stmt->opc == Uret;
    }
}

/*
004761D0 tail_recursion
*/
bool no_ref_param(struct Statement *parameters) {
    struct Expression *baseaddr;
    while (parameters != NULL) {
        if (parameters->u.par.dtype == Adt) {
            baseaddr = parameters->u.par.baseaddr;
            if (baseaddr->type == islda && curblk == baseaddr->data.islda_isilda.var_data.blockno) {
                return false;
            }
        }
        parameters = parameters->u.par.next;
    }
    return true;
}

/*
00475E38 func_00475E38
00475FE8 fix_par_vreg
*/
static void func_00475E38(struct Variable *vartree, struct Statement *pmov_stmt) {
    struct Expression *expr;
    if (vartree != NULL) {
        if (vartree->unk2 && vartree->inner.memtype == Pmt && curblk == vartree->inner.blockno) {
            int loc = vartree->inner.addr;
            if ((loc >= pmov_stmt->u.store.u.mov.offset && loc - pmov_stmt->u.store.u.mov.offset < pmov_stmt->u.store.size) ||
                (pmov_stmt->u.store.u.mov.offset >= loc && pmov_stmt->u.store.u.mov.offset - loc < vartree->size))
            {
                for (expr = table[isvarhash(vartree->inner)]; expr != NULL; expr = expr->next) {
                    if (expr->type != isvar) {
                        continue;
                    }
                    if (curblk != expr->data.isvar_issvar.var_data.blockno) {
                        continue;
                    }
                    if (vartree->inner.addr != expr->data.isvar_issvar.var_data.addr) {
                        continue;
                    }
                    expr->data.isvar_issvar.unk22 = false;
                    if (expr->ichain != NULL) {
                        expr->ichain->isvar_issvar.unk19 = false;
                    }
                }
            }
        }
        func_00475E38(vartree->left, pmov_stmt);
        func_00475E38(vartree->right, pmov_stmt);
    }
}

/*
004761D0 tail_recursion
*/
void fix_par_vreg(struct Statement *pmov_stmt) {
    func_00475E38(curproc->vartree, pmov_stmt);
}

/* inner function
# 0047606C func_0047606C
# 004761D0 tail_recursion
*/
static struct TailRecParameter *func_00476034(int arg0, struct TailRecParameter **tailRecParHead, int parnum) {
    struct TailRecParameter *par = *tailRecParHead;

    while (par != NULL) {
        if (arg0 == par->parnum) {
            return par;
        }
        par = par->next;
    }
    return NULL;
}

/* inner function
# 0047606C func_0047606C
# 004761D0 tail_recursion
*/
static void func_0047606C(struct Expression *expr, struct TailRecParameter **tailRecParHead, int parnum) {
    int par_number;
    struct TailRecParameter *par;

    switch (expr->type) {
        case isvar:
            if (expr->data.isvar_issvar.var_data.memtype != Pmt) {
                return;
            }

            par_number = expr->data.isvar_issvar.var_data.addr;
            if (par_number >= parnum) {
                return;
            }

            if (func_00476034((par_number >> 2) << 2, tailRecParHead, parnum) != 0) {
                return;
            }

            par = alloc_new(sizeof(struct TailRecParameter), &perm_heap);
            par->parnum = (par_number >> 2) << 2;
            par->next = *tailRecParHead;
            *tailRecParHead = par;
            return;

        case isop:
            func_0047606C(expr->data.isop.op1, tailRecParHead, parnum);
            if (!optab[expr->data.isop.opc].is_binary_op) {
                return;
            }
            // originally optimized by tail recursion
            func_0047606C(expr->data.isop.op2, tailRecParHead, parnum);

        case empty:
        case dumped:
            caseerror(1, 168, "uopttail.p", 10);
            break;

        default:
            break;
    }
    return;
}

/* 
# 00456A2C oneproc
*/
void tail_recursion(void) {
    struct Graphnode *oldHead;
    struct Statement *oldStattail;
    int parnum; // shared sp68
    bool found; // also shared? sp67
    bool initialized;
    struct TailRecParameter *tailRecParHead; // shared sp60
    struct Graphnode *head;
    int size;
    struct Statement *stmt;
    struct GraphnodeList *predecessors;
    struct GraphnodeList *successors;
    struct GraphnodeList *nodeList;
    struct GraphnodeList *prevNodelist;
    struct TailRecParameter *trPar;
    Uopcode stat_opc;
    int phi_a0;
    int i;

    if (!dotail) {
        return;
    }
    if (!can_elim_tail) {
        return;
    }
    if (lang == LANG_COBOL) {
        return;
    }

    if (lang == LANG_ADA && pdefmax >= 0) {
        for (i = 0; i < pdefmax; i++) {
            if (pdeftab[i].outmode) {
                return;
            }
        }
    }

    found = false;
    head = graphhead;
    do {
        if (head->stat_tail != NULL
                && head->stat_tail->opc == Ucup
                && head->stat_tail->u.call.proc->id == curblk
                && ((lang == LANG_C || lang == LANG_PL1 || lang == LANG_RESERVED1)
                    // check for reference params for pascal, fortran, and ada source
                    || no_ref_param(head->stat_tail->u.call.parameters))
                && head->successors != NULL
                && next_stmt_is_ret(head->stat_tail)
                && head != graphhead
                && head->predecessors != NULL) {

            initialized = found;
            found = true;
            tailRecParHead = NULL;
            if (!initialized) {
                TRAP_IF(graphhead->blockno != 0);
                maxlabnam += 1;
                graphhead->blockno = maxlabnam;
                stmt = alloc_new(sizeof(struct Statement), &perm_heap);
                stmt->next =  graphhead->stat_head;
                graphhead->stat_head->prev = stmt;
                graphhead->stat_head = stmt;
                stathead = stmt;
                stmt->prev = NULL;
                stmt->opc = Ulab;
                stmt->u.label.unk28 = 0;
                stmt->u.label.flags = 0;
                stmt->u.label.length = 0;
                stmt->graphnode = graphhead;
                stmt->u.label.blockno = maxlabnam;
            }

            if (listwritten) {
                write_string(list.c_file, "TAIL RECURSION ELIMINATION at BB:", 33, 33);
                write_integer(list.c_file, head->num, 12, 10);
                writeln(list.c_file);
            }

            stmt = head->stat_tail;
            do {
                if (stmt->opc == Upar || stmt->opc == Upmov) {
                    parnum = stmt->u.par.loc;
                    func_0047606C(stmt->expr, &tailRecParHead, parnum);
                }
                stmt = stmt->prev;
            } while(stmt->u.par.loc != 0);

            curgraphnode = alloc_new(sizeof(struct Graphnode), &perm_heap);
            init_graphnode(curgraphnode);
            curgraphnode->num = head->num;
            curgraphnode->bvs.init.line = head->bvs.init.line;
            curgraphnode->unk2C = head->unk2C;
            curgraphnode->blockno = head->blockno;
            oldHead->next = curgraphnode;
            curgraphnode->next = head->next;
            curgraphnode->predecessors = head->predecessors;
            curgraphnode->successors = head->successors;

            predecessors = head->predecessors;
            do {
                change_adj_node(predecessors->graphnode->successors, head, curgraphnode);
                predecessors = predecessors->next;
            } while (predecessors != NULL);

            change_adj_node(curgraphnode->successors->graphnode->predecessors, head, curgraphnode);
            stmt = head->stat_head;
            oldStattail = stattail;
            stattail = stmt->prev;
            stat_opc = stmt->opc;

            do {
                if (stat_opc != Uclab &&
                        stat_opc != Umst  &&
                        stat_opc != Upar  &&
                        stat_opc != Upmov &&
                        stat_opc != Ustr) {
                    oneloopblockstmt(stmt);
                } else if (stat_opc == Ustr) {
                    if (stmt->expr->data.isvar_issvar.var_data.memtype != Rmt) {
                        oneloopblockstmt(stmt);
                    }
                } else if (stat_opc == Upar) {
                    trPar = func_00476034(stmt->u.par.loc, &tailRecParHead, parnum);
                    if (trPar != 0) {
                        size = stmt->u.par.size;
                        phi_a0 = tempdisp % size;

                        if ((phi_a0 ^ size) < 0) {
                            phi_a0 += size;
                        }

                        if (phi_a0 != 0) {
                            tempdisp += size - phi_a0;
                        }

                        trPar->stat = stmt;
                        if (!stack_reversed) {
                            tempdisp += stmt->u.par.size;
                            trPar->unk8 = -tempdisp;
                            par_to_str(stmt, 1, -tempdisp);
                        } else {
                            trPar->unk8 = tempdisp;
                            par_to_str(stmt, 1, tempdisp);
                            tempdisp += stmt->u.par.size;
                        }

                        trPar->expr = stattail->expr;
                    }
                    par_to_str(stmt, 0, 0);
                } else if (stat_opc == Upmov) {
                    pmov_to_mov(stmt);
                    fix_par_vreg(stmt);
                } else if (stat_opc == Uclab) {
                    extendstat(Uclab);
                    stattail->u.label.blockno = stmt->u.label.blockno;
                    stattail->u.label.length = stmt->u.label.length;
                } else {
                    TRAP_IF(stat_opc != Umst);
                }

                stmt = stmt->next;
                stat_opc = stmt->opc;
            } while (stat_opc != Ucup);


            while (tailRecParHead != NULL) {
                tailRecParHead->stat->expr = tailRecParHead->expr;
                par_to_str(tailRecParHead->stat, 0, 0);
                tailRecParHead = tailRecParHead->next;
            }

            // Insert a jump to the beginning
            extendstat(Uujp);
            stattail->u.jp.target_blockno = graphhead->blockno;

            nodeList = curgraphnode->successors->graphnode->predecessors;
            if (curgraphnode == nodeList->graphnode) {
                curgraphnode->successors->graphnode->predecessors = nodeList->next;
            } else {
                do {
                    prevNodelist = nodeList;
                    nodeList = nodeList->next;
                } while (curgraphnode != nodeList->graphnode);

                prevNodelist->next = nodeList->next;
            }

            curgraphnode->successors->graphnode = graphhead;
            predecessors = alloc_new(sizeof(struct GraphnodeList), &perm_heap);
            predecessors->graphnode = curgraphnode;
            predecessors->next = graphhead->predecessors;
            graphhead->predecessors = predecessors;
            curgraphnode->stat_tail = stattail;
            codeimage();
            stattail->next = head->stat_tail->next;
            head->stat_tail->next->prev = stattail;
            stattail = oldStattail;
            head = curgraphnode;
        }

        oldHead = head;
        head = head->next;
    } while (head != NULL);

    if (found) {
        head = alloc_new(sizeof(struct Graphnode), &perm_heap);
        init_graphnode(head);
        head->num = curstaticno++;
        head->next = graphhead;
        head->bvs.stage1.u.precm.unk134 = graphhead->bvs.stage1.u.precm.unk134;
        head->unk2C = graphhead->unk2C;
        stmt = alloc_new(sizeof(struct Statement), &perm_heap);
        stmt->next = stathead;
        stathead->prev = stmt;
        stmt->prev = NULL;
        stmt->opc = Unop;
        stmt->graphnode = head;
        // u.nop?
        stmt->u.store.ichain = NULL;
        head->stat_head = stmt;
        head->stat_tail = stmt;
        stathead = stmt;
        init_node_vectors(head);
        predecessors = alloc_new(8, &perm_heap);
        predecessors->graphnode = head;
        predecessors->next = graphhead->predecessors;
        graphhead->predecessors = predecessors;
        successors = alloc_new(8, &perm_heap);
        successors->graphnode = graphhead;
        successors->next = head->successors;
        head->successors = successors;
        graphhead = head;
    }
}
