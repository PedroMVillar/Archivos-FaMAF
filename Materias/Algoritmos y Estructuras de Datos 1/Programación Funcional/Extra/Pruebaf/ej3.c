#include<stdbool.h>
#define N 5
#include<stdio.h>
#define U 123

typedef struct {
int intentos_totales;
bool esta_autenticado;
int fallos_consecutivos;
} Autenticacion;

Autenticacion autenticar_usuario(char id_usuario, int tam, int passwords[]){
Autenticacion r;
r.esta_autenticado = false;
r.fallos_consecutivos= 0;
r.intentos_totales = 0;
int i=0;
while (i<tam){
  if (id_usuario== passwords[i]){
    r.esta_autenticado = true;
   r.intentos_totales++;
  r.fallos_consecutivos=0;
  }else{
    r.fallos_consecutivos++;
  }
  
  i++;
}
return r;
}
int main(){
  int a[N];
 printf("ingrese valores para el arreglo:");
  int i=0;
  while (i<N)
  {
    scanf("%d",&a[i] );
    i++;
  }
  

Autenticacion r;
r =autenticar_usuario(U,N,a);
if (r.esta_autenticado)
{
  printf("ATUENTICACION EXITOSA!!");
}else{
  printf("ATUENTICACION EXITOSA FALLIDA");
}

printf("\nLa cantidad de errores fueron: %d",r.fallos_consecutivos);
printf("\nLa cantidad de intentos totales : %d", r.intentos_totales);

return 0;
}

/*ingrese valores para el arreglo:000 123 000 123 000
ATUENTICACION EXITOSA!!
La cantidad de errores fueron: 1
La cantidad de intentos totales : 2*/