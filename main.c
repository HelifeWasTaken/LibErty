
#include <erty/ehashmap.h>

bool insert_ehashmap(ehashmap_t *self, struct hash_intern data)
{
    usize_t v = self->hash(data.key) % self->size;

    if (self->bucket[v].push_back(&self->bucket[v], data)) {
        self->size++;
        return (true);
    }
    return (false);
}

void clear_ehashmap(ehashmap_t *self)
{
    for (usize_t i = 0; i < self->size; i++) {
        self->bucket[i].clear(&self->bucket[i]);
    }
    FREE(self->bucket);
}

u64_t ehasher(const void *data)
{
    const u8_t *data_cs = (const u8_t*) data;
    u64_t hash = 0;

    for (usize_t i = 0; data_cs[i]; i++)
        hash = data_cs[i] + (hash << 6) + (hash << 16) - hash;
    return (hash); 
}

bool init_ehashmap(usize_t size, ehashmap_t *map)
{
    *map = (ehashmap_t){
        .hash = ehasher,
        .size = 0,
        .bucket_count = size,
        .insert = insert_ehashmap,
        .clear = clear_ehashmap,
        .bucket = ecalloc(sizeof(LIST_EXTERN(hashmap)), size)
    };
    return (map->bucket != NULL);
}

INIT_LIST(toto, int, NULL);

int main(void)
{
    return 0;
}