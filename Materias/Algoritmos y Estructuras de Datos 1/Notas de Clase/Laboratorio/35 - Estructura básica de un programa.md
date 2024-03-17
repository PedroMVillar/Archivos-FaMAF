---
Materia: Algoritmos1
tags:
  - c
---
```c
// Comentario: Este es un programa simple en C
// Incluye la biblioteca estándar de entrada/salida
#include <stdio.h>

// Función principal del programa
int main() {
    // Declaración de variables
    int numero;

    // Solicitar al usuario que ingrese un número
    printf("Ingrese un número: ");
    
    // Leer el número ingresado por el usuario y almacenarlo en la variable 'numero'
    scanf("%d", &numero);

    // Imprimir el número ingresado
    printf("Usted ingresó: %d\n", numero);

    // Fin del programa
    return 0;
}
```
1. **Comentarios**: Puedes incluir comentarios en tu código para hacerlo más comprensible. En C, los comentarios de una línea comienzan con `//`, y los comentarios de múltiples líneas están entre `/*` y `*/`.
2. **Inclusión de bibliotecas**: `#include <stdio.h>` es una directiva de preprocesador que le dice al compilador que incluya la biblioteca estándar de entrada/salida (stdio.h). Esta biblioteca proporciona funciones para la entrada y salida de datos.
3. **Función principal (`main()`)**: Todo programa en C debe tener una función principal llamada `main()`. La ejecución del programa comienza desde aquí.
4. **Declaración de variables**: En este ejemplo, se declara una variable llamada `numero` de tipo entero (`int`). Se pueden declarar variables al principio de tu función `main()`.
5. **Entrada de datos (`scanf()`)**: La función `scanf` se utiliza para leer datos desde la entrada estándar (teclado, en este caso). `%d` indica que esperamos un entero, y `&numero` es la dirección de memoria donde se almacenará el valor ingresado.
6. **Salida de datos (`printf()`)**: La función `printf` se utiliza para imprimir datos en la salida estándar (pantalla, en este caso). `%d` se sustituirá por el valor de la variable `numero` en la cadena de formato.
7. **Retorno (`return 0`)**: La función `main()` generalmente termina con un `return 0;`, indicando que el programa se ejecutó correctamente. Otros valores que no sean cero pueden indicar algún tipo de error.