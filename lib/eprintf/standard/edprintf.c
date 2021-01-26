/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** edprintf
*/

#include <erty/eprintf.h>

i32_t edprintf(fd_t fd, const_cstr_t format, ...)
{
    i32_t result = EPRINTF_FAILURE;
    va_list ap;

    va_start(ap, format);
#ifndef ALLOW_DPRINTF_LIBC
    result = evdprintf(fd, format, &ap);
#else
    result = vdprintf(fd, format, ap);
#endif
    va_end(ap);
    return (result);
}
