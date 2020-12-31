/*
** EPITECH PROJECT, 2021
** LibErty
** File description:
** etemplates_push
*/

#ifndef __ETEMPLATES__LIST__PUSH__DECLARATIONS__H__
    #define __ETEMPLATES__LIST__PUSH__DECLARATIONS__H__

    #include <etemplates.h>

    #define TEMPLATES_PUSH_DECLARATION(name, type) \
        static inline void LIST_PUSH_TAIL(name)(LIST(name) **list, type var) \
        { \
            LIST(name) *ptr = *list; \
            \
            if (!ptr) { \
                *list = malloc(sizeof(LIST(name))); \
                if (*list) { \
                    (*list)->prev = NULL; \
                    (*list)->var = var; \
                    (*list)->next = NULL; \
                } \
                return; \
            } \
            for (; ptr->next; ptr = ptr->next); \
            ptr->next = malloc(sizeof(LIST(name))); \
            if (!(ptr->next)) \
                return; \
            ptr->next->next = NULL; \
            ptr->next->var = var; \
            ptr->next->prev = ptr; \
        } \
        \
        static inline void LIST_PUSH_HEAD(name)(LIST(name) **list, type var) \
        { \
            LIST(name) *ptr = NULL; \
            \
            if (!ptr) { \
                *list = malloc(sizeof(LIST(name))); \
                if (*list) { \
                    (*list)->prev = NULL; \
                    (*list)->var = var; \
                    (*list)->next = NULL; \
                } \
                return; \
            } \
            ptr = malloc(sizeof(LIST(name))); \
            if (!(ptr)) \
                return; \
            ptr->next = *list; \
            ptr->var = var; \
            ptr->prev = NULL; \
            (*list)->prev = ptr; \
            *list = ptr; \
        }
#endif
