/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** ememcmp
*/

#include <ectypes.h>

int ememcmp(void const *s1, void const *s2, size_t n)
{
    unsigned char *s1_s = (unsigned char *)s1;
    unsigned char *s2_s = (unsigned char *)s2;

    while (n--) {
        if (*s1_s != *s2_s)
            return ((*s1_s > *s2_s) ? 1 : -1);
        s1_s++;
        s2_s++;
    }
    if (*s1_s != *s2_s)
        return ((*s1_s > *s2_s) ? 1 : -1);
    return (0);
}