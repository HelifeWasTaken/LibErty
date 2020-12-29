/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** efprintf
*/

#include <eprintf.h>

int efprintf(FILE *stream, char const *format, ...)
{
    int result = EPRINTF_FAILURE;
    va_list ap;

    if (!stream || stream->_fileno < 0)
        return (EPRINTF_FAILURE);
    va_start(ap, format);
    result = evfprintf(stream, format, &ap);
    va_end(ap);
    return (result);
}