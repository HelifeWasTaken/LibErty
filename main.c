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
    destroy_json(&conf);
    eprintf_free_buff();
    return 0;
}