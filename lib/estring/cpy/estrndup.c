/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** estrndup
*/

#include <estring.h>

char *estrndup(char *src, size_t n)
{
    char *new = emalloc(sizeof(char) * (n + 1));

    if (new) {
        ememcpy(new, src, n);
        new[n] = '\0';
    }
    return (new);
}