/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** eis_punct
*/

#include <stdbool.h>

bool eis_punct(int c)
{
    return ((c >= 33 && c <= 64) ||
        (c >= 91 && c <= 96) ||
        (c >= 123 && c <= 126));
}