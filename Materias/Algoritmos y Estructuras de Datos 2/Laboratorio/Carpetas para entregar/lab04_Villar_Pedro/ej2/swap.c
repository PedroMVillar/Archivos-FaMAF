#include <stdlib.h>
#include <stdio.h>

void swap(int *x, int *y) {
    int aux = *x;
    *x = *y;
    *y = aux;
}

int main(void) {
    int x=0, y=0;
    x = 6;
    y = 4;
    printf("x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("x = %d, y = %d\n", x, y);
    return EXIT_SUCCESS;
}