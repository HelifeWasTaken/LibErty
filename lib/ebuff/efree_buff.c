/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** efree_buff
*/


#include <ebuffer.h>

void efree_buff(void)
{
    ebuff_t *buff_info = eget_buff();

    if (buff_info->buff_size) {
        efree(buff_info->buff);
        buff_info->buff = NULL;
        buff_info->buff_size = 0;
    }
    ereset_buff();
}