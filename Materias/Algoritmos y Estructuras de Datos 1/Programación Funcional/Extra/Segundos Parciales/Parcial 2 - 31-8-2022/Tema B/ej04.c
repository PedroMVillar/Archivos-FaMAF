#include <stdio.h>
#define n 5

struct producto_t {
    int precio;
    int peso_en_kilos;
};

struct total_t {
    int precio_total;
    int peso_total;
};

struct total_t calcular_montos(struct producto_t a[], int tam);

// ------------------------------------------------------- //
// Implementación
int main(){
    // Solicito al usuario ingresar un arreglo de longitud n
    int i= 0;
    struct producto_t a[n];
    while (i<n){
        printf("Ingrese el precio del producto %d: ", i+1);
        scanf("%d", &a[i].precio);
        printf("Ingrese el peso en kilos del producto %d: ", i+1);
        scanf("%d", &a[i].peso_en_kilos);
        i++;
    }
    // Imprimo el resultado
    struct total_t res = calcular_montos(a, n);
    printf("El precio total es: %d\n", res.precio_total);
    printf("El peso total es: %d\n", res.peso_total);
    return 0;
}
// ------------------------------------------------------- //

// ------------------------------------------------------- //
// Función calcular_montos()
struct total_t calcular_montos(struct producto_t a[], int tam){
    struct total_t total;
    total.precio_total = 0;
    total.peso_total = 0;
    int i = 0;
    while (i<tam){
        total.precio_total += a[i].precio;
        total.peso_total += a[i].peso_en_kilos;
        i++;
    }
    return total;
}
// ------------------------------------------------------- //