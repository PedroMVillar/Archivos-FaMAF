#include <stdio.h>

int main() {
  int x, y, z, m;
  
  printf("Ingrese un valor para x: ");
  scanf("%d", &x);
  printf("Ingrese un valor para y: ");
  scanf("%d", &y);
  printf("Ingrese un valor para z: ");
  scanf("%d", &z);
  printf("Ingrese un valor para m: ");
  scanf("%d", &m);

  printf("σ0 (x->%d, y->%d, z->%d, m->%d)\n", x, y, z, m);
  if (x < y){
    m = x;
  } else {
    m = y;
  }
  printf("σ1 (x->%d, y->%d, z->%d, m->%d)\n", x, y, z, m);
  if (m<z){} else {
    m = z;
  }
  printf("σ2 (x->%d, y->%d, z->%d, m->%d)\n", x, y, z, m);
  
  return 0;
}

/* 
Ingrese un valor para x: 5
Ingrese un valor para y: 4
Ingrese un valor para z: 8
Ingrese un valor para m: 0
σ0 (x->5, y->4, z->8, m->0)
σ1 (x->5, y->4, z->8, m->4)
σ2 (x->5, y->4, z->8, m->4)
*/