/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** erevstr
*/

#include <erty/ecstring.h>

cstr_t erevstr(cstr_t str)
{
    char tmp;
    size_t size_str = estrlen(str);

    for (size_t i = 0; i < size_str / 2; i++) {
        tmp = str[i];
        str[i] = str[size_str - i - 1];
        str[size_str - i - 1] = tmp;
    }
    return (str);
}