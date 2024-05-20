#include "pair.h"
#include <stdio.h>
#include <assert.h>

pair_t pair_new(int x, int y){
    pair_t p = {x, y};
    return p;
}

int pair_first(pair_t p){
    // PRE: {p --> (x, y)}
    return p.fst;
}

int pair_second(pair_t p){
    // PRE: {p --> (x, y)}
    return p.snd;
}

pair_t pair_swapped(pair_t p){
    // PRE: {p --> (x, y)}
    pair_t q = {p.snd, p.fst};
    return q;
}

pair_t pair_destroy(pair_t p){
    // Free memory if its necesary
    return p;
}