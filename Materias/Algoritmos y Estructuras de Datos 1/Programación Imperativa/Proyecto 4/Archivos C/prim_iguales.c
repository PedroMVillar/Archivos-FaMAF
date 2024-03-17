#include <stdio.h>

#define TAM 5

int prim_iguales(int tam, int a[]);


// ------------------------------------------------------- //
// Implementación
int main() {
    int a[TAM];
    int i = 0;
    printf("Ingrese los elementos del arreglo:\n");
    while(i < TAM) {
        scanf("%d", &a[i]);
        i++;
    }
    int res = prim_iguales(TAM, a);
    printf("La longitud del tramo inicial más largo con elementos iguales es: %d\n", res);
    printf("El tramo inicial más largo con elementos iguales es: ");
    i = 0;
    while(i < res) {
        printf("%d ", a[i]);
        i++;
    }
    printf("\n");
    return 0;
}
// ------------------------------------------------------- //

// ------------------------------------------------------- //
// Funcion que retorna la cantidad de elementos iguales consecutivos en un arreglo //
int prim_iguales(int tam, int a[]){
    int i = 0;
    int res = 1;
    while (i<tam-1){
        if (a[i] != a[i+1]){    
            break;
        } else {
            res++;
        }
        i++;
    }
    return res;     
}
// ------------------------------------------------------- //