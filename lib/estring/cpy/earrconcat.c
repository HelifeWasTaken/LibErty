/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** e_arrconcat
*/

#include <estring.h>
#include <stdio.h>
#include <estdlib.h>

static size_t get_earrconcat_buff_size(char **array, char *delimiter)
{
    size_t count;
    size_t size = 0;
    size_t sizedelim = (delimiter) ? estrlen(delimiter) : 0;

    for (count = 0; array[count]; count++)
        size += estrlen(array[count]);
    size += (sizedelim * (count - 1)) + 1;
    return (size);
}

char *earrconcat(char **array, char *delimiter)
{
    size_t sizebuff = get_earrconcat_buff_size(array, delimiter);
    char *buff = emalloc(sizeof(char) * sizebuff);
    char *ptr = buff;
    size_t index = 0;

    if (!buff)
        return (NULL);
    for (size_t i = 0; array[i] != NULL; i++) {
        estrcpy(buff + index, array[i]);
        index += estrlen(ptr + index);
        if (delimiter && array[i][0] && array[i + 1]) {
            estrcpy(buff + index, delimiter);
            index += estrlen(ptr + index);
        }
    }
    return (ptr);
}