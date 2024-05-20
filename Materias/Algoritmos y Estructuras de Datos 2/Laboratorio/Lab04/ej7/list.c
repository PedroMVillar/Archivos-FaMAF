#include "list.h"
#include <stdlib.h>
#include <assert.h>

struct _node {
    list_elem value;
    struct _node * next;
};

list list_empty(void){
    return NULL;
}

list list_add(list l, int value){
    struct _node * new_node = malloc(sizeof(struct _node));
    new_node->value = value;
    new_node->next = l;
    return new_node;
}

void destroy_list(list l){
    struct _node * laux;
    while(l != NULL){
        laux = l;
        l = l->next;
        free(laux);
    }
}

bool is_empty(list l){
    return l == NULL;
}

list_elem head(list l){
    assert(!is_empty(l));
    return l->value;
}

list tail(list l){
    assert(!is_empty(l));
    return l->next;
}

list add_right(list l, int value){
    struct _node * new_node = malloc(sizeof(struct _node));
    new_node->value = value;
    new_node->next = NULL;
    struct _node * laux = l;
    if (!is_empty(l)){
        while(laux->next != NULL){
            laux = laux->next;
        }
        laux->next = new_node;
    } else {
        l = new_node;
    }
    return l;
}

int length(list l){
    int len = 0;
    struct _node * laux = l;
    while(laux != NULL){
        len++;
        laux = laux->next;
    }
    return len;
}

list concat(list l1, list l2){
    struct _node * laux = l1;
    if (!is_empty(l1)){
        while(laux->next != NULL){
            laux = laux->next;
        }
        laux->next = l2;
    } else {
        l1 = l2;
    }
    return l1;
}

list_elem index(list l, int value){
    assert(length(l) > value);
    struct _node * laux = l;
    int index = 0;
    while(laux != NULL && index != value){
        laux = laux->next;
        index++;
    }
    return laux->value;
}

void take(list l, int n){
    struct _node * laux = l;
    int index = 0;
    if (n < length(l)){
        while(laux != NULL && index != n){
            laux = laux->next;
            index++;
        }
        destroy_list(laux);
    } else {
        l = laux;
    }
}

void drop(list l, int n){
    struct _node * laux = l;
    int index = 0;
    if (n < length(l)){
        while(laux != NULL && index != n){
            laux = laux->next;
            index++;
        }
        l = laux;
    } else {
        destroy_list(l);
    }
}

list copy(list l){
    list copy = NULL,p;
    p = l;
    if(is_empty(l)){
        return copy;
    }
    else{
        copy = add_right(copy, l->value);
        p = p->next;
        while(p!=NULL){
            copy = add_right(copy,p->value);
            p = p->next;
        }
        return copy;
    }
}