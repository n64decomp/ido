#pragma once

// generic vector
struct VecBase {
    void **items;
    int length;
    int capacity;
};

// type should be a pointer type
#define Vec(type)     \
    struct {          \
        type *items;  \
        int length;   \
        int capacity; \
    }

void *vec_new();
int _vec_total(struct VecBase *v);
void _vec_add(struct VecBase *v, void *item);
void _vec_set(struct VecBase *v, int index, void *item);
void *_vec_get(struct VecBase *v, int index);
void _vec_insert(struct VecBase *v, int index, void *item);
void _vec_remove(struct VecBase *v, int index);
void _vec_free(struct VecBase *v);

#define vec_add(vec, item) _vec_add((void*)vec, item)
#define vec_set(vec, index, item) _vec_set((void*)vec, index, item)
#define vec_get(vec, index) _vec_get((void*)vec, index)
#define vec_insert(vec, index, item) _vec_insert((void*)vec, index, item)
#define vec_remove(vec, index) _vec_remove((void*)vec, index)
#define vec_total(vec) _vec_total((void*)vec)
#define vec_free(vec) _vec_free((void*)vec)

