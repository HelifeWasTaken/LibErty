/*
** EPITECH PROJECT, 2021
** LibErty
** File description:
** eformat
*/

#include <erty/eprintf.h>

cstr_t eformat(const_cstr_t format, ...)
{
    cstr_t buff = NULL;
    va_list ap;

    va_start(ap, format);
#ifndef ALLOW_ASPRINTF_LIBC
    evasprintf(&buff, format, &ap);
#else
    asprintf(&buff, format, ap);
#endif
    va_end(ap);
    return (buff);
}
