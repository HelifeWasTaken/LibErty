/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** estrstr
*/

#include <estring.h>

char *estrstr(char *haystack, char const *needle)
{
    size_t size_needle;
    size_t size_haystack;
    size_t i = 0;

    if (!haystack || !needle)
        return (NULL);
    size_needle = estrlen(needle);
    size_haystack = estrlen(haystack);
    if (size_haystack < size_needle)
        return (NULL);
    for (; size_haystack - i >= size_needle && size_haystack; i++)
        if (estrncmp(haystack + i, needle, size_needle) == 0)
            return (haystack + i);
    return (NULL);
}