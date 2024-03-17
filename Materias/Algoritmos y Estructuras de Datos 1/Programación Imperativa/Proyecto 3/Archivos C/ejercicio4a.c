#include <stdio.h>

void unoE(void);
void unoF(void);

int main(void) {
  unoE();
  unoF();
  return 0;
}

void unoE(void){
  printf("Punto 1.e\n");
  int x, y;
  
  printf("Ingrese el valor de x: ");
  scanf("%d", &x);
  printf("Ingrese el valor de y: ");
  scanf("%d", &y);

  printf("σ0 (x->%d, y->%d)\n", x, y);

  if (x >= y){
    printf("σ1 (x->%d, y->%d)\n", x, y);
    x = 0;
    printf("σ2 (x->%d, y->%d)\n", x, y);
  }

  if (x<= y){
    printf("σ1 (x->%d, y->%d)\n", x, y);
    x = 2;
    printf("σ2 (x->%d, y->%d)\n", x, y);
  }

  printf("σ3 (x->%d, y->%d)\n", x, y);
}

void unoF(void){
  printf("Punto 1.f\n");
  int x, y;

  printf("Ingrese el valor de x: ");
  scanf("%d", &x);
  printf("Ingrese el valor de y: ");
  scanf("%d", &y);

  printf("σ0 (x->%d, y->%d)\n", x, y);
  if (x >= y){
    printf("σ1 (x->%d, y->%d)\n", x, y);
    x = 0;
    printf("σ2 (x->%d, y->%d)\n", x, y);
  }  
  if (x<= y){
    printf("σ1 (x->%d, y->%d)\n", x, y);
    x = 2;
    printf("σ2 (x->%d, y->%d)\n", x, y);
  }

  printf("σ3 (x->%d, y->%d)\n", x, y);
}