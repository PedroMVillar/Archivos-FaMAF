#include <stdio.h>
#define n 5

struct persona {
    int dni;
    float altura;
};
struct alturas_t {
    int n_altos;
    int n_bajos;
};

struct alturas_t contar_altos_y_bajos(struct persona a[], int tam, float alt);

// ------------------------------------------------------- //
// Implementación
int main(){
    // Solicito al usuario ingresar un arreglo de longitud n
    int i= 0;
    struct persona a[n];
    while (i<n){
        printf("Ingrese el dni de la persona %d: ", i+1);
        scanf("%d", &a[i].dni);
        printf("Ingrese la altura de la persona %d: ", i+1);
        scanf("%f", &a[i].altura);
        i++;
    }
    // Solicito al usuario el valor de la altura
    float alt;
    printf("Ingrese el valor de la altura: ");
    scanf("%f", &alt);
    // Imprimo el resultado
    struct alturas_t res = contar_altos_y_bajos(a, n, alt);
    printf("La cantidad de personas altas es: %d\n", res.n_altos);
    printf("La cantidad de personas bajas es: %d\n", res.n_bajos);
    return 0;
}
// ------------------------------------------------------- //

// ------------------------------------------------------- //
// Función contar_altos_y_bajos()
struct alturas_t contar_altos_y_bajos(struct persona a[], int tam, float alt){
    struct alturas_t res;
    res.n_altos = 0;
    res.n_bajos = 0;
    int i = 0;
    while (i<tam){
        if (a[i].altura > alt){
            res.n_altos++;
        }
        else{
            res.n_bajos++;
        }
        i++;
    }
    return res;
}
// ------------------------------------------------------- //