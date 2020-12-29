/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** edputnbr
*/

#include <efd.h>

size_t efputnbr(FILE *stream, int64_t nb)
{
    return (edputnbr(stream->_fileno, nb));
}