#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "stack.h"

int main(){
    /* Testeo */
    stack s = stack_empty();
    stack_elem e;
    stack_elem *array;
    unsigned int size;
    s = stack_push(s, 1);
    /* ¿Funciona bien stack_pop() para pilas de tamaño 1? */
    s = stack_pop(s);
    /* Si la pila queda vacía, ¿puedo volver a insertar elementos? */
    s = stack_push(s, 2);
    s = stack_push(s, 3);
    /* ¿La función stack_to_array() devuelve NULL para una pila vacía? ¿Devuelve los elementos
    en el orden correcto? */
    array = stack_to_array(s);
    size = stack_size(s);
    for(unsigned int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
    free(array);
    /* Liberar Memoria */
    s = stack_destroy(s);
    return 0;
}