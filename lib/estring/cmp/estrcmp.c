/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** estrcmp
*/

#include <estring.h>
#include <estdlib.h>

int estrcmp(char const *s1, char const *s2)
{
    size_t sizes1 = estrlen(s1);
    size_t sizes2 = estrlen(s2);

    if (sizes1 != sizes2)
        return ((s1[MIN(sizes1, sizes2)] > s2[MIN(sizes1, sizes2)]) ? 1 : -1);
    return (ememcmp(s1, s2, sizes1));
}