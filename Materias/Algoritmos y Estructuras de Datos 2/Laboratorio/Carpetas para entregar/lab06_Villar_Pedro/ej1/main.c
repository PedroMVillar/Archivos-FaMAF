/* First, the standard lib includes, alphabetically ordered */
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "abb.h" /* TAD abb */


void print_help(char *program_name) {
    /* Print the usage help of this program. */
    printf("Usage: %s <input file path>\n\n",
           program_name);
}

char *parse_filepath(int argc, char *argv[]) {
    /* Parse the filepath given by command line argument. */
    char *result = NULL;

    if (argc < 2) {
        print_help(argv[0]);
        exit(EXIT_FAILURE);
    }

    result = argv[1];

    return (result);
}

abb abb_from_file(const char *filepath) {
    FILE *file = NULL;
    abb read_tree;

    read_tree = abb_empty();
    file = fopen(filepath, "r");
    if (file == NULL) {
        fprintf(stderr, "File does not exist.\n");
        exit(EXIT_FAILURE);
    }
    unsigned int i = 0u;
    unsigned int size = 0u;
    int res = 0;
    res = fscanf(file, " %u ", &size);
    if (res != 1) {
        fprintf(stderr, "Invalid format.\n");
        exit(EXIT_FAILURE);
    }
    while (i < size) {
        abb_elem elem;
        res = fscanf(file," %d ", &(elem));
        if (res != 1) {
            fprintf(stderr, "Invalid array.\n");
            exit(EXIT_FAILURE);
        }
        read_tree = abb_add(read_tree, elem);

       ++i;
    }
    fclose(file);
    return read_tree;
}

int main(int argc, char *argv[]) {
    char *filepath = NULL;

    /* parse the filepath given in command line arguments */
    filepath = parse_filepath(argc, argv);

    /* parse the file to obtain an abb with the elements */
    abb tree = abb_from_file(filepath);

    /*
    abb_dump(tree, ABB_IN_ORDER);
    if (!abb_is_empty(tree)) {
        printf("\n");
        printf("raiz: %d\n minimo: %d\n maximo: %d\n", abb_root(tree),
                                                       abb_min(tree),
                                                       abb_max(tree));
    } else {
        printf("\nÁrbol vacío\n");
    } */

    int option = 0;
    while (option != 7) {
        printf("\n");
        printf("\033[1;34m╔══════════════════════════════════════════════════════════╗\n");
        printf("║ \033[1;33mMENÚ PRINCIPAL - Arbol Binario de Busqueda - OPCIONES    \033[1;34m║\n");
        printf("╠══════════════════════════════════════════════════════════╣\n");
        printf("║ \033[1;32m1. Mostrar árbol por pantalla                            \033[1;34m║\n");
        printf("║ \033[1;32m2. Agregar un elemento                                   \033[1;34m║\n");
        printf("║ \033[1;32m3. Eliminar un elemento                                  \033[1;34m║\n");
        printf("║ \033[1;32m4. Chequear existencia de elemento                       \033[1;34m║\n");
        printf("║ \033[1;32m5. Mostrar longitud del árbol                            \033[1;34m║\n");
        printf("║ \033[1;32m6. Mostrar raiz, máximo y mínimo del árbol               \033[1;34m║\n");
        printf("║ \033[1;32m7. Salir                                                 \033[1;34m║\n");
        printf("╚══════════════════════════════════════════════════════════╝\033[0m\n");
        printf("Ingrese una opción: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                abb_dump(tree, ABB_PRE_ORDER);
                break;
            case 2: {
                int element;
                printf("\033[1;35mIngrese el elemento a agregar: \033[0m");
                scanf("%d", &element);
                tree = abb_add(tree, element);
                abb_dump(tree, ABB_IN_ORDER);
                break;
            }
            case 3: {
                int element;
                printf("\033[1;35mIngrese el elemento a eliminar: \033[0m");
                scanf("%d", &element);
                tree = abb_remove(tree, element);
                break;
            }
            case 4: {
                int element;
                printf("\033[1;35mIngrese el elemento a chequear: \033[0m");
                scanf("%d", &element);
                if (abb_exists(tree, element)) {
                    printf("\033[1;32m🟢 | El elemento %d está en el árbol.\n\033[0m", element);
                } else {
                    printf("\033[1;31m🔴 | El elemento %d no está en el árbol.\n\033[0m", element);
                }
                break;
            }
            case 5: {
                    printf("\033[1;34m╔══════════════════════════════════════════════════════════╗\n");
                    printf("║ \033[1;33mLa longitud del árbol es: %d \n\033[1;34m║\n", abb_length(tree));
                    printf("╚══════════════════════════════════════════════════════════╝\033[0m\n");
                break;
            }
            case 6:
                printf("\033[1;34m╔══════════════════════════════════════════════════════════╗\n");
                printf("║ \033[1;33mRaíz: %d                                                  \033[1;34m║\n", abb_root(tree));
                printf("║ \033[1;33mMínimo: %d                                                \033[1;34m║\n", abb_min(tree));
                printf("║ \033[1;33mMáximo: %d                                               \033[1;34m║\n", abb_max(tree));
                printf("╚══════════════════════════════════════════════════════════╝\033[0m\n");
                break;
            case 7:
                break;
            default:
                printf("\033[1;31mOpción inválida. Por favor, ingrese una opción válida.\033[0m\n");
                break;
        }
    }

    tree = abb_destroy(tree);


    return (EXIT_SUCCESS);
}
