/*
** EPITECH PROJECT, 2021
** LibErty
** File description:
** etemplates_concat
*/

#ifndef __ETEMPLATES__CONCAT__DELCARATIONS__H__
    #define __ETEMPLATES__CONCAT__DELCARATIONS__H__

    #include <etemplates.h>

    #define TEMAPLATES_CONCAT_DECLARATION(name) \
        static inline void LIST_CONCAT(name)(LIST(name) **list, \
            LIST(name) **list2) \
        { \
            LIST(name) *ptr = *list; \
            \
            if (!ptr || !(*list2)) \
                return; \
            for (; ptr->next; ptr = ptr->next); \
            ptr->next = *list2; \
        }

#endif
