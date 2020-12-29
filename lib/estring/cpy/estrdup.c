/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** estrdup
*/

#include <estring.h>

char *estrdup(char *src)
{
    size_t size = estrlen(src) + 1;
    char *new = emalloc(sizeof(char) * size);

    if (new)
        new = ememcpy(new, src, sizeof(char) * size);
    return (new);
}