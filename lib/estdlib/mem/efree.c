/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** efree
*/

#include <stdlib.h>
#include <erty/estdio.h>
#include <erty/allow_libc.h>
#include <stdio.h>

void efree(void *ptr UNUSED)
{
#ifdef ALLOW_FREE_LIBC
    free(ptr);
#else
    efprintf(stderr, "Free is not allowed for this project\n");
#endif
}
