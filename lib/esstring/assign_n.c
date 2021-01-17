/*
** EPITECH PROJECT, 2021
** LibErty
** File description:
** assign_n
*/

#include <erty/esstring.h>

void assign_n_from_cstr(string_t *self, const_cstr_t s, size_t n)
{
    if (self->str)
        efree(self->str);
    self->str = estrndup(s, n);
    self->size = estrlen(self->str);
}

void assign_n_from_sstr(string_t *self, string_t *sstring, size_t n)
{
    if (self->str)
        efree(self->str);
    self->str = estrndup(sstring->str, n);
    self->size = estrlen(self->str);
}