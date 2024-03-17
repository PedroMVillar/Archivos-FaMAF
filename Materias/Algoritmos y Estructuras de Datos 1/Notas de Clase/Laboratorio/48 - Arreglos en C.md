---
Materia: Algoritmos1
tags:
  - c
---
Los arreglos unidimensionales en C son estructuras de datos que te permiten almacenar elementos del mismo tipo en una secuencia lineal. 
### 1. Declaración de un arreglo unidimensional:
```c
tipo_de_dato nombre_del_arreglo[tamaño];
```
- `tipo_de_dato`: Especifica el tipo de datos de los elementos del arreglo.
- `nombre_del_arreglo`: Es el identificador del arreglo.
- `tamaño`: Indica la cantidad de elementos en el arreglo.
Ejemplo:
```c
int numeros[5];
```
### 2. Inicialización de un arreglo unidimensional:
#### a. Inicialización al momento de la declaración:
```c
int numeros[5] = {1, 2, 3, 4, 5};
```
#### b. Inicialización después de la declaración:
```c
int numeros[5];
numeros[0] = 1;
numeros[1] = 2;
numeros[2] = 3;
numeros[3] = 4;
numeros[4] = 5;
```

### 3. Lectura de un arreglo unidimensional:
Se usa un bucle para leer los elementos del arreglo uno por uno.
```c
#include <stdio.h>

void leerArreglo(int arreglo[], int longitud) {
    for (int i = 0; i < longitud; i++) {
        printf("Ingrese el valor para el elemento %d: ", i);
        scanf("%d", &arreglo[i]);
    }
}

int main() {
    int numeros[5];
    
    // Llamada a la función para leer el arreglo
    leerArreglo(numeros, 5);

    // Imprimir el arreglo después de la lectura
    printf("Arreglo ingresado: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }

    return 0;
}
```

### 4. Definición de funciones para leer e imprimir un arreglo:
```c
#include <stdio.h>

void leerArreglo(int arreglo[], int longitud) {
    for (int i = 0; i < longitud; i++) {
        printf("Ingrese el valor para el elemento %d: ", i);
        scanf("%d", &arreglo[i]);
    }
}

void imprimirArreglo(int arreglo[], int longitud) {
    printf("Arreglo: ");
    for (int i = 0; i < longitud; i++) {
        printf("%d ", arreglo[i]);
    }
    printf("\n");
}

int main() {
    int numeros[5];

    // Llamada a la función para leer el arreglo
    leerArreglo(numeros, 5);

    // Llamada a la función para imprimir el arreglo
    imprimirArreglo(numeros, 5);

    return 0;
	}
```
En este ejemplo, se definen dos funciones: `leerArreglo` e `imprimirArreglo`. La primera solicita al usuario ingresar valores para cada elemento del arreglo, y la segunda imprime los elementos del arreglo. Estas funciones son llamadas desde la función `main`.
