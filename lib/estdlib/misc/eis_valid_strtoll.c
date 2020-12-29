/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** eis_valid_strtoll
*/

#include <ectypes.h>

bool eis_valid_strtoll(int c, int basesize, uint8_t *indexbase)
{
    char *base = "0123456789abcdefghijklmnopqrstuvwxyz";

    for (*indexbase = 0; *indexbase < basesize; (*indexbase)++)
        if (c == base[*indexbase])
            return (true);
    return (false);
}