/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** eto_upper
*/

#include <ectypes.h>

int eto_upper(int c)
{
    return (eis_lower(c) ? c - 32 : c);
}