/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** eappend_buff
*/

#include <erty/ebuffer.h>

ssize_t eappend_buff_str(ebuff_t **buff_info, cstr_t toadd)
{
    size_t size_toadd = estrlen(toadd);
    cstr_t ptr = NULL;

    if (!(*buff_info))
        return (-1);
    if (size_toadd > (*buff_info)->buff_size - ((*buff_info)->used + 1))
        erealloc_buff(buff_info, size_toadd);
    if (!(*buff_info)->buff)
        return (-1);
    ptr = (*buff_info)->buff;
    ememcpy((*buff_info)->buff + (*buff_info)->used, toadd, size_toadd + 1);
    (*buff_info)->buff = ptr;
    (*buff_info)->used += size_toadd;
    return (0);
}

ssize_t eappend_buff_char(ebuff_t **buff_info, i32_t c)
{
    char str[2];

    str[0] = c;
    str[1] = 0;
    return (eappend_buff_str(buff_info, str));
}
