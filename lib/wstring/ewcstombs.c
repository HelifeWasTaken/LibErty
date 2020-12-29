/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** ewcstombs
*/

#include <ewchar.h>

char *ewcstombs(char *buf, wchar_t const *wcs, size_t buffsize)
{
    for (size_t i = 0; i < buffsize; i++)
        buf[i] = convert_wchr_to_chr(wcs[i]);
    return (buf);
}