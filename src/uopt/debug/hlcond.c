#ifndef __mips
#include <ncurses.h>

#include "uopt/uoptdata.h"
#include "uopt/uoptutil.h"
#include "uopt/uoptreg2.h"
#include "uopt/uoptkill.h"
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>

#include "debug.h"

/* Condition functions for highlighting
 *
 * TODO: More general
 */

bool expr_in_bvect(struct Expression *expr, struct BitVector *bv)
{
    if (expr->ichain != NULL && expr->ichain->bitpos > 0 && expr->ichain->bitpos < bitposcount)
    {
        return bvectin0(expr->ichain->bitpos, bv);
    }
    /*
    switch (expr->type) {
        case isop:
            return bvectin0(expr->ichain->bitpos, bv);

        case isvar:
            return bvectin0(expr->ichain->bitpos, bv);

        case isilda:
        case issvar:
            // warn about pascal
        case islda:
        case isconst:
        case isrconst:
        default:
            break;
    }
     */

    return false;
}

bool stat_in_bvect(struct Statement *stat, struct BitVector *bv)
{
    switch (stat->opc) {
        case Uisst:
        case  Ustr:
        case Uchkt:
        case Uistr:
        case Uistv:
        case  Umov:
        case Umovv:
        case Utpeq:
        case Utpge:
        case Utpgt:
        case Utple:
        case Utplt:
        case Utpne:
        case Uirst:
        case Uirsv:
            if (stat->u.store.ichain != NULL) {
                return bvectin0(stat->u.store.ichain->bitpos, bv);
            }
            break;

        default:
            break;
    }
    return false;
}

bool sr_ichain_equals(struct StringRep *sr, void *ichain)
{
    switch (sr->type) {
        case STATEMENT:
            switch (sr->stat->opc) {
                case Uisst:
                case  Ustr:
                case Uchkt:
                case Uistr:
                case Uistv:
                case  Umov:
                case Umovv:
                case Utpeq:
                case Utpge:
                case Utpgt:
                case Utple:
                case Utplt:
                case Utpne:
                case Uirst:
                case Uirsv:
                    if (sr->stat->u.store.ichain != NULL) {
                        return sr->stat->u.store.ichain == ichain;
                    }
                    break;

                default:
                    break;
            }
            return false;

        case EXPRESSION:
            return sr->expr->ichain == ichain;

        case ICHAIN:
            return sr->ichain == ichain;

        default:
            return false;
    }
}

bool sr_expr_equals(struct StringRep *sr, void *expr)
{
    switch (sr->type) {
        case EXPRESSION:
            return sr->expr == expr;

        default:
            return false;
    }
}

bool sr_stat_equals(struct StringRep *sr, void *stat)
{
    switch (sr->type) {
        case STATEMENT:
            return sr->stat == stat;
        case ICHAIN:
            return sr->ichain->type == isop && sr->ichain->isop.stat == stat;

        default:
            return false;
    }
}

bool sr_data_equals(struct StringRep *sr, void *data)
{
    return sr->data == data;
}

bool sr_in_bv(struct StringRep *sr, void *bv)
{
    switch (sr->type) {
        case STATEMENT:  return stat_in_bvect(sr->stat, bv);
        case EXPRESSION: return expr_in_bvect(sr->expr, bv);
        case ICHAIN:     return bvectin0(sr->ichain->bitpos, bv);
        default: return false;
    }
}

bool sr_bv_notempty(struct StringRep *sr, void *bv)
{
    //typeof(((struct Graphnode){}).bvs.stage1.absalters) *a;
    switch (sr->type) {
        case LIVERANGE:
            if (sr == NULL) return false;
            // TODO add macro, use memberdata.c
            return !bvectempty((struct BitVector*)(((char*)sr->liverange) + *(int*)bv));

        default:
            return false;
    }
}

bool sr_lr_contig(struct StringRep *sr, void *bv)
{
    switch (sr->type) {
        case LIVERANGE:
            if (sr == NULL) return false;
            return contiguous(sr->liverange);

        default:
            return false;
    }
}

bool sr_in_node(struct StringRep *sr, void *node)
{
    switch (sr->type) {
        case STATEMENT:
            return sr->stat->graphnode == node;

        default:
            return false;
    }
}

bool sr_stat_unk2(struct StringRep *sr, void *node)
{
    switch (sr->type) {
        case STATEMENT:
            return sr->stat->suppressed_iv == 1;

        default:
            return false;
    }
}

bool sr_stat_node_in_bv(struct StringRep *sr, void *bv)
{
    switch (sr->type) {
        case STATEMENT:
            return bvectin0(sr->stat->graphnode->num, bv);

        default:
            return false;
    }
}

bool sr_stat_node_terminal(struct StringRep *sr, void *bv)
{
    switch (sr->type) {
        case STATEMENT:
            return sr->stat->graphnode->terminal;

        default:
            return false;
    }
}

bool ichain_temploc(struct IChain *ichain, struct Temploc *temp) {
    switch (ichain->type) {
        case isvar:
        case issvar:
            if (ichain->isvar_issvar.temploc == temp) {
                return true;
            }
            break;

        case islda:
        case isilda:
            if (ichain->islda_isilda.temploc == temp) {
                return true;
            }
            break;

        case isop:
            if (ichain->isop.temploc == temp) {
                return true;
            }
            break;

        default:
            break;
    }
    return false;
}

bool expr_temploc(struct Expression *expr, struct Temploc *temp) {
    switch (expr->type) {
        case isvar:
        case issvar:
            if (expr->data.isvar_issvar.temploc == temp) {
                return true;
            }
            break;

        case islda:
        case isilda:
            if (expr->data.islda_isilda.temploc == temp) {
                return true;
            }
            break;

        case isop:
            if (expr->data.isop.temploc == temp) {
                return true;
            }
            break;

        default:
            break;
    }
    return false;
}

bool sr_has_temploc(struct StringRep *sr, void *temp)
{
    switch (sr->type) {
        case EXPRESSION:
            if (expr_temploc(sr->expr, temp)) return true;
            //if (sr->expr->ichain != NULL && ichain_temploc(sr->expr->ichain, temp)) return true;
            break;

        case ICHAIN:
            if (ichain_temploc(sr->ichain, temp)) return true;
            break;

        case STATEMENT:
            break;

        default:
            break;
    }
    return false;
}

bool expr_var(struct Expression *expr, struct VariableLocation loc)
{
    if (expr->type == isvar || expr->type == issvar) {
        if (addreq(expr->data.isvar_issvar.location, loc))
        {
            return true;
        }
    } else if (expr->type == islda) {
        if (addreq(expr->data.islda_isilda.address, loc)) {
            return true;
        }
    }
    return false;
}

bool ichain_var(struct IChain *ichain, struct VariableLocation loc)
{
    if (ichain->type == isvar || ichain->type == issvar) {
        if (addreq(ichain->isvar_issvar.location, loc))
        {
            return true;
        }
    } else if (ichain->type == islda) {
        if (addreq(ichain->islda_isilda.address, loc)) {
            return true;
        }
    }
    return false;
}

bool sr_has_variable(struct StringRep *sr, void *var)
{
    struct VariableLocation loc = *(struct VariableLocation *)var;
    switch (sr->type) {
        case EXPRESSION:
            if (expr_var(sr->expr, loc)) return true;
            if (sr->expr->ichain != NULL && ichain_var(sr->expr->ichain, loc)) return true;
            break;

        case ICHAIN:
            if (ichain_var(sr->ichain, loc)) return true;
            break;

        case STATEMENT:
            break;

        default:
            break;
    }
    return false;
}

int sr_get_register(struct StringRep *sr)
{
    switch (sr->type) {
        case REGISTER:
            return sr->reg;

        case EXPRESSION:
            if (sr->expr->type == isvar && sr->expr->data.isvar_issvar.location.memtype == Rmt) {
                return sr->expr->data.isvar_issvar.location.addr;
            }
            break;

        case ICHAIN:
            if (sr->ichain->type == isvar && sr->ichain->isvar_issvar.location.memtype == Rmt) {
                return sr->ichain->isvar_issvar.location.addr;
            }
            break;

        default:
            break;
    }

    return -1;
}

bool sr_is_register(struct StringRep *sr, void *unused)
{
    switch (sr->type) {
        case REGISTER:
            return true;

        case EXPRESSION:
            if (sr->expr->type == isvar && sr->expr->data.isvar_issvar.location.memtype == Rmt) {
                return true;
            }
            break;

        case ICHAIN:
            if (sr->ichain->type == isvar && sr->ichain->isvar_issvar.location.memtype == Rmt) {
                return true;
            }
            break;

        default:
            break;
    }
    return false;
}

int sr_register_color(struct StringRep *sr)
{
    return nc_reg_color(sr_get_register(sr));
}

/* Basic highlighting to set some text apart from the rest */

bool sr_ucode_stat_highlight(struct StringRep *sr, void *unused)
{
    return sr->type == STATEMENT;
}

bool sr_general_highlight(struct StringRep *sr, void *unused)
{
    return sr->type == FIELDNAME || sr->type == INFO || sr->type == GRAPHNODE;
}

int sr_general_highlight_color(struct StringRep *sr)
{
    switch (sr->type) {
        case GRAPHNODE: return COLOR_BLUE;
        case INFO: return COLOR_GRAY13;
        case FIELDNAME: return COLOR_GRAY13;

        default: return 0;
    }
}

int sr_store_bool_color(struct StringRep *sr)
{
    // rainbow, 8 dark, then 8 pastel
    static int colors[] = {
        196, 202, 226, 46, 51, 21, 129, 201,
        203, 221, 230, 156, 195, 219, 177,
    };
    int index = (sr->stat->u.store.unk1C << 3) | (sr->stat->u.store.unk1D << 2) |
                (sr->stat->u.store.unk1E << 1) | (sr->stat->u.store.unk1F << 0);

    return colors[index];
}

bool sr_is_store(struct StringRep *sr, void *unused)
{
    if (sr->type != STATEMENT) return false;

    struct Statement *stat = sr->stat;
    return (stat->opc == Uisst || stat->opc == Ustr ||
            stat->opc == Uistr || stat->opc == Uistv ||
            stat->opc == Uirsv || stat->opc == Uirst ||
            stat->opc == Umov || stat->opc == Umovv ||
            stat->opc == Upmov);
}

// paint different parts of the string in different colors
// each child on the same level has the same color
void sr_highlight_children(struct Tile *tile, int line, struct StringRep *sr, int depth)
{
    // blue, green, yellow, red, white, red, blue
    static int colors[] = {
        21, 26, 31, 36, 41, 46,
        82, 118, 154, 190, 226,
        220, 214, 208, 202, 196,
        203, 210, 217, 224, 231,
        195, 159, 123, 87, 51,
        45, 39, 33, 27, 21,
        //83, 120, 157, 194, 231,
        //224, 217, 210, 203, 196,
        //161, 126, 91, 56, 21,
    };
    static int curColor = 0;

    tile_highlight_sr(tile, line, sr, colors[curColor % ARRAYLEN(colors)]);

    // if negative depth is passed, go to max depth
    if (depth == 0) {
        for (int i = 0; i < sr->children->length; i++) {
            tile_highlight_sr(tile, line, sr->children->items[i], COLOR_GRAY13);

        }

        return;
    }

    curColor++;
    for (int i = 0; i < sr->children->length; i++) {
        sr_highlight_children(tile, line, sr->children->items[i], depth - 1);
    }
    curColor--;

#if 0 // old palette
    static int curColor = 1;

    tile_highlight_sr(tile, line, sr, curColor);

    // if negative depth is passed, go to max depth
    if (depth == 0) return;

    curColor++;
    if (curColor == 7) curColor = 9;
    if (curColor == 15) curColor = 1;
    for (int i = 0; i < sr->children->length; i++) {
        sr_highlight_children(tile, line, sr->children->items[i], depth - 1);
    }
    if (curColor == 1) curColor = 15;
    if (curColor == 9) curColor = 7;
    curColor--;
#endif
}

void tile_highlight_line_parts(struct Tile *tile, int depth)
{
    sr_highlight_children(tile, tile->cursRow, CURSOR_LINE(tile)->top, depth);
    tile_wmove_to_cursor(tile);
}

struct Graphnode *get_closest_node(struct LineBuffer buf, int line)
{
    if (line < 0 || line >= buf.numLines) return NULL;

    for (int i = line; i >= 0; i--) {
        if (buf.lines->items[i]->top->type == GRAPHNODE) {
            return buf.lines->items[i]->top->node;
        }
    }

    return NULL;
}

#endif
