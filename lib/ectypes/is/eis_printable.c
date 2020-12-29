/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** eis_printable
*/

#include <stdbool.h>

bool eis_printable(int c)
{
    return (c >= 32 && c <= 126);
}