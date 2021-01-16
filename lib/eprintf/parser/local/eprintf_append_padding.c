/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** eprintf_append_padding
*/

#include <erty/eprintf.h>
#include <erty/ecstring.h>

void eprintf_append_padding(ebuff_t **buff, i32_t size, bool iszero)
{
    char str[size + 1];

    if (size <= 0)
        return;
    str[size] = 0;
    ememset(str, (iszero) ? '0' : ' ', sizeof(char) * size);
    eappend_buff_str(buff, str);
}