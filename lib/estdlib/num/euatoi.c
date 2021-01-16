/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** euatoi
*/

#include <erty/estdlib.h>

OPT(u32) euatoi(const_cstr_t str)
{
    OPT(u64) result = euatol(str);

    return ((result.value > UINT_MAX) ? OK(u32, result.value) : ERR(u32));
}