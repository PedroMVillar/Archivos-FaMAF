#include <stdio.h>

void unoH(void){
  printf("Punto 1.h\n");
  int i, iv = 0;

  printf("Ingrese el valor de i: ");
  scanf("%d", &i);

  while(i != 0){
    iv++;
    printf("σ1 %d (i->%d)\n", iv, i);
    i = i - 1;
    printf("σ2 %d (i->%d)\n", iv, i);
  }
  printf("σ2 (i->%d)\n", i);
}
void unoI(void){
  printf("Punto 1.i\n");
  int i, iv = 0;
  
  printf("Ingrese el valor de i: ");
  scanf("%d", &i);

  while (i != 0){
    iv++;
    printf("σ1 %d (i->%d)\n", iv, i);
    i=0;
    printf("σ2 %d (i->%d)\n", iv, i);
  }
  printf("σ3 (i->%d)\n", i);
}

int main(void) {
  unoH();
  unoI();
  return 0;
}