/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** eis_alphanum
*/

#include <ectypes.h>

bool eis_alphanum(int c)
{
    return (eis_alpha(c) || eis_num(c));
}