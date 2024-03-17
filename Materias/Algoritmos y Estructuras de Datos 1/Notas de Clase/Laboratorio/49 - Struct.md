---
Materia: Algoritmos1
tags:
  - c
---
En C, `struct` es una palabra clave utilizada para definir estructuras, que son colecciones de diferentes tipos de datos agrupados bajo un solo nombre. Una estructura (struct) permite crear un nuevo tipo de dato personalizado que puede contener variables de diferentes tipos.

### 1. Declaración de una Estructura:
Para declarar una estructura, utilizamos la palabra clave `struct`, seguida por el nombre de la estructura y un bloque de declaración que especifica las variables miembro.
```c
struct Persona {
    char nombre[50];
    int edad;
    float altura;
};
```
En este ejemplo, hemos declarado una estructura llamada `Persona` que tiene tres variables miembro: `nombre` (un arreglo de caracteres), `edad` (un entero), y `altura` (un número de punto flotante).

### 2. Creación de Variables de una Estructura:
Después de declarar una estructura, puedes crear variables de ese tipo, similar a como creas variables de tipos de datos básicos.
```c
struct Persona persona1;
struct Persona persona2;
```

### 3. Acceso a Miembros de una Estructura:
Para acceder a los miembros de una estructura, utilizamos el operador punto (`.`).
```c
strcpy(persona1.nombre, "Juan");
persona1.edad = 25;
persona1.altura = 1.75;
```

### 4. Inicialización de una Estructura:
Puedes inicializar una estructura al momento de la declaración o más adelante en el código.
#### a. Inicialización al momento de la declaración:
```c
struct Persona persona3 = {"María", 30, 1.68};
```
#### b. Inicialización después de la declaración:
```c
struct Persona persona4;
strcpy(persona4.nombre, "Ana");
persona4.edad = 22;
persona4.altura = 1.60;
```

### 5. Uso de Estructuras como Parámetros y Devolución de Funciones:
Puedes pasar estructuras como parámetros a funciones o devolver estructuras desde funciones.
```c
#include <stdio.h>

// Definición de la estructura Punto
struct Punto {
    int x;
    int y;
};

// Función que imprime las coordenadas de un punto
void imprimirPunto(struct Punto p) {
    printf("Coordenadas: (%d, %d)\n", p.x, p.y);
}

// Función que crea y devuelve un nuevo punto
struct Punto crearPunto(int x, int y) {
    struct Punto nuevoPunto;
    nuevoPunto.x = x;
    nuevoPunto.y = y;
    return nuevoPunto;
}

int main() {
    // Uso de la estructura Punto
    struct Punto punto1 = {3, 5};
    imprimirPunto(punto1);

    // Creación de un nuevo punto mediante la función
    struct Punto punto2 = crearPunto(7, 2);
    imprimirPunto(punto2);

    return 0;
}
```
En este ejemplo:

- La estructura `Punto` tiene dos variables miembro `x` e `y` para representar las coordenadas del punto.
- La función `imprimirPunto` imprime las coordenadas de un punto.
- La función `crearPunto` crea y devuelve un nuevo punto con las coordenadas proporcionadas.

### 6. Ventajas de las Estructuras:
- **Agrupación de Datos:** Permiten agrupar diferentes tipos de datos bajo un solo nombre, proporcionando organización y claridad al código.
- **Definición de Tipos de Datos Personalizados:** Permiten crear nuevos tipos de datos personalizados que pueden ser utilizados de manera similar a los tipos de datos básicos.
- **Facilita la Mantenibilidad:** Mejora la claridad del código y facilita la manipulación de datos relacionados.


