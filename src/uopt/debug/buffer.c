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

/* Store the string representation of the statements in a buffer of DisplayLines.
 *
 * Each line stores the string representation of an entire statement/graphnode/thing
 * as well as a tree of StringRep nodes which correspond to ranges inside the string:
 *
 *          STR 100 + -0x4($sp), -0x8($sp)   The DisplayLine itself
 *          ^----------------------------^   StringRep for entire Statement ("top")
 *              ^-------------^              top->children[0]
 *              ^-^                          top->children[0]->children[0]
 *                    ^-------^              top->children[0]->chlidren[1]
 *                               ^-------^   top->chilrden[1]
 *      
 * This allows us to just inorder traverse, checking the corresponding uopt structs, using mvwchgat() to update highlights.
 * 
 * TODO: it's probably fine to just reprint the highlighted part?
 *  - maybe a tmp file would work better
 */
struct LineBuffer build_proc_buffer()
{
    struct DisplayLine **dlines;
    struct Statement *stat = graphhead->stat_head;
    int numStatements = 0;
    int numNodes = 1; // 1 for graphhead

    while (stat != NULL) {
        numStatements++;
        if (stat->next != NULL && stat->graphnode != stat->next->graphnode) {
            numNodes++;
        }
        stat = stat->next;
    }

    int numLines = numNodes + numStatements;

    dlines = calloc(numLines, sizeof (struct DisplayLine *));

    int i = 0;

    stat = graphhead->stat_head;
    bool changedNode = true;
    while (stat != NULL) {
        if (changedNode) {
            dlines[i] = dl_from_graphnode(i, stat->graphnode, true);
            i++;
            changedNode = false;
        }

        dlines[i] = dl_from_statement(i, stat);
        i++;
        if (stat->next != NULL && stat->graphnode != stat->next->graphnode) {
            changedNode = true;
        }
        stat = stat->next;
    }

    return (struct LineBuffer) {.numLines = numLines, .lines = dlines};
}

struct LineBuffer build_var_access_buffer()
{
    struct DisplayLine **dlines;
    struct Statement *stat;
    int numAccesses = 0;
    int numNodes = 1; // 1 for graphhead
    bool changedNode = true;

    stat = graphhead->stat_head;
    while (stat != NULL) {
        if (changedNode) {
            for (struct VarAccessList *access = stat->graphnode->varlisthead; access != NULL; access = access->next) {
                if (access->type != 0) {
                    numAccesses++;
                }
            }
            changedNode = false;
        }

        if (stat->next != NULL && stat->graphnode != stat->next->graphnode) {
            numNodes++;
            changedNode = true;
        }
        stat = stat->next;
    }

    int numLines = numNodes + numAccesses;

    dlines = calloc(numLines, sizeof (struct DisplayLine *));

    int i = 0;

    stat = graphhead->stat_head;
    changedNode = true;
    while (stat != NULL) {
        if (changedNode) {
            dlines[i] = dl_from_graphnode(i, stat->graphnode, false);
            i++;
            for (struct VarAccessList *access = stat->graphnode->varlisthead; access != NULL; access = access->next) {
                if (access->type != 0) {
                    dlines[i] = dl_from_var_access(i, access);
                    i++;
                }
            }
            changedNode = false;
        }

        if (stat->next != NULL && stat->graphnode != stat->next->graphnode) {
            changedNode = true;
        }
        stat = stat->next;
    }

    return (struct LineBuffer) {.numLines = numLines, .lines = dlines};
}

struct LineBuffer build_ichain_buffer()
{
    int numLines = bitposcount;
    struct DisplayLine **lines = calloc(numLines, sizeof (struct DisplayLine));

    if (numLines == 0) {
        numLines = 1;
        lines[0] = dl_placeholder(0, "No IChains created");
    } else {
        for (int i = 0; i < bitposcount; i++) {
            lines[i] = dl_from_bittab_ichain(i, bittab[i].ichain);
        }
    }

    return (struct LineBuffer) {.numLines = numLines, .lines = lines};
}

struct LineBuffer build_liverange_buffer()
{
    int numLines = 0;
    for (int i = 0; i < bitposcount; i++) {
        if (bittab[i].liverange != NULL) {
            numLines++;
        }
    }

    struct DisplayLine **lines;
    if (numLines == 0) {
        numLines = 1;
        lines = calloc(numLines, sizeof (struct DisplayLine));
        lines[0] = dl_placeholder(0, "No liveranges created");
    } else {
        lines = calloc(numLines, sizeof (struct DisplayLine));
        int curLine = 0;
        for (int i = 0; i < bitposcount; i++) {
            if (bittab[i].liverange != NULL) {
                lines[curLine] = dl_from_bittab_liverange(curLine, bittab[i].liverange);
                curLine++;
            }
        }
    }

    return (struct LineBuffer) {.numLines = numLines, .lines = lines};
}

void linebuffer_free(struct LineBuffer dbg)
{
    for (int i = 0; i < dbg.numLines; i++) {
        dl_free(dbg.lines[i]);
    }

    free(dbg.lines);
}


#endif
