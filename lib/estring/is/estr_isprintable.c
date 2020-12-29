/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** estr_isprintable
*/

#include <ectypes.h>

bool estr_isprintable(char const *str)
{
    for (size_t i = 0; str[i]; i++)
        if (!eis_printable(str[i]))
            return (false);
    return (true);
}
