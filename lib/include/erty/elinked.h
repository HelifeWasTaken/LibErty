/*
** EPITECH PROJECT, 2021
** LibErty
** File description:
** elinked
*/

#ifndef __LIBERTY__LINKED__H__
    #define __LIBERTY__LINKED__H__

    #include <erty/ealloc.h>
    #include <erty/ectypes.h>

    #define LIST(name) struct liberty_templated_list_##name

    // Node creation declaration
    #define CREATE_NODE_DECLARATION(name) \
        liberty_templated_list_create_node_##name
    #define CREATE_NODE(name, data) \
        CREATE_NODE_DECLARATION(name)(data)

    // Head append

    #define APPEND_TO_HEAD_DECLARATION(name) \
        liberty_templated_list_append_head_##name
    #define APPEND_TO_HEAD(name, list, data) \
        APPEND_TO_HEAD_DECLARATION(name)(list, data)

    // Tail append

    #define APPEND_TO_TAIL_DECLARATION(name) \
        liberty_templated_list_append_tail_##name
    #define APPEND_TO_TAIL(name, list, data) \
        APPEND_TO_TAIL_DECLARATION(name)(list, data)

    // Index Append

    #define APPEND_AT_INDEX_DECLARATION(name) \
        liberty_templated_list_append_index_##name
    #define APPEND_AT_INDEX(name, list, data, pos) \
        APPEND_AT_INDEX_DECLARATION(name)(list, data, pos)

    #define APPEND_AT_INDEX_SUB_FUNCTION_DECLARATION(name) \
        liberty_templated_list_append_index_subfunc_##name
    #define APPEND_AT_INDEX_SUB_FUNCTION(name, list, data) \
        APPEND_AT_INDEX_SUB_FUNCTION_DECLARATION(name)(list, data)

    // Tail delete

    #define REMOVE_TO_TAIL_DECLARATION(name) \
        liberty_templated_list_delete_tail_##name
    #define REMOVE_TO_TAIL(name, list) \
        REMOVE_TO_TAIL_DECLARATION(name)(list)

    // Head delete

    #define REMOVE_TO_HEAD_DECLARATION(name) \
        liberty_templated_list_delete_head_##name
    #define REMOVE_TO_HEAD(name, list) \
        REMOVE_TO_HEAD_DECLARATION(name)(list)

    // Index delete

    #define REMOVE_AT_INDEX_DECLARATION(name) \
        liberty_templated_list_delete_at_index_##name
    #define REMOVE_AT_INDEX(name, list, index) \
        REMOVE_AT_INDEX_DECLARATION(name)

    // Count nodes

    #define COUNT_NODE_LIST_DECLARATION(name) \
        liberty_templated_list_count_node_##name
    #define COUNT_NODE_LIST(name, list) \
        COUNT_NODE_LIST_DECLARATION(name)(list)

    // Reverse list

    #define REVERSE_LIST_DECLARATION(name) \
        liberty_templated_list_reverse_list_##name
    #define REVERSE_LIST(name, list) \
        REVERSE_LIST_DECLARATION(name)(list)

    // Functions

    #define INIT_LIST(name, type) \
        LIST(name) { \
            type data; \
            LIST(name) *prev; \
            LIST(name) *next; \
        }; \
        \
        static inline LIST(name) *CREATE_NODE_DECLARATION(name)(type data) \
        { \
            LIST(name) *new_node = ecalloc(sizeof(type), 1); \
            \
            if (new_node) \
                new_node->data = data; \
            return (new_node); \
        } \
        \
        static inline void \
            APPEND_TO_HEAD_DECLARATION(name)(LIST(name) **head, type data) \
        { \
            LIST(name) *new_node =  CREATE_NODE(name, data); \
            \
            if (!new_node) \
                return; \
            new_node->next = *head; \
            if (*head) \
                (*head)->prev = new_node; \
            *head = new_node; \
        } \
        \
        static inline void \
            APPEND_TO_TAIL_DECLARATION(name)(LIST(name) **head, type data) \
        { \
            LIST(name) *mv_ptr = *head; \
            \
            if (*head == NULL) { \
                APPEND_TO_HEAD(name, head, data); \
                return; \
            } \
            for (; mv_ptr->next != NULL; mv_ptr = mv_ptr->next); \
            mv_ptr->next = CREATE_NODE(name, data); \
            mv_ptr->next->prev = mv_ptr; \
        } \
        \
        static inline void \
            APPEND_AT_INDEX_SUB_FUNCTION_DECLARATION(name)( \
                    LIST(name) *head, type data) \
        { \
            LIST(name) *new_node = CREATE_NODE(name, data); \
            LIST(name) *next = head->next; \
            \
            new_node->next = next; \
            head->next = new_node; \
        } \
        \
        static inline void APPEND_AT_INDEX_DECLARATION(name)( \
                LIST(name) **head, type data, size_t index) \
        { \
            LIST(name) *mvptr = *head; \
            size_t i = 0; \
            \
            if (!mvptr) \
                return; \
            if (!index) { \
                APPEND_TO_HEAD(name, head, data); \
                return;  \
            } \
            for (; mvptr->next && i < index - 1; i++); \
                mvptr = mvptr->next; \
            if (!mvptr->next) { \
                efputs(stderr, "Reached end before index - TAIL - NULL"); \
                return; \
            } \
            APPEND_AT_INDEX_SUB_FUNCTION(name, mvptr, data); \
        } \
        \
        static inline void REMOVE_TO_TAIL_DECLARATION(name)(LIST(name) **head) \
        { \
            LIST(name) *headptr = *head; \
            \
            if (!headptr) \
                return; \
            for (; headptr->next; headptr = headptr->next); \
            headptr->prev->next = NULL; \
            free(headptr); \
        } \
        \
        static inline void REMOVE_TO_HEAD_DECLARATION(name)(LIST(name) **head) \
        { \
            LIST(name) *tmp = *head; \
            \
            if (!tmp) \
                return; \
            *head = (*head)->next; \
            free(tmp); \
        } \
        \
        static inline void REMOVE_AT_INDEX_DECLARATION(name)( \
                LIST(name) **head, size_t index) \
        { \
            LIST(name) *headptr = *head; \
            \
            for (size_t i = 0; i < index && headptr; headptr = headptr->next) \
                i++; \
            if (!headptr) \
                return; \
            if (!headptr->prev) { \
                REMOVE_TO_HEAD(name, head); \
                return; \
            } \
            if (!headptr->next) { \
                headptr->prev->next = NULL; \
                free(headptr); \
                return; \
            } \
            headptr->prev->next = headptr->next; \
            headptr->next->prev = headptr->prev; \
            free(headptr); \
        } \
        \
        static inline size_t COUNT_NODE_LIST_DECLARATION(name)( \
                LIST(name) *head) \
        { \
            size_t i = 0; \
            \
            for (; head; head = head->next) \
                i++; \
            return (i); \
        } \
        \
        static inline void REVERSE_LIST_DECLARATION(name)(LIST(name) **head) \
        { \
            LIST(name) *tmp = NULL; \
            LIST(name) *current = *head; \
            \
            while (current) { \
                tmp = current->prev; \
                current->prev = current->next; \
                current->next = tmp; \
                current = current->prev; \
            } \
            if (tmp) \
                *head = tmp->prev; \
        }

#endif /* !__LIBERTY__LINKED__H__ */
