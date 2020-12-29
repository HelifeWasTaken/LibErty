/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** eprint_parser
*/

#include <eprintf.h>

static const struct eprintf_flag_st flags_st[NB_EPRINTF_FLAGS] = {
    {'c',     0,    &eprintf_local_char},
    {'d',   'i',    &eprintf_local_int},
    {'s',   'S',    &eprintf_local_str},
    {'o',     0,    &eprintf_local_oct},
    {'u',     0,    &eprintf_local_uint},
    {'x',     0,    &eprintf_local_hex_min},
    {'X',     0,    &eprintf_local_hex_max},
    {'p',     0,    &eprintf_local_ptr},
    {'f',   'F',    &eprintf_local_double},
};

static ssize_t eprintf_parse_flag(char const **format, va_list *ap)
{
    eprintf_mod_t mod = get_eprintf_modifications(format, ap);

    if (get_char_format_at_index(format, mod.offset) == '\0')
        return (EPRINTF_ERROR_FORMAT);
    for (int i = 0; i < NB_EPRINTF_FLAGS; i++) {
        if (IS_SAME_FLAG(format, mod.offset, flags_st, i)) {
            consume_format_char(format, mod.offset + 1);
            (*flags_st[i].fptr_local)(ap, &mod);
            return (EPRINTF_SUCCESS);
        }
    }
    if (mod.offset == 0 && **format == 'n') {
        eprintf_local_getsize(ap);
        consume_format_char(format, 1);
        return (EPRINTF_SUCCESS);
    }
    return (EPRINTF_ERROR_FORMAT);
}

ssize_t eprintf_parser(char const *format, va_list *ap)
{
    int error = EPRINTF_SUCCESS;

    while (*format) {
        if (*format == '%' && *(format + 1) != '%') {
            consume_format_char(&format, 1);
            error = eprintf_parse_flag(&format, ap);
        }
        else if (*format == '%' && *(format + 1) != '%') {
            eappend_buff_str("%");
            consume_format_char(&format, 2);
        } else {
            eappend_buff_char(*format);
            consume_format_char(&format, 1);
        }
        if (error != EPRINTF_SUCCESS)
            return (EPRINTF_FAILURE);
    }
    return ((error == EPRINTF_SUCCESS) ? EPRINTF_SUCCESS : EPRINTF_FAILURE);
}