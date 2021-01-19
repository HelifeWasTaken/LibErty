/*
** EPITECH PROJECT, 2021
** LibErty
** File description:
** insert_ehashmap
*/

#include <erty/ehashmap.h>

static struct hashtable *create_hash_node(char const *key, void *data)
{
    struct hashtable *my_hash_entry = ecalloc(sizeof(struct hashtable), 1);

    if (!my_hash_entry) {
        ASSERT("ehashmap", "Failed node creation");
    } else {
        my_hash_entry->key = estrdup(key);
        if (!my_hash_entry->key)
            ASSERT("ehashmap", "Failed node key dup");
        my_hash_entry->data = data;
        my_hash_entry->next = NULL;
    }
    return (my_hash_entry);
}

void insert_ehashmap(hash_t **head, char const *key, void *data)
{
    u64_t hashvalue = ehash(key);
    hash_t *my_hash = *head;
    struct hashtable *head_array = my_hash[hashvalue].entry;

    if (my_hash[hashvalue].entry == NULL) {
        my_hash[hashvalue].entry = create_hash_node(key, data);
        return;
    }
    for (; my_hash[hashvalue].entry != NULL; my_hash[hashvalue].entry =
        my_hash[hashvalue].entry->next) {
        if (estrcmp(my_hash[hashvalue].entry->key, key) == 0)
            break;
    }
    if (my_hash[hashvalue].entry)
        my_hash[hashvalue].entry->data = data;
    else
        create_hash_node(key, data);
    my_hash[hashvalue].entry = head_array;
}