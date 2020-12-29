/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** evfprintf
*/

#include <eprintf.h>

int evfprintf(FILE *stream, char const *format, va_list *ap)
{
    if (!stream || stream->_fileno < 0)
        return (EPRINTF_FAILURE);
    if (!eget_buffusable())
        ecreate_buff(NULL, true);
    else
        ereset_buff();
    if (!check_eprintf_format(format) ||
        eprintf_parser(format, ap) == EPRINTF_FAILURE)
        return (EPRINTF_FAILURE);
    return (efflush_buff(stream));
}