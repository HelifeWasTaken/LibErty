/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** edputfloat
*/

#include <efd.h>
#include <estdlib.h>

static size_t edputfloat_print(int fd, int64_t nb, uint8_t precision)
{
    if (precision) {
        return ((nb) ?
            edputfloat_print(fd, nb / 10, --precision) +
            edputchar(fd, nb % 10 + '0') :
            edputfloat_print(fd, nb, --precision) + edputchar(fd, '0'));
    }
    return (0);
}

size_t edputfloat(int fd, double nb, uint8_t precision)
{
    return ((precision) ?
        edputnbr(fd, (int64_t)nb) + edputchar(fd, '.') +
        edputfloat_print(fd, eget_float_decimals(nb, precision), precision) :
        edputnbr(fd, (int64_t)nb));
}