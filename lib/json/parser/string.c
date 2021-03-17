/*
** EPITECH PROJECT, 2021
** string
** File description:
** LibErty
*/

#include <erty/json.h>

bool json_parse_string(struct json *conf, char const **buffer)
{
    char *endptr = NULL;
    char *res = NULL;

    if (**buffer != '\"')
        return (false);
    (*buffer)++;
    if ((endptr = estrchr(*buffer, '\"')) == NULL)
        return (false);
    if ((res = estrndup(*buffer, endptr - *buffer)) == NULL)
        return (false);
    conf->t = JSON_STR;
    conf->v.string = res;
    *buffer = ++endptr;
    return (true);
}