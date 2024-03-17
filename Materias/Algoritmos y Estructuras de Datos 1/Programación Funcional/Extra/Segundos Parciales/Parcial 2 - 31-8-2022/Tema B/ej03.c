#include <stdio.h>
#include <assert.h>
#define N 5

struct paridad_t {
    int n_pares;
    int n_impares;
    int n_ceros;
};

struct paridad_t contar_pares_impares(int a[], int tam);

// ------------------------------------------------------- //
// Implementación
int main(){
    int i= 0;
    int a[N];
    while (i<N){
        printf("Ingrese el valor %d: ", i+1);
        scanf("%d", &a[i]);
        i++;
    }
    // Imprimo el resultado
    struct paridad_t res = contar_pares_impares(a, N);
    printf("La cantidad de pares es: %d\n", res.n_pares);
    printf("La cantidad de impares es: %d\n", res.n_impares);
    printf("La cantidad de ceros es: %d\n", res.n_ceros);
    return 0;
}
// ------------------------------------------------------- //

// ------------------------------------------------------- //
// Funcion para contar pares, impares y ceros
struct paridad_t contar_pares_impares(int a[], int tam){
    struct paridad_t paridad;
    paridad.n_pares = 0;
    paridad.n_impares = 0;
    paridad.n_ceros = 0;
    // {Pre: paridad.n_pares = 0, paridad.n_impares = 0, paridad.n_ceros = 0}
    assert((paridad.n_pares == 0) && (paridad.n_impares == 0) && (paridad.n_ceros == 0));
    int i = 0;
    while(i < tam){
        if(a[i] == 0){
            paridad.n_ceros++;
        } else if(a[i] % 2 == 0){
            paridad.n_pares++;
        } else {
            paridad.n_impares++;
        }
        i++;
    }
    return paridad;
}
// ------------------------------------------------------- //