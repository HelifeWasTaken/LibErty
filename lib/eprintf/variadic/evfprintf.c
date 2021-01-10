/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** evfprintf
*/

#include <eprintf.h>

int evfprintf(FILE *stream, char const *format, va_list *ap)
{
    if (!stream)
        return (EPRINTF_FAILURE);
    return (evdprintf(stream->_fileno, format, ap));
}