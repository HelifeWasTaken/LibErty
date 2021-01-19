/*
** EPITECH PROJECT, 2021
** LibErty
** File description:
** efree_hashmap
*/

#include <erty/ehashmap.h>

static void free_all_next_pointers_ehashmap(hash_t **head, size_t i)
{
    hash_t *ptr = *head;
    struct hashtable *nextptr = NULL;

    while (ptr[i].entry) {
        nextptr = ptr[i].entry->next;
        FREE(ptr[i].entry->next);
        FREE(ptr[i].entry);
        ptr[i].entry = nextptr;
    }
    FREE(ptr[i].entry);
}

static void free_lone_tab_ehashmap(hash_t **head, size_t i)
{
    if ((*head)[i].entry && (*head)[i].entry->key)
        FREE((*head)[i].entry->key)
}

void free_ehashmap(hash_t **head)
{
    hash_t *ptr = *head;

    for (size_t i = 0; i < TAB_SIZE; i++) {
        if (ptr[i].entry == NULL) {
            FREE(ptr[i].entry);
            continue;
        }
        if (ptr[i].entry->next)
            free_all_next_pointers_ehashmap(&ptr, i);
        else
            free_lone_tab_ehashmap(&ptr, i);
        FREE(ptr[i].entry);
    }
    FREE(ptr);
}