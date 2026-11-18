/*
** EPITECH PROJECT, 2026
** my_isneg.c
** File description:
** My imlementation of isneg function
*/

#include "include/my.h"

int my_isneg(int nb)
{
    if (nb < 0)
        my_putchar('N');
    else
        my_putchar('P');
    return 0;
}
