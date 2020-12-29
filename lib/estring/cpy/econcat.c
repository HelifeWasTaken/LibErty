/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** econcat
*/

#include <estring.h>

char *econcat(char *s1, char *s2)
{
    size_t size_s1 = 0;
    size_t size_s2 = 0;
    char *buf = NULL;

    if (s2 == NULL)
        return (NULL);
    if (s1 == NULL) {
        buf = estrdup(s2);
        efree(s2);
        return (buf);
    }
    size_s1 = estrlen(s1);
    size_s2 = estrlen(s2);
    buf = emalloc(sizeof(char) * (size_s1 + size_s2 + 1));
    estrcpy(buf, s1);
    estrcat(buf + size_s1, s2);
    buf[size_s1 + size_s2] = '\0';
    efree(s1);
    efree(s2);
    return (buf);
}

char *e_arrconcat(char **array, char *delimiter)
{
    char *buff = NULL;

    for (size_t i = 0; array[i] != NULL; i++) {
        if (!buff)
            buff = econcat(buff, estrdup(array[i]));
        else
            buff = econcat(estrdup(buff), estrdup(array[i]));
        if (delimiter && array[i][0] && array[i + 1])
            buff = econcat(estrdup(buff), estrdup(delimiter));
    }
    return (buff);
}