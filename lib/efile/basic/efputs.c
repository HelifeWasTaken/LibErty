/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** efputstr
*/

#include <estring.h>
#include <efile.h>

ssize_t efputs(FILE *stream, char const *buf)
{
    return (efwrite(stream, buf, estrlen(buf)) + efputchar(stream, '\n'));
}