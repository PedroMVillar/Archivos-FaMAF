#include <stdio.h>
#include <stdbool.h>

struct bound_data {
    bool is_upperbound;
    bool is_lowerbound;
    bool exists;
    unsigned int where;
};

struct bound_data check_bound(int value, int arr[], unsigned int length);

int main() {
    int tam;
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &tam);
    int a[tam];
    while (tam > 0) {
        printf("Ingrese el valor del arreglo: ");
        scanf("%d", &a[tam - 1]);
        tam--;
    }
    int value;
    printf("Ingrese el valor a buscar: ");
    scanf("%d", &value);
    struct bound_data result = check_bound(value, a, sizeof(a) / sizeof(a[0]));
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
    return 0;
}

struct bound_data check_bound(int value, int arr[], unsigned int length) {
    struct bound_data result = {true, true, false, false};
    unsigned int i = 0;

    while (i < length) {
        if (arr[i] == value) {
            result.exists = true;
            result.where = i;
            break;  // rompe el ciclo una vez que encuentres el valor
        }
        if (arr[i] > value) {
            result.is_upperbound = false;
        }
        if (arr[i] < value) {
            result.is_lowerbound = false;
        }
        i++;
    }

    return result;
}


