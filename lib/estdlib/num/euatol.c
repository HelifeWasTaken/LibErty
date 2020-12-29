/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** euatol
*/

#include <estdlib.h>

unsigned long euatol(char const *str)
{
    unsigned long long result = euatoll(str);

    return ((result > ULONG_MAX) ? 0 : result);
}