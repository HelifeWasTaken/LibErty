/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** get_eprintf_modifications
*/

#include <eprintf.h>

eprintf_mod_t get_eprintf_modifications(char const **format, va_list *ap)
{
    eprintf_mod_t mod = {0};

    get_eprintf_flag_modifiers(format, &mod, ap);
    mod_eprintf_len_flags(format, &mod);
    return (mod);
}