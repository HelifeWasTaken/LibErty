/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** eaitoa
*/

#include <ectypes.h>
#include <estring.h>

char *eitoa(int64_t nb, char *tofill, char *base)
{
    size_t i = 0;
    size_t size_base = estrlen(base);
    bool isneg = false;

    if (nb < 0) {
        nb = -nb;
        isneg = true;
    }
    do {
        tofill[i] = base[nb % size_base];
        i++;
        nb /= size_base;
    } while (nb > 0);
    if (isneg)
        tofill[i++] = '-';
    tofill[i] = '\0';
    return (erevstr(tofill));
}