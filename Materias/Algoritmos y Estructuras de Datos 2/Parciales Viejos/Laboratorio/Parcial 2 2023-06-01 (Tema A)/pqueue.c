#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
#include "pqueue.h"

struct s_pqueue{
    unsigned int size;
    struct s_node *front;
};

struct s_node{
    pqueue_elem elem;
    float priority;
    float average_grade;
    unsigned int approved_courses;
    struct s_node *next;
};


static float calculate_priority(float average_grade, unsigned int approved_courses){ 
    return 0.5 * (average_grade/MAX_GRADE) + 0.5 * (approved_courses/TOTAL_COURSES);
}

static struct s_node *create_node(pqueue_elem e, float average_grade, unsigned int approved_courses){
    struct s_node *new_node = malloc(sizeof(struct s_node));
    assert(new_node != NULL);
    new_node->elem = e;
    new_node->next = NULL;
    new_node->approved_courses = approved_courses;
    new_node->average_grade = average_grade;
    new_node->priority = calculate_priority(average_grade, approved_courses);
    return new_node;
}

static struct s_node *destroy_node(struct s_node *node){
    assert(node != NULL);
    node->next = NULL;
    free(node);
    node = NULL;
    assert(node == NULL);
    return node;
}

static bool invrep(pqueue q){
    bool res;
    if(q == NULL){
        res = false;
    } else {
        if(q->size == 1){
            res = true;
        } else {
            struct s_node *aux = q->front;
            while(aux->next != NULL){
                res = (aux->priority >= aux->next->priority);
                aux = aux->next;
            }
        }
    }
    return res; 
}

pqueue pqueue_empty(void){
    struct s_pqueue *q = malloc(sizeof(struct s_pqueue));
    assert(q != NULL);
    q->front = NULL;
    q->size = 0u;
    assert(invrep(q));
    return q;
}

pqueue pqueue_enqueue(pqueue q, pqueue_elem e, float average_grade, unsigned int approved_courses){
    assert(invrep(q));
    struct s_node *new_node = create_node(e, average_grade, approved_courses);
    if(q->front == NULL){
        q->front = new_node;
    }else if(q->front->priority < new_node->priority){
        new_node->next = q->front;
        q->front = new_node;
    }else {
        struct s_node *aux = q->front;
        while((aux->next != NULL) && (aux->next->priority >= new_node->priority))aux = aux->next;
        new_node->next = aux->next;
        aux->next = new_node;
    }
    q->size++;
    assert(invrep(q) && !pqueue_is_empty(q));
    return q;
}

bool pqueue_is_empty(pqueue q){
    assert(invrep(q));
    return q->front == NULL;
}


pqueue_elem pqueue_peek(pqueue q){
    assert(invrep(q) && !pqueue_is_empty(q));
    return q->front->elem;    
}

float pqueue_peek_average_grade(pqueue q){
    assert(invrep(q));
    return q->front->average_grade;
}

unsigned int pqueue_peek_approved_courses(pqueue q){
    assert(invrep(q));
    return q->front->approved_courses;
}

float pqueue_peek_priority(pqueue q){
    assert(invrep(q));
    return q->front->priority;
}

unsigned int pqueue_size(pqueue q){
    assert(invrep(q));
    return q->size;
}

pqueue pqueue_copy(pqueue q){
    assert(invrep(q));
    pqueue copied_queue = pqueue_empty();
    if(q->front != NULL){
        struct s_node *aux = q->front;
        while(aux != NULL){
            q = pqueue_enqueue(copied_queue, aux->elem, aux->average_grade, aux->approved_courses);
            aux = aux->next;
        } 
    }
    assert(invrep(q) && q->size == copied_queue->size);
    return copied_queue;
}

pqueue pqueue_dequeue(pqueue q){
    assert(invrep(q) && !pqueue_is_empty(q));
    struct s_node *killme = q->front;
    q->front = q->front->next;
    destroy_node(killme);
    q->size--;
    assert(invrep(q));
    return q;
}

pqueue pqueue_destroy(pqueue q){
    assert(invrep(q));
    while(!pqueue_is_empty(q)){
        q = pqueue_dequeue(q);
    }
    q->front = NULL;
    free(q);
    q = NULL;
    assert(q == NULL);
    return q;
}