#include <stdio.h>
#include <assert.h>
#include <limits.h>
#define n 5

int multiplo_minimo(int a[], int tam, int k);

// ------------------------------------------------------- //
// Implementación
int main(){
    // Solicito al usuario ingresar un arreglo de longitud n
    int i= 0;
    int a[n];
    while (i<n){
        printf("Ingrese el valor %d: ", i+1);
        scanf("%d", &a[i]);
        i++;
    }
    // Solicito al usuario el valor k
    int k;
    printf("Ingrese el valor k: ");
    scanf("%d", &k);
    assert(k != 0);
    // Imprimo el resultado
    printf("El multiplo minimo de k es: %d", multiplo_minimo(a, n, k));
}
// ------------------------------------------------------- //

// ------------------------------------------------------- //
// Funcion multiplo_minimo()
int multiplo_minimo(int a[], int tam, int k){
    int i = 0;
    int res = INT_MAX;
    while (i<tam){
        if (a[i] % k == 0){
            if (a[i] < res){
                res = a[i];
            }
        }
        i++;
    }
    return res;
}
// ------------------------------------------------------- //