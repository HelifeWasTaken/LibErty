/*
** EPITECH PROJECT, 2021
** string
** File description:
** LibErty
*/

#include <erty/json.h>

bool json_is_valid_string(char *conf)
{
    if (*conf == '\"')
        conf++;
    else
        return (false);
    return (strchr(conf, '\"') != NULL);
}

bool json_parse_string(char **conf, char **res)
{
    char *ptr = strchr(++conf, '\"');

    *res = strndup(conf, ptr - conf);
    *conf = ++ptr;
    return (*res ? true : false);
}
