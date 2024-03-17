#include <stdio.h>

void unoA(void);
void unoB(void);
void unoC(void);

int main(void) {
  unoA();
  unoB();
  unoC();
  return 0;
}

void unoA(void) {
  printf("Punto 1.a\n");
  int x;
  
  printf("Ingrese el valor de x: ");
  scanf("%d", &x);

  printf("σ0: (x->%d)\n", x);
  x = 5;
  printf("σ1: (x->%d)\n", x);
}

void unoB(void) {
  printf("Punto 1.b\n");
  int x, y;

  printf("Ingrese el valor de x: ");
  scanf("%d", &x);
  printf("Ingrese el valor de y: ");
  scanf("%d", &y);

  printf("σ0: (x->%d, y->%d)\n", x, y);
  x = x + y;
  printf("σ1: (x->%d, y->%d)\n", x, y);
  y = y + y;
  printf("σ2: (x->%d, y->%d)\n", x, y);
}

void unoC(void) {
  printf("Punto 1.c\n");
  int x, y;
  
  printf("Ingrese el valor de x: ");
  scanf("%d", &x);
  printf("Ingrese el valor de y: ");
  scanf("%d", &y);

  printf("σ0 (x->%d, y->%d)\n", x, y);
  y = y + y;
  printf("σ1 (x->%d, y->%d)\n", x, y);
  x = x + y;
  printf("σ2 (x->%d, y->%d)\n", x, y);
}