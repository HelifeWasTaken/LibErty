/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** estrndup
*/

#include <erty/ecstring.h>

cstr_t estrndup(const_cstr_t src, size_t n)
{
#ifndef ALLOW_STRNDUP_LIBC
    cstr_t new = emalloc(sizeof(char) * (n + 1));

    if (new) {
        ememcpy(new, src, n);
        new[n] = '\0';
    }
    return (new);
#else
    return (strndup(src, n));
#endif
}
