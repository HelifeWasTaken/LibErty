/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** eaftoa
*/

#include <estring.h>
#include <estdlib.h>

char *eaftoa(double nb, uint8_t precision, char const *base)
{
    int64_t rounded = (int64_t)nb;
    int64_t decimals = eget_float_decimals(nb, precision);
    size_t basesize = estrlen(base);
    char *new = emalloc(sizeof(char) *
        (enblen(rounded, basesize) + enblen(decimals, basesize) + 2));
    size_t tmpsize = 0;

    eitoa(rounded, new, base);
    tmpsize = estrlen(new);
    new[tmpsize] = '.';
    eitoa(decimals, new + tmpsize + 1, base);
    return (new);
}