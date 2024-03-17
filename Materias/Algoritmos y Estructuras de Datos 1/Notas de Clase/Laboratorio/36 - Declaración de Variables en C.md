---
Materia: Algoritmos1
tags:
  - c
---
La declaración de variables en C se puede realizar de dos formas principales: a nivel local y a nivel global. 
### Declaración Local de Variables:
Las variables declaradas localmente están limitadas a la función o bloque de código en el que se han declarado. Estas variables existen solo durante la ejecución de esa función o bloque y se destruyen cuando el control sale de esa área. Este es un ejemplo:
```c
#include <stdio.h>

int main() {
    // Declaración local de variables
    int numero1 = 10;
    int numero2 = 20;

    // Uso de las variables localmente
    int suma = numero1 + numero2;
    printf("La suma es: %d\n", suma);

    // Fin del programa
    return 0;
}
```
En este caso, `numero1` y `numero2` son variables locales a la función `main()`. No se pueden acceder directamente desde otras funciones.
### Declaración Global de Variables:
Las variables globales se declaran fuera de cualquier función y están disponibles para todo el programa. Se pueden acceder desde cualquier parte del código, lo que las hace útiles para valores que deben ser compartidos entre varias funciones o bloques de código. 
```c
#include <stdio.h>

// Declaración global de variables
int numero1 = 10;
int numero2 = 20;

int main() {
    // Uso de las variables globales
    int suma = numero1 + numero2;
    printf("La suma es: %d\n", suma);

    // Fin del programa
    return 0;
}
```
En este caso, `numero1` y `numero2` son variables globales. Pueden ser utilizadas en la función `main()` y en otras funciones si fuera necesario.
### Consideraciones:
- **Alcance (Scope)**: Las variables locales tienen un alcance limitado al bloque o función en el que se declaran. Las variables globales tienen un alcance que se extiende a todo el programa.
- **Memoria**: Las variables locales se almacenan en la pila de ejecución y se eliminan cuando el control sale de la función. Las variables globales se almacenan en la memoria global y persisten durante toda la ejecución del programa.
- **Usos Recomendados**:
    - Utiliza variables locales cuando solo necesitas la variable dentro de una función específica.
    - Utiliza variables globales cuando necesitas compartir información entre varias funciones o cuando la variable debe tener una duración de vida extendida.