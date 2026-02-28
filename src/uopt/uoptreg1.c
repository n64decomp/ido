#include <string.h>
#include "libp/libp.h"
#include "libu/libu.h"
#include "uoptdata.h"
#include "uoptions.h"
#include "uoptdbg.h"
#include "uoptutil.h"

static struct BitVector ever_altered;
static int passedcl;
static int outonly_parm;

/*
004638C0 regdataflow
*/
bool is_cup(struct Graphnode *node) {
    if (node->stat_tail->opc == Ucia || node->stat_tail->opc == Uicuf) {
        return true;
    } else if (node->stat_tail->opc == Ucup &&
            (!IS_NOSIDEEFFECT_ATTR(node->stat_tail->u.call.extrnal_flags) ||
             !IS_RETURN_ATTR(node->stat_tail->u.call.extrnal_flags))) {
        return true;
    } else {
        return false;
    }
}

/*
0045E45C func_0045E45C
0045E5C4 func_0045E5C4
0045FBB4 func_0045FBB4
00461084 func_00461084
0046123C func_0046123C
00461640 func_00461640
00461AAC makelivranges
*/
void formlivbb(struct IChain *ichain, struct Graphnode *node, struct LiveUnit **dest) {
    int argnum;
    int i;
    bool phi_t3;
    bool new_bb;

    if (bittab[ichain->bitpos].liverange == NULL) {
        setbit(&iscolored[regclassof(ichain) - 1], ichain->bitpos);

        if (ichain->type == isvar && ichain->isvar_issvar.location.memtype == Pmt && curblk == ichain->isvar_issvar.location.blockno) {
            argnum = ichain->isvar_issvar.location.addr / 4;
            phi_t3 = false;

            if (argnum > pdefmax || pdeftab[argnum].opc == Unop || pdeftab[argnum].dtype == Mdt) {
                phi_t3 = true;
            } else if (!allcallersave && argnum > MIN(pdefmax, 3)) { // argnum always <= pdefmax here
                phi_t3 = true;
            } else if (fitparmreg(ichain->isvar_issvar.location.addr, ichain->isvar_issvar.size, pdeftab[argnum].offset, pdeftab[argnum].size) &&
                    ((pdeftab[argnum].dtype != Idt && pdeftab[argnum].dtype != Kdt) || mips3_64data || (dwopcode && allcallersave))) {
                setbit(&coloredparms, ichain->bitpos);
                outonly_parm = lang == LANG_ADA && !pdeftab[argnum].inmode;
                setbitbb(&ever_altered, ichain->bitpos);
            } else {
                phi_t3 = true;
            }

            if (phi_t3 && !allcallersave) {
                if (argnum <= MIN(pdefmax, 3)) {
                    i = argnum;
                    while (pdeftab[i].opc == Unop) {
                        i--;
                    }
                    pdeftab[i].unk3 = true;
                }
            }
        } else if (ichain->type == isvar && ichain->isvar_issvar.location.memtype == Mmt && curblk == ichain->isvar_issvar.location.blockno && staticlinkloc == ichain->isvar_issvar.location.addr) { // static link, passed through $v0
            setbit(&coloredparms, ichain->bitpos);
            outonly_parm = false;
        }

        bittab[ichain->bitpos].liverange = alloc_new(sizeof(struct LiveRange), &perm_heap);
        if (bittab[ichain->bitpos].liverange == NULL) {
            outofmem = true;
            return;
        }
#ifdef AVOID_UB
        *bittab[ichain->bitpos].liverange = (struct LiveRange){0};
#endif

        bittab[ichain->bitpos].liverange->ichain = ichain;
        bittab[ichain->bitpos].liverange->liveunits = NULL;
        bittab[ichain->bitpos].liverange->bitpos = ichain->bitpos;
        formbvlivran(&bittab[ichain->bitpos].liverange->reachingbbs);
        formbvlivran(&bittab[ichain->bitpos].liverange->livebbs);
        new_bb = false;
        if (bittab[ichain->bitpos].liverange->livebbs.blocks == NULL) {
            return;
        }

        bittab[ichain->bitpos].liverange->unk1C = -1;
        bittab[ichain->bitpos].liverange->assigned_reg = 0;
        bittab[ichain->bitpos].liverange->numintf = 0;
        bittab[ichain->bitpos].liverange->unk23 = 0;
        bittab[ichain->bitpos].liverange->next = NULL;
        bittab[ichain->bitpos].liverange->liveunitsTail = NULL;
    } else {
        new_bb = bvectin(node->num, &bittab[ichain->bitpos].liverange->livebbs);
    }

    if (!new_bb) {
        numlu++;

        *dest = alloc_new(sizeof(struct LiveUnit), &perm_heap);
#ifdef AVOID_UB
        **dest = (struct LiveUnit) {0};
#endif
        if (*dest == NULL) {
            outofmem = true;
            return;
        }

        (*dest)->load_count = 0;
        (*dest)->store_count = 0;
        (*dest)->firstisstr = false;
        (*dest)->reg = uncolored;
        (*dest)->node = node;

        if (bittab[ichain->bitpos].liverange->liveunitsTail == NULL) {
            bittab[ichain->bitpos].liverange->liveunits = *dest;
        } else {
            bittab[ichain->bitpos].liverange->liveunitsTail->next = *dest;
        }
        bittab[ichain->bitpos].liverange->liveunitsTail = *dest;

        (*dest)->next = NULL;
        (*dest)->liverange = bittab[ichain->bitpos].liverange;

        (*dest)->next_in_block = node->liveunit;
        node->liveunit = *dest;
        setbitbb(&bittab[ichain->bitpos].liverange->livebbs, node->num);
        setbit(&node->bvs.stage2.appear, ichain->bitpos);

        (*dest)->needreglod = false;
        (*dest)->needregsave = false;
        (*dest)->deadout = false;
    } else {
        *dest = node->liveunit;
        while ((*dest)->liverange->ichain != ichain) {
            *dest = (*dest)->next_in_block;
        }
    }
}

/*
0045FBB4 func_0045FBB4
00461AAC makelivranges
00464BFC localcolor
*/
bool passedinreg(struct IChain *ichain, int intoffset) {
    if (ichain->isvar_issvar.location.memtype == Mmt) {
        return true;
    } else if (allcallersave) {
        return mips3_64data || (ichain->dtype != Idt && ichain->dtype != Kdt);
    } else if (regclassof(ichain) == 1) {
        return ichain->isvar_issvar.location.addr >= intoffset && (mips3_64data || (ichain->dtype != Idt && ichain->dtype != Kdt));
    } else {
        return ichain->isvar_issvar.location.addr < intoffset;
    }
}
/*
0045E0B8 varappear
0045E1F8 caninsertearly
*/
bool varappear(struct IChain *ichain, struct Expression *expr) {
    if (expr == NULL) {
        return false;
    }

    switch (expr->type) {
        case islda:
        case isconst:
        case isilda:
        case isrconst:
            return false;

        case isvar:
        case issvar:
            if (expr->data.isvar_issvar.copy == NULL || expr->data.isvar_issvar.copy == nocopy) {
                return expr->ichain == ichain;
            } else {
                return varappear(ichain, expr->data.isvar_issvar.copy);
            }

        case isop:
            return varappear(ichain, expr->data.isop.op1) ||
                (optab[expr->data.isop.opc].is_binary_op && varappear(ichain, expr->data.isop.op2));

        case dumped:
            return false;

        default:
            caseerror(1, 204, "uoptreg1.p", 10);
            return true;
    }
}

/*
# 00461AAC makelivranges
*/
bool caninsertearly(struct Expression *expr, struct Graphnode *node) {
    int i;
    int block;
    int bit;
    bool caninsert;

    caninsert = true;
    i = 0;
    block = 0;
    while (caninsert && i < firstconstbit) {
        if (BVBLOCKEMPTY(node->bvs.stage1.u.cm.insert, block)) {
            i += 0x80;
        } else {
            bit = 0;
            while (caninsert && i < firstconstbit && bit < 0x80) {
                if (BVINBLOCK(bit, block, node->bvs.stage1.u.cm.insert) && bvectin(i, &storeop)) {
                    switch (bittab[i].ichain->isop.opc) {
                        case Uistr:
                        case Uistv:
                        case Umov:
                        case Umovv:
                        case Uirst:
                        case Uirsv:
                            caninsert = false;
                            break;

                        case Uisst:
                        case Ustr:
                            if (varappear(bittab[i].ichain->isop.op1, expr)) {
                                caninsert = false;
                            }
                            break;

                        default:
                            break;
                    }
                }
                bit++;
                i++;
            }
        }
        block++;
    }
    return caninsert;
}

/*
0045E5C4 func_0045E5C4
0045FBB4 func_0045FBB4
*/
int sizeofsetexpr(struct IChain *ichain) {
    TRAP_IF(ichain->isop.opc != Uadj &&
            ichain->isop.opc != Udif &&
            ichain->isop.opc != Uint &&
            ichain->isop.opc != Umus &&
            ichain->isop.opc != Usgs &&
            ichain->isop.opc != Uuni);
    if (ichain->isop.opc == Uadj) {
        return ichain->isop.unk24_u16;
    } else {
        return ichain->isop.size;
    }
}

/*
0045E5C4 func_0045E5C4
*/
static void func_0045E45C(struct TrepImageThing *trep, bool is_equ_neq, struct Graphnode *node) {
    struct LiveUnit *sp3C;
    union Constant value;
    bool const_reg;

    // printf("called this! %s\n",  __func__);

    if (do_const_in_reg) {
        if (trep->OPC == Ulda) {
            const_reg = true;
        } else {
            value.intval = trep->CONSTVAL.swpart.Ival;
            if (is_equ_neq) {
                const_reg = constinreg(Jdt, is_equ_neq, value, 3);
            } else {
                const_reg = constinreg(Jdt, is_equ_neq, value, 1);
            }
        }

        if (const_reg) {
            trep->unk28->bitpos = newbit(trep->unk28, NULL);
            formlivbb(trep->unk28, node, &sp3C);
            if (outofmem) {
                return;
            }

            sp3C->load_count++;
            if (sp3C->load_count == 1) {
                setbit(&node->bvs.stage2.loclive, trep->unk28->bitpos);
            }
        }
    }
}

/*
0045E5C4 func_0045E5C4
00461640 func_00461640
00461AAC makelivranges
*/
static void func_0045E5C4(struct Expression *expr, unsigned char arg1, struct Graphnode *node, struct LiveUnit **lu) {
    struct LiveUnit *old_lu;
    int phi_s1;
    struct IChain *ichain;

    *lu = NULL;
    if (expr == NULL) {
        return;
    }

    switch (expr->type) {
        case isconst:
            // create a liveunit if the constant can't fit in an immediate operand of a mips instruction
            // e.g. if the constant could be directly used in an addi instruction, it doesn't need to be loaded into a register first
            // printf("called this! %s %d\n",  __func__, expr->data.isconst.number.intval);
            if (constinreg(expr->datatype, arg1, expr->data.isconst.number, arg1)) {
                if (expr->ichain->bitpos == 0xFFFF) {
                    expr->ichain->bitpos = newbit(expr->ichain, NULL);
                }

                formlivbb(expr->ichain, node, lu);
                if (outofmem) {
                    return;
                }

                (*lu)->load_count++;
                if ((*lu)->load_count == 1) {
                    setbit(&node->bvs.stage2.loclive, expr->ichain->bitpos);
                }
            }
            return;

        case islda:
            if (ldainreg(expr->data.islda_isilda.address.memtype, expr->data.islda_isilda.offset, arg1)) {
                if (expr->ichain->bitpos == 0xFFFF) {
                    expr->ichain->bitpos = newbit(expr->ichain, NULL);
                }

                formlivbb(expr->ichain, node, lu);
                if (outofmem) {
                    return;
                }

                (*lu)->load_count++;
                if ((*lu)->load_count == 1) {
                    setbit(&node->bvs.stage2.loclive, expr->ichain->bitpos);
                }
            }
            return;

        case isvar:
            if (expr->data.isvar_issvar.copy != NULL && expr->data.isvar_issvar.copy != nocopy) {
                func_0045E5C4(expr->data.isvar_issvar.copy, arg1, node, lu);
            }
            return;

        case isilda:
            if (expr->unk4 == 0) {
                if (!bvectin(expr->ichain->bitpos, &node->bvs.stage1.u.scm.region)) {
                    if (!bvectin(expr->ichain->bitpos, &node->bvs.stage1.u.cm.subinsert) ||
                            (expr->data.islda_isilda.outer_stack->type == issvar &&
                             expr->data.islda_isilda.outer_stack->killed &&
                             !bvectin(expr->data.islda_isilda.outer_stack->ichain->bitpos, &node->bvs.stage1.u.cm.cand))) {
                        expr->unk4 = 1;
                    } else {
                        expr->unk4 = 5;
                        setbit(&node->bvs.stage1.u.scm.region, expr->ichain->bitpos);
                        setbit(&coloreditems, expr->ichain->bitpos);
                    }
                } else if (bvectin(expr->ichain->bitpos, &node->bvs.stage1.u.cm.delete) &&
                        (expr->data.islda_isilda.outer_stack->type != issvar ||
                         expr->data.islda_isilda.outer_stack->initialVal ||
                         bvectin(expr->data.islda_isilda.outer_stack->ichain->bitpos, &node->bvs.stage1.u.cm.cand))) {
                    expr->unk4 = 2;
                    expr->visited = 7;
                } else if (expr->data.islda_isilda.outer_stack->type == issvar &&
                        expr->data.islda_isilda.outer_stack->killed &&
                        !bvectin(expr->data.islda_isilda.outer_stack->ichain->bitpos, &node->bvs.stage1.u.cm.cand)) {
                    expr->unk4 = 4;
                } else if (bvectin(expr->ichain->bitpos, &node->bvs.stage1.u.scm.source)) {
                    expr->unk4 = 3;
                } else if (bvectin(expr->ichain->bitpos, &node->bvs.stage1.u.cm.subinsert)) {
                    expr->unk4 = 5;
                } else {
                    expr->unk4 = 4;
                }
            }

            if (expr->visited == 7) {
                formlivbb(expr->ichain, node, lu);
                if (outofmem) {
                    return;
                }

                (*lu)->load_count++;
                if ((*lu)->load_count == 1 && (*lu)->store_count == 0) {
                    setbit(&node->bvs.stage2.loclive, expr->ichain->bitpos);
                }
            } else {
                func_0045E5C4(expr->data.islda_isilda.outer_stack, 3, node, lu);

                if ((expr->count > 1 && expr->unk4 != 2) || ((expr->unk4 == 3 || expr->unk4 == 5) && expr->visited != 7)) {
                    formlivbb(expr->ichain, node, lu);
                    if (outofmem) {
                        return;
                    }

                    (*lu)->store_count++;
                    setbit(&node->bvs.stage2.locdef, expr->ichain->bitpos);
                    if ((*lu)->load_count == 0) {
                        (*lu)->firstisstr = true;
                    }
                    (*lu)->load_count++;
                    expr->visited = 7;
                } else {
                    *lu = NULL;
                }
            }
            return;

        case issvar:
            if (expr->data.isvar_issvar.copy != NULL && expr->data.isvar_issvar.copy != nocopy) {
                func_0045E5C4(expr->data.isvar_issvar.copy, arg1, node, lu);
                return;
            }

            if (expr->unk4 == 0) {
                if (!bvectin(expr->ichain->bitpos, &node->bvs.stage1.u.scm.region)) {
                    if (!bvectin(expr->ichain->bitpos, &node->bvs.stage1.u.cm.subinsert) ||
                            (expr->killed &&
                             !bvectin(expr->ichain->bitpos, &node->bvs.stage1.u.cm.cand))) {
                        expr->unk4 = 1;
                    } else {
                        expr->unk4 = 5;
                        setbit(&node->bvs.stage1.u.scm.region, expr->ichain->bitpos);
                        setbit(&coloreditems, expr->ichain->bitpos);
                    }
                } else if (bvectin(expr->ichain->bitpos, &node->bvs.stage1.u.cm.delete) &&
                        (expr->initialVal || bvectin(expr->ichain->bitpos, &node->bvs.stage1.u.cm.cand))) {
                    expr->unk4 = 2;
                    expr->visited = 7;
                } else if (expr->killed && !bvectin(expr->ichain->bitpos, &node->bvs.stage1.u.cm.cand)) {
                    expr->unk4 = 4;
                } else if (bvectin(expr->ichain->bitpos, &node->bvs.stage1.u.scm.source)) {
                    expr->unk4 = 3;
                } else if (bvectin(expr->ichain->bitpos, &node->bvs.stage1.u.cm.subinsert)) {
                    expr->unk4 = 5;
                } else {
                    expr->unk4 = 4;
                }
            }

            if (expr->visited == 7) {
                if (((expr->datatype != Idt && expr->datatype != Kdt) || dwopcode)) {
                    formlivbb(expr->ichain, node, lu);
                    if (outofmem) {
                        return;
                    }

                    (*lu)->load_count++;
                    if ((*lu)->load_count == 1 && (*lu)->store_count == 0) {
                        setbit(&node->bvs.stage2.loclive, expr->ichain->bitpos);
                    }
                }
                return;
            }

            func_0045E5C4(expr->data.isvar_issvar.outer_stack, 3, node, lu);
            if (((expr->count > 1 && expr->unk4 != 2) || ((expr->unk4 == 3 || expr->unk4 == 5) && expr->visited != 7)) &&
                    ((expr->datatype != Idt && expr->datatype != Kdt) || dwopcode)) {
                formlivbb(expr->ichain, node, lu);
                if (outofmem) {
                    return;
                }

                (*lu)->store_count++;
                setbit(&node->bvs.stage2.locdef, expr->ichain->bitpos);

                if ((*lu)->load_count == 0) {
                    (*lu)->firstisstr = 1;
                }
                (*lu)->load_count++;
                expr->visited = 7;
            } else {
                *lu = NULL;
            }
            return;

        case isop:
            if (expr->unk4 == 0) {
                if (!bvectin(expr->ichain->bitpos, &node->bvs.stage1.u.scm.region)) {
                    if (!bvectin(expr->ichain->bitpos, &node->bvs.stage1.u.cm.subinsert) ||
                            (!expr->data.isop.available && !bvectin(expr->ichain->bitpos, &node->bvs.stage1.u.cm.cand))) {
                        // !region, !subinsert || (!av && !cand)
                        expr->unk4 = 1;
                        // killed, and not in region
                    } else {
                        // !region, subinsert && (av || cand)
                        expr->unk4 = 5;
                        // subinsert and can be moved forward
                        setbit(&node->bvs.stage1.u.scm.region, expr->ichain->bitpos);
                        setbit(&coloreditems, expr->ichain->bitpos);
                    }
                } else if (bvectin(expr->ichain->bitpos, &node->bvs.stage1.u.cm.delete) &&
                        (expr->data.isop.anticipated || bvectin(expr->ichain->bitpos, &node->bvs.stage1.u.cm.cand))) {
                    // region, delete, ant || cand
                    expr->unk4 = 2;
                    expr->visited = 7;
                } else if (!expr->data.isop.available && !bvectin(expr->ichain->bitpos, &node->bvs.stage1.u.cm.cand)) {
                    // region, !delete || !ant && !cand, !av && !cand
                    expr->unk4 = 4;
                } else if (bvectin(expr->ichain->bitpos, &node->bvs.stage1.u.scm.source)) {
                    // region, !delete || !ant && !cand, av || cand, source
                    expr->unk4 = 3;
                } else if (bvectin(expr->ichain->bitpos, &node->bvs.stage1.u.cm.subinsert)) {
                    // region, !delete || !ant && !cand, av || cand, !source, subinsert
                    expr->unk4 = 5;
                    // subinsert and can be moved forward
                } else {
                    // region, !delete || !ant && !cand, av || cand, !source, !subinsert
                    expr->unk4 = 4;
                }
            }

            // expr already visited once, extend liverange without recursing to children
            if (expr->visited == 7) {
                if (((expr->data.isop.datatype != Idt && expr->data.isop.datatype != Kdt) || dwopcode) &&
                        (expr->data.isop.datatype != Sdt || sizeofsetexpr(expr->ichain) <= int_reg_size)) {
                    formlivbb(expr->ichain, node, lu);
                    if (outofmem) {
                        return;
                    }

                    (*lu)->load_count++;
                    if ((*lu)->load_count == 1 && (*lu)->store_count == 0) {
                        setbit(&node->bvs.stage2.loclive, expr->ichain->bitpos);
                    }
                }
                return;
            }

            if (optab[expr->data.isop.opc].is_binary_op) {
                if ((expr->data.isop.opc == Uequ ||
                            expr->data.isop.opc == Ugeq ||
                            expr->data.isop.opc == Ugrt ||
                            expr->data.isop.opc == Uleq ||
                            expr->data.isop.opc == Ules ||
                            expr->data.isop.opc == Uneq) &&
                        (expr->data.isop.aux.unk38_trep->ichain2 != NULL || expr->data.isop.aux2.unk3C_trep->ichain2 != NULL)) {

                    if (expr->data.isop.aux.unk38_trep->ichain2 != NULL &&
                            ((expr->data.isop.aux.unk38_trep->ichain2->dtype != Idt && expr->data.isop.aux.unk38_trep->ichain2->dtype != Kdt) || dwopcode)) {
                        formlivbb(expr->data.isop.aux.unk38_trep->ichain2, node, lu);
                        if (outofmem) {
                            return;
                        }

                        (*lu)->load_count++;
                        if ((*lu)->load_count == 1 && (*lu)->store_count == 0) {
                            setbit(&node->bvs.stage2.loclive, expr->data.isop.aux.unk38_trep->ichain2->bitpos);
                        }

                        if (expr->data.isop.op2->type == isconst) {
                            func_0045E45C(expr->data.isop.aux.unk38_trep, expr->data.isop.opc == Uequ || expr->data.isop.opc == Uneq, node);
                        } else if ((expr->data.isop.aux2.unk3C_trep->ichain->dtype != Idt && expr->data.isop.aux2.unk3C_trep->ichain->dtype != Kdt) || dwopcode) {
                            formlivbb(expr->data.isop.aux2.unk3C_trep->ichain, node, lu);
                            if (outofmem) {
                                return;
                            }

                            (*lu)->load_count++;
                            TRAP_IF((*lu)->store_count != 0);
                            setbit(&node->bvs.stage2.loclive, expr->data.isop.aux2.unk3C_trep->ichain->bitpos);
                        }
                    }

                    if (expr->data.isop.aux2.unk3C_trep->ichain2 != NULL &&
                            ((expr->data.isop.aux2.unk3C_trep->ichain2->dtype != Idt && expr->data.isop.aux2.unk3C_trep->ichain2->dtype != Kdt) || dwopcode)) {
                        formlivbb(expr->data.isop.aux2.unk3C_trep->ichain2, node, lu);
                        if (outofmem) {
                            return;
                        }

                        (*lu)->load_count++;
                        if ((*lu)->load_count == 1 && (*lu)->store_count == 0) {
                            setbit(&node->bvs.stage2.loclive, expr->data.isop.aux2.unk3C_trep->ichain2->bitpos);
                        }

                        if (expr->data.isop.op1->type == isconst) {
                            func_0045E45C(expr->data.isop.aux2.unk3C_trep, expr->data.isop.opc == Uequ || expr->data.isop.opc == Uneq, node);
                        } else if ((expr->data.isop.aux.unk38_trep->ichain->dtype != Idt && expr->data.isop.aux.unk38_trep->ichain->dtype != Kdt) || dwopcode) {
                            formlivbb(expr->data.isop.aux.unk38_trep->ichain, node, lu);
                            if (outofmem) {
                                return;
                            }

                            (*lu)->load_count++;
                            TRAP_IF((*lu)->store_count != 0);
                            setbit(&node->bvs.stage2.loclive, expr->data.isop.aux.unk38_trep->ichain->bitpos);
                        }
                    }
                    *lu = NULL;
                } else {
                    switch (expr->data.isop.opc) {
                        case Uequ:
                        case Uneq:
                            phi_s1 = 3;
                            break;

                        case Uand:
                        case Uior:
                        case Uxor:
                            phi_s1 = 2;
                            break;

                        case Uadd:
                        case Ugeq:
                        case Ugrt:
                        case Uleq:
                        case Ules:
                        case Usub:
                            phi_s1 = 1;
                            break;

                        case Udiv:
                        case Umod:
                        case Umpy:
                        case Urem:
                            phi_s1 = 5;
                            break;

                        default:
                            phi_s1 = 0;
                            break;
                    }

                    if (expr->data.isop.opc == Usub) {
                        func_0045E5C4(expr->data.isop.op1, 3, node, lu);
                    } else {
                        func_0045E5C4(expr->data.isop.op1, phi_s1, node, lu);
                    }
                    func_0045E5C4(expr->data.isop.op2, phi_s1, node, lu);
                }
            } else {
                if (expr->data.isop.opc == Uilod ||
                        expr->data.isop.opc == Uirlv ||
                        expr->data.isop.opc == Uildv ||
                        expr->data.isop.opc == Uirld) {
                    func_0045E5C4(expr->data.isop.op1, 3, node, lu);
                } else {
                    func_0045E5C4(expr->data.isop.op1, 0, node, lu);
                }
            }

            if ((expr->count > 1 && expr->unk4 != 2) || ((expr->unk4 == 3 || expr->unk4 == 5) && expr->visited != 7)) {
                expr->visited = 7;
                if (expr->data.isop.datatype == Sdt && int_reg_size < sizeofsetexpr(expr->ichain)) {
                    *lu = NULL;
                    return;
                }

                if ((expr->data.isop.datatype != Idt && expr->data.isop.datatype != Kdt) || dwopcode) {
                    formlivbb(expr->ichain, node, lu);
                    if (outofmem) {
                        return;
                    }

                    (*lu)->store_count++;
                    setbit(&node->bvs.stage2.locdef, expr->ichain->bitpos);
                    if ((*lu)->load_count == 0) {
                        (*lu)->firstisstr = true;
                    }

                    (*lu)->load_count++;
                } else {
                    *lu = NULL;
                }

                if ((expr->data.isop.opc != Uadj &&
                            expr->data.isop.opc != Ucg2 &&
                            expr->data.isop.opc != Ucvt &&
                            expr->data.isop.opc != Urnd &&
                            expr->data.isop.opc != Utyp &&
                            expr->data.isop.opc != Uidx &&
                            expr->data.isop.opc != Uinn &&
                            expr->data.isop.opc != Uiequ &&
                            expr->data.isop.opc != Uineq &&
                            expr->data.isop.opc != Uigeq &&
                            expr->data.isop.opc != Uigrt &&
                            expr->data.isop.opc != Uileq &&
                            expr->data.isop.opc != Uiles &&
                            expr->data.isop.opc != Uilod &&
                            expr->data.isop.opc != Uildv &&
                            expr->data.isop.opc != Uirld &&
                            expr->data.isop.opc != Uirlv) &&
                        expr->ichain->isop.srcand != NULL && expr->ichain->isop.srcand != nota_candof) {

                    if (expr->ichain->isop.srcand->tempbit == 0) {
                        ichain = alloc_new(sizeof (struct IChain), &perm_heap);
                        *ichain = *expr->ichain->isop.srcand->target;

                        ichain->isop.opc = Ucg1;
                        expr->ichain->isop.srcand->tempbit = newbit(ichain, NULL);
                        ichain->bitpos = expr->ichain->isop.srcand->tempbit;

                        if ((tempdisp & 3) != 0) {
                            tempdisp = (tempdisp - (tempdisp & 3)) + 4;
                        }

                        ichain->isop.temploc = alloc_new(sizeof (struct Temploc), &perm_heap);
                        if (!stack_reversed) {
                            tempdisp += 4;
                            ichain->isop.temploc->disp = -tempdisp;
                        } else {
                            ichain->isop.temploc->disp = tempdisp;
                            tempdisp += 4;
                        }
                    } else {
                        ichain = bittab[expr->ichain->isop.srcand->tempbit].ichain;
                    }

                    if ((ichain->isop.datatype != Idt && ichain->isop.datatype != Kdt) || dwopcode) {
                        old_lu = *lu;
                        formlivbb(expr->ichain->isop.srcand->multiplier, node, lu);
                        if ((*lu)->load_count == 0 && (*lu)->store_count == 0) {
                            setbit(&node->bvs.stage2.loclive, expr->ichain->isop.srcand->multiplier->bitpos);
                        }

                        (*lu)->load_count++;
                        formlivbb(ichain, node, lu);
                        (*lu)->store_count++;

                        setbit(&node->bvs.stage2.locdef, expr->ichain->isop.srcand->tempbit);
                        if ((*lu)->load_count == 0) {
                            (*lu)->firstisstr = 1;
                        }

                        *lu = old_lu;
                    }
                }
            } else {
                *lu = NULL;
            }
            return;

        case isrconst:
            break;

        case dumped:
        default:
            caseerror(1, 335, "uoptreg1.p", 0xA);
            break;
    }
}

/*
0045FBB4 func_0045FBB4
00461AAC makelivranges
*/
static bool func_0045FBB4(struct IChain *ichain, int arg1, int arg2, struct Graphnode *node, struct LiveUnit **lu) {
    //void *sp54;
    bool const_value = false;
    bool sp52; // a3
    //bool sp51; // t0
    //bool sp4F; // t1
    unsigned short hash; //sp48
    struct IChain *cg1;
    struct Expression *expr;
    bool no_assignment_in_block;
    bool found;

    switch (ichain->type) {
        case isconst:
            const_value = true;
            break;

        case isrconst:
            const_value = true;
            break;

        case islda:
            const_value = true;
            break;

        case isvar:
            hash = isvarhash(ichain->isvar_issvar.location);
            expr = table[hash];
            no_assignment_in_block = true;
            found = false;

            // if arg2, search through the whole table, else use the first value
            if (arg2) {
                while (!found && expr != NULL) {
                    if (expr->type == isvar) {
                        if (addreq(expr->data.isvar_issvar.location, ichain->isvar_issvar.location) && expr->graphnode == node) {
                            found = !expr->killed;
                            if (expr->data.isvar_issvar.assignment != NULL) {
                                no_assignment_in_block = false;
                            }
                        }
                    }

                    if (!found) {
                        expr = expr->next;
                    }
                }

                if (!found && no_assignment_in_block && ichain->isvar_issvar.vreg) {
                    if (node->predecessors != NULL && node->predecessors->next == NULL) {
                        expr = table[hash];
                        while (!found && expr != NULL) {
                            if (expr->type == isvar) {
                                if (addreq(expr->data.isvar_issvar.location, ichain->isvar_issvar.location) && expr->graphnode == node->predecessors->graphnode) {
                                    found = !expr->killed;
                                }
                            }
                            if (!found) {
                                expr = expr->next;
                            }
                        }
                    }
                }
            }

            const_value = false;
            if (found && ichain->isvar_issvar.location.memtype != Rmt && expr->data.isvar_issvar.assignment != NULL) {
                if (expr->data.isvar_issvar.assigned_value != NULL &&
                        (expr->data.isvar_issvar.assigned_value->type == islda ||
                         (expr->data.isvar_issvar.assigned_value->type == isconst &&
                          (expr->data.isvar_issvar.assigned_value->datatype == Adt ||
                           expr->data.isvar_issvar.assigned_value->datatype == Hdt ||
                           expr->data.isvar_issvar.assigned_value->datatype == Jdt ||
                           expr->data.isvar_issvar.assigned_value->datatype == Ldt)))) {
                    const_value = true;
                }
            }

            sp52 = const_value;
            if (!const_value && !ichain->isvar_issvar.veqv && !bvectin(ichain->bitpos, &node->indiracc) &&
                    ((ichain->dtype != Idt && ichain->dtype != Kdt) || dwopcode || ichain->isvar_issvar.location.memtype == Rmt)) {
                formlivbb(ichain, node, lu);
                if (outofmem) {
                    break;
                }

                (*lu)->load_count++;
                if ((*lu)->load_count == 1 && (*lu)->store_count == 0) {
                    setbit(&node->bvs.stage2.loclive, ichain->bitpos);
                }

                if (graphhead == node && (*lu)->firstisstr == 0) {
                    if (bvectin0(ichain->bitpos, &coloredparms)) {
                        if (!outonly_parm) {
                            (*lu)->firstisstr = true;
                        }
                        if ((!allcallersave || ichain->isvar_issvar.location.memtype == Mmt) &&
                                (*lu)->reg == 0 && doprecolor) {
                            if (passedinreg(ichain, offsetpassedbyint)) {
                                passedcl = regclassof(ichain);
                                if (ichain->isvar_issvar.location.memtype == Mmt) {
                                    (*lu)->reg = 1;
                                } else {
                                    (*lu)->reg = firstparmreg[passedcl - 1] + ichain->isvar_issvar.location.addr / 4;
                                }

                                if (passedcl == 2 && ichain->isvar_issvar.location.addr) {
                                    (*lu)->reg = firstparmreg[passedcl - 1] + 1;
                                }

                                SET_ADD(node->regsused[passedcl - 1], (*lu)->reg);
                            }
                        }
                    }
                }
            }

            if (const_value) {
                setbit(&node->bvs.stage2.unk16C, ichain->bitpos);
            }
            break;

        case isilda:
        case issvar:
            if (!bvectin(ichain->bitpos, &node->bvs.stage1.u.cm.insert)) {
                if (arg1) {
                    noop = false;
                } else {
                    if ((ichain->dtype != Idt && ichain->dtype != Kdt) || dwopcode) {
                        formlivbb(ichain, node, lu);
                        if (outofmem) {
                            break;
                        }

                        (*lu)->load_count++;
                        if ((*lu)->load_count == 1 && (*lu)->store_count == 0) {
                            setbit(&node->bvs.stage2.loclive, ichain->bitpos);
                        }
                    }
                    const_value = false;
                }
                break;
            }

            if (!arg1 && bvectin(ichain->bitpos, &node->bvs.stage1.u.scm.source)) {
                if ((ichain->dtype != Idt && ichain->dtype != Kdt) || dwopcode) {
                    formlivbb(ichain, node, lu);
                    if (outofmem) {
                        break;
                    }

                    (*lu)->load_count++;
                        if ((*lu)->load_count == 1 && (*lu)->store_count == 0) {
                            setbit(&node->bvs.stage2.loclive, ichain->bitpos);
                        }
                }
                const_value = false;
                break;
            }

            if (ichain->type == isilda) {
                func_0045FBB4(ichain->islda_isilda.outer_stack_ichain, 0, arg2, node, lu);
            } else {
                func_0045FBB4(ichain->isvar_issvar.outer_stack_ichain, 0, arg2, node, lu);
            }

            const_value = false;
            if (arg1 && ((ichain->dtype != Idt && ichain->dtype != Kdt) || dwopcode)) {
                formlivbb(ichain, node, lu);
                if (outofmem) {
                    break;
                }

                (*lu)->store_count++;
                setbit(&node->bvs.stage2.locdef, ichain->bitpos);
                if ((*lu)->load_count == 0) {
                    (*lu)->firstisstr = true;
                }
            }
            break;

        case isop:
            if (ichain->isop.opc == Uisst || ichain->isop.opc == Ustr) {
                if (ichain->isop.opc == Uisst) {
                    func_0045FBB4(ichain->isop.op1->isvar_issvar.outer_stack_ichain, 0, arg2, node, lu);
                }
                func_0045FBB4(ichain->isop.op2, 0, arg2, node, lu);
                if (ichain->isop.op1->isvar_issvar.veqv == 0 && !bvectin(ichain->isop.op1->bitpos, &node->indiracc) &&
                        ((ichain->isop.op1->dtype != Idt && ichain->isop.op1->dtype != Kdt) || dwopcode)) {
                    formlivbb(ichain->isop.op1, node, lu);
                    if (outofmem) {
                        break;
                    }

                    (*lu)->store_count++;
                    setbit(&node->bvs.stage2.locdef, ichain->isop.op1->bitpos);
                    if ((*lu)->load_count == 0) {
                        (*lu)->firstisstr = true;
                    }

                    if (node->stat_tail->opc == Ucup ||
                            node->stat_tail->opc == Uicuf ||
                            node->stat_tail->opc == Ucia) {
                        (*lu)->reg = 0;
                    }
                }
                const_value = false;
                break;
            }

            if (ichain->isop.opc == Uistr ||
                    ichain->isop.opc == Uistv ||
                    ichain->isop.opc == Umov ||
                    ichain->isop.opc == Umovv ||
                    ichain->isop.opc == Utpeq ||
                    ichain->isop.opc == Utpge ||
                    ichain->isop.opc == Utpgt ||
                    ichain->isop.opc == Utple ||
                    ichain->isop.opc == Utplt ||
                    ichain->isop.opc == Utpne ||
                    ichain->isop.opc == Uirst ||
                    ichain->isop.opc == Uirsv) {
                func_0045FBB4(ichain->isop.op1, 0, arg2, node, lu);
                func_0045FBB4(ichain->isop.op2, 0, arg2, node, lu);
                const_value = false;
                break;
            }
            if (ichain->isop.opc == Uchkt) {
                func_0045FBB4(ichain->isop.op1, 0, arg2, node, lu);
                const_value = false;
                break;
            }
            if (!bvectin(ichain->bitpos, &node->bvs.stage1.u.cm.insert)) {
                if (arg1) {
                    noop = 0;
                    break;
                }
                const_value = false;

                if ((ichain->isop.datatype != Sdt || int_reg_size < sizeofsetexpr(ichain)) &&
                        ((ichain->isop.datatype != Idt && ichain->isop.datatype != Kdt) || dwopcode)) {
                    formlivbb(ichain, node, lu);
                    if (outofmem) {
                        break;
                    }

                    (*lu)->load_count++;
                    if ((*lu)->load_count == 1 && (*lu)->store_count == 0) {
                        setbit(&node->bvs.stage2.loclive, ichain->bitpos);
                    }
                }
                break;
            }

            if (!arg1 && bvectin(ichain->bitpos, &node->bvs.stage1.u.scm.source)) {
                if (!bvectin(ichain->bitpos, &node->bvs.stage2.unk16C)) {
                    if ((ichain->isop.datatype != Sdt || int_reg_size < sizeofsetexpr(ichain)) &&
                            ((ichain->isop.datatype != Idt && ichain->isop.datatype != Kdt) || dwopcode)) {
                        const_value = false;
                        formlivbb(ichain, node, lu);
                        if (outofmem) {
                            break;
                        }

                        (*lu)->load_count++;
                        if ((*lu)->load_count == 1 && (*lu)->store_count == 0) {
                            setbit(&node->bvs.stage2.loclive, ichain->bitpos);
                        }
                    }
                } else {
                    const_value = true;
                }
                break;
            }

            if (mipsflag != 3 && bvectin(ichain->bitpos, &old)) {
                setbit(&node->bvs.stage1.u.scm.source, ichain->bitpos);
                setbit(&node->bvs.stage1.u.scm.region, ichain->bitpos);
                setbit(&coloreditems, ichain->bitpos);
                if ((ichain->isop.datatype != Idt && ichain->isop.datatype != Kdt) || dwopcode) {
                    formlivbb(ichain, node, lu);
                    if (outofmem) {
                        break;
                    }

                    (*lu)->store_count++;
                    setbit(&node->bvs.stage2.locdef, ichain->bitpos);
                    if ((*lu)->load_count == 0) {
                        (*lu)->firstisstr = 1;
                    }
                    (*lu)->load_count++;
                }
                const_value = false;
                break;
            }

            sp52 = func_0045FBB4(ichain->isop.op1, 0, arg2, node, lu);
            if (optab[ichain->isop.opc].is_binary_op) {
                sp52 = func_0045FBB4(ichain->isop.op2, 0, arg2, node, lu) && sp52;
                if (sp52) {
                    switch (ichain->isop.opc) {
                        case Uadd:
                        case Uand:
                        case Udiv:
                        case Uequ:
                        case Ugeq:
                        case Ugrt:
                        case Uior:
                        case Uleq:
                        case Ules:
                        case Umax:
                        case Umin:
                        case Umod:
                        case Umpy:
                        case Uneq:
                        case Urem:
                        case Usub:
                            sp52 = ichain->dtype == Adt || ichain->dtype == Hdt || ichain->dtype == Jdt || ichain->dtype == Ldt;
                            break;

                        case Uixa:
                            sp52 = ichain->dtype == Adt || ichain->dtype == Hdt || ichain->dtype == Jdt || ichain->dtype == Ldt;
                            break;

                        default:
                            sp52 = false;
                            break;
                    }
                }
            } else {
                if (ichain->isop.opc == Ucg2) {
                    if (ichain->isop.op2 != NULL) {
                        func_0045FBB4(ichain->isop.op2, 0, arg2, node, lu);
                    }
                }

                if (sp52) {
                    switch (ichain->isop.opc) {
                        case Uabs:
                        case Uchkh:
                        case Uchkl:
                        case Ucvtl:
                        case Udec:
                        case Uinc:
                        case Uneg:
                        case Unot:
                        case Uodd:
                        case Usqr:
                            sp52 = ichain->dtype == Adt || ichain->dtype == Hdt || ichain->dtype == Jdt || ichain->dtype == Ldt;
                            break;

                        case Ucvt:
                            sp52 = (ichain->dtype == Adt || ichain->dtype == Hdt || ichain->dtype == Jdt || ichain->dtype == Ldt) &&
                                (ichain->isop.cvtfrom == Adt || ichain->isop.cvtfrom == Hdt || ichain->isop.cvtfrom == Jdt || ichain->isop.cvtfrom == Ldt) &&
                                (ichain->isop.op1->type != islda);
                            break;

                        default:
                            sp52 = false;
                    }
                }
            }

            const_value = sp52;
            if ((ichain->isop.datatype == Sdt) && int_reg_size < sizeofsetexpr(ichain)) {
                break;
            }
            if (!arg1 && !const_value && (ichain->isop.srcand == NULL || ichain->isop.srcand == nota_candof)) {
                setbit(&old, ichain->bitpos); // looks like a hack
            }
            if (const_value) {
                setbit(&node->bvs.stage2.unk16C, ichain->bitpos);
            }
            if (arg1) {
                if ((ichain->isop.datatype != Idt && ichain->isop.datatype != Kdt) || dwopcode) {
                    formlivbb(ichain, node, lu);
                    if (outofmem) {
                        break;
                    }

                    (*lu)->store_count++;
                    setbit(&node->bvs.stage2.locdef, ichain->bitpos);
                    if ((*lu)->load_count == 0) {
                        (*lu)->firstisstr = 1;
                    }
                }

                if (ichain->isop.opc != Uadj &&
                        ichain->isop.opc != Ucg2 &&
                        ichain->isop.opc != Ucvt &&
                        ichain->isop.opc != Uiequ &&
                        ichain->isop.opc != Uigeq &&
                        ichain->isop.opc != Uigrt &&
                        ichain->isop.opc != Uildv &&
                        ichain->isop.opc != Uileq &&
                        ichain->isop.opc != Uiles &&
                        ichain->isop.opc != Uilod &&
                        ichain->isop.opc != Uineq &&
                        ichain->isop.opc != Uinn &&
                        ichain->isop.opc != Urnd &&
                        ichain->isop.opc != Utyp &&
                        ichain->isop.opc != Uirld &&
                        ichain->isop.opc != Uirlv) {
                    if (ichain->isop.srcand != NULL && ichain->isop.srcand != nota_candof) {
                        if (ichain->isop.srcand->tempbit == 0) {
                            cg1 = alloc_new(sizeof (struct IChain), &perm_heap);
                            *cg1 = *ichain->isop.srcand->target;

                            cg1->isop.opc = Ucg1;
                            ichain->isop.srcand->tempbit = newbit(cg1, NULL);
                            cg1->bitpos = ichain->isop.srcand->tempbit;
                            if ((tempdisp & 3) != 0) {
                                tempdisp = (tempdisp - (tempdisp & 3)) + 4;
                            }
                            cg1->isop.temploc = alloc_new(sizeof (struct Temploc), &perm_heap);
                            if (stack_reversed == 0) {
                                tempdisp += 4;
                                cg1->isop.temploc->disp = -tempdisp;
                            } else {
                                cg1->isop.temploc->disp = tempdisp;
                                tempdisp += 4;
                            }
                        } else {
                            cg1 = bittab[ichain->isop.srcand->tempbit].ichain;
                        }

                        if ((cg1->isop.datatype != Idt && cg1->isop.datatype != Kdt) || dwopcode) {
                            func_0045FBB4(ichain->isop.srcand->multiplier, 0, 0, node, lu);
                            formlivbb(cg1, node, lu);

                            (*lu)->store_count++;
                            setbit(&node->bvs.stage2.locdef, ichain->isop.srcand->tempbit);

                            if ((*lu)->load_count == 0) {
                                (*lu)->firstisstr = true;
                            }
                        }
                    }
                }
            }
            break;

        default:
        case dumped:
            caseerror(1, 722, "uoptreg1.p", 10);
            break;
    }
    return const_value;
}

/*
00461084 func_00461084
0046123C func_0046123C
*/
static void func_00461084(struct IChain *ichain, struct Graphnode *node) {
    struct LiveUnit *lu;

    switch (ichain->type) {
        case islda:
        case isconst:
            break;

        case isilda:
            func_00461084(ichain->islda_isilda.outer_stack_ichain, node);
            break;

        case issvar:
            func_00461084(ichain->isvar_issvar.outer_stack_ichain, node);
            break;

        case isvar:
            if ((ichain->dtype != Idt && ichain->dtype != Kdt) || dwopcode || ichain->isvar_issvar.location.memtype == Rmt) {
                formlivbb(ichain, node, &lu);
                if (outofmem) {
                    return;
                }
                lu->load_count++;
                if (lu->load_count == 1 && lu->store_count == 0) {
                    setbit(&node->bvs.stage2.loclive, ichain->bitpos);
                }
            }
            return;

        case isop:
            if (optab[ichain->isop.opc].is_binary_op) {
                func_00461084(ichain->isop.op1, node);
                func_00461084(ichain->isop.op2, node);
            } else {
                func_00461084(ichain->isop.op1, node);
            }
            break;

        default:
            caseerror(1, 1048, "uoptreg1.p", 10);
            break;
    }
}

/*
00461AAC makelivranges
*/
static void func_0046123C(struct Statement *stat, struct Graphnode *node) {
    struct LiveUnit *lu;
    int loopno;
    bool phi_s6;
    struct StrengthReductionCand *cand;
    struct IChain *temp_ichain;

    if (stat->u.store.u.str.srcands == NULL) {
        return;
    }

    cand = stat->u.store.u.str.srcands;
    phi_s6 = mipsflag == 3 && stat->graphnode->loop != NULL;
    if (phi_s6) {
        loopno = stat->graphnode->loop->loopno;
        phi_s6 = looptab[stat->graphnode->loop->loopno].unk9 && looptab[stat->graphnode->loop->loopno].unk4 != NULL;
    }

    while (cand != NULL) {
        if (!phi_s6 || !check_ix_candidate(cand->target, loopno)) {
            if ((cand->target->isop.datatype != Idt && cand->target->isop.datatype != Kdt) || dwopcode) {
                formlivbb(cand->target, node, &lu);
                if (outofmem) {
                    return;
                }
                lu->load_count += 1;
                if (phi_s6 && check_ix_source(cand->target, loopno)) {
                    lu->load_count += 2;
                }
                if (lu->load_count == 1 && lu->store_count == 0) {
                    setbit(&node->bvs.stage2.loclive, cand->target->bitpos);
                }
                lu->store_count += 1;
                setbit(&node->bvs.stage2.locdef, cand->target->bitpos);
            }

            if (cand->multiplier != NULL) {
                if (cand->target->isop.srcand == NULL || cand->target->isop.srcand == nota_candof || node->in_rolled_preloop) {
                    func_00461084(cand->multiplier, node);
                } else {
                    if (cand->tempbit == 0) {
                        temp_ichain = alloc_new(sizeof (struct IChain), &perm_heap);
                        *temp_ichain = *cand->target;

                        temp_ichain->isop.opc = Ucg1;
                        cand->tempbit = newbit(temp_ichain, NULL);
                        temp_ichain->bitpos = cand->tempbit;

                        if ((tempdisp & 3) != 0) {
                            tempdisp = (tempdisp - (tempdisp & 3)) + 4;
                        }

                        temp_ichain->isop.temploc = alloc_new(sizeof (struct Temploc), &perm_heap);
                        if (!stack_reversed) {
                            tempdisp += 4;
                            temp_ichain->isop.temploc->disp = -tempdisp;
                        } else {
                            temp_ichain->isop.temploc->disp = tempdisp;
                            tempdisp += 4;
                        }
                    } else {
                        temp_ichain = bittab[cand->tempbit].ichain;
                    }

                    if ((temp_ichain->isop.datatype != Idt && temp_ichain->isop.datatype != Kdt) || dwopcode) {
                        formlivbb(temp_ichain, node, &lu);
                        lu->load_count++;
                        if (lu->load_count == 1) {
                            setbit(&node->bvs.stage2.loclive, temp_ichain->bitpos);
                        }
                    }
                }
            }
        }

        cand = cand->next;
    }
}

/*
00461AAC makelivranges
*/
static void func_00461640(struct Statement *stat, struct Graphnode *node, struct LiveUnit **lu) {
    struct LiveUnit *sp50;
    struct RecurInfo *recur;

    recur = stat->u.store.u.str.recurs;
    while (recur != NULL) {
        func_0045E5C4(recur->expr, 0, node, lu);
        if ((recur->ichain->isop.datatype != Idt && recur->ichain->isop.datatype != Kdt) || dwopcode) {
            formlivbb(recur->ichain, node, &sp50);
            if (outofmem) {
                return;
            }

            sp50->store_count += 1;
            setbit(&node->bvs.stage2.locdef, recur->ichain->bitpos);
            if (sp50->load_count == 0) {
                sp50->firstisstr = true;
            }
        }

        recur = recur->next;
    }
}

/*
00461AAC makelivranges
*/
static void func_00461778(struct Graphnode *node, int reg, bool arg2) {
    struct LiveUnit *lu;
    int regclass;

    if (!usingregoption) {
        if (!arg2 && node != graphhead && lang != LANG_ADA) {
            dbgerror(0x1F9B);
        }

        lu = node->liveunit;
        while (reg != lu->reg) {
            lu = lu->next_in_block;
        }
        lu->reg = 0;

        if (reg <= 23) {
            regclass = 1;
        } else {
            regclass = 2;
        }

        SET_ADD(node->regsused[regclass - 1], reg);
    }
}

/*
00461AAC makelivranges
*/
static int func_00461880(int loc, struct RegstakenParregs *regstaken_parregs) {
    bool found;
    int reg;

    found = false;
    reg = 1;
    while (!found && reg <= 35) {
        if (regstaken_parregs->parregs[reg - 1] == loc) {
            found = true;
        } else {
            reg++;
        }
    }

    if (found) {
        return reg;
    } else {
        return 0;
    }
}

/*
00461AAC makelivranges
*/
static int par_regclass(struct Expression *par) {
    Datatype dtype;

    if (par->type == isop) {
        dtype = par->data.isop.datatype;
    } else {
        dtype = par->datatype;
    }

    if (dtype == Qdt || dtype == Rdt) {
        return 2;
    } else {
        return 1;
    }
}

/*
00461AAC makelivranges
    is_longlong
*/
static bool func_00461920(struct Expression *expr) {
    Datatype dtype;

    if (expr->type == isop) {
        dtype = expr->data.isop.datatype;
    } else {
        dtype = expr->datatype;
    }

    return dtype == Idt || dtype == Kdt;
}

/*
00461AAC makelivranges
*/
static bool func_0046195C(struct Statement *stat) {
    stat = stat->next;
    while (stat->opc != Ucia && stat->opc != Ucup && stat->opc != Uicuf) {
        if (stat->opc == Ustr && stat->is_increment) {
            return false;
        }

        stat = stat->next;
    }
    return true;
}

/*
00461AAC makelivranges
*/
static bool func_00461A00(struct Statement *stat, struct Expression *expr) {
    stat = stat->next;
    while (stat->opc != Ucia && stat->opc != Ucup && stat->opc != Uicuf) {
        if (stat->opc == Ustr && expr->ichain == stat->expr->ichain) {
            return false;
        }

        stat = stat->next;
    }
    return true;
}

/*
00456A2C oneproc
*/
void makelivranges(void) {
    struct Graphnode *node; // v0-4
    struct LiveUnit *lu;       // v0-c
    bool done;
    int fp_offset;
    bool spF7;
    bool phi_s4_2;
    struct Proc *proc; // spF0
    struct VarAccessList *access;
    struct Statement *stat;
    struct Statement *par;
    struct Expression *expr;
    int i;
    int block;
    int bit;
    int regclass;
    int reg;
    int size;

    bvlivransize = ((unsigned) (curstaticno - 1) >> 7) + 1;
    numlu = 0;
    ever_altered.num_blocks = 0;
    ever_altered.blocks = NULL;
    checkbvlist(&ever_altered);
    initbv(&ever_altered, (struct BitVectorBlock) {0});

    node = graphhead;
    while (node != NULL) {
        bvectunion(&ever_altered, &node->bvs.stage1.alters);
        node = node->next;
    }

    firstconstbit = bitposcount;
    node = graphhead;
    while (node != NULL) {
        initbv(&node->bvs.stage2.appear, (struct BitVectorBlock) {0});
        initbv(&node->bvs.stage2.loclive, (struct BitVectorBlock) {0});
        initbv(&node->bvs.stage2.locdef, (struct BitVectorBlock) {0});
        node->regsused[0][0] = dftregsused >> 32ull;
        node->regsused[0][1] = dftregsused;
        node->regsused[1][0] = 0;
        node->regsused[1][1] = 0;
        node->rstrbb = NULL;
        node->rlodbb = NULL;
        node->regdata = (struct RegisterData) {0};

        bvectminus(&node->indiracc, &slvarbits);
        bvectintsect(&node->indiracc, &ever_altered);

        // create LiveUnits for:
        //   1. the source variable of every load
        //   2. the target variable of every store
        access = node->varlisthead;
        while (access != NULL) {
            if (access->type == 2) {
                if (access->data.var->type == isvar &&
                        !access->data.var->ichain->isvar_issvar.veqv &&
                        !bvectin(access->data.var->ichain->bitpos, &node->indiracc) &&
                        ((access->data.var->datatype != Idt && access->data.var->datatype != Kdt) || dwopcode || access->data.var->data.isvar_issvar.location.memtype == Rmt)) {
                    formlivbb(access->data.var->ichain, node, &lu);
                    if (outofmem) {
                        return;
                    }

                    if (lu->load_count == 0 && lu->store_count == 0) {
                        setbit(&node->bvs.stage2.loclive, access->data.var->ichain->bitpos);
                    }
                    lu->load_count += access->data.var->count;

                    // precolor function arguments
                    if (node == graphhead && !lu->firstisstr && bvectin0(access->data.var->ichain->bitpos, &coloredparms)) {
                        if (!outonly_parm) {
                            lu->firstisstr = true;
                        }

                        if ((!allcallersave || access->data.var->data.isvar_issvar.location.memtype == Mmt) &&
                                lu->reg == 0 && doprecolor && passedinreg(access->data.var->ichain, offsetpassedbyint)) {
                            passedcl = par_regclass(access->data.var);

                            if (access->data.var->data.isvar_issvar.location.memtype == Mmt) {
                                lu->reg = 1; // v0?
                            } else {
                                lu->reg = firstparmreg[passedcl - 1] + access->data.var->data.isvar_issvar.location.addr / 4;
                            }

                            if (passedcl == 2 && access->data.var->data.isvar_issvar.location.addr != 0) {
                                lu->reg = firstparmreg[passedcl - 1] + 1;
                            }

                            SET_ADD(node->regsused[passedcl - 1], lu->reg);
                        }
                    } else if (node->successors == NULL &&
                            bvectin0(access->data.var->ichain->bitpos, &coloredparms) &&
                            bvectin0(access->data.var->ichain->bitpos, &outmodebits) &&
                            !allcallersave && lu->reg == 0 &&
                            passedinreg(access->data.var->ichain, offsetpassedbyint)) {
                        passedcl = par_regclass(access->data.var);

                        lu->reg = firstparmreg[passedcl - 1] + access->data.var->data.isvar_issvar.location.addr / 4;
                        if (passedcl == 2 && access->data.var->data.isvar_issvar.location.addr != 0) {
                            lu->reg = firstparmreg[passedcl - 1] + 1;
                        }

                        SET_ADD(node->regsused[passedcl - 1], lu->reg);
                    }
                }
            } else if (access->type == 1 &&
                    access->data.store->opc == Ustr &&
                    !access->data.store->outpar &&
                    !access->data.store->expr->ichain->isvar_issvar.veqv &&
                    !bvectin(access->data.store->expr->ichain->bitpos, &node->indiracc) &&
                    ((access->data.store->expr->datatype != Idt && access->data.store->expr->datatype != Kdt) ||
                     dwopcode || access->data.store->expr->data.isvar_issvar.location.memtype == Rmt)) {
                formlivbb(access->data.store->expr->ichain, node, &lu);
                if (outofmem) {
                    return;
                }

                lu->store_count++;
                setbit(&node->bvs.stage2.locdef, access->data.store->expr->ichain->bitpos);
                if (lu->load_count == 0) {
                    lu->firstisstr = true;
                }

                if (node->successors == NULL &&
                        bvectin0(access->data.store->expr->ichain->bitpos, &coloredparms) &&
                        bvectin0(access->data.store->expr->ichain->bitpos, &outmodebits) &&
                        !allcallersave && lu->reg == 0 && passedinreg(access->data.store->expr->ichain, offsetpassedbyint)) {
                    passedcl = par_regclass(access->data.store->expr);
                    lu->reg = firstparmreg[passedcl - 1] + access->data.store->expr->data.isvar_issvar.location.addr / 4;
                    if (passedcl == 2 && access->data.store->expr->data.isvar_issvar.location.addr != 0) {
                        lu->reg = firstparmreg[passedcl - 1] + 1;
                    }

                    SET_ADD(node->regsused[passedcl - 1], lu->reg);
                }
            }
            access = access->next;
        }

        // create LiveUnits for every expression that appears more than once
        done = false;
        stat = node->stat_head;
        while (stat != NULL && !done) {
            if (stat->opc == Ustr) {
                if (!stat->outpar) {
                    if (stat->suppressed_iv != 1) {
                        func_0045E5C4(stat->expr->data.isvar_issvar.assigned_value, 0, node, &lu);
                    }

                    if (stat->is_increment) {
                        func_0046123C(stat, node);
                        func_00461640(stat, node, &lu);
                    }
                } else { // outpars
                    par = node->predecessors->graphnode->stat_tail;
                    do {
                        par = par->prev;
                    } while (par->opc != Upar || stat->expr->data.isvar_issvar.assigned_value->data.isvar_issvar.location.addr / 4 != par->u.par.loc / 4);
                    stat->u.store.u.outpar.par = par;

                    formlivbb(stat->expr->ichain, node, &lu);
                    lu->firstisstr = true;
                    setbit(&node->bvs.stage2.locdef, stat->expr->ichain->bitpos);
                    if (proc->o3opt) {
                        if (par->u.par.reg == 0) {
                            goto next;
                        }
                        reg = par->u.par.reg;
                        if (reg <= ee_ra) {
                            regclass = 1;
                        } else {
                            regclass = 2;
                        }
                    } else {
                        if (par->u.par.loc < fp_offset) {
                            regclass = 2;
                            if (par->u.par.index > 2) {
                                goto next;
                            }
                        } else {
                            regclass = 1;
                            if (par->u.par.index > 4) {
                                goto next;
                            }
                        }
                        reg = firstparmreg[regclass - 1] + par->u.par.index - 1;
                    }

                    if (!SET_IN(node->regsused[regclass - 1], reg)) {
                        if (outofmem) {
                            return;
                        }
                        if (lu->reg == 0) {
                            lu->reg = reg;
                            SET_ADD(node->regsused[regclass - 1], reg);
                        }
                    }
                }
            } else if (stat->opc == Uisst) {
                if (stat->suppressed_iv != 1) {
                    func_0045E5C4(stat->u.store.expr, 3, node, &lu);
                    func_0045E5C4(stat->expr->data.isvar_issvar.assigned_value, 0, node, &lu);
                }
                if (stat->is_increment) {
                    func_0046123C(stat, node);
                }
            } else if (stat->opc == Uistr ||
                       stat->opc == Uistv ||
                       stat->opc == Umov ||
                       stat->opc == Umovv ||
                       stat->opc == Uirst ||
                       stat->opc == Uirsv) {
                if (stat->opc == Uistr || stat->opc == Uirst ||
                        stat->opc == Uistv || stat->opc == Uirsv) {
                    func_0045E5C4(stat->expr, 1, node, &lu);
                } else {
                    func_0045E5C4(stat->expr, 3, node, &lu);
                }

                func_0045E5C4(stat->u.store.expr, 3, node, &lu);
            } else if (stat->opc == Utpeq ||
                       stat->opc == Utpne ||
                       stat->opc == Utpge ||
                       stat->opc == Utpgt ||
                       stat->opc == Utple ||
                       stat->opc == Utplt) {
                if (stat->opc == Utpeq || stat->opc == Utpne) {
                    func_0045E5C4(stat->expr, 3, node, &lu);
                    func_0045E5C4(stat->u.store.expr, 3, node, &lu);
                } else {
                    func_0045E5C4(stat->expr, 1, node, &lu);
                    func_0045E5C4(stat->u.store.expr, 1, node, &lu);
                }
            } else if (stat->opc == Ufjp || stat->opc == Utjp || stat->opc == Uxjp || stat->opc == Uijp) {
                if (!caninsertearly(stat->expr, node)) {
                    stat->expr->count++;
                }
                func_0045E5C4(stat->expr, 0, node, &lu);
            } else if (stat->opc != Uaent && stat->opc != Ubgnb && stat->opc != Ucia  && stat->opc != Uclab &&
                       stat->opc != Uclbd && stat->opc != Uctrl && stat->opc != Ucubd && stat->opc != Ucup  &&
                       stat->opc != Udef  && stat->opc != Udup  && stat->opc != Uendb && stat->opc != Uicuf &&
                       stat->opc != Ulab  && stat->opc != Ulbdy && stat->opc != Ulbgn && stat->opc != Ulend &&
                       stat->opc != Uloc  && stat->opc != Ultrm && stat->opc != Umst  && stat->opc != Unop  &&
                       stat->opc != Uret  && stat->opc != Ustep && stat->opc != Uujp  && stat->opc != Uxpar) { // TODO: make define for this?
                if (stat->opc == Uchkt) {
                    func_0045E5C4(stat->expr, 0, node, &lu);
                } else if (stat->opc == Upar) {
                    func_0045E5C4(stat->expr, 0, node, &lu);
                    if (stat->u.par.dtype == Sdt && !proc->o3opt) {
                        if (stat->u.par.size > int_reg_size) {
                            reg = firstparmreg[0] + (stat->u.par.loc / int_reg_size);
                            size = stat->u.par.size;
                            while (size > 0 && reg < firstparmreg[0] + 4) {
                                SET_ADD(node->regsused[0], reg);

                                reg++;
                                size -= int_reg_size;
                            }
                        }
                    }
                } else if (stat->opc == Upmov) {
                    func_0045E5C4(stat->expr, 3, node, &lu);
                    if (!proc->o3opt) {
                        size = stat->u.store.size;
                        reg = firstparmreg[0] + stat->u.store.u.mov.offset / int_reg_size;
                        while (size > 0 && reg < firstparmreg[0] + 4) {
                            if (SET_IN(node->regsused[0], reg)) {
                                func_00461778(node, reg, 0);
                            }

                            SET_ADD(node->regsused[0], reg);

                            size -= int_reg_size;
                            reg++;
                        }
                    }
                } else {
                    if (stat->opc == Upop && stat->u.pop.unk15 != 0) {
                        stat->u.pop.unk16 = 0;
                        if (!caninsertearly(stat->expr, node)) {
                            if (stat->expr->type == isop) {
                                stat->expr->count++;
                            } else {
                                stat->u.pop.unk16 = 1;
                            }
                        }
                    }
                    func_0045E5C4(stat->expr, 3, node, &lu);
                }

                if (stat->opc == Upar &&
                        (proc->o3opt ||
                         (stat->u.par.index <= 4 && (stat->u.par.dtype != Sdt || stat->u.par.size <= int_reg_size)))) {
                    if (outofmem) {
                        return;
                    }

                    expr = stat->expr;
                    while (expr->type == isvar && expr->data.isvar_issvar.copy != NULL && expr->data.isvar_issvar.copy != nocopy) {
                        expr = expr->data.isvar_issvar.copy;
                    }

                    if (proc->o3opt) {
                        stat->u.par.reg = func_00461880(stat->u.par.loc, proc->regstaken_parregs);
                        if (stat->u.par.reg == 0) {
                            goto next;
                        }
                        reg = stat->u.par.reg;
                        spF7 = 1;
                        if (reg < 24) {
                            regclass = 1;
                        } else {
                            regclass = 2;
                        }
                    } else {
                        if (stat->u.par.loc < fp_offset) {
                            regclass = 2;
                            if (stat->u.par.index > 2) {
                                goto next;
                            }
                            spF7 = 1;
                        } else {
                            spF7 = 1;
                            regclass = 1;
                        }
                        reg = firstparmreg[regclass - 1] + stat->u.par.index - 1;
                    }

                    if (expr->type == isvar && !expr->ichain->isvar_issvar.veqv && !bvectin(expr->ichain->bitpos, &node->indiracc)) {
                        formlivbb(expr->ichain, node, &lu);
                    } else {
                        spF7 = 0;
                    }

                    phi_s4_2 = false;
                    if (regclass == 1) {
                        if (par_regclass(expr) != 1 && expr->datatype == Qdt) {
                            phi_s4_2 = true;
                        } else if (!mips3_64data && func_00461920(expr)) {
                            phi_s4_2 = true;
                        }
                    }

                    if (allcallersave == 0 && SET_IN(node->regsused[regclass - 1], reg)) {
                        if (lu != NULL && spF7 && reg == lu->reg && lu->store_count == 0) {
                            goto next;
                        }
                        func_00461778(node, reg, 0);
                    }

                    if (phi_s4_2) {
                        if (SET_IN(node->regsused[regclass - 1], reg + 1)) {
                            func_00461778(node, reg + 1, 0);
                        }
                    }

                    if (phi_s4_2) {
                        SET_ADD(node->regsused[regclass - 1], reg);
                        SET_ADD(node->regsused[regclass - 1], reg + 1);
                    } else {
                        SET_ADD(node->regsused[regclass - 1], reg);
                    }

                    if (par_regclass(expr) == regclass && doprecolor) {
                        if (expr->type == isvar) {
                            if (spF7 && lu->reg == 0) {
                                if (lang != LANG_C || func_00461A00(stat, expr)) {
                                    lu->reg = reg;
                                }
                            }
                        } else if (lu != NULL && lu->reg == 0) {
                            if (lang != LANG_C ||
                                    !bvectin0(expr->ichain->bitpos, &node->bvs.stage1.u.cm.cand) ||
                                    func_0046195C(stat)) {
                                lu->reg = reg;
                            }
                        }
                    }
                }
            } else if (stat->opc == Umst) {
                proc = stat->u.mst.proc;
                fp_offset = stat->u.mst.fp_offset;
                if (!allcallersave) {
                    if (proc->o3opt) {
                        reg = 22;
                        if (someusefp) {
                            reg = 21;
                        }

                        while (highesteereg[0] < reg && !proc->regstaken_parregs->regstaken[reg - 1]) {
                            reg--;
                        }
                        highesteereg[0] = reg;

                        reg = lasterreg[0];
                        while (highesterreg[0] < reg && !proc->regstaken_parregs->regstaken[reg - 1]) {
                            reg--;
                        }
                        highesterreg[0] = reg;

                        reg = 35;
                        while (highesteereg[1] < reg && !proc->regstaken_parregs->regstaken[reg - 1]) {
                            reg--;
                        }
                        highesteereg[1] = reg;

                        reg = lasterreg[1];
                        while (highesterreg[1] < reg && !proc->regstaken_parregs->regstaken[reg - 1]) {
                            reg--;
                        }
                        highesterreg[1] = reg;
                    }
                } else {
                    if (!proc->o3opt) {
                        for (reg = firsterreg[0]; reg < lasterreg[0]; reg++) {
                            curproc->regstaken_parregs->regstaken[reg - 1] = true;
                        }
                        for (reg = firsterreg[1]; reg < lasterreg[1]; reg++) {
                            curproc->regstaken_parregs->regstaken[reg - 1] = true;
                        }
                    } else {
                        for (reg = firsterreg[0]; reg < lasterreg[0]; reg++) {
                            if (proc->regstaken_parregs->regstaken[reg - 1]) {
                                curproc->regstaken_parregs->regstaken[reg - 1] = true;
                            }
                        }
                        for (reg = firsterreg[1]; reg < lasterreg[1]; reg++) {
                            if (proc->regstaken_parregs->regstaken[reg - 1]) {
                                curproc->regstaken_parregs->regstaken[reg - 1] = true;
                            }
                        }
                    }
                }
            }

next:
            if (stat->next != NULL) {
                done = stat->next->graphnode != stat->graphnode;
            }
            if (outofmem) {
                return;
            }
            stat = stat->next;
        }

        initbv(&old, (struct BitVectorBlock) {0});
        initbv(&node->bvs.stage2.unk16C, (struct BitVectorBlock) {0});
        block = 0;
        i = 0;
        while (i < firstconstbit) {
            if (BVBLOCKEMPTY(node->bvs.stage1.u.cm.insert, block)) {
                i += 0x80;
            } else {
                bit = 0;
                while (i < firstconstbit && bit < 0x80) {
                    if (BVINBLOCK(bit, block, node->bvs.stage1.u.cm.insert) &&
                            (bvectin(i, &node->bvs.stage1.u.scm.source) ||
                             bvectin(i, &storeop) ||
                             bvectin(i, &trapop))) {
                        func_0045FBB4(bittab[i].ichain, 1, 1, node, &lu);
                        if (outofmem) {
                            return;
                        }
                    }
                    bit++;
                    i++;
                }
            }
            block++;
        }

        node = node->next;
    }

    checkbvlist(&iscolored[0]);
    checkbvlist(&iscolored[1]);

    iscolored12.num_blocks = 0;
    iscolored12.blocks = NULL;
    checkbvlist(&iscolored12); // naming is on point
    bvectcopy(&iscolored12, &iscolored[0]);
    bvectunion(&iscolored12, &iscolored[1]);
    checkbvlist(&varbits);
}
