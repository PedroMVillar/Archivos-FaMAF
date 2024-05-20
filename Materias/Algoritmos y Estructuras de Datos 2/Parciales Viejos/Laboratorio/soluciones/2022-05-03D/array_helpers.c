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
* @brief returns true when reach last line in flight file
* @return True when is the last line of the file, False otherwise
*/
static bool is_last_line(unsigned int hour, unsigned int type) {
  return  hour == HOURS - 1u && type == TYPE - 1u;
}

void array_dump(DelayTable a) {
  for (unsigned int type = 0u; type < TYPE; ++type) {
    for (unsigned int hour = 0u; hour < HOURS; ++hour) {
      Flight f = a[type][hour];
      fprintf(stdout, "%c: %s flight with %u passengers arrived at %u:00, with %u delay",
        f.code,
        f.type == 0 ? "last_mile" : "layover",
        f.passengers_amount,
        f.hour - 1,
        f.delay
      );
      if (!is_last_line(hour, type))
      {
        fprintf(stdout, "\n");
      }
    }
  }
}

unsigned int compensation_cost (DelayTable a) {
  unsigned int total_cost = 0;
  for (unsigned j = 0u; j < 18; j++){
    if (a[0][j].delay > MAX_LM_DELAY_ALLOWED){
      total_cost = total_cost + ((a[0][j].delay - MAX_LM_DELAY_ALLOWED) * COMPENSATION_PER_MINUTE);
    }
  }
  for (unsigned j = 0u; j < 18; j++){
    if (a[1][j].delay > MAX_LAYOVER_DELAY_ALLOWED){
      total_cost = total_cost + ((a[1][j].delay - MAX_LAYOVER_DELAY_ALLOWED) * COMPENSATION_PER_MINUTE);
    }
  }
  return total_cost;
}


void array_from_file(DelayTable array, const char *filepath) {
  FILE *file = NULL;

  file = fopen(filepath, "r");
  if (file == NULL) {
    fprintf(stderr, "File does not exist.\n");
    exit(EXIT_FAILURE);
  }

  char code;
  int i = 0;
  while (!feof(file) && i < HOURS) {
    Flight last_mile_info = flight_from_file(file);
    last_mile_info.type = last_mile;
    Flight layover_info = flight_from_file(file);
    layover_info.type = layover;
    int res = fscanf(file, EXPECTED_FLIGHT_FILE_FORMAT, &code);
    if (res != 1) {
      fprintf(stderr, "Invalid file.\n");
      exit(EXIT_FAILURE);
    }  
    last_mile_info.code = code;
    layover_info.code = code;
    array[0][i] = last_mile_info;
    array[1][i] = layover_info;
    i++;
  }
  fclose(file);
}
