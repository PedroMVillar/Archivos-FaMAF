/*
  @file array_helpers.h
  @brief defines array helpers methods. These methods operates over multidimensional array of layover
*/
#ifndef _ARRAY_HELPERS_H
#define _ARRAY_HELPERS_H

#include <stdbool.h>
#include "flight.h"

#define HOURS 24
#define TYPE 2

#define MAX_LM_DELAY_ALLOWED 60
#define MAX_LAYOVER_DELAY_ALLOWED 120
#define COMPENSATION_PER_MINUTE 0.5

typedef Flight DelayTable [TYPE][HOURS];

/**
 * @brief Write the content of the array 'a' into stdout.
 * @param[in] a array to dump in stdout
 */
void array_dump(DelayTable a);

/**
 * @brief calculates how much compensation the company has to pay.
 * @param[in] a array
 */
unsigned int compensation_cost(DelayTable a);


/**
 * @brief reads an array of delay information from file
 * @details
 *
 *  Each element is read from the file located at 'filepath'.
 *  The file must exist in disk and must have its contents in a sequence of
 *  lines, each with the following format:
 *
 *  <hour> <delay> <passengers_amount> <hour> <delay> <passengers_amount> <flight_code>
 *
 *   Those elements are copied into the multidimensional array 'a'.
 *   The dimensions of the array are given by the macros noted above.
 *
 * @param a array which will contain read file
 * @param filepath file with layover data
 */
void array_from_file(DelayTable a, const char *filepath);

#endif
