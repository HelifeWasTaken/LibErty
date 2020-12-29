/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** edputchar
*/

#include <ewrite.h>

ssize_t edputchar(int fd, int c)
{
    return (ewrite(fd, &c, 1));
}