/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** eappend_buff
*/

#include <ebuffer.h>

ssize_t eappend_buff_str(char *toadd)
{
    ebuff_t *buff_info = eget_buff();
    size_t size_toadd = estrlen(toadd);
    char *ptr = NULL;

    if (size_toadd > buff_info->buff_size - (buff_info->used + 1)) {
        if (buff_info->can_realloc)
            erealloc_buff(buff_info, size_toadd);
    }
    if (!buff_info->buff)
        return (-1);
    ptr = buff_info->buff;
    ememcpy(buff_info->buff + buff_info->used, toadd, size_toadd + 1);
    buff_info->buff = ptr;
    buff_info->used += size_toadd;
    return (0);
}

ssize_t eappend_buff_char(int c)
{
    char str[2];

    str[0] = c;
    str[1] = 0;
    return (eappend_buff_str(str));
}
