/*
** EPITECH PROJECT, 2021
** LibErty
** File description:
** eprintf_buffer_reset
*/

#include <ebuffer.h>

void eprintf_buffer_reset(ebuff_t **buff)
{
    if (*buff == NULL)
        *buff = ecreate_buff(NULL);
    else
        ereset_buff(buff);
}
