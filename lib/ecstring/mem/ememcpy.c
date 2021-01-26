/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** ememcpy
*/

#include <erty/ectypes.h>

void *ememcpy(void *dest, void const *src, size_t size)
{
#ifndef ALLOW_MEMCPY_LIBC
    ucstr_t dest_s = (ucstr_t)dest;
    ucstr_t src_s = (ucstr_t)src;

    while (size--)
        *dest_s++ = *src_s++;
    return (dest);
#else
    return (memcpy(dest, src, size));
#endif
}