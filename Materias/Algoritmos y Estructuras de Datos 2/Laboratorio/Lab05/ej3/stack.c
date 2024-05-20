#include <stdlib.h>
#include <assert.h>
#include "stack.h"

struct _s_stack {
    stack_elem *elems;      // Arreglo de elementos
    unsigned int size;      // Cantidad de elementos en la pila
    unsigned int capacity;  // Capacidad actual del arreglo elems
};

stack stack_empty(){
    stack s = (stack)malloc(sizeof(struct _s_stack));
    s->elems = (stack_elem*)calloc(1, sizeof(stack_elem));
    s->size = 0;
    s->capacity = 1;
    return s;
}

stack stack_push(stack s, stack_elem e){
    if(s->size == s->capacity){
        s->capacity *= 2;
        s->elems = (stack_elem*)realloc(s->elems, s->capacity * sizeof(stack_elem));
    }
    for(unsigned int i = s->size; i > 0; i--){
        s->elems[i] = s->elems[i-1];
    }
    s->elems[0] = e;
    s->size++;
    return s;
}

stack stack_pop(stack s){
    assert(s->size > 0);
    for(unsigned int i = 0; i < s->size-1; i++){
        s->elems[i] = s->elems[i+1];
    }
    s->size--;
    return s;
}

unsigned int stack_size(stack s){
    return s->size;
}

stack_elem stack_top(stack s){
    assert(s->size > 0);
    return s->elems[0];
}

bool stack_is_empty(stack s){
    return s->size == 0;
}

stack_elem *stack_to_array(stack s){
    if (stack_is_empty(s)) {
        return NULL;
    }
    stack_elem *arr = (stack_elem*)calloc(s->size, sizeof(stack_elem));
    for(unsigned int i = 0; i < s->size; i++){
        arr[i] = s->elems[s->size - i - 1];
    }
    return arr;
}

stack stack_destroy(stack s){
    free(s->elems);
    free(s);
    return NULL;
}