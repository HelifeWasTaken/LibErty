/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** ememcpy
*/

#include <ectypes.h>

void *ememcpy(void *dest, void const *src, size_t size)
{
    unsigned char *dest_s = (unsigned char *)dest;
    unsigned char *src_s = (unsigned char *)src;

    while (size--)
        *dest_s++ = *src_s++;
    return (dest);
}