/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** eatol
*/

#include <ectypes.h>
#include <estdlib.h>

long eatol(char const *str)
{
    long long result = eatoll(str);

    return ((result > LONG_MAX || result < LONG_MIN) ? 0 : result);
}