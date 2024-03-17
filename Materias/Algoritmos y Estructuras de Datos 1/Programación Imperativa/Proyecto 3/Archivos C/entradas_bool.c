#include <stdio.h>
#include <stdbool.h>

bool pedir_booleano(char name);
void imprimir_booleano(char name, bool x);

int main(void) { 
  bool y = pedir_booleano('n');
  imprimir_booleano('n',y);
  return 0;
}

bool pedir_booleano(char name){
  int tempX;
  bool x;
  printf("Ingrese un valor booleano para %c: ", name);
  scanf("%d", &tempX);
  x = tempX;
  return x;
}

void imprimir_booleano(char name, bool x){
  if (x == 0){
    printf("%c = Falso\n", name);
  } else {
    printf("%c = Verdadero\n", name);
  }
}