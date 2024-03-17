---
Materia: Algoritmos1
tags:
  - c
---
En C, las funciones `printf` y `scanf` son utilizadas para la entrada y salida de datos, respectivamente. Aquí tienes una explicación detallada de ambas funciones:
### `printf` - Salida de Datos:
La función `printf` se utiliza para imprimir datos en la salida estándar (por lo general, la pantalla). Su formato básico es:
```c
printf("formato", variable1, variable2, ...);
```
- `"formato"`: Es una cadena de formato que especifica cómo se deben formatear y mostrar las variables. Puede incluir texto fijo y especificadores de formato para las variables.
- `variable1`, `variable2`, ...: Son las variables que se mostrarán, y su número y tipo deben coincidir con los especificadores de formato en la cadena.
#### Ejemplo
```c
#include <stdio.h>

int main() {
    int edad = 25;
    float altura = 1.75;

    // Imprimir datos usando printf
    printf("Edad: %d años\nAltura: %.2f metros\n", edad, altura);

    // Fin del programa
    return 0;
}
```
En este ejemplo, `%d` es un especificador de formato para enteros, y `%f` es un especificador de formato para números de punto flotante. `.2` en `%.2f` especifica que se mostrarán dos decimales en la altura.

### `scanf` - Entrada de Datos:
La función `scanf` se utiliza para leer datos desde la entrada estándar (generalmente el teclado). Su formato básico es:
```c
scanf("formato", &variable1, &variable2, ...);
```
- `"formato"`: Es una cadena de formato que especifica cómo se deben leer los datos. Debe contener especificadores de formato que coincidan con el tipo de las variables a leer.
- `&variable1`, `&variable2`, ...: Son las direcciones de memoria de las variables donde se almacenarán los datos leídos. El operador `&` se utiliza para obtener la dirección de una variable.

#### Ejemplo
```c
#include <stdio.h>

int main() {
    int edad;
    float altura;

    // Solicitar al usuario que ingrese datos usando scanf
    printf("Ingrese su edad: ");
    scanf("%d", &edad);

    printf("Ingrese su altura en metros: ");
    scanf("%f", &altura);

    // Imprimir los datos ingresados
    printf("Usted tiene %d años y mide %.2f metros de altura.\n", edad, altura);

    // Fin del programa
    return 0;
}
```
En este ejemplo, `%d` es un especificador de formato para enteros, y `%f` es un especificador de formato para números de punto flotante. Las direcciones de memoria de `edad` y `altura` se pasan a `scanf` utilizando `&`.

### Consideraciones adicionales:
- **Evitar comportamientos inseguros**: Al utilizar `scanf`, es importante asegurarse de que los especificadores de formato coincidan con el tipo de datos que estás leyendo y de manejar adecuadamente los posibles errores de entrada.
- **Caracteres de escape en `printf`**: Puedes incluir caracteres de escape en la cadena de formato de `printf` (por ejemplo, `\n` para nueva línea).
- **Alineación y formato**: La cadena de formato en `printf` también puede incluir opciones para alinear y formatear la salida. Puedes explorar más opciones y detalles en la documentación de C.