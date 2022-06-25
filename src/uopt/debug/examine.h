#pragma once

#include "uopt/debug/dlprint.h"
#include "uopt/debug/memberdata.h"
#include "uopt/debug/tile.h"

void member_print(void *data, struct Member *m, void *lines);
struct LineBuffer examine_buffer(struct StringRep *sr);
void examine(struct Tile *tile, bool splitVertical);
