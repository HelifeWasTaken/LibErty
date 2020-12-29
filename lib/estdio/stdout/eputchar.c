/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** eputchar
*/

#include <efile.h>

ssize_t eputchar(int c)
{
    return (efputchar(stdout, c));
}