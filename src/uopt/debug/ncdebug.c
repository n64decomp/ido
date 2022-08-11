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

struct Input gInput;

static struct Tile *prevProcTile;

struct UcodeList *gUcodeInput = NULL;
struct UcodeList *gCurInput = NULL;

struct StatOutput *gOutput = NULL;
struct StatOutput *gCurOutput = NULL;
static int sTraceIndent = 0;
bool gDebugTracingInput = false;

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

    if (src->Ucode.Opc != Uinit) {
        dst->Ucode.Uopcde.uiequ1.uop2.Constval.swpart.Chars = calloc(dst->Ucode.Uopcde.uiequ1.uop2.Constval.swpart.Ival, sizeof(char));
        memcpy(dst->Ucode.Uopcde.uiequ1.uop2.Constval.swpart.Chars, src->Ucode.Uopcde.uiequ1.uop2.Constval.swpart.Chars, src->Ucode.Uopcde.uiequ1.uop2.Constval.swpart.Ival);
    } else {
        dst->Ucode.Uopcde.uiequ1.uop2.uinit.initval.swpart.Chars = calloc(dst->Ucode.Uopcde.uiequ1.uop2.uinit.initval.swpart.Ival, sizeof(char));
        memcpy(dst->Ucode.Uopcde.uiequ1.uop2.uinit.initval.swpart.Chars, src->Ucode.Uopcde.uiequ1.uop2.uinit.initval.swpart.Chars, src->Ucode.Uopcde.uiequ1.uop2.uinit.initval.swpart.Ival);
    }
}

void ucode_free_string(union Bcode *bcode)
{
    if (bcode->Ucode.Opc != Uinit) {
        free(bcode->Ucode.Uopcde.uiequ1.uop2.Constval.swpart.Chars);
    } else {
        free(bcode->Ucode.Uopcde.uiequ1.uop2.uinit.initval.swpart.Chars);
    }
}

void output_new_stat(struct Statement *stat)
{
    if (stat == NULL) return;
    struct StatOutput *next = calloc(1, sizeof(struct StatOutput));
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
    struct StatOutput *next = calloc(1, sizeof(struct StatOutput));
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
    for (struct StatOutput *cur = gOutput; cur != NULL;) {
        prev = cur;
        for (int i = 0; i < cur->out->length; i++) {
            if (cur->out->items[i]->type == UCODE) {
                if (ucode_has_string(&cur->out->items[i]->bcode)) {
                    ucode_free_string(&cur->out->items[i]->bcode);
                }
                free(cur->out->items[i]);
            }
        }
        vec_free(cur->out);
        cur = cur->next;
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

void new_ucode_input()
{
    struct UcodeList *next = new_ucodelist();
    if (gUcodeInput == NULL) {
        gUcodeInput = gCurInput = next;
    } else {
        gCurInput->next = next;
        gCurInput = next;
    }
}

void push_input(union Bcode *b) {
    if (gUcodeInput == NULL) new_ucode_input();

    union Bcode *item = calloc(1, sizeof(union Bcode));
    *item = *b;
    copy_ucode_string(item, b);
    vec_add(gCurInput->out, item);
}

void ucode_input_clear()
{
    if (gUcodeInput == NULL) return;

    struct UcodeList *prev;
    for (struct UcodeList *cur = gUcodeInput; cur != NULL;) {
        prev = cur;
        for (int i = 0; i < cur->out->length; i++) {
            if (ucode_has_string(cur->out->items[i])) {
                free(cur->out->items[i]->Ucode.Uopcde.uiequ1.uop2.Constval.swpart.Chars);
            }
            free(cur->out->items[i]);
        }
        vec_free(cur->out);
        cur = cur->next;
        free(prev);
    }
    gUcodeInput = NULL;
    gCurInput = NULL;
}

void tile_focus(struct Tile *nextTile)
{
    gInput.prevTile = gInput.curTile;
    gInput.curTile = nextTile;
}

int sr_unk4_color(struct StringRep *sr)
{
    //return sr->expr->unk4;

    switch (sr->expr->unk4) {
        case 1: return COLOR_BRIGHTRED; // return 33;
        case 2: return COLOR_BRIGHTYELLOW; // return 69;
        case 3: return COLOR_BRIGHTGREEN; // return 99;
        case 4: return COLOR_BRIGHTBLUE; // return 128;
        case 5: return COLOR_BRIGHTMAGENTA; // return 162;

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

bool condIchainIsopCand(void *_ichain);
bool sr_has_cand(struct StringRep *sr, void *unused)
{
    switch (sr->type) {
        case STATEMENT:
            return sr->stat->opc == Ustr && sr->stat->u.store.u.str.unk2C != NULL && sr->stat->u.store.u.str.unk2C != nota_candof;

        case ICHAIN:
            return sr->ichain->type == isop && condIchainIsopCand(sr->ichain) && sr->ichain->isop.srcand != NULL && sr->ichain->isop.srcand != nota_candof;

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

        case '%':
            {
                struct Highlighter hl =
                {
                    .shouldHighlight = sr_has_cand,
                    .defaultColorPair = COLOR_BRIGHTRED
                };
                tile_highlight_all(NULL, &hl);
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
                tile_highlight_sr(tile, tile->cursRow, sr, hl.defaultColorPair);
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
                tile_highlight_all(tile, &hl);
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

                /* 
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
                 */
        }
    }
}

void tile_base_input(struct Tile *tile)
{
    int n = 1; // in case I ever want to allow vim-style counts before commands
    int c;

    c = wgetch(tile->win);
alt:
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
            cursor_absmove(tile, tile->buf.lines->length - 1, tile->cursCol);
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
            tile_highlight_line_parts(tile, gInput.selectionDepth++);
            break;

        case 'V':
            // awkward logic so that 'v' after 'V' highlights a new depth instead of the same one
            gInput.selectionDepth = MAX(gInput.selectionDepth - 2, 0);
            tile_highlight_line_parts(tile, gInput.selectionDepth++);
            break;

        case 'q':
            tile_close(tile);
            break;

        case 'Q':
            gInput.quit = true;
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
            tile_split(gInput.curTile, CONTAINER_SPLIT_HORIZONTAL, NULL);
            break;

        case 'S':
            tile_split(gInput.curTile, CONTAINER_SPLIT_VERTICAL, NULL);
            break;

        case 27: // ESCAPE or ALT
            // this is awful... also needed set_escdelay which will probably mess something up
            nodelay(tile->win, true);
            c = wgetch(tile->win);
            nodelay(tile->win, false);
            if (c != -1) {
                goto alt;
            }

            // open the menu
            menu_open(tile);
            break;

        case CTRL('L'):
            gInput.selectionDepth = 0;
            if (gInput.lastKey == c) {
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
    gInput.lastKey = c;
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
    set_escdelay(25);

    dlprint_init();

    // create the procedure window
    procTile = tile_new();
    build_proc_tile(procTile);
    procTile->input = proc_tile_input;
    tileHead = NULL;
    tileTail = NULL;
    tile_append(NULL, procTile);

    root_container_init();

    gInput.curTile = procTile;
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

    gInput.quit = false;
    while (!gInput.quit) {
        tile_nc_refresh(gInput.curTile);
        tile_base_input(gInput.curTile);
    }

    container_free(rootContainer);
    ncurses_end();
}

void ncdebug()
{
    ncurses_loop();
}
#endif
