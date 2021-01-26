/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** estrcpy
*/

#include <erty/ectypes.h>

cstr_t estrcpy(cstr_t dest, cstr_t src)
{
#ifndef ALLOW_STRCPY_LIBC
    size_t i = 0;

    do {
        dest[i] = src[i];
    } while (src[i++]);
    return (dest);
#else
    return (strcpy(dest, src));
#endif
}
