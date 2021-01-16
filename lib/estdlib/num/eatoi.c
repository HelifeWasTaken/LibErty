/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** eatoi
*/

#include <erty/ectypes.h>
#include <erty/estdlib.h>

OPT(i32) eatoi(const_cstr_t str)
{
    OPT(i64) res = eatol(str);

    return ((res.value > INT_MAX || res.value < INT_MIN) ?
        ERR(i32) : OK(i32, res.value));
}