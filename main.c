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

int main(void)
{
    VECTOR(string) v = VECTOR_CREATE(string);

    v.push_back(&v, init_string("toto"));
    v.push_back(&v, init_string("john"));
    printf("%ld\n", v.size);
    v.v[0].print(&v.v[0]);
    v.v[1].print(&v.v[1]);
    printf("%s\n", v.v[0].str);
    v.clear(&v);

    return (0);
}