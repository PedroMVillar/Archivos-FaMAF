#include <stdio.h>
#include <assert.h>

#define N 4

void pedir_arreglo(int n_max, int a[]);
void intercambiar(int tam, int a[], int i, int j);
void imprimir_arreglo(int n_max, int a[]);

// ------------------------------------------------------- //
// Implementación
int main(){
    // N = 4 por defecto
    int a[N];
    int i, j;
    pedir_arreglo(N, a);
    printf("Ingrese el valor de i: ");
    scanf("%d", &i);
    printf("Ingrese el valor de j: ");
    scanf("%d", &j);
    assert(i >= 0 && i < N && j >=0 && j < N && j != i);
    intercambiar(N, a, i, j);
    imprimir_arreglo(N, a);
    return 0;
}
// ------------------------------------------------------- //

// ------------------------------------------------------- //
// Funcion que pide un arreglo de enteros de tamaño n_max //
void pedir_arreglo(int n_max, int a[]){
    printf("Ingrese %d numeros: ", n_max);
    int i = 0;
    while(i < n_max){
    scanf("%d", &a[i]);
    i++;
    }
}
// ------------------------------------------------------- //

// ------------------------------------------------------- //
// Funcion que intercambia los valores de dos posiciones en un arreglo //
void intercambiar(int tam, int a[], int i, int j){
  int I;
  int J;
  assert(i >= 0 && i < tam && j >=0 && j < tam && j != i);
  I = a[i];
  J = a[j];
  a[i] = J;
  a[j] = I;
}
// ------------------------------------------------------- //

// ------------------------------------------------------- //
// Funcion que imprime un arreglo de enteros de tamaño n_max //
void imprimir_arreglo(int n_max, int a[]){
    int i = 0;
    while(i < n_max){
        if(i == 0){
            printf("[ %d , ", a[i]);
        } else if (i > 0 && i < n_max - 1){
            printf("%d , ", a[i]);
        } else {
            printf("%d ]\n", a[i]);
    }
    i++;
    }
}
// ------------------------------------------------------- //