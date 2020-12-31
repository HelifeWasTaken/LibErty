/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** get_eprintf_flag_modifiers
*/

#include <eprintf.h>
#include <estdlib.h>
#include <estring.h>

static bool check_eprintf_flag_modifiers(eprintf_modflag_t *mod, char const c)
{
    switch (c) {
        case '0':
            mod->zero = true;
            return (true);
        case '-':
            mod->minus = true;
            return (true);
        case ' ':
            mod->space = true;
            return (true);
        case '+':
            mod->plus = true;
            return (true);
        default:
            return (false);
    }
}

static void get_eprintf_precision(char const **format,
    eprintf_mod_t *mod, va_list *ap)
{
    if (get_char_format_at_index(format, mod->offset) != '.')
        return;
    mod->offset++;
    if (get_char_format_at_index(format, mod->offset) == '*') {
        mod->modflag.precision = va_arg(*ap, unsigned int);
        mod->offset += enblen(mod->modflag.pad.size);
    } else if (eis_num(get_char_format_at_index(format, mod->offset))) {
        mod->modflag.precision = (unsigned int)eatoi(*format);
        mod->offset += enblen(mod->modflag.pad.size);
    }
}

static void get_eprintf_padding(char const **format,
    eprintf_mod_t *mod, va_list *ap)
{
    if (get_char_format_at_index(format, mod->offset) == '*') {
        mod->modflag.pad.size = va_arg(*ap, unsigned int);
        mod->offset += enblen(mod->modflag.pad.size);
    } else if (eis_num(get_char_format_at_index(format, mod->offset))) {
        mod->modflag.pad.size = eatoi(*format);
        mod->offset += enblen(mod->modflag.pad.size);
    }
}

static void parse_eprintf_flag_modifiers(eprintf_modflag_t *mod)
{
    if (mod->minus) {
        mod->zero = false;
        mod->pad.left = false;
        mod->pad.right = true;
    }
    if (mod->precision != -1)
        mod->zero = false;
    if (mod->plus)
        mod->space = false;
}

void get_eprintf_flag_modifiers(char const **format,
    eprintf_mod_t *mod, va_list *ap)
{
    eprintf_modflag_t modflag = {0};

    modflag.precision = -1;
    modflag.pad.left = true;
    while (check_eprintf_flag_modifiers(&modflag,
        get_char_format_at_index(format, mod->offset)))
        mod->offset++;
    mod->modflag = modflag;
    get_eprintf_padding(format, mod, ap);
    get_eprintf_precision(format, mod, ap);
    parse_eprintf_flag_modifiers(&mod->modflag);
}