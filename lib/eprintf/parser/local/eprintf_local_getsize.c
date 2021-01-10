/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** eprintf_local_getsize
*/

#include <eprintf.h>

void eprintf_local_getsize(ebuff_t **buff, va_list *ap)
{
    int *size = va_arg(*ap, int *);

    *size = eget_buffused(*buff);
}