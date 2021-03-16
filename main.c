#include <erty/ehashmap.h>

/*
OPT(any) ehashmap_getter(ehashmap_t *self, void *key)
{
    uint64_t id = self->hash(key) % self->bucket_count;
    LIST(hashmap) *ptr = self->bucket[id].list;

    while (ptr) {
        if (estrcmp((char *)key, ptr->data.key) == 0)
            return (OK(any, ptr->data.data));
        ptr = ptr->next;
    }
    return (ERR(any, NULL));
}

bool resize_ehashmap_internal(ehashmap_t *self,
    LIST_EXTERN(hashmap) **new_node, size_t i)
{
    uint64_t id = 0;
    LIST(hashmap) *tmp = self->bucket[i].list;
    LIST(hashmap) *nxt = NULL;

    while (tmp) {
        nxt = tmp->next;
        id = self->hash(tmp->data.key) % self->bucket_count;
        if (!(*new_node)[id].push_back(&(*new_node)[id],
            (struct hash_intern){tmp->data.key, tmp->data.data}))
            return (false);
        FREE(tmp);
        tmp = nxt;
    }
    return (true);
}

bool resizer_ehashmap(ehashmap_t *self)
{
    LIST_EXTERN(hashmap) *n_buck = NULL;
    size_t original = self->bucket_count;

    self->bucket_count *= 2;
    EXCALLOC(n_buck, sizeof(LIST_EXTERN(hashmap)),
            self->bucket_count, false);
    for (size_t i = 0; i < self->bucket_count; i++)
        n_buck[i] = CREATE_LIST(hashmap);
    for (size_t i = 0; i < original; i++) {
        if (!resize_ehashmap_internal(self, &n_buck, i))
            return (false);
    }
    FREE(self->bucket);
    self->bucket = n_buck;
    return (true);
}

bool insert_ehashmap(ehashmap_t *self, struct hash_intern data)
{
    usize_t v = self->hash(data.key) % self->bucket_count;
    LIST(hashmap) *ptr = self->bucket[v].list;
    size_t count = 0;

    if (self->bucket[v].push_back(&self->bucket[v], data)) {
        for (; ptr; ptr = ptr->next)
            count++;
        self->size++;
        if ((count > 2 && (self->size >= self->bucket_count / 2)) || count > 3)
            resizer_ehashmap(self);
    }
    return (false);
}

void clear_ehashmap(ehashmap_t *self)
{
    for (usize_t i = 0; i < self->bucket_count; i++) {
        self->bucket[i].clear(&self->bucket[i]);
    }
    FREE(self->bucket);
}



bool init_ehashmap(usize_t bucket_count, ehashmap_t *map)
{
    *map = (ehashmap_t){
        .hash = ehasher,
        .size = 0,
        .bucket_count = bucket_count,
        .insert = insert_ehashmap,
        .clear = clear_ehashmap,
        .get = ehashmap_getter,
        .bucket = ecalloc(sizeof(LIST_EXTERN(hashmap)), bucket_count)
    };
    if (map->bucket != NULL) {
        for (size_t i = 0; i < bucket_count; i++)
            map->bucket[i] = CREATE_LIST(hashmap);
    }
    return (map->bucket != NULL);
}
*/

u64_t ehasher(const void *data)
{
    const u8_t *data_cs = (const u8_t*) data;
    u64_t hash = 0;

    for (usize_t i = 0; data_cs[i]; i++)
        hash = data_cs[i] + (hash << 6) + (hash << 16) - hash;
    return (hash);
}

int main(void)
{
    HASHMAP(toto) a;

    CREATE_HASHMAP(toto, &a, 1, ehasher);
    a.clear(&a);
    return 0;
}
