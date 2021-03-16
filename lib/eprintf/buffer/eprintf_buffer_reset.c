/*
** EPITECH PROJECT, 2021
** LibErty
** File description:
** eprintf_buffer_reset
*/

#include <erty/ebuffer.h>

void eprintf_buffer_reset(ebuff_t **buff)
{
    if (*buff == NULL)
        *buff = ecreate_buff(NULL, true);
    else
        ereset_buff(buff);
}
