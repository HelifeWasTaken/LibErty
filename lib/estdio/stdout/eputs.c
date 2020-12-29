/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** eputs
*/

#include <efile.h>

ssize_t eputs(char const *str)
{
    return (efputs(stdout, str));
}