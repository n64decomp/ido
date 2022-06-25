#pragma once
#include <ncurses.h>

#include "uopt/uoptdata.h"
#include "uopt/debug/dlprint.h"
#include "uopt/debug/buffer.h"

enum TileType {
    TILE_EMPTY,
    TILE_MENU,
    TILE_PROCEDURE,
    TILE_COMPARE, // TODO
    TILE_OPTIONS, // TODO
    TILE_HIGHLIGHT, // TODO
    TILE_EXAMINE, // TODO
    TILE_STACK,
    TILE_ICHAINS,
    TILE_TREPIMAGE,
    TILE_LIVERANGES,
    TILE_ACCESSES
};

struct Tile {
    WINDOW *win;
    WINDOW *titleWin;
    bool hasBorder;
    bool needRedraw;

    struct Container *container;

    // TODO
    struct Tile *next;
    struct Tile *prev;

    // window dimensions (note the order is y,x to match with ncurses's absurdity).
    int wy, wx;
    int wrows, wcols;

    // viewport top-left position
    int viewRow, viewCol;
    // cursor position
    int cursRow, cursCol;

    // displayed data
    struct LineBuffer buf;

    // Highlighting
    int numHighlighters;
    int highlighterCap;
    struct Highlighter **highlighters;

    enum TileType type;

    void (*input)(struct Tile *tile, int c);
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

extern struct Container *rootContainer;

extern struct Tile *procTile;

extern struct Tile *tileHead;
extern struct Tile *tileTail;

extern WINDOW *sBorder;

#define BUFFER_LINE(t, line) ((t)->buf.lines->items[line])
#define CURSOR_LINE(t) BUFFER_LINE(t, (t)->cursRow)

/* Tile */
struct Tile *tile_new();
void tile_append(struct Tile *restrict tile, struct Tile *restrict append);
void tile_unlink(struct Tile *tile);
void tile_free_window(struct Tile *tile);
void tile_free(struct Tile *tile);
void tile_setdims(struct Tile *tile, int y, int x, int rows, int cols);
static inline void tile_wmove_to_cursor(struct Tile *tile)
{
    wmove(tile->win, tile->cursRow, tile->cursCol);
}
void tile_redraw(struct Tile *tile);
void tile_new_window(struct Tile *tile);
void tile_set_title(struct Tile *tile, char *title, int len);
void tile_nc_refresh(struct Tile *tile);
void tile_redraw_changed();
void tile_split(struct Tile *tile, int direction, struct Tile *newTile);
void tile_close(struct Tile *tile);
void tile_switch_horizontal(struct Tile *tile, bool right);
void tile_switch_vertical(struct Tile *tile, bool down);

/* Container */
struct Container *container_new(struct Tile *tile);
void container_free(struct Container *cont);
void root_container_init();
void container_add_child(struct Container *parent, struct Container *child);
struct Tile *container_first_tile(struct Container *cont);
void container_append(struct Container *restrict cont, struct Container *restrict append);
void container_unlink(struct Container *cont);
void container_update_height(struct Container *parent, int height, bool expandTop);
void container_update_width(struct Container *parent, int width, bool expandLeft);
void container_update_pos(struct Container *parent, int ymin, int xmin);
void container_nc_refresh(struct Container *cont);
void root_container_nc_refresh();
void container_redraw(struct Container *cont);
void root_container_redraw(void);
