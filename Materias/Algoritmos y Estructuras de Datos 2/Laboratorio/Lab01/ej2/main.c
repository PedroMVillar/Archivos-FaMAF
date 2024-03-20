/* First, the standard lib includes, alphabetically ordered */
#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

/* Maximum allowed length of the array */
#define MAX_SIZE 100000


unsigned int array_from_stdin(int array[], unsigned int max_size) {
    unsigned int array_size;
    scanf("%u", &array_size);

    if(array_size > max_size) {
        // Accede a memoria no disponible
        // fprintf(stderr, "Error: array size is greater than the maximum allowed size\n");
        array_size = max_size;
    }

    for (unsigned int i = 0; i < array_size; i++){
        scanf("%d", &array[i]);
    }

    return array_size;
}

void array_dump(int a[], unsigned int length) {
    printf("[");
    for (unsigned int i = 0; i < length; i++){
        if (i != 0) {
            printf(" ,");
        }
        printf(" %d", a[i]);
    }
    printf("]\n");
}


int main() {
    int array[MAX_SIZE];
    
    /* parse the file to fill the array and obtain the actual length */
    unsigned int length = array_from_stdin(array, MAX_SIZE);
    
    /*dumping the array*/
    array_dump(array, length);
    
    return EXIT_SUCCESS;
}
