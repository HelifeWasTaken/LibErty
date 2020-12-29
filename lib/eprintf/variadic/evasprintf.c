/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** evasprintf
*/

#include <eprintf.h>

int evasprintf(char **buff, char const *format, va_list *ap)
{
    if (*buff) {
        *buff = NULL;
        efree(*buff);
    }
    if (!eget_buffusable())
        ecreate_buff(NULL, true);
    else
        ereset_buff();
    if (!check_eprintf_format(format) ||
        eprintf_parser(format, ap) == EPRINTF_FAILURE)
        return (EPRINTF_FAILURE);
    if (eget_buffstr() != NULL) {
        *buff = edup_buff();
        ereset_buff();
        return ((*buff) ? (signed int)estrlen(*buff) : EPRINTF_FAILURE);
    }
    return (EPRINTF_FAILURE);
}