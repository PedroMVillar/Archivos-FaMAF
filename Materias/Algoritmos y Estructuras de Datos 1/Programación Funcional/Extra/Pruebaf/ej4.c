#include<stdbool.h>
#include<stdio.h>

typedef struct {
int ancho;
int altura;
} Rectangulo;
typedef struct {
int max_area;
bool hay_contenido;
} ResultadoRect;
ResultadoRect contenido_uno_en_otro(Rectangulo r1, Rectangulo r2){
ResultadoRect resul;

int area1= r1.ancho * r1.altura;
int area2= r2.ancho * r2.altura;
resul.hay_contenido= false;

if (((r1.ancho<r2.ancho)&&(r1.altura<r2.ancho))||((r1.ancho>=r2.altura)&&(r1.ancho>=r2.ancho))){
resul.hay_contenido=true;

}
if (area1>=area2)
{
  resul.max_area = area1;
}else 
{
  resul.max_area = area2;

  
}


return resul;
}

int main(){
  
ResultadoRect resul;
Rectangulo r1;
Rectangulo r2;

printf("\ningrese un ancho y una altura para r1:");
scanf("%d %d", &r1.ancho, &r1.altura);
printf("\ningrese un ancho y una altura para r2:");
scanf("%d %d", &r2.ancho, &r2.altura);

resul = contenido_uno_en_otro(r1, r2);


if(resul.hay_contenido){
printf("ESTAN CONTENIDOS");
}else{
  printf("NO ESTAN CONTENIDOS");
}

printf("\nEL AREA MAXIMA ES %d", resul.max_area);

return 0;
}
/*ingrese un ancho y una altura para r1:2 3

ingrese un ancho y una altura para r2:4 6
ESTAN CONTENIDOS
EL AREA MAXIMA ES 24*/