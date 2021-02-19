/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** emalloc
*/

#include <stdlib.h>
#include <erty/ewrite.h>

void *emalloc(size_t size)
{
    void *ptr = malloc(size);

    if (ptr == NULL) {
        efwrite(stderr, "Allocation failed", 17);
        exit(0);
    }
    return (malloc(size));
}
