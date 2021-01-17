/*
** EPITECH PROJECT, 2021
** LibErty
** File description:
** assign
*/

#include <erty/esstring.h>

void assign_sstr(string_t *this, const string_t *sstring)
{
    if (this->str)
        efree(this->str);
    this->size = sstring->size;
    this->str  = (sstring->str) ? estrdup(sstring->str) : NULL;
}

void assign_cstr(string_t *this, const_cstr_t cstring)
{
    if (this->str)
        efree(this->str);
    this->size = estrlen(cstring);
    this->str  = estrdup(cstring);
}