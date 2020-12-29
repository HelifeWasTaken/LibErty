/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** ememset
*/

#include <ectypes.h>

void *ememset(void *ptr, int c, size_t size)
{
    unsigned char *ptr_s = (unsigned char *)ptr;

    while (size--)
        *ptr_s++ = c;
    return (ptr);
}