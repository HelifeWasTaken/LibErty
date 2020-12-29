/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** eatoll
*/

#include <ectypes.h>
#include <estdlib.h>

#include <stdio.h>
long long eatoll(char const *str)
{
    long long result = 0;
    size_t i = 0;
    int8_t sign = eget_start_sign(str, &i);

    while (eis_num(str[i])) {
        if (ADD_OVERFLOW_CHECK(result, (long long)(str[i] - '0')))
            return (0);
        result += str[i] - '0';
        if (eis_num(str[i + 1])) {
            if (MUL_OVERFLOW_CHECK(result, (long long)10))
                return (0);
            result *= 10;
        }
        i++;
    }
    return (MUL_OVERFLOW_CHECK(result, (long long)sign) ?
        0 : result * (long long)sign);
}