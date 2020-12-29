/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** evdprintf
*/

#include <eprintf.h>
#include <estring.h>

int evdprintf(int fd, char const *format, va_list *ap)
{
    FILE *stream[3] = {stdin, stdout, stderr};

    if (fd < 0)
        return (EPRINTF_FAILURE);
    if (fd <= 2)
        return (evfprintf(stream[fd], format, ap));
    if (!eget_buffusable())
        ecreate_buff(NULL, true);
    else
        ereset_buff();
    if (!check_eprintf_format(format) ||
        eprintf_parser(format, ap) == EPRINTF_FAILURE)
        return (EPRINTF_FAILURE);
    return (eflush_buff(fd));
}