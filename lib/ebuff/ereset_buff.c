/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** ereset_buff
*/

#include <ebuffer.h>

void ereset_buff(void)
{
    ebuff_t *buff_info = eget_buff();

    if (buff_info->buff)
        ebzero(buff_info->buff, sizeof(char) * buff_info->used);
    buff_info->used = 0;
    buff_info->can_realloc = false;
}