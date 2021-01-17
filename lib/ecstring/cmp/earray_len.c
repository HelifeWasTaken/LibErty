/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** earray_len
*/

#include <erty/ectypes.h>

static size_t get_array_len(long ptr)
{
    size_t i = 0;
    cstr_t *ptr_mv = (cstr_t *)ptr;

    for (; ptr_mv[i]; i++);
    return (--i);
}

size_t earray_len(void *ptr)
{
    return (get_array_len((long)ptr));
}