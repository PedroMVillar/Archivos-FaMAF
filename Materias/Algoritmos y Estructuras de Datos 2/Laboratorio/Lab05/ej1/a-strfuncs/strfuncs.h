#ifndef _STRFUNCS_H_ 
#define _STRFUNCS_H_

#include <stdbool.h>

/* calcula la longitud de una cadena de caracteres apuntada por str */
size_t string_length(const char *str);

/* devuelve una nueva cadena en memoria dinamica */
char *string_filter(const char *str, char c);

/* indica si una cadena apuntada es palindromo */
bool string_is_symmetric(const char *str);

#endif