#include <stdio.h>

#define N 5

struct datos_t {
    float maximo;
    float minimo;
    float promedio;
};

void pedir_arreglo(int tam, float a[]);
void imprimir_arreglo(int tam, float a[]);
struct datos_t stats(int tam, float a[]);

// ------------------------------------------------------- //
// Implementación
int main(){
    float a[N];
    struct datos_t res;
    pedir_arreglo(N, a);
    res = stats(N, a);
    printf("Maximo: %f\n", res.maximo);
    printf("Minimo: %f\n", res.minimo);
    printf("Promedio: %f\n", res.promedio);
    return 0;
}
// ------------------------------------------------------- //

// ------------------------------------------------------- //
// Funcion que pide un arreglo de enteros de tamaño n_max //
void pedir_arreglo(int tam, float a[]){
    int i= 0;
    while (i<tam){
        printf("Ingrese el valor %d: ", i+1);
        scanf("%f", &a[i]);
        i++;
    }
}
// ------------------------------------------------------- //

// ------------------------------------------------------- //
// Funcion que imprime un arreglo de enteros de tamaño n_max //
void imprimir_arreglo(int tam, float a[]){
    int i= 0;
    while (i<tam){
        printf("%f ", a[i]);
        i++;
    }
}
// ------------------------------------------------------- //

// ------------------------------------------------------- //
// Funcion que retorna la cantidad de elementos menores, iguales y mayores a un elemento dado en un arreglo //
struct datos_t stats(int tam, float a[]){
    int i = 0;
    struct datos_t res;
    res.maximo = a[0]; // Inicializado con el primer elemento
    res.minimo = a[0]; // Inicializado con el primer elemento
    res.promedio = 0;
    float suma = 0; 

    for(i = 0; i < tam; i++){
        if(a[i] > res.maximo){
            res.maximo = a[i];
        }
        if(a[i] < res.minimo){
            res.minimo = a[i];
        }
        suma += a[i];
    }

    res.promedio = suma / tam; 

    return res;
}
// ------------------------------------------------------- //