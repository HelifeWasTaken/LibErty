/*
** EPITECH PROJECT, 2021
** LibErty
** File description:
** ehashmap
*/

#ifndef __LIBERTY__EHASHMAP__H__
    #define __LIBERTY__EHASHMAP__H__

    #include <erty/ectypes.h>
    #include <erty/ealloc.h>
    #include <erty/eassert.h>

    static const u64_t MAGIC_NUMBER = 0xab13;

    static const u64_t TAB_SIZE = 10000;

    typedef struct hash_entry hash_t;

    struct hashtable {
        char *key;
        void *data;
        struct hashtable *next;
    };

    struct hash_entry {
        struct hashtable *entry;
    };

    __always_inline static inline u64_t ehash(void const *key_raw)
    {
        char const *key = (char const *)key_raw;
        u64_t keyvalue = 0;

        for (size_t i = 0; key[i]; i++) {
            keyvalue += (key[i] * key[i]) <<
                MAGIC_NUMBER * ((key[i] * key[i]) >> key[i] ^ MAGIC_NUMBER);
        }
        return (keyvalue % TAB_SIZE);
    }

    __always_inline static inline u64_t ehash_nbyte(void const *key_raw,
        size_t n)
    {
        char const *key = (char const *)key_raw;
        u64_t keyvalue = 0;

        for (size_t i = 0; i < n; i++) {
            keyvalue += (key[i] * key[i]) <<
                MAGIC_NUMBER * ((key[i] * key[i]) >> key[i] ^ MAGIC_NUMBER);
        }
        return (keyvalue % TAB_SIZE);
    }

    void *get_ehashmap(hash_t *head, char const *key);
    void insert_ehashmap(hash_t **head, char const *key, void *data);
    void free_ehashmap(hash_t **head);

    __always_inline static inline hash_t *init_ehashmap(void)
    {
        hash_t *new = ecalloc(sizeof(hash_t), TAB_SIZE);

        if (!new)
            ASSERT("ehashmap", "Failed initialisation");
        return (new);
    }

#endif /* !__LIBERTY__EHASHMAP__H__ */