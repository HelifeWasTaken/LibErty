/*
** EPITECH PROJECT, 2021
** LibErty
** File description:
** num
*/

#include <erty/json.h>
#include <stdlib.h>

bool json_parse_number(struct json *conf, char const **buffer)
{
    int64_t sign = 1;
    int64_t nb = 0;

    if (**buffer == '-') {
        *buffer += 1;
        sign = -1;
    }
    if (eis_num(**buffer) == false)
        return (false);
    nb = strtoll((char *)*buffer, (char **)buffer, 10);
    conf->t = JSON_NUM;
    conf->v.number = nb * sign;
    return (true);
}