---
Materia: Algoritmos1
tags:
  - c
  - condicional
---
El `if` es una estructura de control de flujo en C que permite ejecutar un bloque de código si una condición es verdadera. Funciona de la siguiente manera:
```c
#include <stdio.h>

int main() {
    // Declaración e inicialización de variables
    int numero = 10;

    // Uso del if para tomar decisiones
    if (numero > 0) {
        // Este bloque de código se ejecutará si 'numero' es mayor que 0
        printf("El número es positivo.\n");
    } else if (numero == 0) {
        // Este bloque de código se ejecutará si 'numero' es igual a 0
        printf("El número es cero.\n");
    } else {
        // Este bloque de código se ejecutará si 'numero' es menor que 0
        printf("El número es negativo.\n");
    }

    // Fin del programa
    return 0;
}
```
## Estructura básica
1. **Encabezado del `if`**: Comienza con la palabra clave `if`, seguida de una condición entre paréntesis. La condición es una expresión que se evalúa como verdadera (`true`) o falsa (`false`).
	```c
	if (condicion) {
    // Bloque de código si la condición es verdadera
	}
	```
2. **Bloque de código**: Si la condición es verdadera, se ejecutará el bloque de código dentro de las llaves `{}` asociadas al `if`. Si la condición es falsa, este bloque se ignorará y el programa continuará con el siguiente bloque de código después del `if`.

## `else` y `else if`:
- **`else`**: Se utiliza para proporcionar un bloque de código que se ejecutará si la condición en el `if` es falsa.
	```c
	if (condicion) {
    // Bloque de código si la condición es verdadera
	} else {
    // Bloque de código si la condición es falsa
	}
	```
- **`else if`**: Se utiliza para evaluar una condición adicional si la condición en el `if` es falsa.
	```c
	if (condicion1) {
    // Bloque de código si la condición1 es verdadera
	} else if (condicion2) {
    // Bloque de código si la condicion1 es falsa y la condición2 es verdadera
	} else {
    // Bloque de código si todas las condiciones anteriores son falsas
	}
	```

### Consideraciones adicionales:
- Se pueden anidar múltiples `if`, `else if` y `else` para evaluar varias condiciones en secuencia.
- La condición en el `if` puede ser cualquier expresión que devuelva un valor booleano (`true` o `false`), como comparaciones, operaciones lógicas, etc.
- Los bloques de código asociados a `if`, `else if` y `else` consisten en una o más declaraciones agrupadas entre llaves `{}`. Si solo hay una declaración, las llaves son opcionales, pero es buena práctica usarlas siempre para evitar ambigüedades.