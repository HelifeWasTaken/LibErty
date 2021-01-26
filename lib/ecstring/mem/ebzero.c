/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** ebzero
*/

#include <erty/ecstring.h>

void *ebzero(void *ptr, size_t size)
{
#ifndef ALLOW_BZERO_LIBC
    return (ememset(ptr, 0, size));
#else
    return (bzero(ptr, size));
#endif
}