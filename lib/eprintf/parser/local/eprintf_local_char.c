/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** eprintf_local_char
*/

#include <eprintf.h>

void eprintf_local_char(va_list *ap, eprintf_mod_t *mod)
{
    wchar_t wchr = get_signed_arg(ap, mod->len);
    wchr = convert_wchr_to_chr(wchr);

    if (mod->modflag.pad.left) {
        eprintf_append_padding(mod->modflag.pad.size, false);
        eappend_buff_char(wchr);
    } else {
        eappend_buff_char(wchr);
        eprintf_append_padding(mod->modflag.pad.size, false);
    }
}