/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** eduputnbr
*/

#include <efd.h>

size_t efuputnbr(FILE *stream, uint64_t nb)
{
    return (eduputnbr(stream->_fileno, nb));
}