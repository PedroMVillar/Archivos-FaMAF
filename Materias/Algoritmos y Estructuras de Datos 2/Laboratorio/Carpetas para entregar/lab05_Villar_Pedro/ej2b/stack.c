#include <stdlib.h>
#include <assert.h>
#include "stack.h"

// Implementación de las funciones del TAD Stack de orden constante

stack stack_empty() {
    stack s = malloc(sizeof(stack_t));
    if (s != NULL) {
        s->top = NULL;
        s->size_act = 0;
    }
    return s;
}

stack stack_push(stack s, stack_elem e) {
    assert(s != NULL);
    stack_node *new_node = malloc(sizeof(stack_node));
    unsigned int old_size = s->size_act; // Guardar el tamaño actual antes de agregar un elemento

    if (new_node != NULL) { // Si se reservó la memoria correctamente
        new_node->e = e;
        new_node->next = s->top;
        s->top = new_node;
        s->size_act++; // AUmentar el tamaño actual
    }
    assert(s->size_act == old_size + 1); // Verificar que el tamaño se incrementó
    return s;
}

stack stack_pop(stack s) {
    assert(s != NULL && s->top != NULL); // Verificar que la pila no esté vacía
    unsigned int old_size = s->size_act;

    stack_node *temp = s->top;
    s->top = s->top->next;
    free(temp);
    s->size_act--; // Disminuit el tamaño actual
    assert(s->size_act == old_size - 1); // Verificar que el tamaño se decrementó
    return s;
}

unsigned int stack_size(stack s) {
    assert(s != NULL); // Verificar que la pila no sea NULL
    return s->size_act;
}

stack_elem stack_top(stack s) {
    assert(s != NULL && s->top != NULL); // Verificar que la pila no esté vacía
    return s->top->e;
}

bool stack_is_empty(stack s) {
    assert(s != NULL); // Verificar que la pila no sea NULL
    return s->top == NULL;
}

stack_elem *stack_to_array(stack s) {
    assert(s != NULL); // Verificar que la pila no sea NULL
    stack_elem *arr = NULL;
    if (!stack_is_empty(s)) {
        arr = calloc(stack_size(s), sizeof(stack_elem));
        stack_node *current = s->top;
        unsigned int len = stack_size(s);
        for (int i = len - 1; i >= 0; --i) {
            arr[i] = current->e;
            current = current->next;
        }
    }
    return arr;
}

stack stack_destroy(stack s) {
    assert(s != NULL); // Verificar que la pila no sea NULL
    while (s->top != NULL) {
        s = stack_pop(s);
    }
    free(s);
    return NULL;
}