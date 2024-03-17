#include <stdio.h>
#include <assert.h>

int pedir_entero(char name);
void imprimir_entero(char name, int x);
void asignar(int x, int y, int z);

// ------------------------------------------------------- //
// Implementación
int main(){
    int x = pedir_entero('x');
    int y = pedir_entero('y');
    int z = pedir_entero('z');
    asignar(x, y, z);
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

// ------------------------------------------------------- //
// Función de Asignación
void asignar(int x, int y, int z){
    int X,Y,Z;
    X = x;
    Y = y;
    Z = z;
    // {Pre: x = X, y = Y, z = Z, X ≠ 0}
    assert((x==X) && (y==Y) && (z==Z) && (x != 0));
    x = 2*Y + X;
    y = Z + X;
    z = Y/X;
    // {Post: x = 2 * Y + X, y = Z + X, z = Y / X}
    assert((x == 2*Y+X) && (y == Z+X) && (z == Y/X));
    imprimir_entero('x', x);
    imprimir_entero('y', y);
    imprimir_entero('z', z);
}
// ------------------------------------------------------- //