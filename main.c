/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** aled
*/

#include <erty/estdio.h>
#include <string.h>
#include <stdlib.h>
#include <erty/estdlib.h>
#include <erty/ecstring.h>
#include <erty/efd.h>
#include <stdio.h>
#include <erty/ebuffer.h>
#include <erty/linked_split.h>
#include <erty/eprintf.h>
#include <erty/esstring.h>
#include <malloc.h>

int main(void)
{
    size_t size = (size_t)"hello" + (size_t)"lol";
    ebuff_t *buff = ecreate_buff(NULL);
    if (!buff)
        printf("Buffer create failed but did not segv\n");
    else
        printf("Buffer create sucesfully\n");
    char *calloced_buff = calloc(size, 1);

    if (!calloced_buff)
        printf("Calloced buffer failed to be allocated\n");
    else
        printf("Calloced buffer has been sucessfully allocated\n");
    for (size_t i = 0; i < 100; i++) {
        if (eappend_buff_nbytes(&buff, calloced_buff, size) != -1)
            printf("Append success: %d\n", i);
        else
            printf("Append failed but did not segv : %d\n", i);
        fflush(stdout);
    }
    efree_buff(&buff);
    free(calloced_buff);
    return (0);
}
