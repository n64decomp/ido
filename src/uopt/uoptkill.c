#include "uoptdata.h"
#include "uoptkill.h"
#include "uoptutil.h"
#include "uoptions.h"
#include "uoptppss.h"

/*
0043CFCC readnxtinst
0046D428 oneloopblockexpr
0046E77C oneloopblockstmt
00473F04 pmov_to_mov
*/
struct Expression *findbaseaddr(struct Expression *expr) {
    while (expr->type == isop) {
        if (expr->data.isop.opc == Udec || expr->data.isop.opc == Uinc || expr->data.isop.opc == Uixa) {
            expr = expr->data.isop.op1;
        } else if (expr->data.isop.opc == Uadd || expr->data.isop.opc == Usub) {
            if ((expr->data.isop.op1->type == islda || expr->data.isop.op1->type == isilda) ||
                    ((expr->data.isop.op1->type == isvar || expr->data.isop.op1->type == issvar) && (expr->data.isop.op1->datatype == Adt || expr->data.isop.op1->datatype == Hdt)) ||
                    (expr->data.isop.op1->type == isop && (expr->data.isop.op1->data.isop.datatype == Adt || expr->data.isop.op1->data.isop.datatype == Hdt))) {
                expr = expr->data.isop.op1;
            } else if ((expr->data.isop.op2->type == islda || expr->data.isop.op2->type == isilda) ||
                    ((expr->data.isop.op2->type == isvar || expr->data.isop.op2->type == issvar) && (expr->data.isop.op2->datatype == Adt || expr->data.isop.op2->datatype == Hdt)) ||
                    (expr->data.isop.op2->type == isop && (expr->data.isop.op2->data.isop.datatype == Adt || expr->data.isop.op2->data.isop.datatype == Hdt))) {
                expr = expr->data.isop.op2;
            } else {
                break;
            }
        } else {
            break;
        }
    }
    return expr;
}

/*
0043CFCC readnxtinst
00449250 findbaseaddr_ada
*/
struct Expression *findbaseaddr_ada(struct Expression *expr) {
    struct Expression *baseaddr;

    if (expr->datatype != Adt && expr->datatype != Hdt && expr->datatype != Ldt) {
        return NULL;
    }


    if (expr->type == islda || expr->type == isilda) {
        return expr;
    } else if (expr->type == isop) {
        if (expr->data.isop.opc == Ucvt ||
                expr->data.isop.opc == Udec ||
                expr->data.isop.opc == Uinc ||
                expr->data.isop.opc == Uixa ||
                expr->data.isop.opc == Utyp) {
            return findbaseaddr_ada(expr->data.isop.op1);
        }

        if (expr->data.isop.opc == Uadd || expr->data.isop.opc == Usub) {
            baseaddr = findbaseaddr_ada(expr->data.isop.op1);
            if (baseaddr == NULL) {
                baseaddr = findbaseaddr_ada(expr->data.isop.op2);
            }
            return baseaddr;
        }
    }

    return NULL;
}

/*
0041F22C base_noalias
004496F0 slkilled
0044A5C8 smkilled
0044AAD0 sskilled
0044C6D4 plkilled
0044CE80 pmkilled
0044D0C4 pskilled
0044DBC4 indirectaccessed
00458ED0 compareloc
00478FA0 func_00478FA0
*/
bool overlapping(struct VariableLocation a, struct VariableLocation b, int size_a, int size_b) {
    if (lang == LANG_ADA && (size_a < 1 || size_b < 1)) {
        if ((a.memtype == Mmt && a.addr == -4) || (b.memtype == Mmt && b.addr == -4)) {
            return false;
        } else {
            return true;
        }
    }

    if (a.memtype == b.memtype && a.blockno == b.blockno) {
        if (a.addr >= b.addr && a.addr - b.addr < size_b) {
            return true;
        }

        if (b.addr >= a.addr && b.addr - a.addr < size_a) {
            return true;
        }
    }

    return false;
}

/*
0041F22C base_noalias
004496F0 slkilled
0044A5C8 smkilled
0044AAD0 sskilled
0044C6D4 plkilled
0044CE80 pmkilled
0044D0C4 pskilled
0044DBC4 indirectaccessed
00478FA0 func_00478FA0
*/
bool aliaswithptr(struct VariableLocation *location) {
    bool alias = false;

    if (location->memtype == Rmt) {
        alias = false;
    } else {
        switch (lang) {
            case LANG_C:
            case LANG_RESERVED1:
            case LANG_ADA:
            case LANG_PL1:
                alias = true;
                break;

            case LANG_COBOL:
                alias = false;
                break;

            case LANG_PASCAL:
                if (nopalias != 0) {
                    if (nof77alias != 0) {
                        alias = false;
                    } else if (location->blockno == curblk) {
                        alias = false;
                    } else {
                        alias = !in_fsym(location->blockno);
                    }
                } else {
                    alias = true;
                }
                break;

            case LANG_FORTRAN:
                if (use_c_semantics) {
                    alias = true;
                } else if (nof77alias) {
                    alias = false;
                } else if (location->blockno == curblk) {
                    alias = false;
                } else {
                    alias = !in_fsym(location->blockno);
                }
                break;

            default:
                caseerror(1, 96, "uoptkill.p", 10);
                alias = true;
                break;
        }
    }

    return alias;
}

/*
0041F22C base_noalias
0041F530 base_gp_noalias
0041F5E4 base_sp_noalias
004496F0 slkilled
0044A5C8 smkilled
0044AAD0 sskilled
0044C6D4 plkilled
0044CE80 pmkilled
0044D0C4 pskilled
0044DBC4 indirectaccessed
00458B88 assign_mtag
00478FA0 func_00478FA0
*/
bool pointtoheap(struct Expression *baseaddr) {
    if (lang != LANG_PASCAL) {
        return false;
    }

    if (baseaddr->type == isvar || baseaddr->type == issvar) {
        return baseaddr->datatype == Hdt;
    } else if (baseaddr->type == isop) {
        if (baseaddr->data.isop.opc == Uilod || baseaddr->data.isop.opc == Uirld) {
            return baseaddr->datatype == Hdt;
        }
    }

    return false;
}

// copy paste ftw
// most of this is jankiness for fortran, pascal, and cobol
/*
004123C4 varinsert
00431268 func_00431268
004324F4 findinduct
0044B308 strkillprev
0044B448 lodkillprev
0044D7F0 varkilled
0044D8C4 strlkilled
0044DADC strlant
*/
bool slkilled(struct Statement *stat, struct Expression *expr) {
    struct Expression *sbaseaddr;
    struct Expression *lbaseaddr2;
    struct Expression *lbaseaddr1;
    bool killed;

    if ((stat->opc == Uirst || stat->opc == Uirsv) ||
            (expr->type == isop && (expr->data.isop.opc == Uirld || expr->data.isop.opc == Uirlv))) {
        return true;
    }

    if ((stat->opc != Uisst && stat->opc != Ustr && stat->opc != Unop) && stat->u.store.baseaddr->type == dumped) {
        fix_sbase(stat);
    }
    sbaseaddr = stat->u.store.baseaddr;

    if (expr->type == isvar || expr->type == issvar) {
        if (stat->opc == Uisst || stat->opc == Ustr || stat->opc == Unop) {
            killed = overlapping(expr->data.isvar_issvar.location, stat->expr->data.isvar_issvar.location, expr->data.isvar_issvar.size, stat->expr->data.isvar_issvar.size);
        } else if (sbaseaddr->type == islda || sbaseaddr->type == isilda) {
            killed = overlapping(expr->data.isvar_issvar.location, sbaseaddr->data.islda_isilda.address, expr->data.isvar_issvar.size, sbaseaddr->data.islda_isilda.size);
        } else if ((sbaseaddr->type != isvar &&
                    sbaseaddr->type != isop &&
                    sbaseaddr->type != issvar &&
                    sbaseaddr->type != dumped) ||
                pointtoheap(sbaseaddr)) {
            killed = false;
        } else if (aliaswithptr(&expr->data.isvar_issvar.location)) {
            killed = true;
        } else {
            killed = lang == LANG_FORTRAN && sbaseaddr->type == isvar && sbaseaddr->data.isvar_issvar.location.memtype == Mmt;
        }
    } else {
        lbaseaddr1 = expr->data.isop.unk34;
        if (lbaseaddr1->type == dumped) {
            fix_base(expr);
            lbaseaddr1 = expr->data.isop.unk34;
        }
        sbaseaddr = stat->u.store.baseaddr;

        if (lbaseaddr1->type == islda || lbaseaddr1->type == isilda) {
            if (stat->opc == Uisst || stat->opc == Ustr || stat->opc == Unop) {
                killed = overlapping(lbaseaddr1->data.islda_isilda.address, stat->expr->data.isvar_issvar.location,
                                     lbaseaddr1->data.islda_isilda.size, stat->expr->data.isvar_issvar.size);
            } else if (sbaseaddr->type == islda || sbaseaddr->type == isilda) {
                killed = overlapping(lbaseaddr1->data.islda_isilda.address, sbaseaddr->data.islda_isilda.address,
                                     lbaseaddr1->data.islda_isilda.size, sbaseaddr->data.islda_isilda.size);
            } else if ((lang != LANG_C &&
                        (sbaseaddr->type != isvar &&
                         sbaseaddr->type != isop &&
                         sbaseaddr->type != issvar &&
                         sbaseaddr->type != dumped)) ||
                    pointtoheap(sbaseaddr)) {
                killed = false;
            } else if (aliaswithptr(&lbaseaddr1->data.islda_isilda.address)) {
                killed = true;
            } else {
                killed = lang == LANG_FORTRAN && sbaseaddr->type == isvar && sbaseaddr->data.isvar_issvar.location.memtype == Mmt;
            }
        } else if (lang != LANG_C &&
                (lbaseaddr1->type != isvar &&
                 lbaseaddr1->type != isop &&
                 lbaseaddr1->type != issvar &&
                 lbaseaddr1->type != dumped)) {
            killed = false;
        } else if (pointtoheap(lbaseaddr1)) {
            if (stat->opc == Uisst || stat->opc == Ustr || stat->opc == Unop) {
                killed = false;
            } else {
                killed = pointtoheap(sbaseaddr);
            }
        } else if (stat->opc == Uisst || stat->opc == Ustr || stat->opc == Unop) {
            if (aliaswithptr(&stat->expr->data.isvar_issvar.location)) {
                killed = true;
            } else {
                killed = lang == LANG_FORTRAN && lbaseaddr1->type == isvar && lbaseaddr1->data.isvar_issvar.location.memtype == Mmt;
            }
        } else if (sbaseaddr->type == islda || sbaseaddr->type == isilda) {
            if (aliaswithptr(&sbaseaddr->data.islda_isilda.address)) {
                killed = true;
            } else {
                killed = lang == LANG_FORTRAN && lbaseaddr1->type == isvar && lbaseaddr1->data.isvar_issvar.location.memtype == Mmt;
            }
        } else if (lang != LANG_C &&
                (sbaseaddr->type != isvar &&
                 sbaseaddr->type != isop &&
                 sbaseaddr->type != issvar &&
                 sbaseaddr->type != dumped)) {
            killed = false;
        } else {
            if (lang != LANG_PASCAL && lang != LANG_FORTRAN && lang != LANG_COBOL) killed = true;
            else if (lang == LANG_FORTRAN && (!nof77alias || use_c_semantics
                        || (lbaseaddr1->type == isvar && (lbaseaddr1->data.isvar_issvar.location.memtype == Mmt ||
                                (f77_static_flag && lbaseaddr1->data.isvar_issvar.location.memtype == Smt)))
                        || (sbaseaddr->type == isvar && (sbaseaddr->data.isvar_issvar.location.memtype == Mmt ||
                                (f77_static_flag && sbaseaddr->data.isvar_issvar.location.memtype == Smt))))) killed = true;
            else if (lang == LANG_PASCAL && (nopalias && !nof77alias)) killed = true;
            else if (lang == LANG_PASCAL && !nopalias) killed = true;
            else if (lbaseaddr1->type == dumped || sbaseaddr->type == dumped || sbaseaddr == lbaseaddr1) killed = true;
            else if ((lbaseaddr1->type == isvar || lbaseaddr1->type == issvar) &&
                    (sbaseaddr->type == isvar || sbaseaddr->type == issvar) &&
                    addreq(lbaseaddr1->data.isvar_issvar.location, sbaseaddr->data.isvar_issvar.location)) killed = true;
            else killed = false;
        }

        if (!killed &&
                (expr->data.isop.opc != Uilod && expr->data.isop.opc != Uirld &&
                 expr->data.isop.opc != Uildv && expr->data.isop.opc != Uirlv)) {
            lbaseaddr2 = expr->data.isop.aux.unk38;

            if (lbaseaddr2->type == islda || lbaseaddr2->type == isilda) {
                if (stat->opc == Uisst || stat->opc == Ustr || stat->opc == Unop) {
                    killed = overlapping(lbaseaddr2->data.islda_isilda.address, stat->expr->data.isvar_issvar.location, lbaseaddr2->data.islda_isilda.size, stat->expr->data.isvar_issvar.size);
                } else if (sbaseaddr->type == islda || sbaseaddr->type == isilda) {
                    killed = overlapping(lbaseaddr2->data.islda_isilda.address, sbaseaddr->data.islda_isilda.address, lbaseaddr2->data.islda_isilda.size, sbaseaddr->data.islda_isilda.size);
                } else if ((sbaseaddr->type != isvar &&
                            sbaseaddr->type != isop &&
                            sbaseaddr->type != issvar &&
                            sbaseaddr->type != dumped) ||
                        pointtoheap(sbaseaddr)) {
                    killed = false;
                } else if (aliaswithptr(&lbaseaddr2->data.islda_isilda.address)) {
                    killed = true;
                } else {
                    killed = lang == LANG_FORTRAN && sbaseaddr->type == isvar && sbaseaddr->data.isvar_issvar.location.memtype == Mmt;
                }
            } else if (lang != LANG_C &&
                    (lbaseaddr2->type != isvar &&
                     lbaseaddr2->type != isop &&
                     lbaseaddr2->type != issvar &&
                     lbaseaddr2->type != dumped)) {
                killed = false;
            } else if (pointtoheap(lbaseaddr2)) {
                if (stat->opc == Uisst || stat->opc == Ustr || stat->opc == Unop) {
                    killed = false;
                } else {
                    killed = pointtoheap(sbaseaddr);
                }
            } else if (stat->opc == Uisst || stat->opc == Ustr || stat->opc == Unop) {
                if (aliaswithptr(&stat->expr->data.isvar_issvar.location)) {
                    killed = true;
                } else {
                    killed = lang == LANG_FORTRAN && lbaseaddr2->type == isvar && lbaseaddr2->data.isvar_issvar.location.memtype == Mmt;
                }
            } else if (sbaseaddr->type == islda || sbaseaddr->type == isilda) {
                if (aliaswithptr(&sbaseaddr->data.islda_isilda.address)) {
                    killed = true;
                } else {
                    killed = lang == LANG_FORTRAN && lbaseaddr2->type == isvar && lbaseaddr2->data.isvar_issvar.location.memtype == Mmt;
                }
            } else if (lang != LANG_C &&
                    (sbaseaddr->type != isvar &&
                     sbaseaddr->type != isop &&
                     sbaseaddr->type != issvar &&
                     sbaseaddr->type != dumped)) {
                killed = false;
            } else {
                // maybe you should copy it one more time to be safe
                if (lang != LANG_PASCAL && lang != LANG_FORTRAN && lang != LANG_COBOL) killed = true;
                else if (lang == LANG_FORTRAN && (!nof77alias || use_c_semantics)) killed = true;
                else if (lang == LANG_PASCAL && (nopalias && !nof77alias)) killed = true;
                else if (lang == LANG_PASCAL && !nopalias) killed = true;
                else if (lbaseaddr2->type == dumped || sbaseaddr->type == dumped || sbaseaddr == lbaseaddr2) killed = true;
                else if ((lbaseaddr2->type == isvar || lbaseaddr2->type == issvar) &&
                        (sbaseaddr->type == isvar || sbaseaddr->type == issvar) &&
                        addreq(lbaseaddr2->data.isvar_issvar.location, sbaseaddr->data.isvar_issvar.location)) killed = true;
                else killed = false;
            }
        } else if (inlopt && killed && expr->data.isop.opc == Uilod && stat->opc == Uistr && expr->data.isop.unk34 == sbaseaddr && expr->data.isop.op1 == stat->expr) {
            if (stat->u.store.u.istr.offset >= expr->data.isop.datasize &&
                    stat->u.store.u.istr.offset - expr->data.isop.datasize < (signed) expr->data.isop.aux2.v1.unk3C) killed = true;
            else if (expr->data.isop.datasize >= stat->u.store.u.istr.offset &&
                    expr->data.isop.datasize - stat->u.store.u.istr.offset < stat->u.store.size) killed = true;
            else killed = false;
        }
    }

    return killed;
}

/*
0044B25C movkillprev
0044B308 strkillprev
0044D8C4 strlkilled
0044D9E4 strskilled
0044DADC strlant
*/
bool smkilled(struct Statement *stat, struct Statement *stat2) {
    struct Expression *baseaddr;
    struct Expression *baseaddr2;
    bool killed;

    if (stat->opc == Uirst || stat->opc == Uirsv) {
        return true;
    }

    if ((stat->opc != Uisst && stat->opc != Ustr && stat->opc != Unop) &&
            stat->u.store.baseaddr->type == dumped) {
        fix_sbase(stat);
    }
    baseaddr2 = stat2->u.store.u.mov.baseaddr;

    if (baseaddr2->type == islda || baseaddr2->type == isilda) {
        if (stat->opc == Uisst || stat->opc == Ustr || stat->opc == Unop) {
            killed = overlapping(baseaddr2->data.islda_isilda.address, stat->expr->data.isvar_issvar.location,
                                 baseaddr2->data.islda_isilda.size, stat->expr->data.isvar_issvar.size);
        } else {
            baseaddr = stat->u.store.baseaddr;
            if (baseaddr->type == islda || baseaddr->type == isilda) {
                killed = overlapping(baseaddr2->data.islda_isilda.address, baseaddr->data.islda_isilda.address,
                        baseaddr2->data.islda_isilda.size, baseaddr->data.islda_isilda.size);
            } else if ((baseaddr->type != isvar &&
                        baseaddr->type != issvar &&
                        baseaddr->type != isop &&
                        baseaddr->type != dumped) ||
                    pointtoheap(baseaddr)) {
                killed = false;
            } else {
                killed = aliaswithptr(&baseaddr2->data.islda_isilda.address);
            }
        }
    } else if (lang != LANG_C &&
            (baseaddr2->type != isvar &&
             baseaddr2->type != issvar &&
             baseaddr2->type != isop &&
             baseaddr2->type != dumped)) {
        killed = true;
    } else if (pointtoheap(baseaddr2)) {
        if (stat->opc == Uisst || stat->opc == Ustr || stat->opc == Unop) {
            killed = false;
        } else {
            killed = pointtoheap(stat->u.store.baseaddr);
        }
    } else if (stat->opc == Uisst || stat->opc == Ustr || stat->opc == Unop) {
        killed = aliaswithptr(&stat->expr->data.isvar_issvar.location);
    } else {
        baseaddr = stat->u.store.baseaddr;
        if (baseaddr->type == islda || baseaddr->type == isilda) {
            killed = aliaswithptr(&baseaddr->data.islda_isilda.address);
        } else if (lang != LANG_C &&
                (baseaddr->type != isvar &&
                 baseaddr->type != issvar &&
                 baseaddr->type != isop &&
                 baseaddr->type != dumped)) {
            killed = false;
        } else {
            if (lang != LANG_PASCAL && lang != LANG_FORTRAN && lang != LANG_COBOL) killed = true;
            else if (lang == LANG_FORTRAN && (!nof77alias || use_c_semantics)) killed = true;
            else if (lang == LANG_PASCAL && (nopalias && !nof77alias)) killed = true;
            else if (lang == LANG_PASCAL && !nopalias) killed = true;
            else if (baseaddr2->type == dumped || baseaddr->type == dumped || baseaddr == baseaddr2) killed = true;
            else if ((baseaddr2->type == isvar || baseaddr2->type == issvar) &&
                    (baseaddr->type == isvar || baseaddr->type == issvar) &&
                    addreq(baseaddr2->data.isvar_issvar.location, baseaddr->data.isvar_issvar.location)) killed = true;
            else killed = false;
        }
    }

    return killed;
}

/*
0044B308 strkillprev
0044D9E4 strskilled
*/
bool sskilled(struct Statement *stat, struct Statement *stat2) {
    struct Expression *baseaddr;
    struct Expression *baseaddr2;
    bool killed;

    if ((stat->opc == Uirst || stat->opc == Uirsv) || (stat2->opc == Uirst || stat2->opc == Uirsv)) {
        return true;
    }

    if ((stat->opc != Uisst && stat->opc != Ustr && stat->opc != Unop)
            && stat->u.store.baseaddr->type == dumped) {
        fix_sbase(stat);
    }
    baseaddr = stat->u.store.baseaddr;

    if (stat2->opc == Uisst || stat2->opc == Ustr || stat2->opc == Unop) {
        if (stat->opc == Uisst || stat->opc == Ustr || stat->opc == Unop) {
            killed = overlapping(stat2->expr->data.isvar_issvar.location, stat->expr->data.isvar_issvar.location, stat2->expr->data.isvar_issvar.size, stat->expr->data.isvar_issvar.size);
        } else if (baseaddr->type == islda || baseaddr->type == isilda) {
            killed = overlapping(stat2->expr->data.isvar_issvar.location, baseaddr->data.islda_isilda.address, stat2->expr->data.isvar_issvar.size, baseaddr->data.islda_isilda.size);
        } else if ((baseaddr->type != isvar &&
                    baseaddr->type != issvar &&
                    baseaddr->type != isop &&
                    baseaddr->type != dumped) ||
                pointtoheap(baseaddr)) {
            killed = false;
        } else {
            killed = aliaswithptr(&stat2->expr->data.isvar_issvar.location);
        }
    } else {
        if (stat2->u.store.baseaddr->type == dumped) {
            fix_sbase(stat2);
        }

        baseaddr2 = stat2->u.store.baseaddr;

        if (baseaddr2->type == islda || baseaddr2->type == isilda) {
            if (stat->opc == Uisst || stat->opc == Ustr || stat->opc == Unop) {
                killed = overlapping(baseaddr2->data.islda_isilda.address, stat->expr->data.isvar_issvar.location,
                                     baseaddr2->data.islda_isilda.size, stat->expr->data.isvar_issvar.size);
            } else if (baseaddr->type == islda || baseaddr->type == isilda) {
                killed = overlapping(baseaddr2->data.islda_isilda.address, baseaddr->data.islda_isilda.address,
                                     baseaddr2->data.islda_isilda.size, baseaddr->data.islda_isilda.size);
            } else if ((baseaddr->type != isvar &&
                        baseaddr->type != issvar &&
                        baseaddr->type != isop &&
                        baseaddr->type != dumped) ||
                    pointtoheap(baseaddr)) {
                killed = false;
            } else {
                killed = aliaswithptr(&baseaddr2->data.islda_isilda.address);
            }
        } else if (lang != LANG_C &&
                (baseaddr2->type != isvar &&
                 baseaddr2->type != issvar &&
                 baseaddr2->type != isop &&
                 baseaddr2->type != dumped)) {
            killed = false;
        } else if (pointtoheap(baseaddr2)) {
            if (stat->opc == Uisst || stat->opc == Ustr || stat->opc == Unop) {
                killed = false;
            } else {
                killed = pointtoheap(stat->u.store.baseaddr);
            }
        } else if (stat->opc == Uisst || stat->opc == Ustr || stat->opc == Unop) {
            killed = aliaswithptr(&stat->expr->data.isvar_issvar.location);
        } else if (baseaddr->type == islda || baseaddr->type == isilda) {
            killed = aliaswithptr(&baseaddr->data.islda_isilda.address);
        } else if (lang != LANG_C &&
                (baseaddr->type != isvar &&
                 baseaddr->type != issvar &&
                 baseaddr->type != isop &&
                 baseaddr->type != dumped)) {
            killed = false;
        } else {
            if (lang != LANG_PASCAL && lang != LANG_FORTRAN && lang != LANG_COBOL) killed = true;
            else if (lang == LANG_FORTRAN && (!nof77alias || use_c_semantics)) killed = true;
            else if (lang == LANG_PASCAL && (nopalias && !nof77alias)) killed = true;
            else if (lang == LANG_PASCAL && !nopalias) killed = true;
            else if (baseaddr2->type == dumped || baseaddr->type == dumped || baseaddr == baseaddr2) killed = true;
            else if ((baseaddr2->type == isvar || baseaddr2->type == issvar) &&
                    (baseaddr->type == isvar || baseaddr->type == issvar) &&
                    addreq(baseaddr2->data.isvar_issvar.location, baseaddr->data.isvar_issvar.location)) killed = true;
            else killed = false;
        }
    }

    if (inlopt && killed &&
            (stat2->opc == Uistr) && (stat->opc == Uistr) &&
            stat2->u.store.baseaddr == stat->u.store.baseaddr &&
            stat2->expr == stat->expr) {
        if (stat->u.store.u.istr.offset >= stat2->u.store.u.istr.offset &&
            stat->u.store.u.istr.offset - stat2->u.store.u.istr.offset < stat2->u.store.size) killed = true;
        else if (stat2->u.store.u.istr.offset >= stat->u.store.u.istr.offset &&
                 stat2->u.store.u.istr.offset - stat->u.store.u.istr.offset < stat->u.store.size) killed = true;
        else killed = false;
    }

    return killed;
}

/*
0043CFCC readnxtinst
0046E77C oneloopblockstmt
00473F04 pmov_to_mov
*/
void movkillprev(struct Statement *stmt) {
    struct VarAccessList *access;

    for (access = curgraphnode->varlisthead; access != NULL; access = access->next) {
        if (access->type == 1 && !access->unk8) {
            if (access->data.store->u.store.unk1D) {
                access->data.store->u.store.unk1D = !smkilled(access->data.store, stmt);
            }
        }
    }
}

/*
0043CFCC readnxtinst
0046E77C oneloopblockstmt
004737E0 par_to_str
00473F04 pmov_to_mov
*/
void strkillprev(struct Statement *stmt) {
    struct VarAccessList *access;

    for (access = curgraphnode->varlisthead; access != NULL; access = access->next) {
        if (access->type == 2 && !access->unk8) {
            if (!access->data.var->killed) {
                access->data.var->killed = slkilled(stmt, access->data.var);
            }
        } else if (access->type == 3) { // mov?
            if (access->data.move->u.store.unk1F) {
                access->data.move->u.store.unk1F = !smkilled(stmt, access->data.move);
            }
        } else if (access->type == 1 && !access->unk8) {
            if (access->data.store->u.store.unk1F) {
                access->data.store->u.store.unk1F = !sskilled(stmt, access->data.store);
            }
        }
    }
}
/*
0043ABD0 incroccurrence
0043CFCC readnxtinst
0046D428 oneloopblockexpr
*/
void lodkillprev(struct Expression *expr) {
    struct VarAccessList *list;

    for (list = curgraphnode->varlisthead; list != NULL; list = list->next) {
        if (list->type == 1 && !list->unk8 && list->data.store->u.store.unk1D) {
            list->data.store->u.store.unk1D = !slkilled(list->data.store, expr);
        }
    }
}

/*
0044C4D8 cupkillprev
0044CD14 listplkilled
00454D08 func_00454D08
0045C8A0 lvalaltered
0045CBDC cupaltered
004638C0 regdataflow
*/
bool clkilled(int level, struct Proc *proc, struct Expression *expr) {
    bool killed = false;
    struct Expression *baseaddr;
    struct Expression *baseaddr2;

    if (expr->type == isvar || expr->type == issvar) {
        // this is exactly the same as cskilled, except for ada -_-
        if (expr->data.isvar_issvar.location.memtype == Rmt) {
            killed = true;
        } else if (proc->no_sideeffects && (aentptr == NULL || lang != LANG_FORTRAN)) {
            killed = false;
        } else {
            switch (lang) {
                case LANG_PL1:
                    if (!expr->data.isvar_issvar.unk22 || curproc->nonlocal_goto) {
                        killed = true;
                    } else if (proc == indirprocs) {
                        killed = true;
                    } else {
                        if (expr->data.isvar_issvar.location.level >= level) {
                            killed = false;
                        } else if (proc->unk9 && expr->data.isvar_issvar.location.level < 2) {
                            killed = true;
                        } else if (varintree(expr->data.isvar_issvar.location, proc->vartree) || furthervarintree(expr, proc)) {
                            killed = true;
                        }
                    }
                    break;

                case LANG_C:
                case LANG_RESERVED1:
                    if (!expr->data.isvar_issvar.unk22) {
                        killed = true;
                    } else if (expr->data.isvar_issvar.location.level >= level) {
                        killed = false;
                    } else if (proc == indirprocs || proc->unk9 ||
                            varintree(expr->data.isvar_issvar.location, proc->vartree) || furthervarintree(expr, proc)) {
                        killed = true;
                    }
                    break;

                case LANG_COBOL:
                    if (expr->data.isvar_issvar.location.memtype != Smt) {
                        killed = false;
                    } else {
                        killed = !in_fsym(expr->data.isvar_issvar.location.blockno);
                    }
                    break;

                case LANG_FORTRAN:
                    if (use_c_semantics && !expr->data.isvar_issvar.unk22) {
                        killed = true;
                    } else if (expr->data.isvar_issvar.location.level >= level) {
                        killed = false;
                    } else if (expr->data.isvar_issvar.location.memtype != Smt) {
                        killed = false;
                    } else if (in_fsym(expr->data.isvar_issvar.location.blockno)) {
                        killed = false;
                    } else if (!expr->data.isvar_issvar.unk22) {
                        killed = true;
                    } else if (proc == indirprocs || proc->unk9 ||
                            varintree(expr->data.isvar_issvar.location, proc->vartree) || furthervarintree(expr, proc)) {
                        killed = true;
                    }
                    break;

                case LANG_ADA:
                    if (!expr->data.isvar_issvar.unk22 && use_c_semantics) {
                        killed = true;
                    } else if (expr->data.isvar_issvar.location.level >= level) {
                        killed = false;
                    } else if (!expr->data.isvar_issvar.unk22) {
                        killed = true;
                    } else if (proc->unk9 && expr->data.isvar_issvar.location.memtype == Smt) {
                        killed = true;
                    } else if (!proc->unk8 && curlevel < proc->level) {
                        killed = true;
                    } else if (proc->unkA || varintree(expr->data.isvar_issvar.location, proc->vartree) || furthervarintree(expr, proc)) {
                        killed = true;
                    }
                    break;

                case LANG_PASCAL:
                    if (expr->data.isvar_issvar.location.level >= level) {
                        killed = false;
                    } else if (!expr->data.isvar_issvar.unk22 || (proc->has_longjmp && curproc->nonlocal_goto)) {
                        killed = true;
                    } else if (proc == indirprocs || (proc->unk9 && expr->data.isvar_issvar.location.memtype == Smt) ||
                            varintree(expr->data.isvar_issvar.location, proc->vartree) || furthervarintree(expr, proc)) {
                        killed = true;
                    }
                    break;

                default:
                    caseerror(1, 569, "uoptkill.p", 10);
                    killed = true; // probably safer to prevent optimizations here
                    break;
            }
        }
    } else {
        if ((lang == LANG_C || lang == LANG_PL1 || lang == LANG_RESERVED1) || (lang == LANG_ADA && use_c_semantics)) {
            return true;
        }

        if (expr->data.isop.opc == Uirld || expr->data.isop.opc == Uirlv) {
            return true;
        }

        if (proc->no_sideeffects && (aentptr == NULL || lang != LANG_FORTRAN)) {
            return false;
        }

        if (expr->data.isop.unk34->type == dumped) {
            fix_base(expr);
        }
        baseaddr = expr->data.isop.unk34;

        if (baseaddr->type == islda || baseaddr->type == isilda) {
            if (lang != LANG_COBOL) {
                killed = baseaddr->data.islda_isilda.level < level;
            } else if (baseaddr->data.islda_isilda.address.memtype == Smt && !in_fsym(baseaddr->data.islda_isilda.address.blockno)) {
                killed = true;
            }
        } else if (baseaddr->type != isvar &&
                   baseaddr->type != issvar &&
                   baseaddr->type != isop &&
                   baseaddr->type != dumped) {
            killed = false;
        } else {
            killed = level > 0;
        }

        if (!killed && (expr->data.isop.opc != Uilod && expr->data.isop.opc != Uildv)) {
            baseaddr2 = expr->data.isop.aux.unk38;

            if (baseaddr2->type == islda || baseaddr2->type == isilda) {
                if (lang != LANG_COBOL) {
                    killed = baseaddr2->data.islda_isilda.level < level;
                } else if (baseaddr2->data.islda_isilda.address.memtype == Smt && !in_fsym(baseaddr2->data.islda_isilda.address.blockno)) {
                    killed = true;
                }
            } else if (baseaddr2->type != isvar &&
                       baseaddr2->type != issvar &&
                       baseaddr2->type != isop &&
                       baseaddr2->type != dumped) {
                killed = false;
            } else {
                killed = level > 0;
            }
        }
    }

    return killed;
}

/*
004175BC copypropagate
0044C4D8 cupkillprev
0044D4B4 listpskilled
0045D208 patchvectors
*/
bool cmkilled(int level, struct Proc *proc, struct Statement *stat) {
    bool killed = false;

    if (lang == LANG_C || lang == LANG_PL1 || lang == LANG_RESERVED1) {
        killed = true;
    } else if (stat->u.store.u.mov.baseaddr->type == islda || stat->u.store.u.mov.baseaddr->type == isilda) {
        if (lang != LANG_COBOL) {
            killed = stat->u.store.u.mov.baseaddr->data.islda_isilda.level < level;
        } else if (stat->u.store.u.mov.baseaddr->data.islda_isilda.address.memtype == Smt &&
                !in_fsym(stat->u.store.u.mov.baseaddr->data.islda_isilda.address.blockno)) {
            killed = true;
        }
    } else if (stat->u.store.u.mov.baseaddr->type != isvar &&
            stat->u.store.u.mov.baseaddr->type != issvar &&
            stat->u.store.u.mov.baseaddr->type != isop &&
            stat->u.store.u.mov.baseaddr->type != dumped) {
        killed = false;
    } else {
        killed = level > 0;
    }

    return killed;
}

/*
004175BC copypropagate
004471AC codeimage
0044C4D8 cupkillprev
0044D4B4 listpskilled
0045D208 patchvectors
*/
bool cskilled(int level, struct Proc *proc, struct Statement *stat) {
    struct Expression *expr;
    struct Expression *baseaddr;
    bool killed = false;

    if (stat->opc == Uisst || stat->opc == Ustr || stat->opc == Unop) {
        expr = stat->expr;
        if (expr->data.isvar_issvar.location.memtype == Rmt) {
            killed = true;
        } else if (proc->no_sideeffects && (aentptr == NULL || lang != LANG_FORTRAN)) {
            killed = false;
        } else {
            switch (lang) {
                case LANG_PL1:
                    if (!expr->data.isvar_issvar.unk22 || curproc->nonlocal_goto) {
                        killed = true;
                    } else if (proc == indirprocs) {
                        killed = true;
                    } else {
                        if (expr->data.isvar_issvar.location.level >= level) {
                            killed = false;
                        } else if (proc->unk9 && expr->data.isvar_issvar.location.level < 2) {
                            killed = true;
                        } else if (varintree(expr->data.isvar_issvar.location, proc->vartree) || furthervarintree(expr, proc)) {
                            killed = true;
                        }
                    }
                    break;

                case LANG_C:
                case LANG_RESERVED1:
                    if (!expr->data.isvar_issvar.unk22) {
                        killed = true;
                    } else if (expr->data.isvar_issvar.location.level >= level) {
                        killed = false;
                    } else if (proc == indirprocs || proc->unk9 ||
                            varintree(expr->data.isvar_issvar.location, proc->vartree) || furthervarintree(expr, proc)) {
                        killed = true;
                    }
                    break;

                case LANG_COBOL:
                    if (expr->data.isvar_issvar.location.memtype != Smt) {
                        killed = false;
                    } else {
                        killed = !in_fsym(expr->data.isvar_issvar.location.blockno);
                    }
                    break;

                case LANG_FORTRAN:
                    if (use_c_semantics && !expr->data.isvar_issvar.unk22) {
                        killed = true;
                    } else if (expr->data.isvar_issvar.location.level >= level) {
                        killed = false;
                    } else if (expr->data.isvar_issvar.location.memtype != Smt) {
                        killed = false;
                    } else if (in_fsym(expr->data.isvar_issvar.location.blockno)) {
                        killed = false;
                    } else if (!expr->data.isvar_issvar.unk22) {
                        killed = true;
                    } else if (proc == indirprocs || proc->unk9 ||
                            varintree(expr->data.isvar_issvar.location, proc->vartree) || furthervarintree(stat->expr, proc)) {
                        killed = true;
                    }
                    break;

                case LANG_ADA:
                    if (!expr->data.isvar_issvar.unk22 && use_c_semantics) {
                        killed = true;
                    } else if (expr->data.isvar_issvar.location.level >= level) {
                        killed = false;
                    } else if (!expr->data.isvar_issvar.unk22) {
                        killed = true;
                    } else if (proc->unk9 && expr->data.isvar_issvar.location.memtype == Smt) {
                        killed = true;
                    } else if (varintree(expr->data.isvar_issvar.location, proc->vartree) || furthervarintree(stat->expr, proc)) {
                        killed = true;
                    }
                    break;

                case LANG_PASCAL:
                    if (expr->data.isvar_issvar.location.level >= level) {
                        killed = false;
                    } else if (!expr->data.isvar_issvar.unk22 || (proc->has_longjmp && curproc->nonlocal_goto)) {
                        killed = true;
                    } else if (proc == indirprocs || (proc->unk9 && expr->data.isvar_issvar.location.memtype == Smt) ||
                            varintree(expr->data.isvar_issvar.location, proc->vartree) || furthervarintree(stat->expr, proc)) {
                        killed = true;
                    }
                    break;

                default:
                    caseerror(1, 697, "uoptkill.p", 10);
                    break;
            }
        }
    } else {
        if ((lang == LANG_C || lang == LANG_PL1 || lang == LANG_RESERVED1) || (lang == LANG_ADA && use_c_semantics)) {
            return true;
        }

        if (stat->opc == Uirst || stat->opc == Uirsv) {
            return true;
        }

        if (proc->no_sideeffects && (aentptr == NULL || lang != LANG_FORTRAN)) {
            return false;
        }

        baseaddr = stat->u.store.baseaddr;
        if (baseaddr->type == dumped) {
            fix_sbase(stat);
            baseaddr = stat->u.store.baseaddr;
        }

        if (baseaddr->type == islda || baseaddr->type == isilda) {
            if (lang != LANG_COBOL) {
                killed = baseaddr->data.islda_isilda.level < level;
            } else if (baseaddr->data.islda_isilda.address.memtype == Smt && !in_fsym(baseaddr->data.islda_isilda.address.blockno)) {
                killed = true;
            }
        } else if (baseaddr->type != isvar &&
                baseaddr->type != issvar &&
                baseaddr->type != isop &&
                baseaddr->type != dumped) {
            killed = false;
        } else {
            killed = level > 0;
        }
    }

    return killed;
}

/*
0043CFCC readnxtinst
*/
void cupkillprev(int level, struct Proc *proc) {
    struct VarAccessList *access;

    for (access = curgraphnode->varlisthead; access != NULL; access = access->next) {
        if (access->type == 2) {
            if (!access->data.var->killed) {
                access->data.var->killed = clkilled(level, proc, access->data.var);
            }
        } else if (access->type == 3) {
            if (access->data.store->u.store.unk1F) {
                access->data.store->u.store.unk1F = !cmkilled(level, proc, access->data.move);
            }
            if (!access->data.store->u.store.unk1F) {
                access->data.store->u.store.unk1D = false;
            }
        } else if (access->type == 1) {
            if (access->data.store->u.store.unk1F) {
                access->data.store->u.store.unk1F = !cskilled(level, proc, access->data.store);
            }
            if (!access->data.store->u.store.unk1F) {
                access->data.store->u.store.unk1D = false;
            }
        }
    }
}

/*
0043CFCC readnxtinst
   kills everything before
*/
void ciakillprev(void) {
    struct VarAccessList *access;

    for (access = curgraphnode->varlisthead; access != NULL; access = access->next) {
        if (access->type == 2) {
            access->data.var->killed = true;
        } else if (access->type == 3) {
            access->data.move->u.store.unk1F = false;
            access->data.move->u.store.unk1D = false;
        } else if (access->type == 1) {
            access->data.store->u.store.unk1F = false;
            access->data.store->u.store.unk1D = false;
        }
    }
}

/*
0044CD14 listplkilled
*/
static bool plkilled(struct Expression *baseaddr, struct Expression *expr) {
    struct Expression *lbaseaddr;
    bool killed;

    if (expr->type == isop && (expr->data.isop.opc == Uirld || expr->data.isop.opc == Uirlv)) {
        return true;
    }

    if (expr->type == isvar || expr->type == issvar) {
        if (baseaddr->type == islda || baseaddr->type == isilda) {
            killed = overlapping(expr->data.isvar_issvar.location, baseaddr->data.islda_isilda.address, expr->data.isvar_issvar.size, baseaddr->data.islda_isilda.size);
        } else if ((baseaddr->type != isvar &&
                    baseaddr->type != issvar &&
                    baseaddr->type != isop &&
                    baseaddr->type != dumped) ||
                    pointtoheap(baseaddr)) {
            killed = false;
        } else if (aliaswithptr(&expr->data.isvar_issvar.location)) {
            killed = true;
        } else {
            killed = lang == LANG_FORTRAN && baseaddr->type == isvar && baseaddr->data.isvar_issvar.location.memtype == Mmt;
        }
    } else {
        if (expr->data.isop.unk34->type == dumped) {
            fix_base(expr);
        }
        lbaseaddr = expr->data.isop.unk34;

        if (lbaseaddr->type == islda || lbaseaddr->type == isilda) {
            if (baseaddr->type == islda || baseaddr->type == isilda) {
                killed = overlapping(lbaseaddr->data.islda_isilda.address, baseaddr->data.islda_isilda.address, lbaseaddr->data.islda_isilda.size, baseaddr->data.islda_isilda.size);
            } else if ((baseaddr->type != isvar &&
                        baseaddr->type != isop &&
                        baseaddr->type != issvar &&
                        baseaddr->type != dumped) ||
                        pointtoheap(baseaddr)) {
                killed = false;
            } else if (aliaswithptr(&lbaseaddr->data.islda_isilda.address)) {
                killed = true;
            } else {
                killed = lang == LANG_FORTRAN && baseaddr->type == isvar && baseaddr->data.isvar_issvar.location.memtype == Mmt;
            }
        } else if (lang != LANG_C &&
                (lbaseaddr->type != isvar &&
                 lbaseaddr->type != isop &&
                 lbaseaddr->type != issvar &&
                 lbaseaddr->type != dumped)) {
            killed = false;
        } else if (pointtoheap(lbaseaddr)) {
            killed = pointtoheap(baseaddr);
        } else {
            if (baseaddr->type == islda || baseaddr->type == isilda) {
                killed = aliaswithptr(&baseaddr->data.islda_isilda.address);
            } else {
                killed = true;
                if (lang != LANG_C &&
                        (baseaddr->type != isvar &&
                         baseaddr->type != isop &&
                         baseaddr->type != issvar &&
                         baseaddr->type != dumped)) {
                    killed = false;
                }
            }
        }

        if (!killed &&
                (expr->data.isop.opc != Uilod &&
                 expr->data.isop.opc != Uirld &&
                 expr->data.isop.opc != Uildv &&
                 expr->data.isop.opc != Uirlv)) {
            lbaseaddr = expr->data.isop.aux.unk38;

            if (lbaseaddr->type == islda || lbaseaddr->type == isilda) {
                if (baseaddr->type == islda || baseaddr->type == isilda) {
                    killed = overlapping(lbaseaddr->data.islda_isilda.address, baseaddr->data.islda_isilda.address, lbaseaddr->data.islda_isilda.size, baseaddr->data.islda_isilda.size);
                } else if ((baseaddr->type != isvar &&
                            baseaddr->type != isop &&
                            baseaddr->type != issvar &&
                            baseaddr->type != dumped) ||
                        pointtoheap(baseaddr)) {
                    killed = false;
                } else if (aliaswithptr(&lbaseaddr->data.islda_isilda.address)) {
                    killed = true;
                } else {
                    killed = lang == LANG_FORTRAN && baseaddr->type == isvar && baseaddr->data.isvar_issvar.location.memtype == Mmt;
                }
            } else if (lang != LANG_C &&
                    (lbaseaddr->type != isvar &&
                     lbaseaddr->type != isop &&
                     lbaseaddr->type != issvar &&
                     lbaseaddr->type != dumped)) {
                killed = false;
            } else if (pointtoheap(lbaseaddr)) {
                killed = pointtoheap(baseaddr);
            } else if (baseaddr->type == islda || baseaddr->type == isilda) {
                killed = aliaswithptr(&baseaddr->data.islda_isilda.address);
            } else if ((lang != LANG_C &&
                        (baseaddr->type != isvar &&
                         baseaddr->type != isop &&
                         baseaddr->type != issvar &&
                         baseaddr->type != dumped)) ||
                    pointtoheap(baseaddr)) {
                killed = false;
            } else {
                killed = true;
            }
        }
    }
    return killed;
}

/*
00431508 candidate
004324F4 findinduct
0044D6EC parkillprev
00454D08 func_00454D08
00455060 func_00455060
0045C8A0 lvalaltered
0045CD78 expaltered
004638C0 regdataflow
*/
bool listplkilled(struct Statement *parameters, struct Expression *expr, int arg2) {
    struct Statement *arg;
    bool killed = false;
    struct Proc *proc;
    struct Expression *baseaddr;

    for (arg = parameters; arg != NULL && !killed; arg = arg->u.par.next) {
        if ((arg->u.par.dtype == Adt || (lang == LANG_ADA && arg->u.par.dtype != Fdt)) && !arg2) {
            killed = plkilled(arg->u.par.baseaddr, expr);
        } else if (arg->u.par.dtype == Fdt) {
            baseaddr = arg->u.par.baseaddr;
            if (baseaddr->type == isconst) {
                proc = getproc(baseaddr->data.isconst.number.intval);
                killed = clkilled(proc->level, proc, expr);
            } else {
                killed = clkilled(curlevel, indirprocs, expr);
            }
        }
    }

    return killed;
}

/*
0044D4B4 listpskilled
*/
static bool pmkilled(struct Expression *baseaddr, struct Statement *stat) {
    struct Expression *mbaseaddr;
    bool killed;

    mbaseaddr = stat->u.store.u.mov.baseaddr;

    if (mbaseaddr->type == islda || mbaseaddr->type == isilda) {
        if (baseaddr->type == islda || baseaddr->type == isilda) {
            killed = overlapping(mbaseaddr->data.islda_isilda.address, baseaddr->data.islda_isilda.address,
                                 mbaseaddr->data.islda_isilda.size, baseaddr->data.islda_isilda.size);
        } else if ((baseaddr->type != isvar &&
                    baseaddr->type != isop &&
                    baseaddr->type != issvar &&
                    baseaddr->type != dumped) ||
                pointtoheap(baseaddr)) {
            killed = false;
        } else if (aliaswithptr(&stat->u.store.u.mov.baseaddr->data.islda_isilda.address)) {
            killed = true;
        } else {
            killed = lang == LANG_FORTRAN && baseaddr->type == isvar && baseaddr->data.isvar_issvar.location.memtype == Mmt;
        }
    } else if (lang != LANG_C &&
            (mbaseaddr->type != isvar &&
             mbaseaddr->type != isop &&
             mbaseaddr->type != issvar &&
             mbaseaddr->type != dumped)) {
        killed = false;
    } else if (pointtoheap(mbaseaddr)) {
        killed = pointtoheap(baseaddr);
    } else if (baseaddr->type == islda || baseaddr->type == isilda) {
        killed = aliaswithptr(&baseaddr->data.islda_isilda.address);
    } else {
        killed = true;
        if (lang != LANG_C &&
                (baseaddr->type != isvar &&
                 baseaddr->type != isop &&
                 baseaddr->type != issvar &&
                 baseaddr->type != dumped)) {
            killed = false;
        }
    }

    return killed;
}

/*
0044D4B4 listpskilled
*/
static bool pskilled(struct Expression *pbaseaddr, struct Statement *stat) {
    struct Expression *sbaseaddr;
    bool killed;

    if (stat->opc == Uirst || stat->opc == Uirsv) {
        return true;
    }

    if (stat->opc == Uisst || stat->opc == Ustr || stat->opc == Unop) {
        if (pbaseaddr->type == islda || pbaseaddr->type == isilda) {
            killed = overlapping(stat->expr->data.isvar_issvar.location, pbaseaddr->data.islda_isilda.address, stat->expr->data.isvar_issvar.size, pbaseaddr->data.islda_isilda.size);
        } else if ((pbaseaddr->type != isvar &&
                    pbaseaddr->type != isop &&
                    pbaseaddr->type != issvar &&
                    pbaseaddr->type != dumped) ||
                    pointtoheap(pbaseaddr)) {
            killed = false;
        } else if (aliaswithptr(&stat->expr->data.isvar_issvar.location)) {
            killed = true;
        } else {
            killed = lang == LANG_FORTRAN && pbaseaddr->type == isvar && pbaseaddr->data.isvar_issvar.location.memtype == Mmt;
        }
    } else {
        if (stat->u.store.baseaddr->type == dumped) {
            fix_sbase(stat);
        }
        sbaseaddr = stat->u.store.baseaddr;

        if (sbaseaddr->type == islda || sbaseaddr->type == isilda) {
            if (pbaseaddr->type == islda || pbaseaddr->type == isilda) {
                killed = overlapping(sbaseaddr->data.islda_isilda.address, pbaseaddr->data.islda_isilda.address, sbaseaddr->data.islda_isilda.size, pbaseaddr->data.islda_isilda.size);
            } else if ((pbaseaddr->type != isvar &&
                        pbaseaddr->type != isop &&
                        pbaseaddr->type != issvar &&
                        pbaseaddr->type != dumped) ||
                        pointtoheap(pbaseaddr)) {
                killed = false;
            } else if (aliaswithptr(&stat->u.store.baseaddr->data.islda_isilda.address)) {
                killed = true;
            } else {
                killed = lang == LANG_FORTRAN && pbaseaddr->type == isvar && pbaseaddr->data.isvar_issvar.location.memtype == Mmt;
            }
        } else if (lang != LANG_C &&
                (sbaseaddr->type != isvar &&
                 sbaseaddr->type != isop &&
                 sbaseaddr->type != issvar &&
                 sbaseaddr->type != dumped)) {
            killed = false;
        } else if (pointtoheap(sbaseaddr) != 0) {
            killed = pointtoheap(pbaseaddr);
        } else if (pbaseaddr->type == islda || pbaseaddr->type == isilda) {
            killed = aliaswithptr(&pbaseaddr->data.islda_isilda.address);
        } else {
            killed = true;
            if (lang != LANG_C &&
                    (pbaseaddr->type != isvar &&
                     pbaseaddr->type != isop &&
                     pbaseaddr->type != issvar &&
                     pbaseaddr->type != dumped)) {
                killed = false;
            }
        }
    }
    return killed;
}

/*
004175BC copypropagate
004471AC codeimage
0044D6EC parkillprev
0045D208 patchvectors
*/
bool listpskilled(struct Statement *parameters, struct Statement *stat, int arg3) {
    struct Proc *proc;
    struct Statement *arg;
    bool killed = false;

    for (arg = parameters; arg != NULL && !killed; arg = arg->u.par.next) {
        if ((arg->u.par.dtype == Adt || (lang == LANG_ADA && arg->u.par.dtype != Fdt)) && !arg3) {
            killed = pskilled(arg->u.par.baseaddr, stat);
            if (!killed) {
                if (stat->opc == Umov || stat->opc == Umovv) {
                    killed = pmkilled(arg->u.par.baseaddr, stat);
                }
            }
        } else if (arg->u.par.dtype == Fdt) {
            if (arg->u.par.baseaddr->type == isconst) {
                proc = getproc(arg->u.par.baseaddr->data.isconst.number.intval);
                killed = cskilled(proc->level, proc, stat);
            } else {
                killed = cskilled(curlevel, indirprocs, stat);
            }
            if (!killed) {
                if (stat->opc == Umov || stat->opc == Umovv) {
                    if (arg->u.par.baseaddr->type == isconst) {
                        killed = cmkilled(proc->level, proc, stat);
                    } else {
                        killed = cmkilled(curlevel, indirprocs, stat);
                    }
                }
            }
        }
    }

    return killed;
}

/*
0043CFCC readnxtinst
*/
void parkillprev(struct Statement *parameters) {
    struct VarAccessList *access;

    for (access = curgraphnode->varlisthead; access != NULL; access = access->next) {
        if (access->type == 2) {
            if (!access->data.var->killed) {
                access->data.var->killed = listplkilled(parameters, access->data.var, access->unk8);
            }
        } else if (access->type == 1) {
            if (access->data.store->u.store.unk1F) {
                access->data.store->u.store.unk1F = !listpskilled(parameters, access->data.store, access->unk8);
            }

            if (!access->data.store->u.store.unk1F) {
                access->data.store->u.store.unk1D = false;
            }
        }
    }
}

/*
0043CFCC readnxtinst
0045CD78 expaltered
0046D428 oneloopblockexpr
*/
bool varkilled(struct Expression *expr, struct VarAccessList *varlist) {
    struct VarAccessList *access;
    bool killed = false;

    if (expr->type == isop && (expr->data.isop.opc == Uildv || expr->datatype == Sdt)) {
        killed = true;
    }

    for (access = varlist; access != NULL && !killed; access = access->next) {
        if (access->type == 1 && !access->unk8) {
            killed = slkilled(access->data.store, expr);
        }
    }
    return killed;
}

/*
004175BC copypropagate
0043CFCC readnxtinst
0045D208 patchvectors
0046E77C oneloopblockstmt
004737E0 par_to_str
00473F04 pmov_to_mov
*/
bool strlkilled(struct Statement *stat, struct VarAccessList *varlist) {
    struct VarAccessList *access;
    bool killed = false;

    if (stat->opc == Uistv) {
        killed = true;
    }

    for (access = varlist; access != NULL && !killed; access = access->next) {
        if (access->type == 2 && !access->unk8) {
            if (access->data.store->opc == Uadj ||
                    access->data.store->opc == Uaos ||
                    access->data.store->opc == Ubgnb) {
                dbgerror(0x274);
            }
            killed = slkilled(stat, access->data.var);
        } else if (access->type == 3) {
            killed = smkilled(stat, access->data.move);
        }
    }

    return killed;
}

/*
004175BC copypropagate
0043CFCC readnxtinst
0045D208 patchvectors
0046E77C oneloopblockstmt
004737E0 par_to_str
00473F04 pmov_to_mov
*/
bool strskilled(struct Statement *stat, struct VarAccessList *varlist) {
    struct VarAccessList *access;
    bool killed = false;

    if (stat->opc == Uistv) {
        killed = true;
    }

    for (access = varlist; access != NULL && !killed; access = access->next) {
        if (access->type == 1 && !access->unk8) {
            killed = sskilled(access->data.store, stat);

            if (!killed &&
                    (stat->opc == Umov ||
                     stat->opc == Umovv)) {
                killed = smkilled(access->data.store, stat);
            }
        }
    }

    return killed;
}

/*
0045C8A0 lvalaltered
*/
bool strlant(struct Statement *stat, struct VarAccessList *varlist) {
    struct VarAccessList *access;
    bool killed = false;

    if (stat->opc == Uistv) {
        killed = true;
    }

    for (access = varlist; !killed && access != NULL; access = access->prev) {
        if (access->type == 2 && !access->unk8) {
            killed = slkilled(stat, access->data.var);
        } else if (access->type == 3) {
            killed = smkilled(stat, access->data.move);
        }
    }

    return !killed;
}

/*
004175BC copypropagate
*/
bool indirectaccessed(struct VariableLocation location, unsigned char size, struct VarAccessList *varlist) {
    struct VarAccessList *access;
    struct Expression *baseaddr2;
    bool killed = false;

    for (access = varlist; !killed && access != NULL; access = access->next) {
        if (access->type == 1) {
            if (access->data.store->opc == Uistr ||
                    access->data.store->opc == Uistv ||
                    access->data.store->opc == Umov ||
                    access->data.store->opc == Umovv ||
                    access->data.store->opc == Uirst ||
                    access->data.store->opc == Uirsv) {
                if (access->data.store->u.store.baseaddr->type == dumped) {
                    fix_sbase(access->data.store);
                }

                if (access->data.store->u.store.baseaddr->type == islda ||
                        access->data.store->u.store.baseaddr->type == isilda) {
                    killed = overlapping(location, access->data.store->u.store.baseaddr->data.islda_isilda.address, size, access->data.store->u.store.baseaddr->data.islda_isilda.size);
                } else if ((access->data.store->u.store.baseaddr->type == isvar ||
                            access->data.store->u.store.baseaddr->type == issvar ||
                            access->data.store->u.store.baseaddr->type == isop ||
                            access->data.store->u.store.baseaddr->type == dumped) &&
                        !pointtoheap(access->data.store->u.store.baseaddr)) {
                    killed = aliaswithptr(&location);
                }
            }
        } else if (access->type == 2) {
            if (access->data.var->type == isop) {
                if (access->data.var->data.isop.unk34->type == dumped) {
                    fix_base(access->data.var);
                }
                baseaddr2 = access->data.var->data.isop.unk34;

                if (baseaddr2->type == islda || baseaddr2->type == isilda) {
                    killed = overlapping(location, baseaddr2->data.islda_isilda.address, size, baseaddr2->data.islda_isilda.size);
                } else if ((baseaddr2->type == isvar ||
                            baseaddr2->type == issvar ||
                            baseaddr2->type == isop ||
                            baseaddr2->type == dumped) &&
                        !pointtoheap(baseaddr2)) {
                    killed = aliaswithptr(&location);
                }
            }
        } else if (access->type == 3) {
            baseaddr2 = access->data.move->u.store.u.mov.baseaddr;
            if (baseaddr2->type == islda || baseaddr2->type == isilda) {
                killed = overlapping(location, baseaddr2->data.islda_isilda.address, size, baseaddr2->data.islda_isilda.size);
            } else if ((baseaddr2->type == isvar ||
                        baseaddr2->type == issvar ||
                        baseaddr2->type == isop ||
                        baseaddr2->type == dumped) &&
                    !pointtoheap(baseaddr2)) {
                killed = aliaswithptr(&location);
            }
        }
    }

    return killed;
}
