/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** estrncmp
*/

#include <estring.h>
#include <estdlib.h>

int estrncmp(char const *s1, char const *s2, size_t n)
{
    for (size_t i = 0; (s1[i] || s2[i]) && i < n; i++) {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
    }
    return (0);
}
