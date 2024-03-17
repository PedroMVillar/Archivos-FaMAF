---
Materia: Algoritmos1
tags:
  - c
---
El bucle `while` es una estructura de control de flujo en C que permite repetir un bloque de código mientras una condición específica sea verdadera. Aquí tienes una descripción detallada de cómo funciona el `while` en C:
```c
#include <stdio.h>

int main() {
    // Inicialización de una variable
    int contador = 0;

    // Uso del while para repetir un bloque de código
    while (contador < 5) {
        // Este bloque se ejecutará mientras la condición (contador < 5) sea verdadera
        printf("Contador: %d\n", contador);

        // Incremento de la variable contador
        contador++;
    }

    // Fin del programa
    return 0;
}
```

## Estructura básica del `while`:
1. **Encabezado del `while`**: Comienza con la palabra clave `while`, seguida de una condición entre paréntesis. La condición es evaluada antes de cada iteración del bucle. Si la condición es verdadera, el bloque de código dentro del `while` se ejecutará; de lo contrario, el bucle se terminará.
	```c
	while (condicion) {
    // Bloque de código que se repetirá mientras la condición sea verdadera
	}
	```
2. **Bloque de código**: El bloque de código dentro del `while` contiene las instrucciones que se ejecutan repetidamente mientras la condición sea verdadera.
### Consideraciones adicionales:
- **Iteración basada en condición**: El bloque de código dentro del `while` se ejecutará repetidamente mientras la condición especificada sea verdadera. Es crucial asegurarse de que la condición eventualmente sea falsa para evitar un bucle infinito.
- **Actualización de la condición**: Dentro del bloque de código, generalmente se realiza algún tipo de actualización en las variables que participan en la condición. En el ejemplo, la variable `contador` se incrementa en cada iteración (`contador++`).
- **Puede tener múltiples declaraciones**: El bloque de código dentro del `while` puede contener una o varias declaraciones, y estas se ejecutarán secuencialmente en cada iteración.
- **Puede no ejecutarse en absoluto**: Si la condición es falsa desde el principio, el bloque de código dentro del `while` no se ejecutará.
- **Uso para la entrada de datos repetitiva**: El bucle `while` es útil cuando se necesita leer datos de manera repetitiva hasta que se cumpla una condición de salida.
### Ejemplo adicional
```c
#include <stdio.h>

int main() {
    int numero;
    
    // Solicitar al usuario ingresar números hasta que ingrese uno negativo
    printf("Ingrese números (ingrese un número negativo para salir):\n");

    while (1) {
        printf("Ingrese un número: ");
        scanf("%d", &numero);

        if (numero < 0) {
            // Salir del bucle si el número es negativo
            break;
        }

        printf("Usted ingresó: %d\n", numero);
    }

    // Fin del programa
    return 0;
}
```
En este ejemplo, el bucle `while` se ejecuta indefinidamente hasta que el usuario ingresa un número negativo, momento en el cual el bucle se interrumpe con la declaración `break`.