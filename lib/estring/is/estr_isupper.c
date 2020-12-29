/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** estr_isupper
*/

#include <ectypes.h>

bool estr_isupper(char const *str)
{
    for (size_t i = 0; str[i]; i++)
        if (!eis_upper(str[i]))
            return (false);
    return (true);
}
