#include <stdio.h>
#include <assert.h>

int abs(int x);

// ------------------------------------------------------- //
// Implementación
int main(){
  int x;
  printf("Ingrese un valor para x:");
  scanf("%d", &x);
  printf("el val absol es: %d", abs(x));
  return 0;
}
// ------------------------------------------------------- //

// ------------------------------------------------------- //
// Función de valor absoluto
int abs(int x){
  if(x<0){
    return -x;
  }
  return x;
}
// ------------------------------------------------------- //

// Derivación completa ════════════╗
/*
Sin utilizar el operador | |:
- La terna es d la forma:

  |-----------------------------------------------------------|
  |  Var x,absol : Int                                        |
  |  { P: x = X }          -- Variable de especificación      |
  |  S                                                        |
  |  { Q: absol = | X | }                                     |
  |___________________________________________________________| 

P no implica Q, por lo que no es factible que S sea un skip, entonces planteo
la asignación absol:= E , ya que en la postcondición solo se menciona absol, esa es
la variable a modificar.

Ahora tomando a P como hipótesis, pruebo la wp:
wp.(absol:=E).(absol = | X |)
={dep Wp de asignación, sustitución}
E = | X |
={X no existe en el programa, uso hipótesis}
E = | x |
={utilizo analisis por casos para obtener el min}
    - CASO 1 = x < 0 : 
        ={propiedad del valor absoluto}
        E = -x
        ={tomo E = -x}
        True
    - CASO 2 = x >= 0 : (podría verse como un else)
        ={propiedad del valor absoluto}
        E = x
        ={tomo E = x}
        True

Luego el programa queda de la siguiente forma:
  |-----------------------------------------------------------|
  |  Var x,y,min : Int                                        |
  |  { P: x = X }          -- Variables de especificación     |
  |  if x<0 → absol:= -x                                      | 
  |  [] x≥0 → absol:= x                                       |
  |  { Q: absol = | X | }                                     |
  |___________________________________________________________| 
*/