/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** linked_split
*/

#ifndef __LIBERTY__LINKED__SPLIT__H__
    #define __LIBERTY__LINKED__SPLIT__H__

    ////////////////////////////////////////////////////////////
    // Headers
    ////////////////////////////////////////////////////////////

    #include <erty/ealloc.h>
    #include <erty/ectypes.h>

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Structure that has linked list info
    ///
    /// \param str string of one split
    ///
    /// \param next pointer to next split
    ///
    ////////////////////////////////////////////////////////////

    typedef struct linked_esplit_st {
        cstr_t str;
        struct linked_esplit_st *next;
    } linked_esplit_t;

    ////////////////////////////////////////////////////////////
    ///
    /// \brief transforming a string to a linked which is splitted by
    ///        the delim string
    ///
    /// \param buf string to parse
    ///
    /// \param delim string that is used to delimatate
    ///
    /// \return Returns an allocated linked list (linked_esplit_t)
    ///         from the string splitted
    ///         Returns a pointer to null if the allocation failed
    ///
    ////////////////////////////////////////////////////////////

    linked_esplit_t *linked_esplit(cstr_t str, cstr_t sep);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief free the linked list linked_esplit_t
    ///
    /// \param head list to free
    ///
    ////////////////////////////////////////////////////////////

    void free_linked_esplit(linked_esplit_t *head);

#endif /* !__LIBERTY__LINKED__SPLIT__H__ */
