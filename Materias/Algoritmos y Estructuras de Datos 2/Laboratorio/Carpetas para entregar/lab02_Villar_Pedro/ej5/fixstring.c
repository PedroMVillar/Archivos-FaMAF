#include <stdbool.h>
#include <assert.h>

#include "fixstring.h"

unsigned int fstring_length(fixstring s)
{
    unsigned int i = 0;
    int k = 1;
    while (k != 0)
    {
        if (s[i] != '\0')
        {
            i++;
        }
        else
        {
            k = 0;
        }
    }
    return i;
}

bool fstring_eq(fixstring s1, fixstring s2)
{
    bool result = true;
    if (fstring_length(s1) != fstring_length(s2))
    {
        result = false;
    }
    else
    {
        for (unsigned int i = 0; i < fstring_length(s1); i++)
        {
            if (s1[i] != s2[i])
            {
                result = false;
            }
        }
    }
    return result;
}

bool fstring_less_eq(fixstring s1, fixstring s2)
{
    bool less_eq = true;

    int pos_first_different = 0;
    while (s1[pos_first_different] == s2[pos_first_different] &&
           pos_first_different < FIXSTRING_MAX)
    {
        pos_first_different++;
    };

    if (s1[pos_first_different] <= s2[pos_first_different])
    {
        less_eq = true;
    }
    else
    {
        less_eq = false;
    }
    return less_eq;
}

void fstring_set(fixstring s1, const fixstring s2)
{
    int i = 0;
    while (i < FIXSTRING_MAX && s2[i] != '\0')
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
}

void fstring_swap(fixstring s1, fixstring s2)
{
    fixstring aux;
    fstring_set(aux, s1);
    fstring_set(s1, s2);
    fstring_set(s2, aux);
}
