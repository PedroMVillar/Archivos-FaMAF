#include<stdio.h>
#include<assert.h>



void imprimir_entero(int x){
  printf("el valor nuevo es: %d",x);
}






int main(){
int x, y, z;


printf("Ingrese un valor para x:");
scanf("%d",&x);
printf("\nIngrese un valor para y:");
scanf("%d",&y);
printf("\nIngrese un valor para z:");
scanf("%d",&z);
int X,Y,Z;


assert((x==X)&&(y==Y)&&(z==Z)&&(X>0)&&(X+Y!=0));
if ((x+y)%2==0)
{
  x=3*x;
  y=4*y;
  z=x+y;
}else{
  x=x-x;
  y=6*y;
  z=x-y-1;
}
X=x;
Z=z;
Y=y;

imprimir_entero(x);
imprimir_entero(y);
imprimir_entero(z);
assert((Y %2==0 && Z%2==0 &&



((x==3*X)&&(y==4*y)&&(z=X+Y)))


||

((x==X-X)&&(y==6*Y)&&(z==X-Y-1)));



}