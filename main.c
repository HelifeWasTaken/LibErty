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
#include <erty/ecstring.h>
#include <erty/efd.h>
#include <stdio.h>
#include <erty/ebuffer.h>
#include <erty/eprintf.h>
#include <erty/esstring.h>
#include <erty/ealloc.h>
#include <malloc.h>
#include <erty/ehashmap.h>
#include <erty/elinked.h>

int main(void)
{
  //  char *s = eformat("%s%s%s%s", "toto", "toto", "toto", "tata");
    float A = 43.2323f;
//,    eprintf("%s\n", s);
    eprintf("%.7f\n", A);
    eprintf_free_buff();
    //free(s);
    return (0);
}
