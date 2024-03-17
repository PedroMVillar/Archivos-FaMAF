#include <stdio.h>
#include <stdbool.h>

bool es_primo(int num);
int nesimo_primo(int n);

// ------------------------------------------------------- //
// Implementación
int main(){
    int x;
    while (1) {
        printf("Ingrese un numero: ");
        scanf("%d", &x);
        if (x <= 0) {
            printf("El numero debe ser positivo\n");
        } else {
            break;
        }
    }
    
    printf("El n-esimo primo es: %d", nesimo_primo(x));
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
// Funcion que retorna el n-esimo primo //
int nesimo_primo(int n) {
    int contador_primos = 0; // Cantidad de primos encontrados hasta el momento
    int candidato = 2; // Numero que estamos probando
    while (contador_primos < n) { 
        if (es_primo(candidato)) { // Si el numero es primo
            contador_primos++; // Encontre un primo mas
        }
        candidato++; // Pruebo con el siguiente numero
    }
    return candidato - 1; // El ultimo numero que probe es el n-esimo primo
}
// ------------------------------------------------------- //