#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "strfuncs.h"

size_t string_length(const char *str){
    size_t len = 0;
    while(str[len] != '\0'){
        len++;
    }
    return len;
}

char *string_filter(const char *str, char c){
    size_t len = string_length(str);
    char *new_str = (char *)malloc(len + 1);
    if(new_str == NULL){
        return NULL;
    }
    size_t i = 0;
    size_t j = 0;
    while(str[i] != '\0'){
        if(str[i] != c){
            new_str[j] = str[i];
            j++;
        }
        i++;
    }
    new_str[j] = '\0';
    return new_str;
}

bool string_is_symmetric(const char *str){
    size_t len = string_length(str);
    size_t i = 0;
    size_t j = len - 1;
    bool res = true;
    while(i < j){
        if(str[i] != str[j]){
            res = false;
        }
        i++;
        j--;
    }
    return res;
}
