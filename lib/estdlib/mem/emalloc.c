/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** emalloc
*/

#include <stdlib.h>
#include <erty/estdio.h>
#include <stdio.h>

void *emalloc(size_t size UNUSED)
{
    void *ptr = NULL;
#ifdef ALLOW_MALLOC_LIBC
    ptr = malloc(size);
#else
    efprintf(stderr, "Malloc is not allowed for this project");
#endif
    if (!ptr) {
        efprintf(stderr, "Allocation failed");
#ifdef ALLOW_LIBC_EXIT
	exit(84);
#endif
    }
    return (ptr);
}
