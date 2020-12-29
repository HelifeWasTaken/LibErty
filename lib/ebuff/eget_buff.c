/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** eget_buff
*/

#include <ebuffer.h>

ebuff_t *eget_buff(void)
{
    static ebuff_t buff_info = (ebuff_t){0, 0, NULL, false};

    return (&buff_info);
}

char *eget_buffstr(void)
{
    ebuff_t *buff_info = eget_buff();

    return (buff_info->buff);
}

size_t eget_buffused(void)
{
    ebuff_t *buff_info = eget_buff();

    return (buff_info->used);
}

size_t eget_buffusable(void)
{
    ebuff_t *buff_info = eget_buff();

    return (buff_info->buff_size);
}

char *edup_buff(void)
{
    ebuff_t *buff_info = eget_buff();

    if (buff_info->buff)
        return (estrdup(buff_info->buff));
    return (NULL);
}