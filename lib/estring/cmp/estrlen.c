/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** estrlen
*/

#include <ectypes.h>

size_t estrlen(char const *str)
{
    size_t i = 0;

    if (str)
        for (; str[i]; i++);
    return (i);
}