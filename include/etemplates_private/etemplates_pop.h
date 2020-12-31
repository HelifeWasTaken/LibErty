/*
** EPITECH PROJECT, 2021
** LibErty
** File description:
** etemplates_pop
*/

#ifndef __ETEMPLATES__POP__DECLARATIONS__H__
    #define __ETEMPLATES__POP__DECLARATIONS__H__

    #include <etemplates.h>

    #define TEMPLATES_POP_DECLARATION(name) \
        static inline void LIST_POP_HEAD(name)(LIST(name) **list, \
            void (*method)(LIST(name) **list)) \
        { \
            LIST(name) *ptr = *list; \
            \
            if (!ptr) \
                return; \
            if (method) \
                (*method)(&ptr); \
            *list = (*list)->next; \
            free(ptr); \
        } \
        \
        static inline void LIST_POP_TAIL(name)(LIST(name) **list, \
            void (*method)(LIST(name) **list)) \
        { \
            LIST(name) *ptr = *list; \
            \
            if (!ptr) \
                return; \
            if (!ptr->next) {\
                if (method) \
                    (*method)(&ptr); \
                ptr->prev = NULL; \
                ptr = NULL; \
                free(ptr); \
            } \
            for (; ptr->next->next; ptr = ptr->next); \
            if (method) \
                (*method)(&ptr->next->next); \
            ptr->next->prev = NULL; \
            ptr->next = NULL; \
            free(ptr->next); \
        }

#endif
