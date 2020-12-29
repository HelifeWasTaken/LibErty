/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** efputchar
*/

#include <ewrite.h>

ssize_t edputchar(FILE *stream, int c)
{
    return (efwrite(stream, &c, 1));
}