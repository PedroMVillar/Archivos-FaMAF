#include <stdio.h>
#include <assert.h>

int pedir_entero(char name);
void imprimir_entero(char name, int x);

// ------------------------------------------------------- //
// Implementación
int main(){
    int x = pedir_entero('x');
    int y = pedir_entero('y');
    int z = pedir_entero('z');
    int X,Y,Z;
    X = x;
    Y = y;
    Z = z;
    assert((x == X) && (y == Y) && (z == Z) && (X != Y));
    x = Y;
    y = X;
    z = X - Y;
    assert((x == Y) && (y == X) && (z == X - Y));
    imprimir_entero('x', x);
    imprimir_entero('y', y);
    imprimir_entero('z', z);
    return 0;
}
// ------------------------------------------------------- //

// ------------------------------------------------------- //
// Función pedirEntero() del proyecto 3
int pedir_entero(char name){
  int x;
  printf("Ingrese el valor para la variable %c: ", name);
  scanf("%d", &x);
  return x;
}
//Función imprimirEntero() del proyecto 3
void imprimir_entero(char name, int x) {
  printf("La variable %c es %d\n", name, x);
}
// ------------------------------------------------------- //