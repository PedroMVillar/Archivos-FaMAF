/*
@file array_helpers.c
@brief Array Helpers method implementation
*/
#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include "array_helpers.h"

/**
* @brief returns true when reach last entry in flight table
* @return True when is the last entre of the flight table, False otherwise
*/
static bool is_last_line(unsigned int hour, unsigned int type) {
  return  hour == HOURS - 1u && type == TYPE - 1u;
}

void array_dump(DeliveryTable a) {
  for (unsigned int type = 0u; type < TYPE; ++type) {
    for (unsigned int hour = 0u; hour < HOURS; ++hour) {
      Flight f = a[type][hour];
      fprintf(stdout, "%c: flight with %u %s arrived at %u:00", f.code, f.items_amount, f.type == 0 ? "boxes" : "letters", f.hour - 1);
      if (!is_last_line(hour, type))
      {
        fprintf(stdout, "\n");
      }
    }
  }
}


unsigned int extra_space_fee_cost (DeliveryTable a) {
  unsigned int cost;
  // Costo de boxes
  for (unsigned int hrs = 1u; hrs <= HOURS; hrs ++){
    unsigned int cant = a[boxes][hrs].items_amount;
    if(cant > MAX_ALLOWED_BOXES && hrs < 7){
      int penalt = (cant - MAX_ALLOWED_BOXES) * BOX_PENALTY;
      cost = cost + penalt;
    }
  }
  // Costo de letters
  for (unsigned int hrs = 1u; hrs <= HOURS; hrs ++){
    unsigned int cant = a[letters][hrs].items_amount;
    if(cant > MAX_ALLOWED_LETTERS && hrs < 7){
      int penalt = (cant - MAX_ALLOWED_LETTERS) * LETTER_PENALTY;
      cost = cost + penalt;
    }
  }
  return cost;
}


void array_from_file(DeliveryTable array, const char *filepath) {
  FILE *file = NULL;

  file = fopen(filepath, "r");
  if (file == NULL) {
    fprintf(stderr, "File does not exist.\n");
    exit(EXIT_FAILURE);
  }

  char code;
  int i = 0;
  while (i != HOURS) {
    // Lectura del codigo de vuelo
    int res = fscanf(file, EXPECTED_FLIGHT_FILE_FORMAT , &code);
    if (res != 1) {
      fprintf(stderr, "Invalid file.\n");
      exit(EXIT_FAILURE);
    }
    // Generar ambos Flight 
    Flight flight_boxes = flight_from_file(file, code, boxes);
    Flight flight_letters = flight_from_file(file, code, letters);

    // Guardo los datos en el arreglo multidimensional
    array[boxes][flight_boxes.hour - 1] = flight_boxes;
    array[letters][flight_letters.hour - 1] = flight_letters;

    i++;
  }
}
