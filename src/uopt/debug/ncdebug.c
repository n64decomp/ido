#ifdef UOPT_DEBUG
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

struct Input sInput;

static struct Tile *prevProcTile;

struct TileCreation {
    char *name;
    void (*build_function)(struct Tile *tile);
    void (*input)(struct Tile *tile, int c);
};

struct UcodeList *gUcodeInput = NULL;

struct StatOutput *gOutput = NULL;
struct StatOutput *gCurOutput = NULL;
static int sTraceIndent = 0;

void output_new_stat(struct Statement *stat)
{
    if (stat == NULL) return;
    struct StatOutput *next  = calloc(1, sizeof(struct StatOutput));
    next->out = vec_new();
    if (gOutput == NULL) {
        gCurOutput = gOutput = next;
    } else {
        gCurOutput->next = next;
        gCurOutput = next;
    }
    next->type = STATEMENT;
    next->data = stat;
}

void output_new_graphnode(struct Graphnode *node)
{
    if (node == NULL) return;
    struct StatOutput *next  = calloc(1, sizeof(struct StatOutput));
    next->out = vec_new();
    if (gOutput == NULL) {
        gCurOutput = gOutput = next;
    } else {
        gCurOutput->next = next;
        gCurOutput = next;
    }
    next->type = GRAPHNODE;
    next->data = node;
}

void ucode_output_clear()
{
    struct StatOutput *prev;
    for (struct StatOutput *o = gOutput; o != NULL;) {
        prev = o;
        vec_free(o->out);
        o = o->next;
        free(prev);
    }
    gOutput = NULL;
    gCurOutput = NULL;
    sTraceIndent = 0;
}

void trace_indent()
{
    ++sTraceIndent;
}

void trace_dedent()
{
    --sTraceIndent;
    if (sTraceIndent < 0) sTraceIndent = 0;
}

void push_trace(const char *message)
{
    if (gOutput == NULL || gCurOutput == NULL || gCurOutput->out == NULL) return;

    struct OutputTrace *out = calloc(1, sizeof(struct OutputTrace));
    out->type = INFO;
    out->message = message;
    out->indent = sTraceIndent;
    vec_add(gCurOutput->out, out);
}

bool ucode_has_string(union Bcode *b)
{
    struct Bcrec *uinstr = &b->Ucode;
    struct utabrec *urec = &utab[uinstr->Opc];

    if (!urec->hasconst) return false;
    if ((uinstr->Dtype == Mdt ||
            uinstr->Dtype == Qdt ||
            uinstr->Dtype == Rdt ||
            uinstr->Dtype == Sdt ||
            uinstr->Dtype == Xdt) || uinstr->Opc == Ucomm) {
        return true;
    }
    return false;
}

void copy_ucode_string(union Bcode *dst, union Bcode *src)
{
    if (!ucode_has_string(src)) return;

    dst->Ucode.Uopcde.uiequ1.uop2.Constval.swpart.Chars = calloc(dst->Ucode.Uopcde.uiequ1.uop2.Constval.swpart.Ival, sizeof(char));
    memcpy(dst->Ucode.Uopcde.uiequ1.uop2.Constval.swpart.Chars, src->Ucode.Uopcde.uiequ1.uop2.Constval.swpart.Chars, src->Ucode.Uopcde.uiequ1.uop2.Constval.swpart.Ival);
}

void push_output(union Bcode *b)
{
    if (gOutput == NULL || gCurOutput == NULL || gCurOutput->out == NULL) return;

    struct OutputTrace *out = calloc(1, sizeof(struct OutputTrace));
    out->type = UCODE;
    out->bcode = *b;
    copy_ucode_string(&out->bcode, b);
    vec_add(gCurOutput->out, out);
}

struct UcodeList *new_ucodelist()
{
    struct UcodeList *list = calloc(1, sizeof(struct UcodeList));
    list->out = vec_new();
    return list;
}

void push_input(union Bcode *b) {
    if (gUcodeInput == NULL) gUcodeInput = new_ucodelist();

    union Bcode *item = calloc(1, sizeof(union Bcode));
    *item = *b;
    copy_ucode_string(item, b);
    vec_add(gUcodeInput->out, item);
}

void ucode_input_clear()
{
    if (gUcodeInput == NULL) return;

    for (int i = 0; i < gUcodeInput->out->length; i++) {
        if (ucode_has_string(gUcodeInput->out->items[i])) {
            free(gUcodeInput->out->items[i]->Ucode.Uopcde.uiequ1.uop2.Constval.swpart.Chars);
        }
    }
    vec_free(gUcodeInput->out);
    free(gUcodeInput);
    gUcodeInput = NULL;
}

struct DisplayLine *dl_menu(int line, struct TileCreation *entry) {
    struct DisplayLine *dl = dl_new();
    struct StringRep *sr = sr_new();
    sr->type = MENU;
    sr->menuEntry = entry;
    sr->start = dl->pos;

    dl_printf(dl, entry->name);

    sr->len = dl->pos - sr->start;
    dl->top = sr;
    dl->len = sr->len;
    return dl;
}

void cursor_checkrow(struct Tile *tile)
{
    if (tile->cursRow < tile->viewRow) {
        tile->viewRow = MAX(tile->cursRow, 0);
        tile->cursRow = tile->viewRow;
    } else if (tile->cursRow >= MIN(tile->viewRow + tile->wrows, tile->buf.numLines)) {
        tile->viewRow = MAX(MIN(tile->cursRow, tile->buf.numLines - 1) - (tile->wrows - 1), 0);
        tile->cursRow = MIN(tile->cursRow, tile->buf.numLines - 1);
    }

}

void cursor_checkcol(struct Tile *tile)
{
    if (tile->cursCol < tile->viewCol) {
        tile->viewCol = MAX(tile->cursCol, 0);
        tile->cursCol = tile->viewCol;
    } else if (tile->cursCol >= MIN(tile->viewCol + tile->wcols, CURSOR_LINE(tile)->len)) {
        tile->viewCol = MAX(MIN(tile->cursCol, CURSOR_LINE(tile)->len - 1) - (tile->wcols - 1), 0);
        tile->cursCol = MIN(tile->cursCol, CURSOR_LINE(tile)->len - 1);
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

void build_proc_tile(struct Tile *tile)
{
    tile->buf = build_proc_buffer();
    tile_new_window(tile);
    tile_set_title(tile, entnam0, entnam0len);
    tile_add_default_highlighters(tile);
}

void build_ichain_tile(struct Tile *tile)
{
    tile->buf = build_ichain_buffer();
    tile_new_window(tile);
    char *title = "Global Expressions";
    tile_set_title(tile, title, strlen(title));
    tile_add_default_highlighters(tile);
}

void build_ucode_output_tile(struct Tile *tile)
{
    tile->buf = build_ucode_output_buffer();
    tile_new_window(tile);
    char *title = "Ucode Output";
    tile_set_title(tile, title, strlen(title));
    tile_add_default_highlighters(tile);
    tile_add_highlighter(tile, (struct Highlighter){.shouldHighlight = sr_ucode_stat_highlight, .defaultColorPair = 39});
}

void build_ucode_input_tile(struct Tile *tile)
{
    tile->buf = build_ucode_input_buffer();
    tile_new_window(tile);
    char *title = "Ucode Input";
    tile_set_title(tile, title, strlen(title));
    tile_add_default_highlighters(tile);
}

void build_var_access_tile(struct Tile *tile)
{
    tile->buf = build_var_access_buffer();
    tile_new_window(tile);
    char *title = "Var Accesses";
    tile_set_title(tile, title, strlen(title));
    tile_add_default_highlighters(tile);
}

void build_reg_assignment_tile(struct Tile *tile)
{
    tile->buf = build_reg_assignment_buffer();
    tile_new_window(tile);
    char *title = "Register Assignments";
    tile_set_title(tile, title, strlen(title));
    tile_add_default_highlighters(tile);
}

void build_bitvect_tile(struct Tile *tile)
{
    tile->buf = build_bitvect_buffer();
    tile_new_window(tile);
    char *title = "BitVectors";
    tile_set_title(tile, title, strlen(title));
    tile_add_default_highlighters(tile);
}

void build_liverange_tile(struct Tile *tile)
{
    tile->buf = build_liverange_buffer();
    tile_new_window(tile);
    char *title = "Regalloc - Live Ranges";
    tile_set_title(tile, title, strlen(title));
    tile_add_default_highlighters(tile);
}

void build_stack_tile(struct Tile *tile)
{
    tile->buf = build_stack_buffer();
    tile_new_window(tile);
    tile_set_title(tile, "Stack", strlen("Stack"));
    tile_add_default_highlighters(tile);
}

void proc_tile_input(struct Tile *tile, int c);
void ichain_tile_input(struct Tile *tile, int c);
void liverange_tile_input(struct Tile *tile, int c);
void menu_tile_input(struct Tile *tile, int c);
void stack_tile_input(struct Tile *tile, int c);

static struct TileCreation tileMenu[] = {
    {"Procedure", build_proc_tile, proc_tile_input},
    {"Stack", build_stack_tile, stack_tile_input},
    {"Register Allocation", build_liverange_tile, liverange_tile_input},
    {"Global Expressions", build_ichain_tile, ichain_tile_input},
    {"Node Register Assignments", build_reg_assignment_tile, NULL},
    {"Node Variable Accesses", build_var_access_tile, NULL},
    {"Bit Vectors", build_bitvect_tile, NULL},
    {"Ucode Input", build_ucode_input_tile, NULL},
    {"Ucode Output", build_ucode_output_tile, NULL},
};

void build_menu_tile(struct Tile *tile)
{
    struct LineBuffer buf = {0};
    buf.lines = vec_new();
    int numLines = sizeof(tileMenu) / sizeof(tileMenu[0]);

    for (int i = 0; i < numLines; i++) {
        vec_add(buf.lines, dl_menu(i, &tileMenu[i]));
    }

    buf.numLines = buf.lines->length;
    tile->buf = buf;
    tile_new_window(tile);
    tile_set_title(tile, "Tiles", strlen("Tiles"));
    tile->input = menu_tile_input;
}

void tile_focus(struct Tile *nextTile)
{
    sInput.prevTile = sInput.curTile;
    sInput.curTile = nextTile;
}

int sr_unk4_color(struct StringRep *sr)
{
    //return sr->expr->unk4;

    switch (sr->expr->unk4) {
        case 1: return COLOR_BRIGHTRED; // return 33;
        case 2: return COLOR_BRIGHTYELLOW; // return 69;
        case 3: return COLOR_BRIGHTGREEN;// return 99;
        case 4: return COLOR_BRIGHTBLUE;// return 128;
        case 5: return COLOR_BRIGHTMAGENTA;// return 162;

        case 0:
        default:
            return 0;

    }
}

bool sr_expr_unk4(struct StringRep *sr, void *unused)
{
    //typeof(((struct Graphnode){}).bvs.stage1.absalters) *a;
    switch (sr->type) {
        case EXPRESSION:
            return (sr->expr->unk4 != 0);

        default:
            return false;
    }
}

void proc_tile_input(struct Tile *tile, int c)
{
    switch (c) {
        case '4':
            {
                struct Highlighter hl = {
                    .shouldHighlight = sr_is_store,
                    .getColorPair = sr_store_bool_color,
                    .defaultColorPair = 0,
                };
                tile_highlight_once(tile, &hl);

            }
            break;

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
                //tile_highlight_sr(tile, CURSOR_LINE(tile)->top, COLOR_CYAN);
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
                //int offset = offsetof(struct Graphnode, bvs.stage1.u.cm.cand);
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

void color_sr(struct Tile *tile)
{
    struct StringRep *sr = dl_get_sr_at_pos(CURSOR_LINE(tile), tile->cursCol);
    if (sr->type == FIELDNAME && sr->data != NULL) {
        sr = sr->data;
    }
    switch (sr->type) {
        case REGISTER:
        case LABEL:
            {
                struct Highlighter hl = {
                    .shouldHighlight = sr_data_equals,
                    .arg = sr->data,
                    .defaultColorPair = highlight_random_color(),
                    .shallow = false
                };
                tile_highlight_all(NULL, &hl);
            }
            break;

        case VARIABLE:
            {
                int color = highlight_random_color();
                struct Variable *variable = sr->variable;
                struct Highlighter hl = {
                    .shouldHighlight = sr_has_variable,
                    .arg = &variable->location,
                    .defaultColorPair = color,
                    .shallow = false
                };
                tile_highlight_all(tile, &hl);
                tile_highlight_sr(tile, tile->cursRow, sr, color);
                tile_wmove_to_cursor(tile);
            }
            break;

        case LDATAB_ENTRY:
            {
                int color = highlight_random_color();
                struct LdatabEntry *ldatabEntry = sr->ldatabEntry;
                struct Highlighter hl = {
                    .shouldHighlight = sr_has_variable,
                    .arg = &ldatabEntry->var,
                    .defaultColorPair = color,
                    .shallow = false
                };
                tile_highlight_all(tile, &hl);
                tile_highlight_sr(tile, tile->cursRow, sr, color);
                tile_wmove_to_cursor(tile);
            }
            break;

        case TEMPLOC:
            {
                int color = highlight_random_color();
                struct Temploc *temploc = sr->temploc;
                struct Highlighter hl = {
                    .shouldHighlight = sr_has_temploc,
                    .arg = temploc,
                    .defaultColorPair = color,
                    .shallow = false
                };
                tile_highlight_all(tile, &hl);
                tile_highlight_sr(tile, tile->cursRow, sr, color);
                tile_wmove_to_cursor(tile);
            }
            break;

        case BITVECTOR:
            {
                struct Highlighter hl = {
                    .shouldHighlight = sr_in_bv,
                    .arg = &sr->bitvector,
                    .defaultColorPair = highlight_random_color(),
                };
                tile_highlight_all(tile, &hl);
                tile_wmove_to_cursor(tile);
            }
            break;

        case BITVECTORBB:
            {
                struct Highlighter hl = {
                    .shouldHighlight = sr_stat_node_in_bv,
                    .arg = &sr->bitvector,
                    .defaultColorPair = highlight_random_color(),
                    .shallow = true,
                };
                tile_highlight_once(procTile, &hl);
                tile_nc_refresh(procTile);
                tile_wmove_to_cursor(tile);
            }
            break;

        case LIVERANGE:
            {
                struct Highlighter hl = {
                    .shouldHighlight = sr_stat_node_in_bv,
                    .arg = &sr->liverange->livebbs,
                    .defaultColorPair = highlight_random_green(),
                    .shallow = true,
                };
                // highlight livebbs as green
                tile_highlight_all(tile, &hl);
                hl.arg = &sr->liverange->reachingbbs;
                // highlight reachingbbs in red
                hl.defaultColorPair = highlight_random_red(),
                tile_highlight_all(tile, &hl);
                tile_wmove_to_cursor(tile);

            }
            break;

        case EXPRESSION:
            {
                struct Highlighter hl = {
                    .shouldHighlight = sr_expr_equals,
                    .arg = sr->expr,
                    .defaultColorPair = highlight_random_color()
                };
                tile_highlight_all(NULL, &hl);
            }
            break;

        case ICHAIN:
            {
                struct Highlighter hl = {
                    .shouldHighlight = sr_ichain_equals,
                    .arg = sr->ichain,
                    .defaultColorPair = highlight_random_color()
                };
                tile_highlight_all(NULL, &hl);
            }
            break;

        case STATEMENT_OPC:
        case STATEMENT:
            {
                struct Highlighter hl = {
                    .shouldHighlight = sr_stat_equals,
                    .arg = sr->stat,
                    .defaultColorPair = highlight_random_color()
                };
                tile_highlight_all(NULL, &hl);
                tile_wmove_to_cursor(tile);
            }
            break;

        case GRAPHNODE:
            {
                struct Highlighter hl = {
                    .shouldHighlight = sr_in_node,
                    .arg = sr->node,
                    .defaultColorPair = COLOR_GRAY9
                };
                /* 
                tile_highlight_once(procTile, &hl);
                tile_nc_refresh(procTile);
                 */
                tile_highlight_all(NULL, &hl);
                tile_wmove_to_cursor(tile);
            }
            break;

        default:
            break;
    }
}

void stack_tile_input(struct Tile *tile, int c)
{
    switch (c) {
        /*
        case 'c':
            {
                struct StringRep *top = CURSOR_LINE(tile)->top;
                struct Highlighter hl;
                switch (top->type) {
                    case VARIABLE:
                        {
                            int color = highlight_random_color();
                            struct Variable *variable = CURSOR_LINE(tile)->top->variable;
                            hl = (struct Highlighter) {
                                .shouldHighlight = sr_has_variable,
                                .arg = variable,
                                .defaultColorPair = color,
                                .shallow = false
                            };
                            tile_highlight_all(tile, &hl);
                            tile_highlight_sr(tile, tile->cursRow, CURSOR_LINE(tile)->top, color);
                            tile_wmove_to_cursor(tile);
                        }
                        break;

                    case TEMPLOC:
                        {
                            int color = highlight_random_color();
                            struct Temploc *temploc = CURSOR_LINE(tile)->top->temploc;
                            hl = (struct Highlighter) {
                                .shouldHighlight = sr_has_temploc,
                                .arg = temploc,
                                .defaultColorPair = color,
                                .shallow = false
                            };
                            tile_highlight_all(tile, &hl);
                            tile_highlight_sr(tile, tile->cursRow, CURSOR_LINE(tile)->top, color);
                            tile_wmove_to_cursor(tile);
                        }
                        break;

                    default:
                        break;
                }

            }
            break;
             */
    }
}

void liverange_tile_input(struct Tile *tile, int c)
{
    if (CURSOR_LINE(tile)->top->type == LIVERANGE) {
        struct LiveRange *lr = CURSOR_LINE(tile)->top->liverange;
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
                    tile_highlight_sr(tile, tile->cursRow, CURSOR_LINE(tile)->top, COLOR_CYAN);
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
                    tile_highlight_sr(tile, tile->cursRow, CURSOR_LINE(tile)->top, COLOR_CYAN);
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
                    tile_highlight_sr(tile, tile->cursRow, CURSOR_LINE(tile)->top, COLOR_CYAN);
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
            if (CURSOR_LINE(tile)->top) {
                struct TileCreation *entry = CURSOR_LINE(tile)->top->menuEntry;
                tile_free_window(tile);
                entry->build_function(tile);
                tile->input = entry->input;
                cursor_check(tile);
                tile_redraw(tile);
                //tile_wmove_to_cursor(tile);
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
            cursor_setcol(tile, CURSOR_LINE(tile)->len - 1);
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

        case 'c':
            color_sr(tile);
            break;

        case 'x':
        case 'X':
            examine(tile, c == 'X');
            break;

        case 'v':
            tile_highlight_line_parts(tile, sInput.selectionDepth++);
            break;

        case 'V':
            // awkward logic so that 'v' after 'V' highlights a new depth instead of the same one
            sInput.selectionDepth = MAX(sInput.selectionDepth - 2, 0);
            tile_highlight_line_parts(tile, sInput.selectionDepth++);
            break;

        case 'q':
            tile_close(tile);
            break;

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
            sInput.selectionDepth = 0;
            if (sInput.lastKey == c) {
                for (struct Tile *t = tileHead; t != NULL; t = t->next) {
                    tile_redraw(t);
                }
                tile_redraw_changed();
            } else {
                tile_redraw(tile);
            }
            break;

        default:
            if (tile->input != NULL) {
                tile->input(tile, c);
            }
            break;
    }
    sInput.lastKey = c;
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
    //getch();
    cbreak();
    noecho();
    nonl();
    intrflush(stdscr, false);
    keypad(stdscr, true);

    dlprint_init();
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
    tileHead = NULL;
    tileTail = NULL;
    tile_append(NULL, procTile);

    root_container_init();

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
