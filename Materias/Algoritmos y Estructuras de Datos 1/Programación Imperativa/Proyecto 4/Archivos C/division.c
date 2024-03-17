#include <stdio.h>
#include<assert.h>

struct div_t {
    int cociente;
    int resto;
};

int pedir_entero(char name);
struct div_t division(int x, int y);

// ------------------------------------------------------- //
// Implementación
int main(){
    int x = pedir_entero('x');
    int y = pedir_entero('y');
    struct div_t resultado = division(x, y);
    printf("el cociente es: %d\n", resultado.cociente);
    printf("el resto es: %d", resultado.resto);
    return 0; 
}
// ------------------------------------------------------- //

// ------------------------------------------------------- //
// Función pedirEntero() del proyecto 3
int pedir_entero(char name){
    int x;
    printf("valor de %c: ", name);
    scanf("%d", &x);
    return x;
}
// ------------------------------------------------------- //

// ------------------------------------------------------- //
// Funcion division
struct div_t division(int x, int y){
    assert(x >= 0 && y > 0);
    struct div_t resultado;
    resultado.cociente = x / y;
    resultado.resto = x % y;
    return resultado;
}
// ------------------------------------------------------- //