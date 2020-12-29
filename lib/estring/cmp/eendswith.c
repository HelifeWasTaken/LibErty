/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** eendswith
*/

#include <estring.h>

bool eendswith(char const *haystack, char const *needle)
{
    size_t sizehaystack = estrlen(haystack);
    size_t sizeneedle = estrlen(needle);

    if (sizehaystack < sizeneedle)
        return (false);
    return (estrcmp(haystack + sizehaystack - sizeneedle, needle) == 0);
}