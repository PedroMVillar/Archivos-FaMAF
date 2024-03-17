#include <stdio.h>
#include <assert.h>

int minimo(int x, int y);

// ------------------------------------------------------- //
// Implementación
int main() {
    int x, y;
    printf("Ingrese dos numeros enteros: ");
    scanf("%d %d", &x, &y);
    int resultado = minimo(x, y);
    printf("El minimo entre %d y %d es %d\n", x, y, resultado);
    // Postcondición: el resultado es el mínimo entre x e y
    assert(resultado == (x < y ? x : y));
    return 0;
}
// ------------------------------------------------------- //

// ------------------------------------------------------- //
int minimo(int x, int y) {
    // Precondición: x e y son enteros
    // Postcondición: devuelve el mínimo entre x e y
    int min;
    if (x < y) {
        min = x;
    } else {
        min = y;
    }
    return min;
}
// ------------------------------------------------------- //

// Derivación completa ════════════╗
/*
Sin utilizar el operador Min:
- La terna es d la forma:

  |-----------------------------------------------------------|
  |  Var x,y,min : Int                                        |
  |  { P: x = X ∧ y = Y }  -- Variables de especificación     |
  |  S                                                        |
  |  { Q: min = X min Y }                                     |
  |___________________________________________________________| 

P no implica Q, por lo que no es factible que S sea un skip, entonces planteo
la asignación min:= E , ya que en la postcondición solo se menciona min, esa es
la variable a modificar.

Ahora tomando a P como hipótesis, pruebo la wp:
wp.(min:=E).(min = X min Y)
={dep Wp de asignación, sustitución}
E = X min Y
={X e Y no existen en el programa, uso hipótesis}
E = x min y
={utilizo analisis por casos para obtener el min}
    - CASO 1 = x < y : 
        ={propiedad de min}
        E = x
        ={tomo E = x}
        True
    - CASO 2 = x >= y : (podría verse como un else)
        ={propiedad de min}
        E = y
        ={tomo E = y}
        True

Luego el programa queda de la siguiente forma:
  |-----------------------------------------------------------|
  |  Var x,y,min : Int                                        |
  |  { P: x = X ∧ y = Y }  -- Variables de especificación     |
  |  if x<y → min:= x                                         | 
  |  [] x≥y → min:= y                                         |
  |  { Q: min = X min Y }                                     |
  |___________________________________________________________| 
*/