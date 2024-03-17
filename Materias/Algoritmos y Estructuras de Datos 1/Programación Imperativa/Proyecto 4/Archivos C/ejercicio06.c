#include <stdio.h>

void pedir_arreglo(int n_max, int a[]);
void imprimir_arreglo(int n_max, int a[]);

// ------------------------------------------------------- //
// Implementación
int main(){
    int n_max; 
    printf("Ingrese el numero maximo: ");
    scanf("%d", &n_max);
    int a[n_max];
    pedir_arreglo(n_max, a);
    imprimir_arreglo(n_max, a);
}
// ------------------------------------------------------- //

// ------------------------------------------------------- //
// Funcion pedir_arreglo
void pedir_arreglo(int n_max, int a[]){
    printf("Ingrese %d numeros: ", n_max);
    int i = 0;
    while(i < n_max){
        scanf("%d", &a[i]);
        i++;
    }
}
// ------------------------------------------------------- //

// ------------------------------------------------------- //
// Funcion imprimir_arreglo
void imprimir_arreglo(int n_max, int a[]){
    int i = 0;
    while(i < n_max){
    if(i == 0){
      printf("[ %d , ", a[i]);
    } else if (i > 0 && i < n_max - 1){
      printf("%d , ", a[i]);
    } else {
      printf("%d ]\n", a[i]);
    }
        i++;
    }
}
// ------------------------------------------------------- //