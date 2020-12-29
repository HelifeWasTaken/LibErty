/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** count_occurences
*/

#include <estring.h>

size_t ecount_occurences(char const *buf, char *occurence)
{
    size_t count = 0;
    size_t size_occurence = estrlen(occurence);
    size_t i = 0;

    while (*(buf + i)) {
        if (estrncmp(buf + i, occurence, size_occurence) == 0) {
            count++;
            i += size_occurence + 1;
        } else
            i++;
    }
    return (count);
}