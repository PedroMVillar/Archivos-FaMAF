#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

#define N 5

int minimo_pares(int tam, int a[]);
int minimo_impares(int tam, int a[]);
bool todos_pares(int tam, int a[]);
bool existe_multiplo(int m, int tam, int a[]);

// ------------------------------------------------------- //
// Implementación
int main(){
    // asumiendo un tamaño constante de 5
    int a[N];
    printf("Ingrese %d numeros enteros:\n", N);
    int i = 0;
    while(i < N){
        scanf("%d", &a[i]);
        i++;
    }
    int minPar = minimo_pares(N, a);
    if (minPar != INT_MAX) {
        printf("El mínimo par es: %d\n", minPar);
    }

    int minImpar = minimo_impares(N, a);
    if (minImpar != INT_MAX) {
        printf("El mínimo impar es: %d\n", minImpar);
    }
    return 0;
}
// ------------------------------------------------------- //

// ------------------------------------------------------- //
// Funcion que retorna el minimo de los numeros pares en un arreglo
int minimo_pares(int tam, int a[]) {
    int minimo = INT_MAX;
    int i = 0;
    while (i < tam) {
        if (a[i] % 2 == 0 && a[i] < minimo) {
            minimo = a[i];
        }
        i++;
    }
    return minimo;
}
// ------------------------------------------------------- //

// ------------------------------------------------------- //
// Funcion que retorna el minimo de los numeros impares en un arreglo
int minimo_impares(int tam, int a[]) {
    int minimo = INT_MAX;
    int i = 0;
    while (i < tam) {
        if (a[i] % 2 != 0 && a[i] < minimo) {
            minimo = a[i];
        }
        i++;
    }
    return minimo;
}
// ------------------------------------------------------- //

// ------------------------------------------------------- //
// Funcion que retorna true si todos los elementos del arreglo son pares
bool todos_pares(int tam, int a[]) {
    bool sonTodosPares = true;
    int i = 0;
    while (i < tam && sonTodosPares) {
        if (a[i] % 2 != 0) {
            sonTodosPares = false;
        }
        i++;
    }
    return sonTodosPares;
}
// ------------------------------------------------------- //

// ------------------------------------------------------- //
// Funcion que retorna true si existe un multiplo de m en el arreglo
bool existe_multiplo(int m, int tam, int a[]) {
    bool existe = false;
    int i = 0;
    while (i < tam && !existe) {
        if (a[i] % m == 0) {
            existe = true;
        }
        i++;
    }
    return existe;
}
// ------------------------------------------------------- //
