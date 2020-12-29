/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** eis_alpha
*/

#include <ectypes.h>

bool eis_alpha(int c)
{
    return (eis_lower(c) || eis_upper(c));
}