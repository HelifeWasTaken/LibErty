/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** euitoa
*/

#include <ectypes.h>
#include <estring.h>

char *euitoa(uint64_t nb, char *tofill, char *base)
{
    size_t i = 0;
    size_t size_base = estrlen(base);

    do {
        tofill[i] = base[nb % size_base];
        i++;
        nb /= size_base;
    } while (nb > 0);
    tofill[i] = '\0';
    return (erevstr(tofill));
}