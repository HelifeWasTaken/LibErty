/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** efd
*/

#ifndef __LIBERTY__EFD__H__
    #define __LIBERTY__EFD__H__

    ////////////////////////////////////////////////////////////
    // Headers
    ////////////////////////////////////////////////////////////

    #include <ectypes.h>
    #include <ewrite.h>
    #include <ecolors.h>

    //  ______           _
    //  | ___ \         (_)
    //  | |_/ / __ _ ___ _  ___
    //  | ___ \/ _` / __| |/ __|
    //  | |_/ / (_| \__ \ | (__
    //  \____/ \__,_|___/_|\___|
    //

    ////////////////////////////////////////////////////////////
    ///
    /// \brief prints a char in a given file descriptor
    ///
    /// \param fd   file descriptor to write in
    /// \param c    char to print
    ///
    /// \return Returns 1 in case of success -1 if write failed
    ///
    ////////////////////////////////////////////////////////////

    ssize_t edputchar(int fd, int c);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief prints a string with a line break in a given file descriptor
    ///
    /// \param fd   file descriptor to write in
    /// \param str  string to print
    ///
    /// \return Returns the size of the string + 2
    ///         in case of success or -1 if write failed
    ///
    ////////////////////////////////////////////////////////////

    ssize_t edputs(int fd, char const *str);

    //   _   _                 _
    //  | \ | |               | |
    //  |  \| |_   _ _ __ ___ | |__   ___ _ __ ___
    //  | . ` | | | | '_ ` _ \| '_ \ / _ \ '__/ __|
    //  | |\  | |_| | | | | | | |_) |  __/ |  \__ |
    //  \_| \_/\__,_|_| |_| |_|_.__/ \___|_|  |___/
    //

    ////////////////////////////////////////////////////////////
    ///
    /// \brief prints a round number in a given file descriptor
    ///
    /// \param fd   file descriptor to write in
    /// \param nb   number to print
    ///
    /// \return Returns the size of the number in case of success or
    ///         -1 if write failed
    ///
    ////////////////////////////////////////////////////////////

    size_t edputnbr(int fd, int64_t nb);
    size_t eduputnbr(int fd, uint64_t nb);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief prints a floating in a given file descriptor with a floating
    ///        precision
    ///
    /// \param fd   file descriptor to write in
    /// \param nb  number to print
    /// \param precision precision of the floating point
    ///
    /// \return Returns the size of the number (the dot is counted)
    ///         in case of success or -1 if write failed
    ///
    ////////////////////////////////////////////////////////////

    size_t edputfloat(int fd, double nb, uint8_t precision);

#endif /* !__LIBERTY__EFD__H__ */
