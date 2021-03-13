/*
** EPITECH PROJECT, 2021
** LibErty
** File description:
** eregex
*/

#include <erty/eregex.h>
#include <erty/ectypes.h>

static int match_it(char *expr, char const *regexpr, char **endptr);

static int match_prev(char const prev, char *expr,
        char const *regexpr, char **endptr)
{
    do {
        if (match_it(expr, regexpr, endptr))
            return (1);
    } while (*expr && (*expr++ == prev || prev == '.'));
    return (0);
}

static int match_it(char *expr, char const *regexpr, char **endptr)
{
    if (*regexpr == '\0') {
        *endptr = expr;
        return (1);
    }
    if (*(regexpr + 1) == '*')
        return (match_prev(*regexpr, expr, regexpr + 2, endptr));
    if (*regexpr == '$' && *(regexpr + 1) == '\0' && *expr == '\0') {
        *endptr = expr;
        return (1);
    }
    if ((*expr && *regexpr == '.') || (*expr && *regexpr == *expr))
        return (match_it(expr + 1, regexpr + 1, endptr));
    return (0);
}

int regex(char *expr, char const *regexpr, char **startptr, char **endptr)
{
    do {
        if (match_it(expr, regexpr, endptr)) {
            *startptr = expr;
            return (1);
        }
    } while (*expr++);
    return (0);
}
