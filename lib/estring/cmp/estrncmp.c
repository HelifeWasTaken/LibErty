/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** estrncmp
*/

#include <estring.h>
#include <estdlib.h>

static int get_lowest_estrncmp(char const *s1, char const *s2, size_t min)
{
    return ((s1[min] > s2[min]) ? 1 : -1);
}

int estrncmp(char const *s1, char const *s2, size_t n)
{
    size_t sizes1 = estrlen(s1);
    size_t sizes2 = estrlen(s2);

    if (sizes1 < n || sizes2 < n) {
        if (sizes1 != sizes2)
            return (get_lowest_estrncmp(s1, s2, MIN(sizes1, sizes2)));
        return (ememcmp(s1, s2, sizes1));
    }
    return (ememcmp(s1, s2, n));
}