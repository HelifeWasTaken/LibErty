/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** esplit
*/

#include <estring.h>

void free_esplit(char **buf)
{
    if (!buf)
        return;
    for (size_t i = 0; buf[i]; i++)
        efree(buf[i]);
    efree(buf);
}

static char *find_new_esplit_string(char *str, char *sep, size_t *i_str)
{
    size_t size_sep = estrlen(sep);
    size_t i = *i_str;
    size_t offset;
    char *new_str = NULL;

    for (; *(str + i) && estrncmp(str + i, sep, size_sep) != 0; i++);
    offset = i + 1;
    if (*(str + i))
        for (; *(str + offset) &&
            estrncmp(str + offset, sep, size_sep) == 0; offset++);
    new_str = estrndup(str + *i_str, i - *i_str);
    *i_str = (*(str + i) ? offset : i);
    return (new_str);
}

char **esplit(char *str, char *separator)
{
    size_t index_str = 0;
    size_t len_array = ecount_occurences(str, separator) + 1;
    char **new_array = emalloc(sizeof(char *) * (len_array + 1));

    if (!new_array)
        return (NULL);
    new_array[len_array] = NULL;
    for (size_t i = 0; i < len_array; i++)
        new_array[i] = find_new_esplit_string(str, separator, &index_str);
    return (new_array);
}