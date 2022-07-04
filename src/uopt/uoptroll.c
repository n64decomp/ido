#include "uoptdata.h"
#include "uoptutil.h"
#include "uoptitab.h"
#include "uoptcopy.h"
#include "uoptkill.h"
#include "uoptinput.h"
#include "uoptcontrolflow.h"
#include "uoptppss.h"

struct IChain *i_var_inx;
struct Statement *incr_stat;
int incr_amount;
struct Graphnode *loopbody;
struct Graphnode *loopbodyend;
struct Graphnode *loopheader;
int i_var_size;
int looplab;
struct Graphnode *iter_start_bb;
struct LabelMap *labelmap_head;
struct LabelMap *labelmap_unused;

/*
004713E8 loopunroll
*/
struct Expression *change_to_const_eq(bool loopIfTrue, struct Expression *loopCond, struct Graphnode *node, int rem) {
    struct IChain *op2ichain;
    int sp30;
    unsigned short hash;
    unsigned short op2Hash;
    struct IChain *eqIchain;
    Uopcode condOpc;
    struct Expression *condOp2;
    struct Expression *constEq;
    bool found;

    if (!loopIfTrue) {
        condOpc = Uequ;
    } else {
        condOpc = Uneq;
    }

    loopCond->data.isop.op1->count++;
    if (rem == 0) {
        condOp2 = loopCond->data.isop.op2;
    } else {
        if (loopCond->data.isop.op2->type == isconst) {
            sp30 = loopCond->data.isop.op2->data.isconst.number.intval + rem;
            condOp2 = enter_const(sp30, loopCond->datatype, node);
        } else {
            sp30 = loopCond->data.isop.op2->data.islda_isilda.offset + rem;
            condOp2 = enter_lda(sp30, loopCond->data.isop.op2, node);
        }
    }

    hash = isophash(condOpc, loopCond->data.isop.op1, condOp2);
    constEq = table[hash];
    found = false;
    while (!found && constEq != 0) {
        if (constEq->type == isop
                && constEq->data.isop.opc == condOpc
                && constEq->datatype == loopCond->datatype
                && constEq->data.isop.op1 == loopCond->data.isop.op1
                && constEq->data.isop.op2 == condOp2) {
            found = true;
        } else {
            constEq = constEq->next;
        }
    }

    if (!found) {
        constEq = appendchain(hash);
        constEq->type = isop;
        constEq->data.isop.opc = condOpc;
        constEq->datatype = loopCond->datatype;
        constEq->data.isop.datatype = loopCond->data.isop.datatype;
        constEq->data.isop.op2 = condOp2;
        constEq->data.isop.op1 = loopCond->data.isop.op1;
        constEq->count = 1;
        constEq->data.isop.temploc = 0;
        constEq->visited = 0;
        constEq->unk4 = 0;
        constEq->graphnode = node;

        constEq->data.isop.aux2.v1.overflow_attr = 0;

        //! overwrites overflow_attr
        constEq->data.isop.aux = loopCond->data.isop.aux;
        constEq->data.isop.aux2 = loopCond->data.isop.aux2;

        constEq->data.isop.available = loopCond->data.isop.available;
        constEq->data.isop.anticipated = loopCond->data.isop.anticipated;
    } else {
        increasecount(constEq);
    }

    if (rem == 0) {
        op2ichain = condOp2->ichain;
    } else {
        if (condOp2->type == isconst) {
            op2Hash = isconstihash(sp30);
        } else {
            op2Hash = isldaihash(condOp2->data.islda_isilda.address, sp30);
        }
        op2ichain = isearchloop(op2Hash, condOp2, NULL, NULL);
    }

    eqIchain = isearchloop(isopihash(condOpc, loopCond->ichain->isop.op1, op2ichain), constEq, loopCond->ichain->isop.op1, op2ichain);
    if (constEq->data.isop.anticipated) {
        setbit(&node->bvs.stage1.antlocs, eqIchain->bitpos);
    }
    if (constEq->data.isop.available) {
        setbit(&node->bvs.stage1.avlocs, eqIchain->bitpos);
    }
    if (!constEq->data.isop.anticipated || constEq->data.isop.available) {
        setbit(&node->bvs.stage1.alters, eqIchain->bitpos);
    }
    setbit(&node->bvs.stage1.u.precm.expoccur, eqIchain->bitpos);

    return constEq;
}

/*
004713E8 loopunroll
*/
struct Expression *change_to_var_eq(bool loop_if_true, bool inc_var_op1, struct Expression *loopCond, struct Graphnode *body, int incre) {
    struct Expression *sp78;
    bool found;
    struct IChain *sp58;
    Uopcode condOpc;
    bool sp56;
    bool sp55;
    bool sp54;
    bool sp53;
    struct Expression *sp48;
    struct IChain *temp_s1_2;
    struct Expression *phi_s3;
    struct Expression *phi_s1;
    struct Expression *phi_s0;
    unsigned short hash;
    struct IChain *phi_s3_2;

    if (loop_if_true == 0) {
        condOpc = Uequ;
    } else {
        condOpc = Uneq;
    }
    if (inc_var_op1) {
        phi_s3 = loopCond->data.isop.op2;
    } else {
        phi_s3 = loopCond->data.isop.op1;
    }
    phi_s3->count++;

    found = false;

    if ((loopCond->data.isop.opc == Ules && loop_if_true != 0) || (loopCond->data.isop.opc == Ugeq && loop_if_true == 0)) {
        phi_s1 = phi_s3;
    } else {
        sp78 = enter_const(incre, phi_s3->datatype, body);
        hash = isophash(Uadd, phi_s3, sp78);
        phi_s1 = table[hash];

        while (phi_s1 != 0) {
            if ((phi_s1->type == isop && phi_s1->data.isop.opc == Uadd && phi_s3->datatype == phi_s1->datatype)
                && ((phi_s3 == phi_s1->data.isop.op1 && sp78 == phi_s1->data.isop.op2) ||
                      (sp78 == phi_s1->data.isop.op1 && phi_s3 == phi_s1->data.isop.op2))
                    && phi_s1->data.isop.aux2.v1.overflow_attr == 0) {
                    found = 1;
            } else {
                phi_s1 = phi_s1->next;
            }

            if (found != 0) {
                break;
            }
        }

        if (!found) {
            phi_s1 = appendchain(hash);
            phi_s1->type = isop;
            phi_s1->datatype = phi_s3->datatype;
            if (phi_s3->type != isop) {
                phi_s1->data.isop.datatype = phi_s3->datatype;
            } else {
                phi_s1->data.isop.datatype = phi_s3->data.isop.datatype;
            }
            phi_s1->data.isop.opc = Uadd;
            phi_s1->data.isop.op1 = phi_s3;
            phi_s1->data.isop.op2 = sp78;
            phi_s1->count = 1;
            phi_s1->data.isop.aux2.v1.overflow_attr = 0;
            phi_s1->data.isop.temploc = 0;
            phi_s1->visited = 0;
            phi_s1->unk4 = 0;
            phi_s1->graphnode = body;
            phi_s1->data.isop.anticipated = phi_s3->initialVal;
            phi_s1->data.isop.available = phi_s3->killed == 0;
        } else {
            increasecount(phi_s1);
        }
    }

    if (inc_var_op1) {
        loopCond->data.isop.op1->count++;
        hash = isophash(condOpc, loopCond->data.isop.op1, phi_s1);
        phi_s0 = table[hash];

        //! The asm doesn't check found here, even though it could have been set
        while (phi_s0 != 0) {
            if (phi_s0->type == isop && condOpc == phi_s0->data.isop.opc && loopCond->datatype == phi_s0->datatype
                    && phi_s0->data.isop.op1 == loopCond->data.isop.op1
                    && phi_s1 == phi_s0->data.isop.op2) {
                found = 1;
            } else {
                phi_s0 = phi_s0->next;
            }

            if (found != 0) {
                break;
            }
        }
    } else {
        loopCond->data.isop.op2->count++;
        hash = isophash(condOpc, phi_s1, loopCond->data.isop.op2);
        phi_s0 = table[hash];

        //! The asm doesn't check found here, even though it could have been set
        while (phi_s0 != 0) {
            if (phi_s0->type == isop && condOpc == phi_s0->data.isop.opc && loopCond->datatype == phi_s0->datatype
                    && phi_s1 == phi_s0->data.isop.op1
                    && phi_s0->data.isop.op2 == loopCond->data.isop.op2) {
                found = true;
            } else {
                phi_s0 = phi_s0->next;
            }
            if (found) {
                break;
            }
        }
    }

    if (!found) {
        sp48 = appendchain(hash);
        sp48->type = isop;
        sp48->data.isop.opc = condOpc;
        sp48->datatype = loopCond->datatype;
        sp48->data.isop.datatype = loopCond->data.isop.datatype;
        if (inc_var_op1) {
            sp48->data.isop.op2 = phi_s1;
            sp48->data.isop.op1 = loopCond->data.isop.op1;
        } else {
            sp48->data.isop.op1 = phi_s1;
            sp48->data.isop.op2 = loopCond->data.isop.op2;
        }

        sp48->data.isop.aux2.v1.overflow_attr = 0;
        sp48->count = 1;
        sp48->data.isop.temploc = 0;
        sp48->visited = 0;
        sp48->unk4 = 0;
        sp48->data.isop.aux.unk38_trep = NULL;
        sp48->data.isop.aux2.unk3C_trep = NULL;
        sp48->graphnode = body;
        if (loopCond->data.isop.aux.unk38_trep->ichain) {
            sp56 = bvectin(loopCond->data.isop.aux.unk38_trep->ichain->bitpos, &body->bvs.stage1.antlocs);
            sp55 = bvectin(loopCond->data.isop.aux.unk38_trep->ichain->bitpos, &body->bvs.stage1.avlocs);
            resetbit(&body->bvs.stage1.u.precm.expoccur, loopCond->data.isop.aux.unk38_trep->ichain->bitpos);
            resetbit(&body->bvs.stage1.antlocs, loopCond->data.isop.aux.unk38_trep->ichain->bitpos);
            resetbit(&body->bvs.stage1.avlocs, loopCond->data.isop.aux.unk38_trep->ichain->bitpos);
        }

        if (loopCond->data.isop.aux2.unk3C_trep->ichain != 0) {
            sp54 = bvectin(loopCond->data.isop.aux2.unk3C_trep->ichain->bitpos, &body->bvs.stage1.antlocs);
            sp53 = bvectin(loopCond->data.isop.aux2.unk3C_trep->ichain->bitpos, &body->bvs.stage1.avlocs);
            resetbit(&body->bvs.stage1.u.precm.expoccur, loopCond->data.isop.aux2.unk3C_trep->ichain->bitpos);
            resetbit(&body->bvs.stage1.antlocs, loopCond->data.isop.aux2.unk3C_trep->ichain->bitpos);
            resetbit(&body->bvs.stage1.avlocs, loopCond->data.isop.aux2.unk3C_trep->ichain->bitpos);
        }

        sp48->data.isop.available = loopCond->data.isop.available;
        sp48->data.isop.anticipated = loopCond->data.isop.anticipated;
        phi_s0 = sp48;
    } else {
        increasecount(phi_s0);
    }

    if ((loopCond->data.isop.opc == Ules && loop_if_true != 0)
            || (loopCond->data.isop.opc == Ugeq && loop_if_true == 0)) {
        phi_s3_2 = phi_s1->ichain;
    } else {
        sp58 = isearchloop(isconstihash(incre), sp78, NULL, NULL);
        phi_s3_2 = isearchloop(isopihash(Uadd, phi_s3->ichain, sp58), phi_s1, phi_s3->ichain, sp58);
        if (phi_s1->data.isop.anticipated) {
            setbit(&body->bvs.stage1.antlocs, phi_s3_2->bitpos);
        }
        if (phi_s1->data.isop.available) {
            setbit(&body->bvs.stage1.avlocs, phi_s3_2->bitpos);
        }
        if (!phi_s1->data.isop.anticipated || phi_s1->data.isop.available) {
            setbit(&body->bvs.stage1.alters, phi_s3_2->bitpos);
        }
        setbit(&body->bvs.stage1.u.precm.expoccur, phi_s3_2->bitpos);
    }

    if (inc_var_op1) {
        temp_s1_2 = isearchloop(isopihash(condOpc, loopCond->ichain->isop.op1, phi_s3_2), phi_s0, loopCond->ichain->isop.op1, phi_s3_2);
    } else {
        temp_s1_2 = isearchloop(isopihash(condOpc, phi_s3_2, loopCond->ichain->isop.op2), phi_s0, phi_s3_2, loopCond->ichain->isop.op2);
    }

    if (phi_s0->data.isop.anticipated) {
        setbit(&body->bvs.stage1.antlocs, temp_s1_2->bitpos);
    }
    if (phi_s0->data.isop.available) {
        setbit(&body->bvs.stage1.avlocs, temp_s1_2->bitpos);
    }
    if (!phi_s0->data.isop.anticipated || phi_s0->data.isop.available) {
        setbit(&body->bvs.stage1.alters, temp_s1_2->bitpos);
    }

    setbit(&body->bvs.stage1.u.precm.expoccur, temp_s1_2->bitpos);
    trep_image(phi_s0, true,  sp56, sp55, true);
    trep_image(phi_s0, false, sp54, sp53, true);
    return phi_s0;
}

/*
004713E8 loopunroll
*/
void del_orig_cond(struct Expression *loopCond, struct Graphnode *body) {
    if (loopCond->count == 1) {
        if (loopCond->data.isop.anticipated) {
            resetbit(&body->bvs.stage1.antlocs, loopCond->ichain->bitpos);
        }

        if (loopCond->data.isop.available) {
            resetbit(&body->bvs.stage1.avlocs, loopCond->ichain->bitpos);
        }
        checkexpoccur(loopCond->ichain, body);
    }
    decreasecount(loopCond);
}

/*
0046D428 oneloopblockexpr
0046E77C oneloopblockstmt
*/
struct Expression *unroll_searchloop(unsigned short tableIdx, struct Expression *expr, struct Expression *arg3, struct Expression *arg4) {
    bool sp33; // t0
    bool sp32; // t1, killed?
    bool sp31;
    bool veqv;
    struct Expression *phi_s0;

    phi_s0 = table[tableIdx];
    sp31 = false;
    veqv = false;
    if (expr->datatype == Sdt && expr->type != isconst) {
        if (expr->type != isvar && expr->type != issvar) {
            phi_s0 = NULL;
        } else if (int_reg_size < expr->data.isvar_issvar.size) {
            veqv = true;
        }
    }

    sp33 = false;
    sp32 = false;
    while (!sp33 && !veqv && phi_s0 != NULL) {
        if (phi_s0->type == isop || phi_s0->type == isilda) {
            if (curgraphnode != phi_s0->graphnode) {
                goto next;
            }
        }

        // dumped, isrconst, empty, islda, isconst
        switch (expr->type) {
            case isilda:
                if (phi_s0->type == isilda
                        && expr->data.islda_isilda.offset == phi_s0->data.islda_isilda.offset
                        && expr->data.islda_isilda.size == phi_s0->data.islda_isilda.size
                        && addreq(phi_s0->data.islda_isilda.address, expr->data.islda_isilda.address)) {
                    sp33 = true;
                }
                break;

            case isvar:
            case issvar:
                if (phi_s0->type == expr->type && addreq(phi_s0->data.isvar_issvar.location, expr->data.isvar_issvar.location)) {
                    if (phi_s0->data.isvar_issvar.veqv) {
                        veqv = true;
                        break;
                    }

                    sp33 = curgraphnode == phi_s0->graphnode && !phi_s0->killed;
                    if (phi_s0->data.isvar_issvar.vreg) {
                        sp31 = true;
                    }
                    if (!sp33) {
                        if (curgraphnode == phi_s0->graphnode) {
                            sp32 = true;
                        }
                    }
                }
                break;

            case isop:
                if (phi_s0->type != isop) {
                    break;
                }
                if (phi_s0->data.isop.opc != expr->data.isop.opc) {
                    break;
                }

                switch (expr->data.isop.opc) {
                    case Uadd:
                    case Umpy:
                    case Uand:
                    case Uior:
                    case Uxor:
                    case Uint:
                    case Uuni:
                        if (phi_s0->datatype == expr->datatype) {
                            if ((arg3 == phi_s0->data.isop.op1 && arg4 == phi_s0->data.isop.op2) ||
                                (arg4 == phi_s0->data.isop.op1 && arg3 == phi_s0->data.isop.op2)) {
                                if (expr->data.isop.aux2.v1.overflow_attr == phi_s0->data.isop.aux2.v1.overflow_attr) {
                                    sp33 = true;
                                }
                            }
                        }
                        break;

                    case Uequ:
                    case Uneq:
                        if (phi_s0->datatype == expr->datatype) {
                            if ((arg3 == phi_s0->data.isop.op1 && arg4 == phi_s0->data.isop.op2) ||
                                (arg4 == phi_s0->data.isop.op1 && arg3 == phi_s0->data.isop.op2)) {
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
                        if (phi_s0->datatype == expr->datatype) {
                            if (arg3 == phi_s0->data.isop.op1 && arg4 == phi_s0->data.isop.op2) {
                                if (phi_s0->data.isop.aux2.v1.overflow_attr == expr->data.isop.aux2.v1.overflow_attr) {
                                    sp33 = true;
                                }
                            }
                        }
                        break;

                    case Ugeq:
                    case Ugrt:
                    case Uleq:
                    case Ules:
                        if (phi_s0->datatype == expr->datatype) {
                            if (arg3 == phi_s0->data.isop.op1 && arg4 == phi_s0->data.isop.op2) {
                                sp33 = true;
                            }
                        }
                        break;

                    case Uinn:
                        if (phi_s0->datatype == expr->datatype) {
                            if (arg3 == phi_s0->data.isop.op1 && arg4 == phi_s0->data.isop.op2) {
                                if (expr->data.isop.aux2.v1.unk3C == phi_s0->data.isop.aux2.v1.unk3C) {
                                    sp33 = true;
                                }
                            }
                        }
                        break;

                    case Uixa:
                        if (phi_s0->datatype == expr->datatype) {
                            if (arg3 == phi_s0->data.isop.op1 && arg4 == phi_s0->data.isop.op2) {
                                if (expr->data.isop.datasize == phi_s0->data.isop.datasize) {
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
                        if (phi_s0->datatype == expr->datatype) {
                            if (arg3 == phi_s0->data.isop.op1) {
                                if (expr->data.isop.aux2.v1.overflow_attr == phi_s0->data.isop.aux2.v1.overflow_attr) {
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
                        if (phi_s0->datatype == expr->datatype) {
                            if (arg3 == phi_s0->data.isop.op1) {
                                if (expr->data.isop.datasize == phi_s0->data.isop.datasize
                                && expr->data.isop.aux2.v1.overflow_attr == phi_s0->data.isop.aux2.v1.overflow_attr) {
                                    sp33 = true;
                                }
                            }
                        }
                        break;

                    case Ucvt:
                    case Urnd:
                    case Utyp:
                        if (phi_s0->datatype == expr->datatype
                                && expr->data.isop.aux.cvtfrom == phi_s0->data.isop.aux.cvtfrom
                                && arg3 == phi_s0->data.isop.op1
                                && expr->data.isop.aux2.v1.overflow_attr == phi_s0->data.isop.aux2.v1.overflow_attr) {
                            sp33 = true;
                        }
                        break;

                    case Uadj:
                        if (expr->data.isop.datasize == phi_s0->data.isop.datasize
                                && expr->data.isop.aux2.v1.unk3C == phi_s0->data.isop.aux2.v1.unk3C
                                && arg3 == phi_s0->data.isop.op1) {
                            sp33 = true;
                        }
                        break;

                    case Uchkn:
                        if (arg3 == phi_s0->data.isop.op1) {
                            sp33 = true;
                        }
                        break;

                    case Uilod:
                    case Uirld:
                        if (phi_s0->datatype == expr->datatype
                                && arg3 == phi_s0->data.isop.op1
                                && expr->data.isop.datasize == phi_s0->data.isop.datasize
                                && expr->data.isop.aux2.v1.unk3C == phi_s0->data.isop.aux2.v1.unk3C) {
                            sp33 = !phi_s0->killed;
                            if (sp33 == 0) {
                                sp32 = true;
                            }
                        }
                        break;

                    case Uildv:
                    case Uirlv:
                        while (phi_s0->next != NULL) {
                            phi_s0 = phi_s0->next;
                        }
                        break;

                    case Uiequ:
                    case Uineq:
                        if ((arg3 == phi_s0->data.isop.op1 && arg4 == phi_s0->data.isop.op2) ||
                            (arg4 == phi_s0->data.isop.op1 && arg3 == phi_s0->data.isop.op2)) {
                            if (expr->data.isop.datasize == phi_s0->data.isop.datasize) {
                                sp33 = !phi_s0->killed;
                                if (!sp33) {
                                    sp32 = true;
                                }
                            }
                        }
                        break;

                    case Uigeq:
                    case Uigrt:
                    case Uileq:
                    case Uiles:
                        if (arg3 == phi_s0->data.isop.op1
                                && arg4 == phi_s0->data.isop.op2
                                && expr->data.isop.datasize == phi_s0->data.isop.datasize) {
                            sp33 = !phi_s0->killed;
                            if (!sp33) {
                                sp32 = true;
                            }
                        }
                        break;

                    default:
                        caseerror(1, 407, "uoptroll.p", 10);
                        break;
                }
                break;

            default:
                caseerror(1, 390, "uoptroll.p", 10);
                break;
        }

next:
        if (!sp33) {
            phi_s0 = phi_s0->next;
        }
    }

    if (!sp33 || veqv) {
        phi_s0 = appendchain(tableIdx);
        phi_s0->graphnode = curgraphnode;
        if (expr->type == isvar || expr->type == issvar) {
            phi_s0->data.isvar_issvar.veqv = veqv;
            phi_s0->data.isvar_issvar.vreg = !veqv && sp31;
        }

        if (sp32) {
            phi_s0->initialVal = false;
        } else if (expr->type == isvar || expr->type == issvar ||
                (expr->type == isop &&
                 (expr->data.isop.opc == Uiequ ||
                  expr->data.isop.opc == Uigeq ||
                  expr->data.isop.opc == Uigrt ||
                  expr->data.isop.opc == Uileq ||
                  expr->data.isop.opc == Uiles ||
                  expr->data.isop.opc == Uineq ||
                  expr->data.isop.opc == Uilod ||
                  expr->data.isop.opc == Uildv ||
                  expr->data.isop.opc == Uirld ||
                  expr->data.isop.opc == Uirlv))) {
            phi_s0->initialVal = true;
        }
    }
    return phi_s0;
}

/*
0046D428 oneloopblockexpr
0046E77C oneloopblockstmt
004704B0 termination_test
004713E8 loopunroll
004737E0 par_to_str
00473F04 pmov_to_mov
*/
struct Expression *unroll_resetincr(struct Expression *expr, int spCC) {
    if (spCC != 0) {
        return binopwithconst(Uadd, expr, spCC);
    } else {
        return expr;
    }
}

/*
0046D428 oneloopblockexpr
0046E77C oneloopblockstmt
*/
struct Expression *unroll_resetincr_mod(struct Expression *expr, int *incr) {

    //! why not incr > 0x8000 (or incr <= -0x8000)?
    if (*incr < -0x8000 || *incr >= 0x8000) {
        *incr = *incr - (*incr & 0xFFFF8000);
        expr = binopwithconst(Uadd, expr, (*incr & 0xFFFF8000));
    }
    return expr;
}

/*
0046D428 oneloopblockexpr
*/
bool unroll_check_istr_propcopy(struct Expression *arg1, int arg2, Datatype dtype, int unk3C, struct Expression **expr) {
    struct Statement *store;
    struct VarAccessList *phi_s0;
    struct Expression *phi_v1;

    phi_s0 = curgraphnode->varlisttail;
    while (phi_s0 != NULL) {
        if (phi_s0->type == islda) {
            store = phi_s0->data.store;
            if (store->opc == Uistr && arg1 == store->expr && arg2 == store->u.store.u.istr.offset && store->u.store.store_av && dtype == store->u.store.u.istr.dtype && unk3C == store->u.store.size && !treekilled(store->u.store.expr)) {
                decreasecount(arg1);
                phi_v1 = phi_s0->data.store->u.store.expr;

                if (phi_v1->type == isvar || phi_v1->type == isop || phi_v1->type == isilda || phi_v1->type == issvar) {
                    phi_v1->count++;
                }
                *expr = phi_v1;
                return true;
            }
        }
        phi_s0 = phi_s0->prev;
    }
    return false;
}

/*
unused
*/
bool unroll_check_irst_propcopy(struct Expression *arg1, int arg2, Datatype dtype, int unk3C, struct Expression **expr) {
    struct Statement *store;
    struct VarAccessList *phi_s0;
    struct Expression *phi_v1;

    phi_s0 = curgraphnode->varlisttail;
    while (phi_s0 != NULL) {
        if (phi_s0->type == islda) {
            store = phi_s0->data.store;
            if (store->opc == Uirst && arg1 == store->expr && arg2 == store->u.store.u.istr.offset && store->u.store.store_av && dtype == store->u.store.u.istr.dtype && unk3C == store->u.store.size && !treekilled(store->u.store.expr)) {
                decreasecount(arg1);
                phi_v1 = phi_s0->data.store->u.store.expr;

                if (phi_v1->type == isvar || phi_v1->type == isop || phi_v1->type == isilda || phi_v1->type == issvar) {
                    phi_v1->count++;
                }
                *expr = phi_v1;
                return true;
            }
        }
        phi_s0 = phi_s0->prev;
    }
    return false;
}

/*
0046D428 oneloopblockexpr
0046E77C oneloopblockstmt
004704B0 termination_test
004713E8 loopunroll
004737E0 par_to_str
00473F04 pmov_to_mov
*/
struct Expression *oneloopblockexpr(struct Expression *expr, int *arg1) {
    struct Expression *sp60;
    struct Expression *sp5C;
    struct Expression *sp58;
    int sp54 = 0;
    int sp50 = 0;
    int sp4C;
    struct Expression *temp_a0_2;

    switch (expr->type) {
        case isvar:
        case issvar:
            if (expr->type == issvar) {
                sp5C = oneloopblockexpr(expr->data.isvar_issvar.outer_stack, &sp54);
            }
            sp60 = unroll_searchloop(expr->table_index, expr, NULL, NULL);

            if (sp60->type == empty) {
                sp60->type = expr->type;
                sp60->data.isvar_issvar.location = expr->data.isvar_issvar.location;
                sp60->data.isvar_issvar.assignment = NULL;
                sp60->datatype = expr->datatype;
                sp60->data.isvar_issvar.size = expr->data.isvar_issvar.size;
                sp60->count = 0;
                sp60->data.isvar_issvar.copy = NULL;
                if (expr->type == issvar) {
                    sp60->data.isvar_issvar.temploc = 0;
                    sp60->unk4 = 0;
                    sp60->visited = 0;
                    sp60->data.isvar_issvar.outer_stack = sp5C;
                } else {
                    sp60->data.isvar_issvar.outer_stack = NULL;
                }

                if (sp60->data.isvar_issvar.veqv == 0) {
                    sp60->killed = 0;
                    if (sp60->initialVal && !sp60->data.isvar_issvar.vreg) {
                        sp60->initialVal = !varkilled(sp60, curgraphnode->varlisthead);
                    }
                } else {
                    sp60->killed = 1;
                    sp60->initialVal = 0;
                }
                sp60->data.isvar_issvar.is_volatile = expr->data.isvar_issvar.is_volatile;
            }

            if (sp60->data.isvar_issvar.assignment == NULL || !sp60->data.isvar_issvar.assignment->u.store.store_av) {
                increasecount(sp60);
                if (!sp60->data.isvar_issvar.vreg) {
                    lodkillprev(sp60);
                }
                if (sp60->count == 1 && sp60->data.isvar_issvar.location.memtype != Amt) {
                    appendbbvarlst(sp60);
                    if (sp60->data.isvar_issvar.vreg) {
                        curgraphnode->varlisttail->unk8 = 1;
                    }
                }
            } else {
                sp60->data.isvar_issvar.assignment->u.store.lval_av = false;
                if (sp60->count == 0) {
                    if (!sp60->data.isvar_issvar.vreg) {
                        lodkillprev(sp60);
                    }
                    if (sp60->data.isvar_issvar.location.memtype != 5) {
                        appendbbvarlst(sp60);
                        if (sp60->data.isvar_issvar.vreg) {
                            curgraphnode->varlisttail->unk8 = 1;
                        }
                    }
                }
                increasecount(sp60);
            }

            if (expr->ichain == i_var_inx) {
                *arg1 = incr_amount;
            } else {
                *arg1 = 0;
            }
            return sp60;

        case isilda:
            sp5C = oneloopblockexpr(expr->data.islda_isilda.outer_stack, &sp54);
            sp60 = unroll_searchloop(expr->table_index, expr, sp5C, NULL);
            if (sp60->type == empty) {
                sp60->type = isilda;
                sp60->unk4 = 0;
                sp60->visited = 0;
                sp60->count = 1;
                sp60->datatype = Adt;
                sp60->data.islda_isilda.address = expr->data.islda_isilda.address;
                sp60->data.islda_isilda.offset = expr->data.islda_isilda.offset;
                sp60->data.islda_isilda.size = expr->data.islda_isilda.size;
                sp60->var_access_list = NULL;
                sp60->data.islda_isilda.outer_stack = sp5C;
                sp60->data.islda_isilda.temploc = NULL;
            } else {
                increasecount(sp60);
            }
            *arg1 = 0;
            return sp60;

        case islda:
        case isconst:
        case isrconst:
            *arg1 = 0;
            return expr;

        case isop:
            switch (expr->data.isop.opc) {
                case Uadd:
                case Uand:
                case Ubsub:
                case Udif:
                case Udiv:
                case Uequ:
                case Ugeq:
                case Ugrt:
                case Uinn:
                case Uint:
                case Uior:
                case Uleq:
                case Ules:
                case Umax:
                case Umin:
                case Umod:
                case Umpy:
                case Umus:
                case Uneq:
                case Urem:
                case Ushl:
                case Ushr:
                case Usign:
                case Usub:
                case Uuni:
                case Uxor:
                    if ((expr->data.isop.opc == Uadd || expr->data.isop.opc == Usub) &&
                       (expr->datatype == Adt || expr->datatype == Hdt || expr->datatype == Jdt || expr->datatype == Ldt)) {

                        if (expr->data.isop.op1->type == isconst && expr->data.isop.opc == Uadd) {
                            sp60 = oneloopblockexpr(expr->data.isop.op2, &sp50);
                            *arg1 = expr->data.isop.op1->data.isconst.number.intval + sp50;
                            return sp60;
                        }

                        if (expr->data.isop.op2->type == isconst) {
                            sp60 = oneloopblockexpr(expr->data.isop.op1, &sp54);
                            if (expr->data.isop.opc != Uadd) {
                                *arg1 = sp54 - expr->data.isop.op2->data.isconst.number.intval;
                            } else {
                                *arg1 = (expr->data.isop.op2->data.isconst.number.intval + sp54);
                            }
                            return sp60;
                        }

                        sp5C = oneloopblockexpr(expr->data.isop.op1, &sp54);
                        sp58 = oneloopblockexpr(expr->data.isop.op2, &sp50);
                        if (expr->data.isop.opc == Uadd) {
                            *arg1 = sp54 + sp50;
                        } else {
                            *arg1 = sp54 - sp50;
                        }
                    } else {
                        sp5C = oneloopblockexpr(expr->data.isop.op1, &sp54);
                        sp58 = oneloopblockexpr(expr->data.isop.op2, &sp50);
                        if ((expr->data.isop.opc == Umpy && (expr->datatype == Jdt || expr->datatype == Ldt))
                                && ((sp54 != 0 && expr->data.isop.op2->type == isconst) ||
                                    (sp50 != 0 && expr->data.isop.op1->type == isconst))) {
                            if (sp54 != 0) {
                                *arg1 = sp54 * expr->data.isop.op2->data.isconst.number.intval;
                            } else {
                                *arg1 = sp50 * expr->data.isop.op1->data.isconst.number.intval;
                            }
                        } else {
                            if ((expr->data.isop.opc == Uequ ||
                                        expr->data.isop.opc == Ugeq ||
                                        expr->data.isop.opc == Ugrt ||
                                        expr->data.isop.opc == Uleq ||
                                        expr->data.isop.opc == Ules ||
                                        expr->data.isop.opc == Uneq) &&
                                    expr->datatype == Jdt) {
                                sp58 = unroll_resetincr(sp58, sp50 - sp54);
                            } else {
                                sp5C = unroll_resetincr(sp5C, sp54);
                                sp58 = unroll_resetincr(sp58, sp50);
                            }
                            *arg1 = 0;
                        }
                    }

                    sp60 = unroll_searchloop(isophash(expr->data.isop.opc, sp5C, sp58), expr, sp5C, sp58);
                    if (sp60->type == empty) {
                        sp60->type = isop;
                        sp60->datatype = expr->datatype;
                        sp60->data.isop.datatype = expr->data.isop.datatype;
                        sp60->data.isop.opc = expr->data.isop.opc;
                        sp60->data.isop.op1 = sp5C;
                        sp60->data.isop.op2 = sp58;
                        if (expr->data.isop.opc == Udif ||
                                expr->data.isop.opc == Uinn ||
                                expr->data.isop.opc == Uint ||
                                expr->data.isop.opc == Umus ||
                                expr->data.isop.opc == Uuni) {
                            sp60->data.isop.datasize = expr->data.isop.datasize;
                        }
                        if (expr->data.isop.opc == Uinn) {
                            sp60->data.isop.aux2.v1.unk3C = expr->data.isop.aux2.v1.unk3C;
                        }
                        sp60->data.isop.temploc = 0;
                        sp60->unk4 = 0;
                        sp60->visited = 0;
                        sp60->count = 1;
                        sp60->data.isop.aux2.v1.overflow_attr = expr->data.isop.aux2.v1.overflow_attr;
                        if (expr->data.isop.opc == Uequ ||
                                expr->data.isop.opc == Ugeq ||
                                expr->data.isop.opc == Ugrt ||
                                expr->data.isop.opc == Uleq ||
                                expr->data.isop.opc == Ules ||
                                expr->data.isop.opc == Uneq) {
                            sp60->data.isop.aux.unk38_trep = NULL;
                            sp60->data.isop.aux2.unk3C_trep = NULL;
                        }
                    } else {
                        incroccurrence(&sp60);
                    }
                    return sp60;

                case Uixa:
                    sp5C = oneloopblockexpr(expr->data.isop.op1, &sp54);
                    sp58 = oneloopblockexpr(expr->data.isop.op2, &sp50);
                    *arg1 = (sp54 + (sp50 * expr->data.isop.datasize));
                    sp60 = unroll_searchloop(isophash(Uixa, sp5C, sp58), expr, sp5C, sp58);
                    if (sp60->type == empty) {
                        sp60->type = isop;
                        sp60->datatype = expr->datatype;
                        sp60->data.isop.datatype = expr->data.isop.datatype;
                        sp60->data.isop.opc = expr->data.isop.opc;
                        sp60->data.isop.op1 = sp5C;
                        sp60->data.isop.aux2.v1.overflow_attr = 0;
                        sp60->data.isop.op2 = sp58;
                        sp60->data.isop.temploc = 0;
                        sp60->unk4 = 0;
                        sp60->visited = 0;
                        sp60->count = 1;
                        sp60->data.isop.datasize = expr->data.isop.datasize;
                    } else {
                        incroccurrence(&sp60);
                    }
                    return sp60;

                case Uabs:
                case Uchkh:
                case Uchkl:
                case Uchkn:
                case Ucvt:
                case Ucvtl:
                case Udec:
                case Uinc:
                case Ulnot:
                case Uneg:
                case Unot:
                case Uodd:
                case Urnd:
                case Usgs:
                case Usqr:
                case Usqrt:
                case Utyp:
                    expr->data.isop.opc = expr->data.isop.opc;
                    sp5C = oneloopblockexpr(expr->data.isop.op1, &sp54);
                    if (expr->data.isop.opc != Udec && expr->data.isop.opc != Uinc) {
                        sp5C = unroll_resetincr(sp5C, sp54);
                        *arg1 = 0;
                    } else if (expr->data.isop.opc == Uinc) {
                        *arg1 = sp54;
                    } else {
                        *arg1 = -sp54;
                    }

                    sp60 = unroll_searchloop(expr->table_index, expr, sp5C, NULL);
                    if (sp60->type == empty) {
                        sp60->type = isop;
                        sp60->datatype = expr->datatype;
                        sp60->data.isop.datatype = expr->data.isop.datatype;
                        if (expr->data.isop.opc == Ucvt ||
                                expr->data.isop.opc == Urnd ||
                                expr->data.isop.opc == Utyp) {
                            sp60->data.isop.aux.cvtfrom = expr->data.isop.aux.cvtfrom;
                        }
                        sp60->data.isop.opc = expr->data.isop.opc;
                        sp60->data.isop.op2 = NULL;
                        sp60->count = 1;
                        sp60->data.isop.op1 = sp5C;
                        if (expr->data.isop.opc == Uchkh ||
                                expr->data.isop.opc == Uchkl ||
                                expr->data.isop.opc == Ucvtl ||
                                expr->data.isop.opc == Udec  ||
                                expr->data.isop.opc == Uinc  ||
                                expr->data.isop.opc == Usgs) {
                            sp60->data.isop.datasize = expr->data.isop.datasize;
                        }
                        sp60->data.isop.temploc = 0;
                        sp60->visited = 0;
                        sp60->unk4 = 0;
                        sp60->data.isop.aux2.v1.overflow_attr = expr->data.isop.aux2.v1.overflow_attr;
                    } else {
                        incroccurrence(&sp60);
                    }
                    return sp60;

                case Uadj:
                    sp5C = oneloopblockexpr(expr->data.isop.op1, &sp54);
                    *arg1 = 0;
                    sp60 = unroll_searchloop(expr->table_index, expr, sp5C, NULL);
                    if (sp60->type == empty) {
                        sp60->type = isop;
                        sp60->datatype = expr->datatype;
                        sp60->data.isop.datatype = expr->data.isop.datatype;
                        sp60->data.isop.opc = expr->data.isop.opc;
                        sp60->data.isop.op2 = NULL;
                        sp60->data.isop.op1 = sp5C;
                        sp60->data.isop.datasize = expr->data.isop.datasize;
                        sp60->count = 1;
                        sp60->data.isop.aux2.v1.overflow_attr = 0;
                        sp60->data.isop.temploc = 0;
                        sp60->visited = 0;
                        sp60->unk4 = 0;
                        sp60->data.isop.aux2.v1.unk3C = expr->data.isop.aux2.v1.unk3C;
                    } else {
                        incroccurrence(&sp60);
                    }
                    return sp60;

                case Uildv:
                case Uilod:
                    temp_a0_2 = oneloopblockexpr(expr->data.isop.op1, &sp54);
                    sp54 += expr->data.isop.datasize;
                    sp5C = unroll_resetincr_mod(temp_a0_2, &sp54);
                    *arg1 = 0;
                    if (expr->data.isop.opc != Uilod || sp5C->count < 2 || expr->data.isop.aux2.v1.unk3C < 4 || !unroll_check_istr_propcopy(sp5C, sp54, expr->datatype, expr->data.isop.aux2.v1.unk3C, &sp60)) {
                        sp4C = expr->data.isop.datasize;
                        expr->data.isop.datasize = sp54;
                        sp60 = unroll_searchloop(opvalhash(expr->data.isop.opc, sp5C, sp54), expr, sp5C, 0);
                        expr->data.isop.datasize = sp4C;
                        if (sp60->type == empty) {
                            sp60->type = isop;
                            sp60->datatype = expr->datatype;
                            sp60->data.isop.opc = expr->data.isop.opc;
                            sp60->data.isop.datatype = expr->data.isop.datatype;
                            sp60->data.isop.op1 = sp5C;
                            sp60->data.isop.op2 = NULL;
                            sp60->count = 1;
                            sp60->data.isop.aux2.v1.overflow_attr = 0;
                            sp60->data.isop.datasize = sp54;
                            sp60->data.isop.aux2.v1.unk3C = expr->data.isop.aux2.v1.unk3C;
                            sp60->data.isop.aux2.v1.align = expr->data.isop.aux2.v1.align;
                            sp60->data.isop.temploc = 0;
                            sp60->visited = 0;
                            sp60->unk4 = 0;
                            sp60->data.isop.aux.cvtfrom = expr->data.isop.aux.cvtfrom;

                            sp60->data.isop.unk34 = findbaseaddr(sp5C);
                            if (sp60->datatype != Sdt && sp60->data.isop.opc != Uildv) {
                                sp60->killed = false;
                                if (sp60->initialVal) {
                                    sp60->initialVal = !varkilled(sp60, curgraphnode->varlisthead);
                                }
                            } else {
                                sp60->killed = true;
                                sp60->initialVal = false;
                            }
                            appendbbvarlst(sp60);
                            lodkillprev(sp60);
                        } else {
                            incroccurrence(&sp60);
                        }
                    }
                    return sp60;

                case Uirld:
                case Uirlv:
                    sp5C = unroll_resetincr(oneloopblockexpr(expr->data.isop.op1, &sp54), sp54);
                    *arg1 = 0;
                    sp60 = unroll_searchloop(opvalhash(expr->data.isop.opc, sp5C, expr->data.isop.datasize), expr, sp5C, 0);
                    if (sp60->type == empty) {
                        sp60->type = isop;
                        sp60->datatype = expr->datatype;
                        sp60->data.isop.datatype = expr->data.isop.datatype;
                        sp60->data.isop.op1 = sp5C;
                        sp60->data.isop.op2 = NULL;
                        sp60->data.isop.aux2.v1.overflow_attr = 0;
                        sp60->data.isop.opc = expr->data.isop.opc;
                        sp60->data.isop.datasize = expr->data.isop.datasize;
                        sp60->data.isop.aux2.v1.unk3C = expr->data.isop.aux2.v1.unk3C;
                        sp60->data.isop.aux2.v1.align = expr->data.isop.aux2.v1.align;
                        sp60->data.isop.temploc = 0;
                        sp60->unk4 = 0;
                        sp60->visited = 0;
                        sp60->count = 1;
                        sp60->data.isop.aux.cvtfrom = expr->data.isop.aux.cvtfrom;

                        sp60->data.isop.unk34 = findbaseaddr(sp5C);
                        if (sp60->datatype != Sdt && sp60->data.isop.opc != Uildv) {
                            sp60->killed = false;
                            if (sp60->initialVal) {
                                sp60->initialVal = !varkilled(sp60, curgraphnode->varlisthead);
                            }
                        } else {
                            sp60->killed = true;
                            sp60->initialVal = false;
                        }
                        appendbbvarlst(sp60);
                        lodkillprev(sp60);
                    } else {
                        incroccurrence(&sp60);
                    }
                    return sp60;

                case Uiequ:
                case Uigeq:
                case Uigrt:
                case Uileq:
                case Uiles:
                case Uineq:
                    sp5C = oneloopblockexpr(expr->data.isop.op1, &sp54);
                    sp58 = oneloopblockexpr(expr->data.isop.op2, &sp50);
                    sp5C = unroll_resetincr(sp5C, sp54);
                    sp58 = unroll_resetincr(sp58, sp50);
                    *arg1 = 0;
                    sp60 = unroll_searchloop(expr->table_index, expr, sp5C, sp58);
                    if (sp60->type == empty) {
                        sp60->type = isop;
                        sp60->datatype = Mdt;
                        sp60->unk4 = 0;
                        sp60->visited = 0;
                        sp60->count = 1;
                        sp60->data.isop.datatype = Jdt;
                        sp60->data.isop.opc = expr->data.isop.opc;
                        sp60->data.isop.op1 = sp5C;
                        sp60->data.isop.aux2.v1.overflow_attr = 0;
                        sp60->data.isop.op2 = sp58;
                        sp60->data.isop.datasize = expr->data.isop.datasize;
                        sp60->killed = false;
                        sp60->data.isop.temploc = 0;
                        sp60->data.isop.aux2.v1.unk3C = expr->data.isop.aux2.v1.unk3C;

                        sp60->data.isop.unk34 = findbaseaddr(sp5C);
                        sp60->data.isop.aux.unk38 = findbaseaddr(sp58);
                        if (sp60->initialVal) {
                            sp60->initialVal = !varkilled(sp60, curgraphnode->varlisthead);
                        }
                        appendbbvarlst(sp60);
                        lodkillprev(sp60);
                    } else {
                        incroccurrence(&sp60);
                    }
                    return sp60;

                default:
                    caseerror(1, 654, "uoptroll.p", 10);
                    return sp60;
            }
            return sp60;

        case empty:
        case dumped:
        default:
            caseerror(1, 567, "uoptroll.p", 10);
            break;
    }
    return sp60;
}

/*
00470048 pre_loopblock
00470248 post_loopblock
004713E8 loopunroll
004761D0 tail_recursion
*/
void oneloopblockstmt(struct Statement *stat) {
    struct Expression *sp60;
    struct Expression *sp5C;
    bool lval_ant;
    bool store_ant;
    bool sp59;
    int sp54 = 0;
    int sp50 = 0;
    struct Expression *temp_a0_4;
    struct Expression *phi_s1;
    struct Statement *s0;

    switch (stat->opc) {
        case Uisst:
        case Uistr:
        case Uistv:
        case Ustr:
        case Utpeq:
        case Utpge:
        case Utpgt:
        case Utple:
        case Utplt:
        case Utpne:
        case Uirst:
        case Uirsv:
            break;

        default:
            extendstat(stat->opc);
            break;
    }

    switch (stat->opc) {
        case Uisst:
        case Ustr:
            sp5C = oneloopblockexpr(stat->expr->data.isvar_issvar.assigned_value, &sp54);
            sp5C = unroll_resetincr(sp5C, sp54);
            sp60 = unroll_searchloop(stat->expr->table_index, stat->expr, 0, 0);
            if (sp60->type != empty) {
                if (sp60->data.isvar_issvar.assignment == NULL) {
                    sp60->killed = true;
                    phi_s1 = appendchain(sp60->table_index);
                    phi_s1->graphnode = curgraphnode;
                    phi_s1->data.isvar_issvar.vreg = sp60->data.isvar_issvar.vreg;
                    phi_s1->initialVal = false;
                    phi_s1->data.isvar_issvar.veqv = sp60->data.isvar_issvar.veqv;
                    lval_ant = false;
                    store_ant = true;
                } else if (sp60->data.isvar_issvar.assigned_value != NULL && sp60->data.isvar_issvar.assignment->u.store.lval_av) {
                    s0 = sp60->data.isvar_issvar.assignment;
                    s0->u.store.var_access_list_item->type = 0;
                    if (has_volt_ovfw(s0->expr->data.isvar_issvar.assigned_value)) {
                        s0->opc = Upop;
                        s0->u.pop.dtype = sp60->datatype;
                        s0->u.pop.unk15 = 0;
                        s0->expr = s0->expr->data.isvar_issvar.assigned_value;
                    } else {
                        decreasecount(s0->expr->data.isvar_issvar.assigned_value);
                        s0->opc = Unop;
                    }

                    phi_s1 = sp60;
                    lval_ant = s0->u.store.lval_ant;
                    store_ant = s0->u.store.store_ant;
                } else {
                    if (sp5C == sp60->data.isvar_issvar.assigned_value) {
                        decreasecount(sp5C);
                        break;
                    }

                    sp60->killed = 1;
                    sp60->data.isvar_issvar.assignment->u.store.store_av = false;
                    phi_s1 = appendchain(sp60->table_index);
                    phi_s1->graphnode = curgraphnode;
                    phi_s1->data.isvar_issvar.vreg = sp60->data.isvar_issvar.vreg;
                    phi_s1->initialVal = false;
                    phi_s1->data.isvar_issvar.veqv = sp60->data.isvar_issvar.veqv;
                    lval_ant = false;
                    store_ant = false;
                }
            } else {
                phi_s1 = sp60;
                lval_ant = true;
                store_ant = true;
            }

            if (phi_s1->type == empty) {
                phi_s1->type = stat->expr->type;
                phi_s1->data.isvar_issvar.location = stat->expr->data.isvar_issvar.location;
                phi_s1->datatype = stat->expr->datatype;
                phi_s1->data.isvar_issvar.size = stat->expr->data.isvar_issvar.size;
                phi_s1->initialVal = false;
                phi_s1->count = 0;
                phi_s1->data.isvar_issvar.copy = NULL;
                if (stat->expr->type == issvar) {
                    phi_s1->data.isvar_issvar.outer_stack = oneloopblockexpr(stat->u.store.expr, &sp54);
                    phi_s1->data.isvar_issvar.temploc = 0;
                    phi_s1->unk4 = 0;
                    phi_s1->visited = 0;
                } else {
                    phi_s1->data.isvar_issvar.outer_stack = NULL;
                }

                if (!phi_s1->data.isvar_issvar.veqv) {
                    phi_s1->killed = false;
                } else {
                    phi_s1->killed = true;
                }

                phi_s1->data.isvar_issvar.is_volatile = stat->expr->data.isvar_issvar.is_volatile;
            }

            if (phi_s1->data.isvar_issvar.veqv) {
                lval_ant = false;
                store_ant = false;
            }

            extendstat(stat->opc);
            phi_s1->data.isvar_issvar.assigned_value = sp5C;
            TRAP_IF(stat->outpar);
            stattail->outpar = false;
            if (stattail->opc == Uisst) {
                stattail->u.store.expr = phi_s1->data.isvar_issvar.outer_stack;
            }

            stattail->expr = phi_s1;
            phi_s1->data.isvar_issvar.assignment = stattail;
            if (!stattail->outpar) {
                stattail->u.store.lval_ant = lval_ant;
                if (!phi_s1->data.isvar_issvar.vreg && lval_ant) {
                    stattail->u.store.lval_ant = !strlkilled(stattail, curgraphnode->varlisthead);
                }

                stattail->u.store.store_ant = store_ant;
                if (!phi_s1->data.isvar_issvar.vreg && store_ant) {
                    stattail->u.store.store_ant = !strskilled(stattail, curgraphnode->varlisthead);
                }

                stattail->u.store.lval_av = !phi_s1->data.isvar_issvar.veqv;
                stattail->u.store.store_av = !phi_s1->data.isvar_issvar.veqv;
                stattail->is_increment = stat->is_increment;
            } else {
                stattail->u.store.lval_ant = false;
                stattail->u.store.store_ant = false;
                stattail->u.store.lval_av = false;
                stattail->u.store.store_av = false;
                stattail->is_increment = false;
            }

            stattail->u.store.u.str.unk2C = 0;
            stattail->u.store.u.str.unk30 = 0;
            stattail->suppressed_iv = 0;
            if (!phi_s1->data.isvar_issvar.vreg) {
                strkillprev(stattail);
            }

            appendstorelist();

            if (phi_s1->data.isvar_issvar.vreg) {
                curgraphnode->varlisttail->unk8 = 1;
            }
            break;

        case Uchkt:
            stattail->expr = oneloopblockexpr(stat->expr, &sp54);
            stattail->expr = unroll_resetincr(stattail->expr, sp54);
            stattail->u.trap.unk18 = 0;
            break;

        case Uaos:
            stattail->expr = oneloopblockexpr(stat->expr, &sp54);
            stattail->expr = unroll_resetincr(stattail->expr, sp54);
            break;

        case Ulab:
            stattail->u.label.flags = stat->u.label.flags;
            stattail->u.label.length = stat->u.label.length;
            stattail->u.label.blockno = stat->u.label.blockno;
            break;

        case Uistr:
        case Uistv:
            sp60 = oneloopblockexpr(stat->u.store.expr, &sp54);
            sp60 = unroll_resetincr(sp60, sp54);
            temp_a0_4 = oneloopblockexpr(stat->expr, &sp54);
            sp54 += stat->u.store.u.istr.offset;
            phi_s1 = unroll_resetincr_mod(temp_a0_4, &sp54);
            sp59 = false;
            if (stat->opc == Uistr) {
                s0 = curgraphnode->stat_head;
                while (s0 != NULL && !sp59) {
                    if (s0->opc == Uistr
                            && phi_s1 == s0->expr
                            && sp54 == s0->u.store.u.istr.offset
                            && stat->u.store.size == s0->u.store.size) {

                        if (s0->u.store.lval_av != 0) {
                            decreasecount(s0->expr);
                            decreasecount(s0->u.store.expr);
                            s0->opc = Unop;
                            s0->u.store.var_access_list_item->type = 0;
                        } else if (s0->u.store.store_av && sp60 == s0->u.store.expr) {
                            sp59 = true;
                            decreasecount(phi_s1);
                            decreasecount(sp60);
                        }
                    }
                    s0 = s0->next;
                }
            }

            if (sp59 == 0) {
                extendstat(stat->opc);
                stattail->expr = phi_s1;
                stattail->u.store.expr = sp60;
                stattail->u.store.u.istr.dtype = stat->u.store.u.istr.dtype;
                stattail->u.store.u.istr.align = stat->u.store.u.istr.align;
                stattail->u.store.u.istr.offset = sp54;
                stattail->u.store.u.istr.mtagno = stat->u.store.u.istr.mtagno;
                stattail->u.store.size = stat->u.store.size;
                stattail->u.store.baseaddr = findbaseaddr(phi_s1);

                if (stat->opc == Uistr) {
                    stattail->u.store.lval_ant = strlkilled(stattail, curgraphnode->varlisthead) == 0;
                    stattail->u.store.lval_av = 1;
                    stattail->u.store.store_ant = strskilled(stattail, curgraphnode->varlisthead) == 0;
                    stattail->u.store.store_av = 1;
                } else {
                    stattail->u.store.lval_ant = 0;
                    stattail->u.store.lval_av = 0;
                    stattail->u.store.store_ant = 0;
                    stattail->u.store.store_av = 0;
                }

                strkillprev(stattail);
                appendstorelist();
            }
            break;

        case Uirst:
        case Uirsv:
            sp60 = oneloopblockexpr(stat->u.store.expr, &sp54);
            sp60 = unroll_resetincr(sp60, sp54);
            phi_s1 = oneloopblockexpr(stat->expr, &sp54);
            phi_s1 = unroll_resetincr_mod(phi_s1, &sp54);

            extendstat(stat->opc);
            stattail->expr = phi_s1;
            stattail->u.store.expr = sp60;
            stattail->u.store.u.istr.dtype = stat->u.store.u.istr.dtype;
            stattail->u.store.u.istr.align = stat->u.store.u.istr.align;
            stattail->u.store.u.istr.offset = sp54;
            stattail->u.store.u.istr.mtagno = stat->u.store.u.istr.mtagno;
            stattail->u.store.size = stat->u.store.size;
            stattail->u.store.baseaddr = findbaseaddr(phi_s1);
            if (stat->opc == Uirst) {
                stattail->u.store.lval_ant = strlkilled(stattail, curgraphnode->varlisthead) == 0;
                stattail->u.store.lval_av = 1;
                stattail->u.store.store_ant = strskilled(stattail, curgraphnode->varlisthead) == 0;
                stattail->u.store.store_av = 1;
            } else {
                stattail->u.store.lval_ant = 0;
                stattail->u.store.lval_av = 0;
                stattail->u.store.store_ant = 0;
                stattail->u.store.store_av = 0;
            }

            strkillprev(stattail);
            appendstorelist();
            break;

        case Umov:
        case Umovv:
            stattail->expr = oneloopblockexpr(stat->expr, &sp54);
            stattail->expr = unroll_resetincr(stattail->expr, sp54);
            stattail->u.store.expr = oneloopblockexpr(stat->u.store.expr, &sp54);
            stattail->u.store.expr = unroll_resetincr(stattail->u.store.expr, sp54);
            stattail->u.store.size = stat->u.store.size;
            stattail->u.store.u.mov.src_align = stat->u.store.u.mov.src_align;
            stattail->u.store.u.mov.dst_align = stat->u.store.u.mov.dst_align;
            stattail->u.store.u.mov.baseaddr = findbaseaddr(stattail->u.store.expr);
            appendstorelist();
            stattail->u.store.var_access_list_item->type = 3;
            movkillprev(stattail);
            stattail->u.store.baseaddr = findbaseaddr(stattail->expr);
            if (stat->opc == Umov) {
                stattail->u.store.lval_ant = strlkilled(stattail, curgraphnode->varlisthead) == 0;
                stattail->u.store.store_ant = strskilled(stattail, curgraphnode->varlisthead) == 0;
                stattail->u.store.lval_av = 1;
                stattail->u.store.store_av = 1;
            } else {
                stattail->u.store.lval_ant = 0;
                stattail->u.store.lval_av = 0;
                stattail->u.store.store_ant = 0;
                stattail->u.store.store_av = 0;
            }

            strkillprev(stattail);
            appendstorelist();
            break;

        case Ustsp:
            stattail->expr = oneloopblockexpr(stat->expr, &sp54);
            stattail->expr = unroll_resetincr(stattail->expr, sp54);
            break;

        case Utpeq:
        case Utpge:
        case Utpgt:
        case Utple:
        case Utplt:
        case Utpne:
            phi_s1 = oneloopblockexpr(stat->expr, &sp54);
            sp60 = oneloopblockexpr(stat->u.trap.expr2, &sp50);

            if (stat->u.trap.dtype == Jdt
                    || (stat->u.trap.dtype == Ldt && sp54 < sp50)) {
                sp60 = unroll_resetincr(sp60, sp50 - sp54);
            } else {
                phi_s1 = unroll_resetincr(phi_s1, sp54);
                sp60 = unroll_resetincr(sp60, sp50);
            }

            sp59 = 0;
            s0 = curgraphnode->stat_head;
            while (s0 != 0 && sp59 == 0) {
                if (stat->opc == s0->opc) {
                    switch (trapstat_imply(s0, phi_s1, sp60)) {
                        case -1:
                            decreasecount(s0->expr);
                            decreasecount(s0->u.trap.expr2);
                            s0->opc = Unop;
                            break;

                        case 1:
                            sp59 = 1;
                            decreasecount(phi_s1);
                            decreasecount(sp60);
                            break;

                        default:
                            caseerror(1, 1250, "uoptroll.p", 10);
                            break;

                        case 0:
                            break;
                    }
                }
                s0 = s0->next;
            }

            if (sp59 == 0) {
                extendstat(stat->opc);
                stattail->expr = phi_s1;
                stattail->u.trap.expr2 = sp60;
                stattail->u.trap.num = stat->u.trap.num;
                stattail->u.trap.unk18 = 0;
                stattail->u.trap.dtype = stat->u.trap.dtype;
            }
            break;

        case Uloc:
            stattail->u.loc.page = stat->u.loc.page;
            stattail->u.loc.line = stat->u.loc.line;
            break;

        case Ubgnb:
        case Uendb:
            stattail->u.bgnb.blockno = stat->u.bgnb.blockno;
            break;

        case Upop:
            stattail->expr = oneloopblockexpr(stat->expr, &sp54);
            if (stat->u.pop.unk15 != 0) {
                stattail->expr = unroll_resetincr(stattail->expr, sp54);
            }

            stattail->u.pop.dtype = stat->u.pop.dtype;
            stattail->u.pop.unk15 = stat->u.pop.unk15;
            break;

        case Uujp:
            stattail->u.jp.target_blockno = stat->u.jp.target_blockno;
            break;

        case Ufjp:
        case Utjp:
            stattail->expr = oneloopblockexpr(stat->expr, &sp54);
            if (stattail->expr->type == isvar) {
                stattail->expr = binopwithconst(Uadd, stattail->expr, sp54);
            } else {
                stattail->expr = unroll_resetincr(stattail->expr, sp54);
            }

            stattail->u.jp.incre = 0;
            stattail->u.jp.target_blockno = stat->u.jp.target_blockno;
            break;

        case Uijp:
            stattail->expr = oneloopblockexpr(stat->expr, &sp54);
            stattail->expr = unroll_resetincr(stattail->expr, sp54);
            break;

        case Uxjp:
            stattail->expr = oneloopblockexpr(stat->expr, &sp54);
            if (stattail->expr->type == isvar) {
                stattail->expr = binopwithconst(Uadd, stattail->expr, sp54);
            } else {
                stattail->expr = unroll_resetincr(stattail->expr, sp54);
            }

            stattail->u.xjp.dtype = stat->u.xjp.dtype;
            stattail->u.xjp.cases_blockno = stat->u.xjp.cases_blockno;
            stattail->u.xjp.default_blockno = stat->u.xjp.default_blockno;
            stattail->u.xjp.lbound_l = stat->u.xjp.lbound_l;
            stattail->u.xjp.lbound_h = stat->u.xjp.lbound_h;
            stattail->u.xjp.hbound_l = stat->u.xjp.hbound_l;
            stattail->u.xjp.hbound_h = stat->u.xjp.hbound_h;
            stattail->u.xjp.case_stmts = stat->u.xjp.case_stmts;
            break;

        case Uclbd:
        case Ucubd:
        case Ustep:
            stattail->u.clbd_cubd_step.dtype = stat->u.clbd_cubd_step.dtype;
            stattail->u.clbd_cubd_step.unk18 = stat->u.clbd_cubd_step.unk18;
            break;

        case Uctrl:
            stattail->u.ctrl.dtype = stat->u.ctrl.dtype;
            stattail->u.ctrl.unk15 = stat->u.ctrl.unk15;
            stattail->u.ctrl.var = stat->u.ctrl.var;
            break;

        default:
            caseerror(1, 984, "uoptroll.p", 10);
            break;

        case Unop:
        case Ulend:
        case Ulbdy:
        case Ulbgn:
        case Ultrm:
        case Uret:
            break;
    }
}

/*
0046FA20 new_header_node
0046FCD4 link_jump_in_loop
004713E8 loopunroll
*/
void create_edge(struct Graphnode *from, struct Graphnode *to) {
    struct GraphnodeList *edge;

    edge = alloc_new(sizeof(struct GraphnodeList), &perm_heap);
    edge->graphnode = to;
    edge->next = from->successors;
    from->successors = edge;

    edge = alloc_new(sizeof(struct GraphnodeList), &perm_heap);
    edge->graphnode = from;
    edge->next = to->predecessors;
    to->predecessors = edge;
}

/*
0046FCD4 link_jump_in_loop
00470048 pre_loopblock
00470248 post_loopblock
004713E8 loopunroll
*/
void new_header_node(bool arg0) {
    curgraphnode = alloc_new(sizeof (struct Graphnode), &perm_heap);
    init_graphnode(curgraphnode);
    curgraphnode->terminal = true;
    curgraphnode->unk7 = 2;
    curgraphnode->num = curstaticno++;

    curgraphnode->loopdepth = loopheader->loopdepth;
    curgraphnode->unkBb8 = loopheader->unkBb8;
    curgraphnode->frequency = loopheader->frequency;
    curgraphnode->bvs.init.line = loopheader->bvs.init.line;

    curgraphnode->next = loopbody;
    curgraphnode->prev = loopbody->prev;
    loopbody->prev->next = curgraphnode;
    loopbody->prev = curgraphnode;

    curgraphnode->predecessors = NULL;
    curgraphnode->successors = NULL;

    if (arg0) {
        create_edge(loopheader, curgraphnode);
    }

    loopheader = curgraphnode;
}

/*
004713E8 loopunroll
*/
void record_labels(void) {
    struct Graphnode *node = loopbody;

    while (node != loopbodyend) {
        if (node != node->stat_tail->next->graphnode) {
            node = node->stat_tail->next->graphnode;
        } else {
            node = node->stat_tail->next->next->graphnode;
        }

        if (node->blockno != 0 && node->blockno != looplab) {
            labelmap_unused->blockno = node->blockno;
            if (labelmap_unused->next != NULL) {
                labelmap_unused = labelmap_unused->next;
            } else {
                labelmap_unused->next = alloc_new(sizeof (struct LabelMap), &perm_heap);
                labelmap_unused = labelmap_unused->next;
                labelmap_unused->next = NULL;
            }
        }
    }
}

/*
004713E8 loopunroll
*/
void new_set_of_labels(void) {
    struct LabelMap *l;

    l = labelmap_head;
    while (l != labelmap_unused) {
        maxlabnam++;
        l->unk4 = maxlabnam;
        l->graphnode = NULL;
        l = l->next;
    }

    iter_start_bb = curgraphnode;
}


/*
0046FCD4 link_jump_in_loop
*/
struct LabelMap *get_labelmap(int blockno) {
    struct LabelMap *l = labelmap_head;

    while (blockno != l->blockno) {
        l = l->next;
    }
    return l;
}

/*
00470048 pre_loopblock
00470248 post_loopblock
*/
void link_jump_in_loop(struct Statement *stat, bool arg1) {
    struct LabelMap *labelMap;
    struct Graphnode *node;

    switch (stat->opc) {
        case Utjp:
        case Uujp:
        case Ufjp:
            node = stat->graphnode->successors->graphnode;
            if (stat->u.jp.target_blockno != node->blockno) {
                node = stat->graphnode->successors->next->graphnode;
            }

            if (node->num < loopbody->num || loopbodyend->num < node->num) {
                create_edge(curgraphnode, node);
            } else {
                labelMap = get_labelmap(stat->u.jp.target_blockno);
                stattail->u.jp.target_blockno = labelMap->unk4;
                if (labelMap->graphnode != 0) {
                    create_edge(curgraphnode, labelMap->graphnode);
                }
            }
            curgraphnode->stat_tail = stattail;
            codeimage();
            new_header_node(stat->opc != Uujp);
            if (arg1) {
                curgraphnode->loop = loopbody->loop;
            } else {
                curgraphnode->loop = loopbody->loop->outer;
            }
            return;

        case Uret:
            curgraphnode->stat_tail = stattail;
            codeimage();
            new_header_node(false);
            if (arg1) {
                curgraphnode->loop = loopbody->loop;
            } else {
                curgraphnode->loop = loopbody->loop->outer;
            }
            return;

        case Ulab:
            labelMap = get_labelmap(stat->u.label.blockno);
            stattail->u.label.blockno = labelMap->unk4;
            stattail->u.label.length = 0;
            curgraphnode->blockno = labelMap->unk4;
            TRAP_IF(labelMap->graphnode != 0);
            labelMap->graphnode = curgraphnode;
            node = curgraphnode;
            while (node != iter_start_bb) {
                node = node->stat_head->prev->graphnode;
                if ((node->stat_tail->opc == Ufjp ||
                     node->stat_tail->opc == Utjp ||
                     node->stat_tail->opc == Uujp) &&
                        (labelMap->unk4 == node->stat_tail->u.jp.target_blockno)) {
                    create_edge(node, curgraphnode);
                }
            }
            return;

        default:
            caseerror(1, 1433, "uoptroll.p", 10);
            break;
    }
}

/*
004713E8 loopunroll
*/
void pre_loopblock(bool arg0, bool arg1) {
    struct Statement *stat;

    stat = loopbody->stat_head;
    while (stat != incr_stat) {
        if (stat->opc != Ulab || (stat->u.label.blockno != looplab)) {
            if (stat->opc == Ulab) {
                if (curgraphnode->stat_head != NULL) {
                    curgraphnode->stat_tail = stattail;
                    codeimage();
                    new_header_node(true);

                    if (arg1) {
                        curgraphnode->loop = loopbody->loop;
                    } else {
                        curgraphnode->loop = loopbody->loop->outer;
                    }
                }
            }

            if (arg0) {
                oneloopblockstmt(stat);
            } else {
                switch (stat->opc) {
                    case Uaos:
                    case Uchkt:
                    case Ufjp:
                    case Uisst:
                    case Uistr:
                    case Uistv:
                    case Ulab:
                    case Umov:
                    case Umovv:
                    case Upop:
                    case Uret:
                    case Ustr:
                    case Ustsp:
                    case Utjp:
                    case Utpeq:
                    case Utpge:
                    case Utpgt:
                    case Utple:
                    case Utplt:
                    case Utpne:
                    case Uujp:
                    case Uxjp:
                    case Uirst:
                    case Uirsv:
                        oneloopblockstmt(stat);
                        break;

                    default:
                        break;
                }
            }

            switch (stat->opc) {
                case Ufjp:
                case Ulab:
                case Uret:
                case Utjp:
                case Uujp:
                    link_jump_in_loop(stat, arg1);
                    break;

                    default:
                        break;
            }
        }
        stat = stat->next;
    }
}

/*
004713E8 loopunroll
*/
void post_loopblock(bool arg0, bool arg1, bool arg2) {
    struct Statement *stat;
    int i;

    stat = incr_stat->next;

    while (stat != loopbodyend->stat_tail) {
        if (stat->opc == Uclab) {
            int length = stat->u.label.length;

            for (i = 0; i < length; i++) {
                stat = stat->next;
            }
        } else {
            if (arg1 && stat->opc == Ulab) {
                if (curgraphnode->stat_head != NULL) {
                    curgraphnode->stat_tail = stattail;
                    codeimage();
                    new_header_node(true);
                    if (arg2) {
                        curgraphnode->loop = loopbody->loop;
                    } else {
                        curgraphnode->loop = loopbody->loop->outer;
                    }
                }
            }

            if (arg0) {
                oneloopblockstmt(stat);
            } else {
                switch (stat->opc) {
                    case Uaos:
                    case Uchkt:
                    case Ufjp:
                    case Uijp:
                    case Uisst:
                    case Uistr:
                    case Uistv:
                    case Ulab:
                    case Umov:
                    case Umovv:
                    case Upop:
                    case Uret:
                    case Ustr:
                    case Ustsp:
                    case Utjp:
                    case Utpeq:
                    case Utpge:
                    case Utpgt:
                    case Utple:
                    case Utplt:
                    case Utpne:
                    case Uujp:
                    case Uxjp:
                    case Uirst:
                    case Uirsv:
                        oneloopblockstmt(stat);
                        break;

                    default:
                        break;
                }
            }

            if (arg1) {
                switch (stat->opc) {
                    case Ufjp:
                    case Ulab:
                    case Uret:
                    case Utjp:
                    case Uujp:
                        link_jump_in_loop(stat, arg2);
                        break;

                    default:
                        break;
                }
            }
        }

        stat = stat->next;
    }
}

/*
004713E8 loopunroll
*/
void termination_test(struct Statement *stat_s3, int unroll_times_local) {
    int sp24;

    extendstat(stat_s3->opc);
    stattail->expr = oneloopblockexpr(stat_s3->expr, &sp24);
    stattail->expr = unroll_resetincr(stattail->expr, sp24);
    stattail->u.jp.incre = stat_s3->u.jp.incre * unroll_times_local;
    stattail->u.jp.unk20 = stat_s3->u.jp.unk20;
    stattail->u.jp.has_const_init = stat_s3->u.jp.has_const_init;
    stattail->u.jp.loop_if_true = stat_s3->u.jp.loop_if_true;
    stattail->u.jp.target_blockno = stat_s3->u.jp.target_blockno;
}

/*
00470570 expr_instr
00470698 estimate_instr
*/
int expr_instr(struct Expression *expr) {
    int ret;

    switch (expr->type) {
        default:
        case islda:
        case isvar:
        case isconst:
        case isrconst:
            return 0;
        case issvar:
            return expr_instr(expr->data.isvar_issvar.outer_stack) + 1;
        case isilda:
            return expr_instr(expr->data.islda_isilda.outer_stack) + 1;
        case isop:
            ret = expr_instr(expr->data.isop.op1) + 1;
            if (optab[expr->data.isop.opc].is_binary_op != 0) {
                ret += expr_instr(expr->data.isop.op2);
            }
            return ret;
        case dumped:
            caseerror(1, 1578, "uoptroll.p", 10);
            return 0; // originally undefined sp24
    }
}

/*
004713E8 loopunroll

Note: the asm had weird control flow. Changing ret still matches original.
*/
int estimate_instr(struct Graphnode *body, struct Graphnode *bodyend) {
    struct Statement *stat;
    int ret = 0;

    for (stat = body->stat_head; stat != bodyend->stat_tail; stat = stat->next) {
        switch (stat->opc) {
            case Umov:
            case Umovv:
                ret += 16;
                break;

            case Ustr:
                break;

            case Uret:
            case Ustsp:
            case Utjp:
            case Utpeq:
            case Utpge:
            case Utpgt:
            case Utple:
            case Utplt:
            case Utpne:
            case Uujp:
            case Uirst:
            case Uirsv:
                ret += 1;
                break;

            case Uaos:
            case Uchkt:
            case Ufjp:
            case Uisst:
            case Uistr:
            case Uistv:
                ret += 1;
                break;

            case Upop:
                break;

            default:
                continue;
        }

        if (stat->opc == Uisst || stat->opc == Ustr) {
            ret += expr_instr(stat->expr->data.isvar_issvar.assigned_value);
        } else if (stat->opc != Uret && stat->opc != Uujp) {
            ret += expr_instr(stat->expr);
        }

        switch (stat->opc) {
            case Uisst:
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
                ret += expr_instr(stat->u.store.expr);
                break;
            default:
                break;
        }
    }
    return ret;
}

/*
004713E8 loopunroll
004761D0 tail_recursion
*/
void change_adj_node(struct GraphnodeList *nodelist, struct Graphnode *from, struct Graphnode *to) {
    while (nodelist->graphnode != from) {
        nodelist = nodelist->next;
    };

    nodelist->graphnode = to;
}

/*
004713E8 loopunroll
*/
void del_adj_node(struct GraphnodeList **nodelist, struct Graphnode *source) {
    struct GraphnodeList *adjacent;
    struct GraphnodeList *curr;

    if (source == (*nodelist)->graphnode) {
        *nodelist = (*nodelist)->next;
        return;
    }

    curr = (*nodelist);
    adjacent = (*nodelist)->next;

    while (source != adjacent->graphnode) {
        curr = adjacent;
        adjacent = adjacent->next;
    }
    curr->next = adjacent->next;
}

/*
004713E8 loopunroll
*/
struct Expression *form_bop(Uopcode opc, struct Expression *left, struct Expression *right) {
    unsigned short hash;
    struct Expression *binop;
    bool found;

    hash = isophash(opc, left, right);
    binop = table[hash];
    found = false;
    while (!found && binop != NULL) {
        if (binop->type == isop && opc == binop->data.isop.opc && left->datatype == binop->datatype && left == binop->data.isop.op1 && right == binop->data.isop.op2 && binop->data.isop.aux2.v1.overflow_attr == 0) {
            found = true;
        } else {
            binop = binop->next;
        }
    }

    if (!found) {
        binop = appendchain(hash);
        binop->type = isop;
        binop->data.isop.opc = opc;
        binop->datatype = left->datatype;
        if (left->type != isop) {
            binop->data.isop.datatype = left->datatype;
        } else {
            binop->data.isop.datatype = left->data.isop.datatype;
        }
        binop->data.isop.op1 = left;
        binop->data.isop.op2 = right;
        binop->data.isop.aux2.v1.overflow_attr = 0;
        binop->data.isop.temploc = 0;
        binop->unk4 = 0;
        binop->visited = 0;
        binop->count = 1;
        binop->graphnode = curgraphnode;

        if (opc == Uneq) {
            binop->data.isop.aux.unk38_trep = NULL;
            binop->data.isop.aux2.unk3C_trep = NULL;
        }
    } else {
        increasecount(binop);
    }
    return binop;
}

/*
004713E8 loopunroll
*/
struct Expression *form_rem(struct Expression *expr, int arg1) {
    struct Expression *sp34;
    struct Expression *sp30;
    bool found;
    unsigned short temp_a0;
    unsigned short temp_a0_2;
    int phi_a3;
    Uopcode rem_opc;

    if (is_power2(arg1) != 0) {
        phi_a3 = arg1 - 1;
        rem_opc = Uand;
    } else {
        phi_a3 = arg1;
        rem_opc = Urem;
    }
    sp30 = enter_const(phi_a3, expr->datatype, curgraphnode);
    temp_a0 = isophash(rem_opc, expr, sp30);
    sp34 = table[temp_a0];
    found = 0;
    while (!found && sp34 != 0) {
        if (sp34->type == isop
                && sp34->data.isop.opc == rem_opc
                && sp34->datatype == expr->datatype
                && sp34->data.isop.op1 == expr
                && sp34->data.isop.op2 == sp30) {
            found = 1;
        } else {
            sp34 = sp34->next;
        }
    }

    if (found == 0) {
        sp34 = appendchain(temp_a0);
        sp34->type = isop;
        sp34->data.isop.opc = rem_opc;
        sp34->datatype = expr->datatype;
        if (expr->type != isop) {
            sp34->data.isop.datatype = expr->datatype;
        } else {
            sp34->data.isop.datatype = expr->data.isop.datatype;
        }
        sp34->data.isop.op1 = expr;
        sp34->data.isop.op2 = sp30;
        sp34->count = 1;
        sp34->data.isop.aux2.v1.overflow_attr = 0;
        sp34->data.isop.temploc = 0;
        sp34->visited = 0;
        sp34->unk4 = 0;
        sp34->graphnode = curgraphnode;
    } else {
        increasecount(sp34);
    }

    if (sp34->datatype == Ldt || rem_opc != Urem) {
        return sp34;
    } else {
        found = 0;
        temp_a0_2 = isophash(Ucvt, sp34, NULL);
        sp30 = table[temp_a0_2];
        while (!found && sp30 != 0) {
            if (sp30->type == isop && sp30->data.isop.opc == Ucvt && sp30->datatype == Ldt && sp34->datatype == sp30->data.isop.aux.cvtfrom && sp34 == sp30->data.isop.op1) {
                found = true;
            } else {
                sp30 = sp30->next;
            }
        }

        if (!found) {
            sp30 = appendchain(temp_a0_2);
            sp30->type = isop;
            sp30->data.isop.opc = Ucvt;
            sp30->datatype = Ldt;
            sp30->data.isop.datatype = Ldt;
            sp30->data.isop.op1 = sp34;
            sp30->data.isop.op2 = NULL;
            sp30->data.isop.aux.cvtfrom = sp34->datatype;
            sp30->count = 1;
            sp30->data.isop.aux2.v1.overflow_attr = 0;
            sp30->data.isop.temploc = 0;
            sp30->visited = 0;
            sp30->unk4 = 0;
            sp30->graphnode = curgraphnode;
        } else {
            increasecount(sp30);
        }
        return sp30;
    }
}

/*
004713E8 loopunroll
*/
struct Expression *form_neq0(struct Expression *expr) {
    unsigned short hash;
    struct Expression *neq0;
    struct Expression *zero;
    bool found;

    zero = enter_const(0, expr->datatype, curgraphnode);
    hash = isophash(Uneq, expr, zero);
    neq0 = table[hash];

    found = false;
    while (!found && neq0 != NULL) {
        if (neq0->type == isop
                && neq0->data.isop.opc == Uneq
                && neq0->datatype == expr->datatype
                && neq0->data.isop.op1 == expr
                && neq0->data.isop.op2 == zero) {
            found = true;
        } else {
            neq0 = neq0->next;
        }
    }

    if (!found) {
        neq0 = appendchain(hash);
        neq0->type = isop;
        neq0->data.isop.opc = Uneq;
        neq0->datatype = expr->datatype;
        if (expr->type != isop) {
            neq0->data.isop.datatype = expr->datatype;
        } else {
            neq0->data.isop.datatype = expr->data.isop.datatype;
        }
        neq0->data.isop.op1 = expr;
        neq0->data.isop.op2 = zero;
        neq0->data.isop.aux2.v1.overflow_attr = false;
        neq0->count = 1;
        neq0->data.isop.temploc = 0;
        neq0->visited = 0;
        neq0->unk4 = 0;
        neq0->data.isop.aux.unk38_trep = NULL;
        neq0->data.isop.aux2.unk3C_trep = NULL;
        neq0->graphnode = curgraphnode;
    } else {
        increasecount(neq0);
    }
    return neq0;
}

/*
004713E8 loopunroll
*/
struct Expression *form_neg(struct Expression *expr) {
    unsigned short hash;
    struct Expression *neg;
    bool found = false;

    hash = isophash(Uneg, expr, NULL);
    neg = table[hash];
    while (!found && neg != NULL) {
        if (neg->type == isop && neg->data.isop.opc == Uneg && expr->datatype == neg->datatype && expr == neg->data.isop.op1) {
            found = true;
        } else {
            neg = neg->next;
        }
    }

    if (found == false) {
        neg = appendchain(hash);
        neg->type = isop;
        neg->data.isop.opc = Uneg;
        neg->datatype = expr->datatype;
        if (expr->type != isop) {
            neg->data.isop.datatype = expr->datatype;
        } else {
            neg->data.isop.datatype = expr->data.isop.datatype;
        }
        neg->data.isop.op1 = expr;
        neg->data.isop.op2 = NULL;
        neg->count = 1;
        neg->data.isop.aux2.v1.overflow_attr = 0;
        neg->data.isop.temploc = 0;
        neg->visited = 0;
        neg->unk4 = 0;
        neg->graphnode = curgraphnode;
    } else {
        increasecount(neg);
    }

    return neg;
}

/*
004713E8 loopunroll
*/
struct Expression *str_to_temporary(int addr, struct Expression *store) {
    struct Expression *ret;
    struct VariableLocation loc;

    loc.addr = addr;
    loc.blockno = curblk;
    loc.memtype = Mmt;
    ret = appendchain(isvarhash(loc));

    ret->data.isvar_issvar.veqv = false;
    ret->data.isvar_issvar.vreg = true;
    ret->initialVal = false;
    ret->type = isvar;
    ret->graphnode = curgraphnode;
    ret->data.isvar_issvar.location = loc;
    if (store->type == isop) {
        ret->datatype = store->data.isop.datatype;
    } else {
        ret->datatype = store->datatype;
    }
    ret->data.isvar_issvar.size = sizeoftyp(ret->datatype);
    ret->count = 0;
    ret->data.isvar_issvar.copy = NULL;
    ret->data.isvar_issvar.outer_stack = NULL;
    ret->killed = 0;
    ret->data.isvar_issvar.is_volatile = false;
    ret->data.isvar_issvar.location.level = curlevel;

    extendstat(Ustr);
    ret->data.isvar_issvar.assigned_value = store;

    stattail->outpar = false;
    stattail->expr = ret;
    stattail->u.store.lval_ant = true;
    stattail->u.store.store_ant = true;
    stattail->u.store.lval_av = true;
    stattail->u.store.store_av = true;
    stattail->is_increment = false;
    stattail->u.store.u.str.unk2C = 0;
    stattail->u.store.u.str.unk30 = 0;
    stattail->suppressed_iv = 0;
    ret->data.isvar_issvar.assignment = stattail;
    appendstorelist();
    curgraphnode->varlisttail->unk8 = true;
    return ret;
}

/*
004712A4 reset_images
004713E8 loopunroll
*/
void reset_images(struct Expression *expr) {
    if (expr->type == islda ||
        expr->type == isconst ||
        expr->type == isrconst) {
        return;
    }

    if (expr->ichain != NULL) {
        fixcorr(expr);
        expr->ichain = NULL;
    }

    switch (expr->type) {
        case islda:
        case isconst:
        case isrconst:
            return;

        case isilda:
            reset_images(expr->data.islda_isilda.outer_stack);
            return;

        case isvar:
        case issvar:
            if (expr->type == issvar) {
                reset_images(expr->data.isvar_issvar.outer_stack);
            }
            return;

        case isop:
            reset_images(expr->data.isop.op1);
            if (optab[expr->data.isop.opc].is_binary_op) {
                reset_images(expr->data.isop.op2);
            }
            return;

        case empty:
        case dumped:
        default:
            caseerror(1, 1910, "uoptroll.p", 10);
            return;
    }
}

/*
00456A2C oneproc
*/
void loopunroll(void) {
    struct Expression *loopCond;
    struct Statement *old_stattail;
    int spCC;
    int spC8;
    int unroll_times_local;
    struct Graphnode *spC0;
    int spB8;
    int spB4;
    int spB0;
    struct Expression *spAC;
    struct Expression *spA8;
    struct Graphnode *sp88;
    struct Expression *expr_s0;
    struct Expression *temp_expr;
    int range;
    int incre;
    struct Statement *prevstat_s1;
    struct Statement *stat_s3;
    struct Graphnode *node_s1;
    struct Statement *stat_s0;
    bool found;
    unsigned int limit_s0;
    unsigned int loopEstimate;
    int i;
    int tempAddr;
    int phi_s0_9;
    struct GraphnodeList *nodelist;
    int rem;

    loopbody = graphhead;

    do {
        loopCond = loopbody->stat_tail->expr;
        if ((loopbody->stat_tail->opc == Ufjp || loopbody->stat_tail->opc == Utjp)
                && loopbody->stat_tail->u.jp.incre != 0
                && loopCond->type == isop
                && (loopCond->data.isop.opc == Ugeq || loopCond->data.isop.opc == Ules)) {

            if (loopbody->stat_tail->u.jp.has_const_init ||
                    (loopCond->data.isop.op2->type == islda ||
                     loopCond->data.isop.op2->type == isconst ||
                     loopCond->data.isop.op2->type == isilda)) {

                // potential bug?
                if (loopCond->data.isop.op2->type == islda || loopCond->data.isop.op2->data.isconst.number.intval != 0) {
                    if ((loopbody->stat_tail->u.jp.loop_if_true != 0 && loopCond->data.isop.opc == Ules) ||
                        (loopbody->stat_tail->u.jp.loop_if_true == 0 && loopCond->data.isop.opc == Ugeq)) {

                        if (loopCond->data.isop.op2->type == isconst) {
                            range = loopCond->data.isop.op2->data.isconst.number.intval;
                            incre = loopbody->stat_tail->u.jp.incre;
                            rem = (range - loopbody->stat_tail->u.jp.unk20->data.isconst.number.intval - 1) % incre;

                            if ((rem ^ incre) < 0) {
                                rem += incre;
                            }

                            loopbody->stat_tail->expr = change_to_const_eq(loopbody->stat_tail->u.jp.loop_if_true, loopCond, loopbody, incre - rem - 1);
                        } else {
                            range = loopCond->data.isop.op2->data.islda_isilda.offset;
                            incre = loopbody->stat_tail->u.jp.incre;
                            rem = (range - loopbody->stat_tail->u.jp.unk20->data.isconst.number.intval - 1) % incre;
                            if ((rem ^ incre) < 0) {
                                rem += incre;
                            }
                            loopbody->stat_tail->expr = change_to_const_eq(loopbody->stat_tail->u.jp.loop_if_true, loopCond, loopbody, incre - rem - 1);
                        }
                    } else {
                        if (loopCond->data.isop.op2->type == isconst) {
                            range = loopCond->data.isop.op2->data.isconst.number.intval;
                            incre = loopbody->stat_tail->u.jp.incre;
                            rem = (loopbody->stat_tail->u.jp.unk20->data.isconst.number.intval - range) % -incre;
                            if ((rem ^ -incre) < 0) {
                                rem -= incre;
                            }
                            loopbody->stat_tail->expr = change_to_const_eq(loopbody->stat_tail->u.jp.loop_if_true, loopCond, loopbody, incre + rem);
                        } else {
                            range = loopCond->data.isop.op2->data.islda_isilda.offset;
                            incre = loopbody->stat_tail->u.jp.incre;
                            rem = (loopbody->stat_tail->u.jp.unk20->data.isconst.number.intval - range) % -incre;
                            if ((rem ^ -incre) < 0) {
                                rem -= incre;
                            }
                            loopbody->stat_tail->expr = change_to_const_eq(loopbody->stat_tail->u.jp.loop_if_true, loopCond, loopbody, incre + rem);
                        }
                    }

                    del_orig_cond(loopCond, loopbody);
                } else {
                    node_s1 = loopbody->successors->graphnode;
                    if (loopbody->loopdepth != node_s1->loopdepth) {
                        node_s1 = loopbody->successors->next->graphnode;
                    }

                    if (node_s1->unk5 == 2) {
                        node_s1->unk5 = 1;      // loopfirstbb
                    }
                }
            } else {
                loopbody->stat_tail->expr = change_to_var_eq(loopbody->stat_tail->u.jp.loop_if_true, loopbody->stat_tail->u.jp.unk26, loopCond, loopbody, loopbody->stat_tail->u.jp.incre);
                del_orig_cond(loopCond, loopbody);
            }
        }

        if ((loopbody->stat_tail->opc == Ufjp || loopbody->stat_tail->opc == Utjp || loopbody->stat_tail->opc == Uujp)
                && loopbody->stat_tail->next != NULL
                && loopbody->stat_tail->next->opc == Ulab
                && loopbody->stat_tail->u.jp.target_blockno == loopbody->stat_tail->next->u.label.blockno) {
            if (loopbody->stat_tail->opc != Uujp) {
                del_orig_cond(loopbody->stat_tail->expr, loopbody);
            }
            loopbody->stat_tail->opc = Unop;
        }

        while ((loopbody->stat_tail->opc == Uujp && loopbody->successors->graphnode->predecessors->next == NULL)
                && (loopbody->successors->graphnode->stat_tail->opc == Uijp ||
                    loopbody->successors->graphnode->stat_tail->opc == Uujp ||
                    loopbody->successors->graphnode->stat_tail->opc == Uxjp)) {
            stat_s3 = loopbody->stat_head;
            while (stat_s3 != loopbody->stat_tail) {
                switch (stat_s3->opc) {
                    case Uisst:
                    case Ustr:
                        reset_images(stat_s3->expr->data.isvar_issvar.assigned_value);
                        reset_images(stat_s3->expr);
                        if (stat_s3->opc == Uisst) {
                            reset_images(stat_s3->u.store.expr);
                        }
                        break;

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
                        reset_images(stat_s3->expr);
                        reset_images(stat_s3->u.store.expr);
                        break;

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
                    case Uujp:
                    case Uxpar:
                        break;

                    default:
                        reset_images(stat_s3->expr);
                }
                stat_s3 = stat_s3->next;
            }

            old_stattail = stattail;
            stattail = loopbody->stat_tail;
            stat_s3 = loopbody->stat_tail->next;
            loopbody->stat_tail->opc = Unop;
            loopbody->stat_tail->next = NULL;

            curgraphnode = loopbody;
            loopbody = loopbody->successors->graphnode;
            loopbody->prev->next = loopbody->next;
            if (graphtail != loopbody) {
                loopbody->next->prev = loopbody->prev;
            } else {
                graphtail = loopbody->prev;
            }

            if (loopbody->loop != NULL && loopbody->loop->body == loopbody) {
                loopbody->loop->body = curgraphnode;
            }

            nodelist = loopbody->successors;
            do {
                change_adj_node(nodelist->graphnode->predecessors, loopbody, curgraphnode);
                nodelist = nodelist->next;
            } while (nodelist != NULL);

            curgraphnode->successors = loopbody->successors;
            incr_amount = 0;
            incr_stat = loopbody->stat_head;
            loopbodyend = loopbody;
            post_loopblock(0, 0, 1);

            if (loopbody->stat_tail->opc != Uujp
                    || stat_s3 == NULL
                    || stat_s3->opc != Ulab
                    || loopbody->stat_tail->u.jp.target_blockno != stat_s3->u.label.blockno) {
                oneloopblockstmt(loopbody->stat_tail);
            }

            curgraphnode->stat_tail = stattail;
            codeimage();

            stattail->next = stat_s3;
            if (stat_s3 != NULL) {
                stat_s3->prev = stattail;
            }

            stattail = old_stattail;
            prevstat_s1 = loopbody->stat_head->prev;
            stat_s0 = prevstat_s1->next;
            found = 0;

            while (stat_s0 != NULL && found == 0) {
                if (stat_s0->opc != Uclab && stat_s0->opc != Udef) {
                    prevstat_s1->next = stat_s0->next;

                    if (stat_s0->next != NULL) {
                        stat_s0->next->prev = prevstat_s1;
                    }

                    if (stat_s0->opc == Uisst || stat_s0->opc == Ustr) {
                        decreasecount(stat_s0->expr->data.isvar_issvar.assigned_value);
                        if (stat_s0->expr->ichain != NULL) {
                            fixcorr(stat_s0->expr);
                            stat_s0->expr->ichain = NULL;
                        }

                        if (stat_s0->opc == Uisst) {
                            decreasecount(stat_s0->u.store.expr);
                        }
                    } else {
                        // note: originally this and the second switch were
                        // if(opc not in [Uaent...])
                        //      decreasecount()
                        //      if (opc in [Uistr...])
                        //          decreasecount()
                        switch (stat_s0->opc) {
                            case Uaent:
                            case Ubgnb:
                            case Ucia:
                            case Uclab:
                            case Uclbd:
                            case Uctrl:
                            case Ucubd:
                            case Ucup:
                            case Udef:
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
                            case Uujp:
                            case Uxpar:
                                break;

                            default:
                                decreasecount(stat_s0->expr);
                                switch (stat_s0->opc) {
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
                                        decreasecount(stat_s0->u.store.expr);
                                        break;

                                    default:
                                        break;
                                }
                                break;
                        }
                    }
                } else {
                    stat_s0->graphnode = prevstat_s1->graphnode;
                    if (stat_s0->opc == Uclab) {
                        int length = stat_s0->u.label.length;
                        for (i = 0; i < length; i++) {
                            stat_s0 = stat_s0->next;
                            stat_s0->graphnode = prevstat_s1->graphnode;
                        }
                    }
                    prevstat_s1 = stat_s0;
                }

                if (stat_s0->next != NULL) {
                    found = loopbody != stat_s0->next->graphnode;
                }

                stat_s0 = stat_s0->next;
            }

            loopbody = curgraphnode;
        }

        loopbody = loopbody->next;
    } while (loopbody != NULL);

    labelmap_head = alloc_new(sizeof(struct LabelMap), &perm_heap);
    labelmap_head->next = NULL;
    labelmap_unused = labelmap_head;
    loopbody = graphhead;

    if (unroll_times >= 2) {
        for (loopbody = graphhead; loopbody != NULL; loopbody = loopbody->next) {
            if (loopbody->unk5 != 2) { // canunroll
                continue;
            }

            loopbodyend = loopbody->predecessors->graphnode;
            if (loopbody->loopdepth != loopbodyend->loopdepth) {
                loopbodyend = loopbody->predecessors->next->graphnode;
            }

            if (!multibbunroll && loopbodyend != loopbody) {
                continue;
            }

            if (loopbodyend != loopbody) {
                limit_s0 = unroll_limit / 3;
            } else {
                limit_s0 = unroll_limit;
            }

            stat_s3 = loopbodyend->stat_tail;
            loopCond = stat_s3->expr;
            loopEstimate = estimate_instr(loopbody, loopbodyend);
            if (loopEstimate == 0) {
                loopEstimate = 1;
            }

            if (limit_s0 < loopEstimate * 2u) {
                continue;
            }

            if (!stat_s3->u.jp.has_const_init || (loopCond->data.isop.op2->data.isconst.number.intval - stat_s3->u.jp.unk20->data.isconst.number.intval) / stat_s3->u.jp.incre >= unroll_times) {
                loopheader = loopbody->predecessors->graphnode;
                if (loopbodyend == loopheader) {
                    loopheader = loopbody->predecessors->next->graphnode;
                }

                looplab = loopbody->stat_head->u.label.blockno;
                if (stat_s3->u.jp.has_const_init != 0) {
                    i_var_inx = loopCond->data.isop.op1->ichain;
                } else if (stat_s3->u.jp.unk26 != 0) {
                    spAC = loopCond->data.isop.op2;
                    spA8 = loopCond->data.isop.op1;
                    i_var_inx = loopCond->data.isop.op1->ichain;
                } else {
                    spA8 = loopCond->data.isop.op2;
                    i_var_inx = loopCond->data.isop.op2->ichain;
                    spAC = loopCond->data.isop.op1;
                }

                i_var_size = sizeoftyp(i_var_inx->dtype);
                if (i_var_size < 4) {
                    i_var_size = 4;
                }

                incr_stat = loopbody->stat_head;
                while ((incr_stat->opc != Uisst && incr_stat->opc != Ustr)
                        || !incr_stat->is_increment
                        || incr_stat->expr->ichain != i_var_inx) {
                    incr_stat = incr_stat->next;
                }

                unroll_times_local = limit_s0 / loopEstimate;
                if (unroll_times_local > unroll_times) {
                    unroll_times_local = unroll_times;
                }

                if (unroll_times_local == 3) { // what.
                    unroll_times_local = 2;
                }

                record_labels();
                if (stat_s3->u.jp.has_const_init) {
                    old_stattail = stattail;
                    stattail = loopbody->stat_head->prev;
                    stattail->next = NULL;

                    rem = ((loopCond->data.isop.op2->data.isconst.number.intval - stat_s3->u.jp.unk20->data.isconst.number.intval) / stat_s3->u.jp.incre) % unroll_times_local;
                    if ((rem ^ unroll_times_local) < 0) {
                        rem += unroll_times_local;
                    }

                    if (rem != 0) {
                        new_header_node(true);
                        curgraphnode->loop = loopbody->loop;
                        incr_amount = 0;

                        //! wtf
                        for (i = 1; i < rem; i++) {
                            new_set_of_labels();
                            pre_loopblock(0, 1);
                            incr_amount += stat_s3->u.jp.incre;
                            post_loopblock(0, 1, 1);
                        }

                        new_set_of_labels();
                        pre_loopblock(0, 1);
                        oneloopblockstmt(incr_stat);
                        incr_amount = 0;
                        post_loopblock(0, 1, 1);
                        curgraphnode->stat_tail = stattail;
                        codeimage();
                    }
                } else {
                    old_stattail = stattail;
                    node_s1 = loopbodyend->successors->graphnode;
                    if (node_s1 == loopbody) {
                        node_s1 = loopbodyend->successors->next->graphnode;
                    }

                    TRAP_IF(node_s1 != loopbodyend->next);
                    TRAP_IF(node_s1->blockno != 0);
                    maxlabnam++;
                    node_s1->blockno = maxlabnam;
                    spB8 = maxlabnam;
                    curgraphnode = alloc_new(sizeof(struct Graphnode), &perm_heap);
                    init_graphnode(curgraphnode);
                    curgraphnode->terminal = 1;
                    curgraphnode->unk7 = 2;
                    curgraphnode->num = curstaticno++;
                    curgraphnode->loopdepth = node_s1->loopdepth;
                    curgraphnode->frequency = node_s1->frequency;
                    curgraphnode->bvs.init.line = node_s1->bvs.init.line; // ?
                    curgraphnode->loop = node_s1->loop;
                    curgraphnode->next = node_s1;
                    curgraphnode->prev = loopbodyend;
                    loopbodyend->next = curgraphnode;
                    node_s1->prev = curgraphnode;
                    curgraphnode->predecessors = node_s1->predecessors;
                    change_adj_node(loopbodyend->successors, node_s1, curgraphnode);
                    node_s1->predecessors = NULL;
                    create_edge(curgraphnode, node_s1);
                    stattail = loopbodyend->stat_tail;
                    loopbodyend->stat_tail->next = NULL;
                    extendstat(Unop);
                    curgraphnode->stat_tail = stattail;
                    init_node_vectors(curgraphnode);
                    extendstat(Ulab);
                    stattail->u.label.flags = 0;
                    stattail->u.label.length = 0;
                    stattail->u.label.blockno = spB8;
                    stattail->graphnode = node_s1;
                    stattail->next = node_s1->stat_head;
                    node_s1->stat_head->prev = stattail;
                    node_s1->stat_head = stattail;
                    stattail = loopbody->stat_head->prev;
                    stattail->next = NULL;

                    rem = tempdisp % i_var_size;
                    if ((rem ^ i_var_size) < 0) {
                        rem += i_var_size;
                    }

                    if (rem != 0) {
                        tempdisp = (tempdisp + i_var_size) - rem;
                    }

                    if (stack_reversed == 0) {
                        tempdisp += i_var_size;
                        tempAddr = -tempdisp;
                    } else {
                        tempAddr = tempdisp;
                        tempdisp += i_var_size;
                    }

                    new_header_node(true);
                    curgraphnode->loop = loopbody->loop->outer;
                    incr_amount = 0;
                    expr_s0 = oneloopblockexpr(spAC, &spCC);
                    temp_expr = oneloopblockexpr(spA8, &spC8);
                    if (stat_s3->u.jp.incre > 0) {
                        expr_s0 = str_to_temporary(tempAddr, form_rem(unroll_resetincr(form_bop(Usub, expr_s0, temp_expr), spCC - spC8), unroll_times_local * stat_s3->u.jp.incre));
                    } else {
                        expr_s0 = str_to_temporary(tempAddr, form_neg(form_rem(unroll_resetincr(form_bop(Usub, temp_expr, expr_s0), spC8 - spCC), unroll_times_local * -stat_s3->u.jp.incre)));
                    }

                    extendstat(Ufjp);
                    stattail->expr = form_neq0(oneloopblockexpr(expr_s0, &spCC));
                    spC0 = curgraphnode;
                    maxlabnam++;
                    stattail->u.jp.incre = 0;
                    stattail->u.jp.target_blockno = maxlabnam;
                    spB4 = maxlabnam;
                    curgraphnode->stat_tail = stattail;
                    codeimage();
                    new_header_node(true);
                    curgraphnode->loop = loopbody->loop->outer;
                    expr_s0 = oneloopblockexpr(expr_s0, &spCC);
                    expr_s0 = str_to_temporary(tempAddr, form_bop(Uadd, expr_s0, oneloopblockexpr(spA8, &spC8)));
                    curgraphnode->stat_tail = stattail;
                    codeimage();
                    new_header_node(true);
                    curgraphnode->loop = loopbody->loop->outer;
                    sp88 = curgraphnode;
                    curgraphnode->loopdepth = loopbody->loopdepth;
                    curgraphnode->frequency = loopbody->frequency;
                    curgraphnode->unk5 = 1;
                    curgraphnode->unkBb8 = 1;
                    curgraphnode->bvs.init.line = loopbody->bvs.init.line;
                    if (unroll_times_local != 2) {
                        maxlabnam++;
                        curgraphnode->blockno = maxlabnam;
                        spB0 = maxlabnam;
                        extendstat(Ulab);
                        stattail->u.label.flags = 0;
                        stattail->u.label.length = 0;
                        stattail->u.label.blockno = spB0;
                    }

                    new_set_of_labels();
                    pre_loopblock(0, 0);
                    oneloopblockstmt(incr_stat);
                    post_loopblock(0, 1, 0);
                    if (unroll_times_local != 2) {
                        extendstat(Utjp);
                        expr_s0 = oneloopblockexpr(expr_s0, &spCC);
                        stattail->expr = form_bop(Uneq, expr_s0, oneloopblockexpr(spA8, &spC8));
                        stattail->u.jp.incre = 0;
                        stattail->u.jp.target_blockno = spB0;
                        create_edge(curgraphnode, sp88);
                    }

                    curgraphnode->stat_tail = stattail;
                    codeimage();
                    new_header_node(true);
                    curgraphnode->loop = loopbody->loop->outer;
                    curgraphnode->unkBb8 = 0;
                    curgraphnode->frequency = node_s1->frequency;
                    if (stat_s3->opc == Ufjp) {
                        extendstat(Utjp);
                    } else {
                        extendstat(Ufjp);
                    }

                    stattail->expr = oneloopblockexpr(stat_s3->expr, &spCC);
                    stattail->expr = unroll_resetincr(stattail->expr, spCC);
                    stattail->u.jp.incre = 0;
                    stattail->u.jp.target_blockno = spB8;
                    create_edge(curgraphnode, node_s1);
                    curgraphnode->stat_tail = stattail;
                    codeimage();
                    new_header_node(true);
                    curgraphnode->blockno = spB4;
                    curgraphnode->loop = loopbody->loop->outer;
                    curgraphnode->frequency = node_s1->frequency;
                    extendstat(Ulab);
                    stattail->u.label.flags = 0;
                    stattail->u.label.length = 0;
                    stattail->u.label.blockno = spB4;
                    create_edge(spC0, curgraphnode);
                    curgraphnode->stat_tail = stattail;
                    init_node_vectors(curgraphnode);
                }


                new_header_node(true);
                curgraphnode->loop = loopbody->loop;
                sp88 = curgraphnode;
                curgraphnode->loopdepth = loopbody->loopdepth;
                curgraphnode->frequency = loopbody->frequency;
                curgraphnode->unk5 = 2;
                curgraphnode->bvs.init.line = loopbody->bvs.init.line;
                extendstat(Ulab);
                stattail->u.label.flags = loopbody->stat_head->u.label.flags;
                stattail->u.label.length = loopbody->stat_head->u.label.length;
                stattail->u.label.blockno = looplab;
                curgraphnode->blockno = looplab;

                if (listwritten) {
                    write_string(list.c_file, "UNROLLING at BB:", 16, 16);
                    write_integer(list.c_file, loopbody->num, 12, 10);
                    write_integer(list.c_file, unroll_times_local, 12, 10);
                    write_string(list.c_file, " times to BB:", 13, 13);
                    write_integer(list.c_file, curgraphnode->num, 12, 10);
                    writeln(list.c_file);
                }

                new_set_of_labels();
                incr_amount = 0;
                pre_loopblock(1, 1);
                incr_amount = stat_s3->u.jp.incre;
                post_loopblock(1, 1, 1);

                for (phi_s0_9 = 2; phi_s0_9 < unroll_times_local; phi_s0_9++) {
                    new_set_of_labels();
                    pre_loopblock(0, 1);
                    incr_amount += stat_s3->u.jp.incre;
                    post_loopblock(0, 1, 1);
                }

                new_set_of_labels();
                pre_loopblock(0, 1);
                oneloopblockstmt(incr_stat);
                incr_amount = 0;
                post_loopblock(0, 1, 1);
                if (!stat_s3->u.jp.has_const_init || ((loopCond->data.isop.op2->data.isconst.number.intval - stat_s3->u.jp.unk20->data.isconst.number.intval) / stat_s3->u.jp.incre) >= unroll_times_local * 2) {
                    termination_test(stat_s3, unroll_times_local);
                    create_edge(curgraphnode, sp88);
                }

                node_s1 = loopbodyend->successors->graphnode;
                if (node_s1 == loopbody) {
                    node_s1 = loopbodyend->successors->next->graphnode;
                }

                create_edge(curgraphnode, node_s1);
                curgraphnode->stat_tail = stattail;
                codeimage();

                stattail->next = loopbodyend->stat_tail->next;
                stattail->next->prev = stattail;

                stattail = old_stattail;
                stat_s3 = loopbody->stat_head;
                do {
                    if (stat_s3->opc == Uisst || stat_s3->opc == Ustr) {
                        decreasecount(stat_s3->expr->data.isvar_issvar.assigned_value);
                        if (stat_s3->opc == Uisst) {
                            decreasecount(stat_s3->u.store.expr);
                        }
                    } else {
                        switch (stat_s3->opc) {
                            case Uaent:
                            case Ubgnb:
                            case Ucia:
                            case Uclab:
                            case Uclbd:
                            case Uctrl:
                            case Ucubd:
                            case Ucup:
                            case Udef:
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
                            case Uujp:
                            case Uxpar:
                                break;

                            default:
                                decreasecount(stat_s3->expr);
                                break;
                        }

                        switch (stat_s3->opc) {
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
                                decreasecount(stat_s3->u.store.expr);
                                break;

                            default:
                                break;
                        }
                    }

                    stat_s3 = stat_s3->next;
                } while (stat_s3 != loopbodyend->stat_tail);

                node_s1 = loopbody;
                node_s1->loop->body = sp88;
                found = false;

                while (!found) {
                    nodelist = node_s1->predecessors;
                    while (nodelist != 0) {
                        if (node_s1 != nodelist->graphnode) {
                            del_adj_node(&nodelist->graphnode->successors, node_s1);
                        }

                        nodelist = nodelist->next;
                    }

                    nodelist = node_s1->successors;
                    while (nodelist != 0) {
                        if (node_s1 != nodelist->graphnode) {
                            del_adj_node(&nodelist->graphnode->predecessors, node_s1);
                        }
                        nodelist = nodelist->next;
                    }

                    node_s1->prev->next = node_s1->next;
                    if (node_s1 == graphtail) {
                        graphtail = node_s1->prev;
                    } else {
                        node_s1->next->prev = node_s1->prev;
                    }

                    if (node_s1 == loopbodyend) {
                        found = 1;
                    } else {
                        if (node_s1 != node_s1->stat_tail->next->graphnode) {
                            node_s1 = node_s1->stat_tail->next->graphnode;
                        } else {
                            node_s1 = node_s1->stat_tail->next->next->graphnode;
                        }
                    }
                }
            }
        }
    }

    if (dbugno != 0) {
        if (proc_to_print[0] == ' ' || at_proc_to_print) {
            write_string(list.c_file, "   flow graph for " , 18, 18);
            write_string(list.c_file, entnam0, 1024, entnam0len);
            write_char(list.c_file, ':', 1);
            writeln(list.c_file);

            loopbody = graphhead;
            while (loopbody != 0) {
                write_integer(list.c_file, loopbody->num, 12, 10);
                write_cardinal(list.c_file, loopbody->blockno, 12, 10);
                writeln(list.c_file);
                nodelist = loopbody->predecessors;
                while (nodelist != 0) {
                    write_string(list.c_file, "pre::::", 7, 7);
                    write_integer(list.c_file, nodelist->graphnode->num, 12, 10);
                    write_cardinal(list.c_file, nodelist->graphnode->blockno, 12, 10);
                    writeln(list.c_file);
                    nodelist = nodelist->next;
                }

                nodelist = loopbody->successors;
                while (nodelist != 0) {
                    write_string(list.c_file, "suc::::", 7, 7);
                    write_integer(list.c_file, nodelist->graphnode->num, 12, 10);
                    write_cardinal(list.c_file, nodelist->graphnode->blockno, 12, 10);
                    writeln(list.c_file);
                    nodelist = nodelist->next;
                }

                loopbody = loopbody->next;
            }
        }
    }
}

/*
004737E0 par_to_str
*/
static struct Expression *func_00473504(struct Statement *par, unsigned short varhash, struct VariableLocation loc) {
    bool veqv;
    struct Expression *var;
    bool found;
    bool vreg;
    bool unk3;

    var = table[varhash];
    veqv = false;
    found = false;
    vreg = false;
    unk3 = false;
    if (par->u.par.dtype == Sdt && int_reg_size < par->u.par.size) {
        veqv = true;
    }

    while (!found && !veqv && var != NULL) {
        if (var->type == isvar && addreq(var->data.isvar_issvar.location, loc)) {
            if (var->data.isvar_issvar.veqv) {
                veqv = true;
            } else {
                found = curgraphnode == var->graphnode && !var->killed;

                if (var->data.isvar_issvar.vreg) {
                    vreg = true;
                }
                if (!found && curgraphnode == var->graphnode) {
                    unk3 = true;
                }
            }
        }

        if (!found) {
            var = var->next;
        }
    }

    if (!found || veqv) {
        var = appendchain(varhash);
        var->data.isvar_issvar.veqv = veqv;
        var->graphnode = curgraphnode;
        if (!veqv) {
            var->data.isvar_issvar.vreg = vreg;
        }
        var->initialVal = !unk3;
    }
    return var;
}

/*
004737E0 par_to_str
*/
static int func_004736E0(struct VariableLocation loc, struct Variable *var, struct Statement *par) {
    if (var == NULL) {
        return 0;
    }

    while (var != NULL) {
        switch (compareaddr(loc, var->location)) {
            case 0:
                if (!var->veqv) {
                    return var->size;
                }
                return par->u.par.size;

            case 1:
                var = var->left;
                break;

            case 2:
                var = var->right;
                break;

            default:
                caseerror(1, 2744, "uoptroll.p", 10);
                break;
        }
    }

    return 0;
}

/*
004761D0 tail_recursion
*/
void par_to_str(struct Statement *par, bool arg1, int disp) {
    struct Expression *sp5C;
    struct Expression *sp58;
    struct Expression *sp54;
    bool unk1C; // sp53
    bool unk1E; // sp52
    int sp4C = 0;
    struct VariableLocation loc;
    unsigned short hash;
    int parsize;
    int byte_offset;
    struct Statement *sp30;

    loc.blockno = curblk;
    loc.memtype = Pmt;
    loc.addr = par->u.par.loc;
    parsize = func_004736E0(loc, curproc->vartree, par);
    byte_offset = 0;

    if (parsize == 0) {
        if (!bigendian) {
            return;
        }
        loc.addr += 2;
        byte_offset = 2;
        parsize = func_004736E0(loc, curproc->vartree, par);
        if (parsize == 0) {
            loc.addr += 1;
            byte_offset = 3;
            parsize = func_004736E0(loc, curproc->vartree, par);
            if (parsize == 0) {
                return;
            }
        }
    }

    if (arg1) {
        loc.memtype = Mmt;
        loc.addr = disp + byte_offset;
    }

    sp54 = unroll_resetincr(oneloopblockexpr(par->expr, &sp4C), sp4C);
    hash = isvarhash(loc);
    sp58 = func_00473504(par, hash, loc);

    sp5C = sp58;
    if (sp58->type != empty) {
        if (sp58->data.isvar_issvar.assignment == NULL) {
            sp58->killed = true;
            sp5C = appendchain(sp58->table_index);
            sp5C->graphnode = curgraphnode;
            sp5C->data.isvar_issvar.vreg = sp58->data.isvar_issvar.vreg;
            sp5C->initialVal = false;
            sp5C->data.isvar_issvar.veqv = sp58->data.isvar_issvar.veqv;
            unk1E = true;
            unk1C = false;
        } else if (sp58->data.isvar_issvar.assigned_value != NULL && sp58->data.isvar_issvar.assignment->u.store.lval_av) {
            sp30 = sp58->data.isvar_issvar.assignment;
            sp30->u.store.var_access_list_item->type = 0;
            if (has_volt_ovfw(sp30->expr->data.isvar_issvar.assigned_value)) {
                sp30->opc = Upop;
                sp30->u.pop.dtype = sp58->datatype;
                sp30->u.pop.unk15 = 0;
                sp30->expr = sp30->expr->data.isvar_issvar.assigned_value;
            } else {
                decreasecount(sp30->expr->data.isvar_issvar.assigned_value);
                sp30->opc = Unop;
            }
            unk1E = sp58->data.isvar_issvar.assignment->u.store.store_ant;
            unk1C = sp58->data.isvar_issvar.assignment->u.store.lval_ant;
        } else {
            if (sp54 == sp58->data.isvar_issvar.assigned_value) {
                decreasecount(sp54);
                return;
            }
            sp58->killed = true;
            sp58->data.isvar_issvar.assignment->u.store.store_av = false;
            sp5C = appendchain(sp58->table_index);
            sp5C->graphnode = curgraphnode;
            sp5C->data.isvar_issvar.vreg = sp58->data.isvar_issvar.vreg;
            sp5C->initialVal = false;
            sp5C->data.isvar_issvar.veqv = sp58->data.isvar_issvar.veqv;
            unk1E = false;
            unk1C = false;
        }
    } else {
        unk1E = true;
        unk1C = true;
    }

    if (sp5C->type == empty) {
        sp5C->type = isvar;
        sp5C->data.isvar_issvar.location = loc;
        sp5C->datatype = par->u.par.dtype;
        sp5C->data.isvar_issvar.size = sizeoftyp(par->u.par.dtype);
        if (parsize < sp5C->data.isvar_issvar.size) {
            sp5C->data.isvar_issvar.size = parsize;
        }

        sp5C->initialVal = false;
        sp5C->count = 0;
        sp5C->data.isvar_issvar.copy = NULL;
        sp5C->data.isvar_issvar.outer_stack = NULL;
        sp5C->data.isvar_issvar.location.level = curlevel;

        if (!sp5C->data.isvar_issvar.veqv) {
            sp5C->killed = false;
        } else {
            sp5C->killed = true;
        }
        sp5C->data.isvar_issvar.is_volatile = false;
    }

    if (sp5C->data.isvar_issvar.veqv) {
        unk1C = false;
        unk1E = false;
    }

    extendstat(Ustr);
    sp5C->data.isvar_issvar.assigned_value = sp54;
    stattail->outpar = 0;
    stattail->expr = sp5C;
    stattail->u.store.lval_ant = unk1C;
    if (sp5C->data.isvar_issvar.vreg == 0 && unk1C != 0) {
        stattail->u.store.lval_ant = strlkilled(stattail, curgraphnode->varlisthead) == 0;
    }
    stattail->u.store.store_ant = unk1E;
    if (sp5C->data.isvar_issvar.vreg == 0 && unk1E != 0) {
        stattail->u.store.store_ant = strskilled(stattail, curgraphnode->varlisthead) == 0;
    }
    stattail->is_increment = false;
    stattail->u.store.u.str.unk2C = 0;
    stattail->u.store.lval_av = !sp5C->data.isvar_issvar.veqv;
    stattail->u.store.store_av = !sp5C->data.isvar_issvar.veqv;
    stattail->u.store.u.str.unk30 = 0;
    stattail->suppressed_iv = false;
    sp5C->data.isvar_issvar.assignment = stattail;
    if (sp5C->data.isvar_issvar.vreg == 0) {
        strkillprev(stattail);
    }
    appendstorelist();
    if (sp5C->data.isvar_issvar.vreg != 0) {
        curgraphnode->varlisttail->unk8 = 1;
    }
}

/*
00473F04 pmov_to_mov
*/
static struct Expression *func_00473D84(struct Statement *pmov, struct VariableLocation loc, unsigned short hash) {
    struct Expression *var;
    bool found;

    var = table[hash];
    found = false;
    while (!found && var != NULL) {
        found = var->type == islda
                 && addreq(var->data.islda_isilda.address, loc)
                 && loc.addr == var->data.islda_isilda.offset
                 && pmov->u.store.size == var->data.islda_isilda.size;
        if (!found) {
            var = var->next;
        }
    }

    if (!found) {
        var = appendchain(hash);
        var->type = islda;
        var->datatype = Adt;
        var->graphnode = curgraphnode;
        var->data.islda_isilda.address = loc;
        var->data.islda_isilda.size = pmov->u.store.size;
        var->data.islda_isilda.level = curlevel;
        var->var_access_list = NULL;
        var->data.islda_isilda.outer_stack = NULL;
        var->data.islda_isilda.offset = loc.addr;
    }
    return var;
}

/*
004761D0 tail_recursion
*/
void pmov_to_mov(struct Statement *pmov) {
    int increment;
    struct VariableLocation loc;
    unsigned short hash;

    loc.addr = pmov->u.store.u.mov.offset;
    loc.blockno = curblk;
    loc.memtype = Pmt;

    hash = isvarhash(loc);
    extendstat(Umov);
    stattail->expr = func_00473D84(pmov, loc, hash);
    stattail->u.store.expr = oneloopblockexpr(pmov->expr, &increment);
    stattail->u.store.expr = unroll_resetincr(stattail->u.store.expr, increment);
    stattail->u.store.size = pmov->u.store.size;
    stattail->u.store.u.mov.src_align = pmov->u.store.u.mov.src_align;
    stattail->u.store.u.mov.dst_align = pmov->u.store.u.mov.src_align; // pmov doesn't have dst_align
    stattail->u.store.u.mov.baseaddr = findbaseaddr(pmov->expr);
    appendstorelist();
    stattail->u.store.var_access_list_item->type = 3;
    movkillprev(stattail);
    stattail->u.store.baseaddr = findbaseaddr(stattail->expr);
    stattail->u.store.lval_ant = !strlkilled(stattail, curgraphnode->varlisthead);
    stattail->u.store.store_ant = !strskilled(stattail, curgraphnode->varlisthead);
    stattail->u.store.lval_av = true;
    stattail->u.store.store_av = true;
    strkillprev(stattail);
    appendstorelist();
}
