#include <stdio.h>
#include <stdbool.h>

struct cinco_t {
    int primero;
    int segundo;
    int tercero;
    int cuarto;
    int quinto;
};

bool es_primo(int num);
struct cinco_t cinco_primos(int a[], int tam);

// ------------------------------------------------------- //
// Implementación
int main(){
    // Valor de tam
    int tam = 7;
    // Solicito al usuario ingresar un arreglo de longitud n
    int i= 0;
    int a[tam];
    while (i<tam){
        printf("Ingrese el valor %d: ", i+1);
        scanf("%d", &a[i]);
        i++;
    }
    struct cinco_t res = cinco_primos(a, tam);
    printf("El primer primo es: %d\n", res.primero);
    printf("El segundo primo es: %d\n", res.segundo);
    printf("El tercer primo es: %d\n", res.tercero);
    printf("El cuarto primo es: %d\n", res.cuarto);
    printf("El quinto primo es: %d\n", res.quinto);
    return 0;
}
// ------------------------------------------------------- //

// ------------------------------------------------------- //
// Funcion que verifica si un numero es primo //
bool es_primo(int num) {
    if (num <= 1) return false;
    int i = 2;
    while (i * i <= num) {
        if (num % i == 0) return false;
        i++;
    }
    return true;
}
// ------------------------------------------------------- //

// ------------------------------------------------------- //
// Función cinco_primos
struct cinco_t cinco_primos(int a[], int tam){
    struct cinco_t p = {-1, -1, -1, -1, -1};
    int contador_primos = 0;
    int i = 0;
    while (i < tam && contador_primos < 5){
        if (es_primo(a[i])){
            if (contador_primos == 0) {
                p.primero = a[i];
            } else if (contador_primos == 1) {
                p.segundo = a[i];
            } else if (contador_primos == 2) {
                p.tercero = a[i];
            } else if (contador_primos == 3) {
                p.cuarto = a[i];
            } else if (contador_primos == 4) {
                p.quinto = a[i];
            }
            contador_primos++;
        }
        i++;
    }
    return p;
}
// ------------------------------------------------------- //