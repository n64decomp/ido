#ifndef __mips
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

inline int nc_reg_color(int reg)
{
    if (reg <= 0 || reg >= ARRAYLEN(reg_nc_colors)) return 0;

    return reg_nc_colors[reg];
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
    struct Highlighter highlight_general = {
        .shouldHighlight = sr_general_highlight,
        .getColorPair = sr_general_highlight_color
    };
    tile_add_highlighter(tile, highlight_general);
    struct Highlighter highlight_registers = {
        .shouldHighlight = sr_is_register,
        .getColorPair = sr_register_color
    };
    tile_add_highlighter(tile, highlight_registers);
}


void sr_highlight(struct Tile *tile, int line, struct StringRep *sr, struct Highlighter *hl)
{
    if (sr == NULL) return;
    //! sr->data being NULL should not cause a crash

    if (hl->shouldHighlight(sr, hl->arg)) {
        int colorPair = hl->defaultColorPair;
        if (hl->getColorPair != NULL) {
            colorPair = hl->getColorPair(sr);
        }
        tile_highlight_sr(tile, line, sr, colorPair);
        tile->needRedraw = true;
        if (!hl->deep)
        return;
    }

    if (hl->shallow) {
        return;
    }

    // now check children. Since children on the same level don't necessarily overlap, need to check every one
    for (int i = 0; i < sr->children->length; i++) {
        sr_highlight(tile, line, sr->children->items[i], hl);
    }
}

void tile_highlight_all(struct Tile *self, struct Highlighter *hl)
{
    for (struct Tile *t = tileHead; t != NULL; t = t->next) {
        if (t == self) continue;

        tile_highlight_once(t, hl);
        tile_nc_refresh(t);
    }
}

void tile_highlight_once(struct Tile *tile, struct Highlighter *hl)
{
    for (int line = 0; line < tile->buf.numLines; line++) {
        sr_highlight(tile, line, BUFFER_LINE(tile, line)->top, hl);
    }
    tile_wmove_to_cursor(tile);
}

void tile_highlight_sr(struct Tile *tile, int line, struct StringRep *sr, int colorPair)
{
    mvwchgat(tile->win, line, sr->start, sr->len, 0, colorPair, NULL);
}

static bool color_blacklist(int color)
{
    switch(color)
    {
        case COLOR_BLACK:
        case COLOR_WHITE:
        case COLOR_BRIGHTGRAY:
        case COLOR_BRIGHTWHITE:
        case 16: case 59: case 102: case 145: case 188: case 231:
            return true;

        default:
            return false;
    }
}

int highlight_random_color()
{
    /* 
    static int colorList[] = {
        COLOR_BRIGHTRED, COLOR_BRIGHTGREEN, COLOR_BRIGHTYELLOW, COLOR_BRIGHTBLUE, COLOR_BRIGHTMAGENTA, COLOR_BRIGHTCYAN,
        21, 39, 46, 48, 75, 105, 129, 177, 214, 202, 154, 226, 196, 198, 93, 126, 174, 72, 166, 124, 165, 119, 201, 57
    };
     */

    int color = 0;
    while (color_blacklist(color)) {
        color = 1 + (rand() % 231);
    }

    //int color = rand() % (sizeof(colorList) / sizeof(colorList[0]));
    return color;//colorList[color];
}
#endif
