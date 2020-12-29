/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** eaitoa
*/

#include <estring.h>
#include <estdlib.h>

char *eaitoa(int64_t nb, char const *base)
{
    char *nbstr = emalloc(sizeof(char) * (enblen(nb, estrlen(base)) + 1));

    if (nbstr)
        eitoa(nb, nbstr, base);
    return (nbstr);
}