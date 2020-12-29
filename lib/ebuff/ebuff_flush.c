/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** ebuff_flush
*/

#include <ebuffer.h>

ssize_t eflush_buff(int fd)
{
    char *buff = eget_buffstr();
    size_t used = eget_buffused();
    size_t result = -1;

    if (!buff || !used)
        return (-1);
    result = ewrite(fd, buff, used);
    ereset_buff();
    return (result);
}

ssize_t efflush_buff(FILE *stream)
{
    char *buff = eget_buffstr();
    size_t used = eget_buffused();
    size_t result = -1;

    if (!buff || !used)
        return (-1);
    result = efwrite(stream, buff, used);
    ereset_buff();
    return (result);
}