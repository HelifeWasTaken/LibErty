/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** eget_start_sign
*/

int eget_start_sign(char const *str, int *index)
{
    if (*str == '-') {
        *index += 1;
        return (-1);
    }
    return (1);
}