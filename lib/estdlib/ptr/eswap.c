/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** eswap
*/

void eswap(int *a, int *b)
{
    int c = *a;

    *a = *b;
    *b = c;
}