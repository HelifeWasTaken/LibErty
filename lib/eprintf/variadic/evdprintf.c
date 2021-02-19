/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** evdprintf
*/

#include <erty/eprintf.h>
#include <erty/ecstring.h>

i32_t evdprintf(fd_t fd, const_cstr_t format, va_list *ap)
{
    ebuff_t **buff = NULL;
    i32_t result = 0;

    if (format == NULL)
        return (EPRINTF_FAILURE);
    if (fd == -1)
        return (EPRINTF_FAILURE);
    if (!check_eprintf_format(format))
        return (ewrite(fd, format, estrlen(format)));
    buff = eprintf_parser(format, ap);
    if (*buff == NULL)
        return (EPRINTF_FAILURE);
    result = eflush_buff(buff);
    ereset_buff(buff);
    return (result);
}
