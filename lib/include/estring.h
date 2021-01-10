/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** estring
*/

#ifndef __LIBERTY__ESTRING__H__
    #define __LIBERTY__ESTRING__H__

    ////////////////////////////////////////////////////////////
    // Headers
    ////////////////////////////////////////////////////////////

    #include <ectypes.h>
    #include <ealloc.h>

    //   _____
    //  /  __ |
    //  | /  \/ ___  _ __ ___  _ __   __ _ _ __ ___
    //  | |    / _ \| '_ ` _ \| '_ \ / _` | '__/ _ |
    //  | \__/\ (_) | | | | | | |_) | (_| | | |  __/
    //   \____/\___/|_| |_| |_| .__/ \__,_|_|  \___|
    //                        | |
    //                        |_|

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Compute the size of a string
    ///
    /// \param str string to compute size
    ///
    /// \return the size of the string
    ///
    ////////////////////////////////////////////////////////////

    size_t estrlen(char const *str);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Compare two strings
    ///
    /// \param s1 string 1 to compare
    ///
    /// \param s2 string 2 to compare
    ///
    /// \return returns 0 if no changes are found -1 if s1[i] < s2[i] when
    ///         a difference is found and 1 if s1[i] > s2[i] when a difference
    ///         is found
    ///
    ////////////////////////////////////////////////////////////

    int estrcmp(char const *s1, char const *s2);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Find a char in a string
    ///
    /// \param s1 string 1 to compare
    ///
    /// \param c char (promoted to int) to find
    ///
    /// \return returns a pointer to where char is found
    ///         if nothing was found returns NULL
    ///
    ////////////////////////////////////////////////////////////

    char *estrchr(char *str, int c);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Compare two strings up to n
    ///
    /// \param s1 string 1 to compare
    ///
    /// \param s2 string 2 to compare
    ///
    /// \return returns s1[i] - s2[i]
    ///
    ////////////////////////////////////////////////////////////

    int estrncmp(char const *s1, char const *s2, size_t n);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Find a string inside another one
    ///
    /// \param s1 string to parse
    ///
    /// \param s2 string to find
    ///
    /// \return returns a pointer to where the string is found
    ///         if nothing was found returns NULL
    ///
    ////////////////////////////////////////////////////////////

    char *estrstr(char *haystack, char const *needle);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Count how many times you find a string in another one
    ///
    /// \param buf string to parse
    ///
    /// \param occurence string to find
    ///
    /// \return returns the numbers of time occurence has been found in buf
    ///
    ////////////////////////////////////////////////////////////

    size_t ecount_occurences(char const *buf, char *occurence);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Check if a starts ends with another one
    ///
    /// \param haystack string to parse
    ///
    /// \param needle string to find
    ///
    /// \return returns true or false
    ///
    ////////////////////////////////////////////////////////////

    bool estartswith(char const *haystack, char const *needle);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Check if a strings ends with another one
    ///
    /// \param haystack string to parse
    ///
    /// \param needle string to find
    ///
    /// \return returns true or false
    ///
    ////////////////////////////////////////////////////////////

    bool eendswith(char const *haystack, char const *needle);

    ///////////////////         CPY         /////////////////////

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Copies a string into an another one the string dest must have
    ///        enough space to copies everything
    ///
    /// \param src string to copy
    ///
    /// \param dest string that receive
    ///
    /// \return Returns a pointer to copied string which is 0 terminated
    ///
    ////////////////////////////////////////////////////////////

    char *estrcpy(char *dest, char const *src);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Copies a string into an another one up to n bytes
    ///        if the lenght of src is less than n the rest is
    ///        filled with zero
    ///        The dest string must be allocated of at least n
    ///
    /// \param src string to copy
    ///
    /// \param dest string that receive
    ///
    /// \param n size to copy
    ///
    /// \return Returns a pointer to the copied string
    ///         (who might not be 0 terminated)
    ///
    ////////////////////////////////////////////////////////////

    char *estrncpy(char *dest, char const *str, size_t n);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Allocates a string of the lenght of src + 1
    ///        and copies the src string then returns
    ///        the allocated pointer to the new string
    ///
    /// \param src string to copy
    ///
    /// \return Returns a pointer to the copied string which is 0 terminated
    ///         If allocation failed returns a pointer to NULL
    ///
    ////////////////////////////////////////////////////////////

    char *estrdup(char const *src);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Allocates a string of n + 1
    ///        if the lenght of src is less than n the rest is
    ///        filled with zero
    ///
    /// \param src string to copy
    ///
    /// \param dest string that receive
    ///
    /// \param n size to copy
    ///
    /// \return Returns a pointer to the copied string which is 0 terminated
    ///         If allocation failed returns a pointer to NULL
    ///
    ////////////////////////////////////////////////////////////

    char *estrndup(char *src, size_t n);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Concatenate src to dest (dest must allocated enough to hold src)
    ///        and dest must be 0 terminated
    ///
    /// \param src string to append
    ///
    /// \param dest string that is being append
    ///
    /// \return Returns a pointer to the copied string that is 0 terminated
    ///
    ////////////////////////////////////////////////////////////

    char *estrcat(char *dest, char *src);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief transforming a string to a double array which is splitted by
    ///        the delim string
    ///
    /// \param buf string to parse
    ///
    /// \param delim string that is used to delimatate
    ///
    /// \return Returns an allocated double array from the string splitted
    ///         Returns a pointer to null if the double array allocation failed
    ///
    ////////////////////////////////////////////////////////////

    char **esplit(char *buf, char *delim);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Frees a double array
    ///
    /// \param buf array to free
    ///
    ////////////////////////////////////////////////////////////

    void free_esplit(char **buf);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Allocates a string to the len of s1 + len of s2 + 1
    ///        and concatenates the two into the new one then free s1 and s2
    ///
    /// \param s1 string 1 to copy
    ///
    /// \param s2 string 2 to concat
    ///
    /// \return Returns an allocated string from the
    ///         concatenation of the two others
    ///         Returns a pointer to null if the double array allocation failed
    ///
    ////////////////////////////////////////////////////////////

    char *econcat(char *s1, char *s2);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Allocates a string to the len of each string in the double
    ///        array until NULL and concatenates them all
    ///        If the delimiter is non NULL each concatenations will be followed
    ///        by the delimiter except the last one
    ///        Do not forget NULL terminating
    ///
    /// \param array to concat
    ///
    /// \param delim delimter of the string
    ///
    /// \return Returns an allocated string from the
    ///         concatenation of the two others with the delimeter if non NULL
    ///         Returns a pointer to null if the allocation failed
    ///
    ////////////////////////////////////////////////////////////

    char *earrconcat(char **array, char *delimiter);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Returns an allocated string from specified start
    ///        and specified end
    ///        if start < 0 start will be equivalent to
    ///        ABS(start) - estrlen(start);
    ///
    /// \param array to concat
    ///
    /// \param delim delimter of the string
    ///
    /// \return Returns an allocated string from specified start and
    ///         specified end
    ///         If start > end or start > len(str) returns NULL
    ///         If the allocation failed returns NULL
    ///
    ////////////////////////////////////////////////////////////

    char *egetsubstr(char *str, int64_t start, int64_t end);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Get the len of a double array
    ///
    /// \param ptr pointer to the array
    ///
    /// \return Returns the size of an array
    ///
    ////////////////////////////////////////////////////////////

    size_t earray_len(void *ptr);

    ////////////////////////////////////////////////////////////
    ///
    ///  Concatenates a variadic number of string
    ///
    ////////////////////////////////////////////////////////////

    #define ECONCAT(...) \
        earrconcat((char *[]){"", ## __VA_ARGS__, NULL}, NULL)

    ////////////////////////////////////////////////////////////
    ///
    ///  Concatenates a variadic number of string with a delimiter
    ///
    ////////////////////////////////////////////////////////////

    #define EJOIN(delimiter, ...) \
        earrconcat((char *[]){"", ## __VA_ARGS__, NULL}, delimiter)

    //   _____  _____
    //  |_   _||_   _|
    //    | | ___| |_   _ _ __   ___
    //    | |/ __| | | | | '_ \ / _ |
    //   _| |\__ \ | |_| | |_) |  __/
    //   \___/___|_/\__, | .__/ \___|
    //               __/ | |
    //              |___/|_|

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Check the string is alpha
    ///
    /// \param str string to parse
    ///
    /// \return true or false
    ///
    ////////////////////////////////////////////////////////////

    bool estr_isalpha(char const *str);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Check the string is num
    ///
    /// \param str string to parse
    ///
    /// \return true or false
    ///
    ////////////////////////////////////////////////////////////

    bool estr_isnum(char const *str);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Check the string is lower
    ///
    /// \param str string to parse
    ///
    /// \return true or false
    ///
    ////////////////////////////////////////////////////////////

    bool estr_islower(char const *str);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Check the string is upper
    ///
    /// \param str string to parse
    ///
    /// \return true or false
    ///
    ////////////////////////////////////////////////////////////

    bool estr_isupper(char const *str);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Check the string is alphanum
    ///
    /// \param str string to parse
    ///
    /// \return true or false
    ///
    ////////////////////////////////////////////////////////////

    bool estr_isalphanum(char const *str);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Check the string is printable
    ///
    /// \param str string to parse
    ///
    /// \return true or false
    ///
    ////////////////////////////////////////////////////////////

    bool estr_isprintable(char const *str);

    //  ___  ___
    //  |  \/  |
    //  | .  . | ___ _ __ ___
    //  | |\/| |/ _ \ '_ ` _ |
    //  | |  | |  __/ | | | | |
    //  \_|  |_/\___|_| |_| |_|
    //

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Copies a void * casted to string into an another
    ///        pointer (void *) also casted to string up to n bytes
    ///        The void *ptr must be allocated of at least n as well of the
    ///        src
    ///
    /// \param src pointer to copy
    ///
    /// \param dest string that receive
    ///
    /// \param size size to copy
    ///
    /// \return Returns a pointer to the copied pointer
    ///
    ////////////////////////////////////////////////////////////

    void *ememcpy(void *dest, void const *src, size_t size);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Sets void * casted to string to a choice c up to n bytes
    ///
    /// \param ptr pointer to set
    ///
    /// \param c value to set
    ///
    /// \param size size to set
    ///
    /// \return Returns a pointer to the start of the ptr setted to c
    ///
    ////////////////////////////////////////////////////////////

    void *ememset(void *ptr, int c, size_t size);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Compare two void * casted to string up to n bytes
    ///        The two void * must have their values setted to n bytes
    ///
    /// \param src pointer_1 to compare
    ///
    /// \param dest pointer_2 to compare
    ///
    /// \param size size to compare
    ///
    /// \return Returns 0 if nothing differed
    ///         returns 1 if *s1 > *s2 when a difference was found
    ///         returns -1 if *s1 < *s2 when a difference was found
    ///
    ////////////////////////////////////////////////////////////

    int ememcmp(void const *s1, void const *s2, size_t n);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Sets void * casted to string to 0 up to n bytes
    ///
    /// \param ptr pointer to set
    ///
    /// \param size size to set
    ///
    /// \return Returns a pointer to the start of the ptr setted to 0
    ///
    ////////////////////////////////////////////////////////////

    void *ebzero(void *ptr, size_t size);

    //   _   _                 _
    //  | \ | |               | |
    //  |  \| |_   _ _ __ ___ | |__   ___ _ __ ___
    //  | . ` | | | | '_ ` _ \| '_ \ / _ \ '__/ __|
    //  | |\  | |_| | | | | | | |_) |  __/ |  \__ |
    //  \_| \_/\__,_|_| |_| |_|_.__/ \___|_|  |___/
    //

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Get the size of a signed number converted to base_size
    ///
    /// \param nb value
    ///
    /// \param base_size base
    ///
    /// \return Returns the size of the signed number conveted to base_size
    ///
    ////////////////////////////////////////////////////////////

    uint64_t enb_baselen(int64_t nb, uint8_t base_size);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Get the size of a signed number in base 10
    ///
    /// \param nb value
    ///
    /// \param base_size base
    ///
    /// \return Returns the size of the signed number in base 10
    ///
    ////////////////////////////////////////////////////////////

    uint64_t enblen(int64_t nb);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Get the size of a unsigned number converted to base_size
    ///
    /// \param nb value
    ///
    /// \param base_size base
    ///
    /// \return Returns the size of the unsigned number conveted to base_size
    ///
    ////////////////////////////////////////////////////////////

    uint64_t eunb_baselen(uint64_t nb, uint8_t base_size);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Get the size of an unsigned number in base 10
    ///
    /// \param nb value
    ///
    /// \param base_size base
    ///
    /// \return Returns the size of the unsigned number in base 10
    ///
    ////////////////////////////////////////////////////////////

    uint64_t eunblen(uint64_t nb);

    //  ___  ____
    //  |  \/  (_)
    //  | .  . |_ ___  ___
    //  | |\/| | / __|/ __|
    //  | |  | | \__ \ (__
    //  \_|  |_/_|___/\___|
    //

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Reverse a string (pointer must not be const)
    ///
    /// \param str string to reverse
    ///
    /// \return Returns a pointer to the reversed string
    ///
    ////////////////////////////////////////////////////////////

    char *erevstr(char *str);

    ////////////////////////////////////////////////////////////
    ///
    /// \brief Capitalize a string (pointer must not be const)
    ///        vOiCI.uNEXEMPLE0Sim0ple gives Voici.Unexemple0simple
    ///
    /// \param str string to capitalize
    ///
    /// \return Returns a pointer to the capitalized string
    ///
    ////////////////////////////////////////////////////////////

    char *estr_capitalize(char *str);

    ////////////////////////////////////////////////////////////
    ///
    ///  Get the lenght of a variable
    ///
    ////////////////////////////////////////////////////////////

    #define len(x) _Generic((x), \
        char *: estrlen, \
        char const *: estrlen, \
        char **: earray_len, \
        char const **: earray_len, \
        int **: earray_len, \
        int const **: earray_len, \
        int: enblen, \
        unsigned int: enblen, \
        long: enblen, \
        unsigned long: enblen, \
        long long: enblen, \
        unsigned long long: enblen) \
        (x)

#endif /* !__LIBERTY__ESTRING__H__ */
