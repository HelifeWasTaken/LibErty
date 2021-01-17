/*
** EPITECH PROJECT, 2021
** LibErty
** File description:
** init
*/

#include <erty/esstring.h>

static const void *FUNCTIONS_POINTERS_SSTR[] = {
    assign_sstr,
    assign_cstr,
    append_sstr,
    append_cstr,
    at_sstr,
    compare_sstr,
    compare_cstr,
    ncompare_sstr,
    ncompare_cstr,
    assign_n_from_cstr,
    assign_n_from_sstr,
    sstr_to_buf,
    print_sstr,
    free_sstr
};

string_t init_string(char *buffer)
{
    string_t this = {0};

    if (buffer) {
        assign_cstr(&this, buffer);
    } else {
        this.size = 0;
        this.str = NULL;
    }
    ememcpy(&this.assign_sstr, FUNCTIONS_POINTERS_SSTR,
        sizeof(FUNCTIONS_POINTERS_SSTR));
    return (this);
}