#pragma once

#include "uopt/uoptdata.h"
#include "uopt/debug/tile.h"

struct Input {
    struct Tile *curTile;
    struct Tile *prevTile;
    int direction;
    bool changingTiles;
    bool quit;
    bool redrawAll;

    int selectionDepth;
    struct StringRep *selectedStringRep;

    int lastKey;
};

extern struct Input sInput;
void tile_focus(struct Tile *nextTile);
