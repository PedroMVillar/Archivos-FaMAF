#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
#include "pqueue.h"

struct s_pqueue {
    /* COMPLETAR */
};

struct s_node {
    /* COMPLETAR */
};

static struct s_node * create_node(pqueue_elem e) {
    struct s_node* new_node=NULL;
    assert(new_node!=NULL);
    /* COMPLETAR */
    return new_node;
}

static struct s_node * destroy_node(struct s_node *node) {
    /* COMPLETAR */
    return node;
}


static bool invrep(pqueue q) {
    return true;
}

pqueue pqueue_empty(priority_t min_priority) {
    pqueue q=NULL;
    /*
     * COMPLETAR
     *
     */
    assert(invrep(q) && pqueue_is_empty(q));
    return q;
}

pqueue pqueue_enqueue(pqueue q, pqueue_elem e, priority_t priority) {
    assert(invrep(q));
    /*
     * COMPLETAR
     *
     */
    assert(invrep(q) && !pqueue_is_empty(q));
    return q;
}

bool pqueue_is_empty(pqueue q) {
    assert(invrep(q));
    return true; //BORRAR ESTA LINEA
}

pqueue_elem pqueue_peek(pqueue q) {
    assert(invrep(q) && !pqueue_is_empty(q));
    return true; // BORRAR ESTA LINEA
}

priority_t pqueue_peek_priority(pqueue q) {
    assert(invrep(q) && !pqueue_is_empty(q));
    return true; // BORRAR ESTA LINEA
}

size_t pqueue_size(pqueue q) {
    assert(invrep(q));
    return 0u; // BORRAR ESTA LINEA
}

pqueue pqueue_dequeue(pqueue q) {
    assert(invrep(q) && !pqueue_is_empty(q));
    /* COMPLETAR */
    assert(invrep(q));
    return q;
}

pqueue pqueue_destroy(pqueue q) {
    assert(invrep(q));
    /* COMPLETAR*/
    return q;
}

