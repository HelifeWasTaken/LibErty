/*
** EPITECH PROJECT, 2021
** LibErty
** File description:
** ehashmap
*/

#ifndef __LIBERTY__EHASHMAP__H__
    #define __LIBERTY__EHASHMAP__H__

    #include <erty/elinked.h>
    #include <erty/ectypes.h>

    struct hash_intern {
        char *key;
        void *data;
    };

    INIT_LIST(hashmap, struct hash_intern, NULL);

    typedef struct ehashmap {
        u64_t (*hash)(const void *);
        usize_t size;
        usize_t bucket_count;
        bool (*insert)(struct ehashmap *, struct hash_intern data);
        void (*clear)(struct ehashmap *);
        LIST_EXTERN(hashmap) *bucket;
    } ehashmap_t;

#endif /* !__LIBERTY__EHASHMAP__H__ */