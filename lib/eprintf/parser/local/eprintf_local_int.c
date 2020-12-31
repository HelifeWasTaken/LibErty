/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** eprintf_local_int
*/

#include <eprintf.h>
#include <estring.h>
#include <estdlib.h>

static void eprintf_local_int_padding_left(char *nb_s, eprintf_mod_t *mod)
{
    (mod->modflag.space) ? eappend_buff_str(" ") : 0;
    if (mod->modflag.zero) {
        (mod->modflag.plus) ? eappend_buff_str("+") : 0;
        eprintf_append_padding(mod->modflag.precision, true);
        eprintf_append_padding(mod->modflag.pad.size, true);
    } else {
        eprintf_append_padding(mod->modflag.pad.size, false);
        (mod->modflag.plus) ? eappend_buff_str("+") : 0;
        eprintf_append_padding(mod->modflag.precision, true);
    }
    eappend_buff_str(nb_s);
}

static void eprintf_local_int_padding_right(char *nb_s, eprintf_mod_t *mod)
{
    (mod->modflag.plus) ? eappend_buff_str("+") : 0;
    eprintf_append_padding(mod->modflag.precision, true);
    eappend_buff_str(nb_s);
    (mod->modflag.space) ? eappend_buff_str(" ") : 0;
    eprintf_append_padding(mod->modflag.pad.size, false);
}

void eprintf_local_int(va_list *ap, eprintf_mod_t *mod)
{
    int64_t value = get_signed_arg(ap, mod->len);
    int nb_len = enblen(value);
    char nb_s[nb_len + 1];

    eitoa(value, nb_s, "0123456789");
    SET_PRECISION(mod->modflag.precision, 0);
    get_signed_conversion_padding(value, nb_len, mod);
    if (mod->modflag.pad.right)
        eprintf_local_int_padding_right(nb_s, mod);
    else
        eprintf_local_int_padding_left(nb_s, mod);
}