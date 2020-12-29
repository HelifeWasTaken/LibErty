/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** edputstr
*/

#include <efd.h>
#include <estring.h>

ssize_t edputs(int fd, char const *buf)
{
    return (ewrite(fd, buf, estrlen(buf)) + edputchar(fd, '\n'));
}