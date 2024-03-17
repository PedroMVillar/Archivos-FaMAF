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
    // {Pre: x = X, y = Y, z = Z, X ≠ 0, Y mod X = 0}
    assert((x==X) && (y==Y) && (z==Z) &&(Y % X == 0));
    x = Y / X;
    y = Y+Z;
    z = X*Y;
    // {Post: x = Y / X, y = Y + Z, z = X * Y}
    assert((x == (Y/X)) && (y == Y+Z) && (z == X*Y));
    imprimir_entero('x', x);
    imprimir_entero('y', y);
    imprimir_entero('z', z);
}
// ------------------------------------------------------- //
