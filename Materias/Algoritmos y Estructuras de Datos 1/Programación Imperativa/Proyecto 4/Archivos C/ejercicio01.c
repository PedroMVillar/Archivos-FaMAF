#include <stdio.h>
#include <assert.h>

void hola_hasta(int n);

// ------------------------------------------------------- //
// Implementación
int main() {
    int n;
    printf("Ingrese un numero: ");
    scanf("%d", &n);
    assert(n > 0);
    hola_hasta(n);
    return 0;
}
// ------------------------------------------------------- //

// ------------------------------------------------------- //
void hola_hasta(int n) {
    int i = 0;
    while (i < n) {
        printf("Hola\n");
        i++;
    }
}
// ------------------------------------------------------- //