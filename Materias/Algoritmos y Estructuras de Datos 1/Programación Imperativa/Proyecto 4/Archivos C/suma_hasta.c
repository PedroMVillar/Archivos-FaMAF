#include <stdio.h>
#include <assert.h>

int suma_hasta(int n);

// ------------------------------------------------------- //
// Implementación
int main(){
    int n;
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);
    int suma = suma_hasta(n);
    printf("La suma es: %d", suma);
}
// ------------------------------------------------------- //

// ------------------------------------------------------- //
// Función de Suma
int suma_hasta(int n){
    assert(n > 0);
    int suma = 0;
    while(n > 0){
        suma = n + suma;
        n--;
    }
    return suma;
}
// ------------------------------------------------------- //