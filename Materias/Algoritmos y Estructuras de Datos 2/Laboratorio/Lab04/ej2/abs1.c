#include <stdlib.h>
#include <stdio.h>

void absolute(int x, int y) {
    if (x >= 0) {
        y = x;
    } else {
        y = -x;
    }
}

int main(void) {
    int a=0, res=0;
    a = -10;
    absolute(a, res);
    printf("El valor absoluto de %d es %d\n", a, res);
    return EXIT_SUCCESS;
}

// Se muestra el valor 0 en lugar de 10, ya que la función absolute no modifica el valor de res. No coincide
// con lo que se devolvería en el teórico.