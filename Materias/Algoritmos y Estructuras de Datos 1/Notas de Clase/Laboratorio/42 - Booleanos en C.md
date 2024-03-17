---
Materia: Algoritmos1
tags:
  - c
---
C estándar (como definido en el estándar ISO C) no tiene un tipo de datos booleano incorporado como parte de la biblioteca estándar. Sin embargo, puedes emular la funcionalidad booleana utilizando valores enteros. Por convención, se utiliza 0 para representar `false` y 1 para representar `true`.
Dicho esto, la biblioteca estándar en C no incluye un tipo de datos booleano, y `stdbool.h` es la cabecera que proporciona tipos y macros para simular la funcionalidad booleana en C. 

## Uso de la libreria
```c
#include <stdio.h>
#include <stdbool.h>

int main() {
    // Declaración de una variable booleana
    bool esVerdadero = true; // También podrías usar 'false'

    // Uso de la variable booleana
    if (esVerdadero) {
        printf("La variable es verdadera.\n");
    } else {
        printf("La variable es falsa.\n");
    }

    // Fin del programa
    return 0;
}
```
Este código usa `stdbool.h` para definir `bool`, `true`, y `false`. 