#include <stdio.h>
#define n 5

struct multiplos_t {
    int n_multiplos_dos;
    int n_multiplos_tres;
    int n_multiplos_cinco;
};

struct multiplos_t contar_multiplos(int a[], int tam);

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
    // Imprimo el resultado
    struct multiplos_t res = contar_multiplos(a, n);
    printf("La cantidad de multiplos de 2 es: %d\n", res.n_multiplos_dos);
    printf("La cantidad de multiplos de 3 es: %d\n", res.n_multiplos_tres);
    printf("La cantidad de multiplos de 5 es: %d\n", res.n_multiplos_cinco);
    return 0;
}
// ------------------------------------------------------- //

// ------------------------------------------------------- //
// Función contar_multiplos()
struct multiplos_t contar_multiplos(int a[], int tam){
    struct multiplos_t res;
    res.n_multiplos_dos = 0;
    res.n_multiplos_tres = 0;
    res.n_multiplos_cinco = 0;
    int i = 0;
    while (i<tam){
        if (a[i] % 2 == 0){
            res.n_multiplos_dos++;
        }
        if (a[i] % 3 == 0){
            res.n_multiplos_tres++;
        }
        if (a[i] % 5 == 0){
            res.n_multiplos_cinco++;
        }
        i++;
    }
    return res;
}
// ------------------------------------------------------- //
