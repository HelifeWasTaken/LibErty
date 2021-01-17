/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** esplit
*/

#include <erty/ecstring.h>

void free_esplit(cstr_t *buf)
{
    if (!buf)
        return;
    for (size_t i = 0; buf[i]; i++)
        efree(buf[i]);
    efree(buf);
}

static cstr_t find_new_esplit_string(const_cstr_t str,
    const_cstr_t sep, size_t *i_str)
{
    size_t size_sep = estrlen(sep);
    size_t i = *i_str;
    size_t offset;
    cstr_t new_str = NULL;

    for (; *(str + i) && estrncmp(str + i, sep, size_sep) != 0; i++);
    offset = i + 1;
    if (*(str + i))
        for (; *(str + offset) &&
            estrncmp(str + offset, sep, size_sep) == 0; offset++);
    new_str = estrndup(str + *i_str, i - *i_str);
    *i_str = (*(str + i) ? offset : i);
    return (new_str);
}

cstr_t *esplit(const_cstr_t str, const_cstr_t separator)
{
    size_t index_str = 0;
    size_t len_array = ecount_occurences(str, separator) + 1;
    cstr_t *new_array = emalloc(sizeof(cstr_t ) * (len_array + 1));

    if (!new_array)
        return (NULL);
    new_array[len_array] = NULL;
    for (size_t i = 0; i < len_array; i++)
        new_array[i] = find_new_esplit_string(str, separator, &index_str);
    return (new_array);
}