#include <stdio.h>
#include<stdbool.h>

int pedir_caracter();
bool es_vocal(char letra);

// ------------------------------------------------------- //
// Implementación
int main(){
    char letra = pedir_caracter();
    if (es_vocal(letra) == 1){
        printf("True");
    }else{
        printf("False");
    }
    return 0; 
}
// ------------------------------------------------------- //

// ------------------------------------------------------- //
// Funcion pedir_caracter
int pedir_caracter(){
  char x;
  printf("Ingrese una letra: ");
  scanf("%c", &x);
  return x;
}
// ------------------------------------------------------- //

// ------------------------------------------------------- //
// Funcion es_vocal
bool es_vocal(char letra){
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' || letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U'){
        return true;
    } else {
        return false;
    }
}
// ------------------------------------------------------- //