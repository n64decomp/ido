#include "libp/libp.h"
#include "libxmalloc/xmalloc.h"
#include "uoptdata.h"
#include "uoptppss.h"
#include "uoptutil.h"
#include "uoptkill.h"

// Linked list, sorted by num
struct NumLinkedList {
    int num;
    struct NumLinkedList *next;
};

__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
RO_1000D258:
    # 0045A480 oneinstruction
    .ascii "uopt: Warning: optimization level lowered from O3 to O2 due to presence of calls in inline assembler text"

RO_1000D2C1:
    # 0045A480 oneinstruction
    .asciz "uoptppss.p"

    .balign 4
jtbl_1000D2CC:
    # 0045A480 oneinstruction
    .gpword .L0045A608
    .gpword .L0045A618
    .gpword .L0045A62C
    .gpword .L0045A640
    .gpword .L0045A654
    .gpword .L0045A668
    .gpword .L0045A67C

    .balign 4
jtbl_1000D2E8:
    # 0045A480 oneinstruction
    .gpword .L0045B21C
    .gpword .L0045B264
    .gpword .L0045B250
    .gpword .L0045B264
    .gpword .L0045A4EC

    .balign 4
jtbl_1000D2FC:
    # 0045A480 oneinstruction
    .gpword .L0045AD9C
    .gpword .L0045AFC8
    .gpword .L0045B264
    .gpword .L0045B264
    .gpword .L0045A6C4
    .gpword .L0045B264
    .gpword .L0045B264
    .gpword .L0045AC8C

    .balign 4
jtbl_1000D31C:
    # 0045A480 oneinstruction
    .gpword .L0045A7EC
    .gpword .L0045B264
    .gpword .L0045B200
    .gpword .L0045A7B8
    .gpword .L0045B264
    .gpword .L0045B264
    .gpword .L0045A7EC
    .gpword .L0045B264
    .gpword .L0045AD58

    .balign 4
jtbl_1000D340:
    # 0045A480 oneinstruction
    .gpword .L0045AF58
    .gpword .L0045B264
    .gpword .L0045B264
    .gpword .L0045B264
    .gpword .L0045A994
    .gpword .L0045A994
    .gpword .L0045B264
    .gpword .L0045B264
    .gpword .L0045B264
    .gpword .L0045AFC8
    .gpword .L0045B264
    .gpword .L0045B264
    .gpword .L0045B264
    .gpword .L0045B264
    .gpword .L0045AB94
    .gpword .L0045AB00
    .gpword .L0045AEC0
    .gpword .L0045AFC8
    .gpword .L0045AB00

    .balign 4
jtbl_1000D38C:
    # 0045A480 oneinstruction
    .gpword .L0045A994
    .gpword .L0045A798

    .balign 4
jtbl_1000D394:
    # 0045A480 oneinstruction
    .gpword .L0045A514
    .gpword .L0045B264
    .gpword .L0045A8E8

    .balign 4
jtbl_1000D3A0:
    # 0045A480 oneinstruction
    .gpword .L0045A994
    .gpword .L0045B264
    .gpword .L0045B264
    .gpword .L0045B264
    .gpword .L0045B200
    .gpword .L0045B238
    .gpword .L0045B238
    .gpword .L0045B238
    .gpword .L0045B238
    .gpword .L0045B238
    .gpword .L0045B238

    .balign 4
jtbl_1000D3CC:
    # 0045A480 oneinstruction
    .gpword .L0045A8F0
    .gpword .L0045B200

    .balign 4
jtbl_1000D3D4:
    # 0045A480 oneinstruction
    .gpword .L0045AD58
    .gpword .L0045A798

RO_1000D3DC:
    # 0045B508 oneprocprepass
    .ascii "uopt: Error: unexpected EOF in input ucode; giving up...."

RO_1000D415:
    # 0045B508 oneprocprepass
    .ascii "uopt: Error: unexpected EOF in input ucode; giving up..."

RO_1000D44D:
    # 0045B508 oneprocprepass
    .ascii "uopt: Error: unexpected EOF in input ucode; giving up.."

RO_1000D484:
    # 0045C150 prepass
    .ascii "uopt: Error: unexpected EOF in input ucode; giving up....."

.data
)"");

/*
00459FB0 insertlda
0045C150 prepass
*/
struct AllocBlock *lda_heap = NULL;

/*
00459828 insertvar
*/
struct AllocBlock *var_heap = NULL;

__asm__(R""(
.data

D_10010D14:
    # 0045A480 oneinstruction
    .byte 0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x80,0x00,0x00

D_10010D24:
    # 0045A480 oneinstruction
    .byte 0x00,0x00,0x00,0x04,0x00,0x00,0x20,0x00

D_10010D2C:
    # 0045C150 prepass
    .ascii " \x00\x00\x00\x00\x00\x00\x00\x00\x00\x00 \x00\x00\x00\x00\x00\x00\x00\x00"

)"");

/*
004590C8 searchproc
00459300 getproc
0045A480 oneinstruction
0045BE98 processcallgraph
0045C150 prepass
*/
struct Proc *prochead;

__asm__(R""(
.bss
    .balign 4
# 1001C618
glabel lab_just_defined
    # 0045A480 oneinstruction
    # 0045B508 oneprocprepass
    .space 4
    .size lab_just_defined, 4
    .type lab_just_defined, @object

    .balign 4
# 1001C61C
glabel in_exception_block
    # 0045A480 oneinstruction
    # 0045B508 oneprocprepass
    .space 4
    .size in_exception_block, 4
    .type in_exception_block, @object

    .balign 4
# 1001C620
glabel in_exception_frame
    # 0045A480 oneinstruction
    .space 4
    .size in_exception_frame, 4
    .type in_exception_frame, @object
)"");

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
struct Variable *insertvar(struct VariableInner var, int size, unsigned char arg3, struct Variable **pos, bool arg5_unused, bool arg6, bool arg7) {
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
                    if ((arg3 == 12 || arg3 == 13) == (v->unk0 == 12 || v->unk0 == 13)) {
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
    v->unk0 = arg3;
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

__asm__(R""(
.set noat
.set noreorder

glabel check_gp_relative
    .ent check_gp_relative
    # 0045A480 oneinstruction
/* 0045A3DC 3C1C0FBC */  .cpload $t9
/* 0045A3E0 279CFEB4 */  
/* 0045A3E4 0399E021 */  
/* 0045A3E8 8F8E8B00 */  lw     $t6, %got(o3opt)($gp)
/* 0045A3EC 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0045A3F0 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0045A3F4 91CE0000 */  lbu   $t6, ($t6)
/* 0045A3F8 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0045A3FC 11C0000E */  beqz  $t6, .L0045A438
/* 0045A400 00000000 */   nop   
/* 0045A404 8F838DA4 */  lw     $v1, %got(u)($gp)
/* 0045A408 24010002 */  li    $at, 2
/* 0045A40C 946F0002 */  lhu   $t7, 2($v1)
/* 0045A410 000FC102 */  srl   $t8, $t7, 4
/* 0045A414 3319000F */  andi  $t9, $t8, 0xf
/* 0045A418 57210016 */  bnel  $t9, $at, .L0045A474
/* 0045A41C 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0045A420 8F998460 */  lw    $t9, %call16(enter_gp_rel_tab)($gp)
/* 0045A424 8C640004 */  lw    $a0, 4($v1)
/* 0045A428 0320F809 */  jalr  $t9
/* 0045A42C 00000000 */   nop   
/* 0045A430 1000000F */  b     .L0045A470
/* 0045A434 8FBC0018 */   lw    $gp, 0x18($sp)
.L0045A438:
/* 0045A438 8F838DA4 */  lw     $v1, %got(u)($gp)
/* 0045A43C 8C620008 */  lw    $v0, 8($v1)
/* 0045A440 5040000C */  beql  $v0, $zero, .L0045A474
/* 0045A444 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0045A448 8F888B30 */  lw     $t0, %got(g_num)($gp)
/* 0045A44C 8D080000 */  lw    $t0, ($t0)
/* 0045A450 0102082A */  slt   $at, $t0, $v0
/* 0045A454 54200007 */  bnezl $at, .L0045A474
/* 0045A458 8FBF001C */   lw    $ra, 0x1c($sp)
/* 0045A45C 8F998460 */  lw    $t9, %call16(enter_gp_rel_tab)($gp)
/* 0045A460 8C640004 */  lw    $a0, 4($v1)
/* 0045A464 0320F809 */  jalr  $t9
/* 0045A468 00000000 */   nop   
/* 0045A46C 8FBC0018 */  lw    $gp, 0x18($sp)
.L0045A470:
/* 0045A470 8FBF001C */  lw    $ra, 0x1c($sp)
.L0045A474:
/* 0045A474 27BD0020 */  addiu $sp, $sp, 0x20
/* 0045A478 03E00008 */  jr    $ra
/* 0045A47C 00000000 */   nop   
    .type check_gp_relative, @function
    .size check_gp_relative, .-check_gp_relative
    .end check_gp_relative

glabel oneinstruction
    .ent oneinstruction
    # 0045B508 oneprocprepass
    # 0045C150 prepass
/* 0045A480 3C1C0FBC */  .cpload $t9
/* 0045A484 279CFE10 */  
/* 0045A488 0399E021 */  
/* 0045A48C 8F8A8DA4 */  lw     $t2, %got(u)($gp)
/* 0045A490 27BDFFA0 */  addiu $sp, $sp, -0x60
/* 0045A494 AFBF002C */  sw    $ra, 0x2c($sp)
/* 0045A498 91480000 */  lbu   $t0, ($t2)
/* 0045A49C AFBC0028 */  sw    $gp, 0x28($sp)
/* 0045A4A0 01001025 */  move  $v0, $t0
/* 0045A4A4 2C410054 */  sltiu $at, $v0, 0x54
/* 0045A4A8 1420038E */  bnez  $at, .L0045B2E4
/* 0045A4AC 2C410086 */   sltiu $at, $v0, 0x86
/* 0045A4B0 1420037C */  bnez  $at, .L0045B2A4
/* 0045A4B4 2C41008D */   sltiu $at, $v0, 0x8d
/* 0045A4B8 142003D6 */  bnez  $at, .L0045B414
/* 0045A4BC 2459FF75 */   addiu $t9, $v0, -0x8b
/* 0045A4C0 244EFF69 */  addiu $t6, $v0, -0x97
/* 0045A4C4 2DC10002 */  sltiu $at, $t6, 2
/* 0045A4C8 50200367 */  beql  $at, $zero, .L0045B268
/* 0045A4CC 24010036 */   li    $at, 54
/* 0045A4D0 8F818044 */  lw    $at, %got(jtbl_1000D3D4)($gp)
/* 0045A4D4 000E7080 */  sll   $t6, $t6, 2
/* 0045A4D8 002E0821 */  addu  $at, $at, $t6
/* 0045A4DC 8C2ED3D4 */  lw    $t6, %lo(jtbl_1000D3D4)($at)
/* 0045A4E0 01DC7021 */  addu  $t6, $t6, $gp
/* 0045A4E4 01C00008 */  jr    $t6
/* 0045A4E8 00000000 */   nop   
.L0045A4EC:
/* 0045A4EC 8D4F0008 */  lw    $t7, 8($t2)
/* 0045A4F0 24010007 */  li    $at, 7
/* 0045A4F4 15E10005 */  bne   $t7, $at, .L0045A50C
/* 0045A4F8 00000000 */   nop   
/* 0045A4FC 8D58000C */  lw    $t8, 0xc($t2)
/* 0045A500 2401000A */  li    $at, 10
/* 0045A504 13010001 */  beq   $t8, $at, .L0045A50C
/* 0045A508 00000000 */   nop   
.L0045A50C:
/* 0045A50C 100003CB */  b     .L0045B43C
/* 0045A510 2503FFE0 */   addiu $v1, $t0, -0x20
.L0045A514:
/* 0045A514 8D430004 */  lw    $v1, 4($t2)
/* 0045A518 24010001 */  li    $at, 1
/* 0045A51C 14610028 */  bne   $v1, $at, .L0045A5C0
/* 0045A520 00000000 */   nop   
/* 0045A524 93B9005A */  lbu   $t9, 0x5a($sp)
/* 0045A528 8F828B6C */  lw     $v0, %got(curproc)($gp)
/* 0045A52C 24061F40 */  li    $a2, 8000
/* 0045A530 332CFFF8 */  andi  $t4, $t9, 0xfff8
/* 0045A534 8C420000 */  lw    $v0, ($v0)
/* 0045A538 358D0002 */  ori   $t5, $t4, 2
/* 0045A53C A3AD005A */  sb    $t5, 0x5a($sp)
/* 0045A540 8FAF0058 */  lw    $t7, 0x58($sp)
/* 0045A544 8C4E0000 */  lw    $t6, ($v0)
/* 0045A548 24070008 */  li    $a3, 8
/* 0045A54C 000FC2C2 */  srl   $t8, $t7, 0xb
/* 0045A550 01D8C826 */  xor   $t9, $t6, $t8
/* 0045A554 8D4E0008 */  lw    $t6, 8($t2)
/* 0045A558 001962C0 */  sll   $t4, $t9, 0xb
/* 0045A55C 018F6826 */  xor   $t5, $t4, $t7
/* 0045A560 AFAD0058 */  sw    $t5, 0x58($sp)
/* 0045A564 27B80054 */  addiu $t8, $sp, 0x54
/* 0045A568 AFAE0054 */  sw    $t6, 0x54($sp)
/* 0045A56C 8F040000 */  lw    $a0, ($t8)
/* 0045A570 8F998454 */  lw    $t9, %call16(insertvar)($gp)
/* 0045A574 240D0001 */  li    $t5, 1
/* 0045A578 AFA40000 */  sw    $a0, ($sp)
/* 0045A57C 8F050004 */  lw    $a1, 4($t8)
/* 0045A580 244F0004 */  addiu $t7, $v0, 4
/* 0045A584 AFAF0010 */  sw    $t7, 0x10($sp)
/* 0045A588 AFA0001C */  sw    $zero, 0x1c($sp)
/* 0045A58C AFAD0018 */  sw    $t5, 0x18($sp)
/* 0045A590 AFA00014 */  sw    $zero, 0x14($sp)
/* 0045A594 0320F809 */  jalr  $t9
/* 0045A598 AFA50004 */   sw    $a1, 4($sp)
/* 0045A59C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045A5A0 24090001 */  li    $t1, 1
/* 0045A5A4 8F8E8B6C */  lw     $t6, %got(curproc)($gp)
/* 0045A5A8 8F8A8DA4 */  lw     $t2, %got(u)($gp)
/* 0045A5AC 8DCE0000 */  lw    $t6, ($t6)
/* 0045A5B0 A1C9000B */  sb    $t1, 0xb($t6)
/* 0045A5B4 91480000 */  lbu   $t0, ($t2)
/* 0045A5B8 100003A0 */  b     .L0045B43C
/* 0045A5BC 2503FFE0 */   addiu $v1, $t0, -0x20
.L0045A5C0:
/* 0045A5C0 1460003E */  bnez  $v1, .L0045A6BC
/* 0045A5C4 00000000 */   nop   
/* 0045A5C8 8F988AE8 */  lw     $t8, %got(fortran_lang)($gp)
/* 0045A5CC 93180000 */  lbu   $t8, ($t8)
/* 0045A5D0 1700003A */  bnez  $t8, .L0045A6BC
/* 0045A5D4 00000000 */   nop   
/* 0045A5D8 8D420008 */  lw    $v0, 8($t2)
/* 0045A5DC 2459FFFF */  addiu $t9, $v0, -1
/* 0045A5E0 2F210007 */  sltiu $at, $t9, 7
/* 0045A5E4 1020002A */  beqz  $at, .L0045A690
/* 0045A5E8 00000000 */   nop   
/* 0045A5EC 8F818044 */  lw    $at, %got(jtbl_1000D2CC)($gp)
/* 0045A5F0 0019C880 */  sll   $t9, $t9, 2
/* 0045A5F4 00390821 */  addu  $at, $at, $t9
/* 0045A5F8 8C39D2CC */  lw    $t9, %lo(jtbl_1000D2CC)($at)
/* 0045A5FC 033CC821 */  addu  $t9, $t9, $gp
/* 0045A600 03200008 */  jr    $t9
/* 0045A604 00000000 */   nop   
.L0045A608:
/* 0045A608 8F818A5C */  lw     $at, %got(lang)($gp)
/* 0045A60C 2503FFE0 */  addiu $v1, $t0, -0x20
/* 0045A610 1000038A */  b     .L0045B43C
/* 0045A614 A0200000 */   sb    $zero, ($at)
.L0045A618:
/* 0045A618 8F818A5C */  lw     $at, %got(lang)($gp)
/* 0045A61C 24090001 */  li    $t1, 1
/* 0045A620 2503FFE0 */  addiu $v1, $t0, -0x20
/* 0045A624 10000385 */  b     .L0045B43C
/* 0045A628 A0290000 */   sb    $t1, ($at)
.L0045A62C:
/* 0045A62C 8F818A5C */  lw     $at, %got(lang)($gp)
/* 0045A630 24050002 */  li    $a1, 2
/* 0045A634 2503FFE0 */  addiu $v1, $t0, -0x20
/* 0045A638 10000380 */  b     .L0045B43C
/* 0045A63C A0250000 */   sb    $a1, ($at)
.L0045A640:
/* 0045A640 8F818A5C */  lw     $at, %got(lang)($gp)
/* 0045A644 240B0003 */  li    $t3, 3
/* 0045A648 2503FFE0 */  addiu $v1, $t0, -0x20
/* 0045A64C 1000037B */  b     .L0045B43C
/* 0045A650 A02B0000 */   sb    $t3, ($at)
.L0045A654:
/* 0045A654 8F818A5C */  lw     $at, %got(lang)($gp)
/* 0045A658 240C0004 */  li    $t4, 4
/* 0045A65C 2503FFE0 */  addiu $v1, $t0, -0x20
/* 0045A660 10000376 */  b     .L0045B43C
/* 0045A664 A02C0000 */   sb    $t4, ($at)
.L0045A668:
/* 0045A668 8F818A5C */  lw     $at, %got(lang)($gp)
/* 0045A66C 240F0005 */  li    $t7, 5
/* 0045A670 2503FFE0 */  addiu $v1, $t0, -0x20
/* 0045A674 10000371 */  b     .L0045B43C
/* 0045A678 A02F0000 */   sb    $t7, ($at)
.L0045A67C:
/* 0045A67C 8F818A5C */  lw     $at, %got(lang)($gp)
/* 0045A680 240D0006 */  li    $t5, 6
/* 0045A684 2503FFE0 */  addiu $v1, $t0, -0x20
/* 0045A688 1000036C */  b     .L0045B43C
/* 0045A68C A02D0000 */   sb    $t5, ($at)
.L0045A690:
/* 0045A690 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 0045A694 8F868044 */  lw    $a2, %got(RO_1000D2C1)($gp)
/* 0045A698 24040001 */  li    $a0, 1
/* 0045A69C 24050293 */  li    $a1, 659
/* 0045A6A0 2407000A */  li    $a3, 10
/* 0045A6A4 AFA8003C */  sw    $t0, 0x3c($sp)
/* 0045A6A8 0320F809 */  jalr  $t9
/* 0045A6AC 24C6D2C1 */   addiu $a2, %lo(RO_1000D2C1) # addiu $a2, $a2, -0x2d3f
/* 0045A6B0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045A6B4 8FA8003C */  lw    $t0, 0x3c($sp)
/* 0045A6B8 8F8A8DA4 */  lw     $t2, %got(u)($gp)
.L0045A6BC:
/* 0045A6BC 1000035F */  b     .L0045B43C
/* 0045A6C0 2503FFE0 */   addiu $v1, $t0, -0x20
.L0045A6C4:
/* 0045A6C4 93AE005A */  lbu   $t6, 0x5a($sp)
/* 0045A6C8 8D4C0004 */  lw    $t4, 4($t2)
/* 0045A6CC 8F828A5C */  lw     $v0, %got(lang)($gp)
/* 0045A6D0 31D8FFF8 */  andi  $t8, $t6, 0xfff8
/* 0045A6D4 37190004 */  ori   $t9, $t8, 4
/* 0045A6D8 A3B9005A */  sb    $t9, 0x5a($sp)
/* 0045A6DC 8FAF0058 */  lw    $t7, 0x58($sp)
/* 0045A6E0 90420000 */  lbu   $v0, ($v0)
/* 0045A6E4 24090001 */  li    $t1, 1
/* 0045A6E8 000F6AC2 */  srl   $t5, $t7, 0xb
/* 0045A6EC 018D7026 */  xor   $t6, $t4, $t5
/* 0045A6F0 000EC2C0 */  sll   $t8, $t6, 0xb
/* 0045A6F4 030FC826 */  xor   $t9, $t8, $t7
/* 0045A6F8 AFB90058 */  sw    $t9, 0x58($sp)
/* 0045A6FC 11220007 */  beq   $t1, $v0, .L0045A71C
/* 0045A700 AFA00054 */   sw    $zero, 0x54($sp)
/* 0045A704 14400013 */  bnez  $v0, .L0045A754
/* 0045A708 27B90054 */   addiu $t9, $sp, 0x54
/* 0045A70C 8F8C8AE4 */  lw     $t4, %got(nopalias)($gp)
/* 0045A710 918C0000 */  lbu   $t4, ($t4)
/* 0045A714 51800010 */  beql  $t4, $zero, .L0045A758
/* 0045A718 8F240000 */   lw    $a0, ($t9)
.L0045A71C:
/* 0045A71C 8F8D8AE0 */  lw     $t5, %got(nof77alias)($gp)
/* 0045A720 27AE0054 */  addiu $t6, $sp, 0x54
/* 0045A724 91AD0000 */  lbu   $t5, ($t5)
/* 0045A728 15A00013 */  bnez  $t5, .L0045A778
/* 0045A72C 00000000 */   nop   
/* 0045A730 8DC40000 */  lw    $a0, ($t6)
/* 0045A734 8F998464 */  lw    $t9, %call16(insertlda)($gp)
/* 0045A738 8D460008 */  lw    $a2, 8($t2)
/* 0045A73C AFA40000 */  sw    $a0, ($sp)
/* 0045A740 8DC50004 */  lw    $a1, 4($t6)
/* 0045A744 0320F809 */  jalr  $t9
/* 0045A748 AFA50004 */   sw    $a1, 4($sp)
/* 0045A74C 1000000A */  b     .L0045A778
/* 0045A750 8FBC0028 */   lw    $gp, 0x28($sp)
.L0045A754:
/* 0045A754 8F240000 */  lw    $a0, ($t9)
.L0045A758:
/* 0045A758 8D460008 */  lw    $a2, 8($t2)
/* 0045A75C AFA40000 */  sw    $a0, ($sp)
/* 0045A760 8F250004 */  lw    $a1, 4($t9)
/* 0045A764 8F998464 */  lw    $t9, %call16(insertlda)($gp)
/* 0045A768 AFA50004 */  sw    $a1, 4($sp)
/* 0045A76C 0320F809 */  jalr  $t9
/* 0045A770 00000000 */   nop   
/* 0045A774 8FBC0028 */  lw    $gp, 0x28($sp)
.L0045A778:
/* 0045A778 8F99846C */  lw    $t9, %call16(check_gp_relative)($gp)
/* 0045A77C 0320F809 */  jalr  $t9
/* 0045A780 00000000 */   nop   
/* 0045A784 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045A788 8F8A8DA4 */  lw     $t2, %got(u)($gp)
/* 0045A78C 91480000 */  lbu   $t0, ($t2)
/* 0045A790 1000032A */  b     .L0045B43C
/* 0045A794 2503FFE0 */   addiu $v1, $t0, -0x20
.L0045A798:
/* 0045A798 8F99846C */  lw    $t9, %call16(check_gp_relative)($gp)
/* 0045A79C 0320F809 */  jalr  $t9
/* 0045A7A0 00000000 */   nop   
/* 0045A7A4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045A7A8 8F8A8DA4 */  lw     $t2, %got(u)($gp)
/* 0045A7AC 91480000 */  lbu   $t0, ($t2)
/* 0045A7B0 10000322 */  b     .L0045B43C
/* 0045A7B4 2503FFE0 */   addiu $v1, $t0, -0x20
.L0045A7B8:
/* 0045A7B8 8F998458 */  lw    $t9, %call16(enterfsymtab)($gp)
/* 0045A7BC 8D440004 */  lw    $a0, 4($t2)
/* 0045A7C0 0320F809 */  jalr  $t9
/* 0045A7C4 00000000 */   nop   
/* 0045A7C8 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045A7CC 8F99846C */  lw    $t9, %call16(check_gp_relative)($gp)
/* 0045A7D0 0320F809 */  jalr  $t9
/* 0045A7D4 00000000 */   nop   
/* 0045A7D8 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045A7DC 8F8A8DA4 */  lw     $t2, %got(u)($gp)
/* 0045A7E0 91480000 */  lbu   $t0, ($t2)
/* 0045A7E4 10000315 */  b     .L0045B43C
/* 0045A7E8 2503FFE0 */   addiu $v1, $t0, -0x20
.L0045A7EC:
/* 0045A7EC 93AE005A */  lbu   $t6, 0x5a($sp)
/* 0045A7F0 8D590004 */  lw    $t9, 4($t2)
/* 0045A7F4 8D460008 */  lw    $a2, 8($t2)
/* 0045A7F8 31D8FFF8 */  andi  $t8, $t6, 0xfff8
/* 0045A7FC 370F0004 */  ori   $t7, $t8, 4
/* 0045A800 A3AF005A */  sb    $t7, 0x5a($sp)
/* 0045A804 8FAC0058 */  lw    $t4, 0x58($sp)
/* 0045A808 AFA00054 */  sw    $zero, 0x54($sp)
/* 0045A80C 000C6AC2 */  srl   $t5, $t4, 0xb
/* 0045A810 032D7026 */  xor   $t6, $t9, $t5
/* 0045A814 000EC2C0 */  sll   $t8, $t6, 0xb
/* 0045A818 030C7826 */  xor   $t7, $t8, $t4
/* 0045A81C 14C0000D */  bnez  $a2, .L0045A854
/* 0045A820 AFAF0058 */   sw    $t7, 0x58($sp)
/* 0045A824 27B90054 */  addiu $t9, $sp, 0x54
/* 0045A828 8F240000 */  lw    $a0, ($t9)
/* 0045A82C 3C067FFF */  lui   $a2, 0x7fff
/* 0045A830 34C6FFFF */  ori   $a2, $a2, 0xffff
/* 0045A834 AFA40000 */  sw    $a0, ($sp)
/* 0045A838 8F250004 */  lw    $a1, 4($t9)
/* 0045A83C 8F998464 */  lw    $t9, %call16(insertlda)($gp)
/* 0045A840 AFA50004 */  sw    $a1, 4($sp)
/* 0045A844 0320F809 */  jalr  $t9
/* 0045A848 00000000 */   nop   
/* 0045A84C 10000009 */  b     .L0045A874
/* 0045A850 8FBC0028 */   lw    $gp, 0x28($sp)
.L0045A854:
/* 0045A854 27B80054 */  addiu $t8, $sp, 0x54
/* 0045A858 8F040000 */  lw    $a0, ($t8)
/* 0045A85C 8F998464 */  lw    $t9, %call16(insertlda)($gp)
/* 0045A860 AFA40000 */  sw    $a0, ($sp)
/* 0045A864 8F050004 */  lw    $a1, 4($t8)
/* 0045A868 0320F809 */  jalr  $t9
/* 0045A86C AFA50004 */   sw    $a1, 4($sp)
/* 0045A870 8FBC0028 */  lw    $gp, 0x28($sp)
.L0045A874:
/* 0045A874 8F99846C */  lw    $t9, %call16(check_gp_relative)($gp)
/* 0045A878 0320F809 */  jalr  $t9
/* 0045A87C 00000000 */   nop   
/* 0045A880 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045A884 8F8A8DA4 */  lw     $t2, %got(u)($gp)
/* 0045A888 91480000 */  lbu   $t0, ($t2)
/* 0045A88C 100002EB */  b     .L0045B43C
/* 0045A890 2503FFE0 */   addiu $v1, $t0, -0x20
.L0045A894:
/* 0045A894 8F838B00 */  lw     $v1, %got(o3opt)($gp)
/* 0045A898 90790000 */  lbu   $t9, ($v1)
/* 0045A89C 17200010 */  bnez  $t9, .L0045A8E0
/* 0045A8A0 00000000 */   nop   
/* 0045A8A4 8D460008 */  lw    $a2, 8($t2)
/* 0045A8A8 10C0000D */  beqz  $a2, .L0045A8E0
/* 0045A8AC 00000000 */   nop   
/* 0045A8B0 8F8D8B30 */  lw     $t5, %got(g_num)($gp)
/* 0045A8B4 8DAD0000 */  lw    $t5, ($t5)
/* 0045A8B8 01A6082A */  slt   $at, $t5, $a2
/* 0045A8BC 14200008 */  bnez  $at, .L0045A8E0
/* 0045A8C0 00000000 */   nop   
/* 0045A8C4 8F998460 */  lw    $t9, %call16(enter_gp_rel_tab)($gp)
/* 0045A8C8 8D440004 */  lw    $a0, 4($t2)
/* 0045A8CC 0320F809 */  jalr  $t9
/* 0045A8D0 00000000 */   nop   
/* 0045A8D4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045A8D8 8F8A8DA4 */  lw     $t2, %got(u)($gp)
/* 0045A8DC 91480000 */  lbu   $t0, ($t2)
.L0045A8E0:
/* 0045A8E0 100002D6 */  b     .L0045B43C
/* 0045A8E4 2503FFE0 */   addiu $v1, $t0, -0x20
.L0045A8E8:
/* 0045A8E8 100002D4 */  b     .L0045B43C
/* 0045A8EC 2503FFE0 */   addiu $v1, $t0, -0x20
.L0045A8F0:
/* 0045A8F0 91430001 */  lbu   $v1, 1($t2)
/* 0045A8F4 93AC005A */  lbu   $t4, 0x5a($sp)
/* 0045A8F8 8D460008 */  lw    $a2, 8($t2)
/* 0045A8FC 00037600 */  sll   $t6, $v1, 0x18
/* 0045A900 000C7F40 */  sll   $t7, $t4, 0x1d
/* 0045A904 000FCF42 */  srl   $t9, $t7, 0x1d
/* 0045A908 000EC742 */  srl   $t8, $t6, 0x1d
/* 0045A90C 03196826 */  xor   $t5, $t8, $t9
/* 0045A910 31AE0007 */  andi  $t6, $t5, 7
/* 0045A914 01CC7826 */  xor   $t7, $t6, $t4
/* 0045A918 A3AF005A */  sb    $t7, 0x5a($sp)
/* 0045A91C 8FB90058 */  lw    $t9, 0x58($sp)
/* 0045A920 8D580004 */  lw    $t8, 4($t2)
/* 0045A924 3067001F */  andi  $a3, $v1, 0x1f
/* 0045A928 00196AC2 */  srl   $t5, $t9, 0xb
/* 0045A92C 030D7026 */  xor   $t6, $t8, $t5
/* 0045A930 8D58000C */  lw    $t8, 0xc($t2)
/* 0045A934 000E62C0 */  sll   $t4, $t6, 0xb
/* 0045A938 01997826 */  xor   $t7, $t4, $t9
/* 0045A93C 8F998B6C */  lw     $t9, %got(curproc)($gp)
/* 0045A940 AFAF0058 */  sw    $t7, 0x58($sp)
/* 0045A944 27AD0054 */  addiu $t5, $sp, 0x54
/* 0045A948 AFB80054 */  sw    $t8, 0x54($sp)
/* 0045A94C 8DA40000 */  lw    $a0, ($t5)
/* 0045A950 8F390000 */  lw    $t9, ($t9)
/* 0045A954 24180001 */  li    $t8, 1
/* 0045A958 AFA40000 */  sw    $a0, ($sp)
/* 0045A95C 8DA50004 */  lw    $a1, 4($t5)
/* 0045A960 272F0004 */  addiu $t7, $t9, 4
/* 0045A964 8F998454 */  lw    $t9, %call16(insertvar)($gp)
/* 0045A968 AFAF0010 */  sw    $t7, 0x10($sp)
/* 0045A96C AFB8001C */  sw    $t8, 0x1c($sp)
/* 0045A970 AFA00018 */  sw    $zero, 0x18($sp)
/* 0045A974 AFA00014 */  sw    $zero, 0x14($sp)
/* 0045A978 0320F809 */  jalr  $t9
/* 0045A97C AFA50004 */   sw    $a1, 4($sp)
/* 0045A980 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045A984 8F8A8DA4 */  lw     $t2, %got(u)($gp)
/* 0045A988 91480000 */  lbu   $t0, ($t2)
/* 0045A98C 100002AB */  b     .L0045B43C
/* 0045A990 2503FFE0 */   addiu $v1, $t0, -0x20
.L0045A994:
/* 0045A994 91430001 */  lbu   $v1, 1($t2)
/* 0045A998 93AD005A */  lbu   $t5, 0x5a($sp)
/* 0045A99C 240B0003 */  li    $t3, 3
/* 0045A9A0 00034E00 */  sll   $t1, $v1, 0x18
/* 0045A9A4 000D7740 */  sll   $t6, $t5, 0x1d
/* 0045A9A8 000E6742 */  srl   $t4, $t6, 0x1d
/* 0045A9AC 00094F42 */  srl   $t1, $t1, 0x1d
/* 0045A9B0 012CC826 */  xor   $t9, $t1, $t4
/* 0045A9B4 332F0007 */  andi  $t7, $t9, 7
/* 0045A9B8 01EDC026 */  xor   $t8, $t7, $t5
/* 0045A9BC A3B8005A */  sb    $t8, 0x5a($sp)
/* 0045A9C0 8FAC0058 */  lw    $t4, 0x58($sp)
/* 0045A9C4 8D4E0004 */  lw    $t6, 4($t2)
/* 0045A9C8 3067001F */  andi  $a3, $v1, 0x1f
/* 0045A9CC 000CCAC2 */  srl   $t9, $t4, 0xb
/* 0045A9D0 01D97826 */  xor   $t7, $t6, $t9
/* 0045A9D4 000F6AC0 */  sll   $t5, $t7, 0xb
/* 0045A9D8 01ACC026 */  xor   $t8, $t5, $t4
/* 0045A9DC AFB80058 */  sw    $t8, 0x58($sp)
/* 0045A9E0 93B9005A */  lbu   $t9, 0x5a($sp)
/* 0045A9E4 8D4E000C */  lw    $t6, 0xc($t2)
/* 0045A9E8 27AC0054 */  addiu $t4, $sp, 0x54
/* 0045A9EC 332F0007 */  andi  $t7, $t9, 7
/* 0045A9F0 156F0003 */  bne   $t3, $t7, .L0045AA00
/* 0045A9F4 AFAE0054 */   sw    $t6, 0x54($sp)
/* 0045A9F8 330D07FF */  andi  $t5, $t8, 0x7ff
/* 0045A9FC AFAD0058 */  sw    $t5, 0x58($sp)
.L0045AA00:
/* 0045AA00 95420002 */  lhu   $v0, 2($t2)
/* 0045AA04 250DFFE0 */  addiu $t5, $t0, -0x20
/* 0045AA08 30420001 */  andi  $v0, $v0, 1
/* 0045AA0C 0002102B */  sltu  $v0, $zero, $v0
/* 0045AA10 54400009 */  bnezl $v0, .L0045AA38
/* 0045AA14 8D990000 */   lw    $t9, ($t4)
/* 0045AA18 8F848C54 */  lw     $a0, %got(in_exception_block)($gp)
/* 0045AA1C 8C820000 */  lw    $v0, ($a0)
/* 0045AA20 0002102A */  slt   $v0, $zero, $v0
/* 0045AA24 50400004 */  beql  $v0, $zero, .L0045AA38
/* 0045AA28 8D990000 */   lw    $t9, ($t4)
/* 0045AA2C 01691026 */  xor   $v0, $t3, $t1
/* 0045AA30 0002102B */  sltu  $v0, $zero, $v0
/* 0045AA34 8D990000 */  lw    $t9, ($t4)
.L0045AA38:
/* 0045AA38 8F8F8B6C */  lw     $t7, %got(curproc)($gp)
/* 0045AA3C 8D460008 */  lw    $a2, 8($t2)
/* 0045AA40 AFB90000 */  sw    $t9, ($sp)
/* 0045AA44 8DEF0000 */  lw    $t7, ($t7)
/* 0045AA48 8D8E0004 */  lw    $t6, 4($t4)
/* 0045AA4C 2DAC0040 */  sltiu $t4, $t5, 0x40
/* 0045AA50 25F80004 */  addiu $t8, $t7, 4
/* 0045AA54 AFB80010 */  sw    $t8, 0x10($sp)
/* 0045AA58 11800009 */  beqz  $t4, .L0045AA80
/* 0045AA5C AFAE0004 */   sw    $t6, 4($sp)
/* 0045AA60 8F8F8044 */  lw    $t7, %got(D_10010D24)($gp)
/* 0045AA64 000D7143 */  sra   $t6, $t5, 5
/* 0045AA68 000EC880 */  sll   $t9, $t6, 2
/* 0045AA6C 25EF0D24 */  addiu $t7, %lo(D_10010D24) # addiu $t7, $t7, 0xd24
/* 0045AA70 01F9C021 */  addu  $t8, $t7, $t9
/* 0045AA74 8F0E0000 */  lw    $t6, ($t8)
/* 0045AA78 01AE7804 */  sllv  $t7, $t6, $t5
/* 0045AA7C 29EC0000 */  slti  $t4, $t7, 0
.L0045AA80:
/* 0045AA80 8F998454 */  lw    $t9, %call16(insertvar)($gp)
/* 0045AA84 0169C026 */  xor   $t8, $t3, $t1
/* 0045AA88 2F180001 */  sltiu $t8, $t8, 1
/* 0045AA8C AFB8001C */  sw    $t8, 0x1c($sp)
/* 0045AA90 AFAC0014 */  sw    $t4, 0x14($sp)
/* 0045AA94 AFA20018 */  sw    $v0, 0x18($sp)
/* 0045AA98 8FA40000 */  lw    $a0, ($sp)
/* 0045AA9C 0320F809 */  jalr  $t9
/* 0045AAA0 8FA50004 */   lw    $a1, 4($sp)
/* 0045AAA4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045AAA8 8F8A8DA4 */  lw     $t2, %got(u)($gp)
/* 0045AAAC 91480000 */  lbu   $t0, ($t2)
/* 0045AAB0 2503FFE0 */  addiu $v1, $t0, -0x20
/* 0045AAB4 2C6E0040 */  sltiu $t6, $v1, 0x40
/* 0045AAB8 11C00009 */  beqz  $t6, .L0045AAE0
/* 0045AABC 00000000 */   nop   
/* 0045AAC0 8F998044 */  lw    $t9, %got(D_10010D24)($gp)
/* 0045AAC4 00036943 */  sra   $t5, $v1, 5
/* 0045AAC8 000D7880 */  sll   $t7, $t5, 2
/* 0045AACC 27390D24 */  addiu $t9, %lo(D_10010D24) # addiu $t9, $t9, 0xd24
/* 0045AAD0 032F6021 */  addu  $t4, $t9, $t7
/* 0045AAD4 8D980000 */  lw    $t8, ($t4)
/* 0045AAD8 00786804 */  sllv  $t5, $t8, $v1
/* 0045AADC 29AE0000 */  slti  $t6, $t5, 0
.L0045AAE0:
/* 0045AAE0 51C00257 */  beql  $t6, $zero, .L0045B440
/* 0045AAE4 2C6C0080 */   sltiu $t4, $v1, 0x80
/* 0045AAE8 8F828B6C */  lw     $v0, %got(curproc)($gp)
/* 0045AAEC 8C420000 */  lw    $v0, ($v0)
/* 0045AAF0 8C4F0020 */  lw    $t7, 0x20($v0)
/* 0045AAF4 25EC0001 */  addiu $t4, $t7, 1
/* 0045AAF8 10000250 */  b     .L0045B43C
/* 0045AAFC AC4C0020 */   sw    $t4, 0x20($v0)
.L0045AB00:
/* 0045AB00 93B8005A */  lbu   $t8, 0x5a($sp)
/* 0045AB04 390E0048 */  xori  $t6, $t0, 0x48
/* 0045AB08 2DCE0001 */  sltiu $t6, $t6, 1
/* 0045AB0C 330DFFF8 */  andi  $t5, $t8, 0xfff8
/* 0045AB10 35B90003 */  ori   $t9, $t5, 3
/* 0045AB14 A3B9005A */  sb    $t9, 0x5a($sp)
/* 0045AB18 8FAF0058 */  lw    $t7, 0x58($sp)
/* 0045AB1C 24060004 */  li    $a2, 4
/* 0045AB20 00003825 */  move  $a3, $zero
/* 0045AB24 000F62C2 */  srl   $t4, $t7, 0xb
/* 0045AB28 01CCC026 */  xor   $t8, $t6, $t4
/* 0045AB2C 00186AC0 */  sll   $t5, $t8, 0xb
/* 0045AB30 01AFC826 */  xor   $t9, $t5, $t7
/* 0045AB34 8F8F8B6C */  lw     $t7, %got(curproc)($gp)
/* 0045AB38 240E001D */  li    $t6, 29
/* 0045AB3C AFB90058 */  sw    $t9, 0x58($sp)
/* 0045AB40 AFAE0054 */  sw    $t6, 0x54($sp)
/* 0045AB44 27AC0054 */  addiu $t4, $sp, 0x54
/* 0045AB48 8D840000 */  lw    $a0, ($t4)
/* 0045AB4C 8DEF0000 */  lw    $t7, ($t7)
/* 0045AB50 240E0001 */  li    $t6, 1
/* 0045AB54 AFA40000 */  sw    $a0, ($sp)
/* 0045AB58 8D850004 */  lw    $a1, 4($t4)
/* 0045AB5C 25F90004 */  addiu $t9, $t7, 4
/* 0045AB60 AFB90010 */  sw    $t9, 0x10($sp)
/* 0045AB64 8F998454 */  lw    $t9, %call16(insertvar)($gp)
/* 0045AB68 240C0001 */  li    $t4, 1
/* 0045AB6C AFAC0018 */  sw    $t4, 0x18($sp)
/* 0045AB70 AFA0001C */  sw    $zero, 0x1c($sp)
/* 0045AB74 AFAE0014 */  sw    $t6, 0x14($sp)
/* 0045AB78 0320F809 */  jalr  $t9
/* 0045AB7C AFA50004 */   sw    $a1, 4($sp)
/* 0045AB80 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045AB84 8F8A8DA4 */  lw     $t2, %got(u)($gp)
/* 0045AB88 91480000 */  lbu   $t0, ($t2)
/* 0045AB8C 1000022B */  b     .L0045B43C
/* 0045AB90 2503FFE0 */   addiu $v1, $t0, -0x20
.L0045AB94:
/* 0045AB94 91580001 */  lbu   $t8, 1($t2)
.L0045AB98:
/* 0045AB98 93B9005A */  lbu   $t9, 0x5a($sp)
/* 0045AB9C 240B0003 */  li    $t3, 3
/* 0045ABA0 00186E00 */  sll   $t5, $t8, 0x18
/* 0045ABA4 00197740 */  sll   $t6, $t9, 0x1d
/* 0045ABA8 000E6742 */  srl   $t4, $t6, 0x1d
/* 0045ABAC 000D7F42 */  srl   $t7, $t5, 0x1d
/* 0045ABB0 01ECC026 */  xor   $t8, $t7, $t4
/* 0045ABB4 330D0007 */  andi  $t5, $t8, 7
/* 0045ABB8 01B97026 */  xor   $t6, $t5, $t9
/* 0045ABBC A3AE005A */  sb    $t6, 0x5a($sp)
/* 0045ABC0 8FAC0058 */  lw    $t4, 0x58($sp)
/* 0045ABC4 8D4F0004 */  lw    $t7, 4($t2)
/* 0045ABC8 000CC2C2 */  srl   $t8, $t4, 0xb
/* 0045ABCC 01F86826 */  xor   $t5, $t7, $t8
/* 0045ABD0 000DCAC0 */  sll   $t9, $t5, 0xb
/* 0045ABD4 032C7026 */  xor   $t6, $t9, $t4
/* 0045ABD8 AFAE0058 */  sw    $t6, 0x58($sp)
/* 0045ABDC 93B8005A */  lbu   $t8, 0x5a($sp)
/* 0045ABE0 8D4F0010 */  lw    $t7, 0x10($t2)
/* 0045ABE4 31D907FF */  andi  $t9, $t6, 0x7ff
/* 0045ABE8 330D0007 */  andi  $t5, $t8, 7
/* 0045ABEC 156D0002 */  bne   $t3, $t5, .L0045ABF8
/* 0045ABF0 AFAF0054 */   sw    $t7, 0x54($sp)
/* 0045ABF4 AFB90058 */  sw    $t9, 0x58($sp)
.L0045ABF8:
/* 0045ABF8 8F8C8A5C */  lw     $t4, %got(lang)($gp)
/* 0045ABFC 918C0000 */  lbu   $t4, ($t4)
/* 0045AC00 556C0016 */  bnel  $t3, $t4, .L0045AC5C
/* 0045AC04 27AC0054 */   addiu $t4, $sp, 0x54
/* 0045AC08 8D4F0008 */  lw    $t7, 8($t2)
/* 0045AC0C 25F80020 */  addiu $t8, $t7, 0x20
/* 0045AC10 2F0D0020 */  sltiu $t5, $t8, 0x20
/* 0045AC14 000D7023 */  negu  $t6, $t5
/* 0045AC18 31D90001 */  andi  $t9, $t6, 1
/* 0045AC1C 03196004 */  sllv  $t4, $t9, $t8
/* 0045AC20 0581000D */  bgez  $t4, .L0045AC58
/* 0045AC24 93AF005A */   lbu   $t7, 0x5a($sp)
/* 0045AC28 24090001 */  li    $t1, 1
/* 0045AC2C 31ED0007 */  andi  $t5, $t7, 7
/* 0045AC30 152D0007 */  bne   $t1, $t5, .L0045AC50
/* 0045AC34 3C187FFF */   lui   $t8, 0x7fff
/* 0045AC38 8D43000C */  lw    $v1, 0xc($t2)
/* 0045AC3C 240EFFFC */  li    $t6, -4
/* 0045AC40 01C3C823 */  subu  $t9, $t6, $v1
/* 0045AC44 AD590008 */  sw    $t9, 8($t2)
/* 0045AC48 10000003 */  b     .L0045AC58
/* 0045AC4C AFA30054 */   sw    $v1, 0x54($sp)
.L0045AC50:
/* 0045AC50 3718FFFF */  ori   $t8, $t8, 0xffff
/* 0045AC54 AD580008 */  sw    $t8, 8($t2)
.L0045AC58:
/* 0045AC58 27AC0054 */  addiu $t4, $sp, 0x54
.L0045AC5C:
/* 0045AC5C 8D840000 */  lw    $a0, ($t4)
/* 0045AC60 8F998464 */  lw    $t9, %call16(insertlda)($gp)
/* 0045AC64 8D460008 */  lw    $a2, 8($t2)
/* 0045AC68 AFA40000 */  sw    $a0, ($sp)
/* 0045AC6C 8D850004 */  lw    $a1, 4($t4)
/* 0045AC70 0320F809 */  jalr  $t9
/* 0045AC74 AFA50004 */   sw    $a1, 4($sp)
/* 0045AC78 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045AC7C 8F8A8DA4 */  lw     $t2, %got(u)($gp)
/* 0045AC80 91480000 */  lbu   $t0, ($t2)
/* 0045AC84 100001ED */  b     .L0045B43C
/* 0045AC88 2503FFE0 */   addiu $v1, $t0, -0x20
.L0045AC8C:
/* 0045AC8C 8F998434 */  lw    $t9, %call16(searchproc)($gp)
/* 0045AC90 8D440004 */  lw    $a0, 4($t2)
/* 0045AC94 95450002 */  lhu   $a1, 2($t2)
/* 0045AC98 0320F809 */  jalr  $t9
/* 0045AC9C 00000000 */   nop   
/* 0045ACA0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045ACA4 00402025 */  move  $a0, $v0
/* 0045ACA8 AFA2005C */  sw    $v0, 0x5c($sp)
/* 0045ACAC 8F858B6C */  lw     $a1, %got(curproc)($gp)
/* 0045ACB0 8F998468 */  lw    $t9, %call16(insertcallee)($gp)
/* 0045ACB4 8CA50000 */  lw    $a1, ($a1)
/* 0045ACB8 0320F809 */  jalr  $t9
/* 0045ACBC 24A50018 */   addiu $a1, $a1, 0x18
/* 0045ACC0 8FA6005C */  lw    $a2, 0x5c($sp)
/* 0045ACC4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045ACC8 90CE0008 */  lbu   $t6, 8($a2)
/* 0045ACCC 8F8A8DA4 */  lw     $t2, %got(u)($gp)
/* 0045ACD0 11C00005 */  beqz  $t6, .L0045ACE8
/* 0045ACD4 00000000 */   nop   
/* 0045ACD8 8F828B6C */  lw     $v0, %got(curproc)($gp)
/* 0045ACDC 8C420000 */  lw    $v0, ($v0)
/* 0045ACE0 54C20005 */  bnel  $a2, $v0, .L0045ACF8
/* 0045ACE4 8D43000C */   lw    $v1, 0xc($t2)
.L0045ACE8:
/* 0045ACE8 8F828B6C */  lw     $v0, %got(curproc)($gp)
/* 0045ACEC A0C0000C */  sb    $zero, 0xc($a2)
/* 0045ACF0 8C420000 */  lw    $v0, ($v0)
/* 0045ACF4 8D43000C */  lw    $v1, 0xc($t2)
.L0045ACF8:
/* 0045ACF8 30790001 */  andi  $t9, $v1, 1
/* 0045ACFC 5320000D */  beql  $t9, $zero, .L0045AD34
/* 0045AD00 30790010 */   andi  $t9, $v1, 0x10
/* 0045AD04 8F988A5C */  lw     $t8, %got(lang)($gp)
/* 0045AD08 3C016C00 */  lui   $at, 0x6c00
/* 0045AD0C 24090001 */  li    $t1, 1
/* 0045AD10 93180000 */  lbu   $t8, ($t8)
/* 0045AD14 2F0C0020 */  sltiu $t4, $t8, 0x20
/* 0045AD18 000C7823 */  negu  $t7, $t4
/* 0045AD1C 01E16824 */  and   $t5, $t7, $at
/* 0045AD20 030D7004 */  sllv  $t6, $t5, $t8
/* 0045AD24 05C30003 */  bgezl $t6, .L0045AD34
/* 0045AD28 30790010 */   andi  $t9, $v1, 0x10
/* 0045AD2C A0C9000E */  sb    $t1, 0xe($a2)
/* 0045AD30 30790010 */  andi  $t9, $v1, 0x10
.L0045AD34:
/* 0045AD34 13200002 */  beqz  $t9, .L0045AD40
/* 0045AD38 24090001 */   li    $t1, 1
/* 0045AD3C A049000F */  sb    $t1, 0xf($v0)
.L0045AD40:
/* 0045AD40 944C0012 */  lhu   $t4, 0x12($v0)
/* 0045AD44 91480000 */  lbu   $t0, ($t2)
/* 0045AD48 258F0001 */  addiu $t7, $t4, 1
/* 0045AD4C A44F0012 */  sh    $t7, 0x12($v0)
/* 0045AD50 100001BA */  b     .L0045B43C
/* 0045AD54 2503FFE0 */   addiu $v1, $t0, -0x20
.L0045AD58:
/* 0045AD58 8F858B6C */  lw     $a1, %got(curproc)($gp)
/* 0045AD5C 8F998468 */  lw    $t9, %call16(insertcallee)($gp)
/* 0045AD60 8F848B70 */  lw     $a0, %got(indirprocs)($gp)
/* 0045AD64 8CA50000 */  lw    $a1, ($a1)
/* 0045AD68 8C840000 */  lw    $a0, ($a0)
/* 0045AD6C 0320F809 */  jalr  $t9
/* 0045AD70 24A50018 */   addiu $a1, $a1, 0x18
/* 0045AD74 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045AD78 8F828B6C */  lw     $v0, %got(curproc)($gp)
/* 0045AD7C 8F8A8DA4 */  lw     $t2, %got(u)($gp)
/* 0045AD80 8C420000 */  lw    $v0, ($v0)
/* 0045AD84 91480000 */  lbu   $t0, ($t2)
/* 0045AD88 944D0012 */  lhu   $t5, 0x12($v0)
/* 0045AD8C 2503FFE0 */  addiu $v1, $t0, -0x20
/* 0045AD90 25B80001 */  addiu $t8, $t5, 1
/* 0045AD94 100001A9 */  b     .L0045B43C
/* 0045AD98 A4580012 */   sh    $t8, 0x12($v0)
.L0045AD9C:
/* 0045AD9C 8F828B6C */  lw     $v0, %got(curproc)($gp)
/* 0045ADA0 8F8C8A5C */  lw     $t4, %got(lang)($gp)
/* 0045ADA4 240B0003 */  li    $t3, 3
/* 0045ADA8 8C420000 */  lw    $v0, ($v0)
/* 0045ADAC 944E0012 */  lhu   $t6, 0x12($v0)
/* 0045ADB0 25D90001 */  addiu $t9, $t6, 1
/* 0045ADB4 A4590012 */  sh    $t9, 0x12($v0)
/* 0045ADB8 918C0000 */  lbu   $t4, ($t4)
/* 0045ADBC 556C0033 */  bnel  $t3, $t4, .L0045AE8C
/* 0045ADC0 95590002 */   lhu   $t9, 2($t2)
/* 0045ADC4 8F838B00 */  lw     $v1, %got(o3opt)($gp)
/* 0045ADC8 906F0000 */  lbu   $t7, ($v1)
/* 0045ADCC 51E0002F */  beql  $t7, $zero, .L0045AE8C
/* 0045ADD0 95590002 */   lhu   $t9, 2($t2)
/* 0045ADD4 954D0002 */  lhu   $t5, 2($t2)
/* 0045ADD8 31B80001 */  andi  $t8, $t5, 1
/* 0045ADDC 5300002B */  beql  $t8, $zero, .L0045AE8C
/* 0045ADE0 95590002 */   lhu   $t9, 2($t2)
/* 0045ADE4 A0600000 */  sb    $zero, ($v1)
/* 0045ADE8 8F998438 */  lw    $t9, %call16(change_to_o2)($gp)
/* 0045ADEC 8F848C4C */  lw     $a0, %got(prochead)($gp)
/* 0045ADF0 0320F809 */  jalr  $t9
/* 0045ADF4 8C840000 */   lw    $a0, ($a0)
/* 0045ADF8 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045ADFC 24090001 */  li    $t1, 1
/* 0045AE00 8F8E8B58 */  lw     $t6, %got(warn_flag)($gp)
/* 0045AE04 8F8A8DA4 */  lw     $t2, %got(u)($gp)
/* 0045AE08 91CE0000 */  lbu   $t6, ($t6)
/* 0045AE0C 512E002A */  beql  $t1, $t6, .L0045AEB8
/* 0045AE10 91480000 */   lbu   $t0, ($t2)
/* 0045AE14 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0045AE18 8F848908 */  lw     $a0, %got(err)($gp)
/* 0045AE1C 0320F809 */  jalr  $t9
/* 0045AE20 8C840000 */   lw    $a0, ($a0)
/* 0045AE24 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045AE28 24060069 */  li    $a2, 105
/* 0045AE2C 24070069 */  li    $a3, 105
/* 0045AE30 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0045AE34 8F848908 */  lw     $a0, %got(err)($gp)
/* 0045AE38 8F858044 */  lw    $a1, %got(RO_1000D258)($gp)
/* 0045AE3C 8C840000 */  lw    $a0, ($a0)
/* 0045AE40 0320F809 */  jalr  $t9
/* 0045AE44 24A5D258 */   addiu $a1, %lo(RO_1000D258) # addiu $a1, $a1, -0x2da8
/* 0045AE48 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045AE4C 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0045AE50 8F848908 */  lw     $a0, %got(err)($gp)
/* 0045AE54 0320F809 */  jalr  $t9
/* 0045AE58 8C840000 */   lw    $a0, ($a0)
/* 0045AE5C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045AE60 8F9980A0 */  lw    $t9, %call16(fflush)($gp)
/* 0045AE64 8F848908 */  lw     $a0, %got(err)($gp)
/* 0045AE68 0320F809 */  jalr  $t9
/* 0045AE6C 8C840000 */   lw    $a0, ($a0)
/* 0045AE70 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045AE74 24090001 */  li    $t1, 1
/* 0045AE78 8F818B08 */  lw     $at, %got(warned)($gp)
/* 0045AE7C 8F8A8DA4 */  lw     $t2, %got(u)($gp)
/* 0045AE80 1000000C */  b     .L0045AEB4
/* 0045AE84 A0290000 */   sb    $t1, ($at)
/* 0045AE88 95590002 */  lhu   $t9, 2($t2)
.L0045AE8C:
/* 0045AE8C 332C0001 */  andi  $t4, $t9, 1
/* 0045AE90 51800009 */  beql  $t4, $zero, .L0045AEB8
/* 0045AE94 91480000 */   lbu   $t0, ($t2)
/* 0045AE98 8F998468 */  lw    $t9, %call16(insertcallee)($gp)
/* 0045AE9C 8F848B70 */  lw     $a0, %got(indirprocs)($gp)
/* 0045AEA0 24450018 */  addiu $a1, $v0, 0x18
/* 0045AEA4 0320F809 */  jalr  $t9
/* 0045AEA8 8C840000 */   lw    $a0, ($a0)
/* 0045AEAC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045AEB0 8F8A8DA4 */  lw     $t2, %got(u)($gp)
.L0045AEB4:
/* 0045AEB4 91480000 */  lbu   $t0, ($t2)
.L0045AEB8:
/* 0045AEB8 10000160 */  b     .L0045B43C
/* 0045AEBC 2503FFE0 */   addiu $v1, $t0, -0x20
.L0045AEC0:
/* 0045AEC0 91420001 */  lbu   $v0, 1($t2)
/* 0045AEC4 240B0003 */  li    $t3, 3
/* 0045AEC8 24050002 */  li    $a1, 2
/* 0045AECC 3042001F */  andi  $v0, $v0, 0x1f
/* 0045AED0 1562000B */  bne   $t3, $v0, .L0045AF00
/* 0045AED4 00000000 */   nop   
/* 0045AED8 8F858B6C */  lw     $a1, %got(curproc)($gp)
/* 0045AEDC 8F998444 */  lw    $t9, %call16(updatelab)($gp)
/* 0045AEE0 8D440010 */  lw    $a0, 0x10($t2)
/* 0045AEE4 8CA50000 */  lw    $a1, ($a1)
/* 0045AEE8 24060001 */  li    $a2, 1
/* 0045AEEC 0320F809 */  jalr  $t9
/* 0045AEF0 24A50028 */   addiu $a1, $a1, 0x28
/* 0045AEF4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045AEF8 10000014 */  b     .L0045AF4C
/* 0045AEFC 8F8A8DA4 */   lw     $t2, %got(u)($gp)
.L0045AF00:
/* 0045AF00 54A20013 */  bnel  $a1, $v0, .L0045AF50
/* 0045AF04 91480000 */   lbu   $t0, ($t2)
/* 0045AF08 8F998434 */  lw    $t9, %call16(searchproc)($gp)
/* 0045AF0C 8D440010 */  lw    $a0, 0x10($t2)
/* 0045AF10 24050002 */  li    $a1, 2
/* 0045AF14 0320F809 */  jalr  $t9
/* 0045AF18 00000000 */   nop   
/* 0045AF1C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045AF20 24090001 */  li    $t1, 1
/* 0045AF24 A049000B */  sb    $t1, 0xb($v0)
/* 0045AF28 8F858B6C */  lw     $a1, %got(curproc)($gp)
/* 0045AF2C A049000D */  sb    $t1, 0xd($v0)
/* 0045AF30 8F998468 */  lw    $t9, %call16(insertcallee)($gp)
/* 0045AF34 8CA50000 */  lw    $a1, ($a1)
/* 0045AF38 00402025 */  move  $a0, $v0
/* 0045AF3C 0320F809 */  jalr  $t9
/* 0045AF40 24A50018 */   addiu $a1, $a1, 0x18
/* 0045AF44 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045AF48 8F8A8DA4 */  lw     $t2, %got(u)($gp)
.L0045AF4C:
/* 0045AF4C 91480000 */  lbu   $t0, ($t2)
.L0045AF50:
/* 0045AF50 1000013A */  b     .L0045B43C
/* 0045AF54 2503FFE0 */   addiu $v1, $t0, -0x20
.L0045AF58:
/* 0045AF58 914F0001 */  lbu   $t7, 1($t2)
/* 0045AF5C 24050002 */  li    $a1, 2
/* 0045AF60 31ED001F */  andi  $t5, $t7, 0x1f
/* 0045AF64 54AD0016 */  bnel  $a1, $t5, .L0045AFC0
/* 0045AF68 91480000 */   lbu   $t0, ($t2)
/* 0045AF6C 8F998434 */  lw    $t9, %call16(searchproc)($gp)
/* 0045AF70 8D440018 */  lw    $a0, 0x18($t2)
/* 0045AF74 24050002 */  li    $a1, 2
/* 0045AF78 0320F809 */  jalr  $t9
/* 0045AF7C 00000000 */   nop   
/* 0045AF80 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045AF84 24090001 */  li    $t1, 1
/* 0045AF88 A049000B */  sb    $t1, 0xb($v0)
/* 0045AF8C 8F988A5C */  lw     $t8, %got(lang)($gp)
/* 0045AF90 A049000D */  sb    $t1, 0xd($v0)
/* 0045AF94 8F8A8DA4 */  lw     $t2, %got(u)($gp)
/* 0045AF98 93180000 */  lbu   $t8, ($t8)
/* 0045AF9C 55380008 */  bnel  $t1, $t8, .L0045AFC0
/* 0045AFA0 91480000 */   lbu   $t0, ($t2)
/* 0045AFA4 8F99845C */  lw    $t9, %call16(del_fsymtab)($gp)
/* 0045AFA8 8D440018 */  lw    $a0, 0x18($t2)
/* 0045AFAC 0320F809 */  jalr  $t9
/* 0045AFB0 00000000 */   nop   
/* 0045AFB4 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045AFB8 8F8A8DA4 */  lw     $t2, %got(u)($gp)
/* 0045AFBC 91480000 */  lbu   $t0, ($t2)
.L0045AFC0:
/* 0045AFC0 1000011E */  b     .L0045B43C
/* 0045AFC4 2503FFE0 */   addiu $v1, $t0, -0x20
.L0045AFC8:
/* 0045AFC8 8F8289D8 */  lw     $v0, %got(maxlabnam)($gp)
/* 0045AFCC 8D430004 */  lw    $v1, 4($t2)
/* 0045AFD0 8C4E0000 */  lw    $t6, ($v0)
/* 0045AFD4 01C3082A */  slt   $at, $t6, $v1
/* 0045AFD8 50200003 */  beql  $at, $zero, .L0045AFE8
/* 0045AFDC 24010042 */   li    $at, 66
/* 0045AFE0 AC430000 */  sw    $v1, ($v0)
/* 0045AFE4 24010042 */  li    $at, 66
.L0045AFE8:
/* 0045AFE8 55010061 */  bnel  $t0, $at, .L0045B170
/* 0045AFEC 2401004A */   li    $at, 74
/* 0045AFF0 8F828B6C */  lw     $v0, %got(curproc)($gp)
/* 0045AFF4 95440002 */  lhu   $a0, 2($t2)
/* 0045AFF8 00603825 */  move  $a3, $v1
/* 0045AFFC 8C420000 */  lw    $v0, ($v0)
/* 0045B000 308F0007 */  andi  $t7, $a0, 7
/* 0045B004 24090001 */  li    $t1, 1
/* 0045B008 94590012 */  lhu   $t9, 0x12($v0)
/* 0045B00C 0004302B */  sltu  $a2, $zero, $a0
/* 0045B010 272C0001 */  addiu $t4, $t9, 1
/* 0045B014 11E00002 */  beqz  $t7, .L0045B020
/* 0045B018 A44C0012 */   sh    $t4, 0x12($v0)
/* 0045B01C A0490014 */  sb    $t1, 0x14($v0)
.L0045B020:
/* 0045B020 14C00003 */  bnez  $a2, .L0045B030
/* 0045B024 00000000 */   nop   
/* 0045B028 8D460008 */  lw    $a2, 8($t2)
/* 0045B02C 0006302B */  sltu  $a2, $zero, $a2
.L0045B030:
/* 0045B030 8F998444 */  lw    $t9, %call16(updatelab)($gp)
/* 0045B034 00E02025 */  move  $a0, $a3
/* 0045B038 24450028 */  addiu $a1, $v0, 0x28
/* 0045B03C 0320F809 */  jalr  $t9
/* 0045B040 00000000 */   nop   
/* 0045B044 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045B048 8F848C50 */  lw     $a0, %got(lab_just_defined)($gp)
/* 0045B04C 8F8A8DA4 */  lw     $t2, %got(u)($gp)
/* 0045B050 8C840000 */  lw    $a0, ($a0)
/* 0045B054 50800012 */  beql  $a0, $zero, .L0045B0A0
/* 0045B058 8D4E0004 */   lw    $t6, 4($t2)
/* 0045B05C 954D0002 */  lhu   $t5, 2($t2)
/* 0045B060 55A0000F */  bnezl $t5, .L0045B0A0
/* 0045B064 8D4E0004 */   lw    $t6, 4($t2)
/* 0045B068 8D580008 */  lw    $t8, 8($t2)
/* 0045B06C 5700000C */  bnezl $t8, .L0045B0A0
/* 0045B070 8D4E0004 */   lw    $t6, 4($t2)
/* 0045B074 8F858B6C */  lw     $a1, %got(curproc)($gp)
/* 0045B078 AC440004 */  sw    $a0, 4($v0)
/* 0045B07C 8F998444 */  lw    $t9, %call16(updatelab)($gp)
/* 0045B080 8CA50000 */  lw    $a1, ($a1)
/* 0045B084 24060001 */  li    $a2, 1
/* 0045B088 0320F809 */  jalr  $t9
/* 0045B08C 24A50028 */   addiu $a1, $a1, 0x28
/* 0045B090 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045B094 10000004 */  b     .L0045B0A8
/* 0045B098 8F8A8DA4 */   lw     $t2, %got(u)($gp)
/* 0045B09C 8D4E0004 */  lw    $t6, 4($t2)
.L0045B0A0:
/* 0045B0A0 8F818C50 */  lw     $at, %got(lab_just_defined)($gp)
/* 0045B0A4 AC2E0000 */  sw    $t6, ($at)
.L0045B0A8:
/* 0045B0A8 8F828A5C */  lw     $v0, %got(lang)($gp)
/* 0045B0AC 240B0003 */  li    $t3, 3
/* 0045B0B0 24050002 */  li    $a1, 2
/* 0045B0B4 90420000 */  lbu   $v0, ($v0)
/* 0045B0B8 51620004 */  beql  $t3, $v0, .L0045B0CC
/* 0045B0BC 95590002 */   lhu   $t9, 2($t2)
/* 0045B0C0 14A2000A */  bne   $a1, $v0, .L0045B0EC
/* 0045B0C4 00000000 */   nop   
/* 0045B0C8 95590002 */  lhu   $t9, 2($t2)
.L0045B0CC:
/* 0045B0CC 24050002 */  li    $a1, 2
/* 0045B0D0 332C0002 */  andi  $t4, $t9, 2
/* 0045B0D4 11800005 */  beqz  $t4, .L0045B0EC
/* 0045B0D8 00000000 */   nop   
/* 0045B0DC 8F848C54 */  lw     $a0, %got(in_exception_block)($gp)
/* 0045B0E0 8C8F0000 */  lw    $t7, ($a0)
/* 0045B0E4 25ED0001 */  addiu $t5, $t7, 1
/* 0045B0E8 AC8D0000 */  sw    $t5, ($a0)
.L0045B0EC:
/* 0045B0EC 11620003 */  beq   $t3, $v0, .L0045B0FC
/* 0045B0F0 8F848C54 */   lw     $a0, %got(in_exception_block)($gp)
/* 0045B0F4 14A20008 */  bne   $a1, $v0, .L0045B118
/* 0045B0F8 00000000 */   nop   
.L0045B0FC:
/* 0045B0FC 95580002 */  lhu   $t8, 2($t2)
/* 0045B100 330E0010 */  andi  $t6, $t8, 0x10
/* 0045B104 11C00004 */  beqz  $t6, .L0045B118
/* 0045B108 00000000 */   nop   
/* 0045B10C 8C990000 */  lw    $t9, ($a0)
/* 0045B110 272CFFFF */  addiu $t4, $t9, -1
/* 0045B114 AC8C0000 */  sw    $t4, ($a0)
.L0045B118:
/* 0045B118 14A20009 */  bne   $a1, $v0, .L0045B140
/* 0045B11C 00000000 */   nop   
/* 0045B120 954F0002 */  lhu   $t7, 2($t2)
/* 0045B124 31ED0080 */  andi  $t5, $t7, 0x80
/* 0045B128 11A00005 */  beqz  $t5, .L0045B140
/* 0045B12C 00000000 */   nop   
/* 0045B130 8F838C58 */  lw     $v1, %got(in_exception_frame)($gp)
/* 0045B134 8C780000 */  lw    $t8, ($v1)
/* 0045B138 270E0001 */  addiu $t6, $t8, 1
/* 0045B13C AC6E0000 */  sw    $t6, ($v1)
.L0045B140:
/* 0045B140 14A20008 */  bne   $a1, $v0, .L0045B164
/* 0045B144 8F838C58 */   lw     $v1, %got(in_exception_frame)($gp)
/* 0045B148 95590002 */  lhu   $t9, 2($t2)
/* 0045B14C 332C0100 */  andi  $t4, $t9, 0x100
/* 0045B150 11800004 */  beqz  $t4, .L0045B164
/* 0045B154 00000000 */   nop   
/* 0045B158 8C6F0000 */  lw    $t7, ($v1)
/* 0045B15C 25EDFFFF */  addiu $t5, $t7, -1
/* 0045B160 AC6D0000 */  sw    $t5, ($v1)
.L0045B164:
/* 0045B164 1000000F */  b     .L0045B1A4
/* 0045B168 91480000 */   lbu   $t0, ($t2)
/* 0045B16C 2401004A */  li    $at, 74
.L0045B170:
/* 0045B170 5501000D */  bnel  $t0, $at, .L0045B1A8
/* 0045B174 2518FFC0 */   addiu $t8, $t0, -0x40
/* 0045B178 8F858B6C */  lw     $a1, %got(curproc)($gp)
/* 0045B17C 8F998444 */  lw    $t9, %call16(updatelab)($gp)
/* 0045B180 00602025 */  move  $a0, $v1
/* 0045B184 8CA50000 */  lw    $a1, ($a1)
/* 0045B188 24060001 */  li    $a2, 1
/* 0045B18C 0320F809 */  jalr  $t9
/* 0045B190 24A50028 */   addiu $a1, $a1, 0x28
/* 0045B194 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045B198 AC400004 */  sw    $zero, 4($v0)
/* 0045B19C 8F8A8DA4 */  lw     $t2, %got(u)($gp)
/* 0045B1A0 91480000 */  lbu   $t0, ($t2)
.L0045B1A4:
/* 0045B1A4 2518FFC0 */  addiu $t8, $t0, -0x40
.L0045B1A8:
/* 0045B1A8 2F0E0020 */  sltiu $t6, $t8, 0x20
/* 0045B1AC 000EC823 */  negu  $t9, $t6
/* 0045B1B0 3C012020 */  lui   $at, 0x2020
/* 0045B1B4 03216024 */  and   $t4, $t9, $at
/* 0045B1B8 030C7804 */  sllv  $t7, $t4, $t8
/* 0045B1BC 05E1000E */  bgez  $t7, .L0045B1F8
/* 0045B1C0 00000000 */   nop   
/* 0045B1C4 954D0002 */  lhu   $t5, 2($t2)
/* 0045B1C8 31AE0008 */  andi  $t6, $t5, 8
/* 0045B1CC 11C0000A */  beqz  $t6, .L0045B1F8
/* 0045B1D0 00000000 */   nop   
/* 0045B1D4 8F858B6C */  lw     $a1, %got(curproc)($gp)
/* 0045B1D8 8F998440 */  lw    $t9, %call16(insertijplab)($gp)
/* 0045B1DC 8D440004 */  lw    $a0, 4($t2)
/* 0045B1E0 8CA50000 */  lw    $a1, ($a1)
/* 0045B1E4 0320F809 */  jalr  $t9
/* 0045B1E8 24A5001C */   addiu $a1, $a1, 0x1c
/* 0045B1EC 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045B1F0 8F8A8DA4 */  lw     $t2, %got(u)($gp)
/* 0045B1F4 91480000 */  lbu   $t0, ($t2)
.L0045B1F8:
/* 0045B1F8 10000090 */  b     .L0045B43C
/* 0045B1FC 2503FFE0 */   addiu $v1, $t0, -0x20
.L0045B200:
/* 0045B200 8F828B6C */  lw     $v0, %got(curproc)($gp)
/* 0045B204 2503FFE0 */  addiu $v1, $t0, -0x20
/* 0045B208 8C420000 */  lw    $v0, ($v0)
/* 0045B20C 94590012 */  lhu   $t9, 0x12($v0)
/* 0045B210 272C0001 */  addiu $t4, $t9, 1
/* 0045B214 10000089 */  b     .L0045B43C
/* 0045B218 A44C0012 */   sh    $t4, 0x12($v0)
.L0045B21C:
/* 0045B21C 8F828B6C */  lw     $v0, %got(curproc)($gp)
/* 0045B220 24090001 */  li    $t1, 1
/* 0045B224 2503FFE0 */  addiu $v1, $t0, -0x20
/* 0045B228 8C420000 */  lw    $v0, ($v0)
/* 0045B22C A049000B */  sb    $t1, 0xb($v0)
/* 0045B230 10000082 */  b     .L0045B43C
/* 0045B234 A049000D */   sb    $t1, 0xd($v0)
.L0045B238:
/* 0045B238 8F988B6C */  lw     $t8, %got(curproc)($gp)
/* 0045B23C 24090001 */  li    $t1, 1
/* 0045B240 2503FFE0 */  addiu $v1, $t0, -0x20
/* 0045B244 8F180000 */  lw    $t8, ($t8)
/* 0045B248 1000007C */  b     .L0045B43C
/* 0045B24C A3090015 */   sb    $t1, 0x15($t8)
.L0045B250:
/* 0045B250 8F818AFC */  lw     $at, %got(someusefp)($gp)
/* 0045B254 24090001 */  li    $t1, 1
/* 0045B258 2503FFE0 */  addiu $v1, $t0, -0x20
/* 0045B25C 10000077 */  b     .L0045B43C
/* 0045B260 A0290000 */   sb    $t1, ($at)
.L0045B264:
/* 0045B264 24010036 */  li    $at, 54
.L0045B268:
/* 0045B268 11010003 */  beq   $t0, $at, .L0045B278
/* 0045B26C 2401003F */   li    $at, 63
/* 0045B270 1501000A */  bne   $t0, $at, .L0045B29C
/* 0045B274 00000000 */   nop   
.L0045B278:
/* 0045B278 8F828B6C */  lw     $v0, %got(curproc)($gp)
/* 0045B27C 8D4F000C */  lw    $t7, 0xc($t2)
/* 0045B280 8C420000 */  lw    $v0, ($v0)
/* 0045B284 8C4D0038 */  lw    $t5, 0x38($v0)
/* 0045B288 01AF082A */  slt   $at, $t5, $t7
/* 0045B28C 50200003 */  beql  $at, $zero, .L0045B29C
/* 0045B290 AC4D0038 */   sw    $t5, 0x38($v0)
/* 0045B294 01E06825 */  move  $t5, $t7
/* 0045B298 AC4D0038 */  sw    $t5, 0x38($v0)
.L0045B29C:
/* 0045B29C 10000067 */  b     .L0045B43C
/* 0045B2A0 2503FFE0 */   addiu $v1, $t0, -0x20
.L0045B2A4:
/* 0045B2A4 2C410066 */  sltiu $at, $v0, 0x66
/* 0045B2A8 14200050 */  bnez  $at, .L0045B3EC
/* 0045B2AC 244EFF9D */   addiu $t6, $v0, -0x63
/* 0045B2B0 24010071 */  li    $at, 113
/* 0045B2B4 1041FD77 */  beq   $v0, $at, .L0045A894
/* 0045B2B8 244EFF85 */   addiu $t6, $v0, -0x7b
/* 0045B2BC 2DC1000B */  sltiu $at, $t6, 0xb
/* 0045B2C0 5020FFE9 */  beql  $at, $zero, .L0045B268
/* 0045B2C4 24010036 */   li    $at, 54
/* 0045B2C8 8F818044 */  lw    $at, %got(jtbl_1000D3A0)($gp)
/* 0045B2CC 000E7080 */  sll   $t6, $t6, 2
/* 0045B2D0 002E0821 */  addu  $at, $at, $t6
/* 0045B2D4 8C2ED3A0 */  lw    $t6, %lo(jtbl_1000D3A0)($at)
/* 0045B2D8 01DC7021 */  addu  $t6, $t6, $gp
/* 0045B2DC 01C00008 */  jr    $t6
/* 0045B2E0 00000000 */   nop   
.L0045B2E4:
/* 0045B2E4 2C41002D */  sltiu $at, $v0, 0x2d
/* 0045B2E8 14200011 */  bnez  $at, .L0045B330
/* 0045B2EC 24010032 */   li    $at, 50
/* 0045B2F0 5041FE29 */  beql  $v0, $at, .L0045AB98
/* 0045B2F4 91580001 */   lbu   $t8, 1($t2)
/* 0045B2F8 2C41004C */  sltiu $at, $v0, 0x4c
/* 0045B2FC 10200031 */  beqz  $at, .L0045B3C4
/* 0045B300 244DFFAE */   addiu $t5, $v0, -0x52
/* 0045B304 2459FFC7 */  addiu $t9, $v0, -0x39
/* 0045B308 2F210013 */  sltiu $at, $t9, 0x13
/* 0045B30C 5020FFD6 */  beql  $at, $zero, .L0045B268
/* 0045B310 24010036 */   li    $at, 54
/* 0045B314 8F818044 */  lw    $at, %got(jtbl_1000D340)($gp)
/* 0045B318 0019C880 */  sll   $t9, $t9, 2
/* 0045B31C 00390821 */  addu  $at, $at, $t9
/* 0045B320 8C39D340 */  lw    $t9, %lo(jtbl_1000D340)($at)
/* 0045B324 033CC821 */  addu  $t9, $t9, $gp
/* 0045B328 03200008 */  jr    $t9
/* 0045B32C 00000000 */   nop   
.L0045B330:
/* 0045B330 2C410008 */  sltiu $at, $v0, 8
/* 0045B334 1420000F */  bnez  $at, .L0045B374
/* 0045B338 2458FFFD */   addiu $t8, $v0, -3
/* 0045B33C 2C410018 */  sltiu $at, $v0, 0x18
/* 0045B340 10200016 */  beqz  $at, .L0045B39C
/* 0045B344 244FFFDC */   addiu $t7, $v0, -0x24
/* 0045B348 244CFFF0 */  addiu $t4, $v0, -0x10
/* 0045B34C 2D810008 */  sltiu $at, $t4, 8
/* 0045B350 5020FFC5 */  beql  $at, $zero, .L0045B268
/* 0045B354 24010036 */   li    $at, 54
/* 0045B358 8F818044 */  lw    $at, %got(jtbl_1000D2FC)($gp)
/* 0045B35C 000C6080 */  sll   $t4, $t4, 2
/* 0045B360 002C0821 */  addu  $at, $at, $t4
/* 0045B364 8C2CD2FC */  lw    $t4, %lo(jtbl_1000D2FC)($at)
/* 0045B368 019C6021 */  addu  $t4, $t4, $gp
/* 0045B36C 01800008 */  jr    $t4
/* 0045B370 00000000 */   nop   
.L0045B374:
/* 0045B374 2F010005 */  sltiu $at, $t8, 5
/* 0045B378 5020FFBB */  beql  $at, $zero, .L0045B268
/* 0045B37C 24010036 */   li    $at, 54
/* 0045B380 8F818044 */  lw    $at, %got(jtbl_1000D2E8)($gp)
/* 0045B384 0018C080 */  sll   $t8, $t8, 2
/* 0045B388 00380821 */  addu  $at, $at, $t8
/* 0045B38C 8C38D2E8 */  lw    $t8, %lo(jtbl_1000D2E8)($at)
/* 0045B390 031CC021 */  addu  $t8, $t8, $gp
/* 0045B394 03000008 */  jr    $t8
/* 0045B398 00000000 */   nop   
.L0045B39C:
/* 0045B39C 2DE10009 */  sltiu $at, $t7, 9
/* 0045B3A0 5020FFB1 */  beql  $at, $zero, .L0045B268
/* 0045B3A4 24010036 */   li    $at, 54
/* 0045B3A8 8F818044 */  lw    $at, %got(jtbl_1000D31C)($gp)
/* 0045B3AC 000F7880 */  sll   $t7, $t7, 2
/* 0045B3B0 002F0821 */  addu  $at, $at, $t7
/* 0045B3B4 8C2FD31C */  lw    $t7, %lo(jtbl_1000D31C)($at)
/* 0045B3B8 01FC7821 */  addu  $t7, $t7, $gp
/* 0045B3BC 01E00008 */  jr    $t7
/* 0045B3C0 00000000 */   nop   
.L0045B3C4:
/* 0045B3C4 2DA10002 */  sltiu $at, $t5, 2
/* 0045B3C8 5020FFA7 */  beql  $at, $zero, .L0045B268
/* 0045B3CC 24010036 */   li    $at, 54
/* 0045B3D0 8F818044 */  lw    $at, %got(jtbl_1000D38C)($gp)
/* 0045B3D4 000D6880 */  sll   $t5, $t5, 2
/* 0045B3D8 002D0821 */  addu  $at, $at, $t5
/* 0045B3DC 8C2DD38C */  lw    $t5, %lo(jtbl_1000D38C)($at)
/* 0045B3E0 01BC6821 */  addu  $t5, $t5, $gp
/* 0045B3E4 01A00008 */  jr    $t5
/* 0045B3E8 00000000 */   nop   
.L0045B3EC:
/* 0045B3EC 2DC10003 */  sltiu $at, $t6, 3
/* 0045B3F0 5020FF9D */  beql  $at, $zero, .L0045B268
/* 0045B3F4 24010036 */   li    $at, 54
/* 0045B3F8 8F818044 */  lw    $at, %got(jtbl_1000D394)($gp)
/* 0045B3FC 000E7080 */  sll   $t6, $t6, 2
/* 0045B400 002E0821 */  addu  $at, $at, $t6
/* 0045B404 8C2ED394 */  lw    $t6, %lo(jtbl_1000D394)($at)
/* 0045B408 01DC7021 */  addu  $t6, $t6, $gp
/* 0045B40C 01C00008 */  jr    $t6
/* 0045B410 00000000 */   nop   
.L0045B414:
/* 0045B414 2F210002 */  sltiu $at, $t9, 2
/* 0045B418 5020FF93 */  beql  $at, $zero, .L0045B268
/* 0045B41C 24010036 */   li    $at, 54
/* 0045B420 8F818044 */  lw    $at, %got(jtbl_1000D3CC)($gp)
/* 0045B424 0019C880 */  sll   $t9, $t9, 2
/* 0045B428 00390821 */  addu  $at, $at, $t9
/* 0045B42C 8C39D3CC */  lw    $t9, %lo(jtbl_1000D3CC)($at)
/* 0045B430 033CC821 */  addu  $t9, $t9, $gp
/* 0045B434 03200008 */  jr    $t9
/* 0045B438 00000000 */   nop   
.L0045B43C:
/* 0045B43C 2C6C0080 */  sltiu $t4, $v1, 0x80
.L0045B440:
/* 0045B440 11800009 */  beqz  $t4, .L0045B468
/* 0045B444 2401008C */   li    $at, 140
/* 0045B448 8F8D8044 */  lw    $t5, %got(D_10010D14)($gp)
/* 0045B44C 0003C143 */  sra   $t8, $v1, 5
/* 0045B450 00187880 */  sll   $t7, $t8, 2
/* 0045B454 25AD0D14 */  addiu $t5, %lo(D_10010D14) # addiu $t5, $t5, 0xd14
/* 0045B458 01AF7021 */  addu  $t6, $t5, $t7
/* 0045B45C 8DD90000 */  lw    $t9, ($t6)
/* 0045B460 0079C004 */  sllv  $t8, $t9, $v1
/* 0045B464 2B0C0000 */  slti  $t4, $t8, 0
.L0045B468:
/* 0045B468 1180000C */  beqz  $t4, .L0045B49C
/* 0045B46C 00000000 */   nop   
/* 0045B470 8F858B6C */  lw     $a1, %got(curproc)($gp)
/* 0045B474 8F998444 */  lw    $t9, %call16(updatelab)($gp)
/* 0045B478 8D440004 */  lw    $a0, 4($t2)
/* 0045B47C 8CA50000 */  lw    $a1, ($a1)
/* 0045B480 24060001 */  li    $a2, 1
/* 0045B484 0320F809 */  jalr  $t9
/* 0045B488 24A50028 */   addiu $a1, $a1, 0x28
/* 0045B48C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045B490 8F888DA4 */  lw     $t0, %got(u)($gp)
/* 0045B494 1000000D */  b     .L0045B4CC
/* 0045B498 91080000 */   lbu   $t0, ($t0)
.L0045B49C:
/* 0045B49C 5501000C */  bnel  $t0, $at, .L0045B4D0
/* 0045B4A0 250FFFC0 */   addiu $t7, $t0, -0x40
/* 0045B4A4 8F858B6C */  lw     $a1, %got(curproc)($gp)
/* 0045B4A8 8F998444 */  lw    $t9, %call16(updatelab)($gp)
/* 0045B4AC 8D440008 */  lw    $a0, 8($t2)
/* 0045B4B0 8CA50000 */  lw    $a1, ($a1)
/* 0045B4B4 24060001 */  li    $a2, 1
/* 0045B4B8 0320F809 */  jalr  $t9
/* 0045B4BC 24A50028 */   addiu $a1, $a1, 0x28
/* 0045B4C0 8FBC0028 */  lw    $gp, 0x28($sp)
/* 0045B4C4 8F888DA4 */  lw     $t0, %got(u)($gp)
/* 0045B4C8 91080000 */  lbu   $t0, ($t0)
.L0045B4CC:
/* 0045B4CC 250FFFC0 */  addiu $t7, $t0, -0x40
.L0045B4D0:
/* 0045B4D0 2DEE0020 */  sltiu $t6, $t7, 0x20
/* 0045B4D4 3C012C08 */  lui   $at, 0x2c08
/* 0045B4D8 34210800 */  ori   $at, $at, 0x800
/* 0045B4DC 000EC823 */  negu  $t9, $t6
/* 0045B4E0 0321C024 */  and   $t8, $t9, $at
/* 0045B4E4 01F86804 */  sllv  $t5, $t8, $t7
/* 0045B4E8 05A20004 */  bltzl $t5, .L0045B4FC
/* 0045B4EC 8FBF002C */   lw    $ra, 0x2c($sp)
/* 0045B4F0 8F818C50 */  lw     $at, %got(lab_just_defined)($gp)
/* 0045B4F4 AC200000 */  sw    $zero, ($at)
/* 0045B4F8 8FBF002C */  lw    $ra, 0x2c($sp)
.L0045B4FC:
/* 0045B4FC 27BD0060 */  addiu $sp, $sp, 0x60
/* 0045B500 03E00008 */  jr    $ra
/* 0045B504 00000000 */   nop   
    .type oneinstruction, @function
    .size oneinstruction, .-oneinstruction
    .end oneinstruction

glabel oneprocprepass
    .ent oneprocprepass
    # 0045C150 prepass
/* 0045B508 3C1C0FBC */  .cpload $t9
/* 0045B50C 279CED88 */  
/* 0045B510 0399E021 */  
/* 0045B514 27BDFF98 */  addiu $sp, $sp, -0x68
/* 0045B518 AFB10028 */  sw    $s1, 0x28($sp)
/* 0045B51C 8F918DA4 */  lw     $s1, %got(u)($gp)
/* 0045B520 8F998434 */  lw    $t9, %call16(searchproc)($gp)
/* 0045B524 AFBF0034 */  sw    $ra, 0x34($sp)
/* 0045B528 AFBC0030 */  sw    $gp, 0x30($sp)
/* 0045B52C AFB2002C */  sw    $s2, 0x2c($sp)
/* 0045B530 AFB00024 */  sw    $s0, 0x24($sp)
/* 0045B534 8E240004 */  lw    $a0, 4($s1)
/* 0045B538 0320F809 */  jalr  $t9
/* 0045B53C 96250002 */   lhu   $a1, 2($s1)
/* 0045B540 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045B544 24120001 */  li    $s2, 1
/* 0045B548 8F818B6C */  lw     $at, %got(curproc)($gp)
/* 0045B54C 8F838B6C */  lw     $v1, %got(curproc)($gp)
/* 0045B550 AC220000 */  sw    $v0, ($at)
/* 0045B554 8C630000 */  lw    $v1, ($v1)
/* 0045B558 906E000B */  lbu   $t6, 0xb($v1)
/* 0045B55C A0720008 */  sb    $s2, 8($v1)
/* 0045B560 15C00007 */  bnez  $t6, .L0045B580
/* 0045B564 00000000 */   nop   
/* 0045B568 8E2F000C */  lw    $t7, 0xc($s1)
/* 0045B56C 31F80001 */  andi  $t8, $t7, 1
/* 0045B570 13000003 */  beqz  $t8, .L0045B580
/* 0045B574 00000000 */   nop   
/* 0045B578 A072000B */  sb    $s2, 0xb($v1)
/* 0045B57C A072000D */  sb    $s2, 0xd($v1)
.L0045B580:
/* 0045B580 8F848AFC */  lw     $a0, %got(someusefp)($gp)
/* 0045B584 90820000 */  lbu   $v0, ($a0)
/* 0045B588 14400004 */  bnez  $v0, .L0045B59C
/* 0045B58C 00000000 */   nop   
/* 0045B590 8E22000C */  lw    $v0, 0xc($s1)
/* 0045B594 30420002 */  andi  $v0, $v0, 2
/* 0045B598 0002102B */  sltu  $v0, $zero, $v0
.L0045B59C:
/* 0045B59C 8F998A5C */  lw     $t9, %got(lang)($gp)
/* 0045B5A0 A0820000 */  sb    $v0, ($a0)
/* 0045B5A4 8F818C54 */  lw     $at, %got(in_exception_block)($gp)
/* 0045B5A8 93390000 */  lbu   $t9, ($t9)
/* 0045B5AC AC200000 */  sw    $zero, ($at)
/* 0045B5B0 2F290020 */  sltiu $t1, $t9, 0x20
/* 0045B5B4 00095023 */  negu  $t2, $t1
/* 0045B5B8 3C011C00 */  lui   $at, 0x1c00
/* 0045B5BC 01415824 */  and   $t3, $t2, $at
/* 0045B5C0 032B6004 */  sllv  $t4, $t3, $t9
/* 0045B5C4 05810020 */  bgez  $t4, .L0045B648
/* 0045B5C8 00000000 */   nop   
/* 0045B5CC 8E2D000C */  lw    $t5, 0xc($s1)
/* 0045B5D0 93AF0066 */  lbu   $t7, 0x66($sp)
/* 0045B5D4 24060004 */  li    $a2, 4
/* 0045B5D8 31AE0001 */  andi  $t6, $t5, 1
/* 0045B5DC 15C0001A */  bnez  $t6, .L0045B648
/* 0045B5E0 31F8FFF8 */   andi  $t8, $t7, 0xfff8
/* 0045B5E4 37090001 */  ori   $t1, $t8, 1
/* 0045B5E8 A3A90066 */  sb    $t1, 0x66($sp)
/* 0045B5EC 8FAB0064 */  lw    $t3, 0x64($sp)
/* 0045B5F0 8E2A0004 */  lw    $t2, 4($s1)
/* 0045B5F4 240FFFFC */  li    $t7, -4
/* 0045B5F8 000BCAC2 */  srl   $t9, $t3, 0xb
/* 0045B5FC 01596026 */  xor   $t4, $t2, $t9
/* 0045B600 000C6AC0 */  sll   $t5, $t4, 0xb
/* 0045B604 01AB7026 */  xor   $t6, $t5, $t3
/* 0045B608 AFAE0064 */  sw    $t6, 0x64($sp)
/* 0045B60C AFAF0060 */  sw    $t7, 0x60($sp)
/* 0045B610 27B80060 */  addiu $t8, $sp, 0x60
/* 0045B614 8F040000 */  lw    $a0, ($t8)
/* 0045B618 24790004 */  addiu $t9, $v1, 4
/* 0045B61C 00003825 */  move  $a3, $zero
/* 0045B620 AFA40000 */  sw    $a0, ($sp)
/* 0045B624 8F050004 */  lw    $a1, 4($t8)
/* 0045B628 AFB90010 */  sw    $t9, 0x10($sp)
/* 0045B62C 8F998454 */  lw    $t9, %call16(insertvar)($gp)
/* 0045B630 AFB2001C */  sw    $s2, 0x1c($sp)
/* 0045B634 AFA00018 */  sw    $zero, 0x18($sp)
/* 0045B638 AFB20014 */  sw    $s2, 0x14($sp)
/* 0045B63C 0320F809 */  jalr  $t9
/* 0045B640 AFA50004 */   sw    $a1, 4($sp)
/* 0045B644 8FBC0030 */  lw    $gp, 0x30($sp)
.L0045B648:
/* 0045B648 8F998768 */  lw    $t9, %call16(readuinstr)($gp)
/* 0045B64C 8F858950 */  lw     $a1, %got(ustrptr)($gp)
/* 0045B650 02202025 */  move  $a0, $s1
/* 0045B654 0320F809 */  jalr  $t9
/* 0045B658 8CA50000 */   lw    $a1, ($a1)
/* 0045B65C 922C0000 */  lbu   $t4, ($s1)
/* 0045B660 24010022 */  li    $at, 34
/* 0045B664 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045B668 15810017 */  bne   $t4, $at, .L0045B6C8
/* 0045B66C 24060037 */   li    $a2, 55
/* 0045B670 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0045B674 8F908908 */  lw     $s0, %got(err)($gp)
/* 0045B678 8F858044 */  lw    $a1, %got(RO_1000D44D)($gp)
/* 0045B67C 24070037 */  li    $a3, 55
/* 0045B680 8E040000 */  lw    $a0, ($s0)
/* 0045B684 0320F809 */  jalr  $t9
/* 0045B688 24A5D44D */   addiu $a1, %lo(RO_1000D44D) # addiu $a1, $a1, -0x2bb3
/* 0045B68C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045B690 8E040000 */  lw    $a0, ($s0)
/* 0045B694 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0045B698 0320F809 */  jalr  $t9
/* 0045B69C 00000000 */   nop   
/* 0045B6A0 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045B6A4 8E040000 */  lw    $a0, ($s0)
/* 0045B6A8 8F9980A0 */  lw    $t9, %call16(fflush)($gp)
/* 0045B6AC 0320F809 */  jalr  $t9
/* 0045B6B0 00000000 */   nop   
/* 0045B6B4 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045B6B8 8F998728 */  lw    $t9, %call16(abort)($gp)
/* 0045B6BC 0320F809 */  jalr  $t9
/* 0045B6C0 00000000 */   nop   
/* 0045B6C4 8FBC0030 */  lw    $gp, 0x30($sp)
.L0045B6C8:
/* 0045B6C8 8E280010 */  lw    $t0, 0x10($s1)
/* 0045B6CC 8F908908 */  lw     $s0, %got(err)($gp)
/* 0045B6D0 19000027 */  blez  $t0, .L0045B770
/* 0045B6D4 01003025 */   move  $a2, $t0
/* 0045B6D8 24C60001 */  addiu $a2, $a2, 1
/* 0045B6DC 24C7FFFF */  addiu $a3, $a2, -1
/* 0045B6E0 30E70003 */  andi  $a3, $a3, 3
/* 0045B6E4 10E00010 */  beqz  $a3, .L0045B728
/* 0045B6E8 24040001 */   li    $a0, 1
/* 0045B6EC 8F8B8950 */  lw     $t3, %got(ustrptr)($gp)
/* 0045B6F0 8F8D8DE4 */  lw     $t5, %got(entnam0)($gp)
/* 0045B6F4 24E50001 */  addiu $a1, $a3, 1
/* 0045B6F8 8D6B0000 */  lw    $t3, ($t3)
/* 0045B6FC 25ADFFFF */  addiu $t5, $t5, -1
/* 0045B700 008D1021 */  addu  $v0, $a0, $t5
/* 0045B704 01641821 */  addu  $v1, $t3, $a0
.L0045B708:
/* 0045B708 906EFFFF */  lbu   $t6, -1($v1)
/* 0045B70C 24840001 */  addiu $a0, $a0, 1
/* 0045B710 24420001 */  addiu $v0, $v0, 1
/* 0045B714 24630001 */  addiu $v1, $v1, 1
/* 0045B718 14A4FFFB */  bne   $a1, $a0, .L0045B708
/* 0045B71C A04EFFFF */   sb    $t6, -1($v0)
/* 0045B720 10860013 */  beq   $a0, $a2, .L0045B770
/* 0045B724 00000000 */   nop   
.L0045B728:
/* 0045B728 8F988950 */  lw     $t8, %got(ustrptr)($gp)
/* 0045B72C 8F8F8DE4 */  lw     $t7, %got(entnam0)($gp)
/* 0045B730 8F180000 */  lw    $t8, ($t8)
/* 0045B734 25EFFFFF */  addiu $t7, $t7, -1
/* 0045B738 008F1021 */  addu  $v0, $a0, $t7
/* 0045B73C 00CF2821 */  addu  $a1, $a2, $t7
/* 0045B740 03041821 */  addu  $v1, $t8, $a0
.L0045B744:
/* 0045B744 9069FFFF */  lbu   $t1, -1($v1)
/* 0045B748 906A0000 */  lbu   $t2, ($v1)
/* 0045B74C 90790001 */  lbu   $t9, 1($v1)
/* 0045B750 906C0002 */  lbu   $t4, 2($v1)
/* 0045B754 24420004 */  addiu $v0, $v0, 4
/* 0045B758 24630004 */  addiu $v1, $v1, 4
/* 0045B75C A049FFFC */  sb    $t1, -4($v0)
/* 0045B760 A04AFFFD */  sb    $t2, -3($v0)
/* 0045B764 A059FFFE */  sb    $t9, -2($v0)
/* 0045B768 1445FFF6 */  bne   $v0, $a1, .L0045B744
/* 0045B76C A04CFFFF */   sb    $t4, -1($v0)
.L0045B770:
/* 0045B770 8F858DE4 */  lw     $a1, %got(entnam0)($gp)
/* 0045B774 8F838984 */  lw     $v1, %got(entnam0len)($gp)
/* 0045B778 8F868950 */  lw     $a2, %got(ustrptr)($gp)
/* 0045B77C 24A5FFFF */  addiu $a1, $a1, -1
/* 0045B780 00A86821 */  addu  $t5, $a1, $t0
/* 0045B784 91AB0000 */  lbu   $t3, ($t5)
/* 0045B788 24040020 */  li    $a0, 32
/* 0045B78C AC680000 */  sw    $t0, ($v1)
/* 0045B790 01001025 */  move  $v0, $t0
/* 0045B794 148B0008 */  bne   $a0, $t3, .L0045B7B8
/* 0045B798 8CC60000 */   lw    $a2, ($a2)
/* 0045B79C 244EFFFF */  addiu $t6, $v0, -1
.L0045B7A0:
/* 0045B7A0 00AEC021 */  addu  $t8, $a1, $t6
/* 0045B7A4 930F0000 */  lbu   $t7, ($t8)
/* 0045B7A8 AC6E0000 */  sw    $t6, ($v1)
/* 0045B7AC 01C01025 */  move  $v0, $t6
/* 0045B7B0 508FFFFB */  beql  $a0, $t7, .L0045B7A0
/* 0045B7B4 244EFFFF */   addiu $t6, $v0, -1
.L0045B7B8:
/* 0045B7B8 8F998768 */  lw    $t9, %call16(readuinstr)($gp)
/* 0045B7BC 8F818C50 */  lw     $at, %got(lab_just_defined)($gp)
/* 0045B7C0 02202025 */  move  $a0, $s1
/* 0045B7C4 00C02825 */  move  $a1, $a2
/* 0045B7C8 0320F809 */  jalr  $t9
/* 0045B7CC AC200000 */   sw    $zero, ($at)
/* 0045B7D0 92220000 */  lbu   $v0, ($s1)
/* 0045B7D4 24010022 */  li    $at, 34
/* 0045B7D8 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045B7DC 14410017 */  bne   $v0, $at, .L0045B83C
/* 0045B7E0 24060038 */   li    $a2, 56
/* 0045B7E4 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0045B7E8 8F858044 */  lw    $a1, %got(RO_1000D415)($gp)
/* 0045B7EC 8E040000 */  lw    $a0, ($s0)
/* 0045B7F0 24070038 */  li    $a3, 56
/* 0045B7F4 0320F809 */  jalr  $t9
/* 0045B7F8 24A5D415 */   addiu $a1, %lo(RO_1000D415) # addiu $a1, $a1, -0x2beb
/* 0045B7FC 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045B800 8E040000 */  lw    $a0, ($s0)
/* 0045B804 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0045B808 0320F809 */  jalr  $t9
/* 0045B80C 00000000 */   nop   
/* 0045B810 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045B814 8E040000 */  lw    $a0, ($s0)
/* 0045B818 8F9980A0 */  lw    $t9, %call16(fflush)($gp)
/* 0045B81C 0320F809 */  jalr  $t9
/* 0045B820 00000000 */   nop   
/* 0045B824 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045B828 8F998728 */  lw    $t9, %call16(abort)($gp)
/* 0045B82C 0320F809 */  jalr  $t9
/* 0045B830 00000000 */   nop   
/* 0045B834 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045B838 92220000 */  lbu   $v0, ($s1)
.L0045B83C:
/* 0045B83C 2401001F */  li    $at, 31
/* 0045B840 10410028 */  beq   $v0, $at, .L0045B8E4
/* 0045B844 00000000 */   nop   
.L0045B848:
/* 0045B848 8F998470 */  lw    $t9, %call16(oneinstruction)($gp)
/* 0045B84C 0320F809 */  jalr  $t9
/* 0045B850 00000000 */   nop   
/* 0045B854 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045B858 02202025 */  move  $a0, $s1
/* 0045B85C 8F998768 */  lw    $t9, %call16(readuinstr)($gp)
/* 0045B860 8F858950 */  lw     $a1, %got(ustrptr)($gp)
/* 0045B864 0320F809 */  jalr  $t9
/* 0045B868 8CA50000 */   lw    $a1, ($a1)
/* 0045B86C 92220000 */  lbu   $v0, ($s1)
/* 0045B870 24010022 */  li    $at, 34
/* 0045B874 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045B878 14410017 */  bne   $v0, $at, .L0045B8D8
/* 0045B87C 24060039 */   li    $a2, 57
/* 0045B880 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0045B884 8F858044 */  lw    $a1, %got(RO_1000D3DC)($gp)
/* 0045B888 8E040000 */  lw    $a0, ($s0)
/* 0045B88C 24070039 */  li    $a3, 57
/* 0045B890 0320F809 */  jalr  $t9
/* 0045B894 24A5D3DC */   addiu $a1, %lo(RO_1000D3DC) # addiu $a1, $a1, -0x2c24
/* 0045B898 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045B89C 8E040000 */  lw    $a0, ($s0)
/* 0045B8A0 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0045B8A4 0320F809 */  jalr  $t9
/* 0045B8A8 00000000 */   nop   
/* 0045B8AC 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045B8B0 8E040000 */  lw    $a0, ($s0)
/* 0045B8B4 8F9980A0 */  lw    $t9, %call16(fflush)($gp)
/* 0045B8B8 0320F809 */  jalr  $t9
/* 0045B8BC 00000000 */   nop   
/* 0045B8C0 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045B8C4 8F998728 */  lw    $t9, %call16(abort)($gp)
/* 0045B8C8 0320F809 */  jalr  $t9
/* 0045B8CC 00000000 */   nop   
/* 0045B8D0 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045B8D4 92220000 */  lbu   $v0, ($s1)
.L0045B8D8:
/* 0045B8D8 2401001F */  li    $at, 31
/* 0045B8DC 1441FFDA */  bne   $v0, $at, .L0045B848
/* 0045B8E0 00000000 */   nop   
.L0045B8E4:
/* 0045B8E4 8F838B6C */  lw     $v1, %got(curproc)($gp)
/* 0045B8E8 8F898B68 */  lw     $t1, %got(sizethreshold)($gp)
/* 0045B8EC 8C630000 */  lw    $v1, ($v1)
/* 0045B8F0 8D290000 */  lw    $t1, ($t1)
/* 0045B8F4 946A0012 */  lhu   $t2, 0x12($v1)
/* 0045B8F8 012A082A */  slt   $at, $t1, $t2
/* 0045B8FC 5420000D */  bnezl $at, .L0045B934
/* 0045B900 8C620018 */   lw    $v0, 0x18($v1)
/* 0045B904 8F998A90 */  lw     $t9, %got(ctrl_head)($gp)
/* 0045B908 8F390000 */  lw    $t9, ($t9)
/* 0045B90C 53200015 */  beql  $t9, $zero, .L0045B964
/* 0045B910 8FBF0034 */   lw    $ra, 0x34($sp)
/* 0045B914 8F99849C */  lw    $t9, %call16(proc_suppressed)($gp)
/* 0045B918 0320F809 */  jalr  $t9
/* 0045B91C 00000000 */   nop   
/* 0045B920 1040000F */  beqz  $v0, .L0045B960
/* 0045B924 8FBC0030 */   lw    $gp, 0x30($sp)
/* 0045B928 8F838B6C */  lw     $v1, %got(curproc)($gp)
/* 0045B92C 8C630000 */  lw    $v1, ($v1)
/* 0045B930 8C620018 */  lw    $v0, 0x18($v1)
.L0045B934:
/* 0045B934 A072000B */  sb    $s2, 0xb($v1)
/* 0045B938 A072000D */  sb    $s2, 0xd($v1)
/* 0045B93C 50400009 */  beql  $v0, $zero, .L0045B964
/* 0045B940 8FBF0034 */   lw    $ra, 0x34($sp)
/* 0045B944 8C4C0000 */  lw    $t4, ($v0)
.L0045B948:
/* 0045B948 A192000B */  sb    $s2, 0xb($t4)
/* 0045B94C 8C4D0000 */  lw    $t5, ($v0)
/* 0045B950 A1B2000D */  sb    $s2, 0xd($t5)
/* 0045B954 8C420004 */  lw    $v0, 4($v0)
/* 0045B958 5440FFFB */  bnezl $v0, .L0045B948
/* 0045B95C 8C4C0000 */   lw    $t4, ($v0)
.L0045B960:
/* 0045B960 8FBF0034 */  lw    $ra, 0x34($sp)
.L0045B964:
/* 0045B964 8FB00024 */  lw    $s0, 0x24($sp)
/* 0045B968 8FB10028 */  lw    $s1, 0x28($sp)
/* 0045B96C 8FB2002C */  lw    $s2, 0x2c($sp)
/* 0045B970 03E00008 */  jr    $ra
/* 0045B974 27BD0068 */   addiu $sp, $sp, 0x68
    .type oneprocprepass, @function
    .size oneprocprepass, .-oneprocprepass
    .end oneprocprepass

)"");

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

glabel prepass
    .ent prepass
    # 0043771C optinit
/* 0045C150 3C1C0FBC */  .cpload $t9
/* 0045C154 279CE140 */  
/* 0045C158 0399E021 */  
/* 0045C15C 8F8189D8 */  lw     $at, %got(maxlabnam)($gp)
/* 0045C160 27BDFFC0 */  addiu $sp, $sp, -0x40
/* 0045C164 8F9988C8 */  lw    $t9, %call16(alloc_mark)($gp)
/* 0045C168 AC200000 */  sw    $zero, ($at)
/* 0045C16C 8F818AFC */  lw     $at, %got(someusefp)($gp)
/* 0045C170 AFBF0034 */  sw    $ra, 0x34($sp)
/* 0045C174 AFBC0030 */  sw    $gp, 0x30($sp)
/* 0045C178 A0200000 */  sb    $zero, ($at)
/* 0045C17C 8F818A60 */  lw     $at, %got(inlopt)($gp)
/* 0045C180 AFB5002C */  sw    $s5, 0x2c($sp)
/* 0045C184 AFB40028 */  sw    $s4, 0x28($sp)
/* 0045C188 AFB30024 */  sw    $s3, 0x24($sp)
/* 0045C18C AFB20020 */  sw    $s2, 0x20($sp)
/* 0045C190 AFB1001C */  sw    $s1, 0x1c($sp)
/* 0045C194 AFB00018 */  sw    $s0, 0x18($sp)
/* 0045C198 8F8488E8 */  lw     $a0, %got(lda_heap)($gp)
/* 0045C19C 0320F809 */  jalr  $t9
/* 0045C1A0 A0200000 */   sb    $zero, ($at)
/* 0045C1A4 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045C1A8 AFA20038 */  sw    $v0, 0x38($sp)
/* 0045C1AC 240500A1 */  li    $a1, 161
/* 0045C1B0 8F828DF4 */  lw     $v0, %got(ldatab)($gp)
/* 0045C1B4 30A80003 */  andi  $t0, $a1, 3
/* 0045C1B8 244330A4 */  addiu $v1, $v0, 0x30a4
.L0045C1BC:
/* 0045C1BC 24420004 */  addiu $v0, $v0, 4
/* 0045C1C0 1443FFFE */  bne   $v0, $v1, .L0045C1BC
/* 0045C1C4 AC40FFFC */   sw    $zero, -4($v0)
/* 0045C1C8 1100000F */  beqz  $t0, .L0045C208
/* 0045C1CC 00002025 */   move  $a0, $zero
/* 0045C1D0 8F8F8DC8 */  lw     $t7, %got(fsymtab)($gp)
/* 0045C1D4 8F988DCC */  lw     $t8, %got(gp_rel_tab)($gp)
/* 0045C1D8 00003880 */  sll   $a3, $zero, 2
/* 0045C1DC 01003025 */  move  $a2, $t0
/* 0045C1E0 00EF1821 */  addu  $v1, $a3, $t7
/* 0045C1E4 00F81021 */  addu  $v0, $a3, $t8
.L0045C1E8:
/* 0045C1E8 24840001 */  addiu $a0, $a0, 1
/* 0045C1EC AC600000 */  sw    $zero, ($v1)
/* 0045C1F0 AC400000 */  sw    $zero, ($v0)
/* 0045C1F4 24630004 */  addiu $v1, $v1, 4
/* 0045C1F8 14C4FFFB */  bne   $a2, $a0, .L0045C1E8
/* 0045C1FC 24420004 */   addiu $v0, $v0, 4
/* 0045C200 10850013 */  beq   $a0, $a1, .L0045C250
/* 0045C204 00000000 */   nop   
.L0045C208:
/* 0045C208 8F898DCC */  lw     $t1, %got(gp_rel_tab)($gp)
/* 0045C20C 8F998DC8 */  lw     $t9, %got(fsymtab)($gp)
/* 0045C210 00043880 */  sll   $a3, $a0, 2
/* 0045C214 00055080 */  sll   $t2, $a1, 2
/* 0045C218 01493021 */  addu  $a2, $t2, $t1
/* 0045C21C 00E91021 */  addu  $v0, $a3, $t1
/* 0045C220 00F91821 */  addu  $v1, $a3, $t9
.L0045C224:
/* 0045C224 24420010 */  addiu $v0, $v0, 0x10
/* 0045C228 AC600000 */  sw    $zero, ($v1)
/* 0045C22C AC40FFF0 */  sw    $zero, -0x10($v0)
/* 0045C230 AC600004 */  sw    $zero, 4($v1)
/* 0045C234 AC40FFF4 */  sw    $zero, -0xc($v0)
/* 0045C238 AC600008 */  sw    $zero, 8($v1)
/* 0045C23C AC40FFF8 */  sw    $zero, -8($v0)
/* 0045C240 AC60000C */  sw    $zero, 0xc($v1)
/* 0045C244 AC40FFFC */  sw    $zero, -4($v0)
/* 0045C248 1446FFF6 */  bne   $v0, $a2, .L0045C224
/* 0045C24C 24630010 */   addiu $v1, $v1, 0x10
.L0045C250:
/* 0045C250 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 0045C254 8F928954 */  lw     $s2, %got(perm_heap)($gp)
/* 0045C258 8F818C4C */  lw     $at, %got(prochead)($gp)
/* 0045C25C 2404003C */  li    $a0, 60
/* 0045C260 02402825 */  move  $a1, $s2
/* 0045C264 0320F809 */  jalr  $t9
/* 0045C268 AC200000 */   sw    $zero, ($at)
/* 0045C26C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045C270 24110001 */  li    $s1, 1
/* 0045C274 2413FFFF */  li    $s3, -1
/* 0045C278 8F838B70 */  lw     $v1, %got(indirprocs)($gp)
/* 0045C27C 24140002 */  li    $s4, 2
/* 0045C280 2404003C */  li    $a0, 60
/* 0045C284 AC620000 */  sw    $v0, ($v1)
/* 0045C288 AC530000 */  sw    $s3, ($v0)
/* 0045C28C AC400004 */  sw    $zero, 4($v0)
/* 0045C290 AC400028 */  sw    $zero, 0x28($v0)
/* 0045C294 A0400008 */  sb    $zero, 8($v0)
/* 0045C298 A051000B */  sb    $s1, 0xb($v0)
/* 0045C29C A040000C */  sb    $zero, 0xc($v0)
/* 0045C2A0 A051000D */  sb    $s1, 0xd($v0)
/* 0045C2A4 A040000E */  sb    $zero, 0xe($v0)
/* 0045C2A8 A040000F */  sb    $zero, 0xf($v0)
/* 0045C2AC A0400014 */  sb    $zero, 0x14($v0)
/* 0045C2B0 A0400015 */  sb    $zero, 0x15($v0)
/* 0045C2B4 A0510009 */  sb    $s1, 9($v0)
/* 0045C2B8 A051000A */  sb    $s1, 0xa($v0)
/* 0045C2BC A0540010 */  sb    $s4, 0x10($v0)
/* 0045C2C0 A4400012 */  sh    $zero, 0x12($v0)
/* 0045C2C4 AC400018 */  sw    $zero, 0x18($v0)
/* 0045C2C8 AC40001C */  sw    $zero, 0x1c($v0)
/* 0045C2CC AC400020 */  sw    $zero, 0x20($v0)
/* 0045C2D0 AC400034 */  sw    $zero, 0x34($v0)
/* 0045C2D4 AC400038 */  sw    $zero, 0x38($v0)
/* 0045C2D8 AC40002C */  sw    $zero, 0x2c($v0)
/* 0045C2DC AC400030 */  sw    $zero, 0x30($v0)
/* 0045C2E0 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 0045C2E4 02402825 */  move  $a1, $s2
/* 0045C2E8 0320F809 */  jalr  $t9
/* 0045C2EC 00000000 */   nop   
/* 0045C2F0 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045C2F4 8F838B74 */  lw     $v1, %got(ciaprocs)($gp)
/* 0045C2F8 8F958950 */  lw     $s5, %got(ustrptr)($gp)
/* 0045C2FC AC620000 */  sw    $v0, ($v1)
/* 0045C300 AC530000 */  sw    $s3, ($v0)
/* 0045C304 AC400004 */  sw    $zero, 4($v0)
/* 0045C308 AC400028 */  sw    $zero, 0x28($v0)
/* 0045C30C A0400008 */  sb    $zero, 8($v0)
/* 0045C310 A051000B */  sb    $s1, 0xb($v0)
/* 0045C314 A040000C */  sb    $zero, 0xc($v0)
/* 0045C318 A051000D */  sb    $s1, 0xd($v0)
/* 0045C31C A040000E */  sb    $zero, 0xe($v0)
/* 0045C320 A040000F */  sb    $zero, 0xf($v0)
/* 0045C324 A0400014 */  sb    $zero, 0x14($v0)
/* 0045C328 A0400015 */  sb    $zero, 0x15($v0)
/* 0045C32C A0510009 */  sb    $s1, 9($v0)
/* 0045C330 A051000A */  sb    $s1, 0xa($v0)
/* 0045C334 A0540010 */  sb    $s4, 0x10($v0)
/* 0045C338 A4400012 */  sh    $zero, 0x12($v0)
/* 0045C33C AC400018 */  sw    $zero, 0x18($v0)
/* 0045C340 AC40001C */  sw    $zero, 0x1c($v0)
/* 0045C344 AC400020 */  sw    $zero, 0x20($v0)
/* 0045C348 AC400034 */  sw    $zero, 0x34($v0)
/* 0045C34C AC400038 */  sw    $zero, 0x38($v0)
/* 0045C350 AC40002C */  sw    $zero, 0x2c($v0)
/* 0045C354 AC400030 */  sw    $zero, 0x30($v0)
/* 0045C358 8F998768 */  lw    $t9, %call16(readuinstr)($gp)
/* 0045C35C 8F918DA4 */  lw     $s1, %got(u)($gp)
/* 0045C360 8EA50000 */  lw    $a1, ($s5)
/* 0045C364 0320F809 */  jalr  $t9
/* 0045C368 02202025 */   move  $a0, $s1
/* 0045C36C 92220000 */  lbu   $v0, ($s1)
/* 0045C370 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045C374 24140022 */  li    $s4, 34
/* 0045C378 244BFFE0 */  addiu $t3, $v0, -0x20
/* 0045C37C 2D6C0060 */  sltiu $t4, $t3, 0x60
/* 0045C380 11800009 */  beqz  $t4, .L0045C3A8
/* 0045C384 2413007A */   li    $s3, 122
/* 0045C388 8F8F8044 */  lw    $t7, %got(D_10010D2C)($gp)
/* 0045C38C 000B6943 */  sra   $t5, $t3, 5
/* 0045C390 000D7080 */  sll   $t6, $t5, 2
/* 0045C394 25EF0D2C */  addiu $t7, %lo(D_10010D2C) # addiu $t7, $t7, 0xd2c
/* 0045C398 01EEC021 */  addu  $t8, $t7, $t6
/* 0045C39C 8F190000 */  lw    $t9, ($t8)
/* 0045C3A0 01795004 */  sllv  $t2, $t9, $t3
/* 0045C3A4 294C0000 */  slti  $t4, $t2, 0
.L0045C3A8:
/* 0045C3A8 15800048 */  bnez  $t4, .L0045C4CC
/* 0045C3AC 24120021 */   li    $s2, 33
/* 0045C3B0 8F908908 */  lw     $s0, %got(err)($gp)
.L0045C3B4:
/* 0045C3B4 1242002A */  beq   $s2, $v0, .L0045C460
/* 0045C3B8 00000000 */   nop   
/* 0045C3BC 12620028 */  beq   $s3, $v0, .L0045C460
/* 0045C3C0 00000000 */   nop   
.L0045C3C4:
/* 0045C3C4 8F998470 */  lw    $t9, %call16(oneinstruction)($gp)
/* 0045C3C8 0320F809 */  jalr  $t9
/* 0045C3CC 00000000 */   nop   
/* 0045C3D0 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045C3D4 02202025 */  move  $a0, $s1
/* 0045C3D8 8EA50000 */  lw    $a1, ($s5)
/* 0045C3DC 8F998768 */  lw    $t9, %call16(readuinstr)($gp)
/* 0045C3E0 0320F809 */  jalr  $t9
/* 0045C3E4 00000000 */   nop   
/* 0045C3E8 92220000 */  lbu   $v0, ($s1)
/* 0045C3EC 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045C3F0 2406003A */  li    $a2, 58
/* 0045C3F4 16820016 */  bne   $s4, $v0, .L0045C450
/* 0045C3F8 2407003A */   li    $a3, 58
/* 0045C3FC 8F99886C */  lw    $t9, %call16(write_string)($gp)
/* 0045C400 8F858044 */  lw    $a1, %got(RO_1000D484)($gp)
/* 0045C404 8E040000 */  lw    $a0, ($s0)
/* 0045C408 0320F809 */  jalr  $t9
/* 0045C40C 24A5D484 */   addiu $a1, %lo(RO_1000D484) # addiu $a1, $a1, -0x2b7c
/* 0045C410 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045C414 8E040000 */  lw    $a0, ($s0)
/* 0045C418 8F998864 */  lw    $t9, %call16(writeln)($gp)
/* 0045C41C 0320F809 */  jalr  $t9
/* 0045C420 00000000 */   nop   
/* 0045C424 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045C428 8E040000 */  lw    $a0, ($s0)
/* 0045C42C 8F9980A0 */  lw    $t9, %call16(fflush)($gp)
/* 0045C430 0320F809 */  jalr  $t9
/* 0045C434 00000000 */   nop   
/* 0045C438 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045C43C 8F998728 */  lw    $t9, %call16(abort)($gp)
/* 0045C440 0320F809 */  jalr  $t9
/* 0045C444 00000000 */   nop   
/* 0045C448 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045C44C 92220000 */  lbu   $v0, ($s1)
.L0045C450:
/* 0045C450 12420003 */  beq   $s2, $v0, .L0045C460
/* 0045C454 00000000 */   nop   
/* 0045C458 1662FFDA */  bne   $s3, $v0, .L0045C3C4
/* 0045C45C 00000000 */   nop   
.L0045C460:
/* 0045C460 5642000D */  bnel  $s2, $v0, .L0045C498
/* 0045C464 244DFFE0 */   addiu $t5, $v0, -0x20
/* 0045C468 8F998474 */  lw    $t9, %call16(oneprocprepass)($gp)
/* 0045C46C 0320F809 */  jalr  $t9
/* 0045C470 00000000 */   nop   
/* 0045C474 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045C478 02202025 */  move  $a0, $s1
/* 0045C47C 8EA50000 */  lw    $a1, ($s5)
/* 0045C480 8F998768 */  lw    $t9, %call16(readuinstr)($gp)
/* 0045C484 0320F809 */  jalr  $t9
/* 0045C488 00000000 */   nop   
/* 0045C48C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045C490 92220000 */  lbu   $v0, ($s1)
/* 0045C494 244DFFE0 */  addiu $t5, $v0, -0x20
.L0045C498:
/* 0045C498 2DAF0060 */  sltiu $t7, $t5, 0x60
/* 0045C49C 11E00009 */  beqz  $t7, .L0045C4C4
/* 0045C4A0 00000000 */   nop   
/* 0045C4A4 8F998044 */  lw    $t9, %got(D_10010D2C)($gp)
/* 0045C4A8 000D7143 */  sra   $t6, $t5, 5
/* 0045C4AC 000EC080 */  sll   $t8, $t6, 2
/* 0045C4B0 27390D2C */  addiu $t9, %lo(D_10010D2C) # addiu $t9, $t9, 0xd2c
/* 0045C4B4 03385821 */  addu  $t3, $t9, $t8
/* 0045C4B8 8D6A0000 */  lw    $t2, ($t3)
/* 0045C4BC 01AA4804 */  sllv  $t1, $t2, $t5
/* 0045C4C0 292F0000 */  slti  $t7, $t1, 0
.L0045C4C4:
/* 0045C4C4 11E0FFBB */  beqz  $t7, .L0045C3B4
/* 0045C4C8 00000000 */   nop   
.L0045C4CC:
/* 0045C4CC 8F99847C */  lw    $t9, %call16(processcallgraph)($gp)
/* 0045C4D0 0320F809 */  jalr  $t9
/* 0045C4D4 00000000 */   nop   
/* 0045C4D8 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045C4DC 8F998484 */  lw    $t9, %call16(findallvregs)($gp)
/* 0045C4E0 8F848C4C */  lw     $a0, %got(prochead)($gp)
/* 0045C4E4 0320F809 */  jalr  $t9
/* 0045C4E8 8C840000 */   lw    $a0, ($a0)
/* 0045C4EC 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045C4F0 8FA50038 */  lw    $a1, 0x38($sp)
/* 0045C4F4 8F9988CC */  lw    $t9, %call16(alloc_release)($gp)
/* 0045C4F8 8F8488E8 */  lw     $a0, %got(lda_heap)($gp)
/* 0045C4FC 0320F809 */  jalr  $t9
/* 0045C500 00000000 */   nop   
/* 0045C504 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045C508 8F99876C */  lw    $t9, %call16(initur)($gp)
/* 0045C50C 8F848DD0 */  lw     $a0, %got(sourcename)($gp)
/* 0045C510 0320F809 */  jalr  $t9
/* 0045C514 00000000 */   nop   
/* 0045C518 8FBF0034 */  lw    $ra, 0x34($sp)
/* 0045C51C 8FBC0030 */  lw    $gp, 0x30($sp)
/* 0045C520 8FB00018 */  lw    $s0, 0x18($sp)
/* 0045C524 8FB1001C */  lw    $s1, 0x1c($sp)
/* 0045C528 8FB20020 */  lw    $s2, 0x20($sp)
/* 0045C52C 8FB30024 */  lw    $s3, 0x24($sp)
/* 0045C530 8FB40028 */  lw    $s4, 0x28($sp)
/* 0045C534 8FB5002C */  lw    $s5, 0x2c($sp)
/* 0045C538 03E00008 */  jr    $ra
/* 0045C53C 27BD0040 */   addiu $sp, $sp, 0x40
    .type prepass, @function
    .size prepass, .-prepass
    .end prepass

)"");

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
