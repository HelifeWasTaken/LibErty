/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** estrcpy
*/

#include <ectypes.h>

char *estrcpy(char *dest, char *src)
{
    size_t i = 0;

    do {
        dest[i] = src[i];
    } while (src[i++]);
    return (dest);
}