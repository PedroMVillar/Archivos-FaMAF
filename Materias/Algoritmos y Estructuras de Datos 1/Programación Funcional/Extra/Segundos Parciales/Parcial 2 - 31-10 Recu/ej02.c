#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

void pedir_arreglo(int tam, int a[]);
int pedir_entero(char* name);
void imprimir_entero(char name, int x);
bool todos_pares(int a[], int tam, int pos1, int pos2);

// ------------------------------------------------------- //
// Implementación
int main(){
    int tam = 5;
    int pos1 = pedir_entero("pos1");
    int pos2 = pedir_entero("pos2");
    int a[tam];
    pedir_arreglo(tam, a);
    bool res = todos_pares(a, tam, pos1, pos2);
    if (res == 1){
        printf("True");
    } else {
        printf("False");
    }
}
// ------------------------------------------------------- //

// ------------------------------------------------------- //
// Función para pedir arreglo
void pedir_arreglo(int tam, int a[]){
    int i= 0;
    printf("-------- El arreglo será de tamaño %d --------\n", tam);
    while (i<tam){
        printf("Ingrese el valor %d: ", i+1);
        scanf("%d", &a[i]);
        i++;
    }
}
// ------------------------------------------------------- //

// ------------------------------------------------------- //
// Función pedirEntero() del proyecto 3
int pedir_entero(char* name){
  int x;
  printf("Ingrese el valor para la variable %s: ", name);
  scanf("%d", &x);
  return x;
}
//Función imprimirEntero() del proyecto 3
void imprimir_entero(char name, int x) {
  printf("La variable %c es %d\n", name, x);
}
// ------------------------------------------------------- //

// ------------------------------------------------------- //
// Funcion todos pares
bool todos_pares(int a[], int tam, int pos1, int pos2){
    assert(pos1 < tam && pos2 < tam && pos1 <= pos2);
    int i = pos1;
    while (i <= pos2){
        if (a[i] % 2 != 0){
            return false;
        }
        i++;
    }
    return true;
}
// ------------------------------------------------------- //