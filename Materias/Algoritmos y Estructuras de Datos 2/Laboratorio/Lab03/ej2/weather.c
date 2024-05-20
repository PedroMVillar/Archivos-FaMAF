/*
  @file weather.c
  @brief Implements weather mesuarement structure and methods
*/
#include <stdlib.h>
#include "weather.h"

static const int AMOUNT_OF_WEATHER_VARS = 6 ;

Weather weather_from_file(FILE* file)
{
    Weather weather;
    int r;
    r = fscanf(file," %d %d %d %u %u %u",&weather._average_temp,&weather._max_temp,&weather._min_temp,
                                        &weather._pressure,&weather._moisture,&weather._rainfall);;
    if (r!=AMOUNT_OF_WEATHER_VARS){
      exit(EXIT_FAILURE);
    }                                   
    return weather;
}

void weather_to_file(FILE* file, Weather weather)
{
    fprintf(file, EXPECTED_WEATHER_FILE_FORMAT, weather._average_temp, 
            weather._max_temp, weather._min_temp, weather._pressure, weather._moisture, weather._rainfall);
}
