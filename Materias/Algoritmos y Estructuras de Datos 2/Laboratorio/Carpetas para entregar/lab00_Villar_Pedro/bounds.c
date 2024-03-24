#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#define ARRAY_SIZE 4

struct bound_data {
    bool is_upperbound;
    bool is_lowerbound;
    bool exists;
    unsigned int where;
};

struct bound_data check_bound(int value, int arr[], unsigned int length) {
    struct bound_data res = {true, true, false, false};
    unsigned int i = 0;

    while (i < length) {
        if (arr[i] == value) {
            res.exists = true;
            res.where = i;
            break;  
        }
        if (arr[i] > value) {
            res.is_upperbound = false;
        }
        if (arr[i] < value) {
            res.is_lowerbound = false;
        }
        i++;
    }
    return res;
}

int main(void) {
    int a[ARRAY_SIZE];
    int i = 0;
    while (i < ARRAY_SIZE) {
        printf("Ingrese el valor del arreglo: ");
        scanf("%d", &a[i]);
        i++;
    };
    int value;
    printf("Ingrese el valor a buscar: ");
    scanf("%d", &value);
    struct bound_data result = check_bound(value, a, ARRAY_SIZE);

    if (result.exists) {
        printf("El valor %d existe en el arreglo en la posición %d\n", value, result.where);
    } else {
        printf("El valor %d no se encuentra en el arreglo\n", value);
    }
    if (result.is_upperbound) {
        printf("El valor %d es mayor que todos los valores del arreglo\n", value);
    } else {
        printf("El valor %d no es mayor que todos los valores del arreglo\n", value);
    }
    if (result.is_lowerbound) {
        printf("El valor %d es menor que todos los valores del arreglo\n", value);
    } else {
        printf("El valor %d no es menor que todos los valores del arreglo\n", value);
    }

    return EXIT_SUCCESS;
}

