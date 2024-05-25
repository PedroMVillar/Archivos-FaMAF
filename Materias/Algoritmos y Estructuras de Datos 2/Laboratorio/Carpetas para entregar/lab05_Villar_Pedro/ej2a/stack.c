#include <stdlib.h>
#include <assert.h>
#include "stack.h"
 
struct _s_stack {
    stack_elem elem;
    stack next;
};

stack stack_empty() {
    return NULL;
}

stack stack_push(stack s, stack_elem e) {
    stack new = malloc(sizeof(struct _s_stack));
    assert(new != NULL);
    new->elem = e;
    new->next = s;
    return new;
}

stack stack_pop(stack s) {
    stack next = s->next;
    free(s);
    return next;
}

unsigned int stack_size(stack s){
    unsigned int size = 0;
    while(s != NULL){
        size++;
        s = s->next;
    }
    return size;
}

stack_elem stack_top(stack s){
    return s->elem;
}

bool stack_is_empty(stack s){
    return s == NULL;
}

stack_elem *stack_to_array(stack s){
    unsigned int size = stack_size(s);
    stack_elem *array = malloc(size * sizeof(stack_elem));
    assert(array != NULL);
    for(unsigned int i = 0; i < size; i++){
        array[i] = s->elem;
        s = s->next;
    }
    return array;
}

stack stack_destroy(stack s){
    stack next;
    while(s != NULL){
        next = s->next;
        free(s);
        s = next;
    }
    return NULL;
}