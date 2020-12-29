/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** esprintf
*/

#include <eprintf.h>
#include <estring.h>

int easprintf(char **buff, char const *format, ...)
{
    int result = EPRINTF_FAILURE;
    va_list ap;

    va_start(ap, format);
    result = evasprintf(buff, format, &ap);
    va_end(ap);
    return ((*buff) ? result : EPRINTF_FAILURE);
}