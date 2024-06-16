#include <assert.h>
#include <stdlib.h>
#include "dict.h"
#include "key_value.h"

struct _node_t {
    dict_t left;
    dict_t right;
    key_t key;
    value_t value;
};

static bool is_dict_abb(dict_t dic){
    if(dic == NULL){
        return true;
    }else if(dic->right == NULL && dic->left==NULL)
    {
        return true;
    }else if (dic->right == NULL && dic->left!= NULL)
    {
        return is_dict_abb(dic->left);
    }else if (dic->right != NULL && dic->left== NULL)
    {
        return is_dict_abb(dic->right);
    }else
    {
        bool is_more = !key_less(dic->right->key,dic->key);
        bool is_less = key_less(dic->left->key,dic->key);
        bool der = is_dict_abb(dic->right);
        bool izq = is_dict_abb(dic->left);
        return(is_less && is_more && der && izq);
    }
}

static bool invrep(dict_t d) {
    return is_dict_abb(d);
}

dict_t dict_empty(void) {
    dict_t dict = NULL;
    assert(invrep(dict) && dict == NULL);
    return dict;
}

dict_t dict_add(dict_t dict, key_t word, value_t def) {
    assert(invrep(dict));
    dict_t node_dict = malloc(sizeof (struct _node_t));
    node_dict->key = word;
    node_dict->value = def;
    node_dict->left = NULL;
    node_dict->right = NULL;
    if (dict == NULL)
    {
        dict = node_dict;
    }else{
        dict_t pointer = dict;
        bool nonstop = true;
        while (nonstop)
        {
            if (key_eq(word, pointer->key))
            {
                pointer->key = key_destroy(pointer->key);
                pointer->value = value_destroy(pointer->value);
                pointer->key = word;
                pointer->value = def;
                return dict;            //si el valor es igual cambia la def y termina
            }else if (key_less(word, pointer->key) &&pointer->left !=NULL)
            {
                pointer = pointer->left;
            }else if(key_less(pointer->key, word) && pointer->right !=NULL){
                pointer = pointer->right;                      
            }else{
                nonstop = false;        //llego a la hoja
            }
        }
        if (key_less(word, pointer->key))  //me fijo donde debo colocar el nuevo nodo
        {
            pointer->left = node_dict;
        }else if (key_less(pointer->key, word))
        {
            pointer->right = node_dict;
        }
    }
    assert(invrep(dict) && dict_exists(dict, word));
    return dict;
}

value_t dict_search(dict_t dict, key_t word) {
    assert(invrep(dict));
    value_t def=NULL;
    if (key_less(dict->key, word))
    {
        def = dict_search(dict->right, word);
    }else if (key_less(word, dict->key))
    {
        def = dict_search(dict->left, word);
    }else if (key_eq(word, dict->key))
    {
        def = dict->value;
    }
    return def;
}

bool dict_exists(dict_t dict, key_t word) {
    bool exists=false;
    assert(invrep(dict));
    if (dict == NULL)
    {
        return false;
    }else if (key_less(word, dict->key))
    {
        exists = dict_exists(dict->left, word);
    }else if (key_less(dict->key, word))
    {
        exists = dict_exists(dict->right, word);
    }else if (key_eq(word, dict->key))
    {
        return true;
    }
    return exists;
}

unsigned int dict_length(dict_t dict) {
    unsigned int length=0;
    assert(invrep(dict));
    if (dict != NULL)
    {
        length = 1+ dict_length(dict->left);
        length += dict_length(dict->right);
    }
    
    assert(invrep(dict) && ((dict==NULL) || length > 0));
    return length;
}

dict_t dict_remove(dict_t dict, key_t word) {
    assert(invrep(dict));
    
    if (dict_exists(dict, word))
    {
        dict_t daux = dict;
        dict_t parent = NULL;
        while (dict->key != word)     //Este bucle me asegura terminar apuntando al elem a eliminar
        {
            parent = daux;
            daux = key_less(word, daux->key) ? daux->left: daux->right;   
        }
        
        //Dividimos en los 4 casos posibles
        if (daux->left == NULL && daux->right == NULL)
        {
            if (dict->key == daux->key)   //si el elemento q quiero del es el root entonces no habrá parent
            {
                dict = dict_empty();
            }else if (key_less(daux->key, parent->key)) //caso contrario me fijo si taux esta a la izq o der
            {
                parent->left = NULL;
            }else{
                parent->right = NULL;
            }
            daux->key = key_destroy(daux->key);      //libero memoria de los nodos
            daux->value = value_destroy(daux->value); 
            free(daux);

        }else if (daux->left != NULL && daux->right == NULL)
        {
            if (dict->key == daux->key)   //si el elemento q quiero del es el root entonces no habrá parent
            {
                dict = daux->left;
            }else if (key_less(daux->key, parent->key)) //caso contrario me fijo si taux esta a la izq o der
            {
                parent->left = daux->left;
            }else{
                parent->right = daux->left;
            }
            daux->key = key_destroy(daux->key);      //libero memoria de los nodos
            daux->value = value_destroy(daux->value); 
            free(daux);

        }else if(daux->left == NULL && daux->right != NULL){
            if (dict->key == daux->key)   //si el elemento q quiero del es el root entonces no habrá parent
            {
                dict = daux->right;
            }else if (key_less(daux->key, parent->key)) //caso contrario me fijo si taux esta a la izq o der
            {
                parent->left = daux->right;
            }else{
                parent->right = daux->right;
            }
            daux->key = key_destroy(daux->key);      //libero memoria de los nodos
            daux->value = value_destroy(daux->value); 
            free(daux);
        }else{     //Este es el caso en el que taux->left!=NULL && taux->right !=NULL 
            parent = daux;
            dict_t reemplazo = daux->right;
            while (reemplazo->left != NULL)
            {
                parent = reemplazo;
                reemplazo = reemplazo->left;
            }                               //en este bucle me aseguro q reemp apunte al nodo más chico del arbol der
            daux->key = key_destroy(daux->key);
            daux->key = reemplazo->key;
            daux->value = value_destroy(daux->value);    //actualizo los valores del nodo a eliminar
            daux->value = reemplazo->value;
            if (key_less(reemplazo->key, parent->key))
            {
                parent->left = NULL;
            }else{
                parent->right = NULL;
            }
            reemplazo->key = key_destroy(reemplazo->key);
            reemplazo->value = value_destroy(reemplazo->value);
            free(reemplazo);
        }
    }
    assert(invrep(dict) && !dict_exists(dict, word));
    return dict;
}

dict_t dict_remove_all(dict_t dict) {
    dict = dict_destroy(dict);
    dict = dict_empty();
    return dict;
}

void dict_dump(dict_t dict, FILE *file) {
    assert(invrep(dict));
    if (dict != NULL) {
        dict_dump(dict->left, file);
        key_dump(dict->key,file);
        dict_dump(dict->right, file);
    }
}

dict_t dict_destroy(dict_t dict) {
    assert(invrep(dict));
    if (dict == NULL) {
        return NULL;
    }
    dict->key = key_destroy(dict->key);
    dict->value = value_destroy(dict->value);
    dict->left=dict_destroy(dict->left);
    dict->right= dict_destroy(dict->right);
    free(dict);
    dict=NULL;
    assert(dict == NULL);
    return dict;
}

