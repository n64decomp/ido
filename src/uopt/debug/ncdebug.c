#ifndef __mips
#include <ncurses.h>

#include "libu/libu.h"
#include "uoptdata.h"
#include "uoptutil.h"
#include "uoptreg2.h"
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>

#include "debug.h"

// approximations of the RGB colors because nc is special -_-
const int reg_nc_colors[] = {
    // temp registers
    [r_zero ... r_f31] = 51,

    // constant registers
    [r_zero ... r_at] = 217,

    // Return registers
    [r_v0] = 227,
    [r_ra] = 227,
    [r_f0 ... r_f1] = 227,

    // saved registers
    [r_s0  ... r_s7]  = 204,
    [r_f20 ... r_f31] = 207,

    // float registers
    [r_f2 ... r_f19] = 105,

    // arg registers
    [r_a0  ... r_a3]  = 83,
    [r_f12 ... r_f15] = 83,

    // stack registers
    [r_sp] = 38,
    [r_fp] = 38,

    // special-purpose registers
    [r_k0 ... r_k1] = 214,
    [r_gp]          = 214,
};

static inline int nc_reg_color(int reg)
{
    if (reg < 0 || reg > sizeof(reg_nc_colors) / sizeof (reg_nc_colors[0])) return 0;

    return reg_nc_colors[reg];
}

struct Highlighter {
    const char *name;
    bool (*shouldHighlight)(struct StringRep *sr, void *arg); // should always be this->arg
    int (*getColorPair)(struct StringRep *sr);
    void *arg; // points to whatever is needed by shouldHighlight
    int defaultColorPair;
    bool shallow; // don't recurse to children when highlighting
};

struct Tile {
    WINDOW *win;
    WINDOW *titleWin;
    bool hasBorder;

    struct Container *container;

    // displayed data
    struct LineBuffer buf;

    // Highlighting
    int numHighlighters;
    int highlighterCap;
    struct Highlighter **highlighters;

    // window dimensions (note the order is y,x to match with ncurses's absurdity).
    int wy, wx;
    int wrows, wcols;

    // viewport top-left position
    int viewRow, viewCol;
    int cursRow, cursCol;

    void (*input)(struct Tile *tile, int c);
    void *draw;
};

enum ContainerType {
    CONTAINER_LEAF, // has a window
    CONTAINER_SPLIT_VERTICAL,
    CONTAINER_SPLIT_HORIZONTAL,
};

struct Container {
    enum ContainerType type;

    int height, width;

    struct Container *parent; // NULL if root
    struct Container *child; // NULL if leaf
    struct Container *next;
    struct Container *prev;

    struct Tile *tile; // non-NULL if leaf
};

struct Input {
    struct Tile *curTile;
    struct Tile *prevTile;
    int direction;
    bool changingTiles;
    bool quit;

    int selectionDepth;
    struct StringRep *selectedStringRep;
};

static struct Input sInput;

static struct Container *rootContainer;

// there's always a tile that shows the procedure
static struct Tile *procTile;

static struct Tile *prevProcTile;

// instead of allocating ncurses windows for every border, reuse one border. TODO: can I just use vline?
static WINDOW *sBorder;

struct TileCreation {
    char *name;
    void (*build_function)(struct Tile *tile);
    void (*input)(struct Tile *tile, int c);
};

struct DisplayLine *dl_menu(int line, struct TileCreation *entry) {
    struct DisplayLine *dl = dl_new();
    struct StringRep *sr = sr_new(line);
    sr->type = MENU;
    sr->menuEntry = entry;
    sr->start = dl->pos;

    dl_printf(dl, entry->name);

    sr->len = dl->pos - sr->start;
    dl->top = sr;
    dl->len = sr->len;
    return dl;
}

// set row without wmove
void cursor_updaterow(struct Tile *tile, int row)
{
    tile->cursRow = row;
    if (tile->cursRow < tile->viewRow) {
        tile->viewRow = MAX(row, 0); 
        tile->cursRow = tile->viewRow;
    } else if (tile->cursRow >= MIN(tile->viewRow + tile->wrows, tile->buf.numLines)) {
        tile->viewRow = MAX(MIN(row, tile->buf.numLines - 1) - (tile->wrows - 1), 0); 
        tile->cursRow = MIN(row, tile->buf.numLines - 1);
    }
}

// set column without wmove
void cursor_updatecol(struct Tile *tile, int col)
{
    tile->cursCol = col;
    if (tile->cursCol < tile->viewCol) {
        tile->viewCol = MAX(col, 0); 
        tile->cursCol = tile->viewCol;
    } else if (tile->cursCol >= MIN(tile->viewCol + tile->wcols, tile->buf.lines[tile->cursRow]->len)) {
        tile->viewCol = MAX(MIN(col, tile->buf.lines[tile->cursRow]->len - 1) - (tile->wcols - 1), 0); 
        tile->cursCol = MIN(col, tile->buf.lines[tile->cursRow]->len - 1);
    }
}

void cursor_setrow(struct Tile *tile, int row)
{
    cursor_updaterow(tile, row);
    wmove(tile->win, tile->cursRow, tile->cursCol);
}

void cursor_setcol(struct Tile *tile, int col)
{
    cursor_updatecol(tile, col);
    wmove(tile->win, tile->cursRow, tile->cursCol);
}

void cursor_absmove(struct Tile *tile, int y, int x)
{
    cursor_updaterow(tile, y);
    cursor_updatecol(tile, x);
    wmove(tile->win, tile->cursRow, tile->cursCol);
}

void cursor_move(struct Tile *tile, int dy, int dx)
{
    cursor_absmove(tile, tile->cursRow + dy, tile->cursCol + dx);
}

void tile_setdims(struct Tile *tile, int y, int x, int rows, int cols)
{
    tile->wy = y;
    tile->wx = x;
    tile->wrows = rows - 1;
    tile->wcols = cols;
}

struct Tile *tile_new()
{
    struct Tile *tile = calloc(1, sizeof(struct Tile));
    tile->highlighters = calloc(10, sizeof(struct Highligther *));
    tile->highlighterCap = 10;

    return tile;
}

static inline void tile_wmove_to_cursor(struct Tile *tile)
{
    wmove(tile->win, tile->cursRow, tile->cursCol);
}

void sr_highlight(struct Tile *tile, struct StringRep *sr, struct Highlighter *hl);
void tile_redraw(struct Tile *tile)
{
    for (int line = 0; line < tile->buf.numLines; line++) {
        if (tile->buf.lines[line]->top->type == GRAPHNODE) {
            mvwchgat(tile->win, line, 0, -1, 0, COLOR_BLUE, NULL);
        } else {
            mvwchgat(tile->win, line, 0, -1, 0, 0, NULL);
        }
        for (int h = 0; h < tile->numHighlighters; h++) {
            sr_highlight(tile, tile->buf.lines[line]->top, tile->highlighters[h]);
        }
    }
    tile_wmove_to_cursor(tile);
}

void tile_create_window(struct Tile *tile)
{
    int mw = 0;
    for (int i = 0; i < tile->buf.numLines; i++) {
        if (mw < tile->buf.lines[i]->len) {
            mw = tile->buf.lines[i]->len;
        }
    }
    tile->buf.maxWidth = mw;

    // TODO: reorganize nc pad creation. (and use wresize?)
    // if pad fills all available space, then there won't be artifacts from splitting and resizing tiles
    tile->win = newpad(MAX(LINES, tile->buf.numLines), MAX(COLS, tile->buf.maxWidth));
    intrflush(tile->win, false);
    keypad(tile->win, true);

    // print lines
    for (int line = 0; line < tile->buf.numLines; line++) {
        mvwaddnstr(tile->win, line, 0, tile->buf.lines[line]->s, tile->buf.lines[line]->len);
    }
}

void tile_set_title(struct Tile *tile, char *title, int len)
{
    tile->titleWin = newpad(1, COLS);
    wcolor_set(tile->titleWin, BG(COLOR_GRAY17), NULL);
    whline(tile->titleWin, ' ', COLS);
    waddnstr(tile->titleWin, title, len);
}

void tile_add_default_highlighters(struct Tile *tile);
void build_proc_tile(struct Tile *tile)
{
    tile->buf = build_proc_buffer();
    tile_create_window(tile);
    tile_set_title(tile, entnam0, entnam0len);
    tile_add_default_highlighters(tile);
}

void build_ichain_tile(struct Tile *tile)
{
    tile->buf = build_ichain_buffer();
    tile_create_window(tile);
    char *title = "IChains";
    tile_set_title(tile, title, strlen(title));
    tile_add_default_highlighters(tile);
}

void build_var_access_tile(struct Tile *tile)
{
    tile->buf = build_var_access_buffer();
    tile_create_window(tile);
    char *title = "Var Accesses";
    tile_set_title(tile, title, strlen(title));
    tile_add_default_highlighters(tile);
}

void build_liverange_tile(struct Tile *tile)
{
    tile->buf = build_liverange_buffer();
    tile_create_window(tile);
    char *title = "Regalloc - Live Ranges";
    tile_set_title(tile, title, strlen(title));
    tile_add_default_highlighters(tile);
}

void proc_tile_input(struct Tile *tile, int c);
void ichain_tile_input(struct Tile *tile, int c);
void liverange_tile_input(struct Tile *tile, int c);
void menu_tile_input(struct Tile *tile, int c);

static struct TileCreation tileMenu[] = {
    {"Procedure", build_proc_tile, proc_tile_input},
    {"Var Accesses", build_var_access_tile, ichain_tile_input}, // XXX: using ichain_input for now
    {"IChains", build_ichain_tile, ichain_tile_input},
    {"Live Ranges", build_liverange_tile, liverange_tile_input}, 
};

void build_menu_tile(struct Tile *tile)
{
    int numLines = sizeof(tileMenu) / sizeof(tileMenu[0]);
    struct DisplayLine **lines = calloc(numLines, sizeof (struct DisplayLine));

    for (int i = 0; i < numLines; i++) {
        lines[i] = dl_menu(i, &tileMenu[i]);
    }

    tile->buf = (struct LineBuffer) {.numLines = numLines, .lines = lines};
    tile_create_window(tile);
    tile_set_title(tile, "Tiles", strlen("Tiles"));
    tile->input = menu_tile_input;
}

void tile_clear_content(struct Tile *tile)
{
    linebuffer_free(tile->buf);
    for (int i = 0; i < tile->numHighlighters; i++) {
        free(tile->highlighters[i]);
    }
    tile->numHighlighters = 0;
    delwin(tile->titleWin);
    delwin(tile->win);
}

void tile_free(struct Tile *tile)
{
    if (tile == NULL) return;
    tile_clear_content(tile);
    free(tile->highlighters);
    free(tile);
}

void tile_nc_refresh(struct Tile *tile)
{
    // TODO: error-prone coordinates
    int smaxrow = tile->wy + tile->wrows;
    int smaxcol = tile->wx + tile->wcols - 1;

    // redraw the same border window at the edge of every tile
    if (tile->hasBorder) {
        pnoutrefresh(sBorder, 0, 0, tile->wy, smaxcol + 1, smaxrow, smaxcol + 1);
    }

    pnoutrefresh(tile->titleWin, 0, 0, tile->wy, tile->wx, tile->wy, smaxcol);
    pnoutrefresh(tile->win, tile->viewRow, tile->viewCol, tile->wy + 1, tile->wx, smaxrow, smaxcol);
    doupdate();
}

/* Condition functions for highlighting
 *
 * TODO: More general
 */

bool expr_in_bvect(struct Expression *expr, struct BitVector *bv)
{
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

bool sr_in_bv(struct StringRep *sr, void *bv)
{
    switch (sr->type) {
        case STATEMENT:
            return stat_in_bvect(sr->stat, bv);

        case EXPRESSION:
            return expr_in_bvect(sr->expr, bv);

        case ICHAIN:
            return bvectin0(sr->ichain->bitpos, bv);

        default:
            return false;
    }
}

bool sr_bv_notempty(struct StringRep *sr, void *bv)
{
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

void tile_highlight_sr(struct Tile *tile, struct StringRep *sr, int colorPair)
{
    mvwchgat(tile->win, sr->line, sr->start, sr->len, 0, colorPair, NULL);
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

void sr_highlight(struct Tile *tile, struct StringRep *sr, struct Highlighter *hl)
{
    if (sr == NULL) return;
    //! sr->data being NULL should not cause a crash

    if (hl->shouldHighlight(sr, hl->arg)) {
        int colorPair = hl->defaultColorPair;
        if (hl->getColorPair != NULL) {
            colorPair = hl->getColorPair(sr);
        }
        tile_highlight_sr(tile, sr, colorPair);
        return;
    }

    if (hl->shallow) {
        return;
    }

    // now check children. Since children on the same level don't necessarily overlap, need to check every one
    for (int i = 0; i < sr->numChildren; i++) {
        sr_highlight(tile, sr->children[i], hl);
    }
}

// paint different parts of the string in different colors
// each child on the same level has the same color
void sr_highlight_children(struct Tile *tile, struct StringRep *sr, int depth)
{
    static int curColor = 1;

    tile_highlight_sr(tile, sr, curColor);

    // if negative depth is passed, go to max depth
    if (depth == 0) return;

    curColor++;
    if (curColor == 7) curColor = 9;
    if (curColor == 15) curColor = 1;
    for (int i = 0; i < sr->numChildren; i++) {
        sr_highlight_children(tile, sr->children[i], depth - 1);
    }
    if (curColor == 1) curColor = 15;
    if (curColor == 9) curColor = 7;
    curColor--;
}

void tile_show_line_children(struct Tile *tile)
{
    sr_highlight_children(tile, tile->buf.lines[tile->cursRow]->top, sInput.selectionDepth);
    sInput.selectionDepth++;
    tile_wmove_to_cursor(tile);
}

void tile_highlight_once(struct Tile *tile, struct Highlighter *hl)
{
    for (int i = 0; i < tile->buf.numLines; i++) {
        sr_highlight(tile, tile->buf.lines[i]->top, hl);
    }
    tile_wmove_to_cursor(tile);
}

struct Graphnode *get_closest_node(struct LineBuffer buf, int line)
{
    if (line < 0 || line > buf.numLines) return NULL;

    for (int i = line; i >= 0; i--) {
        if (buf.lines[i]->top->type == GRAPHNODE) {
            return buf.lines[i]->top->node;
        }
    }

    return NULL;
}

struct Highlighter *tile_find_highlighter(struct Tile *tile, struct Highlighter *hl)
{
    if (hl == NULL) {
        return NULL;
    }

    for (int i = 0; i < tile->numHighlighters; i++) {
        if (memcmp(hl, tile->highlighters[i], sizeof(struct Highlighter)) == 0) {
            return tile->highlighters[i];
        }
    }
    return NULL;
}

void tile_add_highlighter(struct Tile *tile, struct Highlighter hl)
{
    if (tile_find_highlighter(tile, &hl) == NULL) {
        if (tile->numHighlighters >= tile->highlighterCap) {
            tile->highlighters = realloc(tile->highlighters, (tile->highlighterCap + 10) * sizeof(struct Highlighter *));
            tile->highlighterCap += 10;
        }

        tile->highlighters[tile->numHighlighters] = malloc(sizeof(struct Highlighter));
        *tile->highlighters[tile->numHighlighters] = hl;
        tile->numHighlighters++;
    }
}

void tile_remove_highlighter(struct Tile *tile, int index)
{
    if (index < 0 || index >= tile->numHighlighters) return;
    free(tile->highlighters[index]);
    for (int i = index; i < tile->numHighlighters; i++) {
        tile->highlighters[i] = tile->highlighters[i + 1];
    }
    tile->numHighlighters--;
}

void tile_add_default_highlighters(struct Tile *tile)
{
    struct Highlighter highlight_registers = {
        .shouldHighlight = sr_is_register,
        .getColorPair = sr_register_color
    };
    tile_add_highlighter(tile, highlight_registers);
}

/* Container */
struct Container *container_new(struct Tile *tile)
{
    struct Container *cont = calloc(1, sizeof (struct Container));
    cont->type = CONTAINER_LEAF;
    cont->tile = tile;
    tile->container = cont;

    return cont;
}

void container_free(struct Container *cont)
{
    if (cont == NULL) return;
    tile_free(cont->tile);

    struct Container *child = cont->child;
    while (child != NULL) {
        struct Container *next = child->next;
        container_free(child);
        child = next;
    }

    free(cont);
}

void container_add_child(struct Container *parent, struct Container *child)
{
    child->next = parent->child;
    parent->child->prev = child;
    parent->child = child;
    child->parent = parent;
}

struct Tile *container_first_tile(struct Container *cont) {
    while(cont->child != NULL) {
        cont = cont->child;
    }
    return cont->tile;
}

void container_append(struct Container *restrict cont, struct Container *restrict append) {
    append->prev = cont;
    append->next = cont->next;
    cont->next = append;
    if (append->next != NULL) {
        append->next->prev = append;
    }
}

void container_unlink(struct Container *cont)
{
    if (cont->prev != NULL) {
        cont->prev->next = cont->next;
    } else {
        cont->parent->child = cont->next;
    }

    if (cont->next != NULL) {
        cont->next->prev = cont->prev;
    }
}

void container_update_height(struct Container *parent, int height, bool expandTop)
{
    switch (parent->type) {
        case CONTAINER_LEAF:
            parent->tile->wrows = height - 1; // always subtract 1 for the title bar at the top
            break;

        case CONTAINER_SPLIT_VERTICAL:
            for (struct Container *cont = parent->child; cont != NULL; cont = cont->next) {
                container_update_height(cont, height, expandTop);
            }
            break;

        case CONTAINER_SPLIT_HORIZONTAL:
            {
                struct Container *cont = parent->child;
                if (!expandTop) {
                    while (cont->next != NULL) {
                        cont = cont->next;
                    }
                }

                int diff = height - parent->height;
                if (diff > 0) {
                    container_update_height(cont, cont->height + diff, expandTop);
                } // TODO: handle shrinking
            }
            break;
    }

    parent->height = height;
}

void container_update_width(struct Container *parent, int width, bool expandLeft)
{
    switch (parent->type) {
        case CONTAINER_LEAF:
            {
                struct Tile *tile = parent->tile;
                struct Container *cont;
                for (cont = parent; cont->parent != NULL; cont = cont->parent) {
                    if (cont->parent->type == CONTAINER_SPLIT_VERTICAL && cont->next != NULL) {
                        break;
                    }
                }
                if (cont->parent == NULL) {
                    tile->hasBorder = false;
                }

                tile->wcols = width - tile->hasBorder;
            }
            break;

        case CONTAINER_SPLIT_VERTICAL:
            {
                struct Container *cont = parent->child;
                if (!expandLeft) {
                    while (cont->next != NULL) {
                        cont = cont->next;
                    }
                }

                int diff = width - parent->height;
                if (diff > 0) {
                    container_update_width(cont, cont->width + diff, expandLeft);
                } // TODO: handle shrinking
            }
            break;

        case CONTAINER_SPLIT_HORIZONTAL:
            for (struct Container *cont = parent->child; cont != NULL; cont = cont->next) {
                container_update_width(cont, width, expandLeft);
            }
            break;
    }

    parent->width = width;
}

void container_update_pos(struct Container *parent, int ymin, int xmin)
{
    if (parent->type == CONTAINER_LEAF) {
        parent->tile->wy = ymin;
        parent->tile->wx = xmin;
    } else {
        int starty = ymin;
        int startx = xmin;

        for (struct Container *cont = parent->child; cont != NULL; cont = cont->next) {
            if (parent->type == CONTAINER_SPLIT_VERTICAL) {
                ymin = starty;
            } else {
                xmin = startx;
            }

            container_update_pos(cont, ymin, xmin);
            if (cont->type == CONTAINER_LEAF) {
                ymin += cont->height;
                xmin += cont->width;
            }
        }

    }
}

void container_nc_refresh(struct Container *cont)
{
    if (cont->type == CONTAINER_LEAF) {
        tile_nc_refresh(cont->tile);
        tile_wmove_to_cursor(cont->tile);
        return;
    }

    struct Container *child = cont->child;
    while (child != NULL) {
        container_nc_refresh(child);
        child = child->next;
    }
}

void root_container_nc_refresh()
{
    container_nc_refresh(rootContainer);
}

void container_redraw(struct Container *cont)
{
    if (cont->type == CONTAINER_LEAF) {
        tile_redraw(cont->tile);
        return;
    }

    struct Container *child = cont->child;
    while (child != NULL) {
        container_redraw(child);
        child = child->next;
    }
}

void root_container_redraw()
{
    container_redraw(rootContainer);
}

#if 0
void container_set_dims(struct Container *cont) {
    if (cont->type == CONTAINER_LEAF) {
        container_set_tile_dims(cont);
        return;
    } else if (cont->type == CONTAINER_SPLIT_VERTICAL) {
        int numBorders = cont->numChildren - 1;
        int space = cont->width - numBorders;
        int baseWidth = space / cont->numChildren;
        int remSpace = space % cont->numChildren;
        for (int i = 0; i < cont->numChildren; i++) {
            int bordersBefore = i;
            int remspaceBefore = MIN(i, remSpace);
            int x = (i * baseWidth) + bordersBefore + remspaceBefore;

            int width = baseWidth + (i < remSpace);

            struct Container *child = cont->children[i];
            child->y = cont->y;
            child->x = x;
            child->width = width;
            child->height = cont->height;
            container_set_dims(cont->children[i]);

#if 0
            if (i < numBorders) {
                child->border = newwin(LINES, 1, 0, x + width);
            }
#endif
        }
    }
}
#endif

// cur container is a leaf:
//  - if parent is null, then it's root, so make new parent
//  - if parent is not null,
//     - if different type, also make new parent
//     - otherwise, use this parent
//
// else if cur container is same type, use it
// else need new parent

void tile_focus(struct Tile *nextTile)
{
    sInput.prevTile = sInput.curTile;
    sInput.curTile = nextTile;
}

void tile_split(struct Tile *tile, int direction, struct Tile *newTile)
{
    assert(direction == CONTAINER_SPLIT_VERTICAL || direction == CONTAINER_SPLIT_HORIZONTAL);

    struct Container *curContainer = tile->container;
    struct Container *parent = curContainer->parent;

    if (parent == NULL || parent->type != direction) {
        /* move tile to a leaf, and make the original container a parent with the right direction
         *
         *  [tile] <- curCont                        [ ] <- parent
         *                      -->                 /   \
         *                            curCont -> [tile]  new tile goes here
         */
        struct Container *newLeaf = malloc(sizeof (struct Container));
        *newLeaf = *curContainer;

        parent = curContainer;
        parent->type = direction;
        parent->tile = NULL;

        parent->child = newLeaf;
        newLeaf->parent = parent;
        newLeaf->next = NULL;
        newLeaf->prev = NULL;

        // `tile` now lives in the leaf
        curContainer = newLeaf;
        tile->container = newLeaf;
    }

    // default tile
    if (newTile == NULL) {
        newTile = tile_new();
        build_menu_tile(newTile);
    }

    struct Container *child = container_new(newTile);
    child->parent = parent;
    container_append(curContainer, child);

    if (direction == CONTAINER_SPLIT_VERTICAL) { // vertical split (new tile goes to the right of the old tile)
        int newCols = tile->wcols / 2;
        tile_setdims(tile, tile->wy, tile->wx, tile->wrows + 1, tile->wcols - newCols - 1); // make room for the vertical border
        tile_setdims(newTile, tile->wy, tile->wx + tile->wcols + 1, tile->wrows + 1, newCols);

        // vertical border between the tiles
        // the new tile is placed on the right side, so it inherits the old tile's border (or lack of one).
        // the old tile always needs a border
        newTile->hasBorder = tile->hasBorder;
        tile->hasBorder = true;
        
        tile->container->width = tile->wcols + tile->hasBorder;
        newTile->container->height = tile->container->height;
        newTile->container->width = newTile->wcols + newTile->hasBorder;
    } else { // horizontal split (new tile goes below the tile on the screen)
        int newRows = (tile->wrows + 1) / 2;
        tile_setdims(tile, tile->wy, tile->wx, tile->wrows + 1 - newRows, tile->wcols);
        tile_setdims(newTile, tile->wy + tile->wrows + 1, tile->wx, newRows, tile->wcols);

        // also split the border
        newTile->hasBorder = tile->hasBorder;

        tile->container->height = tile->wrows + 1;
        newTile->container->width = tile->container->width;
        newTile->container->height = newTile->wrows + 1;
    }

    tile_nc_refresh(tile);
    tile_focus(newTile);
    tile_wmove_to_cursor(newTile);
}

void tile_close(struct Tile *tile)
{
    struct Container *closed = tile->container;
    struct Container *neighbor = NULL;
    struct Container *redrawTarget;

    if (tile == procTile) return; // TODO

    if (closed->prev != NULL) {
        neighbor = closed->prev;
    } else if (closed->next != NULL) {
        neighbor = closed->next;
    } else {
        // TODO: only child, but this shouldn't happen unless the closing the last tile
        return;
    }

    container_unlink(closed);

    if (closed->parent->type == CONTAINER_SPLIT_VERTICAL) {
        container_update_width(neighbor, neighbor->width + closed->width, neighbor == closed->next);
    } else { // CONTAINER_SPLIT_HORIZONTAL
        container_update_height(neighbor, neighbor->height + closed->height, neighbor == closed->next);
    }

    // right/below expanded, they need to be moved
    if (neighbor == closed->next) {
        container_update_pos(neighbor, tile->wy, tile->wx);
    }

    redrawTarget = neighbor;

    // need to move the cursor to a valid tile
    if (tile == sInput.curTile) {
        struct Tile *nextTile = container_first_tile(neighbor);
        sInput.curTile = nextTile;
        sInput.prevTile = NULL;
    }

    // only one child left, squash it with its parent
    if (neighbor->next == NULL && neighbor->prev == NULL) {
        struct Container *parent = neighbor->parent;
        parent->type = neighbor->type;
        parent->child = neighbor->child;
        for (struct Container *cont = neighbor->child; cont != NULL; cont = cont->next) {
            cont->parent = parent;
        }

        if (neighbor->tile != NULL) {
            parent->tile = neighbor->tile;
            neighbor->tile->container = parent;
        }

        redrawTarget = parent;

        /* now merge with the container above if it has the same split direction
         *
         *    ____V____           
         *   /    |    \             ____V____   
         * [ ]    V    [ ]  --->    /   / \   \
         *       / \              [ ] [ ] [ ] [ ]
         *     [ ] [ ]                 
         */
        struct Container *grandparent = parent->parent;
        if (grandparent != NULL && parent->type == grandparent->type) {
            if (grandparent->child == parent) {
                grandparent->child = parent->child;
            }

            struct Container *child = parent->child;
            child->prev = parent->prev;
            if (child->prev != NULL) {
                child->prev->next = child;
            }

            for (;;) {
                child->parent = grandparent;
                if (child->next == NULL) break;
                child = child->next;
            }

            child->next = parent->next;
            if (child->next != NULL) {
                child->next->prev = child;
            }

            redrawTarget = grandparent;
            free(parent);
        }
        free(neighbor);
    }

    free(closed);
    tile_free(tile);

    // TODO: should only redraw the tiles that changed size
    container_nc_refresh(redrawTarget);
}

void tile_switch_horizontal(struct Tile *tile, bool right)
{
    struct Container *target = tile->container;
    struct Container *next = NULL;
    struct Container *cont;
   
    for (cont = tile->container;; cont = cont->parent) {
        if (cont == rootContainer) {
            return;
        }

        next = right ? cont->next : cont->prev;
        if (cont->parent->type == CONTAINER_SPLIT_VERTICAL && next != NULL) {
            break;
        }
    }

    for (;; next = cont) {
        if (next->type == CONTAINER_LEAF) {
            target = next;
            break;
        }

        cont = next->child;
        // moving left into another vertical split, need rightmost container 
        if (!right && next->type == CONTAINER_SPLIT_VERTICAL) {
            while (cont->next != NULL) {
                cont = cont->next;
            }
        }
    }

    tile_focus(target->tile);
}

void tile_switch_vertical(struct Tile *tile, bool down)
{
    struct Container *target = tile->container;
    struct Container *next = NULL;
    struct Container *cont;

    for (cont = tile->container;; cont = cont->parent) {
        if (cont == rootContainer) {
            return;
        }

        next = down ? cont->next : cont->prev;
        if (cont->parent->type == CONTAINER_SPLIT_HORIZONTAL && next != NULL) {
            break;
        }
    }

    for (;; next = cont) {
        if (next->type == CONTAINER_LEAF) {
            target = next;
            break;
        }

        cont = next->child;
        // moving up into another horizontal split, need bottom container 
        if (!down && next->type == CONTAINER_SPLIT_HORIZONTAL) {
            while (cont->next != NULL) {
                cont = cont->next;
            }
        }
    }

    tile_focus(target->tile);
}

void proc_tile_input(struct Tile *tile, int c)
{
    switch (c) {
        case '!':
            {
                struct Highlighter hl_bv = {
                    .shouldHighlight = sr_in_bv,
                    .arg = &iscolored12,
                    .defaultColorPair = COLOR_BRIGHTRED,
                };
                tile_highlight_once(tile, &hl_bv);
            }
            break;

        case '#':
            {
                struct Highlighter hl_stat = {
                    .shouldHighlight = sr_stat_unk2,
                    .arg = NULL,
                    .defaultColorPair = COLOR_BRIGHTGREEN,
                };
                tile_highlight_once(tile, &hl_stat);
            }
            break;

        case '@':
            {
                struct Graphnode *node = get_closest_node(tile->buf, tile->cursRow);
                struct Highlighter hl = {
                    .shouldHighlight = sr_in_node,
                    .arg = node,
                    .defaultColorPair = COLOR_GRAY9
                };
                tile_highlight_once(tile, &hl);
            }
            break;

        case '1':
            {

                struct Highlighter hl_lr = {
                    .shouldHighlight = sr_stat_node_terminal,
                    .defaultColorPair = 150,
                    .shallow = true,
                };
                tile_highlight_once(tile, &hl_lr);
                //tile_nc_refresh(procTile);
                //tile_highlight_sr(tile, tile->buf.lines[tile->cursRow]->top, COLOR_CYAN);
                //tile_wmove_to_cursor(tile);
            }
            break;
    }
}

void ichain_tile_input(struct Tile *tile, int c)
{
    switch (c) {
        case '!':
            {
                struct Highlighter hl_bv = {
                    .shouldHighlight = sr_in_bv,
                    .arg = &iscolored12,
                    .defaultColorPair = COLOR_BRIGHTRED,
                    .shallow = true
                };
                tile_highlight_once(tile, &hl_bv);
            }
            break;
    }
}

void liverange_tile_input(struct Tile *tile, int c)
{
    if (tile->buf.lines[tile->cursRow]->top->type == LIVERANGE) {
        struct LiveRange *lr = tile->buf.lines[tile->cursRow]->top->liverange;
        if (lr == NULL) return;
        switch (c) {
            case '3':
                {
                    int offset = offsetof(struct LiveRange, livebbs);
                    struct Highlighter hl = {
                        .shouldHighlight = sr_bv_notempty,
                        .arg = &offset,
                        .defaultColorPair = COLOR_GREEN,
                        .shallow = true,
                    };
                    tile_highlight_once(tile, &hl);
                }
                break;

            case '2':
                {
                    int offset = offsetof(struct LiveRange, reachingbbs);
                    struct Highlighter hl = {
                        .shouldHighlight = sr_bv_notempty,
                        .arg = &offset,
                        .defaultColorPair = COLOR_BRIGHTBLUE,
                        .shallow = true,
                    };
                    tile_highlight_once(tile, &hl);
                }
                break;

            case '1':
                {
                    // contiguous liveranges
                    struct Highlighter hl_contig = {
                        .shouldHighlight = sr_lr_contig,
                        .arg = lr,
                        .defaultColorPair = COLOR_BRIGHTYELLOW,
                        .shallow = true,
                    };
                    tile_highlight_once(tile, &hl_contig);
                }
                break;

            case '#':
                {

                    struct Highlighter hl_lr = {
                        .shouldHighlight = sr_stat_node_in_bv,
                        .arg = &lr->livebbs,
                        .defaultColorPair = 150,
                        .shallow = true,
                    };
                    tile_highlight_once(procTile, &hl_lr);
                    tile_nc_refresh(procTile);
                    tile_highlight_sr(tile, tile->buf.lines[tile->cursRow]->top, COLOR_CYAN);
                    tile_wmove_to_cursor(tile);
                }
                break;

            case '@':
                {

                    struct Highlighter hl_lr = {
                        .shouldHighlight = sr_stat_node_in_bv,
                        .arg = &lr->reachingbbs,
                        .defaultColorPair = 203,
                        .shallow = true,
                    };
                    tile_highlight_once(procTile, &hl_lr);
                    tile_nc_refresh(procTile);
                    tile_highlight_sr(tile, tile->buf.lines[tile->cursRow]->top, COLOR_CYAN);
                    tile_wmove_to_cursor(tile);
                }
                break;

            case '!':
                {
                    struct Highlighter hl_lr_ichain = {
                        .shouldHighlight = sr_ichain_equals,
                        .arg = lr->ichain,
                        .defaultColorPair = COLOR_BRIGHTCYAN
                    };
                    tile_highlight_once(procTile, &hl_lr_ichain);
                    tile_nc_refresh(procTile);
                    tile_highlight_sr(tile, tile->buf.lines[tile->cursRow]->top, COLOR_CYAN);
                    tile_wmove_to_cursor(tile);
                }
                break;


        }
    }
}

void menu_tile_input(struct Tile *tile, int c)
{
    switch (c) {
        case CTRL('M'): // KEY_ENTER
            if (tile->buf.lines[tile->cursRow]->top) {
                struct TileCreation *entry = tile->buf.lines[tile->cursRow]->top->menuEntry;
                tile_clear_content(tile);
                entry->build_function(tile);
                tile->input = entry->input;
                tile_redraw(tile);
            }
            break;
    }
}

void tile_base_input(struct Tile *tile)
{
    int n = 1; // in case I ever want to allow vim-style counts before commands
    int c;
    
    c = wgetch(tile->win);
    switch (c) {
        case 'j':
        case KEY_DOWN:
            cursor_move(tile, n, 0);
            break;

        case 'k':
        case KEY_UP:
            cursor_move(tile, -n, 0);
            break;

        case 'l':
        case KEY_RIGHT:
            cursor_move(tile, 0, n);
            break;

        case 'h':
        case KEY_LEFT:
            cursor_move(tile, 0, -n);
            break;

        case '$':
        case KEY_END:
            cursor_setcol(tile, tile->buf.lines[tile->cursRow]->len - 1);
            break;

        case '^':
        case KEY_HOME:
            cursor_setcol(tile, 0);
            break;

        case 'g':
            cursor_absmove(tile, 0, tile->cursCol);
            break;

        case 'G':
            cursor_absmove(tile, tile->buf.numLines - 1, tile->cursCol);
            break;

        case CTRL('F'):
        case KEY_NPAGE:
            cursor_move(tile, n * (tile->wrows - 1), 0);
            break;

        case CTRL('B'):
        case KEY_PPAGE:
            cursor_move(tile, -n * (tile->wrows - 1), 0);
            break;

        case CTRL('D'):
        case 'd': // TODO: this key is probably too valuable to use here
            cursor_move(tile, n * (tile->wrows - 1) / 2, 0);
            break;

        case CTRL('U'):
        case 'u': // TODO: this key is probably too valuable to use here
            cursor_move(tile, -n * (tile->wrows - 1) / 2, 0);
            break;

        case 'v':
            {
                struct StringRep *sr = dl_get_sr_at_pos(tile->buf.lines[tile->cursRow], tile->cursCol);
                if (sr && sr->type == EXPRESSION) {
                    struct Highlighter hl = {
                        .shouldHighlight = sr_ichain_equals,
                        .arg = sr->expr->ichain,
                        .defaultColorPair = COLOR_BRIGHTRED
                    };
                    tile_highlight_once(tile, &hl);
                }
            }
            break;

        case 'V':
            tile_show_line_children(tile);
            break;

        case 'x':
            tile_close(tile);
            break;

        case 'q':
        case 'Q':
            sInput.quit = true;
            break;

        case 'L':
            tile_switch_horizontal(tile, true);
            break;

        case 'H':
            tile_switch_horizontal(tile, false);
            break;

        case 'J':
            tile_switch_vertical(tile, true);
            break;

        case 'K':
            tile_switch_vertical(tile, false);
            break;

        case 's':
            tile_split(sInput.curTile, CONTAINER_SPLIT_HORIZONTAL, NULL);
            break;

        case 'S':
            tile_split(sInput.curTile, CONTAINER_SPLIT_VERTICAL, NULL);
            break;

        case CTRL('L'):
            sInput.selectionDepth = -1;
            tile_redraw(tile);
            break;

        default:
            if (tile->input != NULL) {
                tile->input(tile, c);
            }
            break;
    }
}

void root_container_init()
{
    rootContainer = container_new(procTile);
    rootContainer->height = LINES;
    rootContainer->width = COLS;
    tile_setdims(procTile, 0, 0, rootContainer->height, rootContainer->width);
    root_container_redraw();
}

void store_current_proc()
{
    prevProcTile = tile_new();
    prevProcTile->buf = build_proc_buffer();
}

void ncurses_init()
{
    static bool init = false;
    if (!init) {
        initscr();
        init = true;

        if (has_colors()) {
            start_color();
            for (int i = 1; i < COLORS; i++) {
                init_pair(i, i, COLOR_BLACK);
                init_pair(BG(i), COLOR_BLACK, i);
            }
        }

        // create the border, to be reused whenever a tile has a border
        sBorder = newpad(LINES, 1);
        wcolor_set(sBorder, BG(COLOR_GRAY17), NULL);
        wvline(sBorder, (chtype)0, LINES);
        waddch(sBorder, ' ');
    } else {
        refresh();
    }
    cbreak();
    noecho();
    nonl();
    intrflush(stdscr, false);
    keypad(stdscr, true);
}

void ncurses_end()
{
    clear();
    refresh();
    endwin();
}

void ncurses_loop()
{
    ncurses_init();

    procTile = tile_new();
    build_proc_tile(procTile);
    procTile->input = proc_tile_input;

    root_container_init();
    // set tile dimensions
    
    sInput.curTile = procTile;
    sInput.quit = false;
    while (!sInput.quit) {
        tile_nc_refresh(sInput.curTile);
        tile_base_input(sInput.curTile);
    }

    container_free(rootContainer);
    ncurses_end();
}

void ncdebug()
{
    ncurses_loop();
}
#endif
