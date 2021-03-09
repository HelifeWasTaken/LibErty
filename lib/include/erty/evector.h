/*
** EPITECH PROJECT, 2021
** LibErty
** File description:
** evector
*/

#ifndef __LIBERTY__EVECTOR__H__
#define __LIBERTY__EVECTOR__H__

#define VECTOR(name) struct liberty_templated_vector_##name

#define VECTOR_PUSH_BACK_NAME(name) \
    liberty_templated_vector_push_back_##name

#define VECTOR_PUSH_BACK_DECLARATION(name) \
    ssize_t VECTOR_PUSH_BACK_NAME(name)

#define VECTOR_CREATE_NAME(name) \
    liberty_templated_vector_create_##name

#define VECTOR_CREATE_DECLARATION(name) \
    VECTOR(name) VECTOR_CREATE_NAME(name)

#define VECTOR_CREATE(name, free_fun) \
    liberty_templated_vector_create_##name(free_fun)

#define INIT_VECTOR(name, dataname, type, typename) \
    typedef VECTOR(name) { \
        type *dataname; \
        size_t size; \
        ssize_t (*push_back)(VECTOR(name) *, type *); \
        void (*free)(VECTOR(name) *); \
    } typename; \
    \
    VECTOR_PUSH_BACK_DECLARATION(name)(VECTOR(name) *this, type *add) \
    { \
        type *tmp = ecalloc(sizeof(type), (this->size + 1)); \
        \
        if (tmp == NULL) { \
            FREE(this->dataname); \
            return (-1); \
        } else { \
            for (size_t i = 0; i < this->size; i++) \
                ememcpy(&tmp[i], &this->dataname[i], sizeof(type)); \
            ememcpy(&tmp[this->size], add, sizeof(type)); \
            FREE(this->dataname); \
            this->dataname = tmp; \
            this->size++; \
        } \
        return (this->size); \
    } \
    \
    VECTOR_CREATE_DECLARATION(name)(void (*free_fun)(VECTOR(name) *)) \
    { \
        VECTOR(name) this = {0}; \
        \
        this.push_back = VECTOR_PUSH_BACK_NAME(name); \
        this.free = free_fun; \
        this.size = 0; \
        this.dataname = NULL; \
        return (this); \
    }

#endif
