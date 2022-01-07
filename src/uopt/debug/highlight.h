#pragma once
#include <ncurses.h>

#include "uopt/uoptdata.h"
#include "uopt/debug/dlprint.h"
#include "uopt/debug/buffer.h"
#include "uopt/debug/tile.h"

struct Highlighter {
    const char *name;
    bool (*shouldHighlight)(struct StringRep *sr, void *arg); // should always be this->arg
    int (*getColorPair)(struct StringRep *sr);
    void *arg; // points to whatever is needed by shouldHighlight
    int defaultColorPair;
    bool shallow; // don't recurse to children when highlighting
    bool deep;
};


// approximations of the RGB colors because nc is special -_-
extern const int reg_nc_colors[];
int nc_reg_color(int reg);

struct Highlighter *tile_find_highlighter(struct Tile *tile, struct Highlighter *hl);
void tile_add_highlighter(struct Tile *tile, struct Highlighter hl);
void tile_remove_highlighter(struct Tile *tile, int index);
void tile_add_default_highlighters(struct Tile *tile);
void sr_highlight(struct Tile *tile, int line, struct StringRep *sr, struct Highlighter *hl);
void tile_highlight_all(struct Tile *self, struct Highlighter *hl);
void tile_highlight_once(struct Tile *tile, struct Highlighter *hl);
void tile_highlight_sr(struct Tile *tile, int line, struct StringRep *sr, int colorPair);
int highlight_random_color();
