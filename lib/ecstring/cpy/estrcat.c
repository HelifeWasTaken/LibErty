/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** estrcat
*/

#include <erty/ecstring.h>

cstr_t estrcat(cstr_t dest, const_cstr_t src)
{
#ifndef ALLOW_STRCAT_LIBC
    estrcpy(dest + estrlen(dest), src);
    return (dest);
#else
    return (strcat(dest, src));
#endif
}