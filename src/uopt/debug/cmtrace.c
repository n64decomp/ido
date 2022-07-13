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

Vec(struct PrecmData *) *sPrecmData;
Vec(struct CmData *) *sCmData;
Vec(struct ScmData *) *sScmData;

void cmtrace_trace_all_precm()
{
    bool changedNode = true;
    for (struct Statement *stat = graphhead->stat_head; stat != NULL; stat = stat->next) {
        if (changedNode) {
            cmtrace_copy_precm(stat->graphnode);
            changedNode = false;
        }

        if (stat->next != NULL && stat->graphnode != stat->next->graphnode) {
            changedNode = true;
        }
    }
}

void cmtrace_trace_all_cm()
{
    bool changedNode = true;
    for (struct Statement *stat = graphhead->stat_head; stat != NULL; stat = stat->next) {
        if (changedNode) {
            cmtrace_copy_cm(stat->graphnode);
            changedNode = false;
        }

        if (stat->next != NULL && stat->graphnode != stat->next->graphnode) {
            changedNode = true;
        }
    }
}

void cmtrace_trace_all_scm()
{
    bool changedNode = true;
    for (struct Statement *stat = graphhead->stat_head; stat != NULL; stat = stat->next) {
        if (changedNode) {
            cmtrace_copy_scm(stat->graphnode);
            changedNode = false;
        }

        if (stat->next != NULL && stat->graphnode != stat->next->graphnode) {
            changedNode = true;
        }
    }
}

void cmtrace_copy_precm(struct Graphnode *node)
{
    if (sPrecmData == NULL) {
        sPrecmData = vec_new();
    }

    struct PrecmData *data = calloc(1, sizeof (struct PrecmData));

    data->node = node;
    checkbvlist(&data->indiracc);
    checkbvlist(&data->antlocs);
    checkbvlist(&data->alters);
    checkbvlist(&data->avlocs);
    checkbvlist(&data->absalters);
    checkbvlist(&data->pavlocs);
    checkbvlist(&data->expoccur);
    checkbvlist(&data->iv);
    checkbvlist(&data->cand);
    checkbvlist(&data->avin);
    checkbvlist(&data->avout);
    checkbvlist(&data->antin);
    checkbvlist(&data->antout);
    checkbvlist(&data->pavin);
    checkbvlist(&data->pavout);

    bvectcopy(&data->indiracc, &node->indiracc);
    bvectcopy(&data->antlocs, &node->bvs.stage1.antlocs);
    bvectcopy(&data->alters, &node->bvs.stage1.alters);
    bvectcopy(&data->avlocs, &node->bvs.stage1.avlocs);
    bvectcopy(&data->absalters, &node->bvs.stage1.absalters);
    bvectcopy(&data->pavlocs, &node->bvs.stage1.u.precm.pavlocs);
    bvectcopy(&data->expoccur, &node->bvs.stage1.u.precm.expoccur);
    bvectcopy(&data->iv, &node->bvs.stage1.u.cm.iv);
    bvectcopy(&data->cand, &node->bvs.stage1.u.cm.cand);
    bvectcopy(&data->avin, &node->bvs.stage1.u.precm.avin);
    bvectcopy(&data->avout, &node->bvs.stage1.u.precm.avout);
    bvectcopy(&data->antin, &node->bvs.stage1.u.precm.antin);
    bvectcopy(&data->antout, &node->bvs.stage1.u.precm.antout);
    bvectcopy(&data->pavin, &node->bvs.stage1.u.precm.pavin);
    bvectcopy(&data->pavout, &node->bvs.stage1.u.precm.pavout);

    vec_add(sPrecmData, data);
}
void cmtrace_copy_cm(struct Graphnode *node)
{
    if (sCmData == NULL) {
        sCmData = vec_new();
    }

    struct CmData *data = calloc(1, sizeof (struct CmData));

    data->node = node;
    
    checkbvlist(&data->antlocs);
    checkbvlist(&data->alters);
    checkbvlist(&data->avlocs);
    checkbvlist(&data->absalters);

    checkbvlist(&data->delete);
    checkbvlist(&data->ppin);
    /* 
    checkbvlist(&data->iv);
    checkbvlist(&data->cand);
     */
    checkbvlist(&data->subdelete);
    checkbvlist(&data->subinsert);
    
    checkbvlist(&data->antin);
    checkbvlist(&data->antout);

    checkbvlist(&data->insert);
    checkbvlist(&data->ppout);

    
    bvectcopy(&data->antlocs, &node->bvs.stage1.antlocs);
    bvectcopy(&data->alters, &node->bvs.stage1.alters);
    bvectcopy(&data->avlocs, &node->bvs.stage1.avlocs);
    bvectcopy(&data->absalters, &node->bvs.stage1.absalters);

    bvectcopy(&data->delete, &node->bvs.stage1.u.cm.delete);
    bvectcopy(&data->ppin, &node->bvs.stage1.u.cm.ppin);
    /* 
    bvectcopy(&data->iv, &node->bvs.stage1.u.cm.iv);
    bvectcopy(&data->cand, &node->bvs.stage1.u.cm.cand);
     */
    bvectcopy(&data->subdelete, &node->bvs.stage1.u.cm.subdelete);
    bvectcopy(&data->subinsert, &node->bvs.stage1.u.cm.subinsert);
    
    bvectcopy(&data->antin, &node->bvs.stage1.u.cm.antin);
    bvectcopy(&data->antout, &node->bvs.stage1.u.cm.antout);

    bvectcopy(&data->insert, &node->bvs.stage1.u.cm.insert);
    bvectcopy(&data->ppout, &node->bvs.stage1.u.cm.ppout);

    vec_add(sCmData, data);
}

void cmtrace_copy_scm(struct Graphnode *node)
{
    if (sScmData == NULL) {
        sScmData = vec_new();
    }

    struct ScmData *data = calloc(1, sizeof (struct ScmData));

    data->node = node;
    
    checkbvlist(&data->antlocs);
    checkbvlist(&data->alters);
    checkbvlist(&data->avlocs);
    checkbvlist(&data->absalters);

    checkbvlist(&data->delete);
    checkbvlist(&data->ppin);
    checkbvlist(&data->sink);
    checkbvlist(&data->cand);
    checkbvlist(&data->subdelete);
    checkbvlist(&data->subinsert);
    checkbvlist(&data->source);
    checkbvlist(&data->region);
    checkbvlist(&data->insert);
    checkbvlist(&data->ppout);

    
    bvectcopy(&data->antlocs, &node->bvs.stage1.antlocs);
    bvectcopy(&data->alters, &node->bvs.stage1.alters);
    bvectcopy(&data->avlocs, &node->bvs.stage1.avlocs);
    bvectcopy(&data->absalters, &node->bvs.stage1.absalters);

    bvectcopy(&data->delete, &node->bvs.stage1.u.cm.delete);
    bvectcopy(&data->ppin, &node->bvs.stage1.u.cm.ppin);
    bvectcopy(&data->sink, &node->bvs.stage1.u.scm.sink);
    bvectcopy(&data->cand, &node->bvs.stage1.u.cm.cand);
    bvectcopy(&data->subdelete, &node->bvs.stage1.u.cm.subdelete);
    bvectcopy(&data->subinsert, &node->bvs.stage1.u.cm.subinsert);
    bvectcopy(&data->source, &node->bvs.stage1.u.scm.source);
    bvectcopy(&data->region, &node->bvs.stage1.u.scm.region);
    bvectcopy(&data->insert, &node->bvs.stage1.u.cm.insert);
    bvectcopy(&data->ppout, &node->bvs.stage1.u.cm.ppout);

    vec_add(sScmData, data);
}

void cmtrace_clear()
{
    for (int i = 0; i < sPrecmData->length; i++) {
        free(sPrecmData->items[i]);
    }
    for (int i = 0; i < sCmData->length; i++) {
        free(sCmData->items[i]);
    }
    vec_free(sPrecmData);
    vec_free(sCmData);

    sPrecmData = NULL;
    sCmData = NULL;
}

struct LineBuffer build_precm_buffer()
{
    struct LineBuffer buf = {0};
    buf.lines = vec_new();

    if (sPrecmData == NULL || sPrecmData->length == 0) {
        vec_add(buf.lines, dl_placeholder("No precm data collected"));
    } else {
        for (int i = 0; i < sPrecmData->length; i++) {
            vec_add(buf.lines, dl_from_graphnode(sPrecmData->items[i]->node, true));

            vec_add(buf.lines, dl_from_bitvector(&sPrecmData->items[i]->indiracc, " indiracc"));
            vec_add(buf.lines, dl_from_bitvector(&sPrecmData->items[i]->antlocs, "  antlocs"));
            vec_add(buf.lines, dl_from_bitvector(&sPrecmData->items[i]->avlocs, "   avlocs"));
            vec_add(buf.lines, dl_from_bitvector(&sPrecmData->items[i]->alters, "   alters"));
            vec_add(buf.lines, dl_from_bitvector(&sPrecmData->items[i]->pavlocs, "  pavlocs"));
            vec_add(buf.lines, dl_from_bitvector(&sPrecmData->items[i]->absalters, "absalters"));
            vec_add(buf.lines, dl_from_bitvector(&sPrecmData->items[i]->expoccur, " expoccur"));
            vec_add(buf.lines, dl_from_bitvector(&sPrecmData->items[i]->iv, "       iv"));
            vec_add(buf.lines, dl_from_bitvector(&sPrecmData->items[i]->cand, "     cand"));
            vec_add(buf.lines, dl_from_bitvector(&sPrecmData->items[i]->avin, "     avin"));
            vec_add(buf.lines, dl_from_bitvector(&sPrecmData->items[i]->avout, "    avout"));
            vec_add(buf.lines, dl_from_bitvector(&sPrecmData->items[i]->antin, "    antin"));
            vec_add(buf.lines, dl_from_bitvector(&sPrecmData->items[i]->antout, "   antout"));
            vec_add(buf.lines, dl_from_bitvector(&sPrecmData->items[i]->pavin, "    pavin"));
            vec_add(buf.lines, dl_from_bitvector(&sPrecmData->items[i]->pavout, "   pavout"));
        }
    }

    return buf;
}

struct LineBuffer build_cm_buffer()
{
    struct LineBuffer buf = {0};
    buf.lines = vec_new();

    if (sCmData == NULL || sCmData->length == 0) {
        vec_add(buf.lines, dl_placeholder("No cm data traced"));
    } else {
        for (int i = 0; i < sCmData->length; i++) {
            vec_add(buf.lines, dl_from_graphnode(sCmData->items[i]->node, true));

            
            vec_add(buf.lines, dl_from_bitvector(&sCmData->items[i]->antlocs, "  antlocs"));
            vec_add(buf.lines, dl_from_bitvector(&sCmData->items[i]->avlocs, "   avlocs"));
            vec_add(buf.lines, dl_from_bitvector(&sCmData->items[i]->alters, "   alters"));
            vec_add(buf.lines, dl_from_bitvector(&sCmData->items[i]->absalters, "absalters"));
            
            vec_add(buf.lines, dl_from_bitvector(&sCmData->items[i]->antin, "    antin"));
            vec_add(buf.lines, dl_from_bitvector(&sCmData->items[i]->antout, "   antout"));

            /* 
            vec_add(buf.lines, dl_from_bitvector(&sCmData->items[i]->iv, "       iv"));
            vec_add(buf.lines, dl_from_bitvector(&sCmData->items[i]->cand, "     cand"));
             */

            vec_add(buf.lines, dl_from_bitvector(&sCmData->items[i]->ppin, "     ppin"));
            vec_add(buf.lines, dl_from_bitvector(&sCmData->items[i]->ppout, "    ppout"));

            vec_add(buf.lines, dl_from_bitvector(&sCmData->items[i]->insert, "   insert"));
            vec_add(buf.lines, dl_from_bitvector(&sCmData->items[i]->delete, "   delete"));
            vec_add(buf.lines, dl_from_bitvector(&sCmData->items[i]->subinsert, "subinsert"));
            vec_add(buf.lines, dl_from_bitvector(&sCmData->items[i]->subdelete, "subdelete"));

        }
    }

    return buf;
}

struct LineBuffer build_scm_buffer()
{
    struct LineBuffer buf = {0};
    buf.lines = vec_new();

    if (sScmData == NULL || sScmData->length == 0) {
        vec_add(buf.lines, dl_placeholder("No scm data traced"));
    } else {
        for (int i = 0; i < sScmData->length; i++) {
            vec_add(buf.lines, dl_from_graphnode(sScmData->items[i]->node, true));

            vec_add(buf.lines, dl_from_bitvector(&sScmData->items[i]->antlocs, "  antlocs"));
            vec_add(buf.lines, dl_from_bitvector(&sScmData->items[i]->avlocs, "   avlocs"));
            vec_add(buf.lines, dl_from_bitvector(&sScmData->items[i]->alters, "   alters"));
            vec_add(buf.lines, dl_from_bitvector(&sScmData->items[i]->absalters, "absalters"));

            vec_add(buf.lines, dl_from_bitvector(&sScmData->items[i]->cand, "     cand"));

            vec_add(buf.lines, dl_from_bitvector(&sScmData->items[i]->ppin, "     ppin"));
            vec_add(buf.lines, dl_from_bitvector(&sScmData->items[i]->ppout, "    ppout"));

            vec_add(buf.lines, dl_from_bitvector(&sScmData->items[i]->insert, "   insert"));
            vec_add(buf.lines, dl_from_bitvector(&sScmData->items[i]->delete, "   delete"));
            vec_add(buf.lines, dl_from_bitvector(&sScmData->items[i]->subinsert, "subinsert"));
            vec_add(buf.lines, dl_from_bitvector(&sScmData->items[i]->subdelete, "subdelete"));

            vec_add(buf.lines, dl_from_bitvector(&sScmData->items[i]->source, "   source"));
            vec_add(buf.lines, dl_from_bitvector(&sScmData->items[i]->region, "   region"));
            vec_add(buf.lines, dl_from_bitvector(&sScmData->items[i]->sink, "     sink"));

        }
    }

    return buf;
}
#endif
