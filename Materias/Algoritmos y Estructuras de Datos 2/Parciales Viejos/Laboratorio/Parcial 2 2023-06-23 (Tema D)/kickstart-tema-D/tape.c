#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include "tape.h"

struct _s_node {
    tape_elem elem;
    struct _s_node *next;
};

typedef struct _s_node * node_t;

struct _s_tape {
    unsigned int size;
    node_t cursor;  // Puntero al elemento actual
    node_t start;   // Puntero al primer nodo de la cinta
};

static bool invrep(tape_t tape) {
    return /* COMPLETAR */;
}

static node_t create_node(tape_elem e) {
    /* COMPLETAR */
}

static node_t destroy_node(node_t node) {
    /* COMPLETAR */
}

tape_t tape_create(void) {
    tape_t tape=NULL;
    /* COMPLETAR */
    assert(invrep(tape) && tape_is_empty(tape) && tape_at_start(tape));
    return tape;
}

tape_t tape_rewind(tape_t tape) {
    /* COMPLETAR */
}


bool tape_at_start(tape_t tape) {
    /* COMPLETAR */
}

bool tape_at_stop(tape_t tape) {
    /* COMPLETAR */
}

bool tape_is_empty(tape_t tape) {
    /* COMPLETAR */
}

unsigned int tape_length(tape_t tape) {
    /* COMPLETAR */
}

tape_t tape_step(tape_t tape) {
    /* COMPLETAR */
}

tape_t tape_insertl(tape_t tape, tape_elem e) {
    /* COMPLETAR */
}

tape_t tape_insertr(tape_t tape, tape_elem e) {
    assert(invrep(tape) && (!tape_at_stop(tape) || tape_is_empty(tape)));
    node_t new_node=create_node(e);
    if (tape->start!= NULL) {
        new_node->next = tape->cursor->next;
        tape->cursor->next = new_node;
        tape->cursor = new_node;
    } else {
        tape->start = new_node;
        tape->cursor = new_node;
    }
    tape->size++;
    assert(invrep(tape) && !tape_is_empty(tape) && !tape_at_stop(tape) && e == tape_read(tape));
    return tape;
}

tape_t tape_erase(tape_t tape) {
    /* COMPLETAR */
}

tape_elem tape_read(tape_t tape) {
    /* COMPLETAR */
}

void tape_dump(tape_t tape) {
    assert(invrep(tape));
    node_t node=tape->start;
    printf("#");
    while (node != NULL) {
        if (node != tape->cursor) {
            printf("-%c-", node->elem);
        } else {
            printf("-[%c]-", node->elem);
        }
        node = node->next;
    }
    if (tape->cursor==NULL) {
        printf("-[]-");
    }
    printf("#\n");
}

tape_t tape_copy(tape_t tape) {
    /* COMPLETAR */
}

tape_t tape_destroy(tape_t tape) {
    /* COMPLETAR */
}


