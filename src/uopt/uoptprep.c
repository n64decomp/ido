#include "libp/libp.h"
#include "libu/libu.h"
#include "ucode.h"
#include "uoptions.h"
#include "uoptutil.h"
#include "uoptdata.h"
#include "uoptkill.h"
#include "uoptdbg.h"

/* 
004122D8 vardelete
*/
bool lvalaltered(struct IChain *ichain, struct Graphnode *node) {
    struct VarAccessList *access;
    bool altered;

    access = node->varlisthead;
    altered = false;

    while (!altered && access != NULL) {
        if (access->type == 2 && access->data.var->ichain == ichain) {
            altered = true;
        } else {
            access = access->next;
        }
    }
    
    if (!ichain->isvar_issvar.unk19 && !altered) {
        gsptr->expr = ichain->expr;
        if (!strlant(gsptr, node->varlisttail)) {
            altered = true;
        }
    }

    if (!altered) {
        if (node->stat_tail->opc == Ucia) {
            if (lang == LANG_ADA ||
                    (IS_CIA_CALLS_ATTR(node->stat_tail->u.cia.flags) && clkilled(curlevel, indirprocs, ichain->expr)) ||
                    listplkilled(node->stat_tail->u.cia.parameters, ichain->expr, ichain->isvar_issvar.unk19)) {
                altered = true;
            }
        } else if ((node->stat_tail->opc == Ucup ||
                    node->stat_tail->opc == Uicuf ||
                    node->stat_tail->opc == Urcuf) &&
                (clkilled(node->stat_tail->u.call.level, node->stat_tail->u.call.proc, ichain->expr) ||
                 listplkilled(node->stat_tail->u.call.parameters, ichain->expr, ichain->isvar_issvar.unk19))) {
            altered = true;
        }
    }

    return altered;
}

/* 
004122D8 vardelete
*/
bool lvalantloc(struct IChain *ichain, struct Graphnode *node) {
    struct VarAccessList *access;
    bool anticipated;

    anticipated = false;
    access = node->varlisthead;
    while (!anticipated && access != NULL) {
        if (access->type == 1 &&
                (access->data.store->opc == Uisst || access->data.store->opc == Ustr) &&
                access->data.store->expr != NULL  &&
                access->data.store->expr->ichain == ichain) {
            anticipated = true;
        } else {
            access = access->next;
        }
    }

    return anticipated;
}
/* 
0041550C func_0041550C
004175BC copypropagate
0045CD78 expaltered
0045D208 patchvectors
*/
bool expinalter(struct IChain *ichain, struct Graphnode *node) {
    bool altered;

    switch (ichain->type) {
        case islda:
        case isconst:
        case isrconst:
            altered = false;
            break;

        case isvar:
        case isop:
        case isilda:
        case issvar:
            altered = bvectin(ichain->bitpos, &node->bvs.stage1.alters);
            break;

        case dumped:
        default:
            dbgerror(0x19E);
            altered = false;
            break;
    }

    return altered;
}

/* 
00431508 func_00431508
004324F4 findinduct
00455060 func_00455060
0045CBDC cupaltered
0045CD78 expaltered
*/
bool cupaltered(struct IChain *ichain, int level, struct Proc *proc) {
    bool altered;

    switch (ichain->type) {
        case islda:
        case isconst:
        case isrconst:
            altered = false;
            break;

        case isilda:
            return cupaltered(ichain->islda_isilda.outer_stack_ichain, level, proc);

        case isvar:
        case issvar:
            altered = clkilled(level, proc, ichain->expr);
            break;

        case isop:
            ichain = ichain;
            altered = cupaltered(ichain->isop.op1, level, proc);
            if (!altered && optab[ichain->isop.opc].is_binary_op) {
                altered = cupaltered(ichain->isop.op2, level, proc);
            }
    
            if (!altered &&
                    (ichain->isop.opc == Uiequ ||
                     ichain->isop.opc == Uineq ||
                     ichain->isop.opc == Uigeq ||
                     ichain->isop.opc == Uigrt ||
                     ichain->isop.opc == Uileq ||
                     ichain->isop.opc == Uiles ||
                     ichain->isop.opc == Uilod ||
                     ichain->isop.opc == Uildv ||
                     ichain->isop.opc == Uirld ||
                     ichain->isop.opc == Uirlv)) {
                altered = clkilled(level, proc, ichain->expr);
            }
            break;

        case empty:
        case dumped:
        default:
            caseerror(1, 101, "uoptprep.p", 10);
            altered = false;
            break;
    }

    return altered;
}

/*
004175BC copypropagate
0045D208 patchvectors
*/
bool expaltered(struct IChain *ichain, struct Graphnode *node) {
    bool altered; // sp27
    bool sp26;
    bool sp25;

    switch (ichain->type) {
        case islda:
        case isconst:
        case isrconst:
            altered = false;
            break;

        case isilda:
            altered = false;
            break;

        case isvar:
        case issvar:
            if (ichain->isvar_issvar.unk1A) {
                altered = true;
            } else {
                sp26 = false;
                if (!ichain->isvar_issvar.unk19) {
                    sp26 = varkilled(ichain->expr, node->varlisthead);
                }
                sp25 = false;
                if (node->stat_tail->opc == Ucia) {
                    if (lang == LANG_ADA) {
                        sp25 = true;
                    }
                    else if (IS_CIA_CALLS_ATTR(node->stat_tail->u.cia.flags) && cupaltered(ichain, curlevel, indirprocs)) {
                        sp25 = true;
                    }
                    else if (listplkilled(node->stat_tail->u.cia.parameters, ichain->expr, ichain->isvar_issvar.unk19)) {
                        sp25 = true;
                    }
                } else {
                    if (node->stat_tail->opc == Ucup || node->stat_tail->opc == Uicuf || node->stat_tail->opc == Urcuf) {
                        if (cupaltered(ichain, node->stat_tail->u.call.level, node->stat_tail->u.call.proc)) {
                            sp25 = true;
                        } else if (listplkilled(node->stat_tail->u.call.parameters, ichain->expr, ichain->isvar_issvar.unk19)) {
                            sp25 = true;
                        }
                    }
                }

                if (sp25) {
                    setbit(&node->bvs.stage1.alters, ichain->isvar_issvar.assignbit);
                }
                altered = sp26 || sp25;
            }
            break;

        case isop:
            sp26 = expinalter(ichain->isop.op1, node);
            if (!sp26 && optab[ichain->isop.opc].is_binary_op) {
                sp26 = expinalter(ichain->isop.op2, node);
            }

            if (!sp26 &&
                    (ichain->isop.opc == Uiequ ||
                     ichain->isop.opc == Uineq ||
                     ichain->isop.opc == Uigeq ||
                     ichain->isop.opc == Uigrt ||
                     ichain->isop.opc == Uileq ||
                     ichain->isop.opc == Uiles ||
                     ichain->isop.opc == Uilod ||
                     ichain->isop.opc == Uildv ||
                     ichain->isop.opc == Uirld ||
                     ichain->isop.opc == Uirlv)) {
                sp26 = varkilled(ichain->expr, node->varlisthead);
                if (!sp26) {
                    if (node->stat_tail->opc == Ucia) {
                        if (lang == LANG_ADA) {
                            sp26 = true;
                        } else if (IS_CIA_CALLS_ATTR(node->stat_tail->u.cia.flags) && cupaltered(ichain, curlevel, indirprocs)) {
                            sp26 = true;
                        } else if (listplkilled(node->stat_tail->u.cia.parameters, ichain->expr, 0)) {
                            sp26 = true;
                        } 
                    } else if (node->stat_tail->opc == Ucup || node->stat_tail->opc == Uicuf || node->stat_tail->opc == Urcuf) {
                        if (cupaltered(ichain, node->stat_tail->u.call.level, node->stat_tail->u.call.proc)) {
                            sp26 = true;
                        } else if (listplkilled(node->stat_tail->u.call.parameters, ichain->expr, 0)) {
                            sp26 = true;
                        }
                    } 
                }
            }
            altered = sp26;
            break;

        default:
        case dumped:
            caseerror(1, 132, "uoptprep.p", 10);
            altered = false;
    }
    return altered;
}

/* 
00456A2C oneproc
*/
void patchvectors(void) {
    struct IChain *ichain;
    struct Graphnode *node;
    int i;
    bool phi_s1;
    bool phi_s2;

    checkbvlist(&storeop);
    checkbvlist(&trapop);
    checkbvlist(&varbits);
    checkbvlist(&asgnbits);
    if (outofmem) {
        return;
    }

    leaf_for_ugen = true;
    node = graphhead;
    while (node != NULL) {
        checkbvlist(&node->bvs.stage1.antlocs);
        checkbvlist(&node->bvs.stage1.avlocs);
        checkbvlist(&node->bvs.stage1.alters);
        checkbvlist(&node->bvs.stage1.u.precm.pavlocs);
        checkbvlist(&node->bvs.stage1.absalters);
        checkbvlist(&node->bvs.stage1.u.precm.expoccur);
        if (outofmem) {
            return;
        }

        if (((node->stat_tail->opc == Ucup ||
              node->stat_tail->opc == Uicuf ||
              node->stat_tail->opc == Urcuf) && !IS_RETURN_ATTR(node->stat_tail->u.call.extrnal_flags))
          || (node->stat_tail->opc == Ucia && IS_CIA_CALLS_ATTR(node->stat_tail->u.cia.flags))) {
            leaf_for_ugen = false;
        }

        if (node->varlisthead != NULL ||
                (node->stat_tail->opc == Ucia ||
                 node->stat_tail->opc == Ucup ||
                 node->stat_tail->opc == Uicuf ||
                 node->stat_tail->opc == Urcuf)) {

            for(i = 0; i < bitposcount; i++) {
                ichain = bittab[i].ichain;
                if (bvectin(i, &asgnbits)) {
                    if (!ichain->isvar_issvar.unk19) {
                        if (ichain->isvar_issvar.unk1A) {
                            setbit(&node->bvs.stage1.alters, i);
                        } else if (!bvectin(i, &node->bvs.stage1.alters) && !bvectin(i, &node->bvs.stage1.u.precm.expoccur)) {
                            gsptr->expr = ichain->expr;
                            if (strlkilled(gsptr, node->varlisthead)) {
                                setbit(&node->bvs.stage1.alters, i);
                            }
                        }
                    }
                } else if (!bvectin(i, &node->bvs.stage1.u.precm.expoccur)) {
                    if (!bvectin(i, &storeop)) {
                        if ((ichain->type == isvar || ichain->type == issvar) && ichain->isvar_issvar.unk1A) {
                            setbit(&node->bvs.stage1.alters, i);
                        } else if (!bvectin(i, &node->bvs.stage1.alters) && expaltered(ichain, node)) {
                            setbit(&node->bvs.stage1.alters, i);
                        }
                    } else {
                        if (expinalter(ichain->isop.op2, node)) {
                            phi_s1 = true;
                            phi_s2 = true;
                        } else if (ichain->isop.opc == Uisst || ichain->isop.opc == Ustr) {
                            if (ichain->isop.op1->isvar_issvar.unk1A) {
                                phi_s1 = true;
                                phi_s2 = true;
                            } else {
                                phi_s2 = bvectin(ichain->isop.op1->isvar_issvar.assignbit, &node->bvs.stage1.alters);
                                phi_s1 = bvectin(ichain->isop.op1->bitpos, &node->bvs.stage1.alters);
                            }
                        } else if (expinalter(ichain->isop.op1, node)) {
                            phi_s1 = true;
                            phi_s2 = true;
                        } else {
                            phi_s2 = strlkilled(ichain->isop.stat, node->varlisthead);
                            phi_s1 = strskilled(ichain->isop.stat, node->varlisthead);
                        }

                        if (!phi_s1 &&
                                (node->stat_tail->opc == Ucia ||
                                 node->stat_tail->opc == Ucup ||
                                 node->stat_tail->opc == Uicuf ||
                                 node->stat_tail->opc == Urcuf)) {

                            if (!(ichain->isop.opc == Uisst || ichain->isop.opc == Ustr)) {
                                if (node->stat_tail->opc == Ucia) {
                                    if (lang == LANG_ADA ||
                                            (IS_CIA_CALLS_ATTR(node->stat_tail->u.cia.flags) &&
                                             cskilled(curlevel, indirprocs, ichain->isop.stat)) ||
                                            listpskilled(node->stat_tail->u.cia.parameters, ichain->isop.stat, 0) ||
                                            ((ichain->isop.opc == Umov ||
                                              ichain->isop.opc == Umovv) &&
                                             cmkilled(curlevel, indirprocs, ichain->isop.stat))) {
                                        phi_s1 = true;
                                        phi_s2 = true;
                                    }
                                } else if (cskilled(node->stat_tail->u.call.level, node->stat_tail->u.call.proc, ichain->isop.stat) ||
                                        listpskilled(node->stat_tail->u.call.parameters, ichain->isop.stat, 0) ||
                                        ((ichain->isop.opc == Umov ||
                                          ichain->isop.opc == Umovv) &&
                                         cmkilled(node->stat_tail->u.call.level, node->stat_tail->u.call.proc, ichain->isop.stat))) {
                                    phi_s1 = true;
                                    phi_s2 = true;
                                }
                            }
                        }

                        if (phi_s1) {
                            setbit(&node->bvs.stage1.absalters, i);
                        }
                        if (phi_s1 || phi_s2) {
                            setbit(&node->bvs.stage1.alters, i);
                        }
                    }
                }
            }
        }

        if (outofmem) {
            return;
        }

        node = node->next;
    }
}
