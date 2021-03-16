/*
** EPITECH PROJECT, 2021
** LibErty
** File description:
** expect
*/

#include <erty/json.h>

bool json_expect(char **conf, int c)
{
    while (json_skip_withespace(conf));
    return (c == conf);
}