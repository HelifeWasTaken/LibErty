/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** eauitoa
*/

#include <estring.h>
#include <estdlib.h>

char *eauitoa(uint64_t nb, char const *base)
{
    char *nbstr = emalloc(sizeof(char) * (enblen(nb, estrlen(base)) + 1));

    if (nbstr)
        euitoa(nb, nbstr, base);
    return (nbstr);
}