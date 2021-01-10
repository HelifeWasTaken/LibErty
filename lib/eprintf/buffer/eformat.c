/*
** EPITECH PROJECT, 2021
** LibErty
** File description:
** eformat
*/

#include <eprintf.h>

char *eformat(char const *format, ...)
{
    char *buff = NULL;
    va_list ap;

    va_start(ap, format);
    evasprintf(&buff, format, &ap);
    va_end(ap);
    return (buff);
}