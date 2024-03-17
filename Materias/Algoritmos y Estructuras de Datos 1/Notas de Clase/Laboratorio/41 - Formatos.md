---
Materia: Algoritmos1
tags:
  - c
---
En C, los especificadores de formato se utilizan en las funciones de entrada/salida, como `printf` y `scanf`, para controlar cómo se leen o se escriben los datos. Aquí tienes una lista de algunos de los especificadores de formato más comunes:
## Formatos para enteros:
- `%d`: Entero con signo (decimal).
- `%u`: Entero sin signo (decimal).
- `%x` o `%X`: Entero sin signo en hexadecimal (letras minúsculas o mayúsculas).
Ejemplo:
```c
int numero = 42;
printf("%d\n", numero); // Imprime el entero con signo
```

## Formatos para números de punto flotante:
- `%f`: Notación de punto flotante (decimal).
- `%e` o `%E`: Notación científica (exponencial).
- `%g` o `%G`: Usa `%f` o `%e` según sea necesario para la representación más corta.
Ejemplo:
```c
float pi = 3.14159;
printf("%f\n", pi); // Imprime el número de punto flotante
```

## Formatos para caracteres y cadenas:
- `%c`: Carácter.
- `%s`: Cadena de caracteres.
Ejemplo:
```c
char letra = 'A';
char cadena[] = "Hola";
printf("%c\n", letra); // Imprime el carácter
printf("%s\n", cadena); // Imprime la cadena
```

## Formato para imprimir porcentajes:
- `%%`: Imprime un carácter de porcentaje literal.
Ejemplo:
```c
printf("El resultado es 100%%\n"); // Imprime "El resultado es 100%"
```
