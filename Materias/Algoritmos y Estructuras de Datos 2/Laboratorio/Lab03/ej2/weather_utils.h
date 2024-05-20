#ifndef _WEATHER_UTILS_H
    #define _WEATHER_UTILS_H
    #include <assert.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include "array_helpers.h"

    int min_temp(WeatherTable arr);

    void procedimiento(WeatherTable a, int output[YEARS]);

    void cant_con_mas_preci(WeatherTable a, month_t output[YEARS]);
#endif