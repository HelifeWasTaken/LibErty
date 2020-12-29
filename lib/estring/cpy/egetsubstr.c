/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** egetsubstr
*/

#include <estring.h>
#include <estdlib.h>

char *egetsubstr(char *str, int64_t start, int64_t end)
{
    int64_t len = estrlen(str);

    if (start > len)
        return (NULL);
    if (start < 0) {
        if (ABS(start) > len)
            return (NULL);
        else
            start = len + start;
    }
    if (end > len || start >= end)
        return (NULL);
    return (estrndup(str + start, end - start));
}