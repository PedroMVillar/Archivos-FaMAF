---
Materia: Algoritmos1
tags:
  - c
---
`typedef` en C se utiliza para crear alias o nombres alternativos para tipos de datos existentes. Esto puede hacer que el código sea más legible y facilitar su mantenimiento al proporcionar nombres más descriptivos.
```c
#include <stdio.h>

// Definición de una estructura sin typedef
struct Punto {
    int x;
    int y;
};

// Uso de typedef para crear un alias (nombre alternativo) para la estructura
typedef struct {
    int x;
    int y;
} PuntoConTypedef;

int main() {
    // Uso de la estructura sin typedef
    struct Punto punto1 = {3, 5};
    printf("Coordenadas (sin typedef): (%d, %d)\n", punto1.x, punto1.y);

    // Uso de la estructura con typedef
    PuntoConTypedef punto2 = {7, 2};
    printf("Coordenadas (con typedef): (%d, %d)\n", punto2.x, punto2.y);

    return 0;
}
```
En este ejemplo:

- Definimos inicialmente una estructura llamada `Punto` para representar un punto en un plano cartesiano.
- Luego, utilizamos `typedef` para crear un alias llamado `PuntoConTypedef` para la misma estructura.
- En la función `main`, creamos instancias de ambas estructuras (`struct Punto` y `PuntoConTypedef`) y las utilizamos de manera similar.

Usar `typedef` puede hacer que el código sea más limpio y legible, especialmente cuando trabajamos con estructuras y tipos de datos más complejos. Además, permite cambiar fácilmente el tipo subyacente si es necesario, sin afectar el resto del código que utiliza el alias.