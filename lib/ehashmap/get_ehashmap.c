/*
** EPITECH PROJECT, 2021
** LibErty
** File description:
** get_ehashmap
*/

#include <erty/ehashmap.h>
#include <erty/ecstring.h>

void *get_ehashmap(hash_t *head, char const *key)
{
    void *data = NULL;
    u64_t hash_value = ehash(key);
    struct hashtable *head_array = head[hash_value].entry;

    while (head[hash_value].entry && head[hash_value].entry->key) {
        if (estrcmp(key, head[hash_value].entry->key) == 0) {
            data = head[hash_value].entry->data;
            head[hash_value].entry = head_array;
            return (data);
        }
        head[hash_value].entry = head[hash_value].entry->next;
    }
    head[hash_value].entry = head_array;
    return (NULL);
}
