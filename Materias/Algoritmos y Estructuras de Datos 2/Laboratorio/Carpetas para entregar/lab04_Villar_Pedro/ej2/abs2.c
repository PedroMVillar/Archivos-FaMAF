#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

void absolute(int x, int *y) {
    if (x >= 0) {
        *y = x;
    } else {
        *y = -x;
    }
}

int main(void) {
    int a=0, res=0; 
    a = -10;
    absolute(a, &res);
    printf("El valor absoluto de %d es %d\n", a, res);
    assert(res >= 0 && (res == a || res == -a));
    return EXIT_SUCCESS;
}

//  ¿El parámetro int *y de absolute() es de tipo in, de tipo out o de tipo in/out?
//  Es de tipo out, ya que se modifica el valor de la variable res en la función main.

/*
¿Qué tipo de parámetros tiene disponibles C para sus funciones?
○ Parámetros in
○ Parámetros out
○ Parámetros in/out

C tiene parámetros in y out, pero no tiene parámetros in/out.
*/
