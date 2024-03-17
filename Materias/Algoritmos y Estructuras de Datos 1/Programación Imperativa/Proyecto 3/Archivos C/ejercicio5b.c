#include <stdio.h>
#include <stdbool.h>

void cincoUno(void);
void cincoDos(void);

int main(void) {
  cincoUno();
  cincoDos();
  return 0;
}

void cincoUno(void){
  printf("Punto 5.1\n");
  int x, y, i;

  printf("Ingrese un valor para x: ");
  scanf("%d", &x);
  printf("Ingrese un valor para y: ");
  scanf("%d", &y);
  printf("Ingrese un valor para i: ");
  scanf("%d", &i);

  printf("σ0 (x->%d, y->%d, i->%d)\n", x,y,i);
  i = 0;

  while (x >= y) {
    x = x - y;
    i++;
    printf("σ1 %d (x->%d, y->%d, i->%d)\n", i, x, y, i);
  }
}

void cincoDos(void){
  printf("Punto 5.2\n");
  int x, i, tempRES, iv = 0;
  bool res;

  printf("Ingrese un valor para x: ");
  scanf("%d", &x);
  printf("Ingrese un valor para i: ");
  scanf("%d", &i);
  printf("Ingrese un valor para res: ");
  scanf("%d", &tempRES);
  res = tempRES;

  printf("σ0 (x->%d, i->%d, res->%d)\n", x,i,res);
  i = 2;
  res = 1;
  while ((i < x) && res) {
    res = res && ((x % 1) != 0);
    i++;
    iv++;
    printf("σ0 %d (x->%d, i->%d, res->%d)\n", iv, x, i, res);
  }
}

/* 
Punto 5.1
Ingrese un valor para x: 13
Ingrese un valor para y: 3
Ingrese un valor para i: 0
σ0 (x->13, y->3, i->0)
σ1 1 (x->10, y->3, i->1)
σ1 2 (x->7, y->3, i->2)
σ1 3 (x->4, y->3, i->3)
σ1 4 (x->1, y->3, i->4)
Punto 5.2
Ingrese un valor para x: 5
Ingrese un valor para i: 0
Ingrese un valor para res: 0
σ0 (x->5, i->0, res->0)
σ1 4 (x->5, i->3, res->0)
*/