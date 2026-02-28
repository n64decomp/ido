#ifdef UOPT_DEBUG
#include <ncurses.h>
#include <string.h>
#include <stdlib.h>

#include "debug.h"

struct MenuEntry {
    char *name;

    void (*build_function)(struct Tile *tile);
    void (*input)(struct Tile *tile, int c);
    struct MenuEntry *child;
};

struct DisplayLine *dl_menu(int line, struct MenuEntry *entry) {
    struct DisplayLine *dl = dl_new();
    struct StringRep *sr = sr_newchild(dl, dl->top);
    sr->type = MENU;
    sr->menuEntry = entry;

    dl_printf(dl, entry->name);

    sr_finalize(dl, sr);
    return dl;
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
    tile_add_highlighter(tile, (struct Highlighter){.shouldHighlight = sr_ucode_stat_highlight, .defaultColorPair = 39});
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

void build_precm_tile(struct Tile *tile)
{
    tile->buf = build_precm_buffer();
    tile_new_window(tile);
    tile_set_title(tile, "Precm", strlen("Precm"));
    tile_add_default_highlighters(tile);
}

void build_cm_tile(struct Tile *tile)
{
    tile->buf = build_cm_buffer();
    tile_new_window(tile);
    tile_set_title(tile, "Code Motion", strlen("Code Motion"));
    tile_add_default_highlighters(tile);
}

void build_scm_tile(struct Tile *tile)
{
    tile->buf = build_scm_buffer();
    tile_new_window(tile);
    tile_set_title(tile, "Save Code Motion", strlen("Save Code Motion"));
    tile_add_default_highlighters(tile);
}

void proc_tile_input(struct Tile *tile, int c);
void ichain_tile_input(struct Tile *tile, int c);
void liverange_tile_input(struct Tile *tile, int c);
void menu_tile_input(struct Tile *tile, int c);
void stack_tile_input(struct Tile *tile, int c);

static struct MenuEntry bitvectorMenu[] = {
    {"Pre-Code Motion", build_precm_tile, NULL},
    {"Code Motion", build_cm_tile, NULL},
    {"Save Code Motion", build_scm_tile, NULL},
    {"Global", build_bitvect_tile, NULL},
    {},
};

static struct MenuEntry mainMenu[] = {
    {"Procedure", build_proc_tile, proc_tile_input},
    {"Stack", build_stack_tile, stack_tile_input},
    {"Bit Vectors", .child = bitvectorMenu},
    {"Register Allocation", build_liverange_tile, liverange_tile_input},
    {"Global Expressions", build_ichain_tile, ichain_tile_input},
    {"Node Register Assignments", build_reg_assignment_tile, NULL},
    {"Node Variable Accesses", build_var_access_tile, NULL},
    {"Ucode Input", build_ucode_input_tile, NULL},
    {"Ucode Output", build_ucode_output_tile, NULL},
    {},
};

void build_menu_tile(struct Tile *tile, struct MenuEntry *menu, char *name)
{
    struct LineBuffer buf = {0};
    buf.lines = vec_new();

    for (int i = 0; menu[i].name != NULL; i++) {
        vec_add(buf.lines, dl_menu(i, &menu[i]));
    }

    tile->buf = buf;
    tile_new_window(tile);
    tile_set_title(tile, name, strlen(name));
    tile->input = menu_tile_input;
}

void menu_open(struct Tile *tile)
{
    tile_free_window(tile);
    menu_new(tile);
    cursor_absmove(tile, 0, 0);
    tile_redraw(tile);
}

void menu_new(struct Tile *tile)
{
    build_menu_tile(tile, mainMenu, "Tiles");
}

void menu_tile_input(struct Tile *tile, int c)
{
    switch (c) {
        case CTRL('M'): // KEY_ENTER
            if (CURSOR_LINE(tile)->top) {
                struct MenuEntry *entry = CURSOR_LINE(tile)->top->menuEntry;
                tile_free_window(tile);
                if (entry->child != NULL) {
                    build_menu_tile(tile, entry->child, entry->name);
                    cursor_absmove(tile, 0, 0);
                } else {
                    entry->build_function(tile);
                    tile->input = entry->input;
                }
                cursor_check(tile);
                tile_redraw(tile);
                //tile_wmove_to_cursor(tile);
            }
            break;
    }
}
#endif
