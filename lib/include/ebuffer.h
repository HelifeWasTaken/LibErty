/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** ebuffer
*/

#ifndef __LIBERTY__EBUFFER__H__
    #define __LIBERTY__EBUFFER__H__

    ////////////////////////////////////////////////////////////
    // Headers
    ////////////////////////////////////////////////////////////

    #include <ealloc.h>
    #include <ectypes.h>
    #include <ewrite.h>
    #include <estring.h>

    //   _____ _            __  __
    //  |  ___| |          / _|/ _|
    //  | |__ | |__  _   _| |_| |_ ___ _ __
    //  |  __|| '_ \| | | |  _|  _/ _ \ '__|
    //  | |___| |_) | |_| | | | ||  __/ |
    //  \____/|_.__/ \__,_|_| |_| \___|_|
    //

    ////////////////////////////////////////////////////////////
    ///
    /// \brief ebuff_t is a strcture that contains info in order to append
    ///
    /// \param buff_size the current allocated space for the buffer
    ///
    /// \param used the currently used space in the buffer
    ///
    /// \param buff the buffer
    ///
    /// \param can_realloc tells if the buffer can be reallocated
    ///
    ////////////////////////////////////////////////////////////

    typedef struct {
        size_t buff_size;
        size_t used;
        char *buff;
    } ebuff_t;

    ////////////////////////////////////////////////////////////
    ///
    ///  ebuff is a single buffer that is declared as a static char *
    ///  If the buffer has been allocated (used) it maps a chunck of BUFF_CHUNK
    ///  If more is required the buffer will be realloc of:
    ///  current_size + need_to_add + 16
    ///
    ///  Each time you call one of the printf functions the buffer is reset
    ///  But is not freed so the already allocated space can be reused
    ///
    ////////////////////////////////////////////////////////////

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Generates the buffer
    ///
    /// \param buffer   if buffer is NULL uses internal buffer otherwise uses
    ///                 the buffer given in parameter if internal buffer was
    ///                 chosen and is NULL allocates it of BUFF_CHUNK
    ///
    /// \return 0 if everything went well -1 if something went wrong
    ///
    ////////////////////////////////////////////////////////////

    ebuff_t *ecreate_buff(char *buffer);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Reallocates the buffer of estrlen(toadd) + BUFF_CHUNK
    ///
    /// \param buff_info  The structure with all info about the buffer
    ///
    /// \param toadd    The char * to add
    ///
    /// \return 0 if everything went well -1 if something went wrong
    ///
    ////////////////////////////////////////////////////////////

    ssize_t erealloc_buff(ebuff_t **buff_info, size_t toadd);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Return a pointer to the structure (will call erealloc_buff if
    ///        necessary)
    ///
    /// \param buff_info  The structure with all info about the buffer
    ///
    /// \param toadd    The char * to add
    ///
    /// \return 0 if everything went well -1 if something went wrong
    ///
    ////////////////////////////////////////////////////////////

    ssize_t eappend_buff_str(ebuff_t **buff_info, char *toadd);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Append an int (char promoted) to the buffer
    ///
    /// \param c to add
    ///
    /// \return 0 if everything went well -1 if something went wrong
    ///
    ////////////////////////////////////////////////////////////

    ssize_t eappend_buff_char(ebuff_t **buff_info, int c);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief resets the buffer without freeing the pointer
    ///
    /// \param buff_info  The structure with all info about the buffer
    ///
    /// \return 0 if everything went well -1 if something went wrong
    ///
    ////////////////////////////////////////////////////////////

    void ereset_buff(ebuff_t **buff_info);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief resets the buffer the string and free the pointer
    ///
    /// \param buff_info  The structure with all info about the buffer
    ///
    /// \return 0 if everything went well -1 if something went wrong
    ///
    ////////////////////////////////////////////////////////////

    void efree_buff(ebuff_t **buff_info);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief flush the buffer to a file descritor
    ///
    /// \param buff_info  The structure with all info about the buffer
    ///
    /// \param fd file descritor to write in
    ///
    /// \return size flushed if everything went well -1 if something went wrong
    ///
    ////////////////////////////////////////////////////////////

    ssize_t eflush_buff(ebuff_t **buff, int fd);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief flush the buffer to a file stream
    ///
    /// \param buff_info  The structure with all info about the buffer
    ///
    /// \param stream file steam to write in
    ///
    /// \return size flushed if everything went well -1 if something went wrong
    ///
    ////////////////////////////////////////////////////////////

    ssize_t efflush_buff(ebuff_t **buff, FILE *stream);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief estrdup the buffer
    ///
    /// \param buff_info  The structure with all info about the buffer
    ///
    /// \return the buffer (might return Null if the buffer is empty
    ///                     or allocation failed)
    ///
    ////////////////////////////////////////////////////////////

    char *edup_buff(ebuff_t *buff_info);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief returns a pointer to the buffer
    ///
    /// \param buff_info  The structure with all info about the buffer
    ///
    /// \return buffer pointer (null if empty)
    ///
    ////////////////////////////////////////////////////////////

    char *eget_buffstr(ebuff_t *buff_info);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief returns how much is currently used in the buffer
    ///
    /// \param buff_info  The structure with all info about the buffer
    ///
    /// \return buffer used space
    ///
    ////////////////////////////////////////////////////////////

    size_t eget_buffused(ebuff_t *buff_info);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief crrent buffer allocated space (usable space)
    ///
    /// \param buff_info  The structure with all info about the buffer
    ///
    /// \return buffer allocated space
    ///
    ////////////////////////////////////////////////////////////

    size_t eget_buffusable(ebuff_t *buff_info);

    #define EBUFF_PRINTF_CHUNK

    ////////////////////////////////////////////////////////////
    ///
    ///  Constant to determine the size of a chunk
    ///
    ////////////////////////////////////////////////////////////

    #ifdef EBUFF_PRINTF_CHUNK
        #define BUFF_CHUNK              1024
    #else
        #define BUFF_CHUNK              16
    #endif

#endif /* !__LIBERTY__EBUFFER__H__ */