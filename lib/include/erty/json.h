/*
** EPITECH PROJECT, 2021
** json
** File description:
** LibErty
*/

#ifndef __LIBERTY_JSON_H__
    #define __LIBERTY_JSON_H__

    #include <erty/estdlib.h>
    #include <erty/estring.h>
    #include <erty/ectypes.h>
    #include <erty/opt.h>

    typedef struct json json_t;

    struct json {
        union {
            char *string;
            f64_t number;
            bool boolean;
            void *null;
        } v;
        enum {
            JSON_ANY,
            JSON_STR,
            JSON_NUM,
            JSON_OBJ,
            JSON_ARR,
            JSON_BOOL,
            JSON_NULL
        } t;
    };

    //  Buckets 

    typedef struct tuple_json_bucket {
        char *key;
        struct json *data;
    } json_tuple_bucket_t;

    INIT_OPT(json_bucket, json_tuple_bucket_t)

    struct json_bucket_data {
        json_tuple_bucket_t data;
        struct json_bucket_data *next;
        struct json_bucket_data *prev;
    };

    struct json_bucket {
        struct json_bucket_data *list;
        bool (*push_back)(struct json_bucket *, json_tuple_bucket_t);
        bool (*push_front)(struct json_bucket *, json_tuple_bucket_t);
        bool (*insert)(struct json_bucket *, json_tuple_bucket_t, size_t);
        void (*pop_front)(struct json_bucket *);
        void (*pop_back)(struct json_bucket *);
        void (*erase)(struct json_bucket *, size_t);
        void (*clear)(struct json_bucket *);
        void (*_del)(json_tuple_bucket_t *);
        OPT(json_bucket) (*at)(struct json_bucket *, size_t i);
    };

    struct json_bucket_data *create_json_bucket_node(json_tuple_bucket_t data);

    bool json_bucket_push_back(struct json_bucket *self, json_tuple_bucket_t data);
    bool json_bucket_push_front(struct json_bucket *self, json_tuple_bucket_t data);
    bool json_bucket_append_at_index(struct json_bucket *self,
        json_tuple_bucket_t data, size_t index);

    void json_bucket_remove_at_index(struct json_bucket *self, size_t index);
    void json_bucket_pop_clear(struct json_bucket *self);
    void json_bucket_pop_head(struct json_bucket *self);
    void json_bucket_pop_tail(struct json_bucket *self);

    OPT(json_bucket) json_bucket_get_at(struct json_bucket *self, size_t i);

    static inline struct json_bucket create_json_bucker(void (*_del)(json_tuple_bucket_t *))
    {
        return ((struct json_bucket){
            .push_back = json_bucket_push_back,
            .push_front = json_bucket_push_front,
            .insert = json_bucket_append_at_index,
            .pop_front = json_bucket_pop_head,
            .pop_back = json_bucket_pop_tail,
            .erase = json_bucket_remove_at_index,
            .clear = json_bucket_pop_clear,
            ._del = _del,
            .at = json_bucket_get_at
        });
    }

    #define FREE_INTERNAL_BUCKET(_del, ptr) \
        if (ptr && _del) \
            _del(&ptr->data); \
        FREE(ptr)

#endif