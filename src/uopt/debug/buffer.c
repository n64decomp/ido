#ifdef UOPT_DEBUG
#include <ncurses.h>

#include "libu/libu.h"
#include "uopt/uoptdata.h"
#include "uopt/uoptutil.h"
#include "uopt/uoptreg2.h"
#include "uopt/uoptkill.h"
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>

#include "debug.h"

/* Store the string representation of the statements in a buffer of DisplayLines.
 *
 * Each line stores the string representation of an entire statement/graphnode/thing
 * as well as a tree of StringRep nodes which correspond to ranges inside the string:
 *
 *          str local08 = 100 + local04   The DisplayLine itself
 *          ^-------------------------^   StringRep for entire Statement ("top")
 *              ^-----^                   top->chilrden[0]
 *                        ^-----------^   top->children[1]
 *                        ^-^             top->children[1]->children[0]
 *                              ^-----^   top->children[1]->chlidren[1]
 *
 * Highlighting is done by a preorder traversal that stops and calls mvwchgat when a condition is met.
 * ncurses maintains the character attributes, even when scrolled off screen.
 *
 * TODO: DisplayLine isn't exactly necessary right now, but will be used for searching
 */
struct LineBuffer build_proc_buffer()
{
    struct LineBuffer buf = {0};
    buf.lines = vec_new();

    bool changedNode = true;
    for (struct Statement *stat = graphhead->stat_head; stat != NULL; stat = stat->next) {
        if (changedNode) {
            vec_add(buf.lines, dl_from_graphnode(stat->graphnode, true));
            changedNode = false;
        }

        vec_add(buf.lines, dl_from_statement(stat));
        if (stat->next != NULL && stat->graphnode != stat->next->graphnode) {
            changedNode = true;
        }
    }

    buf.numLines = buf.lines->length;
    return buf;
}

/* Sort LiveRanges in roughly the order that they were allocated to registers */
int lda_cmp(const void *_a, const void *_b)
{
    const struct LdatabEntry *a = *(void **)_a;
    const struct LdatabEntry *b = *(void **)_b;
    if (a->var.memtype < b->var.memtype) {
        return -1;
    }
    if (a->var.memtype > b->var.memtype) {
        return 1;
    }
    if (a->var.blockno < b->var.blockno) {
        return -1;
    }
    if (a->var.blockno > b->var.blockno) {
        return 1;
    }
    if (overlapping(a->var, b->var, a->size, b->size)) {
        return 0;
    }
    return a->var.addr < b->var.addr ? -1 : 1;
}

// get the lda-only variables, sort them in order, return the vector of ldas
// TODO: sometimes local variables are only accessed by address, (struct
// copies, dummy variables passed by address, etc). They don't get added to the
// Variable tree, so they don't appear in the stack display.
__attribute__((unused)) static void *find_lda_variables() {
    Vec(struct LdatabEntry *) *ldas = vec_new();
    for (int i = 0; i < 3113; i++) {
        struct LdatabEntry *entry = ldatab[i];
        while (entry != NULL) {
            vec_add(ldas, entry);
            entry = entry->next;
        }
    }
    qsort(ldas->items, ldas->length, sizeof(struct LdatabEntry *), lda_cmp);
    return ldas;
}

static bool inorder_print_vartree(struct Variable *tree, void *lines, enum Memtype mtype, bool reverse, bool found, char *section)
{
    if (tree == NULL) return found;
    struct Variable *left = reverse ? tree->right : tree->left;
    struct Variable *right = reverse ? tree->left : tree->right;

    found = inorder_print_vartree(left, lines, mtype, reverse, found, section);

    if (tree->location.memtype == mtype) {
        if (!found) {
            vec_add(lines, dl_placeholder(section));
            found = true;
        }
        vec_add(lines, dl_from_variable(tree));
    }

    return inorder_print_vartree(right, lines, mtype, reverse, found, section);
}

struct LineBuffer build_stack_buffer()
{
    struct LineBuffer buf = {0};
    buf.lines = vec_new();

    inorder_print_vartree(curproc->vartree, buf.lines, Pmt, true, false, "Arguments");
    inorder_print_vartree(curproc->vartree, buf.lines, Mmt, true, false, "Local Variables");

    /* TODO: ldatab is freed after prepass(), so this just prints garbage.
     * Commenting out the alloc_release() allows the ldas to be analyzed here
     * but seems like a bad solution.
     */
#if 0
    Vec(struct LdatabEntry *) *ldas = find_lda_variables();
    if (ldas->length > 0) {
        vec_add(buf.lines, dl_placeholder("Ldas"));

        for (int i = 0; i < ldas->length; i++) {
            vec_add(buf.lines, dl_from_ldatab(ldas->items[i]));
        }
    }
    vec_free(ldas);
#endif

    if (templochead != NULL) {
        vec_add(buf.lines, dl_placeholder("Templocs"));

        for (struct Temploc *temp = templochead; temp != NULL; temp = temp->next) {
            vec_add(buf.lines, dl_from_temploc(temp));
        }
    }

    vec_add(buf.lines, dl_new_printf("highestmdef %d", highestmdef));
    vec_add(buf.lines, dl_new_printf("tempdisp %d", tempdisp));


    if (buf.lines->length == 0) {
        vec_add(buf.lines, dl_placeholder("No local variables"));
    }
    buf.numLines = buf.lines->length;
    return buf;
}

struct LineBuffer build_reg_assignment_buffer()
{
    struct LineBuffer buf = {0};
    buf.lines = vec_new();

    bool changedNode = true;
    for (struct Statement *stat = graphhead->stat_head; stat != NULL; stat = stat->next) {
        if (changedNode) {
            vec_add(buf.lines, dl_from_graphnode(stat->graphnode, false));

            for (int reg = 1; reg <= 35; reg++) {
                if (stat->graphnode->regdata.unk44[reg - 1] != NULL) {
                    vec_add(buf.lines, dl_from_reg_assignment(reg, stat->graphnode->regdata.unk44[reg - 1]));
                }
            }

            changedNode = false;
        }

        if (stat->next != NULL && stat->graphnode != stat->next->graphnode) {
            changedNode = true;
        }
    }

    buf.numLines = buf.lines->length;
    return buf;
}

struct LineBuffer build_var_access_buffer()
{
    struct LineBuffer buf = {0};
    buf.lines = vec_new();

    bool changedNode = true;
    for (struct Statement *stat = graphhead->stat_head; stat != NULL; stat = stat->next) {
        if (changedNode) {
            vec_add(buf.lines, dl_from_graphnode(stat->graphnode, false));
            for (struct VarAccessList *access = stat->graphnode->varlisthead; access != NULL; access = access->next) {
                if (access->type != 0) {
                    vec_add(buf.lines, dl_from_var_access(access));
                }
            }
            changedNode = false;
        }

        if (stat->next != NULL && stat->graphnode != stat->next->graphnode) {
            changedNode = true;
        }
    }

    buf.numLines = buf.lines->length;
    return buf;
}

struct LineBuffer build_ichain_buffer()
{
    struct LineBuffer buf = {0};
    buf.lines = vec_new();

    if (bitposcount == 0) {
        vec_add(buf.lines, dl_placeholder("No IChains created"));
    } else {
        for (int i = 0; i < bitposcount; i++) {
            if (i == firstconstbit && i > 0) {
                vec_add(buf.lines, dl_new_printf("Constants"));
            }
            vec_add(buf.lines, dl_from_bittab_ichain(i, bittab[i].ichain));
        }
    }

    buf.numLines = buf.lines->length;
    return buf;
}

struct LineBuffer build_bitvect_buffer()
{
    struct LineBuffer buf = {0};
    buf.lines = vec_new();

    vec_add(buf.lines, dl_from_bitvector(&varbits, "varbits"));
    vec_add(buf.lines, dl_from_bitvector(&mvarbits, "mvarbits"));
    vec_add(buf.lines, dl_from_bitvector(&fsymbits, "fsymbits"));
    vec_add(buf.lines, dl_from_bitvector(&asgnbits, "asgnbits"));
    vec_add(buf.lines, dl_from_bitvector(&slvarbits, "slvarbits"));
    vec_add(buf.lines, dl_from_bitvector(&slasgnbits, "slasgnbits"));
    vec_add(buf.lines, dl_from_bitvector(&storeop, "storeop"));
    vec_add(buf.lines, dl_from_bitvector(&trapop, "trapop"));
    vec_add(buf.lines, dl_from_bitvector(&trapconstop, "trapconstop"));
    vec_add(buf.lines, dl_from_bitvector(&indmults, "indmults"));
    vec_add(buf.lines, dl_from_bitvector(&boolexp, "boolexp"));
    vec_add(buf.lines, dl_from_bitvector(&savedexp, "savedexp"));
    vec_add(buf.lines, dl_from_bitvector(&trepexp, "trepexp"));
    vec_add(buf.lines, dl_from_bitvector(&used_trepexp, "used_trepexp"));
    vec_add(buf.lines, dl_from_bitvector(&outmodebits, "outmodebits"));
    vec_add(buf.lines, dl_from_bitvector(&notinmodebits, "notinmodebits"));
    vec_add(buf.lines, dl_from_bitvector(&varfactor_muls, "varfactor_muls"));
    vec_add(buf.lines, dl_from_bitvector(&coloreditems, "coloreditems"));
    vec_add(buf.lines, dl_from_bitvector(&vareqv, "vareqv"));
    vec_add(buf.lines, dl_from_bitvector(&asgneqv, "asgneqv"));
    vec_add(buf.lines, dl_from_bitvector(&coloredparms, "coloredparms"));
    vec_add(buf.lines, dl_from_bitvector(&iscolored12, "iscolored12"));
    vec_add(buf.lines, dl_from_bitvector(&iscolored[0], "iscolored[0]"));
    vec_add(buf.lines, dl_from_bitvector(&iscolored[1], "iscolored[1]"));
    vec_add(buf.lines, dl_from_bitvector(&old, "old"));
    vec_add(buf.lines, dl_from_bitvector(&workbvect, "workbvect"));

    buf.numLines = buf.lines->length;
    return buf;
}

struct LineBuffer build_ucode_input_buffer()
{
    struct LineBuffer buf = {0};
    buf.lines = vec_new();

    if (gUcodeInput == NULL) {
        vec_add(buf.lines, dl_placeholder("No input read"));
    } else {
        for (int i = 0; i < gUcodeInput->out->length; i++) {
            vec_add(buf.lines, dl_from_ucode(gUcodeInput->out->items[i]));
        }
    }

    buf.numLines = buf.lines->length;
    return buf;
}

struct LineBuffer build_ucode_output_buffer()
{
    struct LineBuffer buf = {0};
    buf.lines = vec_new();

    if (gOutput == NULL) {
        vec_add(buf.lines, dl_placeholder("No output emitted"));
    } else {
        for (struct StatOutput *o = gOutput; o != NULL; o = o->next) {
            if (o->type == STATEMENT) {
                vec_add(buf.lines, dl_from_statement(o->data));
            } else if (o->type == GRAPHNODE) {
                vec_add(buf.lines, dl_from_graphnode(o->data, false));
            }

            for (int i = 0; i < o->out->length; i++) {
                switch (o->out->items[i]->type) {
                    case INFO: {
                        vec_add(buf.lines, dl_new_printf("%*c%s", o->out->items[i]->indent, ' ', o->out->items[i]->message));
                        buf.lines->items[buf.lines->length - 1]->top->message = o->out->items[i]->message;
                    }
                    break;

                    case UCODE:
                        vec_add(buf.lines, dl_from_ucode(&o->out->items[i]->bcode));
                        break;

                    default:
                        break;
                }
            }
        }
    }

    buf.numLines = buf.lines->length;
    return buf;
}

/* Sort LiveRanges in roughly the order that they were allocated to registers */
int liverange_cmp(const void *_a, const void *_b)
{
    const struct LiveRange *a = *(void **)_a;
    const struct LiveRange *b = *(void **)_b;

    if (a->assigned_reg > 0  && b->assigned_reg == 0) return -1;
    if (a->assigned_reg == 0 && b->assigned_reg > 0) return 1;

    if (a->adjsave > b->adjsave) return -1;
    else if (a->adjsave < b->adjsave) return 1;
    else return a->bitpos - b->bitpos;
}

struct LineBuffer build_liverange_buffer()
{
    struct LineBuffer buf = {0};
    Vec(struct LiveRange *) *liveranges = vec_new();
    buf.lines = vec_new();

    for (int i = 0; i < bitposcount; i++)
    {
        if (bittab[i].liverange != NULL) {
            vec_add(liveranges, bittab[i].liverange);
        }
    }

    qsort(liveranges->items, liveranges->length, sizeof(struct LiveRange *), liverange_cmp);

    for (int i = 0; i < liveranges->length; i++) {
        vec_add(buf.lines, dl_from_bittab_liverange(liveranges->items[i]->bitpos, liveranges->items[i]));
    }

    vec_free(liveranges);

    if (buf.lines->length == 0) {
        vec_add(buf.lines, dl_placeholder("No liveranges created"));
    }

    buf.numLines = buf.lines->length;
    return buf;
}

void linebuffer_free(struct LineBuffer dbg)
{
    for (int i = 0; i < dbg.numLines; i++) {
        dl_free(dbg.lines->items[i]);
    }

    vec_free(dbg.lines);
}
#endif
