#include <stdio.h>
#include <assert.h>

int pedir_entero(char name);
void asignar(int x, int y, int z);

// ------------------------------------------------------- //
// Implementación
int main(){
  int x,y,z;
  x = pedir_entero('x');
  y = pedir_entero('y');
  z = pedir_entero('z');
  asignar(x,y,z);
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
// ------------------------------------------------------- //

// ------------------------------------------------------- //
// Función de Asignación
void asignar(int x, int y, int z){
  int X,Y,Z;
    X = x;
    Y = y;
    Z = z;
    x = Y;
    y = X + Y + Z;
    z = Y + X;
    printf("x = %d, y = %d, z = %d", x, y, z);
}
// ------------------------------------------------------- //