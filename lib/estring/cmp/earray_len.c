/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** earray_len
*/

#include <stddef.h>

static size_t get_array_len(long ptr)
{
    size_t i = 0;
    unsigned char **ptr_mv = (unsigned char **)ptr;

    for (; ptr_mv[i]; i++);
    return (--i);
}

size_t earray_len(void *ptr)
{
    return (get_array_len((long)ptr));
}