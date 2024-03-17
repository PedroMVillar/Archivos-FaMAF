#include <stdio.h>
#include <limits.h>
#include <float.h>

typedef struct _persona {
	char *nombre;
	int edad;
	float altura;
	float peso;
} persona_t;

float peso_promedio(unsigned int longitud, persona_t arr[]);
persona_t persona_de_mayor_edad(unsigned int longitud, persona_t arr[]);
persona_t persona_de_menor_altura(unsigned int longitud, persona_t arr[]);

int main() {
	persona_t p1 = {.nombre="Paola", .edad=21, .altura=1.85, .peso=75};
	persona_t p2 = {.nombre="Luis", .edad=54, .altura=1.75, .peso=69};
	persona_t p3 = {.nombre="Julio", .edad=40, .altura=1.70, .peso=80};
	unsigned int longitud = 3;
	persona_t arr[] = {p1, p2, p3};
	printf("El peso promedio es %f\n", peso_promedio(longitud, arr));
	persona_t p = persona_de_mayor_edad(longitud, arr);
	printf("El nombre de la persona con mayor edad es %s\n", p.nombre);
	p = persona_de_menor_altura(longitud, arr);
	printf("El nombre de la persona con menor altura es %s\n", p.nombre);
	return 0;
}

float peso_promedio(unsigned int longitud, persona_t arr[]) {
	unsigned int i = 0;
	float promedio;

	while(i<longitud) {
		promedio = promedio + arr[i].peso;
		i=i+1;
	}

	promedio = promedio / longitud;
	return promedio;
}

persona_t persona_de_mayor_edad(unsigned int longitud, persona_t arr[]) {
	unsigned int i = 0;
	int edad = INT_MIN;
	persona_t res;

	while(i<longitud) {
		if(edad<arr[i].edad) {
			edad = arr[i].edad;
			res = arr[i];
		}
		i=i+1;
	}
	return res;
}

persona_t persona_de_menor_altura(unsigned int longitud, persona_t arr[]) {
	unsigned int i = 0;
	float altura = FLT_MAX;
	persona_t res;

	while(i<longitud) {
		if(altura>arr[i].altura) {
			altura = arr[i].altura;
			res = arr[i];
		}
		i=i+1;
	}
	return res;
}

/*
gcc -Wall -Wextra -std=c99 personas.c -o personas
El peso promedio es 74.666664
El nombre de la persona con mayor edad es Luis
El nombre de la persona con menor altura es Julio
*/