/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** e_errputchar
*/

#include <efile.h>

ssize_t e_errputchar(int c)
{
    return (efputchar(stderr, c));
}