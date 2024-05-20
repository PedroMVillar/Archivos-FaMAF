#include <stdlib.h>  /* EXIT_SUCCESS... */
#include <stdio.h>   /* printf()...     */
#include "pair.h"    /* TAD Par         */

pair_t pair_new(int x, int y){
    pair_t p = {{x, y}};
    return p;
}

int pair_first(pair_t p){
    // PRE: {p --> (x, y)}
    return p.values[0];
}

int pair_second(pair_t p){
    // PRE: {p --> (x, y)}
    return p.values[1];
}

pair_t pair_swapped(pair_t p){
    // PRE: {p --> (x, y)}
    pair_t q = {{p.values[1], p.values[0]}};
    return q;
}

pair_t pair_destroy(pair_t p){
    // Free memory if its necesary
    return p;
}