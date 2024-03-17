---
Materia: Algoritmos1
tags:
  - c
---
La asignación en C se realiza utilizando el operador de asignación (=). La forma básica es:
```c
variable = valor;
```
Aquí, `variable` es el nombre de la variable a la que se le está asignando un valor, y `valor` es la expresión o constante que se está asignando a esa variable. Algunos ejemplos:
```c
#include <stdio.h>

int main() {
    // Asignación de valores a variables
    int x; // Declaración de una variable
    x = 5; // Asignación de un valor a la variable
    
    // Asignación con expresiones
    int y = 10;
    int z = x + y;

    // Imprimir los valores
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n", z);

    // Fin del programa
    return 0;
}
```
1. Se declara la variable `x` y luego se le asigna el valor `5`.
2. Se declara la variable `y` y se le asigna el valor `10`.
3. Se declara la variable `z` y se le asigna la suma de `x` e `y`.

En C, la asignación no es lo mismo que la comparación. La expresión `a = b` asignará el valor de `b` a la variable `a`, mientras que la expresión `a == b` se utiliza para comparar si `a`es igual a `b`.
También es posible realizar asignaciones más complejas utilizando operadores aritméticos o de incremento/decremento. Por ejemplo:
```c
#include <stdio.h>

int main() {
    int a = 5;
    
    // Operadores aritméticos en asignación
    a += 3;  // Equivalente a: a = a + 3;
    a *= 2;  // Equivalente a: a = a * 2;

    // Operadores de incremento/decremento en asignación
    a++;     // Equivalente a: a = a + 1;
    a--;     // Equivalente a: a = a - 1;

    // Imprimir el valor final de 'a'
    printf("El valor final de 'a' es: %d\n", a);

    // Fin del programa
    return 0;
}
```
En este caso, se utilizan operadores como `+=`, `*=`, `++`, y `--` para realizar asignaciones más concisas y expresivas.