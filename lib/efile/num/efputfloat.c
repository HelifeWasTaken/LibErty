/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** efputfloat
*/

#include <efd.h>

size_t efputfloat(FILE *stream, double nb, uint8_t precision)
{
    return (edputfloat(stream->_fileno, nb, precision));
}