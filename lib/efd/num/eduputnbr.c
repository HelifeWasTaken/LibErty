/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** eduputnbr
*/

#include <efd.h>

size_t eduputnbr(int fd, uint64_t nb)
{
    return ((nb >= 10) ?
        eduputnbr(fd, nb / 10) + edputchar(fd, nb % 10 + '0') :
        (size_t)edputchar(fd, nb + '0'));
}