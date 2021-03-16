/*
** EPITECH PROJECT, 2021
** number
** File description:
** is_number
*/

bool json_is_number(char *conf)
{
    if (*conf == '-')
        conf++;
    for (; !json_is_withespace(*conf) && !json_is_comma(*conf); conf++)
        if (!IS_NUM(*conf))
            return (false);
    return (true);
}

int64_t json_parse_number(char **conf)
{
    int min = 1;
    int64_t val = 0;

    if (**conf == '-') {
        min = -1;
        (*conf)++;
    }
    val = strtoll(*conf, conf, 10);
    val = val * min;
    return (val);
}
