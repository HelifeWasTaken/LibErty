/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** evasprintf
*/

#include <eprintf.h>

int evasprintf(char **buff, char const *format, va_list *ap)
{
    ebuff_t **buff_info = NULL;

    if (*buff) {
        *buff = NULL;
        efree(*buff);
    }
    if (!check_eprintf_format(format)) {
        *buff = estrdup(format);
        return ((*buff) ? (ssize_t)estrlen(*buff) : -1);
    }
    buff_info = eprintf_parser(format, ap);
    if (*buff_info != NULL && (*buff_info)->buff) {
        *buff = edup_buff(*buff_info);
        if ((*buff_info)->buff_size >= BUFF_CHUNK * 2)
            efree_buff(buff_info);
        return ((*buff) ? (signed int)estrlen(*buff) : EPRINTF_FAILURE);
    }
    return (EPRINTF_FAILURE);
}