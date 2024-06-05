#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
#include "pqueue.h"

struct s_pqueue {
    unsigned int size; // tamaño de la cola
    struct s_node *front; // puntero al nodo
};

struct s_node {
    pqueue_elem elem; // elemento
    unsigned int priority; // prioridad
    struct s_node *next; // puntero al siguiente     
};

static struct s_node * create_node(pqueue_elem e, unsigned int priority) {
    struct s_node *new_node = malloc(sizeof(struct s_node)); 
    assert(new_node!=NULL); 
    new_node->elem = e;
    new_node->priority = priority;
    new_node->next = NULL; 
    return new_node;
}

static struct s_node * destroy_node(struct s_node *node) {
    assert(node != NULL); // chequeo entrada exitosa
    node->next = NULL;
    free(node);
    node = NULL;
    assert(node == NULL); // chequeo que se destruya bien
    return node;
}


static bool invrep(pqueue q) {
    // completar --------------------
    bool res = q != NULL;
    return res;
}

pqueue pqueue_empty(void) {
    pqueue q=malloc(sizeof(struct s_pqueue)); // reservo memoria 
    assert(q != NULL); // verifico que se haya reservado bien
    q->size = 0u; // inicializo el tamaño en 0
    q->front = NULL; // pongo el puntero de front a NULL
    return q;
}

pqueue pqueue_enqueue(pqueue q, pqueue_elem e, unsigned int priority) {
    assert(invrep(q));
    struct s_node *new_node = create_node(e, priority);
    if(q->front == NULL){ 
        q->front = new_node; 
    } else if(q->front->priority > new_node->priority){
        new_node->next = q->front; q->front = new_node;
    }else{
        struct s_node *aux = q->front;
        while(aux->next != NULL && aux->next->priority < priority)aux = aux->next; 
        new_node->next = aux->next;
        aux->next = new_node;
    }
    q->size++;
    assert(invrep(q) && !pqueue_is_empty(q)); 
    return q;
}

bool pqueue_is_empty(pqueue q) {
    assert(invrep(q)); 
    return q->front == NULL;
}

pqueue_elem pqueue_peek(pqueue q) {
    assert(invrep(q) && !pqueue_is_empty(q));
    return q->front->elem;
}

unsigned int pqueue_peek_priority(pqueue q) {
    assert(invrep(q) && !pqueue_is_empty(q));
    return q->front->priority;
}

unsigned int pqueue_size(pqueue q) {
    assert(invrep(q));
    unsigned int size=q->size;
    return size;
}

pqueue pqueue_dequeue(pqueue q) {
    assert(invrep(q) && !pqueue_is_empty(q));
    struct s_node *killme = q->front;
    q->front = q->front->next;
    killme = destroy_node(killme);
    q->size--;
    assert(invrep(q)); 
    return q;
}

pqueue pqueue_destroy(pqueue q) {
    assert(invrep(q));
    while (!pqueue_is_empty(q)){
        q = pqueue_dequeue(q);
    }
    q->front = NULL;
    free(q);
    return q;
}
