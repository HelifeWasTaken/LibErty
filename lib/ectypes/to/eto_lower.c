/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** eto_lower
*/

#include <ectypes.h>

int eto_lower(int c)
{
    return (eis_upper(c) ? c + 32 : c);
}