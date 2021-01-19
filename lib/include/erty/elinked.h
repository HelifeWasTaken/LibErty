/*
** EPITECH PROJECT, 2021
** LibErty
** File description:
** elinked
*/

#ifndef __LIBERTY__LINKED__H__
    #define __LIBERTY__LINKED__H__

    struct elinked_container {
        void *data;
        struct elinked_container *next;
        struct elinked_container *prev;
    };

    typedef struct elinked {
        struct elinked_container *head;
        struct elinked_container *tail;
    } elinked_t;

#endif /* !__LIBERTY__LINKED__H__ */
