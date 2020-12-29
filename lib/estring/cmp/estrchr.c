/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** estrchr
*/

#include <stddef.h>

char *estrchr(char *str, int c)
{
    for (size_t i = 0; str[i]; i++)
        if (str[i] == c)
            return (&str[i]);
    return (NULL);
}