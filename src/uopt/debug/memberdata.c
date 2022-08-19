#ifdef UOPT_DEBUG
#include <stdlib.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#include "uoptdata.h"
#include "debug.h"
#include "memberdata.h"

/* This is pretty heinous, but the structs will never change... */

#define _TYPE_TO_ID(t) _Generic((t), \
        struct Statement *: STATEMENT, \
        struct Expression *: EXPRESSION, \
        struct IChain *: ICHAIN, \
        struct LiveRange *: LIVERANGE, \
        struct LiveUnit *: LIVEUNIT, \
        struct Graphnode *: GRAPHNODE, \
        struct GraphnodeList *: GRAPHNODE_LIST, \
        struct VarAccessList *: VAR_ACCESS, \
        struct Temploc *: TEMPLOC, \
        struct Variable *: VARIABLE, \
        struct VariableLocation: VARLOC, \
        struct BitVector : BITVECTOR, \
        struct InterfereList *: INTERFERELIST, \
        struct TrepImageThing *: TREP, \
        struct Proc *: MISC, \
        struct StrengthReductionCand *: STRENGTH_REDUCTION, \
        struct RecurThing *: INT, \
        \
        bool: BOOL, \
        unsigned char: CHAR, \
        unsigned char*: MISC, \
        unsigned short: SHORT, \
        unsigned int: INT, \
        char: CHAR, \
        short: SHORT, \
        int: INT, \
        int *: MISC, \
        float: FLOAT \
        )

#define TYPE_TO_ID(t) _TYPE_TO_ID(t)

#define MEMBER_TYPEOF(member) (((PARENT_TYPE*)0)->member)

#define MEMBER_DEF(typeid, member_type, member, nelems) \
(struct Member)                                         \
{                                                       \
    .type = typeid,                                     \
    .name = #member,                                    \
    .typeName = #member_type,                           \
    .offset = offsetof(PARENT_TYPE, member),            \
    .size = sizeof(member_type),                        \
    .numElements = nelems,                              \
}

#define LIST_MEMBER_DEF(typeid, member_type, member, nelems, list_type, list_next) \
(struct Member)                                         \
{                                                       \
    .type = typeid,                                     \
    .name = #member,                                    \
    .typeName = #member_type,                           \
    .offset = offsetof(PARENT_TYPE, member),            \
    .size = sizeof(member_type),                        \
    .numElements = nelems,                              \
    .isList = true,                                     \
    .listNextOffset = offsetof(list_type, list_next)    \
}

#define MEMBER_UNION(member, union_members, union_cond_func) \
(struct Member)                                              \
{                                                            \
    .type = MISC,                                            \
    .name = #member,                                         \
    .typeName = "union",                                     \
    .offset = offsetof(PARENT_TYPE, member),                 \
    .size = sizeof(MEMBER_TYPEOF(member)),                   \
    .numElements = 1,                                        \
    .isUnion = true,                                         \
    .numUnionMembers = ARRAYLEN(union_members),              \
    .unionMembers = union_members,                           \
    .unionCond = union_cond_func,                            \
}


#define MEMBER(member_type, member) MEMBER_DEF(TYPE_TO_ID(MEMBER_TYPEOF(member)), member_type, member, 1)
#define MEMBER_LIST(member_type, member, list_type, list_next) LIST_MEMBER_DEF(TYPE_TO_ID(MEMBER_TYPEOF(member)), member_type, member, 1, list_type, list_next)
#define MEMBER_ARRAY(member_type, member) MEMBER_DEF(TYPE_TO_ID(MEMBER_TYPEOF(member)), member_type, member, ARRAYLEN(((PARENT_TYPE *)0)->member))

#define MEMBER_SPECIAL(special_type, member_type, member) MEMBER_DEF(special_type, member_type, member, 1)
#define MEMBER_SPECIAL_ARRAY(special_type, member_type, member) MEMBER_DEF(special_type, member_type, member, ARRAYLEN(((PARENT_TYPE *)0)->member))
#define MEMBER_BITFIELD(member_type, member, prev_member, offbits, numbits)                   \
(struct Member)                                                                        \
{                                                                                      \
    .type = BITFIELD,                                                                  \
    .name = #member,                                                                   \
    .typeName = #member_type,                                                          \
    .offset = offsetof(PARENT_TYPE, prev_member) + sizeof(MEMBER_TYPEOF(prev_member)), \
    .offset_bits = offbits,                                                            \
    .bits = numbits,                                                                   \
    .size = sizeof(member_type),                                                       \
    .numElements = 1,                                                                  \
}

#define PARENT_TYPE struct LiveRange
struct Member liveRangeMembers[] = {
    MEMBER(struct IChain *, ichain),
    MEMBER(int, bitpos),
    MEMBER_LIST(struct LiveUnit *,liveunits, struct LiveUnit, next),
    MEMBER_SPECIAL(BITVECTORBB, struct BitVector, reachingbbs),
    MEMBER_SPECIAL(BITVECTORBB, struct BitVector, livebbs),
    MEMBER(int, unk1C),
    MEMBER_SPECIAL(REGISTER, char, assigned_reg),
    MEMBER(unsigned char, regsleft),
    MEMBER(bool, hasstore),
    MEMBER(unsigned char, unk23),
    MEMBER(int, unk24),
    MEMBER_SPECIAL_ARRAY(REGSET64, int[2], forbidden),
    MEMBER(float, adjsave),
    MEMBER(struct LiveRange *, next),
    MEMBER_LIST(struct InterfereList *, interfere, struct InterfereList, next),
    //MEMBER(struct LiveUnit *, liveunitsTail),
};
#undef PARENT_TYPE

#define PARENT_TYPE struct LiveUnit
struct Member liveUnitMembers[] = {
    MEMBER(struct Graphnode *, node),
    MEMBER(struct LiveUnit *, next),
    MEMBER(struct LiveRange *, liverange),
    MEMBER(struct LiveUnit *, next_in_block),
    MEMBER(unsigned short, load_count),
    MEMBER(unsigned char, store_count),
    MEMBER_SPECIAL(REGISTER, unsigned char, reg),
    MEMBER(bool, firstisstr),
    MEMBER(bool, needreglod),
    MEMBER(bool, needregsave),
    MEMBER(bool, deadout),
};
#undef PARENT_TYPE

#define PARENT_TYPE struct InterfereList
struct Member interfereListMembers[] = {
    MEMBER(struct LiveRange *, liverange),
    MEMBER(struct InterfereList *, next),
    MEMBER(unsigned char, shared),
    MEMBER(unsigned char, marked),
};
#undef PARENT_TYPE

#define PARENT_TYPE struct Expression
struct Member exprIslda[] = {
        MEMBER(int, data.islda_isilda.offset),
        MEMBER(int, data.islda_isilda.size),
        MEMBER(int, data.islda_isilda.level),
        MEMBER(struct VariableLocation, data.islda_isilda.address),
        MEMBER(struct Expression *, data.islda_isilda.outer_stack),
        MEMBER(struct Temploc *, data.islda_isilda.temploc),
};

struct Member exprIsvar[] = {
        MEMBER(unsigned char, data.isvar_issvar.size),
        MEMBER(bool, data.isvar_issvar.veqv),
        MEMBER(bool, data.isvar_issvar.vreg),
        MEMBER(bool, data.isvar_issvar.is_volatile),
        MEMBER(struct Expression *, data.isvar_issvar.outer_stack),
        MEMBER(struct VariableLocation, data.isvar_issvar.location),
        MEMBER(struct Expression *, data.isvar_issvar.copy),
        MEMBER(struct Expression *, data.isvar_issvar.assigned_value),
        MEMBER(struct Statement *, data.isvar_issvar.assignment),
        MEMBER(struct Temploc *, data.isvar_issvar.temploc),
};

bool condExprAuxCvtfrom(void *_expr)
{
    struct Expression *expr = _expr;
    return (expr->data.isop.opc == Ucvt || expr->data.isop.opc == Urnd || expr->data.isop.opc == Utyp);
}

bool condExprAuxBaseaddr2(void *_expr)
{
    struct Expression *expr = _expr;
    return (expr->data.isop.opc == Uiequ || expr->data.isop.opc == Uineq || expr->data.isop.opc == Uigeq || expr->data.isop.opc == Uigrt || expr->data.isop.opc == Uileq || expr->data.isop.opc == Uiles);
}

bool condExprAuxMtagnoAlign(void *_expr)
{
    struct Expression *expr = _expr;
    return (expr->data.isop.opc == Uildv || expr->data.isop.opc == Uilod || expr->data.isop.opc == Uirld || expr->data.isop.opc == Uirlv);
}


bool condExprTrep12(void *_expr)
{
    struct Expression *expr = _expr;
    return (expr->data.isop.opc == Uequ ||
            expr->data.isop.opc == Ugeq ||
            expr->data.isop.opc == Ugrt ||
            expr->data.isop.opc == Uleq ||
            expr->data.isop.opc == Ules ||
            expr->data.isop.opc == Uneq);

}

struct Member exprAuxCvtfrom[] = {
            MEMBER_SPECIAL(DATATYPE, Datatype, data.isop.aux.cvtfrom),
};

struct Member exprAuxMtagnoAlign[] = {
            MEMBER(int, data.isop.aux.mtagno),
            MEMBER(unsigned char, data.isop.aux2.v1.align),
};

struct Member exprAuxBaseaddr2[] = {
            MEMBER(struct Expression *, data.isop.aux.unk38),
};

struct Member exprAuxTrep12[] = {
            MEMBER(struct TrepImageThing *, data.isop.aux.unk38_trep),
            MEMBER(struct TrepImageThing *, data.isop.aux2.unk3C_trep),
};

bool condExprAux2Unk3C(void *_expr)
{
    struct Expression *expr = _expr;
    return (expr->data.isop.opc == Uinn ||
            expr->data.isop.opc == Uadj  ||
            expr->data.isop.opc == Uildv ||
            expr->data.isop.opc == Uilod ||
            expr->data.isop.opc == Uirld ||
            expr->data.isop.opc == Uirlv ||
            expr->data.isop.opc == Uiequ ||
            expr->data.isop.opc == Uineq ||
            expr->data.isop.opc == Uigeq ||
            expr->data.isop.opc == Uigrt ||
            expr->data.isop.opc == Uileq ||
            expr->data.isop.opc == Uiles);
}

bool condExprAux2overflow(void *_expr)
{
    struct Expression *expr = _expr;
    return (expr->data.isop.opc == Uadd || expr->data.isop.opc == Uand || expr->data.isop.opc == Uint || expr->data.isop.opc == Uior ||
            expr->data.isop.opc == Umpy || expr->data.isop.opc == Uuni || expr->data.isop.opc == Uxor || expr->data.isop.opc == Ubsub||
            expr->data.isop.opc == Usub || expr->data.isop.opc == Udiv || expr->data.isop.opc == Umod || expr->data.isop.opc == Urem ||
            expr->data.isop.opc == Umin || expr->data.isop.opc == Umax || expr->data.isop.opc == Udif || expr->data.isop.opc == Umus ||
            expr->data.isop.opc == Ushl || expr->data.isop.opc == Ushr || expr->data.isop.opc == Usign|| expr->data.isop.opc == Uabs ||
            expr->data.isop.opc == Ulnot|| expr->data.isop.opc == Uneg || expr->data.isop.opc == Unot || expr->data.isop.opc == Uodd ||
            expr->data.isop.opc == Usgs || expr->data.isop.opc == Usqr || expr->data.isop.opc == Usqrt|| expr->data.isop.opc == Uchkh||
            expr->data.isop.opc == Uchkl|| expr->data.isop.opc == Ucvtl|| expr->data.isop.opc == Udec || expr->data.isop.opc == Uinc ||
            expr->data.isop.opc == Ucvt || expr->data.isop.opc == Urnd || expr->data.isop.opc == Utyp);
}

struct Member exprAux2Unk3C[] = {
    MEMBER(unsigned short, data.isop.aux2.v1.unk3C),
};

struct Member exprAux2overflow[] = {
    MEMBER(bool, data.isop.aux2.v1.overflow_attr),
};

struct Member exprIsop[] = {
        MEMBER_SPECIAL(OPCODE, Uopcode, data.isop.opc),
        MEMBER(bool, data.isop.anticipated),
        MEMBER(bool, data.isop.available),
        MEMBER_SPECIAL(DATATYPE, Datatype, data.isop.datatype),
        MEMBER(struct Expression *, data.isop.op1),
        MEMBER(struct Expression *, data.isop.op2),
        MEMBER(int, data.isop.datasize),
        MEMBER(struct Temploc *, data.isop.temploc),
        MEMBER(struct Expression *, data.isop.unk34),
        // aux
        MEMBER_UNION(data.isop.aux.cvtfrom,    exprAuxCvtfrom,     condExprAuxCvtfrom),
        MEMBER_UNION(data.isop.aux.mtagno,     exprAuxMtagnoAlign, condExprAuxMtagnoAlign),
        MEMBER_UNION(data.isop.aux.unk38,      exprAuxBaseaddr2,   condExprAuxBaseaddr2),
        MEMBER_UNION(data.isop.aux.unk38_trep, exprAuxTrep12,      condExprTrep12),
        // aux2
        MEMBER_UNION(data.isop.aux2.v1.unk3C,         exprAux2Unk3C,    condExprAux2Unk3C),
        MEMBER_UNION(data.isop.aux2.v1.overflow_attr, exprAux2overflow, condExprAux2overflow),
};

struct Member exprIsconst[] = {
        //MEMBER(union Constant, data.isconst.number),
        MEMBER(int, data.isconst.size),
        MEMBER(int, data.isconst.real_significand),
        MEMBER(int, data.isconst.real_exponent),
};

struct Member exprIsrconst[] = {
        MEMBER(unsigned short, data.isrconst.value),
        MEMBER(int, data.isrconst.unk24),
};

bool condExprIsldaIsilda(void *expr) { return ((struct Expression *)expr)->type == islda || ((struct Expression *)expr)->type == isilda; }
bool condExprIsvarIssvar(void *expr) { return ((struct Expression *)expr)->type == isvar || ((struct Expression *)expr)->type == issvar; }
bool condExprIsop(void *expr)        { return ((struct Expression *)expr)->type == isop; }
bool condExprIsconst(void *expr)     { return ((struct Expression *)expr)->type == isconst; }
bool condExprIsrconst(void *expr)    { return ((struct Expression *)expr)->type == isrconst; }

struct Member expressionMembers[] = {
    MEMBER_SPECIAL(EXPRTYPE, ExpressionType, type),
    MEMBER_SPECIAL(DATATYPE, Datatype, datatype),
    MEMBER(bool, killed),
    MEMBER(bool, initialVal),
    MEMBER(unsigned char, unk4),
    MEMBER(unsigned char, visited),
    MEMBER(unsigned short, count),
    MEMBER(unsigned short, table_index),
    MEMBER(int, chain_index),
    MEMBER(struct Graphnode *, graphnode),
    MEMBER(struct IChain *, ichain),
    MEMBER(struct VarAccessList *, var_access_list),
    MEMBER(struct Expression *, next),

    MEMBER_UNION(data.islda_isilda, exprIslda,    condExprIsldaIsilda),
    MEMBER_UNION(data.isvar_issvar, exprIsvar,    condExprIsvarIssvar),
    MEMBER_UNION(data.isop,         exprIsop,     condExprIsop),
    MEMBER_UNION(data.isconst,      exprIsconst,  condExprIsconst),
    MEMBER_UNION(data.isrconst,     exprIsrconst, condExprIsrconst),
};
#undef PARENT_TYPE

#define PARENT_TYPE struct IChain
bool condIChainIsldaIsilda(void *ichain) { return ((struct IChain *)ichain)->type == islda || ((struct IChain *)ichain)->type == isilda; }
bool condIChainIsvarIssvar(void *ichain) { return ((struct IChain *)ichain)->type == isvar || ((struct IChain *)ichain)->type == issvar; }
bool condIChainIsop(void *ichain)        { return ((struct IChain *)ichain)->type == isop; }
bool condIChainIsconst(void *ichain)     { return ((struct IChain *)ichain)->type == isconst; }
bool condIChainIsrconst(void *ichain)    { return ((struct IChain *)ichain)->type == isrconst; }

struct Member ichainIslda[] = {
    MEMBER(int, islda_isilda.offset),
    MEMBER(int, islda_isilda.size),
    MEMBER(struct VariableLocation, islda_isilda.address),
    MEMBER(struct IChain *, islda_isilda.outer_stack_ichain),
    MEMBER(struct Temploc *, islda_isilda.temploc),
};

struct Member ichainIsvar[] = {
    MEMBER(struct VariableLocation, isvar_issvar.location),
    MEMBER(unsigned char, isvar_issvar.size),
    MEMBER(bool, isvar_issvar.vreg),
    MEMBER(bool, isvar_issvar.veqv),
    MEMBER(unsigned char, isvar_issvar.unk1B),
    MEMBER(struct IChain *, isvar_issvar.outer_stack_ichain),
    MEMBER(struct Temploc *, isvar_issvar.temploc),
    //union {
        MEMBER(unsigned short, isvar_issvar.assignbit),
        MEMBER(int, isvar_issvar.unk24),
    //};
};

bool condIchainIsopCvtfrom(void *_ichain) {
    struct IChain *ichain = _ichain;
    return ichain->isop.opc == Ucvt || ichain->isop.opc == Urnd || ichain->isop.opc == Utyp;
}

bool condIchainIsopUnk24u16(void *_ichain) {
    struct IChain *ichain = _ichain;
    return ichain->isop.opc == Uinn || ichain->isop.opc == Uadj || ichain->isop.opc == Uilod || ichain->isop.opc == Uirld ||
        ichain->isop.opc == Uildv || ichain->isop.opc == Uirlv || ichain->isop.opc == Uiequ || ichain->isop.opc == Uineq ||
        ichain->isop.opc == Uigeq || ichain->isop.opc == Uigrt || ichain->isop.opc == Uileq || ichain->isop.opc == Uiles;
}

bool condIchainIsopSWord(void *_ichain) {
    struct IChain *ichain = _ichain;
    return ichain->isop.opc == Uistr || ichain->isop.opc == Uistv || ichain->isop.opc == Uirsv || ichain->isop.opc == Uirst;
}

struct Member ichainIsopCvtfrom[] = {
    MEMBER_SPECIAL(DATATYPE, Datatype, isop.cvtfrom),
};

struct Member ichainIsopUnk24u16[] = {
    MEMBER(unsigned short, isop.unk24_u16),
};

struct Member ichainIsopSWord[] = {
    MEMBER(unsigned short, isop.s.word),
};

bool condIchainIsopStat(void *_ichain) {
    struct IChain *ichain = _ichain;
    return (ichain->isop.opc == Ustr || ichain->isop.opc == Uistr || ichain->isop.opc == Uchkt || ichain->isop.opc == Uistr ||
            ichain->isop.opc == Uistv || ichain->isop.opc ==  Umov || ichain->isop.opc == Umovv || ichain->isop.opc == Utpeq ||
            ichain->isop.opc == Utpge || ichain->isop.opc == Utpgt || ichain->isop.opc == Utple || ichain->isop.opc == Utplt ||
            ichain->isop.opc == Utpne || ichain->isop.opc == Uirst || ichain->isop.opc == Uirsv);
}

bool condIchainIsopTemploc(void *_ichain) {
    struct IChain *ichain = _ichain;
    return !(ichain->isop.opc == Ustr || ichain->isop.opc == Uistr || ichain->isop.opc == Uchkt || ichain->isop.opc == Uistr ||
            ichain->isop.opc == Uistv || ichain->isop.opc ==  Umov || ichain->isop.opc == Umovv || ichain->isop.opc == Utpeq ||
            ichain->isop.opc == Utpge || ichain->isop.opc == Utpgt || ichain->isop.opc == Utple || ichain->isop.opc == Utplt ||
            ichain->isop.opc == Utpne || ichain->isop.opc == Uirst || ichain->isop.opc == Uirsv);
}

bool condIchainIsopCand(void *_ichain) {
    struct IChain *ichain = _ichain;
    return (ichain->isop.opc != Uadj && ichain->isop.opc != Ucg2 && ichain->isop.opc != Ucvt && ichain->isop.opc != Uiequ &&
            ichain->isop.opc != Uigeq && ichain->isop.opc != Uigrt && ichain->isop.opc != Uileq && ichain->isop.opc != Uiles &&
            ichain->isop.opc != Uineq && ichain->isop.opc != Uinn && ichain->isop.opc != Urnd && ichain->isop.opc != Utyp &&
            ichain->isop.opc != Uilod && ichain->isop.opc != Uildv && ichain->isop.opc != Uirld && ichain->isop.opc != Uirlv);
}

struct Member ichainIsopStat[] = {
    MEMBER(struct Statement *, isop.stat),
};

struct Member ichainIsopTemploc[] = {
    MEMBER(struct Temploc *, isop.temploc),
};

struct Member ichainIsopCand[] = {
    MEMBER(struct StrengthReductionCand *, isop.srcand),
};

struct Member ichainIsop[] = {
    MEMBER_SPECIAL(OPCODE, Uopcode, isop.opc),
    MEMBER(unsigned char, isop.overflow_attr),
    MEMBER_SPECIAL(DATATYPE, Datatype, isop.datatype),
    MEMBER(unsigned char, isop.unk13),
    MEMBER(struct IChain *, isop.op1),
    MEMBER(struct IChain *, isop.op2),
    MEMBER(int, isop.size),
    //union {
        MEMBER_UNION(isop.stat,    ichainIsopStat,    condIchainIsopStat),
        MEMBER_UNION(isop.temploc, ichainIsopTemploc, condIchainIsopTemploc),
    //};
    //union {
        MEMBER_UNION(isop.cvtfrom, ichainIsopCvtfrom, condIchainIsopCvtfrom),
        MEMBER_UNION(isop.unk24_u16, ichainIsopUnk24u16, condIchainIsopUnk24u16),
        MEMBER_UNION(isop.srcand, ichainIsopCand, condIchainIsopCand),
        MEMBER_UNION(isop.s.word, ichainIsopSWord, condIchainIsopSWord),
            /*
        union {
            // XXX: note whether the asm uses lw/sw or lh/sh ichain->unk24
            int word; // offset for istr/irst
            struct {
                unsigned short pad;
                unsigned short mtagno;
            };
        } s;
         */
    //};
};

struct Member ichainIsconst[] = {
    //MEMBER(union Constant, isconst.number),
    MEMBER(int, isconst.size),
};

struct Member ichainIsrconst[] = {
        MEMBER(unsigned short, isrconst.unk10),
        MEMBER(int, isrconst.unk14),
};

struct Member ichainMembers[] = {
    MEMBER_SPECIAL(EXPRTYPE, ExpressionType, type),
    MEMBER_SPECIAL(DATATYPE, Datatype, dtype),
    MEMBER(unsigned short, bitpos),
    MEMBER(unsigned short, table_index),
    MEMBER(unsigned short, chain_index),
    MEMBER(struct Expression *, expr),
    MEMBER(struct IChain *, next),

        MEMBER_UNION(islda_isilda, ichainIslda, condIChainIsldaIsilda),
        MEMBER_UNION(isvar_issvar, ichainIsvar, condIChainIsvarIssvar),
        MEMBER_UNION(isop, ichainIsop, condIChainIsop),
        MEMBER_UNION(isconst,  ichainIsconst,  condIChainIsconst),
        MEMBER_UNION(isrconst, ichainIsrconst, condIChainIsrconst),
}; // size 0x28
#undef PARENT_TYPE

#define PARENT_TYPE struct Statement
struct Member statOutpar[] = {
    MEMBER(struct Statement *, u.store.u.outpar.par),
};

struct Member statStr[] = {
    MEMBER_LIST(struct StrengthReductionCand *, u.store.u.str.srcands, struct StrengthReductionCand, next),
    MEMBER(struct RecurThing *, u.store.u.str.unk30),
};

struct Member statIstr[] = {
    MEMBER_SPECIAL(DATATYPE, Datatype, u.store.u.istr.dtype),
    MEMBER(unsigned char, u.store.u.istr.align),
    MEMBER(unsigned short, u.store.u.istr.mtagno),
    MEMBER(int, u.store.u.istr.offset),
};

struct Member statMov[] = {
    MEMBER(struct Expression *, u.store.u.mov.baseaddr),
    MEMBER(unsigned short, u.store.u.mov.offset),
    MEMBER(unsigned char, u.store.u.mov.src_align),
    MEMBER(unsigned char, u.store.u.mov.dst_align),
};

bool condStatStoreOutpar(void *_stat) {
    struct Statement *stat = _stat;
    return (stat->opc == Ustr && stat->outpar == true);
}
bool condStatStoreStr(void *_stat) {
    struct Statement *stat = _stat;
    return (stat->opc == Uisst || stat->opc == Ustr);
}
bool condStatStoreIstr(void *_stat) {
    struct Statement *stat = _stat;
    return (stat->opc == Uistr || stat->opc == Uistv ||
            stat->opc == Uirsv || stat->opc == Uirst);
}
bool condStatStoreMov(void *_stat) {
    struct Statement *stat = _stat;
    return (stat->opc == Umov || stat->opc == Umovv || stat->opc == Upmov);
}

struct Member statStore[] = {
    MEMBER(struct Expression *, u.store.expr),
    MEMBER(struct VarAccessList *, u.store.var_access_list_item),
    MEMBER(bool, u.store.lval_ant),
    MEMBER(bool, u.store.lval_av),
    MEMBER(bool, u.store.store_ant),
    MEMBER(bool, u.store.store_av),
    MEMBER(int, u.store.size),
    MEMBER(struct Expression *, u.store.baseaddr),
    MEMBER(struct IChain *, u.store.ichain),

    MEMBER_UNION(u.store.u.outpar, statOutpar, condStatStoreOutpar),
    MEMBER_UNION(u.store.u.str,    statStr,    condStatStoreStr),
    MEMBER_UNION(u.store.u.istr,   statIstr,   condStatStoreIstr),
    MEMBER_UNION(u.store.u.mov,    statMov,    condStatStoreMov),
};

struct Member statLabel[] = {
    MEMBER(int, u.label.blockno),
    MEMBER(int, u.label.length),
    MEMBER(bool, u.label.unk1C),
    MEMBER(int, u.label.unk20),
    MEMBER(unsigned char, u.label.flags),
    MEMBER(int, u.label.unk28),
};

struct Member statLbgn[] = {
    MEMBER(int, u.lbgn.unk14),
};

struct Member statBgnbEndb[] = {
    MEMBER(int, u.bgnb.blockno),
};

struct Member statLbdy[] = {
    MEMBER(unsigned char, u.lbdy.unk14),
};

struct Member statLoc[] = {
    MEMBER(int, u.loc.page),
    MEMBER(int, u.loc.line),
};

struct Member statNop[] = {
    MEMBER(int, u.nop.flags),
};

struct Member statClbdCubdStep[] = {
    MEMBER_SPECIAL(DATATYPE, Datatype, u.clbd_cubd_step.dtype),
    MEMBER(int, u.clbd_cubd_step.unk18),
};

struct Member statCtrl[] = {
    MEMBER_SPECIAL(DATATYPE, Datatype, u.ctrl.dtype),
    MEMBER(unsigned char, u.ctrl.unk15),
    MEMBER(struct VariableLocation, u.ctrl.var),
};

struct Member statMst[] = {
    MEMBER(int, u.mst.cup_level),
    MEMBER(int, u.mst.fp_offset),
    MEMBER(int, u.mst.loc),
    MEMBER(struct Proc *, u.mst.proc),
};

struct Member statChkt[] = {
    MEMBER(int, u.chkt.unk14),
    MEMBER(int, u.chkt.unk18),
};

struct Member statDef[] = {
    MEMBER(unsigned char, u.def.mtype),
    MEMBER(int, u.def.unk18),
};

struct Member statPar[] = {
    MEMBER_SPECIAL(DATATYPE, Datatype, u.par.dtype),
    MEMBER(unsigned char, u.par.size),
    MEMBER(unsigned char, u.par.reg),
    MEMBER(unsigned char, u.par.unk17),
    MEMBER(int, u.par.index),
    MEMBER(int, u.par.loc),
    MEMBER(struct Expression *, u.par.baseaddr),
    MEMBER(struct Statement *, u.par.next),
};

struct Member statPop[] = {
    MEMBER_SPECIAL(DATATYPE, Datatype, u.pop.dtype),
    MEMBER(unsigned char, u.pop.unk15),
    MEMBER(unsigned char, u.pop.unk16),
};

struct Member statTrap[] = {
    MEMBER(struct Expression *, u.trap.expr2),
    MEMBER(int, u.trap.unk18),
    MEMBER(int, u.trap.unk1C),
    MEMBER(int, u.trap.unk20),
    MEMBER(int, u.trap.unk24),
    MEMBER(int, u.trap.unk28),
    MEMBER_SPECIAL(DATATYPE, Datatype, u.trap.dtype),
    MEMBER(int, u.trap.num),
};

struct Member statXjp[] = {
    MEMBER_SPECIAL(DATATYPE, Datatype, u.xjp.dtype),
    MEMBER(int, u.xjp.cases_blockno),
    MEMBER(int, u.xjp.default_blockno),
    MEMBER(struct Statement *, u.xjp.case_stmts),
    MEMBER(int, u.xjp.lbound_h),
    MEMBER(int, u.xjp.lbound_l),
    MEMBER(int, u.xjp.hbound_h),
    MEMBER(int, u.xjp.hbound_l),
};

struct Member statJp[] = {
    MEMBER(int, u.jp.target_blockno),
    MEMBER(int, u.jp.unk18),
    MEMBER(int, u.jp.incre),
    MEMBER(struct Expression *, u.jp.iter_initial_value),
    MEMBER(bool, u.jp.unk24),
    MEMBER(bool, u.jp.loop_if_true),
    MEMBER(bool, u.jp.unk26),
    MEMBER(bool, u.jp.has_const_init),
    MEMBER(int, u.jp.unk28),
    MEMBER(int, u.jp.unk2C),
    MEMBER(int, u.jp.unk30),
};

struct Member statCall[] = {
    MEMBER(struct Proc *, u.call.proc),
    MEMBER_SPECIAL(DATATYPE, Datatype, u.call.returntype),
    MEMBER(unsigned char, u.call.level),
    MEMBER(unsigned short, u.call.extrnal_flags),
    MEMBER(unsigned char, u.call.pop),
    MEMBER(unsigned char, u.call.push_flags),
    MEMBER(int, u.call.unk20),
    MEMBER(struct Statement *, u.call.parameters),
};

struct Member statCia[] = {
    MEMBER(int, u.cia.strp_pos),
    MEMBER(unsigned char, u.cia.flags),
    MEMBER_SPECIAL(DATATYPE, Datatype, u.cia.returntype),
    MEMBER(int, u.cia.unk1C),
    MEMBER(int, u.cia.unk20),
    MEMBER(int, u.cia.len),
    MEMBER(struct Statement *, u.cia.parameters),
};

struct Member statAent[] = {
    MEMBER_SPECIAL(DATATYPE, Datatype, u.aent.returntype),
    MEMBER(unsigned char, u.aent.pop),
    MEMBER(unsigned char, u.aent.push),
    MEMBER(unsigned char, u.aent.extrnal_flags),
    MEMBER(int, u.aent.blockno),
    MEMBER(int, u.aent.unk1C),
};

bool condStatStore(void *_stat) {
    struct Statement *stat = _stat;
    return (stat->opc == Uisst || stat->opc == Ustr ||
            stat->opc == Uistr || stat->opc == Uistv ||
            stat->opc == Uirsv || stat->opc == Uirst ||
            stat->opc == Umov || stat->opc == Umovv ||
            stat->opc == Upmov);
}
bool condStatLabel(void *_stat) {
    struct Statement *stat = _stat;
    return (stat->opc == Ulab || stat->opc == Uclab);
}
bool condStatLbgn(void *stat) { return (((struct Statement *)stat)->opc == Ulbgn); }
bool condStatBgnbEndb(void *_stat) {
    struct Statement *stat = _stat;
    return (stat->opc == Ubgnb || stat->opc == Uendb);
}
bool condStatLbdy(void *stat) { return (((struct Statement*)stat)->opc == Ulbdy); }
bool condStatLoc(void *stat) { return (((struct Statement*)stat)->opc == Uloc); }
bool condStatNop(void *stat) { return (((struct Statement*)stat)->opc == Unop); }
bool condStatClbdCubdStep(void *_stat) {
    struct Statement *stat = _stat;
    return (stat->opc == Uclbd || stat->opc == Ucubd || stat->opc == Ustep);
}
bool condStatCtrl(void *stat) { return (((struct Statement*)stat)->opc == Uctrl); }
bool condStatMst(void *stat) { return (((struct Statement*)stat)->opc == Umst); }
bool condStatChkt(void *stat) { return (((struct Statement*)stat)->opc == Uchkt); }
bool condStatDef(void *stat) { return (((struct Statement*)stat)->opc == Udef); }
bool condStatPar(void *stat) { return (((struct Statement*)stat)->opc == Upar || ((struct Statement*)stat)->opc == Uxpar); }
bool condStatPop(void *stat) { return (((struct Statement*)stat)->opc == Upop); }
bool condStatTrap(void *_stat) {
    struct Statement *stat = _stat;
    return (stat->opc == Utpeq ||
            stat->opc == Utpge ||
            stat->opc == Utpgt ||
            stat->opc == Utple ||
            stat->opc == Utplt ||
            stat->opc == Utpne);
}
bool condStatXjp(void *stat) { return (((struct Statement*)stat)->opc == Uxjp); }
bool condStatJp(void *_stat) {
    struct Statement *stat = _stat;
    return (stat->opc == Uujp || stat->opc == Utjp || stat->opc == Ufjp);
}
bool condStatCall(void *_stat) {
    struct Statement *stat = _stat;
    return (stat->opc == Ucup || stat->opc == Uicuf || stat->opc == Urcuf);
}
bool condStatCia(void *stat) { return (((struct Statement*)stat)->opc == Ucia); }
bool condStatAent(void *stat) { return (((struct Statement*)stat)->opc == Uaent); }


struct Member statementMembers[] = {
    MEMBER_SPECIAL(OPCODE, Uopcode, opc),
    MEMBER(bool, is_increment),
    MEMBER(bool, suppressed_iv),
    MEMBER(bool, outpar),
    MEMBER(struct Expression *, expr),
    MEMBER(struct Statement *, next),
    MEMBER(struct Statement *, prev),
    MEMBER(struct Graphnode *, graphnode),

        MEMBER_UNION(u.store, statStore, condStatStore),
        MEMBER_UNION(u.label, statLabel, condStatLabel),
        MEMBER_UNION(u.lbgn, statLbgn, condStatLbgn),
        MEMBER_UNION(u.bgnb, statBgnbEndb, condStatBgnbEndb),
        MEMBER_UNION(u.lbdy, statLbdy, condStatLbdy),
        MEMBER_UNION(u.loc, statLoc, condStatLoc),
        MEMBER_UNION(u.nop, statNop, condStatNop),
        MEMBER_UNION(u.clbd_cubd_step, statClbdCubdStep, condStatClbdCubdStep),
        MEMBER_UNION(u.ctrl, statCtrl, condStatCtrl),
        MEMBER_UNION(u.mst, statMst, condStatMst),
        MEMBER_UNION(u.chkt, statChkt, condStatChkt),
        MEMBER_UNION(u.def, statDef, condStatDef),
        MEMBER_UNION(u.par, statPar, condStatPar),
        MEMBER_UNION(u.pop, statPop, condStatPop),
        MEMBER_UNION(u.trap, statTrap, condStatTrap),
        MEMBER_UNION(u.xjp, statXjp, condStatXjp),
        MEMBER_UNION(u.jp, statJp, condStatJp),
        MEMBER_UNION(u.call, statCall, condStatCall),
        MEMBER_UNION(u.cia, statCia, condStatCia),
        MEMBER_UNION(u.aent, statAent, condStatAent),
};
#undef PARENT_TYPE

#define PARENT_TYPE struct Graphnode
struct Member graphnodeMembers[] = {
    MEMBER(int, blockno),
    MEMBER(bool, interprocedural_controlflow),
    MEMBER(unsigned char, unk5),
    MEMBER(bool, terminal),
    MEMBER(unsigned char, unk7),
    MEMBER(unsigned short, num),
    MEMBER(unsigned char, loopdepth),
    MEMBER_BITFIELD(unsigned char, unkBb8, loopdepth, 0, 1),
    MEMBER_BITFIELD(unsigned char, unkBb4, loopdepth, 1, 1),
    MEMBER(struct Graphnode *, next),
    MEMBER(struct Graphnode *, prev),
    MEMBER_LIST(struct GraphnodeList *, predecessors, struct GraphnodeList, next),
    MEMBER_LIST(struct GraphnodeList *, successors, struct GraphnodeList, next),
    MEMBER(struct Statement *, stat_head),
    MEMBER(struct Statement *, stat_tail),
    MEMBER(struct VarAccessList *, varlisthead),
    MEMBER(struct VarAccessList *, varlisttail),
    MEMBER(unsigned int, frequency),
    MEMBER_LIST(struct LiveUnit *, liveunit, struct LiveUnit, next_in_block),
    MEMBER_SPECIAL_ARRAY(REGSET64, int[2][2], regsused[0]),
    MEMBER_SPECIAL_ARRAY(REGSET64, int[2][2], regsused[1]),
    /*
    struct RegisterData {
        struct IChain *unk44[35];
    } regdata;
     */
    MEMBER_SPECIAL_ARRAY(REGBOOLARRAY, unsigned char, unkD0),
    MEMBER_SPECIAL_ARRAY(REGBOOLARRAY, unsigned char, unkD5),
    MEMBER_SPECIAL_ARRAY(REGBOOLARRAY, unsigned char, unkDA),
    //MEMBER(struct RegisterNode *, unkE0),
    //MEMBER(struct RegisterNode *, unkE4),
    //MEMBER(struct Loop *, loop),
    //MEMBER(struct JumpFallthroughBB *, fallthrough_bbs),
    //MEMBER(struct JumpFallthroughBB *, jump_bbs),

    MEMBER(struct BitVector, indiracc),
    MEMBER(struct BitVector, hoistedexp),
    //union {
    /*
        struct {
            int unk104[(0x134 - 0x104) / 4];
            int line; // 0x134
        } init;
         */
        //struct {
            MEMBER(struct BitVector, bvs.stage1.antlocs),
            MEMBER(struct BitVector, bvs.stage1.alters),
            MEMBER(struct BitVector, bvs.stage1.avlocs),
            MEMBER(struct BitVector, bvs.stage1.absalters),
            //union {
                //struct {
                    MEMBER(struct BitVector, bvs.stage1.u.precm.pavlocs),
                    MEMBER(struct BitVector, bvs.stage1.u.precm.expoccur),
                    //MEMBER(struct BitVector, bvs.stage1.u.precm.unk134),
                    //MEMBER(struct BitVector, bvs.stage1.u.precm.unk13C),
                    MEMBER(struct BitVector, bvs.stage1.u.precm.avin),
                    MEMBER(struct BitVector, bvs.stage1.u.precm.avout),
                    MEMBER(struct BitVector, bvs.stage1.u.precm.antin),
                    MEMBER(struct BitVector, bvs.stage1.u.precm.antout),
                    MEMBER(struct BitVector, bvs.stage1.u.precm.pavin),
                    MEMBER(struct BitVector, bvs.stage1.u.precm.pavout),
                //} precm;
                //struct {
                    MEMBER(struct BitVector, bvs.stage1.u.cm.delete),
                    MEMBER(struct BitVector, bvs.stage1.u.cm.ppin),
                    MEMBER(struct BitVector, bvs.stage1.u.cm.iv),
                    MEMBER(struct BitVector, bvs.stage1.u.cm.cand),
                    MEMBER(struct BitVector, bvs.stage1.u.cm.subdelete),
                    MEMBER(struct BitVector, bvs.stage1.u.cm.subinsert),
                    MEMBER(struct BitVector, bvs.stage1.u.cm.antin),
                    MEMBER(struct BitVector, bvs.stage1.u.cm.antout),
                    MEMBER(struct BitVector, bvs.stage1.u.cm.insert),
                    MEMBER(struct BitVector, bvs.stage1.u.cm.ppout),
                //} cm;
                //struct {
                    //MEMBER(struct BitVector, bvs.stage1.u.scm.unk124),
                    //MEMBER(struct BitVector, bvs.stage1.u.scm.unk12C),
                    MEMBER(struct BitVector, bvs.stage1.u.scm.sink),
                    //MEMBER(struct BitVector, bvs.stage1.u.scm.unk13C),
                    //MEMBER(struct BitVector, bvs.stage1.u.scm.unk144),
                    //MEMBER(struct BitVector, bvs.stage1.u.scm.unk14C),
                    MEMBER(struct BitVector, bvs.stage1.u.scm.source),
                    MEMBER(struct BitVector, bvs.stage1.u.scm.region),
                    //MEMBER(struct BitVector, bvs.stage1.u.scm.unk164),
                    //MEMBER(struct BitVector, bvs.stage1.u.scm.unk16C),
                //} scm;
            //} u;
        //} stage1;
        //struct {
            MEMBER(struct BitVector, bvs.stage2.appear),
            MEMBER(struct BitVector, bvs.stage2.locdef),
            MEMBER(struct BitVector, bvs.stage2.loclive),
            MEMBER(struct BitVector, bvs.stage2.unk11C),
            //MEMBER(struct BitVector, bvs.stage2.unk124),
            MEMBER(struct BitVector, bvs.stage2.ppin),
            MEMBER(struct BitVector, bvs.stage2.active),
            //MEMBER(struct BitVector, bvs.stage2.unk13C),
            MEMBER(struct BitVector, bvs.stage2.liveout),
            //MEMBER(struct BitVector, bvs.stage2.unk14C),
            //MEMBER(struct BitVector, bvs.stage2.unk154),
            //MEMBER(struct BitVector, bvs.stage2.unk15C),
            //MEMBER(struct BitVector, bvs.stage2.unk164),
            MEMBER(struct BitVector, bvs.stage2.unk16C),
        //} stage2;
        /*
        struct {
            int app; // 0x104
            int av; // 0x108
            int ant; // 0x10C
            int eeantin; // 0x110
            int eeantout; // 0x114
            int unk118;
            int strinsertin; // 0x11C
            int lodinsertout; // 0x120
            int unk124;
            int eeavin; // 0x128
            int unk12C;
            int eeavout; // 0x130
            int unk134[(0x174 - 0x134) / 4];
        } stage3;
         */
    //} bvs;
};
#undef PARENT_TYPE

#define PARENT_TYPE struct StrengthReductionCand
struct Member strengthReductionCandMembers[] = {
    MEMBER(struct IChain *, target),
    MEMBER(struct StrengthReductionCand *, next),
    MEMBER(int,  increment),
    MEMBER(int,  iv_factor),
    MEMBER(struct IChain *, multiplier),
    MEMBER(int, mult_factor),
    MEMBER(int, unk18),
};
#undef PARENT_TYPE

#define STRUCT_DATA_DEF(type_id, structname, members_array) \
    [type_id] =                                             \
(struct StructData)                                         \
{                                                           \
    .type = type_id,                                        \
    .structName = #structname,                              \
    .numMembers = ARRAYLEN(members_array),                  \
    .members = members_array,                               \
}

struct StructData gStructData[TYPE_ID_MAX] = {
    STRUCT_DATA_DEF(LIVERANGE, struct LiveRange, liveRangeMembers),
    STRUCT_DATA_DEF(LIVEUNIT, struct LiveUnit, liveUnitMembers),
    STRUCT_DATA_DEF(STATEMENT, struct Statement, statementMembers),
    STRUCT_DATA_DEF(EXPRESSION, struct Expression, expressionMembers),
    STRUCT_DATA_DEF(ICHAIN, struct IChain, ichainMembers),
    STRUCT_DATA_DEF(GRAPHNODE, struct Graphnode, graphnodeMembers),
    STRUCT_DATA_DEF(INTERFERELIST, struct InterfereList, interfereListMembers),
    STRUCT_DATA_DEF(STRENGTH_REDUCTION, struct StrengthReductionCand, strengthReductionCandMembers),
};

#endif
