/*
  @file sort.c
  @brief sort functions implementation
*/

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include "helpers.h"
#include "sort.h"
#include "player.h"

bool goes_before(player_t x, player_t y){
    return(x->rank <= y->rank);
}

bool array_is_sorted(player_t atp[], unsigned int length) {
    unsigned int i = 1u;
    while (i < length && goes_before(atp[i - 1u], atp[i])) {
        i++;
    }
    return (i == length);
}

void sort(player_t a[], unsigned int length) {
    unsigned int i, j, min;
    player_t tmp;
    for (i = 0u; i < length - 1u; i++) {
        min = i;
        for (j = i + 1u; j < length; j++) {
            if (!goes_before(a[min], a[j])) {
                min = j;
            }
        }
        if (min != i) {
            tmp = a[i];
            a[i] = a[min];
            a[min] = tmp;
        }
    }
}