/*
** EPITECH PROJECT, 2021
** copy_tab
** File description:
** cp
*/

#include <erty/ecstring.h>

char **ecopy_tab(char **tab)
{
    size_t i = 0;
    char **copy = emalloc(sizeof(char *) * (ecount_tab(tab) + 1));

    if (copy == NULL)
        return (NULL);
    for (; tab[i]; i++) {
        if ((copy[i] = estrdup(tab[i])) == NULL)
            return (NULL);
    }
    tab[i] = NULL;
    return (copy);
}
