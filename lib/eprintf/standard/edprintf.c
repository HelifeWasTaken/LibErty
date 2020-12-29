/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** edprintf
*/

#include <eprintf.h>

int edprintf(int fd, char const *format, ...)
{
    int result = EPRINTF_FAILURE;
    va_list ap;

    va_start(ap, format);
    result = evdprintf(fd, format, &ap);
    va_end(ap);
    return (result);
}