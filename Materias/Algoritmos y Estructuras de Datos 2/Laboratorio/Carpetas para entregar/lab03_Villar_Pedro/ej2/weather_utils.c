#include <stdio.h>
#include <stdlib.h>
#include "array_helpers.h"

int min_temp(WeatherTable arr){
    int min = arr[0][0][0]._min_temp;
    for(unsigned int i = 0; i < YEARS; i++){
        for(unsigned int j = 0; j < MONTHS; j++){
            for(unsigned int k = 0; k < DAYS; k++){
                if(arr[i][j][k]._min_temp < min){
                    min = arr[i][j][k]._min_temp;
                }
            }
        }
    }
    return min;
}

void procedimiento(WeatherTable a, int output[YEARS]){
    for(unsigned int year = 0; year < YEARS; year++){
        int max = a[year][0][0]._max_temp;
        for(unsigned int month = 0; month < MONTHS; month++){
            for(unsigned int day = 0; day < DAYS; day++){
                if(a[year][month][day]._max_temp > max){
                    max = a[year][month][day]._max_temp;
                }
            }
        }
        output[year] = max;
    }
}

void cant_con_mas_preci(WeatherTable a, month_t output[YEARS]){
    for(unsigned int year = 0; year < YEARS; year++){
        unsigned int max = a[year][0][0]._rainfall;
        month_t mes = january;
        for(unsigned int i = 0; i < MONTHS; i++){
            for(unsigned int day = 0; day < DAYS; day++){
                if(a[year][i][day]._rainfall > max){
                    max = a[year][i][day]._rainfall;
                    mes = i;
                }
            }
        }
        output[year] = mes;
    }
}