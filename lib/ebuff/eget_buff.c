/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** eget_buff
*/

#include <ebuffer.h>

char *eget_buffstr(ebuff_t *buff_info)
{
    return (buff_info->buff);
}

size_t eget_buffused(ebuff_t *buff_info)
{
    return (buff_info->used);
}

size_t eget_buffusable(ebuff_t *buff_info)
{
    return (buff_info->buff_size);
}

char *edup_buff(ebuff_t *buff_info)
{
    if (buff_info->buff)
        return (estrdup(buff_info->buff));
    return (NULL);
}