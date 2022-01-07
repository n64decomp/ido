#pragma once
#include <ncurses.h>

#include "uopt/uoptdata.h"
#include "uopt/debug/dlprint.h"
#include "uopt/debug/highlight.h"
#include "uopt/debug/buffer.h"
#include "uopt/debug/tile.h"

bool expr_in_bvect(struct Expression *expr, struct BitVector *bv);
bool stat_in_bvect(struct Statement *stat, struct BitVector *bv);
bool sr_general_highlight(struct StringRep *sr, void *unused);
int sr_general_highlight_color(struct StringRep *sr);
bool sr_ucode_stat_highlight(struct StringRep *sr, void *unused);
int sr_store_bool_color(struct StringRep *sr);
bool sr_is_store(struct StringRep *sr, void *unused);
bool sr_data_equals(struct StringRep *sr, void *data);
bool sr_ichain_equals(struct StringRep *sr, void *ichain);
bool sr_expr_equals(struct StringRep *sr, void *expr);
bool sr_stat_equals(struct StringRep *sr, void *stat);
bool sr_in_bv(struct StringRep *sr, void *bv);
bool sr_bv_notempty(struct StringRep *sr, void *bv);
bool sr_lr_contig(struct StringRep *sr, void *bv);
bool sr_in_node(struct StringRep *sr, void *node);
bool sr_stat_unk2(struct StringRep *sr, void *node);
bool sr_stat_node_in_bv(struct StringRep *sr, void *bv);
bool sr_stat_node_terminal(struct StringRep *sr, void *bv);
bool sr_has_temploc(struct StringRep *sr, void *temp);
bool sr_has_variable(struct StringRep *sr, void *var);
int sr_get_register(struct StringRep *sr);
bool sr_is_register(struct StringRep *sr, void *unused);
int sr_register_color(struct StringRep *sr);
void sr_highlight_children(struct Tile *tile, int line, struct StringRep *sr, int depth);
void tile_show_line_children(struct Tile *tile);
struct Graphnode *get_closest_node(struct LineBuffer buf, int line);
