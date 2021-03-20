#include <erty/json.h>
#include <erty/ebuffer.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <erty/json.h>
#include <erty/elinked.h>
#include <erty/evector.h>

int main(int ac, char **av)
{
    struct json conf = {0};
    char *file = NULL;

    if (ac != 2) {
        ASSERT("LibSeraph", "defaults to test2.json");
        file = "./test2.json";
    }else
        file = av[1];
    if (json_parser(&conf, file) == false)
        return (132);
    struct json_hashmap *map = conf.v.object;

    struct json_array *arr = map->get(&map, "properties").value.v.object;
    map = arr->data[1].v.object;
    printf("%s\n", map->get(&map, "name").value.v.string);
    /*
    struct json_array *arr = map->get(&map, "properties").value.v.array;
    printf("%ld\n", arr->size);
    fflush(stdout);
    printf("%s\n", map->get(&map, "value").value.v.string);
//    printf("%s\n", map->get(&map, "value").value.v.string);
    */
    destroy_json(&conf);
    eprintf_free_buff();
    return 0;
}