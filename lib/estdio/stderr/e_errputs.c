/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** e_errputs
*/

#include <efile.h>

ssize_t e_errputs(char const *str)
{
    return (efputs(stderr, str));
}