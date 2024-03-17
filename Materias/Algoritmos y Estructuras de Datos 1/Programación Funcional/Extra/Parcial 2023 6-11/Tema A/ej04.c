#include <stdio.h>
#include <stdbool.h>

struct cuadrilatero {
    int l1;
    int l2;
    int l3;
    int l4;
};

struct tipo_cuadrilatero {
    bool es_cuadrado;
    bool es_rectangulo;
    bool es_trapecio;
    bool ninguno_anteriores;
};

struct tipo_cuadrilatero verificar_cuadrilatero(struct cuadrilatero t);

int main(){
    struct cuadrilatero cuad;
    printf("Ingrese l1: ");
    scanf("%d", &cuad.l1);
    printf("Ingrese l2: ");
    scanf("%d", &cuad.l2);
    printf("Ingrese l3: ");
    scanf("%d", &cuad.l3);
    printf("Ingrese l4: ");
    scanf("%d", &cuad.l4);
    struct tipo_cuadrilatero res;
    res = verificar_cuadrilatero(cuad);
    if (res.es_cuadrado == true){
        printf("El cuadrilatero es un cuadrado");
    } else if (res.es_rectangulo == true){
        printf("El cuadrilatero es un rectangulo");
    } else if (res.es_trapecio == true){
        printf("El cuadrilatero es un trapecio");
    } else if (res.ninguno_anteriores == true){
        printf("El cuadrilatero no es ni cuadrado ni rectangulo ni trapecio");
    }
    return 0;
}

struct tipo_cuadrilatero verificar_cuadrilatero(struct cuadrilatero t){
    struct tipo_cuadrilatero r = { false, false, false, false };
    if (t.l1 == t.l2 && t.l2 == t.l3 && t.l4){
        r.es_cuadrado = true;
    } else if ( (t.l1 == t.l3) && (t.l2 == t.l4 ) && (t.l1 != t.l2)){
        r.es_rectangulo = true;
    } else if ( (t.l1 == t.l3) && (t.l2 != t.l4) ){
        r.es_trapecio = true;
    } else if ((r.es_cuadrado == false) && (r.es_rectangulo == false) && (r.es_trapecio == false)){
        r.ninguno_anteriores = true;
    }
    return r;
}