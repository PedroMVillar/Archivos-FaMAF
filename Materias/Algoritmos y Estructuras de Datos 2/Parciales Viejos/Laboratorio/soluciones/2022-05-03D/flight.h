/*
  @file flight.h
  @brief Defines airport flight data
*/

#ifndef _FLIGHT_H
#define _FLIGHT_H
#define EXPECTED_FLIGHT_FILE_FORMAT "#%c# "

typedef enum { last_mile , layover } flight_t;

#include <stdio.h>

/** @brief Type used to represent flight data.*/
typedef struct _flight
{
  char code;
  flight_t type;
  unsigned int hour; // hour
  unsigned int delay; // minutes
  unsigned int passengers_amount;
} Flight;

/**
 * @brief reads flight data from file line
 * @details
 * Flight file line must contain:
 * <unsigned int> <unsigned int> <unsigned int> #<char>#
 *
 * @param[in] file Opened file stream
 * @return Flight structure which contain read information from file
 */
Flight flight_from_file(FILE* file);

#endif //_FLIGHT_H
