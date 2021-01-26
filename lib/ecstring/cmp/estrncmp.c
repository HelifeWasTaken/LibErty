/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** estrncmp
*/

#include <erty/ecstring.h>
#include <erty/estdlib.h>

int estrncmp(const_cstr_t s1, const_cstr_t s2, size_t n)
{
#ifndef ALLOW_STRNCMP_LIBC
    for (size_t i = 0; (s1[i] || s2[i]) && i < n; i++) {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
    }
    return (0);
#else
    return (strncmp(s1, s2, n));
#endif
}
