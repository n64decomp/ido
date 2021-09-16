#include "libu/libu.h"
#include "ucode.h"
#include "uoptdata.h"
#include "uoptions.h"
#include "uoptkill.h"
#include "uoptppss.h"

struct MTagTree {
    /*  0x0 */ int size;
    /*  0x4 */ int addr;
    /*  0x8 */ unsigned short mtagno;
    /*  0xA */ unsigned char mtagtype;
    /*  0xC */ struct MTagTree *left;
    /* 0x10 */ struct MTagTree *right;
}; // size 0x14

struct MTag {
    /* 0x0 */ unsigned short blockno;
    /* 0x4 */ struct MTagTree *tree;
    /* 0x8 */ struct MTag *next;
}; // size 0xC

/*
004584D0 init_mtagtab
00458B88 assign_mtag
*/
struct MTag *mtagtab[419];

/*
004584D0 init_mtagtab
00458B88 assign_mtag
*/
int mtagno_anything;

/*
004584D0 init_mtagtab
00458B88 assign_mtag
*/
int mtagno_heap;

/*
004584D0 init_mtagtab
00458B88 assign_mtag
*/
int mtagno_readonly;

/*
004584D0 init_mtagtab
00458B88 assign_mtag
*/
int mtagno_non_local;

/*
004584D0 init_mtagtab
0045877C searchmtag_parm
00458998 func_00458998
00458B88 assign_mtag
*/
int next_mtagno;

/*
004584D0 init_mtagtab
0045877C searchmtag_parm
*/
struct MTagTree *f77_parm_mtag_head;

/*
004584D0 init_mtagtab
0045877C searchmtag_parm
0045889C func_0045889C
00458998 func_00458998
00458B88 assign_mtag
*/
union Bcode uu;

/*
00456A2C oneproc
*/
void init_mtagtab(void) {
    int i;
    int tagno;

    if (!domtag) {
        return;
    }

    for (i = 0; i < sizeof(mtagtab) / sizeof(mtagtab[0]); i++) {
        mtagtab[i] = NULL;
    }

    f77_parm_mtag_head = NULL;

    uu.Ucode.Opc = Umtag;
    tagno = curproc->unk38 + 1;
    uu.Ucode.I1 = tagno;
    uu.Ucode.Lexlev = mtag_anything;
    mtagno_anything = tagno;
    uwrite(&uu);

    uu.Ucode.Lexlev = mtag_heap;
    tagno = curproc->unk38 + 2;
    uu.Ucode.I1 = tagno;
    mtagno_heap = tagno;
    uwrite(&uu);

    uu.Ucode.Lexlev = mtag_readonly;
    tagno = curproc->unk38 + 3;
    uu.Ucode.I1 = tagno;
    mtagno_readonly = tagno;
    uwrite(&uu);

    uu.Ucode.Lexlev = mtag_non_local;
    tagno = curproc->unk38 + 4;
    uu.Ucode.I1 = tagno;
    mtagno_non_local = tagno;
    uwrite(&uu);

    next_mtagno = curproc->unk38 + 5;
}

/*
0045877C searchmtag_parm
*/
void mtagwarning(void) {
    if (warn_flag != 1) {
        warned = true;
        writeln(err.c_file);
        write_string(err.c_file, "uopt: Warning: used up all ", 27, 27);
        write_integer(err.c_file, 0x3FFF, 0, 10); // was this a macro/define?
        write_string(err.c_file, " memory tags in ", 16, 16);
        write_string(err.c_file, entnam0, 1024, entnam0len);
        writeln(err.c_file);
        fflush(err.c_file);
    }
}

/*
00458B88 assign_mtag
*/
struct MTagTree *searchmtag_parm(struct Expression *baseaddr) {
    struct MTagTree *tree = f77_parm_mtag_head;

    while (tree != NULL) {
        if (tree->addr != baseaddr->data.islda_isilda.level) { // level instead of size here
            tree = tree->left;
        }
    }

    if (tree != NULL) {
        return tree;
    }

    tree = alloc_new(sizeof (struct MTagTree), &perm_heap);
    tree->addr = baseaddr->data.islda_isilda.level;
    tree->mtagtype = mtag_f77_parm;
    tree->left = f77_parm_mtag_head;
    f77_parm_mtag_head = tree;
    tree->mtagno = next_mtagno++;
    if (next_mtagno == 0x3FFF) {
        domtag = false;
        mtagwarning();
    }

    uu.Ucode.Opc = Umtag;
    uu.Ucode.Lexlev = mtag_f77_parm;
    uu.Ucode.I1 = tree->mtagno;
    uwrite(&uu);
    return tree;
}

/*
0045889C func_0045889C
00458998 func_00458998
   Check for aliasing
*/
static void func_0045889C(struct MTagTree *tree1, struct MTagTree *tree2) {
    if (tree2 == NULL) {
        return;
    }

    func_0045889C(tree1, tree2->left);
    if ((tree1->addr >= tree2->addr && tree1->addr - tree2->addr < tree2->size) ||
        (tree2->addr >= tree1->addr && tree2->addr - tree1->addr < tree1->size)) {
        uu.Ucode.Opc = Ualia;
        uu.Ucode.I1 = tree1->mtagno;
        uu.Ucode.Lexlev = tree2->mtagno;
        uwrite(&uu);
    }
    func_0045889C(tree1, tree2->right);
}

/*
00458B88 assign_mtag
00458998 func_00458998
*/
static struct MTagTree *func_00458998(struct Expression *baseaddr, struct MTagTree **mtagtree, struct MTag *mtag) {
    struct MTagTree *newtree;

    if (*mtagtree == NULL) {
        newtree = alloc_new(sizeof (struct MTagTree), &perm_heap);
        newtree->size = baseaddr->data.islda_isilda.size;
        newtree->addr = baseaddr->data.islda_isilda.address.addr;

        if (baseaddr->data.islda_isilda.address.memtype == Mmt || baseaddr->data.islda_isilda.address.memtype == Pmt) {
            if (curblk == baseaddr->data.islda_isilda.address.blockno) {
                newtree->mtagtype = mtag_local_stack;
            } else {
                newtree->mtagtype = mtag_uplevel_stack;
            }
        } else {
            if (in_fsym(baseaddr->data.islda_isilda.address.blockno)) {
                newtree->mtagtype = mtag_local_static;
            } else {
                newtree->mtagtype = mtag_global_static;
            }
        }

        uu.Ucode.Opc = Umtag;
        uu.Ucode.I1 = next_mtagno;
        uu.Ucode.Lexlev = newtree->mtagtype;
        newtree->mtagno = next_mtagno;
        next_mtagno++;
        uwrite(&uu);
        newtree->left = NULL;
        newtree->right = NULL;
        func_0045889C(newtree, mtag->tree);
        *mtagtree = newtree;
    } else {
        if (baseaddr->data.islda_isilda.address.addr < (*mtagtree)->addr) {
            return func_00458998(baseaddr, &(*mtagtree)->left, mtag);
        }
        if (baseaddr->data.islda_isilda.address.addr > (*mtagtree)->addr) {
            return func_00458998(baseaddr, &(*mtagtree)->right, mtag);
        }
        if (baseaddr->data.islda_isilda.size < (*mtagtree)->size) {
            return func_00458998(baseaddr, &(*mtagtree)->left, mtag);
        }
        if (baseaddr->data.islda_isilda.size > (*mtagtree)->size) {
            return func_00458998(baseaddr, &(*mtagtree)->right, mtag);
        }
    }
    return *mtagtree;
}

/*
00445E44 exprimage
004471AC codeimage
  XXX: Tested, but doesn't seem to do anything to the final output.
*/
int assign_mtag(struct Expression *baseaddr) {
    struct MTag *mtag;
    int hash;

    if (!domtag) {
        return mtag_anything;
    }

    if (baseaddr->type == dumped) {
        if (baseaddr->ichain == NULL || baseaddr->ichain->expr == NULL) {
            return mtagno_anything;
        }
        baseaddr = baseaddr->ichain->expr; 
    }

    if (baseaddr->type == islda || baseaddr->type == isilda) {
        hash = baseaddr->data.islda_isilda.address.blockno % 419;
        if (hash < 0) {
            hash += 419;
        }

        mtag = mtagtab[hash];
        while (mtag != NULL && (baseaddr->data.islda_isilda.address.blockno != mtag->blockno)) {
            mtag = mtag->next;
        }

        if (mtag == NULL) {
            mtag = alloc_new(sizeof (struct MTag), &perm_heap);
            mtag->blockno = baseaddr->data.islda_isilda.address.blockno;
            mtag->tree = NULL;
            mtag->next = mtagtab[hash];
            mtagtab[hash] = mtag;
        }
        return func_00458998(baseaddr, &mtag->tree, mtag)->mtagno;
    }


    if (lang != LANG_C &&
            (baseaddr->type != isvar &&
             baseaddr->type != isop &&
             baseaddr->type != issvar &&
             baseaddr->type != dumped)) {
        return mtagno_readonly;
    }

    if (pointtoheap(baseaddr)) {
        return mtagno_heap;
    }

    switch (lang) {
        case LANG_PASCAL:
        case LANG_C:
        case LANG_ADA:
        case LANG_PL1:
        case LANG_RESERVED1:
            return mtagno_anything;

        case LANG_COBOL:
            uu.Ucode.Opc = Umtag;
            uu.Ucode.Lexlev = mtag_f77_parm;
            uu.Ucode.I1 = next_mtagno;
            uwrite(&uu);
            next_mtagno++;
            break;

        case LANG_FORTRAN:
            if (use_c_semantics != 0) {
                return mtagno_anything;
            }
            if (baseaddr->type == isvar && baseaddr->data.isvar_issvar.location.memtype == Mmt) {
                return mtagno_anything;
            }

            if (!nof77alias) {
                return mtagno_non_local;
            }

            if (baseaddr->type != isvar && baseaddr->type != issvar) {
                uu.Ucode.Opc = Umtag;
                uu.Ucode.Lexlev = mtag_f77_parm;
                uu.Ucode.I1 = next_mtagno;
                uwrite(&uu);
                next_mtagno++;
                break;
            }
            return searchmtag_parm(baseaddr)->mtagno;

        default:
            caseerror(1, 256, "uoptmtag.p", 10);
            break;
    }
    return 0; //! was undefined
}
