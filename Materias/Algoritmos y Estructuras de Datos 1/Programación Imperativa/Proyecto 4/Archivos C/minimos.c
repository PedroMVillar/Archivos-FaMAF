#include <stdio.h>
#include <limits.h>

#define N 4

void pedir_arreglo(int n_max, int a[]);
int minimo_pares(int tam, int a[]);
int minimo_impares(int tam, int a[]);

// ------------------------------------------------------- //
// Implementación
int main(){
    int minimo_par;
    int minimo_impar;
    int a[N];
    pedir_arreglo(N, a);
    minimo_par = minimo_pares(N, a);
    minimo_impar = minimo_impares(N, a);
    printf("el minimo par es %d, el minimo impar es %d", minimo_par, minimo_impar);
    return 0;
}
// ------------------------------------------------------- //

// ------------------------------------------------------- //
// Funcion que pide un arreglo de enteros de tamaño n_max //
void pedir_arreglo(int n_max, int a[]){
    printf("ingresar %d numeros: ", n_max);
    int i = 0;
    while(i < n_max){
        scanf("%d", &a[i]);
    i++;    
    }
}
// ------------------------------------------------------- //

// ------------------------------------------------------- //
// Funcion que retorna el minimo de los numeros pares en un arreglo //
int minimo_pares(int tam, int a[]){
    int min = INT_MAX;
    int i = 0;
    while(i < tam){
        if(a[i] % 2 == 0 && a[i] < min){
        min = a[i];
        } 
    i++;
    }
    return min;
}
// ------------------------------------------------------- //

// ------------------------------------------------------- //
// Funcion que retorna el minimo de los numeros impares en un arreglo //
int minimo_impares(int tam, int a[]){
    int i = 0;
    int min = INT_MAX;
    while(i < tam){
        if(a[i] % 2 != 0 && a[i] < min){
            min = a[i];
        } 
    i++;
    }
    return min;
}
// ------------------------------------------------------- //