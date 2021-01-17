/*
** EPITECH PROJECT, 2021
** LibErty
** File description:
** ncompare
*/

#include <erty/esstring.h>

i32_t ncompare_cstr(const string_t *this, const_cstr_t cstring, size_t n)
{
    return (estrncmp(this->str, cstring, n));
}

i32_t ncompare_sstr(const string_t *this, const string_t *sstring, size_t n)
{
    return (estrncmp(this->str, sstring->str, n));
}