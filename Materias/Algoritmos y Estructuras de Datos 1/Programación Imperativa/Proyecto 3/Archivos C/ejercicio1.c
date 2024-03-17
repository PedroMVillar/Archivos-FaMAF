#include <stdio.h>

int main(void) {
  int x,y,z;

  printf("Ingrese el número x: ");
  scanf("%d", &x);
  printf("Ingrese el número y: ");
  scanf("%d", &y);
  printf("Ingrese el número z: ");
  scanf("%d", &z);

  printf("El resultado de x + y + 1 es: %d\n", x + y + 1);
  printf("El resultado de z * z + y * 45 - 15 * x es: %d\n", z * z + y * 45 - 15 * x);
  printf("El resultado de y - 2 == (x * 3 + 1) mod 5 es: %d\n", y - 2 == (x * 3 + 1) % 5);
  printf("El resultado de y / 2 * x es: %d\n", y / 2 * x);
  printf("El resultado de y < x * z es: %d\n", y < x * z);

  
  return 0;
}

/* 
-------------------------------------------------------------------
| Expresión                  | (x=7, y=3, z=5) | (x=1, y=10, z=8) |
-------------------------------------------------------------------
| x + y + 1                  |        11       |        12        |
| z * z + y * 45 -15 * x     |        55       |       499        |
| y - 2 == (x * 3 + 1) % 5   |        0        |        0         |
| y / 2 * x                  |        7        |        5         | 
| y < x * z                  |        1        |        0         |
-------------------------------------------------------------------
*/

/*
En la última expresión, el resultado es 1 si la expresión es verdadera y 0 si es falsa. Un booleano.	
*/