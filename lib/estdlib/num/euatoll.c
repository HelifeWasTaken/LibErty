/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** euatoll
*/

#include <ectypes.h>
#include <eoverflow.h>

unsigned long long euatoll(char const *str)
{
    unsigned long long result = 0;
    size_t i = 0;

    while (eis_num(str[i])) {
        if (ADD_OVERFLOW_CHECK(result, str[i] - '0'))
            return (0);
        result += str[i] - '0';
        if (eis_num(str[i + 1])) {
            if (MUL_OVERFLOW_CHECK(result, 10))
                return (0);
            result *= 10;
        }
        i++;
    }
    return (result);
}