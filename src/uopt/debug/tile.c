#ifdef UOPT_DEBUG
#include <ncurses.h>

#include "libu/libu.h"
#include "uopt/uoptdata.h"
#include "uopt/uoptutil.h"
#include "uopt/uoptreg2.h"
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>

#include "debug.h"

/*
 *    CONTAINER_SPLIT_VERTICAL                    CONTAINER_SPLIT_HORIZONTAL       
 *                                                                            
 * ###############################             ###############################
 * #              #              #             #                             #
 * #              #              #             #                             #
 * #              #              #             #                             #
 * #              #              #             #                             #
 * #              #              #             ###############################
 * #              #              #             #                             #
 * #              #              #             #                             #
 * #              #              #             #                             #
 * #              #              #             #                             #
 * ###############################             ###############################
 */

// linked list for redrawing
struct Tile *tileHead;
struct Tile *tileTail;

struct Container *rootContainer;

struct Tile *procTile;

// instead of allocating ncurses windows for every border, reuse one border. TODO: can I just use vline?
WINDOW *sBorder;

struct Tile *tile_new()
{
    struct Tile *tile = calloc(1, sizeof(struct Tile));
    tile->highlighters = calloc(10, sizeof(struct Highligther *));
    tile->highlighterCap = 10;

    return tile;
}

void tile_append(struct Tile *restrict tile, struct Tile *restrict append)
{
    struct Tile *next = tile ? tile->next : tileHead;

    append->next = next;
    append->prev = tile;

    if (tile == NULL) {
        tileHead = append;
    } else {
        tile->next = append;
    }
    if (next == NULL) {
        tileTail = append;
    } else {
        next->prev = append;
    }
}

void tile_unlink(struct Tile *tile)
{
    if (tile->prev != NULL) {
        tile->prev->next = tile->next;
    } else {
        tileHead = tile->next;
    }

    if (tile->next != NULL) {
        tile->next->prev = tile->prev;
    } else {
        tileTail = tile->prev;
    }
}

void tile_free_window(struct Tile *tile)
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
    tile_free_window(tile);
    free(tile->highlighters);
    free(tile);
}

void tile_newsize(struct Tile *tile, int rows, int cols)
{
    tile->wrows = rows;
    tile->wcols = cols;
    wresize(tile->win, MAX(rows, tile->buf.lines->length), MAX(cols, tile->buf.maxWidth));
    cursor_check(tile);
    tile->needRedraw = true;
}

void tile_setdims(struct Tile *tile, int y, int x, int rows, int cols)
{
    tile->wy = y;
    tile->wx = x;
    tile_newsize(tile, rows, cols);
}

void tile_redraw(struct Tile *tile)
{
    for (int line = 0; line < tile->buf.lines->length; line++) {
        int color = 0;
        mvwchgat(tile->win, line, 0, -1, 0, color, NULL);
        for (int h = 0; h < tile->numHighlighters; h++) {
            sr_highlight(tile, line, BUFFER_LINE(tile, line)->top, tile->highlighters[h]);
        }
    }
    tile_wmove_to_cursor(tile);
    tile->needRedraw = true;
}

void tile_new_window(struct Tile *tile)
{
    int mw = 0;
    for (int line = 0; line < tile->buf.lines->length; line++) {
        if (mw < BUFFER_LINE(tile, line)->len) {
            mw = BUFFER_LINE(tile, line)->len;
        }
    }
    tile->buf.maxWidth = mw;

    // TODO: reorganize nc pad creation. (and use wresize?)
    // if pad fills all available space, then there won't be artifacts from splitting and resizing tiles
    tile->win = newpad(MAX(LINES, tile->buf.lines->length), MAX(COLS, tile->buf.maxWidth));
    intrflush(tile->win, false);
    keypad(tile->win, true);

    // print lines
    for (int line = 0; line < tile->buf.lines->length; line++) {
        mvwaddnstr(tile->win, line, 0, BUFFER_LINE(tile, line)->s, BUFFER_LINE(tile, line)->len);
    }
}

void tile_set_title(struct Tile *tile, char *title, int len)
{
    tile->titleWin = newpad(1, COLS);
    wcolor_set(tile->titleWin, BG(COLOR_GRAY17), NULL);
    whline(tile->titleWin, ' ', COLS);
    waddnstr(tile->titleWin, title, len);
}

void tile_nc_refresh(struct Tile *tile)
{
    // TODO: error-prone coordinates
    // wy is already implicitly - 1, because of the title bar
    int smaxrow = tile->wy + tile->wrows;
    int smaxcol = tile->wx + tile->wcols - 1;

    // redraw the same border window at the edge of every tile
    if (tile->hasBorder) {
        pnoutrefresh(sBorder, 0, 0, tile->wy, smaxcol + 1, smaxrow, smaxcol + 1);
    }

    pnoutrefresh(tile->titleWin, 0, 0, tile->wy, tile->wx, tile->wy, smaxcol);
    pnoutrefresh(tile->win, tile->viewRow, tile->viewCol, tile->wy + 1, tile->wx, smaxrow, smaxcol);
    doupdate();

    tile->needRedraw = false;
}

// TODO
void tile_redraw_changed()
{
    bool needUpdate = false;
    for (struct Tile *tile = tileHead; tile != NULL; tile = tile->next) {
        if (tile->needRedraw) {
            tile_nc_refresh(tile);
            needUpdate = true;
        }
    }

    if (needUpdate) {
        doupdate();
    }
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
        menu_new(newTile);
    }

    struct Container *child = container_new(newTile);
    child->parent = parent;
    container_append(curContainer, child);
    tile_append(tile, newTile);

    if (direction == CONTAINER_SPLIT_VERTICAL) { // vertical split (new tile goes to the right of the old tile)
        int newCols = tile->wcols / 2;
        tile_setdims(tile, tile->wy, tile->wx, tile->wrows, tile->wcols - newCols - 1); // make room for the vertical border
        tile_setdims(newTile, tile->wy, tile->wx + tile->wcols + 1, tile->wrows, newCols);

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
        tile_setdims(tile, tile->wy, tile->wx, tile->wrows - newRows, tile->wcols);
        tile_setdims(newTile, tile->wy + tile->wrows + 1, tile->wx, newRows - 1, tile->wcols);

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

/* 
 * (1) The container marked X is deleted. The cursor moves to the sibling's first tile.
 * (2) This leaves the parent (The horizontal container H) with only 1 child left, so it is removed.
 * (3) If the grandparent container has the same orientation, squash it.
 * (4) Final container tree.
 *
 *       (1)                 (2)                 (3)                 (4)
 *
 *    ____V____           ____V____           ____V____
 *   /    |    \         /    |    \         /    |    \          ____V____
 * [ ]    H    [ ] --> [ ]    H    [ ] --> [ ]    V    [ ] -->   /   / \   \
 *       / \                  |                  / \           [ ] [ ] [ ] [ ]
 *      V   X<-delete         V                [ ] [ ]
 *     / \                   / \
 *   [ ] [ ]               [ ] [ ]
 */
void tile_close(struct Tile *tile)
{
    struct Container *closed = tile->container;
    struct Container *neighbor = NULL;
    struct Container *redrawTarget;

    //if (tile == procTile) return; // TODO

    if (closed->prev != NULL) {
        neighbor = closed->prev;
    } else if (closed->next != NULL) {
        neighbor = closed->next;
    } else {
        // TODO: only child, but this shouldn't happen unless closing the last tile
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
    if (tile == gInput.curTile) {
        struct Tile *nextTile = container_first_tile(neighbor);
        gInput.curTile = nextTile;
        gInput.prevTile = NULL;
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

        // (3) now merge with the container above if it has the same split direction
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
    tile_unlink(tile);
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
        // moving left into a vertical split, need rightmost container
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
        // moving up into a horizontal split, need bottom container
        if (!down && next->type == CONTAINER_SPLIT_HORIZONTAL) {
            while (cont->next != NULL) {
                cont = cont->next;
            }
        }
    }

    tile_focus(target->tile);
}

/* Cursor */

void cursor_checkrow(struct Tile *tile)
{
    // keep cursor in bounds
    if (tile->cursRow < 0) {
        tile->cursRow = 0;
    } else if (tile->cursRow >= tile->buf.lines->length) {
        tile->cursRow = tile->buf.lines->length - 1;
    }

    // follow the cursor
    if (tile->cursRow < tile->viewRow) {
        tile->viewRow = tile->cursRow;
    } else if (tile->cursRow >= tile->viewRow + tile->wrows) {
        tile->viewRow = MAX(tile->cursRow - (tile->wrows - 1), 0);
    }

    // scroll up if the window grows
    if (tile->viewRow + tile->wrows >= tile->buf.lines->length) {
        tile->viewRow = MAX(tile->buf.lines->length - tile->wrows, 0);
    }
}

void cursor_checkcol(struct Tile *tile)
{
    // keep cursor in bounds
    if (tile->cursCol < 0) {
        tile->cursCol = 0;
    } else if (tile->cursCol >= CURSOR_LINE(tile)->len) {
        tile->cursCol = CURSOR_LINE(tile)->len - 1;
    }

    // follow the cursor
    if (tile->cursCol < tile->viewCol) {
        tile->viewCol = tile->cursCol;
    } else if (tile->cursCol >= tile->viewCol + tile->wcols) {
        tile->viewCol = MAX(tile->cursCol - (tile->wcols - 1), 0);
    }

    // scroll left if the window grows
    if (tile->viewCol + tile->wcols >= CURSOR_LINE(tile)->len) {
        tile->viewCol = MAX(CURSOR_LINE(tile)->len - tile->wcols, 0);
    }
}

void cursor_check(struct Tile *tile)
{
    cursor_checkrow(tile);
    cursor_checkcol(tile);
}

// set row without wmove
void cursor_updaterow(struct Tile *tile, int row)
{
    tile->cursRow = row;
    cursor_checkrow(tile);
}

// set column without wmove
void cursor_updatecol(struct Tile *tile, int col)
{
    tile->cursCol = col;
    cursor_checkcol(tile);
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

void root_container_init()
{
    rootContainer = container_new(procTile);
    rootContainer->height = LINES;
    rootContainer->width = COLS;
    tile_setdims(procTile, 0, 0, rootContainer->height - 1, rootContainer->width);
    root_container_redraw();
}

void container_add_child(struct Container *parent, struct Container *child)
{
    child->next = parent->child;
    parent->child->prev = child;
    parent->child = child;
    child->parent = parent;
}

struct Tile *container_first_tile(struct Container *cont)
{
    while(cont->child != NULL) {
        cont = cont->child;
    }
    return cont->tile;
}

void container_append(struct Container *restrict cont, struct Container *restrict append)
{
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

void container_update_height(struct Container *parent, int height, bool expandTop)
{
    switch (parent->type) {
        case CONTAINER_LEAF:
            // always subtract 1 for the title bar at the top
            tile_newsize(parent->tile, height - 1, parent->tile->wcols);
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

                tile_newsize(tile, tile->wrows, width - tile->hasBorder);
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

void root_container_redraw(void)
{
    container_redraw(rootContainer);
}
#endif
