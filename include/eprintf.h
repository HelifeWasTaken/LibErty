/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** eprintf
*/

#ifndef __LIBERTY__EPRINTF__H__
    #define __LIBERTY__EPRINTF__H__

    ////////////////////////////////////////////////////////////
    // Headers
    ////////////////////////////////////////////////////////////

    #include <stdarg.h>
    #include <ebuffer.h>
    #include <ectypes.h>
    #include <ewchar.h>
    #include <inttypes.h>

    ////////////////////////////////////////////////////////////
    // Structures
    ////////////////////////////////////////////////////////////

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Enum for each type of len modifiers
    ///
    ////////////////////////////////////////////////////////////

    enum {
        EPRINTF_MOD_CHAR,
        EPRINTF_MOD_SHORT,
        EPRINTF_MOD_LONG,
        EPRINTF_MOD_LONG_LONG,
        EPRINTF_MOD_LONG_DOUBLE,
        EPRINTF_MOD_INTMAX_t,
        EPRINTF_MOD_SIZE_T,
        EPRINTF_MOD_PTRDIFF_T,
        EPRINTF_MOD_DEFAULT
    };

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Union having each type of variables that eprintf uses
    ///
    ////////////////////////////////////////////////////////////

    union eprintf_arg {
        signed int i;
        unsigned int ui;
        signed char chr;
        unsigned char uchr;
        signed short shrt;
        unsigned short ushrt;
        signed long lng;
        unsigned long ulng;
        signed long long llng;
        unsigned long long ullng;
        double dble;
        wchar_t wchr;
        char *str;
        wchar_t *wstr;
        intmax_t imax;
        uintmax_t uimax;
        size_t st;
        ptrdiff_t ptrdiff;
        uintptr_t ptr;
    };

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Structure to keep the padding info
    ///
    /// \param size how much should be padded
    ///
    /// \param left if it should be on the left
    ///
    /// \param right if it should be on the right
    ///
    ////////////////////////////////////////////////////////////

    struct eprintf_padding {
        int size;
        bool left;
        bool right;
    };

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Structure to keep the padding info and type of padding
    ///
    /// \param precision precision chosen (is -1 when is default)
    ///
    /// \param pad reference to padding info struct
    ///
    /// \param hashtag has hashtag flag
    ///
    /// \param zero has zero flag
    ///
    /// \param minus has minus flag
    ///
    /// \param space has space flag
    ///
    /// \param plus has plus flag
    ///
    ////////////////////////////////////////////////////////////

    typedef struct eprintf_flag_modifier {
        int precision;
        struct eprintf_padding pad;
        bool hashtag;
        bool zero;
        bool minus;
        bool space;
        bool plus;
    } eprintf_modflag_t;

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Structure to keep the global tranformation info
    ///
    /// \param modflag reference to flag modifiers structure
    ///
    /// \param len  reference to the len modifier type
    ///
    /// \param offset offset for parsing
    ///
    ////////////////////////////////////////////////////////////

    typedef struct eprintf_modif_st {
        eprintf_modflag_t modflag;
        u_int8_t len;
        size_t offset;
    } eprintf_mod_t;

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Structure to chose a function pointer
    ///
    /// \param flag flag type 1
    ///
    /// \param flag flag type 2
    ///
    /// \param fptr_local function pointer associated
    ///
    ////////////////////////////////////////////////////////////

    struct eprintf_flag_st {
        char flag;
        char flag2;
        void (*fptr_local)(va_list *, eprintf_mod_t *);
    };

    #ifdef __GNUC__
        #define CHECK_EPRINTF_FORMAT(variadic, format_str) \
            __attribute__((format(printf, variadic, format_str)))
        #define CHECK_FORMAT_WITH_GNU_C
    #endif

    #ifdef __DOXY
        #undef CHECK_FORMAT_WITH_GNU_C
        #undef CHECK_EPRINTF_FORMAT
    #endif

    #define EPRINTF_SUCCESS         (signed int)0
    #define EPRINTF_FAILURE         (signed int)-1
    #define EPRINTF_ERROR_FORMAT    (signed int)-2

    //   _____ _                  _               _
    //  /  ___| |                | |             | |
    //  \ `--.| |_ __ _ _ __   __| | __ _ _ __ __| |
    //   `--. \ __/ _` | '_ \ / _` |/ _` | '__/ _` |
    //  /\__/ / || (_| | | | | (_| | (_| | | | (_| |
    //  \____/ \__\__,_|_| |_|\__,_|\__,_|_|  \__,_|
    //

    ////////////////////////////////////////////////////////////
    ///
    /// \brief eprintf function functions nearly the same as printf prints the
    ///        formatted string to stdout
    ///
    /// \param format format of the output
    ///
    /// \param ... variadic list
    ///
    /// \return size of the formatted output (returns -1 in case of error)
    ///
    ////////////////////////////////////////////////////////////

    #ifdef CHECK_FORMAT_WITH_GNU_C
        int eprintf(char const *format, ...)
            CHECK_EPRINTF_FORMAT(1, 2);
    #else
        int eprintf(char const *format, ...);
    #endif

    ////////////////////////////////////////////////////////////
    ///
    /// \brief edprintf function functions nearly the same as dprintf prints the
    ///        formatted string to the specified fd
    ///        if the fd is between 0 and 2 chose to redirect it to file stream
    ///        stdin stdout or stderr
    ///
    /// \param fd file descriptor to write in
    ///
    /// \param format format of the output
    ///
    /// \param ... variadic list
    ///
    /// \return size of the formatted output (returns -1 in case of error)
    ///
    ////////////////////////////////////////////////////////////

    #ifdef CHECK_FORMAT_WITH_GNU_C
        int edprintf(int fd, char const *format, ...)
            CHECK_EPRINTF_FORMAT(2, 3);
    #else
        int edprintf(int fd, char const *format, ...);
    #endif

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Own implementation of easprintf (does not work the same way)
    ///        if the given buffer is non NULL asprintf will free it before
    ///        setting everything in the new one
    ///
    /// \param buff buffer to write in
    ///
    /// \param format format of the output
    ///
    /// \param ... variadic list
    ///
    /// \return size of the formatted output (returns -1 in case of error)
    ///
    ////////////////////////////////////////////////////////////

    #ifdef CHECK_FORMAT_WITH_GNU_C
        int easprintf(char **buff, char const *format, ...)
            CHECK_EPRINTF_FORMAT(2, 3);
    #else
        int easprintf(char **buff, char const *format, ...);
    #endif

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Is a an alias to edprintf writes directly on stream.__fileno
    ///
    /// \param stream file stream to write in
    ///
    /// \param format format of the output
    ///
    /// \param ... variadic list
    ///
    /// \return size of the formatted output (returns -1 in case of error)
    ///
    ////////////////////////////////////////////////////////////

    #ifdef CHECK_FORMAT_WITH_GNU_C
        int efprintf(FILE *stream, char const *format, ...)
            CHECK_EPRINTF_FORMAT(2, 3);
    #else
        int efprintf(FILE *stream, char const *format, ...);
    #endif

    //   _   _            _           _ _
    //  | | | |          (_)         | (_)
    //  | | | | __ _ _ __ _  __ _  __| |_  ___
    //  | | | |/ _` | '__| |/ _` |/ _` | |/ __|
    //  \ \_/ / (_| | |  | | (_| | (_| | | (__
    //   \___/ \__,_|_|  |_|\__,_|\__,_|_|\___|
    //

    ////////////////////////////////////////////////////////////
    ///
    /// \brief evprintf function functions nearly the same as vprintf
    ///        prints the formatted string to stdout
    ///
    /// \param format format of the output
    ///
    /// \param ap variadic list
    ///
    /// \return size of the formatted output (returns -1 in case of error)
    ///
    ////////////////////////////////////////////////////////////

    #ifdef CHECK_FORMAT_WITH_GNU_C
        int evprintf(char const *format, va_list *ap)
            CHECK_EPRINTF_FORMAT(1, 0);
    #else
        int evprintf(char const *format, va_list *ap);
    #endif

    ////////////////////////////////////////////////////////////
    ///
    /// \brief evdprintf function functions nearly the same as
    ///        dprintf prints the formatted string to the specified fd
    ///        if the fd is between 0 and 2 chose to redirect it to file stream
    ///        stdin stdout or stderr
    ///
    /// \param stream file stream to write in
    ///
    /// \param format format of the output
    ///
    /// \param ap variadic list
    ///
    /// \return size of the formatted output (returns -1 in case of error)
    ///
    ////////////////////////////////////////////////////////////

    #ifdef CHECK_FORMAT_WITH_GNU_C
        int evdprintf(int fd, char const *format, va_list *ap)
            CHECK_EPRINTF_FORMAT(2, 0);
    #else
        int evdprintf(int fd, char const *format, va_list *ap);
    #endif

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Own implementation of vasprintf (does not work the same way)
    ///        if the given buffer is non NULL asprintf will free it before
    ///        setting everything in the new one
    ///
    /// \param buff buffer to write in
    ///
    /// \param format format of the output
    ///
    /// \param ap variadic list
    ///
    /// \return size of the formatted output (returns -1 in case of error)
    ///
    ////////////////////////////////////////////////////////////

    #ifdef CHECK_FORMAT_WITH_GNU_C
        int evasprintf(char **buff, char const *format, va_list *ap)
            CHECK_EPRINTF_FORMAT(2, 0);
    #else
        int evasprintf(char **buff, char const *format, va_list *ap);
    #endif

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Is a an alias to evdprintf writes directly on stream.__fileno
    ///
    /// \param stream file stream to write in
    ///
    /// \param format format of the output
    ///
    /// \param ap variadic list
    ///
    /// \return size of the formatted output (returns -1 in case of error)
    ///
    ////////////////////////////////////////////////////////////

    #ifdef CHECK_FORMAT_WITH_GNU_C
        int evfprintf(FILE *stream, char const *format, va_list *ap)
            CHECK_EPRINTF_FORMAT(2, 0);
    #else
        int evfprintf(FILE *stream, char const *format, va_list *ap);
    #endif

    //  ______
    //  | ___ |
    //  | |_/ /_ _ _ __ ___  ___ _ __
    //  |  __/ _` | '__/ __|/ _ \ '__|
    //  | | | (_| | |  \__ \  __/ |
    //  \_|  \__,_|_|  |___/\___|_|
    //

    ////////////////////////////////////////////////////////////
    ///
    /// \brief alias to keep code clean from weird pointer arithmetic
    ///        get the pointer at format + n
    ///
    /// \param format format string
    ///
    /// \param n size to go forward
    ///
    /// \return a pointer to format + n
    ///
    ////////////////////////////////////////////////////////////

    __always_inline static inline char const *get_format_at_index(
        char const **format, size_t n)
    {
        return ((*format) + n);
    }

    ////////////////////////////////////////////////////////////
    ///
    /// \brief alias to keep code clean from weird pointer arithmetic
    ///        set format pointer as format + n
    ///
    /// \param format format string
    ///
    /// \param n size to go forward
    ///
    ////////////////////////////////////////////////////////////

    __always_inline static inline void consume_format_char(
        char const **format, size_t n)
    {
        *format = get_format_at_index(format, n);
    }

    ////////////////////////////////////////////////////////////
    ///
    /// \brief alias to keep code clean from weird pointer arithmetic
    ///        get the char at format + n
    ///
    /// \param format format string
    ///
    /// \param n size to go forward
    ///
    /// \return the char at format + n
    ///
    ////////////////////////////////////////////////////////////

    __always_inline static inline char get_char_format_at_index(
        char const **format,size_t n)
    {
        return (*(get_format_at_index(format, n)));
    }

    ////////////////////////////////////////////////////////////
    ///
    /// \brief where the parsing of the format string is done
    ///
    /// \param format format string
    ///
    /// \param ap variadic lits
    ///
    /// \return EPRINTF_SUCCESS on sucess or EPRINTF_FAILURE on failure
    ///
    ////////////////////////////////////////////////////////////

    ssize_t eprintf_parser(char const *format, va_list *ap);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief get the flag modifiers padding info and len modifier
    ///
    /// \param format format string
    ///
    /// \param ap variadic lits
    ///
    /// \return eprintf_mod_t structure containing parsing info
    ///
    ////////////////////////////////////////////////////////////

    eprintf_mod_t get_eprintf_modifications(char const **format, va_list *ap);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief get the flag modifiers and padding info
    ///
    /// \param format format string
    ///
    /// \param mod structure containing padding info
    ///
    /// \param ap variadic lits
    ///
    ////////////////////////////////////////////////////////////

    void get_eprintf_flag_modifiers(char const **format,
        eprintf_mod_t *mod, va_list *ap);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief get the len modifiers
    ///
    /// \param format format string
    ///
    /// \param mod structure containing padding info
    ///
    ////////////////////////////////////////////////////////////

    void mod_eprintf_len_flags(char const **format, eprintf_mod_t *mod);

    ////////////////////////////////////////////////////////////
    ///
    ///  Check wheter is the same flag in parsing
    ///
    /// Example : %3.f   ? Does it find 'f'
    ///
    ////////////////////////////////////////////////////////////

    #define IS_SAME_FLAG(format, offset, flag_array, index) \
        get_char_format_at_index(format, offset) == flag_array[index].flag || \
        get_char_format_at_index(format, offset) == flag_array[index].flag2

    ////////////////////////////////////////////////////////////
    ///
    ///  Check wheter is the same format
    ///
    ///  is used the for the len modifier check
    ///
    ////////////////////////////////////////////////////////////

    #define HAS_SAME_FORMAT(format, offset, flag, len) \
        estrncmp(get_format_at_index(format, offset), flag, len) == 0

    //   _                     _
    //  | |                   | |
    //  | |     ___   ___ __ _| |
    //  | |    / _ \ / __/ _` | |
    //  | |___| (_) | (_| (_| | |
    //  \_____/\___/ \___\__,_|_|
    //

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Append the padding for printf
    ///
    /// \param size how many spaces or zero
    ///
    /// \param iszero should append space or zeroes
    ///
    ////////////////////////////////////////////////////////////

    void eprintf_append_padding(int size, bool iszero);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Does arithmetic on signed conversion for padding
    ///
    /// \param v   the int value (in case of a number)
    ///
    /// \param len  how much is going to be printed obligatory
    ///
    /// \param mod  structure to do arithmetic conversion
    ///
    ////////////////////////////////////////////////////////////

    void get_signed_conversion_padding(int64_t v, int len, eprintf_mod_t *mod);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Does arithmetic on unsigned conversion for padding
    ///
    /// \param len  how much is going to be printed obligatory
    ///
    /// \param mod  structure to do arithmetic conversion
    ///
    ////////////////////////////////////////////////////////////

    void get_unsigned_conversion_padding(int len, eprintf_mod_t *mod);

    ////////////////////////////////////////////////////////////
    ///
    /// Facilitate conversion for padding on signed numbers
    ///
    ////////////////////////////////////////////////////////////

    #define GET_NEW_SIGNED_PADDING(actual, to_remove) \
        actual = (actual - to_remove > 0) ? actual - to_remove : 0

    ////////////////////////////////////////////////////////////
    ///
    /// Facilitate conversion for padding on unsigned numbers
    ///
    ////////////////////////////////////////////////////////////

    #define GET_NEW_UNSIGNED_PADDING(actual, to_remove) \
        actual = ((int64_t)actual - (int64_t)to_remove > 0) ? \
            actual - to_remove : 0

    ////////////////////////////////////////////////////////////
    ///
    ///  Set the precision at default given if precsion
    ///  is still equivalent to -1
    ///
    ////////////////////////////////////////////////////////////

    #define SET_PRECISION(precision, default) \
        precision = (precision != -1) ? precision : default;

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Get the pointer to variadic argument and sets it in the union arg
    ///
    /// \param ap variadic list
    ///
    /// \return union with value set at uintptr_t pointer value
    ///
    ////////////////////////////////////////////////////////////

    union eprintf_arg get_eprintf_ptr(va_list *ap);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Get the pointer to an int * and sets the value at how much
    ///        has been already append to the buffer
    ///
    /// \param ap variadic list
    ///
    ////////////////////////////////////////////////////////////

    void eprintf_local_getsize(va_list *ap);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Get char value trough union arg set it to the buffer
    ///        along with necessary padding
    ///
    /// \param ap variadic list
    ///
    /// \param mod structure containing padding info
    ///
    ////////////////////////////////////////////////////////////

    void eprintf_local_char(va_list *ap, eprintf_mod_t *mod);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Get int value trough union arg set it to the buffer
    ///        along with necessary padding
    ///
    /// \param ap variadic list
    ///
    /// \param mod structure containing padding info
    ///
    ////////////////////////////////////////////////////////////

    void eprintf_local_int(va_list *ap, eprintf_mod_t *mod);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Get str pointer trough union arg set it to the buffer
    ///        along with necessary padding
    ///
    /// \param ap variadic list
    ///
    /// \param mod structure containing padding info
    ///
    ////////////////////////////////////////////////////////////

    void eprintf_local_str(va_list *ap, eprintf_mod_t *mod);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Get uint value trough union arg set it to the buffer
    ///        along with necessary padding
    ///
    /// \param ap variadic list
    ///
    /// \param mod structure containing padding info
    ///
    ////////////////////////////////////////////////////////////

    void eprintf_local_uint(va_list *ap, eprintf_mod_t *mod);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Get uint value
    ///        trough union transform it in base 8 arg set it to the buffer
    ///        along with necessary padding
    ///
    /// \param ap variadic list
    ///
    /// \param mod structure containing padding info
    ///
    ////////////////////////////////////////////////////////////

    void eprintf_local_oct(va_list *ap, eprintf_mod_t *mod);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Get uint value
    ///        trough union transform it in base 16 arg set it to the buffer
    ///        along with necessary padding (set in lowercase)
    ///
    /// \param ap variadic list
    ///
    /// \param mod structure containing padding info
    ///
    ////////////////////////////////////////////////////////////

    void eprintf_local_hex_min(va_list *ap, eprintf_mod_t *mod);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Get uint value
    ///        trough union transform it in base 16 arg set it to the buffer
    ///        along with necessary padding (set in uppercase)
    ///
    /// \param ap variadic list
    ///
    /// \param mod structure containing padding info
    ///
    ////////////////////////////////////////////////////////////

    void eprintf_local_hex_max(va_list *ap, eprintf_mod_t *mod);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Get double value
    ///        directly through va_arg() macro
    ///        and set it to the buffer
    ///        along with necessary padding (set in uppercase)
    ///
    /// \param ap variadic list
    ///
    /// \param mod structure containing padding info
    ///
    ////////////////////////////////////////////////////////////

    void eprintf_local_double(va_list *ap, eprintf_mod_t *mod);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Get uint value
    ///        trough union transform it in base 16 arg set "0x" to the buffer
    ///        then set value to the buffer
    ///        along with necessary padding (set in uppercase)
    ///
    /// \param ap variadic list
    ///
    /// \param mod structure containing padding info
    ///
    ////////////////////////////////////////////////////////////

    void eprintf_local_ptr(va_list *ap, eprintf_mod_t *mod);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Get unsigned value trough union and returns it
    ///
    /// \param ap variadic list
    ///
    /// \param mod structure containing padding info
    ///
    /// \return value chosen with len modifier
    ///
    ////////////////////////////////////////////////////////////

    uint64_t get_unsigned_arg(va_list *ap, u_int8_t mod);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Get signed value trough union and returns it
    ///
    /// \param ap variadic list
    ///
    /// \param mod structure containing padding info
    ///
    /// \return value chosen with len modifier
    ///
    ////////////////////////////////////////////////////////////

    int64_t get_signed_arg(va_list *ap, u_int8_t mod);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Get pointer value trough union and returns it
    ///
    /// \param ap variadic list
    ///
    /// \param mod structure containing padding info
    ///
    /// \return value chosen with len modifier
    ///
    ////////////////////////////////////////////////////////////

    void *get_ptr_arg(va_list *ap, u_int8_t mod);

    ////////////////////////////////////////////////////////////
    ///
    ///  Constant to determine the number of flags
    ///
    ////////////////////////////////////////////////////////////

    #define NB_EPRINTF_FLAGS    9

    //  ___  ____
    //  |  \/  (_)
    //  | .  . |_ ___  ___
    //  | |\/| | / __|/ __|
    //  | |  | | \__ \ (__
    //  \_|  |_/_|___/\___|
    //

    ////////////////////////////////////////////////////////////
    ///
    /// \brief check format string
    ///
    /// \param format
    ///
    /// \return returns true if is lightly well formtatted
    ///
    ////////////////////////////////////////////////////////////

    bool check_eprintf_format(char const *format);

#endif /* !__LIBERTY__EPRINTF__H__ */
