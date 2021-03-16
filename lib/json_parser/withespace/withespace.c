/*
** EPITECH PROJECT, 2021
** LibErty
** File description:
** json_withespace
*/

#include <erty/json.h>

bool json_is_withespace(int c)
{
    return (c == ' ' || c == '\r' || c == '\n' || c == '\t');
}

bool json_skip_withespace(char **conf)
{
    if (json_is_withespace(**conf)) {
        (*conf)++;
        return (true);
    }
    return (false);
}
