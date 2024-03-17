#include <stdio.h>

int pedir_entero(char name);
void imprimir_entero(char name, int x);

int main(void) {
  int y = pedir_entero('n');
  imprimir_entero('n', y);
  return 0;
}

int pedir_entero(char name){
  int x;
  printf("Ingrese el valor para la variable %c: ", name);
  scanf("%d", &x);
  return x;
}

void imprimir_entero(char name, int x) {
  printf("La variable %c es %d\n", name, x);
}