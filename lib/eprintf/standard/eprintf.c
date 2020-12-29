/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** eprintf
*/

#include <eprintf.h>

int eprintf(char const *format, ...)
{
    int result = EPRINTF_FAILURE;
    va_list ap;

    va_start(ap, format);
    result = evprintf(format, &ap);
    va_end(ap);
    return (result);
}