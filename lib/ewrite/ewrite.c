/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** ewrite
*/

#include <ewrite.h>

ssize_t ewrite(int fd, void const *buf, size_t size)
{
    return (write(fd, buf, size));
}