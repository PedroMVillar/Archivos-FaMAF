#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
#include "pstack.h"

struct s_pstack {
    /*
     * COMPLETAR
     *
     */
};

struct s_node {
    /*
     * COMPLETAR
     *
     */
};

static struct s_node * create_node(pstack_elem e, priority_t priority) {
    struct s_node *new_node = NULL;
    // Completar
    assert(new_node!=NULL);
    /*
     * COMPLETAR
     */
    assert(e==e && priority == priority); // BORRAR ESTE ASSERT
    return new_node;
}

static struct s_node * destroy_node(struct s_node *node) {
    assert(node != NULL);
    /*
     * COMPLETAR
     *
     */
    assert(node == NULL);
    return node;
}


static bool invrep(pstack s) {
    /*
     * COMPLETAR
     *
     */
    assert(s==s); // BORRAR ESTE ASSERT
    return true;
}

pstack pstack_empty(void) {
    pstack s=NULL;
    /*
     * COMPLETAR
     *
     */
    return s;
}

pstack pstack_push(pstack s, pstack_elem e, priority_t priority) {
    assert(invrep(s));
    struct s_node *new_node = create_node(e, priority);
    /*
     * COMPLETAR
     *
     */
    assert(e==e && priority==priority && new_node==new_node); // BORRAR ESTE ASSERT
    return s;
}

bool pstack_is_empty(pstack s) {
    /*
     * COMPLETAR
     *
     */
    assert(s==s);
    return true;
}

pstack_elem pstack_top(pstack s) {
    assert(s==s);
    return 0;
}

priority_t pstack_top_priority(pstack s) {
    /*
     * COMPLETAR
     *
     */
    assert(s==s); // BORRAR ESTE ASSERT
    return worst;
}

unsigned int pstack_size(pstack s) {
    assert(invrep(s));
    unsigned int size=0;
    /*
     * COMPLETAR
     *
     */
    return size;
}

pstack pstack_pop(pstack s) {
    /*
     * COMPLETAR
     *
     */
    assert(s==s); // BORRAR ESTE ASSERT
    return s;
}

pstack pstack_destroy(pstack s) {
    assert(invrep(s));
    /*
     * COMPLETAR
     *
     */
    assert(s == NULL);
    return s;
}

