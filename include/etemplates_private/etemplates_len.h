/*
** EPITECH PROJECT, 2021
** LibErty
** File description:
** etemplates_len
*/

#ifndef __ETEMPLATES__LEN__DECLARATIONS__H__
    #define __ETEMPLATES__LEN__DECLARATIONS__H__

    #include <etemplates.h>

    #define TEMPLATES_LEN_DECLARATION(name) \
        static inline size_t LIST_LEN(name)(LIST(name) *list) \
        { \
            size_t length = 0; \
            \
            for (; list; list = list->next) \
                length++; \
            return (length); \
        }
#endif
