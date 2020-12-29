/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** linked_split
*/

#include <linked_split.h>
#include <estring.h>

void free_linked_esplit(linked_esplit_t *head)
{
    if (head) {
        if (head->next)
            free_linked_esplit(head->next);
        efree(head->str);
        efree(head);
    }
}

static linked_esplit_t *eadd_linked_esplit_node(char *str)
{
    linked_esplit_t *ptr = emalloc(sizeof(linked_esplit_t));

    ptr->str = str;
    ptr->next = NULL;
    return (ptr);
}

static void put_in_esplit_list(linked_esplit_t **head, char *str)
{
    linked_esplit_t *ptr = *head;

    if (*head == NULL) {
        *head = eadd_linked_esplit_node(str);
        return;
    }
    for (; ptr && ptr->next; ptr = ptr->next);
    ptr->next = eadd_linked_esplit_node(str);
}

static void find_new_esplit_string(char *str, char *sep,
    linked_esplit_t **list_esplit, size_t *i_str)
{
    size_t size_sep = estrlen(sep);
    size_t i = *i_str;
    size_t offset;

    for (; *(str + i) && estrncmp(str + i, sep, size_sep) != 0; i++);
    offset = i + 1;
    if (*(str + i))
        for (; *(str + offset) &&
            estrncmp(str + offset, sep, size_sep) == 0; offset++);
    put_in_esplit_list(list_esplit, estrndup(str + *i_str, i - *i_str));
    *i_str = (*(str + i) ? offset : i);
}

linked_esplit_t *linked_esplit(char *str, char *sep)
{
    size_t index_str = 0;
    linked_esplit_t *list_esplit = NULL;

    while (str[index_str])
        find_new_esplit_string(str, sep, &list_esplit, &index_str);
    return (list_esplit);
}