/*
@file array_helpers.c
@brief Array Helpers method implementation
*/
#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "array_helpers.h"

static const int EXPECTED_DIM_VALUE = 2;

static const char* CITY_NAMES[CITIES] = {
    "Cordoba", "Rosario", "Posadas", "Tilcara", "Bariloche"};
static const char* SEASON_NAMES[SEASONS] = {"low", "high"};

void array_dump(BakeryProductTable a)
{
    for (unsigned int city = 0u; city < CITIES; ++city)
    {
        for (unsigned int season = 0u; season < SEASONS; ++season)
        {
            fprintf(stdout, "%s in %s season: flour (%u,%u) Yeast (%u,%u) Butter (%u,%u) Sales value %u",
                    CITY_NAMES[city], SEASON_NAMES[season], a[city][season].flour_cant,
                    a[city][season].flour_price, a[city][season].yeast_cant,
                    a[city][season].yeast_price, a[city][season].butter_cant,
                    a[city][season].butter_price, a[city][season].sale_value);
            fprintf(stdout, "\n");
        }
    }
}

unsigned int best_profit(BakeryProductTable a)
{
    unsigned int max_profit = 0u;
    unsigned int costo = 0u;
    for (unsigned int ciudad = 0; ciudad < CITIES; ciudad++)
    {
        for (season_t temporadas = 0; temporadas < SEASONS; temporadas++)
        {
            costo = ((a[ciudad][temporadas].flour_cant)*(a[ciudad][temporadas].flour_price)) +
            ((a[ciudad][temporadas].yeast_cant)*(a[ciudad][temporadas].yeast_price)) +
            ((a[ciudad][temporadas].butter_cant)*(a[ciudad][temporadas].butter_price));
            
            if (a[ciudad][temporadas].sale_value - costo > max_profit)
            {
                max_profit = a[ciudad][temporadas].sale_value - costo;
            }
            
        }
        
    }
    
    return max_profit;
}

void array_from_file(BakeryProductTable array, const char* filepath)
{
    FILE* file = NULL;

    file = fopen(filepath, "r");
    if (file == NULL)
    {
        fprintf(stderr, "File does not exist.\n");
        exit(EXIT_FAILURE);
    }
    
    int i = 0;
    while (!feof(file))
    {   unsigned int codciudad;
        season_t temp;
        int res = fscanf(file,"##%u??%u ",&codciudad,&temp);
        if (res != EXPECTED_DIM_VALUE)
        {
            fprintf(stderr, "Invalid file.\n");
            exit(EXIT_FAILURE);
        }
        BakeryProduct product = bakery_product_from_file(file);
        array[codciudad][temp] = product;
        /* COMPLETAR: Leer y guardar product en el array multidimensional*/
        /* Agregar las validaciones que considere necesarias*/
        /* Completar*/
        ++i;
    }
    if( i != CITIES*SEASONS)
    {
        fprintf(stderr, "File is incomplete or overloaded. \n");
        exit(EXIT_FAILURE);
    }
    fclose(file);
}
