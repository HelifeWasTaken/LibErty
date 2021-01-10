/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** ebuff_flush
*/

#include <ebuffer.h>

ssize_t eflush_buff(ebuff_t **buff_info, int fd)
{
    char *buff = 0;
    size_t used = 0;
    size_t result = -1;

    if (!(*buff_info))
        return (result);
    buff = (*buff_info)->buff;
    used = (*buff_info)->used;
    if (!buff || !used)
        return (-1);
    result = ewrite(fd, buff, used);
    ereset_buff(buff_info);
    return (result);
}

ssize_t efflush_buff(ebuff_t **buff_info, FILE *stream)
{
    return (eflush_buff(buff_info, stream->_fileno));
}