/*
** EPITECH PROJECT, 2021
** LibErty
** File description:
** append
*/

#include <erty/esstring.h>

void append_sstr(string_t *this, string_t *sstring)
{
    char *tmp = NULL;

    if (!sstring->str)
        return;
    if (!this->str) {
        this->str = estrdup(sstring->str);
        this->size = sstring->size;
    } else {
        tmp = ECONCAT(this->str, sstring->str);
        efree(this->str);
        this->str = tmp;
        this->size = estrlen(tmp);
    }
}

void append_cstr(string_t *this, cstr_t cstring)
{
    cstr_t tmp = NULL;

    if (!cstring)
        return;
    if (!this->str) {
        efree(this->str);
        this->str = estrdup(cstring);
        this->size = estrlen(cstring);
    } else {
        tmp = ECONCAT(this->str, cstring);
        efree(this->str);
        this->str = tmp;
        this->size = estrlen(tmp);
    }
}