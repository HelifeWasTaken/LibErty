/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** efile
*/

#ifndef __LIBERTY__EFILE__H__
    #define __LIBERTY__EFILE__H__

    ////////////////////////////////////////////////////////////
    // Headers
    ////////////////////////////////////////////////////////////

    #include <efd.h>

    //  ______           _
    //  | ___ \         (_)
    //  | |_/ / __ _ ___ _  ___
    //  | ___ \/ _` / __| |/ __|
    //  | |_/ / (_| \__ \ | (__
    //  \____/ \__,_|___/_|\___|
    //

    ////////////////////////////////////////////////////////////
    ///
    /// \brief prints a char in a given stream file
    ///
    /// \param stream   stream file to write in
    /// \param c    char to print
    ///
    /// \return Returns 1 in case of success -1 if write failed
    ///
    ////////////////////////////////////////////////////////////

    ssize_t efputchar(FILE *stream, int c);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief prints a string with a line break in a given file stream
    ///
    /// \param stream file stream to write in
    /// \param str  string to print
    ///
    /// \return Returns the size of the string + 2
    ///         in case of success or -1 if write failed
    ///
    ////////////////////////////////////////////////////////////

    ssize_t efputs(FILE *stream, char const *str);

    //   _   _                 _
    //  | \ | |               | |
    //  |  \| |_   _ _ __ ___ | |__   ___ _ __ ___
    //  | . ` | | | | '_ ` _ \| '_ \ / _ \ '__/ __|
    //  | |\  | |_| | | | | | | |_) |  __/ |  \__ |
    //  \_| \_/\__,_|_| |_| |_|_.__/ \___|_|  |___/
    //

    ////////////////////////////////////////////////////////////
    ///
    /// \brief prints a round number in a given file stream
    ///
    /// \param stream file stream to write in
    /// \param nb number to print
    ///
    /// \return Returns the size of the number in case of success or
    ///         -1 if write failed
    ///
    ////////////////////////////////////////////////////////////

    size_t efputnbr(FILE *stream, int64_t nb);
    size_t efuputnbr(FILE *stream, uint64_t nb);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief prints a floating in a given file stream with a floating
    ///        precision
    ///
    /// \param stream   file stream to write in
    /// \param nb  number to print
    /// \param precision precision of the floating point
    ///
    /// \return Returns the size of the number (the dot is counted)
    ///         in case of success or -1 if write failed
    ///
    ////////////////////////////////////////////////////////////

    size_t efputfloat(FILE *stream, double nb, uint8_t precision);

#endif /* !__LIBERTY__EFILE__H__ */
