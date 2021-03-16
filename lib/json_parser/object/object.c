/*
** EPITECH PROJECT, 2021
** object
** File description:
** LibErty
*/

#include <erty/json.h>

bool json_parse_object_first_entry(char **buff, struct json_object *obj)
{
    if (json_expect(buff, '}') == true) {
        obj->t = JSON_END;
        obj->v.nullptr = NULL;
        obj->next = NULL;
        return (true);
    } else if (!json_expect(buff, '\"') || !json_is_valid_string(*buff)) {
        return (false);
    if (json_parse_string(buff, &obj->v.string) == false)
        return (false);
    if (json_expect)
}

bool json_parse_object(char **buff, json_t *conf, bool first_entry)
{
    if (first_entry)
        return (json_parse_object_first_entry(buff, conf));
    else
}