/*
** EPITECH PROJECT, 2021
** LibErty
** File description:
** esstring
*/

#ifndef __LIBERTY__SSTRING__H__
    #define __LIBERTY__SSTRING__H__

    #include <erty/ectypes.h>
    #include <erty/ecstring.h>

    typedef struct string_class string_t;

    struct string_class {
        char    *str;
        size_t  size;
        void    (*assign_sstr)(string_t *this, const string_t *sstring);
        void    (*assign_cstr)(string_t *this, const_cstr_t cstring);
        void    (*append_sstr)(string_t *this, string_t *sstring);
        void    (*append_cstr)(string_t *this, cstr_t cstring);
        char   *(*at)(const string_t *this, size_t pos);
        i32_t   (*compare_sstr)(const string_t *this, const string_t *sstring);
        i32_t   (*compare_cstr)(const string_t *this, cstr_t cstring);
        i32_t   (*ncompare_sstr)(const string_t *this,
                const string_t *sstring, size_t n);
        i32_t   (*ncompare_cstr)(const string_t *this, const_cstr_t cstring,
                size_t n);
        void    (*assign_n_cstr)(string_t *self, const_cstr_t s, size_t n);
        void    (*assign_n_sstr)(string_t *self, string_t *sstring, size_t n);
        char   *(*to_buf)(string_t *this);
        ssize_t (*print)(const string_t *this);
        void    (*free)(string_t *this);
    };

    void free_sstr(string_t *this);
    void assign_sstr(string_t *this, const string_t *sstring);
    void assign_cstr(string_t *this, const_cstr_t cstring);
    void append_sstr(string_t *this, string_t *sstring);
    void append_cstr(string_t *this, cstr_t cstring);
    void assign_n_from_cstr(string_t *self, const_cstr_t s, size_t n);
    void assign_n_from_sstr(string_t *self, string_t *sstring, size_t n);
    cstr_t at_sstr(const string_t *this, size_t pos);
    i32_t compare_cstr(const string_t *this, cstr_t cstring);
    i32_t compare_sstr(const string_t *this, const string_t *sstring);
    i32_t ncompare_cstr(const string_t *this, const_cstr_t cstring, size_t n);
    i32_t ncompare_sstr(const string_t *this,
                        const string_t *sstring, size_t n);
    ssize_t print_sstr(const string_t *this);
    cstr_t sstr_to_buf(string_t *this);
    string_t init_string(cstr_t buffer);

#endif /* !__LIBERTY__SSTRING__H__ */