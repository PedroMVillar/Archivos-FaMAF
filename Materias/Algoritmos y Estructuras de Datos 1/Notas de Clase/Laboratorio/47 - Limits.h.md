---
Materia: Algoritmos1
tags:
  - c
---
La biblioteca `limits.h` en C proporciona información sobre los límites de los tipos de datos enteros en el sistema en el que se está ejecutando el programa. A continuación, se detallan algunas de las constantes más comunes definidas en `limits.h`:

### 1. Límites para Tipos de Datos con Signo:
- `CHAR_BIT`: Número de bits en un byte (generalmente 8).
- `SCHAR_MIN`: Valor mínimo para un `signed char`.
- `SCHAR_MAX`: Valor máximo para un `signed char`.
- `CHAR_MIN`: Valor mínimo para un `char` (puede ser `signed` o `unsigned`).
- `CHAR_MAX`: Valor máximo para un `char` (puede ser `signed` o `unsigned`).
- `SHRT_MIN`: Valor mínimo para un `short int`.
- `SHRT_MAX`: Valor máximo para un `short int`.
- `INT_MIN`: Valor mínimo para un `int`.
- `INT_MAX`: Valor máximo para un `int`.
- `LONG_MIN`: Valor mínimo para un `long int`.
- `LONG_MAX`: Valor máximo para un `long int`.

### 2. **Límites para Tipos de Datos sin Signo:
- `UCHAR_MAX`: Valor máximo para un `unsigned char`.
- `USHRT_MAX`: Valor máximo para un `unsigned short int`.
- `UINT_MAX`: Valor máximo para un `unsigned int`.
- `ULONG_MAX`: Valor máximo para un `unsigned long int`.

### 3. Límites Adicionales:
- `LLONG_MIN`, `LLONG_MAX`: Valor mínimo y máximo para un `long long int`.
- `ULLONG_MAX`: Valor máximo para un `unsigned long long int`.

### 4. Ejemplo de Uso:
```c
#include <stdio.h>
#include <limits.h>

int main() {
    printf("Valor mínimo para un char: %d\n", CHAR_MIN);
    printf("Valor máximo para un char: %d\n", CHAR_MAX);

    printf("Valor mínimo para un int: %d\n", INT_MIN);
    printf("Valor máximo para un int: %d\n", INT_MAX);

    printf("Valor máximo para un unsigned int: %u\n", UINT_MAX);

    return 0;
}
```
En este ejemplo, se utilizan algunas de las constantes definidas en `limits.h` para imprimir los límites de varios tipos de datos en el sistema en el que se ejecuta el programa.