/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** evprintf
*/

#include <eprintf.h>

int evprintf(char const *format, va_list *ap)
{
    return (evfprintf(stdout, format, ap));
}