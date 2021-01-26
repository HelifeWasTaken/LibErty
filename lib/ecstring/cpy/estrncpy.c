/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** estrncpy
*/

#include <erty/ecstring.h>

cstr_t estrncpy(cstr_t dest, const_cstr_t src, size_t n)
{
#ifndef ALLOW_STRNCPY_LIBC
    size_t i = 0;

    for (; i < n && src[i]; i++)
        dest[i] = src[i];
    for (; i < n; i++)
        dest[i] = '\0';
    return (dest);
#else
    return (strncpy(dest, src, n));
#endif
}
