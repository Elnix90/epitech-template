/*
** EPITECH PROJECT, 2026
** my_swap.c
** File description:
** my_swap
*/

void my_swap(int *a, int *b)
{
    int tmp = *a;

    *a = *b;
    *b = tmp;
}
