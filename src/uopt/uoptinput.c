#include <stdlib.h>
#include <string.h>
#include "libxmalloc/xmalloc.h"
#include "libu/libu.h"
#include "uoptions.h"
#include "ucode.h"
#include "uoptdata.h"
#include "uoptinput.h"
#include "uoptutil.h"
#include "uoptppss.h"
#include "uoptkill.h"
#include "uoptcontrolflow.h"

struct ParameterList {
    int key;
    void *value;
    struct ParameterList *next;
};

/*
0043CFCC readnxtinst
*/
int parcount;

/*
0043CFCC readnxtinst
*/
bool passbyfp;

/*
0043CFCC readnxtinst
*/
struct Statement *lastmst;

/*
0043A844 in_outparlist
0043A88C insert_outparlist
0043CFCC readnxtinst
*/
struct ParameterList *outparhead;

/*
00439C40 getop
*/
bool branched_back_lab;

/*
0043A0CC copyline
0043CFCC readnxtinst
00456310 one_block
00456A2C oneproc
0045806C main
*/
void getop(void) {
    struct Label *lab;
    enum Uopcode op;
    int merged_label;

restart: // TODO: change to tail recursion when O2 works
    readuinstr(&u, ustrptr);
    op = OPC;
    if (op == Ubsub) {
        OPC = Usub;
    }
    if (op == Ulab) {
        lab = searchlab(IONE, curproc->labels);
        if (!lab->referenced) {
            goto restart;
        }
        if (lab->merged_label != 0) {
            goto restart;
        }
        branched_back_lab = lab->branched_back; // 1 byte
    } else if (op == Ufjp || op == Utjp || op == Uujp) {
        merged_label = searchlab(IONE, curproc->labels)->merged_label;
        if (merged_label != 0) {
            IONE = merged_label;
        }
    } else if (op == Uldc && DTYPE == Gdt) {
        merged_label = searchlab(CONSTVAL.swpart.Ival, curproc->labels)->merged_label;
        if (merged_label != 0) {
            CONSTVAL.swpart.Ival = merged_label;
        }
    } else if (op == Uxjp) {
        merged_label = searchlab(LENGTH, curproc->labels)->merged_label;
        if (merged_label != 0) {
            LENGTH = merged_label;
        }
    }
    switch (op) {
        case Uadj:
        case Uand:

        case Ubsub:
        case Uchkh:
        case Uchkl:
        case Uchkn:
        case Uchkt:

        case Udif:

        case Uequ:

        case Ugeq:
        case Ugrt:
        case Uidx:

        case Uinn:
        case Uint:
        case Uior:

        case Uixa:
        case Ulbd:

        case Uleq:
        case Ules:

        case Ulnot:
        case Umax:
        case Umin:

        case Umus:
        case Uneq:

        case Unot:
        case Uodd:

        case Urnd:

        case Usgs:
        case Ushl:
        case Ushr:
        case Usign:
        case Usqrt:

        case Uubd:

        case Uuni:
        case Uxor:
            if (LEXLEV != 0) {
                LEXLEV = 0;
            }
            break;

        default:
            break;
    }

    if (optab[op].ends_bb) {
        endblock = true;
        return;
    }
    if (op == Uilod || op == Uistr || op == Umov || op == Uirld || op == Uirst) {
        if (IS_VOLATILE_ATTR(LEXLEV)) {
            // Is this a change to volatile instructions (v as in volatile)?
            switch (op) {
                case Uilod:
                    OPC = Uildv;
                    break;
                case Uistr:
                    OPC = Uistv;
                    break;
                case Umov:
                    OPC = Umovv;
                    break;
                case Uirld:
                    OPC = Uirlv;
                    break;
                case Uirst:
                    OPC = Uirsv;
                    break;
                default:
                    caseerror(1, 132, "uoptinput.p", 11);
                    break;
            }
        }
    } else if (curmst == NULL && ustackbot == ustack) {
        // block ends if >= 20 var refs (default limit)
        endblock = varrefs >= curvarreflimit;
    }
}

/*
0043A0CC copyline
*/
bool formal_parm_vreg(int addr) {
    struct VariableLocation loc;
    struct Expression *entry;

    loc.blockno = curblk;
    loc.addr = addr;
    loc.memtype = Pmt;

    for (entry = table[isvarhash(loc)]; entry != NULL; entry = entry->next) {
        if (entry->type == isvar && addreq(entry->data.isvar_issvar.location, loc)) {
            return entry->data.isvar_issvar.unk22;
        }
    }

    return false;
}

/*
0043A0CC copyline
*/
static void set_blklev(int blk, int level) {
    blklev[level - 1] = blk;
}

/*
0043CFCC readnxtinst
00456310 one_block
00456A2C oneproc
0045806C main
*/
void copyline(void) {
    int argNum;
    int new_pdeftabsize;
    int len;
    int i;
    bool cont;
    struct PdefEntry *pdef_entry;

    if (OPC == Uent) {
        entflag = EXTRNAL;
        if (IS_LOAD_STACKLIMIT_ON_ENTRY_ATTR(entflag) || IS_STACK_OVERFLOW_ATTR(entflag)) {
            no_r23 = true;
        }
        if (lang == LANG_ADA) {
            no_r3 = true;
        }
        uwrite(&u);
        curlevel = LEXLEV;
        curblk = IONE;
        set_blklev(IONE, LEXLEV);
        getop();
        TRAP_IF(OPC != Ucomm);
        len = CONSTVAL.swpart.Ival;
        for (i = 0; i < len; i++) {
            entnam0[i] = ustrptr[i];
        }
        entnam0len = len;
        while (entnam0[len - 1] == ' ') {
            entnam0len = --len;
        }
        if (proc_to_print[0] != ' ') {
            at_proc_to_print = true;
            cont = true;
            for (i = 0; cont && i < len; i++) {
                if (entnam0[i] != proc_to_print[i]) {
                    at_proc_to_print = false;
                    cont = false;
                }
            }
        }
        bitvectorsize = (curproc->bvsize >> 7) + 2;
    } else if (OPC == Uregs || OPC == Urlod || OPC == Urstr) {
        writeln(err.c_file);
        write_string(err.c_file, "uopt: Error: ", 13, 13);
        write_string(err.c_file, entnam0, 1024, entnam0len);
        write_string(err.c_file, ": optimized code not allowed as input", 37, 37);
        writeln(err.c_file);
        fflush(err.c_file);
        abort();
    } else if (OPC == Ulex) {
        set_blklev(IONE, LEXLEV);
    } else if (OPC == Updef) {
        if (aentptr != NULL) {
            aentptr->u.aent.blockno++;
            return;
        }
        argNum = OFFSET / 4;
        if ((LENGTH & 3) != 0) {
            LENGTH = LENGTH - (LENGTH & 3) + 4;
            OFFSET = argNum * 4;
        }
        if (allcallersave || argNum < 4 || lang == LANG_ADA) {
            if (!allcallersave && ++pdefno >= 3) {
                passedbyfp = false;
            }
            new_pdeftabsize = argNum + LENGTH;
            if (new_pdeftabsize >= pdeftabsize) {
                pdeftab = alloc_realloc(pdeftab, (pdeftabsize * 16 + 15) / 16, (new_pdeftabsize * 16 + 15) / 16, &perm_heap);
                for (i = pdeftabsize; i < new_pdeftabsize; i++) {
                    pdeftab[i].opc = Unop;
                }
                pdeftabsize = new_pdeftabsize;
            }
            pdef_entry = &pdeftab[argNum];
            pdef_entry->outmode = (LEXLEV & OUT_MODE) != 0;
            pdef_entry->opc = Updef;
            pdef_entry->dtype = DTYPE;
            pdef_entry->inmode = (LEXLEV & IN_MODE) != 0;
            pdef_entry->size = LENGTH;
            pdef_entry->offset = OFFSET;
            pdef_entry->unk3 = !formal_parm_vreg(OFFSET);
            if (!allcallersave) {
                if (DTYPE != Qdt && DTYPE != Rdt) {
                    passedbyfp = false;
                }
                if (passedbyfp) {
                    offsetpassedbyint = OFFSET + LENGTH;
                }
            }
            pdefmax = MAX(argNum, pdefmax);
        }
    } else if (OPC == Uoptn) {
        getoption(IONE, LENGTH);
    }

    switch (OPC) {
        case Ucsym:
        case Uesym:
        case Ufsym:
        case Ugsym:
        case Ulsym:
        case Usdef:
        case Uvreg:
        case Umsym:
        case Uksym:
        case Uosym:
            lastcopiedu = u;
            break;
        default:
            break;
    }
    if (OPC != Uvreg && OPC != Unop) {
        uwrite(&u);
    }
    if (OPC == Uloc) {
        curlocpg = LEXLEV;
        curlocln = IONE;
    }
}

/*
0043CFCC readnxtinst
*/
void createcvtl(int bitsize, int dtype) {
    OPC = Ucvtl;
    IONE = bitsize;
    DTYPE = dtype;
    LEXLEV = 0;
    readnxtinst();
}

/*
0043CFCC readnxtinst
*/
struct Expression *in_outparlist(int key) {
    struct ParameterList *pos = outparhead;

    while (pos != NULL) {
        if (pos->key == key) {
            return pos->value;
        }
        pos = pos->next;
    }

    return NULL;
}

/*
0043CFCC readnxtinst
*/
void insert_outparlist(int key, struct Expression *value) {
    struct ParameterList *item = alloc_new(sizeof(struct ParameterList), &perm_heap);
    item->key = key;
    item->value = value;
    item->next = outparhead;
    outparhead = item;
}

/*
0043A8F0 constexp
0043CFCC readnxtinst
*/
bool constexp(struct Expression *entry) {
    switch (entry->type) {
        case isvar:
        case isilda:
        case issvar:
            return false;

        case islda:
        case isconst:
        case isrconst:
            return true;

        default:
            // handle isop, assume not empty or dumped
            if (entry->datatype != Adt && entry->datatype != Hdt && entry->datatype != Jdt && entry->datatype != Ldt) {
                return false;
            }

            switch (entry->data.isop.opc) {
                case Uiequ:
                case Uigeq:
                case Uigrt:
                case Uildv:
                case Uileq:
                case Uiles:
                case Uilod:
                case Uineq:
                    return false;

                default:
                    if (!constexp(entry->data.isop.op1)) {
                        return false;
                    }
                    if (!optab[entry->data.isop.opc].is_binary_op) {
                        return true;
                    }
                    return constexp(entry->data.isop.op2);
            }
    }
}

/*
0043CFCC readnxtinst
0046E77C oneloopblockstmt
004710F0 str_to_temporary
004737E0 par_to_str
00473F04 pmov_to_mov
*/
void appendstorelist(void) {
    struct VarAccessList *item;
    struct Graphnode *graphnode;

    if (curgraphnode->varlisthead == NULL) {
        item = alloc_new(sizeof(struct VarAccessList), &perm_heap);
        curgraphnode->varlisthead = item;
    } else {
        curgraphnode->varlisttail->next = alloc_new(sizeof(struct VarAccessList), &perm_heap);
        item = curgraphnode->varlisttail->next;
    }
    if (item == NULL) {
        outofmem = true;
        return;
    }
    graphnode = curgraphnode;
    item->prev = graphnode->varlisttail;
    graphnode->varlisttail = item;
    item->next = NULL;
    item->type = 1;
    item->unk8 = false;
    item->data.store = stattail;
    stattail->u.store.var_access_list_item = item;
}

/*
0043ABD0 incroccurrence
0043CBFC func_0043CBFC
0043CFCC readnxtinst
0046D428 oneloopblockexpr
*/
void appendbbvarlst(struct Expression *var) {
    struct VarAccessList *item;
    struct Graphnode *graphnode;

    if (curgraphnode->varlisthead == NULL) {
        item = alloc_new(sizeof(struct VarAccessList), &perm_heap);
        curgraphnode->varlisthead = item;
    } else {
        curgraphnode->varlisttail->next = alloc_new(sizeof(struct VarAccessList), &perm_heap);
        item = curgraphnode->varlisttail->next;
    }
    if (item == NULL) {
        outofmem = true;
        return;
    }
    graphnode = curgraphnode;
    item->prev = graphnode->varlisttail;
    graphnode->varlisttail = item;
    item->next = NULL;
    item->type = 2;
    item->unk8 = false;
    item->data.var = var;
    var->var_access_list = item;
}

/*
0043CFCC readnxtinst
0046D428 oneloopblockexpr
*/
void incroccurrence(struct Expression **entry) {
    struct VarAccessList *list;
    struct Statement *stat;
    bool done;

    done = false;
    if (!has_ilod(*entry)) {
        list = curgraphnode->varlisthead;
        while (list != NULL && !done) {
            stat = list->data.store;
            if (list->type == 1 &&
                (stat->opc == Uisst || stat->opc == Ustr) &&
                *entry == stat->expr->data.isvar_issvar.assigned_value &&
                !stat->expr->unk2 &&
                stat->expr->data.isvar_issvar.location.memtype != Rmt &&
                stat->expr->data.isvar_issvar.size >= 4 &&
                stat->expr->count != 0)
            {
                if ((!stat->expr->data.isvar_issvar.unk22 ||
                    curblk != stat->expr->data.isvar_issvar.location.blockno) &&
                    !doingcopy && !curproc->has_trap)
                {
                    stat->u.store.unk1D = false;
                    done = true;
                    stat->expr->count++;
                    switch ((*entry)->type) {
                        case isop:
                            decreasecount((*entry)->data.isop.op1);
                            if (optab[(*entry)->data.isop.opc].is_binary_op) {
                                decreasecount((*entry)->data.isop.op2);
                            }
                            break;

                        case empty:
                        case islda:
                        case isconst:
                        case isvar:
                        case isilda:
                        case issvar:
                        case isrconst:
                            dbgerror(430);
                            break;

                        default:
                            caseerror(1, 433, "uoptinput.p", 11);
                            break;
                    }

                    *entry = stat->expr;
                    if (!stat->expr->data.isvar_issvar.unk22) {
                        lodkillprev(stat->expr);
                    }
                    if ((*entry)->count == 1) {
                        appendbbvarlst(*entry);
                        if ((*entry)->data.isvar_issvar.unk22) {
                            curgraphnode->varlisttail->unk8 = true;
                        }
                    }
                } else {
                    list = NULL;
                }
            } else {
                list = list->next;
            }
        }
    }

    if (!done) {
        increasecount(*entry);
    }
}

/*
0043AEC4 bigtree
0043CFCC readnxtinst
*/
bool bigtree(struct Expression *expr, int levels) {
    if (levels == 0) {
        return true;
    }
    if (expr->type != isop) {
        return false;
    }
    return bigtree(expr->data.isop.op1, levels - 1);
}

/*
0043AF30 treekilled
0043CE64 func_0043CE64
0043CFCC readnxtinst
0046D158 unroll_check_istr_propcopy
0046D2C0 unroll_check_irst_propcopy
*/
bool treekilled(struct Expression *expr) {
    bool result;

    switch (expr->type) {
        case isvar:
        case issvar:
            return expr->unk2;

        case islda:
        case isconst:
        case isilda:
        case isrconst:
            return false;

        default:
            result = treekilled(expr->data.isop.op1);
            if (expr->data.isop.opc == Uildv || expr->data.isop.opc == Uilod) {
                if (!result) {
                    result = expr->unk2;
                }
            } else if (optab[expr->data.isop.opc].is_binary_op) {
                if (!result) {
                    result = treekilled(expr->data.isop.op2);
                }
                switch (expr->data.isop.opc) {
                    case Uiequ:
                    case Uigeq:
                    case Uigrt:
                    case Uileq:
                    case Uiles:
                    case Uineq:
                        if (!result) {
                            result = expr->unk2;
                        }
                        break;

                    default:
                        break;
                }
            }
            return result;
    }
}

/*
0043B504 readnxtinst_searchloop
*/
static bool number_in_realstore(union Constant number) {
    struct RealstoreData *real;
    int i;

    real = realstore;
    for (i = 0; i < (number.real.disp >> 8); i++) {
        real = real->next;
    }

    return strncmp(ustrptr, &real->c[number.real.disp & 0xff], number.real.len) == 0;
}

/*
0043CFCC readnxtinst
*/
static void ustack_push(struct Expression *expr) {
    if (ustack->up == NULL) {
        ustack->up = alloc_new(sizeof(struct UstackEntry), &perm_heap);
        ustack->up->up = NULL;
        ustack->up->down = ustack;
    }
    ustack = ustack->up;
    ustack->expr = expr;
    ustack->value = 0;
}

/*
0043CFCC readnxtinst
*/
static void ustack_add_value(void) {
    int value = ustack->value;

    if (value != 0) {
        ustack->value = 0;
        ustack->expr = binopwithconst(Uadd, ustack->expr, value);
    }
}

/*
0043CFCC readnxtinst
    used for ilod and istr
*/
static void ustack_add_index(void) {
    int value = ustack->value;

    if (value < -0x8000 || value > 0x7FFF) {
        ustack->value = value - (value & 0xFFFF8000);
        ustack->expr = binopwithconst(Uadd, ustack->expr, (value & 0xFFFF8000));
    }
}

/*
0043CFCC readnxtinst
*/
static void parstack_push(struct Statement *par) {
    if (parstack->up == NULL) {
        parstack->up = alloc_new(sizeof(struct ParstackEntry), &perm_heap);
        parstack->up->up = NULL;
        parstack->up->down = parstack;
    }
    parstack = parstack->up;
    parstack->par = par;
}

/*
0043CFCC readnxtinst
    replace addr with addr+1...????
*/
static struct Expression *func_0043B334(struct Expression *stexpr) {
    struct Expression *lda;
    bool found;

    if (stexpr->type == isconst) {
        if ((stexpr->datatype != Jdt || stexpr->data.isconst.number.intval  != 0x7FFFFFFF) &&
            (stexpr->datatype != Ldt || stexpr->data.isconst.number.uintval != 0xFFFFFFFF)) {
            return enter_const(stexpr->data.isconst.number.intval + 1, stexpr->datatype, curgraphnode);
        }

        return NULL;
    }

    TRAP_IF(stexpr->type != islda);
    stexpr->data.islda_isilda.offset = stexpr->data.islda_isilda.offset;
    lda = table[stexpr->table_index];
    found = false;
    while (!found && lda != NULL) {
        if (lda->type == islda &&
                lda->data.islda_isilda.offset == stexpr->data.islda_isilda.offset + 1 &&
                addreq(lda->data.islda_isilda.address, stexpr->data.islda_isilda.address) &&
                lda->data.islda_isilda.size == stexpr->data.islda_isilda.size) {
            found = true;
        } else {
            lda = lda->next;
        }
    }

    if (!found) {
        lda = appendchain(stexpr->table_index);
        lda->type = islda;
        lda->datatype = Adt;
        lda->data.islda_isilda.address = stexpr->data.islda_isilda.address;
        lda->data.islda_isilda.size = stexpr->data.islda_isilda.size;
        lda->data.islda_isilda.offset = stexpr->data.islda_isilda.offset + 1;
        lda->var_access_list = NULL;
        lda->data.islda_isilda.level = stexpr->data.islda_isilda.level;
        lda->graphnode = curgraphnode;
    }
    return lda;
}

/*
0043C248 cvt_to_float
0043C56C transform_float_div
0043CFCC readnxtinst
*/
static struct Expression *readnxtinst_searchloop(unsigned short tableIdx, struct VariableLocation *loc, struct Expression *stexpr1, struct Expression *stexpr2) {
    bool sp33;
    bool sp31;
    bool sp30;
    bool var_equivalence;
    struct Expression *expr;

    expr = table[tableIdx];
    sp31 = false;
    sp30 = false;
    var_equivalence = false;

    if (DTYPE == Sdt) {
        if (OPC != Uldc) {
            if (OPC != Uisld && OPC != Uisst && OPC != Ulod && OPC != Ustr) {
                expr = NULL;
            } else if (LENGTH > 4) {
                // small string optimization?
                var_equivalence = true;
            }
        }
    }

    sp33 = false;
    while (!sp33 && !var_equivalence && expr != NULL) {
        if (expr->type == isop || expr->type == isilda) {
            if (expr->graphnode != curgraphnode) {
                goto next;
            }
        }

        switch (OPC) {
            case Ulod:
            case Ustr:
                if (expr->type == isvar && addreq(expr->data.isvar_issvar.location, *loc)) {
                    if (expr->data.isvar_issvar.veqv) {
                        var_equivalence = true;
                        break;
                    }

                    sp33 = expr->graphnode == curgraphnode && !expr->unk2;
                    if (expr->data.isvar_issvar.unk22) {
                        sp30 = true;
                    }

                    if (!sp33 && expr->graphnode == curgraphnode) {
                        sp31 = true;
                    }
                }
                break;

            case Uisld:
            case Uisst:
                if (expr->type == issvar && addreq(expr->data.isvar_issvar.location, *loc)) {
                    if (expr->data.isvar_issvar.veqv) {
                        var_equivalence = true;
                        break;
                    }

                    sp33 = curgraphnode == expr->graphnode && !expr->unk2 &&
                             !expr->data.isvar_issvar.outer_stack->data.isvar_issvar.veqv;
                    if (expr->data.isvar_issvar.unk22) {
                        sp30 = true;
                    }

                    if (!sp33 && expr->graphnode == curgraphnode) {
                        sp31 = true;
                    }
                }
                break;

            case Ulda:
                if (expr->type == islda && addreq(expr->data.islda_isilda.address, *loc)) {
                    if (expr->data.islda_isilda.size == LENGTH && expr->data.islda_isilda.offset == OFFSET) {
                        sp33 = true;
                    }
                }
                break;

            case Uilda:
                if (expr->type == isilda && addreq(expr->data.islda_isilda.address, *loc) &&
                        expr->data.islda_isilda.size == LENGTH && expr->data.islda_isilda.offset == OFFSET) {
                    sp33 = !expr->data.islda_isilda.outer_stack->data.isvar_issvar.veqv;
                }
                break;

            case Uldc:
                if (expr->type == isconst && expr->datatype == DTYPE) {
                    if (DTYPE == Adt || DTYPE == Fdt || DTYPE == Gdt || DTYPE == Hdt || DTYPE == Jdt || DTYPE == Ldt || DTYPE == Ndt) {
                        if (expr->data.isconst.number.intval == CONSTVAL.swpart.Ival) {
                            sp33 = true;
                        }
                    } else if (DTYPE == Idt || DTYPE == Kdt) {
                        if (expr->data.isconst.number.intval  == CONSTVAL.dwpart.dwval_h &&
                            expr->data.isconst.number.intval2 == CONSTVAL.dwpart.dwval_l) {
                            sp33 = true;
                        }
                    } else if (CONSTVAL.swpart.Ival == expr->data.isconst.number.real.len &&
                            number_in_realstore(expr->data.isconst.number)) {
                        sp33 = true;
                    }
                }

                break;

            case Uldrc:
                if (expr->type == isrconst && expr->datatype == DTYPE && expr->data.isrconst.value == IONE) {
                    sp33 = true;
                }
                break;

            case Uadd:
            case Uand:
            case Uint:
            case Uior:
            case Umpy:
            case Uuni:
            case Uxor:
                if (expr->type == isop && expr->data.isop.opc == OPC && expr->datatype == DTYPE) {
                    if ((expr->data.isop.op1 == stexpr1 && expr->data.isop.op2 == stexpr2) ||
                        (expr->data.isop.op1 == stexpr2 && expr->data.isop.op2 == stexpr1)) {
                        if (expr->data.isop.aux2.v1.overflow_attr == IS_OVERFLOW_ATTR(LEXLEV)) {
                            sp33 = true;
                        }
                    }
                }
                break;

            case Uequ:
            case Uneq:
                if (expr->type == isop && expr->data.isop.opc == OPC && expr->datatype == DTYPE) {
                    if ((expr->data.isop.op1 == stexpr1 && expr->data.isop.op2 == stexpr2) ||
                        (expr->data.isop.op1 == stexpr2 && expr->data.isop.op2 == stexpr1)) {
                        sp33 = true;
                    }
                }
                break;

            case Ubsub:
            case Udif:
            case Udiv:
            case Umax:
            case Umin:
            case Umod:
            case Umus:
            case Urem:
            case Ushl:
            case Ushr:
            case Usign:
            case Usub:
                if (expr->type == isop && expr->data.isop.opc == OPC && expr->datatype == DTYPE) {
                    if (expr->data.isop.op1 == stexpr1 && expr->data.isop.op2 == stexpr2) {
                        if (expr->data.isop.aux2.v1.overflow_attr == IS_OVERFLOW_ATTR(LEXLEV)) {
                            sp33 = true;
                        }
                    }
                }
                break;

            case Ugeq:
            case Ugrt:
            case Uleq:
            case Ules:
                if (expr->type == isop && expr->data.isop.opc == OPC && expr->datatype == DTYPE) {
                    if (expr->data.isop.op1 == stexpr1 && expr->data.isop.op2 == stexpr2) {
                        sp33 = true;
                    }
                }
                break;

            case Uinn:
                if (expr->type == isop && expr->data.isop.opc == OPC && expr->datatype == DTYPE) {
                    if (expr->data.isop.op1 == stexpr1 && expr->data.isop.op2 == stexpr2) {
                        if (IONE == expr->data.isop.aux2.v1.unk3C) {
                            sp33 = true;
                        }
                    }
                }
                break;

            case Uixa:
                if (expr->type == isop && expr->data.isop.opc == OPC && expr->datatype == DTYPE) {
                    if (expr->data.isop.op1 == stexpr1 && expr->data.isop.op2 == stexpr2) {
                        if (IONE == expr->data.isop.datasize) {
                            sp33 = true;
                        }
                    }
                }
                break;

            case Uabs:
            case Ulnot:
            case Uneg:
            case Unot:
            case Uodd:
            case Usgs:
            case Usqr:
            case Usqrt:
                if (expr->type == isop && expr->data.isop.opc == OPC && expr->datatype == DTYPE) {
                    if (expr->data.isop.op1 == stexpr1) {
                        if (expr->data.isop.aux2.v1.overflow_attr == IS_OVERFLOW_ATTR(LEXLEV)) {
                            sp33 = true;
                        }
                    }
                }
                break;

            case Uchkh:
            case Uchkl:
            case Ucvtl:
            case Udec:
            case Uinc:
                if (expr->type == isop && expr->data.isop.opc == OPC && expr->datatype == DTYPE) {
                    if (expr->data.isop.op1 == stexpr1) {
                        if (expr->data.isop.datasize == IONE) {
                            if (expr->data.isop.aux2.v1.overflow_attr == IS_OVERFLOW_ATTR(LEXLEV)) {
                                sp33 = true;
                            }
                        }
                    }
                }
                break;

            case Ucvt:
            case Urnd:
            case Utyp:
                if (expr->type == isop && expr->data.isop.opc == OPC && expr->datatype == DTYPE && expr->data.isop.aux.cvtfrom == DTYPE2) {
                    if (expr->data.isop.op1 == stexpr1) {
                        if (expr->data.isop.aux2.v1.overflow_attr == IS_OVERFLOW_ATTR(LEXLEV)) {
                            sp33 = true;
                        }
                    }
                }
                break;

            case Uadj:
                if (expr->type == isop && expr->data.isop.opc == OPC) {
                    if (expr->data.isop.datasize == OFFSET && expr->data.isop.aux2.v1.unk3C == LENGTH) {
                        if (expr->data.isop.op1 == stexpr1) {
                            sp33 = true;
                        }
                    }
                }
                break;

            case Uchkn:
                if (expr->type == isop && expr->data.isop.opc == OPC) {
                    if (stexpr1 == expr->data.isop.op1) {
                        sp33 = true;
                    }
                }
                break;

            case Uilod:
            case Uirld:
                if (expr->type == isop && expr->data.isop.opc == OPC && expr->datatype == DTYPE) {
                    if (expr->data.isop.op1 == stexpr1) {
                        if (expr->data.isop.datasize == IONE && expr->data.isop.aux2.v1.unk3C == LENGTH) {
                            sp33 = !expr->unk2;
                            sp31 = !sp33;
                        }
                    }
                }
                break;

            case Uildv:
            case Uirlv:
                while (expr->next != NULL) {
                    expr = expr->next;
                }
                break;

            case Uiequ:
            case Uineq:
                if (expr->type == isop && expr->data.isop.opc == OPC) {
                    if ((expr->data.isop.op1 == stexpr1 && expr->data.isop.op2 == stexpr2) ||
                        (expr->data.isop.op1 == stexpr2 && expr->data.isop.op2 == stexpr1)) {
                        if (expr->data.isop.datasize == LENGTH) {
                            sp33 = !expr->unk2;
                            sp31 = !sp33;
                        }
                    }
                }
                break;

            case Uigeq:
            case Uigrt:
            case Uileq:
            case Uiles:
                if (expr->type == isop && expr->data.isop.opc == OPC) {
                    if (expr->data.isop.op1 == stexpr1 && expr->data.isop.op2 == stexpr2) {
                        if (expr->data.isop.datasize == LENGTH) {
                            sp33 = !expr->unk2;
                            sp31 = !sp33;
                        }
                    }
                }
                break;

            default:
                caseerror(1, 706, "uoptinput.p", 0xB);
                break;

            case Ulca:
                break;

        }

next:
        if (!sp33) {
            expr = expr->next;
        }
    }

    if (!sp33 || var_equivalence) {
        expr = appendchain(tableIdx);
        if (outofmem) {
            return expr;
        }

        expr->graphnode = curgraphnode;

        // originally performs useless checks for below opcodes including Ulca Ulda Uldc, then overwrites with && below
        if (OPC == Uisld || OPC == Uisst || OPC == Ulod || OPC == Ustr) {
                expr->data.isvar_issvar.veqv = var_equivalence;
                expr->data.isvar_issvar.unk22 = !var_equivalence && sp30;
        }

        if (sp31) {
            expr->unk3 = false;
        } else if (OPC == Uisld || OPC == Uisst || OPC == Ulod || OPC == Ustr ||
                   (OPC == Uiequ ||
                    OPC == Uigeq ||
                    OPC == Uigrt ||
                    OPC == Uileq ||
                    OPC == Uiles ||
                    OPC == Uineq ||
                    OPC == Uilod ||
                    OPC == Uirld)) {
                expr->unk3 = true;
        }
    }

    return expr;
}

/*
0043CFCC readnxtinst
*/
static void cvt_to_float(struct UstackEntry *ustackHead, struct VariableLocation *loc, struct Expression *stexpr1, struct Expression *stexpr2) {
    struct Expression *expr;
    unsigned int value;
    unsigned int exponent;
    bool done;

    OPC = Uldc;
    if (DTYPE == Rdt) {
        LENGTH = 4;
    } else {
        LENGTH = 8;
    }

    CONSTVAL.swpart.Ival = 0;
    if ((ustackHead->expr->datatype == Idt || ustackHead->expr->datatype == Jdt) && ustackHead->expr->data.isconst.number.intval < 0) {
        CONSTVAL.swpart.Ival = 1;
        ustrptr[0] = '-';
        value = -ustackHead->expr->data.isconst.number.intval;
    } else {
        value = ustackHead->expr->data.isconst.number.intval;
    }

    exponent = 1;
    done = false;

    do {
        if (value < exponent * 10 || exponent == 1000000000) {
            done = true;
        } else {
            exponent *= 10;
        }
    } while (!done);

    do {
        ustrptr[CONSTVAL.swpart.Ival++] = '0' + (char)(value / exponent);
        value %= exponent;
        if ((signed)(value ^ exponent) < 0) {
            value += exponent;
        }
        exponent /= 10;
    } while (exponent != 0);

    ustrptr[CONSTVAL.swpart.Ival++] = '.';
    ustrptr[CONSTVAL.swpart.Ival++] = '0';

    expr = readnxtinst_searchloop(realhash(CONSTVAL.swpart.Ival), loc, stexpr1, stexpr2);
    if (expr->type == empty) {
        expr->type = isconst;
        expr->datatype = DTYPE;
        if (realdispmod + CONSTVAL.swpart.Ival >= 0x100) {
            realdispmod = 0;
            realdispdiv++;
            currealpool->next = alloc_new(sizeof(struct RealstoreData), &perm_heap);
            currealpool = currealpool->next;
            currealpool->next = NULL;
        }

        memcpy(&currealpool->c[realdispmod], ustrptr, CONSTVAL.swpart.Ival);

        expr->data.isconst.number.real.len = CONSTVAL.swpart.Ival;
        expr->data.isconst.number.real.disp = (realdispdiv << 8) + realdispmod;
        expr->data.isconst.real_significand = ustackHead->expr->data.isconst.number.intval;
        expr->data.isconst.real_exponent = 0;
        expr->data.isconst.size = LENGTH;
        expr->var_access_list = NULL;
        realdispmod += CONSTVAL.swpart.Ival;
    }
    ustackHead->expr = expr;
}

/*
0043CFCC readnxtinst
*/
static struct Expression *transform_float_div(int real_significand, bool negative, int real_exponent, Datatype dtype, struct VariableLocation *loc, struct Expression *stexpr1, struct Expression *stexpr2) {
    int sp34;
    struct Expression *expr;
    bool done;
    int value;
    int exponent;

    real_exponent = -real_exponent;
    sp34 = 1;
    if (is_power2(real_significand)) {
        while (real_significand != 1) {
            // 5 ** 13
            if (sp34 == 1220703125) {
                return NULL;
            }
            sp34 *= 5;
            real_significand >>= 1;
            real_exponent--;
        }
    } else {
        while (real_significand != 1) {
            if (sp34 == 0x40000000) {
                return NULL;
            }
            real_significand /= 5;
            sp34 <<= 1;
            real_exponent--;
        }
    }


    OPC = Uldc;
    DTYPE = dtype;
    if (dtype == Rdt) {
        LENGTH = 4;
    } else {
        LENGTH = 8;
    }
    CONSTVAL.swpart.Ival = 0;
    if (negative) {
        CONSTVAL.swpart.Ival = 1;
        ustrptr[0] = '-';
    }

    exponent = 1;
    done = false;
    do {
        if (sp34 < exponent * 10 || exponent == 1000000000) {
            done = true;
        } else {
            exponent *= 10;
        }
    } while (!done);

    value = sp34;
    do {
        ustrptr[CONSTVAL.swpart.Ival++] = '0' + (char)(value / exponent);
        value %= exponent;
        if ((signed)(value ^ exponent) < 0) {
            value += exponent;
        }
        exponent /= 10;
    } while (exponent != 0);
    ustrptr[CONSTVAL.swpart.Ival++] = '.';
    ustrptr[CONSTVAL.swpart.Ival++] = '0';

    // Add exponent
    if (real_exponent != 0) {
        ustrptr[CONSTVAL.swpart.Ival++] = 'E';
        if (real_exponent < 0) {
            ustrptr[CONSTVAL.swpart.Ival++] = '-';
            value = -real_exponent;
        } else {
            value = real_exponent;
        }

        exponent = 1;
        do {
            if (value < exponent * 10) {
                done = true;
            } else {
                exponent *= 10;
            }
        } while (!done);

       do {
            ustrptr[CONSTVAL.swpart.Ival++] = '0' + (char) (value / exponent);
            value %= exponent;
            if ((signed)(value ^ exponent) < 0) {
                value += exponent;
            }
            exponent /= 10;
        }  while (exponent != 0);
    }

    expr = readnxtinst_searchloop(realhash(CONSTVAL.swpart.Ival), loc, stexpr1, stexpr2);
    if (expr->type == empty) {
        expr->type = isconst;
        expr->datatype = DTYPE;
        if (realdispmod + CONSTVAL.swpart.Ival >= 0x100) {
            realdispmod = 0;
            realdispdiv++;
            currealpool->next = alloc_new(sizeof(struct RealstoreData), &perm_heap);
            currealpool = currealpool->next;
            currealpool->next = NULL;

        }

        memcpy(&currealpool->c[realdispmod], ustrptr, CONSTVAL.swpart.Ival);

        expr->data.isconst.number.real.len = CONSTVAL.swpart.Ival;
        expr->data.isconst.number.real.disp = (realdispdiv << 8) + realdispmod;
        expr->data.isconst.size = LENGTH;
        if (negative) {
            expr->data.isconst.real_significand = -sp34;
        } else {
            expr->data.isconst.real_significand = sp34;
        }
        expr->data.isconst.real_exponent = real_exponent;
        expr->var_access_list = NULL;
        realdispmod += CONSTVAL.swpart.Ival;
    }
    return expr;
}

/*
0043CA8C link_ijp_labels
0043CFCC readnxtinst
*/
static void link_ijp_labels(struct IjpLabel *ijp) {
    struct Graphnode *targetnode;
    struct GraphnodeList *predecessors;
    struct GraphnodeList *successors;

    while (ijp != NULL) {
        targetnode = ingraph(ijp->num);
        if (targetnode == NULL) {
            appendgraph();
            if (outofmem) {
                return;
            }
            targetnode = graphtail;
            targetnode->blockno = ijp->num;
        }

        predecessors = alloc_new(sizeof(struct GraphnodeList), &perm_heap);
        if (predecessors == NULL) {
            outofmem = true;
            return;
        }
        predecessors->graphnode = curgraphnode;
        predecessors->next = targetnode->predecessors;
        targetnode->predecessors = predecessors;

        successors = alloc_new(sizeof(struct GraphnodeList), &perm_heap);
        if (successors == NULL) {
            outofmem = true;
            return;
        }
        successors->graphnode = targetnode;
        successors->next = curgraphnode->successors;
        curgraphnode->successors = successors;

        link_ijp_labels(ijp->left);
        ijp = ijp->right;
    }
}

/*
0043CFCC readnxtinst
*/
static void func_0043CBFC(struct UstackEntry *head) { // XXX: never called in oot
    struct VariableLocation shared_stack_location;
    unsigned short shared_hash;
    struct Expression *outer_stack;
    bool found;

    if (head->expr->data.isvar_issvar.location.addr != staticlinkloc) {
        decreasecount(head->expr);
        shared_stack_location.addr = staticlinkloc;
        shared_stack_location.blockno = curblk;
        shared_stack_location.memtype = Mmt;
        shared_hash = isvarhash(shared_stack_location);
        outer_stack = table[shared_hash];
        found = false;
        while (!found && outer_stack != NULL) {
            if (outer_stack->graphnode == curgraphnode
                    && outer_stack->type == isvar
                    && addreq(outer_stack->data.isvar_issvar.location, shared_stack_location)) {
                found = true;
            }
            if (!found) {
                outer_stack = outer_stack->next;
            }
        }

        if (!found) {
            outer_stack = appendchain(shared_hash);
            if (outofmem) {
                return;
            }

            outer_stack->data.isvar_issvar.veqv = false;
            outer_stack->data.isvar_issvar.unk22 = true;
            outer_stack->graphnode = curgraphnode;
        }

        if (outer_stack->type == empty) {
            outer_stack->type = isvar;
            outer_stack->data.isvar_issvar.assignment = NULL;
            outer_stack->datatype = Adt;
            outer_stack->data.isvar_issvar.size = 4;
            outer_stack->count = 0;
            outer_stack->data.isvar_issvar.copy = NULL;
            outer_stack->data.isvar_issvar.outer_stack = NULL;
            outer_stack->unk2 = false;
            outer_stack->unk3 = true;
            outer_stack->data.isvar_issvar.is_volatile = false;
            outer_stack->data.isvar_issvar.location = shared_stack_location;
        }

        head->expr = outer_stack;
        increasecount(outer_stack);

        if (outer_stack->count == 1) {
            appendbbvarlst(outer_stack);
            curgraphnode->varlisttail->unk8 = true;
        }
    }

    head->expr->data.isvar_issvar.location.level = 200;
    head->expr->data.isvar_issvar.unk22 = true;
}

/*
0043CFCC readnxtinst
*/
static bool func_0043CE64(struct Expression *stexpr1, int val) {
    struct Expression *expr;
    struct Statement *store;
    struct VarAccessList *var;

    var = curgraphnode->varlisttail;
    while (var != NULL) {
        if (var->type == 1) {
            store = var->data.store;
            if (store->opc == Uistr && store->expr == stexpr1 && store->u.store.u.istr.offset == val
                    && store->u.store.unk1F && store->u.store.u.istr.dtype == DTYPE && store->u.store.size == LENGTH
                    && !treekilled(store->u.store.expr)) {
                decreasecount(stexpr1);
                expr = var->data.store->u.store.expr;
                if (expr->type == isvar || expr->type == isop || expr->type == isilda || expr->type == issvar) {
                    expr->count++;
                }
                ustack->expr = expr;
                return true;
            }
        }
        var = var->prev;
    }
    return false;
}

/* 
0043A7DC createcvtl
0043CFCC readnxtinst
00456310 one_block
*/
void readnxtinst(void) {
    struct Expression *expr; // sp10C
    struct Expression *stexpr1; // spF8  $v0-0x18
    struct Expression *stexpr2; // spF4  $v0-0x1c
    struct Expression *stexpr3;
    struct VariableLocation loc; // spE4    $v0-0x28, -0x2c
    int increment_result; // spC4
    int tmp1;
    int tmp2;
    int tmp3;
    int length;
    int clab_blockno;
    unsigned short hash;
    Datatype dtype;
    int i;
    int stval1;
    int stval2;
    int stval3;
    bool eliminated;
    bool negative;
    bool at_current_realpool_entry;
    bool unk1C;
    bool unk1E;
    struct Expression *expr2;
    struct Statement *stmt;
    struct Graphnode *target_graphnode;
    struct GraphnodeList *successors;
    struct GraphnodeList *predecessors;
    bool stop;
    bool found;
    bool endblock_saved;
    struct Graphnode *graphnode;
    struct ParstackEntry *parstack_entry;

    if (!optab[OPC].executable) {
        copyline();
        extendstat(Unop);
        return;
    }

    if (ustack != ustackbot && ustack->expr->type == isvar && ustack->expr->data.isvar_issvar.location.memtype == Amt && OPC != Ustr) {
        // XXX: untested (Amt doesn't exist in C)
        TRAP_IF(ustack->expr->data.isvar_issvar.assignment != NULL);
        ustack->expr->unk2 = true;
        expr = appendchain(ustack->expr->table_index);
        expr->type = isvar;
        expr->datatype = ustack->expr->datatype;
        expr->unk2 = false;
        expr->unk3 = false;
        expr->count = 0;
        expr->graphnode = curgraphnode;
        expr->data.isvar_issvar.size = ustack->expr->data.isvar_issvar.size;
        expr->data.isvar_issvar.veqv = false;
        expr->data.isvar_issvar.unk22 = true;
        expr->data.isvar_issvar.is_volatile = false;
        expr->data.isvar_issvar.outer_stack = NULL;
        expr->data.isvar_issvar.location = ustack->expr->data.isvar_issvar.location;
        expr->data.isvar_issvar.location.level = ustack->expr->data.isvar_issvar.location.level;
        expr->data.isvar_issvar.copy = NULL;
        expr->data.isvar_issvar.assigned_value = ustack->expr;

        extendstat(Ustr);
        stattail->outpar = true;
        lastmst->u.mst.loc = expr->data.isvar_issvar.location.addr;
        insert_outparlist(expr->data.isvar_issvar.location.addr, expr);
        ustack = ustack->down;
        stattail->expr = expr;
        stattail->is_increment = false;
        stattail->unk2 = false;
        stattail->u.store.unk1C = false;
        stattail->u.store.unk1E = false;
        stattail->u.store.unk1D = false;
        stattail->u.store.unk1F = false;
        stattail->u.store.u.str.unk2C = 0;
        stattail->u.store.u.str.unk30 = 0;
        expr->data.isvar_issvar.assignment = NULL;
        appendstorelist();
        curgraphnode->varlisttail->unk8 = true;
        ustack_push(expr);
        increasecount(expr);
    }

    switch (OPC) {
        case Uldap: // XXX: untested
        case Uldsp:
            IONE = OPC == Uldap;
            OPC = Ulod;
            DTYPE = Adt;
            MTYPE = Rmt;
            OFFSET = r_sp;
            LENGTH = 4;

            loc.memtype = Rmt;
            loc.blockno = IONE;
            loc.addr = r_sp;

            expr = readnxtinst_searchloop(isvarhash(loc), &loc, stexpr1, stexpr2);
            if (outofmem) {
                return;
            }

            if (expr->type == empty) {
                expr->type = isvar;
                expr->data.isvar_issvar.location = loc;
                expr->data.isvar_issvar.assignment = NULL;
                expr->datatype = Adt;
                expr->data.isvar_issvar.size = 4;
                expr->count = 0;
                expr->data.isvar_issvar.copy = NULL;
                expr->data.isvar_issvar.outer_stack = NULL;
                expr->unk2 = true;
                expr->unk3 = false;
                expr->data.isvar_issvar.is_volatile = true;
                expr->data.isvar_issvar.location.level = curlevel;
            }

            ustack_push(expr);
            increasecount(expr);
            if (expr->count == 1) {
                appendbbvarlst(expr);
            }
            usefp = true;
            return;

        case Uisld: // XXX: untested
        case Ulod:
            if (dokpicopt && MTYPE == Smt && !in_fsym(IONE) && !is_gp_relative(IONE))  {
                OPC = Ulda;

                dtype = DTYPE;
                tmp2 = OFFSET & 0xffff;
                tmp3 = LENGTH;

                OFFSET2 = OFFSET;
                OFFSET &= 0xffff0000;
                readnxtinst();

                if (IS_VOLATILE_ATTR(LEXLEV)) {
                    OPC = Uildv;
                } else {
                    OPC = Uilod;
                }

                LEXLEV |= (tmp2 & 7) << 3;
                DTYPE = dtype;
                IONE = tmp2;
                OFFSET = 0;
                LENGTH = tmp3;
                readnxtinst();
                return;
            }

            if (MTYPE == Amt && in_outparlist(OFFSET) != NULL) {
                expr = in_outparlist(OFFSET);
                ustack_push(expr);
                increasecount(expr);
                return;
            }

            loc.memtype = MTYPE;
            loc.blockno = IONE;
            loc.addr = OFFSET;
            if (loc.memtype == Rmt) {
                loc.blockno = 0;
            }

            // searchloop
            expr = readnxtinst_searchloop(isvarhash(loc), &loc, stexpr1, stexpr2);
            if (outofmem) {
                return;
            }

            if (OPC == Uisld) {
                if (ustack->expr->type == isvar) {
                    func_0043CBFC(ustack);
                } else {
                    TRAP_IF(ustack->expr->type != issvar);
                    ustack->expr->data.isvar_issvar.location.level = 200;
                    ustack->expr->data.isvar_issvar.unk22 = true;
                    ustack->expr->var_access_list->unk8 = true;
                }
            }

            if (expr->type == empty) {
                if (OPC == Ulod) {
                    expr->type = isvar;
                } else {
                    expr->type = issvar;
                }
                expr->data.isvar_issvar.location = loc;
                expr->data.isvar_issvar.assignment = NULL;
                expr->datatype = DTYPE;
                expr->data.isvar_issvar.size = LENGTH;
                expr->data.isvar_issvar.location.level = blktolev(loc.blockno);
                expr->count = 0;
                expr->data.isvar_issvar.copy = NULL;

                if (OPC == Uisld) {
                    expr->data.isvar_issvar.unk3C = 0;
                    expr->unk4 = false;
                    expr->unk5 = 0;
                    expr->data.isvar_issvar.outer_stack = ustack->expr;
                } else {
                    expr->data.isvar_issvar.outer_stack = NULL;
                }

                if (!expr->data.isvar_issvar.veqv) {
                    expr->unk2 = false;
                    if (expr->unk3 && !expr->data.isvar_issvar.unk22) {
                        
                        expr->unk3 = !varkilled(expr, curgraphnode->varlisthead);
                    }
                } else {
                    expr->unk2 = true;
                    expr->unk3 = false;
                }

                expr->data.isvar_issvar.is_volatile = IS_VOLATILE_ATTR(LEXLEV);
            }

            if (OPC == Uisld) {
                ustack = ustack->down;
            }

            if (expr->data.isvar_issvar.assignment == NULL || !expr->data.isvar_issvar.assignment->u.store.unk1F) {
                ustack_push(expr);
                increasecount(expr);

                // unk22 == true if variable was used?
                if (!expr->data.isvar_issvar.unk22) {
                    lodkillprev(expr);
                }

                if (expr->count == 1 && MTYPE != Amt) {
                    appendbbvarlst(expr);
                    if (expr->data.isvar_issvar.unk22) {
                        curgraphnode->varlisttail->unk8 = true;
                    }
                }

                if (!expr->data.isvar_issvar.veqv) {
                    varrefs++;
                }
                return;
            } else if ((bigtree(expr->data.isvar_issvar.assigned_value, 20) || treekilled(expr->data.isvar_issvar.assigned_value))
                    || (expr->data.isvar_issvar.assigned_value->type == isop && expr->data.isvar_issvar.assigned_value->count == 1
                        && (!((expr->data.isvar_issvar.unk22 && expr->data.isvar_issvar.location.blockno == curblk)
                                || doingcopy || curproc->has_trap)
                            || has_ilod(expr->data.isvar_issvar.assigned_value))
                        && !constexp(expr->data.isvar_issvar.assigned_value))) {
                ustack_push(expr);
                expr->data.isvar_issvar.assignment->u.store.unk1D = false;

                if (expr->count == 0) {
                    if (!expr->data.isvar_issvar.unk22) {
                        lodkillprev(expr);
                    }

                    if (expr->data.isvar_issvar.location.memtype != Amt) {
                        appendbbvarlst(expr);
                        if (expr->data.isvar_issvar.unk22) {
                            curgraphnode->varlisttail->unk8 = true;
                        }
                    }
                }

                increasecount(expr);
                if (!expr->data.isvar_issvar.veqv) {
                    varrefs++;
                }
                return;
            }

            switch (expr->data.isvar_issvar.assigned_value->type) {
                case islda:
                case isconst:
                case isrconst:
                    ustack_push(expr->data.isvar_issvar.assigned_value);
                    if (expr->data.isvar_issvar.size < 4) {
                        createcvtl(expr->data.isvar_issvar.size * 8, expr->datatype);
                    }
                    return;

                case isvar:
                    ustack_push(expr->data.isvar_issvar.assigned_value);
                    expr->data.isvar_issvar.assigned_value->count++;
                    if (expr->data.isvar_issvar.size < expr->data.isvar_issvar.assigned_value->data.isvar_issvar.size) {
                        createcvtl(expr->data.isvar_issvar.size * 8, expr->datatype);
                    }
                    return;

                case isop:
                case isilda:
                case issvar:
                    switch (expr->data.isvar_issvar.assigned_value->type) {
                        case isop:
                            if (expr->data.isvar_issvar.size < 4) {
                                expr->data.isvar_issvar.assigned_value->count++;
                                ustack_push(expr->data.isvar_issvar.assigned_value);
                                if (expr->data.isvar_issvar.assigned_value->data.isop.opc != Ucvtl || expr->data.isvar_issvar.size * 8 < expr->data.isvar_issvar.assigned_value->data.isop.datasize) {
                                    if ((expr->data.isvar_issvar.assigned_value->data.isop.opc != Uildv && expr->data.isvar_issvar.assigned_value->data.isop.opc != Uilod) ||
                                            expr->data.isvar_issvar.size < expr->data.isvar_issvar.assigned_value->data.isop.aux2.v1.unk3C)
                                    {
                                        createcvtl(expr->data.isvar_issvar.size * 8, expr->datatype);
                                    }
                                }
                            } else {
                                dtype = expr->data.isvar_issvar.assigned_value->datatype;
                                if (expr->data.isvar_issvar.assigned_value->data.isop.opc == Uadd &&
                                        expr->data.isvar_issvar.assigned_value->data.isop.op2->type == isconst &&
                                        (dtype == Adt || dtype == Hdt || dtype == Jdt || dtype == Ldt)) {
                                    expr->data.isvar_issvar.assigned_value->data.isop.op1->count++;
                                    ustack_push(expr->data.isvar_issvar.assigned_value->data.isop.op1);
                                    ustack->value = expr->data.isvar_issvar.assigned_value->data.isop.op2->data.isconst.number.intval;
                                } else {
                                    expr->data.isvar_issvar.assigned_value->count++;
                                    ustack_push(expr->data.isvar_issvar.assigned_value);
                                }
                            }
                            return;

                        case isilda:
                            expr->data.isvar_issvar.assigned_value->count++;
                            ustack_push(expr->data.isvar_issvar.assigned_value);
                            return;

                        case issvar:
                            expr->data.isvar_issvar.assigned_value->count++;
                            ustack_push(expr->data.isvar_issvar.assigned_value);
                            if (expr->data.isvar_issvar.size < expr->data.isvar_issvar.assigned_value->data.isvar_issvar.size) {
                                createcvtl(expr->data.isvar_issvar.size * 8, expr->datatype);
                            }
                            return;

                        default:
                            caseerror(1, 1454, "uoptinput.p", 11);
                            return;
                    }

                default:
                    caseerror(1, 1438, "uoptinput.p", 11);
                    return;
            }
            return;

        case Uilda: // XXX: untested
        case Ulda:
            loc.memtype = MTYPE;
            loc.blockno = IONE;
            loc.addr = OFFSET2;
            if (loc.memtype == Rmt) {
                loc.blockno = 0;
            }

            if (curblk == loc.blockno && (lang == LANG_C || lang == LANG_PL1 || lang == LANG_RESERVED1)) {
                can_elim_tail = false;
            }

            if (lang == LANG_ADA && LENGTH == -1) {
                if (loc.memtype == Mmt) {
                    LENGTH = -4 - OFFSET;
                    loc.addr =  OFFSET;
                } else {
                    LENGTH = 0x7FFFFFFF;
                }
            }

            expr = readnxtinst_searchloop(isvarhash(loc), &loc, stexpr1, stexpr2);
            if (outofmem) {
                return;
            }

            if (OPC == Uilda) {
                if (ustack->expr->type == isvar) {
                    func_0043CBFC(ustack);
                } else {
                    TRAP_IF(ustack->expr->type != issvar);
                    ustack->expr->data.isvar_issvar.location.level = 200;
                    ustack->expr->data.isvar_issvar.unk22 = true;
                    ustack->expr->var_access_list->unk8 = true;
                }
            }

            if (expr->type == empty) {
                if (OPC == Ulda) {
                    expr->type = islda;
                } else {
                    expr->type = isilda;
                }

                expr->datatype = Adt;
                expr->count = 0;
                expr->data.islda_isilda.address = loc;
                expr->data.islda_isilda.size = LENGTH;
                expr->data.islda_isilda.level = blktolev(loc.blockno);
                expr->var_access_list = NULL;
                expr->data.islda_isilda.offset = OFFSET;

                if (OPC == Uilda) {
                    expr->count = 1;
                    expr->unk4 = false;
                    expr->unk5 = 0;
                    expr->data.islda_isilda.outer_stack = ustack->expr;
                    expr->data.islda_isilda.unk38 = 0;
                } else {
                    expr->data.islda_isilda.outer_stack = NULL;
                }
            } else if (OPC == Uilda) {
                increasecount(expr);
            }

            if (OPC == Uilda) {
                ustack->expr = expr;
            } else {
                ustack_push(expr);
            }
            return;

        case Ulbd: // XXX: untested
        case Uubd: // XXX: untested
            return;

        case Uldc:
            if ((DTYPE == Jdt || DTYPE == Ldt) && LENGTH < sizeoftyp(DTYPE)) {
                CONSTVAL.swpart.Ival = cutbits(CONSTVAL.swpart.Ival, LENGTH * 8, DTYPE);
                LENGTH = sizeoftyp(DTYPE);
            } else if ((DTYPE == Idt || DTYPE == Kdt) && LENGTH < sizeoftyp(DTYPE)) {
                // XXX: never happens in oot
                CONSTVAL.dwval = cutbits64(CONSTVAL.dwval, (int)(LENGTH * 8LL), DTYPE);
                LENGTH = sizeoftyp(DTYPE);
            }

            switch (DTYPE) {
                case Adt:
                case Fdt:
                case Gdt:
                case Hdt:
                case Jdt:
                case Ldt:
                case Ndt:
                    hash = isconsthash(CONSTVAL.swpart.Ival);
                    break;

                case Idt:
                case Kdt:
                    hash = isconsthash(CONSTVAL.dwpart.dwval_l);
                    break;

                default:
                    hash = realhash(CONSTVAL.swpart.Ival);
                    break;
            }

            expr = readnxtinst_searchloop(hash, &loc, stexpr1, stexpr2);
            if (outofmem) {
                return;
            }

            if (expr->type == empty) {
                expr->type = isconst;
                expr->count = 0;
                expr->datatype = DTYPE;
                switch (DTYPE) {
                    case Adt:
                    case Fdt:
                    case Gdt:
                    case Hdt:
                    case Jdt:
                    case Ldt:
                    case Ndt:
                        expr->data.isconst.number.intval = CONSTVAL.swpart.Ival;
                        break;

                    case Idt:
                    case Kdt:
                        expr->data.isconst.number.longval = CONSTVAL.dwval;
                        break;

                    default:
                        if (realdispmod + CONSTVAL.swpart.Ival >= 256) {
                            realdispdiv++;
                            realdispmod = 0;
                            currealpool->next = alloc_new(sizeof(struct RealstoreData), &perm_heap);
                            currealpool = currealpool->next;
                            currealpool->next = NULL;
                        }
                        if (CONSTVAL.swpart.Ival > 0) {
                            memcpy(&currealpool->c[realdispmod], ustrptr, CONSTVAL.swpart.Ival);
                        }
                        expr->data.isconst.number.real.len = CONSTVAL.swpart.Ival;
                        expr->data.isconst.number.real.disp = realdispdiv * 256 + realdispmod;
                        realdispmod += CONSTVAL.swpart.Ival;
                        expr->data.isconst.real_significand = getfloatval(expr, &expr->data.isconst.real_exponent);
                        break;
                }

                expr->var_access_list = NULL;
                expr->data.isconst.size = LENGTH;
            }

            ustack_push(expr);
            return;

        case Uldrc: // XXX: untested
            expr = readnxtinst_searchloop(isconsthash(IONE), &loc, stexpr1, stexpr2);
            if (outofmem) {
                return;
            }

            if (expr->type == empty) {
                expr->type = isrconst;
                expr->datatype = DTYPE;
                expr->count = 0;
                expr->data.isrconst.value = IONE;
                expr->data.isrconst.unk24 = LENGTH;
                expr->var_access_list = NULL;
            }

            ustack_push(expr);
            return;

        case Uadd:
        case Uand:
        case Ubsub: // XXX: untested
        case Udif: // XXX: untested
        case Udiv:
        case Uequ:
        case Ugeq:
        case Ugrt:
        case Uinn: // XXX: untested
        case Uint: // XXX: untested
        case Uior:
        case Uleq:
        case Ules:
        case Umax: // XXX: untested
        case Umin: // XXX: untested
        case Umod: // XXX: untested
        case Umpy:
        case Umus: // XXX: untested
        case Uneq:
        case Urem:
        case Ushl:
        case Ushr:
        case Usign: // XXX: untested
        case Usub:
        case Uuni: // XXX: untested
        case Uxor:
            stexpr2 = ustack->expr;
            stval2 = ustack->value;

            ustack = ustack->down;

            stexpr1 = ustack->expr;
            stval1 = ustack->value;

            eliminated = false;

            if ((OPC == Uadd || OPC == Usub) && (DTYPE == Adt || DTYPE == Hdt || DTYPE == Jdt || DTYPE == Ldt) &&
                    ((stexpr2->type == isconst && !(stexpr2->datatype == Fdt || stexpr2->datatype == Gdt || stexpr2->datatype == Ndt)) ||
                     (stexpr1->type == isconst && !(stexpr1->datatype == Fdt || stexpr1->datatype == Gdt || stexpr1->datatype == Ndt))) &&
                    !IS_OVERFLOW_ATTR(LEXLEV))
            {
                if (stexpr2->type == isconst) {
                    if (OPC == Uadd) {
                        ustack->value += stval2 + stexpr2->data.isconst.number.intval;
                        eliminated = true;
                    } else if (!subovfw(DTYPE, ustack->value, stval2 + stexpr2->data.isconst.number.intval)) {
                        ustack->value -= stexpr2->data.isconst.number.intval + stval2;
                        eliminated = true;
                    }
                } else if (OPC != Usub) {
                    ustack->value = stexpr1->data.isconst.number.intval + stval1 + stval2;
                    ustack->expr = stexpr2;
                    eliminated = true;
                }
                
            } else if (OPC == Umpy && (DTYPE == Jdt || DTYPE == Ldt) &&
                    (stexpr2->type == isconst || stexpr1->type == isconst) &&
                    !IS_OVERFLOW_ATTR(LEXLEV))
            {
                if (stexpr2->type == isconst) {
                    ustack->expr = binopwithconst(Umpy, stexpr1, stexpr2->data.isconst.number.intval + stval2);
                    ustack->value *= stexpr2->data.isconst.number.intval + stval2;
                } else {
                    ustack->expr = binopwithconst(Umpy, stexpr2, stexpr1->data.isconst.number.intval + stval1);
                    ustack->value = stval2 * (stexpr1->data.isconst.number.intval + stval1);
                }
                eliminated = true;
            } else if (!strictieee && OPC == Uadd && (DTYPE == Qdt || DTYPE == Rdt) &&
                    ((stexpr2->type == isconst && stexpr2->data.isconst.real_significand == 0) ||
                     (stexpr1->type == isconst && stexpr1->data.isconst.real_significand == 0)))
            {
                if (stexpr1->type == isconst && stexpr1->data.isconst.real_significand == 0) {
                    ustack->expr = stexpr2;
                    ustack->value = 0;
                }
                eliminated = true;
            } else if (!strictieee && OPC == Usub && (DTYPE == Qdt || DTYPE == Rdt) &&
                    stexpr2->type == isconst && stexpr2->data.isconst.real_significand == 0)
            {
                eliminated = true;
            } else if (OPC == Umpy && (DTYPE == Qdt || DTYPE == Rdt) &&
                    (stexpr2->type == isconst || stexpr1->type == isconst))
            {
                if (stexpr1->type == isconst) {
                    tmp1 = val_when_exponent0(stexpr1->data.isconst.real_significand, stexpr1->data.isconst.real_exponent);
                } else {
                    tmp1 = val_when_exponent0(stexpr2->data.isconst.real_significand, stexpr2->data.isconst.real_exponent);
                }
                switch (tmp1) {
                    case 0:
                        if (!strictieee) {
                            if (stexpr1->type == isconst) {
                                decreasecount(stexpr2);
                            } else {
                                decreasecount(stexpr1);
                                ustack->expr = stexpr2;
                                ustack->value = 0;
                            }
                            eliminated = true;
                        }
                        break;

                    case -1:
                    case 1:
                        if (stexpr1->type == isconst) {
                            ustack->expr = stexpr2;
                            ustack->value = 0;
                        }
                        if (tmp1 == -1) {
                            OPC = Uneg;
                            readnxtinst();
                        }
                        eliminated = true;
                        break;

                    case -2:
                    case 2:
                        if (stexpr1->type == isconst) {
                            stexpr2->count++;
                            ustack->value = 0;
                            ustack->expr = stexpr2;
                            ustack_push(stexpr2);
                            ustack->value = 0;
                        } else {
                            stexpr1->count++;
                            ustack_push(stexpr1);
                            ustack->value = 0;
                        }
                        OPC = Uadd;
                        readnxtinst();
                        eliminated = true;
                        if (tmp1 == -2) {
                            OPC = Uneg;
                            readnxtinst();
                        }
                        break;
                }
            } else if (OPC == Udiv && (DTYPE == Qdt || DTYPE == Rdt) && stexpr2->type == isconst) {
                tmp1 = stexpr2->data.isconst.real_significand;
                negative = tmp1 < 0;
                if (negative) {
                    tmp1 = -tmp1;
                }
                if (is_power2(tmp1) && stexpr2->data.isconst.real_exponent == 0) {
                    expr = transform_float_div(tmp1, negative, stexpr2->data.isconst.real_exponent, DTYPE, &loc, stexpr1, stexpr2);
                    if (expr != NULL) {
                        stexpr2 = expr;
                        OPC = Umpy;
                        DTYPE = expr->datatype;
                    }
                }
            } else {
                switch (OPC) {
                    case Uand:
                    case Uequ:
                    case Ugeq:
                    case Ugrt:
                    case Uior:
                    case Uleq:
                    case Ules:
                    case Uneq:
                    case Usub:
                    case Uxor:
                        if (stexpr1 == stexpr2 && stval1 == stval2) {
                            eliminated = true;
                            switch (OPC) {
                                case Uequ:
                                case Ugeq:
                                case Uleq:
                                    if (!(DTYPE == Qdt || DTYPE == Rdt)) {
                                        // an expression always equals itself
                                        ustack->expr = enter_const(true, Jdt, curgraphnode);
                                    } else {
                                        eliminated = false;
                                    }
                                    break;

                                case Ugrt:
                                case Ules:
                                case Uneq:
                                    if (!(DTYPE == Qdt || DTYPE == Rdt)) {
                                        ustack->expr = enter_const(false, Jdt, curgraphnode);
                                    } else {
                                        eliminated = false;
                                    }
                                    break;

                                case Uxor:
                                    // (a ^ a) == 0
                                    ustack->expr = enter_const(0, Jdt, curgraphnode);
                                    break;

                                case Usub:
                                    if (!strictieee || !(DTYPE == Qdt || DTYPE == Rdt)) {
                                        ustack->expr = enter_const(0, DTYPE, curgraphnode);
                                        if (DTYPE == Qdt || DTYPE == Rdt) {
                                            ustack->value = 0;
                                            ustack->expr->datatype = Jdt;
                                            cvt_to_float(ustack, &loc, stexpr1, stexpr2);
                                        }
                                    } else {
                                        eliminated = false;
                                    }
                                    break;

                                case Uand:
                                case Uior:
                                    break;

                                default:
                                    caseerror(1, 1798, "uoptinput.p", 11);
                                    break;
                            }

                            if (eliminated) {
                                if (OPC != Uand && OPC != Uior) {
                                    ustack->value = 0;
                                    decreasecount(stexpr1);
                                }
                                decreasecount(stexpr1);
                            }
                        } else {
                            switch (OPC) {
                                case Uequ:
                                case Ugeq:
                                case Ugrt:
                                case Uleq:
                                case Ules:
                                case Uneq:
                                    // x - y COMP 0 -> x COMP y
                                    // 0 COMP x - y -> x COMP y
                                    if (DTYPE == Qdt || DTYPE == Rdt) {
                                        if ((stexpr2->type == isconst && stexpr2->data.isconst.real_significand == 0 &&
                                             stexpr1->type == isop && stexpr1->data.isop.opc == Usub) ||
                                            (stexpr1->type == isconst && stexpr1->data.isconst.real_significand == 0 &&
                                             stexpr2->type == isop && stexpr2->data.isop.opc == Usub))
                                        {
                                            if (stexpr1->type == isop) {
                                                stexpr2 = stexpr1->data.isop.op2;
                                                expr = stexpr1->data.isop.op1;
                                                if (--stexpr1->count == 0) {
                                                    delentry(stexpr1);
                                                } else {
                                                    stexpr2->count++;
                                                    expr->count++;
                                                }
                                                stexpr1 = expr;
                                            } else {
                                                stexpr1 = stexpr2->data.isop.op2;
                                                expr = stexpr2->data.isop.op1;
                                                if (--stexpr2->count == 0) {
                                                    delentry(stexpr2);
                                                } else {
                                                    stexpr1->count++;
                                                    expr->count++;
                                                }
                                                stexpr2 = expr;
                                            }
                                            ustack->expr = stexpr1;
                                        }
                                    }
                                    break;

                                default:
                                    break;
                            }
                        }
                        break;

                    default:
                        break;
                }
            }

            if (eliminated) {
                return;
            }

            if ((OPC == Uequ || OPC == Uneq) && stexpr1->type != isop && !subovfw(DTYPE, stval2, stval1)) {
                if (stval2 - stval1 != 0) {
                    stexpr2 = binopwithconst(Uadd, stexpr2, stval2 - stval1);
                }
                ustack->value = 0;
            } else if (stval2 != 0) {
                if (OPC == Uadd && (DTYPE == Adt || DTYPE == Hdt || DTYPE == Jdt || DTYPE == Ldt) &&
                        !addovfw(DTYPE, ustack->value, stval2))
                {
                    ustack->value += stval2;
                } else if (OPC == Usub && (DTYPE == Adt || DTYPE == Hdt || DTYPE == Jdt || DTYPE == Ldt) &&
                        !subovfw(DTYPE, ustack->value, stval2))
                {
                    ustack->value -= stval2;
                } else {
                    stexpr2 = binopwithconst(Uadd, stexpr2, stval2);
                }
            }

            if (OPC != Uadd && OPC != Usub) {
                ustack_add_value();
                stexpr1 = ustack->expr;
            }

            if (OPC == Ugrt || OPC == Uleq) {
                if (!((DTYPE == Adt || DTYPE == Hdt || DTYPE == Jdt || DTYPE == Ldt) && (stexpr2->type == islda || stexpr2->type == isconst))) {
                    expr = stexpr1;
                    stexpr1 = stexpr2;
                    stexpr2 = expr;
                    if (OPC == Ugrt) {
                        OPC = Ules;
                    } else {
                        OPC = Ugeq;
                    }
                } else {
                    expr = func_0043B334(stexpr2);
                    if (expr != NULL) {
                        stexpr2 = expr;
                        if (OPC == Ugrt) {
                            OPC = Ugeq;
                        } else {
                            OPC = Ules;
                        }
                    }
                }
            } else if (OPC == Ugeq || OPC == Ules) {
                // c >= y -> y <  c + 1
                // c <  y -> y >= c + 1
                // ...what is this for?
                if ((DTYPE == Adt || DTYPE == Hdt || DTYPE == Jdt || DTYPE == Ldt) && (stexpr1->type == islda || stexpr1->type == isconst)) {
                    expr = func_0043B334(stexpr1);
                    if (expr != NULL) {
                        if (OPC == Ugeq) {
                            OPC = Ules;
                        } else {
                            OPC = Ugeq;
                        }
                        stexpr1 = stexpr2;
                        stexpr2 = expr;
                    }
                }
            // swap == and != if the left side isn't a var (even if the right side isn't one either)
            } else if (OPC == Uequ || OPC == Uneq) {
                if (stexpr1->type != isvar) {
                    expr = stexpr2;
                    stexpr2 = stexpr1;
                    stexpr1 = expr;
                }
            }

            expr = readnxtinst_searchloop(isophash(OPC, stexpr1, stexpr2), &loc, stexpr1, stexpr2);
            if (outofmem) {
                return;
            }
            if (expr->type == empty) {
                expr->type = isop;
                expr->datatype = DTYPE;
                switch (OPC) {
                    case Uequ:
                    case Ugeq:
                    case Ugrt:
                    case Uleq:
                    case Ules:
                    case Uneq:
                        expr->data.isop.datatype = Jdt;
                        break;

                    case Umus:
                        expr->data.isop.datatype = Sdt;
                        break;

                    default:
                        expr->data.isop.datatype = DTYPE;
                        break;
                }

                expr->data.isop.opc = OPC;
                expr->data.isop.op1 = stexpr1;
                expr->data.isop.op2 = stexpr2;
                switch (OPC) {
                    case Udif:
                    case Uinn:
                    case Uint:
                    case Umus:
                    case Uuni:
                        expr->data.isop.datasize = LENGTH;
                        break;

                    default:
                        break;
                }
                if (OPC == Uinn) {
                    expr->data.isop.aux2.v1.unk3C = IONE; // 'check flag'
                }
                expr->data.isop.aux2.v1.overflow_attr = IS_OVERFLOW_ATTR(LEXLEV);
                expr->count = 1;
                expr->data.isop.unk30 = 0;
                expr->unk5 = 0;
                expr->unk4 = false;
                switch (OPC) {
                    case Uequ:
                    case Ugeq:
                    case Ugrt:
                    case Uleq:
                    case Ules:
                    case Uneq:
                        expr->data.isop.aux.unk38_trep = NULL;
                        expr->data.isop.aux2.unk3C_trep = NULL;
                        break;

                    default:
                        break;
                }
            } else {
                incroccurrence(&expr);
            }
            ustack->expr = expr;
            return;

        case Uixa:
            stexpr2 = ustack->expr;
            stval2 = ustack->value;
            ustack = ustack->down;
            if (stexpr2->type == isconst) {
                ustack->value += (stexpr2->data.isconst.number.intval + stval2) * IONE;
                return;
            }
            if (stval2 != 0) {
                ustack->value += stval2 * IONE;
            }
            stexpr1 = ustack->expr;
            expr = readnxtinst_searchloop(isophash(OPC, stexpr1, stexpr2), &loc, stexpr1, stexpr2);
            if (outofmem) {
                return;
            }
            if (expr->type == empty) {
                expr->type = isop;
                expr->datatype = DTYPE;
                if (stexpr1->type != isop) {
                    expr->data.isop.datatype = stexpr1->datatype;
                } else {
                    expr->data.isop.datatype = stexpr1->data.isop.datatype;
                }

                expr->data.isop.op1 = stexpr1;
                expr->data.isop.opc = OPC;
                expr->count = 1;
                expr->data.isop.op2 = stexpr2;
                expr->data.isop.aux2.v1.overflow_attr = false;
                expr->data.isop.unk30 = 0;
                expr->unk5 = 0;
                expr->unk4 = false;
                expr->data.isop.datasize = IONE;
            } else {
                incroccurrence(&expr);
            }
            ustack->expr = expr;
            return;

        case Uidx: // XXX: untested
            stexpr3 = ustack->expr;
            stval3 = ustack->value;
            ustack = ustack->down;

            stexpr2 = ustack->expr;
            stval2 = ustack->value;
            ustack = ustack->down;

            stexpr1 = ustack->expr;
            stval1 = ustack->value;

            if (stexpr2->type == isconst) {
                ustack->expr = binopwithconst(Umpy, stexpr1, stexpr2->data.isconst.number.intval + stval2);
                ustack->value = stval1 * (stexpr2->data.isconst.number.intval + stval2);
            } else if (stexpr1->type == isconst) {
                ustack->expr = binopwithconst(Umpy, stexpr2, stexpr1->data.isconst.number.intval + stval1);
                ustack->value = stval2 * (stexpr1->data.isconst.number.intval + stval1);
            } else {
                if (stval2 != 0) {
                    stexpr2 = binopwithconst(Uadd, stexpr2, stval2);
                }
                ustack_add_value();
                OPC = Umpy;
                stexpr1 = ustack->expr;
                expr = readnxtinst_searchloop(isophash(Umpy, stexpr1, stexpr2), &loc, stexpr1, stexpr2);
                if (outofmem) {
                    return;
                }

                if (expr->type == empty) {
                    expr->type = isop;
                    expr->data.isop.opc = Umpy;
                    expr->data.isop.op1 = stexpr1;
                    expr->datatype = DTYPE;
                    expr->data.isop.datatype = DTYPE;
                    expr->data.isop.aux2.v1.overflow_attr = false;
                    expr->count = 1;
                    expr->data.isop.unk30 = 0;
                    expr->unk5 = 0;
                    expr->unk4 = false;
                    expr->data.isop.op2 = stexpr2;
                } else {
                    incroccurrence(&expr);
                }
                ustack->expr = expr;
            }

            stexpr1 = ustack->expr;
            stval1 = ustack->value;
            if (stexpr3->type == isconst) {
                ustack->value = stval1 + stexpr3->data.isconst.number.intval + stval3;
                return;
            }
            if (stexpr1->type == isconst) {
                ustack->expr = stexpr3;
                ustack->value = stval1 + stexpr1->data.isconst.number.intval + stval3;
                return;
            }
            if (stval3 != 0) {
                if (!addovfw(DTYPE, stval1, stval3)) {
                    ustack->value += stval3;
                } else {
                    stexpr3 = binopwithconst(Uadd, stexpr3, stval3);
                }
            }

            OPC = Uadd;
            stexpr2 = stexpr3;
            expr = readnxtinst_searchloop(isophash(Uadd, stexpr1, stexpr3), &loc, stexpr1, stexpr2);
            if (outofmem) {
                return;
            }
            if (expr->type == empty) {
                expr->type = isop;
                expr->datatype = DTYPE;
                expr->data.isop.datatype = DTYPE;
                expr->data.isop.opc = Uadd;
                expr->data.isop.op2 = stexpr3;
                expr->data.isop.aux2.v1.overflow_attr = false;
                expr->count = 1;
                expr->data.isop.unk30 = 0;
                expr->unk5 = 0;
                expr->unk4 = false;
                expr->data.isop.op1 = stexpr1;
            } else {
                incroccurrence(&expr);
            }
            ustack->expr = expr;
            return;

        case Uabs:
        case Ulnot:
        case Uneg:
        case Unot:
        case Uodd: // XXX: untested
        case Usgs: // XXX: untested
        case Usqr: // XXX: untested
        case Usqrt:
            stexpr1 = ustack->expr;
            at_current_realpool_entry = false; // s1
            if (OPC == Uneg && (DTYPE == Qdt || DTYPE == Rdt) && !IS_OVERFLOW_ATTR(LEXLEV)) {
                if (stexpr1->type == isconst) {
                    at_current_realpool_entry = realdispdiv == stexpr1->data.isconst.number.real.disp / 256;
                }
            }
            if (at_current_realpool_entry) {
                if (currealpool->c[stexpr1->data.isconst.number.real.disp & 0xff] != '-') {
                    // Negate operation, so we add a minus sign
                    CONSTVAL.swpart.Ival = stexpr1->data.isconst.number.real.len + 1;
                    ustrptr[0] = '-';
                    memcpy(ustrptr + 1, &currealpool->c[stexpr1->data.isconst.number.real.disp & 0xff], stexpr1->data.isconst.number.real.len);
                } else {
                    // Negate operation, so we remove the minus sign
                    CONSTVAL.swpart.Ival = stexpr1->data.isconst.number.real.len - 1;
                    memcpy(ustrptr, &currealpool->c[stexpr1->data.isconst.number.real.disp & 0xff] + 1, stexpr1->data.isconst.number.real.len - 1);
                }
                expr = readnxtinst_searchloop(realhash(CONSTVAL.swpart.Ival), &loc, stexpr1, stexpr2);
                if (outofmem) {
                    return;
                }
                if (expr->type == empty) {
                    expr->type = isconst;
                    expr->datatype = DTYPE;

                    // Copied from further up:
                    if (realdispmod + CONSTVAL.swpart.Ival >= 256) {
                        realdispdiv++;
                        realdispmod = 0;
                        currealpool->next = alloc_new(sizeof(struct RealstoreData), &perm_heap);
                        currealpool = currealpool->next;
                        currealpool->next = NULL;
                    }

                    if (CONSTVAL.swpart.Ival > 0) {
                        memcpy(&currealpool->c[realdispmod], ustrptr, CONSTVAL.swpart.Ival);
                    }
                    expr->data.isconst.number.real.len = CONSTVAL.swpart.Ival;
                    expr->data.isconst.number.real.disp = realdispdiv * 256 + realdispmod;
                    realdispmod += CONSTVAL.swpart.Ival;

                    if (ustack->expr->data.isconst.real_significand == 0x7FFFFFFF) {
                        expr->data.isconst.real_significand = 0x7FFFFFFF;
                    } else {
                        expr->data.isconst.real_significand = -ustack->expr->data.isconst.real_significand;
                    }
                    expr->data.isconst.real_exponent = ustack->expr->data.isconst.real_exponent;
                    expr->var_access_list = NULL;
                    expr->data.isconst.size = ustack->expr->data.isconst.size;
                }
            } else {
                if (OPC == Uneg && !IS_OVERFLOW_ATTR(LEXLEV)) {
                    ustack->value = -ustack->value;
                } else {
                    ustack_add_value();
                }

                stexpr1 = ustack->expr;
                expr = readnxtinst_searchloop(isophash(OPC, stexpr1, NULL), &loc, stexpr1, stexpr2);
                if (outofmem) {
                    return;
                }
                if (expr->type == empty) {
                    expr->type = isop;
                    expr->datatype = DTYPE;
                    if (OPC == Usgs) {
                        expr->data.isop.datatype = Sdt;
                    } else {
                        expr->data.isop.datatype = DTYPE;
                    }

                    expr->data.isop.opc = OPC;
                    expr->data.isop.op2 = NULL;
                    expr->data.isop.op1 = stexpr1;
                    if (OPC == Usgs) {
                        expr->data.isop.datasize = LENGTH;
                    }
                    expr->count = 1;
                    expr->data.isop.aux2.v1.overflow_attr = IS_OVERFLOW_ATTR(LEXLEV);
                    expr->data.isop.unk30 = 0;
                    expr->unk5 = 0;
                    expr->unk4 = false;
                } else {
                    incroccurrence(&expr);
                }
            }
            ustack->expr = expr;
            return;

        case Uchkh: // XXX: untested
        case Uchkl: // XXX: untested
        case Ucvtl:
        case Udec:
        case Uinc:
            eliminated = false;
            if (!IS_OVERFLOW_ATTR(LEXLEV) && !(DTYPE == Idt || DTYPE == Kdt)) {
                if (OPC == Uinc) {
                    ustack->value += IONE;
                    eliminated = true;
                } else if (OPC == Udec) {
                    ustack->value -= IONE;
                    eliminated = true;
                }
            }
            if (eliminated) {
                return;
            }
            ustack_add_value();
            stexpr1 = ustack->expr;
            expr = readnxtinst_searchloop(opvalhash(OPC, stexpr1, IONE), &loc, stexpr1, stexpr2);
            if (outofmem) {
                return;
            }
            if (expr->type == empty) {
                expr->type = isop;
                expr->datatype = DTYPE;
                expr->data.isop.datatype = DTYPE;
                expr->data.isop.op1 = stexpr1;
                expr->data.isop.op2 = NULL;
                expr->count = 1;
                expr->data.isop.opc = OPC;
                expr->data.isop.datasize = IONE;
                expr->data.isop.unk30 = 0;
                expr->unk5 = 0;
                expr->data.isop.aux2.v1.overflow_attr = IS_OVERFLOW_ATTR(LEXLEV);
                expr->unk4 = false;
            } else {
                incroccurrence(&expr);
            }
            ustack->expr = expr;
            return;

        case Ucvt:
        case Urnd: // XXX: untested
        case Utyp: // XXX: untested
            if (OPC == Ucvt && (DTYPE2 == Jdt || DTYPE2 == Ldt) && (DTYPE == Qdt || DTYPE == Rdt) && !IS_OVERFLOW_ATTR(LEXLEV)) {
                if (ustack->expr->type == isconst && ustack->value == 0) {
                    cvt_to_float(ustack, &loc, stexpr1, stexpr2);
                    return;
                }
            } else if (DTYPE2 == DTYPE) {
                return;
            } else if ((DTYPE2 == Adt || DTYPE2 == Hdt || DTYPE2 == Jdt || DTYPE2 == Ldt) &&
                    (DTYPE == Adt || DTYPE == Hdt || DTYPE == Jdt || DTYPE == Ldt))
            {
                if (mipsflag != 2) {
                    if (ustack->expr->type == isvar && ustack->expr->data.isvar_issvar.size == 4) {
                        return;
                    }
                } else if (DTYPE2 != Ldt && DTYPE != Ldt && ustack->expr->type == isvar && ustack->expr->data.isvar_issvar.size == 4) {
                    return;
                }
            } else if ((DTYPE2 == Idt || DTYPE2 == Kdt) && (DTYPE == Idt || DTYPE == Kdt) && ustack->expr->type == isvar && ustack->expr->data.isvar_issvar.size == 8) {
                return;
            }

            ustack_add_value();
            stexpr1 = ustack->expr;
            expr = readnxtinst_searchloop(isophash(OPC, stexpr1, NULL), &loc, stexpr1, stexpr2);
            if (outofmem) {
                return;
            }
            if (expr->type == empty) {
                expr->type = isop;
                expr->datatype = DTYPE;
                expr->data.isop.datatype = DTYPE;
                expr->data.isop.aux.cvtfrom = DTYPE2;
                expr->data.isop.op1 = stexpr1;
                expr->data.isop.op2 = NULL;
                expr->count = 1;
                expr->data.isop.opc = OPC;
                expr->data.isop.unk30 = 0;
                expr->unk5 = 0;
                expr->data.isop.aux2.v1.overflow_attr = IS_OVERFLOW_ATTR(LEXLEV);
                expr->unk4 = false;
            } else {
                incroccurrence(&expr);
            }
            ustack->expr = expr;
            return;

        case Uadj: // XXX: untested
            ustack_add_value();
            stexpr1 = ustack->expr;
            expr = readnxtinst_searchloop(opvalhash(OPC, stexpr1, OFFSET), &loc, stexpr1, stexpr2);

            if (outofmem) {
                return;
            }

            if (expr->type == empty) {
                expr->type = isop;
                expr->datatype = DTYPE;
                expr->unk4 = false;
                expr->unk5 = 0;
                expr->count = 1;
                expr->data.isop.opc = OPC;
                expr->data.isop.datatype = DTYPE;
                expr->data.isop.op1 = stexpr1;
                expr->data.isop.op2 = NULL;
                expr->data.isop.datasize = OFFSET; // shift
                expr->data.isop.aux2.v1.unk3C = LENGTH; // resulting length
                expr->data.isop.aux2.v1.overflow_attr = false;
                expr->data.isop.unk30 = 0;
            } else {
                incroccurrence(&expr);
            }
            ustack->expr = expr;
            return;

        case Uchkn: // XXX: untested
            ustack_add_value();
            stexpr1 = ustack->expr;
            expr = readnxtinst_searchloop(isophash(OPC, stexpr1, NULL), &loc, stexpr1, stexpr2);
            if (outofmem) {
                return;
            }
            if (expr->type == empty) {
                expr->type = isop;
                expr->datatype = Adt;
                expr->data.isop.datatype = Adt;
                expr->data.isop.op1 = stexpr1;
                expr->data.isop.op2 = NULL;
                expr->count = 1;
                expr->data.isop.aux2.v1.overflow_attr = false;
                expr->data.isop.unk30 = 0;
                expr->unk5 = 0;
                expr->unk4 = false;
                expr->data.isop.opc = OPC;
            } else {
                incroccurrence(&expr);
            }
            ustack->expr = expr;
            return;

        case Uildv:
        case Uilod:
            ustack_add_index();
            stexpr1 = ustack->expr;
            stval1 = ustack->value;
            ustack->value = 0;
            IONE += stval1;

            if (OPC == Uilod && stexpr1->count >= 2 && LENGTH >= 4 && func_0043CE64(stexpr1, IONE)) {
                return;
            }

            expr = readnxtinst_searchloop(opvalhash(OPC, stexpr1, IONE), &loc, stexpr1, stexpr2);
            if (outofmem) {
                return;
            }

            if (expr->type == empty) {
                expr->type = isop;
                expr->datatype = DTYPE;
                expr->data.isop.datatype = DTYPE;
                expr->data.isop.op1 = stexpr1;
                expr->data.isop.op2 = NULL;
                expr->count = 1;
                expr->data.isop.aux2.v1.overflow_attr = false;
                expr->data.isop.opc = OPC;
                expr->data.isop.datasize = IONE; // offset from lda
                expr->data.isop.aux2.v1.unk3C = (unsigned short)LENGTH;
                expr->data.isop.aux2.v1.align = (unsigned char)(LEXLEV & ~7);
                if (expr->data.isop.aux2.v1.align == 0) {
                    expr->data.isop.aux2.v1.align = (unsigned char)(expr->data.isop.aux2.v1.unk3C * 8);
                }
                if (stexpr1->type == isconst) {
                    if (stexpr1->data.isconst.number.intval % (expr->data.isop.aux2.v1.align / 8) != 0) {
                        expr->data.isop.aux2.v1.align = 8;
                        tmp1 = stexpr1->data.isconst.number.intval;
                        while ((tmp1 & 1) == 0) {
                            expr->data.isop.aux2.v1.align *= 2;
                            tmp1 /= 2;
                        }
                    }
                } else if (stexpr1->type == islda) {
                    if (stexpr1->data.islda_isilda.address.addr % (expr->data.isop.aux2.v1.align / 8) != 0) {
                        expr->data.isop.aux2.v1.align = 8;
                        tmp1 = stexpr1->data.islda_isilda.address.addr;
                        while ((tmp1 & 1) == 0) {
                            expr->data.isop.aux2.v1.align *= 2;
                            tmp1 /= 2;
                        }
                    }
                }
                expr->data.isop.unk30 = 0;
                expr->unk5 = 0;
                expr->unk4 = false;
                expr->data.isop.aux.mtagno = OFFSET;
                expr->data.isop.unk34 = findbaseaddr(stexpr1);
                if (expr->datatype != Sdt && OPC != Uildv) {
                    expr->unk2 = false;
                    if (expr->unk3) {
                        expr->unk3 = !varkilled(expr, curgraphnode->varlisthead);
                    }
                } else {
                    expr->unk2 = true;
                    expr->unk3 = false;
                }

                appendbbvarlst(expr);
                lodkillprev(expr);
            } else {
                increasecount(expr);
            }

            ustack->expr = expr;
            return;

        case Uirld: // XXX: untested
        case Uirlv: // XXX: untested
            ustack_add_value();
            stexpr1 = ustack->expr;
            if (OPC == Uirld && stexpr1->count >= 2 && LENGTH >= 4 && func_0043CE64(stexpr1, IONE)) {
                return;
            }

            expr = readnxtinst_searchloop(opvalhash(OPC, stexpr1, IONE), &loc, stexpr1, stexpr2);
            if (outofmem) {
                return;
            }

            if (expr->type == empty) {
                expr->type = isop;
                expr->datatype = DTYPE;
                expr->data.isop.datatype = DTYPE;
                expr->data.isop.op1 = stexpr1;
                expr->data.isop.op2 = NULL;
                expr->count = 1;
                expr->data.isop.aux2.v1.overflow_attr = false;
                expr->data.isop.opc = OPC;
                expr->data.isop.datasize = IONE; // offset from lda
                expr->data.isop.aux2.v1.unk3C = (unsigned short)LENGTH;
                expr->data.isop.aux2.v1.align = (unsigned char)(LEXLEV & ~7);

                if (expr->data.isop.aux2.v1.align == 0) {
                    expr->data.isop.aux2.v1.align = (unsigned char)(expr->data.isop.aux2.v1.unk3C * 8);
                }

                if (stexpr1->type == isconst) {
                    if (stexpr1->data.isconst.number.intval % (expr->data.isop.aux2.v1.align / 8) != 0) {
                        expr->data.isop.aux2.v1.align = 8;
                        tmp1 = stexpr1->data.isconst.number.intval;
                        while ((tmp1 & 1) == 0) {
                            expr->data.isop.aux2.v1.align *= 2;
                            tmp1 /= 2;
                        }
                    }
                } else if (stexpr1->type == islda) {
                    if (stexpr1->data.islda_isilda.address.addr % (expr->data.isop.aux2.v1.align / 8) != 0) {
                        expr->data.isop.aux2.v1.align = 8;
                        tmp1 = stexpr1->data.islda_isilda.address.addr;
                        while ((tmp1 & 1) == 0) {
                            expr->data.isop.aux2.v1.align *= 2;
                            tmp1 /= 2;
                        }
                    }
                }

                expr->data.isop.unk30 = 0;
                expr->unk5 = 0;
                expr->unk4 = false;
                expr->data.isop.aux.mtagno = OFFSET;
                expr->data.isop.unk34 = findbaseaddr(stexpr1);

                if (expr->datatype != Sdt && OPC != Uirlv) {
                    expr->unk2 = false;
                    if (expr->unk3) {
                        expr->unk3 = !varkilled(expr, curgraphnode->varlisthead);
                    }
                } else {
                    expr->unk2 = true;
                    expr->unk3 = false;
                }

                appendbbvarlst(expr);
                lodkillprev(expr);
            } else {
                increasecount(expr);
            }

            ustack->expr = expr;
            return;

        // struct/array comparison
        case Uiequ: // XXX: untested
        case Uigeq: // XXX: untested
        case Uigrt: // XXX: untested
        case Uileq: // XXX: untested
        case Uiles: // XXX: untested
        case Uineq: // XXX: untested
            ustack_add_value();
            stexpr2 = ustack->expr;
            ustack = ustack->down;
            ustack_add_value();
            stexpr1 = ustack->expr;
            expr = readnxtinst_searchloop(isophash(OPC, stexpr1, stexpr2), &loc, stexpr1, stexpr2);
            if (outofmem) {
                return;
            }
            if (expr->type == empty) {
                expr->type = isop;
                expr->unk2 = false;
                expr->unk4 = false;
                expr->unk5 = 0;
                expr->datatype = Mdt;
                expr->data.isop.datatype = Jdt;
                expr->data.isop.op1 = stexpr1;
                expr->data.isop.op2 = stexpr2;
                expr->data.isop.opc = OPC;
                expr->count = 1;
                expr->data.isop.unk30 = 0;
                expr->data.isop.aux2.v1.overflow_attr = false;
                expr->data.isop.aux2.v1.unk3C = IONE; // number of bits to compare at a time
                expr->data.isop.datasize = LENGTH; // size of the struct/array in bytes
                expr->data.isop.unk34 = findbaseaddr(stexpr1);
                expr->data.isop.aux.unk38 = findbaseaddr(stexpr2);
                if (expr->unk3) {
                    expr->unk3 = !varkilled(expr, curgraphnode->varlisthead);
                }
                appendbbvarlst(expr);
                lodkillprev(expr);
            } else {
                incroccurrence(&expr);
            }

            ustack->expr = expr;
            return;

        case Udup: // XXX: untested
            ustack_push(ustack->expr);
            ustack->expr->count++;
            ustack->value = ustack->down->value;
            return;

        case Ulca:
            write_char(strp.c_file, '0' + IONE, 1);
            for (i = 0; i < CONSTVAL.swpart.Ival; i++) {
                write_char(strp.c_file, ustrptr[i], 1);
            }
            expr = readnxtinst_searchloop(isconsthash(strpdisplace), &loc, stexpr1, stexpr2);
            if (outofmem) {
                return;
            }
            expr->type = isconst;
            expr->datatype = DTYPE;
            expr->data.isconst.size = LENGTH;
            expr->data.isconst.number.string.disp = strpdisplace;
            expr->var_access_list = NULL;
            expr->data.isconst.number.string.len = CONSTVAL.swpart.Ival;
            strpdisplace += CONSTVAL.swpart.Ival + 1;
            ustack_push(expr);
            return;

        case Uisst: // XXX: untested
        case Ustr:
            if (dokpicopt && MTYPE == Smt && !in_fsym(IONE) && !is_gp_relative(IONE)) {
                if (lang == LANG_FORTRAN) {
                    if (ustack->expr->type == islda &&
                            (curblk == ustack->expr->data.islda_isilda.address.blockno ||
                             (f77_static_flag && in_fsym(ustack->expr->data.islda_isilda.address.blockno))))
                    {
                        use_c_semantics = true;
                    } else if (ustack->expr->type == isop && ustack->expr->data.isop.opc == Ucvt &&
                            ustack->expr->data.isop.op1->type == islda &&
                            (curblk == ustack->expr->data.isop.op1->data.islda_isilda.address.blockno ||
                             (f77_static_flag && in_fsym(ustack->expr->data.isop.op1->data.islda_isilda.address.blockno))))
                    {
                        use_c_semantics = true;
                    }
                }
                dtype = DTYPE;
                OPC = Ulda;

                tmp2 = OFFSET & 0xffff;
                tmp3 = LENGTH;

                OFFSET2 = OFFSET;
                OFFSET &= 0xffff0000;
                readnxtinst();
                OPC = Uswp;
                readnxtinst();
                if (IS_VOLATILE_ATTR(LEXLEV)) {
                    OPC = Uistv;
                } else {
                    OPC = Uistr;
                }
                DTYPE = dtype;
                IONE = tmp2;
                OFFSET = 0;
                LENGTH = tmp3;
                LEXLEV |= (tmp2 & 7) << 3;
                readnxtinst();
                return;
            }

            ustack_add_value();
            if (ustack->expr->type == isop && ustack->expr->data.isop.opc == Ucvtl && ustack->expr->data.isop.datasize >= LENGTH * 8) {
                stexpr1 = ustack->expr->data.isop.op1;
                stexpr1->count++;
                decreasecount(ustack->expr);
                ustack->expr = stexpr1;
            }

            loc.memtype = MTYPE;
            loc.blockno = IONE;
            loc.addr = OFFSET;
            if (loc.memtype == Rmt) {
                loc.blockno = 0;
                if (curmst != NULL && curmst->u.mst.cup_level != 0 && OFFSET == r_v0) {
                    if (ustack->expr->type == isvar) {
                        func_0043CBFC(ustack);
                    } else if (ustack->expr->type == issvar) {
                        ustack->expr->data.isvar_issvar.location.level = 200;
                        ustack->expr->data.isvar_issvar.unk22 = true;
                        ustack->expr->var_access_list->unk8 = true;
                    }
                }
            }

            if (lang != LANG_FORTRAN) {
                // the first store of $v0 to the stack sets staticlinkloc, the stack offset used for shared variables
                if ((graphhead == curgraphnode || (lang == LANG_ADA && stattail->opc == Ulab && IS_EXCEPTION_ATTR(stattail->u.label.flags))) &&
                        ustack->expr->type == isvar &&
                        ustack->expr->data.isvar_issvar.location.memtype == Rmt &&
                        ustack->expr->data.isvar_issvar.location.addr == r_v0)
                {
                    TRAP_IF(staticlinkloc != 0);
                    staticlinkloc = loc.addr;
                    expr = searchvar(isvarhash(loc), &loc);
                    expr->data.isvar_issvar.size = 4;
                    expr->graphnode = NULL;
                    expr->data.isvar_issvar.unk22 = true;
                    expr->data.isvar_issvar.veqv = false;
                    decreasecount(ustack->expr);
                    ustack = ustack->down;
                    extendstat(Unop);
                    stattail->expr = NULL;
                    return;
                }
            }

            expr = readnxtinst_searchloop(isvarhash(loc), &loc, stexpr1, stexpr2);
            if (outofmem) {
                return;
            }

            if (OPC == Uisst) {
                if (ustack->down->expr->type == isvar) {
                    func_0043CBFC(ustack->down);
                } else {
                    TRAP_IF(ustack->down->expr->type != issvar);
                    ustack->down->expr->data.isvar_issvar.location.level = 200;
                    ustack->down->expr->data.isvar_issvar.unk22 = true;
                    ustack->down->expr->var_access_list->unk8 = true;
                }
            }

            // eliminate redundant stores (x = x)
            if (ustack->expr == expr && expr->data.isvar_issvar.location.memtype != Rmt && expr->data.isvar_issvar.location.memtype != Amt) {
                decreasecount(expr);
                ustack = ustack->down;
                if (OPC == Uisst) {
                    decreasecount(ustack->expr);
                    ustack = ustack->down;
                }
                extendstat(Unop);
                stattail->expr = NULL;
                return;
            }

            unk1C = true;
            unk1E = true;
            if (expr->type != empty) {
                stmt = expr->data.isvar_issvar.assignment;
                if (stmt == NULL) {
                    expr->unk2 = true;
                    expr2 = expr;
                    expr = appendchain(expr->table_index);
                    if (outofmem) {
                        return;
                    }
                    expr->graphnode = curgraphnode;
                    expr->data.isvar_issvar.unk22 = expr2->data.isvar_issvar.unk22;
                    expr->unk3 = false;
                    expr->data.isvar_issvar.veqv = expr2->data.isvar_issvar.veqv;
                    unk1C = false;
                    unk1E = true;
                } else if (expr->data.isvar_issvar.assigned_value != NULL && stmt->u.store.unk1D) {
                    stmt->u.store.var_access_list_item->type = 0;
                    if (has_volt_ovfw(stmt->expr->data.isvar_issvar.assigned_value)) {

                        stmt->opc = Upop;
                        stmt->u.pop.dtype = expr->datatype;
                        stmt->u.pop.unk15 = 0;
                        stmt->expr = stmt->expr->data.isvar_issvar.assigned_value;
                    } else {
                        if (stmt->opc == Uisst) {
                            decreasecount(stmt->u.store.expr);
                        }
                        decreasecount(expr->data.isvar_issvar.assigned_value);
                        stmt->opc = Unop;
                    }
                    unk1C = stmt->u.store.unk1C;
                    unk1E = stmt->u.store.unk1E;
                } else if (ustack->expr == expr->data.isvar_issvar.assigned_value && stmt->u.store.unk1F) {
                    decreasecount(ustack->expr);
                    ustack = ustack->down;
                    if (OPC == Uisst) {
                        decreasecount(ustack->expr);
                        ustack = ustack->down;
                    }
                    return;
                } else {
                    expr->unk2 = true;
                    stmt->u.store.unk1F = false;
                    expr2 = expr;
                    expr = appendchain(expr->table_index);
                    if (outofmem) {
                        return;
                    }
                    expr->graphnode = curgraphnode;
                    expr->data.isvar_issvar.unk22 = expr2->data.isvar_issvar.unk22;
                    expr->unk3 = false;
                    expr->data.isvar_issvar.veqv = expr2->data.isvar_issvar.veqv;
                    unk1C = false;
                    unk1E = false;
                }
            }

            if (expr->type == empty) {
                if (OPC == Ustr) {
                    expr->type = isvar;
                } else {
                    expr->type = issvar;
                }
                expr->data.isvar_issvar.location = loc;
                expr->datatype = DTYPE;
                expr->data.isvar_issvar.size = LENGTH;
                expr->data.isvar_issvar.location.level = blktolev(loc.blockno);
                expr->unk3 = false;
                expr->count = 0;
                expr->data.isvar_issvar.copy = NULL;

                if (OPC == Uisst) {
                    expr->data.isvar_issvar.unk3C = 0;
                    expr->unk4 = false;
                    expr->unk5 = 0;
                    expr->data.isvar_issvar.outer_stack = ustack->down->expr;
                } else {
                    expr->data.isvar_issvar.outer_stack = NULL;
                }
                if (!expr->data.isvar_issvar.veqv) {
                    expr->unk2 = false;
                } else {
                    expr->unk2 = true;
                }
                expr->var_access_list = NULL;
                expr->data.isvar_issvar.is_volatile = IS_OVERFLOW_ATTR(LEXLEV);
            }

            if (expr->data.isvar_issvar.veqv) {
                unk1C = false;
                unk1E = false;
            }
            if (lang != LANG_C ||
                    ((expr->datatype == Adt || expr->datatype == Idt || expr->datatype == Jdt || expr->datatype == Kdt || expr->datatype == Ldt) && expr->data.isvar_issvar.size >= 4)) {
                if (!checkincre(ustack->expr, expr, &increment_result)) {
                    increment_result = -1;
                } 
            } else {
                increment_result = -1;
            }

            extendstat(OPC);
            if (outofmem) {
                return;
            }

            expr->data.isvar_issvar.assigned_value = ustack->expr;
            
            if (lang == LANG_FORTRAN) {
                if (ustack->expr->type == islda &&
                        (curblk == ustack->expr->data.islda_isilda.address.blockno ||
                         (f77_static_flag && in_fsym(ustack->expr->data.islda_isilda.address.blockno))))
                {
                    use_c_semantics = true;
                } else if (ustack->expr->type == isop && ustack->expr->data.isop.opc == Ucvt &&
                        ustack->expr->data.isop.op1->type == islda &&
                        (curblk == ustack->expr->data.isop.op1->data.islda_isilda.address.blockno ||
                         (f77_static_flag && in_fsym(ustack->expr->data.isop.op1->data.islda_isilda.address.blockno))))
                {
                    use_c_semantics = true;
                }
            }

            if (lang == LANG_ADA && (ustack->expr->type == islda || ustack->expr->type == isilda)) {
                use_c_semantics = true;
            }

            if (ustack->expr->type == isvar && ustack->expr->data.isvar_issvar.location.memtype == Amt && in_outparlist(ustack->expr->data.isvar_issvar.location.addr) == NULL) { 
                stattail->outpar = true;
                lastmst->u.mst.loc = ustack->expr->data.isvar_issvar.location.addr;
                insert_outparlist(ustack->expr->data.isvar_issvar.location.addr, expr);
            } else {
                stattail->outpar = false;
            }

            ustack = ustack->down;
            if (stattail->opc == Uisst) {
                stattail->u.store.expr = ustack->expr;
                ustack = ustack->down;
            }

            stattail->expr = expr;
            expr->data.isvar_issvar.assignment = stattail;
            if (!stattail->outpar) {
                stattail->u.store.unk1C = unk1C;
                if (!expr->data.isvar_issvar.unk22 && unk1C) {
                    stattail->u.store.unk1C = !strlkilled(stattail, curgraphnode->varlisthead);
                }
                stattail->u.store.unk1E = unk1E;
                if (!expr->data.isvar_issvar.unk22 && unk1E) {
                    stattail->u.store.unk1E = !strskilled(stattail, curgraphnode->varlisthead);
                }
                if (stattail->expr->data.isvar_issvar.location.memtype == Rmt) {
                    stattail->u.store.unk1E = false;
                }
                stattail->u.store.unk1D = !expr->data.isvar_issvar.veqv;
                stattail->u.store.unk1F = !expr->data.isvar_issvar.veqv;
                if (increment_result == 1 && !hasvolatile(expr->data.isvar_issvar.assigned_value)) {
                    switch (stattail->expr->datatype) {
                        case Adt:
                        case Hdt:
                        case Idt:
                        case Jdt:
                        case Kdt:
                        case Ldt:
                            stattail->is_increment = true;
                            break;

                        default:
                            stattail->is_increment = false;
                            break;
                    }
                } else {
                    stattail->is_increment = false;
                }
            } else {
                stattail->u.store.unk1C = false;
                stattail->u.store.unk1E = false;
                stattail->u.store.unk1D = false;
                stattail->u.store.unk1F = false;
                stattail->is_increment = false;
            }
            stattail->u.store.u.str.unk2C = 0;
            stattail->u.store.u.str.unk30 = 0;
            stattail->unk2 = false;
            if (!expr->data.isvar_issvar.unk22) {
                strkillprev(stattail);
            }
            appendstorelist();
            if (expr->data.isvar_issvar.unk22) {
                curgraphnode->varlisttail->unk8 = true;
            }
            loc_not_yet_seen = false;
            return;

        case Uchkt: // XXX: untested
            extendstat(Uchkt);
            ustack_add_value();
            stattail->u.chkt.unk18 = 0;
            stattail->expr = ustack->expr;
            ustack = ustack->down;
            return;

        // alloca
        case Uaos:
            extendstat(Uaos);
            if (outofmem) {
                return;
            }
            ustack_add_value();
            stattail->expr = ustack->expr;
            ustack = ustack->down;
            usefp = true;
            return;

        case Uldef: // XXX: untested
            graphnode = ingraph(IONE);
            TRAP_IF(graphnode == NULL);
            TRAP_IF(graphnode->stat_head->opc != Ulab);
            graphnode->stat_head->u.label.flags |= LEXLEV;
            if (LENGTH != 0) {
                graphnode->stat_head->u.label.length = LENGTH;
            }
            return;

        case Ufjp:
        case Ulab:
        case Utjp:
        case Uujp:
            extendstat(OPC);
            if (outofmem) {
                return;
            }

            switch (OPC) {
                case Uujp:
                    loc_not_yet_seen = false;
                    curlocln = 0;
                    break;

                case Ufjp:
                case Utjp:
                    loc_not_yet_seen = false;
                    ustack_add_value();
                    if (ustack->expr->type == isvar) {
                        ustack->expr = binopwithconst(Uneq, ustack->expr, 0);
                        ustack->expr->data.isop.aux.unk38_trep = NULL;
                        ustack->expr->data.isop.aux2.unk3C_trep = NULL;
                    }
                    stattail->expr = ustack->expr;
                    ustack = ustack->down;
                    stattail->u.jp.incre = 0;
                    break;

                case Ulab:
                    stattail->u.label.flags = LEXLEV;
                    stattail->u.label.length = LENGTH;
                    if (IS_EXCEPTION_ATTR(LEXLEV)) {
                        has_exc_handler = true;
                    }
                    break;

                default:
                    caseerror(1, 2945, "uoptinput.p", 11);
                    break;
            }

            stattail->u.label.blockno = IONE;
            target_graphnode = ingraph(IONE);
            if (target_graphnode == NULL) {
                appendgraph();
                if (outofmem) {
                    return;
                }
                target_graphnode = graphtail;
                target_graphnode->blockno = IONE;
            } else if (OPC == Ulab) {
                target_graphnode->bvs.init.line = curlocln;
            }

            if (OPC != Ulab) {
                predecessors = alloc_new(sizeof(struct GraphnodeList), &perm_heap);
                if (predecessors == NULL) {
                    outofmem = true;
                    return;
                }
                predecessors->graphnode = curgraphnode;
                predecessors->next = target_graphnode->predecessors;
                target_graphnode->predecessors = predecessors;

                successors = alloc_new(sizeof(struct GraphnodeList), &perm_heap);
                if (successors == NULL) {
                    outofmem = true;
                    return;
                }
                successors->graphnode = target_graphnode;
                successors->next = curgraphnode->successors;
                curgraphnode->successors = successors;
            } else {
                // loop body?
                if (stattail->prev->opc == Ulbdy) {
                    target_graphnode->unkBb4 = true;
                }

                target_graphnode->blockno = IONE;
                target_graphnode->interprocedural_controlflow = (LEXLEV & (GOOB_TARGET | EXCEPTION_ATTR | EXTERN_LAB_ATTR | EXCEPTION_END_ATTR | EXCEPTION_FRAME_START_ATTR | EXCEPTION_FRAME_END_ATTR | 0x1c0)) != 0;
                if (curgraphnode != NULL) {
                    if (curgraphnode->stat_tail->opc == Ufjp || curgraphnode->stat_tail->opc == Utjp) {
                        if (curgraphnode->stat_tail->u.jp.target_blockno == IONE)  {
                            // empty if (...) { } body, eliminate the whole statement
                            if (!has_volt_ovfw(curgraphnode->stat_tail->expr)) {
                                decreasecount(curgraphnode->stat_tail->expr);
                                curgraphnode->stat_tail->opc = Unop;
                            } else {
                                // the if-expression contains a volatile load or should be
                                // overflow-checked, so keep the expression but eliminate the jump.
                                curgraphnode->stat_tail->opc = Upop;
                                curgraphnode->stat_tail->u.pop.dtype = Jdt;
                                curgraphnode->stat_tail->u.pop.unk15 = 0;
                            }
                        }
                    }

                    found = false;
                    successors = curgraphnode->successors;
                    while (successors != NULL && !found) {
                        if (successors->graphnode->blockno == IONE) {
                            found = true;
                        } else {
                            successors = successors->next;
                        }
                    }

                    if (!found) {
                        predecessors = alloc_new(sizeof(struct GraphnodeList), &perm_heap);
                        if (predecessors == NULL) {
                            outofmem = true;
                            return;
                        }
                        predecessors->graphnode = curgraphnode;
                        predecessors->next = target_graphnode->predecessors;
                        target_graphnode->predecessors = predecessors;

                        successors = alloc_new(sizeof(struct GraphnodeList), &perm_heap);
                        if (successors == NULL) {
                            outofmem = true;
                            return;
                        }
                        successors->graphnode = target_graphnode;
                        successors->next = curgraphnode->successors;
                        curgraphnode->successors = successors;
                    }
                }

                curgraphnode = target_graphnode;
                curgraphnode->stat_head = stattail;
                stattail->graphnode = curgraphnode;
                curgraphnode->num = curstaticno++;
            }
            return;

        // switch statement jumptable definition
        case Uclab:
            extendstat(Uclab);
            if (outofmem) {
                return;
            }

            /*
             * Frontends are inconcistent about how they emit switch statements.
             *
             * The pascal frontend emits the cases first, then the clab with ujps, and finally the xjp:
             *
             *     ujp  2        --\ jump ahead to xjp
             *                     |
             *     lab  3          |
             *     lab  4          |
             *     lab  5          |
             *        etc..        |
             *                     |
             *     clab 6 len 2    |
             *     ujp  4          |
             *     ujp  3          |
             *                     |
             *     lab  2        <-/
             *     lod  u32 Mmt 93 -5 1
             *     xjp  u32 clab 6 default 5 lbnd 0 hbnd 1
             *     lab  1       break label
             *
             * The C frontend is sane and emits the xjp, clab, and cases in order:
             *
             *     lod  s32 Pmt 5 0 4
             *     xjp  s32 clab 13 default 12 lbnd 1 hbnd 5
             *     clab 13 len 5
             *     ujp  14
             *     ujp  15
             *     ujp  16
             *     ujp  17
             *     ujp  18
             *
             *     lab  14
             *     lab  15
             *     lab  16
             *     lab  17
             *     lab  18
             *     ret
             *
             *     lab  12
             *     ret
             *
             *
             * Because of this, uopt has to detect both types of switch statements in Uclab and Uxjp depending on which comes first.
             *
             *! however, due to some quirks with dead code elimination and controlflow(),
             *  it is possible for C's switch statement to be treated as a pascal
             *  switch statement, if the switch appears in dead code:
             *
             *  return;
             *
             *  switch() {
             *     case 1:
             *         ...
             *  }
             *  The xjp is filtered out by dce, leaving only a clab.
             */
            stattail->u.label.blockno = IONE;
            stattail->u.label.length = LENGTH;

            graphnode = ingraph(IONE);
            if (graphnode == NULL) {
                // Pascal frontend switch statement
                appendgraph();
                if (outofmem) {
                    return;
                }

                graphtail->blockno = IONE;
                stattail->u.label.unk1C = false;
                graphtail->stat_head = stattail;
                graphnode = graphtail;
            } else {
                // C frontend case statement

                // xjp graphnode
                graphnode = graphnode->predecessors->graphnode;
                graphnode->stat_tail->u.xjp.case_stmts = stattail;
                stattail->u.label.unk1C = true;
            }

            endblock_saved = endblock;
            length = LENGTH;
            clab_blockno = IONE;
            for (i = 0; OPC != Uujp || i < length; i++) {
                getop();
                if (OPC != Uujp) {
                    copyline();
                } else {
                    extendstat(OPC);
                    if (outofmem) {
                        return;
                    }
                    stattail->u.jp.target_blockno = IONE;
                    target_graphnode = ingraph(IONE);
                    if (target_graphnode == NULL) {
                        appendgraph();
                        if (outofmem) {
                            return;
                        }
                        target_graphnode = graphtail;
                        target_graphnode->blockno = IONE;
                    }

                    // C frontend switch statement: the xjp was read first, so add the cases as predecessors here
                    if (graphnode->blockno != clab_blockno) {
                        predecessors = alloc_new(sizeof(struct GraphnodeList), &perm_heap);
                        if (predecessors == NULL) {
                            outofmem = true;
                            return;
                        }
                        predecessors->graphnode = graphnode;
                        predecessors->next = target_graphnode->predecessors;
                        target_graphnode->predecessors = predecessors;
                    }
                    successors = alloc_new(sizeof(struct GraphnodeList), &perm_heap);
                    if (successors == NULL) {
                        outofmem = true;
                        return;
                    }
                    successors->graphnode = target_graphnode;
                    successors->next = graphnode->successors;
                    graphnode->successors = successors;
                }
            }
            endblock = endblock_saved;
            return;

        case Uxjp:
            extendstat(Uxjp);
            if (outofmem) {
                return;
            }

            ustack_add_value();
            if (ustack->expr->type == isvar) {
                ustack->expr = binopwithconst(Uadd, ustack->expr, 0);
            }

            stattail->expr = ustack->expr;
            ustack = ustack->down;
            stattail->u.xjp.dtype = DTYPE;
            stattail->u.xjp.cases_blockno = IONE;
            stattail->u.xjp.default_blockno = LENGTH;
            stattail->u.xjp.lbound_l = LBOUND_L;
            stattail->u.xjp.lbound_h = LBOUND_H;
            stattail->u.xjp.hbound_l = HBOUND_L;
            stattail->u.xjp.hbound_h = HBOUND_H;

            graphnode = ingraph(IONE);

            if (graphnode != NULL) {
                // detect pascal frontend switch statement: the clab was read before xjp, so connect the jumps now
                graphnode->stat_head->u.label.unk1C = true;
                stattail->u.xjp.case_stmts = graphnode->stat_head;

                // Move over the successors from the case labels graphnode and add predecessor at targets
                curgraphnode->successors = graphnode->successors;
                for (successors = graphnode->successors; successors != NULL; successors = successors->next) {
                    predecessors = alloc_new(sizeof(struct GraphnodeList), &perm_heap);
                    if (predecessors == NULL) {
                        outofmem = true;
                        return;
                    }

                    predecessors->graphnode = curgraphnode;
                    predecessors->next = successors->graphnode->predecessors;
                    successors->graphnode->predecessors = predecessors;
                }
                graphnode->successors = NULL;
            } else {
                // C frontend switch statement. The jumps haven't been read yet, so connect them when the Uclab is read
                appendgraph();
                if (outofmem) {
                    return;
                }

                graphtail->blockno = IONE;
                predecessors = alloc_new(sizeof(struct GraphnodeList), &perm_heap);
                graphtail->predecessors = predecessors;
                if (predecessors == NULL) {
                    outofmem = true;
                    return;
                }
                predecessors->next = NULL;
                predecessors->graphnode = curgraphnode;
            }

            // default case
            graphnode = ingraph(LENGTH);
            if (graphnode == NULL) {
                appendgraph();
                if (outofmem) {
                    return;
                }
                graphnode = graphtail;
                graphnode->blockno = LENGTH;
            }

            predecessors = alloc_new(sizeof(struct GraphnodeList), &perm_heap);
            if (predecessors == NULL) {
                outofmem = true;
                return;
            }
            predecessors->graphnode = curgraphnode;
            predecessors->next = graphnode->predecessors;
            graphnode->predecessors = predecessors;

            successors = alloc_new(sizeof(struct GraphnodeList), &perm_heap);
            if (successors == NULL) {
                outofmem = true;
                return;
            }
            successors->graphnode = graphnode;
            successors->next = curgraphnode->successors;
            curgraphnode->successors = successors;

            loc_not_yet_seen = false;
            curlocln = 0;
            return;

        // Most likely "indexed jump", for computed gotos in fortan and pl/1
        case Uijp:
            extendstat(Uijp);
            if (outofmem) {
                return;
            }
            ustack_add_value();
            stattail->expr = ustack->expr;
            ustack = ustack->down;
            link_ijp_labels(curproc->ijp_labels);
            loc_not_yet_seen = false;
            curlocln = 0;
            return;

        // Mark Stack, used to save the current stack info before a procedure call
        case Umst:
            extendstat(Umst);
            if (outofmem) {
                return;
            }
            curmst = stattail;
            curmst->u.mst.cup_level = LEXLEV;
            curmst->u.mst.fp_offset = 0;
            curmst->u.mst.loc = -1;
            outparhead = NULL;
            parcount = 0;
            passbyfp = true;
            return;

        case Uxpar: // XXX: untested
        case Upar:
            extendstat(OPC);
            if (outofmem) {
                return;
            }
            if (OPC == Upar) {
                ustack_add_value();
            }

            stattail->expr = ustack->expr;
            stattail->u.par.dtype = DTYPE;
            ustack = ustack->down;
            if (OPC == Upar) {
                stattail->u.par.loc = OFFSET;
                stattail->u.par.size = LENGTH;

                // use $f12 and $f14 to pass first two float args
                if (++parcount > 2 || !(stattail->u.par.dtype == Qdt || stattail->u.par.dtype == Rdt)) {
                    passbyfp = false;
                }

                if (passbyfp) {
                    curmst->u.mst.fp_offset = OFFSET + LENGTH;
                }

                if (stattail->u.par.dtype == Adt) {
                    stattail->u.par.baseaddr = findbaseaddr(stattail->expr);
                } else if (stattail->u.par.dtype == Fdt) {
                    stattail->u.par.baseaddr =  stattail->expr;
                } else if (lang == LANG_ADA) {
                    stattail->u.par.baseaddr = findbaseaddr_ada(stattail->expr);
                }

                if (passbyfp) {
                    stattail->u.par.index = parcount;
                } else {
                    stattail->u.par.index = (OFFSET / 4) + 1;
                }
            } else {
                stattail->u.par.baseaddr = findbaseaddr(stattail->expr);
            }
            parstack_push(stattail);
            return;

        case Upmov:
            extendstat(Upmov);
            if (outofmem) {
                return;
            }

            ustack_add_value();
            stattail->expr = ustack->expr;
            ustack = ustack->down;
            stattail->u.store.u.mov.offset = OFFSET;
            stattail->u.store.size = LENGTH;
            stattail->u.store.u.mov.src_align = LEXLEV;
            stattail->u.store.u.mov.baseaddr = findbaseaddr(stattail->expr);
            passbyfp = false;
            appendstorelist();
            stattail->u.store.var_access_list_item->type = 3;
            movkillprev(stattail);
            parstack_push(stattail);
            return;

        case Uistr:
        case Uistv:
            loc_not_yet_seen = false;
            ustack_add_value();

            if (ustack->expr->type == isop && ustack->expr->data.isop.opc == Ucvtl && ustack->expr->data.isop.datasize >= LENGTH * 8) {
                stexpr1 = ustack->expr->data.isop.op1;
                stexpr1->count++;
                decreasecount(ustack->expr);
                ustack->expr = stexpr1;
            }

            found = false;
            if (OPC == Uistr) {
                for (stmt = curgraphnode->stat_head; stmt != NULL && !found; stmt = stmt->next) {
                    if (stmt->opc == Uistr && ustack->down->expr == stmt->expr &&
                            IONE + ustack->down->value == stmt->u.store.u.istr.offset && LENGTH == stmt->u.store.size)
                    {
                        if (stmt->u.store.unk1D) {
                            decreasecount(stmt->expr);
                            decreasecount(stmt->u.store.expr);
                            stmt->opc = Unop;
                            stmt->u.store.var_access_list_item->type = 0;
                        } else if (stmt->u.store.unk1F && ustack->expr == stmt->u.store.expr) {
                            decreasecount(ustack->expr);
                            ustack = ustack->down;
                            decreasecount(ustack->expr);
                            ustack = ustack->down;
                            found = true;
                        }
                    }
                }
            }
            if (found) {
                return;
            }

            extendstat(OPC);
            if (outofmem) {
                return;
            }

            stattail->u.store.u.istr.dtype = DTYPE;
            stattail->u.store.u.istr.align = LEXLEV & ~7;
            if (stattail->u.store.u.istr.align == 0) {
                stattail->u.store.u.istr.align = LENGTH * 8;
            }

            expr = ustack->down->expr;
            if (expr->type == isconst) {
                if (expr->data.isconst.number.intval % (unsigned)(stattail->u.store.u.istr.align / 8) != 0) {
                    stattail->u.store.u.istr.align = 8;
                    tmp1 = expr->data.isconst.number.intval;
                    while ((tmp1 & 1) == 0) {
                        stattail->u.store.u.istr.align *= 2;
                        tmp1 /= 2;
                    }
                }
            } else if (expr->type == islda) {
                if (expr->data.islda_isilda.address.addr % (unsigned)(stattail->u.store.u.istr.align / 8) != 0) {
                    stattail->u.store.u.istr.align = 8;
                    tmp1 = expr->data.islda_isilda.address.addr;
                    while ((tmp1 & 1) == 0) {
                        stattail->u.store.u.istr.align *= 2;
                        tmp1 /= 2;
                    }
                }
            }

            stattail->u.store.u.istr.mtagno = (unsigned short)OFFSET;
            stattail->u.store.expr = ustack->expr;
            ustack = ustack->down;
            ustack_add_index();
            stattail->expr = ustack->expr;
            stattail->u.store.u.istr.offset = IONE + ustack->value;
            stattail->u.store.size = LENGTH;
            ustack = ustack->down;
            stattail->u.store.baseaddr = findbaseaddr(stattail->expr);

            if (OPC == Uistr) {
                stattail->u.store.unk1C = !strlkilled(stattail, curgraphnode->varlisthead);
                stattail->u.store.unk1D = true;
                stattail->u.store.unk1E = !strskilled(stattail, curgraphnode->varlisthead);
                stattail->u.store.unk1F = true;
            } else {
                stattail->u.store.unk1C = false;
                stattail->u.store.unk1D = false;
                stattail->u.store.unk1E = false;
                stattail->u.store.unk1F = false;
            }
            strkillprev(stattail);
            appendstorelist();
            return;

        // indirect register store?
        case Uirst: // XXX: untested
        case Uirsv: // XXX: untested
            loc_not_yet_seen = false;
            ustack_add_value();
            if (ustack->expr->type == isop && ustack->expr->data.isop.opc == Ucvtl && ustack->expr->data.isop.datasize >= LENGTH * 8) {
                expr = ustack->expr->data.isop.op1;
                expr->count++;
                decreasecount(ustack->expr);
                ustack->expr = expr;
            }

            extendstat(OPC);
            if (outofmem) {
                return;
            }

            stattail->u.store.u.istr.dtype = DTYPE;
            stattail->u.store.u.istr.align = LEXLEV & ~7;
            if (stattail->u.store.u.istr.align == 0) {
                stattail->u.store.u.istr.align = (unsigned char)(LENGTH * 8);
            }

            expr = ustack->down->expr;
            if (expr->type == isconst) {
                if (expr->data.isconst.number.intval % (stattail->u.store.u.istr.align / 8) != 0) {
                    stattail->u.store.u.istr.align = 8;
                    tmp1 = expr->data.isconst.number.intval;
                    while ((tmp1 & 1) == 0) {
                        stattail->u.store.u.istr.align *= 2;
                        tmp1 /= 2;
                    }
                }
            } else if (expr->type == islda) {
                if (expr->data.islda_isilda.address.addr % (stattail->u.store.u.istr.align / 8) != 0) {
                    stattail->u.store.u.istr.align = 8;
                    tmp1 = expr->data.islda_isilda.address.addr;
                    while ((tmp1 & 1) == 0) {
                        stattail->u.store.u.istr.align *= 2;
                        tmp1 /= 2;
                    }
                }
            }

            stattail->u.store.u.istr.mtagno = OFFSET;
            stattail->u.store.expr = ustack->expr;
            ustack = ustack->down;
            ustack_add_value();
            stattail->expr = ustack->expr;
            stattail->u.store.u.istr.offset = IONE;
            stattail->u.store.size = LENGTH;
            ustack = ustack->down;
            stattail->u.store.baseaddr = findbaseaddr(stattail->expr);
            if (OPC == Uirst) {
                stattail->u.store.unk1C = !strlkilled(stattail, curgraphnode->varlisthead);
                stattail->u.store.unk1D = true;
                stattail->u.store.unk1E = !strskilled(stattail, curgraphnode->varlisthead);
                stattail->u.store.unk1F = true;
            } else {
                stattail->u.store.unk1C = false;
                stattail->u.store.unk1D = false;
                stattail->u.store.unk1E = false;
                stattail->u.store.unk1F = false;
            }
            strkillprev(stattail);
            appendstorelist();
            return;

        case Umov:
        case Umovv:
            loc_not_yet_seen = false;
            extendstat(OPC);
            if (outofmem) {
                return;
            }
            ustack_add_value();
            stattail->u.store.expr = ustack->expr;
            ustack = ustack->down;
            ustack_add_value();
            stattail->expr = ustack->expr;
            ustack = ustack->down;
            if (stattail->u.store.expr == stattail->expr && OPC == Umov) {
                decreasecount(stattail->expr);
                decreasecount(stattail->u.store.expr);
                stattail->opc = Unop;
                return;
            }
            stattail->u.store.u.mov.dst_align = LEXLEV & ~7;
            stattail->u.store.size = LENGTH;
            stattail->u.store.u.mov.src_align = IONE;
            stattail->u.store.u.mov.baseaddr = findbaseaddr(stattail->u.store.expr);
            appendstorelist();
            if (outofmem) {
                return;
            }
            stattail->u.store.var_access_list_item->type = 3;
            movkillprev(stattail);
            stattail->u.store.baseaddr = findbaseaddr(stattail->expr);
            if (OPC == Umov) {
                stattail->u.store.unk1C = !strlkilled(stattail, curgraphnode->varlisthead);
                stattail->u.store.unk1E = !strlkilled(stattail, curgraphnode->varlisthead); // not strskilled?
                stattail->u.store.unk1D = true;
                stattail->u.store.unk1F = true;
            } else {
                stattail->u.store.unk1C = false;
                stattail->u.store.unk1D = false;
                stattail->u.store.unk1E = false;
                stattail->u.store.unk1F = false;
            }
            strkillprev(stattail);
            appendstorelist();
            return;

        case Ustsp:
            extendstat(Ustsp);
            if (outofmem) {
                return;
            }
            ustack_add_value();
            stattail->expr = ustack->expr;
            ustack = ustack->down;
            usefp = true;
            return;

        case Utpeq: // XXX: untested
        case Utpge: // XXX: untested
        case Utpgt: // XXX: untested
        case Utple: // XXX: untested
        case Utplt: // XXX: untested
        case Utpne: // XXX: untested
            if (ustack->value == 0 && ustack->down->value != 0 && ustack->expr->type == isconst &&
                    !subovfw(DTYPE, ustack->expr->data.isconst.number.intval, ustack->down->value))
            {
                ustack->value = -ustack->down->value;
                ustack->down->value = 0;
            }
            ustack_add_value();
            stexpr2 = ustack->expr;
            ustack = ustack->down;
            ustack_add_value();
            stexpr1 = ustack->expr;
            ustack = ustack->down;
            eliminated = false;
            if (DTYPE == Jdt) {
                switch (OPC) {
                    case Utplt:
                        if ((stexpr2->type == isconst && stexpr2->data.isconst.number.intval == (int)0x80000000U) ||
                                (stexpr1->type == isconst && stexpr1->data.isconst.number.intval == 0x7FFFFFFF))
                        {
                            eliminated = true;
                        }
                        break;

                    case Utpgt:
                        if ((stexpr2->type == isconst && stexpr2->data.isconst.number.intval == 0x7FFFFFFF) ||
                                (stexpr1->type == isconst && stexpr1->data.isconst.number.intval == (int)0x80000000U))
                        {
                            eliminated = true;
                        }
                        break;

                    default:
                        caseerror(1, 3614, "uoptinput.p", 11);
                        break;
                }
            } else if (DTYPE == Ldt) {
                switch (OPC) {
                    case Utplt:
                        if ((stexpr2->type == isconst && stexpr2->data.isconst.number.uintval == 0) ||
                                (stexpr1->type == isconst && stexpr1->data.isconst.number.uintval == 0xffffffffU))
                        {
                            eliminated = true;
                        }
                        break;

                    case Utpgt:
                        if ((stexpr2->type == isconst && stexpr2->data.isconst.number.uintval == 0xffffffffU) ||
                                (stexpr1->type == isconst && stexpr1->data.isconst.number.uintval == 0))
                        {
                            eliminated = true;
                        }
                        break;

                    default:
                        caseerror(1, 3623, "uoptinput.p", 11);
                        break;
                }
            }
            if (eliminated) {
                decreasecount(stexpr1);
                decreasecount(stexpr2);
                return;
            }
            if (OPC == Utpgt || OPC == Utple) {
                if (!((DTYPE == Adt || DTYPE == Hdt || DTYPE == Idt || DTYPE == Jdt || DTYPE == Kdt || DTYPE == Ldt) && (stexpr2->type == islda || stexpr2->type == isconst))) {
                    if (stexpr1->type == islda || stexpr1->type == isconst) {
                        expr = stexpr2;
                        stexpr2 = stexpr1;
                        stexpr1 = expr;
                        OPC = OPC == Utpgt ? Utplt : Utpge;
                    }
                } else {
                    expr = func_0043B334(stexpr2);
                    if (expr != NULL) {
                        stexpr2 = expr;
                        OPC = OPC == Utpgt ? Utpge : Utplt;
                    }
                }
            } else if (OPC == Utpge || OPC == Utplt) {
                if ((DTYPE == Adt || DTYPE == Hdt || DTYPE == Idt || DTYPE == Jdt || DTYPE == Kdt || DTYPE == Ldt) && (stexpr1->type == islda || stexpr1->type == isconst)) {
                    expr = func_0043B334(stexpr1);
                    if (expr != NULL) {
                        OPC = OPC == Utpge ? Utplt : Utpge;
                        stexpr1 = stexpr2;
                        stexpr2 = expr;
                    }
                }
            } else if (OPC == Utpeq || OPC == Utpne) {
                if (stexpr1->type != isvar) {
                    expr = stexpr2;
                    stexpr2 = stexpr1;
                    stexpr1 = expr;
                }
            }
            stop = false;
            for (stmt = curgraphnode->stat_head; stmt != NULL && !stop; stmt = stmt->next) {
                if (OPC == stmt->opc) {
                    switch (trapstat_imply(stmt, stexpr1, stexpr2)) {
                        case -1:
                            decreasecount(stmt->expr);
                            decreasecount(stmt->u.trap.expr2);
                            stmt->opc = Unop;
                            break;

                        case 1:
                            decreasecount(stexpr1);
                            decreasecount(stexpr2);
                            stop = true;
                            break;

                        case 0:
                            break;

                        default:
                            caseerror(1, 3683, "uoptinput.p", 11);
                            break;
                    }
                }
            }
            if (stop) {
                return;
            }
            extendstat(OPC);
            if (outofmem) {
                return;
            }
            stattail->u.trap.expr2 = stexpr2;
            stattail->expr = stexpr1;
            stattail->u.trap.dtype = DTYPE;
            stattail->u.trap.unk18 = 0;
            stattail->u.trap.num = IONE;
            return;

        case Ubgnb:
        case Uendb:
            extendstat(OPC);
            stattail->u.bgnb.blockno = IONE;
            return;

        case Uret:
            extendstat(OPC);
            curlocln = 0;
            return;

        case Uloc:
            extendstat(Uloc);
            if (outofmem) {
                return;
            }
            stattail->u.loc.page = LEXLEV;
            curlocpg = LEXLEV;
            stattail->u.loc.line = IONE;
            curlocln = IONE;

            // this might be the cause of same-line diffs?
            if (loc_not_yet_seen) {
                curgraphnode->bvs.init.line = IONE;
                loc_not_yet_seen = false;
            }
            return;

        case Udef:
            extendstat(Udef);
            if (outofmem) {
                return;
            }
            stattail->u.def.mtype = MTYPE;
            stattail->u.def.unk18 = LENGTH;
            if (MTYPE == Mmt) {
                tempdisp = LENGTH;
            }
            return;

        case Ucup:
        case Uicuf:
        case Urcuf: // XXX: untested
            if (OPC == Uicuf) {
                extendstat(Upop);
                if (outofmem) {
                    return;
                }
                ustack_add_value();
                stattail->u.pop.unk15 = 1;
                stattail->expr = ustack->expr;
                stattail->graphnode = stattail->prev->graphnode;
            }

            extendstat(OPC);
            if (outofmem) {
                return;
            }
            stattail->u.call.returntype = DTYPE;
            if (OPC == Ucup) {
                stattail->u.call.proc = getproc(IONE);
                stattail->u.call.level = LEXLEV;
            } else if (OPC == Urcuf) {
                stattail->u.call.unk20 = IONE;
                stattail->u.call.proc = indirprocs;
                stattail->u.call.level = curlevel;
            } else {
                stattail->u.call.proc = indirprocs;
                if (lang == LANG_FORTRAN) {
                    stattail->u.call.level = (unsigned char)MIN(curlevel, 2);
                } else {
                    stattail->u.call.level = (unsigned char)curlevel;
                }
            }

            stattail->u.call.push_flags = PUSH;
            stattail->u.call.pop = POP;
            if (GET_STDARGS_NUM(PUSH) != 0) {
                parstack_entry = parstack;
                for (i = 0; i < POP - GET_STDARGS_NUM(PUSH); i++) {
                    parstack_entry = parstack_entry->down;
                }
                if (POP != 0 && parstack_entry->par->u.par.loc < curmst->u.mst.fp_offset) {
                    curmst->u.mst.fp_offset = parstack_entry->par->u.par.loc;
                    parstack_entry->par->u.par.index = parstack_entry->par->u.par.loc / 4 + 1;
                    if (parstack_entry->up != NULL) {
                        parstack_entry->up->par->u.par.index = parstack_entry->up->par->u.par.loc / 4 + 1;
                    }
                }
            }

            stattail->u.call.parameters = NULL;
            stattail->u.call.extrnal_flags = EXTRNAL;
            if (OPC == Uicuf) {
                ustack = ustack->down;
            }
            for (i = 0; i < POP; i++) {
                if (lang == LANG_C || lang == LANG_RESERVED1 || parstack->par->opc == Upmov || parstack->par->opc == Uxpar ||
                        (lang == LANG_PL1 && !stattail->u.call.proc->no_sideeffects) ||
                        (parstack->par->u.par.dtype != Adt && ((lang != LANG_PASCAL && lang != LANG_ADA) || parstack->par->u.par.dtype != Fdt) && (lang != LANG_ADA || parstack->par->u.par.baseaddr == NULL)))
                {
                    parstack = parstack->down;
                } else {
                    parstack->par->u.par.next = stattail->u.call.parameters;
                    stattail->u.call.parameters = parstack->par;
                    parstack = parstack->down;
                }
            }
            parkillprev(stattail->u.call.parameters);
            cupkillprev(stattail->u.call.level, stattail->u.call.proc);
            curmst->u.mst.proc = stattail->u.call.proc;
            lastmst = curmst;
            curmst = NULL;
            loc_not_yet_seen = false;
            return;

        case Ucia: // XXX: untested (Ada only?)
            extendstat(Ucia);
            stattail->u.cia.flags = LEXLEV;
            stattail->u.cia.returntype = DTYPE;
            for (i = 0; i < CONSTVAL.swpart.Ival; i++) {
                write_char(strp.c_file, ustrptr[i], 1);
            }
            stattail->u.cia.strp_pos = strpdisplace;
            stattail->u.cia.len = CONSTVAL.swpart.Ival;
            stattail->u.cia.parameters = NULL;
            strpdisplace += CONSTVAL.swpart.Ival;
            stattail->u.cia.unk1C = LENGTH;
            stattail->u.cia.unk20 = OFFSET;
            while (parstackbot != parstack) {
                parstack->par->u.par.next = stattail->u.cia.parameters;
                stattail->u.cia.parameters = parstack->par;
                parstack = parstack->down;
            }
            parkillprev(stattail->u.cia.parameters);
            if (lang == LANG_ADA) {
                ciakillprev();
            } else if (LEXLEV & 1) {
                cupkillprev(curlevel, indirprocs);
            }
            if (LEXLEV & 1) {
                curmst->u.mst.proc = indirprocs;
            } else {
                curmst->u.mst.proc = ciaprocs;
            }
            lastmst = curmst;
            curmst = NULL;
            loc_not_yet_seen = false;
            return;

        case Upop: // XXX: untested
            if (ustack->expr == NULL || has_volt_ovfw(ustack->expr)) {
                extendstat(Upop);
                if (outofmem) {
                    return;
                }
                stattail->u.pop.dtype = DTYPE;
                stattail->u.pop.unk15 = 0;
                stattail->expr = ustack->expr;
                ustack = ustack->down;
            } else {
                decreasecount(ustack->expr);
                ustack = ustack->down;
                extendstat(Unop);
            }
            return;

        case Uswp:
            stexpr1 = ustack->expr;
            stval1 = ustack->value;

            ustack->expr = ustack->down->expr;
            ustack->value = ustack->down->value;

            ustack->down->expr = stexpr1;
            ustack->down->value = stval1;
            return;

        // alternate entry point to function
        case Uaent: // XXX: untested
            extendstat(Uaent);
            if (outofmem) {
                return;
            }

            stattail->u.aent.returntype = DTYPE;
            stattail->u.aent.blockno = IONE;
            stattail->u.aent.pop = POP;
            stattail->u.aent.push = PUSH;
            stattail->u.aent.extrnal_flags = EXTRNAL;
            stattail->u.aent.unk1C = 0;
            aentptr = stattail;
            loc_not_yet_seen = false;
            appendgraph();
            if (outofmem) {
                return;
            }

            graphtail->interprocedural_controlflow = true;
            if (curgraphnode != NULL) {
                dbgerror(0x198);
            }

            curgraphnode = graphtail;
            curgraphnode->stat_head = stattail;
            stattail->graphnode = curgraphnode;
            curgraphnode->num = curstaticno++;
            return;

        case Ulbgn: // XXX: untested
            extendstat(OPC);
            stattail->u.lbgn.unk14 = IONE;
            return;

        case Ulend: // XXX: untested
        case Ultrm: // XXX: untested
            extendstat(OPC);
            return;

        case Ulbdy: // XXX: untested
            extendstat(OPC);
            stattail->u.lbdy.unk14 = LEXLEV;
            return;

        case Uclbd: // XXX: untested
        case Ucubd: // XXX: untested
        case Ustep: // XXX: untested
            extendstat(OPC);
            stattail = stattail;
            stattail->u.clbd_cubd_step.dtype = DTYPE;
            stattail->u.clbd_cubd_step.unk18 = IONE;
            return;

        case Uctrl: // XXX: untested
            extendstat(Uctrl);
            stattail->u.ctrl.dtype = DTYPE;
            stattail->u.ctrl.unk15 = LENGTH;
            stattail->u.ctrl.var.addr = OFFSET;
            stattail->u.ctrl.var.blockno = IONE;
            stattail->u.ctrl.var.memtype = MTYPE;
            return;

        default:
            caseerror(1, 1266, "uoptinput.p", 11);
            return;
    }
}
