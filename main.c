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

INIT_VECTOR(string, data, sstr_t, free_sstr);

int main(void)
{
    VECTOR(string) v = VECTOR_CREATE(string);

    v.push_back(&v, init_string("toto"));
    v.push_back(&v, init_string("john"));
    printf("%ld\n", v.size);
    v.data[0].print(&v.data[0]);
    v.data[1].print(&v.data[1]);
    printf("%s\n", v.data[0].str);
    v.clear(&v);
    return (0);
}