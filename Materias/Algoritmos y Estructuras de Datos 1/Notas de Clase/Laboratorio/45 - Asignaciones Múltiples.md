---
Materia: Algoritmos1
tags:
  - c
---
Las asignaciones múltiples en C implican asignar valores a varias variables en una sola instrucción. Usar variables auxiliares es común en asignaciones múltiples para evitar problemas de pérdida de datos o para facilitar el intercambio de valores entre variables.

## Ejemplo
```c
#include <stdio.h>

int main() {
    // Declaración de variables
    int a, b, auxiliar;

    // Solicitar al usuario ingresar valores para a y b
    printf("Ingrese el valor de a: ");
    scanf("%d", &a);

    printf("Ingrese el valor de b: ");
    scanf("%d", &b);

    // Intercambio de valores con variable auxiliar
    auxiliar = a;
    a = b;
    b = auxiliar;

    // Imprimir los resultados después del intercambio
    printf("Después del intercambio:\n");
    printf("a: %d\n", a);
    printf("b: %d\n", b);

    // Fin del programa
    return 0;
}
```
En este caso, se utiliza la variable `auxiliar` para almacenar temporalmente el valor de `a` antes de que `a` tome el valor de `b`. Luego, `b` toma el valor de `auxiliar`, logrando el intercambio deseado. Este enfoque con una variable auxiliar es simple y fácil de entender.