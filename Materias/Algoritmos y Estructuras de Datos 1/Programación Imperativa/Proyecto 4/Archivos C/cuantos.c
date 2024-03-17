#include <stdio.h>

#define TAM 5

struct comp_t {
    int menores;
    int iguales;
    int mayores;
};

void pedir_arreglo(int tam, int a[]);
void imprimir_arreglo(int tam, int a[]);
struct comp_t cuantos(int tam, int a[], int elem);

// ------------------------------------------------------- //
// Implementación
int main(){
    int a[TAM];
    int elem;
    struct comp_t res;
    pedir_arreglo(TAM, a);
    imprimir_arreglo(TAM, a);
    printf("\n");
    printf("Ingrese el elemento a comparar: ");
    scanf("%d", &elem);
    res = cuantos(TAM, a, elem);
    printf("Menores: %d\n", res.menores);
    printf("Iguales: %d\n", res.iguales);
    printf("Mayores: %d\n", res.mayores);
    return 0;
}
// ------------------------------------------------------- //

// ------------------------------------------------------- //
// Funcion que pide un arreglo de enteros de tamaño n_max //
void pedir_arreglo(int tam, int a[]){
    int i= 0;
    while (i<tam){
        printf("Ingrese el valor %d: ", i+1);
        scanf("%d", &a[i]);
        i++;
    }
}
// ------------------------------------------------------- //

// ------------------------------------------------------- //
// Funcion que imprime un arreglo de enteros de tamaño n_max //
void imprimir_arreglo(int tam, int a[]){
    int i= 0;
    while (i<tam){
        printf("%d ", a[i]);
        i++;
    }
}
// ------------------------------------------------------- //

// ------------------------------------------------------- //
// Funcion que retorna la cantidad de elementos menores, iguales y mayores a un elemento dado en un arreglo //
struct comp_t cuantos(int tam, int a[], int elem){
    int i = 0;
    struct comp_t res;
    res.menores = 0;
    res.iguales = 0;
    res.mayores = 0;
    while (i<tam){
        if (a[i] < elem){
            res.menores++;
        } else if (a[i] == elem){
            res.iguales++;
        } else {
            res.mayores++;
        }
        i++;
    }
    return res;
}
// ------------------------------------------------------- //