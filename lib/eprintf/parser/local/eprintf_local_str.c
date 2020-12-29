/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** eprintf_local_str
*/

#include <eprintf.h>
#include <estring.h>

void eprintf_local_str(va_list *ap, eprintf_mod_t *mod)
{
    char *s = get_ptr_arg(ap, mod->len);
    size_t size_s = estrlen(s);

    mod->modflag.pad.size = (mod->modflag.pad.right - size_s > 0) ?
        mod->modflag.pad.size - size_s : 0;
    if (mod->modflag.pad.left) {
        eprintf_append_padding(mod->modflag.pad.size, false);
        eappend_buff_str(s);
    } else {
        eappend_buff_str(s);
        eprintf_append_padding(mod->modflag.pad.size, false);
    }
}