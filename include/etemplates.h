/*
** EPITECH PROJECT, 2021
** LibErty
** File description:
** etemplates
*/

#ifndef __LIBERTY_ETEMPLATES__LIST__H__
    #define __LIBERTY__ETEMPLATES__LIST__H__

    #include <stddef.h>
    #include <etemplates_private/etemplates_len.h>
    #include <etemplates_private/etemplates_pop.h>
    #include <etemplates_private/etemplates_push.h>
    #include <etemplates_private/etemplates_concat.h>

    void *malloc(size_t size);
    void free(void *ptr);

    #define N_LIST_CREATE(name) create_list_##name

    #define LIST_CREATE(name) N_LIST_CREATE(name)()
    #define LIST(name) struct s_##name
    #define LIST_LEN(name) len_list_##name
    #define LIST_PUSH_TAIL(name) push_item_list_tail_##name
    #define LIST_PUSH_HEAD(name) push_item_list_head_##name
    #define LIST_POP_HEAD(name) pop_item_list_head_##name
    #define LIST_POP_TAIL(name) pop_item_list_tail_##name
    #define LIST_PRINT(name) print_list_##name
    #define LIST_CONCAT(name) concat_list_##name

    #define INIT_LIST(type, name) \
        LIST(name) { \
            type var; \
            LIST(name) *prev; \
            LIST(name) *next; \
        }; \
        \
        TEMPLATES_PUSH_DECLARATION(name, type) \
        TEMPLATES_LEN_DECLARATION(name) \
        TEMPLATES_POP_DECLARATION(name)
#endif
