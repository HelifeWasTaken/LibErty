/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** estr_isalpha
*/

#include <ectypes.h>

bool estr_isalpha(char const *str)
{
    for (size_t i = 0; str[i]; i++)
        if (!eis_alpha(str[i]))
            return (false);
    return (true);
}