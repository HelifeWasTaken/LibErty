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

    static inline void destroy_json(struct json *self)
    {
        switch (self->t) {
            case JSON_ANY:
            case JSON_NULL:
                FREE(self->v.null)
                break;
            case JSON_STR:
                FREE(self->v.string);
                break;
            case JSON_NUM:
            case JSON_BOOL:
                break;
            case JSON_OBJ:
                break;
            case JSON_ARR:
                break;
        }
    }

    INIT_OPT(json, struct json)

    typedef struct tuple_json_bucket {
        char *key;
        struct json data;
    } json_tuple_bucket_t;

    #define JSON_TUPLE(key, value) (json_tuple_bucket_t){key, value}
    INIT_OPT(json_bucket, struct tuple_json_bucket)

    static inline void destroy_json_tuple(struct tuple_json_bucket *data)
    {
        FREE(data->key);
        destroy_json(&data->data);
    }

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

    static inline u64_t ehasher(const void *data)
    {
        const u8_t *data_cs = (const u8_t*) data;
        u64_t hash = 0;

        for (usize_t i = 0; data_cs[i]; i++)
            hash = data_cs[i] + (hash << 6) + (hash << 16) - hash;
        return (hash);
    }

    typedef struct json_hashmap {
        u64_t (*hash)(const void *);
        usize_t size;
        usize_t bucket_count;
        bool (*insert)(struct json_hashmap *, struct tuple_json_bucket);
        void (*clear)(struct json_hashmap *);
        OPT(json) (*get)(struct json_hashmap *, void *key);
        struct json_bucket *bucket;
    } json_hashmap_t;

    bool json_hashmap_insert(struct json_hashmap *self,
                            struct tuple_json_bucket data);
    OPT(json) json_hashmap_getter(struct json_hashmap *self, void *key);
    bool json_hashmap_resizer(struct json_hashmap *self);
    void json_hashmap_clear(struct json_hashmap *self);

    struct json_bucket_data *create_json_bucket_node(json_tuple_bucket_t data);
    bool json_bucket_push_back(struct json_bucket *self,
                                json_tuple_bucket_t data);
    bool json_bucket_push_front(struct json_bucket *self,
                                json_tuple_bucket_t data);
    bool json_bucket_append_at_index(struct json_bucket *self,
                                    json_tuple_bucket_t data, size_t index);
    void json_bucket_remove_at_index(struct json_bucket *self, size_t index);
    void json_bucket_pop_clear(struct json_bucket *self);
    void json_bucket_pop_head(struct json_bucket *self);
    void json_bucket_pop_tail(struct json_bucket *self);

    OPT(json_bucket) json_bucket_get_at(struct json_bucket *self, size_t i);

    static inline struct json_bucket create_json_bucket(
        void (*_del)(json_tuple_bucket_t *))
    {
        return ((struct json_bucket){
            .list = NULL,
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

    static inline bool create_json_hashmap(struct json_hashmap *self,
                            usize_t bucket_count, u64_t (*hash)(const void *))
    {
        *self = (struct json_hashmap){
            .hash = hash,
            .size = 0,
            .bucket_count = bucket_count,
            .insert = json_hashmap_insert,
            .clear = json_hashmap_clear,
            .get = json_hashmap_getter,
            .bucket = NULL
        };
        EXCALLOC(self->bucket, sizeof(struct json_hashmap),
                bucket_count, false);
        for (usize_t i = 0; i < bucket_count; i++)
            self->bucket[i] = create_json_bucket(destroy_json_tuple);
    }

    struct json_array {
        struct json *data;
        usize_t size;
        isize_t (*push_back)(struct json_array *, struct json);
        void (*_del)(struct json *);
        isize_t (*erase)(struct json_array *, usize_t idx);
        void (*clear)(struct json_array *);
        isize_t (*insert)(struct json_array *, struct json, usize_t idx);
        OPT(json) (*at)(struct json_array *, usize_t idx);
    };

    isize_t json_vector_insert(struct json_array *self,
                                struct json add, usize_t idx);
    isize_t json_vector_push_back(struct json_array *self, struct json add);
    isize_t json_vector_erase(struct json_array *self, usize_t idx);
    void json_vector_clear(struct json_array *self);
    OPT(json) json_vector_at(struct json_array *self, usize_t idx);

    static inline struct json_array json_vector_create(void)
    {
        return ((struct json_array){
            .at = json_vector_at,
            .clear = json_vector_clear,
            .data = NULL,
            .erase = json_vector_erase,
            .insert = json_vector_insert,
            .push_back = json_vector_push_back,
            .size = 0,
            ._del = destroy_json
        });
    }

    #define FREE_INTERNAL_BUCKET(_del, ptr) \
        if (ptr && _del) \
            _del(&ptr->data); \
        FREE(ptr)

#endif