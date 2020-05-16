#include <stdlib.h>
#include <string.h>
#include "libp/libp.h"
#include "libxmalloc/xmalloc.h"
#include "libu/libu.h"
#include "uoptdata.h"
#include "uoptppss.h"
#include "uoptutil.h"
#include "uoptkill.h"

__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm
)"");

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
    if (a.unk4bFFFFF800 < b.unk4bFFFFF800) {
        return 1;
    }
    if (a.unk4bFFFFF800 > b.unk4bFFFFF800) {
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
    if (a.unk4bFFFFF800 < b.unk4bFFFFF800) {
        return 1;
    }
    if (a.unk4bFFFFF800 > b.unk4bFFFFF800) {
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
struct Proc *searchproc(int id, int arg1) {
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
        new_proc->unkB = lang == 5;
        new_proc->unkD = lang == 5;
        new_proc->unkE = 0;
        new_proc->unkF = 0;
        new_proc->unk14 = 0;
        new_proc->unk15 = 0;
        new_proc->num_bbs = 0;
        new_proc->ijp_labels = NULL;
        new_proc->bvsize = 0;
        new_proc->unk34 = NULL;
        new_proc->unk38 = 0;
        new_proc->unk10 = arg1;
        new_proc->o3opt = o3opt;

        pos = new_proc;
    } else if (arg1 != 2 && pos->unk10 == 2) {
        pos->unk10 = arg1;
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
                if (!label->unk8 && (u.Ucode.Opc == Ufjp || u.Ucode.Opc == Utjp)) {
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
    struct TableEntry *entry;
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
        entry->unk10 = 0;
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
struct Variable *insertvar(struct VariableInner var, int size, Datatype dtype, struct Variable **pos, bool arg5_unused, bool arg6, bool arg7) {
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

    hash = var.unk4bFFFFF800 % 3113;
    if (hash < 0) {
        // never happens (var.unk4bFFFFF800 is unsigned)
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
        if (((u.Ucode.Lexlev >> 4) & 0xf) == 2) {
            enter_gp_rel_tab(u.Ucode.I1);
        }
    } else {
        if (u.intarray[2] != 0 && g_num >= u.intarray[2]) {
            enter_gp_rel_tab(u.Ucode.I1);
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

    switch (u.Ucode.Opc) {
        case Ubgn:
            if (u.intarray[2] != 7 || u.intarray[3] != 10) {
            }
            break;

        case Uoptn:
            if (u.Ucode.I1 == 1) {
                var.memtype = Pmt;
                var.unk4bFFFFF800 = curproc->id;
                var.addr = u.intarray[2];
                insertvar(var, 8000, Ldt, &curproc->vartree, false, true, false);
                curproc->unkB = true;
            } else if (u.Ucode.I1 == 0 && !fortran_lang) {
                switch (u.intarray[2] - 1) {
                    case 0:
                        lang = 0;
                        break;
                    case 1:
                        lang = 1;
                        break;
                    case 2:
                        lang = 2;
                        break;
                    case 3:
                        lang = 3;
                        break;
                    case 4:
                        lang = 4;
                        break;
                    case 5:
                        lang = 5;
                        break;
                    case 6:
                        lang = 6;
                        break;
                    default:
                        caseerror(1, 659, "uoptppss.p", 10);
                        break;
                }
            }
            break;

        case Ucsym:
            var.memtype = Smt;
            var.unk4bFFFFF800 = u.Ucode.I1;
            var.addr = 0;
            if (lang == 1 || (lang == 0 && nopalias)) {
                if (!nof77alias) {
                    insertlda(var, u.intarray[2]);
                }
            } else {
                insertlda(var, u.intarray[2]);
            }
            check_gp_relative();
            break;

        case Ulsym:
        case Uksym:
            check_gp_relative();
            break;

        case Ufsym:
            enterfsymtab(u.Ucode.I1);
            check_gp_relative();
            break;

        case Uesym:
        case Ugsym:
            var.memtype = Smt;
            var.addr = 0;
            var.unk4bFFFFF800 = u.Ucode.I1;
            if (u.intarray[2] == 0) {
                insertlda(var, 0x7FFFFFFF);
            } else {
                insertlda(var, u.intarray[2]);
            }
            check_gp_relative();
            break;

        case Usdef:
            if (!o3opt && u.intarray[2] != 0 && g_num >= u.intarray[2]) {
                enter_gp_rel_tab(u.Ucode.I1);
            }
            break;

        case Updef:
            break;

        case Uvreg:
            var.memtype = u.Ucode.Mtype;
            var.unk4bFFFFF800 = u.Ucode.I1;
            var.addr = u.intarray[3];
            insertvar(var, u.intarray[2], u.Ucode.Dtype, &curproc->vartree, false, false, true);
            break;

        case Ustr:
        case Uisld:
        case Uisst:
        case Ulod:
            var.memtype = u.Ucode.Mtype;
            var.unk4bFFFFF800 = u.Ucode.I1;
            var.addr = u.intarray[3];
            if (var.memtype == Rmt) {
                var.unk4bFFFFF800 = 0;
            }
            lexlev1 = (u.Ucode.Lexlev & 1) != 0;
            unk = lexlev1 || (in_exception_block > 0 && u.Ucode.Mtype != Rmt);
            insertvar(var, u.intarray[2], u.Ucode.Dtype, &curproc->vartree, u.Ucode.Opc == Uisld || u.Ucode.Opc == Ulod, unk, u.Ucode.Mtype == Rmt);
            if (u.Ucode.Opc == Uisld || u.Ucode.Opc == Ulod) {
                curproc->bvsize++;
            }
            break;

        case Uldap:
        case Uldsp:
            var.memtype = Rmt;
            var.unk4bFFFFF800 = u.Ucode.Opc == Uldap;
            var.addr = 29;
            insertvar(var, 4, Adt, &curproc->vartree, true, true, false);
            break;

        case Uilda:
        case Ulda:
            var.memtype = u.Ucode.Mtype;
            var.unk4bFFFFF800 = u.Ucode.I1;
            var.addr = u.intarray[4];
            if (var.memtype == Rmt) {
                var.unk4bFFFFF800 = 0;
            }
            if (lang == 3 && u.intarray[2] == -1) {
                if (var.memtype == Mmt) {
                    u.intarray[2] = -4 - u.intarray[3];
                    var.addr = u.intarray[3];
                } else {
                    u.intarray[2] = 0x7FFFFFFF;
                }
            }
            insertlda(var, u.intarray[2]);
            break;

        case Ucup:
            proc = searchproc(u.Ucode.I1, u.Ucode.Lexlev);
            insertcallee(proc, &curproc->callees);
            if (!proc->unk8 || proc == curproc) {
                proc->o3opt = false;
            }
            if ((u.intarray[3] & NOSIDEEFFECT_ATTR) && (lang == 1 || lang == 2 || lang == 4 || lang == 5)) {
                proc->unkE = true;
            }
            if (u.intarray[3] & GOTO_ATTR) {
                curproc->unkF = true;
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
            if (lang == 3 && o3opt && (u.Ucode.Lexlev & 1)) {
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
            } else if (u.Ucode.Lexlev & 1) {
                insertcallee(indirprocs, &curproc->callees);
            }
            break;

        case Uldc:
            if (u.Ucode.Dtype == Gdt) {
                updatelab(u.intarray[4], &curproc->labels, true);
            } else if (u.Ucode.Dtype == Fdt) {
                proc = searchproc(u.intarray[4], 2);
                proc->unkB = true;
                proc->unkD = true;
                insertcallee(proc, &curproc->callees);
            }
            break;

        case Uinit:
            if (u.Ucode.Dtype == Fdt) {
                proc = searchproc(u.Ucode.Uopcde.uiequ1.uop2.uinit.initval.swpart.Ival, 2);
                proc->unkB = true;
                proc->unkD = true;
                if (lang == 1) {
                    del_fsymtab(u.Ucode.Uopcde.uiequ1.uop2.uinit.initval.swpart.Ival);
                }
            }
            break;

        case Ulab:
        case Uldef:
        case Uclab:
            if (maxlabnam < u.Ucode.I1) {
                maxlabnam = u.Ucode.I1;
            }
            if (u.Ucode.Opc == Ulab) {
                unk = u.Ucode.Lexlev != 0;
                curproc->num_bbs++;
                if (u.Ucode.Lexlev & 7) {
                    curproc->unk14 = true;
                }
                if (!unk) {
                    unk = u.intarray[2] != 0;
                }
                label = updatelab(u.Ucode.I1, &curproc->labels, unk);
                if (lab_just_defined != 0 && u.Ucode.Lexlev == 0 && u.intarray[2] == 0) {
                    label->len = lab_just_defined;
                    updatelab(lab_just_defined, &curproc->labels, true);
                } else {
                    lab_just_defined = u.Ucode.I1;
                }
                if ((lang == 3 || lang == 2) && (u.Ucode.Lexlev & EXCEPTION_ATTR)) {
                    in_exception_block++;
                }
                if ((lang == 3 || lang == 2) && (u.Ucode.Lexlev & EXCEPTION_END_ATTR)) {
                    in_exception_block--;
                }
                if (lang == 2 && (u.Ucode.Lexlev & 0x80)) {
                    in_exception_frame++;
                }
                if (lang == 2 && (u.Ucode.Lexlev & 0x100)) {
                    in_exception_frame--;
                }
            } else if (u.Ucode.Opc == Uldef) {
                updatelab(u.Ucode.I1, &curproc->labels, true)->len = 0;
            }
            if (u.Ucode.Opc == Ulab || u.Ucode.Opc == Uldef) {
                if (u.Ucode.Lexlev & IJP_ATTR) {
                    insertijplab(u.Ucode.I1, &curproc->ijp_labels);
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
            curproc->unk38 = MAX(u.intarray[3], curproc->unk38);
            break;
    }

    if (u.Ucode.Opc == Ufjp || u.Ucode.Opc == Utjp || u.Ucode.Opc == Uujp) {
        updatelab(u.Ucode.I1, &curproc->labels, true);
    } else if (u.Ucode.Opc == Uxjp) {
        updatelab(u.intarray[2], &curproc->labels, true);
    }

    switch (u.Ucode.Opc) {
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

    curproc = searchproc(u.Ucode.I1, u.Ucode.Lexlev);
    curproc->unk8 = true;
    if (!curproc->unkB && IS_EXTERNAL_ATTR(u.Ucode.Uopcde.uent.Extrnal)) {
        curproc->unkB = true;
        curproc->unkD = true;
    }
    if (!someusefp) {
        someusefp = IS_FRAMEPTR_ATTR(u.Ucode.Uopcde.uent.Extrnal);
    }
    in_exception_block = 0;
    if ((lang == 3 || lang == 4 || lang == 5) && !IS_EXTERNAL_ATTR(u.Ucode.Uopcde.uent.Extrnal)) {
        var.memtype = Mmt;
        var.unk4bFFFFF800 = u.Ucode.I1;
        var.addr = -4;
        insertvar(var, 4, Adt, &curproc->vartree, true, false, true);
    }
    readuinstr(&u, ustrptr);
    if (u.Ucode.Opc == Ueof) {
        write_string(err.c_file, "uopt: Error: unexpected EOF in input ucode; giving up..", 55, 55);
        writeln(err.c_file);
        fflush(err.c_file);
        abort();
    }
    len = u.Ucode.Uopcde.uiequ1.uop2.Constval.swpart.Ival;
    for (i = 0; i < len; i++) {
        entnam0[i] = ustrptr[i];
    }
    while (entnam0[len - 1] == ' ') {
        entnam0len = --len;
    }
    lab_just_defined = 0;
    readuinstr(&u, ustrptr);
    if (u.Ucode.Opc == Ueof) {
        write_string(err.c_file, "uopt: Error: unexpected EOF in input ucode; giving up...", 56, 56);
        writeln(err.c_file);
        fflush(err.c_file);
        abort();
    }
    while (u.Ucode.Opc != Uend) {
        oneinstruction();
        readuinstr(&u, ustrptr);
        if (u.Ucode.Opc == Ueof) {
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

__asm__(R""(
.set noat
.set noreorder

    .type func_0045BB1C, @function
func_0045BB1C:
    # 0045BB1C func_0045BB1C
    # 0045BE98 processcallgraph
/* 0045BB1C 3C1C0FBC */  .cpload $t9
/* 0045BB20 279CE774 */  
/* 0045BB24 0399E021 */  
/* 0045BB28 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0045BB2C AFB2001C */  sw    $s2, 0x1c($sp)
/* 0045BB30 AFB10018 */  sw    $s1, 0x18($sp)
/* 0045BB34 AFB00014 */  sw    $s0, 0x14($sp)
/* 0045BB38 00808025 */  move  $s0, $a0
/* 0045BB3C 24110001 */  li    $s1, 1
/* 0045BB40 00409025 */  move  $s2, $v0
/* 0045BB44 AFBF0024 */  sw    $ra, 0x24($sp)
/* 0045BB48 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0045BB4C 12000021 */  beqz  $s0, .L0045BBD4
/* 0045BB50 300400FF */   andi  $a0, $zero, 0xff
.L0045BB54:
/* 0045BB54 A200000A */  sb    $zero, 0xa($s0)
/* 0045BB58 14800014 */  bnez  $a0, .L0045BBAC
/* 0045BB5C 8E030018 */   lw    $v1, 0x18($s0)
/* 0045BB60 10600012 */  beqz  $v1, .L0045BBAC
/* 0045BB64 00000000 */   nop   
/* 0045BB68 8C620000 */  lw    $v0, ($v1)
.L0045BB6C:
/* 0045BB6C 904E0008 */  lbu   $t6, 8($v0)
/* 0045BB70 55C0000A */  bnezl $t6, .L0045BB9C
/* 0045BB74 8C630004 */   lw    $v1, 4($v1)
/* 0045BB78 920F0010 */  lbu   $t7, 0x10($s0)
/* 0045BB7C 90580010 */  lbu   $t8, 0x10($v0)
/* 0045BB80 01F8082B */  sltu  $at, $t7, $t8
/* 0045BB84 50200005 */  beql  $at, $zero, .L0045BB9C
/* 0045BB88 8C630004 */   lw    $v1, 4($v1)
/* 0045BB8C A211000A */  sb    $s1, 0xa($s0)
/* 0045BB90 10000002 */  b     .L0045BB9C
/* 0045BB94 322400FF */   andi  $a0, $s1, 0xff
/* 0045BB98 8C630004 */  lw    $v1, 4($v1)
.L0045BB9C:
/* 0045BB9C 14800003 */  bnez  $a0, .L0045BBAC
/* 0045BBA0 00000000 */   nop   
/* 0045BBA4 5460FFF1 */  bnezl $v1, .L0045BB6C
/* 0045BBA8 8C620000 */   lw    $v0, ($v1)
.L0045BBAC:
/* 0045BBAC 8F99802C */  lw    $t9, %got(func_0045BB1C)($gp)
/* 0045BBB0 8E04002C */  lw    $a0, 0x2c($s0)
/* 0045BBB4 02401025 */  move  $v0, $s2
/* 0045BBB8 2739BB1C */  addiu $t9, %lo(func_0045BB1C) # addiu $t9, $t9, -0x44e4
/* 0045BBBC 0320F809 */  jalr  $t9
/* 0045BBC0 00000000 */   nop   
/* 0045BBC4 8E100030 */  lw    $s0, 0x30($s0)
/* 0045BBC8 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0045BBCC 5600FFE1 */  bnezl $s0, .L0045BB54
/* 0045BBD0 300400FF */   andi  $a0, $zero, 0xff
.L0045BBD4:
/* 0045BBD4 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0045BBD8 8FB00014 */  lw    $s0, 0x14($sp)
/* 0045BBDC 8FB10018 */  lw    $s1, 0x18($sp)
/* 0045BBE0 8FB2001C */  lw    $s2, 0x1c($sp)
/* 0045BBE4 03E00008 */  jr    $ra
/* 0045BBE8 27BD0028 */   addiu $sp, $sp, 0x28

    .type func_0045BBEC, @function
func_0045BBEC:
    # 0045BBEC func_0045BBEC
    # 0045BE98 processcallgraph
/* 0045BBEC 3C1C0FBC */  .cpload $t9
/* 0045BBF0 279CE6A4 */  
/* 0045BBF4 0399E021 */  
/* 0045BBF8 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0045BBFC AFB2001C */  sw    $s2, 0x1c($sp)
/* 0045BC00 AFB10018 */  sw    $s1, 0x18($sp)
/* 0045BC04 00808825 */  move  $s1, $a0
/* 0045BC08 00409025 */  move  $s2, $v0
/* 0045BC0C AFBF0024 */  sw    $ra, 0x24($sp)
/* 0045BC10 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0045BC14 AFB00014 */  sw    $s0, 0x14($sp)
/* 0045BC18 5220001E */  beql  $s1, $zero, .L0045BC94
/* 0045BC1C 8FBF0024 */   lw    $ra, 0x24($sp)
/* 0045BC20 8E220018 */  lw    $v0, 0x18($s1)
.L0045BC24:
/* 0045BC24 10400010 */  beqz  $v0, .L0045BC68
/* 0045BC28 00408025 */   move  $s0, $v0
/* 0045BC2C 8E0E0000 */  lw    $t6, ($s0)
.L0045BC30:
/* 0045BC30 8DC50018 */  lw    $a1, 0x18($t6)
/* 0045BC34 50A0000A */  beql  $a1, $zero, .L0045BC60
/* 0045BC38 8E100004 */   lw    $s0, 4($s0)
/* 0045BC3C 8F998478 */  lw    $t9, %call16(mergecallees)($gp)
/* 0045BC40 26240018 */  addiu $a0, $s1, 0x18
/* 0045BC44 0320F809 */  jalr  $t9
/* 0045BC48 00000000 */   nop   
/* 0045BC4C 10400003 */  beqz  $v0, .L0045BC5C
/* 0045BC50 8FBC0020 */   lw    $gp, 0x20($sp)
/* 0045BC54 240F0001 */  li    $t7, 1
/* 0045BC58 A24FFFFF */  sb    $t7, -1($s2)
.L0045BC5C:
/* 0045BC5C 8E100004 */  lw    $s0, 4($s0)
.L0045BC60:
/* 0045BC60 5600FFF3 */  bnezl $s0, .L0045BC30
/* 0045BC64 8E0E0000 */   lw    $t6, ($s0)
.L0045BC68:
/* 0045BC68 8F99802C */  lw    $t9, %got(func_0045BBEC)($gp)
/* 0045BC6C 8E24002C */  lw    $a0, 0x2c($s1)
/* 0045BC70 02401025 */  move  $v0, $s2
/* 0045BC74 2739BBEC */  addiu $t9, %lo(func_0045BBEC) # addiu $t9, $t9, -0x4414
/* 0045BC78 0320F809 */  jalr  $t9
/* 0045BC7C 00000000 */   nop   
/* 0045BC80 8E310030 */  lw    $s1, 0x30($s1)
/* 0045BC84 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0045BC88 5620FFE6 */  bnezl $s1, .L0045BC24
/* 0045BC8C 8E220018 */   lw    $v0, 0x18($s1)
/* 0045BC90 8FBF0024 */  lw    $ra, 0x24($sp)
.L0045BC94:
/* 0045BC94 8FB00014 */  lw    $s0, 0x14($sp)
/* 0045BC98 8FB10018 */  lw    $s1, 0x18($sp)
/* 0045BC9C 8FB2001C */  lw    $s2, 0x1c($sp)
/* 0045BCA0 03E00008 */  jr    $ra
/* 0045BCA4 27BD0028 */   addiu $sp, $sp, 0x28

    .type func_0045BCA8, @function
func_0045BCA8:
    # 0045BCA8 func_0045BCA8
    # 0045BE98 processcallgraph
/* 0045BCA8 3C1C0FBC */  .cpload $t9
/* 0045BCAC 279CE5E8 */  
/* 0045BCB0 0399E021 */  
/* 0045BCB4 27BDFFC8 */  addiu $sp, $sp, -0x38
/* 0045BCB8 AFB5002C */  sw    $s5, 0x2c($sp)
/* 0045BCBC AFB40028 */  sw    $s4, 0x28($sp)
/* 0045BCC0 AFB30024 */  sw    $s3, 0x24($sp)
/* 0045BCC4 AFB20020 */  sw    $s2, 0x20($sp)
/* 0045BCC8 AFB1001C */  sw    $s1, 0x1c($sp)
/* 0045BCCC AFB00018 */  sw    $s0, 0x18($sp)
/* 0045BCD0 00808025 */  move  $s0, $a0
/* 0045BCD4 24110001 */  li    $s1, 1
/* 0045BCD8 00409025 */  move  $s2, $v0
/* 0045BCDC 2413FFFF */  li    $s3, -1
/* 0045BCE0 24140024 */  li    $s4, 36
/* 0045BCE4 8F958A5C */  lw     $s5, %got(lang)($gp)
/* 0045BCE8 AFBF0034 */  sw    $ra, 0x34($sp)
/* 0045BCEC AFBC0030 */  sw    $gp, 0x30($sp)
/* 0045BCF0 52000061 */  beql  $s0, $zero, .L0045BE78
/* 0045BCF4 8FBF0034 */   lw    $ra, 0x34($sp)
/* 0045BCF8 9202000C */  lbu   $v0, 0xc($s0)
.L0045BCFC:
/* 0045BCFC 10400005 */  beqz  $v0, .L0045BD14
/* 0045BD00 00000000 */   nop   
/* 0045BD04 920E000B */  lbu   $t6, 0xb($s0)
/* 0045BD08 2DCF0001 */  sltiu $t7, $t6, 1
/* 0045BD0C A20F000C */  sb    $t7, 0xc($s0)
/* 0045BD10 31E200FF */  andi  $v0, $t7, 0xff
.L0045BD14:
/* 0045BD14 50400019 */  beql  $v0, $zero, .L0045BD7C
/* 0045BD18 AE000024 */   sw    $zero, 0x24($s0)
/* 0045BD1C 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 0045BD20 240400B0 */  li    $a0, 176
/* 0045BD24 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 0045BD28 0320F809 */  jalr  $t9
/* 0045BD2C 00000000 */   nop   
/* 0045BD30 24030001 */  li    $v1, 1
/* 0045BD34 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045BD38 AE020024 */  sw    $v0, 0x24($s0)
/* 0045BD3C 0003C880 */  sll   $t9, $v1, 2
/* 0045BD40 24180001 */  li    $t8, 1
/* 0045BD44 AE58FFF8 */  sw    $t8, -8($s2)
/* 0045BD48 00592821 */  addu  $a1, $v0, $t9
/* 0045BD4C 00432021 */  addu  $a0, $v0, $v1
.L0045BD50:
/* 0045BD50 A080FFFF */  sb    $zero, -1($a0)
/* 0045BD54 24680001 */  addiu $t0, $v1, 1
/* 0045BD58 24630001 */  addiu $v1, $v1, 1
/* 0045BD5C ACB30020 */  sw    $s3, 0x20($a1)
/* 0045BD60 AE48FFF8 */  sw    $t0, -8($s2)
/* 0045BD64 24840001 */  addiu $a0, $a0, 1
/* 0045BD68 1683FFF9 */  bne   $s4, $v1, .L0045BD50
/* 0045BD6C 24A50004 */   addiu $a1, $a1, 4
/* 0045BD70 10000003 */  b     .L0045BD80
/* 0045BD74 9209000D */   lbu   $t1, 0xd($s0)
/* 0045BD78 AE000024 */  sw    $zero, 0x24($s0)
.L0045BD7C:
/* 0045BD7C 9209000D */  lbu   $t1, 0xd($s0)
.L0045BD80:
/* 0045BD80 5120000A */  beql  $t1, $zero, .L0045BDAC
/* 0045BD84 920B0008 */   lbu   $t3, 8($s0)
/* 0045BD88 8E020018 */  lw    $v0, 0x18($s0)
/* 0045BD8C 50400007 */  beql  $v0, $zero, .L0045BDAC
/* 0045BD90 920B0008 */   lbu   $t3, 8($s0)
/* 0045BD94 8C4A0000 */  lw    $t2, ($v0)
.L0045BD98:
/* 0045BD98 A151000D */  sb    $s1, 0xd($t2)
/* 0045BD9C 8C420004 */  lw    $v0, 4($v0)
/* 0045BDA0 5440FFFD */  bnezl $v0, .L0045BD98
/* 0045BDA4 8C4A0000 */   lw    $t2, ($v0)
/* 0045BDA8 920B0008 */  lbu   $t3, 8($s0)
.L0045BDAC:
/* 0045BDAC 8E020018 */  lw    $v0, 0x18($s0)
/* 0045BDB0 2D6C0001 */  sltiu $t4, $t3, 1
/* 0045BDB4 318300FF */  andi  $v1, $t4, 0xff
/* 0045BDB8 1460000F */  bnez  $v1, .L0045BDF8
/* 0045BDBC A20C0009 */   sb    $t4, 9($s0)
/* 0045BDC0 5040000E */  beql  $v0, $zero, .L0045BDFC
/* 0045BDC4 92AF0000 */   lbu   $t7, ($s5)
/* 0045BDC8 8C4D0000 */  lw    $t5, ($v0)
.L0045BDCC:
/* 0045BDCC 91AE0008 */  lbu   $t6, 8($t5)
/* 0045BDD0 55C00005 */  bnezl $t6, .L0045BDE8
/* 0045BDD4 8C420004 */   lw    $v0, 4($v0)
/* 0045BDD8 A2110009 */  sb    $s1, 9($s0)
/* 0045BDDC 10000002 */  b     .L0045BDE8
/* 0045BDE0 322300FF */   andi  $v1, $s1, 0xff
/* 0045BDE4 8C420004 */  lw    $v0, 4($v0)
.L0045BDE8:
/* 0045BDE8 54600004 */  bnezl $v1, .L0045BDFC
/* 0045BDEC 92AF0000 */   lbu   $t7, ($s5)
/* 0045BDF0 5440FFF6 */  bnezl $v0, .L0045BDCC
/* 0045BDF4 8C4D0000 */   lw    $t5, ($v0)
.L0045BDF8:
/* 0045BDF8 92AF0000 */  lbu   $t7, ($s5)
.L0045BDFC:
/* 0045BDFC 15E00013 */  bnez  $t7, .L0045BE4C
/* 0045BE00 00000000 */   nop   
/* 0045BE04 9203000F */  lbu   $v1, 0xf($s0)
/* 0045BE08 8E020018 */  lw    $v0, 0x18($s0)
/* 0045BE0C 1460000F */  bnez  $v1, .L0045BE4C
/* 0045BE10 00000000 */   nop   
/* 0045BE14 1040000D */  beqz  $v0, .L0045BE4C
/* 0045BE18 00000000 */   nop   
/* 0045BE1C 8C580000 */  lw    $t8, ($v0)
.L0045BE20:
/* 0045BE20 9319000F */  lbu   $t9, 0xf($t8)
/* 0045BE24 53200005 */  beql  $t9, $zero, .L0045BE3C
/* 0045BE28 8C420004 */   lw    $v0, 4($v0)
/* 0045BE2C A211000F */  sb    $s1, 0xf($s0)
/* 0045BE30 10000002 */  b     .L0045BE3C
/* 0045BE34 322300FF */   andi  $v1, $s1, 0xff
/* 0045BE38 8C420004 */  lw    $v0, 4($v0)
.L0045BE3C:
/* 0045BE3C 14600003 */  bnez  $v1, .L0045BE4C
/* 0045BE40 00000000 */   nop   
/* 0045BE44 5440FFF6 */  bnezl $v0, .L0045BE20
/* 0045BE48 8C580000 */   lw    $t8, ($v0)
.L0045BE4C:
/* 0045BE4C 8F99802C */  lw    $t9, %got(func_0045BCA8)($gp)
/* 0045BE50 8E04002C */  lw    $a0, 0x2c($s0)
/* 0045BE54 02401025 */  move  $v0, $s2
/* 0045BE58 2739BCA8 */  addiu $t9, %lo(func_0045BCA8) # addiu $t9, $t9, -0x4358
/* 0045BE5C 0320F809 */  jalr  $t9
/* 0045BE60 00000000 */   nop   
/* 0045BE64 8E100030 */  lw    $s0, 0x30($s0)
/* 0045BE68 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045BE6C 5600FFA3 */  bnezl $s0, .L0045BCFC
/* 0045BE70 9202000C */   lbu   $v0, 0xc($s0)
/* 0045BE74 8FBF0034 */  lw    $ra, 0x34($sp)
.L0045BE78:
/* 0045BE78 8FB00018 */  lw    $s0, 0x18($sp)
/* 0045BE7C 8FB1001C */  lw    $s1, 0x1c($sp)
/* 0045BE80 8FB20020 */  lw    $s2, 0x20($sp)
/* 0045BE84 8FB30024 */  lw    $s3, 0x24($sp)
/* 0045BE88 8FB40028 */  lw    $s4, 0x28($sp)
/* 0045BE8C 8FB5002C */  lw    $s5, 0x2c($sp)
/* 0045BE90 03E00008 */  jr    $ra
/* 0045BE94 27BD0038 */   addiu $sp, $sp, 0x38

glabel processcallgraph
    .ent processcallgraph
    # 0045C150 prepass
/* 0045BE98 3C1C0FBC */  .cpload $t9
/* 0045BE9C 279CE3F8 */  
/* 0045BEA0 0399E021 */  
/* 0045BEA4 8F8E8A5C */  lw     $t6, %got(lang)($gp)
/* 0045BEA8 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 0045BEAC 24010003 */  li    $at, 3
/* 0045BEB0 91CE0000 */  lbu   $t6, ($t6)
/* 0045BEB4 AFBF0024 */  sw    $ra, 0x24($sp)
/* 0045BEB8 AFBC0020 */  sw    $gp, 0x20($sp)
/* 0045BEBC AFB1001C */  sw    $s1, 0x1c($sp)
/* 0045BEC0 15C10008 */  bne   $t6, $at, .L0045BEE4
/* 0045BEC4 AFB00018 */   sw    $s0, 0x18($sp)
/* 0045BEC8 8F99802C */  lw    $t9, %got(func_0045BB1C)($gp)
/* 0045BECC 8F908C4C */  lw     $s0, %got(prochead)($gp)
/* 0045BED0 27A20030 */  addiu $v0, $sp, 0x30
/* 0045BED4 2739BB1C */  addiu $t9, %lo(func_0045BB1C) # addiu $t9, $t9, -0x44e4
/* 0045BED8 0320F809 */  jalr  $t9
/* 0045BEDC 8E040000 */   lw    $a0, ($s0)
/* 0045BEE0 8FBC0020 */  lw    $gp, 0x20($sp)
.L0045BEE4:
/* 0045BEE4 8F908C4C */  lw     $s0, %got(prochead)($gp)
/* 0045BEE8 27B10030 */  addiu $s1, $sp, 0x30
.L0045BEEC:
/* 0045BEEC 8F99802C */  lw    $t9, %got(func_0045BBEC)($gp)
/* 0045BEF0 A3A0002F */  sb    $zero, 0x2f($sp)
/* 0045BEF4 8E040000 */  lw    $a0, ($s0)
/* 0045BEF8 2739BBEC */  addiu $t9, %lo(func_0045BBEC) # addiu $t9, $t9, -0x4414
/* 0045BEFC 0320F809 */  jalr  $t9
/* 0045BF00 02201025 */   move  $v0, $s1
/* 0045BF04 93AF002F */  lbu   $t7, 0x2f($sp)
/* 0045BF08 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0045BF0C 15E0FFF7 */  bnez  $t7, .L0045BEEC
/* 0045BF10 00000000 */   nop   
/* 0045BF14 8F99802C */  lw    $t9, %got(func_0045BCA8)($gp)
/* 0045BF18 8E040000 */  lw    $a0, ($s0)
/* 0045BF1C 02201025 */  move  $v0, $s1
/* 0045BF20 2739BCA8 */  addiu $t9, %lo(func_0045BCA8) # addiu $t9, $t9, -0x4358
/* 0045BF24 0320F809 */  jalr  $t9
/* 0045BF28 00000000 */   nop   
/* 0045BF2C 8FBF0024 */  lw    $ra, 0x24($sp)
/* 0045BF30 8FBC0020 */  lw    $gp, 0x20($sp)
/* 0045BF34 8FB00018 */  lw    $s0, 0x18($sp)
/* 0045BF38 8FB1001C */  lw    $s1, 0x1c($sp)
/* 0045BF3C 03E00008 */  jr    $ra
/* 0045BF40 27BD0030 */   addiu $sp, $sp, 0x30
    .type processcallgraph, @function
    .size processcallgraph, .-processcallgraph
    .end processcallgraph

glabel checkforvreg
    .ent checkforvreg
    # 0045BF44 checkforvreg
    # 0045C0E0 findallvregs
/* 0045BF44 3C1C0FBC */  .cpload $t9
/* 0045BF48 279CE34C */  
/* 0045BF4C 0399E021 */  
/* 0045BF50 27BDFFA8 */  addiu $sp, $sp, -0x58
/* 0045BF54 AFBE0040 */  sw    $fp, 0x40($sp)
/* 0045BF58 AFB70038 */  sw    $s7, 0x38($sp)
/* 0045BF5C AFB50030 */  sw    $s5, 0x30($sp)
/* 0045BF60 AFB4002C */  sw    $s4, 0x2c($sp)
/* 0045BF64 AFB20024 */  sw    $s2, 0x24($sp)
/* 0045BF68 00809025 */  move  $s2, $a0
/* 0045BF6C 93B4004E */  lbu   $s4, 0x4e($sp)
/* 0045BF70 24150001 */  li    $s5, 1
/* 0045BF74 24170C29 */  li    $s7, 3113
/* 0045BF78 8F9E8DF4 */  lw     $fp, %got(ldatab)($gp)
/* 0045BF7C AFBF0044 */  sw    $ra, 0x44($sp)
/* 0045BF80 AFBC003C */  sw    $gp, 0x3c($sp)
/* 0045BF84 AFB60034 */  sw    $s6, 0x34($sp)
/* 0045BF88 AFB30028 */  sw    $s3, 0x28($sp)
/* 0045BF8C AFB10020 */  sw    $s1, 0x20($sp)
/* 0045BF90 AFB0001C */  sw    $s0, 0x1c($sp)
.L0045BF94:
/* 0045BF94 52400047 */  beql  $s2, $zero, .L0045C0B4
/* 0045BF98 8FBF0044 */   lw    $ra, 0x44($sp)
/* 0045BF9C 924E0001 */  lbu   $t6, 1($s2)
/* 0045BFA0 0240B025 */  move  $s6, $s2
/* 0045BFA4 15C0003B */  bnez  $t6, .L0045C094
/* 0045BFA8 00000000 */   nop   
/* 0045BFAC 924F0002 */  lbu   $t7, 2($s2)
/* 0045BFB0 15E00038 */  bnez  $t7, .L0045C094
/* 0045BFB4 00000000 */   nop   
/* 0045BFB8 8E580008 */  lw    $t8, 8($s2)
/* 0045BFBC 0018CAC2 */  srl   $t9, $t8, 0xb
/* 0045BFC0 0337001A */  div   $zero, $t9, $s7
/* 0045BFC4 00001010 */  mfhi  $v0
/* 0045BFC8 00574026 */  xor   $t0, $v0, $s7
/* 0045BFCC 16E00002 */  bnez  $s7, .L0045BFD8
/* 0045BFD0 00000000 */   nop   
/* 0045BFD4 0007000D */  break 7
.L0045BFD8:
/* 0045BFD8 2401FFFF */  li    $at, -1
/* 0045BFDC 16E10004 */  bne   $s7, $at, .L0045BFF0
/* 0045BFE0 3C018000 */   lui   $at, 0x8000
/* 0045BFE4 17210002 */  bne   $t9, $at, .L0045BFF0
/* 0045BFE8 00000000 */   nop   
/* 0045BFEC 0006000D */  break 6
.L0045BFF0:
/* 0045BFF0 05030003 */  bgezl $t0, .L0045C000
/* 0045BFF4 00024880 */   sll   $t1, $v0, 2
/* 0045BFF8 00571021 */  addu  $v0, $v0, $s7
/* 0045BFFC 00024880 */  sll   $t1, $v0, 2
.L0045C000:
/* 0045C000 03C95021 */  addu  $t2, $fp, $t1
/* 0045C004 8D500000 */  lw    $s0, ($t2)
/* 0045C008 00008825 */  move  $s1, $zero
/* 0045C00C 5200001C */  beql  $s0, $zero, .L0045C080
/* 0045C010 2E230001 */   sltiu $v1, $s1, 1
/* 0045C014 26530004 */  addiu $s3, $s2, 4
/* 0045C018 8E640000 */  lw    $a0, ($s3)
.L0045C01C:
/* 0045C01C 8F99842C */  lw    $t9, %call16(compareloc)($gp)
/* 0045C020 8E4F000C */  lw    $t7, 0xc($s2)
/* 0045C024 AFA40000 */  sw    $a0, ($sp)
/* 0045C028 8E650004 */  lw    $a1, 4($s3)
/* 0045C02C 8E180008 */  lw    $t8, 8($s0)
/* 0045C030 AFA50004 */  sw    $a1, 4($sp)
/* 0045C034 8E060000 */  lw    $a2, ($s0)
/* 0045C038 AFB80014 */  sw    $t8, 0x14($sp)
/* 0045C03C AFA60008 */  sw    $a2, 8($sp)
/* 0045C040 8E070004 */  lw    $a3, 4($s0)
/* 0045C044 AFAF0010 */  sw    $t7, 0x10($sp)
/* 0045C048 0320F809 */  jalr  $t9
/* 0045C04C AFA7000C */   sw    $a3, 0xc($sp)
/* 0045C050 305900FF */  andi  $t9, $v0, 0xff
/* 0045C054 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0045C058 12B90003 */  beq   $s5, $t9, .L0045C068
/* 0045C05C 305400FF */   andi  $s4, $v0, 0xff
/* 0045C060 10000002 */  b     .L0045C06C
/* 0045C064 32B100FF */   andi  $s1, $s5, 0xff
.L0045C068:
/* 0045C068 8E10000C */  lw    $s0, 0xc($s0)
.L0045C06C:
/* 0045C06C 56200004 */  bnezl $s1, .L0045C080
/* 0045C070 2E230001 */   sltiu $v1, $s1, 1
/* 0045C074 5600FFE9 */  bnezl $s0, .L0045C01C
/* 0045C078 8E640000 */   lw    $a0, ($s3)
/* 0045C07C 2E230001 */  sltiu $v1, $s1, 1
.L0045C080:
/* 0045C080 54600004 */  bnezl $v1, .L0045C094
/* 0045C084 A2430002 */   sb    $v1, 2($s2)
/* 0045C088 3A830002 */  xori  $v1, $s4, 2
/* 0045C08C 2C630001 */  sltiu $v1, $v1, 1
/* 0045C090 A2430002 */  sb    $v1, 2($s2)
.L0045C094:
/* 0045C094 8F998480 */  lw    $t9, %call16(checkforvreg)($gp)
/* 0045C098 8E440010 */  lw    $a0, 0x10($s2)
/* 0045C09C 0320F809 */  jalr  $t9
/* 0045C0A0 00000000 */   nop   
/* 0045C0A4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0045C0A8 1000FFBA */  b     .L0045BF94
/* 0045C0AC 8ED20014 */   lw    $s2, 0x14($s6)
/* 0045C0B0 8FBF0044 */  lw    $ra, 0x44($sp)
.L0045C0B4:
/* 0045C0B4 8FB0001C */  lw    $s0, 0x1c($sp)
/* 0045C0B8 8FB10020 */  lw    $s1, 0x20($sp)
/* 0045C0BC 8FB20024 */  lw    $s2, 0x24($sp)
/* 0045C0C0 8FB30028 */  lw    $s3, 0x28($sp)
/* 0045C0C4 8FB4002C */  lw    $s4, 0x2c($sp)
/* 0045C0C8 8FB50030 */  lw    $s5, 0x30($sp)
/* 0045C0CC 8FB60034 */  lw    $s6, 0x34($sp)
/* 0045C0D0 8FB70038 */  lw    $s7, 0x38($sp)
/* 0045C0D4 8FBE0040 */  lw    $fp, 0x40($sp)
/* 0045C0D8 03E00008 */  jr    $ra
/* 0045C0DC 27BD0058 */   addiu $sp, $sp, 0x58
    .type checkforvreg, @function
    .size checkforvreg, .-checkforvreg
    .end checkforvreg

glabel findallvregs
    .ent findallvregs
    # 0045C0E0 findallvregs
    # 0045C150 prepass
/* 0045C0E0 3C1C0FBC */  .cpload $t9
/* 0045C0E4 279CE1B0 */  
/* 0045C0E8 0399E021 */  
/* 0045C0EC 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0045C0F0 AFB00014 */  sw    $s0, 0x14($sp)
/* 0045C0F4 00808025 */  move  $s0, $a0
/* 0045C0F8 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0045C0FC AFBC0018 */  sw    $gp, 0x18($sp)
/* 0045C100 5200000F */  beql  $s0, $zero, .L0045C140
/* 0045C104 8FBF001C */   lw    $ra, 0x1c($sp)
.L0045C108:
/* 0045C108 8F998480 */  lw    $t9, %call16(checkforvreg)($gp)
/* 0045C10C 8E040004 */  lw    $a0, 4($s0)
/* 0045C110 0320F809 */  jalr  $t9
/* 0045C114 00000000 */   nop   
/* 0045C118 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0045C11C 8E04002C */  lw    $a0, 0x2c($s0)
/* 0045C120 8F998484 */  lw    $t9, %call16(findallvregs)($gp)
/* 0045C124 0320F809 */  jalr  $t9
/* 0045C128 00000000 */   nop   
/* 0045C12C 8E100030 */  lw    $s0, 0x30($s0)
/* 0045C130 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0045C134 1600FFF4 */  bnez  $s0, .L0045C108
/* 0045C138 00000000 */   nop   
/* 0045C13C 8FBF001C */  lw    $ra, 0x1c($sp)
.L0045C140:
/* 0045C140 8FB00014 */  lw    $s0, 0x14($sp)
/* 0045C144 27BD0020 */  addiu $sp, $sp, 0x20
/* 0045C148 03E00008 */  jr    $ra
/* 0045C14C 00000000 */   nop   
    .type findallvregs, @function
    .size findallvregs, .-findallvregs
    .end findallvregs

)"");

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
    proc->unkE = false;
    proc->unkF = false;
    proc->unk14 = false;
    proc->unk15 = false;
    proc->unk9 = true;
    proc->unkA = true;
    proc->unk10 = 2;
    proc->num_bbs = 0;
    proc->callees = NULL;
    proc->ijp_labels = NULL;
    proc->bvsize = 0;
    proc->unk34 = NULL;
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
    proc->unkE = false;
    proc->unkF = false;
    proc->unk14 = false;
    proc->unk15 = false;
    proc->unk9 = true;
    proc->unkA = true;
    proc->unk10 = 2;
    proc->num_bbs = 0;
    proc->callees = NULL;
    proc->ijp_labels = NULL;
    proc->bvsize = 0;
    proc->unk34 = NULL;
    proc->unk38 = 0;
    proc->left = NULL;
    proc->right = NULL;

    readuinstr(&u, ustrptr);

    while (u.Ucode.Opc != Ueof && u.Ucode.Opc != Ustp) {
        while (u.Ucode.Opc != Uent && u.Ucode.Opc != Ustp) {
            oneinstruction();
            readuinstr(&u, ustrptr);
            if (u.Ucode.Opc == Ueof) {
                write_string(err.c_file, "uopt: Error: unexpected EOF in input ucode; giving up.....", 58, 58);
                writeln(err.c_file);
                fflush(err.c_file);
                abort();
            }
        }

        if (u.Ucode.Opc == Uent) {
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

__asm__(R""(
.set noat
.set noreorder

glabel furthervarintree
    .ent furthervarintree
    # 0042020C gen_static_link
    # 0044B4F4 clkilled
    # 0044BDFC cskilled
/* 0045C620 3C1C0FBC */  .cpload $t9
/* 0045C624 279CDC70 */  
/* 0045C628 0399E021 */  
/* 0045C62C 27BDFFB0 */  addiu $sp, $sp, -0x50
/* 0045C630 AFBF002C */  sw    $ra, 0x2c($sp)
/* 0045C634 AFBC0028 */  sw    $gp, 0x28($sp)
/* 0045C638 AFB30024 */  sw    $s3, 0x24($sp)
/* 0045C63C AFB20020 */  sw    $s2, 0x20($sp)
/* 0045C640 AFB1001C */  sw    $s1, 0x1c($sp)
/* 0045C644 AFB00018 */  sw    $s0, 0x18($sp)
/* 0045C648 8C8F0028 */  lw    $t7, 0x28($a0)
/* 0045C64C 27B3003C */  addiu $s3, $sp, 0x3c
/* 0045C650 8CA20018 */  lw    $v0, 0x18($a1)
/* 0045C654 AE6F0000 */  sw    $t7, ($s3)
/* 0045C658 8C8E002C */  lw    $t6, 0x2c($a0)
/* 0045C65C 00809025 */  move  $s2, $a0
/* 0045C660 00003025 */  move  $a2, $zero
/* 0045C664 1040001B */  beqz  $v0, .L0045C6D4
/* 0045C668 AE6E0004 */   sw    $t6, 4($s3)
/* 0045C66C 8F918B70 */  lw     $s1, %got(indirprocs)($gp)
/* 0045C670 8C430000 */  lw    $v1, ($v0)
.L0045C674:
/* 0045C674 8E380000 */  lw    $t8, ($s1)
/* 0045C678 00408025 */  move  $s0, $v0
/* 0045C67C 57030004 */  bnel  $t8, $v1, .L0045C690
/* 0045C680 9259002F */   lbu   $t9, 0x2f($s2)
/* 0045C684 1000000F */  b     .L0045C6C4
/* 0045C688 24060001 */   li    $a2, 1
/* 0045C68C 9259002F */  lbu   $t9, 0x2f($s2)
.L0045C690:
/* 0045C690 90680010 */  lbu   $t0, 0x10($v1)
/* 0045C694 0328082B */  sltu  $at, $t9, $t0
/* 0045C698 1020000A */  beqz  $at, .L0045C6C4
/* 0045C69C 00000000 */   nop   
/* 0045C6A0 8E640000 */  lw    $a0, ($s3)
/* 0045C6A4 8F99848C */  lw    $t9, %call16(varintree)($gp)
/* 0045C6A8 8C660004 */  lw    $a2, 4($v1)
/* 0045C6AC AFA40000 */  sw    $a0, ($sp)
/* 0045C6B0 8E650004 */  lw    $a1, 4($s3)
/* 0045C6B4 0320F809 */  jalr  $t9
/* 0045C6B8 AFA50004 */   sw    $a1, 4($sp)
/* 0045C6BC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045C6C0 304600FF */  andi  $a2, $v0, 0xff
.L0045C6C4:
/* 0045C6C4 14C00003 */  bnez  $a2, .L0045C6D4
/* 0045C6C8 8E020004 */   lw    $v0, 4($s0)
/* 0045C6CC 5440FFE9 */  bnezl $v0, .L0045C674
/* 0045C6D0 8C430000 */   lw    $v1, ($v0)
.L0045C6D4:
/* 0045C6D4 8FBF002C */  lw    $ra, 0x2c($sp)
/* 0045C6D8 8FB00018 */  lw    $s0, 0x18($sp)
/* 0045C6DC 8FB1001C */  lw    $s1, 0x1c($sp)
/* 0045C6E0 8FB20020 */  lw    $s2, 0x20($sp)
/* 0045C6E4 8FB30024 */  lw    $s3, 0x24($sp)
/* 0045C6E8 27BD0050 */  addiu $sp, $sp, 0x50
/* 0045C6EC 03E00008 */  jr    $ra
/* 0045C6F0 00C01025 */   move  $v0, $a2
    .type furthervarintree, @function
    .size furthervarintree, .-furthervarintree
    .end furthervarintree

glabel in_fsym
    .ent in_fsym
    # 004175BC copypropagate
    # 0043CFCC readnxtinst
    # 004494A4 aliaswithptr
    # 0044B4F4 clkilled
    # 0044BD00 cmkilled
    # 0044BDFC cskilled
    # 00455518 func_00455518
    # 00458998 func_00458998
/* 0045C6F4 3C1C0FBC */  .cpload $t9
/* 0045C6F8 279CDB9C */  
/* 0045C6FC 0399E021 */  
/* 0045C700 240100A1 */  li    $at, 161
/* 0045C704 0081001A */  div   $zero, $a0, $at
/* 0045C708 00007010 */  mfhi  $t6
/* 0045C70C 05C10002 */  bgez  $t6, .L0045C718
/* 0045C710 00000000 */   nop   
/* 0045C714 21CE00A1 */  addi  $t6, $t6, 0xa1
.L0045C718:
/* 0045C718 8F988DC8 */  lw     $t8, %got(fsymtab)($gp)
/* 0045C71C 000E7880 */  sll   $t7, $t6, 2
/* 0045C720 00001825 */  move  $v1, $zero
/* 0045C724 01F8C821 */  addu  $t9, $t7, $t8
/* 0045C728 8F220000 */  lw    $v0, ($t9)
/* 0045C72C 1040000C */  beqz  $v0, .L0045C760
/* 0045C730 00000000 */   nop   
/* 0045C734 8C480000 */  lw    $t0, ($v0)
.L0045C738:
/* 0045C738 0104082A */  slt   $at, $t0, $a0
/* 0045C73C 54200004 */  bnezl $at, .L0045C750
/* 0045C740 8C420004 */   lw    $v0, 4($v0)
/* 0045C744 10000002 */  b     .L0045C750
/* 0045C748 24030001 */   li    $v1, 1
/* 0045C74C 8C420004 */  lw    $v0, 4($v0)
.L0045C750:
/* 0045C750 14600003 */  bnez  $v1, .L0045C760
/* 0045C754 00000000 */   nop   
/* 0045C758 5440FFF7 */  bnezl $v0, .L0045C738
/* 0045C75C 8C480000 */   lw    $t0, ($v0)
.L0045C760:
/* 0045C760 10600004 */  beqz  $v1, .L0045C774
/* 0045C764 00602825 */   move  $a1, $v1
/* 0045C768 8C490000 */  lw    $t1, ($v0)
/* 0045C76C 00892826 */  xor   $a1, $a0, $t1
/* 0045C770 2CA50001 */  sltiu $a1, $a1, 1
.L0045C774:
/* 0045C774 03E00008 */  jr    $ra
/* 0045C778 00A01025 */   move  $v0, $a1
    .type in_fsym, @function
    .size in_fsym, .-in_fsym
    .end in_fsym

glabel is_gp_relative
    .ent is_gp_relative
    # 0043CFCC readnxtinst
    # 00451764 func_00451764
    # 00452DAC constarith
/* 0045C77C 3C1C0FBC */  .cpload $t9
/* 0045C780 279CDB14 */  
/* 0045C784 0399E021 */  
/* 0045C788 240100A1 */  li    $at, 161
/* 0045C78C 0081001A */  div   $zero, $a0, $at
/* 0045C790 00007010 */  mfhi  $t6
/* 0045C794 05C10002 */  bgez  $t6, .L0045C7A0
/* 0045C798 00000000 */   nop   
/* 0045C79C 21CE00A1 */  addi  $t6, $t6, 0xa1
.L0045C7A0:
/* 0045C7A0 8F988DCC */  lw     $t8, %got(gp_rel_tab)($gp)
/* 0045C7A4 000E7880 */  sll   $t7, $t6, 2
/* 0045C7A8 00001825 */  move  $v1, $zero
/* 0045C7AC 01F8C821 */  addu  $t9, $t7, $t8
/* 0045C7B0 8F220000 */  lw    $v0, ($t9)
/* 0045C7B4 1040000C */  beqz  $v0, .L0045C7E8
/* 0045C7B8 00000000 */   nop   
/* 0045C7BC 8C480000 */  lw    $t0, ($v0)
.L0045C7C0:
/* 0045C7C0 0104082A */  slt   $at, $t0, $a0
/* 0045C7C4 54200004 */  bnezl $at, .L0045C7D8
/* 0045C7C8 8C420004 */   lw    $v0, 4($v0)
/* 0045C7CC 10000002 */  b     .L0045C7D8
/* 0045C7D0 24030001 */   li    $v1, 1
/* 0045C7D4 8C420004 */  lw    $v0, 4($v0)
.L0045C7D8:
/* 0045C7D8 14600003 */  bnez  $v1, .L0045C7E8
/* 0045C7DC 00000000 */   nop   
/* 0045C7E0 5440FFF7 */  bnezl $v0, .L0045C7C0
/* 0045C7E4 8C480000 */   lw    $t0, ($v0)
.L0045C7E8:
/* 0045C7E8 10600004 */  beqz  $v1, .L0045C7FC
/* 0045C7EC 00602825 */   move  $a1, $v1
/* 0045C7F0 8C490000 */  lw    $t1, ($v0)
/* 0045C7F4 00892826 */  xor   $a1, $a0, $t1
/* 0045C7F8 2CA50001 */  sltiu $a1, $a1, 1
.L0045C7FC:
/* 0045C7FC 03E00008 */  jr    $ra
/* 0045C800 00A01025 */   move  $v0, $a1
    .type is_gp_relative, @function
    .size is_gp_relative, .-is_gp_relative
    .end is_gp_relative

glabel proc_suppressed
    .ent proc_suppressed
    # 00456A2C oneproc
    # 0045B508 oneprocprepass
/* 0045C804 3C1C0FBC */  .cpload $t9
/* 0045C808 279CDA8C */  
/* 0045C80C 0399E021 */  
/* 0045C810 8F828A90 */  lw     $v0, %got(ctrl_head)($gp)
/* 0045C814 00001825 */  move  $v1, $zero
/* 0045C818 8C420000 */  lw    $v0, ($v0)
/* 0045C81C 1040001E */  beqz  $v0, .L0045C898
/* 0045C820 00000000 */   nop   
/* 0045C824 8F848984 */  lw     $a0, %got(entnam0len)($gp)
/* 0045C828 8C840000 */  lw    $a0, ($a0)
/* 0045C82C 8C4E0400 */  lw    $t6, 0x400($v0)
.L0045C830:
/* 0045C830 24050001 */  li    $a1, 1
/* 0045C834 148E0014 */  bne   $a0, $t6, .L0045C888
/* 0045C838 00000000 */   nop   
/* 0045C83C 18800012 */  blez  $a0, .L0045C888
/* 0045C840 24030001 */   li    $v1, 1
/* 0045C844 8F8F8DE4 */  lw     $t7, %got(entnam0)($gp)
/* 0045C848 00453021 */  addu  $a2, $v0, $a1
/* 0045C84C 25EFFFFF */  addiu $t7, $t7, -1
/* 0045C850 00AF3821 */  addu  $a3, $a1, $t7
/* 0045C854 90D8FFFF */  lbu   $t8, -1($a2)
.L0045C858:
/* 0045C858 90F90000 */  lbu   $t9, ($a3)
/* 0045C85C 57190006 */  bnel  $t8, $t9, .L0045C878
/* 0045C860 00001825 */   move  $v1, $zero
/* 0045C864 24A50001 */  addiu $a1, $a1, 1
/* 0045C868 24C60001 */  addiu $a2, $a2, 1
/* 0045C86C 10000002 */  b     .L0045C878
/* 0045C870 24E70001 */   addiu $a3, $a3, 1
/* 0045C874 00001825 */  move  $v1, $zero
.L0045C878:
/* 0045C878 10600003 */  beqz  $v1, .L0045C888
/* 0045C87C 0085082A */   slt   $at, $a0, $a1
/* 0045C880 5020FFF5 */  beql  $at, $zero, .L0045C858
/* 0045C884 90D8FFFF */   lbu   $t8, -1($a2)
.L0045C888:
/* 0045C888 14600003 */  bnez  $v1, .L0045C898
/* 0045C88C 8C420404 */   lw    $v0, 0x404($v0)
/* 0045C890 5440FFE7 */  bnezl $v0, .L0045C830
/* 0045C894 8C4E0400 */   lw    $t6, 0x400($v0)
.L0045C898:
/* 0045C898 03E00008 */  jr    $ra
/* 0045C89C 00601025 */   move  $v0, $v1
    .type proc_suppressed, @function
    .size proc_suppressed, .-proc_suppressed
    .end proc_suppressed
)"");
