---
Materia: Algoritmos1
tags:
  - c
---
Definir una función en C implica proporcionar una implementación para una operación específica. La definición de una función incluye el tipo de retorno, el nombre de la función, la lista de parámetros (si los hay), y el bloque de código que realiza la operación deseada. 
### Estructura básica de una función:
```c
tipo_de_retorno nombre_de_la_funcion(tipo_parametro1 parametro1, tipo_parametro2 parametro2, ...) {
    // Bloque de código
    // Implementación de la función
    // Puede incluir declaraciones de variables, operaciones, estructuras de control, etc.

    // Sentencia de retorno (si la función tiene un tipo de retorno diferente de void)
    return valor_de_retorno;
}
```
- **Tipo de Retorno**: Especifica el tipo de dato que la función devuelve. Puede ser un tipo de datos básico (int, float, char, etc.) o un tipo de datos personalizado (estructura, puntero, etc.). Si la función no devuelve ningún valor, se utiliza `void`.
- **Nombre de la Función**: Es el identificador único de la función. Debe seguir las reglas de nomenclatura de C y proporcionar un nombre significativo que describa la operación que realiza la función.
- **Lista de Parámetros**: Son variables que la función espera recibir cuando es llamada. Los parámetros se utilizan para proporcionar información a la función. Pueden ser de cualquier tipo de dato válido en C.
- **Bloque de Código**: Contiene todas las instrucciones y declaraciones que constituyen la implementación de la función. Es encerrado por llaves `{}`.
- **Sentencia de Retorno**: Si la función tiene un tipo de retorno diferente de `void`, debe incluir una sentencia `return` para devolver un valor de ese tipo.

### Ejemplo simple de una función:
```c
#include <stdio.h>

// Definición de la función suma
int suma(int a, int b) {
    int resultado = a + b;
    return resultado;
}

int main() {
    // Llamada a la función suma
    int resultado_suma = suma(5, 3);

    // Imprimir el resultado
    printf("La suma es: %d\n", resultado_suma);

    // Fin del programa
    return 0;
}
```
En este ejemplo:
- La función `suma` toma dos parámetros `a` y `b`, realiza la operación de suma y devuelve el resultado.
- En la función `main`, se llama a la función `suma` con los valores `5` y `3`.
- El resultado de la función `suma` se almacena en la variable `resultado_suma` y se imprime.