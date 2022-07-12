#ifdef UOPT_DEBUG
#include <string.h>
#include "uopt/uoptutil.h"
#include "debug.h"
/* 'x': examine line whatever is under the cursor
 *
 *
 *  STATEMENT,
 *  EXPRESSION,
 *  ICHAIN,
 *  LIVERANGE,
 *  GRAPHNODE,
 *  VAR_ACCESS:
 *      Show the values of all of the fields
 *
 *  default:
 *      do nothing
 *
 */

bool member_is_pointer(struct Member *m)
{
    switch (m->type)
    {
        case BOOL:
        case CHAR:
        case SHORT:
        case INT:
        case LONG:
        case FLOAT:

        case OPCODE:
        case BITVECTOR:
        case VARLOC:
        case REGISTER:
        case REGSET64:
        case REGBOOLARRAY:
        case MISC:
        case MENU:
        case INFO:
            return false;

        default:
            break;
    }
    return true;
}

// data = &struct->member
void dl_print_typeid(struct DisplayLine *dl, struct StringRep *sr, void *data, enum TypeID type)
{
    switch (type) {
        case EXPRESSION:     dl_print_expr(dl, sr, *(void**)data); break;
        case ICHAIN:         dl_print_ichain(dl, sr, *(void**)data); break;
        case STATEMENT:      dl_print_statement(dl, sr, *(void**)data); break;
        case GRAPHNODE:      dl_print_graphnode(dl, sr, *(void**)data, true); break;
        case GRAPHNODE_LIST: dl_print_graphnode_list(dl, sr, *(void**)data, true); break;
        case VAR_ACCESS:     dl_print_var_access(dl, sr, *(void**)data); break;
        case TREP:           dl_print_trepimage(dl, sr, *(void**)data); break;
        case TEMPLOC:        dl_print_temploc(dl, *(void**)data); break;
        case VARLOC:         dl_print_variable(dl, *(struct VariableLocation*)data); break;
        case BITVECTOR:      dl_print_bitvector(dl, sr, data); break;
        case BITVECTORBB:    dl_print_bitvectorbb(dl, sr, data); break;
        case LIVERANGE:      dl_print_liverange(dl, sr, *(void**)data); break;
        case LIVEUNIT:       dl_print_liveunit(dl, sr, *(void**)data); break;
        case INTERFERELIST:  dl_print_interferelist(dl, sr, *(void**)data); break;
        case REGISTER:       dl_print_register(dl, sr, *(char *)data); break;
        case REGSET64:       dl_print_regset64(dl, sr, *(int(*)[2])data); break;
        case REGBOOLARRAY:   dl_print_reg_boolarray(dl, sr, *(char(*)[5])data); break;

        // scalar types
        case EXPRTYPE: dl_printf(dl, "%s", exprtype_name(*(ExpressionType *)data)); break;
        case DATATYPE: dl_printf(dl, "%s", dtype_name(*(enum Datatype *)data)); break;
        case OPCODE:   dl_print_opcode(dl, sr, *(Uopcode *)data); break;
        case BOOL:     dl_printf(dl, "%s", *(bool *)data ? "true" : "false"); break;
        case CHAR:     dl_printf(dl, "%hhd", *(char *)data); break;
        case SHORT:    dl_printf(dl, "%hd", *(short *)data); break;
        case INT:      dl_printf(dl, "%d", *(int *)data); break;
        case LONG:     dl_printf(dl, "%ld", *(long *)data); break;
        case FLOAT:    dl_printf(dl, "%f", *(float *)data); break;
        default: break;
    }
}

// data = &struct->member
struct DisplayLine *dl_from_member(void **data, struct Member *m, void *lines)
{
    struct DisplayLine *dl = dl_new();
    dl->top = sr_new();
    dl->top->type = MISC;
    struct StringRep *field = sr_newchild(dl, dl->top);

    field->type = FIELDNAME;
    field->data = NULL;
    field->start = dl->pos;
    dl_printf(dl, "%s", m->name);
    field->len = dl->pos - field->start;

    dl_printf(dl, "=", m->name);

    /*
    struct StringRep *sr = sr_newchild(dl, dl->top);
    sr->type = MISC;
    sr->start = dl->pos;
     */
    if (data == NULL || (member_is_pointer(m) && *data == NULL)) {
        dl_printf(dl, "NULL");
    } else {
        dl_print_typeid(dl, dl->top, data, m->type);
        if (dl->top->children->length > 1) {
            field->data = dl->top->children->items[1]; // TODO: hack
        }
    }

    dl->top->len = dl->pos - dl->top->start;
    dl->len = dl->top->len;
    return dl;
}

void member_print(void *data, struct Member *m, void *lines)
{
    if (m->isUnion) {
        if (m->unionCond(data)) {
            for (int i = 0; i < m->numUnionMembers; i++) {
                member_print(data, &m->unionMembers[i], lines);
            }
        }
    } else if (m->isList) { // linked list
        void **list = MEMBER_GET(data, m);
        while (*list != NULL) {
            vec_add(lines, dl_from_member(list, m, lines));
            list = LIST_MEMBER_NEXT(*list, m);
        }
    } else {
        vec_add(lines, dl_from_member(MEMBER_GET(data,m), m, lines));
    }
}

struct DisplayLine *dl_from_struct(struct StringRep *examined)
{
    struct DisplayLine *dl = dl_new();
    struct StringRep *sr = sr_new();

    sr->type = examined->type;
    sr->data = examined->data;
    dl_printf(dl, "%s ", gStructData[examined->type].structName);
    sr->start = dl->pos;
    dl_print_typeid(dl, sr, &sr->data, sr->type);
    sr->len = dl->pos - sr->start;
    dl->top = sr;
    dl->len = dl->pos;
    return dl;
}

struct StringRep *sr_fieldname(struct StringRep *sr)
{
    if (sr->data != NULL) {
        return sr->data;
    } else {
        return sr;
    }
}

struct LineBuffer examine_buffer(struct StringRep *sr)
{
    struct LineBuffer buf = {0};
    buf.lines = vec_new();

    // TODO: hacky... sr->data points to the stringrep that should be examined
    if (sr->type == FIELDNAME && sr->data != NULL) {
        sr = sr->data;
    }

    if (gStructData[sr->type].members == NULL) {
        vec_add(buf.lines, dl_new_printf("examine not implemented for this type (%d)", sr->type));
        return buf;
    }

    vec_add(buf.lines, dl_from_struct(sr));

    for (int i = 0; i < gStructData[sr->type].numMembers; i++) {
        member_print(sr->data, &gStructData[sr->type].members[i], buf.lines);
    }

    return buf;
}

void examine(struct Tile *tile, bool splitVertical)
{
    struct StringRep *sr = dl_get_sr_at_pos(CURSOR_LINE(tile), tile->cursCol);
    if (!sr){
        return;
    }

    struct Tile *extile = tile_new();
    extile->buf = examine_buffer(sr);

    tile_new_window(extile);
    tile_set_title(extile, "Examine", strlen("Examine"));
    tile_add_default_highlighters(extile);
    extile->input = NULL;

    tile_split(tile, splitVertical ? CONTAINER_SPLIT_VERTICAL : CONTAINER_SPLIT_HORIZONTAL, extile);
    tile_redraw(extile);

}
#endif
