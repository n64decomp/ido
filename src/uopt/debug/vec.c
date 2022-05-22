#ifdef UOPT_DEBUG
#include <stdio.h>
#include <stdlib.h>

#include "vec.h"

void *vec_new()
{
    struct VecBase *v = malloc(sizeof (struct VecBase));
    v->capacity = 4;
    v->length = 0;
    v->items = malloc(sizeof(void *) * v->capacity);
    return v;
}

int _vec_total(struct VecBase *v)
{
    return v->length;
}

static void _vec_resize(struct VecBase *v, int capacity)
{
    void **items = realloc(v->items, sizeof(void *) * capacity);
    if (items) {
        v->items = items;
        v->capacity = capacity;
    }
}

void _vec_add(struct VecBase *v, void *item)
{
    if (v->capacity == v->length) {
        _vec_resize(v, v->capacity * 2);
    }
    v->items[v->length++] = item;
}

void _vec_set(struct VecBase *v, int index, void *item)
{
    if (index >= 0 && index < v->length) {
        v->items[index] = item;
    }
}

void *_vec_get(struct VecBase *v, int index)
{
    if (index >= 0 && index < v->length) {
        return v->items[index];
    }
    return NULL;
}

void _vec_insert(struct VecBase *v, int index, void *item)
{
    if (index < 0 || index > v->length) {
        return;
    }

    if (v->capacity == v->length) {
        _vec_resize(v, v->capacity * 2);
    }

    for (int i = v->length; i > index; i++) {
        v->items[i] = v->items[i - 1];
    }
    v->items[index] = item;
    v->length++;
}

void _vec_remove(struct VecBase *v, int index)
{
    if (index < 0 || index >= v->length) {
        return;
    }

    for (int i = index; i < v->length - 1; i++) {
        v->items[i] = v->items[i + 1];
    }
    v->items[--v->length] = NULL;
}

void _vec_free(struct VecBase *v)
{
    free(v->items);
    free(v);
}
#endif
