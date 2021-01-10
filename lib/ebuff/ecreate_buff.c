/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** ecreate_buff
*/

#include <ebuffer.h>

ebuff_t *ecreate_buff(char *buffer)
{
    ebuff_t *buff_info = emalloc(sizeof(ebuff_t));

    if (!buff_info)
        return (NULL);
    if (buff_info->buff)
        efree_buff(&buff_info);
    if (!buffer) {
        buff_info->buff = emalloc(sizeof(char) * BUFF_CHUNK);
        buff_info->buff_size = BUFF_CHUNK;
    } else {
        buff_info->buff = buffer;
        buff_info->buff_size = estrlen(buffer);
    }
    return (buff_info);
}
