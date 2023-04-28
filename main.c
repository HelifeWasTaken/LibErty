#include <erty/json.h>
#include <erty/ebuffer.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <erty/json.h>
#include <erty/elinked.h>
#include <erty/evector.h>
#include <erty/eprintf.h>

int main(int ac, char **av)
{
    struct json conf = {0};

    if (ac != 2) {
        efprintf(stderr, "Please give a file in input\n");
        return (1);
    }

    if (json_parser(&conf, av[1]) == false) {
        efprintf(stderr, "Invalid json parsed");
        return (132);
    }
    eprintf("Your File is a valid Json file\n");
    destroy_json(&conf);
    eprintf_free_buff();
    return 0;
}
