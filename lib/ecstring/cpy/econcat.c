/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** econcat
*/

#include <erty/ecstring.h>

cstr_t econcat(cstr_t s1, cstr_t s2)
{
    size_t size_s1 = 0;
    size_t size_s2 = 0;
    cstr_t buf = NULL;

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

cstr_t earrconcat(const_cstr_t *array, const_cstr_t delimiter)
{
    cstr_t buff = NULL;

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