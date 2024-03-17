#include <stdio.h>

int pedir_valor(char name);
int cuatroB(int x, int y, int z, int m);
void imprimir_entero(char name, int x);

int main(void) {
	int x = pedir_valor('x');
	int y = pedir_valor('y');
	int z = pedir_valor('z');
  int m = pedir_valor('m');
  // Implementación del ejercicio 4b
    imprimir_entero('x', x);
  imprimir_entero('y', y);
  imprimir_entero('z', z);
  imprimir_entero('m', m);
  if (x < y){
    m = x;
  } else {
    m = y;
  }
  imprimir_entero('x', x);
  imprimir_entero('y', y);
  imprimir_entero('z', z);
  imprimir_entero('m', m);
  if (m<z){} else {
    m = z;
  }
  imprimir_entero('x', x);
  imprimir_entero('y', y);
  imprimir_entero('z', z);
  imprimir_entero('m', m);
	return 0;
}

int pedir_valor(char name) {
	int valor;
	printf("Ingrese el valor para %c: ", name);
	scanf("%d", &valor);
	return valor;
}

void imprimir_entero(char name, int x) {
  printf("La variable %c es %d\n", name, x);
}

/* 
- La ventaja es ahorrar la repetición de scanf y printf.
- Se puede aplicar a los demas programas.
*/