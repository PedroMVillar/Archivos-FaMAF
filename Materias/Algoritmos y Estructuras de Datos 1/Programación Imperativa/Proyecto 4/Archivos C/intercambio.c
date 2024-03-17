#include <stdio.h>
#include <assert.h>

int pedir_entero(char name);
void imprimir_entero(char name, int x);
void asignar(int x, int y);

// ------------------------------------------------------- //
// Implementación
int main(){
    int x = pedir_entero('x');
    int y = pedir_entero('y');
    asignar(x, y);
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
void asignar(int x, int y){
    int z;
    z = x;
    x = y;
    y = z;
    imprimir_entero('x', x);
    imprimir_entero('y', y);
}
// ------------------------------------------------------- //
// Derivación completa ════════════╗
/*
- La terna es d la forma:

  |-----------------------------------------------------------|
  |  Var x,y,z : Int                                          |
  |  { P: x = X, y = Y, z = Z}                                |
  |  S                                                        |
  |  { Q: z = X, x = Y, y = Z }                               |
  |___________________________________________________________| 

P no implica Q, por lo que no es factible que S sea un skip, entonces planteo
la asignación z,x,y:=E,F,G

Ahora tomando a P como hipótesis, pruebo la wp:
wp.(z,x,y:=E,F,G).(z = X, x = Y, y = Z)
={dep Wp de asignación, sustitución}
E = X ∧ F = Y ∧ G = Z
={X,Y,Z no existen en el programa, uso hipótesis}
E = x ∧ F = y ∧ G = z
={tomo E = x, F = y, G = z}
True

Luego el programa queda de la siguiente forma:
  |-----------------------------------------------------------|
  |  Var x,y,z : Int                                          |
  |  { P: x = X, y = Y, z = Z}                                |
  |  z,x,y:=x,y,z                                             |
  |  { Q: z = X, x = Y, y = Z }                               |
  |___________________________________________________________| 
*/