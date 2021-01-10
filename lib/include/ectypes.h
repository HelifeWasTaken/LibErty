/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** ctypes
*/

#ifndef __LIBERTY__CTYPES__H__
    #define __LIBERTY__CTYPES__H__

    ////////////////////////////////////////////////////////////
    // Headers
    ////////////////////////////////////////////////////////////

    #include <stdint.h>
    #include <stddef.h>
    #include <stdbool.h>
    #include <sys/types.h>
    #include <limits.h>

    //   _____
    //  |_   _|
    //    | |_   _ _ __   ___  ___
    //    | | | | | '_ \ / _ \/ __|
    //    | | |_| | |_) |  __/\__ |
    //    \_/\__, | .__/ \___||___/
    //        __/ | |
    //       |___/|_|

    ////////////////////////////////////////////////////////////
    ///
    /// \brief typedefs for shortening code
    ///
    ////////////////////////////////////////////////////////////

    typedef int fd_t;
    typedef uint8_t u8_t;
    typedef uint16_t u16_t;
    typedef uint32_t u32_t;
    typedef uint64_t u64_t;
    typedef uintptr_t usize_t;
    typedef int8_t i8_t;
    typedef int16_t i16_t;
    typedef int32_t i32_t;
    typedef int64_t i64_t;
    typedef intptr_t isize_t;
    typedef float f32_t;
    typedef double f64_t;

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Check if a char is alpha
    ///
    /// \param c char (promoted to int) to check
    ///
    /// \return true or false
    ///
    ////////////////////////////////////////////////////////////

    bool eis_alpha(int c);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief check if a char is alpha (lowercase)
    ///
    /// \param c char (promoted to int) to check
    ///
    /// \return true or false
    ///
    ////////////////////////////////////////////////////////////

    bool eis_lower(int c);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief check if a char is alpha (uppercase)
    ///
    /// \param c char (promoted to int) to check
    ///
    /// \return true or false
    ///
    ////////////////////////////////////////////////////////////

    bool eis_upper(int c);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief check if a char is a number
    ///
    /// \param c char (promoted to int) to check
    ///
    /// \return true or false
    ///
    ////////////////////////////////////////////////////////////

    bool eis_num(int c);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief check if a char is a number or is alpha
    ///
    /// \param c char (promoted to int) to check
    ///
    /// \return true or false
    ///
    ////////////////////////////////////////////////////////////

    bool eis_alphanum(int c);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief check if a char is a space
    ///
    /// \param c char (promoted to int) to check
    ///
    /// \return true or false
    ///
    ////////////////////////////////////////////////////////////

    bool eis_space(int c);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief check if a char is printable
    ///
    /// \param c char (promoted to int) to check
    ///
    /// \return true or false
    ///
    ////////////////////////////////////////////////////////////

    bool eis_printable(int c);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief check if a char is a punctuation
    ///
    /// \param c char (promoted to int) to check
    ///
    /// \return true or false
    ///
    ////////////////////////////////////////////////////////////

    bool eis_punct(int c);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief if is uppercase char return the same char to lower
    ///
    /// \param c char (promoted to int) to check
    ///
    /// \return char c or char c to lower
    ///
    ////////////////////////////////////////////////////////////

    int eto_lower(int c);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief if is lowercase char return the same char to upper
    ///
    /// \param c char (promoted to int) to check
    ///
    /// \return c or c to lower
    ///
    ////////////////////////////////////////////////////////////

    int eto_upper(int c);

    //  ___  ____
    //  |  \/  (_)
    //  | .  . |_ ___  ___
    //  | |\/| | / __|/ __|
    //  | |  | | \__ \ (__
    //  \_|  |_/_|___/\___|
    //

    #undef  EXIT_SUCCESS
    #undef  EXIT_FAILURE
    #define EXIT_SUCCESS         0
    #define EXIT_FAILURE        84
    #define UNUSED              __attribute__((unused))

#endif /* !__LIBERTY__CTYPES__H__ */
