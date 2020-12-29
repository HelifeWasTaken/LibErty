/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** erealloc_buff
*/

#include <ebuffer.h>

ssize_t erealloc_buff(ebuff_t *buff_info, size_t toadd)
{
    buff_info->buff = erealloc(buff_info->buff, buff_info->buff_size,
        buff_info->buff_size + toadd + BUFF_CHUNK);
    if (!buff_info->buff)
        return (-1);
    buff_info->buff_size += toadd + BUFF_CHUNK;
    return (1);
}