/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** eatoi
*/

#include <ectypes.h>
#include <estdlib.h>

int eatoi(char const *str)
{
    long long result = eatoll(str);

    return ((result > INT_MAX || result < INT_MIN) ? 0 : result);
}