/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** estdlib
*/

#ifndef __LIBERTY__ESTDLIB__H__
    #define __LIBERTY__ESTDLIB__H__

    ////////////////////////////////////////////////////////////
    // Headers
    ////////////////////////////////////////////////////////////

    #include <ectypes.h>
    #include <ebitwise.h>
    #include <eoverflow.h>
    #include <ealloc.h>

    //   _   _                 _
    //  | \ | |               | |
    //  |  \| |_   _ _ __ ___ | |__   ___ _ __ ___
    //  | . ` | | | | '_ ` _ \| '_ \ / _ \ '__/ __|
    //  | |\  | |_| | | | | | | |_) |  __/ |  \__ |
    //  \_| \_/\__,_|_| |_| |_|_.__/ \___|_|  |___/
    //

    ////////////////////////////////////////////////////////////
    ///
    /// \brief returns an int from a string
    ///
    /// \param str string containing the number
    ///
    /// \return Returns the number value
    ///        if the specified string does not have a number at start or the
    ///        number found overflows (signed int) returns 0
    ///
    ////////////////////////////////////////////////////////////

    int eatoi(char const *str);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief returns a long from a string
    ///
    /// \param str string containing the number
    ///
    /// \return Returns the number value
    ///        if the specified string does not have a number at start or the
    ///        number found overflows (signed long) returns 0
    ///
    ////////////////////////////////////////////////////////////

    long eatol(char const *str);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief returns a long long from a string
    ///
    /// \param str string containing the number
    ///
    /// \return Returns the number value
    ///        if the specified string does not have a number at start or the
    ///        number found overflows (signed long long) returns 0
    ///
    ////////////////////////////////////////////////////////////

    long long eatoll(char const *str);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief returns an unsigned int from a string
    ///
    /// \param str string containing the number
    ///
    /// \return Returns the number value
    ///        if the specified string does not have a number at start or the
    ///        number found overflows (unsigned int) returns 0
    ///
    ////////////////////////////////////////////////////////////

    unsigned int euatoi(char const *str);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief returns an unsigned long from a string
    ///
    /// \param str string containing the number
    ///
    /// \return Returns the number value
    ///        if the specified string does not have a number at start or the
    ///        number found overflows (unsigned long) returns 0
    ///
    ////////////////////////////////////////////////////////////

    unsigned long euatol(char const *str);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief returns an unsigned long long from a string
    ///
    /// \param str string containing the number
    ///
    /// \return Returns the number value
    ///        if the specified string does not have a number at start or the
    ///        number found overflows (unsigned long long) returns 0
    ///
    ////////////////////////////////////////////////////////////

    unsigned long long euatoll(char const *str);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief returns a string from an int64_t with a given base
    ///        string should be allocated enough
    ///
    /// \param nb value to transform
    ///
    /// \param tofill string to fill
    ///
    /// \param base base to write
    ///
    /// \return Returns a string converted to the given base with terminating 0
    ///
    ////////////////////////////////////////////////////////////

    char *eitoa(int64_t nb, char *tofill, char const *base);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief returns a string from a int64_t with a given base
    ///        string is allocated automatically
    ///
    /// \param nb value to transform
    ///
    /// \param base base to write
    ///
    /// \return Returns a string converted to the given base with terminating 0
    ///
    ////////////////////////////////////////////////////////////

    char *eaitoa(int64_t nb, char const *base);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief returns a string from a uint64_t with a given base
    ///        string should be allocated enough
    ///
    /// \param nb value to transform
    ///
    /// \param tofill string to fill
    ///
    /// \param base base to write
    ///
    /// \return Returns a string converted to the given base with terminating 0
    ///
    ////////////////////////////////////////////////////////////

    char *euitoa(uint64_t nb, char *tofill, char const *base);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief returns a string from a int64_t with a given base
    ///        string is allocated automatically
    ///
    /// \param nb value to transform
    ///
    /// \param base base to write
    ///
    /// \return Returns a string converted to the given base with terminating 0
    ///
    ////////////////////////////////////////////////////////////

    char *eauitoa(uint64_t nb, char const *base);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief returns a long from a string a move a pointer the end of the int
    ///
    /// \param str where to get the string
    ///
    /// \param endptr where the numbers ends
    ///
    /// \param base base to write
    ///
    /// \return Returns a long converted to the given base value
    ///     (returns 0 in case of overflow or no number
    ///      found with the given base)
    ///
    ////////////////////////////////////////////////////////////

    long estrtol(char *str, char **endptr, int base);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief returns a long long from a string a move a pointer the
    ///        end of the int
    ///
    /// \param str where to get the string
    ///
    /// \param endptr where the numbers ends
    ///
    /// \param base base to write
    ///
    /// \return Returns a long long converted to the given base value
    ///     (returns 0 in case of overflow or no number
    ///      found with the given base)
    ///
    ////////////////////////////////////////////////////////////

    long long estrtoll(char *str, char **endptr, int base);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief returns a string from a double with a given base and
    ///        a given precision the string must be allocated with enough
    ///        space to contain the number the . and the precision
    ///
    /// \param nb value to transform
    ///
    /// \param precision precision size
    ///
    /// \param tofill string to fill
    ///
    /// \param base base to write
    ///
    /// \return Returns a string converted to the given base with terminating 0
    ///
    ////////////////////////////////////////////////////////////

    char *eftoa(double nb, uint8_t precision, char *tofill, char const *base);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief returns a string from a double with a given base and
    ///        a given precision the string whill be allocated automatically
    ///
    /// \param nb value to transform
    ///
    /// \param precision precision size
    ///
    /// \param base base to write
    ///
    /// \return Returns a string converted to the given base with terminating 0
    ///
    ////////////////////////////////////////////////////////////

    char *eaftoa(double nb, uint8_t precision, char const *base);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Get the decimal of double in a rounded int
    ///        with a certain precision
    ///
    /// \param nb Original value
    ///
    /// \param precision how many digits after the decimal point
    ///
    /// \return Returns the decimals of a double in a rounded value
    ///
    ////////////////////////////////////////////////////////////

    uint64_t eget_float_decimals(double nb, uint8_t precision);

    //  ______ _
    //  | ___ \ |
    //  | |_/ / |_ _ __
    //  |  __/| __| '__|
    //  | |   | |_| |
    //  \_|    \__|_|
    //

    ////////////////////////////////////////////////////////////
    ///
    /// \brief swap two integers
    ///
    /// \param a  value to swap with b
    ///
    /// \param b  value to swap with a
    ///
    ////////////////////////////////////////////////////////////

    void eswap(int *a, int *b);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief swap two pointers
    ///
    /// \param a  pointer to swap with b
    ///
    /// \param b  pointer to swap with a
    ///
    /// Usage:
    /// casting may be necessary in the case of two strings for example:
    /// eptrswap((void **)&str, (void **)&str2);
    ///
    ////////////////////////////////////////////////////////////

    void eptrswap(void **a, void **b);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Prints the pointer address in the format :
    ///        eprintf("0x%x", ptr);
    ///
    /// \return (2 + ptr number size) -> undefined in case of failure
    ///
    ////////////////////////////////////////////////////////////

    size_t eshow_ptr(unsigned long long ptr);

    //  ___  ____
    //  |  \/  (_)
    //  | .  . |_ ___  ___
    //  | |\/| | / __|/ __|
    //  | |  | | \__ \ (__
    //  \_|  |_/_|___/\___|
    //

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Is used in eatoi eatoll estrtoll etc.. to get if this is a
    ///        negative number this is a macro look alike and should not
    ///        be used outside of thoses functions
    ///
    /// \param str string containing the number
    ///
    /// \param index index to move if necessary
    ///
    /// \return -1 or 1 for the sign choice
    ///
    ////////////////////////////////////////////////////////////

    int eget_start_sign(char const *str, size_t *index);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Is used in estrol and estrtoll etc.. to get if this is a
    ///        valid char value this is a macro look alike and should not
    ///        be used outside of thoses functions
    ///
    /// \param c char to verify
    ///
    /// \param base base to write in
    ///
    /// \param indexbase index to move
    ///
    /// \return true or false
    ///
    ////////////////////////////////////////////////////////////

    bool eis_valid_strtoll(int c, int base, uint8_t *indexbase);

    ////////////////////////////////////////////////////////////
    ///
    ///  Get the size of an array
    ///
    ////////////////////////////////////////////////////////////

    #define ARRAY_SIZE(x)   sizeof(x) / sizeof(*x)

    ////////////////////////////////////////////////////////////
    ///
    ///  Get absolute value of a number
    ///
    ////////////////////////////////////////////////////////////

    #define ABS(x)          (x > 0) ? x : -x

    ////////////////////////////////////////////////////////////
    ///
    ///  Get maximum value of a number
    ///
    ////////////////////////////////////////////////////////////

    #define MAX(x, y)       (x > y) ? x : y

    ////////////////////////////////////////////////////////////
    ///
    ///  Get minimum value of a number
    ///
    ////////////////////////////////////////////////////////////

    #define MIN(x, y)       (x < y) ? x : y

    ////////////////////////////////////////////////////////////
    ///
    ///  Get the lenght of a variable
    ///
    ////////////////////////////////////////////////////////////

    #define len(x) _Generic((x), \
        char *: estrlen, \
        char const *: estrlen, \
        char **: array_len, \
        char const **: array_len, \
        int **: array_len, \
        int const **: array_len, \
        int: enblen, \
        unsigned int: enblen, \
        long: enblen, \
        unsigned long: enblen, \
        long long: enblen, \
        unsigned long long: enblen) \
        (x)

#endif /* !__LIBERTY__ESTDLIB__H__ */