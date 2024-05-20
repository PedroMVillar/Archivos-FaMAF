#ifndef _LIST_H
#define _LIST_H

#include <stdbool.h>

/* pointer to structs to guarantee encapsulation */
typedef struct _node * list;   // list is a pointer to a struct _node
typedef int list_elem;           // list_elem is an int

/* Constructors */
list list_empty(void);
/*
    Create a new empty list. Allocates new memory.
    Being l the returned list, list_is_init(l) should be true.
*/

list list_add(list l, int value);
/*
    Adds a new element to the list.
*/

/* Destroy */
void destroy_list(list l);
/*
    Frees memory for l.
*/

/* Operations */
bool is_empty(list l);
/*
    Return whether the list l is empty.
*/

list_elem head(list l);
/*
    Return the first element of the list l.
    PRECONDITION: !is_empty(l)
*/

list tail(list l);
/*
    Return the list l without the first element.
    PRECONDITION: !is_empty(l)
*/

list add_right(list l, int value);
/*
    Adds a new element to the right of the list.
    PRECONDITION: !is_empty(l)
*/

int length(list l);
/*
    Return the length of the list l.
*/

list concat(list l1, list l2);
/*
    Return the concatenation of l1 and l2.
*/

list_elem index(list l, int value);
/*
    Return the index of the first occurrence of value in l.
*/

void take(list l, int n);
/*
    Take the first n elements of l.
*/

void drop(list l, int n);
/*
    Drop the first n elements of l.
*/

list copy(list l);
/*
    Makes a copy of list l. Allocates new memory.
*/

#endif