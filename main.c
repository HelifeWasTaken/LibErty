/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** aled
*/

#include <string.h>
#include <stdlib.h>
#include <estdlib.h>
#include <estring.h>
#include <efd.h>
#include <stdio.h>
#include <ebuffer.h>
#include <linked_split.h>
#include <eprintf.h>
#include <SFML/Graphics.h>


int main(void)
{
    char *buff = NULL;

    easprintf(&buff, "%d\n", 54.34f);
    efputs(stdout, buff);
    efree_buff();
    efree(buff);
    return (0);
}
