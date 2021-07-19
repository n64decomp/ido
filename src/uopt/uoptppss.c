#include <stdlib.h>
#include <string.h>
#include "libp/libp.h"
#include "libxmalloc/xmalloc.h"
#include "libu/libu.h"
#include "uoptions.h"
#include "uoptdata.h"
#include "uoptppss.h"
#include "uoptutil.h"
#include "uoptkill.h"

// Linked list, sorted by num
struct NumLinkedList {
    int num;
    struct NumLinkedList *next;
};

/*
00459FB0 insertlda
0045C150 prepass
*/
struct AllocBlock *lda_heap = NULL;

/*
00459828 insertvar
*/
struct AllocBlock *var_heap = NULL;


/*
004590C8 searchproc
00459300 getproc
0045A480 oneinstruction
0045BE98 processcallgraph
0045C150 prepass
*/
struct Proc *prochead;

/*
0045A480 oneinstruction
0045B508 oneprocprepass
*/
int lab_just_defined;

/*
0045A480 oneinstruction
0045B508 oneprocprepass
*/
int in_exception_block;

/*
0045A480 oneinstruction
*/
int in_exception_frame;

/*
00459C9C enterfsymtab
00459DC8 del_fsymtab
0045C150 prepass
0045C6F4 in_fsym
*/
struct NumLinkedList *fsymtab[161];

/*
00459E84 enter_gp_rel_tab
0045C150 prepass
0045C77C is_gp_relative
*/
struct NumLinkedList *gp_rel_tab[161];

/*
00459698 make_subloc_veqv
00459828 insertvar
00459FB0 insertlda
0045BF44 checkforvreg
*/
unsigned char compareloc(struct VariableInner a, struct VariableInner b, int size_a, int size_b) {
    if (a.memtype < b.memtype) {
        return 1;
    }
    if (a.memtype > b.memtype) {
        return 2;
    }
    if (a.blockno < b.blockno) {
        return 1;
    }
    if (a.blockno > b.blockno) {
        return 2;
    }
    if (overlapping(a, b, size_a, size_b)) {
        return 0;
    }
    return a.addr < b.addr ? 1 : 2;
}

/*
0045C540 varintree
004736E0 func_004736E0
*/
int compareaddr(struct VariableInner a, struct VariableInner b) {
    if (a.memtype < b.memtype) {
        return 1;
    }
    if (a.memtype > b.memtype) {
        return 2;
    }
    if (a.blockno < b.blockno) {
        return 1;
    }
    if (a.blockno > b.blockno) {
        return 2;
    }
    if (a.addr < b.addr) {
        return 1;
    }
    if (a.addr > b.addr) {
        return 2;
    }
    return 0;
}

/*
0045A480 oneinstruction
0045B508 oneprocprepass
*/
struct Proc *searchproc(int id, int level) {
    bool notfound;
    bool found;
    struct Proc *pos;
    struct Proc *new_proc;

    notfound = prochead == NULL;
    found = false;
    pos = prochead;

    while (!found && !notfound) {
        if (id == pos->id) {
            found = true;
        } else if (id < pos->id) {
            if (pos->left == NULL) {
                notfound = true;
            } else {
                pos = pos->left;
            }
        } else {
            if (pos->right == NULL) {
                notfound = true;
            } else {
                pos = pos->right;
            }
        }
    }

    if (!found) {
        if (pos == NULL) {
            new_proc = (struct Proc *)alloc_new(sizeof(struct Proc), &perm_heap);
            prochead = new_proc;
        } else if (id < pos->id) {
            new_proc = (struct Proc *)alloc_new(sizeof(struct Proc), &perm_heap);
            pos->left = new_proc;
        } else {
            new_proc = (struct Proc *)alloc_new(sizeof(struct Proc), &perm_heap);
            pos->right = new_proc;
        }
        new_proc->left = NULL;
        new_proc->right = NULL;
        new_proc->id = id;
        new_proc->vartree = NULL;
        new_proc->labels = NULL;
        new_proc->callees = NULL;
        new_proc->unk8 = false;
        new_proc->unkB = lang == LANG_COBOL;
        new_proc->unkD = lang == LANG_COBOL;
        new_proc->no_sideeffects = false;
        new_proc->nonlocal_goto = false;
        new_proc->unk14 = 0;
        new_proc->unk15 = 0;
        new_proc->num_bbs = 0;
        new_proc->ijp_labels = NULL;
        new_proc->bvsize = 0;
        new_proc->feedback_data = NULL;
        new_proc->unk38 = 0;
        new_proc->level = level;
        new_proc->o3opt = o3opt;

        pos = new_proc;
    } else if (level != 2 && pos->level == 2) {
        pos->level = level;
    }

    return pos;
}

/*
004592A0 change_to_o2
0045A480 oneinstruction
*/
void change_to_o2(struct Proc *proc) {
    while (proc != NULL) {
        proc->o3opt = false;
        change_to_o2(proc->left);
        proc = proc->right;
    }
}

/*
004173EC func_004173EC
0042EB10 incorp_feedback
0043CFCC readnxtinst
0044CD14 listplkilled
0044D4B4 listpskilled
00456A2C oneproc
*/
struct Proc *getproc(int id) {
    struct Proc *pos = prochead;
    bool found = false;

    while (!found && pos != NULL) {
        if (id == pos->id) {
            found = true;
        } else if (id < pos->id) {
            pos = pos->left;
        } else {
            pos = pos->right;
        }
    }

    return pos;
}

/*
0045A480 oneinstruction
*/
void insertijplab(int num, struct IjpLabel **pos) {
    struct IjpLabel *label;

    for (;;) {
        label = *pos;
        if (label == NULL) {
            label = (struct IjpLabel *)alloc_new(sizeof(struct IjpLabel), &perm_heap);
            *pos = label;
            label->left = NULL;
            label->right = NULL;
            label->num = num;
            break;
        }
        if (num < label->num) {
            pos = &label->left;
        } else if (num > label->num) {
            pos = &label->right;
        } else {
            break;
        }
    }
}

/*
0045A480 oneinstruction
*/
struct Label *updatelab(unsigned int addr, struct Label **pos, bool arg2) {
    struct Label *label;

    for (;;) {
        label = *pos;
        if (label == NULL) {
            label = (struct Label *)alloc_new(sizeof(struct Label), &perm_heap);
            *pos = label;
            label->branched_back = false;
            label->left = NULL;
            label->right = NULL;
            label->len = 0;
            label->unk8 = arg2;
            label->addr = addr;
            break;
        }
        if (addr < label->addr) {
            pos = &label->left;
        } else if (addr > label->addr) {
            pos = &label->right;
        } else {
            if (arg2) {
                if (!label->unk8 && (OPC == Ufjp || OPC == Utjp)) {
                    label->branched_back = true;
                }
                label->unk8 = true;
            }
            break;
        }
    }

    return *pos;
}

/*
00439C40 getop
*/
struct Label *searchlab(unsigned int addr, struct Label *tree) {
    while (addr != tree->addr) {
        tree = addr < tree->addr ? tree->left : tree->right;
    }
    return tree;
}

/*
00459698 make_subloc_veqv
00459828 insertvar
*/
void update_veqv_in_table(struct Variable *var) {
    struct Expression *entry;
    unsigned short hash;
    bool found;

    hash = isvarhash(var->inner);
    entry = table[hash];
    found = false;

    while (entry != NULL) {
        if (entry->type == isvar || entry->type == issvar) {
            if (addreq(entry->data.isvar_issvar.var_data, var->inner)) {
                entry->data.isvar_issvar.unk21 = true;
                found = true;
            }
        }
        entry = entry->next;
    }

    if (!found) {
        entry = searchvar(hash, &var->inner);
        entry->graphnode = NULL;
        entry->data.isvar_issvar.size = (unsigned char)var->size;
        entry->data.isvar_issvar.unk22 = var->unk2;
        entry->data.isvar_issvar.unk21 = var->unk1;
    }
}

/*
00459698 make_subloc_veqv
00459828 insertvar
*/
void make_subloc_veqv(struct VariableInner var, int size, struct Variable **pos) {
    while (*pos != NULL) {
        switch (compareloc(var, (*pos)->inner, size, (*pos)->size)) {
            case 0:
                if (!(*pos)->unk1) {
                    (*pos)->unk1 = true;
                    (*pos)->unk2 = false;
                    if (inlopt) {
                        update_veqv_in_table(*pos);
                    }
                }
                make_subloc_veqv(var, size, &(*pos)->left);
                var = var; // why self assignment, tail recursion?
                pos = &(*pos)->right;
                break;

            case 1:
                var = var; // why self assignment, tail recursion?
                pos = &(*pos)->left;
                break;

            case 2:
                return;

            default:
                caseerror(1, 306, "uoptppss.p", 10);
                return;
        }
    }
}

/*
0044EDF8 ilodfold
0044F1B8 istrfold
0045A480 oneinstruction
0045B508 oneprocprepass
*/
struct Variable *insertvar(struct VariableInner var, int size, Datatype dtype, struct Variable **pos, bool arg5_unused, bool arg6, bool arg7) { //arg7 = is_register?
    struct Variable *v = *pos;
    bool done = false;
    bool updated_size;

    if (v == NULL) {
        v = (struct Variable *)alloc_new(sizeof(struct Variable), &var_heap);
        *pos = v;
        done = true;
    }

    while (!done) {
        switch (compareloc(var, v->inner, size, v->size)) {
            case 1:
                if (v->left == NULL) {
                    v->left = (struct Variable *)alloc_new(sizeof(struct Variable), &var_heap);
                    done = true;
                }
                v = v->left;
                break;

            case 2:
                if (v->right == NULL) {
                    v->right = (struct Variable *)alloc_new(sizeof(struct Variable), &var_heap);
                    done = true;
                }
                v = v->right;
                break;

            case 0:
                if ((var.addr == v->inner.addr && size == v->size) || var.memtype == Rmt) {
                    if ((dtype == Qdt || dtype == Rdt) == (v->dtype == Qdt || v->dtype == Rdt)) {
                        if (arg6 && !v->unk2 && !v->unk1) {
                            v->unk1 = true;
                            if (inlopt) {
                                update_veqv_in_table(v);
                            }
                        }
                        if (arg7) {
                            v->unk2 = true;
                            v->unk1 = false;
                        }
                    } else {
                        v->unk1 = true;
                        if (inlopt) {
                            update_veqv_in_table(v);
                        }
                    }
                    return v;
                } else {
                    updated_size = false;
                    if (!v->unk1) {
                        v->unk1 = true;
                        if (inlopt) {
                            update_veqv_in_table(v);
                        }
                    }

                    if (v->inner.addr + v->size < var.addr + size) {
                        v->size = var.addr + size - v->inner.addr;
                        updated_size = true;
                    }
                    if (v->inner.addr >= var.addr && updated_size) {
                        make_subloc_veqv(var, size, &v->right);
                    }

                    if (v->inner.addr > var.addr) {
                        arg6 = true;
                        arg7 = false;
                        if (v->left == NULL) {
                            v->left = (struct Variable *)alloc_new(sizeof(struct Variable), &var_heap);
                            done = true;
                        }
                        v = v->left;
                    } else if (v->inner.addr < var.addr) {
                        arg6 = true;
                        arg7 = false;
                        if (v->right == NULL) {
                            v->right = (struct Variable *)alloc_new(sizeof(struct Variable), &var_heap);
                            done = true;
                        }
                        v = v->right;
                    } else {
                        return v;
                    }
                }
                break;

            default:
                caseerror(1, 336, "uoptppss.p", 10);
                break;
        }
    }

    v->inner = var;
    v->unk1 = arg6 && !arg7;
    v->size = size;
    v->left = NULL;
    v->right = NULL;
    v->unk2 = arg7;
    v->dtype = dtype;
    return v;
}

/*
0045A480 oneinstruction
*/
void enterfsymtab(int num) {
    struct NumLinkedList *entry;
    struct NumLinkedList *next;
    int index;

    index = num % 161;
    if (index < 0) {
        index += 161;
    }

    entry = fsymtab[index];

    if (entry == NULL) {
        entry = (struct NumLinkedList *)alloc_new(sizeof(struct NumLinkedList), &perm_heap);
        fsymtab[index] = entry;
        entry->next = NULL;
        entry->num = num;
        return;
    }

    while (entry->num < num && entry->next != NULL) {
        entry = entry->next;
    }

    next = entry->next;
    entry->next = (struct NumLinkedList *)alloc_new(sizeof(struct NumLinkedList), &perm_heap);
    entry->next->next = next;
    if (entry->num >= num) {
        entry->next->num = entry->num;
        entry->num = num;
    } else {
        entry->next->num = num;
    }
}

/*
0045A480 oneinstruction
*/
void del_fsymtab(int num) {
    struct NumLinkedList *entry;
    int index;

    index = num % 161;
    if (index < 0) {
        index += 161;
    }

    entry = fsymtab[index];

    if (entry != NULL) {
        if (num == entry->num) {
            fsymtab[index] = entry->next;
            // Note: no free
        } else {
            while (entry->next != NULL && entry->next->num < num) {
                entry = entry->next;
            }
            if (entry->next != NULL && entry->next->num == num) {
                entry->next = entry->next->next;
                // Note: no free
            }
        }
    }
}

/*
0045A3DC check_gp_relative
0045A480 oneinstruction
*/
void enter_gp_rel_tab(int num) {
    struct NumLinkedList *entry;
    struct NumLinkedList *next;
    int index;

    index = num % 161;
    if (index < 0) {
        index += 161;
    }

    entry = gp_rel_tab[index];

    if (entry == NULL) {
        entry = (struct NumLinkedList *)alloc_new(sizeof(struct NumLinkedList), &perm_heap);
        gp_rel_tab[index] = entry;
        entry->next = NULL;
        entry->num = num;
        return;
    }

    while (entry->num < num && entry->next != NULL) {
        entry = entry->next;
    }

    next = entry->next;
    entry->next = (struct NumLinkedList *)alloc_new(sizeof(struct NumLinkedList), &perm_heap);
    entry->next->next = next;
    if (entry->num >= num) {
        entry->next->num = entry->num;
        entry->num = num;
    } else {
        entry->next->num = num;
    }
}

/*
0045A480 oneinstruction
*/
void insertlda(struct VariableInner var, int size) {
    struct LdatabEntry *entry;
    struct LdatabEntry *new_entry;
    struct LdatabEntry *prev_entry;
    int hash;
    int cmp;

    hash = var.blockno % 3113;
    if (hash < 0) {
        // never happens (var.blockno is unsigned)
        hash += 3113;
    }

    entry = ldatab[hash];

    if (entry == NULL) {
        new_entry = (struct LdatabEntry *)alloc_new(sizeof(struct LdatabEntry), &lda_heap);
        ldatab[hash] = new_entry;
        new_entry->var = var;
        new_entry->size = size;
        new_entry->next = NULL;
        return;
    }

    cmp = compareloc(var, entry->var, size, entry->size);
    switch (cmp) {
        case 2:
            new_entry = (struct LdatabEntry *)alloc_new(sizeof(struct LdatabEntry), &lda_heap);
            new_entry->var = var;
            new_entry->size = size;
            new_entry->next = entry;
            ldatab[hash] = new_entry;
            return;
        case 1:
            do {
                prev_entry = entry;
                entry = entry->next;
                if (entry == NULL) {
                    cmp = 2;
                } else {
                    cmp = compareloc(var, entry->var, size, entry->size);
                }
            } while (cmp == 1);
            break;
        case 0:
            break;
        default:
            caseerror(1, 532, "uoptppss.p", 10);
            return;
    }

    if (cmp != 0) {
        new_entry = (struct LdatabEntry *)alloc_new(sizeof(struct LdatabEntry), &lda_heap);
        prev_entry->next = new_entry;
        new_entry->var = var;
        new_entry->size = size;
        new_entry->next = entry;
        return;
    }
    if (size == 0x7FFFFFFF) {
        entry->size = 0x7FFFFFFF;
    } else if (entry->size != 0x7FFFFFFF) {
        if (entry->var.addr + entry->size < var.addr + size) {
            entry->size = var.addr + size - entry->var.addr;
        }
    }
    if (var.addr < entry->var.addr) {
        entry->var.addr = var.addr;
        entry->size = entry->var.addr + entry->size - var.addr;
    }
}

/*
0045A480 oneinstruction
*/
bool insertcallee(struct Proc *proc, struct ProcList **callee_list) {
    struct ProcList *entry;
    struct ProcList *current;
    struct ProcList *next;

    if (*callee_list == NULL) {
        *callee_list = (struct ProcList *)alloc_new(sizeof(struct ProcList), &perm_heap);
        (*callee_list)->next = NULL;
        (*callee_list)->proc = proc;
        return true;
    }

    if (proc->id < (*callee_list)->proc->id) {
        entry = (struct ProcList *)alloc_new(sizeof(struct ProcList), &perm_heap);
        entry->proc = proc;
        entry->next = *callee_list;
        *callee_list = entry;
        return true;
    }

    if (proc->id > (*callee_list)->proc->id) {
        current = *callee_list;
        next = current->next;
        while (next != NULL && next->proc->id < proc->id) {
            current = current->next;
            next = next->next;
        }
        if (next == NULL || proc->id < next->proc->id) {
            entry = (struct ProcList *)alloc_new(sizeof(struct ProcList), &perm_heap);
            entry->next = next;
            entry->proc = proc;
            current->next = entry;
            return true;
        }
    }

    return false; // already in list
}

/*
0045A480 oneinstruction
*/
void check_gp_relative(void) {
    if (o3opt) {
        if (((LEXLEV >> 4) & 0xf) == 2) {
            enter_gp_rel_tab(IONE);
        }
    } else {
        if (LENGTH != 0 && g_num >= LENGTH) {
            enter_gp_rel_tab(IONE);
        }
    }
}

/*
0045B508 oneprocprepass
0045C150 prepass
*/
void oneinstruction(void) {
    struct Proc *proc;
    struct VariableInner var;
    struct Label *label;
    bool lexlev1;
    bool unk;

    switch (OPC) {
        case Ubgn:
            if (u.intarray[2] != 7 || u.intarray[3] != 10) {
            }
            break;

        case Uoptn:
            if (IONE == UCO_VARARGS) {
                var.memtype = Pmt;
                var.blockno = curproc->id;
                var.addr = LENGTH;
                insertvar(var, 8000, Ldt, &curproc->vartree, false, true, false);
                curproc->unkB = true;
            } else if (IONE == UCO_SOURCE && !fortran_lang) {
                switch (LENGTH) {
                    case PASCAL_SOURCE:
                        lang = LANG_PASCAL;
                        break;
                    case FORTRAN_SOURCE:
                        lang = LANG_FORTRAN;
                        break;
                    case C_SOURCE:
                        lang = LANG_C;
                        break;
                    case ADA_SOURCE:
                        lang = LANG_ADA;
                        break;
                    case PL1_SOURCE:
                        lang = LANG_PL1;
                        break;
                    case COBOL_SOURCE:
                        lang = LANG_COBOL;
                        break;
                    case RESERVED1_SOURCE:
                        lang = LANG_RESERVED1;
                        break;
                    default:
                        caseerror(1, 659, "uoptppss.p", 10);
                        break;
                }
            }
            break;

        case Ucsym:
            var.memtype = Smt;
            var.blockno = IONE;
            var.addr = 0;
            if (lang == LANG_FORTRAN || (lang == LANG_PASCAL && nopalias)) {
                if (!nof77alias) {
                    insertlda(var, LENGTH);
                }
            } else {
                insertlda(var, LENGTH);
            }
            check_gp_relative();
            break;

        case Ulsym:
        case Uksym:
            check_gp_relative();
            break;

        case Ufsym:
            enterfsymtab(IONE);
            check_gp_relative();
            break;

        case Uesym:
        case Ugsym:
            var.memtype = Smt;
            var.addr = 0;
            var.blockno = IONE;
            if (LENGTH == 0) {
                insertlda(var, 0x7FFFFFFF);
            } else {
                insertlda(var, LENGTH);
            }
            check_gp_relative();
            break;

        case Usdef:
            if (!o3opt && LENGTH != 0 && g_num >= LENGTH) {
                enter_gp_rel_tab(IONE);
            }
            break;

        case Updef:
            break;

        case Uvreg:
            var.memtype = MTYPE;
            var.blockno = IONE;
            var.addr = OFFSET;
            insertvar(var, LENGTH, DTYPE, &curproc->vartree, false, false, true);
            break;

        case Ustr:
        case Uisld:
        case Uisst:
        case Ulod:
            var.memtype = MTYPE;
            var.blockno = IONE;
            var.addr = OFFSET;
            if (var.memtype == Rmt) {
                var.blockno = 0;
            }
            lexlev1 = IS_VOLATILE_ATTR(LEXLEV);
            unk = lexlev1 || (in_exception_block > 0 && MTYPE != Rmt);
            insertvar(var, LENGTH, DTYPE, &curproc->vartree, OPC == Uisld || OPC == Ulod, unk, MTYPE == Rmt);
            if (OPC == Uisld || OPC == Ulod) {
                curproc->bvsize++;
            }
            break;

        case Uldap:
        case Uldsp:
            var.memtype = Rmt;
            var.blockno = OPC == Uldap;
            var.addr = r_sp;
            insertvar(var, 4, Adt, &curproc->vartree, true, true, false);
            break;

        case Uilda:
        case Ulda:
            var.memtype = MTYPE;
            var.blockno = IONE;
            var.addr = OFFSET2;
            if (var.memtype == Rmt) {
                var.blockno = 0;
            }
            if (lang == LANG_ADA && LENGTH == -1) {
                if (var.memtype == Mmt) {
                    LENGTH = -4 - OFFSET;
                    var.addr = OFFSET;
                } else {
                    LENGTH = 0x7FFFFFFF;
                }
            }
            insertlda(var, LENGTH);
            break;

        case Ucup:
            proc = searchproc(IONE, LEXLEV);
            insertcallee(proc, &curproc->callees);
            if (!proc->unk8 || proc == curproc) {
                proc->o3opt = false;
            }
            if ((LEXLEV & NOSIDEEFFECT_ATTR) && (lang == LANG_FORTRAN || lang == LANG_C || lang == LANG_PL1 || lang == LANG_COBOL)) {
                proc->no_sideeffects = true;
            }
            if (LEXLEV & GOTO_ATTR) {
                curproc->nonlocal_goto = true;
            }
            curproc->num_bbs++;
            break;

        case Urcuf:
        case Uicuf:
            insertcallee(indirprocs, &curproc->callees);
            curproc->num_bbs++;
            break;

        case Ucia:
            curproc->num_bbs++;
            if (lang == LANG_ADA && o3opt && (LEXLEV & 1)) {
                o3opt = false;
                change_to_o2(prochead);
                if (warn_flag != 1) {
                    writeln(err.c_file);
                    write_string(err.c_file, "uopt: Warning: optimization level lowered from O3 to O2 due to presence of calls in inline assembler text", 105, 105);
                    writeln(err.c_file);
                    fflush(err.c_file);
                    warned = true;
                }
                // why isn't insertcallee called here?
            } else if (LEXLEV & 1) {
                insertcallee(indirprocs, &curproc->callees);
            }
            break;

        case Uldc:
            if (DTYPE == Gdt) {
                updatelab(CONSTVAL.swpart.Ival, &curproc->labels, true);
            } else if (DTYPE == Fdt) {
                proc = searchproc(CONSTVAL.swpart.Ival, 2);
                proc->unkB = true;
                proc->unkD = true;
                insertcallee(proc, &curproc->callees);
            }
            break;

        case Uinit:
            if (DTYPE == Fdt) {
                proc = searchproc(INITVAL.swpart.Ival, 2);
                proc->unkB = true;
                proc->unkD = true;
                if (lang == LANG_FORTRAN) {
                    del_fsymtab(INITVAL.swpart.Ival);
                }
            }
            break;

        case Ulab:
        case Uldef:
        case Uclab:
            if (maxlabnam < IONE) {
                maxlabnam = IONE;
            }
            if (OPC == Ulab) {
                unk = LEXLEV != 0;
                curproc->num_bbs++;
                if (LEXLEV & 7) {
                    curproc->unk14 = true;
                }
                if (!unk) {
                    unk = LENGTH != 0;
                }
                label = updatelab(IONE, &curproc->labels, unk);
                if (lab_just_defined != 0 && LEXLEV == 0 && LENGTH == 0) {
                    label->len = lab_just_defined;
                    updatelab(lab_just_defined, &curproc->labels, true);
                } else {
                    lab_just_defined = IONE;
                }
                if ((lang == LANG_ADA || lang == LANG_C) && IS_EXCEPTION_ATTR(LEXLEV)) {
                    in_exception_block++;
                }
                if ((lang == LANG_ADA || lang == LANG_C) && IS_EXCEPTION_END_ATTR(LEXLEV)) {
                    in_exception_block--;
                }
                if (lang == LANG_C && (LEXLEV & 0x80)) {
                    in_exception_frame++;
                }
                if (lang == LANG_C && (LEXLEV & 0x100)) {
                    in_exception_frame--;
                }
            } else if (OPC == Uldef) {
                updatelab(IONE, &curproc->labels, true)->len = 0;
            }
            if (OPC == Ulab || OPC == Uldef) {
                if (LEXLEV & IJP_ATTR) {
                    insertijplab(IONE, &curproc->ijp_labels);
                }
            }
            break;

        case Utjp:
        case Ufjp:
        case Uxjp:
            curproc->num_bbs++;
            break;

        case Uaent:
            curproc->unkB = true;
            curproc->unkD = true;
            break;

        case Utpeq:
        case Utpge:
        case Utpgt:
        case Utple:
        case Utplt:
        case Utpne:
            curproc->unk15 = true;
            break;

        case Uaos:
            someusefp = true;
            break;

        case Uilod:
        case Uistr:
            curproc->unk38 = MAX(OFFSET, curproc->unk38);
            break;
    }

    if (OPC == Ufjp || OPC == Utjp || OPC == Uujp) {
        updatelab(IONE, &curproc->labels, true);
    } else if (OPC == Uxjp) {
        updatelab(LENGTH, &curproc->labels, true);
    }

    switch (OPC) {
        case Ulab:
        case Ulbdy:
        case Ulbgn:
        case Ulend:
        case Ultrm:
            break;

        default:
            lab_just_defined = 0;
            break;
    }
}

/*
0045C150 prepass
*/
void oneprocprepass(void) {
    struct VariableInner var;
    struct ProcList *callees;
    int i;
    int len;

    curproc = searchproc(IONE, LEXLEV);
    curproc->unk8 = true;
    if (!curproc->unkB && IS_EXTERNAL_ATTR(EXTRNAL)) {
        curproc->unkB = true;
        curproc->unkD = true;
    }
    if (!someusefp) {
        someusefp = IS_FRAMEPTR_ATTR(EXTRNAL);
    }
    in_exception_block = 0;
    if ((lang == LANG_ADA || lang == LANG_PL1 || lang == LANG_COBOL) && !IS_EXTERNAL_ATTR(EXTRNAL)) {
        var.memtype = Mmt;
        var.blockno = IONE;
        var.addr = -4;
        insertvar(var, 4, Adt, &curproc->vartree, true, false, true);
    }
    readuinstr(&u, ustrptr);
    if (OPC == Ueof) {
        write_string(err.c_file, "uopt: Error: unexpected EOF in input ucode; giving up..", 55, 55);
        writeln(err.c_file);
        fflush(err.c_file);
        abort();
    }
    len = CONSTVAL.swpart.Ival;
    for (i = 0; i < len; i++) {
        entnam0[i] = ustrptr[i];
    }
    entnam0len = len;
    while (entnam0[len - 1] == ' ') {
        entnam0len = --len;
    }
    lab_just_defined = 0;
    readuinstr(&u, ustrptr);
    if (OPC == Ueof) {
        write_string(err.c_file, "uopt: Error: unexpected EOF in input ucode; giving up...", 56, 56);
        writeln(err.c_file);
        fflush(err.c_file);
        abort();
    }
    while (OPC != Uend) {
        oneinstruction();
        readuinstr(&u, ustrptr);
        if (OPC == Ueof) {
            write_string(err.c_file, "uopt: Error: unexpected EOF in input ucode; giving up....", 57, 57);
            writeln(err.c_file);
            fflush(err.c_file);
            abort();
        }
    }
    if (sizethreshold < curproc->num_bbs || (ctrl_head != NULL && proc_suppressed())) {
        curproc->unkB = true;
        curproc->unkD = true;
        callees = curproc->callees;
        while (callees != NULL) {
            callees->proc->unkB = true;
            callees->proc->unkD = true;
            callees = callees->next;
        }
    }
}

/*
0045BBEC func_0045BBEC
*/
bool mergecallees(struct ProcList **dest, struct ProcList *src) {
    struct ProcList *prev;
    struct ProcList *next;
    struct ProcList *new_entry;
    bool ret;

    if (src->proc->id < (*dest)->proc->id) {
        new_entry = (struct ProcList *)alloc_new(sizeof(struct ProcList), &perm_heap);
        new_entry->proc = src->proc;
        new_entry->next = *dest;
        next = *dest;
        *dest = new_entry;
        src = src->next;
        prev = new_entry;
        ret = true;
    } else {
        if (src->proc->id == (*dest)->proc->id) {
            src = src->next;
        }
        next = (*dest)->next;
        prev = *dest;
        ret = false;
    }

    while (src != NULL && next != NULL) {
        if (src->proc->id >= next->proc->id) {
            if (src->proc->id == next->proc->id) {
                src = src->next;
            }
            prev = next;
            next = next->next;
        } else {
            new_entry = (struct ProcList *)alloc_new(sizeof(struct ProcList), &perm_heap);
            prev->next = new_entry;
            new_entry->next = next;
            new_entry->proc = src->proc;
            src = src->next;
            prev = new_entry;
            ret = true;
        }
    }

    if (next == NULL && src != NULL) {
        do {
            new_entry = (struct ProcList *)alloc_new(sizeof(struct ProcList), &perm_heap);
            prev->next = new_entry;
            new_entry->proc = src->proc;
            src = src->next;
            prev = new_entry;
        } while (src != NULL);
        new_entry->next = NULL;
        ret = true;
    }

    return ret;
}

/*
0045BB1C func_0045BB1C
0045BE98 processcallgraph
*/
static void func_0045BB1C(struct Proc *proc) { // originally embedded function
    struct ProcList *callee;
    bool stop = false;

    if (proc != NULL) {
        callee = proc->callees;
        while (!stop && callee != NULL) {
            if (!callee->proc->unk8 && proc->level < callee->proc->level) {
                proc->unkA = true;
                stop = true;
            } else {
                callee = callee->next;
            }
        }
        func_0045BB1C(proc->left);
        func_0045BB1C(proc->right);
    }
}

/*
0045BBEC func_0045BBEC
0045BE98 processcallgraph
*/
static void func_0045BBEC(struct Proc *proc, bool *merge_callees_result) { // originally embedded function
    struct ProcList *callee;

    if (proc != NULL) {
        callee = proc->callees;
        while (callee != NULL) {
            if (callee->proc->callees != NULL && mergecallees(&proc->callees, callee->proc->callees)) {
                *merge_callees_result = true;
            }
            callee = callee->next;
        }
        func_0045BBEC(proc->left, merge_callees_result);
        func_0045BBEC(proc->right, merge_callees_result);
    }
}

/*
0045BCA8 func_0045BCA8
0045BE98 processcallgraph
*/
static void func_0045BCA8(struct Proc *proc, int *regs_counter) { // originally embedded function
    struct ProcList *callee;
    struct RegstakenParregs *regs;
    int i;
    bool stop;

    if (proc != NULL) {
        if (proc->o3opt) {
            proc->o3opt = !proc->unkB;
        }
        if (proc->o3opt) {
            regs = (struct RegstakenParregs *)alloc_new(sizeof(struct RegstakenParregs), &perm_heap);
            proc->regstaken_parregs = regs;
            *regs_counter = 1;
            for (i = 1; i <= 35; i++) {
                regs->regstaken[i - 1] = false;
                regs->parregs[i - 1] = -1;
                *regs_counter = i + 1;
            }
        } else {
            proc->regstaken_parregs = NULL;
        }
        if (proc->unkD) {
            for (callee = proc->callees; callee != NULL; callee = callee->next) {
                callee->proc->unkD = true;
            }
        }
        stop = !proc->unk8;
        proc->unk9 = stop;
        callee = proc->callees;
        while (!stop && callee != NULL) {
            if (!callee->proc->unk8) {
                proc->unk9 = true;
                stop = true;
            } else {
                callee = callee->next;
            }
        }

        if (lang == LANG_PASCAL) {
            stop = proc->nonlocal_goto;
            callee = proc->callees;
            while (!stop && callee != NULL) {
                if (callee->proc->nonlocal_goto) {
                    proc->nonlocal_goto = true;
                    stop = true;
                } else {
                    callee = callee->next;
                }
            }
        }
        func_0045BCA8(proc->left, regs_counter);
        func_0045BCA8(proc->right, regs_counter);
    }
}

/*
0045C150 prepass
*/
void processcallgraph(void) {
    bool merge_callees_result;
    int regs_counter;

    if (lang == LANG_ADA) {
        func_0045BB1C(prochead);
    }
    do {
        merge_callees_result = false;
        func_0045BBEC(prochead, &merge_callees_result);
    } while (merge_callees_result);
    func_0045BCA8(prochead, &regs_counter);
}

/*
0045BF44 checkforvreg
0045C0E0 findallvregs
*/
void checkforvreg(struct Variable *var) {
    struct LdatabEntry *entry;
    int hash;
    bool stop;
    unsigned char cmp;

    if (var != NULL) {
        if (!var->unk1 && !var->unk2) {
            hash = var->inner.blockno % 3113;
            if (hash < 0) {
                hash += 3113; // dead code
            }
            entry = ldatab[hash];
            stop = false;
            while (!stop && entry != NULL) {
                cmp = compareloc(var->inner, entry->var, var->size, entry->size);
                if (cmp != 1) {
                    stop = true;
                } else {
                    entry = entry->next;
                }
            }
            var->unk2 = !stop || cmp == 2;
        }
        checkforvreg(var->left);
        checkforvreg(var->right);
    }
}

/*
0045C0E0 findallvregs
0045C150 prepass
*/
void findallvregs(struct Proc *proc) {
    if (proc != NULL) {
        checkforvreg(proc->vartree);
        findallvregs(proc->left);
        findallvregs(proc->right);
    }
}

/*
0043771C optinit
*/
void prepass(void) {
    struct AllocBlock *lda_heap_mark;
    struct Proc *proc;

    maxlabnam = 0;
    someusefp = false;
    inlopt = false;

    lda_heap_mark = alloc_mark(&lda_heap);

    memset(ldatab, 0, sizeof(ldatab));
    memset(fsymtab, 0, sizeof(fsymtab));
    memset(gp_rel_tab, 0, sizeof(gp_rel_tab));

    prochead = NULL;

    proc = (struct Proc *)alloc_new(sizeof(struct Proc), &perm_heap);
    indirprocs = proc;
    proc->id = -1;
    proc->vartree = NULL;
    proc->labels = NULL;
    proc->unk8 = false;
    proc->unkB = true;
    proc->o3opt = false;
    proc->unkD = true;
    proc->no_sideeffects = false;
    proc->nonlocal_goto = false;
    proc->unk14 = false;
    proc->unk15 = false;
    proc->unk9 = true;
    proc->unkA = true;
    proc->level = 2;
    proc->num_bbs = 0;
    proc->callees = NULL;
    proc->ijp_labels = NULL;
    proc->bvsize = 0;
    proc->feedback_data = NULL;
    proc->unk38 = 0;
    proc->left = NULL;
    proc->right = NULL;

    proc = (struct Proc *)alloc_new(sizeof(struct Proc), &perm_heap);
    ciaprocs = proc;
    proc->id = -1;
    proc->vartree = NULL;
    proc->labels = NULL;
    proc->unk8 = false;
    proc->unkB = true;
    proc->o3opt = false;
    proc->unkD = true;
    proc->no_sideeffects = false;
    proc->nonlocal_goto = false;
    proc->unk14 = false;
    proc->unk15 = false;
    proc->unk9 = true;
    proc->unkA = true;
    proc->level = 2;
    proc->num_bbs = 0;
    proc->callees = NULL;
    proc->ijp_labels = NULL;
    proc->bvsize = 0;
    proc->feedback_data = NULL;
    proc->unk38 = 0;
    proc->left = NULL;
    proc->right = NULL;

    readuinstr(&u, ustrptr);

    while (OPC != Ueof && OPC != Ustp) {
        while (OPC != Uent && OPC != Ustp) {
            oneinstruction();
            readuinstr(&u, ustrptr);
            if (OPC == Ueof) {
                write_string(err.c_file, "uopt: Error: unexpected EOF in input ucode; giving up.....", 58, 58);
                writeln(err.c_file);
                fflush(err.c_file);
                abort();
            }
        }

        if (OPC == Uent) {
            oneprocprepass();
            readuinstr(&u, ustrptr);
        }
    }
    processcallgraph();
    findallvregs(prochead);
    alloc_release(&lda_heap, lda_heap_mark);
    initur(sourcename);
}

/*
0044B4F4 clkilled
0044BDFC cskilled
0045C620 furthervarintree
*/
bool varintree(struct VariableInner var, struct Variable *tree) {
    while (tree != NULL) {
        switch (compareaddr(var, tree->inner)) {
            case 0:
                return true;
            case 1:
                tree = tree->left;
                break;
            case 2:
                tree = tree->right;
                break;
            default:
                caseerror(1, 1265, "uoptppss.p", 10);
                break;
        }
    }
    return false;
}

/*
0042020C gen_static_link
0044B4F4 clkilled
0044BDFC cskilled
*/
bool furthervarintree(struct Expression *expr, struct Proc *proc) {
    struct VariableInner var;
    struct ProcList *callee;
    bool result;

    var = expr->data.isvar_issvar.var_data;
    callee = proc->callees;
    result = false;

    while (!result && callee != NULL) {
        if (indirprocs == callee->proc) {
            result = true;
        } else if (expr->data.isvar_issvar.var_data.level < callee->proc->level) {
            result = varintree(var, callee->proc->vartree);
        }
        callee = callee->next;
    }

    return result;
}

/*
004175BC copypropagate
0043CFCC readnxtinst
004494A4 aliaswithptr
0044B4F4 clkilled
0044BD00 cmkilled
0044BDFC cskilled
00455518 func_00455518
00458998 func_00458998
*/
bool in_fsym(int num) {
    struct NumLinkedList *entry;
    int hash;
    bool stop = false;

    hash = num % 161;
    if (hash < 0) {
        hash += 161;
    }

    entry = fsymtab[hash];

    while (!stop && entry != NULL) {
        if (entry->num >= num) {
            stop = true;
        } else {
            entry = entry->next;
        }
    }

    return stop && entry->num == num;
}

/*
0043CFCC readnxtinst
00451764 restructure
00452DAC constarith
*/
bool is_gp_relative(int num) {
    struct NumLinkedList *entry;
    int hash;
    bool stop = false;

    hash = num % 161;
    if (hash < 0) {
        hash += 161;
    }

    entry = gp_rel_tab[hash];

    while (!stop && entry != NULL) {
        if (entry->num >= num) {
            stop = true;
        } else {
            entry = entry->next;
        }
    }

    return stop && entry->num == num;
}

/*
00456A2C oneproc
0045B508 oneprocprepass
*/
bool proc_suppressed(void) {
    struct StrList *entry = ctrl_head;
    bool result = false;
    int i;

    while (!result && entry != NULL) {
        if (entnam0len == entry->len) {
            result = true;
            i = 0;
            while (result && i < entnam0len) {
                if (entnam0[i] == entry->str[i]) {
                    i++;
                } else {
                    result = false;
                }
            }
        }
        entry = entry->next;
    }

    return result;
}
