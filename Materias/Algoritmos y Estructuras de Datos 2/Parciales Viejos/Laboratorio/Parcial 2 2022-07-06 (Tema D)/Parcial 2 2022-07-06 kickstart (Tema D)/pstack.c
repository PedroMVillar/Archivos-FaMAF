#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
#include "pstack.h"

struct s_pstack
{
    priority_t max_priority;
    struct s_node **stacks;
    size_t size;
};

struct s_node
{
    pstack_elem elem;
    struct s_node *next;
};

static struct s_node *create_node(pstack_elem e)
{
    struct s_node *new_node = malloc(sizeof(struct s_node));
    assert(new_node != NULL);
    new_node->elem = e;
    new_node->next = NULL;
    return new_node;
}

static struct s_node *destroy_node(struct s_node *node)
{
    node->next = NULL;
    free(node);
    node = NULL;
    assert(node == NULL);
    return node;
}

static bool invrep(pstack s){
    bool res;
    if (s->size == 0){
        res = s == NULL; 
    } else {
        res = s->size == s -> max_priority + 1;
    }
    return res;
}

pstack pstack_empty(priority_t max_priority)
{
    pstack s = NULL;
    
    assert(invrep(s) && pstack_is_empty(s));
    return s;
}

pstack pstack_push(pstack s, pstack_elem e, priority_t priority)
{
    assert(invrep(s));
    /* COMPLETAR */
    assert(invrep(s) && !pstack_is_empty(s));
    return s;
}

bool pstack_is_empty(pstack s)
{
    assert(invrep(s));
    /* COMPLETAR */
    return 0u;
}

pstack_elem pstack_top(pstack s)
{
    assert(invrep(s) && !pstack_is_empty(s));
    /* COMPLETAR */
    return 0u;
}

priority_t pstack_top_priority(pstack s)
{
    assert(invrep(s) && !pstack_is_empty(s));
    /* COMPLETAR */
    return true;
}

size_t pstack_size(pstack s)
{
    assert(invrep(s));
    /* COMPLETAR */
    return 0u;
}

pstack pstack_pop(pstack s)
{
    assert(invrep(s) && !pstack_is_empty(s));
    /* COMPLETAR */
    assert(invrep(s));
    return s;
}

pstack pstack_destroy(pstack s)
{
    assert(invrep(s));
    /* COMPLETAR */
    return s;
}
