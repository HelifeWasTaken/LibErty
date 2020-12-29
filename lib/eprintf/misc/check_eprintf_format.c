/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** check_eprintf_format
*/

#include <ectypes.h>

bool check_eprintf_format(char const *format)
{
    uint8_t found_twice = 0;

    for (size_t i = 0; format[i]; i++) {
        if ((format[i] != ' ' && format[i] != '%') || found_twice == 2)
            return (true);
        if (format[i] == '%')
            found_twice++;
    }
    if (found_twice == 2)
        return (true);
    return (false);
}