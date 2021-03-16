/*
** EPITECH PROJECT, 2021
** json
** File description:
** LibErty
*/

#ifndef __LIBERTY_JSON_H__
    #define __LIBERTY_JSON_H__

    #include <erty/evector.h>
    #include <erty/elinked.h>

    INIT_VECTOR(json_vec, arr, json_value_t, NULL);

    typedef struct json json_t;
    typedef union json_value json_value_t;
    typedef enum json_type json_type_t;
    typedef VECTOR(json_vec) json_vec_t;

    union json_value {
        json_vec_t vec;
        char *str;
        f64_t num;
        bool boolean;
    };

    enum json_type {
        JSON_ANY,
        JSON_STR,
        JSON_NUM,
        JSON_OBJ,
        JSON_ARR,
        JSON_BOOL,
        JSON_NULL
    };

    struct json {
        json_value_t v;
        json_type_t t;
    };

#endif