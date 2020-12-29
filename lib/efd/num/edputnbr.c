/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** edputnbr
*/

#include <efd.h>

static size_t edputnbr_print(int fd, int64_t nb)
{
    return ((nb >= 10) ?
        edputnbr_print(fd, nb / 10) + edputchar(fd, nb % 10 + '0') :
        (size_t)edputchar(fd, nb + '0'));
}

size_t edputnbr(int fd, int64_t nb)
{
    return ((nb > 0) ?
        edputnbr_print(fd, nb) :
        edputchar(fd, '-') + edputnbr_print(fd, nb));
}