/*
Se debe además crear un archivo de prueba test.c para verificar las funciones en casos extremos:
● ¿Funciona bien stack_pop() para pilas de tamaño 1?
● Si la pila queda vacía, ¿puedo volver a insertar elementos?
● ¿La función stack_to_array() devuelve NULL para una pila vacía? ¿Devuelve los elementos
en el orden correcto?
*/

#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
    /* ● ¿Funciona bien stack_pop() para pilas de tamaño 1? */   
    stack s = stack_empty();
    stack_elem e = 1;
    s = stack_push(s, e);
    printf("Stack size: %d\n", stack_size(s));
    printf("Stack top: %d\n", stack_top(s));
    s = stack_pop(s);
    /* ● Si la pila queda vacía, ¿puedo volver a insertar elementos? */
    printf("Stack size: %d\n", stack_size(s));
    s = stack_push(s, e);
    printf("Stack size: %d\n", stack_size(s));
    printf("Stack top: %d\n", stack_top(s));
    /* ● ¿La función stack_to_array() devuelve NULL para una pila vacía? ¿Devuelve los elementos en el orden correcto? */
    s = stack_pop(s);
    stack_elem *arr = stack_to_array(s);
    if(arr == NULL){
        printf("Stack is empty\n");
    }else{
        printf("Stack elements: ");
        for(unsigned int i = 0; i < stack_size(s); i++){
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    stack_destroy(s);
    return 0;
}