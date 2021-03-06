/*
** EPITECH PROJECT, 2021
** liberty
** File description:
** eappend_tab.c
*/

#include <erty/ealloc.h>
#include <erty/ecstring.h>

static char **create_tab(char *src)
{
    char **map = NULL;

    if ((map = emalloc(sizeof(char *) * 2)) != NULL) {
        map[0] = estrdup(src);
        map[1] = NULL;
    }
    return (map);
}

char **eappend_tab(char ***tab, char *src)
{
    size_t i = 0;
    char **new = NULL;

    if (*tab == NULL) {
        *tab = create_tab(src);
        return (*tab);
    }
    if ((new = emalloc(sizeof(char *) * (ecount_tab(*tab) + 2))) == NULL)
        return (NULL);
    for (; (*tab)[i]; i++) {
        if ((new[i] = estrdup((*tab)[i])) == NULL)
            return (NULL);
    }
    new[i] = estrdup(src);
    new[i + 1] = NULL;
    free_esplit(*tab);
    *tab = new;
    return (*tab);
}
