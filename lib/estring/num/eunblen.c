/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** eunblen
*/

#include <ectypes.h>

uint64_t eunblen(uint64_t nb, uint8_t base_size)
{
    int base = 1;
    uint64_t tmp = base_size;

    while (tmp <= nb) {
        tmp = tmp * tmp;
        base++;
    }
    return (base);
}