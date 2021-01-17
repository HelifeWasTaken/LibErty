/*
** EPITECH PROJECT, 2021
** LibErty
** File description:
** compare
*/

#include <erty/esstring.h>

i32_t compare_cstr(const string_t *this, char *cstring)
{
    return (estrcmp(this->str, cstring));
}

i32_t compare_sstr(const string_t *this, const string_t *sstring)
{
    return (estrcmp(this->str, sstring->str));
}