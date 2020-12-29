/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** estrcat
*/

#include <estring.h>

char *estrcat(char *dest, char *src)
{
    estrcpy(dest + estrlen(dest), src);
    return (dest);
}