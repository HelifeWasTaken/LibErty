/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** ememcmp
*/

#include <erty/ectypes.h>

int ememcmp(void const *s1, void const *s2, size_t n)
{
#ifndef ALLOW_MEMCMP_LIBC
    ucstr_t s1_s = (ucstr_t)s1;
    ucstr_t s2_s = (ucstr_t)s2;

    while (n--) {
        if (*s1_s != *s2_s)
            return ((*s1_s > *s2_s) ? 1 : -1);
        s1_s++;
        s2_s++;
    }
    if (*s1_s != *s2_s)
        return ((*s1_s > *s2_s) ? 1 : -1);
    return (0);
#else
    return (memcmp(s1, s2, n);
#endif
}
