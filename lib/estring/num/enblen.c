/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** enblen
*/

#include <ectypes.h>

uint64_t enblen(int64_t nb, uint8_t base_size)
{
    int base = 1;
    int64_t tmp = base_size;

    if (nb < 0) {
        nb = -nb;
        base++;
    }
    while (tmp <= nb) {
        tmp = tmp * tmp;
        base++;
    }
    return (base);
}