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

#define MAX_ALLOWED_BOXES 75
#define MAX_ALLOWED_LETTERS 150
#define BOX_PENALTY 10
#define LETTER_PENALTY 2
#define FEE_CLOSE_HOUR 18

typedef Flight DeliveryTable [TYPE][HOURS];

/**
 * @brief Write the content of the array 'a' into stdout.
 * @param[in] a array to dump in stdout
 */
void array_dump(DeliveryTable a);

/**
 * @brief calculates how much extra fee the company has to pay for the day.
 * @param[in] a array
 * @details
 *   Counts items arrived until FEE_CLOSE_HOUR (inclusive).
 *   For each extra box adds BOX_PENALTY to the fee.
 *   For each extra letter adds LETTER_PENALTY to the fee.
 */
unsigned int extra_space_fee_cost(DeliveryTable a);


/**
 * @brief reads an array of layover information from file
 * @details
 *
 *  Each element is read from the file located at 'filepath'.
 *  The file must exist in disk and must have its contents in a sequence of
 *  lines, each with the following format:
 *
 *   <flight_code> <hour> <boxes> <hour> <letters>
 *
 *   Those elements are copied into the multidimensional array 'a'.
 *   The dimensions of the array are given by the macros noted above.
 *
 * @param a array which will contain read file
 * @param filepath file with layover data
 */
void array_from_file(DeliveryTable a, const char *filepath);

#endif
