#include <string.h>

#include "libp/libp.h"
#include "libu/libu.h"
#include "uoptdata.h"
#include "uoptions.h"
#include "uoptdbg.h"
#include "uoptkill.h"
#include "uoptreg1.h"
#include "uoptutil.h"
#include "uoptfeedback.h"

/*
00469280 globalcolor
*/
static int numofsplits;

/*
00464BFC localcolor
00467008 updatelivran
0046791C whyuncolored
00467F04 split
00468A14 cupcosts
00469280 globalcolor
*/
static struct Graphnode **bbtab;

/*
00464BFC localcolor
004669A8 addadjacents
00467F04 split
*/
static struct Graphnode **formingtab;

/*
004669A8 addadjacents
00467F04 split
*/
static unsigned int forminginx;

/*
004669A8 addadjacents
00467F04 split
*/
static unsigned int formingmax;

/*
00467C34 needsplit
00467F04 split
00469280 globalcolor
*/
static struct BitVector unconstrain;

/*
00467C34 needsplit
00467F04 split
00469280 globalcolor
*/
static struct BitVector colorcand;

/*
00464BFC localcolor
00465D30 intfering
004673B0 func_004673B0
00467514 contiguous
*/
static struct BitVector livrantemp;

/*
00456A2C oneproc
*/
void regdataflow(void) {
    struct BitVector colored_vars;
    struct Graphnode *node;
    struct GraphnodeList *succ;
    struct GraphnodeList *pred;
    struct IChain *ichain;
    int i;
    bool changed;

    checkbvlist(&old);
    checkbvlist(&iscolored12);
    checkbvlist(&iscolored[0]);
    checkbvlist(&iscolored[1]);
    checkbvlist(&varbits);
    checkbvlist(&mvarbits);
    if (fsymbits.num_blocks != 0) {
        checkbvlist(&fsymbits);
    }
    checkbvlist(&outmodebits);
    checkbvlist(&notinmodebits);
    checkbvlist(&coloreditems);
    checkbvlist(&coloredparms);

    for (node = graphhead; node != NULL; node = node->next) {
        checkbvlist(&node->bvs.stage2.appear);
        checkbvlist(&node->bvs.stage2.loclive);
        checkbvlist(&node->bvs.stage2.locdef);
        checkbvlist(&node->bvs.stage2.ppin);
        checkbvlist(&node->indiracc);

        if (node->stat_tail->opc == Ucia || node->stat_tail->opc == Ucup || node->stat_tail->opc == Uicuf) {
            bvectcopy(&node->bvs.stage2.ppin, &iscolored12);
            bvectintsect(&node->bvs.stage2.ppin, &varbits);

            if (node->stat_tail->opc == Ucup || node->stat_tail->opc == Uicuf) {
                for (i = 0; i < bitposcount; i++) {
                    if (bvectin(i, &node->bvs.stage2.ppin)) {
                        ichain = bittab[i].ichain;
                        if (ichain->isvar_issvar.location.memtype == Mmt && ichain->isvar_issvar.location.addr == staticlinkloc) {
                            ichain->expr->data.isvar_issvar.location.level = curlevel;
                            if (!clkilled(node->stat_tail->u.call.level, node->stat_tail->u.call.proc, ichain->expr) &&
                                    !listplkilled(node->stat_tail->u.call.parameters, ichain->expr, 1)) {
                                resetbit(&node->bvs.stage2.ppin, i);
                            }
                        } else {
                            if (!clkilled(node->stat_tail->u.call.level, node->stat_tail->u.call.proc, ichain->expr) &&
                                    !listplkilled(node->stat_tail->u.call.parameters, ichain->expr, ichain->isvar_issvar.vreg)) {
                                resetbit(&node->bvs.stage2.ppin, i);
                            }
                        }
                    }
                }

                switch (node->stat_tail->u.call.returntype) {
                    case Qdt:
                    case Rdt:
                        setbit(&node->successors->graphnode->bvs.stage2.appear, r2bitpos[1]);
                        if (IS_RELOAD_STACK_ATTR(node->stat_tail->u.call.extrnal_flags)) {
                            setbit(&node->successors->graphnode->bvs.stage2.appear, r2bitpos[2]);
                        }
                        break;

                    case Pdt:
                        break;

                    default:
                        setbit(&node->successors->graphnode->bvs.stage2.appear, r2bitpos[0]);
                        break;
                }
            } else if (lang != LANG_ADA) {
                for (i = 0; i < bitposcount; i++) {
                    if (bvectin(i, &node->bvs.stage2.ppin)) {
                        ichain = bittab[i].ichain;
                        if (!IS_CIA_CALLS_ATTR(node->stat_tail->u.cia.flags) || !clkilled(curlevel, indirprocs, ichain->expr)) {
                            if (!listplkilled(node->stat_tail->u.cia.parameters, ichain->expr, ichain->isvar_issvar.vreg)) {
                                resetbit(&node->bvs.stage2.ppin, i);
                            }
                        }
                    }
                }
            }
        }

        if (lang == LANG_ADA && node->successors == NULL) {
            unionintsect(&node->bvs.stage2.loclive, &coloredparms, &outmodebits);
        }
    }
    if (outofmem) {
        return;
    }

    lastdftime = getclock();
    numdataflow += 3;

    for (node = graphhead; node != NULL; node = node->next) {
        checkbvlist(&node->bvs.stage2.active);
        checkbvlist(&node->bvs.stage2.unk11C);
        bvectcopy(&node->bvs.stage2.active, &node->bvs.stage2.loclive);

        if (node->stat_tail->opc == Ucia || node->stat_tail->opc == Ucup || node->stat_tail->opc == Uicuf) {
            for (succ = node->successors; succ != NULL; succ = succ->next) {
                unionminus(&node->bvs.stage2.active, &succ->graphnode->bvs.stage2.loclive, &node->bvs.stage2.ppin);
            }
        } else {
            for (succ = node->successors; succ != NULL; succ = succ->next) {
                bvectunion(&node->bvs.stage2.active, &succ->graphnode->bvs.stage2.loclive);
            }
        }
        bvectcopy(&node->bvs.stage2.unk11C, &node->bvs.stage2.appear);
    }
    if (outofmem) {
        return;
    }

    unionminus(&graphhead->bvs.stage2.unk11C, &coloredparms, &notinmodebits);

    do {
        dataflowiter++;
        changed = false;
        for (node = graphtail; node != NULL; node = node->prev) {
            if (node->successors != NULL) {
                if (!changed) {
                    bvectcopy(&old, &node->bvs.stage2.active);
                }

                if (node->stat_tail->opc == Ucia || node->stat_tail->opc == Ucup || node->stat_tail->opc == Uicuf) {
                    for (succ = node->successors; succ != NULL; succ = succ->next) {
                        uminusminus(&node->bvs.stage2.active, &succ->graphnode->bvs.stage2.active, &succ->graphnode->bvs.stage2.locdef, &node->bvs.stage2.ppin);
                    }
                } else {
                    for (succ = node->successors; succ != NULL; succ = succ->next) {
                        unionminus(&node->bvs.stage2.active, &succ->graphnode->bvs.stage2.active, &succ->graphnode->bvs.stage2.locdef);
                    }
                }

                if (!changed && !bvecteq(&old, &node->bvs.stage2.active)) {
                    changed = true;
                }
            }
        }
    } while (changed);

    do {
        dataflowiter++;
        changed = false;
        for (node = graphhead; node != NULL; node = node->next) {
            if (!changed) {
                bvectcopy(&old, &node->bvs.stage2.unk11C);
            }

            for (pred = node->predecessors; pred != NULL; pred = pred->next) {
                if (pred->graphnode->stat_tail->opc == Ucia ||
                        pred->graphnode->stat_tail->opc == Ucup ||
                        pred->graphnode->stat_tail->opc == Uicuf) {
                    unionminus(&node->bvs.stage2.unk11C, &pred->graphnode->bvs.stage2.unk11C, &pred->graphnode->bvs.stage2.ppin);
                } else {
                    bvectunion(&node->bvs.stage2.unk11C, &pred->graphnode->bvs.stage2.unk11C);
                }
            }

            if (!changed && !bvecteq(&old, &node->bvs.stage2.unk11C)) {
                changed = true;
            }
        }
    } while (changed);

    for (node = graphhead; node != NULL; node = node->next) {
        bvectunion(&node->bvs.stage2.loclive, &node->indiracc);
    }

    colored_vars.num_blocks = 0;
    colored_vars.blocks = NULL;
    checkbvlist(&colored_vars);
    bvectcopy(&colored_vars, &varbits);
    bvectintsect(&colored_vars, &iscolored12);
    bvectminus(&colored_vars, &mvarbits);
    for (node = graphhead; node != NULL; node = node->next) {
        bvectintsect(&node->bvs.stage2.active, &node->bvs.stage2.unk11C);
        bvectunion(&node->bvs.stage2.active, &node->bvs.stage2.appear);
        checkinitbvlivran(&node->bvs.stage2.unk11C);
        setbitbb(&node->bvs.stage2.unk11C, node->num);

        checkbvlist(&node->bvs.stage2.liveout);
        initbv(&node->bvs.stage2.liveout, (struct BitVectorBlock) {0});

        if (node->successors == NULL && (!is_cup(node) || (lang != LANG_PL1 && lang != LANG_COBOL))) {
            bvectunion(&node->bvs.stage2.liveout, &colored_vars);
        } else if (node->successors == NULL) {
            bvectunion(&node->bvs.stage2.liveout, &node->bvs.stage2.ppin);
        } else if (node->stat_tail->opc == Ucia || node->stat_tail->opc == Ucup || node->stat_tail->opc == Uicuf) {
            bvectunion(&node->bvs.stage2.liveout, &node->bvs.stage2.ppin);
            for (succ = node->successors; succ != NULL; succ = succ->next) {
                bvectunion(&node->bvs.stage2.liveout, &succ->graphnode->bvs.stage2.loclive);
            }

            if (!node->terminal && has_exc_handler) {
                unionintsect(&node->bvs.stage2.liveout, &iscolored12, &varbits);
            }
        } else {
            for (succ = node->successors; succ != NULL; succ = succ->next) {
                bvectunion(&node->bvs.stage2.liveout, &succ->graphnode->bvs.stage2.loclive);
            }
        }
    }

    if (outofmem) {
        return;
    }

    do {
        dataflowiter++;
        changed = false;
        for (node = graphtail; node != NULL; node = node->prev) {
            if (node->successors != NULL) {
                if (!changed) {
                    bvectcopy(&old, &node->bvs.stage2.liveout);
                }

                for (succ = node->successors; succ != NULL; succ = succ->next) {
                    unionminus(&node->bvs.stage2.liveout, &succ->graphnode->bvs.stage2.liveout, &succ->graphnode->bvs.stage2.locdef);
                }

                if (!changed && !bvecteq(&old, &node->bvs.stage2.liveout)) {
                    changed = true;
                }
            } else if (fsymbits.num_blocks != 0) {
                if (!changed) {
                    bvectcopy(&old, &node->bvs.stage2.liveout);
                }

                uintsectminus(&node->bvs.stage2.liveout, &fsymbits, &graphhead->bvs.stage2.liveout, &graphhead->bvs.stage2.locdef);
                unionintsect(&node->bvs.stage2.liveout, &fsymbits, &graphhead->bvs.stage2.loclive);

                if (!changed && !bvecteq(&old, &node->bvs.stage2.liveout)) {
                    changed = true;
                }
            }
        }
    } while (changed);

    checkinitbvlivran(&old);
    do {
        changed = false;
        for (node = graphtail; node != NULL; node = node->prev) {
            if (node->successors != NULL) {
                if (!changed) {
                    bvectcopy(&old, &node->bvs.stage2.unk11C);
                }

                for (succ = node->successors; succ != NULL; succ = succ->next) {
                    bvectunion(&node->bvs.stage2.unk11C, &succ->graphnode->bvs.stage2.unk11C);
                }

                if (!changed && !bvecteq(&old, &node->bvs.stage2.unk11C)) {
                    changed = true;
                }
            }
        }
    } while (changed);
    dataflowtime = (dataflowtime + getclock()) - lastdftime;
}

/*
00464910 allsucmember
004669A8 addadjacents
00467F04 split
00469280 globalcolor
*/
struct LiveUnit *gettolivbb(struct IChain *ichain, struct Graphnode *node) {
    struct LiveUnit *lu = node->liveunit;

    while (lu != NULL && lu->liverange->ichain != ichain) {
        lu = lu->next_in_block;
    }

    if (lu == NULL) {
        return dft_livbb;
    }

    return lu;
}

/*
00464BFC localcolor
*/
bool prehascup(struct GraphnodeList *pred, int index) {
    bool has_cup = false;

    while (!has_cup && pred != NULL) {
        if (pred->graphnode->stat_tail->opc == Ucia ||
            pred->graphnode->stat_tail->opc == Ucup ||
            pred->graphnode->stat_tail->opc == Uicuf) {
            if (bvectin(index, &pred->graphnode->bvs.stage2.ppin)) {
                has_cup = true;
            }
        }
        pred = pred->next;
    }

    return has_cup;
}

/*
00464910 allsucmember
*/
static bool func_00464848(struct GraphnodeList *succ, struct LiveRange *lr) {
    if (bvectin(lr->ichain->bitpos, &succ->graphnode->bvs.stage2.loclive)) {
        return true;
    }

    if (succ->graphnode->stat_tail->opc == Ucia || succ->graphnode->stat_tail->opc == Ucup || succ->graphnode->stat_tail->opc == Uicuf) {
        return bvectin(lr->ichain->bitpos, &succ->graphnode->bvs.stage2.ppin);
    }

    return false;
}

/*
00464BFC localcolor
00467008 updatelivran
*/
bool allsucmember(struct GraphnodeList *succ, struct LiveRange *lr) {
    bool member = true;

    while (member && succ != NULL) {
        if (!bvectin(succ->graphnode->num, &lr->livebbs)) {
            if (func_00464848(succ, lr) ||
                    (bvectin(lr->ichain->bitpos, &succ->graphnode->bvs.stage2.liveout) &&
                    !bvectin(lr->ichain->bitpos, &succ->graphnode->bvs.stage2.locdef))) {
                member = false;
            }
        } else if (gettolivbb(lr->ichain, succ->graphnode)->needreglod) {
            member = false;
        }

        succ = succ->next;
    }
    return member;
}

/*
00464BFC localcolor
00467008 updatelivran
*/
bool preallmember(struct GraphnodeList *pred, struct LiveRange *lr) {
    bool member;

    member = true;
    while (member && pred != NULL) {
        if (!bvectin(pred->graphnode->num, &lr->livebbs)) {
            member = false;
        }

        pred = pred->next;
    }
    return member;
}

/*
00464BFC localcolor
00467008 updatelivran
*/
struct LiveUnit *alloc_livbb(void) {
    struct LiveUnit *ret;

    ret = alloc_new(sizeof(struct LiveUnit), &perm_heap);
    if (ret == NULL) {
        outofmem = true;
        return NULL;
    }

    *ret = *dft_livbb;
    return ret;
}

/*
00464BFC localcolor
*/
bool r2_overlap_r3(unsigned short hash) {
    struct Expression *expr;

    for (expr = table[hash]; expr != NULL; expr = expr->next) {
        if ((expr->type == isvar || expr->type == dumped) &&
                expr->data.isvar_issvar.location.memtype == Rmt &&
                expr->data.isvar_issvar.location.addr == r_v0 &&
                expr->data.isvar_issvar.size > 4) {
            return true;
        }
    }

    return false;
}

/*
00456A2C oneproc
*/
void localcolor(void) {
    int i;
    int tempset[2] = {0};
    int regclass; // s5
    struct Graphnode *node;
    struct IChain *ichain;
    struct LiveUnit *lu; // s0
    int reg; // s2
    int bb;
    bool needreglod;
    bool needregsave;

    formingtab = alloc_new(curstaticno * sizeof(struct Graphnode *), &perm_heap);
    bbtab = alloc_new(curstaticno * sizeof(struct Graphnode *), &perm_heap);
    memset(formingtab, 0, curstaticno * sizeof(struct Graphnode *));
    memset(bbtab, 0, curstaticno * sizeof(struct Graphnode *));

    for (node = graphhead; node != NULL; node = node->next) {
        bbtab[node->num] = node;
    }

    formbvlivran(&livrantemp);
    for (i = 0; i < bitposcount; i++) {
        ichain = bittab[i].ichain;

        if (!bvectin(i, &iscolored12)) {
            continue;
        }

        // overwrites liveunitsTail
        bittab[i].liverange->interfere = NULL;
        if (ichain->type != isvar || ichain->isvar_issvar.location.memtype != Rmt) {
            bittab[i].liverange->hasstore = false;
            initbv(&livrantemp, (struct BitVectorBlock) {0});

            for (lu = bittab[i].liverange->liveunits; lu != NULL; lu = lu->next) {
                if (lu->store_count != 0 || lu->firstisstr) {
                    bittab[i].liverange->hasstore = true;
                    bvectunion(&livrantemp, &lu->node->bvs.stage2.unk11C);
                }
                lu->deadout = !bvectin(i, &lu->node->bvs.stage2.liveout);
            }
        }

        for (node = graphhead; node != NULL; node = node->next) {
            if (bvectin(i, &node->bvs.stage2.active) &&
                    !bvectin(node->num, &bittab[i].liverange->livebbs) &&
                    !bvectin(i, &node->indiracc)) {
                numlu++;
                lu = dft_livbb;
                if (node == graphhead && bvectin(i, &coloredparms)) {
                    regclass = regclassof(ichain);

                    if (ichain->isvar_issvar.location.memtype == Mmt) {
                        reg = 1;
                    } else {
                        reg = firstparmreg[regclass - 1] + ichain->isvar_issvar.location.addr / 4;
                    }

                    if (regclass == 2 && ichain->isvar_issvar.location.addr != 0) {
                        reg = firstparmreg[regclass - 1] + 1;
                    }

                    lu = alloc_livbb();
                    if (lu == NULL) {
                        return;
                    }

                    lu->firstisstr = true;
                    lu->deadout = false;
                    bittab[i].liverange->hasstore = true;

                    bvectunion(&livrantemp, &graphhead->bvs.stage2.unk11C);
                    if ((!allcallersave || reg == 1) && !SET_IN(node->regsused[regclass - 1], reg) &&
                            passedinreg(ichain, offsetpassedbyint) && doprecolor)  {
                        lu->reg = reg;

                        SET_ADD(node->regsused[regclass - 1], reg);

                        if ((ichain->dtype == Qdt && regclass == 1) ||
                                ((ichain->dtype == Idt || ichain->dtype == Kdt) && !mips3_64data)) {
                            SET_ADD(node->regsused[regclass - 1], reg + 1);
                        }
                    } else {
                        lu->reg = 0;
                    }
                } else if (node->successors == NULL && bvectin(i, &coloredparms) && bvectin(i, &outmodebits)) {
                    regclass = regclassof(ichain);
                    reg = firstparmreg[regclass - 1] + ichain->isvar_issvar.location.addr / 4;

                    if (regclass == 2 && ichain->isvar_issvar.location.addr) {
                        reg = firstparmreg[regclass - 1] + 1;
                    }

                    if (!allcallersave && !SET_IN(node->regsused[regclass - 1], reg) && passedinreg(ichain, offsetpassedbyint)) {
                        lu = alloc_livbb();
                        if (lu == NULL) {
                            return;
                        }

                        lu->reg = reg;
                        lu->deadout = false;

                        SET_ADD(node->regsused[regclass - 1], reg);
                        if (ichain->dtype == Qdt && regclass == 1) {
                            SET_ADD(node->regsused[regclass - 1], reg + 1);
                        }
                    }
                }

                if (lu != dft_livbb) {
                    lu->node = node;
                    lu->next = bittab[i].liverange->liveunits;
                    bittab[i].liverange->liveunits = lu;
                    lu->liverange = bittab[i].liverange;
                    lu->next_in_block = node->liveunit;
                    node->liveunit = lu;
                } else {
                    setbitbb(&bittab[i].liverange->reachingbbs, node->num);
                }

                setbitbb(&bittab[i].liverange->livebbs, node->num);
            }
        }

        if (ichain->type == isvar && ichain->isvar_issvar.location.memtype == Rmt) {
            resetbit(&iscolored12, i);

            if (ichain->dtype == Qdt || ichain->dtype == Rdt) {
                regclass = 2;
            } else {
                regclass = 1;
            }
            resetbit(&iscolored[regclass - 1], i);
            if (ichain->isvar_issvar.location.addr != r_sp) {
                if (ichain->isvar_issvar.location.addr == r_v0) {
                    if (!mips3_64data && r2_overlap_r3(ichain->expr->table_index)) {
                        SET_INIT(tempset, firsterreg[0]);
                        SET_INIT(tempset, firsterreg[0] + 1);
                    } else {
                        SET_INIT(tempset, firsterreg[0]);
                    }

                    if (staticlinkloc != 0 && SET_IN(graphhead->regsused[0], firsterreg[0]) &&
                            bvectin(graphhead->num, &bittab[i].liverange->livebbs) && doprecolor) {
                        lu = graphhead->liveunit;
                        if (lu->reg != firsterreg[0]) {
                            lu = lu->next_in_block;
                        }

                        if (lu->liverange->ichain->type != isvar || lu->liverange->ichain->isvar_issvar.location.addr != staticlinkloc) {
                            dbgerror(0x2CE);
                        }
                        lu->reg = 0;
                    }
                } else {
                    if (ichain->isvar_issvar.location.addr == r_f0) {
                        SET_INIT(tempset, firsterreg[1]);
                    } else {
                        SET_INIT(tempset, firsterreg[1] + 1);
                    }
                }

                for (bb = 0; bb < curstaticno; bb++) {
                    if (bvectin(bb, &bittab[i].liverange->livebbs)) {
                        SET_UNION(bbtab[bb]->regsused[regclass - 1], tempset);
                    }
                }
            }
        } else {
            for (lu = bittab[i].liverange->liveunits; lu != NULL; lu = lu->next) {
                if (!lu->firstisstr) {
                    if (lu->node->predecessors == NULL || lu->node->interprocedural_controlflow) {
                        lu->needreglod = true;
                    } else if (ichain->type == isvar) {
                        if (prehascup(lu->node->predecessors, i)) {
                            lu->needreglod = true;
                        } else {
                            lu->needreglod = !preallmember(lu->node->predecessors, bittab[i].liverange);
                        }
                    } else {
                        lu->needreglod = !preallmember(lu->node->predecessors, bittab[i].liverange);
                    }
                }
            }

            if (!bvectempty(&bittab[i].liverange->reachingbbs)) {
                for (bb = 0; bb < curstaticno; bb++) {
                    if (bvectin(bb, &bittab[i].liverange->reachingbbs)) {
                        if (bbtab[bb]->predecessors == NULL || bbtab[bb]->interprocedural_controlflow) {
                            needreglod = true;
                        } else if (ichain->type == isvar) {
                            if (prehascup(bbtab[bb]->predecessors, i)) {
                                needreglod = true;
                            } else {
                                needreglod = !preallmember(bbtab[bb]->predecessors, bittab[i].liverange);
                            }
                        } else {
                            needreglod = !preallmember(bbtab[bb]->predecessors, bittab[i].liverange);
                        }

                        if (needreglod) {
                            lu = alloc_livbb();
                            if (lu == NULL) {
                                return;
                            }

                            lu->node = bbtab[bb];
                            lu->next = bittab[i].liverange->liveunits;
                            bittab[i].liverange->liveunits = lu;
                            lu->liverange = bittab[i].liverange;
                            lu->next_in_block = bbtab[bb]->liveunit;
                            bbtab[bb]->liveunit = lu;
                            lu->needreglod = true;
                            resetbit(&bittab[i].liverange->reachingbbs, bb);
                        }
                    }
                }
            }

            if (bittab[i].liverange->hasstore) {
                for (lu = bittab[i].liverange->liveunits; lu != NULL; lu = lu->next) {
                    if (!lu->deadout && (lu->store_count != 0 || lu->firstisstr || bvectin(lu->node->num, &livrantemp))) {
                        if (lu->node->successors == NULL) {
                            if (ichain->isvar_issvar.location.memtype == Pmt && ichain->isvar_issvar.location.blockno == curblk &&
                                    (allcallersave || ichain->isvar_issvar.location.addr < r_s0) &&
                                    passedinreg(ichain, offsetpassedbyint)) {
                                lu->needregsave = false;
                            } else {
                                lu->needregsave = true;
                            }
                        } else {
                            if (lu->node->stat_tail->opc == Ucia || lu->node->stat_tail->opc == Ucup || lu->node->stat_tail->opc == Uicuf) {
                                if (bvectin(i, &lu->node->bvs.stage2.ppin)) {
                                    lu->needregsave = true;
                                } else {
                                    lu->needregsave = !allsucmember(lu->node->successors, bittab[i].liverange);
                                }
                            } else {
                                lu->needregsave = !allsucmember(lu->node->successors, bittab[i].liverange);
                            }
                        }
                    }
                }

                if (!bvectempty(&bittab[i].liverange->reachingbbs)) {
                    for (bb = 0; bb < curstaticno; bb++) {
                        if (bvectin(bb, &bittab[i].liverange->reachingbbs) &&
                                bvectin(i, &bbtab[bb]->bvs.stage2.liveout) &&
                                bvectin(bbtab[bb]->num, &livrantemp)) {
                            if (bbtab[bb]->successors == NULL) {
                                if (ichain->isvar_issvar.location.memtype == Pmt &&
                                        ichain->isvar_issvar.location.blockno == curblk &&
                                        (allcallersave || ichain->isvar_issvar.location.addr < r_s0) &&
                                        passedinreg(ichain, offsetpassedbyint)) {
                                    needregsave = false;
                                } else {
                                    needregsave = true;
                                }
                            } else {
                                if (bbtab[bb]->stat_tail->opc == Ucia ||
                                        bbtab[bb]->stat_tail->opc == Ucup ||
                                        bbtab[bb]->stat_tail->opc == Uicuf) {
                                    if (bvectin(i, &bbtab[bb]->bvs.stage2.ppin)) {
                                        needregsave = true;
                                    } else {
                                        needregsave = !allsucmember(bbtab[bb]->successors, bittab[i].liverange);
                                    }
                                } else {
                                    needregsave = !allsucmember(bbtab[bb]->successors, bittab[i].liverange);
                                }
                            }

                            if (needregsave) {
                                lu = alloc_livbb();
                                if (lu == NULL) {
                                    return;
                                }

                                lu->node = bbtab[bb];
                                lu->next = bittab[i].liverange->liveunits;
                                bittab[i].liverange->liveunits = lu;
                                lu->liverange = bittab[i].liverange;
                                lu->next_in_block = bbtab[bb]->liveunit;
                                bbtab[bb]->liveunit = lu;
                                lu->needregsave = true;
                                resetbit(&bittab[i].liverange->reachingbbs, bb);
                            }
                        }
                    }
                }
            }
        }
    }
}

/*
00465DA4 func_00465DA4
00467F04 split
*/
void insintf(struct InterfereList **interfere, struct LiveRange *lr) {
    struct InterfereList *intf;

    intf = alloc_new(sizeof(struct InterfereList), &perm_heap);
    if (intf == NULL) {
        outofmem = true;
        return;
    }

    intf->next = *interfere;
    intf->shared = false;
    intf->marked = false;
    intf->liverange = lr;
    *interfere = intf;
}

/*
00465E50 spilltemps
00467F04 split
*/
bool intfering(struct LiveRange *lr1, struct LiveRange *lr2) {
    bvectcopy(&livrantemp, &lr1->livebbs);
    bvectintsect(&livrantemp, &lr2->livebbs);
    return !bvectempty(&livrantemp);
}

/*
00465E50 spilltemps
   Add both LiveRanges to each other's interference list
*/
static void func_00465DA4(struct LiveRange *lr1, struct LiveRange *lr2) {
    insintf(&lr1->interfere, lr2);
    lr1->unk24 += 1;
    insintf(&lr2->interfere, lr1);
    lr2->unk24 += 1;
}

/*
00465E50 spilltemps
   Find the Temploc with the given index
*/
static struct Temploc *func_00465E18(int index) {
    struct Temploc *temploc = templochead;

    while (temploc->index != index) {
        temploc = temploc->next;
    }
    return temploc;
}

/*
00456A2C oneproc
*/
void spilltemps(void) {
    int bit; // spBC
    struct IChain *ichain; // spA0
    bool found; // sp9B
    struct Temploc *temploc;
    int regclass; // sp8C
    int i;
    int j;
    struct Graphnode *node;
    Datatype dtype;
    int size; // s0
    int align;
    int mod;

    numlr = 0;
    contiglr = 0;
    numsplitlu = 0;
    numcoloredlr = 0;
    allococ = 0;
    numcantcoloredlr = 0;
    num0occurlr = 0;
    numcalloverheadlr = 0;
    numsparselr = 0;
    numnotwellformedlr = 0;

    for (regclass = 1; regclass < 3; regclass++) {
        for (i = 0; i < bitposcount; i++) {
            if (bvectin(i, &iscolored[regclass - 1])) {
                numlr += 1;
                for (j = i + 1; j < bitposcount; j++) {
                    if (bvectin(j, &iscolored[regclass - 1])) {
                        if (intfering(bittab[i].liverange, bittab[j].liverange)) {
                            func_00465DA4(bittab[i].liverange, bittab[j].liverange);
                        }
                    }
                }
            }
        }
    }
    finalnumlr = numlr;

    if (outofmem) {
        return;
    }

    tempcount = 0;
    setofspills.blocks = NULL;
    setofspills.num_blocks = 0;
    checkbvlist(&setofspills);

    for (bit = 0; bit < firstconstbit; bit++) {
        ichain = bittab[bit].ichain;
        if (bvectin(bit, &coloreditems)) {

            initbv(&setofspills, (struct BitVectorBlock) {0});

            for (node = graphhead; node != NULL; node = node->next) {
                if (bvectin(bit, &node->bvs.stage1.u.scm.region)) {
                    for (i = 0; i < bit; i++) {
                        if (bvectin(i, &node->bvs.stage1.u.scm.region)) {
                            switch (bittab[i].ichain->type) {
                                case isilda:
                                    setbit(&setofspills, bittab[i].ichain->islda_isilda.temploc->index);
                                    break;

                                case issvar:
                                    setbit(&setofspills, bittab[i].ichain->isvar_issvar.temploc->index);
                                    break;

                                case isop:
                                    setbit(&setofspills, bittab[i].ichain->isop.temploc->index);
                                    break;

                                default:
                                    caseerror(1, 949, "uoptreg2.p", 10);
                                    break;
                            }
                        }
                    }
                }
            }

            if (ichain->type == isop) {
                dtype = ichain->isop.datatype;
            } else {
                dtype = ichain->dtype;
            }

            if (dtype != Sdt) {
                size = sizeoftyp(dtype);
            } else if (ichain->type == issvar) {
                size = ichain->isvar_issvar.size;
            } else if (ichain->isop.opc == Uadj) {
                size = ichain->isop.unk24_u16;
            } else {
                size = ichain->isop.size;
            }

            found = false;
            for (i = 0; !found && i < tempcount; i++) {
                if (!bvectin(i, &setofspills)) {
                    temploc = func_00465E18(i);
                    if (temploc->size == size) {
                        found = true;
                        break;
                    }
                }
            }

            if (!found) {
                tempcount++;
                temploc = alloc_new(sizeof(struct Temploc), &perm_heap);
                if (temploc == NULL) {
                    outofmem = true;
                    return;
                }

                temploc->next = NULL;
                temploc->index = i;
                if (templochead == NULL) {
                    templochead = temploc;
                } else {
                    temploctail->next = temploc;
                }

                /* In Pascal, min(x,y) is a builtin function that can be optimized
                 * if (not (tempdisp mod min(size, 8) = 0)) then
                 *      tempdisp := (tempdisp + min(size, 8)) - (tempdisp mod min(size, 8));
                 */
                align = MIN(size, 8);
                mod = tempdisp % align;
                if ((mod ^ align) < 0) {
                    mod += align;
                }
                if (mod != 0) {
                    tempdisp = (tempdisp + align) - mod;
                }

                if (!stack_reversed) {
                    tempdisp += size;
                    temploc->disp = -tempdisp;
                } else {
                    temploc->disp = tempdisp;
                    tempdisp += size;
                }
                temploc->size = size;
                temploctail = temploc;
            }

            switch (ichain->type) {
                case issvar:
                    ichain->isvar_issvar.temploc = temploc;
                    break;

                case isilda:
                    ichain->islda_isilda.temploc = temploc;
                    break;

                case isop:
                    ichain->isop.temploc = temploc;
                    break;

                default:
                    caseerror(1, 1007, "uoptreg2.p", 10);
                    break;
            }
        }
    }
}

/*
004669A8 addadjacents
00467F04 split
*/
void dellivbb(struct LiveUnit **list, struct LiveUnit *del) {
    struct LiveUnit *lu;
    struct LiveUnit *prev;

    if (del == *list) {
        *list = (*list)->next;
        return;
    }

    lu = (*list)->next;
    prev = (*list);
    while (lu != del) {
        prev = lu;
        lu = lu->next;
    }
    prev->next = del->next;
}

/*
004669A8 addadjacents
00467F04 split
00469280 globalcolor
*/
void updatecolorsleft(struct LiveRange *lr, int regclass) {
    int reg;
    int regsleft = 0;

    for (reg = firsterreg[regclass - 1]; reg <= lasterreg[regclass - 1]; reg++) {
        if (!SET_IN(lr->forbidden, reg)) {
            regsleft++;
        }
    }

    for (reg = firsteereg[regclass - 1]; reg <= lasteereg[regclass - 1]; reg++) {
        if (!SET_IN(lr->forbidden, reg)) {
            regsleft++;
        }
    }

    lr->regsleft = regsleft;
}

/*
004669A8 addadjacents
00467F04 split
00469280 globalcolor
*/
void updateforbidden(struct Graphnode *node, int reg, struct LiveRange *lr, int regclass) {
    int minusreg[2];

    if (reg != 0) {
        //SET_UNION(lr->forbidden, SET_MINUS(node->regsused[regclass - 1], reg));
        SET_MINUS(minusreg, node->regsused[regclass - 1], reg);
        SET_UNION(lr->forbidden, minusreg);
    } else {
        SET_UNION(lr->forbidden, node->regsused[regclass - 1]);
    }
}

/*
00467F04 split
*/
int findsharedintf(struct InterfereList *intf, int nodenum) {
    int count = 0;

    while (intf != NULL) {
        if (intf->liverange != NULL) {
            if (intf->liverange->assigned_reg == -1) {
                intf->liverange = NULL;
            } else if (bvectin(nodenum, &intf->liverange->livebbs)) {
                intf->shared = true;
                count++;
            }
        }
        intf = intf->next;
    }
    return count;
}

/*
004669A8 addadjacents
*/
int marksharedintf(struct InterfereList *intf, int nodenum) {
    int count = 0;

    while (intf != NULL) {
        if (!intf->shared) {
            if (intf->liverange != NULL && bvectin(nodenum, &intf->liverange->livebbs)) {
                intf->marked = true;
                count++;
            }
        }
        intf = intf->next;
    }
    return count;
}


/*
00467F04 split
*/
void addadjacents(struct LiveRange *lr1, struct LiveRange *lr2, struct LiveUnit **list, int regclass) {
    int oldforbidden[2];
    int oldunk21;
    int shared;
    struct LiveUnit *lu;
    struct GraphnodeList *succ;
    struct InterfereList *intf;

    for (succ = formingtab[forminginx]->successors; succ != NULL; succ = succ->next) {
        if (!bvectin(succ->graphnode->num, &lr2->livebbs) && bvectin(succ->graphnode->num, &lr1->livebbs)) {
            lu = gettolivbb(lr1->ichain, succ->graphnode);
            oldforbidden[0] = lr2->forbidden[0];
            oldforbidden[1] = lr2->forbidden[1];
            oldunk21 = lr2->regsleft;

            // count the new interference nodes that would be added to lr2
            shared = marksharedintf(lr1->interfere, succ->graphnode->num);
            updateforbidden(succ->graphnode, lu->reg, lr2, regclass);
            updatecolorsleft(lr2, regclass);
            if ((shared < oldunk21 && lr2->regsleft * 2 >= lr2->unk24 + shared && doheurab) || (!doheurab && lr2->regsleft != 0)) {
                // add this node to the BFS queue
                formingmax++;
                formingtab[formingmax] = succ->graphnode;

                // move node from lr1 to lr2
                resetbit(&lr1->livebbs, succ->graphnode->num);
                if (lu != dft_livbb) {
                    dellivbb(&lr1->liveunits, lu);
                    (*list)->next = lu;
                    lu->next = NULL;
                    *list = lu;
                } else {
                    resetbit(&lr1->reachingbbs, succ->graphnode->num);
                    setbitbb(&lr2->reachingbbs, succ->graphnode->num);
                }

                setbitbb(&lr2->livebbs, succ->graphnode->num);
                lr2->unk24 += shared;

                // marked interference lists are now shared
                for (intf = lr1->interfere; intf != NULL; intf = intf->next) {
                    if (intf->marked) {
                        intf->shared = true;
                        intf->marked = false;
                    }
                }
            } else {
                lr2->regsleft = oldunk21;
                lr2->forbidden[0] = oldforbidden[0];
                lr2->forbidden[1] = oldforbidden[1];

                for (intf = lr1->interfere; intf != NULL; intf = intf->next) {
                    intf->marked = false;
                }
            }
        }
    }
}

/*
00469280 globalcolor
*/
bool somepremember(struct GraphnodeList *pred, int reg, struct IChain *ichain, struct LiveRange *lr) {
    bool member = false;

    while (!member && pred != NULL) {
        if (pred->graphnode->regdata.unk44[reg - 1] == ichain) {
            member = true;
        }
        pred = pred->next;
    }
    return member;
}

/*
00469280 globalcolor
*/
bool somepostmember(struct GraphnodeList *succ, int reg, struct IChain *ichain, struct LiveRange *lr) {
    bool member = false;

    while (!member && succ != NULL) {
        if (succ->graphnode->regdata.unk44[reg - 1] == ichain &&
                !BITARR_GET(succ->graphnode->unkD0, reg - 1) &&
                (!BITARR_GET(succ->graphnode->unkDA, reg - 1) || bvectin(succ->graphnode->num, &lr->livebbs))) {
            member = true;
        }
        succ = succ->next;
    }
    return member;
}

/*
00469280 globalcolor
 */
bool allpreppout(struct GraphnodeList *pred, int reg, struct IChain *ichain, struct LiveRange *lr) {
    bool ppout = true;

    while (ppout && pred != NULL) {
        if (pred->graphnode->regdata.unk44[reg - 1] == ichain) {
            pred = pred->next;
        } else {
            if (docreatebb) {
                if (pred->graphnode->stat_tail->opc != Uijp && pred->graphnode->stat_tail->opc != Uxjp) {
                    pred = pred->next;
                } else {
                    ppout = false;
                }
            } else if (pred->graphnode->stat_tail->opc != Ufjp &&
                       pred->graphnode->stat_tail->opc != Uijp &&
                       pred->graphnode->stat_tail->opc != Utjp &&
                       pred->graphnode->stat_tail->opc != Uxjp) {
                pred = pred->next;
            } else {
                ppout = false;
            }
        }
    }
    return ppout;
}

/*
00469280 globalcolor
  quiet
 */
bool allsucppin(struct GraphnodeList *succ, int reg, struct IChain *ichain, struct LiveRange *lr) {
    bool ppin = true;

    while (ppin && succ != NULL) {
        if (succ->graphnode->regdata.unk44[reg - 1] == ichain &&
                 !BITARR_GET(succ->graphnode->unkD0, reg - 1) &&
                (!BITARR_GET(succ->graphnode->unkDA, reg - 1) || bvectin(succ->graphnode->num, &lr->livebbs))) {
            succ = succ->next;
        } else if (succ->graphnode->predecessors->next == NULL && !succ->graphnode->interprocedural_controlflow) {
            succ = succ->next;
        } else {
            ppin = false;
        }
    }
    return ppin;
}

/*
00467F04 split
00469280 globalcolor
*/
void updatelivran(struct LiveRange *lr) {
    struct LiveUnit *lu;
    struct LiveUnit *new_lu;
    bool found_store;
    int bb;

    if (lr->assigned_reg == -1) {
        return;
    }

    found_store = false;

    if (lr->hasstore) {
        lr->hasstore = false;

        for (lu = lr->liveunits; !found_store && lu != NULL; lu = lu->next) {
            if (lu->store_count != 0 || lu->firstisstr) {
                lr->hasstore = true;
                found_store = true;
            }
        }
    }

    for (lu = lr->liveunits; lu != NULL; lu = lu->next) {
        lu->liverange = lr;
        if (!lu->firstisstr && !lu->needreglod && !preallmember(lu->node->predecessors, lr)) {
            lu->needreglod = true;
        }
    }

    if (!bvectempty(&lr->reachingbbs)) {
        for (bb = 0; bb < curstaticno; bb++) {
            if (bvectin(bb, &lr->reachingbbs) && !preallmember(bbtab[bb]->predecessors, lr)) {
                new_lu = alloc_livbb();
                if (new_lu == NULL) {
                    return;
                }

                new_lu->node = bbtab[bb];
                new_lu->next = lr->liveunits;
                lr->liveunits = new_lu;
                new_lu->liverange = lr;
                new_lu->next_in_block = bbtab[bb]->liveunit;
                bbtab[bb]->liveunit = new_lu;
                new_lu->needreglod = true;
                resetbit(&lr->reachingbbs, bb);
            }
        }
    }

    if (lr->hasstore) {
        for (lu = lr->liveunits; lu != NULL; lu = lu->next) {
            if (!lu->deadout && !lu->needregsave && !allsucmember(lu->node->successors, lr)) {
                lu->needregsave = true;
            }
        }

        if (!bvectempty(&lr->reachingbbs)) {
            for (bb = 0; bb < curstaticno; bb++) {
                if (bvectin(bb, &lr->reachingbbs) && !allsucmember(bbtab[bb]->successors, lr)) {
                    new_lu = alloc_livbb();
                    if (new_lu == NULL) {
                        return;
                    }

                    new_lu->node = bbtab[bb];
                    new_lu->next = lr->liveunits;
                    lr->liveunits = new_lu;
                    new_lu->liverange = lr;
                    new_lu->next_in_block = bbtab[bb]->liveunit;
                    bbtab[bb]->liveunit = new_lu;
                    new_lu->needregsave = true;
                    resetbit(&lr->reachingbbs, bb);
                }
            }
        }
    }
}

/*
00467F04 split
00469280 globalcolor
*/
bool isconstrained(struct LiveRange *lr) {
    if (!leaf_for_ugen) {
        return true;
    } else {
        return lr->unk24 >= regsinclass[regclassof(lr->ichain) - 1];
    }
}

/*
004673B0 func_004673B0
00467514 contiguous
*/
static void func_004673B0(struct Graphnode *node, struct LiveRange *lr) {
    struct GraphnodeList *pred;
    struct GraphnodeList *succ;

    for (pred = node->predecessors; pred != NULL; pred = pred->next) {
        if (bvectin(pred->graphnode->num, &livrantemp) && bvectin(pred->graphnode->num, &lr->livebbs)) {
            resetbit(&livrantemp, pred->graphnode->num);
            func_004673B0(pred->graphnode, lr);
        }
    }

    for (succ = node->successors; succ != NULL; succ = succ->next) {
        if (bvectin(succ->graphnode->num, &livrantemp) && bvectin(succ->graphnode->num, &lr->livebbs)) {
            resetbit(&livrantemp, succ->graphnode->num);
            func_004673B0(succ->graphnode, lr);
        }
    }
}

/*
0046791C whyuncolored
00467C34 needsplit
00467F04 split
00469280 globalcolor
*/
bool contiguous(struct LiveRange *lr) {
    if (bvectcard(&lr->livebbs) < 2 || lr->liveunits == NULL) {
        return true;
    } else {
        bvectcopy(&livrantemp, &lr->livebbs);
        resetbit(&livrantemp, lr->liveunits->node->num);
        func_004673B0(lr->liveunits->node, lr);
        return bvectempty(&livrantemp);
    }

    return false;
}

/*
004676CC compute_save
0046791C whyuncolored
*/
bool canmoverlod(struct Graphnode *node, struct LiveRange *lr) {
    struct GraphnodeList *pred;
    bool phi_s1 = false;
    bool phi_s2 = true;

    for (pred = node->predecessors; pred != NULL; pred = pred->next) {
        if (bvectin(pred->graphnode->num, &lr->livebbs)) {
            phi_s1 = true;
        } else if (pred->graphnode->stat_tail->opc == Uijp || pred->graphnode->stat_tail->opc == Uxjp) {
            phi_s2 = false;
        }
    }

    return phi_s1 && phi_s2;
}

/*
00467C34 needsplit
00469280 globalcolor
*/
void compute_save(struct LiveRange *lr) {
    struct LiveUnit *lu;
    float totalsave = 0.0f;
    float netsave;

    lr->unk1C = 0;
    for (lu = lr->liveunits; lu != NULL; lu = lu->next) {
        netsave = (lu->load_count + lu->store_count) * lu->node->frequency;

        if (lu->needreglod && (lu->node->unk5 == notloopfirstbb || !canmoverlod(lu->node, lu->liverange))) {
            netsave -= movcostused * lu->node->frequency;
        }

        if (lr->hasstore && !lu->deadout && lu->needregsave && (lu->store_count != 0 || !lu->needreglod)) {
            netsave -= movcostused * lu->node->frequency;
        }
        totalsave += netsave;
        lr->unk1C++;
    }

    lr->unk1C += bvectcard(&lr->reachingbbs);
    if (lr->unk1C > 2) {
        lr->unk1C = ((lr->unk1C - 2) >> 2) + 2;
    }

    lr->adjsave = totalsave / lr->unk1C;
    if (lr->ichain->dtype == Qdt) {
        lr->adjsave *= 2.0f;
    }

    if (lr->adjsave > 0.0f) {
        lr->unk23 = 1;
    } else {
        lr->unk23 = 2;
    }
}

/*
00467C34 needsplit
00469280 globalcolor
*/
void whyuncolored(struct LiveRange *lr) {
    struct LiveUnit *lu;
    int i;
    int phi_s2;
    int phi_s5;
    float phi_f20;

    TRAP_IF(lr->unk23 == 0);
    phi_s5 = 0;
    phi_s2 = 0;
    phi_f20 = 0.0f;
    for (lu = lr->liveunits; lu != NULL; lu = lu->next) {
        phi_s5 += (lu->load_count + lu->store_count) * lu->node->frequency;
        if (lu->needreglod && (lu->node->unk5 == notloopfirstbb || !canmoverlod(lu->node, lu->liverange))) {
            phi_f20 = phi_f20 + lu->node->frequency;
        }

        if (lr->hasstore && !lu->deadout && lu->needregsave && (lu->store_count != 0 || !lu->needreglod)) {
            phi_f20 += lu->node->frequency;
        }
        phi_s2 += lu->node->frequency;
    }

    for (i = 0; i < curstaticno; i++) {
        if (bvectin(i, &lr->reachingbbs)) {
            phi_s2 += bbtab[i]->frequency;
        }
    }

    if (phi_s5 == 0) {
        num0occurlr += 1;
    } else if (phi_s2 * 1.5f < phi_f20) {
        numnotwellformedlr += 1;
    } else if (phi_s5 <= phi_f20) {
        /*
        if (!(phi_s5 <= phi_f20)) {
            MIPS2C_BREAK(0xA);
        }
         */
        numsparselr += 1;
    }
    contiglr += contiguous(lr);
}

/*
00469280 globalcolor
*/
void inc_allococ(struct LiveRange *lr) {
    struct LiveUnit *lu;

    for (lu = lr->liveunits; lu != NULL; lu = lu->next) {
        allococ += lu->load_count + lu->store_count;
    }
}

/*
00467F04 split
00468A14 cupcosts
00469280 globalcolor
*/
bool is_cup_affecting_regs(struct Graphnode *node) {
    if (node->stat_tail->opc == Ucia || node->stat_tail->opc == Uicuf) {
        return true;
    } else if (node->stat_tail->opc == Ucup) {
        return !IS_RETURN_ATTR(node->stat_tail->u.call.extrnal_flags);
    }
    return false;
}

/*
00469280 globalcolor
*/
bool needsplit(struct LiveRange *lr, int regclass) {
    struct LiveUnit *lu;
    struct InterfereList *intf;
    bool cantsplit;
    bool res;

    if (lr->regsleft != 0) {
        res = false;
    } else {
        cantsplit = true;
        if (lr->unk24 < 30 || ((lr->unk23 == 0 || lr->adjsave > 0.2f) && lr->unk24 < 800)) {
            for (lu = lr->liveunits; lu != NULL && cantsplit; lu = lu->next) {
                if ((lu->reg != 0 || SET_NEQ64(lu->node->regsused[regclass - 1], setregs[regclass - 1])) &&
                        lu->load_count + lu->store_count != 0) {
                    cantsplit = false;
                }
            }
        }

        res = true;
        if (cantsplit) {
            lr->assigned_reg = -1;
            resetbit(&colorcand, lr->bitpos);
            resetbit(&unconstrain, lr->bitpos);

            for (intf = lr->interfere; intf != NULL; intf = intf->next) {
                if (intf->liverange != NULL) {
                    intf->liverange->unk24--;
                }
            }

            if (dbugno == 6) {
                write_integer(list.c_file, lr->ichain->bitpos, 4, 10);
                write_char(list.c_file, ':', 1);
                write_integer(list.c_file, lr->bitpos, 5, 10);
                write_string(list.c_file, " impossible to color ", 21, 21);
                writeln(list.c_file);
            }

            if (dowhyuncolor) {
                if (lr->unk23 == 0) {
                    compute_save(lr);
                }

                if (lr->unk23 == 1) {
                    numcantcoloredlr += 1;
                    contiglr += contiguous(lr);
                } else {
                    whyuncolored(lr);
                }
            }
            res = false;
        }
    }
    return res;
}

/*
00469280 globalcolor
*/
void split(struct LiveRange **newlr, struct LiveRange **out, int regclass, bool arg3) {
    bool found;
    struct LiveUnit *lu;
    int i;
    struct InterfereList *intf;
    struct InterfereList *prev;
    struct InterfereList *next;
    struct InterfereList *intf2;

    // newlr: adds liveunits up to the point that the liverange still has available registers
    // out: contains the liveunits that didn't get added to newlr

    // out is allocated, but we copy the old liverange over to it, so it's confusing...
    *out = alloc_new(sizeof(struct LiveRange), &perm_heap);
    if (*out == NULL) {
        outofmem = true;
        return;
    }

#ifdef AVOID_UB
    (*out)->adjsave = 0;
    (*out)->unk24 = 0;
#endif
    (*out)->next = (*newlr)->next;
    (*newlr)->next = *out;
    (*out)->ichain = (*newlr)->ichain;
    (*out)->assigned_reg = 0;
    (*out)->hasstore = (*newlr)->hasstore;
    (*out)->regsleft = (*newlr)->regsleft;
    (*out)->bitpos = newbit((*newlr)->ichain, *out);
    (*out)->unk1C = -1;
    (*out)->livebbs = (*newlr)->livebbs;
    (*out)->reachingbbs = (*newlr)->reachingbbs;
    (*out)->liveunits = (*newlr)->liveunits;
    (*out)->forbidden[0] = (*newlr)->forbidden[0];
    (*out)->forbidden[1] = (*newlr)->forbidden[1];

    (*out)->unk23 = 0;
    (*newlr)->unk23 = 0;

    // 1. Find a live unit in the liverange where the first appearance is a definition
    found = false;
    lu = (*out)->liveunits;
    while (!found && lu != NULL) {
        if (lu->firstisstr &&
                // need a node with some registers available 
                (SET_NEQ64(lu->node->regsused[regclass - 1], setregs[regclass - 1]) || lu->reg != 0)) {
            found = true;
        } else {
            lu = lu->next;
        }
    }

    // If none of the definitions work, start from one of the uses
    if (!found) {
        lu = (*out)->liveunits;
        while (!found && lu != NULL) {
            if ((SET_NEQ64(lu->node->regsused[regclass - 1], setregs[regclass - 1]) || lu->reg != 0) &&
                    lu->load_count + lu->store_count != 0) {
                found = true;
            } else {
                lu = lu->next;
            }
        }
    }

    if (!found) {
        (*out)->interfere = (*newlr)->interfere;
        if (dowhyuncolor) {
            num0occurlr += 1;
            contiglr += contiguous(*out);
        }
        goto no_split;
    } else {
        dellivbb(&(*out)->liveunits, lu);
        resetbit(&(*out)->livebbs, lu->node->num);
        lu->next = NULL;
        (*newlr)->liveunits = lu;
        formbvlivran(&(*newlr)->reachingbbs);
        formbvlivran(&(*newlr)->livebbs);
        if ((*newlr)->livebbs.blocks == NULL) {
            return;
        }
        (*newlr)->unk1C = -1;
        setbitbb(&(*newlr)->livebbs, lu->node->num);
        (*newlr)->forbidden[1] = 0;
        (*newlr)->forbidden[0] = 0;

        // initialize forbidden to be the set of regs used in the basic block
        updateforbidden(lu->node, lu->reg, *newlr, regclass);
        updatecolorsleft(*newlr, regclass);

        (*out)->interfere = (*newlr)->interfere;
        (*newlr)->interfere = NULL;

        (*out)->unk24 = (*newlr)->unk24;
        (*newlr)->unk24 = findsharedintf((*out)->interfere, lu->node->num);

        // 2. BFS, expand the new liverange until it would have no registers available
        formingtab[0] = lu->node;
        formingmax = 0;
        for (forminginx = 0; forminginx <= formingmax; forminginx++) {
            if (gettolivbb((*newlr)->ichain, formingtab[forminginx])->deadout == false &&
                    (!arg3 || !is_cup_affecting_regs(formingtab[forminginx])) &&
                    formingtab[forminginx]->stat_tail->opc != Uijp) {
                addadjacents(*out, *newlr, &lu, regclass);
            }
        }
        numsplitlu += forminginx;
    }

    // if we took all the liveunits, then we're back to square one
    if ((*out)->liveunits == NULL && bvectcard(&(*out)->reachingbbs) == 0) {
        if (dowhyuncolor) {
            numcalloverheadlr += 1;
            contiglr += 1;
        }

no_split:
        if (!arg3) {
            dbgerror(0x273);
        }

        (*newlr)->assigned_reg = -1;
        (*out)->assigned_reg = -1;
        resetbit(&colorcand, (*newlr)->bitpos);
        resetbit(&colorcand, (*out)->bitpos);

        for (intf = (*out)->interfere; intf != NULL; intf = intf->next) {
            if (intf->liverange != NULL) {
                intf->liverange->unk24--;
            }
        }

        if (dbugno == 6) {
            write_integer(list.c_file, (*newlr)->ichain->bitpos, 4, 10);
            write_char(list.c_file, ':', 1);
            write_integer(list.c_file, (*newlr)->bitpos, 5, 10);
            write_string(list.c_file, " not colored, not splittable", 28, 28);
            writeln(list.c_file);
        }
        return;
    }

    if (dbugno == 6) {
        write_string(list.c_file, "live range", 10, 10);
        write_integer(list.c_file, (*newlr)->ichain->bitpos, 4, 10);
        write_char(list.c_file, ':', 1);
        write_integer(list.c_file, (*newlr)->bitpos, 5, 10);
        write_string(list.c_file, " split out", 10, 10);
        write_integer(list.c_file, (*out)->bitpos, 5, 10);
        writeln(list.c_file);
    }

    // add the shared interference nodes to the new liverange, and remove them from the old liverange if they no longer interfere
    intf = (*out)->interfere;
    while (intf != NULL) {
        next = intf->next;
        if (intf->shared) {
            intf->shared = false;
            if (intfering(intf->liverange, *out)) {
                insintf(&(*newlr)->interfere, intf->liverange);
                insintf(&intf->liverange->interfere, *out);
                intf->liverange->unk24 += 1;
            } else {
                if (intf == (*out)->interfere) {
                    (*out)->interfere = intf->next;
                } else {
                    prev = (*out)->interfere;
                    intf2 = (*out)->interfere->next;
                    while (intf2 != intf) {
                        prev = intf2;
                        intf2 = intf2->next;
                    }
                    prev->next = intf->next;
                }
                (*out)->unk24--;
                intf->next = (*newlr)->interfere;
                (*newlr)->interfere = intf;
            }
        } else if (intf->liverange != NULL) {
            intf2 = intf->liverange->interfere;
            while (*newlr != intf2->liverange) {
                intf2 = intf2->next;
            }
            intf2->liverange = *out;
        }

        intf = next;
    }

    if (outofmem) {
        return;
    }

    if (!isconstrained(*newlr)) {
        setbit(&unconstrain, (*newlr)->bitpos);
        resetbit(&colorcand, (*newlr)->bitpos);
    }

    updatelivran(*newlr);
    (*out)->forbidden[1] = 0;
    (*out)->forbidden[0] = 0;
    for (lu = (*out)->liveunits; lu != NULL; lu = lu->next) {
        updateforbidden(lu->node, lu->reg, *out, regclass);
    }

    if (!bvectempty(&(*out)->reachingbbs)) {
        for (i = 0; i < curstaticno; i++) {
            if (bvectin(i, &(*out)->reachingbbs)) {
                updateforbidden(bbtab[i], 0, *out, regclass);
            }
        }
    }

    updatecolorsleft(*out, regclass);

    if (!isconstrained(*out)) {
        setbit(&unconstrain, (*out)->bitpos);
    } else {
        setbit(&colorcand, (*out)->bitpos);
    }

    for (intf = (*newlr)->interfere; intf != NULL; intf = intf->next) {
        if (intf->liverange != NULL && bvectin0(intf->liverange->bitpos, &unconstrain) && isconstrained(intf->liverange)) {
            resetbit(&unconstrain, intf->liverange->bitpos);
            setbit(&colorcand, intf->liverange->bitpos);
        }
    }
    finalnumlr += 1;

}

/*
00469280 globalcolor
*/
float cupcosts(struct LiveRange *liverange, int reg, bool caller_saved) {
    struct Graphnode *node;
    struct Statement *stat;
    struct LiveUnit *lu; // s1
    float cost = 0.0f;
    int bb;

    for (lu = liverange->liveunits; lu != NULL; lu = lu->next) {
        if (!lu->needreglod) {
            if (lu->node->predecessors != NULL &&
                    is_cup_affecting_regs(lu->node->predecessors->graphnode) &&
                    bvectin(lu->node->predecessors->graphnode->num, &liverange->livebbs)) {
                stat = lu->node->predecessors->graphnode->stat_tail;
                if (stat->opc == Ucia) {
                    if (caller_saved && in_reg_masks(reg, stat->u.cia.unk20, stat->u.cia.len)) {
                        cost += movcostused * lu->node->frequency;
                    }
                } else if ((caller_saved || stat->u.call.proc->o3opt) &&
                        (!IS_TEMP_REGISTERS_INTACT_ATTR(stat->u.call.extrnal_flags) ||
                            stat->opc != Ucup || reg == 13) &&
                        (!stat->u.call.proc->o3opt ||
                          stat->u.call.proc->regstaken_parregs->regstaken[reg - 1])) {
                    cost += movcostused * lu->node->frequency;
                }
            }
        }

        if ((!liverange->hasstore || lu->deadout || !lu->needregsave || (lu->store_count == 0 && lu->needreglod)) &&
                is_cup_affecting_regs(lu->node)) {
            if (lu->node->successors != NULL && bvectin(lu->node->successors->graphnode->num, &liverange->livebbs)) {
                stat = lu->node->stat_tail;
                if (stat->opc == Ucia) {
                    if (caller_saved && in_reg_masks(reg, stat->u.cia.unk20, stat->u.cia.len)) {
                        cost += movcostused * lu->node->frequency;
                    }
                } else if ((caller_saved || stat->u.call.proc->o3opt) &&
                        (!IS_TEMP_REGISTERS_INTACT_ATTR(stat->u.call.extrnal_flags) || stat->opc != Ucup || reg == 13) &&
                        (!stat->u.call.proc->o3opt ||
                         stat->u.call.proc->regstaken_parregs->regstaken[reg - 1])) {
                    cost += movcostused * lu->node->frequency;
                }
            }
        }

        if (lu->reg != 0 && lu->reg != 1) {
            if (SET64_IN(regscantpass, reg)) {
                return 1.0e20f;
            }
        }

        if (lu->node == graphhead) {
            if (SET64_IN(regscantpass, reg) &&
                    liverange->ichain->type == isvar &&
                    liverange->ichain->isvar_issvar.location.memtype == Pmt &&
                    liverange->ichain->isvar_issvar.location.blockno == curblk) {
                return 1.0e20f;
            }
        }

        if (lang == LANG_ADA && lu->node->successors == NULL) {
            if (SET64_IN(regscantpass, reg) &&
                    liverange->ichain->type == isvar &&
                    liverange->ichain->isvar_issvar.location.memtype == Pmt &&
                    liverange->ichain->isvar_issvar.location.blockno == curblk &&
                    lu->needregsave) {
                return 1.0e20f;
            }
        }

        if (lu->reg != 0 && lu->reg != reg) {
            cost += (movcostused * lu->node->frequency) / 10.0f;
        }
    }

    if (!bvectempty(&liverange->reachingbbs)) {
        for (bb = 0; bb < curstaticno; bb++) {
            if (bvectin(bb, &liverange->reachingbbs)) {
                node = bbtab[bb];
                if (node->predecessors != NULL) {
                    stat = node->predecessors->graphnode->stat_tail;
                    if ((stat->opc == Ucia || stat->opc == Ucup || stat->opc == Uicuf) &&
                            bvectin(node->predecessors->graphnode->num, &liverange->livebbs)) {
                        if (stat->opc == Ucia) {
                            if (caller_saved && in_reg_masks(reg, stat->u.cia.unk20, stat->u.cia.len)) {
                                cost += movcostused * node->frequency;
                            }
                        } else if ((caller_saved || stat->u.call.proc->o3opt) &&
                                (!IS_TEMP_REGISTERS_INTACT_ATTR(stat->u.call.extrnal_flags) || stat->opc != Ucup || reg == 13) &&
                                (!stat->u.call.proc->o3opt || stat->u.call.proc->regstaken_parregs->regstaken[reg - 1])) {
                            cost += movcostused * node->frequency;
                        }
                    }
                }
                if (bb == graphhead->num) {
                    if (SET64_IN(regscantpass, reg) &&
                            liverange->ichain->type == isvar &&
                            liverange->ichain->isvar_issvar.location.memtype == Pmt &&
                            liverange->ichain->isvar_issvar.location.blockno == curblk) {
                        return 1.0e20f;
                    }
                }
            }
        }
    }

    return cost;
}

/*
00469280 globalcolor
*/
void put_in_fallthru_bb(struct Graphnode *node, int reg, struct IChain *ichain, bool flag) {
    struct JumpFallthroughBB *newbb;

    newbb = alloc_new(sizeof (struct JumpFallthroughBB), &perm_heap);
    newbb->reg = reg;
    newbb->ichain = ichain;
    newbb->unk1 = flag;
    newbb->next = node->fallthrough_bbs;
    node->fallthrough_bbs = newbb;
}

/*
00469280 globalcolor
*/
void put_in_jump_bb(struct Graphnode *node, int reg, struct IChain *ichain, bool flag) {
    struct JumpFallthroughBB *newbb;

    newbb = alloc_new(sizeof (struct JumpFallthroughBB), &perm_heap);
    newbb->reg = reg;
    newbb->ichain = ichain;
    newbb->unk1 = flag;
    newbb->next = node->jump_bbs;
    node->jump_bbs = newbb;
}

/*
00456A2C oneproc
*/
void globalcolor(void) {
    struct LiveRange *splitlr;   // sp118
    struct LiveRange *liverange; // sp114, s5
    int i;                       // sp110
    int candidate_bit = -1;      // sp10C
    unsigned int chosen_reg;     // spDC
    long long available_regs;    // spD8
    struct Proc *prev_call;      // spC8
    struct Proc *next_call;      // spC4
    long long spB8;
    unsigned int regclass;
    unsigned int reg;
    int bb;
    struct Graphnode *node;
    struct RegisterNode *newRegNode;
    struct LiveUnit *lu;
    struct InterfereList *intf;
    struct GraphnodeList *pred;
    struct GraphnodeList *succ;
    float firstUseCost; // first use cost
    float phi_f22;
    float phi_f20;
    float registerCost;
    bool chosen;
    bool phi_s1;
    bool pred_is_call;
    bool not_call;

    numofsplits = 0;
    if (!usefeedback || !curproc->feedback_data) {
        firstUseCost = movcostused * curstaticno * 0.25f;
        if (firstUseCost < 4.0f) {
            firstUseCost = 4.0f;
        }
        if (firstUseCost > 60.0f) {
            firstUseCost = 60.0f;
        }
    } else {
        firstUseCost = movcostused * (graphhead->frequency * 2);
    }

    //spB8 := regscantpass - [23] + [firstparmreg[1]..firstparmreg[1]+3] + [firstparmreg[2]..firstparmreg[2]+1];
    spB8 = SET64_MINUS(regscantpass, ee_ra) | GENMASK(firstparmreg[0], firstparmreg[0]+4) | GENMASK(firstparmreg[1], firstparmreg[1]+2);

    unconstrain.num_blocks = 0;
    unconstrain.blocks = NULL;
    checkbvlist(&unconstrain);

    for (i = 0; i < bitposcount; i++) {
        if (bvectin(i, &iscolored12)) {
            liverange = bittab[i].liverange;
            liverange->forbidden[0] = 0;
            liverange->forbidden[1] = 0;

            regclass = regclassof(bittab[i].ichain);
            for (lu = liverange->liveunits; lu != NULL; lu = lu->next) {
                updateforbidden(lu->node, lu->reg, liverange, regclass);
            }

            if (!bvectempty(&liverange->reachingbbs)) {
                for (bb = 0; bb < curstaticno; bb++) {
                    if (bvectin(bb, &liverange->reachingbbs)) {
                        updateforbidden(bbtab[bb], 0, liverange, regclass);
                    }
                }
            }
            updatecolorsleft(liverange, regclass);

            if (!isconstrained(liverange)) {
                setbit(&unconstrain, i);
            }
        }
    }

    colorcand.num_blocks = 0;
    colorcand.blocks = NULL;
    checkbvlist(&colorcand);

    oldbitposcount = bitposcount;

    for (regclass = 1; regclass < 3; regclass++) {
        if (regclass != 1) {
            checkbvlist(&iscolored[regclass - 1]);
            checkbvlist(&unconstrain);
            checkbvlist(&colorcand);
            if (outofmem) {
                return;
            }
        }


        bvectcopy(&colorcand, &iscolored[regclass - 1]);
        bvectminus(&colorcand, &unconstrain);
        while (!bvectempty(&colorcand)) {
            candidate_bit = -1;
            phi_f20 = -3333.0f;

            for (i = 0; i < bitposcount; i++) {
                if (bvectin0(i, &colorcand)) {
                    liverange = bittab[i].liverange;
                    if (liverange->unk23 == 0) {
                        compute_save(liverange);
                    }

                    if (liverange->unk23 == 2) {
                        if (dowhyuncolor) {
                            whyuncolored(liverange);
                        }

                        liverange->assigned_reg = -1;
                        resetbit(&colorcand, i);
                        for (intf = liverange->interfere; intf != NULL; intf = intf->next) {
                            if (intf->liverange != NULL) {
                                intf->liverange->unk24--;
                            }
                        }

                        if (dbugno == 6) {
                            write_integer(list.c_file, liverange->ichain->bitpos, 4, 10);
                            write_char(list.c_file, ':', 1);
                            write_integer(list.c_file, i, 5, 10);
                            // does "-ve" mean negative? (lol)
                            write_string(list.c_file, " not colored (-ve save)", 23, 23);
                            writeln(list.c_file);
                        }
                    }

                    if (liverange->adjsave > phi_f20 && liverange->unk23 == 1) {
                        candidate_bit = i;
                        phi_f20 = liverange->adjsave;
                    }
                }
            }

            if (candidate_bit == -1) {
                break;
            }

            liverange = bittab[candidate_bit].liverange;
            chosen_reg = -1;

            phi_f20 = 1.0e20f;
            if (!o3opt) {
                phi_f22 = cupcosts(liverange, firsterreg[regclass - 1] + 1, true);
            }

            for (reg = firsterreg[regclass - 1]; reg <= lasterreg[regclass - 1]; reg++) {
                if (!SET_IN(liverange->forbidden, reg)) {
                    if (!o3opt && !SET64_IN(spB8, reg)) {
                        registerCost = phi_f22;
                    } else {
                        registerCost = cupcosts(liverange, reg, true);
                    }

                    if (registerCost < phi_f20) {
                        chosen_reg = reg;
                        phi_f20 = registerCost;

                        SET64_INIT(available_regs, reg);
                    } else if (registerCost == phi_f20) {
                        // floating point equality...
                        SET64_ADD(available_regs, reg);
                    }
                }
            }

            if (!o3opt) {
                phi_f22 = cupcosts(liverange, firsteereg[regclass - 1], false);
            }

            for (reg = firsteereg[regclass - 1]; reg <= lasteereg[regclass - 1]; reg++) {
                if (!SET_IN(liverange->forbidden, reg)) {
                    if (!o3opt && !SET64_IN(spB8, reg)) {
                        registerCost = phi_f22;
                    } else {
                        registerCost = cupcosts(liverange, reg, false);
                    }

                    if (!allcallersave || SET64_IN(regscantpass, reg) || !propagate_ee_saves) {
                        if (!SET64_IN(usedeeregs[regclass - 1], reg)) {
                            // extra cost for saving and restoring the register at the start and end of the function
                            registerCost += firstUseCost;
                        }
                    }

                    if (registerCost < phi_f20) {
                        chosen_reg = reg;
                        phi_f20 = registerCost;
                        SET64_INIT(available_regs, reg);
                    } else if (registerCost == phi_f20) {
                        SET64_ADD(available_regs, reg);
                    }
                }
            }

            //! this comparison makes -mfpmath=sse necessary, because otherwise the compiler uses double comparisons
            if (liverange->adjsave * liverange->unk1C <= phi_f20) {
                split(&liverange, &splitlr, regclass, true);

                if (outofmem) {
                    return;
                }

                if (splitlr->assigned_reg != -1) {
                    updatelivran(splitlr);
                }
            } else {
                if (dowhyuncolor) {
                    numcoloredlr += 1;
                    inc_allococ(liverange);
                    contiglr += contiguous(liverange);
                }

                // more than one register can be assigned
                if (allcallersave && !SET64_EMPTY(SET64_MINUS(available_regs, chosen_reg))) {
                    chosen = false;
                    for (reg = firsterreg[regclass - 1]; !chosen && reg <= lasteereg[regclass - 1]; reg++) {
                        if (SET64_IN(available_regs, reg) && curproc->regstaken_parregs->regstaken[reg - 1]) {
                            chosen = true;
                            break;
                        }
                    }

                    if (chosen) {
                        chosen_reg = reg;
                    }
                }

                liverange->assigned_reg = chosen_reg;
                if (!allcallersave) {
                    if (chosen_reg < firsteereg[regclass - 1]) {
                        if (highesterreg[regclass - 1] < chosen_reg) {
                            highesterreg[regclass - 1] = chosen_reg;
                        }
                    } else {
                        if (highesteereg[regclass - 1] < chosen_reg) {
                            highesteereg[regclass - 1] = chosen_reg;
                        }
                        SET64_ADD(usedeeregs[regclass - 1], chosen_reg);
                    }
                } else if (chosen_reg == regsinclass1 || (someusefp && chosen_reg + 1 == regsinclass1)) {
                    SET64_ADD(usedeeregs[0], chosen_reg);
                } else {
                    curproc->regstaken_parregs->regstaken[chosen_reg - 1] = true;
                }

                resetbit(&colorcand, candidate_bit);
                if (dbugno == 6) {
                    write_integer(list.c_file, liverange->ichain->bitpos, 4, 10);
                    write_char(list.c_file, ':', 1);
                    write_integer(list.c_file, liverange->bitpos, 5, 10);
                    write_string(list.c_file, " assigned (constrained)", 23, 23);
                    write_integer(list.c_file, chosen_reg, 4, 10);
                    writeln(list.c_file);
                }

                for (bb = 0; bb < curstaticno; bb++) {
                    if (bvectin(bb, &bittab[candidate_bit].liverange->livebbs)) {
                        if (bbtab[bb]->regdata.unk44[chosen_reg - 1] != NULL) {
                            dbgerror(0x2CE);
                        }

                        bbtab[bb]->regdata.unk44[chosen_reg - 1] = bittab[candidate_bit].liverange->ichain;

                        SET_ADD(bbtab[bb]->regsused[regclass - 1], chosen_reg);
                    }
                }

                for (intf = liverange->interfere; intf != NULL; intf = intf->next) {
                    if (intf->liverange != NULL && intf->liverange->assigned_reg == 0 && !SET_IN(intf->liverange->forbidden, chosen_reg)) {
                        SET_ADD(intf->liverange->forbidden, chosen_reg);

                        intf->liverange->regsleft--;
                        liverange = intf->liverange;
                        if (needsplit(liverange, regclass)) {
                            do {
                                split(&liverange, &splitlr, regclass, false);
                                if (outofmem) {
                                    return;
                                }

                                liverange = splitlr;
                            } while (needsplit(liverange, regclass));

                            updatelivran(liverange);
                        }
                    }

                }
            }
        }
    }

    // color unconstrained live ranges
    for (i = 0; i < bitposcount; i++) {
        if (bvectin0(i, &unconstrain)) {
            liverange = bittab[i].liverange;
            chosen_reg = -1;
            regclass = regclassof(liverange->ichain);
            phi_f20 = 1.0e20f;

            if (liverange->assigned_reg == -1) {
                dbgerror(0x1C16);
            }

            if (liverange->unk23 == 0) {
                compute_save(liverange);
            }

            if (!o3opt) {
                phi_f22 = cupcosts(liverange, firsterreg[regclass - 1] + 1, true);
            }

            for (reg = firsterreg[regclass - 1]; reg <= lasterreg[regclass - 1]; reg++) {
                if (!SET_IN(liverange->forbidden, reg)) {
                    if (!o3opt && !SET64_IN(spB8, reg)) {
                        registerCost = phi_f22;
                    } else {
                        registerCost = cupcosts(liverange, reg, true);
                    }
                    if (registerCost < phi_f20) {
                        chosen_reg = reg;
                        phi_f20 = registerCost;
                        SET64_INIT(available_regs, reg);
                    } else if (registerCost == phi_f20) {
                        SET64_ADD(available_regs, reg);
                    }
                }
            }

            if (!o3opt) {
                phi_f22 = cupcosts(liverange, firsteereg[regclass - 1], false);
            }

            for (reg = firsteereg[regclass - 1]; reg <= lasteereg[regclass - 1]; reg++) {
                if (!SET_IN(liverange->forbidden, reg)) {
                    if (!o3opt && !SET64_IN(spB8, reg)) {
                        registerCost = phi_f22;
                    } else {
                        registerCost = cupcosts(liverange, reg, false);
                    }

                    if (!allcallersave || SET64_IN(regscantpass, reg) || !propagate_ee_saves) {
                        if (!SET64_IN(usedeeregs[regclass - 1], reg)) {
                            registerCost = registerCost + firstUseCost;
                        }
                    }

                    if (registerCost < phi_f20) {
                        SET64_INIT(available_regs, reg);
                        phi_f20 = registerCost;
                        chosen_reg = reg;
                    } else if (registerCost == phi_f20) {
                        SET64_ADD(available_regs, reg);
                    }
                }
            }

            if (liverange->adjsave * liverange->unk1C > phi_f20 && liverange->unk23 == 1) {
                if (dowhyuncolor) {
                    numcoloredlr += 1;
                    inc_allococ(liverange);
                    contiglr += contiguous(liverange);
                }

                if (allcallersave && !SET64_EMPTY(SET64_MINUS(available_regs, chosen_reg))) {
                    chosen = false;
                    for (reg = firsterreg[regclass - 1]; !chosen && reg <= lasteereg[regclass - 1]; reg++) {
                        if (SET64_IN(available_regs, reg) && curproc->regstaken_parregs->regstaken[reg - 1]) {
                            chosen = true;
                            break;
                        }
                    }

                    if (chosen) {
                        chosen_reg = reg;
                    }
                }

                liverange->assigned_reg = chosen_reg;
                if (!allcallersave) {
                    if (chosen_reg < firsteereg[regclass - 1]) {
                        if (highesterreg[regclass - 1] < chosen_reg) {
                            highesterreg[regclass - 1] = chosen_reg;
                        }
                    } else {
                        if (highesteereg[regclass - 1] < chosen_reg) {
                            highesteereg[regclass - 1] = chosen_reg;
                        }
                        SET64_ADD(usedeeregs[regclass - 1], chosen_reg);
                    }
                } else {
                    if (chosen_reg == regsinclass1 || (someusefp && chosen_reg + 1 == regsinclass1)) {
                        SET64_ADD(usedeeregs[0], chosen_reg);
                    } else {
                        curproc->regstaken_parregs->regstaken[chosen_reg - 1] = true;
                    }
                }

                resetbit(&colorcand, candidate_bit);
                if (update_sym_file) {
                    if (liverange->ichain->type == isvar && liverange->ichain->isvar_issvar.location.blockno == curblk &&
                            liverange->ichain->bitpos == liverange->bitpos && liverange->next == NULL) {
                        local_in_reg(curblk, liverange->ichain->isvar_issvar.location.addr, coloroffset(chosen_reg) >> 2);
                    }
                }

                if (dbugno == 6) {
                    write_integer(list.c_file, liverange->ichain->bitpos, 4, 10);
                    write_char(list.c_file, ':', 1);
                    write_integer(list.c_file, liverange->bitpos, 5, 10);
                    write_string(list.c_file, " assigned (unconstrained)", 25, 25);
                    write_integer(list.c_file, chosen_reg, 4, 10);
                    writeln(list.c_file);
                }

                for (intf = liverange->interfere; intf != NULL; intf = intf->next) {
                    if (intf->liverange != NULL && intf->liverange->assigned_reg == 0 && !SET_IN(intf->liverange->forbidden, chosen_reg)) {
                        SET_ADD(intf->liverange->forbidden, chosen_reg);
                        intf->liverange->regsleft--;
                    }
                }

                for (bb = 0; bb < curstaticno; bb++) {
                    if (bvectin(bb, &liverange->livebbs)) {
                        if (bbtab[bb]->regdata.unk44[chosen_reg - 1] != NULL) {
                            dbgerror(0x1C0E);
                        }

                        bbtab[bb]->regdata.unk44[chosen_reg - 1] = liverange->ichain;

                        SET_ADD(bbtab[bb]->regsused[regclass - 1], chosen_reg);
                    }
                }
            } else {
                if (dowhyuncolor) {
                    if (liverange->unk23 == 1) {
                        numcalloverheadlr += 1;
                        contiglr += contiguous(liverange);
                    } else {
                        whyuncolored(liverange);
                    }
                }
            }
        }
    }

    for (node = graphhead; node != NULL; node = node->next) {
        pred_is_call = false;
        if (node->predecessors != NULL &&
                (node->predecessors->graphnode->stat_tail->opc == Ucia ||
                 node->predecessors->graphnode->stat_tail->opc == Ucup ||
                 node->predecessors->graphnode->stat_tail->opc == Uicuf)) {
            pred_is_call = true;
        }

        if (pred_is_call) {
            if (node->predecessors->graphnode->stat_tail->opc == Ucia) {
                prev_call = ciaprocs;
            } else {
                prev_call = node->predecessors->graphnode->stat_tail->u.call.proc;
            }
        }

        if (node->stat_tail->opc == Ucup || node->stat_tail->opc == Uicuf) {
            next_call = node->stat_tail->u.call.proc;
        } else if (node->stat_tail->opc == Ucia) {
            next_call = ciaprocs;
        }

        regclass = 1;
        for (reg = 1; reg <= 35; reg++) {
            if (node->regdata.unk44[reg - 1] != NULL) {
                phi_s1 = true;
                if (reg >= 24) {
                    regclass = 2;
                }

                lu = gettolivbb(node->regdata.unk44[reg - 1], node);
                if (lu == dft_livbb) {
                    liverange = bittab[node->regdata.unk44[reg - 1]->bitpos].liverange;
                    while (!bvectin(node->num, &liverange->reachingbbs)) {
                        liverange = liverange->next;
                    }
                } else {
                    liverange = lu->liverange;
                }

                if (lu->firstisstr) {
                    BITARR_SET(node->unkD0, reg - 1, false);
                } else {
                    BITARR_SET(node->unkD0, reg - 1, lu->needreglod);
                    if (pred_is_call) {
                        if (node->regdata.unk44[reg - 1] == node->predecessors->graphnode->regdata.unk44[reg - 1] &&
                                (prev_call->o3opt || reg < firsteereg[regclass - 1]) &&
                                (!IS_TEMP_REGISTERS_INTACT_ATTR(node->predecessors->graphnode->stat_tail->u.call.extrnal_flags) ||
                                 node->predecessors->graphnode->stat_tail->opc != Ucup || reg == er_ra)) {
                            if (prev_call == ciaprocs) {
                                if (in_reg_masks(reg, node->predecessors->graphnode->stat_tail->u.cia.unk20, node->predecessors->graphnode->stat_tail->u.cia.len)) {
                                    BITARR_SET(node->unkD0, reg - 1, true);
                                }
                            } else if (!prev_call->o3opt || prev_call->regstaken_parregs->regstaken[reg - 1]) {
                                BITARR_SET(node->unkD0, reg - 1, true);
                            }
                        }
                    }
                }

                BITARR_SET(node->unkD5, reg - 1, false);
                if (liverange->hasstore && !lu->deadout &&
                        (lu->needregsave ||
                         (is_cup_affecting_regs(node) &&
                          ((node->stat_tail->opc != Ucia &&
                            ((!next_call->o3opt && reg < firsteereg[regclass - 1]) ||
                              (next_call->o3opt && next_call->regstaken_parregs->regstaken[reg - 1])) &&
                            (!IS_TEMP_REGISTERS_INTACT_ATTR(node->stat_tail->u.call.extrnal_flags) ||
                             node->stat_tail->opc != Ucup || reg == er_ra)) ||
                           (node->stat_tail->opc == Ucia && reg < firsteereg[regclass - 1] &&
                            in_reg_masks(reg, node->stat_tail->u.cia.unk20, node->stat_tail->u.cia.len)))))) {
                    if (lu->store_count != 0 || lu->firstisstr || !BITARR_GET(node->unkD0, reg - 1)) {
                        BITARR_SET(node->unkD5, reg - 1, true);
                    } else {
                        phi_s1 = false;
                    }
                }

                BITARR_SET(node->unkDA, reg - 1, false);
                if (phi_s1 && BITARR_GET(node->unkD0, reg - 1) && !node->interprocedural_controlflow && dorlodrstropt) {
                    if (node->predecessors != NULL && node->predecessors->next != NULL) {
                        if (somepremember(node->predecessors, reg, node->regdata.unk44[reg - 1], liverange) &&
                                allpreppout(node->predecessors, reg, node->regdata.unk44[reg - 1], liverange)) {
                            for (pred = node->predecessors; pred != NULL; pred = pred->next) {
                                if (node->regdata.unk44[reg - 1] != pred->graphnode->regdata.unk44[reg - 1]) {
                                    if (pred->graphnode->stat_tail->opc != Ufjp && pred->graphnode->stat_tail->opc != Utjp) {
                                        newRegNode = alloc_new(sizeof(struct RegisterNode), &perm_heap);
                                        newRegNode->reg = reg;
                                        newRegNode->ichain = node->regdata.unk44[reg - 1];
                                        newRegNode->next = pred->graphnode->unkE4;
                                        pred->graphnode->unkE4 = newRegNode;
                                    } else {
                                        TRAP_IF(!docreatebb);
                                        if (node->blockno == 0 || node->blockno != pred->graphnode->stat_tail->u.jp.target_blockno) {
                                            put_in_fallthru_bb(pred->graphnode, reg, node->regdata.unk44[reg - 1], true);
                                        } else {
                                            put_in_jump_bb(pred->graphnode, reg, node->regdata.unk44[reg - 1], true);
                                        }
                                    }
                                }
                            }
                            BITARR_SET(node->unkD0, reg - 1, false);
                            BITARR_SET(node->unkDA, reg - 1, true);
                        }
                    }
                }
            } else {
                BITARR_SET(node->unkD0, reg - 1, false);
                BITARR_SET(node->unkD5, reg - 1, false);
                BITARR_SET(node->unkDA, reg - 1, false);
            }
        }
    }

    if (dorlodrstropt) {
        for (node = graphhead; node != NULL; node = node->next) {
            for (reg = 1; reg <= 35; reg++) {
                if (node->regdata.unk44[reg - 1] != NULL) {
                    liverange = bittab[node->regdata.unk44[reg - 1]->bitpos].liverange;
                    while (!bvectin(node->num, &liverange->livebbs)) {
                        liverange = liverange->next;
                    }

                    not_call = false;
                    if (node->stat_tail->opc != Ucia && node->stat_tail->opc != Ucup && node->stat_tail->opc != Uicuf) {
                        not_call = true;
                    }

                    if (not_call && BITARR_GET(node->unkD5, reg - 1) && node->successors != NULL) {
                        if (somepostmember(node->successors, reg, node->regdata.unk44[reg - 1], liverange) &&
                                (docreatebb || allsucppin(node->successors, reg, node->regdata.unk44[reg - 1], liverange))) {

                            if (node->stat_tail->opc == Uijp || node->stat_tail->opc == Uxjp) {
                                continue;
                            }

                            for (succ = node->successors; succ != NULL; succ = succ->next) {
                                if ((succ->graphnode->regdata.unk44[reg - 1] != node->regdata.unk44[reg - 1] || BITARR_GET(succ->graphnode->unkD0, reg - 1)) ||
                                        (BITARR_GET(succ->graphnode->unkDA, reg - 1) && !bvectin(succ->graphnode->num, &liverange->livebbs))) {
                                    TRAP_IF(node->stat_tail->opc != Ufjp && node->stat_tail->opc != Utjp);
                                    if (succ->graphnode->blockno == 0 || node->stat_tail->u.jp.target_blockno != succ->graphnode->blockno) {
                                        if (docreatebb) {
                                            put_in_fallthru_bb(node, reg, node->regdata.unk44[reg - 1], false);
                                        } else {
                                            newRegNode = alloc_new(sizeof(struct RegisterNode), &perm_heap);
                                            newRegNode->reg = reg;
                                            newRegNode->ichain = node->regdata.unk44[reg - 1];
                                            newRegNode->next = succ->graphnode->unkE0;
                                            succ->graphnode->unkE0 = newRegNode;
                                        }
                                    } else if (succ->graphnode->predecessors->next != NULL || succ->graphnode->interprocedural_controlflow) {
                                        put_in_jump_bb(node, reg, node->regdata.unk44[reg - 1], false);
                                        TRAP_IF(!docreatebb);
                                    } else {
                                        newRegNode = alloc_new(sizeof(struct RegisterNode), &perm_heap);
                                        newRegNode->reg = reg;
                                        newRegNode->ichain = node->regdata.unk44[reg - 1];
                                        newRegNode->next = succ->graphnode->unkE0;
                                        succ->graphnode->unkE0 = newRegNode;
                                    }
                                }
                            }
                            BITARR_SET(node->unkD5, reg - 1, false);
                        }
                    }
                }
            }
        }
    }

    if (dbugno == 7) {
        printinterproc();
    }

    if (dbugno == 2 || dbugno == 3) {
        write_string(list.c_file, "@ iscolored 1", 13, 13);
        printbv(&iscolored[0]);
        write_string(list.c_file, "@ iscolored 2", 13, 13);
        printbv(&iscolored[1]);
        write_string(list.c_file, "@ colorcand", 11, 11);
        printbv(&colorcand);
        write_string(list.c_file, "@ unconstrain ", 14, 14);
        printbv(&unconstrain);
        write_string(list.c_file, "@ vareqv ", 9, 9);
        printbv(&vareqv);
        write_string(list.c_file, "@ asgneqv ", 10, 10);
        printbv(&asgneqv);
        write_string(list.c_file, "@ coloredparms ", 15, 15);
        printbv(&coloredparms);
    }
}
