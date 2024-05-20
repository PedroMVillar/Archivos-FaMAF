#include "pair.h"
#include <stdlib.h>
#include <assert.h>

pair_t pair_new(int x, int y){
    pair_t p = malloc(sizeof(struct s_pair_t));
    p->fst = x;
    p->snd = y;
    return p;
}

int pair_first(pair_t p){
    // PRE: {p --> (x, y)}
    assert(p != NULL);
    return p->fst;
}

int pair_second(pair_t p){
    // PRE: {p --> (x, y)}
    assert(p != NULL);
    return p->snd;
}

pair_t pair_swapped(pair_t p){
    // PRE: {p --> (x, y)}
    assert(p != NULL);
    pair_t q = malloc(sizeof(struct s_pair_t));
    q->fst = p->snd;
    q->snd = p->fst;
    return q;
}

pair_t pair_destroy(pair_t p){
    free(p);
    return NULL;
}