#include <stdio.h>
#include <stdbool.h>

int main() {
  int x,y,z;
  int tempB, tempW;
  bool b,w;

  printf("Ingrese el número x: ");
  scanf("%d", &x);
  printf("Ingrese el número y: ");
  scanf("%d", &y);
  printf("Ingrese el número z: ");
  scanf("%d", &z);
  printf("Ingrese el número booleano b: ");
  scanf("%d", &tempB);
  b = tempB;
  printf("Ingrese el número booleano w: ");
  scanf("%d", &tempW);
  w = tempW;

  printf("La primera expresión es: %d\n", x % 4 == 0);
  printf("La segunda expresión es: %d\n", x + y == 0 && y - x == (-1) * z);
  printf("La tercera expresión es: %d\n", ! b && w);
  
  return 0;
}

// Valores que cumplen:
// x = 8
// y = -8
// z = 16
// b = 0
// w = 0