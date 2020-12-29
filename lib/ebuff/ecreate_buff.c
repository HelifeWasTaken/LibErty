/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** ecreate_buff
*/

#include <ebuffer.h>

ssize_t ecreate_buff(char *buffer, bool can_realloc)
{
    ebuff_t *buff_info = eget_buff();

    if (buff_info->buff)
        efree_buff();
    if (!buffer) {
        if (can_realloc) {
            buff_info->buff = emalloc(sizeof(char) * BUFF_CHUNK);
            buff_info->buff_size = BUFF_CHUNK;
        } else
            return (-1);
    } else {
        buff_info->buff = buffer;
        buff_info->buff_size = estrlen(buffer);
    }
    buff_info->can_realloc = can_realloc;
    return ((buff_info->buff) ? 0 : -1);
}