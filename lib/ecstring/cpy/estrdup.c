/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** estrdup
*/

#include <erty/ecstring.h>

cstr_t estrdup(const_cstr_t src)
{
#ifndef ALLOW_STRDUP_LIBC
    size_t size = estrlen(src) + 1;
    cstr_t new = emalloc(sizeof(char) * size);

    if (new)
        new = ememcpy(new, src, sizeof(char) * size);
    return (new);
#else
    return (strdup(src));
#endif
}