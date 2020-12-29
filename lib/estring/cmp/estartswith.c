/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** estartswith
*/

#include <estring.h>

bool estartswith(char const *haystack, char const *needle)
{
    return ((estrncmp(haystack, needle, estrlen(needle) == 0)));
}