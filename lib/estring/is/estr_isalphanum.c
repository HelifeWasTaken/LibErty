/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** estr_isalphanum
*/

#include <ectypes.h>

bool estr_isalphanum(char const *str)
{
    for (size_t i = 0; str[i]; i++)
        if (!eis_alphanum(str[i]))
            return (false);
    return (true);
}
