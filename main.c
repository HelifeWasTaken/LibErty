/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** aled
*/

#include <erty/estdio.h>
#include <string.h>
#include <stdlib.h>
#include <erty/estdlib.h>
#include <erty/string/ecstring.h>
#include <erty/efd.h>
#include <stdio.h>
#include <erty/ebuffer.h>
#include <erty/eprintf.h>
#include <erty/string/esstring.h>
#include <erty/ealloc.h>
#include <malloc.h>
#include <erty/ehashmap.h>
#include <erty/elinked.h>
#include <erty/evector.h>

INIT_VECTOR(toto, data, sstr_t, v_t);

void free_vector_sstring(v_t *this)
{
    for (size_t i = 0; i < this->size; i++) {
        this->data[i].free(&this->data[i]);
    }
    FREE(this->data);
}

int main(void)
{
    sstr_t s = init_string("toto");
    VECTOR(toto) v = VECTOR_CREATE(toto, free_vector_sstring);

    v.push_back(&v, &s);
    printf("%ld\n", v.size);
    v.data[0].print(&v.data[0]);
    printf("%s\n", v.data[0].str);
    v.free(&v);
    return (0);
}
