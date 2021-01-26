/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** ecalloc
*/

#include <erty/ecstring.h>
#include <stdlib.h>

void *ecalloc(size_t nmemb, size_t size)
{
    void *ptr = NULL;

#ifndef ALLOW_LIBC_CALLOC
    ptr = emalloc(nmemb * size);
    if (ptr)
        ememset(ptr, 0, nmemb * size);
#else
    ptr = calloc(nmemb, size);
#endif
    return (ptr);
}
