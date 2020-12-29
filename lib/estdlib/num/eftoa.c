/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** eftoa
*/

#include <estring.h>
#include <estdlib.h>

char *eftoa(double nb, uint8_t precision, char *tofill, char const *base)
{
    int64_t rounded = (int64_t)nb;
    int64_t decimals = eget_float_decimals(nb, precision);
    size_t tmpsize = 0;

    eitoa(rounded, tofill, base);
    tmpsize = estrlen(tofill);
    tofill[tmpsize] = '.';
    eitoa(decimals, tofill + tmpsize + 1, base);
    return (tofill);
}