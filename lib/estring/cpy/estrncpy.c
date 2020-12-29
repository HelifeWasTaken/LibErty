/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** estrncpy
*/

#include <estring.h>

char *estrncpy(char *dest, char const *src, size_t n)
{
    size_t i = 0;

    for (; src[i] && i < n; i++)
        dest[i] = src[i];
    for (; i < n; i++)
        dest[i] = '\0';
    return (dest);
}