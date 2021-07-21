#include "uoptdata.h"
#include "uoptutil.h"
#include "uoptitab.h"
#include "uoptcopy.h"
#include "uoptkill.h"
#include "uoptinput.h"
#include "uoptcontrolflow.h"

__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
RO_1000DBC9:
    # 004736E0 func_004736E0
    .asciz "uoptroll.p"

    .balign 4
jtbl_1000DBD4:
    # 004736E0 func_004736E0
    .gpword .L0047376C
    .gpword .L00473790
    .gpword .L00473798

.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
)"");

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
            sp30 = loopCond->data.isop.op2->data.islda_isilda.addr + rem;
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
        constEq->data.isop.unk30 = 0;
        constEq->unk5 = 0;
        constEq->unk4 = 0;
        constEq->graphnode = node;

        constEq->data.isop.aux2.v1.overflow_attr = 0;

        //! overwrites overflow_attr
        constEq->data.isop.aux = loopCond->data.isop.aux;
        constEq->data.isop.aux2 = loopCond->data.isop.aux2;

        constEq->data.isop.unk22 = loopCond->data.isop.unk22;
        constEq->data.isop.unk21 = loopCond->data.isop.unk21;
    } else {
        increasecount(constEq);
    }

    if (rem == 0) {
        op2ichain = condOp2->ichain;
    } else {
        if (condOp2->type == isconst) {
            op2Hash = isconstihash(sp30);
        } else {
            op2Hash = isldaihash(condOp2->data.islda_isilda.var_data, sp30);
        }
        op2ichain = isearchloop(op2Hash, condOp2, NULL, NULL);
    }

    eqIchain = isearchloop(isopihash(condOpc, loopCond->ichain->isop.op1, op2ichain), constEq, loopCond->ichain->isop.op1, op2ichain);
    if (constEq->data.isop.unk21) {
        setbit(&node->bvs.stage1.antlocs, eqIchain->bitpos);
    }
    if (constEq->data.isop.unk22) {
        setbit(&node->bvs.stage1.avlocs, eqIchain->bitpos);
    }
    if (!constEq->data.isop.unk21 || constEq->data.isop.unk22) {
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
    Uopcode sp57;
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
        sp57 = Uequ;
    } else {
        sp57 = Uneq;
    }
    if (inc_var_op1) {
        phi_s3 = loopCond->data.isop.op2;
    } else {
        phi_s3 = loopCond->data.isop.op1;
    }
    phi_s3->count++;

    found = 0;

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
            phi_s1->data.isop.unk30 = 0;
            phi_s1->unk5 = 0;
            phi_s1->unk4 = 0;
            phi_s1->graphnode = body;
            phi_s1->data.isop.unk21 = phi_s3->unk3;
            phi_s1->data.isop.unk22 = phi_s3->unk2 == 0;
        } else {
            increasecount(phi_s1);
        }
    }

    if (inc_var_op1) {
        loopCond->data.isop.op1->count++;
        hash = isophash(sp57, loopCond->data.isop.op1, phi_s1);
        phi_s0 = table[hash];

        //! The asm doesn't check found here, even though it could have been set
        while (phi_s0 != 0) {
            if (phi_s0->type == isop && sp57 == phi_s0->data.isop.opc && loopCond->datatype == phi_s0->datatype
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
        hash = isophash(sp57, phi_s1, loopCond->data.isop.op2);
        phi_s0 = table[hash];

        //! The asm doesn't check found here, even though it could have been set
        while (phi_s0 != 0) {
            if (phi_s0->type == isop && sp57 == phi_s0->data.isop.opc && loopCond->datatype == phi_s0->datatype
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

    if (found == 0) {
        sp48 = appendchain(hash);
        sp48->type = isop;
        sp48->data.isop.opc = sp57;
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
        sp48->data.isop.unk30 = 0;
        sp48->unk5 = 0;
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

        sp48->data.isop.unk22 = loopCond->data.isop.unk22;
        sp48->data.isop.unk21 = loopCond->data.isop.unk21;
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
        if (phi_s1->data.isop.unk21) {
            setbit(&body->bvs.stage1.antlocs, phi_s3_2->bitpos);
        }
        if (phi_s1->data.isop.unk22) {
            setbit(&body->bvs.stage1.avlocs, phi_s3_2->bitpos);
        }
        if ((phi_s1->data.isop.unk21 == 0) || (phi_s1->data.isop.unk22)) {
            setbit(&body->bvs.stage1.alters, phi_s3_2->bitpos);
        }
        setbit(&body->bvs.stage1.u.precm.expoccur, phi_s3_2->bitpos);
    }

    if (inc_var_op1) {
        temp_s1_2 = isearchloop(isopihash(sp57, loopCond->ichain->isop.op1, phi_s3_2), phi_s0, loopCond->ichain->isop.op1, phi_s3_2);
    } else {
        temp_s1_2 = isearchloop(isopihash(sp57, phi_s3_2, loopCond->ichain->isop.op2), phi_s0, phi_s3_2, loopCond->ichain->isop.op2);
    }

    if (phi_s0->data.isop.unk21) {
        setbit(&body->bvs.stage1.antlocs, temp_s1_2->bitpos);
    }
    if (phi_s0->data.isop.unk22) {
        setbit(&body->bvs.stage1.avlocs, temp_s1_2->bitpos);
    }
    if ((phi_s0->data.isop.unk21 == 0) || (phi_s0->data.isop.unk22)) {
        setbit(&body->bvs.stage1.alters, temp_s1_2->bitpos);
    }

    setbit(&body->bvs.stage1.u.precm.expoccur, temp_s1_2->bitpos);
    trep_image(phi_s0, 1, sp56, sp55, 1);
    trep_image(phi_s0, 0, sp54, sp53, 1);
    return phi_s0;
}

/*
004713E8 loopunroll
*/
void del_orig_cond(struct Expression *loopCond, struct Graphnode *body) {
    if (loopCond->count == 1) {
        if (loopCond->data.isop.unk21) {
            resetbit(&body->bvs.stage1.antlocs, loopCond->ichain->bitpos);
        }

        if (loopCond->data.isop.unk22) {
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
    bool sp30;
    struct Expression *phi_s0;

    phi_s0 = table[tableIdx];
    sp31 = false;
    sp30 = false;
    if (expr->datatype == Sdt && expr->type != isconst) {
        if (expr->type != isvar && expr->type != issvar) {
            phi_s0 = NULL;
        } else if (int_reg_size < expr->data.isvar_issvar.size) {
            sp30 = true;
        }
    }

    sp33 = false;
    sp32 = false;
    while (sp33 == 0 && sp30 == 0 && phi_s0 != 0) {
        if (phi_s0->type == isop || phi_s0->type == isilda) {
            if (curgraphnode != phi_s0->graphnode) {
                goto block_137;
            }
        }

        // dumped, isrconst, empty, islda, isconst
        switch (expr->type) {
            case isilda:
                if (phi_s0->type == isilda
                        && expr->data.islda_isilda.addr == phi_s0->data.islda_isilda.addr
                        && expr->data.islda_isilda.size == phi_s0->data.islda_isilda.size
                        && addreq(phi_s0->data.islda_isilda.var_data, expr->data.islda_isilda.var_data)) {
                    sp33 = true;
                }
                break;

            case isvar:
            case issvar:
                if (phi_s0->type == expr->type && addreq(phi_s0->data.isvar_issvar.var_data, expr->data.isvar_issvar.var_data)) {
                    if (phi_s0->data.isvar_issvar.unk21) {
                        sp30 = true;
                        break;
                    }

                    sp33 = curgraphnode == phi_s0->graphnode && !phi_s0->unk2;
                    if (phi_s0->data.isvar_issvar.unk22 != 0) {
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
                            sp33 = !phi_s0->unk2;
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
                                sp33 = !phi_s0->unk2;
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
                            sp33 = !phi_s0->unk2;
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

block_137:
        if (!sp33) {
            phi_s0 = phi_s0->next;
        }
    }

    if (!sp33 || sp30) {
        phi_s0 = appendchain(tableIdx);
        phi_s0->graphnode = curgraphnode;
        if (expr->type == isvar || expr->type == issvar) {
            phi_s0->data.isvar_issvar.unk21 = sp30;
            if (!sp30) {
                phi_s0->data.isvar_issvar.unk22 = sp31;
            } else {
                phi_s0->data.isvar_issvar.unk22 = 0;
            }
        }

        if (sp32) {
            phi_s0->unk3 = false;
        } else {
            if (expr->type == isvar || expr->type == issvar ||
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
                phi_s0->unk3 = true;
            }
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
    while (phi_s0 != 0) {
        if (phi_s0->type == islda) {
            store = phi_s0->data.store;
            if (store->opc == Uistr && arg1 == store->expr && arg2 == store->u.store.u.istr.s.word && store->u.store.unk1F != 0 && dtype == store->u.store.u.istr.dtype && unk3C == store->u.store.size && !treekilled(store->u.store.expr)) {
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
    while (phi_s0 != 0) {
        if (phi_s0->type == islda) {
            store = phi_s0->data.store;
            if (store->opc == Uirst && arg1 == store->expr && arg2 == store->u.store.u.istr.s.word && store->u.store.unk1F != 0 && dtype == store->u.store.u.istr.dtype && unk3C == store->u.store.size && !treekilled(store->u.store.expr)) {
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
    int sp54;
    int sp50;
    int sp4C;
    struct Expression *temp_a0_2;

    switch (expr->type) {
        case isvar:
        case issvar:
            if (expr->type == issvar) {
                sp5C = oneloopblockexpr(expr->data.isvar_issvar.unk24, &sp54);
            }
            sp60 = unroll_searchloop(expr->table_index, expr, NULL, NULL);

            if (sp60->type == empty) {
                sp60->type = expr->type;
                sp60->data.isvar_issvar.var_data = expr->data.isvar_issvar.var_data;
                sp60->data.isvar_issvar.assignment = NULL;
                sp60->datatype = expr->datatype;
                sp60->data.isvar_issvar.size = expr->data.isvar_issvar.size;
                sp60->count = 0;
                sp60->data.isvar_issvar.unk30 = NULL;
                if (expr->type == issvar) {
                    sp60->data.isvar_issvar.unk3C = 0;
                    sp60->unk4 = 0;
                    sp60->unk5 = 0;
                    sp60->data.isvar_issvar.unk24 = sp5C;
                } else {
                    sp60->data.isvar_issvar.unk24 = NULL;
                }

                if (sp60->data.isvar_issvar.unk21 == 0) {
                    sp60->unk2 = 0;
                    if (sp60->unk3 && !sp60->data.isvar_issvar.unk22) {
                        sp60->unk3 = !varkilled(sp60, curgraphnode->varlisthead);
                    }
                } else {
                    sp60->unk2 = 1;
                    sp60->unk3 = 0;
                }
                sp60->data.isvar_issvar.is_volatile = expr->data.isvar_issvar.is_volatile;
            }

            if (sp60->data.isvar_issvar.assignment == NULL || !sp60->data.isvar_issvar.assignment->u.store.unk1F) {
                increasecount(sp60);
                if (!sp60->data.isvar_issvar.unk22) {
                    lodkillprev(sp60);
                }
                if (sp60->count == 1 && sp60->data.isvar_issvar.var_data.memtype != Amt) {
                    appendbbvarlst(sp60);
                    if (sp60->data.isvar_issvar.unk22) {
                        curgraphnode->varlisttail->unk8 = 1;
                    }
                }
            } else {
                sp60->data.isvar_issvar.assignment->u.store.unk1D = false;
                if (sp60->count == 0) {
                    if (!sp60->data.isvar_issvar.unk22) {
                        lodkillprev(sp60);
                    }
                    if (sp60->data.isvar_issvar.var_data.memtype != 5) {
                        appendbbvarlst(sp60);
                        if (sp60->data.isvar_issvar.unk22) {
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
            sp5C = oneloopblockexpr(expr->data.islda_isilda.unk34, &sp54);
            sp60 = unroll_searchloop(expr->table_index, expr, sp5C, NULL);
            if (sp60->type == empty) {
                sp60->type = isilda;
                sp60->unk4 = 0;
                sp60->unk5 = 0;
                sp60->count = 1;
                sp60->datatype = Adt;
                sp60->data.islda_isilda.var_data = expr->data.islda_isilda.var_data;
                sp60->data.islda_isilda.addr = expr->data.islda_isilda.addr;
                sp60->data.islda_isilda.size = expr->data.islda_isilda.size;
                sp60->var_access_list = NULL;
                sp60->data.islda_isilda.unk34 = sp5C;
                sp60->data.islda_isilda.unk38 = 0;
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
                        sp60->data.isop.unk30 = 0;
                        sp60->unk4 = 0;
                        sp60->unk5 = 0;
                        sp60->count = 1;
                        sp60->data.isop.aux2.v1.overflow_attr = expr->data.isop.aux2.v1.overflow_attr;
                        if (expr->data.isop.opc == Uequ ||
                                expr->data.isop.opc == Ugeq ||
                                expr->data.isop.opc == Ugrt ||
                                expr->data.isop.opc == Uleq ||
                                expr->data.isop.opc == Ules ||
                                expr->data.isop.opc == Uneq) {
                            sp60->data.isop.aux.unk38 = NULL;
                            sp60->data.isop.aux2.v2.unk3C = 0;
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
                        sp60->data.isop.unk30 = 0;
                        sp60->unk4 = 0;
                        sp60->unk5 = 0;
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
                        sp60->data.isop.unk30 = 0;
                        sp60->unk5 = 0;
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
                        sp60->data.isop.unk30 = 0;
                        sp60->unk5 = 0;
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
                            sp60->data.isop.aux2.v1.unk3F = expr->data.isop.aux2.v1.unk3F;
                            sp60->data.isop.unk30 = 0;
                            sp60->unk5 = 0;
                            sp60->unk4 = 0;
                            sp60->data.isop.aux.cvtfrom = expr->data.isop.aux.cvtfrom;

                            sp60->data.isop.unk34 = findbaseaddr(sp5C);
                            if ((sp60->datatype != 0xE) && (sp60->data.isop.opc != Uildv)) {
                                sp60->unk2 = 0;
                                if (sp60->unk3 != 0) {
                                    sp60->unk3 = varkilled(sp60, curgraphnode->varlisthead) == 0;
                                }
                            } else {
                                sp60->unk2 = 1;
                                sp60->unk3 = 0;
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
                        sp60->data.isop.aux2.v1.unk3F = expr->data.isop.aux2.v1.unk3F;
                        sp60->data.isop.unk30 = 0;
                        sp60->unk4 = 0;
                        sp60->unk5 = 0;
                        sp60->count = 1;
                        sp60->data.isop.aux.cvtfrom = expr->data.isop.aux.cvtfrom;

                        sp60->data.isop.unk34 = findbaseaddr(sp5C);
                        if ((sp60->datatype != 0xE) && (sp60->data.isop.opc != 0x33)) {
                            sp60->unk2 = 0;
                            if (sp60->unk3) {
                                sp60->unk3 = varkilled(sp60, curgraphnode->varlisthead) == 0;
                            }
                        } else {
                            sp60->unk2 = 1;
                            sp60->unk3 = 0;
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
                        sp60->unk5 = 0;
                        sp60->count = 1;
                        sp60->data.isop.datatype = Jdt;
                        sp60->data.isop.opc = expr->data.isop.opc;
                        sp60->data.isop.op1 = sp5C;
                        sp60->data.isop.aux2.v1.overflow_attr = 0;
                        sp60->data.isop.op2 = sp58;
                        sp60->data.isop.datasize = expr->data.isop.datasize;
                        sp60->unk2 = 0;
                        sp60->data.isop.unk30 = 0;
                        sp60->data.isop.aux2.v1.unk3C = expr->data.isop.aux2.v1.unk3C;

                        sp60->data.isop.unk34 = findbaseaddr(sp5C);
                        sp60->data.isop.aux.unk38 = findbaseaddr(sp58);
                        if (sp60->unk3 != 0) {
                            sp60->unk3 = varkilled(sp60, curgraphnode->varlisthead) == 0;
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
    bool sp5B;
    bool sp5A;
    bool sp59;
    int sp54;
    unsigned int sp50;
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
            sp5C = unroll_resetincr(oneloopblockexpr(stat->expr->data.isvar_issvar.assigned_value, &sp54), sp54);
            sp60 = unroll_searchloop(stat->expr->table_index, stat->expr, 0, 0);
            if (sp60->type != empty) {
                if (sp60->data.isvar_issvar.assignment == NULL) {
                    sp60->unk2 = true;
                    phi_s1 = appendchain(sp60->table_index);
                    phi_s1->graphnode = curgraphnode;
                    phi_s1->data.isvar_issvar.unk22 = sp60->data.isvar_issvar.unk22;
                    phi_s1->unk3 = 0;
                    phi_s1->data.isvar_issvar.unk21 = sp60->data.isvar_issvar.unk21;
                    sp5B = false;
                    sp5A = true;
                } else if (sp60->data.isvar_issvar.assigned_value != NULL && sp60->data.isvar_issvar.assignment->u.store.unk1D) {
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
                    sp5B = s0->u.store.unk1C;
                    sp5A = s0->u.store.unk1E;
                } else {
                    if (sp5C == sp60->data.isvar_issvar.assigned_value) {
                        decreasecount(sp5C);
                        return;
                    }

                    sp60->unk2 = 1;
                    sp60->data.isvar_issvar.assignment->u.store.unk1F = false;
                    phi_s1 = appendchain(sp60->table_index);
                    phi_s1->graphnode = curgraphnode;
                    phi_s1->data.isvar_issvar.unk22 = sp60->data.isvar_issvar.unk22;
                    phi_s1->unk3 = 0;
                    phi_s1->data.isvar_issvar.unk21 = sp60->data.isvar_issvar.unk21;
                    sp5B = false;
                    sp5A = false;
                }
            } else {
                phi_s1 = sp60;
                sp5B = true;
                sp5A = true;
            }

            if (phi_s1->type == empty) {
                phi_s1->type = stat->expr->type;
                phi_s1->data.isvar_issvar.var_data = stat->expr->data.isvar_issvar.var_data;
                phi_s1->datatype = stat->expr->datatype;
                phi_s1->data.isvar_issvar.size = stat->expr->data.isvar_issvar.size;
                phi_s1->unk3 = 0;
                phi_s1->count = 0;
                phi_s1->data.isvar_issvar.unk30 = NULL;
                if (stat->expr->type == issvar) {
                    phi_s1->data.isvar_issvar.unk24 = oneloopblockexpr(stat->u.store.expr, &sp54);
                    phi_s1->data.isvar_issvar.unk3C = 0;
                    phi_s1->unk4 = 0;
                    phi_s1->unk5 = 0;
                } else {
                    phi_s1->data.isvar_issvar.unk24 = NULL;
                }

                if (phi_s1->data.isvar_issvar.unk21 == 0) {
                    phi_s1->unk2 = 0;
                } else {
                    phi_s1->unk2 = 1;
                }

                phi_s1->data.isvar_issvar.is_volatile = stat->expr->data.isvar_issvar.is_volatile;
            }

            if (phi_s1->data.isvar_issvar.unk21 != 0) {
                sp5B = false;
                sp5A = false;
            }

            extendstat(stat->opc);
            phi_s1->data.isvar_issvar.assigned_value = sp5C;
            TRAP_IF(stat->unk3 != 0);
            stattail->unk3 = 0;
            if (stattail->opc == Uisst) {
                stattail->u.store.expr = phi_s1->data.isvar_issvar.unk24;
            }

            stattail->expr = phi_s1;
            phi_s1->data.isvar_issvar.assignment = stattail;
            if (stattail->unk3 == 0) {
                stattail->u.store.unk1C = sp5B;
                if (phi_s1->data.isvar_issvar.unk22 == 0 && sp5B != 0) {
                    stattail->u.store.unk1C = strlkilled(stattail, curgraphnode->varlisthead) == 0;
                }

                stattail->u.store.unk1E = sp5A;
                if (phi_s1->data.isvar_issvar.unk22 == 0 && sp5A != 0) {
                    stattail->u.store.unk1E = strskilled(stattail, curgraphnode->varlisthead) == 0;
                }

                stattail->u.store.unk1D = phi_s1->data.isvar_issvar.unk21 == 0;
                stattail->u.store.unk1F = phi_s1->data.isvar_issvar.unk21 == 0;
                stattail->unk1 = stat->unk1;
            } else {
                stattail->u.store.unk1C = 0;
                stattail->u.store.unk1E = 0;
                stattail->u.store.unk1D = 0;
                stattail->u.store.unk1F = 0;
                stattail->unk1 = 0;
            }

            stattail->u.store.u.str.unk2C = 0;
            stattail->u.store.u.str.unk30 = 0;
            stattail->unk2 = 0;
            if (phi_s1->data.isvar_issvar.unk22 == 0) {
                strkillprev(stattail);
            }

            appendstorelist();

            if (phi_s1->data.isvar_issvar.unk22 != 0) {
                curgraphnode->varlisttail->unk8 = 1;
            }
            return;

        case Uchkt:
            stattail->expr = oneloopblockexpr(stat->expr, &sp54);
            stattail->expr = unroll_resetincr(stattail->expr, sp54);
            stattail->u.trap.unk18 = 0;
            return;

        case Uaos:
            stattail->expr = oneloopblockexpr(stat->expr, &sp54);
            stattail->expr = unroll_resetincr(stattail->expr, sp54);
            return;

        case Ulab:
            stattail->u.label.flags = stat->u.label.flags;
            stattail->u.label.length = stat->u.label.length;
            stattail->u.label.blockno = stat->u.label.blockno;
            return;

        case Uistr:
        case Uistv:
            sp60 = unroll_resetincr(oneloopblockexpr(stat->u.store.expr, &sp54), sp54);
            temp_a0_4 = oneloopblockexpr(stat->expr, &sp54);
            sp54 += stat->u.store.u.istr.s.word;
            phi_s1 = unroll_resetincr_mod(temp_a0_4, &sp54);
            sp59 = 0;
            if (stat->opc == Uistr) {
                s0 = curgraphnode->stat_head;
                while (s0 != NULL && sp59 == 0) {
                    if (s0->opc == Uistr
                            && phi_s1 == s0->expr
                            && sp54 == s0->u.store.u.istr.s.word
                            && stat->u.store.size == s0->u.store.size) {

                        if (s0->u.store.unk1D != 0) {
                            decreasecount(s0->expr);
                            decreasecount(s0->u.store.expr);
                            s0->opc = Unop;
                            s0->u.store.var_access_list_item->type = 0;
                        } else if (s0->u.store.unk1F != 0 && sp60 == s0->u.store.expr) {
                            sp59 = 1;
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
                stattail->u.store.u.istr.unk2D = stat->u.store.u.istr.unk2D;
                stattail->u.store.u.istr.s.word = sp54;
                stattail->u.store.u.istr.offset = stat->u.store.u.istr.offset;
                stattail->u.store.size = stat->u.store.size;
                stattail->u.store.baseaddr = findbaseaddr(phi_s1);

                if (stat->opc == Uistr) {
                    stattail->u.store.unk1C = strlkilled(stattail, curgraphnode->varlisthead) == 0;
                    stattail->u.store.unk1D = 1;
                    stattail->u.store.unk1E = strskilled(stattail, curgraphnode->varlisthead) == 0;
                    stattail->u.store.unk1F = 1;
                } else {
                    stattail->u.store.unk1C = 0;
                    stattail->u.store.unk1D = 0;
                    stattail->u.store.unk1E = 0;
                    stattail->u.store.unk1F = 0;
                }

                strkillprev(stattail);
                appendstorelist();
            }
            return;

        case Uirst:
        case Uirsv:
            sp60 = unroll_resetincr(oneloopblockexpr(stat->u.store.expr, &sp54), sp54);
            phi_s1 = unroll_resetincr_mod(oneloopblockexpr(stat->expr, &sp54), &sp54);

            extendstat(stat->opc);
            stattail->expr = phi_s1;
            stattail->u.store.expr = sp60;
            stattail->u.store.u.istr.dtype = stat->u.store.u.istr.dtype;
            stattail->u.store.u.istr.unk2D = stat->u.store.u.istr.unk2D;
            stattail->u.store.u.istr.s.word = sp54;
            stattail->u.store.u.istr.offset = stat->u.store.u.istr.offset;
            stattail->u.store.size = stat->u.store.size;
            stattail->u.store.baseaddr = findbaseaddr(phi_s1);
            if (stat->opc == Uirst) {
                stattail->u.store.unk1C = strlkilled(stattail, curgraphnode->varlisthead) == 0;
                stattail->u.store.unk1D = 1;
                stattail->u.store.unk1E = strskilled(stattail, curgraphnode->varlisthead) == 0;
                stattail->u.store.unk1F = 1;
            } else {
                stattail->u.store.unk1C = 0;
                stattail->u.store.unk1D = 0;
                stattail->u.store.unk1E = 0;
                stattail->u.store.unk1F = 0;
            }

            strkillprev(stattail);
            appendstorelist();
            return;

        case Umov:
        case Umovv:
            stattail->expr = oneloopblockexpr(stat->expr, &sp54);
            stattail->expr = unroll_resetincr(stattail->expr, sp54);
            stattail->u.store.expr = oneloopblockexpr(stat->u.store.expr, &sp54);
            stattail->u.store.expr = unroll_resetincr(stattail->u.store.expr, sp54);
            stattail->u.store.size = stat->u.store.size;
            stattail->u.store.u.mov.unk32 = stat->u.store.u.mov.unk32;
            stattail->u.store.u.mov.unk33 = stat->u.store.u.mov.unk33;
            stattail->u.store.u.mov.baseaddr = findbaseaddr(stattail->u.store.expr);
            appendstorelist();
            stattail->u.store.var_access_list_item->type = 3;
            movkillprev(stattail);
            stattail->u.store.baseaddr = findbaseaddr(stattail->expr);
            if (stat->opc == Umov) {
                stattail->u.store.unk1C = strlkilled(stattail, curgraphnode->varlisthead) == 0;
                stattail->u.store.unk1E = strskilled(stattail, curgraphnode->varlisthead) == 0;
                stattail->u.store.unk1D = 1;
                stattail->u.store.unk1F = 1;
            } else {
                stattail->u.store.unk1C = 0;
                stattail->u.store.unk1D = 0;
                stattail->u.store.unk1E = 0;
                stattail->u.store.unk1F = 0;
            }

            strkillprev(stattail);
            appendstorelist();
            return;

        case Ustsp:
            stattail->expr = oneloopblockexpr(stat->expr, &sp54);
            stattail->expr = unroll_resetincr(stattail->expr, sp54);
            return;

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
            return;

        case Uloc:
            stattail->u.loc.page = stat->u.loc.page;
            stattail->u.loc.line = stat->u.loc.line;
            return;

        case Ubgnb:
        case Uendb:
            stattail->u.bgnb.blockno = stat->u.bgnb.blockno;
            return;

        case Upop:
            stattail->expr = oneloopblockexpr(stat->expr, &sp54);
            if (stat->u.pop.unk15 != 0) {
                stattail->expr = unroll_resetincr(stattail->expr, sp54);
            }

            stattail->u.pop.dtype = stat->u.pop.dtype;
            stattail->u.pop.unk15 = stat->u.pop.unk15;
            return;

        case Uujp:
            stattail->u.jp.target_blockno = stat->u.jp.target_blockno;
            return;

        case Ufjp:
        case Utjp:
            stattail->expr = oneloopblockexpr(stat->expr, &sp54);
            if (stattail->expr->type == isvar) {
                stattail->expr = binopwithconst(1, stattail->expr, sp54);
            } else {
                stattail->expr = unroll_resetincr(stattail->expr, sp54);
            }

            stattail->u.jp.incre = 0;
            stattail->u.jp.target_blockno = stat->u.jp.target_blockno;
            return;

        case Uijp:
            stattail->expr = oneloopblockexpr(stat->expr, &sp54);
            stattail->expr = unroll_resetincr(stattail->expr, sp54);
            return;

        case Uxjp:
            stattail->expr = oneloopblockexpr(stat->expr, &sp54);
            if (stattail->expr->type == isvar) {
                stattail->expr = binopwithconst(1, stattail->expr, sp54);
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
            return;

        case Uclbd:
        case Ucubd:
        case Ustep:
            stattail->u.clbd_cubd_step.dtype = stat->u.clbd_cubd_step.dtype;
            stattail->u.clbd_cubd_step.unk18 = stat->u.clbd_cubd_step.unk18;
            return;

        case Uctrl:
            stattail->u.ctrl.dtype = stat->u.ctrl.dtype;
            stattail->u.ctrl.unk15 = stat->u.ctrl.unk15;
            stattail->u.ctrl.var = stat->u.ctrl.var;
            return;

        default:
            caseerror(1, 984, "uoptroll.p", 10);
            return;

        case Unop: // ignored 19
        case Ulend: // ignored 20
        case Ulbdy: // ignored 21
        case Ulbgn: // ignored 21
        case Ultrm: // ignored 21
        case Uret: // ignored 21
            break;
    }
}

/*
0046FA20 new_header_node
0046FCD4 link_jump_in_loop
004713E8 loopunroll
*/
void create_edge(struct Graphnode *node1, struct Graphnode *node2) {
    struct GraphnodeList *edge;

    edge = alloc_new(sizeof(struct GraphnodeList), &perm_heap);
    edge->graphnode = node2;
    edge->next = node1->successors;
    node1->successors = edge;

    edge = alloc_new(sizeof(struct GraphnodeList), &perm_heap);
    edge->graphnode = node1;
    edge->next = node2->predecessors;
    node2->predecessors = edge;
}

/*
0046FCD4 link_jump_in_loop
00470048 pre_loopblock
00470248 post_loopblock
004713E8 loopunroll
*/
void new_header_node(bool arg0) {
    curgraphnode = alloc_new(0x174, &perm_heap);
    init_graphnode(curgraphnode);
    curgraphnode->terminal = 1;
    curgraphnode->unk7 = 2;
    curgraphnode->num = curstaticno++;

    curgraphnode->loopdepth = loopheader->loopdepth;
    curgraphnode->unkBb8 = loopheader->unkBb8;
    curgraphnode->unk2C = loopheader->unk2C;
    curgraphnode->bvs.init.line = loopheader->bvs.init.line;

    curgraphnode->next = loopbody;
    curgraphnode->prev = loopbody->prev;
    loopbody->prev->next = curgraphnode;
    loopbody->prev = curgraphnode;

    curgraphnode->predecessors = NULL;
    curgraphnode->successors = NULL;

    if (arg0 != 0) {
        create_edge(loopheader, curgraphnode);
    }

    loopheader = curgraphnode;
}

/*
004713E8 loopunroll
*/
void record_labels(void) {
    struct Graphnode *node_s0 = loopbody;

    while (node_s0 != loopbodyend) {
        if (node_s0 != node_s0->stat_tail->next->graphnode) {
            node_s0 = node_s0->stat_tail->next->graphnode;
        } else {
            node_s0 = node_s0->stat_tail->next->next->graphnode;
        }

        if (node_s0->blockno != 0 && node_s0->blockno != looplab) {
            labelmap_unused->blockno = node_s0->blockno;
            if (labelmap_unused->next != 0) {
                labelmap_unused = labelmap_unused->next;
            } else {
                labelmap_unused->next = alloc_new(0x10, &perm_heap);
                labelmap_unused = labelmap_unused->next;
                labelmap_unused->next = 0;
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
            new_header_node(0);
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
                if (curgraphnode->stat_head != 0) {
                    curgraphnode->stat_tail = stattail;
                    codeimage();
                    new_header_node(1);

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
            }
        }
        stat = stat->next;
    }
}

/*
004713E8 loopunroll
*/
void post_loopblock(bool arg0, bool arg1, bool arg2) {
    struct Statement *phi_s0;
    int i;

    phi_s0 = incr_stat->next;

    while (phi_s0 != loopbodyend->stat_tail) {
        if (phi_s0->opc == Uclab) {
            int length = phi_s0->u.label.length;

            for (i = 0; i < length; i++)
            {
                phi_s0 = phi_s0->next;
            }
        } else {
            if (arg1 && phi_s0->opc == Ulab) {
                if (curgraphnode->stat_head != 0) {
                    curgraphnode->stat_tail = stattail;
                    codeimage();
                    new_header_node(1);
                    if (arg2) {
                        curgraphnode->loop = loopbody->loop;
                    } else {
                        curgraphnode->loop = loopbody->loop->outer;
                    }
                }
            }
            if (arg0) {
                oneloopblockstmt(phi_s0);
            } else {
                switch (phi_s0->opc) {
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
                        oneloopblockstmt(phi_s0);
                        break;
                }
            }

            if (arg1) {
                switch (phi_s0->opc) {
                    case Ufjp:
                    case Ulab:
                    case Uret:
                    case Utjp:
                    case Uujp:
                        link_jump_in_loop(phi_s0, arg2);
                        break;
                }
            }
        }

        phi_s0 = phi_s0->next;
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
            return expr_instr(expr->data.isvar_issvar.unk24) + 1;
        case isilda:
            return expr_instr(expr->data.islda_isilda.unk34) + 1;
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
        } else {
            if (stat->opc != Uret && stat->opc != Uujp) {
                ret += expr_instr(stat->expr);
            }
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
        binop->data.isop.unk30 = 0;
        binop->unk4 = 0;
        binop->unk5 = 0;
        binop->count = 1;
        binop->graphnode = curgraphnode;

        if (opc == Uneq) {
            binop->data.isop.aux.unk38_int = 0;
            binop->data.isop.aux2.v2.unk3C = 0;
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
        sp34->data.isop.unk30 = 0;
        sp34->unk5 = 0;
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
            sp30->data.isop.unk30 = 0;
            sp30->unk5 = 0;
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
        neq0->data.isop.aux2.v1.overflow_attr = 0;
        neq0->count = 1;
        neq0->data.isop.unk30 = 0;
        neq0->unk5 = 0;
        neq0->unk4 = 0;
        neq0->data.isop.aux.unk38_int = 0;
        neq0->data.isop.aux2.v2.unk3C = 0;
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
        neg->data.isop.unk30 = 0;
        neg->unk5 = 0;
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
    struct VariableInner var;

    var.addr = addr;
    var.blockno = curblk;
    var.memtype = Mmt;
    ret = appendchain(isvarhash(var));

    ret->data.isvar_issvar.unk21 = 0;
    ret->data.isvar_issvar.unk22 = 1;
    ret->unk3 = 0;
    ret->type = isvar;
    ret->graphnode = curgraphnode;
    ret->data.isvar_issvar.var_data = var;
    if (store->type == isop) {
        ret->datatype = store->data.isop.datatype;
    } else {
        ret->datatype = store->datatype;
    }
    ret->data.isvar_issvar.size = sizeoftyp(ret->datatype);
    ret->count = 0;
    ret->data.isvar_issvar.unk30 = NULL;
    ret->data.isvar_issvar.unk24 = NULL;
    ret->unk2 = 0;
    ret->data.isvar_issvar.is_volatile = 0;
    ret->data.isvar_issvar.var_data.level = curlevel;

    extendstat(Ustr);
    ret->data.isvar_issvar.assigned_value = store;

    stattail->unk3 = 0;
    stattail->expr = ret;
    stattail->u.store.unk1C = 1;
    stattail->u.store.unk1E = 1;
    stattail->u.store.unk1D = 1;
    stattail->u.store.unk1F = 1;
    stattail->unk1 = 0;
    stattail->u.store.u.str.unk2C = 0;
    stattail->u.store.u.str.unk30 = 0;
    stattail->unk2 = 0;
    ret->data.isvar_issvar.assignment = stattail;
    appendstorelist();
    curgraphnode->varlisttail->unk8 = 1;
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
            reset_images(expr->data.islda_isilda.unk34);
            return;

        case isvar:
        case issvar:
            if (expr->type == issvar) {
                reset_images(expr->data.isvar_issvar.unk24);
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
    int phi_s2_8;
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
                            range = loopCond->data.isop.op2->data.islda_isilda.addr;
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
                            range = loopCond->data.isop.op2->data.islda_isilda.addr;
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
                        reset_images(stat_s3->expr->data.isop.unk34);
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
                        decreasecount(stat_s0->expr->data.isop.unk34);
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
                        || incr_stat->unk1 == 0
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
                        new_header_node(1);
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
                    curgraphnode->unk2C = node_s1->unk2C;
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
                        phi_s2_8 = -(tempdisp + i_var_size);
                    } else {
                        tempdisp += i_var_size;
                        phi_s2_8 = tempdisp;
                    }

                    new_header_node(1);
                    curgraphnode->loop = loopbody->loop->outer;
                    incr_amount = 0;
                    expr_s0 = oneloopblockexpr(spAC, &spCC);
                    temp_expr = oneloopblockexpr(spA8, &spC8);
                    if (stat_s3->u.jp.incre > 0) {
                        expr_s0 = str_to_temporary(phi_s2_8, form_rem(unroll_resetincr(form_bop(Usub, expr_s0, temp_expr), spCC - spC8), unroll_times_local * stat_s3->u.jp.incre));
                    } else {
                        expr_s0 = str_to_temporary(phi_s2_8, form_neg(form_rem(unroll_resetincr(form_bop(Usub, temp_expr, expr_s0), spC8 - spCC), unroll_times_local * -stat_s3->u.jp.incre)));
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
                    new_header_node(1);
                    curgraphnode->loop = loopbody->loop->outer;
                    expr_s0 = oneloopblockexpr(expr_s0, &spCC);
                    expr_s0 = str_to_temporary(phi_s2_8, form_bop(1, expr_s0, oneloopblockexpr(spA8, &spC8)));
                    curgraphnode->stat_tail = stattail;
                    codeimage();
                    new_header_node(1);
                    curgraphnode->loop = loopbody->loop->outer;
                    sp88 = curgraphnode;
                    curgraphnode->loopdepth = loopbody->loopdepth;
                    curgraphnode->unk2C = loopbody->unk2C;
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
                    new_header_node(1);
                    curgraphnode->loop = loopbody->loop->outer;
                    curgraphnode->unkBb8 = 0;
                    curgraphnode->unk2C = node_s1->unk2C;
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
                    new_header_node(1);
                    curgraphnode->blockno = spB4;
                    curgraphnode->loop = loopbody->loop->outer;
                    curgraphnode->unk2C = node_s1->unk2C;
                    extendstat(Ulab);
                    stattail->u.label.flags = 0;
                    stattail->u.label.length = 0;
                    stattail->u.label.blockno = spB4;
                    create_edge(spC0, curgraphnode);
                    curgraphnode->stat_tail = stattail;
                    init_node_vectors(curgraphnode);
                }


                new_header_node(1);
                curgraphnode->loop = loopbody->loop;
                sp88 = curgraphnode;
                curgraphnode->loopdepth = loopbody->loopdepth;
                curgraphnode->unk2C = loopbody->unk2C;
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
                    incr_amount = incr_amount + stat_s3->u.jp.incre;
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
                        decreasecount(stat_s3->expr->data.isop.unk34);
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

    if (dbugno) {
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

__asm__(R""(
.set noat
.set noreorder
    .type func_00473504, @function
func_00473504:
    # 004737E0 par_to_str
/* 00473504 3C1C0FBA */  .cpload $t9
/* 00473508 279C6D8C */  
/* 0047350C 0399E021 */  
/* 00473510 27BDFFC0 */  addiu $sp, $sp, -0x40
/* 00473514 AFBF003C */  sw    $ra, 0x3c($sp)
/* 00473518 AFBC0038 */  sw    $gp, 0x38($sp)
/* 0047351C AFB70034 */  sw    $s7, 0x34($sp)
/* 00473520 AFB60030 */  sw    $s6, 0x30($sp)
/* 00473524 AFB5002C */  sw    $s5, 0x2c($sp)
/* 00473528 AFB40028 */  sw    $s4, 0x28($sp)
/* 0047352C AFB30024 */  sw    $s3, 0x24($sp)
/* 00473530 AFB20020 */  sw    $s2, 0x20($sp)
/* 00473534 AFB1001C */  sw    $s1, 0x1c($sp)
/* 00473538 AFB00018 */  sw    $s0, 0x18($sp)
/* 0047353C AFA40040 */  sw    $a0, 0x40($sp)
/* 00473540 8C430000 */  lw    $v1, ($v0)
/* 00473544 944EFFE0 */  lhu   $t6, -0x20($v0)
/* 00473548 8F988DF8 */  lw     $t8, %got(table)($gp)
/* 0047354C 90680014 */  lbu   $t0, 0x14($v1)
/* 00473550 000E7880 */  sll   $t7, $t6, 2
/* 00473554 2401000E */  li    $at, 14
/* 00473558 01F8C821 */  addu  $t9, $t7, $t8
/* 0047355C 0040A025 */  move  $s4, $v0
/* 00473560 8F300000 */  lw    $s0, ($t9)
/* 00473564 00008825 */  move  $s1, $zero
/* 00473568 0000B025 */  move  $s6, $zero
/* 0047356C 0000B825 */  move  $s7, $zero
/* 00473570 15010008 */  bne   $t0, $at, .L00473594
/* 00473574 00009025 */   move  $s2, $zero
/* 00473578 8F898B34 */  lw     $t1, %got(int_reg_size)($gp)
/* 0047357C 906A0015 */  lbu   $t2, 0x15($v1)
/* 00473580 8D290000 */  lw    $t1, ($t1)
/* 00473584 012A082A */  slt   $at, $t1, $t2
/* 00473588 10200002 */  beqz  $at, .L00473594
/* 0047358C 00000000 */   nop   
/* 00473590 24120001 */  li    $s2, 1
.L00473594:
/* 00473594 16400034 */  bnez  $s2, .L00473668
/* 00473598 00000000 */   nop   
/* 0047359C 12000032 */  beqz  $s0, .L00473668
/* 004735A0 24130003 */   li    $s3, 3
/* 004735A4 8F9589B4 */  lw     $s5, %got(curgraphnode)($gp)
/* 004735A8 920B0000 */  lbu   $t3, ($s0)
.L004735AC:
/* 004735AC 166B0025 */  bne   $s3, $t3, .L00473644
/* 004735B0 00000000 */   nop   
/* 004735B4 8E040028 */  lw    $a0, 0x28($s0)
/* 004735B8 8E05002C */  lw    $a1, 0x2c($s0)
/* 004735BC 8F99860C */  lw    $t9, %call16(addreq)($gp)
/* 004735C0 AFA40000 */  sw    $a0, ($sp)
/* 004735C4 AFA50004 */  sw    $a1, 4($sp)
/* 004735C8 8E86FFE4 */  lw    $a2, -0x1c($s4)
/* 004735CC AFA60008 */  sw    $a2, 8($sp)
/* 004735D0 8E87FFE8 */  lw    $a3, -0x18($s4)
/* 004735D4 0320F809 */  jalr  $t9
/* 004735D8 AFA7000C */   sw    $a3, 0xc($sp)
/* 004735DC 10400019 */  beqz  $v0, .L00473644
/* 004735E0 8FBC0038 */   lw    $gp, 0x38($sp)
/* 004735E4 92180021 */  lbu   $t8, 0x21($s0)
/* 004735E8 53000004 */  beql  $t8, $zero, .L004735FC
/* 004735EC 8EB90000 */   lw    $t9, ($s5)
/* 004735F0 10000014 */  b     .L00473644
/* 004735F4 24120001 */   li    $s2, 1
/* 004735F8 8EB90000 */  lw    $t9, ($s5)
.L004735FC:
/* 004735FC 8E080010 */  lw    $t0, 0x10($s0)
/* 00473600 03281826 */  xor   $v1, $t9, $t0
/* 00473604 2C630001 */  sltiu $v1, $v1, 1
/* 00473608 10600003 */  beqz  $v1, .L00473618
/* 0047360C 00601025 */   move  $v0, $v1
/* 00473610 92020002 */  lbu   $v0, 2($s0)
/* 00473614 2C420001 */  sltiu $v0, $v0, 1
.L00473618:
/* 00473618 92090022 */  lbu   $t1, 0x22($s0)
/* 0047361C 305100FF */  andi  $s1, $v0, 0xff
/* 00473620 304A00FF */  andi  $t2, $v0, 0xff
/* 00473624 11200002 */  beqz  $t1, .L00473630
/* 00473628 00000000 */   nop   
/* 0047362C 24170001 */  li    $s7, 1
.L00473630:
/* 00473630 15400004 */  bnez  $t2, .L00473644
/* 00473634 00000000 */   nop   
/* 00473638 10600002 */  beqz  $v1, .L00473644
/* 0047363C 00000000 */   nop   
/* 00473640 24160001 */  li    $s6, 1
.L00473644:
/* 00473644 16200002 */  bnez  $s1, .L00473650
/* 00473648 00000000 */   nop   
/* 0047364C 8E10001C */  lw    $s0, 0x1c($s0)
.L00473650:
/* 00473650 16200005 */  bnez  $s1, .L00473668
/* 00473654 00000000 */   nop   
/* 00473658 16400003 */  bnez  $s2, .L00473668
/* 0047365C 00000000 */   nop   
/* 00473660 5600FFD2 */  bnezl $s0, .L004735AC
/* 00473664 920B0000 */   lbu   $t3, ($s0)
.L00473668:
/* 00473668 12200003 */  beqz  $s1, .L00473678
/* 0047366C 8F9589B4 */   lw     $s5, %got(curgraphnode)($gp)
/* 00473670 52400010 */  beql  $s2, $zero, .L004736B4
/* 00473674 8FBF003C */   lw    $ra, 0x3c($sp)
.L00473678:
/* 00473678 8F998620 */  lw    $t9, %call16(appendchain)($gp)
/* 0047367C 97A40042 */  lhu   $a0, 0x42($sp)
/* 00473680 0320F809 */  jalr  $t9
/* 00473684 00000000 */   nop   
/* 00473688 8EAB0000 */  lw    $t3, ($s5)
/* 0047368C 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00473690 324C00FF */  andi  $t4, $s2, 0xff
/* 00473694 00408025 */  move  $s0, $v0
/* 00473698 A0520021 */  sb    $s2, 0x21($v0)
/* 0047369C 15800002 */  bnez  $t4, .L004736A8
/* 004736A0 AC4B0010 */   sw    $t3, 0x10($v0)
/* 004736A4 A0570022 */  sb    $s7, 0x22($v0)
.L004736A8:
/* 004736A8 2ECD0001 */  sltiu $t5, $s6, 1
/* 004736AC A04D0003 */  sb    $t5, 3($v0)
/* 004736B0 8FBF003C */  lw    $ra, 0x3c($sp)
.L004736B4:
/* 004736B4 02001025 */  move  $v0, $s0
/* 004736B8 8FB00018 */  lw    $s0, 0x18($sp)
/* 004736BC 8FB1001C */  lw    $s1, 0x1c($sp)
/* 004736C0 8FB20020 */  lw    $s2, 0x20($sp)
/* 004736C4 8FB30024 */  lw    $s3, 0x24($sp)
/* 004736C8 8FB40028 */  lw    $s4, 0x28($sp)
/* 004736CC 8FB5002C */  lw    $s5, 0x2c($sp)
/* 004736D0 8FB60030 */  lw    $s6, 0x30($sp)
/* 004736D4 8FB70034 */  lw    $s7, 0x34($sp)
/* 004736D8 03E00008 */  jr    $ra
/* 004736DC 27BD0040 */   addiu $sp, $sp, 0x40

    .type func_004736E0, @function
func_004736E0:
    # 004737E0 par_to_str
/* 004736E0 3C1C0FBA */  .cpload $t9
/* 004736E4 279C6BB0 */  
/* 004736E8 0399E021 */  
/* 004736EC 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 004736F0 AFB00018 */  sw    $s0, 0x18($sp)
/* 004736F4 00C08025 */  move  $s0, $a2
/* 004736F8 AFBF0024 */  sw    $ra, 0x24($sp)
/* 004736FC AFBC0020 */  sw    $gp, 0x20($sp)
/* 00473700 AFB1001C */  sw    $s1, 0x1c($sp)
/* 00473704 AFA40030 */  sw    $a0, 0x30($sp)
/* 00473708 AFA50034 */  sw    $a1, 0x34($sp)
/* 0047370C 10C0002E */  beqz  $a2, .L004737C8
/* 00473710 AFA2002C */   sw    $v0, 0x2c($sp)
/* 00473714 27B10030 */  addiu $s1, $sp, 0x30
/* 00473718 8E240000 */  lw    $a0, ($s1)
.L0047371C:
/* 0047371C 8F998430 */  lw    $t9, %call16(compareaddr)($gp)
/* 00473720 AFA40000 */  sw    $a0, ($sp)
/* 00473724 8E250004 */  lw    $a1, 4($s1)
/* 00473728 AFA50004 */  sw    $a1, 4($sp)
/* 0047372C 8E060004 */  lw    $a2, 4($s0)
/* 00473730 AFA60008 */  sw    $a2, 8($sp)
/* 00473734 8E070008 */  lw    $a3, 8($s0)
/* 00473738 0320F809 */  jalr  $t9
/* 0047373C AFA7000C */   sw    $a3, 0xc($sp)
/* 00473740 304300FF */  andi  $v1, $v0, 0xff
/* 00473744 2C610003 */  sltiu $at, $v1, 3
/* 00473748 10200015 */  beqz  $at, .L004737A0
/* 0047374C 8FBC0020 */   lw    $gp, 0x20($sp)
/* 00473750 8F818044 */  lw    $at, %got(jtbl_1000DBD4)($gp)
/* 00473754 00034080 */  sll   $t0, $v1, 2
/* 00473758 00280821 */  addu  $at, $at, $t0
/* 0047375C 8C28DBD4 */  lw    $t0, %lo(jtbl_1000DBD4)($at)
/* 00473760 011C4021 */  addu  $t0, $t0, $gp
/* 00473764 01000008 */  jr    $t0
/* 00473768 00000000 */   nop   
.L0047376C:
/* 0047376C 92090001 */  lbu   $t1, 1($s0)
/* 00473770 55200004 */  bnezl $t1, .L00473784
/* 00473774 8FAA002C */   lw    $t2, 0x2c($sp)
/* 00473778 10000014 */  b     .L004737CC
/* 0047377C 8E02000C */   lw    $v0, 0xc($s0)
/* 00473780 8FAA002C */  lw    $t2, 0x2c($sp)
.L00473784:
/* 00473784 8D4B0000 */  lw    $t3, ($t2)
/* 00473788 10000010 */  b     .L004737CC
/* 0047378C 91620015 */   lbu   $v0, 0x15($t3)
.L00473790:
/* 00473790 1000000B */  b     .L004737C0
/* 00473794 8E100010 */   lw    $s0, 0x10($s0)
.L00473798:
/* 00473798 10000009 */  b     .L004737C0
/* 0047379C 8E100014 */   lw    $s0, 0x14($s0)
.L004737A0:
/* 004737A0 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 004737A4 8F868044 */  lw    $a2, %got(RO_1000DBC9)($gp)
/* 004737A8 24040001 */  li    $a0, 1
/* 004737AC 24050AB8 */  li    $a1, 2744
/* 004737B0 2407000A */  li    $a3, 10
/* 004737B4 0320F809 */  jalr  $t9
/* 004737B8 24C6DBC9 */   addiu $a2, %lo(RO_1000DBC9) # addiu $a2, $a2, -0x2437
/* 004737BC 8FBC0020 */  lw    $gp, 0x20($sp)
.L004737C0:
/* 004737C0 5600FFD6 */  bnezl $s0, .L0047371C
/* 004737C4 8E240000 */   lw    $a0, ($s1)
.L004737C8:
/* 004737C8 00001025 */  move  $v0, $zero
.L004737CC:
/* 004737CC 8FBF0024 */  lw    $ra, 0x24($sp)
/* 004737D0 8FB00018 */  lw    $s0, 0x18($sp)
/* 004737D4 8FB1001C */  lw    $s1, 0x1c($sp)
/* 004737D8 03E00008 */  jr    $ra
/* 004737DC 27BD0030 */   addiu $sp, $sp, 0x30

glabel par_to_str
    .ent par_to_str
    # 004761D0 tail_recursion
/* 004737E0 3C1C0FBA */  .cpload $t9
/* 004737E4 279C6AB0 */  
/* 004737E8 0399E021 */  
/* 004737EC 8F8E8980 */  lw     $t6, %got(curblk)($gp)
/* 004737F0 27BDFFA0 */  addiu $sp, $sp, -0x60
/* 004737F4 8FAF0048 */  lw    $t7, 0x48($sp)
/* 004737F8 8DCE0000 */  lw    $t6, ($t6)
/* 004737FC AFBF001C */  sw    $ra, 0x1c($sp)
/* 00473800 000FC2C2 */  srl   $t8, $t7, 0xb
/* 00473804 01D8C826 */  xor   $t9, $t6, $t8
/* 00473808 001942C0 */  sll   $t0, $t9, 0xb
/* 0047380C 010F4826 */  xor   $t1, $t0, $t7
/* 00473810 AFA90048 */  sw    $t1, 0x48($sp)
/* 00473814 93AA004A */  lbu   $t2, 0x4a($sp)
/* 00473818 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0047381C AFA40060 */  sw    $a0, 0x60($sp)
/* 00473820 314BFFF8 */  andi  $t3, $t2, 0xfff8
/* 00473824 356C0002 */  ori   $t4, $t3, 2
/* 00473828 AFA50064 */  sw    $a1, 0x64($sp)
/* 0047382C AFA60068 */  sw    $a2, 0x68($sp)
/* 00473830 A3AC004A */  sb    $t4, 0x4a($sp)
/* 00473834 8C8E001C */  lw    $t6, 0x1c($a0)
/* 00473838 27B80044 */  addiu $t8, $sp, 0x44
/* 0047383C 8F8F8B6C */  lw     $t7, %got(curproc)($gp)
/* 00473840 AFAE0044 */  sw    $t6, 0x44($sp)
/* 00473844 8F040000 */  lw    $a0, ($t8)
/* 00473848 8F998030 */  lw    $t9, %got(func_004736E0)($gp)
/* 0047384C 8DEF0000 */  lw    $t7, ($t7)
/* 00473850 AFA40000 */  sw    $a0, ($sp)
/* 00473854 8F050004 */  lw    $a1, 4($t8)
/* 00473858 273936E0 */  addiu $t9, %lo(func_004736E0) # addiu $t9, $t9, 0x36e0
/* 0047385C 27A20060 */  addiu $v0, $sp, 0x60
/* 00473860 AFA50004 */  sw    $a1, 4($sp)
/* 00473864 0320F809 */  jalr  $t9
/* 00473868 8DE60004 */   lw    $a2, 4($t7)
/* 0047386C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00473870 AFA2003C */  sw    $v0, 0x3c($sp)
/* 00473874 1440002E */  bnez  $v0, .L00473930
/* 00473878 00001825 */   move  $v1, $zero
/* 0047387C 8F898AF4 */  lw     $t1, %got(bigendian)($gp)
/* 00473880 8FAA0044 */  lw    $t2, 0x44($sp)
/* 00473884 24030002 */  li    $v1, 2
/* 00473888 91290000 */  lbu   $t1, ($t1)
/* 0047388C 27AC0044 */  addiu $t4, $sp, 0x44
/* 00473890 27A20060 */  addiu $v0, $sp, 0x60
/* 00473894 11200137 */  beqz  $t1, .L00473D74
/* 00473898 254B0002 */   addiu $t3, $t2, 2
/* 0047389C AFAB0044 */  sw    $t3, 0x44($sp)
/* 004738A0 8D840000 */  lw    $a0, ($t4)
/* 004738A4 8F988B6C */  lw     $t8, %got(curproc)($gp)
/* 004738A8 8F998030 */  lw    $t9, %got(func_004736E0)($gp)
/* 004738AC AFA40000 */  sw    $a0, ($sp)
/* 004738B0 8D850004 */  lw    $a1, 4($t4)
/* 004738B4 8F180000 */  lw    $t8, ($t8)
/* 004738B8 273936E0 */  addiu $t9, %lo(func_004736E0) # addiu $t9, $t9, 0x36e0
/* 004738BC AFA50004 */  sw    $a1, 4($sp)
/* 004738C0 8F060004 */  lw    $a2, 4($t8)
/* 004738C4 0320F809 */  jalr  $t9
/* 004738C8 AFA30038 */   sw    $v1, 0x38($sp)
/* 004738CC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004738D0 8FA30038 */  lw    $v1, 0x38($sp)
/* 004738D4 14400016 */  bnez  $v0, .L00473930
/* 004738D8 AFA2003C */   sw    $v0, 0x3c($sp)
/* 004738DC 8FB90044 */  lw    $t9, 0x44($sp)
/* 004738E0 27AF0044 */  addiu $t7, $sp, 0x44
/* 004738E4 8F8B8B6C */  lw     $t3, %got(curproc)($gp)
/* 004738E8 27280001 */  addiu $t0, $t9, 1
/* 004738EC AFA80044 */  sw    $t0, 0x44($sp)
/* 004738F0 8DE40000 */  lw    $a0, ($t7)
/* 004738F4 8F998030 */  lw    $t9, %got(func_004736E0)($gp)
/* 004738F8 8D6B0000 */  lw    $t3, ($t3)
/* 004738FC AFA40000 */  sw    $a0, ($sp)
/* 00473900 8DE50004 */  lw    $a1, 4($t7)
/* 00473904 24630001 */  addiu $v1, $v1, 1
/* 00473908 273936E0 */  addiu $t9, %lo(func_004736E0) # addiu $t9, $t9, 0x36e0
/* 0047390C AFA50004 */  sw    $a1, 4($sp)
/* 00473910 8D660004 */  lw    $a2, 4($t3)
/* 00473914 AFA30038 */  sw    $v1, 0x38($sp)
/* 00473918 0320F809 */  jalr  $t9
/* 0047391C 27A20060 */   addiu $v0, $sp, 0x60
/* 00473920 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00473924 8FA30038 */  lw    $v1, 0x38($sp)
/* 00473928 10400112 */  beqz  $v0, .L00473D74
/* 0047392C AFA2003C */   sw    $v0, 0x3c($sp)
.L00473930:
/* 00473930 93AC0067 */  lbu   $t4, 0x67($sp)
/* 00473934 93AD004A */  lbu   $t5, 0x4a($sp)
/* 00473938 11800006 */  beqz  $t4, .L00473954
/* 0047393C 31AEFFF8 */   andi  $t6, $t5, 0xfff8
/* 00473940 8FB90068 */  lw    $t9, 0x68($sp)
/* 00473944 35D80001 */  ori   $t8, $t6, 1
/* 00473948 A3B8004A */  sb    $t8, 0x4a($sp)
/* 0047394C 03234021 */  addu  $t0, $t9, $v1
/* 00473950 AFA80044 */  sw    $t0, 0x44($sp)
.L00473954:
/* 00473954 8F99857C */  lw    $t9, %call16(oneloopblockexpr)($gp)
/* 00473958 8FA20060 */  lw    $v0, 0x60($sp)
/* 0047395C 27A5004C */  addiu $a1, $sp, 0x4c
/* 00473960 0320F809 */  jalr  $t9
/* 00473964 8C440004 */   lw    $a0, 4($v0)
/* 00473968 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0047396C 00402025 */  move  $a0, $v0
/* 00473970 8FA5004C */  lw    $a1, 0x4c($sp)
/* 00473974 8F998570 */  lw    $t9, %call16(unroll_resetincr)($gp)
/* 00473978 0320F809 */  jalr  $t9
/* 0047397C 00000000 */   nop   
/* 00473980 AFA20054 */  sw    $v0, 0x54($sp)
/* 00473984 27AF0044 */  addiu $t7, $sp, 0x44
/* 00473988 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0047398C 8DE40000 */  lw    $a0, ($t7)
/* 00473990 8F99864C */  lw    $t9, %call16(isvarhash)($gp)
/* 00473994 AFA40000 */  sw    $a0, ($sp)
/* 00473998 8DE50004 */  lw    $a1, 4($t7)
/* 0047399C 0320F809 */  jalr  $t9
/* 004739A0 AFA50004 */   sw    $a1, 4($sp)
/* 004739A4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004739A8 A7A20040 */  sh    $v0, 0x40($sp)
/* 004739AC 3044FFFF */  andi  $a0, $v0, 0xffff
/* 004739B0 8F998030 */  lw    $t9, %got(func_00473504)($gp)
/* 004739B4 27A20060 */  addiu $v0, $sp, 0x60
/* 004739B8 27393504 */  addiu $t9, %lo(func_00473504) # addiu $t9, $t9, 0x3504
/* 004739BC 0320F809 */  jalr  $t9
/* 004739C0 00000000 */   nop   
/* 004739C4 904B0000 */  lbu   $t3, ($v0)
/* 004739C8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004739CC 00403025 */  move  $a2, $v0
/* 004739D0 11600062 */  beqz  $t3, .L00473B5C
/* 004739D4 24050001 */   li    $a1, 1
/* 004739D8 8C440038 */  lw    $a0, 0x38($v0)
/* 004739DC 240C0001 */  li    $t4, 1
/* 004739E0 54800015 */  bnezl $a0, .L00473A38
/* 004739E4 8C430034 */   lw    $v1, 0x34($v0)
/* 004739E8 8F998620 */  lw    $t9, %call16(appendchain)($gp)
/* 004739EC A0CC0002 */  sb    $t4, 2($a2)
/* 004739F0 94C40008 */  lhu   $a0, 8($a2)
/* 004739F4 0320F809 */  jalr  $t9
/* 004739F8 AFA60058 */   sw    $a2, 0x58($sp)
/* 004739FC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00473A00 8FA30058 */  lw    $v1, 0x58($sp)
/* 00473A04 00403025 */  move  $a2, $v0
/* 00473A08 8F8D89B4 */  lw     $t5, %got(curgraphnode)($gp)
/* 00473A0C 00002825 */  move  $a1, $zero
/* 00473A10 24070001 */  li    $a3, 1
/* 00473A14 8DAD0000 */  lw    $t5, ($t5)
/* 00473A18 AC4D0010 */  sw    $t5, 0x10($v0)
/* 00473A1C 906E0022 */  lbu   $t6, 0x22($v1)
/* 00473A20 A04E0022 */  sb    $t6, 0x22($v0)
/* 00473A24 90780021 */  lbu   $t8, 0x21($v1)
/* 00473A28 A0400003 */  sb    $zero, 3($v0)
/* 00473A2C 1000004C */  b     .L00473B60
/* 00473A30 A0580021 */   sb    $t8, 0x21($v0)
/* 00473A34 8C430034 */  lw    $v1, 0x34($v0)
.L00473A38:
/* 00473A38 50600029 */  beql  $v1, $zero, .L00473AE0
/* 00473A3C 8FA50054 */   lw    $a1, 0x54($sp)
/* 00473A40 9099001D */  lbu   $t9, 0x1d($a0)
/* 00473A44 53200026 */  beql  $t9, $zero, .L00473AE0
/* 00473A48 8FA50054 */   lw    $a1, 0x54($sp)
/* 00473A4C 8CC30038 */  lw    $v1, 0x38($a2)
/* 00473A50 8C680018 */  lw    $t0, 0x18($v1)
/* 00473A54 A1000009 */  sb    $zero, 9($t0)
/* 00473A58 8C6F0004 */  lw    $t7, 4($v1)
/* 00473A5C 8F9986DC */  lw    $t9, %call16(has_volt_ovfw)($gp)
/* 00473A60 8DE40034 */  lw    $a0, 0x34($t7)
/* 00473A64 AFA6005C */  sw    $a2, 0x5c($sp)
/* 00473A68 0320F809 */  jalr  $t9
/* 00473A6C AFA30030 */   sw    $v1, 0x30($sp)
/* 00473A70 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00473A74 8FA30030 */  lw    $v1, 0x30($sp)
/* 00473A78 1040000A */  beqz  $v0, .L00473AA4
/* 00473A7C 8FA6005C */   lw    $a2, 0x5c($sp)
/* 00473A80 24090067 */  li    $t1, 103
/* 00473A84 A0690000 */  sb    $t1, ($v1)
/* 00473A88 90CA0001 */  lbu   $t2, 1($a2)
/* 00473A8C 8C6B0004 */  lw    $t3, 4($v1)
/* 00473A90 A06A0014 */  sb    $t2, 0x14($v1)
/* 00473A94 8D6C0034 */  lw    $t4, 0x34($t3)
/* 00473A98 A0600015 */  sb    $zero, 0x15($v1)
/* 00473A9C 1000000C */  b     .L00473AD0
/* 00473AA0 AC6C0004 */   sw    $t4, 4($v1)
.L00473AA4:
/* 00473AA4 8C6D0004 */  lw    $t5, 4($v1)
/* 00473AA8 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 00473AAC 8DA40034 */  lw    $a0, 0x34($t5)
/* 00473AB0 AFA6005C */  sw    $a2, 0x5c($sp)
/* 00473AB4 0320F809 */  jalr  $t9
/* 00473AB8 AFA30030 */   sw    $v1, 0x30($sp)
/* 00473ABC 8FA30030 */  lw    $v1, 0x30($sp)
/* 00473AC0 240E0060 */  li    $t6, 96
/* 00473AC4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00473AC8 8FA6005C */  lw    $a2, 0x5c($sp)
/* 00473ACC A06E0000 */  sb    $t6, ($v1)
.L00473AD0:
/* 00473AD0 9065001C */  lbu   $a1, 0x1c($v1)
/* 00473AD4 10000022 */  b     .L00473B60
/* 00473AD8 9067001E */   lbu   $a3, 0x1e($v1)
/* 00473ADC 8FA50054 */  lw    $a1, 0x54($sp)
.L00473AE0:
/* 00473AE0 54A30008 */  bnel  $a1, $v1, .L00473B04
/* 00473AE4 8CD90038 */   lw    $t9, 0x38($a2)
/* 00473AE8 8F99863C */  lw    $t9, %call16(decreasecount)($gp)
/* 00473AEC 00A02025 */  move  $a0, $a1
/* 00473AF0 0320F809 */  jalr  $t9
/* 00473AF4 00000000 */   nop   
/* 00473AF8 1000009E */  b     .L00473D74
/* 00473AFC 8FBC0018 */   lw    $gp, 0x18($sp)
/* 00473B00 8CD90038 */  lw    $t9, 0x38($a2)
.L00473B04:
/* 00473B04 24180001 */  li    $t8, 1
/* 00473B08 A0D80002 */  sb    $t8, 2($a2)
/* 00473B0C A320001F */  sb    $zero, 0x1f($t9)
/* 00473B10 8F998620 */  lw    $t9, %call16(appendchain)($gp)
/* 00473B14 AFA60058 */  sw    $a2, 0x58($sp)
/* 00473B18 94C40008 */  lhu   $a0, 8($a2)
/* 00473B1C 0320F809 */  jalr  $t9
/* 00473B20 00000000 */   nop   
/* 00473B24 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00473B28 8FA30058 */  lw    $v1, 0x58($sp)
/* 00473B2C 00403025 */  move  $a2, $v0
/* 00473B30 8F8889B4 */  lw     $t0, %got(curgraphnode)($gp)
/* 00473B34 00002825 */  move  $a1, $zero
/* 00473B38 00003825 */  move  $a3, $zero
/* 00473B3C 8D080000 */  lw    $t0, ($t0)
/* 00473B40 AC480010 */  sw    $t0, 0x10($v0)
/* 00473B44 906F0022 */  lbu   $t7, 0x22($v1)
/* 00473B48 A04F0022 */  sb    $t7, 0x22($v0)
/* 00473B4C 90690021 */  lbu   $t1, 0x21($v1)
/* 00473B50 A0400003 */  sb    $zero, 3($v0)
/* 00473B54 10000002 */  b     .L00473B60
/* 00473B58 A0490021 */   sb    $t1, 0x21($v0)
.L00473B5C:
/* 00473B5C 24070001 */  li    $a3, 1
.L00473B60:
/* 00473B60 90CA0000 */  lbu   $t2, ($a2)
/* 00473B64 15400027 */  bnez  $t2, .L00473C04
/* 00473B68 240B0003 */   li    $t3, 3
/* 00473B6C A0CB0000 */  sb    $t3, ($a2)
/* 00473B70 27AC0044 */  addiu $t4, $sp, 0x44
/* 00473B74 8D8E0000 */  lw    $t6, ($t4)
/* 00473B78 8FA20060 */  lw    $v0, 0x60($sp)
/* 00473B7C 8F99865C */  lw    $t9, %call16(sizeoftyp)($gp)
/* 00473B80 ACCE0028 */  sw    $t6, 0x28($a2)
/* 00473B84 8D8D0004 */  lw    $t5, 4($t4)
/* 00473B88 A3A70052 */  sb    $a3, 0x52($sp)
/* 00473B8C AFA6005C */  sw    $a2, 0x5c($sp)
/* 00473B90 ACCD002C */  sw    $t5, 0x2c($a2)
/* 00473B94 90580014 */  lbu   $t8, 0x14($v0)
/* 00473B98 A3A50053 */  sb    $a1, 0x53($sp)
/* 00473B9C A0D80001 */  sb    $t8, 1($a2)
/* 00473BA0 0320F809 */  jalr  $t9
/* 00473BA4 90440014 */   lbu   $a0, 0x14($v0)
/* 00473BA8 8FB9003C */  lw    $t9, 0x3c($sp)
/* 00473BAC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00473BB0 93A50053 */  lbu   $a1, 0x53($sp)
/* 00473BB4 0059082A */  slt   $at, $v0, $t9
/* 00473BB8 8FA6005C */  lw    $a2, 0x5c($sp)
/* 00473BBC 10200002 */  beqz  $at, .L00473BC8
/* 00473BC0 93A70052 */   lbu   $a3, 0x52($sp)
/* 00473BC4 0040C825 */  move  $t9, $v0
.L00473BC8:
/* 00473BC8 8F88897C */  lw     $t0, %got(curlevel)($gp)
/* 00473BCC A0D90020 */  sb    $t9, 0x20($a2)
/* 00473BD0 90CF0021 */  lbu   $t7, 0x21($a2)
/* 00473BD4 8D080000 */  lw    $t0, ($t0)
/* 00473BD8 A0C00003 */  sb    $zero, 3($a2)
/* 00473BDC A4C00006 */  sh    $zero, 6($a2)
/* 00473BE0 ACC00030 */  sw    $zero, 0x30($a2)
/* 00473BE4 ACC00024 */  sw    $zero, 0x24($a2)
/* 00473BE8 15E00003 */  bnez  $t7, .L00473BF8
/* 00473BEC A0C8002F */   sb    $t0, 0x2f($a2)
/* 00473BF0 10000003 */  b     .L00473C00
/* 00473BF4 A0C00002 */   sb    $zero, 2($a2)
.L00473BF8:
/* 00473BF8 24090001 */  li    $t1, 1
/* 00473BFC A0C90002 */  sb    $t1, 2($a2)
.L00473C00:
/* 00473C00 A0C00023 */  sb    $zero, 0x23($a2)
.L00473C04:
/* 00473C04 90CA0021 */  lbu   $t2, 0x21($a2)
/* 00473C08 2404007B */  li    $a0, 123
/* 00473C0C 11400003 */  beqz  $t2, .L00473C1C
/* 00473C10 00000000 */   nop   
/* 00473C14 00002825 */  move  $a1, $zero
/* 00473C18 00003825 */  move  $a3, $zero
.L00473C1C:
/* 00473C1C 8F998658 */  lw    $t9, %call16(extendstat)($gp)
/* 00473C20 A3A50053 */  sb    $a1, 0x53($sp)
/* 00473C24 AFA6005C */  sw    $a2, 0x5c($sp)
/* 00473C28 0320F809 */  jalr  $t9
/* 00473C2C A3A70052 */   sb    $a3, 0x52($sp)
/* 00473C30 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00473C34 8FA6005C */  lw    $a2, 0x5c($sp)
/* 00473C38 8FAB0054 */  lw    $t3, 0x54($sp)
/* 00473C3C 8F8489C4 */  lw     $a0, %got(stattail)($gp)
/* 00473C40 93A50053 */  lbu   $a1, 0x53($sp)
/* 00473C44 ACCB0034 */  sw    $t3, 0x34($a2)
/* 00473C48 8C840000 */  lw    $a0, ($a0)
/* 00473C4C 93A70052 */  lbu   $a3, 0x52($sp)
/* 00473C50 A0800003 */  sb    $zero, 3($a0)
/* 00473C54 AC860004 */  sw    $a2, 4($a0)
/* 00473C58 A085001C */  sb    $a1, 0x1c($a0)
/* 00473C5C 90CC0022 */  lbu   $t4, 0x22($a2)
/* 00473C60 55800012 */  bnezl $t4, .L00473CAC
/* 00473C64 A087001E */   sb    $a3, 0x1e($a0)
/* 00473C68 50A00010 */  beql  $a1, $zero, .L00473CAC
/* 00473C6C A087001E */   sb    $a3, 0x1e($a0)
/* 00473C70 8F8D89B4 */  lw     $t5, %got(curgraphnode)($gp)
/* 00473C74 8F9983C8 */  lw    $t9, %call16(strlkilled)($gp)
/* 00473C78 8DAD0000 */  lw    $t5, ($t5)
/* 00473C7C 8DA50024 */  lw    $a1, 0x24($t5)
/* 00473C80 A3A70052 */  sb    $a3, 0x52($sp)
/* 00473C84 0320F809 */  jalr  $t9
/* 00473C88 AFA6005C */   sw    $a2, 0x5c($sp)
/* 00473C8C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00473C90 2C4E0001 */  sltiu $t6, $v0, 1
/* 00473C94 8FA6005C */  lw    $a2, 0x5c($sp)
/* 00473C98 8F8489C4 */  lw     $a0, %got(stattail)($gp)
/* 00473C9C 93A70052 */  lbu   $a3, 0x52($sp)
/* 00473CA0 8C840000 */  lw    $a0, ($a0)
/* 00473CA4 A08E001C */  sb    $t6, 0x1c($a0)
/* 00473CA8 A087001E */  sb    $a3, 0x1e($a0)
.L00473CAC:
/* 00473CAC 90D80022 */  lbu   $t8, 0x22($a2)
/* 00473CB0 57000011 */  bnezl $t8, .L00473CF8
/* 00473CB4 90CF0021 */   lbu   $t7, 0x21($a2)
/* 00473CB8 50E0000F */  beql  $a3, $zero, .L00473CF8
/* 00473CBC 90CF0021 */   lbu   $t7, 0x21($a2)
/* 00473CC0 8F9989B4 */  lw     $t9, %got(curgraphnode)($gp)
/* 00473CC4 8F390000 */  lw    $t9, ($t9)
/* 00473CC8 8F250024 */  lw    $a1, 0x24($t9)
/* 00473CCC 8F9983CC */  lw    $t9, %call16(strskilled)($gp)
/* 00473CD0 AFA6005C */  sw    $a2, 0x5c($sp)
/* 00473CD4 0320F809 */  jalr  $t9
/* 00473CD8 00000000 */   nop   
/* 00473CDC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00473CE0 2C480001 */  sltiu $t0, $v0, 1
/* 00473CE4 8FA6005C */  lw    $a2, 0x5c($sp)
/* 00473CE8 8F8489C4 */  lw     $a0, %got(stattail)($gp)
/* 00473CEC 8C840000 */  lw    $a0, ($a0)
/* 00473CF0 A088001E */  sb    $t0, 0x1e($a0)
/* 00473CF4 90CF0021 */  lbu   $t7, 0x21($a2)
.L00473CF8:
/* 00473CF8 A0800001 */  sb    $zero, 1($a0)
/* 00473CFC AC80002C */  sw    $zero, 0x2c($a0)
/* 00473D00 2DEA0001 */  sltiu $t2, $t7, 1
/* 00473D04 A08A001D */  sb    $t2, 0x1d($a0)
/* 00473D08 A08A001F */  sb    $t2, 0x1f($a0)
/* 00473D0C AC800030 */  sw    $zero, 0x30($a0)
/* 00473D10 A0800002 */  sb    $zero, 2($a0)
/* 00473D14 90CB0022 */  lbu   $t3, 0x22($a2)
/* 00473D18 ACC40038 */  sw    $a0, 0x38($a2)
/* 00473D1C 15600007 */  bnez  $t3, .L00473D3C
/* 00473D20 00000000 */   nop   
/* 00473D24 8F99839C */  lw    $t9, %call16(strkillprev)($gp)
/* 00473D28 AFA6005C */  sw    $a2, 0x5c($sp)
/* 00473D2C 0320F809 */  jalr  $t9
/* 00473D30 00000000 */   nop   
/* 00473D34 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00473D38 8FA6005C */  lw    $a2, 0x5c($sp)
.L00473D3C:
/* 00473D3C 8F998318 */  lw    $t9, %call16(appendstorelist)($gp)
/* 00473D40 AFA6005C */  sw    $a2, 0x5c($sp)
/* 00473D44 0320F809 */  jalr  $t9
/* 00473D48 00000000 */   nop   
/* 00473D4C 8FA6005C */  lw    $a2, 0x5c($sp)
/* 00473D50 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00473D54 90CC0022 */  lbu   $t4, 0x22($a2)
/* 00473D58 51800007 */  beql  $t4, $zero, .L00473D78
/* 00473D5C 8FBF001C */   lw    $ra, 0x1c($sp)
/* 00473D60 8F8E89B4 */  lw     $t6, %got(curgraphnode)($gp)
/* 00473D64 240D0001 */  li    $t5, 1
/* 00473D68 8DCE0000 */  lw    $t6, ($t6)
/* 00473D6C 8DD80028 */  lw    $t8, 0x28($t6)
/* 00473D70 A30D0008 */  sb    $t5, 8($t8)
.L00473D74:
/* 00473D74 8FBF001C */  lw    $ra, 0x1c($sp)
.L00473D78:
/* 00473D78 27BD0060 */  addiu $sp, $sp, 0x60
/* 00473D7C 03E00008 */  jr    $ra
/* 00473D80 00000000 */   nop   
    .type par_to_str, @function
    .size par_to_str, .-par_to_str
    .end par_to_str
)"");

/*
00473F04 pmov_to_mov
*/
static struct Expression *func_00473D84(struct Statement *pmov, struct VariableInner var, unsigned short hash) {
    struct Expression *phi_s0;
    bool found;

    phi_s0 = table[hash];
    found = false;
    while (!found && phi_s0 != NULL) {
        found = phi_s0->type == islda
                 && addreq(phi_s0->data.islda_isilda.var_data, var)
                 && var.addr == phi_s0->data.islda_isilda.addr
                 && pmov->u.store.size == phi_s0->data.islda_isilda.size;
        if (!found) {
            phi_s0 = phi_s0->next;
        }
    }

    if (!found) {
        phi_s0 = appendchain(hash);
        phi_s0->type = islda;
        phi_s0->datatype = Adt;
        phi_s0->graphnode = curgraphnode;
        phi_s0->data.islda_isilda.var_data = var;
        phi_s0->data.islda_isilda.size = pmov->u.store.size;
        phi_s0->data.islda_isilda.level = curlevel;
        phi_s0->var_access_list = NULL;
        phi_s0->data.islda_isilda.unk34 = NULL;
        phi_s0->data.islda_isilda.addr = var.addr;
    }
    return phi_s0;
}

/*
004761D0 tail_recursion
*/
void pmov_to_mov(struct Statement *pmov) {
    int sp3C;
    struct VariableInner var; // sp34
    unsigned short hash;
    struct Expression *temp_v0;
    struct Statement *mov;

    var.addr = pmov->u.store.u.mov.offset;
    var.blockno = curblk;
    var.memtype = Pmt;

    hash = isvarhash(var);
    extendstat(Umov);
    mov = stattail;
    mov->expr = func_00473D84(pmov, var, hash);
    mov->u.store.expr = oneloopblockexpr(pmov->expr, &sp3C);
    mov->u.store.expr = unroll_resetincr(mov->u.store.expr, sp3C);
    mov->u.store.size = pmov->u.store.size;
    mov->u.store.u.mov.unk32 = pmov->u.store.u.mov.unk32;
    mov->u.store.u.mov.unk33 = pmov->u.store.u.mov.unk32; // ??
    mov->u.store.u.mov.baseaddr = findbaseaddr(pmov->expr);
    appendstorelist();
    mov->u.store.var_access_list_item->type = 3;
    movkillprev(stattail);
    mov->u.store.baseaddr = findbaseaddr(mov->expr);
    mov->u.store.unk1C = strlkilled(stattail, curgraphnode->varlisthead) == 0;
    mov->u.store.unk1E = strskilled(stattail, curgraphnode->varlisthead) == 0;
    mov->u.store.unk1D = 1;
    mov->u.store.unk1F = 1;
    strkillprev(stattail);
    appendstorelist();
}
