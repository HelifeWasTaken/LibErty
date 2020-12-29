/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** euatoi
*/

#include <estdlib.h>

unsigned int euatoi(char const *str)
{
    unsigned long long result = euatoll(str);

    return ((result > UINT_MAX) ? 0 : result);
}